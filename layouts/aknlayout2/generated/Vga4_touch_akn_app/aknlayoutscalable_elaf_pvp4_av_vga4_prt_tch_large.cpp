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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0004101a };

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
0x5c7e,	// (0x00046c98) Screen

0x5c8a,	// (0x00046ca4) application_window_ParamLimits

0x5c8a,	// (0x00046ca4) application_window

0xd2bd,	// (0x0004e2d7) screen_g1

0x5ce6,	// (0x00046d00) area_bottom_pane_ParamLimits

0x5ce6,	// (0x00046d00) area_bottom_pane

0x5dac,	// (0x00046dc6) area_top_pane_ParamLimits

0x5dac,	// (0x00046dc6) area_top_pane

0x5e40,	// (0x00046e5a) main_pane_ParamLimits

0x5e40,	// (0x00046e5a) main_pane

0xd2c7,	// (0x0004e2e1) misc_graphics

0x9452,	// (0x0004a46c) battery_pane_ParamLimits

0x9452,	// (0x0004a46c) battery_pane

0xa116,	// (0x0004b130) bg_status_flat_pane_g8

0xa11e,	// (0x0004b138) bg_status_flat_pane_g9

0x951a,	// (0x0004a534) context_pane_ParamLimits

0x951a,	// (0x0004a534) context_pane

0x963e,	// (0x0004a658) navi_pane_ParamLimits

0x963e,	// (0x0004a658) navi_pane

0x96cc,	// (0x0004a6e6) signal_pane_ParamLimits

0x96cc,	// (0x0004a6e6) signal_pane

0x0008,

0xf857,	// (0x00050871) bg_status_flat_pane_g

0x9739,	// (0x0004a753) status_pane_g1_ParamLimits

0x9739,	// (0x0004a753) status_pane_g1

0x9745,	// (0x0004a75f) status_pane_g2_ParamLimits

0x9745,	// (0x0004a75f) status_pane_g2

0x9751,	// (0x0004a76b) status_pane_g3_ParamLimits

0x9751,	// (0x0004a76b) status_pane_g3

0x0004,

0xf77e,	// (0x00050798) status_pane_g_ParamLimits

0xf77e,	// (0x00050798) status_pane_g

0x9785,	// (0x0004a79f) title_pane_ParamLimits

0x9785,	// (0x0004a79f) title_pane

0x97c2,	// (0x0004a7dc) uni_indicator_pane_ParamLimits

0x97c2,	// (0x0004a7dc) uni_indicator_pane

0x937e,	// (0x0004a398) bg_list_pane_ParamLimits

0x937e,	// (0x0004a398) bg_list_pane

0x939e,	// (0x0004a3b8) find_pane

0x93a6,	// (0x0004a3c0) listscroll_app_pane_ParamLimits

0x93a6,	// (0x0004a3c0) listscroll_app_pane

0x93b2,	// (0x0004a3cc) listscroll_form_pane

0x6c71,	// (0x00047c8b) listscroll_gen_pane_ParamLimits

0x6c71,	// (0x00047c8b) listscroll_gen_pane

0x6c85,	// (0x00047c9f) listscroll_set_pane

0x655d,	// (0x00047577) main_idle_act_pane

0x9077,	// (0x0004a091) main_idle_trad_pane

0x9077,	// (0x0004a091) main_list_empty_pane

0x93a6,	// (0x0004a3c0) main_midp_pane

0x93cc,	// (0x0004a3e6) main_pane_g1_ParamLimits

0x93cc,	// (0x0004a3e6) main_pane_g1

0x6c8d,	// (0x00047ca7) popup_ai_message_window_ParamLimits

0x6c8d,	// (0x00047ca7) popup_ai_message_window

0x6d41,	// (0x00047d5b) popup_fep_china_uni_window_ParamLimits

0x6d41,	// (0x00047d5b) popup_fep_china_uni_window

0x6da1,	// (0x00047dbb) popup_fep_japan_candidate_window_ParamLimits

0x6da1,	// (0x00047dbb) popup_fep_japan_candidate_window

0x6dcb,	// (0x00047de5) popup_fep_japan_predictive_window_ParamLimits

0x6dcb,	// (0x00047de5) popup_fep_japan_predictive_window

0x6e01,	// (0x00047e1b) popup_find_window

0x6e0e,	// (0x00047e28) popup_grid_graphic_window_ParamLimits

0x6e0e,	// (0x00047e28) popup_grid_graphic_window

0x6e3e,	// (0x00047e58) popup_large_graphic_colour_window

0x6e64,	// (0x00047e7e) popup_menu_window_ParamLimits

0x6e64,	// (0x00047e7e) popup_menu_window

0x702e,	// (0x00048048) popup_note_image_window

0x7018,	// (0x00048032) popup_note_wait_window_ParamLimits

0x7018,	// (0x00048032) popup_note_wait_window

0x7018,	// (0x00048032) popup_note_window_ParamLimits

0x7018,	// (0x00048032) popup_note_window

0x7094,	// (0x000480ae) popup_query_code_window_ParamLimits

0x7094,	// (0x000480ae) popup_query_code_window

0x70aa,	// (0x000480c4) popup_query_data_code_window_ParamLimits

0x70aa,	// (0x000480c4) popup_query_data_code_window

0x70cd,	// (0x000480e7) popup_query_data_window_ParamLimits

0x70cd,	// (0x000480e7) popup_query_data_window

0x70ef,	// (0x00048109) popup_query_sat_info_window_ParamLimits

0x70ef,	// (0x00048109) popup_query_sat_info_window

0x712e,	// (0x00048148) popup_snote_single_graphic_window_ParamLimits

0x712e,	// (0x00048148) popup_snote_single_graphic_window

0x712e,	// (0x00048148) popup_snote_single_text_window_ParamLimits

0x712e,	// (0x00048148) popup_snote_single_text_window

0x7145,	// (0x0004815f) popup_sub_window_general

0x728b,	// (0x000482a5) popup_window_general_ParamLimits

0x728b,	// (0x000482a5) popup_window_general

0x93da,	// (0x0004a3f4) power_save_pane

0x6b28,	// (0x00047b42) control_pane_g1_ParamLimits

0x6b28,	// (0x00047b42) control_pane_g1

0x6b4b,	// (0x00047b65) control_pane_g2_ParamLimits

0x6b4b,	// (0x00047b65) control_pane_g2

0x9341,	// (0x0004a35b) control_pane_g3_ParamLimits

0x9341,	// (0x0004a35b) control_pane_g3

0x0007,

0xf766,	// (0x00050780) control_pane_g_ParamLimits

0xf766,	// (0x00050780) control_pane_g

0x6b90,	// (0x00047baa) control_pane_t1_ParamLimits

0x6b90,	// (0x00047baa) control_pane_t1

0x6bd8,	// (0x00047bf2) control_pane_t2_ParamLimits

0x6bd8,	// (0x00047bf2) control_pane_t2

0x0002,

0xf777,	// (0x00050791) control_pane_t_ParamLimits

0xf777,	// (0x00050791) control_pane_t

0x9266,	// (0x0004a280) navi_navi_volume_pane_cp1

0x926e,	// (0x0004a288) status_small_icon_pane

0x9276,	// (0x0004a290) status_small_pane_g1_ParamLimits

0x9276,	// (0x0004a290) status_small_pane_g1

0x92aa,	// (0x0004a2c4) status_small_pane_g2_ParamLimits

0x92aa,	// (0x0004a2c4) status_small_pane_g2

0x92b6,	// (0x0004a2d0) status_small_pane_g3_ParamLimits

0x92b6,	// (0x0004a2d0) status_small_pane_g3

0x92c2,	// (0x0004a2dc) status_small_pane_g4_ParamLimits

0x92c2,	// (0x0004a2dc) status_small_pane_g4

0x92ce,	// (0x0004a2e8) status_small_pane_g5_ParamLimits

0x92ce,	// (0x0004a2e8) status_small_pane_g5

0x92dc,	// (0x0004a2f6) status_small_pane_g6_ParamLimits

0x92dc,	// (0x0004a2f6) status_small_pane_g6

0x0007,

0xf755,	// (0x0005076f) status_small_pane_g_ParamLimits

0xf755,	// (0x0005076f) status_small_pane_g

0x930b,	// (0x0004a325) status_small_pane_t1

0x932d,	// (0x0004a347) status_small_wait_pane_ParamLimits

0x932d,	// (0x0004a347) status_small_wait_pane

0x8af1,	// (0x00049b0b) aid_levels_signal_ParamLimits

0x8af1,	// (0x00049b0b) aid_levels_signal

0x8b00,	// (0x00049b1a) signal_pane_g1_ParamLimits

0x8b00,	// (0x00049b1a) signal_pane_g1

0x8b15,	// (0x00049b2f) signal_pane_g2_ParamLimits

0x8b15,	// (0x00049b2f) signal_pane_g2

0x0003,

0xf6e6,	// (0x00050700) signal_pane_g_ParamLimits

0xf6e6,	// (0x00050700) signal_pane_g

0x8b46,	// (0x00049b60) context_pane_g1

0x609f,	// (0x000470b9) title_pane_g1

0x60d1,	// (0x000470eb) title_pane_t1

0xd2dd,	// (0x0004e2f7) title_pane_t2

0xd303,	// (0x0004e31d) title_pane_t3

0x0002,

0xf530,	// (0x0005054a) title_pane_t

0x97da,	// (0x0004a7f4) aid_levels_battery_ParamLimits

0x97da,	// (0x0004a7f4) aid_levels_battery

0x97eb,	// (0x0004a805) battery_pane_g1_ParamLimits

0x97eb,	// (0x0004a805) battery_pane_g1

0x9801,	// (0x0004a81b) battery_pane_g2_ParamLimits

0x9801,	// (0x0004a81b) battery_pane_g2

0x0001,

0xf789,	// (0x000507a3) battery_pane_g_ParamLimits

0xf789,	// (0x000507a3) battery_pane_g

0xaa60,	// (0x0004ba7a) uni_indicator_pane_g1

0xaa76,	// (0x0004ba90) uni_indicator_pane_g2

0xaa8c,	// (0x0004baa6) uni_indicator_pane_g3

0x0005,

0xf8ff,	// (0x00050919) uni_indicator_pane_g

0x8ed6,	// (0x00049ef0) navi_icon_pane_ParamLimits

0x8ed6,	// (0x00049ef0) navi_icon_pane

0x8e29,	// (0x00049e43) navi_midp_pane

0x8ef2,	// (0x00049f0c) navi_navi_pane

0x8efc,	// (0x00049f16) navi_text_pane_ParamLimits

0x8efc,	// (0x00049f16) navi_text_pane

0xd2bd,	// (0x0004e2d7) status_small_wait_pane_g1

0x0afa,	// (0x00041b14) status_small_wait_pane_g2

0x0001,

0xf8fa,	// (0x00050914) status_small_wait_pane_g

0xa773,	// (0x0004b78d) navi_navi_icon_text_pane

0xa77b,	// (0x0004b795) navi_navi_pane_g1_ParamLimits

0xa77b,	// (0x0004b795) navi_navi_pane_g1

0xa78d,	// (0x0004b7a7) navi_navi_pane_g2_ParamLimits

0xa78d,	// (0x0004b7a7) navi_navi_pane_g2

0x0001,

0xf8c8,	// (0x000508e2) navi_navi_pane_g_ParamLimits

0xf8c8,	// (0x000508e2) navi_navi_pane_g

0xa79f,	// (0x0004b7b9) navi_navi_tabs_pane

0xa7a8,	// (0x0004b7c2) navi_navi_text_pane

0xa773,	// (0x0004b78d) navi_navi_volume_pane

0xa74f,	// (0x0004b769) navi_text_pane_t1

0xa743,	// (0x0004b75d) navi_icon_pane_g1

0xa696,	// (0x0004b6b0) navi_navi_text_pane_t1

0x7564,	// (0x0004857e) navi_navi_volume_pane_g1

0x756c,	// (0x00048586) volume_small_pane

0xa5fc,	// (0x0004b616) navi_navi_icon_text_pane_g1

0xa604,	// (0x0004b61e) navi_navi_icon_text_pane_t1

0x8ef2,	// (0x00049f0c) navi_tabs_2_long_pane

0x8ef2,	// (0x00049f0c) navi_tabs_2_pane

0x8ef2,	// (0x00049f0c) navi_tabs_3_long_pane

0x8ef2,	// (0x00049f0c) navi_tabs_3_pane

0x8ef2,	// (0x00049f0c) navi_tabs_4_pane

0x7544,	// (0x0004855e) tabs_2_active_pane_ParamLimits

0x7544,	// (0x0004855e) tabs_2_active_pane

0x7554,	// (0x0004856e) tabs_2_passive_pane_ParamLimits

0x7554,	// (0x0004856e) tabs_2_passive_pane

0x7512,	// (0x0004852c) tabs_3_active_pane_ParamLimits

0x7512,	// (0x0004852c) tabs_3_active_pane

0x7522,	// (0x0004853c) tabs_3_passive_pane_ParamLimits

0x7522,	// (0x0004853c) tabs_3_passive_pane

0x7533,	// (0x0004854d) tabs_3_passive_pane_cp_ParamLimits

0x7533,	// (0x0004854d) tabs_3_passive_pane_cp

0x74c6,	// (0x000484e0) tabs_4_active_pane_ParamLimits

0x74c6,	// (0x000484e0) tabs_4_active_pane

0x74d9,	// (0x000484f3) tabs_4_passive_pane_ParamLimits

0x74d9,	// (0x000484f3) tabs_4_passive_pane

0x74ea,	// (0x00048504) tabs_4_passive_pane_cp_ParamLimits

0x74ea,	// (0x00048504) tabs_4_passive_pane_cp

0x74fb,	// (0x00048515) tabs_4_passive_pane_cp2_ParamLimits

0x74fb,	// (0x00048515) tabs_4_passive_pane_cp2

0x74a2,	// (0x000484bc) tabs_2_long_active_pane_ParamLimits

0x74a2,	// (0x000484bc) tabs_2_long_active_pane

0x74b4,	// (0x000484ce) tabs_2_long_passive_pane_ParamLimits

0x74b4,	// (0x000484ce) tabs_2_long_passive_pane

0x7463,	// (0x0004847d) tabs_3_long_active_pane_ParamLimits

0x7463,	// (0x0004847d) tabs_3_long_active_pane

0x7476,	// (0x00048490) tabs_3_long_passive_pane_ParamLimits

0x7476,	// (0x00048490) tabs_3_long_passive_pane

0x748f,	// (0x000484a9) tabs_3_long_passive_pane_cp_ParamLimits

0x748f,	// (0x000484a9) tabs_3_long_passive_pane_cp

0x7409,	// (0x00048423) volume_small_pane_g1

0x7412,	// (0x0004842c) volume_small_pane_g2

0x741b,	// (0x00048435) volume_small_pane_g3

0x7424,	// (0x0004843e) volume_small_pane_g4

0x742d,	// (0x00048447) volume_small_pane_g5

0x7436,	// (0x00048450) volume_small_pane_g6

0x743f,	// (0x00048459) volume_small_pane_g7

0x7448,	// (0x00048462) volume_small_pane_g8

0x7451,	// (0x0004846b) volume_small_pane_g9

0x745a,	// (0x00048474) volume_small_pane_g10

0x0009,

0xf894,	// (0x000508ae) volume_small_pane_g

0xd315,	// (0x0004e32f) bg_active_tab_pane_cp2_ParamLimits

0xd315,	// (0x0004e32f) bg_active_tab_pane_cp2

0x6139,	// (0x00047153) tabs_3_active_pane_g1

0x6141,	// (0x0004715b) tabs_3_active_pane_t1

0xd315,	// (0x0004e32f) bg_passive_tab_pane_cp2_ParamLimits

0xd315,	// (0x0004e32f) bg_passive_tab_pane_cp2

0x6139,	// (0x00047153) tabs_3_passive_pane_g1

0x6141,	// (0x0004715b) tabs_3_passive_pane_t1

0xd315,	// (0x0004e32f) bg_active_tab_pane_cp3_ParamLimits

0xd315,	// (0x0004e32f) bg_active_tab_pane_cp3

0x6153,	// (0x0004716d) tabs_4_active_pane_g1

0x615b,	// (0x00047175) tabs_4_active_pane_t1

0xd315,	// (0x0004e32f) bg_passive_tab_pane_cp3_ParamLimits

0xd315,	// (0x0004e32f) bg_passive_tab_pane_cp3

0x6153,	// (0x0004716d) tabs_4_1_passive_pane_g1

0x615b,	// (0x00047175) tabs_4_1_passive_pane_t1

0x93a6,	// (0x0004a3c0) list_highlight_pane_cp2

0xacc9,	// (0x0004bce3) list_set_pane_ParamLimits

0xacc9,	// (0x0004bce3) list_set_pane

0xad8b,	// (0x0004bda5) main_pane_set_t1_ParamLimits

0xad8b,	// (0x0004bda5) main_pane_set_t1

0xadab,	// (0x0004bdc5) main_pane_set_t2_ParamLimits

0xadab,	// (0x0004bdc5) main_pane_set_t2

0xadbf,	// (0x0004bdd9) main_pane_set_t3_ParamLimits

0xadbf,	// (0x0004bdd9) main_pane_set_t3

0xadd3,	// (0x0004bded) main_pane_set_t4_ParamLimits

0xadd3,	// (0x0004bded) main_pane_set_t4

0x0003,

0xf964,	// (0x0005097e) main_pane_set_t_ParamLimits

0xf964,	// (0x0005097e) main_pane_set_t

0xade7,	// (0x0004be01) setting_code_pane

0xadf1,	// (0x0004be0b) setting_slider_graphic_pane

0xadf1,	// (0x0004be0b) setting_slider_pane

0xadf1,	// (0x0004be0b) setting_text_pane

0xadf1,	// (0x0004be0b) setting_volume_pane

0x616d,	// (0x00047187) volume_set_pane

0xd315,	// (0x0004e32f) bg_set_opt_pane_cp

0x6177,	// (0x00047191) setting_slider_pane_t1

0x6190,	// (0x000471aa) setting_slider_pane_t2

0x61aa,	// (0x000471c4) setting_slider_pane_t3

0x0002,

0xf537,	// (0x00050551) setting_slider_pane_t

0x61c2,	// (0x000471dc) slider_set_pane

0xd2c7,	// (0x0004e2e1) bg_set_opt_pane_cp2

0xd323,	// (0x0004e33d) setting_slider_graphic_pane_g1

0x61d8,	// (0x000471f2) setting_slider_graphic_pane_t1

0x61e8,	// (0x00047202) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00050558) setting_slider_graphic_pane_t

0x61f8,	// (0x00047212) slider_set_pane_cp

0xd2c7,	// (0x0004e2e1) input_focus_pane_cp1

0xac8a,	// (0x0004bca4) list_set_text_pane

0xd2bd,	// (0x0004e2d7) setting_text_pane_g1

0xd2c7,	// (0x0004e2e1) input_focus_pane_cp2

0xd2bd,	// (0x0004e2d7) setting_code_pane_g1

0xd32c,	// (0x0004e346) setting_code_pane_t1

0x4d7b,	// (0x00045d95) set_text_pane_t1_ParamLimits

0x4d7b,	// (0x00045d95) set_text_pane_t1

0x0e93,	// (0x00041ead) set_opt_bg_pane_g1

0x0e9b,	// (0x00041eb5) set_opt_bg_pane_g2

0xac62,	// (0x0004bc7c) set_opt_bg_pane_g3

0x0eab,	// (0x00041ec5) set_opt_bg_pane_g4

0x0eb3,	// (0x00041ecd) set_opt_bg_pane_g5

0x0ebb,	// (0x00041ed5) set_opt_bg_pane_g6

0xac6c,	// (0x0004bc86) set_opt_bg_pane_g7

0xac76,	// (0x0004bc90) set_opt_bg_pane_g8

0xac80,	// (0x0004bc9a) set_opt_bg_pane_g9

0x0008,

0xf951,	// (0x0005096b) set_opt_bg_pane_g

0xac55,	// (0x0004bc6f) slider_set_pane_g1

0x75ed,	// (0x00048607) slider_set_pane_g2

0x0006,

0xf942,	// (0x0005095c) slider_set_pane_g

0x7575,	// (0x0004858f) volume_set_pane_g1

0x757f,	// (0x00048599) volume_set_pane_g2

0x7589,	// (0x000485a3) volume_set_pane_g3

0x7593,	// (0x000485ad) volume_set_pane_g4

0x759d,	// (0x000485b7) volume_set_pane_g5

0x75a7,	// (0x000485c1) volume_set_pane_g6

0x75b1,	// (0x000485cb) volume_set_pane_g7

0x75bb,	// (0x000485d5) volume_set_pane_g8

0x75c5,	// (0x000485df) volume_set_pane_g9

0x75cf,	// (0x000485e9) volume_set_pane_g10

0x0009,

0xf91a,	// (0x00050934) volume_set_pane_g

0x6200,	// (0x0004721a) indicator_pane_ParamLimits

0x6200,	// (0x0004721a) indicator_pane

0x620c,	// (0x00047226) main_idle_pane_g2_ParamLimits

0x620c,	// (0x00047226) main_idle_pane_g2

0x6234,	// (0x0004724e) main_pane_idle_g1_ParamLimits

0x6234,	// (0x0004724e) main_pane_idle_g1

0xd33a,	// (0x0004e354) popup_clock_digital_analogue_window_ParamLimits

0xd33a,	// (0x0004e354) popup_clock_digital_analogue_window

0x6242,	// (0x0004725c) soft_indicator_pane_ParamLimits

0x6242,	// (0x0004725c) soft_indicator_pane

0x6250,	// (0x0004726a) wallpaper_pane_ParamLimits

0x6250,	// (0x0004726a) wallpaper_pane

0xd2bd,	// (0x0004e2d7) wallpaper_pane_g1

0x625c,	// (0x00047276) indicator_pane_g1_ParamLimits

0x625c,	// (0x00047276) indicator_pane_g1

0xb0bd,	// (0x0004c0d7) navi_navi_icon_text_pane_srt_g1

0x084c,	// (0x00041866) soft_indicator_pane_t1

0x0866,	// (0x00041880) aid_ps_area_pane

0x6268,	// (0x00047282) aid_ps_clock_pane

0x0877,	// (0x00041891) aid_ps_indicator_pane

0x0883,	// (0x0004189d) indicator_ps_pane_ParamLimits

0x0883,	// (0x0004189d) indicator_ps_pane

0x0892,	// (0x000418ac) power_save_pane_g1_ParamLimits

0x0892,	// (0x000418ac) power_save_pane_g1

0x089e,	// (0x000418b8) power_save_pane_g2_ParamLimits

0x089e,	// (0x000418b8) power_save_pane_g2

0x5c9a,	// (0x00046cb4) aid_navinavi_width_pane

0x0866,	// (0x00041880) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0005055d) power_save_pane_g_ParamLimits

0xf543,	// (0x0005055d) power_save_pane_g

0x08ac,	// (0x000418c6) power_save_pane_t1_ParamLimits

0x08ac,	// (0x000418c6) power_save_pane_t1

0x6268,	// (0x00047282) aid_ps_clock_pane_ParamLimits

0x0877,	// (0x00041891) aid_ps_indicator_pane_ParamLimits

0x08be,	// (0x000418d8) power_save_pane_t4_ParamLimits

0x08be,	// (0x000418d8) power_save_pane_t4

0x0001,

0xf548,	// (0x00050562) power_save_pane_t_ParamLimits

0xf548,	// (0x00050562) power_save_pane_t

0x08e8,	// (0x00041902) power_save_t3_ParamLimits

0x08e8,	// (0x00041902) power_save_t3

0x08d3,	// (0x000418ed) power_save_t2_ParamLimits

0x08d3,	// (0x000418ed) power_save_t2

0x08fd,	// (0x00041917) indicator_ps_pane_g1

0x6276,	// (0x00047290) ai_gene_pane_ParamLimits

0x6276,	// (0x00047290) ai_gene_pane

0x6282,	// (0x0004729c) ai_links_pane_ParamLimits

0x6282,	// (0x0004729c) ai_links_pane

0x628e,	// (0x000472a8) indicator_pane_cp1_ParamLimits

0x628e,	// (0x000472a8) indicator_pane_cp1

0x629a,	// (0x000472b4) main_pane_idle_g1_cp_ParamLimits

0x629a,	// (0x000472b4) main_pane_idle_g1_cp

0x0906,	// (0x00041920) popup_ai_links_title_window

0x62a6,	// (0x000472c0) soft_indicator_pane_cp1_ParamLimits

0x62a6,	// (0x000472c0) soft_indicator_pane_cp1

0xaa4e,	// (0x0004ba68) ai_links_pane_g1

0xaa57,	// (0x0004ba71) grid_ai_links_pane

0xaa33,	// (0x0004ba4d) ai_gene_pane_1

0xaa3c,	// (0x0004ba56) ai_gene_pane_2

0xaa45,	// (0x0004ba5f) list_highlight_pane_cp4

0xaa13,	// (0x0004ba2d) cell_ai_link_pane_ParamLimits

0xaa13,	// (0x0004ba2d) cell_ai_link_pane

0xaa0b,	// (0x0004ba25) cell_ai_link_pane_g1

0x0afa,	// (0x00041b14) cell_ai_link_pane_g2

0x0001,

0xf8f5,	// (0x0005090f) cell_ai_link_pane_g

0xd2c7,	// (0x0004e2e1) grid_highlight_cp2

0xd2c7,	// (0x0004e2e1) bg_popup_sub_pane_cp1

0x091d,	// (0x00041937) popup_ai_links_title_window_t1

0xa957,	// (0x0004b971) ai_gene_pane_1_g1_ParamLimits

0xa957,	// (0x0004b971) ai_gene_pane_1_g1

0xa963,	// (0x0004b97d) ai_gene_pane_1_g2_ParamLimits

0xa963,	// (0x0004b97d) ai_gene_pane_1_g2

0x0001,

0xf8eb,	// (0x00050905) ai_gene_pane_1_g_ParamLimits

0xf8eb,	// (0x00050905) ai_gene_pane_1_g

0xa970,	// (0x0004b98a) ai_gene_pane_1_t1_ParamLimits

0xa970,	// (0x0004b98a) ai_gene_pane_1_t1

0xa9a4,	// (0x0004b9be) grid_ai_soft_ind_pane

0xa942,	// (0x0004b95c) ai_gene_pane_2_t1_ParamLimits

0xa942,	// (0x0004b95c) ai_gene_pane_2_t1

0x62b2,	// (0x000472cc) main_pane_empty_t1_ParamLimits

0x62b2,	// (0x000472cc) main_pane_empty_t1

0x62ca,	// (0x000472e4) main_pane_empty_t2_ParamLimits

0x62ca,	// (0x000472e4) main_pane_empty_t2

0x62df,	// (0x000472f9) main_pane_empty_t3_ParamLimits

0x62df,	// (0x000472f9) main_pane_empty_t3

0x62f1,	// (0x0004730b) main_pane_empty_t4_ParamLimits

0x62f1,	// (0x0004730b) main_pane_empty_t4

0x6303,	// (0x0004731d) main_pane_empty_t5_ParamLimits

0x6303,	// (0x0004731d) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00050567) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00050567) main_pane_empty_t

0x3cf3,	// (0x00044d0d) bg_popup_window_pane_ParamLimits

0x3cf3,	// (0x00044d0d) bg_popup_window_pane

0xa6a4,	// (0x0004b6be) find_popup_pane_cp2_ParamLimits

0xa6a4,	// (0x0004b6be) find_popup_pane_cp2

0xa6b0,	// (0x0004b6ca) heading_pane_ParamLimits

0xa6b0,	// (0x0004b6ca) heading_pane

0xd2c7,	// (0x0004e2e1) bg_popup_sub_pane

0xa61e,	// (0x0004b638) bg_popup_window_pane_g1_ParamLimits

0xa61e,	// (0x0004b638) bg_popup_window_pane_g1

0xa62a,	// (0x0004b644) bg_popup_window_pane_g2_ParamLimits

0xa62a,	// (0x0004b644) bg_popup_window_pane_g2

0xa636,	// (0x0004b650) bg_popup_window_pane_g3_ParamLimits

0xa636,	// (0x0004b650) bg_popup_window_pane_g3

0xa642,	// (0x0004b65c) bg_popup_window_pane_g4_ParamLimits

0xa642,	// (0x0004b65c) bg_popup_window_pane_g4

0xa64e,	// (0x0004b668) bg_popup_window_pane_g5_ParamLimits

0xa64e,	// (0x0004b668) bg_popup_window_pane_g5

0xa65a,	// (0x0004b674) bg_popup_window_pane_g6_ParamLimits

0xa65a,	// (0x0004b674) bg_popup_window_pane_g6

0xa666,	// (0x0004b680) bg_popup_window_pane_g7_ParamLimits

0xa666,	// (0x0004b680) bg_popup_window_pane_g7

0xa672,	// (0x0004b68c) bg_popup_window_pane_g8_ParamLimits

0xa672,	// (0x0004b68c) bg_popup_window_pane_g8

0xa67e,	// (0x0004b698) bg_popup_window_pane_g9_ParamLimits

0xa67e,	// (0x0004b698) bg_popup_window_pane_g9

0xa68a,	// (0x0004b6a4) bg_popup_window_pane_g10_ParamLimits

0xa68a,	// (0x0004b6a4) bg_popup_window_pane_g10

0x0009,

0xf8b3,	// (0x000508cd) bg_popup_window_pane_g_ParamLimits

0xf8b3,	// (0x000508cd) bg_popup_window_pane_g

0xa5b3,	// (0x0004b5cd) bg_popup_heading_pane_ParamLimits

0xa5b3,	// (0x0004b5cd) bg_popup_heading_pane

0x76d0,	// (0x000486ea) tabs_4_passive_pane_cp_srt_ParamLimits

0x76d0,	// (0x000486ea) tabs_4_passive_pane_cp_srt

0x76e2,	// (0x000486fc) tabs_4_passive_pane_srt_ParamLimits

0xa5c7,	// (0x0004b5e1) heading_pane_g2

0x76e2,	// (0x000486fc) tabs_4_passive_pane_srt

0x93a6,	// (0x0004a3c0) bg_passive_tab_pane_cp3_srt_ParamLimits

0x93a6,	// (0x0004a3c0) bg_passive_tab_pane_cp3_srt

0xa5cf,	// (0x0004b5e9) heading_pane_t1_ParamLimits

0xa5cf,	// (0x0004b5e9) heading_pane_t1

0xa5e6,	// (0x0004b600) heading_pane_t2_ParamLimits

0xa5e6,	// (0x0004b600) heading_pane_t2

0x0001,

0xf8ae,	// (0x000508c8) heading_pane_t_ParamLimits

0xf8ae,	// (0x000508c8) heading_pane_t

0xa0de,	// (0x0004b0f8) bg_popup_heading_pane_g1

0xa18d,	// (0x0004b1a7) bg_popup_heading_pane_g2

0xa197,	// (0x0004b1b1) bg_popup_heading_pane_g3

0xa1a1,	// (0x0004b1bb) bg_popup_heading_pane_g4

0xa1ab,	// (0x0004b1c5) bg_popup_heading_pane_g5

0xa1b5,	// (0x0004b1cf) bg_popup_heading_pane_g6

0xa1bd,	// (0x0004b1d7) bg_popup_heading_pane_g7

0xa1c5,	// (0x0004b1df) bg_popup_heading_pane_g8

0xa1cf,	// (0x0004b1e9) bg_popup_heading_pane_g9

0x0008,

0xf86a,	// (0x00050884) bg_popup_heading_pane_g

0x98d6,	// (0x0004a8f0) bg_popup_sub_pane_g1

0x98de,	// (0x0004a8f8) bg_popup_sub_pane_g2

0x98e6,	// (0x0004a900) bg_popup_sub_pane_g3

0x98ee,	// (0x0004a908) bg_popup_sub_pane_g4

0x98f6,	// (0x0004a910) bg_popup_sub_pane_g5

0x98fe,	// (0x0004a918) bg_popup_sub_pane_g6

0x9906,	// (0x0004a920) bg_popup_sub_pane_g7

0x990e,	// (0x0004a928) bg_popup_sub_pane_g8

0x9916,	// (0x0004a930) bg_popup_sub_pane_g9

0x0008,

0xf844,	// (0x0005085e) bg_popup_sub_pane_g

0xd351,	// (0x0004e36b) bg_popup_window_pane_cp5_ParamLimits

0xd351,	// (0x0004e36b) bg_popup_window_pane_cp5

0x093a,	// (0x00041954) popup_note_window_g1_ParamLimits

0x093a,	// (0x00041954) popup_note_window_g1

0x0946,	// (0x00041960) popup_note_window_t1_ParamLimits

0x0946,	// (0x00041960) popup_note_window_t1

0x095c,	// (0x00041976) popup_note_window_t2_ParamLimits

0x095c,	// (0x00041976) popup_note_window_t2

0x0972,	// (0x0004198c) popup_note_window_t3_ParamLimits

0x0972,	// (0x0004198c) popup_note_window_t3

0x0988,	// (0x000419a2) popup_note_window_t4_ParamLimits

0x0988,	// (0x000419a2) popup_note_window_t4

0x09b0,	// (0x000419ca) popup_note_window_t5_ParamLimits

0x09b0,	// (0x000419ca) popup_note_window_t5

0x0004,

0xf558,	// (0x00050572) popup_note_window_t_ParamLimits

0xf558,	// (0x00050572) popup_note_window_t

0x09fa,	// (0x00041a14) bg_popup_window_pane_cp6_ParamLimits

0x09fa,	// (0x00041a14) bg_popup_window_pane_cp6

0xa05a,	// (0x0004b074) popup_note_image_window_g1_ParamLimits

0xa05a,	// (0x0004b074) popup_note_image_window_g1

0xa066,	// (0x0004b080) popup_note_image_window_g2_ParamLimits

0xa066,	// (0x0004b080) popup_note_image_window_g2

0x0001,

0xf838,	// (0x00050852) popup_note_image_window_g_ParamLimits

0xf838,	// (0x00050852) popup_note_image_window_g

0xa07f,	// (0x0004b099) popup_note_image_window_t1_ParamLimits

0xa07f,	// (0x0004b099) popup_note_image_window_t1

0xa098,	// (0x0004b0b2) popup_note_image_window_t2_ParamLimits

0xa098,	// (0x0004b0b2) popup_note_image_window_t2

0xa0b1,	// (0x0004b0cb) popup_note_image_window_t3_ParamLimits

0xa0b1,	// (0x0004b0cb) popup_note_image_window_t3

0x0002,

0xf83d,	// (0x00050857) popup_note_image_window_t_ParamLimits

0xf83d,	// (0x00050857) popup_note_image_window_t

0x9f1a,	// (0x0004af34) bg_popup_window_pane_cp7_ParamLimits

0x9f1a,	// (0x0004af34) bg_popup_window_pane_cp7

0x9f4a,	// (0x0004af64) popup_note_wait_window_g1_ParamLimits

0x9f4a,	// (0x0004af64) popup_note_wait_window_g1

0x9f56,	// (0x0004af70) popup_note_wait_window_g2_ParamLimits

0x9f56,	// (0x0004af70) popup_note_wait_window_g2

0x0002,

0xf826,	// (0x00050840) popup_note_wait_window_g_ParamLimits

0xf826,	// (0x00050840) popup_note_wait_window_g

0x9f6e,	// (0x0004af88) popup_note_wait_window_t1_ParamLimits

0x9f6e,	// (0x0004af88) popup_note_wait_window_t1

0x9f95,	// (0x0004afaf) popup_note_wait_window_t2_ParamLimits

0x9f95,	// (0x0004afaf) popup_note_wait_window_t2

0x9fb3,	// (0x0004afcd) popup_note_wait_window_t3_ParamLimits

0x9fb3,	// (0x0004afcd) popup_note_wait_window_t3

0x9fc6,	// (0x0004afe0) popup_note_wait_window_t4_ParamLimits

0x9fc6,	// (0x0004afe0) popup_note_wait_window_t4

0x0004,

0xf82d,	// (0x00050847) popup_note_wait_window_t_ParamLimits

0xf82d,	// (0x00050847) popup_note_wait_window_t

0x9feb,	// (0x0004b005) wait_bar_pane_ParamLimits

0x9feb,	// (0x0004b005) wait_bar_pane

0xd2c7,	// (0x0004e2e1) wait_anim_pane

0xd2c7,	// (0x0004e2e1) wait_border_pane

0xd2bd,	// (0x0004e2d7) wait_anim_pane_g1

0xd2bd,	// (0x0004e2d7) wait_anim_pane_g2

0x0001,

0xf6e1,	// (0x000506fb) wait_anim_pane_g

0x9ebe,	// (0x0004aed8) wait_border_pane_g1

0x9ec9,	// (0x0004aee3) wait_border_pane_g2

0x9ed2,	// (0x0004aeec) wait_border_pane_g3

0x0002,

0xf81f,	// (0x00050839) wait_border_pane_g

0x9d28,	// (0x0004ad42) bg_popup_window_pane_cp16_ParamLimits

0x9d28,	// (0x0004ad42) bg_popup_window_pane_cp16

0x9e28,	// (0x0004ae42) indicator_popup_pane_cp4_ParamLimits

0x9e28,	// (0x0004ae42) indicator_popup_pane_cp4

0x9e3c,	// (0x0004ae56) popup_query_data_window_t1_ParamLimits

0x9e3c,	// (0x0004ae56) popup_query_data_window_t1

0x9e4e,	// (0x0004ae68) popup_query_data_window_t2_ParamLimits

0x9e4e,	// (0x0004ae68) popup_query_data_window_t2

0x9e67,	// (0x0004ae81) popup_query_data_window_t3_ParamLimits

0x9e67,	// (0x0004ae81) popup_query_data_window_t3

0x0002,

0xf818,	// (0x00050832) popup_query_data_window_t_ParamLimits

0xf818,	// (0x00050832) popup_query_data_window_t

0x9e81,	// (0x0004ae9b) query_popup_data_pane_ParamLimits

0x9e81,	// (0x0004ae9b) query_popup_data_pane

0x9e95,	// (0x0004aeaf) query_popup_data_pane_cp1_ParamLimits

0x9e95,	// (0x0004aeaf) query_popup_data_pane_cp1

0x9d28,	// (0x0004ad42) bg_popup_window_pane_cp10_ParamLimits

0x9d28,	// (0x0004ad42) bg_popup_window_pane_cp10

0x9d5a,	// (0x0004ad74) indicator_popup_pane_ParamLimits

0x9d5a,	// (0x0004ad74) indicator_popup_pane

0x9d7c,	// (0x0004ad96) popup_query_code_window_t1_ParamLimits

0x9d7c,	// (0x0004ad96) popup_query_code_window_t1

0x9d96,	// (0x0004adb0) popup_query_code_window_t2_ParamLimits

0x9d96,	// (0x0004adb0) popup_query_code_window_t2

0x9ddf,	// (0x0004adf9) popup_query_code_window_t3_ParamLimits

0x9ddf,	// (0x0004adf9) popup_query_code_window_t3

0x0002,

0xf811,	// (0x0005082b) popup_query_code_window_t_ParamLimits

0xf811,	// (0x0005082b) popup_query_code_window_t

0x9e0e,	// (0x0004ae28) query_popup_pane_ParamLimits

0x9e0e,	// (0x0004ae28) query_popup_pane

0x09fa,	// (0x00041a14) bg_popup_window_pane_cp15_ParamLimits

0x09fa,	// (0x00041a14) bg_popup_window_pane_cp15

0x0a1a,	// (0x00041a34) indicator_popup_pane_cp1_ParamLimits

0x0a1a,	// (0x00041a34) indicator_popup_pane_cp1

0x0a2d,	// (0x00041a47) indicator_popup_pane_cp2_ParamLimits

0x0a2d,	// (0x00041a47) indicator_popup_pane_cp2

0x0a48,	// (0x00041a62) popup_query_data_code_window_g1_ParamLimits

0x0a48,	// (0x00041a62) popup_query_data_code_window_g1

0x0a5b,	// (0x00041a75) popup_query_data_code_window_t1_ParamLimits

0x0a5b,	// (0x00041a75) popup_query_data_code_window_t1

0x0a6d,	// (0x00041a87) popup_query_data_code_window_t2_ParamLimits

0x0a6d,	// (0x00041a87) popup_query_data_code_window_t2

0x0a7f,	// (0x00041a99) popup_query_data_code_window_t3_ParamLimits

0x0a7f,	// (0x00041a99) popup_query_data_code_window_t3

0x0a95,	// (0x00041aaf) popup_query_data_code_window_t4_ParamLimits

0x0a95,	// (0x00041aaf) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0005057d) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0005057d) popup_query_data_code_window_t

0x8e92,	// (0x00049eac) list_single_midp_graphic_pane_g3

0x0aaf,	// (0x00041ac9) query_popup_data_pane_cp2_ParamLimits

0x0ac2,	// (0x00041adc) query_popup_pane_cp2_ParamLimits

0x0ac2,	// (0x00041adc) query_popup_pane_cp2

0xd2c7,	// (0x0004e2e1) bg_popup_window_pane_cp11

0x9d0c,	// (0x0004ad26) heading_pane_cp5

0x9d14,	// (0x0004ad2e) listscroll_popup_info_pane

0xd2c7,	// (0x0004e2e1) input_focus_pane_cp3

0x0add,	// (0x00041af7) query_popup_pane_t1

0x0aeb,	// (0x00041b05) list_popup_info_pane_ParamLimits

0x0aeb,	// (0x00041b05) list_popup_info_pane

0x0afa,	// (0x00041b14) listscroll_popup_info_pane_g1

0x0b02,	// (0x00041b1c) scroll_pane_cp7

0x0b0c,	// (0x00041b26) popup_info_list_pane_t1_ParamLimits

0x0b0c,	// (0x00041b26) popup_info_list_pane_t1

0x0b26,	// (0x00041b40) popup_info_list_pane_t2_ParamLimits

0x0b26,	// (0x00041b40) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00050586) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00050586) popup_info_list_pane_t

0xd2c7,	// (0x0004e2e1) bg_popup_window_pane_cp12

0xb0d7,	// (0x0004c0f1) find_popup_pane

0xd315,	// (0x0004e32f) bg_popup_window_pane_cp3

0x0b40,	// (0x00041b5a) heading_pane_cp3

0x0b4f,	// (0x00041b69) listscroll_popup_graphic_pane

0xd2c7,	// (0x0004e2e1) bg_popup_window_pane_cp4

0x6365,	// (0x0004737f) heading_pane_cp4

0x0b5f,	// (0x00041b79) listscroll_popup_colour_pane

0x636f,	// (0x00047389) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x636f,	// (0x00047389) cell_large_graphic_colour_none_popup_pane

0x6383,	// (0x0004739d) grid_large_graphic_colour_popup_pane_ParamLimits

0x6383,	// (0x0004739d) grid_large_graphic_colour_popup_pane

0x63af,	// (0x000473c9) listscroll_popup_colour_pane_g1_ParamLimits

0x63af,	// (0x000473c9) listscroll_popup_colour_pane_g1

0x63c6,	// (0x000473e0) listscroll_popup_colour_pane_g2_ParamLimits

0x63c6,	// (0x000473e0) listscroll_popup_colour_pane_g2

0x63dd,	// (0x000473f7) listscroll_popup_colour_pane_g3_ParamLimits

0x63dd,	// (0x000473f7) listscroll_popup_colour_pane_g3

0x63ed,	// (0x00047407) listscroll_popup_colour_pane_g4_ParamLimits

0x63ed,	// (0x00047407) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0005058b) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0005058b) listscroll_popup_colour_pane_g

0x0b67,	// (0x00041b81) scroll_pane_cp6_ParamLimits

0x0b67,	// (0x00041b81) scroll_pane_cp6

0x6401,	// (0x0004741b) cell_large_graphic_colour_popup_pane_ParamLimits

0x6401,	// (0x0004741b) cell_large_graphic_colour_popup_pane

0x0b79,	// (0x00041b93) cell_large_graphic_colour_none_popup_pane_t1

0xd2c7,	// (0x0004e2e1) grid_highlight_pane_cp5

0x0b88,	// (0x00041ba2) cell_large_graphic_colour_popup_pane_g1

0x0b90,	// (0x00041baa) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x00050594) cell_large_graphic_colour_popup_pane_g

0x0b98,	// (0x00041bb2) cell_large_graphic_colour_popup_pane_g2_copy1

0x0ba1,	// (0x00041bbb) grid_highlight_pane_cp4

0x0ba9,	// (0x00041bc3) bg_popup_window_pane_cp8_ParamLimits

0x0ba9,	// (0x00041bc3) bg_popup_window_pane_cp8

0x0bc4,	// (0x00041bde) popup_snote_single_text_window_g1_ParamLimits

0x0bc4,	// (0x00041bde) popup_snote_single_text_window_g1

0x0bd6,	// (0x00041bf0) popup_snote_single_text_window_t1_ParamLimits

0x0bd6,	// (0x00041bf0) popup_snote_single_text_window_t1

0x0be9,	// (0x00041c03) popup_snote_single_text_window_t2_ParamLimits

0x0be9,	// (0x00041c03) popup_snote_single_text_window_t2

0x0bfc,	// (0x00041c16) popup_snote_single_text_window_t3_ParamLimits

0x0bfc,	// (0x00041c16) popup_snote_single_text_window_t3

0x0c35,	// (0x00041c4f) popup_snote_single_text_window_t4_ParamLimits

0x0c35,	// (0x00041c4f) popup_snote_single_text_window_t4

0x0c69,	// (0x00041c83) popup_snote_single_text_window_t5_ParamLimits

0x0c69,	// (0x00041c83) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00050599) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00050599) popup_snote_single_text_window_t

0x0c98,	// (0x00041cb2) bg_popup_window_pane_cp9_ParamLimits

0x0c98,	// (0x00041cb2) bg_popup_window_pane_cp9

0x0bc4,	// (0x00041bde) popup_snote_single_graphic_window_g1_ParamLimits

0x0bc4,	// (0x00041bde) popup_snote_single_graphic_window_g1

0x0ca6,	// (0x00041cc0) popup_snote_single_graphic_window_g2_ParamLimits

0x0ca6,	// (0x00041cc0) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x000505a4) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x000505a4) popup_snote_single_graphic_window_g

0x0cb2,	// (0x00041ccc) popup_snote_single_graphic_window_t1_ParamLimits

0x0cb2,	// (0x00041ccc) popup_snote_single_graphic_window_t1

0x0cc5,	// (0x00041cdf) popup_snote_single_graphic_window_t2_ParamLimits

0x0cc5,	// (0x00041cdf) popup_snote_single_graphic_window_t2

0x0cd8,	// (0x00041cf2) popup_snote_single_graphic_window_t3_ParamLimits

0x0cd8,	// (0x00041cf2) popup_snote_single_graphic_window_t3

0x0d11,	// (0x00041d2b) popup_snote_single_graphic_window_t4_ParamLimits

0x0d11,	// (0x00041d2b) popup_snote_single_graphic_window_t4

0x0d45,	// (0x00041d5f) popup_snote_single_graphic_window_t5_ParamLimits

0x0d45,	// (0x00041d5f) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x000505a9) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x000505a9) popup_snote_single_graphic_window_t

0xb015,	// (0x0004c02f) grid_graphic_popup_pane_ParamLimits

0xb015,	// (0x0004c02f) grid_graphic_popup_pane

0xb043,	// (0x0004c05d) listscroll_popup_graphic_pane_g1_ParamLimits

0xb043,	// (0x0004c05d) listscroll_popup_graphic_pane_g1

0xb057,	// (0x0004c071) listscroll_popup_graphic_pane_g2_ParamLimits

0xb057,	// (0x0004c071) listscroll_popup_graphic_pane_g2

0x0001,

0xf98e,	// (0x000509a8) listscroll_popup_graphic_pane_g_ParamLimits

0xf98e,	// (0x000509a8) listscroll_popup_graphic_pane_g

0xb06b,	// (0x0004c085) scroll_pane_cp5

0xafa4,	// (0x0004bfbe) cell_graphic_popup_pane_ParamLimits

0xafa4,	// (0x0004bfbe) cell_graphic_popup_pane

0xaf85,	// (0x0004bf9f) cell_graphic_popup_pane_g1

0xaf8d,	// (0x0004bfa7) cell_graphic_popup_pane_g2

0x0b98,	// (0x00041bb2) cell_graphic_popup_pane_g3

0x0002,

0xf987,	// (0x000509a1) cell_graphic_popup_pane_g

0xaf96,	// (0x0004bfb0) cell_graphic_popup_pane_t2

0x0ba1,	// (0x00041bbb) grid_highlight_pane_cp3

0x0d86,	// (0x00041da0) list_gen_pane_ParamLimits

0x0d86,	// (0x00041da0) list_gen_pane

0x0dae,	// (0x00041dc8) scroll_pane

0xaedd,	// (0x0004bef7) bg_list_pane_g1_ParamLimits

0xaedd,	// (0x0004bef7) bg_list_pane_g1

0xaefa,	// (0x0004bf14) bg_list_pane_g2_ParamLimits

0xaefa,	// (0x0004bf14) bg_list_pane_g2

0xaf0f,	// (0x0004bf29) bg_list_pane_g3_ParamLimits

0xaf0f,	// (0x0004bf29) bg_list_pane_g3

0xaf23,	// (0x0004bf3d) bg_list_pane_g4_ParamLimits

0xaf23,	// (0x0004bf3d) bg_list_pane_g4

0xaf37,	// (0x0004bf51) bg_list_pane_g5_ParamLimits

0xaf37,	// (0x0004bf51) bg_list_pane_g5

0x0004,

0xf97c,	// (0x00050996) bg_list_pane_g_ParamLimits

0xf97c,	// (0x00050996) bg_list_pane_g

0xae75,	// (0x0004be8f) list_double2_graphic_large_graphic_pane_ParamLimits

0xae75,	// (0x0004be8f) list_double2_graphic_large_graphic_pane

0xae75,	// (0x0004be8f) list_double2_graphic_pane_ParamLimits

0xae75,	// (0x0004be8f) list_double2_graphic_pane

0xae75,	// (0x0004be8f) list_double2_large_graphic_pane_ParamLimits

0xae75,	// (0x0004be8f) list_double2_large_graphic_pane

0x56b4,	// (0x000466ce) list_double2_pane_ParamLimits

0x56b4,	// (0x000466ce) list_double2_pane

0xae75,	// (0x0004be8f) list_double_graphic_heading_pane_ParamLimits

0xae75,	// (0x0004be8f) list_double_graphic_heading_pane

0xae75,	// (0x0004be8f) list_double_graphic_pane_ParamLimits

0xae75,	// (0x0004be8f) list_double_graphic_pane

0xae75,	// (0x0004be8f) list_double_heading_pane_ParamLimits

0xae75,	// (0x0004be8f) list_double_heading_pane

0xae75,	// (0x0004be8f) list_double_large_graphic_pane_ParamLimits

0xae75,	// (0x0004be8f) list_double_large_graphic_pane

0xae75,	// (0x0004be8f) list_double_number_pane_ParamLimits

0xae75,	// (0x0004be8f) list_double_number_pane

0xae75,	// (0x0004be8f) list_double_pane_ParamLimits

0xae75,	// (0x0004be8f) list_double_pane

0xae75,	// (0x0004be8f) list_double_time_pane_ParamLimits

0xae75,	// (0x0004be8f) list_double_time_pane

0xae75,	// (0x0004be8f) list_setting_number_pane_ParamLimits

0xae75,	// (0x0004be8f) list_setting_number_pane

0xae75,	// (0x0004be8f) list_setting_pane_ParamLimits

0xae75,	// (0x0004be8f) list_setting_pane

0x7668,	// (0x00048682) list_single_2graphic_pane_ParamLimits

0x7668,	// (0x00048682) list_single_2graphic_pane

0x7668,	// (0x00048682) list_single_graphic_heading_pane_ParamLimits

0x7668,	// (0x00048682) list_single_graphic_heading_pane

0x7668,	// (0x00048682) list_single_graphic_pane_ParamLimits

0x7668,	// (0x00048682) list_single_graphic_pane

0x7668,	// (0x00048682) list_single_heading_pane_ParamLimits

0x7668,	// (0x00048682) list_single_heading_pane

0xaec2,	// (0x0004bedc) list_single_large_graphic_pane_ParamLimits

0xaec2,	// (0x0004bedc) list_single_large_graphic_pane

0x7668,	// (0x00048682) list_single_number_heading_pane_ParamLimits

0x7668,	// (0x00048682) list_single_number_heading_pane

0x7668,	// (0x00048682) list_single_number_pane_ParamLimits

0x7668,	// (0x00048682) list_single_number_pane

0x7668,	// (0x00048682) list_single_pane_ParamLimits

0x7668,	// (0x00048682) list_single_pane

0xd2c7,	// (0x0004e2e1) list_highlight_pane_cp1

0x642c,	// (0x00047446) list_single_pane_g1_ParamLimits

0x642c,	// (0x00047446) list_single_pane_g1

0x6438,	// (0x00047452) list_single_pane_g2_ParamLimits

0x6438,	// (0x00047452) list_single_pane_g2

0x0001,

0xf5ab,	// (0x000505c5) list_single_pane_g_ParamLimits

0xf5ab,	// (0x000505c5) list_single_pane_g

0x569e,	// (0x000466b8) list_single_pane_t1_ParamLimits

0x569e,	// (0x000466b8) list_single_pane_t1

0x642c,	// (0x00047446) list_single_number_pane_g1_ParamLimits

0x642c,	// (0x00047446) list_single_number_pane_g1

0x6438,	// (0x00047452) list_single_number_pane_g2_ParamLimits

0x6438,	// (0x00047452) list_single_number_pane_g2

0x0001,

0xf5ab,	// (0x000505c5) list_single_number_pane_g_ParamLimits

0xf5ab,	// (0x000505c5) list_single_number_pane_g

0x5640,	// (0x0004665a) list_single_number_pane_t1_ParamLimits

0x5640,	// (0x0004665a) list_single_number_pane_t1

0x5656,	// (0x00046670) list_single_number_pane_t2_ParamLimits

0x5656,	// (0x00046670) list_single_number_pane_t2

0x0001,

0xf93d,	// (0x00050957) list_single_number_pane_t_ParamLimits

0xf93d,	// (0x00050957) list_single_number_pane_t

0x4d94,	// (0x00045dae) list_single_graphic_pane_g1_ParamLimits

0x4d94,	// (0x00045dae) list_single_graphic_pane_g1

0x642c,	// (0x00047446) list_single_graphic_pane_g2_ParamLimits

0x642c,	// (0x00047446) list_single_graphic_pane_g2

0x6438,	// (0x00047452) list_single_graphic_pane_g3_ParamLimits

0x6438,	// (0x00047452) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x000505b4) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x000505b4) list_single_graphic_pane_g

0x4da0,	// (0x00045dba) list_single_graphic_pane_t1_ParamLimits

0x4da0,	// (0x00045dba) list_single_graphic_pane_t1

0x4db6,	// (0x00045dd0) list_single_heading_pane_g1_ParamLimits

0x4db6,	// (0x00045dd0) list_single_heading_pane_g1

0x6438,	// (0x00047452) list_single_heading_pane_g2_ParamLimits

0x6438,	// (0x00047452) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x000505bb) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x000505bb) list_single_heading_pane_g

0x4dc9,	// (0x00045de3) list_single_heading_pane_t1_ParamLimits

0x4dc9,	// (0x00045de3) list_single_heading_pane_t1

0x6444,	// (0x0004745e) list_single_heading_pane_t2_ParamLimits

0x6444,	// (0x0004745e) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x000505c0) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x000505c0) list_single_heading_pane_t

0x642c,	// (0x00047446) list_single_number_heading_pane_g1_ParamLimits

0x642c,	// (0x00047446) list_single_number_heading_pane_g1

0x6438,	// (0x00047452) list_single_number_heading_pane_g2_ParamLimits

0x6438,	// (0x00047452) list_single_number_heading_pane_g2

0x0001,

0xf5ab,	// (0x000505c5) list_single_number_heading_pane_g_ParamLimits

0xf5ab,	// (0x000505c5) list_single_number_heading_pane_g

0x4ddf,	// (0x00045df9) list_single_number_heading_pane_t1_ParamLimits

0x4ddf,	// (0x00045df9) list_single_number_heading_pane_t1

0x4df5,	// (0x00045e0f) list_single_number_heading_pane_t2_ParamLimits

0x4df5,	// (0x00045e0f) list_single_number_heading_pane_t2

0x4e07,	// (0x00045e21) list_single_number_heading_pane_t3_ParamLimits

0x4e07,	// (0x00045e21) list_single_number_heading_pane_t3

0x0002,

0xf5b0,	// (0x000505ca) list_single_number_heading_pane_t_ParamLimits

0xf5b0,	// (0x000505ca) list_single_number_heading_pane_t

0x4e19,	// (0x00045e33) list_single_graphic_heading_pane_g1_ParamLimits

0x4e19,	// (0x00045e33) list_single_graphic_heading_pane_g1

0x6456,	// (0x00047470) list_single_graphic_heading_pane_g4_ParamLimits

0x6456,	// (0x00047470) list_single_graphic_heading_pane_g4

0x6438,	// (0x00047452) list_single_graphic_heading_pane_g5_ParamLimits

0x6438,	// (0x00047452) list_single_graphic_heading_pane_g5

0x0002,

0xf5b7,	// (0x000505d1) list_single_graphic_heading_pane_g_ParamLimits

0xf5b7,	// (0x000505d1) list_single_graphic_heading_pane_g

0x4ddf,	// (0x00045df9) list_single_graphic_heading_pane_t1_ParamLimits

0x4ddf,	// (0x00045df9) list_single_graphic_heading_pane_t1

0x4e25,	// (0x00045e3f) list_single_graphic_heading_pane_t2_ParamLimits

0x4e25,	// (0x00045e3f) list_single_graphic_heading_pane_t2

0x0001,

0xf5be,	// (0x000505d8) list_single_graphic_heading_pane_t_ParamLimits

0xf5be,	// (0x000505d8) list_single_graphic_heading_pane_t

0x6467,	// (0x00047481) list_single_large_graphic_pane_g1_ParamLimits

0x6467,	// (0x00047481) list_single_large_graphic_pane_g1

0x642c,	// (0x00047446) list_single_large_graphic_pane_g2_ParamLimits

0x642c,	// (0x00047446) list_single_large_graphic_pane_g2

0x6438,	// (0x00047452) list_single_large_graphic_pane_g3_ParamLimits

0x6438,	// (0x00047452) list_single_large_graphic_pane_g3

0x0002,

0xf5c3,	// (0x000505dd) list_single_large_graphic_pane_g_ParamLimits

0xf5c3,	// (0x000505dd) list_single_large_graphic_pane_g

0x9ec9,	// (0x0004aee3) wait_border_pane_g2_copy1

0x6473,	// (0x0004748d) list_single_large_graphic_pane_g4_cp2

0x4e37,	// (0x00045e51) list_single_large_graphic_pane_t1_ParamLimits

0x4e37,	// (0x00045e51) list_single_large_graphic_pane_t1

0x8a07,	// (0x00049a21) list_double_pane_g1_ParamLimits

0x8a07,	// (0x00049a21) list_double_pane_g1

0x4e4d,	// (0x00045e67) list_double_pane_g2_ParamLimits

0x4e4d,	// (0x00045e67) list_double_pane_g2

0x0001,

0xf5ca,	// (0x000505e4) list_double_pane_g_ParamLimits

0xf5ca,	// (0x000505e4) list_double_pane_g

0x4e59,	// (0x00045e73) list_double_pane_t1_ParamLimits

0x4e59,	// (0x00045e73) list_double_pane_t1

0x4e6f,	// (0x00045e89) list_double_pane_t2_ParamLimits

0x4e6f,	// (0x00045e89) list_double_pane_t2

0x0001,

0xf5cf,	// (0x000505e9) list_double_pane_t_ParamLimits

0xf5cf,	// (0x000505e9) list_double_pane_t

0x4e81,	// (0x00045e9b) list_double2_pane_g1_ParamLimits

0x4e81,	// (0x00045e9b) list_double2_pane_g1

0x4e92,	// (0x00045eac) list_double2_pane_g2_ParamLimits

0x4e92,	// (0x00045eac) list_double2_pane_g2

0x0001,

0xf5d4,	// (0x000505ee) list_double2_pane_g_ParamLimits

0xf5d4,	// (0x000505ee) list_double2_pane_g

0x4e9e,	// (0x00045eb8) list_double2_pane_t1_ParamLimits

0x4e9e,	// (0x00045eb8) list_double2_pane_t1

0x4eb4,	// (0x00045ece) list_double2_pane_t2_ParamLimits

0x4eb4,	// (0x00045ece) list_double2_pane_t2

0x0001,

0xf5d9,	// (0x000505f3) list_double2_pane_t_ParamLimits

0xf5d9,	// (0x000505f3) list_double2_pane_t

0x8a07,	// (0x00049a21) list_double_number_pane_g1_ParamLimits

0x8a07,	// (0x00049a21) list_double_number_pane_g1

0x4e4d,	// (0x00045e67) list_double_number_pane_g2_ParamLimits

0x4e4d,	// (0x00045e67) list_double_number_pane_g2

0x0001,

0xf5ca,	// (0x000505e4) list_double_number_pane_g_ParamLimits

0xf5ca,	// (0x000505e4) list_double_number_pane_g

0x4ec6,	// (0x00045ee0) list_double_number_pane_t1_ParamLimits

0x4ec6,	// (0x00045ee0) list_double_number_pane_t1

0x4ed8,	// (0x00045ef2) list_double_number_pane_t2_ParamLimits

0x4ed8,	// (0x00045ef2) list_double_number_pane_t2

0x4eee,	// (0x00045f08) list_double_number_pane_t3_ParamLimits

0x4eee,	// (0x00045f08) list_double_number_pane_t3

0x0002,

0xf5de,	// (0x000505f8) list_double_number_pane_t_ParamLimits

0xf5de,	// (0x000505f8) list_double_number_pane_t

0x4f00,	// (0x00045f1a) list_double_graphic_pane_g1_ParamLimits

0x4f00,	// (0x00045f1a) list_double_graphic_pane_g1

0x4f0c,	// (0x00045f26) list_double_graphic_pane_g2_ParamLimits

0x4f0c,	// (0x00045f26) list_double_graphic_pane_g2

0x4f1b,	// (0x00045f35) list_double_graphic_pane_g3_ParamLimits

0x4f1b,	// (0x00045f35) list_double_graphic_pane_g3

0x0003,

0xf5e5,	// (0x000505ff) list_double_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000505ff) list_double_graphic_pane_g

0x4f33,	// (0x00045f4d) list_double_graphic_pane_t1_ParamLimits

0x4f33,	// (0x00045f4d) list_double_graphic_pane_t1

0x4f49,	// (0x00045f63) list_double_graphic_pane_t2_ParamLimits

0x4f49,	// (0x00045f63) list_double_graphic_pane_t2

0x0001,

0xf5ee,	// (0x00050608) list_double_graphic_pane_t_ParamLimits

0xf5ee,	// (0x00050608) list_double_graphic_pane_t

0x4f5b,	// (0x00045f75) list_double2_graphic_pane_g1_ParamLimits

0x4f5b,	// (0x00045f75) list_double2_graphic_pane_g1

0x647b,	// (0x00047495) list_double2_graphic_pane_g2_ParamLimits

0x647b,	// (0x00047495) list_double2_graphic_pane_g2

0x6487,	// (0x000474a1) list_double2_graphic_pane_g3_ParamLimits

0x6487,	// (0x000474a1) list_double2_graphic_pane_g3

0x0002,

0xf5f3,	// (0x0005060d) list_double2_graphic_pane_g_ParamLimits

0xf5f3,	// (0x0005060d) list_double2_graphic_pane_g

0x4f67,	// (0x00045f81) list_double2_graphic_pane_t1_ParamLimits

0x4f67,	// (0x00045f81) list_double2_graphic_pane_t1

0x4f7d,	// (0x00045f97) list_double2_graphic_pane_t2_ParamLimits

0x4f7d,	// (0x00045f97) list_double2_graphic_pane_t2

0x0001,

0xf5fa,	// (0x00050614) list_double2_graphic_pane_t_ParamLimits

0xf5fa,	// (0x00050614) list_double2_graphic_pane_t

0x4f8f,	// (0x00045fa9) list_double_large_graphic_pane_g1_ParamLimits

0x4f8f,	// (0x00045fa9) list_double_large_graphic_pane_g1

0x4fae,	// (0x00045fc8) list_double_large_graphic_pane_g2_ParamLimits

0x4fae,	// (0x00045fc8) list_double_large_graphic_pane_g2

0x4e4d,	// (0x00045e67) list_double_large_graphic_pane_g3_ParamLimits

0x4e4d,	// (0x00045e67) list_double_large_graphic_pane_g3

0x6493,	// (0x000474ad) list_double_large_graphic_pane_g4_ParamLimits

0x6493,	// (0x000474ad) list_double_large_graphic_pane_g4

0x0004,

0xf5ff,	// (0x00050619) list_double_large_graphic_pane_g_ParamLimits

0xf5ff,	// (0x00050619) list_double_large_graphic_pane_g

0x4fc4,	// (0x00045fde) list_double_large_graphic_pane_t1_ParamLimits

0x4fc4,	// (0x00045fde) list_double_large_graphic_pane_t1

0x4fdd,	// (0x00045ff7) list_double_large_graphic_pane_t2_ParamLimits

0x4fdd,	// (0x00045ff7) list_double_large_graphic_pane_t2

0x0001,

0xf60a,	// (0x00050624) list_double_large_graphic_pane_t_ParamLimits

0xf60a,	// (0x00050624) list_double_large_graphic_pane_t

0x64bb,	// (0x000474d5) list_double2_large_graphic_pane_g1_ParamLimits

0x64bb,	// (0x000474d5) list_double2_large_graphic_pane_g1

0x64c7,	// (0x000474e1) list_double2_large_graphic_pane_g2_ParamLimits

0x64c7,	// (0x000474e1) list_double2_large_graphic_pane_g2

0x6487,	// (0x000474a1) list_double2_large_graphic_pane_g3_ParamLimits

0x6487,	// (0x000474a1) list_double2_large_graphic_pane_g3

0x0002,

0xf60f,	// (0x00050629) list_double2_large_graphic_pane_g_ParamLimits

0xf60f,	// (0x00050629) list_double2_large_graphic_pane_g

0x4fef,	// (0x00046009) list_double2_large_graphic_pane_t1_ParamLimits

0x4fef,	// (0x00046009) list_double2_large_graphic_pane_t1

0x5005,	// (0x0004601f) list_double2_large_graphic_pane_t2_ParamLimits

0x5005,	// (0x0004601f) list_double2_large_graphic_pane_t2

0x0001,

0xf616,	// (0x00050630) list_double2_large_graphic_pane_t_ParamLimits

0xf616,	// (0x00050630) list_double2_large_graphic_pane_t

0x5017,	// (0x00046031) list_double_heading_pane_g1_ParamLimits

0x5017,	// (0x00046031) list_double_heading_pane_g1

0x5028,	// (0x00046042) list_double_heading_pane_g2_ParamLimits

0x5028,	// (0x00046042) list_double_heading_pane_g2

0x0001,

0xf61b,	// (0x00050635) list_double_heading_pane_g_ParamLimits

0xf61b,	// (0x00050635) list_double_heading_pane_g

0x5034,	// (0x0004604e) list_double_heading_pane_t1_ParamLimits

0x5034,	// (0x0004604e) list_double_heading_pane_t1

0x504a,	// (0x00046064) list_double_heading_pane_t2_ParamLimits

0x504a,	// (0x00046064) list_double_heading_pane_t2

0x0001,

0xf620,	// (0x0005063a) list_double_heading_pane_t_ParamLimits

0xf620,	// (0x0005063a) list_double_heading_pane_t

0x505c,	// (0x00046076) list_double_graphic_heading_pane_g1_ParamLimits

0x505c,	// (0x00046076) list_double_graphic_heading_pane_g1

0x5017,	// (0x00046031) list_double_graphic_heading_pane_g2_ParamLimits

0x5017,	// (0x00046031) list_double_graphic_heading_pane_g2

0x5028,	// (0x00046042) list_double_graphic_heading_pane_g3_ParamLimits

0x5028,	// (0x00046042) list_double_graphic_heading_pane_g3

0x0002,

0xf625,	// (0x0005063f) list_double_graphic_heading_pane_g_ParamLimits

0xf625,	// (0x0005063f) list_double_graphic_heading_pane_g

0x5068,	// (0x00046082) list_double_graphic_heading_pane_t1_ParamLimits

0x5068,	// (0x00046082) list_double_graphic_heading_pane_t1

0x507e,	// (0x00046098) list_double_graphic_heading_pane_t2_ParamLimits

0x507e,	// (0x00046098) list_double_graphic_heading_pane_t2

0x0001,

0xf62c,	// (0x00050646) list_double_graphic_heading_pane_t_ParamLimits

0xf62c,	// (0x00050646) list_double_graphic_heading_pane_t

0x5090,	// (0x000460aa) list_double_time_pane_g1_ParamLimits

0x5090,	// (0x000460aa) list_double_time_pane_g1

0x50a1,	// (0x000460bb) list_double_time_pane_g2_ParamLimits

0x50a1,	// (0x000460bb) list_double_time_pane_g2

0x0001,

0xf631,	// (0x0005064b) list_double_time_pane_g_ParamLimits

0xf631,	// (0x0005064b) list_double_time_pane_g

0x50ad,	// (0x000460c7) list_double_time_pane_t1_ParamLimits

0x50ad,	// (0x000460c7) list_double_time_pane_t1

0x50c3,	// (0x000460dd) list_double_time_pane_t2_ParamLimits

0x50c3,	// (0x000460dd) list_double_time_pane_t2

0x50d5,	// (0x000460ef) list_double_time_pane_t3_ParamLimits

0x50d5,	// (0x000460ef) list_double_time_pane_t3

0x50e7,	// (0x00046101) list_double_time_pane_t4_ParamLimits

0x50e7,	// (0x00046101) list_double_time_pane_t4

0x0003,

0xf636,	// (0x00050650) list_double_time_pane_t_ParamLimits

0xf636,	// (0x00050650) list_double_time_pane_t

0x50f9,	// (0x00046113) list_setting_pane_g1_ParamLimits

0x50f9,	// (0x00046113) list_setting_pane_g1

0x5105,	// (0x0004611f) list_setting_pane_g2_ParamLimits

0x5105,	// (0x0004611f) list_setting_pane_g2

0x0001,

0xf63f,	// (0x00050659) list_setting_pane_g_ParamLimits

0xf63f,	// (0x00050659) list_setting_pane_g

0x5111,	// (0x0004612b) list_setting_pane_t1_ParamLimits

0x5111,	// (0x0004612b) list_setting_pane_t1

0x512b,	// (0x00046145) list_setting_pane_t2_ParamLimits

0x512b,	// (0x00046145) list_setting_pane_t2

0x0002,

0xf644,	// (0x0005065e) list_setting_pane_t_ParamLimits

0xf644,	// (0x0005065e) list_setting_pane_t

0x516a,	// (0x00046184) set_value_pane_cp_ParamLimits

0x516a,	// (0x00046184) set_value_pane_cp

0x5178,	// (0x00046192) list_setting_number_pane_g1_ParamLimits

0x5178,	// (0x00046192) list_setting_number_pane_g1

0x5184,	// (0x0004619e) list_setting_number_pane_g2_ParamLimits

0x5184,	// (0x0004619e) list_setting_number_pane_g2

0x0001,

0xf64b,	// (0x00050665) list_setting_number_pane_g_ParamLimits

0xf64b,	// (0x00050665) list_setting_number_pane_g

0x5190,	// (0x000461aa) list_setting_number_pane_t1_ParamLimits

0x5190,	// (0x000461aa) list_setting_number_pane_t1

0x51a9,	// (0x000461c3) list_setting_number_pane_t2_ParamLimits

0x51a9,	// (0x000461c3) list_setting_number_pane_t2

0x51c3,	// (0x000461dd) list_setting_number_pane_t3_ParamLimits

0x51c3,	// (0x000461dd) list_setting_number_pane_t3

0x0003,

0xf650,	// (0x0005066a) list_setting_number_pane_t_ParamLimits

0xf650,	// (0x0005066a) list_setting_number_pane_t

0x516a,	// (0x00046184) set_value_pane_ParamLimits

0x516a,	// (0x00046184) set_value_pane

0x0de2,	// (0x00041dfc) bg_set_opt_pane_ParamLimits

0x0de2,	// (0x00041dfc) bg_set_opt_pane

0x5206,	// (0x00046220) set_value_pane_t1

0x0e03,	// (0x00041e1d) slider_set_pane_cp3

0x0e0c,	// (0x00041e26) volume_small_pane_cp

0x0e15,	// (0x00041e2f) list_form_gen_pane

0x0e1e,	// (0x00041e38) scroll_pane_cp8

0x521c,	// (0x00046236) form_field_data_pane_ParamLimits

0x521c,	// (0x00046236) form_field_data_pane

0x5244,	// (0x0004625e) form_field_data_wide_pane_ParamLimits

0x5244,	// (0x0004625e) form_field_data_wide_pane

0x526b,	// (0x00046285) form_field_popup_pane_ParamLimits

0x526b,	// (0x00046285) form_field_popup_pane

0x528d,	// (0x000462a7) form_field_popup_wide_pane_ParamLimits

0x528d,	// (0x000462a7) form_field_popup_wide_pane

0x52ae,	// (0x000462c8) form_field_slider_pane_ParamLimits

0x52ae,	// (0x000462c8) form_field_slider_pane

0x52c1,	// (0x000462db) form_field_slider_wide_pane_ParamLimits

0x52c1,	// (0x000462db) form_field_slider_wide_pane

0x0e2f,	// (0x00041e49) data_form_pane

0x52de,	// (0x000462f8) form_field_data_pane_t1

0x0e3b,	// (0x00041e55) input_focus_pane

0x52f8,	// (0x00046312) data_form_wide_pane

0x5315,	// (0x0004632f) form_field_data_wide_pane_t1

0x0bb6,	// (0x00041bd0) input_focus_pane_cp6

0x5337,	// (0x00046351) form_field_popup_pane_t1

0x0e3b,	// (0x00041e55) input_focus_pane_cp7

0x0e69,	// (0x00041e83) list_form_pane

0x5359,	// (0x00046373) form_field_popup_wide_pane_t1

0x0e3b,	// (0x00041e55) input_focus_pane_cp8

0x0e75,	// (0x00041e8f) list_form_wide_pane

0x5376,	// (0x00046390) form_field_slider_pane_t1_ParamLimits

0x5376,	// (0x00046390) form_field_slider_pane_t1

0x538e,	// (0x000463a8) form_field_slider_pane_t2_ParamLimits

0x538e,	// (0x000463a8) form_field_slider_pane_t2

0x0001,

0xf660,	// (0x0005067a) form_field_slider_pane_t_ParamLimits

0xf660,	// (0x0005067a) form_field_slider_pane_t

0xd351,	// (0x0004e36b) input_focus_pane_cp9_ParamLimits

0xd351,	// (0x0004e36b) input_focus_pane_cp9

0x53a3,	// (0x000463bd) slider_cont_pane_ParamLimits

0x53a3,	// (0x000463bd) slider_cont_pane

0x0e81,	// (0x00041e9b) form_field_slider_wide_pane_t1_ParamLimits

0x0e81,	// (0x00041e9b) form_field_slider_wide_pane_t1

0x53b7,	// (0x000463d1) form_field_slider_wide_pane_t2_ParamLimits

0x53b7,	// (0x000463d1) form_field_slider_wide_pane_t2

0x0001,

0xf665,	// (0x0005067f) form_field_slider_wide_pane_t_ParamLimits

0xf665,	// (0x0005067f) form_field_slider_wide_pane_t

0xd351,	// (0x0004e36b) input_focus_pane_cp10_ParamLimits

0xd351,	// (0x0004e36b) input_focus_pane_cp10

0x53c9,	// (0x000463e3) slider_cont_pane_cp1_ParamLimits

0x53c9,	// (0x000463e3) slider_cont_pane_cp1

0x53dd,	// (0x000463f7) slider_form_pane_cp

0x0e93,	// (0x00041ead) input_focus_pane_g1

0x0e9b,	// (0x00041eb5) input_focus_pane_g2

0x0ea3,	// (0x00041ebd) input_focus_pane_g3

0x0eab,	// (0x00041ec5) input_focus_pane_g4

0x0eb3,	// (0x00041ecd) input_focus_pane_g5

0x0ebb,	// (0x00041ed5) input_focus_pane_g6

0x0ec3,	// (0x00041edd) input_focus_pane_g7

0x0ecb,	// (0x00041ee5) input_focus_pane_g8

0x0ed3,	// (0x00041eed) input_focus_pane_g9

0xd2bd,	// (0x0004e2d7) input_focus_pane_g10

0x0009,

0xf66a,	// (0x00050684) input_focus_pane_g

0x9ed2,	// (0x0004aeec) wait_border_pane_g3_copy1

0x53e5,	// (0x000463ff) data_form_pane_t1

0xd2bd,	// (0x0004e2d7) wait_anim_pane_g1_copy1

0x5668,	// (0x00046682) data_form_wide_pane_t1

0x5404,	// (0x0004641e) list_form_graphic_pane_cp_ParamLimits

0x5404,	// (0x0004641e) list_form_graphic_pane_cp

0xae19,	// (0x0004be33) slider_form_pane_g1

0xae22,	// (0x0004be3c) slider_form_pane_g2

0x0006,

0xf96d,	// (0x00050987) slider_form_pane_g

0x5404,	// (0x0004641e) list_form_graphic_pane_ParamLimits

0x5404,	// (0x0004641e) list_form_graphic_pane

0x5416,	// (0x00046430) list_form_graphic_pane_g1

0x541e,	// (0x00046438) list_form_graphic_pane_t1_ParamLimits

0x541e,	// (0x00046438) list_form_graphic_pane_t1

0xd315,	// (0x0004e32f) list_highlight_pane_cp5_ParamLimits

0xd315,	// (0x0004e32f) list_highlight_pane_cp5

0x5433,	// (0x0004644d) find_pane_g1

0x3cac,	// (0x00044cc6) input_find_pane

0x543c,	// (0x00046456) input_find_pane_g1_ParamLimits

0x543c,	// (0x00046456) input_find_pane_g1

0x5448,	// (0x00046462) input_find_pane_t1_ParamLimits

0x5448,	// (0x00046462) input_find_pane_t1

0x545d,	// (0x00046477) input_find_pane_t2_ParamLimits

0x545d,	// (0x00046477) input_find_pane_t2

0x0001,

0xf67f,	// (0x00050699) input_find_pane_t_ParamLimits

0xf67f,	// (0x00050699) input_find_pane_t

0x3cb5,	// (0x00044ccf) input_focus_pane_cp5_ParamLimits

0x3cb5,	// (0x00044ccf) input_focus_pane_cp5

0x3cc8,	// (0x00044ce2) bg_popup_window_pane_cp2_ParamLimits

0x3cc8,	// (0x00044ce2) bg_popup_window_pane_cp2

0x3cd5,	// (0x00044cef) listscroll_menu_pane_ParamLimits

0x3cd5,	// (0x00044cef) listscroll_menu_pane

0x64e4,	// (0x000474fe) popup_submenu_window_ParamLimits

0x64e4,	// (0x000474fe) popup_submenu_window

0x3ce1,	// (0x00044cfb) find_popup_pane_g1

0x3ce9,	// (0x00044d03) input_popup_find_pane_cp

0x3cf3,	// (0x00044d0d) input_focus_pane_cp4_ParamLimits

0x3cf3,	// (0x00044d0d) input_focus_pane_cp4

0x3d01,	// (0x00044d1b) input_popup_find_pane_t1_ParamLimits

0x3d01,	// (0x00044d1b) input_popup_find_pane_t1

0xd2c7,	// (0x0004e2e1) bg_popup_sub_pane_cp

0x3d2f,	// (0x00044d49) listscroll_popup_sub_pane

0x3d37,	// (0x00044d51) list_submenu_pane_ParamLimits

0x3d37,	// (0x00044d51) list_submenu_pane

0x3d48,	// (0x00044d62) scroll_pane_cp4

0x3d50,	// (0x00044d6a) list_single_popup_submenu_pane_ParamLimits

0x3d50,	// (0x00044d6a) list_single_popup_submenu_pane

0x3d65,	// (0x00044d7f) list_single_popup_submenu_pane_g1

0x3d6d,	// (0x00044d87) list_single_popup_submenu_pane_t1_ParamLimits

0x3d6d,	// (0x00044d87) list_single_popup_submenu_pane_t1

0xd315,	// (0x0004e32f) bg_active_tab_pane_cp1_ParamLimits

0xd315,	// (0x0004e32f) bg_active_tab_pane_cp1

0x6522,	// (0x0004753c) tabs_2_active_pane_g1

0x652a,	// (0x00047544) tabs_2_active_pane_t1

0xd315,	// (0x0004e32f) bg_passive_tab_pane_cp1_ParamLimits

0xd315,	// (0x0004e32f) bg_passive_tab_pane_cp1

0x6522,	// (0x0004753c) tabs_2_passive_pane_g1

0x652a,	// (0x00047544) tabs_2_passive_pane_t1

0x653c,	// (0x00047556) bg_active_tab_pane_cp4

0x654a,	// (0x00047564) tabs_2_long_active_pane_t1

0x655d,	// (0x00047577) bg_passive_tab_pane_cp4

0x7311,	// (0x0004832b) list_single_midp_graphic_pane_g4_ParamLimits

0x653c,	// (0x00047556) bg_active_tab_pane_cp5

0x6569,	// (0x00047583) tabs_3_long_active_pane_t1

0x655d,	// (0x00047577) bg_passive_tab_pane_cp5

0x7311,	// (0x0004832b) list_single_midp_graphic_pane_g4

0xd315,	// (0x0004e32f) bg_popup_window_pane_cp13_ParamLimits

0xd315,	// (0x0004e32f) bg_popup_window_pane_cp13

0x3d8b,	// (0x00044da5) listscroll_popup_fast_pane_ParamLimits

0x3d8b,	// (0x00044da5) listscroll_popup_fast_pane

0x3d9a,	// (0x00044db4) grid_popup_fast_pane_ParamLimits

0x3d9a,	// (0x00044db4) grid_popup_fast_pane

0x3dac,	// (0x00044dc6) scroll_pane_cp9_ParamLimits

0x3dac,	// (0x00044dc6) scroll_pane_cp9

0xc78a,	// (0x0004d7a4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc78a,	// (0x0004d7a4) list_single_graphic_hl_pane_t1_cp2

0x3dd0,	// (0x00044dea) input_focus_pane_cp20_ParamLimits

0x3dd0,	// (0x00044dea) input_focus_pane_cp20

0x3dde,	// (0x00044df8) query_popup_data_pane_t1_ParamLimits

0x3dde,	// (0x00044df8) query_popup_data_pane_t1

0x3df1,	// (0x00044e0b) query_popup_data_pane_t2_ParamLimits

0x3df1,	// (0x00044e0b) query_popup_data_pane_t2

0x3e37,	// (0x00044e51) query_popup_data_pane_t3_ParamLimits

0x3e37,	// (0x00044e51) query_popup_data_pane_t3

0x3e78,	// (0x00044e92) query_popup_data_pane_t4_ParamLimits

0x3e78,	// (0x00044e92) query_popup_data_pane_t4

0x3eb4,	// (0x00044ece) query_popup_data_pane_t5_ParamLimits

0x3eb4,	// (0x00044ece) query_popup_data_pane_t5

0x0004,

0xf684,	// (0x0005069e) query_popup_data_pane_t_ParamLimits

0xf684,	// (0x0005069e) query_popup_data_pane_t

0x0e93,	// (0x00041ead) bg_set_opt_pane_g1

0x0e9b,	// (0x00041eb5) bg_set_opt_pane_g2

0x0ea3,	// (0x00041ebd) bg_set_opt_pane_g3

0x0eab,	// (0x00041ec5) bg_set_opt_pane_g4

0x0eb3,	// (0x00041ecd) bg_set_opt_pane_g5

0x0ebb,	// (0x00041ed5) bg_set_opt_pane_g6

0x0ec3,	// (0x00041edd) bg_set_opt_pane_g7

0x0ecb,	// (0x00041ee5) bg_set_opt_pane_g8

0x0ed3,	// (0x00041eed) bg_set_opt_pane_g9

0x0008,

0xf68f,	// (0x000506a9) bg_set_opt_pane_g

0x693e,	// (0x00047958) control_top_pane_stacon_ParamLimits

0x693e,	// (0x00047958) control_top_pane_stacon

0x6991,	// (0x000479ab) signal_pane_stacon_ParamLimits

0x6991,	// (0x000479ab) signal_pane_stacon

0x8d08,	// (0x00049d22) stacon_top_pane_g1_ParamLimits

0x8d08,	// (0x00049d22) stacon_top_pane_g1

0x69b6,	// (0x000479d0) title_pane_stacon_ParamLimits

0x69b6,	// (0x000479d0) title_pane_stacon

0x69e0,	// (0x000479fa) uni_indicator_pane_stacon_ParamLimits

0x69e0,	// (0x000479fa) uni_indicator_pane_stacon

0x69f5,	// (0x00047a0f) battery_pane_stacon_ParamLimits

0x69f5,	// (0x00047a0f) battery_pane_stacon

0x6a39,	// (0x00047a53) control_bottom_pane_stacon_ParamLimits

0x6a39,	// (0x00047a53) control_bottom_pane_stacon

0x6a5c,	// (0x00047a76) navi_pane_stacon_ParamLimits

0x6a5c,	// (0x00047a76) navi_pane_stacon

0x8d2a,	// (0x00049d44) stacon_bottom_pane_g1_ParamLimits

0x8d2a,	// (0x00049d44) stacon_bottom_pane_g1

0x657b,	// (0x00047595) aid_levels_signal_lsc_ParamLimits

0x657b,	// (0x00047595) aid_levels_signal_lsc

0x6592,	// (0x000475ac) signal_pane_stacon_g1_ParamLimits

0x6592,	// (0x000475ac) signal_pane_stacon_g1

0x65a6,	// (0x000475c0) signal_pane_stacon_g2_ParamLimits

0x65a6,	// (0x000475c0) signal_pane_stacon_g2

0x0001,

0xf6a2,	// (0x000506bc) signal_pane_stacon_g_ParamLimits

0xf6a2,	// (0x000506bc) signal_pane_stacon_g

0x65db,	// (0x000475f5) title_pane_stacon_t1_ParamLimits

0x65db,	// (0x000475f5) title_pane_stacon_t1

0x3f91,	// (0x00044fab) uni_indicator_pane_stacon_g1

0x3f9b,	// (0x00044fb5) uni_indicator_pane_stacon_g2

0x3f7d,	// (0x00044f97) uni_indicator_pane_stacon_g3

0x3f87,	// (0x00044fa1) uni_indicator_pane_stacon_g4

0x0003,

0xf6ae,	// (0x000506c8) uni_indicator_pane_stacon_g

0x6600,	// (0x0004761a) control_top_pane_stacon_g1

0x6608,	// (0x00047622) control_top_pane_stacon_t1_ParamLimits

0x6608,	// (0x00047622) control_top_pane_stacon_t1

0x663f,	// (0x00047659) aid_levels_battery_lsc_ParamLimits

0x663f,	// (0x00047659) aid_levels_battery_lsc

0x6657,	// (0x00047671) battery_pane_stacon_g1_ParamLimits

0x6657,	// (0x00047671) battery_pane_stacon_g1

0x6669,	// (0x00047683) battery_pane_stacon_g2_ParamLimits

0x6669,	// (0x00047683) battery_pane_stacon_g2

0x0001,

0xf6b7,	// (0x000506d1) battery_pane_stacon_g_ParamLimits

0xf6b7,	// (0x000506d1) battery_pane_stacon_g

0x66a7,	// (0x000476c1) navi_icon_pane_stacon

0x66bb,	// (0x000476d5) navi_navi_pane_stacon

0x66a7,	// (0x000476c1) navi_text_pane_stacon

0x66d1,	// (0x000476eb) control_bottom_pane_stacon_g1

0x66d9,	// (0x000476f3) control_bottom_pane_stacon_t1_ParamLimits

0x66d9,	// (0x000476f3) control_bottom_pane_stacon_t1

0x6710,	// (0x0004772a) grid_app_pane_ParamLimits

0x6710,	// (0x0004772a) grid_app_pane

0x6732,	// (0x0004774c) scroll_pane_cp15_ParamLimits

0x6732,	// (0x0004774c) scroll_pane_cp15

0x6745,	// (0x0004775f) cell_app_pane_ParamLimits

0x6745,	// (0x0004775f) cell_app_pane

0x6771,	// (0x0004778b) cell_app_pane_g1_ParamLimits

0x6771,	// (0x0004778b) cell_app_pane_g1

0x40cf,	// (0x000450e9) cell_app_pane_g2_ParamLimits

0x40cf,	// (0x000450e9) cell_app_pane_g2

0x0001,

0xf6bc,	// (0x000506d6) cell_app_pane_g_ParamLimits

0xf6bc,	// (0x000506d6) cell_app_pane_g

0x6795,	// (0x000477af) cell_app_pane_t1_ParamLimits

0x6795,	// (0x000477af) cell_app_pane_t1

0x40db,	// (0x000450f5) grid_highlight_pane_ParamLimits

0x40db,	// (0x000450f5) grid_highlight_pane

0x0e93,	// (0x00041ead) cell_highlight_pane_g1

0x0e9b,	// (0x00041eb5) cell_highlight_pane_g2

0x0ea3,	// (0x00041ebd) cell_highlight_pane_g3

0x0eab,	// (0x00041ec5) cell_highlight_pane_g4

0x0eb3,	// (0x00041ecd) cell_highlight_pane_g5

0x0ebb,	// (0x00041ed5) cell_highlight_pane_g6

0x0ec3,	// (0x00041edd) cell_highlight_pane_g7

0x0ecb,	// (0x00041ee5) cell_highlight_pane_g8

0x0ed3,	// (0x00041eed) cell_highlight_pane_g9

0xd2bd,	// (0x0004e2d7) cell_highlight_pane_g10

0x0009,

0xf66a,	// (0x00050684) cell_highlight_pane_g

0x40f6,	// (0x00045110) bg_scroll_pane

0x67d9,	// (0x000477f3) scroll_handle_pane

0x4166,	// (0x00045180) scroll_bg_pane_g1

0x417b,	// (0x00045195) scroll_bg_pane_g2

0x4193,	// (0x000451ad) scroll_bg_pane_g3

0x0002,

0xf6c1,	// (0x000506db) scroll_bg_pane_g

0x41a8,	// (0x000451c2) scroll_handle_focus_pane_ParamLimits

0x41a8,	// (0x000451c2) scroll_handle_focus_pane

0x4166,	// (0x00045180) scroll_handle_pane_g1

0x41b5,	// (0x000451cf) scroll_handle_pane_g2

0x4193,	// (0x000451ad) scroll_handle_pane_g3

0x0002,

0xf6c8,	// (0x000506e2) scroll_handle_pane_g

0x3cf3,	// (0x00044d0d) bg_popup_sub_pane_cp21_ParamLimits

0x3cf3,	// (0x00044d0d) bg_popup_sub_pane_cp21

0x41c9,	// (0x000451e3) popup_fep_japan_predictive_window_t1_ParamLimits

0x41c9,	// (0x000451e3) popup_fep_japan_predictive_window_t1

0x41e0,	// (0x000451fa) popup_fep_japan_predictive_window_t2_ParamLimits

0x41e0,	// (0x000451fa) popup_fep_japan_predictive_window_t2

0x4213,	// (0x0004522d) popup_fep_japan_predictive_window_t3_ParamLimits

0x4213,	// (0x0004522d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cf,	// (0x000506e9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cf,	// (0x000506e9) popup_fep_japan_predictive_window_t

0xd2c7,	// (0x0004e2e1) bg_popup_sub_pane_cp23

0x424a,	// (0x00045264) listscroll_japin_cand_pane

0x4252,	// (0x0004526c) popup_fep_japan_candidate_window_t1

0x4260,	// (0x0004527a) candidate_pane_ParamLimits

0x4260,	// (0x0004527a) candidate_pane

0x4272,	// (0x0004528c) scroll_pane_cp30

0x427c,	// (0x00045296) list_single_popup_jap_candidate_pane_ParamLimits

0x427c,	// (0x00045296) list_single_popup_jap_candidate_pane

0xd2c7,	// (0x0004e2e1) list_highlight_pane_cp30

0x4290,	// (0x000452aa) list_single_popup_jap_candidate_pane_t1

0x6802,	// (0x0004781c) level_1_signal

0x680f,	// (0x00047829) level_2_signal

0x681c,	// (0x00047836) level_3_signal

0x6829,	// (0x00047843) level_4_signal

0x8a13,	// (0x00049a2d) level_5_signal

0x8a20,	// (0x00049a3a) level_6_signal

0x8a2d,	// (0x00049a47) level_7_signal

0x6802,	// (0x0004781c) level_1_battery

0x680f,	// (0x00047829) level_2_battery

0x681c,	// (0x00047836) level_3_battery

0x6829,	// (0x00047843) level_4_battery

0x8a13,	// (0x00049a2d) level_5_battery

0x8a20,	// (0x00049a3a) level_6_battery

0x8a2d,	// (0x00049a47) level_7_battery

0x8a52,	// (0x00049a6c) list_menu_pane_ParamLimits

0x8a52,	// (0x00049a6c) list_menu_pane

0x8a68,	// (0x00049a82) scroll_pane_cp25_ParamLimits

0x8a68,	// (0x00049a82) scroll_pane_cp25

0x8a81,	// (0x00049a9b) list_double2_graphic_pane_cp2_ParamLimits

0x8a81,	// (0x00049a9b) list_double2_graphic_pane_cp2

0x8a81,	// (0x00049a9b) list_double2_large_graphic_pane_cp2_ParamLimits

0x8a81,	// (0x00049a9b) list_double2_large_graphic_pane_cp2

0x8a81,	// (0x00049a9b) list_double2_pane_cp2_ParamLimits

0x8a81,	// (0x00049a9b) list_double2_pane_cp2

0x8a81,	// (0x00049a9b) list_double_graphic_pane_cp2_ParamLimits

0x8a81,	// (0x00049a9b) list_double_graphic_pane_cp2

0x8a81,	// (0x00049a9b) list_double_large_graphic_pane_cp2_ParamLimits

0x8a81,	// (0x00049a9b) list_double_large_graphic_pane_cp2

0x8a81,	// (0x00049a9b) list_double_number_pane_cp2_ParamLimits

0x8a81,	// (0x00049a9b) list_double_number_pane_cp2

0x8a81,	// (0x00049a9b) list_double_pane_cp2_ParamLimits

0x8a81,	// (0x00049a9b) list_double_pane_cp2

0x8aa7,	// (0x00049ac1) list_single_2graphic_pane_cp2_ParamLimits

0x8aa7,	// (0x00049ac1) list_single_2graphic_pane_cp2

0x8aa7,	// (0x00049ac1) list_single_graphic_heading_pane_cp2_ParamLimits

0x8aa7,	// (0x00049ac1) list_single_graphic_heading_pane_cp2

0x8aa7,	// (0x00049ac1) list_single_graphic_pane_cp2_ParamLimits

0x8aa7,	// (0x00049ac1) list_single_graphic_pane_cp2

0x8aa7,	// (0x00049ac1) list_single_heading_pane_cp2_ParamLimits

0x8aa7,	// (0x00049ac1) list_single_heading_pane_cp2

0x8ac4,	// (0x00049ade) list_single_large_graphic_pane_cp2_ParamLimits

0x8ac4,	// (0x00049ade) list_single_large_graphic_pane_cp2

0x8aa7,	// (0x00049ac1) list_single_number_heading_pane_cp2_ParamLimits

0x8aa7,	// (0x00049ac1) list_single_number_heading_pane_cp2

0x8aa7,	// (0x00049ac1) list_single_number_pane_cp2_ParamLimits

0x8aa7,	// (0x00049ac1) list_single_number_pane_cp2

0x8ad4,	// (0x00049aee) list_single_pane_cp2_ParamLimits

0x8ad4,	// (0x00049aee) list_single_pane_cp2

0x8b4f,	// (0x00049b69) bg_popup_sub_pane_cp22

0x68bf,	// (0x000478d9) popup_side_volume_key_window_g1

0x68e9,	// (0x00047903) popup_side_volume_key_window_t1

0x6907,	// (0x00047921) volume_small_pane_cp1

0xd351,	// (0x0004e36b) bg_popup_sub_pane_cp24_ParamLimits

0xd351,	// (0x0004e36b) bg_popup_sub_pane_cp24

0x8b65,	// (0x00049b7f) fep_china_uni_candidate_pane_ParamLimits

0x8b65,	// (0x00049b7f) fep_china_uni_candidate_pane

0x8b79,	// (0x00049b93) fep_china_uni_entry_pane

0x8b89,	// (0x00049ba3) popup_fep_china_uni_window_g1

0x8ba5,	// (0x00049bbf) fep_china_uni_entry_pane_g1

0x8baf,	// (0x00049bc9) fep_china_uni_entry_pane_g2

0x0001,

0xf700,	// (0x0005071a) fep_china_uni_entry_pane_g

0x8bb9,	// (0x00049bd3) fep_entry_item_pane

0x8bc3,	// (0x00049bdd) fep_candidate_item_pane

0x8bcb,	// (0x00049be5) fep_china_uni_candidate_pane_g1

0x8bd5,	// (0x00049bef) fep_china_uni_candidate_pane_g2

0x8bdd,	// (0x00049bf7) fep_china_uni_candidate_pane_g3

0x8be5,	// (0x00049bff) fep_china_uni_candidate_pane_g4

0x0003,

0xf705,	// (0x0005071f) fep_china_uni_candidate_pane_g

0xd2bd,	// (0x0004e2d7) fep_entry_item_pane_g1

0x8bef,	// (0x00049c09) fep_entry_item_pane_t1_ParamLimits

0x8bef,	// (0x00049c09) fep_entry_item_pane_t1

0x8c05,	// (0x00049c1f) fep_candidate_item_pane_t1_ParamLimits

0x8c05,	// (0x00049c1f) fep_candidate_item_pane_t1

0x8c1a,	// (0x00049c34) fep_candidate_item_pane_t2_ParamLimits

0x8c1a,	// (0x00049c34) fep_candidate_item_pane_t2

0x0001,

0xf70e,	// (0x00050728) fep_candidate_item_pane_t_ParamLimits

0xf70e,	// (0x00050728) fep_candidate_item_pane_t

0xd315,	// (0x0004e32f) list_highlight_pane_cp31_ParamLimits

0xd315,	// (0x0004e32f) list_highlight_pane_cp31

0x8c2c,	// (0x00049c46) level_1_signal_lsc

0x8c35,	// (0x00049c4f) level_2_signal_lsc

0x8c3e,	// (0x00049c58) level_3_signal_lsc

0x8c47,	// (0x00049c61) level_4_signal_lsc

0x8c50,	// (0x00049c6a) level_5_signal_lsc

0x8c59,	// (0x00049c73) level_6_signal_lsc

0x8c62,	// (0x00049c7c) level_7_signal_lsc

0x8c62,	// (0x00049c7c) level_1_battery_lsc

0x8c6b,	// (0x00049c85) level_2_battery_lsc

0x8c74,	// (0x00049c8e) level_3_battery_lsc

0x8c7d,	// (0x00049c97) level_4_battery_lsc

0x8c86,	// (0x00049ca0) level_5_battery_lsc

0x8c8f,	// (0x00049ca9) level_6_battery_lsc

0x8c2c,	// (0x00049c46) level_7_battery_lsc

0x8c98,	// (0x00049cb2) scroll_handle_focus_pane_g1

0x8ca1,	// (0x00049cbb) scroll_handle_focus_pane_g2

0x8caa,	// (0x00049cc4) scroll_handle_focus_pane_g3

0x0002,

0xf713,	// (0x0005072d) scroll_handle_focus_pane_g

0x5472,	// (0x0004648c) list_single_2graphic_pane_g1_ParamLimits

0x5472,	// (0x0004648c) list_single_2graphic_pane_g1

0x6456,	// (0x00047470) list_single_2graphic_pane_g2_ParamLimits

0x6456,	// (0x00047470) list_single_2graphic_pane_g2

0x6438,	// (0x00047452) list_single_2graphic_pane_g3_ParamLimits

0x6438,	// (0x00047452) list_single_2graphic_pane_g3

0x690f,	// (0x00047929) list_single_2graphic_pane_g4_ParamLimits

0x690f,	// (0x00047929) list_single_2graphic_pane_g4

0x0003,

0xf71a,	// (0x00050734) list_single_2graphic_pane_g_ParamLimits

0xf71a,	// (0x00050734) list_single_2graphic_pane_g

0x547e,	// (0x00046498) list_single_2graphic_pane_t1_ParamLimits

0x547e,	// (0x00046498) list_single_2graphic_pane_t1

0x6920,	// (0x0004793a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6920,	// (0x0004793a) list_double2_graphic_large_graphic_pane_g1

0x64c7,	// (0x000474e1) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x64c7,	// (0x000474e1) list_double2_graphic_large_graphic_pane_g2

0x6487,	// (0x000474a1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6487,	// (0x000474a1) list_double2_graphic_large_graphic_pane_g3

0x6932,	// (0x0004794c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6932,	// (0x0004794c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf723,	// (0x0005073d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf723,	// (0x0005073d) list_double2_graphic_large_graphic_pane_g

0x54ac,	// (0x000464c6) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x54ac,	// (0x000464c6) list_double2_graphic_large_graphic_pane_t1

0x54c2,	// (0x000464dc) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x54c2,	// (0x000464dc) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72c,	// (0x00050746) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72c,	// (0x00050746) list_double2_graphic_large_graphic_pane_t

0x8ded,	// (0x00049e07) popup_fast_swap_window_ParamLimits

0x8ded,	// (0x00049e07) popup_fast_swap_window

0x8e0b,	// (0x00049e25) popup_side_volume_key_window

0x8e29,	// (0x00049e43) stacon_top_pane

0x8e33,	// (0x00049e4d) status_pane_ParamLimits

0x8e33,	// (0x00049e4d) status_pane

0xd2b3,	// (0x0004e2cd) status_small_pane

0xd2c7,	// (0x0004e2e1) control_pane

0xd2c7,	// (0x0004e2e1) stacon_bottom_pane

0x0e1e,	// (0x00041e38) scroll_pane_cp121

0x0e15,	// (0x00041e2f) set_content_pane

0x8cb3,	// (0x00049ccd) bg_active_tab_pane_g1_cp1

0x8cbc,	// (0x00049cd6) bg_active_tab_pane_g2_cp1

0x8cc5,	// (0x00049cdf) bg_active_tab_pane_g3_cp1

0x8cb3,	// (0x00049ccd) bg_passive_tab_pane_g1_cp1

0x8cbc,	// (0x00049cd6) bg_passive_tab_pane_g2_cp1

0x8cc5,	// (0x00049cdf) bg_passive_tab_pane_g3_cp1

0x8cce,	// (0x00049ce8) bg_active_tab_pane_g1_cp2

0x8cbc,	// (0x00049cd6) bg_active_tab_pane_g2_cp2

0x8cd7,	// (0x00049cf1) bg_active_tab_pane_g3_cp2

0x8cce,	// (0x00049ce8) bg_passive_tab_pane_g1_cp2

0x8cbc,	// (0x00049cd6) bg_passive_tab_pane_g2_cp2

0x8cd7,	// (0x00049cf1) bg_passive_tab_pane_g3_cp2

0x8ce0,	// (0x00049cfa) bg_active_tab_pane_g1_cp3

0x8cbc,	// (0x00049cd6) bg_active_tab_pane_g2_cp3

0x8ce9,	// (0x00049d03) bg_active_tab_pane_g3_cp3

0x8ce0,	// (0x00049cfa) bg_passive_tab_pane_g1_cp3

0x8cbc,	// (0x00049cd6) bg_passive_tab_pane_g2_cp3

0x8ce9,	// (0x00049d03) bg_passive_tab_pane_g3_cp3

0x8cf2,	// (0x00049d0c) bg_active_tab_pane_g1_cp4

0x8cbc,	// (0x00049cd6) bg_active_tab_pane_g2_cp4

0x8cfd,	// (0x00049d17) bg_active_tab_pane_g3_cp4

0x8cf2,	// (0x00049d0c) bg_passive_tab_pane_g1_cp4

0x8cbc,	// (0x00049cd6) bg_passive_tab_pane_g2_cp4

0x8cfd,	// (0x00049d17) bg_passive_tab_pane_g3_cp4

0x8d46,	// (0x00049d60) bg_active_tab_pane_g1_cp5

0x8cbc,	// (0x00049cd6) bg_active_tab_pane_g2_cp5

0x8d4f,	// (0x00049d69) bg_active_tab_pane_g3_cp5

0x8d46,	// (0x00049d60) bg_passive_tab_pane_g1_cp5

0x8cbc,	// (0x00049cd6) bg_passive_tab_pane_g2_cp5

0x8d4f,	// (0x00049d69) bg_passive_tab_pane_g3_cp5

0x8d58,	// (0x00049d72) list_set_graphic_pane_ParamLimits

0x8d58,	// (0x00049d72) list_set_graphic_pane

0xd2c7,	// (0x0004e2e1) bg_set_opt_pane_cp4

0x8d6e,	// (0x00049d88) list_set_graphic_pane_g1_ParamLimits

0x8d6e,	// (0x00049d88) list_set_graphic_pane_g1

0x8d7a,	// (0x00049d94) list_set_graphic_pane_g2_ParamLimits

0x8d7a,	// (0x00049d94) list_set_graphic_pane_g2

0x0001,

0xf731,	// (0x0005074b) list_set_graphic_pane_g_ParamLimits

0xf731,	// (0x0005074b) list_set_graphic_pane_g

0x0009,

0xfaad,	// (0x00050ac7) volume_small_pane_cp_g

0x8d9e,	// (0x00049db8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8d9e,	// (0x00049db8) list_double2_large_graphic_pane_g1_cp2

0x8dac,	// (0x00049dc6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8dac,	// (0x00049dc6) list_double2_large_graphic_pane_g2_cp2

0x8dbd,	// (0x00049dd7) list_double2_large_graphic_pane_g3_cp2

0x8dc5,	// (0x00049ddf) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8dc5,	// (0x00049ddf) list_double2_large_graphic_pane_t1_cp2

0x8ddb,	// (0x00049df5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8ddb,	// (0x00049df5) list_double2_large_graphic_pane_t2_cp2

0xa9b6,	// (0x0004b9d0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa9b6,	// (0x0004b9d0) list_double_large_graphic_pane_g1_cp2

0xa9c9,	// (0x0004b9e3) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa9c9,	// (0x0004b9e3) list_double_large_graphic_pane_g2_cp2

0x8f45,	// (0x00049f5f) list_double_large_graphic_pane_g3_cp2

0xa9da,	// (0x0004b9f4) list_double_large_graphic_pane_g4_cp

0xa9e2,	// (0x0004b9fc) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa9e2,	// (0x0004b9fc) list_double_large_graphic_pane_t1_cp2

0xa9f9,	// (0x0004ba13) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa9f9,	// (0x0004ba13) list_double_large_graphic_pane_t2_cp2

0x8e41,	// (0x00049e5b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8e41,	// (0x00049e5b) list_double2_graphic_pane_g1_cp2

0x8e4f,	// (0x00049e69) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8e4f,	// (0x00049e69) list_double2_graphic_pane_g2_cp2

0x8e60,	// (0x00049e7a) list_double2_graphic_pane_g3_cp2

0x8e6a,	// (0x00049e84) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8e6a,	// (0x00049e84) list_double2_graphic_pane_t1_cp2

0x8e80,	// (0x00049e9a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8e80,	// (0x00049e9a) list_double2_graphic_pane_t2_cp2

0x8a07,	// (0x00049a21) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8a07,	// (0x00049a21) list_single_number_heading_pane_g1_cp2

0x8e92,	// (0x00049eac) list_single_number_heading_pane_g2_cp2

0x8e9a,	// (0x00049eb4) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8e9a,	// (0x00049eb4) list_single_number_heading_pane_t1_cp2

0x8eb0,	// (0x00049eca) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8eb0,	// (0x00049eca) list_single_number_heading_pane_t2_cp2

0x8ec4,	// (0x00049ede) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8ec4,	// (0x00049ede) list_single_number_heading_pane_t3_cp2

0x8a07,	// (0x00049a21) list_single_heading_pane_g1_cp2_ParamLimits

0x8a07,	// (0x00049a21) list_single_heading_pane_g1_cp2

0x8e92,	// (0x00049eac) list_single_heading_pane_g2_cp2

0x8e9a,	// (0x00049eb4) list_single_heading_pane_t1_cp2_ParamLimits

0x8e9a,	// (0x00049eb4) list_single_heading_pane_t1_cp2

0xa7b0,	// (0x0004b7ca) list_single_heading_pane_t2_cp2_ParamLimits

0xa7b0,	// (0x0004b7ca) list_single_heading_pane_t2_cp2

0xa6f8,	// (0x0004b712) list_double_graphic_pane_g1_cp2_ParamLimits

0xa6f8,	// (0x0004b712) list_double_graphic_pane_g1_cp2

0xa704,	// (0x0004b71e) list_double_graphic_pane_g2_cp2_ParamLimits

0xa704,	// (0x0004b71e) list_double_graphic_pane_g2_cp2

0xa713,	// (0x0004b72d) list_double_graphic_pane_g3_cp2

0xa71b,	// (0x0004b735) list_double_graphic_pane_t1_cp2_ParamLimits

0xa71b,	// (0x0004b735) list_double_graphic_pane_t1_cp2

0xa731,	// (0x0004b74b) list_double_graphic_pane_t2_cp2_ParamLimits

0xa731,	// (0x0004b74b) list_double_graphic_pane_t2_cp2

0x8f39,	// (0x00049f53) list_double_number_pane_g1_cp2_ParamLimits

0x8f39,	// (0x00049f53) list_double_number_pane_g1_cp2

0x8f45,	// (0x00049f5f) list_double_number_pane_g2_cp2

0xa6bc,	// (0x0004b6d6) list_double_number_pane_t1_cp2_ParamLimits

0xa6bc,	// (0x0004b6d6) list_double_number_pane_t1_cp2

0xa6d0,	// (0x0004b6ea) list_double_number_pane_t2_cp2_ParamLimits

0xa6d0,	// (0x0004b6ea) list_double_number_pane_t2_cp2

0xa6e6,	// (0x0004b700) list_double_number_pane_t3_cp2_ParamLimits

0xa6e6,	// (0x0004b700) list_double_number_pane_t3_cp2

0xa5a5,	// (0x0004b5bf) list_single_graphic_pane_g1_cp2_ParamLimits

0xa5a5,	// (0x0004b5bf) list_single_graphic_pane_g1_cp2

0x8fae,	// (0x00049fc8) list_single_graphic_pane_g2_cp2_ParamLimits

0x8fae,	// (0x00049fc8) list_single_graphic_pane_g2_cp2

0x8fba,	// (0x00049fd4) list_single_graphic_pane_g3_cp2

0xa57b,	// (0x0004b595) list_single_graphic_pane_t1_cp2_ParamLimits

0xa57b,	// (0x0004b595) list_single_graphic_pane_t1_cp2

0x8fae,	// (0x00049fc8) list_single_number_pane_g1_cp2_ParamLimits

0x8fae,	// (0x00049fc8) list_single_number_pane_g1_cp2

0x8fba,	// (0x00049fd4) list_single_number_pane_g2_cp2

0xa57b,	// (0x0004b595) list_single_number_pane_t1_cp2_ParamLimits

0xa57b,	// (0x0004b595) list_single_number_pane_t1_cp2

0xa591,	// (0x0004b5ab) list_single_number_pane_t2_cp2_ParamLimits

0xa591,	// (0x0004b5ab) list_single_number_pane_t2_cp2

0x8dac,	// (0x00049dc6) list_double2_pane_g1_cp2_ParamLimits

0x8dac,	// (0x00049dc6) list_double2_pane_g1_cp2

0x8dbd,	// (0x00049dd7) list_double2_pane_g2_cp2

0x8f11,	// (0x00049f2b) list_double2_pane_t1_cp2_ParamLimits

0x8f11,	// (0x00049f2b) list_double2_pane_t1_cp2

0x8f27,	// (0x00049f41) list_double2_pane_t2_cp2_ParamLimits

0x8f27,	// (0x00049f41) list_double2_pane_t2_cp2

0x8f39,	// (0x00049f53) list_double_pane_g1_cp2_ParamLimits

0x8f39,	// (0x00049f53) list_double_pane_g1_cp2

0x8f45,	// (0x00049f5f) list_double_pane_g2_cp2

0x8f4d,	// (0x00049f67) list_double_pane_t1_cp2_ParamLimits

0x8f4d,	// (0x00049f67) list_double_pane_t1_cp2

0x8f63,	// (0x00049f7d) list_double_pane_t2_cp2_ParamLimits

0x8f63,	// (0x00049f7d) list_double_pane_t2_cp2

0x8f9e,	// (0x00049fb8) list_single_pane_cp2_g3

0x8fae,	// (0x00049fc8) list_single_pane_g1_cp2_ParamLimits

0x8fae,	// (0x00049fc8) list_single_pane_g1_cp2

0x8fba,	// (0x00049fd4) list_single_pane_g2_cp2

0x8fc2,	// (0x00049fdc) list_single_pane_t1_cp2_ParamLimits

0x8fc2,	// (0x00049fdc) list_single_pane_t1_cp2

0x8fda,	// (0x00049ff4) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8fda,	// (0x00049ff4) list_single_large_graphic_pane_g1_cp2

0x8fe8,	// (0x0004a002) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8fe8,	// (0x0004a002) list_single_large_graphic_pane_g2_cp2

0x8ff4,	// (0x0004a00e) list_single_large_graphic_pane_g3_cp2

0x8ffc,	// (0x0004a016) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8ffc,	// (0x0004a016) list_single_large_graphic_pane_g4_cp1

0x9016,	// (0x0004a030) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9016,	// (0x0004a030) list_single_large_graphic_pane_t1_cp2

0xa545,	// (0x0004b55f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa545,	// (0x0004b55f) list_single_graphic_heading_pane_g1_cp2

0xa512,	// (0x0004b52c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa512,	// (0x0004b52c) list_single_graphic_heading_pane_g4_cp2

0x8fba,	// (0x00049fd4) list_single_graphic_heading_pane_g5_cp2

0xa551,	// (0x0004b56b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa551,	// (0x0004b56b) list_single_graphic_heading_pane_t1_cp2

0xa567,	// (0x0004b581) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa567,	// (0x0004b581) list_single_graphic_heading_pane_t2_cp2

0xa506,	// (0x0004b520) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa506,	// (0x0004b520) list_single_2graphic_pane_g1_cp2

0xa512,	// (0x0004b52c) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa512,	// (0x0004b52c) list_single_2graphic_pane_g2_cp2

0x8fba,	// (0x00049fd4) list_single_2graphic_pane_g3_cp2

0xa523,	// (0x0004b53d) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa523,	// (0x0004b53d) list_single_2graphic_pane_g4_cp2

0xa52f,	// (0x0004b549) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa52f,	// (0x0004b549) list_single_2graphic_pane_t1_cp2

0xd2bd,	// (0x0004e2d7) list_highlight_pane_g10_cp1

0xa0de,	// (0x0004b0f8) list_highlight_pane_g1_cp1

0xa0e6,	// (0x0004b100) list_highlight_pane_g2_cp1

0xa0ee,	// (0x0004b108) list_highlight_pane_g3_cp1

0xa0f6,	// (0x0004b110) list_highlight_pane_g4_cp1

0xa0fe,	// (0x0004b118) list_highlight_pane_g5_cp1

0xa106,	// (0x0004b120) list_highlight_pane_g6_cp1

0xa10e,	// (0x0004b128) list_highlight_pane_g7_cp1

0xa116,	// (0x0004b130) list_highlight_pane_g8_cp1

0xa11e,	// (0x0004b138) list_highlight_pane_g9_cp1

0x9ffe,	// (0x0004b018) form_field_slider_pane_t3

0xa00c,	// (0x0004b026) form_field_slider_pane_t4

0xa01a,	// (0x0004b034) slider_form_pane_ParamLimits

0xa01a,	// (0x0004b034) slider_form_pane

0xd2c7,	// (0x0004e2e1) control_abbreviations

0xd2c7,	// (0x0004e2e1) control_conventions

0xd2c7,	// (0x0004e2e1) control_definitions

0xd2c7,	// (0x0004e2e1) format_table_attribute

0xa806,	// (0x0004b820) bg_popup_preview_window_pane_g9

0xd2c7,	// (0x0004e2e1) format_table_data2

0xd2c7,	// (0x0004e2e1) format_table_data3

0xd2c7,	// (0x0004e2e1) format_table_data_example

0x0008,

0xd2c7,	// (0x0004e2e1) intro_purpose

0xf8cd,	// (0x000508e7) bg_popup_preview_window_pane_g

0xd2c7,	// (0x0004e2e1) texts_category

0xd2c7,	// (0x0004e2e1) texts_graphics

0x902c,	// (0x0004a046) text_digital

0x903b,	// (0x0004a055) text_primary

0x904a,	// (0x0004a064) text_primary_small

0x9059,	// (0x0004a073) text_secondary

0x9068,	// (0x0004a082) text_title

0xaf59,	// (0x0004bf73) bg_passive_tab_pane_g1_cp3_srt

0x8cbc,	// (0x00049cd6) bg_passive_tab_pane_g2_cp3_srt

0xaf62,	// (0x0004bf7c) bg_passive_tab_pane_g3_cp3_srt

0xd315,	// (0x0004e32f) bg_active_tab_pane_cp3_srt_ParamLimits

0xd315,	// (0x0004e32f) bg_active_tab_pane_cp3_srt

0xaf6b,	// (0x0004bf85) tabs_4_active_pane_srt_g1

0xaf73,	// (0x0004bf8d) tabs_4_active_pane_srt_t1_ParamLimits

0xaf73,	// (0x0004bf8d) tabs_4_active_pane_srt_t1

0xaf59,	// (0x0004bf73) bg_active_tab_pane_g1_cp3_copy1

0x8cbc,	// (0x00049cd6) bg_active_tab_pane_g2_cp3_copy1

0xaf62,	// (0x0004bf7c) bg_active_tab_pane_g3_cp3_copy1

0xd315,	// (0x0004e32f) tabs_2_long_active_pane_srt_ParamLimits

0xd315,	// (0x0004e32f) tabs_2_long_active_pane_srt

0xd315,	// (0x0004e32f) tabs_2_long_passive_pane_srt_ParamLimits

0xd315,	// (0x0004e32f) tabs_2_long_passive_pane_srt

0x655d,	// (0x00047577) bg_passive_tab_pane_cp4_srt_ParamLimits

0x655d,	// (0x00047577) bg_passive_tab_pane_cp4_srt

0xac30,	// (0x0004bc4a) bg_passive_tab_pane_g1_cp4_srt

0x8cbc,	// (0x00049cd6) bg_passive_tab_pane_g2_cp4_srt

0xac39,	// (0x0004bc53) bg_passive_tab_pane_g3_cp4_srt

0x653c,	// (0x00047556) bg_active_tab_pane_cp4_srt_ParamLimits

0x653c,	// (0x00047556) bg_active_tab_pane_cp4_srt

0xac42,	// (0x0004bc5c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xac42,	// (0x0004bc5c) tabs_2_long_active_pane_srt_t1

0xac30,	// (0x0004bc4a) bg_active_tab_pane_g1_cp4_srt

0x8cbc,	// (0x00049cd6) bg_active_tab_pane_g2_cp4_srt

0xac39,	// (0x0004bc53) bg_active_tab_pane_g3_cp4_srt

0xd351,	// (0x0004e36b) tabs_3_long_active_pane_srt_ParamLimits

0xd351,	// (0x0004e36b) tabs_3_long_active_pane_srt

0xd351,	// (0x0004e36b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xd351,	// (0x0004e36b) tabs_3_long_passive_pane_cp_srt

0xd351,	// (0x0004e36b) tabs_3_long_passive_pane_srt_ParamLimits

0xd351,	// (0x0004e36b) tabs_3_long_passive_pane_srt

0x655d,	// (0x00047577) bg_passive_tab_pane_cp5_srt_ParamLimits

0x655d,	// (0x00047577) bg_passive_tab_pane_cp5_srt

0x8d46,	// (0x00049d60) bg_passive_tab_pane_g1_cp5_srt

0x8cbc,	// (0x00049cd6) bg_passive_tab_pane_g2_cp5_srt

0x8d4f,	// (0x00049d69) bg_passive_tab_pane_g3_cp5_srt

0x653c,	// (0x00047556) bg_active_tab_pane_cp5_srt_ParamLimits

0x653c,	// (0x00047556) bg_active_tab_pane_cp5_srt

0xac1e,	// (0x0004bc38) tabs_3_long_active_pane_srt_t1_ParamLimits

0xac1e,	// (0x0004bc38) tabs_3_long_active_pane_srt_t1

0x8d46,	// (0x00049d60) bg_active_tab_pane_g1_cp5_srt

0x8cbc,	// (0x00049cd6) bg_active_tab_pane_g2_cp5_srt

0x8d4f,	// (0x00049d69) bg_active_tab_pane_g3_cp5_srt

0xac10,	// (0x0004bc2a) navi_text_pane_srt_t1

0xac08,	// (0x0004bc22) navi_icon_pane_srt_g1

0x9240,	// (0x0004a25a) midp_editing_number_pane_srt

0x9077,	// (0x0004a091) midp_ticker_pane_srt

0x9248,	// (0x0004a262) midp_ticker_pane_srt_g1

0x9250,	// (0x0004a26a) midp_ticker_pane_srt_g2

0x0001,

0xf750,	// (0x0005076a) midp_ticker_pane_srt_g

0x9258,	// (0x0004a272) midp_ticker_pane_srt_t1

0xabf9,	// (0x0004bc13) midp_editing_number_pane_t1_copy1

0x907f,	// (0x0004a099) listscroll_midp_pane

0x907f,	// (0x0004a099) midp_form_pane

0x90ee,	// (0x0004a108) midp_info_popup_window_ParamLimits

0x90ee,	// (0x0004a108) midp_info_popup_window

0x3cf3,	// (0x00044d0d) bg_popup_sub_pane_cp50_ParamLimits

0x3cf3,	// (0x00044d0d) bg_popup_sub_pane_cp50

0x9d00,	// (0x0004ad1a) listscroll_midp_info_pane_ParamLimits

0x9d00,	// (0x0004ad1a) listscroll_midp_info_pane

0x9ce0,	// (0x0004acfa) listscroll_form_midp_pane_ParamLimits

0x9ce0,	// (0x0004acfa) listscroll_form_midp_pane

0x9cec,	// (0x0004ad06) scroll_bar_cp050

0x9cc0,	// (0x0004acda) list_midp_pane

0xba16,	// (0x0004ca30) signal_pane_g2_cp

0x9bfa,	// (0x0004ac14) listscroll_midp_info_pane_t1_ParamLimits

0x9bfa,	// (0x0004ac14) listscroll_midp_info_pane_t1

0x9c12,	// (0x0004ac2c) listscroll_midp_info_pane_t2_ParamLimits

0x9c12,	// (0x0004ac2c) listscroll_midp_info_pane_t2

0x9c50,	// (0x0004ac6a) listscroll_midp_info_pane_t3_ParamLimits

0x9c50,	// (0x0004ac6a) listscroll_midp_info_pane_t3

0x9c8a,	// (0x0004aca4) listscroll_midp_info_pane_t4_ParamLimits

0x9c8a,	// (0x0004aca4) listscroll_midp_info_pane_t4

0x0003,

0xf808,	// (0x00050822) listscroll_midp_info_pane_t_ParamLimits

0xf808,	// (0x00050822) listscroll_midp_info_pane_t

0x3d48,	// (0x00044d62) scroll_pane_cp21

0x9b94,	// (0x0004abae) form_midp_field_choice_group_pane

0x9b9d,	// (0x0004abb7) form_midp_field_text_pane

0x9be0,	// (0x0004abfa) form_midp_field_time_pane

0x9be8,	// (0x0004ac02) form_midp_gauge_slider_pane

0x9bf1,	// (0x0004ac0b) form_midp_gauge_wait_pane

0xd2c7,	// (0x0004e2e1) form_midp_image_pane

0x5621,	// (0x0004663b) list_single_midp_pane_ParamLimits

0x5621,	// (0x0004663b) list_single_midp_pane

0x9b58,	// (0x0004ab72) form_midp_field_text_pane_t1

0x994a,	// (0x0004a964) input_focus_pane_cp050

0x9b83,	// (0x0004ab9d) list_midp_form_text_pane

0x9b27,	// (0x0004ab41) form_midp_field_choice_group_pane_t1

0x9b35,	// (0x0004ab4f) input_focus_pane_cp051

0x9b49,	// (0x0004ab63) list_midp_choice_pane

0xd2c7,	// (0x0004e2e1) status_idle_pane

0x9b0b,	// (0x0004ab25) form_midp_field_time_pane_t1

0xd2bd,	// (0x0004e2d7) wait_anim_pane_g2_copy1

0x9b19,	// (0x0004ab33) form_midp_field_time_pane_t2

0x0001,

0x919e,	// (0x0004a1b8) aid_navinavi_width_2_pane

0xf803,	// (0x0005081d) form_midp_field_time_pane_t

0xd2c7,	// (0x0004e2e1) input_focus_pane_cp052

0xd2c7,	// (0x0004e2e1) bg_input_focus_pane_cp040

0x9acb,	// (0x0004aae5) form_midp_gauge_slider_pane_t1

0x9ad9,	// (0x0004aaf3) form_midp_gauge_slider_pane_t2

0x9ae7,	// (0x0004ab01) form_midp_gauge_slider_pane_t3

0x9af5,	// (0x0004ab0f) form_midp_gauge_slider_pane_t4

0x0003,

0xf7fa,	// (0x00050814) form_midp_gauge_slider_pane_t

0x9b03,	// (0x0004ab1d) form_midp_slider_pane

0xd315,	// (0x0004e32f) bg_input_focus_pane_cp041_ParamLimits

0xd315,	// (0x0004e32f) bg_input_focus_pane_cp041

0x9a98,	// (0x0004aab2) form_midp_gauge_wait_pane_t1_ParamLimits

0x9a98,	// (0x0004aab2) form_midp_gauge_wait_pane_t1

0x9aaa,	// (0x0004aac4) form_midp_gauge_wait_pane_t2_ParamLimits

0x9aaa,	// (0x0004aac4) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f5,	// (0x0005080f) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f5,	// (0x0005080f) form_midp_gauge_wait_pane_t

0x9abc,	// (0x0004aad6) form_midp_wait_pane_ParamLimits

0x9abc,	// (0x0004aad6) form_midp_wait_pane

0x9a60,	// (0x0004aa7a) form_midp_image_pane_g1

0x9a69,	// (0x0004aa83) form_midp_image_pane_t1

0x9a78,	// (0x0004aa92) form_midp_image_pane_t2

0x9a87,	// (0x0004aaa1) form_midp_image_pane_t3

0x0002,

0xf7ee,	// (0x00050808) form_midp_image_pane_t

0x9a57,	// (0x0004aa71) list_single_midp_pane_g1

0x5612,	// (0x0004662c) list_single_midp_pane_t1

0x9a3d,	// (0x0004aa57) list_midp_form_item_pane_ParamLimits

0x9a3d,	// (0x0004aa57) list_midp_form_item_pane

0x9146,	// (0x0004a160) list_midp_form_item_pane_t1

0x9155,	// (0x0004a16f) midp_ticker_pane_g1

0x9161,	// (0x0004a17b) midp_ticker_pane_g2

0x0001,

0xf736,	// (0x00050750) midp_ticker_pane_g

0x916d,	// (0x0004a187) midp_ticker_pane_t1

0xae66,	// (0x0004be80) midp_editing_number_pane_t1

0xae44,	// (0x0004be5e) midp_editing_number_pane

0xae53,	// (0x0004be6d) midp_ticker_pane

0x9d0c,	// (0x0004ad26) ai_message_heading_pane

0xd2c7,	// (0x0004e2e1) bg_popup_window_pane_cp14

0x9d14,	// (0x0004ad2e) listscroll_ai_message_pane

0xab7f,	// (0x0004bb99) ai_message_heading_pane_g1_ParamLimits

0xab7f,	// (0x0004bb99) ai_message_heading_pane_g1

0xab8b,	// (0x0004bba5) ai_message_heading_pane_g2_ParamLimits

0xab8b,	// (0x0004bba5) ai_message_heading_pane_g2

0xab99,	// (0x0004bbb3) ai_message_heading_pane_g3_ParamLimits

0xab99,	// (0x0004bbb3) ai_message_heading_pane_g3

0xaba5,	// (0x0004bbbf) ai_message_heading_pane_g4_ParamLimits

0xaba5,	// (0x0004bbbf) ai_message_heading_pane_g4

0x0003,

0xf92f,	// (0x00050949) ai_message_heading_pane_g_ParamLimits

0xf92f,	// (0x00050949) ai_message_heading_pane_g

0xabb1,	// (0x0004bbcb) ai_message_heading_pane_t1_ParamLimits

0xabb1,	// (0x0004bbcb) ai_message_heading_pane_t1

0xabcb,	// (0x0004bbe5) ai_message_heading_pane_t2_ParamLimits

0xabcb,	// (0x0004bbe5) ai_message_heading_pane_t2

0x0001,

0xf938,	// (0x00050952) ai_message_heading_pane_t_ParamLimits

0xf938,	// (0x00050952) ai_message_heading_pane_t

0xabdf,	// (0x0004bbf9) bg_popup_heading_pane_cp1_ParamLimits

0xabdf,	// (0x0004bbf9) bg_popup_heading_pane_cp1

0xab6d,	// (0x0004bb87) list_ai_message_pane_ParamLimits

0xab6d,	// (0x0004bb87) list_ai_message_pane

0x3d48,	// (0x00044d62) scroll_pane_cp10

0xab09,	// (0x0004bb23) list_ai_message_pane_g1

0xab11,	// (0x0004bb2b) list_ai_message_pane_g2

0x0001,

0xf90c,	// (0x00050926) list_ai_message_pane_g

0xab19,	// (0x0004bb33) list_ai_message_pane_t1_ParamLimits

0xab19,	// (0x0004bb33) list_ai_message_pane_t1

0xab2e,	// (0x0004bb48) list_ai_message_pane_t2_ParamLimits

0xab2e,	// (0x0004bb48) list_ai_message_pane_t2

0xab43,	// (0x0004bb5d) list_ai_message_pane_t3_ParamLimits

0xab43,	// (0x0004bb5d) list_ai_message_pane_t3

0xab58,	// (0x0004bb72) list_ai_message_pane_t4_ParamLimits

0xab58,	// (0x0004bb72) list_ai_message_pane_t4

0x0003,

0xf911,	// (0x0005092b) list_ai_message_pane_t_ParamLimits

0xf911,	// (0x0005092b) list_ai_message_pane_t

0xaaf2,	// (0x0004bb0c) cell_ai_soft_ind_pane_ParamLimits

0xaaf2,	// (0x0004bb0c) cell_ai_soft_ind_pane

0x917f,	// (0x0004a199) cell_ai_soft_ind_pane_g1_ParamLimits

0x917f,	// (0x0004a199) cell_ai_soft_ind_pane_g1

0xd2c7,	// (0x0004e2e1) grid_highlight_cp1

0x918c,	// (0x0004a1a6) text_secondary_cp56_ParamLimits

0x918c,	// (0x0004a1a6) text_secondary_cp56

0xaac7,	// (0x0004bae1) example_general_pane_ParamLimits

0xaac7,	// (0x0004bae1) example_general_pane

0xaad3,	// (0x0004baed) example_parent_pane_g1_ParamLimits

0xaad3,	// (0x0004baed) example_parent_pane_g1

0xaadf,	// (0x0004baf9) example_parent_pane_t1_ParamLimits

0xaadf,	// (0x0004baf9) example_parent_pane_t1

0x703c,	// (0x00048056) popup_preview_text_window_ParamLimits

0x703c,	// (0x00048056) popup_preview_text_window

0x8fa6,	// (0x00049fc0) list_single_pane_cp2_g4

0x09fa,	// (0x00041a14) bg_popup_preview_window_pane_ParamLimits

0x09fa,	// (0x00041a14) bg_popup_preview_window_pane

0xa810,	// (0x0004b82a) popup_preview_text_window_t1_ParamLimits

0xa810,	// (0x0004b82a) popup_preview_text_window_t1

0xa82e,	// (0x0004b848) popup_preview_text_window_t2_ParamLimits

0xa82e,	// (0x0004b848) popup_preview_text_window_t2

0xa877,	// (0x0004b891) popup_preview_text_window_t3_ParamLimits

0xa877,	// (0x0004b891) popup_preview_text_window_t3

0xa8bc,	// (0x0004b8d6) popup_preview_text_window_t4_ParamLimits

0xa8bc,	// (0x0004b8d6) popup_preview_text_window_t4

0x0004,

0xf8e0,	// (0x000508fa) popup_preview_text_window_t_ParamLimits

0xf8e0,	// (0x000508fa) popup_preview_text_window_t

0xa93a,	// (0x0004b954) scroll_pane_cp11

0x98d6,	// (0x0004a8f0) bg_popup_preview_window_pane_g1

0xa7c4,	// (0x0004b7de) bg_popup_preview_window_pane_g2

0xa7ce,	// (0x0004b7e8) bg_popup_preview_window_pane_g3

0xa7d8,	// (0x0004b7f2) bg_popup_preview_window_pane_g4

0xa7e2,	// (0x0004b7fc) bg_popup_preview_window_pane_g5

0xa7ec,	// (0x0004b806) bg_popup_preview_window_pane_g6

0xa7f4,	// (0x0004b80e) bg_popup_preview_window_pane_g7

0xa7fc,	// (0x0004b816) bg_popup_preview_window_pane_g8

0x5ca6,	// (0x00046cc0) aid_popup_width_pane

0x7018,	// (0x00048032) popup_midp_note_alarm_window_ParamLimits

0x7018,	// (0x00048032) popup_midp_note_alarm_window

0x0e2f,	// (0x00041e49) data_form_pane_ParamLimits

0x52d4,	// (0x000462ee) form_field_data_pane_g1

0x52de,	// (0x000462f8) form_field_data_pane_t1_ParamLimits

0x0e3b,	// (0x00041e55) input_focus_pane_ParamLimits

0x52f8,	// (0x00046312) data_form_wide_pane_ParamLimits

0x5309,	// (0x00046323) form_field_data_wide_pane_g1

0x5315,	// (0x0004632f) form_field_data_wide_pane_t1_ParamLimits

0x0bb6,	// (0x00041bd0) input_focus_pane_cp6_ParamLimits

0x6514,	// (0x0004752e) input_popup_find_pane_g1_ParamLimits

0x6514,	// (0x0004752e) input_popup_find_pane_g1

0x667a,	// (0x00047694) aid_navi_side_left_pane

0x668f,	// (0x000476a9) aid_navi_side_right_pane

0xa1d9,	// (0x0004b1f3) bg_popup_window_pane_cp30_ParamLimits

0xa1d9,	// (0x0004b1f3) bg_popup_window_pane_cp30

0xa253,	// (0x0004b26d) popup_midp_note_alarm_window_g1_ParamLimits

0xa253,	// (0x0004b26d) popup_midp_note_alarm_window_g1

0xa283,	// (0x0004b29d) popup_midp_note_alarm_window_t1_ParamLimits

0xa283,	// (0x0004b29d) popup_midp_note_alarm_window_t1

0xa324,	// (0x0004b33e) popup_midp_note_alarm_window_t2_ParamLimits

0xa324,	// (0x0004b33e) popup_midp_note_alarm_window_t2

0xa3d2,	// (0x0004b3ec) popup_midp_note_alarm_window_t3_ParamLimits

0xa3d2,	// (0x0004b3ec) popup_midp_note_alarm_window_t3

0xa404,	// (0x0004b41e) popup_midp_note_alarm_window_t4_ParamLimits

0xa404,	// (0x0004b41e) popup_midp_note_alarm_window_t4

0xa42a,	// (0x0004b444) popup_midp_note_alarm_window_t5_ParamLimits

0xa42a,	// (0x0004b444) popup_midp_note_alarm_window_t5

0x000a,

0xf87d,	// (0x00050897) popup_midp_note_alarm_window_t_ParamLimits

0xf87d,	// (0x00050897) popup_midp_note_alarm_window_t

0xa4d6,	// (0x0004b4f0) wait_bar_pane_cp1_ParamLimits

0xa4d6,	// (0x0004b4f0) wait_bar_pane_cp1

0xd2c7,	// (0x0004e2e1) wait_anim_pane_copy1

0xd2c7,	// (0x0004e2e1) wait_border_pane_copy1

0x9ebe,	// (0x0004aed8) wait_border_pane_g1_copy1

0x532f,	// (0x00046349) form_field_popup_pane_g1

0x5337,	// (0x00046351) form_field_popup_pane_t1_ParamLimits

0x0e3b,	// (0x00041e55) input_focus_pane_cp7_ParamLimits

0x0e69,	// (0x00041e83) list_form_pane_ParamLimits

0x5351,	// (0x0004636b) form_field_popup_wide_pane_g1

0x5359,	// (0x00046373) form_field_popup_wide_pane_t1_ParamLimits

0x0e3b,	// (0x00041e55) input_focus_pane_cp8_ParamLimits

0x0e75,	// (0x00041e8f) list_form_wide_pane_ParamLimits

0xaffd,	// (0x0004c017) aid_size_cell_graphic_pane

0x53e5,	// (0x000463ff) data_form_pane_t1_ParamLimits

0x5668,	// (0x00046682) data_form_wide_pane_t1_ParamLimits

0x9493,	// (0x0004a4ad) bg_status_flat_pane

0x60d1,	// (0x000470eb) title_pane_t1_ParamLimits

0xd2dd,	// (0x0004e2f7) title_pane_t2_ParamLimits

0xd303,	// (0x0004e31d) title_pane_t3_ParamLimits

0xf530,	// (0x0005054a) title_pane_t_ParamLimits

0x6802,	// (0x0004781c) level_1_signal_ParamLimits

0x680f,	// (0x00047829) level_2_signal_ParamLimits

0x681c,	// (0x00047836) level_3_signal_ParamLimits

0x6829,	// (0x00047843) level_4_signal_ParamLimits

0x8a13,	// (0x00049a2d) level_5_signal_ParamLimits

0x8a20,	// (0x00049a3a) level_6_signal_ParamLimits

0x8a2d,	// (0x00049a47) level_7_signal_ParamLimits

0x6802,	// (0x0004781c) level_1_battery_ParamLimits

0x680f,	// (0x00047829) level_2_battery_ParamLimits

0x681c,	// (0x00047836) level_3_battery_ParamLimits

0x6829,	// (0x00047843) level_4_battery_ParamLimits

0x8a13,	// (0x00049a2d) level_5_battery_ParamLimits

0x8a20,	// (0x00049a3a) level_6_battery_ParamLimits

0x8a2d,	// (0x00049a47) level_7_battery_ParamLimits

0xa0de,	// (0x0004b0f8) bg_status_flat_pane_g1

0xa0e6,	// (0x0004b100) bg_status_flat_pane_g2

0xa0ee,	// (0x0004b108) bg_status_flat_pane_g3

0xa0f6,	// (0x0004b110) bg_status_flat_pane_g4

0xa0fe,	// (0x0004b118) bg_status_flat_pane_g5

0xa106,	// (0x0004b120) bg_status_flat_pane_g6

0xa10e,	// (0x0004b128) bg_status_flat_pane_g7

0x6141,	// (0x0004715b) tabs_3_active_pane_t1_ParamLimits

0x6141,	// (0x0004715b) tabs_3_passive_pane_t1_ParamLimits

0x615b,	// (0x00047175) tabs_4_active_pane_t1_ParamLimits

0x615b,	// (0x00047175) tabs_4_1_passive_pane_t1_ParamLimits

0x652a,	// (0x00047544) tabs_2_active_pane_t1_ParamLimits

0x652a,	// (0x00047544) tabs_2_passive_pane_t1_ParamLimits

0x653c,	// (0x00047556) bg_active_tab_pane_cp4_ParamLimits

0x654a,	// (0x00047564) tabs_2_long_active_pane_t1_ParamLimits

0x655d,	// (0x00047577) bg_passive_tab_pane_cp4_ParamLimits

0x7338,	// (0x00048352) list_single_midp_graphic_pane_t1_ParamLimits

0x653c,	// (0x00047556) bg_active_tab_pane_cp5_ParamLimits

0x6569,	// (0x00047583) tabs_3_long_active_pane_t1_ParamLimits

0x655d,	// (0x00047577) bg_passive_tab_pane_cp5_ParamLimits

0x7338,	// (0x00048352) list_single_midp_graphic_pane_t1

0x9493,	// (0x0004a4ad) bg_status_flat_pane_ParamLimits

0x955e,	// (0x0004a578) indicator_pane_cp2_ParamLimits

0x955e,	// (0x0004a578) indicator_pane_cp2

0x969f,	// (0x0004a6b9) navi_pane_srt_ParamLimits

0x969f,	// (0x0004a6b9) navi_pane_srt

0x96c3,	// (0x0004a6dd) popup_clock_digital_analogue_window_cp1

0x083d,	// (0x00041857) indicator_pane_t1

0x9077,	// (0x0004a091) copy_highlight_pane

0x9077,	// (0x0004a091) cursor_graphics_pane

0x9077,	// (0x0004a091) graphic_within_text_pane

0x9077,	// (0x0004a091) link_highlight_pane

0xa8fd,	// (0x0004b917) popup_preview_text_window_t5_ParamLimits

0xa8fd,	// (0x0004b917) popup_preview_text_window_t5

0x91a8,	// (0x0004a1c2) cursor_digital_pane

0x91a8,	// (0x0004a1c2) cursor_primary_pane

0x91b9,	// (0x0004a1d3) cursor_primary_small_pane

0x91c1,	// (0x0004a1db) cursor_secondary_pane

0x91c9,	// (0x0004a1e3) cursor_title_pane

0x91a8,	// (0x0004a1c2) link_highlight_digital_pane

0x91b0,	// (0x0004a1ca) link_highlight_primary_pane

0x91b9,	// (0x0004a1d3) link_highlight_primary_small_pane

0x91c1,	// (0x0004a1db) link_highlight_secondary_pane

0x91c9,	// (0x0004a1e3) link_highlight_title_pane

0x91a8,	// (0x0004a1c2) copy_highlight_digital_pane

0x91a8,	// (0x0004a1c2) copy_highlight_primary_pane

0x91b9,	// (0x0004a1d3) copy_highlight_primary_small_pane

0x91c1,	// (0x0004a1db) copy_highlight_secondary_pane

0x91c9,	// (0x0004a1e3) copy_highlight_title_pane

0x91c1,	// (0x0004a1db) graphic_text_digital_pane

0xa17c,	// (0x0004b196) graphic_text_primary_pane

0xa185,	// (0x0004b19f) graphic_text_primary_small_pane

0x91b9,	// (0x0004a1d3) graphic_text_secondary_pane

0x91a8,	// (0x0004a1c2) graphic_text_title_pane

0x91d1,	// (0x0004a1eb) cursor_primary_pane_g1

0xa16e,	// (0x0004b188) cursor_text_primary_t1

0xa156,	// (0x0004b170) cursor_primary_small_pane_g1

0xa160,	// (0x0004b17a) cursor_text_primary_small_t1

0xa13e,	// (0x0004b158) cursor_primary_small_pane_g1_copy1

0xa148,	// (0x0004b162) cursor_text_primary_small_t1_copy1

0xa126,	// (0x0004b140) cursor_text_title_t1

0xa134,	// (0x0004b14e) cursor_title_pane_g1

0x91d1,	// (0x0004a1eb) cursor_digital_pane_g1

0x91db,	// (0x0004a1f5) cursor_text_digital_t1

0x91e9,	// (0x0004a203) link_highlight_primary_pane_g1

0xa0cf,	// (0x0004b0e9) link_highlight_primary_pane_t1

0x91e9,	// (0x0004a203) link_highlight_primary_small_pane_g1

0x91f1,	// (0x0004a20b) link_highlight_primary_small_pane_t1

0x9200,	// (0x0004a21a) link_highlight_secondary_pane_g1

0x9208,	// (0x0004a222) link_highlight_secondary_pane_t1

0xa043,	// (0x0004b05d) link_highlight_title_pane_g1

0xa04b,	// (0x0004b065) link_highlight_title_pane_t1

0xa02c,	// (0x0004b046) link_highlight_digital_pane_g1

0xa034,	// (0x0004b04e) link_highlight_digital_pane_t1

0x9ef4,	// (0x0004af0e) copy_highlight_primary_pane_g1

0x9f0b,	// (0x0004af25) copy_highlight_primary_pane_t1

0x9ef4,	// (0x0004af0e) copy_highlight_primary_small_pane_g1

0x9efc,	// (0x0004af16) copy_highlight_primary_small_pane_t1

0x9217,	// (0x0004a231) copy_highlight_secondary_pane_g1

0x921f,	// (0x0004a239) copy_highlight_secondary_pane_t1

0x9edd,	// (0x0004aef7) copy_highlight_title_pane_g1

0x9ee5,	// (0x0004aeff) copy_highlight_title_pane_t1

0x9ef4,	// (0x0004af0e) copy_highlight_digital_pane_g1

0xb1cf,	// (0x0004c1e9) copy_highlight_digital_pane_t1

0xb123,	// (0x0004c13d) graphic_text_primary_pane_g1

0xb1b3,	// (0x0004c1cd) graphic_text_primary_pane_t1

0xb1c1,	// (0x0004c1db) graphic_text_primary_pane_t2

0x0001,

0xf9ac,	// (0x000509c6) graphic_text_primary_pane_t

0xb18f,	// (0x0004c1a9) graphic_text_primary_small_pane_g1

0xb197,	// (0x0004c1b1) graphic_text_primary_small_pane_t1

0xb1a5,	// (0x0004c1bf) graphic_text_primary_small_pane_t2

0x0001,

0xf9a7,	// (0x000509c1) graphic_text_primary_small_pane_t

0xb16b,	// (0x0004c185) graphic_text_secondary_pane_g1

0xb173,	// (0x0004c18d) graphic_text_secondary_pane_t1

0xb181,	// (0x0004c19b) graphic_text_secondary_pane_t2

0x0001,

0xf9a2,	// (0x000509bc) graphic_text_secondary_pane_t

0xb147,	// (0x0004c161) graphic_text_title_pane_g1

0xb14f,	// (0x0004c169) graphic_text_title_pane_t1

0xb15d,	// (0x0004c177) graphic_text_title_pane_t2

0x0001,

0xf99d,	// (0x000509b7) graphic_text_title_pane_t

0xb123,	// (0x0004c13d) graphic_text_digital_pane_g1

0xb12b,	// (0x0004c145) graphic_text_digital_pane_t1

0xb139,	// (0x0004c153) graphic_text_digital_pane_t2

0x0001,

0xf998,	// (0x000509b2) graphic_text_digital_pane_t

0xd315,	// (0x0004e32f) navi_icon_pane_srt_ParamLimits

0xd315,	// (0x0004e32f) navi_icon_pane_srt

0xd2c7,	// (0x0004e2e1) navi_midp_pane_srt

0xd2c7,	// (0x0004e2e1) navi_navi_pane_srt

0xd315,	// (0x0004e32f) navi_text_pane_srt_ParamLimits

0xd315,	// (0x0004e32f) navi_text_pane_srt

0xb0ee,	// (0x0004c108) navi_navi_icon_text_pane_srt

0xb0f6,	// (0x0004c110) navi_navi_pane_srt_g1_ParamLimits

0xb0f6,	// (0x0004c110) navi_navi_pane_srt_g1

0xb108,	// (0x0004c122) navi_navi_pane_srt_g2_ParamLimits

0xb108,	// (0x0004c122) navi_navi_pane_srt_g2

0x0001,

0xf993,	// (0x000509ad) navi_navi_pane_srt_g_ParamLimits

0xf993,	// (0x000509ad) navi_navi_pane_srt_g

0xb11a,	// (0x0004c134) navi_navi_tabs_pane_srt

0xb0ee,	// (0x0004c108) navi_navi_text_pane_srt

0xb0ee,	// (0x0004c108) navi_navi_volume_pane_srt

0xb0df,	// (0x0004c0f9) navi_navi_text_pane_srt_t1

0x7747,	// (0x00048761) navi_navi_volume_pane_srt_g1

0x774f,	// (0x00048769) volume_small_pane_srt_ParamLimits

0x774f,	// (0x00048769) volume_small_pane_srt

0x6a7f,	// (0x00047a99) volume_small_pane_srt_g1_ParamLimits

0x6a7f,	// (0x00047a99) volume_small_pane_srt_g1

0x6a8f,	// (0x00047aa9) volume_small_pane_srt_g2_ParamLimits

0x6a8f,	// (0x00047aa9) volume_small_pane_srt_g2

0x6aa0,	// (0x00047aba) volume_small_pane_srt_g3_ParamLimits

0x6aa0,	// (0x00047aba) volume_small_pane_srt_g3

0x6ab1,	// (0x00047acb) volume_small_pane_srt_g4_ParamLimits

0x6ab1,	// (0x00047acb) volume_small_pane_srt_g4

0x6ac2,	// (0x00047adc) volume_small_pane_srt_g5_ParamLimits

0x6ac2,	// (0x00047adc) volume_small_pane_srt_g5

0x6ad3,	// (0x00047aed) volume_small_pane_srt_g6_ParamLimits

0x6ad3,	// (0x00047aed) volume_small_pane_srt_g6

0x6ae4,	// (0x00047afe) volume_small_pane_srt_g7_ParamLimits

0x6ae4,	// (0x00047afe) volume_small_pane_srt_g7

0x6af5,	// (0x00047b0f) volume_small_pane_srt_g8_ParamLimits

0x6af5,	// (0x00047b0f) volume_small_pane_srt_g8

0x6b06,	// (0x00047b20) volume_small_pane_srt_g9_ParamLimits

0x6b06,	// (0x00047b20) volume_small_pane_srt_g9

0x6b17,	// (0x00047b31) volume_small_pane_srt_g10_ParamLimits

0x6b17,	// (0x00047b31) volume_small_pane_srt_g10

0x0009,

0xf73b,	// (0x00050755) volume_small_pane_srt_g_ParamLimits

0xf73b,	// (0x00050755) volume_small_pane_srt_g

0x0aaf,	// (0x00041ac9) query_popup_data_pane_cp2

0xb0c5,	// (0x0004c0df) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb0c5,	// (0x0004c0df) navi_navi_icon_text_pane_srt_t1

0xa17c,	// (0x0004b196) navi_tabs_2_long_pane_srt

0xa17c,	// (0x0004b196) navi_tabs_2_pane_srt

0xa17c,	// (0x0004b196) navi_tabs_3_long_pane_srt

0xa17c,	// (0x0004b196) navi_tabs_3_pane_srt

0xa17c,	// (0x0004b196) navi_tabs_4_pane_srt

0x7727,	// (0x00048741) tabs_2_active_pane_srt_ParamLimits

0x7727,	// (0x00048741) tabs_2_active_pane_srt

0x7737,	// (0x00048751) tabs_2_passive_pane_srt_ParamLimits

0x7737,	// (0x00048751) tabs_2_passive_pane_srt

0x93a6,	// (0x0004a3c0) bg_passive_tab_pane_cp1_srt_ParamLimits

0x93a6,	// (0x0004a3c0) bg_passive_tab_pane_cp1_srt

0xb091,	// (0x0004c0ab) bg_passive_tab_pane_g1_cp1_srt

0x8cbc,	// (0x00049cd6) bg_passive_tab_pane_g2_cp1_srt

0xb09a,	// (0x0004c0b4) bg_passive_tab_pane_g3_cp1_srt

0xd315,	// (0x0004e32f) bg_active_tab_pane_cp1_srt_ParamLimits

0xd315,	// (0x0004e32f) bg_active_tab_pane_cp1_srt

0xb0a3,	// (0x0004c0bd) tabs_2_active_pane_srt_g1

0xb0ab,	// (0x0004c0c5) tabs_2_active_pane_srt_t1_ParamLimits

0xb0ab,	// (0x0004c0c5) tabs_2_active_pane_srt_t1

0xb091,	// (0x0004c0ab) bg_active_tab_pane_g1_cp1_srt

0x8cbc,	// (0x00049cd6) bg_active_tab_pane_g2_cp1_srt

0xb09a,	// (0x0004c0b4) bg_active_tab_pane_g3_cp1_srt

0x76f4,	// (0x0004870e) tabs_3_active_pane_srt_ParamLimits

0x76f4,	// (0x0004870e) tabs_3_active_pane_srt

0x7705,	// (0x0004871f) tabs_3_passive_pane_cp_srt_ParamLimits

0x7705,	// (0x0004871f) tabs_3_passive_pane_cp_srt

0x7716,	// (0x00048730) tabs_3_passive_pane_srt_ParamLimits

0x7716,	// (0x00048730) tabs_3_passive_pane_srt

0x93a6,	// (0x0004a3c0) bg_passive_tab_pane_cp2_srt_ParamLimits

0x93a6,	// (0x0004a3c0) bg_passive_tab_pane_cp2_srt

0x922e,	// (0x0004a248) bg_passive_tab_pane_g1_cp2_srt

0x8cbc,	// (0x00049cd6) bg_passive_tab_pane_g2_cp2_srt

0x9237,	// (0x0004a251) bg_passive_tab_pane_g3_cp2_srt

0xd315,	// (0x0004e32f) bg_active_tab_pane_cp2_srt_ParamLimits

0xd315,	// (0x0004e32f) bg_active_tab_pane_cp2_srt

0xb077,	// (0x0004c091) tabs_3_active_pane_srt_g1

0xb07f,	// (0x0004c099) tabs_3_active_pane_srt_t1_ParamLimits

0xb07f,	// (0x0004c099) tabs_3_active_pane_srt_t1

0x922e,	// (0x0004a248) bg_active_tab_pane_g1_cp2_srt

0x8cbc,	// (0x00049cd6) bg_active_tab_pane_g2_cp2_srt

0x9237,	// (0x0004a251) bg_active_tab_pane_g3_cp2_srt

0x76ac,	// (0x000486c6) tabs_4_active_pane_srt_ParamLimits

0x76ac,	// (0x000486c6) tabs_4_active_pane_srt

0x76be,	// (0x000486d8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x76be,	// (0x000486d8) tabs_4_passive_pane_cp2_srt

0x6c69,	// (0x00047c83) aid_size_cell_toolbar

0x655d,	// (0x00047577) main_idle_act_pane_ParamLimits

0x6e3e,	// (0x00047e58) popup_large_graphic_colour_window_ParamLimits

0x71e5,	// (0x000481ff) popup_toolbar_window_ParamLimits

0x71e5,	// (0x000481ff) popup_toolbar_window

0xae8c,	// (0x0004bea6) list_single_graphic_2heading_pane_ParamLimits

0xae8c,	// (0x0004bea6) list_single_graphic_2heading_pane

0x40b5,	// (0x000450cf) aid_size_cell_apps_grid_lsc_pane

0x40c7,	// (0x000450e1) aid_size_cell_apps_grid_prt_pane

0x93a6,	// (0x0004a3c0) bg_wml_button_pane_cp1_ParamLimits

0x93a6,	// (0x0004a3c0) bg_wml_button_pane_cp1

0x9b58,	// (0x0004ab72) form_midp_field_text_pane_t1_ParamLimits

0x994a,	// (0x0004a964) input_focus_pane_cp050_ParamLimits

0x9b83,	// (0x0004ab9d) list_midp_form_text_pane_ParamLimits

0x9b35,	// (0x0004ab4f) input_focus_pane_cp051_ParamLimits

0x9b49,	// (0x0004ab63) list_midp_choice_pane_ParamLimits

0x9a03,	// (0x0004aa1d) list_single_2graphic_pane_cp3_ParamLimits

0x9a03,	// (0x0004aa1d) list_single_2graphic_pane_cp3

0x9a19,	// (0x0004aa33) list_single_midp_graphic_pane_ParamLimits

0x9a19,	// (0x0004aa33) list_single_midp_graphic_pane

0x54ec,	// (0x00046506) list_single_graphic_2heading_pane_g1_ParamLimits

0x54ec,	// (0x00046506) list_single_graphic_2heading_pane_g1

0x54f8,	// (0x00046512) list_single_graphic_2heading_pane_g4_ParamLimits

0x54f8,	// (0x00046512) list_single_graphic_2heading_pane_g4

0x5504,	// (0x0004651e) list_single_graphic_2heading_pane_g5_ParamLimits

0x5504,	// (0x0004651e) list_single_graphic_2heading_pane_g5

0x0002,

0xf78e,	// (0x000507a8) list_single_graphic_2heading_pane_g_ParamLimits

0xf78e,	// (0x000507a8) list_single_graphic_2heading_pane_g

0x5510,	// (0x0004652a) list_single_graphic_2heading_pane_t1_ParamLimits

0x5510,	// (0x0004652a) list_single_graphic_2heading_pane_t1

0x5524,	// (0x0004653e) list_single_graphic_2heading_pane_t2_ParamLimits

0x5524,	// (0x0004653e) list_single_graphic_2heading_pane_t2

0x5540,	// (0x0004655a) list_single_graphic_2heading_pane_t3_ParamLimits

0x5540,	// (0x0004655a) list_single_graphic_2heading_pane_t3

0x0002,

0xf795,	// (0x000507af) list_single_graphic_2heading_pane_t_ParamLimits

0xf795,	// (0x000507af) list_single_graphic_2heading_pane_t

0x9814,	// (0x0004a82e) bg_popup_sub_pane_cp2

0x983e,	// (0x0004a858) grid_toobar_pane

0x72a4,	// (0x000482be) cell_toolbar_pane_ParamLimits

0x72a4,	// (0x000482be) cell_toolbar_pane

0x987a,	// (0x0004a894) cell_toolbar_pane_g1_ParamLimits

0x987a,	// (0x0004a894) cell_toolbar_pane_g1

0x988e,	// (0x0004a8a8) cell_toolbar_pane_g2_ParamLimits

0x988e,	// (0x0004a8a8) cell_toolbar_pane_g2

0x0001,

0xf7a3,	// (0x000507bd) cell_toolbar_pane_g_ParamLimits

0xf7a3,	// (0x000507bd) cell_toolbar_pane_g

0x98b0,	// (0x0004a8ca) grid_highlight_pane_cp2_ParamLimits

0x98b0,	// (0x0004a8ca) grid_highlight_pane_cp2

0x98ca,	// (0x0004a8e4) toolbar_button_pane

0x98d6,	// (0x0004a8f0) toolbar_button_pane_g1

0x98de,	// (0x0004a8f8) toolbar_button_pane_g2

0x98e6,	// (0x0004a900) toolbar_button_pane_g3

0x98ee,	// (0x0004a908) toolbar_button_pane_g4

0x98f6,	// (0x0004a910) toolbar_button_pane_g5

0x98fe,	// (0x0004a918) toolbar_button_pane_g6

0x9906,	// (0x0004a920) toolbar_button_pane_g7

0x990e,	// (0x0004a928) toolbar_button_pane_g8

0x9916,	// (0x0004a930) toolbar_button_pane_g9

0x0009,

0xf7a8,	// (0x000507c2) toolbar_button_pane_g

0x72f4,	// (0x0004830e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x72f4,	// (0x0004830e) list_single_2graphic_pane_g1_cp3

0x7300,	// (0x0004831a) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7300,	// (0x0004831a) list_single_2graphic_pane_g2_cp3

0x8e92,	// (0x00049eac) list_single_2graphic_pane_g3_cp3

0x7311,	// (0x0004832b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7311,	// (0x0004832b) list_single_2graphic_pane_g4_cp3

0x731d,	// (0x00048337) list_single_2graphic_pane_t1_cp3_ParamLimits

0x731d,	// (0x00048337) list_single_2graphic_pane_t1_cp3

0x8a07,	// (0x00049a21) list_single_midp_graphic_pane_g2_ParamLimits

0x8a07,	// (0x00049a21) list_single_midp_graphic_pane_g2

0x54d4,	// (0x000464ee) aid_zoom_text_primary

0x54dc,	// (0x000464f6) aid_zoom_text_secondary

0x92e8,	// (0x0004a302) status_small_pane_g7_ParamLimits

0x92e8,	// (0x0004a302) status_small_pane_g7

0x930b,	// (0x0004a325) status_small_pane_t1_ParamLimits

0x60ac,	// (0x000470c6) title_pane_g2

0x0003,

0xf527,	// (0x00050541) title_pane_g

0x6315,	// (0x0004732f) aid_size_cell_colour_1_pane_ParamLimits

0x6315,	// (0x0004732f) aid_size_cell_colour_1_pane

0x6329,	// (0x00047343) aid_size_cell_colour_2_pane_ParamLimits

0x6329,	// (0x00047343) aid_size_cell_colour_2_pane

0x633d,	// (0x00047357) aid_size_cell_colour_3_pane_ParamLimits

0x633d,	// (0x00047357) aid_size_cell_colour_3_pane

0x6351,	// (0x0004736b) aid_size_cell_colour_4_pane_ParamLimits

0x6351,	// (0x0004736b) aid_size_cell_colour_4_pane

0x65b7,	// (0x000475d1) title_pane_stacon_g1_ParamLimits

0x65b7,	// (0x000475d1) title_pane_stacon_g1

0x9f62,	// (0x0004af7c) popup_note_wait_window_g3_ParamLimits

0x9f62,	// (0x0004af7c) popup_note_wait_window_g3

0x9fd9,	// (0x0004aff3) popup_note_wait_window_t5_ParamLimits

0x9fd9,	// (0x0004aff3) popup_note_wait_window_t5

0xd2c7,	// (0x0004e2e1) main_feb_china_hwr_fs_writing_pane

0x6d03,	// (0x00047d1d) popup_feb_china_hwr_fs_window_ParamLimits

0x6d03,	// (0x00047d1d) popup_feb_china_hwr_fs_window

0x7366,	// (0x00048380) aid_size_cell_hwr_fs_ParamLimits

0x7366,	// (0x00048380) aid_size_cell_hwr_fs

0x994a,	// (0x0004a964) bg_popup_sub_pane_cp3_ParamLimits

0x994a,	// (0x0004a964) bg_popup_sub_pane_cp3

0x737b,	// (0x00048395) grid_hwr_fs_pane_ParamLimits

0x737b,	// (0x00048395) grid_hwr_fs_pane

0x7393,	// (0x000483ad) linegrid_hwr_fs_pane_ParamLimits

0x7393,	// (0x000483ad) linegrid_hwr_fs_pane

0x73a3,	// (0x000483bd) cell_hwr_fs_pane_ParamLimits

0x73a3,	// (0x000483bd) cell_hwr_fs_pane

0x9956,	// (0x0004a970) linegrid_hwr_fs_pane_g1_ParamLimits

0x9956,	// (0x0004a970) linegrid_hwr_fs_pane_g1

0x9962,	// (0x0004a97c) linegrid_hwr_fs_pane_g2_ParamLimits

0x9962,	// (0x0004a97c) linegrid_hwr_fs_pane_g2

0x9974,	// (0x0004a98e) linegrid_hwr_fs_pane_g3_ParamLimits

0x9974,	// (0x0004a98e) linegrid_hwr_fs_pane_g3

0x73c7,	// (0x000483e1) linegrid_hwr_fs_pane_g4_ParamLimits

0x73c7,	// (0x000483e1) linegrid_hwr_fs_pane_g4

0x73e5,	// (0x000483ff) linegrid_hwr_fs_pane_g5_ParamLimits

0x73e5,	// (0x000483ff) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d3,	// (0x000507ed) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d3,	// (0x000507ed) linegrid_hwr_fs_pane_g

0x9980,	// (0x0004a99a) cell_hwr_fs_pane_g1_ParamLimits

0x9980,	// (0x0004a99a) cell_hwr_fs_pane_g1

0x9751,	// (0x0004a76b) cell_hwr_fs_pane_g2_ParamLimits

0x9751,	// (0x0004a76b) cell_hwr_fs_pane_g2

0x9996,	// (0x0004a9b0) cell_hwr_fs_pane_g3_ParamLimits

0x9996,	// (0x0004a9b0) cell_hwr_fs_pane_g3

0x99a3,	// (0x0004a9bd) cell_hwr_fs_pane_g4_ParamLimits

0x99a3,	// (0x0004a9bd) cell_hwr_fs_pane_g4

0x0003,

0xf7de,	// (0x000507f8) cell_hwr_fs_pane_g_ParamLimits

0xf7de,	// (0x000507f8) cell_hwr_fs_pane_g

0x73fb,	// (0x00048415) cell_hwr_fs_pane_t1

0xd2c7,	// (0x0004e2e1) grid_highlight_pane_cp6

0xd2c7,	// (0x0004e2e1) main_idle_act2_pane

0x3d2f,	// (0x00044d49) aid_inside_area_popup_secondary

0xa612,	// (0x0004b62c) aid_inside_area_window_primary_ParamLimits

0xa612,	// (0x0004b62c) aid_inside_area_window_primary

0xb1de,	// (0x0004c1f8) ai2_news_ticker_pane

0xb1e6,	// (0x0004c200) aid_size_cell_ai1_link_ParamLimits

0xb1e6,	// (0x0004c200) aid_size_cell_ai1_link

0xb200,	// (0x0004c21a) popup_ai2_data_window_ParamLimits

0xb200,	// (0x0004c21a) popup_ai2_data_window

0xb21e,	// (0x0004c238) popup_ai2_link_window_ParamLimits

0xb21e,	// (0x0004c238) popup_ai2_link_window

0x994a,	// (0x0004a964) bg_popup_sub_pane_cp4_ParamLimits

0x994a,	// (0x0004a964) bg_popup_sub_pane_cp4

0xb234,	// (0x0004c24e) grid_ai2_link_pane_ParamLimits

0xb234,	// (0x0004c24e) grid_ai2_link_pane

0xb24b,	// (0x0004c265) popup_ai2_link_window_g1_ParamLimits

0xb24b,	// (0x0004c265) popup_ai2_link_window_g1

0xb257,	// (0x0004c271) popup_ai2_link_window_g2_ParamLimits

0xb257,	// (0x0004c271) popup_ai2_link_window_g2

0x0001,

0xf9b1,	// (0x000509cb) popup_ai2_link_window_g_ParamLimits

0xf9b1,	// (0x000509cb) popup_ai2_link_window_g

0xb268,	// (0x0004c282) ai2_mp_button_pane

0xb270,	// (0x0004c28a) ai2_mp_volume_pane

0x9b35,	// (0x0004ab4f) bg_popup_sub_pane_cp5_ParamLimits

0x9b35,	// (0x0004ab4f) bg_popup_sub_pane_cp5

0xb278,	// (0x0004c292) heading_ai2_gene_pane_ParamLimits

0xb278,	// (0x0004c292) heading_ai2_gene_pane

0xb284,	// (0x0004c29e) list_ai2_gene_pane_ParamLimits

0xb284,	// (0x0004c29e) list_ai2_gene_pane

0xb2cc,	// (0x0004c2e6) cell_ai2_link_pane_ParamLimits

0xb2cc,	// (0x0004c2e6) cell_ai2_link_pane

0xb2e2,	// (0x0004c2fc) cell_ai2_link_pane_g1

0xd2c7,	// (0x0004e2e1) grid_highlight_pane_cp7

0x7764,	// (0x0004877e) ai2_mp_volume_pane_g1

0xb3b5,	// (0x0004c3cf) ai2_mp_volume_pane_g2

0xb32a,	// (0x0004c344) list_ai2_gene_pane_t1

0xb3bd,	// (0x0004c3d7) ai2_mp_volume_pane_g3

0x0002,

0xf9ca,	// (0x000509e4) ai2_mp_volume_pane_g

0x776c,	// (0x00048786) volume_small_pane_cp3

0xb3c5,	// (0x0004c3df) aid_size_cell_ai2_button

0xb3cd,	// (0x0004c3e7) grid_ai2_button_pane

0xb3d6,	// (0x0004c3f0) cell_ai2_button_pane_ParamLimits

0xb3d6,	// (0x0004c3f0) cell_ai2_button_pane

0xd2bd,	// (0x0004e2d7) cell_ai2_button_pane_g1

0xd2c7,	// (0x0004e2e1) grid_highlight_pane_cp8

0xb375,	// (0x0004c38f) ai2_gene_pane_t1_ParamLimits

0xb375,	// (0x0004c38f) ai2_gene_pane_t1

0x6c5f,	// (0x00047c79) aid_height_parent_landscape

0xac92,	// (0x0004bcac) aid_height_set_list

0xaca3,	// (0x0004bcbd) aid_size_parent

0xaffd,	// (0x0004c017) aid_size_cell_graphic_pane_ParamLimits

0xb294,	// (0x0004c2ae) popup_ai2_data_window_g1_ParamLimits

0xb294,	// (0x0004c2ae) popup_ai2_data_window_g1

0xb2a0,	// (0x0004c2ba) ai2_news_ticker_pane_g1

0xb2a8,	// (0x0004c2c2) ai2_news_ticker_pane_g2

0x0001,

0xf9b6,	// (0x000509d0) ai2_news_ticker_pane_g

0xb2b0,	// (0x0004c2ca) ai2_news_ticker_pane_t1

0xb2be,	// (0x0004c2d8) ai2_news_ticker_pane_t2

0x0001,

0xf9bb,	// (0x000509d5) ai2_news_ticker_pane_t

0xb2eb,	// (0x0004c305) heading_ai2_gene_pane_g1

0xb2f3,	// (0x0004c30d) heading_ai2_gene_pane_t1_ParamLimits

0xb2f3,	// (0x0004c30d) heading_ai2_gene_pane_t1

0xb308,	// (0x0004c322) list_highlight_pane_cp6

0xb310,	// (0x0004c32a) ai2_gene_pane_ParamLimits

0xb310,	// (0x0004c32a) ai2_gene_pane

0xb338,	// (0x0004c352) list_ai2_gene_pane_t2

0x0001,

0xf9c0,	// (0x000509da) list_ai2_gene_pane_t

0xb346,	// (0x0004c360) list_highlight_pane_cp8_ParamLimits

0xb346,	// (0x0004c360) list_highlight_pane_cp8

0xb357,	// (0x0004c371) ai2_gene_pane_g1_ParamLimits

0xb357,	// (0x0004c371) ai2_gene_pane_g1

0xb369,	// (0x0004c383) ai2_gene_pane_g2_ParamLimits

0xb369,	// (0x0004c383) ai2_gene_pane_g2

0x0001,

0xf9c5,	// (0x000509df) ai2_gene_pane_g_ParamLimits

0xf9c5,	// (0x000509df) ai2_gene_pane_g

0x0dd1,	// (0x00041deb) scroll_pane_cp12

0x6c1e,	// (0x00047c38) control_pane_t3_ParamLimits

0x6c1e,	// (0x00047c38) control_pane_t3

0x92fc,	// (0x0004a316) status_small_pane_g8_ParamLimits

0x92fc,	// (0x0004a316) status_small_pane_g8

0x6e01,	// (0x00047e1b) popup_find_window_ParamLimits

0x702e,	// (0x00048048) popup_note_image_window_ParamLimits

0x5558,	// (0x00046572) list_double2_graphic_pane_vc_g1_ParamLimits

0x5558,	// (0x00046572) list_double2_graphic_pane_vc_g1

0x72d4,	// (0x000482ee) list_double2_graphic_pane_vc_g2_ParamLimits

0x72d4,	// (0x000482ee) list_double2_graphic_pane_vc_g2

0x72e0,	// (0x000482fa) list_double2_graphic_pane_vc_g3_ParamLimits

0x72e0,	// (0x000482fa) list_double2_graphic_pane_vc_g3

0x0002,

0xf79c,	// (0x000507b6) list_double2_graphic_pane_vc_g_ParamLimits

0xf79c,	// (0x000507b6) list_double2_graphic_pane_vc_g

0x5564,	// (0x0004657e) list_double2_graphic_pane_vc_t1_ParamLimits

0x5564,	// (0x0004657e) list_double2_graphic_pane_vc_t1

0x72d4,	// (0x000482ee) list_single_heading_pane_vc_g1_ParamLimits

0x72d4,	// (0x000482ee) list_single_heading_pane_vc_g1

0x72e0,	// (0x000482fa) list_single_heading_pane_vc_g2_ParamLimits

0x72e0,	// (0x000482fa) list_single_heading_pane_vc_g2

0x0001,

0xf7bd,	// (0x000507d7) list_single_heading_pane_vc_g_ParamLimits

0xf7bd,	// (0x000507d7) list_single_heading_pane_vc_g

0x557a,	// (0x00046594) list_single_heading_pane_vc_t1_ParamLimits

0x557a,	// (0x00046594) list_single_heading_pane_vc_t1

0x5590,	// (0x000465aa) list_single_heading_pane_vc_t2_ParamLimits

0x5590,	// (0x000465aa) list_single_heading_pane_vc_t2

0x0001,

0xf7c2,	// (0x000507dc) list_single_heading_pane_vc_t_ParamLimits

0xf7c2,	// (0x000507dc) list_single_heading_pane_vc_t

0x734e,	// (0x00048368) list_setting_number_pane_vc_g1_ParamLimits

0x734e,	// (0x00048368) list_setting_number_pane_vc_g1

0x735a,	// (0x00048374) list_setting_number_pane_vc_g2_ParamLimits

0x735a,	// (0x00048374) list_setting_number_pane_vc_g2

0x0001,

0xf7c7,	// (0x000507e1) list_setting_number_pane_vc_g_ParamLimits

0xf7c7,	// (0x000507e1) list_setting_number_pane_vc_g

0x55a2,	// (0x000465bc) list_setting_number_pane_vc_t1_ParamLimits

0x55a2,	// (0x000465bc) list_setting_number_pane_vc_t1

0x55b6,	// (0x000465d0) list_setting_number_pane_vc_t2_ParamLimits

0x55b6,	// (0x000465d0) list_setting_number_pane_vc_t2

0x55d2,	// (0x000465ec) list_setting_number_pane_vc_t3_ParamLimits

0x55d2,	// (0x000465ec) list_setting_number_pane_vc_t3

0x0002,

0xf7cc,	// (0x000507e6) list_setting_number_pane_vc_t_ParamLimits

0xf7cc,	// (0x000507e6) list_setting_number_pane_vc_t

0x5600,	// (0x0004661a) set_value_pane_vc_ParamLimits

0x5600,	// (0x0004661a) set_value_pane_vc

0xae8c,	// (0x0004bea6) list_double2_graphic_pane_vc_ParamLimits

0xae8c,	// (0x0004bea6) list_double2_graphic_pane_vc

0xae8c,	// (0x0004bea6) list_double2_large_graphic_pane_vc_ParamLimits

0xae8c,	// (0x0004bea6) list_double2_large_graphic_pane_vc

0xae8c,	// (0x0004bea6) list_double2_pane_vc_ParamLimits

0xae8c,	// (0x0004bea6) list_double2_pane_vc

0xae8c,	// (0x0004bea6) list_double_graphic_heading_pane_vc_ParamLimits

0xae8c,	// (0x0004bea6) list_double_graphic_heading_pane_vc

0xae8c,	// (0x0004bea6) list_double_graphic_pane_vc_ParamLimits

0xae8c,	// (0x0004bea6) list_double_graphic_pane_vc

0xae8c,	// (0x0004bea6) list_double_heading_pane_vc_ParamLimits

0xae8c,	// (0x0004bea6) list_double_heading_pane_vc

0xaea0,	// (0x0004beba) list_double_large_graphic_pane_vc_ParamLimits

0xaea0,	// (0x0004beba) list_double_large_graphic_pane_vc

0xae8c,	// (0x0004bea6) list_double_number_pane_vc_ParamLimits

0xae8c,	// (0x0004bea6) list_double_number_pane_vc

0xae8c,	// (0x0004bea6) list_double_pane_vc_ParamLimits

0xae8c,	// (0x0004bea6) list_double_pane_vc

0xae8c,	// (0x0004bea6) list_double_time_pane_vc_ParamLimits

0xae8c,	// (0x0004bea6) list_double_time_pane_vc

0xae8c,	// (0x0004bea6) list_setting_number_pane_vc_ParamLimits

0xae8c,	// (0x0004bea6) list_setting_number_pane_vc

0xae8c,	// (0x0004bea6) list_setting_pane_vc_ParamLimits

0xae8c,	// (0x0004bea6) list_setting_pane_vc

0xae8c,	// (0x0004bea6) list_single_graphic_heading_pane_vc_ParamLimits

0xae8c,	// (0x0004bea6) list_single_graphic_heading_pane_vc

0xae8c,	// (0x0004bea6) list_single_heading_pane_vc_ParamLimits

0xae8c,	// (0x0004bea6) list_single_heading_pane_vc

0x7651,	// (0x0004866b) list_single_number_heading_pane_vc_ParamLimits

0x7651,	// (0x0004866b) list_single_number_heading_pane_vc

0x56dc,	// (0x000466f6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x56dc,	// (0x000466f6) list_double_graphic_heading_pane_vc_g1

0x72d4,	// (0x000482ee) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x72d4,	// (0x000482ee) list_double_graphic_heading_pane_vc_g2

0x72e0,	// (0x000482fa) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x72e0,	// (0x000482fa) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d1,	// (0x000509eb) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d1,	// (0x000509eb) list_double_graphic_heading_pane_vc_g

0x56e8,	// (0x00046702) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56e8,	// (0x00046702) list_double_graphic_heading_pane_vc_t1

0x56fe,	// (0x00046718) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x56fe,	// (0x00046718) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d8,	// (0x000509f2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d8,	// (0x000509f2) list_double_graphic_heading_pane_vc_t

0x734e,	// (0x00048368) list_setting_pane_vc_g1_ParamLimits

0x734e,	// (0x00048368) list_setting_pane_vc_g1

0x735a,	// (0x00048374) list_setting_pane_vc_g2_ParamLimits

0x735a,	// (0x00048374) list_setting_pane_vc_g2

0x0001,

0xf7c7,	// (0x000507e1) list_setting_pane_vc_g_ParamLimits

0xf7c7,	// (0x000507e1) list_setting_pane_vc_g

0x571c,	// (0x00046736) list_setting_pane_vc_t1_ParamLimits

0x571c,	// (0x00046736) list_setting_pane_vc_t1

0x5738,	// (0x00046752) list_setting_pane_vc_t2_ParamLimits

0x5738,	// (0x00046752) list_setting_pane_vc_t2

0x0001,

0xfa06,	// (0x00050a20) list_setting_pane_vc_t_ParamLimits

0xfa06,	// (0x00050a20) list_setting_pane_vc_t

0x5600,	// (0x0004661a) set_value_pane_cp_vc_ParamLimits

0x5600,	// (0x0004661a) set_value_pane_cp_vc

0x72d4,	// (0x000482ee) list_single_number_heading_pane_vc_g1_ParamLimits

0x72d4,	// (0x000482ee) list_single_number_heading_pane_vc_g1

0x72e0,	// (0x000482fa) list_single_number_heading_pane_vc_g2_ParamLimits

0x72e0,	// (0x000482fa) list_single_number_heading_pane_vc_g2

0x0001,

0xf7bd,	// (0x000507d7) list_single_number_heading_pane_vc_g_ParamLimits

0xf7bd,	// (0x000507d7) list_single_number_heading_pane_vc_g

0x5754,	// (0x0004676e) list_single_number_heading_pane_vc_t1_ParamLimits

0x5754,	// (0x0004676e) list_single_number_heading_pane_vc_t1

0x576a,	// (0x00046784) list_single_number_heading_pane_vc_t2_ParamLimits

0x576a,	// (0x00046784) list_single_number_heading_pane_vc_t2

0x5780,	// (0x0004679a) list_single_number_heading_pane_vc_t3_ParamLimits

0x5780,	// (0x0004679a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0b,	// (0x00050a25) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x00050a25) list_single_number_heading_pane_vc_t

0x5558,	// (0x00046572) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5558,	// (0x00046572) list_single_graphic_heading_pane_vc_g1

0x72d4,	// (0x000482ee) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x72d4,	// (0x000482ee) list_single_graphic_heading_pane_vc_g4

0x72e0,	// (0x000482fa) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x72e0,	// (0x000482fa) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79c,	// (0x000507b6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79c,	// (0x000507b6) list_single_graphic_heading_pane_vc_g

0x5754,	// (0x0004676e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5754,	// (0x0004676e) list_single_graphic_heading_pane_vc_t1

0x5792,	// (0x000467ac) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5792,	// (0x000467ac) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa12,	// (0x00050a2c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa12,	// (0x00050a2c) list_single_graphic_heading_pane_vc_t

0x72d4,	// (0x000482ee) list_double2_pane_vc_g1_ParamLimits

0x72d4,	// (0x000482ee) list_double2_pane_vc_g1

0x72e0,	// (0x000482fa) list_double2_pane_vc_g2_ParamLimits

0x72e0,	// (0x000482fa) list_double2_pane_vc_g2

0x0001,

0xf7bd,	// (0x000507d7) list_double2_pane_vc_g_ParamLimits

0xf7bd,	// (0x000507d7) list_double2_pane_vc_g

0x57a4,	// (0x000467be) list_double2_pane_vc_t1_ParamLimits

0x57a4,	// (0x000467be) list_double2_pane_vc_t1

0x7775,	// (0x0004878f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7775,	// (0x0004878f) list_double2_large_graphic_pane_vc_g1

0x72d4,	// (0x000482ee) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x72d4,	// (0x000482ee) list_double2_large_graphic_pane_vc_g2

0x72e0,	// (0x000482fa) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x72e0,	// (0x000482fa) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa17,	// (0x00050a31) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa17,	// (0x00050a31) list_double2_large_graphic_pane_vc_g

0x57ba,	// (0x000467d4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x57ba,	// (0x000467d4) list_double2_large_graphic_pane_vc_t1

0x7781,	// (0x0004879b) list_double_time_pane_vc_g1_ParamLimits

0x7781,	// (0x0004879b) list_double_time_pane_vc_g1

0x778d,	// (0x000487a7) list_double_time_pane_vc_g2_ParamLimits

0x778d,	// (0x000487a7) list_double_time_pane_vc_g2

0x0001,

0xfa1e,	// (0x00050a38) list_double_time_pane_vc_g_ParamLimits

0xfa1e,	// (0x00050a38) list_double_time_pane_vc_g

0x57d0,	// (0x000467ea) list_double_time_pane_vc_t1_ParamLimits

0x57d0,	// (0x000467ea) list_double_time_pane_vc_t1

0x57fa,	// (0x00046814) list_double_time_pane_vc_t2_ParamLimits

0x57fa,	// (0x00046814) list_double_time_pane_vc_t2

0x5843,	// (0x0004685d) list_double_time_pane_vc_t3_ParamLimits

0x5843,	// (0x0004685d) list_double_time_pane_vc_t3

0x5855,	// (0x0004686f) list_double_time_pane_vc_t4_ParamLimits

0x5855,	// (0x0004686f) list_double_time_pane_vc_t4

0x0003,

0xfa23,	// (0x00050a3d) list_double_time_pane_vc_t_ParamLimits

0xfa23,	// (0x00050a3d) list_double_time_pane_vc_t

0x72d4,	// (0x000482ee) list_double_pane_vc_g1_ParamLimits

0x72d4,	// (0x000482ee) list_double_pane_vc_g1

0x72e0,	// (0x000482fa) list_double_pane_vc_g2_ParamLimits

0x72e0,	// (0x000482fa) list_double_pane_vc_g2

0x0001,

0xf7bd,	// (0x000507d7) list_double_pane_vc_g_ParamLimits

0xf7bd,	// (0x000507d7) list_double_pane_vc_g

0x5869,	// (0x00046883) list_double_pane_vc_t1_ParamLimits

0x5869,	// (0x00046883) list_double_pane_vc_t1

0x587d,	// (0x00046897) list_double_pane_vc_t2_ParamLimits

0x587d,	// (0x00046897) list_double_pane_vc_t2

0x0001,

0xfa2c,	// (0x00050a46) list_double_pane_vc_t_ParamLimits

0xfa2c,	// (0x00050a46) list_double_pane_vc_t

0x72d4,	// (0x000482ee) list_double_number_pane_vc_g1_ParamLimits

0x72d4,	// (0x000482ee) list_double_number_pane_vc_g1

0x72e0,	// (0x000482fa) list_double_number_pane_vc_g2_ParamLimits

0x72e0,	// (0x000482fa) list_double_number_pane_vc_g2

0x0001,

0xf7bd,	// (0x000507d7) list_double_number_pane_vc_g_ParamLimits

0xf7bd,	// (0x000507d7) list_double_number_pane_vc_g

0x5893,	// (0x000468ad) list_double_number_pane_vc_t1_ParamLimits

0x5893,	// (0x000468ad) list_double_number_pane_vc_t1

0x58a5,	// (0x000468bf) list_double_number_pane_vc_t2_ParamLimits

0x58a5,	// (0x000468bf) list_double_number_pane_vc_t2

0x58b9,	// (0x000468d3) list_double_number_pane_vc_t3_ParamLimits

0x58b9,	// (0x000468d3) list_double_number_pane_vc_t3

0x0002,

0xfa31,	// (0x00050a4b) list_double_number_pane_vc_t_ParamLimits

0xfa31,	// (0x00050a4b) list_double_number_pane_vc_t

0x7799,	// (0x000487b3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7799,	// (0x000487b3) list_double_large_graphic_pane_vc_g1

0x77bb,	// (0x000487d5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x77bb,	// (0x000487d5) list_double_large_graphic_pane_vc_g2

0x77cf,	// (0x000487e9) list_double_large_graphic_pane_vc_g3_ParamLimits

0x77cf,	// (0x000487e9) list_double_large_graphic_pane_vc_g3

0x58d1,	// (0x000468eb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x58d1,	// (0x000468eb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa38,	// (0x00050a52) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x00050a52) list_double_large_graphic_pane_vc_g

0x58dd,	// (0x000468f7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x58dd,	// (0x000468f7) list_double_large_graphic_pane_vc_t1

0x58f9,	// (0x00046913) list_double_large_graphic_pane_vc_t2_ParamLimits

0x58f9,	// (0x00046913) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa41,	// (0x00050a5b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa41,	// (0x00050a5b) list_double_large_graphic_pane_vc_t

0x72d4,	// (0x000482ee) list_double_heading_pane_vc_g1_ParamLimits

0x72d4,	// (0x000482ee) list_double_heading_pane_vc_g1

0x72e0,	// (0x000482fa) list_double_heading_pane_vc_g2_ParamLimits

0x72e0,	// (0x000482fa) list_double_heading_pane_vc_g2

0x0001,

0xf7bd,	// (0x000507d7) list_double_heading_pane_vc_g_ParamLimits

0xf7bd,	// (0x000507d7) list_double_heading_pane_vc_g

0x5919,	// (0x00046933) list_double_heading_pane_vc_t1_ParamLimits

0x5919,	// (0x00046933) list_double_heading_pane_vc_t1

0x592b,	// (0x00046945) list_double_heading_pane_vc_t2_ParamLimits

0x592b,	// (0x00046945) list_double_heading_pane_vc_t2

0x0001,

0xfa46,	// (0x00050a60) list_double_heading_pane_vc_t_ParamLimits

0xfa46,	// (0x00050a60) list_double_heading_pane_vc_t

0x5943,	// (0x0004695d) list_double_graphic_pane_vc_g1_ParamLimits

0x5943,	// (0x0004695d) list_double_graphic_pane_vc_g1

0x77de,	// (0x000487f8) list_double_graphic_pane_vc_g2_ParamLimits

0x77de,	// (0x000487f8) list_double_graphic_pane_vc_g2

0x72d4,	// (0x000482ee) list_double_graphic_pane_vc_g3_ParamLimits

0x72d4,	// (0x000482ee) list_double_graphic_pane_vc_g3

0x0003,

0xfa4b,	// (0x00050a65) list_double_graphic_pane_vc_g_ParamLimits

0xfa4b,	// (0x00050a65) list_double_graphic_pane_vc_g

0x594f,	// (0x00046969) list_double_graphic_pane_vc_t1_ParamLimits

0x594f,	// (0x00046969) list_double_graphic_pane_vc_t1

0x5979,	// (0x00046993) list_double_graphic_pane_vc_t2_ParamLimits

0x5979,	// (0x00046993) list_double_graphic_pane_vc_t2

0x0001,

0xfa54,	// (0x00050a6e) list_double_graphic_pane_vc_t_ParamLimits

0xfa54,	// (0x00050a6e) list_double_graphic_pane_vc_t

0x5cb2,	// (0x00046ccc) aid_size_cell_fastswap

0x5cba,	// (0x00046cd4) aid_size_cell_touch_ParamLimits

0x5cba,	// (0x00046cd4) aid_size_cell_touch

0x5f21,	// (0x00046f3b) popup_fast_swap_wide_window_ParamLimits

0x5f21,	// (0x00046f3b) popup_fast_swap_wide_window

0x603f,	// (0x00047059) touch_pane_ParamLimits

0x603f,	// (0x00047059) touch_pane

0x0e27,	// (0x00041e41) button_value_adjust_pane_cp2

0x5214,	// (0x0004622e) button_value_adjust_pane_cp4

0x523c,	// (0x00046256) form_field_data_pane_cp2

0x5261,	// (0x0004627b) form_field_data_wide_pane_cp2

0x40f6,	// (0x00045110) bg_scroll_pane_ParamLimits

0x67d9,	// (0x000477f3) scroll_handle_pane_ParamLimits

0x67ed,	// (0x00047807) scroll_sc2_down_pane_ParamLimits

0x67ed,	// (0x00047807) scroll_sc2_down_pane

0x4150,	// (0x0004516a) scroll_sc2_up_pane_ParamLimits

0x4150,	// (0x0004516a) scroll_sc2_up_pane

0xbafe,	// (0x0004cb18) grid_wheel_folder_pane_g1_ParamLimits

0xbafe,	// (0x0004cb18) grid_wheel_folder_pane_g1

0x6a17,	// (0x00047a31) clock_nsta_pane_cp2_ParamLimits

0x6a17,	// (0x00047a31) clock_nsta_pane_cp2

0x907f,	// (0x0004a099) listscroll_midp_pane_ParamLimits

0x908b,	// (0x0004a0a5) midp_canvas_pane

0x9376,	// (0x0004a390) nsta_clock_indic_pane

0x93b2,	// (0x0004a3cc) listscroll_form_pane_vc

0x93ba,	// (0x0004a3d4) listscroll_set_pane_vc_ParamLimits

0x93ba,	// (0x0004a3d4) listscroll_set_pane_vc

0x94af,	// (0x0004a4c9) clock_nsta_pane

0x952c,	// (0x0004a546) indicator_nsta_pane

0x9814,	// (0x0004a82e) bg_popup_sub_pane_cp2_ParamLimits

0x9828,	// (0x0004a842) find_pane_cp2_ParamLimits

0x9828,	// (0x0004a842) find_pane_cp2

0x983e,	// (0x0004a858) grid_toobar_pane_ParamLimits

0x991e,	// (0x0004a938) list_form_gen_pane_vc_ParamLimits

0x991e,	// (0x0004a938) list_form_gen_pane_vc

0x9934,	// (0x0004a94e) scroll_pane_cp8_vc_ParamLimits

0x9934,	// (0x0004a94e) scroll_pane_cp8_vc

0x99b0,	// (0x0004a9ca) data_form_wide_pane_vc_ParamLimits

0x99b0,	// (0x0004a9ca) data_form_wide_pane_vc

0x99bc,	// (0x0004a9d6) form_field_data_wide_pane_vc_g1

0x99c4,	// (0x0004a9de) form_field_data_wide_pane_vc_t1_ParamLimits

0x99c4,	// (0x0004a9de) form_field_data_wide_pane_vc_t1

0x0e3b,	// (0x00041e55) input_focus_pane_cp6_vc_ParamLimits

0x0e3b,	// (0x00041e55) input_focus_pane_cp6_vc

0x9cc0,	// (0x0004acda) list_midp_pane_ParamLimits

0x9ccc,	// (0x0004ace6) scroll_pane_cp16_ParamLimits

0x9ccc,	// (0x0004ace6) scroll_pane_cp16

0x9d36,	// (0x0004ad50) button_value_adjust_pane_ParamLimits

0x9d36,	// (0x0004ad50) button_value_adjust_pane

0xacb5,	// (0x0004bccf) button_value_adjust_pane_cp6_ParamLimits

0xacb5,	// (0x0004bccf) button_value_adjust_pane_cp6

0xadfd,	// (0x0004be17) settings_code_pane_cp_ParamLimits

0xadfd,	// (0x0004be17) settings_code_pane_cp

0xd2bd,	// (0x0004e2d7) cell_touch_pane_g1

0xd2bd,	// (0x0004e2d7) cell_touch_pane_g2

0x0001,

0xf6e1,	// (0x000506fb) cell_touch_pane_g

0xb3e8,	// (0x0004c402) cell_touch_pane_cp_ParamLimits

0xb3e8,	// (0x0004c402) cell_touch_pane_cp

0xb3f8,	// (0x0004c412) cell_touch_pane_ParamLimits

0xb3f8,	// (0x0004c412) cell_touch_pane

0xd2bd,	// (0x0004e2d7) scroll_sc2_down_pane_g1

0xd2bd,	// (0x0004e2d7) scroll_sc2_up_pane_g1

0xd2c7,	// (0x0004e2e1) bg_set_opt_pane_cp4_vc

0xb409,	// (0x0004c423) list_set_graphic_pane_vc_g1_ParamLimits

0xb409,	// (0x0004c423) list_set_graphic_pane_vc_g1

0xb415,	// (0x0004c42f) list_set_graphic_pane_vc_g2_ParamLimits

0xb415,	// (0x0004c42f) list_set_graphic_pane_vc_g2

0x0001,

0xf9dd,	// (0x000509f7) list_set_graphic_pane_vc_g_ParamLimits

0xf9dd,	// (0x000509f7) list_set_graphic_pane_vc_g

0xb421,	// (0x0004c43b) text_primary_small_cp13_vc_ParamLimits

0xb421,	// (0x0004c43b) text_primary_small_cp13_vc

0xb439,	// (0x0004c453) list_set_graphic_pane_vc_ParamLimits

0xb439,	// (0x0004c453) list_set_graphic_pane_vc

0xd2c7,	// (0x0004e2e1) input_focus_pane_cp2_vc

0xd2bd,	// (0x0004e2d7) setting_code_pane_vc_g1

0xd32c,	// (0x0004e346) setting_code_pane_vc_t1

0xb44c,	// (0x0004c466) set_text_pane_vc_t1_ParamLimits

0xb44c,	// (0x0004c466) set_text_pane_vc_t1

0xd2c7,	// (0x0004e2e1) input_focus_pane_cp1_vc

0xb46d,	// (0x0004c487) list_set_text_pane_vc

0xd2bd,	// (0x0004e2d7) setting_text_pane_vc_g1

0xd2c7,	// (0x0004e2e1) bg_set_opt_pane_cp2_vc

0xd323,	// (0x0004e33d) setting_slider_graphic_pane_vc_g1

0xb477,	// (0x0004c491) setting_slider_graphic_pane_vc_t1

0xb489,	// (0x0004c4a3) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e2,	// (0x000509fc) setting_slider_graphic_pane_vc_t

0xb49b,	// (0x0004c4b5) slider_set_pane_cp_vc

0xb4a5,	// (0x0004c4bf) slider_set_pane_vc_g1

0xb4ae,	// (0x0004c4c8) slider_set_pane_vc_g2

0x0006,

0xf9e7,	// (0x00050a01) slider_set_pane_vc_g

0x0e93,	// (0x00041ead) set_opt_bg_pane_g1_copy1

0x0e9b,	// (0x00041eb5) set_opt_bg_pane_g2_copy1

0xb4da,	// (0x0004c4f4) set_opt_bg_pane_g3_copy1

0x0eab,	// (0x00041ec5) set_opt_bg_pane_g4_copy1

0x0eb3,	// (0x00041ecd) set_opt_bg_pane_g5_copy1

0x0ebb,	// (0x00041ed5) set_opt_bg_pane_g6_copy1

0xb4e4,	// (0x0004c4fe) set_opt_bg_pane_g7_copy1

0xb4ee,	// (0x0004c508) set_opt_bg_pane_g8_copy1

0xb4f8,	// (0x0004c512) set_opt_bg_pane_g9_copy1

0xd2c7,	// (0x0004e2e1) bg_set_opt_pane_cp_vc

0xb502,	// (0x0004c51c) setting_slider_pane_vc_t1

0xb511,	// (0x0004c52b) setting_slider_pane_vc_t2

0xb523,	// (0x0004c53d) setting_slider_pane_vc_t3

0x0002,

0xf9f6,	// (0x00050a10) setting_slider_pane_vc_t

0xb535,	// (0x0004c54f) slider_set_pane_vc

0x7409,	// (0x00048423) volume_set_pane_vc_g1

0x7412,	// (0x0004842c) volume_set_pane_vc_g2

0x741b,	// (0x00048435) volume_set_pane_vc_g3

0x7424,	// (0x0004843e) volume_set_pane_vc_g4

0x742d,	// (0x00048447) volume_set_pane_vc_g5

0x7436,	// (0x00048450) volume_set_pane_vc_g6

0x743f,	// (0x00048459) volume_set_pane_vc_g7

0x7448,	// (0x00048462) volume_set_pane_vc_g8

0x7451,	// (0x0004846b) volume_set_pane_vc_g9

0x745a,	// (0x00048474) volume_set_pane_vc_g10

0x0009,

0xf894,	// (0x000508ae) volume_set_pane_vc_g

0xb53f,	// (0x0004c559) volume_set_pane_vc

0xb549,	// (0x0004c563) button_value_adjust_pane_cp1_vc

0xb553,	// (0x0004c56d) list_highlight_pane_cp2_vc

0xb55c,	// (0x0004c576) list_set_pane_vc_ParamLimits

0xb55c,	// (0x0004c576) list_set_pane_vc

0xb5ca,	// (0x0004c5e4) main_pane_set_vc_t1_ParamLimits

0xb5ca,	// (0x0004c5e4) main_pane_set_vc_t1

0xb5df,	// (0x0004c5f9) main_pane_set_vc_t2_ParamLimits

0xb5df,	// (0x0004c5f9) main_pane_set_vc_t2

0xb5f1,	// (0x0004c60b) main_pane_set_vc_t3_ParamLimits

0xb5f1,	// (0x0004c60b) main_pane_set_vc_t3

0xb605,	// (0x0004c61f) main_pane_set_vc_t4_ParamLimits

0xb605,	// (0x0004c61f) main_pane_set_vc_t4

0x0003,

0xf9fd,	// (0x00050a17) main_pane_set_vc_t_ParamLimits

0xf9fd,	// (0x00050a17) main_pane_set_vc_t

0xb619,	// (0x0004c633) setting_code_pane_vc_ParamLimits

0xb619,	// (0x0004c633) setting_code_pane_vc

0xb62a,	// (0x0004c644) setting_slider_graphic_pane_vc

0xb62a,	// (0x0004c644) setting_slider_pane_vc

0xb62a,	// (0x0004c644) setting_text_pane_vc

0xb62a,	// (0x0004c644) setting_volume_pane_vc

0xb634,	// (0x0004c64e) scroll_pane_cp121_vc

0x0e15,	// (0x00041e2f) set_content_pane_vc

0xb63c,	// (0x0004c656) button_value_adjust_pane_g1

0xb645,	// (0x0004c65f) button_value_adjust_pane_g2

0x0001,

0xfa59,	// (0x00050a73) button_value_adjust_pane_g

0xb64e,	// (0x0004c668) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb64e,	// (0x0004c668) form_field_slider_wide_pane_vc_t1

0xb660,	// (0x0004c67a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb660,	// (0x0004c67a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5e,	// (0x00050a78) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5e,	// (0x00050a78) form_field_slider_wide_pane_vc_t

0xd351,	// (0x0004e36b) input_focus_pane_cp10_vc_ParamLimits

0xd351,	// (0x0004e36b) input_focus_pane_cp10_vc

0xb68c,	// (0x0004c6a6) slider_cont_pane_cp1_vc_ParamLimits

0xb68c,	// (0x0004c6a6) slider_cont_pane_cp1_vc

0xb69e,	// (0x0004c6b8) slider_form_pane_g1_cp2

0xb4ae,	// (0x0004c4c8) slider_form_pane_g2_cp2

0xb6cb,	// (0x0004c6e5) form_field_slider_pane_vc_t3

0xb6d9,	// (0x0004c6f3) form_field_slider_pane_vc_t4

0xb6e7,	// (0x0004c701) slider_form_pane_vc_ParamLimits

0xb6e7,	// (0x0004c701) slider_form_pane_vc

0xb6f4,	// (0x0004c70e) form_field_slider_pane_vc_t1_ParamLimits

0xb6f4,	// (0x0004c70e) form_field_slider_pane_vc_t1

0xb660,	// (0x0004c67a) form_field_slider_pane_vc_t2_ParamLimits

0xb660,	// (0x0004c67a) form_field_slider_pane_vc_t2

0x0001,

0xfa70,	// (0x00050a8a) form_field_slider_pane_vc_t_ParamLimits

0xfa70,	// (0x00050a8a) form_field_slider_pane_vc_t

0xd351,	// (0x0004e36b) input_focus_pane_cp9_vc_ParamLimits

0xd351,	// (0x0004e36b) input_focus_pane_cp9_vc

0xb70a,	// (0x0004c724) slider_cont_pane_vc_ParamLimits

0xb70a,	// (0x0004c724) slider_cont_pane_vc

0xb71e,	// (0x0004c738) list_form_graphic_pane_cp_vc_ParamLimits

0xb71e,	// (0x0004c738) list_form_graphic_pane_cp_vc

0x99bc,	// (0x0004a9d6) form_field_popup_wide_pane_vc_g1

0xb733,	// (0x0004c74d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb733,	// (0x0004c74d) form_field_popup_wide_pane_vc_t1

0x0e3b,	// (0x00041e55) input_focus_pane_cp8_vc_ParamLimits

0x0e3b,	// (0x00041e55) input_focus_pane_cp8_vc

0xb778,	// (0x0004c792) list_form_wide_pane_vc_ParamLimits

0xb778,	// (0x0004c792) list_form_wide_pane_vc

0xb784,	// (0x0004c79e) list_form_graphic_pane_vc_g1

0xb78c,	// (0x0004c7a6) list_form_graphic_pane_vc_t1_ParamLimits

0xb78c,	// (0x0004c7a6) list_form_graphic_pane_vc_t1

0xd315,	// (0x0004e32f) list_highlight_pane_cp5_vc_ParamLimits

0xd315,	// (0x0004e32f) list_highlight_pane_cp5_vc

0xb7a8,	// (0x0004c7c2) list_form_graphic_pane_vc_ParamLimits

0xb7a8,	// (0x0004c7c2) list_form_graphic_pane_vc

0x99bc,	// (0x0004a9d6) form_field_popup_pane_vc_g1

0xb7be,	// (0x0004c7d8) form_field_popup_pane_vc_t1_ParamLimits

0xb7be,	// (0x0004c7d8) form_field_popup_pane_vc_t1

0x0e3b,	// (0x00041e55) input_focus_pane_cp7_vc_ParamLimits

0x0e3b,	// (0x00041e55) input_focus_pane_cp7_vc

0xb7d5,	// (0x0004c7ef) list_form_pane_vc_ParamLimits

0xb7d5,	// (0x0004c7ef) list_form_pane_vc

0xb7e1,	// (0x0004c7fb) data_form_pane_vc_t1_ParamLimits

0xb7e1,	// (0x0004c7fb) data_form_pane_vc_t1

0x0e93,	// (0x00041ead) input_focus_pane_vc_g1

0x0e9b,	// (0x00041eb5) input_focus_pane_vc_g2

0x0ea3,	// (0x00041ebd) input_focus_pane_vc_g3

0x0eab,	// (0x00041ec5) input_focus_pane_vc_g4

0x0eb3,	// (0x00041ecd) input_focus_pane_vc_g5

0x0ebb,	// (0x00041ed5) input_focus_pane_vc_g6

0x0ec3,	// (0x00041edd) input_focus_pane_vc_g7

0x0ecb,	// (0x00041ee5) input_focus_pane_vc_g8

0x0ed3,	// (0x00041eed) input_focus_pane_vc_g9

0xd2bd,	// (0x0004e2d7) input_focus_pane_vc_g10

0x0009,

0xf66a,	// (0x00050684) input_focus_pane_vc_g

0x99b0,	// (0x0004a9ca) data_form_pane_vc_ParamLimits

0x99b0,	// (0x0004a9ca) data_form_pane_vc

0x99bc,	// (0x0004a9d6) form_field_data_pane_vc_g1

0xb7fe,	// (0x0004c818) form_field_data_pane_vc_t1_ParamLimits

0xb7fe,	// (0x0004c818) form_field_data_pane_vc_t1

0x0e3b,	// (0x00041e55) input_focus_pane_vc_ParamLimits

0x0e3b,	// (0x00041e55) input_focus_pane_vc

0xb818,	// (0x0004c832) button_value_adjust_pane_cp3_vc

0xb820,	// (0x0004c83a) button_value_adjust_pane_cp5_vc

0xb828,	// (0x0004c842) form_field_data_pane_vc_ParamLimits

0xb828,	// (0x0004c842) form_field_data_pane_vc

0xb843,	// (0x0004c85d) form_field_data_pane_vc_cp2

0xb84b,	// (0x0004c865) form_field_data_wide_pane_vc_ParamLimits

0xb84b,	// (0x0004c865) form_field_data_wide_pane_vc

0xb865,	// (0x0004c87f) form_field_data_wide_pane_vc_cp2

0xb86d,	// (0x0004c887) form_field_popup_pane_vc_ParamLimits

0xb86d,	// (0x0004c887) form_field_popup_pane_vc

0xb888,	// (0x0004c8a2) form_field_popup_wide_pane_vc_ParamLimits

0xb888,	// (0x0004c8a2) form_field_popup_wide_pane_vc

0xb8a2,	// (0x0004c8bc) form_field_slider_pane_vc_ParamLimits

0xb8a2,	// (0x0004c8bc) form_field_slider_pane_vc

0xb8b5,	// (0x0004c8cf) form_field_slider_wide_pane_vc_ParamLimits

0xb8b5,	// (0x0004c8cf) form_field_slider_wide_pane_vc

0xb8c8,	// (0x0004c8e2) grid_touch_1_pane_ParamLimits

0xb8c8,	// (0x0004c8e2) grid_touch_1_pane

0xb8d4,	// (0x0004c8ee) grid_touch_2_pane_ParamLimits

0xb8d4,	// (0x0004c8ee) grid_touch_2_pane

0x9341,	// (0x0004a35b) touch_pane_g1_ParamLimits

0x9341,	// (0x0004a35b) touch_pane_g1

0xb8ee,	// (0x0004c908) cell_app_pane_cp_wide_ParamLimits

0xb8ee,	// (0x0004c908) cell_app_pane_cp_wide

0xb8ff,	// (0x0004c919) grid_popup_fast_wide_pane_ParamLimits

0xb8ff,	// (0x0004c919) grid_popup_fast_wide_pane

0xb913,	// (0x0004c92d) scroll_pane_cp19_ParamLimits

0xb913,	// (0x0004c92d) scroll_pane_cp19

0xd2c7,	// (0x0004e2e1) bg_popup_window_pane_cp20

0xb927,	// (0x0004c941) listscroll_popup_fast_wide_pane

0xb92f,	// (0x0004c949) grid_indicator_nsta_pane

0xb941,	// (0x0004c95b) clock_nsta_pane_g1

0xb94a,	// (0x0004c964) clock_nsta_pane_t1

0xb966,	// (0x0004c980) cell_indicator_nsta_pane_ParamLimits

0xb966,	// (0x0004c980) cell_indicator_nsta_pane

0xb99b,	// (0x0004c9b5) cell_indicator_nsta_pane_g1

0xb9a9,	// (0x0004c9c3) cell_indicator_nsta_pane_g2

0x0001,

0xfa81,	// (0x00050a9b) cell_indicator_nsta_pane_g

0xb9bc,	// (0x0004c9d6) clock_nsta_pane_cp

0xb9c5,	// (0x0004c9df) indicator_nsta_pane_cp

0xb9cf,	// (0x0004c9e9) nsta_clock_indic_pane_g1

0x0835,	// (0x0004184f) grid_indicator_pane

0x4242,	// (0x0004525c) scroll_pane_cp29

0x6966,	// (0x00047980) indicator_nsta_pane_cp2_ParamLimits

0x6966,	// (0x00047980) indicator_nsta_pane_cp2

0xd315,	// (0x0004e32f) main_apps_wheel_pane

0x9b9d,	// (0x0004abb7) form_midp_field_text_pane_ParamLimits

0x9cec,	// (0x0004ad06) scroll_bar_cp050_ParamLimits

0xba28,	// (0x0004ca42) cell_indicator_pane_ParamLimits

0xba28,	// (0x0004ca42) cell_indicator_pane

0xba40,	// (0x0004ca5a) cell_indicator_pane_g1

0xba4a,	// (0x0004ca64) grid_wheel_folder_pane_ParamLimits

0xba4a,	// (0x0004ca64) grid_wheel_folder_pane

0xba5e,	// (0x0004ca78) list_wheel_apps_pane_ParamLimits

0xba5e,	// (0x0004ca78) list_wheel_apps_pane

0xba71,	// (0x0004ca8b) main_apps_wheel_pane_g1_ParamLimits

0xba71,	// (0x0004ca8b) main_apps_wheel_pane_g1

0xba8d,	// (0x0004caa7) main_apps_wheel_pane_g2_ParamLimits

0xba8d,	// (0x0004caa7) main_apps_wheel_pane_g2

0x0001,

0xfa9d,	// (0x00050ab7) main_apps_wheel_pane_g_ParamLimits

0xfa9d,	// (0x00050ab7) main_apps_wheel_pane_g

0xbaa9,	// (0x0004cac3) main_apps_wheel_pane_t1_ParamLimits

0xbaa9,	// (0x0004cac3) main_apps_wheel_pane_t1

0xbad2,	// (0x0004caec) list_wheel_apps_pane_g1

0xbada,	// (0x0004caf4) list_wheel_apps_pane_g2

0xbae2,	// (0x0004cafc) list_wheel_apps_pane_g3

0xbaea,	// (0x0004cb04) list_wheel_apps_pane_g4

0xbaf4,	// (0x0004cb0e) list_wheel_apps_pane_g5

0x0004,

0xfaa2,	// (0x00050abc) list_wheel_apps_pane_g

0x8ee4,	// (0x00049efe) navi_icon_text_pane

0x93e2,	// (0x0004a3fc) aid_fill_nsta

0xbb15,	// (0x0004cb2f) navi_icon_text_pane_g1

0xbb21,	// (0x0004cb3b) navi_icon_text_pane_t1

0x8d86,	// (0x00049da0) list_set_graphic_pane_t1_ParamLimits

0x8d86,	// (0x00049da0) list_set_graphic_pane_t1

0xa459,	// (0x0004b473) popup_midp_note_alarm_window_t6_ParamLimits

0xa459,	// (0x0004b473) popup_midp_note_alarm_window_t6

0xa46b,	// (0x0004b485) popup_midp_note_alarm_window_t7_ParamLimits

0xa46b,	// (0x0004b485) popup_midp_note_alarm_window_t7

0xa47d,	// (0x0004b497) popup_midp_note_alarm_window_t8_ParamLimits

0xa47d,	// (0x0004b497) popup_midp_note_alarm_window_t8

0xa48f,	// (0x0004b4a9) popup_midp_note_alarm_window_t9_ParamLimits

0xa48f,	// (0x0004b4a9) popup_midp_note_alarm_window_t9

0xa4a1,	// (0x0004b4bb) popup_midp_note_alarm_window_t10_ParamLimits

0xa4a1,	// (0x0004b4bb) popup_midp_note_alarm_window_t10

0xa4b3,	// (0x0004b4cd) popup_midp_note_alarm_window_t11_ParamLimits

0xa4b3,	// (0x0004b4cd) popup_midp_note_alarm_window_t11

0xa4c5,	// (0x0004b4df) scroll_pane_cp17_ParamLimits

0xa4c5,	// (0x0004b4df) scroll_pane_cp17

0x7409,	// (0x00048423) volume_small_pane_cp_g1

0x77fb,	// (0x00048815) volume_small_pane_cp_g2

0x7804,	// (0x0004881e) volume_small_pane_cp_g3

0x780d,	// (0x00048827) volume_small_pane_cp_g4

0x7816,	// (0x00048830) volume_small_pane_cp_g5

0x781f,	// (0x00048839) volume_small_pane_cp_g6

0x7828,	// (0x00048842) volume_small_pane_cp_g7

0x7831,	// (0x0004884b) volume_small_pane_cp_g8

0x783a,	// (0x00048854) volume_small_pane_cp_g9

0x7843,	// (0x0004885d) volume_small_pane_cp_g10

0x9155,	// (0x0004a16f) midp_ticker_pane_g1_ParamLimits

0x9161,	// (0x0004a17b) midp_ticker_pane_g2_ParamLimits

0xf736,	// (0x00050750) midp_ticker_pane_g_ParamLimits

0x916d,	// (0x0004a187) midp_ticker_pane_t1_ParamLimits

0x93f8,	// (0x0004a412) aid_fill_nsta_2

0x9cd8,	// (0x0004acf2) list_form2_midp_pane

0xae44,	// (0x0004be5e) midp_editing_number_pane_ParamLimits

0xae53,	// (0x0004be6d) midp_ticker_pane_ParamLimits

0xbb33,	// (0x0004cb4d) form2_midp_field_pane

0xbb57,	// (0x0004cb71) scroll_pane_cp51

0xbb77,	// (0x0004cb91) form2_midp_button_pane_ParamLimits

0xbb77,	// (0x0004cb91) form2_midp_button_pane

0xbb89,	// (0x0004cba3) form2_midp_content_pane_ParamLimits

0xbb89,	// (0x0004cba3) form2_midp_content_pane

0xbba3,	// (0x0004cbbd) form2_midp_field_choice_group_pane

0xbbab,	// (0x0004cbc5) form2_midp_field_pane_g1

0xbbb3,	// (0x0004cbcd) form2_midp_field_pane_g2

0xbbbb,	// (0x0004cbd5) form2_midp_field_pane_g3

0xbbc3,	// (0x0004cbdd) form2_midp_field_pane_g4

0x0003,

0xfac7,	// (0x00050ae1) form2_midp_field_pane_g

0xbbcb,	// (0x0004cbe5) form2_midp_gauge_slider_pane

0xbbd3,	// (0x0004cbed) form2_midp_gauge_wait_pane

0xbbdb,	// (0x0004cbf5) form2_midp_image_pane_ParamLimits

0xbbdb,	// (0x0004cbf5) form2_midp_image_pane

0xbbf6,	// (0x0004cc10) form2_midp_label_pane_ParamLimits

0xbbf6,	// (0x0004cc10) form2_midp_label_pane

0xbc15,	// (0x0004cc2f) form2_midp_label_pane_cp_ParamLimits

0xbc15,	// (0x0004cc2f) form2_midp_label_pane_cp

0xbc36,	// (0x0004cc50) form2_midp_string_pane_ParamLimits

0xbc36,	// (0x0004cc50) form2_midp_string_pane

0x599c,	// (0x000469b6) form2_midp_text_pane_ParamLimits

0x599c,	// (0x000469b6) form2_midp_text_pane

0xbc48,	// (0x0004cc62) form2_midp_time_pane

0xbc58,	// (0x0004cc72) input_focus_pane_cp51_ParamLimits

0xbc58,	// (0x0004cc72) input_focus_pane_cp51

0xbc70,	// (0x0004cc8a) form2_midp_label_pane_t1_ParamLimits

0xbc70,	// (0x0004cc8a) form2_midp_label_pane_t1

0x59bf,	// (0x000469d9) form2_mdip_text_pane_t1_ParamLimits

0x59bf,	// (0x000469d9) form2_mdip_text_pane_t1

0x59de,	// (0x000469f8) form2_midp_time_pane_t1

0xbcbe,	// (0x0004ccd8) form2_midp_gauge_slider_pane_t1

0xbcd0,	// (0x0004ccea) form2_midp_gauge_slider_pane_t2

0xbce2,	// (0x0004ccfc) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad0,	// (0x00050aea) form2_midp_gauge_slider_pane_t

0xbcf4,	// (0x0004cd0e) form2_midp_slider_pane

0xbd00,	// (0x0004cd1a) form2_midp_gauge_wait_pane_t1

0xbd0e,	// (0x0004cd28) form2_midp_wait_pane_ParamLimits

0xbd0e,	// (0x0004cd28) form2_midp_wait_pane

0xbd39,	// (0x0004cd53) list_single_2graphic_pane_cp4_ParamLimits

0xbd39,	// (0x0004cd53) list_single_2graphic_pane_cp4

0x9a19,	// (0x0004aa33) list_single_midp_graphic_pane_cp_ParamLimits

0x9a19,	// (0x0004aa33) list_single_midp_graphic_pane_cp

0xd2c7,	// (0x0004e2e1) list_highlight_pane_cp20

0xbd52,	// (0x0004cd6c) list_single_2graphic_pane_g1_cp4

0xb2eb,	// (0x0004c305) list_single_2graphic_pane_g2_cp4

0xbd5a,	// (0x0004cd74) list_single_2graphic_pane_t1_cp4

0xd315,	// (0x0004e32f) list_highlight_pane_cp21

0xbd69,	// (0x0004cd83) list_single_midp_graphic_pane_g4_cp

0xbd78,	// (0x0004cd92) list_single_midp_graphic_pane_t1_cp

0xbd8d,	// (0x0004cda7) form2_mdip_string_pane_t1_ParamLimits

0xbd8d,	// (0x0004cda7) form2_mdip_string_pane_t1

0xd2c7,	// (0x0004e2e1) bg_wml_button_pane_cp2

0xd2bd,	// (0x0004e2d7) form2_midp_image_pane_g1

0x64a6,	// (0x000474c0) list_double_large_graphic_pane_g5_ParamLimits

0x64a6,	// (0x000474c0) list_double_large_graphic_pane_g5

0x907f,	// (0x0004a099) midp_form_pane_ParamLimits

0xd315,	// (0x0004e32f) main_apps_wheel_pane_ParamLimits

0x7056,	// (0x00048070) popup_preview_window_ParamLimits

0x7056,	// (0x00048070) popup_preview_window

0x723d,	// (0x00048257) popup_touch_info_window_ParamLimits

0x723d,	// (0x00048257) popup_touch_info_window

0x725f,	// (0x00048279) popup_touch_menu_window_ParamLimits

0x725f,	// (0x00048279) popup_touch_menu_window

0xd2b3,	// (0x0004e2cd) bg_popup_sub_pane_cp6

0xbe29,	// (0x0004ce43) list_touch_menu_pane

0xbe31,	// (0x0004ce4b) list_single_touch_menu_pane_ParamLimits

0xbe31,	// (0x0004ce4b) list_single_touch_menu_pane

0xbe49,	// (0x0004ce63) list_single_touch_menu_pane_t1

0xd315,	// (0x0004e32f) bg_popup_sub_pane_cp7_ParamLimits

0xd315,	// (0x0004e32f) bg_popup_sub_pane_cp7

0x9d0c,	// (0x0004ad26) heading_sub_pane

0xbe57,	// (0x0004ce71) list_touch_info_pane_ParamLimits

0xbe57,	// (0x0004ce71) list_touch_info_pane

0xbe67,	// (0x0004ce81) list_single_touch_info_pane_ParamLimits

0xbe67,	// (0x0004ce81) list_single_touch_info_pane

0xbe79,	// (0x0004ce93) list_single_touch_info_pane_t1

0xbe87,	// (0x0004cea1) list_single_touch_info_pane_t2

0x0001,

0xfade,	// (0x00050af8) list_single_touch_info_pane_t

0x9077,	// (0x0004a091) bg_popup_heading_pane_cp

0xbe95,	// (0x0004ceaf) heading_sub_pane_t1

0x994a,	// (0x0004a964) bg_popup_preview_window_pane_cp_ParamLimits

0x994a,	// (0x0004a964) bg_popup_preview_window_pane_cp

0x9d0c,	// (0x0004ad26) heading_preview_pane

0xbe57,	// (0x0004ce71) list_preview_pane_ParamLimits

0xbe57,	// (0x0004ce71) list_preview_pane

0xbea3,	// (0x0004cebd) popup_preview_window_g1

0xbe67,	// (0x0004ce81) list_single_preview_pane_ParamLimits

0xbe67,	// (0x0004ce81) list_single_preview_pane

0xbeab,	// (0x0004cec5) list_single_preview_pane_g1

0xbeb3,	// (0x0004cecd) list_single_preview_pane_t1

0xbe79,	// (0x0004ce93) list_single_preview_pane_t2

0x0001,

0xfae3,	// (0x00050afd) list_single_preview_pane_t

0xbec1,	// (0x0004cedb) bg_popup_heading_pane_cp2_ParamLimits

0xbec1,	// (0x0004cedb) bg_popup_heading_pane_cp2

0xbed7,	// (0x0004cef1) heading_preview_pane_g1

0xbedf,	// (0x0004cef9) heading_preview_pane_t1_ParamLimits

0xbedf,	// (0x0004cef9) heading_preview_pane_t1

0x084c,	// (0x00041866) soft_indicator_pane_t1_ParamLimits

0x0dae,	// (0x00041dc8) scroll_pane_ParamLimits

0x4147,	// (0x00045161) scroll_sc2_left_pane

0x413e,	// (0x00045158) scroll_sc2_right_pane

0x4166,	// (0x00045180) scroll_bg_pane_g1_ParamLimits

0x417b,	// (0x00045195) scroll_bg_pane_g2_ParamLimits

0x4193,	// (0x000451ad) scroll_bg_pane_g3_ParamLimits

0xf6c1,	// (0x000506db) scroll_bg_pane_g_ParamLimits

0x4166,	// (0x00045180) scroll_handle_pane_g1_ParamLimits

0x41b5,	// (0x000451cf) scroll_handle_pane_g2_ParamLimits

0x4193,	// (0x000451ad) scroll_handle_pane_g3_ParamLimits

0xf6c8,	// (0x000506e2) scroll_handle_pane_g_ParamLimits

0x6c9b,	// (0x00047cb5) popup_choice_list_window_ParamLimits

0x6c9b,	// (0x00047cb5) popup_choice_list_window

0x9820,	// (0x0004a83a) choice_list_pane

0x98a2,	// (0x0004a8bc) cell_toolbar_pane_t1

0x98ca,	// (0x0004a8e4) toolbar_button_pane_ParamLimits

0xa98f,	// (0x0004b9a9) ai_gene_pane_1_t2_ParamLimits

0xa98f,	// (0x0004b9a9) ai_gene_pane_1_t2

0x0001,

0xf8f0,	// (0x0005090a) ai_gene_pane_1_t_ParamLimits

0xf8f0,	// (0x0005090a) ai_gene_pane_1_t

0xbefc,	// (0x0004cf16) scroll_sc2_left_pane_g1

0xbefc,	// (0x0004cf16) scroll_sc2_right_pane_g1

0x93a6,	// (0x0004a3c0) bg_popup_sub_pane_cp10

0xbf06,	// (0x0004cf20) list_choice_list_pane

0xbf1f,	// (0x0004cf39) list_single_choice_list_pane_ParamLimits

0xbf1f,	// (0x0004cf39) list_single_choice_list_pane

0xbf37,	// (0x0004cf51) list_single_choice_list_pane_g1

0x3d6d,	// (0x00044d87) list_single_choice_list_pane_t1_ParamLimits

0x3d6d,	// (0x00044d87) list_single_choice_list_pane_t1

0xbf3f,	// (0x0004cf59) choice_list_pane_g1

0xbf47,	// (0x0004cf61) choice_list_pane_t1

0xd2b3,	// (0x0004e2cd) input_focus_pane_cp11

0x3f3b,	// (0x00044f55) title_pane_stacon_g2_ParamLimits

0x3f3b,	// (0x00044f55) title_pane_stacon_g2

0x0002,

0xf6a7,	// (0x000506c1) title_pane_stacon_g_ParamLimits

0xf6a7,	// (0x000506c1) title_pane_stacon_g

0x9077,	// (0x0004a091) cursor_press_pane

0x6d55,	// (0x00047d6f) popup_fep_hwr_window_ParamLimits

0x6d55,	// (0x00047d6f) popup_fep_hwr_window

0x6ddf,	// (0x00047df9) popup_fep_vkb_window_ParamLimits

0x6ddf,	// (0x00047df9) popup_fep_vkb_window

0xbf55,	// (0x0004cf6f) cursor_press_pane_g1

0x0002,

0xfb0c,	// (0x00050b26) fep_vkb_side_pane_g_ParamLimits

0x7885,	// (0x0004889f) fep_hwr_candidate_pane_ParamLimits

0x7885,	// (0x0004889f) fep_hwr_candidate_pane

0x78af,	// (0x000488c9) fep_hwr_side_pane_ParamLimits

0x78af,	// (0x000488c9) fep_hwr_side_pane

0x78d1,	// (0x000488eb) fep_hwr_top_pane_ParamLimits

0x78d1,	// (0x000488eb) fep_hwr_top_pane

0x78e9,	// (0x00048903) fep_hwr_write_pane_ParamLimits

0x78e9,	// (0x00048903) fep_hwr_write_pane

0xfb0c,	// (0x00050b26) fep_vkb_side_pane_g

0xbf5d,	// (0x0004cf77) fep_hwr_top_pane_g1

0xbf6f,	// (0x0004cf89) fep_hwr_top_pane_g2

0x7915,	// (0x0004892f) fep_hwr_top_pane_g3

0x0002,

0xfae8,	// (0x00050b02) fep_hwr_top_pane_g

0x792a,	// (0x00048944) fep_hwr_top_text_pane

0x8a4a,	// (0x00049a64) fep_hwr_top_text_pane_g1

0xbfa5,	// (0x0004cfbf) fep_hwr_top_text_pane_t1

0x7a34,	// (0x00048a4e) fep_hwr_candidate_pane_g1

0xc1f0,	// (0x0004d20a) fep_vkb_keypad_pane_g3_ParamLimits

0xc1f0,	// (0x0004d20a) fep_vkb_keypad_pane_g3

0xc21c,	// (0x0004d236) fep_vkb_keypad_pane_g4_ParamLimits

0xc21c,	// (0x0004d236) fep_vkb_keypad_pane_g4

0xc293,	// (0x0004d2ad) fep_vkb_bottom_pane_g2_ParamLimits

0xc293,	// (0x0004d2ad) fep_vkb_bottom_pane_g2

0x0001,

0xfb13,	// (0x00050b2d) fep_vkb_bottom_pane_g_ParamLimits

0xfb13,	// (0x00050b2d) fep_vkb_bottom_pane_g

0xbefc,	// (0x0004cf16) cell_vkb_side_pane_g2

0x0001,

0xfb1d,	// (0x00050b37) cell_vkb_side_pane_g

0xc31e,	// (0x0004d338) cell_vkb_side_pane_t1

0xc32c,	// (0x0004d346) cell_vkb_side_pane_t1_copy1

0xbefc,	// (0x0004cf16) bg_fep_vkb_candidate_pane_g2

0xc470,	// (0x0004d48a) cell_vkb_candidate_pane_ParamLimits

0xbfb3,	// (0x0004cfcd) aid_size_cell_vkb_ParamLimits

0xbfb3,	// (0x0004cfcd) aid_size_cell_vkb

0xc470,	// (0x0004d48a) cell_vkb_candidate_pane

0x7a4e,	// (0x00048a68) bg_popup_fep_shadow_pane_g1

0xc045,	// (0x0004d05f) fep_vkb_bottom_pane_ParamLimits

0xc045,	// (0x0004d05f) fep_vkb_bottom_pane

0xc082,	// (0x0004d09c) fep_vkb_candidate_pane_ParamLimits

0xc082,	// (0x0004d09c) fep_vkb_candidate_pane

0xc09e,	// (0x0004d0b8) fep_vkb_keypad_pane_ParamLimits

0xc09e,	// (0x0004d0b8) fep_vkb_keypad_pane

0xc0d1,	// (0x0004d0eb) fep_vkb_side_pane_ParamLimits

0xc0d1,	// (0x0004d0eb) fep_vkb_side_pane

0xc10d,	// (0x0004d127) fep_vkb_top_pane_ParamLimits

0xc10d,	// (0x0004d127) fep_vkb_top_pane

0xc149,	// (0x0004d163) fep_vkb_top_pane_g1_ParamLimits

0xc149,	// (0x0004d163) fep_vkb_top_pane_g1

0xc158,	// (0x0004d172) fep_vkb_top_pane_g2_ParamLimits

0xc158,	// (0x0004d172) fep_vkb_top_pane_g2

0xc167,	// (0x0004d181) fep_vkb_top_pane_g3_ParamLimits

0xc167,	// (0x0004d181) fep_vkb_top_pane_g3

0x0003,

0xfb03,	// (0x00050b1d) fep_vkb_top_pane_g_ParamLimits

0xfb03,	// (0x00050b1d) fep_vkb_top_pane_g

0xc185,	// (0x0004d19f) fep_vkb_top_text_pane_ParamLimits

0xc185,	// (0x0004d19f) fep_vkb_top_text_pane

0xc196,	// (0x0004d1b0) fep_vkb_side_pane_g1_ParamLimits

0xc196,	// (0x0004d1b0) fep_vkb_side_pane_g1

0xc1df,	// (0x0004d1f9) grid_vkb_side_pane_ParamLimits

0xc1df,	// (0x0004d1f9) grid_vkb_side_pane

0x7a56,	// (0x00048a70) bg_popup_fep_shadow_pane_g2

0x7a5f,	// (0x00048a79) bg_popup_fep_shadow_pane_g3

0x7a67,	// (0x00048a81) bg_popup_fep_shadow_pane_g4

0x7a70,	// (0x00048a8a) bg_popup_fep_shadow_pane_g5

0x7a7a,	// (0x00048a94) bg_popup_fep_shadow_pane_g6

0x7a82,	// (0x00048a9c) bg_popup_fep_shadow_pane_g7

0x0eb3,	// (0x00041ecd) bg_popup_fep_shadow_pane_g8

0xc23e,	// (0x0004d258) grid_vkb_keypad_number_pane_ParamLimits

0xc23e,	// (0x0004d258) grid_vkb_keypad_number_pane

0xc252,	// (0x0004d26c) grid_vkb_keypad_pane_ParamLimits

0xc252,	// (0x0004d26c) grid_vkb_keypad_pane

0xc278,	// (0x0004d292) fep_vkb_bottom_pane_g1_ParamLimits

0xc278,	// (0x0004d292) fep_vkb_bottom_pane_g1

0xc2a1,	// (0x0004d2bb) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc2a1,	// (0x0004d2bb) grid_vkb_keypad_bottom_left_pane

0xc2b6,	// (0x0004d2d0) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc2b6,	// (0x0004d2d0) grid_vkb_keypad_bottom_right_pane

0xc2cb,	// (0x0004d2e5) fep_vkb_top_text_pane_g1

0xc2e6,	// (0x0004d300) fep_vkb_top_text_pane_t1

0xc2fb,	// (0x0004d315) cell_vkb_side_pane_ParamLimits

0xc2fb,	// (0x0004d315) cell_vkb_side_pane

0xbefc,	// (0x0004cf16) cell_vkb_side_pane_g1

0xc33a,	// (0x0004d354) cell_vkb_keypad_pane_ParamLimits

0xc33a,	// (0x0004d354) cell_vkb_keypad_pane

0xc3c7,	// (0x0004d3e1) cell_vkb_keypad_pane_g1

0x0008,

0xfb30,	// (0x00050b4a) bg_popup_fep_shadow_pane_g

0xbefc,	// (0x0004cf16) cell_hwr_side_pane_g1

0xbefc,	// (0x0004cf16) cell_hwr_side_pane_g2

0xc3d1,	// (0x0004d3eb) cell_vkb_keypad_pane_t1

0xc3df,	// (0x0004d3f9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc3df,	// (0x0004d3f9) cell_vkb_keypad_bottom_left_pane

0xc3fc,	// (0x0004d416) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc3fc,	// (0x0004d416) cell_vkb_keypad_bottom_right_pane

0xbefc,	// (0x0004cf16) cell_vkb_keypad_bottom_left_pane_g1

0xbefc,	// (0x0004cf16) cell_vkb_keypad_bottom_right_pane_g1

0xc435,	// (0x0004d44f) cell_vkb_keypad_number_pane_ParamLimits

0xc435,	// (0x0004d44f) cell_vkb_keypad_number_pane

0xc454,	// (0x0004d46e) cell_vkb_keypad_number_pane_g1

0xc45e,	// (0x0004d478) cell_vkb_keypad_number_pane_g2

0xc467,	// (0x0004d481) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb22,	// (0x00050b3c) cell_vkb_keypad_number_pane_g

0xc3d1,	// (0x0004d3eb) cell_vkb_keypad_number_pane_t1

0xc491,	// (0x0004d4ab) fep_vkb_candidate_pane_g1

0x0001,

0xfb1d,	// (0x00050b37) cell_hwr_side_pane_g

0xc4aa,	// (0x0004d4c4) cell_hwr_side_pane_t1

0x7a94,	// (0x00048aae) cell_hwr_side_pane_t1_copy1

0xc177,	// (0x0004d191) cell_hwr_candidate_pane_g1

0x7aa2,	// (0x00048abc) cell_hwr_candidate_pane_t1

0xbefc,	// (0x0004cf16) cell_vkb_candidate_pane_g2

0xc530,	// (0x0004d54a) cell_vkb_candidate_pane_t1

0x784c,	// (0x00048866) bg_popup_fep_shadow_pane_ParamLimits

0x784c,	// (0x00048866) bg_popup_fep_shadow_pane

0x218c,	// (0x000431a6) bg_fep_hwr_top_pane_g4

0xbf81,	// (0x0004cf9b) bg_hwr_side_pane_g1_ParamLimits

0xbf81,	// (0x0004cf9b) bg_hwr_side_pane_g1

0x7968,	// (0x00048982) cell_hwr_side_pane_ParamLimits

0x7968,	// (0x00048982) cell_hwr_side_pane

0x79a5,	// (0x000489bf) fep_hwr_write_pane_g1_ParamLimits

0x79a5,	// (0x000489bf) fep_hwr_write_pane_g1

0x79b2,	// (0x000489cc) fep_hwr_write_pane_g2_ParamLimits

0x79b2,	// (0x000489cc) fep_hwr_write_pane_g2

0x79bf,	// (0x000489d9) fep_hwr_write_pane_g3_ParamLimits

0x79bf,	// (0x000489d9) fep_hwr_write_pane_g3

0x79cd,	// (0x000489e7) fep_hwr_write_pane_g4_ParamLimits

0x79cd,	// (0x000489e7) fep_hwr_write_pane_g4

0x0005,

0xfaef,	// (0x00050b09) fep_hwr_write_pane_g_ParamLimits

0xfaef,	// (0x00050b09) fep_hwr_write_pane_g

0x218c,	// (0x000431a6) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x218c,	// (0x000431a6) bg_fep_hwr_candidate_pane_g2

0x79e2,	// (0x000489fc) cell_hwr_candidate_pane_ParamLimits

0x79e2,	// (0x000489fc) cell_hwr_candidate_pane

0x7a34,	// (0x00048a4e) fep_hwr_candidate_pane_g1_ParamLimits

0xbfe1,	// (0x0004cffb) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbfe1,	// (0x0004cffb) bg_popup_fep_shadow_pane_cp2

0xc177,	// (0x0004d191) fep_vkb_top_pane_g4_ParamLimits

0xc177,	// (0x0004d191) fep_vkb_top_pane_g4

0xc1bd,	// (0x0004d1d7) fep_vkb_side_pane_g2_ParamLimits

0xc1bd,	// (0x0004d1d7) fep_vkb_side_pane_g2

0x513f,	// (0x00046159) list_setting_pane_t4_ParamLimits

0x513f,	// (0x00046159) list_setting_pane_t4

0x51db,	// (0x000461f5) list_setting_number_pane_t5_ParamLimits

0x51db,	// (0x000461f5) list_setting_number_pane_t5

0x8a91,	// (0x00049aab) list_double_heading_pane_cp2_ParamLimits

0x8a91,	// (0x00049aab) list_double_heading_pane_cp2

0xc53e,	// (0x0004d558) list_double_heading_pane_g1_cp2_ParamLimits

0xc53e,	// (0x0004d558) list_double_heading_pane_g1_cp2

0xc54a,	// (0x0004d564) list_double_heading_pane_g2_cp2_ParamLimits

0xc54a,	// (0x0004d564) list_double_heading_pane_g2_cp2

0xc55e,	// (0x0004d578) list_double_heading_pane_t1_cp2_ParamLimits

0xc55e,	// (0x0004d578) list_double_heading_pane_t1_cp2

0xc574,	// (0x0004d58e) list_double_heading_pane_t2_cp2_ParamLimits

0xc574,	// (0x0004d58e) list_double_heading_pane_t2_cp2

0xd2ab,	// (0x0004e2c5) aid_value_unit2

0x5f7f,	// (0x00046f99) popup_preview_fixed_window

0x092c,	// (0x00041946) bg_popup_preview_window_pane_cp02

0xc586,	// (0x0004d5a0) list_preview_fixed_pane

0xc5cc,	// (0x0004d5e6) list_empty_pane_fp_ParamLimits

0xc5cc,	// (0x0004d5e6) list_empty_pane_fp

0xc5cc,	// (0x0004d5e6) list_single_cale_day_pane_fp_ParamLimits

0xc5cc,	// (0x0004d5e6) list_single_cale_day_pane_fp

0xc5cc,	// (0x0004d5e6) list_single_graphic_heading_pane_fp_ParamLimits

0xc5cc,	// (0x0004d5e6) list_single_graphic_heading_pane_fp

0xc5cc,	// (0x0004d5e6) list_single_graphic_pane_fp_ParamLimits

0xc5cc,	// (0x0004d5e6) list_single_graphic_pane_fp

0xc5cc,	// (0x0004d5e6) list_single_heading_pane_fp_ParamLimits

0xc5cc,	// (0x0004d5e6) list_single_heading_pane_fp

0xc5cc,	// (0x0004d5e6) list_single_pane_fp_ParamLimits

0xc5cc,	// (0x0004d5e6) list_single_pane_fp

0xc5e5,	// (0x0004d5ff) list_single_pane_fp_g1_ParamLimits

0xc5e5,	// (0x0004d5ff) list_single_pane_fp_g1

0x7ac0,	// (0x00048ada) list_single_pane_fp_g2_ParamLimits

0x7ac0,	// (0x00048ada) list_single_pane_fp_g2

0x7acc,	// (0x00048ae6) list_single_pane_fp_g3_ParamLimits

0x7acc,	// (0x00048ae6) list_single_pane_fp_g3

0xc5f1,	// (0x0004d60b) list_single_pane_fp_g4_ParamLimits

0xc5f1,	// (0x0004d60b) list_single_pane_fp_g4

0x0003,

0xfb51,	// (0x00050b6b) list_single_pane_fp_g_ParamLimits

0xfb51,	// (0x00050b6b) list_single_pane_fp_g

0x59f1,	// (0x00046a0b) list_single_pane_fp_t1_ParamLimits

0x59f1,	// (0x00046a0b) list_single_pane_fp_t1

0x5a08,	// (0x00046a22) list_single_graphic_pane_fp_g1_ParamLimits

0x5a08,	// (0x00046a22) list_single_graphic_pane_fp_g1

0xc5e5,	// (0x0004d5ff) list_single_graphic_pane_fp_g2_ParamLimits

0xc5e5,	// (0x0004d5ff) list_single_graphic_pane_fp_g2

0x7ac0,	// (0x00048ada) list_single_graphic_pane_fp_g3_ParamLimits

0x7ac0,	// (0x00048ada) list_single_graphic_pane_fp_g3

0x7acc,	// (0x00048ae6) list_single_graphic_pane_fp_g4_ParamLimits

0x7acc,	// (0x00048ae6) list_single_graphic_pane_fp_g4

0xc5f1,	// (0x0004d60b) list_single_graphic_pane_fp_g5_ParamLimits

0xc5f1,	// (0x0004d60b) list_single_graphic_pane_fp_g5

0x0004,

0xfb5a,	// (0x00050b74) list_single_graphic_pane_fp_g_ParamLimits

0xfb5a,	// (0x00050b74) list_single_graphic_pane_fp_g

0x5a14,	// (0x00046a2e) list_single_graphic_pane_fp_t1_ParamLimits

0x5a14,	// (0x00046a2e) list_single_graphic_pane_fp_t1

0x5a08,	// (0x00046a22) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5a08,	// (0x00046a22) list_single_graphic_heading_pane_fp_g1

0xc5e5,	// (0x0004d5ff) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc5e5,	// (0x0004d5ff) list_single_graphic_heading_pane_fp_g2

0x7ac0,	// (0x00048ada) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7ac0,	// (0x00048ada) list_single_graphic_heading_pane_fp_g3

0x7acc,	// (0x00048ae6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7acc,	// (0x00048ae6) list_single_graphic_heading_pane_fp_g4

0xc5f1,	// (0x0004d60b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc5f1,	// (0x0004d60b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5a,	// (0x00050b74) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5a,	// (0x00050b74) list_single_graphic_heading_pane_fp_g

0x5a2a,	// (0x00046a44) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5a2a,	// (0x00046a44) list_single_graphic_heading_pane_fp_t1

0x5a40,	// (0x00046a5a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5a40,	// (0x00046a5a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb65,	// (0x00050b7f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb65,	// (0x00050b7f) list_single_graphic_heading_pane_fp_t

0x5a52,	// (0x00046a6c) list_single_cale_day_pane_fp_g1_ParamLimits

0x5a52,	// (0x00046a6c) list_single_cale_day_pane_fp_g1

0xc5fd,	// (0x0004d617) list_single_cale_day_pane_fp_g2_ParamLimits

0xc5fd,	// (0x0004d617) list_single_cale_day_pane_fp_g2

0x7ae0,	// (0x00048afa) list_single_cale_day_pane_fp_g3_ParamLimits

0x7ae0,	// (0x00048afa) list_single_cale_day_pane_fp_g3

0x7b08,	// (0x00048b22) list_single_cale_day_pane_fp_g4_ParamLimits

0x7b08,	// (0x00048b22) list_single_cale_day_pane_fp_g4

0x7b2c,	// (0x00048b46) list_single_cale_day_pane_fp_g5_ParamLimits

0x7b2c,	// (0x00048b46) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6a,	// (0x00050b84) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6a,	// (0x00050b84) list_single_cale_day_pane_fp_g

0x5a8a,	// (0x00046aa4) list_single_cale_day_pane_fp_t1_ParamLimits

0x5a8a,	// (0x00046aa4) list_single_cale_day_pane_fp_t1

0x5ab0,	// (0x00046aca) list_single_cale_day_pane_fp_t2_ParamLimits

0x5ab0,	// (0x00046aca) list_single_cale_day_pane_fp_t2

0x5ac9,	// (0x00046ae3) list_single_cale_day_pane_fp_t3_ParamLimits

0x5ac9,	// (0x00046ae3) list_single_cale_day_pane_fp_t3

0x0002,

0xfb75,	// (0x00050b8f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb75,	// (0x00050b8f) list_single_cale_day_pane_fp_t

0xc5e5,	// (0x0004d5ff) list_empty_pane_fp_g1_ParamLimits

0xc5e5,	// (0x0004d5ff) list_empty_pane_fp_g1

0x5ae2,	// (0x00046afc) list_empty_pane_fp_t1

0x5af0,	// (0x00046b0a) list_empty_pane_fp_t2

0x0001,

0xfb7c,	// (0x00050b96) list_empty_pane_fp_t

0xc5e5,	// (0x0004d5ff) list_single_heading_pane_fp_g1_ParamLimits

0xc5e5,	// (0x0004d5ff) list_single_heading_pane_fp_g1

0x7ac0,	// (0x00048ada) list_single_heading_pane_fp_g2_ParamLimits

0x7ac0,	// (0x00048ada) list_single_heading_pane_fp_g2

0x7acc,	// (0x00048ae6) list_single_heading_pane_fp_g3_ParamLimits

0x7acc,	// (0x00048ae6) list_single_heading_pane_fp_g3

0x0002,

0xfb81,	// (0x00050b9b) list_single_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x00050b9b) list_single_heading_pane_fp_g

0x5afe,	// (0x00046b18) list_single_heading_pane_fp_t1_ParamLimits

0x5afe,	// (0x00046b18) list_single_heading_pane_fp_t1

0x5b10,	// (0x00046b2a) list_single_heading_pane_fp_t2_ParamLimits

0x5b10,	// (0x00046b2a) list_single_heading_pane_fp_t2

0x0001,

0xfb88,	// (0x00050ba2) list_single_heading_pane_fp_t_ParamLimits

0xfb88,	// (0x00050ba2) list_single_heading_pane_fp_t

0x3d82,	// (0x00044d9c) aid_size_cell_fast

0x090f,	// (0x00041929) soft_indicator_pane_cp1_t1

0x3dbf,	// (0x00044dd9) cell_app_pane_cp2_ParamLimits

0x3dbf,	// (0x00044dd9) cell_app_pane_cp2

0x786e,	// (0x00048888) fep_hwr_candidate_drop_down_list_pane

0x219a,	// (0x000431b4) fep_hwr_candidate_pane_g3_ParamLimits

0x219a,	// (0x000431b4) fep_hwr_candidate_pane_g3

0x21a7,	// (0x000431c1) fep_hwr_candidate_pane_g4_ParamLimits

0x21a7,	// (0x000431c1) fep_hwr_candidate_pane_g4

0x0002,

0xfafc,	// (0x00050b16) fep_hwr_candidate_pane_g_ParamLimits

0xfafc,	// (0x00050b16) fep_hwr_candidate_pane_g

0xc071,	// (0x0004d08b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc071,	// (0x0004d08b) fep_vkb_candidate_drop_down_list_pane

0xc499,	// (0x0004d4b3) fep_vkb_candidate_pane_g3

0xc4a1,	// (0x0004d4bb) fep_vkb_candidate_pane_g4

0x0002,

0xfb29,	// (0x00050b43) fep_vkb_candidate_pane_g

0xc177,	// (0x0004d191) cell_hwr_candidate_pane_g1_ParamLimits

0xc4b8,	// (0x0004d4d2) cell_hwr_candidate_pane_g3_ParamLimits

0xc4b8,	// (0x0004d4d2) cell_hwr_candidate_pane_g3

0xc4d9,	// (0x0004d4f3) cell_hwr_candidate_pane_g4_ParamLimits

0xc4d9,	// (0x0004d4f3) cell_hwr_candidate_pane_g4

0x0002,

0xfb43,	// (0x00050b5d) cell_hwr_candidate_pane_g_ParamLimits

0xfb43,	// (0x00050b5d) cell_hwr_candidate_pane_g

0xc4fa,	// (0x0004d514) cell_vkb_candidate_pane_g3_ParamLimits

0xc4fa,	// (0x0004d514) cell_vkb_candidate_pane_g3

0xc515,	// (0x0004d52f) cell_vkb_candidate_pane_g4_ParamLimits

0xc515,	// (0x0004d52f) cell_vkb_candidate_pane_g4

0xc609,	// (0x0004d623) cell_app_pane_cp2_g1_ParamLimits

0xc609,	// (0x0004d623) cell_app_pane_cp2_g1

0xc627,	// (0x0004d641) cell_app_pane_cp2_g2_ParamLimits

0xc627,	// (0x0004d641) cell_app_pane_cp2_g2

0x0001,

0xfb8d,	// (0x00050ba7) cell_app_pane_cp2_g_ParamLimits

0xfb8d,	// (0x00050ba7) cell_app_pane_cp2_g

0xc633,	// (0x0004d64d) cell_app_pane_cp2_t1_ParamLimits

0xc633,	// (0x0004d64d) cell_app_pane_cp2_t1

0x0e3b,	// (0x00041e55) grid_highlight_pane_cp1_ParamLimits

0x0e3b,	// (0x00041e55) grid_highlight_pane_cp1

0x7b50,	// (0x00048b6a) cell_hwr_candidate_pane_cp1_ParamLimits

0x7b50,	// (0x00048b6a) cell_hwr_candidate_pane_cp1

0xc177,	// (0x0004d191) fep_hwr_candidate_drop_down_list_pane_g1

0xc645,	// (0x0004d65f) fep_hwr_candidate_drop_down_list_pane_g2

0xc652,	// (0x0004d66c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb92,	// (0x00050bac) fep_hwr_candidate_drop_down_list_pane_g

0x7b74,	// (0x00048b8e) fep_hwr_candidate_drop_down_list_scroll_pane

0x7b7d,	// (0x00048b97) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7b7d,	// (0x00048b97) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7b8a,	// (0x00048ba4) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7b8a,	// (0x00048ba4) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7b97,	// (0x00048bb1) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7b97,	// (0x00048bb1) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc4fa,	// (0x0004d514) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc4fa,	// (0x0004d514) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc515,	// (0x0004d52f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc515,	// (0x0004d52f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7ba4,	// (0x00048bbe) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7ba4,	// (0x00048bbe) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7bbf,	// (0x00048bd9) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7bbf,	// (0x00048bd9) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7bda,	// (0x00048bf4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7bda,	// (0x00048bf4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb99,	// (0x00050bb3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb99,	// (0x00050bb3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc65f,	// (0x0004d679) cell_vkb_candidate_pane_cp1_ParamLimits

0xc65f,	// (0x0004d679) cell_vkb_candidate_pane_cp1

0xc177,	// (0x0004d191) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc177,	// (0x0004d191) fep_vkb_candidate_drop_down_list_pane_g1

0xc645,	// (0x0004d65f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc645,	// (0x0004d65f) fep_vkb_candidate_drop_down_list_pane_g2

0xc652,	// (0x0004d66c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc652,	// (0x0004d66c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb92,	// (0x00050bac) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb92,	// (0x00050bac) fep_vkb_candidate_drop_down_list_pane_g

0xc685,	// (0x0004d69f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc685,	// (0x0004d69f) fep_vkb_candidate_drop_down_list_scroll_pane

0xc692,	// (0x0004d6ac) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc692,	// (0x0004d6ac) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc69f,	// (0x0004d6b9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc69f,	// (0x0004d6b9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc6ab,	// (0x0004d6c5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc6ab,	// (0x0004d6c5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc4b8,	// (0x0004d4d2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc4b8,	// (0x0004d4d2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc4d9,	// (0x0004d4f3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc4d9,	// (0x0004d4f3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc6b7,	// (0x0004d6d1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc6b7,	// (0x0004d6d1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc6d8,	// (0x0004d6f2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc6d8,	// (0x0004d6f2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc6f9,	// (0x0004d713) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc6f9,	// (0x0004d713) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbaa,	// (0x00050bc4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbaa,	// (0x00050bc4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x609f,	// (0x000470b9) title_pane_g1_ParamLimits

0x60ac,	// (0x000470c6) title_pane_g2_ParamLimits

0xf527,	// (0x00050541) title_pane_g_ParamLimits

0x8a3a,	// (0x00049a54) aid_call2_pane

0x8a42,	// (0x00049a5c) aid_call_pane

0x8a4a,	// (0x00049a64) popup_clock_analogue_window_g1

0x8a4a,	// (0x00049a64) popup_clock_analogue_window_g2

0x6836,	// (0x00047850) popup_clock_analogue_window_g3

0x683f,	// (0x00047859) popup_clock_analogue_window_g4

0xd2bd,	// (0x0004e2d7) popup_clock_analogue_window_g5

0x0004,

0xf6d6,	// (0x000506f0) popup_clock_analogue_window_g

0x6847,	// (0x00047861) popup_clock_analogue_window_t1

0x6855,	// (0x0004786f) clock_digital_number_pane_ParamLimits

0x6855,	// (0x0004786f) clock_digital_number_pane

0x6861,	// (0x0004787b) clock_digital_number_pane_cp02_ParamLimits

0x6861,	// (0x0004787b) clock_digital_number_pane_cp02

0x686d,	// (0x00047887) clock_digital_number_pane_cp03_ParamLimits

0x686d,	// (0x00047887) clock_digital_number_pane_cp03

0x6879,	// (0x00047893) clock_digital_number_pane_cp04_ParamLimits

0x6879,	// (0x00047893) clock_digital_number_pane_cp04

0x6885,	// (0x0004789f) clock_digital_separator_pane_ParamLimits

0x6885,	// (0x0004789f) clock_digital_separator_pane

0x6891,	// (0x000478ab) popup_clock_digital_window_t1_ParamLimits

0x6891,	// (0x000478ab) popup_clock_digital_window_t1

0xd2bd,	// (0x0004e2d7) clock_digital_number_pane_g1

0xd2bd,	// (0x0004e2d7) clock_digital_number_pane_g2

0x0001,

0xf6e1,	// (0x000506fb) clock_digital_number_pane_g

0xd2bd,	// (0x0004e2d7) clock_digital_separator_pane_g1

0xd2bd,	// (0x0004e2d7) clock_digital_separator_pane_g2

0x0001,

0xf6e1,	// (0x000506fb) clock_digital_separator_pane_g

0x93e2,	// (0x0004a3fc) aid_fill_nsta_ParamLimits

0x952c,	// (0x0004a546) indicator_nsta_pane_ParamLimits

0x96bb,	// (0x0004a6d5) popup_clock_analogue_window

0x96bb,	// (0x0004a6d5) popup_clock_digital_window

0xb92f,	// (0x0004c949) grid_indicator_nsta_pane_ParamLimits

0xb958,	// (0x0004c972) clock_nsta_pane_t2

0x0001,

0xfa7c,	// (0x00050a96) clock_nsta_pane_t

0x67c6,	// (0x000477e0) aid_size_max_handle

0x67d0,	// (0x000477ea) aid_size_min_handle

0x9077,	// (0x0004a091) editor_scroll_pane

0xc714,	// (0x0004d72e) ex_editor_pane

0x3d48,	// (0x00044d62) scroll_pane_cp13

0x0dda,	// (0x00041df4) scroll_pane_cp14

0x8a79,	// (0x00049a93) scroll_pane_cp36

0x8aa7,	// (0x00049ac1) list_single_graphic_hl_pane_cp2_ParamLimits

0x8aa7,	// (0x00049ac1) list_single_graphic_hl_pane_cp2

0x56c8,	// (0x000466e2) list_single_graphic_hl_pane_ParamLimits

0x56c8,	// (0x000466e2) list_single_graphic_hl_pane

0x5b26,	// (0x00046b40) aid_size_min_hl_cp1

0xc71c,	// (0x0004d736) list_highlight_pane_cp34_ParamLimits

0xc71c,	// (0x0004d736) list_highlight_pane_cp34

0xc72d,	// (0x0004d747) list_single_graphic_hl_pane_g1_ParamLimits

0xc72d,	// (0x0004d747) list_single_graphic_hl_pane_g1

0x5b2f,	// (0x00046b49) list_single_graphic_hl_pane_g2_ParamLimits

0x5b2f,	// (0x00046b49) list_single_graphic_hl_pane_g2

0x5b2f,	// (0x00046b49) list_single_graphic_hl_pane_g3_ParamLimits

0x5b2f,	// (0x00046b49) list_single_graphic_hl_pane_g3

0x7bf5,	// (0x00048c0f) list_single_graphic_hl_pane_g4_ParamLimits

0x7bf5,	// (0x00048c0f) list_single_graphic_hl_pane_g4

0x5b3b,	// (0x00046b55) list_single_graphic_hl_pane_g5_ParamLimits

0x5b3b,	// (0x00046b55) list_single_graphic_hl_pane_g5

0x0004,

0xfbbb,	// (0x00050bd5) list_single_graphic_hl_pane_g_ParamLimits

0xfbbb,	// (0x00050bd5) list_single_graphic_hl_pane_g

0x5b4f,	// (0x00046b69) list_single_graphic_hl_pane_t1_ParamLimits

0x5b4f,	// (0x00046b69) list_single_graphic_hl_pane_t1

0xc73a,	// (0x0004d754) aid_size_min_hl_cp2

0xc743,	// (0x0004d75d) list_highlight_pane_cp34_cp2_ParamLimits

0xc743,	// (0x0004d75d) list_highlight_pane_cp34_cp2

0xc72d,	// (0x0004d747) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc72d,	// (0x0004d747) list_single_graphic_hl_pane_g1_cp2

0xc750,	// (0x0004d76a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc750,	// (0x0004d76a) list_single_graphic_hl_pane_g2_cp2

0xc75c,	// (0x0004d776) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc75c,	// (0x0004d776) list_single_graphic_hl_pane_g3_cp2

0xc76a,	// (0x0004d784) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc76a,	// (0x0004d784) list_single_graphic_hl_pane_g4_cp2

0xc776,	// (0x0004d790) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc776,	// (0x0004d790) list_single_graphic_hl_pane_g5_cp2

0x6b6d,	// (0x00047b87) control_pane_g4_ParamLimits

0x6b6d,	// (0x00047b87) control_pane_g4

0x93a6,	// (0x0004a3c0) bg_popup_sub_pane_cp10_ParamLimits

0xbf06,	// (0x0004cf20) list_choice_list_pane_ParamLimits

0xbf15,	// (0x0004cf2f) scroll_pane_cp23

0x092c,	// (0x00041946) bg_popup_preview_window_pane_cp02_ParamLimits

0xc586,	// (0x0004d5a0) list_preview_fixed_pane_ParamLimits

0xc59c,	// (0x0004d5b6) list_preview_fixed_pane_cp_ParamLimits

0xc59c,	// (0x0004d5b6) list_preview_fixed_pane_cp

0xc5a8,	// (0x0004d5c2) popup_preview_fixed_window_g1_ParamLimits

0xc5a8,	// (0x0004d5c2) popup_preview_fixed_window_g1

0xc5b4,	// (0x0004d5ce) popup_preview_fixed_window_g2_ParamLimits

0xc5b4,	// (0x0004d5ce) popup_preview_fixed_window_g2

0x0002,

0xfb4a,	// (0x00050b64) popup_preview_fixed_window_g_ParamLimits

0xfb4a,	// (0x00050b64) popup_preview_fixed_window_g

0x667a,	// (0x00047694) aid_navi_side_left_pane_ParamLimits

0x668f,	// (0x000476a9) aid_navi_side_right_pane_ParamLimits

0x66a7,	// (0x000476c1) navi_icon_pane_stacon_ParamLimits

0x66bb,	// (0x000476d5) navi_navi_pane_stacon_ParamLimits

0x66a7,	// (0x000476c1) navi_text_pane_stacon_ParamLimits

0xd2b3,	// (0x0004e2cd) main_text_info_pane

0xc7a0,	// (0x0004d7ba) listscroll_text_info_pane

0xc7a8,	// (0x0004d7c2) list_text_info_pane_ParamLimits

0xc7a8,	// (0x0004d7c2) list_text_info_pane

0xc7b7,	// (0x0004d7d1) scroll_pane_cp24_ParamLimits

0xc7b7,	// (0x0004d7d1) scroll_pane_cp24

0xc7d5,	// (0x0004d7ef) list_text_info_pane_t1_ParamLimits

0xc7d5,	// (0x0004d7ef) list_text_info_pane_t1

0x6cbd,	// (0x00047cd7) popup_fast_swap2_window_ParamLimits

0x6cbd,	// (0x00047cd7) popup_fast_swap2_window

0xc7fa,	// (0x0004d814) aid_size_cell_fast2

0xd2b3,	// (0x0004e2cd) bg_popup_window_pane_cp17

0x9d0c,	// (0x0004ad26) heading_pane_cp2

0xc804,	// (0x0004d81e) listscroll_fast2_pane

0xc80c,	// (0x0004d826) grid_fast2_pane

0xc816,	// (0x0004d830) listscroll_fast2_pane_g1

0xc820,	// (0x0004d83a) listscroll_fast2_pane_g2

0x0001,

0xfbc6,	// (0x00050be0) listscroll_fast2_pane_g

0x3d48,	// (0x00044d62) scroll_pane_cp26

0xc82a,	// (0x0004d844) cell_fast2_pane_ParamLimits

0xc82a,	// (0x0004d844) cell_fast2_pane

0xc841,	// (0x0004d85b) cell_fast2_pane_g1

0xc84a,	// (0x0004d864) cell_fast2_pane_g2

0xc853,	// (0x0004d86d) cell_fast2_pane_g3

0x0002,

0xfbcb,	// (0x00050be5) cell_fast2_pane_g

0x0ba1,	// (0x00041bbb) grid_highlight_pane_cp9

0x0bb6,	// (0x00041bd0) main_eswt_pane_ParamLimits

0x0bb6,	// (0x00041bd0) main_eswt_pane

0xc7cc,	// (0x0004d7e6) list_single_text_info_pane

0xc85b,	// (0x0004d875) eswt_ctrl_button_pane

0xc85b,	// (0x0004d875) eswt_ctrl_canvas_pane

0xc863,	// (0x0004d87d) eswt_ctrl_combo_pane

0xc85b,	// (0x0004d875) eswt_ctrl_default_pane

0xc85b,	// (0x0004d875) eswt_ctrl_label_pane

0xc86b,	// (0x0004d885) eswt_ctrl_wait_pane

0xc873,	// (0x0004d88d) eswt_shell_pane

0xd2b3,	// (0x0004e2cd) listscroll_eswt_app_pane

0xc893,	// (0x0004d8ad) popup_eswt_tasktip_window_ParamLimits

0xc893,	// (0x0004d8ad) popup_eswt_tasktip_window

0x994a,	// (0x0004a964) bg_popup_window_pane_cp18

0xc8a4,	// (0x0004d8be) eswt_control_pane_g1_ParamLimits

0xc8a4,	// (0x0004d8be) eswt_control_pane_g1

0xc8b1,	// (0x0004d8cb) eswt_control_pane_g2_ParamLimits

0xc8b1,	// (0x0004d8cb) eswt_control_pane_g2

0xc8be,	// (0x0004d8d8) eswt_control_pane_g3_ParamLimits

0xc8be,	// (0x0004d8d8) eswt_control_pane_g3

0xc8cb,	// (0x0004d8e5) eswt_control_pane_g4_ParamLimits

0xc8cb,	// (0x0004d8e5) eswt_control_pane_g4

0x0003,

0xfbd2,	// (0x00050bec) eswt_control_pane_g_ParamLimits

0xfbd2,	// (0x00050bec) eswt_control_pane_g

0x0e3b,	// (0x00041e55) bg_button_pane_ParamLimits

0x0e3b,	// (0x00041e55) bg_button_pane

0x0bb6,	// (0x00041bd0) common_borders_pane_copy2_ParamLimits

0x0bb6,	// (0x00041bd0) common_borders_pane_copy2

0xc8d8,	// (0x0004d8f2) control_button_pane_g1_ParamLimits

0xc8d8,	// (0x0004d8f2) control_button_pane_g1

0xc8e4,	// (0x0004d8fe) control_button_pane_g2_ParamLimits

0xc8e4,	// (0x0004d8fe) control_button_pane_g2

0xc8f0,	// (0x0004d90a) control_button_pane_g3_ParamLimits

0xc8f0,	// (0x0004d90a) control_button_pane_g3

0x0002,

0xfbdb,	// (0x00050bf5) control_button_pane_g_ParamLimits

0xfbdb,	// (0x00050bf5) control_button_pane_g

0xc904,	// (0x0004d91e) control_button_pane_t1

0xc912,	// (0x0004d92c) control_button_pane_t2

0x0001,

0xfbe2,	// (0x00050bfc) control_button_pane_t

0x98d6,	// (0x0004a8f0) bg_button_pane_g1

0x98de,	// (0x0004a8f8) bg_button_pane_g2

0x98e6,	// (0x0004a900) bg_button_pane_g3

0x98ee,	// (0x0004a908) bg_button_pane_g4

0x98f6,	// (0x0004a910) bg_button_pane_g5

0x98fe,	// (0x0004a918) bg_button_pane_g6

0x9906,	// (0x0004a920) bg_button_pane_g7

0x990e,	// (0x0004a928) bg_button_pane_g8

0x9916,	// (0x0004a930) bg_button_pane_g9

0x0008,

0xf844,	// (0x0005085e) bg_button_pane_g

0xbec1,	// (0x0004cedb) common_borders_pane_ParamLimits

0xbec1,	// (0x0004cedb) common_borders_pane

0xc8a4,	// (0x0004d8be) eswt_control_pane_g1_copy1_ParamLimits

0xc8a4,	// (0x0004d8be) eswt_control_pane_g1_copy1

0xc8b1,	// (0x0004d8cb) eswt_control_pane_g2_copy1_ParamLimits

0xc8b1,	// (0x0004d8cb) eswt_control_pane_g2_copy1

0xc8be,	// (0x0004d8d8) eswt_control_pane_g3_copy1_ParamLimits

0xc8be,	// (0x0004d8d8) eswt_control_pane_g3_copy1

0xc8cb,	// (0x0004d8e5) eswt_control_pane_g4_copy1_ParamLimits

0xc8cb,	// (0x0004d8e5) eswt_control_pane_g4_copy1

0xbefc,	// (0x0004cf16) bg_eswt_ctrl_canvas_pane_g1

0xbec1,	// (0x0004cedb) common_borders_pane_cp2_ParamLimits

0xbec1,	// (0x0004cedb) common_borders_pane_cp2

0xbec1,	// (0x0004cedb) common_borders_pane_cp3_ParamLimits

0xbec1,	// (0x0004cedb) common_borders_pane_cp3

0xc920,	// (0x0004d93a) separator_horizontal_pane

0xc928,	// (0x0004d942) separator_vertical_pane

0xc8a4,	// (0x0004d8be) eswt_control_pane_g1_copy2_ParamLimits

0xc8a4,	// (0x0004d8be) eswt_control_pane_g1_copy2

0xc8b1,	// (0x0004d8cb) eswt_control_pane_g2_copy2_ParamLimits

0xc8b1,	// (0x0004d8cb) eswt_control_pane_g2_copy2

0xc8be,	// (0x0004d8d8) eswt_control_pane_g3_copy2_ParamLimits

0xc8be,	// (0x0004d8d8) eswt_control_pane_g3_copy2

0xc8cb,	// (0x0004d8e5) eswt_control_pane_g4_copy2_ParamLimits

0xc8cb,	// (0x0004d8e5) eswt_control_pane_g4_copy2

0xd2b3,	// (0x0004e2cd) common_borders_pane_cp4

0xc931,	// (0x0004d94b) separator_horizontal_pane_g1

0xc93a,	// (0x0004d954) separator_horizontal_pane_g2

0xc943,	// (0x0004d95d) separator_horizontal_pane_g3

0x0002,

0xfbe7,	// (0x00050c01) separator_horizontal_pane_g

0xc8a4,	// (0x0004d8be) eswt_control_pane_g1_copy3_ParamLimits

0xc8a4,	// (0x0004d8be) eswt_control_pane_g1_copy3

0xc8b1,	// (0x0004d8cb) eswt_control_pane_g2_copy3_ParamLimits

0xc8b1,	// (0x0004d8cb) eswt_control_pane_g2_copy3

0xc8be,	// (0x0004d8d8) eswt_control_pane_g3_copy3_ParamLimits

0xc8be,	// (0x0004d8d8) eswt_control_pane_g3_copy3

0xc8cb,	// (0x0004d8e5) eswt_control_pane_g4_copy3_ParamLimits

0xc8cb,	// (0x0004d8e5) eswt_control_pane_g4_copy3

0xd2b3,	// (0x0004e2cd) common_borders_pane_cp5

0xc94c,	// (0x0004d966) separator_vertical_pane_g1

0xc955,	// (0x0004d96f) separator_vertical_pane_g2

0xc95e,	// (0x0004d978) separator_vertical_pane_g3

0x0002,

0xfbee,	// (0x00050c08) separator_vertical_pane_g

0xc8a4,	// (0x0004d8be) eswt_control_pane_g1_copy4_ParamLimits

0xc8a4,	// (0x0004d8be) eswt_control_pane_g1_copy4

0xc8b1,	// (0x0004d8cb) eswt_control_pane_g2_copy4_ParamLimits

0xc8b1,	// (0x0004d8cb) eswt_control_pane_g2_copy4

0xc8be,	// (0x0004d8d8) eswt_control_pane_g3_copy4_ParamLimits

0xc8be,	// (0x0004d8d8) eswt_control_pane_g3_copy4

0xc8cb,	// (0x0004d8e5) eswt_control_pane_g4_copy4_ParamLimits

0xc8cb,	// (0x0004d8e5) eswt_control_pane_g4_copy4

0xc967,	// (0x0004d981) eswt_ctrl_combo_button_pane

0xc96f,	// (0x0004d989) eswt_ctrl_input_pane

0xc977,	// (0x0004d991) popup_choice_list_window_cp70

0xc97f,	// (0x0004d999) eswt_ctrl_input_pane_t1

0xd2b3,	// (0x0004e2cd) input_focus_pane_cp70

0xbec1,	// (0x0004cedb) bg_button_pane_cp70_ParamLimits

0xbec1,	// (0x0004cedb) bg_button_pane_cp70

0xc98d,	// (0x0004d9a7) eswt_ctrl_combo_button_pane_g1

0xc995,	// (0x0004d9af) wait_bar_pane_cp70

0x994a,	// (0x0004a964) bg_popup_window_pane_cp70_ParamLimits

0x994a,	// (0x0004a964) bg_popup_window_pane_cp70

0xc99d,	// (0x0004d9b7) popup_eswt_tasktip_window_t1

0xc9b3,	// (0x0004d9cd) wait_bar_pane_cp71_ParamLimits

0xc9b3,	// (0x0004d9cd) wait_bar_pane_cp71

0xc9bf,	// (0x0004d9d9) grid_eswt_app_pane

0x413e,	// (0x00045158) scroll_pane_cp70

0xc9c8,	// (0x0004d9e2) cell_eswt_app_pane_ParamLimits

0xc9c8,	// (0x0004d9e2) cell_eswt_app_pane

0xc9fa,	// (0x0004da14) cell_eswt_app_pane_g1_ParamLimits

0xc9fa,	// (0x0004da14) cell_eswt_app_pane_g1

0xca29,	// (0x0004da43) cell_eswt_app_pane_g2_ParamLimits

0xca29,	// (0x0004da43) cell_eswt_app_pane_g2

0x0001,

0xfbf5,	// (0x00050c0f) cell_eswt_app_pane_g_ParamLimits

0xfbf5,	// (0x00050c0f) cell_eswt_app_pane_g

0xca52,	// (0x0004da6c) cell_eswt_app_pane_t1_ParamLimits

0xca52,	// (0x0004da6c) cell_eswt_app_pane_t1

0xca84,	// (0x0004da9e) grid_highlight_pane_cp70_ParamLimits

0xca84,	// (0x0004da9e) grid_highlight_pane_cp70

0x8f39,	// (0x00049f53) set_content_pane_g1

0x9325,	// (0x0004a33f) status_small_volume_pane

0x7c01,	// (0x00048c1b) status_small_volume_pane_g1

0x7c09,	// (0x00048c23) volume_small2_pane

0x7c12,	// (0x00048c2c) volume_small2_pane_g1

0x7c1b,	// (0x00048c35) volume_small2_pane_g2

0x7c24,	// (0x00048c3e) volume_small2_pane_g3

0x7c2d,	// (0x00048c47) volume_small2_pane_g4

0x7c36,	// (0x00048c50) volume_small2_pane_g5

0x7c3f,	// (0x00048c59) volume_small2_pane_g6

0x7c48,	// (0x00048c62) volume_small2_pane_g7

0x7c51,	// (0x00048c6b) volume_small2_pane_g8

0x7c5a,	// (0x00048c74) volume_small2_pane_g9

0x7c63,	// (0x00048c7d) volume_small2_pane_g10

0x0009,

0xfbfa,	// (0x00050c14) volume_small2_pane_g

0xc2cb,	// (0x0004d2e5) fep_vkb_top_text_pane_g1_ParamLimits

0xc2e6,	// (0x0004d300) fep_vkb_top_text_pane_t1_ParamLimits

0xc5c0,	// (0x0004d5da) popup_preview_fixed_window_g3_ParamLimits

0xc5c0,	// (0x0004d5da) popup_preview_fixed_window_g3

0x71d0,	// (0x000481ea) popup_toolbar_trans_pane

0xac92,	// (0x0004bcac) aid_height_set_list_ParamLimits

0xaca3,	// (0x0004bcbd) aid_size_parent_ParamLimits

0x93a6,	// (0x0004a3c0) list_highlight_pane_cp2_ParamLimits

0x8f39,	// (0x00049f53) set_content_pane_g1_ParamLimits

0x7698,	// (0x000486b2) list_single_image_pane_ParamLimits

0x7698,	// (0x000486b2) list_single_image_pane

0xca90,	// (0x0004daaa) aid_size_cell_image_ParamLimits

0xca90,	// (0x0004daaa) aid_size_cell_image

0xca9d,	// (0x0004dab7) grid_single_image_pane_ParamLimits

0xca9d,	// (0x0004dab7) grid_single_image_pane

0x0e49,	// (0x00041e63) list_single_image_pane_g1_ParamLimits

0x0e49,	// (0x00041e63) list_single_image_pane_g1

0x0e55,	// (0x00041e6f) list_single_image_pane_g2_ParamLimits

0x0e55,	// (0x00041e6f) list_single_image_pane_g2

0x0001,

0xfc0f,	// (0x00050c29) list_single_image_pane_g_ParamLimits

0xfc0f,	// (0x00050c29) list_single_image_pane_g

0xcaab,	// (0x0004dac5) list_single_image_pane_t1_ParamLimits

0xcaab,	// (0x0004dac5) list_single_image_pane_t1

0xcac1,	// (0x0004dadb) cell_image_list_pane_ParamLimits

0xcac1,	// (0x0004dadb) cell_image_list_pane

0xcad9,	// (0x0004daf3) cell_image_list_pane_g1

0xcae2,	// (0x0004dafc) cell_image_list_pane_g2

0x0001,

0xfc14,	// (0x00050c2e) cell_image_list_pane_g

0xcaeb,	// (0x0004db05) aid_size_cell_tb_trans_pane

0x0e3b,	// (0x00041e55) bg_tb_trans_pane

0xcafd,	// (0x0004db17) grid_tb_trans_pane

0x98d6,	// (0x0004a8f0) bg_tb_trans_pane_g1

0x98de,	// (0x0004a8f8) bg_tb_trans_pane_g2

0x98e6,	// (0x0004a900) bg_tb_trans_pane_g3

0x98ee,	// (0x0004a908) bg_tb_trans_pane_g4

0x98f6,	// (0x0004a910) bg_tb_trans_pane_g5

0x990e,	// (0x0004a928) bg_tb_trans_pane_g6

0x9916,	// (0x0004a930) bg_tb_trans_pane_g7

0x98fe,	// (0x0004a918) bg_tb_trans_pane_g8

0x9906,	// (0x0004a920) bg_tb_trans_pane_g9

0x0008,

0xfc19,	// (0x00050c33) bg_tb_trans_pane_g

0xcb11,	// (0x0004db2b) cell_toolbar_trans_pane_ParamLimits

0xcb11,	// (0x0004db2b) cell_toolbar_trans_pane

0xbefc,	// (0x0004cf16) cell_toolbar_trans_pane_g1

0xbb3b,	// (0x0004cb55) list_form2_midp_pane_t1

0xbb49,	// (0x0004cb63) list_form2_midp_pane_t2

0x0001,

0xfac2,	// (0x00050adc) list_form2_midp_pane_t

0xbb57,	// (0x0004cb71) scroll_pane_cp51_ParamLimits

0xbd1e,	// (0x0004cd38) form2_midp_wait_pane_g1

0xbd27,	// (0x0004cd41) form2_midp_wait_pane_g2

0xbd30,	// (0x0004cd4a) form2_midp_wait_pane_g3

0x0002,

0xfad7,	// (0x00050af1) form2_midp_wait_pane_g

0xd315,	// (0x0004e32f) list_highlight_pane_cp21_ParamLimits

0xbd69,	// (0x0004cd83) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbd78,	// (0x0004cd92) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7651,	// (0x0004866b) list_single_2graphic_im_pane_ParamLimits

0x7651,	// (0x0004866b) list_single_2graphic_im_pane

0xcb37,	// (0x0004db51) list_single_2graphic_im_pane_g1_ParamLimits

0xcb37,	// (0x0004db51) list_single_2graphic_im_pane_g1

0xcb48,	// (0x0004db62) list_single_2graphic_im_pane_g2_ParamLimits

0xcb48,	// (0x0004db62) list_single_2graphic_im_pane_g2

0xcb54,	// (0x0004db6e) list_single_2graphic_im_pane_g3_ParamLimits

0xcb54,	// (0x0004db6e) list_single_2graphic_im_pane_g3

0x0003,

0xfc2c,	// (0x00050c46) list_single_2graphic_im_pane_g_ParamLimits

0xfc2c,	// (0x00050c46) list_single_2graphic_im_pane_g

0xcb74,	// (0x0004db8e) list_single_2graphic_im_pane_t1_ParamLimits

0xcb74,	// (0x0004db8e) list_single_2graphic_im_pane_t1

0xc5cc,	// (0x0004d5e6) list_single_graphic_2heading_pane_fp_ParamLimits

0xc5cc,	// (0x0004d5e6) list_single_graphic_2heading_pane_fp

0x5a08,	// (0x00046a22) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5a08,	// (0x00046a22) list_single_graphic_2heading_pane_fp_g1

0xc5e5,	// (0x0004d5ff) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc5e5,	// (0x0004d5ff) list_single_graphic_2heading_pane_fp_g2

0x7ac0,	// (0x00048ada) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7ac0,	// (0x00048ada) list_single_graphic_2heading_pane_fp_g3

0x7acc,	// (0x00048ae6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7acc,	// (0x00048ae6) list_single_graphic_2heading_pane_fp_g4

0xc5f1,	// (0x0004d60b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc5f1,	// (0x0004d60b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5a,	// (0x00050b74) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5a,	// (0x00050b74) list_single_graphic_2heading_pane_fp_g

0x5b65,	// (0x00046b7f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5b65,	// (0x00046b7f) list_single_graphic_2heading_pane_fp_t1

0x5a40,	// (0x00046a5a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5a40,	// (0x00046a5a) list_single_graphic_2heading_pane_fp_t2

0x5b7b,	// (0x00046b95) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5b7b,	// (0x00046b95) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc35,	// (0x00050c4f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc35,	// (0x00050c4f) list_single_graphic_2heading_pane_fp_t

0xbf8d,	// (0x0004cfa7) fep_hwr_write_pane_g5_ParamLimits

0xbf8d,	// (0x0004cfa7) fep_hwr_write_pane_g5

0xbf99,	// (0x0004cfb3) fep_hwr_write_pane_g6_ParamLimits

0xbf99,	// (0x0004cfb3) fep_hwr_write_pane_g6

0xc873,	// (0x0004d88d) eswt_shell_pane_ParamLimits

0x994a,	// (0x0004a964) bg_popup_window_pane_cp18_ParamLimits

0x9d0c,	// (0x0004ad26) heading_pane_cp70

0xc99d,	// (0x0004d9b7) popup_eswt_tasktip_window_t1_ParamLimits

0x9437,	// (0x0004a451) aid_touch_tab_arrow_left

0x9443,	// (0x0004a45d) aid_touch_tab_arrow_right

0x60c5,	// (0x000470df) title_pane_g3_ParamLimits

0x60c5,	// (0x000470df) title_pane_g3

0x0dfa,	// (0x00041e14) set_value_pane_g1

0x71d0,	// (0x000481ea) popup_toolbar_trans_pane_ParamLimits

0xcaeb,	// (0x0004db05) aid_size_cell_tb_trans_pane_ParamLimits

0x0e3b,	// (0x00041e55) bg_tb_trans_pane_ParamLimits

0xcafd,	// (0x0004db17) grid_tb_trans_pane_ParamLimits

0x092c,	// (0x00041946) cont_note_pane_ParamLimits

0x092c,	// (0x00041946) cont_note_pane

0x0bb6,	// (0x00041bd0) cont_snote2_single_text_pane_ParamLimits

0x0bb6,	// (0x00041bd0) cont_snote2_single_text_pane

0x0bb6,	// (0x00041bd0) cont_snote2_single_graphic_pane_ParamLimits

0x0bb6,	// (0x00041bd0) cont_snote2_single_graphic_pane

0x9f3c,	// (0x0004af56) cont_note_wait_pane_ParamLimits

0x9f3c,	// (0x0004af56) cont_note_wait_pane

0x9f3c,	// (0x0004af56) cont_note_image_pane_ParamLimits

0x9f3c,	// (0x0004af56) cont_note_image_pane

0xcba5,	// (0x0004dbbf) popup_note2_window_g1_ParamLimits

0xcba5,	// (0x0004dbbf) popup_note2_window_g1

0xcbd6,	// (0x0004dbf0) popup_note2_window_t1_ParamLimits

0xcbd6,	// (0x0004dbf0) popup_note2_window_t1

0xcc1b,	// (0x0004dc35) popup_note2_window_t2_ParamLimits

0xcc1b,	// (0x0004dc35) popup_note2_window_t2

0xcc60,	// (0x0004dc7a) popup_note2_window_t3_ParamLimits

0xcc60,	// (0x0004dc7a) popup_note2_window_t3

0xcca5,	// (0x0004dcbf) popup_note2_window_t4_ParamLimits

0xcca5,	// (0x0004dcbf) popup_note2_window_t4

0x09b0,	// (0x000419ca) popup_note2_window_t5_ParamLimits

0x09b0,	// (0x000419ca) popup_note2_window_t5

0x0004,

0xfc41,	// (0x00050c5b) popup_note2_window_t_ParamLimits

0xfc41,	// (0x00050c5b) popup_note2_window_t

0xccd4,	// (0x0004dcee) popup_note2_image_window_g1_ParamLimits

0xccd4,	// (0x0004dcee) popup_note2_image_window_g1

0xcce0,	// (0x0004dcfa) popup_note2_image_window_g2_ParamLimits

0xcce0,	// (0x0004dcfa) popup_note2_image_window_g2

0x0001,

0xfc4c,	// (0x00050c66) popup_note2_image_window_g_ParamLimits

0xfc4c,	// (0x00050c66) popup_note2_image_window_g

0xccf2,	// (0x0004dd0c) popup_note2_image_window_t1_ParamLimits

0xccf2,	// (0x0004dd0c) popup_note2_image_window_t1

0xcd0a,	// (0x0004dd24) popup_note2_image_window_t2_ParamLimits

0xcd0a,	// (0x0004dd24) popup_note2_image_window_t2

0xcd22,	// (0x0004dd3c) popup_note2_image_window_t3_ParamLimits

0xcd22,	// (0x0004dd3c) popup_note2_image_window_t3

0x0002,

0xfc51,	// (0x00050c6b) popup_note2_image_window_t_ParamLimits

0xfc51,	// (0x00050c6b) popup_note2_image_window_t

0x9f4a,	// (0x0004af64) popup_note2_wait_window_g1_ParamLimits

0x9f4a,	// (0x0004af64) popup_note2_wait_window_g1

0xcd3e,	// (0x0004dd58) popup_note2_wait_window_g2_ParamLimits

0xcd3e,	// (0x0004dd58) popup_note2_wait_window_g2

0x9f62,	// (0x0004af7c) popup_note2_wait_window_g3_ParamLimits

0x9f62,	// (0x0004af7c) popup_note2_wait_window_g3

0x0002,

0xfc58,	// (0x00050c72) popup_note2_wait_window_g_ParamLimits

0xfc58,	// (0x00050c72) popup_note2_wait_window_g

0xcd4a,	// (0x0004dd64) popup_note2_wait_window_t1_ParamLimits

0xcd4a,	// (0x0004dd64) popup_note2_wait_window_t1

0xcd68,	// (0x0004dd82) popup_note2_wait_window_t2_ParamLimits

0xcd68,	// (0x0004dd82) popup_note2_wait_window_t2

0xcd86,	// (0x0004dda0) popup_note2_wait_window_t3_ParamLimits

0xcd86,	// (0x0004dda0) popup_note2_wait_window_t3

0xcd98,	// (0x0004ddb2) popup_note2_wait_window_t4_ParamLimits

0xcd98,	// (0x0004ddb2) popup_note2_wait_window_t4

0x0003,

0xfc5f,	// (0x00050c79) popup_note2_wait_window_t_ParamLimits

0xfc5f,	// (0x00050c79) popup_note2_wait_window_t

0xcdaa,	// (0x0004ddc4) wait_bar2_pane_ParamLimits

0xcdaa,	// (0x0004ddc4) wait_bar2_pane

0xcdc2,	// (0x0004dddc) popup_snote2_single_text_window_g1_ParamLimits

0xcdc2,	// (0x0004dddc) popup_snote2_single_text_window_g1

0xcdea,	// (0x0004de04) popup_snote2_single_text_window_t1_ParamLimits

0xcdea,	// (0x0004de04) popup_snote2_single_text_window_t1

0xce36,	// (0x0004de50) popup_snote2_single_text_window_t2_ParamLimits

0xce36,	// (0x0004de50) popup_snote2_single_text_window_t2

0xce82,	// (0x0004de9c) popup_snote2_single_text_window_t3_ParamLimits

0xce82,	// (0x0004de9c) popup_snote2_single_text_window_t3

0xcec3,	// (0x0004dedd) popup_snote2_single_text_window_t4_ParamLimits

0xcec3,	// (0x0004dedd) popup_snote2_single_text_window_t4

0xcef9,	// (0x0004df13) popup_snote2_single_text_window_t5_ParamLimits

0xcef9,	// (0x0004df13) popup_snote2_single_text_window_t5

0x0004,

0xfc68,	// (0x00050c82) popup_snote2_single_text_window_t_ParamLimits

0xfc68,	// (0x00050c82) popup_snote2_single_text_window_t

0xcf24,	// (0x0004df3e) popup_snote2_single_graphic_window_g1_ParamLimits

0xcf24,	// (0x0004df3e) popup_snote2_single_graphic_window_g1

0xcf4c,	// (0x0004df66) popup_snote2_single_graphic_window_g2_ParamLimits

0xcf4c,	// (0x0004df66) popup_snote2_single_graphic_window_g2

0x0001,

0xfc73,	// (0x00050c8d) popup_snote2_single_graphic_window_g_ParamLimits

0xfc73,	// (0x00050c8d) popup_snote2_single_graphic_window_g

0xcf74,	// (0x0004df8e) popup_snote2_single_graphic_window_t1_ParamLimits

0xcf74,	// (0x0004df8e) popup_snote2_single_graphic_window_t1

0xcfc0,	// (0x0004dfda) popup_snote2_single_graphic_window_t2_ParamLimits

0xcfc0,	// (0x0004dfda) popup_snote2_single_graphic_window_t2

0xce82,	// (0x0004de9c) popup_snote2_single_graphic_window_t3_ParamLimits

0xce82,	// (0x0004de9c) popup_snote2_single_graphic_window_t3

0xcec3,	// (0x0004dedd) popup_snote2_single_graphic_window_t4_ParamLimits

0xcec3,	// (0x0004dedd) popup_snote2_single_graphic_window_t4

0xcef9,	// (0x0004df13) popup_snote2_single_graphic_window_t5_ParamLimits

0xcef9,	// (0x0004df13) popup_snote2_single_graphic_window_t5

0x0004,

0xfc78,	// (0x00050c92) popup_snote2_single_graphic_window_t_ParamLimits

0xfc78,	// (0x00050c92) popup_snote2_single_graphic_window_t

0xba07,	// (0x0004ca21) clock_nsta_pane_cp2_t1

0xba07,	// (0x0004ca21) clock_nsta_pane_cp2_t2

0x0001,

0xfa98,	// (0x00050ab2) clock_nsta_pane_cp2_t

0x5309,	// (0x00046323) form_field_data_wide_pane_g1_ParamLimits

0x0e49,	// (0x00041e63) form_field_data_wide_pane_g2_ParamLimits

0x0e49,	// (0x00041e63) form_field_data_wide_pane_g2

0x0e55,	// (0x00041e6f) form_field_data_wide_pane_g3_ParamLimits

0x0e55,	// (0x00041e6f) form_field_data_wide_pane_g3

0x0002,

0xf659,	// (0x00050673) form_field_data_wide_pane_g_ParamLimits

0xf659,	// (0x00050673) form_field_data_wide_pane_g

0xb8e2,	// (0x0004c8fc) grid_touch_3_pane_ParamLimits

0xb8e2,	// (0x0004c8fc) grid_touch_3_pane

0xd00c,	// (0x0004e026) cell_touch_3_pane_ParamLimits

0xd00c,	// (0x0004e026) cell_touch_3_pane

0xbefc,	// (0x0004cf16) cell_touch_3_pane_g1

0xbefc,	// (0x0004cf16) cell_touch_3_pane_g2

0x0001,

0xfb1d,	// (0x00050b37) cell_touch_3_pane_g

0x0a08,	// (0x00041a22) cont_query_data_pane

0x0a10,	// (0x00041a2a) cont_query_data_pane_cp1

0xd03f,	// (0x0004e059) button_value_adjust_pane_cp7

0xd047,	// (0x0004e061) query_popup_pane_cp3

0x8b4f,	// (0x00049b69) bg_popup_sub_pane_cp22_ParamLimits

0x68b0,	// (0x000478ca) navi_navi_volume_pane_cp2

0x68cb,	// (0x000478e5) popup_side_volume_key_window_g2

0x68da,	// (0x000478f4) popup_side_volume_key_window_g3

0x0002,

0xf6ef,	// (0x00050709) popup_side_volume_key_window_g

0x68f7,	// (0x00047911) popup_side_volume_key_window_t2

0x0001,

0xf6f6,	// (0x00050710) popup_side_volume_key_window_t

0x8e0b,	// (0x00049e25) popup_side_volume_key_window_ParamLimits

0x4f27,	// (0x00045f41) list_double_graphic_pane_g4_ParamLimits

0x4f27,	// (0x00045f41) list_double_graphic_pane_g4

0x7680,	// (0x0004869a) list_single_2heading_msg_pane_ParamLimits

0x7680,	// (0x0004869a) list_single_2heading_msg_pane

0x7c6c,	// (0x00048c86) list_single_2heading_msg_pane_g1_ParamLimits

0x7c6c,	// (0x00048c86) list_single_2heading_msg_pane_g1

0x7c78,	// (0x00048c92) list_single_2heading_msg_pane_g2_ParamLimits

0x7c78,	// (0x00048c92) list_single_2heading_msg_pane_g2

0x7c84,	// (0x00048c9e) list_single_2heading_msg_pane_g3_ParamLimits

0x7c84,	// (0x00048c9e) list_single_2heading_msg_pane_g3

0x7c90,	// (0x00048caa) list_single_2heading_msg_pane_g4_ParamLimits

0x7c90,	// (0x00048caa) list_single_2heading_msg_pane_g4

0x0003,

0xfc83,	// (0x00050c9d) list_single_2heading_msg_pane_g_ParamLimits

0xfc83,	// (0x00050c9d) list_single_2heading_msg_pane_g

0x5b9b,	// (0x00046bb5) list_single_2heading_msg_pane_t1_ParamLimits

0x5b9b,	// (0x00046bb5) list_single_2heading_msg_pane_t1

0x5bc3,	// (0x00046bdd) list_single_2heading_msg_pane_t2_ParamLimits

0x5bc3,	// (0x00046bdd) list_single_2heading_msg_pane_t2

0x5bf2,	// (0x00046c0c) list_single_2heading_msg_pane_t3_ParamLimits

0x5bf2,	// (0x00046c0c) list_single_2heading_msg_pane_t3

0x5c2b,	// (0x00046c45) list_single_2heading_msg_pane_t4_ParamLimits

0x5c2b,	// (0x00046c45) list_single_2heading_msg_pane_t4

0x0003,

0xfc8c,	// (0x00050ca6) list_single_2heading_msg_pane_t_ParamLimits

0xfc8c,	// (0x00050ca6) list_single_2heading_msg_pane_t

0xd2d1,	// (0x0004e2eb) title_pane_g4_ParamLimits

0xd2d1,	// (0x0004e2eb) title_pane_g4

0x65cb,	// (0x000475e5) title_pane_stacon_g3_ParamLimits

0x65cb,	// (0x000475e5) title_pane_stacon_g3

0xcb68,	// (0x0004db82) list_single_2graphic_im_pane_g4_ParamLimits

0xcb68,	// (0x0004db82) list_single_2graphic_im_pane_g4

0xa9ac,	// (0x0004b9c6) popup_side_volume_key_window_cp

0xb1f2,	// (0x0004c20c) main_idle_act2_pane_t1

0x72ec,	// (0x00048306) toolbar_button_pane_g10

0x6422,	// (0x0004743c) popup_toolbar_window_cp1

0xb9f8,	// (0x0004ca12) clock_nsta_pane_cp_t1

0xb9f8,	// (0x0004ca12) clock_nsta_pane_cp_t2

0x0001,

0xfa93,	// (0x00050aad) clock_nsta_pane_cp_t

0x68b0,	// (0x000478ca) navi_navi_volume_pane_cp2_ParamLimits

0x68bf,	// (0x000478d9) popup_side_volume_key_window_g1_ParamLimits

0x68cb,	// (0x000478e5) popup_side_volume_key_window_g2_ParamLimits

0x68da,	// (0x000478f4) popup_side_volume_key_window_g3_ParamLimits

0xf6ef,	// (0x00050709) popup_side_volume_key_window_g_ParamLimits

0x785a,	// (0x00048874) fep_hwr_aid_pane

0x218c,	// (0x000431a6) bg_fep_hwr_top_pane_g4_ParamLimits

0xbf5d,	// (0x0004cf77) fep_hwr_top_pane_g1_ParamLimits

0xbf6f,	// (0x0004cf89) fep_hwr_top_pane_g2_ParamLimits

0x7915,	// (0x0004892f) fep_hwr_top_pane_g3_ParamLimits

0xfae8,	// (0x00050b02) fep_hwr_top_pane_g_ParamLimits

0x792a,	// (0x00048944) fep_hwr_top_text_pane_ParamLimits

0xa761,	// (0x0004b77b) aid_touch_tab_arrow_arrow_2

0xa76a,	// (0x0004b784) aid_touch_tab_arrow_left_2

0x786e,	// (0x00048888) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x78a5,	// (0x000488bf) fep_hwr_prediction_pane

0xc0c5,	// (0x0004d0df) fep_vkb_prediction_pane

0xc1cb,	// (0x0004d1e5) fep_vkb_side_pane_g3_ParamLimits

0xc1cb,	// (0x0004d1e5) fep_vkb_side_pane_g3

0xc177,	// (0x0004d191) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc645,	// (0x0004d65f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc652,	// (0x0004d66c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb92,	// (0x00050bac) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd06e,	// (0x0004e088) fep_hwr_prediction_pane_g1

0x7ca8,	// (0x00048cc2) fep_hwr_prediction_pane_g2

0x7cb0,	// (0x00048cca) fep_hwr_prediction_pane_g3

0x7cb8,	// (0x00048cd2) fep_hwr_prediction_pane_g4

0x0003,

0xfc95,	// (0x00050caf) fep_hwr_prediction_pane_g

0xd06e,	// (0x0004e088) fep_vkb_prediction_pane_g1

0xd078,	// (0x0004e092) fep_vkb_prediction_pane_g2

0xd080,	// (0x0004e09a) fep_vkb_prediction_pane_g3

0xd088,	// (0x0004e0a2) fep_vkb_prediction_pane_g4

0x0003,

0xfc9e,	// (0x00050cb8) fep_vkb_prediction_pane_g

0x75f9,	// (0x00048613) slider_set_pane_g3

0x760d,	// (0x00048627) slider_set_pane_g4

0x7625,	// (0x0004863f) slider_set_pane_g5

0x75f9,	// (0x00048613) slider_set_pane_g6

0x763b,	// (0x00048655) slider_set_pane_g7

0xae22,	// (0x0004be3c) slider_form_pane_g3

0xae2b,	// (0x0004be45) slider_form_pane_g4

0xae33,	// (0x0004be4d) slider_form_pane_g5

0xae22,	// (0x0004be3c) slider_form_pane_g6

0xae3b,	// (0x0004be55) slider_form_pane_g7

0xb4b6,	// (0x0004c4d0) slider_set_pane_vc_g3

0xb4bf,	// (0x0004c4d9) slider_set_pane_vc_g4

0xb4c8,	// (0x0004c4e2) slider_set_pane_vc_g5

0xb4b6,	// (0x0004c4d0) slider_set_pane_vc_g6

0xb4d1,	// (0x0004c4eb) slider_set_pane_vc_g7

0xb6a7,	// (0x0004c6c1) slider_form_pane_vc_g1

0xb6b0,	// (0x0004c6ca) slider_form_pane_vc_g2

0xb6b9,	// (0x0004c6d3) slider_form_pane_vc_g3

0xb6a7,	// (0x0004c6c1) slider_form_pane_vc_g4

0xb6c2,	// (0x0004c6dc) slider_form_pane_vc_g5

0x0004,

0xfa65,	// (0x00050a7f) slider_form_pane_vc_g

0xd2b3,	// (0x0004e2cd) main_idle_act3_pane

0xd090,	// (0x0004e0aa) ai3_links_pane

0xd099,	// (0x0004e0b3) popup_ai3_data_window_ParamLimits

0xd099,	// (0x0004e0b3) popup_ai3_data_window

0xd2b3,	// (0x0004e2cd) grid_ai3_links_pane

0xd0b7,	// (0x0004e0d1) cell_ai3_links_pane_ParamLimits

0xd0b7,	// (0x0004e0d1) cell_ai3_links_pane

0xd0d1,	// (0x0004e0eb) bg_popup_sub_pane_cp11

0xd0de,	// (0x0004e0f8) cell_ai3_links_pane_g1

0xd2b3,	// (0x0004e2cd) bg_popup_sub_pane_cp12

0xd103,	// (0x0004e11d) heading_ai3_data_pane

0xd10b,	// (0x0004e125) list_ai3_gene_pane

0xd117,	// (0x0004e131) popup_ai3_data_window_g1

0xd11f,	// (0x0004e139) heading_ai3_data_pane_g1

0xd127,	// (0x0004e141) heading_ai3_data_pane_t1

0xd135,	// (0x0004e14f) list_double_ai3_gene_pane_ParamLimits

0xd135,	// (0x0004e14f) list_double_ai3_gene_pane

0xd142,	// (0x0004e15c) list_single_ai3_gene_pane_ParamLimits

0xd142,	// (0x0004e15c) list_single_ai3_gene_pane

0xbec1,	// (0x0004cedb) list_highlight_pane_cp7_ParamLimits

0xbec1,	// (0x0004cedb) list_highlight_pane_cp7

0xd14f,	// (0x0004e169) list_single_a13_gene_pane_t1_ParamLimits

0xd14f,	// (0x0004e169) list_single_a13_gene_pane_t1

0xd166,	// (0x0004e180) list_single_ai3_gene_pane_g1

0xd16f,	// (0x0004e189) list_single_ai3_gene_pane_g2

0x0001,

0xfca7,	// (0x00050cc1) list_single_ai3_gene_pane_g

0xd177,	// (0x0004e191) list_double_ai3_gene_pane_g1_ParamLimits

0xd177,	// (0x0004e191) list_double_ai3_gene_pane_g1

0xd183,	// (0x0004e19d) list_double_ai3_gene_pane_t1_ParamLimits

0xd183,	// (0x0004e19d) list_double_ai3_gene_pane_t1

0xd19f,	// (0x0004e1b9) list_double_ai3_gene_pane_t2_ParamLimits

0xd19f,	// (0x0004e1b9) list_double_ai3_gene_pane_t2

0xd1b4,	// (0x0004e1ce) list_double_ai3_gene_pane_t3_ParamLimits

0xd1b4,	// (0x0004e1ce) list_double_ai3_gene_pane_t3

0x0002,

0xfcac,	// (0x00050cc6) list_double_ai3_gene_pane_t_ParamLimits

0xfcac,	// (0x00050cc6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5b91,	// (0x00046bab) aid_size_min_col_2

0xd058,	// (0x0004e072) aid_size_min_msg_ParamLimits

0xd058,	// (0x0004e072) aid_size_min_msg

0xc2d7,	// (0x0004d2f1) fep_vkb_top_text_pane_g2_ParamLimits

0xc2d7,	// (0x0004d2f1) fep_vkb_top_text_pane_g2

0x0001,

0xfb18,	// (0x00050b32) fep_vkb_top_text_pane_g_ParamLimits

0xfb18,	// (0x00050b32) fep_vkb_top_text_pane_g

0xd2b3,	// (0x0004e2cd) main_hc_apps_shell_pane

0xd1d1,	// (0x0004e1eb) grid_hc_apps_pane_ParamLimits

0xd1d1,	// (0x0004e1eb) grid_hc_apps_pane

0xd1e3,	// (0x0004e1fd) list_hc_apps_pane

0xd1eb,	// (0x0004e205) scroll_pane_cp37_ParamLimits

0xd1eb,	// (0x0004e205) scroll_pane_cp37

0xd1f7,	// (0x0004e211) cell_hc_apps_pane_ParamLimits

0xd1f7,	// (0x0004e211) cell_hc_apps_pane

0xd35f,	// (0x0004e379) cell_hc_apps_pane_g1_ParamLimits

0xd35f,	// (0x0004e379) cell_hc_apps_pane_g1

0xd38b,	// (0x0004e3a5) cell_hc_apps_pane_g2_ParamLimits

0xd38b,	// (0x0004e3a5) cell_hc_apps_pane_g2

0xd3a7,	// (0x0004e3c1) cell_hc_apps_pane_g3_ParamLimits

0xd3a7,	// (0x0004e3c1) cell_hc_apps_pane_g3

0x0002,

0xfcb3,	// (0x00050ccd) cell_hc_apps_pane_g_ParamLimits

0xfcb3,	// (0x00050ccd) cell_hc_apps_pane_g

0xd3c9,	// (0x0004e3e3) cell_hc_apps_pane_t1_ParamLimits

0xd3c9,	// (0x0004e3e3) cell_hc_apps_pane_t1

0x092c,	// (0x00041946) grid_highlight_pane_cp10_ParamLimits

0x092c,	// (0x00041946) grid_highlight_pane_cp10

0xd409,	// (0x0004e423) list_single_hc_apps_pane_ParamLimits

0xd409,	// (0x0004e423) list_single_hc_apps_pane

0xd448,	// (0x0004e462) list_single_hc_apps_pane_g1

0x7cc0,	// (0x00048cda) list_single_hc_apps_pane_g2

0x0001,

0xfcba,	// (0x00050cd4) list_single_hc_apps_pane_g

0x7cd9,	// (0x00048cf3) list_single_hc_apps_pane_g2_copy1

0x5c50,	// (0x00046c6a) list_single_hc_apps_pane_t1

0xd315,	// (0x0004e32f) bg_set_opt_pane_cp_ParamLimits

0x6177,	// (0x00047191) setting_slider_pane_t1_ParamLimits

0x6190,	// (0x000471aa) setting_slider_pane_t2_ParamLimits

0x61aa,	// (0x000471c4) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x00050551) setting_slider_pane_t_ParamLimits

0x61c2,	// (0x000471dc) slider_set_pane_ParamLimits

0x6b81,	// (0x00047b9b) control_pane_g5_ParamLimits

0x6b81,	// (0x00047b9b) control_pane_g5

0xac55,	// (0x0004bc6f) slider_set_pane_g1_ParamLimits

0x75ed,	// (0x00048607) slider_set_pane_g2_ParamLimits

0x75f9,	// (0x00048613) slider_set_pane_g3_ParamLimits

0x760d,	// (0x00048627) slider_set_pane_g4_ParamLimits

0x7625,	// (0x0004863f) slider_set_pane_g5_ParamLimits

0x75f9,	// (0x00048613) slider_set_pane_g6_ParamLimits

0x763b,	// (0x00048655) slider_set_pane_g7_ParamLimits

0xf942,	// (0x0005095c) slider_set_pane_g_ParamLimits

0x8ee4,	// (0x00049efe) navi_icon_text_pane_ParamLimits

0x93f8,	// (0x0004a412) aid_fill_nsta_2_ParamLimits

0x9437,	// (0x0004a451) aid_touch_tab_arrow_left_ParamLimits

0x9443,	// (0x0004a45d) aid_touch_tab_arrow_right_ParamLimits

0x94af,	// (0x0004a4c9) clock_nsta_pane_ParamLimits

0xa743,	// (0x0004b75d) navi_icon_pane_g1_ParamLimits

0xa74f,	// (0x0004b769) navi_text_pane_t1_ParamLimits

0xbb15,	// (0x0004cb2f) navi_icon_text_pane_g1_ParamLimits

0xbb21,	// (0x0004cb3b) navi_icon_text_pane_t1_ParamLimits

0xd448,	// (0x0004e462) list_single_hc_apps_pane_g1_ParamLimits

0x7cc0,	// (0x00048cda) list_single_hc_apps_pane_g2_ParamLimits

0xfcba,	// (0x00050cd4) list_single_hc_apps_pane_g_ParamLimits

0x7cd9,	// (0x00048cf3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5c50,	// (0x00046c6a) list_single_hc_apps_pane_t1_ParamLimits

0x5fab,	// (0x00046fc5) popup_toolbar2_fixed_window_ParamLimits

0x5fab,	// (0x00046fc5) popup_toolbar2_fixed_window

0x71c6,	// (0x000481e0) popup_toolbar2_float_window

0xd2b3,	// (0x0004e2cd) bg_popup_sub_pane_cp27

0xd461,	// (0x0004e47b) grid_toolbar2_float_pane

0xd2b3,	// (0x0004e2cd) bg_popup_sub_pane_cp26

0xd461,	// (0x0004e47b) grid_toolbar2_fixed_pane

0xd469,	// (0x0004e483) cell_toolbar2_fixed_pane_ParamLimits

0xd469,	// (0x0004e483) cell_toolbar2_fixed_pane

0xd479,	// (0x0004e493) cell_toolbar2_fixed_pane_g1

0xd482,	// (0x0004e49c) toolbar2_fixed_button_pane

0x98d6,	// (0x0004a8f0) toolbar2_fixed_button_pane_g1

0x98de,	// (0x0004a8f8) toolbar2_fixed_button_pane_g2

0x98e6,	// (0x0004a900) toolbar2_fixed_button_pane_g3

0x98ee,	// (0x0004a908) toolbar2_fixed_button_pane_g4

0x98f6,	// (0x0004a910) toolbar2_fixed_button_pane_g5

0x98fe,	// (0x0004a918) toolbar2_fixed_button_pane_g6

0x9906,	// (0x0004a920) toolbar2_fixed_button_pane_g7

0x990e,	// (0x0004a928) toolbar2_fixed_button_pane_g8

0x9916,	// (0x0004a930) toolbar2_fixed_button_pane_g9

0x0008,

0xf844,	// (0x0005085e) toolbar2_fixed_button_pane_g

0xd48a,	// (0x0004e4a4) cell_toolbar2_float_pane_ParamLimits

0xd48a,	// (0x0004e4a4) cell_toolbar2_float_pane

0xd49b,	// (0x0004e4b5) cell_toolbar2_float_pane_g1

0xd482,	// (0x0004e49c) toolbar2_fixed_button_pane_cp

0xc033,	// (0x0004d04d) fep_vkb_accented_list_pane_ParamLimits

0xc033,	// (0x0004d04d) fep_vkb_accented_list_pane

0x7a8c,	// (0x00048aa6) bg_popup_fep_shadow_pane_g9

0x9077,	// (0x0004a091) bg_popup_fep_shadow_pane_cp3

0x3d2f,	// (0x00044d49) list_accented_list_pane

0xd4a4,	// (0x0004e4be) list_single_accented_list_pane_ParamLimits

0xd4a4,	// (0x0004e4be) list_single_accented_list_pane

0x9077,	// (0x0004a091) list_highlight_pane_cp10

0xd4b5,	// (0x0004e4cf) list_single_accented_list_pane_t1

0x710c,	// (0x00048126) popup_slider_window_ParamLimits

0x710c,	// (0x00048126) popup_slider_window

0xd04f,	// (0x0004e069) aid_indentation_list_msg

0xd585,	// (0x0004e59f) bg_popup_window_pane_cp19

0xd5f1,	// (0x0004e60b) popup_slider_window_g1

0xd60d,	// (0x0004e627) popup_slider_window_g2

0xd629,	// (0x0004e643) popup_slider_window_g3

0x0005,

0xfcbf,	// (0x00050cd9) popup_slider_window_g

0xd68f,	// (0x0004e6a9) popup_slider_window_t1

0xd703,	// (0x0004e71d) small_volume_slider_vertical_pane

0xbefc,	// (0x0004cf16) small_volume_slider_vertical_pane_g1

0xbefc,	// (0x0004cf16) small_volume_slider_vertical_pane_g2

0xd71f,	// (0x0004e739) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd1,	// (0x00050ceb) small_volume_slider_vertical_pane_g

0x5d5d,	// (0x00046d77) area_side_right_pane_ParamLimits

0x5d5d,	// (0x00046d77) area_side_right_pane

0x7cf5,	// (0x00048d0f) aid_size_side_button_ParamLimits

0x7cf5,	// (0x00048d0f) aid_size_side_button

0x7d09,	// (0x00048d23) grid_sctrl_middle_pane_ParamLimits

0x7d09,	// (0x00048d23) grid_sctrl_middle_pane

0x7d28,	// (0x00048d42) sctrl_sk_bottom_pane

0x7d39,	// (0x00048d53) sctrl_sk_top_pane

0x7d4b,	// (0x00048d65) aid_touch_sctrl_top

0x092c,	// (0x00041946) bg_sctrl_sk_pane_ParamLimits

0x092c,	// (0x00041946) bg_sctrl_sk_pane

0x7d58,	// (0x00048d72) sctrl_sk_top_pane_g1

0x7d65,	// (0x00048d7f) sctrl_sk_top_pane_t1

0x7d4b,	// (0x00048d65) aid_touch_sctrl_bottom

0x092c,	// (0x00041946) bg_sctrl_sk_pane_cp_ParamLimits

0x092c,	// (0x00041946) bg_sctrl_sk_pane_cp

0x7d80,	// (0x00048d9a) sctrl_sk_bottom_pane_g1

0x7d65,	// (0x00048d7f) sctrl_sk_bottom_pane_t1

0x7d89,	// (0x00048da3) cell_sctrl_middle_pane_ParamLimits

0x7d89,	// (0x00048da3) cell_sctrl_middle_pane

0x7da6,	// (0x00048dc0) aid_touch_sctrl_middle_ParamLimits

0x7da6,	// (0x00048dc0) aid_touch_sctrl_middle

0x0e3b,	// (0x00041e55) bg_sctrl_middle_pane_ParamLimits

0x0e3b,	// (0x00041e55) bg_sctrl_middle_pane

0xc177,	// (0x0004d191) cell_sctrl_middle_pane_g1_ParamLimits

0xc177,	// (0x0004d191) cell_sctrl_middle_pane_g1

0x7db8,	// (0x00048dd2) cell_sctrl_middle_pane_g2_ParamLimits

0x7db8,	// (0x00048dd2) cell_sctrl_middle_pane_g2

0x0001,

0xfcdd,	// (0x00050cf7) cell_sctrl_middle_pane_g_ParamLimits

0xfcdd,	// (0x00050cf7) cell_sctrl_middle_pane_g

0x98d6,	// (0x0004a8f0) bg_sctrl_middle_pane_g1

0x98de,	// (0x0004a8f8) bg_sctrl_middle_pane_g2

0x98e6,	// (0x0004a900) bg_sctrl_middle_pane_g3

0x98ee,	// (0x0004a908) bg_sctrl_middle_pane_g4

0x98f6,	// (0x0004a910) bg_sctrl_middle_pane_g5

0x98fe,	// (0x0004a918) bg_sctrl_middle_pane_g6

0x9906,	// (0x0004a920) bg_sctrl_middle_pane_g7

0x990e,	// (0x0004a928) bg_sctrl_middle_pane_g8

0x0007,

0xfce2,	// (0x00050cfc) bg_sctrl_middle_pane_g

0x9916,	// (0x0004a930) bg_sctrl_middle_pane_g8_copy1

0x98d6,	// (0x0004a8f0) bg_sctrl_sk_pane_g1

0x98de,	// (0x0004a8f8) bg_sctrl_sk_pane_g2

0x98e6,	// (0x0004a900) bg_sctrl_sk_pane_g3

0x0008,

0xf844,	// (0x0005085e) bg_sctrl_sk_pane_g

0x0d74,	// (0x00041d8e) aid_size_touch_scroll_bar

0x98ee,	// (0x0004a908) bg_sctrl_sk_pane_g4

0x98f6,	// (0x0004a910) bg_sctrl_sk_pane_g5

0x98fe,	// (0x0004a918) bg_sctrl_sk_pane_g6

0x9906,	// (0x0004a920) bg_sctrl_sk_pane_g7

0x990e,	// (0x0004a928) bg_sctrl_sk_pane_g8

0x9916,	// (0x0004a930) bg_sctrl_sk_pane_g9

0x6d21,	// (0x00047d3b) popup_fep_china_hwr2_fs_candidate_window

0x6d2b,	// (0x00047d45) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6d2b,	// (0x00047d45) popup_fep_china_hwr2_fs_control_window

0xc177,	// (0x0004d191) sctrl_sk_top_pane_g2

0x0001,

0xfcd8,	// (0x00050cf2) sctrl_sk_top_pane_g

0xd728,	// (0x0004e742) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd728,	// (0x0004e742) aid_fep_china_hwr2_fs_cell

0xd73b,	// (0x0004e755) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd73b,	// (0x0004e755) bg_popup_fep_shadow_pane_cp4

0xd754,	// (0x0004e76e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd754,	// (0x0004e76e) bg_popup_fep_shadow_pane_cp5

0xd766,	// (0x0004e780) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd766,	// (0x0004e780) popup_fep_china_hwr2_fs_control_bar_grid

0xd776,	// (0x0004e790) popup_fep_china_hwr2_fs_control_funtion_grid

0xd77e,	// (0x0004e798) aid_fep_china_hwr2_fs_candi_cell

0xd2b3,	// (0x0004e2cd) bg_popup_fep_shadow_pane_cp6

0xd788,	// (0x0004e7a2) popup_fep_china_hwr2_fs_candidate_grid

0xd792,	// (0x0004e7ac) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd792,	// (0x0004e7ac) cell_fep_china_hwr2_fs_funtion_grid

0xbefc,	// (0x0004cf16) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7aa,	// (0x0004e7c4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7aa,	// (0x0004e7c4) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7b8,	// (0x0004e7d2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7b8,	// (0x0004e7d2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf3,	// (0x00050d0d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf3,	// (0x00050d0d) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7ce,	// (0x0004e7e8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7ce,	// (0x0004e7e8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7e3,	// (0x0004e7fd) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7e3,	// (0x0004e7fd) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf8,	// (0x00050d12) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf8,	// (0x00050d12) cell_fep_china_hwr2_fs_funtion_grid_t

0xd7ff,	// (0x0004e819) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd807,	// (0x0004e821) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd80f,	// (0x0004e829) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfd,	// (0x00050d17) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd817,	// (0x0004e831) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd817,	// (0x0004e831) cell_fep_china_hwr2_fs_candidate_grid

0xd836,	// (0x0004e850) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd83e,	// (0x0004e858) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbefc,	// (0x0004cf16) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbefc,	// (0x0004cf16) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1d,	// (0x00050b37) cell_fep_china_hwr2_fs_candidate_grid_g

0xd846,	// (0x0004e860) cell_fep_china_hwr2_fs_candidate_grid_t1

0x94c2,	// (0x0004a4dc) clock_nsta_pane_cp_24_ParamLimits

0x94c2,	// (0x0004a4dc) clock_nsta_pane_cp_24

0x9542,	// (0x0004a55c) indicator_nsta_pane_cp_24_ParamLimits

0x9542,	// (0x0004a55c) indicator_nsta_pane_cp_24

0xa5bf,	// (0x0004b5d9) heading_pane_g1

0x0001,

0xf8a9,	// (0x000508c3) heading_pane_g

0xb039,	// (0x0004c053) grid_sct_catagory_button_pane

0xb06b,	// (0x0004c085) scroll_pane_cp5_ParamLimits

0xbb63,	// (0x0004cb7d) button_value_adjust_pane_cp5_ParamLimits

0xbb63,	// (0x0004cb7d) button_value_adjust_pane_cp5

0xbc48,	// (0x0004cc62) form2_midp_time_pane_ParamLimits

0xd854,	// (0x0004e86e) cell_sct_catagory_button_pane_ParamLimits

0xd854,	// (0x0004e86e) cell_sct_catagory_button_pane

0xbec1,	// (0x0004cedb) bg_button_pane_cp01_ParamLimits

0xbec1,	// (0x0004cedb) bg_button_pane_cp01

0xbefc,	// (0x0004cf16) cell_sct_catagory_button_pane_g1

0x714d,	// (0x00048167) popup_tb_extension_window

0xd866,	// (0x0004e880) aid_size_cell_ext_ParamLimits

0xd866,	// (0x0004e880) aid_size_cell_ext

0x092c,	// (0x00041946) bg_tb_trans_pane_cp1_ParamLimits

0x092c,	// (0x00041946) bg_tb_trans_pane_cp1

0xd886,	// (0x0004e8a0) grid_tb_ext_pane_ParamLimits

0xd886,	// (0x0004e8a0) grid_tb_ext_pane

0xd8b4,	// (0x0004e8ce) cell_tb_ext_pane_ParamLimits

0xd8b4,	// (0x0004e8ce) cell_tb_ext_pane

0xd8cb,	// (0x0004e8e5) cell_tb_ext_pane_g1_ParamLimits

0xd8cb,	// (0x0004e8e5) cell_tb_ext_pane_g1

0xd8e8,	// (0x0004e902) cell_tb_ext_pane_t1

0x092c,	// (0x00041946) list_highlight_pane_cp11_ParamLimits

0x092c,	// (0x00041946) list_highlight_pane_cp11

0x5fca,	// (0x00046fe4) popup_uni_indicator_window_ParamLimits

0x5fca,	// (0x00046fe4) popup_uni_indicator_window

0x0e3b,	// (0x00041e55) bg_popup_sub_pane_cp14

0xd905,	// (0x0004e91f) list_uniindi_pane

0xd911,	// (0x0004e92b) uniindi_top_pane

0x092c,	// (0x00041946) bg_uniindi_top_pane

0xd932,	// (0x0004e94c) uniindi_top_pane_g1

0xd948,	// (0x0004e962) uniindi_top_pane_g2

0x0003,

0xfd04,	// (0x00050d1e) uniindi_top_pane_g

0xd972,	// (0x0004e98c) uniindi_top_pane_t1

0xd99e,	// (0x0004e9b8) list_single_uniindi_pane_ParamLimits

0xd99e,	// (0x0004e9b8) list_single_uniindi_pane

0xbefc,	// (0x0004cf16) bg_uniindi_top_pane_g1

0xd9b1,	// (0x0004e9cb) list_single_uniindi_pane_g1

0xd9c4,	// (0x0004e9de) list_single_uniindi_pane_t1

0xd2b3,	// (0x0004e2cd) control_bg_pane

0xd9e9,	// (0x0004ea03) bg_sctrl_sk_pane_cp1

0xd9f2,	// (0x0004ea0c) bg_sctrl_sk_pane_cp2

0xd9fb,	// (0x0004ea15) control_bg_pane_g1

0xda04,	// (0x0004ea1e) control_bg_pane_g2

0x0001,

0xfd0d,	// (0x00050d27) control_bg_pane_g

0xb99b,	// (0x0004c9b5) cell_indicator_nsta_pane_g1_ParamLimits

0xb9a9,	// (0x0004c9c3) cell_indicator_nsta_pane_g2_ParamLimits

0xfa81,	// (0x00050a9b) cell_indicator_nsta_pane_g_ParamLimits

0x59de,	// (0x000469f8) form2_midp_time_pane_t1_ParamLimits

0x0bb6,	// (0x00041bd0) main_idle_act4_pane_ParamLimits

0x0bb6,	// (0x00041bd0) main_idle_act4_pane

0x714d,	// (0x00048167) popup_tb_extension_window_ParamLimits

0xd8a6,	// (0x0004e8c0) tb_ext_find_pane_ParamLimits

0xd8a6,	// (0x0004e8c0) tb_ext_find_pane

0xda0d,	// (0x0004ea27) ai_gene_pane_1_cp1

0x91c1,	// (0x0004a1db) ai_gene_pane_2_cp1

0xda15,	// (0x0004ea2f) list_single_idle_plugin_calendar_pane

0xda1e,	// (0x0004ea38) list_single_idle_plugin_notification_pane

0xda27,	// (0x0004ea41) list_single_idle_plugin_player_pane

0xda30,	// (0x0004ea4a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda30,	// (0x0004ea4a) list_single_idle_plugin_shortcut_pane

0xda52,	// (0x0004ea6c) main_idle_act4_pane_t1

0xda64,	// (0x0004ea7e) main_idle_act4_pane_t2

0x0001,

0xfd12,	// (0x00050d2c) main_idle_act4_pane_t

0xda76,	// (0x0004ea90) middle_sk_idle_act4_pane_ParamLimits

0xda76,	// (0x0004ea90) middle_sk_idle_act4_pane

0xda8c,	// (0x0004eaa6) popup_clock_digital_analogue_window_cp2

0xdaa6,	// (0x0004eac0) shortcut_wheel_idle_act4_pane_ParamLimits

0xdaa6,	// (0x0004eac0) shortcut_wheel_idle_act4_pane

0xbefc,	// (0x0004cf16) shortcut_wheel_idle_act4_pane_g1

0xbefc,	// (0x0004cf16) shortcut_wheel_idle_act4_pane_g2

0xbefc,	// (0x0004cf16) shortcut_wheel_idle_act4_pane_g3

0xbefc,	// (0x0004cf16) shortcut_wheel_idle_act4_pane_g4

0xbefc,	// (0x0004cf16) shortcut_wheel_idle_act4_pane_g5

0xdaba,	// (0x0004ead4) shortcut_wheel_idle_act4_pane_g6

0xdac2,	// (0x0004eadc) shortcut_wheel_idle_act4_pane_g7

0xdaca,	// (0x0004eae4) shortcut_wheel_idle_act4_pane_g8

0xdad2,	// (0x0004eaec) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd17,	// (0x00050d31) shortcut_wheel_idle_act4_pane_g

0xc177,	// (0x0004d191) middle_sk_idle_act4_pane_g1_ParamLimits

0xc177,	// (0x0004d191) middle_sk_idle_act4_pane_g1

0xdb36,	// (0x0004eb50) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb36,	// (0x0004eb50) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3a,	// (0x00050d54) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3a,	// (0x00050d54) middle_sk_idle_act4_pane_g

0xdb42,	// (0x0004eb5c) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb42,	// (0x0004eb5c) middle_sk_idle_act4_pane_t1

0xdb5f,	// (0x0004eb79) grid_ai_shortcut_pane_ParamLimits

0xdb5f,	// (0x0004eb79) grid_ai_shortcut_pane

0xdb78,	// (0x0004eb92) list_highlight_pane_cp16_ParamLimits

0xdb78,	// (0x0004eb92) list_highlight_pane_cp16

0xdb85,	// (0x0004eb9f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb85,	// (0x0004eb9f) list_single_idle_plugin_shortcut_pane_g1

0xdb91,	// (0x0004ebab) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb91,	// (0x0004ebab) list_single_idle_plugin_shortcut_pane_g2

0xdbab,	// (0x0004ebc5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbab,	// (0x0004ebc5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3f,	// (0x00050d59) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3f,	// (0x00050d59) list_single_idle_plugin_shortcut_pane_g

0xdbbe,	// (0x0004ebd8) cell_ai_shortcut_pane_ParamLimits

0xdbbe,	// (0x0004ebd8) cell_ai_shortcut_pane

0xdbe1,	// (0x0004ebfb) cell_ai_shortcut_pane_g1_ParamLimits

0xdbe1,	// (0x0004ebfb) cell_ai_shortcut_pane_g1

0xda0d,	// (0x0004ea27) ai_gene_pane_1_cp2

0xdc03,	// (0x0004ec1d) ai_gene_pane_2_cp2

0xdc0b,	// (0x0004ec25) list_highlight_pane_cp15

0xdc14,	// (0x0004ec2e) list_single_idle_plugin_calendar_pane_g1

0xdc0b,	// (0x0004ec25) list_highlight_pane_cp17

0xdc1c,	// (0x0004ec36) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc24,	// (0x0004ec3e) list_single_idle_plugin_player_pane_g1

0xb2a0,	// (0x0004c2ba) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd46,	// (0x00050d60) list_single_idle_plugin_player_pane_g

0xdc2c,	// (0x0004ec46) list_single_idle_plugin_player_pane_t1

0xdc3a,	// (0x0004ec54) list_single_idle_plugin_player_pane_t2

0xdc48,	// (0x0004ec62) list_single_idle_plugin_player_pane_t3

0xdc56,	// (0x0004ec70) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4b,	// (0x00050d65) list_single_idle_plugin_player_pane_t

0xdc64,	// (0x0004ec7e) wait_bar_pane_cp15

0xdc6c,	// (0x0004ec86) grid_ai_notification_pane

0xb2a0,	// (0x0004c2ba) list_single_idle_plugin_notification_pane_g1

0xdc75,	// (0x0004ec8f) cell_ai_notification_pane_ParamLimits

0xdc75,	// (0x0004ec8f) cell_ai_notification_pane

0xdc82,	// (0x0004ec9c) cell_ai_notification_pane_g1

0xdc8a,	// (0x0004eca4) cell_ai_notification_pane_t1

0xdc98,	// (0x0004ecb2) tb_ext_find_button_pane

0xdca0,	// (0x0004ecba) tb_ext_find_pane_g1

0xdca8,	// (0x0004ecc2) tb_ext_find_pane_t1

0x8a4a,	// (0x00049a64) tb_ext_find_button_pane_g1

0xdcb6,	// (0x0004ecd0) tb_ext_find_button_pane_g2

0x0001,

0xfd54,	// (0x00050d6e) tb_ext_find_button_pane_g

0xda52,	// (0x0004ea6c) main_idle_act4_pane_t1_ParamLimits

0xda64,	// (0x0004ea7e) main_idle_act4_pane_t2_ParamLimits

0xfd12,	// (0x00050d2c) main_idle_act4_pane_t_ParamLimits

0xda8c,	// (0x0004eaa6) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda9a,	// (0x0004eab4) sat_plugin_idle_act4_pane_ParamLimits

0xda9a,	// (0x0004eab4) sat_plugin_idle_act4_pane

0xdcbf,	// (0x0004ecd9) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcbf,	// (0x0004ecd9) sat_plugin_idle_act4_pane_t1

0xdcd2,	// (0x0004ecec) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcd2,	// (0x0004ecec) sat_plugin_idle_act4_pane_t2

0xdce5,	// (0x0004ecff) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdce5,	// (0x0004ecff) sat_plugin_idle_act4_pane_t3

0xdcf8,	// (0x0004ed12) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdcf8,	// (0x0004ed12) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd59,	// (0x00050d73) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd59,	// (0x00050d73) sat_plugin_idle_act4_pane_t

0x5efb,	// (0x00046f15) popup_battery_window_ParamLimits

0x5efb,	// (0x00046f15) popup_battery_window

0x092c,	// (0x00041946) bg_popup_sub_pane_cp25_ParamLimits

0x092c,	// (0x00041946) bg_popup_sub_pane_cp25

0xdd0b,	// (0x0004ed25) popup_battery_window_g1_ParamLimits

0xdd0b,	// (0x0004ed25) popup_battery_window_g1

0xdd17,	// (0x0004ed31) popup_battery_window_t1_ParamLimits

0xdd17,	// (0x0004ed31) popup_battery_window_t1

0xdd29,	// (0x0004ed43) popup_battery_window_t2_ParamLimits

0xdd29,	// (0x0004ed43) popup_battery_window_t2

0x0001,

0xfd62,	// (0x00050d7c) popup_battery_window_t_ParamLimits

0xfd62,	// (0x00050d7c) popup_battery_window_t

0x908b,	// (0x0004a0a5) midp_canvas_pane_ParamLimits

0x9103,	// (0x0004a11d) midp_keypad_pane_ParamLimits

0x9103,	// (0x0004a11d) midp_keypad_pane

0x93a6,	// (0x0004a3c0) main_midp_pane_ParamLimits

0xba16,	// (0x0004ca30) signal_pane_g2_cp_ParamLimits

0xdd46,	// (0x0004ed60) aid_size_cell_midp_keypad_ParamLimits

0xdd46,	// (0x0004ed60) aid_size_cell_midp_keypad

0xdd60,	// (0x0004ed7a) midp_keyp_game_grid_pane_ParamLimits

0xdd60,	// (0x0004ed7a) midp_keyp_game_grid_pane

0xdd80,	// (0x0004ed9a) midp_keyp_rocker_pane_ParamLimits

0xdd80,	// (0x0004ed9a) midp_keyp_rocker_pane

0xddaf,	// (0x0004edc9) midp_keyp_sk_left_pane_ParamLimits

0xddaf,	// (0x0004edc9) midp_keyp_sk_left_pane

0xde0b,	// (0x0004ee25) midp_keyp_sk_right_pane_ParamLimits

0xde0b,	// (0x0004ee25) midp_keyp_sk_right_pane

0xd2b3,	// (0x0004e2cd) bg_button_pane_cp03

0xde67,	// (0x0004ee81) midp_keyp_sk_left_pane_g1

0xd2b3,	// (0x0004e2cd) bg_button_pane_cp04

0xde67,	// (0x0004ee81) midp_keyp_sk_right_pane_g1

0xbefc,	// (0x0004cf16) midp_keyp_rocker_pane_g1

0xde6f,	// (0x0004ee89) keyp_game_cell_pane_ParamLimits

0xde6f,	// (0x0004ee89) keyp_game_cell_pane

0xd2b3,	// (0x0004e2cd) bg_button_pane_cp02

0xde82,	// (0x0004ee9c) keyp_game_cell_pane_g1

0x5f45,	// (0x00046f5f) popup_fep_vkb2_window_ParamLimits

0x5f45,	// (0x00046f5f) popup_fep_vkb2_window

0x7dd6,	// (0x00048df0) aid_size_cell_vkb2_ParamLimits

0x7dd6,	// (0x00048df0) aid_size_cell_vkb2

0x7e22,	// (0x00048e3c) popup_fep_vkb2_window_g1_ParamLimits

0x7e22,	// (0x00048e3c) popup_fep_vkb2_window_g1

0x7e6a,	// (0x00048e84) vkb2_area_bottom_pane_ParamLimits

0x7e6a,	// (0x00048e84) vkb2_area_bottom_pane

0x7ebe,	// (0x00048ed8) vkb2_area_keypad_pane_ParamLimits

0x7ebe,	// (0x00048ed8) vkb2_area_keypad_pane

0x7f04,	// (0x00048f1e) vkb2_area_top_pane_ParamLimits

0x7f04,	// (0x00048f1e) vkb2_area_top_pane

0x7f84,	// (0x00048f9e) vkb2_top_entry_pane_ParamLimits

0x7f84,	// (0x00048f9e) vkb2_top_entry_pane

0x7fae,	// (0x00048fc8) vkb2_top_grid_left_pane_ParamLimits

0x7fae,	// (0x00048fc8) vkb2_top_grid_left_pane

0x7fcd,	// (0x00048fe7) vkb2_top_grid_right_pane_ParamLimits

0x7fcd,	// (0x00048fe7) vkb2_top_grid_right_pane

0x7fec,	// (0x00049006) vkb2_cell_keypad_pane_ParamLimits

0x7fec,	// (0x00049006) vkb2_cell_keypad_pane

0x80bd,	// (0x000490d7) vkb2_area_bottom_grid_pane_ParamLimits

0x80bd,	// (0x000490d7) vkb2_area_bottom_grid_pane

0x80e3,	// (0x000490fd) vkb2_area_bottom_pane_g1_ParamLimits

0x80e3,	// (0x000490fd) vkb2_area_bottom_pane_g1

0x8107,	// (0x00049121) vkb2_area_bottom_pane_g2_ParamLimits

0x8107,	// (0x00049121) vkb2_area_bottom_pane_g2

0x8135,	// (0x0004914f) vkb2_area_bottom_pane_g3_ParamLimits

0x8135,	// (0x0004914f) vkb2_area_bottom_pane_g3

0x0002,

0xfd67,	// (0x00050d81) vkb2_area_bottom_pane_g_ParamLimits

0xfd67,	// (0x00050d81) vkb2_area_bottom_pane_g

0x8196,	// (0x000491b0) vkb2_top_cell_left_pane_ParamLimits

0x8196,	// (0x000491b0) vkb2_top_cell_left_pane

0xde93,	// (0x0004eead) vkb2_top_entry_pane_g1_ParamLimits

0xde93,	// (0x0004eead) vkb2_top_entry_pane_g1

0xdea1,	// (0x0004eebb) vkb2_top_entry_pane_t1_ParamLimits

0xdea1,	// (0x0004eebb) vkb2_top_entry_pane_t1

0xded3,	// (0x0004eeed) vkb2_top_entry_pane_t2_ParamLimits

0xded3,	// (0x0004eeed) vkb2_top_entry_pane_t2

0xdf05,	// (0x0004ef1f) vkb2_top_entry_pane_t3_ParamLimits

0xdf05,	// (0x0004ef1f) vkb2_top_entry_pane_t3

0x0002,

0xfd6e,	// (0x00050d88) vkb2_top_entry_pane_t_ParamLimits

0xfd6e,	// (0x00050d88) vkb2_top_entry_pane_t

0x81e3,	// (0x000491fd) vkb2_top_grid_right_pane_g1_ParamLimits

0x81e3,	// (0x000491fd) vkb2_top_grid_right_pane_g1

0x81f9,	// (0x00049213) vkb2_top_grid_right_pane_g2_ParamLimits

0x81f9,	// (0x00049213) vkb2_top_grid_right_pane_g2

0x8211,	// (0x0004922b) vkb2_top_grid_right_pane_g3_ParamLimits

0x8211,	// (0x0004922b) vkb2_top_grid_right_pane_g3

0x8229,	// (0x00049243) vkb2_top_grid_right_pane_g4_ParamLimits

0x8229,	// (0x00049243) vkb2_top_grid_right_pane_g4

0x0003,

0xfd75,	// (0x00050d8f) vkb2_top_grid_right_pane_g_ParamLimits

0xfd75,	// (0x00050d8f) vkb2_top_grid_right_pane_g

0x823f,	// (0x00049259) vkb2_top_cell_left_pane_g1

0x8256,	// (0x00049270) vkb2_cell_keypad_pane_g1_ParamLimits

0x8256,	// (0x00049270) vkb2_cell_keypad_pane_g1

0xdf29,	// (0x0004ef43) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf29,	// (0x0004ef43) vkb2_cell_keypad_pane_t1

0x8264,	// (0x0004927e) vkb2_cell_bottom_grid_pane_ParamLimits

0x8264,	// (0x0004927e) vkb2_cell_bottom_grid_pane

0x829d,	// (0x000492b7) vkb2_cell_bottom_grid_pane_g1

0xdada,	// (0x0004eaf4) aid_call2_pane_cp02

0xdae2,	// (0x0004eafc) aid_call_pane_cp02

0xdaea,	// (0x0004eb04) clock_digital_number_pane_cp10

0xdaf2,	// (0x0004eb0c) clock_digital_number_pane_cp11

0xdafa,	// (0x0004eb14) clock_digital_number_pane_cp12

0xdb02,	// (0x0004eb1c) clock_digital_number_pane_cp13

0xdb0a,	// (0x0004eb24) clock_digital_separator_pane_cp10

0x8a4a,	// (0x00049a64) popup_clock_digital_analogue_window_cp2_g1

0x8a4a,	// (0x00049a64) popup_clock_digital_analogue_window_cp2_g2

0xdb12,	// (0x0004eb2c) popup_clock_digital_analogue_window_cp2_g3

0x8a4a,	// (0x00049a64) popup_clock_digital_analogue_window_cp2_g4

0xdb12,	// (0x0004eb2c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2a,	// (0x00050d44) popup_clock_digital_analogue_window_cp2_g

0xdb1a,	// (0x0004eb34) popup_clock_digital_analogue_window_cp2_t1

0xdb28,	// (0x0004eb42) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd35,	// (0x00050d4f) popup_clock_digital_analogue_window_cp2_t

0xbefc,	// (0x0004cf16) clock_digital_number_pane_cp10_g1

0xbefc,	// (0x0004cf16) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1d,	// (0x00050b37) clock_digital_number_pane_cp10_g

0xbefc,	// (0x0004cf16) clock_digital_separator_pane_cp10_g1

0xbefc,	// (0x0004cf16) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1d,	// (0x00050b37) clock_digital_separator_pane_cp10_g

0xd954,	// (0x0004e96e) uniindi_top_pane_g3

0xd965,	// (0x0004e97f) uniindi_top_pane_g4

0x8077,	// (0x00049091) vkb2_row_keypad_pane_ParamLimits

0x8077,	// (0x00049091) vkb2_row_keypad_pane

0x82b9,	// (0x000492d3) vkb2_cell_t_keypad_pane_ParamLimits

0x82b9,	// (0x000492d3) vkb2_cell_t_keypad_pane

0x82c9,	// (0x000492e3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x82c9,	// (0x000492e3) vkb2_cell_t_keypad_pane_cp08

0x82de,	// (0x000492f8) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x82de,	// (0x000492f8) vkb2_cell_t_keypad_pane_cp09

0x82f2,	// (0x0004930c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x82f2,	// (0x0004930c) vkb2_cell_t_keypad_pane_cp01

0x8303,	// (0x0004931d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8303,	// (0x0004931d) vkb2_cell_t_keypad_pane_cp02

0x8314,	// (0x0004932e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8314,	// (0x0004932e) vkb2_cell_t_keypad_pane_cp03

0x8325,	// (0x0004933f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8325,	// (0x0004933f) vkb2_cell_t_keypad_pane_cp04

0x8336,	// (0x00049350) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8336,	// (0x00049350) vkb2_cell_t_keypad_pane_cp05

0x8347,	// (0x00049361) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8347,	// (0x00049361) vkb2_cell_t_keypad_pane_cp06

0x835a,	// (0x00049374) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x835a,	// (0x00049374) vkb2_cell_t_keypad_pane_cp07

0x836f,	// (0x00049389) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x836f,	// (0x00049389) vkb2_cell_t_keypad_pane_cp10

0xc177,	// (0x0004d191) vkb2_cell_t_keypad_pane_g1

0xdf40,	// (0x0004ef5a) vkb2_cell_t_keypad_pane_t1

0xd2b3,	// (0x0004e2cd) popup_grid_graphic2_window

0xdf52,	// (0x0004ef6c) aid_size_cell_graphic2_ParamLimits

0xdf52,	// (0x0004ef6c) aid_size_cell_graphic2

0xdf8a,	// (0x0004efa4) bg_popup_window_pane_cp21_ParamLimits

0xdf8a,	// (0x0004efa4) bg_popup_window_pane_cp21

0xdf98,	// (0x0004efb2) graphic2_pages_pane_ParamLimits

0xdf98,	// (0x0004efb2) graphic2_pages_pane

0xdfde,	// (0x0004eff8) grid_graphic2_control_pane_ParamLimits

0xdfde,	// (0x0004eff8) grid_graphic2_control_pane

0xe01c,	// (0x0004f036) grid_graphic2_pane_ParamLimits

0xe01c,	// (0x0004f036) grid_graphic2_pane

0xe092,	// (0x0004f0ac) cell_graphic2_pane

0xd2b3,	// (0x0004e2cd) main_comp_mode_pane

0xd10b,	// (0x0004e125) list_ai3_gene_pane_ParamLimits

0xd585,	// (0x0004e59f) bg_popup_window_pane_cp19_ParamLimits

0xd591,	// (0x0004e5ab) bg_touch_area_indi_pane_ParamLimits

0xd591,	// (0x0004e5ab) bg_touch_area_indi_pane

0xd5a7,	// (0x0004e5c1) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5a7,	// (0x0004e5c1) bg_touch_area_indi_pane_cp01

0xd5bd,	// (0x0004e5d7) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5bd,	// (0x0004e5d7) bg_touch_area_indi_pane_cp02

0xd5d7,	// (0x0004e5f1) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5d7,	// (0x0004e5f1) bg_touch_area_indi_pane_cp03

0xd5f1,	// (0x0004e60b) popup_slider_window_g1_ParamLimits

0xd60d,	// (0x0004e627) popup_slider_window_g2_ParamLimits

0xd629,	// (0x0004e643) popup_slider_window_g3_ParamLimits

0xfcbf,	// (0x00050cd9) popup_slider_window_g_ParamLimits

0xd68f,	// (0x0004e6a9) popup_slider_window_t1_ParamLimits

0xd703,	// (0x0004e71d) small_volume_slider_vertical_pane_ParamLimits

0xe092,	// (0x0004f0ac) cell_graphic2_pane_ParamLimits

0xe0e6,	// (0x0004f100) bg_button_pane_cp10_ParamLimits

0xe0e6,	// (0x0004f100) bg_button_pane_cp10

0xe0fb,	// (0x0004f115) bg_button_pane_cp11_ParamLimits

0xe0fb,	// (0x0004f115) bg_button_pane_cp11

0xe110,	// (0x0004f12a) graphic2_pages_pane_g1_ParamLimits

0xe110,	// (0x0004f12a) graphic2_pages_pane_g1

0xe12b,	// (0x0004f145) graphic2_pages_pane_g2_ParamLimits

0xe12b,	// (0x0004f145) graphic2_pages_pane_g2

0x0001,

0xfd83,	// (0x00050d9d) graphic2_pages_pane_g_ParamLimits

0xfd83,	// (0x00050d9d) graphic2_pages_pane_g

0xe143,	// (0x0004f15d) graphic2_pages_pane_t1_ParamLimits

0xe143,	// (0x0004f15d) graphic2_pages_pane_t1

0xe159,	// (0x0004f173) cell_graphic2_control_pane_ParamLimits

0xe159,	// (0x0004f173) cell_graphic2_control_pane

0xe179,	// (0x0004f193) cell_graphic2_pane_g1_ParamLimits

0xe179,	// (0x0004f193) cell_graphic2_pane_g1

0xe186,	// (0x0004f1a0) cell_graphic2_pane_g2_ParamLimits

0xe186,	// (0x0004f1a0) cell_graphic2_pane_g2

0xe193,	// (0x0004f1ad) cell_graphic2_pane_g3_ParamLimits

0xe193,	// (0x0004f1ad) cell_graphic2_pane_g3

0xe1a0,	// (0x0004f1ba) cell_graphic2_pane_g4_ParamLimits

0xe1a0,	// (0x0004f1ba) cell_graphic2_pane_g4

0xe1ad,	// (0x0004f1c7) cell_graphic2_pane_g5_ParamLimits

0xe1ad,	// (0x0004f1c7) cell_graphic2_pane_g5

0x0004,

0xfd88,	// (0x00050da2) cell_graphic2_pane_g_ParamLimits

0xfd88,	// (0x00050da2) cell_graphic2_pane_g

0xe1c5,	// (0x0004f1df) cell_graphic2_pane_t1_ParamLimits

0xe1c5,	// (0x0004f1df) cell_graphic2_pane_t1

0x994a,	// (0x0004a964) grid_highlight_pane_cp11_ParamLimits

0x994a,	// (0x0004a964) grid_highlight_pane_cp11

0x092c,	// (0x00041946) bg_button_pane_cp05

0xe1fb,	// (0x0004f215) cell_graphic2_control_pane_g1

0xbefc,	// (0x0004cf16) bg_touch_area_indi_pane_g1

0xe223,	// (0x0004f23d) aid_cmod_rocker_key_size

0xe22d,	// (0x0004f247) aid_cmode_itu_key_size

0xe237,	// (0x0004f251) main_cmode_video_pane

0xe241,	// (0x0004f25b) main_comp_mode_itu_pane

0xe24d,	// (0x0004f267) main_comp_mode_rocker_pane

0xe259,	// (0x0004f273) cell_cmode_rocker_pane_ParamLimits

0xe259,	// (0x0004f273) cell_cmode_rocker_pane

0xe26d,	// (0x0004f287) cell_cmode_itu_pane_ParamLimits

0xe26d,	// (0x0004f287) cell_cmode_itu_pane

0x0e3b,	// (0x00041e55) bg_button_pane_cp06_ParamLimits

0x0e3b,	// (0x00041e55) bg_button_pane_cp06

0xc177,	// (0x0004d191) cell_cmode_rocker_pane_g1_ParamLimits

0xc177,	// (0x0004d191) cell_cmode_rocker_pane_g1

0xd7aa,	// (0x0004e7c4) cell_cmode_rocker_pane_g2_ParamLimits

0xd7aa,	// (0x0004e7c4) cell_cmode_rocker_pane_g2

0x0001,

0xfd98,	// (0x00050db2) cell_cmode_rocker_pane_g_ParamLimits

0xfd98,	// (0x00050db2) cell_cmode_rocker_pane_g

0xd2b3,	// (0x0004e2cd) bg_button_pane_cp07

0xe284,	// (0x0004f29e) cell_cmode_itu_pane_g1

0xe28d,	// (0x0004f2a7) cell_cmode_itu_pane_t1

0xe29b,	// (0x0004f2b5) cell_cmode_itu_pane_t2

0x0001,

0xfd9d,	// (0x00050db7) cell_cmode_itu_pane_t

0xd9d9,	// (0x0004e9f3) aid_touch_ctrl_left

0xd9e1,	// (0x0004e9fb) aid_touch_ctrl_right

0xd2b3,	// (0x0004e2cd) compa_mode_pane

0xe2a9,	// (0x0004f2c3) aid_cmod_rocker_key_size_cp

0xe2b3,	// (0x0004f2cd) aid_cmode_itu_key_size_cp

0xe2bd,	// (0x0004f2d7) compa_mode_pane_g1

0xe2c5,	// (0x0004f2df) compa_mode_pane_g2

0xe2cd,	// (0x0004f2e7) compa_mode_pane_g3

0x0002,

0xfda2,	// (0x00050dbc) compa_mode_pane_g

0xe2d5,	// (0x0004f2ef) main_comp_mode_itu_pane_cp

0xe2dd,	// (0x0004f2f7) main_comp_mode_rocker_pane_cp

0xe2e5,	// (0x0004f2ff) cell_cmode_itu_pane_cp_ParamLimits

0xe2e5,	// (0x0004f2ff) cell_cmode_itu_pane_cp

0xe2fa,	// (0x0004f314) cell_cmode_rocker_pane_cp_ParamLimits

0xe2fa,	// (0x0004f314) cell_cmode_rocker_pane_cp

0x0e3b,	// (0x00041e55) bg_button_pane_cp06_cp_ParamLimits

0x0e3b,	// (0x00041e55) bg_button_pane_cp06_cp

0xc177,	// (0x0004d191) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc177,	// (0x0004d191) cell_cmode_rocker_pane_g1_cp

0xbefc,	// (0x0004cf16) cell_cmode_rocker_pane_g2_cp

0xd2b3,	// (0x0004e2cd) bg_button_pane_cp07_cp

0xe30c,	// (0x0004f326) cell_cmode_itu_pane_g1_cp

0xe315,	// (0x0004f32f) cell_cmode_itu_pane_t1_cp

0xe315,	// (0x0004f32f) cell_cmode_itu_pane_t2_cp

0xae11,	// (0x0004be2b) settings_code_pane_cp2

0xd315,	// (0x0004e32f) bg_popup_window_pane_cp3_ParamLimits

0x0b40,	// (0x00041b5a) heading_pane_cp3_ParamLimits

0x0b4f,	// (0x00041b69) listscroll_popup_graphic_pane_ParamLimits

0x785a,	// (0x00048874) fep_hwr_aid_pane_ParamLimits

0x7d4b,	// (0x00048d65) aid_touch_sctrl_top_ParamLimits

0x7d58,	// (0x00048d72) sctrl_sk_top_pane_g1_ParamLimits

0xc177,	// (0x0004d191) sctrl_sk_top_pane_g2_ParamLimits

0xfcd8,	// (0x00050cf2) sctrl_sk_top_pane_g_ParamLimits

0x7d65,	// (0x00048d7f) sctrl_sk_top_pane_t1_ParamLimits

0x7d4b,	// (0x00048d65) aid_touch_sctrl_bottom_ParamLimits

0x7d65,	// (0x00048d7f) sctrl_sk_bottom_pane_t1_ParamLimits

0xd91e,	// (0x0004e938) aid_area_touch_clock

0x7f4a,	// (0x00048f64) aid_vkb2_area_top_pane_cell_ParamLimits

0x7f4a,	// (0x00048f64) aid_vkb2_area_top_pane_cell

0x8099,	// (0x000490b3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8099,	// (0x000490b3) aid_vkb2_area_bottom_pane_cell

0xde8b,	// (0x0004eea5) popup_char_count_window

0xe323,	// (0x0004f33d) popup_char_count_window_g1

0xe32c,	// (0x0004f346) popup_char_count_window_g2

0xe335,	// (0x0004f34f) popup_char_count_window_g3

0x0002,

0xfda9,	// (0x00050dc3) popup_char_count_window_g

0xe33e,	// (0x0004f358) popup_char_count_window_t1

0x7e00,	// (0x00048e1a) popup_fep_char_preview_window_ParamLimits

0x7e00,	// (0x00048e1a) popup_fep_char_preview_window

0x7f68,	// (0x00048f82) vkb2_top_candi_pane_ParamLimits

0x7f68,	// (0x00048f82) vkb2_top_candi_pane

0xe34c,	// (0x0004f366) cell_vkb2_top_candi_pane_ParamLimits

0xe34c,	// (0x0004f366) cell_vkb2_top_candi_pane

0x9f3c,	// (0x0004af56) bg_popup_fep_char_preview_window_ParamLimits

0x9f3c,	// (0x0004af56) bg_popup_fep_char_preview_window

0x8384,	// (0x0004939e) popup_fep_char_preview_window_t1_ParamLimits

0x8384,	// (0x0004939e) popup_fep_char_preview_window_t1

0xe39a,	// (0x0004f3b4) bg_popup_fep_char_preview_window_g1

0xe3a2,	// (0x0004f3bc) bg_popup_fep_char_preview_window_g2

0xe3aa,	// (0x0004f3c4) bg_popup_fep_char_preview_window_g3

0xe3b2,	// (0x0004f3cc) bg_popup_fep_char_preview_window_g4

0xe3ba,	// (0x0004f3d4) bg_popup_fep_char_preview_window_g5

0xe3c2,	// (0x0004f3dc) bg_popup_fep_char_preview_window_g6

0xe3ca,	// (0x0004f3e4) bg_popup_fep_char_preview_window_g7

0xe3d2,	// (0x0004f3ec) bg_popup_fep_char_preview_window_g8

0xe3da,	// (0x0004f3f4) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb0,	// (0x00050dca) bg_popup_fep_char_preview_window_g

0xc177,	// (0x0004d191) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc177,	// (0x0004d191) cell_vkb2_top_candi_pane_g1

0xc4b8,	// (0x0004d4d2) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc4b8,	// (0x0004d4d2) cell_vkb2_top_candi_pane_g2

0xc4d9,	// (0x0004d4f3) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc4d9,	// (0x0004d4f3) cell_vkb2_top_candi_pane_g3

0x83c6,	// (0x000493e0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x83c6,	// (0x000493e0) cell_vkb2_top_candi_pane_g4

0xe3e2,	// (0x0004f3fc) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3e2,	// (0x0004f3fc) cell_vkb2_top_candi_pane_g5

0xd7aa,	// (0x0004e7c4) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7aa,	// (0x0004e7c4) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc5,	// (0x00050ddf) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc5,	// (0x00050ddf) cell_vkb2_top_candi_pane_g

0x83e7,	// (0x00049401) cell_vkb2_top_candi_pane_t1

0x75d9,	// (0x000485f3) aid_size_touch_slider_mark_ParamLimits

0x75d9,	// (0x000485f3) aid_size_touch_slider_mark

0xdfce,	// (0x0004efe8) grid_graphic2_catg_pane_ParamLimits

0xdfce,	// (0x0004efe8) grid_graphic2_catg_pane

0xe06c,	// (0x0004f086) popup_grid_graphic2_window_t1_ParamLimits

0xe06c,	// (0x0004f086) popup_grid_graphic2_window_t1

0xe07e,	// (0x0004f098) popup_grid_graphic2_window_t2_ParamLimits

0xe07e,	// (0x0004f098) popup_grid_graphic2_window_t2

0x0001,

0xfd7e,	// (0x00050d98) popup_grid_graphic2_window_t_ParamLimits

0xfd7e,	// (0x00050d98) popup_grid_graphic2_window_t

0x092c,	// (0x00041946) bg_button_pane_cp05_ParamLimits

0xe1fb,	// (0x0004f215) cell_graphic2_control_pane_g1_ParamLimits

0xe403,	// (0x0004f41d) cell_graphic2_catg_pane_ParamLimits

0xe403,	// (0x0004f41d) cell_graphic2_catg_pane

0xd2b3,	// (0x0004e2cd) bg_button_pane_cp12

0xe415,	// (0x0004f42f) cell_graphic2_catg_pane_g1

0xd8e8,	// (0x0004e902) cell_tb_ext_pane_t1_ParamLimits

0x81b6,	// (0x000491d0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x81b6,	// (0x000491d0) vkb2_top_cell_right_narrow_pane

0x81ce,	// (0x000491e8) vkb2_top_cell_right_wide_pane_ParamLimits

0x81ce,	// (0x000491e8) vkb2_top_cell_right_wide_pane

0x784c,	// (0x00048866) bg_vkb2_func_pane_ParamLimits

0x784c,	// (0x00048866) bg_vkb2_func_pane

0x823f,	// (0x00049259) vkb2_top_cell_left_pane_g1_ParamLimits

0x784c,	// (0x00048866) bg_vkb2_fuc_pane_cp03_ParamLimits

0x784c,	// (0x00048866) bg_vkb2_fuc_pane_cp03

0x829d,	// (0x000492b7) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x98de,	// (0x0004a8f8) bg_vkb2_func_pane_g1

0x98e6,	// (0x0004a900) bg_vkb2_func_pane_g2

0x98f6,	// (0x0004a910) bg_vkb2_func_pane_g3

0x98ee,	// (0x0004a908) bg_vkb2_func_pane_g4

0x98fe,	// (0x0004a918) bg_vkb2_func_pane_g5

0x9906,	// (0x0004a920) bg_vkb2_func_pane_g6

0x990e,	// (0x0004a928) bg_vkb2_func_pane_g7

0x9916,	// (0x0004a930) bg_vkb2_func_pane_g8

0x98d6,	// (0x0004a8f0) bg_vkb2_func_pane_g9

0x0008,

0xfdd2,	// (0x00050dec) bg_vkb2_func_pane_g

0x784c,	// (0x00048866) bg_vkb2_fuc_pane_cp01_ParamLimits

0x784c,	// (0x00048866) bg_vkb2_fuc_pane_cp01

0x823f,	// (0x00049259) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x823f,	// (0x00049259) vkb2_top_cell_right_wide_pane_g1

0x784c,	// (0x00048866) bg_vkb2_fuc_pane_cp02_ParamLimits

0x784c,	// (0x00048866) bg_vkb2_fuc_pane_cp02

0x8405,	// (0x0004941f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8405,	// (0x0004941f) vkb2_top_cell_right_narrow_pane_g1

0xd4ff,	// (0x0004e519) aid_touch_area_decrease_ParamLimits

0xd4ff,	// (0x0004e519) aid_touch_area_decrease

0xd523,	// (0x0004e53d) aid_touch_area_increase_ParamLimits

0xd523,	// (0x0004e53d) aid_touch_area_increase

0xd53b,	// (0x0004e555) aid_touch_area_mute_ParamLimits

0xd53b,	// (0x0004e555) aid_touch_area_mute

0xd557,	// (0x0004e571) aid_touch_area_slider_ParamLimits

0xd557,	// (0x0004e571) aid_touch_area_slider

0xd645,	// (0x0004e65f) popup_slider_window_g4_ParamLimits

0xd645,	// (0x0004e65f) popup_slider_window_g4

0xd65d,	// (0x0004e677) popup_slider_window_g5_ParamLimits

0xd65d,	// (0x0004e677) popup_slider_window_g5

0xd67f,	// (0x0004e699) popup_slider_window_g6_ParamLimits

0xd67f,	// (0x0004e699) popup_slider_window_g6

0xd6bd,	// (0x0004e6d7) popup_slider_window_t2_ParamLimits

0xd6bd,	// (0x0004e6d7) popup_slider_window_t2

0x0001,

0xfccc,	// (0x00050ce6) popup_slider_window_t_ParamLimits

0xfccc,	// (0x00050ce6) popup_slider_window_t

0xd6d5,	// (0x0004e6ef) slider_pane_ParamLimits

0xd6d5,	// (0x0004e6ef) slider_pane

0xe41e,	// (0x0004f438) slider_pane_g1_ParamLimits

0xe41e,	// (0x0004f438) slider_pane_g1

0xe432,	// (0x0004f44c) slider_pane_g2_ParamLimits

0xe432,	// (0x0004f44c) slider_pane_g2

0xe448,	// (0x0004f462) slider_pane_g3_ParamLimits

0xe448,	// (0x0004f462) slider_pane_g3

0x0003,

0xfde5,	// (0x00050dff) slider_pane_g_ParamLimits

0xfde5,	// (0x00050dff) slider_pane_g

0x71af,	// (0x000481c9) popup_tb_float_extension_window_ParamLimits

0x71af,	// (0x000481c9) popup_tb_float_extension_window

0xe474,	// (0x0004f48e) aid_size_cell_tb_float_ext

0xd2b3,	// (0x0004e2cd) bg_popup_sub_window_cp28

0xe480,	// (0x0004f49a) grid_tb_float_ext_pane

0xe48c,	// (0x0004f4a6) cell_tb_float_ext_pane_ParamLimits

0xe48c,	// (0x0004f4a6) cell_tb_float_ext_pane

0xe4a8,	// (0x0004f4c2) cell_tb_float_ext_pane_g1

0xe4b1,	// (0x0004f4cb) grid_highlight_pane_cp12

0x7993,	// (0x000489ad) cell_last_hwr_side_pane_ParamLimits

0x7993,	// (0x000489ad) cell_last_hwr_side_pane

0xbefc,	// (0x0004cf16) cell_last_hwr_side_pane_g1

0xe4ba,	// (0x0004f4d4) cell_last_hwr_side_pane_g2

0x0001,

0xfdee,	// (0x00050e08) cell_last_hwr_side_pane_g

0x8165,	// (0x0004917f) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8165,	// (0x0004917f) vkb2_area_bottom_space_btn_pane

0xc177,	// (0x0004d191) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf40,	// (0x0004ef5a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x83e7,	// (0x00049401) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8421,	// (0x0004943b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8421,	// (0x0004943b) vkb2_area_bottom_space_btn_pane_g1

0x845b,	// (0x00049475) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x845b,	// (0x00049475) vkb2_area_bottom_space_btn_pane_g2

0x8491,	// (0x000494ab) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8491,	// (0x000494ab) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf3,	// (0x00050e0d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf3,	// (0x00050e0d) vkb2_area_bottom_space_btn_pane_g

0x7903,	// (0x0004891d) cel_fep_hwr_func_pane_ParamLimits

0x7903,	// (0x0004891d) cel_fep_hwr_func_pane

0x793f,	// (0x00048959) cell_hwr_side_button_pane_ParamLimits

0x793f,	// (0x00048959) cell_hwr_side_button_pane

0xd91e,	// (0x0004e938) aid_area_touch_clock_ParamLimits

0x092c,	// (0x00041946) bg_uniindi_top_pane_ParamLimits

0xd932,	// (0x0004e94c) uniindi_top_pane_g1_ParamLimits

0xd948,	// (0x0004e962) uniindi_top_pane_g2_ParamLimits

0xd954,	// (0x0004e96e) uniindi_top_pane_g3_ParamLimits

0xd965,	// (0x0004e97f) uniindi_top_pane_g4_ParamLimits

0xfd04,	// (0x00050d1e) uniindi_top_pane_g_ParamLimits

0xd972,	// (0x0004e98c) uniindi_top_pane_t1_ParamLimits

0x092c,	// (0x00041946) bg_vkb2_func_pane_cp01_ParamLimits

0x092c,	// (0x00041946) bg_vkb2_func_pane_cp01

0xe4c3,	// (0x0004f4dd) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4c3,	// (0x0004f4dd) cel_fep_hwr_func_pane_g1

0x092c,	// (0x00041946) bg_vkb2_func_pane_cp02_ParamLimits

0x092c,	// (0x00041946) bg_vkb2_func_pane_cp02

0xe4c3,	// (0x0004f4dd) cell_hwr_side_button_pane_g1_ParamLimits

0xe4c3,	// (0x0004f4dd) cell_hwr_side_button_pane_g1

0x975d,	// (0x0004a777) status_pane_g4_ParamLimits

0x975d,	// (0x0004a777) status_pane_g4

0x9777,	// (0x0004a791) status_pane_t1

0xbcb6,	// (0x0004ccd0) form2_midp_gauge_slider_cont_pane

0xbcbe,	// (0x0004ccd8) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbcd0,	// (0x0004ccea) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbce2,	// (0x0004ccfc) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad0,	// (0x00050aea) form2_midp_gauge_slider_pane_t_ParamLimits

0xbcf4,	// (0x0004cd0e) form2_midp_slider_pane_ParamLimits

0x7dc8,	// (0x00048de2) aid_size_cell_func_vkb2_ParamLimits

0x7dc8,	// (0x00048de2) aid_size_cell_func_vkb2

0xe460,	// (0x0004f47a) slider_pane_g4_ParamLimits

0xe460,	// (0x0004f47a) slider_pane_g4

0x84db,	// (0x000494f5) form2_midp_gauge_slider_pane_t2_cp01

0x84e9,	// (0x00049503) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x84e9,	// (0x00049503) form2_midp_gauge_slider_pane_t3_cp01

0x8506,	// (0x00049520) form2_midp_slider_pane_cp01

0xd2b3,	// (0x0004e2cd) navi_smil_pane

0xe4fc,	// (0x0004f516) navi_smil_pane_g1

0xe504,	// (0x0004f51e) navi_smil_pane_t1

0xe4d1,	// (0x0004f4eb) form2_midp_slider_pane_g1

0xe4da,	// (0x0004f4f4) form2_midp_slider_pane_g2

0xe4e2,	// (0x0004f4fc) form2_midp_slider_pane_g3

0xe4d1,	// (0x0004f4eb) form2_midp_slider_pane_g4

0xe4ea,	// (0x0004f504) form2_midp_slider_pane_g5

0x0004,

0xfdfc,	// (0x00050e16) form2_midp_slider_pane_g

0x84cb,	// (0x000494e5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x84cb,	// (0x000494e5) vkb2_area_bottom_space_btn_pane_g4

0x957e,	// (0x0004a598) lc0_navi_pane_ParamLimits

0x957e,	// (0x0004a598) lc0_navi_pane

0x95fa,	// (0x0004a614) lc0_stat_indi_pane_ParamLimits

0x95fa,	// (0x0004a614) lc0_stat_indi_pane

0x9611,	// (0x0004a62b) ls0_title_pane_ParamLimits

0x9611,	// (0x0004a62b) ls0_title_pane

0x0e3b,	// (0x00041e55) bg_popup_sub_pane_cp14_ParamLimits

0xd905,	// (0x0004e91f) list_uniindi_pane_ParamLimits

0xd911,	// (0x0004e92b) uniindi_top_pane_ParamLimits

0xd9b1,	// (0x0004e9cb) list_single_uniindi_pane_g1_ParamLimits

0xd9c4,	// (0x0004e9de) list_single_uniindi_pane_t1_ParamLimits

0x850f,	// (0x00049529) lc0_stat_clock_pane_ParamLimits

0x850f,	// (0x00049529) lc0_stat_clock_pane

0xe512,	// (0x0004f52c) lc0_stat_indi_pane_g1_ParamLimits

0xe512,	// (0x0004f52c) lc0_stat_indi_pane_g1

0xe51f,	// (0x0004f539) lc0_stat_indi_pane_g2_ParamLimits

0xe51f,	// (0x0004f539) lc0_stat_indi_pane_g2

0x0001,

0xfe07,	// (0x00050e21) lc0_stat_indi_pane_g_ParamLimits

0xfe07,	// (0x00050e21) lc0_stat_indi_pane_g

0x851c,	// (0x00049536) lc0_uni_indicator_pane_ParamLimits

0x851c,	// (0x00049536) lc0_uni_indicator_pane

0xe52c,	// (0x0004f546) ls0_title_pane_g1_ParamLimits

0xe52c,	// (0x0004f546) ls0_title_pane_g1

0xe540,	// (0x0004f55a) ls0_title_pane_t1_ParamLimits

0xe540,	// (0x0004f55a) ls0_title_pane_t1

0x8529,	// (0x00049543) lc0_uni_indicator_pane_g1_ParamLimits

0x8529,	// (0x00049543) lc0_uni_indicator_pane_g1

0xe576,	// (0x0004f590) lc0_stat_clock_pane_t1

0xd2b3,	// (0x0004e2cd) main_ai5_pane

0xe58c,	// (0x0004f5a6) ai5_sk_pane_ParamLimits

0xe58c,	// (0x0004f5a6) ai5_sk_pane

0xe599,	// (0x0004f5b3) cell_ai5_widget_pane_ParamLimits

0xe599,	// (0x0004f5b3) cell_ai5_widget_pane

0xe638,	// (0x0004f652) aid_size_cell_widget_grid

0xe646,	// (0x0004f660) bg_ai5_widget_pane_ParamLimits

0xe646,	// (0x0004f660) bg_ai5_widget_pane

0xe6c4,	// (0x0004f6de) cell_ai5_widget_pane_g2

0xe6d8,	// (0x0004f6f2) cell_ai5_widget_pane_g3

0xe6f2,	// (0x0004f70c) cell_ai5_widget_pane_g4

0xe702,	// (0x0004f71c) cell_ai5_widget_pane_g5

0xe712,	// (0x0004f72c) cell_ai5_widget_pane_g6

0xe71f,	// (0x0004f739) cell_ai5_widget_pane_g7

0xe78b,	// (0x0004f7a5) cell_ai5_widget_pane_t1_ParamLimits

0xe78b,	// (0x0004f7a5) cell_ai5_widget_pane_t1

0xe7a8,	// (0x0004f7c2) cell_ai5_widget_pane_t2_ParamLimits

0xe7a8,	// (0x0004f7c2) cell_ai5_widget_pane_t2

0xe7c0,	// (0x0004f7da) cell_ai5_widget_pane_t3_ParamLimits

0xe7c0,	// (0x0004f7da) cell_ai5_widget_pane_t3

0xe7d8,	// (0x0004f7f2) cell_ai5_widget_pane_t4_ParamLimits

0xe7d8,	// (0x0004f7f2) cell_ai5_widget_pane_t4

0xe7fe,	// (0x0004f818) cell_ai5_widget_pane_t5_ParamLimits

0xe7fe,	// (0x0004f818) cell_ai5_widget_pane_t5

0xe81e,	// (0x0004f838) cell_ai5_widget_pane_t6_ParamLimits

0xe81e,	// (0x0004f838) cell_ai5_widget_pane_t6

0xe830,	// (0x0004f84a) cell_ai5_widget_pane_t7_ParamLimits

0xe830,	// (0x0004f84a) cell_ai5_widget_pane_t7

0xe84f,	// (0x0004f869) cell_ai5_widget_pane_t8_ParamLimits

0xe84f,	// (0x0004f869) cell_ai5_widget_pane_t8

0x000b,

0xfe27,	// (0x00050e41) cell_ai5_widget_pane_t_ParamLimits

0xfe27,	// (0x00050e41) cell_ai5_widget_pane_t

0xe8d3,	// (0x0004f8ed) grid_ai5_widget_pane

0x0e3b,	// (0x00041e55) highlight_cell_ai5_widget_pane_ParamLimits

0x0e3b,	// (0x00041e55) highlight_cell_ai5_widget_pane

0xe8e7,	// (0x0004f901) ai5_sk_left_pane

0xe8f1,	// (0x0004f90b) ai5_sk_middle_pane

0xe8fb,	// (0x0004f915) ai5_sk_right_pane

0xe905,	// (0x0004f91f) bg_ai5_widget_pane_g1_ParamLimits

0xe905,	// (0x0004f91f) bg_ai5_widget_pane_g1

0xe911,	// (0x0004f92b) bg_ai5_widget_pane_g2_ParamLimits

0xe911,	// (0x0004f92b) bg_ai5_widget_pane_g2

0xe91d,	// (0x0004f937) bg_ai5_widget_pane_g3_ParamLimits

0xe91d,	// (0x0004f937) bg_ai5_widget_pane_g3

0xe929,	// (0x0004f943) bg_ai5_widget_pane_g4_ParamLimits

0xe929,	// (0x0004f943) bg_ai5_widget_pane_g4

0xe935,	// (0x0004f94f) bg_ai5_widget_pane_g5_ParamLimits

0xe935,	// (0x0004f94f) bg_ai5_widget_pane_g5

0xe941,	// (0x0004f95b) bg_ai5_widget_pane_g6_ParamLimits

0xe941,	// (0x0004f95b) bg_ai5_widget_pane_g6

0xe94d,	// (0x0004f967) bg_ai5_widget_pane_g7_ParamLimits

0xe94d,	// (0x0004f967) bg_ai5_widget_pane_g7

0xe959,	// (0x0004f973) bg_ai5_widget_pane_g8_ParamLimits

0xe959,	// (0x0004f973) bg_ai5_widget_pane_g8

0xe965,	// (0x0004f97f) bg_ai5_widget_pane_g9_ParamLimits

0xe965,	// (0x0004f97f) bg_ai5_widget_pane_g9

0x0008,

0xfe40,	// (0x00050e5a) bg_ai5_widget_pane_g_ParamLimits

0xfe40,	// (0x00050e5a) bg_ai5_widget_pane_g

0xe99d,	// (0x0004f9b7) cell_shortcut_ai5_widget_pane_ParamLimits

0xe99d,	// (0x0004f9b7) cell_shortcut_ai5_widget_pane

0x9077,	// (0x0004a091) bg_cell_shortcut_ai5_widget_pane

0xe9b0,	// (0x0004f9ca) cell_grid_ai5_widget_pane_g1

0x9077,	// (0x0004a091) highlight_cell_shortcut_ai5_widget_pane

0x98e6,	// (0x0004a900) ai5_sk_left_pane_g1

0xe9b9,	// (0x0004f9d3) ai5_sk_left_pane_g2

0xe9c1,	// (0x0004f9db) ai5_sk_left_pane_g3

0xe9c9,	// (0x0004f9e3) ai5_sk_left_pane_g4

0x0003,

0xfe53,	// (0x00050e6d) ai5_sk_left_pane_g

0xe9d1,	// (0x0004f9eb) ai5_sk_left_pane_t1

0x98de,	// (0x0004a8f8) ai5_sk_right_pane_g1

0xe9df,	// (0x0004f9f9) ai5_sk_right_pane_g2

0xe9e7,	// (0x0004fa01) ai5_sk_right_pane_g3

0xe9ef,	// (0x0004fa09) ai5_sk_right_pane_g4

0x0003,

0xfe5c,	// (0x00050e76) ai5_sk_right_pane_g

0xe9f7,	// (0x0004fa11) ai5_sk_right_pane_t1

0x98de,	// (0x0004a8f8) ai5_sk_middle_pane_g1

0x98e6,	// (0x0004a900) ai5_sk_middle_pane_g2

0x98fe,	// (0x0004a918) ai5_sk_middle_pane_g3

0xe9e7,	// (0x0004fa01) ai5_sk_middle_pane_g4

0xe9c1,	// (0x0004f9db) ai5_sk_middle_pane_g5

0xea05,	// (0x0004fa1f) ai5_sk_middle_pane_g6

0xea0d,	// (0x0004fa27) ai5_sk_middle_pane_g7

0x0006,

0xfe65,	// (0x00050e7f) ai5_sk_middle_pane_g

0x9406,	// (0x0004a420) aid_touch_area_size_lc0_ParamLimits

0x9406,	// (0x0004a420) aid_touch_area_size_lc0

0x7aa2,	// (0x00048abc) cell_hwr_candidate_pane_t1_ParamLimits

0x9424,	// (0x0004a43e) aid_touch_navi_pane

0x970f,	// (0x0004a729) status_dt_navi_pane_ParamLimits

0x970f,	// (0x0004a729) status_dt_navi_pane

0x971c,	// (0x0004a736) status_dt_sta_pane_ParamLimits

0x971c,	// (0x0004a736) status_dt_sta_pane

0xea15,	// (0x0004fa2f) dt_sta_controll_pane

0xea22,	// (0x0004fa3c) dt_sta_indi_pane

0xea33,	// (0x0004fa4d) dt_sta_title_pane

0x092c,	// (0x00041946) bg_dt_sta_indi_pane_ParamLimits

0x092c,	// (0x00041946) bg_dt_sta_indi_pane

0xea46,	// (0x0004fa60) dt_sta_battery_pane

0xea4e,	// (0x0004fa68) dt_sta_indi_pane_g1

0xea57,	// (0x0004fa71) dt_sta_indi_pane_g2

0xea60,	// (0x0004fa7a) dt_sta_indi_pane_g3

0x0002,

0xfe74,	// (0x00050e8e) dt_sta_indi_pane_g

0xea69,	// (0x0004fa83) dt_sta_signal_pane

0x0e3b,	// (0x00041e55) bg_dt_sta_title_pane_ParamLimits

0x0e3b,	// (0x00041e55) bg_dt_sta_title_pane

0xea72,	// (0x0004fa8c) dt_sta_title_pane_g1

0xea7a,	// (0x0004fa94) dt_sta_title_pane_t1_ParamLimits

0xea7a,	// (0x0004fa94) dt_sta_title_pane_t1

0xd2b3,	// (0x0004e2cd) bg_dt_sta_control_pane

0xea8f,	// (0x0004faa9) dt_sta_controll_pane_g1

0xea98,	// (0x0004fab2) bg_dt_sta_title_pane_g1

0xeaa1,	// (0x0004fabb) bg_dt_sta_title_pane_g2

0xeaaa,	// (0x0004fac4) bg_dt_sta_title_pane_g3

0x0002,

0xfe7b,	// (0x00050e95) bg_dt_sta_title_pane_g

0xbefc,	// (0x0004cf16) bg_dt_sta_indi_pane_g1

0xeab3,	// (0x0004facd) dt_sta_signal_pane_g1

0xeabb,	// (0x0004fad5) dt_sta_signal_pane_g2

0x0001,

0xfe82,	// (0x00050e9c) dt_sta_signal_pane_g

0xeac3,	// (0x0004fadd) dt_sta_battery_pane_g1

0xeacc,	// (0x0004fae6) dt_sta_battery_pane_t1

0xbefc,	// (0x0004cf16) bg_dt_sta_control_pane_g1

0x8b71,	// (0x00049b8b) fep_china_uni_eep_pane

0x8b79,	// (0x00049b93) fep_china_uni_entry_pane_ParamLimits

0x8b89,	// (0x00049ba3) popup_fep_china_uni_window_g1_ParamLimits

0x8b99,	// (0x00049bb3) popup_fep_china_uni_window_g2_ParamLimits

0x8b99,	// (0x00049bb3) popup_fep_china_uni_window_g2

0x0001,

0xf6fb,	// (0x00050715) popup_fep_china_uni_window_g_ParamLimits

0xf6fb,	// (0x00050715) popup_fep_china_uni_window_g

0xeadb,	// (0x0004faf5) fep_china_uni_eep_pane_g1

0xeae3,	// (0x0004fafd) fep_china_uni_eep_pane_t1

0xe4f3,	// (0x0004f50d) aid_touch_area_size_smil_player

0x9576,	// (0x0004a590) lc0_clock_pane

0x976b,	// (0x0004a785) status_pane_g5_ParamLimits

0x976b,	// (0x0004a785) status_pane_g5

0x6e34,	// (0x00047e4e) popup_keymap_window

0x9731,	// (0x0004a74b) status_icon_pane

0xe6d8,	// (0x0004f6f2) cell_ai5_widget_pane_g3_ParamLimits

0xe6f2,	// (0x0004f70c) cell_ai5_widget_pane_g4_ParamLimits

0xe702,	// (0x0004f71c) cell_ai5_widget_pane_g5_ParamLimits

0xe72b,	// (0x0004f745) cell_ai5_widget_pane_g8_ParamLimits

0xe72b,	// (0x0004f745) cell_ai5_widget_pane_g8

0xe73f,	// (0x0004f759) cell_ai5_widget_pane_g9_ParamLimits

0xe73f,	// (0x0004f759) cell_ai5_widget_pane_g9

0xe753,	// (0x0004f76d) cell_ai5_widget_pane_g10_ParamLimits

0xe753,	// (0x0004f76d) cell_ai5_widget_pane_g10

0xeaf2,	// (0x0004fb0c) status_icon_pane_g1

0xd2b3,	// (0x0004e2cd) bg_popup_sub_pane_cp13

0xeafa,	// (0x0004fb14) popup_keymap_window_t1

0x934f,	// (0x0004a369) control_pane_g6_ParamLimits

0x934f,	// (0x0004a369) control_pane_g6

0x935c,	// (0x0004a376) control_pane_g7_ParamLimits

0x935c,	// (0x0004a376) control_pane_g7

0x9369,	// (0x0004a383) control_pane_g8_ParamLimits

0x9369,	// (0x0004a383) control_pane_g8

0xea15,	// (0x0004fa2f) dt_sta_controll_pane_ParamLimits

0xea22,	// (0x0004fa3c) dt_sta_indi_pane_ParamLimits

0xea33,	// (0x0004fa4d) dt_sta_title_pane_ParamLimits

0x0d7d,	// (0x00041d97) aid_size_touch_scroll_bar_cale

0x5f13,	// (0x00046f2d) popup_discreet_window_ParamLimits

0x5f13,	// (0x00046f2d) popup_discreet_window

0x5fa1,	// (0x00046fbb) popup_sk_window

0x9f3c,	// (0x0004af56) bg_popup_sub_pane_cp28_ParamLimits

0x9f3c,	// (0x0004af56) bg_popup_sub_pane_cp28

0xeb08,	// (0x0004fb22) popup_discreet_window_g1_ParamLimits

0xeb08,	// (0x0004fb22) popup_discreet_window_g1

0xeb28,	// (0x0004fb42) popup_discreet_window_t1_ParamLimits

0xeb28,	// (0x0004fb42) popup_discreet_window_t1

0xeb46,	// (0x0004fb60) popup_discreet_window_t2_ParamLimits

0xeb46,	// (0x0004fb60) popup_discreet_window_t2

0x0002,

0xfe87,	// (0x00050ea1) popup_discreet_window_t_ParamLimits

0xfe87,	// (0x00050ea1) popup_discreet_window_t

0x853c,	// (0x00049556) popup_sk_window_g1

0x8546,	// (0x00049560) popup_sk_window_g2

0x0001,

0xfe8e,	// (0x00050ea8) popup_sk_window_g

0x854e,	// (0x00049568) popup_sk_window_t1

0x855c,	// (0x00049576) popup_sk_window_t1_copy1

0xe6c4,	// (0x0004f6de) cell_ai5_widget_pane_g2_ParamLimits

0xe861,	// (0x0004f87b) cell_ai5_widget_pane_t9_ParamLimits

0xe861,	// (0x0004f87b) cell_ai5_widget_pane_t9

0xd2b3,	// (0x0004e2cd) main_fep_fshwr2_pane

0x856a,	// (0x00049584) aid_fshwr2_btn_pane

0x857a,	// (0x00049594) aid_fshwr2_syb_pane

0x858e,	// (0x000495a8) aid_fshwr2_txt_pane

0x859e,	// (0x000495b8) fshwr2_func_candi_pane

0x85be,	// (0x000495d8) fshwr2_hwr_syb_pane

0x85d4,	// (0x000495ee) fshwr2_icf_pane

0xd2b3,	// (0x0004e2cd) fshwr2_icf_bg_pane

0x8608,	// (0x00049622) fshwr2_icf_pane_t1_ParamLimits

0x8608,	// (0x00049622) fshwr2_icf_pane_t1

0x8a4a,	// (0x00049a64) fshwr2_func_candi_pane_g1

0xeb98,	// (0x0004fbb2) fshwr2_func_candi_row_pane_ParamLimits

0xeb98,	// (0x0004fbb2) fshwr2_func_candi_row_pane

0x8620,	// (0x0004963a) cell_fshwr2_syb_pane_ParamLimits

0x8620,	// (0x0004963a) cell_fshwr2_syb_pane

0xe4c3,	// (0x0004f4dd) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4c3,	// (0x0004f4dd) fshwr2_hwr_syb_pane_g1

0xd2b3,	// (0x0004e2cd) bg_popup_call_pane_cp01

0x8641,	// (0x0004965b) fshwr2_func_candi_cell_pane_ParamLimits

0x8641,	// (0x0004965b) fshwr2_func_candi_cell_pane

0xa5b3,	// (0x0004b5cd) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa5b3,	// (0x0004b5cd) fshwr2_func_candi_cell_bg_pane

0x8692,	// (0x000496ac) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8692,	// (0x000496ac) fshwr2_func_candi_cell_pane_g1

0x86bd,	// (0x000496d7) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x86bd,	// (0x000496d7) fshwr2_func_candi_cell_pane_t1

0xd2b3,	// (0x0004e2cd) bg_button_pane_cp08

0x93a6,	// (0x0004a3c0) cell_fshwr2_syb_bg_pane

0x86d0,	// (0x000496ea) cell_fshwr2_syb_bg_pane_g1

0x86e4,	// (0x000496fe) cell_fshwr2_syb_bg_pane_t1

0x0e3b,	// (0x00041e55) main_tmo_pane

0xaa60,	// (0x0004ba7a) uni_indicator_pane_g1_ParamLimits

0xaa76,	// (0x0004ba90) uni_indicator_pane_g2_ParamLimits

0xaa8c,	// (0x0004baa6) uni_indicator_pane_g3_ParamLimits

0xaa9f,	// (0x0004bab9) uni_indicator_pane_g4_ParamLimits

0xaa9f,	// (0x0004bab9) uni_indicator_pane_g4

0xaab3,	// (0x0004bacd) uni_indicator_pane_g5_ParamLimits

0xaab3,	// (0x0004bacd) uni_indicator_pane_g5

0xaab3,	// (0x0004bacd) uni_indicator_pane_g6_ParamLimits

0xaab3,	// (0x0004bacd) uni_indicator_pane_g6

0xf8ff,	// (0x00050919) uni_indicator_pane_g_ParamLimits

0xd4cf,	// (0x0004e4e9) popup_tmo_note_window_ParamLimits

0xd4cf,	// (0x0004e4e9) popup_tmo_note_window

0x0e3b,	// (0x00041e55) fshwr2_bg_pane

0x86ae,	// (0x000496c8) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x86ae,	// (0x000496c8) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe93,	// (0x00050ead) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe93,	// (0x00050ead) fshwr2_func_candi_cell_pane_g

0xbefc,	// (0x0004cf16) bg_popup_window_pane_cp01

0x86fa,	// (0x00049714) bg_popup_window_pane_g1_cp01

0xebbb,	// (0x0004fbd5) bg_popup_window_pane_cp22_ParamLimits

0xebbb,	// (0x0004fbd5) bg_popup_window_pane_cp22

0xebc9,	// (0x0004fbe3) listscroll_tmo_link_pane_ParamLimits

0xebc9,	// (0x0004fbe3) listscroll_tmo_link_pane

0xec09,	// (0x0004fc23) popup_tmo_note_window_g1_ParamLimits

0xec09,	// (0x0004fc23) popup_tmo_note_window_g1

0xec16,	// (0x0004fc30) tmo_note_info_pane_ParamLimits

0xec16,	// (0x0004fc30) tmo_note_info_pane

0xec30,	// (0x0004fc4a) list_tmo_note_info_pane_g1_ParamLimits

0xec30,	// (0x0004fc4a) list_tmo_note_info_pane_g1

0xec47,	// (0x0004fc61) list_tmo_note_info_pane_g2_ParamLimits

0xec47,	// (0x0004fc61) list_tmo_note_info_pane_g2

0x0001,

0xfe98,	// (0x00050eb2) list_tmo_note_info_pane_g_ParamLimits

0xfe98,	// (0x00050eb2) list_tmo_note_info_pane_g

0xec63,	// (0x0004fc7d) list_tmo_note_info_text_pane_ParamLimits

0xec63,	// (0x0004fc7d) list_tmo_note_info_text_pane

0xece8,	// (0x0004fd02) list_tmo_link_pane

0xecf5,	// (0x0004fd0f) scroll_pane_cp20

0xed02,	// (0x0004fd1c) list_single_tmo_link_pane_ParamLimits

0xed02,	// (0x0004fd1c) list_single_tmo_link_pane

0xed12,	// (0x0004fd2c) list_single_tmo_link_pane_t1

0xed20,	// (0x0004fd3a) list_tmo_note_info_text_pane_t1_ParamLimits

0xed20,	// (0x0004fd3a) list_tmo_note_info_text_pane_t1

0x64d8,	// (0x000474f2) aid_size_touch_scroll_bar_cp01_ParamLimits

0x64d8,	// (0x000474f2) aid_size_touch_scroll_bar_cp01

0x536e,	// (0x00046388) aid_size_touch_slider_marker

0x5f89,	// (0x00046fa3) popup_settings_window_ParamLimits

0x5f89,	// (0x00046fa3) popup_settings_window

0x54e4,	// (0x000464fe) popup_candi_list_indi_window

0x9424,	// (0x0004a43e) aid_touch_navi_pane_ParamLimits

0x7d1f,	// (0x00048d39) rs_clock_indi_pane

0x7d28,	// (0x00048d42) sctrl_sk_bottom_pane_ParamLimits

0x7d39,	// (0x00048d53) sctrl_sk_top_pane_ParamLimits

0x7e1a,	// (0x00048e34) popup_fep_tooltip_window

0xe638,	// (0x0004f652) aid_size_cell_widget_grid_ParamLimits

0xe6ad,	// (0x0004f6c7) cell_ai5_widget_pane_g1_ParamLimits

0xe6ad,	// (0x0004f6c7) cell_ai5_widget_pane_g1

0xe712,	// (0x0004f72c) cell_ai5_widget_pane_g6_ParamLimits

0xe71f,	// (0x0004f739) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0c,	// (0x00050e26) cell_ai5_widget_pane_g_ParamLimits

0xfe0c,	// (0x00050e26) cell_ai5_widget_pane_g

0xe890,	// (0x0004f8aa) cell_ai5_widget_pane_t10_ParamLimits

0xe890,	// (0x0004f8aa) cell_ai5_widget_pane_t10

0xe8d3,	// (0x0004f8ed) grid_ai5_widget_pane_ParamLimits

0xe971,	// (0x0004f98b) cell_contacts_ai5_widget_pane_ParamLimits

0xe971,	// (0x0004f98b) cell_contacts_ai5_widget_pane

0xeb5b,	// (0x0004fb75) popup_discreet_window_t3_ParamLimits

0xeb5b,	// (0x0004fb75) popup_discreet_window_t3

0x85f0,	// (0x0004960a) popup_fshwr2_char_preview_window_ParamLimits

0x85f0,	// (0x0004960a) popup_fshwr2_char_preview_window

0xec81,	// (0x0004fc9b) tmo_note_info_pane_t1

0xec96,	// (0x0004fcb0) tmo_note_info_pane_t2

0xecaf,	// (0x0004fcc9) tmo_note_info_pane_t3

0xecc4,	// (0x0004fcde) tmo_note_info_pane_t4

0xecd6,	// (0x0004fcf0) tmo_note_info_pane_t5

0x0004,

0xfe9d,	// (0x00050eb7) tmo_note_info_pane_t

0xece8,	// (0x0004fd02) list_tmo_link_pane_ParamLimits

0xecf5,	// (0x0004fd0f) scroll_pane_cp20_ParamLimits

0xd2b3,	// (0x0004e2cd) bg_popup_fep_char_preview_window_cp01

0xed39,	// (0x0004fd53) popup_fshwr2_char_preview_window_t1

0xed47,	// (0x0004fd61) popup_candi_list_indi_window_g1

0xed50,	// (0x0004fd6a) bg_cell_contacts_ai5_widget_pane

0xed5c,	// (0x0004fd76) cell_contacts_ai5_widget_pane_g1

0xed71,	// (0x0004fd8b) cell_contacts_ai5_widget_pane_g2

0xed7d,	// (0x0004fd97) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea8,	// (0x00050ec2) cell_contacts_ai5_widget_pane_g

0xed89,	// (0x0004fda3) cell_contacts_ai5_widget_pane_t1

0x0e3b,	// (0x00041e55) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee00,	// (0x0004fe1a) settings_container_pane

0x9077,	// (0x0004a091) listscroll_set_pane_copy1

0xb634,	// (0x0004c64e) scroll_pane_cp121_copy1

0xee0c,	// (0x0004fe26) set_content_pane_copy1

0xee14,	// (0x0004fe2e) aid_height_set_list_copy1_ParamLimits

0xee14,	// (0x0004fe2e) aid_height_set_list_copy1

0xaca3,	// (0x0004bcbd) aid_size_parent_copy1_ParamLimits

0xaca3,	// (0x0004bcbd) aid_size_parent_copy1

0xee20,	// (0x0004fe3a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee20,	// (0x0004fe3a) button_value_adjust_pane_cp6_copy1

0x93a6,	// (0x0004a3c0) list_highlight_pane_cp2_copy1_ParamLimits

0x93a6,	// (0x0004a3c0) list_highlight_pane_cp2_copy1

0xee34,	// (0x0004fe4e) list_set_pane_copy1_ParamLimits

0xee34,	// (0x0004fe4e) list_set_pane_copy1

0xed9b,	// (0x0004fdb5) main_pane_set_t1_copy1_ParamLimits

0xed9b,	// (0x0004fdb5) main_pane_set_t1_copy1

0xedd5,	// (0x0004fdef) main_pane_set_t2_copy1_ParamLimits

0xedd5,	// (0x0004fdef) main_pane_set_t2_copy1

0xeef5,	// (0x0004ff0f) main_pane_set_t3_copy1

0xef03,	// (0x0004ff1d) main_pane_set_t4_copy1

0xedf4,	// (0x0004fe0e) set_content_pane_g1_copy1_ParamLimits

0xedf4,	// (0x0004fe0e) set_content_pane_g1_copy1

0xef11,	// (0x0004ff2b) setting_code_pane_copy1

0xef19,	// (0x0004ff33) setting_slider_graphic_pane_copy1

0xef19,	// (0x0004ff33) setting_slider_pane_copy1

0xef21,	// (0x0004ff3b) setting_text_pane_copy1

0xef21,	// (0x0004ff3b) setting_volume_pane_copy1

0xef11,	// (0x0004ff2b) settings_code_pane_cp2_copy1

0xef29,	// (0x0004ff43) settings_code_pane_cp_copy1_ParamLimits

0xef29,	// (0x0004ff43) settings_code_pane_cp_copy1

0x8703,	// (0x0004971d) volume_set_pane_copy1

0xef3d,	// (0x0004ff57) volume_set_pane_g10_copy1

0xef49,	// (0x0004ff63) volume_set_pane_g1_copy1

0xef53,	// (0x0004ff6d) volume_set_pane_g2_copy1

0xef5d,	// (0x0004ff77) volume_set_pane_g3_copy1

0xef67,	// (0x0004ff81) volume_set_pane_g4_copy1

0xef71,	// (0x0004ff8b) volume_set_pane_g5_copy1

0xef7b,	// (0x0004ff95) volume_set_pane_g6_copy1

0xef85,	// (0x0004ff9f) volume_set_pane_g7_copy1

0xef8f,	// (0x0004ffa9) volume_set_pane_g8_copy1

0xef99,	// (0x0004ffb3) volume_set_pane_g9_copy1

0xd315,	// (0x0004e32f) bg_set_opt_pane_cp_copy1_ParamLimits

0xd315,	// (0x0004e32f) bg_set_opt_pane_cp_copy1

0x870f,	// (0x00049729) setting_slider_pane_t1_copy1_ParamLimits

0x870f,	// (0x00049729) setting_slider_pane_t1_copy1

0x872e,	// (0x00049748) setting_slider_pane_t2_copy1_ParamLimits

0x872e,	// (0x00049748) setting_slider_pane_t2_copy1

0x8748,	// (0x00049762) setting_slider_pane_t3_copy1_ParamLimits

0x8748,	// (0x00049762) setting_slider_pane_t3_copy1

0x8760,	// (0x0004977a) slider_set_pane_copy1_ParamLimits

0x8760,	// (0x0004977a) slider_set_pane_copy1

0x0e93,	// (0x00041ead) set_opt_bg_pane_g1_copy2

0x0e9b,	// (0x00041eb5) set_opt_bg_pane_g2_copy2

0xefa5,	// (0x0004ffbf) set_opt_bg_pane_g3_copy2

0x0eab,	// (0x00041ec5) set_opt_bg_pane_g4_copy2

0x0eb3,	// (0x00041ecd) set_opt_bg_pane_g5_copy2

0x0ebb,	// (0x00041ed5) set_opt_bg_pane_g6_copy2

0xefaf,	// (0x0004ffc9) set_opt_bg_pane_g7_copy2

0xefb9,	// (0x0004ffd3) set_opt_bg_pane_g8_copy2

0xefc3,	// (0x0004ffdd) set_opt_bg_pane_g9_copy2

0x8776,	// (0x00049790) aid_size_touch_slider_mark_copy1_ParamLimits

0x8776,	// (0x00049790) aid_size_touch_slider_mark_copy1

0xefcd,	// (0x0004ffe7) slider_set_pane_g1_copy1

0x878a,	// (0x000497a4) slider_set_pane_g2_copy1

0x75f9,	// (0x00048613) slider_set_pane_g3_copy1_ParamLimits

0x75f9,	// (0x00048613) slider_set_pane_g3_copy1

0x760d,	// (0x00048627) slider_set_pane_g4_copy1_ParamLimits

0x760d,	// (0x00048627) slider_set_pane_g4_copy1

0x7625,	// (0x0004863f) slider_set_pane_g5_copy1_ParamLimits

0x7625,	// (0x0004863f) slider_set_pane_g5_copy1

0x75f9,	// (0x00048613) slider_set_pane_g6_copy1_ParamLimits

0x75f9,	// (0x00048613) slider_set_pane_g6_copy1

0x8792,	// (0x000497ac) slider_set_pane_g7_copy1_ParamLimits

0x8792,	// (0x000497ac) slider_set_pane_g7_copy1

0xd2c7,	// (0x0004e2e1) bg_set_opt_pane_cp2_copy1

0xefd6,	// (0x0004fff0) setting_slider_graphic_pane_g1_copy1

0xefdf,	// (0x0004fff9) setting_slider_graphic_pane_t1_copy1

0xefef,	// (0x00050009) setting_slider_graphic_pane_t2_copy1

0xefff,	// (0x00050019) slider_set_pane_cp_copy1

0xf00f,	// (0x00050029) input_focus_pane_cp1_copy1

0xf018,	// (0x00050032) list_set_text_pane_copy1

0xf020,	// (0x0005003a) setting_text_pane_g1_copy1

0x4d7b,	// (0x00045d95) set_text_pane_t1_copy1

0xf00f,	// (0x00050029) input_focus_pane_cp2_copy1

0xf020,	// (0x0005003a) setting_code_pane_g1_copy1

0xf029,	// (0x00050043) setting_code_pane_t1_copy1

0xb439,	// (0x0004c453) list_set_graphic_pane_copy1

0xd2c7,	// (0x0004e2e1) bg_set_opt_pane_cp4_copy1

0x8d6e,	// (0x00049d88) list_set_graphic_pane_g1_copy1_ParamLimits

0x8d6e,	// (0x00049d88) list_set_graphic_pane_g1_copy1

0xf037,	// (0x00050051) list_set_graphic_pane_g2_copy1

0x8d86,	// (0x00049da0) list_set_graphic_pane_t1_copy1_ParamLimits

0x8d86,	// (0x00049da0) list_set_graphic_pane_t1_copy1

0xbefc,	// (0x0004cf16) rs_clock_indi_pane_g1

0xf03f,	// (0x00050059) rs_clock_indi_pane_t1

0xf04d,	// (0x00050067) rs_indi_pane

0xf055,	// (0x0005006f) rs_indi_pane_g1

0xf05e,	// (0x00050078) rs_indi_pane_g2

0xed47,	// (0x0004fd61) rs_indi_pane_g3

0x0002,

0xfeaf,	// (0x00050ec9) rs_indi_pane_g

0x9077,	// (0x0004a091) bg_popup_preview_window_pane_cp03

0xf067,	// (0x00050081) popup_fep_tooltip_window_t1

0xcbc9,	// (0x0004dbe3) popup_note2_window_g2_ParamLimits

0xcbc9,	// (0x0004dbe3) popup_note2_window_g2

0x0001,

0xfc3c,	// (0x00050c56) popup_note2_window_g_ParamLimits

0xfc3c,	// (0x00050c56) popup_note2_window_g

0xd0d1,	// (0x0004e0eb) bg_popup_sub_pane_cp11_ParamLimits

0xd0de,	// (0x0004e0f8) cell_ai3_links_pane_g1_ParamLimits

0xd0f5,	// (0x0004e10f) cell_ai3_links_pane_t1

0x4d7b,	// (0x00045d95) set_text_pane_t1_copy1_ParamLimits

0x8f75,	// (0x00049f8f) cell_graphic_popup_pane_cp2_ParamLimits

0x8f75,	// (0x00049f8f) cell_graphic_popup_pane_cp2

0xf075,	// (0x0005008f) cell_graphic_popup_pane_g1_cp2

0x0b90,	// (0x00041baa) cell_graphic_popup_pane_g2_cp2

0xf07d,	// (0x00050097) cell_graphic_popup_pane_g3_cp2

0xf085,	// (0x0005009f) cell_graphic_popup_pane_t2_cp2

0x0ba1,	// (0x00041bbb) grid_highlight_pane_cp3_cp2

0x40b5,	// (0x000450cf) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0e3b,	// (0x00041e55) main_tmo_pane_ParamLimits

0xd4c3,	// (0x0004e4dd) popup_tmo_big_image_note_window

0xe69c,	// (0x0004f6b6) cell_ai5_widget_list_pane

0xe6a4,	// (0x0004f6be) cell_ai5_widget_lrg_icon_pane

0xec81,	// (0x0004fc9b) tmo_note_info_pane_t1_ParamLimits

0xec96,	// (0x0004fcb0) tmo_note_info_pane_t2_ParamLimits

0xecaf,	// (0x0004fcc9) tmo_note_info_pane_t3_ParamLimits

0xecc4,	// (0x0004fcde) tmo_note_info_pane_t4_ParamLimits

0xecd6,	// (0x0004fcf0) tmo_note_info_pane_t5_ParamLimits

0xfe9d,	// (0x00050eb7) tmo_note_info_pane_t_ParamLimits

0xee00,	// (0x0004fe1a) settings_container_pane_ParamLimits

0xf007,	// (0x00050021) indicator_popup_pane_cp5

0xf007,	// (0x00050021) indicator_popup_pane_cp6

0xb439,	// (0x0004c453) list_set_graphic_pane_copy1_ParamLimits

0xd2b3,	// (0x0004e2cd) bg_popup_window_pane_cp23

0xf093,	// (0x000500ad) popup_tmo_big_image_note_window_g1

0xf09f,	// (0x000500b9) popup_tmo_big_image_note_window_t1

0xf0af,	// (0x000500c9) popup_tmo_big_image_note_window_t2

0xf0bf,	// (0x000500d9) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb6,	// (0x00050ed0) popup_tmo_big_image_note_window_t

0xbefc,	// (0x0004cf16) cell_ai5_widget_lrg_icon_pane_g1

0xf0cf,	// (0x000500e9) cell_ai5_widget_lrg_icon_pane_t1

0xf0dd,	// (0x000500f7) cell_ai5_widget_list_row_pane_ParamLimits

0xf0dd,	// (0x000500f7) cell_ai5_widget_list_row_pane

0xf0f5,	// (0x0005010f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0f5,	// (0x0005010f) cell_ai5_widget_list_row_pane_g1

0xf102,	// (0x0005011c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf102,	// (0x0005011c) cell_ai5_widget_list_row_pane_t1

0xf12d,	// (0x00050147) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf12d,	// (0x00050147) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebd,	// (0x00050ed7) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebd,	// (0x00050ed7) cell_ai5_widget_list_row_pane_t

0xd2b3,	// (0x0004e2cd) main_fep_vtchi_ss_pane

0xf17d,	// (0x00050197) popup_fep_char_pre_window

0xf185,	// (0x0005019f) popup_fep_ituss_window

0xf1b7,	// (0x000501d1) popup_fep_vkbss_window

0x93a6,	// (0x0004a3c0) grid_vkbss_keypad_pane_ParamLimits

0x93a6,	// (0x0004a3c0) grid_vkbss_keypad_pane

0xf1ff,	// (0x00050219) ituss_keypad_pane

0x87d3,	// (0x000497ed) aid_vkbss_key_offset_ParamLimits

0x87d3,	// (0x000497ed) aid_vkbss_key_offset

0x87df,	// (0x000497f9) cell_vkbss_key_pane_ParamLimits

0x87df,	// (0x000497f9) cell_vkbss_key_pane

0xf20b,	// (0x00050225) bg_cell_vkbss_key_g1_ParamLimits

0xf20b,	// (0x00050225) bg_cell_vkbss_key_g1

0xf217,	// (0x00050231) cell_vkbss_key_3p_pane_ParamLimits

0xf217,	// (0x00050231) cell_vkbss_key_3p_pane

0xf24d,	// (0x00050267) cell_vkbss_key_g1_ParamLimits

0xf24d,	// (0x00050267) cell_vkbss_key_g1

0xf283,	// (0x0005029d) cell_vkbss_key_t1_ParamLimits

0xf283,	// (0x0005029d) cell_vkbss_key_t1

0x8841,	// (0x0004985b) cell_ituss_key_pane_ParamLimits

0x8841,	// (0x0004985b) cell_ituss_key_pane

0xf2df,	// (0x000502f9) bg_cell_ituss_key_g1_ParamLimits

0xf2df,	// (0x000502f9) bg_cell_ituss_key_g1

0xf2eb,	// (0x00050305) cell_ituss_key_pane_g1_ParamLimits

0xf2eb,	// (0x00050305) cell_ituss_key_pane_g1

0x8852,	// (0x0004986c) cell_ituss_key_pane_g2_ParamLimits

0x8852,	// (0x0004986c) cell_ituss_key_pane_g2

0x0005,

0xfec4,	// (0x00050ede) cell_ituss_key_pane_g_ParamLimits

0xfec4,	// (0x00050ede) cell_ituss_key_pane_g

0x88d6,	// (0x000498f0) cell_ituss_key_t1_ParamLimits

0x88d6,	// (0x000498f0) cell_ituss_key_t1

0x8910,	// (0x0004992a) cell_ituss_key_t2_ParamLimits

0x8910,	// (0x0004992a) cell_ituss_key_t2

0x8942,	// (0x0004995c) cell_ituss_key_t3_ParamLimits

0x8942,	// (0x0004995c) cell_ituss_key_t3

0x8973,	// (0x0004998d) cell_ituss_key_t4_ParamLimits

0x8973,	// (0x0004998d) cell_ituss_key_t4

0x0005,

0xfed1,	// (0x00050eeb) cell_ituss_key_t_ParamLimits

0xfed1,	// (0x00050eeb) cell_ituss_key_t

0xf311,	// (0x0005032b) cell_vkbss_key_3p_pane_g1

0xf319,	// (0x00050333) cell_vkbss_key_3p_pane_g2

0xf321,	// (0x0005033b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x00050ef8) cell_vkbss_key_3p_pane_g

0x9077,	// (0x0004a091) bg_popup_fep_char_preview_window_cp02

0xf329,	// (0x00050343) popup_fep_char_pre_window_t1

0xe625,	// (0x0004f63f) main_ai5_sk_pane

0xed50,	// (0x0004fd6a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed5c,	// (0x0004fd76) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed71,	// (0x0004fd8b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed7d,	// (0x0004fd97) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea8,	// (0x00050ec2) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed89,	// (0x0004fda3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0e3b,	// (0x00041e55) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf337,	// (0x00050351) main_ai5_sk_pane_g1

0x9d74,	// (0x0004ad8e) popup_query_code_window_g1

0xf19e,	// (0x000501b8) popup_fep_vkb_icf_pane

0xf1d3,	// (0x000501ed) popup_fep_vtchi_icf_pane

0xf340,	// (0x0005035a) bg_icf_pane

0xf340,	// (0x0005035a) list_vkb_icf_pane

0xf34c,	// (0x00050366) bg_icf_pane_cp01

0xf35f,	// (0x00050379) vtchi_icf_list_pane

0xf3bf,	// (0x000503d9) list_vkb_icf_pane_t1_ParamLimits

0xf3bf,	// (0x000503d9) list_vkb_icf_pane_t1

0xf3d8,	// (0x000503f2) vtchi_icf_list_pane_t1_ParamLimits

0xf3d8,	// (0x000503f2) vtchi_icf_list_pane_t1

0xf185,	// (0x0005019f) popup_fep_ituss_window_ParamLimits

0xf1d3,	// (0x000501ed) popup_fep_vtchi_icf_pane_ParamLimits

0xf1ff,	// (0x00050219) ituss_keypad_pane_ParamLimits

0x87c9,	// (0x000497e3) ituss_sks_pane

0xf340,	// (0x0005035a) bg_icf_pane_ParamLimits

0xf155,	// (0x0005016f) icf_edit_indi_pane_ParamLimits

0xf155,	// (0x0005016f) icf_edit_indi_pane

0xf340,	// (0x0005035a) list_vkb_icf_pane_ParamLimits

0xf34c,	// (0x00050366) bg_icf_pane_cp01_ParamLimits

0xf170,	// (0x0005018a) icf_edit_indi_pane_cp01_ParamLimits

0xf170,	// (0x0005018a) icf_edit_indi_pane_cp01

0xf35f,	// (0x00050379) vtchi_query_pane

0xe4c3,	// (0x0004f4dd) icf_edit_indi_pane_g1_ParamLimits

0xe4c3,	// (0x0004f4dd) icf_edit_indi_pane_g1

0xf448,	// (0x00050462) icf_edit_indi_pane_g2_ParamLimits

0xf448,	// (0x00050462) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x00050f23) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x00050f23) icf_edit_indi_pane_g

0xf45c,	// (0x00050476) icf_edit_indi_pane_t1

0xf3f1,	// (0x0005040b) bg_input_focus_pane_cp042

0x0d74,	// (0x00041d8e) vtchi_button_pane

0xf3fa,	// (0x00050414) vtchi_query_pane_t1

0xf408,	// (0x00050422) vtchi_query_pane_t2

0xf416,	// (0x00050430) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x00050f12) vtchi_query_pane_t

0xd2b3,	// (0x0004e2cd) bg_button_pane_cp13

0xf424,	// (0x0005043e) vtchi_button_pane_g1

0x89f4,	// (0x00049a0e) ituss_sks_pane_g1

0x89ff,	// (0x00049a19) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x00050f19) ituss_sks_pane_g

0xf42c,	// (0x00050446) ituss_sks_pane_t1

0xf43a,	// (0x00050454) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x00050f1e) ituss_sks_pane_t

0xb9d7,	// (0x0004c9f1) indicator_nsta_pane_cp_g1

0xb9e0,	// (0x0004c9fa) indicator_nsta_pane_cp_g2

0xb9e8,	// (0x0004ca02) indicator_nsta_pane_cp_g3

0xb9f0,	// (0x0004ca0a) indicator_nsta_pane_cp_g4

0xb9e0,	// (0x0004c9fa) indicator_nsta_pane_cp_g5

0xb9e8,	// (0x0004ca02) indicator_nsta_pane_cp_g6

0x0005,

0xfa86,	// (0x00050aa0) indicator_nsta_pane_cp_g

0xe1e9,	// (0x0004f203) cell_graphic2_pane_t2_ParamLimits

0xe1e9,	// (0x0004f203) cell_graphic2_pane_t2

0x0001,

0xfd93,	// (0x00050dad) cell_graphic2_pane_t_ParamLimits

0xfd93,	// (0x00050dad) cell_graphic2_pane_t

0xe215,	// (0x0004f22f) cell_graphic2_control_pane_t1

0x8b27,	// (0x00049b41) signal_pane_g3_ParamLimits

0x8b27,	// (0x00049b41) signal_pane_g3

0x8b36,	// (0x00049b50) signal_pane_g4_ParamLimits

0x8b36,	// (0x00049b50) signal_pane_g4

0xf13f,	// (0x00050159) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf13f,	// (0x00050159) cell_ai5_widget_list_row_pane_t3

0xf2ff,	// (0x00050319) cell_ituss_key_pane_t1_ParamLimits

0xf2ff,	// (0x00050319) cell_ituss_key_pane_t1

0x99db,	// (0x0004a9f5) form_field_data_wide_pane_vc_t2_ParamLimits

0x99db,	// (0x0004a9f5) form_field_data_wide_pane_vc_t2

0x99ef,	// (0x0004aa09) form_field_data_wide_pane_vc_t3_ParamLimits

0x99ef,	// (0x0004aa09) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e7,	// (0x00050801) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e7,	// (0x00050801) form_field_data_wide_pane_vc_t

0xb674,	// (0x0004c68e) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb674,	// (0x0004c68e) form_field_slider_wide_pane_vc_t3

0xb74a,	// (0x0004c764) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb74a,	// (0x0004c764) form_field_popup_wide_pane_vc_t2

0xb761,	// (0x0004c77b) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb761,	// (0x0004c77b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa75,	// (0x00050a8f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa75,	// (0x00050a8f) form_field_popup_wide_pane_vc_t

0x856a,	// (0x00049584) aid_fshwr2_btn_pane_ParamLimits

0x857a,	// (0x00049594) aid_fshwr2_syb_pane_ParamLimits

0x858e,	// (0x000495a8) aid_fshwr2_txt_pane_ParamLimits

0x0e3b,	// (0x00041e55) fshwr2_bg_pane_ParamLimits

0x859e,	// (0x000495b8) fshwr2_func_candi_pane_ParamLimits

0x85be,	// (0x000495d8) fshwr2_hwr_syb_pane_ParamLimits

0x85d4,	// (0x000495ee) fshwr2_icf_pane_ParamLimits

0x77ef,	// (0x00048809) list_double_graphic_pane_vc_g4_ParamLimits

0x77ef,	// (0x00048809) list_double_graphic_pane_vc_g4

0x8872,	// (0x0004988c) cell_ituss_key_pane_g3_ParamLimits

0x8872,	// (0x0004988c) cell_ituss_key_pane_g3

0x89a4,	// (0x000499be) cell_ituss_key_t5_ParamLimits

0x89a4,	// (0x000499be) cell_ituss_key_t5

0xf1b7,	// (0x000501d1) popup_fep_vkbss_window_ParamLimits

0xe62f,	// (0x0004f649) aid_cell_ai5_quarter

0xf45c,	// (0x00050476) icf_edit_indi_pane_t1_ParamLimits

0x09d4,	// (0x000419ee) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x09d4,	// (0x000419ee) aid_tch_indicator_popup_pane_cp2

0x09e7,	// (0x00041a01) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x09e7,	// (0x00041a01) aid_tch_query_popup_data_pane_cp2

0x9d1c,	// (0x0004ad36) aid_tch_query_popup_pane_ParamLimits

0x9d1c,	// (0x0004ad36) aid_tch_query_popup_pane

0x9d1c,	// (0x0004ad36) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9d1c,	// (0x0004ad36) aid_tch_query_popup_data_pane_cp1

0x93a6,	// (0x0004a3c0) cell_fshwr2_syb_bg_pane_ParamLimits

0x86d0,	// (0x000496ea) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x86e4,	// (0x000496fe) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf19e,	// (0x000501b8) popup_fep_vkb_icf_pane_ParamLimits

0x83be,	// (0x000493d8) bg_popup_fep_char_preview_window_g10

0xe767,	// (0x0004f781) cell_ai5_widget_pane_g11_ParamLimits

0xe767,	// (0x0004f781) cell_ai5_widget_pane_g11

0xe773,	// (0x0004f78d) cell_ai5_widget_pane_g12_ParamLimits

0xe773,	// (0x0004f78d) cell_ai5_widget_pane_g12

0xe77f,	// (0x0004f799) cell_ai5_widget_pane_g13_ParamLimits

0xe77f,	// (0x0004f799) cell_ai5_widget_pane_g13

0xe8af,	// (0x0004f8c9) cell_ai5_widget_pane_t11_ParamLimits

0xe8af,	// (0x0004f8c9) cell_ai5_widget_pane_t11

0xe8c1,	// (0x0004f8db) cell_ai5_widget_pane_t12_ParamLimits

0xe8c1,	// (0x0004f8db) cell_ai5_widget_pane_t12

0x887e,	// (0x00049898) cell_ituss_key_pane_g4_ParamLimits

0x887e,	// (0x00049898) cell_ituss_key_pane_g4

0x889a,	// (0x000498b4) cell_ituss_key_pane_g5_ParamLimits

0x889a,	// (0x000498b4) cell_ituss_key_pane_g5

0x88b6,	// (0x000498d0) cell_ituss_key_pane_g6_ParamLimits

0x88b6,	// (0x000498d0) cell_ituss_key_pane_g6

0x98d6,	// (0x0004a8f0) bg_icf_pane_g1

0xf367,	// (0x00050381) bg_icf_pane_g2

0xf373,	// (0x0005038d) bg_icf_pane_g3

0xf37d,	// (0x00050397) bg_icf_pane_g4

0xf389,	// (0x000503a3) bg_icf_pane_g5

0xf393,	// (0x000503ad) bg_icf_pane_g6

0xf39f,	// (0x000503b9) bg_icf_pane_g7

0xf3a9,	// (0x000503c3) bg_icf_pane_g8

0xf3b5,	// (0x000503cf) bg_icf_pane_g9

0x0008,

0xfee5,	// (0x00050eff) bg_icf_pane_g

0xf1ec,	// (0x00050206) popup_hyb_candi_window_ParamLimits

0xf1ec,	// (0x00050206) popup_hyb_candi_window

0x994a,	// (0x0004a964) bg_popup_sub_pane_cp01_ParamLimits

0x994a,	// (0x0004a964) bg_popup_sub_pane_cp01

0xf475,	// (0x0005048f) entry_hyb_candi_pane_ParamLimits

0xf475,	// (0x0005048f) entry_hyb_candi_pane

0xf484,	// (0x0005049e) grid_hyb_candi_pane_ParamLimits

0xf484,	// (0x0005049e) grid_hyb_candi_pane

0xf499,	// (0x000504b3) grid_hyb_phrase_pane_ParamLimits

0xf499,	// (0x000504b3) grid_hyb_phrase_pane

0xf4a8,	// (0x000504c2) cell_hyb_candi_pane_ParamLimits

0xf4a8,	// (0x000504c2) cell_hyb_candi_pane

0x0d7d,	// (0x00041d97) cell_hyb_candi_scroll_pane

0x8a4a,	// (0x00049a64) cell_hyb_candi_pane_g1

0xf4c4,	// (0x000504de) cell_hyb_candi_pane_t1

0xf4d2,	// (0x000504ec) cell_hyb_phrase_pane

0x8a4a,	// (0x00049a64) cell_hyb_phrase_pane_g1

0xf4db,	// (0x000504f5) cell_hyb_phrase_pane_t1

0xf4e9,	// (0x00050503) entry_hyb_candi_pane_t1

0x9077,	// (0x0004a091) input_focus_pane_cp06

0xf4f7,	// (0x00050511) cell_hyb_candi_scroll_pane_g1

0xf4ff,	// (0x00050519) cell_hyb_candi_scroll_pane_g1_aid

0xf507,	// (0x00050521) cell_hyb_candi_scroll_pane_g2

0xf50f,	// (0x00050529) cell_hyb_candi_scroll_pane_g2_aid

0xf517,	// (0x00050531) cell_hyb_candi_scroll_pane_g3

0xf51f,	// (0x00050539) cell_hyb_candi_scroll_pane_g4

0xe584,	// (0x0004f59e) ai5_page_g1

0x89b6,	// (0x000499d0) cell_ituss_key_t6_ParamLimits

0x89b6,	// (0x000499d0) cell_ituss_key_t6

0x87a8,	// (0x000497c2) icf_edit_indi_pane_cp02_ParamLimits

0x87a8,	// (0x000497c2) icf_edit_indi_pane_cp02

0x87bc,	// (0x000497d6) icf_edit_indi_pane_cp03_ParamLimits

0x87bc,	// (0x000497d6) icf_edit_indi_pane_cp03
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
