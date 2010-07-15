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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001ace6 };

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
0x7d89,	// (0x00022a6f) Screen

0x7d9d,	// (0x00022a83) application_window_ParamLimits

0x7d9d,	// (0x00022a83) application_window

0x7db7,	// (0x00022a9d) screen_g1

0x5a43,	// (0x00020729) area_bottom_pane_ParamLimits

0x5a43,	// (0x00020729) area_bottom_pane

0x5b03,	// (0x000207e9) area_top_pane_ParamLimits

0x5b03,	// (0x000207e9) area_top_pane

0x5b97,	// (0x0002087d) main_pane_ParamLimits

0x5b97,	// (0x0002087d) main_pane

0x7dc1,	// (0x00022aa7) misc_graphics

0x979f,	// (0x00024485) battery_pane_ParamLimits

0x979f,	// (0x00024485) battery_pane

0xa47f,	// (0x00025165) bg_status_flat_pane_g8

0xa487,	// (0x0002516d) bg_status_flat_pane_g9

0x9861,	// (0x00024547) context_pane_ParamLimits

0x9861,	// (0x00024547) context_pane

0x9977,	// (0x0002465d) navi_pane_ParamLimits

0x9977,	// (0x0002465d) navi_pane

0x99fb,	// (0x000246e1) signal_pane_ParamLimits

0x99fb,	// (0x000246e1) signal_pane

0x0008,

0xf872,	// (0x0002a558) bg_status_flat_pane_g

0x9a68,	// (0x0002474e) status_pane_g1_ParamLimits

0x9a68,	// (0x0002474e) status_pane_g1

0x9a7c,	// (0x00024762) status_pane_g2_ParamLimits

0x9a7c,	// (0x00024762) status_pane_g2

0x9a88,	// (0x0002476e) status_pane_g3_ParamLimits

0x9a88,	// (0x0002476e) status_pane_g3

0x0004,

0xf7a0,	// (0x0002a486) status_pane_g_ParamLimits

0xf7a0,	// (0x0002a486) status_pane_g

0x9abc,	// (0x000247a2) title_pane_ParamLimits

0x9abc,	// (0x000247a2) title_pane

0x9af9,	// (0x000247df) uni_indicator_pane_ParamLimits

0x9af9,	// (0x000247df) uni_indicator_pane

0x96cf,	// (0x000243b5) bg_list_pane_ParamLimits

0x96cf,	// (0x000243b5) bg_list_pane

0x502d,	// (0x0001fd13) find_pane

0x96ef,	// (0x000243d5) listscroll_app_pane_ParamLimits

0x96ef,	// (0x000243d5) listscroll_app_pane

0x96fb,	// (0x000243e1) listscroll_form_pane

0x5035,	// (0x0001fd1b) listscroll_gen_pane_ParamLimits

0x5035,	// (0x0001fd1b) listscroll_gen_pane

0x646c,	// (0x00021152) listscroll_set_pane

0x8917,	// (0x000235fd) main_idle_act_pane

0x93cb,	// (0x000240b1) main_idle_trad_pane

0x93cb,	// (0x000240b1) main_list_empty_pane

0x96ef,	// (0x000243d5) main_midp_pane

0x9715,	// (0x000243fb) main_pane_g1_ParamLimits

0x9715,	// (0x000243fb) main_pane_g1

0x6474,	// (0x0002115a) popup_ai_message_window_ParamLimits

0x6474,	// (0x0002115a) popup_ai_message_window

0x651a,	// (0x00021200) popup_fep_china_uni_window_ParamLimits

0x651a,	// (0x00021200) popup_fep_china_uni_window

0x6576,	// (0x0002125c) popup_fep_japan_candidate_window_ParamLimits

0x6576,	// (0x0002125c) popup_fep_japan_candidate_window

0x6596,	// (0x0002127c) popup_fep_japan_predictive_window_ParamLimits

0x6596,	// (0x0002127c) popup_fep_japan_predictive_window

0x65c6,	// (0x000212ac) popup_find_window

0x65d3,	// (0x000212b9) popup_grid_graphic_window_ParamLimits

0x65d3,	// (0x000212b9) popup_grid_graphic_window

0x65fd,	// (0x000212e3) popup_large_graphic_colour_window

0x6623,	// (0x00021309) popup_menu_window_ParamLimits

0x6623,	// (0x00021309) popup_menu_window

0x67db,	// (0x000214c1) popup_note_image_window

0x67c7,	// (0x000214ad) popup_note_wait_window_ParamLimits

0x67c7,	// (0x000214ad) popup_note_wait_window

0x67c7,	// (0x000214ad) popup_note_window_ParamLimits

0x67c7,	// (0x000214ad) popup_note_window

0x6831,	// (0x00021517) popup_query_code_window_ParamLimits

0x6831,	// (0x00021517) popup_query_code_window

0x6845,	// (0x0002152b) popup_query_data_code_window_ParamLimits

0x6845,	// (0x0002152b) popup_query_data_code_window

0x6862,	// (0x00021548) popup_query_data_window_ParamLimits

0x6862,	// (0x00021548) popup_query_data_window

0x687e,	// (0x00021564) popup_query_sat_info_window_ParamLimits

0x687e,	// (0x00021564) popup_query_sat_info_window

0x68b7,	// (0x0002159d) popup_snote_single_graphic_window_ParamLimits

0x68b7,	// (0x0002159d) popup_snote_single_graphic_window

0x68b7,	// (0x0002159d) popup_snote_single_text_window_ParamLimits

0x68b7,	// (0x0002159d) popup_snote_single_text_window

0x68cc,	// (0x000215b2) popup_sub_window_general

0x69fc,	// (0x000216e2) popup_window_general_ParamLimits

0x69fc,	// (0x000216e2) popup_window_general

0x9723,	// (0x00024409) power_save_pane

0x62fe,	// (0x00020fe4) control_pane_g1_ParamLimits

0x62fe,	// (0x00020fe4) control_pane_g1

0x6325,	// (0x0002100b) control_pane_g2_ParamLimits

0x6325,	// (0x0002100b) control_pane_g2

0x9692,	// (0x00024378) control_pane_g3_ParamLimits

0x9692,	// (0x00024378) control_pane_g3

0x0007,

0xf788,	// (0x0002a46e) control_pane_g_ParamLimits

0xf788,	// (0x0002a46e) control_pane_g

0x636f,	// (0x00021055) control_pane_t1_ParamLimits

0x636f,	// (0x00021055) control_pane_t1

0x63c3,	// (0x000210a9) control_pane_t2_ParamLimits

0x63c3,	// (0x000210a9) control_pane_t2

0x0002,

0xf799,	// (0x0002a47f) control_pane_t_ParamLimits

0xf799,	// (0x0002a47f) control_pane_t

0x95b7,	// (0x0002429d) navi_navi_volume_pane_cp1

0x95bf,	// (0x000242a5) status_small_icon_pane

0x95c7,	// (0x000242ad) status_small_pane_g1_ParamLimits

0x95c7,	// (0x000242ad) status_small_pane_g1

0x95fb,	// (0x000242e1) status_small_pane_g2_ParamLimits

0x95fb,	// (0x000242e1) status_small_pane_g2

0x9607,	// (0x000242ed) status_small_pane_g3_ParamLimits

0x9607,	// (0x000242ed) status_small_pane_g3

0x9613,	// (0x000242f9) status_small_pane_g4_ParamLimits

0x9613,	// (0x000242f9) status_small_pane_g4

0x961f,	// (0x00024305) status_small_pane_g5_ParamLimits

0x961f,	// (0x00024305) status_small_pane_g5

0x962d,	// (0x00024313) status_small_pane_g6_ParamLimits

0x962d,	// (0x00024313) status_small_pane_g6

0x0007,

0xf777,	// (0x0002a45d) status_small_pane_g_ParamLimits

0xf777,	// (0x0002a45d) status_small_pane_g

0x965c,	// (0x00024342) status_small_pane_t1

0x967e,	// (0x00024364) status_small_wait_pane_ParamLimits

0x967e,	// (0x00024364) status_small_wait_pane

0x8e3d,	// (0x00023b23) aid_levels_signal_ParamLimits

0x8e3d,	// (0x00023b23) aid_levels_signal

0x8e4f,	// (0x00023b35) signal_pane_g1_ParamLimits

0x8e4f,	// (0x00023b35) signal_pane_g1

0x8e64,	// (0x00023b4a) signal_pane_g2_ParamLimits

0x8e64,	// (0x00023b4a) signal_pane_g2

0x0003,

0xf708,	// (0x0002a3ee) signal_pane_g_ParamLimits

0xf708,	// (0x0002a3ee) signal_pane_g

0x8e9f,	// (0x00023b85) context_pane_g1

0x7dcb,	// (0x00022ab1) title_pane_g1

0x7e01,	// (0x00022ae7) title_pane_t1

0x7e69,	// (0x00022b4f) title_pane_t2

0x7e8f,	// (0x00022b75) title_pane_t3

0x0002,

0xf557,	// (0x0002a23d) title_pane_t

0x9b11,	// (0x000247f7) aid_levels_battery_ParamLimits

0x9b11,	// (0x000247f7) aid_levels_battery

0x9b25,	// (0x0002480b) battery_pane_g1_ParamLimits

0x9b25,	// (0x0002480b) battery_pane_g1

0x9b3b,	// (0x00024821) battery_pane_g2_ParamLimits

0x9b3b,	// (0x00024821) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002a491) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002a491) battery_pane_g

0xadb5,	// (0x00025a9b) uni_indicator_pane_g1

0xadc8,	// (0x00025aae) uni_indicator_pane_g2

0xadda,	// (0x00025ac0) uni_indicator_pane_g3

0x0005,

0xf91a,	// (0x0002a600) uni_indicator_pane_g

0x923d,	// (0x00023f23) navi_icon_pane_ParamLimits

0x923d,	// (0x00023f23) navi_icon_pane

0x917b,	// (0x00023e61) navi_midp_pane

0x9259,	// (0x00023f3f) navi_navi_pane

0x9263,	// (0x00023f49) navi_text_pane_ParamLimits

0x9263,	// (0x00023f49) navi_text_pane

0x7db7,	// (0x00022a9d) status_small_wait_pane_g1

0x82e4,	// (0x00022fca) status_small_wait_pane_g2

0x0001,

0xf915,	// (0x0002a5fb) status_small_wait_pane_g

0xaada,	// (0x000257c0) navi_navi_icon_text_pane

0xaae2,	// (0x000257c8) navi_navi_pane_g1_ParamLimits

0xaae2,	// (0x000257c8) navi_navi_pane_g1

0xaaf4,	// (0x000257da) navi_navi_pane_g2_ParamLimits

0xaaf4,	// (0x000257da) navi_navi_pane_g2

0x0001,

0xf8e3,	// (0x0002a5c9) navi_navi_pane_g_ParamLimits

0xf8e3,	// (0x0002a5c9) navi_navi_pane_g

0xab06,	// (0x000257ec) navi_navi_tabs_pane

0xab0f,	// (0x000257f5) navi_navi_text_pane

0xaada,	// (0x000257c0) navi_navi_volume_pane

0xaab6,	// (0x0002579c) navi_text_pane_t1

0xaaaa,	// (0x00025790) navi_icon_pane_g1

0xa9fd,	// (0x000256e3) navi_navi_text_pane_t1

0x6c86,	// (0x0002196c) navi_navi_volume_pane_g1

0x6c8e,	// (0x00021974) volume_small_pane

0xa963,	// (0x00025649) navi_navi_icon_text_pane_g1

0xa96b,	// (0x00025651) navi_navi_icon_text_pane_t1

0x9259,	// (0x00023f3f) navi_tabs_2_long_pane

0x9259,	// (0x00023f3f) navi_tabs_2_pane

0x9259,	// (0x00023f3f) navi_tabs_3_long_pane

0x9259,	// (0x00023f3f) navi_tabs_3_pane

0x9259,	// (0x00023f3f) navi_tabs_4_pane

0x6c66,	// (0x0002194c) tabs_2_active_pane_ParamLimits

0x6c66,	// (0x0002194c) tabs_2_active_pane

0x6c76,	// (0x0002195c) tabs_2_passive_pane_ParamLimits

0x6c76,	// (0x0002195c) tabs_2_passive_pane

0x6c34,	// (0x0002191a) tabs_3_active_pane_ParamLimits

0x6c34,	// (0x0002191a) tabs_3_active_pane

0x6c44,	// (0x0002192a) tabs_3_passive_pane_ParamLimits

0x6c44,	// (0x0002192a) tabs_3_passive_pane

0x6c55,	// (0x0002193b) tabs_3_passive_pane_cp_ParamLimits

0x6c55,	// (0x0002193b) tabs_3_passive_pane_cp

0x6bf0,	// (0x000218d6) tabs_4_active_pane_ParamLimits

0x6bf0,	// (0x000218d6) tabs_4_active_pane

0x6c01,	// (0x000218e7) tabs_4_passive_pane_ParamLimits

0x6c01,	// (0x000218e7) tabs_4_passive_pane

0x6c12,	// (0x000218f8) tabs_4_passive_pane_cp_ParamLimits

0x6c12,	// (0x000218f8) tabs_4_passive_pane_cp

0x6c23,	// (0x00021909) tabs_4_passive_pane_cp2_ParamLimits

0x6c23,	// (0x00021909) tabs_4_passive_pane_cp2

0x6bcc,	// (0x000218b2) tabs_2_long_active_pane_ParamLimits

0x6bcc,	// (0x000218b2) tabs_2_long_active_pane

0x6bde,	// (0x000218c4) tabs_2_long_passive_pane_ParamLimits

0x6bde,	// (0x000218c4) tabs_2_long_passive_pane

0x6b8d,	// (0x00021873) tabs_3_long_active_pane_ParamLimits

0x6b8d,	// (0x00021873) tabs_3_long_active_pane

0x6ba0,	// (0x00021886) tabs_3_long_passive_pane_ParamLimits

0x6ba0,	// (0x00021886) tabs_3_long_passive_pane

0x6bb9,	// (0x0002189f) tabs_3_long_passive_pane_cp_ParamLimits

0x6bb9,	// (0x0002189f) tabs_3_long_passive_pane_cp

0x6b33,	// (0x00021819) volume_small_pane_g1

0x6b3c,	// (0x00021822) volume_small_pane_g2

0x6b45,	// (0x0002182b) volume_small_pane_g3

0x6b4e,	// (0x00021834) volume_small_pane_g4

0x6b57,	// (0x0002183d) volume_small_pane_g5

0x6b60,	// (0x00021846) volume_small_pane_g6

0x6b69,	// (0x0002184f) volume_small_pane_g7

0x6b72,	// (0x00021858) volume_small_pane_g8

0x6b7b,	// (0x00021861) volume_small_pane_g9

0x6b84,	// (0x0002186a) volume_small_pane_g10

0x0009,

0xf8af,	// (0x0002a595) volume_small_pane_g

0x7ea1,	// (0x00022b87) bg_active_tab_pane_cp2_ParamLimits

0x7ea1,	// (0x00022b87) bg_active_tab_pane_cp2

0x7eaf,	// (0x00022b95) tabs_3_active_pane_g1

0x7eb7,	// (0x00022b9d) tabs_3_active_pane_t1

0x7ea1,	// (0x00022b87) bg_passive_tab_pane_cp2_ParamLimits

0x7ea1,	// (0x00022b87) bg_passive_tab_pane_cp2

0x7eaf,	// (0x00022b95) tabs_3_passive_pane_g1

0x7eb7,	// (0x00022b9d) tabs_3_passive_pane_t1

0x7ea1,	// (0x00022b87) bg_active_tab_pane_cp3_ParamLimits

0x7ea1,	// (0x00022b87) bg_active_tab_pane_cp3

0x7ec9,	// (0x00022baf) tabs_4_active_pane_g1

0x7ed1,	// (0x00022bb7) tabs_4_active_pane_t1

0x7ea1,	// (0x00022b87) bg_passive_tab_pane_cp3_ParamLimits

0x7ea1,	// (0x00022b87) bg_passive_tab_pane_cp3

0x7ec9,	// (0x00022baf) tabs_4_1_passive_pane_g1

0x7ed1,	// (0x00022bb7) tabs_4_1_passive_pane_t1

0x96ef,	// (0x000243d5) list_highlight_pane_cp2

0xb01d,	// (0x00025d03) list_set_pane_ParamLimits

0xb01d,	// (0x00025d03) list_set_pane

0xb0c3,	// (0x00025da9) main_pane_set_t1_ParamLimits

0xb0c3,	// (0x00025da9) main_pane_set_t1

0xb0e3,	// (0x00025dc9) main_pane_set_t2_ParamLimits

0xb0e3,	// (0x00025dc9) main_pane_set_t2

0xb0f7,	// (0x00025ddd) main_pane_set_t3_ParamLimits

0xb0f7,	// (0x00025ddd) main_pane_set_t3

0xb109,	// (0x00025def) main_pane_set_t4_ParamLimits

0xb109,	// (0x00025def) main_pane_set_t4

0x0003,

0xf97f,	// (0x0002a665) main_pane_set_t_ParamLimits

0xf97f,	// (0x0002a665) main_pane_set_t

0xb11b,	// (0x00025e01) setting_code_pane

0xb127,	// (0x00025e0d) setting_slider_graphic_pane

0xb127,	// (0x00025e0d) setting_slider_pane

0xb127,	// (0x00025e0d) setting_text_pane

0xb127,	// (0x00025e0d) setting_volume_pane

0x5de6,	// (0x00020acc) volume_set_pane

0x7ea1,	// (0x00022b87) bg_set_opt_pane_cp

0x5dee,	// (0x00020ad4) setting_slider_pane_t1

0x5e07,	// (0x00020aed) setting_slider_pane_t2

0x5e21,	// (0x00020b07) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002a244) setting_slider_pane_t

0x5e39,	// (0x00020b1f) slider_set_pane

0x7dc1,	// (0x00022aa7) bg_set_opt_pane_cp2

0x7ee3,	// (0x00022bc9) setting_slider_graphic_pane_g1

0x5e4f,	// (0x00020b35) setting_slider_graphic_pane_t1

0x5e5f,	// (0x00020b45) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002a24b) setting_slider_graphic_pane_t

0x5e6f,	// (0x00020b55) slider_set_pane_cp

0x7dc1,	// (0x00022aa7) input_focus_pane_cp1

0xafdc,	// (0x00025cc2) list_set_text_pane

0x7db7,	// (0x00022a9d) setting_text_pane_g1

0x7dc1,	// (0x00022aa7) input_focus_pane_cp2

0x7db7,	// (0x00022a9d) setting_code_pane_g1

0x7eec,	// (0x00022bd2) setting_code_pane_t1

0x4880,	// (0x0001f566) set_text_pane_t1_ParamLimits

0x4880,	// (0x0001f566) set_text_pane_t1

0x878e,	// (0x00023474) set_opt_bg_pane_g1

0x8796,	// (0x0002347c) set_opt_bg_pane_g2

0xafb6,	// (0x00025c9c) set_opt_bg_pane_g3

0x87a6,	// (0x0002348c) set_opt_bg_pane_g4

0x87ae,	// (0x00023494) set_opt_bg_pane_g5

0x87b6,	// (0x0002349c) set_opt_bg_pane_g6

0xafc0,	// (0x00025ca6) set_opt_bg_pane_g7

0xafc8,	// (0x00025cae) set_opt_bg_pane_g8

0xafd2,	// (0x00025cb8) set_opt_bg_pane_g9

0x0008,

0xf96c,	// (0x0002a652) set_opt_bg_pane_g

0xafa9,	// (0x00025c8f) slider_set_pane_g1

0x6cfb,	// (0x000219e1) slider_set_pane_g2

0x0006,

0xf95d,	// (0x0002a643) slider_set_pane_g

0x6c97,	// (0x0002197d) volume_set_pane_g1

0x6c9f,	// (0x00021985) volume_set_pane_g2

0x6ca7,	// (0x0002198d) volume_set_pane_g3

0x6caf,	// (0x00021995) volume_set_pane_g4

0x6cb7,	// (0x0002199d) volume_set_pane_g5

0x6cbf,	// (0x000219a5) volume_set_pane_g6

0x6cc7,	// (0x000219ad) volume_set_pane_g7

0x6ccf,	// (0x000219b5) volume_set_pane_g8

0x6cd7,	// (0x000219bd) volume_set_pane_g9

0x6cdf,	// (0x000219c5) volume_set_pane_g10

0x0009,

0xf935,	// (0x0002a61b) volume_set_pane_g

0x7efa,	// (0x00022be0) indicator_pane_ParamLimits

0x7efa,	// (0x00022be0) indicator_pane

0x7f06,	// (0x00022bec) main_idle_pane_g2_ParamLimits

0x7f06,	// (0x00022bec) main_idle_pane_g2

0x7f2e,	// (0x00022c14) main_pane_idle_g1_ParamLimits

0x7f2e,	// (0x00022c14) main_pane_idle_g1

0x7f3b,	// (0x00022c21) popup_clock_digital_analogue_window_ParamLimits

0x7f3b,	// (0x00022c21) popup_clock_digital_analogue_window

0x7f52,	// (0x00022c38) soft_indicator_pane_ParamLimits

0x7f52,	// (0x00022c38) soft_indicator_pane

0x7f5e,	// (0x00022c44) wallpaper_pane_ParamLimits

0x7f5e,	// (0x00022c44) wallpaper_pane

0x7db7,	// (0x00022a9d) wallpaper_pane_g1

0x7f72,	// (0x00022c58) indicator_pane_g1_ParamLimits

0x7f72,	// (0x00022c58) indicator_pane_g1

0xb3e0,	// (0x000260c6) navi_navi_icon_text_pane_srt_g1

0x7f8d,	// (0x00022c73) soft_indicator_pane_t1

0x7fa7,	// (0x00022c8d) aid_ps_area_pane

0x7fb8,	// (0x00022c9e) aid_ps_clock_pane

0x7fc6,	// (0x00022cac) aid_ps_indicator_pane

0x7fd2,	// (0x00022cb8) indicator_ps_pane_ParamLimits

0x7fd2,	// (0x00022cb8) indicator_ps_pane

0x7fe1,	// (0x00022cc7) power_save_pane_g1_ParamLimits

0x7fe1,	// (0x00022cc7) power_save_pane_g1

0x7fed,	// (0x00022cd3) power_save_pane_g2_ParamLimits

0x7fed,	// (0x00022cd3) power_save_pane_g2

0x59f7,	// (0x000206dd) aid_navinavi_width_pane

0x7fa7,	// (0x00022c8d) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002a250) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002a250) power_save_pane_g

0x7ffb,	// (0x00022ce1) power_save_pane_t1_ParamLimits

0x7ffb,	// (0x00022ce1) power_save_pane_t1

0x7fb8,	// (0x00022c9e) aid_ps_clock_pane_ParamLimits

0x7fc6,	// (0x00022cac) aid_ps_indicator_pane_ParamLimits

0x800d,	// (0x00022cf3) power_save_pane_t4_ParamLimits

0x800d,	// (0x00022cf3) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002a255) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002a255) power_save_pane_t

0x8037,	// (0x00022d1d) power_save_t3_ParamLimits

0x8037,	// (0x00022d1d) power_save_t3

0x8022,	// (0x00022d08) power_save_t2_ParamLimits

0x8022,	// (0x00022d08) power_save_t2

0x804c,	// (0x00022d32) indicator_ps_pane_g1

0x8055,	// (0x00022d3b) ai_gene_pane_ParamLimits

0x8055,	// (0x00022d3b) ai_gene_pane

0x8061,	// (0x00022d47) ai_links_pane_ParamLimits

0x8061,	// (0x00022d47) ai_links_pane

0x806d,	// (0x00022d53) indicator_pane_cp1_ParamLimits

0x806d,	// (0x00022d53) indicator_pane_cp1

0x8079,	// (0x00022d5f) main_pane_idle_g1_cp_ParamLimits

0x8079,	// (0x00022d5f) main_pane_idle_g1_cp

0x8085,	// (0x00022d6b) popup_ai_links_title_window

0x808e,	// (0x00022d74) soft_indicator_pane_cp1_ParamLimits

0x808e,	// (0x00022d74) soft_indicator_pane_cp1

0xada3,	// (0x00025a89) ai_links_pane_g1

0xadac,	// (0x00025a92) grid_ai_links_pane

0xad86,	// (0x00025a6c) ai_gene_pane_1

0xad91,	// (0x00025a77) ai_gene_pane_2

0xad9a,	// (0x00025a80) list_highlight_pane_cp4

0xad6a,	// (0x00025a50) cell_ai_link_pane_ParamLimits

0xad6a,	// (0x00025a50) cell_ai_link_pane

0xad62,	// (0x00025a48) cell_ai_link_pane_g1

0x82e4,	// (0x00022fca) cell_ai_link_pane_g2

0x0001,

0xf910,	// (0x0002a5f6) cell_ai_link_pane_g

0x7dc1,	// (0x00022aa7) grid_highlight_cp2

0x7dc1,	// (0x00022aa7) bg_popup_sub_pane_cp1

0x80a8,	// (0x00022d8e) popup_ai_links_title_window_t1

0xacb0,	// (0x00025996) ai_gene_pane_1_g1_ParamLimits

0xacb0,	// (0x00025996) ai_gene_pane_1_g1

0xacbc,	// (0x000259a2) ai_gene_pane_1_g2_ParamLimits

0xacbc,	// (0x000259a2) ai_gene_pane_1_g2

0x0001,

0xf906,	// (0x0002a5ec) ai_gene_pane_1_g_ParamLimits

0xf906,	// (0x0002a5ec) ai_gene_pane_1_g

0xacc9,	// (0x000259af) ai_gene_pane_1_t1_ParamLimits

0xacc9,	// (0x000259af) ai_gene_pane_1_t1

0xacfd,	// (0x000259e3) grid_ai_soft_ind_pane

0xac9b,	// (0x00025981) ai_gene_pane_2_t1_ParamLimits

0xac9b,	// (0x00025981) ai_gene_pane_2_t1

0x80b7,	// (0x00022d9d) main_pane_empty_t1_ParamLimits

0x80b7,	// (0x00022d9d) main_pane_empty_t1

0x80cf,	// (0x00022db5) main_pane_empty_t2_ParamLimits

0x80cf,	// (0x00022db5) main_pane_empty_t2

0x80e4,	// (0x00022dca) main_pane_empty_t3_ParamLimits

0x80e4,	// (0x00022dca) main_pane_empty_t3

0x80f6,	// (0x00022ddc) main_pane_empty_t4_ParamLimits

0x80f6,	// (0x00022ddc) main_pane_empty_t4

0x8108,	// (0x00022dee) main_pane_empty_t5_ParamLimits

0x8108,	// (0x00022dee) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002a25a) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002a25a) main_pane_empty_t

0x87df,	// (0x000234c5) bg_popup_window_pane_ParamLimits

0x87df,	// (0x000234c5) bg_popup_window_pane

0xaa0b,	// (0x000256f1) find_popup_pane_cp2_ParamLimits

0xaa0b,	// (0x000256f1) find_popup_pane_cp2

0xaa17,	// (0x000256fd) heading_pane_ParamLimits

0xaa17,	// (0x000256fd) heading_pane

0x7dc1,	// (0x00022aa7) bg_popup_sub_pane

0xa985,	// (0x0002566b) bg_popup_window_pane_g1_ParamLimits

0xa985,	// (0x0002566b) bg_popup_window_pane_g1

0xa991,	// (0x00025677) bg_popup_window_pane_g2_ParamLimits

0xa991,	// (0x00025677) bg_popup_window_pane_g2

0xa99d,	// (0x00025683) bg_popup_window_pane_g3_ParamLimits

0xa99d,	// (0x00025683) bg_popup_window_pane_g3

0xa9a9,	// (0x0002568f) bg_popup_window_pane_g4_ParamLimits

0xa9a9,	// (0x0002568f) bg_popup_window_pane_g4

0xa9b5,	// (0x0002569b) bg_popup_window_pane_g5_ParamLimits

0xa9b5,	// (0x0002569b) bg_popup_window_pane_g5

0xa9c1,	// (0x000256a7) bg_popup_window_pane_g6_ParamLimits

0xa9c1,	// (0x000256a7) bg_popup_window_pane_g6

0xa9cd,	// (0x000256b3) bg_popup_window_pane_g7_ParamLimits

0xa9cd,	// (0x000256b3) bg_popup_window_pane_g7

0xa9d9,	// (0x000256bf) bg_popup_window_pane_g8_ParamLimits

0xa9d9,	// (0x000256bf) bg_popup_window_pane_g8

0xa9e5,	// (0x000256cb) bg_popup_window_pane_g9_ParamLimits

0xa9e5,	// (0x000256cb) bg_popup_window_pane_g9

0xa9f1,	// (0x000256d7) bg_popup_window_pane_g10_ParamLimits

0xa9f1,	// (0x000256d7) bg_popup_window_pane_g10

0x0009,

0xf8ce,	// (0x0002a5b4) bg_popup_window_pane_g_ParamLimits

0xf8ce,	// (0x0002a5b4) bg_popup_window_pane_g

0xa91a,	// (0x00025600) bg_popup_heading_pane_ParamLimits

0xa91a,	// (0x00025600) bg_popup_heading_pane

0x6d83,	// (0x00021a69) tabs_4_passive_pane_cp_srt_ParamLimits

0x6d83,	// (0x00021a69) tabs_4_passive_pane_cp_srt

0x6d95,	// (0x00021a7b) tabs_4_passive_pane_srt_ParamLimits

0xa92e,	// (0x00025614) heading_pane_g2

0x6d95,	// (0x00021a7b) tabs_4_passive_pane_srt

0x96ef,	// (0x000243d5) bg_passive_tab_pane_cp3_srt_ParamLimits

0x96ef,	// (0x000243d5) bg_passive_tab_pane_cp3_srt

0xa936,	// (0x0002561c) heading_pane_t1_ParamLimits

0xa936,	// (0x0002561c) heading_pane_t1

0xa94d,	// (0x00025633) heading_pane_t2_ParamLimits

0xa94d,	// (0x00025633) heading_pane_t2

0x0001,

0xf8c9,	// (0x0002a5af) heading_pane_t_ParamLimits

0xf8c9,	// (0x0002a5af) heading_pane_t

0xa447,	// (0x0002512d) bg_popup_heading_pane_g1

0xa4f6,	// (0x000251dc) bg_popup_heading_pane_g2

0xa500,	// (0x000251e6) bg_popup_heading_pane_g3

0xa50a,	// (0x000251f0) bg_popup_heading_pane_g4

0xa514,	// (0x000251fa) bg_popup_heading_pane_g5

0xa51e,	// (0x00025204) bg_popup_heading_pane_g6

0xa526,	// (0x0002520c) bg_popup_heading_pane_g7

0xa52e,	// (0x00025214) bg_popup_heading_pane_g8

0xa538,	// (0x0002521e) bg_popup_heading_pane_g9

0x0008,

0xf885,	// (0x0002a56b) bg_popup_heading_pane_g

0x9c13,	// (0x000248f9) bg_popup_sub_pane_g1

0x9c1b,	// (0x00024901) bg_popup_sub_pane_g2

0x9c23,	// (0x00024909) bg_popup_sub_pane_g3

0x9c2b,	// (0x00024911) bg_popup_sub_pane_g4

0x9c33,	// (0x00024919) bg_popup_sub_pane_g5

0x9c3b,	// (0x00024921) bg_popup_sub_pane_g6

0x9c43,	// (0x00024929) bg_popup_sub_pane_g7

0x9c4b,	// (0x00024931) bg_popup_sub_pane_g8

0x9c53,	// (0x00024939) bg_popup_sub_pane_g9

0x0008,

0xf85f,	// (0x0002a545) bg_popup_sub_pane_g

0x811c,	// (0x00022e02) bg_popup_window_pane_cp5_ParamLimits

0x811c,	// (0x00022e02) bg_popup_window_pane_cp5

0x8138,	// (0x00022e1e) popup_note_window_g1_ParamLimits

0x8138,	// (0x00022e1e) popup_note_window_g1

0x8144,	// (0x00022e2a) popup_note_window_t1_ParamLimits

0x8144,	// (0x00022e2a) popup_note_window_t1

0x815a,	// (0x00022e40) popup_note_window_t2_ParamLimits

0x815a,	// (0x00022e40) popup_note_window_t2

0x8170,	// (0x00022e56) popup_note_window_t3_ParamLimits

0x8170,	// (0x00022e56) popup_note_window_t3

0x8186,	// (0x00022e6c) popup_note_window_t4_ParamLimits

0x8186,	// (0x00022e6c) popup_note_window_t4

0x81ae,	// (0x00022e94) popup_note_window_t5_ParamLimits

0x81ae,	// (0x00022e94) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002a265) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002a265) popup_note_window_t

0x81f8,	// (0x00022ede) bg_popup_window_pane_cp6_ParamLimits

0x81f8,	// (0x00022ede) bg_popup_window_pane_cp6

0xa3c3,	// (0x000250a9) popup_note_image_window_g1_ParamLimits

0xa3c3,	// (0x000250a9) popup_note_image_window_g1

0xa3cf,	// (0x000250b5) popup_note_image_window_g2_ParamLimits

0xa3cf,	// (0x000250b5) popup_note_image_window_g2

0x0001,

0xf853,	// (0x0002a539) popup_note_image_window_g_ParamLimits

0xf853,	// (0x0002a539) popup_note_image_window_g

0xa3e8,	// (0x000250ce) popup_note_image_window_t1_ParamLimits

0xa3e8,	// (0x000250ce) popup_note_image_window_t1

0xa401,	// (0x000250e7) popup_note_image_window_t2_ParamLimits

0xa401,	// (0x000250e7) popup_note_image_window_t2

0xa41a,	// (0x00025100) popup_note_image_window_t3_ParamLimits

0xa41a,	// (0x00025100) popup_note_image_window_t3

0x0002,

0xf858,	// (0x0002a53e) popup_note_image_window_t_ParamLimits

0xf858,	// (0x0002a53e) popup_note_image_window_t

0xa284,	// (0x00024f6a) bg_popup_window_pane_cp7_ParamLimits

0xa284,	// (0x00024f6a) bg_popup_window_pane_cp7

0xa2b4,	// (0x00024f9a) popup_note_wait_window_g1_ParamLimits

0xa2b4,	// (0x00024f9a) popup_note_wait_window_g1

0xa2c0,	// (0x00024fa6) popup_note_wait_window_g2_ParamLimits

0xa2c0,	// (0x00024fa6) popup_note_wait_window_g2

0x0002,

0xf841,	// (0x0002a527) popup_note_wait_window_g_ParamLimits

0xf841,	// (0x0002a527) popup_note_wait_window_g

0xa2d8,	// (0x00024fbe) popup_note_wait_window_t1_ParamLimits

0xa2d8,	// (0x00024fbe) popup_note_wait_window_t1

0xa2ff,	// (0x00024fe5) popup_note_wait_window_t2_ParamLimits

0xa2ff,	// (0x00024fe5) popup_note_wait_window_t2

0xa31c,	// (0x00025002) popup_note_wait_window_t3_ParamLimits

0xa31c,	// (0x00025002) popup_note_wait_window_t3

0xa32f,	// (0x00025015) popup_note_wait_window_t4_ParamLimits

0xa32f,	// (0x00025015) popup_note_wait_window_t4

0x0004,

0xf848,	// (0x0002a52e) popup_note_wait_window_t_ParamLimits

0xf848,	// (0x0002a52e) popup_note_wait_window_t

0xa354,	// (0x0002503a) wait_bar_pane_ParamLimits

0xa354,	// (0x0002503a) wait_bar_pane

0x7dc1,	// (0x00022aa7) wait_anim_pane

0x7dc1,	// (0x00022aa7) wait_border_pane

0x7db7,	// (0x00022a9d) wait_anim_pane_g1

0x7db7,	// (0x00022a9d) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002a3e9) wait_anim_pane_g

0xa228,	// (0x00024f0e) wait_border_pane_g1

0xa233,	// (0x00024f19) wait_border_pane_g2

0xa23c,	// (0x00024f22) wait_border_pane_g3

0x0002,

0xf83a,	// (0x0002a520) wait_border_pane_g

0xa093,	// (0x00024d79) bg_popup_window_pane_cp16_ParamLimits

0xa093,	// (0x00024d79) bg_popup_window_pane_cp16

0xa193,	// (0x00024e79) indicator_popup_pane_cp4_ParamLimits

0xa193,	// (0x00024e79) indicator_popup_pane_cp4

0xa1a7,	// (0x00024e8d) popup_query_data_window_t1_ParamLimits

0xa1a7,	// (0x00024e8d) popup_query_data_window_t1

0xa1b9,	// (0x00024e9f) popup_query_data_window_t2_ParamLimits

0xa1b9,	// (0x00024e9f) popup_query_data_window_t2

0xa1d2,	// (0x00024eb8) popup_query_data_window_t3_ParamLimits

0xa1d2,	// (0x00024eb8) popup_query_data_window_t3

0x0002,

0xf833,	// (0x0002a519) popup_query_data_window_t_ParamLimits

0xf833,	// (0x0002a519) popup_query_data_window_t

0xa1ec,	// (0x00024ed2) query_popup_data_pane_ParamLimits

0xa1ec,	// (0x00024ed2) query_popup_data_pane

0xa200,	// (0x00024ee6) query_popup_data_pane_cp1_ParamLimits

0xa200,	// (0x00024ee6) query_popup_data_pane_cp1

0xa093,	// (0x00024d79) bg_popup_window_pane_cp10_ParamLimits

0xa093,	// (0x00024d79) bg_popup_window_pane_cp10

0xa0c5,	// (0x00024dab) indicator_popup_pane_ParamLimits

0xa0c5,	// (0x00024dab) indicator_popup_pane

0xa0e7,	// (0x00024dcd) popup_query_code_window_t1_ParamLimits

0xa0e7,	// (0x00024dcd) popup_query_code_window_t1

0xa101,	// (0x00024de7) popup_query_code_window_t2_ParamLimits

0xa101,	// (0x00024de7) popup_query_code_window_t2

0xa14a,	// (0x00024e30) popup_query_code_window_t3_ParamLimits

0xa14a,	// (0x00024e30) popup_query_code_window_t3

0x0002,

0xf82c,	// (0x0002a512) popup_query_code_window_t_ParamLimits

0xf82c,	// (0x0002a512) popup_query_code_window_t

0xa179,	// (0x00024e5f) query_popup_pane_ParamLimits

0xa179,	// (0x00024e5f) query_popup_pane

0x81f8,	// (0x00022ede) bg_popup_window_pane_cp15_ParamLimits

0x81f8,	// (0x00022ede) bg_popup_window_pane_cp15

0x8216,	// (0x00022efc) indicator_popup_pane_cp1_ParamLimits

0x8216,	// (0x00022efc) indicator_popup_pane_cp1

0x8229,	// (0x00022f0f) indicator_popup_pane_cp2_ParamLimits

0x8229,	// (0x00022f0f) indicator_popup_pane_cp2

0x823c,	// (0x00022f22) popup_query_data_code_window_g1_ParamLimits

0x823c,	// (0x00022f22) popup_query_data_code_window_g1

0x824f,	// (0x00022f35) popup_query_data_code_window_t1_ParamLimits

0x824f,	// (0x00022f35) popup_query_data_code_window_t1

0x8261,	// (0x00022f47) popup_query_data_code_window_t2_ParamLimits

0x8261,	// (0x00022f47) popup_query_data_code_window_t2

0x8273,	// (0x00022f59) popup_query_data_code_window_t3_ParamLimits

0x8273,	// (0x00022f59) popup_query_data_code_window_t3

0x8289,	// (0x00022f6f) popup_query_data_code_window_t4_ParamLimits

0x8289,	// (0x00022f6f) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002a270) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002a270) popup_query_data_code_window_t

0x6a66,	// (0x0002174c) list_single_midp_graphic_pane_g3

0x82a1,	// (0x00022f87) query_popup_data_pane_cp2_ParamLimits

0x82b4,	// (0x00022f9a) query_popup_pane_cp2_ParamLimits

0x82b4,	// (0x00022f9a) query_popup_pane_cp2

0x7dc1,	// (0x00022aa7) bg_popup_window_pane_cp11

0xa07f,	// (0x00024d65) heading_pane_cp5

0x839f,	// (0x00023085) listscroll_popup_info_pane

0x7dc1,	// (0x00022aa7) input_focus_pane_cp3

0x82c7,	// (0x00022fad) query_popup_pane_t1

0x82d5,	// (0x00022fbb) list_popup_info_pane_ParamLimits

0x82d5,	// (0x00022fbb) list_popup_info_pane

0x82e4,	// (0x00022fca) listscroll_popup_info_pane_g1

0x82ec,	// (0x00022fd2) scroll_pane_cp7

0x82f6,	// (0x00022fdc) popup_info_list_pane_t1_ParamLimits

0x82f6,	// (0x00022fdc) popup_info_list_pane_t1

0x8310,	// (0x00022ff6) popup_info_list_pane_t2_ParamLimits

0x8310,	// (0x00022ff6) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002a279) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002a279) popup_info_list_pane_t

0x7dc1,	// (0x00022aa7) bg_popup_window_pane_cp12

0xb3fa,	// (0x000260e0) find_popup_pane

0x7ea1,	// (0x00022b87) bg_popup_window_pane_cp3

0x832a,	// (0x00023010) heading_pane_cp3

0x8336,	// (0x0002301c) listscroll_popup_graphic_pane

0x7dc1,	// (0x00022aa7) bg_popup_window_pane_cp4

0x8395,	// (0x0002307b) heading_pane_cp4

0x839f,	// (0x00023085) listscroll_popup_colour_pane

0x83a7,	// (0x0002308d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x83a7,	// (0x0002308d) cell_large_graphic_colour_none_popup_pane

0x83bb,	// (0x000230a1) grid_large_graphic_colour_popup_pane_ParamLimits

0x83bb,	// (0x000230a1) grid_large_graphic_colour_popup_pane

0x83e7,	// (0x000230cd) listscroll_popup_colour_pane_g1_ParamLimits

0x83e7,	// (0x000230cd) listscroll_popup_colour_pane_g1

0x83fe,	// (0x000230e4) listscroll_popup_colour_pane_g2_ParamLimits

0x83fe,	// (0x000230e4) listscroll_popup_colour_pane_g2

0x8415,	// (0x000230fb) listscroll_popup_colour_pane_g3_ParamLimits

0x8415,	// (0x000230fb) listscroll_popup_colour_pane_g3

0x8425,	// (0x0002310b) listscroll_popup_colour_pane_g4_ParamLimits

0x8425,	// (0x0002310b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002a27e) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002a27e) listscroll_popup_colour_pane_g

0x8439,	// (0x0002311f) scroll_pane_cp6_ParamLimits

0x8439,	// (0x0002311f) scroll_pane_cp6

0x844b,	// (0x00023131) cell_large_graphic_colour_popup_pane_ParamLimits

0x844b,	// (0x00023131) cell_large_graphic_colour_popup_pane

0x846a,	// (0x00023150) cell_large_graphic_colour_none_popup_pane_t1

0x7dc1,	// (0x00022aa7) grid_highlight_pane_cp5

0x8479,	// (0x0002315f) cell_large_graphic_colour_popup_pane_g1

0x8481,	// (0x00023167) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002a287) cell_large_graphic_colour_popup_pane_g

0x8489,	// (0x0002316f) cell_large_graphic_colour_popup_pane_g2_copy1

0x8492,	// (0x00023178) grid_highlight_pane_cp4

0x849a,	// (0x00023180) bg_popup_window_pane_cp8_ParamLimits

0x849a,	// (0x00023180) bg_popup_window_pane_cp8

0x84b5,	// (0x0002319b) popup_snote_single_text_window_g1_ParamLimits

0x84b5,	// (0x0002319b) popup_snote_single_text_window_g1

0x84c7,	// (0x000231ad) popup_snote_single_text_window_t1_ParamLimits

0x84c7,	// (0x000231ad) popup_snote_single_text_window_t1

0x84da,	// (0x000231c0) popup_snote_single_text_window_t2_ParamLimits

0x84da,	// (0x000231c0) popup_snote_single_text_window_t2

0x84ed,	// (0x000231d3) popup_snote_single_text_window_t3_ParamLimits

0x84ed,	// (0x000231d3) popup_snote_single_text_window_t3

0x8526,	// (0x0002320c) popup_snote_single_text_window_t4_ParamLimits

0x8526,	// (0x0002320c) popup_snote_single_text_window_t4

0x855a,	// (0x00023240) popup_snote_single_text_window_t5_ParamLimits

0x855a,	// (0x00023240) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002a28c) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002a28c) popup_snote_single_text_window_t

0x8589,	// (0x0002326f) bg_popup_window_pane_cp9_ParamLimits

0x8589,	// (0x0002326f) bg_popup_window_pane_cp9

0x84b5,	// (0x0002319b) popup_snote_single_graphic_window_g1_ParamLimits

0x84b5,	// (0x0002319b) popup_snote_single_graphic_window_g1

0x8597,	// (0x0002327d) popup_snote_single_graphic_window_g2_ParamLimits

0x8597,	// (0x0002327d) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002a297) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002a297) popup_snote_single_graphic_window_g

0x85a3,	// (0x00023289) popup_snote_single_graphic_window_t1_ParamLimits

0x85a3,	// (0x00023289) popup_snote_single_graphic_window_t1

0x85b6,	// (0x0002329c) popup_snote_single_graphic_window_t2_ParamLimits

0x85b6,	// (0x0002329c) popup_snote_single_graphic_window_t2

0x85c9,	// (0x000232af) popup_snote_single_graphic_window_t3_ParamLimits

0x85c9,	// (0x000232af) popup_snote_single_graphic_window_t3

0x8602,	// (0x000232e8) popup_snote_single_graphic_window_t4_ParamLimits

0x8602,	// (0x000232e8) popup_snote_single_graphic_window_t4

0x8636,	// (0x0002331c) popup_snote_single_graphic_window_t5_ParamLimits

0x8636,	// (0x0002331c) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002a29c) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002a29c) popup_snote_single_graphic_window_t

0xb33c,	// (0x00026022) grid_graphic_popup_pane_ParamLimits

0xb33c,	// (0x00026022) grid_graphic_popup_pane

0xb366,	// (0x0002604c) listscroll_popup_graphic_pane_g1_ParamLimits

0xb366,	// (0x0002604c) listscroll_popup_graphic_pane_g1

0xb37a,	// (0x00026060) listscroll_popup_graphic_pane_g2_ParamLimits

0xb37a,	// (0x00026060) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0002a68f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0002a68f) listscroll_popup_graphic_pane_g

0xb38e,	// (0x00026074) scroll_pane_cp5

0xb2db,	// (0x00025fc1) cell_graphic_popup_pane_ParamLimits

0xb2db,	// (0x00025fc1) cell_graphic_popup_pane

0xb2bc,	// (0x00025fa2) cell_graphic_popup_pane_g1

0xb2c4,	// (0x00025faa) cell_graphic_popup_pane_g2

0x8489,	// (0x0002316f) cell_graphic_popup_pane_g3

0x0002,

0xf9a2,	// (0x0002a688) cell_graphic_popup_pane_g

0xb2cd,	// (0x00025fb3) cell_graphic_popup_pane_t2

0x8492,	// (0x00023178) grid_highlight_pane_cp3

0x8677,	// (0x0002335d) list_gen_pane_ParamLimits

0x8677,	// (0x0002335d) list_gen_pane

0x86a9,	// (0x0002338f) scroll_pane

0xb214,	// (0x00025efa) bg_list_pane_g1_ParamLimits

0xb214,	// (0x00025efa) bg_list_pane_g1

0xb231,	// (0x00025f17) bg_list_pane_g2_ParamLimits

0xb231,	// (0x00025f17) bg_list_pane_g2

0xb246,	// (0x00025f2c) bg_list_pane_g3_ParamLimits

0xb246,	// (0x00025f2c) bg_list_pane_g3

0xb25a,	// (0x00025f40) bg_list_pane_g4_ParamLimits

0xb25a,	// (0x00025f40) bg_list_pane_g4

0xb26e,	// (0x00025f54) bg_list_pane_g5_ParamLimits

0xb26e,	// (0x00025f54) bg_list_pane_g5

0x0004,

0xf997,	// (0x0002a67d) bg_list_pane_g_ParamLimits

0xf997,	// (0x0002a67d) bg_list_pane_g

0x521c,	// (0x0001ff02) list_double2_graphic_large_graphic_pane_ParamLimits

0x521c,	// (0x0001ff02) list_double2_graphic_large_graphic_pane

0x521c,	// (0x0001ff02) list_double2_graphic_pane_ParamLimits

0x521c,	// (0x0001ff02) list_double2_graphic_pane

0x521c,	// (0x0001ff02) list_double2_large_graphic_pane_ParamLimits

0x521c,	// (0x0001ff02) list_double2_large_graphic_pane

0x521c,	// (0x0001ff02) list_double2_pane_ParamLimits

0x521c,	// (0x0001ff02) list_double2_pane

0x521c,	// (0x0001ff02) list_double_graphic_heading_pane_ParamLimits

0x521c,	// (0x0001ff02) list_double_graphic_heading_pane

0x521c,	// (0x0001ff02) list_double_graphic_pane_ParamLimits

0x521c,	// (0x0001ff02) list_double_graphic_pane

0x521c,	// (0x0001ff02) list_double_heading_pane_ParamLimits

0x521c,	// (0x0001ff02) list_double_heading_pane

0x521c,	// (0x0001ff02) list_double_large_graphic_pane_ParamLimits

0x521c,	// (0x0001ff02) list_double_large_graphic_pane

0x521c,	// (0x0001ff02) list_double_number_pane_ParamLimits

0x521c,	// (0x0001ff02) list_double_number_pane

0x521c,	// (0x0001ff02) list_double_pane_ParamLimits

0x521c,	// (0x0001ff02) list_double_pane

0x521c,	// (0x0001ff02) list_double_time_pane_ParamLimits

0x521c,	// (0x0001ff02) list_double_time_pane

0x521c,	// (0x0001ff02) list_setting_number_pane_ParamLimits

0x521c,	// (0x0001ff02) list_setting_number_pane

0x521c,	// (0x0001ff02) list_setting_pane_ParamLimits

0x521c,	// (0x0001ff02) list_setting_pane

0x5257,	// (0x0001ff3d) list_single_2graphic_pane_ParamLimits

0x5257,	// (0x0001ff3d) list_single_2graphic_pane

0x5257,	// (0x0001ff3d) list_single_graphic_heading_pane_ParamLimits

0x5257,	// (0x0001ff3d) list_single_graphic_heading_pane

0x5257,	// (0x0001ff3d) list_single_graphic_pane_ParamLimits

0x5257,	// (0x0001ff3d) list_single_graphic_pane

0x5257,	// (0x0001ff3d) list_single_heading_pane_ParamLimits

0x5257,	// (0x0001ff3d) list_single_heading_pane

0x5297,	// (0x0001ff7d) list_single_large_graphic_pane_ParamLimits

0x5297,	// (0x0001ff7d) list_single_large_graphic_pane

0x5257,	// (0x0001ff3d) list_single_number_heading_pane_ParamLimits

0x5257,	// (0x0001ff3d) list_single_number_heading_pane

0x5257,	// (0x0001ff3d) list_single_number_pane_ParamLimits

0x5257,	// (0x0001ff3d) list_single_number_pane

0x5257,	// (0x0001ff3d) list_single_pane_ParamLimits

0x5257,	// (0x0001ff3d) list_single_pane

0x7dc1,	// (0x00022aa7) list_highlight_pane_cp1

0x48a7,	// (0x0001f58d) list_single_pane_g1_ParamLimits

0x48a7,	// (0x0001f58d) list_single_pane_g1

0x48b3,	// (0x0001f599) list_single_pane_g2_ParamLimits

0x48b3,	// (0x0001f599) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002a2ae) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002a2ae) list_single_pane_g

0x5206,	// (0x0001feec) list_single_pane_t1_ParamLimits

0x5206,	// (0x0001feec) list_single_pane_t1

0x48a7,	// (0x0001f58d) list_single_number_pane_g1_ParamLimits

0x48a7,	// (0x0001f58d) list_single_number_pane_g1

0x48b3,	// (0x0001f599) list_single_number_pane_g2_ParamLimits

0x48b3,	// (0x0001f599) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002a2ae) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002a2ae) list_single_number_pane_g

0x51b0,	// (0x0001fe96) list_single_number_pane_t1_ParamLimits

0x51b0,	// (0x0001fe96) list_single_number_pane_t1

0x51c6,	// (0x0001feac) list_single_number_pane_t2_ParamLimits

0x51c6,	// (0x0001feac) list_single_number_pane_t2

0x0001,

0xf958,	// (0x0002a63e) list_single_number_pane_t_ParamLimits

0xf958,	// (0x0002a63e) list_single_number_pane_t

0x489b,	// (0x0001f581) list_single_graphic_pane_g1_ParamLimits

0x489b,	// (0x0001f581) list_single_graphic_pane_g1

0x48a7,	// (0x0001f58d) list_single_graphic_pane_g2_ParamLimits

0x48a7,	// (0x0001f58d) list_single_graphic_pane_g2

0x48b3,	// (0x0001f599) list_single_graphic_pane_g3_ParamLimits

0x48b3,	// (0x0001f599) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002a2a7) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002a2a7) list_single_graphic_pane_g

0x48bf,	// (0x0001f5a5) list_single_graphic_pane_t1_ParamLimits

0x48bf,	// (0x0001f5a5) list_single_graphic_pane_t1

0x48a7,	// (0x0001f58d) list_single_heading_pane_g1_ParamLimits

0x48a7,	// (0x0001f58d) list_single_heading_pane_g1

0x48b3,	// (0x0001f599) list_single_heading_pane_g2_ParamLimits

0x48b3,	// (0x0001f599) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002a2ae) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002a2ae) list_single_heading_pane_g

0x48d5,	// (0x0001f5bb) list_single_heading_pane_t1_ParamLimits

0x48d5,	// (0x0001f5bb) list_single_heading_pane_t1

0x48eb,	// (0x0001f5d1) list_single_heading_pane_t2_ParamLimits

0x48eb,	// (0x0001f5d1) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002a2b3) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002a2b3) list_single_heading_pane_t

0x48a7,	// (0x0001f58d) list_single_number_heading_pane_g1_ParamLimits

0x48a7,	// (0x0001f58d) list_single_number_heading_pane_g1

0x48b3,	// (0x0001f599) list_single_number_heading_pane_g2_ParamLimits

0x48b3,	// (0x0001f599) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002a2ae) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002a2ae) list_single_number_heading_pane_g

0x48d5,	// (0x0001f5bb) list_single_number_heading_pane_t1_ParamLimits

0x48d5,	// (0x0001f5bb) list_single_number_heading_pane_t1

0x48fd,	// (0x0001f5e3) list_single_number_heading_pane_t2_ParamLimits

0x48fd,	// (0x0001f5e3) list_single_number_heading_pane_t2

0x490f,	// (0x0001f5f5) list_single_number_heading_pane_t3_ParamLimits

0x490f,	// (0x0001f5f5) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002a2b8) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002a2b8) list_single_number_heading_pane_t

0x4921,	// (0x0001f607) list_single_graphic_heading_pane_g1_ParamLimits

0x4921,	// (0x0001f607) list_single_graphic_heading_pane_g1

0x492d,	// (0x0001f613) list_single_graphic_heading_pane_g4_ParamLimits

0x492d,	// (0x0001f613) list_single_graphic_heading_pane_g4

0x48b3,	// (0x0001f599) list_single_graphic_heading_pane_g5_ParamLimits

0x48b3,	// (0x0001f599) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002a2bf) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002a2bf) list_single_graphic_heading_pane_g

0x48d5,	// (0x0001f5bb) list_single_graphic_heading_pane_t1_ParamLimits

0x48d5,	// (0x0001f5bb) list_single_graphic_heading_pane_t1

0x493e,	// (0x0001f624) list_single_graphic_heading_pane_t2_ParamLimits

0x493e,	// (0x0001f624) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002a2c6) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002a2c6) list_single_graphic_heading_pane_t

0x4950,	// (0x0001f636) list_single_large_graphic_pane_g1_ParamLimits

0x4950,	// (0x0001f636) list_single_large_graphic_pane_g1

0x495c,	// (0x0001f642) list_single_large_graphic_pane_g2_ParamLimits

0x495c,	// (0x0001f642) list_single_large_graphic_pane_g2

0x4968,	// (0x0001f64e) list_single_large_graphic_pane_g3_ParamLimits

0x4968,	// (0x0001f64e) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002a2cb) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002a2cb) list_single_large_graphic_pane_g

0xa233,	// (0x00024f19) wait_border_pane_g2_copy1

0x4974,	// (0x0001f65a) list_single_large_graphic_pane_g4_cp2

0x497c,	// (0x0001f662) list_single_large_graphic_pane_t1_ParamLimits

0x497c,	// (0x0001f662) list_single_large_graphic_pane_t1

0x4992,	// (0x0001f678) list_double_pane_g1_ParamLimits

0x4992,	// (0x0001f678) list_double_pane_g1

0x499e,	// (0x0001f684) list_double_pane_g2_ParamLimits

0x499e,	// (0x0001f684) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002a2d2) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002a2d2) list_double_pane_g

0x49aa,	// (0x0001f690) list_double_pane_t1_ParamLimits

0x49aa,	// (0x0001f690) list_double_pane_t1

0x49c0,	// (0x0001f6a6) list_double_pane_t2_ParamLimits

0x49c0,	// (0x0001f6a6) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002a2d7) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002a2d7) list_double_pane_t

0x49d2,	// (0x0001f6b8) list_double2_pane_g1_ParamLimits

0x49d2,	// (0x0001f6b8) list_double2_pane_g1

0x49e3,	// (0x0001f6c9) list_double2_pane_g2_ParamLimits

0x49e3,	// (0x0001f6c9) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002a2dc) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002a2dc) list_double2_pane_g

0x49ef,	// (0x0001f6d5) list_double2_pane_t1_ParamLimits

0x49ef,	// (0x0001f6d5) list_double2_pane_t1

0x4a05,	// (0x0001f6eb) list_double2_pane_t2_ParamLimits

0x4a05,	// (0x0001f6eb) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002a2e1) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002a2e1) list_double2_pane_t

0x4992,	// (0x0001f678) list_double_number_pane_g1_ParamLimits

0x4992,	// (0x0001f678) list_double_number_pane_g1

0x499e,	// (0x0001f684) list_double_number_pane_g2_ParamLimits

0x499e,	// (0x0001f684) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002a2d2) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002a2d2) list_double_number_pane_g

0x4a17,	// (0x0001f6fd) list_double_number_pane_t1_ParamLimits

0x4a17,	// (0x0001f6fd) list_double_number_pane_t1

0x4a29,	// (0x0001f70f) list_double_number_pane_t2_ParamLimits

0x4a29,	// (0x0001f70f) list_double_number_pane_t2

0x4a3f,	// (0x0001f725) list_double_number_pane_t3_ParamLimits

0x4a3f,	// (0x0001f725) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002a2e6) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002a2e6) list_double_number_pane_t

0x4a51,	// (0x0001f737) list_double_graphic_pane_g1_ParamLimits

0x4a51,	// (0x0001f737) list_double_graphic_pane_g1

0x4a5d,	// (0x0001f743) list_double_graphic_pane_g2_ParamLimits

0x4a5d,	// (0x0001f743) list_double_graphic_pane_g2

0x4a6c,	// (0x0001f752) list_double_graphic_pane_g3_ParamLimits

0x4a6c,	// (0x0001f752) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002a2ed) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002a2ed) list_double_graphic_pane_g

0x4a84,	// (0x0001f76a) list_double_graphic_pane_t1_ParamLimits

0x4a84,	// (0x0001f76a) list_double_graphic_pane_t1

0x4a9a,	// (0x0001f780) list_double_graphic_pane_t2_ParamLimits

0x4a9a,	// (0x0001f780) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002a2f6) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002a2f6) list_double_graphic_pane_t

0x4aac,	// (0x0001f792) list_double2_graphic_pane_g1_ParamLimits

0x4aac,	// (0x0001f792) list_double2_graphic_pane_g1

0x4ab8,	// (0x0001f79e) list_double2_graphic_pane_g2_ParamLimits

0x4ab8,	// (0x0001f79e) list_double2_graphic_pane_g2

0x49e3,	// (0x0001f6c9) list_double2_graphic_pane_g3_ParamLimits

0x49e3,	// (0x0001f6c9) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002a2fb) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002a2fb) list_double2_graphic_pane_g

0x4ac4,	// (0x0001f7aa) list_double2_graphic_pane_t1_ParamLimits

0x4ac4,	// (0x0001f7aa) list_double2_graphic_pane_t1

0x4ada,	// (0x0001f7c0) list_double2_graphic_pane_t2_ParamLimits

0x4ada,	// (0x0001f7c0) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002a302) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002a302) list_double2_graphic_pane_t

0x4aec,	// (0x0001f7d2) list_double_large_graphic_pane_g1_ParamLimits

0x4aec,	// (0x0001f7d2) list_double_large_graphic_pane_g1

0x4aff,	// (0x0001f7e5) list_double_large_graphic_pane_g2_ParamLimits

0x4aff,	// (0x0001f7e5) list_double_large_graphic_pane_g2

0x499e,	// (0x0001f684) list_double_large_graphic_pane_g3_ParamLimits

0x499e,	// (0x0001f684) list_double_large_graphic_pane_g3

0x4b10,	// (0x0001f7f6) list_double_large_graphic_pane_g4_ParamLimits

0x4b10,	// (0x0001f7f6) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002a307) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002a307) list_double_large_graphic_pane_g

0x4b37,	// (0x0001f81d) list_double_large_graphic_pane_t1_ParamLimits

0x4b37,	// (0x0001f81d) list_double_large_graphic_pane_t1

0x4b50,	// (0x0001f836) list_double_large_graphic_pane_t2_ParamLimits

0x4b50,	// (0x0001f836) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002a312) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002a312) list_double_large_graphic_pane_t

0x4b62,	// (0x0001f848) list_double2_large_graphic_pane_g1_ParamLimits

0x4b62,	// (0x0001f848) list_double2_large_graphic_pane_g1

0x49d2,	// (0x0001f6b8) list_double2_large_graphic_pane_g2_ParamLimits

0x49d2,	// (0x0001f6b8) list_double2_large_graphic_pane_g2

0x49e3,	// (0x0001f6c9) list_double2_large_graphic_pane_g3_ParamLimits

0x49e3,	// (0x0001f6c9) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002a317) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002a317) list_double2_large_graphic_pane_g

0x4b6e,	// (0x0001f854) list_double2_large_graphic_pane_t1_ParamLimits

0x4b6e,	// (0x0001f854) list_double2_large_graphic_pane_t1

0x4b84,	// (0x0001f86a) list_double2_large_graphic_pane_t2_ParamLimits

0x4b84,	// (0x0001f86a) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002a31e) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002a31e) list_double2_large_graphic_pane_t

0x4b96,	// (0x0001f87c) list_double_heading_pane_g1_ParamLimits

0x4b96,	// (0x0001f87c) list_double_heading_pane_g1

0x4ba7,	// (0x0001f88d) list_double_heading_pane_g2_ParamLimits

0x4ba7,	// (0x0001f88d) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002a323) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002a323) list_double_heading_pane_g

0x4bb3,	// (0x0001f899) list_double_heading_pane_t1_ParamLimits

0x4bb3,	// (0x0001f899) list_double_heading_pane_t1

0x4a05,	// (0x0001f6eb) list_double_heading_pane_t2_ParamLimits

0x4a05,	// (0x0001f6eb) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002a328) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002a328) list_double_heading_pane_t

0x4bc9,	// (0x0001f8af) list_double_graphic_heading_pane_g1_ParamLimits

0x4bc9,	// (0x0001f8af) list_double_graphic_heading_pane_g1

0x4b96,	// (0x0001f87c) list_double_graphic_heading_pane_g2_ParamLimits

0x4b96,	// (0x0001f87c) list_double_graphic_heading_pane_g2

0x4ba7,	// (0x0001f88d) list_double_graphic_heading_pane_g3_ParamLimits

0x4ba7,	// (0x0001f88d) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002a32d) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002a32d) list_double_graphic_heading_pane_g

0x4bd5,	// (0x0001f8bb) list_double_graphic_heading_pane_t1_ParamLimits

0x4bd5,	// (0x0001f8bb) list_double_graphic_heading_pane_t1

0x4ada,	// (0x0001f7c0) list_double_graphic_heading_pane_t2_ParamLimits

0x4ada,	// (0x0001f7c0) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002a334) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002a334) list_double_graphic_heading_pane_t

0x4aff,	// (0x0001f7e5) list_double_time_pane_g1_ParamLimits

0x4aff,	// (0x0001f7e5) list_double_time_pane_g1

0x499e,	// (0x0001f684) list_double_time_pane_g2_ParamLimits

0x499e,	// (0x0001f684) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002a339) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002a339) list_double_time_pane_g

0x4beb,	// (0x0001f8d1) list_double_time_pane_t1_ParamLimits

0x4beb,	// (0x0001f8d1) list_double_time_pane_t1

0x4c01,	// (0x0001f8e7) list_double_time_pane_t2_ParamLimits

0x4c01,	// (0x0001f8e7) list_double_time_pane_t2

0x4c13,	// (0x0001f8f9) list_double_time_pane_t3_ParamLimits

0x4c13,	// (0x0001f8f9) list_double_time_pane_t3

0x4c25,	// (0x0001f90b) list_double_time_pane_t4_ParamLimits

0x4c25,	// (0x0001f90b) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002a33e) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002a33e) list_double_time_pane_t

0x4ab8,	// (0x0001f79e) list_setting_pane_g1_ParamLimits

0x4ab8,	// (0x0001f79e) list_setting_pane_g1

0x49e3,	// (0x0001f6c9) list_setting_pane_g2_ParamLimits

0x49e3,	// (0x0001f6c9) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002a347) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002a347) list_setting_pane_g

0x4c37,	// (0x0001f91d) list_setting_pane_t1_ParamLimits

0x4c37,	// (0x0001f91d) list_setting_pane_t1

0x4c51,	// (0x0001f937) list_setting_pane_t2_ParamLimits

0x4c51,	// (0x0001f937) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002a34c) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002a34c) list_setting_pane_t

0x4c90,	// (0x0001f976) set_value_pane_cp_ParamLimits

0x4c90,	// (0x0001f976) set_value_pane_cp

0x4c9c,	// (0x0001f982) list_setting_number_pane_g1_ParamLimits

0x4c9c,	// (0x0001f982) list_setting_number_pane_g1

0x4ca8,	// (0x0001f98e) list_setting_number_pane_g2_ParamLimits

0x4ca8,	// (0x0001f98e) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002a353) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002a353) list_setting_number_pane_g

0x4cb4,	// (0x0001f99a) list_setting_number_pane_t1_ParamLimits

0x4cb4,	// (0x0001f99a) list_setting_number_pane_t1

0x4ccd,	// (0x0001f9b3) list_setting_number_pane_t2_ParamLimits

0x4ccd,	// (0x0001f9b3) list_setting_number_pane_t2

0x4ce7,	// (0x0001f9cd) list_setting_number_pane_t3_ParamLimits

0x4ce7,	// (0x0001f9cd) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002a358) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002a358) list_setting_number_pane_t

0x4c90,	// (0x0001f976) set_value_pane_ParamLimits

0x4c90,	// (0x0001f976) set_value_pane

0x86dd,	// (0x000233c3) bg_set_opt_pane_ParamLimits

0x86dd,	// (0x000233c3) bg_set_opt_pane

0x4d2a,	// (0x0001fa10) set_value_pane_t1

0x86fe,	// (0x000233e4) slider_set_pane_cp3

0x8707,	// (0x000233ed) volume_small_pane_cp

0x8710,	// (0x000233f6) list_form_gen_pane

0x8719,	// (0x000233ff) scroll_pane_cp8

0x4d40,	// (0x0001fa26) form_field_data_pane_ParamLimits

0x4d40,	// (0x0001fa26) form_field_data_pane

0x4d60,	// (0x0001fa46) form_field_data_wide_pane_ParamLimits

0x4d60,	// (0x0001fa46) form_field_data_wide_pane

0x4d81,	// (0x0001fa67) form_field_popup_pane_ParamLimits

0x4d81,	// (0x0001fa67) form_field_popup_pane

0x4da1,	// (0x0001fa87) form_field_popup_wide_pane_ParamLimits

0x4da1,	// (0x0001fa87) form_field_popup_wide_pane

0x4dbe,	// (0x0001faa4) form_field_slider_pane_ParamLimits

0x4dbe,	// (0x0001faa4) form_field_slider_pane

0x4dd1,	// (0x0001fab7) form_field_slider_wide_pane_ParamLimits

0x4dd1,	// (0x0001fab7) form_field_slider_wide_pane

0x872a,	// (0x00023410) data_form_pane

0x4dee,	// (0x0001fad4) form_field_data_pane_t1

0x8736,	// (0x0002341c) input_focus_pane

0x4e06,	// (0x0001faec) data_form_wide_pane

0x4e23,	// (0x0001fb09) form_field_data_wide_pane_t1

0x84a7,	// (0x0002318d) input_focus_pane_cp6

0x4e45,	// (0x0001fb2b) form_field_popup_pane_t1

0x8736,	// (0x0002341c) input_focus_pane_cp7

0x8764,	// (0x0002344a) list_form_pane

0x4e65,	// (0x0001fb4b) form_field_popup_wide_pane_t1

0x8736,	// (0x0002341c) input_focus_pane_cp8

0x8770,	// (0x00023456) list_form_wide_pane

0x4e82,	// (0x0001fb68) form_field_slider_pane_t1_ParamLimits

0x4e82,	// (0x0001fb68) form_field_slider_pane_t1

0x4e98,	// (0x0001fb7e) form_field_slider_pane_t2_ParamLimits

0x4e98,	// (0x0001fb7e) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002a368) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002a368) form_field_slider_pane_t

0x811c,	// (0x00022e02) input_focus_pane_cp9_ParamLimits

0x811c,	// (0x00022e02) input_focus_pane_cp9

0x4ead,	// (0x0001fb93) slider_cont_pane_ParamLimits

0x4ead,	// (0x0001fb93) slider_cont_pane

0x877c,	// (0x00023462) form_field_slider_wide_pane_t1_ParamLimits

0x877c,	// (0x00023462) form_field_slider_wide_pane_t1

0x4ec1,	// (0x0001fba7) form_field_slider_wide_pane_t2_ParamLimits

0x4ec1,	// (0x0001fba7) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002a36d) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002a36d) form_field_slider_wide_pane_t

0x811c,	// (0x00022e02) input_focus_pane_cp10_ParamLimits

0x811c,	// (0x00022e02) input_focus_pane_cp10

0x4ed3,	// (0x0001fbb9) slider_cont_pane_cp1_ParamLimits

0x4ed3,	// (0x0001fbb9) slider_cont_pane_cp1

0x4ee7,	// (0x0001fbcd) slider_form_pane_cp

0x878e,	// (0x00023474) input_focus_pane_g1

0x8796,	// (0x0002347c) input_focus_pane_g2

0x879e,	// (0x00023484) input_focus_pane_g3

0x87a6,	// (0x0002348c) input_focus_pane_g4

0x87ae,	// (0x00023494) input_focus_pane_g5

0x87b6,	// (0x0002349c) input_focus_pane_g6

0x87be,	// (0x000234a4) input_focus_pane_g7

0x87c6,	// (0x000234ac) input_focus_pane_g8

0x87ce,	// (0x000234b4) input_focus_pane_g9

0x7db7,	// (0x00022a9d) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002a372) input_focus_pane_g

0xa23c,	// (0x00024f22) wait_border_pane_g3_copy1

0x4eef,	// (0x0001fbd5) data_form_pane_t1

0x7db7,	// (0x00022a9d) wait_anim_pane_g1_copy1

0x51d8,	// (0x0001febe) data_form_wide_pane_t1

0x4f0a,	// (0x0001fbf0) list_form_graphic_pane_cp_ParamLimits

0x4f0a,	// (0x0001fbf0) list_form_graphic_pane_cp

0xb151,	// (0x00025e37) slider_form_pane_g1

0xb15a,	// (0x00025e40) slider_form_pane_g2

0x0006,

0xf988,	// (0x0002a66e) slider_form_pane_g

0x4f23,	// (0x0001fc09) list_form_graphic_pane_ParamLimits

0x4f23,	// (0x0001fc09) list_form_graphic_pane

0x4f3f,	// (0x0001fc25) list_form_graphic_pane_g1

0x4f47,	// (0x0001fc2d) list_form_graphic_pane_t1_ParamLimits

0x4f47,	// (0x0001fc2d) list_form_graphic_pane_t1

0x7ea1,	// (0x00022b87) list_highlight_pane_cp5_ParamLimits

0x7ea1,	// (0x00022b87) list_highlight_pane_cp5

0x4f5c,	// (0x0001fc42) find_pane_g1

0x87d6,	// (0x000234bc) input_find_pane

0x4f65,	// (0x0001fc4b) input_find_pane_g1_ParamLimits

0x4f65,	// (0x0001fc4b) input_find_pane_g1

0x4f71,	// (0x0001fc57) input_find_pane_t1_ParamLimits

0x4f71,	// (0x0001fc57) input_find_pane_t1

0x4f86,	// (0x0001fc6c) input_find_pane_t2_ParamLimits

0x4f86,	// (0x0001fc6c) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002a387) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002a387) input_find_pane_t

0x87df,	// (0x000234c5) input_focus_pane_cp5_ParamLimits

0x87df,	// (0x000234c5) input_focus_pane_cp5

0x87f9,	// (0x000234df) bg_popup_window_pane_cp2_ParamLimits

0x87f9,	// (0x000234df) bg_popup_window_pane_cp2

0x8806,	// (0x000234ec) listscroll_menu_pane_ParamLimits

0x8806,	// (0x000234ec) listscroll_menu_pane

0x8812,	// (0x000234f8) popup_submenu_window_ParamLimits

0x8812,	// (0x000234f8) popup_submenu_window

0x883e,	// (0x00023524) find_popup_pane_g1

0x8846,	// (0x0002352c) input_popup_find_pane_cp

0x87df,	// (0x000234c5) input_focus_pane_cp4_ParamLimits

0x87df,	// (0x000234c5) input_focus_pane_cp4

0x885c,	// (0x00023542) input_popup_find_pane_t1_ParamLimits

0x885c,	// (0x00023542) input_popup_find_pane_t1

0x7dc1,	// (0x00022aa7) bg_popup_sub_pane_cp

0x888a,	// (0x00023570) listscroll_popup_sub_pane

0x8892,	// (0x00023578) list_submenu_pane_ParamLimits

0x8892,	// (0x00023578) list_submenu_pane

0x88a3,	// (0x00023589) scroll_pane_cp4

0x88ab,	// (0x00023591) list_single_popup_submenu_pane_ParamLimits

0x88ab,	// (0x00023591) list_single_popup_submenu_pane

0x88bf,	// (0x000235a5) list_single_popup_submenu_pane_g1

0x88c7,	// (0x000235ad) list_single_popup_submenu_pane_t1_ParamLimits

0x88c7,	// (0x000235ad) list_single_popup_submenu_pane_t1

0x7ea1,	// (0x00022b87) bg_active_tab_pane_cp1_ParamLimits

0x7ea1,	// (0x00022b87) bg_active_tab_pane_cp1

0x88dc,	// (0x000235c2) tabs_2_active_pane_g1

0x88e4,	// (0x000235ca) tabs_2_active_pane_t1

0x7ea1,	// (0x00022b87) bg_passive_tab_pane_cp1_ParamLimits

0x7ea1,	// (0x00022b87) bg_passive_tab_pane_cp1

0x88dc,	// (0x000235c2) tabs_2_passive_pane_g1

0x88e4,	// (0x000235ca) tabs_2_passive_pane_t1

0x88f6,	// (0x000235dc) bg_active_tab_pane_cp4

0x8904,	// (0x000235ea) tabs_2_long_active_pane_t1

0x8917,	// (0x000235fd) bg_passive_tab_pane_cp4

0x6a6e,	// (0x00021754) list_single_midp_graphic_pane_g4_ParamLimits

0x88f6,	// (0x000235dc) bg_active_tab_pane_cp5

0x8923,	// (0x00023609) tabs_3_long_active_pane_t1

0x8917,	// (0x000235fd) bg_passive_tab_pane_cp5

0x6a6e,	// (0x00021754) list_single_midp_graphic_pane_g4

0x7ea1,	// (0x00022b87) bg_popup_window_pane_cp13_ParamLimits

0x7ea1,	// (0x00022b87) bg_popup_window_pane_cp13

0x893e,	// (0x00023624) listscroll_popup_fast_pane_ParamLimits

0x893e,	// (0x00023624) listscroll_popup_fast_pane

0x894d,	// (0x00023633) grid_popup_fast_pane_ParamLimits

0x894d,	// (0x00023633) grid_popup_fast_pane

0x895f,	// (0x00023645) scroll_pane_cp9_ParamLimits

0x895f,	// (0x00023645) scroll_pane_cp9

0xca50,	// (0x00027736) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xca50,	// (0x00027736) list_single_graphic_hl_pane_t1_cp2

0x8983,	// (0x00023669) input_focus_pane_cp20_ParamLimits

0x8983,	// (0x00023669) input_focus_pane_cp20

0x8991,	// (0x00023677) query_popup_data_pane_t1_ParamLimits

0x8991,	// (0x00023677) query_popup_data_pane_t1

0x89a4,	// (0x0002368a) query_popup_data_pane_t2_ParamLimits

0x89a4,	// (0x0002368a) query_popup_data_pane_t2

0x89ea,	// (0x000236d0) query_popup_data_pane_t3_ParamLimits

0x89ea,	// (0x000236d0) query_popup_data_pane_t3

0x8a2b,	// (0x00023711) query_popup_data_pane_t4_ParamLimits

0x8a2b,	// (0x00023711) query_popup_data_pane_t4

0x8a67,	// (0x0002374d) query_popup_data_pane_t5_ParamLimits

0x8a67,	// (0x0002374d) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002a38c) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002a38c) query_popup_data_pane_t

0x878e,	// (0x00023474) bg_set_opt_pane_g1

0x8796,	// (0x0002347c) bg_set_opt_pane_g2

0x879e,	// (0x00023484) bg_set_opt_pane_g3

0x87a6,	// (0x0002348c) bg_set_opt_pane_g4

0x87ae,	// (0x00023494) bg_set_opt_pane_g5

0x87b6,	// (0x0002349c) bg_set_opt_pane_g6

0x87be,	// (0x000234a4) bg_set_opt_pane_g7

0x87c6,	// (0x000234ac) bg_set_opt_pane_g8

0x87ce,	// (0x000234b4) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002a397) bg_set_opt_pane_g

0x6114,	// (0x00020dfa) control_top_pane_stacon_ParamLimits

0x6114,	// (0x00020dfa) control_top_pane_stacon

0x6167,	// (0x00020e4d) signal_pane_stacon_ParamLimits

0x6167,	// (0x00020e4d) signal_pane_stacon

0x9059,	// (0x00023d3f) stacon_top_pane_g1_ParamLimits

0x9059,	// (0x00023d3f) stacon_top_pane_g1

0x618c,	// (0x00020e72) title_pane_stacon_ParamLimits

0x618c,	// (0x00020e72) title_pane_stacon

0x61b6,	// (0x00020e9c) uni_indicator_pane_stacon_ParamLimits

0x61b6,	// (0x00020e9c) uni_indicator_pane_stacon

0x61cb,	// (0x00020eb1) battery_pane_stacon_ParamLimits

0x61cb,	// (0x00020eb1) battery_pane_stacon

0x620f,	// (0x00020ef5) control_bottom_pane_stacon_ParamLimits

0x620f,	// (0x00020ef5) control_bottom_pane_stacon

0x6232,	// (0x00020f18) navi_pane_stacon_ParamLimits

0x6232,	// (0x00020f18) navi_pane_stacon

0x907b,	// (0x00023d61) stacon_bottom_pane_g1_ParamLimits

0x907b,	// (0x00023d61) stacon_bottom_pane_g1

0x5e77,	// (0x00020b5d) aid_levels_signal_lsc_ParamLimits

0x5e77,	// (0x00020b5d) aid_levels_signal_lsc

0x5e8d,	// (0x00020b73) signal_pane_stacon_g1_ParamLimits

0x5e8d,	// (0x00020b73) signal_pane_stacon_g1

0x5ea1,	// (0x00020b87) signal_pane_stacon_g2_ParamLimits

0x5ea1,	// (0x00020b87) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002a3aa) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002a3aa) signal_pane_stacon_g

0x5ed6,	// (0x00020bbc) title_pane_stacon_t1_ParamLimits

0x5ed6,	// (0x00020bbc) title_pane_stacon_t1

0x8aab,	// (0x00023791) uni_indicator_pane_stacon_g1

0x8ab5,	// (0x0002379b) uni_indicator_pane_stacon_g2

0x8abf,	// (0x000237a5) uni_indicator_pane_stacon_g3

0x8ac9,	// (0x000237af) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002a3b6) uni_indicator_pane_stacon_g

0x5efb,	// (0x00020be1) control_top_pane_stacon_g1

0x5f03,	// (0x00020be9) control_top_pane_stacon_t1_ParamLimits

0x5f03,	// (0x00020be9) control_top_pane_stacon_t1

0x5f3a,	// (0x00020c20) aid_levels_battery_lsc_ParamLimits

0x5f3a,	// (0x00020c20) aid_levels_battery_lsc

0x5f51,	// (0x00020c37) battery_pane_stacon_g1_ParamLimits

0x5f51,	// (0x00020c37) battery_pane_stacon_g1

0x5f64,	// (0x00020c4a) battery_pane_stacon_g2_ParamLimits

0x5f64,	// (0x00020c4a) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002a3bf) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002a3bf) battery_pane_stacon_g

0x5fa2,	// (0x00020c88) navi_icon_pane_stacon

0x5fb6,	// (0x00020c9c) navi_navi_pane_stacon

0x5fa2,	// (0x00020c88) navi_text_pane_stacon

0x5efb,	// (0x00020be1) control_bottom_pane_stacon_g1

0x5fca,	// (0x00020cb0) control_bottom_pane_stacon_t1_ParamLimits

0x5fca,	// (0x00020cb0) control_bottom_pane_stacon_t1

0x8aed,	// (0x000237d3) grid_app_pane_ParamLimits

0x8aed,	// (0x000237d3) grid_app_pane

0x8b0f,	// (0x000237f5) scroll_pane_cp15_ParamLimits

0x8b0f,	// (0x000237f5) scroll_pane_cp15

0x8b22,	// (0x00023808) cell_app_pane_ParamLimits

0x8b22,	// (0x00023808) cell_app_pane

0x8b4a,	// (0x00023830) cell_app_pane_g1_ParamLimits

0x8b4a,	// (0x00023830) cell_app_pane_g1

0x8b6e,	// (0x00023854) cell_app_pane_g2_ParamLimits

0x8b6e,	// (0x00023854) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002a3c4) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002a3c4) cell_app_pane_g

0x8b7a,	// (0x00023860) cell_app_pane_t1_ParamLimits

0x8b7a,	// (0x00023860) cell_app_pane_t1

0x8b91,	// (0x00023877) grid_highlight_pane_ParamLimits

0x8b91,	// (0x00023877) grid_highlight_pane

0x878e,	// (0x00023474) cell_highlight_pane_g1

0x8796,	// (0x0002347c) cell_highlight_pane_g2

0x879e,	// (0x00023484) cell_highlight_pane_g3

0x87a6,	// (0x0002348c) cell_highlight_pane_g4

0x87ae,	// (0x00023494) cell_highlight_pane_g5

0x87b6,	// (0x0002349c) cell_highlight_pane_g6

0x87be,	// (0x000234a4) cell_highlight_pane_g7

0x87c6,	// (0x000234ac) cell_highlight_pane_g8

0x87ce,	// (0x000234b4) cell_highlight_pane_g9

0x7db7,	// (0x00022a9d) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002a372) cell_highlight_pane_g

0x8ba2,	// (0x00023888) bg_scroll_pane

0x6014,	// (0x00020cfa) scroll_handle_pane

0x8be9,	// (0x000238cf) scroll_bg_pane_g1

0x8bfe,	// (0x000238e4) scroll_bg_pane_g2

0x8c16,	// (0x000238fc) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002a3c9) scroll_bg_pane_g

0x8c2b,	// (0x00023911) scroll_handle_focus_pane_ParamLimits

0x8c2b,	// (0x00023911) scroll_handle_focus_pane

0x8be9,	// (0x000238cf) scroll_handle_pane_g1

0x8c38,	// (0x0002391e) scroll_handle_pane_g2

0x8c16,	// (0x000238fc) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002a3d0) scroll_handle_pane_g

0x87df,	// (0x000234c5) bg_popup_sub_pane_cp21_ParamLimits

0x87df,	// (0x000234c5) bg_popup_sub_pane_cp21

0x8c4c,	// (0x00023932) popup_fep_japan_predictive_window_t1_ParamLimits

0x8c4c,	// (0x00023932) popup_fep_japan_predictive_window_t1

0x8c66,	// (0x0002394c) popup_fep_japan_predictive_window_t2_ParamLimits

0x8c66,	// (0x0002394c) popup_fep_japan_predictive_window_t2

0x8c99,	// (0x0002397f) popup_fep_japan_predictive_window_t3_ParamLimits

0x8c99,	// (0x0002397f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002a3d7) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002a3d7) popup_fep_japan_predictive_window_t

0x7dc1,	// (0x00022aa7) bg_popup_sub_pane_cp23

0x8cd0,	// (0x000239b6) listscroll_japin_cand_pane

0x8cd8,	// (0x000239be) popup_fep_japan_candidate_window_t1

0x8ce6,	// (0x000239cc) candidate_pane_ParamLimits

0x8ce6,	// (0x000239cc) candidate_pane

0x8cf8,	// (0x000239de) scroll_pane_cp30

0x8d00,	// (0x000239e6) list_single_popup_jap_candidate_pane_ParamLimits

0x8d00,	// (0x000239e6) list_single_popup_jap_candidate_pane

0x7dc1,	// (0x00022aa7) list_highlight_pane_cp30

0x8d15,	// (0x000239fb) list_single_popup_jap_candidate_pane_t1

0x8d24,	// (0x00023a0a) level_1_signal

0x8d36,	// (0x00023a1c) level_2_signal

0x8d49,	// (0x00023a2f) level_3_signal

0x8d5c,	// (0x00023a42) level_4_signal

0x8d6f,	// (0x00023a55) level_5_signal

0x8d82,	// (0x00023a68) level_6_signal

0x8d95,	// (0x00023a7b) level_7_signal

0x8d24,	// (0x00023a0a) level_1_battery

0x8d36,	// (0x00023a1c) level_2_battery

0x8d49,	// (0x00023a2f) level_3_battery

0x8d5c,	// (0x00023a42) level_4_battery

0x8d6f,	// (0x00023a55) level_5_battery

0x8d82,	// (0x00023a68) level_6_battery

0x8d95,	// (0x00023a7b) level_7_battery

0x8dc0,	// (0x00023aa6) list_menu_pane_ParamLimits

0x8dc0,	// (0x00023aa6) list_menu_pane

0x8dd6,	// (0x00023abc) scroll_pane_cp25_ParamLimits

0x8dd6,	// (0x00023abc) scroll_pane_cp25

0x8def,	// (0x00023ad5) list_double2_graphic_pane_cp2_ParamLimits

0x8def,	// (0x00023ad5) list_double2_graphic_pane_cp2

0x8def,	// (0x00023ad5) list_double2_large_graphic_pane_cp2_ParamLimits

0x8def,	// (0x00023ad5) list_double2_large_graphic_pane_cp2

0x8def,	// (0x00023ad5) list_double2_pane_cp2_ParamLimits

0x8def,	// (0x00023ad5) list_double2_pane_cp2

0x8def,	// (0x00023ad5) list_double_graphic_pane_cp2_ParamLimits

0x8def,	// (0x00023ad5) list_double_graphic_pane_cp2

0x8def,	// (0x00023ad5) list_double_large_graphic_pane_cp2_ParamLimits

0x8def,	// (0x00023ad5) list_double_large_graphic_pane_cp2

0x8def,	// (0x00023ad5) list_double_number_pane_cp2_ParamLimits

0x8def,	// (0x00023ad5) list_double_number_pane_cp2

0x8def,	// (0x00023ad5) list_double_pane_cp2_ParamLimits

0x8def,	// (0x00023ad5) list_double_pane_cp2

0x8e13,	// (0x00023af9) list_single_2graphic_pane_cp2_ParamLimits

0x8e13,	// (0x00023af9) list_single_2graphic_pane_cp2

0x8e13,	// (0x00023af9) list_single_graphic_heading_pane_cp2_ParamLimits

0x8e13,	// (0x00023af9) list_single_graphic_heading_pane_cp2

0x8e13,	// (0x00023af9) list_single_graphic_pane_cp2_ParamLimits

0x8e13,	// (0x00023af9) list_single_graphic_pane_cp2

0x8e13,	// (0x00023af9) list_single_heading_pane_cp2_ParamLimits

0x8e13,	// (0x00023af9) list_single_heading_pane_cp2

0x8e2c,	// (0x00023b12) list_single_large_graphic_pane_cp2_ParamLimits

0x8e2c,	// (0x00023b12) list_single_large_graphic_pane_cp2

0x8e13,	// (0x00023af9) list_single_number_heading_pane_cp2_ParamLimits

0x8e13,	// (0x00023af9) list_single_number_heading_pane_cp2

0x8e13,	// (0x00023af9) list_single_number_pane_cp2_ParamLimits

0x8e13,	// (0x00023af9) list_single_number_pane_cp2

0x8e13,	// (0x00023af9) list_single_pane_cp2_ParamLimits

0x8e13,	// (0x00023af9) list_single_pane_cp2

0x8ea8,	// (0x00023b8e) bg_popup_sub_pane_cp22

0x60c6,	// (0x00020dac) popup_side_volume_key_window_g1

0x60f0,	// (0x00020dd6) popup_side_volume_key_window_t1

0x610c,	// (0x00020df2) volume_small_pane_cp1

0x811c,	// (0x00022e02) bg_popup_sub_pane_cp24_ParamLimits

0x811c,	// (0x00022e02) bg_popup_sub_pane_cp24

0x8ebe,	// (0x00023ba4) fep_china_uni_candidate_pane_ParamLimits

0x8ebe,	// (0x00023ba4) fep_china_uni_candidate_pane

0x8ed2,	// (0x00023bb8) fep_china_uni_entry_pane

0x8ee2,	// (0x00023bc8) popup_fep_china_uni_window_g1

0x8efe,	// (0x00023be4) fep_china_uni_entry_pane_g1

0x8f06,	// (0x00023bec) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002a408) fep_china_uni_entry_pane_g

0x8f0e,	// (0x00023bf4) fep_entry_item_pane

0x8f18,	// (0x00023bfe) fep_candidate_item_pane

0x8f20,	// (0x00023c06) fep_china_uni_candidate_pane_g1

0x8f28,	// (0x00023c0e) fep_china_uni_candidate_pane_g2

0x8f30,	// (0x00023c16) fep_china_uni_candidate_pane_g3

0x8f38,	// (0x00023c1e) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002a40d) fep_china_uni_candidate_pane_g

0x7db7,	// (0x00022a9d) fep_entry_item_pane_g1

0x8f40,	// (0x00023c26) fep_entry_item_pane_t1_ParamLimits

0x8f40,	// (0x00023c26) fep_entry_item_pane_t1

0x8f56,	// (0x00023c3c) fep_candidate_item_pane_t1_ParamLimits

0x8f56,	// (0x00023c3c) fep_candidate_item_pane_t1

0x8f6b,	// (0x00023c51) fep_candidate_item_pane_t2_ParamLimits

0x8f6b,	// (0x00023c51) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002a416) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002a416) fep_candidate_item_pane_t

0x7ea1,	// (0x00022b87) list_highlight_pane_cp31_ParamLimits

0x7ea1,	// (0x00022b87) list_highlight_pane_cp31

0x8f7d,	// (0x00023c63) level_1_signal_lsc

0x8f86,	// (0x00023c6c) level_2_signal_lsc

0x8f8f,	// (0x00023c75) level_3_signal_lsc

0x8f98,	// (0x00023c7e) level_4_signal_lsc

0x8fa1,	// (0x00023c87) level_5_signal_lsc

0x8faa,	// (0x00023c90) level_6_signal_lsc

0x8fb3,	// (0x00023c99) level_7_signal_lsc

0x8fb3,	// (0x00023c99) level_1_battery_lsc

0x8fbc,	// (0x00023ca2) level_2_battery_lsc

0x8fc5,	// (0x00023cab) level_3_battery_lsc

0x8fce,	// (0x00023cb4) level_4_battery_lsc

0x8fd7,	// (0x00023cbd) level_5_battery_lsc

0x8fe0,	// (0x00023cc6) level_6_battery_lsc

0x8f7d,	// (0x00023c63) level_7_battery_lsc

0x8fe9,	// (0x00023ccf) scroll_handle_focus_pane_g1

0x8ff2,	// (0x00023cd8) scroll_handle_focus_pane_g2

0x8ffb,	// (0x00023ce1) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002a41b) scroll_handle_focus_pane_g

0x4f9b,	// (0x0001fc81) list_single_2graphic_pane_g1_ParamLimits

0x4f9b,	// (0x0001fc81) list_single_2graphic_pane_g1

0x492d,	// (0x0001f613) list_single_2graphic_pane_g2_ParamLimits

0x492d,	// (0x0001f613) list_single_2graphic_pane_g2

0x48b3,	// (0x0001f599) list_single_2graphic_pane_g3_ParamLimits

0x48b3,	// (0x0001f599) list_single_2graphic_pane_g3

0x4fa7,	// (0x0001fc8d) list_single_2graphic_pane_g4_ParamLimits

0x4fa7,	// (0x0001fc8d) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002a422) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002a422) list_single_2graphic_pane_g

0x4fb3,	// (0x0001fc99) list_single_2graphic_pane_t1_ParamLimits

0x4fb3,	// (0x0001fc99) list_single_2graphic_pane_t1

0x4fe1,	// (0x0001fcc7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x4fe1,	// (0x0001fcc7) list_double2_graphic_large_graphic_pane_g1

0x49d2,	// (0x0001f6b8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x49d2,	// (0x0001f6b8) list_double2_graphic_large_graphic_pane_g2

0x49e3,	// (0x0001f6c9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x49e3,	// (0x0001f6c9) list_double2_graphic_large_graphic_pane_g3

0x4ff1,	// (0x0001fcd7) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x4ff1,	// (0x0001fcd7) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002a42b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002a42b) list_double2_graphic_large_graphic_pane_g

0x4ffd,	// (0x0001fce3) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4ffd,	// (0x0001fce3) list_double2_graphic_large_graphic_pane_t1

0x5013,	// (0x0001fcf9) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5013,	// (0x0001fcf9) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002a434) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002a434) list_double2_graphic_large_graphic_pane_t

0x9143,	// (0x00023e29) popup_fast_swap_window_ParamLimits

0x9143,	// (0x00023e29) popup_fast_swap_window

0x915f,	// (0x00023e45) popup_side_volume_key_window

0x917b,	// (0x00023e61) stacon_top_pane

0x9185,	// (0x00023e6b) status_pane_ParamLimits

0x9185,	// (0x00023e6b) status_pane

0x9193,	// (0x00023e79) status_small_pane

0x7dc1,	// (0x00022aa7) control_pane

0x7dc1,	// (0x00022aa7) stacon_bottom_pane

0x8719,	// (0x000233ff) scroll_pane_cp121

0x8710,	// (0x000233f6) set_content_pane

0x9004,	// (0x00023cea) bg_active_tab_pane_g1_cp1

0x900d,	// (0x00023cf3) bg_active_tab_pane_g2_cp1

0x9016,	// (0x00023cfc) bg_active_tab_pane_g3_cp1

0x9004,	// (0x00023cea) bg_passive_tab_pane_g1_cp1

0x900d,	// (0x00023cf3) bg_passive_tab_pane_g2_cp1

0x9016,	// (0x00023cfc) bg_passive_tab_pane_g3_cp1

0x901f,	// (0x00023d05) bg_active_tab_pane_g1_cp2

0x900d,	// (0x00023cf3) bg_active_tab_pane_g2_cp2

0x9028,	// (0x00023d0e) bg_active_tab_pane_g3_cp2

0x901f,	// (0x00023d05) bg_passive_tab_pane_g1_cp2

0x900d,	// (0x00023cf3) bg_passive_tab_pane_g2_cp2

0x9028,	// (0x00023d0e) bg_passive_tab_pane_g3_cp2

0x9031,	// (0x00023d17) bg_active_tab_pane_g1_cp3

0x900d,	// (0x00023cf3) bg_active_tab_pane_g2_cp3

0x903a,	// (0x00023d20) bg_active_tab_pane_g3_cp3

0x9031,	// (0x00023d17) bg_passive_tab_pane_g1_cp3

0x900d,	// (0x00023cf3) bg_passive_tab_pane_g2_cp3

0x903a,	// (0x00023d20) bg_passive_tab_pane_g3_cp3

0x9043,	// (0x00023d29) bg_active_tab_pane_g1_cp4

0x900d,	// (0x00023cf3) bg_active_tab_pane_g2_cp4

0x904e,	// (0x00023d34) bg_active_tab_pane_g3_cp4

0x9043,	// (0x00023d29) bg_passive_tab_pane_g1_cp4

0x900d,	// (0x00023cf3) bg_passive_tab_pane_g2_cp4

0x904e,	// (0x00023d34) bg_passive_tab_pane_g3_cp4

0x9097,	// (0x00023d7d) bg_active_tab_pane_g1_cp5

0x900d,	// (0x00023cf3) bg_active_tab_pane_g2_cp5

0x90a0,	// (0x00023d86) bg_active_tab_pane_g3_cp5

0x9097,	// (0x00023d7d) bg_passive_tab_pane_g1_cp5

0x900d,	// (0x00023cf3) bg_passive_tab_pane_g2_cp5

0x90a0,	// (0x00023d86) bg_passive_tab_pane_g3_cp5

0x90a9,	// (0x00023d8f) list_set_graphic_pane_ParamLimits

0x90a9,	// (0x00023d8f) list_set_graphic_pane

0x7dc1,	// (0x00022aa7) bg_set_opt_pane_cp4

0x90c6,	// (0x00023dac) list_set_graphic_pane_g1_ParamLimits

0x90c6,	// (0x00023dac) list_set_graphic_pane_g1

0x90d2,	// (0x00023db8) list_set_graphic_pane_g2_ParamLimits

0x90d2,	// (0x00023db8) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002a439) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002a439) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0002a7a7) volume_small_pane_cp_g

0x90f6,	// (0x00023ddc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x90f6,	// (0x00023ddc) list_double2_large_graphic_pane_g1_cp2

0x9102,	// (0x00023de8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9102,	// (0x00023de8) list_double2_large_graphic_pane_g2_cp2

0x9113,	// (0x00023df9) list_double2_large_graphic_pane_g3_cp2

0x911b,	// (0x00023e01) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x911b,	// (0x00023e01) list_double2_large_graphic_pane_t1_cp2

0x9131,	// (0x00023e17) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9131,	// (0x00023e17) list_double2_large_graphic_pane_t2_cp2

0xad0f,	// (0x000259f5) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad0f,	// (0x000259f5) list_double_large_graphic_pane_g1_cp2

0xad20,	// (0x00025a06) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad20,	// (0x00025a06) list_double_large_graphic_pane_g2_cp2

0x92ac,	// (0x00023f92) list_double_large_graphic_pane_g3_cp2

0xad31,	// (0x00025a17) list_double_large_graphic_pane_g4_cp

0xad39,	// (0x00025a1f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad39,	// (0x00025a1f) list_double_large_graphic_pane_t1_cp2

0xad50,	// (0x00025a36) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xad50,	// (0x00025a36) list_double_large_graphic_pane_t2_cp2

0x919e,	// (0x00023e84) list_double2_graphic_pane_g1_cp2_ParamLimits

0x919e,	// (0x00023e84) list_double2_graphic_pane_g1_cp2

0x91ac,	// (0x00023e92) list_double2_graphic_pane_g2_cp2_ParamLimits

0x91ac,	// (0x00023e92) list_double2_graphic_pane_g2_cp2

0x91bd,	// (0x00023ea3) list_double2_graphic_pane_g3_cp2

0x91c7,	// (0x00023ead) list_double2_graphic_pane_t1_cp2_ParamLimits

0x91c7,	// (0x00023ead) list_double2_graphic_pane_t1_cp2

0x91dd,	// (0x00023ec3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x91dd,	// (0x00023ec3) list_double2_graphic_pane_t2_cp2

0x91ef,	// (0x00023ed5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x91ef,	// (0x00023ed5) list_single_number_heading_pane_g1_cp2

0x91fb,	// (0x00023ee1) list_single_number_heading_pane_g2_cp2

0x9203,	// (0x00023ee9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9203,	// (0x00023ee9) list_single_number_heading_pane_t1_cp2

0x9219,	// (0x00023eff) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9219,	// (0x00023eff) list_single_number_heading_pane_t2_cp2

0x922b,	// (0x00023f11) list_single_number_heading_pane_t3_cp2_ParamLimits

0x922b,	// (0x00023f11) list_single_number_heading_pane_t3_cp2

0x91ef,	// (0x00023ed5) list_single_heading_pane_g1_cp2_ParamLimits

0x91ef,	// (0x00023ed5) list_single_heading_pane_g1_cp2

0x91fb,	// (0x00023ee1) list_single_heading_pane_g2_cp2

0x9203,	// (0x00023ee9) list_single_heading_pane_t1_cp2_ParamLimits

0x9203,	// (0x00023ee9) list_single_heading_pane_t1_cp2

0xab17,	// (0x000257fd) list_single_heading_pane_t2_cp2_ParamLimits

0xab17,	// (0x000257fd) list_single_heading_pane_t2_cp2

0xaa5f,	// (0x00025745) list_double_graphic_pane_g1_cp2_ParamLimits

0xaa5f,	// (0x00025745) list_double_graphic_pane_g1_cp2

0xaa6b,	// (0x00025751) list_double_graphic_pane_g2_cp2_ParamLimits

0xaa6b,	// (0x00025751) list_double_graphic_pane_g2_cp2

0xaa7a,	// (0x00025760) list_double_graphic_pane_g3_cp2

0xaa82,	// (0x00025768) list_double_graphic_pane_t1_cp2_ParamLimits

0xaa82,	// (0x00025768) list_double_graphic_pane_t1_cp2

0xaa98,	// (0x0002577e) list_double_graphic_pane_t2_cp2_ParamLimits

0xaa98,	// (0x0002577e) list_double_graphic_pane_t2_cp2

0x92a0,	// (0x00023f86) list_double_number_pane_g1_cp2_ParamLimits

0x92a0,	// (0x00023f86) list_double_number_pane_g1_cp2

0x92ac,	// (0x00023f92) list_double_number_pane_g2_cp2

0xaa23,	// (0x00025709) list_double_number_pane_t1_cp2_ParamLimits

0xaa23,	// (0x00025709) list_double_number_pane_t1_cp2

0xaa37,	// (0x0002571d) list_double_number_pane_t2_cp2_ParamLimits

0xaa37,	// (0x0002571d) list_double_number_pane_t2_cp2

0xaa4d,	// (0x00025733) list_double_number_pane_t3_cp2_ParamLimits

0xaa4d,	// (0x00025733) list_double_number_pane_t3_cp2

0xa90c,	// (0x000255f2) list_single_graphic_pane_g1_cp2_ParamLimits

0xa90c,	// (0x000255f2) list_single_graphic_pane_g1_cp2

0x9304,	// (0x00023fea) list_single_graphic_pane_g2_cp2_ParamLimits

0x9304,	// (0x00023fea) list_single_graphic_pane_g2_cp2

0x9310,	// (0x00023ff6) list_single_graphic_pane_g3_cp2

0xa8e2,	// (0x000255c8) list_single_graphic_pane_t1_cp2_ParamLimits

0xa8e2,	// (0x000255c8) list_single_graphic_pane_t1_cp2

0x9304,	// (0x00023fea) list_single_number_pane_g1_cp2_ParamLimits

0x9304,	// (0x00023fea) list_single_number_pane_g1_cp2

0x9310,	// (0x00023ff6) list_single_number_pane_g2_cp2

0xa8e2,	// (0x000255c8) list_single_number_pane_t1_cp2_ParamLimits

0xa8e2,	// (0x000255c8) list_single_number_pane_t1_cp2

0xa8f8,	// (0x000255de) list_single_number_pane_t2_cp2_ParamLimits

0xa8f8,	// (0x000255de) list_single_number_pane_t2_cp2

0x9102,	// (0x00023de8) list_double2_pane_g1_cp2_ParamLimits

0x9102,	// (0x00023de8) list_double2_pane_g1_cp2

0x9113,	// (0x00023df9) list_double2_pane_g2_cp2

0x9278,	// (0x00023f5e) list_double2_pane_t1_cp2_ParamLimits

0x9278,	// (0x00023f5e) list_double2_pane_t1_cp2

0x928e,	// (0x00023f74) list_double2_pane_t2_cp2_ParamLimits

0x928e,	// (0x00023f74) list_double2_pane_t2_cp2

0x92a0,	// (0x00023f86) list_double_pane_g1_cp2_ParamLimits

0x92a0,	// (0x00023f86) list_double_pane_g1_cp2

0x92ac,	// (0x00023f92) list_double_pane_g2_cp2

0x92b4,	// (0x00023f9a) list_double_pane_t1_cp2_ParamLimits

0x92b4,	// (0x00023f9a) list_double_pane_t1_cp2

0x92ca,	// (0x00023fb0) list_double_pane_t2_cp2_ParamLimits

0x92ca,	// (0x00023fb0) list_double_pane_t2_cp2

0x92f4,	// (0x00023fda) list_single_pane_cp2_g3

0x9304,	// (0x00023fea) list_single_pane_g1_cp2_ParamLimits

0x9304,	// (0x00023fea) list_single_pane_g1_cp2

0x9310,	// (0x00023ff6) list_single_pane_g2_cp2

0x9318,	// (0x00023ffe) list_single_pane_t1_cp2_ParamLimits

0x9318,	// (0x00023ffe) list_single_pane_t1_cp2

0x9330,	// (0x00024016) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9330,	// (0x00024016) list_single_large_graphic_pane_g1_cp2

0x933c,	// (0x00024022) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x933c,	// (0x00024022) list_single_large_graphic_pane_g2_cp2

0x9348,	// (0x0002402e) list_single_large_graphic_pane_g3_cp2

0x9350,	// (0x00024036) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9350,	// (0x00024036) list_single_large_graphic_pane_g4_cp1

0x936a,	// (0x00024050) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x936a,	// (0x00024050) list_single_large_graphic_pane_t1_cp2

0xa8ae,	// (0x00025594) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa8ae,	// (0x00025594) list_single_graphic_heading_pane_g1_cp2

0xa87b,	// (0x00025561) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa87b,	// (0x00025561) list_single_graphic_heading_pane_g4_cp2

0x9310,	// (0x00023ff6) list_single_graphic_heading_pane_g5_cp2

0xa8ba,	// (0x000255a0) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa8ba,	// (0x000255a0) list_single_graphic_heading_pane_t1_cp2

0xa8d0,	// (0x000255b6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa8d0,	// (0x000255b6) list_single_graphic_heading_pane_t2_cp2

0xa86f,	// (0x00025555) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa86f,	// (0x00025555) list_single_2graphic_pane_g1_cp2

0xa87b,	// (0x00025561) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa87b,	// (0x00025561) list_single_2graphic_pane_g2_cp2

0x9310,	// (0x00023ff6) list_single_2graphic_pane_g3_cp2

0xa88c,	// (0x00025572) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa88c,	// (0x00025572) list_single_2graphic_pane_g4_cp2

0xa898,	// (0x0002557e) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa898,	// (0x0002557e) list_single_2graphic_pane_t1_cp2

0x7db7,	// (0x00022a9d) list_highlight_pane_g10_cp1

0xa447,	// (0x0002512d) list_highlight_pane_g1_cp1

0xa44f,	// (0x00025135) list_highlight_pane_g2_cp1

0xa457,	// (0x0002513d) list_highlight_pane_g3_cp1

0xa45f,	// (0x00025145) list_highlight_pane_g4_cp1

0xa467,	// (0x0002514d) list_highlight_pane_g5_cp1

0xa46f,	// (0x00025155) list_highlight_pane_g6_cp1

0xa477,	// (0x0002515d) list_highlight_pane_g7_cp1

0xa47f,	// (0x00025165) list_highlight_pane_g8_cp1

0xa487,	// (0x0002516d) list_highlight_pane_g9_cp1

0xa367,	// (0x0002504d) form_field_slider_pane_t3

0xa375,	// (0x0002505b) form_field_slider_pane_t4

0xa383,	// (0x00025069) slider_form_pane_ParamLimits

0xa383,	// (0x00025069) slider_form_pane

0x7dc1,	// (0x00022aa7) control_abbreviations

0x7dc1,	// (0x00022aa7) control_conventions

0x7dc1,	// (0x00022aa7) control_definitions

0x7dc1,	// (0x00022aa7) format_table_attribute

0xab61,	// (0x00025847) bg_popup_preview_window_pane_g9

0x7dc1,	// (0x00022aa7) format_table_data2

0x7dc1,	// (0x00022aa7) format_table_data3

0x7dc1,	// (0x00022aa7) format_table_data_example

0x0008,

0x7dc1,	// (0x00022aa7) intro_purpose

0xf8e8,	// (0x0002a5ce) bg_popup_preview_window_pane_g

0x7dc1,	// (0x00022aa7) texts_category

0x7dc1,	// (0x00022aa7) texts_graphics

0x9380,	// (0x00024066) text_digital

0x938f,	// (0x00024075) text_primary

0x939e,	// (0x00024084) text_primary_small

0x93ad,	// (0x00024093) text_secondary

0x93bc,	// (0x000240a2) text_title

0xb290,	// (0x00025f76) bg_passive_tab_pane_g1_cp3_srt

0x900d,	// (0x00023cf3) bg_passive_tab_pane_g2_cp3_srt

0xb299,	// (0x00025f7f) bg_passive_tab_pane_g3_cp3_srt

0x7ea1,	// (0x00022b87) bg_active_tab_pane_cp3_srt_ParamLimits

0x7ea1,	// (0x00022b87) bg_active_tab_pane_cp3_srt

0xb2a2,	// (0x00025f88) tabs_4_active_pane_srt_g1

0xb2aa,	// (0x00025f90) tabs_4_active_pane_srt_t1_ParamLimits

0xb2aa,	// (0x00025f90) tabs_4_active_pane_srt_t1

0xb290,	// (0x00025f76) bg_active_tab_pane_g1_cp3_copy1

0x900d,	// (0x00023cf3) bg_active_tab_pane_g2_cp3_copy1

0xb299,	// (0x00025f7f) bg_active_tab_pane_g3_cp3_copy1

0x7ea1,	// (0x00022b87) tabs_2_long_active_pane_srt_ParamLimits

0x7ea1,	// (0x00022b87) tabs_2_long_active_pane_srt

0x7ea1,	// (0x00022b87) tabs_2_long_passive_pane_srt_ParamLimits

0x7ea1,	// (0x00022b87) tabs_2_long_passive_pane_srt

0x8917,	// (0x000235fd) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8917,	// (0x000235fd) bg_passive_tab_pane_cp4_srt

0xaf84,	// (0x00025c6a) bg_passive_tab_pane_g1_cp4_srt

0x900d,	// (0x00023cf3) bg_passive_tab_pane_g2_cp4_srt

0xaf8d,	// (0x00025c73) bg_passive_tab_pane_g3_cp4_srt

0x88f6,	// (0x000235dc) bg_active_tab_pane_cp4_srt_ParamLimits

0x88f6,	// (0x000235dc) bg_active_tab_pane_cp4_srt

0xaf96,	// (0x00025c7c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaf96,	// (0x00025c7c) tabs_2_long_active_pane_srt_t1

0xaf84,	// (0x00025c6a) bg_active_tab_pane_g1_cp4_srt

0x900d,	// (0x00023cf3) bg_active_tab_pane_g2_cp4_srt

0xaf8d,	// (0x00025c73) bg_active_tab_pane_g3_cp4_srt

0x811c,	// (0x00022e02) tabs_3_long_active_pane_srt_ParamLimits

0x811c,	// (0x00022e02) tabs_3_long_active_pane_srt

0x811c,	// (0x00022e02) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x811c,	// (0x00022e02) tabs_3_long_passive_pane_cp_srt

0x811c,	// (0x00022e02) tabs_3_long_passive_pane_srt_ParamLimits

0x811c,	// (0x00022e02) tabs_3_long_passive_pane_srt

0x8917,	// (0x000235fd) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8917,	// (0x000235fd) bg_passive_tab_pane_cp5_srt

0x9097,	// (0x00023d7d) bg_passive_tab_pane_g1_cp5_srt

0x900d,	// (0x00023cf3) bg_passive_tab_pane_g2_cp5_srt

0x90a0,	// (0x00023d86) bg_passive_tab_pane_g3_cp5_srt

0x88f6,	// (0x000235dc) bg_active_tab_pane_cp5_srt_ParamLimits

0x88f6,	// (0x000235dc) bg_active_tab_pane_cp5_srt

0xaf72,	// (0x00025c58) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaf72,	// (0x00025c58) tabs_3_long_active_pane_srt_t1

0x9097,	// (0x00023d7d) bg_active_tab_pane_g1_cp5_srt

0x900d,	// (0x00023cf3) bg_active_tab_pane_g2_cp5_srt

0x90a0,	// (0x00023d86) bg_active_tab_pane_g3_cp5_srt

0xaf64,	// (0x00025c4a) navi_text_pane_srt_t1

0xaf5c,	// (0x00025c42) navi_icon_pane_srt_g1

0x9591,	// (0x00024277) midp_editing_number_pane_srt

0x93cb,	// (0x000240b1) midp_ticker_pane_srt

0x9599,	// (0x0002427f) midp_ticker_pane_srt_g1

0x95a1,	// (0x00024287) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002a458) midp_ticker_pane_srt_g

0x95a9,	// (0x0002428f) midp_ticker_pane_srt_t1

0xaf4d,	// (0x00025c33) midp_editing_number_pane_t1_copy1

0x93d3,	// (0x000240b9) listscroll_midp_pane

0x93d3,	// (0x000240b9) midp_form_pane

0x9443,	// (0x00024129) midp_info_popup_window_ParamLimits

0x9443,	// (0x00024129) midp_info_popup_window

0x87df,	// (0x000234c5) bg_popup_sub_pane_cp50_ParamLimits

0x87df,	// (0x000234c5) bg_popup_sub_pane_cp50

0xa073,	// (0x00024d59) listscroll_midp_info_pane_ParamLimits

0xa073,	// (0x00024d59) listscroll_midp_info_pane

0xa047,	// (0x00024d2d) listscroll_form_midp_pane_ParamLimits

0xa047,	// (0x00024d2d) listscroll_form_midp_pane

0xa053,	// (0x00024d39) scroll_bar_cp050

0xa027,	// (0x00024d0d) list_midp_pane

0xbcd4,	// (0x000269ba) signal_pane_g2_cp

0x9f61,	// (0x00024c47) listscroll_midp_info_pane_t1_ParamLimits

0x9f61,	// (0x00024c47) listscroll_midp_info_pane_t1

0x9f79,	// (0x00024c5f) listscroll_midp_info_pane_t2_ParamLimits

0x9f79,	// (0x00024c5f) listscroll_midp_info_pane_t2

0x9fb7,	// (0x00024c9d) listscroll_midp_info_pane_t3_ParamLimits

0x9fb7,	// (0x00024c9d) listscroll_midp_info_pane_t3

0x9ff1,	// (0x00024cd7) listscroll_midp_info_pane_t4_ParamLimits

0x9ff1,	// (0x00024cd7) listscroll_midp_info_pane_t4

0x0003,

0xf823,	// (0x0002a509) listscroll_midp_info_pane_t_ParamLimits

0xf823,	// (0x0002a509) listscroll_midp_info_pane_t

0x88a3,	// (0x00023589) scroll_pane_cp21

0x9eff,	// (0x00024be5) form_midp_field_choice_group_pane

0x9f08,	// (0x00024bee) form_midp_field_text_pane

0x9f47,	// (0x00024c2d) form_midp_field_time_pane

0x9f4f,	// (0x00024c35) form_midp_gauge_slider_pane

0x9f58,	// (0x00024c3e) form_midp_gauge_wait_pane

0x7dc1,	// (0x00022aa7) form_midp_image_pane

0x517e,	// (0x0001fe64) list_single_midp_pane_ParamLimits

0x517e,	// (0x0001fe64) list_single_midp_pane

0x9eb7,	// (0x00024b9d) form_midp_field_text_pane_t1

0x9c87,	// (0x0002496d) input_focus_pane_cp050

0x9eee,	// (0x00024bd4) list_midp_form_text_pane

0x9e86,	// (0x00024b6c) form_midp_field_choice_group_pane_t1

0x9e94,	// (0x00024b7a) input_focus_pane_cp051

0x9ea8,	// (0x00024b8e) list_midp_choice_pane

0x7dc1,	// (0x00022aa7) status_idle_pane

0x9e6a,	// (0x00024b50) form_midp_field_time_pane_t1

0x7db7,	// (0x00022a9d) wait_anim_pane_g2_copy1

0x9e78,	// (0x00024b5e) form_midp_field_time_pane_t2

0x0001,

0x94f1,	// (0x000241d7) aid_navinavi_width_2_pane

0xf81e,	// (0x0002a504) form_midp_field_time_pane_t

0x7dc1,	// (0x00022aa7) input_focus_pane_cp052

0x7dc1,	// (0x00022aa7) bg_input_focus_pane_cp040

0x9e2a,	// (0x00024b10) form_midp_gauge_slider_pane_t1

0x9e38,	// (0x00024b1e) form_midp_gauge_slider_pane_t2

0x9e46,	// (0x00024b2c) form_midp_gauge_slider_pane_t3

0x9e54,	// (0x00024b3a) form_midp_gauge_slider_pane_t4

0x0003,

0xf815,	// (0x0002a4fb) form_midp_gauge_slider_pane_t

0x9e62,	// (0x00024b48) form_midp_slider_pane

0x7ea1,	// (0x00022b87) bg_input_focus_pane_cp041_ParamLimits

0x7ea1,	// (0x00022b87) bg_input_focus_pane_cp041

0x9df7,	// (0x00024add) form_midp_gauge_wait_pane_t1_ParamLimits

0x9df7,	// (0x00024add) form_midp_gauge_wait_pane_t1

0x9e09,	// (0x00024aef) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e09,	// (0x00024aef) form_midp_gauge_wait_pane_t2

0x0001,

0xf810,	// (0x0002a4f6) form_midp_gauge_wait_pane_t_ParamLimits

0xf810,	// (0x0002a4f6) form_midp_gauge_wait_pane_t

0x9e1b,	// (0x00024b01) form_midp_wait_pane_ParamLimits

0x9e1b,	// (0x00024b01) form_midp_wait_pane

0x9dc1,	// (0x00024aa7) form_midp_image_pane_g1

0x9dca,	// (0x00024ab0) form_midp_image_pane_t1

0x9dd9,	// (0x00024abf) form_midp_image_pane_t2

0x9de8,	// (0x00024ace) form_midp_image_pane_t3

0x0002,

0xf809,	// (0x0002a4ef) form_midp_image_pane_t

0x9db8,	// (0x00024a9e) list_single_midp_pane_g1

0x516f,	// (0x0001fe55) list_single_midp_pane_t1

0x9d90,	// (0x00024a76) list_midp_form_item_pane_ParamLimits

0x9d90,	// (0x00024a76) list_midp_form_item_pane

0x9499,	// (0x0002417f) list_midp_form_item_pane_t1

0x94a8,	// (0x0002418e) midp_ticker_pane_g1

0x94b4,	// (0x0002419a) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002a43e) midp_ticker_pane_g

0x94c0,	// (0x000241a6) midp_ticker_pane_t1

0xb19e,	// (0x00025e84) midp_editing_number_pane_t1

0xb17c,	// (0x00025e62) midp_editing_number_pane

0xb18b,	// (0x00025e71) midp_ticker_pane

0xaf3d,	// (0x00025c23) ai_message_heading_pane

0x7dc1,	// (0x00022aa7) bg_popup_window_pane_cp14

0xaf45,	// (0x00025c2b) listscroll_ai_message_pane

0xaec7,	// (0x00025bad) ai_message_heading_pane_g1_ParamLimits

0xaec7,	// (0x00025bad) ai_message_heading_pane_g1

0xaed3,	// (0x00025bb9) ai_message_heading_pane_g2_ParamLimits

0xaed3,	// (0x00025bb9) ai_message_heading_pane_g2

0xaedf,	// (0x00025bc5) ai_message_heading_pane_g3_ParamLimits

0xaedf,	// (0x00025bc5) ai_message_heading_pane_g3

0xaeeb,	// (0x00025bd1) ai_message_heading_pane_g4_ParamLimits

0xaeeb,	// (0x00025bd1) ai_message_heading_pane_g4

0x0003,

0xf94a,	// (0x0002a630) ai_message_heading_pane_g_ParamLimits

0xf94a,	// (0x0002a630) ai_message_heading_pane_g

0xaef7,	// (0x00025bdd) ai_message_heading_pane_t1_ParamLimits

0xaef7,	// (0x00025bdd) ai_message_heading_pane_t1

0xaf11,	// (0x00025bf7) ai_message_heading_pane_t2_ParamLimits

0xaf11,	// (0x00025bf7) ai_message_heading_pane_t2

0x0001,

0xf953,	// (0x0002a639) ai_message_heading_pane_t_ParamLimits

0xf953,	// (0x0002a639) ai_message_heading_pane_t

0xaf23,	// (0x00025c09) bg_popup_heading_pane_cp1_ParamLimits

0xaf23,	// (0x00025c09) bg_popup_heading_pane_cp1

0xaeb5,	// (0x00025b9b) list_ai_message_pane_ParamLimits

0xaeb5,	// (0x00025b9b) list_ai_message_pane

0x88a3,	// (0x00023589) scroll_pane_cp10

0xae51,	// (0x00025b37) list_ai_message_pane_g1

0xae59,	// (0x00025b3f) list_ai_message_pane_g2

0x0001,

0xf927,	// (0x0002a60d) list_ai_message_pane_g

0xae61,	// (0x00025b47) list_ai_message_pane_t1_ParamLimits

0xae61,	// (0x00025b47) list_ai_message_pane_t1

0xae76,	// (0x00025b5c) list_ai_message_pane_t2_ParamLimits

0xae76,	// (0x00025b5c) list_ai_message_pane_t2

0xae8b,	// (0x00025b71) list_ai_message_pane_t3_ParamLimits

0xae8b,	// (0x00025b71) list_ai_message_pane_t3

0xaea0,	// (0x00025b86) list_ai_message_pane_t4_ParamLimits

0xaea0,	// (0x00025b86) list_ai_message_pane_t4

0x0003,

0xf92c,	// (0x0002a612) list_ai_message_pane_t_ParamLimits

0xf92c,	// (0x0002a612) list_ai_message_pane_t

0xae3c,	// (0x00025b22) cell_ai_soft_ind_pane_ParamLimits

0xae3c,	// (0x00025b22) cell_ai_soft_ind_pane

0x94d2,	// (0x000241b8) cell_ai_soft_ind_pane_g1_ParamLimits

0x94d2,	// (0x000241b8) cell_ai_soft_ind_pane_g1

0x7dc1,	// (0x00022aa7) grid_highlight_cp1

0x94df,	// (0x000241c5) text_secondary_cp56_ParamLimits

0x94df,	// (0x000241c5) text_secondary_cp56

0xae11,	// (0x00025af7) example_general_pane_ParamLimits

0xae11,	// (0x00025af7) example_general_pane

0xae1d,	// (0x00025b03) example_parent_pane_g1_ParamLimits

0xae1d,	// (0x00025b03) example_parent_pane_g1

0xae29,	// (0x00025b0f) example_parent_pane_t1_ParamLimits

0xae29,	// (0x00025b0f) example_parent_pane_t1

0x67e9,	// (0x000214cf) popup_preview_text_window_ParamLimits

0x67e9,	// (0x000214cf) popup_preview_text_window

0x92fc,	// (0x00023fe2) list_single_pane_cp2_g4

0x81f8,	// (0x00022ede) bg_popup_preview_window_pane_ParamLimits

0x81f8,	// (0x00022ede) bg_popup_preview_window_pane

0xab69,	// (0x0002584f) popup_preview_text_window_t1_ParamLimits

0xab69,	// (0x0002584f) popup_preview_text_window_t1

0xab87,	// (0x0002586d) popup_preview_text_window_t2_ParamLimits

0xab87,	// (0x0002586d) popup_preview_text_window_t2

0xabd0,	// (0x000258b6) popup_preview_text_window_t3_ParamLimits

0xabd0,	// (0x000258b6) popup_preview_text_window_t3

0xac15,	// (0x000258fb) popup_preview_text_window_t4_ParamLimits

0xac15,	// (0x000258fb) popup_preview_text_window_t4

0x0004,

0xf8fb,	// (0x0002a5e1) popup_preview_text_window_t_ParamLimits

0xf8fb,	// (0x0002a5e1) popup_preview_text_window_t

0xac93,	// (0x00025979) scroll_pane_cp11

0x9c13,	// (0x000248f9) bg_popup_preview_window_pane_g1

0xab29,	// (0x0002580f) bg_popup_preview_window_pane_g2

0xab31,	// (0x00025817) bg_popup_preview_window_pane_g3

0xab39,	// (0x0002581f) bg_popup_preview_window_pane_g4

0xab41,	// (0x00025827) bg_popup_preview_window_pane_g5

0xab49,	// (0x0002582f) bg_popup_preview_window_pane_g6

0xab51,	// (0x00025837) bg_popup_preview_window_pane_g7

0xab59,	// (0x0002583f) bg_popup_preview_window_pane_g8

0x5a03,	// (0x000206e9) aid_popup_width_pane

0x67c7,	// (0x000214ad) popup_midp_note_alarm_window_ParamLimits

0x67c7,	// (0x000214ad) popup_midp_note_alarm_window

0x872a,	// (0x00023410) data_form_pane_ParamLimits

0x4de4,	// (0x0001faca) form_field_data_pane_g1

0x4dee,	// (0x0001fad4) form_field_data_pane_t1_ParamLimits

0x8736,	// (0x0002341c) input_focus_pane_ParamLimits

0x4e06,	// (0x0001faec) data_form_wide_pane_ParamLimits

0x4e17,	// (0x0001fafd) form_field_data_wide_pane_g1

0x4e23,	// (0x0001fb09) form_field_data_wide_pane_t1_ParamLimits

0x84a7,	// (0x0002318d) input_focus_pane_cp6_ParamLimits

0x8850,	// (0x00023536) input_popup_find_pane_g1_ParamLimits

0x8850,	// (0x00023536) input_popup_find_pane_g1

0x5f75,	// (0x00020c5b) aid_navi_side_left_pane

0x5f8a,	// (0x00020c70) aid_navi_side_right_pane

0xa542,	// (0x00025228) bg_popup_window_pane_cp30_ParamLimits

0xa542,	// (0x00025228) bg_popup_window_pane_cp30

0xa5bc,	// (0x000252a2) popup_midp_note_alarm_window_g1_ParamLimits

0xa5bc,	// (0x000252a2) popup_midp_note_alarm_window_g1

0xa5ec,	// (0x000252d2) popup_midp_note_alarm_window_t1_ParamLimits

0xa5ec,	// (0x000252d2) popup_midp_note_alarm_window_t1

0xa68d,	// (0x00025373) popup_midp_note_alarm_window_t2_ParamLimits

0xa68d,	// (0x00025373) popup_midp_note_alarm_window_t2

0xa73b,	// (0x00025421) popup_midp_note_alarm_window_t3_ParamLimits

0xa73b,	// (0x00025421) popup_midp_note_alarm_window_t3

0xa76d,	// (0x00025453) popup_midp_note_alarm_window_t4_ParamLimits

0xa76d,	// (0x00025453) popup_midp_note_alarm_window_t4

0xa793,	// (0x00025479) popup_midp_note_alarm_window_t5_ParamLimits

0xa793,	// (0x00025479) popup_midp_note_alarm_window_t5

0x000a,

0xf898,	// (0x0002a57e) popup_midp_note_alarm_window_t_ParamLimits

0xf898,	// (0x0002a57e) popup_midp_note_alarm_window_t

0xa83f,	// (0x00025525) wait_bar_pane_cp1_ParamLimits

0xa83f,	// (0x00025525) wait_bar_pane_cp1

0x7dc1,	// (0x00022aa7) wait_anim_pane_copy1

0x7dc1,	// (0x00022aa7) wait_border_pane_copy1

0xa228,	// (0x00024f0e) wait_border_pane_g1_copy1

0x4e3d,	// (0x0001fb23) form_field_popup_pane_g1

0x4e45,	// (0x0001fb2b) form_field_popup_pane_t1_ParamLimits

0x8736,	// (0x0002341c) input_focus_pane_cp7_ParamLimits

0x8764,	// (0x0002344a) list_form_pane_ParamLimits

0x4e5d,	// (0x0001fb43) form_field_popup_wide_pane_g1

0x4e65,	// (0x0001fb4b) form_field_popup_wide_pane_t1_ParamLimits

0x8736,	// (0x0002341c) input_focus_pane_cp8_ParamLimits

0x8770,	// (0x00023456) list_form_wide_pane_ParamLimits

0xb324,	// (0x0002600a) aid_size_cell_graphic_pane

0x4eef,	// (0x0001fbd5) data_form_pane_t1_ParamLimits

0x51d8,	// (0x0001febe) data_form_wide_pane_t1_ParamLimits

0x97e0,	// (0x000244c6) bg_status_flat_pane

0x7e01,	// (0x00022ae7) title_pane_t1_ParamLimits

0x7e69,	// (0x00022b4f) title_pane_t2_ParamLimits

0x7e8f,	// (0x00022b75) title_pane_t3_ParamLimits

0xf557,	// (0x0002a23d) title_pane_t_ParamLimits

0x8d24,	// (0x00023a0a) level_1_signal_ParamLimits

0x8d36,	// (0x00023a1c) level_2_signal_ParamLimits

0x8d49,	// (0x00023a2f) level_3_signal_ParamLimits

0x8d5c,	// (0x00023a42) level_4_signal_ParamLimits

0x8d6f,	// (0x00023a55) level_5_signal_ParamLimits

0x8d82,	// (0x00023a68) level_6_signal_ParamLimits

0x8d95,	// (0x00023a7b) level_7_signal_ParamLimits

0x8d24,	// (0x00023a0a) level_1_battery_ParamLimits

0x8d36,	// (0x00023a1c) level_2_battery_ParamLimits

0x8d49,	// (0x00023a2f) level_3_battery_ParamLimits

0x8d5c,	// (0x00023a42) level_4_battery_ParamLimits

0x8d6f,	// (0x00023a55) level_5_battery_ParamLimits

0x8d82,	// (0x00023a68) level_6_battery_ParamLimits

0x8d95,	// (0x00023a7b) level_7_battery_ParamLimits

0xa447,	// (0x0002512d) bg_status_flat_pane_g1

0xa44f,	// (0x00025135) bg_status_flat_pane_g2

0xa457,	// (0x0002513d) bg_status_flat_pane_g3

0xa45f,	// (0x00025145) bg_status_flat_pane_g4

0xa467,	// (0x0002514d) bg_status_flat_pane_g5

0xa46f,	// (0x00025155) bg_status_flat_pane_g6

0xa477,	// (0x0002515d) bg_status_flat_pane_g7

0x7eb7,	// (0x00022b9d) tabs_3_active_pane_t1_ParamLimits

0x7eb7,	// (0x00022b9d) tabs_3_passive_pane_t1_ParamLimits

0x7ed1,	// (0x00022bb7) tabs_4_active_pane_t1_ParamLimits

0x7ed1,	// (0x00022bb7) tabs_4_1_passive_pane_t1_ParamLimits

0x88e4,	// (0x000235ca) tabs_2_active_pane_t1_ParamLimits

0x88e4,	// (0x000235ca) tabs_2_passive_pane_t1_ParamLimits

0x88f6,	// (0x000235dc) bg_active_tab_pane_cp4_ParamLimits

0x8904,	// (0x000235ea) tabs_2_long_active_pane_t1_ParamLimits

0x8917,	// (0x000235fd) bg_passive_tab_pane_cp4_ParamLimits

0x1684,	// (0x0001c36a) list_single_midp_graphic_pane_t1_ParamLimits

0x88f6,	// (0x000235dc) bg_active_tab_pane_cp5_ParamLimits

0x8923,	// (0x00023609) tabs_3_long_active_pane_t1_ParamLimits

0x8917,	// (0x000235fd) bg_passive_tab_pane_cp5_ParamLimits

0x1684,	// (0x0001c36a) list_single_midp_graphic_pane_t1

0x97e0,	// (0x000244c6) bg_status_flat_pane_ParamLimits

0x98a3,	// (0x00024589) indicator_pane_cp2_ParamLimits

0x98a3,	// (0x00024589) indicator_pane_cp2

0x99ce,	// (0x000246b4) navi_pane_srt_ParamLimits

0x99ce,	// (0x000246b4) navi_pane_srt

0x99f2,	// (0x000246d8) popup_clock_digital_analogue_window_cp1

0x7f7e,	// (0x00022c64) indicator_pane_t1

0x93cb,	// (0x000240b1) copy_highlight_pane

0x93cb,	// (0x000240b1) cursor_graphics_pane

0x93cb,	// (0x000240b1) graphic_within_text_pane

0x93cb,	// (0x000240b1) link_highlight_pane

0xac56,	// (0x0002593c) popup_preview_text_window_t5_ParamLimits

0xac56,	// (0x0002593c) popup_preview_text_window_t5

0x94f9,	// (0x000241df) cursor_digital_pane

0x94f9,	// (0x000241df) cursor_primary_pane

0x950a,	// (0x000241f0) cursor_primary_small_pane

0x9512,	// (0x000241f8) cursor_secondary_pane

0x951a,	// (0x00024200) cursor_title_pane

0x94f9,	// (0x000241df) link_highlight_digital_pane

0x9501,	// (0x000241e7) link_highlight_primary_pane

0x950a,	// (0x000241f0) link_highlight_primary_small_pane

0x9512,	// (0x000241f8) link_highlight_secondary_pane

0x951a,	// (0x00024200) link_highlight_title_pane

0x94f9,	// (0x000241df) copy_highlight_digital_pane

0x94f9,	// (0x000241df) copy_highlight_primary_pane

0x950a,	// (0x000241f0) copy_highlight_primary_small_pane

0x9512,	// (0x000241f8) copy_highlight_secondary_pane

0x951a,	// (0x00024200) copy_highlight_title_pane

0x9512,	// (0x000241f8) graphic_text_digital_pane

0xa4e5,	// (0x000251cb) graphic_text_primary_pane

0xa4ee,	// (0x000251d4) graphic_text_primary_small_pane

0x950a,	// (0x000241f0) graphic_text_secondary_pane

0x94f9,	// (0x000241df) graphic_text_title_pane

0x9522,	// (0x00024208) cursor_primary_pane_g1

0xa4d7,	// (0x000251bd) cursor_text_primary_t1

0xa4bf,	// (0x000251a5) cursor_primary_small_pane_g1

0xa4c9,	// (0x000251af) cursor_text_primary_small_t1

0xa4a7,	// (0x0002518d) cursor_primary_small_pane_g1_copy1

0xa4b1,	// (0x00025197) cursor_text_primary_small_t1_copy1

0xa48f,	// (0x00025175) cursor_text_title_t1

0xa49d,	// (0x00025183) cursor_title_pane_g1

0x9522,	// (0x00024208) cursor_digital_pane_g1

0x952c,	// (0x00024212) cursor_text_digital_t1

0x9551,	// (0x00024237) link_highlight_primary_pane_g1

0xa438,	// (0x0002511e) link_highlight_primary_pane_t1

0x953a,	// (0x00024220) link_highlight_primary_small_pane_g1

0x9542,	// (0x00024228) link_highlight_primary_small_pane_t1

0x9551,	// (0x00024237) link_highlight_secondary_pane_g1

0x9559,	// (0x0002423f) link_highlight_secondary_pane_t1

0xa3ac,	// (0x00025092) link_highlight_title_pane_g1

0xa3b4,	// (0x0002509a) link_highlight_title_pane_t1

0xa395,	// (0x0002507b) link_highlight_digital_pane_g1

0xa39d,	// (0x00025083) link_highlight_digital_pane_t1

0xa26d,	// (0x00024f53) copy_highlight_primary_pane_g1

0xa275,	// (0x00024f5b) copy_highlight_primary_pane_t1

0xa247,	// (0x00024f2d) copy_highlight_primary_small_pane_g1

0xa25e,	// (0x00024f44) copy_highlight_primary_small_pane_t1

0x9568,	// (0x0002424e) copy_highlight_secondary_pane_g1

0x9570,	// (0x00024256) copy_highlight_secondary_pane_t1

0xa247,	// (0x00024f2d) copy_highlight_title_pane_g1

0xa24f,	// (0x00024f35) copy_highlight_title_pane_t1

0xa26d,	// (0x00024f53) copy_highlight_digital_pane_g1

0xb4f2,	// (0x000261d8) copy_highlight_digital_pane_t1

0xb446,	// (0x0002612c) graphic_text_primary_pane_g1

0xb4d6,	// (0x000261bc) graphic_text_primary_pane_t1

0xb4e4,	// (0x000261ca) graphic_text_primary_pane_t2

0x0001,

0xf9c7,	// (0x0002a6ad) graphic_text_primary_pane_t

0xb4b2,	// (0x00026198) graphic_text_primary_small_pane_g1

0xb4ba,	// (0x000261a0) graphic_text_primary_small_pane_t1

0xb4c8,	// (0x000261ae) graphic_text_primary_small_pane_t2

0x0001,

0xf9c2,	// (0x0002a6a8) graphic_text_primary_small_pane_t

0xb48e,	// (0x00026174) graphic_text_secondary_pane_g1

0xb496,	// (0x0002617c) graphic_text_secondary_pane_t1

0xb4a4,	// (0x0002618a) graphic_text_secondary_pane_t2

0x0001,

0xf9bd,	// (0x0002a6a3) graphic_text_secondary_pane_t

0xb46a,	// (0x00026150) graphic_text_title_pane_g1

0xb472,	// (0x00026158) graphic_text_title_pane_t1

0xb480,	// (0x00026166) graphic_text_title_pane_t2

0x0001,

0xf9b8,	// (0x0002a69e) graphic_text_title_pane_t

0xb446,	// (0x0002612c) graphic_text_digital_pane_g1

0xb44e,	// (0x00026134) graphic_text_digital_pane_t1

0xb45c,	// (0x00026142) graphic_text_digital_pane_t2

0x0001,

0xf9b3,	// (0x0002a699) graphic_text_digital_pane_t

0x7ea1,	// (0x00022b87) navi_icon_pane_srt_ParamLimits

0x7ea1,	// (0x00022b87) navi_icon_pane_srt

0x7dc1,	// (0x00022aa7) navi_midp_pane_srt

0x7dc1,	// (0x00022aa7) navi_navi_pane_srt

0x7ea1,	// (0x00022b87) navi_text_pane_srt_ParamLimits

0x7ea1,	// (0x00022b87) navi_text_pane_srt

0xb411,	// (0x000260f7) navi_navi_icon_text_pane_srt

0xb419,	// (0x000260ff) navi_navi_pane_srt_g1_ParamLimits

0xb419,	// (0x000260ff) navi_navi_pane_srt_g1

0xb42b,	// (0x00026111) navi_navi_pane_srt_g2_ParamLimits

0xb42b,	// (0x00026111) navi_navi_pane_srt_g2

0x0001,

0xf9ae,	// (0x0002a694) navi_navi_pane_srt_g_ParamLimits

0xf9ae,	// (0x0002a694) navi_navi_pane_srt_g

0xb43d,	// (0x00026123) navi_navi_tabs_pane_srt

0xb411,	// (0x000260f7) navi_navi_text_pane_srt

0xb411,	// (0x000260f7) navi_navi_volume_pane_srt

0xb402,	// (0x000260e8) navi_navi_text_pane_srt_t1

0x6dfa,	// (0x00021ae0) navi_navi_volume_pane_srt_g1

0x6e02,	// (0x00021ae8) volume_small_pane_srt_ParamLimits

0x6e02,	// (0x00021ae8) volume_small_pane_srt

0x6255,	// (0x00020f3b) volume_small_pane_srt_g1_ParamLimits

0x6255,	// (0x00020f3b) volume_small_pane_srt_g1

0x6265,	// (0x00020f4b) volume_small_pane_srt_g2_ParamLimits

0x6265,	// (0x00020f4b) volume_small_pane_srt_g2

0x6276,	// (0x00020f5c) volume_small_pane_srt_g3_ParamLimits

0x6276,	// (0x00020f5c) volume_small_pane_srt_g3

0x6287,	// (0x00020f6d) volume_small_pane_srt_g4_ParamLimits

0x6287,	// (0x00020f6d) volume_small_pane_srt_g4

0x6298,	// (0x00020f7e) volume_small_pane_srt_g5_ParamLimits

0x6298,	// (0x00020f7e) volume_small_pane_srt_g5

0x62a9,	// (0x00020f8f) volume_small_pane_srt_g6_ParamLimits

0x62a9,	// (0x00020f8f) volume_small_pane_srt_g6

0x62ba,	// (0x00020fa0) volume_small_pane_srt_g7_ParamLimits

0x62ba,	// (0x00020fa0) volume_small_pane_srt_g7

0x62cb,	// (0x00020fb1) volume_small_pane_srt_g8_ParamLimits

0x62cb,	// (0x00020fb1) volume_small_pane_srt_g8

0x62dc,	// (0x00020fc2) volume_small_pane_srt_g9_ParamLimits

0x62dc,	// (0x00020fc2) volume_small_pane_srt_g9

0x62ed,	// (0x00020fd3) volume_small_pane_srt_g10_ParamLimits

0x62ed,	// (0x00020fd3) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002a443) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002a443) volume_small_pane_srt_g

0x82a1,	// (0x00022f87) query_popup_data_pane_cp2

0xb3e8,	// (0x000260ce) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb3e8,	// (0x000260ce) navi_navi_icon_text_pane_srt_t1

0xa4e5,	// (0x000251cb) navi_tabs_2_long_pane_srt

0xa4e5,	// (0x000251cb) navi_tabs_2_pane_srt

0xa4e5,	// (0x000251cb) navi_tabs_3_long_pane_srt

0xa4e5,	// (0x000251cb) navi_tabs_3_pane_srt

0xa4e5,	// (0x000251cb) navi_tabs_4_pane_srt

0x6dda,	// (0x00021ac0) tabs_2_active_pane_srt_ParamLimits

0x6dda,	// (0x00021ac0) tabs_2_active_pane_srt

0x6dea,	// (0x00021ad0) tabs_2_passive_pane_srt_ParamLimits

0x6dea,	// (0x00021ad0) tabs_2_passive_pane_srt

0x96ef,	// (0x000243d5) bg_passive_tab_pane_cp1_srt_ParamLimits

0x96ef,	// (0x000243d5) bg_passive_tab_pane_cp1_srt

0xb3b4,	// (0x0002609a) bg_passive_tab_pane_g1_cp1_srt

0x900d,	// (0x00023cf3) bg_passive_tab_pane_g2_cp1_srt

0xb3bd,	// (0x000260a3) bg_passive_tab_pane_g3_cp1_srt

0x7ea1,	// (0x00022b87) bg_active_tab_pane_cp1_srt_ParamLimits

0x7ea1,	// (0x00022b87) bg_active_tab_pane_cp1_srt

0xb3c6,	// (0x000260ac) tabs_2_active_pane_srt_g1

0xb3ce,	// (0x000260b4) tabs_2_active_pane_srt_t1_ParamLimits

0xb3ce,	// (0x000260b4) tabs_2_active_pane_srt_t1

0xb3b4,	// (0x0002609a) bg_active_tab_pane_g1_cp1_srt

0x900d,	// (0x00023cf3) bg_active_tab_pane_g2_cp1_srt

0xb3bd,	// (0x000260a3) bg_active_tab_pane_g3_cp1_srt

0x6da7,	// (0x00021a8d) tabs_3_active_pane_srt_ParamLimits

0x6da7,	// (0x00021a8d) tabs_3_active_pane_srt

0x6db8,	// (0x00021a9e) tabs_3_passive_pane_cp_srt_ParamLimits

0x6db8,	// (0x00021a9e) tabs_3_passive_pane_cp_srt

0x6dc9,	// (0x00021aaf) tabs_3_passive_pane_srt_ParamLimits

0x6dc9,	// (0x00021aaf) tabs_3_passive_pane_srt

0x96ef,	// (0x000243d5) bg_passive_tab_pane_cp2_srt_ParamLimits

0x96ef,	// (0x000243d5) bg_passive_tab_pane_cp2_srt

0x957f,	// (0x00024265) bg_passive_tab_pane_g1_cp2_srt

0x900d,	// (0x00023cf3) bg_passive_tab_pane_g2_cp2_srt

0x9588,	// (0x0002426e) bg_passive_tab_pane_g3_cp2_srt

0x7ea1,	// (0x00022b87) bg_active_tab_pane_cp2_srt_ParamLimits

0x7ea1,	// (0x00022b87) bg_active_tab_pane_cp2_srt

0xb39a,	// (0x00026080) tabs_3_active_pane_srt_g1

0xb3a2,	// (0x00026088) tabs_3_active_pane_srt_t1_ParamLimits

0xb3a2,	// (0x00026088) tabs_3_active_pane_srt_t1

0x957f,	// (0x00024265) bg_active_tab_pane_g1_cp2_srt

0x900d,	// (0x00023cf3) bg_active_tab_pane_g2_cp2_srt

0x9588,	// (0x0002426e) bg_active_tab_pane_g3_cp2_srt

0x6d5f,	// (0x00021a45) tabs_4_active_pane_srt_ParamLimits

0x6d5f,	// (0x00021a45) tabs_4_active_pane_srt

0x6d71,	// (0x00021a57) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6d71,	// (0x00021a57) tabs_4_passive_pane_cp2_srt

0x645c,	// (0x00021142) aid_size_cell_toolbar

0x8917,	// (0x000235fd) main_idle_act_pane_ParamLimits

0x65fd,	// (0x000212e3) popup_large_graphic_colour_window_ParamLimits

0x6964,	// (0x0002164a) popup_toolbar_window_ParamLimits

0x6964,	// (0x0002164a) popup_toolbar_window

0xb1ad,	// (0x00025e93) list_single_graphic_2heading_pane_ParamLimits

0xb1ad,	// (0x00025e93) list_single_graphic_2heading_pane

0x8ad3,	// (0x000237b9) aid_size_cell_apps_grid_lsc_pane

0x8ae5,	// (0x000237cb) aid_size_cell_apps_grid_prt_pane

0x96ef,	// (0x000243d5) bg_wml_button_pane_cp1_ParamLimits

0x96ef,	// (0x000243d5) bg_wml_button_pane_cp1

0x9eb7,	// (0x00024b9d) form_midp_field_text_pane_t1_ParamLimits

0x9c87,	// (0x0002496d) input_focus_pane_cp050_ParamLimits

0x9eee,	// (0x00024bd4) list_midp_form_text_pane_ParamLimits

0x9e94,	// (0x00024b7a) input_focus_pane_cp051_ParamLimits

0x9ea8,	// (0x00024b8e) list_midp_choice_pane_ParamLimits

0x9d40,	// (0x00024a26) list_single_2graphic_pane_cp3_ParamLimits

0x9d40,	// (0x00024a26) list_single_2graphic_pane_cp3

0x9d61,	// (0x00024a47) list_single_midp_graphic_pane_ParamLimits

0x9d61,	// (0x00024a47) list_single_midp_graphic_pane

0x5051,	// (0x0001fd37) list_single_graphic_2heading_pane_g1_ParamLimits

0x5051,	// (0x0001fd37) list_single_graphic_2heading_pane_g1

0x505d,	// (0x0001fd43) list_single_graphic_2heading_pane_g4_ParamLimits

0x505d,	// (0x0001fd43) list_single_graphic_2heading_pane_g4

0x5069,	// (0x0001fd4f) list_single_graphic_2heading_pane_g5_ParamLimits

0x5069,	// (0x0001fd4f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002a496) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002a496) list_single_graphic_2heading_pane_g

0x5075,	// (0x0001fd5b) list_single_graphic_2heading_pane_t1_ParamLimits

0x5075,	// (0x0001fd5b) list_single_graphic_2heading_pane_t1

0x5089,	// (0x0001fd6f) list_single_graphic_2heading_pane_t2_ParamLimits

0x5089,	// (0x0001fd6f) list_single_graphic_2heading_pane_t2

0x50a3,	// (0x0001fd89) list_single_graphic_2heading_pane_t3_ParamLimits

0x50a3,	// (0x0001fd89) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002a49d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002a49d) list_single_graphic_2heading_pane_t

0x9b51,	// (0x00024837) bg_popup_sub_pane_cp2

0x9b7b,	// (0x00024861) grid_toobar_pane

0x6a11,	// (0x000216f7) cell_toolbar_pane_ParamLimits

0x6a11,	// (0x000216f7) cell_toolbar_pane

0x9bb7,	// (0x0002489d) cell_toolbar_pane_g1_ParamLimits

0x9bb7,	// (0x0002489d) cell_toolbar_pane_g1

0x9bcb,	// (0x000248b1) cell_toolbar_pane_g2_ParamLimits

0x9bcb,	// (0x000248b1) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002a4a4) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002a4a4) cell_toolbar_pane_g

0x9bed,	// (0x000248d3) grid_highlight_pane_cp2_ParamLimits

0x9bed,	// (0x000248d3) grid_highlight_pane_cp2

0x9c07,	// (0x000248ed) toolbar_button_pane

0x9c13,	// (0x000248f9) toolbar_button_pane_g1

0x9c1b,	// (0x00024901) toolbar_button_pane_g2

0x9c23,	// (0x00024909) toolbar_button_pane_g3

0x9c2b,	// (0x00024911) toolbar_button_pane_g4

0x9c33,	// (0x00024919) toolbar_button_pane_g5

0x9c3b,	// (0x00024921) toolbar_button_pane_g6

0x9c43,	// (0x00024929) toolbar_button_pane_g7

0x9c4b,	// (0x00024931) toolbar_button_pane_g8

0x9c53,	// (0x00024939) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002a4a9) toolbar_button_pane_g

0x6a49,	// (0x0002172f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6a49,	// (0x0002172f) list_single_2graphic_pane_g1_cp3

0x6a55,	// (0x0002173b) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6a55,	// (0x0002173b) list_single_2graphic_pane_g2_cp3

0x6a66,	// (0x0002174c) list_single_2graphic_pane_g3_cp3

0x6a6e,	// (0x00021754) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6a6e,	// (0x00021754) list_single_2graphic_pane_g4_cp3

0x6a7a,	// (0x00021760) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6a7a,	// (0x00021760) list_single_2graphic_pane_t1_cp3

0xa067,	// (0x00024d4d) list_single_midp_graphic_pane_g2_ParamLimits

0xa067,	// (0x00024d4d) list_single_midp_graphic_pane_g2

0x6464,	// (0x0002114a) aid_zoom_text_primary

0x5025,	// (0x0001fd0b) aid_zoom_text_secondary

0x9639,	// (0x0002431f) status_small_pane_g7_ParamLimits

0x9639,	// (0x0002431f) status_small_pane_g7

0x965c,	// (0x00024342) status_small_pane_t1_ParamLimits

0x7dd8,	// (0x00022abe) title_pane_g2

0x0003,

0xf54e,	// (0x0002a234) title_pane_g

0x8345,	// (0x0002302b) aid_size_cell_colour_1_pane_ParamLimits

0x8345,	// (0x0002302b) aid_size_cell_colour_1_pane

0x8359,	// (0x0002303f) aid_size_cell_colour_2_pane_ParamLimits

0x8359,	// (0x0002303f) aid_size_cell_colour_2_pane

0x836d,	// (0x00023053) aid_size_cell_colour_3_pane_ParamLimits

0x836d,	// (0x00023053) aid_size_cell_colour_3_pane

0x8381,	// (0x00023067) aid_size_cell_colour_4_pane_ParamLimits

0x8381,	// (0x00023067) aid_size_cell_colour_4_pane

0x5eb2,	// (0x00020b98) title_pane_stacon_g1_ParamLimits

0x5eb2,	// (0x00020b98) title_pane_stacon_g1

0xa2cc,	// (0x00024fb2) popup_note_wait_window_g3_ParamLimits

0xa2cc,	// (0x00024fb2) popup_note_wait_window_g3

0xa342,	// (0x00025028) popup_note_wait_window_t5_ParamLimits

0xa342,	// (0x00025028) popup_note_wait_window_t5

0x7dc1,	// (0x00022aa7) main_feb_china_hwr_fs_writing_pane

0x64e0,	// (0x000211c6) popup_feb_china_hwr_fs_window_ParamLimits

0x64e0,	// (0x000211c6) popup_feb_china_hwr_fs_window

0x6a96,	// (0x0002177c) aid_size_cell_hwr_fs_ParamLimits

0x6a96,	// (0x0002177c) aid_size_cell_hwr_fs

0x9c87,	// (0x0002496d) bg_popup_sub_pane_cp3_ParamLimits

0x9c87,	// (0x0002496d) bg_popup_sub_pane_cp3

0x6aab,	// (0x00021791) grid_hwr_fs_pane_ParamLimits

0x6aab,	// (0x00021791) grid_hwr_fs_pane

0x6ac3,	// (0x000217a9) linegrid_hwr_fs_pane_ParamLimits

0x6ac3,	// (0x000217a9) linegrid_hwr_fs_pane

0x6ad3,	// (0x000217b9) cell_hwr_fs_pane_ParamLimits

0x6ad3,	// (0x000217b9) cell_hwr_fs_pane

0x9c93,	// (0x00024979) linegrid_hwr_fs_pane_g1_ParamLimits

0x9c93,	// (0x00024979) linegrid_hwr_fs_pane_g1

0x9c9f,	// (0x00024985) linegrid_hwr_fs_pane_g2_ParamLimits

0x9c9f,	// (0x00024985) linegrid_hwr_fs_pane_g2

0x9cb1,	// (0x00024997) linegrid_hwr_fs_pane_g3_ParamLimits

0x9cb1,	// (0x00024997) linegrid_hwr_fs_pane_g3

0x6af5,	// (0x000217db) linegrid_hwr_fs_pane_g4_ParamLimits

0x6af5,	// (0x000217db) linegrid_hwr_fs_pane_g4

0x6b0f,	// (0x000217f5) linegrid_hwr_fs_pane_g5_ParamLimits

0x6b0f,	// (0x000217f5) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ee,	// (0x0002a4d4) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ee,	// (0x0002a4d4) linegrid_hwr_fs_pane_g

0x9cbd,	// (0x000249a3) cell_hwr_fs_pane_g1_ParamLimits

0x9cbd,	// (0x000249a3) cell_hwr_fs_pane_g1

0x9a88,	// (0x0002476e) cell_hwr_fs_pane_g2_ParamLimits

0x9a88,	// (0x0002476e) cell_hwr_fs_pane_g2

0x9cd3,	// (0x000249b9) cell_hwr_fs_pane_g3_ParamLimits

0x9cd3,	// (0x000249b9) cell_hwr_fs_pane_g3

0x9ce0,	// (0x000249c6) cell_hwr_fs_pane_g4_ParamLimits

0x9ce0,	// (0x000249c6) cell_hwr_fs_pane_g4

0x0003,

0xf7f9,	// (0x0002a4df) cell_hwr_fs_pane_g_ParamLimits

0xf7f9,	// (0x0002a4df) cell_hwr_fs_pane_g

0x6b25,	// (0x0002180b) cell_hwr_fs_pane_t1

0x7dc1,	// (0x00022aa7) grid_highlight_pane_cp6

0x7dc1,	// (0x00022aa7) main_idle_act2_pane

0x888a,	// (0x00023570) aid_inside_area_popup_secondary

0xa979,	// (0x0002565f) aid_inside_area_window_primary_ParamLimits

0xa979,	// (0x0002565f) aid_inside_area_window_primary

0xb501,	// (0x000261e7) ai2_news_ticker_pane

0xb509,	// (0x000261ef) aid_size_cell_ai1_link_ParamLimits

0xb509,	// (0x000261ef) aid_size_cell_ai1_link

0xb523,	// (0x00026209) popup_ai2_data_window_ParamLimits

0xb523,	// (0x00026209) popup_ai2_data_window

0xb539,	// (0x0002621f) popup_ai2_link_window_ParamLimits

0xb539,	// (0x0002621f) popup_ai2_link_window

0x9c87,	// (0x0002496d) bg_popup_sub_pane_cp4_ParamLimits

0x9c87,	// (0x0002496d) bg_popup_sub_pane_cp4

0xb54d,	// (0x00026233) grid_ai2_link_pane_ParamLimits

0xb54d,	// (0x00026233) grid_ai2_link_pane

0xb564,	// (0x0002624a) popup_ai2_link_window_g1_ParamLimits

0xb564,	// (0x0002624a) popup_ai2_link_window_g1

0xb570,	// (0x00026256) popup_ai2_link_window_g2_ParamLimits

0xb570,	// (0x00026256) popup_ai2_link_window_g2

0x0001,

0xf9cc,	// (0x0002a6b2) popup_ai2_link_window_g_ParamLimits

0xf9cc,	// (0x0002a6b2) popup_ai2_link_window_g

0xb57f,	// (0x00026265) ai2_mp_button_pane

0xb587,	// (0x0002626d) ai2_mp_volume_pane

0x9e94,	// (0x00024b7a) bg_popup_sub_pane_cp5_ParamLimits

0x9e94,	// (0x00024b7a) bg_popup_sub_pane_cp5

0xb58f,	// (0x00026275) heading_ai2_gene_pane_ParamLimits

0xb58f,	// (0x00026275) heading_ai2_gene_pane

0xb59b,	// (0x00026281) list_ai2_gene_pane_ParamLimits

0xb59b,	// (0x00026281) list_ai2_gene_pane

0xb5e3,	// (0x000262c9) cell_ai2_link_pane_ParamLimits

0xb5e3,	// (0x000262c9) cell_ai2_link_pane

0xb5f9,	// (0x000262df) cell_ai2_link_pane_g1

0x7dc1,	// (0x00022aa7) grid_highlight_pane_cp7

0x6e17,	// (0x00021afd) ai2_mp_volume_pane_g1

0xb6c9,	// (0x000263af) ai2_mp_volume_pane_g2

0xb63e,	// (0x00026324) list_ai2_gene_pane_t1

0xb6d1,	// (0x000263b7) ai2_mp_volume_pane_g3

0x0002,

0xf9e5,	// (0x0002a6cb) ai2_mp_volume_pane_g

0x6e1f,	// (0x00021b05) volume_small_pane_cp3

0xb6d9,	// (0x000263bf) aid_size_cell_ai2_button

0xb6e1,	// (0x000263c7) grid_ai2_button_pane

0xb6ea,	// (0x000263d0) cell_ai2_button_pane_ParamLimits

0xb6ea,	// (0x000263d0) cell_ai2_button_pane

0x7db7,	// (0x00022a9d) cell_ai2_button_pane_g1

0x7dc1,	// (0x00022aa7) grid_highlight_pane_cp8

0xb689,	// (0x0002636f) ai2_gene_pane_t1_ParamLimits

0xb689,	// (0x0002636f) ai2_gene_pane_t1

0x6452,	// (0x00021138) aid_height_parent_landscape

0xafe4,	// (0x00025cca) aid_height_set_list

0xaff5,	// (0x00025cdb) aid_size_parent

0xb324,	// (0x0002600a) aid_size_cell_graphic_pane_ParamLimits

0xb5ab,	// (0x00026291) popup_ai2_data_window_g1_ParamLimits

0xb5ab,	// (0x00026291) popup_ai2_data_window_g1

0xb5b7,	// (0x0002629d) ai2_news_ticker_pane_g1

0xb5bf,	// (0x000262a5) ai2_news_ticker_pane_g2

0x0001,

0xf9d1,	// (0x0002a6b7) ai2_news_ticker_pane_g

0xb5c7,	// (0x000262ad) ai2_news_ticker_pane_t1

0xb5d5,	// (0x000262bb) ai2_news_ticker_pane_t2

0x0001,

0xf9d6,	// (0x0002a6bc) ai2_news_ticker_pane_t

0xb602,	// (0x000262e8) heading_ai2_gene_pane_g1

0xb60a,	// (0x000262f0) heading_ai2_gene_pane_t1_ParamLimits

0xb60a,	// (0x000262f0) heading_ai2_gene_pane_t1

0xb61f,	// (0x00026305) list_highlight_pane_cp6

0xb627,	// (0x0002630d) ai2_gene_pane_ParamLimits

0xb627,	// (0x0002630d) ai2_gene_pane

0xb64c,	// (0x00026332) list_ai2_gene_pane_t2

0x0001,

0xf9db,	// (0x0002a6c1) list_ai2_gene_pane_t

0xb65a,	// (0x00026340) list_highlight_pane_cp8_ParamLimits

0xb65a,	// (0x00026340) list_highlight_pane_cp8

0xb66b,	// (0x00026351) ai2_gene_pane_g1_ParamLimits

0xb66b,	// (0x00026351) ai2_gene_pane_g1

0xb67d,	// (0x00026363) ai2_gene_pane_g2_ParamLimits

0xb67d,	// (0x00026363) ai2_gene_pane_g2

0x0001,

0xf9e0,	// (0x0002a6c6) ai2_gene_pane_g_ParamLimits

0xf9e0,	// (0x0002a6c6) ai2_gene_pane_g

0x86cc,	// (0x000233b2) scroll_pane_cp12

0x640f,	// (0x000210f5) control_pane_t3_ParamLimits

0x640f,	// (0x000210f5) control_pane_t3

0x964d,	// (0x00024333) status_small_pane_g8_ParamLimits

0x964d,	// (0x00024333) status_small_pane_g8

0x65c6,	// (0x000212ac) popup_find_window_ParamLimits

0x67db,	// (0x000214c1) popup_note_image_window_ParamLimits

0x5051,	// (0x0001fd37) list_double2_graphic_pane_vc_g1_ParamLimits

0x5051,	// (0x0001fd37) list_double2_graphic_pane_vc_g1

0x505d,	// (0x0001fd43) list_double2_graphic_pane_vc_g2_ParamLimits

0x505d,	// (0x0001fd43) list_double2_graphic_pane_vc_g2

0x5069,	// (0x0001fd4f) list_double2_graphic_pane_vc_g3_ParamLimits

0x5069,	// (0x0001fd4f) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002a496) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a496) list_double2_graphic_pane_vc_g

0x50bb,	// (0x0001fda1) list_double2_graphic_pane_vc_t1_ParamLimits

0x50bb,	// (0x0001fda1) list_double2_graphic_pane_vc_t1

0x505d,	// (0x0001fd43) list_single_heading_pane_vc_g1_ParamLimits

0x505d,	// (0x0001fd43) list_single_heading_pane_vc_g1

0x5069,	// (0x0001fd4f) list_single_heading_pane_vc_g2_ParamLimits

0x5069,	// (0x0001fd4f) list_single_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a4be) list_single_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a4be) list_single_heading_pane_vc_g

0x50d1,	// (0x0001fdb7) list_single_heading_pane_vc_t1_ParamLimits

0x50d1,	// (0x0001fdb7) list_single_heading_pane_vc_t1

0x50e7,	// (0x0001fdcd) list_single_heading_pane_vc_t2_ParamLimits

0x50e7,	// (0x0001fdcd) list_single_heading_pane_vc_t2

0x0001,

0xf7dd,	// (0x0002a4c3) list_single_heading_pane_vc_t_ParamLimits

0xf7dd,	// (0x0002a4c3) list_single_heading_pane_vc_t

0x50f9,	// (0x0001fddf) list_setting_number_pane_vc_g1_ParamLimits

0x50f9,	// (0x0001fddf) list_setting_number_pane_vc_g1

0x5105,	// (0x0001fdeb) list_setting_number_pane_vc_g2_ParamLimits

0x5105,	// (0x0001fdeb) list_setting_number_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a4c8) list_setting_number_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a4c8) list_setting_number_pane_vc_g

0x5111,	// (0x0001fdf7) list_setting_number_pane_vc_t1_ParamLimits

0x5111,	// (0x0001fdf7) list_setting_number_pane_vc_t1

0x5125,	// (0x0001fe0b) list_setting_number_pane_vc_t2_ParamLimits

0x5125,	// (0x0001fe0b) list_setting_number_pane_vc_t2

0x5141,	// (0x0001fe27) list_setting_number_pane_vc_t3_ParamLimits

0x5141,	// (0x0001fe27) list_setting_number_pane_vc_t3

0x0002,

0xf7e7,	// (0x0002a4cd) list_setting_number_pane_vc_t_ParamLimits

0xf7e7,	// (0x0002a4cd) list_setting_number_pane_vc_t

0x515f,	// (0x0001fe45) set_value_pane_vc_ParamLimits

0x515f,	// (0x0001fe45) set_value_pane_vc

0xb1ad,	// (0x00025e93) list_double2_graphic_pane_vc_ParamLimits

0xb1ad,	// (0x00025e93) list_double2_graphic_pane_vc

0xb1ad,	// (0x00025e93) list_double2_large_graphic_pane_vc_ParamLimits

0xb1ad,	// (0x00025e93) list_double2_large_graphic_pane_vc

0xb1ad,	// (0x00025e93) list_double2_pane_vc_ParamLimits

0xb1ad,	// (0x00025e93) list_double2_pane_vc

0xb1ad,	// (0x00025e93) list_double_graphic_heading_pane_vc_ParamLimits

0xb1ad,	// (0x00025e93) list_double_graphic_heading_pane_vc

0xb1ad,	// (0x00025e93) list_double_graphic_pane_vc_ParamLimits

0xb1ad,	// (0x00025e93) list_double_graphic_pane_vc

0xb1ad,	// (0x00025e93) list_double_heading_pane_vc_ParamLimits

0xb1ad,	// (0x00025e93) list_double_heading_pane_vc

0xb1bf,	// (0x00025ea5) list_double_large_graphic_pane_vc_ParamLimits

0xb1bf,	// (0x00025ea5) list_double_large_graphic_pane_vc

0xb1ad,	// (0x00025e93) list_double_number_pane_vc_ParamLimits

0xb1ad,	// (0x00025e93) list_double_number_pane_vc

0xb1ad,	// (0x00025e93) list_double_pane_vc_ParamLimits

0xb1ad,	// (0x00025e93) list_double_pane_vc

0xb1ad,	// (0x00025e93) list_double_time_pane_vc_ParamLimits

0xb1ad,	// (0x00025e93) list_double_time_pane_vc

0xb1ad,	// (0x00025e93) list_setting_number_pane_vc_ParamLimits

0xb1ad,	// (0x00025e93) list_setting_number_pane_vc

0xb1ad,	// (0x00025e93) list_setting_pane_vc_ParamLimits

0xb1ad,	// (0x00025e93) list_setting_pane_vc

0xb1ad,	// (0x00025e93) list_single_graphic_heading_pane_vc_ParamLimits

0xb1ad,	// (0x00025e93) list_single_graphic_heading_pane_vc

0xb1ad,	// (0x00025e93) list_single_heading_pane_vc_ParamLimits

0xb1ad,	// (0x00025e93) list_single_heading_pane_vc

0x5238,	// (0x0001ff1e) list_single_number_heading_pane_vc_ParamLimits

0x5238,	// (0x0001ff1e) list_single_number_heading_pane_vc

0x5051,	// (0x0001fd37) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5051,	// (0x0001fd37) list_double_graphic_heading_pane_vc_g1

0x505d,	// (0x0001fd43) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x505d,	// (0x0001fd43) list_double_graphic_heading_pane_vc_g2

0x5069,	// (0x0001fd4f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5069,	// (0x0001fd4f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002a496) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a496) list_double_graphic_heading_pane_vc_g

0x52b9,	// (0x0001ff9f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x52b9,	// (0x0001ff9f) list_double_graphic_heading_pane_vc_t1

0x52d5,	// (0x0001ffbb) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x52d5,	// (0x0001ffbb) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ec,	// (0x0002a6d2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ec,	// (0x0002a6d2) list_double_graphic_heading_pane_vc_t

0x50f9,	// (0x0001fddf) list_setting_pane_vc_g1_ParamLimits

0x50f9,	// (0x0001fddf) list_setting_pane_vc_g1

0x5105,	// (0x0001fdeb) list_setting_pane_vc_g2_ParamLimits

0x5105,	// (0x0001fdeb) list_setting_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a4c8) list_setting_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a4c8) list_setting_pane_vc_g

0x52f3,	// (0x0001ffd9) list_setting_pane_vc_t1_ParamLimits

0x52f3,	// (0x0001ffd9) list_setting_pane_vc_t1

0x530f,	// (0x0001fff5) list_setting_pane_vc_t2_ParamLimits

0x530f,	// (0x0001fff5) list_setting_pane_vc_t2

0x0001,

0xfa1a,	// (0x0002a700) list_setting_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002a700) list_setting_pane_vc_t

0x515f,	// (0x0001fe45) set_value_pane_cp_vc_ParamLimits

0x515f,	// (0x0001fe45) set_value_pane_cp_vc

0x505d,	// (0x0001fd43) list_single_number_heading_pane_vc_g1_ParamLimits

0x505d,	// (0x0001fd43) list_single_number_heading_pane_vc_g1

0x5069,	// (0x0001fd4f) list_single_number_heading_pane_vc_g2_ParamLimits

0x5069,	// (0x0001fd4f) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a4be) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a4be) list_single_number_heading_pane_vc_g

0x532b,	// (0x00020011) list_single_number_heading_pane_vc_t1_ParamLimits

0x532b,	// (0x00020011) list_single_number_heading_pane_vc_t1

0x5341,	// (0x00020027) list_single_number_heading_pane_vc_t2_ParamLimits

0x5341,	// (0x00020027) list_single_number_heading_pane_vc_t2

0x5353,	// (0x00020039) list_single_number_heading_pane_vc_t3_ParamLimits

0x5353,	// (0x00020039) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1f,	// (0x0002a705) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x0002a705) list_single_number_heading_pane_vc_t

0x5051,	// (0x0001fd37) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5051,	// (0x0001fd37) list_single_graphic_heading_pane_vc_g1

0x505d,	// (0x0001fd43) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x505d,	// (0x0001fd43) list_single_graphic_heading_pane_vc_g4

0x5069,	// (0x0001fd4f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5069,	// (0x0001fd4f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002a496) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a496) list_single_graphic_heading_pane_vc_g

0x5365,	// (0x0002004b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5365,	// (0x0002004b) list_single_graphic_heading_pane_vc_t1

0x537b,	// (0x00020061) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x537b,	// (0x00020061) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa26,	// (0x0002a70c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0002a70c) list_single_graphic_heading_pane_vc_t

0x505d,	// (0x0001fd43) list_double2_pane_vc_g1_ParamLimits

0x505d,	// (0x0001fd43) list_double2_pane_vc_g1

0x5069,	// (0x0001fd4f) list_double2_pane_vc_g2_ParamLimits

0x5069,	// (0x0001fd4f) list_double2_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a4be) list_double2_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a4be) list_double2_pane_vc_g

0x538d,	// (0x00020073) list_double2_pane_vc_t1_ParamLimits

0x538d,	// (0x00020073) list_double2_pane_vc_t1

0x53a3,	// (0x00020089) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x53a3,	// (0x00020089) list_double2_large_graphic_pane_vc_g1

0x505d,	// (0x0001fd43) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x505d,	// (0x0001fd43) list_double2_large_graphic_pane_vc_g2

0x5069,	// (0x0001fd4f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5069,	// (0x0001fd4f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2b,	// (0x0002a711) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x0002a711) list_double2_large_graphic_pane_vc_g

0x53af,	// (0x00020095) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x53af,	// (0x00020095) list_double2_large_graphic_pane_vc_t1

0x53c5,	// (0x000200ab) list_double_time_pane_vc_g1_ParamLimits

0x53c5,	// (0x000200ab) list_double_time_pane_vc_g1

0x53d1,	// (0x000200b7) list_double_time_pane_vc_g2_ParamLimits

0x53d1,	// (0x000200b7) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0002a718) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0002a718) list_double_time_pane_vc_g

0x53dd,	// (0x000200c3) list_double_time_pane_vc_t1_ParamLimits

0x53dd,	// (0x000200c3) list_double_time_pane_vc_t1

0x5401,	// (0x000200e7) list_double_time_pane_vc_t2_ParamLimits

0x5401,	// (0x000200e7) list_double_time_pane_vc_t2

0x5450,	// (0x00020136) list_double_time_pane_vc_t3_ParamLimits

0x5450,	// (0x00020136) list_double_time_pane_vc_t3

0x5462,	// (0x00020148) list_double_time_pane_vc_t4_ParamLimits

0x5462,	// (0x00020148) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0002a71d) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0002a71d) list_double_time_pane_vc_t

0x505d,	// (0x0001fd43) list_double_pane_vc_g1_ParamLimits

0x505d,	// (0x0001fd43) list_double_pane_vc_g1

0x5069,	// (0x0001fd4f) list_double_pane_vc_g2_ParamLimits

0x5069,	// (0x0001fd4f) list_double_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a4be) list_double_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a4be) list_double_pane_vc_g

0x5476,	// (0x0002015c) list_double_pane_vc_t1_ParamLimits

0x5476,	// (0x0002015c) list_double_pane_vc_t1

0x548a,	// (0x00020170) list_double_pane_vc_t2_ParamLimits

0x548a,	// (0x00020170) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0002a726) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0002a726) list_double_pane_vc_t

0x505d,	// (0x0001fd43) list_double_number_pane_vc_g1_ParamLimits

0x505d,	// (0x0001fd43) list_double_number_pane_vc_g1

0x5069,	// (0x0001fd4f) list_double_number_pane_vc_g2_ParamLimits

0x5069,	// (0x0001fd4f) list_double_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a4be) list_double_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a4be) list_double_number_pane_vc_g

0x54a2,	// (0x00020188) list_double_number_pane_vc_t1_ParamLimits

0x54a2,	// (0x00020188) list_double_number_pane_vc_t1

0x54b4,	// (0x0002019a) list_double_number_pane_vc_t2_ParamLimits

0x54b4,	// (0x0002019a) list_double_number_pane_vc_t2

0x54c8,	// (0x000201ae) list_double_number_pane_vc_t3_ParamLimits

0x54c8,	// (0x000201ae) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0002a72b) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0002a72b) list_double_number_pane_vc_t

0x54e0,	// (0x000201c6) list_double_large_graphic_pane_vc_g1_ParamLimits

0x54e0,	// (0x000201c6) list_double_large_graphic_pane_vc_g1

0x5502,	// (0x000201e8) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5502,	// (0x000201e8) list_double_large_graphic_pane_vc_g2

0x5516,	// (0x000201fc) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5516,	// (0x000201fc) list_double_large_graphic_pane_vc_g3

0x5525,	// (0x0002020b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5525,	// (0x0002020b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0002a732) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0002a732) list_double_large_graphic_pane_vc_g

0x5531,	// (0x00020217) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5531,	// (0x00020217) list_double_large_graphic_pane_vc_t1

0x554d,	// (0x00020233) list_double_large_graphic_pane_vc_t2_ParamLimits

0x554d,	// (0x00020233) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0002a73b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0002a73b) list_double_large_graphic_pane_vc_t

0x505d,	// (0x0001fd43) list_double_heading_pane_vc_g1_ParamLimits

0x505d,	// (0x0001fd43) list_double_heading_pane_vc_g1

0x5069,	// (0x0001fd4f) list_double_heading_pane_vc_g2_ParamLimits

0x5069,	// (0x0001fd4f) list_double_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a4be) list_double_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a4be) list_double_heading_pane_vc_g

0x556f,	// (0x00020255) list_double_heading_pane_vc_t1_ParamLimits

0x556f,	// (0x00020255) list_double_heading_pane_vc_t1

0x5583,	// (0x00020269) list_double_heading_pane_vc_t2_ParamLimits

0x5583,	// (0x00020269) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0002a740) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0002a740) list_double_heading_pane_vc_t

0x559b,	// (0x00020281) list_double_graphic_pane_vc_g1_ParamLimits

0x559b,	// (0x00020281) list_double_graphic_pane_vc_g1

0x55a7,	// (0x0002028d) list_double_graphic_pane_vc_g2_ParamLimits

0x55a7,	// (0x0002028d) list_double_graphic_pane_vc_g2

0x505d,	// (0x0001fd43) list_double_graphic_pane_vc_g3_ParamLimits

0x505d,	// (0x0001fd43) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0002a745) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0002a745) list_double_graphic_pane_vc_g

0x55c4,	// (0x000202aa) list_double_graphic_pane_vc_t1_ParamLimits

0x55c4,	// (0x000202aa) list_double_graphic_pane_vc_t1

0x55ee,	// (0x000202d4) list_double_graphic_pane_vc_t2_ParamLimits

0x55ee,	// (0x000202d4) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0002a74e) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0002a74e) list_double_graphic_pane_vc_t

0x5a0f,	// (0x000206f5) aid_size_cell_fastswap

0x5a17,	// (0x000206fd) aid_size_cell_touch_ParamLimits

0x5a17,	// (0x000206fd) aid_size_cell_touch

0x5c72,	// (0x00020958) popup_fast_swap_wide_window_ParamLimits

0x5c72,	// (0x00020958) popup_fast_swap_wide_window

0x5d86,	// (0x00020a6c) touch_pane_ParamLimits

0x5d86,	// (0x00020a6c) touch_pane

0x8722,	// (0x00023408) button_value_adjust_pane_cp2

0x4d38,	// (0x0001fa1e) button_value_adjust_pane_cp4

0x4d58,	// (0x0001fa3e) form_field_data_pane_cp2

0x4d77,	// (0x0001fa5d) form_field_data_wide_pane_cp2

0x8ba2,	// (0x00023888) bg_scroll_pane_ParamLimits

0x6014,	// (0x00020cfa) scroll_handle_pane_ParamLimits

0x6028,	// (0x00020d0e) scroll_sc2_down_pane_ParamLimits

0x6028,	// (0x00020d0e) scroll_sc2_down_pane

0x8bd3,	// (0x000238b9) scroll_sc2_up_pane_ParamLimits

0x8bd3,	// (0x000238b9) scroll_sc2_up_pane

0xbdb5,	// (0x00026a9b) grid_wheel_folder_pane_g1_ParamLimits

0xbdb5,	// (0x00026a9b) grid_wheel_folder_pane_g1

0x61ed,	// (0x00020ed3) clock_nsta_pane_cp2_ParamLimits

0x61ed,	// (0x00020ed3) clock_nsta_pane_cp2

0x93d3,	// (0x000240b9) listscroll_midp_pane_ParamLimits

0x93df,	// (0x000240c5) midp_canvas_pane

0x96c7,	// (0x000243ad) nsta_clock_indic_pane

0x96fb,	// (0x000243e1) listscroll_form_pane_vc

0x9703,	// (0x000243e9) listscroll_set_pane_vc_ParamLimits

0x9703,	// (0x000243e9) listscroll_set_pane_vc

0x97fc,	// (0x000244e2) clock_nsta_pane

0x9871,	// (0x00024557) indicator_nsta_pane

0x9b51,	// (0x00024837) bg_popup_sub_pane_cp2_ParamLimits

0x9b65,	// (0x0002484b) find_pane_cp2_ParamLimits

0x9b65,	// (0x0002484b) find_pane_cp2

0x9b7b,	// (0x00024861) grid_toobar_pane_ParamLimits

0x9c5b,	// (0x00024941) list_form_gen_pane_vc_ParamLimits

0x9c5b,	// (0x00024941) list_form_gen_pane_vc

0x9c71,	// (0x00024957) scroll_pane_cp8_vc_ParamLimits

0x9c71,	// (0x00024957) scroll_pane_cp8_vc

0x9ced,	// (0x000249d3) data_form_wide_pane_vc_ParamLimits

0x9ced,	// (0x000249d3) data_form_wide_pane_vc

0x9cf9,	// (0x000249df) form_field_data_wide_pane_vc_g1

0x9d01,	// (0x000249e7) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d01,	// (0x000249e7) form_field_data_wide_pane_vc_t1

0x8736,	// (0x0002341c) input_focus_pane_cp6_vc_ParamLimits

0x8736,	// (0x0002341c) input_focus_pane_cp6_vc

0xa027,	// (0x00024d0d) list_midp_pane_ParamLimits

0xa033,	// (0x00024d19) scroll_pane_cp16_ParamLimits

0xa033,	// (0x00024d19) scroll_pane_cp16

0xa0a1,	// (0x00024d87) button_value_adjust_pane_ParamLimits

0xa0a1,	// (0x00024d87) button_value_adjust_pane

0xb007,	// (0x00025ced) button_value_adjust_pane_cp6_ParamLimits

0xb007,	// (0x00025ced) button_value_adjust_pane_cp6

0xb131,	// (0x00025e17) settings_code_pane_cp_ParamLimits

0xb131,	// (0x00025e17) settings_code_pane_cp

0x7db7,	// (0x00022a9d) cell_touch_pane_g1

0x7db7,	// (0x00022a9d) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002a3e9) cell_touch_pane_g

0xb6fc,	// (0x000263e2) cell_touch_pane_cp_ParamLimits

0xb6fc,	// (0x000263e2) cell_touch_pane_cp

0xb70c,	// (0x000263f2) cell_touch_pane_ParamLimits

0xb70c,	// (0x000263f2) cell_touch_pane

0x7db7,	// (0x00022a9d) scroll_sc2_down_pane_g1

0x7db7,	// (0x00022a9d) scroll_sc2_up_pane_g1

0x7dc1,	// (0x00022aa7) bg_set_opt_pane_cp4_vc

0xb71e,	// (0x00026404) list_set_graphic_pane_vc_g1_ParamLimits

0xb71e,	// (0x00026404) list_set_graphic_pane_vc_g1

0xb72a,	// (0x00026410) list_set_graphic_pane_vc_g2_ParamLimits

0xb72a,	// (0x00026410) list_set_graphic_pane_vc_g2

0x0001,

0xf9f1,	// (0x0002a6d7) list_set_graphic_pane_vc_g_ParamLimits

0xf9f1,	// (0x0002a6d7) list_set_graphic_pane_vc_g

0xb736,	// (0x0002641c) text_primary_small_cp13_vc_ParamLimits

0xb736,	// (0x0002641c) text_primary_small_cp13_vc

0xb74e,	// (0x00026434) list_set_graphic_pane_vc_ParamLimits

0xb74e,	// (0x00026434) list_set_graphic_pane_vc

0x7dc1,	// (0x00022aa7) input_focus_pane_cp2_vc

0x7db7,	// (0x00022a9d) setting_code_pane_vc_g1

0x7eec,	// (0x00022bd2) setting_code_pane_vc_t1

0xb760,	// (0x00026446) set_text_pane_vc_t1_ParamLimits

0xb760,	// (0x00026446) set_text_pane_vc_t1

0x7dc1,	// (0x00022aa7) input_focus_pane_cp1_vc

0xb77c,	// (0x00026462) list_set_text_pane_vc

0x7db7,	// (0x00022a9d) setting_text_pane_vc_g1

0x7dc1,	// (0x00022aa7) bg_set_opt_pane_cp2_vc

0x7ee3,	// (0x00022bc9) setting_slider_graphic_pane_vc_g1

0xb786,	// (0x0002646c) setting_slider_graphic_pane_vc_t1

0xb796,	// (0x0002647c) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f6,	// (0x0002a6dc) setting_slider_graphic_pane_vc_t

0xb7a6,	// (0x0002648c) slider_set_pane_cp_vc

0xb7ae,	// (0x00026494) slider_set_pane_vc_g1

0xb7b7,	// (0x0002649d) slider_set_pane_vc_g2

0x0006,

0xf9fb,	// (0x0002a6e1) slider_set_pane_vc_g

0x878e,	// (0x00023474) set_opt_bg_pane_g1_copy1

0x8796,	// (0x0002347c) set_opt_bg_pane_g2_copy1

0xb7e3,	// (0x000264c9) set_opt_bg_pane_g3_copy1

0x87a6,	// (0x0002348c) set_opt_bg_pane_g4_copy1

0x87ae,	// (0x00023494) set_opt_bg_pane_g5_copy1

0x87b6,	// (0x0002349c) set_opt_bg_pane_g6_copy1

0xb7ed,	// (0x000264d3) set_opt_bg_pane_g7_copy1

0xb7f5,	// (0x000264db) set_opt_bg_pane_g8_copy1

0xb7ff,	// (0x000264e5) set_opt_bg_pane_g9_copy1

0x7dc1,	// (0x00022aa7) bg_set_opt_pane_cp_vc

0xb809,	// (0x000264ef) setting_slider_pane_vc_t1

0xb818,	// (0x000264fe) setting_slider_pane_vc_t2

0xb828,	// (0x0002650e) setting_slider_pane_vc_t3

0x0002,

0xfa0a,	// (0x0002a6f0) setting_slider_pane_vc_t

0xb838,	// (0x0002651e) slider_set_pane_vc

0x6b33,	// (0x00021819) volume_set_pane_vc_g1

0x6b3c,	// (0x00021822) volume_set_pane_vc_g2

0x6b45,	// (0x0002182b) volume_set_pane_vc_g3

0x6b4e,	// (0x00021834) volume_set_pane_vc_g4

0x6b57,	// (0x0002183d) volume_set_pane_vc_g5

0x6b60,	// (0x00021846) volume_set_pane_vc_g6

0x6b69,	// (0x0002184f) volume_set_pane_vc_g7

0x6b72,	// (0x00021858) volume_set_pane_vc_g8

0x6b7b,	// (0x00021861) volume_set_pane_vc_g9

0x6b84,	// (0x0002186a) volume_set_pane_vc_g10

0x0009,

0xf8af,	// (0x0002a595) volume_set_pane_vc_g

0xb840,	// (0x00026526) volume_set_pane_vc

0xb848,	// (0x0002652e) button_value_adjust_pane_cp1_vc

0xb852,	// (0x00026538) list_highlight_pane_cp2_vc

0xb85b,	// (0x00026541) list_set_pane_vc_ParamLimits

0xb85b,	// (0x00026541) list_set_pane_vc

0xb8b9,	// (0x0002659f) main_pane_set_vc_t1_ParamLimits

0xb8b9,	// (0x0002659f) main_pane_set_vc_t1

0xb8ce,	// (0x000265b4) main_pane_set_vc_t2_ParamLimits

0xb8ce,	// (0x000265b4) main_pane_set_vc_t2

0xb8e0,	// (0x000265c6) main_pane_set_vc_t3_ParamLimits

0xb8e0,	// (0x000265c6) main_pane_set_vc_t3

0xb8f4,	// (0x000265da) main_pane_set_vc_t4_ParamLimits

0xb8f4,	// (0x000265da) main_pane_set_vc_t4

0x0003,

0xfa11,	// (0x0002a6f7) main_pane_set_vc_t_ParamLimits

0xfa11,	// (0x0002a6f7) main_pane_set_vc_t

0xb908,	// (0x000265ee) setting_code_pane_vc_ParamLimits

0xb908,	// (0x000265ee) setting_code_pane_vc

0xb919,	// (0x000265ff) setting_slider_graphic_pane_vc

0xb919,	// (0x000265ff) setting_slider_pane_vc

0xb919,	// (0x000265ff) setting_text_pane_vc

0xb919,	// (0x000265ff) setting_volume_pane_vc

0xb923,	// (0x00026609) scroll_pane_cp121_vc

0x8710,	// (0x000233f6) set_content_pane_vc

0xb92b,	// (0x00026611) button_value_adjust_pane_g1

0xb934,	// (0x0002661a) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0002a753) button_value_adjust_pane_g

0xb93d,	// (0x00026623) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb93d,	// (0x00026623) form_field_slider_wide_pane_vc_t1

0xb951,	// (0x00026637) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb951,	// (0x00026637) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0002a758) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0002a758) form_field_slider_wide_pane_vc_t

0x811c,	// (0x00022e02) input_focus_pane_cp10_vc_ParamLimits

0x811c,	// (0x00022e02) input_focus_pane_cp10_vc

0xb97f,	// (0x00026665) slider_cont_pane_cp1_vc_ParamLimits

0xb97f,	// (0x00026665) slider_cont_pane_cp1_vc

0xb991,	// (0x00026677) slider_form_pane_g1_cp2

0xb7b7,	// (0x0002649d) slider_form_pane_g2_cp2

0xb9be,	// (0x000266a4) form_field_slider_pane_vc_t3

0xb9cc,	// (0x000266b2) form_field_slider_pane_vc_t4

0xb9da,	// (0x000266c0) slider_form_pane_vc_ParamLimits

0xb9da,	// (0x000266c0) slider_form_pane_vc

0xb9e7,	// (0x000266cd) form_field_slider_pane_vc_t1_ParamLimits

0xb9e7,	// (0x000266cd) form_field_slider_pane_vc_t1

0xb951,	// (0x00026637) form_field_slider_pane_vc_t2_ParamLimits

0xb951,	// (0x00026637) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0002a76a) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0002a76a) form_field_slider_pane_vc_t

0x811c,	// (0x00022e02) input_focus_pane_cp9_vc_ParamLimits

0x811c,	// (0x00022e02) input_focus_pane_cp9_vc

0xba03,	// (0x000266e9) slider_cont_pane_vc_ParamLimits

0xba03,	// (0x000266e9) slider_cont_pane_vc

0xba17,	// (0x000266fd) list_form_graphic_pane_cp_vc_ParamLimits

0xba17,	// (0x000266fd) list_form_graphic_pane_cp_vc

0x9cf9,	// (0x000249df) form_field_popup_wide_pane_vc_g1

0xba2c,	// (0x00026712) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba2c,	// (0x00026712) form_field_popup_wide_pane_vc_t1

0x8736,	// (0x0002341c) input_focus_pane_cp8_vc_ParamLimits

0x8736,	// (0x0002341c) input_focus_pane_cp8_vc

0xba71,	// (0x00026757) list_form_wide_pane_vc_ParamLimits

0xba71,	// (0x00026757) list_form_wide_pane_vc

0xba7d,	// (0x00026763) list_form_graphic_pane_vc_g1

0xba85,	// (0x0002676b) list_form_graphic_pane_vc_t1_ParamLimits

0xba85,	// (0x0002676b) list_form_graphic_pane_vc_t1

0x7ea1,	// (0x00022b87) list_highlight_pane_cp5_vc_ParamLimits

0x7ea1,	// (0x00022b87) list_highlight_pane_cp5_vc

0xbaa1,	// (0x00026787) list_form_graphic_pane_vc_ParamLimits

0xbaa1,	// (0x00026787) list_form_graphic_pane_vc

0x9cf9,	// (0x000249df) form_field_popup_pane_vc_g1

0xbab7,	// (0x0002679d) form_field_popup_pane_vc_t1_ParamLimits

0xbab7,	// (0x0002679d) form_field_popup_pane_vc_t1

0x8736,	// (0x0002341c) input_focus_pane_cp7_vc_ParamLimits

0x8736,	// (0x0002341c) input_focus_pane_cp7_vc

0xbace,	// (0x000267b4) list_form_pane_vc_ParamLimits

0xbace,	// (0x000267b4) list_form_pane_vc

0xbada,	// (0x000267c0) data_form_pane_vc_t1_ParamLimits

0xbada,	// (0x000267c0) data_form_pane_vc_t1

0x878e,	// (0x00023474) input_focus_pane_vc_g1

0x8796,	// (0x0002347c) input_focus_pane_vc_g2

0x879e,	// (0x00023484) input_focus_pane_vc_g3

0x87a6,	// (0x0002348c) input_focus_pane_vc_g4

0x87ae,	// (0x00023494) input_focus_pane_vc_g5

0x87b6,	// (0x0002349c) input_focus_pane_vc_g6

0x87be,	// (0x000234a4) input_focus_pane_vc_g7

0x87c6,	// (0x000234ac) input_focus_pane_vc_g8

0x87ce,	// (0x000234b4) input_focus_pane_vc_g9

0x7db7,	// (0x00022a9d) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002a372) input_focus_pane_vc_g

0x9ced,	// (0x000249d3) data_form_pane_vc_ParamLimits

0x9ced,	// (0x000249d3) data_form_pane_vc

0x9cf9,	// (0x000249df) form_field_data_pane_vc_g1

0xbaf5,	// (0x000267db) form_field_data_pane_vc_t1_ParamLimits

0xbaf5,	// (0x000267db) form_field_data_pane_vc_t1

0x8736,	// (0x0002341c) input_focus_pane_vc_ParamLimits

0x8736,	// (0x0002341c) input_focus_pane_vc

0xbb0f,	// (0x000267f5) button_value_adjust_pane_cp3_vc

0xbb17,	// (0x000267fd) button_value_adjust_pane_cp5_vc

0xbb1f,	// (0x00026805) form_field_data_pane_vc_ParamLimits

0xbb1f,	// (0x00026805) form_field_data_pane_vc

0xbb36,	// (0x0002681c) form_field_data_pane_vc_cp2

0xbb3e,	// (0x00026824) form_field_data_wide_pane_vc_ParamLimits

0xbb3e,	// (0x00026824) form_field_data_wide_pane_vc

0xbb54,	// (0x0002683a) form_field_data_wide_pane_vc_cp2

0xbb5c,	// (0x00026842) form_field_popup_pane_vc_ParamLimits

0xbb5c,	// (0x00026842) form_field_popup_pane_vc

0xbb73,	// (0x00026859) form_field_popup_wide_pane_vc_ParamLimits

0xbb73,	// (0x00026859) form_field_popup_wide_pane_vc

0xbb89,	// (0x0002686f) form_field_slider_pane_vc_ParamLimits

0xbb89,	// (0x0002686f) form_field_slider_pane_vc

0xbb9c,	// (0x00026882) form_field_slider_wide_pane_vc_ParamLimits

0xbb9c,	// (0x00026882) form_field_slider_wide_pane_vc

0xbbaf,	// (0x00026895) grid_touch_1_pane_ParamLimits

0xbbaf,	// (0x00026895) grid_touch_1_pane

0xbbbb,	// (0x000268a1) grid_touch_2_pane_ParamLimits

0xbbbb,	// (0x000268a1) grid_touch_2_pane

0x9692,	// (0x00024378) touch_pane_g1_ParamLimits

0x9692,	// (0x00024378) touch_pane_g1

0xbbd3,	// (0x000268b9) cell_app_pane_cp_wide_ParamLimits

0xbbd3,	// (0x000268b9) cell_app_pane_cp_wide

0xbbe4,	// (0x000268ca) grid_popup_fast_wide_pane_ParamLimits

0xbbe4,	// (0x000268ca) grid_popup_fast_wide_pane

0xbbf8,	// (0x000268de) scroll_pane_cp19_ParamLimits

0xbbf8,	// (0x000268de) scroll_pane_cp19

0x7dc1,	// (0x00022aa7) bg_popup_window_pane_cp20

0xbc0c,	// (0x000268f2) listscroll_popup_fast_wide_pane

0x7ea1,	// (0x00022b87) grid_indicator_nsta_pane

0xbc14,	// (0x000268fa) clock_nsta_pane_g1

0xbc1d,	// (0x00026903) clock_nsta_pane_t1

0xbc39,	// (0x0002691f) cell_indicator_nsta_pane_ParamLimits

0xbc39,	// (0x0002691f) cell_indicator_nsta_pane

0xbc6a,	// (0x00026950) cell_indicator_nsta_pane_g1

0xbc78,	// (0x0002695e) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0002a77b) cell_indicator_nsta_pane_g

0xbc85,	// (0x0002696b) clock_nsta_pane_cp

0xbc8e,	// (0x00026974) indicator_nsta_pane_cp

0xbc96,	// (0x0002697c) nsta_clock_indic_pane_g1

0x7f6a,	// (0x00022c50) grid_indicator_pane

0x8cc8,	// (0x000239ae) scroll_pane_cp29

0x613c,	// (0x00020e22) indicator_nsta_pane_cp2_ParamLimits

0x613c,	// (0x00020e22) indicator_nsta_pane_cp2

0x7ea1,	// (0x00022b87) main_apps_wheel_pane

0x9f08,	// (0x00024bee) form_midp_field_text_pane_ParamLimits

0xa053,	// (0x00024d39) scroll_bar_cp050_ParamLimits

0xbce6,	// (0x000269cc) cell_indicator_pane_ParamLimits

0xbce6,	// (0x000269cc) cell_indicator_pane

0xbcfd,	// (0x000269e3) cell_indicator_pane_g1

0xbd07,	// (0x000269ed) grid_wheel_folder_pane_ParamLimits

0xbd07,	// (0x000269ed) grid_wheel_folder_pane

0xbd1d,	// (0x00026a03) list_wheel_apps_pane_ParamLimits

0xbd1d,	// (0x00026a03) list_wheel_apps_pane

0xbd3a,	// (0x00026a20) main_apps_wheel_pane_g1_ParamLimits

0xbd3a,	// (0x00026a20) main_apps_wheel_pane_g1

0xbd4e,	// (0x00026a34) main_apps_wheel_pane_g2_ParamLimits

0xbd4e,	// (0x00026a34) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0002a797) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0002a797) main_apps_wheel_pane_g

0xbd66,	// (0x00026a4c) main_apps_wheel_pane_t1_ParamLimits

0xbd66,	// (0x00026a4c) main_apps_wheel_pane_t1

0xbd89,	// (0x00026a6f) list_wheel_apps_pane_g1

0xbd91,	// (0x00026a77) list_wheel_apps_pane_g2

0xbd99,	// (0x00026a7f) list_wheel_apps_pane_g3

0xbda1,	// (0x00026a87) list_wheel_apps_pane_g4

0xbdab,	// (0x00026a91) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0002a79c) list_wheel_apps_pane_g

0x924b,	// (0x00023f31) navi_icon_text_pane

0x972b,	// (0x00024411) aid_fill_nsta

0xbdce,	// (0x00026ab4) navi_icon_text_pane_g1

0xbdda,	// (0x00026ac0) navi_icon_text_pane_t1

0x90de,	// (0x00023dc4) list_set_graphic_pane_t1_ParamLimits

0x90de,	// (0x00023dc4) list_set_graphic_pane_t1

0xa7c2,	// (0x000254a8) popup_midp_note_alarm_window_t6_ParamLimits

0xa7c2,	// (0x000254a8) popup_midp_note_alarm_window_t6

0xa7d4,	// (0x000254ba) popup_midp_note_alarm_window_t7_ParamLimits

0xa7d4,	// (0x000254ba) popup_midp_note_alarm_window_t7

0xa7e6,	// (0x000254cc) popup_midp_note_alarm_window_t8_ParamLimits

0xa7e6,	// (0x000254cc) popup_midp_note_alarm_window_t8

0xa7f8,	// (0x000254de) popup_midp_note_alarm_window_t9_ParamLimits

0xa7f8,	// (0x000254de) popup_midp_note_alarm_window_t9

0xa80a,	// (0x000254f0) popup_midp_note_alarm_window_t10_ParamLimits

0xa80a,	// (0x000254f0) popup_midp_note_alarm_window_t10

0xa81c,	// (0x00025502) popup_midp_note_alarm_window_t11_ParamLimits

0xa81c,	// (0x00025502) popup_midp_note_alarm_window_t11

0xa82e,	// (0x00025514) scroll_pane_cp17_ParamLimits

0xa82e,	// (0x00025514) scroll_pane_cp17

0x6b33,	// (0x00021819) volume_small_pane_cp_g1

0x6e28,	// (0x00021b0e) volume_small_pane_cp_g2

0x6e31,	// (0x00021b17) volume_small_pane_cp_g3

0x6e3a,	// (0x00021b20) volume_small_pane_cp_g4

0x6e43,	// (0x00021b29) volume_small_pane_cp_g5

0x6e4c,	// (0x00021b32) volume_small_pane_cp_g6

0x6e55,	// (0x00021b3b) volume_small_pane_cp_g7

0x6e5e,	// (0x00021b44) volume_small_pane_cp_g8

0x6e67,	// (0x00021b4d) volume_small_pane_cp_g9

0x6e70,	// (0x00021b56) volume_small_pane_cp_g10

0x94a8,	// (0x0002418e) midp_ticker_pane_g1_ParamLimits

0x94b4,	// (0x0002419a) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002a43e) midp_ticker_pane_g_ParamLimits

0x94c0,	// (0x000241a6) midp_ticker_pane_t1_ParamLimits

0x9741,	// (0x00024427) aid_fill_nsta_2

0xa03f,	// (0x00024d25) list_form2_midp_pane

0xb17c,	// (0x00025e62) midp_editing_number_pane_ParamLimits

0xb18b,	// (0x00025e71) midp_ticker_pane_ParamLimits

0xbdec,	// (0x00026ad2) form2_midp_field_pane

0xbe10,	// (0x00026af6) scroll_pane_cp51

0xbe30,	// (0x00026b16) form2_midp_button_pane_ParamLimits

0xbe30,	// (0x00026b16) form2_midp_button_pane

0xbe42,	// (0x00026b28) form2_midp_content_pane_ParamLimits

0xbe42,	// (0x00026b28) form2_midp_content_pane

0xbe5c,	// (0x00026b42) form2_midp_field_choice_group_pane

0xbe64,	// (0x00026b4a) form2_midp_field_pane_g1

0xbe6c,	// (0x00026b52) form2_midp_field_pane_g2

0xbe74,	// (0x00026b5a) form2_midp_field_pane_g3

0xbe7c,	// (0x00026b62) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0002a7c1) form2_midp_field_pane_g

0xbe84,	// (0x00026b6a) form2_midp_gauge_slider_pane

0xbe8c,	// (0x00026b72) form2_midp_gauge_wait_pane

0xbe94,	// (0x00026b7a) form2_midp_image_pane_ParamLimits

0xbe94,	// (0x00026b7a) form2_midp_image_pane

0xbeaf,	// (0x00026b95) form2_midp_label_pane_ParamLimits

0xbeaf,	// (0x00026b95) form2_midp_label_pane

0xbec8,	// (0x00026bae) form2_midp_label_pane_cp_ParamLimits

0xbec8,	// (0x00026bae) form2_midp_label_pane_cp

0xbee9,	// (0x00026bcf) form2_midp_string_pane_ParamLimits

0xbee9,	// (0x00026bcf) form2_midp_string_pane

0x5618,	// (0x000202fe) form2_midp_text_pane_ParamLimits

0x5618,	// (0x000202fe) form2_midp_text_pane

0xbefb,	// (0x00026be1) form2_midp_time_pane

0xbf0b,	// (0x00026bf1) input_focus_pane_cp51_ParamLimits

0xbf0b,	// (0x00026bf1) input_focus_pane_cp51

0xbf23,	// (0x00026c09) form2_midp_label_pane_t1_ParamLimits

0xbf23,	// (0x00026c09) form2_midp_label_pane_t1

0x5633,	// (0x00020319) form2_mdip_text_pane_t1_ParamLimits

0x5633,	// (0x00020319) form2_mdip_text_pane_t1

0x5651,	// (0x00020337) form2_midp_time_pane_t1

0xbf6c,	// (0x00026c52) form2_midp_gauge_slider_pane_t1

0xbf7e,	// (0x00026c64) form2_midp_gauge_slider_pane_t2

0xbf90,	// (0x00026c76) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0002a7ca) form2_midp_gauge_slider_pane_t

0xbfa2,	// (0x00026c88) form2_midp_slider_pane

0xbfae,	// (0x00026c94) form2_midp_gauge_wait_pane_t1

0xbfbc,	// (0x00026ca2) form2_midp_wait_pane_ParamLimits

0xbfbc,	// (0x00026ca2) form2_midp_wait_pane

0xbfe7,	// (0x00026ccd) list_single_2graphic_pane_cp4_ParamLimits

0xbfe7,	// (0x00026ccd) list_single_2graphic_pane_cp4

0x9d61,	// (0x00024a47) list_single_midp_graphic_pane_cp_ParamLimits

0x9d61,	// (0x00024a47) list_single_midp_graphic_pane_cp

0x7dc1,	// (0x00022aa7) list_highlight_pane_cp20

0xc00b,	// (0x00026cf1) list_single_2graphic_pane_g1_cp4

0xc013,	// (0x00026cf9) list_single_2graphic_pane_g2_cp4

0xc01b,	// (0x00026d01) list_single_2graphic_pane_t1_cp4

0x7ea1,	// (0x00022b87) list_highlight_pane_cp21

0xc02a,	// (0x00026d10) list_single_midp_graphic_pane_g4_cp

0xc039,	// (0x00026d1f) list_single_midp_graphic_pane_t1_cp

0xc04e,	// (0x00026d34) form2_mdip_string_pane_t1_ParamLimits

0xc04e,	// (0x00026d34) form2_mdip_string_pane_t1

0x7dc1,	// (0x00022aa7) bg_wml_button_pane_cp2

0x7db7,	// (0x00022a9d) form2_midp_image_pane_g1

0x4b22,	// (0x0001f808) list_double_large_graphic_pane_g5_ParamLimits

0x4b22,	// (0x0001f808) list_double_large_graphic_pane_g5

0x93d3,	// (0x000240b9) midp_form_pane_ParamLimits

0x7ea1,	// (0x00022b87) main_apps_wheel_pane_ParamLimits

0x6801,	// (0x000214e7) popup_preview_window_ParamLimits

0x6801,	// (0x000214e7) popup_preview_window

0x69bc,	// (0x000216a2) popup_touch_info_window_ParamLimits

0x69bc,	// (0x000216a2) popup_touch_info_window

0x69da,	// (0x000216c0) popup_touch_menu_window_ParamLimits

0x69da,	// (0x000216c0) popup_touch_menu_window

0x7dad,	// (0x00022a93) bg_popup_sub_pane_cp6

0xc147,	// (0x00026e2d) list_touch_menu_pane

0xc14f,	// (0x00026e35) list_single_touch_menu_pane_ParamLimits

0xc14f,	// (0x00026e35) list_single_touch_menu_pane

0xc165,	// (0x00026e4b) list_single_touch_menu_pane_t1

0x7ea1,	// (0x00022b87) bg_popup_sub_pane_cp7_ParamLimits

0x7ea1,	// (0x00022b87) bg_popup_sub_pane_cp7

0xc173,	// (0x00026e59) heading_sub_pane

0xc17b,	// (0x00026e61) list_touch_info_pane_ParamLimits

0xc17b,	// (0x00026e61) list_touch_info_pane

0xc18a,	// (0x00026e70) list_single_touch_info_pane_ParamLimits

0xc18a,	// (0x00026e70) list_single_touch_info_pane

0xc19c,	// (0x00026e82) list_single_touch_info_pane_t1

0xc1aa,	// (0x00026e90) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0002a7d8) list_single_touch_info_pane_t

0x93cb,	// (0x000240b1) bg_popup_heading_pane_cp

0xc1b8,	// (0x00026e9e) heading_sub_pane_t1

0x9c87,	// (0x0002496d) bg_popup_preview_window_pane_cp_ParamLimits

0x9c87,	// (0x0002496d) bg_popup_preview_window_pane_cp

0xc173,	// (0x00026e59) heading_preview_pane

0xc17b,	// (0x00026e61) list_preview_pane_ParamLimits

0xc17b,	// (0x00026e61) list_preview_pane

0xc1c6,	// (0x00026eac) popup_preview_window_g1

0xc18a,	// (0x00026e70) list_single_preview_pane_ParamLimits

0xc18a,	// (0x00026e70) list_single_preview_pane

0xc1ce,	// (0x00026eb4) list_single_preview_pane_g1

0xc1d6,	// (0x00026ebc) list_single_preview_pane_t1

0xc19c,	// (0x00026e82) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0002a7dd) list_single_preview_pane_t

0xc1e4,	// (0x00026eca) bg_popup_heading_pane_cp2_ParamLimits

0xc1e4,	// (0x00026eca) bg_popup_heading_pane_cp2

0xc1fa,	// (0x00026ee0) heading_preview_pane_g1

0xc202,	// (0x00026ee8) heading_preview_pane_t1_ParamLimits

0xc202,	// (0x00026ee8) heading_preview_pane_t1

0x7f8d,	// (0x00022c73) soft_indicator_pane_t1_ParamLimits

0x86a9,	// (0x0002338f) scroll_pane_ParamLimits

0x8bc1,	// (0x000238a7) scroll_sc2_left_pane

0x8bca,	// (0x000238b0) scroll_sc2_right_pane

0x8be9,	// (0x000238cf) scroll_bg_pane_g1_ParamLimits

0x8bfe,	// (0x000238e4) scroll_bg_pane_g2_ParamLimits

0x8c16,	// (0x000238fc) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002a3c9) scroll_bg_pane_g_ParamLimits

0x8be9,	// (0x000238cf) scroll_handle_pane_g1_ParamLimits

0x8c38,	// (0x0002391e) scroll_handle_pane_g2_ParamLimits

0x8c16,	// (0x000238fc) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002a3d0) scroll_handle_pane_g_ParamLimits

0x6482,	// (0x00021168) popup_choice_list_window_ParamLimits

0x6482,	// (0x00021168) popup_choice_list_window

0x9b5d,	// (0x00024843) choice_list_pane

0x9bdf,	// (0x000248c5) cell_toolbar_pane_t1

0x9c07,	// (0x000248ed) toolbar_button_pane_ParamLimits

0xace8,	// (0x000259ce) ai_gene_pane_1_t2_ParamLimits

0xace8,	// (0x000259ce) ai_gene_pane_1_t2

0x0001,

0xf90b,	// (0x0002a5f1) ai_gene_pane_1_t_ParamLimits

0xf90b,	// (0x0002a5f1) ai_gene_pane_1_t

0xc21f,	// (0x00026f05) scroll_sc2_left_pane_g1

0xc21f,	// (0x00026f05) scroll_sc2_right_pane_g1

0x96ef,	// (0x000243d5) bg_popup_sub_pane_cp10

0xc229,	// (0x00026f0f) list_choice_list_pane

0xc242,	// (0x00026f28) list_single_choice_list_pane_ParamLimits

0xc242,	// (0x00026f28) list_single_choice_list_pane

0xc255,	// (0x00026f3b) list_single_choice_list_pane_g1

0x88c7,	// (0x000235ad) list_single_choice_list_pane_t1_ParamLimits

0x88c7,	// (0x000235ad) list_single_choice_list_pane_t1

0xc25d,	// (0x00026f43) choice_list_pane_g1

0xc265,	// (0x00026f4b) choice_list_pane_t1

0x7dad,	// (0x00022a93) input_focus_pane_cp11

0x8a9e,	// (0x00023784) title_pane_stacon_g2_ParamLimits

0x8a9e,	// (0x00023784) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002a3af) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002a3af) title_pane_stacon_g

0x93cb,	// (0x000240b1) cursor_press_pane

0x652e,	// (0x00021214) popup_fep_hwr_window_ParamLimits

0x652e,	// (0x00021214) popup_fep_hwr_window

0x65a8,	// (0x0002128e) popup_fep_vkb_window_ParamLimits

0x65a8,	// (0x0002128e) popup_fep_vkb_window

0xc273,	// (0x00026f59) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0002a806) fep_vkb_side_pane_g_ParamLimits

0x6eb2,	// (0x00021b98) fep_hwr_candidate_pane_ParamLimits

0x6eb2,	// (0x00021b98) fep_hwr_candidate_pane

0x6edc,	// (0x00021bc2) fep_hwr_side_pane_ParamLimits

0x6edc,	// (0x00021bc2) fep_hwr_side_pane

0x6efc,	// (0x00021be2) fep_hwr_top_pane_ParamLimits

0x6efc,	// (0x00021be2) fep_hwr_top_pane

0x6f14,	// (0x00021bfa) fep_hwr_write_pane_ParamLimits

0x6f14,	// (0x00021bfa) fep_hwr_write_pane

0xfb20,	// (0x0002a806) fep_vkb_side_pane_g

0xc27b,	// (0x00026f61) fep_hwr_top_pane_g1

0xc28d,	// (0x00026f73) fep_hwr_top_pane_g2

0x6f40,	// (0x00021c26) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0002a7e2) fep_hwr_top_pane_g

0x6f55,	// (0x00021c3b) fep_hwr_top_text_pane

0x8db8,	// (0x00023a9e) fep_hwr_top_text_pane_g1

0xc2c3,	// (0x00026fa9) fep_hwr_top_text_pane_t1

0x704b,	// (0x00021d31) fep_hwr_candidate_pane_g1

0xc516,	// (0x000271fc) fep_vkb_keypad_pane_g3_ParamLimits

0xc516,	// (0x000271fc) fep_vkb_keypad_pane_g3

0xc53e,	// (0x00027224) fep_vkb_keypad_pane_g4_ParamLimits

0xc53e,	// (0x00027224) fep_vkb_keypad_pane_g4

0xc5ad,	// (0x00027293) fep_vkb_bottom_pane_g2_ParamLimits

0xc5ad,	// (0x00027293) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0002a80d) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0002a80d) fep_vkb_bottom_pane_g

0xc21f,	// (0x00026f05) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0002a817) cell_vkb_side_pane_g

0xc638,	// (0x0002731e) cell_vkb_side_pane_t1

0xc646,	// (0x0002732c) cell_vkb_side_pane_t1_copy1

0xc21f,	// (0x00026f05) bg_fep_vkb_candidate_pane_g2

0xc772,	// (0x00027458) cell_vkb_candidate_pane_ParamLimits

0xc2d1,	// (0x00026fb7) aid_size_cell_vkb_ParamLimits

0xc2d1,	// (0x00026fb7) aid_size_cell_vkb

0xc772,	// (0x00027458) cell_vkb_candidate_pane

0x7065,	// (0x00021d4b) bg_popup_fep_shadow_pane_g1

0xc35f,	// (0x00027045) fep_vkb_bottom_pane_ParamLimits

0xc35f,	// (0x00027045) fep_vkb_bottom_pane

0xc395,	// (0x0002707b) fep_vkb_candidate_pane_ParamLimits

0xc395,	// (0x0002707b) fep_vkb_candidate_pane

0xc3b1,	// (0x00027097) fep_vkb_keypad_pane_ParamLimits

0xc3b1,	// (0x00027097) fep_vkb_keypad_pane

0xc3f7,	// (0x000270dd) fep_vkb_side_pane_ParamLimits

0xc3f7,	// (0x000270dd) fep_vkb_side_pane

0xc433,	// (0x00027119) fep_vkb_top_pane_ParamLimits

0xc433,	// (0x00027119) fep_vkb_top_pane

0xc46f,	// (0x00027155) fep_vkb_top_pane_g1_ParamLimits

0xc46f,	// (0x00027155) fep_vkb_top_pane_g1

0xc47e,	// (0x00027164) fep_vkb_top_pane_g2_ParamLimits

0xc47e,	// (0x00027164) fep_vkb_top_pane_g2

0xc48d,	// (0x00027173) fep_vkb_top_pane_g3_ParamLimits

0xc48d,	// (0x00027173) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0002a7fd) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0002a7fd) fep_vkb_top_pane_g

0xc4ab,	// (0x00027191) fep_vkb_top_text_pane_ParamLimits

0xc4ab,	// (0x00027191) fep_vkb_top_text_pane

0xc4bc,	// (0x000271a2) fep_vkb_side_pane_g1_ParamLimits

0xc4bc,	// (0x000271a2) fep_vkb_side_pane_g1

0xc505,	// (0x000271eb) grid_vkb_side_pane_ParamLimits

0xc505,	// (0x000271eb) grid_vkb_side_pane

0x706d,	// (0x00021d53) bg_popup_fep_shadow_pane_g2

0x7076,	// (0x00021d5c) bg_popup_fep_shadow_pane_g3

0x707e,	// (0x00021d64) bg_popup_fep_shadow_pane_g4

0x7087,	// (0x00021d6d) bg_popup_fep_shadow_pane_g5

0x7091,	// (0x00021d77) bg_popup_fep_shadow_pane_g6

0x7099,	// (0x00021d7f) bg_popup_fep_shadow_pane_g7

0x87ae,	// (0x00023494) bg_popup_fep_shadow_pane_g8

0xc55c,	// (0x00027242) grid_vkb_keypad_number_pane_ParamLimits

0xc55c,	// (0x00027242) grid_vkb_keypad_number_pane

0xc56c,	// (0x00027252) grid_vkb_keypad_pane_ParamLimits

0xc56c,	// (0x00027252) grid_vkb_keypad_pane

0xc592,	// (0x00027278) fep_vkb_bottom_pane_g1_ParamLimits

0xc592,	// (0x00027278) fep_vkb_bottom_pane_g1

0xc5bb,	// (0x000272a1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc5bb,	// (0x000272a1) grid_vkb_keypad_bottom_left_pane

0xc5d0,	// (0x000272b6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc5d0,	// (0x000272b6) grid_vkb_keypad_bottom_right_pane

0xc5e5,	// (0x000272cb) fep_vkb_top_text_pane_g1

0xc600,	// (0x000272e6) fep_vkb_top_text_pane_t1

0xc615,	// (0x000272fb) cell_vkb_side_pane_ParamLimits

0xc615,	// (0x000272fb) cell_vkb_side_pane

0xc21f,	// (0x00026f05) cell_vkb_side_pane_g1

0xc654,	// (0x0002733a) cell_vkb_keypad_pane_ParamLimits

0xc654,	// (0x0002733a) cell_vkb_keypad_pane

0xc6c9,	// (0x000273af) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0002a82a) bg_popup_fep_shadow_pane_g

0xc21f,	// (0x00026f05) cell_hwr_side_pane_g1

0xc21f,	// (0x00026f05) cell_hwr_side_pane_g2

0xc6d3,	// (0x000273b9) cell_vkb_keypad_pane_t1

0xc6e1,	// (0x000273c7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc6e1,	// (0x000273c7) cell_vkb_keypad_bottom_left_pane

0xc6fe,	// (0x000273e4) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc6fe,	// (0x000273e4) cell_vkb_keypad_bottom_right_pane

0xc21f,	// (0x00026f05) cell_vkb_keypad_bottom_left_pane_g1

0xc21f,	// (0x00026f05) cell_vkb_keypad_bottom_right_pane_g1

0xc737,	// (0x0002741d) cell_vkb_keypad_number_pane_ParamLimits

0xc737,	// (0x0002741d) cell_vkb_keypad_number_pane

0xc756,	// (0x0002743c) cell_vkb_keypad_number_pane_g1

0xc760,	// (0x00027446) cell_vkb_keypad_number_pane_g2

0xc769,	// (0x0002744f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0002a81c) cell_vkb_keypad_number_pane_g

0xc6d3,	// (0x000273b9) cell_vkb_keypad_number_pane_t1

0xc78d,	// (0x00027473) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x0002a817) cell_hwr_side_pane_g

0xc7a6,	// (0x0002748c) cell_hwr_side_pane_t1

0x70ab,	// (0x00021d91) cell_hwr_side_pane_t1_copy1

0xc49d,	// (0x00027183) cell_hwr_candidate_pane_g1

0x70b9,	// (0x00021d9f) cell_hwr_candidate_pane_t1

0xc21f,	// (0x00026f05) cell_vkb_candidate_pane_g2

0xc7ea,	// (0x000274d0) cell_vkb_candidate_pane_t1

0x6e79,	// (0x00021b5f) bg_popup_fep_shadow_pane_ParamLimits

0x6e79,	// (0x00021b5f) bg_popup_fep_shadow_pane

0x1e76,	// (0x0001cb5c) bg_fep_hwr_top_pane_g4

0xc29f,	// (0x00026f85) bg_hwr_side_pane_g1_ParamLimits

0xc29f,	// (0x00026f85) bg_hwr_side_pane_g1

0x6f91,	// (0x00021c77) cell_hwr_side_pane_ParamLimits

0x6f91,	// (0x00021c77) cell_hwr_side_pane

0x6fcc,	// (0x00021cb2) fep_hwr_write_pane_g1_ParamLimits

0x6fcc,	// (0x00021cb2) fep_hwr_write_pane_g1

0x6fd9,	// (0x00021cbf) fep_hwr_write_pane_g2_ParamLimits

0x6fd9,	// (0x00021cbf) fep_hwr_write_pane_g2

0x6fe6,	// (0x00021ccc) fep_hwr_write_pane_g3_ParamLimits

0x6fe6,	// (0x00021ccc) fep_hwr_write_pane_g3

0x6ff4,	// (0x00021cda) fep_hwr_write_pane_g4_ParamLimits

0x6ff4,	// (0x00021cda) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0002a7e9) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0002a7e9) fep_hwr_write_pane_g

0x1e76,	// (0x0001cb5c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1e76,	// (0x0001cb5c) bg_fep_hwr_candidate_pane_g2

0x7009,	// (0x00021cef) cell_hwr_candidate_pane_ParamLimits

0x7009,	// (0x00021cef) cell_hwr_candidate_pane

0x704b,	// (0x00021d31) fep_hwr_candidate_pane_g1_ParamLimits

0xc2ff,	// (0x00026fe5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc2ff,	// (0x00026fe5) bg_popup_fep_shadow_pane_cp2

0xc49d,	// (0x00027183) fep_vkb_top_pane_g4_ParamLimits

0xc49d,	// (0x00027183) fep_vkb_top_pane_g4

0xc4e3,	// (0x000271c9) fep_vkb_side_pane_g2_ParamLimits

0xc4e3,	// (0x000271c9) fep_vkb_side_pane_g2

0x4c65,	// (0x0001f94b) list_setting_pane_t4_ParamLimits

0x4c65,	// (0x0001f94b) list_setting_pane_t4

0x4cff,	// (0x0001f9e5) list_setting_number_pane_t5_ParamLimits

0x4cff,	// (0x0001f9e5) list_setting_number_pane_t5

0x8dff,	// (0x00023ae5) list_double_heading_pane_cp2_ParamLimits

0x8dff,	// (0x00023ae5) list_double_heading_pane_cp2

0x8744,	// (0x0002342a) list_double_heading_pane_g1_cp2_ParamLimits

0x8744,	// (0x0002342a) list_double_heading_pane_g1_cp2

0x8750,	// (0x00023436) list_double_heading_pane_g2_cp2_ParamLimits

0x8750,	// (0x00023436) list_double_heading_pane_g2_cp2

0xc7f8,	// (0x000274de) list_double_heading_pane_t1_cp2_ParamLimits

0xc7f8,	// (0x000274de) list_double_heading_pane_t1_cp2

0xc80e,	// (0x000274f4) list_double_heading_pane_t2_cp2_ParamLimits

0xc80e,	// (0x000274f4) list_double_heading_pane_t2_cp2

0x7d95,	// (0x00022a7b) aid_value_unit2

0x5ccc,	// (0x000209b2) popup_preview_fixed_window

0x812a,	// (0x00022e10) bg_popup_preview_window_pane_cp02

0xc820,	// (0x00027506) list_preview_fixed_pane

0xc866,	// (0x0002754c) list_empty_pane_fp_ParamLimits

0xc866,	// (0x0002754c) list_empty_pane_fp

0xc866,	// (0x0002754c) list_single_cale_day_pane_fp_ParamLimits

0xc866,	// (0x0002754c) list_single_cale_day_pane_fp

0xc866,	// (0x0002754c) list_single_graphic_heading_pane_fp_ParamLimits

0xc866,	// (0x0002754c) list_single_graphic_heading_pane_fp

0xc866,	// (0x0002754c) list_single_graphic_pane_fp_ParamLimits

0xc866,	// (0x0002754c) list_single_graphic_pane_fp

0xc866,	// (0x0002754c) list_single_heading_pane_fp_ParamLimits

0xc866,	// (0x0002754c) list_single_heading_pane_fp

0xc866,	// (0x0002754c) list_single_pane_fp_ParamLimits

0xc866,	// (0x0002754c) list_single_pane_fp

0xc87b,	// (0x00027561) list_single_pane_fp_g1_ParamLimits

0xc87b,	// (0x00027561) list_single_pane_fp_g1

0x5664,	// (0x0002034a) list_single_pane_fp_g2_ParamLimits

0x5664,	// (0x0002034a) list_single_pane_fp_g2

0x5670,	// (0x00020356) list_single_pane_fp_g3_ParamLimits

0x5670,	// (0x00020356) list_single_pane_fp_g3

0xc887,	// (0x0002756d) list_single_pane_fp_g4_ParamLimits

0xc887,	// (0x0002756d) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0002a84b) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0002a84b) list_single_pane_fp_g

0x5684,	// (0x0002036a) list_single_pane_fp_t1_ParamLimits

0x5684,	// (0x0002036a) list_single_pane_fp_t1

0x569b,	// (0x00020381) list_single_graphic_pane_fp_g1_ParamLimits

0x569b,	// (0x00020381) list_single_graphic_pane_fp_g1

0xc87b,	// (0x00027561) list_single_graphic_pane_fp_g2_ParamLimits

0xc87b,	// (0x00027561) list_single_graphic_pane_fp_g2

0x5664,	// (0x0002034a) list_single_graphic_pane_fp_g3_ParamLimits

0x5664,	// (0x0002034a) list_single_graphic_pane_fp_g3

0x5670,	// (0x00020356) list_single_graphic_pane_fp_g4_ParamLimits

0x5670,	// (0x00020356) list_single_graphic_pane_fp_g4

0xc887,	// (0x0002756d) list_single_graphic_pane_fp_g5_ParamLimits

0xc887,	// (0x0002756d) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a854) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a854) list_single_graphic_pane_fp_g

0x56a7,	// (0x0002038d) list_single_graphic_pane_fp_t1_ParamLimits

0x56a7,	// (0x0002038d) list_single_graphic_pane_fp_t1

0x569b,	// (0x00020381) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x569b,	// (0x00020381) list_single_graphic_heading_pane_fp_g1

0xc87b,	// (0x00027561) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc87b,	// (0x00027561) list_single_graphic_heading_pane_fp_g2

0x5664,	// (0x0002034a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5664,	// (0x0002034a) list_single_graphic_heading_pane_fp_g3

0x5670,	// (0x00020356) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5670,	// (0x00020356) list_single_graphic_heading_pane_fp_g4

0xc887,	// (0x0002756d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc887,	// (0x0002756d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a854) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a854) list_single_graphic_heading_pane_fp_g

0x56bd,	// (0x000203a3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x56bd,	// (0x000203a3) list_single_graphic_heading_pane_fp_t1

0x56d3,	// (0x000203b9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x56d3,	// (0x000203b9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0002a85f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0002a85f) list_single_graphic_heading_pane_fp_t

0x56e5,	// (0x000203cb) list_single_cale_day_pane_fp_g1_ParamLimits

0x56e5,	// (0x000203cb) list_single_cale_day_pane_fp_g1

0xc893,	// (0x00027579) list_single_cale_day_pane_fp_g2_ParamLimits

0xc893,	// (0x00027579) list_single_cale_day_pane_fp_g2

0x571d,	// (0x00020403) list_single_cale_day_pane_fp_g3_ParamLimits

0x571d,	// (0x00020403) list_single_cale_day_pane_fp_g3

0x5745,	// (0x0002042b) list_single_cale_day_pane_fp_g4_ParamLimits

0x5745,	// (0x0002042b) list_single_cale_day_pane_fp_g4

0x5769,	// (0x0002044f) list_single_cale_day_pane_fp_g5_ParamLimits

0x5769,	// (0x0002044f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0002a864) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002a864) list_single_cale_day_pane_fp_g

0x578d,	// (0x00020473) list_single_cale_day_pane_fp_t1_ParamLimits

0x578d,	// (0x00020473) list_single_cale_day_pane_fp_t1

0x57b3,	// (0x00020499) list_single_cale_day_pane_fp_t2_ParamLimits

0x57b3,	// (0x00020499) list_single_cale_day_pane_fp_t2

0x57cc,	// (0x000204b2) list_single_cale_day_pane_fp_t3_ParamLimits

0x57cc,	// (0x000204b2) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0002a86f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0002a86f) list_single_cale_day_pane_fp_t

0xc87b,	// (0x00027561) list_empty_pane_fp_g1_ParamLimits

0xc87b,	// (0x00027561) list_empty_pane_fp_g1

0x57e5,	// (0x000204cb) list_empty_pane_fp_t1

0x57f3,	// (0x000204d9) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0002a876) list_empty_pane_fp_t

0xc87b,	// (0x00027561) list_single_heading_pane_fp_g1_ParamLimits

0xc87b,	// (0x00027561) list_single_heading_pane_fp_g1

0x5664,	// (0x0002034a) list_single_heading_pane_fp_g2_ParamLimits

0x5664,	// (0x0002034a) list_single_heading_pane_fp_g2

0x5670,	// (0x00020356) list_single_heading_pane_fp_g3_ParamLimits

0x5670,	// (0x00020356) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0002a87b) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0002a87b) list_single_heading_pane_fp_g

0x5801,	// (0x000204e7) list_single_heading_pane_fp_t1_ParamLimits

0x5801,	// (0x000204e7) list_single_heading_pane_fp_t1

0x5813,	// (0x000204f9) list_single_heading_pane_fp_t2_ParamLimits

0x5813,	// (0x000204f9) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0002a882) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0002a882) list_single_heading_pane_fp_t

0x8935,	// (0x0002361b) aid_size_cell_fast

0x809a,	// (0x00022d80) soft_indicator_pane_cp1_t1

0x8972,	// (0x00023658) cell_app_pane_cp2_ParamLimits

0x8972,	// (0x00023658) cell_app_pane_cp2

0x6e9b,	// (0x00021b81) fep_hwr_candidate_drop_down_list_pane

0x1e84,	// (0x0001cb6a) fep_hwr_candidate_pane_g3_ParamLimits

0x1e84,	// (0x0001cb6a) fep_hwr_candidate_pane_g3

0x1e91,	// (0x0001cb77) fep_hwr_candidate_pane_g4_ParamLimits

0x1e91,	// (0x0001cb77) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0002a7f6) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0002a7f6) fep_hwr_candidate_pane_g

0xc384,	// (0x0002706a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc384,	// (0x0002706a) fep_vkb_candidate_drop_down_list_pane

0xc795,	// (0x0002747b) fep_vkb_candidate_pane_g3

0xc79d,	// (0x00027483) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0002a823) fep_vkb_candidate_pane_g

0xc49d,	// (0x00027183) cell_hwr_candidate_pane_g1_ParamLimits

0xc89f,	// (0x00027585) cell_hwr_candidate_pane_g3_ParamLimits

0xc89f,	// (0x00027585) cell_hwr_candidate_pane_g3

0xc8c0,	// (0x000275a6) cell_hwr_candidate_pane_g4_ParamLimits

0xc8c0,	// (0x000275a6) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0002a83d) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0002a83d) cell_hwr_candidate_pane_g

0xc7b4,	// (0x0002749a) cell_vkb_candidate_pane_g3_ParamLimits

0xc7b4,	// (0x0002749a) cell_vkb_candidate_pane_g3

0xc7cf,	// (0x000274b5) cell_vkb_candidate_pane_g4_ParamLimits

0xc7cf,	// (0x000274b5) cell_vkb_candidate_pane_g4

0xc8e1,	// (0x000275c7) cell_app_pane_cp2_g1_ParamLimits

0xc8e1,	// (0x000275c7) cell_app_pane_cp2_g1

0xc8ff,	// (0x000275e5) cell_app_pane_cp2_g2_ParamLimits

0xc8ff,	// (0x000275e5) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0002a887) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0002a887) cell_app_pane_cp2_g

0xc90b,	// (0x000275f1) cell_app_pane_cp2_t1_ParamLimits

0xc90b,	// (0x000275f1) cell_app_pane_cp2_t1

0x8736,	// (0x0002341c) grid_highlight_pane_cp1_ParamLimits

0x8736,	// (0x0002341c) grid_highlight_pane_cp1

0x70d7,	// (0x00021dbd) cell_hwr_candidate_pane_cp1_ParamLimits

0x70d7,	// (0x00021dbd) cell_hwr_candidate_pane_cp1

0xc49d,	// (0x00027183) fep_hwr_candidate_drop_down_list_pane_g1

0xc91d,	// (0x00027603) fep_hwr_candidate_drop_down_list_pane_g2

0xc92a,	// (0x00027610) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0002a88c) fep_hwr_candidate_drop_down_list_pane_g

0x70f6,	// (0x00021ddc) fep_hwr_candidate_drop_down_list_scroll_pane

0x70ff,	// (0x00021de5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x70ff,	// (0x00021de5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x710c,	// (0x00021df2) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x710c,	// (0x00021df2) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7119,	// (0x00021dff) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7119,	// (0x00021dff) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc7b4,	// (0x0002749a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7b4,	// (0x0002749a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc7cf,	// (0x000274b5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc7cf,	// (0x000274b5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7126,	// (0x00021e0c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7126,	// (0x00021e0c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7141,	// (0x00021e27) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7141,	// (0x00021e27) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x715c,	// (0x00021e42) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x715c,	// (0x00021e42) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0002a893) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0002a893) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc937,	// (0x0002761d) cell_vkb_candidate_pane_cp1_ParamLimits

0xc937,	// (0x0002761d) cell_vkb_candidate_pane_cp1

0xc49d,	// (0x00027183) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc49d,	// (0x00027183) fep_vkb_candidate_drop_down_list_pane_g1

0xc91d,	// (0x00027603) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc91d,	// (0x00027603) fep_vkb_candidate_drop_down_list_pane_g2

0xc92a,	// (0x00027610) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc92a,	// (0x00027610) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0002a88c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x0002a88c) fep_vkb_candidate_drop_down_list_pane_g

0xc957,	// (0x0002763d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc957,	// (0x0002763d) fep_vkb_candidate_drop_down_list_scroll_pane

0xc964,	// (0x0002764a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc964,	// (0x0002764a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc971,	// (0x00027657) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc971,	// (0x00027657) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc97d,	// (0x00027663) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc97d,	// (0x00027663) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc89f,	// (0x00027585) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc89f,	// (0x00027585) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc8c0,	// (0x000275a6) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8c0,	// (0x000275a6) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc989,	// (0x0002766f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc989,	// (0x0002766f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc9aa,	// (0x00027690) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc9aa,	// (0x00027690) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc9cb,	// (0x000276b1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc9cb,	// (0x000276b1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0002a8a4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0002a8a4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7dcb,	// (0x00022ab1) title_pane_g1_ParamLimits

0x7dd8,	// (0x00022abe) title_pane_g2_ParamLimits

0xf54e,	// (0x0002a234) title_pane_g_ParamLimits

0x8da8,	// (0x00023a8e) aid_call2_pane

0x8db0,	// (0x00023a96) aid_call_pane

0x8db8,	// (0x00023a9e) popup_clock_analogue_window_g1

0x8db8,	// (0x00023a9e) popup_clock_analogue_window_g2

0x603d,	// (0x00020d23) popup_clock_analogue_window_g3

0x6046,	// (0x00020d2c) popup_clock_analogue_window_g4

0x7db7,	// (0x00022a9d) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002a3de) popup_clock_analogue_window_g

0x604e,	// (0x00020d34) popup_clock_analogue_window_t1

0x605c,	// (0x00020d42) clock_digital_number_pane_ParamLimits

0x605c,	// (0x00020d42) clock_digital_number_pane

0x6068,	// (0x00020d4e) clock_digital_number_pane_cp02_ParamLimits

0x6068,	// (0x00020d4e) clock_digital_number_pane_cp02

0x6074,	// (0x00020d5a) clock_digital_number_pane_cp03_ParamLimits

0x6074,	// (0x00020d5a) clock_digital_number_pane_cp03

0x6080,	// (0x00020d66) clock_digital_number_pane_cp04_ParamLimits

0x6080,	// (0x00020d66) clock_digital_number_pane_cp04

0x608c,	// (0x00020d72) clock_digital_separator_pane_ParamLimits

0x608c,	// (0x00020d72) clock_digital_separator_pane

0x6098,	// (0x00020d7e) popup_clock_digital_window_t1_ParamLimits

0x6098,	// (0x00020d7e) popup_clock_digital_window_t1

0x7db7,	// (0x00022a9d) clock_digital_number_pane_g1

0x7db7,	// (0x00022a9d) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002a3e9) clock_digital_number_pane_g

0x7db7,	// (0x00022a9d) clock_digital_separator_pane_g1

0x7db7,	// (0x00022a9d) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002a3e9) clock_digital_separator_pane_g

0x972b,	// (0x00024411) aid_fill_nsta_ParamLimits

0x9871,	// (0x00024557) indicator_nsta_pane_ParamLimits

0x99ea,	// (0x000246d0) popup_clock_analogue_window

0x99ea,	// (0x000246d0) popup_clock_digital_window

0x7ea1,	// (0x00022b87) grid_indicator_nsta_pane_ParamLimits

0xbc2b,	// (0x00026911) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0002a776) clock_nsta_pane_t

0x6001,	// (0x00020ce7) aid_size_max_handle

0x600b,	// (0x00020cf1) aid_size_min_handle

0x93cb,	// (0x000240b1) editor_scroll_pane

0xc9e6,	// (0x000276cc) ex_editor_pane

0x88a3,	// (0x00023589) scroll_pane_cp13

0x86d5,	// (0x000233bb) scroll_pane_cp14

0x8de7,	// (0x00023acd) scroll_pane_cp36

0x8e13,	// (0x00023af9) list_single_graphic_hl_pane_cp2_ParamLimits

0x8e13,	// (0x00023af9) list_single_graphic_hl_pane_cp2

0xb1dd,	// (0x00025ec3) list_single_graphic_hl_pane_ParamLimits

0xb1dd,	// (0x00025ec3) list_single_graphic_hl_pane

0x5829,	// (0x0002050f) aid_size_min_hl_cp1

0xc9ee,	// (0x000276d4) list_highlight_pane_cp34_ParamLimits

0xc9ee,	// (0x000276d4) list_highlight_pane_cp34

0xc9ff,	// (0x000276e5) list_single_graphic_hl_pane_g1_ParamLimits

0xc9ff,	// (0x000276e5) list_single_graphic_hl_pane_g1

0x5832,	// (0x00020518) list_single_graphic_hl_pane_g2_ParamLimits

0x5832,	// (0x00020518) list_single_graphic_hl_pane_g2

0x5832,	// (0x00020518) list_single_graphic_hl_pane_g3_ParamLimits

0x5832,	// (0x00020518) list_single_graphic_hl_pane_g3

0x583e,	// (0x00020524) list_single_graphic_hl_pane_g4_ParamLimits

0x583e,	// (0x00020524) list_single_graphic_hl_pane_g4

0x584a,	// (0x00020530) list_single_graphic_hl_pane_g5_ParamLimits

0x584a,	// (0x00020530) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0002a8b5) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0002a8b5) list_single_graphic_hl_pane_g

0x585e,	// (0x00020544) list_single_graphic_hl_pane_t1_ParamLimits

0x585e,	// (0x00020544) list_single_graphic_hl_pane_t1

0xca0c,	// (0x000276f2) aid_size_min_hl_cp2

0xca15,	// (0x000276fb) list_highlight_pane_cp34_cp2_ParamLimits

0xca15,	// (0x000276fb) list_highlight_pane_cp34_cp2

0xc9ff,	// (0x000276e5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc9ff,	// (0x000276e5) list_single_graphic_hl_pane_g1_cp2

0xca22,	// (0x00027708) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca22,	// (0x00027708) list_single_graphic_hl_pane_g2_cp2

0xca2e,	// (0x00027714) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca2e,	// (0x00027714) list_single_graphic_hl_pane_g3_cp2

0xbd2e,	// (0x00026a14) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbd2e,	// (0x00026a14) list_single_graphic_hl_pane_g4_cp2

0xca3c,	// (0x00027722) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xca3c,	// (0x00027722) list_single_graphic_hl_pane_g5_cp2

0x634c,	// (0x00021032) control_pane_g4_ParamLimits

0x634c,	// (0x00021032) control_pane_g4

0x96ef,	// (0x000243d5) bg_popup_sub_pane_cp10_ParamLimits

0xc229,	// (0x00026f0f) list_choice_list_pane_ParamLimits

0xc238,	// (0x00026f1e) scroll_pane_cp23

0x812a,	// (0x00022e10) bg_popup_preview_window_pane_cp02_ParamLimits

0xc820,	// (0x00027506) list_preview_fixed_pane_ParamLimits

0xc836,	// (0x0002751c) list_preview_fixed_pane_cp_ParamLimits

0xc836,	// (0x0002751c) list_preview_fixed_pane_cp

0xc842,	// (0x00027528) popup_preview_fixed_window_g1_ParamLimits

0xc842,	// (0x00027528) popup_preview_fixed_window_g1

0xc84e,	// (0x00027534) popup_preview_fixed_window_g2_ParamLimits

0xc84e,	// (0x00027534) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0002a844) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0002a844) popup_preview_fixed_window_g

0x5f75,	// (0x00020c5b) aid_navi_side_left_pane_ParamLimits

0x5f8a,	// (0x00020c70) aid_navi_side_right_pane_ParamLimits

0x5fa2,	// (0x00020c88) navi_icon_pane_stacon_ParamLimits

0x5fb6,	// (0x00020c9c) navi_navi_pane_stacon_ParamLimits

0x5fa2,	// (0x00020c88) navi_text_pane_stacon_ParamLimits

0x7dad,	// (0x00022a93) main_text_info_pane

0xca66,	// (0x0002774c) listscroll_text_info_pane

0xca6e,	// (0x00027754) list_text_info_pane_ParamLimits

0xca6e,	// (0x00027754) list_text_info_pane

0xca7d,	// (0x00027763) scroll_pane_cp24_ParamLimits

0xca7d,	// (0x00027763) scroll_pane_cp24

0xca9b,	// (0x00027781) list_text_info_pane_t1_ParamLimits

0xca9b,	// (0x00027781) list_text_info_pane_t1

0x64a0,	// (0x00021186) popup_fast_swap2_window_ParamLimits

0x64a0,	// (0x00021186) popup_fast_swap2_window

0xcacc,	// (0x000277b2) aid_size_cell_fast2

0x7dad,	// (0x00022a93) bg_popup_window_pane_cp17

0xa07f,	// (0x00024d65) heading_pane_cp2

0x839f,	// (0x00023085) listscroll_fast2_pane

0xcad6,	// (0x000277bc) grid_fast2_pane

0xcae0,	// (0x000277c6) listscroll_fast2_pane_g1

0xcae8,	// (0x000277ce) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0002a8c0) listscroll_fast2_pane_g

0x88a3,	// (0x00023589) scroll_pane_cp26

0xcaf2,	// (0x000277d8) cell_fast2_pane_ParamLimits

0xcaf2,	// (0x000277d8) cell_fast2_pane

0xcb07,	// (0x000277ed) cell_fast2_pane_g1

0xcb10,	// (0x000277f6) cell_fast2_pane_g2

0xcb19,	// (0x000277ff) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0002a8c5) cell_fast2_pane_g

0x8492,	// (0x00023178) grid_highlight_pane_cp9

0x84a7,	// (0x0002318d) main_eswt_pane_ParamLimits

0x84a7,	// (0x0002318d) main_eswt_pane

0xca92,	// (0x00027778) list_single_text_info_pane

0xcb21,	// (0x00027807) eswt_ctrl_button_pane

0xcb21,	// (0x00027807) eswt_ctrl_canvas_pane

0xcb29,	// (0x0002780f) eswt_ctrl_combo_pane

0xcb21,	// (0x00027807) eswt_ctrl_default_pane

0xcb21,	// (0x00027807) eswt_ctrl_label_pane

0xcb31,	// (0x00027817) eswt_ctrl_wait_pane

0xcb39,	// (0x0002781f) eswt_shell_pane

0x7dad,	// (0x00022a93) listscroll_eswt_app_pane

0xcb59,	// (0x0002783f) popup_eswt_tasktip_window_ParamLimits

0xcb59,	// (0x0002783f) popup_eswt_tasktip_window

0x9c87,	// (0x0002496d) bg_popup_window_pane_cp18

0xcb6a,	// (0x00027850) eswt_control_pane_g1_ParamLimits

0xcb6a,	// (0x00027850) eswt_control_pane_g1

0xcb77,	// (0x0002785d) eswt_control_pane_g2_ParamLimits

0xcb77,	// (0x0002785d) eswt_control_pane_g2

0xcb84,	// (0x0002786a) eswt_control_pane_g3_ParamLimits

0xcb84,	// (0x0002786a) eswt_control_pane_g3

0xcb91,	// (0x00027877) eswt_control_pane_g4_ParamLimits

0xcb91,	// (0x00027877) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0002a8cc) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0002a8cc) eswt_control_pane_g

0x8736,	// (0x0002341c) bg_button_pane_ParamLimits

0x8736,	// (0x0002341c) bg_button_pane

0x84a7,	// (0x0002318d) common_borders_pane_copy2_ParamLimits

0x84a7,	// (0x0002318d) common_borders_pane_copy2

0xcb9e,	// (0x00027884) control_button_pane_g1_ParamLimits

0xcb9e,	// (0x00027884) control_button_pane_g1

0xcbaa,	// (0x00027890) control_button_pane_g2_ParamLimits

0xcbaa,	// (0x00027890) control_button_pane_g2

0xcbb6,	// (0x0002789c) control_button_pane_g3_ParamLimits

0xcbb6,	// (0x0002789c) control_button_pane_g3

0x0002,

0xfbef,	// (0x0002a8d5) control_button_pane_g_ParamLimits

0xfbef,	// (0x0002a8d5) control_button_pane_g

0xcbca,	// (0x000278b0) control_button_pane_t1

0xcbd8,	// (0x000278be) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0002a8dc) control_button_pane_t

0x9c13,	// (0x000248f9) bg_button_pane_g1

0x9c1b,	// (0x00024901) bg_button_pane_g2

0x9c23,	// (0x00024909) bg_button_pane_g3

0x9c2b,	// (0x00024911) bg_button_pane_g4

0x9c33,	// (0x00024919) bg_button_pane_g5

0x9c3b,	// (0x00024921) bg_button_pane_g6

0x9c43,	// (0x00024929) bg_button_pane_g7

0x9c4b,	// (0x00024931) bg_button_pane_g8

0x9c53,	// (0x00024939) bg_button_pane_g9

0x0008,

0xf85f,	// (0x0002a545) bg_button_pane_g

0xc1e4,	// (0x00026eca) common_borders_pane_ParamLimits

0xc1e4,	// (0x00026eca) common_borders_pane

0xcb6a,	// (0x00027850) eswt_control_pane_g1_copy1_ParamLimits

0xcb6a,	// (0x00027850) eswt_control_pane_g1_copy1

0xcb77,	// (0x0002785d) eswt_control_pane_g2_copy1_ParamLimits

0xcb77,	// (0x0002785d) eswt_control_pane_g2_copy1

0xcb84,	// (0x0002786a) eswt_control_pane_g3_copy1_ParamLimits

0xcb84,	// (0x0002786a) eswt_control_pane_g3_copy1

0xcb91,	// (0x00027877) eswt_control_pane_g4_copy1_ParamLimits

0xcb91,	// (0x00027877) eswt_control_pane_g4_copy1

0xc21f,	// (0x00026f05) bg_eswt_ctrl_canvas_pane_g1

0xc1e4,	// (0x00026eca) common_borders_pane_cp2_ParamLimits

0xc1e4,	// (0x00026eca) common_borders_pane_cp2

0xc1e4,	// (0x00026eca) common_borders_pane_cp3_ParamLimits

0xc1e4,	// (0x00026eca) common_borders_pane_cp3

0xcbe6,	// (0x000278cc) separator_horizontal_pane

0xcbee,	// (0x000278d4) separator_vertical_pane

0xcb6a,	// (0x00027850) eswt_control_pane_g1_copy2_ParamLimits

0xcb6a,	// (0x00027850) eswt_control_pane_g1_copy2

0xcb77,	// (0x0002785d) eswt_control_pane_g2_copy2_ParamLimits

0xcb77,	// (0x0002785d) eswt_control_pane_g2_copy2

0xcb84,	// (0x0002786a) eswt_control_pane_g3_copy2_ParamLimits

0xcb84,	// (0x0002786a) eswt_control_pane_g3_copy2

0xcb91,	// (0x00027877) eswt_control_pane_g4_copy2_ParamLimits

0xcb91,	// (0x00027877) eswt_control_pane_g4_copy2

0x7dad,	// (0x00022a93) common_borders_pane_cp4

0xcbf7,	// (0x000278dd) separator_horizontal_pane_g1

0xcc00,	// (0x000278e6) separator_horizontal_pane_g2

0xcc09,	// (0x000278ef) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0002a8e1) separator_horizontal_pane_g

0xcb6a,	// (0x00027850) eswt_control_pane_g1_copy3_ParamLimits

0xcb6a,	// (0x00027850) eswt_control_pane_g1_copy3

0xcb77,	// (0x0002785d) eswt_control_pane_g2_copy3_ParamLimits

0xcb77,	// (0x0002785d) eswt_control_pane_g2_copy3

0xcb84,	// (0x0002786a) eswt_control_pane_g3_copy3_ParamLimits

0xcb84,	// (0x0002786a) eswt_control_pane_g3_copy3

0xcb91,	// (0x00027877) eswt_control_pane_g4_copy3_ParamLimits

0xcb91,	// (0x00027877) eswt_control_pane_g4_copy3

0x7dad,	// (0x00022a93) common_borders_pane_cp5

0xcc12,	// (0x000278f8) separator_vertical_pane_g1

0xcc1b,	// (0x00027901) separator_vertical_pane_g2

0xcc24,	// (0x0002790a) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0002a8e8) separator_vertical_pane_g

0xcb6a,	// (0x00027850) eswt_control_pane_g1_copy4_ParamLimits

0xcb6a,	// (0x00027850) eswt_control_pane_g1_copy4

0xcb77,	// (0x0002785d) eswt_control_pane_g2_copy4_ParamLimits

0xcb77,	// (0x0002785d) eswt_control_pane_g2_copy4

0xcb84,	// (0x0002786a) eswt_control_pane_g3_copy4_ParamLimits

0xcb84,	// (0x0002786a) eswt_control_pane_g3_copy4

0xcb91,	// (0x00027877) eswt_control_pane_g4_copy4_ParamLimits

0xcb91,	// (0x00027877) eswt_control_pane_g4_copy4

0xcc2d,	// (0x00027913) eswt_ctrl_combo_button_pane

0xcc35,	// (0x0002791b) eswt_ctrl_input_pane

0xcc3d,	// (0x00027923) popup_choice_list_window_cp70

0xcc45,	// (0x0002792b) eswt_ctrl_input_pane_t1

0x7dad,	// (0x00022a93) input_focus_pane_cp70

0xc1e4,	// (0x00026eca) bg_button_pane_cp70_ParamLimits

0xc1e4,	// (0x00026eca) bg_button_pane_cp70

0xcc53,	// (0x00027939) eswt_ctrl_combo_button_pane_g1

0xcc5b,	// (0x00027941) wait_bar_pane_cp70

0x9c87,	// (0x0002496d) bg_popup_window_pane_cp70_ParamLimits

0x9c87,	// (0x0002496d) bg_popup_window_pane_cp70

0xcc63,	// (0x00027949) popup_eswt_tasktip_window_t1

0xcc79,	// (0x0002795f) wait_bar_pane_cp71_ParamLimits

0xcc79,	// (0x0002795f) wait_bar_pane_cp71

0xcc85,	// (0x0002796b) grid_eswt_app_pane

0x8bca,	// (0x000238b0) scroll_pane_cp70

0xcc8e,	// (0x00027974) cell_eswt_app_pane_ParamLimits

0xcc8e,	// (0x00027974) cell_eswt_app_pane

0xccbe,	// (0x000279a4) cell_eswt_app_pane_g1_ParamLimits

0xccbe,	// (0x000279a4) cell_eswt_app_pane_g1

0xcced,	// (0x000279d3) cell_eswt_app_pane_g2_ParamLimits

0xcced,	// (0x000279d3) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0002a8ef) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0002a8ef) cell_eswt_app_pane_g

0xcd16,	// (0x000279fc) cell_eswt_app_pane_t1_ParamLimits

0xcd16,	// (0x000279fc) cell_eswt_app_pane_t1

0xcd48,	// (0x00027a2e) grid_highlight_pane_cp70_ParamLimits

0xcd48,	// (0x00027a2e) grid_highlight_pane_cp70

0x92a0,	// (0x00023f86) set_content_pane_g1

0x9676,	// (0x0002435c) status_small_volume_pane

0x7177,	// (0x00021e5d) status_small_volume_pane_g1

0x717f,	// (0x00021e65) volume_small2_pane

0x7188,	// (0x00021e6e) volume_small2_pane_g1

0x7191,	// (0x00021e77) volume_small2_pane_g2

0x719a,	// (0x00021e80) volume_small2_pane_g3

0x71a3,	// (0x00021e89) volume_small2_pane_g4

0x71ac,	// (0x00021e92) volume_small2_pane_g5

0x71b5,	// (0x00021e9b) volume_small2_pane_g6

0x71be,	// (0x00021ea4) volume_small2_pane_g7

0x71c7,	// (0x00021ead) volume_small2_pane_g8

0x71d0,	// (0x00021eb6) volume_small2_pane_g9

0x71d9,	// (0x00021ebf) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0002a8f4) volume_small2_pane_g

0xc5e5,	// (0x000272cb) fep_vkb_top_text_pane_g1_ParamLimits

0xc600,	// (0x000272e6) fep_vkb_top_text_pane_t1_ParamLimits

0xc85a,	// (0x00027540) popup_preview_fixed_window_g3_ParamLimits

0xc85a,	// (0x00027540) popup_preview_fixed_window_g3

0x694f,	// (0x00021635) popup_toolbar_trans_pane

0xafe4,	// (0x00025cca) aid_height_set_list_ParamLimits

0xaff5,	// (0x00025cdb) aid_size_parent_ParamLimits

0x96ef,	// (0x000243d5) list_highlight_pane_cp2_ParamLimits

0x92a0,	// (0x00023f86) set_content_pane_g1_ParamLimits

0xb1f9,	// (0x00025edf) list_single_image_pane_ParamLimits

0xb1f9,	// (0x00025edf) list_single_image_pane

0xcd54,	// (0x00027a3a) aid_size_cell_image_ParamLimits

0xcd54,	// (0x00027a3a) aid_size_cell_image

0xcd61,	// (0x00027a47) grid_single_image_pane_ParamLimits

0xcd61,	// (0x00027a47) grid_single_image_pane

0xa067,	// (0x00024d4d) list_single_image_pane_g1_ParamLimits

0xa067,	// (0x00024d4d) list_single_image_pane_g1

0xcd6d,	// (0x00027a53) list_single_image_pane_g2_ParamLimits

0xcd6d,	// (0x00027a53) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0002a909) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0002a909) list_single_image_pane_g

0xcd81,	// (0x00027a67) list_single_image_pane_t1_ParamLimits

0xcd81,	// (0x00027a67) list_single_image_pane_t1

0xcd97,	// (0x00027a7d) cell_image_list_pane_ParamLimits

0xcd97,	// (0x00027a7d) cell_image_list_pane

0xcdab,	// (0x00027a91) cell_image_list_pane_g1

0xcdb4,	// (0x00027a9a) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0002a90e) cell_image_list_pane_g

0xcdbd,	// (0x00027aa3) aid_size_cell_tb_trans_pane

0x8736,	// (0x0002341c) bg_tb_trans_pane

0xcdcf,	// (0x00027ab5) grid_tb_trans_pane

0x9c13,	// (0x000248f9) bg_tb_trans_pane_g1

0x9c1b,	// (0x00024901) bg_tb_trans_pane_g2

0x9c23,	// (0x00024909) bg_tb_trans_pane_g3

0x9c2b,	// (0x00024911) bg_tb_trans_pane_g4

0x9c33,	// (0x00024919) bg_tb_trans_pane_g5

0x9c4b,	// (0x00024931) bg_tb_trans_pane_g6

0x9c53,	// (0x00024939) bg_tb_trans_pane_g7

0x9c3b,	// (0x00024921) bg_tb_trans_pane_g8

0x9c43,	// (0x00024929) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0002a913) bg_tb_trans_pane_g

0xcde3,	// (0x00027ac9) cell_toolbar_trans_pane_ParamLimits

0xcde3,	// (0x00027ac9) cell_toolbar_trans_pane

0xc21f,	// (0x00026f05) cell_toolbar_trans_pane_g1

0xbdf4,	// (0x00026ada) list_form2_midp_pane_t1

0xbe02,	// (0x00026ae8) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0002a7bc) list_form2_midp_pane_t

0xbe10,	// (0x00026af6) scroll_pane_cp51_ParamLimits

0xbfcc,	// (0x00026cb2) form2_midp_wait_pane_g1

0xbfd5,	// (0x00026cbb) form2_midp_wait_pane_g2

0xbfde,	// (0x00026cc4) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0002a7d1) form2_midp_wait_pane_g

0x7ea1,	// (0x00022b87) list_highlight_pane_cp21_ParamLimits

0xc02a,	// (0x00026d10) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc039,	// (0x00026d1f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5238,	// (0x0001ff1e) list_single_2graphic_im_pane_ParamLimits

0x5238,	// (0x0001ff1e) list_single_2graphic_im_pane

0xce09,	// (0x00027aef) list_single_2graphic_im_pane_g1_ParamLimits

0xce09,	// (0x00027aef) list_single_2graphic_im_pane_g1

0xce1a,	// (0x00027b00) list_single_2graphic_im_pane_g2_ParamLimits

0xce1a,	// (0x00027b00) list_single_2graphic_im_pane_g2

0xce26,	// (0x00027b0c) list_single_2graphic_im_pane_g3_ParamLimits

0xce26,	// (0x00027b0c) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0002a926) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0002a926) list_single_2graphic_im_pane_g

0xce46,	// (0x00027b2c) list_single_2graphic_im_pane_t1_ParamLimits

0xce46,	// (0x00027b2c) list_single_2graphic_im_pane_t1

0xc866,	// (0x0002754c) list_single_graphic_2heading_pane_fp_ParamLimits

0xc866,	// (0x0002754c) list_single_graphic_2heading_pane_fp

0x569b,	// (0x00020381) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x569b,	// (0x00020381) list_single_graphic_2heading_pane_fp_g1

0xc87b,	// (0x00027561) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc87b,	// (0x00027561) list_single_graphic_2heading_pane_fp_g2

0x5664,	// (0x0002034a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5664,	// (0x0002034a) list_single_graphic_2heading_pane_fp_g3

0x5670,	// (0x00020356) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5670,	// (0x00020356) list_single_graphic_2heading_pane_fp_g4

0xc887,	// (0x0002756d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc887,	// (0x0002756d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a854) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a854) list_single_graphic_2heading_pane_fp_g

0x5874,	// (0x0002055a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5874,	// (0x0002055a) list_single_graphic_2heading_pane_fp_t1

0x56d3,	// (0x000203b9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x56d3,	// (0x000203b9) list_single_graphic_2heading_pane_fp_t2

0x588a,	// (0x00020570) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x588a,	// (0x00020570) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0002a92f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0002a92f) list_single_graphic_2heading_pane_fp_t

0xc2ab,	// (0x00026f91) fep_hwr_write_pane_g5_ParamLimits

0xc2ab,	// (0x00026f91) fep_hwr_write_pane_g5

0xc2b7,	// (0x00026f9d) fep_hwr_write_pane_g6_ParamLimits

0xc2b7,	// (0x00026f9d) fep_hwr_write_pane_g6

0xcb39,	// (0x0002781f) eswt_shell_pane_ParamLimits

0x9c87,	// (0x0002496d) bg_popup_window_pane_cp18_ParamLimits

0xaf3d,	// (0x00025c23) heading_pane_cp70

0xcc63,	// (0x00027949) popup_eswt_tasktip_window_t1_ParamLimits

0x9780,	// (0x00024466) aid_touch_tab_arrow_left

0x978f,	// (0x00024475) aid_touch_tab_arrow_right

0x7de9,	// (0x00022acf) title_pane_g3_ParamLimits

0x7de9,	// (0x00022acf) title_pane_g3

0x86f5,	// (0x000233db) set_value_pane_g1

0x694f,	// (0x00021635) popup_toolbar_trans_pane_ParamLimits

0xcdbd,	// (0x00027aa3) aid_size_cell_tb_trans_pane_ParamLimits

0x8736,	// (0x0002341c) bg_tb_trans_pane_ParamLimits

0xcdcf,	// (0x00027ab5) grid_tb_trans_pane_ParamLimits

0x812a,	// (0x00022e10) cont_note_pane_ParamLimits

0x812a,	// (0x00022e10) cont_note_pane

0x84a7,	// (0x0002318d) cont_snote2_single_text_pane_ParamLimits

0x84a7,	// (0x0002318d) cont_snote2_single_text_pane

0x84a7,	// (0x0002318d) cont_snote2_single_graphic_pane_ParamLimits

0x84a7,	// (0x0002318d) cont_snote2_single_graphic_pane

0xa2a6,	// (0x00024f8c) cont_note_wait_pane_ParamLimits

0xa2a6,	// (0x00024f8c) cont_note_wait_pane

0xa2a6,	// (0x00024f8c) cont_note_image_pane_ParamLimits

0xa2a6,	// (0x00024f8c) cont_note_image_pane

0xce77,	// (0x00027b5d) popup_note2_window_g1_ParamLimits

0xce77,	// (0x00027b5d) popup_note2_window_g1

0xcea8,	// (0x00027b8e) popup_note2_window_t1_ParamLimits

0xcea8,	// (0x00027b8e) popup_note2_window_t1

0xceed,	// (0x00027bd3) popup_note2_window_t2_ParamLimits

0xceed,	// (0x00027bd3) popup_note2_window_t2

0xcf32,	// (0x00027c18) popup_note2_window_t3_ParamLimits

0xcf32,	// (0x00027c18) popup_note2_window_t3

0xcf77,	// (0x00027c5d) popup_note2_window_t4_ParamLimits

0xcf77,	// (0x00027c5d) popup_note2_window_t4

0x81ae,	// (0x00022e94) popup_note2_window_t5_ParamLimits

0x81ae,	// (0x00022e94) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0002a93b) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0002a93b) popup_note2_window_t

0xcfa6,	// (0x00027c8c) popup_note2_image_window_g1_ParamLimits

0xcfa6,	// (0x00027c8c) popup_note2_image_window_g1

0xcfb2,	// (0x00027c98) popup_note2_image_window_g2_ParamLimits

0xcfb2,	// (0x00027c98) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0002a946) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0002a946) popup_note2_image_window_g

0xcfc4,	// (0x00027caa) popup_note2_image_window_t1_ParamLimits

0xcfc4,	// (0x00027caa) popup_note2_image_window_t1

0xcfdc,	// (0x00027cc2) popup_note2_image_window_t2_ParamLimits

0xcfdc,	// (0x00027cc2) popup_note2_image_window_t2

0xcff4,	// (0x00027cda) popup_note2_image_window_t3_ParamLimits

0xcff4,	// (0x00027cda) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0002a94b) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0002a94b) popup_note2_image_window_t

0xa2b4,	// (0x00024f9a) popup_note2_wait_window_g1_ParamLimits

0xa2b4,	// (0x00024f9a) popup_note2_wait_window_g1

0xd010,	// (0x00027cf6) popup_note2_wait_window_g2_ParamLimits

0xd010,	// (0x00027cf6) popup_note2_wait_window_g2

0xa2cc,	// (0x00024fb2) popup_note2_wait_window_g3_ParamLimits

0xa2cc,	// (0x00024fb2) popup_note2_wait_window_g3

0x0002,

0xfc6c,	// (0x0002a952) popup_note2_wait_window_g_ParamLimits

0xfc6c,	// (0x0002a952) popup_note2_wait_window_g

0xd01c,	// (0x00027d02) popup_note2_wait_window_t1_ParamLimits

0xd01c,	// (0x00027d02) popup_note2_wait_window_t1

0xd03a,	// (0x00027d20) popup_note2_wait_window_t2_ParamLimits

0xd03a,	// (0x00027d20) popup_note2_wait_window_t2

0xd058,	// (0x00027d3e) popup_note2_wait_window_t3_ParamLimits

0xd058,	// (0x00027d3e) popup_note2_wait_window_t3

0xd06a,	// (0x00027d50) popup_note2_wait_window_t4_ParamLimits

0xd06a,	// (0x00027d50) popup_note2_wait_window_t4

0x0003,

0xfc73,	// (0x0002a959) popup_note2_wait_window_t_ParamLimits

0xfc73,	// (0x0002a959) popup_note2_wait_window_t

0xd07c,	// (0x00027d62) wait_bar2_pane_ParamLimits

0xd07c,	// (0x00027d62) wait_bar2_pane

0xd094,	// (0x00027d7a) popup_snote2_single_text_window_g1_ParamLimits

0xd094,	// (0x00027d7a) popup_snote2_single_text_window_g1

0xd0bc,	// (0x00027da2) popup_snote2_single_text_window_t1_ParamLimits

0xd0bc,	// (0x00027da2) popup_snote2_single_text_window_t1

0xd108,	// (0x00027dee) popup_snote2_single_text_window_t2_ParamLimits

0xd108,	// (0x00027dee) popup_snote2_single_text_window_t2

0xd154,	// (0x00027e3a) popup_snote2_single_text_window_t3_ParamLimits

0xd154,	// (0x00027e3a) popup_snote2_single_text_window_t3

0xd195,	// (0x00027e7b) popup_snote2_single_text_window_t4_ParamLimits

0xd195,	// (0x00027e7b) popup_snote2_single_text_window_t4

0xd1cb,	// (0x00027eb1) popup_snote2_single_text_window_t5_ParamLimits

0xd1cb,	// (0x00027eb1) popup_snote2_single_text_window_t5

0x0004,

0xfc7c,	// (0x0002a962) popup_snote2_single_text_window_t_ParamLimits

0xfc7c,	// (0x0002a962) popup_snote2_single_text_window_t

0xd1f6,	// (0x00027edc) popup_snote2_single_graphic_window_g1_ParamLimits

0xd1f6,	// (0x00027edc) popup_snote2_single_graphic_window_g1

0xd21e,	// (0x00027f04) popup_snote2_single_graphic_window_g2_ParamLimits

0xd21e,	// (0x00027f04) popup_snote2_single_graphic_window_g2

0x0001,

0xfc87,	// (0x0002a96d) popup_snote2_single_graphic_window_g_ParamLimits

0xfc87,	// (0x0002a96d) popup_snote2_single_graphic_window_g

0xd246,	// (0x00027f2c) popup_snote2_single_graphic_window_t1_ParamLimits

0xd246,	// (0x00027f2c) popup_snote2_single_graphic_window_t1

0xd292,	// (0x00027f78) popup_snote2_single_graphic_window_t2_ParamLimits

0xd292,	// (0x00027f78) popup_snote2_single_graphic_window_t2

0xd154,	// (0x00027e3a) popup_snote2_single_graphic_window_t3_ParamLimits

0xd154,	// (0x00027e3a) popup_snote2_single_graphic_window_t3

0xd195,	// (0x00027e7b) popup_snote2_single_graphic_window_t4_ParamLimits

0xd195,	// (0x00027e7b) popup_snote2_single_graphic_window_t4

0xd1cb,	// (0x00027eb1) popup_snote2_single_graphic_window_t5_ParamLimits

0xd1cb,	// (0x00027eb1) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8c,	// (0x0002a972) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8c,	// (0x0002a972) popup_snote2_single_graphic_window_t

0xbcc5,	// (0x000269ab) clock_nsta_pane_cp2_t1

0xbcc5,	// (0x000269ab) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0002a792) clock_nsta_pane_cp2_t

0x4e17,	// (0x0001fafd) form_field_data_wide_pane_g1_ParamLimits

0x8744,	// (0x0002342a) form_field_data_wide_pane_g2_ParamLimits

0x8744,	// (0x0002342a) form_field_data_wide_pane_g2

0x8750,	// (0x00023436) form_field_data_wide_pane_g3_ParamLimits

0x8750,	// (0x00023436) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002a361) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002a361) form_field_data_wide_pane_g

0xbbc7,	// (0x000268ad) grid_touch_3_pane_ParamLimits

0xbbc7,	// (0x000268ad) grid_touch_3_pane

0xd2de,	// (0x00027fc4) cell_touch_3_pane_ParamLimits

0xd2de,	// (0x00027fc4) cell_touch_3_pane

0xc21f,	// (0x00026f05) cell_touch_3_pane_g1

0xc21f,	// (0x00026f05) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0002a817) cell_touch_3_pane_g

0x8206,	// (0x00022eec) cont_query_data_pane

0x820e,	// (0x00022ef4) cont_query_data_pane_cp1

0xd30c,	// (0x00027ff2) button_value_adjust_pane_cp7

0xd314,	// (0x00027ffa) query_popup_pane_cp3

0x8ea8,	// (0x00023b8e) bg_popup_sub_pane_cp22_ParamLimits

0x60b7,	// (0x00020d9d) navi_navi_volume_pane_cp2

0x60d2,	// (0x00020db8) popup_side_volume_key_window_g2

0x60e1,	// (0x00020dc7) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002a3f7) popup_side_volume_key_window_g

0x60fe,	// (0x00020de4) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002a3fe) popup_side_volume_key_window_t

0x915f,	// (0x00023e45) popup_side_volume_key_window_ParamLimits

0x4a78,	// (0x0001f75e) list_double_graphic_pane_g4_ParamLimits

0x4a78,	// (0x0001f75e) list_double_graphic_pane_g4

0x5277,	// (0x0001ff5d) list_single_2heading_msg_pane_ParamLimits

0x5277,	// (0x0001ff5d) list_single_2heading_msg_pane

0x58aa,	// (0x00020590) list_single_2heading_msg_pane_g1_ParamLimits

0x58aa,	// (0x00020590) list_single_2heading_msg_pane_g1

0x48a7,	// (0x0001f58d) list_single_2heading_msg_pane_g2_ParamLimits

0x48a7,	// (0x0001f58d) list_single_2heading_msg_pane_g2

0x58b6,	// (0x0002059c) list_single_2heading_msg_pane_g3_ParamLimits

0x58b6,	// (0x0002059c) list_single_2heading_msg_pane_g3

0x58c2,	// (0x000205a8) list_single_2heading_msg_pane_g4_ParamLimits

0x58c2,	// (0x000205a8) list_single_2heading_msg_pane_g4

0x0003,

0xfc97,	// (0x0002a97d) list_single_2heading_msg_pane_g_ParamLimits

0xfc97,	// (0x0002a97d) list_single_2heading_msg_pane_g

0x58da,	// (0x000205c0) list_single_2heading_msg_pane_t1_ParamLimits

0x58da,	// (0x000205c0) list_single_2heading_msg_pane_t1

0x5902,	// (0x000205e8) list_single_2heading_msg_pane_t2_ParamLimits

0x5902,	// (0x000205e8) list_single_2heading_msg_pane_t2

0x5936,	// (0x0002061c) list_single_2heading_msg_pane_t3_ParamLimits

0x5936,	// (0x0002061c) list_single_2heading_msg_pane_t3

0x596f,	// (0x00020655) list_single_2heading_msg_pane_t4_ParamLimits

0x596f,	// (0x00020655) list_single_2heading_msg_pane_t4

0x0003,

0xfca0,	// (0x0002a986) list_single_2heading_msg_pane_t_ParamLimits

0xfca0,	// (0x0002a986) list_single_2heading_msg_pane_t

0x7df5,	// (0x00022adb) title_pane_g4_ParamLimits

0x7df5,	// (0x00022adb) title_pane_g4

0x5ec6,	// (0x00020bac) title_pane_stacon_g3_ParamLimits

0x5ec6,	// (0x00020bac) title_pane_stacon_g3

0xce3a,	// (0x00027b20) list_single_2graphic_im_pane_g4_ParamLimits

0xce3a,	// (0x00027b20) list_single_2graphic_im_pane_g4

0xad05,	// (0x000259eb) popup_side_volume_key_window_cp

0xb515,	// (0x000261fb) main_idle_act2_pane_t1

0x6a41,	// (0x00021727) toolbar_button_pane_g10

0x869f,	// (0x00023385) popup_toolbar_window_cp1

0xbcb6,	// (0x0002699c) clock_nsta_pane_cp_t1

0xbcb6,	// (0x0002699c) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0002a78d) clock_nsta_pane_cp_t

0x60b7,	// (0x00020d9d) navi_navi_volume_pane_cp2_ParamLimits

0x60c6,	// (0x00020dac) popup_side_volume_key_window_g1_ParamLimits

0x60d2,	// (0x00020db8) popup_side_volume_key_window_g2_ParamLimits

0x60e1,	// (0x00020dc7) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002a3f7) popup_side_volume_key_window_g_ParamLimits

0x6e87,	// (0x00021b6d) fep_hwr_aid_pane

0x1e76,	// (0x0001cb5c) bg_fep_hwr_top_pane_g4_ParamLimits

0xc27b,	// (0x00026f61) fep_hwr_top_pane_g1_ParamLimits

0xc28d,	// (0x00026f73) fep_hwr_top_pane_g2_ParamLimits

0x6f40,	// (0x00021c26) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0002a7e2) fep_hwr_top_pane_g_ParamLimits

0x6f55,	// (0x00021c3b) fep_hwr_top_text_pane_ParamLimits

0xaac8,	// (0x000257ae) aid_touch_tab_arrow_arrow_2

0xaad1,	// (0x000257b7) aid_touch_tab_arrow_left_2

0x6e9b,	// (0x00021b81) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6ed2,	// (0x00021bb8) fep_hwr_prediction_pane

0xc3ed,	// (0x000270d3) fep_vkb_prediction_pane

0xc4f1,	// (0x000271d7) fep_vkb_side_pane_g3_ParamLimits

0xc4f1,	// (0x000271d7) fep_vkb_side_pane_g3

0xc49d,	// (0x00027183) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc91d,	// (0x00027603) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc92a,	// (0x00027610) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0002a88c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd339,	// (0x0002801f) fep_hwr_prediction_pane_g1

0x71e2,	// (0x00021ec8) fep_hwr_prediction_pane_g2

0x71ea,	// (0x00021ed0) fep_hwr_prediction_pane_g3

0x71f2,	// (0x00021ed8) fep_hwr_prediction_pane_g4

0x0003,

0xfca9,	// (0x0002a98f) fep_hwr_prediction_pane_g

0xd339,	// (0x0002801f) fep_vkb_prediction_pane_g1

0xd343,	// (0x00028029) fep_vkb_prediction_pane_g2

0xd34b,	// (0x00028031) fep_vkb_prediction_pane_g3

0xd353,	// (0x00028039) fep_vkb_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0002a998) fep_vkb_prediction_pane_g

0x6d07,	// (0x000219ed) slider_set_pane_g3

0x6d1b,	// (0x00021a01) slider_set_pane_g4

0x6d33,	// (0x00021a19) slider_set_pane_g5

0x6d07,	// (0x000219ed) slider_set_pane_g6

0x6d49,	// (0x00021a2f) slider_set_pane_g7

0xb15a,	// (0x00025e40) slider_form_pane_g3

0xb163,	// (0x00025e49) slider_form_pane_g4

0xb16b,	// (0x00025e51) slider_form_pane_g5

0xb15a,	// (0x00025e40) slider_form_pane_g6

0xb173,	// (0x00025e59) slider_form_pane_g7

0xb7bf,	// (0x000264a5) slider_set_pane_vc_g3

0xb7c8,	// (0x000264ae) slider_set_pane_vc_g4

0xb7d1,	// (0x000264b7) slider_set_pane_vc_g5

0xb7bf,	// (0x000264a5) slider_set_pane_vc_g6

0xb7da,	// (0x000264c0) slider_set_pane_vc_g7

0xb99a,	// (0x00026680) slider_form_pane_vc_g1

0xb9a3,	// (0x00026689) slider_form_pane_vc_g2

0xb9ac,	// (0x00026692) slider_form_pane_vc_g3

0xb99a,	// (0x00026680) slider_form_pane_vc_g4

0xb9b5,	// (0x0002669b) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0002a75f) slider_form_pane_vc_g

0x7dad,	// (0x00022a93) main_idle_act3_pane

0xd35b,	// (0x00028041) ai3_links_pane

0xd364,	// (0x0002804a) popup_ai3_data_window_ParamLimits

0xd364,	// (0x0002804a) popup_ai3_data_window

0x7dad,	// (0x00022a93) grid_ai3_links_pane

0xd37e,	// (0x00028064) cell_ai3_links_pane_ParamLimits

0xd37e,	// (0x00028064) cell_ai3_links_pane

0xd396,	// (0x0002807c) bg_popup_sub_pane_cp11

0xd3a3,	// (0x00028089) cell_ai3_links_pane_g1

0x7dad,	// (0x00022a93) bg_popup_sub_pane_cp12

0xd3c8,	// (0x000280ae) heading_ai3_data_pane

0xd3d0,	// (0x000280b6) list_ai3_gene_pane

0xd3dc,	// (0x000280c2) popup_ai3_data_window_g1

0xd3e4,	// (0x000280ca) heading_ai3_data_pane_g1

0xd3ec,	// (0x000280d2) heading_ai3_data_pane_t1

0xd3fa,	// (0x000280e0) list_double_ai3_gene_pane_ParamLimits

0xd3fa,	// (0x000280e0) list_double_ai3_gene_pane

0xd407,	// (0x000280ed) list_single_ai3_gene_pane_ParamLimits

0xd407,	// (0x000280ed) list_single_ai3_gene_pane

0xc1e4,	// (0x00026eca) list_highlight_pane_cp7_ParamLimits

0xc1e4,	// (0x00026eca) list_highlight_pane_cp7

0xd414,	// (0x000280fa) list_single_a13_gene_pane_t1_ParamLimits

0xd414,	// (0x000280fa) list_single_a13_gene_pane_t1

0xd42b,	// (0x00028111) list_single_ai3_gene_pane_g1

0xd434,	// (0x0002811a) list_single_ai3_gene_pane_g2

0x0001,

0xfcbb,	// (0x0002a9a1) list_single_ai3_gene_pane_g

0xd43c,	// (0x00028122) list_double_ai3_gene_pane_g1_ParamLimits

0xd43c,	// (0x00028122) list_double_ai3_gene_pane_g1

0xd448,	// (0x0002812e) list_double_ai3_gene_pane_t1_ParamLimits

0xd448,	// (0x0002812e) list_double_ai3_gene_pane_t1

0xd464,	// (0x0002814a) list_double_ai3_gene_pane_t2_ParamLimits

0xd464,	// (0x0002814a) list_double_ai3_gene_pane_t2

0xd47a,	// (0x00028160) list_double_ai3_gene_pane_t3_ParamLimits

0xd47a,	// (0x00028160) list_double_ai3_gene_pane_t3

0x0002,

0xfcc0,	// (0x0002a9a6) list_double_ai3_gene_pane_t_ParamLimits

0xfcc0,	// (0x0002a9a6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x58a0,	// (0x00020586) aid_size_min_col_2

0xd325,	// (0x0002800b) aid_size_min_msg_ParamLimits

0xd325,	// (0x0002800b) aid_size_min_msg

0xc5f1,	// (0x000272d7) fep_vkb_top_text_pane_g2_ParamLimits

0xc5f1,	// (0x000272d7) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0002a812) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0002a812) fep_vkb_top_text_pane_g

0x7dad,	// (0x00022a93) main_hc_apps_shell_pane

0xd497,	// (0x0002817d) grid_hc_apps_pane_ParamLimits

0xd497,	// (0x0002817d) grid_hc_apps_pane

0xd4a6,	// (0x0002818c) list_hc_apps_pane

0xd4ae,	// (0x00028194) scroll_pane_cp37_ParamLimits

0xd4ae,	// (0x00028194) scroll_pane_cp37

0xd4ba,	// (0x000281a0) cell_hc_apps_pane_ParamLimits

0xd4ba,	// (0x000281a0) cell_hc_apps_pane

0xd568,	// (0x0002824e) cell_hc_apps_pane_g1_ParamLimits

0xd568,	// (0x0002824e) cell_hc_apps_pane_g1

0xd599,	// (0x0002827f) cell_hc_apps_pane_g2_ParamLimits

0xd599,	// (0x0002827f) cell_hc_apps_pane_g2

0xd5b5,	// (0x0002829b) cell_hc_apps_pane_g3_ParamLimits

0xd5b5,	// (0x0002829b) cell_hc_apps_pane_g3

0x0002,

0xfcc7,	// (0x0002a9ad) cell_hc_apps_pane_g_ParamLimits

0xfcc7,	// (0x0002a9ad) cell_hc_apps_pane_g

0xd5d7,	// (0x000282bd) cell_hc_apps_pane_t1_ParamLimits

0xd5d7,	// (0x000282bd) cell_hc_apps_pane_t1

0x812a,	// (0x00022e10) grid_highlight_pane_cp10_ParamLimits

0x812a,	// (0x00022e10) grid_highlight_pane_cp10

0xd617,	// (0x000282fd) list_single_hc_apps_pane_ParamLimits

0xd617,	// (0x000282fd) list_single_hc_apps_pane

0xd673,	// (0x00028359) list_single_hc_apps_pane_g1

0x5994,	// (0x0002067a) list_single_hc_apps_pane_g2

0x0001,

0xfcce,	// (0x0002a9b4) list_single_hc_apps_pane_g

0x59ad,	// (0x00020693) list_single_hc_apps_pane_g2_copy1

0x59c9,	// (0x000206af) list_single_hc_apps_pane_t1

0x7ea1,	// (0x00022b87) bg_set_opt_pane_cp_ParamLimits

0x5dee,	// (0x00020ad4) setting_slider_pane_t1_ParamLimits

0x5e07,	// (0x00020aed) setting_slider_pane_t2_ParamLimits

0x5e21,	// (0x00020b07) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002a244) setting_slider_pane_t_ParamLimits

0x5e39,	// (0x00020b1f) slider_set_pane_ParamLimits

0x6360,	// (0x00021046) control_pane_g5_ParamLimits

0x6360,	// (0x00021046) control_pane_g5

0xafa9,	// (0x00025c8f) slider_set_pane_g1_ParamLimits

0x6cfb,	// (0x000219e1) slider_set_pane_g2_ParamLimits

0x6d07,	// (0x000219ed) slider_set_pane_g3_ParamLimits

0x6d1b,	// (0x00021a01) slider_set_pane_g4_ParamLimits

0x6d33,	// (0x00021a19) slider_set_pane_g5_ParamLimits

0x6d07,	// (0x000219ed) slider_set_pane_g6_ParamLimits

0x6d49,	// (0x00021a2f) slider_set_pane_g7_ParamLimits

0xf95d,	// (0x0002a643) slider_set_pane_g_ParamLimits

0x924b,	// (0x00023f31) navi_icon_text_pane_ParamLimits

0x9741,	// (0x00024427) aid_fill_nsta_2_ParamLimits

0x9780,	// (0x00024466) aid_touch_tab_arrow_left_ParamLimits

0x978f,	// (0x00024475) aid_touch_tab_arrow_right_ParamLimits

0x97fc,	// (0x000244e2) clock_nsta_pane_ParamLimits

0xaaaa,	// (0x00025790) navi_icon_pane_g1_ParamLimits

0xaab6,	// (0x0002579c) navi_text_pane_t1_ParamLimits

0xbdce,	// (0x00026ab4) navi_icon_text_pane_g1_ParamLimits

0xbdda,	// (0x00026ac0) navi_icon_text_pane_t1_ParamLimits

0xd673,	// (0x00028359) list_single_hc_apps_pane_g1_ParamLimits

0x5994,	// (0x0002067a) list_single_hc_apps_pane_g2_ParamLimits

0xfcce,	// (0x0002a9b4) list_single_hc_apps_pane_g_ParamLimits

0x59ad,	// (0x00020693) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x59c9,	// (0x000206af) list_single_hc_apps_pane_t1_ParamLimits

0x5cf8,	// (0x000209de) popup_toolbar2_fixed_window_ParamLimits

0x5cf8,	// (0x000209de) popup_toolbar2_fixed_window

0x6945,	// (0x0002162b) popup_toolbar2_float_window

0x7dad,	// (0x00022a93) bg_popup_sub_pane_cp27

0xd68c,	// (0x00028372) grid_toolbar2_float_pane

0x7dad,	// (0x00022a93) bg_popup_sub_pane_cp26

0xd68c,	// (0x00028372) grid_toolbar2_fixed_pane

0xd694,	// (0x0002837a) cell_toolbar2_fixed_pane_ParamLimits

0xd694,	// (0x0002837a) cell_toolbar2_fixed_pane

0xd6a4,	// (0x0002838a) cell_toolbar2_fixed_pane_g1

0xd6ad,	// (0x00028393) toolbar2_fixed_button_pane

0x9c13,	// (0x000248f9) toolbar2_fixed_button_pane_g1

0x9c1b,	// (0x00024901) toolbar2_fixed_button_pane_g2

0x9c23,	// (0x00024909) toolbar2_fixed_button_pane_g3

0x9c2b,	// (0x00024911) toolbar2_fixed_button_pane_g4

0x9c33,	// (0x00024919) toolbar2_fixed_button_pane_g5

0x9c3b,	// (0x00024921) toolbar2_fixed_button_pane_g6

0x9c43,	// (0x00024929) toolbar2_fixed_button_pane_g7

0x9c4b,	// (0x00024931) toolbar2_fixed_button_pane_g8

0x9c53,	// (0x00024939) toolbar2_fixed_button_pane_g9

0x0008,

0xf85f,	// (0x0002a545) toolbar2_fixed_button_pane_g

0xd6b5,	// (0x0002839b) cell_toolbar2_float_pane_ParamLimits

0xd6b5,	// (0x0002839b) cell_toolbar2_float_pane

0xd6c6,	// (0x000283ac) cell_toolbar2_float_pane_g1

0xd6ad,	// (0x00028393) toolbar2_fixed_button_pane_cp

0xc34d,	// (0x00027033) fep_vkb_accented_list_pane_ParamLimits

0xc34d,	// (0x00027033) fep_vkb_accented_list_pane

0x70a3,	// (0x00021d89) bg_popup_fep_shadow_pane_g9

0x93cb,	// (0x000240b1) bg_popup_fep_shadow_pane_cp3

0x888a,	// (0x00023570) list_accented_list_pane

0xd6cf,	// (0x000283b5) list_single_accented_list_pane_ParamLimits

0xd6cf,	// (0x000283b5) list_single_accented_list_pane

0x93cb,	// (0x000240b1) list_highlight_pane_cp10

0xd6e0,	// (0x000283c6) list_single_accented_list_pane_t1

0x6895,	// (0x0002157b) popup_slider_window_ParamLimits

0x6895,	// (0x0002157b) popup_slider_window

0xd31c,	// (0x00028002) aid_indentation_list_msg

0xd7a4,	// (0x0002848a) bg_popup_window_pane_cp19

0xd80c,	// (0x000284f2) popup_slider_window_g1

0xd828,	// (0x0002850e) popup_slider_window_g2

0xd844,	// (0x0002852a) popup_slider_window_g3

0x0005,

0xfcd3,	// (0x0002a9b9) popup_slider_window_g

0xd8aa,	// (0x00028590) popup_slider_window_t1

0xd91e,	// (0x00028604) small_volume_slider_vertical_pane

0xc21f,	// (0x00026f05) small_volume_slider_vertical_pane_g1

0xc21f,	// (0x00026f05) small_volume_slider_vertical_pane_g2

0xd93a,	// (0x00028620) small_volume_slider_vertical_pane_g3

0x0002,

0xfce5,	// (0x0002a9cb) small_volume_slider_vertical_pane_g

0x5aba,	// (0x000207a0) area_side_right_pane_ParamLimits

0x5aba,	// (0x000207a0) area_side_right_pane

0x71fa,	// (0x00021ee0) aid_size_side_button_ParamLimits

0x71fa,	// (0x00021ee0) aid_size_side_button

0x720e,	// (0x00021ef4) grid_sctrl_middle_pane_ParamLimits

0x720e,	// (0x00021ef4) grid_sctrl_middle_pane

0x722d,	// (0x00021f13) sctrl_sk_bottom_pane

0x723e,	// (0x00021f24) sctrl_sk_top_pane

0x7250,	// (0x00021f36) aid_touch_sctrl_top

0x812a,	// (0x00022e10) bg_sctrl_sk_pane_ParamLimits

0x812a,	// (0x00022e10) bg_sctrl_sk_pane

0x725d,	// (0x00021f43) sctrl_sk_top_pane_g1

0x726a,	// (0x00021f50) sctrl_sk_top_pane_t1

0x7250,	// (0x00021f36) aid_touch_sctrl_bottom

0x812a,	// (0x00022e10) bg_sctrl_sk_pane_cp_ParamLimits

0x812a,	// (0x00022e10) bg_sctrl_sk_pane_cp

0x7285,	// (0x00021f6b) sctrl_sk_bottom_pane_g1

0x726a,	// (0x00021f50) sctrl_sk_bottom_pane_t1

0x728e,	// (0x00021f74) cell_sctrl_middle_pane_ParamLimits

0x728e,	// (0x00021f74) cell_sctrl_middle_pane

0x72a9,	// (0x00021f8f) aid_touch_sctrl_middle_ParamLimits

0x72a9,	// (0x00021f8f) aid_touch_sctrl_middle

0x8736,	// (0x0002341c) bg_sctrl_middle_pane_ParamLimits

0x8736,	// (0x0002341c) bg_sctrl_middle_pane

0xc49d,	// (0x00027183) cell_sctrl_middle_pane_g1_ParamLimits

0xc49d,	// (0x00027183) cell_sctrl_middle_pane_g1

0x72bb,	// (0x00021fa1) cell_sctrl_middle_pane_g2_ParamLimits

0x72bb,	// (0x00021fa1) cell_sctrl_middle_pane_g2

0x0001,

0xfcf1,	// (0x0002a9d7) cell_sctrl_middle_pane_g_ParamLimits

0xfcf1,	// (0x0002a9d7) cell_sctrl_middle_pane_g

0x9c13,	// (0x000248f9) bg_sctrl_middle_pane_g1

0x9c1b,	// (0x00024901) bg_sctrl_middle_pane_g2

0x9c23,	// (0x00024909) bg_sctrl_middle_pane_g3

0x9c2b,	// (0x00024911) bg_sctrl_middle_pane_g4

0x9c33,	// (0x00024919) bg_sctrl_middle_pane_g5

0x9c3b,	// (0x00024921) bg_sctrl_middle_pane_g6

0x9c43,	// (0x00024929) bg_sctrl_middle_pane_g7

0x9c4b,	// (0x00024931) bg_sctrl_middle_pane_g8

0x0007,

0xfcf6,	// (0x0002a9dc) bg_sctrl_middle_pane_g

0x9c53,	// (0x00024939) bg_sctrl_middle_pane_g8_copy1

0x9c13,	// (0x000248f9) bg_sctrl_sk_pane_g1

0x9c1b,	// (0x00024901) bg_sctrl_sk_pane_g2

0x9c23,	// (0x00024909) bg_sctrl_sk_pane_g3

0x0008,

0xf85f,	// (0x0002a545) bg_sctrl_sk_pane_g

0x8665,	// (0x0002334b) aid_size_touch_scroll_bar

0x9c2b,	// (0x00024911) bg_sctrl_sk_pane_g4

0x9c33,	// (0x00024919) bg_sctrl_sk_pane_g5

0x9c3b,	// (0x00024921) bg_sctrl_sk_pane_g6

0x9c43,	// (0x00024929) bg_sctrl_sk_pane_g7

0x9c4b,	// (0x00024931) bg_sctrl_sk_pane_g8

0x9c53,	// (0x00024939) bg_sctrl_sk_pane_g9

0x64fe,	// (0x000211e4) popup_fep_china_hwr2_fs_candidate_window

0x6508,	// (0x000211ee) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6508,	// (0x000211ee) popup_fep_china_hwr2_fs_control_window

0xc49d,	// (0x00027183) sctrl_sk_top_pane_g2

0x0001,

0xfcec,	// (0x0002a9d2) sctrl_sk_top_pane_g

0xd943,	// (0x00028629) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd943,	// (0x00028629) aid_fep_china_hwr2_fs_cell

0xd955,	// (0x0002863b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd955,	// (0x0002863b) bg_popup_fep_shadow_pane_cp4

0xd96c,	// (0x00028652) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd96c,	// (0x00028652) bg_popup_fep_shadow_pane_cp5

0xd97e,	// (0x00028664) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd97e,	// (0x00028664) popup_fep_china_hwr2_fs_control_bar_grid

0xd98e,	// (0x00028674) popup_fep_china_hwr2_fs_control_funtion_grid

0xd996,	// (0x0002867c) aid_fep_china_hwr2_fs_candi_cell

0x7dad,	// (0x00022a93) bg_popup_fep_shadow_pane_cp6

0xd9a0,	// (0x00028686) popup_fep_china_hwr2_fs_candidate_grid

0xd9aa,	// (0x00028690) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9aa,	// (0x00028690) cell_fep_china_hwr2_fs_funtion_grid

0xc21f,	// (0x00026f05) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd9c2,	// (0x000286a8) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd9c2,	// (0x000286a8) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd9d0,	// (0x000286b6) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd9d0,	// (0x000286b6) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd07,	// (0x0002a9ed) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd07,	// (0x0002a9ed) cell_fep_china_hwr2_fs_funtion_grid_g

0xd9e6,	// (0x000286cc) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd9e6,	// (0x000286cc) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd9fb,	// (0x000286e1) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd9fb,	// (0x000286e1) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0c,	// (0x0002a9f2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0c,	// (0x0002a9f2) cell_fep_china_hwr2_fs_funtion_grid_t

0xda17,	// (0x000286fd) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda1f,	// (0x00028705) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda27,	// (0x0002870d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd11,	// (0x0002a9f7) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda2f,	// (0x00028715) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda2f,	// (0x00028715) cell_fep_china_hwr2_fs_candidate_grid

0xda48,	// (0x0002872e) popup_fep_china_hwr2_fs_candidate_grid_g20

0xda50,	// (0x00028736) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc21f,	// (0x00026f05) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc21f,	// (0x00026f05) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0002a817) cell_fep_china_hwr2_fs_candidate_grid_g

0xda58,	// (0x0002873e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9809,	// (0x000244ef) clock_nsta_pane_cp_24_ParamLimits

0x9809,	// (0x000244ef) clock_nsta_pane_cp_24

0x9887,	// (0x0002456d) indicator_nsta_pane_cp_24_ParamLimits

0x9887,	// (0x0002456d) indicator_nsta_pane_cp_24

0xa926,	// (0x0002560c) heading_pane_g1

0x0001,

0xf8c4,	// (0x0002a5aa) heading_pane_g

0xb35e,	// (0x00026044) grid_sct_catagory_button_pane

0xb38e,	// (0x00026074) scroll_pane_cp5_ParamLimits

0xbe1c,	// (0x00026b02) button_value_adjust_pane_cp5_ParamLimits

0xbe1c,	// (0x00026b02) button_value_adjust_pane_cp5

0xbefb,	// (0x00026be1) form2_midp_time_pane_ParamLimits

0xda66,	// (0x0002874c) cell_sct_catagory_button_pane_ParamLimits

0xda66,	// (0x0002874c) cell_sct_catagory_button_pane

0xc1e4,	// (0x00026eca) bg_button_pane_cp01_ParamLimits

0xc1e4,	// (0x00026eca) bg_button_pane_cp01

0xc21f,	// (0x00026f05) cell_sct_catagory_button_pane_g1

0x68d4,	// (0x000215ba) popup_tb_extension_window

0xda78,	// (0x0002875e) aid_size_cell_ext_ParamLimits

0xda78,	// (0x0002875e) aid_size_cell_ext

0x812a,	// (0x00022e10) bg_tb_trans_pane_cp1_ParamLimits

0x812a,	// (0x00022e10) bg_tb_trans_pane_cp1

0xda98,	// (0x0002877e) grid_tb_ext_pane_ParamLimits

0xda98,	// (0x0002877e) grid_tb_ext_pane

0xdac6,	// (0x000287ac) cell_tb_ext_pane_ParamLimits

0xdac6,	// (0x000287ac) cell_tb_ext_pane

0xdadd,	// (0x000287c3) cell_tb_ext_pane_g1_ParamLimits

0xdadd,	// (0x000287c3) cell_tb_ext_pane_g1

0xdafa,	// (0x000287e0) cell_tb_ext_pane_t1

0x812a,	// (0x00022e10) list_highlight_pane_cp11_ParamLimits

0x812a,	// (0x00022e10) list_highlight_pane_cp11

0x5d17,	// (0x000209fd) popup_uni_indicator_window_ParamLimits

0x5d17,	// (0x000209fd) popup_uni_indicator_window

0x8736,	// (0x0002341c) bg_popup_sub_pane_cp14

0xdb15,	// (0x000287fb) list_uniindi_pane

0xdb21,	// (0x00028807) uniindi_top_pane

0x812a,	// (0x00022e10) bg_uniindi_top_pane

0xdb40,	// (0x00028826) uniindi_top_pane_g1

0xdb56,	// (0x0002883c) uniindi_top_pane_g2

0x0003,

0xfd18,	// (0x0002a9fe) uniindi_top_pane_g

0xdb80,	// (0x00028866) uniindi_top_pane_t1

0xdbaa,	// (0x00028890) list_single_uniindi_pane_ParamLimits

0xdbaa,	// (0x00028890) list_single_uniindi_pane

0xc21f,	// (0x00026f05) bg_uniindi_top_pane_g1

0xdbbd,	// (0x000288a3) list_single_uniindi_pane_g1

0xdbd0,	// (0x000288b6) list_single_uniindi_pane_t1

0x7dad,	// (0x00022a93) control_bg_pane

0xdbf5,	// (0x000288db) bg_sctrl_sk_pane_cp1

0xdbfe,	// (0x000288e4) bg_sctrl_sk_pane_cp2

0xdc07,	// (0x000288ed) control_bg_pane_g1

0xdc10,	// (0x000288f6) control_bg_pane_g2

0x0001,

0xfd21,	// (0x0002aa07) control_bg_pane_g

0xbc6a,	// (0x00026950) cell_indicator_nsta_pane_g1_ParamLimits

0xbc78,	// (0x0002695e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0002a77b) cell_indicator_nsta_pane_g_ParamLimits

0x5651,	// (0x00020337) form2_midp_time_pane_t1_ParamLimits

0x84a7,	// (0x0002318d) main_idle_act4_pane_ParamLimits

0x84a7,	// (0x0002318d) main_idle_act4_pane

0x68d4,	// (0x000215ba) popup_tb_extension_window_ParamLimits

0xdab6,	// (0x0002879c) tb_ext_find_pane_ParamLimits

0xdab6,	// (0x0002879c) tb_ext_find_pane

0xdc19,	// (0x000288ff) ai_gene_pane_1_cp1

0x9512,	// (0x000241f8) ai_gene_pane_2_cp1

0xdc21,	// (0x00028907) list_single_idle_plugin_calendar_pane

0xdc2a,	// (0x00028910) list_single_idle_plugin_notification_pane

0xdc33,	// (0x00028919) list_single_idle_plugin_player_pane

0xdc3c,	// (0x00028922) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc3c,	// (0x00028922) list_single_idle_plugin_shortcut_pane

0xdc5e,	// (0x00028944) main_idle_act4_pane_t1

0xdc70,	// (0x00028956) main_idle_act4_pane_t2

0x0001,

0xfd26,	// (0x0002aa0c) main_idle_act4_pane_t

0xdc82,	// (0x00028968) middle_sk_idle_act4_pane_ParamLimits

0xdc82,	// (0x00028968) middle_sk_idle_act4_pane

0xdc98,	// (0x0002897e) popup_clock_digital_analogue_window_cp2

0xdcb2,	// (0x00028998) shortcut_wheel_idle_act4_pane_ParamLimits

0xdcb2,	// (0x00028998) shortcut_wheel_idle_act4_pane

0xc21f,	// (0x00026f05) shortcut_wheel_idle_act4_pane_g1

0xc21f,	// (0x00026f05) shortcut_wheel_idle_act4_pane_g2

0xc21f,	// (0x00026f05) shortcut_wheel_idle_act4_pane_g3

0xc21f,	// (0x00026f05) shortcut_wheel_idle_act4_pane_g4

0xc21f,	// (0x00026f05) shortcut_wheel_idle_act4_pane_g5

0xdcc6,	// (0x000289ac) shortcut_wheel_idle_act4_pane_g6

0xdcce,	// (0x000289b4) shortcut_wheel_idle_act4_pane_g7

0xdcd6,	// (0x000289bc) shortcut_wheel_idle_act4_pane_g8

0xdcde,	// (0x000289c4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2b,	// (0x0002aa11) shortcut_wheel_idle_act4_pane_g

0xc49d,	// (0x00027183) middle_sk_idle_act4_pane_g1_ParamLimits

0xc49d,	// (0x00027183) middle_sk_idle_act4_pane_g1

0xdd42,	// (0x00028a28) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd42,	// (0x00028a28) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4e,	// (0x0002aa34) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4e,	// (0x0002aa34) middle_sk_idle_act4_pane_g

0xdd4e,	// (0x00028a34) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd4e,	// (0x00028a34) middle_sk_idle_act4_pane_t1

0xdd6b,	// (0x00028a51) grid_ai_shortcut_pane_ParamLimits

0xdd6b,	// (0x00028a51) grid_ai_shortcut_pane

0xdd84,	// (0x00028a6a) list_highlight_pane_cp16_ParamLimits

0xdd84,	// (0x00028a6a) list_highlight_pane_cp16

0xdd91,	// (0x00028a77) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdd91,	// (0x00028a77) list_single_idle_plugin_shortcut_pane_g1

0xdd9d,	// (0x00028a83) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdd9d,	// (0x00028a83) list_single_idle_plugin_shortcut_pane_g2

0xddb5,	// (0x00028a9b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xddb5,	// (0x00028a9b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd53,	// (0x0002aa39) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd53,	// (0x0002aa39) list_single_idle_plugin_shortcut_pane_g

0xddc8,	// (0x00028aae) cell_ai_shortcut_pane_ParamLimits

0xddc8,	// (0x00028aae) cell_ai_shortcut_pane

0xddec,	// (0x00028ad2) cell_ai_shortcut_pane_g1_ParamLimits

0xddec,	// (0x00028ad2) cell_ai_shortcut_pane_g1

0xdc19,	// (0x000288ff) ai_gene_pane_1_cp2

0xde0e,	// (0x00028af4) ai_gene_pane_2_cp2

0xde16,	// (0x00028afc) list_highlight_pane_cp15

0xde1f,	// (0x00028b05) list_single_idle_plugin_calendar_pane_g1

0xde16,	// (0x00028afc) list_highlight_pane_cp17

0xde27,	// (0x00028b0d) list_single_idle_plugin_calendar_pane_g1_copy1

0xde2f,	// (0x00028b15) list_single_idle_plugin_player_pane_g1

0xb5b7,	// (0x0002629d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5a,	// (0x0002aa40) list_single_idle_plugin_player_pane_g

0xde37,	// (0x00028b1d) list_single_idle_plugin_player_pane_t1

0xde45,	// (0x00028b2b) list_single_idle_plugin_player_pane_t2

0xde53,	// (0x00028b39) list_single_idle_plugin_player_pane_t3

0xde61,	// (0x00028b47) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5f,	// (0x0002aa45) list_single_idle_plugin_player_pane_t

0xde6f,	// (0x00028b55) wait_bar_pane_cp15

0xde77,	// (0x00028b5d) grid_ai_notification_pane

0xb5b7,	// (0x0002629d) list_single_idle_plugin_notification_pane_g1

0xde80,	// (0x00028b66) cell_ai_notification_pane_ParamLimits

0xde80,	// (0x00028b66) cell_ai_notification_pane

0xde8d,	// (0x00028b73) cell_ai_notification_pane_g1

0xde95,	// (0x00028b7b) cell_ai_notification_pane_t1

0xdea3,	// (0x00028b89) tb_ext_find_button_pane

0xdeab,	// (0x00028b91) tb_ext_find_pane_g1

0xdeb3,	// (0x00028b99) tb_ext_find_pane_t1

0x8db8,	// (0x00023a9e) tb_ext_find_button_pane_g1

0xdec1,	// (0x00028ba7) tb_ext_find_button_pane_g2

0x0001,

0xfd68,	// (0x0002aa4e) tb_ext_find_button_pane_g

0xdc5e,	// (0x00028944) main_idle_act4_pane_t1_ParamLimits

0xdc70,	// (0x00028956) main_idle_act4_pane_t2_ParamLimits

0xfd26,	// (0x0002aa0c) main_idle_act4_pane_t_ParamLimits

0xdc98,	// (0x0002897e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdca6,	// (0x0002898c) sat_plugin_idle_act4_pane_ParamLimits

0xdca6,	// (0x0002898c) sat_plugin_idle_act4_pane

0xdeca,	// (0x00028bb0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdeca,	// (0x00028bb0) sat_plugin_idle_act4_pane_t1

0xdedd,	// (0x00028bc3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdedd,	// (0x00028bc3) sat_plugin_idle_act4_pane_t2

0xdef0,	// (0x00028bd6) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdef0,	// (0x00028bd6) sat_plugin_idle_act4_pane_t3

0xdf03,	// (0x00028be9) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf03,	// (0x00028be9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6d,	// (0x0002aa53) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6d,	// (0x0002aa53) sat_plugin_idle_act4_pane_t

0x5c52,	// (0x00020938) popup_battery_window_ParamLimits

0x5c52,	// (0x00020938) popup_battery_window

0x812a,	// (0x00022e10) bg_popup_sub_pane_cp25_ParamLimits

0x812a,	// (0x00022e10) bg_popup_sub_pane_cp25

0xdf16,	// (0x00028bfc) popup_battery_window_g1_ParamLimits

0xdf16,	// (0x00028bfc) popup_battery_window_g1

0xdf22,	// (0x00028c08) popup_battery_window_t1_ParamLimits

0xdf22,	// (0x00028c08) popup_battery_window_t1

0xdf34,	// (0x00028c1a) popup_battery_window_t2_ParamLimits

0xdf34,	// (0x00028c1a) popup_battery_window_t2

0x0001,

0xfd76,	// (0x0002aa5c) popup_battery_window_t_ParamLimits

0xfd76,	// (0x0002aa5c) popup_battery_window_t

0x93df,	// (0x000240c5) midp_canvas_pane_ParamLimits

0x9456,	// (0x0002413c) midp_keypad_pane_ParamLimits

0x9456,	// (0x0002413c) midp_keypad_pane

0x96ef,	// (0x000243d5) main_midp_pane_ParamLimits

0xbcd4,	// (0x000269ba) signal_pane_g2_cp_ParamLimits

0xdf51,	// (0x00028c37) aid_size_cell_midp_keypad_ParamLimits

0xdf51,	// (0x00028c37) aid_size_cell_midp_keypad

0xdf6b,	// (0x00028c51) midp_keyp_game_grid_pane_ParamLimits

0xdf6b,	// (0x00028c51) midp_keyp_game_grid_pane

0xdf8b,	// (0x00028c71) midp_keyp_rocker_pane_ParamLimits

0xdf8b,	// (0x00028c71) midp_keyp_rocker_pane

0xdfc4,	// (0x00028caa) midp_keyp_sk_left_pane_ParamLimits

0xdfc4,	// (0x00028caa) midp_keyp_sk_left_pane

0xe01e,	// (0x00028d04) midp_keyp_sk_right_pane_ParamLimits

0xe01e,	// (0x00028d04) midp_keyp_sk_right_pane

0x7dad,	// (0x00022a93) bg_button_pane_cp03

0xe078,	// (0x00028d5e) midp_keyp_sk_left_pane_g1

0x7dad,	// (0x00022a93) bg_button_pane_cp04

0xe078,	// (0x00028d5e) midp_keyp_sk_right_pane_g1

0xc21f,	// (0x00026f05) midp_keyp_rocker_pane_g1

0xe081,	// (0x00028d67) keyp_game_cell_pane_ParamLimits

0xe081,	// (0x00028d67) keyp_game_cell_pane

0x7dad,	// (0x00022a93) bg_button_pane_cp02

0xe094,	// (0x00028d7a) keyp_game_cell_pane_g1

0x5c96,	// (0x0002097c) popup_fep_vkb2_window_ParamLimits

0x5c96,	// (0x0002097c) popup_fep_vkb2_window

0x72d9,	// (0x00021fbf) aid_size_cell_vkb2_ParamLimits

0x72d9,	// (0x00021fbf) aid_size_cell_vkb2

0x732d,	// (0x00022013) popup_fep_vkb2_window_g1_ParamLimits

0x732d,	// (0x00022013) popup_fep_vkb2_window_g1

0x7375,	// (0x0002205b) vkb2_area_bottom_pane_ParamLimits

0x7375,	// (0x0002205b) vkb2_area_bottom_pane

0x73c1,	// (0x000220a7) vkb2_area_keypad_pane_ParamLimits

0x73c1,	// (0x000220a7) vkb2_area_keypad_pane

0x7403,	// (0x000220e9) vkb2_area_top_pane_ParamLimits

0x7403,	// (0x000220e9) vkb2_area_top_pane

0x747d,	// (0x00022163) vkb2_top_entry_pane_ParamLimits

0x747d,	// (0x00022163) vkb2_top_entry_pane

0x74a7,	// (0x0002218d) vkb2_top_grid_left_pane_ParamLimits

0x74a7,	// (0x0002218d) vkb2_top_grid_left_pane

0x74c5,	// (0x000221ab) vkb2_top_grid_right_pane_ParamLimits

0x74c5,	// (0x000221ab) vkb2_top_grid_right_pane

0x74e3,	// (0x000221c9) vkb2_cell_keypad_pane_ParamLimits

0x74e3,	// (0x000221c9) vkb2_cell_keypad_pane

0x75b4,	// (0x0002229a) vkb2_area_bottom_grid_pane_ParamLimits

0x75b4,	// (0x0002229a) vkb2_area_bottom_grid_pane

0x75da,	// (0x000222c0) vkb2_area_bottom_pane_g1_ParamLimits

0x75da,	// (0x000222c0) vkb2_area_bottom_pane_g1

0x75fe,	// (0x000222e4) vkb2_area_bottom_pane_g2_ParamLimits

0x75fe,	// (0x000222e4) vkb2_area_bottom_pane_g2

0x762c,	// (0x00022312) vkb2_area_bottom_pane_g3_ParamLimits

0x762c,	// (0x00022312) vkb2_area_bottom_pane_g3

0x0002,

0xfd7b,	// (0x0002aa61) vkb2_area_bottom_pane_g_ParamLimits

0xfd7b,	// (0x0002aa61) vkb2_area_bottom_pane_g

0x768d,	// (0x00022373) vkb2_top_cell_left_pane_ParamLimits

0x768d,	// (0x00022373) vkb2_top_cell_left_pane

0xe0a5,	// (0x00028d8b) vkb2_top_entry_pane_g1_ParamLimits

0xe0a5,	// (0x00028d8b) vkb2_top_entry_pane_g1

0xe0b3,	// (0x00028d99) vkb2_top_entry_pane_t1_ParamLimits

0xe0b3,	// (0x00028d99) vkb2_top_entry_pane_t1

0xe0e5,	// (0x00028dcb) vkb2_top_entry_pane_t2_ParamLimits

0xe0e5,	// (0x00028dcb) vkb2_top_entry_pane_t2

0xe117,	// (0x00028dfd) vkb2_top_entry_pane_t3_ParamLimits

0xe117,	// (0x00028dfd) vkb2_top_entry_pane_t3

0x0002,

0xfd82,	// (0x0002aa68) vkb2_top_entry_pane_t_ParamLimits

0xfd82,	// (0x0002aa68) vkb2_top_entry_pane_t

0x76da,	// (0x000223c0) vkb2_top_grid_right_pane_g1_ParamLimits

0x76da,	// (0x000223c0) vkb2_top_grid_right_pane_g1

0x76f0,	// (0x000223d6) vkb2_top_grid_right_pane_g2_ParamLimits

0x76f0,	// (0x000223d6) vkb2_top_grid_right_pane_g2

0x7708,	// (0x000223ee) vkb2_top_grid_right_pane_g3_ParamLimits

0x7708,	// (0x000223ee) vkb2_top_grid_right_pane_g3

0x7720,	// (0x00022406) vkb2_top_grid_right_pane_g4_ParamLimits

0x7720,	// (0x00022406) vkb2_top_grid_right_pane_g4

0x0003,

0xfd89,	// (0x0002aa6f) vkb2_top_grid_right_pane_g_ParamLimits

0xfd89,	// (0x0002aa6f) vkb2_top_grid_right_pane_g

0x7736,	// (0x0002241c) vkb2_top_cell_left_pane_g1

0x774d,	// (0x00022433) vkb2_cell_keypad_pane_g1_ParamLimits

0x774d,	// (0x00022433) vkb2_cell_keypad_pane_g1

0xe13b,	// (0x00028e21) vkb2_cell_keypad_pane_t1_ParamLimits

0xe13b,	// (0x00028e21) vkb2_cell_keypad_pane_t1

0x775b,	// (0x00022441) vkb2_cell_bottom_grid_pane_ParamLimits

0x775b,	// (0x00022441) vkb2_cell_bottom_grid_pane

0x7794,	// (0x0002247a) vkb2_cell_bottom_grid_pane_g1

0xdce6,	// (0x000289cc) aid_call2_pane_cp02

0xdcee,	// (0x000289d4) aid_call_pane_cp02

0xdcf6,	// (0x000289dc) clock_digital_number_pane_cp10

0xdcfe,	// (0x000289e4) clock_digital_number_pane_cp11

0xdd06,	// (0x000289ec) clock_digital_number_pane_cp12

0xdd0e,	// (0x000289f4) clock_digital_number_pane_cp13

0xdd16,	// (0x000289fc) clock_digital_separator_pane_cp10

0x8db8,	// (0x00023a9e) popup_clock_digital_analogue_window_cp2_g1

0x8db8,	// (0x00023a9e) popup_clock_digital_analogue_window_cp2_g2

0xdd1e,	// (0x00028a04) popup_clock_digital_analogue_window_cp2_g3

0x8db8,	// (0x00023a9e) popup_clock_digital_analogue_window_cp2_g4

0xdd1e,	// (0x00028a04) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3e,	// (0x0002aa24) popup_clock_digital_analogue_window_cp2_g

0xdd26,	// (0x00028a0c) popup_clock_digital_analogue_window_cp2_t1

0xdd34,	// (0x00028a1a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd49,	// (0x0002aa2f) popup_clock_digital_analogue_window_cp2_t

0xc21f,	// (0x00026f05) clock_digital_number_pane_cp10_g1

0xc21f,	// (0x00026f05) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0002a817) clock_digital_number_pane_cp10_g

0xc21f,	// (0x00026f05) clock_digital_separator_pane_cp10_g1

0xc21f,	// (0x00026f05) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0002a817) clock_digital_separator_pane_cp10_g

0xdb62,	// (0x00028848) uniindi_top_pane_g3

0xdb73,	// (0x00028859) uniindi_top_pane_g4

0x756e,	// (0x00022254) vkb2_row_keypad_pane_ParamLimits

0x756e,	// (0x00022254) vkb2_row_keypad_pane

0x77b0,	// (0x00022496) vkb2_cell_t_keypad_pane_ParamLimits

0x77b0,	// (0x00022496) vkb2_cell_t_keypad_pane

0x77c0,	// (0x000224a6) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x77c0,	// (0x000224a6) vkb2_cell_t_keypad_pane_cp08

0x77d3,	// (0x000224b9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x77d3,	// (0x000224b9) vkb2_cell_t_keypad_pane_cp09

0x77e7,	// (0x000224cd) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x77e7,	// (0x000224cd) vkb2_cell_t_keypad_pane_cp01

0x77f8,	// (0x000224de) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x77f8,	// (0x000224de) vkb2_cell_t_keypad_pane_cp02

0x7809,	// (0x000224ef) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7809,	// (0x000224ef) vkb2_cell_t_keypad_pane_cp03

0x781a,	// (0x00022500) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x781a,	// (0x00022500) vkb2_cell_t_keypad_pane_cp04

0x782b,	// (0x00022511) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x782b,	// (0x00022511) vkb2_cell_t_keypad_pane_cp05

0x783c,	// (0x00022522) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x783c,	// (0x00022522) vkb2_cell_t_keypad_pane_cp06

0x784d,	// (0x00022533) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x784d,	// (0x00022533) vkb2_cell_t_keypad_pane_cp07

0x785e,	// (0x00022544) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x785e,	// (0x00022544) vkb2_cell_t_keypad_pane_cp10

0xc49d,	// (0x00027183) vkb2_cell_t_keypad_pane_g1

0xe152,	// (0x00028e38) vkb2_cell_t_keypad_pane_t1

0x7dad,	// (0x00022a93) popup_grid_graphic2_window

0xe164,	// (0x00028e4a) aid_size_cell_graphic2_ParamLimits

0xe164,	// (0x00028e4a) aid_size_cell_graphic2

0xe19c,	// (0x00028e82) bg_popup_window_pane_cp21_ParamLimits

0xe19c,	// (0x00028e82) bg_popup_window_pane_cp21

0xe1aa,	// (0x00028e90) graphic2_pages_pane_ParamLimits

0xe1aa,	// (0x00028e90) graphic2_pages_pane

0xe1f0,	// (0x00028ed6) grid_graphic2_control_pane_ParamLimits

0xe1f0,	// (0x00028ed6) grid_graphic2_control_pane

0xe22e,	// (0x00028f14) grid_graphic2_pane_ParamLimits

0xe22e,	// (0x00028f14) grid_graphic2_pane

0xe2a2,	// (0x00028f88) cell_graphic2_pane

0x7dad,	// (0x00022a93) main_comp_mode_pane

0xd3d0,	// (0x000280b6) list_ai3_gene_pane_ParamLimits

0xd7a4,	// (0x0002848a) bg_popup_window_pane_cp19_ParamLimits

0xd7b0,	// (0x00028496) bg_touch_area_indi_pane_ParamLimits

0xd7b0,	// (0x00028496) bg_touch_area_indi_pane

0xd7c6,	// (0x000284ac) bg_touch_area_indi_pane_cp01_ParamLimits

0xd7c6,	// (0x000284ac) bg_touch_area_indi_pane_cp01

0xd7dc,	// (0x000284c2) bg_touch_area_indi_pane_cp02_ParamLimits

0xd7dc,	// (0x000284c2) bg_touch_area_indi_pane_cp02

0xd7f2,	// (0x000284d8) bg_touch_area_indi_pane_cp03_ParamLimits

0xd7f2,	// (0x000284d8) bg_touch_area_indi_pane_cp03

0xd80c,	// (0x000284f2) popup_slider_window_g1_ParamLimits

0xd828,	// (0x0002850e) popup_slider_window_g2_ParamLimits

0xd844,	// (0x0002852a) popup_slider_window_g3_ParamLimits

0xfcd3,	// (0x0002a9b9) popup_slider_window_g_ParamLimits

0xd8aa,	// (0x00028590) popup_slider_window_t1_ParamLimits

0xd91e,	// (0x00028604) small_volume_slider_vertical_pane_ParamLimits

0xe2a2,	// (0x00028f88) cell_graphic2_pane_ParamLimits

0xe2f1,	// (0x00028fd7) bg_button_pane_cp10_ParamLimits

0xe2f1,	// (0x00028fd7) bg_button_pane_cp10

0xe304,	// (0x00028fea) bg_button_pane_cp11_ParamLimits

0xe304,	// (0x00028fea) bg_button_pane_cp11

0xe317,	// (0x00028ffd) graphic2_pages_pane_g1_ParamLimits

0xe317,	// (0x00028ffd) graphic2_pages_pane_g1

0xe332,	// (0x00029018) graphic2_pages_pane_g2_ParamLimits

0xe332,	// (0x00029018) graphic2_pages_pane_g2

0x0001,

0xfd97,	// (0x0002aa7d) graphic2_pages_pane_g_ParamLimits

0xfd97,	// (0x0002aa7d) graphic2_pages_pane_g

0xe34a,	// (0x00029030) graphic2_pages_pane_t1_ParamLimits

0xe34a,	// (0x00029030) graphic2_pages_pane_t1

0xe362,	// (0x00029048) cell_graphic2_control_pane_ParamLimits

0xe362,	// (0x00029048) cell_graphic2_control_pane

0xe380,	// (0x00029066) cell_graphic2_pane_g1_ParamLimits

0xe380,	// (0x00029066) cell_graphic2_pane_g1

0xe38d,	// (0x00029073) cell_graphic2_pane_g2_ParamLimits

0xe38d,	// (0x00029073) cell_graphic2_pane_g2

0xe39a,	// (0x00029080) cell_graphic2_pane_g3_ParamLimits

0xe39a,	// (0x00029080) cell_graphic2_pane_g3

0xe3a7,	// (0x0002908d) cell_graphic2_pane_g4_ParamLimits

0xe3a7,	// (0x0002908d) cell_graphic2_pane_g4

0xe3b4,	// (0x0002909a) cell_graphic2_pane_g5_ParamLimits

0xe3b4,	// (0x0002909a) cell_graphic2_pane_g5

0x0004,

0xfd9c,	// (0x0002aa82) cell_graphic2_pane_g_ParamLimits

0xfd9c,	// (0x0002aa82) cell_graphic2_pane_g

0xe3cf,	// (0x000290b5) cell_graphic2_pane_t1_ParamLimits

0xe3cf,	// (0x000290b5) cell_graphic2_pane_t1

0x9c87,	// (0x0002496d) grid_highlight_pane_cp11_ParamLimits

0x9c87,	// (0x0002496d) grid_highlight_pane_cp11

0x812a,	// (0x00022e10) bg_button_pane_cp05

0xe406,	// (0x000290ec) cell_graphic2_control_pane_g1

0xc21f,	// (0x00026f05) bg_touch_area_indi_pane_g1

0xe42e,	// (0x00029114) aid_cmod_rocker_key_size

0xe438,	// (0x0002911e) aid_cmode_itu_key_size

0xe442,	// (0x00029128) main_cmode_video_pane

0xe46d,	// (0x00029153) main_comp_mode_itu_pane

0xe479,	// (0x0002915f) main_comp_mode_rocker_pane

0xe485,	// (0x0002916b) cell_cmode_rocker_pane_ParamLimits

0xe485,	// (0x0002916b) cell_cmode_rocker_pane

0xe497,	// (0x0002917d) cell_cmode_itu_pane_ParamLimits

0xe497,	// (0x0002917d) cell_cmode_itu_pane

0x8736,	// (0x0002341c) bg_button_pane_cp06_ParamLimits

0x8736,	// (0x0002341c) bg_button_pane_cp06

0xc49d,	// (0x00027183) cell_cmode_rocker_pane_g1_ParamLimits

0xc49d,	// (0x00027183) cell_cmode_rocker_pane_g1

0xd9c2,	// (0x000286a8) cell_cmode_rocker_pane_g2_ParamLimits

0xd9c2,	// (0x000286a8) cell_cmode_rocker_pane_g2

0x0001,

0xfdac,	// (0x0002aa92) cell_cmode_rocker_pane_g_ParamLimits

0xfdac,	// (0x0002aa92) cell_cmode_rocker_pane_g

0x7dad,	// (0x00022a93) bg_button_pane_cp07

0xe4ac,	// (0x00029192) cell_cmode_itu_pane_g1

0xe4b5,	// (0x0002919b) cell_cmode_itu_pane_t1

0xe4c3,	// (0x000291a9) cell_cmode_itu_pane_t2

0x0001,

0xfdb1,	// (0x0002aa97) cell_cmode_itu_pane_t

0xdbe5,	// (0x000288cb) aid_touch_ctrl_left

0xdbed,	// (0x000288d3) aid_touch_ctrl_right

0x7dad,	// (0x00022a93) compa_mode_pane

0xe4d1,	// (0x000291b7) aid_cmod_rocker_key_size_cp

0xe4db,	// (0x000291c1) aid_cmode_itu_key_size_cp

0xe4e5,	// (0x000291cb) compa_mode_pane_g1

0xe4ed,	// (0x000291d3) compa_mode_pane_g2

0xe4f5,	// (0x000291db) compa_mode_pane_g3

0x0002,

0xfdb6,	// (0x0002aa9c) compa_mode_pane_g

0xe4fd,	// (0x000291e3) main_comp_mode_itu_pane_cp

0xe505,	// (0x000291eb) main_comp_mode_rocker_pane_cp

0xe50d,	// (0x000291f3) cell_cmode_itu_pane_cp_ParamLimits

0xe50d,	// (0x000291f3) cell_cmode_itu_pane_cp

0xe522,	// (0x00029208) cell_cmode_rocker_pane_cp_ParamLimits

0xe522,	// (0x00029208) cell_cmode_rocker_pane_cp

0x8736,	// (0x0002341c) bg_button_pane_cp06_cp_ParamLimits

0x8736,	// (0x0002341c) bg_button_pane_cp06_cp

0xc49d,	// (0x00027183) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc49d,	// (0x00027183) cell_cmode_rocker_pane_g1_cp

0xc21f,	// (0x00026f05) cell_cmode_rocker_pane_g2_cp

0x7dad,	// (0x00022a93) bg_button_pane_cp07_cp

0xb15a,	// (0x00025e40) cell_cmode_itu_pane_g1_cp

0xe534,	// (0x0002921a) cell_cmode_itu_pane_t1_cp

0xe534,	// (0x0002921a) cell_cmode_itu_pane_t2_cp

0xb147,	// (0x00025e2d) settings_code_pane_cp2

0x7ea1,	// (0x00022b87) bg_popup_window_pane_cp3_ParamLimits

0x832a,	// (0x00023010) heading_pane_cp3_ParamLimits

0x8336,	// (0x0002301c) listscroll_popup_graphic_pane_ParamLimits

0x6e87,	// (0x00021b6d) fep_hwr_aid_pane_ParamLimits

0x7250,	// (0x00021f36) aid_touch_sctrl_top_ParamLimits

0x725d,	// (0x00021f43) sctrl_sk_top_pane_g1_ParamLimits

0xc49d,	// (0x00027183) sctrl_sk_top_pane_g2_ParamLimits

0xfcec,	// (0x0002a9d2) sctrl_sk_top_pane_g_ParamLimits

0x726a,	// (0x00021f50) sctrl_sk_top_pane_t1_ParamLimits

0x7250,	// (0x00021f36) aid_touch_sctrl_bottom_ParamLimits

0x726a,	// (0x00021f50) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb2e,	// (0x00028814) aid_area_touch_clock

0x7445,	// (0x0002212b) aid_vkb2_area_top_pane_cell_ParamLimits

0x7445,	// (0x0002212b) aid_vkb2_area_top_pane_cell

0x7590,	// (0x00022276) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7590,	// (0x00022276) aid_vkb2_area_bottom_pane_cell

0xe09d,	// (0x00028d83) popup_char_count_window

0xe542,	// (0x00029228) popup_char_count_window_g1

0xe54b,	// (0x00029231) popup_char_count_window_g2

0xe554,	// (0x0002923a) popup_char_count_window_g3

0x0002,

0xfdbd,	// (0x0002aaa3) popup_char_count_window_g

0xe55d,	// (0x00029243) popup_char_count_window_t1

0x730b,	// (0x00021ff1) popup_fep_char_preview_window_ParamLimits

0x730b,	// (0x00021ff1) popup_fep_char_preview_window

0x7463,	// (0x00022149) vkb2_top_candi_pane_ParamLimits

0x7463,	// (0x00022149) vkb2_top_candi_pane

0xe56b,	// (0x00029251) cell_vkb2_top_candi_pane_ParamLimits

0xe56b,	// (0x00029251) cell_vkb2_top_candi_pane

0xa2a6,	// (0x00024f8c) bg_popup_fep_char_preview_window_ParamLimits

0xa2a6,	// (0x00024f8c) bg_popup_fep_char_preview_window

0x7873,	// (0x00022559) popup_fep_char_preview_window_t1_ParamLimits

0x7873,	// (0x00022559) popup_fep_char_preview_window_t1

0xe5b8,	// (0x0002929e) bg_popup_fep_char_preview_window_g1

0xe5c0,	// (0x000292a6) bg_popup_fep_char_preview_window_g2

0xe5c8,	// (0x000292ae) bg_popup_fep_char_preview_window_g3

0xe5d0,	// (0x000292b6) bg_popup_fep_char_preview_window_g4

0xe5d8,	// (0x000292be) bg_popup_fep_char_preview_window_g5

0x78ad,	// (0x00022593) bg_popup_fep_char_preview_window_g6

0xe5e0,	// (0x000292c6) bg_popup_fep_char_preview_window_g7

0xe5e8,	// (0x000292ce) bg_popup_fep_char_preview_window_g8

0xe5f0,	// (0x000292d6) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc4,	// (0x0002aaaa) bg_popup_fep_char_preview_window_g

0xc49d,	// (0x00027183) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc49d,	// (0x00027183) cell_vkb2_top_candi_pane_g1

0xc89f,	// (0x00027585) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc89f,	// (0x00027585) cell_vkb2_top_candi_pane_g2

0xc8c0,	// (0x000275a6) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc8c0,	// (0x000275a6) cell_vkb2_top_candi_pane_g3

0x78b5,	// (0x0002259b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x78b5,	// (0x0002259b) cell_vkb2_top_candi_pane_g4

0xe44c,	// (0x00029132) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe44c,	// (0x00029132) cell_vkb2_top_candi_pane_g5

0xd9c2,	// (0x000286a8) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd9c2,	// (0x000286a8) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x0002aabd) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x0002aabd) cell_vkb2_top_candi_pane_g

0x78d6,	// (0x000225bc) cell_vkb2_top_candi_pane_t1

0x6ce7,	// (0x000219cd) aid_size_touch_slider_mark_ParamLimits

0x6ce7,	// (0x000219cd) aid_size_touch_slider_mark

0xe1e0,	// (0x00028ec6) grid_graphic2_catg_pane_ParamLimits

0xe1e0,	// (0x00028ec6) grid_graphic2_catg_pane

0xe27e,	// (0x00028f64) popup_grid_graphic2_window_t1_ParamLimits

0xe27e,	// (0x00028f64) popup_grid_graphic2_window_t1

0xe290,	// (0x00028f76) popup_grid_graphic2_window_t2_ParamLimits

0xe290,	// (0x00028f76) popup_grid_graphic2_window_t2

0x0001,

0xfd92,	// (0x0002aa78) popup_grid_graphic2_window_t_ParamLimits

0xfd92,	// (0x0002aa78) popup_grid_graphic2_window_t

0x812a,	// (0x00022e10) bg_button_pane_cp05_ParamLimits

0xe406,	// (0x000290ec) cell_graphic2_control_pane_g1_ParamLimits

0xe5f8,	// (0x000292de) cell_graphic2_catg_pane_ParamLimits

0xe5f8,	// (0x000292de) cell_graphic2_catg_pane

0x7dad,	// (0x00022a93) bg_button_pane_cp12

0xe60a,	// (0x000292f0) cell_graphic2_catg_pane_g1

0xdafa,	// (0x000287e0) cell_tb_ext_pane_t1_ParamLimits

0x76ad,	// (0x00022393) vkb2_top_cell_right_narrow_pane_ParamLimits

0x76ad,	// (0x00022393) vkb2_top_cell_right_narrow_pane

0x76c5,	// (0x000223ab) vkb2_top_cell_right_wide_pane_ParamLimits

0x76c5,	// (0x000223ab) vkb2_top_cell_right_wide_pane

0x6e79,	// (0x00021b5f) bg_vkb2_func_pane_ParamLimits

0x6e79,	// (0x00021b5f) bg_vkb2_func_pane

0x7736,	// (0x0002241c) vkb2_top_cell_left_pane_g1_ParamLimits

0x6e79,	// (0x00021b5f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6e79,	// (0x00021b5f) bg_vkb2_fuc_pane_cp03

0x7794,	// (0x0002247a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c1b,	// (0x00024901) bg_vkb2_func_pane_g1

0x9c23,	// (0x00024909) bg_vkb2_func_pane_g2

0x9c33,	// (0x00024919) bg_vkb2_func_pane_g3

0x9c2b,	// (0x00024911) bg_vkb2_func_pane_g4

0x9c3b,	// (0x00024921) bg_vkb2_func_pane_g5

0x9c43,	// (0x00024929) bg_vkb2_func_pane_g6

0x9c4b,	// (0x00024931) bg_vkb2_func_pane_g7

0x9c53,	// (0x00024939) bg_vkb2_func_pane_g8

0x9c13,	// (0x000248f9) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x0002aaca) bg_vkb2_func_pane_g

0x6e79,	// (0x00021b5f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6e79,	// (0x00021b5f) bg_vkb2_fuc_pane_cp01

0x7736,	// (0x0002241c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7736,	// (0x0002241c) vkb2_top_cell_right_wide_pane_g1

0x6e79,	// (0x00021b5f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6e79,	// (0x00021b5f) bg_vkb2_fuc_pane_cp02

0x7794,	// (0x0002247a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7794,	// (0x0002247a) vkb2_top_cell_right_narrow_pane_g1

0xd71e,	// (0x00028404) aid_touch_area_decrease_ParamLimits

0xd71e,	// (0x00028404) aid_touch_area_decrease

0xd742,	// (0x00028428) aid_touch_area_increase_ParamLimits

0xd742,	// (0x00028428) aid_touch_area_increase

0xd75a,	// (0x00028440) aid_touch_area_mute_ParamLimits

0xd75a,	// (0x00028440) aid_touch_area_mute

0xd776,	// (0x0002845c) aid_touch_area_slider_ParamLimits

0xd776,	// (0x0002845c) aid_touch_area_slider

0xd860,	// (0x00028546) popup_slider_window_g4_ParamLimits

0xd860,	// (0x00028546) popup_slider_window_g4

0xd878,	// (0x0002855e) popup_slider_window_g5_ParamLimits

0xd878,	// (0x0002855e) popup_slider_window_g5

0xd89a,	// (0x00028580) popup_slider_window_g6_ParamLimits

0xd89a,	// (0x00028580) popup_slider_window_g6

0xd8d8,	// (0x000285be) popup_slider_window_t2_ParamLimits

0xd8d8,	// (0x000285be) popup_slider_window_t2

0x0001,

0xfce0,	// (0x0002a9c6) popup_slider_window_t_ParamLimits

0xfce0,	// (0x0002a9c6) popup_slider_window_t

0xd8f0,	// (0x000285d6) slider_pane_ParamLimits

0xd8f0,	// (0x000285d6) slider_pane

0xe613,	// (0x000292f9) slider_pane_g1_ParamLimits

0xe613,	// (0x000292f9) slider_pane_g1

0xe627,	// (0x0002930d) slider_pane_g2_ParamLimits

0xe627,	// (0x0002930d) slider_pane_g2

0xe63d,	// (0x00029323) slider_pane_g3_ParamLimits

0xe63d,	// (0x00029323) slider_pane_g3

0x0003,

0x0005,	// (0x0001aceb) slider_pane_g_ParamLimits

0x0005,	// (0x0001aceb) slider_pane_g

0x6930,	// (0x00021616) popup_tb_float_extension_window_ParamLimits

0x6930,	// (0x00021616) popup_tb_float_extension_window

0xe669,	// (0x0002934f) aid_size_cell_tb_float_ext

0x7dad,	// (0x00022a93) bg_popup_sub_window_cp28

0xe675,	// (0x0002935b) grid_tb_float_ext_pane

0xe67f,	// (0x00029365) cell_tb_float_ext_pane_ParamLimits

0xe67f,	// (0x00029365) cell_tb_float_ext_pane

0xe699,	// (0x0002937f) cell_tb_float_ext_pane_g1

0xe6a2,	// (0x00029388) grid_highlight_pane_cp12

0x6fba,	// (0x00021ca0) cell_last_hwr_side_pane_ParamLimits

0x6fba,	// (0x00021ca0) cell_last_hwr_side_pane

0xc21f,	// (0x00026f05) cell_last_hwr_side_pane_g1

0xe6ab,	// (0x00029391) cell_last_hwr_side_pane_g2

0x0001,

0xfdf7,	// (0x0002aadd) cell_last_hwr_side_pane_g

0x765c,	// (0x00022342) vkb2_area_bottom_space_btn_pane_ParamLimits

0x765c,	// (0x00022342) vkb2_area_bottom_space_btn_pane

0xc49d,	// (0x00027183) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe152,	// (0x00028e38) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x78d6,	// (0x000225bc) cell_vkb2_top_candi_pane_t1_ParamLimits

0x78f5,	// (0x000225db) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x78f5,	// (0x000225db) vkb2_area_bottom_space_btn_pane_g1

0x792f,	// (0x00022615) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x792f,	// (0x00022615) vkb2_area_bottom_space_btn_pane_g2

0x7965,	// (0x0002264b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7965,	// (0x0002264b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfc,	// (0x0002aae2) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfc,	// (0x0002aae2) vkb2_area_bottom_space_btn_pane_g

0x6f2e,	// (0x00021c14) cel_fep_hwr_func_pane_ParamLimits

0x6f2e,	// (0x00021c14) cel_fep_hwr_func_pane

0x6f6a,	// (0x00021c50) cell_hwr_side_button_pane_ParamLimits

0x6f6a,	// (0x00021c50) cell_hwr_side_button_pane

0xdb2e,	// (0x00028814) aid_area_touch_clock_ParamLimits

0x812a,	// (0x00022e10) bg_uniindi_top_pane_ParamLimits

0xdb40,	// (0x00028826) uniindi_top_pane_g1_ParamLimits

0xdb56,	// (0x0002883c) uniindi_top_pane_g2_ParamLimits

0xdb62,	// (0x00028848) uniindi_top_pane_g3_ParamLimits

0xdb73,	// (0x00028859) uniindi_top_pane_g4_ParamLimits

0xfd18,	// (0x0002a9fe) uniindi_top_pane_g_ParamLimits

0xdb80,	// (0x00028866) uniindi_top_pane_t1_ParamLimits

0x812a,	// (0x00022e10) bg_vkb2_func_pane_cp01_ParamLimits

0x812a,	// (0x00022e10) bg_vkb2_func_pane_cp01

0xe6b4,	// (0x0002939a) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6b4,	// (0x0002939a) cel_fep_hwr_func_pane_g1

0x812a,	// (0x00022e10) bg_vkb2_func_pane_cp02_ParamLimits

0x812a,	// (0x00022e10) bg_vkb2_func_pane_cp02

0xe6b4,	// (0x0002939a) cell_hwr_side_button_pane_g1_ParamLimits

0xe6b4,	// (0x0002939a) cell_hwr_side_button_pane_g1

0x9a94,	// (0x0002477a) status_pane_g4_ParamLimits

0x9a94,	// (0x0002477a) status_pane_g4

0x9aae,	// (0x00024794) status_pane_t1

0xbf64,	// (0x00026c4a) form2_midp_gauge_slider_cont_pane

0xbf6c,	// (0x00026c52) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbf7e,	// (0x00026c64) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbf90,	// (0x00026c76) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0002a7ca) form2_midp_gauge_slider_pane_t_ParamLimits

0xbfa2,	// (0x00026c88) form2_midp_slider_pane_ParamLimits

0x72cb,	// (0x00021fb1) aid_size_cell_func_vkb2_ParamLimits

0x72cb,	// (0x00021fb1) aid_size_cell_func_vkb2

0xe655,	// (0x0002933b) slider_pane_g4_ParamLimits

0xe655,	// (0x0002933b) slider_pane_g4

0x79af,	// (0x00022695) form2_midp_gauge_slider_pane_t2_cp01

0x79bd,	// (0x000226a3) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x79bd,	// (0x000226a3) form2_midp_gauge_slider_pane_t3_cp01

0x79da,	// (0x000226c0) form2_midp_slider_pane_cp01

0x7dad,	// (0x00022a93) navi_smil_pane

0xe6ed,	// (0x000293d3) navi_smil_pane_g1

0xe6f5,	// (0x000293db) navi_smil_pane_t1

0xe6c2,	// (0x000293a8) form2_midp_slider_pane_g1

0xe6cb,	// (0x000293b1) form2_midp_slider_pane_g2

0xe6d3,	// (0x000293b9) form2_midp_slider_pane_g3

0xe6c2,	// (0x000293a8) form2_midp_slider_pane_g4

0xe6db,	// (0x000293c1) form2_midp_slider_pane_g5

0x0004,

0x001c,	// (0x0001ad02) form2_midp_slider_pane_g

0x799f,	// (0x00022685) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x799f,	// (0x00022685) vkb2_area_bottom_space_btn_pane_g4

0x98c3,	// (0x000245a9) lc0_navi_pane_ParamLimits

0x98c3,	// (0x000245a9) lc0_navi_pane

0x9939,	// (0x0002461f) lc0_stat_indi_pane_ParamLimits

0x9939,	// (0x0002461f) lc0_stat_indi_pane

0x9950,	// (0x00024636) ls0_title_pane_ParamLimits

0x9950,	// (0x00024636) ls0_title_pane

0x8736,	// (0x0002341c) bg_popup_sub_pane_cp14_ParamLimits

0xdb15,	// (0x000287fb) list_uniindi_pane_ParamLimits

0xdb21,	// (0x00028807) uniindi_top_pane_ParamLimits

0xdbbd,	// (0x000288a3) list_single_uniindi_pane_g1_ParamLimits

0xdbd0,	// (0x000288b6) list_single_uniindi_pane_t1_ParamLimits

0x79e3,	// (0x000226c9) lc0_stat_clock_pane_ParamLimits

0x79e3,	// (0x000226c9) lc0_stat_clock_pane

0xe703,	// (0x000293e9) lc0_stat_indi_pane_g1_ParamLimits

0xe703,	// (0x000293e9) lc0_stat_indi_pane_g1

0xe710,	// (0x000293f6) lc0_stat_indi_pane_g2_ParamLimits

0xe710,	// (0x000293f6) lc0_stat_indi_pane_g2

0x0001,

0x0027,	// (0x0001ad0d) lc0_stat_indi_pane_g_ParamLimits

0x0027,	// (0x0001ad0d) lc0_stat_indi_pane_g

0x79f0,	// (0x000226d6) lc0_uni_indicator_pane_ParamLimits

0x79f0,	// (0x000226d6) lc0_uni_indicator_pane

0xe71d,	// (0x00029403) ls0_title_pane_g1_ParamLimits

0xe71d,	// (0x00029403) ls0_title_pane_g1

0xe731,	// (0x00029417) ls0_title_pane_t1_ParamLimits

0xe731,	// (0x00029417) ls0_title_pane_t1

0x79fd,	// (0x000226e3) lc0_uni_indicator_pane_g1_ParamLimits

0x79fd,	// (0x000226e3) lc0_uni_indicator_pane_g1

0xe767,	// (0x0002944d) lc0_stat_clock_pane_t1

0x7dad,	// (0x00022a93) main_ai5_pane

0xe775,	// (0x0002945b) ai5_sk_pane_ParamLimits

0xe775,	// (0x0002945b) ai5_sk_pane

0xe782,	// (0x00029468) cell_ai5_widget_pane_ParamLimits

0xe782,	// (0x00029468) cell_ai5_widget_pane

0xe83d,	// (0x00029523) aid_size_cell_widget_grid

0xe853,	// (0x00029539) bg_ai5_widget_pane_ParamLimits

0xe853,	// (0x00029539) bg_ai5_widget_pane

0xe8cb,	// (0x000295b1) cell_ai5_widget_pane_g2

0xe8df,	// (0x000295c5) cell_ai5_widget_pane_g3

0xe8f9,	// (0x000295df) cell_ai5_widget_pane_g4

0xe909,	// (0x000295ef) cell_ai5_widget_pane_g5

0xe919,	// (0x000295ff) cell_ai5_widget_pane_g6

0xe925,	// (0x0002960b) cell_ai5_widget_pane_g7

0xe96d,	// (0x00029653) cell_ai5_widget_pane_t1_ParamLimits

0xe96d,	// (0x00029653) cell_ai5_widget_pane_t1

0xe98a,	// (0x00029670) cell_ai5_widget_pane_t2_ParamLimits

0xe98a,	// (0x00029670) cell_ai5_widget_pane_t2

0xe9a2,	// (0x00029688) cell_ai5_widget_pane_t3_ParamLimits

0xe9a2,	// (0x00029688) cell_ai5_widget_pane_t3

0xe9ba,	// (0x000296a0) cell_ai5_widget_pane_t4_ParamLimits

0xe9ba,	// (0x000296a0) cell_ai5_widget_pane_t4

0xe9e0,	// (0x000296c6) cell_ai5_widget_pane_t5_ParamLimits

0xe9e0,	// (0x000296c6) cell_ai5_widget_pane_t5

0xea00,	// (0x000296e6) cell_ai5_widget_pane_t6_ParamLimits

0xea00,	// (0x000296e6) cell_ai5_widget_pane_t6

0xea12,	// (0x000296f8) cell_ai5_widget_pane_t7_ParamLimits

0xea12,	// (0x000296f8) cell_ai5_widget_pane_t7

0xea2b,	// (0x00029711) cell_ai5_widget_pane_t8_ParamLimits

0xea2b,	// (0x00029711) cell_ai5_widget_pane_t8

0x0009,

0x0041,	// (0x0001ad27) cell_ai5_widget_pane_t_ParamLimits

0x0041,	// (0x0001ad27) cell_ai5_widget_pane_t

0xea8a,	// (0x00029770) grid_ai5_widget_pane

0x8736,	// (0x0002341c) highlight_cell_ai5_widget_pane_ParamLimits

0x8736,	// (0x0002341c) highlight_cell_ai5_widget_pane

0xeaa1,	// (0x00029787) ai5_sk_left_pane

0xeaab,	// (0x00029791) ai5_sk_middle_pane

0xeab5,	// (0x0002979b) ai5_sk_right_pane

0xeabf,	// (0x000297a5) bg_ai5_widget_pane_g1_ParamLimits

0xeabf,	// (0x000297a5) bg_ai5_widget_pane_g1

0xeacb,	// (0x000297b1) bg_ai5_widget_pane_g2_ParamLimits

0xeacb,	// (0x000297b1) bg_ai5_widget_pane_g2

0xead7,	// (0x000297bd) bg_ai5_widget_pane_g3_ParamLimits

0xead7,	// (0x000297bd) bg_ai5_widget_pane_g3

0xeae3,	// (0x000297c9) bg_ai5_widget_pane_g4_ParamLimits

0xeae3,	// (0x000297c9) bg_ai5_widget_pane_g4

0xeaef,	// (0x000297d5) bg_ai5_widget_pane_g5_ParamLimits

0xeaef,	// (0x000297d5) bg_ai5_widget_pane_g5

0xeafb,	// (0x000297e1) bg_ai5_widget_pane_g6_ParamLimits

0xeafb,	// (0x000297e1) bg_ai5_widget_pane_g6

0xeb07,	// (0x000297ed) bg_ai5_widget_pane_g7_ParamLimits

0xeb07,	// (0x000297ed) bg_ai5_widget_pane_g7

0xeb13,	// (0x000297f9) bg_ai5_widget_pane_g8_ParamLimits

0xeb13,	// (0x000297f9) bg_ai5_widget_pane_g8

0xeb1f,	// (0x00029805) bg_ai5_widget_pane_g9_ParamLimits

0xeb1f,	// (0x00029805) bg_ai5_widget_pane_g9

0x0008,

0x0056,	// (0x0001ad3c) bg_ai5_widget_pane_g_ParamLimits

0x0056,	// (0x0001ad3c) bg_ai5_widget_pane_g

0xeb51,	// (0x00029837) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb51,	// (0x00029837) cell_shortcut_ai5_widget_pane

0x93cb,	// (0x000240b1) bg_cell_shortcut_ai5_widget_pane

0xeb62,	// (0x00029848) cell_grid_ai5_widget_pane_g1

0x93cb,	// (0x000240b1) highlight_cell_shortcut_ai5_widget_pane

0x9c23,	// (0x00024909) ai5_sk_left_pane_g1

0xeb6b,	// (0x00029851) ai5_sk_left_pane_g2

0xeb73,	// (0x00029859) ai5_sk_left_pane_g3

0xeb7b,	// (0x00029861) ai5_sk_left_pane_g4

0x0003,

0xfe05,	// (0x0002aaeb) ai5_sk_left_pane_g

0xeb83,	// (0x00029869) ai5_sk_left_pane_t1

0x9c1b,	// (0x00024901) ai5_sk_right_pane_g1

0xeb91,	// (0x00029877) ai5_sk_right_pane_g2

0xeb99,	// (0x0002987f) ai5_sk_right_pane_g3

0xeba1,	// (0x00029887) ai5_sk_right_pane_g4

0x0003,

0xfe0e,	// (0x0002aaf4) ai5_sk_right_pane_g

0xeba9,	// (0x0002988f) ai5_sk_right_pane_t1

0x9c1b,	// (0x00024901) ai5_sk_middle_pane_g1

0x9c23,	// (0x00024909) ai5_sk_middle_pane_g2

0x9c3b,	// (0x00024921) ai5_sk_middle_pane_g3

0xeb99,	// (0x0002987f) ai5_sk_middle_pane_g4

0xeb73,	// (0x00029859) ai5_sk_middle_pane_g5

0xebb7,	// (0x0002989d) ai5_sk_middle_pane_g6

0xebbf,	// (0x000298a5) ai5_sk_middle_pane_g7

0x0006,

0xfe17,	// (0x0002aafd) ai5_sk_middle_pane_g

0x974f,	// (0x00024435) aid_touch_area_size_lc0_ParamLimits

0x974f,	// (0x00024435) aid_touch_area_size_lc0

0x70b9,	// (0x00021d9f) cell_hwr_candidate_pane_t1_ParamLimits

0x976b,	// (0x00024451) aid_touch_navi_pane

0x9a3e,	// (0x00024724) status_dt_navi_pane_ParamLimits

0x9a3e,	// (0x00024724) status_dt_navi_pane

0x9a4b,	// (0x00024731) status_dt_sta_pane_ParamLimits

0x9a4b,	// (0x00024731) status_dt_sta_pane

0xebc7,	// (0x000298ad) dt_sta_controll_pane

0xebd4,	// (0x000298ba) dt_sta_indi_pane

0xebe5,	// (0x000298cb) dt_sta_title_pane

0x812a,	// (0x00022e10) bg_dt_sta_indi_pane_ParamLimits

0x812a,	// (0x00022e10) bg_dt_sta_indi_pane

0xebf8,	// (0x000298de) dt_sta_battery_pane

0xec00,	// (0x000298e6) dt_sta_indi_pane_g1

0xec09,	// (0x000298ef) dt_sta_indi_pane_g2

0xec12,	// (0x000298f8) dt_sta_indi_pane_g3

0x0002,

0x008a,	// (0x0001ad70) dt_sta_indi_pane_g

0xec1b,	// (0x00029901) dt_sta_signal_pane

0x8736,	// (0x0002341c) bg_dt_sta_title_pane_ParamLimits

0x8736,	// (0x0002341c) bg_dt_sta_title_pane

0xec24,	// (0x0002990a) dt_sta_title_pane_g1

0xec2c,	// (0x00029912) dt_sta_title_pane_t1_ParamLimits

0xec2c,	// (0x00029912) dt_sta_title_pane_t1

0x7dad,	// (0x00022a93) bg_dt_sta_control_pane

0xec41,	// (0x00029927) dt_sta_controll_pane_g1

0xec4a,	// (0x00029930) bg_dt_sta_title_pane_g1

0xec53,	// (0x00029939) bg_dt_sta_title_pane_g2

0xec5c,	// (0x00029942) bg_dt_sta_title_pane_g3

0x0002,

0x0091,	// (0x0001ad77) bg_dt_sta_title_pane_g

0xc21f,	// (0x00026f05) bg_dt_sta_indi_pane_g1

0xec65,	// (0x0002994b) dt_sta_signal_pane_g1

0xec6d,	// (0x00029953) dt_sta_signal_pane_g2

0x0001,

0x0098,	// (0x0001ad7e) dt_sta_signal_pane_g

0xec75,	// (0x0002995b) dt_sta_battery_pane_g1

0xec7e,	// (0x00029964) dt_sta_battery_pane_t1

0xc21f,	// (0x00026f05) bg_dt_sta_control_pane_g1

0x8eca,	// (0x00023bb0) fep_china_uni_eep_pane

0x8ed2,	// (0x00023bb8) fep_china_uni_entry_pane_ParamLimits

0x8ee2,	// (0x00023bc8) popup_fep_china_uni_window_g1_ParamLimits

0x8ef2,	// (0x00023bd8) popup_fep_china_uni_window_g2_ParamLimits

0x8ef2,	// (0x00023bd8) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002a403) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002a403) popup_fep_china_uni_window_g

0xec8d,	// (0x00029973) fep_china_uni_eep_pane_g1

0xec95,	// (0x0002997b) fep_china_uni_eep_pane_t1

0xe6e4,	// (0x000293ca) aid_touch_area_size_smil_player

0x98bb,	// (0x000245a1) lc0_clock_pane

0x9aa2,	// (0x00024788) status_pane_g5_ParamLimits

0x9aa2,	// (0x00024788) status_pane_g5

0x65f5,	// (0x000212db) popup_keymap_window

0x9a60,	// (0x00024746) status_icon_pane

0xe8df,	// (0x000295c5) cell_ai5_widget_pane_g3_ParamLimits

0xe8f9,	// (0x000295df) cell_ai5_widget_pane_g4_ParamLimits

0xe909,	// (0x000295ef) cell_ai5_widget_pane_g5_ParamLimits

0xe931,	// (0x00029617) cell_ai5_widget_pane_g8_ParamLimits

0xe931,	// (0x00029617) cell_ai5_widget_pane_g8

0xe945,	// (0x0002962b) cell_ai5_widget_pane_g9_ParamLimits

0xe945,	// (0x0002962b) cell_ai5_widget_pane_g9

0xe959,	// (0x0002963f) cell_ai5_widget_pane_g10_ParamLimits

0xe959,	// (0x0002963f) cell_ai5_widget_pane_g10

0xeca4,	// (0x0002998a) status_icon_pane_g1

0x7dad,	// (0x00022a93) bg_popup_sub_pane_cp13

0xecac,	// (0x00029992) popup_keymap_window_t1

0x96a0,	// (0x00024386) control_pane_g6_ParamLimits

0x96a0,	// (0x00024386) control_pane_g6

0x96ad,	// (0x00024393) control_pane_g7_ParamLimits

0x96ad,	// (0x00024393) control_pane_g7

0x96ba,	// (0x000243a0) control_pane_g8_ParamLimits

0x96ba,	// (0x000243a0) control_pane_g8

0xebc7,	// (0x000298ad) dt_sta_controll_pane_ParamLimits

0xebd4,	// (0x000298ba) dt_sta_indi_pane_ParamLimits

0xebe5,	// (0x000298cb) dt_sta_title_pane_ParamLimits

0x866e,	// (0x00023354) aid_size_touch_scroll_bar_cale

0x5c66,	// (0x0002094c) popup_discreet_window_ParamLimits

0x5c66,	// (0x0002094c) popup_discreet_window

0x5cee,	// (0x000209d4) popup_sk_window

0xa2a6,	// (0x00024f8c) bg_popup_sub_pane_cp28_ParamLimits

0xa2a6,	// (0x00024f8c) bg_popup_sub_pane_cp28

0xecba,	// (0x000299a0) popup_discreet_window_g1_ParamLimits

0xecba,	// (0x000299a0) popup_discreet_window_g1

0xecda,	// (0x000299c0) popup_discreet_window_t1_ParamLimits

0xecda,	// (0x000299c0) popup_discreet_window_t1

0xecf8,	// (0x000299de) popup_discreet_window_t2_ParamLimits

0xecf8,	// (0x000299de) popup_discreet_window_t2

0x0002,

0x009d,	// (0x0001ad83) popup_discreet_window_t_ParamLimits

0x009d,	// (0x0001ad83) popup_discreet_window_t

0x7a11,	// (0x000226f7) popup_sk_window_g1

0x7a1b,	// (0x00022701) popup_sk_window_g2

0x0001,

0xfe26,	// (0x0002ab0c) popup_sk_window_g

0x7a23,	// (0x00022709) popup_sk_window_t1

0x7a31,	// (0x00022717) popup_sk_window_t1_copy1

0xe8cb,	// (0x000295b1) cell_ai5_widget_pane_g2_ParamLimits

0xea3d,	// (0x00029723) cell_ai5_widget_pane_t9_ParamLimits

0xea3d,	// (0x00029723) cell_ai5_widget_pane_t9

0x7dad,	// (0x00022a93) main_fep_fshwr2_pane

0x7a3f,	// (0x00022725) aid_fshwr2_btn_pane

0x7a4b,	// (0x00022731) aid_fshwr2_syb_pane

0x7a5d,	// (0x00022743) aid_fshwr2_txt_pane

0x7a69,	// (0x0002274f) fshwr2_func_candi_pane

0x7a85,	// (0x0002276b) fshwr2_hwr_syb_pane

0x7a9f,	// (0x00022785) fshwr2_icf_pane

0x7dad,	// (0x00022a93) fshwr2_icf_bg_pane

0x7acb,	// (0x000227b1) fshwr2_icf_pane_t1_ParamLimits

0x7acb,	// (0x000227b1) fshwr2_icf_pane_t1

0x8db8,	// (0x00023a9e) fshwr2_func_candi_pane_g1

0xed4a,	// (0x00029a30) fshwr2_func_candi_row_pane_ParamLimits

0xed4a,	// (0x00029a30) fshwr2_func_candi_row_pane

0x7ae3,	// (0x000227c9) cell_fshwr2_syb_pane_ParamLimits

0x7ae3,	// (0x000227c9) cell_fshwr2_syb_pane

0xe6b4,	// (0x0002939a) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe6b4,	// (0x0002939a) fshwr2_hwr_syb_pane_g1

0x7dad,	// (0x00022a93) bg_popup_call_pane_cp01

0x7b04,	// (0x000227ea) fshwr2_func_candi_cell_pane_ParamLimits

0x7b04,	// (0x000227ea) fshwr2_func_candi_cell_pane

0xed6f,	// (0x00029a55) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed6f,	// (0x00029a55) fshwr2_func_candi_cell_bg_pane

0x7b4f,	// (0x00022835) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7b4f,	// (0x00022835) fshwr2_func_candi_cell_pane_g1

0x7b77,	// (0x0002285d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7b77,	// (0x0002285d) fshwr2_func_candi_cell_pane_t1

0x7dad,	// (0x00022a93) bg_button_pane_cp08

0xed7b,	// (0x00029a61) cell_fshwr2_syb_bg_pane

0x7b8a,	// (0x00022870) cell_fshwr2_syb_bg_pane_g1

0x7b9e,	// (0x00022884) cell_fshwr2_syb_bg_pane_t1

0x8736,	// (0x0002341c) main_tmo_pane

0xadb5,	// (0x00025a9b) uni_indicator_pane_g1_ParamLimits

0xadc8,	// (0x00025aae) uni_indicator_pane_g2_ParamLimits

0xadda,	// (0x00025ac0) uni_indicator_pane_g3_ParamLimits

0xade9,	// (0x00025acf) uni_indicator_pane_g4_ParamLimits

0xade9,	// (0x00025acf) uni_indicator_pane_g4

0xadfd,	// (0x00025ae3) uni_indicator_pane_g5_ParamLimits

0xadfd,	// (0x00025ae3) uni_indicator_pane_g5

0xadfd,	// (0x00025ae3) uni_indicator_pane_g6_ParamLimits

0xadfd,	// (0x00025ae3) uni_indicator_pane_g6

0xf91a,	// (0x0002a600) uni_indicator_pane_g_ParamLimits

0xd6fa,	// (0x000283e0) popup_tmo_note_window_ParamLimits

0xd6fa,	// (0x000283e0) popup_tmo_note_window

0x8736,	// (0x0002341c) fshwr2_bg_pane

0x7b68,	// (0x0002284e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7b68,	// (0x0002284e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe2b,	// (0x0002ab11) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe2b,	// (0x0002ab11) fshwr2_func_candi_cell_pane_g

0xc21f,	// (0x00026f05) bg_popup_window_pane_cp01

0x7bb4,	// (0x0002289a) bg_popup_window_pane_g1_cp01

0xed87,	// (0x00029a6d) bg_popup_window_pane_cp22_ParamLimits

0xed87,	// (0x00029a6d) bg_popup_window_pane_cp22

0xed95,	// (0x00029a7b) listscroll_tmo_link_pane_ParamLimits

0xed95,	// (0x00029a7b) listscroll_tmo_link_pane

0xedd5,	// (0x00029abb) popup_tmo_note_window_g1_ParamLimits

0xedd5,	// (0x00029abb) popup_tmo_note_window_g1

0xede2,	// (0x00029ac8) tmo_note_info_pane_ParamLimits

0xede2,	// (0x00029ac8) tmo_note_info_pane

0xedfc,	// (0x00029ae2) list_tmo_note_info_pane_g1_ParamLimits

0xedfc,	// (0x00029ae2) list_tmo_note_info_pane_g1

0xee13,	// (0x00029af9) list_tmo_note_info_pane_g2_ParamLimits

0xee13,	// (0x00029af9) list_tmo_note_info_pane_g2

0x0001,

0x00ae,	// (0x0001ad94) list_tmo_note_info_pane_g_ParamLimits

0x00ae,	// (0x0001ad94) list_tmo_note_info_pane_g

0xee2f,	// (0x00029b15) list_tmo_note_info_text_pane_ParamLimits

0xee2f,	// (0x00029b15) list_tmo_note_info_text_pane

0xeeb0,	// (0x00029b96) list_tmo_link_pane

0xeebd,	// (0x00029ba3) scroll_pane_cp20

0xeeca,	// (0x00029bb0) list_single_tmo_link_pane_ParamLimits

0xeeca,	// (0x00029bb0) list_single_tmo_link_pane

0xeeda,	// (0x00029bc0) list_single_tmo_link_pane_t1

0xeee8,	// (0x00029bce) list_tmo_note_info_text_pane_t1_ParamLimits

0xeee8,	// (0x00029bce) list_tmo_note_info_text_pane_t1

0x87ed,	// (0x000234d3) aid_size_touch_scroll_bar_cp01_ParamLimits

0x87ed,	// (0x000234d3) aid_size_touch_scroll_bar_cp01

0x4e7a,	// (0x0001fb60) aid_size_touch_slider_marker

0x5cd6,	// (0x000209bc) popup_settings_window_ParamLimits

0x5cd6,	// (0x000209bc) popup_settings_window

0x5049,	// (0x0001fd2f) popup_candi_list_indi_window

0x976b,	// (0x00024451) aid_touch_navi_pane_ParamLimits

0x7224,	// (0x00021f0a) rs_clock_indi_pane

0x722d,	// (0x00021f13) sctrl_sk_bottom_pane_ParamLimits

0x723e,	// (0x00021f24) sctrl_sk_top_pane_ParamLimits

0x7325,	// (0x0002200b) popup_fep_tooltip_window

0xe83d,	// (0x00029523) aid_size_cell_widget_grid_ParamLimits

0xe8b6,	// (0x0002959c) cell_ai5_widget_pane_g1_ParamLimits

0xe8b6,	// (0x0002959c) cell_ai5_widget_pane_g1

0xe919,	// (0x000295ff) cell_ai5_widget_pane_g6_ParamLimits

0xe925,	// (0x0002960b) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x002c,	// (0x0001ad12) cell_ai5_widget_pane_g_ParamLimits

0x002c,	// (0x0001ad12) cell_ai5_widget_pane_g

0xea6c,	// (0x00029752) cell_ai5_widget_pane_t10_ParamLimits

0xea6c,	// (0x00029752) cell_ai5_widget_pane_t10

0xea8a,	// (0x00029770) grid_ai5_widget_pane_ParamLimits

0xeb2b,	// (0x00029811) cell_contacts_ai5_widget_pane_ParamLimits

0xeb2b,	// (0x00029811) cell_contacts_ai5_widget_pane

0xed0d,	// (0x000299f3) popup_discreet_window_t3_ParamLimits

0xed0d,	// (0x000299f3) popup_discreet_window_t3

0x7ab7,	// (0x0002279d) popup_fshwr2_char_preview_window_ParamLimits

0x7ab7,	// (0x0002279d) popup_fshwr2_char_preview_window

0xee4d,	// (0x00029b33) tmo_note_info_pane_t1

0xee62,	// (0x00029b48) tmo_note_info_pane_t2

0xee77,	// (0x00029b5d) tmo_note_info_pane_t3

0xee8c,	// (0x00029b72) tmo_note_info_pane_t4

0xee9e,	// (0x00029b84) tmo_note_info_pane_t5

0x0004,

0x00b3,	// (0x0001ad99) tmo_note_info_pane_t

0xeeb0,	// (0x00029b96) list_tmo_link_pane_ParamLimits

0xeebd,	// (0x00029ba3) scroll_pane_cp20_ParamLimits

0x7dad,	// (0x00022a93) bg_popup_fep_char_preview_window_cp01

0xef01,	// (0x00029be7) popup_fshwr2_char_preview_window_t1

0xef0f,	// (0x00029bf5) popup_candi_list_indi_window_g1

0xef18,	// (0x00029bfe) bg_cell_contacts_ai5_widget_pane

0xef24,	// (0x00029c0a) cell_contacts_ai5_widget_pane_g1

0xc8ff,	// (0x000275e5) cell_contacts_ai5_widget_pane_g2

0xef39,	// (0x00029c1f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe30,	// (0x0002ab16) cell_contacts_ai5_widget_pane_g

0xef45,	// (0x00029c2b) cell_contacts_ai5_widget_pane_t1

0x8736,	// (0x0002341c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefbc,	// (0x00029ca2) settings_container_pane

0x93cb,	// (0x000240b1) listscroll_set_pane_copy1

0xb923,	// (0x00026609) scroll_pane_cp121_copy1

0xa03f,	// (0x00024d25) set_content_pane_copy1

0xefc8,	// (0x00029cae) aid_height_set_list_copy1_ParamLimits

0xefc8,	// (0x00029cae) aid_height_set_list_copy1

0xaff5,	// (0x00025cdb) aid_size_parent_copy1_ParamLimits

0xaff5,	// (0x00025cdb) aid_size_parent_copy1

0xefd4,	// (0x00029cba) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefd4,	// (0x00029cba) button_value_adjust_pane_cp6_copy1

0x96ef,	// (0x000243d5) list_highlight_pane_cp2_copy1_ParamLimits

0x96ef,	// (0x000243d5) list_highlight_pane_cp2_copy1

0xefe8,	// (0x00029cce) list_set_pane_copy1_ParamLimits

0xefe8,	// (0x00029cce) list_set_pane_copy1

0xef57,	// (0x00029c3d) main_pane_set_t1_copy1_ParamLimits

0xef57,	// (0x00029c3d) main_pane_set_t1_copy1

0xef91,	// (0x00029c77) main_pane_set_t2_copy1_ParamLimits

0xef91,	// (0x00029c77) main_pane_set_t2_copy1

0xf095,	// (0x00029d7b) main_pane_set_t3_copy1

0xf0a3,	// (0x00029d89) main_pane_set_t4_copy1

0xefb0,	// (0x00029c96) set_content_pane_g1_copy1_ParamLimits

0xefb0,	// (0x00029c96) set_content_pane_g1_copy1

0xf0b1,	// (0x00029d97) setting_code_pane_copy1

0xf0b9,	// (0x00029d9f) setting_slider_graphic_pane_copy1

0xf0b9,	// (0x00029d9f) setting_slider_pane_copy1

0xf0b9,	// (0x00029d9f) setting_text_pane_copy1

0xf0b9,	// (0x00029d9f) setting_volume_pane_copy1

0xf0b1,	// (0x00029d97) settings_code_pane_cp2_copy1

0xf0c1,	// (0x00029da7) settings_code_pane_cp_copy1_ParamLimits

0xf0c1,	// (0x00029da7) settings_code_pane_cp_copy1

0x7bbd,	// (0x000228a3) volume_set_pane_copy1

0xf0d5,	// (0x00029dbb) volume_set_pane_g10_copy1

0xf0dd,	// (0x00029dc3) volume_set_pane_g1_copy1

0xf0e5,	// (0x00029dcb) volume_set_pane_g2_copy1

0xf0ed,	// (0x00029dd3) volume_set_pane_g3_copy1

0xf0f5,	// (0x00029ddb) volume_set_pane_g4_copy1

0xf0fd,	// (0x00029de3) volume_set_pane_g5_copy1

0xf105,	// (0x00029deb) volume_set_pane_g6_copy1

0xf10d,	// (0x00029df3) volume_set_pane_g7_copy1

0xf115,	// (0x00029dfb) volume_set_pane_g8_copy1

0xf11d,	// (0x00029e03) volume_set_pane_g9_copy1

0x7ea1,	// (0x00022b87) bg_set_opt_pane_cp_copy1_ParamLimits

0x7ea1,	// (0x00022b87) bg_set_opt_pane_cp_copy1

0x7bc5,	// (0x000228ab) setting_slider_pane_t1_copy1_ParamLimits

0x7bc5,	// (0x000228ab) setting_slider_pane_t1_copy1

0x7be3,	// (0x000228c9) setting_slider_pane_t2_copy1_ParamLimits

0x7be3,	// (0x000228c9) setting_slider_pane_t2_copy1

0x7bfd,	// (0x000228e3) setting_slider_pane_t3_copy1_ParamLimits

0x7bfd,	// (0x000228e3) setting_slider_pane_t3_copy1

0x7c15,	// (0x000228fb) slider_set_pane_copy1_ParamLimits

0x7c15,	// (0x000228fb) slider_set_pane_copy1

0x878e,	// (0x00023474) set_opt_bg_pane_g1_copy2

0x8796,	// (0x0002347c) set_opt_bg_pane_g2_copy2

0xf125,	// (0x00029e0b) set_opt_bg_pane_g3_copy2

0x87a6,	// (0x0002348c) set_opt_bg_pane_g4_copy2

0x87ae,	// (0x00023494) set_opt_bg_pane_g5_copy2

0x87b6,	// (0x0002349c) set_opt_bg_pane_g6_copy2

0xf12f,	// (0x00029e15) set_opt_bg_pane_g7_copy2

0xf137,	// (0x00029e1d) set_opt_bg_pane_g8_copy2

0xf141,	// (0x00029e27) set_opt_bg_pane_g9_copy2

0x7c2b,	// (0x00022911) aid_size_touch_slider_mark_copy1_ParamLimits

0x7c2b,	// (0x00022911) aid_size_touch_slider_mark_copy1

0xf14b,	// (0x00029e31) slider_set_pane_g1_copy1

0x7c3f,	// (0x00022925) slider_set_pane_g2_copy1

0x6d07,	// (0x000219ed) slider_set_pane_g3_copy1_ParamLimits

0x6d07,	// (0x000219ed) slider_set_pane_g3_copy1

0x6d1b,	// (0x00021a01) slider_set_pane_g4_copy1_ParamLimits

0x6d1b,	// (0x00021a01) slider_set_pane_g4_copy1

0x6d33,	// (0x00021a19) slider_set_pane_g5_copy1_ParamLimits

0x6d33,	// (0x00021a19) slider_set_pane_g5_copy1

0x6d07,	// (0x000219ed) slider_set_pane_g6_copy1_ParamLimits

0x6d07,	// (0x000219ed) slider_set_pane_g6_copy1

0x7c47,	// (0x0002292d) slider_set_pane_g7_copy1_ParamLimits

0x7c47,	// (0x0002292d) slider_set_pane_g7_copy1

0x7dc1,	// (0x00022aa7) bg_set_opt_pane_cp2_copy1

0xf154,	// (0x00029e3a) setting_slider_graphic_pane_g1_copy1

0xf15d,	// (0x00029e43) setting_slider_graphic_pane_t1_copy1

0xf16d,	// (0x00029e53) setting_slider_graphic_pane_t2_copy1

0xf17d,	// (0x00029e63) slider_set_pane_cp_copy1

0xf18d,	// (0x00029e73) input_focus_pane_cp1_copy1

0xf196,	// (0x00029e7c) list_set_text_pane_copy1

0xf19e,	// (0x00029e84) setting_text_pane_g1_copy1

0x4880,	// (0x0001f566) set_text_pane_t1_copy1

0xf18d,	// (0x00029e73) input_focus_pane_cp2_copy1

0xf19e,	// (0x00029e84) setting_code_pane_g1_copy1

0xf1a7,	// (0x00029e8d) setting_code_pane_t1_copy1

0xf1b5,	// (0x00029e9b) list_set_graphic_pane_copy1

0x7dc1,	// (0x00022aa7) bg_set_opt_pane_cp4_copy1

0x90c6,	// (0x00023dac) list_set_graphic_pane_g1_copy1_ParamLimits

0x90c6,	// (0x00023dac) list_set_graphic_pane_g1_copy1

0xf1c8,	// (0x00029eae) list_set_graphic_pane_g2_copy1

0x90de,	// (0x00023dc4) list_set_graphic_pane_t1_copy1_ParamLimits

0x90de,	// (0x00023dc4) list_set_graphic_pane_t1_copy1

0xc21f,	// (0x00026f05) rs_clock_indi_pane_g1

0xf1d0,	// (0x00029eb6) rs_clock_indi_pane_t1

0xf1de,	// (0x00029ec4) rs_indi_pane

0xf1e6,	// (0x00029ecc) rs_indi_pane_g1

0xf1ef,	// (0x00029ed5) rs_indi_pane_g2

0xf1f8,	// (0x00029ede) rs_indi_pane_g3

0x0002,

0x00c5,	// (0x0001adab) rs_indi_pane_g

0x93cb,	// (0x000240b1) bg_popup_preview_window_pane_cp03

0xf201,	// (0x00029ee7) popup_fep_tooltip_window_t1

0xce9b,	// (0x00027b81) popup_note2_window_g2_ParamLimits

0xce9b,	// (0x00027b81) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0002a936) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0002a936) popup_note2_window_g

0xd396,	// (0x0002807c) bg_popup_sub_pane_cp11_ParamLimits

0xd3a3,	// (0x00028089) cell_ai3_links_pane_g1_ParamLimits

0xd3ba,	// (0x000280a0) cell_ai3_links_pane_t1

0x4880,	// (0x0001f566) set_text_pane_t1_copy1_ParamLimits

0x92dc,	// (0x00023fc2) cell_graphic_popup_pane_cp2_ParamLimits

0x92dc,	// (0x00023fc2) cell_graphic_popup_pane_cp2

0xf20f,	// (0x00029ef5) cell_graphic_popup_pane_g1_cp2

0x8481,	// (0x00023167) cell_graphic_popup_pane_g2_cp2

0xf217,	// (0x00029efd) cell_graphic_popup_pane_g3_cp2

0xf21f,	// (0x00029f05) cell_graphic_popup_pane_t2_cp2

0x8492,	// (0x00023178) grid_highlight_pane_cp3_cp2

0x8ad3,	// (0x000237b9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8736,	// (0x0002341c) main_tmo_pane_ParamLimits

0xd6ee,	// (0x000283d4) popup_tmo_big_image_note_window

0xe8a5,	// (0x0002958b) cell_ai5_widget_list_pane

0xe8ad,	// (0x00029593) cell_ai5_widget_lrg_icon_pane

0xee4d,	// (0x00029b33) tmo_note_info_pane_t1_ParamLimits

0xee62,	// (0x00029b48) tmo_note_info_pane_t2_ParamLimits

0xee77,	// (0x00029b5d) tmo_note_info_pane_t3_ParamLimits

0xee8c,	// (0x00029b72) tmo_note_info_pane_t4_ParamLimits

0xee9e,	// (0x00029b84) tmo_note_info_pane_t5_ParamLimits

0x00b3,	// (0x0001ad99) tmo_note_info_pane_t_ParamLimits

0xefbc,	// (0x00029ca2) settings_container_pane_ParamLimits

0xf185,	// (0x00029e6b) indicator_popup_pane_cp5

0xf185,	// (0x00029e6b) indicator_popup_pane_cp6

0xf1b5,	// (0x00029e9b) list_set_graphic_pane_copy1_ParamLimits

0x7dad,	// (0x00022a93) bg_popup_window_pane_cp23

0xf22d,	// (0x00029f13) popup_tmo_big_image_note_window_g1

0xf237,	// (0x00029f1d) popup_tmo_big_image_note_window_t1

0xf247,	// (0x00029f2d) popup_tmo_big_image_note_window_t2

0xf257,	// (0x00029f3d) popup_tmo_big_image_note_window_t3

0x0002,

0x00cc,	// (0x0001adb2) popup_tmo_big_image_note_window_t

0xc21f,	// (0x00026f05) cell_ai5_widget_lrg_icon_pane_g1

0xf267,	// (0x00029f4d) cell_ai5_widget_lrg_icon_pane_t1

0xf275,	// (0x00029f5b) cell_ai5_widget_list_row_pane_ParamLimits

0xf275,	// (0x00029f5b) cell_ai5_widget_list_row_pane

0xf28c,	// (0x00029f72) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf28c,	// (0x00029f72) cell_ai5_widget_list_row_pane_g1

0xf299,	// (0x00029f7f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf299,	// (0x00029f7f) cell_ai5_widget_list_row_pane_t1

0xf2ca,	// (0x00029fb0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2ca,	// (0x00029fb0) cell_ai5_widget_list_row_pane_t2

0x0002,

0x00d3,	// (0x0001adb9) cell_ai5_widget_list_row_pane_t_ParamLimits

0x00d3,	// (0x0001adb9) cell_ai5_widget_list_row_pane_t

0x7dad,	// (0x00022a93) main_fep_vtchi_ss_pane

0xf312,	// (0x00029ff8) popup_fep_char_pre_window

0xf31a,	// (0x0002a000) popup_fep_ituss_window

0xf346,	// (0x0002a02c) popup_fep_vkbss_window

0xf370,	// (0x0002a056) grid_vkbss_keypad_pane_ParamLimits

0xf370,	// (0x0002a056) grid_vkbss_keypad_pane

0xf380,	// (0x0002a066) ituss_keypad_pane

0x7c69,	// (0x0002294f) aid_vkbss_key_offset_ParamLimits

0x7c69,	// (0x0002294f) aid_vkbss_key_offset

0x7c75,	// (0x0002295b) cell_vkbss_key_pane_ParamLimits

0x7c75,	// (0x0002295b) cell_vkbss_key_pane

0xf38f,	// (0x0002a075) bg_cell_vkbss_key_g1_ParamLimits

0xf38f,	// (0x0002a075) bg_cell_vkbss_key_g1

0xf39b,	// (0x0002a081) cell_vkbss_key_3p_pane_ParamLimits

0xf39b,	// (0x0002a081) cell_vkbss_key_3p_pane

0xf3af,	// (0x0002a095) cell_vkbss_key_g1_ParamLimits

0xf3af,	// (0x0002a095) cell_vkbss_key_g1

0xf3c3,	// (0x0002a0a9) cell_vkbss_key_t1_ParamLimits

0xf3c3,	// (0x0002a0a9) cell_vkbss_key_t1

0x7c8b,	// (0x00022971) cell_ituss_key_pane_ParamLimits

0x7c8b,	// (0x00022971) cell_ituss_key_pane

0xf3ee,	// (0x0002a0d4) bg_cell_ituss_key_g1_ParamLimits

0xf3ee,	// (0x0002a0d4) bg_cell_ituss_key_g1

0xf3fa,	// (0x0002a0e0) cell_ituss_key_pane_g1_ParamLimits

0xf3fa,	// (0x0002a0e0) cell_ituss_key_pane_g1

0x7c9c,	// (0x00022982) cell_ituss_key_pane_g2_ParamLimits

0x7c9c,	// (0x00022982) cell_ituss_key_pane_g2

0x0002,

0xfe37,	// (0x0002ab1d) cell_ituss_key_pane_g_ParamLimits

0xfe37,	// (0x0002ab1d) cell_ituss_key_pane_g

0x7cc8,	// (0x000229ae) cell_ituss_key_t1_ParamLimits

0x7cc8,	// (0x000229ae) cell_ituss_key_t1

0x7d02,	// (0x000229e8) cell_ituss_key_t2_ParamLimits

0x7d02,	// (0x000229e8) cell_ituss_key_t2

0x7d33,	// (0x00022a19) cell_ituss_key_t3_ParamLimits

0x7d33,	// (0x00022a19) cell_ituss_key_t3

0x7d02,	// (0x000229e8) cell_ituss_key_t4_ParamLimits

0x7d02,	// (0x000229e8) cell_ituss_key_t4

0x0004,

0xfe3e,	// (0x0002ab24) cell_ituss_key_t_ParamLimits

0xfe3e,	// (0x0002ab24) cell_ituss_key_t

0xf426,	// (0x0002a10c) cell_vkbss_key_3p_pane_g1

0xf42e,	// (0x0002a114) cell_vkbss_key_3p_pane_g2

0xf436,	// (0x0002a11c) cell_vkbss_key_3p_pane_g3

0x0002,

0x00ec,	// (0x0001add2) cell_vkbss_key_3p_pane_g

0x93cb,	// (0x000240b1) bg_popup_fep_char_preview_window_cp02

0xf43e,	// (0x0002a124) popup_fep_char_pre_window_t1

0xe82a,	// (0x00029510) main_ai5_sk_pane

0xef18,	// (0x00029bfe) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef24,	// (0x00029c0a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc8ff,	// (0x000275e5) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef39,	// (0x00029c1f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe30,	// (0x0002ab16) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef45,	// (0x00029c2b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8736,	// (0x0002341c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf44c,	// (0x0002a132) main_ai5_sk_pane_g1

0xa0df,	// (0x00024dc5) popup_query_code_window_g1

0xf330,	// (0x0002a016) popup_fep_vkb_icf_pane

0xf35a,	// (0x0002a040) popup_fep_vtchi_icf_pane

0xf455,	// (0x0002a13b) bg_icf_pane

0xf461,	// (0x0002a147) list_vkb_icf_pane

0xf470,	// (0x0002a156) bg_icf_pane_cp01

0xf483,	// (0x0002a169) vtchi_icf_list_pane

0xf493,	// (0x0002a179) list_vkb_icf_pane_t1_ParamLimits

0xf493,	// (0x0002a179) list_vkb_icf_pane_t1

0xf4b4,	// (0x0002a19a) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x0002a19a) vtchi_icf_list_pane_t1

0xf31a,	// (0x0002a000) popup_fep_ituss_window_ParamLimits

0xf35a,	// (0x0002a040) popup_fep_vtchi_icf_pane_ParamLimits

0xf380,	// (0x0002a066) ituss_keypad_pane_ParamLimits

0x7c5d,	// (0x00022943) ituss_sks_pane

0xf455,	// (0x0002a13b) bg_icf_pane_ParamLimits

0xf2f2,	// (0x00029fd8) icf_edit_indi_pane_ParamLimits

0xf2f2,	// (0x00029fd8) icf_edit_indi_pane

0xf461,	// (0x0002a147) list_vkb_icf_pane_ParamLimits

0xf470,	// (0x0002a156) bg_icf_pane_cp01_ParamLimits

0xf305,	// (0x00029feb) icf_edit_indi_pane_cp01_ParamLimits

0xf305,	// (0x00029feb) icf_edit_indi_pane_cp01

0xf48b,	// (0x0002a171) vtchi_query_pane

0xe6b4,	// (0x0002939a) icf_edit_indi_pane_g1_ParamLimits

0xe6b4,	// (0x0002939a) icf_edit_indi_pane_g1

0xf525,	// (0x0002a20b) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0002a20b) icf_edit_indi_pane_g2

0x0001,

0x0104,	// (0x0001adea) icf_edit_indi_pane_g_ParamLimits

0x0104,	// (0x0001adea) icf_edit_indi_pane_g

0xf537,	// (0x0002a21d) icf_edit_indi_pane_t1

0xf4ce,	// (0x0002a1b4) bg_input_focus_pane_cp042

0x8665,	// (0x0002334b) vtchi_button_pane

0xf4d7,	// (0x0002a1bd) vtchi_query_pane_t1

0xf4e5,	// (0x0002a1cb) vtchi_query_pane_t2

0xf4f3,	// (0x0002a1d9) vtchi_query_pane_t3

0x0002,

0x00f3,	// (0x0001add9) vtchi_query_pane_t

0x7dad,	// (0x00022a93) bg_button_pane_cp13

0xf501,	// (0x0002a1e7) vtchi_button_pane_g1

0x7d76,	// (0x00022a5c) ituss_sks_pane_g1

0x7d81,	// (0x00022a67) ituss_sks_pane_g2

0x0001,

0xfe49,	// (0x0002ab2f) ituss_sks_pane_g

0xf509,	// (0x0002a1ef) ituss_sks_pane_t1

0xf517,	// (0x0002a1fd) ituss_sks_pane_t2

0x0001,

0x00ff,	// (0x0001ade5) ituss_sks_pane_t

0xbc9e,	// (0x00026984) indicator_nsta_pane_cp_g1

0xbca6,	// (0x0002698c) indicator_nsta_pane_cp_g2

0xbcae,	// (0x00026994) indicator_nsta_pane_cp_g3

0xbc9e,	// (0x00026984) indicator_nsta_pane_cp_g4

0xbca6,	// (0x0002698c) indicator_nsta_pane_cp_g5

0xbcae,	// (0x00026994) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0002a780) indicator_nsta_pane_cp_g

0xe3f3,	// (0x000290d9) cell_graphic2_pane_t2_ParamLimits

0xe3f3,	// (0x000290d9) cell_graphic2_pane_t2

0x0001,

0xfda7,	// (0x0002aa8d) cell_graphic2_pane_t_ParamLimits

0xfda7,	// (0x0002aa8d) cell_graphic2_pane_t

0xe420,	// (0x00029106) cell_graphic2_control_pane_t1

0x8e79,	// (0x00023b5f) signal_pane_g3_ParamLimits

0x8e79,	// (0x00023b5f) signal_pane_g3

0x8e8b,	// (0x00023b71) signal_pane_g4_ParamLimits

0x8e8b,	// (0x00023b71) signal_pane_g4

0xf2dc,	// (0x00029fc2) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2dc,	// (0x00029fc2) cell_ai5_widget_list_row_pane_t3

0xf414,	// (0x0002a0fa) cell_ituss_key_pane_t1_ParamLimits

0xf414,	// (0x0002a0fa) cell_ituss_key_pane_t1

0x9d18,	// (0x000249fe) form_field_data_wide_pane_vc_t2_ParamLimits

0x9d18,	// (0x000249fe) form_field_data_wide_pane_vc_t2

0x9d2c,	// (0x00024a12) form_field_data_wide_pane_vc_t3_ParamLimits

0x9d2c,	// (0x00024a12) form_field_data_wide_pane_vc_t3

0x0002,

0xf802,	// (0x0002a4e8) form_field_data_wide_pane_vc_t_ParamLimits

0xf802,	// (0x0002a4e8) form_field_data_wide_pane_vc_t

0xb965,	// (0x0002664b) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb965,	// (0x0002664b) form_field_slider_wide_pane_vc_t3

0xba43,	// (0x00026729) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba43,	// (0x00026729) form_field_popup_wide_pane_vc_t2

0xba5a,	// (0x00026740) form_field_popup_wide_pane_vc_t3_ParamLimits

0xba5a,	// (0x00026740) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0002a76f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0002a76f) form_field_popup_wide_pane_vc_t

0x7a3f,	// (0x00022725) aid_fshwr2_btn_pane_ParamLimits

0x7a4b,	// (0x00022731) aid_fshwr2_syb_pane_ParamLimits

0x7a5d,	// (0x00022743) aid_fshwr2_txt_pane_ParamLimits

0x8736,	// (0x0002341c) fshwr2_bg_pane_ParamLimits

0x7a69,	// (0x0002274f) fshwr2_func_candi_pane_ParamLimits

0x7a85,	// (0x0002276b) fshwr2_hwr_syb_pane_ParamLimits

0x7a9f,	// (0x00022785) fshwr2_icf_pane_ParamLimits

0x55b8,	// (0x0002029e) list_double_graphic_pane_vc_g4_ParamLimits

0x55b8,	// (0x0002029e) list_double_graphic_pane_vc_g4

0x7cbc,	// (0x000229a2) cell_ituss_key_pane_g3_ParamLimits

0x7cbc,	// (0x000229a2) cell_ituss_key_pane_g3

0x7d64,	// (0x00022a4a) cell_ituss_key_t5_ParamLimits

0x7d64,	// (0x00022a4a) cell_ituss_key_t5

0xf346,	// (0x0002a02c) popup_fep_vkbss_window_ParamLimits

0xe834,	// (0x0002951a) aid_cell_ai5_quarter

0xf537,	// (0x0002a21d) icf_edit_indi_pane_t1_ParamLimits

0x81d2,	// (0x00022eb8) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x81d2,	// (0x00022eb8) aid_tch_indicator_popup_pane_cp2

0x81e5,	// (0x00022ecb) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x81e5,	// (0x00022ecb) aid_tch_query_popup_data_pane_cp2

0xa087,	// (0x00024d6d) aid_tch_query_popup_pane_ParamLimits

0xa087,	// (0x00024d6d) aid_tch_query_popup_pane

0xa087,	// (0x00024d6d) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xa087,	// (0x00024d6d) aid_tch_query_popup_data_pane_cp1

0xed7b,	// (0x00029a61) cell_fshwr2_syb_bg_pane_ParamLimits

0x7b8a,	// (0x00022870) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7b9e,	// (0x00022884) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf330,	// (0x0002a016) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
