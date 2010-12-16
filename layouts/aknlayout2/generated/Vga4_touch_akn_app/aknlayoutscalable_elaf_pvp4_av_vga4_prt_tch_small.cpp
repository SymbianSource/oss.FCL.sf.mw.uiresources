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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001e7a5 };

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
0x5be1,	// (0x00024386) Screen

0x5bed,	// (0x00024392) application_window_ParamLimits

0x5bed,	// (0x00024392) application_window

0x1210,	// (0x0001f9b5) screen_g1

0x5c49,	// (0x000243ee) area_bottom_pane_ParamLimits

0x5c49,	// (0x000243ee) area_bottom_pane

0x5d0f,	// (0x000244b4) area_top_pane_ParamLimits

0x5d0f,	// (0x000244b4) area_top_pane

0x5da3,	// (0x00024548) main_pane_ParamLimits

0x5da3,	// (0x00024548) main_pane

0x121a,	// (0x0001f9bf) misc_graphics

0x94ef,	// (0x00027c94) battery_pane_ParamLimits

0x94ef,	// (0x00027c94) battery_pane

0xa1b3,	// (0x00028958) bg_status_flat_pane_g8

0xa1bb,	// (0x00028960) bg_status_flat_pane_g9

0x95b7,	// (0x00027d5c) context_pane_ParamLimits

0x95b7,	// (0x00027d5c) context_pane

0x96db,	// (0x00027e80) navi_pane_ParamLimits

0x96db,	// (0x00027e80) navi_pane

0x9769,	// (0x00027f0e) signal_pane_ParamLimits

0x9769,	// (0x00027f0e) signal_pane

0x0008,

0xf852,	// (0x0002dff7) bg_status_flat_pane_g

0x97d6,	// (0x00027f7b) status_pane_g1_ParamLimits

0x97d6,	// (0x00027f7b) status_pane_g1

0x97e2,	// (0x00027f87) status_pane_g2_ParamLimits

0x97e2,	// (0x00027f87) status_pane_g2

0x97ee,	// (0x00027f93) status_pane_g3_ParamLimits

0x97ee,	// (0x00027f93) status_pane_g3

0x0004,

0xf779,	// (0x0002df1e) status_pane_g_ParamLimits

0xf779,	// (0x0002df1e) status_pane_g

0x9822,	// (0x00027fc7) title_pane_ParamLimits

0x9822,	// (0x00027fc7) title_pane

0x985f,	// (0x00028004) uni_indicator_pane_ParamLimits

0x985f,	// (0x00028004) uni_indicator_pane

0x941b,	// (0x00027bc0) bg_list_pane_ParamLimits

0x941b,	// (0x00027bc0) bg_list_pane

0x943b,	// (0x00027be0) find_pane

0x9443,	// (0x00027be8) listscroll_app_pane_ParamLimits

0x9443,	// (0x00027be8) listscroll_app_pane

0x944f,	// (0x00027bf4) listscroll_form_pane

0x720b,	// (0x000259b0) listscroll_gen_pane_ParamLimits

0x720b,	// (0x000259b0) listscroll_gen_pane

0x721f,	// (0x000259c4) listscroll_set_pane

0x64ea,	// (0x00024c8f) main_idle_act_pane

0x9114,	// (0x000278b9) main_idle_trad_pane

0x9114,	// (0x000278b9) main_list_empty_pane

0x9443,	// (0x00027be8) main_midp_pane

0x9469,	// (0x00027c0e) main_pane_g1_ParamLimits

0x9469,	// (0x00027c0e) main_pane_g1

0x7227,	// (0x000259cc) popup_ai_message_window_ParamLimits

0x7227,	// (0x000259cc) popup_ai_message_window

0x72db,	// (0x00025a80) popup_fep_china_uni_window_ParamLimits

0x72db,	// (0x00025a80) popup_fep_china_uni_window

0x733b,	// (0x00025ae0) popup_fep_japan_candidate_window_ParamLimits

0x733b,	// (0x00025ae0) popup_fep_japan_candidate_window

0x7365,	// (0x00025b0a) popup_fep_japan_predictive_window_ParamLimits

0x7365,	// (0x00025b0a) popup_fep_japan_predictive_window

0x739b,	// (0x00025b40) popup_find_window

0x73a8,	// (0x00025b4d) popup_grid_graphic_window_ParamLimits

0x73a8,	// (0x00025b4d) popup_grid_graphic_window

0x73d8,	// (0x00025b7d) popup_large_graphic_colour_window

0x73fe,	// (0x00025ba3) popup_menu_window_ParamLimits

0x73fe,	// (0x00025ba3) popup_menu_window

0x75c8,	// (0x00025d6d) popup_note_image_window

0x75b2,	// (0x00025d57) popup_note_wait_window_ParamLimits

0x75b2,	// (0x00025d57) popup_note_wait_window

0x75b2,	// (0x00025d57) popup_note_window_ParamLimits

0x75b2,	// (0x00025d57) popup_note_window

0x762e,	// (0x00025dd3) popup_query_code_window_ParamLimits

0x762e,	// (0x00025dd3) popup_query_code_window

0x7644,	// (0x00025de9) popup_query_data_code_window_ParamLimits

0x7644,	// (0x00025de9) popup_query_data_code_window

0x7667,	// (0x00025e0c) popup_query_data_window_ParamLimits

0x7667,	// (0x00025e0c) popup_query_data_window

0x7689,	// (0x00025e2e) popup_query_sat_info_window_ParamLimits

0x7689,	// (0x00025e2e) popup_query_sat_info_window

0x76c8,	// (0x00025e6d) popup_snote_single_graphic_window_ParamLimits

0x76c8,	// (0x00025e6d) popup_snote_single_graphic_window

0x76c8,	// (0x00025e6d) popup_snote_single_text_window_ParamLimits

0x76c8,	// (0x00025e6d) popup_snote_single_text_window

0x76df,	// (0x00025e84) popup_sub_window_general

0x7825,	// (0x00025fca) popup_window_general_ParamLimits

0x7825,	// (0x00025fca) popup_window_general

0x9477,	// (0x00027c1c) power_save_pane

0x70ba,	// (0x0002585f) control_pane_g1_ParamLimits

0x70ba,	// (0x0002585f) control_pane_g1

0x70dd,	// (0x00025882) control_pane_g2_ParamLimits

0x70dd,	// (0x00025882) control_pane_g2

0x93de,	// (0x00027b83) control_pane_g3_ParamLimits

0x93de,	// (0x00027b83) control_pane_g3

0x0007,

0xf761,	// (0x0002df06) control_pane_g_ParamLimits

0xf761,	// (0x0002df06) control_pane_g

0x7122,	// (0x000258c7) control_pane_t1_ParamLimits

0x7122,	// (0x000258c7) control_pane_t1

0x716a,	// (0x0002590f) control_pane_t2_ParamLimits

0x716a,	// (0x0002590f) control_pane_t2

0x0002,

0xf772,	// (0x0002df17) control_pane_t_ParamLimits

0xf772,	// (0x0002df17) control_pane_t

0x9303,	// (0x00027aa8) navi_navi_volume_pane_cp1

0x930b,	// (0x00027ab0) status_small_icon_pane

0x9313,	// (0x00027ab8) status_small_pane_g1_ParamLimits

0x9313,	// (0x00027ab8) status_small_pane_g1

0x9347,	// (0x00027aec) status_small_pane_g2_ParamLimits

0x9347,	// (0x00027aec) status_small_pane_g2

0x9353,	// (0x00027af8) status_small_pane_g3_ParamLimits

0x9353,	// (0x00027af8) status_small_pane_g3

0x935f,	// (0x00027b04) status_small_pane_g4_ParamLimits

0x935f,	// (0x00027b04) status_small_pane_g4

0x936b,	// (0x00027b10) status_small_pane_g5_ParamLimits

0x936b,	// (0x00027b10) status_small_pane_g5

0x9379,	// (0x00027b1e) status_small_pane_g6_ParamLimits

0x9379,	// (0x00027b1e) status_small_pane_g6

0x0007,

0xf750,	// (0x0002def5) status_small_pane_g_ParamLimits

0xf750,	// (0x0002def5) status_small_pane_g

0x93a8,	// (0x00027b4d) status_small_pane_t1

0x93ca,	// (0x00027b6f) status_small_wait_pane_ParamLimits

0x93ca,	// (0x00027b6f) status_small_wait_pane

0x6c70,	// (0x00025415) aid_levels_signal_ParamLimits

0x6c70,	// (0x00025415) aid_levels_signal

0x6c7f,	// (0x00025424) signal_pane_g1_ParamLimits

0x6c7f,	// (0x00025424) signal_pane_g1

0x6c94,	// (0x00025439) signal_pane_g2_ParamLimits

0x6c94,	// (0x00025439) signal_pane_g2

0x0003,

0xf6e1,	// (0x0002de86) signal_pane_g_ParamLimits

0xf6e1,	// (0x0002de86) signal_pane_g

0x6cc5,	// (0x0002546a) context_pane_g1

0x6002,	// (0x000247a7) title_pane_g1

0x6034,	// (0x000247d9) title_pane_t1

0x1230,	// (0x0001f9d5) title_pane_t2

0x1256,	// (0x0001f9fb) title_pane_t3

0x0002,

0xf530,	// (0x0002dcd5) title_pane_t

0x9877,	// (0x0002801c) aid_levels_battery_ParamLimits

0x9877,	// (0x0002801c) aid_levels_battery

0x9888,	// (0x0002802d) battery_pane_g1_ParamLimits

0x9888,	// (0x0002802d) battery_pane_g1

0x989e,	// (0x00028043) battery_pane_g2_ParamLimits

0x989e,	// (0x00028043) battery_pane_g2

0x0001,

0xf784,	// (0x0002df29) battery_pane_g_ParamLimits

0xf784,	// (0x0002df29) battery_pane_g

0xaafd,	// (0x000292a2) uni_indicator_pane_g1

0xab13,	// (0x000292b8) uni_indicator_pane_g2

0xab29,	// (0x000292ce) uni_indicator_pane_g3

0x0005,

0xf8fa,	// (0x0002e09f) uni_indicator_pane_g

0x8f73,	// (0x00027718) navi_icon_pane_ParamLimits

0x8f73,	// (0x00027718) navi_icon_pane

0x8eba,	// (0x0002765f) navi_midp_pane

0x8f8f,	// (0x00027734) navi_navi_pane

0x8f99,	// (0x0002773e) navi_text_pane_ParamLimits

0x8f99,	// (0x0002773e) navi_text_pane

0x1210,	// (0x0001f9b5) status_small_wait_pane_g1

0x2bd7,	// (0x0002137c) status_small_wait_pane_g2

0x0001,

0xf8f5,	// (0x0002e09a) status_small_wait_pane_g

0xa810,	// (0x00028fb5) navi_navi_icon_text_pane

0xa818,	// (0x00028fbd) navi_navi_pane_g1_ParamLimits

0xa818,	// (0x00028fbd) navi_navi_pane_g1

0xa82a,	// (0x00028fcf) navi_navi_pane_g2_ParamLimits

0xa82a,	// (0x00028fcf) navi_navi_pane_g2

0x0001,

0xf8c3,	// (0x0002e068) navi_navi_pane_g_ParamLimits

0xf8c3,	// (0x0002e068) navi_navi_pane_g

0xa83c,	// (0x00028fe1) navi_navi_tabs_pane

0xa845,	// (0x00028fea) navi_navi_text_pane

0xa810,	// (0x00028fb5) navi_navi_volume_pane

0xa7ec,	// (0x00028f91) navi_text_pane_t1

0xa7e0,	// (0x00028f85) navi_icon_pane_g1

0xa733,	// (0x00028ed8) navi_navi_text_pane_t1

0x7ace,	// (0x00026273) navi_navi_volume_pane_g1

0x7ad6,	// (0x0002627b) volume_small_pane

0xa699,	// (0x00028e3e) navi_navi_icon_text_pane_g1

0xa6a1,	// (0x00028e46) navi_navi_icon_text_pane_t1

0x8f8f,	// (0x00027734) navi_tabs_2_long_pane

0x8f8f,	// (0x00027734) navi_tabs_2_pane

0x8f8f,	// (0x00027734) navi_tabs_3_long_pane

0x8f8f,	// (0x00027734) navi_tabs_3_pane

0x8f8f,	// (0x00027734) navi_tabs_4_pane

0x7aae,	// (0x00026253) tabs_2_active_pane_ParamLimits

0x7aae,	// (0x00026253) tabs_2_active_pane

0x7abe,	// (0x00026263) tabs_2_passive_pane_ParamLimits

0x7abe,	// (0x00026263) tabs_2_passive_pane

0x7a7c,	// (0x00026221) tabs_3_active_pane_ParamLimits

0x7a7c,	// (0x00026221) tabs_3_active_pane

0x7a8c,	// (0x00026231) tabs_3_passive_pane_ParamLimits

0x7a8c,	// (0x00026231) tabs_3_passive_pane

0x7a9d,	// (0x00026242) tabs_3_passive_pane_cp_ParamLimits

0x7a9d,	// (0x00026242) tabs_3_passive_pane_cp

0x7a30,	// (0x000261d5) tabs_4_active_pane_ParamLimits

0x7a30,	// (0x000261d5) tabs_4_active_pane

0x7a43,	// (0x000261e8) tabs_4_passive_pane_ParamLimits

0x7a43,	// (0x000261e8) tabs_4_passive_pane

0x7a54,	// (0x000261f9) tabs_4_passive_pane_cp_ParamLimits

0x7a54,	// (0x000261f9) tabs_4_passive_pane_cp

0x7a65,	// (0x0002620a) tabs_4_passive_pane_cp2_ParamLimits

0x7a65,	// (0x0002620a) tabs_4_passive_pane_cp2

0x7a0c,	// (0x000261b1) tabs_2_long_active_pane_ParamLimits

0x7a0c,	// (0x000261b1) tabs_2_long_active_pane

0x7a1e,	// (0x000261c3) tabs_2_long_passive_pane_ParamLimits

0x7a1e,	// (0x000261c3) tabs_2_long_passive_pane

0x79cd,	// (0x00026172) tabs_3_long_active_pane_ParamLimits

0x79cd,	// (0x00026172) tabs_3_long_active_pane

0x79e0,	// (0x00026185) tabs_3_long_passive_pane_ParamLimits

0x79e0,	// (0x00026185) tabs_3_long_passive_pane

0x79f9,	// (0x0002619e) tabs_3_long_passive_pane_cp_ParamLimits

0x79f9,	// (0x0002619e) tabs_3_long_passive_pane_cp

0x7973,	// (0x00026118) volume_small_pane_g1

0x797c,	// (0x00026121) volume_small_pane_g2

0x7985,	// (0x0002612a) volume_small_pane_g3

0x798e,	// (0x00026133) volume_small_pane_g4

0x7997,	// (0x0002613c) volume_small_pane_g5

0x79a0,	// (0x00026145) volume_small_pane_g6

0x79a9,	// (0x0002614e) volume_small_pane_g7

0x79b2,	// (0x00026157) volume_small_pane_g8

0x79bb,	// (0x00026160) volume_small_pane_g9

0x79c4,	// (0x00026169) volume_small_pane_g10

0x0009,

0xf88f,	// (0x0002e034) volume_small_pane_g

0x1276,	// (0x0001fa1b) bg_active_tab_pane_cp2_ParamLimits

0x1276,	// (0x0001fa1b) bg_active_tab_pane_cp2

0x609c,	// (0x00024841) tabs_3_active_pane_g1

0x60a4,	// (0x00024849) tabs_3_active_pane_t1

0x1276,	// (0x0001fa1b) bg_passive_tab_pane_cp2_ParamLimits

0x1276,	// (0x0001fa1b) bg_passive_tab_pane_cp2

0x609c,	// (0x00024841) tabs_3_passive_pane_g1

0x60a4,	// (0x00024849) tabs_3_passive_pane_t1

0x1276,	// (0x0001fa1b) bg_active_tab_pane_cp3_ParamLimits

0x1276,	// (0x0001fa1b) bg_active_tab_pane_cp3

0x60b6,	// (0x0002485b) tabs_4_active_pane_g1

0x60be,	// (0x00024863) tabs_4_active_pane_t1

0x1276,	// (0x0001fa1b) bg_passive_tab_pane_cp3_ParamLimits

0x1276,	// (0x0001fa1b) bg_passive_tab_pane_cp3

0x60b6,	// (0x0002485b) tabs_4_1_passive_pane_g1

0x60be,	// (0x00024863) tabs_4_1_passive_pane_t1

0x9443,	// (0x00027be8) list_highlight_pane_cp2

0xad66,	// (0x0002950b) list_set_pane_ParamLimits

0xad66,	// (0x0002950b) list_set_pane

0xae28,	// (0x000295cd) main_pane_set_t1_ParamLimits

0xae28,	// (0x000295cd) main_pane_set_t1

0xae48,	// (0x000295ed) main_pane_set_t2_ParamLimits

0xae48,	// (0x000295ed) main_pane_set_t2

0xae5c,	// (0x00029601) main_pane_set_t3_ParamLimits

0xae5c,	// (0x00029601) main_pane_set_t3

0xae70,	// (0x00029615) main_pane_set_t4_ParamLimits

0xae70,	// (0x00029615) main_pane_set_t4

0x0003,

0xf95f,	// (0x0002e104) main_pane_set_t_ParamLimits

0xf95f,	// (0x0002e104) main_pane_set_t

0xae84,	// (0x00029629) setting_code_pane

0xae8e,	// (0x00029633) setting_slider_graphic_pane

0xae8e,	// (0x00029633) setting_slider_pane

0xae8e,	// (0x00029633) setting_text_pane

0xae8e,	// (0x00029633) setting_volume_pane

0x60d0,	// (0x00024875) volume_set_pane

0x1276,	// (0x0001fa1b) bg_set_opt_pane_cp

0x60da,	// (0x0002487f) setting_slider_pane_t1

0x60f3,	// (0x00024898) setting_slider_pane_t2

0x610d,	// (0x000248b2) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0002dcdc) setting_slider_pane_t

0x6125,	// (0x000248ca) slider_set_pane

0x121a,	// (0x0001f9bf) bg_set_opt_pane_cp2

0x1284,	// (0x0001fa29) setting_slider_graphic_pane_g1

0x613b,	// (0x000248e0) setting_slider_graphic_pane_t1

0x614b,	// (0x000248f0) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x0002dce3) setting_slider_graphic_pane_t

0x615b,	// (0x00024900) slider_set_pane_cp

0x121a,	// (0x0001f9bf) input_focus_pane_cp1

0xad27,	// (0x000294cc) list_set_text_pane

0x1210,	// (0x0001f9b5) setting_text_pane_g1

0x121a,	// (0x0001f9bf) input_focus_pane_cp2

0x1210,	// (0x0001f9b5) setting_code_pane_g1

0x128d,	// (0x0001fa32) setting_code_pane_t1

0x4a53,	// (0x000231f8) set_text_pane_t1_ParamLimits

0x4a53,	// (0x000231f8) set_text_pane_t1

0x305a,	// (0x000217ff) set_opt_bg_pane_g1

0x3062,	// (0x00021807) set_opt_bg_pane_g2

0xacff,	// (0x000294a4) set_opt_bg_pane_g3

0x3072,	// (0x00021817) set_opt_bg_pane_g4

0x307a,	// (0x0002181f) set_opt_bg_pane_g5

0x3082,	// (0x00021827) set_opt_bg_pane_g6

0xad09,	// (0x000294ae) set_opt_bg_pane_g7

0xad13,	// (0x000294b8) set_opt_bg_pane_g8

0xad1d,	// (0x000294c2) set_opt_bg_pane_g9

0x0008,

0xf94c,	// (0x0002e0f1) set_opt_bg_pane_g

0xacf2,	// (0x00029497) slider_set_pane_g1

0x7b57,	// (0x000262fc) slider_set_pane_g2

0x0006,

0xf93d,	// (0x0002e0e2) slider_set_pane_g

0x7adf,	// (0x00026284) volume_set_pane_g1

0x7ae9,	// (0x0002628e) volume_set_pane_g2

0x7af3,	// (0x00026298) volume_set_pane_g3

0x7afd,	// (0x000262a2) volume_set_pane_g4

0x7b07,	// (0x000262ac) volume_set_pane_g5

0x7b11,	// (0x000262b6) volume_set_pane_g6

0x7b1b,	// (0x000262c0) volume_set_pane_g7

0x7b25,	// (0x000262ca) volume_set_pane_g8

0x7b2f,	// (0x000262d4) volume_set_pane_g9

0x7b39,	// (0x000262de) volume_set_pane_g10

0x0009,

0xf915,	// (0x0002e0ba) volume_set_pane_g

0x6163,	// (0x00024908) indicator_pane_ParamLimits

0x6163,	// (0x00024908) indicator_pane

0x616f,	// (0x00024914) main_idle_pane_g2_ParamLimits

0x616f,	// (0x00024914) main_idle_pane_g2

0x6197,	// (0x0002493c) main_pane_idle_g1_ParamLimits

0x6197,	// (0x0002493c) main_pane_idle_g1

0x12b5,	// (0x0001fa5a) popup_clock_digital_analogue_window_ParamLimits

0x12b5,	// (0x0001fa5a) popup_clock_digital_analogue_window

0x61a5,	// (0x0002494a) soft_indicator_pane_ParamLimits

0x61a5,	// (0x0002494a) soft_indicator_pane

0x61b3,	// (0x00024958) wallpaper_pane_ParamLimits

0x61b3,	// (0x00024958) wallpaper_pane

0x1210,	// (0x0001f9b5) wallpaper_pane_g1

0x61bf,	// (0x00024964) indicator_pane_g1_ParamLimits

0x61bf,	// (0x00024964) indicator_pane_g1

0xb171,	// (0x00029916) navi_navi_icon_text_pane_srt_g1

0x12e3,	// (0x0001fa88) soft_indicator_pane_t1

0x12fd,	// (0x0001faa2) aid_ps_area_pane

0x61cb,	// (0x00024970) aid_ps_clock_pane

0x130e,	// (0x0001fab3) aid_ps_indicator_pane

0x131a,	// (0x0001fabf) indicator_ps_pane_ParamLimits

0x131a,	// (0x0001fabf) indicator_ps_pane

0x1329,	// (0x0001face) power_save_pane_g1_ParamLimits

0x1329,	// (0x0001face) power_save_pane_g1

0x1335,	// (0x0001fada) power_save_pane_g2_ParamLimits

0x1335,	// (0x0001fada) power_save_pane_g2

0x5bfd,	// (0x000243a2) aid_navinavi_width_pane

0x12fd,	// (0x0001faa2) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0002dce8) power_save_pane_g_ParamLimits

0xf543,	// (0x0002dce8) power_save_pane_g

0x1343,	// (0x0001fae8) power_save_pane_t1_ParamLimits

0x1343,	// (0x0001fae8) power_save_pane_t1

0x61cb,	// (0x00024970) aid_ps_clock_pane_ParamLimits

0x130e,	// (0x0001fab3) aid_ps_indicator_pane_ParamLimits

0x1355,	// (0x0001fafa) power_save_pane_t4_ParamLimits

0x1355,	// (0x0001fafa) power_save_pane_t4

0x0001,

0xf548,	// (0x0002dced) power_save_pane_t_ParamLimits

0xf548,	// (0x0002dced) power_save_pane_t

0x137f,	// (0x0001fb24) power_save_t3_ParamLimits

0x137f,	// (0x0001fb24) power_save_t3

0x136a,	// (0x0001fb0f) power_save_t2_ParamLimits

0x136a,	// (0x0001fb0f) power_save_t2

0x1394,	// (0x0001fb39) indicator_ps_pane_g1

0x61d9,	// (0x0002497e) ai_gene_pane_ParamLimits

0x61d9,	// (0x0002497e) ai_gene_pane

0x61e5,	// (0x0002498a) ai_links_pane_ParamLimits

0x61e5,	// (0x0002498a) ai_links_pane

0x61f1,	// (0x00024996) indicator_pane_cp1_ParamLimits

0x61f1,	// (0x00024996) indicator_pane_cp1

0x61fd,	// (0x000249a2) main_pane_idle_g1_cp_ParamLimits

0x61fd,	// (0x000249a2) main_pane_idle_g1_cp

0x139d,	// (0x0001fb42) popup_ai_links_title_window

0x6209,	// (0x000249ae) soft_indicator_pane_cp1_ParamLimits

0x6209,	// (0x000249ae) soft_indicator_pane_cp1

0xaaeb,	// (0x00029290) ai_links_pane_g1

0xaaf4,	// (0x00029299) grid_ai_links_pane

0xaad0,	// (0x00029275) ai_gene_pane_1

0xaad9,	// (0x0002927e) ai_gene_pane_2

0xaae2,	// (0x00029287) list_highlight_pane_cp4

0xaab0,	// (0x00029255) cell_ai_link_pane_ParamLimits

0xaab0,	// (0x00029255) cell_ai_link_pane

0xaaa8,	// (0x0002924d) cell_ai_link_pane_g1

0x2bd7,	// (0x0002137c) cell_ai_link_pane_g2

0x0001,

0xf8f0,	// (0x0002e095) cell_ai_link_pane_g

0x121a,	// (0x0001f9bf) grid_highlight_cp2

0x121a,	// (0x0001f9bf) bg_popup_sub_pane_cp1

0x13b4,	// (0x0001fb59) popup_ai_links_title_window_t1

0xa9f4,	// (0x00029199) ai_gene_pane_1_g1_ParamLimits

0xa9f4,	// (0x00029199) ai_gene_pane_1_g1

0xaa00,	// (0x000291a5) ai_gene_pane_1_g2_ParamLimits

0xaa00,	// (0x000291a5) ai_gene_pane_1_g2

0x0001,

0xf8e6,	// (0x0002e08b) ai_gene_pane_1_g_ParamLimits

0xf8e6,	// (0x0002e08b) ai_gene_pane_1_g

0xaa0d,	// (0x000291b2) ai_gene_pane_1_t1_ParamLimits

0xaa0d,	// (0x000291b2) ai_gene_pane_1_t1

0xaa41,	// (0x000291e6) grid_ai_soft_ind_pane

0xa9df,	// (0x00029184) ai_gene_pane_2_t1_ParamLimits

0xa9df,	// (0x00029184) ai_gene_pane_2_t1

0x6215,	// (0x000249ba) main_pane_empty_t1_ParamLimits

0x6215,	// (0x000249ba) main_pane_empty_t1

0x622d,	// (0x000249d2) main_pane_empty_t2_ParamLimits

0x622d,	// (0x000249d2) main_pane_empty_t2

0x6242,	// (0x000249e7) main_pane_empty_t3_ParamLimits

0x6242,	// (0x000249e7) main_pane_empty_t3

0x6254,	// (0x000249f9) main_pane_empty_t4_ParamLimits

0x6254,	// (0x000249f9) main_pane_empty_t4

0x6266,	// (0x00024a0b) main_pane_empty_t5_ParamLimits

0x6266,	// (0x00024a0b) main_pane_empty_t5

0x0004,

0xf54d,	// (0x0002dcf2) main_pane_empty_t_ParamLimits

0xf54d,	// (0x0002dcf2) main_pane_empty_t

0x6412,	// (0x00024bb7) bg_popup_window_pane_ParamLimits

0x6412,	// (0x00024bb7) bg_popup_window_pane

0xa741,	// (0x00028ee6) find_popup_pane_cp2_ParamLimits

0xa741,	// (0x00028ee6) find_popup_pane_cp2

0xa74d,	// (0x00028ef2) heading_pane_ParamLimits

0xa74d,	// (0x00028ef2) heading_pane

0x121a,	// (0x0001f9bf) bg_popup_sub_pane

0xa6bb,	// (0x00028e60) bg_popup_window_pane_g1_ParamLimits

0xa6bb,	// (0x00028e60) bg_popup_window_pane_g1

0xa6c7,	// (0x00028e6c) bg_popup_window_pane_g2_ParamLimits

0xa6c7,	// (0x00028e6c) bg_popup_window_pane_g2

0xa6d3,	// (0x00028e78) bg_popup_window_pane_g3_ParamLimits

0xa6d3,	// (0x00028e78) bg_popup_window_pane_g3

0xa6df,	// (0x00028e84) bg_popup_window_pane_g4_ParamLimits

0xa6df,	// (0x00028e84) bg_popup_window_pane_g4

0xa6eb,	// (0x00028e90) bg_popup_window_pane_g5_ParamLimits

0xa6eb,	// (0x00028e90) bg_popup_window_pane_g5

0xa6f7,	// (0x00028e9c) bg_popup_window_pane_g6_ParamLimits

0xa6f7,	// (0x00028e9c) bg_popup_window_pane_g6

0xa703,	// (0x00028ea8) bg_popup_window_pane_g7_ParamLimits

0xa703,	// (0x00028ea8) bg_popup_window_pane_g7

0xa70f,	// (0x00028eb4) bg_popup_window_pane_g8_ParamLimits

0xa70f,	// (0x00028eb4) bg_popup_window_pane_g8

0xa71b,	// (0x00028ec0) bg_popup_window_pane_g9_ParamLimits

0xa71b,	// (0x00028ec0) bg_popup_window_pane_g9

0xa727,	// (0x00028ecc) bg_popup_window_pane_g10_ParamLimits

0xa727,	// (0x00028ecc) bg_popup_window_pane_g10

0x0009,

0xf8ae,	// (0x0002e053) bg_popup_window_pane_g_ParamLimits

0xf8ae,	// (0x0002e053) bg_popup_window_pane_g

0xa650,	// (0x00028df5) bg_popup_heading_pane_ParamLimits

0xa650,	// (0x00028df5) bg_popup_heading_pane

0x7bdf,	// (0x00026384) tabs_4_passive_pane_cp_srt_ParamLimits

0x7bdf,	// (0x00026384) tabs_4_passive_pane_cp_srt

0x7bf1,	// (0x00026396) tabs_4_passive_pane_srt_ParamLimits

0xa664,	// (0x00028e09) heading_pane_g2

0x7bf1,	// (0x00026396) tabs_4_passive_pane_srt

0x9443,	// (0x00027be8) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9443,	// (0x00027be8) bg_passive_tab_pane_cp3_srt

0xa66c,	// (0x00028e11) heading_pane_t1_ParamLimits

0xa66c,	// (0x00028e11) heading_pane_t1

0xa683,	// (0x00028e28) heading_pane_t2_ParamLimits

0xa683,	// (0x00028e28) heading_pane_t2

0x0001,

0xf8a9,	// (0x0002e04e) heading_pane_t_ParamLimits

0xf8a9,	// (0x0002e04e) heading_pane_t

0xa17b,	// (0x00028920) bg_popup_heading_pane_g1

0xa22a,	// (0x000289cf) bg_popup_heading_pane_g2

0xa234,	// (0x000289d9) bg_popup_heading_pane_g3

0xa23e,	// (0x000289e3) bg_popup_heading_pane_g4

0xa248,	// (0x000289ed) bg_popup_heading_pane_g5

0xa252,	// (0x000289f7) bg_popup_heading_pane_g6

0xa25a,	// (0x000289ff) bg_popup_heading_pane_g7

0xa262,	// (0x00028a07) bg_popup_heading_pane_g8

0xa26c,	// (0x00028a11) bg_popup_heading_pane_g9

0x0008,

0xf865,	// (0x0002e00a) bg_popup_heading_pane_g

0x9973,	// (0x00028118) bg_popup_sub_pane_g1

0x997b,	// (0x00028120) bg_popup_sub_pane_g2

0x9983,	// (0x00028128) bg_popup_sub_pane_g3

0x998b,	// (0x00028130) bg_popup_sub_pane_g4

0x9993,	// (0x00028138) bg_popup_sub_pane_g5

0x999b,	// (0x00028140) bg_popup_sub_pane_g6

0x99a3,	// (0x00028148) bg_popup_sub_pane_g7

0x99ab,	// (0x00028150) bg_popup_sub_pane_g8

0x99b3,	// (0x00028158) bg_popup_sub_pane_g9

0x0008,

0xf83f,	// (0x0002dfe4) bg_popup_sub_pane_g

0x1268,	// (0x0001fa0d) bg_popup_window_pane_cp5_ParamLimits

0x1268,	// (0x0001fa0d) bg_popup_window_pane_cp5

0x13d1,	// (0x0001fb76) popup_note_window_g1_ParamLimits

0x13d1,	// (0x0001fb76) popup_note_window_g1

0x13dd,	// (0x0001fb82) popup_note_window_t1_ParamLimits

0x13dd,	// (0x0001fb82) popup_note_window_t1

0x13f3,	// (0x0001fb98) popup_note_window_t2_ParamLimits

0x13f3,	// (0x0001fb98) popup_note_window_t2

0x1409,	// (0x0001fbae) popup_note_window_t3_ParamLimits

0x1409,	// (0x0001fbae) popup_note_window_t3

0x141f,	// (0x0001fbc4) popup_note_window_t4_ParamLimits

0x141f,	// (0x0001fbc4) popup_note_window_t4

0x2a8d,	// (0x00021232) popup_note_window_t5_ParamLimits

0x2a8d,	// (0x00021232) popup_note_window_t5

0x0004,

0xf558,	// (0x0002dcfd) popup_note_window_t_ParamLimits

0xf558,	// (0x0002dcfd) popup_note_window_t

0x2ad7,	// (0x0002127c) bg_popup_window_pane_cp6_ParamLimits

0x2ad7,	// (0x0002127c) bg_popup_window_pane_cp6

0xa0f7,	// (0x0002889c) popup_note_image_window_g1_ParamLimits

0xa0f7,	// (0x0002889c) popup_note_image_window_g1

0xa103,	// (0x000288a8) popup_note_image_window_g2_ParamLimits

0xa103,	// (0x000288a8) popup_note_image_window_g2

0x0001,

0xf833,	// (0x0002dfd8) popup_note_image_window_g_ParamLimits

0xf833,	// (0x0002dfd8) popup_note_image_window_g

0xa11c,	// (0x000288c1) popup_note_image_window_t1_ParamLimits

0xa11c,	// (0x000288c1) popup_note_image_window_t1

0xa135,	// (0x000288da) popup_note_image_window_t2_ParamLimits

0xa135,	// (0x000288da) popup_note_image_window_t2

0xa14e,	// (0x000288f3) popup_note_image_window_t3_ParamLimits

0xa14e,	// (0x000288f3) popup_note_image_window_t3

0x0002,

0xf838,	// (0x0002dfdd) popup_note_image_window_t_ParamLimits

0xf838,	// (0x0002dfdd) popup_note_image_window_t

0x9fb7,	// (0x0002875c) bg_popup_window_pane_cp7_ParamLimits

0x9fb7,	// (0x0002875c) bg_popup_window_pane_cp7

0x9fe7,	// (0x0002878c) popup_note_wait_window_g1_ParamLimits

0x9fe7,	// (0x0002878c) popup_note_wait_window_g1

0x9ff3,	// (0x00028798) popup_note_wait_window_g2_ParamLimits

0x9ff3,	// (0x00028798) popup_note_wait_window_g2

0x0002,

0xf821,	// (0x0002dfc6) popup_note_wait_window_g_ParamLimits

0xf821,	// (0x0002dfc6) popup_note_wait_window_g

0xa00b,	// (0x000287b0) popup_note_wait_window_t1_ParamLimits

0xa00b,	// (0x000287b0) popup_note_wait_window_t1

0xa032,	// (0x000287d7) popup_note_wait_window_t2_ParamLimits

0xa032,	// (0x000287d7) popup_note_wait_window_t2

0xa050,	// (0x000287f5) popup_note_wait_window_t3_ParamLimits

0xa050,	// (0x000287f5) popup_note_wait_window_t3

0xa063,	// (0x00028808) popup_note_wait_window_t4_ParamLimits

0xa063,	// (0x00028808) popup_note_wait_window_t4

0x0004,

0xf828,	// (0x0002dfcd) popup_note_wait_window_t_ParamLimits

0xf828,	// (0x0002dfcd) popup_note_wait_window_t

0xa088,	// (0x0002882d) wait_bar_pane_ParamLimits

0xa088,	// (0x0002882d) wait_bar_pane

0x121a,	// (0x0001f9bf) wait_anim_pane

0x121a,	// (0x0001f9bf) wait_border_pane

0x1210,	// (0x0001f9b5) wait_anim_pane_g1

0x1210,	// (0x0001f9b5) wait_anim_pane_g2

0x0001,

0xf6dc,	// (0x0002de81) wait_anim_pane_g

0x9f5b,	// (0x00028700) wait_border_pane_g1

0x9f66,	// (0x0002870b) wait_border_pane_g2

0x9f6f,	// (0x00028714) wait_border_pane_g3

0x0002,

0xf81a,	// (0x0002dfbf) wait_border_pane_g

0x9dc5,	// (0x0002856a) bg_popup_window_pane_cp16_ParamLimits

0x9dc5,	// (0x0002856a) bg_popup_window_pane_cp16

0x9ec5,	// (0x0002866a) indicator_popup_pane_cp4_ParamLimits

0x9ec5,	// (0x0002866a) indicator_popup_pane_cp4

0x9ed9,	// (0x0002867e) popup_query_data_window_t1_ParamLimits

0x9ed9,	// (0x0002867e) popup_query_data_window_t1

0x9eeb,	// (0x00028690) popup_query_data_window_t2_ParamLimits

0x9eeb,	// (0x00028690) popup_query_data_window_t2

0x9f04,	// (0x000286a9) popup_query_data_window_t3_ParamLimits

0x9f04,	// (0x000286a9) popup_query_data_window_t3

0x0002,

0xf813,	// (0x0002dfb8) popup_query_data_window_t_ParamLimits

0xf813,	// (0x0002dfb8) popup_query_data_window_t

0x9f1e,	// (0x000286c3) query_popup_data_pane_ParamLimits

0x9f1e,	// (0x000286c3) query_popup_data_pane

0x9f32,	// (0x000286d7) query_popup_data_pane_cp1_ParamLimits

0x9f32,	// (0x000286d7) query_popup_data_pane_cp1

0x9dc5,	// (0x0002856a) bg_popup_window_pane_cp10_ParamLimits

0x9dc5,	// (0x0002856a) bg_popup_window_pane_cp10

0x9df7,	// (0x0002859c) indicator_popup_pane_ParamLimits

0x9df7,	// (0x0002859c) indicator_popup_pane

0x9e19,	// (0x000285be) popup_query_code_window_t1_ParamLimits

0x9e19,	// (0x000285be) popup_query_code_window_t1

0x9e33,	// (0x000285d8) popup_query_code_window_t2_ParamLimits

0x9e33,	// (0x000285d8) popup_query_code_window_t2

0x9e7c,	// (0x00028621) popup_query_code_window_t3_ParamLimits

0x9e7c,	// (0x00028621) popup_query_code_window_t3

0x0002,

0xf80c,	// (0x0002dfb1) popup_query_code_window_t_ParamLimits

0xf80c,	// (0x0002dfb1) popup_query_code_window_t

0x9eab,	// (0x00028650) query_popup_pane_ParamLimits

0x9eab,	// (0x00028650) query_popup_pane

0x2ad7,	// (0x0002127c) bg_popup_window_pane_cp15_ParamLimits

0x2ad7,	// (0x0002127c) bg_popup_window_pane_cp15

0x2af7,	// (0x0002129c) indicator_popup_pane_cp1_ParamLimits

0x2af7,	// (0x0002129c) indicator_popup_pane_cp1

0x2b0a,	// (0x000212af) indicator_popup_pane_cp2_ParamLimits

0x2b0a,	// (0x000212af) indicator_popup_pane_cp2

0x2b25,	// (0x000212ca) popup_query_data_code_window_g1_ParamLimits

0x2b25,	// (0x000212ca) popup_query_data_code_window_g1

0x2b38,	// (0x000212dd) popup_query_data_code_window_t1_ParamLimits

0x2b38,	// (0x000212dd) popup_query_data_code_window_t1

0x2b4a,	// (0x000212ef) popup_query_data_code_window_t2_ParamLimits

0x2b4a,	// (0x000212ef) popup_query_data_code_window_t2

0x2b5c,	// (0x00021301) popup_query_data_code_window_t3_ParamLimits

0x2b5c,	// (0x00021301) popup_query_data_code_window_t3

0x2b72,	// (0x00021317) popup_query_data_code_window_t4_ParamLimits

0x2b72,	// (0x00021317) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0002dd08) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0002dd08) popup_query_data_code_window_t

0x8f2f,	// (0x000276d4) list_single_midp_graphic_pane_g3

0x2b8c,	// (0x00021331) query_popup_data_pane_cp2_ParamLimits

0x2b9f,	// (0x00021344) query_popup_pane_cp2_ParamLimits

0x2b9f,	// (0x00021344) query_popup_pane_cp2

0x121a,	// (0x0001f9bf) bg_popup_window_pane_cp11

0x9da9,	// (0x0002854e) heading_pane_cp5

0x9db1,	// (0x00028556) listscroll_popup_info_pane

0x121a,	// (0x0001f9bf) input_focus_pane_cp3

0x2bba,	// (0x0002135f) query_popup_pane_t1

0x2bc8,	// (0x0002136d) list_popup_info_pane_ParamLimits

0x2bc8,	// (0x0002136d) list_popup_info_pane

0x2bd7,	// (0x0002137c) listscroll_popup_info_pane_g1

0x2bdf,	// (0x00021384) scroll_pane_cp7

0x2be9,	// (0x0002138e) popup_info_list_pane_t1_ParamLimits

0x2be9,	// (0x0002138e) popup_info_list_pane_t1

0x2c03,	// (0x000213a8) popup_info_list_pane_t2_ParamLimits

0x2c03,	// (0x000213a8) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x0002dd11) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x0002dd11) popup_info_list_pane_t

0x121a,	// (0x0001f9bf) bg_popup_window_pane_cp12

0xb18b,	// (0x00029930) find_popup_pane

0x1276,	// (0x0001fa1b) bg_popup_window_pane_cp3

0x2c1d,	// (0x000213c2) heading_pane_cp3

0x2c2c,	// (0x000213d1) listscroll_popup_graphic_pane

0x121a,	// (0x0001f9bf) bg_popup_window_pane_cp4

0x62c8,	// (0x00024a6d) heading_pane_cp4

0x2c3c,	// (0x000213e1) listscroll_popup_colour_pane

0x62d2,	// (0x00024a77) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x62d2,	// (0x00024a77) cell_large_graphic_colour_none_popup_pane

0x62e6,	// (0x00024a8b) grid_large_graphic_colour_popup_pane_ParamLimits

0x62e6,	// (0x00024a8b) grid_large_graphic_colour_popup_pane

0x6312,	// (0x00024ab7) listscroll_popup_colour_pane_g1_ParamLimits

0x6312,	// (0x00024ab7) listscroll_popup_colour_pane_g1

0x6329,	// (0x00024ace) listscroll_popup_colour_pane_g2_ParamLimits

0x6329,	// (0x00024ace) listscroll_popup_colour_pane_g2

0x6340,	// (0x00024ae5) listscroll_popup_colour_pane_g3_ParamLimits

0x6340,	// (0x00024ae5) listscroll_popup_colour_pane_g3

0x6350,	// (0x00024af5) listscroll_popup_colour_pane_g4_ParamLimits

0x6350,	// (0x00024af5) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0002dd16) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0002dd16) listscroll_popup_colour_pane_g

0x2c44,	// (0x000213e9) scroll_pane_cp6_ParamLimits

0x2c44,	// (0x000213e9) scroll_pane_cp6

0x6364,	// (0x00024b09) cell_large_graphic_colour_popup_pane_ParamLimits

0x6364,	// (0x00024b09) cell_large_graphic_colour_popup_pane

0x2c56,	// (0x000213fb) cell_large_graphic_colour_none_popup_pane_t1

0x121a,	// (0x0001f9bf) grid_highlight_pane_cp5

0x2c65,	// (0x0002140a) cell_large_graphic_colour_popup_pane_g1

0x2c6d,	// (0x00021412) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0002dd1f) cell_large_graphic_colour_popup_pane_g

0x2c75,	// (0x0002141a) cell_large_graphic_colour_popup_pane_g2_copy1

0x2c7e,	// (0x00021423) grid_highlight_pane_cp4

0x2c86,	// (0x0002142b) bg_popup_window_pane_cp8_ParamLimits

0x2c86,	// (0x0002142b) bg_popup_window_pane_cp8

0x2ca1,	// (0x00021446) popup_snote_single_text_window_g1_ParamLimits

0x2ca1,	// (0x00021446) popup_snote_single_text_window_g1

0x2cb3,	// (0x00021458) popup_snote_single_text_window_t1_ParamLimits

0x2cb3,	// (0x00021458) popup_snote_single_text_window_t1

0x2cc6,	// (0x0002146b) popup_snote_single_text_window_t2_ParamLimits

0x2cc6,	// (0x0002146b) popup_snote_single_text_window_t2

0x2cd9,	// (0x0002147e) popup_snote_single_text_window_t3_ParamLimits

0x2cd9,	// (0x0002147e) popup_snote_single_text_window_t3

0x2d12,	// (0x000214b7) popup_snote_single_text_window_t4_ParamLimits

0x2d12,	// (0x000214b7) popup_snote_single_text_window_t4

0x2d46,	// (0x000214eb) popup_snote_single_text_window_t5_ParamLimits

0x2d46,	// (0x000214eb) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x0002dd24) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x0002dd24) popup_snote_single_text_window_t

0x2d75,	// (0x0002151a) bg_popup_window_pane_cp9_ParamLimits

0x2d75,	// (0x0002151a) bg_popup_window_pane_cp9

0x2ca1,	// (0x00021446) popup_snote_single_graphic_window_g1_ParamLimits

0x2ca1,	// (0x00021446) popup_snote_single_graphic_window_g1

0x2d83,	// (0x00021528) popup_snote_single_graphic_window_g2_ParamLimits

0x2d83,	// (0x00021528) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0002dd2f) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0002dd2f) popup_snote_single_graphic_window_g

0x2d8f,	// (0x00021534) popup_snote_single_graphic_window_t1_ParamLimits

0x2d8f,	// (0x00021534) popup_snote_single_graphic_window_t1

0x2da2,	// (0x00021547) popup_snote_single_graphic_window_t2_ParamLimits

0x2da2,	// (0x00021547) popup_snote_single_graphic_window_t2

0x2db5,	// (0x0002155a) popup_snote_single_graphic_window_t3_ParamLimits

0x2db5,	// (0x0002155a) popup_snote_single_graphic_window_t3

0x2dee,	// (0x00021593) popup_snote_single_graphic_window_t4_ParamLimits

0x2dee,	// (0x00021593) popup_snote_single_graphic_window_t4

0x2e22,	// (0x000215c7) popup_snote_single_graphic_window_t5_ParamLimits

0x2e22,	// (0x000215c7) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x0002dd34) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x0002dd34) popup_snote_single_graphic_window_t

0xb0c9,	// (0x0002986e) grid_graphic_popup_pane_ParamLimits

0xb0c9,	// (0x0002986e) grid_graphic_popup_pane

0xb0f7,	// (0x0002989c) listscroll_popup_graphic_pane_g1_ParamLimits

0xb0f7,	// (0x0002989c) listscroll_popup_graphic_pane_g1

0xb10b,	// (0x000298b0) listscroll_popup_graphic_pane_g2_ParamLimits

0xb10b,	// (0x000298b0) listscroll_popup_graphic_pane_g2

0x0001,

0xf989,	// (0x0002e12e) listscroll_popup_graphic_pane_g_ParamLimits

0xf989,	// (0x0002e12e) listscroll_popup_graphic_pane_g

0xb11f,	// (0x000298c4) scroll_pane_cp5

0xb058,	// (0x000297fd) cell_graphic_popup_pane_ParamLimits

0xb058,	// (0x000297fd) cell_graphic_popup_pane

0xb039,	// (0x000297de) cell_graphic_popup_pane_g1

0xb041,	// (0x000297e6) cell_graphic_popup_pane_g2

0x2c75,	// (0x0002141a) cell_graphic_popup_pane_g3

0x0002,

0xf982,	// (0x0002e127) cell_graphic_popup_pane_g

0xb04a,	// (0x000297ef) cell_graphic_popup_pane_t2

0x2c7e,	// (0x00021423) grid_highlight_pane_cp3

0x2e63,	// (0x00021608) list_gen_pane_ParamLimits

0x2e63,	// (0x00021608) list_gen_pane

0x2e8b,	// (0x00021630) scroll_pane

0xaf91,	// (0x00029736) bg_list_pane_g1_ParamLimits

0xaf91,	// (0x00029736) bg_list_pane_g1

0xafae,	// (0x00029753) bg_list_pane_g2_ParamLimits

0xafae,	// (0x00029753) bg_list_pane_g2

0xafc3,	// (0x00029768) bg_list_pane_g3_ParamLimits

0xafc3,	// (0x00029768) bg_list_pane_g3

0xafd7,	// (0x0002977c) bg_list_pane_g4_ParamLimits

0xafd7,	// (0x0002977c) bg_list_pane_g4

0xafeb,	// (0x00029790) bg_list_pane_g5_ParamLimits

0xafeb,	// (0x00029790) bg_list_pane_g5

0x0004,

0xf977,	// (0x0002e11c) bg_list_pane_g_ParamLimits

0xf977,	// (0x0002e11c) bg_list_pane_g

0xaf12,	// (0x000296b7) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf12,	// (0x000296b7) list_double2_graphic_large_graphic_pane

0xaf12,	// (0x000296b7) list_double2_graphic_pane_ParamLimits

0xaf12,	// (0x000296b7) list_double2_graphic_pane

0xaf12,	// (0x000296b7) list_double2_large_graphic_pane_ParamLimits

0xaf12,	// (0x000296b7) list_double2_large_graphic_pane

0xaf12,	// (0x000296b7) list_double2_pane_ParamLimits

0xaf12,	// (0x000296b7) list_double2_pane

0xaf12,	// (0x000296b7) list_double_graphic_heading_pane_ParamLimits

0xaf12,	// (0x000296b7) list_double_graphic_heading_pane

0xaf12,	// (0x000296b7) list_double_graphic_pane_ParamLimits

0xaf12,	// (0x000296b7) list_double_graphic_pane

0xaf12,	// (0x000296b7) list_double_heading_pane_ParamLimits

0xaf12,	// (0x000296b7) list_double_heading_pane

0xaf12,	// (0x000296b7) list_double_large_graphic_pane_ParamLimits

0xaf12,	// (0x000296b7) list_double_large_graphic_pane

0xaf12,	// (0x000296b7) list_double_number_pane_ParamLimits

0xaf12,	// (0x000296b7) list_double_number_pane

0xaf12,	// (0x000296b7) list_double_pane_ParamLimits

0xaf12,	// (0x000296b7) list_double_pane

0xaf12,	// (0x000296b7) list_double_time_pane_ParamLimits

0xaf12,	// (0x000296b7) list_double_time_pane

0xaf12,	// (0x000296b7) list_setting_number_pane_ParamLimits

0xaf12,	// (0x000296b7) list_setting_number_pane

0xaf12,	// (0x000296b7) list_setting_pane_ParamLimits

0xaf12,	// (0x000296b7) list_setting_pane

0x5448,	// (0x00023bed) list_single_2graphic_pane_ParamLimits

0x5448,	// (0x00023bed) list_single_2graphic_pane

0x5448,	// (0x00023bed) list_single_graphic_heading_pane_ParamLimits

0x5448,	// (0x00023bed) list_single_graphic_heading_pane

0x5448,	// (0x00023bed) list_single_graphic_pane_ParamLimits

0x5448,	// (0x00023bed) list_single_graphic_pane

0x5448,	// (0x00023bed) list_single_heading_pane_ParamLimits

0x5448,	// (0x00023bed) list_single_heading_pane

0xaf76,	// (0x0002971b) list_single_large_graphic_pane_ParamLimits

0xaf76,	// (0x0002971b) list_single_large_graphic_pane

0x5448,	// (0x00023bed) list_single_number_heading_pane_ParamLimits

0x5448,	// (0x00023bed) list_single_number_heading_pane

0x5448,	// (0x00023bed) list_single_number_pane_ParamLimits

0x5448,	// (0x00023bed) list_single_number_pane

0x5448,	// (0x00023bed) list_single_pane_ParamLimits

0x5448,	// (0x00023bed) list_single_pane

0x121a,	// (0x0001f9bf) list_highlight_pane_cp1

0x4a7a,	// (0x0002321f) list_single_pane_g1_ParamLimits

0x4a7a,	// (0x0002321f) list_single_pane_g1

0x4a86,	// (0x0002322b) list_single_pane_g2_ParamLimits

0x4a86,	// (0x0002322b) list_single_pane_g2

0x0001,

0xf5a1,	// (0x0002dd46) list_single_pane_g_ParamLimits

0xf5a1,	// (0x0002dd46) list_single_pane_g

0x5403,	// (0x00023ba8) list_single_pane_t1_ParamLimits

0x5403,	// (0x00023ba8) list_single_pane_t1

0x4a7a,	// (0x0002321f) list_single_number_pane_g1_ParamLimits

0x4a7a,	// (0x0002321f) list_single_number_pane_g1

0x4a86,	// (0x0002322b) list_single_number_pane_g2_ParamLimits

0x4a86,	// (0x0002322b) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x0002dd46) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x0002dd46) list_single_number_pane_g

0x53ad,	// (0x00023b52) list_single_number_pane_t1_ParamLimits

0x53ad,	// (0x00023b52) list_single_number_pane_t1

0x53c3,	// (0x00023b68) list_single_number_pane_t2_ParamLimits

0x53c3,	// (0x00023b68) list_single_number_pane_t2

0x0001,

0xf938,	// (0x0002e0dd) list_single_number_pane_t_ParamLimits

0xf938,	// (0x0002e0dd) list_single_number_pane_t

0x4a6e,	// (0x00023213) list_single_graphic_pane_g1_ParamLimits

0x4a6e,	// (0x00023213) list_single_graphic_pane_g1

0x4a7a,	// (0x0002321f) list_single_graphic_pane_g2_ParamLimits

0x4a7a,	// (0x0002321f) list_single_graphic_pane_g2

0x4a86,	// (0x0002322b) list_single_graphic_pane_g3_ParamLimits

0x4a86,	// (0x0002322b) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0002dd3f) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0002dd3f) list_single_graphic_pane_g

0x4a92,	// (0x00023237) list_single_graphic_pane_t1_ParamLimits

0x4a92,	// (0x00023237) list_single_graphic_pane_t1

0x4a7a,	// (0x0002321f) list_single_heading_pane_g1_ParamLimits

0x4a7a,	// (0x0002321f) list_single_heading_pane_g1

0x4a86,	// (0x0002322b) list_single_heading_pane_g2_ParamLimits

0x4a86,	// (0x0002322b) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0002dd46) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0002dd46) list_single_heading_pane_g

0x4aa8,	// (0x0002324d) list_single_heading_pane_t1_ParamLimits

0x4aa8,	// (0x0002324d) list_single_heading_pane_t1

0x4abe,	// (0x00023263) list_single_heading_pane_t2_ParamLimits

0x4abe,	// (0x00023263) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0002dd4b) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0002dd4b) list_single_heading_pane_t

0x4a7a,	// (0x0002321f) list_single_number_heading_pane_g1_ParamLimits

0x4a7a,	// (0x0002321f) list_single_number_heading_pane_g1

0x4a86,	// (0x0002322b) list_single_number_heading_pane_g2_ParamLimits

0x4a86,	// (0x0002322b) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x0002dd46) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x0002dd46) list_single_number_heading_pane_g

0x4aa8,	// (0x0002324d) list_single_number_heading_pane_t1_ParamLimits

0x4aa8,	// (0x0002324d) list_single_number_heading_pane_t1

0x4ad0,	// (0x00023275) list_single_number_heading_pane_t2_ParamLimits

0x4ad0,	// (0x00023275) list_single_number_heading_pane_t2

0x4ae2,	// (0x00023287) list_single_number_heading_pane_t3_ParamLimits

0x4ae2,	// (0x00023287) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x0002dd50) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x0002dd50) list_single_number_heading_pane_t

0x4af4,	// (0x00023299) list_single_graphic_heading_pane_g1_ParamLimits

0x4af4,	// (0x00023299) list_single_graphic_heading_pane_g1

0x4b00,	// (0x000232a5) list_single_graphic_heading_pane_g4_ParamLimits

0x4b00,	// (0x000232a5) list_single_graphic_heading_pane_g4

0x4a86,	// (0x0002322b) list_single_graphic_heading_pane_g5_ParamLimits

0x4a86,	// (0x0002322b) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x0002dd57) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x0002dd57) list_single_graphic_heading_pane_g

0x4aa8,	// (0x0002324d) list_single_graphic_heading_pane_t1_ParamLimits

0x4aa8,	// (0x0002324d) list_single_graphic_heading_pane_t1

0x4b11,	// (0x000232b6) list_single_graphic_heading_pane_t2_ParamLimits

0x4b11,	// (0x000232b6) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x0002dd5e) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x0002dd5e) list_single_graphic_heading_pane_t

0x4b23,	// (0x000232c8) list_single_large_graphic_pane_g1_ParamLimits

0x4b23,	// (0x000232c8) list_single_large_graphic_pane_g1

0x4b2f,	// (0x000232d4) list_single_large_graphic_pane_g2_ParamLimits

0x4b2f,	// (0x000232d4) list_single_large_graphic_pane_g2

0x4b3b,	// (0x000232e0) list_single_large_graphic_pane_g3_ParamLimits

0x4b3b,	// (0x000232e0) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x0002dd63) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x0002dd63) list_single_large_graphic_pane_g

0x9f66,	// (0x0002870b) wait_border_pane_g2_copy1

0x4b47,	// (0x000232ec) list_single_large_graphic_pane_g4_cp2

0x4b4f,	// (0x000232f4) list_single_large_graphic_pane_t1_ParamLimits

0x4b4f,	// (0x000232f4) list_single_large_graphic_pane_t1

0x4b65,	// (0x0002330a) list_double_pane_g1_ParamLimits

0x4b65,	// (0x0002330a) list_double_pane_g1

0x4b71,	// (0x00023316) list_double_pane_g2_ParamLimits

0x4b71,	// (0x00023316) list_double_pane_g2

0x0001,

0xf5c5,	// (0x0002dd6a) list_double_pane_g_ParamLimits

0xf5c5,	// (0x0002dd6a) list_double_pane_g

0x4b7d,	// (0x00023322) list_double_pane_t1_ParamLimits

0x4b7d,	// (0x00023322) list_double_pane_t1

0x4b93,	// (0x00023338) list_double_pane_t2_ParamLimits

0x4b93,	// (0x00023338) list_double_pane_t2

0x0001,

0xf5ca,	// (0x0002dd6f) list_double_pane_t_ParamLimits

0xf5ca,	// (0x0002dd6f) list_double_pane_t

0x4ba5,	// (0x0002334a) list_double2_pane_g1_ParamLimits

0x4ba5,	// (0x0002334a) list_double2_pane_g1

0x4bb6,	// (0x0002335b) list_double2_pane_g2_ParamLimits

0x4bb6,	// (0x0002335b) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x0002dd74) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x0002dd74) list_double2_pane_g

0x4bc2,	// (0x00023367) list_double2_pane_t1_ParamLimits

0x4bc2,	// (0x00023367) list_double2_pane_t1

0x4bd8,	// (0x0002337d) list_double2_pane_t2_ParamLimits

0x4bd8,	// (0x0002337d) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x0002dd79) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x0002dd79) list_double2_pane_t

0x4b65,	// (0x0002330a) list_double_number_pane_g1_ParamLimits

0x4b65,	// (0x0002330a) list_double_number_pane_g1

0x4b71,	// (0x00023316) list_double_number_pane_g2_ParamLimits

0x4b71,	// (0x00023316) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x0002dd6a) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x0002dd6a) list_double_number_pane_g

0x4bea,	// (0x0002338f) list_double_number_pane_t1_ParamLimits

0x4bea,	// (0x0002338f) list_double_number_pane_t1

0x4bfc,	// (0x000233a1) list_double_number_pane_t2_ParamLimits

0x4bfc,	// (0x000233a1) list_double_number_pane_t2

0x4c12,	// (0x000233b7) list_double_number_pane_t3_ParamLimits

0x4c12,	// (0x000233b7) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x0002dd7e) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x0002dd7e) list_double_number_pane_t

0x4c24,	// (0x000233c9) list_double_graphic_pane_g1_ParamLimits

0x4c24,	// (0x000233c9) list_double_graphic_pane_g1

0x4c30,	// (0x000233d5) list_double_graphic_pane_g2_ParamLimits

0x4c30,	// (0x000233d5) list_double_graphic_pane_g2

0x4c3f,	// (0x000233e4) list_double_graphic_pane_g3_ParamLimits

0x4c3f,	// (0x000233e4) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x0002dd85) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0002dd85) list_double_graphic_pane_g

0x4c57,	// (0x000233fc) list_double_graphic_pane_t1_ParamLimits

0x4c57,	// (0x000233fc) list_double_graphic_pane_t1

0x4c6d,	// (0x00023412) list_double_graphic_pane_t2_ParamLimits

0x4c6d,	// (0x00023412) list_double_graphic_pane_t2

0x0001,

0xf5e9,	// (0x0002dd8e) list_double_graphic_pane_t_ParamLimits

0xf5e9,	// (0x0002dd8e) list_double_graphic_pane_t

0x4c7f,	// (0x00023424) list_double2_graphic_pane_g1_ParamLimits

0x4c7f,	// (0x00023424) list_double2_graphic_pane_g1

0x4c8b,	// (0x00023430) list_double2_graphic_pane_g2_ParamLimits

0x4c8b,	// (0x00023430) list_double2_graphic_pane_g2

0x4c97,	// (0x0002343c) list_double2_graphic_pane_g3_ParamLimits

0x4c97,	// (0x0002343c) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x0002dd93) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x0002dd93) list_double2_graphic_pane_g

0x4ca3,	// (0x00023448) list_double2_graphic_pane_t1_ParamLimits

0x4ca3,	// (0x00023448) list_double2_graphic_pane_t1

0x4cb9,	// (0x0002345e) list_double2_graphic_pane_t2_ParamLimits

0x4cb9,	// (0x0002345e) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x0002dd9a) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x0002dd9a) list_double2_graphic_pane_t

0x4ccb,	// (0x00023470) list_double_large_graphic_pane_g1_ParamLimits

0x4ccb,	// (0x00023470) list_double_large_graphic_pane_g1

0x4cea,	// (0x0002348f) list_double_large_graphic_pane_g2_ParamLimits

0x4cea,	// (0x0002348f) list_double_large_graphic_pane_g2

0x4b71,	// (0x00023316) list_double_large_graphic_pane_g3_ParamLimits

0x4b71,	// (0x00023316) list_double_large_graphic_pane_g3

0x4cfb,	// (0x000234a0) list_double_large_graphic_pane_g4_ParamLimits

0x4cfb,	// (0x000234a0) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x0002dd9f) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x0002dd9f) list_double_large_graphic_pane_g

0x4d23,	// (0x000234c8) list_double_large_graphic_pane_t1_ParamLimits

0x4d23,	// (0x000234c8) list_double_large_graphic_pane_t1

0x4d3c,	// (0x000234e1) list_double_large_graphic_pane_t2_ParamLimits

0x4d3c,	// (0x000234e1) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x0002ddaa) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x0002ddaa) list_double_large_graphic_pane_t

0x4d4e,	// (0x000234f3) list_double2_large_graphic_pane_g1_ParamLimits

0x4d4e,	// (0x000234f3) list_double2_large_graphic_pane_g1

0x4ba5,	// (0x0002334a) list_double2_large_graphic_pane_g2_ParamLimits

0x4ba5,	// (0x0002334a) list_double2_large_graphic_pane_g2

0x4bb6,	// (0x0002335b) list_double2_large_graphic_pane_g3_ParamLimits

0x4bb6,	// (0x0002335b) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x0002ddaf) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x0002ddaf) list_double2_large_graphic_pane_g

0x4d5a,	// (0x000234ff) list_double2_large_graphic_pane_t1_ParamLimits

0x4d5a,	// (0x000234ff) list_double2_large_graphic_pane_t1

0x4d70,	// (0x00023515) list_double2_large_graphic_pane_t2_ParamLimits

0x4d70,	// (0x00023515) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x0002ddb6) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x0002ddb6) list_double2_large_graphic_pane_t

0x4d82,	// (0x00023527) list_double_heading_pane_g1_ParamLimits

0x4d82,	// (0x00023527) list_double_heading_pane_g1

0x4d93,	// (0x00023538) list_double_heading_pane_g2_ParamLimits

0x4d93,	// (0x00023538) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x0002ddbb) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x0002ddbb) list_double_heading_pane_g

0x4d9f,	// (0x00023544) list_double_heading_pane_t1_ParamLimits

0x4d9f,	// (0x00023544) list_double_heading_pane_t1

0x4bd8,	// (0x0002337d) list_double_heading_pane_t2_ParamLimits

0x4bd8,	// (0x0002337d) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x0002ddc0) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x0002ddc0) list_double_heading_pane_t

0x4c7f,	// (0x00023424) list_double_graphic_heading_pane_g1_ParamLimits

0x4c7f,	// (0x00023424) list_double_graphic_heading_pane_g1

0x4d82,	// (0x00023527) list_double_graphic_heading_pane_g2_ParamLimits

0x4d82,	// (0x00023527) list_double_graphic_heading_pane_g2

0x4d93,	// (0x00023538) list_double_graphic_heading_pane_g3_ParamLimits

0x4d93,	// (0x00023538) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x0002ddc5) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x0002ddc5) list_double_graphic_heading_pane_g

0x4db5,	// (0x0002355a) list_double_graphic_heading_pane_t1_ParamLimits

0x4db5,	// (0x0002355a) list_double_graphic_heading_pane_t1

0x4cb9,	// (0x0002345e) list_double_graphic_heading_pane_t2_ParamLimits

0x4cb9,	// (0x0002345e) list_double_graphic_heading_pane_t2

0x0001,

0xf627,	// (0x0002ddcc) list_double_graphic_heading_pane_t_ParamLimits

0xf627,	// (0x0002ddcc) list_double_graphic_heading_pane_t

0x4cea,	// (0x0002348f) list_double_time_pane_g1_ParamLimits

0x4cea,	// (0x0002348f) list_double_time_pane_g1

0x4b71,	// (0x00023316) list_double_time_pane_g2_ParamLimits

0x4b71,	// (0x00023316) list_double_time_pane_g2

0x0001,

0xf62c,	// (0x0002ddd1) list_double_time_pane_g_ParamLimits

0xf62c,	// (0x0002ddd1) list_double_time_pane_g

0x4dcb,	// (0x00023570) list_double_time_pane_t1_ParamLimits

0x4dcb,	// (0x00023570) list_double_time_pane_t1

0x4de1,	// (0x00023586) list_double_time_pane_t2_ParamLimits

0x4de1,	// (0x00023586) list_double_time_pane_t2

0x4df3,	// (0x00023598) list_double_time_pane_t3_ParamLimits

0x4df3,	// (0x00023598) list_double_time_pane_t3

0x4e05,	// (0x000235aa) list_double_time_pane_t4_ParamLimits

0x4e05,	// (0x000235aa) list_double_time_pane_t4

0x0003,

0xf631,	// (0x0002ddd6) list_double_time_pane_t_ParamLimits

0xf631,	// (0x0002ddd6) list_double_time_pane_t

0x4e17,	// (0x000235bc) list_setting_pane_g1_ParamLimits

0x4e17,	// (0x000235bc) list_setting_pane_g1

0x4d93,	// (0x00023538) list_setting_pane_g2_ParamLimits

0x4d93,	// (0x00023538) list_setting_pane_g2

0x0001,

0xf63a,	// (0x0002dddf) list_setting_pane_g_ParamLimits

0xf63a,	// (0x0002dddf) list_setting_pane_g

0x4e23,	// (0x000235c8) list_setting_pane_t1_ParamLimits

0x4e23,	// (0x000235c8) list_setting_pane_t1

0x4e3a,	// (0x000235df) list_setting_pane_t2_ParamLimits

0x4e3a,	// (0x000235df) list_setting_pane_t2

0x0002,

0xf63f,	// (0x0002dde4) list_setting_pane_t_ParamLimits

0xf63f,	// (0x0002dde4) list_setting_pane_t

0x4e79,	// (0x0002361e) set_value_pane_cp_ParamLimits

0x4e79,	// (0x0002361e) set_value_pane_cp

0x4e87,	// (0x0002362c) list_setting_number_pane_g1_ParamLimits

0x4e87,	// (0x0002362c) list_setting_number_pane_g1

0x4e93,	// (0x00023638) list_setting_number_pane_g2_ParamLimits

0x4e93,	// (0x00023638) list_setting_number_pane_g2

0x0001,

0xf646,	// (0x0002ddeb) list_setting_number_pane_g_ParamLimits

0xf646,	// (0x0002ddeb) list_setting_number_pane_g

0x4e9f,	// (0x00023644) list_setting_number_pane_t1_ParamLimits

0x4e9f,	// (0x00023644) list_setting_number_pane_t1

0x4eb3,	// (0x00023658) list_setting_number_pane_t2_ParamLimits

0x4eb3,	// (0x00023658) list_setting_number_pane_t2

0x4eca,	// (0x0002366f) list_setting_number_pane_t3_ParamLimits

0x4eca,	// (0x0002366f) list_setting_number_pane_t3

0x0003,

0xf64b,	// (0x0002ddf0) list_setting_number_pane_t_ParamLimits

0xf64b,	// (0x0002ddf0) list_setting_number_pane_t

0x4e79,	// (0x0002361e) set_value_pane_ParamLimits

0x4e79,	// (0x0002361e) set_value_pane

0x2ee0,	// (0x00021685) bg_set_opt_pane_ParamLimits

0x2ee0,	// (0x00021685) bg_set_opt_pane

0x4f0d,	// (0x000236b2) set_value_pane_t1

0x2f0f,	// (0x000216b4) slider_set_pane_cp3

0x2f18,	// (0x000216bd) volume_small_pane_cp

0x2f21,	// (0x000216c6) list_form_gen_pane

0x2f2a,	// (0x000216cf) scroll_pane_cp8

0x4f23,	// (0x000236c8) form_field_data_pane_ParamLimits

0x4f23,	// (0x000236c8) form_field_data_pane

0x4f49,	// (0x000236ee) form_field_data_wide_pane_ParamLimits

0x4f49,	// (0x000236ee) form_field_data_wide_pane

0x4f6e,	// (0x00023713) form_field_popup_pane_ParamLimits

0x4f6e,	// (0x00023713) form_field_popup_pane

0x4f90,	// (0x00023735) form_field_popup_wide_pane_ParamLimits

0x4f90,	// (0x00023735) form_field_popup_wide_pane

0x4fb1,	// (0x00023756) form_field_slider_pane_ParamLimits

0x4fb1,	// (0x00023756) form_field_slider_pane

0x4fc4,	// (0x00023769) form_field_slider_wide_pane_ParamLimits

0x4fc4,	// (0x00023769) form_field_slider_wide_pane

0x2f93,	// (0x00021738) data_form_pane

0x4fe1,	// (0x00023786) form_field_data_pane_t1

0x2f9f,	// (0x00021744) input_focus_pane

0x4ffb,	// (0x000237a0) data_form_wide_pane

0x5018,	// (0x000237bd) form_field_data_wide_pane_t1

0x2c93,	// (0x00021438) input_focus_pane_cp6

0x503a,	// (0x000237df) form_field_popup_pane_t1

0x2f9f,	// (0x00021744) input_focus_pane_cp7

0x3004,	// (0x000217a9) list_form_pane

0x505c,	// (0x00023801) form_field_popup_wide_pane_t1

0x2f9f,	// (0x00021744) input_focus_pane_cp8

0x302a,	// (0x000217cf) list_form_wide_pane

0x5079,	// (0x0002381e) form_field_slider_pane_t1_ParamLimits

0x5079,	// (0x0002381e) form_field_slider_pane_t1

0x5091,	// (0x00023836) form_field_slider_pane_t2_ParamLimits

0x5091,	// (0x00023836) form_field_slider_pane_t2

0x0001,

0xf65b,	// (0x0002de00) form_field_slider_pane_t_ParamLimits

0xf65b,	// (0x0002de00) form_field_slider_pane_t

0x1268,	// (0x0001fa0d) input_focus_pane_cp9_ParamLimits

0x1268,	// (0x0001fa0d) input_focus_pane_cp9

0x50a6,	// (0x0002384b) slider_cont_pane_ParamLimits

0x50a6,	// (0x0002384b) slider_cont_pane

0x3036,	// (0x000217db) form_field_slider_wide_pane_t1_ParamLimits

0x3036,	// (0x000217db) form_field_slider_wide_pane_t1

0x50ba,	// (0x0002385f) form_field_slider_wide_pane_t2_ParamLimits

0x50ba,	// (0x0002385f) form_field_slider_wide_pane_t2

0x0001,

0xf660,	// (0x0002de05) form_field_slider_wide_pane_t_ParamLimits

0xf660,	// (0x0002de05) form_field_slider_wide_pane_t

0x1268,	// (0x0001fa0d) input_focus_pane_cp10_ParamLimits

0x1268,	// (0x0001fa0d) input_focus_pane_cp10

0x50cc,	// (0x00023871) slider_cont_pane_cp1_ParamLimits

0x50cc,	// (0x00023871) slider_cont_pane_cp1

0x50e0,	// (0x00023885) slider_form_pane_cp

0x305a,	// (0x000217ff) input_focus_pane_g1

0x3062,	// (0x00021807) input_focus_pane_g2

0x306a,	// (0x0002180f) input_focus_pane_g3

0x3072,	// (0x00021817) input_focus_pane_g4

0x307a,	// (0x0002181f) input_focus_pane_g5

0x3082,	// (0x00021827) input_focus_pane_g6

0x308a,	// (0x0002182f) input_focus_pane_g7

0x3092,	// (0x00021837) input_focus_pane_g8

0x309a,	// (0x0002183f) input_focus_pane_g9

0x1210,	// (0x0001f9b5) input_focus_pane_g10

0x0009,

0xf665,	// (0x0002de0a) input_focus_pane_g

0x9f6f,	// (0x00028714) wait_border_pane_g3_copy1

0x50e8,	// (0x0002388d) data_form_pane_t1

0x1210,	// (0x0001f9b5) wait_anim_pane_g1_copy1

0x53d5,	// (0x00023b7a) data_form_wide_pane_t1

0x5105,	// (0x000238aa) list_form_graphic_pane_cp_ParamLimits

0x5105,	// (0x000238aa) list_form_graphic_pane_cp

0xaeb6,	// (0x0002965b) slider_form_pane_g1

0xaebf,	// (0x00029664) slider_form_pane_g2

0x0006,

0xf968,	// (0x0002e10d) slider_form_pane_g

0x511a,	// (0x000238bf) list_form_graphic_pane_ParamLimits

0x511a,	// (0x000238bf) list_form_graphic_pane

0x512c,	// (0x000238d1) list_form_graphic_pane_g1

0x5134,	// (0x000238d9) list_form_graphic_pane_t1_ParamLimits

0x5134,	// (0x000238d9) list_form_graphic_pane_t1

0x1276,	// (0x0001fa1b) list_highlight_pane_cp5_ParamLimits

0x1276,	// (0x0001fa1b) list_highlight_pane_cp5

0x5149,	// (0x000238ee) find_pane_g1

0x638f,	// (0x00024b34) input_find_pane

0x5152,	// (0x000238f7) input_find_pane_g1_ParamLimits

0x5152,	// (0x000238f7) input_find_pane_g1

0x515e,	// (0x00023903) input_find_pane_t1_ParamLimits

0x515e,	// (0x00023903) input_find_pane_t1

0x5173,	// (0x00023918) input_find_pane_t2_ParamLimits

0x5173,	// (0x00023918) input_find_pane_t2

0x0001,

0xf67a,	// (0x0002de1f) input_find_pane_t_ParamLimits

0xf67a,	// (0x0002de1f) input_find_pane_t

0x6398,	// (0x00024b3d) input_focus_pane_cp5_ParamLimits

0x6398,	// (0x00024b3d) input_focus_pane_cp5

0x63b7,	// (0x00024b5c) bg_popup_window_pane_cp2_ParamLimits

0x63b7,	// (0x00024b5c) bg_popup_window_pane_cp2

0x63c4,	// (0x00024b69) listscroll_menu_pane_ParamLimits

0x63c4,	// (0x00024b69) listscroll_menu_pane

0x63d0,	// (0x00024b75) popup_submenu_window_ParamLimits

0x63d0,	// (0x00024b75) popup_submenu_window

0x6400,	// (0x00024ba5) find_popup_pane_g1

0x6408,	// (0x00024bad) input_popup_find_pane_cp

0x6412,	// (0x00024bb7) input_focus_pane_cp4_ParamLimits

0x6412,	// (0x00024bb7) input_focus_pane_cp4

0x642e,	// (0x00024bd3) input_popup_find_pane_t1_ParamLimits

0x642e,	// (0x00024bd3) input_popup_find_pane_t1

0x121a,	// (0x0001f9bf) bg_popup_sub_pane_cp

0x645c,	// (0x00024c01) listscroll_popup_sub_pane

0x6464,	// (0x00024c09) list_submenu_pane_ParamLimits

0x6464,	// (0x00024c09) list_submenu_pane

0x6475,	// (0x00024c1a) scroll_pane_cp4

0x647d,	// (0x00024c22) list_single_popup_submenu_pane_ParamLimits

0x647d,	// (0x00024c22) list_single_popup_submenu_pane

0x6492,	// (0x00024c37) list_single_popup_submenu_pane_g1

0x649a,	// (0x00024c3f) list_single_popup_submenu_pane_t1_ParamLimits

0x649a,	// (0x00024c3f) list_single_popup_submenu_pane_t1

0x1276,	// (0x0001fa1b) bg_active_tab_pane_cp1_ParamLimits

0x1276,	// (0x0001fa1b) bg_active_tab_pane_cp1

0x64af,	// (0x00024c54) tabs_2_active_pane_g1

0x64b7,	// (0x00024c5c) tabs_2_active_pane_t1

0x1276,	// (0x0001fa1b) bg_passive_tab_pane_cp1_ParamLimits

0x1276,	// (0x0001fa1b) bg_passive_tab_pane_cp1

0x64af,	// (0x00024c54) tabs_2_passive_pane_g1

0x64b7,	// (0x00024c5c) tabs_2_passive_pane_t1

0x64c9,	// (0x00024c6e) bg_active_tab_pane_cp4

0x64d7,	// (0x00024c7c) tabs_2_long_active_pane_t1

0x64ea,	// (0x00024c8f) bg_passive_tab_pane_cp4

0x7893,	// (0x00026038) list_single_midp_graphic_pane_g4_ParamLimits

0x64c9,	// (0x00024c6e) bg_active_tab_pane_cp5

0x64f6,	// (0x00024c9b) tabs_3_long_active_pane_t1

0x64ea,	// (0x00024c8f) bg_passive_tab_pane_cp5

0x7893,	// (0x00026038) list_single_midp_graphic_pane_g4

0x1276,	// (0x0001fa1b) bg_popup_window_pane_cp13_ParamLimits

0x1276,	// (0x0001fa1b) bg_popup_window_pane_cp13

0x6511,	// (0x00024cb6) listscroll_popup_fast_pane_ParamLimits

0x6511,	// (0x00024cb6) listscroll_popup_fast_pane

0x6520,	// (0x00024cc5) grid_popup_fast_pane_ParamLimits

0x6520,	// (0x00024cc5) grid_popup_fast_pane

0x6532,	// (0x00024cd7) scroll_pane_cp9_ParamLimits

0x6532,	// (0x00024cd7) scroll_pane_cp9

0xc83e,	// (0x0002afe3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc83e,	// (0x0002afe3) list_single_graphic_hl_pane_t1_cp2

0x6556,	// (0x00024cfb) input_focus_pane_cp20_ParamLimits

0x6556,	// (0x00024cfb) input_focus_pane_cp20

0x6564,	// (0x00024d09) query_popup_data_pane_t1_ParamLimits

0x6564,	// (0x00024d09) query_popup_data_pane_t1

0x6577,	// (0x00024d1c) query_popup_data_pane_t2_ParamLimits

0x6577,	// (0x00024d1c) query_popup_data_pane_t2

0x65bd,	// (0x00024d62) query_popup_data_pane_t3_ParamLimits

0x65bd,	// (0x00024d62) query_popup_data_pane_t3

0x65fe,	// (0x00024da3) query_popup_data_pane_t4_ParamLimits

0x65fe,	// (0x00024da3) query_popup_data_pane_t4

0x663a,	// (0x00024ddf) query_popup_data_pane_t5_ParamLimits

0x663a,	// (0x00024ddf) query_popup_data_pane_t5

0x0004,

0xf67f,	// (0x0002de24) query_popup_data_pane_t_ParamLimits

0xf67f,	// (0x0002de24) query_popup_data_pane_t

0x305a,	// (0x000217ff) bg_set_opt_pane_g1

0x3062,	// (0x00021807) bg_set_opt_pane_g2

0x306a,	// (0x0002180f) bg_set_opt_pane_g3

0x3072,	// (0x00021817) bg_set_opt_pane_g4

0x307a,	// (0x0002181f) bg_set_opt_pane_g5

0x3082,	// (0x00021827) bg_set_opt_pane_g6

0x308a,	// (0x0002182f) bg_set_opt_pane_g7

0x3092,	// (0x00021837) bg_set_opt_pane_g8

0x309a,	// (0x0002183f) bg_set_opt_pane_g9

0x0008,

0xf68a,	// (0x0002de2f) bg_set_opt_pane_g

0x6ed0,	// (0x00025675) control_top_pane_stacon_ParamLimits

0x6ed0,	// (0x00025675) control_top_pane_stacon

0x6f23,	// (0x000256c8) signal_pane_stacon_ParamLimits

0x6f23,	// (0x000256c8) signal_pane_stacon

0x8d99,	// (0x0002753e) stacon_top_pane_g1_ParamLimits

0x8d99,	// (0x0002753e) stacon_top_pane_g1

0x6f48,	// (0x000256ed) title_pane_stacon_ParamLimits

0x6f48,	// (0x000256ed) title_pane_stacon

0x6f72,	// (0x00025717) uni_indicator_pane_stacon_ParamLimits

0x6f72,	// (0x00025717) uni_indicator_pane_stacon

0x6f87,	// (0x0002572c) battery_pane_stacon_ParamLimits

0x6f87,	// (0x0002572c) battery_pane_stacon

0x6fcb,	// (0x00025770) control_bottom_pane_stacon_ParamLimits

0x6fcb,	// (0x00025770) control_bottom_pane_stacon

0x6fee,	// (0x00025793) navi_pane_stacon_ParamLimits

0x6fee,	// (0x00025793) navi_pane_stacon

0x8dbb,	// (0x00027560) stacon_bottom_pane_g1_ParamLimits

0x8dbb,	// (0x00027560) stacon_bottom_pane_g1

0x6671,	// (0x00024e16) aid_levels_signal_lsc_ParamLimits

0x6671,	// (0x00024e16) aid_levels_signal_lsc

0x6688,	// (0x00024e2d) signal_pane_stacon_g1_ParamLimits

0x6688,	// (0x00024e2d) signal_pane_stacon_g1

0x669c,	// (0x00024e41) signal_pane_stacon_g2_ParamLimits

0x669c,	// (0x00024e41) signal_pane_stacon_g2

0x0001,

0xf69d,	// (0x0002de42) signal_pane_stacon_g_ParamLimits

0xf69d,	// (0x0002de42) signal_pane_stacon_g

0x66de,	// (0x00024e83) title_pane_stacon_t1_ParamLimits

0x66de,	// (0x00024e83) title_pane_stacon_t1

0x6703,	// (0x00024ea8) uni_indicator_pane_stacon_g1

0x670d,	// (0x00024eb2) uni_indicator_pane_stacon_g2

0x6717,	// (0x00024ebc) uni_indicator_pane_stacon_g3

0x6721,	// (0x00024ec6) uni_indicator_pane_stacon_g4

0x0003,

0xf6a9,	// (0x0002de4e) uni_indicator_pane_stacon_g

0x672b,	// (0x00024ed0) control_top_pane_stacon_g1

0x6733,	// (0x00024ed8) control_top_pane_stacon_t1_ParamLimits

0x6733,	// (0x00024ed8) control_top_pane_stacon_t1

0x676a,	// (0x00024f0f) aid_levels_battery_lsc_ParamLimits

0x676a,	// (0x00024f0f) aid_levels_battery_lsc

0x6782,	// (0x00024f27) battery_pane_stacon_g1_ParamLimits

0x6782,	// (0x00024f27) battery_pane_stacon_g1

0x6794,	// (0x00024f39) battery_pane_stacon_g2_ParamLimits

0x6794,	// (0x00024f39) battery_pane_stacon_g2

0x0001,

0xf6b2,	// (0x0002de57) battery_pane_stacon_g_ParamLimits

0xf6b2,	// (0x0002de57) battery_pane_stacon_g

0x67d2,	// (0x00024f77) navi_icon_pane_stacon

0x67e6,	// (0x00024f8b) navi_navi_pane_stacon

0x67d2,	// (0x00024f77) navi_text_pane_stacon

0x67fc,	// (0x00024fa1) control_bottom_pane_stacon_g1

0x6804,	// (0x00024fa9) control_bottom_pane_stacon_t1_ParamLimits

0x6804,	// (0x00024fa9) control_bottom_pane_stacon_t1

0x6855,	// (0x00024ffa) grid_app_pane_ParamLimits

0x6855,	// (0x00024ffa) grid_app_pane

0x6877,	// (0x0002501c) scroll_pane_cp15_ParamLimits

0x6877,	// (0x0002501c) scroll_pane_cp15

0x688a,	// (0x0002502f) cell_app_pane_ParamLimits

0x688a,	// (0x0002502f) cell_app_pane

0x68b6,	// (0x0002505b) cell_app_pane_g1_ParamLimits

0x68b6,	// (0x0002505b) cell_app_pane_g1

0x68da,	// (0x0002507f) cell_app_pane_g2_ParamLimits

0x68da,	// (0x0002507f) cell_app_pane_g2

0x0001,

0xf6b7,	// (0x0002de5c) cell_app_pane_g_ParamLimits

0xf6b7,	// (0x0002de5c) cell_app_pane_g

0x68e6,	// (0x0002508b) cell_app_pane_t1_ParamLimits

0x68e6,	// (0x0002508b) cell_app_pane_t1

0x6917,	// (0x000250bc) grid_highlight_pane_ParamLimits

0x6917,	// (0x000250bc) grid_highlight_pane

0x305a,	// (0x000217ff) cell_highlight_pane_g1

0x3062,	// (0x00021807) cell_highlight_pane_g2

0x306a,	// (0x0002180f) cell_highlight_pane_g3

0x3072,	// (0x00021817) cell_highlight_pane_g4

0x307a,	// (0x0002181f) cell_highlight_pane_g5

0x3082,	// (0x00021827) cell_highlight_pane_g6

0x308a,	// (0x0002182f) cell_highlight_pane_g7

0x3092,	// (0x00021837) cell_highlight_pane_g8

0x309a,	// (0x0002183f) cell_highlight_pane_g9

0x1210,	// (0x0001f9b5) cell_highlight_pane_g10

0x0009,

0xf665,	// (0x0002de0a) cell_highlight_pane_g

0x693b,	// (0x000250e0) bg_scroll_pane

0x695a,	// (0x000250ff) scroll_handle_pane

0x69ab,	// (0x00025150) scroll_bg_pane_g1

0x69c0,	// (0x00025165) scroll_bg_pane_g2

0x69d8,	// (0x0002517d) scroll_bg_pane_g3

0x0002,

0xf6bc,	// (0x0002de61) scroll_bg_pane_g

0x69ed,	// (0x00025192) scroll_handle_focus_pane_ParamLimits

0x69ed,	// (0x00025192) scroll_handle_focus_pane

0x69ab,	// (0x00025150) scroll_handle_pane_g1

0x69fa,	// (0x0002519f) scroll_handle_pane_g2

0x69d8,	// (0x0002517d) scroll_handle_pane_g3

0x0002,

0xf6c3,	// (0x0002de68) scroll_handle_pane_g

0x6412,	// (0x00024bb7) bg_popup_sub_pane_cp21_ParamLimits

0x6412,	// (0x00024bb7) bg_popup_sub_pane_cp21

0x6a0e,	// (0x000251b3) popup_fep_japan_predictive_window_t1_ParamLimits

0x6a0e,	// (0x000251b3) popup_fep_japan_predictive_window_t1

0x6a25,	// (0x000251ca) popup_fep_japan_predictive_window_t2_ParamLimits

0x6a25,	// (0x000251ca) popup_fep_japan_predictive_window_t2

0x6a58,	// (0x000251fd) popup_fep_japan_predictive_window_t3_ParamLimits

0x6a58,	// (0x000251fd) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ca,	// (0x0002de6f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ca,	// (0x0002de6f) popup_fep_japan_predictive_window_t

0x121a,	// (0x0001f9bf) bg_popup_sub_pane_cp23

0x6a8f,	// (0x00025234) listscroll_japin_cand_pane

0x6a97,	// (0x0002523c) popup_fep_japan_candidate_window_t1

0x6aa5,	// (0x0002524a) candidate_pane_ParamLimits

0x6aa5,	// (0x0002524a) candidate_pane

0x6ab7,	// (0x0002525c) scroll_pane_cp30

0x6ac1,	// (0x00025266) list_single_popup_jap_candidate_pane_ParamLimits

0x6ac1,	// (0x00025266) list_single_popup_jap_candidate_pane

0x121a,	// (0x0001f9bf) list_highlight_pane_cp30

0x6ad5,	// (0x0002527a) list_single_popup_jap_candidate_pane_t1

0x6ae4,	// (0x00025289) level_1_signal

0x6af1,	// (0x00025296) level_2_signal

0x6afe,	// (0x000252a3) level_3_signal

0x6b0b,	// (0x000252b0) level_4_signal

0x6b18,	// (0x000252bd) level_5_signal

0x6b25,	// (0x000252ca) level_6_signal

0x6b32,	// (0x000252d7) level_7_signal

0x6ae4,	// (0x00025289) level_1_battery

0x6af1,	// (0x00025296) level_2_battery

0x6afe,	// (0x000252a3) level_3_battery

0x6b0b,	// (0x000252b0) level_4_battery

0x6b18,	// (0x000252bd) level_5_battery

0x6b25,	// (0x000252ca) level_6_battery

0x6b32,	// (0x000252d7) level_7_battery

0x6b76,	// (0x0002531b) list_menu_pane_ParamLimits

0x6b76,	// (0x0002531b) list_menu_pane

0x6b8c,	// (0x00025331) scroll_pane_cp25_ParamLimits

0x6b8c,	// (0x00025331) scroll_pane_cp25

0x6ba5,	// (0x0002534a) list_double2_graphic_pane_cp2_ParamLimits

0x6ba5,	// (0x0002534a) list_double2_graphic_pane_cp2

0x6ba5,	// (0x0002534a) list_double2_large_graphic_pane_cp2_ParamLimits

0x6ba5,	// (0x0002534a) list_double2_large_graphic_pane_cp2

0x6ba5,	// (0x0002534a) list_double2_pane_cp2_ParamLimits

0x6ba5,	// (0x0002534a) list_double2_pane_cp2

0x6ba5,	// (0x0002534a) list_double_graphic_pane_cp2_ParamLimits

0x6ba5,	// (0x0002534a) list_double_graphic_pane_cp2

0x6ba5,	// (0x0002534a) list_double_large_graphic_pane_cp2_ParamLimits

0x6ba5,	// (0x0002534a) list_double_large_graphic_pane_cp2

0x6ba5,	// (0x0002534a) list_double_number_pane_cp2_ParamLimits

0x6ba5,	// (0x0002534a) list_double_number_pane_cp2

0x6ba5,	// (0x0002534a) list_double_pane_cp2_ParamLimits

0x6ba5,	// (0x0002534a) list_double_pane_cp2

0x6bcb,	// (0x00025370) list_single_2graphic_pane_cp2_ParamLimits

0x6bcb,	// (0x00025370) list_single_2graphic_pane_cp2

0x6bcb,	// (0x00025370) list_single_graphic_heading_pane_cp2_ParamLimits

0x6bcb,	// (0x00025370) list_single_graphic_heading_pane_cp2

0x6bcb,	// (0x00025370) list_single_graphic_pane_cp2_ParamLimits

0x6bcb,	// (0x00025370) list_single_graphic_pane_cp2

0x6bcb,	// (0x00025370) list_single_heading_pane_cp2_ParamLimits

0x6bcb,	// (0x00025370) list_single_heading_pane_cp2

0x6be8,	// (0x0002538d) list_single_large_graphic_pane_cp2_ParamLimits

0x6be8,	// (0x0002538d) list_single_large_graphic_pane_cp2

0x6bcb,	// (0x00025370) list_single_number_heading_pane_cp2_ParamLimits

0x6bcb,	// (0x00025370) list_single_number_heading_pane_cp2

0x6bcb,	// (0x00025370) list_single_number_pane_cp2_ParamLimits

0x6bcb,	// (0x00025370) list_single_number_pane_cp2

0x6bf8,	// (0x0002539d) list_single_pane_cp2_ParamLimits

0x6bf8,	// (0x0002539d) list_single_pane_cp2

0x6cce,	// (0x00025473) bg_popup_sub_pane_cp22

0x6cf3,	// (0x00025498) popup_side_volume_key_window_g1

0x6d1d,	// (0x000254c2) popup_side_volume_key_window_t1

0x6d3b,	// (0x000254e0) volume_small_pane_cp1

0x1268,	// (0x0001fa0d) bg_popup_sub_pane_cp24_ParamLimits

0x1268,	// (0x0001fa0d) bg_popup_sub_pane_cp24

0x6d43,	// (0x000254e8) fep_china_uni_candidate_pane_ParamLimits

0x6d43,	// (0x000254e8) fep_china_uni_candidate_pane

0x6d57,	// (0x000254fc) fep_china_uni_entry_pane

0x6d67,	// (0x0002550c) popup_fep_china_uni_window_g1

0x6d83,	// (0x00025528) fep_china_uni_entry_pane_g1

0x6d8d,	// (0x00025532) fep_china_uni_entry_pane_g2

0x0001,

0xf6fb,	// (0x0002dea0) fep_china_uni_entry_pane_g

0x6d97,	// (0x0002553c) fep_entry_item_pane

0x6da1,	// (0x00025546) fep_candidate_item_pane

0x6da9,	// (0x0002554e) fep_china_uni_candidate_pane_g1

0x6db3,	// (0x00025558) fep_china_uni_candidate_pane_g2

0x6dbb,	// (0x00025560) fep_china_uni_candidate_pane_g3

0x6dc3,	// (0x00025568) fep_china_uni_candidate_pane_g4

0x0003,

0xf700,	// (0x0002dea5) fep_china_uni_candidate_pane_g

0x1210,	// (0x0001f9b5) fep_entry_item_pane_g1

0x6dcd,	// (0x00025572) fep_entry_item_pane_t1_ParamLimits

0x6dcd,	// (0x00025572) fep_entry_item_pane_t1

0x6de3,	// (0x00025588) fep_candidate_item_pane_t1_ParamLimits

0x6de3,	// (0x00025588) fep_candidate_item_pane_t1

0x6df8,	// (0x0002559d) fep_candidate_item_pane_t2_ParamLimits

0x6df8,	// (0x0002559d) fep_candidate_item_pane_t2

0x0001,

0xf709,	// (0x0002deae) fep_candidate_item_pane_t_ParamLimits

0xf709,	// (0x0002deae) fep_candidate_item_pane_t

0x1276,	// (0x0001fa1b) list_highlight_pane_cp31_ParamLimits

0x1276,	// (0x0001fa1b) list_highlight_pane_cp31

0x6e0a,	// (0x000255af) level_1_signal_lsc

0x6e13,	// (0x000255b8) level_2_signal_lsc

0x6e1c,	// (0x000255c1) level_3_signal_lsc

0x6e25,	// (0x000255ca) level_4_signal_lsc

0x6e2e,	// (0x000255d3) level_5_signal_lsc

0x6e37,	// (0x000255dc) level_6_signal_lsc

0x6e40,	// (0x000255e5) level_7_signal_lsc

0x6e40,	// (0x000255e5) level_1_battery_lsc

0x6e49,	// (0x000255ee) level_2_battery_lsc

0x6e52,	// (0x000255f7) level_3_battery_lsc

0x6e5b,	// (0x00025600) level_4_battery_lsc

0x6e64,	// (0x00025609) level_5_battery_lsc

0x6e6d,	// (0x00025612) level_6_battery_lsc

0x6e0a,	// (0x000255af) level_7_battery_lsc

0x6e76,	// (0x0002561b) scroll_handle_focus_pane_g1

0x6e7f,	// (0x00025624) scroll_handle_focus_pane_g2

0x6e88,	// (0x0002562d) scroll_handle_focus_pane_g3

0x0002,

0xf70e,	// (0x0002deb3) scroll_handle_focus_pane_g

0x5188,	// (0x0002392d) list_single_2graphic_pane_g1_ParamLimits

0x5188,	// (0x0002392d) list_single_2graphic_pane_g1

0x4b00,	// (0x000232a5) list_single_2graphic_pane_g2_ParamLimits

0x4b00,	// (0x000232a5) list_single_2graphic_pane_g2

0x4a86,	// (0x0002322b) list_single_2graphic_pane_g3_ParamLimits

0x4a86,	// (0x0002322b) list_single_2graphic_pane_g3

0x5194,	// (0x00023939) list_single_2graphic_pane_g4_ParamLimits

0x5194,	// (0x00023939) list_single_2graphic_pane_g4

0x0003,

0xf715,	// (0x0002deba) list_single_2graphic_pane_g_ParamLimits

0xf715,	// (0x0002deba) list_single_2graphic_pane_g

0x51a0,	// (0x00023945) list_single_2graphic_pane_t1_ParamLimits

0x51a0,	// (0x00023945) list_single_2graphic_pane_t1

0x51ce,	// (0x00023973) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x51ce,	// (0x00023973) list_double2_graphic_large_graphic_pane_g1

0x4ba5,	// (0x0002334a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4ba5,	// (0x0002334a) list_double2_graphic_large_graphic_pane_g2

0x4bb6,	// (0x0002335b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4bb6,	// (0x0002335b) list_double2_graphic_large_graphic_pane_g3

0x51e0,	// (0x00023985) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x51e0,	// (0x00023985) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71e,	// (0x0002dec3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71e,	// (0x0002dec3) list_double2_graphic_large_graphic_pane_g

0x51ec,	// (0x00023991) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x51ec,	// (0x00023991) list_double2_graphic_large_graphic_pane_t1

0x5202,	// (0x000239a7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5202,	// (0x000239a7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf727,	// (0x0002decc) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf727,	// (0x0002decc) list_double2_graphic_large_graphic_pane_t

0x8e7e,	// (0x00027623) popup_fast_swap_window_ParamLimits

0x8e7e,	// (0x00027623) popup_fast_swap_window

0x8e9c,	// (0x00027641) popup_side_volume_key_window

0x8eba,	// (0x0002765f) stacon_top_pane

0x8ec4,	// (0x00027669) status_pane_ParamLimits

0x8ec4,	// (0x00027669) status_pane

0x1206,	// (0x0001f9ab) status_small_pane

0x121a,	// (0x0001f9bf) control_pane

0x121a,	// (0x0001f9bf) stacon_bottom_pane

0x2f2a,	// (0x000216cf) scroll_pane_cp121

0x2f21,	// (0x000216c6) set_content_pane

0x6e91,	// (0x00025636) bg_active_tab_pane_g1_cp1

0x6e9a,	// (0x0002563f) bg_active_tab_pane_g2_cp1

0x6ea3,	// (0x00025648) bg_active_tab_pane_g3_cp1

0x6e91,	// (0x00025636) bg_passive_tab_pane_g1_cp1

0x6e9a,	// (0x0002563f) bg_passive_tab_pane_g2_cp1

0x6ea3,	// (0x00025648) bg_passive_tab_pane_g3_cp1

0x6eac,	// (0x00025651) bg_active_tab_pane_g1_cp2

0x6e9a,	// (0x0002563f) bg_active_tab_pane_g2_cp2

0x6eb5,	// (0x0002565a) bg_active_tab_pane_g3_cp2

0x6eac,	// (0x00025651) bg_passive_tab_pane_g1_cp2

0x6e9a,	// (0x0002563f) bg_passive_tab_pane_g2_cp2

0x6eb5,	// (0x0002565a) bg_passive_tab_pane_g3_cp2

0x6ebe,	// (0x00025663) bg_active_tab_pane_g1_cp3

0x6e9a,	// (0x0002563f) bg_active_tab_pane_g2_cp3

0x6ec7,	// (0x0002566c) bg_active_tab_pane_g3_cp3

0x6ebe,	// (0x00025663) bg_passive_tab_pane_g1_cp3

0x6e9a,	// (0x0002563f) bg_passive_tab_pane_g2_cp3

0x6ec7,	// (0x0002566c) bg_passive_tab_pane_g3_cp3

0x8d83,	// (0x00027528) bg_active_tab_pane_g1_cp4

0x6e9a,	// (0x0002563f) bg_active_tab_pane_g2_cp4

0x8d8e,	// (0x00027533) bg_active_tab_pane_g3_cp4

0x8d83,	// (0x00027528) bg_passive_tab_pane_g1_cp4

0x6e9a,	// (0x0002563f) bg_passive_tab_pane_g2_cp4

0x8d8e,	// (0x00027533) bg_passive_tab_pane_g3_cp4

0x8dd7,	// (0x0002757c) bg_active_tab_pane_g1_cp5

0x6e9a,	// (0x0002563f) bg_active_tab_pane_g2_cp5

0x8de0,	// (0x00027585) bg_active_tab_pane_g3_cp5

0x8dd7,	// (0x0002757c) bg_passive_tab_pane_g1_cp5

0x6e9a,	// (0x0002563f) bg_passive_tab_pane_g2_cp5

0x8de0,	// (0x00027585) bg_passive_tab_pane_g3_cp5

0x8de9,	// (0x0002758e) list_set_graphic_pane_ParamLimits

0x8de9,	// (0x0002758e) list_set_graphic_pane

0x121a,	// (0x0001f9bf) bg_set_opt_pane_cp4

0x8dff,	// (0x000275a4) list_set_graphic_pane_g1_ParamLimits

0x8dff,	// (0x000275a4) list_set_graphic_pane_g1

0x8e0b,	// (0x000275b0) list_set_graphic_pane_g2_ParamLimits

0x8e0b,	// (0x000275b0) list_set_graphic_pane_g2

0x0001,

0xf72c,	// (0x0002ded1) list_set_graphic_pane_g_ParamLimits

0xf72c,	// (0x0002ded1) list_set_graphic_pane_g

0x0009,

0xfab4,	// (0x0002e259) volume_small_pane_cp_g

0x8e2f,	// (0x000275d4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8e2f,	// (0x000275d4) list_double2_large_graphic_pane_g1_cp2

0x8e3d,	// (0x000275e2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8e3d,	// (0x000275e2) list_double2_large_graphic_pane_g2_cp2

0x8e4e,	// (0x000275f3) list_double2_large_graphic_pane_g3_cp2

0x8e56,	// (0x000275fb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8e56,	// (0x000275fb) list_double2_large_graphic_pane_t1_cp2

0x8e6c,	// (0x00027611) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8e6c,	// (0x00027611) list_double2_large_graphic_pane_t2_cp2

0xaa53,	// (0x000291f8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaa53,	// (0x000291f8) list_double_large_graphic_pane_g1_cp2

0xaa66,	// (0x0002920b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaa66,	// (0x0002920b) list_double_large_graphic_pane_g2_cp2

0x8fe2,	// (0x00027787) list_double_large_graphic_pane_g3_cp2

0xaa77,	// (0x0002921c) list_double_large_graphic_pane_g4_cp

0xaa7f,	// (0x00029224) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaa7f,	// (0x00029224) list_double_large_graphic_pane_t1_cp2

0xaa96,	// (0x0002923b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaa96,	// (0x0002923b) list_double_large_graphic_pane_t2_cp2

0x8ed2,	// (0x00027677) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8ed2,	// (0x00027677) list_double2_graphic_pane_g1_cp2

0x8ee0,	// (0x00027685) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8ee0,	// (0x00027685) list_double2_graphic_pane_g2_cp2

0x8ef1,	// (0x00027696) list_double2_graphic_pane_g3_cp2

0x8efb,	// (0x000276a0) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8efb,	// (0x000276a0) list_double2_graphic_pane_t1_cp2

0x8f11,	// (0x000276b6) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f11,	// (0x000276b6) list_double2_graphic_pane_t2_cp2

0x8f23,	// (0x000276c8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8f23,	// (0x000276c8) list_single_number_heading_pane_g1_cp2

0x8f2f,	// (0x000276d4) list_single_number_heading_pane_g2_cp2

0x8f37,	// (0x000276dc) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f37,	// (0x000276dc) list_single_number_heading_pane_t1_cp2

0x8f4d,	// (0x000276f2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8f4d,	// (0x000276f2) list_single_number_heading_pane_t2_cp2

0x8f61,	// (0x00027706) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8f61,	// (0x00027706) list_single_number_heading_pane_t3_cp2

0x8f23,	// (0x000276c8) list_single_heading_pane_g1_cp2_ParamLimits

0x8f23,	// (0x000276c8) list_single_heading_pane_g1_cp2

0x8f2f,	// (0x000276d4) list_single_heading_pane_g2_cp2

0x8f37,	// (0x000276dc) list_single_heading_pane_t1_cp2_ParamLimits

0x8f37,	// (0x000276dc) list_single_heading_pane_t1_cp2

0xa84d,	// (0x00028ff2) list_single_heading_pane_t2_cp2_ParamLimits

0xa84d,	// (0x00028ff2) list_single_heading_pane_t2_cp2

0xa795,	// (0x00028f3a) list_double_graphic_pane_g1_cp2_ParamLimits

0xa795,	// (0x00028f3a) list_double_graphic_pane_g1_cp2

0xa7a1,	// (0x00028f46) list_double_graphic_pane_g2_cp2_ParamLimits

0xa7a1,	// (0x00028f46) list_double_graphic_pane_g2_cp2

0xa7b0,	// (0x00028f55) list_double_graphic_pane_g3_cp2

0xa7b8,	// (0x00028f5d) list_double_graphic_pane_t1_cp2_ParamLimits

0xa7b8,	// (0x00028f5d) list_double_graphic_pane_t1_cp2

0xa7ce,	// (0x00028f73) list_double_graphic_pane_t2_cp2_ParamLimits

0xa7ce,	// (0x00028f73) list_double_graphic_pane_t2_cp2

0x8fd6,	// (0x0002777b) list_double_number_pane_g1_cp2_ParamLimits

0x8fd6,	// (0x0002777b) list_double_number_pane_g1_cp2

0x8fe2,	// (0x00027787) list_double_number_pane_g2_cp2

0xa759,	// (0x00028efe) list_double_number_pane_t1_cp2_ParamLimits

0xa759,	// (0x00028efe) list_double_number_pane_t1_cp2

0xa76d,	// (0x00028f12) list_double_number_pane_t2_cp2_ParamLimits

0xa76d,	// (0x00028f12) list_double_number_pane_t2_cp2

0xa783,	// (0x00028f28) list_double_number_pane_t3_cp2_ParamLimits

0xa783,	// (0x00028f28) list_double_number_pane_t3_cp2

0xa642,	// (0x00028de7) list_single_graphic_pane_g1_cp2_ParamLimits

0xa642,	// (0x00028de7) list_single_graphic_pane_g1_cp2

0x904b,	// (0x000277f0) list_single_graphic_pane_g2_cp2_ParamLimits

0x904b,	// (0x000277f0) list_single_graphic_pane_g2_cp2

0x9057,	// (0x000277fc) list_single_graphic_pane_g3_cp2

0xa618,	// (0x00028dbd) list_single_graphic_pane_t1_cp2_ParamLimits

0xa618,	// (0x00028dbd) list_single_graphic_pane_t1_cp2

0x904b,	// (0x000277f0) list_single_number_pane_g1_cp2_ParamLimits

0x904b,	// (0x000277f0) list_single_number_pane_g1_cp2

0x9057,	// (0x000277fc) list_single_number_pane_g2_cp2

0xa618,	// (0x00028dbd) list_single_number_pane_t1_cp2_ParamLimits

0xa618,	// (0x00028dbd) list_single_number_pane_t1_cp2

0xa62e,	// (0x00028dd3) list_single_number_pane_t2_cp2_ParamLimits

0xa62e,	// (0x00028dd3) list_single_number_pane_t2_cp2

0x8e3d,	// (0x000275e2) list_double2_pane_g1_cp2_ParamLimits

0x8e3d,	// (0x000275e2) list_double2_pane_g1_cp2

0x8e4e,	// (0x000275f3) list_double2_pane_g2_cp2

0x8fae,	// (0x00027753) list_double2_pane_t1_cp2_ParamLimits

0x8fae,	// (0x00027753) list_double2_pane_t1_cp2

0x8fc4,	// (0x00027769) list_double2_pane_t2_cp2_ParamLimits

0x8fc4,	// (0x00027769) list_double2_pane_t2_cp2

0x8fd6,	// (0x0002777b) list_double_pane_g1_cp2_ParamLimits

0x8fd6,	// (0x0002777b) list_double_pane_g1_cp2

0x8fe2,	// (0x00027787) list_double_pane_g2_cp2

0x8fea,	// (0x0002778f) list_double_pane_t1_cp2_ParamLimits

0x8fea,	// (0x0002778f) list_double_pane_t1_cp2

0x9000,	// (0x000277a5) list_double_pane_t2_cp2_ParamLimits

0x9000,	// (0x000277a5) list_double_pane_t2_cp2

0x903b,	// (0x000277e0) list_single_pane_cp2_g3

0x904b,	// (0x000277f0) list_single_pane_g1_cp2_ParamLimits

0x904b,	// (0x000277f0) list_single_pane_g1_cp2

0x9057,	// (0x000277fc) list_single_pane_g2_cp2

0x905f,	// (0x00027804) list_single_pane_t1_cp2_ParamLimits

0x905f,	// (0x00027804) list_single_pane_t1_cp2

0x9077,	// (0x0002781c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9077,	// (0x0002781c) list_single_large_graphic_pane_g1_cp2

0x9085,	// (0x0002782a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9085,	// (0x0002782a) list_single_large_graphic_pane_g2_cp2

0x9091,	// (0x00027836) list_single_large_graphic_pane_g3_cp2

0x9099,	// (0x0002783e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9099,	// (0x0002783e) list_single_large_graphic_pane_g4_cp1

0x90b3,	// (0x00027858) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x90b3,	// (0x00027858) list_single_large_graphic_pane_t1_cp2

0xa5e2,	// (0x00028d87) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa5e2,	// (0x00028d87) list_single_graphic_heading_pane_g1_cp2

0xa5af,	// (0x00028d54) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa5af,	// (0x00028d54) list_single_graphic_heading_pane_g4_cp2

0x9057,	// (0x000277fc) list_single_graphic_heading_pane_g5_cp2

0xa5ee,	// (0x00028d93) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa5ee,	// (0x00028d93) list_single_graphic_heading_pane_t1_cp2

0xa604,	// (0x00028da9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa604,	// (0x00028da9) list_single_graphic_heading_pane_t2_cp2

0xa5a3,	// (0x00028d48) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa5a3,	// (0x00028d48) list_single_2graphic_pane_g1_cp2

0xa5af,	// (0x00028d54) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa5af,	// (0x00028d54) list_single_2graphic_pane_g2_cp2

0x9057,	// (0x000277fc) list_single_2graphic_pane_g3_cp2

0xa5c0,	// (0x00028d65) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa5c0,	// (0x00028d65) list_single_2graphic_pane_g4_cp2

0xa5cc,	// (0x00028d71) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa5cc,	// (0x00028d71) list_single_2graphic_pane_t1_cp2

0x1210,	// (0x0001f9b5) list_highlight_pane_g10_cp1

0xa17b,	// (0x00028920) list_highlight_pane_g1_cp1

0xa183,	// (0x00028928) list_highlight_pane_g2_cp1

0xa18b,	// (0x00028930) list_highlight_pane_g3_cp1

0xa193,	// (0x00028938) list_highlight_pane_g4_cp1

0xa19b,	// (0x00028940) list_highlight_pane_g5_cp1

0xa1a3,	// (0x00028948) list_highlight_pane_g6_cp1

0xa1ab,	// (0x00028950) list_highlight_pane_g7_cp1

0xa1b3,	// (0x00028958) list_highlight_pane_g8_cp1

0xa1bb,	// (0x00028960) list_highlight_pane_g9_cp1

0xa09b,	// (0x00028840) form_field_slider_pane_t3

0xa0a9,	// (0x0002884e) form_field_slider_pane_t4

0xa0b7,	// (0x0002885c) slider_form_pane_ParamLimits

0xa0b7,	// (0x0002885c) slider_form_pane

0x121a,	// (0x0001f9bf) control_abbreviations

0x121a,	// (0x0001f9bf) control_conventions

0x121a,	// (0x0001f9bf) control_definitions

0x121a,	// (0x0001f9bf) format_table_attribute

0xa8a3,	// (0x00029048) bg_popup_preview_window_pane_g9

0x121a,	// (0x0001f9bf) format_table_data2

0x121a,	// (0x0001f9bf) format_table_data3

0x121a,	// (0x0001f9bf) format_table_data_example

0x0008,

0x121a,	// (0x0001f9bf) intro_purpose

0xf8c8,	// (0x0002e06d) bg_popup_preview_window_pane_g

0x121a,	// (0x0001f9bf) texts_category

0x121a,	// (0x0001f9bf) texts_graphics

0x90c9,	// (0x0002786e) text_digital

0x90d8,	// (0x0002787d) text_primary

0x90e7,	// (0x0002788c) text_primary_small

0x90f6,	// (0x0002789b) text_secondary

0x9105,	// (0x000278aa) text_title

0xb00d,	// (0x000297b2) bg_passive_tab_pane_g1_cp3_srt

0x6e9a,	// (0x0002563f) bg_passive_tab_pane_g2_cp3_srt

0xb016,	// (0x000297bb) bg_passive_tab_pane_g3_cp3_srt

0x1276,	// (0x0001fa1b) bg_active_tab_pane_cp3_srt_ParamLimits

0x1276,	// (0x0001fa1b) bg_active_tab_pane_cp3_srt

0xb01f,	// (0x000297c4) tabs_4_active_pane_srt_g1

0xb027,	// (0x000297cc) tabs_4_active_pane_srt_t1_ParamLimits

0xb027,	// (0x000297cc) tabs_4_active_pane_srt_t1

0xb00d,	// (0x000297b2) bg_active_tab_pane_g1_cp3_copy1

0x6e9a,	// (0x0002563f) bg_active_tab_pane_g2_cp3_copy1

0xb016,	// (0x000297bb) bg_active_tab_pane_g3_cp3_copy1

0x1276,	// (0x0001fa1b) tabs_2_long_active_pane_srt_ParamLimits

0x1276,	// (0x0001fa1b) tabs_2_long_active_pane_srt

0x1276,	// (0x0001fa1b) tabs_2_long_passive_pane_srt_ParamLimits

0x1276,	// (0x0001fa1b) tabs_2_long_passive_pane_srt

0x64ea,	// (0x00024c8f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x64ea,	// (0x00024c8f) bg_passive_tab_pane_cp4_srt

0xaccd,	// (0x00029472) bg_passive_tab_pane_g1_cp4_srt

0x6e9a,	// (0x0002563f) bg_passive_tab_pane_g2_cp4_srt

0xacd6,	// (0x0002947b) bg_passive_tab_pane_g3_cp4_srt

0x64c9,	// (0x00024c6e) bg_active_tab_pane_cp4_srt_ParamLimits

0x64c9,	// (0x00024c6e) bg_active_tab_pane_cp4_srt

0xacdf,	// (0x00029484) tabs_2_long_active_pane_srt_t1_ParamLimits

0xacdf,	// (0x00029484) tabs_2_long_active_pane_srt_t1

0xaccd,	// (0x00029472) bg_active_tab_pane_g1_cp4_srt

0x6e9a,	// (0x0002563f) bg_active_tab_pane_g2_cp4_srt

0xacd6,	// (0x0002947b) bg_active_tab_pane_g3_cp4_srt

0x1268,	// (0x0001fa0d) tabs_3_long_active_pane_srt_ParamLimits

0x1268,	// (0x0001fa0d) tabs_3_long_active_pane_srt

0x1268,	// (0x0001fa0d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1268,	// (0x0001fa0d) tabs_3_long_passive_pane_cp_srt

0x1268,	// (0x0001fa0d) tabs_3_long_passive_pane_srt_ParamLimits

0x1268,	// (0x0001fa0d) tabs_3_long_passive_pane_srt

0x64ea,	// (0x00024c8f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x64ea,	// (0x00024c8f) bg_passive_tab_pane_cp5_srt

0x8dd7,	// (0x0002757c) bg_passive_tab_pane_g1_cp5_srt

0x6e9a,	// (0x0002563f) bg_passive_tab_pane_g2_cp5_srt

0x8de0,	// (0x00027585) bg_passive_tab_pane_g3_cp5_srt

0x64c9,	// (0x00024c6e) bg_active_tab_pane_cp5_srt_ParamLimits

0x64c9,	// (0x00024c6e) bg_active_tab_pane_cp5_srt

0xacbb,	// (0x00029460) tabs_3_long_active_pane_srt_t1_ParamLimits

0xacbb,	// (0x00029460) tabs_3_long_active_pane_srt_t1

0x8dd7,	// (0x0002757c) bg_active_tab_pane_g1_cp5_srt

0x6e9a,	// (0x0002563f) bg_active_tab_pane_g2_cp5_srt

0x8de0,	// (0x00027585) bg_active_tab_pane_g3_cp5_srt

0xacad,	// (0x00029452) navi_text_pane_srt_t1

0xaca5,	// (0x0002944a) navi_icon_pane_srt_g1

0x92dd,	// (0x00027a82) midp_editing_number_pane_srt

0x9114,	// (0x000278b9) midp_ticker_pane_srt

0x92e5,	// (0x00027a8a) midp_ticker_pane_srt_g1

0x92ed,	// (0x00027a92) midp_ticker_pane_srt_g2

0x0001,

0xf74b,	// (0x0002def0) midp_ticker_pane_srt_g

0x92f5,	// (0x00027a9a) midp_ticker_pane_srt_t1

0xac96,	// (0x0002943b) midp_editing_number_pane_t1_copy1

0x911c,	// (0x000278c1) listscroll_midp_pane

0x911c,	// (0x000278c1) midp_form_pane

0x918b,	// (0x00027930) midp_info_popup_window_ParamLimits

0x918b,	// (0x00027930) midp_info_popup_window

0x6412,	// (0x00024bb7) bg_popup_sub_pane_cp50_ParamLimits

0x6412,	// (0x00024bb7) bg_popup_sub_pane_cp50

0x9d9d,	// (0x00028542) listscroll_midp_info_pane_ParamLimits

0x9d9d,	// (0x00028542) listscroll_midp_info_pane

0x9d7d,	// (0x00028522) listscroll_form_midp_pane_ParamLimits

0x9d7d,	// (0x00028522) listscroll_form_midp_pane

0x9d89,	// (0x0002852e) scroll_bar_cp050

0x9d5d,	// (0x00028502) list_midp_pane

0xbaca,	// (0x0002a26f) signal_pane_g2_cp

0x9c97,	// (0x0002843c) listscroll_midp_info_pane_t1_ParamLimits

0x9c97,	// (0x0002843c) listscroll_midp_info_pane_t1

0x9caf,	// (0x00028454) listscroll_midp_info_pane_t2_ParamLimits

0x9caf,	// (0x00028454) listscroll_midp_info_pane_t2

0x9ced,	// (0x00028492) listscroll_midp_info_pane_t3_ParamLimits

0x9ced,	// (0x00028492) listscroll_midp_info_pane_t3

0x9d27,	// (0x000284cc) listscroll_midp_info_pane_t4_ParamLimits

0x9d27,	// (0x000284cc) listscroll_midp_info_pane_t4

0x0003,

0xf803,	// (0x0002dfa8) listscroll_midp_info_pane_t_ParamLimits

0xf803,	// (0x0002dfa8) listscroll_midp_info_pane_t

0x6475,	// (0x00024c1a) scroll_pane_cp21

0x9c31,	// (0x000283d6) form_midp_field_choice_group_pane

0x9c3a,	// (0x000283df) form_midp_field_text_pane

0x9c7d,	// (0x00028422) form_midp_field_time_pane

0x9c85,	// (0x0002842a) form_midp_gauge_slider_pane

0x9c8e,	// (0x00028433) form_midp_gauge_wait_pane

0x121a,	// (0x0001f9bf) form_midp_image_pane

0x538d,	// (0x00023b32) list_single_midp_pane_ParamLimits

0x538d,	// (0x00023b32) list_single_midp_pane

0x9bf5,	// (0x0002839a) form_midp_field_text_pane_t1

0x99e7,	// (0x0002818c) input_focus_pane_cp050

0x9c20,	// (0x000283c5) list_midp_form_text_pane

0x9bc4,	// (0x00028369) form_midp_field_choice_group_pane_t1

0x9bd2,	// (0x00028377) input_focus_pane_cp051

0x9be6,	// (0x0002838b) list_midp_choice_pane

0x121a,	// (0x0001f9bf) status_idle_pane

0x9ba8,	// (0x0002834d) form_midp_field_time_pane_t1

0x1210,	// (0x0001f9b5) wait_anim_pane_g2_copy1

0x9bb6,	// (0x0002835b) form_midp_field_time_pane_t2

0x0001,

0x923b,	// (0x000279e0) aid_navinavi_width_2_pane

0xf7fe,	// (0x0002dfa3) form_midp_field_time_pane_t

0x121a,	// (0x0001f9bf) input_focus_pane_cp052

0x121a,	// (0x0001f9bf) bg_input_focus_pane_cp040

0x9b68,	// (0x0002830d) form_midp_gauge_slider_pane_t1

0x9b76,	// (0x0002831b) form_midp_gauge_slider_pane_t2

0x9b84,	// (0x00028329) form_midp_gauge_slider_pane_t3

0x9b92,	// (0x00028337) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f5,	// (0x0002df9a) form_midp_gauge_slider_pane_t

0x9ba0,	// (0x00028345) form_midp_slider_pane

0x1276,	// (0x0001fa1b) bg_input_focus_pane_cp041_ParamLimits

0x1276,	// (0x0001fa1b) bg_input_focus_pane_cp041

0x9b35,	// (0x000282da) form_midp_gauge_wait_pane_t1_ParamLimits

0x9b35,	// (0x000282da) form_midp_gauge_wait_pane_t1

0x9b47,	// (0x000282ec) form_midp_gauge_wait_pane_t2_ParamLimits

0x9b47,	// (0x000282ec) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f0,	// (0x0002df95) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f0,	// (0x0002df95) form_midp_gauge_wait_pane_t

0x9b59,	// (0x000282fe) form_midp_wait_pane_ParamLimits

0x9b59,	// (0x000282fe) form_midp_wait_pane

0x9afd,	// (0x000282a2) form_midp_image_pane_g1

0x9b06,	// (0x000282ab) form_midp_image_pane_t1

0x9b15,	// (0x000282ba) form_midp_image_pane_t2

0x9b24,	// (0x000282c9) form_midp_image_pane_t3

0x0002,

0xf7e9,	// (0x0002df8e) form_midp_image_pane_t

0x9af4,	// (0x00028299) list_single_midp_pane_g1

0x537e,	// (0x00023b23) list_single_midp_pane_t1

0x9ada,	// (0x0002827f) list_midp_form_item_pane_ParamLimits

0x9ada,	// (0x0002827f) list_midp_form_item_pane

0x91e3,	// (0x00027988) list_midp_form_item_pane_t1

0x91f2,	// (0x00027997) midp_ticker_pane_g1

0x91fe,	// (0x000279a3) midp_ticker_pane_g2

0x0001,

0xf731,	// (0x0002ded6) midp_ticker_pane_g

0x920a,	// (0x000279af) midp_ticker_pane_t1

0xaf03,	// (0x000296a8) midp_editing_number_pane_t1

0xaee1,	// (0x00029686) midp_editing_number_pane

0xaef0,	// (0x00029695) midp_ticker_pane

0x9da9,	// (0x0002854e) ai_message_heading_pane

0x121a,	// (0x0001f9bf) bg_popup_window_pane_cp14

0x9db1,	// (0x00028556) listscroll_ai_message_pane

0xac1c,	// (0x000293c1) ai_message_heading_pane_g1_ParamLimits

0xac1c,	// (0x000293c1) ai_message_heading_pane_g1

0xac28,	// (0x000293cd) ai_message_heading_pane_g2_ParamLimits

0xac28,	// (0x000293cd) ai_message_heading_pane_g2

0xac36,	// (0x000293db) ai_message_heading_pane_g3_ParamLimits

0xac36,	// (0x000293db) ai_message_heading_pane_g3

0xac42,	// (0x000293e7) ai_message_heading_pane_g4_ParamLimits

0xac42,	// (0x000293e7) ai_message_heading_pane_g4

0x0003,

0xf92a,	// (0x0002e0cf) ai_message_heading_pane_g_ParamLimits

0xf92a,	// (0x0002e0cf) ai_message_heading_pane_g

0xac4e,	// (0x000293f3) ai_message_heading_pane_t1_ParamLimits

0xac4e,	// (0x000293f3) ai_message_heading_pane_t1

0xac68,	// (0x0002940d) ai_message_heading_pane_t2_ParamLimits

0xac68,	// (0x0002940d) ai_message_heading_pane_t2

0x0001,

0xf933,	// (0x0002e0d8) ai_message_heading_pane_t_ParamLimits

0xf933,	// (0x0002e0d8) ai_message_heading_pane_t

0xac7c,	// (0x00029421) bg_popup_heading_pane_cp1_ParamLimits

0xac7c,	// (0x00029421) bg_popup_heading_pane_cp1

0xac0a,	// (0x000293af) list_ai_message_pane_ParamLimits

0xac0a,	// (0x000293af) list_ai_message_pane

0x6475,	// (0x00024c1a) scroll_pane_cp10

0xaba6,	// (0x0002934b) list_ai_message_pane_g1

0xabae,	// (0x00029353) list_ai_message_pane_g2

0x0001,

0xf907,	// (0x0002e0ac) list_ai_message_pane_g

0xabb6,	// (0x0002935b) list_ai_message_pane_t1_ParamLimits

0xabb6,	// (0x0002935b) list_ai_message_pane_t1

0xabcb,	// (0x00029370) list_ai_message_pane_t2_ParamLimits

0xabcb,	// (0x00029370) list_ai_message_pane_t2

0xabe0,	// (0x00029385) list_ai_message_pane_t3_ParamLimits

0xabe0,	// (0x00029385) list_ai_message_pane_t3

0xabf5,	// (0x0002939a) list_ai_message_pane_t4_ParamLimits

0xabf5,	// (0x0002939a) list_ai_message_pane_t4

0x0003,

0xf90c,	// (0x0002e0b1) list_ai_message_pane_t_ParamLimits

0xf90c,	// (0x0002e0b1) list_ai_message_pane_t

0xab8f,	// (0x00029334) cell_ai_soft_ind_pane_ParamLimits

0xab8f,	// (0x00029334) cell_ai_soft_ind_pane

0x921c,	// (0x000279c1) cell_ai_soft_ind_pane_g1_ParamLimits

0x921c,	// (0x000279c1) cell_ai_soft_ind_pane_g1

0x121a,	// (0x0001f9bf) grid_highlight_cp1

0x9229,	// (0x000279ce) text_secondary_cp56_ParamLimits

0x9229,	// (0x000279ce) text_secondary_cp56

0xab64,	// (0x00029309) example_general_pane_ParamLimits

0xab64,	// (0x00029309) example_general_pane

0xab70,	// (0x00029315) example_parent_pane_g1_ParamLimits

0xab70,	// (0x00029315) example_parent_pane_g1

0xab7c,	// (0x00029321) example_parent_pane_t1_ParamLimits

0xab7c,	// (0x00029321) example_parent_pane_t1

0x75d6,	// (0x00025d7b) popup_preview_text_window_ParamLimits

0x75d6,	// (0x00025d7b) popup_preview_text_window

0x9043,	// (0x000277e8) list_single_pane_cp2_g4

0x2ad7,	// (0x0002127c) bg_popup_preview_window_pane_ParamLimits

0x2ad7,	// (0x0002127c) bg_popup_preview_window_pane

0xa8ad,	// (0x00029052) popup_preview_text_window_t1_ParamLimits

0xa8ad,	// (0x00029052) popup_preview_text_window_t1

0xa8cb,	// (0x00029070) popup_preview_text_window_t2_ParamLimits

0xa8cb,	// (0x00029070) popup_preview_text_window_t2

0xa914,	// (0x000290b9) popup_preview_text_window_t3_ParamLimits

0xa914,	// (0x000290b9) popup_preview_text_window_t3

0xa959,	// (0x000290fe) popup_preview_text_window_t4_ParamLimits

0xa959,	// (0x000290fe) popup_preview_text_window_t4

0x0004,

0xf8db,	// (0x0002e080) popup_preview_text_window_t_ParamLimits

0xf8db,	// (0x0002e080) popup_preview_text_window_t

0xa9d7,	// (0x0002917c) scroll_pane_cp11

0x9973,	// (0x00028118) bg_popup_preview_window_pane_g1

0xa861,	// (0x00029006) bg_popup_preview_window_pane_g2

0xa86b,	// (0x00029010) bg_popup_preview_window_pane_g3

0xa875,	// (0x0002901a) bg_popup_preview_window_pane_g4

0xa87f,	// (0x00029024) bg_popup_preview_window_pane_g5

0xa889,	// (0x0002902e) bg_popup_preview_window_pane_g6

0xa891,	// (0x00029036) bg_popup_preview_window_pane_g7

0xa899,	// (0x0002903e) bg_popup_preview_window_pane_g8

0x5c09,	// (0x000243ae) aid_popup_width_pane

0x75b2,	// (0x00025d57) popup_midp_note_alarm_window_ParamLimits

0x75b2,	// (0x00025d57) popup_midp_note_alarm_window

0x2f93,	// (0x00021738) data_form_pane_ParamLimits

0x4fd7,	// (0x0002377c) form_field_data_pane_g1

0x4fe1,	// (0x00023786) form_field_data_pane_t1_ParamLimits

0x2f9f,	// (0x00021744) input_focus_pane_ParamLimits

0x4ffb,	// (0x000237a0) data_form_wide_pane_ParamLimits

0x500c,	// (0x000237b1) form_field_data_wide_pane_g1

0x5018,	// (0x000237bd) form_field_data_wide_pane_t1_ParamLimits

0x2c93,	// (0x00021438) input_focus_pane_cp6_ParamLimits

0x6420,	// (0x00024bc5) input_popup_find_pane_g1_ParamLimits

0x6420,	// (0x00024bc5) input_popup_find_pane_g1

0x67a5,	// (0x00024f4a) aid_navi_side_left_pane

0x67ba,	// (0x00024f5f) aid_navi_side_right_pane

0xa276,	// (0x00028a1b) bg_popup_window_pane_cp30_ParamLimits

0xa276,	// (0x00028a1b) bg_popup_window_pane_cp30

0xa2f0,	// (0x00028a95) popup_midp_note_alarm_window_g1_ParamLimits

0xa2f0,	// (0x00028a95) popup_midp_note_alarm_window_g1

0xa320,	// (0x00028ac5) popup_midp_note_alarm_window_t1_ParamLimits

0xa320,	// (0x00028ac5) popup_midp_note_alarm_window_t1

0xa3c1,	// (0x00028b66) popup_midp_note_alarm_window_t2_ParamLimits

0xa3c1,	// (0x00028b66) popup_midp_note_alarm_window_t2

0xa46f,	// (0x00028c14) popup_midp_note_alarm_window_t3_ParamLimits

0xa46f,	// (0x00028c14) popup_midp_note_alarm_window_t3

0xa4a1,	// (0x00028c46) popup_midp_note_alarm_window_t4_ParamLimits

0xa4a1,	// (0x00028c46) popup_midp_note_alarm_window_t4

0xa4c7,	// (0x00028c6c) popup_midp_note_alarm_window_t5_ParamLimits

0xa4c7,	// (0x00028c6c) popup_midp_note_alarm_window_t5

0x000a,

0xf878,	// (0x0002e01d) popup_midp_note_alarm_window_t_ParamLimits

0xf878,	// (0x0002e01d) popup_midp_note_alarm_window_t

0xa573,	// (0x00028d18) wait_bar_pane_cp1_ParamLimits

0xa573,	// (0x00028d18) wait_bar_pane_cp1

0x121a,	// (0x0001f9bf) wait_anim_pane_copy1

0x121a,	// (0x0001f9bf) wait_border_pane_copy1

0x9f5b,	// (0x00028700) wait_border_pane_g1_copy1

0x5032,	// (0x000237d7) form_field_popup_pane_g1

0x503a,	// (0x000237df) form_field_popup_pane_t1_ParamLimits

0x2f9f,	// (0x00021744) input_focus_pane_cp7_ParamLimits

0x3004,	// (0x000217a9) list_form_pane_ParamLimits

0x5054,	// (0x000237f9) form_field_popup_wide_pane_g1

0x505c,	// (0x00023801) form_field_popup_wide_pane_t1_ParamLimits

0x2f9f,	// (0x00021744) input_focus_pane_cp8_ParamLimits

0x302a,	// (0x000217cf) list_form_wide_pane_ParamLimits

0xb0b1,	// (0x00029856) aid_size_cell_graphic_pane

0x50e8,	// (0x0002388d) data_form_pane_t1_ParamLimits

0x53d5,	// (0x00023b7a) data_form_wide_pane_t1_ParamLimits

0x9530,	// (0x00027cd5) bg_status_flat_pane

0x6034,	// (0x000247d9) title_pane_t1_ParamLimits

0x1230,	// (0x0001f9d5) title_pane_t2_ParamLimits

0x1256,	// (0x0001f9fb) title_pane_t3_ParamLimits

0xf530,	// (0x0002dcd5) title_pane_t_ParamLimits

0x6ae4,	// (0x00025289) level_1_signal_ParamLimits

0x6af1,	// (0x00025296) level_2_signal_ParamLimits

0x6afe,	// (0x000252a3) level_3_signal_ParamLimits

0x6b0b,	// (0x000252b0) level_4_signal_ParamLimits

0x6b18,	// (0x000252bd) level_5_signal_ParamLimits

0x6b25,	// (0x000252ca) level_6_signal_ParamLimits

0x6b32,	// (0x000252d7) level_7_signal_ParamLimits

0x6ae4,	// (0x00025289) level_1_battery_ParamLimits

0x6af1,	// (0x00025296) level_2_battery_ParamLimits

0x6afe,	// (0x000252a3) level_3_battery_ParamLimits

0x6b0b,	// (0x000252b0) level_4_battery_ParamLimits

0x6b18,	// (0x000252bd) level_5_battery_ParamLimits

0x6b25,	// (0x000252ca) level_6_battery_ParamLimits

0x6b32,	// (0x000252d7) level_7_battery_ParamLimits

0xa17b,	// (0x00028920) bg_status_flat_pane_g1

0xa183,	// (0x00028928) bg_status_flat_pane_g2

0xa18b,	// (0x00028930) bg_status_flat_pane_g3

0xa193,	// (0x00028938) bg_status_flat_pane_g4

0xa19b,	// (0x00028940) bg_status_flat_pane_g5

0xa1a3,	// (0x00028948) bg_status_flat_pane_g6

0xa1ab,	// (0x00028950) bg_status_flat_pane_g7

0x60a4,	// (0x00024849) tabs_3_active_pane_t1_ParamLimits

0x60a4,	// (0x00024849) tabs_3_passive_pane_t1_ParamLimits

0x60be,	// (0x00024863) tabs_4_active_pane_t1_ParamLimits

0x60be,	// (0x00024863) tabs_4_1_passive_pane_t1_ParamLimits

0x64b7,	// (0x00024c5c) tabs_2_active_pane_t1_ParamLimits

0x64b7,	// (0x00024c5c) tabs_2_passive_pane_t1_ParamLimits

0x64c9,	// (0x00024c6e) bg_active_tab_pane_cp4_ParamLimits

0x64d7,	// (0x00024c7c) tabs_2_long_active_pane_t1_ParamLimits

0x64ea,	// (0x00024c8f) bg_passive_tab_pane_cp4_ParamLimits

0x78ba,	// (0x0002605f) list_single_midp_graphic_pane_t1_ParamLimits

0x64c9,	// (0x00024c6e) bg_active_tab_pane_cp5_ParamLimits

0x64f6,	// (0x00024c9b) tabs_3_long_active_pane_t1_ParamLimits

0x64ea,	// (0x00024c8f) bg_passive_tab_pane_cp5_ParamLimits

0x78ba,	// (0x0002605f) list_single_midp_graphic_pane_t1

0x9530,	// (0x00027cd5) bg_status_flat_pane_ParamLimits

0x95fb,	// (0x00027da0) indicator_pane_cp2_ParamLimits

0x95fb,	// (0x00027da0) indicator_pane_cp2

0x973c,	// (0x00027ee1) navi_pane_srt_ParamLimits

0x973c,	// (0x00027ee1) navi_pane_srt

0x9760,	// (0x00027f05) popup_clock_digital_analogue_window_cp1

0x12d4,	// (0x0001fa79) indicator_pane_t1

0x9114,	// (0x000278b9) copy_highlight_pane

0x9114,	// (0x000278b9) cursor_graphics_pane

0x9114,	// (0x000278b9) graphic_within_text_pane

0x9114,	// (0x000278b9) link_highlight_pane

0xa99a,	// (0x0002913f) popup_preview_text_window_t5_ParamLimits

0xa99a,	// (0x0002913f) popup_preview_text_window_t5

0x9245,	// (0x000279ea) cursor_digital_pane

0x9245,	// (0x000279ea) cursor_primary_pane

0x9256,	// (0x000279fb) cursor_primary_small_pane

0x925e,	// (0x00027a03) cursor_secondary_pane

0x9266,	// (0x00027a0b) cursor_title_pane

0x9245,	// (0x000279ea) link_highlight_digital_pane

0x924d,	// (0x000279f2) link_highlight_primary_pane

0x9256,	// (0x000279fb) link_highlight_primary_small_pane

0x925e,	// (0x00027a03) link_highlight_secondary_pane

0x9266,	// (0x00027a0b) link_highlight_title_pane

0x9245,	// (0x000279ea) copy_highlight_digital_pane

0x9245,	// (0x000279ea) copy_highlight_primary_pane

0x9256,	// (0x000279fb) copy_highlight_primary_small_pane

0x925e,	// (0x00027a03) copy_highlight_secondary_pane

0x9266,	// (0x00027a0b) copy_highlight_title_pane

0x925e,	// (0x00027a03) graphic_text_digital_pane

0xa219,	// (0x000289be) graphic_text_primary_pane

0xa222,	// (0x000289c7) graphic_text_primary_small_pane

0x9256,	// (0x000279fb) graphic_text_secondary_pane

0x9245,	// (0x000279ea) graphic_text_title_pane

0x926e,	// (0x00027a13) cursor_primary_pane_g1

0xa20b,	// (0x000289b0) cursor_text_primary_t1

0xa1f3,	// (0x00028998) cursor_primary_small_pane_g1

0xa1fd,	// (0x000289a2) cursor_text_primary_small_t1

0xa1db,	// (0x00028980) cursor_primary_small_pane_g1_copy1

0xa1e5,	// (0x0002898a) cursor_text_primary_small_t1_copy1

0xa1c3,	// (0x00028968) cursor_text_title_t1

0xa1d1,	// (0x00028976) cursor_title_pane_g1

0x926e,	// (0x00027a13) cursor_digital_pane_g1

0x9278,	// (0x00027a1d) cursor_text_digital_t1

0x9286,	// (0x00027a2b) link_highlight_primary_pane_g1

0xa16c,	// (0x00028911) link_highlight_primary_pane_t1

0x9286,	// (0x00027a2b) link_highlight_primary_small_pane_g1

0x928e,	// (0x00027a33) link_highlight_primary_small_pane_t1

0x929d,	// (0x00027a42) link_highlight_secondary_pane_g1

0x92a5,	// (0x00027a4a) link_highlight_secondary_pane_t1

0xa0e0,	// (0x00028885) link_highlight_title_pane_g1

0xa0e8,	// (0x0002888d) link_highlight_title_pane_t1

0xa0c9,	// (0x0002886e) link_highlight_digital_pane_g1

0xa0d1,	// (0x00028876) link_highlight_digital_pane_t1

0x9f91,	// (0x00028736) copy_highlight_primary_pane_g1

0x9fa8,	// (0x0002874d) copy_highlight_primary_pane_t1

0x9f91,	// (0x00028736) copy_highlight_primary_small_pane_g1

0x9f99,	// (0x0002873e) copy_highlight_primary_small_pane_t1

0x92b4,	// (0x00027a59) copy_highlight_secondary_pane_g1

0x92bc,	// (0x00027a61) copy_highlight_secondary_pane_t1

0x9f7a,	// (0x0002871f) copy_highlight_title_pane_g1

0x9f82,	// (0x00028727) copy_highlight_title_pane_t1

0x9f91,	// (0x00028736) copy_highlight_digital_pane_g1

0xb283,	// (0x00029a28) copy_highlight_digital_pane_t1

0xb1d7,	// (0x0002997c) graphic_text_primary_pane_g1

0xb267,	// (0x00029a0c) graphic_text_primary_pane_t1

0xb275,	// (0x00029a1a) graphic_text_primary_pane_t2

0x0001,

0xf9a7,	// (0x0002e14c) graphic_text_primary_pane_t

0xb243,	// (0x000299e8) graphic_text_primary_small_pane_g1

0xb24b,	// (0x000299f0) graphic_text_primary_small_pane_t1

0xb259,	// (0x000299fe) graphic_text_primary_small_pane_t2

0x0001,

0xf9a2,	// (0x0002e147) graphic_text_primary_small_pane_t

0xb21f,	// (0x000299c4) graphic_text_secondary_pane_g1

0xb227,	// (0x000299cc) graphic_text_secondary_pane_t1

0xb235,	// (0x000299da) graphic_text_secondary_pane_t2

0x0001,

0xf99d,	// (0x0002e142) graphic_text_secondary_pane_t

0xb1fb,	// (0x000299a0) graphic_text_title_pane_g1

0xb203,	// (0x000299a8) graphic_text_title_pane_t1

0xb211,	// (0x000299b6) graphic_text_title_pane_t2

0x0001,

0xf998,	// (0x0002e13d) graphic_text_title_pane_t

0xb1d7,	// (0x0002997c) graphic_text_digital_pane_g1

0xb1df,	// (0x00029984) graphic_text_digital_pane_t1

0xb1ed,	// (0x00029992) graphic_text_digital_pane_t2

0x0001,

0xf993,	// (0x0002e138) graphic_text_digital_pane_t

0x1276,	// (0x0001fa1b) navi_icon_pane_srt_ParamLimits

0x1276,	// (0x0001fa1b) navi_icon_pane_srt

0x121a,	// (0x0001f9bf) navi_midp_pane_srt

0x121a,	// (0x0001f9bf) navi_navi_pane_srt

0x1276,	// (0x0001fa1b) navi_text_pane_srt_ParamLimits

0x1276,	// (0x0001fa1b) navi_text_pane_srt

0xb1a2,	// (0x00029947) navi_navi_icon_text_pane_srt

0xb1aa,	// (0x0002994f) navi_navi_pane_srt_g1_ParamLimits

0xb1aa,	// (0x0002994f) navi_navi_pane_srt_g1

0xb1bc,	// (0x00029961) navi_navi_pane_srt_g2_ParamLimits

0xb1bc,	// (0x00029961) navi_navi_pane_srt_g2

0x0001,

0xf98e,	// (0x0002e133) navi_navi_pane_srt_g_ParamLimits

0xf98e,	// (0x0002e133) navi_navi_pane_srt_g

0xb1ce,	// (0x00029973) navi_navi_tabs_pane_srt

0xb1a2,	// (0x00029947) navi_navi_text_pane_srt

0xb1a2,	// (0x00029947) navi_navi_volume_pane_srt

0xb193,	// (0x00029938) navi_navi_text_pane_srt_t1

0x7c56,	// (0x000263fb) navi_navi_volume_pane_srt_g1

0x7c5e,	// (0x00026403) volume_small_pane_srt_ParamLimits

0x7c5e,	// (0x00026403) volume_small_pane_srt

0x7011,	// (0x000257b6) volume_small_pane_srt_g1_ParamLimits

0x7011,	// (0x000257b6) volume_small_pane_srt_g1

0x7021,	// (0x000257c6) volume_small_pane_srt_g2_ParamLimits

0x7021,	// (0x000257c6) volume_small_pane_srt_g2

0x7032,	// (0x000257d7) volume_small_pane_srt_g3_ParamLimits

0x7032,	// (0x000257d7) volume_small_pane_srt_g3

0x7043,	// (0x000257e8) volume_small_pane_srt_g4_ParamLimits

0x7043,	// (0x000257e8) volume_small_pane_srt_g4

0x7054,	// (0x000257f9) volume_small_pane_srt_g5_ParamLimits

0x7054,	// (0x000257f9) volume_small_pane_srt_g5

0x7065,	// (0x0002580a) volume_small_pane_srt_g6_ParamLimits

0x7065,	// (0x0002580a) volume_small_pane_srt_g6

0x7076,	// (0x0002581b) volume_small_pane_srt_g7_ParamLimits

0x7076,	// (0x0002581b) volume_small_pane_srt_g7

0x7087,	// (0x0002582c) volume_small_pane_srt_g8_ParamLimits

0x7087,	// (0x0002582c) volume_small_pane_srt_g8

0x7098,	// (0x0002583d) volume_small_pane_srt_g9_ParamLimits

0x7098,	// (0x0002583d) volume_small_pane_srt_g9

0x70a9,	// (0x0002584e) volume_small_pane_srt_g10_ParamLimits

0x70a9,	// (0x0002584e) volume_small_pane_srt_g10

0x0009,

0xf736,	// (0x0002dedb) volume_small_pane_srt_g_ParamLimits

0xf736,	// (0x0002dedb) volume_small_pane_srt_g

0x2b8c,	// (0x00021331) query_popup_data_pane_cp2

0xb179,	// (0x0002991e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb179,	// (0x0002991e) navi_navi_icon_text_pane_srt_t1

0xa219,	// (0x000289be) navi_tabs_2_long_pane_srt

0xa219,	// (0x000289be) navi_tabs_2_pane_srt

0xa219,	// (0x000289be) navi_tabs_3_long_pane_srt

0xa219,	// (0x000289be) navi_tabs_3_pane_srt

0xa219,	// (0x000289be) navi_tabs_4_pane_srt

0x7c36,	// (0x000263db) tabs_2_active_pane_srt_ParamLimits

0x7c36,	// (0x000263db) tabs_2_active_pane_srt

0x7c46,	// (0x000263eb) tabs_2_passive_pane_srt_ParamLimits

0x7c46,	// (0x000263eb) tabs_2_passive_pane_srt

0x9443,	// (0x00027be8) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9443,	// (0x00027be8) bg_passive_tab_pane_cp1_srt

0xb145,	// (0x000298ea) bg_passive_tab_pane_g1_cp1_srt

0x6e9a,	// (0x0002563f) bg_passive_tab_pane_g2_cp1_srt

0xb14e,	// (0x000298f3) bg_passive_tab_pane_g3_cp1_srt

0x1276,	// (0x0001fa1b) bg_active_tab_pane_cp1_srt_ParamLimits

0x1276,	// (0x0001fa1b) bg_active_tab_pane_cp1_srt

0xb157,	// (0x000298fc) tabs_2_active_pane_srt_g1

0xb15f,	// (0x00029904) tabs_2_active_pane_srt_t1_ParamLimits

0xb15f,	// (0x00029904) tabs_2_active_pane_srt_t1

0xb145,	// (0x000298ea) bg_active_tab_pane_g1_cp1_srt

0x6e9a,	// (0x0002563f) bg_active_tab_pane_g2_cp1_srt

0xb14e,	// (0x000298f3) bg_active_tab_pane_g3_cp1_srt

0x7c03,	// (0x000263a8) tabs_3_active_pane_srt_ParamLimits

0x7c03,	// (0x000263a8) tabs_3_active_pane_srt

0x7c14,	// (0x000263b9) tabs_3_passive_pane_cp_srt_ParamLimits

0x7c14,	// (0x000263b9) tabs_3_passive_pane_cp_srt

0x7c25,	// (0x000263ca) tabs_3_passive_pane_srt_ParamLimits

0x7c25,	// (0x000263ca) tabs_3_passive_pane_srt

0x9443,	// (0x00027be8) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9443,	// (0x00027be8) bg_passive_tab_pane_cp2_srt

0x92cb,	// (0x00027a70) bg_passive_tab_pane_g1_cp2_srt

0x6e9a,	// (0x0002563f) bg_passive_tab_pane_g2_cp2_srt

0x92d4,	// (0x00027a79) bg_passive_tab_pane_g3_cp2_srt

0x1276,	// (0x0001fa1b) bg_active_tab_pane_cp2_srt_ParamLimits

0x1276,	// (0x0001fa1b) bg_active_tab_pane_cp2_srt

0xb12b,	// (0x000298d0) tabs_3_active_pane_srt_g1

0xb133,	// (0x000298d8) tabs_3_active_pane_srt_t1_ParamLimits

0xb133,	// (0x000298d8) tabs_3_active_pane_srt_t1

0x92cb,	// (0x00027a70) bg_active_tab_pane_g1_cp2_srt

0x6e9a,	// (0x0002563f) bg_active_tab_pane_g2_cp2_srt

0x92d4,	// (0x00027a79) bg_active_tab_pane_g3_cp2_srt

0x7bbb,	// (0x00026360) tabs_4_active_pane_srt_ParamLimits

0x7bbb,	// (0x00026360) tabs_4_active_pane_srt

0x7bcd,	// (0x00026372) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7bcd,	// (0x00026372) tabs_4_passive_pane_cp2_srt

0x71fb,	// (0x000259a0) aid_size_cell_toolbar

0x64ea,	// (0x00024c8f) main_idle_act_pane_ParamLimits

0x73d8,	// (0x00025b7d) popup_large_graphic_colour_window_ParamLimits

0x777f,	// (0x00025f24) popup_toolbar_window_ParamLimits

0x777f,	// (0x00025f24) popup_toolbar_window

0x5419,	// (0x00023bbe) list_single_graphic_2heading_pane_ParamLimits

0x5419,	// (0x00023bbe) list_single_graphic_2heading_pane

0x683b,	// (0x00024fe0) aid_size_cell_apps_grid_lsc_pane

0x684d,	// (0x00024ff2) aid_size_cell_apps_grid_prt_pane

0x9443,	// (0x00027be8) bg_wml_button_pane_cp1_ParamLimits

0x9443,	// (0x00027be8) bg_wml_button_pane_cp1

0x9bf5,	// (0x0002839a) form_midp_field_text_pane_t1_ParamLimits

0x99e7,	// (0x0002818c) input_focus_pane_cp050_ParamLimits

0x9c20,	// (0x000283c5) list_midp_form_text_pane_ParamLimits

0x9bd2,	// (0x00028377) input_focus_pane_cp051_ParamLimits

0x9be6,	// (0x0002838b) list_midp_choice_pane_ParamLimits

0x9aa0,	// (0x00028245) list_single_2graphic_pane_cp3_ParamLimits

0x9aa0,	// (0x00028245) list_single_2graphic_pane_cp3

0x9ab6,	// (0x0002825b) list_single_midp_graphic_pane_ParamLimits

0x9ab6,	// (0x0002825b) list_single_midp_graphic_pane

0x5224,	// (0x000239c9) list_single_graphic_2heading_pane_g1_ParamLimits

0x5224,	// (0x000239c9) list_single_graphic_2heading_pane_g1

0x5230,	// (0x000239d5) list_single_graphic_2heading_pane_g4_ParamLimits

0x5230,	// (0x000239d5) list_single_graphic_2heading_pane_g4

0x523c,	// (0x000239e1) list_single_graphic_2heading_pane_g5_ParamLimits

0x523c,	// (0x000239e1) list_single_graphic_2heading_pane_g5

0x0002,

0xf789,	// (0x0002df2e) list_single_graphic_2heading_pane_g_ParamLimits

0xf789,	// (0x0002df2e) list_single_graphic_2heading_pane_g

0x5248,	// (0x000239ed) list_single_graphic_2heading_pane_t1_ParamLimits

0x5248,	// (0x000239ed) list_single_graphic_2heading_pane_t1

0x525c,	// (0x00023a01) list_single_graphic_2heading_pane_t2_ParamLimits

0x525c,	// (0x00023a01) list_single_graphic_2heading_pane_t2

0x5278,	// (0x00023a1d) list_single_graphic_2heading_pane_t3_ParamLimits

0x5278,	// (0x00023a1d) list_single_graphic_2heading_pane_t3

0x0002,

0xf790,	// (0x0002df35) list_single_graphic_2heading_pane_t_ParamLimits

0xf790,	// (0x0002df35) list_single_graphic_2heading_pane_t

0x98b1,	// (0x00028056) bg_popup_sub_pane_cp2

0x98db,	// (0x00028080) grid_toobar_pane

0x783e,	// (0x00025fe3) cell_toolbar_pane_ParamLimits

0x783e,	// (0x00025fe3) cell_toolbar_pane

0x9917,	// (0x000280bc) cell_toolbar_pane_g1_ParamLimits

0x9917,	// (0x000280bc) cell_toolbar_pane_g1

0x992b,	// (0x000280d0) cell_toolbar_pane_g2_ParamLimits

0x992b,	// (0x000280d0) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x0002df43) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x0002df43) cell_toolbar_pane_g

0x994d,	// (0x000280f2) grid_highlight_pane_cp2_ParamLimits

0x994d,	// (0x000280f2) grid_highlight_pane_cp2

0x9967,	// (0x0002810c) toolbar_button_pane

0x9973,	// (0x00028118) toolbar_button_pane_g1

0x997b,	// (0x00028120) toolbar_button_pane_g2

0x9983,	// (0x00028128) toolbar_button_pane_g3

0x998b,	// (0x00028130) toolbar_button_pane_g4

0x9993,	// (0x00028138) toolbar_button_pane_g5

0x999b,	// (0x00028140) toolbar_button_pane_g6

0x99a3,	// (0x00028148) toolbar_button_pane_g7

0x99ab,	// (0x00028150) toolbar_button_pane_g8

0x99b3,	// (0x00028158) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x0002df48) toolbar_button_pane_g

0x7876,	// (0x0002601b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7876,	// (0x0002601b) list_single_2graphic_pane_g1_cp3

0x7882,	// (0x00026027) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7882,	// (0x00026027) list_single_2graphic_pane_g2_cp3

0x8f2f,	// (0x000276d4) list_single_2graphic_pane_g3_cp3

0x7893,	// (0x00026038) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7893,	// (0x00026038) list_single_2graphic_pane_g4_cp3

0x789f,	// (0x00026044) list_single_2graphic_pane_t1_cp3_ParamLimits

0x789f,	// (0x00026044) list_single_2graphic_pane_t1_cp3

0x8f23,	// (0x000276c8) list_single_midp_graphic_pane_g2_ParamLimits

0x8f23,	// (0x000276c8) list_single_midp_graphic_pane_g2

0x7203,	// (0x000259a8) aid_zoom_text_primary

0x5214,	// (0x000239b9) aid_zoom_text_secondary

0x9385,	// (0x00027b2a) status_small_pane_g7_ParamLimits

0x9385,	// (0x00027b2a) status_small_pane_g7

0x93a8,	// (0x00027b4d) status_small_pane_t1_ParamLimits

0x600f,	// (0x000247b4) title_pane_g2

0x0003,

0xf527,	// (0x0002dccc) title_pane_g

0x6278,	// (0x00024a1d) aid_size_cell_colour_1_pane_ParamLimits

0x6278,	// (0x00024a1d) aid_size_cell_colour_1_pane

0x628c,	// (0x00024a31) aid_size_cell_colour_2_pane_ParamLimits

0x628c,	// (0x00024a31) aid_size_cell_colour_2_pane

0x62a0,	// (0x00024a45) aid_size_cell_colour_3_pane_ParamLimits

0x62a0,	// (0x00024a45) aid_size_cell_colour_3_pane

0x62b4,	// (0x00024a59) aid_size_cell_colour_4_pane_ParamLimits

0x62b4,	// (0x00024a59) aid_size_cell_colour_4_pane

0x66ad,	// (0x00024e52) title_pane_stacon_g1_ParamLimits

0x66ad,	// (0x00024e52) title_pane_stacon_g1

0x9fff,	// (0x000287a4) popup_note_wait_window_g3_ParamLimits

0x9fff,	// (0x000287a4) popup_note_wait_window_g3

0xa076,	// (0x0002881b) popup_note_wait_window_t5_ParamLimits

0xa076,	// (0x0002881b) popup_note_wait_window_t5

0x121a,	// (0x0001f9bf) main_feb_china_hwr_fs_writing_pane

0x729d,	// (0x00025a42) popup_feb_china_hwr_fs_window_ParamLimits

0x729d,	// (0x00025a42) popup_feb_china_hwr_fs_window

0x78d0,	// (0x00026075) aid_size_cell_hwr_fs_ParamLimits

0x78d0,	// (0x00026075) aid_size_cell_hwr_fs

0x99e7,	// (0x0002818c) bg_popup_sub_pane_cp3_ParamLimits

0x99e7,	// (0x0002818c) bg_popup_sub_pane_cp3

0x78e5,	// (0x0002608a) grid_hwr_fs_pane_ParamLimits

0x78e5,	// (0x0002608a) grid_hwr_fs_pane

0x78fd,	// (0x000260a2) linegrid_hwr_fs_pane_ParamLimits

0x78fd,	// (0x000260a2) linegrid_hwr_fs_pane

0x790d,	// (0x000260b2) cell_hwr_fs_pane_ParamLimits

0x790d,	// (0x000260b2) cell_hwr_fs_pane

0x99f3,	// (0x00028198) linegrid_hwr_fs_pane_g1_ParamLimits

0x99f3,	// (0x00028198) linegrid_hwr_fs_pane_g1

0x99ff,	// (0x000281a4) linegrid_hwr_fs_pane_g2_ParamLimits

0x99ff,	// (0x000281a4) linegrid_hwr_fs_pane_g2

0x9a11,	// (0x000281b6) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a11,	// (0x000281b6) linegrid_hwr_fs_pane_g3

0x7931,	// (0x000260d6) linegrid_hwr_fs_pane_g4_ParamLimits

0x7931,	// (0x000260d6) linegrid_hwr_fs_pane_g4

0x794f,	// (0x000260f4) linegrid_hwr_fs_pane_g5_ParamLimits

0x794f,	// (0x000260f4) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ce,	// (0x0002df73) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ce,	// (0x0002df73) linegrid_hwr_fs_pane_g

0x9a1d,	// (0x000281c2) cell_hwr_fs_pane_g1_ParamLimits

0x9a1d,	// (0x000281c2) cell_hwr_fs_pane_g1

0x97ee,	// (0x00027f93) cell_hwr_fs_pane_g2_ParamLimits

0x97ee,	// (0x00027f93) cell_hwr_fs_pane_g2

0x9a33,	// (0x000281d8) cell_hwr_fs_pane_g3_ParamLimits

0x9a33,	// (0x000281d8) cell_hwr_fs_pane_g3

0x9a40,	// (0x000281e5) cell_hwr_fs_pane_g4_ParamLimits

0x9a40,	// (0x000281e5) cell_hwr_fs_pane_g4

0x0003,

0xf7d9,	// (0x0002df7e) cell_hwr_fs_pane_g_ParamLimits

0xf7d9,	// (0x0002df7e) cell_hwr_fs_pane_g

0x7965,	// (0x0002610a) cell_hwr_fs_pane_t1

0x121a,	// (0x0001f9bf) grid_highlight_pane_cp6

0x121a,	// (0x0001f9bf) main_idle_act2_pane

0x645c,	// (0x00024c01) aid_inside_area_popup_secondary

0xa6af,	// (0x00028e54) aid_inside_area_window_primary_ParamLimits

0xa6af,	// (0x00028e54) aid_inside_area_window_primary

0xb292,	// (0x00029a37) ai2_news_ticker_pane

0xb29a,	// (0x00029a3f) aid_size_cell_ai1_link_ParamLimits

0xb29a,	// (0x00029a3f) aid_size_cell_ai1_link

0xb2b4,	// (0x00029a59) popup_ai2_data_window_ParamLimits

0xb2b4,	// (0x00029a59) popup_ai2_data_window

0xb2d2,	// (0x00029a77) popup_ai2_link_window_ParamLimits

0xb2d2,	// (0x00029a77) popup_ai2_link_window

0x99e7,	// (0x0002818c) bg_popup_sub_pane_cp4_ParamLimits

0x99e7,	// (0x0002818c) bg_popup_sub_pane_cp4

0xb2e8,	// (0x00029a8d) grid_ai2_link_pane_ParamLimits

0xb2e8,	// (0x00029a8d) grid_ai2_link_pane

0xb2ff,	// (0x00029aa4) popup_ai2_link_window_g1_ParamLimits

0xb2ff,	// (0x00029aa4) popup_ai2_link_window_g1

0xb30b,	// (0x00029ab0) popup_ai2_link_window_g2_ParamLimits

0xb30b,	// (0x00029ab0) popup_ai2_link_window_g2

0x0001,

0xf9ac,	// (0x0002e151) popup_ai2_link_window_g_ParamLimits

0xf9ac,	// (0x0002e151) popup_ai2_link_window_g

0xb31c,	// (0x00029ac1) ai2_mp_button_pane

0xb324,	// (0x00029ac9) ai2_mp_volume_pane

0x9bd2,	// (0x00028377) bg_popup_sub_pane_cp5_ParamLimits

0x9bd2,	// (0x00028377) bg_popup_sub_pane_cp5

0xb32c,	// (0x00029ad1) heading_ai2_gene_pane_ParamLimits

0xb32c,	// (0x00029ad1) heading_ai2_gene_pane

0xb338,	// (0x00029add) list_ai2_gene_pane_ParamLimits

0xb338,	// (0x00029add) list_ai2_gene_pane

0xb380,	// (0x00029b25) cell_ai2_link_pane_ParamLimits

0xb380,	// (0x00029b25) cell_ai2_link_pane

0xb396,	// (0x00029b3b) cell_ai2_link_pane_g1

0x121a,	// (0x0001f9bf) grid_highlight_pane_cp7

0x7c73,	// (0x00026418) ai2_mp_volume_pane_g1

0xb469,	// (0x00029c0e) ai2_mp_volume_pane_g2

0xb3de,	// (0x00029b83) list_ai2_gene_pane_t1

0xb471,	// (0x00029c16) ai2_mp_volume_pane_g3

0x0002,

0xf9c5,	// (0x0002e16a) ai2_mp_volume_pane_g

0x7c7b,	// (0x00026420) volume_small_pane_cp3

0xb479,	// (0x00029c1e) aid_size_cell_ai2_button

0xb481,	// (0x00029c26) grid_ai2_button_pane

0xb48a,	// (0x00029c2f) cell_ai2_button_pane_ParamLimits

0xb48a,	// (0x00029c2f) cell_ai2_button_pane

0x1210,	// (0x0001f9b5) cell_ai2_button_pane_g1

0x121a,	// (0x0001f9bf) grid_highlight_pane_cp8

0xb429,	// (0x00029bce) ai2_gene_pane_t1_ParamLimits

0xb429,	// (0x00029bce) ai2_gene_pane_t1

0x71f1,	// (0x00025996) aid_height_parent_landscape

0xad2f,	// (0x000294d4) aid_height_set_list

0xad40,	// (0x000294e5) aid_size_parent

0xb0b1,	// (0x00029856) aid_size_cell_graphic_pane_ParamLimits

0xb348,	// (0x00029aed) popup_ai2_data_window_g1_ParamLimits

0xb348,	// (0x00029aed) popup_ai2_data_window_g1

0xb354,	// (0x00029af9) ai2_news_ticker_pane_g1

0xb35c,	// (0x00029b01) ai2_news_ticker_pane_g2

0x0001,

0xf9b1,	// (0x0002e156) ai2_news_ticker_pane_g

0xb364,	// (0x00029b09) ai2_news_ticker_pane_t1

0xb372,	// (0x00029b17) ai2_news_ticker_pane_t2

0x0001,

0xf9b6,	// (0x0002e15b) ai2_news_ticker_pane_t

0xb39f,	// (0x00029b44) heading_ai2_gene_pane_g1

0xb3a7,	// (0x00029b4c) heading_ai2_gene_pane_t1_ParamLimits

0xb3a7,	// (0x00029b4c) heading_ai2_gene_pane_t1

0xb3bc,	// (0x00029b61) list_highlight_pane_cp6

0xb3c4,	// (0x00029b69) ai2_gene_pane_ParamLimits

0xb3c4,	// (0x00029b69) ai2_gene_pane

0xb3ec,	// (0x00029b91) list_ai2_gene_pane_t2

0x0001,

0xf9bb,	// (0x0002e160) list_ai2_gene_pane_t

0xb3fa,	// (0x00029b9f) list_highlight_pane_cp8_ParamLimits

0xb3fa,	// (0x00029b9f) list_highlight_pane_cp8

0xb40b,	// (0x00029bb0) ai2_gene_pane_g1_ParamLimits

0xb40b,	// (0x00029bb0) ai2_gene_pane_g1

0xb41d,	// (0x00029bc2) ai2_gene_pane_g2_ParamLimits

0xb41d,	// (0x00029bc2) ai2_gene_pane_g2

0x0001,

0xf9c0,	// (0x0002e165) ai2_gene_pane_g_ParamLimits

0xf9c0,	// (0x0002e165) ai2_gene_pane_g

0x2eae,	// (0x00021653) scroll_pane_cp12

0x71b0,	// (0x00025955) control_pane_t3_ParamLimits

0x71b0,	// (0x00025955) control_pane_t3

0x9399,	// (0x00027b3e) status_small_pane_g8_ParamLimits

0x9399,	// (0x00027b3e) status_small_pane_g8

0x739b,	// (0x00025b40) popup_find_window_ParamLimits

0x75c8,	// (0x00025d6d) popup_note_image_window_ParamLimits

0x5290,	// (0x00023a35) list_double2_graphic_pane_vc_g1_ParamLimits

0x5290,	// (0x00023a35) list_double2_graphic_pane_vc_g1

0x529c,	// (0x00023a41) list_double2_graphic_pane_vc_g2_ParamLimits

0x529c,	// (0x00023a41) list_double2_graphic_pane_vc_g2

0x52a8,	// (0x00023a4d) list_double2_graphic_pane_vc_g3_ParamLimits

0x52a8,	// (0x00023a4d) list_double2_graphic_pane_vc_g3

0x0002,

0xf797,	// (0x0002df3c) list_double2_graphic_pane_vc_g_ParamLimits

0xf797,	// (0x0002df3c) list_double2_graphic_pane_vc_g

0x52b4,	// (0x00023a59) list_double2_graphic_pane_vc_t1_ParamLimits

0x52b4,	// (0x00023a59) list_double2_graphic_pane_vc_t1

0x5230,	// (0x000239d5) list_single_heading_pane_vc_g1_ParamLimits

0x5230,	// (0x000239d5) list_single_heading_pane_vc_g1

0x523c,	// (0x000239e1) list_single_heading_pane_vc_g2_ParamLimits

0x523c,	// (0x000239e1) list_single_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0002df5d) list_single_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0002df5d) list_single_heading_pane_vc_g

0x52ca,	// (0x00023a6f) list_single_heading_pane_vc_t1_ParamLimits

0x52ca,	// (0x00023a6f) list_single_heading_pane_vc_t1

0x52e0,	// (0x00023a85) list_single_heading_pane_vc_t2_ParamLimits

0x52e0,	// (0x00023a85) list_single_heading_pane_vc_t2

0x0001,

0xf7bd,	// (0x0002df62) list_single_heading_pane_vc_t_ParamLimits

0xf7bd,	// (0x0002df62) list_single_heading_pane_vc_t

0x52f6,	// (0x00023a9b) list_setting_number_pane_vc_g1_ParamLimits

0x52f6,	// (0x00023a9b) list_setting_number_pane_vc_g1

0x5302,	// (0x00023aa7) list_setting_number_pane_vc_g2_ParamLimits

0x5302,	// (0x00023aa7) list_setting_number_pane_vc_g2

0x0001,

0xf7c2,	// (0x0002df67) list_setting_number_pane_vc_g_ParamLimits

0xf7c2,	// (0x0002df67) list_setting_number_pane_vc_g

0x530e,	// (0x00023ab3) list_setting_number_pane_vc_t1_ParamLimits

0x530e,	// (0x00023ab3) list_setting_number_pane_vc_t1

0x5322,	// (0x00023ac7) list_setting_number_pane_vc_t2_ParamLimits

0x5322,	// (0x00023ac7) list_setting_number_pane_vc_t2

0x533e,	// (0x00023ae3) list_setting_number_pane_vc_t3_ParamLimits

0x533e,	// (0x00023ae3) list_setting_number_pane_vc_t3

0x0002,

0xf7c7,	// (0x0002df6c) list_setting_number_pane_vc_t_ParamLimits

0xf7c7,	// (0x0002df6c) list_setting_number_pane_vc_t

0x536c,	// (0x00023b11) set_value_pane_vc_ParamLimits

0x536c,	// (0x00023b11) set_value_pane_vc

0x5419,	// (0x00023bbe) list_double2_graphic_pane_vc_ParamLimits

0x5419,	// (0x00023bbe) list_double2_graphic_pane_vc

0xaf29,	// (0x000296ce) list_double2_large_graphic_pane_vc_ParamLimits

0xaf29,	// (0x000296ce) list_double2_large_graphic_pane_vc

0x5419,	// (0x00023bbe) list_double2_pane_vc_ParamLimits

0x5419,	// (0x00023bbe) list_double2_pane_vc

0x5419,	// (0x00023bbe) list_double_graphic_heading_pane_vc_ParamLimits

0x5419,	// (0x00023bbe) list_double_graphic_heading_pane_vc

0x5419,	// (0x00023bbe) list_double_graphic_pane_vc_ParamLimits

0x5419,	// (0x00023bbe) list_double_graphic_pane_vc

0x5419,	// (0x00023bbe) list_double_heading_pane_vc_ParamLimits

0x5419,	// (0x00023bbe) list_double_heading_pane_vc

0xaf3d,	// (0x000296e2) list_double_large_graphic_pane_vc_ParamLimits

0xaf3d,	// (0x000296e2) list_double_large_graphic_pane_vc

0x5419,	// (0x00023bbe) list_double_number_pane_vc_ParamLimits

0x5419,	// (0x00023bbe) list_double_number_pane_vc

0x5419,	// (0x00023bbe) list_double_pane_vc_ParamLimits

0x5419,	// (0x00023bbe) list_double_pane_vc

0x5419,	// (0x00023bbe) list_double_time_pane_vc_ParamLimits

0x5419,	// (0x00023bbe) list_double_time_pane_vc

0x5419,	// (0x00023bbe) list_setting_number_pane_vc_ParamLimits

0x5419,	// (0x00023bbe) list_setting_number_pane_vc

0x5419,	// (0x00023bbe) list_setting_pane_vc_ParamLimits

0x5419,	// (0x00023bbe) list_setting_pane_vc

0x5419,	// (0x00023bbe) list_single_graphic_heading_pane_vc_ParamLimits

0x5419,	// (0x00023bbe) list_single_graphic_heading_pane_vc

0x5419,	// (0x00023bbe) list_single_heading_pane_vc_ParamLimits

0x5419,	// (0x00023bbe) list_single_heading_pane_vc

0x5430,	// (0x00023bd5) list_single_number_heading_pane_vc_ParamLimits

0x5430,	// (0x00023bd5) list_single_number_heading_pane_vc

0x548f,	// (0x00023c34) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x548f,	// (0x00023c34) list_double_graphic_heading_pane_vc_g1

0x529c,	// (0x00023a41) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x529c,	// (0x00023a41) list_double_graphic_heading_pane_vc_g2

0x52a8,	// (0x00023a4d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x52a8,	// (0x00023a4d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9cc,	// (0x0002e171) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9cc,	// (0x0002e171) list_double_graphic_heading_pane_vc_g

0x549b,	// (0x00023c40) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x549b,	// (0x00023c40) list_double_graphic_heading_pane_vc_t1

0x54b1,	// (0x00023c56) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x54b1,	// (0x00023c56) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d3,	// (0x0002e178) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d3,	// (0x0002e178) list_double_graphic_heading_pane_vc_t

0x52f6,	// (0x00023a9b) list_setting_pane_vc_g1_ParamLimits

0x52f6,	// (0x00023a9b) list_setting_pane_vc_g1

0x5302,	// (0x00023aa7) list_setting_pane_vc_g2_ParamLimits

0x5302,	// (0x00023aa7) list_setting_pane_vc_g2

0x0001,

0xf7c2,	// (0x0002df67) list_setting_pane_vc_g_ParamLimits

0xf7c2,	// (0x0002df67) list_setting_pane_vc_g

0x54cf,	// (0x00023c74) list_setting_pane_vc_t1_ParamLimits

0x54cf,	// (0x00023c74) list_setting_pane_vc_t1

0x54eb,	// (0x00023c90) list_setting_pane_vc_t2_ParamLimits

0x54eb,	// (0x00023c90) list_setting_pane_vc_t2

0x0001,

0xfa01,	// (0x0002e1a6) list_setting_pane_vc_t_ParamLimits

0xfa01,	// (0x0002e1a6) list_setting_pane_vc_t

0x536c,	// (0x00023b11) set_value_pane_cp_vc_ParamLimits

0x536c,	// (0x00023b11) set_value_pane_cp_vc

0x5230,	// (0x000239d5) list_single_number_heading_pane_vc_g1_ParamLimits

0x5230,	// (0x000239d5) list_single_number_heading_pane_vc_g1

0x523c,	// (0x000239e1) list_single_number_heading_pane_vc_g2_ParamLimits

0x523c,	// (0x000239e1) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0002df5d) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0002df5d) list_single_number_heading_pane_vc_g

0x5507,	// (0x00023cac) list_single_number_heading_pane_vc_t1_ParamLimits

0x5507,	// (0x00023cac) list_single_number_heading_pane_vc_t1

0x551d,	// (0x00023cc2) list_single_number_heading_pane_vc_t2_ParamLimits

0x551d,	// (0x00023cc2) list_single_number_heading_pane_vc_t2

0x5533,	// (0x00023cd8) list_single_number_heading_pane_vc_t3_ParamLimits

0x5533,	// (0x00023cd8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa06,	// (0x0002e1ab) list_single_number_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0002e1ab) list_single_number_heading_pane_vc_t

0x5290,	// (0x00023a35) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5290,	// (0x00023a35) list_single_graphic_heading_pane_vc_g1

0x5230,	// (0x000239d5) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5230,	// (0x000239d5) list_single_graphic_heading_pane_vc_g4

0x523c,	// (0x000239e1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x523c,	// (0x000239e1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0d,	// (0x0002e1b2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0d,	// (0x0002e1b2) list_single_graphic_heading_pane_vc_g

0x5507,	// (0x00023cac) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5507,	// (0x00023cac) list_single_graphic_heading_pane_vc_t1

0x5545,	// (0x00023cea) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5545,	// (0x00023cea) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa14,	// (0x0002e1b9) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa14,	// (0x0002e1b9) list_single_graphic_heading_pane_vc_t

0x5230,	// (0x000239d5) list_double2_pane_vc_g1_ParamLimits

0x5230,	// (0x000239d5) list_double2_pane_vc_g1

0x523c,	// (0x000239e1) list_double2_pane_vc_g2_ParamLimits

0x523c,	// (0x000239e1) list_double2_pane_vc_g2

0x0001,

0xf7b8,	// (0x0002df5d) list_double2_pane_vc_g_ParamLimits

0xf7b8,	// (0x0002df5d) list_double2_pane_vc_g

0x5557,	// (0x00023cfc) list_double2_pane_vc_t1_ParamLimits

0x5557,	// (0x00023cfc) list_double2_pane_vc_t1

0x556d,	// (0x00023d12) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x556d,	// (0x00023d12) list_double2_large_graphic_pane_vc_g1

0x5579,	// (0x00023d1e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5579,	// (0x00023d1e) list_double2_large_graphic_pane_vc_g2

0x5585,	// (0x00023d2a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5585,	// (0x00023d2a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa19,	// (0x0002e1be) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa19,	// (0x0002e1be) list_double2_large_graphic_pane_vc_g

0x5591,	// (0x00023d36) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5591,	// (0x00023d36) list_double2_large_graphic_pane_vc_t1

0x55a7,	// (0x00023d4c) list_double_time_pane_vc_g1_ParamLimits

0x55a7,	// (0x00023d4c) list_double_time_pane_vc_g1

0x55b3,	// (0x00023d58) list_double_time_pane_vc_g2_ParamLimits

0x55b3,	// (0x00023d58) list_double_time_pane_vc_g2

0x0001,

0xfa20,	// (0x0002e1c5) list_double_time_pane_vc_g_ParamLimits

0xfa20,	// (0x0002e1c5) list_double_time_pane_vc_g

0x55bf,	// (0x00023d64) list_double_time_pane_vc_t1_ParamLimits

0x55bf,	// (0x00023d64) list_double_time_pane_vc_t1

0x55e9,	// (0x00023d8e) list_double_time_pane_vc_t2_ParamLimits

0x55e9,	// (0x00023d8e) list_double_time_pane_vc_t2

0x5632,	// (0x00023dd7) list_double_time_pane_vc_t3_ParamLimits

0x5632,	// (0x00023dd7) list_double_time_pane_vc_t3

0x5644,	// (0x00023de9) list_double_time_pane_vc_t4_ParamLimits

0x5644,	// (0x00023de9) list_double_time_pane_vc_t4

0x0003,

0xfa25,	// (0x0002e1ca) list_double_time_pane_vc_t_ParamLimits

0xfa25,	// (0x0002e1ca) list_double_time_pane_vc_t

0x5230,	// (0x000239d5) list_double_pane_vc_g1_ParamLimits

0x5230,	// (0x000239d5) list_double_pane_vc_g1

0x523c,	// (0x000239e1) list_double_pane_vc_g2_ParamLimits

0x523c,	// (0x000239e1) list_double_pane_vc_g2

0x0001,

0xf7b8,	// (0x0002df5d) list_double_pane_vc_g_ParamLimits

0xf7b8,	// (0x0002df5d) list_double_pane_vc_g

0x5658,	// (0x00023dfd) list_double_pane_vc_t1_ParamLimits

0x5658,	// (0x00023dfd) list_double_pane_vc_t1

0x566c,	// (0x00023e11) list_double_pane_vc_t2_ParamLimits

0x566c,	// (0x00023e11) list_double_pane_vc_t2

0x0001,

0xfa2e,	// (0x0002e1d3) list_double_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002e1d3) list_double_pane_vc_t

0x5230,	// (0x000239d5) list_double_number_pane_vc_g1_ParamLimits

0x5230,	// (0x000239d5) list_double_number_pane_vc_g1

0x523c,	// (0x000239e1) list_double_number_pane_vc_g2_ParamLimits

0x523c,	// (0x000239e1) list_double_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x0002df5d) list_double_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x0002df5d) list_double_number_pane_vc_g

0x5682,	// (0x00023e27) list_double_number_pane_vc_t1_ParamLimits

0x5682,	// (0x00023e27) list_double_number_pane_vc_t1

0x5694,	// (0x00023e39) list_double_number_pane_vc_t2_ParamLimits

0x5694,	// (0x00023e39) list_double_number_pane_vc_t2

0x56a8,	// (0x00023e4d) list_double_number_pane_vc_t3_ParamLimits

0x56a8,	// (0x00023e4d) list_double_number_pane_vc_t3

0x0002,

0xfa33,	// (0x0002e1d8) list_double_number_pane_vc_t_ParamLimits

0xfa33,	// (0x0002e1d8) list_double_number_pane_vc_t

0x56c0,	// (0x00023e65) list_double_large_graphic_pane_vc_g1_ParamLimits

0x56c0,	// (0x00023e65) list_double_large_graphic_pane_vc_g1

0x56e2,	// (0x00023e87) list_double_large_graphic_pane_vc_g2_ParamLimits

0x56e2,	// (0x00023e87) list_double_large_graphic_pane_vc_g2

0x56f6,	// (0x00023e9b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x56f6,	// (0x00023e9b) list_double_large_graphic_pane_vc_g3

0x5705,	// (0x00023eaa) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5705,	// (0x00023eaa) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3a,	// (0x0002e1df) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0002e1df) list_double_large_graphic_pane_vc_g

0x5711,	// (0x00023eb6) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5711,	// (0x00023eb6) list_double_large_graphic_pane_vc_t1

0x572d,	// (0x00023ed2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x572d,	// (0x00023ed2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x0002e1e8) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x0002e1e8) list_double_large_graphic_pane_vc_t

0x529c,	// (0x00023a41) list_double_heading_pane_vc_g1_ParamLimits

0x529c,	// (0x00023a41) list_double_heading_pane_vc_g1

0x52a8,	// (0x00023a4d) list_double_heading_pane_vc_g2_ParamLimits

0x52a8,	// (0x00023a4d) list_double_heading_pane_vc_g2

0x0001,

0xfa48,	// (0x0002e1ed) list_double_heading_pane_vc_g_ParamLimits

0xfa48,	// (0x0002e1ed) list_double_heading_pane_vc_g

0x574d,	// (0x00023ef2) list_double_heading_pane_vc_t1_ParamLimits

0x574d,	// (0x00023ef2) list_double_heading_pane_vc_t1

0x575f,	// (0x00023f04) list_double_heading_pane_vc_t2_ParamLimits

0x575f,	// (0x00023f04) list_double_heading_pane_vc_t2

0x0001,

0xfa4d,	// (0x0002e1f2) list_double_heading_pane_vc_t_ParamLimits

0xfa4d,	// (0x0002e1f2) list_double_heading_pane_vc_t

0x5777,	// (0x00023f1c) list_double_graphic_pane_vc_g1_ParamLimits

0x5777,	// (0x00023f1c) list_double_graphic_pane_vc_g1

0x578a,	// (0x00023f2f) list_double_graphic_pane_vc_g2_ParamLimits

0x578a,	// (0x00023f2f) list_double_graphic_pane_vc_g2

0x5230,	// (0x000239d5) list_double_graphic_pane_vc_g3_ParamLimits

0x5230,	// (0x000239d5) list_double_graphic_pane_vc_g3

0x0003,

0xfa52,	// (0x0002e1f7) list_double_graphic_pane_vc_g_ParamLimits

0xfa52,	// (0x0002e1f7) list_double_graphic_pane_vc_g

0x57a7,	// (0x00023f4c) list_double_graphic_pane_vc_t1_ParamLimits

0x57a7,	// (0x00023f4c) list_double_graphic_pane_vc_t1

0x57d1,	// (0x00023f76) list_double_graphic_pane_vc_t2_ParamLimits

0x57d1,	// (0x00023f76) list_double_graphic_pane_vc_t2

0x0001,

0xfa5b,	// (0x0002e200) list_double_graphic_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002e200) list_double_graphic_pane_vc_t

0x5c15,	// (0x000243ba) aid_size_cell_fastswap

0x5c1d,	// (0x000243c2) aid_size_cell_touch_ParamLimits

0x5c1d,	// (0x000243c2) aid_size_cell_touch

0x5e84,	// (0x00024629) popup_fast_swap_wide_window_ParamLimits

0x5e84,	// (0x00024629) popup_fast_swap_wide_window

0x5fa2,	// (0x00024747) touch_pane_ParamLimits

0x5fa2,	// (0x00024747) touch_pane

0x2f33,	// (0x000216d8) button_value_adjust_pane_cp2

0x4f1b,	// (0x000236c0) button_value_adjust_pane_cp4

0x4f41,	// (0x000236e6) form_field_data_pane_cp2

0x4f64,	// (0x00023709) form_field_data_wide_pane_cp2

0x693b,	// (0x000250e0) bg_scroll_pane_ParamLimits

0x695a,	// (0x000250ff) scroll_handle_pane_ParamLimits

0x696e,	// (0x00025113) scroll_sc2_down_pane_ParamLimits

0x696e,	// (0x00025113) scroll_sc2_down_pane

0x6995,	// (0x0002513a) scroll_sc2_up_pane_ParamLimits

0x6995,	// (0x0002513a) scroll_sc2_up_pane

0xbbb2,	// (0x0002a357) grid_wheel_folder_pane_g1_ParamLimits

0xbbb2,	// (0x0002a357) grid_wheel_folder_pane_g1

0x6fa9,	// (0x0002574e) clock_nsta_pane_cp2_ParamLimits

0x6fa9,	// (0x0002574e) clock_nsta_pane_cp2

0x911c,	// (0x000278c1) listscroll_midp_pane_ParamLimits

0x9128,	// (0x000278cd) midp_canvas_pane

0x9413,	// (0x00027bb8) nsta_clock_indic_pane

0x944f,	// (0x00027bf4) listscroll_form_pane_vc

0x9457,	// (0x00027bfc) listscroll_set_pane_vc_ParamLimits

0x9457,	// (0x00027bfc) listscroll_set_pane_vc

0x954c,	// (0x00027cf1) clock_nsta_pane

0x95c9,	// (0x00027d6e) indicator_nsta_pane

0x98b1,	// (0x00028056) bg_popup_sub_pane_cp2_ParamLimits

0x98c5,	// (0x0002806a) find_pane_cp2_ParamLimits

0x98c5,	// (0x0002806a) find_pane_cp2

0x98db,	// (0x00028080) grid_toobar_pane_ParamLimits

0x99bb,	// (0x00028160) list_form_gen_pane_vc_ParamLimits

0x99bb,	// (0x00028160) list_form_gen_pane_vc

0x99d1,	// (0x00028176) scroll_pane_cp8_vc_ParamLimits

0x99d1,	// (0x00028176) scroll_pane_cp8_vc

0x9a4d,	// (0x000281f2) data_form_wide_pane_vc_ParamLimits

0x9a4d,	// (0x000281f2) data_form_wide_pane_vc

0x9a59,	// (0x000281fe) form_field_data_wide_pane_vc_g1

0x9a61,	// (0x00028206) form_field_data_wide_pane_vc_t1_ParamLimits

0x9a61,	// (0x00028206) form_field_data_wide_pane_vc_t1

0x2f9f,	// (0x00021744) input_focus_pane_cp6_vc_ParamLimits

0x2f9f,	// (0x00021744) input_focus_pane_cp6_vc

0x9d5d,	// (0x00028502) list_midp_pane_ParamLimits

0x9d69,	// (0x0002850e) scroll_pane_cp16_ParamLimits

0x9d69,	// (0x0002850e) scroll_pane_cp16

0x9dd3,	// (0x00028578) button_value_adjust_pane_ParamLimits

0x9dd3,	// (0x00028578) button_value_adjust_pane

0xad52,	// (0x000294f7) button_value_adjust_pane_cp6_ParamLimits

0xad52,	// (0x000294f7) button_value_adjust_pane_cp6

0xae9a,	// (0x0002963f) settings_code_pane_cp_ParamLimits

0xae9a,	// (0x0002963f) settings_code_pane_cp

0x1210,	// (0x0001f9b5) cell_touch_pane_g1

0x1210,	// (0x0001f9b5) cell_touch_pane_g2

0x0001,

0xf6dc,	// (0x0002de81) cell_touch_pane_g

0xb49c,	// (0x00029c41) cell_touch_pane_cp_ParamLimits

0xb49c,	// (0x00029c41) cell_touch_pane_cp

0xb4ac,	// (0x00029c51) cell_touch_pane_ParamLimits

0xb4ac,	// (0x00029c51) cell_touch_pane

0x1210,	// (0x0001f9b5) scroll_sc2_down_pane_g1

0x1210,	// (0x0001f9b5) scroll_sc2_up_pane_g1

0x121a,	// (0x0001f9bf) bg_set_opt_pane_cp4_vc

0xb4bd,	// (0x00029c62) list_set_graphic_pane_vc_g1_ParamLimits

0xb4bd,	// (0x00029c62) list_set_graphic_pane_vc_g1

0xb4c9,	// (0x00029c6e) list_set_graphic_pane_vc_g2_ParamLimits

0xb4c9,	// (0x00029c6e) list_set_graphic_pane_vc_g2

0x0001,

0xf9d8,	// (0x0002e17d) list_set_graphic_pane_vc_g_ParamLimits

0xf9d8,	// (0x0002e17d) list_set_graphic_pane_vc_g

0xb4d5,	// (0x00029c7a) text_primary_small_cp13_vc_ParamLimits

0xb4d5,	// (0x00029c7a) text_primary_small_cp13_vc

0xb4ed,	// (0x00029c92) list_set_graphic_pane_vc_ParamLimits

0xb4ed,	// (0x00029c92) list_set_graphic_pane_vc

0x121a,	// (0x0001f9bf) input_focus_pane_cp2_vc

0x1210,	// (0x0001f9b5) setting_code_pane_vc_g1

0x128d,	// (0x0001fa32) setting_code_pane_vc_t1

0xb500,	// (0x00029ca5) set_text_pane_vc_t1_ParamLimits

0xb500,	// (0x00029ca5) set_text_pane_vc_t1

0x121a,	// (0x0001f9bf) input_focus_pane_cp1_vc

0xb521,	// (0x00029cc6) list_set_text_pane_vc

0x1210,	// (0x0001f9b5) setting_text_pane_vc_g1

0x121a,	// (0x0001f9bf) bg_set_opt_pane_cp2_vc

0x1284,	// (0x0001fa29) setting_slider_graphic_pane_vc_g1

0xb52b,	// (0x00029cd0) setting_slider_graphic_pane_vc_t1

0xb53d,	// (0x00029ce2) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9dd,	// (0x0002e182) setting_slider_graphic_pane_vc_t

0xb54f,	// (0x00029cf4) slider_set_pane_cp_vc

0xb559,	// (0x00029cfe) slider_set_pane_vc_g1

0xb562,	// (0x00029d07) slider_set_pane_vc_g2

0x0006,

0xf9e2,	// (0x0002e187) slider_set_pane_vc_g

0x305a,	// (0x000217ff) set_opt_bg_pane_g1_copy1

0x3062,	// (0x00021807) set_opt_bg_pane_g2_copy1

0xb58e,	// (0x00029d33) set_opt_bg_pane_g3_copy1

0x3072,	// (0x00021817) set_opt_bg_pane_g4_copy1

0x307a,	// (0x0002181f) set_opt_bg_pane_g5_copy1

0x3082,	// (0x00021827) set_opt_bg_pane_g6_copy1

0xb598,	// (0x00029d3d) set_opt_bg_pane_g7_copy1

0xb5a2,	// (0x00029d47) set_opt_bg_pane_g8_copy1

0xb5ac,	// (0x00029d51) set_opt_bg_pane_g9_copy1

0x121a,	// (0x0001f9bf) bg_set_opt_pane_cp_vc

0xb5b6,	// (0x00029d5b) setting_slider_pane_vc_t1

0xb5c5,	// (0x00029d6a) setting_slider_pane_vc_t2

0xb5d7,	// (0x00029d7c) setting_slider_pane_vc_t3

0x0002,

0xf9f1,	// (0x0002e196) setting_slider_pane_vc_t

0xb5e9,	// (0x00029d8e) slider_set_pane_vc

0x7973,	// (0x00026118) volume_set_pane_vc_g1

0x797c,	// (0x00026121) volume_set_pane_vc_g2

0x7985,	// (0x0002612a) volume_set_pane_vc_g3

0x798e,	// (0x00026133) volume_set_pane_vc_g4

0x7997,	// (0x0002613c) volume_set_pane_vc_g5

0x79a0,	// (0x00026145) volume_set_pane_vc_g6

0x79a9,	// (0x0002614e) volume_set_pane_vc_g7

0x79b2,	// (0x00026157) volume_set_pane_vc_g8

0x79bb,	// (0x00026160) volume_set_pane_vc_g9

0x79c4,	// (0x00026169) volume_set_pane_vc_g10

0x0009,

0xf88f,	// (0x0002e034) volume_set_pane_vc_g

0xb5f3,	// (0x00029d98) volume_set_pane_vc

0xb5fd,	// (0x00029da2) button_value_adjust_pane_cp1_vc

0xb607,	// (0x00029dac) list_highlight_pane_cp2_vc

0xb610,	// (0x00029db5) list_set_pane_vc_ParamLimits

0xb610,	// (0x00029db5) list_set_pane_vc

0xb67e,	// (0x00029e23) main_pane_set_vc_t1_ParamLimits

0xb67e,	// (0x00029e23) main_pane_set_vc_t1

0xb693,	// (0x00029e38) main_pane_set_vc_t2_ParamLimits

0xb693,	// (0x00029e38) main_pane_set_vc_t2

0xb6a5,	// (0x00029e4a) main_pane_set_vc_t3_ParamLimits

0xb6a5,	// (0x00029e4a) main_pane_set_vc_t3

0xb6b9,	// (0x00029e5e) main_pane_set_vc_t4_ParamLimits

0xb6b9,	// (0x00029e5e) main_pane_set_vc_t4

0x0003,

0xf9f8,	// (0x0002e19d) main_pane_set_vc_t_ParamLimits

0xf9f8,	// (0x0002e19d) main_pane_set_vc_t

0xb6cd,	// (0x00029e72) setting_code_pane_vc_ParamLimits

0xb6cd,	// (0x00029e72) setting_code_pane_vc

0xb6de,	// (0x00029e83) setting_slider_graphic_pane_vc

0xb6de,	// (0x00029e83) setting_slider_pane_vc

0xb6de,	// (0x00029e83) setting_text_pane_vc

0xb6de,	// (0x00029e83) setting_volume_pane_vc

0xb6e8,	// (0x00029e8d) scroll_pane_cp121_vc

0x2f21,	// (0x000216c6) set_content_pane_vc

0xb6f0,	// (0x00029e95) button_value_adjust_pane_g1

0xb6f9,	// (0x00029e9e) button_value_adjust_pane_g2

0x0001,

0xfa60,	// (0x0002e205) button_value_adjust_pane_g

0xb702,	// (0x00029ea7) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb702,	// (0x00029ea7) form_field_slider_wide_pane_vc_t1

0xb714,	// (0x00029eb9) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb714,	// (0x00029eb9) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa65,	// (0x0002e20a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa65,	// (0x0002e20a) form_field_slider_wide_pane_vc_t

0x1268,	// (0x0001fa0d) input_focus_pane_cp10_vc_ParamLimits

0x1268,	// (0x0001fa0d) input_focus_pane_cp10_vc

0xb740,	// (0x00029ee5) slider_cont_pane_cp1_vc_ParamLimits

0xb740,	// (0x00029ee5) slider_cont_pane_cp1_vc

0xb752,	// (0x00029ef7) slider_form_pane_g1_cp2

0xb562,	// (0x00029d07) slider_form_pane_g2_cp2

0xb77f,	// (0x00029f24) form_field_slider_pane_vc_t3

0xb78d,	// (0x00029f32) form_field_slider_pane_vc_t4

0xb79b,	// (0x00029f40) slider_form_pane_vc_ParamLimits

0xb79b,	// (0x00029f40) slider_form_pane_vc

0xb7a8,	// (0x00029f4d) form_field_slider_pane_vc_t1_ParamLimits

0xb7a8,	// (0x00029f4d) form_field_slider_pane_vc_t1

0xb714,	// (0x00029eb9) form_field_slider_pane_vc_t2_ParamLimits

0xb714,	// (0x00029eb9) form_field_slider_pane_vc_t2

0x0001,

0xfa77,	// (0x0002e21c) form_field_slider_pane_vc_t_ParamLimits

0xfa77,	// (0x0002e21c) form_field_slider_pane_vc_t

0x1268,	// (0x0001fa0d) input_focus_pane_cp9_vc_ParamLimits

0x1268,	// (0x0001fa0d) input_focus_pane_cp9_vc

0xb7be,	// (0x00029f63) slider_cont_pane_vc_ParamLimits

0xb7be,	// (0x00029f63) slider_cont_pane_vc

0xb7d2,	// (0x00029f77) list_form_graphic_pane_cp_vc_ParamLimits

0xb7d2,	// (0x00029f77) list_form_graphic_pane_cp_vc

0x9a59,	// (0x000281fe) form_field_popup_wide_pane_vc_g1

0xb7e7,	// (0x00029f8c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb7e7,	// (0x00029f8c) form_field_popup_wide_pane_vc_t1

0x2f9f,	// (0x00021744) input_focus_pane_cp8_vc_ParamLimits

0x2f9f,	// (0x00021744) input_focus_pane_cp8_vc

0xb82c,	// (0x00029fd1) list_form_wide_pane_vc_ParamLimits

0xb82c,	// (0x00029fd1) list_form_wide_pane_vc

0xb838,	// (0x00029fdd) list_form_graphic_pane_vc_g1

0xb840,	// (0x00029fe5) list_form_graphic_pane_vc_t1_ParamLimits

0xb840,	// (0x00029fe5) list_form_graphic_pane_vc_t1

0x1276,	// (0x0001fa1b) list_highlight_pane_cp5_vc_ParamLimits

0x1276,	// (0x0001fa1b) list_highlight_pane_cp5_vc

0xb85c,	// (0x0002a001) list_form_graphic_pane_vc_ParamLimits

0xb85c,	// (0x0002a001) list_form_graphic_pane_vc

0x9a59,	// (0x000281fe) form_field_popup_pane_vc_g1

0xb872,	// (0x0002a017) form_field_popup_pane_vc_t1_ParamLimits

0xb872,	// (0x0002a017) form_field_popup_pane_vc_t1

0x2f9f,	// (0x00021744) input_focus_pane_cp7_vc_ParamLimits

0x2f9f,	// (0x00021744) input_focus_pane_cp7_vc

0xb889,	// (0x0002a02e) list_form_pane_vc_ParamLimits

0xb889,	// (0x0002a02e) list_form_pane_vc

0xb895,	// (0x0002a03a) data_form_pane_vc_t1_ParamLimits

0xb895,	// (0x0002a03a) data_form_pane_vc_t1

0x305a,	// (0x000217ff) input_focus_pane_vc_g1

0x3062,	// (0x00021807) input_focus_pane_vc_g2

0x306a,	// (0x0002180f) input_focus_pane_vc_g3

0x3072,	// (0x00021817) input_focus_pane_vc_g4

0x307a,	// (0x0002181f) input_focus_pane_vc_g5

0x3082,	// (0x00021827) input_focus_pane_vc_g6

0x308a,	// (0x0002182f) input_focus_pane_vc_g7

0x3092,	// (0x00021837) input_focus_pane_vc_g8

0x309a,	// (0x0002183f) input_focus_pane_vc_g9

0x1210,	// (0x0001f9b5) input_focus_pane_vc_g10

0x0009,

0xf665,	// (0x0002de0a) input_focus_pane_vc_g

0x9a4d,	// (0x000281f2) data_form_pane_vc_ParamLimits

0x9a4d,	// (0x000281f2) data_form_pane_vc

0x9a59,	// (0x000281fe) form_field_data_pane_vc_g1

0xb8b2,	// (0x0002a057) form_field_data_pane_vc_t1_ParamLimits

0xb8b2,	// (0x0002a057) form_field_data_pane_vc_t1

0x2f9f,	// (0x00021744) input_focus_pane_vc_ParamLimits

0x2f9f,	// (0x00021744) input_focus_pane_vc

0xb8cc,	// (0x0002a071) button_value_adjust_pane_cp3_vc

0xb8d4,	// (0x0002a079) button_value_adjust_pane_cp5_vc

0xb8dc,	// (0x0002a081) form_field_data_pane_vc_ParamLimits

0xb8dc,	// (0x0002a081) form_field_data_pane_vc

0xb8f7,	// (0x0002a09c) form_field_data_pane_vc_cp2

0xb8ff,	// (0x0002a0a4) form_field_data_wide_pane_vc_ParamLimits

0xb8ff,	// (0x0002a0a4) form_field_data_wide_pane_vc

0xb919,	// (0x0002a0be) form_field_data_wide_pane_vc_cp2

0xb921,	// (0x0002a0c6) form_field_popup_pane_vc_ParamLimits

0xb921,	// (0x0002a0c6) form_field_popup_pane_vc

0xb93c,	// (0x0002a0e1) form_field_popup_wide_pane_vc_ParamLimits

0xb93c,	// (0x0002a0e1) form_field_popup_wide_pane_vc

0xb956,	// (0x0002a0fb) form_field_slider_pane_vc_ParamLimits

0xb956,	// (0x0002a0fb) form_field_slider_pane_vc

0xb969,	// (0x0002a10e) form_field_slider_wide_pane_vc_ParamLimits

0xb969,	// (0x0002a10e) form_field_slider_wide_pane_vc

0xb97c,	// (0x0002a121) grid_touch_1_pane_ParamLimits

0xb97c,	// (0x0002a121) grid_touch_1_pane

0xb988,	// (0x0002a12d) grid_touch_2_pane_ParamLimits

0xb988,	// (0x0002a12d) grid_touch_2_pane

0x93de,	// (0x00027b83) touch_pane_g1_ParamLimits

0x93de,	// (0x00027b83) touch_pane_g1

0xb9a2,	// (0x0002a147) cell_app_pane_cp_wide_ParamLimits

0xb9a2,	// (0x0002a147) cell_app_pane_cp_wide

0xb9b3,	// (0x0002a158) grid_popup_fast_wide_pane_ParamLimits

0xb9b3,	// (0x0002a158) grid_popup_fast_wide_pane

0xb9c7,	// (0x0002a16c) scroll_pane_cp19_ParamLimits

0xb9c7,	// (0x0002a16c) scroll_pane_cp19

0x121a,	// (0x0001f9bf) bg_popup_window_pane_cp20

0xb9db,	// (0x0002a180) listscroll_popup_fast_wide_pane

0xb9e3,	// (0x0002a188) grid_indicator_nsta_pane

0xb9f5,	// (0x0002a19a) clock_nsta_pane_g1

0xb9fe,	// (0x0002a1a3) clock_nsta_pane_t1

0xba1a,	// (0x0002a1bf) cell_indicator_nsta_pane_ParamLimits

0xba1a,	// (0x0002a1bf) cell_indicator_nsta_pane

0xba4f,	// (0x0002a1f4) cell_indicator_nsta_pane_g1

0xba5d,	// (0x0002a202) cell_indicator_nsta_pane_g2

0x0001,

0xfa88,	// (0x0002e22d) cell_indicator_nsta_pane_g

0xba70,	// (0x0002a215) clock_nsta_pane_cp

0xba79,	// (0x0002a21e) indicator_nsta_pane_cp

0xba83,	// (0x0002a228) nsta_clock_indic_pane_g1

0x12cc,	// (0x0001fa71) grid_indicator_pane

0x6a87,	// (0x0002522c) scroll_pane_cp29

0x6ef8,	// (0x0002569d) indicator_nsta_pane_cp2_ParamLimits

0x6ef8,	// (0x0002569d) indicator_nsta_pane_cp2

0x1276,	// (0x0001fa1b) main_apps_wheel_pane

0x9c3a,	// (0x000283df) form_midp_field_text_pane_ParamLimits

0x9d89,	// (0x0002852e) scroll_bar_cp050_ParamLimits

0xbadc,	// (0x0002a281) cell_indicator_pane_ParamLimits

0xbadc,	// (0x0002a281) cell_indicator_pane

0xbaf4,	// (0x0002a299) cell_indicator_pane_g1

0xbafe,	// (0x0002a2a3) grid_wheel_folder_pane_ParamLimits

0xbafe,	// (0x0002a2a3) grid_wheel_folder_pane

0xbb12,	// (0x0002a2b7) list_wheel_apps_pane_ParamLimits

0xbb12,	// (0x0002a2b7) list_wheel_apps_pane

0xbb25,	// (0x0002a2ca) main_apps_wheel_pane_g1_ParamLimits

0xbb25,	// (0x0002a2ca) main_apps_wheel_pane_g1

0xbb41,	// (0x0002a2e6) main_apps_wheel_pane_g2_ParamLimits

0xbb41,	// (0x0002a2e6) main_apps_wheel_pane_g2

0x0001,

0xfaa4,	// (0x0002e249) main_apps_wheel_pane_g_ParamLimits

0xfaa4,	// (0x0002e249) main_apps_wheel_pane_g

0xbb5d,	// (0x0002a302) main_apps_wheel_pane_t1_ParamLimits

0xbb5d,	// (0x0002a302) main_apps_wheel_pane_t1

0xbb86,	// (0x0002a32b) list_wheel_apps_pane_g1

0xbb8e,	// (0x0002a333) list_wheel_apps_pane_g2

0xbb96,	// (0x0002a33b) list_wheel_apps_pane_g3

0xbb9e,	// (0x0002a343) list_wheel_apps_pane_g4

0xbba8,	// (0x0002a34d) list_wheel_apps_pane_g5

0x0004,

0xfaa9,	// (0x0002e24e) list_wheel_apps_pane_g

0x8f81,	// (0x00027726) navi_icon_text_pane

0x947f,	// (0x00027c24) aid_fill_nsta

0xbbc9,	// (0x0002a36e) navi_icon_text_pane_g1

0xbbd5,	// (0x0002a37a) navi_icon_text_pane_t1

0x8e17,	// (0x000275bc) list_set_graphic_pane_t1_ParamLimits

0x8e17,	// (0x000275bc) list_set_graphic_pane_t1

0xa4f6,	// (0x00028c9b) popup_midp_note_alarm_window_t6_ParamLimits

0xa4f6,	// (0x00028c9b) popup_midp_note_alarm_window_t6

0xa508,	// (0x00028cad) popup_midp_note_alarm_window_t7_ParamLimits

0xa508,	// (0x00028cad) popup_midp_note_alarm_window_t7

0xa51a,	// (0x00028cbf) popup_midp_note_alarm_window_t8_ParamLimits

0xa51a,	// (0x00028cbf) popup_midp_note_alarm_window_t8

0xa52c,	// (0x00028cd1) popup_midp_note_alarm_window_t9_ParamLimits

0xa52c,	// (0x00028cd1) popup_midp_note_alarm_window_t9

0xa53e,	// (0x00028ce3) popup_midp_note_alarm_window_t10_ParamLimits

0xa53e,	// (0x00028ce3) popup_midp_note_alarm_window_t10

0xa550,	// (0x00028cf5) popup_midp_note_alarm_window_t11_ParamLimits

0xa550,	// (0x00028cf5) popup_midp_note_alarm_window_t11

0xa562,	// (0x00028d07) scroll_pane_cp17_ParamLimits

0xa562,	// (0x00028d07) scroll_pane_cp17

0x7973,	// (0x00026118) volume_small_pane_cp_g1

0x7c84,	// (0x00026429) volume_small_pane_cp_g2

0x7c8d,	// (0x00026432) volume_small_pane_cp_g3

0x7c96,	// (0x0002643b) volume_small_pane_cp_g4

0x7c9f,	// (0x00026444) volume_small_pane_cp_g5

0x7ca8,	// (0x0002644d) volume_small_pane_cp_g6

0x7cb1,	// (0x00026456) volume_small_pane_cp_g7

0x7cba,	// (0x0002645f) volume_small_pane_cp_g8

0x7cc3,	// (0x00026468) volume_small_pane_cp_g9

0x7ccc,	// (0x00026471) volume_small_pane_cp_g10

0x91f2,	// (0x00027997) midp_ticker_pane_g1_ParamLimits

0x91fe,	// (0x000279a3) midp_ticker_pane_g2_ParamLimits

0xf731,	// (0x0002ded6) midp_ticker_pane_g_ParamLimits

0x920a,	// (0x000279af) midp_ticker_pane_t1_ParamLimits

0x9495,	// (0x00027c3a) aid_fill_nsta_2

0x9d75,	// (0x0002851a) list_form2_midp_pane

0xaee1,	// (0x00029686) midp_editing_number_pane_ParamLimits

0xaef0,	// (0x00029695) midp_ticker_pane_ParamLimits

0xbbe7,	// (0x0002a38c) form2_midp_field_pane

0xbc0b,	// (0x0002a3b0) scroll_pane_cp51

0xbc2b,	// (0x0002a3d0) form2_midp_button_pane_ParamLimits

0xbc2b,	// (0x0002a3d0) form2_midp_button_pane

0xbc3d,	// (0x0002a3e2) form2_midp_content_pane_ParamLimits

0xbc3d,	// (0x0002a3e2) form2_midp_content_pane

0xbc57,	// (0x0002a3fc) form2_midp_field_choice_group_pane

0xbc5f,	// (0x0002a404) form2_midp_field_pane_g1

0xbc67,	// (0x0002a40c) form2_midp_field_pane_g2

0xbc6f,	// (0x0002a414) form2_midp_field_pane_g3

0xbc77,	// (0x0002a41c) form2_midp_field_pane_g4

0x0003,

0xface,	// (0x0002e273) form2_midp_field_pane_g

0xbc7f,	// (0x0002a424) form2_midp_gauge_slider_pane

0xbc87,	// (0x0002a42c) form2_midp_gauge_wait_pane

0xbc8f,	// (0x0002a434) form2_midp_image_pane_ParamLimits

0xbc8f,	// (0x0002a434) form2_midp_image_pane

0xbcaa,	// (0x0002a44f) form2_midp_label_pane_ParamLimits

0xbcaa,	// (0x0002a44f) form2_midp_label_pane

0xbcc9,	// (0x0002a46e) form2_midp_label_pane_cp_ParamLimits

0xbcc9,	// (0x0002a46e) form2_midp_label_pane_cp

0xbcea,	// (0x0002a48f) form2_midp_string_pane_ParamLimits

0xbcea,	// (0x0002a48f) form2_midp_string_pane

0x57f4,	// (0x00023f99) form2_midp_text_pane_ParamLimits

0x57f4,	// (0x00023f99) form2_midp_text_pane

0xbcfc,	// (0x0002a4a1) form2_midp_time_pane

0xbd0c,	// (0x0002a4b1) input_focus_pane_cp51_ParamLimits

0xbd0c,	// (0x0002a4b1) input_focus_pane_cp51

0xbd24,	// (0x0002a4c9) form2_midp_label_pane_t1_ParamLimits

0xbd24,	// (0x0002a4c9) form2_midp_label_pane_t1

0x5815,	// (0x00023fba) form2_mdip_text_pane_t1_ParamLimits

0x5815,	// (0x00023fba) form2_mdip_text_pane_t1

0x5839,	// (0x00023fde) form2_midp_time_pane_t1

0xbd72,	// (0x0002a517) form2_midp_gauge_slider_pane_t1

0xbd84,	// (0x0002a529) form2_midp_gauge_slider_pane_t2

0xbd96,	// (0x0002a53b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad7,	// (0x0002e27c) form2_midp_gauge_slider_pane_t

0xbda8,	// (0x0002a54d) form2_midp_slider_pane

0xbdb4,	// (0x0002a559) form2_midp_gauge_wait_pane_t1

0xbdc2,	// (0x0002a567) form2_midp_wait_pane_ParamLimits

0xbdc2,	// (0x0002a567) form2_midp_wait_pane

0xbded,	// (0x0002a592) list_single_2graphic_pane_cp4_ParamLimits

0xbded,	// (0x0002a592) list_single_2graphic_pane_cp4

0x9ab6,	// (0x0002825b) list_single_midp_graphic_pane_cp_ParamLimits

0x9ab6,	// (0x0002825b) list_single_midp_graphic_pane_cp

0x121a,	// (0x0001f9bf) list_highlight_pane_cp20

0xbe06,	// (0x0002a5ab) list_single_2graphic_pane_g1_cp4

0xb39f,	// (0x00029b44) list_single_2graphic_pane_g2_cp4

0xbe0e,	// (0x0002a5b3) list_single_2graphic_pane_t1_cp4

0x1276,	// (0x0001fa1b) list_highlight_pane_cp21

0xbe1d,	// (0x0002a5c2) list_single_midp_graphic_pane_g4_cp

0xbe2c,	// (0x0002a5d1) list_single_midp_graphic_pane_t1_cp

0xbe41,	// (0x0002a5e6) form2_mdip_string_pane_t1_ParamLimits

0xbe41,	// (0x0002a5e6) form2_mdip_string_pane_t1

0x121a,	// (0x0001f9bf) bg_wml_button_pane_cp2

0x1210,	// (0x0001f9b5) form2_midp_image_pane_g1

0x4d0e,	// (0x000234b3) list_double_large_graphic_pane_g5_ParamLimits

0x4d0e,	// (0x000234b3) list_double_large_graphic_pane_g5

0x911c,	// (0x000278c1) midp_form_pane_ParamLimits

0x1276,	// (0x0001fa1b) main_apps_wheel_pane_ParamLimits

0x75f0,	// (0x00025d95) popup_preview_window_ParamLimits

0x75f0,	// (0x00025d95) popup_preview_window

0x77d7,	// (0x00025f7c) popup_touch_info_window_ParamLimits

0x77d7,	// (0x00025f7c) popup_touch_info_window

0x77f9,	// (0x00025f9e) popup_touch_menu_window_ParamLimits

0x77f9,	// (0x00025f9e) popup_touch_menu_window

0x1206,	// (0x0001f9ab) bg_popup_sub_pane_cp6

0xbedd,	// (0x0002a682) list_touch_menu_pane

0xbee5,	// (0x0002a68a) list_single_touch_menu_pane_ParamLimits

0xbee5,	// (0x0002a68a) list_single_touch_menu_pane

0xbefd,	// (0x0002a6a2) list_single_touch_menu_pane_t1

0x1276,	// (0x0001fa1b) bg_popup_sub_pane_cp7_ParamLimits

0x1276,	// (0x0001fa1b) bg_popup_sub_pane_cp7

0x9da9,	// (0x0002854e) heading_sub_pane

0xbf0b,	// (0x0002a6b0) list_touch_info_pane_ParamLimits

0xbf0b,	// (0x0002a6b0) list_touch_info_pane

0xbf1b,	// (0x0002a6c0) list_single_touch_info_pane_ParamLimits

0xbf1b,	// (0x0002a6c0) list_single_touch_info_pane

0xbf2d,	// (0x0002a6d2) list_single_touch_info_pane_t1

0xbf3b,	// (0x0002a6e0) list_single_touch_info_pane_t2

0x0001,

0xfae5,	// (0x0002e28a) list_single_touch_info_pane_t

0x9114,	// (0x000278b9) bg_popup_heading_pane_cp

0xbf49,	// (0x0002a6ee) heading_sub_pane_t1

0x99e7,	// (0x0002818c) bg_popup_preview_window_pane_cp_ParamLimits

0x99e7,	// (0x0002818c) bg_popup_preview_window_pane_cp

0x9da9,	// (0x0002854e) heading_preview_pane

0xbf0b,	// (0x0002a6b0) list_preview_pane_ParamLimits

0xbf0b,	// (0x0002a6b0) list_preview_pane

0xbf57,	// (0x0002a6fc) popup_preview_window_g1

0xbf1b,	// (0x0002a6c0) list_single_preview_pane_ParamLimits

0xbf1b,	// (0x0002a6c0) list_single_preview_pane

0xbf5f,	// (0x0002a704) list_single_preview_pane_g1

0xbf67,	// (0x0002a70c) list_single_preview_pane_t1

0xbf2d,	// (0x0002a6d2) list_single_preview_pane_t2

0x0001,

0xfaea,	// (0x0002e28f) list_single_preview_pane_t

0xbf75,	// (0x0002a71a) bg_popup_heading_pane_cp2_ParamLimits

0xbf75,	// (0x0002a71a) bg_popup_heading_pane_cp2

0xbf8b,	// (0x0002a730) heading_preview_pane_g1

0xbf93,	// (0x0002a738) heading_preview_pane_t1_ParamLimits

0xbf93,	// (0x0002a738) heading_preview_pane_t1

0x12e3,	// (0x0001fa88) soft_indicator_pane_t1_ParamLimits

0x2e8b,	// (0x00021630) scroll_pane_ParamLimits

0x6983,	// (0x00025128) scroll_sc2_left_pane

0x698c,	// (0x00025131) scroll_sc2_right_pane

0x69ab,	// (0x00025150) scroll_bg_pane_g1_ParamLimits

0x69c0,	// (0x00025165) scroll_bg_pane_g2_ParamLimits

0x69d8,	// (0x0002517d) scroll_bg_pane_g3_ParamLimits

0xf6bc,	// (0x0002de61) scroll_bg_pane_g_ParamLimits

0x69ab,	// (0x00025150) scroll_handle_pane_g1_ParamLimits

0x69fa,	// (0x0002519f) scroll_handle_pane_g2_ParamLimits

0x69d8,	// (0x0002517d) scroll_handle_pane_g3_ParamLimits

0xf6c3,	// (0x0002de68) scroll_handle_pane_g_ParamLimits

0x7235,	// (0x000259da) popup_choice_list_window_ParamLimits

0x7235,	// (0x000259da) popup_choice_list_window

0x98bd,	// (0x00028062) choice_list_pane

0x993f,	// (0x000280e4) cell_toolbar_pane_t1

0x9967,	// (0x0002810c) toolbar_button_pane_ParamLimits

0xaa2c,	// (0x000291d1) ai_gene_pane_1_t2_ParamLimits

0xaa2c,	// (0x000291d1) ai_gene_pane_1_t2

0x0001,

0xf8eb,	// (0x0002e090) ai_gene_pane_1_t_ParamLimits

0xf8eb,	// (0x0002e090) ai_gene_pane_1_t

0xbfb0,	// (0x0002a755) scroll_sc2_left_pane_g1

0xbfb0,	// (0x0002a755) scroll_sc2_right_pane_g1

0x9443,	// (0x00027be8) bg_popup_sub_pane_cp10

0xbfba,	// (0x0002a75f) list_choice_list_pane

0xbfd3,	// (0x0002a778) list_single_choice_list_pane_ParamLimits

0xbfd3,	// (0x0002a778) list_single_choice_list_pane

0xbfeb,	// (0x0002a790) list_single_choice_list_pane_g1

0x649a,	// (0x00024c3f) list_single_choice_list_pane_t1_ParamLimits

0x649a,	// (0x00024c3f) list_single_choice_list_pane_t1

0xbff3,	// (0x0002a798) choice_list_pane_g1

0xbffb,	// (0x0002a7a0) choice_list_pane_t1

0x1206,	// (0x0001f9ab) input_focus_pane_cp11

0x66c1,	// (0x00024e66) title_pane_stacon_g2_ParamLimits

0x66c1,	// (0x00024e66) title_pane_stacon_g2

0x0002,

0xf6a2,	// (0x0002de47) title_pane_stacon_g_ParamLimits

0xf6a2,	// (0x0002de47) title_pane_stacon_g

0x9114,	// (0x000278b9) cursor_press_pane

0x72ef,	// (0x00025a94) popup_fep_hwr_window_ParamLimits

0x72ef,	// (0x00025a94) popup_fep_hwr_window

0x7379,	// (0x00025b1e) popup_fep_vkb_window_ParamLimits

0x7379,	// (0x00025b1e) popup_fep_vkb_window

0xc009,	// (0x0002a7ae) cursor_press_pane_g1

0x0002,

0xfb13,	// (0x0002e2b8) fep_vkb_side_pane_g_ParamLimits

0x7d0e,	// (0x000264b3) fep_hwr_candidate_pane_ParamLimits

0x7d0e,	// (0x000264b3) fep_hwr_candidate_pane

0x7d38,	// (0x000264dd) fep_hwr_side_pane_ParamLimits

0x7d38,	// (0x000264dd) fep_hwr_side_pane

0x7d5a,	// (0x000264ff) fep_hwr_top_pane_ParamLimits

0x7d5a,	// (0x000264ff) fep_hwr_top_pane

0x7d72,	// (0x00026517) fep_hwr_write_pane_ParamLimits

0x7d72,	// (0x00026517) fep_hwr_write_pane

0xfb13,	// (0x0002e2b8) fep_vkb_side_pane_g

0xc011,	// (0x0002a7b6) fep_hwr_top_pane_g1

0xc023,	// (0x0002a7c8) fep_hwr_top_pane_g2

0x7d9e,	// (0x00026543) fep_hwr_top_pane_g3

0x0002,

0xfaef,	// (0x0002e294) fep_hwr_top_pane_g

0x7db3,	// (0x00026558) fep_hwr_top_text_pane

0x6b4f,	// (0x000252f4) fep_hwr_top_text_pane_g1

0xc059,	// (0x0002a7fe) fep_hwr_top_text_pane_t1

0x7ebd,	// (0x00026662) fep_hwr_candidate_pane_g1

0xc2a4,	// (0x0002aa49) fep_vkb_keypad_pane_g3_ParamLimits

0xc2a4,	// (0x0002aa49) fep_vkb_keypad_pane_g3

0xc2d0,	// (0x0002aa75) fep_vkb_keypad_pane_g4_ParamLimits

0xc2d0,	// (0x0002aa75) fep_vkb_keypad_pane_g4

0xc347,	// (0x0002aaec) fep_vkb_bottom_pane_g2_ParamLimits

0xc347,	// (0x0002aaec) fep_vkb_bottom_pane_g2

0x0001,

0xfb1a,	// (0x0002e2bf) fep_vkb_bottom_pane_g_ParamLimits

0xfb1a,	// (0x0002e2bf) fep_vkb_bottom_pane_g

0xbfb0,	// (0x0002a755) cell_vkb_side_pane_g2

0x0001,

0xfb24,	// (0x0002e2c9) cell_vkb_side_pane_g

0xc3d2,	// (0x0002ab77) cell_vkb_side_pane_t1

0xc3e0,	// (0x0002ab85) cell_vkb_side_pane_t1_copy1

0xbfb0,	// (0x0002a755) bg_fep_vkb_candidate_pane_g2

0xc524,	// (0x0002acc9) cell_vkb_candidate_pane_ParamLimits

0xc067,	// (0x0002a80c) aid_size_cell_vkb_ParamLimits

0xc067,	// (0x0002a80c) aid_size_cell_vkb

0xc524,	// (0x0002acc9) cell_vkb_candidate_pane

0x7ed7,	// (0x0002667c) bg_popup_fep_shadow_pane_g1

0xc0f9,	// (0x0002a89e) fep_vkb_bottom_pane_ParamLimits

0xc0f9,	// (0x0002a89e) fep_vkb_bottom_pane

0xc136,	// (0x0002a8db) fep_vkb_candidate_pane_ParamLimits

0xc136,	// (0x0002a8db) fep_vkb_candidate_pane

0xc152,	// (0x0002a8f7) fep_vkb_keypad_pane_ParamLimits

0xc152,	// (0x0002a8f7) fep_vkb_keypad_pane

0xc185,	// (0x0002a92a) fep_vkb_side_pane_ParamLimits

0xc185,	// (0x0002a92a) fep_vkb_side_pane

0xc1c1,	// (0x0002a966) fep_vkb_top_pane_ParamLimits

0xc1c1,	// (0x0002a966) fep_vkb_top_pane

0xc1fd,	// (0x0002a9a2) fep_vkb_top_pane_g1_ParamLimits

0xc1fd,	// (0x0002a9a2) fep_vkb_top_pane_g1

0xc20c,	// (0x0002a9b1) fep_vkb_top_pane_g2_ParamLimits

0xc20c,	// (0x0002a9b1) fep_vkb_top_pane_g2

0xc21b,	// (0x0002a9c0) fep_vkb_top_pane_g3_ParamLimits

0xc21b,	// (0x0002a9c0) fep_vkb_top_pane_g3

0x0003,

0xfb0a,	// (0x0002e2af) fep_vkb_top_pane_g_ParamLimits

0xfb0a,	// (0x0002e2af) fep_vkb_top_pane_g

0xc239,	// (0x0002a9de) fep_vkb_top_text_pane_ParamLimits

0xc239,	// (0x0002a9de) fep_vkb_top_text_pane

0xc24a,	// (0x0002a9ef) fep_vkb_side_pane_g1_ParamLimits

0xc24a,	// (0x0002a9ef) fep_vkb_side_pane_g1

0xc293,	// (0x0002aa38) grid_vkb_side_pane_ParamLimits

0xc293,	// (0x0002aa38) grid_vkb_side_pane

0x7edf,	// (0x00026684) bg_popup_fep_shadow_pane_g2

0x7ee8,	// (0x0002668d) bg_popup_fep_shadow_pane_g3

0x7ef0,	// (0x00026695) bg_popup_fep_shadow_pane_g4

0x7ef9,	// (0x0002669e) bg_popup_fep_shadow_pane_g5

0x7f03,	// (0x000266a8) bg_popup_fep_shadow_pane_g6

0x7f0b,	// (0x000266b0) bg_popup_fep_shadow_pane_g7

0x307a,	// (0x0002181f) bg_popup_fep_shadow_pane_g8

0xc2f2,	// (0x0002aa97) grid_vkb_keypad_number_pane_ParamLimits

0xc2f2,	// (0x0002aa97) grid_vkb_keypad_number_pane

0xc306,	// (0x0002aaab) grid_vkb_keypad_pane_ParamLimits

0xc306,	// (0x0002aaab) grid_vkb_keypad_pane

0xc32c,	// (0x0002aad1) fep_vkb_bottom_pane_g1_ParamLimits

0xc32c,	// (0x0002aad1) fep_vkb_bottom_pane_g1

0xc355,	// (0x0002aafa) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc355,	// (0x0002aafa) grid_vkb_keypad_bottom_left_pane

0xc36a,	// (0x0002ab0f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc36a,	// (0x0002ab0f) grid_vkb_keypad_bottom_right_pane

0xc37f,	// (0x0002ab24) fep_vkb_top_text_pane_g1

0xc39a,	// (0x0002ab3f) fep_vkb_top_text_pane_t1

0xc3af,	// (0x0002ab54) cell_vkb_side_pane_ParamLimits

0xc3af,	// (0x0002ab54) cell_vkb_side_pane

0xbfb0,	// (0x0002a755) cell_vkb_side_pane_g1

0xc3ee,	// (0x0002ab93) cell_vkb_keypad_pane_ParamLimits

0xc3ee,	// (0x0002ab93) cell_vkb_keypad_pane

0xc47b,	// (0x0002ac20) cell_vkb_keypad_pane_g1

0x0008,

0xfb37,	// (0x0002e2dc) bg_popup_fep_shadow_pane_g

0xbfb0,	// (0x0002a755) cell_hwr_side_pane_g1

0xbfb0,	// (0x0002a755) cell_hwr_side_pane_g2

0xc485,	// (0x0002ac2a) cell_vkb_keypad_pane_t1

0xc493,	// (0x0002ac38) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc493,	// (0x0002ac38) cell_vkb_keypad_bottom_left_pane

0xc4b0,	// (0x0002ac55) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4b0,	// (0x0002ac55) cell_vkb_keypad_bottom_right_pane

0xbfb0,	// (0x0002a755) cell_vkb_keypad_bottom_left_pane_g1

0xbfb0,	// (0x0002a755) cell_vkb_keypad_bottom_right_pane_g1

0xc4e9,	// (0x0002ac8e) cell_vkb_keypad_number_pane_ParamLimits

0xc4e9,	// (0x0002ac8e) cell_vkb_keypad_number_pane

0xc508,	// (0x0002acad) cell_vkb_keypad_number_pane_g1

0xc512,	// (0x0002acb7) cell_vkb_keypad_number_pane_g2

0xc51b,	// (0x0002acc0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb29,	// (0x0002e2ce) cell_vkb_keypad_number_pane_g

0xc485,	// (0x0002ac2a) cell_vkb_keypad_number_pane_t1

0xc545,	// (0x0002acea) fep_vkb_candidate_pane_g1

0x0001,

0xfb24,	// (0x0002e2c9) cell_hwr_side_pane_g

0xc55e,	// (0x0002ad03) cell_hwr_side_pane_t1

0x7f1d,	// (0x000266c2) cell_hwr_side_pane_t1_copy1

0xc22b,	// (0x0002a9d0) cell_hwr_candidate_pane_g1

0x7f2b,	// (0x000266d0) cell_hwr_candidate_pane_t1

0xbfb0,	// (0x0002a755) cell_vkb_candidate_pane_g2

0xc5e4,	// (0x0002ad89) cell_vkb_candidate_pane_t1

0x7cd5,	// (0x0002647a) bg_popup_fep_shadow_pane_ParamLimits

0x7cd5,	// (0x0002647a) bg_popup_fep_shadow_pane

0x11d6,	// (0x0001f97b) bg_fep_hwr_top_pane_g4

0xc035,	// (0x0002a7da) bg_hwr_side_pane_g1_ParamLimits

0xc035,	// (0x0002a7da) bg_hwr_side_pane_g1

0x7df1,	// (0x00026596) cell_hwr_side_pane_ParamLimits

0x7df1,	// (0x00026596) cell_hwr_side_pane

0x7e2e,	// (0x000265d3) fep_hwr_write_pane_g1_ParamLimits

0x7e2e,	// (0x000265d3) fep_hwr_write_pane_g1

0x7e3b,	// (0x000265e0) fep_hwr_write_pane_g2_ParamLimits

0x7e3b,	// (0x000265e0) fep_hwr_write_pane_g2

0x7e48,	// (0x000265ed) fep_hwr_write_pane_g3_ParamLimits

0x7e48,	// (0x000265ed) fep_hwr_write_pane_g3

0x7e56,	// (0x000265fb) fep_hwr_write_pane_g4_ParamLimits

0x7e56,	// (0x000265fb) fep_hwr_write_pane_g4

0x0005,

0xfaf6,	// (0x0002e29b) fep_hwr_write_pane_g_ParamLimits

0xfaf6,	// (0x0002e29b) fep_hwr_write_pane_g

0x11d6,	// (0x0001f97b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x11d6,	// (0x0001f97b) bg_fep_hwr_candidate_pane_g2

0x7e6b,	// (0x00026610) cell_hwr_candidate_pane_ParamLimits

0x7e6b,	// (0x00026610) cell_hwr_candidate_pane

0x7ebd,	// (0x00026662) fep_hwr_candidate_pane_g1_ParamLimits

0xc095,	// (0x0002a83a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc095,	// (0x0002a83a) bg_popup_fep_shadow_pane_cp2

0xc22b,	// (0x0002a9d0) fep_vkb_top_pane_g4_ParamLimits

0xc22b,	// (0x0002a9d0) fep_vkb_top_pane_g4

0xc271,	// (0x0002aa16) fep_vkb_side_pane_g2_ParamLimits

0xc271,	// (0x0002aa16) fep_vkb_side_pane_g2

0x4e4e,	// (0x000235f3) list_setting_pane_t4_ParamLimits

0x4e4e,	// (0x000235f3) list_setting_pane_t4

0x4ee2,	// (0x00023687) list_setting_number_pane_t5_ParamLimits

0x4ee2,	// (0x00023687) list_setting_number_pane_t5

0x6bb5,	// (0x0002535a) list_double_heading_pane_cp2_ParamLimits

0x6bb5,	// (0x0002535a) list_double_heading_pane_cp2

0xc5f2,	// (0x0002ad97) list_double_heading_pane_g1_cp2_ParamLimits

0xc5f2,	// (0x0002ad97) list_double_heading_pane_g1_cp2

0xc5fe,	// (0x0002ada3) list_double_heading_pane_g2_cp2_ParamLimits

0xc5fe,	// (0x0002ada3) list_double_heading_pane_g2_cp2

0xc612,	// (0x0002adb7) list_double_heading_pane_t1_cp2_ParamLimits

0xc612,	// (0x0002adb7) list_double_heading_pane_t1_cp2

0xc628,	// (0x0002adcd) list_double_heading_pane_t2_cp2_ParamLimits

0xc628,	// (0x0002adcd) list_double_heading_pane_t2_cp2

0x11fe,	// (0x0001f9a3) aid_value_unit2

0x5ee2,	// (0x00024687) popup_preview_fixed_window

0x13c3,	// (0x0001fb68) bg_popup_preview_window_pane_cp02

0xc63a,	// (0x0002addf) list_preview_fixed_pane

0xc680,	// (0x0002ae25) list_empty_pane_fp_ParamLimits

0xc680,	// (0x0002ae25) list_empty_pane_fp

0xc680,	// (0x0002ae25) list_single_cale_day_pane_fp_ParamLimits

0xc680,	// (0x0002ae25) list_single_cale_day_pane_fp

0xc680,	// (0x0002ae25) list_single_graphic_heading_pane_fp_ParamLimits

0xc680,	// (0x0002ae25) list_single_graphic_heading_pane_fp

0xc680,	// (0x0002ae25) list_single_graphic_pane_fp_ParamLimits

0xc680,	// (0x0002ae25) list_single_graphic_pane_fp

0xc680,	// (0x0002ae25) list_single_heading_pane_fp_ParamLimits

0xc680,	// (0x0002ae25) list_single_heading_pane_fp

0xc680,	// (0x0002ae25) list_single_pane_fp_ParamLimits

0xc680,	// (0x0002ae25) list_single_pane_fp

0xc699,	// (0x0002ae3e) list_single_pane_fp_g1_ParamLimits

0xc699,	// (0x0002ae3e) list_single_pane_fp_g1

0x4b65,	// (0x0002330a) list_single_pane_fp_g2_ParamLimits

0x4b65,	// (0x0002330a) list_single_pane_fp_g2

0x584c,	// (0x00023ff1) list_single_pane_fp_g3_ParamLimits

0x584c,	// (0x00023ff1) list_single_pane_fp_g3

0xc6a5,	// (0x0002ae4a) list_single_pane_fp_g4_ParamLimits

0xc6a5,	// (0x0002ae4a) list_single_pane_fp_g4

0x0003,

0xfb58,	// (0x0002e2fd) list_single_pane_fp_g_ParamLimits

0xfb58,	// (0x0002e2fd) list_single_pane_fp_g

0x5860,	// (0x00024005) list_single_pane_fp_t1_ParamLimits

0x5860,	// (0x00024005) list_single_pane_fp_t1

0x5877,	// (0x0002401c) list_single_graphic_pane_fp_g1_ParamLimits

0x5877,	// (0x0002401c) list_single_graphic_pane_fp_g1

0xc699,	// (0x0002ae3e) list_single_graphic_pane_fp_g2_ParamLimits

0xc699,	// (0x0002ae3e) list_single_graphic_pane_fp_g2

0x4b65,	// (0x0002330a) list_single_graphic_pane_fp_g3_ParamLimits

0x4b65,	// (0x0002330a) list_single_graphic_pane_fp_g3

0x584c,	// (0x00023ff1) list_single_graphic_pane_fp_g4_ParamLimits

0x584c,	// (0x00023ff1) list_single_graphic_pane_fp_g4

0xc6a5,	// (0x0002ae4a) list_single_graphic_pane_fp_g5_ParamLimits

0xc6a5,	// (0x0002ae4a) list_single_graphic_pane_fp_g5

0x0004,

0xfb61,	// (0x0002e306) list_single_graphic_pane_fp_g_ParamLimits

0xfb61,	// (0x0002e306) list_single_graphic_pane_fp_g

0x5883,	// (0x00024028) list_single_graphic_pane_fp_t1_ParamLimits

0x5883,	// (0x00024028) list_single_graphic_pane_fp_t1

0x5877,	// (0x0002401c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5877,	// (0x0002401c) list_single_graphic_heading_pane_fp_g1

0xc699,	// (0x0002ae3e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc699,	// (0x0002ae3e) list_single_graphic_heading_pane_fp_g2

0x4b65,	// (0x0002330a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4b65,	// (0x0002330a) list_single_graphic_heading_pane_fp_g3

0x584c,	// (0x00023ff1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x584c,	// (0x00023ff1) list_single_graphic_heading_pane_fp_g4

0xc6a5,	// (0x0002ae4a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6a5,	// (0x0002ae4a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb61,	// (0x0002e306) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb61,	// (0x0002e306) list_single_graphic_heading_pane_fp_g

0x5899,	// (0x0002403e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5899,	// (0x0002403e) list_single_graphic_heading_pane_fp_t1

0x58af,	// (0x00024054) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x58af,	// (0x00024054) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6c,	// (0x0002e311) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6c,	// (0x0002e311) list_single_graphic_heading_pane_fp_t

0x58c1,	// (0x00024066) list_single_cale_day_pane_fp_g1_ParamLimits

0x58c1,	// (0x00024066) list_single_cale_day_pane_fp_g1

0xc6b1,	// (0x0002ae56) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6b1,	// (0x0002ae56) list_single_cale_day_pane_fp_g2

0x58f9,	// (0x0002409e) list_single_cale_day_pane_fp_g3_ParamLimits

0x58f9,	// (0x0002409e) list_single_cale_day_pane_fp_g3

0x5921,	// (0x000240c6) list_single_cale_day_pane_fp_g4_ParamLimits

0x5921,	// (0x000240c6) list_single_cale_day_pane_fp_g4

0x5945,	// (0x000240ea) list_single_cale_day_pane_fp_g5_ParamLimits

0x5945,	// (0x000240ea) list_single_cale_day_pane_fp_g5

0x0004,

0xfb71,	// (0x0002e316) list_single_cale_day_pane_fp_g_ParamLimits

0xfb71,	// (0x0002e316) list_single_cale_day_pane_fp_g

0x5969,	// (0x0002410e) list_single_cale_day_pane_fp_t1_ParamLimits

0x5969,	// (0x0002410e) list_single_cale_day_pane_fp_t1

0x598f,	// (0x00024134) list_single_cale_day_pane_fp_t2_ParamLimits

0x598f,	// (0x00024134) list_single_cale_day_pane_fp_t2

0x59a8,	// (0x0002414d) list_single_cale_day_pane_fp_t3_ParamLimits

0x59a8,	// (0x0002414d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7c,	// (0x0002e321) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7c,	// (0x0002e321) list_single_cale_day_pane_fp_t

0xc699,	// (0x0002ae3e) list_empty_pane_fp_g1_ParamLimits

0xc699,	// (0x0002ae3e) list_empty_pane_fp_g1

0x59c1,	// (0x00024166) list_empty_pane_fp_t1

0x59cf,	// (0x00024174) list_empty_pane_fp_t2

0x0001,

0xfb83,	// (0x0002e328) list_empty_pane_fp_t

0xc699,	// (0x0002ae3e) list_single_heading_pane_fp_g1_ParamLimits

0xc699,	// (0x0002ae3e) list_single_heading_pane_fp_g1

0x4b65,	// (0x0002330a) list_single_heading_pane_fp_g2_ParamLimits

0x4b65,	// (0x0002330a) list_single_heading_pane_fp_g2

0x584c,	// (0x00023ff1) list_single_heading_pane_fp_g3_ParamLimits

0x584c,	// (0x00023ff1) list_single_heading_pane_fp_g3

0x0002,

0xfb88,	// (0x0002e32d) list_single_heading_pane_fp_g_ParamLimits

0xfb88,	// (0x0002e32d) list_single_heading_pane_fp_g

0x59dd,	// (0x00024182) list_single_heading_pane_fp_t1_ParamLimits

0x59dd,	// (0x00024182) list_single_heading_pane_fp_t1

0x59ef,	// (0x00024194) list_single_heading_pane_fp_t2_ParamLimits

0x59ef,	// (0x00024194) list_single_heading_pane_fp_t2

0x0001,

0xfb8f,	// (0x0002e334) list_single_heading_pane_fp_t_ParamLimits

0xfb8f,	// (0x0002e334) list_single_heading_pane_fp_t

0x6508,	// (0x00024cad) aid_size_cell_fast

0x13a6,	// (0x0001fb4b) soft_indicator_pane_cp1_t1

0x6545,	// (0x00024cea) cell_app_pane_cp2_ParamLimits

0x6545,	// (0x00024cea) cell_app_pane_cp2

0x7cf7,	// (0x0002649c) fep_hwr_candidate_drop_down_list_pane

0x11e4,	// (0x0001f989) fep_hwr_candidate_pane_g3_ParamLimits

0x11e4,	// (0x0001f989) fep_hwr_candidate_pane_g3

0x11f1,	// (0x0001f996) fep_hwr_candidate_pane_g4_ParamLimits

0x11f1,	// (0x0001f996) fep_hwr_candidate_pane_g4

0x0002,

0xfb03,	// (0x0002e2a8) fep_hwr_candidate_pane_g_ParamLimits

0xfb03,	// (0x0002e2a8) fep_hwr_candidate_pane_g

0xc125,	// (0x0002a8ca) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc125,	// (0x0002a8ca) fep_vkb_candidate_drop_down_list_pane

0xc54d,	// (0x0002acf2) fep_vkb_candidate_pane_g3

0xc555,	// (0x0002acfa) fep_vkb_candidate_pane_g4

0x0002,

0xfb30,	// (0x0002e2d5) fep_vkb_candidate_pane_g

0xc22b,	// (0x0002a9d0) cell_hwr_candidate_pane_g1_ParamLimits

0xc56c,	// (0x0002ad11) cell_hwr_candidate_pane_g3_ParamLimits

0xc56c,	// (0x0002ad11) cell_hwr_candidate_pane_g3

0xc58d,	// (0x0002ad32) cell_hwr_candidate_pane_g4_ParamLimits

0xc58d,	// (0x0002ad32) cell_hwr_candidate_pane_g4

0x0002,

0xfb4a,	// (0x0002e2ef) cell_hwr_candidate_pane_g_ParamLimits

0xfb4a,	// (0x0002e2ef) cell_hwr_candidate_pane_g

0xc5ae,	// (0x0002ad53) cell_vkb_candidate_pane_g3_ParamLimits

0xc5ae,	// (0x0002ad53) cell_vkb_candidate_pane_g3

0xc5c9,	// (0x0002ad6e) cell_vkb_candidate_pane_g4_ParamLimits

0xc5c9,	// (0x0002ad6e) cell_vkb_candidate_pane_g4

0xc6bd,	// (0x0002ae62) cell_app_pane_cp2_g1_ParamLimits

0xc6bd,	// (0x0002ae62) cell_app_pane_cp2_g1

0xc6db,	// (0x0002ae80) cell_app_pane_cp2_g2_ParamLimits

0xc6db,	// (0x0002ae80) cell_app_pane_cp2_g2

0x0001,

0xfb94,	// (0x0002e339) cell_app_pane_cp2_g_ParamLimits

0xfb94,	// (0x0002e339) cell_app_pane_cp2_g

0xc6e7,	// (0x0002ae8c) cell_app_pane_cp2_t1_ParamLimits

0xc6e7,	// (0x0002ae8c) cell_app_pane_cp2_t1

0x2f9f,	// (0x00021744) grid_highlight_pane_cp1_ParamLimits

0x2f9f,	// (0x00021744) grid_highlight_pane_cp1

0x7f49,	// (0x000266ee) cell_hwr_candidate_pane_cp1_ParamLimits

0x7f49,	// (0x000266ee) cell_hwr_candidate_pane_cp1

0xc22b,	// (0x0002a9d0) fep_hwr_candidate_drop_down_list_pane_g1

0xc6f9,	// (0x0002ae9e) fep_hwr_candidate_drop_down_list_pane_g2

0xc706,	// (0x0002aeab) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb99,	// (0x0002e33e) fep_hwr_candidate_drop_down_list_pane_g

0x7f6d,	// (0x00026712) fep_hwr_candidate_drop_down_list_scroll_pane

0x7f76,	// (0x0002671b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f76,	// (0x0002671b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7f83,	// (0x00026728) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f83,	// (0x00026728) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7f90,	// (0x00026735) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f90,	// (0x00026735) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5ae,	// (0x0002ad53) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5ae,	// (0x0002ad53) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc5c9,	// (0x0002ad6e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5c9,	// (0x0002ad6e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7f9d,	// (0x00026742) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f9d,	// (0x00026742) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7fb8,	// (0x0002675d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7fb8,	// (0x0002675d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7fd3,	// (0x00026778) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7fd3,	// (0x00026778) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba0,	// (0x0002e345) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba0,	// (0x0002e345) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc713,	// (0x0002aeb8) cell_vkb_candidate_pane_cp1_ParamLimits

0xc713,	// (0x0002aeb8) cell_vkb_candidate_pane_cp1

0xc22b,	// (0x0002a9d0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc22b,	// (0x0002a9d0) fep_vkb_candidate_drop_down_list_pane_g1

0xc6f9,	// (0x0002ae9e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc6f9,	// (0x0002ae9e) fep_vkb_candidate_drop_down_list_pane_g2

0xc706,	// (0x0002aeab) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc706,	// (0x0002aeab) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb99,	// (0x0002e33e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb99,	// (0x0002e33e) fep_vkb_candidate_drop_down_list_pane_g

0xc739,	// (0x0002aede) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc739,	// (0x0002aede) fep_vkb_candidate_drop_down_list_scroll_pane

0xc746,	// (0x0002aeeb) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc746,	// (0x0002aeeb) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc753,	// (0x0002aef8) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc753,	// (0x0002aef8) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc75f,	// (0x0002af04) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc75f,	// (0x0002af04) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc56c,	// (0x0002ad11) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc56c,	// (0x0002ad11) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc58d,	// (0x0002ad32) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc58d,	// (0x0002ad32) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc76b,	// (0x0002af10) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc76b,	// (0x0002af10) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc78c,	// (0x0002af31) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc78c,	// (0x0002af31) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7ad,	// (0x0002af52) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7ad,	// (0x0002af52) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb1,	// (0x0002e356) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb1,	// (0x0002e356) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6002,	// (0x000247a7) title_pane_g1_ParamLimits

0x600f,	// (0x000247b4) title_pane_g2_ParamLimits

0xf527,	// (0x0002dccc) title_pane_g_ParamLimits

0x6b3f,	// (0x000252e4) aid_call2_pane

0x6b47,	// (0x000252ec) aid_call_pane

0x6b4f,	// (0x000252f4) popup_clock_analogue_window_g1

0x6b4f,	// (0x000252f4) popup_clock_analogue_window_g2

0x6b57,	// (0x000252fc) popup_clock_analogue_window_g3

0x6b60,	// (0x00025305) popup_clock_analogue_window_g4

0x1210,	// (0x0001f9b5) popup_clock_analogue_window_g5

0x0004,

0xf6d1,	// (0x0002de76) popup_clock_analogue_window_g

0x6b68,	// (0x0002530d) popup_clock_analogue_window_t1

0x6c15,	// (0x000253ba) clock_digital_number_pane_ParamLimits

0x6c15,	// (0x000253ba) clock_digital_number_pane

0x6c21,	// (0x000253c6) clock_digital_number_pane_cp02_ParamLimits

0x6c21,	// (0x000253c6) clock_digital_number_pane_cp02

0x6c2d,	// (0x000253d2) clock_digital_number_pane_cp03_ParamLimits

0x6c2d,	// (0x000253d2) clock_digital_number_pane_cp03

0x6c39,	// (0x000253de) clock_digital_number_pane_cp04_ParamLimits

0x6c39,	// (0x000253de) clock_digital_number_pane_cp04

0x6c45,	// (0x000253ea) clock_digital_separator_pane_ParamLimits

0x6c45,	// (0x000253ea) clock_digital_separator_pane

0x6c51,	// (0x000253f6) popup_clock_digital_window_t1_ParamLimits

0x6c51,	// (0x000253f6) popup_clock_digital_window_t1

0x1210,	// (0x0001f9b5) clock_digital_number_pane_g1

0x1210,	// (0x0001f9b5) clock_digital_number_pane_g2

0x0001,

0xf6dc,	// (0x0002de81) clock_digital_number_pane_g

0x1210,	// (0x0001f9b5) clock_digital_separator_pane_g1

0x1210,	// (0x0001f9b5) clock_digital_separator_pane_g2

0x0001,

0xf6dc,	// (0x0002de81) clock_digital_separator_pane_g

0x947f,	// (0x00027c24) aid_fill_nsta_ParamLimits

0x95c9,	// (0x00027d6e) indicator_nsta_pane_ParamLimits

0x9758,	// (0x00027efd) popup_clock_analogue_window

0x9758,	// (0x00027efd) popup_clock_digital_window

0xb9e3,	// (0x0002a188) grid_indicator_nsta_pane_ParamLimits

0xba0c,	// (0x0002a1b1) clock_nsta_pane_t2

0x0001,

0xfa83,	// (0x0002e228) clock_nsta_pane_t

0x6928,	// (0x000250cd) aid_size_max_handle

0x6932,	// (0x000250d7) aid_size_min_handle

0x9114,	// (0x000278b9) editor_scroll_pane

0xc7c8,	// (0x0002af6d) ex_editor_pane

0x6475,	// (0x00024c1a) scroll_pane_cp13

0x2eb7,	// (0x0002165c) scroll_pane_cp14

0x6b9d,	// (0x00025342) scroll_pane_cp36

0x6bcb,	// (0x00025370) list_single_graphic_hl_pane_cp2_ParamLimits

0x6bcb,	// (0x00025370) list_single_graphic_hl_pane_cp2

0xaf5f,	// (0x00029704) list_single_graphic_hl_pane_ParamLimits

0xaf5f,	// (0x00029704) list_single_graphic_hl_pane

0x5a05,	// (0x000241aa) aid_size_min_hl_cp1

0xc7d0,	// (0x0002af75) list_highlight_pane_cp34_ParamLimits

0xc7d0,	// (0x0002af75) list_highlight_pane_cp34

0xc7e1,	// (0x0002af86) list_single_graphic_hl_pane_g1_ParamLimits

0xc7e1,	// (0x0002af86) list_single_graphic_hl_pane_g1

0x5a0e,	// (0x000241b3) list_single_graphic_hl_pane_g2_ParamLimits

0x5a0e,	// (0x000241b3) list_single_graphic_hl_pane_g2

0x5a0e,	// (0x000241b3) list_single_graphic_hl_pane_g3_ParamLimits

0x5a0e,	// (0x000241b3) list_single_graphic_hl_pane_g3

0x529c,	// (0x00023a41) list_single_graphic_hl_pane_g4_ParamLimits

0x529c,	// (0x00023a41) list_single_graphic_hl_pane_g4

0x5a1a,	// (0x000241bf) list_single_graphic_hl_pane_g5_ParamLimits

0x5a1a,	// (0x000241bf) list_single_graphic_hl_pane_g5

0x0004,

0xfbc2,	// (0x0002e367) list_single_graphic_hl_pane_g_ParamLimits

0xfbc2,	// (0x0002e367) list_single_graphic_hl_pane_g

0x5a2e,	// (0x000241d3) list_single_graphic_hl_pane_t1_ParamLimits

0x5a2e,	// (0x000241d3) list_single_graphic_hl_pane_t1

0xc7ee,	// (0x0002af93) aid_size_min_hl_cp2

0xc7f7,	// (0x0002af9c) list_highlight_pane_cp34_cp2_ParamLimits

0xc7f7,	// (0x0002af9c) list_highlight_pane_cp34_cp2

0xc7e1,	// (0x0002af86) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc7e1,	// (0x0002af86) list_single_graphic_hl_pane_g1_cp2

0xc804,	// (0x0002afa9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc804,	// (0x0002afa9) list_single_graphic_hl_pane_g2_cp2

0xc810,	// (0x0002afb5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc810,	// (0x0002afb5) list_single_graphic_hl_pane_g3_cp2

0xc81e,	// (0x0002afc3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc81e,	// (0x0002afc3) list_single_graphic_hl_pane_g4_cp2

0xc82a,	// (0x0002afcf) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc82a,	// (0x0002afcf) list_single_graphic_hl_pane_g5_cp2

0x70ff,	// (0x000258a4) control_pane_g4_ParamLimits

0x70ff,	// (0x000258a4) control_pane_g4

0x9443,	// (0x00027be8) bg_popup_sub_pane_cp10_ParamLimits

0xbfba,	// (0x0002a75f) list_choice_list_pane_ParamLimits

0xbfc9,	// (0x0002a76e) scroll_pane_cp23

0x13c3,	// (0x0001fb68) bg_popup_preview_window_pane_cp02_ParamLimits

0xc63a,	// (0x0002addf) list_preview_fixed_pane_ParamLimits

0xc650,	// (0x0002adf5) list_preview_fixed_pane_cp_ParamLimits

0xc650,	// (0x0002adf5) list_preview_fixed_pane_cp

0xc65c,	// (0x0002ae01) popup_preview_fixed_window_g1_ParamLimits

0xc65c,	// (0x0002ae01) popup_preview_fixed_window_g1

0xc668,	// (0x0002ae0d) popup_preview_fixed_window_g2_ParamLimits

0xc668,	// (0x0002ae0d) popup_preview_fixed_window_g2

0x0002,

0xfb51,	// (0x0002e2f6) popup_preview_fixed_window_g_ParamLimits

0xfb51,	// (0x0002e2f6) popup_preview_fixed_window_g

0x67a5,	// (0x00024f4a) aid_navi_side_left_pane_ParamLimits

0x67ba,	// (0x00024f5f) aid_navi_side_right_pane_ParamLimits

0x67d2,	// (0x00024f77) navi_icon_pane_stacon_ParamLimits

0x67e6,	// (0x00024f8b) navi_navi_pane_stacon_ParamLimits

0x67d2,	// (0x00024f77) navi_text_pane_stacon_ParamLimits

0x1206,	// (0x0001f9ab) main_text_info_pane

0xc854,	// (0x0002aff9) listscroll_text_info_pane

0xc85c,	// (0x0002b001) list_text_info_pane_ParamLimits

0xc85c,	// (0x0002b001) list_text_info_pane

0xc86b,	// (0x0002b010) scroll_pane_cp24_ParamLimits

0xc86b,	// (0x0002b010) scroll_pane_cp24

0xc889,	// (0x0002b02e) list_text_info_pane_t1_ParamLimits

0xc889,	// (0x0002b02e) list_text_info_pane_t1

0x7257,	// (0x000259fc) popup_fast_swap2_window_ParamLimits

0x7257,	// (0x000259fc) popup_fast_swap2_window

0xc8ae,	// (0x0002b053) aid_size_cell_fast2

0x1206,	// (0x0001f9ab) bg_popup_window_pane_cp17

0x9da9,	// (0x0002854e) heading_pane_cp2

0xc8b8,	// (0x0002b05d) listscroll_fast2_pane

0xc8c0,	// (0x0002b065) grid_fast2_pane

0xc8ca,	// (0x0002b06f) listscroll_fast2_pane_g1

0xc8d4,	// (0x0002b079) listscroll_fast2_pane_g2

0x0001,

0xfbcd,	// (0x0002e372) listscroll_fast2_pane_g

0x6475,	// (0x00024c1a) scroll_pane_cp26

0xc8de,	// (0x0002b083) cell_fast2_pane_ParamLimits

0xc8de,	// (0x0002b083) cell_fast2_pane

0xc8f5,	// (0x0002b09a) cell_fast2_pane_g1

0xc8fe,	// (0x0002b0a3) cell_fast2_pane_g2

0xc907,	// (0x0002b0ac) cell_fast2_pane_g3

0x0002,

0xfbd2,	// (0x0002e377) cell_fast2_pane_g

0x2c7e,	// (0x00021423) grid_highlight_pane_cp9

0x2c93,	// (0x00021438) main_eswt_pane_ParamLimits

0x2c93,	// (0x00021438) main_eswt_pane

0xc880,	// (0x0002b025) list_single_text_info_pane

0xc90f,	// (0x0002b0b4) eswt_ctrl_button_pane

0xc90f,	// (0x0002b0b4) eswt_ctrl_canvas_pane

0xc917,	// (0x0002b0bc) eswt_ctrl_combo_pane

0xc90f,	// (0x0002b0b4) eswt_ctrl_default_pane

0xc90f,	// (0x0002b0b4) eswt_ctrl_label_pane

0xc91f,	// (0x0002b0c4) eswt_ctrl_wait_pane

0xc927,	// (0x0002b0cc) eswt_shell_pane

0x1206,	// (0x0001f9ab) listscroll_eswt_app_pane

0xc947,	// (0x0002b0ec) popup_eswt_tasktip_window_ParamLimits

0xc947,	// (0x0002b0ec) popup_eswt_tasktip_window

0x99e7,	// (0x0002818c) bg_popup_window_pane_cp18

0xc958,	// (0x0002b0fd) eswt_control_pane_g1_ParamLimits

0xc958,	// (0x0002b0fd) eswt_control_pane_g1

0xc965,	// (0x0002b10a) eswt_control_pane_g2_ParamLimits

0xc965,	// (0x0002b10a) eswt_control_pane_g2

0xc972,	// (0x0002b117) eswt_control_pane_g3_ParamLimits

0xc972,	// (0x0002b117) eswt_control_pane_g3

0xc97f,	// (0x0002b124) eswt_control_pane_g4_ParamLimits

0xc97f,	// (0x0002b124) eswt_control_pane_g4

0x0003,

0xfbd9,	// (0x0002e37e) eswt_control_pane_g_ParamLimits

0xfbd9,	// (0x0002e37e) eswt_control_pane_g

0x2f9f,	// (0x00021744) bg_button_pane_ParamLimits

0x2f9f,	// (0x00021744) bg_button_pane

0x2c93,	// (0x00021438) common_borders_pane_copy2_ParamLimits

0x2c93,	// (0x00021438) common_borders_pane_copy2

0xc98c,	// (0x0002b131) control_button_pane_g1_ParamLimits

0xc98c,	// (0x0002b131) control_button_pane_g1

0xc998,	// (0x0002b13d) control_button_pane_g2_ParamLimits

0xc998,	// (0x0002b13d) control_button_pane_g2

0xc9a4,	// (0x0002b149) control_button_pane_g3_ParamLimits

0xc9a4,	// (0x0002b149) control_button_pane_g3

0x0002,

0xfbe2,	// (0x0002e387) control_button_pane_g_ParamLimits

0xfbe2,	// (0x0002e387) control_button_pane_g

0xc9b8,	// (0x0002b15d) control_button_pane_t1

0xc9c6,	// (0x0002b16b) control_button_pane_t2

0x0001,

0xfbe9,	// (0x0002e38e) control_button_pane_t

0x9973,	// (0x00028118) bg_button_pane_g1

0x997b,	// (0x00028120) bg_button_pane_g2

0x9983,	// (0x00028128) bg_button_pane_g3

0x998b,	// (0x00028130) bg_button_pane_g4

0x9993,	// (0x00028138) bg_button_pane_g5

0x999b,	// (0x00028140) bg_button_pane_g6

0x99a3,	// (0x00028148) bg_button_pane_g7

0x99ab,	// (0x00028150) bg_button_pane_g8

0x99b3,	// (0x00028158) bg_button_pane_g9

0x0008,

0xf83f,	// (0x0002dfe4) bg_button_pane_g

0xbf75,	// (0x0002a71a) common_borders_pane_ParamLimits

0xbf75,	// (0x0002a71a) common_borders_pane

0xc958,	// (0x0002b0fd) eswt_control_pane_g1_copy1_ParamLimits

0xc958,	// (0x0002b0fd) eswt_control_pane_g1_copy1

0xc965,	// (0x0002b10a) eswt_control_pane_g2_copy1_ParamLimits

0xc965,	// (0x0002b10a) eswt_control_pane_g2_copy1

0xc972,	// (0x0002b117) eswt_control_pane_g3_copy1_ParamLimits

0xc972,	// (0x0002b117) eswt_control_pane_g3_copy1

0xc97f,	// (0x0002b124) eswt_control_pane_g4_copy1_ParamLimits

0xc97f,	// (0x0002b124) eswt_control_pane_g4_copy1

0xbfb0,	// (0x0002a755) bg_eswt_ctrl_canvas_pane_g1

0xbf75,	// (0x0002a71a) common_borders_pane_cp2_ParamLimits

0xbf75,	// (0x0002a71a) common_borders_pane_cp2

0xbf75,	// (0x0002a71a) common_borders_pane_cp3_ParamLimits

0xbf75,	// (0x0002a71a) common_borders_pane_cp3

0xc9d4,	// (0x0002b179) separator_horizontal_pane

0xc9dc,	// (0x0002b181) separator_vertical_pane

0xc958,	// (0x0002b0fd) eswt_control_pane_g1_copy2_ParamLimits

0xc958,	// (0x0002b0fd) eswt_control_pane_g1_copy2

0xc965,	// (0x0002b10a) eswt_control_pane_g2_copy2_ParamLimits

0xc965,	// (0x0002b10a) eswt_control_pane_g2_copy2

0xc972,	// (0x0002b117) eswt_control_pane_g3_copy2_ParamLimits

0xc972,	// (0x0002b117) eswt_control_pane_g3_copy2

0xc97f,	// (0x0002b124) eswt_control_pane_g4_copy2_ParamLimits

0xc97f,	// (0x0002b124) eswt_control_pane_g4_copy2

0x1206,	// (0x0001f9ab) common_borders_pane_cp4

0xc9e5,	// (0x0002b18a) separator_horizontal_pane_g1

0xc9ee,	// (0x0002b193) separator_horizontal_pane_g2

0xc9f7,	// (0x0002b19c) separator_horizontal_pane_g3

0x0002,

0xfbee,	// (0x0002e393) separator_horizontal_pane_g

0xc958,	// (0x0002b0fd) eswt_control_pane_g1_copy3_ParamLimits

0xc958,	// (0x0002b0fd) eswt_control_pane_g1_copy3

0xc965,	// (0x0002b10a) eswt_control_pane_g2_copy3_ParamLimits

0xc965,	// (0x0002b10a) eswt_control_pane_g2_copy3

0xc972,	// (0x0002b117) eswt_control_pane_g3_copy3_ParamLimits

0xc972,	// (0x0002b117) eswt_control_pane_g3_copy3

0xc97f,	// (0x0002b124) eswt_control_pane_g4_copy3_ParamLimits

0xc97f,	// (0x0002b124) eswt_control_pane_g4_copy3

0x1206,	// (0x0001f9ab) common_borders_pane_cp5

0xca00,	// (0x0002b1a5) separator_vertical_pane_g1

0xca09,	// (0x0002b1ae) separator_vertical_pane_g2

0xca12,	// (0x0002b1b7) separator_vertical_pane_g3

0x0002,

0xfbf5,	// (0x0002e39a) separator_vertical_pane_g

0xc958,	// (0x0002b0fd) eswt_control_pane_g1_copy4_ParamLimits

0xc958,	// (0x0002b0fd) eswt_control_pane_g1_copy4

0xc965,	// (0x0002b10a) eswt_control_pane_g2_copy4_ParamLimits

0xc965,	// (0x0002b10a) eswt_control_pane_g2_copy4

0xc972,	// (0x0002b117) eswt_control_pane_g3_copy4_ParamLimits

0xc972,	// (0x0002b117) eswt_control_pane_g3_copy4

0xc97f,	// (0x0002b124) eswt_control_pane_g4_copy4_ParamLimits

0xc97f,	// (0x0002b124) eswt_control_pane_g4_copy4

0xca1b,	// (0x0002b1c0) eswt_ctrl_combo_button_pane

0xca23,	// (0x0002b1c8) eswt_ctrl_input_pane

0xca2b,	// (0x0002b1d0) popup_choice_list_window_cp70

0xca33,	// (0x0002b1d8) eswt_ctrl_input_pane_t1

0x1206,	// (0x0001f9ab) input_focus_pane_cp70

0xbf75,	// (0x0002a71a) bg_button_pane_cp70_ParamLimits

0xbf75,	// (0x0002a71a) bg_button_pane_cp70

0xca41,	// (0x0002b1e6) eswt_ctrl_combo_button_pane_g1

0xca49,	// (0x0002b1ee) wait_bar_pane_cp70

0x99e7,	// (0x0002818c) bg_popup_window_pane_cp70_ParamLimits

0x99e7,	// (0x0002818c) bg_popup_window_pane_cp70

0xca51,	// (0x0002b1f6) popup_eswt_tasktip_window_t1

0xca67,	// (0x0002b20c) wait_bar_pane_cp71_ParamLimits

0xca67,	// (0x0002b20c) wait_bar_pane_cp71

0xca73,	// (0x0002b218) grid_eswt_app_pane

0x698c,	// (0x00025131) scroll_pane_cp70

0xca7c,	// (0x0002b221) cell_eswt_app_pane_ParamLimits

0xca7c,	// (0x0002b221) cell_eswt_app_pane

0xcaae,	// (0x0002b253) cell_eswt_app_pane_g1_ParamLimits

0xcaae,	// (0x0002b253) cell_eswt_app_pane_g1

0xcadd,	// (0x0002b282) cell_eswt_app_pane_g2_ParamLimits

0xcadd,	// (0x0002b282) cell_eswt_app_pane_g2

0x0001,

0xfbfc,	// (0x0002e3a1) cell_eswt_app_pane_g_ParamLimits

0xfbfc,	// (0x0002e3a1) cell_eswt_app_pane_g

0xcb06,	// (0x0002b2ab) cell_eswt_app_pane_t1_ParamLimits

0xcb06,	// (0x0002b2ab) cell_eswt_app_pane_t1

0xcb38,	// (0x0002b2dd) grid_highlight_pane_cp70_ParamLimits

0xcb38,	// (0x0002b2dd) grid_highlight_pane_cp70

0x8fd6,	// (0x0002777b) set_content_pane_g1

0x93c2,	// (0x00027b67) status_small_volume_pane

0x7fee,	// (0x00026793) status_small_volume_pane_g1

0x7ff6,	// (0x0002679b) volume_small2_pane

0x7fff,	// (0x000267a4) volume_small2_pane_g1

0x8008,	// (0x000267ad) volume_small2_pane_g2

0x8011,	// (0x000267b6) volume_small2_pane_g3

0x801a,	// (0x000267bf) volume_small2_pane_g4

0x8023,	// (0x000267c8) volume_small2_pane_g5

0x802c,	// (0x000267d1) volume_small2_pane_g6

0x8035,	// (0x000267da) volume_small2_pane_g7

0x803e,	// (0x000267e3) volume_small2_pane_g8

0x8047,	// (0x000267ec) volume_small2_pane_g9

0x8050,	// (0x000267f5) volume_small2_pane_g10

0x0009,

0xfc01,	// (0x0002e3a6) volume_small2_pane_g

0xc37f,	// (0x0002ab24) fep_vkb_top_text_pane_g1_ParamLimits

0xc39a,	// (0x0002ab3f) fep_vkb_top_text_pane_t1_ParamLimits

0xc674,	// (0x0002ae19) popup_preview_fixed_window_g3_ParamLimits

0xc674,	// (0x0002ae19) popup_preview_fixed_window_g3

0x776a,	// (0x00025f0f) popup_toolbar_trans_pane

0xad2f,	// (0x000294d4) aid_height_set_list_ParamLimits

0xad40,	// (0x000294e5) aid_size_parent_ParamLimits

0x9443,	// (0x00027be8) list_highlight_pane_cp2_ParamLimits

0x8fd6,	// (0x0002777b) set_content_pane_g1_ParamLimits

0x547a,	// (0x00023c1f) list_single_image_pane_ParamLimits

0x547a,	// (0x00023c1f) list_single_image_pane

0xcb44,	// (0x0002b2e9) aid_size_cell_image_ParamLimits

0xcb44,	// (0x0002b2e9) aid_size_cell_image

0xcb51,	// (0x0002b2f6) grid_single_image_pane_ParamLimits

0xcb51,	// (0x0002b2f6) grid_single_image_pane

0x2fc5,	// (0x0002176a) list_single_image_pane_g1_ParamLimits

0x2fc5,	// (0x0002176a) list_single_image_pane_g1

0x2fd1,	// (0x00021776) list_single_image_pane_g2_ParamLimits

0x2fd1,	// (0x00021776) list_single_image_pane_g2

0x0001,

0xfc16,	// (0x0002e3bb) list_single_image_pane_g_ParamLimits

0xfc16,	// (0x0002e3bb) list_single_image_pane_g

0xcb5f,	// (0x0002b304) list_single_image_pane_t1_ParamLimits

0xcb5f,	// (0x0002b304) list_single_image_pane_t1

0xcb75,	// (0x0002b31a) cell_image_list_pane_ParamLimits

0xcb75,	// (0x0002b31a) cell_image_list_pane

0xcb8d,	// (0x0002b332) cell_image_list_pane_g1

0xcb96,	// (0x0002b33b) cell_image_list_pane_g2

0x0001,

0xfc1b,	// (0x0002e3c0) cell_image_list_pane_g

0xcb9f,	// (0x0002b344) aid_size_cell_tb_trans_pane

0x2f9f,	// (0x00021744) bg_tb_trans_pane

0xcbb1,	// (0x0002b356) grid_tb_trans_pane

0x9973,	// (0x00028118) bg_tb_trans_pane_g1

0x997b,	// (0x00028120) bg_tb_trans_pane_g2

0x9983,	// (0x00028128) bg_tb_trans_pane_g3

0x998b,	// (0x00028130) bg_tb_trans_pane_g4

0x9993,	// (0x00028138) bg_tb_trans_pane_g5

0x99ab,	// (0x00028150) bg_tb_trans_pane_g6

0x99b3,	// (0x00028158) bg_tb_trans_pane_g7

0x999b,	// (0x00028140) bg_tb_trans_pane_g8

0x99a3,	// (0x00028148) bg_tb_trans_pane_g9

0x0008,

0xfc20,	// (0x0002e3c5) bg_tb_trans_pane_g

0xcbc5,	// (0x0002b36a) cell_toolbar_trans_pane_ParamLimits

0xcbc5,	// (0x0002b36a) cell_toolbar_trans_pane

0xbfb0,	// (0x0002a755) cell_toolbar_trans_pane_g1

0xbbef,	// (0x0002a394) list_form2_midp_pane_t1

0xbbfd,	// (0x0002a3a2) list_form2_midp_pane_t2

0x0001,

0xfac9,	// (0x0002e26e) list_form2_midp_pane_t

0xbc0b,	// (0x0002a3b0) scroll_pane_cp51_ParamLimits

0xbdd2,	// (0x0002a577) form2_midp_wait_pane_g1

0xbddb,	// (0x0002a580) form2_midp_wait_pane_g2

0xbde4,	// (0x0002a589) form2_midp_wait_pane_g3

0x0002,

0xfade,	// (0x0002e283) form2_midp_wait_pane_g

0x1276,	// (0x0001fa1b) list_highlight_pane_cp21_ParamLimits

0xbe1d,	// (0x0002a5c2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe2c,	// (0x0002a5d1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5430,	// (0x00023bd5) list_single_2graphic_im_pane_ParamLimits

0x5430,	// (0x00023bd5) list_single_2graphic_im_pane

0xcbeb,	// (0x0002b390) list_single_2graphic_im_pane_g1_ParamLimits

0xcbeb,	// (0x0002b390) list_single_2graphic_im_pane_g1

0xcbfc,	// (0x0002b3a1) list_single_2graphic_im_pane_g2_ParamLimits

0xcbfc,	// (0x0002b3a1) list_single_2graphic_im_pane_g2

0xcc08,	// (0x0002b3ad) list_single_2graphic_im_pane_g3_ParamLimits

0xcc08,	// (0x0002b3ad) list_single_2graphic_im_pane_g3

0x0003,

0xfc33,	// (0x0002e3d8) list_single_2graphic_im_pane_g_ParamLimits

0xfc33,	// (0x0002e3d8) list_single_2graphic_im_pane_g

0xcc28,	// (0x0002b3cd) list_single_2graphic_im_pane_t1_ParamLimits

0xcc28,	// (0x0002b3cd) list_single_2graphic_im_pane_t1

0xc680,	// (0x0002ae25) list_single_graphic_2heading_pane_fp_ParamLimits

0xc680,	// (0x0002ae25) list_single_graphic_2heading_pane_fp

0x5877,	// (0x0002401c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5877,	// (0x0002401c) list_single_graphic_2heading_pane_fp_g1

0xc699,	// (0x0002ae3e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc699,	// (0x0002ae3e) list_single_graphic_2heading_pane_fp_g2

0x4b65,	// (0x0002330a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4b65,	// (0x0002330a) list_single_graphic_2heading_pane_fp_g3

0x584c,	// (0x00023ff1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x584c,	// (0x00023ff1) list_single_graphic_2heading_pane_fp_g4

0xc6a5,	// (0x0002ae4a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6a5,	// (0x0002ae4a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb61,	// (0x0002e306) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb61,	// (0x0002e306) list_single_graphic_2heading_pane_fp_g

0x5a44,	// (0x000241e9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5a44,	// (0x000241e9) list_single_graphic_2heading_pane_fp_t1

0x58af,	// (0x00024054) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x58af,	// (0x00024054) list_single_graphic_2heading_pane_fp_t2

0x5a5a,	// (0x000241ff) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5a5a,	// (0x000241ff) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3c,	// (0x0002e3e1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3c,	// (0x0002e3e1) list_single_graphic_2heading_pane_fp_t

0xc041,	// (0x0002a7e6) fep_hwr_write_pane_g5_ParamLimits

0xc041,	// (0x0002a7e6) fep_hwr_write_pane_g5

0xc04d,	// (0x0002a7f2) fep_hwr_write_pane_g6_ParamLimits

0xc04d,	// (0x0002a7f2) fep_hwr_write_pane_g6

0xc927,	// (0x0002b0cc) eswt_shell_pane_ParamLimits

0x99e7,	// (0x0002818c) bg_popup_window_pane_cp18_ParamLimits

0x9da9,	// (0x0002854e) heading_pane_cp70

0xca51,	// (0x0002b1f6) popup_eswt_tasktip_window_t1_ParamLimits

0x94d4,	// (0x00027c79) aid_touch_tab_arrow_left

0x94e0,	// (0x00027c85) aid_touch_tab_arrow_right

0x6028,	// (0x000247cd) title_pane_g3_ParamLimits

0x6028,	// (0x000247cd) title_pane_g3

0x2ef8,	// (0x0002169d) set_value_pane_g1

0x776a,	// (0x00025f0f) popup_toolbar_trans_pane_ParamLimits

0xcb9f,	// (0x0002b344) aid_size_cell_tb_trans_pane_ParamLimits

0x2f9f,	// (0x00021744) bg_tb_trans_pane_ParamLimits

0xcbb1,	// (0x0002b356) grid_tb_trans_pane_ParamLimits

0x13c3,	// (0x0001fb68) cont_note_pane_ParamLimits

0x13c3,	// (0x0001fb68) cont_note_pane

0x2c93,	// (0x00021438) cont_snote2_single_text_pane_ParamLimits

0x2c93,	// (0x00021438) cont_snote2_single_text_pane

0x2c93,	// (0x00021438) cont_snote2_single_graphic_pane_ParamLimits

0x2c93,	// (0x00021438) cont_snote2_single_graphic_pane

0x9fd9,	// (0x0002877e) cont_note_wait_pane_ParamLimits

0x9fd9,	// (0x0002877e) cont_note_wait_pane

0x9fd9,	// (0x0002877e) cont_note_image_pane_ParamLimits

0x9fd9,	// (0x0002877e) cont_note_image_pane

0xcc59,	// (0x0002b3fe) popup_note2_window_g1_ParamLimits

0xcc59,	// (0x0002b3fe) popup_note2_window_g1

0xcc8a,	// (0x0002b42f) popup_note2_window_t1_ParamLimits

0xcc8a,	// (0x0002b42f) popup_note2_window_t1

0xcccf,	// (0x0002b474) popup_note2_window_t2_ParamLimits

0xcccf,	// (0x0002b474) popup_note2_window_t2

0xcd14,	// (0x0002b4b9) popup_note2_window_t3_ParamLimits

0xcd14,	// (0x0002b4b9) popup_note2_window_t3

0xcd59,	// (0x0002b4fe) popup_note2_window_t4_ParamLimits

0xcd59,	// (0x0002b4fe) popup_note2_window_t4

0x2a8d,	// (0x00021232) popup_note2_window_t5_ParamLimits

0x2a8d,	// (0x00021232) popup_note2_window_t5

0x0004,

0xfc48,	// (0x0002e3ed) popup_note2_window_t_ParamLimits

0xfc48,	// (0x0002e3ed) popup_note2_window_t

0xcd88,	// (0x0002b52d) popup_note2_image_window_g1_ParamLimits

0xcd88,	// (0x0002b52d) popup_note2_image_window_g1

0xcd94,	// (0x0002b539) popup_note2_image_window_g2_ParamLimits

0xcd94,	// (0x0002b539) popup_note2_image_window_g2

0x0001,

0xfc53,	// (0x0002e3f8) popup_note2_image_window_g_ParamLimits

0xfc53,	// (0x0002e3f8) popup_note2_image_window_g

0xcda6,	// (0x0002b54b) popup_note2_image_window_t1_ParamLimits

0xcda6,	// (0x0002b54b) popup_note2_image_window_t1

0xcdbe,	// (0x0002b563) popup_note2_image_window_t2_ParamLimits

0xcdbe,	// (0x0002b563) popup_note2_image_window_t2

0xcdd6,	// (0x0002b57b) popup_note2_image_window_t3_ParamLimits

0xcdd6,	// (0x0002b57b) popup_note2_image_window_t3

0x0002,

0xfc58,	// (0x0002e3fd) popup_note2_image_window_t_ParamLimits

0xfc58,	// (0x0002e3fd) popup_note2_image_window_t

0x9fe7,	// (0x0002878c) popup_note2_wait_window_g1_ParamLimits

0x9fe7,	// (0x0002878c) popup_note2_wait_window_g1

0xcdf2,	// (0x0002b597) popup_note2_wait_window_g2_ParamLimits

0xcdf2,	// (0x0002b597) popup_note2_wait_window_g2

0x9fff,	// (0x000287a4) popup_note2_wait_window_g3_ParamLimits

0x9fff,	// (0x000287a4) popup_note2_wait_window_g3

0x0002,

0xfc5f,	// (0x0002e404) popup_note2_wait_window_g_ParamLimits

0xfc5f,	// (0x0002e404) popup_note2_wait_window_g

0xcdfe,	// (0x0002b5a3) popup_note2_wait_window_t1_ParamLimits

0xcdfe,	// (0x0002b5a3) popup_note2_wait_window_t1

0xce1c,	// (0x0002b5c1) popup_note2_wait_window_t2_ParamLimits

0xce1c,	// (0x0002b5c1) popup_note2_wait_window_t2

0xce3a,	// (0x0002b5df) popup_note2_wait_window_t3_ParamLimits

0xce3a,	// (0x0002b5df) popup_note2_wait_window_t3

0xce4c,	// (0x0002b5f1) popup_note2_wait_window_t4_ParamLimits

0xce4c,	// (0x0002b5f1) popup_note2_wait_window_t4

0x0003,

0xfc66,	// (0x0002e40b) popup_note2_wait_window_t_ParamLimits

0xfc66,	// (0x0002e40b) popup_note2_wait_window_t

0xce5e,	// (0x0002b603) wait_bar2_pane_ParamLimits

0xce5e,	// (0x0002b603) wait_bar2_pane

0xce76,	// (0x0002b61b) popup_snote2_single_text_window_g1_ParamLimits

0xce76,	// (0x0002b61b) popup_snote2_single_text_window_g1

0xce9e,	// (0x0002b643) popup_snote2_single_text_window_t1_ParamLimits

0xce9e,	// (0x0002b643) popup_snote2_single_text_window_t1

0xceea,	// (0x0002b68f) popup_snote2_single_text_window_t2_ParamLimits

0xceea,	// (0x0002b68f) popup_snote2_single_text_window_t2

0xcf36,	// (0x0002b6db) popup_snote2_single_text_window_t3_ParamLimits

0xcf36,	// (0x0002b6db) popup_snote2_single_text_window_t3

0xcf77,	// (0x0002b71c) popup_snote2_single_text_window_t4_ParamLimits

0xcf77,	// (0x0002b71c) popup_snote2_single_text_window_t4

0xcfad,	// (0x0002b752) popup_snote2_single_text_window_t5_ParamLimits

0xcfad,	// (0x0002b752) popup_snote2_single_text_window_t5

0x0004,

0xfc6f,	// (0x0002e414) popup_snote2_single_text_window_t_ParamLimits

0xfc6f,	// (0x0002e414) popup_snote2_single_text_window_t

0xcfd8,	// (0x0002b77d) popup_snote2_single_graphic_window_g1_ParamLimits

0xcfd8,	// (0x0002b77d) popup_snote2_single_graphic_window_g1

0xd000,	// (0x0002b7a5) popup_snote2_single_graphic_window_g2_ParamLimits

0xd000,	// (0x0002b7a5) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7a,	// (0x0002e41f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7a,	// (0x0002e41f) popup_snote2_single_graphic_window_g

0xd028,	// (0x0002b7cd) popup_snote2_single_graphic_window_t1_ParamLimits

0xd028,	// (0x0002b7cd) popup_snote2_single_graphic_window_t1

0xd074,	// (0x0002b819) popup_snote2_single_graphic_window_t2_ParamLimits

0xd074,	// (0x0002b819) popup_snote2_single_graphic_window_t2

0xcf36,	// (0x0002b6db) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf36,	// (0x0002b6db) popup_snote2_single_graphic_window_t3

0xcf77,	// (0x0002b71c) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf77,	// (0x0002b71c) popup_snote2_single_graphic_window_t4

0xcfad,	// (0x0002b752) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfad,	// (0x0002b752) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7f,	// (0x0002e424) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7f,	// (0x0002e424) popup_snote2_single_graphic_window_t

0xbabb,	// (0x0002a260) clock_nsta_pane_cp2_t1

0xbabb,	// (0x0002a260) clock_nsta_pane_cp2_t2

0x0001,

0xfa9f,	// (0x0002e244) clock_nsta_pane_cp2_t

0x500c,	// (0x000237b1) form_field_data_wide_pane_g1_ParamLimits

0x2fc5,	// (0x0002176a) form_field_data_wide_pane_g2_ParamLimits

0x2fc5,	// (0x0002176a) form_field_data_wide_pane_g2

0x2fd1,	// (0x00021776) form_field_data_wide_pane_g3_ParamLimits

0x2fd1,	// (0x00021776) form_field_data_wide_pane_g3

0x0002,

0xf654,	// (0x0002ddf9) form_field_data_wide_pane_g_ParamLimits

0xf654,	// (0x0002ddf9) form_field_data_wide_pane_g

0xb996,	// (0x0002a13b) grid_touch_3_pane_ParamLimits

0xb996,	// (0x0002a13b) grid_touch_3_pane

0xd0c0,	// (0x0002b865) cell_touch_3_pane_ParamLimits

0xd0c0,	// (0x0002b865) cell_touch_3_pane

0xbfb0,	// (0x0002a755) cell_touch_3_pane_g1

0xbfb0,	// (0x0002a755) cell_touch_3_pane_g2

0x0001,

0xfb24,	// (0x0002e2c9) cell_touch_3_pane_g

0x2ae5,	// (0x0002128a) cont_query_data_pane

0x2aed,	// (0x00021292) cont_query_data_pane_cp1

0xd0f3,	// (0x0002b898) button_value_adjust_pane_cp7

0xd0fb,	// (0x0002b8a0) query_popup_pane_cp3

0x6cce,	// (0x00025473) bg_popup_sub_pane_cp22_ParamLimits

0x6ce4,	// (0x00025489) navi_navi_volume_pane_cp2

0x6cff,	// (0x000254a4) popup_side_volume_key_window_g2

0x6d0e,	// (0x000254b3) popup_side_volume_key_window_g3

0x0002,

0xf6ea,	// (0x0002de8f) popup_side_volume_key_window_g

0x6d2b,	// (0x000254d0) popup_side_volume_key_window_t2

0x0001,

0xf6f1,	// (0x0002de96) popup_side_volume_key_window_t

0x8e9c,	// (0x00027641) popup_side_volume_key_window_ParamLimits

0x4c4b,	// (0x000233f0) list_double_graphic_pane_g4_ParamLimits

0x4c4b,	// (0x000233f0) list_double_graphic_pane_g4

0x5461,	// (0x00023c06) list_single_2heading_msg_pane_ParamLimits

0x5461,	// (0x00023c06) list_single_2heading_msg_pane

0x5a7a,	// (0x0002421f) list_single_2heading_msg_pane_g1_ParamLimits

0x5a7a,	// (0x0002421f) list_single_2heading_msg_pane_g1

0x4a7a,	// (0x0002321f) list_single_2heading_msg_pane_g2_ParamLimits

0x4a7a,	// (0x0002321f) list_single_2heading_msg_pane_g2

0x5a86,	// (0x0002422b) list_single_2heading_msg_pane_g3_ParamLimits

0x5a86,	// (0x0002422b) list_single_2heading_msg_pane_g3

0x5a92,	// (0x00024237) list_single_2heading_msg_pane_g4_ParamLimits

0x5a92,	// (0x00024237) list_single_2heading_msg_pane_g4

0x0003,

0xfc8a,	// (0x0002e42f) list_single_2heading_msg_pane_g_ParamLimits

0xfc8a,	// (0x0002e42f) list_single_2heading_msg_pane_g

0x5aaa,	// (0x0002424f) list_single_2heading_msg_pane_t1_ParamLimits

0x5aaa,	// (0x0002424f) list_single_2heading_msg_pane_t1

0x5ad2,	// (0x00024277) list_single_2heading_msg_pane_t2_ParamLimits

0x5ad2,	// (0x00024277) list_single_2heading_msg_pane_t2

0x5b06,	// (0x000242ab) list_single_2heading_msg_pane_t3_ParamLimits

0x5b06,	// (0x000242ab) list_single_2heading_msg_pane_t3

0x5b3f,	// (0x000242e4) list_single_2heading_msg_pane_t4_ParamLimits

0x5b3f,	// (0x000242e4) list_single_2heading_msg_pane_t4

0x0003,

0xfc93,	// (0x0002e438) list_single_2heading_msg_pane_t_ParamLimits

0xfc93,	// (0x0002e438) list_single_2heading_msg_pane_t

0x1224,	// (0x0001f9c9) title_pane_g4_ParamLimits

0x1224,	// (0x0001f9c9) title_pane_g4

0x66ce,	// (0x00024e73) title_pane_stacon_g3_ParamLimits

0x66ce,	// (0x00024e73) title_pane_stacon_g3

0xcc1c,	// (0x0002b3c1) list_single_2graphic_im_pane_g4_ParamLimits

0xcc1c,	// (0x0002b3c1) list_single_2graphic_im_pane_g4

0xaa49,	// (0x000291ee) popup_side_volume_key_window_cp

0xb2a6,	// (0x00029a4b) main_idle_act2_pane_t1

0x786e,	// (0x00026013) toolbar_button_pane_g10

0x6385,	// (0x00024b2a) popup_toolbar_window_cp1

0xbaac,	// (0x0002a251) clock_nsta_pane_cp_t1

0xbaac,	// (0x0002a251) clock_nsta_pane_cp_t2

0x0001,

0xfa9a,	// (0x0002e23f) clock_nsta_pane_cp_t

0x6ce4,	// (0x00025489) navi_navi_volume_pane_cp2_ParamLimits

0x6cf3,	// (0x00025498) popup_side_volume_key_window_g1_ParamLimits

0x6cff,	// (0x000254a4) popup_side_volume_key_window_g2_ParamLimits

0x6d0e,	// (0x000254b3) popup_side_volume_key_window_g3_ParamLimits

0xf6ea,	// (0x0002de8f) popup_side_volume_key_window_g_ParamLimits

0x7ce3,	// (0x00026488) fep_hwr_aid_pane

0x11d6,	// (0x0001f97b) bg_fep_hwr_top_pane_g4_ParamLimits

0xc011,	// (0x0002a7b6) fep_hwr_top_pane_g1_ParamLimits

0xc023,	// (0x0002a7c8) fep_hwr_top_pane_g2_ParamLimits

0x7d9e,	// (0x00026543) fep_hwr_top_pane_g3_ParamLimits

0xfaef,	// (0x0002e294) fep_hwr_top_pane_g_ParamLimits

0x7db3,	// (0x00026558) fep_hwr_top_text_pane_ParamLimits

0xa7fe,	// (0x00028fa3) aid_touch_tab_arrow_arrow_2

0xa807,	// (0x00028fac) aid_touch_tab_arrow_left_2

0x7cf7,	// (0x0002649c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7d2e,	// (0x000264d3) fep_hwr_prediction_pane

0xc179,	// (0x0002a91e) fep_vkb_prediction_pane

0xc27f,	// (0x0002aa24) fep_vkb_side_pane_g3_ParamLimits

0xc27f,	// (0x0002aa24) fep_vkb_side_pane_g3

0xc22b,	// (0x0002a9d0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc6f9,	// (0x0002ae9e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc706,	// (0x0002aeab) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb99,	// (0x0002e33e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd122,	// (0x0002b8c7) fep_hwr_prediction_pane_g1

0x8059,	// (0x000267fe) fep_hwr_prediction_pane_g2

0x8061,	// (0x00026806) fep_hwr_prediction_pane_g3

0x8069,	// (0x0002680e) fep_hwr_prediction_pane_g4

0x0003,

0xfc9c,	// (0x0002e441) fep_hwr_prediction_pane_g

0xd122,	// (0x0002b8c7) fep_vkb_prediction_pane_g1

0xd12c,	// (0x0002b8d1) fep_vkb_prediction_pane_g2

0xd134,	// (0x0002b8d9) fep_vkb_prediction_pane_g3

0xd13c,	// (0x0002b8e1) fep_vkb_prediction_pane_g4

0x0003,

0xfca5,	// (0x0002e44a) fep_vkb_prediction_pane_g

0x7b63,	// (0x00026308) slider_set_pane_g3

0x7b77,	// (0x0002631c) slider_set_pane_g4

0x7b8f,	// (0x00026334) slider_set_pane_g5

0x7b63,	// (0x00026308) slider_set_pane_g6

0x7ba5,	// (0x0002634a) slider_set_pane_g7

0xaebf,	// (0x00029664) slider_form_pane_g3

0xaec8,	// (0x0002966d) slider_form_pane_g4

0xaed0,	// (0x00029675) slider_form_pane_g5

0xaebf,	// (0x00029664) slider_form_pane_g6

0xaed8,	// (0x0002967d) slider_form_pane_g7

0xb56a,	// (0x00029d0f) slider_set_pane_vc_g3

0xb573,	// (0x00029d18) slider_set_pane_vc_g4

0xb57c,	// (0x00029d21) slider_set_pane_vc_g5

0xb56a,	// (0x00029d0f) slider_set_pane_vc_g6

0xb585,	// (0x00029d2a) slider_set_pane_vc_g7

0xb75b,	// (0x00029f00) slider_form_pane_vc_g1

0xb764,	// (0x00029f09) slider_form_pane_vc_g2

0xb76d,	// (0x00029f12) slider_form_pane_vc_g3

0xb75b,	// (0x00029f00) slider_form_pane_vc_g4

0xb776,	// (0x00029f1b) slider_form_pane_vc_g5

0x0004,

0xfa6c,	// (0x0002e211) slider_form_pane_vc_g

0x1206,	// (0x0001f9ab) main_idle_act3_pane

0xd144,	// (0x0002b8e9) ai3_links_pane

0xd14d,	// (0x0002b8f2) popup_ai3_data_window_ParamLimits

0xd14d,	// (0x0002b8f2) popup_ai3_data_window

0x1206,	// (0x0001f9ab) grid_ai3_links_pane

0xd16b,	// (0x0002b910) cell_ai3_links_pane_ParamLimits

0xd16b,	// (0x0002b910) cell_ai3_links_pane

0xd185,	// (0x0002b92a) bg_popup_sub_pane_cp11

0xd192,	// (0x0002b937) cell_ai3_links_pane_g1

0x1206,	// (0x0001f9ab) bg_popup_sub_pane_cp12

0xd1b7,	// (0x0002b95c) heading_ai3_data_pane

0xd1bf,	// (0x0002b964) list_ai3_gene_pane

0xd1cb,	// (0x0002b970) popup_ai3_data_window_g1

0xd1d3,	// (0x0002b978) heading_ai3_data_pane_g1

0xd1db,	// (0x0002b980) heading_ai3_data_pane_t1

0xd1e9,	// (0x0002b98e) list_double_ai3_gene_pane_ParamLimits

0xd1e9,	// (0x0002b98e) list_double_ai3_gene_pane

0xd1f6,	// (0x0002b99b) list_single_ai3_gene_pane_ParamLimits

0xd1f6,	// (0x0002b99b) list_single_ai3_gene_pane

0xbf75,	// (0x0002a71a) list_highlight_pane_cp7_ParamLimits

0xbf75,	// (0x0002a71a) list_highlight_pane_cp7

0xd203,	// (0x0002b9a8) list_single_a13_gene_pane_t1_ParamLimits

0xd203,	// (0x0002b9a8) list_single_a13_gene_pane_t1

0xd21a,	// (0x0002b9bf) list_single_ai3_gene_pane_g1

0xd223,	// (0x0002b9c8) list_single_ai3_gene_pane_g2

0x0001,

0xfcae,	// (0x0002e453) list_single_ai3_gene_pane_g

0xd22b,	// (0x0002b9d0) list_double_ai3_gene_pane_g1_ParamLimits

0xd22b,	// (0x0002b9d0) list_double_ai3_gene_pane_g1

0xd237,	// (0x0002b9dc) list_double_ai3_gene_pane_t1_ParamLimits

0xd237,	// (0x0002b9dc) list_double_ai3_gene_pane_t1

0xd253,	// (0x0002b9f8) list_double_ai3_gene_pane_t2_ParamLimits

0xd253,	// (0x0002b9f8) list_double_ai3_gene_pane_t2

0xd268,	// (0x0002ba0d) list_double_ai3_gene_pane_t3_ParamLimits

0xd268,	// (0x0002ba0d) list_double_ai3_gene_pane_t3

0x0002,

0xfcb3,	// (0x0002e458) list_double_ai3_gene_pane_t_ParamLimits

0xfcb3,	// (0x0002e458) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5a70,	// (0x00024215) aid_size_min_col_2

0xd10c,	// (0x0002b8b1) aid_size_min_msg_ParamLimits

0xd10c,	// (0x0002b8b1) aid_size_min_msg

0xc38b,	// (0x0002ab30) fep_vkb_top_text_pane_g2_ParamLimits

0xc38b,	// (0x0002ab30) fep_vkb_top_text_pane_g2

0x0001,

0xfb1f,	// (0x0002e2c4) fep_vkb_top_text_pane_g_ParamLimits

0xfb1f,	// (0x0002e2c4) fep_vkb_top_text_pane_g

0x1206,	// (0x0001f9ab) main_hc_apps_shell_pane

0xd285,	// (0x0002ba2a) grid_hc_apps_pane_ParamLimits

0xd285,	// (0x0002ba2a) grid_hc_apps_pane

0xd297,	// (0x0002ba3c) list_hc_apps_pane

0xd29f,	// (0x0002ba44) scroll_pane_cp37_ParamLimits

0xd29f,	// (0x0002ba44) scroll_pane_cp37

0xd2ab,	// (0x0002ba50) cell_hc_apps_pane_ParamLimits

0xd2ab,	// (0x0002ba50) cell_hc_apps_pane

0xd35f,	// (0x0002bb04) cell_hc_apps_pane_g1_ParamLimits

0xd35f,	// (0x0002bb04) cell_hc_apps_pane_g1

0xd38b,	// (0x0002bb30) cell_hc_apps_pane_g2_ParamLimits

0xd38b,	// (0x0002bb30) cell_hc_apps_pane_g2

0xd3a7,	// (0x0002bb4c) cell_hc_apps_pane_g3_ParamLimits

0xd3a7,	// (0x0002bb4c) cell_hc_apps_pane_g3

0x0002,

0xfcba,	// (0x0002e45f) cell_hc_apps_pane_g_ParamLimits

0xfcba,	// (0x0002e45f) cell_hc_apps_pane_g

0xd3c9,	// (0x0002bb6e) cell_hc_apps_pane_t1_ParamLimits

0xd3c9,	// (0x0002bb6e) cell_hc_apps_pane_t1

0x13c3,	// (0x0001fb68) grid_highlight_pane_cp10_ParamLimits

0x13c3,	// (0x0001fb68) grid_highlight_pane_cp10

0xd409,	// (0x0002bbae) list_single_hc_apps_pane_ParamLimits

0xd409,	// (0x0002bbae) list_single_hc_apps_pane

0xd448,	// (0x0002bbed) list_single_hc_apps_pane_g1

0x5b64,	// (0x00024309) list_single_hc_apps_pane_g2

0x0001,

0xfcc1,	// (0x0002e466) list_single_hc_apps_pane_g

0x5b7d,	// (0x00024322) list_single_hc_apps_pane_g2_copy1

0x5b99,	// (0x0002433e) list_single_hc_apps_pane_t1

0x1276,	// (0x0001fa1b) bg_set_opt_pane_cp_ParamLimits

0x60da,	// (0x0002487f) setting_slider_pane_t1_ParamLimits

0x60f3,	// (0x00024898) setting_slider_pane_t2_ParamLimits

0x610d,	// (0x000248b2) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0002dcdc) setting_slider_pane_t_ParamLimits

0x6125,	// (0x000248ca) slider_set_pane_ParamLimits

0x7113,	// (0x000258b8) control_pane_g5_ParamLimits

0x7113,	// (0x000258b8) control_pane_g5

0xacf2,	// (0x00029497) slider_set_pane_g1_ParamLimits

0x7b57,	// (0x000262fc) slider_set_pane_g2_ParamLimits

0x7b63,	// (0x00026308) slider_set_pane_g3_ParamLimits

0x7b77,	// (0x0002631c) slider_set_pane_g4_ParamLimits

0x7b8f,	// (0x00026334) slider_set_pane_g5_ParamLimits

0x7b63,	// (0x00026308) slider_set_pane_g6_ParamLimits

0x7ba5,	// (0x0002634a) slider_set_pane_g7_ParamLimits

0xf93d,	// (0x0002e0e2) slider_set_pane_g_ParamLimits

0x8f81,	// (0x00027726) navi_icon_text_pane_ParamLimits

0x9495,	// (0x00027c3a) aid_fill_nsta_2_ParamLimits

0x94d4,	// (0x00027c79) aid_touch_tab_arrow_left_ParamLimits

0x94e0,	// (0x00027c85) aid_touch_tab_arrow_right_ParamLimits

0x954c,	// (0x00027cf1) clock_nsta_pane_ParamLimits

0xa7e0,	// (0x00028f85) navi_icon_pane_g1_ParamLimits

0xa7ec,	// (0x00028f91) navi_text_pane_t1_ParamLimits

0xbbc9,	// (0x0002a36e) navi_icon_text_pane_g1_ParamLimits

0xbbd5,	// (0x0002a37a) navi_icon_text_pane_t1_ParamLimits

0xd448,	// (0x0002bbed) list_single_hc_apps_pane_g1_ParamLimits

0x5b64,	// (0x00024309) list_single_hc_apps_pane_g2_ParamLimits

0xfcc1,	// (0x0002e466) list_single_hc_apps_pane_g_ParamLimits

0x5b7d,	// (0x00024322) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5b99,	// (0x0002433e) list_single_hc_apps_pane_t1_ParamLimits

0x5f0e,	// (0x000246b3) popup_toolbar2_fixed_window_ParamLimits

0x5f0e,	// (0x000246b3) popup_toolbar2_fixed_window

0x7760,	// (0x00025f05) popup_toolbar2_float_window

0x1206,	// (0x0001f9ab) bg_popup_sub_pane_cp27

0xd461,	// (0x0002bc06) grid_toolbar2_float_pane

0x1206,	// (0x0001f9ab) bg_popup_sub_pane_cp26

0xd461,	// (0x0002bc06) grid_toolbar2_fixed_pane

0xd469,	// (0x0002bc0e) cell_toolbar2_fixed_pane_ParamLimits

0xd469,	// (0x0002bc0e) cell_toolbar2_fixed_pane

0xd479,	// (0x0002bc1e) cell_toolbar2_fixed_pane_g1

0xd482,	// (0x0002bc27) toolbar2_fixed_button_pane

0x9973,	// (0x00028118) toolbar2_fixed_button_pane_g1

0x997b,	// (0x00028120) toolbar2_fixed_button_pane_g2

0x9983,	// (0x00028128) toolbar2_fixed_button_pane_g3

0x998b,	// (0x00028130) toolbar2_fixed_button_pane_g4

0x9993,	// (0x00028138) toolbar2_fixed_button_pane_g5

0x999b,	// (0x00028140) toolbar2_fixed_button_pane_g6

0x99a3,	// (0x00028148) toolbar2_fixed_button_pane_g7

0x99ab,	// (0x00028150) toolbar2_fixed_button_pane_g8

0x99b3,	// (0x00028158) toolbar2_fixed_button_pane_g9

0x0008,

0xf83f,	// (0x0002dfe4) toolbar2_fixed_button_pane_g

0xd48a,	// (0x0002bc2f) cell_toolbar2_float_pane_ParamLimits

0xd48a,	// (0x0002bc2f) cell_toolbar2_float_pane

0xd49b,	// (0x0002bc40) cell_toolbar2_float_pane_g1

0xd482,	// (0x0002bc27) toolbar2_fixed_button_pane_cp

0xc0e7,	// (0x0002a88c) fep_vkb_accented_list_pane_ParamLimits

0xc0e7,	// (0x0002a88c) fep_vkb_accented_list_pane

0x7f15,	// (0x000266ba) bg_popup_fep_shadow_pane_g9

0x9114,	// (0x000278b9) bg_popup_fep_shadow_pane_cp3

0x645c,	// (0x00024c01) list_accented_list_pane

0xd4a4,	// (0x0002bc49) list_single_accented_list_pane_ParamLimits

0xd4a4,	// (0x0002bc49) list_single_accented_list_pane

0x9114,	// (0x000278b9) list_highlight_pane_cp10

0xd4b5,	// (0x0002bc5a) list_single_accented_list_pane_t1

0x76a6,	// (0x00025e4b) popup_slider_window_ParamLimits

0x76a6,	// (0x00025e4b) popup_slider_window

0xd103,	// (0x0002b8a8) aid_indentation_list_msg

0xd585,	// (0x0002bd2a) bg_popup_window_pane_cp19

0xd5f1,	// (0x0002bd96) popup_slider_window_g1

0xd60d,	// (0x0002bdb2) popup_slider_window_g2

0xd629,	// (0x0002bdce) popup_slider_window_g3

0x0005,

0xfcc6,	// (0x0002e46b) popup_slider_window_g

0xd68f,	// (0x0002be34) popup_slider_window_t1

0xd703,	// (0x0002bea8) small_volume_slider_vertical_pane

0xbfb0,	// (0x0002a755) small_volume_slider_vertical_pane_g1

0xbfb0,	// (0x0002a755) small_volume_slider_vertical_pane_g2

0xd71f,	// (0x0002bec4) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd8,	// (0x0002e47d) small_volume_slider_vertical_pane_g

0x5cc0,	// (0x00024465) area_side_right_pane_ParamLimits

0x5cc0,	// (0x00024465) area_side_right_pane

0x8071,	// (0x00026816) aid_size_side_button_ParamLimits

0x8071,	// (0x00026816) aid_size_side_button

0x8085,	// (0x0002682a) grid_sctrl_middle_pane_ParamLimits

0x8085,	// (0x0002682a) grid_sctrl_middle_pane

0x80a4,	// (0x00026849) sctrl_sk_bottom_pane

0x80b5,	// (0x0002685a) sctrl_sk_top_pane

0x80c7,	// (0x0002686c) aid_touch_sctrl_top

0x13c3,	// (0x0001fb68) bg_sctrl_sk_pane_ParamLimits

0x13c3,	// (0x0001fb68) bg_sctrl_sk_pane

0x80d4,	// (0x00026879) sctrl_sk_top_pane_g1

0x80e1,	// (0x00026886) sctrl_sk_top_pane_t1

0x80c7,	// (0x0002686c) aid_touch_sctrl_bottom

0x13c3,	// (0x0001fb68) bg_sctrl_sk_pane_cp_ParamLimits

0x13c3,	// (0x0001fb68) bg_sctrl_sk_pane_cp

0x80fc,	// (0x000268a1) sctrl_sk_bottom_pane_g1

0x80e1,	// (0x00026886) sctrl_sk_bottom_pane_t1

0x8105,	// (0x000268aa) cell_sctrl_middle_pane_ParamLimits

0x8105,	// (0x000268aa) cell_sctrl_middle_pane

0x8122,	// (0x000268c7) aid_touch_sctrl_middle_ParamLimits

0x8122,	// (0x000268c7) aid_touch_sctrl_middle

0x2f9f,	// (0x00021744) bg_sctrl_middle_pane_ParamLimits

0x2f9f,	// (0x00021744) bg_sctrl_middle_pane

0xc22b,	// (0x0002a9d0) cell_sctrl_middle_pane_g1_ParamLimits

0xc22b,	// (0x0002a9d0) cell_sctrl_middle_pane_g1

0x8134,	// (0x000268d9) cell_sctrl_middle_pane_g2_ParamLimits

0x8134,	// (0x000268d9) cell_sctrl_middle_pane_g2

0x0001,

0xfce4,	// (0x0002e489) cell_sctrl_middle_pane_g_ParamLimits

0xfce4,	// (0x0002e489) cell_sctrl_middle_pane_g

0x9973,	// (0x00028118) bg_sctrl_middle_pane_g1

0x997b,	// (0x00028120) bg_sctrl_middle_pane_g2

0x9983,	// (0x00028128) bg_sctrl_middle_pane_g3

0x998b,	// (0x00028130) bg_sctrl_middle_pane_g4

0x9993,	// (0x00028138) bg_sctrl_middle_pane_g5

0x999b,	// (0x00028140) bg_sctrl_middle_pane_g6

0x99a3,	// (0x00028148) bg_sctrl_middle_pane_g7

0x99ab,	// (0x00028150) bg_sctrl_middle_pane_g8

0x0007,

0xfce9,	// (0x0002e48e) bg_sctrl_middle_pane_g

0x99b3,	// (0x00028158) bg_sctrl_middle_pane_g8_copy1

0x9973,	// (0x00028118) bg_sctrl_sk_pane_g1

0x997b,	// (0x00028120) bg_sctrl_sk_pane_g2

0x9983,	// (0x00028128) bg_sctrl_sk_pane_g3

0x0008,

0xf83f,	// (0x0002dfe4) bg_sctrl_sk_pane_g

0x2e51,	// (0x000215f6) aid_size_touch_scroll_bar

0x998b,	// (0x00028130) bg_sctrl_sk_pane_g4

0x9993,	// (0x00028138) bg_sctrl_sk_pane_g5

0x999b,	// (0x00028140) bg_sctrl_sk_pane_g6

0x99a3,	// (0x00028148) bg_sctrl_sk_pane_g7

0x99ab,	// (0x00028150) bg_sctrl_sk_pane_g8

0x99b3,	// (0x00028158) bg_sctrl_sk_pane_g9

0x72bb,	// (0x00025a60) popup_fep_china_hwr2_fs_candidate_window

0x72c5,	// (0x00025a6a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x72c5,	// (0x00025a6a) popup_fep_china_hwr2_fs_control_window

0xc22b,	// (0x0002a9d0) sctrl_sk_top_pane_g2

0x0001,

0xfcdf,	// (0x0002e484) sctrl_sk_top_pane_g

0xd728,	// (0x0002becd) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd728,	// (0x0002becd) aid_fep_china_hwr2_fs_cell

0xd73b,	// (0x0002bee0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd73b,	// (0x0002bee0) bg_popup_fep_shadow_pane_cp4

0xd754,	// (0x0002bef9) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd754,	// (0x0002bef9) bg_popup_fep_shadow_pane_cp5

0xd766,	// (0x0002bf0b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd766,	// (0x0002bf0b) popup_fep_china_hwr2_fs_control_bar_grid

0xd776,	// (0x0002bf1b) popup_fep_china_hwr2_fs_control_funtion_grid

0xd77e,	// (0x0002bf23) aid_fep_china_hwr2_fs_candi_cell

0x1206,	// (0x0001f9ab) bg_popup_fep_shadow_pane_cp6

0xd788,	// (0x0002bf2d) popup_fep_china_hwr2_fs_candidate_grid

0xd792,	// (0x0002bf37) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd792,	// (0x0002bf37) cell_fep_china_hwr2_fs_funtion_grid

0xbfb0,	// (0x0002a755) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7aa,	// (0x0002bf4f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7aa,	// (0x0002bf4f) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7b8,	// (0x0002bf5d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7b8,	// (0x0002bf5d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfa,	// (0x0002e49f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfa,	// (0x0002e49f) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7ce,	// (0x0002bf73) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7ce,	// (0x0002bf73) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7e3,	// (0x0002bf88) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7e3,	// (0x0002bf88) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcff,	// (0x0002e4a4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcff,	// (0x0002e4a4) cell_fep_china_hwr2_fs_funtion_grid_t

0xd7ff,	// (0x0002bfa4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd807,	// (0x0002bfac) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd80f,	// (0x0002bfb4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd04,	// (0x0002e4a9) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd817,	// (0x0002bfbc) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd817,	// (0x0002bfbc) cell_fep_china_hwr2_fs_candidate_grid

0xd836,	// (0x0002bfdb) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd83e,	// (0x0002bfe3) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbfb0,	// (0x0002a755) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbfb0,	// (0x0002a755) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb24,	// (0x0002e2c9) cell_fep_china_hwr2_fs_candidate_grid_g

0xd846,	// (0x0002bfeb) cell_fep_china_hwr2_fs_candidate_grid_t1

0x955f,	// (0x00027d04) clock_nsta_pane_cp_24_ParamLimits

0x955f,	// (0x00027d04) clock_nsta_pane_cp_24

0x95df,	// (0x00027d84) indicator_nsta_pane_cp_24_ParamLimits

0x95df,	// (0x00027d84) indicator_nsta_pane_cp_24

0xa65c,	// (0x00028e01) heading_pane_g1

0x0001,

0xf8a4,	// (0x0002e049) heading_pane_g

0xb0ed,	// (0x00029892) grid_sct_catagory_button_pane

0xb11f,	// (0x000298c4) scroll_pane_cp5_ParamLimits

0xbc17,	// (0x0002a3bc) button_value_adjust_pane_cp5_ParamLimits

0xbc17,	// (0x0002a3bc) button_value_adjust_pane_cp5

0xbcfc,	// (0x0002a4a1) form2_midp_time_pane_ParamLimits

0xd854,	// (0x0002bff9) cell_sct_catagory_button_pane_ParamLimits

0xd854,	// (0x0002bff9) cell_sct_catagory_button_pane

0xbf75,	// (0x0002a71a) bg_button_pane_cp01_ParamLimits

0xbf75,	// (0x0002a71a) bg_button_pane_cp01

0xbfb0,	// (0x0002a755) cell_sct_catagory_button_pane_g1

0x76e7,	// (0x00025e8c) popup_tb_extension_window

0xd866,	// (0x0002c00b) aid_size_cell_ext_ParamLimits

0xd866,	// (0x0002c00b) aid_size_cell_ext

0x13c3,	// (0x0001fb68) bg_tb_trans_pane_cp1_ParamLimits

0x13c3,	// (0x0001fb68) bg_tb_trans_pane_cp1

0xd886,	// (0x0002c02b) grid_tb_ext_pane_ParamLimits

0xd886,	// (0x0002c02b) grid_tb_ext_pane

0xd8b4,	// (0x0002c059) cell_tb_ext_pane_ParamLimits

0xd8b4,	// (0x0002c059) cell_tb_ext_pane

0xd8cb,	// (0x0002c070) cell_tb_ext_pane_g1_ParamLimits

0xd8cb,	// (0x0002c070) cell_tb_ext_pane_g1

0xd8e8,	// (0x0002c08d) cell_tb_ext_pane_t1

0x13c3,	// (0x0001fb68) list_highlight_pane_cp11_ParamLimits

0x13c3,	// (0x0001fb68) list_highlight_pane_cp11

0x5f2d,	// (0x000246d2) popup_uni_indicator_window_ParamLimits

0x5f2d,	// (0x000246d2) popup_uni_indicator_window

0x2f9f,	// (0x00021744) bg_popup_sub_pane_cp14

0xd905,	// (0x0002c0aa) list_uniindi_pane

0xd911,	// (0x0002c0b6) uniindi_top_pane

0x13c3,	// (0x0001fb68) bg_uniindi_top_pane

0xd932,	// (0x0002c0d7) uniindi_top_pane_g1

0xd948,	// (0x0002c0ed) uniindi_top_pane_g2

0x0003,

0xfd0b,	// (0x0002e4b0) uniindi_top_pane_g

0xd972,	// (0x0002c117) uniindi_top_pane_t1

0xd99e,	// (0x0002c143) list_single_uniindi_pane_ParamLimits

0xd99e,	// (0x0002c143) list_single_uniindi_pane

0xbfb0,	// (0x0002a755) bg_uniindi_top_pane_g1

0xd9b1,	// (0x0002c156) list_single_uniindi_pane_g1

0xd9c4,	// (0x0002c169) list_single_uniindi_pane_t1

0x1206,	// (0x0001f9ab) control_bg_pane

0xd9e9,	// (0x0002c18e) bg_sctrl_sk_pane_cp1

0xd9f2,	// (0x0002c197) bg_sctrl_sk_pane_cp2

0xd9fb,	// (0x0002c1a0) control_bg_pane_g1

0xda04,	// (0x0002c1a9) control_bg_pane_g2

0x0001,

0xfd14,	// (0x0002e4b9) control_bg_pane_g

0xba4f,	// (0x0002a1f4) cell_indicator_nsta_pane_g1_ParamLimits

0xba5d,	// (0x0002a202) cell_indicator_nsta_pane_g2_ParamLimits

0xfa88,	// (0x0002e22d) cell_indicator_nsta_pane_g_ParamLimits

0x5839,	// (0x00023fde) form2_midp_time_pane_t1_ParamLimits

0x2c93,	// (0x00021438) main_idle_act4_pane_ParamLimits

0x2c93,	// (0x00021438) main_idle_act4_pane

0x76e7,	// (0x00025e8c) popup_tb_extension_window_ParamLimits

0xd8a6,	// (0x0002c04b) tb_ext_find_pane_ParamLimits

0xd8a6,	// (0x0002c04b) tb_ext_find_pane

0xda0d,	// (0x0002c1b2) ai_gene_pane_1_cp1

0x925e,	// (0x00027a03) ai_gene_pane_2_cp1

0xda15,	// (0x0002c1ba) list_single_idle_plugin_calendar_pane

0xda1e,	// (0x0002c1c3) list_single_idle_plugin_notification_pane

0xda27,	// (0x0002c1cc) list_single_idle_plugin_player_pane

0xda30,	// (0x0002c1d5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda30,	// (0x0002c1d5) list_single_idle_plugin_shortcut_pane

0xda52,	// (0x0002c1f7) main_idle_act4_pane_t1

0xda64,	// (0x0002c209) main_idle_act4_pane_t2

0x0001,

0xfd19,	// (0x0002e4be) main_idle_act4_pane_t

0xda76,	// (0x0002c21b) middle_sk_idle_act4_pane_ParamLimits

0xda76,	// (0x0002c21b) middle_sk_idle_act4_pane

0xda8c,	// (0x0002c231) popup_clock_digital_analogue_window_cp2

0xdaa6,	// (0x0002c24b) shortcut_wheel_idle_act4_pane_ParamLimits

0xdaa6,	// (0x0002c24b) shortcut_wheel_idle_act4_pane

0xbfb0,	// (0x0002a755) shortcut_wheel_idle_act4_pane_g1

0xbfb0,	// (0x0002a755) shortcut_wheel_idle_act4_pane_g2

0xbfb0,	// (0x0002a755) shortcut_wheel_idle_act4_pane_g3

0xbfb0,	// (0x0002a755) shortcut_wheel_idle_act4_pane_g4

0xbfb0,	// (0x0002a755) shortcut_wheel_idle_act4_pane_g5

0xdaba,	// (0x0002c25f) shortcut_wheel_idle_act4_pane_g6

0xdac2,	// (0x0002c267) shortcut_wheel_idle_act4_pane_g7

0xdaca,	// (0x0002c26f) shortcut_wheel_idle_act4_pane_g8

0xdad2,	// (0x0002c277) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1e,	// (0x0002e4c3) shortcut_wheel_idle_act4_pane_g

0xc22b,	// (0x0002a9d0) middle_sk_idle_act4_pane_g1_ParamLimits

0xc22b,	// (0x0002a9d0) middle_sk_idle_act4_pane_g1

0xdb36,	// (0x0002c2db) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb36,	// (0x0002c2db) middle_sk_idle_act4_pane_g2

0x0001,

0xfd41,	// (0x0002e4e6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd41,	// (0x0002e4e6) middle_sk_idle_act4_pane_g

0xdb42,	// (0x0002c2e7) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb42,	// (0x0002c2e7) middle_sk_idle_act4_pane_t1

0xdb5f,	// (0x0002c304) grid_ai_shortcut_pane_ParamLimits

0xdb5f,	// (0x0002c304) grid_ai_shortcut_pane

0xdb78,	// (0x0002c31d) list_highlight_pane_cp16_ParamLimits

0xdb78,	// (0x0002c31d) list_highlight_pane_cp16

0xdb85,	// (0x0002c32a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb85,	// (0x0002c32a) list_single_idle_plugin_shortcut_pane_g1

0xdb91,	// (0x0002c336) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb91,	// (0x0002c336) list_single_idle_plugin_shortcut_pane_g2

0xdbab,	// (0x0002c350) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbab,	// (0x0002c350) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd46,	// (0x0002e4eb) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd46,	// (0x0002e4eb) list_single_idle_plugin_shortcut_pane_g

0xdbbe,	// (0x0002c363) cell_ai_shortcut_pane_ParamLimits

0xdbbe,	// (0x0002c363) cell_ai_shortcut_pane

0xdbe1,	// (0x0002c386) cell_ai_shortcut_pane_g1_ParamLimits

0xdbe1,	// (0x0002c386) cell_ai_shortcut_pane_g1

0xda0d,	// (0x0002c1b2) ai_gene_pane_1_cp2

0xdc03,	// (0x0002c3a8) ai_gene_pane_2_cp2

0xdc0b,	// (0x0002c3b0) list_highlight_pane_cp15

0xdc14,	// (0x0002c3b9) list_single_idle_plugin_calendar_pane_g1

0xdc0b,	// (0x0002c3b0) list_highlight_pane_cp17

0xdc1c,	// (0x0002c3c1) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc24,	// (0x0002c3c9) list_single_idle_plugin_player_pane_g1

0xb354,	// (0x00029af9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4d,	// (0x0002e4f2) list_single_idle_plugin_player_pane_g

0xdc2c,	// (0x0002c3d1) list_single_idle_plugin_player_pane_t1

0xdc3a,	// (0x0002c3df) list_single_idle_plugin_player_pane_t2

0xdc48,	// (0x0002c3ed) list_single_idle_plugin_player_pane_t3

0xdc56,	// (0x0002c3fb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd52,	// (0x0002e4f7) list_single_idle_plugin_player_pane_t

0xdc64,	// (0x0002c409) wait_bar_pane_cp15

0xdc6c,	// (0x0002c411) grid_ai_notification_pane

0xb354,	// (0x00029af9) list_single_idle_plugin_notification_pane_g1

0xdc75,	// (0x0002c41a) cell_ai_notification_pane_ParamLimits

0xdc75,	// (0x0002c41a) cell_ai_notification_pane

0xdc82,	// (0x0002c427) cell_ai_notification_pane_g1

0xdc8a,	// (0x0002c42f) cell_ai_notification_pane_t1

0xdc98,	// (0x0002c43d) tb_ext_find_button_pane

0xdca0,	// (0x0002c445) tb_ext_find_pane_g1

0xdca8,	// (0x0002c44d) tb_ext_find_pane_t1

0x6b4f,	// (0x000252f4) tb_ext_find_button_pane_g1

0xdcb6,	// (0x0002c45b) tb_ext_find_button_pane_g2

0x0001,

0xfd5b,	// (0x0002e500) tb_ext_find_button_pane_g

0xda52,	// (0x0002c1f7) main_idle_act4_pane_t1_ParamLimits

0xda64,	// (0x0002c209) main_idle_act4_pane_t2_ParamLimits

0xfd19,	// (0x0002e4be) main_idle_act4_pane_t_ParamLimits

0xda8c,	// (0x0002c231) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda9a,	// (0x0002c23f) sat_plugin_idle_act4_pane_ParamLimits

0xda9a,	// (0x0002c23f) sat_plugin_idle_act4_pane

0xdcbf,	// (0x0002c464) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcbf,	// (0x0002c464) sat_plugin_idle_act4_pane_t1

0xdcd2,	// (0x0002c477) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcd2,	// (0x0002c477) sat_plugin_idle_act4_pane_t2

0xdce5,	// (0x0002c48a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdce5,	// (0x0002c48a) sat_plugin_idle_act4_pane_t3

0xdcf8,	// (0x0002c49d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdcf8,	// (0x0002c49d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd60,	// (0x0002e505) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd60,	// (0x0002e505) sat_plugin_idle_act4_pane_t

0x5e5e,	// (0x00024603) popup_battery_window_ParamLimits

0x5e5e,	// (0x00024603) popup_battery_window

0x13c3,	// (0x0001fb68) bg_popup_sub_pane_cp25_ParamLimits

0x13c3,	// (0x0001fb68) bg_popup_sub_pane_cp25

0xdd0b,	// (0x0002c4b0) popup_battery_window_g1_ParamLimits

0xdd0b,	// (0x0002c4b0) popup_battery_window_g1

0xdd17,	// (0x0002c4bc) popup_battery_window_t1_ParamLimits

0xdd17,	// (0x0002c4bc) popup_battery_window_t1

0xdd29,	// (0x0002c4ce) popup_battery_window_t2_ParamLimits

0xdd29,	// (0x0002c4ce) popup_battery_window_t2

0x0001,

0xfd69,	// (0x0002e50e) popup_battery_window_t_ParamLimits

0xfd69,	// (0x0002e50e) popup_battery_window_t

0x9128,	// (0x000278cd) midp_canvas_pane_ParamLimits

0x91a0,	// (0x00027945) midp_keypad_pane_ParamLimits

0x91a0,	// (0x00027945) midp_keypad_pane

0x9443,	// (0x00027be8) main_midp_pane_ParamLimits

0xbaca,	// (0x0002a26f) signal_pane_g2_cp_ParamLimits

0xdd46,	// (0x0002c4eb) aid_size_cell_midp_keypad_ParamLimits

0xdd46,	// (0x0002c4eb) aid_size_cell_midp_keypad

0xdd60,	// (0x0002c505) midp_keyp_game_grid_pane_ParamLimits

0xdd60,	// (0x0002c505) midp_keyp_game_grid_pane

0xdd80,	// (0x0002c525) midp_keyp_rocker_pane_ParamLimits

0xdd80,	// (0x0002c525) midp_keyp_rocker_pane

0xddaf,	// (0x0002c554) midp_keyp_sk_left_pane_ParamLimits

0xddaf,	// (0x0002c554) midp_keyp_sk_left_pane

0xde0b,	// (0x0002c5b0) midp_keyp_sk_right_pane_ParamLimits

0xde0b,	// (0x0002c5b0) midp_keyp_sk_right_pane

0x1206,	// (0x0001f9ab) bg_button_pane_cp03

0xde67,	// (0x0002c60c) midp_keyp_sk_left_pane_g1

0x1206,	// (0x0001f9ab) bg_button_pane_cp04

0xde67,	// (0x0002c60c) midp_keyp_sk_right_pane_g1

0xbfb0,	// (0x0002a755) midp_keyp_rocker_pane_g1

0xde6f,	// (0x0002c614) keyp_game_cell_pane_ParamLimits

0xde6f,	// (0x0002c614) keyp_game_cell_pane

0x1206,	// (0x0001f9ab) bg_button_pane_cp02

0xde82,	// (0x0002c627) keyp_game_cell_pane_g1

0x5ea8,	// (0x0002464d) popup_fep_vkb2_window_ParamLimits

0x5ea8,	// (0x0002464d) popup_fep_vkb2_window

0x8152,	// (0x000268f7) aid_size_cell_vkb2_ParamLimits

0x8152,	// (0x000268f7) aid_size_cell_vkb2

0x819e,	// (0x00026943) popup_fep_vkb2_window_g1_ParamLimits

0x819e,	// (0x00026943) popup_fep_vkb2_window_g1

0x81e6,	// (0x0002698b) vkb2_area_bottom_pane_ParamLimits

0x81e6,	// (0x0002698b) vkb2_area_bottom_pane

0x823a,	// (0x000269df) vkb2_area_keypad_pane_ParamLimits

0x823a,	// (0x000269df) vkb2_area_keypad_pane

0x8280,	// (0x00026a25) vkb2_area_top_pane_ParamLimits

0x8280,	// (0x00026a25) vkb2_area_top_pane

0x8300,	// (0x00026aa5) vkb2_top_entry_pane_ParamLimits

0x8300,	// (0x00026aa5) vkb2_top_entry_pane

0x832a,	// (0x00026acf) vkb2_top_grid_left_pane_ParamLimits

0x832a,	// (0x00026acf) vkb2_top_grid_left_pane

0x8349,	// (0x00026aee) vkb2_top_grid_right_pane_ParamLimits

0x8349,	// (0x00026aee) vkb2_top_grid_right_pane

0x8368,	// (0x00026b0d) vkb2_cell_keypad_pane_ParamLimits

0x8368,	// (0x00026b0d) vkb2_cell_keypad_pane

0x8439,	// (0x00026bde) vkb2_area_bottom_grid_pane_ParamLimits

0x8439,	// (0x00026bde) vkb2_area_bottom_grid_pane

0x845f,	// (0x00026c04) vkb2_area_bottom_pane_g1_ParamLimits

0x845f,	// (0x00026c04) vkb2_area_bottom_pane_g1

0x8483,	// (0x00026c28) vkb2_area_bottom_pane_g2_ParamLimits

0x8483,	// (0x00026c28) vkb2_area_bottom_pane_g2

0x84b1,	// (0x00026c56) vkb2_area_bottom_pane_g3_ParamLimits

0x84b1,	// (0x00026c56) vkb2_area_bottom_pane_g3

0x0002,

0xfd6e,	// (0x0002e513) vkb2_area_bottom_pane_g_ParamLimits

0xfd6e,	// (0x0002e513) vkb2_area_bottom_pane_g

0x8512,	// (0x00026cb7) vkb2_top_cell_left_pane_ParamLimits

0x8512,	// (0x00026cb7) vkb2_top_cell_left_pane

0xde93,	// (0x0002c638) vkb2_top_entry_pane_g1_ParamLimits

0xde93,	// (0x0002c638) vkb2_top_entry_pane_g1

0xdea1,	// (0x0002c646) vkb2_top_entry_pane_t1_ParamLimits

0xdea1,	// (0x0002c646) vkb2_top_entry_pane_t1

0xded3,	// (0x0002c678) vkb2_top_entry_pane_t2_ParamLimits

0xded3,	// (0x0002c678) vkb2_top_entry_pane_t2

0xdf05,	// (0x0002c6aa) vkb2_top_entry_pane_t3_ParamLimits

0xdf05,	// (0x0002c6aa) vkb2_top_entry_pane_t3

0x0002,

0xfd75,	// (0x0002e51a) vkb2_top_entry_pane_t_ParamLimits

0xfd75,	// (0x0002e51a) vkb2_top_entry_pane_t

0x855f,	// (0x00026d04) vkb2_top_grid_right_pane_g1_ParamLimits

0x855f,	// (0x00026d04) vkb2_top_grid_right_pane_g1

0x8575,	// (0x00026d1a) vkb2_top_grid_right_pane_g2_ParamLimits

0x8575,	// (0x00026d1a) vkb2_top_grid_right_pane_g2

0x858d,	// (0x00026d32) vkb2_top_grid_right_pane_g3_ParamLimits

0x858d,	// (0x00026d32) vkb2_top_grid_right_pane_g3

0x85a5,	// (0x00026d4a) vkb2_top_grid_right_pane_g4_ParamLimits

0x85a5,	// (0x00026d4a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7c,	// (0x0002e521) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7c,	// (0x0002e521) vkb2_top_grid_right_pane_g

0x85bb,	// (0x00026d60) vkb2_top_cell_left_pane_g1

0x85d2,	// (0x00026d77) vkb2_cell_keypad_pane_g1_ParamLimits

0x85d2,	// (0x00026d77) vkb2_cell_keypad_pane_g1

0xdf29,	// (0x0002c6ce) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf29,	// (0x0002c6ce) vkb2_cell_keypad_pane_t1

0x85e0,	// (0x00026d85) vkb2_cell_bottom_grid_pane_ParamLimits

0x85e0,	// (0x00026d85) vkb2_cell_bottom_grid_pane

0x8619,	// (0x00026dbe) vkb2_cell_bottom_grid_pane_g1

0xdada,	// (0x0002c27f) aid_call2_pane_cp02

0xdae2,	// (0x0002c287) aid_call_pane_cp02

0xdaea,	// (0x0002c28f) clock_digital_number_pane_cp10

0xdaf2,	// (0x0002c297) clock_digital_number_pane_cp11

0xdafa,	// (0x0002c29f) clock_digital_number_pane_cp12

0xdb02,	// (0x0002c2a7) clock_digital_number_pane_cp13

0xdb0a,	// (0x0002c2af) clock_digital_separator_pane_cp10

0x6b4f,	// (0x000252f4) popup_clock_digital_analogue_window_cp2_g1

0x6b4f,	// (0x000252f4) popup_clock_digital_analogue_window_cp2_g2

0xdb12,	// (0x0002c2b7) popup_clock_digital_analogue_window_cp2_g3

0x6b4f,	// (0x000252f4) popup_clock_digital_analogue_window_cp2_g4

0xdb12,	// (0x0002c2b7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd31,	// (0x0002e4d6) popup_clock_digital_analogue_window_cp2_g

0xdb1a,	// (0x0002c2bf) popup_clock_digital_analogue_window_cp2_t1

0xdb28,	// (0x0002c2cd) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3c,	// (0x0002e4e1) popup_clock_digital_analogue_window_cp2_t

0xbfb0,	// (0x0002a755) clock_digital_number_pane_cp10_g1

0xbfb0,	// (0x0002a755) clock_digital_number_pane_cp10_g2

0x0001,

0xfb24,	// (0x0002e2c9) clock_digital_number_pane_cp10_g

0xbfb0,	// (0x0002a755) clock_digital_separator_pane_cp10_g1

0xbfb0,	// (0x0002a755) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb24,	// (0x0002e2c9) clock_digital_separator_pane_cp10_g

0xd954,	// (0x0002c0f9) uniindi_top_pane_g3

0xd965,	// (0x0002c10a) uniindi_top_pane_g4

0x83f3,	// (0x00026b98) vkb2_row_keypad_pane_ParamLimits

0x83f3,	// (0x00026b98) vkb2_row_keypad_pane

0x8635,	// (0x00026dda) vkb2_cell_t_keypad_pane_ParamLimits

0x8635,	// (0x00026dda) vkb2_cell_t_keypad_pane

0x8645,	// (0x00026dea) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8645,	// (0x00026dea) vkb2_cell_t_keypad_pane_cp08

0x865a,	// (0x00026dff) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x865a,	// (0x00026dff) vkb2_cell_t_keypad_pane_cp09

0x866e,	// (0x00026e13) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x866e,	// (0x00026e13) vkb2_cell_t_keypad_pane_cp01

0x867f,	// (0x00026e24) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x867f,	// (0x00026e24) vkb2_cell_t_keypad_pane_cp02

0x8690,	// (0x00026e35) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8690,	// (0x00026e35) vkb2_cell_t_keypad_pane_cp03

0x86a1,	// (0x00026e46) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x86a1,	// (0x00026e46) vkb2_cell_t_keypad_pane_cp04

0x86b2,	// (0x00026e57) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x86b2,	// (0x00026e57) vkb2_cell_t_keypad_pane_cp05

0x86c3,	// (0x00026e68) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x86c3,	// (0x00026e68) vkb2_cell_t_keypad_pane_cp06

0x86d6,	// (0x00026e7b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x86d6,	// (0x00026e7b) vkb2_cell_t_keypad_pane_cp07

0x86eb,	// (0x00026e90) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x86eb,	// (0x00026e90) vkb2_cell_t_keypad_pane_cp10

0xc22b,	// (0x0002a9d0) vkb2_cell_t_keypad_pane_g1

0xdf40,	// (0x0002c6e5) vkb2_cell_t_keypad_pane_t1

0x1206,	// (0x0001f9ab) popup_grid_graphic2_window

0xdf52,	// (0x0002c6f7) aid_size_cell_graphic2_ParamLimits

0xdf52,	// (0x0002c6f7) aid_size_cell_graphic2

0xdf8a,	// (0x0002c72f) bg_popup_window_pane_cp21_ParamLimits

0xdf8a,	// (0x0002c72f) bg_popup_window_pane_cp21

0xdf98,	// (0x0002c73d) graphic2_pages_pane_ParamLimits

0xdf98,	// (0x0002c73d) graphic2_pages_pane

0xdfde,	// (0x0002c783) grid_graphic2_control_pane_ParamLimits

0xdfde,	// (0x0002c783) grid_graphic2_control_pane

0xe01c,	// (0x0002c7c1) grid_graphic2_pane_ParamLimits

0xe01c,	// (0x0002c7c1) grid_graphic2_pane

0xe092,	// (0x0002c837) cell_graphic2_pane

0x1206,	// (0x0001f9ab) main_comp_mode_pane

0xd1bf,	// (0x0002b964) list_ai3_gene_pane_ParamLimits

0xd585,	// (0x0002bd2a) bg_popup_window_pane_cp19_ParamLimits

0xd591,	// (0x0002bd36) bg_touch_area_indi_pane_ParamLimits

0xd591,	// (0x0002bd36) bg_touch_area_indi_pane

0xd5a7,	// (0x0002bd4c) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5a7,	// (0x0002bd4c) bg_touch_area_indi_pane_cp01

0xd5bd,	// (0x0002bd62) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5bd,	// (0x0002bd62) bg_touch_area_indi_pane_cp02

0xd5d7,	// (0x0002bd7c) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5d7,	// (0x0002bd7c) bg_touch_area_indi_pane_cp03

0xd5f1,	// (0x0002bd96) popup_slider_window_g1_ParamLimits

0xd60d,	// (0x0002bdb2) popup_slider_window_g2_ParamLimits

0xd629,	// (0x0002bdce) popup_slider_window_g3_ParamLimits

0xfcc6,	// (0x0002e46b) popup_slider_window_g_ParamLimits

0xd68f,	// (0x0002be34) popup_slider_window_t1_ParamLimits

0xd703,	// (0x0002bea8) small_volume_slider_vertical_pane_ParamLimits

0xe092,	// (0x0002c837) cell_graphic2_pane_ParamLimits

0xe0e6,	// (0x0002c88b) bg_button_pane_cp10_ParamLimits

0xe0e6,	// (0x0002c88b) bg_button_pane_cp10

0xe0fb,	// (0x0002c8a0) bg_button_pane_cp11_ParamLimits

0xe0fb,	// (0x0002c8a0) bg_button_pane_cp11

0xe110,	// (0x0002c8b5) graphic2_pages_pane_g1_ParamLimits

0xe110,	// (0x0002c8b5) graphic2_pages_pane_g1

0xe12b,	// (0x0002c8d0) graphic2_pages_pane_g2_ParamLimits

0xe12b,	// (0x0002c8d0) graphic2_pages_pane_g2

0x0001,

0xfd8a,	// (0x0002e52f) graphic2_pages_pane_g_ParamLimits

0xfd8a,	// (0x0002e52f) graphic2_pages_pane_g

0xe143,	// (0x0002c8e8) graphic2_pages_pane_t1_ParamLimits

0xe143,	// (0x0002c8e8) graphic2_pages_pane_t1

0xe159,	// (0x0002c8fe) cell_graphic2_control_pane_ParamLimits

0xe159,	// (0x0002c8fe) cell_graphic2_control_pane

0xe179,	// (0x0002c91e) cell_graphic2_pane_g1_ParamLimits

0xe179,	// (0x0002c91e) cell_graphic2_pane_g1

0xe186,	// (0x0002c92b) cell_graphic2_pane_g2_ParamLimits

0xe186,	// (0x0002c92b) cell_graphic2_pane_g2

0xe193,	// (0x0002c938) cell_graphic2_pane_g3_ParamLimits

0xe193,	// (0x0002c938) cell_graphic2_pane_g3

0xe1a0,	// (0x0002c945) cell_graphic2_pane_g4_ParamLimits

0xe1a0,	// (0x0002c945) cell_graphic2_pane_g4

0xe1ad,	// (0x0002c952) cell_graphic2_pane_g5_ParamLimits

0xe1ad,	// (0x0002c952) cell_graphic2_pane_g5

0x0004,

0xfd8f,	// (0x0002e534) cell_graphic2_pane_g_ParamLimits

0xfd8f,	// (0x0002e534) cell_graphic2_pane_g

0xe1c5,	// (0x0002c96a) cell_graphic2_pane_t1_ParamLimits

0xe1c5,	// (0x0002c96a) cell_graphic2_pane_t1

0x99e7,	// (0x0002818c) grid_highlight_pane_cp11_ParamLimits

0x99e7,	// (0x0002818c) grid_highlight_pane_cp11

0x13c3,	// (0x0001fb68) bg_button_pane_cp05

0xe1fb,	// (0x0002c9a0) cell_graphic2_control_pane_g1

0xbfb0,	// (0x0002a755) bg_touch_area_indi_pane_g1

0xe223,	// (0x0002c9c8) aid_cmod_rocker_key_size

0xe22d,	// (0x0002c9d2) aid_cmode_itu_key_size

0xe237,	// (0x0002c9dc) main_cmode_video_pane

0xe241,	// (0x0002c9e6) main_comp_mode_itu_pane

0xe24d,	// (0x0002c9f2) main_comp_mode_rocker_pane

0xe259,	// (0x0002c9fe) cell_cmode_rocker_pane_ParamLimits

0xe259,	// (0x0002c9fe) cell_cmode_rocker_pane

0xe26d,	// (0x0002ca12) cell_cmode_itu_pane_ParamLimits

0xe26d,	// (0x0002ca12) cell_cmode_itu_pane

0x2f9f,	// (0x00021744) bg_button_pane_cp06_ParamLimits

0x2f9f,	// (0x00021744) bg_button_pane_cp06

0xc22b,	// (0x0002a9d0) cell_cmode_rocker_pane_g1_ParamLimits

0xc22b,	// (0x0002a9d0) cell_cmode_rocker_pane_g1

0xd7aa,	// (0x0002bf4f) cell_cmode_rocker_pane_g2_ParamLimits

0xd7aa,	// (0x0002bf4f) cell_cmode_rocker_pane_g2

0x0001,

0xfd9f,	// (0x0002e544) cell_cmode_rocker_pane_g_ParamLimits

0xfd9f,	// (0x0002e544) cell_cmode_rocker_pane_g

0x1206,	// (0x0001f9ab) bg_button_pane_cp07

0xe284,	// (0x0002ca29) cell_cmode_itu_pane_g1

0xe28d,	// (0x0002ca32) cell_cmode_itu_pane_t1

0xe29b,	// (0x0002ca40) cell_cmode_itu_pane_t2

0x0001,

0xfda4,	// (0x0002e549) cell_cmode_itu_pane_t

0xd9d9,	// (0x0002c17e) aid_touch_ctrl_left

0xd9e1,	// (0x0002c186) aid_touch_ctrl_right

0x1206,	// (0x0001f9ab) compa_mode_pane

0xe2a9,	// (0x0002ca4e) aid_cmod_rocker_key_size_cp

0xe2b3,	// (0x0002ca58) aid_cmode_itu_key_size_cp

0xe2bd,	// (0x0002ca62) compa_mode_pane_g1

0xe2c5,	// (0x0002ca6a) compa_mode_pane_g2

0xe2cd,	// (0x0002ca72) compa_mode_pane_g3

0x0002,

0xfda9,	// (0x0002e54e) compa_mode_pane_g

0xe2d5,	// (0x0002ca7a) main_comp_mode_itu_pane_cp

0xe2dd,	// (0x0002ca82) main_comp_mode_rocker_pane_cp

0xe2e5,	// (0x0002ca8a) cell_cmode_itu_pane_cp_ParamLimits

0xe2e5,	// (0x0002ca8a) cell_cmode_itu_pane_cp

0xe2fa,	// (0x0002ca9f) cell_cmode_rocker_pane_cp_ParamLimits

0xe2fa,	// (0x0002ca9f) cell_cmode_rocker_pane_cp

0x2f9f,	// (0x00021744) bg_button_pane_cp06_cp_ParamLimits

0x2f9f,	// (0x00021744) bg_button_pane_cp06_cp

0xc22b,	// (0x0002a9d0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc22b,	// (0x0002a9d0) cell_cmode_rocker_pane_g1_cp

0xbfb0,	// (0x0002a755) cell_cmode_rocker_pane_g2_cp

0x1206,	// (0x0001f9ab) bg_button_pane_cp07_cp

0xe30c,	// (0x0002cab1) cell_cmode_itu_pane_g1_cp

0xe315,	// (0x0002caba) cell_cmode_itu_pane_t1_cp

0xe315,	// (0x0002caba) cell_cmode_itu_pane_t2_cp

0xaeae,	// (0x00029653) settings_code_pane_cp2

0x1276,	// (0x0001fa1b) bg_popup_window_pane_cp3_ParamLimits

0x2c1d,	// (0x000213c2) heading_pane_cp3_ParamLimits

0x2c2c,	// (0x000213d1) listscroll_popup_graphic_pane_ParamLimits

0x7ce3,	// (0x00026488) fep_hwr_aid_pane_ParamLimits

0x80c7,	// (0x0002686c) aid_touch_sctrl_top_ParamLimits

0x80d4,	// (0x00026879) sctrl_sk_top_pane_g1_ParamLimits

0xc22b,	// (0x0002a9d0) sctrl_sk_top_pane_g2_ParamLimits

0xfcdf,	// (0x0002e484) sctrl_sk_top_pane_g_ParamLimits

0x80e1,	// (0x00026886) sctrl_sk_top_pane_t1_ParamLimits

0x80c7,	// (0x0002686c) aid_touch_sctrl_bottom_ParamLimits

0x80e1,	// (0x00026886) sctrl_sk_bottom_pane_t1_ParamLimits

0xd91e,	// (0x0002c0c3) aid_area_touch_clock

0x82c6,	// (0x00026a6b) aid_vkb2_area_top_pane_cell_ParamLimits

0x82c6,	// (0x00026a6b) aid_vkb2_area_top_pane_cell

0x8415,	// (0x00026bba) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8415,	// (0x00026bba) aid_vkb2_area_bottom_pane_cell

0xde8b,	// (0x0002c630) popup_char_count_window

0xe323,	// (0x0002cac8) popup_char_count_window_g1

0xe32c,	// (0x0002cad1) popup_char_count_window_g2

0xe335,	// (0x0002cada) popup_char_count_window_g3

0x0002,

0xfdb0,	// (0x0002e555) popup_char_count_window_g

0xe33e,	// (0x0002cae3) popup_char_count_window_t1

0x817c,	// (0x00026921) popup_fep_char_preview_window_ParamLimits

0x817c,	// (0x00026921) popup_fep_char_preview_window

0x82e4,	// (0x00026a89) vkb2_top_candi_pane_ParamLimits

0x82e4,	// (0x00026a89) vkb2_top_candi_pane

0xe34c,	// (0x0002caf1) cell_vkb2_top_candi_pane_ParamLimits

0xe34c,	// (0x0002caf1) cell_vkb2_top_candi_pane

0x9fd9,	// (0x0002877e) bg_popup_fep_char_preview_window_ParamLimits

0x9fd9,	// (0x0002877e) bg_popup_fep_char_preview_window

0x8700,	// (0x00026ea5) popup_fep_char_preview_window_t1_ParamLimits

0x8700,	// (0x00026ea5) popup_fep_char_preview_window_t1

0xe39a,	// (0x0002cb3f) bg_popup_fep_char_preview_window_g1

0xe3a2,	// (0x0002cb47) bg_popup_fep_char_preview_window_g2

0xe3aa,	// (0x0002cb4f) bg_popup_fep_char_preview_window_g3

0xe3b2,	// (0x0002cb57) bg_popup_fep_char_preview_window_g4

0xe3ba,	// (0x0002cb5f) bg_popup_fep_char_preview_window_g5

0xe3c2,	// (0x0002cb67) bg_popup_fep_char_preview_window_g6

0xe3ca,	// (0x0002cb6f) bg_popup_fep_char_preview_window_g7

0xe3d2,	// (0x0002cb77) bg_popup_fep_char_preview_window_g8

0xe3da,	// (0x0002cb7f) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb7,	// (0x0002e55c) bg_popup_fep_char_preview_window_g

0xc22b,	// (0x0002a9d0) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc22b,	// (0x0002a9d0) cell_vkb2_top_candi_pane_g1

0xc56c,	// (0x0002ad11) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc56c,	// (0x0002ad11) cell_vkb2_top_candi_pane_g2

0xc58d,	// (0x0002ad32) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc58d,	// (0x0002ad32) cell_vkb2_top_candi_pane_g3

0x8742,	// (0x00026ee7) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8742,	// (0x00026ee7) cell_vkb2_top_candi_pane_g4

0xe3e2,	// (0x0002cb87) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3e2,	// (0x0002cb87) cell_vkb2_top_candi_pane_g5

0xd7aa,	// (0x0002bf4f) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7aa,	// (0x0002bf4f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcc,	// (0x0002e571) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcc,	// (0x0002e571) cell_vkb2_top_candi_pane_g

0x8763,	// (0x00026f08) cell_vkb2_top_candi_pane_t1

0x7b43,	// (0x000262e8) aid_size_touch_slider_mark_ParamLimits

0x7b43,	// (0x000262e8) aid_size_touch_slider_mark

0xdfce,	// (0x0002c773) grid_graphic2_catg_pane_ParamLimits

0xdfce,	// (0x0002c773) grid_graphic2_catg_pane

0xe06c,	// (0x0002c811) popup_grid_graphic2_window_t1_ParamLimits

0xe06c,	// (0x0002c811) popup_grid_graphic2_window_t1

0xe07e,	// (0x0002c823) popup_grid_graphic2_window_t2_ParamLimits

0xe07e,	// (0x0002c823) popup_grid_graphic2_window_t2

0x0001,

0xfd85,	// (0x0002e52a) popup_grid_graphic2_window_t_ParamLimits

0xfd85,	// (0x0002e52a) popup_grid_graphic2_window_t

0x13c3,	// (0x0001fb68) bg_button_pane_cp05_ParamLimits

0xe1fb,	// (0x0002c9a0) cell_graphic2_control_pane_g1_ParamLimits

0xe403,	// (0x0002cba8) cell_graphic2_catg_pane_ParamLimits

0xe403,	// (0x0002cba8) cell_graphic2_catg_pane

0x1206,	// (0x0001f9ab) bg_button_pane_cp12

0xe415,	// (0x0002cbba) cell_graphic2_catg_pane_g1

0xd8e8,	// (0x0002c08d) cell_tb_ext_pane_t1_ParamLimits

0x8532,	// (0x00026cd7) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8532,	// (0x00026cd7) vkb2_top_cell_right_narrow_pane

0x854a,	// (0x00026cef) vkb2_top_cell_right_wide_pane_ParamLimits

0x854a,	// (0x00026cef) vkb2_top_cell_right_wide_pane

0x7cd5,	// (0x0002647a) bg_vkb2_func_pane_ParamLimits

0x7cd5,	// (0x0002647a) bg_vkb2_func_pane

0x85bb,	// (0x00026d60) vkb2_top_cell_left_pane_g1_ParamLimits

0x7cd5,	// (0x0002647a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7cd5,	// (0x0002647a) bg_vkb2_fuc_pane_cp03

0x8619,	// (0x00026dbe) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x997b,	// (0x00028120) bg_vkb2_func_pane_g1

0x9983,	// (0x00028128) bg_vkb2_func_pane_g2

0x9993,	// (0x00028138) bg_vkb2_func_pane_g3

0x998b,	// (0x00028130) bg_vkb2_func_pane_g4

0x999b,	// (0x00028140) bg_vkb2_func_pane_g5

0x99a3,	// (0x00028148) bg_vkb2_func_pane_g6

0x99ab,	// (0x00028150) bg_vkb2_func_pane_g7

0x99b3,	// (0x00028158) bg_vkb2_func_pane_g8

0x9973,	// (0x00028118) bg_vkb2_func_pane_g9

0x0008,

0xfdd9,	// (0x0002e57e) bg_vkb2_func_pane_g

0x7cd5,	// (0x0002647a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7cd5,	// (0x0002647a) bg_vkb2_fuc_pane_cp01

0x85bb,	// (0x00026d60) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x85bb,	// (0x00026d60) vkb2_top_cell_right_wide_pane_g1

0x7cd5,	// (0x0002647a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7cd5,	// (0x0002647a) bg_vkb2_fuc_pane_cp02

0x8781,	// (0x00026f26) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8781,	// (0x00026f26) vkb2_top_cell_right_narrow_pane_g1

0xd4ff,	// (0x0002bca4) aid_touch_area_decrease_ParamLimits

0xd4ff,	// (0x0002bca4) aid_touch_area_decrease

0xd523,	// (0x0002bcc8) aid_touch_area_increase_ParamLimits

0xd523,	// (0x0002bcc8) aid_touch_area_increase

0xd53b,	// (0x0002bce0) aid_touch_area_mute_ParamLimits

0xd53b,	// (0x0002bce0) aid_touch_area_mute

0xd557,	// (0x0002bcfc) aid_touch_area_slider_ParamLimits

0xd557,	// (0x0002bcfc) aid_touch_area_slider

0xd645,	// (0x0002bdea) popup_slider_window_g4_ParamLimits

0xd645,	// (0x0002bdea) popup_slider_window_g4

0xd65d,	// (0x0002be02) popup_slider_window_g5_ParamLimits

0xd65d,	// (0x0002be02) popup_slider_window_g5

0xd67f,	// (0x0002be24) popup_slider_window_g6_ParamLimits

0xd67f,	// (0x0002be24) popup_slider_window_g6

0xd6bd,	// (0x0002be62) popup_slider_window_t2_ParamLimits

0xd6bd,	// (0x0002be62) popup_slider_window_t2

0x0001,

0xfcd3,	// (0x0002e478) popup_slider_window_t_ParamLimits

0xfcd3,	// (0x0002e478) popup_slider_window_t

0xd6d5,	// (0x0002be7a) slider_pane_ParamLimits

0xd6d5,	// (0x0002be7a) slider_pane

0xe41e,	// (0x0002cbc3) slider_pane_g1_ParamLimits

0xe41e,	// (0x0002cbc3) slider_pane_g1

0xe432,	// (0x0002cbd7) slider_pane_g2_ParamLimits

0xe432,	// (0x0002cbd7) slider_pane_g2

0xe448,	// (0x0002cbed) slider_pane_g3_ParamLimits

0xe448,	// (0x0002cbed) slider_pane_g3

0x0003,

0xfdec,	// (0x0002e591) slider_pane_g_ParamLimits

0xfdec,	// (0x0002e591) slider_pane_g

0x7749,	// (0x00025eee) popup_tb_float_extension_window_ParamLimits

0x7749,	// (0x00025eee) popup_tb_float_extension_window

0xe474,	// (0x0002cc19) aid_size_cell_tb_float_ext

0x1206,	// (0x0001f9ab) bg_popup_sub_window_cp28

0xe480,	// (0x0002cc25) grid_tb_float_ext_pane

0xe48c,	// (0x0002cc31) cell_tb_float_ext_pane_ParamLimits

0xe48c,	// (0x0002cc31) cell_tb_float_ext_pane

0xe4a8,	// (0x0002cc4d) cell_tb_float_ext_pane_g1

0xe4b1,	// (0x0002cc56) grid_highlight_pane_cp12

0x7e1c,	// (0x000265c1) cell_last_hwr_side_pane_ParamLimits

0x7e1c,	// (0x000265c1) cell_last_hwr_side_pane

0xbfb0,	// (0x0002a755) cell_last_hwr_side_pane_g1

0xe4ba,	// (0x0002cc5f) cell_last_hwr_side_pane_g2

0x0001,

0xfdf5,	// (0x0002e59a) cell_last_hwr_side_pane_g

0x84e1,	// (0x00026c86) vkb2_area_bottom_space_btn_pane_ParamLimits

0x84e1,	// (0x00026c86) vkb2_area_bottom_space_btn_pane

0xc22b,	// (0x0002a9d0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf40,	// (0x0002c6e5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8763,	// (0x00026f08) cell_vkb2_top_candi_pane_t1_ParamLimits

0x879d,	// (0x00026f42) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x879d,	// (0x00026f42) vkb2_area_bottom_space_btn_pane_g1

0x87d7,	// (0x00026f7c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x87d7,	// (0x00026f7c) vkb2_area_bottom_space_btn_pane_g2

0x880d,	// (0x00026fb2) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x880d,	// (0x00026fb2) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfa,	// (0x0002e59f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfa,	// (0x0002e59f) vkb2_area_bottom_space_btn_pane_g

0x7d8c,	// (0x00026531) cel_fep_hwr_func_pane_ParamLimits

0x7d8c,	// (0x00026531) cel_fep_hwr_func_pane

0x7dc8,	// (0x0002656d) cell_hwr_side_button_pane_ParamLimits

0x7dc8,	// (0x0002656d) cell_hwr_side_button_pane

0xd91e,	// (0x0002c0c3) aid_area_touch_clock_ParamLimits

0x13c3,	// (0x0001fb68) bg_uniindi_top_pane_ParamLimits

0xd932,	// (0x0002c0d7) uniindi_top_pane_g1_ParamLimits

0xd948,	// (0x0002c0ed) uniindi_top_pane_g2_ParamLimits

0xd954,	// (0x0002c0f9) uniindi_top_pane_g3_ParamLimits

0xd965,	// (0x0002c10a) uniindi_top_pane_g4_ParamLimits

0xfd0b,	// (0x0002e4b0) uniindi_top_pane_g_ParamLimits

0xd972,	// (0x0002c117) uniindi_top_pane_t1_ParamLimits

0x13c3,	// (0x0001fb68) bg_vkb2_func_pane_cp01_ParamLimits

0x13c3,	// (0x0001fb68) bg_vkb2_func_pane_cp01

0xe4c3,	// (0x0002cc68) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4c3,	// (0x0002cc68) cel_fep_hwr_func_pane_g1

0x13c3,	// (0x0001fb68) bg_vkb2_func_pane_cp02_ParamLimits

0x13c3,	// (0x0001fb68) bg_vkb2_func_pane_cp02

0xe4c3,	// (0x0002cc68) cell_hwr_side_button_pane_g1_ParamLimits

0xe4c3,	// (0x0002cc68) cell_hwr_side_button_pane_g1

0x97fa,	// (0x00027f9f) status_pane_g4_ParamLimits

0x97fa,	// (0x00027f9f) status_pane_g4

0x9814,	// (0x00027fb9) status_pane_t1

0xbd6a,	// (0x0002a50f) form2_midp_gauge_slider_cont_pane

0xbd72,	// (0x0002a517) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd84,	// (0x0002a529) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd96,	// (0x0002a53b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad7,	// (0x0002e27c) form2_midp_gauge_slider_pane_t_ParamLimits

0xbda8,	// (0x0002a54d) form2_midp_slider_pane_ParamLimits

0x8144,	// (0x000268e9) aid_size_cell_func_vkb2_ParamLimits

0x8144,	// (0x000268e9) aid_size_cell_func_vkb2

0xe460,	// (0x0002cc05) slider_pane_g4_ParamLimits

0xe460,	// (0x0002cc05) slider_pane_g4

0x8857,	// (0x00026ffc) form2_midp_gauge_slider_pane_t2_cp01

0x8865,	// (0x0002700a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8865,	// (0x0002700a) form2_midp_gauge_slider_pane_t3_cp01

0x8882,	// (0x00027027) form2_midp_slider_pane_cp01

0x1206,	// (0x0001f9ab) navi_smil_pane

0xe4fc,	// (0x0002cca1) navi_smil_pane_g1

0xe504,	// (0x0002cca9) navi_smil_pane_t1

0xe4d1,	// (0x0002cc76) form2_midp_slider_pane_g1

0xe4da,	// (0x0002cc7f) form2_midp_slider_pane_g2

0xe4e2,	// (0x0002cc87) form2_midp_slider_pane_g3

0xe4d1,	// (0x0002cc76) form2_midp_slider_pane_g4

0xe4ea,	// (0x0002cc8f) form2_midp_slider_pane_g5

0x0004,

0xfe03,	// (0x0002e5a8) form2_midp_slider_pane_g

0x8847,	// (0x00026fec) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8847,	// (0x00026fec) vkb2_area_bottom_space_btn_pane_g4

0x961b,	// (0x00027dc0) lc0_navi_pane_ParamLimits

0x961b,	// (0x00027dc0) lc0_navi_pane

0x9697,	// (0x00027e3c) lc0_stat_indi_pane_ParamLimits

0x9697,	// (0x00027e3c) lc0_stat_indi_pane

0x96ae,	// (0x00027e53) ls0_title_pane_ParamLimits

0x96ae,	// (0x00027e53) ls0_title_pane

0x2f9f,	// (0x00021744) bg_popup_sub_pane_cp14_ParamLimits

0xd905,	// (0x0002c0aa) list_uniindi_pane_ParamLimits

0xd911,	// (0x0002c0b6) uniindi_top_pane_ParamLimits

0xd9b1,	// (0x0002c156) list_single_uniindi_pane_g1_ParamLimits

0xd9c4,	// (0x0002c169) list_single_uniindi_pane_t1_ParamLimits

0x888b,	// (0x00027030) lc0_stat_clock_pane_ParamLimits

0x888b,	// (0x00027030) lc0_stat_clock_pane

0xe512,	// (0x0002ccb7) lc0_stat_indi_pane_g1_ParamLimits

0xe512,	// (0x0002ccb7) lc0_stat_indi_pane_g1

0xe51f,	// (0x0002ccc4) lc0_stat_indi_pane_g2_ParamLimits

0xe51f,	// (0x0002ccc4) lc0_stat_indi_pane_g2

0x0001,

0xfe0e,	// (0x0002e5b3) lc0_stat_indi_pane_g_ParamLimits

0xfe0e,	// (0x0002e5b3) lc0_stat_indi_pane_g

0x8898,	// (0x0002703d) lc0_uni_indicator_pane_ParamLimits

0x8898,	// (0x0002703d) lc0_uni_indicator_pane

0xe52c,	// (0x0002ccd1) ls0_title_pane_g1_ParamLimits

0xe52c,	// (0x0002ccd1) ls0_title_pane_g1

0xe540,	// (0x0002cce5) ls0_title_pane_t1_ParamLimits

0xe540,	// (0x0002cce5) ls0_title_pane_t1

0x88a5,	// (0x0002704a) lc0_uni_indicator_pane_g1_ParamLimits

0x88a5,	// (0x0002704a) lc0_uni_indicator_pane_g1

0xe576,	// (0x0002cd1b) lc0_stat_clock_pane_t1

0x1206,	// (0x0001f9ab) main_ai5_pane

0xe58c,	// (0x0002cd31) ai5_sk_pane_ParamLimits

0xe58c,	// (0x0002cd31) ai5_sk_pane

0xe599,	// (0x0002cd3e) cell_ai5_widget_pane_ParamLimits

0xe599,	// (0x0002cd3e) cell_ai5_widget_pane

0xe638,	// (0x0002cddd) aid_size_cell_widget_grid

0xe646,	// (0x0002cdeb) bg_ai5_widget_pane_ParamLimits

0xe646,	// (0x0002cdeb) bg_ai5_widget_pane

0xe6c4,	// (0x0002ce69) cell_ai5_widget_pane_g2

0xe6d8,	// (0x0002ce7d) cell_ai5_widget_pane_g3

0xe6f2,	// (0x0002ce97) cell_ai5_widget_pane_g4

0xe702,	// (0x0002cea7) cell_ai5_widget_pane_g5

0xe712,	// (0x0002ceb7) cell_ai5_widget_pane_g6

0xe71f,	// (0x0002cec4) cell_ai5_widget_pane_g7

0xe78b,	// (0x0002cf30) cell_ai5_widget_pane_t1_ParamLimits

0xe78b,	// (0x0002cf30) cell_ai5_widget_pane_t1

0xe7a8,	// (0x0002cf4d) cell_ai5_widget_pane_t2_ParamLimits

0xe7a8,	// (0x0002cf4d) cell_ai5_widget_pane_t2

0xe7c0,	// (0x0002cf65) cell_ai5_widget_pane_t3_ParamLimits

0xe7c0,	// (0x0002cf65) cell_ai5_widget_pane_t3

0xe7d8,	// (0x0002cf7d) cell_ai5_widget_pane_t4_ParamLimits

0xe7d8,	// (0x0002cf7d) cell_ai5_widget_pane_t4

0xe7fe,	// (0x0002cfa3) cell_ai5_widget_pane_t5_ParamLimits

0xe7fe,	// (0x0002cfa3) cell_ai5_widget_pane_t5

0xe81e,	// (0x0002cfc3) cell_ai5_widget_pane_t6_ParamLimits

0xe81e,	// (0x0002cfc3) cell_ai5_widget_pane_t6

0xe830,	// (0x0002cfd5) cell_ai5_widget_pane_t7_ParamLimits

0xe830,	// (0x0002cfd5) cell_ai5_widget_pane_t7

0xe84f,	// (0x0002cff4) cell_ai5_widget_pane_t8_ParamLimits

0xe84f,	// (0x0002cff4) cell_ai5_widget_pane_t8

0x000b,

0xfe2e,	// (0x0002e5d3) cell_ai5_widget_pane_t_ParamLimits

0xfe2e,	// (0x0002e5d3) cell_ai5_widget_pane_t

0xe8d3,	// (0x0002d078) grid_ai5_widget_pane

0x2f9f,	// (0x00021744) highlight_cell_ai5_widget_pane_ParamLimits

0x2f9f,	// (0x00021744) highlight_cell_ai5_widget_pane

0xe8e7,	// (0x0002d08c) ai5_sk_left_pane

0xe8f1,	// (0x0002d096) ai5_sk_middle_pane

0xe8fb,	// (0x0002d0a0) ai5_sk_right_pane

0xe905,	// (0x0002d0aa) bg_ai5_widget_pane_g1_ParamLimits

0xe905,	// (0x0002d0aa) bg_ai5_widget_pane_g1

0xe911,	// (0x0002d0b6) bg_ai5_widget_pane_g2_ParamLimits

0xe911,	// (0x0002d0b6) bg_ai5_widget_pane_g2

0xe91d,	// (0x0002d0c2) bg_ai5_widget_pane_g3_ParamLimits

0xe91d,	// (0x0002d0c2) bg_ai5_widget_pane_g3

0xe929,	// (0x0002d0ce) bg_ai5_widget_pane_g4_ParamLimits

0xe929,	// (0x0002d0ce) bg_ai5_widget_pane_g4

0xe935,	// (0x0002d0da) bg_ai5_widget_pane_g5_ParamLimits

0xe935,	// (0x0002d0da) bg_ai5_widget_pane_g5

0xe941,	// (0x0002d0e6) bg_ai5_widget_pane_g6_ParamLimits

0xe941,	// (0x0002d0e6) bg_ai5_widget_pane_g6

0xe94d,	// (0x0002d0f2) bg_ai5_widget_pane_g7_ParamLimits

0xe94d,	// (0x0002d0f2) bg_ai5_widget_pane_g7

0xe959,	// (0x0002d0fe) bg_ai5_widget_pane_g8_ParamLimits

0xe959,	// (0x0002d0fe) bg_ai5_widget_pane_g8

0xe965,	// (0x0002d10a) bg_ai5_widget_pane_g9_ParamLimits

0xe965,	// (0x0002d10a) bg_ai5_widget_pane_g9

0x0008,

0xfe47,	// (0x0002e5ec) bg_ai5_widget_pane_g_ParamLimits

0xfe47,	// (0x0002e5ec) bg_ai5_widget_pane_g

0xe99d,	// (0x0002d142) cell_shortcut_ai5_widget_pane_ParamLimits

0xe99d,	// (0x0002d142) cell_shortcut_ai5_widget_pane

0x9114,	// (0x000278b9) bg_cell_shortcut_ai5_widget_pane

0xe9b0,	// (0x0002d155) cell_grid_ai5_widget_pane_g1

0x9114,	// (0x000278b9) highlight_cell_shortcut_ai5_widget_pane

0x9983,	// (0x00028128) ai5_sk_left_pane_g1

0xe9b9,	// (0x0002d15e) ai5_sk_left_pane_g2

0xe9c1,	// (0x0002d166) ai5_sk_left_pane_g3

0xe9c9,	// (0x0002d16e) ai5_sk_left_pane_g4

0x0003,

0xfe5a,	// (0x0002e5ff) ai5_sk_left_pane_g

0xe9d1,	// (0x0002d176) ai5_sk_left_pane_t1

0x997b,	// (0x00028120) ai5_sk_right_pane_g1

0xe9df,	// (0x0002d184) ai5_sk_right_pane_g2

0xe9e7,	// (0x0002d18c) ai5_sk_right_pane_g3

0xe9ef,	// (0x0002d194) ai5_sk_right_pane_g4

0x0003,

0xfe63,	// (0x0002e608) ai5_sk_right_pane_g

0xe9f7,	// (0x0002d19c) ai5_sk_right_pane_t1

0x997b,	// (0x00028120) ai5_sk_middle_pane_g1

0x9983,	// (0x00028128) ai5_sk_middle_pane_g2

0x999b,	// (0x00028140) ai5_sk_middle_pane_g3

0xe9e7,	// (0x0002d18c) ai5_sk_middle_pane_g4

0xe9c1,	// (0x0002d166) ai5_sk_middle_pane_g5

0xea05,	// (0x0002d1aa) ai5_sk_middle_pane_g6

0xea0d,	// (0x0002d1b2) ai5_sk_middle_pane_g7

0x0006,

0xfe6c,	// (0x0002e611) ai5_sk_middle_pane_g

0x94a3,	// (0x00027c48) aid_touch_area_size_lc0_ParamLimits

0x94a3,	// (0x00027c48) aid_touch_area_size_lc0

0x7f2b,	// (0x000266d0) cell_hwr_candidate_pane_t1_ParamLimits

0x94c1,	// (0x00027c66) aid_touch_navi_pane

0x97ac,	// (0x00027f51) status_dt_navi_pane_ParamLimits

0x97ac,	// (0x00027f51) status_dt_navi_pane

0x97b9,	// (0x00027f5e) status_dt_sta_pane_ParamLimits

0x97b9,	// (0x00027f5e) status_dt_sta_pane

0xea15,	// (0x0002d1ba) dt_sta_controll_pane

0xea22,	// (0x0002d1c7) dt_sta_indi_pane

0xea33,	// (0x0002d1d8) dt_sta_title_pane

0x13c3,	// (0x0001fb68) bg_dt_sta_indi_pane_ParamLimits

0x13c3,	// (0x0001fb68) bg_dt_sta_indi_pane

0xea46,	// (0x0002d1eb) dt_sta_battery_pane

0xea4e,	// (0x0002d1f3) dt_sta_indi_pane_g1

0xea57,	// (0x0002d1fc) dt_sta_indi_pane_g2

0xea60,	// (0x0002d205) dt_sta_indi_pane_g3

0x0002,

0xfe7b,	// (0x0002e620) dt_sta_indi_pane_g

0xea69,	// (0x0002d20e) dt_sta_signal_pane

0x2f9f,	// (0x00021744) bg_dt_sta_title_pane_ParamLimits

0x2f9f,	// (0x00021744) bg_dt_sta_title_pane

0xea72,	// (0x0002d217) dt_sta_title_pane_g1

0xea7a,	// (0x0002d21f) dt_sta_title_pane_t1_ParamLimits

0xea7a,	// (0x0002d21f) dt_sta_title_pane_t1

0x1206,	// (0x0001f9ab) bg_dt_sta_control_pane

0xea8f,	// (0x0002d234) dt_sta_controll_pane_g1

0xea98,	// (0x0002d23d) bg_dt_sta_title_pane_g1

0xeaa1,	// (0x0002d246) bg_dt_sta_title_pane_g2

0xeaaa,	// (0x0002d24f) bg_dt_sta_title_pane_g3

0x0002,

0xfe82,	// (0x0002e627) bg_dt_sta_title_pane_g

0xbfb0,	// (0x0002a755) bg_dt_sta_indi_pane_g1

0xeab3,	// (0x0002d258) dt_sta_signal_pane_g1

0xeabb,	// (0x0002d260) dt_sta_signal_pane_g2

0x0001,

0xfe89,	// (0x0002e62e) dt_sta_signal_pane_g

0xeac3,	// (0x0002d268) dt_sta_battery_pane_g1

0xeacc,	// (0x0002d271) dt_sta_battery_pane_t1

0xbfb0,	// (0x0002a755) bg_dt_sta_control_pane_g1

0x6d4f,	// (0x000254f4) fep_china_uni_eep_pane

0x6d57,	// (0x000254fc) fep_china_uni_entry_pane_ParamLimits

0x6d67,	// (0x0002550c) popup_fep_china_uni_window_g1_ParamLimits

0x6d77,	// (0x0002551c) popup_fep_china_uni_window_g2_ParamLimits

0x6d77,	// (0x0002551c) popup_fep_china_uni_window_g2

0x0001,

0xf6f6,	// (0x0002de9b) popup_fep_china_uni_window_g_ParamLimits

0xf6f6,	// (0x0002de9b) popup_fep_china_uni_window_g

0xeadb,	// (0x0002d280) fep_china_uni_eep_pane_g1

0xeae3,	// (0x0002d288) fep_china_uni_eep_pane_t1

0xe4f3,	// (0x0002cc98) aid_touch_area_size_smil_player

0x9613,	// (0x00027db8) lc0_clock_pane

0x9808,	// (0x00027fad) status_pane_g5_ParamLimits

0x9808,	// (0x00027fad) status_pane_g5

0x73ce,	// (0x00025b73) popup_keymap_window

0x97ce,	// (0x00027f73) status_icon_pane

0xe6d8,	// (0x0002ce7d) cell_ai5_widget_pane_g3_ParamLimits

0xe6f2,	// (0x0002ce97) cell_ai5_widget_pane_g4_ParamLimits

0xe702,	// (0x0002cea7) cell_ai5_widget_pane_g5_ParamLimits

0xe72b,	// (0x0002ced0) cell_ai5_widget_pane_g8_ParamLimits

0xe72b,	// (0x0002ced0) cell_ai5_widget_pane_g8

0xe73f,	// (0x0002cee4) cell_ai5_widget_pane_g9_ParamLimits

0xe73f,	// (0x0002cee4) cell_ai5_widget_pane_g9

0xe753,	// (0x0002cef8) cell_ai5_widget_pane_g10_ParamLimits

0xe753,	// (0x0002cef8) cell_ai5_widget_pane_g10

0xeaf2,	// (0x0002d297) status_icon_pane_g1

0x1206,	// (0x0001f9ab) bg_popup_sub_pane_cp13

0xeafa,	// (0x0002d29f) popup_keymap_window_t1

0x93ec,	// (0x00027b91) control_pane_g6_ParamLimits

0x93ec,	// (0x00027b91) control_pane_g6

0x93f9,	// (0x00027b9e) control_pane_g7_ParamLimits

0x93f9,	// (0x00027b9e) control_pane_g7

0x9406,	// (0x00027bab) control_pane_g8_ParamLimits

0x9406,	// (0x00027bab) control_pane_g8

0xea15,	// (0x0002d1ba) dt_sta_controll_pane_ParamLimits

0xea22,	// (0x0002d1c7) dt_sta_indi_pane_ParamLimits

0xea33,	// (0x0002d1d8) dt_sta_title_pane_ParamLimits

0x2e5a,	// (0x000215ff) aid_size_touch_scroll_bar_cale

0x5e76,	// (0x0002461b) popup_discreet_window_ParamLimits

0x5e76,	// (0x0002461b) popup_discreet_window

0x5f04,	// (0x000246a9) popup_sk_window

0x9fd9,	// (0x0002877e) bg_popup_sub_pane_cp28_ParamLimits

0x9fd9,	// (0x0002877e) bg_popup_sub_pane_cp28

0xeb08,	// (0x0002d2ad) popup_discreet_window_g1_ParamLimits

0xeb08,	// (0x0002d2ad) popup_discreet_window_g1

0xeb28,	// (0x0002d2cd) popup_discreet_window_t1_ParamLimits

0xeb28,	// (0x0002d2cd) popup_discreet_window_t1

0xeb46,	// (0x0002d2eb) popup_discreet_window_t2_ParamLimits

0xeb46,	// (0x0002d2eb) popup_discreet_window_t2

0x0002,

0xfe8e,	// (0x0002e633) popup_discreet_window_t_ParamLimits

0xfe8e,	// (0x0002e633) popup_discreet_window_t

0x88b8,	// (0x0002705d) popup_sk_window_g1

0x88c2,	// (0x00027067) popup_sk_window_g2

0x0001,

0xfe95,	// (0x0002e63a) popup_sk_window_g

0x88ca,	// (0x0002706f) popup_sk_window_t1

0x88d8,	// (0x0002707d) popup_sk_window_t1_copy1

0xe6c4,	// (0x0002ce69) cell_ai5_widget_pane_g2_ParamLimits

0xe861,	// (0x0002d006) cell_ai5_widget_pane_t9_ParamLimits

0xe861,	// (0x0002d006) cell_ai5_widget_pane_t9

0x1206,	// (0x0001f9ab) main_fep_fshwr2_pane

0x88e6,	// (0x0002708b) aid_fshwr2_btn_pane

0x88f6,	// (0x0002709b) aid_fshwr2_syb_pane

0x890a,	// (0x000270af) aid_fshwr2_txt_pane

0x891a,	// (0x000270bf) fshwr2_func_candi_pane

0x893a,	// (0x000270df) fshwr2_hwr_syb_pane

0x8950,	// (0x000270f5) fshwr2_icf_pane

0x1206,	// (0x0001f9ab) fshwr2_icf_bg_pane

0x8984,	// (0x00027129) fshwr2_icf_pane_t1_ParamLimits

0x8984,	// (0x00027129) fshwr2_icf_pane_t1

0x6b4f,	// (0x000252f4) fshwr2_func_candi_pane_g1

0xeb98,	// (0x0002d33d) fshwr2_func_candi_row_pane_ParamLimits

0xeb98,	// (0x0002d33d) fshwr2_func_candi_row_pane

0x899c,	// (0x00027141) cell_fshwr2_syb_pane_ParamLimits

0x899c,	// (0x00027141) cell_fshwr2_syb_pane

0xe4c3,	// (0x0002cc68) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4c3,	// (0x0002cc68) fshwr2_hwr_syb_pane_g1

0x1206,	// (0x0001f9ab) bg_popup_call_pane_cp01

0x89bd,	// (0x00027162) fshwr2_func_candi_cell_pane_ParamLimits

0x89bd,	// (0x00027162) fshwr2_func_candi_cell_pane

0xa650,	// (0x00028df5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa650,	// (0x00028df5) fshwr2_func_candi_cell_bg_pane

0x8a0e,	// (0x000271b3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8a0e,	// (0x000271b3) fshwr2_func_candi_cell_pane_g1

0x8a39,	// (0x000271de) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8a39,	// (0x000271de) fshwr2_func_candi_cell_pane_t1

0x1206,	// (0x0001f9ab) bg_button_pane_cp08

0x9443,	// (0x00027be8) cell_fshwr2_syb_bg_pane

0x8a4c,	// (0x000271f1) cell_fshwr2_syb_bg_pane_g1

0x8a60,	// (0x00027205) cell_fshwr2_syb_bg_pane_t1

0x2f9f,	// (0x00021744) main_tmo_pane

0xaafd,	// (0x000292a2) uni_indicator_pane_g1_ParamLimits

0xab13,	// (0x000292b8) uni_indicator_pane_g2_ParamLimits

0xab29,	// (0x000292ce) uni_indicator_pane_g3_ParamLimits

0xab3c,	// (0x000292e1) uni_indicator_pane_g4_ParamLimits

0xab3c,	// (0x000292e1) uni_indicator_pane_g4

0xab50,	// (0x000292f5) uni_indicator_pane_g5_ParamLimits

0xab50,	// (0x000292f5) uni_indicator_pane_g5

0xab50,	// (0x000292f5) uni_indicator_pane_g6_ParamLimits

0xab50,	// (0x000292f5) uni_indicator_pane_g6

0xf8fa,	// (0x0002e09f) uni_indicator_pane_g_ParamLimits

0xd4cf,	// (0x0002bc74) popup_tmo_note_window_ParamLimits

0xd4cf,	// (0x0002bc74) popup_tmo_note_window

0x2f9f,	// (0x00021744) fshwr2_bg_pane

0x8a2a,	// (0x000271cf) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8a2a,	// (0x000271cf) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9a,	// (0x0002e63f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9a,	// (0x0002e63f) fshwr2_func_candi_cell_pane_g

0xbfb0,	// (0x0002a755) bg_popup_window_pane_cp01

0x8a76,	// (0x0002721b) bg_popup_window_pane_g1_cp01

0xebbb,	// (0x0002d360) bg_popup_window_pane_cp22_ParamLimits

0xebbb,	// (0x0002d360) bg_popup_window_pane_cp22

0xebc9,	// (0x0002d36e) listscroll_tmo_link_pane_ParamLimits

0xebc9,	// (0x0002d36e) listscroll_tmo_link_pane

0xec09,	// (0x0002d3ae) popup_tmo_note_window_g1_ParamLimits

0xec09,	// (0x0002d3ae) popup_tmo_note_window_g1

0xec16,	// (0x0002d3bb) tmo_note_info_pane_ParamLimits

0xec16,	// (0x0002d3bb) tmo_note_info_pane

0xec30,	// (0x0002d3d5) list_tmo_note_info_pane_g1_ParamLimits

0xec30,	// (0x0002d3d5) list_tmo_note_info_pane_g1

0xec47,	// (0x0002d3ec) list_tmo_note_info_pane_g2_ParamLimits

0xec47,	// (0x0002d3ec) list_tmo_note_info_pane_g2

0x0001,

0xfe9f,	// (0x0002e644) list_tmo_note_info_pane_g_ParamLimits

0xfe9f,	// (0x0002e644) list_tmo_note_info_pane_g

0xec63,	// (0x0002d408) list_tmo_note_info_text_pane_ParamLimits

0xec63,	// (0x0002d408) list_tmo_note_info_text_pane

0xece8,	// (0x0002d48d) list_tmo_link_pane

0xecf5,	// (0x0002d49a) scroll_pane_cp20

0xed02,	// (0x0002d4a7) list_single_tmo_link_pane_ParamLimits

0xed02,	// (0x0002d4a7) list_single_tmo_link_pane

0xed12,	// (0x0002d4b7) list_single_tmo_link_pane_t1

0xed20,	// (0x0002d4c5) list_tmo_note_info_text_pane_t1_ParamLimits

0xed20,	// (0x0002d4c5) list_tmo_note_info_text_pane_t1

0x63ab,	// (0x00024b50) aid_size_touch_scroll_bar_cp01_ParamLimits

0x63ab,	// (0x00024b50) aid_size_touch_scroll_bar_cp01

0x5071,	// (0x00023816) aid_size_touch_slider_marker

0x5eec,	// (0x00024691) popup_settings_window_ParamLimits

0x5eec,	// (0x00024691) popup_settings_window

0x521c,	// (0x000239c1) popup_candi_list_indi_window

0x94c1,	// (0x00027c66) aid_touch_navi_pane_ParamLimits

0x809b,	// (0x00026840) rs_clock_indi_pane

0x80a4,	// (0x00026849) sctrl_sk_bottom_pane_ParamLimits

0x80b5,	// (0x0002685a) sctrl_sk_top_pane_ParamLimits

0x8196,	// (0x0002693b) popup_fep_tooltip_window

0xe638,	// (0x0002cddd) aid_size_cell_widget_grid_ParamLimits

0xe6ad,	// (0x0002ce52) cell_ai5_widget_pane_g1_ParamLimits

0xe6ad,	// (0x0002ce52) cell_ai5_widget_pane_g1

0xe712,	// (0x0002ceb7) cell_ai5_widget_pane_g6_ParamLimits

0xe71f,	// (0x0002cec4) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe13,	// (0x0002e5b8) cell_ai5_widget_pane_g_ParamLimits

0xfe13,	// (0x0002e5b8) cell_ai5_widget_pane_g

0xe890,	// (0x0002d035) cell_ai5_widget_pane_t10_ParamLimits

0xe890,	// (0x0002d035) cell_ai5_widget_pane_t10

0xe8d3,	// (0x0002d078) grid_ai5_widget_pane_ParamLimits

0xe971,	// (0x0002d116) cell_contacts_ai5_widget_pane_ParamLimits

0xe971,	// (0x0002d116) cell_contacts_ai5_widget_pane

0xeb5b,	// (0x0002d300) popup_discreet_window_t3_ParamLimits

0xeb5b,	// (0x0002d300) popup_discreet_window_t3

0x896c,	// (0x00027111) popup_fshwr2_char_preview_window_ParamLimits

0x896c,	// (0x00027111) popup_fshwr2_char_preview_window

0xec81,	// (0x0002d426) tmo_note_info_pane_t1

0xec96,	// (0x0002d43b) tmo_note_info_pane_t2

0xecaf,	// (0x0002d454) tmo_note_info_pane_t3

0xecc4,	// (0x0002d469) tmo_note_info_pane_t4

0xecd6,	// (0x0002d47b) tmo_note_info_pane_t5

0x0004,

0xfea4,	// (0x0002e649) tmo_note_info_pane_t

0xece8,	// (0x0002d48d) list_tmo_link_pane_ParamLimits

0xecf5,	// (0x0002d49a) scroll_pane_cp20_ParamLimits

0x1206,	// (0x0001f9ab) bg_popup_fep_char_preview_window_cp01

0xed39,	// (0x0002d4de) popup_fshwr2_char_preview_window_t1

0xed47,	// (0x0002d4ec) popup_candi_list_indi_window_g1

0xed50,	// (0x0002d4f5) bg_cell_contacts_ai5_widget_pane

0xed5c,	// (0x0002d501) cell_contacts_ai5_widget_pane_g1

0xed71,	// (0x0002d516) cell_contacts_ai5_widget_pane_g2

0xed7d,	// (0x0002d522) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaf,	// (0x0002e654) cell_contacts_ai5_widget_pane_g

0xed89,	// (0x0002d52e) cell_contacts_ai5_widget_pane_t1

0x2f9f,	// (0x00021744) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee00,	// (0x0002d5a5) settings_container_pane

0x9114,	// (0x000278b9) listscroll_set_pane_copy1

0xb6e8,	// (0x00029e8d) scroll_pane_cp121_copy1

0xee0c,	// (0x0002d5b1) set_content_pane_copy1

0xee14,	// (0x0002d5b9) aid_height_set_list_copy1_ParamLimits

0xee14,	// (0x0002d5b9) aid_height_set_list_copy1

0xad40,	// (0x000294e5) aid_size_parent_copy1_ParamLimits

0xad40,	// (0x000294e5) aid_size_parent_copy1

0xee20,	// (0x0002d5c5) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee20,	// (0x0002d5c5) button_value_adjust_pane_cp6_copy1

0x9443,	// (0x00027be8) list_highlight_pane_cp2_copy1_ParamLimits

0x9443,	// (0x00027be8) list_highlight_pane_cp2_copy1

0xee34,	// (0x0002d5d9) list_set_pane_copy1_ParamLimits

0xee34,	// (0x0002d5d9) list_set_pane_copy1

0xed9b,	// (0x0002d540) main_pane_set_t1_copy1_ParamLimits

0xed9b,	// (0x0002d540) main_pane_set_t1_copy1

0xedd5,	// (0x0002d57a) main_pane_set_t2_copy1_ParamLimits

0xedd5,	// (0x0002d57a) main_pane_set_t2_copy1

0xeef5,	// (0x0002d69a) main_pane_set_t3_copy1

0xef03,	// (0x0002d6a8) main_pane_set_t4_copy1

0xedf4,	// (0x0002d599) set_content_pane_g1_copy1_ParamLimits

0xedf4,	// (0x0002d599) set_content_pane_g1_copy1

0xef11,	// (0x0002d6b6) setting_code_pane_copy1

0xef19,	// (0x0002d6be) setting_slider_graphic_pane_copy1

0xef19,	// (0x0002d6be) setting_slider_pane_copy1

0xef21,	// (0x0002d6c6) setting_text_pane_copy1

0xef21,	// (0x0002d6c6) setting_volume_pane_copy1

0xef11,	// (0x0002d6b6) settings_code_pane_cp2_copy1

0xef29,	// (0x0002d6ce) settings_code_pane_cp_copy1_ParamLimits

0xef29,	// (0x0002d6ce) settings_code_pane_cp_copy1

0x8a7f,	// (0x00027224) volume_set_pane_copy1

0xef3d,	// (0x0002d6e2) volume_set_pane_g10_copy1

0xef49,	// (0x0002d6ee) volume_set_pane_g1_copy1

0xef53,	// (0x0002d6f8) volume_set_pane_g2_copy1

0xef5d,	// (0x0002d702) volume_set_pane_g3_copy1

0xef67,	// (0x0002d70c) volume_set_pane_g4_copy1

0xef71,	// (0x0002d716) volume_set_pane_g5_copy1

0xef7b,	// (0x0002d720) volume_set_pane_g6_copy1

0xef85,	// (0x0002d72a) volume_set_pane_g7_copy1

0xef8f,	// (0x0002d734) volume_set_pane_g8_copy1

0xef99,	// (0x0002d73e) volume_set_pane_g9_copy1

0x1276,	// (0x0001fa1b) bg_set_opt_pane_cp_copy1_ParamLimits

0x1276,	// (0x0001fa1b) bg_set_opt_pane_cp_copy1

0x8a8b,	// (0x00027230) setting_slider_pane_t1_copy1_ParamLimits

0x8a8b,	// (0x00027230) setting_slider_pane_t1_copy1

0x8aaa,	// (0x0002724f) setting_slider_pane_t2_copy1_ParamLimits

0x8aaa,	// (0x0002724f) setting_slider_pane_t2_copy1

0x8ac4,	// (0x00027269) setting_slider_pane_t3_copy1_ParamLimits

0x8ac4,	// (0x00027269) setting_slider_pane_t3_copy1

0x8adc,	// (0x00027281) slider_set_pane_copy1_ParamLimits

0x8adc,	// (0x00027281) slider_set_pane_copy1

0x305a,	// (0x000217ff) set_opt_bg_pane_g1_copy2

0x3062,	// (0x00021807) set_opt_bg_pane_g2_copy2

0xefa5,	// (0x0002d74a) set_opt_bg_pane_g3_copy2

0x3072,	// (0x00021817) set_opt_bg_pane_g4_copy2

0x307a,	// (0x0002181f) set_opt_bg_pane_g5_copy2

0x3082,	// (0x00021827) set_opt_bg_pane_g6_copy2

0xefaf,	// (0x0002d754) set_opt_bg_pane_g7_copy2

0xefb9,	// (0x0002d75e) set_opt_bg_pane_g8_copy2

0xefc3,	// (0x0002d768) set_opt_bg_pane_g9_copy2

0x8af2,	// (0x00027297) aid_size_touch_slider_mark_copy1_ParamLimits

0x8af2,	// (0x00027297) aid_size_touch_slider_mark_copy1

0xefcd,	// (0x0002d772) slider_set_pane_g1_copy1

0x8b06,	// (0x000272ab) slider_set_pane_g2_copy1

0x7b63,	// (0x00026308) slider_set_pane_g3_copy1_ParamLimits

0x7b63,	// (0x00026308) slider_set_pane_g3_copy1

0x7b77,	// (0x0002631c) slider_set_pane_g4_copy1_ParamLimits

0x7b77,	// (0x0002631c) slider_set_pane_g4_copy1

0x7b8f,	// (0x00026334) slider_set_pane_g5_copy1_ParamLimits

0x7b8f,	// (0x00026334) slider_set_pane_g5_copy1

0x7b63,	// (0x00026308) slider_set_pane_g6_copy1_ParamLimits

0x7b63,	// (0x00026308) slider_set_pane_g6_copy1

0x8b0e,	// (0x000272b3) slider_set_pane_g7_copy1_ParamLimits

0x8b0e,	// (0x000272b3) slider_set_pane_g7_copy1

0x121a,	// (0x0001f9bf) bg_set_opt_pane_cp2_copy1

0xefd6,	// (0x0002d77b) setting_slider_graphic_pane_g1_copy1

0xefdf,	// (0x0002d784) setting_slider_graphic_pane_t1_copy1

0xefef,	// (0x0002d794) setting_slider_graphic_pane_t2_copy1

0xefff,	// (0x0002d7a4) slider_set_pane_cp_copy1

0xf00f,	// (0x0002d7b4) input_focus_pane_cp1_copy1

0xf018,	// (0x0002d7bd) list_set_text_pane_copy1

0xf020,	// (0x0002d7c5) setting_text_pane_g1_copy1

0x5bc7,	// (0x0002436c) set_text_pane_t1_copy1

0xf00f,	// (0x0002d7b4) input_focus_pane_cp2_copy1

0xf020,	// (0x0002d7c5) setting_code_pane_g1_copy1

0xf029,	// (0x0002d7ce) setting_code_pane_t1_copy1

0xb4ed,	// (0x00029c92) list_set_graphic_pane_copy1

0x121a,	// (0x0001f9bf) bg_set_opt_pane_cp4_copy1

0x8dff,	// (0x000275a4) list_set_graphic_pane_g1_copy1_ParamLimits

0x8dff,	// (0x000275a4) list_set_graphic_pane_g1_copy1

0xf037,	// (0x0002d7dc) list_set_graphic_pane_g2_copy1

0x8e17,	// (0x000275bc) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e17,	// (0x000275bc) list_set_graphic_pane_t1_copy1

0xbfb0,	// (0x0002a755) rs_clock_indi_pane_g1

0xf03f,	// (0x0002d7e4) rs_clock_indi_pane_t1

0xf04d,	// (0x0002d7f2) rs_indi_pane

0xf055,	// (0x0002d7fa) rs_indi_pane_g1

0xf05e,	// (0x0002d803) rs_indi_pane_g2

0xed47,	// (0x0002d4ec) rs_indi_pane_g3

0x0002,

0xfeb6,	// (0x0002e65b) rs_indi_pane_g

0x9114,	// (0x000278b9) bg_popup_preview_window_pane_cp03

0xf067,	// (0x0002d80c) popup_fep_tooltip_window_t1

0xcc7d,	// (0x0002b422) popup_note2_window_g2_ParamLimits

0xcc7d,	// (0x0002b422) popup_note2_window_g2

0x0001,

0xfc43,	// (0x0002e3e8) popup_note2_window_g_ParamLimits

0xfc43,	// (0x0002e3e8) popup_note2_window_g

0xd185,	// (0x0002b92a) bg_popup_sub_pane_cp11_ParamLimits

0xd192,	// (0x0002b937) cell_ai3_links_pane_g1_ParamLimits

0xd1a9,	// (0x0002b94e) cell_ai3_links_pane_t1

0x5bc7,	// (0x0002436c) set_text_pane_t1_copy1_ParamLimits

0x9012,	// (0x000277b7) cell_graphic_popup_pane_cp2_ParamLimits

0x9012,	// (0x000277b7) cell_graphic_popup_pane_cp2

0xf075,	// (0x0002d81a) cell_graphic_popup_pane_g1_cp2

0x2c6d,	// (0x00021412) cell_graphic_popup_pane_g2_cp2

0xf07d,	// (0x0002d822) cell_graphic_popup_pane_g3_cp2

0xf085,	// (0x0002d82a) cell_graphic_popup_pane_t2_cp2

0x2c7e,	// (0x00021423) grid_highlight_pane_cp3_cp2

0x683b,	// (0x00024fe0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2f9f,	// (0x00021744) main_tmo_pane_ParamLimits

0xd4c3,	// (0x0002bc68) popup_tmo_big_image_note_window

0xe69c,	// (0x0002ce41) cell_ai5_widget_list_pane

0xe6a4,	// (0x0002ce49) cell_ai5_widget_lrg_icon_pane

0xec81,	// (0x0002d426) tmo_note_info_pane_t1_ParamLimits

0xec96,	// (0x0002d43b) tmo_note_info_pane_t2_ParamLimits

0xecaf,	// (0x0002d454) tmo_note_info_pane_t3_ParamLimits

0xecc4,	// (0x0002d469) tmo_note_info_pane_t4_ParamLimits

0xecd6,	// (0x0002d47b) tmo_note_info_pane_t5_ParamLimits

0xfea4,	// (0x0002e649) tmo_note_info_pane_t_ParamLimits

0xee00,	// (0x0002d5a5) settings_container_pane_ParamLimits

0xf007,	// (0x0002d7ac) indicator_popup_pane_cp5

0xf007,	// (0x0002d7ac) indicator_popup_pane_cp6

0xb4ed,	// (0x00029c92) list_set_graphic_pane_copy1_ParamLimits

0x1206,	// (0x0001f9ab) bg_popup_window_pane_cp23

0xf093,	// (0x0002d838) popup_tmo_big_image_note_window_g1

0xf09f,	// (0x0002d844) popup_tmo_big_image_note_window_t1

0xf0af,	// (0x0002d854) popup_tmo_big_image_note_window_t2

0xf0bf,	// (0x0002d864) popup_tmo_big_image_note_window_t3

0x0002,

0xfebd,	// (0x0002e662) popup_tmo_big_image_note_window_t

0xbfb0,	// (0x0002a755) cell_ai5_widget_lrg_icon_pane_g1

0xf0cf,	// (0x0002d874) cell_ai5_widget_lrg_icon_pane_t1

0xf0dd,	// (0x0002d882) cell_ai5_widget_list_row_pane_ParamLimits

0xf0dd,	// (0x0002d882) cell_ai5_widget_list_row_pane

0xf0f5,	// (0x0002d89a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0f5,	// (0x0002d89a) cell_ai5_widget_list_row_pane_g1

0xf102,	// (0x0002d8a7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf102,	// (0x0002d8a7) cell_ai5_widget_list_row_pane_t1

0xf12d,	// (0x0002d8d2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf12d,	// (0x0002d8d2) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec4,	// (0x0002e669) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec4,	// (0x0002e669) cell_ai5_widget_list_row_pane_t

0x1206,	// (0x0001f9ab) main_fep_vtchi_ss_pane

0xf17d,	// (0x0002d922) popup_fep_char_pre_window

0xf185,	// (0x0002d92a) popup_fep_ituss_window

0xf1b7,	// (0x0002d95c) popup_fep_vkbss_window

0x9443,	// (0x00027be8) grid_vkbss_keypad_pane_ParamLimits

0x9443,	// (0x00027be8) grid_vkbss_keypad_pane

0xf1ff,	// (0x0002d9a4) ituss_keypad_pane

0x8b4f,	// (0x000272f4) aid_vkbss_key_offset_ParamLimits

0x8b4f,	// (0x000272f4) aid_vkbss_key_offset

0x8b5b,	// (0x00027300) cell_vkbss_key_pane_ParamLimits

0x8b5b,	// (0x00027300) cell_vkbss_key_pane

0xf20b,	// (0x0002d9b0) bg_cell_vkbss_key_g1_ParamLimits

0xf20b,	// (0x0002d9b0) bg_cell_vkbss_key_g1

0xf217,	// (0x0002d9bc) cell_vkbss_key_3p_pane_ParamLimits

0xf217,	// (0x0002d9bc) cell_vkbss_key_3p_pane

0xf24d,	// (0x0002d9f2) cell_vkbss_key_g1_ParamLimits

0xf24d,	// (0x0002d9f2) cell_vkbss_key_g1

0xf283,	// (0x0002da28) cell_vkbss_key_t1_ParamLimits

0xf283,	// (0x0002da28) cell_vkbss_key_t1

0x8bbd,	// (0x00027362) cell_ituss_key_pane_ParamLimits

0x8bbd,	// (0x00027362) cell_ituss_key_pane

0xf2df,	// (0x0002da84) bg_cell_ituss_key_g1_ParamLimits

0xf2df,	// (0x0002da84) bg_cell_ituss_key_g1

0xf2eb,	// (0x0002da90) cell_ituss_key_pane_g1_ParamLimits

0xf2eb,	// (0x0002da90) cell_ituss_key_pane_g1

0x8bce,	// (0x00027373) cell_ituss_key_pane_g2_ParamLimits

0x8bce,	// (0x00027373) cell_ituss_key_pane_g2

0x0005,

0xfecb,	// (0x0002e670) cell_ituss_key_pane_g_ParamLimits

0xfecb,	// (0x0002e670) cell_ituss_key_pane_g

0x8c52,	// (0x000273f7) cell_ituss_key_t1_ParamLimits

0x8c52,	// (0x000273f7) cell_ituss_key_t1

0x8c8c,	// (0x00027431) cell_ituss_key_t2_ParamLimits

0x8c8c,	// (0x00027431) cell_ituss_key_t2

0x8cbe,	// (0x00027463) cell_ituss_key_t3_ParamLimits

0x8cbe,	// (0x00027463) cell_ituss_key_t3

0x8cef,	// (0x00027494) cell_ituss_key_t4_ParamLimits

0x8cef,	// (0x00027494) cell_ituss_key_t4

0x0005,

0xfed8,	// (0x0002e67d) cell_ituss_key_t_ParamLimits

0xfed8,	// (0x0002e67d) cell_ituss_key_t

0xf311,	// (0x0002dab6) cell_vkbss_key_3p_pane_g1

0xf319,	// (0x0002dabe) cell_vkbss_key_3p_pane_g2

0xf321,	// (0x0002dac6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0002e68a) cell_vkbss_key_3p_pane_g

0x9114,	// (0x000278b9) bg_popup_fep_char_preview_window_cp02

0xf329,	// (0x0002dace) popup_fep_char_pre_window_t1

0xe625,	// (0x0002cdca) main_ai5_sk_pane

0xed50,	// (0x0002d4f5) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed5c,	// (0x0002d501) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed71,	// (0x0002d516) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed7d,	// (0x0002d522) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaf,	// (0x0002e654) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed89,	// (0x0002d52e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2f9f,	// (0x00021744) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf337,	// (0x0002dadc) main_ai5_sk_pane_g1

0x9e11,	// (0x000285b6) popup_query_code_window_g1

0xf19e,	// (0x0002d943) popup_fep_vkb_icf_pane

0xf1d3,	// (0x0002d978) popup_fep_vtchi_icf_pane

0xf340,	// (0x0002dae5) bg_icf_pane

0xf340,	// (0x0002dae5) list_vkb_icf_pane

0xf34c,	// (0x0002daf1) bg_icf_pane_cp01

0xf35f,	// (0x0002db04) vtchi_icf_list_pane

0xf3bf,	// (0x0002db64) list_vkb_icf_pane_t1_ParamLimits

0xf3bf,	// (0x0002db64) list_vkb_icf_pane_t1

0xf3d8,	// (0x0002db7d) vtchi_icf_list_pane_t1_ParamLimits

0xf3d8,	// (0x0002db7d) vtchi_icf_list_pane_t1

0xf185,	// (0x0002d92a) popup_fep_ituss_window_ParamLimits

0xf1d3,	// (0x0002d978) popup_fep_vtchi_icf_pane_ParamLimits

0xf1ff,	// (0x0002d9a4) ituss_keypad_pane_ParamLimits

0x8b45,	// (0x000272ea) ituss_sks_pane

0xf340,	// (0x0002dae5) bg_icf_pane_ParamLimits

0xf155,	// (0x0002d8fa) icf_edit_indi_pane_ParamLimits

0xf155,	// (0x0002d8fa) icf_edit_indi_pane

0xf340,	// (0x0002dae5) list_vkb_icf_pane_ParamLimits

0xf34c,	// (0x0002daf1) bg_icf_pane_cp01_ParamLimits

0xf170,	// (0x0002d915) icf_edit_indi_pane_cp01_ParamLimits

0xf170,	// (0x0002d915) icf_edit_indi_pane_cp01

0xf35f,	// (0x0002db04) vtchi_query_pane

0xe4c3,	// (0x0002cc68) icf_edit_indi_pane_g1_ParamLimits

0xe4c3,	// (0x0002cc68) icf_edit_indi_pane_g1

0xf448,	// (0x0002dbed) icf_edit_indi_pane_g2_ParamLimits

0xf448,	// (0x0002dbed) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0002e6b5) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0002e6b5) icf_edit_indi_pane_g

0xf45c,	// (0x0002dc01) icf_edit_indi_pane_t1

0xf3f1,	// (0x0002db96) bg_input_focus_pane_cp042

0x2e51,	// (0x000215f6) vtchi_button_pane

0xf3fa,	// (0x0002db9f) vtchi_query_pane_t1

0xf408,	// (0x0002dbad) vtchi_query_pane_t2

0xf416,	// (0x0002dbbb) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0002e6a4) vtchi_query_pane_t

0x1206,	// (0x0001f9ab) bg_button_pane_cp13

0xf424,	// (0x0002dbc9) vtchi_button_pane_g1

0x8d70,	// (0x00027515) ituss_sks_pane_g1

0x8d7b,	// (0x00027520) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0002e6ab) ituss_sks_pane_g

0xf42c,	// (0x0002dbd1) ituss_sks_pane_t1

0xf43a,	// (0x0002dbdf) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0002e6b0) ituss_sks_pane_t

0xba8b,	// (0x0002a230) indicator_nsta_pane_cp_g1

0xba94,	// (0x0002a239) indicator_nsta_pane_cp_g2

0xba9c,	// (0x0002a241) indicator_nsta_pane_cp_g3

0xbaa4,	// (0x0002a249) indicator_nsta_pane_cp_g4

0xba94,	// (0x0002a239) indicator_nsta_pane_cp_g5

0xba9c,	// (0x0002a241) indicator_nsta_pane_cp_g6

0x0005,

0xfa8d,	// (0x0002e232) indicator_nsta_pane_cp_g

0xe1e9,	// (0x0002c98e) cell_graphic2_pane_t2_ParamLimits

0xe1e9,	// (0x0002c98e) cell_graphic2_pane_t2

0x0001,

0xfd9a,	// (0x0002e53f) cell_graphic2_pane_t_ParamLimits

0xfd9a,	// (0x0002e53f) cell_graphic2_pane_t

0xe215,	// (0x0002c9ba) cell_graphic2_control_pane_t1

0x6ca6,	// (0x0002544b) signal_pane_g3_ParamLimits

0x6ca6,	// (0x0002544b) signal_pane_g3

0x6cb5,	// (0x0002545a) signal_pane_g4_ParamLimits

0x6cb5,	// (0x0002545a) signal_pane_g4

0xf13f,	// (0x0002d8e4) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf13f,	// (0x0002d8e4) cell_ai5_widget_list_row_pane_t3

0xf2ff,	// (0x0002daa4) cell_ituss_key_pane_t1_ParamLimits

0xf2ff,	// (0x0002daa4) cell_ituss_key_pane_t1

0x9a78,	// (0x0002821d) form_field_data_wide_pane_vc_t2_ParamLimits

0x9a78,	// (0x0002821d) form_field_data_wide_pane_vc_t2

0x9a8c,	// (0x00028231) form_field_data_wide_pane_vc_t3_ParamLimits

0x9a8c,	// (0x00028231) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e2,	// (0x0002df87) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e2,	// (0x0002df87) form_field_data_wide_pane_vc_t

0xb728,	// (0x00029ecd) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb728,	// (0x00029ecd) form_field_slider_wide_pane_vc_t3

0xb7fe,	// (0x00029fa3) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb7fe,	// (0x00029fa3) form_field_popup_wide_pane_vc_t2

0xb815,	// (0x00029fba) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb815,	// (0x00029fba) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7c,	// (0x0002e221) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7c,	// (0x0002e221) form_field_popup_wide_pane_vc_t

0x88e6,	// (0x0002708b) aid_fshwr2_btn_pane_ParamLimits

0x88f6,	// (0x0002709b) aid_fshwr2_syb_pane_ParamLimits

0x890a,	// (0x000270af) aid_fshwr2_txt_pane_ParamLimits

0x2f9f,	// (0x00021744) fshwr2_bg_pane_ParamLimits

0x891a,	// (0x000270bf) fshwr2_func_candi_pane_ParamLimits

0x893a,	// (0x000270df) fshwr2_hwr_syb_pane_ParamLimits

0x8950,	// (0x000270f5) fshwr2_icf_pane_ParamLimits

0x579b,	// (0x00023f40) list_double_graphic_pane_vc_g4_ParamLimits

0x579b,	// (0x00023f40) list_double_graphic_pane_vc_g4

0x8bee,	// (0x00027393) cell_ituss_key_pane_g3_ParamLimits

0x8bee,	// (0x00027393) cell_ituss_key_pane_g3

0x8d20,	// (0x000274c5) cell_ituss_key_t5_ParamLimits

0x8d20,	// (0x000274c5) cell_ituss_key_t5

0xf1b7,	// (0x0002d95c) popup_fep_vkbss_window_ParamLimits

0xe62f,	// (0x0002cdd4) aid_cell_ai5_quarter

0xf45c,	// (0x0002dc01) icf_edit_indi_pane_t1_ParamLimits

0x2ab1,	// (0x00021256) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x2ab1,	// (0x00021256) aid_tch_indicator_popup_pane_cp2

0x2ac4,	// (0x00021269) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x2ac4,	// (0x00021269) aid_tch_query_popup_data_pane_cp2

0x9db9,	// (0x0002855e) aid_tch_query_popup_pane_ParamLimits

0x9db9,	// (0x0002855e) aid_tch_query_popup_pane

0x9db9,	// (0x0002855e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9db9,	// (0x0002855e) aid_tch_query_popup_data_pane_cp1

0x9443,	// (0x00027be8) cell_fshwr2_syb_bg_pane_ParamLimits

0x8a4c,	// (0x000271f1) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8a60,	// (0x00027205) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf19e,	// (0x0002d943) popup_fep_vkb_icf_pane_ParamLimits

0x873a,	// (0x00026edf) bg_popup_fep_char_preview_window_g10

0xe767,	// (0x0002cf0c) cell_ai5_widget_pane_g11_ParamLimits

0xe767,	// (0x0002cf0c) cell_ai5_widget_pane_g11

0xe773,	// (0x0002cf18) cell_ai5_widget_pane_g12_ParamLimits

0xe773,	// (0x0002cf18) cell_ai5_widget_pane_g12

0xe77f,	// (0x0002cf24) cell_ai5_widget_pane_g13_ParamLimits

0xe77f,	// (0x0002cf24) cell_ai5_widget_pane_g13

0xe8af,	// (0x0002d054) cell_ai5_widget_pane_t11_ParamLimits

0xe8af,	// (0x0002d054) cell_ai5_widget_pane_t11

0xe8c1,	// (0x0002d066) cell_ai5_widget_pane_t12_ParamLimits

0xe8c1,	// (0x0002d066) cell_ai5_widget_pane_t12

0x8bfa,	// (0x0002739f) cell_ituss_key_pane_g4_ParamLimits

0x8bfa,	// (0x0002739f) cell_ituss_key_pane_g4

0x8c16,	// (0x000273bb) cell_ituss_key_pane_g5_ParamLimits

0x8c16,	// (0x000273bb) cell_ituss_key_pane_g5

0x8c32,	// (0x000273d7) cell_ituss_key_pane_g6_ParamLimits

0x8c32,	// (0x000273d7) cell_ituss_key_pane_g6

0x9973,	// (0x00028118) bg_icf_pane_g1

0xf367,	// (0x0002db0c) bg_icf_pane_g2

0xf373,	// (0x0002db18) bg_icf_pane_g3

0xf37d,	// (0x0002db22) bg_icf_pane_g4

0xf389,	// (0x0002db2e) bg_icf_pane_g5

0xf393,	// (0x0002db38) bg_icf_pane_g6

0xf39f,	// (0x0002db44) bg_icf_pane_g7

0xf3a9,	// (0x0002db4e) bg_icf_pane_g8

0xf3b5,	// (0x0002db5a) bg_icf_pane_g9

0x0008,

0xfeec,	// (0x0002e691) bg_icf_pane_g

0xf1ec,	// (0x0002d991) popup_hyb_candi_window_ParamLimits

0xf1ec,	// (0x0002d991) popup_hyb_candi_window

0x99e7,	// (0x0002818c) bg_popup_sub_pane_cp01_ParamLimits

0x99e7,	// (0x0002818c) bg_popup_sub_pane_cp01

0xf475,	// (0x0002dc1a) entry_hyb_candi_pane_ParamLimits

0xf475,	// (0x0002dc1a) entry_hyb_candi_pane

0xf484,	// (0x0002dc29) grid_hyb_candi_pane_ParamLimits

0xf484,	// (0x0002dc29) grid_hyb_candi_pane

0xf499,	// (0x0002dc3e) grid_hyb_phrase_pane_ParamLimits

0xf499,	// (0x0002dc3e) grid_hyb_phrase_pane

0xf4a8,	// (0x0002dc4d) cell_hyb_candi_pane_ParamLimits

0xf4a8,	// (0x0002dc4d) cell_hyb_candi_pane

0x2e5a,	// (0x000215ff) cell_hyb_candi_scroll_pane

0x6b4f,	// (0x000252f4) cell_hyb_candi_pane_g1

0xf4c4,	// (0x0002dc69) cell_hyb_candi_pane_t1

0xf4d2,	// (0x0002dc77) cell_hyb_phrase_pane

0x6b4f,	// (0x000252f4) cell_hyb_phrase_pane_g1

0xf4db,	// (0x0002dc80) cell_hyb_phrase_pane_t1

0xf4e9,	// (0x0002dc8e) entry_hyb_candi_pane_t1

0x9114,	// (0x000278b9) input_focus_pane_cp06

0xf4f7,	// (0x0002dc9c) cell_hyb_candi_scroll_pane_g1

0xf4ff,	// (0x0002dca4) cell_hyb_candi_scroll_pane_g1_aid

0xf507,	// (0x0002dcac) cell_hyb_candi_scroll_pane_g2

0xf50f,	// (0x0002dcb4) cell_hyb_candi_scroll_pane_g2_aid

0xf517,	// (0x0002dcbc) cell_hyb_candi_scroll_pane_g3

0xf51f,	// (0x0002dcc4) cell_hyb_candi_scroll_pane_g4

0xe584,	// (0x0002cd29) ai5_page_g1

0x8d32,	// (0x000274d7) cell_ituss_key_t6_ParamLimits

0x8d32,	// (0x000274d7) cell_ituss_key_t6

0x8b24,	// (0x000272c9) icf_edit_indi_pane_cp02_ParamLimits

0x8b24,	// (0x000272c9) icf_edit_indi_pane_cp02

0x8b38,	// (0x000272dd) icf_edit_indi_pane_cp03_ParamLimits

0x8b38,	// (0x000272dd) icf_edit_indi_pane_cp03
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
