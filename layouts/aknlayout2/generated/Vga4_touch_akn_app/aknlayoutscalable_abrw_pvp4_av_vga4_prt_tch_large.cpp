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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00053e26 };

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
0x4d5f,	// (0x00058b85) Screen

0x4d6b,	// (0x00058b91) application_window_ParamLimits

0x4d6b,	// (0x00058b91) application_window

0xb993,	// (0x0005f7b9) screen_g1

0x4dc7,	// (0x00058bed) area_bottom_pane_ParamLimits

0x4dc7,	// (0x00058bed) area_bottom_pane

0x4e87,	// (0x00058cad) area_top_pane_ParamLimits

0x4e87,	// (0x00058cad) area_top_pane

0x4f25,	// (0x00058d4b) main_pane_ParamLimits

0x4f25,	// (0x00058d4b) main_pane

0xb99d,	// (0x0005f7c3) misc_graphics

0x83a1,	// (0x0005c1c7) battery_pane_ParamLimits

0x83a1,	// (0x0005c1c7) battery_pane

0x905f,	// (0x0005ce85) bg_status_flat_pane_g8

0x9067,	// (0x0005ce8d) bg_status_flat_pane_g9

0x8469,	// (0x0005c28f) context_pane_ParamLimits

0x8469,	// (0x0005c28f) context_pane

0x858d,	// (0x0005c3b3) navi_pane_ParamLimits

0x858d,	// (0x0005c3b3) navi_pane

0x861d,	// (0x0005c443) signal_pane_ParamLimits

0x861d,	// (0x0005c443) signal_pane

0x0008,

0xf884,	// (0x000636aa) bg_status_flat_pane_g

0x868a,	// (0x0005c4b0) status_pane_g1_ParamLimits

0x868a,	// (0x0005c4b0) status_pane_g1

0x869e,	// (0x0005c4c4) status_pane_g2_ParamLimits

0x869e,	// (0x0005c4c4) status_pane_g2

0x86aa,	// (0x0005c4d0) status_pane_g3_ParamLimits

0x86aa,	// (0x0005c4d0) status_pane_g3

0x0004,

0xf7ab,	// (0x000635d1) status_pane_g_ParamLimits

0xf7ab,	// (0x000635d1) status_pane_g

0x86de,	// (0x0005c504) title_pane_ParamLimits

0x86de,	// (0x0005c504) title_pane

0x871b,	// (0x0005c541) uni_indicator_pane_ParamLimits

0x871b,	// (0x0005c541) uni_indicator_pane

0x7c8a,	// (0x0005bab0) bg_list_pane_ParamLimits

0x7c8a,	// (0x0005bab0) bg_list_pane

0x7caa,	// (0x0005bad0) find_pane

0x7cb2,	// (0x0005bad8) listscroll_app_pane_ParamLimits

0x7cb2,	// (0x0005bad8) listscroll_app_pane

0x7cbe,	// (0x0005bae4) listscroll_form_pane

0x7cc6,	// (0x0005baec) listscroll_gen_pane_ParamLimits

0x7cc6,	// (0x0005baec) listscroll_gen_pane

0x7cda,	// (0x0005bb00) listscroll_set_pane

0x5c09,	// (0x00059a2f) main_idle_act_pane

0x361e,	// (0x00057444) main_idle_trad_pane

0x361e,	// (0x00057444) main_list_empty_pane

0x7cf4,	// (0x0005bb1a) main_midp_pane

0x7d00,	// (0x0005bb26) main_pane_g1_ParamLimits

0x7d00,	// (0x0005bb26) main_pane_g1

0x7d0e,	// (0x0005bb34) popup_ai_message_window_ParamLimits

0x7d0e,	// (0x0005bb34) popup_ai_message_window

0x7dc2,	// (0x0005bbe8) popup_fep_china_uni_window_ParamLimits

0x7dc2,	// (0x0005bbe8) popup_fep_china_uni_window

0x7e22,	// (0x0005bc48) popup_fep_japan_candidate_window_ParamLimits

0x7e22,	// (0x0005bc48) popup_fep_japan_candidate_window

0x7e4c,	// (0x0005bc72) popup_fep_japan_predictive_window_ParamLimits

0x7e4c,	// (0x0005bc72) popup_fep_japan_predictive_window

0x7e82,	// (0x0005bca8) popup_find_window

0x7e8f,	// (0x0005bcb5) popup_grid_graphic_window_ParamLimits

0x7e8f,	// (0x0005bcb5) popup_grid_graphic_window

0x7ebd,	// (0x0005bce3) popup_large_graphic_colour_window

0x7ee3,	// (0x0005bd09) popup_menu_window_ParamLimits

0x7ee3,	// (0x0005bd09) popup_menu_window

0x80ad,	// (0x0005bed3) popup_note_image_window

0x8097,	// (0x0005bebd) popup_note_wait_window_ParamLimits

0x8097,	// (0x0005bebd) popup_note_wait_window

0x8097,	// (0x0005bebd) popup_note_window_ParamLimits

0x8097,	// (0x0005bebd) popup_note_window

0x8113,	// (0x0005bf39) popup_query_code_window_ParamLimits

0x8113,	// (0x0005bf39) popup_query_code_window

0x8129,	// (0x0005bf4f) popup_query_data_code_window_ParamLimits

0x8129,	// (0x0005bf4f) popup_query_data_code_window

0x814c,	// (0x0005bf72) popup_query_data_window_ParamLimits

0x814c,	// (0x0005bf72) popup_query_data_window

0x816e,	// (0x0005bf94) popup_query_sat_info_window_ParamLimits

0x816e,	// (0x0005bf94) popup_query_sat_info_window

0x81ad,	// (0x0005bfd3) popup_snote_single_graphic_window_ParamLimits

0x81ad,	// (0x0005bfd3) popup_snote_single_graphic_window

0x81ad,	// (0x0005bfd3) popup_snote_single_text_window_ParamLimits

0x81ad,	// (0x0005bfd3) popup_snote_single_text_window

0x81c4,	// (0x0005bfea) popup_sub_window_general

0x830a,	// (0x0005c130) popup_window_general_ParamLimits

0x830a,	// (0x0005c130) popup_window_general

0x8323,	// (0x0005c149) power_save_pane

0x6648,	// (0x0005a46e) control_pane_g1_ParamLimits

0x6648,	// (0x0005a46e) control_pane_g1

0x6671,	// (0x0005a497) control_pane_g2_ParamLimits

0x6671,	// (0x0005a497) control_pane_g2

0x6696,	// (0x0005a4bc) control_pane_g3_ParamLimits

0x6696,	// (0x0005a4bc) control_pane_g3

0x0007,

0xf793,	// (0x000635b9) control_pane_g_ParamLimits

0xf793,	// (0x000635b9) control_pane_g

0x66ee,	// (0x0005a514) control_pane_t1_ParamLimits

0x66ee,	// (0x0005a514) control_pane_t1

0x673a,	// (0x0005a560) control_pane_t2_ParamLimits

0x673a,	// (0x0005a560) control_pane_t2

0x0002,

0xf7a4,	// (0x000635ca) control_pane_t_ParamLimits

0xf7a4,	// (0x000635ca) control_pane_t

0x6569,	// (0x0005a38f) navi_navi_volume_pane_cp1

0x6572,	// (0x0005a398) status_small_icon_pane

0x657a,	// (0x0005a3a0) status_small_pane_g1_ParamLimits

0x657a,	// (0x0005a3a0) status_small_pane_g1

0x65ae,	// (0x0005a3d4) status_small_pane_g2_ParamLimits

0x65ae,	// (0x0005a3d4) status_small_pane_g2

0x65ba,	// (0x0005a3e0) status_small_pane_g3_ParamLimits

0x65ba,	// (0x0005a3e0) status_small_pane_g3

0x65c6,	// (0x0005a3ec) status_small_pane_g4_ParamLimits

0x65c6,	// (0x0005a3ec) status_small_pane_g4

0x65d2,	// (0x0005a3f8) status_small_pane_g5_ParamLimits

0x65d2,	// (0x0005a3f8) status_small_pane_g5

0x65e1,	// (0x0005a407) status_small_pane_g6_ParamLimits

0x65e1,	// (0x0005a407) status_small_pane_g6

0x0007,

0xf782,	// (0x000635a8) status_small_pane_g_ParamLimits

0xf782,	// (0x000635a8) status_small_pane_g

0x6611,	// (0x0005a437) status_small_pane_t1

0x6634,	// (0x0005a45a) status_small_wait_pane_ParamLimits

0x6634,	// (0x0005a45a) status_small_wait_pane

0x5f7c,	// (0x00059da2) aid_levels_signal_ParamLimits

0x5f7c,	// (0x00059da2) aid_levels_signal

0x5f8e,	// (0x00059db4) signal_pane_g1_ParamLimits

0x5f8e,	// (0x00059db4) signal_pane_g1

0x5fa3,	// (0x00059dc9) signal_pane_g2_ParamLimits

0x5fa3,	// (0x00059dc9) signal_pane_g2

0x0003,

0xf713,	// (0x00063539) signal_pane_g_ParamLimits

0xf713,	// (0x00063539) signal_pane_g

0x1151,	// (0x00054f77) context_pane_g1

0x5184,	// (0x00058faa) title_pane_g1

0x51a2,	// (0x00058fc8) title_pane_t1

0xb9bf,	// (0x0005f7e5) title_pane_t2

0xb9e5,	// (0x0005f80b) title_pane_t3

0x0002,

0xf55d,	// (0x00063383) title_pane_t

0x8733,	// (0x0005c559) aid_levels_battery_ParamLimits

0x8733,	// (0x0005c559) aid_levels_battery

0x8747,	// (0x0005c56d) battery_pane_g1_ParamLimits

0x8747,	// (0x0005c56d) battery_pane_g1

0x875d,	// (0x0005c583) battery_pane_g2_ParamLimits

0x875d,	// (0x0005c583) battery_pane_g2

0x0001,

0xf7b6,	// (0x000635dc) battery_pane_g_ParamLimits

0xf7b6,	// (0x000635dc) battery_pane_g

0x9b49,	// (0x0005d96f) uni_indicator_pane_g1

0x9b60,	// (0x0005d986) uni_indicator_pane_g2

0x9b76,	// (0x0005d99c) uni_indicator_pane_g3

0x0005,

0xf92c,	// (0x00063752) uni_indicator_pane_g

0x34c0,	// (0x000572e6) navi_icon_pane_ParamLimits

0x34c0,	// (0x000572e6) navi_icon_pane

0x3444,	// (0x0005726a) navi_midp_pane

0x34dc,	// (0x00057302) navi_navi_pane

0x34e6,	// (0x0005730c) navi_text_pane_ParamLimits

0x34e6,	// (0x0005730c) navi_text_pane

0xb993,	// (0x0005f7b9) status_small_wait_pane_g1

0xed38,	// (0x00062b5e) status_small_wait_pane_g2

0x0001,

0xf927,	// (0x0006374d) status_small_wait_pane_g

0x96bc,	// (0x0005d4e2) navi_navi_icon_text_pane

0x96c4,	// (0x0005d4ea) navi_navi_pane_g1_ParamLimits

0x96c4,	// (0x0005d4ea) navi_navi_pane_g1

0x96d6,	// (0x0005d4fc) navi_navi_pane_g2_ParamLimits

0x96d6,	// (0x0005d4fc) navi_navi_pane_g2

0x0001,

0xf8f5,	// (0x0006371b) navi_navi_pane_g_ParamLimits

0xf8f5,	// (0x0006371b) navi_navi_pane_g

0x96e8,	// (0x0005d50e) navi_navi_tabs_pane

0x96f1,	// (0x0005d517) navi_navi_text_pane

0x96bc,	// (0x0005d4e2) navi_navi_volume_pane

0x9698,	// (0x0005d4be) navi_text_pane_t1

0x968c,	// (0x0005d4b2) navi_icon_pane_g1

0x95df,	// (0x0005d405) navi_navi_text_pane_t1

0x6aae,	// (0x0005a8d4) navi_navi_volume_pane_g1

0x6ab6,	// (0x0005a8dc) volume_small_pane

0x9545,	// (0x0005d36b) navi_navi_icon_text_pane_g1

0x954d,	// (0x0005d373) navi_navi_icon_text_pane_t1

0x34dc,	// (0x00057302) navi_tabs_2_long_pane

0x34dc,	// (0x00057302) navi_tabs_2_pane

0x34dc,	// (0x00057302) navi_tabs_3_long_pane

0x34dc,	// (0x00057302) navi_tabs_3_pane

0x34dc,	// (0x00057302) navi_tabs_4_pane

0x6a8e,	// (0x0005a8b4) tabs_2_active_pane_ParamLimits

0x6a8e,	// (0x0005a8b4) tabs_2_active_pane

0x6a9e,	// (0x0005a8c4) tabs_2_passive_pane_ParamLimits

0x6a9e,	// (0x0005a8c4) tabs_2_passive_pane

0x6a5c,	// (0x0005a882) tabs_3_active_pane_ParamLimits

0x6a5c,	// (0x0005a882) tabs_3_active_pane

0x6a6c,	// (0x0005a892) tabs_3_passive_pane_ParamLimits

0x6a6c,	// (0x0005a892) tabs_3_passive_pane

0x6a7d,	// (0x0005a8a3) tabs_3_passive_pane_cp_ParamLimits

0x6a7d,	// (0x0005a8a3) tabs_3_passive_pane_cp

0x6a10,	// (0x0005a836) tabs_4_active_pane_ParamLimits

0x6a10,	// (0x0005a836) tabs_4_active_pane

0x6a23,	// (0x0005a849) tabs_4_passive_pane_ParamLimits

0x6a23,	// (0x0005a849) tabs_4_passive_pane

0x6a34,	// (0x0005a85a) tabs_4_passive_pane_cp_ParamLimits

0x6a34,	// (0x0005a85a) tabs_4_passive_pane_cp

0x6a45,	// (0x0005a86b) tabs_4_passive_pane_cp2_ParamLimits

0x6a45,	// (0x0005a86b) tabs_4_passive_pane_cp2

0x69ec,	// (0x0005a812) tabs_2_long_active_pane_ParamLimits

0x69ec,	// (0x0005a812) tabs_2_long_active_pane

0x69fe,	// (0x0005a824) tabs_2_long_passive_pane_ParamLimits

0x69fe,	// (0x0005a824) tabs_2_long_passive_pane

0x69ad,	// (0x0005a7d3) tabs_3_long_active_pane_ParamLimits

0x69ad,	// (0x0005a7d3) tabs_3_long_active_pane

0x69c0,	// (0x0005a7e6) tabs_3_long_passive_pane_ParamLimits

0x69c0,	// (0x0005a7e6) tabs_3_long_passive_pane

0x69d9,	// (0x0005a7ff) tabs_3_long_passive_pane_cp_ParamLimits

0x69d9,	// (0x0005a7ff) tabs_3_long_passive_pane_cp

0x6953,	// (0x0005a779) volume_small_pane_g1

0x695c,	// (0x0005a782) volume_small_pane_g2

0x6965,	// (0x0005a78b) volume_small_pane_g3

0x696e,	// (0x0005a794) volume_small_pane_g4

0x6977,	// (0x0005a79d) volume_small_pane_g5

0x6980,	// (0x0005a7a6) volume_small_pane_g6

0x6989,	// (0x0005a7af) volume_small_pane_g7

0x6992,	// (0x0005a7b8) volume_small_pane_g8

0x699b,	// (0x0005a7c1) volume_small_pane_g9

0x69a4,	// (0x0005a7ca) volume_small_pane_g10

0x0009,

0xf8c1,	// (0x000636e7) volume_small_pane_g

0xb9f7,	// (0x0005f81d) bg_active_tab_pane_cp2_ParamLimits

0xb9f7,	// (0x0005f81d) bg_active_tab_pane_cp2

0x520a,	// (0x00059030) tabs_3_active_pane_g1

0x5212,	// (0x00059038) tabs_3_active_pane_t1

0xb9f7,	// (0x0005f81d) bg_passive_tab_pane_cp2_ParamLimits

0xb9f7,	// (0x0005f81d) bg_passive_tab_pane_cp2

0x520a,	// (0x00059030) tabs_3_passive_pane_g1

0x5212,	// (0x00059038) tabs_3_passive_pane_t1

0xb9f7,	// (0x0005f81d) bg_active_tab_pane_cp3_ParamLimits

0xb9f7,	// (0x0005f81d) bg_active_tab_pane_cp3

0x5224,	// (0x0005904a) tabs_4_active_pane_g1

0x522c,	// (0x00059052) tabs_4_active_pane_t1

0xb9f7,	// (0x0005f81d) bg_passive_tab_pane_cp3_ParamLimits

0xb9f7,	// (0x0005f81d) bg_passive_tab_pane_cp3

0x5224,	// (0x0005904a) tabs_4_1_passive_pane_g1

0x522c,	// (0x00059052) tabs_4_1_passive_pane_t1

0x7cf4,	// (0x0005bb1a) list_highlight_pane_cp2

0x9dc5,	// (0x0005dbeb) list_set_pane_ParamLimits

0x9dc5,	// (0x0005dbeb) list_set_pane

0x9e8d,	// (0x0005dcb3) main_pane_set_t1_ParamLimits

0x9e8d,	// (0x0005dcb3) main_pane_set_t1

0x9ead,	// (0x0005dcd3) main_pane_set_t2_ParamLimits

0x9ead,	// (0x0005dcd3) main_pane_set_t2

0x9ec1,	// (0x0005dce7) main_pane_set_t3_ParamLimits

0x9ec1,	// (0x0005dce7) main_pane_set_t3

0x9ed5,	// (0x0005dcfb) main_pane_set_t4_ParamLimits

0x9ed5,	// (0x0005dcfb) main_pane_set_t4

0x0003,

0xf991,	// (0x000637b7) main_pane_set_t_ParamLimits

0xf991,	// (0x000637b7) main_pane_set_t

0x9ee9,	// (0x0005dd0f) setting_code_pane

0x9ef3,	// (0x0005dd19) setting_slider_graphic_pane

0x9ef3,	// (0x0005dd19) setting_slider_pane

0x9ef3,	// (0x0005dd19) setting_text_pane

0x9ef3,	// (0x0005dd19) setting_volume_pane

0x523e,	// (0x00059064) volume_set_pane

0xb9f7,	// (0x0005f81d) bg_set_opt_pane_cp

0x5248,	// (0x0005906e) setting_slider_pane_t1

0x5261,	// (0x00059087) setting_slider_pane_t2

0x527b,	// (0x000590a1) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0006338a) setting_slider_pane_t

0x5293,	// (0x000590b9) slider_set_pane

0xb99d,	// (0x0005f7c3) bg_set_opt_pane_cp2

0xba05,	// (0x0005f82b) setting_slider_graphic_pane_g1

0x52a9,	// (0x000590cf) setting_slider_graphic_pane_t1

0x52b9,	// (0x000590df) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00063391) setting_slider_graphic_pane_t

0x52c9,	// (0x000590ef) slider_set_pane_cp

0xb99d,	// (0x0005f7c3) input_focus_pane_cp1

0x9d86,	// (0x0005dbac) list_set_text_pane

0xb993,	// (0x0005f7b9) setting_text_pane_g1

0xb99d,	// (0x0005f7c3) input_focus_pane_cp2

0xb993,	// (0x0005f7b9) setting_code_pane_g1

0xba0e,	// (0x0005f834) setting_code_pane_t1

0x324c,	// (0x00057072) set_text_pane_t1_ParamLimits

0x324c,	// (0x00057072) set_text_pane_t1

0xf0cd,	// (0x00062ef3) set_opt_bg_pane_g1

0xf0d5,	// (0x00062efb) set_opt_bg_pane_g2

0x9d5e,	// (0x0005db84) set_opt_bg_pane_g3

0xf0e5,	// (0x00062f0b) set_opt_bg_pane_g4

0xf0ed,	// (0x00062f13) set_opt_bg_pane_g5

0xf0f5,	// (0x00062f1b) set_opt_bg_pane_g6

0x9d68,	// (0x0005db8e) set_opt_bg_pane_g7

0x9d72,	// (0x0005db98) set_opt_bg_pane_g8

0x9d7c,	// (0x0005dba2) set_opt_bg_pane_g9

0x0008,

0xf97e,	// (0x000637a4) set_opt_bg_pane_g

0x9d51,	// (0x0005db77) slider_set_pane_g1

0x6b5f,	// (0x0005a985) slider_set_pane_g2

0x0006,

0xf96f,	// (0x00063795) slider_set_pane_g

0x6abf,	// (0x0005a8e5) volume_set_pane_g1

0x6ac9,	// (0x0005a8ef) volume_set_pane_g2

0x6ad3,	// (0x0005a8f9) volume_set_pane_g3

0x6add,	// (0x0005a903) volume_set_pane_g4

0x6ae7,	// (0x0005a90d) volume_set_pane_g5

0x6af1,	// (0x0005a917) volume_set_pane_g6

0x6afb,	// (0x0005a921) volume_set_pane_g7

0x6b05,	// (0x0005a92b) volume_set_pane_g8

0x6b0f,	// (0x0005a935) volume_set_pane_g9

0x6b19,	// (0x0005a93f) volume_set_pane_g10

0x0009,

0xf947,	// (0x0006376d) volume_set_pane_g

0x52d1,	// (0x000590f7) indicator_pane_ParamLimits

0x52d1,	// (0x000590f7) indicator_pane

0x52dd,	// (0x00059103) main_idle_pane_g2_ParamLimits

0x52dd,	// (0x00059103) main_idle_pane_g2

0x5305,	// (0x0005912b) main_pane_idle_g1_ParamLimits

0x5305,	// (0x0005912b) main_pane_idle_g1

0xba1c,	// (0x0005f842) popup_clock_digital_analogue_window_ParamLimits

0xba1c,	// (0x0005f842) popup_clock_digital_analogue_window

0x5313,	// (0x00059139) soft_indicator_pane_ParamLimits

0x5313,	// (0x00059139) soft_indicator_pane

0x5321,	// (0x00059147) wallpaper_pane_ParamLimits

0x5321,	// (0x00059147) wallpaper_pane

0xb993,	// (0x0005f7b9) wallpaper_pane_g1

0x532d,	// (0x00059153) indicator_pane_g1_ParamLimits

0x532d,	// (0x00059153) indicator_pane_g1

0xa1ad,	// (0x0005dfd3) navi_navi_icon_text_pane_srt_g1

0xba4a,	// (0x0005f870) soft_indicator_pane_t1

0xeaca,	// (0x000628f0) aid_ps_area_pane

0x5339,	// (0x0005915f) aid_ps_clock_pane

0xeadb,	// (0x00062901) aid_ps_indicator_pane

0xeae7,	// (0x0006290d) indicator_ps_pane_ParamLimits

0xeae7,	// (0x0006290d) indicator_ps_pane

0xeaf6,	// (0x0006291c) power_save_pane_g1_ParamLimits

0xeaf6,	// (0x0006291c) power_save_pane_g1

0xeb02,	// (0x00062928) power_save_pane_g2_ParamLimits

0xeb02,	// (0x00062928) power_save_pane_g2

0x4d7b,	// (0x00058ba1) aid_navinavi_width_pane

0xeaca,	// (0x000628f0) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00063396) power_save_pane_g_ParamLimits

0xf570,	// (0x00063396) power_save_pane_g

0xeb10,	// (0x00062936) power_save_pane_t1_ParamLimits

0xeb10,	// (0x00062936) power_save_pane_t1

0x5339,	// (0x0005915f) aid_ps_clock_pane_ParamLimits

0xeadb,	// (0x00062901) aid_ps_indicator_pane_ParamLimits

0xeb22,	// (0x00062948) power_save_pane_t4_ParamLimits

0xeb22,	// (0x00062948) power_save_pane_t4

0x0001,

0xf575,	// (0x0006339b) power_save_pane_t_ParamLimits

0xf575,	// (0x0006339b) power_save_pane_t

0xeb4c,	// (0x00062972) power_save_t3_ParamLimits

0xeb4c,	// (0x00062972) power_save_t3

0xeb37,	// (0x0006295d) power_save_t2_ParamLimits

0xeb37,	// (0x0006295d) power_save_t2

0xeb61,	// (0x00062987) indicator_ps_pane_g1

0x5347,	// (0x0005916d) ai_gene_pane_ParamLimits

0x5347,	// (0x0005916d) ai_gene_pane

0x5353,	// (0x00059179) ai_links_pane_ParamLimits

0x5353,	// (0x00059179) ai_links_pane

0x535f,	// (0x00059185) indicator_pane_cp1_ParamLimits

0x535f,	// (0x00059185) indicator_pane_cp1

0x536b,	// (0x00059191) main_pane_idle_g1_cp_ParamLimits

0x536b,	// (0x00059191) main_pane_idle_g1_cp

0xeb6a,	// (0x00062990) popup_ai_links_title_window

0x5377,	// (0x0005919d) soft_indicator_pane_cp1_ParamLimits

0x5377,	// (0x0005919d) soft_indicator_pane_cp1

0x9b37,	// (0x0005d95d) ai_links_pane_g1

0x9b40,	// (0x0005d966) grid_ai_links_pane

0x9b1c,	// (0x0005d942) ai_gene_pane_1

0x9b25,	// (0x0005d94b) ai_gene_pane_2

0x9b2e,	// (0x0005d954) list_highlight_pane_cp4

0x9afc,	// (0x0005d922) cell_ai_link_pane_ParamLimits

0x9afc,	// (0x0005d922) cell_ai_link_pane

0x9af4,	// (0x0005d91a) cell_ai_link_pane_g1

0xed38,	// (0x00062b5e) cell_ai_link_pane_g2

0x0001,

0xf922,	// (0x00063748) cell_ai_link_pane_g

0xb99d,	// (0x0005f7c3) grid_highlight_cp2

0xb99d,	// (0x0005f7c3) bg_popup_sub_pane_cp1

0xeb81,	// (0x000629a7) popup_ai_links_title_window_t1

0x98a0,	// (0x0005d6c6) ai_gene_pane_1_g1_ParamLimits

0x98a0,	// (0x0005d6c6) ai_gene_pane_1_g1

0x98ac,	// (0x0005d6d2) ai_gene_pane_1_g2_ParamLimits

0x98ac,	// (0x0005d6d2) ai_gene_pane_1_g2

0x0001,

0xf918,	// (0x0006373e) ai_gene_pane_1_g_ParamLimits

0xf918,	// (0x0006373e) ai_gene_pane_1_g

0x98b9,	// (0x0005d6df) ai_gene_pane_1_t1_ParamLimits

0x98b9,	// (0x0005d6df) ai_gene_pane_1_t1

0x98ed,	// (0x0005d713) grid_ai_soft_ind_pane

0x988b,	// (0x0005d6b1) ai_gene_pane_2_t1_ParamLimits

0x988b,	// (0x0005d6b1) ai_gene_pane_2_t1

0x5383,	// (0x000591a9) main_pane_empty_t1_ParamLimits

0x5383,	// (0x000591a9) main_pane_empty_t1

0x539b,	// (0x000591c1) main_pane_empty_t2_ParamLimits

0x539b,	// (0x000591c1) main_pane_empty_t2

0x53b0,	// (0x000591d6) main_pane_empty_t3_ParamLimits

0x53b0,	// (0x000591d6) main_pane_empty_t3

0x53c2,	// (0x000591e8) main_pane_empty_t4_ParamLimits

0x53c2,	// (0x000591e8) main_pane_empty_t4

0x53d4,	// (0x000591fa) main_pane_empty_t5_ParamLimits

0x53d4,	// (0x000591fa) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000633a0) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000633a0) main_pane_empty_t

0xf11e,	// (0x00062f44) bg_popup_window_pane_ParamLimits

0xf11e,	// (0x00062f44) bg_popup_window_pane

0x95ed,	// (0x0005d413) find_popup_pane_cp2_ParamLimits

0x95ed,	// (0x0005d413) find_popup_pane_cp2

0x95f9,	// (0x0005d41f) heading_pane_ParamLimits

0x95f9,	// (0x0005d41f) heading_pane

0xb99d,	// (0x0005f7c3) bg_popup_sub_pane

0x9567,	// (0x0005d38d) bg_popup_window_pane_g1_ParamLimits

0x9567,	// (0x0005d38d) bg_popup_window_pane_g1

0x9573,	// (0x0005d399) bg_popup_window_pane_g2_ParamLimits

0x9573,	// (0x0005d399) bg_popup_window_pane_g2

0x957f,	// (0x0005d3a5) bg_popup_window_pane_g3_ParamLimits

0x957f,	// (0x0005d3a5) bg_popup_window_pane_g3

0x958b,	// (0x0005d3b1) bg_popup_window_pane_g4_ParamLimits

0x958b,	// (0x0005d3b1) bg_popup_window_pane_g4

0x9597,	// (0x0005d3bd) bg_popup_window_pane_g5_ParamLimits

0x9597,	// (0x0005d3bd) bg_popup_window_pane_g5

0x95a3,	// (0x0005d3c9) bg_popup_window_pane_g6_ParamLimits

0x95a3,	// (0x0005d3c9) bg_popup_window_pane_g6

0x95af,	// (0x0005d3d5) bg_popup_window_pane_g7_ParamLimits

0x95af,	// (0x0005d3d5) bg_popup_window_pane_g7

0x95bb,	// (0x0005d3e1) bg_popup_window_pane_g8_ParamLimits

0x95bb,	// (0x0005d3e1) bg_popup_window_pane_g8

0x95c7,	// (0x0005d3ed) bg_popup_window_pane_g9_ParamLimits

0x95c7,	// (0x0005d3ed) bg_popup_window_pane_g9

0x95d3,	// (0x0005d3f9) bg_popup_window_pane_g10_ParamLimits

0x95d3,	// (0x0005d3f9) bg_popup_window_pane_g10

0x0009,

0xf8e0,	// (0x00063706) bg_popup_window_pane_g_ParamLimits

0xf8e0,	// (0x00063706) bg_popup_window_pane_g

0x94fc,	// (0x0005d322) bg_popup_heading_pane_ParamLimits

0x94fc,	// (0x0005d322) bg_popup_heading_pane

0x6c33,	// (0x0005aa59) tabs_4_passive_pane_cp_srt_ParamLimits

0x6c33,	// (0x0005aa59) tabs_4_passive_pane_cp_srt

0x6c45,	// (0x0005aa6b) tabs_4_passive_pane_srt_ParamLimits

0x9510,	// (0x0005d336) heading_pane_g2

0x6c45,	// (0x0005aa6b) tabs_4_passive_pane_srt

0x7cf4,	// (0x0005bb1a) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7cf4,	// (0x0005bb1a) bg_passive_tab_pane_cp3_srt

0x9518,	// (0x0005d33e) heading_pane_t1_ParamLimits

0x9518,	// (0x0005d33e) heading_pane_t1

0x952f,	// (0x0005d355) heading_pane_t2_ParamLimits

0x952f,	// (0x0005d355) heading_pane_t2

0x0001,

0xf8db,	// (0x00063701) heading_pane_t_ParamLimits

0xf8db,	// (0x00063701) heading_pane_t

0x9027,	// (0x0005ce4d) bg_popup_heading_pane_g1

0x90d6,	// (0x0005cefc) bg_popup_heading_pane_g2

0x90e0,	// (0x0005cf06) bg_popup_heading_pane_g3

0x90ea,	// (0x0005cf10) bg_popup_heading_pane_g4

0x90f4,	// (0x0005cf1a) bg_popup_heading_pane_g5

0x90fe,	// (0x0005cf24) bg_popup_heading_pane_g6

0x9106,	// (0x0005cf2c) bg_popup_heading_pane_g7

0x910e,	// (0x0005cf34) bg_popup_heading_pane_g8

0x9118,	// (0x0005cf3e) bg_popup_heading_pane_g9

0x0008,

0xf897,	// (0x000636bd) bg_popup_heading_pane_g

0x8835,	// (0x0005c65b) bg_popup_sub_pane_g1

0x8845,	// (0x0005c66b) bg_popup_sub_pane_g2

0x883d,	// (0x0005c663) bg_popup_sub_pane_g3

0x8855,	// (0x0005c67b) bg_popup_sub_pane_g4

0x884d,	// (0x0005c673) bg_popup_sub_pane_g5

0x885d,	// (0x0005c683) bg_popup_sub_pane_g6

0x8865,	// (0x0005c68b) bg_popup_sub_pane_g7

0x8875,	// (0x0005c69b) bg_popup_sub_pane_g8

0x886d,	// (0x0005c693) bg_popup_sub_pane_g9

0x0008,

0xf871,	// (0x00063697) bg_popup_sub_pane_g

0xba64,	// (0x0005f88a) bg_popup_window_pane_cp5_ParamLimits

0xba64,	// (0x0005f88a) bg_popup_window_pane_cp5

0xeb9e,	// (0x000629c4) popup_note_window_g1_ParamLimits

0xeb9e,	// (0x000629c4) popup_note_window_g1

0xebaa,	// (0x000629d0) popup_note_window_t1_ParamLimits

0xebaa,	// (0x000629d0) popup_note_window_t1

0xebc0,	// (0x000629e6) popup_note_window_t2_ParamLimits

0xebc0,	// (0x000629e6) popup_note_window_t2

0xebd6,	// (0x000629fc) popup_note_window_t3_ParamLimits

0xebd6,	// (0x000629fc) popup_note_window_t3

0xebec,	// (0x00062a12) popup_note_window_t4_ParamLimits

0xebec,	// (0x00062a12) popup_note_window_t4

0xec14,	// (0x00062a3a) popup_note_window_t5_ParamLimits

0xec14,	// (0x00062a3a) popup_note_window_t5

0x0004,

0xf585,	// (0x000633ab) popup_note_window_t_ParamLimits

0xf585,	// (0x000633ab) popup_note_window_t

0xec38,	// (0x00062a5e) bg_popup_window_pane_cp6_ParamLimits

0xec38,	// (0x00062a5e) bg_popup_window_pane_cp6

0x8fa3,	// (0x0005cdc9) popup_note_image_window_g1_ParamLimits

0x8fa3,	// (0x0005cdc9) popup_note_image_window_g1

0x8faf,	// (0x0005cdd5) popup_note_image_window_g2_ParamLimits

0x8faf,	// (0x0005cdd5) popup_note_image_window_g2

0x0001,

0xf865,	// (0x0006368b) popup_note_image_window_g_ParamLimits

0xf865,	// (0x0006368b) popup_note_image_window_g

0x8fc8,	// (0x0005cdee) popup_note_image_window_t1_ParamLimits

0x8fc8,	// (0x0005cdee) popup_note_image_window_t1

0x8fe1,	// (0x0005ce07) popup_note_image_window_t2_ParamLimits

0x8fe1,	// (0x0005ce07) popup_note_image_window_t2

0x8ffa,	// (0x0005ce20) popup_note_image_window_t3_ParamLimits

0x8ffa,	// (0x0005ce20) popup_note_image_window_t3

0x0002,

0xf86a,	// (0x00063690) popup_note_image_window_t_ParamLimits

0xf86a,	// (0x00063690) popup_note_image_window_t

0x8e63,	// (0x0005cc89) bg_popup_window_pane_cp7_ParamLimits

0x8e63,	// (0x0005cc89) bg_popup_window_pane_cp7

0x8e93,	// (0x0005ccb9) popup_note_wait_window_g1_ParamLimits

0x8e93,	// (0x0005ccb9) popup_note_wait_window_g1

0x8e9f,	// (0x0005ccc5) popup_note_wait_window_g2_ParamLimits

0x8e9f,	// (0x0005ccc5) popup_note_wait_window_g2

0x0002,

0xf853,	// (0x00063679) popup_note_wait_window_g_ParamLimits

0xf853,	// (0x00063679) popup_note_wait_window_g

0x8eb7,	// (0x0005ccdd) popup_note_wait_window_t1_ParamLimits

0x8eb7,	// (0x0005ccdd) popup_note_wait_window_t1

0x8ede,	// (0x0005cd04) popup_note_wait_window_t2_ParamLimits

0x8ede,	// (0x0005cd04) popup_note_wait_window_t2

0x8efc,	// (0x0005cd22) popup_note_wait_window_t3_ParamLimits

0x8efc,	// (0x0005cd22) popup_note_wait_window_t3

0x8f0f,	// (0x0005cd35) popup_note_wait_window_t4_ParamLimits

0x8f0f,	// (0x0005cd35) popup_note_wait_window_t4

0x0004,

0xf85a,	// (0x00063680) popup_note_wait_window_t_ParamLimits

0xf85a,	// (0x00063680) popup_note_wait_window_t

0x8f34,	// (0x0005cd5a) wait_bar_pane_ParamLimits

0x8f34,	// (0x0005cd5a) wait_bar_pane

0xb99d,	// (0x0005f7c3) wait_anim_pane

0xb99d,	// (0x0005f7c3) wait_border_pane

0xb993,	// (0x0005f7b9) wait_anim_pane_g1

0xb993,	// (0x0005f7b9) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x00063534) wait_anim_pane_g

0x8e07,	// (0x0005cc2d) wait_border_pane_g1

0x8e12,	// (0x0005cc38) wait_border_pane_g2

0x8e1b,	// (0x0005cc41) wait_border_pane_g3

0x0002,

0xf84c,	// (0x00063672) wait_border_pane_g

0x8c71,	// (0x0005ca97) bg_popup_window_pane_cp16_ParamLimits

0x8c71,	// (0x0005ca97) bg_popup_window_pane_cp16

0x8d71,	// (0x0005cb97) indicator_popup_pane_cp4_ParamLimits

0x8d71,	// (0x0005cb97) indicator_popup_pane_cp4

0x8d85,	// (0x0005cbab) popup_query_data_window_t1_ParamLimits

0x8d85,	// (0x0005cbab) popup_query_data_window_t1

0x8d97,	// (0x0005cbbd) popup_query_data_window_t2_ParamLimits

0x8d97,	// (0x0005cbbd) popup_query_data_window_t2

0x8db0,	// (0x0005cbd6) popup_query_data_window_t3_ParamLimits

0x8db0,	// (0x0005cbd6) popup_query_data_window_t3

0x0002,

0xf845,	// (0x0006366b) popup_query_data_window_t_ParamLimits

0xf845,	// (0x0006366b) popup_query_data_window_t

0x8dca,	// (0x0005cbf0) query_popup_data_pane_ParamLimits

0x8dca,	// (0x0005cbf0) query_popup_data_pane

0x8dde,	// (0x0005cc04) query_popup_data_pane_cp1_ParamLimits

0x8dde,	// (0x0005cc04) query_popup_data_pane_cp1

0x8c71,	// (0x0005ca97) bg_popup_window_pane_cp10_ParamLimits

0x8c71,	// (0x0005ca97) bg_popup_window_pane_cp10

0x8ca3,	// (0x0005cac9) indicator_popup_pane_ParamLimits

0x8ca3,	// (0x0005cac9) indicator_popup_pane

0x8cc5,	// (0x0005caeb) popup_query_code_window_t1_ParamLimits

0x8cc5,	// (0x0005caeb) popup_query_code_window_t1

0x8cdf,	// (0x0005cb05) popup_query_code_window_t2_ParamLimits

0x8cdf,	// (0x0005cb05) popup_query_code_window_t2

0x8d28,	// (0x0005cb4e) popup_query_code_window_t3_ParamLimits

0x8d28,	// (0x0005cb4e) popup_query_code_window_t3

0x0002,

0xf83e,	// (0x00063664) popup_query_code_window_t_ParamLimits

0xf83e,	// (0x00063664) popup_query_code_window_t

0x8d57,	// (0x0005cb7d) query_popup_pane_ParamLimits

0x8d57,	// (0x0005cb7d) query_popup_pane

0xec38,	// (0x00062a5e) bg_popup_window_pane_cp15_ParamLimits

0xec38,	// (0x00062a5e) bg_popup_window_pane_cp15

0xec58,	// (0x00062a7e) indicator_popup_pane_cp1_ParamLimits

0xec58,	// (0x00062a7e) indicator_popup_pane_cp1

0xec6b,	// (0x00062a91) indicator_popup_pane_cp2_ParamLimits

0xec6b,	// (0x00062a91) indicator_popup_pane_cp2

0xec86,	// (0x00062aac) popup_query_data_code_window_g1_ParamLimits

0xec86,	// (0x00062aac) popup_query_data_code_window_g1

0xec99,	// (0x00062abf) popup_query_data_code_window_t1_ParamLimits

0xec99,	// (0x00062abf) popup_query_data_code_window_t1

0xecab,	// (0x00062ad1) popup_query_data_code_window_t2_ParamLimits

0xecab,	// (0x00062ad1) popup_query_data_code_window_t2

0xecbd,	// (0x00062ae3) popup_query_data_code_window_t3_ParamLimits

0xecbd,	// (0x00062ae3) popup_query_data_code_window_t3

0xecd3,	// (0x00062af9) popup_query_data_code_window_t4_ParamLimits

0xecd3,	// (0x00062af9) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x000633b6) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x000633b6) popup_query_data_code_window_t

0x6828,	// (0x0005a64e) list_single_midp_graphic_pane_g3

0xeced,	// (0x00062b13) query_popup_data_pane_cp2_ParamLimits

0xed00,	// (0x00062b26) query_popup_pane_cp2_ParamLimits

0xed00,	// (0x00062b26) query_popup_pane_cp2

0xb99d,	// (0x0005f7c3) bg_popup_window_pane_cp11

0x8c69,	// (0x0005ca8f) heading_pane_cp5

0xed96,	// (0x00062bbc) listscroll_popup_info_pane

0xb99d,	// (0x0005f7c3) input_focus_pane_cp3

0xed1b,	// (0x00062b41) query_popup_pane_t1

0xed29,	// (0x00062b4f) list_popup_info_pane_ParamLimits

0xed29,	// (0x00062b4f) list_popup_info_pane

0xed38,	// (0x00062b5e) listscroll_popup_info_pane_g1

0xed40,	// (0x00062b66) scroll_pane_cp7

0xed4a,	// (0x00062b70) popup_info_list_pane_t1_ParamLimits

0xed4a,	// (0x00062b70) popup_info_list_pane_t1

0xed64,	// (0x00062b8a) popup_info_list_pane_t2_ParamLimits

0xed64,	// (0x00062b8a) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x000633bf) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x000633bf) popup_info_list_pane_t

0xb99d,	// (0x0005f7c3) bg_popup_window_pane_cp12

0xa1c7,	// (0x0005dfed) find_popup_pane

0xb9f7,	// (0x0005f81d) bg_popup_window_pane_cp3

0xed7e,	// (0x00062ba4) heading_pane_cp3

0xed8a,	// (0x00062bb0) listscroll_popup_graphic_pane

0xb99d,	// (0x0005f7c3) bg_popup_window_pane_cp4

0x5436,	// (0x0005925c) heading_pane_cp4

0xed96,	// (0x00062bbc) listscroll_popup_colour_pane

0x5440,	// (0x00059266) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5440,	// (0x00059266) cell_large_graphic_colour_none_popup_pane

0x5454,	// (0x0005927a) grid_large_graphic_colour_popup_pane_ParamLimits

0x5454,	// (0x0005927a) grid_large_graphic_colour_popup_pane

0x5480,	// (0x000592a6) listscroll_popup_colour_pane_g1_ParamLimits

0x5480,	// (0x000592a6) listscroll_popup_colour_pane_g1

0x5497,	// (0x000592bd) listscroll_popup_colour_pane_g2_ParamLimits

0x5497,	// (0x000592bd) listscroll_popup_colour_pane_g2

0x54ae,	// (0x000592d4) listscroll_popup_colour_pane_g3_ParamLimits

0x54ae,	// (0x000592d4) listscroll_popup_colour_pane_g3

0x54be,	// (0x000592e4) listscroll_popup_colour_pane_g4_ParamLimits

0x54be,	// (0x000592e4) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x000633c4) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x000633c4) listscroll_popup_colour_pane_g

0xed9e,	// (0x00062bc4) scroll_pane_cp6_ParamLimits

0xed9e,	// (0x00062bc4) scroll_pane_cp6

0x54d2,	// (0x000592f8) cell_large_graphic_colour_popup_pane_ParamLimits

0x54d2,	// (0x000592f8) cell_large_graphic_colour_popup_pane

0xedb0,	// (0x00062bd6) cell_large_graphic_colour_none_popup_pane_t1

0xb99d,	// (0x0005f7c3) grid_highlight_pane_cp5

0xedbf,	// (0x00062be5) cell_large_graphic_colour_popup_pane_g1

0xedc7,	// (0x00062bed) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000633cd) cell_large_graphic_colour_popup_pane_g

0xedcf,	// (0x00062bf5) cell_large_graphic_colour_popup_pane_g2_copy1

0xedd8,	// (0x00062bfe) grid_highlight_pane_cp4

0xede0,	// (0x00062c06) bg_popup_window_pane_cp8_ParamLimits

0xede0,	// (0x00062c06) bg_popup_window_pane_cp8

0xedfb,	// (0x00062c21) popup_snote_single_text_window_g1_ParamLimits

0xedfb,	// (0x00062c21) popup_snote_single_text_window_g1

0xee0d,	// (0x00062c33) popup_snote_single_text_window_t1_ParamLimits

0xee0d,	// (0x00062c33) popup_snote_single_text_window_t1

0xee20,	// (0x00062c46) popup_snote_single_text_window_t2_ParamLimits

0xee20,	// (0x00062c46) popup_snote_single_text_window_t2

0xee33,	// (0x00062c59) popup_snote_single_text_window_t3_ParamLimits

0xee33,	// (0x00062c59) popup_snote_single_text_window_t3

0xee6c,	// (0x00062c92) popup_snote_single_text_window_t4_ParamLimits

0xee6c,	// (0x00062c92) popup_snote_single_text_window_t4

0xeea0,	// (0x00062cc6) popup_snote_single_text_window_t5_ParamLimits

0xeea0,	// (0x00062cc6) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000633d2) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000633d2) popup_snote_single_text_window_t

0xeecf,	// (0x00062cf5) bg_popup_window_pane_cp9_ParamLimits

0xeecf,	// (0x00062cf5) bg_popup_window_pane_cp9

0xedfb,	// (0x00062c21) popup_snote_single_graphic_window_g1_ParamLimits

0xedfb,	// (0x00062c21) popup_snote_single_graphic_window_g1

0xeedd,	// (0x00062d03) popup_snote_single_graphic_window_g2_ParamLimits

0xeedd,	// (0x00062d03) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000633dd) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000633dd) popup_snote_single_graphic_window_g

0xeee9,	// (0x00062d0f) popup_snote_single_graphic_window_t1_ParamLimits

0xeee9,	// (0x00062d0f) popup_snote_single_graphic_window_t1

0xeefc,	// (0x00062d22) popup_snote_single_graphic_window_t2_ParamLimits

0xeefc,	// (0x00062d22) popup_snote_single_graphic_window_t2

0xef0f,	// (0x00062d35) popup_snote_single_graphic_window_t3_ParamLimits

0xef0f,	// (0x00062d35) popup_snote_single_graphic_window_t3

0xef48,	// (0x00062d6e) popup_snote_single_graphic_window_t4_ParamLimits

0xef48,	// (0x00062d6e) popup_snote_single_graphic_window_t4

0xef7c,	// (0x00062da2) popup_snote_single_graphic_window_t5_ParamLimits

0xef7c,	// (0x00062da2) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000633e2) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000633e2) popup_snote_single_graphic_window_t

0xa105,	// (0x0005df2b) grid_graphic_popup_pane_ParamLimits

0xa105,	// (0x0005df2b) grid_graphic_popup_pane

0xa133,	// (0x0005df59) listscroll_popup_graphic_pane_g1_ParamLimits

0xa133,	// (0x0005df59) listscroll_popup_graphic_pane_g1

0xa147,	// (0x0005df6d) listscroll_popup_graphic_pane_g2_ParamLimits

0xa147,	// (0x0005df6d) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bb,	// (0x000637e1) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bb,	// (0x000637e1) listscroll_popup_graphic_pane_g

0xa15b,	// (0x0005df81) scroll_pane_cp5

0xa0ad,	// (0x0005ded3) cell_graphic_popup_pane_ParamLimits

0xa0ad,	// (0x0005ded3) cell_graphic_popup_pane

0xa08e,	// (0x0005deb4) cell_graphic_popup_pane_g1

0xa096,	// (0x0005debc) cell_graphic_popup_pane_g2

0xedcf,	// (0x00062bf5) cell_graphic_popup_pane_g3

0x0002,

0xf9b4,	// (0x000637da) cell_graphic_popup_pane_g

0xa09f,	// (0x0005dec5) cell_graphic_popup_pane_t2

0xedd8,	// (0x00062bfe) grid_highlight_pane_cp3

0xefbd,	// (0x00062de3) list_gen_pane_ParamLimits

0xefbd,	// (0x00062de3) list_gen_pane

0xefe5,	// (0x00062e0b) scroll_pane

0x9fe6,	// (0x0005de0c) bg_list_pane_g1_ParamLimits

0x9fe6,	// (0x0005de0c) bg_list_pane_g1

0xa003,	// (0x0005de29) bg_list_pane_g2_ParamLimits

0xa003,	// (0x0005de29) bg_list_pane_g2

0xa018,	// (0x0005de3e) bg_list_pane_g3_ParamLimits

0xa018,	// (0x0005de3e) bg_list_pane_g3

0xa02c,	// (0x0005de52) bg_list_pane_g4_ParamLimits

0xa02c,	// (0x0005de52) bg_list_pane_g4

0xa040,	// (0x0005de66) bg_list_pane_g5_ParamLimits

0xa040,	// (0x0005de66) bg_list_pane_g5

0x0004,

0xf9a9,	// (0x000637cf) bg_list_pane_g_ParamLimits

0xf9a9,	// (0x000637cf) bg_list_pane_g

0x9954,	// (0x0005d77a) list_double2_graphic_large_graphic_pane_ParamLimits

0x9954,	// (0x0005d77a) list_double2_graphic_large_graphic_pane

0x9954,	// (0x0005d77a) list_double2_graphic_pane_ParamLimits

0x9954,	// (0x0005d77a) list_double2_graphic_pane

0x9954,	// (0x0005d77a) list_double2_large_graphic_pane_ParamLimits

0x9954,	// (0x0005d77a) list_double2_large_graphic_pane

0x9954,	// (0x0005d77a) list_double2_pane_ParamLimits

0x9954,	// (0x0005d77a) list_double2_pane

0x9954,	// (0x0005d77a) list_double_graphic_heading_pane_ParamLimits

0x9954,	// (0x0005d77a) list_double_graphic_heading_pane

0x9954,	// (0x0005d77a) list_double_graphic_pane_ParamLimits

0x9954,	// (0x0005d77a) list_double_graphic_pane

0x9954,	// (0x0005d77a) list_double_heading_pane_ParamLimits

0x9954,	// (0x0005d77a) list_double_heading_pane

0x9954,	// (0x0005d77a) list_double_large_graphic_pane_ParamLimits

0x9954,	// (0x0005d77a) list_double_large_graphic_pane

0x9954,	// (0x0005d77a) list_double_number_pane_ParamLimits

0x9954,	// (0x0005d77a) list_double_number_pane

0x9954,	// (0x0005d77a) list_double_pane_ParamLimits

0x9954,	// (0x0005d77a) list_double_pane

0x9954,	// (0x0005d77a) list_double_time_pane_ParamLimits

0x9954,	// (0x0005d77a) list_double_time_pane

0x9954,	// (0x0005d77a) list_setting_number_pane_ParamLimits

0x9954,	// (0x0005d77a) list_setting_number_pane

0x9954,	// (0x0005d77a) list_setting_pane_ParamLimits

0x9954,	// (0x0005d77a) list_setting_pane

0x9fa2,	// (0x0005ddc8) list_single_2graphic_pane_ParamLimits

0x9fa2,	// (0x0005ddc8) list_single_2graphic_pane

0x9fa2,	// (0x0005ddc8) list_single_graphic_heading_pane_ParamLimits

0x9fa2,	// (0x0005ddc8) list_single_graphic_heading_pane

0x9fa2,	// (0x0005ddc8) list_single_graphic_pane_ParamLimits

0x9fa2,	// (0x0005ddc8) list_single_graphic_pane

0x9fa2,	// (0x0005ddc8) list_single_heading_pane_ParamLimits

0x9fa2,	// (0x0005ddc8) list_single_heading_pane

0x997c,	// (0x0005d7a2) list_single_large_graphic_pane_ParamLimits

0x997c,	// (0x0005d7a2) list_single_large_graphic_pane

0x9fa2,	// (0x0005ddc8) list_single_number_heading_pane_ParamLimits

0x9fa2,	// (0x0005ddc8) list_single_number_heading_pane

0x9fa2,	// (0x0005ddc8) list_single_number_pane_ParamLimits

0x9fa2,	// (0x0005ddc8) list_single_number_pane

0x9fa2,	// (0x0005ddc8) list_single_pane_ParamLimits

0x9fa2,	// (0x0005ddc8) list_single_pane

0xb99d,	// (0x0005f7c3) list_highlight_pane_cp1

0x1e32,	// (0x00055c58) list_single_pane_g1_ParamLimits

0x1e32,	// (0x00055c58) list_single_pane_g1

0x550d,	// (0x00059333) list_single_pane_g2_ParamLimits

0x550d,	// (0x00059333) list_single_pane_g2

0x0001,

0xf5d8,	// (0x000633fe) list_single_pane_g_ParamLimits

0xf5d8,	// (0x000633fe) list_single_pane_g

0x6bf9,	// (0x0005aa1f) list_single_pane_t1_ParamLimits

0x6bf9,	// (0x0005aa1f) list_single_pane_t1

0x1e32,	// (0x00055c58) list_single_number_pane_g1_ParamLimits

0x1e32,	// (0x00055c58) list_single_number_pane_g1

0x550d,	// (0x00059333) list_single_number_pane_g2_ParamLimits

0x550d,	// (0x00059333) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x000633fe) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x000633fe) list_single_number_pane_g

0x6b23,	// (0x0005a949) list_single_number_pane_t1_ParamLimits

0x6b23,	// (0x0005a949) list_single_number_pane_t1

0x6b39,	// (0x0005a95f) list_single_number_pane_t2_ParamLimits

0x6b39,	// (0x0005a95f) list_single_number_pane_t2

0x0001,

0xf96a,	// (0x00063790) list_single_number_pane_t_ParamLimits

0xf96a,	// (0x00063790) list_single_number_pane_t

0x5501,	// (0x00059327) list_single_graphic_pane_g1_ParamLimits

0x5501,	// (0x00059327) list_single_graphic_pane_g1

0x1e32,	// (0x00055c58) list_single_graphic_pane_g2_ParamLimits

0x1e32,	// (0x00055c58) list_single_graphic_pane_g2

0x550d,	// (0x00059333) list_single_graphic_pane_g3_ParamLimits

0x550d,	// (0x00059333) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x000633ed) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x000633ed) list_single_graphic_pane_g

0x5519,	// (0x0005933f) list_single_graphic_pane_t1_ParamLimits

0x5519,	// (0x0005933f) list_single_graphic_pane_t1

0x552f,	// (0x00059355) list_single_heading_pane_g1_ParamLimits

0x552f,	// (0x00059355) list_single_heading_pane_g1

0x550d,	// (0x00059333) list_single_heading_pane_g2_ParamLimits

0x550d,	// (0x00059333) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x000633f4) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x000633f4) list_single_heading_pane_g

0x5542,	// (0x00059368) list_single_heading_pane_t1_ParamLimits

0x5542,	// (0x00059368) list_single_heading_pane_t1

0x5558,	// (0x0005937e) list_single_heading_pane_t2_ParamLimits

0x5558,	// (0x0005937e) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x000633f9) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x000633f9) list_single_heading_pane_t

0x1e32,	// (0x00055c58) list_single_number_heading_pane_g1_ParamLimits

0x1e32,	// (0x00055c58) list_single_number_heading_pane_g1

0x550d,	// (0x00059333) list_single_number_heading_pane_g2_ParamLimits

0x550d,	// (0x00059333) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x000633fe) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x000633fe) list_single_number_heading_pane_g

0x556a,	// (0x00059390) list_single_number_heading_pane_t1_ParamLimits

0x556a,	// (0x00059390) list_single_number_heading_pane_t1

0x5580,	// (0x000593a6) list_single_number_heading_pane_t2_ParamLimits

0x5580,	// (0x000593a6) list_single_number_heading_pane_t2

0x5592,	// (0x000593b8) list_single_number_heading_pane_t3_ParamLimits

0x5592,	// (0x000593b8) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x00063403) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x00063403) list_single_number_heading_pane_t

0x55a4,	// (0x000593ca) list_single_graphic_heading_pane_g1_ParamLimits

0x55a4,	// (0x000593ca) list_single_graphic_heading_pane_g1

0x55bc,	// (0x000593e2) list_single_graphic_heading_pane_g4_ParamLimits

0x55bc,	// (0x000593e2) list_single_graphic_heading_pane_g4

0x550d,	// (0x00059333) list_single_graphic_heading_pane_g5_ParamLimits

0x550d,	// (0x00059333) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0006340a) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0006340a) list_single_graphic_heading_pane_g

0x556a,	// (0x00059390) list_single_graphic_heading_pane_t1_ParamLimits

0x556a,	// (0x00059390) list_single_graphic_heading_pane_t1

0x55cd,	// (0x000593f3) list_single_graphic_heading_pane_t2_ParamLimits

0x55cd,	// (0x000593f3) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x00063411) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x00063411) list_single_graphic_heading_pane_t

0x55e5,	// (0x0005940b) list_single_large_graphic_pane_g1_ParamLimits

0x55e5,	// (0x0005940b) list_single_large_graphic_pane_g1

0x55f1,	// (0x00059417) list_single_large_graphic_pane_g2_ParamLimits

0x55f1,	// (0x00059417) list_single_large_graphic_pane_g2

0x55fd,	// (0x00059423) list_single_large_graphic_pane_g3_ParamLimits

0x55fd,	// (0x00059423) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00063416) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00063416) list_single_large_graphic_pane_g

0x8e12,	// (0x0005cc38) wait_border_pane_g2_copy1

0x5609,	// (0x0005942f) list_single_large_graphic_pane_g4_cp2

0x5611,	// (0x00059437) list_single_large_graphic_pane_t1_ParamLimits

0x5611,	// (0x00059437) list_single_large_graphic_pane_t1

0x5627,	// (0x0005944d) list_double_pane_g1_ParamLimits

0x5627,	// (0x0005944d) list_double_pane_g1

0x5633,	// (0x00059459) list_double_pane_g2_ParamLimits

0x5633,	// (0x00059459) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0006341d) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0006341d) list_double_pane_g

0x563f,	// (0x00059465) list_double_pane_t1_ParamLimits

0x563f,	// (0x00059465) list_double_pane_t1

0x5655,	// (0x0005947b) list_double_pane_t2_ParamLimits

0x5655,	// (0x0005947b) list_double_pane_t2

0x0001,

0xf5fc,	// (0x00063422) list_double_pane_t_ParamLimits

0xf5fc,	// (0x00063422) list_double_pane_t

0x5667,	// (0x0005948d) list_double2_pane_g1_ParamLimits

0x5667,	// (0x0005948d) list_double2_pane_g1

0x5678,	// (0x0005949e) list_double2_pane_g2_ParamLimits

0x5678,	// (0x0005949e) list_double2_pane_g2

0x0001,

0xf601,	// (0x00063427) list_double2_pane_g_ParamLimits

0xf601,	// (0x00063427) list_double2_pane_g

0x5684,	// (0x000594aa) list_double2_pane_t1_ParamLimits

0x5684,	// (0x000594aa) list_double2_pane_t1

0x569a,	// (0x000594c0) list_double2_pane_t2_ParamLimits

0x569a,	// (0x000594c0) list_double2_pane_t2

0x0001,

0xf606,	// (0x0006342c) list_double2_pane_t_ParamLimits

0xf606,	// (0x0006342c) list_double2_pane_t

0x5627,	// (0x0005944d) list_double_number_pane_g1_ParamLimits

0x5627,	// (0x0005944d) list_double_number_pane_g1

0x5633,	// (0x00059459) list_double_number_pane_g2_ParamLimits

0x5633,	// (0x00059459) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0006341d) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0006341d) list_double_number_pane_g

0x56ac,	// (0x000594d2) list_double_number_pane_t1_ParamLimits

0x56ac,	// (0x000594d2) list_double_number_pane_t1

0x56be,	// (0x000594e4) list_double_number_pane_t2_ParamLimits

0x56be,	// (0x000594e4) list_double_number_pane_t2

0x56d4,	// (0x000594fa) list_double_number_pane_t3_ParamLimits

0x56d4,	// (0x000594fa) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x00063431) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x00063431) list_double_number_pane_t

0x56e6,	// (0x0005950c) list_double_graphic_pane_g1_ParamLimits

0x56e6,	// (0x0005950c) list_double_graphic_pane_g1

0x56f2,	// (0x00059518) list_double_graphic_pane_g2_ParamLimits

0x56f2,	// (0x00059518) list_double_graphic_pane_g2

0x5701,	// (0x00059527) list_double_graphic_pane_g3_ParamLimits

0x5701,	// (0x00059527) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x00063438) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x00063438) list_double_graphic_pane_g

0x5719,	// (0x0005953f) list_double_graphic_pane_t1_ParamLimits

0x5719,	// (0x0005953f) list_double_graphic_pane_t1

0x572f,	// (0x00059555) list_double_graphic_pane_t2_ParamLimits

0x572f,	// (0x00059555) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x00063441) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x00063441) list_double_graphic_pane_t

0x3271,	// (0x00057097) list_double2_graphic_pane_g1_ParamLimits

0x3271,	// (0x00057097) list_double2_graphic_pane_g1

0x5741,	// (0x00059567) list_double2_graphic_pane_g2_ParamLimits

0x5741,	// (0x00059567) list_double2_graphic_pane_g2

0x574d,	// (0x00059573) list_double2_graphic_pane_g3_ParamLimits

0x574d,	// (0x00059573) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x00063446) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x00063446) list_double2_graphic_pane_g

0x5759,	// (0x0005957f) list_double2_graphic_pane_t1_ParamLimits

0x5759,	// (0x0005957f) list_double2_graphic_pane_t1

0x576f,	// (0x00059595) list_double2_graphic_pane_t2_ParamLimits

0x576f,	// (0x00059595) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0006344d) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0006344d) list_double2_graphic_pane_t

0x5781,	// (0x000595a7) list_double_large_graphic_pane_g1_ParamLimits

0x5781,	// (0x000595a7) list_double_large_graphic_pane_g1

0x57ac,	// (0x000595d2) list_double_large_graphic_pane_g2_ParamLimits

0x57ac,	// (0x000595d2) list_double_large_graphic_pane_g2

0x5633,	// (0x00059459) list_double_large_graphic_pane_g3_ParamLimits

0x5633,	// (0x00059459) list_double_large_graphic_pane_g3

0x57c2,	// (0x000595e8) list_double_large_graphic_pane_g4_ParamLimits

0x57c2,	// (0x000595e8) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x00063452) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00063452) list_double_large_graphic_pane_g

0x57d5,	// (0x000595fb) list_double_large_graphic_pane_t1_ParamLimits

0x57d5,	// (0x000595fb) list_double_large_graphic_pane_t1

0x57ee,	// (0x00059614) list_double_large_graphic_pane_t2_ParamLimits

0x57ee,	// (0x00059614) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0006345d) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0006345d) list_double_large_graphic_pane_t

0x5800,	// (0x00059626) list_double2_large_graphic_pane_g1_ParamLimits

0x5800,	// (0x00059626) list_double2_large_graphic_pane_g1

0x580c,	// (0x00059632) list_double2_large_graphic_pane_g2_ParamLimits

0x580c,	// (0x00059632) list_double2_large_graphic_pane_g2

0x574d,	// (0x00059573) list_double2_large_graphic_pane_g3_ParamLimits

0x574d,	// (0x00059573) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x00063462) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x00063462) list_double2_large_graphic_pane_g

0x581d,	// (0x00059643) list_double2_large_graphic_pane_t1_ParamLimits

0x581d,	// (0x00059643) list_double2_large_graphic_pane_t1

0x5833,	// (0x00059659) list_double2_large_graphic_pane_t2_ParamLimits

0x5833,	// (0x00059659) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x00063469) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x00063469) list_double2_large_graphic_pane_t

0x5845,	// (0x0005966b) list_double_heading_pane_g1_ParamLimits

0x5845,	// (0x0005966b) list_double_heading_pane_g1

0x5856,	// (0x0005967c) list_double_heading_pane_g2_ParamLimits

0x5856,	// (0x0005967c) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0006346e) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0006346e) list_double_heading_pane_g

0x5862,	// (0x00059688) list_double_heading_pane_t1_ParamLimits

0x5862,	// (0x00059688) list_double_heading_pane_t1

0x5878,	// (0x0005969e) list_double_heading_pane_t2_ParamLimits

0x5878,	// (0x0005969e) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x00063473) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x00063473) list_double_heading_pane_t

0x56e6,	// (0x0005950c) list_double_graphic_heading_pane_g1_ParamLimits

0x56e6,	// (0x0005950c) list_double_graphic_heading_pane_g1

0x5845,	// (0x0005966b) list_double_graphic_heading_pane_g2_ParamLimits

0x5845,	// (0x0005966b) list_double_graphic_heading_pane_g2

0x5856,	// (0x0005967c) list_double_graphic_heading_pane_g3_ParamLimits

0x5856,	// (0x0005967c) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x00063478) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x00063478) list_double_graphic_heading_pane_g

0x588a,	// (0x000596b0) list_double_graphic_heading_pane_t1_ParamLimits

0x588a,	// (0x000596b0) list_double_graphic_heading_pane_t1

0x58a0,	// (0x000596c6) list_double_graphic_heading_pane_t2_ParamLimits

0x58a0,	// (0x000596c6) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0006347f) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0006347f) list_double_graphic_heading_pane_t

0x58b2,	// (0x000596d8) list_double_time_pane_g1_ParamLimits

0x58b2,	// (0x000596d8) list_double_time_pane_g1

0x58c3,	// (0x000596e9) list_double_time_pane_g2_ParamLimits

0x58c3,	// (0x000596e9) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x00063484) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x00063484) list_double_time_pane_g

0x58cf,	// (0x000596f5) list_double_time_pane_t1_ParamLimits

0x58cf,	// (0x000596f5) list_double_time_pane_t1

0x58e5,	// (0x0005970b) list_double_time_pane_t2_ParamLimits

0x58e5,	// (0x0005970b) list_double_time_pane_t2

0x58f7,	// (0x0005971d) list_double_time_pane_t3_ParamLimits

0x58f7,	// (0x0005971d) list_double_time_pane_t3

0x5909,	// (0x0005972f) list_double_time_pane_t4_ParamLimits

0x5909,	// (0x0005972f) list_double_time_pane_t4

0x0003,

0xf663,	// (0x00063489) list_double_time_pane_t_ParamLimits

0xf663,	// (0x00063489) list_double_time_pane_t

0x591b,	// (0x00059741) list_setting_pane_g1_ParamLimits

0x591b,	// (0x00059741) list_setting_pane_g1

0x5927,	// (0x0005974d) list_setting_pane_g2_ParamLimits

0x5927,	// (0x0005974d) list_setting_pane_g2

0x0001,

0xf66c,	// (0x00063492) list_setting_pane_g_ParamLimits

0xf66c,	// (0x00063492) list_setting_pane_g

0x5933,	// (0x00059759) list_setting_pane_t1_ParamLimits

0x5933,	// (0x00059759) list_setting_pane_t1

0x594d,	// (0x00059773) list_setting_pane_t2_ParamLimits

0x594d,	// (0x00059773) list_setting_pane_t2

0x0002,

0xf671,	// (0x00063497) list_setting_pane_t_ParamLimits

0xf671,	// (0x00063497) list_setting_pane_t

0x598c,	// (0x000597b2) set_value_pane_cp_ParamLimits

0x598c,	// (0x000597b2) set_value_pane_cp

0x599a,	// (0x000597c0) list_setting_number_pane_g1_ParamLimits

0x599a,	// (0x000597c0) list_setting_number_pane_g1

0x59a6,	// (0x000597cc) list_setting_number_pane_g2_ParamLimits

0x59a6,	// (0x000597cc) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0006349e) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0006349e) list_setting_number_pane_g

0x59b2,	// (0x000597d8) list_setting_number_pane_t1_ParamLimits

0x59b2,	// (0x000597d8) list_setting_number_pane_t1

0x59cb,	// (0x000597f1) list_setting_number_pane_t2_ParamLimits

0x59cb,	// (0x000597f1) list_setting_number_pane_t2

0x59e5,	// (0x0005980b) list_setting_number_pane_t3_ParamLimits

0x59e5,	// (0x0005980b) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x000634a3) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x000634a3) list_setting_number_pane_t

0x598c,	// (0x000597b2) set_value_pane_ParamLimits

0x598c,	// (0x000597b2) set_value_pane

0xf019,	// (0x00062e3f) bg_set_opt_pane_ParamLimits

0xf019,	// (0x00062e3f) bg_set_opt_pane

0x327d,	// (0x000570a3) set_value_pane_t1

0xf03a,	// (0x00062e60) slider_set_pane_cp3

0xf043,	// (0x00062e69) volume_small_pane_cp

0xf04c,	// (0x00062e72) list_form_gen_pane

0xf055,	// (0x00062e7b) scroll_pane_cp8

0x5a28,	// (0x0005984e) form_field_data_pane_ParamLimits

0x5a28,	// (0x0005984e) form_field_data_pane

0x5a48,	// (0x0005986e) form_field_data_wide_pane_ParamLimits

0x5a48,	// (0x0005986e) form_field_data_wide_pane

0x5a6f,	// (0x00059895) form_field_popup_pane_ParamLimits

0x5a6f,	// (0x00059895) form_field_popup_pane

0x329b,	// (0x000570c1) form_field_popup_wide_pane_ParamLimits

0x329b,	// (0x000570c1) form_field_popup_wide_pane

0x32bc,	// (0x000570e2) form_field_slider_pane_ParamLimits

0x32bc,	// (0x000570e2) form_field_slider_pane

0x32cf,	// (0x000570f5) form_field_slider_wide_pane_ParamLimits

0x32cf,	// (0x000570f5) form_field_slider_wide_pane

0xf066,	// (0x00062e8c) data_form_pane

0x5a9b,	// (0x000598c1) form_field_data_pane_t1

0xf072,	// (0x00062e98) input_focus_pane

0x32e2,	// (0x00057108) data_form_wide_pane

0x32ff,	// (0x00057125) form_field_data_wide_pane_t1

0xeded,	// (0x00062c13) input_focus_pane_cp6

0x5ab5,	// (0x000598db) form_field_popup_pane_t1

0xf072,	// (0x00062e98) input_focus_pane_cp7

0xf0a0,	// (0x00062ec6) list_form_pane

0x3329,	// (0x0005714f) form_field_popup_wide_pane_t1

0xf072,	// (0x00062e98) input_focus_pane_cp8

0xf0ac,	// (0x00062ed2) list_form_wide_pane

0x5ad7,	// (0x000598fd) form_field_slider_pane_t1_ParamLimits

0x5ad7,	// (0x000598fd) form_field_slider_pane_t1

0x5aef,	// (0x00059915) form_field_slider_pane_t2_ParamLimits

0x5aef,	// (0x00059915) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x000634b3) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x000634b3) form_field_slider_pane_t

0xba64,	// (0x0005f88a) input_focus_pane_cp9_ParamLimits

0xba64,	// (0x0005f88a) input_focus_pane_cp9

0x5b04,	// (0x0005992a) slider_cont_pane_ParamLimits

0x5b04,	// (0x0005992a) slider_cont_pane

0xf0bb,	// (0x00062ee1) form_field_slider_wide_pane_t1_ParamLimits

0xf0bb,	// (0x00062ee1) form_field_slider_wide_pane_t1

0x333e,	// (0x00057164) form_field_slider_wide_pane_t2_ParamLimits

0x333e,	// (0x00057164) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x000634b8) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x000634b8) form_field_slider_wide_pane_t

0xba64,	// (0x0005f88a) input_focus_pane_cp10_ParamLimits

0xba64,	// (0x0005f88a) input_focus_pane_cp10

0x5b18,	// (0x0005993e) slider_cont_pane_cp1_ParamLimits

0x5b18,	// (0x0005993e) slider_cont_pane_cp1

0x5b2c,	// (0x00059952) slider_form_pane_cp

0xf0cd,	// (0x00062ef3) input_focus_pane_g1

0xf0d5,	// (0x00062efb) input_focus_pane_g2

0xf0dd,	// (0x00062f03) input_focus_pane_g3

0xf0e5,	// (0x00062f0b) input_focus_pane_g4

0xf0ed,	// (0x00062f13) input_focus_pane_g5

0xf0f5,	// (0x00062f1b) input_focus_pane_g6

0xf0fd,	// (0x00062f23) input_focus_pane_g7

0xf105,	// (0x00062f2b) input_focus_pane_g8

0xf10d,	// (0x00062f33) input_focus_pane_g9

0xb993,	// (0x0005f7b9) input_focus_pane_g10

0x0009,

0xf697,	// (0x000634bd) input_focus_pane_g

0x8e1b,	// (0x0005cc41) wait_border_pane_g3_copy1

0x5b34,	// (0x0005995a) data_form_pane_t1

0xb993,	// (0x0005f7b9) wait_anim_pane_g1_copy1

0x6bc3,	// (0x0005a9e9) data_form_wide_pane_t1

0x3350,	// (0x00057176) list_form_graphic_pane_cp_ParamLimits

0x3350,	// (0x00057176) list_form_graphic_pane_cp

0x9f1b,	// (0x0005dd41) slider_form_pane_g1

0x9f24,	// (0x0005dd4a) slider_form_pane_g2

0x0006,

0xf99a,	// (0x000637c0) slider_form_pane_g

0x3350,	// (0x00057176) list_form_graphic_pane_ParamLimits

0x3350,	// (0x00057176) list_form_graphic_pane

0x3362,	// (0x00057188) list_form_graphic_pane_g1

0x336a,	// (0x00057190) list_form_graphic_pane_t1_ParamLimits

0x336a,	// (0x00057190) list_form_graphic_pane_t1

0xb9f7,	// (0x0005f81d) list_highlight_pane_cp5_ParamLimits

0xb9f7,	// (0x0005f81d) list_highlight_pane_cp5

0x5b53,	// (0x00059979) find_pane_g1

0xf115,	// (0x00062f3b) input_find_pane

0x5b5c,	// (0x00059982) input_find_pane_g1_ParamLimits

0x5b5c,	// (0x00059982) input_find_pane_g1

0x5b68,	// (0x0005998e) input_find_pane_t1_ParamLimits

0x5b68,	// (0x0005998e) input_find_pane_t1

0x5b7d,	// (0x000599a3) input_find_pane_t2_ParamLimits

0x5b7d,	// (0x000599a3) input_find_pane_t2

0x0001,

0xf6ac,	// (0x000634d2) input_find_pane_t_ParamLimits

0xf6ac,	// (0x000634d2) input_find_pane_t

0xf11e,	// (0x00062f44) input_focus_pane_cp5_ParamLimits

0xf11e,	// (0x00062f44) input_focus_pane_cp5

0xf12c,	// (0x00062f52) bg_popup_window_pane_cp2_ParamLimits

0xf12c,	// (0x00062f52) bg_popup_window_pane_cp2

0xf139,	// (0x00062f5f) listscroll_menu_pane_ParamLimits

0xf139,	// (0x00062f5f) listscroll_menu_pane

0x5b9e,	// (0x000599c4) popup_submenu_window_ParamLimits

0x5b9e,	// (0x000599c4) popup_submenu_window

0xf145,	// (0x00062f6b) find_popup_pane_g1

0xf14d,	// (0x00062f73) input_popup_find_pane_cp

0xf11e,	// (0x00062f44) input_focus_pane_cp4_ParamLimits

0xf11e,	// (0x00062f44) input_focus_pane_cp4

0xf157,	// (0x00062f7d) input_popup_find_pane_t1_ParamLimits

0xf157,	// (0x00062f7d) input_popup_find_pane_t1

0xb99d,	// (0x0005f7c3) bg_popup_sub_pane_cp

0xf185,	// (0x00062fab) listscroll_popup_sub_pane

0xf18d,	// (0x00062fb3) list_submenu_pane_ParamLimits

0xf18d,	// (0x00062fb3) list_submenu_pane

0xf19e,	// (0x00062fc4) scroll_pane_cp4

0xf1a6,	// (0x00062fcc) list_single_popup_submenu_pane_ParamLimits

0xf1a6,	// (0x00062fcc) list_single_popup_submenu_pane

0xf1bb,	// (0x00062fe1) list_single_popup_submenu_pane_g1

0xf1c3,	// (0x00062fe9) list_single_popup_submenu_pane_t1_ParamLimits

0xf1c3,	// (0x00062fe9) list_single_popup_submenu_pane_t1

0xb9f7,	// (0x0005f81d) bg_active_tab_pane_cp1_ParamLimits

0xb9f7,	// (0x0005f81d) bg_active_tab_pane_cp1

0x5bdc,	// (0x00059a02) tabs_2_active_pane_g1

0x5be4,	// (0x00059a0a) tabs_2_active_pane_t1

0xb9f7,	// (0x0005f81d) bg_passive_tab_pane_cp1_ParamLimits

0xb9f7,	// (0x0005f81d) bg_passive_tab_pane_cp1

0x5bdc,	// (0x00059a02) tabs_2_passive_pane_g1

0x5be4,	// (0x00059a0a) tabs_2_passive_pane_t1

0x1aa7,	// (0x000558cd) bg_active_tab_pane_cp4

0x5bf6,	// (0x00059a1c) tabs_2_long_active_pane_t1

0x5c09,	// (0x00059a2f) bg_passive_tab_pane_cp4

0x6830,	// (0x0005a656) list_single_midp_graphic_pane_g4_ParamLimits

0x1aa7,	// (0x000558cd) bg_active_tab_pane_cp5

0x5c15,	// (0x00059a3b) tabs_3_long_active_pane_t1

0x5c09,	// (0x00059a2f) bg_passive_tab_pane_cp5

0x6830,	// (0x0005a656) list_single_midp_graphic_pane_g4

0xb9f7,	// (0x0005f81d) bg_popup_window_pane_cp13_ParamLimits

0xb9f7,	// (0x0005f81d) bg_popup_window_pane_cp13

0xf1e1,	// (0x00063007) listscroll_popup_fast_pane_ParamLimits

0xf1e1,	// (0x00063007) listscroll_popup_fast_pane

0xf1f0,	// (0x00063016) grid_popup_fast_pane_ParamLimits

0xf1f0,	// (0x00063016) grid_popup_fast_pane

0xf202,	// (0x00063028) scroll_pane_cp9_ParamLimits

0xf202,	// (0x00063028) scroll_pane_cp9

0xb880,	// (0x0005f6a6) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xb880,	// (0x0005f6a6) list_single_graphic_hl_pane_t1_cp2

0xf226,	// (0x0006304c) input_focus_pane_cp20_ParamLimits

0xf226,	// (0x0006304c) input_focus_pane_cp20

0xf234,	// (0x0006305a) query_popup_data_pane_t1_ParamLimits

0xf234,	// (0x0006305a) query_popup_data_pane_t1

0xf247,	// (0x0006306d) query_popup_data_pane_t2_ParamLimits

0xf247,	// (0x0006306d) query_popup_data_pane_t2

0xf28d,	// (0x000630b3) query_popup_data_pane_t3_ParamLimits

0xf28d,	// (0x000630b3) query_popup_data_pane_t3

0xf2ce,	// (0x000630f4) query_popup_data_pane_t4_ParamLimits

0xf2ce,	// (0x000630f4) query_popup_data_pane_t4

0xf30a,	// (0x00063130) query_popup_data_pane_t5_ParamLimits

0xf30a,	// (0x00063130) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x000634d7) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x000634d7) query_popup_data_pane_t

0xf0cd,	// (0x00062ef3) bg_set_opt_pane_g1

0xf0d5,	// (0x00062efb) bg_set_opt_pane_g2

0xf0dd,	// (0x00062f03) bg_set_opt_pane_g3

0xf0e5,	// (0x00062f0b) bg_set_opt_pane_g4

0xf0ed,	// (0x00062f13) bg_set_opt_pane_g5

0xf0f5,	// (0x00062f1b) bg_set_opt_pane_g6

0xf0fd,	// (0x00062f23) bg_set_opt_pane_g7

0xf105,	// (0x00062f2b) bg_set_opt_pane_g8

0xf10d,	// (0x00062f33) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x000634e2) bg_set_opt_pane_g

0x6115,	// (0x00059f3b) control_top_pane_stacon_ParamLimits

0x6115,	// (0x00059f3b) control_top_pane_stacon

0x6168,	// (0x00059f8e) signal_pane_stacon_ParamLimits

0x6168,	// (0x00059f8e) signal_pane_stacon

0x3388,	// (0x000571ae) stacon_top_pane_g1_ParamLimits

0x3388,	// (0x000571ae) stacon_top_pane_g1

0x618d,	// (0x00059fb3) title_pane_stacon_ParamLimits

0x618d,	// (0x00059fb3) title_pane_stacon

0x61b7,	// (0x00059fdd) uni_indicator_pane_stacon_ParamLimits

0x61b7,	// (0x00059fdd) uni_indicator_pane_stacon

0x61cf,	// (0x00059ff5) battery_pane_stacon_ParamLimits

0x61cf,	// (0x00059ff5) battery_pane_stacon

0x6213,	// (0x0005a039) control_bottom_pane_stacon_ParamLimits

0x6213,	// (0x0005a039) control_bottom_pane_stacon

0x6236,	// (0x0005a05c) navi_pane_stacon_ParamLimits

0x6236,	// (0x0005a05c) navi_pane_stacon

0x33aa,	// (0x000571d0) stacon_bottom_pane_g1_ParamLimits

0x33aa,	// (0x000571d0) stacon_bottom_pane_g1

0x5c27,	// (0x00059a4d) aid_levels_signal_lsc_ParamLimits

0x5c27,	// (0x00059a4d) aid_levels_signal_lsc

0x5c3e,	// (0x00059a64) signal_pane_stacon_g1_ParamLimits

0x5c3e,	// (0x00059a64) signal_pane_stacon_g1

0x5c52,	// (0x00059a78) signal_pane_stacon_g2_ParamLimits

0x5c52,	// (0x00059a78) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x000634f5) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x000634f5) signal_pane_stacon_g

0x5c87,	// (0x00059aad) title_pane_stacon_t1_ParamLimits

0x5c87,	// (0x00059aad) title_pane_stacon_t1

0xf34e,	// (0x00063174) uni_indicator_pane_stacon_g1

0xf358,	// (0x0006317e) uni_indicator_pane_stacon_g2

0xf362,	// (0x00063188) uni_indicator_pane_stacon_g3

0xf36c,	// (0x00063192) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x00063501) uni_indicator_pane_stacon_g

0x5cac,	// (0x00059ad2) control_top_pane_stacon_g1

0x5cb4,	// (0x00059ada) control_top_pane_stacon_t1_ParamLimits

0x5cb4,	// (0x00059ada) control_top_pane_stacon_t1

0x5ceb,	// (0x00059b11) aid_levels_battery_lsc_ParamLimits

0x5ceb,	// (0x00059b11) aid_levels_battery_lsc

0x5d03,	// (0x00059b29) battery_pane_stacon_g1_ParamLimits

0x5d03,	// (0x00059b29) battery_pane_stacon_g1

0x5d16,	// (0x00059b3c) battery_pane_stacon_g2_ParamLimits

0x5d16,	// (0x00059b3c) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0006350a) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0006350a) battery_pane_stacon_g

0x5d54,	// (0x00059b7a) navi_icon_pane_stacon

0x5d68,	// (0x00059b8e) navi_navi_pane_stacon

0x5d54,	// (0x00059b7a) navi_text_pane_stacon

0x5cac,	// (0x00059ad2) control_bottom_pane_stacon_g1

0x5d7e,	// (0x00059ba4) control_bottom_pane_stacon_t1_ParamLimits

0x5d7e,	// (0x00059ba4) control_bottom_pane_stacon_t1

0x5db5,	// (0x00059bdb) grid_app_pane_ParamLimits

0x5db5,	// (0x00059bdb) grid_app_pane

0x5dd9,	// (0x00059bff) scroll_pane_cp15_ParamLimits

0x5dd9,	// (0x00059bff) scroll_pane_cp15

0x5dec,	// (0x00059c12) cell_app_pane_ParamLimits

0x5dec,	// (0x00059c12) cell_app_pane

0x5e18,	// (0x00059c3e) cell_app_pane_g1_ParamLimits

0x5e18,	// (0x00059c3e) cell_app_pane_g1

0xf390,	// (0x000631b6) cell_app_pane_g2_ParamLimits

0xf390,	// (0x000631b6) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0006350f) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0006350f) cell_app_pane_g

0xf39c,	// (0x000631c2) cell_app_pane_t1_ParamLimits

0xf39c,	// (0x000631c2) cell_app_pane_t1

0xf3b3,	// (0x000631d9) grid_highlight_pane_ParamLimits

0xf3b3,	// (0x000631d9) grid_highlight_pane

0xf0cd,	// (0x00062ef3) cell_highlight_pane_g1

0xf0d5,	// (0x00062efb) cell_highlight_pane_g2

0xf0dd,	// (0x00062f03) cell_highlight_pane_g3

0xf0e5,	// (0x00062f0b) cell_highlight_pane_g4

0xf0ed,	// (0x00062f13) cell_highlight_pane_g5

0xf0f5,	// (0x00062f1b) cell_highlight_pane_g6

0xf0fd,	// (0x00062f23) cell_highlight_pane_g7

0xf105,	// (0x00062f2b) cell_highlight_pane_g8

0xf10d,	// (0x00062f33) cell_highlight_pane_g9

0xb993,	// (0x0005f7b9) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x000634bd) cell_highlight_pane_g

0xf3c4,	// (0x000631ea) bg_scroll_pane

0x5e4b,	// (0x00059c71) scroll_handle_pane

0xf40b,	// (0x00063231) scroll_bg_pane_g1

0xf420,	// (0x00063246) scroll_bg_pane_g2

0xf438,	// (0x0006325e) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x00063514) scroll_bg_pane_g

0xf44d,	// (0x00063273) scroll_handle_focus_pane_ParamLimits

0xf44d,	// (0x00063273) scroll_handle_focus_pane

0xf40b,	// (0x00063231) scroll_handle_pane_g1

0xf45a,	// (0x00063280) scroll_handle_pane_g2

0xf438,	// (0x0006325e) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0006351b) scroll_handle_pane_g

0xf11e,	// (0x00062f44) bg_popup_sub_pane_cp21_ParamLimits

0xf11e,	// (0x00062f44) bg_popup_sub_pane_cp21

0xf46e,	// (0x00063294) popup_fep_japan_predictive_window_t1_ParamLimits

0xf46e,	// (0x00063294) popup_fep_japan_predictive_window_t1

0xf485,	// (0x000632ab) popup_fep_japan_predictive_window_t2_ParamLimits

0xf485,	// (0x000632ab) popup_fep_japan_predictive_window_t2

0xf4b8,	// (0x000632de) popup_fep_japan_predictive_window_t3_ParamLimits

0xf4b8,	// (0x000632de) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x00063522) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x00063522) popup_fep_japan_predictive_window_t

0xb99d,	// (0x0005f7c3) bg_popup_sub_pane_cp23

0xf4ef,	// (0x00063315) listscroll_japin_cand_pane

0xf4f7,	// (0x0006331d) popup_fep_japan_candidate_window_t1

0xf505,	// (0x0006332b) candidate_pane_ParamLimits

0xf505,	// (0x0006332b) candidate_pane

0xf517,	// (0x0006333d) scroll_pane_cp30

0xf521,	// (0x00063347) list_single_popup_jap_candidate_pane_ParamLimits

0xf521,	// (0x00063347) list_single_popup_jap_candidate_pane

0xb99d,	// (0x0005f7c3) list_highlight_pane_cp30

0xf535,	// (0x0006335b) list_single_popup_jap_candidate_pane_t1

0x5e74,	// (0x00059c9a) level_1_signal

0x5e81,	// (0x00059ca7) level_2_signal

0x5e8e,	// (0x00059cb4) level_3_signal

0x5e9b,	// (0x00059cc1) level_4_signal

0x5ea8,	// (0x00059cce) level_5_signal

0x5eb5,	// (0x00059cdb) level_6_signal

0x5ec2,	// (0x00059ce8) level_7_signal

0x5e74,	// (0x00059c9a) level_1_battery

0x5e81,	// (0x00059ca7) level_2_battery

0x5e8e,	// (0x00059cb4) level_3_battery

0x5e9b,	// (0x00059cc1) level_4_battery

0x5ea8,	// (0x00059cce) level_5_battery

0x5eb5,	// (0x00059cdb) level_6_battery

0x5ec2,	// (0x00059ce8) level_7_battery

0x1102,	// (0x00054f28) list_menu_pane_ParamLimits

0x1102,	// (0x00054f28) list_menu_pane

0x1118,	// (0x00054f3e) scroll_pane_cp25_ParamLimits

0x1118,	// (0x00054f3e) scroll_pane_cp25

0x1131,	// (0x00054f57) list_double2_graphic_pane_cp2_ParamLimits

0x1131,	// (0x00054f57) list_double2_graphic_pane_cp2

0x1131,	// (0x00054f57) list_double2_large_graphic_pane_cp2_ParamLimits

0x1131,	// (0x00054f57) list_double2_large_graphic_pane_cp2

0x1131,	// (0x00054f57) list_double2_pane_cp2_ParamLimits

0x1131,	// (0x00054f57) list_double2_pane_cp2

0x1131,	// (0x00054f57) list_double_graphic_pane_cp2_ParamLimits

0x1131,	// (0x00054f57) list_double_graphic_pane_cp2

0x1131,	// (0x00054f57) list_double_large_graphic_pane_cp2_ParamLimits

0x1131,	// (0x00054f57) list_double_large_graphic_pane_cp2

0x1131,	// (0x00054f57) list_double_number_pane_cp2_ParamLimits

0x1131,	// (0x00054f57) list_double_number_pane_cp2

0x1131,	// (0x00054f57) list_double_pane_cp2_ParamLimits

0x1131,	// (0x00054f57) list_double_pane_cp2

0x5f04,	// (0x00059d2a) list_single_2graphic_pane_cp2_ParamLimits

0x5f04,	// (0x00059d2a) list_single_2graphic_pane_cp2

0x5f04,	// (0x00059d2a) list_single_graphic_heading_pane_cp2_ParamLimits

0x5f04,	// (0x00059d2a) list_single_graphic_heading_pane_cp2

0x5f04,	// (0x00059d2a) list_single_graphic_pane_cp2_ParamLimits

0x5f04,	// (0x00059d2a) list_single_graphic_pane_cp2

0x5f04,	// (0x00059d2a) list_single_heading_pane_cp2_ParamLimits

0x5f04,	// (0x00059d2a) list_single_heading_pane_cp2

0x1141,	// (0x00054f67) list_single_large_graphic_pane_cp2_ParamLimits

0x1141,	// (0x00054f67) list_single_large_graphic_pane_cp2

0x5f04,	// (0x00059d2a) list_single_number_heading_pane_cp2_ParamLimits

0x5f04,	// (0x00059d2a) list_single_number_heading_pane_cp2

0x5f04,	// (0x00059d2a) list_single_number_pane_cp2_ParamLimits

0x5f04,	// (0x00059d2a) list_single_number_pane_cp2

0x5f04,	// (0x00059d2a) list_single_pane_cp2_ParamLimits

0x5f04,	// (0x00059d2a) list_single_pane_cp2

0x115a,	// (0x00054f80) bg_popup_sub_pane_cp22

0x5fed,	// (0x00059e13) popup_side_volume_key_window_g1

0x6017,	// (0x00059e3d) popup_side_volume_key_window_t1

0x6035,	// (0x00059e5b) volume_small_pane_cp1

0xba64,	// (0x0005f88a) bg_popup_sub_pane_cp24_ParamLimits

0xba64,	// (0x0005f88a) bg_popup_sub_pane_cp24

0x1170,	// (0x00054f96) fep_china_uni_candidate_pane_ParamLimits

0x1170,	// (0x00054f96) fep_china_uni_candidate_pane

0x1184,	// (0x00054faa) fep_china_uni_entry_pane

0x1194,	// (0x00054fba) popup_fep_china_uni_window_g1

0x11b0,	// (0x00054fd6) fep_china_uni_entry_pane_g1

0x11ba,	// (0x00054fe0) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x00063553) fep_china_uni_entry_pane_g

0x11c4,	// (0x00054fea) fep_entry_item_pane

0x11ce,	// (0x00054ff4) fep_candidate_item_pane

0x11d6,	// (0x00054ffc) fep_china_uni_candidate_pane_g1

0x11e0,	// (0x00055006) fep_china_uni_candidate_pane_g2

0x11e8,	// (0x0005500e) fep_china_uni_candidate_pane_g3

0x11f0,	// (0x00055016) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x00063558) fep_china_uni_candidate_pane_g

0xb993,	// (0x0005f7b9) fep_entry_item_pane_g1

0x11fa,	// (0x00055020) fep_entry_item_pane_t1_ParamLimits

0x11fa,	// (0x00055020) fep_entry_item_pane_t1

0x1210,	// (0x00055036) fep_candidate_item_pane_t1_ParamLimits

0x1210,	// (0x00055036) fep_candidate_item_pane_t1

0x1225,	// (0x0005504b) fep_candidate_item_pane_t2_ParamLimits

0x1225,	// (0x0005504b) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x00063561) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x00063561) fep_candidate_item_pane_t

0xb9f7,	// (0x0005f81d) list_highlight_pane_cp31_ParamLimits

0xb9f7,	// (0x0005f81d) list_highlight_pane_cp31

0x1237,	// (0x0005505d) level_1_signal_lsc

0x1240,	// (0x00055066) level_2_signal_lsc

0x1249,	// (0x0005506f) level_3_signal_lsc

0x1252,	// (0x00055078) level_4_signal_lsc

0x125b,	// (0x00055081) level_5_signal_lsc

0x1264,	// (0x0005508a) level_6_signal_lsc

0x126d,	// (0x00055093) level_7_signal_lsc

0x126d,	// (0x00055093) level_1_battery_lsc

0x1276,	// (0x0005509c) level_2_battery_lsc

0x127f,	// (0x000550a5) level_3_battery_lsc

0x1288,	// (0x000550ae) level_4_battery_lsc

0x1291,	// (0x000550b7) level_5_battery_lsc

0x129a,	// (0x000550c0) level_6_battery_lsc

0x1237,	// (0x0005505d) level_7_battery_lsc

0x12a3,	// (0x000550c9) scroll_handle_focus_pane_g1

0x12ac,	// (0x000550d2) scroll_handle_focus_pane_g2

0x12b5,	// (0x000550db) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x00063566) scroll_handle_focus_pane_g

0x603d,	// (0x00059e63) list_single_2graphic_pane_g1_ParamLimits

0x603d,	// (0x00059e63) list_single_2graphic_pane_g1

0x55bc,	// (0x000593e2) list_single_2graphic_pane_g2_ParamLimits

0x55bc,	// (0x000593e2) list_single_2graphic_pane_g2

0x550d,	// (0x00059333) list_single_2graphic_pane_g3_ParamLimits

0x550d,	// (0x00059333) list_single_2graphic_pane_g3

0x6049,	// (0x00059e6f) list_single_2graphic_pane_g4_ParamLimits

0x6049,	// (0x00059e6f) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0006356d) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0006356d) list_single_2graphic_pane_g

0x6055,	// (0x00059e7b) list_single_2graphic_pane_t1_ParamLimits

0x6055,	// (0x00059e7b) list_single_2graphic_pane_t1

0x6083,	// (0x00059ea9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6083,	// (0x00059ea9) list_double2_graphic_large_graphic_pane_g1

0x580c,	// (0x00059632) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x580c,	// (0x00059632) list_double2_graphic_large_graphic_pane_g2

0x574d,	// (0x00059573) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x574d,	// (0x00059573) list_double2_graphic_large_graphic_pane_g3

0x6095,	// (0x00059ebb) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6095,	// (0x00059ebb) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x00063576) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x00063576) list_double2_graphic_large_graphic_pane_g

0x60a1,	// (0x00059ec7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x60a1,	// (0x00059ec7) list_double2_graphic_large_graphic_pane_t1

0x60b7,	// (0x00059edd) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x60b7,	// (0x00059edd) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0006357f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0006357f) list_double2_graphic_large_graphic_pane_t

0x3408,	// (0x0005722e) popup_fast_swap_window_ParamLimits

0x3408,	// (0x0005722e) popup_fast_swap_window

0x3426,	// (0x0005724c) popup_side_volume_key_window

0x3444,	// (0x0005726a) stacon_top_pane

0x344e,	// (0x00057274) status_pane_ParamLimits

0x344e,	// (0x00057274) status_pane

0x3444,	// (0x0005726a) status_small_pane

0xb99d,	// (0x0005f7c3) control_pane

0xb99d,	// (0x0005f7c3) stacon_bottom_pane

0xf055,	// (0x00062e7b) scroll_pane_cp121

0xf04c,	// (0x00062e72) set_content_pane

0x60c9,	// (0x00059eef) bg_active_tab_pane_g1_cp1

0x337f,	// (0x000571a5) bg_active_tab_pane_g2_cp1

0x60d2,	// (0x00059ef8) bg_active_tab_pane_g3_cp1

0x60c9,	// (0x00059eef) bg_passive_tab_pane_g1_cp1

0x337f,	// (0x000571a5) bg_passive_tab_pane_g2_cp1

0x60d2,	// (0x00059ef8) bg_passive_tab_pane_g3_cp1

0x60db,	// (0x00059f01) bg_active_tab_pane_g1_cp2

0x337f,	// (0x000571a5) bg_active_tab_pane_g2_cp2

0x60e4,	// (0x00059f0a) bg_active_tab_pane_g3_cp2

0x60db,	// (0x00059f01) bg_passive_tab_pane_g1_cp2

0x337f,	// (0x000571a5) bg_passive_tab_pane_g2_cp2

0x60e4,	// (0x00059f0a) bg_passive_tab_pane_g3_cp2

0x60ed,	// (0x00059f13) bg_active_tab_pane_g1_cp3

0x337f,	// (0x000571a5) bg_active_tab_pane_g2_cp3

0x60f6,	// (0x00059f1c) bg_active_tab_pane_g3_cp3

0x60ed,	// (0x00059f13) bg_passive_tab_pane_g1_cp3

0x337f,	// (0x000571a5) bg_passive_tab_pane_g2_cp3

0x60f6,	// (0x00059f1c) bg_passive_tab_pane_g3_cp3

0x60ff,	// (0x00059f25) bg_active_tab_pane_g1_cp4

0x337f,	// (0x000571a5) bg_active_tab_pane_g2_cp4

0x610a,	// (0x00059f30) bg_active_tab_pane_g3_cp4

0x60ff,	// (0x00059f25) bg_passive_tab_pane_g1_cp4

0x337f,	// (0x000571a5) bg_passive_tab_pane_g2_cp4

0x610a,	// (0x00059f30) bg_passive_tab_pane_g3_cp4

0x33cf,	// (0x000571f5) bg_active_tab_pane_g1_cp5

0x337f,	// (0x000571a5) bg_active_tab_pane_g2_cp5

0x33c6,	// (0x000571ec) bg_active_tab_pane_g3_cp5

0x33cf,	// (0x000571f5) bg_passive_tab_pane_g1_cp5

0x337f,	// (0x000571a5) bg_passive_tab_pane_g2_cp5

0x33c6,	// (0x000571ec) bg_passive_tab_pane_g3_cp5

0x6259,	// (0x0005a07f) list_set_graphic_pane_ParamLimits

0x6259,	// (0x0005a07f) list_set_graphic_pane

0xb99d,	// (0x0005f7c3) bg_set_opt_pane_cp4

0x626e,	// (0x0005a094) list_set_graphic_pane_g1_ParamLimits

0x626e,	// (0x0005a094) list_set_graphic_pane_g1

0x627a,	// (0x0005a0a0) list_set_graphic_pane_g2_ParamLimits

0x627a,	// (0x0005a0a0) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x00063584) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x00063584) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x00063903) volume_small_pane_cp_g

0x629e,	// (0x0005a0c4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x629e,	// (0x0005a0c4) list_double2_large_graphic_pane_g1_cp2

0x62ac,	// (0x0005a0d2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x62ac,	// (0x0005a0d2) list_double2_large_graphic_pane_g2_cp2

0x33d8,	// (0x000571fe) list_double2_large_graphic_pane_g3_cp2

0x33e0,	// (0x00057206) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x33e0,	// (0x00057206) list_double2_large_graphic_pane_t1_cp2

0x33f6,	// (0x0005721c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x33f6,	// (0x0005721c) list_double2_large_graphic_pane_t2_cp2

0x98ff,	// (0x0005d725) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x98ff,	// (0x0005d725) list_double_large_graphic_pane_g1_cp2

0x9912,	// (0x0005d738) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9912,	// (0x0005d738) list_double_large_graphic_pane_g2_cp2

0x352f,	// (0x00057355) list_double_large_graphic_pane_g3_cp2

0x9923,	// (0x0005d749) list_double_large_graphic_pane_g4_cp

0x992b,	// (0x0005d751) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x992b,	// (0x0005d751) list_double_large_graphic_pane_t1_cp2

0x9942,	// (0x0005d768) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9942,	// (0x0005d768) list_double_large_graphic_pane_t2_cp2

0x62bd,	// (0x0005a0e3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x62bd,	// (0x0005a0e3) list_double2_graphic_pane_g1_cp2

0x62cb,	// (0x0005a0f1) list_double2_graphic_pane_g2_cp2_ParamLimits

0x62cb,	// (0x0005a0f1) list_double2_graphic_pane_g2_cp2

0x62dc,	// (0x0005a102) list_double2_graphic_pane_g3_cp2

0x345c,	// (0x00057282) list_double2_graphic_pane_t1_cp2_ParamLimits

0x345c,	// (0x00057282) list_double2_graphic_pane_t1_cp2

0x3472,	// (0x00057298) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3472,	// (0x00057298) list_double2_graphic_pane_t2_cp2

0x3484,	// (0x000572aa) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3484,	// (0x000572aa) list_single_number_heading_pane_g1_cp2

0x3490,	// (0x000572b6) list_single_number_heading_pane_g2_cp2

0x3498,	// (0x000572be) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3498,	// (0x000572be) list_single_number_heading_pane_t1_cp2

0x62e6,	// (0x0005a10c) list_single_number_heading_pane_t2_cp2_ParamLimits

0x62e6,	// (0x0005a10c) list_single_number_heading_pane_t2_cp2

0x34ae,	// (0x000572d4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x34ae,	// (0x000572d4) list_single_number_heading_pane_t3_cp2

0x3484,	// (0x000572aa) list_single_heading_pane_g1_cp2_ParamLimits

0x3484,	// (0x000572aa) list_single_heading_pane_g1_cp2

0x3490,	// (0x000572b6) list_single_heading_pane_g2_cp2

0x3498,	// (0x000572be) list_single_heading_pane_t1_cp2_ParamLimits

0x3498,	// (0x000572be) list_single_heading_pane_t1_cp2

0x96f9,	// (0x0005d51f) list_single_heading_pane_t2_cp2_ParamLimits

0x96f9,	// (0x0005d51f) list_single_heading_pane_t2_cp2

0x9641,	// (0x0005d467) list_double_graphic_pane_g1_cp2_ParamLimits

0x9641,	// (0x0005d467) list_double_graphic_pane_g1_cp2

0x964d,	// (0x0005d473) list_double_graphic_pane_g2_cp2_ParamLimits

0x964d,	// (0x0005d473) list_double_graphic_pane_g2_cp2

0x965c,	// (0x0005d482) list_double_graphic_pane_g3_cp2

0x9664,	// (0x0005d48a) list_double_graphic_pane_t1_cp2_ParamLimits

0x9664,	// (0x0005d48a) list_double_graphic_pane_t1_cp2

0x967a,	// (0x0005d4a0) list_double_graphic_pane_t2_cp2_ParamLimits

0x967a,	// (0x0005d4a0) list_double_graphic_pane_t2_cp2

0x3523,	// (0x00057349) list_double_number_pane_g1_cp2_ParamLimits

0x3523,	// (0x00057349) list_double_number_pane_g1_cp2

0x352f,	// (0x00057355) list_double_number_pane_g2_cp2

0x9605,	// (0x0005d42b) list_double_number_pane_t1_cp2_ParamLimits

0x9605,	// (0x0005d42b) list_double_number_pane_t1_cp2

0x9619,	// (0x0005d43f) list_double_number_pane_t2_cp2_ParamLimits

0x9619,	// (0x0005d43f) list_double_number_pane_t2_cp2

0x962f,	// (0x0005d455) list_double_number_pane_t3_cp2_ParamLimits

0x962f,	// (0x0005d455) list_double_number_pane_t3_cp2

0x94ee,	// (0x0005d314) list_single_graphic_pane_g1_cp2_ParamLimits

0x94ee,	// (0x0005d314) list_single_graphic_pane_g1_cp2

0x356f,	// (0x00057395) list_single_graphic_pane_g2_cp2_ParamLimits

0x356f,	// (0x00057395) list_single_graphic_pane_g2_cp2

0x357b,	// (0x000573a1) list_single_graphic_pane_g3_cp2

0x94c4,	// (0x0005d2ea) list_single_graphic_pane_t1_cp2_ParamLimits

0x94c4,	// (0x0005d2ea) list_single_graphic_pane_t1_cp2

0x356f,	// (0x00057395) list_single_number_pane_g1_cp2_ParamLimits

0x356f,	// (0x00057395) list_single_number_pane_g1_cp2

0x357b,	// (0x000573a1) list_single_number_pane_g2_cp2

0x94c4,	// (0x0005d2ea) list_single_number_pane_t1_cp2_ParamLimits

0x94c4,	// (0x0005d2ea) list_single_number_pane_t1_cp2

0x94da,	// (0x0005d300) list_single_number_pane_t2_cp2_ParamLimits

0x94da,	// (0x0005d300) list_single_number_pane_t2_cp2

0x62ac,	// (0x0005a0d2) list_double2_pane_g1_cp2_ParamLimits

0x62ac,	// (0x0005a0d2) list_double2_pane_g1_cp2

0x33d8,	// (0x000571fe) list_double2_pane_g2_cp2

0x34fb,	// (0x00057321) list_double2_pane_t1_cp2_ParamLimits

0x34fb,	// (0x00057321) list_double2_pane_t1_cp2

0x3511,	// (0x00057337) list_double2_pane_t2_cp2_ParamLimits

0x3511,	// (0x00057337) list_double2_pane_t2_cp2

0x3523,	// (0x00057349) list_double_pane_g1_cp2_ParamLimits

0x3523,	// (0x00057349) list_double_pane_g1_cp2

0x352f,	// (0x00057355) list_double_pane_g2_cp2

0x3537,	// (0x0005735d) list_double_pane_t1_cp2_ParamLimits

0x3537,	// (0x0005735d) list_double_pane_t1_cp2

0x354d,	// (0x00057373) list_double_pane_t2_cp2_ParamLimits

0x354d,	// (0x00057373) list_double_pane_t2_cp2

0x355f,	// (0x00057385) list_single_pane_cp2_g3

0x356f,	// (0x00057395) list_single_pane_g1_cp2_ParamLimits

0x356f,	// (0x00057395) list_single_pane_g1_cp2

0x357b,	// (0x000573a1) list_single_pane_g2_cp2

0x3583,	// (0x000573a9) list_single_pane_t1_cp2_ParamLimits

0x3583,	// (0x000573a9) list_single_pane_t1_cp2

0x6314,	// (0x0005a13a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6314,	// (0x0005a13a) list_single_large_graphic_pane_g1_cp2

0x3265,	// (0x0005708b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3265,	// (0x0005708b) list_single_large_graphic_pane_g2_cp2

0x359b,	// (0x000573c1) list_single_large_graphic_pane_g3_cp2

0x35a3,	// (0x000573c9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x35a3,	// (0x000573c9) list_single_large_graphic_pane_g4_cp1

0x35bd,	// (0x000573e3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x35bd,	// (0x000573e3) list_single_large_graphic_pane_t1_cp2

0x948e,	// (0x0005d2b4) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x948e,	// (0x0005d2b4) list_single_graphic_heading_pane_g1_cp2

0x945b,	// (0x0005d281) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x945b,	// (0x0005d281) list_single_graphic_heading_pane_g4_cp2

0x357b,	// (0x000573a1) list_single_graphic_heading_pane_g5_cp2

0x949a,	// (0x0005d2c0) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x949a,	// (0x0005d2c0) list_single_graphic_heading_pane_t1_cp2

0x94b0,	// (0x0005d2d6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x94b0,	// (0x0005d2d6) list_single_graphic_heading_pane_t2_cp2

0x944f,	// (0x0005d275) list_single_2graphic_pane_g1_cp2_ParamLimits

0x944f,	// (0x0005d275) list_single_2graphic_pane_g1_cp2

0x945b,	// (0x0005d281) list_single_2graphic_pane_g2_cp2_ParamLimits

0x945b,	// (0x0005d281) list_single_2graphic_pane_g2_cp2

0x357b,	// (0x000573a1) list_single_2graphic_pane_g3_cp2

0x946c,	// (0x0005d292) list_single_2graphic_pane_g4_cp2_ParamLimits

0x946c,	// (0x0005d292) list_single_2graphic_pane_g4_cp2

0x9478,	// (0x0005d29e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9478,	// (0x0005d29e) list_single_2graphic_pane_t1_cp2

0xb993,	// (0x0005f7b9) list_highlight_pane_g10_cp1

0x9027,	// (0x0005ce4d) list_highlight_pane_g1_cp1

0x902f,	// (0x0005ce55) list_highlight_pane_g2_cp1

0x9037,	// (0x0005ce5d) list_highlight_pane_g3_cp1

0x903f,	// (0x0005ce65) list_highlight_pane_g4_cp1

0x9047,	// (0x0005ce6d) list_highlight_pane_g5_cp1

0x904f,	// (0x0005ce75) list_highlight_pane_g6_cp1

0x9057,	// (0x0005ce7d) list_highlight_pane_g7_cp1

0x905f,	// (0x0005ce85) list_highlight_pane_g8_cp1

0x9067,	// (0x0005ce8d) list_highlight_pane_g9_cp1

0x8f47,	// (0x0005cd6d) form_field_slider_pane_t3

0x8f55,	// (0x0005cd7b) form_field_slider_pane_t4

0x8f63,	// (0x0005cd89) slider_form_pane_ParamLimits

0x8f63,	// (0x0005cd89) slider_form_pane

0xb99d,	// (0x0005f7c3) control_abbreviations

0xb99d,	// (0x0005f7c3) control_conventions

0xb99d,	// (0x0005f7c3) control_definitions

0xb99d,	// (0x0005f7c3) format_table_attribute

0x974f,	// (0x0005d575) bg_popup_preview_window_pane_g9

0xb99d,	// (0x0005f7c3) format_table_data2

0xb99d,	// (0x0005f7c3) format_table_data3

0xb99d,	// (0x0005f7c3) format_table_data_example

0x0008,

0xb99d,	// (0x0005f7c3) intro_purpose

0xf8fa,	// (0x00063720) bg_popup_preview_window_pane_g

0xb99d,	// (0x0005f7c3) texts_category

0xb99d,	// (0x0005f7c3) texts_graphics

0x35d3,	// (0x000573f9) text_digital

0x35e2,	// (0x00057408) text_primary

0x35f1,	// (0x00057417) text_primary_small

0x3600,	// (0x00057426) text_secondary

0x360f,	// (0x00057435) text_title

0xa062,	// (0x0005de88) bg_passive_tab_pane_g1_cp3_srt

0x337f,	// (0x000571a5) bg_passive_tab_pane_g2_cp3_srt

0xa06b,	// (0x0005de91) bg_passive_tab_pane_g3_cp3_srt

0xb9f7,	// (0x0005f81d) bg_active_tab_pane_cp3_srt_ParamLimits

0xb9f7,	// (0x0005f81d) bg_active_tab_pane_cp3_srt

0xa074,	// (0x0005de9a) tabs_4_active_pane_srt_g1

0xa07c,	// (0x0005dea2) tabs_4_active_pane_srt_t1_ParamLimits

0xa07c,	// (0x0005dea2) tabs_4_active_pane_srt_t1

0xa062,	// (0x0005de88) bg_active_tab_pane_g1_cp3_copy1

0x337f,	// (0x000571a5) bg_active_tab_pane_g2_cp3_copy1

0xa06b,	// (0x0005de91) bg_active_tab_pane_g3_cp3_copy1

0xb9f7,	// (0x0005f81d) tabs_2_long_active_pane_srt_ParamLimits

0xb9f7,	// (0x0005f81d) tabs_2_long_active_pane_srt

0xb9f7,	// (0x0005f81d) tabs_2_long_passive_pane_srt_ParamLimits

0xb9f7,	// (0x0005f81d) tabs_2_long_passive_pane_srt

0x5c09,	// (0x00059a2f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5c09,	// (0x00059a2f) bg_passive_tab_pane_cp4_srt

0x9d2c,	// (0x0005db52) bg_passive_tab_pane_g1_cp4_srt

0x337f,	// (0x000571a5) bg_passive_tab_pane_g2_cp4_srt

0x9d35,	// (0x0005db5b) bg_passive_tab_pane_g3_cp4_srt

0x1aa7,	// (0x000558cd) bg_active_tab_pane_cp4_srt_ParamLimits

0x1aa7,	// (0x000558cd) bg_active_tab_pane_cp4_srt

0x9d3e,	// (0x0005db64) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9d3e,	// (0x0005db64) tabs_2_long_active_pane_srt_t1

0x9d2c,	// (0x0005db52) bg_active_tab_pane_g1_cp4_srt

0x337f,	// (0x000571a5) bg_active_tab_pane_g2_cp4_srt

0x9d35,	// (0x0005db5b) bg_active_tab_pane_g3_cp4_srt

0xba64,	// (0x0005f88a) tabs_3_long_active_pane_srt_ParamLimits

0xba64,	// (0x0005f88a) tabs_3_long_active_pane_srt

0xba64,	// (0x0005f88a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xba64,	// (0x0005f88a) tabs_3_long_passive_pane_cp_srt

0xba64,	// (0x0005f88a) tabs_3_long_passive_pane_srt_ParamLimits

0xba64,	// (0x0005f88a) tabs_3_long_passive_pane_srt

0x5c09,	// (0x00059a2f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5c09,	// (0x00059a2f) bg_passive_tab_pane_cp5_srt

0x33cf,	// (0x000571f5) bg_passive_tab_pane_g1_cp5_srt

0x337f,	// (0x000571a5) bg_passive_tab_pane_g2_cp5_srt

0x33c6,	// (0x000571ec) bg_passive_tab_pane_g3_cp5_srt

0x1aa7,	// (0x000558cd) bg_active_tab_pane_cp5_srt_ParamLimits

0x1aa7,	// (0x000558cd) bg_active_tab_pane_cp5_srt

0x9d1a,	// (0x0005db40) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9d1a,	// (0x0005db40) tabs_3_long_active_pane_srt_t1

0x33cf,	// (0x000571f5) bg_active_tab_pane_g1_cp5_srt

0x337f,	// (0x000571a5) bg_active_tab_pane_g2_cp5_srt

0x33c6,	// (0x000571ec) bg_active_tab_pane_g3_cp5_srt

0x9d0c,	// (0x0005db32) navi_text_pane_srt_t1

0x9d04,	// (0x0005db2a) navi_icon_pane_srt_g1

0x6543,	// (0x0005a369) midp_editing_number_pane_srt

0x361e,	// (0x00057444) midp_ticker_pane_srt

0x654b,	// (0x0005a371) midp_ticker_pane_srt_g1

0x6553,	// (0x0005a379) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x000635a3) midp_ticker_pane_srt_g

0x655b,	// (0x0005a381) midp_ticker_pane_srt_t1

0x9cf5,	// (0x0005db1b) midp_editing_number_pane_t1_copy1

0x5c09,	// (0x00059a2f) listscroll_midp_pane

0x5c09,	// (0x00059a2f) midp_form_pane

0x3626,	// (0x0005744c) midp_info_popup_window_ParamLimits

0x3626,	// (0x0005744c) midp_info_popup_window

0xf11e,	// (0x00062f44) bg_popup_sub_pane_cp50_ParamLimits

0xf11e,	// (0x00062f44) bg_popup_sub_pane_cp50

0x8c5d,	// (0x0005ca83) listscroll_midp_info_pane_ParamLimits

0x8c5d,	// (0x0005ca83) listscroll_midp_info_pane

0x8c45,	// (0x0005ca6b) listscroll_form_midp_pane_ParamLimits

0x8c45,	// (0x0005ca6b) listscroll_form_midp_pane

0x8c51,	// (0x0005ca77) scroll_bar_cp050

0x8c25,	// (0x0005ca4b) list_midp_pane

0xaafd,	// (0x0005e923) signal_pane_g2_cp

0x8b5f,	// (0x0005c985) listscroll_midp_info_pane_t1_ParamLimits

0x8b5f,	// (0x0005c985) listscroll_midp_info_pane_t1

0x8b77,	// (0x0005c99d) listscroll_midp_info_pane_t2_ParamLimits

0x8b77,	// (0x0005c99d) listscroll_midp_info_pane_t2

0x8bb5,	// (0x0005c9db) listscroll_midp_info_pane_t3_ParamLimits

0x8bb5,	// (0x0005c9db) listscroll_midp_info_pane_t3

0x8bef,	// (0x0005ca15) listscroll_midp_info_pane_t4_ParamLimits

0x8bef,	// (0x0005ca15) listscroll_midp_info_pane_t4

0x0003,

0xf835,	// (0x0006365b) listscroll_midp_info_pane_t_ParamLimits

0xf835,	// (0x0006365b) listscroll_midp_info_pane_t

0xf19e,	// (0x00062fc4) scroll_pane_cp21

0x8af9,	// (0x0005c91f) form_midp_field_choice_group_pane

0x8b02,	// (0x0005c928) form_midp_field_text_pane

0x8b45,	// (0x0005c96b) form_midp_field_time_pane

0x8b4d,	// (0x0005c973) form_midp_gauge_slider_pane

0x8b56,	// (0x0005c97c) form_midp_gauge_wait_pane

0xb99d,	// (0x0005f7c3) form_midp_image_pane

0x6934,	// (0x0005a75a) list_single_midp_pane_ParamLimits

0x6934,	// (0x0005a75a) list_single_midp_pane

0x8abd,	// (0x0005c8e3) form_midp_field_text_pane_t1

0x88a9,	// (0x0005c6cf) input_focus_pane_cp050

0x8ae8,	// (0x0005c90e) list_midp_form_text_pane

0x8a8c,	// (0x0005c8b2) form_midp_field_choice_group_pane_t1

0x8a9a,	// (0x0005c8c0) input_focus_pane_cp051

0x8aae,	// (0x0005c8d4) list_midp_choice_pane

0xb99d,	// (0x0005f7c3) status_idle_pane

0x8a70,	// (0x0005c896) form_midp_field_time_pane_t1

0xb993,	// (0x0005f7b9) wait_anim_pane_g2_copy1

0x8a7e,	// (0x0005c8a4) form_midp_field_time_pane_t2

0x0001,

0x63f8,	// (0x0005a21e) aid_navinavi_width_2_pane

0xf830,	// (0x00063656) form_midp_field_time_pane_t

0xb99d,	// (0x0005f7c3) input_focus_pane_cp052

0xb99d,	// (0x0005f7c3) bg_input_focus_pane_cp040

0x8a30,	// (0x0005c856) form_midp_gauge_slider_pane_t1

0x8a3e,	// (0x0005c864) form_midp_gauge_slider_pane_t2

0x8a4c,	// (0x0005c872) form_midp_gauge_slider_pane_t3

0x8a5a,	// (0x0005c880) form_midp_gauge_slider_pane_t4

0x0003,

0xf827,	// (0x0006364d) form_midp_gauge_slider_pane_t

0x8a68,	// (0x0005c88e) form_midp_slider_pane

0xb9f7,	// (0x0005f81d) bg_input_focus_pane_cp041_ParamLimits

0xb9f7,	// (0x0005f81d) bg_input_focus_pane_cp041

0x89fd,	// (0x0005c823) form_midp_gauge_wait_pane_t1_ParamLimits

0x89fd,	// (0x0005c823) form_midp_gauge_wait_pane_t1

0x8a0f,	// (0x0005c835) form_midp_gauge_wait_pane_t2_ParamLimits

0x8a0f,	// (0x0005c835) form_midp_gauge_wait_pane_t2

0x0001,

0xf822,	// (0x00063648) form_midp_gauge_wait_pane_t_ParamLimits

0xf822,	// (0x00063648) form_midp_gauge_wait_pane_t

0x8a21,	// (0x0005c847) form_midp_wait_pane_ParamLimits

0x8a21,	// (0x0005c847) form_midp_wait_pane

0x89c5,	// (0x0005c7eb) form_midp_image_pane_g1

0x89ce,	// (0x0005c7f4) form_midp_image_pane_t1

0x89dd,	// (0x0005c803) form_midp_image_pane_t2

0x89ec,	// (0x0005c812) form_midp_image_pane_t3

0x0002,

0xf81b,	// (0x00063641) form_midp_image_pane_t

0x89bc,	// (0x0005c7e2) list_single_midp_pane_g1

0x37a2,	// (0x000575c8) list_single_midp_pane_t1

0x89a2,	// (0x0005c7c8) list_midp_form_item_pane_ParamLimits

0x89a2,	// (0x0005c7c8) list_midp_form_item_pane

0x363b,	// (0x00057461) list_midp_form_item_pane_t1

0x364a,	// (0x00057470) midp_ticker_pane_g1

0x3656,	// (0x0005747c) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x00063589) midp_ticker_pane_g

0x63c7,	// (0x0005a1ed) midp_ticker_pane_t1

0x9f68,	// (0x0005dd8e) midp_editing_number_pane_t1

0x9f46,	// (0x0005dd6c) midp_editing_number_pane

0x9f55,	// (0x0005dd7b) midp_ticker_pane

0x9ce5,	// (0x0005db0b) ai_message_heading_pane

0xb99d,	// (0x0005f7c3) bg_popup_window_pane_cp14

0x9ced,	// (0x0005db13) listscroll_ai_message_pane

0x9c6b,	// (0x0005da91) ai_message_heading_pane_g1_ParamLimits

0x9c6b,	// (0x0005da91) ai_message_heading_pane_g1

0x9c77,	// (0x0005da9d) ai_message_heading_pane_g2_ParamLimits

0x9c77,	// (0x0005da9d) ai_message_heading_pane_g2

0x9c85,	// (0x0005daab) ai_message_heading_pane_g3_ParamLimits

0x9c85,	// (0x0005daab) ai_message_heading_pane_g3

0x9c91,	// (0x0005dab7) ai_message_heading_pane_g4_ParamLimits

0x9c91,	// (0x0005dab7) ai_message_heading_pane_g4

0x0003,

0xf95c,	// (0x00063782) ai_message_heading_pane_g_ParamLimits

0xf95c,	// (0x00063782) ai_message_heading_pane_g

0x9c9d,	// (0x0005dac3) ai_message_heading_pane_t1_ParamLimits

0x9c9d,	// (0x0005dac3) ai_message_heading_pane_t1

0x9cb7,	// (0x0005dadd) ai_message_heading_pane_t2_ParamLimits

0x9cb7,	// (0x0005dadd) ai_message_heading_pane_t2

0x0001,

0xf965,	// (0x0006378b) ai_message_heading_pane_t_ParamLimits

0xf965,	// (0x0006378b) ai_message_heading_pane_t

0x9ccb,	// (0x0005daf1) bg_popup_heading_pane_cp1_ParamLimits

0x9ccb,	// (0x0005daf1) bg_popup_heading_pane_cp1

0x9c59,	// (0x0005da7f) list_ai_message_pane_ParamLimits

0x9c59,	// (0x0005da7f) list_ai_message_pane

0xf19e,	// (0x00062fc4) scroll_pane_cp10

0x9bf5,	// (0x0005da1b) list_ai_message_pane_g1

0x9bfd,	// (0x0005da23) list_ai_message_pane_g2

0x0001,

0xf939,	// (0x0006375f) list_ai_message_pane_g

0x9c05,	// (0x0005da2b) list_ai_message_pane_t1_ParamLimits

0x9c05,	// (0x0005da2b) list_ai_message_pane_t1

0x9c1a,	// (0x0005da40) list_ai_message_pane_t2_ParamLimits

0x9c1a,	// (0x0005da40) list_ai_message_pane_t2

0x9c2f,	// (0x0005da55) list_ai_message_pane_t3_ParamLimits

0x9c2f,	// (0x0005da55) list_ai_message_pane_t3

0x9c44,	// (0x0005da6a) list_ai_message_pane_t4_ParamLimits

0x9c44,	// (0x0005da6a) list_ai_message_pane_t4

0x0003,

0xf93e,	// (0x00063764) list_ai_message_pane_t_ParamLimits

0xf93e,	// (0x00063764) list_ai_message_pane_t

0x9bde,	// (0x0005da04) cell_ai_soft_ind_pane_ParamLimits

0x9bde,	// (0x0005da04) cell_ai_soft_ind_pane

0x63d9,	// (0x0005a1ff) cell_ai_soft_ind_pane_g1_ParamLimits

0x63d9,	// (0x0005a1ff) cell_ai_soft_ind_pane_g1

0xb99d,	// (0x0005f7c3) grid_highlight_cp1

0x63e6,	// (0x0005a20c) text_secondary_cp56_ParamLimits

0x63e6,	// (0x0005a20c) text_secondary_cp56

0x9bb3,	// (0x0005d9d9) example_general_pane_ParamLimits

0x9bb3,	// (0x0005d9d9) example_general_pane

0x9bbf,	// (0x0005d9e5) example_parent_pane_g1_ParamLimits

0x9bbf,	// (0x0005d9e5) example_parent_pane_g1

0x9bcb,	// (0x0005d9f1) example_parent_pane_t1_ParamLimits

0x9bcb,	// (0x0005d9f1) example_parent_pane_t1

0x80bb,	// (0x0005bee1) popup_preview_text_window_ParamLimits

0x80bb,	// (0x0005bee1) popup_preview_text_window

0x3567,	// (0x0005738d) list_single_pane_cp2_g4

0xec38,	// (0x00062a5e) bg_popup_preview_window_pane_ParamLimits

0xec38,	// (0x00062a5e) bg_popup_preview_window_pane

0x9759,	// (0x0005d57f) popup_preview_text_window_t1_ParamLimits

0x9759,	// (0x0005d57f) popup_preview_text_window_t1

0x9777,	// (0x0005d59d) popup_preview_text_window_t2_ParamLimits

0x9777,	// (0x0005d59d) popup_preview_text_window_t2

0x97c0,	// (0x0005d5e6) popup_preview_text_window_t3_ParamLimits

0x97c0,	// (0x0005d5e6) popup_preview_text_window_t3

0x9805,	// (0x0005d62b) popup_preview_text_window_t4_ParamLimits

0x9805,	// (0x0005d62b) popup_preview_text_window_t4

0x0004,

0xf90d,	// (0x00063733) popup_preview_text_window_t_ParamLimits

0xf90d,	// (0x00063733) popup_preview_text_window_t

0x9883,	// (0x0005d6a9) scroll_pane_cp11

0x8835,	// (0x0005c65b) bg_popup_preview_window_pane_g1

0x970d,	// (0x0005d533) bg_popup_preview_window_pane_g2

0x9717,	// (0x0005d53d) bg_popup_preview_window_pane_g3

0x9721,	// (0x0005d547) bg_popup_preview_window_pane_g4

0x972b,	// (0x0005d551) bg_popup_preview_window_pane_g5

0x9735,	// (0x0005d55b) bg_popup_preview_window_pane_g6

0x973d,	// (0x0005d563) bg_popup_preview_window_pane_g7

0x9745,	// (0x0005d56b) bg_popup_preview_window_pane_g8

0x4d87,	// (0x00058bad) aid_popup_width_pane

0x8097,	// (0x0005bebd) popup_midp_note_alarm_window_ParamLimits

0x8097,	// (0x0005bebd) popup_midp_note_alarm_window

0xf066,	// (0x00062e8c) data_form_pane_ParamLimits

0x5a91,	// (0x000598b7) form_field_data_pane_g1

0x5a9b,	// (0x000598c1) form_field_data_pane_t1_ParamLimits

0xf072,	// (0x00062e98) input_focus_pane_ParamLimits

0x32e2,	// (0x00057108) data_form_wide_pane_ParamLimits

0x32f3,	// (0x00057119) form_field_data_wide_pane_g1

0x32ff,	// (0x00057125) form_field_data_wide_pane_t1_ParamLimits

0xeded,	// (0x00062c13) input_focus_pane_cp6_ParamLimits

0x5bce,	// (0x000599f4) input_popup_find_pane_g1_ParamLimits

0x5bce,	// (0x000599f4) input_popup_find_pane_g1

0x5d27,	// (0x00059b4d) aid_navi_side_left_pane

0x5d3c,	// (0x00059b62) aid_navi_side_right_pane

0x9122,	// (0x0005cf48) bg_popup_window_pane_cp30_ParamLimits

0x9122,	// (0x0005cf48) bg_popup_window_pane_cp30

0x919c,	// (0x0005cfc2) popup_midp_note_alarm_window_g1_ParamLimits

0x919c,	// (0x0005cfc2) popup_midp_note_alarm_window_g1

0x91cc,	// (0x0005cff2) popup_midp_note_alarm_window_t1_ParamLimits

0x91cc,	// (0x0005cff2) popup_midp_note_alarm_window_t1

0x926d,	// (0x0005d093) popup_midp_note_alarm_window_t2_ParamLimits

0x926d,	// (0x0005d093) popup_midp_note_alarm_window_t2

0x931b,	// (0x0005d141) popup_midp_note_alarm_window_t3_ParamLimits

0x931b,	// (0x0005d141) popup_midp_note_alarm_window_t3

0x934d,	// (0x0005d173) popup_midp_note_alarm_window_t4_ParamLimits

0x934d,	// (0x0005d173) popup_midp_note_alarm_window_t4

0x9373,	// (0x0005d199) popup_midp_note_alarm_window_t5_ParamLimits

0x9373,	// (0x0005d199) popup_midp_note_alarm_window_t5

0x000a,

0xf8aa,	// (0x000636d0) popup_midp_note_alarm_window_t_ParamLimits

0xf8aa,	// (0x000636d0) popup_midp_note_alarm_window_t

0x941f,	// (0x0005d245) wait_bar_pane_cp1_ParamLimits

0x941f,	// (0x0005d245) wait_bar_pane_cp1

0xb99d,	// (0x0005f7c3) wait_anim_pane_copy1

0xb99d,	// (0x0005f7c3) wait_border_pane_copy1

0x8e07,	// (0x0005cc2d) wait_border_pane_g1_copy1

0x3319,	// (0x0005713f) form_field_popup_pane_g1

0x5ab5,	// (0x000598db) form_field_popup_pane_t1_ParamLimits

0xf072,	// (0x00062e98) input_focus_pane_cp7_ParamLimits

0xf0a0,	// (0x00062ec6) list_form_pane_ParamLimits

0x3321,	// (0x00057147) form_field_popup_wide_pane_g1

0x3329,	// (0x0005714f) form_field_popup_wide_pane_t1_ParamLimits

0xf072,	// (0x00062e98) input_focus_pane_cp8_ParamLimits

0xf0ac,	// (0x00062ed2) list_form_wide_pane_ParamLimits

0xa0ef,	// (0x0005df15) aid_size_cell_graphic_pane

0x5b34,	// (0x0005995a) data_form_pane_t1_ParamLimits

0x6bc3,	// (0x0005a9e9) data_form_wide_pane_t1_ParamLimits

0x83e2,	// (0x0005c208) bg_status_flat_pane

0x51a2,	// (0x00058fc8) title_pane_t1_ParamLimits

0xb9bf,	// (0x0005f7e5) title_pane_t2_ParamLimits

0xb9e5,	// (0x0005f80b) title_pane_t3_ParamLimits

0xf55d,	// (0x00063383) title_pane_t_ParamLimits

0x5e74,	// (0x00059c9a) level_1_signal_ParamLimits

0x5e81,	// (0x00059ca7) level_2_signal_ParamLimits

0x5e8e,	// (0x00059cb4) level_3_signal_ParamLimits

0x5e9b,	// (0x00059cc1) level_4_signal_ParamLimits

0x5ea8,	// (0x00059cce) level_5_signal_ParamLimits

0x5eb5,	// (0x00059cdb) level_6_signal_ParamLimits

0x5ec2,	// (0x00059ce8) level_7_signal_ParamLimits

0x5e74,	// (0x00059c9a) level_1_battery_ParamLimits

0x5e81,	// (0x00059ca7) level_2_battery_ParamLimits

0x5e8e,	// (0x00059cb4) level_3_battery_ParamLimits

0x5e9b,	// (0x00059cc1) level_4_battery_ParamLimits

0x5ea8,	// (0x00059cce) level_5_battery_ParamLimits

0x5eb5,	// (0x00059cdb) level_6_battery_ParamLimits

0x5ec2,	// (0x00059ce8) level_7_battery_ParamLimits

0x9027,	// (0x0005ce4d) bg_status_flat_pane_g1

0x902f,	// (0x0005ce55) bg_status_flat_pane_g2

0x9037,	// (0x0005ce5d) bg_status_flat_pane_g3

0x903f,	// (0x0005ce65) bg_status_flat_pane_g4

0x9047,	// (0x0005ce6d) bg_status_flat_pane_g5

0x904f,	// (0x0005ce75) bg_status_flat_pane_g6

0x9057,	// (0x0005ce7d) bg_status_flat_pane_g7

0x5212,	// (0x00059038) tabs_3_active_pane_t1_ParamLimits

0x5212,	// (0x00059038) tabs_3_passive_pane_t1_ParamLimits

0x522c,	// (0x00059052) tabs_4_active_pane_t1_ParamLimits

0x522c,	// (0x00059052) tabs_4_1_passive_pane_t1_ParamLimits

0x5be4,	// (0x00059a0a) tabs_2_active_pane_t1_ParamLimits

0x5be4,	// (0x00059a0a) tabs_2_passive_pane_t1_ParamLimits

0x1aa7,	// (0x000558cd) bg_active_tab_pane_cp4_ParamLimits

0x5bf6,	// (0x00059a1c) tabs_2_long_active_pane_t1_ParamLimits

0x5c09,	// (0x00059a2f) bg_passive_tab_pane_cp4_ParamLimits

0x6863,	// (0x0005a689) list_single_midp_graphic_pane_t1_ParamLimits

0x1aa7,	// (0x000558cd) bg_active_tab_pane_cp5_ParamLimits

0x5c15,	// (0x00059a3b) tabs_3_long_active_pane_t1_ParamLimits

0x5c09,	// (0x00059a2f) bg_passive_tab_pane_cp5_ParamLimits

0x6863,	// (0x0005a689) list_single_midp_graphic_pane_t1

0x83e2,	// (0x0005c208) bg_status_flat_pane_ParamLimits

0x84ad,	// (0x0005c2d3) indicator_pane_cp2_ParamLimits

0x84ad,	// (0x0005c2d3) indicator_pane_cp2

0x85f0,	// (0x0005c416) navi_pane_srt_ParamLimits

0x85f0,	// (0x0005c416) navi_pane_srt

0x8614,	// (0x0005c43a) popup_clock_digital_analogue_window_cp1

0xba3b,	// (0x0005f861) indicator_pane_t1

0x361e,	// (0x00057444) copy_highlight_pane

0x361e,	// (0x00057444) cursor_graphics_pane

0x361e,	// (0x00057444) graphic_within_text_pane

0x361e,	// (0x00057444) link_highlight_pane

0x9846,	// (0x0005d66c) popup_preview_text_window_t5_ParamLimits

0x9846,	// (0x0005d66c) popup_preview_text_window_t5

0x6402,	// (0x0005a228) cursor_digital_pane

0x6402,	// (0x0005a228) cursor_primary_pane

0x6413,	// (0x0005a239) cursor_primary_small_pane

0x641b,	// (0x0005a241) cursor_secondary_pane

0x6423,	// (0x0005a249) cursor_title_pane

0x6402,	// (0x0005a228) link_highlight_digital_pane

0x640a,	// (0x0005a230) link_highlight_primary_pane

0x6413,	// (0x0005a239) link_highlight_primary_small_pane

0x641b,	// (0x0005a241) link_highlight_secondary_pane

0x6423,	// (0x0005a249) link_highlight_title_pane

0x6402,	// (0x0005a228) copy_highlight_digital_pane

0x6402,	// (0x0005a228) copy_highlight_primary_pane

0x6413,	// (0x0005a239) copy_highlight_primary_small_pane

0x641b,	// (0x0005a241) copy_highlight_secondary_pane

0x6423,	// (0x0005a249) copy_highlight_title_pane

0x641b,	// (0x0005a241) graphic_text_digital_pane

0x90c5,	// (0x0005ceeb) graphic_text_primary_pane

0x90ce,	// (0x0005cef4) graphic_text_primary_small_pane

0x6413,	// (0x0005a239) graphic_text_secondary_pane

0x6402,	// (0x0005a228) graphic_text_title_pane

0x642b,	// (0x0005a251) cursor_primary_pane_g1

0x90b7,	// (0x0005cedd) cursor_text_primary_t1

0x909f,	// (0x0005cec5) cursor_primary_small_pane_g1

0x90a9,	// (0x0005cecf) cursor_text_primary_small_t1

0x9087,	// (0x0005cead) cursor_primary_small_pane_g1_copy1

0x9091,	// (0x0005ceb7) cursor_text_primary_small_t1_copy1

0x906f,	// (0x0005ce95) cursor_text_title_t1

0x907d,	// (0x0005cea3) cursor_title_pane_g1

0x642b,	// (0x0005a251) cursor_digital_pane_g1

0x6435,	// (0x0005a25b) cursor_text_digital_t1

0x6443,	// (0x0005a269) link_highlight_primary_pane_g1

0x9018,	// (0x0005ce3e) link_highlight_primary_pane_t1

0x6443,	// (0x0005a269) link_highlight_primary_small_pane_g1

0x644b,	// (0x0005a271) link_highlight_primary_small_pane_t1

0x645a,	// (0x0005a280) link_highlight_secondary_pane_g1

0x6462,	// (0x0005a288) link_highlight_secondary_pane_t1

0x8f8c,	// (0x0005cdb2) link_highlight_title_pane_g1

0x8f94,	// (0x0005cdba) link_highlight_title_pane_t1

0x8f75,	// (0x0005cd9b) link_highlight_digital_pane_g1

0x8f7d,	// (0x0005cda3) link_highlight_digital_pane_t1

0x8e3d,	// (0x0005cc63) copy_highlight_primary_pane_g1

0x8e54,	// (0x0005cc7a) copy_highlight_primary_pane_t1

0x8e3d,	// (0x0005cc63) copy_highlight_primary_small_pane_g1

0x8e45,	// (0x0005cc6b) copy_highlight_primary_small_pane_t1

0x6471,	// (0x0005a297) copy_highlight_secondary_pane_g1

0x6479,	// (0x0005a29f) copy_highlight_secondary_pane_t1

0x8e26,	// (0x0005cc4c) copy_highlight_title_pane_g1

0x8e2e,	// (0x0005cc54) copy_highlight_title_pane_t1

0x8e3d,	// (0x0005cc63) copy_highlight_digital_pane_g1

0xa2bf,	// (0x0005e0e5) copy_highlight_digital_pane_t1

0xa213,	// (0x0005e039) graphic_text_primary_pane_g1

0xa2a3,	// (0x0005e0c9) graphic_text_primary_pane_t1

0xa2b1,	// (0x0005e0d7) graphic_text_primary_pane_t2

0x0001,

0xf9d9,	// (0x000637ff) graphic_text_primary_pane_t

0xa27f,	// (0x0005e0a5) graphic_text_primary_small_pane_g1

0xa287,	// (0x0005e0ad) graphic_text_primary_small_pane_t1

0xa295,	// (0x0005e0bb) graphic_text_primary_small_pane_t2

0x0001,

0xf9d4,	// (0x000637fa) graphic_text_primary_small_pane_t

0xa25b,	// (0x0005e081) graphic_text_secondary_pane_g1

0xa263,	// (0x0005e089) graphic_text_secondary_pane_t1

0xa271,	// (0x0005e097) graphic_text_secondary_pane_t2

0x0001,

0xf9cf,	// (0x000637f5) graphic_text_secondary_pane_t

0xa237,	// (0x0005e05d) graphic_text_title_pane_g1

0xa23f,	// (0x0005e065) graphic_text_title_pane_t1

0xa24d,	// (0x0005e073) graphic_text_title_pane_t2

0x0001,

0xf9ca,	// (0x000637f0) graphic_text_title_pane_t

0xa213,	// (0x0005e039) graphic_text_digital_pane_g1

0xa21b,	// (0x0005e041) graphic_text_digital_pane_t1

0xa229,	// (0x0005e04f) graphic_text_digital_pane_t2

0x0001,

0xf9c5,	// (0x000637eb) graphic_text_digital_pane_t

0xb9f7,	// (0x0005f81d) navi_icon_pane_srt_ParamLimits

0xb9f7,	// (0x0005f81d) navi_icon_pane_srt

0xb99d,	// (0x0005f7c3) navi_midp_pane_srt

0xb99d,	// (0x0005f7c3) navi_navi_pane_srt

0xb9f7,	// (0x0005f81d) navi_text_pane_srt_ParamLimits

0xb9f7,	// (0x0005f81d) navi_text_pane_srt

0xa1de,	// (0x0005e004) navi_navi_icon_text_pane_srt

0xa1e6,	// (0x0005e00c) navi_navi_pane_srt_g1_ParamLimits

0xa1e6,	// (0x0005e00c) navi_navi_pane_srt_g1

0xa1f8,	// (0x0005e01e) navi_navi_pane_srt_g2_ParamLimits

0xa1f8,	// (0x0005e01e) navi_navi_pane_srt_g2

0x0001,

0xf9c0,	// (0x000637e6) navi_navi_pane_srt_g_ParamLimits

0xf9c0,	// (0x000637e6) navi_navi_pane_srt_g

0xa20a,	// (0x0005e030) navi_navi_tabs_pane_srt

0xa1de,	// (0x0005e004) navi_navi_text_pane_srt

0xa1de,	// (0x0005e004) navi_navi_volume_pane_srt

0xa1cf,	// (0x0005dff5) navi_navi_text_pane_srt_t1

0x6caa,	// (0x0005aad0) navi_navi_volume_pane_srt_g1

0x6cb2,	// (0x0005aad8) volume_small_pane_srt_ParamLimits

0x6cb2,	// (0x0005aad8) volume_small_pane_srt

0x6488,	// (0x0005a2ae) volume_small_pane_srt_g1_ParamLimits

0x6488,	// (0x0005a2ae) volume_small_pane_srt_g1

0x6498,	// (0x0005a2be) volume_small_pane_srt_g2_ParamLimits

0x6498,	// (0x0005a2be) volume_small_pane_srt_g2

0x64a9,	// (0x0005a2cf) volume_small_pane_srt_g3_ParamLimits

0x64a9,	// (0x0005a2cf) volume_small_pane_srt_g3

0x64ba,	// (0x0005a2e0) volume_small_pane_srt_g4_ParamLimits

0x64ba,	// (0x0005a2e0) volume_small_pane_srt_g4

0x64cb,	// (0x0005a2f1) volume_small_pane_srt_g5_ParamLimits

0x64cb,	// (0x0005a2f1) volume_small_pane_srt_g5

0x64dc,	// (0x0005a302) volume_small_pane_srt_g6_ParamLimits

0x64dc,	// (0x0005a302) volume_small_pane_srt_g6

0x64ed,	// (0x0005a313) volume_small_pane_srt_g7_ParamLimits

0x64ed,	// (0x0005a313) volume_small_pane_srt_g7

0x64fe,	// (0x0005a324) volume_small_pane_srt_g8_ParamLimits

0x64fe,	// (0x0005a324) volume_small_pane_srt_g8

0x650f,	// (0x0005a335) volume_small_pane_srt_g9_ParamLimits

0x650f,	// (0x0005a335) volume_small_pane_srt_g9

0x6520,	// (0x0005a346) volume_small_pane_srt_g10_ParamLimits

0x6520,	// (0x0005a346) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0006358e) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0006358e) volume_small_pane_srt_g

0xeced,	// (0x00062b13) query_popup_data_pane_cp2

0xa1b5,	// (0x0005dfdb) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa1b5,	// (0x0005dfdb) navi_navi_icon_text_pane_srt_t1

0x90c5,	// (0x0005ceeb) navi_tabs_2_long_pane_srt

0x90c5,	// (0x0005ceeb) navi_tabs_2_pane_srt

0x90c5,	// (0x0005ceeb) navi_tabs_3_long_pane_srt

0x90c5,	// (0x0005ceeb) navi_tabs_3_pane_srt

0x90c5,	// (0x0005ceeb) navi_tabs_4_pane_srt

0x6c8a,	// (0x0005aab0) tabs_2_active_pane_srt_ParamLimits

0x6c8a,	// (0x0005aab0) tabs_2_active_pane_srt

0x6c9a,	// (0x0005aac0) tabs_2_passive_pane_srt_ParamLimits

0x6c9a,	// (0x0005aac0) tabs_2_passive_pane_srt

0x7cf4,	// (0x0005bb1a) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7cf4,	// (0x0005bb1a) bg_passive_tab_pane_cp1_srt

0xa181,	// (0x0005dfa7) bg_passive_tab_pane_g1_cp1_srt

0x337f,	// (0x000571a5) bg_passive_tab_pane_g2_cp1_srt

0xa18a,	// (0x0005dfb0) bg_passive_tab_pane_g3_cp1_srt

0xb9f7,	// (0x0005f81d) bg_active_tab_pane_cp1_srt_ParamLimits

0xb9f7,	// (0x0005f81d) bg_active_tab_pane_cp1_srt

0xa193,	// (0x0005dfb9) tabs_2_active_pane_srt_g1

0xa19b,	// (0x0005dfc1) tabs_2_active_pane_srt_t1_ParamLimits

0xa19b,	// (0x0005dfc1) tabs_2_active_pane_srt_t1

0xa181,	// (0x0005dfa7) bg_active_tab_pane_g1_cp1_srt

0x337f,	// (0x000571a5) bg_active_tab_pane_g2_cp1_srt

0xa18a,	// (0x0005dfb0) bg_active_tab_pane_g3_cp1_srt

0x6c57,	// (0x0005aa7d) tabs_3_active_pane_srt_ParamLimits

0x6c57,	// (0x0005aa7d) tabs_3_active_pane_srt

0x6c68,	// (0x0005aa8e) tabs_3_passive_pane_cp_srt_ParamLimits

0x6c68,	// (0x0005aa8e) tabs_3_passive_pane_cp_srt

0x6c79,	// (0x0005aa9f) tabs_3_passive_pane_srt_ParamLimits

0x6c79,	// (0x0005aa9f) tabs_3_passive_pane_srt

0x7cf4,	// (0x0005bb1a) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7cf4,	// (0x0005bb1a) bg_passive_tab_pane_cp2_srt

0x6531,	// (0x0005a357) bg_passive_tab_pane_g1_cp2_srt

0x337f,	// (0x000571a5) bg_passive_tab_pane_g2_cp2_srt

0x653a,	// (0x0005a360) bg_passive_tab_pane_g3_cp2_srt

0xb9f7,	// (0x0005f81d) bg_active_tab_pane_cp2_srt_ParamLimits

0xb9f7,	// (0x0005f81d) bg_active_tab_pane_cp2_srt

0xa167,	// (0x0005df8d) tabs_3_active_pane_srt_g1

0xa16f,	// (0x0005df95) tabs_3_active_pane_srt_t1_ParamLimits

0xa16f,	// (0x0005df95) tabs_3_active_pane_srt_t1

0x6531,	// (0x0005a357) bg_active_tab_pane_g1_cp2_srt

0x337f,	// (0x000571a5) bg_active_tab_pane_g2_cp2_srt

0x653a,	// (0x0005a360) bg_active_tab_pane_g3_cp2_srt

0x6c0f,	// (0x0005aa35) tabs_4_active_pane_srt_ParamLimits

0x6c0f,	// (0x0005aa35) tabs_4_active_pane_srt

0x6c21,	// (0x0005aa47) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6c21,	// (0x0005aa47) tabs_4_passive_pane_cp2_srt

0x7c82,	// (0x0005baa8) aid_size_cell_toolbar

0x5c09,	// (0x00059a2f) main_idle_act_pane_ParamLimits

0x7ebd,	// (0x0005bce3) popup_large_graphic_colour_window_ParamLimits

0x8264,	// (0x0005c08a) popup_toolbar_window_ParamLimits

0x8264,	// (0x0005c08a) popup_toolbar_window

0x9f77,	// (0x0005dd9d) list_single_graphic_2heading_pane_ParamLimits

0x9f77,	// (0x0005dd9d) list_single_graphic_2heading_pane

0xf376,	// (0x0006319c) aid_size_cell_apps_grid_lsc_pane

0xf388,	// (0x000631ae) aid_size_cell_apps_grid_prt_pane

0x7cf4,	// (0x0005bb1a) bg_wml_button_pane_cp1_ParamLimits

0x7cf4,	// (0x0005bb1a) bg_wml_button_pane_cp1

0x8abd,	// (0x0005c8e3) form_midp_field_text_pane_t1_ParamLimits

0x88a9,	// (0x0005c6cf) input_focus_pane_cp050_ParamLimits

0x8ae8,	// (0x0005c90e) list_midp_form_text_pane_ParamLimits

0x8a9a,	// (0x0005c8c0) input_focus_pane_cp051_ParamLimits

0x8aae,	// (0x0005c8d4) list_midp_choice_pane_ParamLimits

0x8962,	// (0x0005c788) list_single_2graphic_pane_cp3_ParamLimits

0x8962,	// (0x0005c788) list_single_2graphic_pane_cp3

0x897b,	// (0x0005c7a1) list_single_midp_graphic_pane_ParamLimits

0x897b,	// (0x0005c7a1) list_single_midp_graphic_pane

0x4cf3,	// (0x00058b19) list_single_graphic_2heading_pane_g1_ParamLimits

0x4cf3,	// (0x00058b19) list_single_graphic_2heading_pane_g1

0x4cff,	// (0x00058b25) list_single_graphic_2heading_pane_g4_ParamLimits

0x4cff,	// (0x00058b25) list_single_graphic_2heading_pane_g4

0x4d0b,	// (0x00058b31) list_single_graphic_2heading_pane_g5_ParamLimits

0x4d0b,	// (0x00058b31) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x000635e1) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x000635e1) list_single_graphic_2heading_pane_g

0x4d17,	// (0x00058b3d) list_single_graphic_2heading_pane_t1_ParamLimits

0x4d17,	// (0x00058b3d) list_single_graphic_2heading_pane_t1

0x4d2b,	// (0x00058b51) list_single_graphic_2heading_pane_t2_ParamLimits

0x4d2b,	// (0x00058b51) list_single_graphic_2heading_pane_t2

0x4d47,	// (0x00058b6d) list_single_graphic_2heading_pane_t3_ParamLimits

0x4d47,	// (0x00058b6d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x000635e8) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x000635e8) list_single_graphic_2heading_pane_t

0x8773,	// (0x0005c599) bg_popup_sub_pane_cp2

0x879d,	// (0x0005c5c3) grid_toobar_pane

0x67c7,	// (0x0005a5ed) cell_toolbar_pane_ParamLimits

0x67c7,	// (0x0005a5ed) cell_toolbar_pane

0x87d9,	// (0x0005c5ff) cell_toolbar_pane_g1_ParamLimits

0x87d9,	// (0x0005c5ff) cell_toolbar_pane_g1

0x87ed,	// (0x0005c613) cell_toolbar_pane_g2_ParamLimits

0x87ed,	// (0x0005c613) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x000635f6) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x000635f6) cell_toolbar_pane_g

0x880f,	// (0x0005c635) grid_highlight_pane_cp2_ParamLimits

0x880f,	// (0x0005c635) grid_highlight_pane_cp2

0x8829,	// (0x0005c64f) toolbar_button_pane

0x8835,	// (0x0005c65b) toolbar_button_pane_g1

0x883d,	// (0x0005c663) toolbar_button_pane_g2

0x8845,	// (0x0005c66b) toolbar_button_pane_g3

0x884d,	// (0x0005c673) toolbar_button_pane_g4

0x8855,	// (0x0005c67b) toolbar_button_pane_g5

0x885d,	// (0x0005c683) toolbar_button_pane_g6

0x8865,	// (0x0005c68b) toolbar_button_pane_g7

0x886d,	// (0x0005c693) toolbar_button_pane_g8

0x8875,	// (0x0005c69b) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x000635fb) toolbar_button_pane_g

0x680b,	// (0x0005a631) list_single_2graphic_pane_g1_cp3_ParamLimits

0x680b,	// (0x0005a631) list_single_2graphic_pane_g1_cp3

0x6817,	// (0x0005a63d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6817,	// (0x0005a63d) list_single_2graphic_pane_g2_cp3

0x6828,	// (0x0005a64e) list_single_2graphic_pane_g3_cp3

0x6830,	// (0x0005a656) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6830,	// (0x0005a656) list_single_2graphic_pane_g4_cp3

0x683c,	// (0x0005a662) list_single_2graphic_pane_t1_cp3_ParamLimits

0x683c,	// (0x0005a662) list_single_2graphic_pane_t1_cp3

0x6857,	// (0x0005a67d) list_single_midp_graphic_pane_g2_ParamLimits

0x6857,	// (0x0005a67d) list_single_midp_graphic_pane_g2

0x3662,	// (0x00057488) aid_zoom_text_primary

0x366a,	// (0x00057490) aid_zoom_text_secondary

0x65ee,	// (0x0005a414) status_small_pane_g7_ParamLimits

0x65ee,	// (0x0005a414) status_small_pane_g7

0x6611,	// (0x0005a437) status_small_pane_t1_ParamLimits

0x5191,	// (0x00058fb7) title_pane_g2

0x0003,

0xf554,	// (0x0006337a) title_pane_g

0x53e6,	// (0x0005920c) aid_size_cell_colour_1_pane_ParamLimits

0x53e6,	// (0x0005920c) aid_size_cell_colour_1_pane

0x53fa,	// (0x00059220) aid_size_cell_colour_2_pane_ParamLimits

0x53fa,	// (0x00059220) aid_size_cell_colour_2_pane

0x540e,	// (0x00059234) aid_size_cell_colour_3_pane_ParamLimits

0x540e,	// (0x00059234) aid_size_cell_colour_3_pane

0x5422,	// (0x00059248) aid_size_cell_colour_4_pane_ParamLimits

0x5422,	// (0x00059248) aid_size_cell_colour_4_pane

0x5c63,	// (0x00059a89) title_pane_stacon_g1_ParamLimits

0x5c63,	// (0x00059a89) title_pane_stacon_g1

0x8eab,	// (0x0005ccd1) popup_note_wait_window_g3_ParamLimits

0x8eab,	// (0x0005ccd1) popup_note_wait_window_g3

0x8f22,	// (0x0005cd48) popup_note_wait_window_t5_ParamLimits

0x8f22,	// (0x0005cd48) popup_note_wait_window_t5

0xb99d,	// (0x0005f7c3) main_feb_china_hwr_fs_writing_pane

0x7d84,	// (0x0005bbaa) popup_feb_china_hwr_fs_window_ParamLimits

0x7d84,	// (0x0005bbaa) popup_feb_china_hwr_fs_window

0x6891,	// (0x0005a6b7) aid_size_cell_hwr_fs_ParamLimits

0x6891,	// (0x0005a6b7) aid_size_cell_hwr_fs

0x88a9,	// (0x0005c6cf) bg_popup_sub_pane_cp3_ParamLimits

0x88a9,	// (0x0005c6cf) bg_popup_sub_pane_cp3

0x68a6,	// (0x0005a6cc) grid_hwr_fs_pane_ParamLimits

0x68a6,	// (0x0005a6cc) grid_hwr_fs_pane

0x68be,	// (0x0005a6e4) linegrid_hwr_fs_pane_ParamLimits

0x68be,	// (0x0005a6e4) linegrid_hwr_fs_pane

0x68ce,	// (0x0005a6f4) cell_hwr_fs_pane_ParamLimits

0x68ce,	// (0x0005a6f4) cell_hwr_fs_pane

0x88b5,	// (0x0005c6db) linegrid_hwr_fs_pane_g1_ParamLimits

0x88b5,	// (0x0005c6db) linegrid_hwr_fs_pane_g1

0x88c1,	// (0x0005c6e7) linegrid_hwr_fs_pane_g2_ParamLimits

0x88c1,	// (0x0005c6e7) linegrid_hwr_fs_pane_g2

0x88d3,	// (0x0005c6f9) linegrid_hwr_fs_pane_g3_ParamLimits

0x88d3,	// (0x0005c6f9) linegrid_hwr_fs_pane_g3

0x68f2,	// (0x0005a718) linegrid_hwr_fs_pane_g4_ParamLimits

0x68f2,	// (0x0005a718) linegrid_hwr_fs_pane_g4

0x6910,	// (0x0005a736) linegrid_hwr_fs_pane_g5_ParamLimits

0x6910,	// (0x0005a736) linegrid_hwr_fs_pane_g5

0x0004,

0xf800,	// (0x00063626) linegrid_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00063626) linegrid_hwr_fs_pane_g

0x88df,	// (0x0005c705) cell_hwr_fs_pane_g1_ParamLimits

0x88df,	// (0x0005c705) cell_hwr_fs_pane_g1

0x86aa,	// (0x0005c4d0) cell_hwr_fs_pane_g2_ParamLimits

0x86aa,	// (0x0005c4d0) cell_hwr_fs_pane_g2

0x88f5,	// (0x0005c71b) cell_hwr_fs_pane_g3_ParamLimits

0x88f5,	// (0x0005c71b) cell_hwr_fs_pane_g3

0x8902,	// (0x0005c728) cell_hwr_fs_pane_g4_ParamLimits

0x8902,	// (0x0005c728) cell_hwr_fs_pane_g4

0x0003,

0xf80b,	// (0x00063631) cell_hwr_fs_pane_g_ParamLimits

0xf80b,	// (0x00063631) cell_hwr_fs_pane_g

0x6926,	// (0x0005a74c) cell_hwr_fs_pane_t1

0xb99d,	// (0x0005f7c3) grid_highlight_pane_cp6

0xb99d,	// (0x0005f7c3) main_idle_act2_pane

0xf185,	// (0x00062fab) aid_inside_area_popup_secondary

0x955b,	// (0x0005d381) aid_inside_area_window_primary_ParamLimits

0x955b,	// (0x0005d381) aid_inside_area_window_primary

0xa2ce,	// (0x0005e0f4) ai2_news_ticker_pane

0xa2d6,	// (0x0005e0fc) aid_size_cell_ai1_link_ParamLimits

0xa2d6,	// (0x0005e0fc) aid_size_cell_ai1_link

0xa2f0,	// (0x0005e116) popup_ai2_data_window_ParamLimits

0xa2f0,	// (0x0005e116) popup_ai2_data_window

0xa30e,	// (0x0005e134) popup_ai2_link_window_ParamLimits

0xa30e,	// (0x0005e134) popup_ai2_link_window

0x88a9,	// (0x0005c6cf) bg_popup_sub_pane_cp4_ParamLimits

0x88a9,	// (0x0005c6cf) bg_popup_sub_pane_cp4

0xa324,	// (0x0005e14a) grid_ai2_link_pane_ParamLimits

0xa324,	// (0x0005e14a) grid_ai2_link_pane

0xa33b,	// (0x0005e161) popup_ai2_link_window_g1_ParamLimits

0xa33b,	// (0x0005e161) popup_ai2_link_window_g1

0xa347,	// (0x0005e16d) popup_ai2_link_window_g2_ParamLimits

0xa347,	// (0x0005e16d) popup_ai2_link_window_g2

0x0001,

0xf9de,	// (0x00063804) popup_ai2_link_window_g_ParamLimits

0xf9de,	// (0x00063804) popup_ai2_link_window_g

0xa358,	// (0x0005e17e) ai2_mp_button_pane

0xa360,	// (0x0005e186) ai2_mp_volume_pane

0x8a9a,	// (0x0005c8c0) bg_popup_sub_pane_cp5_ParamLimits

0x8a9a,	// (0x0005c8c0) bg_popup_sub_pane_cp5

0xa368,	// (0x0005e18e) heading_ai2_gene_pane_ParamLimits

0xa368,	// (0x0005e18e) heading_ai2_gene_pane

0xa374,	// (0x0005e19a) list_ai2_gene_pane_ParamLimits

0xa374,	// (0x0005e19a) list_ai2_gene_pane

0xa3bc,	// (0x0005e1e2) cell_ai2_link_pane_ParamLimits

0xa3bc,	// (0x0005e1e2) cell_ai2_link_pane

0xa3d2,	// (0x0005e1f8) cell_ai2_link_pane_g1

0xb99d,	// (0x0005f7c3) grid_highlight_pane_cp7

0x6cc7,	// (0x0005aaed) ai2_mp_volume_pane_g1

0xa4a5,	// (0x0005e2cb) ai2_mp_volume_pane_g2

0xa41a,	// (0x0005e240) list_ai2_gene_pane_t1

0xa4ad,	// (0x0005e2d3) ai2_mp_volume_pane_g3

0x0002,

0xf9f7,	// (0x0006381d) ai2_mp_volume_pane_g

0x6ccf,	// (0x0005aaf5) volume_small_pane_cp3

0xa4b5,	// (0x0005e2db) aid_size_cell_ai2_button

0xa4bd,	// (0x0005e2e3) grid_ai2_button_pane

0xa4c6,	// (0x0005e2ec) cell_ai2_button_pane_ParamLimits

0xa4c6,	// (0x0005e2ec) cell_ai2_button_pane

0xb993,	// (0x0005f7b9) cell_ai2_button_pane_g1

0xb99d,	// (0x0005f7c3) grid_highlight_pane_cp8

0xa465,	// (0x0005e28b) ai2_gene_pane_t1_ParamLimits

0xa465,	// (0x0005e28b) ai2_gene_pane_t1

0x7c78,	// (0x0005ba9e) aid_height_parent_landscape

0x9d8e,	// (0x0005dbb4) aid_height_set_list

0x9d9f,	// (0x0005dbc5) aid_size_parent

0xa0ef,	// (0x0005df15) aid_size_cell_graphic_pane_ParamLimits

0xa384,	// (0x0005e1aa) popup_ai2_data_window_g1_ParamLimits

0xa384,	// (0x0005e1aa) popup_ai2_data_window_g1

0xa390,	// (0x0005e1b6) ai2_news_ticker_pane_g1

0xa398,	// (0x0005e1be) ai2_news_ticker_pane_g2

0x0001,

0xf9e3,	// (0x00063809) ai2_news_ticker_pane_g

0xa3a0,	// (0x0005e1c6) ai2_news_ticker_pane_t1

0xa3ae,	// (0x0005e1d4) ai2_news_ticker_pane_t2

0x0001,

0xf9e8,	// (0x0006380e) ai2_news_ticker_pane_t

0xa3db,	// (0x0005e201) heading_ai2_gene_pane_g1

0xa3e3,	// (0x0005e209) heading_ai2_gene_pane_t1_ParamLimits

0xa3e3,	// (0x0005e209) heading_ai2_gene_pane_t1

0xa3f8,	// (0x0005e21e) list_highlight_pane_cp6

0xa400,	// (0x0005e226) ai2_gene_pane_ParamLimits

0xa400,	// (0x0005e226) ai2_gene_pane

0xa428,	// (0x0005e24e) list_ai2_gene_pane_t2

0x0001,

0xf9ed,	// (0x00063813) list_ai2_gene_pane_t

0xa436,	// (0x0005e25c) list_highlight_pane_cp8_ParamLimits

0xa436,	// (0x0005e25c) list_highlight_pane_cp8

0xa447,	// (0x0005e26d) ai2_gene_pane_g1_ParamLimits

0xa447,	// (0x0005e26d) ai2_gene_pane_g1

0xa459,	// (0x0005e27f) ai2_gene_pane_g2_ParamLimits

0xa459,	// (0x0005e27f) ai2_gene_pane_g2

0x0001,

0xf9f2,	// (0x00063818) ai2_gene_pane_g_ParamLimits

0xf9f2,	// (0x00063818) ai2_gene_pane_g

0xf008,	// (0x00062e2e) scroll_pane_cp12

0x6786,	// (0x0005a5ac) control_pane_t3_ParamLimits

0x6786,	// (0x0005a5ac) control_pane_t3

0x6602,	// (0x0005a428) status_small_pane_g8_ParamLimits

0x6602,	// (0x0005a428) status_small_pane_g8

0x7e82,	// (0x0005bca8) popup_find_window_ParamLimits

0x80ad,	// (0x0005bed3) popup_note_image_window_ParamLimits

0x36e6,	// (0x0005750c) list_double2_graphic_pane_vc_g1_ParamLimits

0x36e6,	// (0x0005750c) list_double2_graphic_pane_vc_g1

0x3265,	// (0x0005708b) list_double2_graphic_pane_vc_g2_ParamLimits

0x3265,	// (0x0005708b) list_double2_graphic_pane_vc_g2

0x67f7,	// (0x0005a61d) list_double2_graphic_pane_vc_g3_ParamLimits

0x67f7,	// (0x0005a61d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x000635ef) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x000635ef) list_double2_graphic_pane_vc_g

0x36f2,	// (0x00057518) list_double2_graphic_pane_vc_t1_ParamLimits

0x36f2,	// (0x00057518) list_double2_graphic_pane_vc_t1

0x3265,	// (0x0005708b) list_single_heading_pane_vc_g1_ParamLimits

0x3265,	// (0x0005708b) list_single_heading_pane_vc_g1

0x67f7,	// (0x0005a61d) list_single_heading_pane_vc_g2_ParamLimits

0x67f7,	// (0x0005a61d) list_single_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x00063610) list_single_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x00063610) list_single_heading_pane_vc_g

0x3708,	// (0x0005752e) list_single_heading_pane_vc_t1_ParamLimits

0x3708,	// (0x0005752e) list_single_heading_pane_vc_t1

0x3720,	// (0x00057546) list_single_heading_pane_vc_t2_ParamLimits

0x3720,	// (0x00057546) list_single_heading_pane_vc_t2

0x0001,

0xf7ef,	// (0x00063615) list_single_heading_pane_vc_t_ParamLimits

0xf7ef,	// (0x00063615) list_single_heading_pane_vc_t

0x6879,	// (0x0005a69f) list_setting_number_pane_vc_g1_ParamLimits

0x6879,	// (0x0005a69f) list_setting_number_pane_vc_g1

0x6885,	// (0x0005a6ab) list_setting_number_pane_vc_g2_ParamLimits

0x6885,	// (0x0005a6ab) list_setting_number_pane_vc_g2

0x0001,

0xf7f4,	// (0x0006361a) list_setting_number_pane_vc_g_ParamLimits

0xf7f4,	// (0x0006361a) list_setting_number_pane_vc_g

0x3732,	// (0x00057558) list_setting_number_pane_vc_t1_ParamLimits

0x3732,	// (0x00057558) list_setting_number_pane_vc_t1

0x3746,	// (0x0005756c) list_setting_number_pane_vc_t2_ParamLimits

0x3746,	// (0x0005756c) list_setting_number_pane_vc_t2

0x3762,	// (0x00057588) list_setting_number_pane_vc_t3_ParamLimits

0x3762,	// (0x00057588) list_setting_number_pane_vc_t3

0x0002,

0xf7f9,	// (0x0006361f) list_setting_number_pane_vc_t_ParamLimits

0xf7f9,	// (0x0006361f) list_setting_number_pane_vc_t

0x3790,	// (0x000575b6) set_value_pane_vc_ParamLimits

0x3790,	// (0x000575b6) set_value_pane_vc

0x9f77,	// (0x0005dd9d) list_double2_graphic_pane_vc_ParamLimits

0x9f77,	// (0x0005dd9d) list_double2_graphic_pane_vc

0x9f77,	// (0x0005dd9d) list_double2_large_graphic_pane_vc_ParamLimits

0x9f77,	// (0x0005dd9d) list_double2_large_graphic_pane_vc

0x9f77,	// (0x0005dd9d) list_double2_pane_vc_ParamLimits

0x9f77,	// (0x0005dd9d) list_double2_pane_vc

0x9f77,	// (0x0005dd9d) list_double_graphic_heading_pane_vc_ParamLimits

0x9f77,	// (0x0005dd9d) list_double_graphic_heading_pane_vc

0x9f77,	// (0x0005dd9d) list_double_graphic_pane_vc_ParamLimits

0x9f77,	// (0x0005dd9d) list_double_graphic_pane_vc

0x9f77,	// (0x0005dd9d) list_double_heading_pane_vc_ParamLimits

0x9f77,	// (0x0005dd9d) list_double_heading_pane_vc

0x9f77,	// (0x0005dd9d) list_double_large_graphic_pane_vc_ParamLimits

0x9f77,	// (0x0005dd9d) list_double_large_graphic_pane_vc

0x9f77,	// (0x0005dd9d) list_double_number_pane_vc_ParamLimits

0x9f77,	// (0x0005dd9d) list_double_number_pane_vc

0x9f77,	// (0x0005dd9d) list_double_pane_vc_ParamLimits

0x9f77,	// (0x0005dd9d) list_double_pane_vc

0x9f77,	// (0x0005dd9d) list_double_time_pane_vc_ParamLimits

0x9f77,	// (0x0005dd9d) list_double_time_pane_vc

0x9f77,	// (0x0005dd9d) list_setting_number_pane_vc_ParamLimits

0x9f77,	// (0x0005dd9d) list_setting_number_pane_vc

0x9f77,	// (0x0005dd9d) list_setting_pane_vc_ParamLimits

0x9f77,	// (0x0005dd9d) list_setting_pane_vc

0x9f77,	// (0x0005dd9d) list_single_graphic_heading_pane_vc_ParamLimits

0x9f77,	// (0x0005dd9d) list_single_graphic_heading_pane_vc

0x9f77,	// (0x0005dd9d) list_single_heading_pane_vc_ParamLimits

0x9f77,	// (0x0005dd9d) list_single_heading_pane_vc

0x9f8b,	// (0x0005ddb1) list_single_number_heading_pane_vc_ParamLimits

0x9f8b,	// (0x0005ddb1) list_single_number_heading_pane_vc

0x36e6,	// (0x0005750c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x36e6,	// (0x0005750c) list_double_graphic_heading_pane_vc_g1

0x9994,	// (0x0005d7ba) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9994,	// (0x0005d7ba) list_double_graphic_heading_pane_vc_g2

0x99a0,	// (0x0005d7c6) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x99a0,	// (0x0005d7c6) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fe,	// (0x00063824) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fe,	// (0x00063824) list_double_graphic_heading_pane_vc_g

0x3cb0,	// (0x00057ad6) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3cb0,	// (0x00057ad6) list_double_graphic_heading_pane_vc_t1

0x3cc6,	// (0x00057aec) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3cc6,	// (0x00057aec) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa05,	// (0x0006382b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa05,	// (0x0006382b) list_double_graphic_heading_pane_vc_t

0x6879,	// (0x0005a69f) list_setting_pane_vc_g1_ParamLimits

0x6879,	// (0x0005a69f) list_setting_pane_vc_g1

0x6885,	// (0x0005a6ab) list_setting_pane_vc_g2_ParamLimits

0x6885,	// (0x0005a6ab) list_setting_pane_vc_g2

0x0001,

0xf7f4,	// (0x0006361a) list_setting_pane_vc_g_ParamLimits

0xf7f4,	// (0x0006361a) list_setting_pane_vc_g

0x3ce4,	// (0x00057b0a) list_setting_pane_vc_t1_ParamLimits

0x3ce4,	// (0x00057b0a) list_setting_pane_vc_t1

0x3d00,	// (0x00057b26) list_setting_pane_vc_t2_ParamLimits

0x3d00,	// (0x00057b26) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x00063859) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x00063859) list_setting_pane_vc_t

0x3790,	// (0x000575b6) set_value_pane_cp_vc_ParamLimits

0x3790,	// (0x000575b6) set_value_pane_cp_vc

0x3265,	// (0x0005708b) list_single_number_heading_pane_vc_g1_ParamLimits

0x3265,	// (0x0005708b) list_single_number_heading_pane_vc_g1

0x67f7,	// (0x0005a61d) list_single_number_heading_pane_vc_g2_ParamLimits

0x67f7,	// (0x0005a61d) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x00063610) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x00063610) list_single_number_heading_pane_vc_g

0x3708,	// (0x0005752e) list_single_number_heading_pane_vc_t1_ParamLimits

0x3708,	// (0x0005752e) list_single_number_heading_pane_vc_t1

0x3d1c,	// (0x00057b42) list_single_number_heading_pane_vc_t2_ParamLimits

0x3d1c,	// (0x00057b42) list_single_number_heading_pane_vc_t2

0x3c88,	// (0x00057aae) list_single_number_heading_pane_vc_t3_ParamLimits

0x3c88,	// (0x00057aae) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x0006385e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0006385e) list_single_number_heading_pane_vc_t

0x36e6,	// (0x0005750c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x36e6,	// (0x0005750c) list_single_graphic_heading_pane_vc_g1

0x3265,	// (0x0005708b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3265,	// (0x0005708b) list_single_graphic_heading_pane_vc_g4

0x67f7,	// (0x0005a61d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x67f7,	// (0x0005a61d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x000635ef) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x000635ef) list_single_graphic_heading_pane_vc_g

0x3708,	// (0x0005752e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3708,	// (0x0005752e) list_single_graphic_heading_pane_vc_t1

0x3d2e,	// (0x00057b54) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3d2e,	// (0x00057b54) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x00063865) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x00063865) list_single_graphic_heading_pane_vc_t

0x3265,	// (0x0005708b) list_double2_pane_vc_g1_ParamLimits

0x3265,	// (0x0005708b) list_double2_pane_vc_g1

0x67f7,	// (0x0005a61d) list_double2_pane_vc_g2_ParamLimits

0x67f7,	// (0x0005a61d) list_double2_pane_vc_g2

0x0001,

0xf7ea,	// (0x00063610) list_double2_pane_vc_g_ParamLimits

0xf7ea,	// (0x00063610) list_double2_pane_vc_g

0x3c9a,	// (0x00057ac0) list_double2_pane_vc_t1_ParamLimits

0x3c9a,	// (0x00057ac0) list_double2_pane_vc_t1

0x99ac,	// (0x0005d7d2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x99ac,	// (0x0005d7d2) list_double2_large_graphic_pane_vc_g1

0x3265,	// (0x0005708b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3265,	// (0x0005708b) list_double2_large_graphic_pane_vc_g2

0x67f7,	// (0x0005a61d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x67f7,	// (0x0005a61d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa44,	// (0x0006386a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa44,	// (0x0006386a) list_double2_large_graphic_pane_vc_g

0x3c72,	// (0x00057a98) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3c72,	// (0x00057a98) list_double2_large_graphic_pane_vc_t1

0x99b8,	// (0x0005d7de) list_double_time_pane_vc_g1_ParamLimits

0x99b8,	// (0x0005d7de) list_double_time_pane_vc_g1

0x99c4,	// (0x0005d7ea) list_double_time_pane_vc_g2_ParamLimits

0x99c4,	// (0x0005d7ea) list_double_time_pane_vc_g2

0x0001,

0xfa4b,	// (0x00063871) list_double_time_pane_vc_g_ParamLimits

0xfa4b,	// (0x00063871) list_double_time_pane_vc_g

0x3d40,	// (0x00057b66) list_double_time_pane_vc_t1_ParamLimits

0x3d40,	// (0x00057b66) list_double_time_pane_vc_t1

0x3d6a,	// (0x00057b90) list_double_time_pane_vc_t2_ParamLimits

0x3d6a,	// (0x00057b90) list_double_time_pane_vc_t2

0x3db3,	// (0x00057bd9) list_double_time_pane_vc_t3_ParamLimits

0x3db3,	// (0x00057bd9) list_double_time_pane_vc_t3

0x3dc5,	// (0x00057beb) list_double_time_pane_vc_t4_ParamLimits

0x3dc5,	// (0x00057beb) list_double_time_pane_vc_t4

0x0003,

0xfa50,	// (0x00063876) list_double_time_pane_vc_t_ParamLimits

0xfa50,	// (0x00063876) list_double_time_pane_vc_t

0x3265,	// (0x0005708b) list_double_pane_vc_g1_ParamLimits

0x3265,	// (0x0005708b) list_double_pane_vc_g1

0x67f7,	// (0x0005a61d) list_double_pane_vc_g2_ParamLimits

0x67f7,	// (0x0005a61d) list_double_pane_vc_g2

0x0001,

0xf7ea,	// (0x00063610) list_double_pane_vc_g_ParamLimits

0xf7ea,	// (0x00063610) list_double_pane_vc_g

0x3dea,	// (0x00057c10) list_double_pane_vc_t1_ParamLimits

0x3dea,	// (0x00057c10) list_double_pane_vc_t1

0x3dfe,	// (0x00057c24) list_double_pane_vc_t2_ParamLimits

0x3dfe,	// (0x00057c24) list_double_pane_vc_t2

0x0001,

0xfa59,	// (0x0006387f) list_double_pane_vc_t_ParamLimits

0xfa59,	// (0x0006387f) list_double_pane_vc_t

0x3265,	// (0x0005708b) list_double_number_pane_vc_g1_ParamLimits

0x3265,	// (0x0005708b) list_double_number_pane_vc_g1

0x67f7,	// (0x0005a61d) list_double_number_pane_vc_g2_ParamLimits

0x67f7,	// (0x0005a61d) list_double_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00063610) list_double_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00063610) list_double_number_pane_vc_g

0x3e14,	// (0x00057c3a) list_double_number_pane_vc_t1_ParamLimits

0x3e14,	// (0x00057c3a) list_double_number_pane_vc_t1

0x3e28,	// (0x00057c4e) list_double_number_pane_vc_t2_ParamLimits

0x3e28,	// (0x00057c4e) list_double_number_pane_vc_t2

0x3e3c,	// (0x00057c62) list_double_number_pane_vc_t3_ParamLimits

0x3e3c,	// (0x00057c62) list_double_number_pane_vc_t3

0x0002,

0xfa5e,	// (0x00063884) list_double_number_pane_vc_t_ParamLimits

0xfa5e,	// (0x00063884) list_double_number_pane_vc_t

0x99d0,	// (0x0005d7f6) list_double_large_graphic_pane_vc_g1_ParamLimits

0x99d0,	// (0x0005d7f6) list_double_large_graphic_pane_vc_g1

0x99e1,	// (0x0005d807) list_double_large_graphic_pane_vc_g2_ParamLimits

0x99e1,	// (0x0005d807) list_double_large_graphic_pane_vc_g2

0x67f7,	// (0x0005a61d) list_double_large_graphic_pane_vc_g3_ParamLimits

0x67f7,	// (0x0005a61d) list_double_large_graphic_pane_vc_g3

0x3e52,	// (0x00057c78) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3e52,	// (0x00057c78) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa65,	// (0x0006388b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa65,	// (0x0006388b) list_double_large_graphic_pane_vc_g

0x3e5e,	// (0x00057c84) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3e5e,	// (0x00057c84) list_double_large_graphic_pane_vc_t1

0x3e77,	// (0x00057c9d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3e77,	// (0x00057c9d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6e,	// (0x00063894) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6e,	// (0x00063894) list_double_large_graphic_pane_vc_t

0x9994,	// (0x0005d7ba) list_double_heading_pane_vc_g1_ParamLimits

0x9994,	// (0x0005d7ba) list_double_heading_pane_vc_g1

0x99a0,	// (0x0005d7c6) list_double_heading_pane_vc_g2_ParamLimits

0x99a0,	// (0x0005d7c6) list_double_heading_pane_vc_g2

0x0001,

0xfa73,	// (0x00063899) list_double_heading_pane_vc_g_ParamLimits

0xfa73,	// (0x00063899) list_double_heading_pane_vc_g

0x3e8e,	// (0x00057cb4) list_double_heading_pane_vc_t1_ParamLimits

0x3e8e,	// (0x00057cb4) list_double_heading_pane_vc_t1

0x3708,	// (0x0005752e) list_double_heading_pane_vc_t2_ParamLimits

0x3708,	// (0x0005752e) list_double_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x0006389e) list_double_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x0006389e) list_double_heading_pane_vc_t

0x36e6,	// (0x0005750c) list_double_graphic_pane_vc_g1_ParamLimits

0x36e6,	// (0x0005750c) list_double_graphic_pane_vc_g1

0x99f0,	// (0x0005d816) list_double_graphic_pane_vc_g2_ParamLimits

0x99f0,	// (0x0005d816) list_double_graphic_pane_vc_g2

0x99ff,	// (0x0005d825) list_double_graphic_pane_vc_g3_ParamLimits

0x99ff,	// (0x0005d825) list_double_graphic_pane_vc_g3

0x0002,

0xfa7d,	// (0x000638a3) list_double_graphic_pane_vc_g_ParamLimits

0xfa7d,	// (0x000638a3) list_double_graphic_pane_vc_g

0x3ea0,	// (0x00057cc6) list_double_graphic_pane_vc_t1_ParamLimits

0x3ea0,	// (0x00057cc6) list_double_graphic_pane_vc_t1

0x3eb4,	// (0x00057cda) list_double_graphic_pane_vc_t2_ParamLimits

0x3eb4,	// (0x00057cda) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x000638aa) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x000638aa) list_double_graphic_pane_vc_t

0x4d93,	// (0x00058bb9) aid_size_cell_fastswap

0x4d9b,	// (0x00058bc1) aid_size_cell_touch_ParamLimits

0x4d9b,	// (0x00058bc1) aid_size_cell_touch

0x5006,	// (0x00058e2c) popup_fast_swap_wide_window_ParamLimits

0x5006,	// (0x00058e2c) popup_fast_swap_wide_window

0x5124,	// (0x00058f4a) touch_pane_ParamLimits

0x5124,	// (0x00058f4a) touch_pane

0xf05e,	// (0x00062e84) button_value_adjust_pane_cp2

0x328b,	// (0x000570b1) button_value_adjust_pane_cp4

0x3293,	// (0x000570b9) form_field_data_pane_cp2

0x5a65,	// (0x0005988b) form_field_data_wide_pane_cp2

0xf3c4,	// (0x000631ea) bg_scroll_pane_ParamLimits

0x5e4b,	// (0x00059c71) scroll_handle_pane_ParamLimits

0x5e5f,	// (0x00059c85) scroll_sc2_down_pane_ParamLimits

0x5e5f,	// (0x00059c85) scroll_sc2_down_pane

0xf3f5,	// (0x0006321b) scroll_sc2_up_pane_ParamLimits

0xf3f5,	// (0x0006321b) scroll_sc2_up_pane

0xabe5,	// (0x0005ea0b) grid_wheel_folder_pane_g1_ParamLimits

0xabe5,	// (0x0005ea0b) grid_wheel_folder_pane_g1

0x61f1,	// (0x0005a017) clock_nsta_pane_cp2_ParamLimits

0x61f1,	// (0x0005a017) clock_nsta_pane_cp2

0x5c09,	// (0x00059a2f) listscroll_midp_pane_ParamLimits

0x6322,	// (0x0005a148) midp_canvas_pane

0x7c70,	// (0x0005ba96) nsta_clock_indic_pane

0x7cbe,	// (0x0005bae4) listscroll_form_pane_vc

0x7ce2,	// (0x0005bb08) listscroll_set_pane_vc_ParamLimits

0x7ce2,	// (0x0005bb08) listscroll_set_pane_vc

0x83fe,	// (0x0005c224) clock_nsta_pane

0x847b,	// (0x0005c2a1) indicator_nsta_pane

0x8773,	// (0x0005c599) bg_popup_sub_pane_cp2_ParamLimits

0x8787,	// (0x0005c5ad) find_pane_cp2_ParamLimits

0x8787,	// (0x0005c5ad) find_pane_cp2

0x879d,	// (0x0005c5c3) grid_toobar_pane_ParamLimits

0x887d,	// (0x0005c6a3) list_form_gen_pane_vc_ParamLimits

0x887d,	// (0x0005c6a3) list_form_gen_pane_vc

0x8893,	// (0x0005c6b9) scroll_pane_cp8_vc_ParamLimits

0x8893,	// (0x0005c6b9) scroll_pane_cp8_vc

0x890f,	// (0x0005c735) data_form_wide_pane_vc_ParamLimits

0x890f,	// (0x0005c735) data_form_wide_pane_vc

0x891b,	// (0x0005c741) form_field_data_wide_pane_vc_g1

0x8923,	// (0x0005c749) form_field_data_wide_pane_vc_t1_ParamLimits

0x8923,	// (0x0005c749) form_field_data_wide_pane_vc_t1

0xf072,	// (0x00062e98) input_focus_pane_cp6_vc_ParamLimits

0xf072,	// (0x00062e98) input_focus_pane_cp6_vc

0x8c25,	// (0x0005ca4b) list_midp_pane_ParamLimits

0x8c31,	// (0x0005ca57) scroll_pane_cp16_ParamLimits

0x8c31,	// (0x0005ca57) scroll_pane_cp16

0x8c7f,	// (0x0005caa5) button_value_adjust_pane_ParamLimits

0x8c7f,	// (0x0005caa5) button_value_adjust_pane

0x9db1,	// (0x0005dbd7) button_value_adjust_pane_cp6_ParamLimits

0x9db1,	// (0x0005dbd7) button_value_adjust_pane_cp6

0x9eff,	// (0x0005dd25) settings_code_pane_cp_ParamLimits

0x9eff,	// (0x0005dd25) settings_code_pane_cp

0xb993,	// (0x0005f7b9) cell_touch_pane_g1

0xb993,	// (0x0005f7b9) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x00063534) cell_touch_pane_g

0xa4d8,	// (0x0005e2fe) cell_touch_pane_cp_ParamLimits

0xa4d8,	// (0x0005e2fe) cell_touch_pane_cp

0xa4e8,	// (0x0005e30e) cell_touch_pane_ParamLimits

0xa4e8,	// (0x0005e30e) cell_touch_pane

0xb993,	// (0x0005f7b9) scroll_sc2_down_pane_g1

0xb993,	// (0x0005f7b9) scroll_sc2_up_pane_g1

0xb99d,	// (0x0005f7c3) bg_set_opt_pane_cp4_vc

0xa4f9,	// (0x0005e31f) list_set_graphic_pane_vc_g1_ParamLimits

0xa4f9,	// (0x0005e31f) list_set_graphic_pane_vc_g1

0x1a5b,	// (0x00055881) list_set_graphic_pane_vc_g2_ParamLimits

0x1a5b,	// (0x00055881) list_set_graphic_pane_vc_g2

0x0001,

0xfa0a,	// (0x00063830) list_set_graphic_pane_vc_g_ParamLimits

0xfa0a,	// (0x00063830) list_set_graphic_pane_vc_g

0xa505,	// (0x0005e32b) text_primary_small_cp13_vc_ParamLimits

0xa505,	// (0x0005e32b) text_primary_small_cp13_vc

0xa51d,	// (0x0005e343) list_set_graphic_pane_vc_ParamLimits

0xa51d,	// (0x0005e343) list_set_graphic_pane_vc

0xb99d,	// (0x0005f7c3) input_focus_pane_cp2_vc

0xb993,	// (0x0005f7b9) setting_code_pane_vc_g1

0xba0e,	// (0x0005f834) setting_code_pane_vc_t1

0xa532,	// (0x0005e358) set_text_pane_vc_t1_ParamLimits

0xa532,	// (0x0005e358) set_text_pane_vc_t1

0xb99d,	// (0x0005f7c3) input_focus_pane_cp1_vc

0xa550,	// (0x0005e376) list_set_text_pane_vc

0xb993,	// (0x0005f7b9) setting_text_pane_vc_g1

0xb99d,	// (0x0005f7c3) bg_set_opt_pane_cp2_vc

0xba05,	// (0x0005f82b) setting_slider_graphic_pane_vc_g1

0xa55a,	// (0x0005e380) setting_slider_graphic_pane_vc_t1

0xa56c,	// (0x0005e392) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0f,	// (0x00063835) setting_slider_graphic_pane_vc_t

0xa57e,	// (0x0005e3a4) slider_set_pane_cp_vc

0xa588,	// (0x0005e3ae) slider_set_pane_vc_g1

0xa591,	// (0x0005e3b7) slider_set_pane_vc_g2

0x0006,

0xfa14,	// (0x0006383a) slider_set_pane_vc_g

0xf0cd,	// (0x00062ef3) set_opt_bg_pane_g1_copy1

0xf0d5,	// (0x00062efb) set_opt_bg_pane_g2_copy1

0xa5bd,	// (0x0005e3e3) set_opt_bg_pane_g3_copy1

0xf0e5,	// (0x00062f0b) set_opt_bg_pane_g4_copy1

0xf0ed,	// (0x00062f13) set_opt_bg_pane_g5_copy1

0xf0f5,	// (0x00062f1b) set_opt_bg_pane_g6_copy1

0xa5c7,	// (0x0005e3ed) set_opt_bg_pane_g7_copy1

0xa5d1,	// (0x0005e3f7) set_opt_bg_pane_g8_copy1

0xa5db,	// (0x0005e401) set_opt_bg_pane_g9_copy1

0xb99d,	// (0x0005f7c3) bg_set_opt_pane_cp_vc

0xa5e5,	// (0x0005e40b) setting_slider_pane_vc_t1

0xa5f4,	// (0x0005e41a) setting_slider_pane_vc_t2

0xa606,	// (0x0005e42c) setting_slider_pane_vc_t3

0x0002,

0xfa23,	// (0x00063849) setting_slider_pane_vc_t

0xa618,	// (0x0005e43e) slider_set_pane_vc

0x6953,	// (0x0005a779) volume_set_pane_vc_g1

0x695c,	// (0x0005a782) volume_set_pane_vc_g2

0x6965,	// (0x0005a78b) volume_set_pane_vc_g3

0x696e,	// (0x0005a794) volume_set_pane_vc_g4

0x6977,	// (0x0005a79d) volume_set_pane_vc_g5

0x6980,	// (0x0005a7a6) volume_set_pane_vc_g6

0x6989,	// (0x0005a7af) volume_set_pane_vc_g7

0x6992,	// (0x0005a7b8) volume_set_pane_vc_g8

0x699b,	// (0x0005a7c1) volume_set_pane_vc_g9

0x69a4,	// (0x0005a7ca) volume_set_pane_vc_g10

0x0009,

0xf8c1,	// (0x000636e7) volume_set_pane_vc_g

0xa622,	// (0x0005e448) volume_set_pane_vc

0xa62c,	// (0x0005e452) button_value_adjust_pane_cp1_vc

0xa636,	// (0x0005e45c) list_highlight_pane_cp2_vc

0xa63f,	// (0x0005e465) list_set_pane_vc_ParamLimits

0xa63f,	// (0x0005e465) list_set_pane_vc

0xa6af,	// (0x0005e4d5) main_pane_set_vc_t1_ParamLimits

0xa6af,	// (0x0005e4d5) main_pane_set_vc_t1

0xa6c4,	// (0x0005e4ea) main_pane_set_vc_t2_ParamLimits

0xa6c4,	// (0x0005e4ea) main_pane_set_vc_t2

0xa6d6,	// (0x0005e4fc) main_pane_set_vc_t3_ParamLimits

0xa6d6,	// (0x0005e4fc) main_pane_set_vc_t3

0xa6ea,	// (0x0005e510) main_pane_set_vc_t4_ParamLimits

0xa6ea,	// (0x0005e510) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x00063850) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x00063850) main_pane_set_vc_t

0xa6fe,	// (0x0005e524) setting_code_pane_vc_ParamLimits

0xa6fe,	// (0x0005e524) setting_code_pane_vc

0xa70f,	// (0x0005e535) setting_slider_graphic_pane_vc

0xa70f,	// (0x0005e535) setting_slider_pane_vc

0xa70f,	// (0x0005e535) setting_text_pane_vc

0xa70f,	// (0x0005e535) setting_volume_pane_vc

0xa719,	// (0x0005e53f) scroll_pane_cp121_vc

0xf04c,	// (0x00062e72) set_content_pane_vc

0xa721,	// (0x0005e547) button_value_adjust_pane_g1

0xa72a,	// (0x0005e550) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x000638af) button_value_adjust_pane_g

0xa733,	// (0x0005e559) form_field_slider_wide_pane_vc_t1_ParamLimits

0xa733,	// (0x0005e559) form_field_slider_wide_pane_vc_t1

0xa745,	// (0x0005e56b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xa745,	// (0x0005e56b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x000638b4) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x000638b4) form_field_slider_wide_pane_vc_t

0xba64,	// (0x0005f88a) input_focus_pane_cp10_vc_ParamLimits

0xba64,	// (0x0005f88a) input_focus_pane_cp10_vc

0xa771,	// (0x0005e597) slider_cont_pane_cp1_vc_ParamLimits

0xa771,	// (0x0005e597) slider_cont_pane_cp1_vc

0xa783,	// (0x0005e5a9) slider_form_pane_g1_cp2

0xa591,	// (0x0005e3b7) slider_form_pane_g2_cp2

0xa7b0,	// (0x0005e5d6) form_field_slider_pane_vc_t3

0xa7be,	// (0x0005e5e4) form_field_slider_pane_vc_t4

0xa7cc,	// (0x0005e5f2) slider_form_pane_vc_ParamLimits

0xa7cc,	// (0x0005e5f2) slider_form_pane_vc

0xa7d9,	// (0x0005e5ff) form_field_slider_pane_vc_t1_ParamLimits

0xa7d9,	// (0x0005e5ff) form_field_slider_pane_vc_t1

0xa745,	// (0x0005e56b) form_field_slider_pane_vc_t2_ParamLimits

0xa745,	// (0x0005e56b) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x000638c6) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x000638c6) form_field_slider_pane_vc_t

0xba64,	// (0x0005f88a) input_focus_pane_cp9_vc_ParamLimits

0xba64,	// (0x0005f88a) input_focus_pane_cp9_vc

0xa7ef,	// (0x0005e615) slider_cont_pane_vc_ParamLimits

0xa7ef,	// (0x0005e615) slider_cont_pane_vc

0xa803,	// (0x0005e629) list_form_graphic_pane_cp_vc_ParamLimits

0xa803,	// (0x0005e629) list_form_graphic_pane_cp_vc

0x891b,	// (0x0005c741) form_field_popup_wide_pane_vc_g1

0xa818,	// (0x0005e63e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xa818,	// (0x0005e63e) form_field_popup_wide_pane_vc_t1

0xf072,	// (0x00062e98) input_focus_pane_cp8_vc_ParamLimits

0xf072,	// (0x00062e98) input_focus_pane_cp8_vc

0xa85d,	// (0x0005e683) list_form_wide_pane_vc_ParamLimits

0xa85d,	// (0x0005e683) list_form_wide_pane_vc

0xa869,	// (0x0005e68f) list_form_graphic_pane_vc_g1

0xa871,	// (0x0005e697) list_form_graphic_pane_vc_t1_ParamLimits

0xa871,	// (0x0005e697) list_form_graphic_pane_vc_t1

0xb9f7,	// (0x0005f81d) list_highlight_pane_cp5_vc_ParamLimits

0xb9f7,	// (0x0005f81d) list_highlight_pane_cp5_vc

0xa88d,	// (0x0005e6b3) list_form_graphic_pane_vc_ParamLimits

0xa88d,	// (0x0005e6b3) list_form_graphic_pane_vc

0x891b,	// (0x0005c741) form_field_popup_pane_vc_g1

0xa8a3,	// (0x0005e6c9) form_field_popup_pane_vc_t1_ParamLimits

0xa8a3,	// (0x0005e6c9) form_field_popup_pane_vc_t1

0xf072,	// (0x00062e98) input_focus_pane_cp7_vc_ParamLimits

0xf072,	// (0x00062e98) input_focus_pane_cp7_vc

0xa8ba,	// (0x0005e6e0) list_form_pane_vc_ParamLimits

0xa8ba,	// (0x0005e6e0) list_form_pane_vc

0xa8c6,	// (0x0005e6ec) data_form_pane_vc_t1_ParamLimits

0xa8c6,	// (0x0005e6ec) data_form_pane_vc_t1

0xf0cd,	// (0x00062ef3) input_focus_pane_vc_g1

0xf0d5,	// (0x00062efb) input_focus_pane_vc_g2

0xf0dd,	// (0x00062f03) input_focus_pane_vc_g3

0xf0e5,	// (0x00062f0b) input_focus_pane_vc_g4

0xf0ed,	// (0x00062f13) input_focus_pane_vc_g5

0xf0f5,	// (0x00062f1b) input_focus_pane_vc_g6

0xf0fd,	// (0x00062f23) input_focus_pane_vc_g7

0xf105,	// (0x00062f2b) input_focus_pane_vc_g8

0xf10d,	// (0x00062f33) input_focus_pane_vc_g9

0xb993,	// (0x0005f7b9) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x000634bd) input_focus_pane_vc_g

0x890f,	// (0x0005c735) data_form_pane_vc_ParamLimits

0x890f,	// (0x0005c735) data_form_pane_vc

0x891b,	// (0x0005c741) form_field_data_pane_vc_g1

0xa8e3,	// (0x0005e709) form_field_data_pane_vc_t1_ParamLimits

0xa8e3,	// (0x0005e709) form_field_data_pane_vc_t1

0xf072,	// (0x00062e98) input_focus_pane_vc_ParamLimits

0xf072,	// (0x00062e98) input_focus_pane_vc

0xa8fd,	// (0x0005e723) button_value_adjust_pane_cp3_vc

0xa905,	// (0x0005e72b) button_value_adjust_pane_cp5_vc

0xa90d,	// (0x0005e733) form_field_data_pane_vc_ParamLimits

0xa90d,	// (0x0005e733) form_field_data_pane_vc

0xa928,	// (0x0005e74e) form_field_data_pane_vc_cp2

0xa930,	// (0x0005e756) form_field_data_wide_pane_vc_ParamLimits

0xa930,	// (0x0005e756) form_field_data_wide_pane_vc

0xa94a,	// (0x0005e770) form_field_data_wide_pane_vc_cp2

0xa952,	// (0x0005e778) form_field_popup_pane_vc_ParamLimits

0xa952,	// (0x0005e778) form_field_popup_pane_vc

0xa96d,	// (0x0005e793) form_field_popup_wide_pane_vc_ParamLimits

0xa96d,	// (0x0005e793) form_field_popup_wide_pane_vc

0xa987,	// (0x0005e7ad) form_field_slider_pane_vc_ParamLimits

0xa987,	// (0x0005e7ad) form_field_slider_pane_vc

0xa99a,	// (0x0005e7c0) form_field_slider_wide_pane_vc_ParamLimits

0xa99a,	// (0x0005e7c0) form_field_slider_wide_pane_vc

0xa9ad,	// (0x0005e7d3) grid_touch_1_pane_ParamLimits

0xa9ad,	// (0x0005e7d3) grid_touch_1_pane

0xa9b9,	// (0x0005e7df) grid_touch_2_pane_ParamLimits

0xa9b9,	// (0x0005e7df) grid_touch_2_pane

0x6696,	// (0x0005a4bc) touch_pane_g1_ParamLimits

0x6696,	// (0x0005a4bc) touch_pane_g1

0xa9d3,	// (0x0005e7f9) cell_app_pane_cp_wide_ParamLimits

0xa9d3,	// (0x0005e7f9) cell_app_pane_cp_wide

0xa9e4,	// (0x0005e80a) grid_popup_fast_wide_pane_ParamLimits

0xa9e4,	// (0x0005e80a) grid_popup_fast_wide_pane

0xa9f8,	// (0x0005e81e) scroll_pane_cp19_ParamLimits

0xa9f8,	// (0x0005e81e) scroll_pane_cp19

0xb99d,	// (0x0005f7c3) bg_popup_window_pane_cp20

0xaa0c,	// (0x0005e832) listscroll_popup_fast_wide_pane

0xb9f7,	// (0x0005f81d) grid_indicator_nsta_pane

0xaa14,	// (0x0005e83a) clock_nsta_pane_g1

0xaa1d,	// (0x0005e843) clock_nsta_pane_t1

0xaa39,	// (0x0005e85f) cell_indicator_nsta_pane_ParamLimits

0xaa39,	// (0x0005e85f) cell_indicator_nsta_pane

0xaa71,	// (0x0005e897) cell_indicator_nsta_pane_g1

0xaa7f,	// (0x0005e8a5) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x000638d7) cell_indicator_nsta_pane_g

0xaa95,	// (0x0005e8bb) clock_nsta_pane_cp

0xaa9d,	// (0x0005e8c3) indicator_nsta_pane_cp

0xaaa6,	// (0x0005e8cc) nsta_clock_indic_pane_g1

0xba33,	// (0x0005f859) grid_indicator_pane

0xf4e7,	// (0x0006330d) scroll_pane_cp29

0x613d,	// (0x00059f63) indicator_nsta_pane_cp2_ParamLimits

0x613d,	// (0x00059f63) indicator_nsta_pane_cp2

0xb9f7,	// (0x0005f81d) main_apps_wheel_pane

0x8b02,	// (0x0005c928) form_midp_field_text_pane_ParamLimits

0x8c51,	// (0x0005ca77) scroll_bar_cp050_ParamLimits

0xab0f,	// (0x0005e935) cell_indicator_pane_ParamLimits

0xab0f,	// (0x0005e935) cell_indicator_pane

0xab27,	// (0x0005e94d) cell_indicator_pane_g1

0xab31,	// (0x0005e957) grid_wheel_folder_pane_ParamLimits

0xab31,	// (0x0005e957) grid_wheel_folder_pane

0xab45,	// (0x0005e96b) list_wheel_apps_pane_ParamLimits

0xab45,	// (0x0005e96b) list_wheel_apps_pane

0xab58,	// (0x0005e97e) main_apps_wheel_pane_g1_ParamLimits

0xab58,	// (0x0005e97e) main_apps_wheel_pane_g1

0xab74,	// (0x0005e99a) main_apps_wheel_pane_g2_ParamLimits

0xab74,	// (0x0005e99a) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x000638f3) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x000638f3) main_apps_wheel_pane_g

0xab90,	// (0x0005e9b6) main_apps_wheel_pane_t1_ParamLimits

0xab90,	// (0x0005e9b6) main_apps_wheel_pane_t1

0xabb9,	// (0x0005e9df) list_wheel_apps_pane_g1

0xabc1,	// (0x0005e9e7) list_wheel_apps_pane_g2

0xabc9,	// (0x0005e9ef) list_wheel_apps_pane_g3

0xabd1,	// (0x0005e9f7) list_wheel_apps_pane_g4

0xabdb,	// (0x0005ea01) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x000638f8) list_wheel_apps_pane_g

0x34ce,	// (0x000572f4) navi_icon_text_pane

0x832b,	// (0x0005c151) aid_fill_nsta

0xabfc,	// (0x0005ea22) navi_icon_text_pane_g1

0xac08,	// (0x0005ea2e) navi_icon_text_pane_t1

0x6286,	// (0x0005a0ac) list_set_graphic_pane_t1_ParamLimits

0x6286,	// (0x0005a0ac) list_set_graphic_pane_t1

0x93a2,	// (0x0005d1c8) popup_midp_note_alarm_window_t6_ParamLimits

0x93a2,	// (0x0005d1c8) popup_midp_note_alarm_window_t6

0x93b4,	// (0x0005d1da) popup_midp_note_alarm_window_t7_ParamLimits

0x93b4,	// (0x0005d1da) popup_midp_note_alarm_window_t7

0x93c6,	// (0x0005d1ec) popup_midp_note_alarm_window_t8_ParamLimits

0x93c6,	// (0x0005d1ec) popup_midp_note_alarm_window_t8

0x93d8,	// (0x0005d1fe) popup_midp_note_alarm_window_t9_ParamLimits

0x93d8,	// (0x0005d1fe) popup_midp_note_alarm_window_t9

0x93ea,	// (0x0005d210) popup_midp_note_alarm_window_t10_ParamLimits

0x93ea,	// (0x0005d210) popup_midp_note_alarm_window_t10

0x93fc,	// (0x0005d222) popup_midp_note_alarm_window_t11_ParamLimits

0x93fc,	// (0x0005d222) popup_midp_note_alarm_window_t11

0x940e,	// (0x0005d234) scroll_pane_cp17_ParamLimits

0x940e,	// (0x0005d234) scroll_pane_cp17

0x6953,	// (0x0005a779) volume_small_pane_cp_g1

0x6cd8,	// (0x0005aafe) volume_small_pane_cp_g2

0x6ce1,	// (0x0005ab07) volume_small_pane_cp_g3

0x6cea,	// (0x0005ab10) volume_small_pane_cp_g4

0x6cf3,	// (0x0005ab19) volume_small_pane_cp_g5

0x6cfc,	// (0x0005ab22) volume_small_pane_cp_g6

0x6d05,	// (0x0005ab2b) volume_small_pane_cp_g7

0x6d0e,	// (0x0005ab34) volume_small_pane_cp_g8

0x6d17,	// (0x0005ab3d) volume_small_pane_cp_g9

0x6d20,	// (0x0005ab46) volume_small_pane_cp_g10

0x364a,	// (0x00057470) midp_ticker_pane_g1_ParamLimits

0x3656,	// (0x0005747c) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x00063589) midp_ticker_pane_g_ParamLimits

0x63c7,	// (0x0005a1ed) midp_ticker_pane_t1_ParamLimits

0x8341,	// (0x0005c167) aid_fill_nsta_2

0x8c3d,	// (0x0005ca63) list_form2_midp_pane

0x9f46,	// (0x0005dd6c) midp_editing_number_pane_ParamLimits

0x9f55,	// (0x0005dd7b) midp_ticker_pane_ParamLimits

0xac1a,	// (0x0005ea40) form2_midp_field_pane

0xac3e,	// (0x0005ea64) scroll_pane_cp51

0xac5e,	// (0x0005ea84) form2_midp_button_pane_ParamLimits

0xac5e,	// (0x0005ea84) form2_midp_button_pane

0xac70,	// (0x0005ea96) form2_midp_content_pane_ParamLimits

0xac70,	// (0x0005ea96) form2_midp_content_pane

0xac8a,	// (0x0005eab0) form2_midp_field_choice_group_pane

0xac92,	// (0x0005eab8) form2_midp_field_pane_g1

0xac9a,	// (0x0005eac0) form2_midp_field_pane_g2

0xaca2,	// (0x0005eac8) form2_midp_field_pane_g3

0xacaa,	// (0x0005ead0) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x0006391d) form2_midp_field_pane_g

0xacb2,	// (0x0005ead8) form2_midp_gauge_slider_pane

0xacba,	// (0x0005eae0) form2_midp_gauge_wait_pane

0xacc2,	// (0x0005eae8) form2_midp_image_pane_ParamLimits

0xacc2,	// (0x0005eae8) form2_midp_image_pane

0xacdd,	// (0x0005eb03) form2_midp_label_pane_ParamLimits

0xacdd,	// (0x0005eb03) form2_midp_label_pane

0xacfc,	// (0x0005eb22) form2_midp_label_pane_cp_ParamLimits

0xacfc,	// (0x0005eb22) form2_midp_label_pane_cp

0xad1d,	// (0x0005eb43) form2_midp_string_pane_ParamLimits

0xad1d,	// (0x0005eb43) form2_midp_string_pane

0x3eca,	// (0x00057cf0) form2_midp_text_pane_ParamLimits

0x3eca,	// (0x00057cf0) form2_midp_text_pane

0xad2f,	// (0x0005eb55) form2_midp_time_pane

0xad3f,	// (0x0005eb65) input_focus_pane_cp51_ParamLimits

0xad3f,	// (0x0005eb65) input_focus_pane_cp51

0xad57,	// (0x0005eb7d) form2_midp_label_pane_t1_ParamLimits

0xad57,	// (0x0005eb7d) form2_midp_label_pane_t1

0x3eed,	// (0x00057d13) form2_mdip_text_pane_t1_ParamLimits

0x3eed,	// (0x00057d13) form2_mdip_text_pane_t1

0x3f0c,	// (0x00057d32) form2_midp_time_pane_t1

0xada5,	// (0x0005ebcb) form2_midp_gauge_slider_pane_t1

0xadb7,	// (0x0005ebdd) form2_midp_gauge_slider_pane_t2

0xadc9,	// (0x0005ebef) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x00063926) form2_midp_gauge_slider_pane_t

0xaddb,	// (0x0005ec01) form2_midp_slider_pane

0xade7,	// (0x0005ec0d) form2_midp_gauge_wait_pane_t1

0xadf5,	// (0x0005ec1b) form2_midp_wait_pane_ParamLimits

0xadf5,	// (0x0005ec1b) form2_midp_wait_pane

0x8962,	// (0x0005c788) list_single_2graphic_pane_cp4_ParamLimits

0x8962,	// (0x0005c788) list_single_2graphic_pane_cp4

0xae20,	// (0x0005ec46) list_single_midp_graphic_pane_cp_ParamLimits

0xae20,	// (0x0005ec46) list_single_midp_graphic_pane_cp

0xb99d,	// (0x0005f7c3) list_highlight_pane_cp20

0xae44,	// (0x0005ec6a) list_single_2graphic_pane_g1_cp4

0xa3db,	// (0x0005e201) list_single_2graphic_pane_g2_cp4

0xae4c,	// (0x0005ec72) list_single_2graphic_pane_t1_cp4

0xb9f7,	// (0x0005f81d) list_highlight_pane_cp21

0xae5b,	// (0x0005ec81) list_single_midp_graphic_pane_g4_cp

0xae6a,	// (0x0005ec90) list_single_midp_graphic_pane_t1_cp

0xae7f,	// (0x0005eca5) form2_mdip_string_pane_t1_ParamLimits

0xae7f,	// (0x0005eca5) form2_mdip_string_pane_t1

0xb99d,	// (0x0005f7c3) bg_wml_button_pane_cp2

0xb993,	// (0x0005f7b9) form2_midp_image_pane_g1

0x4155,	// (0x00057f7b) list_double_large_graphic_pane_g5_ParamLimits

0x4155,	// (0x00057f7b) list_double_large_graphic_pane_g5

0x5c09,	// (0x00059a2f) midp_form_pane_ParamLimits

0xb9f7,	// (0x0005f81d) main_apps_wheel_pane_ParamLimits

0x80d5,	// (0x0005befb) popup_preview_window_ParamLimits

0x80d5,	// (0x0005befb) popup_preview_window

0x82bc,	// (0x0005c0e2) popup_touch_info_window_ParamLimits

0x82bc,	// (0x0005c0e2) popup_touch_info_window

0x82de,	// (0x0005c104) popup_touch_menu_window_ParamLimits

0x82de,	// (0x0005c104) popup_touch_menu_window

0xb989,	// (0x0005f7af) bg_popup_sub_pane_cp6

0xaf24,	// (0x0005ed4a) list_touch_menu_pane

0xaf2c,	// (0x0005ed52) list_single_touch_menu_pane_ParamLimits

0xaf2c,	// (0x0005ed52) list_single_touch_menu_pane

0xaf44,	// (0x0005ed6a) list_single_touch_menu_pane_t1

0xb9f7,	// (0x0005f81d) bg_popup_sub_pane_cp7_ParamLimits

0xb9f7,	// (0x0005f81d) bg_popup_sub_pane_cp7

0xaf52,	// (0x0005ed78) heading_sub_pane

0xaf5a,	// (0x0005ed80) list_touch_info_pane_ParamLimits

0xaf5a,	// (0x0005ed80) list_touch_info_pane

0xaf69,	// (0x0005ed8f) list_single_touch_info_pane_ParamLimits

0xaf69,	// (0x0005ed8f) list_single_touch_info_pane

0xaf7b,	// (0x0005eda1) list_single_touch_info_pane_t1

0xaf89,	// (0x0005edaf) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x00063934) list_single_touch_info_pane_t

0x361e,	// (0x00057444) bg_popup_heading_pane_cp

0xaf97,	// (0x0005edbd) heading_sub_pane_t1

0x88a9,	// (0x0005c6cf) bg_popup_preview_window_pane_cp_ParamLimits

0x88a9,	// (0x0005c6cf) bg_popup_preview_window_pane_cp

0xaf52,	// (0x0005ed78) heading_preview_pane

0xaf5a,	// (0x0005ed80) list_preview_pane_ParamLimits

0xaf5a,	// (0x0005ed80) list_preview_pane

0xafa5,	// (0x0005edcb) popup_preview_window_g1

0xaf69,	// (0x0005ed8f) list_single_preview_pane_ParamLimits

0xaf69,	// (0x0005ed8f) list_single_preview_pane

0xafad,	// (0x0005edd3) list_single_preview_pane_g1

0xafb5,	// (0x0005eddb) list_single_preview_pane_t1

0xaf7b,	// (0x0005eda1) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x00063939) list_single_preview_pane_t

0xafc3,	// (0x0005ede9) bg_popup_heading_pane_cp2_ParamLimits

0xafc3,	// (0x0005ede9) bg_popup_heading_pane_cp2

0xafd9,	// (0x0005edff) heading_preview_pane_g1

0xafe1,	// (0x0005ee07) heading_preview_pane_t1_ParamLimits

0xafe1,	// (0x0005ee07) heading_preview_pane_t1

0xba4a,	// (0x0005f870) soft_indicator_pane_t1_ParamLimits

0xefe5,	// (0x00062e0b) scroll_pane_ParamLimits

0xf3e3,	// (0x00063209) scroll_sc2_left_pane

0xf3ec,	// (0x00063212) scroll_sc2_right_pane

0xf40b,	// (0x00063231) scroll_bg_pane_g1_ParamLimits

0xf420,	// (0x00063246) scroll_bg_pane_g2_ParamLimits

0xf438,	// (0x0006325e) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x00063514) scroll_bg_pane_g_ParamLimits

0xf40b,	// (0x00063231) scroll_handle_pane_g1_ParamLimits

0xf45a,	// (0x00063280) scroll_handle_pane_g2_ParamLimits

0xf438,	// (0x0006325e) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0006351b) scroll_handle_pane_g_ParamLimits

0x7d1c,	// (0x0005bb42) popup_choice_list_window_ParamLimits

0x7d1c,	// (0x0005bb42) popup_choice_list_window

0x877f,	// (0x0005c5a5) choice_list_pane

0x8801,	// (0x0005c627) cell_toolbar_pane_t1

0x8829,	// (0x0005c64f) toolbar_button_pane_ParamLimits

0x98d8,	// (0x0005d6fe) ai_gene_pane_1_t2_ParamLimits

0x98d8,	// (0x0005d6fe) ai_gene_pane_1_t2

0x0001,

0xf91d,	// (0x00063743) ai_gene_pane_1_t_ParamLimits

0xf91d,	// (0x00063743) ai_gene_pane_1_t

0xaffe,	// (0x0005ee24) scroll_sc2_left_pane_g1

0xaffe,	// (0x0005ee24) scroll_sc2_right_pane_g1

0x7cf4,	// (0x0005bb1a) bg_popup_sub_pane_cp10

0xb008,	// (0x0005ee2e) list_choice_list_pane

0xb021,	// (0x0005ee47) list_single_choice_list_pane_ParamLimits

0xb021,	// (0x0005ee47) list_single_choice_list_pane

0xb039,	// (0x0005ee5f) list_single_choice_list_pane_g1

0xf1c3,	// (0x00062fe9) list_single_choice_list_pane_t1_ParamLimits

0xf1c3,	// (0x00062fe9) list_single_choice_list_pane_t1

0xb041,	// (0x0005ee67) choice_list_pane_g1

0xb049,	// (0x0005ee6f) choice_list_pane_t1

0xb989,	// (0x0005f7af) input_focus_pane_cp11

0xf341,	// (0x00063167) title_pane_stacon_g2_ParamLimits

0xf341,	// (0x00063167) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x000634fa) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x000634fa) title_pane_stacon_g

0x361e,	// (0x00057444) cursor_press_pane

0x7dd6,	// (0x0005bbfc) popup_fep_hwr_window_ParamLimits

0x7dd6,	// (0x0005bbfc) popup_fep_hwr_window

0x7e60,	// (0x0005bc86) popup_fep_vkb_window_ParamLimits

0x7e60,	// (0x0005bc86) popup_fep_vkb_window

0xb057,	// (0x0005ee7d) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x00063962) fep_vkb_side_pane_g_ParamLimits

0x6d62,	// (0x0005ab88) fep_hwr_candidate_pane_ParamLimits

0x6d62,	// (0x0005ab88) fep_hwr_candidate_pane

0x6d8c,	// (0x0005abb2) fep_hwr_side_pane_ParamLimits

0x6d8c,	// (0x0005abb2) fep_hwr_side_pane

0x6dae,	// (0x0005abd4) fep_hwr_top_pane_ParamLimits

0x6dae,	// (0x0005abd4) fep_hwr_top_pane

0x6dc6,	// (0x0005abec) fep_hwr_write_pane_ParamLimits

0x6dc6,	// (0x0005abec) fep_hwr_write_pane

0xfb3c,	// (0x00063962) fep_vkb_side_pane_g

0xb05f,	// (0x0005ee85) fep_hwr_top_pane_g1

0xb071,	// (0x0005ee97) fep_hwr_top_pane_g2

0x6e00,	// (0x0005ac26) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x0006393e) fep_hwr_top_pane_g

0x6e15,	// (0x0005ac3b) fep_hwr_top_text_pane

0x10fa,	// (0x00054f20) fep_hwr_top_text_pane_g1

0xb0a7,	// (0x0005eecd) fep_hwr_top_text_pane_t1

0x6f1f,	// (0x0005ad45) fep_hwr_candidate_pane_g1

0xb2f2,	// (0x0005f118) fep_vkb_keypad_pane_g3_ParamLimits

0xb2f2,	// (0x0005f118) fep_vkb_keypad_pane_g3

0xb31e,	// (0x0005f144) fep_vkb_keypad_pane_g4_ParamLimits

0xb31e,	// (0x0005f144) fep_vkb_keypad_pane_g4

0xb395,	// (0x0005f1bb) fep_vkb_bottom_pane_g2_ParamLimits

0xb395,	// (0x0005f1bb) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x00063969) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x00063969) fep_vkb_bottom_pane_g

0xaffe,	// (0x0005ee24) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x00063973) cell_vkb_side_pane_g

0xb420,	// (0x0005f246) cell_vkb_side_pane_t1

0xb42e,	// (0x0005f254) cell_vkb_side_pane_t1_copy1

0xaffe,	// (0x0005ee24) bg_fep_vkb_candidate_pane_g2

0xb572,	// (0x0005f398) cell_vkb_candidate_pane_ParamLimits

0xb0b5,	// (0x0005eedb) aid_size_cell_vkb_ParamLimits

0xb0b5,	// (0x0005eedb) aid_size_cell_vkb

0xb572,	// (0x0005f398) cell_vkb_candidate_pane

0x6f46,	// (0x0005ad6c) bg_popup_fep_shadow_pane_g1

0xb147,	// (0x0005ef6d) fep_vkb_bottom_pane_ParamLimits

0xb147,	// (0x0005ef6d) fep_vkb_bottom_pane

0xb184,	// (0x0005efaa) fep_vkb_candidate_pane_ParamLimits

0xb184,	// (0x0005efaa) fep_vkb_candidate_pane

0xb1a0,	// (0x0005efc6) fep_vkb_keypad_pane_ParamLimits

0xb1a0,	// (0x0005efc6) fep_vkb_keypad_pane

0xb1d3,	// (0x0005eff9) fep_vkb_side_pane_ParamLimits

0xb1d3,	// (0x0005eff9) fep_vkb_side_pane

0xb20f,	// (0x0005f035) fep_vkb_top_pane_ParamLimits

0xb20f,	// (0x0005f035) fep_vkb_top_pane

0xb24b,	// (0x0005f071) fep_vkb_top_pane_g1_ParamLimits

0xb24b,	// (0x0005f071) fep_vkb_top_pane_g1

0xb25a,	// (0x0005f080) fep_vkb_top_pane_g2_ParamLimits

0xb25a,	// (0x0005f080) fep_vkb_top_pane_g2

0xb269,	// (0x0005f08f) fep_vkb_top_pane_g3_ParamLimits

0xb269,	// (0x0005f08f) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x00063959) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x00063959) fep_vkb_top_pane_g

0xb287,	// (0x0005f0ad) fep_vkb_top_text_pane_ParamLimits

0xb287,	// (0x0005f0ad) fep_vkb_top_text_pane

0xb298,	// (0x0005f0be) fep_vkb_side_pane_g1_ParamLimits

0xb298,	// (0x0005f0be) fep_vkb_side_pane_g1

0xb2e1,	// (0x0005f107) grid_vkb_side_pane_ParamLimits

0xb2e1,	// (0x0005f107) grid_vkb_side_pane

0x6f4e,	// (0x0005ad74) bg_popup_fep_shadow_pane_g2

0x6f57,	// (0x0005ad7d) bg_popup_fep_shadow_pane_g3

0x6f5f,	// (0x0005ad85) bg_popup_fep_shadow_pane_g4

0x6f68,	// (0x0005ad8e) bg_popup_fep_shadow_pane_g5

0x6f72,	// (0x0005ad98) bg_popup_fep_shadow_pane_g6

0x6f7a,	// (0x0005ada0) bg_popup_fep_shadow_pane_g7

0xf0e5,	// (0x00062f0b) bg_popup_fep_shadow_pane_g8

0xb340,	// (0x0005f166) grid_vkb_keypad_number_pane_ParamLimits

0xb340,	// (0x0005f166) grid_vkb_keypad_number_pane

0xb354,	// (0x0005f17a) grid_vkb_keypad_pane_ParamLimits

0xb354,	// (0x0005f17a) grid_vkb_keypad_pane

0xb37a,	// (0x0005f1a0) fep_vkb_bottom_pane_g1_ParamLimits

0xb37a,	// (0x0005f1a0) fep_vkb_bottom_pane_g1

0xb3a3,	// (0x0005f1c9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb3a3,	// (0x0005f1c9) grid_vkb_keypad_bottom_left_pane

0xb3b8,	// (0x0005f1de) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb3b8,	// (0x0005f1de) grid_vkb_keypad_bottom_right_pane

0xb3cd,	// (0x0005f1f3) fep_vkb_top_text_pane_g1

0xb3e8,	// (0x0005f20e) fep_vkb_top_text_pane_t1

0xb3fd,	// (0x0005f223) cell_vkb_side_pane_ParamLimits

0xb3fd,	// (0x0005f223) cell_vkb_side_pane

0xaffe,	// (0x0005ee24) cell_vkb_side_pane_g1

0xb43c,	// (0x0005f262) cell_vkb_keypad_pane_ParamLimits

0xb43c,	// (0x0005f262) cell_vkb_keypad_pane

0xb4c9,	// (0x0005f2ef) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x00063986) bg_popup_fep_shadow_pane_g

0x6f8c,	// (0x0005adb2) cell_hwr_side_pane_g1

0x6f8c,	// (0x0005adb2) cell_hwr_side_pane_g2

0xb4d3,	// (0x0005f2f9) cell_vkb_keypad_pane_t1

0xb4e1,	// (0x0005f307) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb4e1,	// (0x0005f307) cell_vkb_keypad_bottom_left_pane

0xb4fe,	// (0x0005f324) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb4fe,	// (0x0005f324) cell_vkb_keypad_bottom_right_pane

0xaffe,	// (0x0005ee24) cell_vkb_keypad_bottom_left_pane_g1

0xaffe,	// (0x0005ee24) cell_vkb_keypad_bottom_right_pane_g1

0xb537,	// (0x0005f35d) cell_vkb_keypad_number_pane_ParamLimits

0xb537,	// (0x0005f35d) cell_vkb_keypad_number_pane

0xb556,	// (0x0005f37c) cell_vkb_keypad_number_pane_g1

0xb560,	// (0x0005f386) cell_vkb_keypad_number_pane_g2

0xb569,	// (0x0005f38f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x00063978) cell_vkb_keypad_number_pane_g

0xb4d3,	// (0x0005f2f9) cell_vkb_keypad_number_pane_t1

0xb593,	// (0x0005f3b9) fep_vkb_candidate_pane_g1

0x0001,

0xfb73,	// (0x00063999) cell_hwr_side_pane_g

0xb5ac,	// (0x0005f3d2) cell_hwr_side_pane_t1

0x6f96,	// (0x0005adbc) cell_hwr_side_pane_t1_copy1

0x6fa4,	// (0x0005adca) cell_hwr_candidate_pane_g1

0x6fd3,	// (0x0005adf9) cell_hwr_candidate_pane_t1

0xaffe,	// (0x0005ee24) cell_vkb_candidate_pane_g2

0xb5f0,	// (0x0005f416) cell_vkb_candidate_pane_t1

0x6d29,	// (0x0005ab4f) bg_popup_fep_shadow_pane_ParamLimits

0x6d29,	// (0x0005ab4f) bg_popup_fep_shadow_pane

0x6de0,	// (0x0005ac06) bg_fep_hwr_top_pane_g4

0xb083,	// (0x0005eea9) bg_hwr_side_pane_g1_ParamLimits

0xb083,	// (0x0005eea9) bg_hwr_side_pane_g1

0x6e53,	// (0x0005ac79) cell_hwr_side_pane_ParamLimits

0x6e53,	// (0x0005ac79) cell_hwr_side_pane

0x6e90,	// (0x0005acb6) fep_hwr_write_pane_g1_ParamLimits

0x6e90,	// (0x0005acb6) fep_hwr_write_pane_g1

0x6e9d,	// (0x0005acc3) fep_hwr_write_pane_g2_ParamLimits

0x6e9d,	// (0x0005acc3) fep_hwr_write_pane_g2

0x6eaa,	// (0x0005acd0) fep_hwr_write_pane_g3_ParamLimits

0x6eaa,	// (0x0005acd0) fep_hwr_write_pane_g3

0x6eb8,	// (0x0005acde) fep_hwr_write_pane_g4_ParamLimits

0x6eb8,	// (0x0005acde) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x00063945) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x00063945) fep_hwr_write_pane_g

0x6de0,	// (0x0005ac06) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6de0,	// (0x0005ac06) bg_fep_hwr_candidate_pane_g2

0x6ecd,	// (0x0005acf3) cell_hwr_candidate_pane_ParamLimits

0x6ecd,	// (0x0005acf3) cell_hwr_candidate_pane

0x6f1f,	// (0x0005ad45) fep_hwr_candidate_pane_g1_ParamLimits

0xb0e3,	// (0x0005ef09) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb0e3,	// (0x0005ef09) bg_popup_fep_shadow_pane_cp2

0xb279,	// (0x0005f09f) fep_vkb_top_pane_g4_ParamLimits

0xb279,	// (0x0005f09f) fep_vkb_top_pane_g4

0xb2bf,	// (0x0005f0e5) fep_vkb_side_pane_g2_ParamLimits

0xb2bf,	// (0x0005f0e5) fep_vkb_side_pane_g2

0x5961,	// (0x00059787) list_setting_pane_t4_ParamLimits

0x5961,	// (0x00059787) list_setting_pane_t4

0x59fd,	// (0x00059823) list_setting_number_pane_t5_ParamLimits

0x59fd,	// (0x00059823) list_setting_number_pane_t5

0x5eee,	// (0x00059d14) list_double_heading_pane_cp2_ParamLimits

0x5eee,	// (0x00059d14) list_double_heading_pane_cp2

0xb5fe,	// (0x0005f424) list_double_heading_pane_g1_cp2_ParamLimits

0xb5fe,	// (0x0005f424) list_double_heading_pane_g1_cp2

0xb60a,	// (0x0005f430) list_double_heading_pane_g2_cp2_ParamLimits

0xb60a,	// (0x0005f430) list_double_heading_pane_g2_cp2

0xb61e,	// (0x0005f444) list_double_heading_pane_t1_cp2_ParamLimits

0xb61e,	// (0x0005f444) list_double_heading_pane_t1_cp2

0xb634,	// (0x0005f45a) list_double_heading_pane_t2_cp2_ParamLimits

0xb634,	// (0x0005f45a) list_double_heading_pane_t2_cp2

0xb981,	// (0x0005f7a7) aid_value_unit2

0x5064,	// (0x00058e8a) popup_preview_fixed_window

0xeb90,	// (0x000629b6) bg_popup_preview_window_pane_cp02

0xb646,	// (0x0005f46c) list_preview_fixed_pane

0xb68c,	// (0x0005f4b2) list_empty_pane_fp_ParamLimits

0xb68c,	// (0x0005f4b2) list_empty_pane_fp

0xb68c,	// (0x0005f4b2) list_single_cale_day_pane_fp_ParamLimits

0xb68c,	// (0x0005f4b2) list_single_cale_day_pane_fp

0xb68c,	// (0x0005f4b2) list_single_graphic_heading_pane_fp_ParamLimits

0xb68c,	// (0x0005f4b2) list_single_graphic_heading_pane_fp

0xb68c,	// (0x0005f4b2) list_single_graphic_pane_fp_ParamLimits

0xb68c,	// (0x0005f4b2) list_single_graphic_pane_fp

0xb68c,	// (0x0005f4b2) list_single_heading_pane_fp_ParamLimits

0xb68c,	// (0x0005f4b2) list_single_heading_pane_fp

0xb68c,	// (0x0005f4b2) list_single_pane_fp_ParamLimits

0xb68c,	// (0x0005f4b2) list_single_pane_fp

0xb6a5,	// (0x0005f4cb) list_single_pane_fp_g1_ParamLimits

0xb6a5,	// (0x0005f4cb) list_single_pane_fp_g1

0xb5fe,	// (0x0005f424) list_single_pane_fp_g2_ParamLimits

0xb5fe,	// (0x0005f424) list_single_pane_fp_g2

0xb60a,	// (0x0005f430) list_single_pane_fp_g3_ParamLimits

0xb60a,	// (0x0005f430) list_single_pane_fp_g3

0xb6b1,	// (0x0005f4d7) list_single_pane_fp_g4_ParamLimits

0xb6b1,	// (0x0005f4d7) list_single_pane_fp_g4

0x0003,

0xfb86,	// (0x000639ac) list_single_pane_fp_g_ParamLimits

0xfb86,	// (0x000639ac) list_single_pane_fp_g

0x3f1f,	// (0x00057d45) list_single_pane_fp_t1_ParamLimits

0x3f1f,	// (0x00057d45) list_single_pane_fp_t1

0x3f36,	// (0x00057d5c) list_single_graphic_pane_fp_g1_ParamLimits

0x3f36,	// (0x00057d5c) list_single_graphic_pane_fp_g1

0xb6a5,	// (0x0005f4cb) list_single_graphic_pane_fp_g2_ParamLimits

0xb6a5,	// (0x0005f4cb) list_single_graphic_pane_fp_g2

0xb5fe,	// (0x0005f424) list_single_graphic_pane_fp_g3_ParamLimits

0xb5fe,	// (0x0005f424) list_single_graphic_pane_fp_g3

0xb60a,	// (0x0005f430) list_single_graphic_pane_fp_g4_ParamLimits

0xb60a,	// (0x0005f430) list_single_graphic_pane_fp_g4

0xb6b1,	// (0x0005f4d7) list_single_graphic_pane_fp_g5_ParamLimits

0xb6b1,	// (0x0005f4d7) list_single_graphic_pane_fp_g5

0x0004,

0xfb8f,	// (0x000639b5) list_single_graphic_pane_fp_g_ParamLimits

0xfb8f,	// (0x000639b5) list_single_graphic_pane_fp_g

0x3f42,	// (0x00057d68) list_single_graphic_pane_fp_t1_ParamLimits

0x3f42,	// (0x00057d68) list_single_graphic_pane_fp_t1

0x3f36,	// (0x00057d5c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3f36,	// (0x00057d5c) list_single_graphic_heading_pane_fp_g1

0xb6a5,	// (0x0005f4cb) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb6a5,	// (0x0005f4cb) list_single_graphic_heading_pane_fp_g2

0xb5fe,	// (0x0005f424) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb5fe,	// (0x0005f424) list_single_graphic_heading_pane_fp_g3

0xb60a,	// (0x0005f430) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb60a,	// (0x0005f430) list_single_graphic_heading_pane_fp_g4

0xb6b1,	// (0x0005f4d7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb6b1,	// (0x0005f4d7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x000639b5) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x000639b5) list_single_graphic_heading_pane_fp_g

0x3f58,	// (0x00057d7e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3f58,	// (0x00057d7e) list_single_graphic_heading_pane_fp_t1

0x3f6e,	// (0x00057d94) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3f6e,	// (0x00057d94) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9a,	// (0x000639c0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9a,	// (0x000639c0) list_single_graphic_heading_pane_fp_t

0x3f80,	// (0x00057da6) list_single_cale_day_pane_fp_g1_ParamLimits

0x3f80,	// (0x00057da6) list_single_cale_day_pane_fp_g1

0xb6bd,	// (0x0005f4e3) list_single_cale_day_pane_fp_g2_ParamLimits

0xb6bd,	// (0x0005f4e3) list_single_cale_day_pane_fp_g2

0x9a0b,	// (0x0005d831) list_single_cale_day_pane_fp_g3_ParamLimits

0x9a0b,	// (0x0005d831) list_single_cale_day_pane_fp_g3

0x9a33,	// (0x0005d859) list_single_cale_day_pane_fp_g4_ParamLimits

0x9a33,	// (0x0005d859) list_single_cale_day_pane_fp_g4

0x9a57,	// (0x0005d87d) list_single_cale_day_pane_fp_g5_ParamLimits

0x9a57,	// (0x0005d87d) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9f,	// (0x000639c5) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9f,	// (0x000639c5) list_single_cale_day_pane_fp_g

0x3fb8,	// (0x00057dde) list_single_cale_day_pane_fp_t1_ParamLimits

0x3fb8,	// (0x00057dde) list_single_cale_day_pane_fp_t1

0x3fde,	// (0x00057e04) list_single_cale_day_pane_fp_t2_ParamLimits

0x3fde,	// (0x00057e04) list_single_cale_day_pane_fp_t2

0x3ff7,	// (0x00057e1d) list_single_cale_day_pane_fp_t3_ParamLimits

0x3ff7,	// (0x00057e1d) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaa,	// (0x000639d0) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaa,	// (0x000639d0) list_single_cale_day_pane_fp_t

0xb6a5,	// (0x0005f4cb) list_empty_pane_fp_g1_ParamLimits

0xb6a5,	// (0x0005f4cb) list_empty_pane_fp_g1

0x4010,	// (0x00057e36) list_empty_pane_fp_t1

0x401e,	// (0x00057e44) list_empty_pane_fp_t2

0x0001,

0xfbb1,	// (0x000639d7) list_empty_pane_fp_t

0xb6a5,	// (0x0005f4cb) list_single_heading_pane_fp_g1_ParamLimits

0xb6a5,	// (0x0005f4cb) list_single_heading_pane_fp_g1

0xb5fe,	// (0x0005f424) list_single_heading_pane_fp_g2_ParamLimits

0xb5fe,	// (0x0005f424) list_single_heading_pane_fp_g2

0xb60a,	// (0x0005f430) list_single_heading_pane_fp_g3_ParamLimits

0xb60a,	// (0x0005f430) list_single_heading_pane_fp_g3

0x0002,

0xfbb6,	// (0x000639dc) list_single_heading_pane_fp_g_ParamLimits

0xfbb6,	// (0x000639dc) list_single_heading_pane_fp_g

0x402c,	// (0x00057e52) list_single_heading_pane_fp_t1_ParamLimits

0x402c,	// (0x00057e52) list_single_heading_pane_fp_t1

0x403e,	// (0x00057e64) list_single_heading_pane_fp_t2_ParamLimits

0x403e,	// (0x00057e64) list_single_heading_pane_fp_t2

0x0001,

0xfbbd,	// (0x000639e3) list_single_heading_pane_fp_t_ParamLimits

0xfbbd,	// (0x000639e3) list_single_heading_pane_fp_t

0xf1d8,	// (0x00062ffe) aid_size_cell_fast

0xeb73,	// (0x00062999) soft_indicator_pane_cp1_t1

0xf215,	// (0x0006303b) cell_app_pane_cp2_ParamLimits

0xf215,	// (0x0006303b) cell_app_pane_cp2

0x6d4b,	// (0x0005ab71) fep_hwr_candidate_drop_down_list_pane

0x6f39,	// (0x0005ad5f) fep_hwr_candidate_pane_g3_ParamLimits

0x6f39,	// (0x0005ad5f) fep_hwr_candidate_pane_g3

0x2bf8,	// (0x00056a1e) fep_hwr_candidate_pane_g4_ParamLimits

0x2bf8,	// (0x00056a1e) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00063952) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x00063952) fep_hwr_candidate_pane_g

0xb173,	// (0x0005ef99) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb173,	// (0x0005ef99) fep_vkb_candidate_drop_down_list_pane

0xb59b,	// (0x0005f3c1) fep_vkb_candidate_pane_g3

0xb5a3,	// (0x0005f3c9) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x0006397f) fep_vkb_candidate_pane_g

0x6fa4,	// (0x0005adca) cell_hwr_candidate_pane_g1_ParamLimits

0x6fb2,	// (0x0005add8) cell_hwr_candidate_pane_g3_ParamLimits

0x6fb2,	// (0x0005add8) cell_hwr_candidate_pane_g3

0xba72,	// (0x0005f898) cell_hwr_candidate_pane_g4_ParamLimits

0xba72,	// (0x0005f898) cell_hwr_candidate_pane_g4

0x0002,

0xfb78,	// (0x0006399e) cell_hwr_candidate_pane_g_ParamLimits

0xfb78,	// (0x0006399e) cell_hwr_candidate_pane_g

0xb5ba,	// (0x0005f3e0) cell_vkb_candidate_pane_g3_ParamLimits

0xb5ba,	// (0x0005f3e0) cell_vkb_candidate_pane_g3

0xb5d5,	// (0x0005f3fb) cell_vkb_candidate_pane_g4_ParamLimits

0xb5d5,	// (0x0005f3fb) cell_vkb_candidate_pane_g4

0xb6c9,	// (0x0005f4ef) cell_app_pane_cp2_g1_ParamLimits

0xb6c9,	// (0x0005f4ef) cell_app_pane_cp2_g1

0xb6e7,	// (0x0005f50d) cell_app_pane_cp2_g2_ParamLimits

0xb6e7,	// (0x0005f50d) cell_app_pane_cp2_g2

0x0001,

0xfbc2,	// (0x000639e8) cell_app_pane_cp2_g_ParamLimits

0xfbc2,	// (0x000639e8) cell_app_pane_cp2_g

0xb6f3,	// (0x0005f519) cell_app_pane_cp2_t1_ParamLimits

0xb6f3,	// (0x0005f519) cell_app_pane_cp2_t1

0xf072,	// (0x00062e98) grid_highlight_pane_cp1_ParamLimits

0xf072,	// (0x00062e98) grid_highlight_pane_cp1

0x6ff1,	// (0x0005ae17) cell_hwr_candidate_pane_cp1_ParamLimits

0x6ff1,	// (0x0005ae17) cell_hwr_candidate_pane_cp1

0x6fa4,	// (0x0005adca) fep_hwr_candidate_drop_down_list_pane_g1

0x7015,	// (0x0005ae3b) fep_hwr_candidate_drop_down_list_pane_g2

0x7022,	// (0x0005ae48) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x000639ed) fep_hwr_candidate_drop_down_list_pane_g

0x702f,	// (0x0005ae55) fep_hwr_candidate_drop_down_list_scroll_pane

0x7038,	// (0x0005ae5e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7038,	// (0x0005ae5e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7045,	// (0x0005ae6b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7045,	// (0x0005ae6b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7052,	// (0x0005ae78) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7052,	// (0x0005ae78) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x705f,	// (0x0005ae85) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x705f,	// (0x0005ae85) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x707a,	// (0x0005aea0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x707a,	// (0x0005aea0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7095,	// (0x0005aebb) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7095,	// (0x0005aebb) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x70b0,	// (0x0005aed6) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x70b0,	// (0x0005aed6) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x70cb,	// (0x0005aef1) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x70cb,	// (0x0005aef1) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x000639f4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x000639f4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xb705,	// (0x0005f52b) cell_vkb_candidate_pane_cp1_ParamLimits

0xb705,	// (0x0005f52b) cell_vkb_candidate_pane_cp1

0xb279,	// (0x0005f09f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb279,	// (0x0005f09f) fep_vkb_candidate_drop_down_list_pane_g1

0xb72b,	// (0x0005f551) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xb72b,	// (0x0005f551) fep_vkb_candidate_drop_down_list_pane_g2

0xb738,	// (0x0005f55e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xb738,	// (0x0005f55e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdf,	// (0x00063a05) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdf,	// (0x00063a05) fep_vkb_candidate_drop_down_list_pane_g

0xb745,	// (0x0005f56b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xb745,	// (0x0005f56b) fep_vkb_candidate_drop_down_list_scroll_pane

0xb752,	// (0x0005f578) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb752,	// (0x0005f578) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xb75f,	// (0x0005f585) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb75f,	// (0x0005f585) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xb76b,	// (0x0005f591) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb76b,	// (0x0005f591) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xb777,	// (0x0005f59d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb777,	// (0x0005f59d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xb798,	// (0x0005f5be) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb798,	// (0x0005f5be) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xb7b9,	// (0x0005f5df) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb7b9,	// (0x0005f5df) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xb7da,	// (0x0005f600) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb7da,	// (0x0005f600) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xb7fb,	// (0x0005f621) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb7fb,	// (0x0005f621) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe6,	// (0x00063a0c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe6,	// (0x00063a0c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5184,	// (0x00058faa) title_pane_g1_ParamLimits

0x5191,	// (0x00058fb7) title_pane_g2_ParamLimits

0xf554,	// (0x0006337a) title_pane_g_ParamLimits

0xf544,	// (0x0006336a) aid_call2_pane

0xf54c,	// (0x00063372) aid_call_pane

0x10fa,	// (0x00054f20) popup_clock_analogue_window_g1

0x10fa,	// (0x00054f20) popup_clock_analogue_window_g2

0x5ecf,	// (0x00059cf5) popup_clock_analogue_window_g3

0x5ed8,	// (0x00059cfe) popup_clock_analogue_window_g4

0xb993,	// (0x0005f7b9) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x00063529) popup_clock_analogue_window_g

0x5ee0,	// (0x00059d06) popup_clock_analogue_window_t1

0x5f21,	// (0x00059d47) clock_digital_number_pane_ParamLimits

0x5f21,	// (0x00059d47) clock_digital_number_pane

0x5f2d,	// (0x00059d53) clock_digital_number_pane_cp02_ParamLimits

0x5f2d,	// (0x00059d53) clock_digital_number_pane_cp02

0x5f39,	// (0x00059d5f) clock_digital_number_pane_cp03_ParamLimits

0x5f39,	// (0x00059d5f) clock_digital_number_pane_cp03

0x5f45,	// (0x00059d6b) clock_digital_number_pane_cp04_ParamLimits

0x5f45,	// (0x00059d6b) clock_digital_number_pane_cp04

0x5f51,	// (0x00059d77) clock_digital_separator_pane_ParamLimits

0x5f51,	// (0x00059d77) clock_digital_separator_pane

0x5f5d,	// (0x00059d83) popup_clock_digital_window_t1_ParamLimits

0x5f5d,	// (0x00059d83) popup_clock_digital_window_t1

0xb993,	// (0x0005f7b9) clock_digital_number_pane_g1

0xb993,	// (0x0005f7b9) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x00063534) clock_digital_number_pane_g

0xb993,	// (0x0005f7b9) clock_digital_separator_pane_g1

0xb993,	// (0x0005f7b9) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x00063534) clock_digital_separator_pane_g

0x832b,	// (0x0005c151) aid_fill_nsta_ParamLimits

0x847b,	// (0x0005c2a1) indicator_nsta_pane_ParamLimits

0x860c,	// (0x0005c432) popup_clock_analogue_window

0x860c,	// (0x0005c432) popup_clock_digital_window

0xb9f7,	// (0x0005f81d) grid_indicator_nsta_pane_ParamLimits

0xaa2b,	// (0x0005e851) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x000638d2) clock_nsta_pane_t

0x5e38,	// (0x00059c5e) aid_size_max_handle

0x5e42,	// (0x00059c68) aid_size_min_handle

0x361e,	// (0x00057444) editor_scroll_pane

0xb816,	// (0x0005f63c) ex_editor_pane

0xf19e,	// (0x00062fc4) scroll_pane_cp13

0xf011,	// (0x00062e37) scroll_pane_cp14

0x1129,	// (0x00054f4f) scroll_pane_cp36

0x5f04,	// (0x00059d2a) list_single_graphic_hl_pane_cp2_ParamLimits

0x5f04,	// (0x00059d2a) list_single_graphic_hl_pane_cp2

0x9968,	// (0x0005d78e) list_single_graphic_hl_pane_ParamLimits

0x9968,	// (0x0005d78e) list_single_graphic_hl_pane

0x4054,	// (0x00057e7a) aid_size_min_hl_cp1

0xb81e,	// (0x0005f644) list_highlight_pane_cp34_ParamLimits

0xb81e,	// (0x0005f644) list_highlight_pane_cp34

0xb82f,	// (0x0005f655) list_single_graphic_hl_pane_g1_ParamLimits

0xb82f,	// (0x0005f655) list_single_graphic_hl_pane_g1

0x70e6,	// (0x0005af0c) list_single_graphic_hl_pane_g2_ParamLimits

0x70e6,	// (0x0005af0c) list_single_graphic_hl_pane_g2

0x70e6,	// (0x0005af0c) list_single_graphic_hl_pane_g3_ParamLimits

0x70e6,	// (0x0005af0c) list_single_graphic_hl_pane_g3

0x9994,	// (0x0005d7ba) list_single_graphic_hl_pane_g4_ParamLimits

0x9994,	// (0x0005d7ba) list_single_graphic_hl_pane_g4

0x9a7b,	// (0x0005d8a1) list_single_graphic_hl_pane_g5_ParamLimits

0x9a7b,	// (0x0005d8a1) list_single_graphic_hl_pane_g5

0x0004,

0xfbf7,	// (0x00063a1d) list_single_graphic_hl_pane_g_ParamLimits

0xfbf7,	// (0x00063a1d) list_single_graphic_hl_pane_g

0x70f2,	// (0x0005af18) list_single_graphic_hl_pane_t1_ParamLimits

0x70f2,	// (0x0005af18) list_single_graphic_hl_pane_t1

0xb83c,	// (0x0005f662) aid_size_min_hl_cp2

0xb845,	// (0x0005f66b) list_highlight_pane_cp34_cp2_ParamLimits

0xb845,	// (0x0005f66b) list_highlight_pane_cp34_cp2

0xb82f,	// (0x0005f655) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xb82f,	// (0x0005f655) list_single_graphic_hl_pane_g1_cp2

0xb852,	// (0x0005f678) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xb852,	// (0x0005f678) list_single_graphic_hl_pane_g2_cp2

0xb85e,	// (0x0005f684) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb85e,	// (0x0005f684) list_single_graphic_hl_pane_g3_cp2

0x1e32,	// (0x00055c58) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1e32,	// (0x00055c58) list_single_graphic_hl_pane_g4_cp2

0xb86c,	// (0x0005f692) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xb86c,	// (0x0005f692) list_single_graphic_hl_pane_g5_cp2

0x66a4,	// (0x0005a4ca) control_pane_g4_ParamLimits

0x66a4,	// (0x0005a4ca) control_pane_g4

0x7cf4,	// (0x0005bb1a) bg_popup_sub_pane_cp10_ParamLimits

0xb008,	// (0x0005ee2e) list_choice_list_pane_ParamLimits

0xb017,	// (0x0005ee3d) scroll_pane_cp23

0xeb90,	// (0x000629b6) bg_popup_preview_window_pane_cp02_ParamLimits

0xb646,	// (0x0005f46c) list_preview_fixed_pane_ParamLimits

0xb65c,	// (0x0005f482) list_preview_fixed_pane_cp_ParamLimits

0xb65c,	// (0x0005f482) list_preview_fixed_pane_cp

0xb668,	// (0x0005f48e) popup_preview_fixed_window_g1_ParamLimits

0xb668,	// (0x0005f48e) popup_preview_fixed_window_g1

0xb674,	// (0x0005f49a) popup_preview_fixed_window_g2_ParamLimits

0xb674,	// (0x0005f49a) popup_preview_fixed_window_g2

0x0002,

0xfb7f,	// (0x000639a5) popup_preview_fixed_window_g_ParamLimits

0xfb7f,	// (0x000639a5) popup_preview_fixed_window_g

0x5d27,	// (0x00059b4d) aid_navi_side_left_pane_ParamLimits

0x5d3c,	// (0x00059b62) aid_navi_side_right_pane_ParamLimits

0x5d54,	// (0x00059b7a) navi_icon_pane_stacon_ParamLimits

0x5d68,	// (0x00059b8e) navi_navi_pane_stacon_ParamLimits

0x5d54,	// (0x00059b7a) navi_text_pane_stacon_ParamLimits

0xb989,	// (0x0005f7af) main_text_info_pane

0xb896,	// (0x0005f6bc) listscroll_text_info_pane

0xb89e,	// (0x0005f6c4) list_text_info_pane_ParamLimits

0xb89e,	// (0x0005f6c4) list_text_info_pane

0xb8ad,	// (0x0005f6d3) scroll_pane_cp24_ParamLimits

0xb8ad,	// (0x0005f6d3) scroll_pane_cp24

0xb8cb,	// (0x0005f6f1) list_text_info_pane_t1_ParamLimits

0xb8cb,	// (0x0005f6f1) list_text_info_pane_t1

0x7d3e,	// (0x0005bb64) popup_fast_swap2_window_ParamLimits

0x7d3e,	// (0x0005bb64) popup_fast_swap2_window

0xb8f0,	// (0x0005f716) aid_size_cell_fast2

0xb989,	// (0x0005f7af) bg_popup_window_pane_cp17

0x8c69,	// (0x0005ca8f) heading_pane_cp2

0xed96,	// (0x00062bbc) listscroll_fast2_pane

0xb8fa,	// (0x0005f720) grid_fast2_pane

0xb904,	// (0x0005f72a) listscroll_fast2_pane_g1

0xb90e,	// (0x0005f734) listscroll_fast2_pane_g2

0x0001,

0xfc02,	// (0x00063a28) listscroll_fast2_pane_g

0xf19e,	// (0x00062fc4) scroll_pane_cp26

0xb918,	// (0x0005f73e) cell_fast2_pane_ParamLimits

0xb918,	// (0x0005f73e) cell_fast2_pane

0xb92f,	// (0x0005f755) cell_fast2_pane_g1

0xb938,	// (0x0005f75e) cell_fast2_pane_g2

0xb941,	// (0x0005f767) cell_fast2_pane_g3

0x0002,

0xfc07,	// (0x00063a2d) cell_fast2_pane_g

0xedd8,	// (0x00062bfe) grid_highlight_pane_cp9

0xeded,	// (0x00062c13) main_eswt_pane_ParamLimits

0xeded,	// (0x00062c13) main_eswt_pane

0xb8c2,	// (0x0005f6e8) list_single_text_info_pane

0xb949,	// (0x0005f76f) eswt_ctrl_button_pane

0xb949,	// (0x0005f76f) eswt_ctrl_canvas_pane

0xb951,	// (0x0005f777) eswt_ctrl_combo_pane

0xb949,	// (0x0005f76f) eswt_ctrl_default_pane

0xb949,	// (0x0005f76f) eswt_ctrl_label_pane

0xb959,	// (0x0005f77f) eswt_ctrl_wait_pane

0xb961,	// (0x0005f787) eswt_shell_pane

0xb989,	// (0x0005f7af) listscroll_eswt_app_pane

0xba93,	// (0x0005f8b9) popup_eswt_tasktip_window_ParamLimits

0xba93,	// (0x0005f8b9) popup_eswt_tasktip_window

0x88a9,	// (0x0005c6cf) bg_popup_window_pane_cp18

0xbaa4,	// (0x0005f8ca) eswt_control_pane_g1_ParamLimits

0xbaa4,	// (0x0005f8ca) eswt_control_pane_g1

0xbab1,	// (0x0005f8d7) eswt_control_pane_g2_ParamLimits

0xbab1,	// (0x0005f8d7) eswt_control_pane_g2

0xbabe,	// (0x0005f8e4) eswt_control_pane_g3_ParamLimits

0xbabe,	// (0x0005f8e4) eswt_control_pane_g3

0xbacb,	// (0x0005f8f1) eswt_control_pane_g4_ParamLimits

0xbacb,	// (0x0005f8f1) eswt_control_pane_g4

0x0003,

0xfc0e,	// (0x00063a34) eswt_control_pane_g_ParamLimits

0xfc0e,	// (0x00063a34) eswt_control_pane_g

0xf072,	// (0x00062e98) bg_button_pane_ParamLimits

0xf072,	// (0x00062e98) bg_button_pane

0xeded,	// (0x00062c13) common_borders_pane_copy2_ParamLimits

0xeded,	// (0x00062c13) common_borders_pane_copy2

0xbad8,	// (0x0005f8fe) control_button_pane_g1_ParamLimits

0xbad8,	// (0x0005f8fe) control_button_pane_g1

0xbae4,	// (0x0005f90a) control_button_pane_g2_ParamLimits

0xbae4,	// (0x0005f90a) control_button_pane_g2

0xbaf0,	// (0x0005f916) control_button_pane_g3_ParamLimits

0xbaf0,	// (0x0005f916) control_button_pane_g3

0x0002,

0xfc17,	// (0x00063a3d) control_button_pane_g_ParamLimits

0xfc17,	// (0x00063a3d) control_button_pane_g

0xbb04,	// (0x0005f92a) control_button_pane_t1

0xbb12,	// (0x0005f938) control_button_pane_t2

0x0001,

0xfc1e,	// (0x00063a44) control_button_pane_t

0x8835,	// (0x0005c65b) bg_button_pane_g1

0x8845,	// (0x0005c66b) bg_button_pane_g2

0x883d,	// (0x0005c663) bg_button_pane_g3

0x8855,	// (0x0005c67b) bg_button_pane_g4

0x884d,	// (0x0005c673) bg_button_pane_g5

0x885d,	// (0x0005c683) bg_button_pane_g6

0x8865,	// (0x0005c68b) bg_button_pane_g7

0x8875,	// (0x0005c69b) bg_button_pane_g8

0x886d,	// (0x0005c693) bg_button_pane_g9

0x0008,

0xf871,	// (0x00063697) bg_button_pane_g

0xafc3,	// (0x0005ede9) common_borders_pane_ParamLimits

0xafc3,	// (0x0005ede9) common_borders_pane

0xbaa4,	// (0x0005f8ca) eswt_control_pane_g1_copy1_ParamLimits

0xbaa4,	// (0x0005f8ca) eswt_control_pane_g1_copy1

0xbab1,	// (0x0005f8d7) eswt_control_pane_g2_copy1_ParamLimits

0xbab1,	// (0x0005f8d7) eswt_control_pane_g2_copy1

0xbabe,	// (0x0005f8e4) eswt_control_pane_g3_copy1_ParamLimits

0xbabe,	// (0x0005f8e4) eswt_control_pane_g3_copy1

0xbacb,	// (0x0005f8f1) eswt_control_pane_g4_copy1_ParamLimits

0xbacb,	// (0x0005f8f1) eswt_control_pane_g4_copy1

0xaffe,	// (0x0005ee24) bg_eswt_ctrl_canvas_pane_g1

0xafc3,	// (0x0005ede9) common_borders_pane_cp2_ParamLimits

0xafc3,	// (0x0005ede9) common_borders_pane_cp2

0xafc3,	// (0x0005ede9) common_borders_pane_cp3_ParamLimits

0xafc3,	// (0x0005ede9) common_borders_pane_cp3

0xbb20,	// (0x0005f946) separator_horizontal_pane

0xbb28,	// (0x0005f94e) separator_vertical_pane

0xbaa4,	// (0x0005f8ca) eswt_control_pane_g1_copy2_ParamLimits

0xbaa4,	// (0x0005f8ca) eswt_control_pane_g1_copy2

0xbab1,	// (0x0005f8d7) eswt_control_pane_g2_copy2_ParamLimits

0xbab1,	// (0x0005f8d7) eswt_control_pane_g2_copy2

0xbabe,	// (0x0005f8e4) eswt_control_pane_g3_copy2_ParamLimits

0xbabe,	// (0x0005f8e4) eswt_control_pane_g3_copy2

0xbacb,	// (0x0005f8f1) eswt_control_pane_g4_copy2_ParamLimits

0xbacb,	// (0x0005f8f1) eswt_control_pane_g4_copy2

0xb989,	// (0x0005f7af) common_borders_pane_cp4

0xbb31,	// (0x0005f957) separator_horizontal_pane_g1

0xbb3a,	// (0x0005f960) separator_horizontal_pane_g2

0xbb43,	// (0x0005f969) separator_horizontal_pane_g3

0x0002,

0xfc23,	// (0x00063a49) separator_horizontal_pane_g

0xbaa4,	// (0x0005f8ca) eswt_control_pane_g1_copy3_ParamLimits

0xbaa4,	// (0x0005f8ca) eswt_control_pane_g1_copy3

0xbab1,	// (0x0005f8d7) eswt_control_pane_g2_copy3_ParamLimits

0xbab1,	// (0x0005f8d7) eswt_control_pane_g2_copy3

0xbabe,	// (0x0005f8e4) eswt_control_pane_g3_copy3_ParamLimits

0xbabe,	// (0x0005f8e4) eswt_control_pane_g3_copy3

0xbacb,	// (0x0005f8f1) eswt_control_pane_g4_copy3_ParamLimits

0xbacb,	// (0x0005f8f1) eswt_control_pane_g4_copy3

0xb989,	// (0x0005f7af) common_borders_pane_cp5

0xbb4c,	// (0x0005f972) separator_vertical_pane_g1

0xbb55,	// (0x0005f97b) separator_vertical_pane_g2

0xbb5e,	// (0x0005f984) separator_vertical_pane_g3

0x0002,

0xfc2a,	// (0x00063a50) separator_vertical_pane_g

0xbaa4,	// (0x0005f8ca) eswt_control_pane_g1_copy4_ParamLimits

0xbaa4,	// (0x0005f8ca) eswt_control_pane_g1_copy4

0xbab1,	// (0x0005f8d7) eswt_control_pane_g2_copy4_ParamLimits

0xbab1,	// (0x0005f8d7) eswt_control_pane_g2_copy4

0xbabe,	// (0x0005f8e4) eswt_control_pane_g3_copy4_ParamLimits

0xbabe,	// (0x0005f8e4) eswt_control_pane_g3_copy4

0xbacb,	// (0x0005f8f1) eswt_control_pane_g4_copy4_ParamLimits

0xbacb,	// (0x0005f8f1) eswt_control_pane_g4_copy4

0xbb67,	// (0x0005f98d) eswt_ctrl_combo_button_pane

0xbb6f,	// (0x0005f995) eswt_ctrl_input_pane

0xbb77,	// (0x0005f99d) popup_choice_list_window_cp70

0xbb7f,	// (0x0005f9a5) eswt_ctrl_input_pane_t1

0xb989,	// (0x0005f7af) input_focus_pane_cp70

0xafc3,	// (0x0005ede9) bg_button_pane_cp70_ParamLimits

0xafc3,	// (0x0005ede9) bg_button_pane_cp70

0xbb8d,	// (0x0005f9b3) eswt_ctrl_combo_button_pane_g1

0xbb95,	// (0x0005f9bb) wait_bar_pane_cp70

0x88a9,	// (0x0005c6cf) bg_popup_window_pane_cp70_ParamLimits

0x88a9,	// (0x0005c6cf) bg_popup_window_pane_cp70

0xbb9d,	// (0x0005f9c3) popup_eswt_tasktip_window_t1

0xbbb3,	// (0x0005f9d9) wait_bar_pane_cp71_ParamLimits

0xbbb3,	// (0x0005f9d9) wait_bar_pane_cp71

0xbbbf,	// (0x0005f9e5) grid_eswt_app_pane

0xf3e3,	// (0x00063209) scroll_pane_cp70

0xbbc8,	// (0x0005f9ee) cell_eswt_app_pane_ParamLimits

0xbbc8,	// (0x0005f9ee) cell_eswt_app_pane

0xbbfa,	// (0x0005fa20) cell_eswt_app_pane_g1_ParamLimits

0xbbfa,	// (0x0005fa20) cell_eswt_app_pane_g1

0xbc29,	// (0x0005fa4f) cell_eswt_app_pane_g2_ParamLimits

0xbc29,	// (0x0005fa4f) cell_eswt_app_pane_g2

0x0001,

0xfc31,	// (0x00063a57) cell_eswt_app_pane_g_ParamLimits

0xfc31,	// (0x00063a57) cell_eswt_app_pane_g

0xbc52,	// (0x0005fa78) cell_eswt_app_pane_t1_ParamLimits

0xbc52,	// (0x0005fa78) cell_eswt_app_pane_t1

0xbc84,	// (0x0005faaa) grid_highlight_pane_cp70_ParamLimits

0xbc84,	// (0x0005faaa) grid_highlight_pane_cp70

0x3523,	// (0x00057349) set_content_pane_g1

0x662b,	// (0x0005a451) status_small_volume_pane

0x7108,	// (0x0005af2e) status_small_volume_pane_g1

0x7110,	// (0x0005af36) volume_small2_pane

0x7119,	// (0x0005af3f) volume_small2_pane_g1

0x7122,	// (0x0005af48) volume_small2_pane_g2

0x712b,	// (0x0005af51) volume_small2_pane_g3

0x7134,	// (0x0005af5a) volume_small2_pane_g4

0x713d,	// (0x0005af63) volume_small2_pane_g5

0x7146,	// (0x0005af6c) volume_small2_pane_g6

0x714f,	// (0x0005af75) volume_small2_pane_g7

0x7158,	// (0x0005af7e) volume_small2_pane_g8

0x7161,	// (0x0005af87) volume_small2_pane_g9

0x716a,	// (0x0005af90) volume_small2_pane_g10

0x0009,

0xfc36,	// (0x00063a5c) volume_small2_pane_g

0xb3cd,	// (0x0005f1f3) fep_vkb_top_text_pane_g1_ParamLimits

0xb3e8,	// (0x0005f20e) fep_vkb_top_text_pane_t1_ParamLimits

0xb680,	// (0x0005f4a6) popup_preview_fixed_window_g3_ParamLimits

0xb680,	// (0x0005f4a6) popup_preview_fixed_window_g3

0x824f,	// (0x0005c075) popup_toolbar_trans_pane

0x9d8e,	// (0x0005dbb4) aid_height_set_list_ParamLimits

0x9d9f,	// (0x0005dbc5) aid_size_parent_ParamLimits

0x7cf4,	// (0x0005bb1a) list_highlight_pane_cp2_ParamLimits

0x3523,	// (0x00057349) set_content_pane_g1_ParamLimits

0x9fd2,	// (0x0005ddf8) list_single_image_pane_ParamLimits

0x9fd2,	// (0x0005ddf8) list_single_image_pane

0xbc90,	// (0x0005fab6) aid_size_cell_image_ParamLimits

0xbc90,	// (0x0005fab6) aid_size_cell_image

0xbc9d,	// (0x0005fac3) grid_single_image_pane_ParamLimits

0xbc9d,	// (0x0005fac3) grid_single_image_pane

0xf080,	// (0x00062ea6) list_single_image_pane_g1_ParamLimits

0xf080,	// (0x00062ea6) list_single_image_pane_g1

0xf08c,	// (0x00062eb2) list_single_image_pane_g2_ParamLimits

0xf08c,	// (0x00062eb2) list_single_image_pane_g2

0x0001,

0xfc4b,	// (0x00063a71) list_single_image_pane_g_ParamLimits

0xfc4b,	// (0x00063a71) list_single_image_pane_g

0xbcab,	// (0x0005fad1) list_single_image_pane_t1_ParamLimits

0xbcab,	// (0x0005fad1) list_single_image_pane_t1

0xbcc1,	// (0x0005fae7) cell_image_list_pane_ParamLimits

0xbcc1,	// (0x0005fae7) cell_image_list_pane

0xbcd7,	// (0x0005fafd) cell_image_list_pane_g1

0xbce0,	// (0x0005fb06) cell_image_list_pane_g2

0x0001,

0xfc50,	// (0x00063a76) cell_image_list_pane_g

0xbce9,	// (0x0005fb0f) aid_size_cell_tb_trans_pane

0xf072,	// (0x00062e98) bg_tb_trans_pane

0xbcfb,	// (0x0005fb21) grid_tb_trans_pane

0x8835,	// (0x0005c65b) bg_tb_trans_pane_g1

0x8845,	// (0x0005c66b) bg_tb_trans_pane_g2

0x883d,	// (0x0005c663) bg_tb_trans_pane_g3

0x8855,	// (0x0005c67b) bg_tb_trans_pane_g4

0x884d,	// (0x0005c673) bg_tb_trans_pane_g5

0x8875,	// (0x0005c69b) bg_tb_trans_pane_g6

0x886d,	// (0x0005c693) bg_tb_trans_pane_g7

0x885d,	// (0x0005c683) bg_tb_trans_pane_g8

0x8865,	// (0x0005c68b) bg_tb_trans_pane_g9

0x0008,

0xfc55,	// (0x00063a7b) bg_tb_trans_pane_g

0xbd0f,	// (0x0005fb35) cell_toolbar_trans_pane_ParamLimits

0xbd0f,	// (0x0005fb35) cell_toolbar_trans_pane

0xaffe,	// (0x0005ee24) cell_toolbar_trans_pane_g1

0xac22,	// (0x0005ea48) list_form2_midp_pane_t1

0xac30,	// (0x0005ea56) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x00063918) list_form2_midp_pane_t

0xac3e,	// (0x0005ea64) scroll_pane_cp51_ParamLimits

0xae05,	// (0x0005ec2b) form2_midp_wait_pane_g1

0xae0e,	// (0x0005ec34) form2_midp_wait_pane_g2

0xae17,	// (0x0005ec3d) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x0006392d) form2_midp_wait_pane_g

0xb9f7,	// (0x0005f81d) list_highlight_pane_cp21_ParamLimits

0xae5b,	// (0x0005ec81) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xae6a,	// (0x0005ec90) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9f8b,	// (0x0005ddb1) list_single_2graphic_im_pane_ParamLimits

0x9f8b,	// (0x0005ddb1) list_single_2graphic_im_pane

0xbd35,	// (0x0005fb5b) list_single_2graphic_im_pane_g1_ParamLimits

0xbd35,	// (0x0005fb5b) list_single_2graphic_im_pane_g1

0xbd46,	// (0x0005fb6c) list_single_2graphic_im_pane_g2_ParamLimits

0xbd46,	// (0x0005fb6c) list_single_2graphic_im_pane_g2

0xbd52,	// (0x0005fb78) list_single_2graphic_im_pane_g3_ParamLimits

0xbd52,	// (0x0005fb78) list_single_2graphic_im_pane_g3

0x0003,

0xfc68,	// (0x00063a8e) list_single_2graphic_im_pane_g_ParamLimits

0xfc68,	// (0x00063a8e) list_single_2graphic_im_pane_g

0xbd72,	// (0x0005fb98) list_single_2graphic_im_pane_t1_ParamLimits

0xbd72,	// (0x0005fb98) list_single_2graphic_im_pane_t1

0xb68c,	// (0x0005f4b2) list_single_graphic_2heading_pane_fp_ParamLimits

0xb68c,	// (0x0005f4b2) list_single_graphic_2heading_pane_fp

0x3f36,	// (0x00057d5c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3f36,	// (0x00057d5c) list_single_graphic_2heading_pane_fp_g1

0xb6a5,	// (0x0005f4cb) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb6a5,	// (0x0005f4cb) list_single_graphic_2heading_pane_fp_g2

0xb5fe,	// (0x0005f424) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb5fe,	// (0x0005f424) list_single_graphic_2heading_pane_fp_g3

0xb60a,	// (0x0005f430) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb60a,	// (0x0005f430) list_single_graphic_2heading_pane_fp_g4

0xb6b1,	// (0x0005f4d7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb6b1,	// (0x0005f4d7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x000639b5) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x000639b5) list_single_graphic_2heading_pane_fp_g

0x405d,	// (0x00057e83) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x405d,	// (0x00057e83) list_single_graphic_2heading_pane_fp_t1

0x3f6e,	// (0x00057d94) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3f6e,	// (0x00057d94) list_single_graphic_2heading_pane_fp_t2

0x4073,	// (0x00057e99) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4073,	// (0x00057e99) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc71,	// (0x00063a97) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc71,	// (0x00063a97) list_single_graphic_2heading_pane_fp_t

0xb08f,	// (0x0005eeb5) fep_hwr_write_pane_g5_ParamLimits

0xb08f,	// (0x0005eeb5) fep_hwr_write_pane_g5

0xb09b,	// (0x0005eec1) fep_hwr_write_pane_g6_ParamLimits

0xb09b,	// (0x0005eec1) fep_hwr_write_pane_g6

0xb961,	// (0x0005f787) eswt_shell_pane_ParamLimits

0x88a9,	// (0x0005c6cf) bg_popup_window_pane_cp18_ParamLimits

0x9ce5,	// (0x0005db0b) heading_pane_cp70

0xbb9d,	// (0x0005f9c3) popup_eswt_tasktip_window_t1_ParamLimits

0x8382,	// (0x0005c1a8) aid_touch_tab_arrow_left

0x8391,	// (0x0005c1b7) aid_touch_tab_arrow_right

0xb9a7,	// (0x0005f7cd) title_pane_g3_ParamLimits

0xb9a7,	// (0x0005f7cd) title_pane_g3

0xf031,	// (0x00062e57) set_value_pane_g1

0x824f,	// (0x0005c075) popup_toolbar_trans_pane_ParamLimits

0xbce9,	// (0x0005fb0f) aid_size_cell_tb_trans_pane_ParamLimits

0xf072,	// (0x00062e98) bg_tb_trans_pane_ParamLimits

0xbcfb,	// (0x0005fb21) grid_tb_trans_pane_ParamLimits

0xeb90,	// (0x000629b6) cont_note_pane_ParamLimits

0xeb90,	// (0x000629b6) cont_note_pane

0xeded,	// (0x00062c13) cont_snote2_single_text_pane_ParamLimits

0xeded,	// (0x00062c13) cont_snote2_single_text_pane

0xeded,	// (0x00062c13) cont_snote2_single_graphic_pane_ParamLimits

0xeded,	// (0x00062c13) cont_snote2_single_graphic_pane

0x8e85,	// (0x0005ccab) cont_note_wait_pane_ParamLimits

0x8e85,	// (0x0005ccab) cont_note_wait_pane

0x8e85,	// (0x0005ccab) cont_note_image_pane_ParamLimits

0x8e85,	// (0x0005ccab) cont_note_image_pane

0xbda3,	// (0x0005fbc9) popup_note2_window_g1_ParamLimits

0xbda3,	// (0x0005fbc9) popup_note2_window_g1

0xbdd4,	// (0x0005fbfa) popup_note2_window_t1_ParamLimits

0xbdd4,	// (0x0005fbfa) popup_note2_window_t1

0xbe19,	// (0x0005fc3f) popup_note2_window_t2_ParamLimits

0xbe19,	// (0x0005fc3f) popup_note2_window_t2

0xbe5e,	// (0x0005fc84) popup_note2_window_t3_ParamLimits

0xbe5e,	// (0x0005fc84) popup_note2_window_t3

0xbea3,	// (0x0005fcc9) popup_note2_window_t4_ParamLimits

0xbea3,	// (0x0005fcc9) popup_note2_window_t4

0xec14,	// (0x00062a3a) popup_note2_window_t5_ParamLimits

0xec14,	// (0x00062a3a) popup_note2_window_t5

0x0004,

0xfc7d,	// (0x00063aa3) popup_note2_window_t_ParamLimits

0xfc7d,	// (0x00063aa3) popup_note2_window_t

0xbed2,	// (0x0005fcf8) popup_note2_image_window_g1_ParamLimits

0xbed2,	// (0x0005fcf8) popup_note2_image_window_g1

0xbede,	// (0x0005fd04) popup_note2_image_window_g2_ParamLimits

0xbede,	// (0x0005fd04) popup_note2_image_window_g2

0x0001,

0xfc88,	// (0x00063aae) popup_note2_image_window_g_ParamLimits

0xfc88,	// (0x00063aae) popup_note2_image_window_g

0xbef0,	// (0x0005fd16) popup_note2_image_window_t1_ParamLimits

0xbef0,	// (0x0005fd16) popup_note2_image_window_t1

0xbf08,	// (0x0005fd2e) popup_note2_image_window_t2_ParamLimits

0xbf08,	// (0x0005fd2e) popup_note2_image_window_t2

0xbf20,	// (0x0005fd46) popup_note2_image_window_t3_ParamLimits

0xbf20,	// (0x0005fd46) popup_note2_image_window_t3

0x0002,

0xfc8d,	// (0x00063ab3) popup_note2_image_window_t_ParamLimits

0xfc8d,	// (0x00063ab3) popup_note2_image_window_t

0x8e93,	// (0x0005ccb9) popup_note2_wait_window_g1_ParamLimits

0x8e93,	// (0x0005ccb9) popup_note2_wait_window_g1

0xbf3c,	// (0x0005fd62) popup_note2_wait_window_g2_ParamLimits

0xbf3c,	// (0x0005fd62) popup_note2_wait_window_g2

0x8eab,	// (0x0005ccd1) popup_note2_wait_window_g3_ParamLimits

0x8eab,	// (0x0005ccd1) popup_note2_wait_window_g3

0x0002,

0xfc94,	// (0x00063aba) popup_note2_wait_window_g_ParamLimits

0xfc94,	// (0x00063aba) popup_note2_wait_window_g

0xbf48,	// (0x0005fd6e) popup_note2_wait_window_t1_ParamLimits

0xbf48,	// (0x0005fd6e) popup_note2_wait_window_t1

0xbf66,	// (0x0005fd8c) popup_note2_wait_window_t2_ParamLimits

0xbf66,	// (0x0005fd8c) popup_note2_wait_window_t2

0xbf84,	// (0x0005fdaa) popup_note2_wait_window_t3_ParamLimits

0xbf84,	// (0x0005fdaa) popup_note2_wait_window_t3

0xbf96,	// (0x0005fdbc) popup_note2_wait_window_t4_ParamLimits

0xbf96,	// (0x0005fdbc) popup_note2_wait_window_t4

0x0003,

0xfc9b,	// (0x00063ac1) popup_note2_wait_window_t_ParamLimits

0xfc9b,	// (0x00063ac1) popup_note2_wait_window_t

0xbfa8,	// (0x0005fdce) wait_bar2_pane_ParamLimits

0xbfa8,	// (0x0005fdce) wait_bar2_pane

0xbfc0,	// (0x0005fde6) popup_snote2_single_text_window_g1_ParamLimits

0xbfc0,	// (0x0005fde6) popup_snote2_single_text_window_g1

0xbfe8,	// (0x0005fe0e) popup_snote2_single_text_window_t1_ParamLimits

0xbfe8,	// (0x0005fe0e) popup_snote2_single_text_window_t1

0xc034,	// (0x0005fe5a) popup_snote2_single_text_window_t2_ParamLimits

0xc034,	// (0x0005fe5a) popup_snote2_single_text_window_t2

0xc080,	// (0x0005fea6) popup_snote2_single_text_window_t3_ParamLimits

0xc080,	// (0x0005fea6) popup_snote2_single_text_window_t3

0xc0c1,	// (0x0005fee7) popup_snote2_single_text_window_t4_ParamLimits

0xc0c1,	// (0x0005fee7) popup_snote2_single_text_window_t4

0xc0f7,	// (0x0005ff1d) popup_snote2_single_text_window_t5_ParamLimits

0xc0f7,	// (0x0005ff1d) popup_snote2_single_text_window_t5

0x0004,

0xfca4,	// (0x00063aca) popup_snote2_single_text_window_t_ParamLimits

0xfca4,	// (0x00063aca) popup_snote2_single_text_window_t

0xc122,	// (0x0005ff48) popup_snote2_single_graphic_window_g1_ParamLimits

0xc122,	// (0x0005ff48) popup_snote2_single_graphic_window_g1

0xc14a,	// (0x0005ff70) popup_snote2_single_graphic_window_g2_ParamLimits

0xc14a,	// (0x0005ff70) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaf,	// (0x00063ad5) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaf,	// (0x00063ad5) popup_snote2_single_graphic_window_g

0xc172,	// (0x0005ff98) popup_snote2_single_graphic_window_t1_ParamLimits

0xc172,	// (0x0005ff98) popup_snote2_single_graphic_window_t1

0xc1be,	// (0x0005ffe4) popup_snote2_single_graphic_window_t2_ParamLimits

0xc1be,	// (0x0005ffe4) popup_snote2_single_graphic_window_t2

0xc080,	// (0x0005fea6) popup_snote2_single_graphic_window_t3_ParamLimits

0xc080,	// (0x0005fea6) popup_snote2_single_graphic_window_t3

0xc0c1,	// (0x0005fee7) popup_snote2_single_graphic_window_t4_ParamLimits

0xc0c1,	// (0x0005fee7) popup_snote2_single_graphic_window_t4

0xc0f7,	// (0x0005ff1d) popup_snote2_single_graphic_window_t5_ParamLimits

0xc0f7,	// (0x0005ff1d) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb4,	// (0x00063ada) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb4,	// (0x00063ada) popup_snote2_single_graphic_window_t

0xaaee,	// (0x0005e914) clock_nsta_pane_cp2_t1

0xaaee,	// (0x0005e914) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x000638ee) clock_nsta_pane_cp2_t

0x32f3,	// (0x00057119) form_field_data_wide_pane_g1_ParamLimits

0xf080,	// (0x00062ea6) form_field_data_wide_pane_g2_ParamLimits

0xf080,	// (0x00062ea6) form_field_data_wide_pane_g2

0xf08c,	// (0x00062eb2) form_field_data_wide_pane_g3_ParamLimits

0xf08c,	// (0x00062eb2) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x000634ac) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x000634ac) form_field_data_wide_pane_g

0xa9c7,	// (0x0005e7ed) grid_touch_3_pane_ParamLimits

0xa9c7,	// (0x0005e7ed) grid_touch_3_pane

0xc20a,	// (0x00060030) cell_touch_3_pane_ParamLimits

0xc20a,	// (0x00060030) cell_touch_3_pane

0xaffe,	// (0x0005ee24) cell_touch_3_pane_g1

0xaffe,	// (0x0005ee24) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x00063973) cell_touch_3_pane_g

0xec46,	// (0x00062a6c) cont_query_data_pane

0xec4e,	// (0x00062a74) cont_query_data_pane_cp1

0xc23d,	// (0x00060063) button_value_adjust_pane_cp7

0xc245,	// (0x0006006b) query_popup_pane_cp3

0x115a,	// (0x00054f80) bg_popup_sub_pane_cp22_ParamLimits

0x5fde,	// (0x00059e04) navi_navi_volume_pane_cp2

0x5ff9,	// (0x00059e1f) popup_side_volume_key_window_g2

0x6008,	// (0x00059e2e) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x00063542) popup_side_volume_key_window_g

0x6025,	// (0x00059e4b) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x00063549) popup_side_volume_key_window_t

0x3426,	// (0x0005724c) popup_side_volume_key_window_ParamLimits

0x570d,	// (0x00059533) list_double_graphic_pane_g4_ParamLimits

0x570d,	// (0x00059533) list_double_graphic_pane_g4

0x9fba,	// (0x0005dde0) list_single_2heading_msg_pane_ParamLimits

0x9fba,	// (0x0005dde0) list_single_2heading_msg_pane

0x9a8f,	// (0x0005d8b5) list_single_2heading_msg_pane_g1_ParamLimits

0x9a8f,	// (0x0005d8b5) list_single_2heading_msg_pane_g1

0x1e32,	// (0x00055c58) list_single_2heading_msg_pane_g2_ParamLimits

0x1e32,	// (0x00055c58) list_single_2heading_msg_pane_g2

0x9a9b,	// (0x0005d8c1) list_single_2heading_msg_pane_g3_ParamLimits

0x9a9b,	// (0x0005d8c1) list_single_2heading_msg_pane_g3

0x9aa7,	// (0x0005d8cd) list_single_2heading_msg_pane_g4_ParamLimits

0x9aa7,	// (0x0005d8cd) list_single_2heading_msg_pane_g4

0x0003,

0xfcbf,	// (0x00063ae5) list_single_2heading_msg_pane_g_ParamLimits

0xfcbf,	// (0x00063ae5) list_single_2heading_msg_pane_g

0x7173,	// (0x0005af99) list_single_2heading_msg_pane_t1_ParamLimits

0x7173,	// (0x0005af99) list_single_2heading_msg_pane_t1

0x719b,	// (0x0005afc1) list_single_2heading_msg_pane_t2_ParamLimits

0x719b,	// (0x0005afc1) list_single_2heading_msg_pane_t2

0x71ca,	// (0x0005aff0) list_single_2heading_msg_pane_t3_ParamLimits

0x71ca,	// (0x0005aff0) list_single_2heading_msg_pane_t3

0x4093,	// (0x00057eb9) list_single_2heading_msg_pane_t4_ParamLimits

0x4093,	// (0x00057eb9) list_single_2heading_msg_pane_t4

0x0003,

0xfcc8,	// (0x00063aee) list_single_2heading_msg_pane_t_ParamLimits

0xfcc8,	// (0x00063aee) list_single_2heading_msg_pane_t

0xb9b3,	// (0x0005f7d9) title_pane_g4_ParamLimits

0xb9b3,	// (0x0005f7d9) title_pane_g4

0x5c77,	// (0x00059a9d) title_pane_stacon_g3_ParamLimits

0x5c77,	// (0x00059a9d) title_pane_stacon_g3

0xbd66,	// (0x0005fb8c) list_single_2graphic_im_pane_g4_ParamLimits

0xbd66,	// (0x0005fb8c) list_single_2graphic_im_pane_g4

0x98f5,	// (0x0005d71b) popup_side_volume_key_window_cp

0xa2e2,	// (0x0005e108) main_idle_act2_pane_t1

0x6803,	// (0x0005a629) toolbar_button_pane_g10

0x54f7,	// (0x0005931d) popup_toolbar_window_cp1

0xaadf,	// (0x0005e905) clock_nsta_pane_cp_t1

0xaadf,	// (0x0005e905) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x000638e9) clock_nsta_pane_cp_t

0x5fde,	// (0x00059e04) navi_navi_volume_pane_cp2_ParamLimits

0x5fed,	// (0x00059e13) popup_side_volume_key_window_g1_ParamLimits

0x5ff9,	// (0x00059e1f) popup_side_volume_key_window_g2_ParamLimits

0x6008,	// (0x00059e2e) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x00063542) popup_side_volume_key_window_g_ParamLimits

0x6d37,	// (0x0005ab5d) fep_hwr_aid_pane

0x6de0,	// (0x0005ac06) bg_fep_hwr_top_pane_g4_ParamLimits

0xb05f,	// (0x0005ee85) fep_hwr_top_pane_g1_ParamLimits

0xb071,	// (0x0005ee97) fep_hwr_top_pane_g2_ParamLimits

0x6e00,	// (0x0005ac26) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x0006393e) fep_hwr_top_pane_g_ParamLimits

0x6e15,	// (0x0005ac3b) fep_hwr_top_text_pane_ParamLimits

0x96aa,	// (0x0005d4d0) aid_touch_tab_arrow_arrow_2

0x96b3,	// (0x0005d4d9) aid_touch_tab_arrow_left_2

0x6d4b,	// (0x0005ab71) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6d82,	// (0x0005aba8) fep_hwr_prediction_pane

0xb1c7,	// (0x0005efed) fep_vkb_prediction_pane

0xb2cd,	// (0x0005f0f3) fep_vkb_side_pane_g3_ParamLimits

0xb2cd,	// (0x0005f0f3) fep_vkb_side_pane_g3

0x6fa4,	// (0x0005adca) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7015,	// (0x0005ae3b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7022,	// (0x0005ae48) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc7,	// (0x000639ed) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7203,	// (0x0005b029) fep_hwr_prediction_pane_g1

0x720d,	// (0x0005b033) fep_hwr_prediction_pane_g2

0x7215,	// (0x0005b03b) fep_hwr_prediction_pane_g3

0x721d,	// (0x0005b043) fep_hwr_prediction_pane_g4

0x0003,

0xfcd1,	// (0x00063af7) fep_hwr_prediction_pane_g

0xc26c,	// (0x00060092) fep_vkb_prediction_pane_g1

0xc276,	// (0x0006009c) fep_vkb_prediction_pane_g2

0xc27e,	// (0x000600a4) fep_vkb_prediction_pane_g3

0xc286,	// (0x000600ac) fep_vkb_prediction_pane_g4

0x0003,

0xfcda,	// (0x00063b00) fep_vkb_prediction_pane_g

0x6b6b,	// (0x0005a991) slider_set_pane_g3

0x6b7f,	// (0x0005a9a5) slider_set_pane_g4

0x6b97,	// (0x0005a9bd) slider_set_pane_g5

0x6b6b,	// (0x0005a991) slider_set_pane_g6

0x6bad,	// (0x0005a9d3) slider_set_pane_g7

0x9f24,	// (0x0005dd4a) slider_form_pane_g3

0x9f2d,	// (0x0005dd53) slider_form_pane_g4

0x9f35,	// (0x0005dd5b) slider_form_pane_g5

0x9f24,	// (0x0005dd4a) slider_form_pane_g6

0x9f3d,	// (0x0005dd63) slider_form_pane_g7

0xa599,	// (0x0005e3bf) slider_set_pane_vc_g3

0xa5a2,	// (0x0005e3c8) slider_set_pane_vc_g4

0xa5ab,	// (0x0005e3d1) slider_set_pane_vc_g5

0xa599,	// (0x0005e3bf) slider_set_pane_vc_g6

0xa5b4,	// (0x0005e3da) slider_set_pane_vc_g7

0xa78c,	// (0x0005e5b2) slider_form_pane_vc_g1

0xa795,	// (0x0005e5bb) slider_form_pane_vc_g2

0xa79e,	// (0x0005e5c4) slider_form_pane_vc_g3

0xa78c,	// (0x0005e5b2) slider_form_pane_vc_g4

0xa7a7,	// (0x0005e5cd) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x000638bb) slider_form_pane_vc_g

0xb989,	// (0x0005f7af) main_idle_act3_pane

0xc28e,	// (0x000600b4) ai3_links_pane

0xc297,	// (0x000600bd) popup_ai3_data_window_ParamLimits

0xc297,	// (0x000600bd) popup_ai3_data_window

0xb989,	// (0x0005f7af) grid_ai3_links_pane

0xc2b5,	// (0x000600db) cell_ai3_links_pane_ParamLimits

0xc2b5,	// (0x000600db) cell_ai3_links_pane

0xc2cf,	// (0x000600f5) bg_popup_sub_pane_cp11

0xc2dc,	// (0x00060102) cell_ai3_links_pane_g1

0xb989,	// (0x0005f7af) bg_popup_sub_pane_cp12

0xc301,	// (0x00060127) heading_ai3_data_pane

0xc309,	// (0x0006012f) list_ai3_gene_pane

0xc315,	// (0x0006013b) popup_ai3_data_window_g1

0xc31d,	// (0x00060143) heading_ai3_data_pane_g1

0xc325,	// (0x0006014b) heading_ai3_data_pane_t1

0xc333,	// (0x00060159) list_double_ai3_gene_pane_ParamLimits

0xc333,	// (0x00060159) list_double_ai3_gene_pane

0xc340,	// (0x00060166) list_single_ai3_gene_pane_ParamLimits

0xc340,	// (0x00060166) list_single_ai3_gene_pane

0xafc3,	// (0x0005ede9) list_highlight_pane_cp7_ParamLimits

0xafc3,	// (0x0005ede9) list_highlight_pane_cp7

0xc34d,	// (0x00060173) list_single_a13_gene_pane_t1_ParamLimits

0xc34d,	// (0x00060173) list_single_a13_gene_pane_t1

0xc364,	// (0x0006018a) list_single_ai3_gene_pane_g1

0xc36d,	// (0x00060193) list_single_ai3_gene_pane_g2

0x0001,

0xfce3,	// (0x00063b09) list_single_ai3_gene_pane_g

0xc375,	// (0x0006019b) list_double_ai3_gene_pane_g1_ParamLimits

0xc375,	// (0x0006019b) list_double_ai3_gene_pane_g1

0xc381,	// (0x000601a7) list_double_ai3_gene_pane_t1_ParamLimits

0xc381,	// (0x000601a7) list_double_ai3_gene_pane_t1

0xc39d,	// (0x000601c3) list_double_ai3_gene_pane_t2_ParamLimits

0xc39d,	// (0x000601c3) list_double_ai3_gene_pane_t2

0xc3b2,	// (0x000601d8) list_double_ai3_gene_pane_t3_ParamLimits

0xc3b2,	// (0x000601d8) list_double_ai3_gene_pane_t3

0x0002,

0xfce8,	// (0x00063b0e) list_double_ai3_gene_pane_t_ParamLimits

0xfce8,	// (0x00063b0e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4089,	// (0x00057eaf) aid_size_min_col_2

0xc256,	// (0x0006007c) aid_size_min_msg_ParamLimits

0xc256,	// (0x0006007c) aid_size_min_msg

0xb3d9,	// (0x0005f1ff) fep_vkb_top_text_pane_g2_ParamLimits

0xb3d9,	// (0x0005f1ff) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x0006396e) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x0006396e) fep_vkb_top_text_pane_g

0xb989,	// (0x0005f7af) main_hc_apps_shell_pane

0xc3cf,	// (0x000601f5) grid_hc_apps_pane_ParamLimits

0xc3cf,	// (0x000601f5) grid_hc_apps_pane

0xc3de,	// (0x00060204) list_hc_apps_pane

0xc3e6,	// (0x0006020c) scroll_pane_cp37_ParamLimits

0xc3e6,	// (0x0006020c) scroll_pane_cp37

0xc3f2,	// (0x00060218) cell_hc_apps_pane_ParamLimits

0xc3f2,	// (0x00060218) cell_hc_apps_pane

0xc4aa,	// (0x000602d0) cell_hc_apps_pane_g1_ParamLimits

0xc4aa,	// (0x000602d0) cell_hc_apps_pane_g1

0xc4db,	// (0x00060301) cell_hc_apps_pane_g2_ParamLimits

0xc4db,	// (0x00060301) cell_hc_apps_pane_g2

0xc4f7,	// (0x0006031d) cell_hc_apps_pane_g3_ParamLimits

0xc4f7,	// (0x0006031d) cell_hc_apps_pane_g3

0x0002,

0xfcef,	// (0x00063b15) cell_hc_apps_pane_g_ParamLimits

0xfcef,	// (0x00063b15) cell_hc_apps_pane_g

0xc519,	// (0x0006033f) cell_hc_apps_pane_t1_ParamLimits

0xc519,	// (0x0006033f) cell_hc_apps_pane_t1

0xeb90,	// (0x000629b6) grid_highlight_pane_cp10_ParamLimits

0xeb90,	// (0x000629b6) grid_highlight_pane_cp10

0xc559,	// (0x0006037f) list_single_hc_apps_pane_ParamLimits

0xc559,	// (0x0006037f) list_single_hc_apps_pane

0xc598,	// (0x000603be) list_single_hc_apps_pane_g1

0x9abf,	// (0x0005d8e5) list_single_hc_apps_pane_g2

0x0001,

0xfcf6,	// (0x00063b1c) list_single_hc_apps_pane_g

0x9ad8,	// (0x0005d8fe) list_single_hc_apps_pane_g2_copy1

0x7225,	// (0x0005b04b) list_single_hc_apps_pane_t1

0xb9f7,	// (0x0005f81d) bg_set_opt_pane_cp_ParamLimits

0x5248,	// (0x0005906e) setting_slider_pane_t1_ParamLimits

0x5261,	// (0x00059087) setting_slider_pane_t2_ParamLimits

0x527b,	// (0x000590a1) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0006338a) setting_slider_pane_t_ParamLimits

0x5293,	// (0x000590b9) slider_set_pane_ParamLimits

0x66b8,	// (0x0005a4de) control_pane_g5_ParamLimits

0x66b8,	// (0x0005a4de) control_pane_g5

0x9d51,	// (0x0005db77) slider_set_pane_g1_ParamLimits

0x6b5f,	// (0x0005a985) slider_set_pane_g2_ParamLimits

0x6b6b,	// (0x0005a991) slider_set_pane_g3_ParamLimits

0x6b7f,	// (0x0005a9a5) slider_set_pane_g4_ParamLimits

0x6b97,	// (0x0005a9bd) slider_set_pane_g5_ParamLimits

0x6b6b,	// (0x0005a991) slider_set_pane_g6_ParamLimits

0x6bad,	// (0x0005a9d3) slider_set_pane_g7_ParamLimits

0xf96f,	// (0x00063795) slider_set_pane_g_ParamLimits

0x34ce,	// (0x000572f4) navi_icon_text_pane_ParamLimits

0x8341,	// (0x0005c167) aid_fill_nsta_2_ParamLimits

0x8382,	// (0x0005c1a8) aid_touch_tab_arrow_left_ParamLimits

0x8391,	// (0x0005c1b7) aid_touch_tab_arrow_right_ParamLimits

0x83fe,	// (0x0005c224) clock_nsta_pane_ParamLimits

0x968c,	// (0x0005d4b2) navi_icon_pane_g1_ParamLimits

0x9698,	// (0x0005d4be) navi_text_pane_t1_ParamLimits

0xabfc,	// (0x0005ea22) navi_icon_text_pane_g1_ParamLimits

0xac08,	// (0x0005ea2e) navi_icon_text_pane_t1_ParamLimits

0xc598,	// (0x000603be) list_single_hc_apps_pane_g1_ParamLimits

0x9abf,	// (0x0005d8e5) list_single_hc_apps_pane_g2_ParamLimits

0xfcf6,	// (0x00063b1c) list_single_hc_apps_pane_g_ParamLimits

0x9ad8,	// (0x0005d8fe) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7225,	// (0x0005b04b) list_single_hc_apps_pane_t1_ParamLimits

0x5090,	// (0x00058eb6) popup_toolbar2_fixed_window_ParamLimits

0x5090,	// (0x00058eb6) popup_toolbar2_fixed_window

0x8245,	// (0x0005c06b) popup_toolbar2_float_window

0xb989,	// (0x0005f7af) bg_popup_sub_pane_cp27

0xc5b1,	// (0x000603d7) grid_toolbar2_float_pane

0xb989,	// (0x0005f7af) bg_popup_sub_pane_cp26

0xc5b1,	// (0x000603d7) grid_toolbar2_fixed_pane

0xc5b9,	// (0x000603df) cell_toolbar2_fixed_pane_ParamLimits

0xc5b9,	// (0x000603df) cell_toolbar2_fixed_pane

0xc5c9,	// (0x000603ef) cell_toolbar2_fixed_pane_g1

0xc5d2,	// (0x000603f8) toolbar2_fixed_button_pane

0x8835,	// (0x0005c65b) toolbar2_fixed_button_pane_g1

0x8845,	// (0x0005c66b) toolbar2_fixed_button_pane_g2

0x883d,	// (0x0005c663) toolbar2_fixed_button_pane_g3

0x8855,	// (0x0005c67b) toolbar2_fixed_button_pane_g4

0x884d,	// (0x0005c673) toolbar2_fixed_button_pane_g5

0x885d,	// (0x0005c683) toolbar2_fixed_button_pane_g6

0x8865,	// (0x0005c68b) toolbar2_fixed_button_pane_g7

0x8875,	// (0x0005c69b) toolbar2_fixed_button_pane_g8

0x886d,	// (0x0005c693) toolbar2_fixed_button_pane_g9

0x0008,

0xf871,	// (0x00063697) toolbar2_fixed_button_pane_g

0xc5da,	// (0x00060400) cell_toolbar2_float_pane_ParamLimits

0xc5da,	// (0x00060400) cell_toolbar2_float_pane

0xc5eb,	// (0x00060411) cell_toolbar2_float_pane_g1

0xc5d2,	// (0x000603f8) toolbar2_fixed_button_pane_cp

0xb135,	// (0x0005ef5b) fep_vkb_accented_list_pane_ParamLimits

0xb135,	// (0x0005ef5b) fep_vkb_accented_list_pane

0x6f84,	// (0x0005adaa) bg_popup_fep_shadow_pane_g9

0x361e,	// (0x00057444) bg_popup_fep_shadow_pane_cp3

0xf185,	// (0x00062fab) list_accented_list_pane

0xc5f4,	// (0x0006041a) list_single_accented_list_pane_ParamLimits

0xc5f4,	// (0x0006041a) list_single_accented_list_pane

0x361e,	// (0x00057444) list_highlight_pane_cp10

0xc605,	// (0x0006042b) list_single_accented_list_pane_t1

0x818b,	// (0x0005bfb1) popup_slider_window_ParamLimits

0x818b,	// (0x0005bfb1) popup_slider_window

0xc24d,	// (0x00060073) aid_indentation_list_msg

0xc6d1,	// (0x000604f7) bg_popup_window_pane_cp19

0xc73f,	// (0x00060565) popup_slider_window_g1

0xc75b,	// (0x00060581) popup_slider_window_g2

0xc777,	// (0x0006059d) popup_slider_window_g3

0x0005,

0xfcfb,	// (0x00063b21) popup_slider_window_g

0xc7d3,	// (0x000605f9) popup_slider_window_t1

0xc847,	// (0x0006066d) small_volume_slider_vertical_pane

0xaffe,	// (0x0005ee24) small_volume_slider_vertical_pane_g1

0xaffe,	// (0x0005ee24) small_volume_slider_vertical_pane_g2

0xc863,	// (0x00060689) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0d,	// (0x00063b33) small_volume_slider_vertical_pane_g

0x4e3e,	// (0x00058c64) area_side_right_pane_ParamLimits

0x4e3e,	// (0x00058c64) area_side_right_pane

0x7253,	// (0x0005b079) aid_size_side_button_ParamLimits

0x7253,	// (0x0005b079) aid_size_side_button

0x7267,	// (0x0005b08d) grid_sctrl_middle_pane_ParamLimits

0x7267,	// (0x0005b08d) grid_sctrl_middle_pane

0x7287,	// (0x0005b0ad) sctrl_sk_bottom_pane

0x7298,	// (0x0005b0be) sctrl_sk_top_pane

0x72aa,	// (0x0005b0d0) aid_touch_sctrl_top

0x72b7,	// (0x0005b0dd) bg_sctrl_sk_pane_ParamLimits

0x72b7,	// (0x0005b0dd) bg_sctrl_sk_pane

0x72c5,	// (0x0005b0eb) sctrl_sk_top_pane_g1

0x72d2,	// (0x0005b0f8) sctrl_sk_top_pane_t1

0x72aa,	// (0x0005b0d0) aid_touch_sctrl_bottom

0x72b7,	// (0x0005b0dd) bg_sctrl_sk_pane_cp_ParamLimits

0x72b7,	// (0x0005b0dd) bg_sctrl_sk_pane_cp

0x72ed,	// (0x0005b113) sctrl_sk_bottom_pane_g1

0x72d2,	// (0x0005b0f8) sctrl_sk_bottom_pane_t1

0x72f6,	// (0x0005b11c) cell_sctrl_middle_pane_ParamLimits

0x72f6,	// (0x0005b11c) cell_sctrl_middle_pane

0x7313,	// (0x0005b139) aid_touch_sctrl_middle_ParamLimits

0x7313,	// (0x0005b139) aid_touch_sctrl_middle

0x7325,	// (0x0005b14b) bg_sctrl_middle_pane_ParamLimits

0x7325,	// (0x0005b14b) bg_sctrl_middle_pane

0x6fa4,	// (0x0005adca) cell_sctrl_middle_pane_g1_ParamLimits

0x6fa4,	// (0x0005adca) cell_sctrl_middle_pane_g1

0x7333,	// (0x0005b159) cell_sctrl_middle_pane_g2_ParamLimits

0x7333,	// (0x0005b159) cell_sctrl_middle_pane_g2

0x0001,

0xfd19,	// (0x00063b3f) cell_sctrl_middle_pane_g_ParamLimits

0xfd19,	// (0x00063b3f) cell_sctrl_middle_pane_g

0x8835,	// (0x0005c65b) bg_sctrl_middle_pane_g1

0x883d,	// (0x0005c663) bg_sctrl_middle_pane_g2

0x8845,	// (0x0005c66b) bg_sctrl_middle_pane_g3

0x884d,	// (0x0005c673) bg_sctrl_middle_pane_g4

0x8855,	// (0x0005c67b) bg_sctrl_middle_pane_g5

0x885d,	// (0x0005c683) bg_sctrl_middle_pane_g6

0x8865,	// (0x0005c68b) bg_sctrl_middle_pane_g7

0x886d,	// (0x0005c693) bg_sctrl_middle_pane_g8

0x0007,

0xfd1e,	// (0x00063b44) bg_sctrl_middle_pane_g

0x8875,	// (0x0005c69b) bg_sctrl_middle_pane_g8_copy1

0x8835,	// (0x0005c65b) bg_sctrl_sk_pane_g1

0x8845,	// (0x0005c66b) bg_sctrl_sk_pane_g2

0x883d,	// (0x0005c663) bg_sctrl_sk_pane_g3

0x0008,

0xf871,	// (0x00063697) bg_sctrl_sk_pane_g

0xefab,	// (0x00062dd1) aid_size_touch_scroll_bar

0x8855,	// (0x0005c67b) bg_sctrl_sk_pane_g4

0x884d,	// (0x0005c673) bg_sctrl_sk_pane_g5

0x885d,	// (0x0005c683) bg_sctrl_sk_pane_g6

0x8865,	// (0x0005c68b) bg_sctrl_sk_pane_g7

0x8875,	// (0x0005c69b) bg_sctrl_sk_pane_g8

0x886d,	// (0x0005c693) bg_sctrl_sk_pane_g9

0x7da2,	// (0x0005bbc8) popup_fep_china_hwr2_fs_candidate_window

0x7dac,	// (0x0005bbd2) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7dac,	// (0x0005bbd2) popup_fep_china_hwr2_fs_control_window

0x6fa4,	// (0x0005adca) sctrl_sk_top_pane_g2

0x0001,

0xfd14,	// (0x00063b3a) sctrl_sk_top_pane_g

0xc86c,	// (0x00060692) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc86c,	// (0x00060692) aid_fep_china_hwr2_fs_cell

0xc87f,	// (0x000606a5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc87f,	// (0x000606a5) bg_popup_fep_shadow_pane_cp4

0xc898,	// (0x000606be) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc898,	// (0x000606be) bg_popup_fep_shadow_pane_cp5

0xc8aa,	// (0x000606d0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc8aa,	// (0x000606d0) popup_fep_china_hwr2_fs_control_bar_grid

0xc8ba,	// (0x000606e0) popup_fep_china_hwr2_fs_control_funtion_grid

0xc8c2,	// (0x000606e8) aid_fep_china_hwr2_fs_candi_cell

0xb989,	// (0x0005f7af) bg_popup_fep_shadow_pane_cp6

0xc8cc,	// (0x000606f2) popup_fep_china_hwr2_fs_candidate_grid

0xc8d6,	// (0x000606fc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc8d6,	// (0x000606fc) cell_fep_china_hwr2_fs_funtion_grid

0xaffe,	// (0x0005ee24) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xc8ee,	// (0x00060714) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xc8ee,	// (0x00060714) cell_fep_china_hwr2_fs_funtion_grid_g1

0xc8fc,	// (0x00060722) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xc8fc,	// (0x00060722) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2f,	// (0x00063b55) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2f,	// (0x00063b55) cell_fep_china_hwr2_fs_funtion_grid_g

0xc912,	// (0x00060738) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc912,	// (0x00060738) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc927,	// (0x0006074d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc927,	// (0x0006074d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd34,	// (0x00063b5a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd34,	// (0x00063b5a) cell_fep_china_hwr2_fs_funtion_grid_t

0xc943,	// (0x00060769) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xc94b,	// (0x00060771) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xc953,	// (0x00060779) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd39,	// (0x00063b5f) popup_fep_china_hwr2_fs_control_bar_grid_g

0xc95b,	// (0x00060781) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xc95b,	// (0x00060781) cell_fep_china_hwr2_fs_candidate_grid

0xc97a,	// (0x000607a0) popup_fep_china_hwr2_fs_candidate_grid_g20

0xc982,	// (0x000607a8) popup_fep_china_hwr2_fs_candidate_grid_g21

0xaffe,	// (0x0005ee24) cell_fep_china_hwr2_fs_candidate_grid_g1

0xaffe,	// (0x0005ee24) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x00063973) cell_fep_china_hwr2_fs_candidate_grid_g

0xc98a,	// (0x000607b0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8411,	// (0x0005c237) clock_nsta_pane_cp_24_ParamLimits

0x8411,	// (0x0005c237) clock_nsta_pane_cp_24

0x8491,	// (0x0005c2b7) indicator_nsta_pane_cp_24_ParamLimits

0x8491,	// (0x0005c2b7) indicator_nsta_pane_cp_24

0x9508,	// (0x0005d32e) heading_pane_g1

0x0001,

0xf8d6,	// (0x000636fc) heading_pane_g

0xa129,	// (0x0005df4f) grid_sct_catagory_button_pane

0xa15b,	// (0x0005df81) scroll_pane_cp5_ParamLimits

0xac4a,	// (0x0005ea70) button_value_adjust_pane_cp5_ParamLimits

0xac4a,	// (0x0005ea70) button_value_adjust_pane_cp5

0xad2f,	// (0x0005eb55) form2_midp_time_pane_ParamLimits

0xc998,	// (0x000607be) cell_sct_catagory_button_pane_ParamLimits

0xc998,	// (0x000607be) cell_sct_catagory_button_pane

0xafc3,	// (0x0005ede9) bg_button_pane_cp01_ParamLimits

0xafc3,	// (0x0005ede9) bg_button_pane_cp01

0xaffe,	// (0x0005ee24) cell_sct_catagory_button_pane_g1

0x81cc,	// (0x0005bff2) popup_tb_extension_window

0xc9aa,	// (0x000607d0) aid_size_cell_ext_ParamLimits

0xc9aa,	// (0x000607d0) aid_size_cell_ext

0xeb90,	// (0x000629b6) bg_tb_trans_pane_cp1_ParamLimits

0xeb90,	// (0x000629b6) bg_tb_trans_pane_cp1

0xc9ca,	// (0x000607f0) grid_tb_ext_pane_ParamLimits

0xc9ca,	// (0x000607f0) grid_tb_ext_pane

0xc9fa,	// (0x00060820) cell_tb_ext_pane_ParamLimits

0xc9fa,	// (0x00060820) cell_tb_ext_pane

0xca11,	// (0x00060837) cell_tb_ext_pane_g1_ParamLimits

0xca11,	// (0x00060837) cell_tb_ext_pane_g1

0xca2e,	// (0x00060854) cell_tb_ext_pane_t1

0xeb90,	// (0x000629b6) list_highlight_pane_cp11_ParamLimits

0xeb90,	// (0x000629b6) list_highlight_pane_cp11

0x50af,	// (0x00058ed5) popup_uni_indicator_window_ParamLimits

0x50af,	// (0x00058ed5) popup_uni_indicator_window

0xf072,	// (0x00062e98) bg_popup_sub_pane_cp14

0xca49,	// (0x0006086f) list_uniindi_pane

0xca55,	// (0x0006087b) uniindi_top_pane

0xeb90,	// (0x000629b6) bg_uniindi_top_pane

0xca76,	// (0x0006089c) uniindi_top_pane_g1

0xca8c,	// (0x000608b2) uniindi_top_pane_g2

0x0003,

0xfd40,	// (0x00063b66) uniindi_top_pane_g

0xcab6,	// (0x000608dc) uniindi_top_pane_t1

0xcae2,	// (0x00060908) list_single_uniindi_pane_ParamLimits

0xcae2,	// (0x00060908) list_single_uniindi_pane

0xaffe,	// (0x0005ee24) bg_uniindi_top_pane_g1

0xcaf4,	// (0x0006091a) list_single_uniindi_pane_g1

0xcb07,	// (0x0006092d) list_single_uniindi_pane_t1

0x4f1b,	// (0x00058d41) control_bg_pane

0xcb2c,	// (0x00060952) bg_sctrl_sk_pane_cp1

0xcb35,	// (0x0006095b) bg_sctrl_sk_pane_cp2

0xcb3e,	// (0x00060964) control_bg_pane_g1

0xcb47,	// (0x0006096d) control_bg_pane_g2

0x0001,

0xfd49,	// (0x00063b6f) control_bg_pane_g

0xaa71,	// (0x0005e897) cell_indicator_nsta_pane_g1_ParamLimits

0xaa7f,	// (0x0005e8a5) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x000638d7) cell_indicator_nsta_pane_g_ParamLimits

0x3f0c,	// (0x00057d32) form2_midp_time_pane_t1_ParamLimits

0xeded,	// (0x00062c13) main_idle_act4_pane_ParamLimits

0xeded,	// (0x00062c13) main_idle_act4_pane

0x81cc,	// (0x0005bff2) popup_tb_extension_window_ParamLimits

0xc9ec,	// (0x00060812) tb_ext_find_pane_ParamLimits

0xc9ec,	// (0x00060812) tb_ext_find_pane

0xcb50,	// (0x00060976) ai_gene_pane_1_cp1

0x641b,	// (0x0005a241) ai_gene_pane_2_cp1

0xcb58,	// (0x0006097e) list_single_idle_plugin_calendar_pane

0xcb61,	// (0x00060987) list_single_idle_plugin_notification_pane

0xcb6a,	// (0x00060990) list_single_idle_plugin_player_pane

0xcb73,	// (0x00060999) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcb73,	// (0x00060999) list_single_idle_plugin_shortcut_pane

0xcb95,	// (0x000609bb) main_idle_act4_pane_t1

0xcba7,	// (0x000609cd) main_idle_act4_pane_t2

0x0001,

0xfd4e,	// (0x00063b74) main_idle_act4_pane_t

0xcbb9,	// (0x000609df) middle_sk_idle_act4_pane_ParamLimits

0xcbb9,	// (0x000609df) middle_sk_idle_act4_pane

0xcbcf,	// (0x000609f5) popup_clock_digital_analogue_window_cp2

0xcbe9,	// (0x00060a0f) shortcut_wheel_idle_act4_pane_ParamLimits

0xcbe9,	// (0x00060a0f) shortcut_wheel_idle_act4_pane

0xaffe,	// (0x0005ee24) shortcut_wheel_idle_act4_pane_g1

0xaffe,	// (0x0005ee24) shortcut_wheel_idle_act4_pane_g2

0xaffe,	// (0x0005ee24) shortcut_wheel_idle_act4_pane_g3

0xaffe,	// (0x0005ee24) shortcut_wheel_idle_act4_pane_g4

0xaffe,	// (0x0005ee24) shortcut_wheel_idle_act4_pane_g5

0xcbfd,	// (0x00060a23) shortcut_wheel_idle_act4_pane_g6

0xcc05,	// (0x00060a2b) shortcut_wheel_idle_act4_pane_g7

0xcc0d,	// (0x00060a33) shortcut_wheel_idle_act4_pane_g8

0xcc15,	// (0x00060a3b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd53,	// (0x00063b79) shortcut_wheel_idle_act4_pane_g

0xb279,	// (0x0005f09f) middle_sk_idle_act4_pane_g1_ParamLimits

0xb279,	// (0x0005f09f) middle_sk_idle_act4_pane_g1

0xcc79,	// (0x00060a9f) middle_sk_idle_act4_pane_g2_ParamLimits

0xcc79,	// (0x00060a9f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd76,	// (0x00063b9c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd76,	// (0x00063b9c) middle_sk_idle_act4_pane_g

0xcc85,	// (0x00060aab) middle_sk_idle_act4_pane_t1_ParamLimits

0xcc85,	// (0x00060aab) middle_sk_idle_act4_pane_t1

0xcca2,	// (0x00060ac8) grid_ai_shortcut_pane_ParamLimits

0xcca2,	// (0x00060ac8) grid_ai_shortcut_pane

0xccbb,	// (0x00060ae1) list_highlight_pane_cp16_ParamLimits

0xccbb,	// (0x00060ae1) list_highlight_pane_cp16

0xccc8,	// (0x00060aee) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xccc8,	// (0x00060aee) list_single_idle_plugin_shortcut_pane_g1

0xccd4,	// (0x00060afa) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xccd4,	// (0x00060afa) list_single_idle_plugin_shortcut_pane_g2

0xccee,	// (0x00060b14) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xccee,	// (0x00060b14) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7b,	// (0x00063ba1) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7b,	// (0x00063ba1) list_single_idle_plugin_shortcut_pane_g

0xcd01,	// (0x00060b27) cell_ai_shortcut_pane_ParamLimits

0xcd01,	// (0x00060b27) cell_ai_shortcut_pane

0xcd24,	// (0x00060b4a) cell_ai_shortcut_pane_g1_ParamLimits

0xcd24,	// (0x00060b4a) cell_ai_shortcut_pane_g1

0xcb50,	// (0x00060976) ai_gene_pane_1_cp2

0xcd46,	// (0x00060b6c) ai_gene_pane_2_cp2

0xcd4e,	// (0x00060b74) list_highlight_pane_cp15

0xcd57,	// (0x00060b7d) list_single_idle_plugin_calendar_pane_g1

0xcd4e,	// (0x00060b74) list_highlight_pane_cp17

0xcd5f,	// (0x00060b85) list_single_idle_plugin_calendar_pane_g1_copy1

0xcd67,	// (0x00060b8d) list_single_idle_plugin_player_pane_g1

0xa390,	// (0x0005e1b6) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd82,	// (0x00063ba8) list_single_idle_plugin_player_pane_g

0xcd6f,	// (0x00060b95) list_single_idle_plugin_player_pane_t1

0xcd7d,	// (0x00060ba3) list_single_idle_plugin_player_pane_t2

0xcd8b,	// (0x00060bb1) list_single_idle_plugin_player_pane_t3

0xcd99,	// (0x00060bbf) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd87,	// (0x00063bad) list_single_idle_plugin_player_pane_t

0xcda7,	// (0x00060bcd) wait_bar_pane_cp15

0xcdaf,	// (0x00060bd5) grid_ai_notification_pane

0xa390,	// (0x0005e1b6) list_single_idle_plugin_notification_pane_g1

0xcdb8,	// (0x00060bde) cell_ai_notification_pane_ParamLimits

0xcdb8,	// (0x00060bde) cell_ai_notification_pane

0xcdc5,	// (0x00060beb) cell_ai_notification_pane_g1

0xcdcd,	// (0x00060bf3) cell_ai_notification_pane_t1

0xcddb,	// (0x00060c01) tb_ext_find_button_pane

0xcde3,	// (0x00060c09) tb_ext_find_pane_g1

0xcdeb,	// (0x00060c11) tb_ext_find_pane_t1

0x10fa,	// (0x00054f20) tb_ext_find_button_pane_g1

0xcdf9,	// (0x00060c1f) tb_ext_find_button_pane_g2

0x0001,

0xfd90,	// (0x00063bb6) tb_ext_find_button_pane_g

0xcb95,	// (0x000609bb) main_idle_act4_pane_t1_ParamLimits

0xcba7,	// (0x000609cd) main_idle_act4_pane_t2_ParamLimits

0xfd4e,	// (0x00063b74) main_idle_act4_pane_t_ParamLimits

0xcbcf,	// (0x000609f5) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcbdd,	// (0x00060a03) sat_plugin_idle_act4_pane_ParamLimits

0xcbdd,	// (0x00060a03) sat_plugin_idle_act4_pane

0xce02,	// (0x00060c28) sat_plugin_idle_act4_pane_t1_ParamLimits

0xce02,	// (0x00060c28) sat_plugin_idle_act4_pane_t1

0xce15,	// (0x00060c3b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xce15,	// (0x00060c3b) sat_plugin_idle_act4_pane_t2

0xce28,	// (0x00060c4e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xce28,	// (0x00060c4e) sat_plugin_idle_act4_pane_t3

0xce3b,	// (0x00060c61) sat_plugin_idle_act4_pane_t4_ParamLimits

0xce3b,	// (0x00060c61) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd95,	// (0x00063bbb) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd95,	// (0x00063bbb) sat_plugin_idle_act4_pane_t

0x4fe0,	// (0x00058e06) popup_battery_window_ParamLimits

0x4fe0,	// (0x00058e06) popup_battery_window

0xeb90,	// (0x000629b6) bg_popup_sub_pane_cp25_ParamLimits

0xeb90,	// (0x000629b6) bg_popup_sub_pane_cp25

0xce4e,	// (0x00060c74) popup_battery_window_g1_ParamLimits

0xce4e,	// (0x00060c74) popup_battery_window_g1

0xce5a,	// (0x00060c80) popup_battery_window_t1_ParamLimits

0xce5a,	// (0x00060c80) popup_battery_window_t1

0xce6c,	// (0x00060c92) popup_battery_window_t2_ParamLimits

0xce6c,	// (0x00060c92) popup_battery_window_t2

0x0001,

0xfd9e,	// (0x00063bc4) popup_battery_window_t_ParamLimits

0xfd9e,	// (0x00063bc4) popup_battery_window_t

0x6322,	// (0x0005a148) midp_canvas_pane_ParamLimits

0x6384,	// (0x0005a1aa) midp_keypad_pane_ParamLimits

0x6384,	// (0x0005a1aa) midp_keypad_pane

0x7cf4,	// (0x0005bb1a) main_midp_pane_ParamLimits

0xaafd,	// (0x0005e923) signal_pane_g2_cp_ParamLimits

0xce89,	// (0x00060caf) aid_size_cell_midp_keypad_ParamLimits

0xce89,	// (0x00060caf) aid_size_cell_midp_keypad

0xcea3,	// (0x00060cc9) midp_keyp_game_grid_pane_ParamLimits

0xcea3,	// (0x00060cc9) midp_keyp_game_grid_pane

0xcec3,	// (0x00060ce9) midp_keyp_rocker_pane_ParamLimits

0xcec3,	// (0x00060ce9) midp_keyp_rocker_pane

0xceee,	// (0x00060d14) midp_keyp_sk_left_pane_ParamLimits

0xceee,	// (0x00060d14) midp_keyp_sk_left_pane

0xcf48,	// (0x00060d6e) midp_keyp_sk_right_pane_ParamLimits

0xcf48,	// (0x00060d6e) midp_keyp_sk_right_pane

0xb989,	// (0x0005f7af) bg_button_pane_cp03

0xcfa2,	// (0x00060dc8) midp_keyp_sk_left_pane_g1

0xb989,	// (0x0005f7af) bg_button_pane_cp04

0xcfa2,	// (0x00060dc8) midp_keyp_sk_right_pane_g1

0xaffe,	// (0x0005ee24) midp_keyp_rocker_pane_g1

0xcfab,	// (0x00060dd1) keyp_game_cell_pane_ParamLimits

0xcfab,	// (0x00060dd1) keyp_game_cell_pane

0xb989,	// (0x0005f7af) bg_button_pane_cp02

0xcfbe,	// (0x00060de4) keyp_game_cell_pane_g1

0x502a,	// (0x00058e50) popup_fep_vkb2_window_ParamLimits

0x502a,	// (0x00058e50) popup_fep_vkb2_window

0x7351,	// (0x0005b177) aid_size_cell_vkb2_ParamLimits

0x7351,	// (0x0005b177) aid_size_cell_vkb2

0x73a5,	// (0x0005b1cb) popup_fep_vkb2_window_g1_ParamLimits

0x73a5,	// (0x0005b1cb) popup_fep_vkb2_window_g1

0x73ed,	// (0x0005b213) vkb2_area_bottom_pane_ParamLimits

0x73ed,	// (0x0005b213) vkb2_area_bottom_pane

0x7441,	// (0x0005b267) vkb2_area_keypad_pane_ParamLimits

0x7441,	// (0x0005b267) vkb2_area_keypad_pane

0x7487,	// (0x0005b2ad) vkb2_area_top_pane_ParamLimits

0x7487,	// (0x0005b2ad) vkb2_area_top_pane

0x7501,	// (0x0005b327) vkb2_top_entry_pane_ParamLimits

0x7501,	// (0x0005b327) vkb2_top_entry_pane

0x752b,	// (0x0005b351) vkb2_top_grid_left_pane_ParamLimits

0x752b,	// (0x0005b351) vkb2_top_grid_left_pane

0x7549,	// (0x0005b36f) vkb2_top_grid_right_pane_ParamLimits

0x7549,	// (0x0005b36f) vkb2_top_grid_right_pane

0x7567,	// (0x0005b38d) vkb2_cell_keypad_pane_ParamLimits

0x7567,	// (0x0005b38d) vkb2_cell_keypad_pane

0x7638,	// (0x0005b45e) vkb2_area_bottom_grid_pane_ParamLimits

0x7638,	// (0x0005b45e) vkb2_area_bottom_grid_pane

0x765e,	// (0x0005b484) vkb2_area_bottom_pane_g1_ParamLimits

0x765e,	// (0x0005b484) vkb2_area_bottom_pane_g1

0x7682,	// (0x0005b4a8) vkb2_area_bottom_pane_g2_ParamLimits

0x7682,	// (0x0005b4a8) vkb2_area_bottom_pane_g2

0x76b0,	// (0x0005b4d6) vkb2_area_bottom_pane_g3_ParamLimits

0x76b0,	// (0x0005b4d6) vkb2_area_bottom_pane_g3

0x0002,

0xfda3,	// (0x00063bc9) vkb2_area_bottom_pane_g_ParamLimits

0xfda3,	// (0x00063bc9) vkb2_area_bottom_pane_g

0x7711,	// (0x0005b537) vkb2_top_cell_left_pane_ParamLimits

0x7711,	// (0x0005b537) vkb2_top_cell_left_pane

0xcfcf,	// (0x00060df5) vkb2_top_entry_pane_g1_ParamLimits

0xcfcf,	// (0x00060df5) vkb2_top_entry_pane_g1

0xcfdd,	// (0x00060e03) vkb2_top_entry_pane_t1_ParamLimits

0xcfdd,	// (0x00060e03) vkb2_top_entry_pane_t1

0xd00f,	// (0x00060e35) vkb2_top_entry_pane_t2_ParamLimits

0xd00f,	// (0x00060e35) vkb2_top_entry_pane_t2

0xd041,	// (0x00060e67) vkb2_top_entry_pane_t3_ParamLimits

0xd041,	// (0x00060e67) vkb2_top_entry_pane_t3

0x0002,

0xfdaa,	// (0x00063bd0) vkb2_top_entry_pane_t_ParamLimits

0xfdaa,	// (0x00063bd0) vkb2_top_entry_pane_t

0x775e,	// (0x0005b584) vkb2_top_grid_right_pane_g1_ParamLimits

0x775e,	// (0x0005b584) vkb2_top_grid_right_pane_g1

0x7774,	// (0x0005b59a) vkb2_top_grid_right_pane_g2_ParamLimits

0x7774,	// (0x0005b59a) vkb2_top_grid_right_pane_g2

0x778c,	// (0x0005b5b2) vkb2_top_grid_right_pane_g3_ParamLimits

0x778c,	// (0x0005b5b2) vkb2_top_grid_right_pane_g3

0x77a4,	// (0x0005b5ca) vkb2_top_grid_right_pane_g4_ParamLimits

0x77a4,	// (0x0005b5ca) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb1,	// (0x00063bd7) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb1,	// (0x00063bd7) vkb2_top_grid_right_pane_g

0x77ba,	// (0x0005b5e0) vkb2_top_cell_left_pane_g1

0x77d1,	// (0x0005b5f7) vkb2_cell_keypad_pane_g1_ParamLimits

0x77d1,	// (0x0005b5f7) vkb2_cell_keypad_pane_g1

0xd065,	// (0x00060e8b) vkb2_cell_keypad_pane_t1_ParamLimits

0xd065,	// (0x00060e8b) vkb2_cell_keypad_pane_t1

0x77df,	// (0x0005b605) vkb2_cell_bottom_grid_pane_ParamLimits

0x77df,	// (0x0005b605) vkb2_cell_bottom_grid_pane

0x7818,	// (0x0005b63e) vkb2_cell_bottom_grid_pane_g1

0xcc1d,	// (0x00060a43) aid_call2_pane_cp02

0xcc25,	// (0x00060a4b) aid_call_pane_cp02

0xcc2d,	// (0x00060a53) clock_digital_number_pane_cp10

0xcc35,	// (0x00060a5b) clock_digital_number_pane_cp11

0xcc3d,	// (0x00060a63) clock_digital_number_pane_cp12

0xcc45,	// (0x00060a6b) clock_digital_number_pane_cp13

0xcc4d,	// (0x00060a73) clock_digital_separator_pane_cp10

0x10fa,	// (0x00054f20) popup_clock_digital_analogue_window_cp2_g1

0x10fa,	// (0x00054f20) popup_clock_digital_analogue_window_cp2_g2

0xcc55,	// (0x00060a7b) popup_clock_digital_analogue_window_cp2_g3

0x10fa,	// (0x00054f20) popup_clock_digital_analogue_window_cp2_g4

0xcc55,	// (0x00060a7b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd66,	// (0x00063b8c) popup_clock_digital_analogue_window_cp2_g

0xcc5d,	// (0x00060a83) popup_clock_digital_analogue_window_cp2_t1

0xcc6b,	// (0x00060a91) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd71,	// (0x00063b97) popup_clock_digital_analogue_window_cp2_t

0xaffe,	// (0x0005ee24) clock_digital_number_pane_cp10_g1

0xaffe,	// (0x0005ee24) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x00063973) clock_digital_number_pane_cp10_g

0xaffe,	// (0x0005ee24) clock_digital_separator_pane_cp10_g1

0xaffe,	// (0x0005ee24) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x00063973) clock_digital_separator_pane_cp10_g

0xca98,	// (0x000608be) uniindi_top_pane_g3

0xcaa9,	// (0x000608cf) uniindi_top_pane_g4

0x75f2,	// (0x0005b418) vkb2_row_keypad_pane_ParamLimits

0x75f2,	// (0x0005b418) vkb2_row_keypad_pane

0x7834,	// (0x0005b65a) vkb2_cell_t_keypad_pane_ParamLimits

0x7834,	// (0x0005b65a) vkb2_cell_t_keypad_pane

0x7844,	// (0x0005b66a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7844,	// (0x0005b66a) vkb2_cell_t_keypad_pane_cp08

0x7859,	// (0x0005b67f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7859,	// (0x0005b67f) vkb2_cell_t_keypad_pane_cp09

0x786d,	// (0x0005b693) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x786d,	// (0x0005b693) vkb2_cell_t_keypad_pane_cp01

0x787e,	// (0x0005b6a4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x787e,	// (0x0005b6a4) vkb2_cell_t_keypad_pane_cp02

0x788f,	// (0x0005b6b5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x788f,	// (0x0005b6b5) vkb2_cell_t_keypad_pane_cp03

0x78a0,	// (0x0005b6c6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x78a0,	// (0x0005b6c6) vkb2_cell_t_keypad_pane_cp04

0x78b1,	// (0x0005b6d7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x78b1,	// (0x0005b6d7) vkb2_cell_t_keypad_pane_cp05

0x78c2,	// (0x0005b6e8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x78c2,	// (0x0005b6e8) vkb2_cell_t_keypad_pane_cp06

0x78d5,	// (0x0005b6fb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x78d5,	// (0x0005b6fb) vkb2_cell_t_keypad_pane_cp07

0x78ea,	// (0x0005b710) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x78ea,	// (0x0005b710) vkb2_cell_t_keypad_pane_cp10

0x6fa4,	// (0x0005adca) vkb2_cell_t_keypad_pane_g1

0xd07c,	// (0x00060ea2) vkb2_cell_t_keypad_pane_t1

0x4f1b,	// (0x00058d41) popup_grid_graphic2_window

0xd08e,	// (0x00060eb4) aid_size_cell_graphic2_ParamLimits

0xd08e,	// (0x00060eb4) aid_size_cell_graphic2

0xd0c6,	// (0x00060eec) bg_popup_window_pane_cp21_ParamLimits

0xd0c6,	// (0x00060eec) bg_popup_window_pane_cp21

0xd0d4,	// (0x00060efa) graphic2_pages_pane_ParamLimits

0xd0d4,	// (0x00060efa) graphic2_pages_pane

0xd11a,	// (0x00060f40) grid_graphic2_control_pane_ParamLimits

0xd11a,	// (0x00060f40) grid_graphic2_control_pane

0xd158,	// (0x00060f7e) grid_graphic2_pane_ParamLimits

0xd158,	// (0x00060f7e) grid_graphic2_pane

0xd1ce,	// (0x00060ff4) cell_graphic2_pane

0xb989,	// (0x0005f7af) main_comp_mode_pane

0xc309,	// (0x0006012f) list_ai3_gene_pane_ParamLimits

0xc6d1,	// (0x000604f7) bg_popup_window_pane_cp19_ParamLimits

0xc6dd,	// (0x00060503) bg_touch_area_indi_pane_ParamLimits

0xc6dd,	// (0x00060503) bg_touch_area_indi_pane

0xc6f3,	// (0x00060519) bg_touch_area_indi_pane_cp01_ParamLimits

0xc6f3,	// (0x00060519) bg_touch_area_indi_pane_cp01

0xc70b,	// (0x00060531) bg_touch_area_indi_pane_cp02_ParamLimits

0xc70b,	// (0x00060531) bg_touch_area_indi_pane_cp02

0xc725,	// (0x0006054b) bg_touch_area_indi_pane_cp03_ParamLimits

0xc725,	// (0x0006054b) bg_touch_area_indi_pane_cp03

0xc73f,	// (0x00060565) popup_slider_window_g1_ParamLimits

0xc75b,	// (0x00060581) popup_slider_window_g2_ParamLimits

0xc777,	// (0x0006059d) popup_slider_window_g3_ParamLimits

0xfcfb,	// (0x00063b21) popup_slider_window_g_ParamLimits

0xc7d3,	// (0x000605f9) popup_slider_window_t1_ParamLimits

0xc847,	// (0x0006066d) small_volume_slider_vertical_pane_ParamLimits

0xd1ce,	// (0x00060ff4) cell_graphic2_pane_ParamLimits

0xd220,	// (0x00061046) bg_button_pane_cp10_ParamLimits

0xd220,	// (0x00061046) bg_button_pane_cp10

0xd235,	// (0x0006105b) bg_button_pane_cp11_ParamLimits

0xd235,	// (0x0006105b) bg_button_pane_cp11

0xd24a,	// (0x00061070) graphic2_pages_pane_g1_ParamLimits

0xd24a,	// (0x00061070) graphic2_pages_pane_g1

0xd265,	// (0x0006108b) graphic2_pages_pane_g2_ParamLimits

0xd265,	// (0x0006108b) graphic2_pages_pane_g2

0x0001,

0xfdbf,	// (0x00063be5) graphic2_pages_pane_g_ParamLimits

0xfdbf,	// (0x00063be5) graphic2_pages_pane_g

0xd27d,	// (0x000610a3) graphic2_pages_pane_t1_ParamLimits

0xd27d,	// (0x000610a3) graphic2_pages_pane_t1

0xd293,	// (0x000610b9) cell_graphic2_control_pane_ParamLimits

0xd293,	// (0x000610b9) cell_graphic2_control_pane

0xd2b6,	// (0x000610dc) cell_graphic2_pane_g1_ParamLimits

0xd2b6,	// (0x000610dc) cell_graphic2_pane_g1

0xd2c3,	// (0x000610e9) cell_graphic2_pane_g2_ParamLimits

0xd2c3,	// (0x000610e9) cell_graphic2_pane_g2

0xd2d0,	// (0x000610f6) cell_graphic2_pane_g3_ParamLimits

0xd2d0,	// (0x000610f6) cell_graphic2_pane_g3

0xd2dd,	// (0x00061103) cell_graphic2_pane_g4_ParamLimits

0xd2dd,	// (0x00061103) cell_graphic2_pane_g4

0xd2ea,	// (0x00061110) cell_graphic2_pane_g5_ParamLimits

0xd2ea,	// (0x00061110) cell_graphic2_pane_g5

0x0004,

0xfdc4,	// (0x00063bea) cell_graphic2_pane_g_ParamLimits

0xfdc4,	// (0x00063bea) cell_graphic2_pane_g

0xd305,	// (0x0006112b) cell_graphic2_pane_t1_ParamLimits

0xd305,	// (0x0006112b) cell_graphic2_pane_t1

0x88a9,	// (0x0005c6cf) grid_highlight_pane_cp11_ParamLimits

0x88a9,	// (0x0005c6cf) grid_highlight_pane_cp11

0xeb90,	// (0x000629b6) bg_button_pane_cp05

0xd32e,	// (0x00061154) cell_graphic2_control_pane_g1

0xaffe,	// (0x0005ee24) bg_touch_area_indi_pane_g1

0xd356,	// (0x0006117c) aid_cmod_rocker_key_size

0xd360,	// (0x00061186) aid_cmode_itu_key_size

0xd36a,	// (0x00061190) main_cmode_video_pane

0xd374,	// (0x0006119a) main_comp_mode_itu_pane

0xd380,	// (0x000611a6) main_comp_mode_rocker_pane

0xd38c,	// (0x000611b2) cell_cmode_rocker_pane_ParamLimits

0xd38c,	// (0x000611b2) cell_cmode_rocker_pane

0xd3a0,	// (0x000611c6) cell_cmode_itu_pane_ParamLimits

0xd3a0,	// (0x000611c6) cell_cmode_itu_pane

0xf072,	// (0x00062e98) bg_button_pane_cp06_ParamLimits

0xf072,	// (0x00062e98) bg_button_pane_cp06

0xb279,	// (0x0005f09f) cell_cmode_rocker_pane_g1_ParamLimits

0xb279,	// (0x0005f09f) cell_cmode_rocker_pane_g1

0xc8ee,	// (0x00060714) cell_cmode_rocker_pane_g2_ParamLimits

0xc8ee,	// (0x00060714) cell_cmode_rocker_pane_g2

0x0001,

0xfdd4,	// (0x00063bfa) cell_cmode_rocker_pane_g_ParamLimits

0xfdd4,	// (0x00063bfa) cell_cmode_rocker_pane_g

0xb989,	// (0x0005f7af) bg_button_pane_cp07

0xd3b7,	// (0x000611dd) cell_cmode_itu_pane_g1

0xd3c0,	// (0x000611e6) cell_cmode_itu_pane_t1

0xd3ce,	// (0x000611f4) cell_cmode_itu_pane_t2

0x0001,

0xfdd9,	// (0x00063bff) cell_cmode_itu_pane_t

0xcb1c,	// (0x00060942) aid_touch_ctrl_left

0xcb24,	// (0x0006094a) aid_touch_ctrl_right

0xb989,	// (0x0005f7af) compa_mode_pane

0xd3dc,	// (0x00061202) aid_cmod_rocker_key_size_cp

0xd3e6,	// (0x0006120c) aid_cmode_itu_key_size_cp

0xd3f0,	// (0x00061216) compa_mode_pane_g1

0xd3f8,	// (0x0006121e) compa_mode_pane_g2

0xd400,	// (0x00061226) compa_mode_pane_g3

0x0002,

0xfdde,	// (0x00063c04) compa_mode_pane_g

0xd408,	// (0x0006122e) main_comp_mode_itu_pane_cp

0xd410,	// (0x00061236) main_comp_mode_rocker_pane_cp

0xd418,	// (0x0006123e) cell_cmode_itu_pane_cp_ParamLimits

0xd418,	// (0x0006123e) cell_cmode_itu_pane_cp

0xd42d,	// (0x00061253) cell_cmode_rocker_pane_cp_ParamLimits

0xd42d,	// (0x00061253) cell_cmode_rocker_pane_cp

0xf072,	// (0x00062e98) bg_button_pane_cp06_cp_ParamLimits

0xf072,	// (0x00062e98) bg_button_pane_cp06_cp

0xb279,	// (0x0005f09f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb279,	// (0x0005f09f) cell_cmode_rocker_pane_g1_cp

0xaffe,	// (0x0005ee24) cell_cmode_rocker_pane_g2_cp

0xb989,	// (0x0005f7af) bg_button_pane_cp07_cp

0xd43f,	// (0x00061265) cell_cmode_itu_pane_g1_cp

0xd448,	// (0x0006126e) cell_cmode_itu_pane_t1_cp

0xd448,	// (0x0006126e) cell_cmode_itu_pane_t2_cp

0x9f13,	// (0x0005dd39) settings_code_pane_cp2

0xb9f7,	// (0x0005f81d) bg_popup_window_pane_cp3_ParamLimits

0xed7e,	// (0x00062ba4) heading_pane_cp3_ParamLimits

0xed8a,	// (0x00062bb0) listscroll_popup_graphic_pane_ParamLimits

0x6d37,	// (0x0005ab5d) fep_hwr_aid_pane_ParamLimits

0x72aa,	// (0x0005b0d0) aid_touch_sctrl_top_ParamLimits

0x72c5,	// (0x0005b0eb) sctrl_sk_top_pane_g1_ParamLimits

0x6fa4,	// (0x0005adca) sctrl_sk_top_pane_g2_ParamLimits

0xfd14,	// (0x00063b3a) sctrl_sk_top_pane_g_ParamLimits

0x72d2,	// (0x0005b0f8) sctrl_sk_top_pane_t1_ParamLimits

0x72aa,	// (0x0005b0d0) aid_touch_sctrl_bottom_ParamLimits

0x72d2,	// (0x0005b0f8) sctrl_sk_bottom_pane_t1_ParamLimits

0xca62,	// (0x00060888) aid_area_touch_clock

0x74c9,	// (0x0005b2ef) aid_vkb2_area_top_pane_cell_ParamLimits

0x74c9,	// (0x0005b2ef) aid_vkb2_area_top_pane_cell

0x7614,	// (0x0005b43a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7614,	// (0x0005b43a) aid_vkb2_area_bottom_pane_cell

0xcfc7,	// (0x00060ded) popup_char_count_window

0xd456,	// (0x0006127c) popup_char_count_window_g1

0xd45f,	// (0x00061285) popup_char_count_window_g2

0xd468,	// (0x0006128e) popup_char_count_window_g3

0x0002,

0xfde5,	// (0x00063c0b) popup_char_count_window_g

0xd471,	// (0x00061297) popup_char_count_window_t1

0x7383,	// (0x0005b1a9) popup_fep_char_preview_window_ParamLimits

0x7383,	// (0x0005b1a9) popup_fep_char_preview_window

0x74e7,	// (0x0005b30d) vkb2_top_candi_pane_ParamLimits

0x74e7,	// (0x0005b30d) vkb2_top_candi_pane

0xd47f,	// (0x000612a5) cell_vkb2_top_candi_pane_ParamLimits

0xd47f,	// (0x000612a5) cell_vkb2_top_candi_pane

0x78ff,	// (0x0005b725) bg_popup_fep_char_preview_window_ParamLimits

0x78ff,	// (0x0005b725) bg_popup_fep_char_preview_window

0x790d,	// (0x0005b733) popup_fep_char_preview_window_t1_ParamLimits

0x790d,	// (0x0005b733) popup_fep_char_preview_window_t1

0xd4d0,	// (0x000612f6) bg_popup_fep_char_preview_window_g1

0xd4d8,	// (0x000612fe) bg_popup_fep_char_preview_window_g2

0xd4e0,	// (0x00061306) bg_popup_fep_char_preview_window_g3

0xd4e8,	// (0x0006130e) bg_popup_fep_char_preview_window_g4

0xd4f0,	// (0x00061316) bg_popup_fep_char_preview_window_g5

0x7947,	// (0x0005b76d) bg_popup_fep_char_preview_window_g6

0xd4f8,	// (0x0006131e) bg_popup_fep_char_preview_window_g7

0xd500,	// (0x00061326) bg_popup_fep_char_preview_window_g8

0xd508,	// (0x0006132e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdec,	// (0x00063c12) bg_popup_fep_char_preview_window_g

0x6fa4,	// (0x0005adca) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6fa4,	// (0x0005adca) cell_vkb2_top_candi_pane_g1

0x6fb2,	// (0x0005add8) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6fb2,	// (0x0005add8) cell_vkb2_top_candi_pane_g2

0xba72,	// (0x0005f898) cell_vkb2_top_candi_pane_g3_ParamLimits

0xba72,	// (0x0005f898) cell_vkb2_top_candi_pane_g3

0x794f,	// (0x0005b775) cell_vkb2_top_candi_pane_g4_ParamLimits

0x794f,	// (0x0005b775) cell_vkb2_top_candi_pane_g4

0xb798,	// (0x0005f5be) cell_vkb2_top_candi_pane_g5_ParamLimits

0xb798,	// (0x0005f5be) cell_vkb2_top_candi_pane_g5

0x7970,	// (0x0005b796) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7970,	// (0x0005b796) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdff,	// (0x00063c25) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdff,	// (0x00063c25) cell_vkb2_top_candi_pane_g

0x797e,	// (0x0005b7a4) cell_vkb2_top_candi_pane_t1

0x6b4b,	// (0x0005a971) aid_size_touch_slider_mark_ParamLimits

0x6b4b,	// (0x0005a971) aid_size_touch_slider_mark

0xd10a,	// (0x00060f30) grid_graphic2_catg_pane_ParamLimits

0xd10a,	// (0x00060f30) grid_graphic2_catg_pane

0xd1a8,	// (0x00060fce) popup_grid_graphic2_window_t1_ParamLimits

0xd1a8,	// (0x00060fce) popup_grid_graphic2_window_t1

0xd1ba,	// (0x00060fe0) popup_grid_graphic2_window_t2_ParamLimits

0xd1ba,	// (0x00060fe0) popup_grid_graphic2_window_t2

0x0001,

0xfdba,	// (0x00063be0) popup_grid_graphic2_window_t_ParamLimits

0xfdba,	// (0x00063be0) popup_grid_graphic2_window_t

0xeb90,	// (0x000629b6) bg_button_pane_cp05_ParamLimits

0xd32e,	// (0x00061154) cell_graphic2_control_pane_g1_ParamLimits

0xd510,	// (0x00061336) cell_graphic2_catg_pane_ParamLimits

0xd510,	// (0x00061336) cell_graphic2_catg_pane

0xb989,	// (0x0005f7af) bg_button_pane_cp12

0xd522,	// (0x00061348) cell_graphic2_catg_pane_g1

0xca2e,	// (0x00060854) cell_tb_ext_pane_t1_ParamLimits

0x7731,	// (0x0005b557) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7731,	// (0x0005b557) vkb2_top_cell_right_narrow_pane

0x7749,	// (0x0005b56f) vkb2_top_cell_right_wide_pane_ParamLimits

0x7749,	// (0x0005b56f) vkb2_top_cell_right_wide_pane

0x6d29,	// (0x0005ab4f) bg_vkb2_func_pane_ParamLimits

0x6d29,	// (0x0005ab4f) bg_vkb2_func_pane

0x77ba,	// (0x0005b5e0) vkb2_top_cell_left_pane_g1_ParamLimits

0x6d29,	// (0x0005ab4f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6d29,	// (0x0005ab4f) bg_vkb2_fuc_pane_cp03

0x7818,	// (0x0005b63e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x883d,	// (0x0005c663) bg_vkb2_func_pane_g1

0x8845,	// (0x0005c66b) bg_vkb2_func_pane_g2

0x8855,	// (0x0005c67b) bg_vkb2_func_pane_g3

0x884d,	// (0x0005c673) bg_vkb2_func_pane_g4

0x885d,	// (0x0005c683) bg_vkb2_func_pane_g5

0x8865,	// (0x0005c68b) bg_vkb2_func_pane_g6

0x886d,	// (0x0005c693) bg_vkb2_func_pane_g7

0x8875,	// (0x0005c69b) bg_vkb2_func_pane_g8

0x8835,	// (0x0005c65b) bg_vkb2_func_pane_g9

0x0008,

0xfe0c,	// (0x00063c32) bg_vkb2_func_pane_g

0x6d29,	// (0x0005ab4f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6d29,	// (0x0005ab4f) bg_vkb2_fuc_pane_cp01

0x77ba,	// (0x0005b5e0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x77ba,	// (0x0005b5e0) vkb2_top_cell_right_wide_pane_g1

0x6d29,	// (0x0005ab4f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6d29,	// (0x0005ab4f) bg_vkb2_fuc_pane_cp02

0x7818,	// (0x0005b63e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7818,	// (0x0005b63e) vkb2_top_cell_right_narrow_pane_g1

0xc64f,	// (0x00060475) aid_touch_area_decrease_ParamLimits

0xc64f,	// (0x00060475) aid_touch_area_decrease

0xc673,	// (0x00060499) aid_touch_area_increase_ParamLimits

0xc673,	// (0x00060499) aid_touch_area_increase

0xc67f,	// (0x000604a5) aid_touch_area_mute_ParamLimits

0xc67f,	// (0x000604a5) aid_touch_area_mute

0xc6a3,	// (0x000604c9) aid_touch_area_slider_ParamLimits

0xc6a3,	// (0x000604c9) aid_touch_area_slider

0xc793,	// (0x000605b9) popup_slider_window_g4_ParamLimits

0xc793,	// (0x000605b9) popup_slider_window_g4

0xc79f,	// (0x000605c5) popup_slider_window_g5_ParamLimits

0xc79f,	// (0x000605c5) popup_slider_window_g5

0xc7c1,	// (0x000605e7) popup_slider_window_g6_ParamLimits

0xc7c1,	// (0x000605e7) popup_slider_window_g6

0xc801,	// (0x00060627) popup_slider_window_t2_ParamLimits

0xc801,	// (0x00060627) popup_slider_window_t2

0x0001,

0xfd08,	// (0x00063b2e) popup_slider_window_t_ParamLimits

0xfd08,	// (0x00063b2e) popup_slider_window_t

0xc819,	// (0x0006063f) slider_pane_ParamLimits

0xc819,	// (0x0006063f) slider_pane

0xd52b,	// (0x00061351) slider_pane_g1_ParamLimits

0xd52b,	// (0x00061351) slider_pane_g1

0xd53f,	// (0x00061365) slider_pane_g2_ParamLimits

0xd53f,	// (0x00061365) slider_pane_g2

0xd555,	// (0x0006137b) slider_pane_g3_ParamLimits

0xd555,	// (0x0006137b) slider_pane_g3

0x0003,

0xfe1f,	// (0x00063c45) slider_pane_g_ParamLimits

0xfe1f,	// (0x00063c45) slider_pane_g

0x822e,	// (0x0005c054) popup_tb_float_extension_window_ParamLimits

0x822e,	// (0x0005c054) popup_tb_float_extension_window

0xd581,	// (0x000613a7) aid_size_cell_tb_float_ext

0xb989,	// (0x0005f7af) bg_popup_sub_window_cp28

0xd58d,	// (0x000613b3) grid_tb_float_ext_pane

0xd599,	// (0x000613bf) cell_tb_float_ext_pane_ParamLimits

0xd599,	// (0x000613bf) cell_tb_float_ext_pane

0xd5b5,	// (0x000613db) cell_tb_float_ext_pane_g1

0xd5be,	// (0x000613e4) grid_highlight_pane_cp12

0x6e7e,	// (0x0005aca4) cell_last_hwr_side_pane_ParamLimits

0x6e7e,	// (0x0005aca4) cell_last_hwr_side_pane

0xaffe,	// (0x0005ee24) cell_last_hwr_side_pane_g1

0xd5c7,	// (0x000613ed) cell_last_hwr_side_pane_g2

0x0001,

0xfe28,	// (0x00063c4e) cell_last_hwr_side_pane_g

0x76e0,	// (0x0005b506) vkb2_area_bottom_space_btn_pane_ParamLimits

0x76e0,	// (0x0005b506) vkb2_area_bottom_space_btn_pane

0x6fa4,	// (0x0005adca) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd07c,	// (0x00060ea2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x797e,	// (0x0005b7a4) cell_vkb2_top_candi_pane_t1_ParamLimits

0x799c,	// (0x0005b7c2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x799c,	// (0x0005b7c2) vkb2_area_bottom_space_btn_pane_g1

0x79d6,	// (0x0005b7fc) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x79d6,	// (0x0005b7fc) vkb2_area_bottom_space_btn_pane_g2

0x7a0c,	// (0x0005b832) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a0c,	// (0x0005b832) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2d,	// (0x00063c53) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2d,	// (0x00063c53) vkb2_area_bottom_space_btn_pane_g

0x6dee,	// (0x0005ac14) cel_fep_hwr_func_pane_ParamLimits

0x6dee,	// (0x0005ac14) cel_fep_hwr_func_pane

0x6e2a,	// (0x0005ac50) cell_hwr_side_button_pane_ParamLimits

0x6e2a,	// (0x0005ac50) cell_hwr_side_button_pane

0xca62,	// (0x00060888) aid_area_touch_clock_ParamLimits

0xeb90,	// (0x000629b6) bg_uniindi_top_pane_ParamLimits

0xca76,	// (0x0006089c) uniindi_top_pane_g1_ParamLimits

0xca8c,	// (0x000608b2) uniindi_top_pane_g2_ParamLimits

0xca98,	// (0x000608be) uniindi_top_pane_g3_ParamLimits

0xcaa9,	// (0x000608cf) uniindi_top_pane_g4_ParamLimits

0xfd40,	// (0x00063b66) uniindi_top_pane_g_ParamLimits

0xcab6,	// (0x000608dc) uniindi_top_pane_t1_ParamLimits

0xeb90,	// (0x000629b6) bg_vkb2_func_pane_cp01_ParamLimits

0xeb90,	// (0x000629b6) bg_vkb2_func_pane_cp01

0xd5d0,	// (0x000613f6) cel_fep_hwr_func_pane_g1_ParamLimits

0xd5d0,	// (0x000613f6) cel_fep_hwr_func_pane_g1

0xeb90,	// (0x000629b6) bg_vkb2_func_pane_cp02_ParamLimits

0xeb90,	// (0x000629b6) bg_vkb2_func_pane_cp02

0xd5d0,	// (0x000613f6) cell_hwr_side_button_pane_g1_ParamLimits

0xd5d0,	// (0x000613f6) cell_hwr_side_button_pane_g1

0x86b6,	// (0x0005c4dc) status_pane_g4_ParamLimits

0x86b6,	// (0x0005c4dc) status_pane_g4

0x86d0,	// (0x0005c4f6) status_pane_t1

0xad9d,	// (0x0005ebc3) form2_midp_gauge_slider_cont_pane

0xada5,	// (0x0005ebcb) form2_midp_gauge_slider_pane_t1_ParamLimits

0xadb7,	// (0x0005ebdd) form2_midp_gauge_slider_pane_t2_ParamLimits

0xadc9,	// (0x0005ebef) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x00063926) form2_midp_gauge_slider_pane_t_ParamLimits

0xaddb,	// (0x0005ec01) form2_midp_slider_pane_ParamLimits

0x7343,	// (0x0005b169) aid_size_cell_func_vkb2_ParamLimits

0x7343,	// (0x0005b169) aid_size_cell_func_vkb2

0xd56d,	// (0x00061393) slider_pane_g4_ParamLimits

0xd56d,	// (0x00061393) slider_pane_g4

0x7a56,	// (0x0005b87c) form2_midp_gauge_slider_pane_t2_cp01

0x7a64,	// (0x0005b88a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7a64,	// (0x0005b88a) form2_midp_gauge_slider_pane_t3_cp01

0x7a81,	// (0x0005b8a7) form2_midp_slider_pane_cp01

0xb989,	// (0x0005f7af) navi_smil_pane

0xd609,	// (0x0006142f) navi_smil_pane_g1

0xd611,	// (0x00061437) navi_smil_pane_t1

0xd5de,	// (0x00061404) form2_midp_slider_pane_g1

0xd5e7,	// (0x0006140d) form2_midp_slider_pane_g2

0xd5ef,	// (0x00061415) form2_midp_slider_pane_g3

0xd5de,	// (0x00061404) form2_midp_slider_pane_g4

0xd5f7,	// (0x0006141d) form2_midp_slider_pane_g5

0x0004,

0xfe36,	// (0x00063c5c) form2_midp_slider_pane_g

0x7a46,	// (0x0005b86c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a46,	// (0x0005b86c) vkb2_area_bottom_space_btn_pane_g4

0x84cd,	// (0x0005c2f3) lc0_navi_pane_ParamLimits

0x84cd,	// (0x0005c2f3) lc0_navi_pane

0x8549,	// (0x0005c36f) lc0_stat_indi_pane_ParamLimits

0x8549,	// (0x0005c36f) lc0_stat_indi_pane

0x8560,	// (0x0005c386) ls0_title_pane_ParamLimits

0x8560,	// (0x0005c386) ls0_title_pane

0xf072,	// (0x00062e98) bg_popup_sub_pane_cp14_ParamLimits

0xca49,	// (0x0006086f) list_uniindi_pane_ParamLimits

0xca55,	// (0x0006087b) uniindi_top_pane_ParamLimits

0xcaf4,	// (0x0006091a) list_single_uniindi_pane_g1_ParamLimits

0xcb07,	// (0x0006092d) list_single_uniindi_pane_t1_ParamLimits

0x7a8a,	// (0x0005b8b0) lc0_stat_clock_pane_ParamLimits

0x7a8a,	// (0x0005b8b0) lc0_stat_clock_pane

0xd61f,	// (0x00061445) lc0_stat_indi_pane_g1_ParamLimits

0xd61f,	// (0x00061445) lc0_stat_indi_pane_g1

0xd62c,	// (0x00061452) lc0_stat_indi_pane_g2_ParamLimits

0xd62c,	// (0x00061452) lc0_stat_indi_pane_g2

0x0001,

0xfe41,	// (0x00063c67) lc0_stat_indi_pane_g_ParamLimits

0xfe41,	// (0x00063c67) lc0_stat_indi_pane_g

0x7a97,	// (0x0005b8bd) lc0_uni_indicator_pane_ParamLimits

0x7a97,	// (0x0005b8bd) lc0_uni_indicator_pane

0xd639,	// (0x0006145f) ls0_title_pane_g1_ParamLimits

0xd639,	// (0x0006145f) ls0_title_pane_g1

0xd64d,	// (0x00061473) ls0_title_pane_t1_ParamLimits

0xd64d,	// (0x00061473) ls0_title_pane_t1

0x7aa4,	// (0x0005b8ca) lc0_uni_indicator_pane_g1_ParamLimits

0x7aa4,	// (0x0005b8ca) lc0_uni_indicator_pane_g1

0xd683,	// (0x000614a9) lc0_stat_clock_pane_t1

0xb989,	// (0x0005f7af) main_ai5_pane

0xd691,	// (0x000614b7) ai5_sk_pane_ParamLimits

0xd691,	// (0x000614b7) ai5_sk_pane

0xd69e,	// (0x000614c4) cell_ai5_widget_pane_ParamLimits

0xd69e,	// (0x000614c4) cell_ai5_widget_pane

0xdc7c,	// (0x00061aa2) aid_size_cell_widget_grid

0xdc8a,	// (0x00061ab0) bg_ai5_widget_pane_ParamLimits

0xdc8a,	// (0x00061ab0) bg_ai5_widget_pane

0xdcfe,	// (0x00061b24) cell_ai5_widget_pane_g2

0xdd0e,	// (0x00061b34) cell_ai5_widget_pane_g3

0xdd25,	// (0x00061b4b) cell_ai5_widget_pane_g4

0xdd31,	// (0x00061b57) cell_ai5_widget_pane_g5

0xdd3d,	// (0x00061b63) cell_ai5_widget_pane_g6

0xdd49,	// (0x00061b6f) cell_ai5_widget_pane_g7

0xdd91,	// (0x00061bb7) cell_ai5_widget_pane_t1_ParamLimits

0xdd91,	// (0x00061bb7) cell_ai5_widget_pane_t1

0xddae,	// (0x00061bd4) cell_ai5_widget_pane_t2_ParamLimits

0xddae,	// (0x00061bd4) cell_ai5_widget_pane_t2

0xddc6,	// (0x00061bec) cell_ai5_widget_pane_t3_ParamLimits

0xddc6,	// (0x00061bec) cell_ai5_widget_pane_t3

0xddde,	// (0x00061c04) cell_ai5_widget_pane_t4_ParamLimits

0xddde,	// (0x00061c04) cell_ai5_widget_pane_t4

0xddfb,	// (0x00061c21) cell_ai5_widget_pane_t5_ParamLimits

0xddfb,	// (0x00061c21) cell_ai5_widget_pane_t5

0xde1a,	// (0x00061c40) cell_ai5_widget_pane_t6_ParamLimits

0xde1a,	// (0x00061c40) cell_ai5_widget_pane_t6

0xde2c,	// (0x00061c52) cell_ai5_widget_pane_t7_ParamLimits

0xde2c,	// (0x00061c52) cell_ai5_widget_pane_t7

0xde45,	// (0x00061c6b) cell_ai5_widget_pane_t8_ParamLimits

0xde45,	// (0x00061c6b) cell_ai5_widget_pane_t8

0x0009,

0xfe5b,	// (0x00063c81) cell_ai5_widget_pane_t_ParamLimits

0xfe5b,	// (0x00063c81) cell_ai5_widget_pane_t

0xde99,	// (0x00061cbf) grid_ai5_widget_pane

0xf072,	// (0x00062e98) highlight_cell_ai5_widget_pane_ParamLimits

0xf072,	// (0x00062e98) highlight_cell_ai5_widget_pane

0xdead,	// (0x00061cd3) ai5_sk_left_pane

0xdeb7,	// (0x00061cdd) ai5_sk_middle_pane

0xdec1,	// (0x00061ce7) ai5_sk_right_pane

0xdecb,	// (0x00061cf1) bg_ai5_widget_pane_g1_ParamLimits

0xdecb,	// (0x00061cf1) bg_ai5_widget_pane_g1

0xded7,	// (0x00061cfd) bg_ai5_widget_pane_g2_ParamLimits

0xded7,	// (0x00061cfd) bg_ai5_widget_pane_g2

0xdee3,	// (0x00061d09) bg_ai5_widget_pane_g3_ParamLimits

0xdee3,	// (0x00061d09) bg_ai5_widget_pane_g3

0xdeef,	// (0x00061d15) bg_ai5_widget_pane_g4_ParamLimits

0xdeef,	// (0x00061d15) bg_ai5_widget_pane_g4

0xdefb,	// (0x00061d21) bg_ai5_widget_pane_g5_ParamLimits

0xdefb,	// (0x00061d21) bg_ai5_widget_pane_g5

0xdf07,	// (0x00061d2d) bg_ai5_widget_pane_g6_ParamLimits

0xdf07,	// (0x00061d2d) bg_ai5_widget_pane_g6

0xdf13,	// (0x00061d39) bg_ai5_widget_pane_g7_ParamLimits

0xdf13,	// (0x00061d39) bg_ai5_widget_pane_g7

0xdf1f,	// (0x00061d45) bg_ai5_widget_pane_g8_ParamLimits

0xdf1f,	// (0x00061d45) bg_ai5_widget_pane_g8

0xdf2b,	// (0x00061d51) bg_ai5_widget_pane_g9_ParamLimits

0xdf2b,	// (0x00061d51) bg_ai5_widget_pane_g9

0x0008,

0xfe70,	// (0x00063c96) bg_ai5_widget_pane_g_ParamLimits

0xfe70,	// (0x00063c96) bg_ai5_widget_pane_g

0xdf61,	// (0x00061d87) cell_shortcut_ai5_widget_pane_ParamLimits

0xdf61,	// (0x00061d87) cell_shortcut_ai5_widget_pane

0x361e,	// (0x00057444) bg_cell_shortcut_ai5_widget_pane

0xdf74,	// (0x00061d9a) cell_grid_ai5_widget_pane_g1

0xdf7d,	// (0x00061da3) highlight_cell_shortcut_ai5_widget_pane

0x883d,	// (0x0005c663) ai5_sk_left_pane_g1

0xdf85,	// (0x00061dab) ai5_sk_left_pane_g2

0xdf8d,	// (0x00061db3) ai5_sk_left_pane_g3

0xdf95,	// (0x00061dbb) ai5_sk_left_pane_g4

0x0003,

0xfe83,	// (0x00063ca9) ai5_sk_left_pane_g

0xdf9d,	// (0x00061dc3) ai5_sk_left_pane_t1

0x8845,	// (0x0005c66b) ai5_sk_right_pane_g1

0xdfab,	// (0x00061dd1) ai5_sk_right_pane_g2

0xdfb3,	// (0x00061dd9) ai5_sk_right_pane_g3

0xdfbb,	// (0x00061de1) ai5_sk_right_pane_g4

0x0003,

0xfe8c,	// (0x00063cb2) ai5_sk_right_pane_g

0xdfc3,	// (0x00061de9) ai5_sk_right_pane_t1

0x8845,	// (0x0005c66b) ai5_sk_middle_pane_g1

0x883d,	// (0x0005c663) ai5_sk_middle_pane_g2

0x885d,	// (0x0005c683) ai5_sk_middle_pane_g3

0xdfb3,	// (0x00061dd9) ai5_sk_middle_pane_g4

0xdf8d,	// (0x00061db3) ai5_sk_middle_pane_g5

0xdfd1,	// (0x00061df7) ai5_sk_middle_pane_g6

0xdfd9,	// (0x00061dff) ai5_sk_middle_pane_g7

0x0006,

0xfe95,	// (0x00063cbb) ai5_sk_middle_pane_g

0x834f,	// (0x0005c175) aid_touch_area_size_lc0_ParamLimits

0x834f,	// (0x0005c175) aid_touch_area_size_lc0

0x6fd3,	// (0x0005adf9) cell_hwr_candidate_pane_t1_ParamLimits

0x836d,	// (0x0005c193) aid_touch_navi_pane

0x8660,	// (0x0005c486) status_dt_navi_pane_ParamLimits

0x8660,	// (0x0005c486) status_dt_navi_pane

0x866d,	// (0x0005c493) status_dt_sta_pane_ParamLimits

0x866d,	// (0x0005c493) status_dt_sta_pane

0xdfe1,	// (0x00061e07) dt_sta_controll_pane

0xdfee,	// (0x00061e14) dt_sta_indi_pane

0xdfff,	// (0x00061e25) dt_sta_title_pane

0xeb90,	// (0x000629b6) bg_dt_sta_indi_pane_ParamLimits

0xeb90,	// (0x000629b6) bg_dt_sta_indi_pane

0xe012,	// (0x00061e38) dt_sta_battery_pane

0xe01a,	// (0x00061e40) dt_sta_indi_pane_g1

0xe023,	// (0x00061e49) dt_sta_indi_pane_g2

0xe02c,	// (0x00061e52) dt_sta_indi_pane_g3

0x0002,

0xfea4,	// (0x00063cca) dt_sta_indi_pane_g

0xe035,	// (0x00061e5b) dt_sta_signal_pane

0xf072,	// (0x00062e98) bg_dt_sta_title_pane_ParamLimits

0xf072,	// (0x00062e98) bg_dt_sta_title_pane

0xe03e,	// (0x00061e64) dt_sta_title_pane_g1

0xe046,	// (0x00061e6c) dt_sta_title_pane_t1_ParamLimits

0xe046,	// (0x00061e6c) dt_sta_title_pane_t1

0xb989,	// (0x0005f7af) bg_dt_sta_control_pane

0xe05b,	// (0x00061e81) dt_sta_controll_pane_g1

0xe064,	// (0x00061e8a) bg_dt_sta_title_pane_g1

0xe06d,	// (0x00061e93) bg_dt_sta_title_pane_g2

0xe076,	// (0x00061e9c) bg_dt_sta_title_pane_g3

0x0002,

0xfeab,	// (0x00063cd1) bg_dt_sta_title_pane_g

0xaffe,	// (0x0005ee24) bg_dt_sta_indi_pane_g1

0xe07f,	// (0x00061ea5) dt_sta_signal_pane_g1

0xe087,	// (0x00061ead) dt_sta_signal_pane_g2

0x0001,

0xfeb2,	// (0x00063cd8) dt_sta_signal_pane_g

0xe08f,	// (0x00061eb5) dt_sta_battery_pane_g1

0xe098,	// (0x00061ebe) dt_sta_battery_pane_t1

0xaffe,	// (0x0005ee24) bg_dt_sta_control_pane_g1

0x117c,	// (0x00054fa2) fep_china_uni_eep_pane

0x1184,	// (0x00054faa) fep_china_uni_entry_pane_ParamLimits

0x1194,	// (0x00054fba) popup_fep_china_uni_window_g1_ParamLimits

0x11a4,	// (0x00054fca) popup_fep_china_uni_window_g2_ParamLimits

0x11a4,	// (0x00054fca) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0006354e) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0006354e) popup_fep_china_uni_window_g

0xe0a7,	// (0x00061ecd) fep_china_uni_eep_pane_g1

0xe0af,	// (0x00061ed5) fep_china_uni_eep_pane_t1

0xd600,	// (0x00061426) aid_touch_area_size_smil_player

0x84c5,	// (0x0005c2eb) lc0_clock_pane

0x86c4,	// (0x0005c4ea) status_pane_g5_ParamLimits

0x86c4,	// (0x0005c4ea) status_pane_g5

0x7eb3,	// (0x0005bcd9) popup_keymap_window

0x8682,	// (0x0005c4a8) status_icon_pane

0xdd0e,	// (0x00061b34) cell_ai5_widget_pane_g3_ParamLimits

0xdd25,	// (0x00061b4b) cell_ai5_widget_pane_g4_ParamLimits

0xdd31,	// (0x00061b57) cell_ai5_widget_pane_g5_ParamLimits

0xdd55,	// (0x00061b7b) cell_ai5_widget_pane_g8_ParamLimits

0xdd55,	// (0x00061b7b) cell_ai5_widget_pane_g8

0xdd69,	// (0x00061b8f) cell_ai5_widget_pane_g9_ParamLimits

0xdd69,	// (0x00061b8f) cell_ai5_widget_pane_g9

0xdd7d,	// (0x00061ba3) cell_ai5_widget_pane_g10_ParamLimits

0xdd7d,	// (0x00061ba3) cell_ai5_widget_pane_g10

0xe0be,	// (0x00061ee4) status_icon_pane_g1

0xb989,	// (0x0005f7af) bg_popup_sub_pane_cp13

0xe0c6,	// (0x00061eec) popup_keymap_window_t1

0x66c7,	// (0x0005a4ed) control_pane_g6_ParamLimits

0x66c7,	// (0x0005a4ed) control_pane_g6

0x66d4,	// (0x0005a4fa) control_pane_g7_ParamLimits

0x66d4,	// (0x0005a4fa) control_pane_g7

0x66e1,	// (0x0005a507) control_pane_g8_ParamLimits

0x66e1,	// (0x0005a507) control_pane_g8

0xdfe1,	// (0x00061e07) dt_sta_controll_pane_ParamLimits

0xdfee,	// (0x00061e14) dt_sta_indi_pane_ParamLimits

0xdfff,	// (0x00061e25) dt_sta_title_pane_ParamLimits

0xefb4,	// (0x00062dda) aid_size_touch_scroll_bar_cale

0x4ff8,	// (0x00058e1e) popup_discreet_window_ParamLimits

0x4ff8,	// (0x00058e1e) popup_discreet_window

0x5086,	// (0x00058eac) popup_sk_window

0x8e85,	// (0x0005ccab) bg_popup_sub_pane_cp28_ParamLimits

0x8e85,	// (0x0005ccab) bg_popup_sub_pane_cp28

0xe0d4,	// (0x00061efa) popup_discreet_window_g1_ParamLimits

0xe0d4,	// (0x00061efa) popup_discreet_window_g1

0xe0f4,	// (0x00061f1a) popup_discreet_window_t1_ParamLimits

0xe0f4,	// (0x00061f1a) popup_discreet_window_t1

0xe112,	// (0x00061f38) popup_discreet_window_t2_ParamLimits

0xe112,	// (0x00061f38) popup_discreet_window_t2

0x0002,

0xfeb7,	// (0x00063cdd) popup_discreet_window_t_ParamLimits

0xfeb7,	// (0x00063cdd) popup_discreet_window_t

0x7ab7,	// (0x0005b8dd) popup_sk_window_g1

0x7ac1,	// (0x0005b8e7) popup_sk_window_g2

0x0001,

0xfebe,	// (0x00063ce4) popup_sk_window_g

0x7acb,	// (0x0005b8f1) popup_sk_window_t1

0x7adb,	// (0x0005b901) popup_sk_window_t1_copy1

0xdcfe,	// (0x00061b24) cell_ai5_widget_pane_g2_ParamLimits

0xde57,	// (0x00061c7d) cell_ai5_widget_pane_t9_ParamLimits

0xde57,	// (0x00061c7d) cell_ai5_widget_pane_t9

0xb989,	// (0x0005f7af) main_fep_fshwr2_pane

0x7ae9,	// (0x0005b90f) aid_fshwr2_btn_pane

0x7af5,	// (0x0005b91b) aid_fshwr2_syb_pane

0x7b06,	// (0x0005b92c) aid_fshwr2_txt_pane

0x7b12,	// (0x0005b938) fshwr2_func_candi_pane

0x7b26,	// (0x0005b94c) fshwr2_hwr_syb_pane

0x7b39,	// (0x0005b95f) fshwr2_icf_pane

0xb989,	// (0x0005f7af) fshwr2_icf_bg_pane

0xe164,	// (0x00061f8a) fshwr2_icf_pane_t1_ParamLimits

0xe164,	// (0x00061f8a) fshwr2_icf_pane_t1

0x10fa,	// (0x00054f20) fshwr2_func_candi_pane_g1

0xe17c,	// (0x00061fa2) fshwr2_func_candi_row_pane_ParamLimits

0xe17c,	// (0x00061fa2) fshwr2_func_candi_row_pane

0xe18c,	// (0x00061fb2) cell_fshwr2_syb_pane_ParamLimits

0xe18c,	// (0x00061fb2) cell_fshwr2_syb_pane

0xb279,	// (0x0005f09f) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb279,	// (0x0005f09f) fshwr2_hwr_syb_pane_g1

0xb989,	// (0x0005f7af) bg_popup_call_pane_cp01

0xe1a6,	// (0x00061fcc) fshwr2_func_candi_cell_pane_ParamLimits

0xe1a6,	// (0x00061fcc) fshwr2_func_candi_cell_pane

0xe1ce,	// (0x00061ff4) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe1ce,	// (0x00061ff4) fshwr2_func_candi_cell_bg_pane

0xe1da,	// (0x00062000) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe1da,	// (0x00062000) fshwr2_func_candi_cell_pane_g1

0xe1fa,	// (0x00062020) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe1fa,	// (0x00062020) fshwr2_func_candi_cell_pane_t1

0xb989,	// (0x0005f7af) bg_button_pane_cp08

0x361e,	// (0x00057444) cell_fshwr2_syb_bg_pane

0xe20d,	// (0x00062033) cell_fshwr2_syb_bg_pane_g1

0xe215,	// (0x0006203b) cell_fshwr2_syb_bg_pane_t1

0xf072,	// (0x00062e98) main_tmo_pane

0x9b49,	// (0x0005d96f) uni_indicator_pane_g1_ParamLimits

0x9b60,	// (0x0005d986) uni_indicator_pane_g2_ParamLimits

0x9b76,	// (0x0005d99c) uni_indicator_pane_g3_ParamLimits

0x9b8b,	// (0x0005d9b1) uni_indicator_pane_g4_ParamLimits

0x9b8b,	// (0x0005d9b1) uni_indicator_pane_g4

0x9b9f,	// (0x0005d9c5) uni_indicator_pane_g5_ParamLimits

0x9b9f,	// (0x0005d9c5) uni_indicator_pane_g5

0x9b9f,	// (0x0005d9c5) uni_indicator_pane_g6_ParamLimits

0x9b9f,	// (0x0005d9c5) uni_indicator_pane_g6

0xf92c,	// (0x00063752) uni_indicator_pane_g_ParamLimits

0xc61f,	// (0x00060445) popup_tmo_note_window_ParamLimits

0xc61f,	// (0x00060445) popup_tmo_note_window

0x7325,	// (0x0005b14b) fshwr2_bg_pane

0xe1eb,	// (0x00062011) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe1eb,	// (0x00062011) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec3,	// (0x00063ce9) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec3,	// (0x00063ce9) fshwr2_func_candi_cell_pane_g

0xaffe,	// (0x0005ee24) bg_popup_window_pane_cp01

0xe224,	// (0x0006204a) bg_popup_window_pane_g1_cp01

0xe22d,	// (0x00062053) bg_popup_window_pane_cp22_ParamLimits

0xe22d,	// (0x00062053) bg_popup_window_pane_cp22

0xe23b,	// (0x00062061) listscroll_tmo_link_pane_ParamLimits

0xe23b,	// (0x00062061) listscroll_tmo_link_pane

0xe27b,	// (0x000620a1) popup_tmo_note_window_g1_ParamLimits

0xe27b,	// (0x000620a1) popup_tmo_note_window_g1

0xe288,	// (0x000620ae) tmo_note_info_pane_ParamLimits

0xe288,	// (0x000620ae) tmo_note_info_pane

0xe2a2,	// (0x000620c8) list_tmo_note_info_pane_g1_ParamLimits

0xe2a2,	// (0x000620c8) list_tmo_note_info_pane_g1

0xe2b9,	// (0x000620df) list_tmo_note_info_pane_g2_ParamLimits

0xe2b9,	// (0x000620df) list_tmo_note_info_pane_g2

0x0001,

0xfec8,	// (0x00063cee) list_tmo_note_info_pane_g_ParamLimits

0xfec8,	// (0x00063cee) list_tmo_note_info_pane_g

0xe2d5,	// (0x000620fb) list_tmo_note_info_text_pane_ParamLimits

0xe2d5,	// (0x000620fb) list_tmo_note_info_text_pane

0xe35a,	// (0x00062180) list_tmo_link_pane

0xe367,	// (0x0006218d) scroll_pane_cp20

0xe374,	// (0x0006219a) list_single_tmo_link_pane_ParamLimits

0xe374,	// (0x0006219a) list_single_tmo_link_pane

0xe384,	// (0x000621aa) list_single_tmo_link_pane_t1

0xe392,	// (0x000621b8) list_tmo_note_info_text_pane_t1_ParamLimits

0xe392,	// (0x000621b8) list_tmo_note_info_text_pane_t1

0x5b92,	// (0x000599b8) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5b92,	// (0x000599b8) aid_size_touch_scroll_bar_cp01

0x5acf,	// (0x000598f5) aid_size_touch_slider_marker

0x506e,	// (0x00058e94) popup_settings_window_ParamLimits

0x506e,	// (0x00058e94) popup_settings_window

0x3672,	// (0x00057498) popup_candi_list_indi_window

0x836d,	// (0x0005c193) aid_touch_navi_pane_ParamLimits

0x727e,	// (0x0005b0a4) rs_clock_indi_pane

0x7287,	// (0x0005b0ad) sctrl_sk_bottom_pane_ParamLimits

0x7298,	// (0x0005b0be) sctrl_sk_top_pane_ParamLimits

0x739d,	// (0x0005b1c3) popup_fep_tooltip_window

0xdc7c,	// (0x00061aa2) aid_size_cell_widget_grid_ParamLimits

0xdce9,	// (0x00061b0f) cell_ai5_widget_pane_g1_ParamLimits

0xdce9,	// (0x00061b0f) cell_ai5_widget_pane_g1

0xdd3d,	// (0x00061b63) cell_ai5_widget_pane_g6_ParamLimits

0xdd49,	// (0x00061b6f) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe46,	// (0x00063c6c) cell_ai5_widget_pane_g_ParamLimits

0xfe46,	// (0x00063c6c) cell_ai5_widget_pane_g

0xde7b,	// (0x00061ca1) cell_ai5_widget_pane_t10_ParamLimits

0xde7b,	// (0x00061ca1) cell_ai5_widget_pane_t10

0xde99,	// (0x00061cbf) grid_ai5_widget_pane_ParamLimits

0xdf37,	// (0x00061d5d) cell_contacts_ai5_widget_pane_ParamLimits

0xdf37,	// (0x00061d5d) cell_contacts_ai5_widget_pane

0xe127,	// (0x00061f4d) popup_discreet_window_t3_ParamLimits

0xe127,	// (0x00061f4d) popup_discreet_window_t3

0x7b4e,	// (0x0005b974) popup_fshwr2_char_preview_window_ParamLimits

0x7b4e,	// (0x0005b974) popup_fshwr2_char_preview_window

0xe2f3,	// (0x00062119) tmo_note_info_pane_t1

0xe308,	// (0x0006212e) tmo_note_info_pane_t2

0xe321,	// (0x00062147) tmo_note_info_pane_t3

0xe336,	// (0x0006215c) tmo_note_info_pane_t4

0xe348,	// (0x0006216e) tmo_note_info_pane_t5

0x0004,

0xfecd,	// (0x00063cf3) tmo_note_info_pane_t

0xe35a,	// (0x00062180) list_tmo_link_pane_ParamLimits

0xe367,	// (0x0006218d) scroll_pane_cp20_ParamLimits

0xb989,	// (0x0005f7af) bg_popup_fep_char_preview_window_cp01

0xe3ab,	// (0x000621d1) popup_fshwr2_char_preview_window_t1

0xe3b9,	// (0x000621df) popup_candi_list_indi_window_g1

0xe3c2,	// (0x000621e8) bg_cell_contacts_ai5_widget_pane

0xe3ce,	// (0x000621f4) cell_contacts_ai5_widget_pane_g1

0xe3e2,	// (0x00062208) cell_contacts_ai5_widget_pane_g2

0xe3ee,	// (0x00062214) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed8,	// (0x00063cfe) cell_contacts_ai5_widget_pane_g

0xe401,	// (0x00062227) cell_contacts_ai5_widget_pane_t1

0xf072,	// (0x00062e98) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe47b,	// (0x000622a1) settings_container_pane

0x361e,	// (0x00057444) listscroll_set_pane_copy1

0xa719,	// (0x0005e53f) scroll_pane_cp121_copy1

0xe487,	// (0x000622ad) set_content_pane_copy1

0xe48f,	// (0x000622b5) aid_height_set_list_copy1_ParamLimits

0xe48f,	// (0x000622b5) aid_height_set_list_copy1

0x9d9f,	// (0x0005dbc5) aid_size_parent_copy1_ParamLimits

0x9d9f,	// (0x0005dbc5) aid_size_parent_copy1

0xe49b,	// (0x000622c1) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe49b,	// (0x000622c1) button_value_adjust_pane_cp6_copy1

0x7cf4,	// (0x0005bb1a) list_highlight_pane_cp2_copy1_ParamLimits

0x7cf4,	// (0x0005bb1a) list_highlight_pane_cp2_copy1

0xe4af,	// (0x000622d5) list_set_pane_copy1_ParamLimits

0xe4af,	// (0x000622d5) list_set_pane_copy1

0xe416,	// (0x0006223c) main_pane_set_t1_copy1_ParamLimits

0xe416,	// (0x0006223c) main_pane_set_t1_copy1

0xe450,	// (0x00062276) main_pane_set_t2_copy1_ParamLimits

0xe450,	// (0x00062276) main_pane_set_t2_copy1

0xe576,	// (0x0006239c) main_pane_set_t3_copy1

0xe584,	// (0x000623aa) main_pane_set_t4_copy1

0xe46f,	// (0x00062295) set_content_pane_g1_copy1_ParamLimits

0xe46f,	// (0x00062295) set_content_pane_g1_copy1

0xe592,	// (0x000623b8) setting_code_pane_copy1

0xe59a,	// (0x000623c0) setting_slider_graphic_pane_copy1

0xe59a,	// (0x000623c0) setting_slider_pane_copy1

0xe59a,	// (0x000623c0) setting_text_pane_copy1

0xe59a,	// (0x000623c0) setting_volume_pane_copy1

0xe592,	// (0x000623b8) settings_code_pane_cp2_copy1

0xe5a2,	// (0x000623c8) settings_code_pane_cp_copy1_ParamLimits

0xe5a2,	// (0x000623c8) settings_code_pane_cp_copy1

0x7b66,	// (0x0005b98c) volume_set_pane_copy1

0xe5b6,	// (0x000623dc) volume_set_pane_g10_copy1

0xe5c2,	// (0x000623e8) volume_set_pane_g1_copy1

0xe5cc,	// (0x000623f2) volume_set_pane_g2_copy1

0xe5d6,	// (0x000623fc) volume_set_pane_g3_copy1

0xe5e0,	// (0x00062406) volume_set_pane_g4_copy1

0xe5ea,	// (0x00062410) volume_set_pane_g5_copy1

0xe5f4,	// (0x0006241a) volume_set_pane_g6_copy1

0xe5fe,	// (0x00062424) volume_set_pane_g7_copy1

0xe608,	// (0x0006242e) volume_set_pane_g8_copy1

0xe612,	// (0x00062438) volume_set_pane_g9_copy1

0xb9f7,	// (0x0005f81d) bg_set_opt_pane_cp_copy1_ParamLimits

0xb9f7,	// (0x0005f81d) bg_set_opt_pane_cp_copy1

0x7b72,	// (0x0005b998) setting_slider_pane_t1_copy1_ParamLimits

0x7b72,	// (0x0005b998) setting_slider_pane_t1_copy1

0x7b90,	// (0x0005b9b6) setting_slider_pane_t2_copy1_ParamLimits

0x7b90,	// (0x0005b9b6) setting_slider_pane_t2_copy1

0x7baa,	// (0x0005b9d0) setting_slider_pane_t3_copy1_ParamLimits

0x7baa,	// (0x0005b9d0) setting_slider_pane_t3_copy1

0x7bc2,	// (0x0005b9e8) slider_set_pane_copy1_ParamLimits

0x7bc2,	// (0x0005b9e8) slider_set_pane_copy1

0xf0cd,	// (0x00062ef3) set_opt_bg_pane_g1_copy2

0xf0d5,	// (0x00062efb) set_opt_bg_pane_g2_copy2

0xe61c,	// (0x00062442) set_opt_bg_pane_g3_copy2

0xf0e5,	// (0x00062f0b) set_opt_bg_pane_g4_copy2

0xf0ed,	// (0x00062f13) set_opt_bg_pane_g5_copy2

0xf0f5,	// (0x00062f1b) set_opt_bg_pane_g6_copy2

0xe626,	// (0x0006244c) set_opt_bg_pane_g7_copy2

0xe630,	// (0x00062456) set_opt_bg_pane_g8_copy2

0xe63a,	// (0x00062460) set_opt_bg_pane_g9_copy2

0xe644,	// (0x0006246a) aid_size_touch_slider_mark_copy1_ParamLimits

0xe644,	// (0x0006246a) aid_size_touch_slider_mark_copy1

0xe658,	// (0x0006247e) slider_set_pane_g1_copy1

0xe661,	// (0x00062487) slider_set_pane_g2_copy1

0xdc30,	// (0x00061a56) slider_set_pane_g3_copy1_ParamLimits

0xdc30,	// (0x00061a56) slider_set_pane_g3_copy1

0xdc44,	// (0x00061a6a) slider_set_pane_g4_copy1_ParamLimits

0xdc44,	// (0x00061a6a) slider_set_pane_g4_copy1

0xdc5c,	// (0x00061a82) slider_set_pane_g5_copy1_ParamLimits

0xdc5c,	// (0x00061a82) slider_set_pane_g5_copy1

0xdc30,	// (0x00061a56) slider_set_pane_g6_copy1_ParamLimits

0xdc30,	// (0x00061a56) slider_set_pane_g6_copy1

0xe669,	// (0x0006248f) slider_set_pane_g7_copy1_ParamLimits

0xe669,	// (0x0006248f) slider_set_pane_g7_copy1

0xb99d,	// (0x0005f7c3) bg_set_opt_pane_cp2_copy1

0xe67f,	// (0x000624a5) setting_slider_graphic_pane_g1_copy1

0xe688,	// (0x000624ae) setting_slider_graphic_pane_t1_copy1

0xe698,	// (0x000624be) setting_slider_graphic_pane_t2_copy1

0xe6a8,	// (0x000624ce) slider_set_pane_cp_copy1

0xe6b8,	// (0x000624de) input_focus_pane_cp1_copy1

0xe6c1,	// (0x000624e7) list_set_text_pane_copy1

0xe6c9,	// (0x000624ef) setting_text_pane_g1_copy1

0x324c,	// (0x00057072) set_text_pane_t1_copy1

0xe6b8,	// (0x000624de) input_focus_pane_cp2_copy1

0xe6c9,	// (0x000624ef) setting_code_pane_g1_copy1

0xe6d2,	// (0x000624f8) setting_code_pane_t1_copy1

0xe6e0,	// (0x00062506) list_set_graphic_pane_copy1

0xb99d,	// (0x0005f7c3) bg_set_opt_pane_cp4_copy1

0x626e,	// (0x0005a094) list_set_graphic_pane_g1_copy1_ParamLimits

0x626e,	// (0x0005a094) list_set_graphic_pane_g1_copy1

0xe6f2,	// (0x00062518) list_set_graphic_pane_g2_copy1

0x6286,	// (0x0005a0ac) list_set_graphic_pane_t1_copy1_ParamLimits

0x6286,	// (0x0005a0ac) list_set_graphic_pane_t1_copy1

0xaffe,	// (0x0005ee24) rs_clock_indi_pane_g1

0xe6fa,	// (0x00062520) rs_clock_indi_pane_t1

0xe708,	// (0x0006252e) rs_indi_pane

0xe710,	// (0x00062536) rs_indi_pane_g1

0xe719,	// (0x0006253f) rs_indi_pane_g2

0xe722,	// (0x00062548) rs_indi_pane_g3

0x0002,

0xfedf,	// (0x00063d05) rs_indi_pane_g

0x361e,	// (0x00057444) bg_popup_preview_window_pane_cp03

0xe72b,	// (0x00062551) popup_fep_tooltip_window_t1

0xbdc7,	// (0x0005fbed) popup_note2_window_g2_ParamLimits

0xbdc7,	// (0x0005fbed) popup_note2_window_g2

0x0001,

0xfc78,	// (0x00063a9e) popup_note2_window_g_ParamLimits

0xfc78,	// (0x00063a9e) popup_note2_window_g

0xc2cf,	// (0x000600f5) bg_popup_sub_pane_cp11_ParamLimits

0xc2dc,	// (0x00060102) cell_ai3_links_pane_g1_ParamLimits

0xc2f3,	// (0x00060119) cell_ai3_links_pane_t1

0x324c,	// (0x00057072) set_text_pane_t1_copy1_ParamLimits

0x62fa,	// (0x0005a120) cell_graphic_popup_pane_cp2_ParamLimits

0x62fa,	// (0x0005a120) cell_graphic_popup_pane_cp2

0xe739,	// (0x0006255f) cell_graphic_popup_pane_g1_cp2

0xedc7,	// (0x00062bed) cell_graphic_popup_pane_g2_cp2

0xe741,	// (0x00062567) cell_graphic_popup_pane_g3_cp2

0xe749,	// (0x0006256f) cell_graphic_popup_pane_t2_cp2

0xedd8,	// (0x00062bfe) grid_highlight_pane_cp3_cp2

0xf376,	// (0x0006319c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf072,	// (0x00062e98) main_tmo_pane_ParamLimits

0xc613,	// (0x00060439) popup_tmo_big_image_note_window

0xdcd8,	// (0x00061afe) cell_ai5_widget_list_pane

0xdce0,	// (0x00061b06) cell_ai5_widget_lrg_icon_pane

0xe2f3,	// (0x00062119) tmo_note_info_pane_t1_ParamLimits

0xe308,	// (0x0006212e) tmo_note_info_pane_t2_ParamLimits

0xe321,	// (0x00062147) tmo_note_info_pane_t3_ParamLimits

0xe336,	// (0x0006215c) tmo_note_info_pane_t4_ParamLimits

0xe348,	// (0x0006216e) tmo_note_info_pane_t5_ParamLimits

0xfecd,	// (0x00063cf3) tmo_note_info_pane_t_ParamLimits

0xe47b,	// (0x000622a1) settings_container_pane_ParamLimits

0xe6b0,	// (0x000624d6) indicator_popup_pane_cp5

0xe6b0,	// (0x000624d6) indicator_popup_pane_cp6

0xe6e0,	// (0x00062506) list_set_graphic_pane_copy1_ParamLimits

0xb989,	// (0x0005f7af) bg_popup_window_pane_cp23

0xe757,	// (0x0006257d) popup_tmo_big_image_note_window_g1

0xe763,	// (0x00062589) popup_tmo_big_image_note_window_t1

0xe773,	// (0x00062599) popup_tmo_big_image_note_window_t2

0xe783,	// (0x000625a9) popup_tmo_big_image_note_window_t3

0x0002,

0xfee6,	// (0x00063d0c) popup_tmo_big_image_note_window_t

0xaffe,	// (0x0005ee24) cell_ai5_widget_lrg_icon_pane_g1

0xe793,	// (0x000625b9) cell_ai5_widget_lrg_icon_pane_t1

0xe7a1,	// (0x000625c7) cell_ai5_widget_list_row_pane_ParamLimits

0xe7a1,	// (0x000625c7) cell_ai5_widget_list_row_pane

0xe7ba,	// (0x000625e0) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe7ba,	// (0x000625e0) cell_ai5_widget_list_row_pane_g1

0xe7c7,	// (0x000625ed) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe7c7,	// (0x000625ed) cell_ai5_widget_list_row_pane_t1

0xe7f2,	// (0x00062618) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe7f2,	// (0x00062618) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeed,	// (0x00063d13) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeed,	// (0x00063d13) cell_ai5_widget_list_row_pane_t

0x4f1b,	// (0x00058d41) main_fep_vtchi_ss_pane

0x7be7,	// (0x0005ba0d) popup_fep_char_pre_window

0x7bef,	// (0x0005ba15) popup_fep_ituss_window

0x7c10,	// (0x0005ba36) popup_fep_vkbss_window

0xe81a,	// (0x00062640) grid_vkbss_keypad_pane_ParamLimits

0xe81a,	// (0x00062640) grid_vkbss_keypad_pane

0xe82a,	// (0x00062650) ituss_keypad_pane

0x7c3d,	// (0x0005ba63) aid_vkbss_key_offset_ParamLimits

0x7c3d,	// (0x0005ba63) aid_vkbss_key_offset

0x7c49,	// (0x0005ba6f) cell_vkbss_key_pane_ParamLimits

0x7c49,	// (0x0005ba6f) cell_vkbss_key_pane

0xe83a,	// (0x00062660) bg_cell_vkbss_key_g1_ParamLimits

0xe83a,	// (0x00062660) bg_cell_vkbss_key_g1

0xe846,	// (0x0006266c) cell_vkbss_key_3p_pane_ParamLimits

0xe846,	// (0x0006266c) cell_vkbss_key_3p_pane

0xe860,	// (0x00062686) cell_vkbss_key_g1_ParamLimits

0xe860,	// (0x00062686) cell_vkbss_key_g1

0xe87a,	// (0x000626a0) cell_vkbss_key_t1_ParamLimits

0xe87a,	// (0x000626a0) cell_vkbss_key_t1

0x7c5f,	// (0x0005ba85) cell_ituss_key_pane_ParamLimits

0x7c5f,	// (0x0005ba85) cell_ituss_key_pane

0xe8a5,	// (0x000626cb) bg_cell_ituss_key_g1_ParamLimits

0xe8a5,	// (0x000626cb) bg_cell_ituss_key_g1

0xe8b1,	// (0x000626d7) cell_ituss_key_pane_g1_ParamLimits

0xe8b1,	// (0x000626d7) cell_ituss_key_pane_g1

0xe8c5,	// (0x000626eb) cell_ituss_key_pane_g2_ParamLimits

0xe8c5,	// (0x000626eb) cell_ituss_key_pane_g2

0x0001,

0xfef4,	// (0x00063d1a) cell_ituss_key_pane_g_ParamLimits

0xfef4,	// (0x00063d1a) cell_ituss_key_pane_g

0xe8f7,	// (0x0006271d) cell_ituss_key_t1_ParamLimits

0xe8f7,	// (0x0006271d) cell_ituss_key_t1

0xe935,	// (0x0006275b) cell_ituss_key_t2_ParamLimits

0xe935,	// (0x0006275b) cell_ituss_key_t2

0xe966,	// (0x0006278c) cell_ituss_key_t3_ParamLimits

0xe966,	// (0x0006278c) cell_ituss_key_t3

0xe997,	// (0x000627bd) cell_ituss_key_t4_ParamLimits

0xe997,	// (0x000627bd) cell_ituss_key_t4

0x0003,

0xfef9,	// (0x00063d1f) cell_ituss_key_t_ParamLimits

0xfef9,	// (0x00063d1f) cell_ituss_key_t

0xe9c8,	// (0x000627ee) cell_vkbss_key_3p_pane_g1

0xe9d0,	// (0x000627f6) cell_vkbss_key_3p_pane_g2

0xe9d8,	// (0x000627fe) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x00063d28) cell_vkbss_key_3p_pane_g

0xb989,	// (0x0005f7af) bg_popup_fep_char_preview_window_cp02

0xe9e0,	// (0x00062806) popup_fep_char_pre_window_t1

0xdc72,	// (0x00061a98) main_ai5_sk_pane

0xe3c2,	// (0x000621e8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe3ce,	// (0x000621f4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe3e2,	// (0x00062208) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe3ee,	// (0x00062214) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed8,	// (0x00063cfe) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe401,	// (0x00062227) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf072,	// (0x00062e98) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe9ef,	// (0x00062815) main_ai5_sk_pane_g1

0x8cbd,	// (0x0005cae3) popup_query_code_window_g1

0x7c05,	// (0x0005ba2b) popup_fep_vkb_icf_pane

0x7c1b,	// (0x0005ba41) popup_fep_vtchi_icf_pane

0xf072,	// (0x00062e98) bg_icf_pane

0xe9f8,	// (0x0006281e) list_vkb_icf_pane

0xf072,	// (0x00062e98) bg_icf_pane_cp01

0xea04,	// (0x0006282a) vtchi_icf_list_pane

0xea15,	// (0x0006283b) list_vkb_icf_pane_t1_ParamLimits

0xea15,	// (0x0006283b) list_vkb_icf_pane_t1

0xea2b,	// (0x00062851) vtchi_icf_list_pane_t1_ParamLimits

0xea2b,	// (0x00062851) vtchi_icf_list_pane_t1

0x7bef,	// (0x0005ba15) popup_fep_ituss_window_ParamLimits

0x7c1b,	// (0x0005ba41) popup_fep_vtchi_icf_pane_ParamLimits

0xe82a,	// (0x00062650) ituss_keypad_pane_ParamLimits

0x7c31,	// (0x0005ba57) ituss_sks_pane

0xf072,	// (0x00062e98) bg_icf_pane_ParamLimits

0x7bd8,	// (0x0005b9fe) icf_edit_indi_pane_ParamLimits

0x7bd8,	// (0x0005b9fe) icf_edit_indi_pane

0xe9f8,	// (0x0006281e) list_vkb_icf_pane_ParamLimits

0xf072,	// (0x00062e98) bg_icf_pane_cp01_ParamLimits

0x7bd8,	// (0x0005b9fe) icf_edit_indi_pane_cp01_ParamLimits

0x7bd8,	// (0x0005b9fe) icf_edit_indi_pane_cp01

0xea0c,	// (0x00062832) vtchi_query_pane

0xb279,	// (0x0005f09f) icf_edit_indi_pane_g1_ParamLimits

0xb279,	// (0x0005f09f) icf_edit_indi_pane_g1

0xeaad,	// (0x000628d3) icf_edit_indi_pane_g2_ParamLimits

0xeaad,	// (0x000628d3) icf_edit_indi_pane_g2

0x0001,

0xff1a,	// (0x00063d40) icf_edit_indi_pane_g_ParamLimits

0xff1a,	// (0x00063d40) icf_edit_indi_pane_g

0xeabc,	// (0x000628e2) icf_edit_indi_pane_t1

0xea43,	// (0x00062869) bg_input_focus_pane_cp042

0xefab,	// (0x00062dd1) vtchi_button_pane

0xea4c,	// (0x00062872) vtchi_query_pane_t1

0xea5a,	// (0x00062880) vtchi_query_pane_t2

0xea68,	// (0x0006288e) vtchi_query_pane_t3

0x0002,

0xff09,	// (0x00063d2f) vtchi_query_pane_t

0xb989,	// (0x0005f7af) bg_button_pane_cp13

0xea76,	// (0x0006289c) vtchi_button_pane_g1

0xea7e,	// (0x000628a4) ituss_sks_pane_g1

0xea89,	// (0x000628af) ituss_sks_pane_g2

0x0001,

0xff10,	// (0x00063d36) ituss_sks_pane_g

0xea91,	// (0x000628b7) ituss_sks_pane_t1

0xea9f,	// (0x000628c5) ituss_sks_pane_t2

0x0001,

0xff15,	// (0x00063d3b) ituss_sks_pane_t

0xaaae,	// (0x0005e8d4) indicator_nsta_pane_cp_g1

0xaab7,	// (0x0005e8dd) indicator_nsta_pane_cp_g2

0xaabf,	// (0x0005e8e5) indicator_nsta_pane_cp_g3

0xaac7,	// (0x0005e8ed) indicator_nsta_pane_cp_g4

0xaacf,	// (0x0005e8f5) indicator_nsta_pane_cp_g5

0xaad7,	// (0x0005e8fd) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x000638dc) indicator_nsta_pane_cp_g

0xd31b,	// (0x00061141) cell_graphic2_pane_t2_ParamLimits

0xd31b,	// (0x00061141) cell_graphic2_pane_t2

0x0001,

0xfdcf,	// (0x00063bf5) cell_graphic2_pane_t_ParamLimits

0xfdcf,	// (0x00063bf5) cell_graphic2_pane_t

0xd348,	// (0x0006116e) cell_graphic2_control_pane_t1

0x5fb8,	// (0x00059dde) signal_pane_g3_ParamLimits

0x5fb8,	// (0x00059dde) signal_pane_g3

0x5fca,	// (0x00059df0) signal_pane_g4_ParamLimits

0x5fca,	// (0x00059df0) signal_pane_g4

0xe804,	// (0x0006262a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe804,	// (0x0006262a) cell_ai5_widget_list_row_pane_t3

0xe8e5,	// (0x0006270b) cell_ituss_key_pane_t1_ParamLimits

0xe8e5,	// (0x0006270b) cell_ituss_key_pane_t1

0x893a,	// (0x0005c760) form_field_data_wide_pane_vc_t2_ParamLimits

0x893a,	// (0x0005c760) form_field_data_wide_pane_vc_t2

0x894e,	// (0x0005c774) form_field_data_wide_pane_vc_t3_ParamLimits

0x894e,	// (0x0005c774) form_field_data_wide_pane_vc_t3

0x0002,

0xf814,	// (0x0006363a) form_field_data_wide_pane_vc_t_ParamLimits

0xf814,	// (0x0006363a) form_field_data_wide_pane_vc_t

0xa759,	// (0x0005e57f) form_field_slider_wide_pane_vc_t3_ParamLimits

0xa759,	// (0x0005e57f) form_field_slider_wide_pane_vc_t3

0xa82f,	// (0x0005e655) form_field_popup_wide_pane_vc_t2_ParamLimits

0xa82f,	// (0x0005e655) form_field_popup_wide_pane_vc_t2

0xa846,	// (0x0005e66c) form_field_popup_wide_pane_vc_t3_ParamLimits

0xa846,	// (0x0005e66c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x000638cb) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x000638cb) form_field_popup_wide_pane_vc_t

0x7ae9,	// (0x0005b90f) aid_fshwr2_btn_pane_ParamLimits

0x7af5,	// (0x0005b91b) aid_fshwr2_syb_pane_ParamLimits

0x7b06,	// (0x0005b92c) aid_fshwr2_txt_pane_ParamLimits

0x7325,	// (0x0005b14b) fshwr2_bg_pane_ParamLimits

0x7b12,	// (0x0005b938) fshwr2_func_candi_pane_ParamLimits

0x7b26,	// (0x0005b94c) fshwr2_hwr_syb_pane_ParamLimits

0x7b39,	// (0x0005b95f) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
