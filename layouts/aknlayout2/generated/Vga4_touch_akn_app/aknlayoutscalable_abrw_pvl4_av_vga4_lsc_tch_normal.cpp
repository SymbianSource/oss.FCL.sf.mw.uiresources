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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00011085 };

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
0xb0c6,	// (0x0001c14b) Screen

0xb0d2,	// (0x0001c157) application_window_ParamLimits

0xb0d2,	// (0x0001c157) application_window

0xea82,	// (0x0001fb07) screen_g1

0xa77a,	// (0x0001b7ff) area_bottom_pane_ParamLimits

0xa77a,	// (0x0001b7ff) area_bottom_pane

0xeaac,	// (0x0001fb31) area_top_pane_ParamLimits

0xeaac,	// (0x0001fb31) area_top_pane

0xeb4a,	// (0x0001fbcf) main_pane_ParamLimits

0xeb4a,	// (0x0001fbcf) main_pane

0xec05,	// (0x0001fc8a) misc_graphics

0xc648,	// (0x0001d6cd) battery_pane_ParamLimits

0xc648,	// (0x0001d6cd) battery_pane

0x44f1,	// (0x00015576) bg_status_flat_pane_g8

0x44f9,	// (0x0001557e) bg_status_flat_pane_g9

0x3857,	// (0x000148dc) context_pane_ParamLimits

0x3857,	// (0x000148dc) context_pane

0xc7e7,	// (0x0001d86c) navi_pane_ParamLimits

0xc7e7,	// (0x0001d86c) navi_pane

0xc871,	// (0x0001d8f6) signal_pane_ParamLimits

0xc871,	// (0x0001d8f6) signal_pane

0x0008,

0xf880,	// (0x00020905) bg_status_flat_pane_g

0xc901,	// (0x0001d986) status_pane_g1_ParamLimits

0xc901,	// (0x0001d986) status_pane_g1

0xc917,	// (0x0001d99c) status_pane_g2_ParamLimits

0xc917,	// (0x0001d99c) status_pane_g2

0x3a98,	// (0x00014b1d) status_pane_g3_ParamLimits

0x3a98,	// (0x00014b1d) status_pane_g3

0x0004,

0xf7b3,	// (0x00020838) status_pane_g_ParamLimits

0xf7b3,	// (0x00020838) status_pane_g

0xc923,	// (0x0001d9a8) title_pane_ParamLimits

0xc923,	// (0x0001d9a8) title_pane

0xc986,	// (0x0001da0b) uni_indicator_pane_ParamLimits

0xc986,	// (0x0001da0b) uni_indicator_pane

0x307c,	// (0x00014101) bg_list_pane_ParamLimits

0x307c,	// (0x00014101) bg_list_pane

0xbe72,	// (0x0001cef7) find_pane

0xbe7a,	// (0x0001ceff) listscroll_app_pane_ParamLimits

0xbe7a,	// (0x0001ceff) listscroll_app_pane

0x30b0,	// (0x00014135) listscroll_form_pane

0xbe86,	// (0x0001cf0b) listscroll_gen_pane_ParamLimits

0xbe86,	// (0x0001cf0b) listscroll_gen_pane

0x30b0,	// (0x00014135) listscroll_set_pane

0x50d2,	// (0x00016157) main_idle_act_pane

0x2d50,	// (0x00013dd5) main_idle_trad_pane

0x2d50,	// (0x00013dd5) main_list_empty_pane

0x30de,	// (0x00014163) main_midp_pane

0x30ea,	// (0x0001416f) main_pane_g1_ParamLimits

0x30ea,	// (0x0001416f) main_pane_g1

0xbea8,	// (0x0001cf2d) popup_ai_message_window_ParamLimits

0xbea8,	// (0x0001cf2d) popup_ai_message_window

0xbf48,	// (0x0001cfcd) popup_fep_china_uni_window_ParamLimits

0xbf48,	// (0x0001cfcd) popup_fep_china_uni_window

0x3210,	// (0x00014295) popup_fep_japan_candidate_window_ParamLimits

0x3210,	// (0x00014295) popup_fep_japan_candidate_window

0x323a,	// (0x000142bf) popup_fep_japan_predictive_window_ParamLimits

0x323a,	// (0x000142bf) popup_fep_japan_predictive_window

0xbfa8,	// (0x0001d02d) popup_find_window

0xbfc5,	// (0x0001d04a) popup_grid_graphic_window_ParamLimits

0xbfc5,	// (0x0001d04a) popup_grid_graphic_window

0x32ab,	// (0x00014330) popup_large_graphic_colour_window

0xc069,	// (0x0001d0ee) popup_menu_window_ParamLimits

0xc069,	// (0x0001d0ee) popup_menu_window

0xc255,	// (0x0001d2da) popup_note_image_window

0xc215,	// (0x0001d29a) popup_note_wait_window_ParamLimits

0xc215,	// (0x0001d29a) popup_note_wait_window

0xc26d,	// (0x0001d2f2) popup_note_window_ParamLimits

0xc26d,	// (0x0001d2f2) popup_note_window

0xc31b,	// (0x0001d3a0) popup_query_code_window_ParamLimits

0xc31b,	// (0x0001d3a0) popup_query_code_window

0x3517,	// (0x0001459c) popup_query_data_code_window_ParamLimits

0x3517,	// (0x0001459c) popup_query_data_code_window

0xc35b,	// (0x0001d3e0) popup_query_data_window_ParamLimits

0xc35b,	// (0x0001d3e0) popup_query_data_window

0xc3ef,	// (0x0001d474) popup_query_sat_info_window_ParamLimits

0xc3ef,	// (0x0001d474) popup_query_sat_info_window

0xc49a,	// (0x0001d51f) popup_snote_single_graphic_window_ParamLimits

0xc49a,	// (0x0001d51f) popup_snote_single_graphic_window

0xc49a,	// (0x0001d51f) popup_snote_single_text_window_ParamLimits

0xc49a,	// (0x0001d51f) popup_snote_single_text_window

0x35b2,	// (0x00014637) popup_sub_window_general

0x36f8,	// (0x0001477d) popup_window_general_ParamLimits

0x36f8,	// (0x0001477d) popup_window_general

0x3711,	// (0x00014796) power_save_pane

0xa900,	// (0x0001b985) control_pane_g1_ParamLimits

0xa900,	// (0x0001b985) control_pane_g1

0xa929,	// (0x0001b9ae) control_pane_g2_ParamLimits

0xa929,	// (0x0001b9ae) control_pane_g2

0x301d,	// (0x000140a2) control_pane_g3_ParamLimits

0x301d,	// (0x000140a2) control_pane_g3

0x0007,

0xf79b,	// (0x00020820) control_pane_g_ParamLimits

0xf79b,	// (0x00020820) control_pane_g

0xa964,	// (0x0001b9e9) control_pane_t1_ParamLimits

0xa964,	// (0x0001b9e9) control_pane_t1

0xa9c2,	// (0x0001ba47) control_pane_t2_ParamLimits

0xa9c2,	// (0x0001ba47) control_pane_t2

0x0002,

0xf7ac,	// (0x00020831) control_pane_t_ParamLimits

0xf7ac,	// (0x00020831) control_pane_t

0x2f3e,	// (0x00013fc3) navi_navi_volume_pane_cp1

0x2f47,	// (0x00013fcc) status_small_icon_pane

0x2f4f,	// (0x00013fd4) status_small_pane_g1_ParamLimits

0x2f4f,	// (0x00013fd4) status_small_pane_g1

0x2f83,	// (0x00014008) status_small_pane_g2_ParamLimits

0x2f83,	// (0x00014008) status_small_pane_g2

0x2f8f,	// (0x00014014) status_small_pane_g3_ParamLimits

0x2f8f,	// (0x00014014) status_small_pane_g3

0x2f9b,	// (0x00014020) status_small_pane_g4_ParamLimits

0x2f9b,	// (0x00014020) status_small_pane_g4

0x2fa7,	// (0x0001402c) status_small_pane_g5_ParamLimits

0x2fa7,	// (0x0001402c) status_small_pane_g5

0x2fb6,	// (0x0001403b) status_small_pane_g6_ParamLimits

0x2fb6,	// (0x0001403b) status_small_pane_g6

0x0007,

0xf78a,	// (0x0002080f) status_small_pane_g_ParamLimits

0xf78a,	// (0x0002080f) status_small_pane_g

0x2fe6,	// (0x0001406b) status_small_pane_t1

0x3009,	// (0x0001408e) status_small_wait_pane_ParamLimits

0x3009,	// (0x0001408e) status_small_wait_pane

0xbbe4,	// (0x0001cc69) aid_levels_signal_ParamLimits

0xbbe4,	// (0x0001cc69) aid_levels_signal

0xbbfc,	// (0x0001cc81) signal_pane_g1_ParamLimits

0xbbfc,	// (0x0001cc81) signal_pane_g1

0xbc17,	// (0x0001cc9c) signal_pane_g2_ParamLimits

0xbc17,	// (0x0001cc9c) signal_pane_g2

0x0003,

0xf71b,	// (0x000207a0) signal_pane_g_ParamLimits

0xf71b,	// (0x000207a0) signal_pane_g

0x2797,	// (0x0001381c) context_pane_g1

0xb0e2,	// (0x0001c167) title_pane_g1

0xb119,	// (0x0001c19e) title_pane_t1

0x1065,	// (0x000120ea) title_pane_t2

0x108b,	// (0x00012110) title_pane_t3

0x0002,

0xf56f,	// (0x000205f4) title_pane_t

0xc9ae,	// (0x0001da33) aid_levels_battery_ParamLimits

0xc9ae,	// (0x0001da33) aid_levels_battery

0xc9ca,	// (0x0001da4f) battery_pane_g1_ParamLimits

0xc9ca,	// (0x0001da4f) battery_pane_g1

0xc9e7,	// (0x0001da6c) battery_pane_g2_ParamLimits

0xc9e7,	// (0x0001da6c) battery_pane_g2

0x0001,

0xf7be,	// (0x00020843) battery_pane_g_ParamLimits

0xf7be,	// (0x00020843) battery_pane_g

0xcc42,	// (0x0001dcc7) uni_indicator_pane_g1

0xcc57,	// (0x0001dcdc) uni_indicator_pane_g2

0xcc6c,	// (0x0001dcf1) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x000209ad) uni_indicator_pane_g

0x2bbe,	// (0x00013c43) navi_icon_pane_ParamLimits

0x2bbe,	// (0x00013c43) navi_icon_pane

0x2b05,	// (0x00013b8a) navi_midp_pane

0x2bda,	// (0x00013c5f) navi_navi_pane

0x2be4,	// (0x00013c69) navi_text_pane_ParamLimits

0x2be4,	// (0x00013c69) navi_text_pane

0xea82,	// (0x0001fb07) status_small_wait_pane_g1

0x14e9,	// (0x0001256e) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x000209a8) status_small_wait_pane_g

0xcbe1,	// (0x0001dc66) navi_navi_icon_text_pane

0xcbe9,	// (0x0001dc6e) navi_navi_pane_g1_ParamLimits

0xcbe9,	// (0x0001dc6e) navi_navi_pane_g1

0xcbfb,	// (0x0001dc80) navi_navi_pane_g2_ParamLimits

0xcbfb,	// (0x0001dc80) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x00020976) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x00020976) navi_navi_pane_g

0x4b80,	// (0x00015c05) navi_navi_tabs_pane

0xcc0d,	// (0x0001dc92) navi_navi_text_pane

0xcbe1,	// (0x0001dc66) navi_navi_volume_pane

0xcbcf,	// (0x0001dc54) navi_text_pane_t1

0xcbc3,	// (0x0001dc48) navi_icon_pane_g1

0x4a71,	// (0x00015af6) navi_navi_text_pane_t1

0xac29,	// (0x0001bcae) navi_navi_volume_pane_g1

0xac31,	// (0x0001bcb6) volume_small_pane

0xcb1f,	// (0x0001dba4) navi_navi_icon_text_pane_g1

0xcb27,	// (0x0001dbac) navi_navi_icon_text_pane_t1

0x2bda,	// (0x00013c5f) navi_tabs_2_long_pane

0x2bda,	// (0x00013c5f) navi_tabs_2_pane

0x2bda,	// (0x00013c5f) navi_tabs_3_long_pane

0x2bda,	// (0x00013c5f) navi_tabs_3_pane

0x2bda,	// (0x00013c5f) navi_tabs_4_pane

0xac09,	// (0x0001bc8e) tabs_2_active_pane_ParamLimits

0xac09,	// (0x0001bc8e) tabs_2_active_pane

0xac19,	// (0x0001bc9e) tabs_2_passive_pane_ParamLimits

0xac19,	// (0x0001bc9e) tabs_2_passive_pane

0xabd7,	// (0x0001bc5c) tabs_3_active_pane_ParamLimits

0xabd7,	// (0x0001bc5c) tabs_3_active_pane

0xabe7,	// (0x0001bc6c) tabs_3_passive_pane_ParamLimits

0xabe7,	// (0x0001bc6c) tabs_3_passive_pane

0xabf8,	// (0x0001bc7d) tabs_3_passive_pane_cp_ParamLimits

0xabf8,	// (0x0001bc7d) tabs_3_passive_pane_cp

0xab93,	// (0x0001bc18) tabs_4_active_pane_ParamLimits

0xab93,	// (0x0001bc18) tabs_4_active_pane

0xaba4,	// (0x0001bc29) tabs_4_passive_pane_ParamLimits

0xaba4,	// (0x0001bc29) tabs_4_passive_pane

0xabb5,	// (0x0001bc3a) tabs_4_passive_pane_cp_ParamLimits

0xabb5,	// (0x0001bc3a) tabs_4_passive_pane_cp

0xabc6,	// (0x0001bc4b) tabs_4_passive_pane_cp2_ParamLimits

0xabc6,	// (0x0001bc4b) tabs_4_passive_pane_cp2

0xab6f,	// (0x0001bbf4) tabs_2_long_active_pane_ParamLimits

0xab6f,	// (0x0001bbf4) tabs_2_long_active_pane

0xab81,	// (0x0001bc06) tabs_2_long_passive_pane_ParamLimits

0xab81,	// (0x0001bc06) tabs_2_long_passive_pane

0xab24,	// (0x0001bba9) tabs_3_long_active_pane_ParamLimits

0xab24,	// (0x0001bba9) tabs_3_long_active_pane

0xab3d,	// (0x0001bbc2) tabs_3_long_passive_pane_ParamLimits

0xab3d,	// (0x0001bbc2) tabs_3_long_passive_pane

0xab56,	// (0x0001bbdb) tabs_3_long_passive_pane_cp_ParamLimits

0xab56,	// (0x0001bbdb) tabs_3_long_passive_pane_cp

0xf50c,	// (0x00020591) volume_small_pane_g1

0xaad3,	// (0x0001bb58) volume_small_pane_g2

0xaadc,	// (0x0001bb61) volume_small_pane_g3

0xaae5,	// (0x0001bb6a) volume_small_pane_g4

0xaaee,	// (0x0001bb73) volume_small_pane_g5

0xaaf7,	// (0x0001bb7c) volume_small_pane_g6

0xab00,	// (0x0001bb85) volume_small_pane_g7

0xab09,	// (0x0001bb8e) volume_small_pane_g8

0xab12,	// (0x0001bb97) volume_small_pane_g9

0xab1b,	// (0x0001bba0) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x00020942) volume_small_pane_g

0x1333,	// (0x000123b8) bg_active_tab_pane_cp2_ParamLimits

0x1333,	// (0x000123b8) bg_active_tab_pane_cp2

0xb1a5,	// (0x0001c22a) tabs_3_active_pane_g1

0xb1ad,	// (0x0001c232) tabs_3_active_pane_t1

0x1333,	// (0x000123b8) bg_passive_tab_pane_cp2_ParamLimits

0x1333,	// (0x000123b8) bg_passive_tab_pane_cp2

0xb1a5,	// (0x0001c22a) tabs_3_passive_pane_g1

0xb1ad,	// (0x0001c232) tabs_3_passive_pane_t1

0x1333,	// (0x000123b8) bg_active_tab_pane_cp3_ParamLimits

0x1333,	// (0x000123b8) bg_active_tab_pane_cp3

0xb1bf,	// (0x0001c244) tabs_4_active_pane_g1

0xb1c7,	// (0x0001c24c) tabs_4_active_pane_t1

0x1333,	// (0x000123b8) bg_passive_tab_pane_cp3_ParamLimits

0x1333,	// (0x000123b8) bg_passive_tab_pane_cp3

0xb1bf,	// (0x0001c244) tabs_4_1_passive_pane_g1

0xb1c7,	// (0x0001c24c) tabs_4_1_passive_pane_t1

0x30de,	// (0x00014163) list_highlight_pane_cp2

0xcd3c,	// (0x0001ddc1) list_set_pane_ParamLimits

0xcd3c,	// (0x0001ddc1) list_set_pane

0xce04,	// (0x0001de89) main_pane_set_t1_ParamLimits

0xce04,	// (0x0001de89) main_pane_set_t1

0xce24,	// (0x0001dea9) main_pane_set_t2_ParamLimits

0xce24,	// (0x0001dea9) main_pane_set_t2

0xce38,	// (0x0001debd) main_pane_set_t3_ParamLimits

0xce38,	// (0x0001debd) main_pane_set_t3

0xce4c,	// (0x0001ded1) main_pane_set_t4_ParamLimits

0xce4c,	// (0x0001ded1) main_pane_set_t4

0x0003,

0xf98d,	// (0x00020a12) main_pane_set_t_ParamLimits

0xf98d,	// (0x00020a12) main_pane_set_t

0xce60,	// (0x0001dee5) setting_code_pane

0x5232,	// (0x000162b7) setting_slider_graphic_pane

0x5232,	// (0x000162b7) setting_slider_pane

0x5232,	// (0x000162b7) setting_text_pane

0x5232,	// (0x000162b7) setting_volume_pane

0xeea1,	// (0x0001ff26) volume_set_pane

0x109d,	// (0x00012122) bg_set_opt_pane_cp

0xeeab,	// (0x0001ff30) setting_slider_pane_t1

0xeec1,	// (0x0001ff46) setting_slider_pane_t2

0xeedb,	// (0x0001ff60) setting_slider_pane_t3

0x0002,

0xf576,	// (0x000205fb) setting_slider_pane_t

0xeef3,	// (0x0001ff78) slider_set_pane

0xec05,	// (0x0001fc8a) bg_set_opt_pane_cp2

0x10df,	// (0x00012164) setting_slider_graphic_pane_g1

0xef09,	// (0x0001ff8e) setting_slider_graphic_pane_t1

0xef19,	// (0x0001ff9e) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x00020602) setting_slider_graphic_pane_t

0xef29,	// (0x0001ffae) slider_set_pane_cp

0xec05,	// (0x0001fc8a) input_focus_pane_cp1

0x50b9,	// (0x0001613e) list_set_text_pane

0xea82,	// (0x0001fb07) setting_text_pane_g1

0xec05,	// (0x0001fc8a) input_focus_pane_cp2

0xea82,	// (0x0001fb07) setting_code_pane_g1

0x10e8,	// (0x0001216d) setting_code_pane_t1

0x10f6,	// (0x0001217b) set_text_pane_t1_ParamLimits

0x10f6,	// (0x0001217b) set_text_pane_t1

0x2015,	// (0x0001309a) set_opt_bg_pane_g1

0x201d,	// (0x000130a2) set_opt_bg_pane_g2

0x5091,	// (0x00016116) set_opt_bg_pane_g3

0x202d,	// (0x000130b2) set_opt_bg_pane_g4

0x2035,	// (0x000130ba) set_opt_bg_pane_g5

0x203d,	// (0x000130c2) set_opt_bg_pane_g6

0x509b,	// (0x00016120) set_opt_bg_pane_g7

0x50a5,	// (0x0001612a) set_opt_bg_pane_g8

0x50af,	// (0x00016134) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x000209ff) set_opt_bg_pane_g

0x5084,	// (0x00016109) slider_set_pane_g1

0x014e,	// (0x000111d3) slider_set_pane_g2

0x0006,

0xf96b,	// (0x000209f0) slider_set_pane_g

0x00d6,	// (0x0001115b) volume_set_pane_g1

0x00e0,	// (0x00011165) volume_set_pane_g2

0x00ea,	// (0x0001116f) volume_set_pane_g3

0x00f4,	// (0x00011179) volume_set_pane_g4

0x00fe,	// (0x00011183) volume_set_pane_g5

0x0108,	// (0x0001118d) volume_set_pane_g6

0x0112,	// (0x00011197) volume_set_pane_g7

0x011c,	// (0x000111a1) volume_set_pane_g8

0x0126,	// (0x000111ab) volume_set_pane_g9

0x0130,	// (0x000111b5) volume_set_pane_g10

0x0009,

0xf943,	// (0x000209c8) volume_set_pane_g

0xb1d9,	// (0x0001c25e) indicator_pane_ParamLimits

0xb1d9,	// (0x0001c25e) indicator_pane

0xb205,	// (0x0001c28a) main_idle_pane_g2_ParamLimits

0xb205,	// (0x0001c28a) main_idle_pane_g2

0xb23d,	// (0x0001c2c2) main_pane_idle_g1_ParamLimits

0xb23d,	// (0x0001c2c2) main_pane_idle_g1

0x1152,	// (0x000121d7) popup_clock_digital_analogue_window_ParamLimits

0x1152,	// (0x000121d7) popup_clock_digital_analogue_window

0xb26b,	// (0x0001c2f0) soft_indicator_pane_ParamLimits

0xb26b,	// (0x0001c2f0) soft_indicator_pane

0xb287,	// (0x0001c30c) wallpaper_pane_ParamLimits

0xb287,	// (0x0001c30c) wallpaper_pane

0xea82,	// (0x0001fb07) wallpaper_pane_g1

0xb299,	// (0x0001c31e) indicator_pane_g1_ParamLimits

0xb299,	// (0x0001c31e) indicator_pane_g1

0x5557,	// (0x000165dc) navi_navi_icon_text_pane_srt_g1

0x11a6,	// (0x0001222b) soft_indicator_pane_t1

0x11c0,	// (0x00012245) aid_ps_area_pane

0xb2b2,	// (0x0001c337) aid_ps_clock_pane

0x11df,	// (0x00012264) aid_ps_indicator_pane

0x11eb,	// (0x00012270) indicator_ps_pane_ParamLimits

0x11eb,	// (0x00012270) indicator_ps_pane

0x11fa,	// (0x0001227f) power_save_pane_g1_ParamLimits

0x11fa,	// (0x0001227f) power_save_pane_g1

0x1206,	// (0x0001228b) power_save_pane_g2_ParamLimits

0x1206,	// (0x0001228b) power_save_pane_g2

0xea8c,	// (0x0001fb11) aid_navinavi_width_pane

0x11c0,	// (0x00012245) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x00020607) power_save_pane_g_ParamLimits

0xf582,	// (0x00020607) power_save_pane_g

0x1214,	// (0x00012299) power_save_pane_t1_ParamLimits

0x1214,	// (0x00012299) power_save_pane_t1

0xb2b2,	// (0x0001c337) aid_ps_clock_pane_ParamLimits

0x11df,	// (0x00012264) aid_ps_indicator_pane_ParamLimits

0x1226,	// (0x000122ab) power_save_pane_t4_ParamLimits

0x1226,	// (0x000122ab) power_save_pane_t4

0x0001,

0xf587,	// (0x0002060c) power_save_pane_t_ParamLimits

0xf587,	// (0x0002060c) power_save_pane_t

0x1250,	// (0x000122d5) power_save_t3_ParamLimits

0x1250,	// (0x000122d5) power_save_t3

0x123b,	// (0x000122c0) power_save_t2_ParamLimits

0x123b,	// (0x000122c0) power_save_t2

0x1265,	// (0x000122ea) indicator_ps_pane_g1

0xb2c0,	// (0x0001c345) ai_gene_pane_ParamLimits

0xb2c0,	// (0x0001c345) ai_gene_pane

0xb2d7,	// (0x0001c35c) ai_links_pane_ParamLimits

0xb2d7,	// (0x0001c35c) ai_links_pane

0xb2ef,	// (0x0001c374) indicator_pane_cp1_ParamLimits

0xb2ef,	// (0x0001c374) indicator_pane_cp1

0xb2fe,	// (0x0001c383) main_pane_idle_g1_cp_ParamLimits

0xb2fe,	// (0x0001c383) main_pane_idle_g1_cp

0x129e,	// (0x00012323) popup_ai_links_title_window

0xb316,	// (0x0001c39b) soft_indicator_pane_cp1_ParamLimits

0xb316,	// (0x0001c39b) soft_indicator_pane_cp1

0x4e2f,	// (0x00015eb4) ai_links_pane_g1

0x4e38,	// (0x00015ebd) grid_ai_links_pane

0xcc39,	// (0x0001dcbe) ai_gene_pane_1

0x4e1d,	// (0x00015ea2) ai_gene_pane_2

0x4e26,	// (0x00015eab) list_highlight_pane_cp4

0xcc15,	// (0x0001dc9a) cell_ai_link_pane_ParamLimits

0xcc15,	// (0x0001dc9a) cell_ai_link_pane

0x4dec,	// (0x00015e71) cell_ai_link_pane_g1

0x14e9,	// (0x0001256e) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x000209a3) cell_ai_link_pane_g

0xec05,	// (0x0001fc8a) grid_highlight_cp2

0xec05,	// (0x0001fc8a) bg_popup_sub_pane_cp1

0x12c1,	// (0x00012346) popup_ai_links_title_window_t1

0x4d38,	// (0x00015dbd) ai_gene_pane_1_g1_ParamLimits

0x4d38,	// (0x00015dbd) ai_gene_pane_1_g1

0x4d44,	// (0x00015dc9) ai_gene_pane_1_g2_ParamLimits

0x4d44,	// (0x00015dc9) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x00020999) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x00020999) ai_gene_pane_1_g

0x4d51,	// (0x00015dd6) ai_gene_pane_1_t1_ParamLimits

0x4d51,	// (0x00015dd6) ai_gene_pane_1_t1

0x4d85,	// (0x00015e0a) grid_ai_soft_ind_pane

0x4d23,	// (0x00015da8) ai_gene_pane_2_t1_ParamLimits

0x4d23,	// (0x00015da8) ai_gene_pane_2_t1

0xb32a,	// (0x0001c3af) main_pane_empty_t1_ParamLimits

0xb32a,	// (0x0001c3af) main_pane_empty_t1

0xb342,	// (0x0001c3c7) main_pane_empty_t2_ParamLimits

0xb342,	// (0x0001c3c7) main_pane_empty_t2

0xb357,	// (0x0001c3dc) main_pane_empty_t3_ParamLimits

0xb357,	// (0x0001c3dc) main_pane_empty_t3

0xb369,	// (0x0001c3ee) main_pane_empty_t4_ParamLimits

0xb369,	// (0x0001c3ee) main_pane_empty_t4

0xb37b,	// (0x0001c400) main_pane_empty_t5_ParamLimits

0xb37b,	// (0x0001c400) main_pane_empty_t5

0x0004,

0xf58c,	// (0x00020611) main_pane_empty_t_ParamLimits

0xf58c,	// (0x00020611) main_pane_empty_t

0x20f3,	// (0x00013178) bg_popup_window_pane_ParamLimits

0x20f3,	// (0x00013178) bg_popup_window_pane

0x4a7f,	// (0x00015b04) find_popup_pane_cp2_ParamLimits

0x4a7f,	// (0x00015b04) find_popup_pane_cp2

0x4a8b,	// (0x00015b10) heading_pane_ParamLimits

0x4a8b,	// (0x00015b10) heading_pane

0xec05,	// (0x0001fc8a) bg_popup_sub_pane

0xcb44,	// (0x0001dbc9) bg_popup_window_pane_g1_ParamLimits

0xcb44,	// (0x0001dbc9) bg_popup_window_pane_g1

0xcb53,	// (0x0001dbd8) bg_popup_window_pane_g2_ParamLimits

0xcb53,	// (0x0001dbd8) bg_popup_window_pane_g2

0xcb5f,	// (0x0001dbe4) bg_popup_window_pane_g3_ParamLimits

0xcb5f,	// (0x0001dbe4) bg_popup_window_pane_g3

0xcb6b,	// (0x0001dbf0) bg_popup_window_pane_g4_ParamLimits

0xcb6b,	// (0x0001dbf0) bg_popup_window_pane_g4

0xcb7a,	// (0x0001dbff) bg_popup_window_pane_g5_ParamLimits

0xcb7a,	// (0x0001dbff) bg_popup_window_pane_g5

0xcb8a,	// (0x0001dc0f) bg_popup_window_pane_g6_ParamLimits

0xcb8a,	// (0x0001dc0f) bg_popup_window_pane_g6

0xcb96,	// (0x0001dc1b) bg_popup_window_pane_g7_ParamLimits

0xcb96,	// (0x0001dc1b) bg_popup_window_pane_g7

0xcba5,	// (0x0001dc2a) bg_popup_window_pane_g8_ParamLimits

0xcba5,	// (0x0001dc2a) bg_popup_window_pane_g8

0xcbb4,	// (0x0001dc39) bg_popup_window_pane_g9_ParamLimits

0xcbb4,	// (0x0001dc39) bg_popup_window_pane_g9

0x4a65,	// (0x00015aea) bg_popup_window_pane_g10_ParamLimits

0x4a65,	// (0x00015aea) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x00020961) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x00020961) bg_popup_window_pane_g

0x498e,	// (0x00015a13) bg_popup_heading_pane_ParamLimits

0x498e,	// (0x00015a13) bg_popup_heading_pane

0x01d6,	// (0x0001125b) tabs_4_passive_pane_cp_srt_ParamLimits

0x01d6,	// (0x0001125b) tabs_4_passive_pane_cp_srt

0x01e8,	// (0x0001126d) tabs_4_passive_pane_srt_ParamLimits

0x49a2,	// (0x00015a27) heading_pane_g2

0x01e8,	// (0x0001126d) tabs_4_passive_pane_srt

0x3d6d,	// (0x00014df2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3d6d,	// (0x00014df2) bg_passive_tab_pane_cp3_srt

0x49aa,	// (0x00015a2f) heading_pane_t1_ParamLimits

0x49aa,	// (0x00015a2f) heading_pane_t1

0x49c1,	// (0x00015a46) heading_pane_t2_ParamLimits

0x49c1,	// (0x00015a46) heading_pane_t2

0x0001,

0xf8d7,	// (0x0002095c) heading_pane_t_ParamLimits

0xf8d7,	// (0x0002095c) heading_pane_t

0x44b9,	// (0x0001553e) bg_popup_heading_pane_g1

0x4568,	// (0x000155ed) bg_popup_heading_pane_g2

0x4572,	// (0x000155f7) bg_popup_heading_pane_g3

0x457c,	// (0x00015601) bg_popup_heading_pane_g4

0x4586,	// (0x0001560b) bg_popup_heading_pane_g5

0x4590,	// (0x00015615) bg_popup_heading_pane_g6

0x4598,	// (0x0001561d) bg_popup_heading_pane_g7

0x45a0,	// (0x00015625) bg_popup_heading_pane_g8

0x45aa,	// (0x0001562f) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x00020918) bg_popup_heading_pane_g

0x3c51,	// (0x00014cd6) bg_popup_sub_pane_g1

0x3c61,	// (0x00014ce6) bg_popup_sub_pane_g2

0x3c59,	// (0x00014cde) bg_popup_sub_pane_g3

0x3c71,	// (0x00014cf6) bg_popup_sub_pane_g4

0x3c69,	// (0x00014cee) bg_popup_sub_pane_g5

0x3c79,	// (0x00014cfe) bg_popup_sub_pane_g6

0x3c81,	// (0x00014d06) bg_popup_sub_pane_g7

0x3c91,	// (0x00014d16) bg_popup_sub_pane_g8

0x3c89,	// (0x00014d0e) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x000208f2) bg_popup_sub_pane_g

0x1333,	// (0x000123b8) bg_popup_window_pane_cp5_ParamLimits

0x1333,	// (0x000123b8) bg_popup_window_pane_cp5

0x134f,	// (0x000123d4) popup_note_window_g1_ParamLimits

0x134f,	// (0x000123d4) popup_note_window_g1

0x135b,	// (0x000123e0) popup_note_window_t1_ParamLimits

0x135b,	// (0x000123e0) popup_note_window_t1

0x1371,	// (0x000123f6) popup_note_window_t2_ParamLimits

0x1371,	// (0x000123f6) popup_note_window_t2

0x1387,	// (0x0001240c) popup_note_window_t3_ParamLimits

0x1387,	// (0x0001240c) popup_note_window_t3

0x139d,	// (0x00012422) popup_note_window_t4_ParamLimits

0x139d,	// (0x00012422) popup_note_window_t4

0x13c5,	// (0x0001244a) popup_note_window_t5_ParamLimits

0x13c5,	// (0x0001244a) popup_note_window_t5

0x0004,

0xf597,	// (0x0002061c) popup_note_window_t_ParamLimits

0xf597,	// (0x0002061c) popup_note_window_t

0x13e9,	// (0x0001246e) bg_popup_window_pane_cp6_ParamLimits

0x13e9,	// (0x0001246e) bg_popup_window_pane_cp6

0x4435,	// (0x000154ba) popup_note_image_window_g1_ParamLimits

0x4435,	// (0x000154ba) popup_note_image_window_g1

0x4441,	// (0x000154c6) popup_note_image_window_g2_ParamLimits

0x4441,	// (0x000154c6) popup_note_image_window_g2

0x0001,

0xf861,	// (0x000208e6) popup_note_image_window_g_ParamLimits

0xf861,	// (0x000208e6) popup_note_image_window_g

0x445a,	// (0x000154df) popup_note_image_window_t1_ParamLimits

0x445a,	// (0x000154df) popup_note_image_window_t1

0x4473,	// (0x000154f8) popup_note_image_window_t2_ParamLimits

0x4473,	// (0x000154f8) popup_note_image_window_t2

0x448c,	// (0x00015511) popup_note_image_window_t3_ParamLimits

0x448c,	// (0x00015511) popup_note_image_window_t3

0x0002,

0xf866,	// (0x000208eb) popup_note_image_window_t_ParamLimits

0xf866,	// (0x000208eb) popup_note_image_window_t

0x42f5,	// (0x0001537a) bg_popup_window_pane_cp7_ParamLimits

0x42f5,	// (0x0001537a) bg_popup_window_pane_cp7

0x4325,	// (0x000153aa) popup_note_wait_window_g1_ParamLimits

0x4325,	// (0x000153aa) popup_note_wait_window_g1

0x4331,	// (0x000153b6) popup_note_wait_window_g2_ParamLimits

0x4331,	// (0x000153b6) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x000208d4) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x000208d4) popup_note_wait_window_g

0x4349,	// (0x000153ce) popup_note_wait_window_t1_ParamLimits

0x4349,	// (0x000153ce) popup_note_wait_window_t1

0x4370,	// (0x000153f5) popup_note_wait_window_t2_ParamLimits

0x4370,	// (0x000153f5) popup_note_wait_window_t2

0x438e,	// (0x00015413) popup_note_wait_window_t3_ParamLimits

0x438e,	// (0x00015413) popup_note_wait_window_t3

0x43a1,	// (0x00015426) popup_note_wait_window_t4_ParamLimits

0x43a1,	// (0x00015426) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x000208db) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x000208db) popup_note_wait_window_t

0x43c6,	// (0x0001544b) wait_bar_pane_ParamLimits

0x43c6,	// (0x0001544b) wait_bar_pane

0xec05,	// (0x0001fc8a) wait_anim_pane

0xec05,	// (0x0001fc8a) wait_border_pane

0xea82,	// (0x0001fb07) wait_anim_pane_g1

0xea82,	// (0x0001fb07) wait_anim_pane_g2

0x0001,

0xf716,	// (0x0002079b) wait_anim_pane_g

0x4299,	// (0x0001531e) wait_border_pane_g1

0x42a4,	// (0x00015329) wait_border_pane_g2

0x42ad,	// (0x00015332) wait_border_pane_g3

0x0002,

0xf848,	// (0x000208cd) wait_border_pane_g

0x4103,	// (0x00015188) bg_popup_window_pane_cp16_ParamLimits

0x4103,	// (0x00015188) bg_popup_window_pane_cp16

0x4203,	// (0x00015288) indicator_popup_pane_cp4_ParamLimits

0x4203,	// (0x00015288) indicator_popup_pane_cp4

0x4217,	// (0x0001529c) popup_query_data_window_t1_ParamLimits

0x4217,	// (0x0001529c) popup_query_data_window_t1

0x4229,	// (0x000152ae) popup_query_data_window_t2_ParamLimits

0x4229,	// (0x000152ae) popup_query_data_window_t2

0x4242,	// (0x000152c7) popup_query_data_window_t3_ParamLimits

0x4242,	// (0x000152c7) popup_query_data_window_t3

0x0002,

0xf841,	// (0x000208c6) popup_query_data_window_t_ParamLimits

0xf841,	// (0x000208c6) popup_query_data_window_t

0x425c,	// (0x000152e1) query_popup_data_pane_ParamLimits

0x425c,	// (0x000152e1) query_popup_data_pane

0x4270,	// (0x000152f5) query_popup_data_pane_cp1_ParamLimits

0x4270,	// (0x000152f5) query_popup_data_pane_cp1

0x4103,	// (0x00015188) bg_popup_window_pane_cp10_ParamLimits

0x4103,	// (0x00015188) bg_popup_window_pane_cp10

0x4135,	// (0x000151ba) indicator_popup_pane_ParamLimits

0x4135,	// (0x000151ba) indicator_popup_pane

0x4157,	// (0x000151dc) popup_query_code_window_t1_ParamLimits

0x4157,	// (0x000151dc) popup_query_code_window_t1

0x4171,	// (0x000151f6) popup_query_code_window_t2_ParamLimits

0x4171,	// (0x000151f6) popup_query_code_window_t2

0x41ba,	// (0x0001523f) popup_query_code_window_t3_ParamLimits

0x41ba,	// (0x0001523f) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x000208bf) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x000208bf) popup_query_code_window_t

0x41e9,	// (0x0001526e) query_popup_pane_ParamLimits

0x41e9,	// (0x0001526e) query_popup_pane

0x13e9,	// (0x0001246e) bg_popup_window_pane_cp15_ParamLimits

0x13e9,	// (0x0001246e) bg_popup_window_pane_cp15

0x1409,	// (0x0001248e) indicator_popup_pane_cp1_ParamLimits

0x1409,	// (0x0001248e) indicator_popup_pane_cp1

0x141c,	// (0x000124a1) indicator_popup_pane_cp2_ParamLimits

0x141c,	// (0x000124a1) indicator_popup_pane_cp2

0x1437,	// (0x000124bc) popup_query_data_code_window_g1_ParamLimits

0x1437,	// (0x000124bc) popup_query_data_code_window_g1

0x144a,	// (0x000124cf) popup_query_data_code_window_t1_ParamLimits

0x144a,	// (0x000124cf) popup_query_data_code_window_t1

0x145c,	// (0x000124e1) popup_query_data_code_window_t2_ParamLimits

0x145c,	// (0x000124e1) popup_query_data_code_window_t2

0x146e,	// (0x000124f3) popup_query_data_code_window_t3_ParamLimits

0x146e,	// (0x000124f3) popup_query_data_code_window_t3

0x1484,	// (0x00012509) popup_query_data_code_window_t4_ParamLimits

0x1484,	// (0x00012509) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x00020627) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x00020627) popup_query_data_code_window_t

0xf477,	// (0x000204fc) list_single_midp_graphic_pane_g3

0x149e,	// (0x00012523) query_popup_data_pane_cp2_ParamLimits

0x14b1,	// (0x00012536) query_popup_pane_cp2_ParamLimits

0x14b1,	// (0x00012536) query_popup_pane_cp2

0xec05,	// (0x0001fc8a) bg_popup_window_pane_cp11

0x40fb,	// (0x00015180) heading_pane_cp5

0x15a1,	// (0x00012626) listscroll_popup_info_pane

0xec05,	// (0x0001fc8a) input_focus_pane_cp3

0x14cc,	// (0x00012551) query_popup_pane_t1

0x14da,	// (0x0001255f) list_popup_info_pane_ParamLimits

0x14da,	// (0x0001255f) list_popup_info_pane

0x14e9,	// (0x0001256e) listscroll_popup_info_pane_g1

0x14f1,	// (0x00012576) scroll_pane_cp7

0x14fb,	// (0x00012580) popup_info_list_pane_t1_ParamLimits

0x14fb,	// (0x00012580) popup_info_list_pane_t1

0x1515,	// (0x0001259a) popup_info_list_pane_t2_ParamLimits

0x1515,	// (0x0001259a) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x00020630) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x00020630) popup_info_list_pane_t

0xec05,	// (0x0001fc8a) bg_popup_window_pane_cp12

0x5571,	// (0x000165f6) find_popup_pane

0x109d,	// (0x00012122) bg_popup_window_pane_cp3

0x152f,	// (0x000125b4) heading_pane_cp3

0x153b,	// (0x000125c0) listscroll_popup_graphic_pane

0xec05,	// (0x0001fc8a) bg_popup_window_pane_cp4

0xb3dd,	// (0x0001c462) heading_pane_cp4

0x15a1,	// (0x00012626) listscroll_popup_colour_pane

0xb3e7,	// (0x0001c46c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb3e7,	// (0x0001c46c) cell_large_graphic_colour_none_popup_pane

0xb3fb,	// (0x0001c480) grid_large_graphic_colour_popup_pane_ParamLimits

0xb3fb,	// (0x0001c480) grid_large_graphic_colour_popup_pane

0xb427,	// (0x0001c4ac) listscroll_popup_colour_pane_g1_ParamLimits

0xb427,	// (0x0001c4ac) listscroll_popup_colour_pane_g1

0xb43e,	// (0x0001c4c3) listscroll_popup_colour_pane_g2_ParamLimits

0xb43e,	// (0x0001c4c3) listscroll_popup_colour_pane_g2

0xb455,	// (0x0001c4da) listscroll_popup_colour_pane_g3_ParamLimits

0xb455,	// (0x0001c4da) listscroll_popup_colour_pane_g3

0xb465,	// (0x0001c4ea) listscroll_popup_colour_pane_g4_ParamLimits

0xb465,	// (0x0001c4ea) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x00020635) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x00020635) listscroll_popup_colour_pane_g

0x163b,	// (0x000126c0) scroll_pane_cp6_ParamLimits

0x163b,	// (0x000126c0) scroll_pane_cp6

0xb479,	// (0x0001c4fe) cell_large_graphic_colour_popup_pane_ParamLimits

0xb479,	// (0x0001c4fe) cell_large_graphic_colour_popup_pane

0x1672,	// (0x000126f7) cell_large_graphic_colour_none_popup_pane_t1

0xec05,	// (0x0001fc8a) grid_highlight_pane_cp5

0x1681,	// (0x00012706) cell_large_graphic_colour_popup_pane_g1

0x1689,	// (0x0001270e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0002063e) cell_large_graphic_colour_popup_pane_g

0x1691,	// (0x00012716) cell_large_graphic_colour_popup_pane_g2_copy1

0x169a,	// (0x0001271f) grid_highlight_pane_cp4

0x16a2,	// (0x00012727) bg_popup_window_pane_cp8_ParamLimits

0x16a2,	// (0x00012727) bg_popup_window_pane_cp8

0x16bd,	// (0x00012742) popup_snote_single_text_window_g1_ParamLimits

0x16bd,	// (0x00012742) popup_snote_single_text_window_g1

0x16cf,	// (0x00012754) popup_snote_single_text_window_t1_ParamLimits

0x16cf,	// (0x00012754) popup_snote_single_text_window_t1

0x16e2,	// (0x00012767) popup_snote_single_text_window_t2_ParamLimits

0x16e2,	// (0x00012767) popup_snote_single_text_window_t2

0x16f5,	// (0x0001277a) popup_snote_single_text_window_t3_ParamLimits

0x16f5,	// (0x0001277a) popup_snote_single_text_window_t3

0x172e,	// (0x000127b3) popup_snote_single_text_window_t4_ParamLimits

0x172e,	// (0x000127b3) popup_snote_single_text_window_t4

0x1762,	// (0x000127e7) popup_snote_single_text_window_t5_ParamLimits

0x1762,	// (0x000127e7) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x00020643) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x00020643) popup_snote_single_text_window_t

0x1791,	// (0x00012816) bg_popup_window_pane_cp9_ParamLimits

0x1791,	// (0x00012816) bg_popup_window_pane_cp9

0x16bd,	// (0x00012742) popup_snote_single_graphic_window_g1_ParamLimits

0x16bd,	// (0x00012742) popup_snote_single_graphic_window_g1

0x179f,	// (0x00012824) popup_snote_single_graphic_window_g2_ParamLimits

0x179f,	// (0x00012824) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0002064e) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0002064e) popup_snote_single_graphic_window_g

0x17ab,	// (0x00012830) popup_snote_single_graphic_window_t1_ParamLimits

0x17ab,	// (0x00012830) popup_snote_single_graphic_window_t1

0x17be,	// (0x00012843) popup_snote_single_graphic_window_t2_ParamLimits

0x17be,	// (0x00012843) popup_snote_single_graphic_window_t2

0x17d1,	// (0x00012856) popup_snote_single_graphic_window_t3_ParamLimits

0x17d1,	// (0x00012856) popup_snote_single_graphic_window_t3

0x180a,	// (0x0001288f) popup_snote_single_graphic_window_t4_ParamLimits

0x180a,	// (0x0001288f) popup_snote_single_graphic_window_t4

0x183e,	// (0x000128c3) popup_snote_single_graphic_window_t5_ParamLimits

0x183e,	// (0x000128c3) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x00020653) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x00020653) popup_snote_single_graphic_window_t

0x54af,	// (0x00016534) grid_graphic_popup_pane_ParamLimits

0x54af,	// (0x00016534) grid_graphic_popup_pane

0x54dd,	// (0x00016562) listscroll_popup_graphic_pane_g1_ParamLimits

0x54dd,	// (0x00016562) listscroll_popup_graphic_pane_g1

0xcfa2,	// (0x0001e027) listscroll_popup_graphic_pane_g2_ParamLimits

0xcfa2,	// (0x0001e027) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x00020a3c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x00020a3c) listscroll_popup_graphic_pane_g

0x5505,	// (0x0001658a) scroll_pane_cp5

0xcf62,	// (0x0001dfe7) cell_graphic_popup_pane_ParamLimits

0xcf62,	// (0x0001dfe7) cell_graphic_popup_pane

0x5438,	// (0x000164bd) cell_graphic_popup_pane_g1

0x5440,	// (0x000164c5) cell_graphic_popup_pane_g2

0x1691,	// (0x00012716) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x00020a35) cell_graphic_popup_pane_g

0x5449,	// (0x000164ce) cell_graphic_popup_pane_t2

0x169a,	// (0x0001271f) grid_highlight_pane_cp3

0x187f,	// (0x00012904) list_gen_pane_ParamLimits

0x187f,	// (0x00012904) list_gen_pane

0x18b1,	// (0x00012936) scroll_pane

0xcf1d,	// (0x0001dfa2) bg_list_pane_g1_ParamLimits

0xcf1d,	// (0x0001dfa2) bg_list_pane_g1

0x53b5,	// (0x0001643a) bg_list_pane_g2_ParamLimits

0x53b5,	// (0x0001643a) bg_list_pane_g2

0x53c8,	// (0x0001644d) bg_list_pane_g3_ParamLimits

0x53c8,	// (0x0001644d) bg_list_pane_g3

0x53da,	// (0x0001645f) bg_list_pane_g4_ParamLimits

0x53da,	// (0x0001645f) bg_list_pane_g4

0xcf38,	// (0x0001dfbd) bg_list_pane_g5_ParamLimits

0xcf38,	// (0x0001dfbd) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x00020a2a) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x00020a2a) bg_list_pane_g

0xceba,	// (0x0001df3f) list_double2_graphic_large_graphic_pane_ParamLimits

0xceba,	// (0x0001df3f) list_double2_graphic_large_graphic_pane

0xceba,	// (0x0001df3f) list_double2_graphic_pane_ParamLimits

0xceba,	// (0x0001df3f) list_double2_graphic_pane

0xceba,	// (0x0001df3f) list_double2_large_graphic_pane_ParamLimits

0xceba,	// (0x0001df3f) list_double2_large_graphic_pane

0xceba,	// (0x0001df3f) list_double2_pane_ParamLimits

0xceba,	// (0x0001df3f) list_double2_pane

0xceba,	// (0x0001df3f) list_double_graphic_heading_pane_ParamLimits

0xceba,	// (0x0001df3f) list_double_graphic_heading_pane

0xceba,	// (0x0001df3f) list_double_graphic_pane_ParamLimits

0xceba,	// (0x0001df3f) list_double_graphic_pane

0xceba,	// (0x0001df3f) list_double_heading_pane_ParamLimits

0xceba,	// (0x0001df3f) list_double_heading_pane

0xceba,	// (0x0001df3f) list_double_large_graphic_pane_ParamLimits

0xceba,	// (0x0001df3f) list_double_large_graphic_pane

0xceba,	// (0x0001df3f) list_double_number_pane_ParamLimits

0xceba,	// (0x0001df3f) list_double_number_pane

0xceba,	// (0x0001df3f) list_double_pane_ParamLimits

0xceba,	// (0x0001df3f) list_double_pane

0xceba,	// (0x0001df3f) list_double_time_pane_ParamLimits

0xceba,	// (0x0001df3f) list_double_time_pane

0xceba,	// (0x0001df3f) list_setting_number_pane_ParamLimits

0xceba,	// (0x0001df3f) list_setting_number_pane

0xceba,	// (0x0001df3f) list_setting_pane_ParamLimits

0xceba,	// (0x0001df3f) list_setting_pane

0xcece,	// (0x0001df53) list_single_2graphic_pane_ParamLimits

0xcece,	// (0x0001df53) list_single_2graphic_pane

0xcece,	// (0x0001df53) list_single_graphic_heading_pane_ParamLimits

0xcece,	// (0x0001df53) list_single_graphic_heading_pane

0xcece,	// (0x0001df53) list_single_graphic_pane_ParamLimits

0xcece,	// (0x0001df53) list_single_graphic_pane

0xcece,	// (0x0001df53) list_single_heading_pane_ParamLimits

0xcece,	// (0x0001df53) list_single_heading_pane

0xcece,	// (0x0001df53) list_single_large_graphic_pane_ParamLimits

0xcece,	// (0x0001df53) list_single_large_graphic_pane

0xcece,	// (0x0001df53) list_single_number_heading_pane_ParamLimits

0xcece,	// (0x0001df53) list_single_number_heading_pane

0xcece,	// (0x0001df53) list_single_number_pane_ParamLimits

0xcece,	// (0x0001df53) list_single_number_pane

0xcece,	// (0x0001df53) list_single_pane_ParamLimits

0xcece,	// (0x0001df53) list_single_pane

0xec05,	// (0x0001fc8a) list_highlight_pane_cp1

0x2cc1,	// (0x00013d46) list_single_pane_g1_ParamLimits

0x2cc1,	// (0x00013d46) list_single_pane_g1

0x3bd3,	// (0x00014c58) list_single_pane_g2_ParamLimits

0x3bd3,	// (0x00014c58) list_single_pane_g2

0x0001,

0xf5e0,	// (0x00020665) list_single_pane_g_ParamLimits

0xf5e0,	// (0x00020665) list_single_pane_g

0x5b42,	// (0x00016bc7) list_single_pane_t1_ParamLimits

0x5b42,	// (0x00016bc7) list_single_pane_t1

0x2cc1,	// (0x00013d46) list_single_number_pane_g1_ParamLimits

0x2cc1,	// (0x00013d46) list_single_number_pane_g1

0x3bd3,	// (0x00014c58) list_single_number_pane_g2_ParamLimits

0x3bd3,	// (0x00014c58) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x00020665) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x00020665) list_single_number_pane_g

0x3bdf,	// (0x00014c64) list_single_number_pane_t1_ParamLimits

0x3bdf,	// (0x00014c64) list_single_number_pane_t1

0xccd8,	// (0x0001dd5d) list_single_number_pane_t2_ParamLimits

0xccd8,	// (0x0001dd5d) list_single_number_pane_t2

0x0001,

0xf966,	// (0x000209eb) list_single_number_pane_t_ParamLimits

0xf966,	// (0x000209eb) list_single_number_pane_t

0x6f21,	// (0x00017fa6) list_single_graphic_pane_g1_ParamLimits

0x6f21,	// (0x00017fa6) list_single_graphic_pane_g1

0x2cc1,	// (0x00013d46) list_single_graphic_pane_g2_ParamLimits

0x2cc1,	// (0x00013d46) list_single_graphic_pane_g2

0x3bd3,	// (0x00014c58) list_single_graphic_pane_g3_ParamLimits

0x3bd3,	// (0x00014c58) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0002065e) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0002065e) list_single_graphic_pane_g

0xb4a4,	// (0x0001c529) list_single_graphic_pane_t1_ParamLimits

0xb4a4,	// (0x0001c529) list_single_graphic_pane_t1

0x2cc1,	// (0x00013d46) list_single_heading_pane_g1_ParamLimits

0x2cc1,	// (0x00013d46) list_single_heading_pane_g1

0x3bd3,	// (0x00014c58) list_single_heading_pane_g2_ParamLimits

0x3bd3,	// (0x00014c58) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x00020665) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x00020665) list_single_heading_pane_g

0x5b64,	// (0x00016be9) list_single_heading_pane_t1_ParamLimits

0x5b64,	// (0x00016be9) list_single_heading_pane_t1

0xb4ba,	// (0x0001c53f) list_single_heading_pane_t2_ParamLimits

0xb4ba,	// (0x0001c53f) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0002066a) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0002066a) list_single_heading_pane_t

0x2cc1,	// (0x00013d46) list_single_number_heading_pane_g1_ParamLimits

0x2cc1,	// (0x00013d46) list_single_number_heading_pane_g1

0x3bd3,	// (0x00014c58) list_single_number_heading_pane_g2_ParamLimits

0x3bd3,	// (0x00014c58) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x00020665) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x00020665) list_single_number_heading_pane_g

0x5b64,	// (0x00016be9) list_single_number_heading_pane_t1_ParamLimits

0x5b64,	// (0x00016be9) list_single_number_heading_pane_t1

0xb4cc,	// (0x0001c551) list_single_number_heading_pane_t2_ParamLimits

0xb4cc,	// (0x0001c551) list_single_number_heading_pane_t2

0x5b1e,	// (0x00016ba3) list_single_number_heading_pane_t3_ParamLimits

0x5b1e,	// (0x00016ba3) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x0002066f) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x0002066f) list_single_number_heading_pane_t

0x3bc7,	// (0x00014c4c) list_single_graphic_heading_pane_g1_ParamLimits

0x3bc7,	// (0x00014c4c) list_single_graphic_heading_pane_g1

0xb4de,	// (0x0001c563) list_single_graphic_heading_pane_g4_ParamLimits

0xb4de,	// (0x0001c563) list_single_graphic_heading_pane_g4

0x3bd3,	// (0x00014c58) list_single_graphic_heading_pane_g5_ParamLimits

0x3bd3,	// (0x00014c58) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x00020676) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x00020676) list_single_graphic_heading_pane_g

0x5b64,	// (0x00016be9) list_single_graphic_heading_pane_t1_ParamLimits

0x5b64,	// (0x00016be9) list_single_graphic_heading_pane_t1

0xb4ef,	// (0x0001c574) list_single_graphic_heading_pane_t2_ParamLimits

0xb4ef,	// (0x0001c574) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x0002067d) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x0002067d) list_single_graphic_heading_pane_t

0x5b58,	// (0x00016bdd) list_single_large_graphic_pane_g1_ParamLimits

0x5b58,	// (0x00016bdd) list_single_large_graphic_pane_g1

0x2cc1,	// (0x00013d46) list_single_large_graphic_pane_g2_ParamLimits

0x2cc1,	// (0x00013d46) list_single_large_graphic_pane_g2

0x3bd3,	// (0x00014c58) list_single_large_graphic_pane_g3_ParamLimits

0x3bd3,	// (0x00014c58) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x00020682) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x00020682) list_single_large_graphic_pane_g

0x42a4,	// (0x00015329) wait_border_pane_g2_copy1

0xb501,	// (0x0001c586) list_single_large_graphic_pane_g4_cp2

0x5b64,	// (0x00016be9) list_single_large_graphic_pane_t1_ParamLimits

0x5b64,	// (0x00016be9) list_single_large_graphic_pane_t1

0xb509,	// (0x0001c58e) list_double_pane_g1_ParamLimits

0xb509,	// (0x0001c58e) list_double_pane_g1

0xb515,	// (0x0001c59a) list_double_pane_g2_ParamLimits

0xb515,	// (0x0001c59a) list_double_pane_g2

0x0001,

0xf604,	// (0x00020689) list_double_pane_g_ParamLimits

0xf604,	// (0x00020689) list_double_pane_g

0xb521,	// (0x0001c5a6) list_double_pane_t1_ParamLimits

0xb521,	// (0x0001c5a6) list_double_pane_t1

0xb537,	// (0x0001c5bc) list_double_pane_t2_ParamLimits

0xb537,	// (0x0001c5bc) list_double_pane_t2

0x0001,

0xf609,	// (0x0002068e) list_double_pane_t_ParamLimits

0xf609,	// (0x0002068e) list_double_pane_t

0xb549,	// (0x0001c5ce) list_double2_pane_g1_ParamLimits

0xb549,	// (0x0001c5ce) list_double2_pane_g1

0xb55a,	// (0x0001c5df) list_double2_pane_g2_ParamLimits

0xb55a,	// (0x0001c5df) list_double2_pane_g2

0x0001,

0xf60e,	// (0x00020693) list_double2_pane_g_ParamLimits

0xf60e,	// (0x00020693) list_double2_pane_g

0xb566,	// (0x0001c5eb) list_double2_pane_t1_ParamLimits

0xb566,	// (0x0001c5eb) list_double2_pane_t1

0xb57c,	// (0x0001c601) list_double2_pane_t2_ParamLimits

0xb57c,	// (0x0001c601) list_double2_pane_t2

0x0001,

0xf613,	// (0x00020698) list_double2_pane_t_ParamLimits

0xf613,	// (0x00020698) list_double2_pane_t

0xb509,	// (0x0001c58e) list_double_number_pane_g1_ParamLimits

0xb509,	// (0x0001c58e) list_double_number_pane_g1

0xb515,	// (0x0001c59a) list_double_number_pane_g2_ParamLimits

0xb515,	// (0x0001c59a) list_double_number_pane_g2

0x0001,

0xf604,	// (0x00020689) list_double_number_pane_g_ParamLimits

0xf604,	// (0x00020689) list_double_number_pane_g

0xb58e,	// (0x0001c613) list_double_number_pane_t1_ParamLimits

0xb58e,	// (0x0001c613) list_double_number_pane_t1

0xb5a0,	// (0x0001c625) list_double_number_pane_t2_ParamLimits

0xb5a0,	// (0x0001c625) list_double_number_pane_t2

0xb5b6,	// (0x0001c63b) list_double_number_pane_t3_ParamLimits

0xb5b6,	// (0x0001c63b) list_double_number_pane_t3

0x0002,

0xf618,	// (0x0002069d) list_double_number_pane_t_ParamLimits

0xf618,	// (0x0002069d) list_double_number_pane_t

0xb5c8,	// (0x0001c64d) list_double_graphic_pane_g1_ParamLimits

0xb5c8,	// (0x0001c64d) list_double_graphic_pane_g1

0xb5d4,	// (0x0001c659) list_double_graphic_pane_g2_ParamLimits

0xb5d4,	// (0x0001c659) list_double_graphic_pane_g2

0xb5e3,	// (0x0001c668) list_double_graphic_pane_g3_ParamLimits

0xb5e3,	// (0x0001c668) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x000206a4) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x000206a4) list_double_graphic_pane_g

0xb5fb,	// (0x0001c680) list_double_graphic_pane_t1_ParamLimits

0xb5fb,	// (0x0001c680) list_double_graphic_pane_t1

0xb611,	// (0x0001c696) list_double_graphic_pane_t2_ParamLimits

0xb611,	// (0x0001c696) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x000206ad) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x000206ad) list_double_graphic_pane_t

0x4920,	// (0x000159a5) list_double2_graphic_pane_g1_ParamLimits

0x4920,	// (0x000159a5) list_double2_graphic_pane_g1

0x2b6e,	// (0x00013bf3) list_double2_graphic_pane_g2_ParamLimits

0x2b6e,	// (0x00013bf3) list_double2_graphic_pane_g2

0xb55a,	// (0x0001c5df) list_double2_graphic_pane_g3_ParamLimits

0xb55a,	// (0x0001c5df) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x000206b2) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x000206b2) list_double2_graphic_pane_g

0xb623,	// (0x0001c6a8) list_double2_graphic_pane_t1_ParamLimits

0xb623,	// (0x0001c6a8) list_double2_graphic_pane_t1

0xb639,	// (0x0001c6be) list_double2_graphic_pane_t2_ParamLimits

0xb639,	// (0x0001c6be) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x000206b9) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x000206b9) list_double2_graphic_pane_t

0xb64b,	// (0x0001c6d0) list_double_large_graphic_pane_g1_ParamLimits

0xb64b,	// (0x0001c6d0) list_double_large_graphic_pane_g1

0xb676,	// (0x0001c6fb) list_double_large_graphic_pane_g2_ParamLimits

0xb676,	// (0x0001c6fb) list_double_large_graphic_pane_g2

0xb515,	// (0x0001c59a) list_double_large_graphic_pane_g3_ParamLimits

0xb515,	// (0x0001c59a) list_double_large_graphic_pane_g3

0xb687,	// (0x0001c70c) list_double_large_graphic_pane_g4_ParamLimits

0xb687,	// (0x0001c70c) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x000206be) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x000206be) list_double_large_graphic_pane_g

0xb69a,	// (0x0001c71f) list_double_large_graphic_pane_t1_ParamLimits

0xb69a,	// (0x0001c71f) list_double_large_graphic_pane_t1

0xb6b3,	// (0x0001c738) list_double_large_graphic_pane_t2_ParamLimits

0xb6b3,	// (0x0001c738) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x000206c9) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x000206c9) list_double_large_graphic_pane_t

0xb6c5,	// (0x0001c74a) list_double2_large_graphic_pane_g1_ParamLimits

0xb6c5,	// (0x0001c74a) list_double2_large_graphic_pane_g1

0xb549,	// (0x0001c5ce) list_double2_large_graphic_pane_g2_ParamLimits

0xb549,	// (0x0001c5ce) list_double2_large_graphic_pane_g2

0xb55a,	// (0x0001c5df) list_double2_large_graphic_pane_g3_ParamLimits

0xb55a,	// (0x0001c5df) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x000206ce) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x000206ce) list_double2_large_graphic_pane_g

0xb6d1,	// (0x0001c756) list_double2_large_graphic_pane_t1_ParamLimits

0xb6d1,	// (0x0001c756) list_double2_large_graphic_pane_t1

0xb6e7,	// (0x0001c76c) list_double2_large_graphic_pane_t2_ParamLimits

0xb6e7,	// (0x0001c76c) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x000206d5) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x000206d5) list_double2_large_graphic_pane_t

0xb6f9,	// (0x0001c77e) list_double_heading_pane_g1_ParamLimits

0xb6f9,	// (0x0001c77e) list_double_heading_pane_g1

0xb70a,	// (0x0001c78f) list_double_heading_pane_g2_ParamLimits

0xb70a,	// (0x0001c78f) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x000206da) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x000206da) list_double_heading_pane_g

0xb716,	// (0x0001c79b) list_double_heading_pane_t1_ParamLimits

0xb716,	// (0x0001c79b) list_double_heading_pane_t1

0xb72c,	// (0x0001c7b1) list_double_heading_pane_t2_ParamLimits

0xb72c,	// (0x0001c7b1) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x000206df) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x000206df) list_double_heading_pane_t

0x1af6,	// (0x00012b7b) list_double_graphic_heading_pane_g1_ParamLimits

0x1af6,	// (0x00012b7b) list_double_graphic_heading_pane_g1

0xb6f9,	// (0x0001c77e) list_double_graphic_heading_pane_g2_ParamLimits

0xb6f9,	// (0x0001c77e) list_double_graphic_heading_pane_g2

0xb70a,	// (0x0001c78f) list_double_graphic_heading_pane_g3_ParamLimits

0xb70a,	// (0x0001c78f) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x000206e4) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x000206e4) list_double_graphic_heading_pane_g

0xb73e,	// (0x0001c7c3) list_double_graphic_heading_pane_t1_ParamLimits

0xb73e,	// (0x0001c7c3) list_double_graphic_heading_pane_t1

0xb754,	// (0x0001c7d9) list_double_graphic_heading_pane_t2_ParamLimits

0xb754,	// (0x0001c7d9) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x000206eb) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x000206eb) list_double_graphic_heading_pane_t

0xb676,	// (0x0001c6fb) list_double_time_pane_g1_ParamLimits

0xb676,	// (0x0001c6fb) list_double_time_pane_g1

0xb515,	// (0x0001c59a) list_double_time_pane_g2_ParamLimits

0xb515,	// (0x0001c59a) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x000206f0) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x000206f0) list_double_time_pane_g

0xb766,	// (0x0001c7eb) list_double_time_pane_t1_ParamLimits

0xb766,	// (0x0001c7eb) list_double_time_pane_t1

0xb77c,	// (0x0001c801) list_double_time_pane_t2_ParamLimits

0xb77c,	// (0x0001c801) list_double_time_pane_t2

0xb78e,	// (0x0001c813) list_double_time_pane_t3_ParamLimits

0xb78e,	// (0x0001c813) list_double_time_pane_t3

0xb7a0,	// (0x0001c825) list_double_time_pane_t4_ParamLimits

0xb7a0,	// (0x0001c825) list_double_time_pane_t4

0x0003,

0xf670,	// (0x000206f5) list_double_time_pane_t_ParamLimits

0xf670,	// (0x000206f5) list_double_time_pane_t

0x2b6e,	// (0x00013bf3) list_setting_pane_g1_ParamLimits

0x2b6e,	// (0x00013bf3) list_setting_pane_g1

0xb55a,	// (0x0001c5df) list_setting_pane_g2_ParamLimits

0xb55a,	// (0x0001c5df) list_setting_pane_g2

0x0001,

0xf679,	// (0x000206fe) list_setting_pane_g_ParamLimits

0xf679,	// (0x000206fe) list_setting_pane_g

0xb7b2,	// (0x0001c837) list_setting_pane_t1_ParamLimits

0xb7b2,	// (0x0001c837) list_setting_pane_t1

0xb7c9,	// (0x0001c84e) list_setting_pane_t2_ParamLimits

0xb7c9,	// (0x0001c84e) list_setting_pane_t2

0x0002,

0xf67e,	// (0x00020703) list_setting_pane_t_ParamLimits

0xf67e,	// (0x00020703) list_setting_pane_t

0xb808,	// (0x0001c88d) set_value_pane_cp_ParamLimits

0xb808,	// (0x0001c88d) set_value_pane_cp

0x2b6e,	// (0x00013bf3) list_setting_number_pane_g1_ParamLimits

0x2b6e,	// (0x00013bf3) list_setting_number_pane_g1

0xb55a,	// (0x0001c5df) list_setting_number_pane_g2_ParamLimits

0xb55a,	// (0x0001c5df) list_setting_number_pane_g2

0x0001,

0xf679,	// (0x000206fe) list_setting_number_pane_g_ParamLimits

0xf679,	// (0x000206fe) list_setting_number_pane_g

0xb816,	// (0x0001c89b) list_setting_number_pane_t1_ParamLimits

0xb816,	// (0x0001c89b) list_setting_number_pane_t1

0xb82a,	// (0x0001c8af) list_setting_number_pane_t2_ParamLimits

0xb82a,	// (0x0001c8af) list_setting_number_pane_t2

0xb841,	// (0x0001c8c6) list_setting_number_pane_t3_ParamLimits

0xb841,	// (0x0001c8c6) list_setting_number_pane_t3

0x0003,

0xf685,	// (0x0002070a) list_setting_number_pane_t_ParamLimits

0xf685,	// (0x0002070a) list_setting_number_pane_t

0xb808,	// (0x0001c88d) set_value_pane_ParamLimits

0xb808,	// (0x0001c88d) set_value_pane

0x1d90,	// (0x00012e15) bg_set_opt_pane_ParamLimits

0x1d90,	// (0x00012e15) bg_set_opt_pane

0x1db1,	// (0x00012e36) set_value_pane_t1

0x1dbf,	// (0x00012e44) slider_set_pane_cp3

0x1dc8,	// (0x00012e4d) volume_small_pane_cp

0x1dd1,	// (0x00012e56) list_form_gen_pane

0x1dda,	// (0x00012e5f) scroll_pane_cp8

0xb884,	// (0x0001c909) form_field_data_pane_ParamLimits

0xb884,	// (0x0001c909) form_field_data_pane

0xb89f,	// (0x0001c924) form_field_data_wide_pane_ParamLimits

0xb89f,	// (0x0001c924) form_field_data_wide_pane

0xb8c3,	// (0x0001c948) form_field_popup_pane_ParamLimits

0xb8c3,	// (0x0001c948) form_field_popup_pane

0x1e62,	// (0x00012ee7) form_field_popup_wide_pane_ParamLimits

0x1e62,	// (0x00012ee7) form_field_popup_wide_pane

0x1e83,	// (0x00012f08) form_field_slider_pane_ParamLimits

0x1e83,	// (0x00012f08) form_field_slider_pane

0x1e96,	// (0x00012f1b) form_field_slider_wide_pane_ParamLimits

0x1e96,	// (0x00012f1b) form_field_slider_wide_pane

0x1ea9,	// (0x00012f2e) data_form_pane

0xb8ef,	// (0x0001c974) form_field_data_pane_t1

0x1ed9,	// (0x00012f5e) input_focus_pane

0x1ee7,	// (0x00012f6c) data_form_wide_pane

0x1f1f,	// (0x00012fa4) form_field_data_wide_pane_t1

0x16af,	// (0x00012734) input_focus_pane_cp6

0xb909,	// (0x0001c98e) form_field_popup_pane_t1

0x1ed9,	// (0x00012f5e) input_focus_pane_cp7

0x1f5b,	// (0x00012fe0) list_form_pane

0x1f6f,	// (0x00012ff4) form_field_popup_wide_pane_t1

0x1ed9,	// (0x00012f5e) input_focus_pane_cp8

0x1f84,	// (0x00013009) list_form_wide_pane

0xb92b,	// (0x0001c9b0) form_field_slider_pane_t1_ParamLimits

0xb92b,	// (0x0001c9b0) form_field_slider_pane_t1

0xb943,	// (0x0001c9c8) form_field_slider_pane_t2_ParamLimits

0xb943,	// (0x0001c9c8) form_field_slider_pane_t2

0x0001,

0xf695,	// (0x0002071a) form_field_slider_pane_t_ParamLimits

0xf695,	// (0x0002071a) form_field_slider_pane_t

0x1333,	// (0x000123b8) input_focus_pane_cp9_ParamLimits

0x1333,	// (0x000123b8) input_focus_pane_cp9

0xb958,	// (0x0001c9dd) slider_cont_pane_ParamLimits

0xb958,	// (0x0001c9dd) slider_cont_pane

0x1fd5,	// (0x0001305a) form_field_slider_wide_pane_t1_ParamLimits

0x1fd5,	// (0x0001305a) form_field_slider_wide_pane_t1

0x1fe7,	// (0x0001306c) form_field_slider_wide_pane_t2_ParamLimits

0x1fe7,	// (0x0001306c) form_field_slider_wide_pane_t2

0x0001,

0xf69a,	// (0x0002071f) form_field_slider_wide_pane_t_ParamLimits

0xf69a,	// (0x0002071f) form_field_slider_wide_pane_t

0x1333,	// (0x000123b8) input_focus_pane_cp10_ParamLimits

0x1333,	// (0x000123b8) input_focus_pane_cp10

0xb96c,	// (0x0001c9f1) slider_cont_pane_cp1_ParamLimits

0xb96c,	// (0x0001c9f1) slider_cont_pane_cp1

0xb980,	// (0x0001ca05) slider_form_pane_cp

0x2015,	// (0x0001309a) input_focus_pane_g1

0x201d,	// (0x000130a2) input_focus_pane_g2

0x2025,	// (0x000130aa) input_focus_pane_g3

0x202d,	// (0x000130b2) input_focus_pane_g4

0x2035,	// (0x000130ba) input_focus_pane_g5

0x203d,	// (0x000130c2) input_focus_pane_g6

0x2045,	// (0x000130ca) input_focus_pane_g7

0x204d,	// (0x000130d2) input_focus_pane_g8

0x2055,	// (0x000130da) input_focus_pane_g9

0xea82,	// (0x0001fb07) input_focus_pane_g10

0x0009,

0xf69f,	// (0x00020724) input_focus_pane_g

0x42ad,	// (0x00015332) wait_border_pane_g3_copy1

0xb988,	// (0x0001ca0d) data_form_pane_t1

0xea82,	// (0x0001fb07) wait_anim_pane_g1_copy1

0xce8f,	// (0x0001df14) data_form_wide_pane_t1

0x207c,	// (0x00013101) list_form_graphic_pane_cp_ParamLimits

0x207c,	// (0x00013101) list_form_graphic_pane_cp

0x525a,	// (0x000162df) slider_form_pane_g1

0x5263,	// (0x000162e8) slider_form_pane_g2

0x0006,

0xf996,	// (0x00020a1b) slider_form_pane_g

0xb9a4,	// (0x0001ca29) list_form_graphic_pane_ParamLimits

0xb9a4,	// (0x0001ca29) list_form_graphic_pane

0x208e,	// (0x00013113) list_form_graphic_pane_g1

0x2096,	// (0x0001311b) list_form_graphic_pane_t1_ParamLimits

0x2096,	// (0x0001311b) list_form_graphic_pane_t1

0x109d,	// (0x00012122) list_highlight_pane_cp5_ParamLimits

0x109d,	// (0x00012122) list_highlight_pane_cp5

0xb9b5,	// (0x0001ca3a) find_pane_g1

0x20b4,	// (0x00013139) input_find_pane

0xb9be,	// (0x0001ca43) input_find_pane_g1_ParamLimits

0xb9be,	// (0x0001ca43) input_find_pane_g1

0xb9ca,	// (0x0001ca4f) input_find_pane_t1_ParamLimits

0xb9ca,	// (0x0001ca4f) input_find_pane_t1

0xb9df,	// (0x0001ca64) input_find_pane_t2_ParamLimits

0xb9df,	// (0x0001ca64) input_find_pane_t2

0x0001,

0xf6b4,	// (0x00020739) input_find_pane_t_ParamLimits

0xf6b4,	// (0x00020739) input_find_pane_t

0x20f3,	// (0x00013178) input_focus_pane_cp5_ParamLimits

0x20f3,	// (0x00013178) input_focus_pane_cp5

0xba00,	// (0x0001ca85) bg_popup_window_pane_cp2_ParamLimits

0xba00,	// (0x0001ca85) bg_popup_window_pane_cp2

0xba0d,	// (0x0001ca92) listscroll_menu_pane_ParamLimits

0xba0d,	// (0x0001ca92) listscroll_menu_pane

0xba19,	// (0x0001ca9e) popup_submenu_window_ParamLimits

0xba19,	// (0x0001ca9e) popup_submenu_window

0x2156,	// (0x000131db) find_popup_pane_g1

0x215e,	// (0x000131e3) input_popup_find_pane_cp

0x20f3,	// (0x00013178) input_focus_pane_cp4_ParamLimits

0x20f3,	// (0x00013178) input_focus_pane_cp4

0x2176,	// (0x000131fb) input_popup_find_pane_t1_ParamLimits

0x2176,	// (0x000131fb) input_popup_find_pane_t1

0xec05,	// (0x0001fc8a) bg_popup_sub_pane_cp

0x21a4,	// (0x00013229) listscroll_popup_sub_pane

0x21ac,	// (0x00013231) list_submenu_pane_ParamLimits

0x21ac,	// (0x00013231) list_submenu_pane

0x21bd,	// (0x00013242) scroll_pane_cp4

0x21c5,	// (0x0001324a) list_single_popup_submenu_pane_ParamLimits

0x21c5,	// (0x0001324a) list_single_popup_submenu_pane

0x21da,	// (0x0001325f) list_single_popup_submenu_pane_g1

0x21e2,	// (0x00013267) list_single_popup_submenu_pane_t1_ParamLimits

0x21e2,	// (0x00013267) list_single_popup_submenu_pane_t1

0x1333,	// (0x000123b8) bg_active_tab_pane_cp1_ParamLimits

0x1333,	// (0x000123b8) bg_active_tab_pane_cp1

0xba57,	// (0x0001cadc) tabs_2_active_pane_g1

0xba5f,	// (0x0001cae4) tabs_2_active_pane_t1

0x1333,	// (0x000123b8) bg_passive_tab_pane_cp1_ParamLimits

0x1333,	// (0x000123b8) bg_passive_tab_pane_cp1

0xba57,	// (0x0001cadc) tabs_2_passive_pane_g1

0xba5f,	// (0x0001cae4) tabs_2_passive_pane_t1

0x109d,	// (0x00012122) bg_active_tab_pane_cp4

0xba71,	// (0x0001caf6) tabs_2_long_active_pane_t1

0x30de,	// (0x00014163) bg_passive_tab_pane_cp4

0xf47f,	// (0x00020504) list_single_midp_graphic_pane_g4_ParamLimits

0x109d,	// (0x00012122) bg_active_tab_pane_cp5

0xba84,	// (0x0001cb09) tabs_3_long_active_pane_t1

0x30de,	// (0x00014163) bg_passive_tab_pane_cp5

0xf47f,	// (0x00020504) list_single_midp_graphic_pane_g4

0x109d,	// (0x00012122) bg_popup_window_pane_cp13_ParamLimits

0x109d,	// (0x00012122) bg_popup_window_pane_cp13

0x2259,	// (0x000132de) listscroll_popup_fast_pane_ParamLimits

0x2259,	// (0x000132de) listscroll_popup_fast_pane

0x2268,	// (0x000132ed) grid_popup_fast_pane_ParamLimits

0x2268,	// (0x000132ed) grid_popup_fast_pane

0x227a,	// (0x000132ff) scroll_pane_cp9_ParamLimits

0x227a,	// (0x000132ff) scroll_pane_cp9

0x6f9b,	// (0x00018020) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6f9b,	// (0x00018020) list_single_graphic_hl_pane_t1_cp2

0x229e,	// (0x00013323) input_focus_pane_cp20_ParamLimits

0x229e,	// (0x00013323) input_focus_pane_cp20

0x22ac,	// (0x00013331) query_popup_data_pane_t1_ParamLimits

0x22ac,	// (0x00013331) query_popup_data_pane_t1

0x22bf,	// (0x00013344) query_popup_data_pane_t2_ParamLimits

0x22bf,	// (0x00013344) query_popup_data_pane_t2

0x2305,	// (0x0001338a) query_popup_data_pane_t3_ParamLimits

0x2305,	// (0x0001338a) query_popup_data_pane_t3

0x2346,	// (0x000133cb) query_popup_data_pane_t4_ParamLimits

0x2346,	// (0x000133cb) query_popup_data_pane_t4

0x2382,	// (0x00013407) query_popup_data_pane_t5_ParamLimits

0x2382,	// (0x00013407) query_popup_data_pane_t5

0x0004,

0xf6b9,	// (0x0002073e) query_popup_data_pane_t_ParamLimits

0xf6b9,	// (0x0002073e) query_popup_data_pane_t

0x2015,	// (0x0001309a) bg_set_opt_pane_g1

0x201d,	// (0x000130a2) bg_set_opt_pane_g2

0x2025,	// (0x000130aa) bg_set_opt_pane_g3

0x202d,	// (0x000130b2) bg_set_opt_pane_g4

0x2035,	// (0x000130ba) bg_set_opt_pane_g5

0x203d,	// (0x000130c2) bg_set_opt_pane_g6

0x2045,	// (0x000130ca) bg_set_opt_pane_g7

0x204d,	// (0x000130d2) bg_set_opt_pane_g8

0x2055,	// (0x000130da) bg_set_opt_pane_g9

0x0008,

0xf6c4,	// (0x00020749) bg_set_opt_pane_g

0xf1cb,	// (0x00020250) control_top_pane_stacon_ParamLimits

0xf1cb,	// (0x00020250) control_top_pane_stacon

0xf21e,	// (0x000202a3) signal_pane_stacon_ParamLimits

0xf21e,	// (0x000202a3) signal_pane_stacon

0x29e5,	// (0x00013a6a) stacon_top_pane_g1_ParamLimits

0x29e5,	// (0x00013a6a) stacon_top_pane_g1

0xf243,	// (0x000202c8) title_pane_stacon_ParamLimits

0xf243,	// (0x000202c8) title_pane_stacon

0xf26d,	// (0x000202f2) uni_indicator_pane_stacon_ParamLimits

0xf26d,	// (0x000202f2) uni_indicator_pane_stacon

0xf285,	// (0x0002030a) battery_pane_stacon_ParamLimits

0xf285,	// (0x0002030a) battery_pane_stacon

0xf2c9,	// (0x0002034e) control_bottom_pane_stacon_ParamLimits

0xf2c9,	// (0x0002034e) control_bottom_pane_stacon

0xf2ec,	// (0x00020371) navi_pane_stacon_ParamLimits

0xf2ec,	// (0x00020371) navi_pane_stacon

0x2a07,	// (0x00013a8c) stacon_bottom_pane_g1_ParamLimits

0x2a07,	// (0x00013a8c) stacon_bottom_pane_g1

0xef31,	// (0x0001ffb6) aid_levels_signal_lsc_ParamLimits

0xef31,	// (0x0001ffb6) aid_levels_signal_lsc

0xef48,	// (0x0001ffcd) signal_pane_stacon_g1_ParamLimits

0xef48,	// (0x0001ffcd) signal_pane_stacon_g1

0xef5c,	// (0x0001ffe1) signal_pane_stacon_g2_ParamLimits

0xef5c,	// (0x0001ffe1) signal_pane_stacon_g2

0x0001,

0xf6d7,	// (0x0002075c) signal_pane_stacon_g_ParamLimits

0xf6d7,	// (0x0002075c) signal_pane_stacon_g

0xef91,	// (0x00020016) title_pane_stacon_t1_ParamLimits

0xef91,	// (0x00020016) title_pane_stacon_t1

0x23c6,	// (0x0001344b) uni_indicator_pane_stacon_g1

0x23d0,	// (0x00013455) uni_indicator_pane_stacon_g2

0x23da,	// (0x0001345f) uni_indicator_pane_stacon_g3

0x23e4,	// (0x00013469) uni_indicator_pane_stacon_g4

0x0003,

0xf6e3,	// (0x00020768) uni_indicator_pane_stacon_g

0xefb6,	// (0x0002003b) control_top_pane_stacon_g1

0xefbe,	// (0x00020043) control_top_pane_stacon_t1_ParamLimits

0xefbe,	// (0x00020043) control_top_pane_stacon_t1

0xeff5,	// (0x0002007a) aid_levels_battery_lsc_ParamLimits

0xeff5,	// (0x0002007a) aid_levels_battery_lsc

0xf00d,	// (0x00020092) battery_pane_stacon_g1_ParamLimits

0xf00d,	// (0x00020092) battery_pane_stacon_g1

0xf020,	// (0x000200a5) battery_pane_stacon_g2_ParamLimits

0xf020,	// (0x000200a5) battery_pane_stacon_g2

0x0001,

0xf6ec,	// (0x00020771) battery_pane_stacon_g_ParamLimits

0xf6ec,	// (0x00020771) battery_pane_stacon_g

0xf05e,	// (0x000200e3) navi_icon_pane_stacon

0xf072,	// (0x000200f7) navi_navi_pane_stacon

0xf05e,	// (0x000200e3) navi_text_pane_stacon

0xefb6,	// (0x0002003b) control_bottom_pane_stacon_g1

0xf088,	// (0x0002010d) control_bottom_pane_stacon_t1_ParamLimits

0xf088,	// (0x0002010d) control_bottom_pane_stacon_t1

0xba96,	// (0x0001cb1b) grid_app_pane_ParamLimits

0xba96,	// (0x0001cb1b) grid_app_pane

0xbace,	// (0x0001cb53) scroll_pane_cp15_ParamLimits

0xbace,	// (0x0001cb53) scroll_pane_cp15

0xbae7,	// (0x0001cb6c) cell_app_pane_ParamLimits

0xbae7,	// (0x0001cb6c) cell_app_pane

0xbb28,	// (0x0001cbad) cell_app_pane_g1_ParamLimits

0xbb28,	// (0x0001cbad) cell_app_pane_g1

0x2491,	// (0x00013516) cell_app_pane_g2_ParamLimits

0x2491,	// (0x00013516) cell_app_pane_g2

0x0001,

0xf6f1,	// (0x00020776) cell_app_pane_g_ParamLimits

0xf6f1,	// (0x00020776) cell_app_pane_g

0x249d,	// (0x00013522) cell_app_pane_t1_ParamLimits

0x249d,	// (0x00013522) cell_app_pane_t1

0x24af,	// (0x00013534) grid_highlight_pane_ParamLimits

0x24af,	// (0x00013534) grid_highlight_pane

0x2015,	// (0x0001309a) cell_highlight_pane_g1

0x201d,	// (0x000130a2) cell_highlight_pane_g2

0x2025,	// (0x000130aa) cell_highlight_pane_g3

0x202d,	// (0x000130b2) cell_highlight_pane_g4

0x2035,	// (0x000130ba) cell_highlight_pane_g5

0x203d,	// (0x000130c2) cell_highlight_pane_g6

0x2045,	// (0x000130ca) cell_highlight_pane_g7

0x204d,	// (0x000130d2) cell_highlight_pane_g8

0x2055,	// (0x000130da) cell_highlight_pane_g9

0xea82,	// (0x0001fb07) cell_highlight_pane_g10

0x0009,

0xf69f,	// (0x00020724) cell_highlight_pane_g

0x24c0,	// (0x00013545) bg_scroll_pane

0xf0c9,	// (0x0002014e) scroll_handle_pane

0x2507,	// (0x0001358c) scroll_bg_pane_g1

0x251c,	// (0x000135a1) scroll_bg_pane_g2

0x2534,	// (0x000135b9) scroll_bg_pane_g3

0x0002,

0xf6f6,	// (0x0002077b) scroll_bg_pane_g

0x2549,	// (0x000135ce) scroll_handle_focus_pane_ParamLimits

0x2549,	// (0x000135ce) scroll_handle_focus_pane

0x2507,	// (0x0001358c) scroll_handle_pane_g1

0x2556,	// (0x000135db) scroll_handle_pane_g2

0x2534,	// (0x000135b9) scroll_handle_pane_g3

0x0002,

0xf6fd,	// (0x00020782) scroll_handle_pane_g

0x20f3,	// (0x00013178) bg_popup_sub_pane_cp21_ParamLimits

0x20f3,	// (0x00013178) bg_popup_sub_pane_cp21

0x256a,	// (0x000135ef) popup_fep_japan_predictive_window_t1_ParamLimits

0x256a,	// (0x000135ef) popup_fep_japan_predictive_window_t1

0x2581,	// (0x00013606) popup_fep_japan_predictive_window_t2_ParamLimits

0x2581,	// (0x00013606) popup_fep_japan_predictive_window_t2

0x25b4,	// (0x00013639) popup_fep_japan_predictive_window_t3_ParamLimits

0x25b4,	// (0x00013639) popup_fep_japan_predictive_window_t3

0x0002,

0xf704,	// (0x00020789) popup_fep_japan_predictive_window_t_ParamLimits

0xf704,	// (0x00020789) popup_fep_japan_predictive_window_t

0xec05,	// (0x0001fc8a) bg_popup_sub_pane_cp23

0x25eb,	// (0x00013670) listscroll_japin_cand_pane

0x25f3,	// (0x00013678) popup_fep_japan_candidate_window_t1

0x2601,	// (0x00013686) candidate_pane_ParamLimits

0x2601,	// (0x00013686) candidate_pane

0x2613,	// (0x00013698) scroll_pane_cp30

0x261d,	// (0x000136a2) list_single_popup_jap_candidate_pane_ParamLimits

0x261d,	// (0x000136a2) list_single_popup_jap_candidate_pane

0xec05,	// (0x0001fc8a) list_highlight_pane_cp30

0x2631,	// (0x000136b6) list_single_popup_jap_candidate_pane_t1

0xbb4c,	// (0x0001cbd1) level_1_signal

0xbb5e,	// (0x0001cbe3) level_2_signal

0xbb71,	// (0x0001cbf6) level_3_signal

0xbb84,	// (0x0001cc09) level_4_signal

0xbb97,	// (0x0001cc1c) level_5_signal

0xbbaa,	// (0x0001cc2f) level_6_signal

0xbbbd,	// (0x0001cc42) level_7_signal

0xbb4c,	// (0x0001cbd1) level_1_battery

0xbb5e,	// (0x0001cbe3) level_2_battery

0xbb71,	// (0x0001cbf6) level_3_battery

0xbb84,	// (0x0001cc09) level_4_battery

0xbb97,	// (0x0001cc1c) level_5_battery

0xbbaa,	// (0x0001cc2f) level_6_battery

0xbbbd,	// (0x0001cc42) level_7_battery

0x26b3,	// (0x00013738) list_menu_pane_ParamLimits

0x26b3,	// (0x00013738) list_menu_pane

0x26c9,	// (0x0001374e) scroll_pane_cp25_ParamLimits

0x26c9,	// (0x0001374e) scroll_pane_cp25

0x26e2,	// (0x00013767) list_double2_graphic_pane_cp2_ParamLimits

0x26e2,	// (0x00013767) list_double2_graphic_pane_cp2

0x26e2,	// (0x00013767) list_double2_large_graphic_pane_cp2_ParamLimits

0x26e2,	// (0x00013767) list_double2_large_graphic_pane_cp2

0x26e2,	// (0x00013767) list_double2_pane_cp2_ParamLimits

0x26e2,	// (0x00013767) list_double2_pane_cp2

0x26e2,	// (0x00013767) list_double_graphic_pane_cp2_ParamLimits

0x26e2,	// (0x00013767) list_double_graphic_pane_cp2

0x26e2,	// (0x00013767) list_double_large_graphic_pane_cp2_ParamLimits

0x26e2,	// (0x00013767) list_double_large_graphic_pane_cp2

0x26e2,	// (0x00013767) list_double_number_pane_cp2_ParamLimits

0x26e2,	// (0x00013767) list_double_number_pane_cp2

0x26e2,	// (0x00013767) list_double_pane_cp2_ParamLimits

0x26e2,	// (0x00013767) list_double_pane_cp2

0xbbd0,	// (0x0001cc55) list_single_2graphic_pane_cp2_ParamLimits

0xbbd0,	// (0x0001cc55) list_single_2graphic_pane_cp2

0xbbd0,	// (0x0001cc55) list_single_graphic_heading_pane_cp2_ParamLimits

0xbbd0,	// (0x0001cc55) list_single_graphic_heading_pane_cp2

0xbbd0,	// (0x0001cc55) list_single_graphic_pane_cp2_ParamLimits

0xbbd0,	// (0x0001cc55) list_single_graphic_pane_cp2

0xbbd0,	// (0x0001cc55) list_single_heading_pane_cp2_ParamLimits

0xbbd0,	// (0x0001cc55) list_single_heading_pane_cp2

0x2725,	// (0x000137aa) list_single_large_graphic_pane_cp2_ParamLimits

0x2725,	// (0x000137aa) list_single_large_graphic_pane_cp2

0xbbd0,	// (0x0001cc55) list_single_number_heading_pane_cp2_ParamLimits

0xbbd0,	// (0x0001cc55) list_single_number_heading_pane_cp2

0xbbd0,	// (0x0001cc55) list_single_number_pane_cp2_ParamLimits

0xbbd0,	// (0x0001cc55) list_single_number_pane_cp2

0xbbd0,	// (0x0001cc55) list_single_pane_cp2_ParamLimits

0xbbd0,	// (0x0001cc55) list_single_pane_cp2

0x27a0,	// (0x00013825) bg_popup_sub_pane_cp22

0xf17b,	// (0x00020200) popup_side_volume_key_window_g1

0xf1a5,	// (0x0002022a) popup_side_volume_key_window_t1

0xf1c3,	// (0x00020248) volume_small_pane_cp1

0x1333,	// (0x000123b8) bg_popup_sub_pane_cp24_ParamLimits

0x1333,	// (0x000123b8) bg_popup_sub_pane_cp24

0x27b6,	// (0x0001383b) fep_china_uni_candidate_pane_ParamLimits

0x27b6,	// (0x0001383b) fep_china_uni_candidate_pane

0x27ca,	// (0x0001384f) fep_china_uni_entry_pane

0x27da,	// (0x0001385f) popup_fep_china_uni_window_g1

0x27f6,	// (0x0001387b) fep_china_uni_entry_pane_g1

0x2800,	// (0x00013885) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x000207ba) fep_china_uni_entry_pane_g

0x280a,	// (0x0001388f) fep_entry_item_pane

0x2814,	// (0x00013899) fep_candidate_item_pane

0x281c,	// (0x000138a1) fep_china_uni_candidate_pane_g1

0x2826,	// (0x000138ab) fep_china_uni_candidate_pane_g2

0x282e,	// (0x000138b3) fep_china_uni_candidate_pane_g3

0x2836,	// (0x000138bb) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x000207bf) fep_china_uni_candidate_pane_g

0xea82,	// (0x0001fb07) fep_entry_item_pane_g1

0x2840,	// (0x000138c5) fep_entry_item_pane_t1_ParamLimits

0x2840,	// (0x000138c5) fep_entry_item_pane_t1

0x2856,	// (0x000138db) fep_candidate_item_pane_t1_ParamLimits

0x2856,	// (0x000138db) fep_candidate_item_pane_t1

0x286b,	// (0x000138f0) fep_candidate_item_pane_t2_ParamLimits

0x286b,	// (0x000138f0) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x000207c8) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x000207c8) fep_candidate_item_pane_t

0x109d,	// (0x00012122) list_highlight_pane_cp31_ParamLimits

0x109d,	// (0x00012122) list_highlight_pane_cp31

0x287d,	// (0x00013902) level_1_signal_lsc

0x2886,	// (0x0001390b) level_2_signal_lsc

0x288f,	// (0x00013914) level_3_signal_lsc

0x2898,	// (0x0001391d) level_4_signal_lsc

0x28a1,	// (0x00013926) level_5_signal_lsc

0x28aa,	// (0x0001392f) level_6_signal_lsc

0x28b3,	// (0x00013938) level_7_signal_lsc

0x28b3,	// (0x00013938) level_1_battery_lsc

0x28bc,	// (0x00013941) level_2_battery_lsc

0x28c5,	// (0x0001394a) level_3_battery_lsc

0x28ce,	// (0x00013953) level_4_battery_lsc

0x28d7,	// (0x0001395c) level_5_battery_lsc

0x28e0,	// (0x00013965) level_6_battery_lsc

0x287d,	// (0x00013902) level_7_battery_lsc

0x28e9,	// (0x0001396e) scroll_handle_focus_pane_g1

0x28f2,	// (0x00013977) scroll_handle_focus_pane_g2

0x28fb,	// (0x00013980) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x000207cd) scroll_handle_focus_pane_g

0xbc5f,	// (0x0001cce4) list_single_2graphic_pane_g1_ParamLimits

0xbc5f,	// (0x0001cce4) list_single_2graphic_pane_g1

0xb4de,	// (0x0001c563) list_single_2graphic_pane_g2_ParamLimits

0xb4de,	// (0x0001c563) list_single_2graphic_pane_g2

0x3bd3,	// (0x00014c58) list_single_2graphic_pane_g3_ParamLimits

0x3bd3,	// (0x00014c58) list_single_2graphic_pane_g3

0xbc6b,	// (0x0001ccf0) list_single_2graphic_pane_g4_ParamLimits

0xbc6b,	// (0x0001ccf0) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x000207d4) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x000207d4) list_single_2graphic_pane_g

0xbc7c,	// (0x0001cd01) list_single_2graphic_pane_t1_ParamLimits

0xbc7c,	// (0x0001cd01) list_single_2graphic_pane_t1

0xbcaa,	// (0x0001cd2f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbcaa,	// (0x0001cd2f) list_double2_graphic_large_graphic_pane_g1

0xb549,	// (0x0001c5ce) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb549,	// (0x0001c5ce) list_double2_graphic_large_graphic_pane_g2

0xb55a,	// (0x0001c5df) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb55a,	// (0x0001c5df) list_double2_graphic_large_graphic_pane_g3

0xbcbc,	// (0x0001cd41) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbcbc,	// (0x0001cd41) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x000207dd) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x000207dd) list_double2_graphic_large_graphic_pane_g

0xbcc8,	// (0x0001cd4d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbcc8,	// (0x0001cd4d) list_double2_graphic_large_graphic_pane_t1

0xbcde,	// (0x0001cd63) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbcde,	// (0x0001cd63) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x000207e6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x000207e6) list_double2_graphic_large_graphic_pane_t

0x2ac9,	// (0x00013b4e) popup_fast_swap_window_ParamLimits

0x2ac9,	// (0x00013b4e) popup_fast_swap_window

0x2ae7,	// (0x00013b6c) popup_side_volume_key_window

0x2b05,	// (0x00013b8a) stacon_top_pane

0x2b0f,	// (0x00013b94) status_pane_ParamLimits

0x2b0f,	// (0x00013b94) status_pane

0x2b05,	// (0x00013b8a) status_small_pane

0xec05,	// (0x0001fc8a) control_pane

0xec05,	// (0x0001fc8a) stacon_bottom_pane

0x1dda,	// (0x00012e5f) scroll_pane_cp121

0x1dd1,	// (0x00012e56) set_content_pane

0xbcf0,	// (0x0001cd75) bg_active_tab_pane_g1_cp1

0x2999,	// (0x00013a1e) bg_active_tab_pane_g2_cp1

0xbcf9,	// (0x0001cd7e) bg_active_tab_pane_g3_cp1

0xbcf0,	// (0x0001cd75) bg_passive_tab_pane_g1_cp1

0x2999,	// (0x00013a1e) bg_passive_tab_pane_g2_cp1

0xbcf9,	// (0x0001cd7e) bg_passive_tab_pane_g3_cp1

0xbd02,	// (0x0001cd87) bg_active_tab_pane_g1_cp2

0x2999,	// (0x00013a1e) bg_active_tab_pane_g2_cp2

0xbd0b,	// (0x0001cd90) bg_active_tab_pane_g3_cp2

0xbd02,	// (0x0001cd87) bg_passive_tab_pane_g1_cp2

0x2999,	// (0x00013a1e) bg_passive_tab_pane_g2_cp2

0xbd0b,	// (0x0001cd90) bg_passive_tab_pane_g3_cp2

0xbd14,	// (0x0001cd99) bg_active_tab_pane_g1_cp3

0x2999,	// (0x00013a1e) bg_active_tab_pane_g2_cp3

0xbd1d,	// (0x0001cda2) bg_active_tab_pane_g3_cp3

0xbd14,	// (0x0001cd99) bg_passive_tab_pane_g1_cp3

0x2999,	// (0x00013a1e) bg_passive_tab_pane_g2_cp3

0xbd1d,	// (0x0001cda2) bg_passive_tab_pane_g3_cp3

0xbd26,	// (0x0001cdab) bg_active_tab_pane_g1_cp4

0x2999,	// (0x00013a1e) bg_active_tab_pane_g2_cp4

0xbd2f,	// (0x0001cdb4) bg_active_tab_pane_g3_cp4

0xbd26,	// (0x0001cdab) bg_passive_tab_pane_g1_cp4

0x2999,	// (0x00013a1e) bg_passive_tab_pane_g2_cp4

0xbd2f,	// (0x0001cdb4) bg_passive_tab_pane_g3_cp4

0x2a23,	// (0x00013aa8) bg_active_tab_pane_g1_cp5

0x2999,	// (0x00013a1e) bg_active_tab_pane_g2_cp5

0x2a2c,	// (0x00013ab1) bg_active_tab_pane_g3_cp5

0x2a23,	// (0x00013aa8) bg_passive_tab_pane_g1_cp5

0x2999,	// (0x00013a1e) bg_passive_tab_pane_g2_cp5

0x2a2c,	// (0x00013ab1) bg_passive_tab_pane_g3_cp5

0xbd38,	// (0x0001cdbd) list_set_graphic_pane_ParamLimits

0xbd38,	// (0x0001cdbd) list_set_graphic_pane

0xec05,	// (0x0001fc8a) bg_set_opt_pane_cp4

0xbd4d,	// (0x0001cdd2) list_set_graphic_pane_g1_ParamLimits

0xbd4d,	// (0x0001cdd2) list_set_graphic_pane_g1

0xbd59,	// (0x0001cdde) list_set_graphic_pane_g2_ParamLimits

0xbd59,	// (0x0001cdde) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x000207eb) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x000207eb) list_set_graphic_pane_g

0x0009,

0xfade,	// (0x00020b63) volume_small_pane_cp_g

0x2a7a,	// (0x00013aff) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2a7a,	// (0x00013aff) list_double2_large_graphic_pane_g1_cp2

0x2a88,	// (0x00013b0d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2a88,	// (0x00013b0d) list_double2_large_graphic_pane_g2_cp2

0x2a99,	// (0x00013b1e) list_double2_large_graphic_pane_g3_cp2

0x2aa1,	// (0x00013b26) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2aa1,	// (0x00013b26) list_double2_large_graphic_pane_t1_cp2

0x2ab7,	// (0x00013b3c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2ab7,	// (0x00013b3c) list_double2_large_graphic_pane_t2_cp2

0x4d97,	// (0x00015e1c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4d97,	// (0x00015e1c) list_double_large_graphic_pane_g1_cp2

0x4daa,	// (0x00015e2f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4daa,	// (0x00015e2f) list_double_large_graphic_pane_g2_cp2

0x2c2d,	// (0x00013cb2) list_double_large_graphic_pane_g3_cp2

0x4dbb,	// (0x00015e40) list_double_large_graphic_pane_g4_cp

0x4dc3,	// (0x00015e48) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4dc3,	// (0x00015e48) list_double_large_graphic_pane_t1_cp2

0x4dda,	// (0x00015e5f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4dda,	// (0x00015e5f) list_double_large_graphic_pane_t2_cp2

0x2b1d,	// (0x00013ba2) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2b1d,	// (0x00013ba2) list_double2_graphic_pane_g1_cp2

0x2b2b,	// (0x00013bb0) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2b2b,	// (0x00013bb0) list_double2_graphic_pane_g2_cp2

0x2b3c,	// (0x00013bc1) list_double2_graphic_pane_g3_cp2

0x2b46,	// (0x00013bcb) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2b46,	// (0x00013bcb) list_double2_graphic_pane_t1_cp2

0x2b5c,	// (0x00013be1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2b5c,	// (0x00013be1) list_double2_graphic_pane_t2_cp2

0x2b6e,	// (0x00013bf3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2b6e,	// (0x00013bf3) list_single_number_heading_pane_g1_cp2

0x2b7a,	// (0x00013bff) list_single_number_heading_pane_g2_cp2

0x2b82,	// (0x00013c07) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2b82,	// (0x00013c07) list_single_number_heading_pane_t1_cp2

0x2b98,	// (0x00013c1d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2b98,	// (0x00013c1d) list_single_number_heading_pane_t2_cp2

0x2bac,	// (0x00013c31) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2bac,	// (0x00013c31) list_single_number_heading_pane_t3_cp2

0x2b6e,	// (0x00013bf3) list_single_heading_pane_g1_cp2_ParamLimits

0x2b6e,	// (0x00013bf3) list_single_heading_pane_g1_cp2

0x2b7a,	// (0x00013bff) list_single_heading_pane_g2_cp2

0x2b82,	// (0x00013c07) list_single_heading_pane_t1_cp2_ParamLimits

0x2b82,	// (0x00013c07) list_single_heading_pane_t1_cp2

0x4b91,	// (0x00015c16) list_single_heading_pane_t2_cp2_ParamLimits

0x4b91,	// (0x00015c16) list_single_heading_pane_t2_cp2

0x4ad3,	// (0x00015b58) list_double_graphic_pane_g1_cp2_ParamLimits

0x4ad3,	// (0x00015b58) list_double_graphic_pane_g1_cp2

0x4adf,	// (0x00015b64) list_double_graphic_pane_g2_cp2_ParamLimits

0x4adf,	// (0x00015b64) list_double_graphic_pane_g2_cp2

0x4aee,	// (0x00015b73) list_double_graphic_pane_g3_cp2

0x4af6,	// (0x00015b7b) list_double_graphic_pane_t1_cp2_ParamLimits

0x4af6,	// (0x00015b7b) list_double_graphic_pane_t1_cp2

0x4b0c,	// (0x00015b91) list_double_graphic_pane_t2_cp2_ParamLimits

0x4b0c,	// (0x00015b91) list_double_graphic_pane_t2_cp2

0x2c21,	// (0x00013ca6) list_double_number_pane_g1_cp2_ParamLimits

0x2c21,	// (0x00013ca6) list_double_number_pane_g1_cp2

0x2c2d,	// (0x00013cb2) list_double_number_pane_g2_cp2

0x4a97,	// (0x00015b1c) list_double_number_pane_t1_cp2_ParamLimits

0x4a97,	// (0x00015b1c) list_double_number_pane_t1_cp2

0x4aab,	// (0x00015b30) list_double_number_pane_t2_cp2_ParamLimits

0x4aab,	// (0x00015b30) list_double_number_pane_t2_cp2

0x4ac1,	// (0x00015b46) list_double_number_pane_t3_cp2_ParamLimits

0x4ac1,	// (0x00015b46) list_double_number_pane_t3_cp2

0x4980,	// (0x00015a05) list_single_graphic_pane_g1_cp2_ParamLimits

0x4980,	// (0x00015a05) list_single_graphic_pane_g1_cp2

0x2c87,	// (0x00013d0c) list_single_graphic_pane_g2_cp2_ParamLimits

0x2c87,	// (0x00013d0c) list_single_graphic_pane_g2_cp2

0x2c93,	// (0x00013d18) list_single_graphic_pane_g3_cp2

0x4956,	// (0x000159db) list_single_graphic_pane_t1_cp2_ParamLimits

0x4956,	// (0x000159db) list_single_graphic_pane_t1_cp2

0x2c87,	// (0x00013d0c) list_single_number_pane_g1_cp2_ParamLimits

0x2c87,	// (0x00013d0c) list_single_number_pane_g1_cp2

0x2c93,	// (0x00013d18) list_single_number_pane_g2_cp2

0x4956,	// (0x000159db) list_single_number_pane_t1_cp2_ParamLimits

0x4956,	// (0x000159db) list_single_number_pane_t1_cp2

0x496c,	// (0x000159f1) list_single_number_pane_t2_cp2_ParamLimits

0x496c,	// (0x000159f1) list_single_number_pane_t2_cp2

0x2a88,	// (0x00013b0d) list_double2_pane_g1_cp2_ParamLimits

0x2a88,	// (0x00013b0d) list_double2_pane_g1_cp2

0x2a99,	// (0x00013b1e) list_double2_pane_g2_cp2

0x2bf9,	// (0x00013c7e) list_double2_pane_t1_cp2_ParamLimits

0x2bf9,	// (0x00013c7e) list_double2_pane_t1_cp2

0x2c0f,	// (0x00013c94) list_double2_pane_t2_cp2_ParamLimits

0x2c0f,	// (0x00013c94) list_double2_pane_t2_cp2

0x2c21,	// (0x00013ca6) list_double_pane_g1_cp2_ParamLimits

0x2c21,	// (0x00013ca6) list_double_pane_g1_cp2

0x2c2d,	// (0x00013cb2) list_double_pane_g2_cp2

0x2c35,	// (0x00013cba) list_double_pane_t1_cp2_ParamLimits

0x2c35,	// (0x00013cba) list_double_pane_t1_cp2

0x2c4b,	// (0x00013cd0) list_double_pane_t2_cp2_ParamLimits

0x2c4b,	// (0x00013cd0) list_double_pane_t2_cp2

0x2c77,	// (0x00013cfc) list_single_pane_cp2_g3

0x2c87,	// (0x00013d0c) list_single_pane_g1_cp2_ParamLimits

0x2c87,	// (0x00013d0c) list_single_pane_g1_cp2

0x2c93,	// (0x00013d18) list_single_pane_g2_cp2

0x2c9b,	// (0x00013d20) list_single_pane_t1_cp2_ParamLimits

0x2c9b,	// (0x00013d20) list_single_pane_t1_cp2

0x2cb3,	// (0x00013d38) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2cb3,	// (0x00013d38) list_single_large_graphic_pane_g1_cp2

0x2cc1,	// (0x00013d46) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2cc1,	// (0x00013d46) list_single_large_graphic_pane_g2_cp2

0x2ccd,	// (0x00013d52) list_single_large_graphic_pane_g3_cp2

0x2cd5,	// (0x00013d5a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2cd5,	// (0x00013d5a) list_single_large_graphic_pane_g4_cp1

0x2cef,	// (0x00013d74) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2cef,	// (0x00013d74) list_single_large_graphic_pane_t1_cp2

0x4920,	// (0x000159a5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4920,	// (0x000159a5) list_single_graphic_heading_pane_g1_cp2

0x48ed,	// (0x00015972) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x48ed,	// (0x00015972) list_single_graphic_heading_pane_g4_cp2

0x2c93,	// (0x00013d18) list_single_graphic_heading_pane_g5_cp2

0x492c,	// (0x000159b1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x492c,	// (0x000159b1) list_single_graphic_heading_pane_t1_cp2

0x4942,	// (0x000159c7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4942,	// (0x000159c7) list_single_graphic_heading_pane_t2_cp2

0x48e1,	// (0x00015966) list_single_2graphic_pane_g1_cp2_ParamLimits

0x48e1,	// (0x00015966) list_single_2graphic_pane_g1_cp2

0x48ed,	// (0x00015972) list_single_2graphic_pane_g2_cp2_ParamLimits

0x48ed,	// (0x00015972) list_single_2graphic_pane_g2_cp2

0x2c93,	// (0x00013d18) list_single_2graphic_pane_g3_cp2

0x48fe,	// (0x00015983) list_single_2graphic_pane_g4_cp2_ParamLimits

0x48fe,	// (0x00015983) list_single_2graphic_pane_g4_cp2

0x490a,	// (0x0001598f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x490a,	// (0x0001598f) list_single_2graphic_pane_t1_cp2

0xea82,	// (0x0001fb07) list_highlight_pane_g10_cp1

0x44b9,	// (0x0001553e) list_highlight_pane_g1_cp1

0x44c1,	// (0x00015546) list_highlight_pane_g2_cp1

0x44c9,	// (0x0001554e) list_highlight_pane_g3_cp1

0x44d1,	// (0x00015556) list_highlight_pane_g4_cp1

0x44d9,	// (0x0001555e) list_highlight_pane_g5_cp1

0x44e1,	// (0x00015566) list_highlight_pane_g6_cp1

0x44e9,	// (0x0001556e) list_highlight_pane_g7_cp1

0x44f1,	// (0x00015576) list_highlight_pane_g8_cp1

0x44f9,	// (0x0001557e) list_highlight_pane_g9_cp1

0xcae5,	// (0x0001db6a) form_field_slider_pane_t3

0xcaf3,	// (0x0001db78) form_field_slider_pane_t4

0x43f5,	// (0x0001547a) slider_form_pane_ParamLimits

0x43f5,	// (0x0001547a) slider_form_pane

0xec05,	// (0x0001fc8a) control_abbreviations

0xec05,	// (0x0001fc8a) control_conventions

0xec05,	// (0x0001fc8a) control_definitions

0xec05,	// (0x0001fc8a) format_table_attribute

0x4be7,	// (0x00015c6c) bg_popup_preview_window_pane_g9

0xec05,	// (0x0001fc8a) format_table_data2

0xec05,	// (0x0001fc8a) format_table_data3

0xec05,	// (0x0001fc8a) format_table_data_example

0x0008,

0xec05,	// (0x0001fc8a) intro_purpose

0xf8f6,	// (0x0002097b) bg_popup_preview_window_pane_g

0xec05,	// (0x0001fc8a) texts_category

0xec05,	// (0x0001fc8a) texts_graphics

0x2d05,	// (0x00013d8a) text_digital

0x2d14,	// (0x00013d99) text_primary

0x2d23,	// (0x00013da8) text_primary_small

0x2d32,	// (0x00013db7) text_secondary

0x2d41,	// (0x00013dc6) text_title

0x540c,	// (0x00016491) bg_passive_tab_pane_g1_cp3_srt

0x2999,	// (0x00013a1e) bg_passive_tab_pane_g2_cp3_srt

0x5415,	// (0x0001649a) bg_passive_tab_pane_g3_cp3_srt

0x1333,	// (0x000123b8) bg_active_tab_pane_cp3_srt_ParamLimits

0x1333,	// (0x000123b8) bg_active_tab_pane_cp3_srt

0x541e,	// (0x000164a3) tabs_4_active_pane_srt_g1

0xcf4c,	// (0x0001dfd1) tabs_4_active_pane_srt_t1_ParamLimits

0xcf4c,	// (0x0001dfd1) tabs_4_active_pane_srt_t1

0x540c,	// (0x00016491) bg_active_tab_pane_g1_cp3_copy1

0x2999,	// (0x00013a1e) bg_active_tab_pane_g2_cp3_copy1

0x5415,	// (0x0001649a) bg_active_tab_pane_g3_cp3_copy1

0x109d,	// (0x00012122) tabs_2_long_active_pane_srt_ParamLimits

0x109d,	// (0x00012122) tabs_2_long_active_pane_srt

0x109d,	// (0x00012122) tabs_2_long_passive_pane_srt_ParamLimits

0x109d,	// (0x00012122) tabs_2_long_passive_pane_srt

0x30de,	// (0x00014163) bg_passive_tab_pane_cp4_srt_ParamLimits

0x30de,	// (0x00014163) bg_passive_tab_pane_cp4_srt

0x505f,	// (0x000160e4) bg_passive_tab_pane_g1_cp4_srt

0x2999,	// (0x00013a1e) bg_passive_tab_pane_g2_cp4_srt

0x5068,	// (0x000160ed) bg_passive_tab_pane_g3_cp4_srt

0x109d,	// (0x00012122) bg_active_tab_pane_cp4_srt_ParamLimits

0x109d,	// (0x00012122) bg_active_tab_pane_cp4_srt

0xcd00,	// (0x0001dd85) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcd00,	// (0x0001dd85) tabs_2_long_active_pane_srt_t1

0x505f,	// (0x000160e4) bg_active_tab_pane_g1_cp4_srt

0x2999,	// (0x00013a1e) bg_active_tab_pane_g2_cp4_srt

0x5068,	// (0x000160ed) bg_active_tab_pane_g3_cp4_srt

0x1333,	// (0x000123b8) tabs_3_long_active_pane_srt_ParamLimits

0x1333,	// (0x000123b8) tabs_3_long_active_pane_srt

0x1333,	// (0x000123b8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1333,	// (0x000123b8) tabs_3_long_passive_pane_cp_srt

0x1333,	// (0x000123b8) tabs_3_long_passive_pane_srt_ParamLimits

0x1333,	// (0x000123b8) tabs_3_long_passive_pane_srt

0x30de,	// (0x00014163) bg_passive_tab_pane_cp5_srt_ParamLimits

0x30de,	// (0x00014163) bg_passive_tab_pane_cp5_srt

0x2a23,	// (0x00013aa8) bg_passive_tab_pane_g1_cp5_srt

0x2999,	// (0x00013a1e) bg_passive_tab_pane_g2_cp5_srt

0x2a2c,	// (0x00013ab1) bg_passive_tab_pane_g3_cp5_srt

0x109d,	// (0x00012122) bg_active_tab_pane_cp5_srt_ParamLimits

0x109d,	// (0x00012122) bg_active_tab_pane_cp5_srt

0xccea,	// (0x0001dd6f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xccea,	// (0x0001dd6f) tabs_3_long_active_pane_srt_t1

0x2a23,	// (0x00013aa8) bg_active_tab_pane_g1_cp5_srt

0x2999,	// (0x00013a1e) bg_active_tab_pane_g2_cp5_srt

0x2a2c,	// (0x00013ab1) bg_active_tab_pane_g3_cp5_srt

0x503f,	// (0x000160c4) navi_text_pane_srt_t1

0x5037,	// (0x000160bc) navi_icon_pane_srt_g1

0x2f18,	// (0x00013f9d) midp_editing_number_pane_srt

0x2d50,	// (0x00013dd5) midp_ticker_pane_srt

0x2f20,	// (0x00013fa5) midp_ticker_pane_srt_g1

0x2f28,	// (0x00013fad) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0002080a) midp_ticker_pane_srt_g

0x2f30,	// (0x00013fb5) midp_ticker_pane_srt_t1

0x5028,	// (0x000160ad) midp_editing_number_pane_t1_copy1

0xbd7d,	// (0x0001ce02) listscroll_midp_pane

0xbd7d,	// (0x0001ce02) midp_form_pane

0x2dc6,	// (0x00013e4b) midp_info_popup_window_ParamLimits

0x2dc6,	// (0x00013e4b) midp_info_popup_window

0x20f3,	// (0x00013178) bg_popup_sub_pane_cp50_ParamLimits

0x20f3,	// (0x00013178) bg_popup_sub_pane_cp50

0x40ef,	// (0x00015174) listscroll_midp_info_pane_ParamLimits

0x40ef,	// (0x00015174) listscroll_midp_info_pane

0x40d7,	// (0x0001515c) listscroll_form_midp_pane_ParamLimits

0x40d7,	// (0x0001515c) listscroll_form_midp_pane

0x40e3,	// (0x00015168) scroll_bar_cp050

0xcad9,	// (0x0001db5e) list_midp_pane

0x604f,	// (0x000170d4) signal_pane_g2_cp

0x3ff1,	// (0x00015076) listscroll_midp_info_pane_t1_ParamLimits

0x3ff1,	// (0x00015076) listscroll_midp_info_pane_t1

0x4009,	// (0x0001508e) listscroll_midp_info_pane_t2_ParamLimits

0x4009,	// (0x0001508e) listscroll_midp_info_pane_t2

0x4047,	// (0x000150cc) listscroll_midp_info_pane_t3_ParamLimits

0x4047,	// (0x000150cc) listscroll_midp_info_pane_t3

0x4081,	// (0x00015106) listscroll_midp_info_pane_t4_ParamLimits

0x4081,	// (0x00015106) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x000208b6) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x000208b6) listscroll_midp_info_pane_t

0x21bd,	// (0x00013242) scroll_pane_cp21

0x3f8b,	// (0x00015010) form_midp_field_choice_group_pane

0x3f94,	// (0x00015019) form_midp_field_text_pane

0x3fd7,	// (0x0001505c) form_midp_field_time_pane

0x3fdf,	// (0x00015064) form_midp_gauge_slider_pane

0x3fe8,	// (0x0001506d) form_midp_gauge_wait_pane

0xec05,	// (0x0001fc8a) form_midp_image_pane

0xcac2,	// (0x0001db47) list_single_midp_pane_ParamLimits

0xcac2,	// (0x0001db47) list_single_midp_pane

0xcaa0,	// (0x0001db25) form_midp_field_text_pane_t1

0x3d6d,	// (0x00014df2) input_focus_pane_cp050

0x3f67,	// (0x00014fec) list_midp_form_text_pane

0x3f18,	// (0x00014f9d) form_midp_field_choice_group_pane_t1

0x3f26,	// (0x00014fab) input_focus_pane_cp051

0x3f3a,	// (0x00014fbf) list_midp_choice_pane

0xec05,	// (0x0001fc8a) status_idle_pane

0x3efc,	// (0x00014f81) form_midp_field_time_pane_t1

0xea82,	// (0x0001fb07) wait_anim_pane_g2_copy1

0x3f0a,	// (0x00014f8f) form_midp_field_time_pane_t2

0x0001,

0x2e76,	// (0x00013efb) aid_navinavi_width_2_pane

0xf82c,	// (0x000208b1) form_midp_field_time_pane_t

0xec05,	// (0x0001fc8a) input_focus_pane_cp052

0xec05,	// (0x0001fc8a) bg_input_focus_pane_cp040

0x3ebc,	// (0x00014f41) form_midp_gauge_slider_pane_t1

0x3eca,	// (0x00014f4f) form_midp_gauge_slider_pane_t2

0xca84,	// (0x0001db09) form_midp_gauge_slider_pane_t3

0xca92,	// (0x0001db17) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x000208a8) form_midp_gauge_slider_pane_t

0x3ef4,	// (0x00014f79) form_midp_slider_pane

0x109d,	// (0x00012122) bg_input_focus_pane_cp041_ParamLimits

0x109d,	// (0x00012122) bg_input_focus_pane_cp041

0x3e89,	// (0x00014f0e) form_midp_gauge_wait_pane_t1_ParamLimits

0x3e89,	// (0x00014f0e) form_midp_gauge_wait_pane_t1

0x3e9b,	// (0x00014f20) form_midp_gauge_wait_pane_t2_ParamLimits

0x3e9b,	// (0x00014f20) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x000208a3) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x000208a3) form_midp_gauge_wait_pane_t

0x3ead,	// (0x00014f32) form_midp_wait_pane_ParamLimits

0x3ead,	// (0x00014f32) form_midp_wait_pane

0x3e53,	// (0x00014ed8) form_midp_image_pane_g1

0x3e5c,	// (0x00014ee1) form_midp_image_pane_t1

0x3e6b,	// (0x00014ef0) form_midp_image_pane_t2

0xca73,	// (0x0001daf8) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x0002089c) form_midp_image_pane_t

0x3e3b,	// (0x00014ec0) list_single_midp_pane_g1

0x3e44,	// (0x00014ec9) list_single_midp_pane_t1

0xca60,	// (0x0001dae5) list_midp_form_item_pane_ParamLimits

0xca60,	// (0x0001dae5) list_midp_form_item_pane

0x2e1e,	// (0x00013ea3) list_midp_form_item_pane_t1

0x2e2d,	// (0x00013eb2) midp_ticker_pane_g1

0x2e39,	// (0x00013ebe) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x000207f0) midp_ticker_pane_g

0xbe25,	// (0x0001ceaa) midp_ticker_pane_t1

0xceab,	// (0x0001df30) midp_editing_number_pane_t1

0x52ba,	// (0x0001633f) midp_editing_number_pane

0x52c9,	// (0x0001634e) midp_ticker_pane

0x4ff0,	// (0x00016075) ai_message_heading_pane

0xec05,	// (0x0001fc8a) bg_popup_window_pane_cp14

0x4ff8,	// (0x0001607d) listscroll_ai_message_pane

0x4f76,	// (0x00015ffb) ai_message_heading_pane_g1_ParamLimits

0x4f76,	// (0x00015ffb) ai_message_heading_pane_g1

0x4f82,	// (0x00016007) ai_message_heading_pane_g2_ParamLimits

0x4f82,	// (0x00016007) ai_message_heading_pane_g2

0x4f90,	// (0x00016015) ai_message_heading_pane_g3_ParamLimits

0x4f90,	// (0x00016015) ai_message_heading_pane_g3

0x4f9c,	// (0x00016021) ai_message_heading_pane_g4_ParamLimits

0x4f9c,	// (0x00016021) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x000209dd) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x000209dd) ai_message_heading_pane_g

0x4fa8,	// (0x0001602d) ai_message_heading_pane_t1_ParamLimits

0x4fa8,	// (0x0001602d) ai_message_heading_pane_t1

0x4fc2,	// (0x00016047) ai_message_heading_pane_t2_ParamLimits

0x4fc2,	// (0x00016047) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x000209e6) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x000209e6) ai_message_heading_pane_t

0x4fd6,	// (0x0001605b) bg_popup_heading_pane_cp1_ParamLimits

0x4fd6,	// (0x0001605b) bg_popup_heading_pane_cp1

0x4f64,	// (0x00015fe9) list_ai_message_pane_ParamLimits

0x4f64,	// (0x00015fe9) list_ai_message_pane

0x21bd,	// (0x00013242) scroll_pane_cp10

0x4f00,	// (0x00015f85) list_ai_message_pane_g1

0x4f08,	// (0x00015f8d) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x000209ba) list_ai_message_pane_g

0x4f10,	// (0x00015f95) list_ai_message_pane_t1_ParamLimits

0x4f10,	// (0x00015f95) list_ai_message_pane_t1

0x4f25,	// (0x00015faa) list_ai_message_pane_t2_ParamLimits

0x4f25,	// (0x00015faa) list_ai_message_pane_t2

0x4f3a,	// (0x00015fbf) list_ai_message_pane_t3_ParamLimits

0x4f3a,	// (0x00015fbf) list_ai_message_pane_t3

0x4f4f,	// (0x00015fd4) list_ai_message_pane_t4_ParamLimits

0x4f4f,	// (0x00015fd4) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x000209bf) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x000209bf) list_ai_message_pane_t

0xccbe,	// (0x0001dd43) cell_ai_soft_ind_pane_ParamLimits

0xccbe,	// (0x0001dd43) cell_ai_soft_ind_pane

0x2e57,	// (0x00013edc) cell_ai_soft_ind_pane_g1_ParamLimits

0x2e57,	// (0x00013edc) cell_ai_soft_ind_pane_g1

0xec05,	// (0x0001fc8a) grid_highlight_cp1

0x2e64,	// (0x00013ee9) text_secondary_cp56_ParamLimits

0x2e64,	// (0x00013ee9) text_secondary_cp56

0x4ebe,	// (0x00015f43) example_general_pane_ParamLimits

0x4ebe,	// (0x00015f43) example_general_pane

0x4eca,	// (0x00015f4f) example_parent_pane_g1_ParamLimits

0x4eca,	// (0x00015f4f) example_parent_pane_g1

0x4ed6,	// (0x00015f5b) example_parent_pane_t1_ParamLimits

0x4ed6,	// (0x00015f5b) example_parent_pane_t1

0xc2a5,	// (0x0001d32a) popup_preview_text_window_ParamLimits

0xc2a5,	// (0x0001d32a) popup_preview_text_window

0x2c7f,	// (0x00013d04) list_single_pane_cp2_g4

0x13e9,	// (0x0001246e) bg_popup_preview_window_pane_ParamLimits

0x13e9,	// (0x0001246e) bg_popup_preview_window_pane

0x4bf1,	// (0x00015c76) popup_preview_text_window_t1_ParamLimits

0x4bf1,	// (0x00015c76) popup_preview_text_window_t1

0x4c0f,	// (0x00015c94) popup_preview_text_window_t2_ParamLimits

0x4c0f,	// (0x00015c94) popup_preview_text_window_t2

0x4c58,	// (0x00015cdd) popup_preview_text_window_t3_ParamLimits

0x4c58,	// (0x00015cdd) popup_preview_text_window_t3

0x4c9d,	// (0x00015d22) popup_preview_text_window_t4_ParamLimits

0x4c9d,	// (0x00015d22) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x0002098e) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x0002098e) popup_preview_text_window_t

0x4d1b,	// (0x00015da0) scroll_pane_cp11

0x3c51,	// (0x00014cd6) bg_popup_preview_window_pane_g1

0x4ba5,	// (0x00015c2a) bg_popup_preview_window_pane_g2

0x4baf,	// (0x00015c34) bg_popup_preview_window_pane_g3

0x4bb9,	// (0x00015c3e) bg_popup_preview_window_pane_g4

0x4bc3,	// (0x00015c48) bg_popup_preview_window_pane_g5

0x4bcd,	// (0x00015c52) bg_popup_preview_window_pane_g6

0x4bd5,	// (0x00015c5a) bg_popup_preview_window_pane_g7

0x4bdd,	// (0x00015c62) bg_popup_preview_window_pane_g8

0xea98,	// (0x0001fb1d) aid_popup_width_pane

0xc215,	// (0x0001d29a) popup_midp_note_alarm_window_ParamLimits

0xc215,	// (0x0001d29a) popup_midp_note_alarm_window

0x1ea9,	// (0x00012f2e) data_form_pane_ParamLimits

0xb8e5,	// (0x0001c96a) form_field_data_pane_g1

0xb8ef,	// (0x0001c974) form_field_data_pane_t1_ParamLimits

0x1ed9,	// (0x00012f5e) input_focus_pane_ParamLimits

0x1ee7,	// (0x00012f6c) data_form_wide_pane_ParamLimits

0x1ef3,	// (0x00012f78) form_field_data_wide_pane_g1

0x1f1f,	// (0x00012fa4) form_field_data_wide_pane_t1_ParamLimits

0x16af,	// (0x00012734) input_focus_pane_cp6_ParamLimits

0xba49,	// (0x0001cace) input_popup_find_pane_g1_ParamLimits

0xba49,	// (0x0001cace) input_popup_find_pane_g1

0xf031,	// (0x000200b6) aid_navi_side_left_pane

0xf046,	// (0x000200cb) aid_navi_side_right_pane

0x45b4,	// (0x00015639) bg_popup_window_pane_cp30_ParamLimits

0x45b4,	// (0x00015639) bg_popup_window_pane_cp30

0x462e,	// (0x000156b3) popup_midp_note_alarm_window_g1_ParamLimits

0x462e,	// (0x000156b3) popup_midp_note_alarm_window_g1

0x465e,	// (0x000156e3) popup_midp_note_alarm_window_t1_ParamLimits

0x465e,	// (0x000156e3) popup_midp_note_alarm_window_t1

0x46ff,	// (0x00015784) popup_midp_note_alarm_window_t2_ParamLimits

0x46ff,	// (0x00015784) popup_midp_note_alarm_window_t2

0x47ad,	// (0x00015832) popup_midp_note_alarm_window_t3_ParamLimits

0x47ad,	// (0x00015832) popup_midp_note_alarm_window_t3

0x47df,	// (0x00015864) popup_midp_note_alarm_window_t4_ParamLimits

0x47df,	// (0x00015864) popup_midp_note_alarm_window_t4

0x4805,	// (0x0001588a) popup_midp_note_alarm_window_t5_ParamLimits

0x4805,	// (0x0001588a) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x0002092b) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x0002092b) popup_midp_note_alarm_window_t

0x48b1,	// (0x00015936) wait_bar_pane_cp1_ParamLimits

0x48b1,	// (0x00015936) wait_bar_pane_cp1

0xec05,	// (0x0001fc8a) wait_anim_pane_copy1

0xec05,	// (0x0001fc8a) wait_border_pane_copy1

0x4299,	// (0x0001531e) wait_border_pane_g1_copy1

0x1f39,	// (0x00012fbe) form_field_popup_pane_g1

0xb909,	// (0x0001c98e) form_field_popup_pane_t1_ParamLimits

0x1ed9,	// (0x00012f5e) input_focus_pane_cp7_ParamLimits

0x1f5b,	// (0x00012fe0) list_form_pane_ParamLimits

0x1f67,	// (0x00012fec) form_field_popup_wide_pane_g1

0x1f6f,	// (0x00012ff4) form_field_popup_wide_pane_t1_ParamLimits

0x1ed9,	// (0x00012f5e) input_focus_pane_cp8_ParamLimits

0x1f84,	// (0x00013009) list_form_wide_pane_ParamLimits

0x5499,	// (0x0001651e) aid_size_cell_graphic_pane

0xb988,	// (0x0001ca0d) data_form_pane_t1_ParamLimits

0xce8f,	// (0x0001df14) data_form_wide_pane_t1_ParamLimits

0xc6cf,	// (0x0001d754) bg_status_flat_pane

0xb119,	// (0x0001c19e) title_pane_t1_ParamLimits

0x1065,	// (0x000120ea) title_pane_t2_ParamLimits

0x108b,	// (0x00012110) title_pane_t3_ParamLimits

0xf56f,	// (0x000205f4) title_pane_t_ParamLimits

0xbb4c,	// (0x0001cbd1) level_1_signal_ParamLimits

0xbb5e,	// (0x0001cbe3) level_2_signal_ParamLimits

0xbb71,	// (0x0001cbf6) level_3_signal_ParamLimits

0xbb84,	// (0x0001cc09) level_4_signal_ParamLimits

0xbb97,	// (0x0001cc1c) level_5_signal_ParamLimits

0xbbaa,	// (0x0001cc2f) level_6_signal_ParamLimits

0xbbbd,	// (0x0001cc42) level_7_signal_ParamLimits

0xbb4c,	// (0x0001cbd1) level_1_battery_ParamLimits

0xbb5e,	// (0x0001cbe3) level_2_battery_ParamLimits

0xbb71,	// (0x0001cbf6) level_3_battery_ParamLimits

0xbb84,	// (0x0001cc09) level_4_battery_ParamLimits

0xbb97,	// (0x0001cc1c) level_5_battery_ParamLimits

0xbbaa,	// (0x0001cc2f) level_6_battery_ParamLimits

0xbbbd,	// (0x0001cc42) level_7_battery_ParamLimits

0x44b9,	// (0x0001553e) bg_status_flat_pane_g1

0x44c1,	// (0x00015546) bg_status_flat_pane_g2

0x44c9,	// (0x0001554e) bg_status_flat_pane_g3

0x44d1,	// (0x00015556) bg_status_flat_pane_g4

0x44d9,	// (0x0001555e) bg_status_flat_pane_g5

0x44e1,	// (0x00015566) bg_status_flat_pane_g6

0x44e9,	// (0x0001556e) bg_status_flat_pane_g7

0xb1ad,	// (0x0001c232) tabs_3_active_pane_t1_ParamLimits

0xb1ad,	// (0x0001c232) tabs_3_passive_pane_t1_ParamLimits

0xb1c7,	// (0x0001c24c) tabs_4_active_pane_t1_ParamLimits

0xb1c7,	// (0x0001c24c) tabs_4_1_passive_pane_t1_ParamLimits

0xba5f,	// (0x0001cae4) tabs_2_active_pane_t1_ParamLimits

0xba5f,	// (0x0001cae4) tabs_2_passive_pane_t1_ParamLimits

0x109d,	// (0x00012122) bg_active_tab_pane_cp4_ParamLimits

0xba71,	// (0x0001caf6) tabs_2_long_active_pane_t1_ParamLimits

0x30de,	// (0x00014163) bg_passive_tab_pane_cp4_ParamLimits

0xf4b2,	// (0x00020537) list_single_midp_graphic_pane_t1_ParamLimits

0x109d,	// (0x00012122) bg_active_tab_pane_cp5_ParamLimits

0xba84,	// (0x0001cb09) tabs_3_long_active_pane_t1_ParamLimits

0x30de,	// (0x00014163) bg_passive_tab_pane_cp5_ParamLimits

0xf4b2,	// (0x00020537) list_single_midp_graphic_pane_t1

0xc6cf,	// (0x0001d754) bg_status_flat_pane_ParamLimits

0x389b,	// (0x00014920) indicator_pane_cp2_ParamLimits

0x389b,	// (0x00014920) indicator_pane_cp2

0xc865,	// (0x0001d8ea) navi_pane_srt_ParamLimits

0xc865,	// (0x0001d8ea) navi_pane_srt

0x3a02,	// (0x00014a87) popup_clock_digital_analogue_window_cp1

0x1197,	// (0x0001221c) indicator_pane_t1

0x2d50,	// (0x00013dd5) copy_highlight_pane

0x2d50,	// (0x00013dd5) cursor_graphics_pane

0x2d50,	// (0x00013dd5) graphic_within_text_pane

0x2d50,	// (0x00013dd5) link_highlight_pane

0x4cde,	// (0x00015d63) popup_preview_text_window_t5_ParamLimits

0x4cde,	// (0x00015d63) popup_preview_text_window_t5

0x2e80,	// (0x00013f05) cursor_digital_pane

0x2e80,	// (0x00013f05) cursor_primary_pane

0x2e91,	// (0x00013f16) cursor_primary_small_pane

0x2e99,	// (0x00013f1e) cursor_secondary_pane

0x2ea1,	// (0x00013f26) cursor_title_pane

0x2e80,	// (0x00013f05) link_highlight_digital_pane

0x2e88,	// (0x00013f0d) link_highlight_primary_pane

0x2e91,	// (0x00013f16) link_highlight_primary_small_pane

0x2e99,	// (0x00013f1e) link_highlight_secondary_pane

0x2ea1,	// (0x00013f26) link_highlight_title_pane

0x2e80,	// (0x00013f05) copy_highlight_digital_pane

0x2e80,	// (0x00013f05) copy_highlight_primary_pane

0x2e91,	// (0x00013f16) copy_highlight_primary_small_pane

0x2e99,	// (0x00013f1e) copy_highlight_secondary_pane

0x2ea1,	// (0x00013f26) copy_highlight_title_pane

0x2e99,	// (0x00013f1e) graphic_text_digital_pane

0x4557,	// (0x000155dc) graphic_text_primary_pane

0x4560,	// (0x000155e5) graphic_text_primary_small_pane

0x2e91,	// (0x00013f16) graphic_text_secondary_pane

0x2e80,	// (0x00013f05) graphic_text_title_pane

0xbe37,	// (0x0001cebc) cursor_primary_pane_g1

0x4549,	// (0x000155ce) cursor_text_primary_t1

0xcb15,	// (0x0001db9a) cursor_primary_small_pane_g1

0x453b,	// (0x000155c0) cursor_text_primary_small_t1

0xcb0b,	// (0x0001db90) cursor_primary_small_pane_g1_copy1

0x4523,	// (0x000155a8) cursor_text_primary_small_t1_copy1

0x4501,	// (0x00015586) cursor_text_title_t1

0xcb01,	// (0x0001db86) cursor_title_pane_g1

0xbe37,	// (0x0001cebc) cursor_digital_pane_g1

0x2eb3,	// (0x00013f38) cursor_text_digital_t1

0x2ec1,	// (0x00013f46) link_highlight_primary_pane_g1

0x44aa,	// (0x0001552f) link_highlight_primary_pane_t1

0x2ec1,	// (0x00013f46) link_highlight_primary_small_pane_g1

0x2ec9,	// (0x00013f4e) link_highlight_primary_small_pane_t1

0x2ed8,	// (0x00013f5d) link_highlight_secondary_pane_g1

0x2ee0,	// (0x00013f65) link_highlight_secondary_pane_t1

0x441e,	// (0x000154a3) link_highlight_title_pane_g1

0x4426,	// (0x000154ab) link_highlight_title_pane_t1

0x4407,	// (0x0001548c) link_highlight_digital_pane_g1

0x440f,	// (0x00015494) link_highlight_digital_pane_t1

0x42cf,	// (0x00015354) copy_highlight_primary_pane_g1

0x42e6,	// (0x0001536b) copy_highlight_primary_pane_t1

0x42cf,	// (0x00015354) copy_highlight_primary_small_pane_g1

0x42d7,	// (0x0001535c) copy_highlight_primary_small_pane_t1

0x2eef,	// (0x00013f74) copy_highlight_secondary_pane_g1

0x2ef7,	// (0x00013f7c) copy_highlight_secondary_pane_t1

0x42b8,	// (0x0001533d) copy_highlight_title_pane_g1

0x42c0,	// (0x00015345) copy_highlight_title_pane_t1

0x42cf,	// (0x00015354) copy_highlight_digital_pane_g1

0x5669,	// (0x000166ee) copy_highlight_digital_pane_t1

0x55bd,	// (0x00016642) graphic_text_primary_pane_g1

0x564d,	// (0x000166d2) graphic_text_primary_pane_t1

0x565b,	// (0x000166e0) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x00020a5a) graphic_text_primary_pane_t

0x5629,	// (0x000166ae) graphic_text_primary_small_pane_g1

0x5631,	// (0x000166b6) graphic_text_primary_small_pane_t1

0x563f,	// (0x000166c4) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x00020a55) graphic_text_primary_small_pane_t

0x5605,	// (0x0001668a) graphic_text_secondary_pane_g1

0x560d,	// (0x00016692) graphic_text_secondary_pane_t1

0x561b,	// (0x000166a0) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x00020a50) graphic_text_secondary_pane_t

0x55e1,	// (0x00016666) graphic_text_title_pane_g1

0x55e9,	// (0x0001666e) graphic_text_title_pane_t1

0x55f7,	// (0x0001667c) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x00020a4b) graphic_text_title_pane_t

0x55bd,	// (0x00016642) graphic_text_digital_pane_g1

0x55c5,	// (0x0001664a) graphic_text_digital_pane_t1

0x55d3,	// (0x00016658) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x00020a46) graphic_text_digital_pane_t

0x109d,	// (0x00012122) navi_icon_pane_srt_ParamLimits

0x109d,	// (0x00012122) navi_icon_pane_srt

0xec05,	// (0x0001fc8a) navi_midp_pane_srt

0xec05,	// (0x0001fc8a) navi_navi_pane_srt

0x109d,	// (0x00012122) navi_text_pane_srt_ParamLimits

0x109d,	// (0x00012122) navi_text_pane_srt

0x5588,	// (0x0001660d) navi_navi_icon_text_pane_srt

0x5590,	// (0x00016615) navi_navi_pane_srt_g1_ParamLimits

0x5590,	// (0x00016615) navi_navi_pane_srt_g1

0x55a2,	// (0x00016627) navi_navi_pane_srt_g2_ParamLimits

0x55a2,	// (0x00016627) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x00020a41) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x00020a41) navi_navi_pane_srt_g

0x55b4,	// (0x00016639) navi_navi_tabs_pane_srt

0x5588,	// (0x0001660d) navi_navi_text_pane_srt

0x5588,	// (0x0001660d) navi_navi_volume_pane_srt

0x5579,	// (0x000165fe) navi_navi_text_pane_srt_t1

0x024d,	// (0x000112d2) navi_navi_volume_pane_srt_g1

0x0255,	// (0x000112da) volume_small_pane_srt_ParamLimits

0x0255,	// (0x000112da) volume_small_pane_srt

0xf30f,	// (0x00020394) volume_small_pane_srt_g1_ParamLimits

0xf30f,	// (0x00020394) volume_small_pane_srt_g1

0xf31f,	// (0x000203a4) volume_small_pane_srt_g2_ParamLimits

0xf31f,	// (0x000203a4) volume_small_pane_srt_g2

0xf330,	// (0x000203b5) volume_small_pane_srt_g3_ParamLimits

0xf330,	// (0x000203b5) volume_small_pane_srt_g3

0xf341,	// (0x000203c6) volume_small_pane_srt_g4_ParamLimits

0xf341,	// (0x000203c6) volume_small_pane_srt_g4

0xf352,	// (0x000203d7) volume_small_pane_srt_g5_ParamLimits

0xf352,	// (0x000203d7) volume_small_pane_srt_g5

0xf363,	// (0x000203e8) volume_small_pane_srt_g6_ParamLimits

0xf363,	// (0x000203e8) volume_small_pane_srt_g6

0xf374,	// (0x000203f9) volume_small_pane_srt_g7_ParamLimits

0xf374,	// (0x000203f9) volume_small_pane_srt_g7

0xf385,	// (0x0002040a) volume_small_pane_srt_g8_ParamLimits

0xf385,	// (0x0002040a) volume_small_pane_srt_g8

0xf396,	// (0x0002041b) volume_small_pane_srt_g9_ParamLimits

0xf396,	// (0x0002041b) volume_small_pane_srt_g9

0xf3a7,	// (0x0002042c) volume_small_pane_srt_g10_ParamLimits

0xf3a7,	// (0x0002042c) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x000207f5) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x000207f5) volume_small_pane_srt_g

0x149e,	// (0x00012523) query_popup_data_pane_cp2

0x555f,	// (0x000165e4) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x555f,	// (0x000165e4) navi_navi_icon_text_pane_srt_t1

0x4557,	// (0x000155dc) navi_tabs_2_long_pane_srt

0x4557,	// (0x000155dc) navi_tabs_2_pane_srt

0x4557,	// (0x000155dc) navi_tabs_3_long_pane_srt

0x4557,	// (0x000155dc) navi_tabs_3_pane_srt

0x4557,	// (0x000155dc) navi_tabs_4_pane_srt

0x022d,	// (0x000112b2) tabs_2_active_pane_srt_ParamLimits

0x022d,	// (0x000112b2) tabs_2_active_pane_srt

0x023d,	// (0x000112c2) tabs_2_passive_pane_srt_ParamLimits

0x023d,	// (0x000112c2) tabs_2_passive_pane_srt

0x3d6d,	// (0x00014df2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3d6d,	// (0x00014df2) bg_passive_tab_pane_cp1_srt

0x552b,	// (0x000165b0) bg_passive_tab_pane_g1_cp1_srt

0x2999,	// (0x00013a1e) bg_passive_tab_pane_g2_cp1_srt

0x5534,	// (0x000165b9) bg_passive_tab_pane_g3_cp1_srt

0x1333,	// (0x000123b8) bg_active_tab_pane_cp1_srt_ParamLimits

0x1333,	// (0x000123b8) bg_active_tab_pane_cp1_srt

0x553d,	// (0x000165c2) tabs_2_active_pane_srt_g1

0xcfcc,	// (0x0001e051) tabs_2_active_pane_srt_t1_ParamLimits

0xcfcc,	// (0x0001e051) tabs_2_active_pane_srt_t1

0x552b,	// (0x000165b0) bg_active_tab_pane_g1_cp1_srt

0x2999,	// (0x00013a1e) bg_active_tab_pane_g2_cp1_srt

0x5534,	// (0x000165b9) bg_active_tab_pane_g3_cp1_srt

0x01fa,	// (0x0001127f) tabs_3_active_pane_srt_ParamLimits

0x01fa,	// (0x0001127f) tabs_3_active_pane_srt

0x020b,	// (0x00011290) tabs_3_passive_pane_cp_srt_ParamLimits

0x020b,	// (0x00011290) tabs_3_passive_pane_cp_srt

0x021c,	// (0x000112a1) tabs_3_passive_pane_srt_ParamLimits

0x021c,	// (0x000112a1) tabs_3_passive_pane_srt

0x3d6d,	// (0x00014df2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3d6d,	// (0x00014df2) bg_passive_tab_pane_cp2_srt

0x2f06,	// (0x00013f8b) bg_passive_tab_pane_g1_cp2_srt

0x2999,	// (0x00013a1e) bg_passive_tab_pane_g2_cp2_srt

0x2f0f,	// (0x00013f94) bg_passive_tab_pane_g3_cp2_srt

0x1333,	// (0x000123b8) bg_active_tab_pane_cp2_srt_ParamLimits

0x1333,	// (0x000123b8) bg_active_tab_pane_cp2_srt

0x5511,	// (0x00016596) tabs_3_active_pane_srt_g1

0xcfb6,	// (0x0001e03b) tabs_3_active_pane_srt_t1_ParamLimits

0xcfb6,	// (0x0001e03b) tabs_3_active_pane_srt_t1

0x2f06,	// (0x00013f8b) bg_active_tab_pane_g1_cp2_srt

0x2999,	// (0x00013a1e) bg_active_tab_pane_g2_cp2_srt

0x2f0f,	// (0x00013f94) bg_active_tab_pane_g3_cp2_srt

0x01b2,	// (0x00011237) tabs_4_active_pane_srt_ParamLimits

0x01b2,	// (0x00011237) tabs_4_active_pane_srt

0x01c4,	// (0x00011249) tabs_4_passive_pane_cp2_srt_ParamLimits

0x01c4,	// (0x00011249) tabs_4_passive_pane_cp2_srt

0x3064,	// (0x000140e9) aid_size_cell_toolbar

0x50d2,	// (0x00016157) main_idle_act_pane_ParamLimits

0x32ab,	// (0x00014330) popup_large_graphic_colour_window_ParamLimits

0xc56b,	// (0x0001d5f0) popup_toolbar_window_ParamLimits

0xc56b,	// (0x0001d5f0) popup_toolbar_window

0x52ff,	// (0x00016384) list_single_graphic_2heading_pane_ParamLimits

0x52ff,	// (0x00016384) list_single_graphic_2heading_pane

0x23ee,	// (0x00013473) aid_size_cell_apps_grid_lsc_pane

0x2400,	// (0x00013485) aid_size_cell_apps_grid_prt_pane

0x30de,	// (0x00014163) bg_wml_button_pane_cp1_ParamLimits

0x30de,	// (0x00014163) bg_wml_button_pane_cp1

0xcaa0,	// (0x0001db25) form_midp_field_text_pane_t1_ParamLimits

0x3d6d,	// (0x00014df2) input_focus_pane_cp050_ParamLimits

0x3f67,	// (0x00014fec) list_midp_form_text_pane_ParamLimits

0x3f26,	// (0x00014fab) input_focus_pane_cp051_ParamLimits

0x3f3a,	// (0x00014fbf) list_midp_choice_pane_ParamLimits

0xca30,	// (0x0001dab5) list_single_2graphic_pane_cp3_ParamLimits

0xca30,	// (0x0001dab5) list_single_2graphic_pane_cp3

0xca42,	// (0x0001dac7) list_single_midp_graphic_pane_ParamLimits

0xca42,	// (0x0001dac7) list_single_midp_graphic_pane

0xf3c7,	// (0x0002044c) list_single_graphic_2heading_pane_g1_ParamLimits

0xf3c7,	// (0x0002044c) list_single_graphic_2heading_pane_g1

0xf3d3,	// (0x00020458) list_single_graphic_2heading_pane_g4_ParamLimits

0xf3d3,	// (0x00020458) list_single_graphic_2heading_pane_g4

0xf3df,	// (0x00020464) list_single_graphic_2heading_pane_g5_ParamLimits

0xf3df,	// (0x00020464) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x00020848) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x00020848) list_single_graphic_2heading_pane_g

0xf3eb,	// (0x00020470) list_single_graphic_2heading_pane_t1_ParamLimits

0xf3eb,	// (0x00020470) list_single_graphic_2heading_pane_t1

0xf3ff,	// (0x00020484) list_single_graphic_2heading_pane_t2_ParamLimits

0xf3ff,	// (0x00020484) list_single_graphic_2heading_pane_t2

0xf41b,	// (0x000204a0) list_single_graphic_2heading_pane_t3_ParamLimits

0xf41b,	// (0x000204a0) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0002084f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0002084f) list_single_graphic_2heading_pane_t

0x3b61,	// (0x00014be6) bg_popup_sub_pane_cp2

0x3b8b,	// (0x00014c10) grid_toobar_pane

0xf433,	// (0x000204b8) cell_toolbar_pane_ParamLimits

0xf433,	// (0x000204b8) cell_toolbar_pane

0x3bf5,	// (0x00014c7a) cell_toolbar_pane_g1_ParamLimits

0x3bf5,	// (0x00014c7a) cell_toolbar_pane_g1

0x3c09,	// (0x00014c8e) cell_toolbar_pane_g2_ParamLimits

0x3c09,	// (0x00014c8e) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0002085d) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0002085d) cell_toolbar_pane_g

0x3c2b,	// (0x00014cb0) grid_highlight_pane_cp2_ParamLimits

0x3c2b,	// (0x00014cb0) grid_highlight_pane_cp2

0x3c45,	// (0x00014cca) toolbar_button_pane

0x3c51,	// (0x00014cd6) toolbar_button_pane_g1

0x3c59,	// (0x00014cde) toolbar_button_pane_g2

0x3c61,	// (0x00014ce6) toolbar_button_pane_g3

0x3c69,	// (0x00014cee) toolbar_button_pane_g4

0x3c71,	// (0x00014cf6) toolbar_button_pane_g5

0x3c79,	// (0x00014cfe) toolbar_button_pane_g6

0x3c81,	// (0x00014d06) toolbar_button_pane_g7

0x3c89,	// (0x00014d0e) toolbar_button_pane_g8

0x3c91,	// (0x00014d16) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x00020862) toolbar_button_pane_g

0xf46b,	// (0x000204f0) list_single_2graphic_pane_g1_cp3_ParamLimits

0xf46b,	// (0x000204f0) list_single_2graphic_pane_g1_cp3

0xaa61,	// (0x0001bae6) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaa61,	// (0x0001bae6) list_single_2graphic_pane_g2_cp3

0xf477,	// (0x000204fc) list_single_2graphic_pane_g3_cp3

0xf47f,	// (0x00020504) list_single_2graphic_pane_g4_cp3_ParamLimits

0xf47f,	// (0x00020504) list_single_2graphic_pane_g4_cp3

0xf48b,	// (0x00020510) list_single_2graphic_pane_t1_cp3_ParamLimits

0xf48b,	// (0x00020510) list_single_2graphic_pane_t1_cp3

0xf4a6,	// (0x0002052b) list_single_midp_graphic_pane_g2_ParamLimits

0xf4a6,	// (0x0002052b) list_single_midp_graphic_pane_g2

0x306c,	// (0x000140f1) aid_zoom_text_primary

0x3074,	// (0x000140f9) aid_zoom_text_secondary

0x2fc3,	// (0x00014048) status_small_pane_g7_ParamLimits

0x2fc3,	// (0x00014048) status_small_pane_g7

0x2fe6,	// (0x0001406b) status_small_pane_t1_ParamLimits

0xb0f5,	// (0x0001c17a) title_pane_g2

0x0003,

0xf566,	// (0x000205eb) title_pane_g

0xb38d,	// (0x0001c412) aid_size_cell_colour_1_pane_ParamLimits

0xb38d,	// (0x0001c412) aid_size_cell_colour_1_pane

0xb3a1,	// (0x0001c426) aid_size_cell_colour_2_pane_ParamLimits

0xb3a1,	// (0x0001c426) aid_size_cell_colour_2_pane

0xb3b5,	// (0x0001c43a) aid_size_cell_colour_3_pane_ParamLimits

0xb3b5,	// (0x0001c43a) aid_size_cell_colour_3_pane

0xb3c9,	// (0x0001c44e) aid_size_cell_colour_4_pane_ParamLimits

0xb3c9,	// (0x0001c44e) aid_size_cell_colour_4_pane

0xef6d,	// (0x0001fff2) title_pane_stacon_g1_ParamLimits

0xef6d,	// (0x0001fff2) title_pane_stacon_g1

0x433d,	// (0x000153c2) popup_note_wait_window_g3_ParamLimits

0x433d,	// (0x000153c2) popup_note_wait_window_g3

0x43b4,	// (0x00015439) popup_note_wait_window_t5_ParamLimits

0x43b4,	// (0x00015439) popup_note_wait_window_t5

0xec05,	// (0x0001fc8a) main_feb_china_hwr_fs_writing_pane

0xbf06,	// (0x0001cf8b) popup_feb_china_hwr_fs_window_ParamLimits

0xbf06,	// (0x0001cf8b) popup_feb_china_hwr_fs_window

0xaa72,	// (0x0001baf7) aid_size_cell_hwr_fs_ParamLimits

0xaa72,	// (0x0001baf7) aid_size_cell_hwr_fs

0x3d6d,	// (0x00014df2) bg_popup_sub_pane_cp3_ParamLimits

0x3d6d,	// (0x00014df2) bg_popup_sub_pane_cp3

0xaa87,	// (0x0001bb0c) grid_hwr_fs_pane_ParamLimits

0xaa87,	// (0x0001bb0c) grid_hwr_fs_pane

0xf4c8,	// (0x0002054d) linegrid_hwr_fs_pane_ParamLimits

0xf4c8,	// (0x0002054d) linegrid_hwr_fs_pane

0xaa9f,	// (0x0001bb24) cell_hwr_fs_pane_ParamLimits

0xaa9f,	// (0x0001bb24) cell_hwr_fs_pane

0x3d79,	// (0x00014dfe) linegrid_hwr_fs_pane_g1_ParamLimits

0x3d79,	// (0x00014dfe) linegrid_hwr_fs_pane_g1

0xca04,	// (0x0001da89) linegrid_hwr_fs_pane_g2_ParamLimits

0xca04,	// (0x0001da89) linegrid_hwr_fs_pane_g2

0x3d97,	// (0x00014e1c) linegrid_hwr_fs_pane_g3_ParamLimits

0x3d97,	// (0x00014e1c) linegrid_hwr_fs_pane_g3

0xf4d8,	// (0x0002055d) linegrid_hwr_fs_pane_g4_ParamLimits

0xf4d8,	// (0x0002055d) linegrid_hwr_fs_pane_g4

0xf4f6,	// (0x0002057b) linegrid_hwr_fs_pane_g5_ParamLimits

0xf4f6,	// (0x0002057b) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x00020888) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x00020888) linegrid_hwr_fs_pane_g

0x3da3,	// (0x00014e28) cell_hwr_fs_pane_g1_ParamLimits

0x3da3,	// (0x00014e28) cell_hwr_fs_pane_g1

0x3a98,	// (0x00014b1d) cell_hwr_fs_pane_g2_ParamLimits

0x3a98,	// (0x00014b1d) cell_hwr_fs_pane_g2

0xca16,	// (0x0001da9b) cell_hwr_fs_pane_g3_ParamLimits

0xca16,	// (0x0001da9b) cell_hwr_fs_pane_g3

0xca23,	// (0x0001daa8) cell_hwr_fs_pane_g4_ParamLimits

0xca23,	// (0x0001daa8) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x00020893) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x00020893) cell_hwr_fs_pane_g

0xaac5,	// (0x0001bb4a) cell_hwr_fs_pane_t1

0xec05,	// (0x0001fc8a) grid_highlight_pane_cp6

0xec05,	// (0x0001fc8a) main_idle_act2_pane

0x21a4,	// (0x00013229) aid_inside_area_popup_secondary

0xcb35,	// (0x0001dbba) aid_inside_area_window_primary_ParamLimits

0xcb35,	// (0x0001dbba) aid_inside_area_window_primary

0x5678,	// (0x000166fd) ai2_news_ticker_pane

0x5680,	// (0x00016705) aid_size_cell_ai1_link_ParamLimits

0x5680,	// (0x00016705) aid_size_cell_ai1_link

0x569a,	// (0x0001671f) popup_ai2_data_window_ParamLimits

0x569a,	// (0x0001671f) popup_ai2_data_window

0x56b8,	// (0x0001673d) popup_ai2_link_window_ParamLimits

0x56b8,	// (0x0001673d) popup_ai2_link_window

0x3d6d,	// (0x00014df2) bg_popup_sub_pane_cp4_ParamLimits

0x3d6d,	// (0x00014df2) bg_popup_sub_pane_cp4

0x56ce,	// (0x00016753) grid_ai2_link_pane_ParamLimits

0x56ce,	// (0x00016753) grid_ai2_link_pane

0x56e5,	// (0x0001676a) popup_ai2_link_window_g1_ParamLimits

0x56e5,	// (0x0001676a) popup_ai2_link_window_g1

0x56f1,	// (0x00016776) popup_ai2_link_window_g2_ParamLimits

0x56f1,	// (0x00016776) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x00020a5f) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x00020a5f) popup_ai2_link_window_g

0x5702,	// (0x00016787) ai2_mp_button_pane

0x570a,	// (0x0001678f) ai2_mp_volume_pane

0x3f26,	// (0x00014fab) bg_popup_sub_pane_cp5_ParamLimits

0x3f26,	// (0x00014fab) bg_popup_sub_pane_cp5

0x5712,	// (0x00016797) heading_ai2_gene_pane_ParamLimits

0x5712,	// (0x00016797) heading_ai2_gene_pane

0x571e,	// (0x000167a3) list_ai2_gene_pane_ParamLimits

0x571e,	// (0x000167a3) list_ai2_gene_pane

0x5766,	// (0x000167eb) cell_ai2_link_pane_ParamLimits

0x5766,	// (0x000167eb) cell_ai2_link_pane

0x577c,	// (0x00016801) cell_ai2_link_pane_g1

0xec05,	// (0x0001fc8a) grid_highlight_pane_cp7

0x026a,	// (0x000112ef) ai2_mp_volume_pane_g1

0x584f,	// (0x000168d4) ai2_mp_volume_pane_g2

0x57c4,	// (0x00016849) list_ai2_gene_pane_t1

0x5857,	// (0x000168dc) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x00020a78) ai2_mp_volume_pane_g

0x0272,	// (0x000112f7) volume_small_pane_cp3

0x585f,	// (0x000168e4) aid_size_cell_ai2_button

0x5867,	// (0x000168ec) grid_ai2_button_pane

0x5870,	// (0x000168f5) cell_ai2_button_pane_ParamLimits

0x5870,	// (0x000168f5) cell_ai2_button_pane

0xea82,	// (0x0001fb07) cell_ai2_button_pane_g1

0xec05,	// (0x0001fc8a) grid_highlight_pane_cp8

0x580f,	// (0x00016894) ai2_gene_pane_t1_ParamLimits

0x580f,	// (0x00016894) ai2_gene_pane_t1

0xbe68,	// (0x0001ceed) aid_height_parent_landscape

0xcd17,	// (0x0001dd9c) aid_height_set_list

0x50d2,	// (0x00016157) aid_size_parent

0x5499,	// (0x0001651e) aid_size_cell_graphic_pane_ParamLimits

0x572e,	// (0x000167b3) popup_ai2_data_window_g1_ParamLimits

0x572e,	// (0x000167b3) popup_ai2_data_window_g1

0x573a,	// (0x000167bf) ai2_news_ticker_pane_g1

0x5742,	// (0x000167c7) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x00020a64) ai2_news_ticker_pane_g

0x574a,	// (0x000167cf) ai2_news_ticker_pane_t1

0x5758,	// (0x000167dd) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x00020a69) ai2_news_ticker_pane_t

0x5785,	// (0x0001680a) heading_ai2_gene_pane_g1

0x578d,	// (0x00016812) heading_ai2_gene_pane_t1_ParamLimits

0x578d,	// (0x00016812) heading_ai2_gene_pane_t1

0x57a2,	// (0x00016827) list_highlight_pane_cp6

0x57aa,	// (0x0001682f) ai2_gene_pane_ParamLimits

0x57aa,	// (0x0001682f) ai2_gene_pane

0x57d2,	// (0x00016857) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x00020a6e) list_ai2_gene_pane_t

0x57e0,	// (0x00016865) list_highlight_pane_cp8_ParamLimits

0x57e0,	// (0x00016865) list_highlight_pane_cp8

0x57f1,	// (0x00016876) ai2_gene_pane_g1_ParamLimits

0x57f1,	// (0x00016876) ai2_gene_pane_g1

0x5803,	// (0x00016888) ai2_gene_pane_g2_ParamLimits

0x5803,	// (0x00016888) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x00020a73) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x00020a73) ai2_gene_pane_g

0x18d4,	// (0x00012959) scroll_pane_cp12

0xaa20,	// (0x0001baa5) control_pane_t3_ParamLimits

0xaa20,	// (0x0001baa5) control_pane_t3

0x2fd7,	// (0x0001405c) status_small_pane_g8_ParamLimits

0x2fd7,	// (0x0001405c) status_small_pane_g8

0xbfa8,	// (0x0001d02d) popup_find_window_ParamLimits

0xc255,	// (0x0001d2da) popup_note_image_window_ParamLimits

0x3bc7,	// (0x00014c4c) list_double2_graphic_pane_vc_g1_ParamLimits

0x3bc7,	// (0x00014c4c) list_double2_graphic_pane_vc_g1

0x2cc1,	// (0x00013d46) list_double2_graphic_pane_vc_g2_ParamLimits

0x2cc1,	// (0x00013d46) list_double2_graphic_pane_vc_g2

0x3bd3,	// (0x00014c58) list_double2_graphic_pane_vc_g3_ParamLimits

0x3bd3,	// (0x00014c58) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x00020856) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x00020856) list_double2_graphic_pane_vc_g

0x3bdf,	// (0x00014c64) list_double2_graphic_pane_vc_t1_ParamLimits

0x3bdf,	// (0x00014c64) list_double2_graphic_pane_vc_t1

0x2cc1,	// (0x00013d46) list_single_heading_pane_vc_g1_ParamLimits

0x2cc1,	// (0x00013d46) list_single_heading_pane_vc_g1

0x3bd3,	// (0x00014c58) list_single_heading_pane_vc_g2_ParamLimits

0x3bd3,	// (0x00014c58) list_single_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x00020665) list_single_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x00020665) list_single_heading_pane_vc_g

0x3c99,	// (0x00014d1e) list_single_heading_pane_vc_t1_ParamLimits

0x3c99,	// (0x00014d1e) list_single_heading_pane_vc_t1

0x3cb1,	// (0x00014d36) list_single_heading_pane_vc_t2_ParamLimits

0x3cb1,	// (0x00014d36) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x00020877) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x00020877) list_single_heading_pane_vc_t

0x3cc3,	// (0x00014d48) list_setting_number_pane_vc_g1_ParamLimits

0x3cc3,	// (0x00014d48) list_setting_number_pane_vc_g1

0x3ccf,	// (0x00014d54) list_setting_number_pane_vc_g2_ParamLimits

0x3ccf,	// (0x00014d54) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002087c) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002087c) list_setting_number_pane_vc_g

0x3cdb,	// (0x00014d60) list_setting_number_pane_vc_t1_ParamLimits

0x3cdb,	// (0x00014d60) list_setting_number_pane_vc_t1

0x3cef,	// (0x00014d74) list_setting_number_pane_vc_t2_ParamLimits

0x3cef,	// (0x00014d74) list_setting_number_pane_vc_t2

0x3d0b,	// (0x00014d90) list_setting_number_pane_vc_t3_ParamLimits

0x3d0b,	// (0x00014d90) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x00020881) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x00020881) list_setting_number_pane_vc_t

0x3d33,	// (0x00014db8) set_value_pane_vc_ParamLimits

0x3d33,	// (0x00014db8) set_value_pane_vc

0x52ff,	// (0x00016384) list_double2_graphic_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_double2_graphic_pane_vc

0x52ff,	// (0x00016384) list_double2_large_graphic_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_double2_large_graphic_pane_vc

0x52ff,	// (0x00016384) list_double2_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_double2_pane_vc

0x52ff,	// (0x00016384) list_double_graphic_heading_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_double_graphic_heading_pane_vc

0x52ff,	// (0x00016384) list_double_graphic_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_double_graphic_pane_vc

0x52ff,	// (0x00016384) list_double_heading_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_double_heading_pane_vc

0x52ff,	// (0x00016384) list_double_large_graphic_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_double_large_graphic_pane_vc

0x52ff,	// (0x00016384) list_double_number_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_double_number_pane_vc

0x52ff,	// (0x00016384) list_double_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_double_pane_vc

0x52ff,	// (0x00016384) list_double_time_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_double_time_pane_vc

0x52ff,	// (0x00016384) list_setting_number_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_setting_number_pane_vc

0x52ff,	// (0x00016384) list_setting_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_setting_pane_vc

0x52ff,	// (0x00016384) list_single_graphic_heading_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_single_graphic_heading_pane_vc

0x52ff,	// (0x00016384) list_single_heading_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_single_heading_pane_vc

0x52ff,	// (0x00016384) list_single_number_heading_pane_vc_ParamLimits

0x52ff,	// (0x00016384) list_single_number_heading_pane_vc

0x3bc7,	// (0x00014c4c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3bc7,	// (0x00014c4c) list_double_graphic_heading_pane_vc_g1

0x58a3,	// (0x00016928) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x58a3,	// (0x00016928) list_double_graphic_heading_pane_vc_g2

0x58af,	// (0x00016934) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x58af,	// (0x00016934) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fa,	// (0x00020a7f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x00020a7f) list_double_graphic_heading_pane_vc_g

0x58bb,	// (0x00016940) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x58bb,	// (0x00016940) list_double_graphic_heading_pane_vc_t1

0x3c99,	// (0x00014d1e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3c99,	// (0x00014d1e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa01,	// (0x00020a86) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x00020a86) list_double_graphic_heading_pane_vc_t

0x3cc3,	// (0x00014d48) list_setting_pane_vc_g1_ParamLimits

0x3cc3,	// (0x00014d48) list_setting_pane_vc_g1

0x3ccf,	// (0x00014d54) list_setting_pane_vc_g2_ParamLimits

0x3ccf,	// (0x00014d54) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002087c) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002087c) list_setting_pane_vc_g

0x5ad6,	// (0x00016b5b) list_setting_pane_vc_t1_ParamLimits

0x5ad6,	// (0x00016b5b) list_setting_pane_vc_t1

0x5aea,	// (0x00016b6f) list_setting_pane_vc_t2_ParamLimits

0x5aea,	// (0x00016b6f) list_setting_pane_vc_t2

0x0001,

0xfa44,	// (0x00020ac9) list_setting_pane_vc_t_ParamLimits

0xfa44,	// (0x00020ac9) list_setting_pane_vc_t

0x3d33,	// (0x00014db8) set_value_pane_cp_vc_ParamLimits

0x3d33,	// (0x00014db8) set_value_pane_cp_vc

0x2cc1,	// (0x00013d46) list_single_number_heading_pane_vc_g1_ParamLimits

0x2cc1,	// (0x00013d46) list_single_number_heading_pane_vc_g1

0x3bd3,	// (0x00014c58) list_single_number_heading_pane_vc_g2_ParamLimits

0x3bd3,	// (0x00014c58) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x00020665) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x00020665) list_single_number_heading_pane_vc_g

0x3c99,	// (0x00014d1e) list_single_number_heading_pane_vc_t1_ParamLimits

0x3c99,	// (0x00014d1e) list_single_number_heading_pane_vc_t1

0x5b0c,	// (0x00016b91) list_single_number_heading_pane_vc_t2_ParamLimits

0x5b0c,	// (0x00016b91) list_single_number_heading_pane_vc_t2

0x5b1e,	// (0x00016ba3) list_single_number_heading_pane_vc_t3_ParamLimits

0x5b1e,	// (0x00016ba3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa49,	// (0x00020ace) list_single_number_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00020ace) list_single_number_heading_pane_vc_t

0x3bc7,	// (0x00014c4c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3bc7,	// (0x00014c4c) list_single_graphic_heading_pane_vc_g1

0x2cc1,	// (0x00013d46) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2cc1,	// (0x00013d46) list_single_graphic_heading_pane_vc_g4

0x3bd3,	// (0x00014c58) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3bd3,	// (0x00014c58) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x00020856) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x00020856) list_single_graphic_heading_pane_vc_g

0x3c99,	// (0x00014d1e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3c99,	// (0x00014d1e) list_single_graphic_heading_pane_vc_t1

0x5b30,	// (0x00016bb5) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5b30,	// (0x00016bb5) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x00020ad5) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x00020ad5) list_single_graphic_heading_pane_vc_t

0x2cc1,	// (0x00013d46) list_double2_pane_vc_g1_ParamLimits

0x2cc1,	// (0x00013d46) list_double2_pane_vc_g1

0x3bd3,	// (0x00014c58) list_double2_pane_vc_g2_ParamLimits

0x3bd3,	// (0x00014c58) list_double2_pane_vc_g2

0x0001,

0xf5e0,	// (0x00020665) list_double2_pane_vc_g_ParamLimits

0xf5e0,	// (0x00020665) list_double2_pane_vc_g

0x5b42,	// (0x00016bc7) list_double2_pane_vc_t1_ParamLimits

0x5b42,	// (0x00016bc7) list_double2_pane_vc_t1

0x5b58,	// (0x00016bdd) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5b58,	// (0x00016bdd) list_double2_large_graphic_pane_vc_g1

0x2cc1,	// (0x00013d46) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2cc1,	// (0x00013d46) list_double2_large_graphic_pane_vc_g2

0x3bd3,	// (0x00014c58) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3bd3,	// (0x00014c58) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5fd,	// (0x00020682) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5fd,	// (0x00020682) list_double2_large_graphic_pane_vc_g

0x5b64,	// (0x00016be9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5b64,	// (0x00016be9) list_double2_large_graphic_pane_vc_t1

0x5b7a,	// (0x00016bff) list_double_time_pane_vc_g1_ParamLimits

0x5b7a,	// (0x00016bff) list_double_time_pane_vc_g1

0x5b86,	// (0x00016c0b) list_double_time_pane_vc_g2_ParamLimits

0x5b86,	// (0x00016c0b) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x00020ada) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x00020ada) list_double_time_pane_vc_g

0x5b92,	// (0x00016c17) list_double_time_pane_vc_t1_ParamLimits

0x5b92,	// (0x00016c17) list_double_time_pane_vc_t1

0x5bad,	// (0x00016c32) list_double_time_pane_vc_t2_ParamLimits

0x5bad,	// (0x00016c32) list_double_time_pane_vc_t2

0x5bcb,	// (0x00016c50) list_double_time_pane_vc_t3_ParamLimits

0x5bcb,	// (0x00016c50) list_double_time_pane_vc_t3

0x5be3,	// (0x00016c68) list_double_time_pane_vc_t4_ParamLimits

0x5be3,	// (0x00016c68) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x00020adf) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x00020adf) list_double_time_pane_vc_t

0x2cc1,	// (0x00013d46) list_double_pane_vc_g1_ParamLimits

0x2cc1,	// (0x00013d46) list_double_pane_vc_g1

0x3bd3,	// (0x00014c58) list_double_pane_vc_g2_ParamLimits

0x3bd3,	// (0x00014c58) list_double_pane_vc_g2

0x0001,

0xf5e0,	// (0x00020665) list_double_pane_vc_g_ParamLimits

0xf5e0,	// (0x00020665) list_double_pane_vc_g

0x5bf7,	// (0x00016c7c) list_double_pane_vc_t1_ParamLimits

0x5bf7,	// (0x00016c7c) list_double_pane_vc_t1

0x5c0b,	// (0x00016c90) list_double_pane_vc_t2_ParamLimits

0x5c0b,	// (0x00016c90) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x00020ae8) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x00020ae8) list_double_pane_vc_t

0x2cc1,	// (0x00013d46) list_double_number_pane_vc_g1_ParamLimits

0x2cc1,	// (0x00013d46) list_double_number_pane_vc_g1

0x3bd3,	// (0x00014c58) list_double_number_pane_vc_g2_ParamLimits

0x3bd3,	// (0x00014c58) list_double_number_pane_vc_g2

0x0001,

0xf5e0,	// (0x00020665) list_double_number_pane_vc_g_ParamLimits

0xf5e0,	// (0x00020665) list_double_number_pane_vc_g

0x5c21,	// (0x00016ca6) list_double_number_pane_vc_t1_ParamLimits

0x5c21,	// (0x00016ca6) list_double_number_pane_vc_t1

0x5c35,	// (0x00016cba) list_double_number_pane_vc_t2_ParamLimits

0x5c35,	// (0x00016cba) list_double_number_pane_vc_t2

0x5c0b,	// (0x00016c90) list_double_number_pane_vc_t3_ParamLimits

0x5c0b,	// (0x00016c90) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x00020aed) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x00020aed) list_double_number_pane_vc_t

0x5c49,	// (0x00016cce) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5c49,	// (0x00016cce) list_double_large_graphic_pane_vc_g1

0x5c55,	// (0x00016cda) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5c55,	// (0x00016cda) list_double_large_graphic_pane_vc_g2

0x3bd3,	// (0x00014c58) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3bd3,	// (0x00014c58) list_double_large_graphic_pane_vc_g3

0x5c64,	// (0x00016ce9) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5c64,	// (0x00016ce9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x00020af4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00020af4) list_double_large_graphic_pane_vc_g

0x5c70,	// (0x00016cf5) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5c70,	// (0x00016cf5) list_double_large_graphic_pane_vc_t1

0x5c84,	// (0x00016d09) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5c84,	// (0x00016d09) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00020afd) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00020afd) list_double_large_graphic_pane_vc_t

0x58a3,	// (0x00016928) list_double_heading_pane_vc_g1_ParamLimits

0x58a3,	// (0x00016928) list_double_heading_pane_vc_g1

0x58af,	// (0x00016934) list_double_heading_pane_vc_g2_ParamLimits

0x58af,	// (0x00016934) list_double_heading_pane_vc_g2

0x0001,

0xfa7d,	// (0x00020b02) list_double_heading_pane_vc_g_ParamLimits

0xfa7d,	// (0x00020b02) list_double_heading_pane_vc_g

0x5c9b,	// (0x00016d20) list_double_heading_pane_vc_t1_ParamLimits

0x5c9b,	// (0x00016d20) list_double_heading_pane_vc_t1

0x3c99,	// (0x00014d1e) list_double_heading_pane_vc_t2_ParamLimits

0x3c99,	// (0x00014d1e) list_double_heading_pane_vc_t2

0x0001,

0xfa82,	// (0x00020b07) list_double_heading_pane_vc_t_ParamLimits

0xfa82,	// (0x00020b07) list_double_heading_pane_vc_t

0x3bc7,	// (0x00014c4c) list_double_graphic_pane_vc_g1_ParamLimits

0x3bc7,	// (0x00014c4c) list_double_graphic_pane_vc_g1

0x5cad,	// (0x00016d32) list_double_graphic_pane_vc_g2_ParamLimits

0x5cad,	// (0x00016d32) list_double_graphic_pane_vc_g2

0x5cbc,	// (0x00016d41) list_double_graphic_pane_vc_g3_ParamLimits

0x5cbc,	// (0x00016d41) list_double_graphic_pane_vc_g3

0x0002,

0xfa87,	// (0x00020b0c) list_double_graphic_pane_vc_g_ParamLimits

0xfa87,	// (0x00020b0c) list_double_graphic_pane_vc_g

0x5cc8,	// (0x00016d4d) list_double_graphic_pane_vc_t1_ParamLimits

0x5cc8,	// (0x00016d4d) list_double_graphic_pane_vc_t1

0x5c0b,	// (0x00016c90) list_double_graphic_pane_vc_t2_ParamLimits

0x5c0b,	// (0x00016c90) list_double_graphic_pane_vc_t2

0x0001,

0xfa8e,	// (0x00020b13) list_double_graphic_pane_vc_t_ParamLimits

0xfa8e,	// (0x00020b13) list_double_graphic_pane_vc_t

0xeaa4,	// (0x0001fb29) aid_size_cell_fastswap

0xa752,	// (0x0001b7d7) aid_size_cell_touch_ParamLimits

0xa752,	// (0x0001b7d7) aid_size_cell_touch

0xee06,	// (0x0001fe8b) popup_fast_swap_wide_window_ParamLimits

0xee06,	// (0x0001fe8b) popup_fast_swap_wide_window

0xa8a1,	// (0x0001b926) touch_pane_ParamLimits

0xa8a1,	// (0x0001b926) touch_pane

0x1de3,	// (0x00012e68) button_value_adjust_pane_cp2

0x1deb,	// (0x00012e70) button_value_adjust_pane_cp4

0x1e11,	// (0x00012e96) form_field_data_pane_cp2

0xb8b9,	// (0x0001c93e) form_field_data_wide_pane_cp2

0x24c0,	// (0x00013545) bg_scroll_pane_ParamLimits

0xf0c9,	// (0x0002014e) scroll_handle_pane_ParamLimits

0xf0dd,	// (0x00020162) scroll_sc2_down_pane_ParamLimits

0xf0dd,	// (0x00020162) scroll_sc2_down_pane

0x24f1,	// (0x00013576) scroll_sc2_up_pane_ParamLimits

0x24f1,	// (0x00013576) scroll_sc2_up_pane

0xd10d,	// (0x0001e192) grid_wheel_folder_pane_g1_ParamLimits

0xd10d,	// (0x0001e192) grid_wheel_folder_pane_g1

0xf2a7,	// (0x0002032c) clock_nsta_pane_cp2_ParamLimits

0xf2a7,	// (0x0002032c) clock_nsta_pane_cp2

0xbd7d,	// (0x0001ce02) listscroll_midp_pane_ParamLimits

0xbd8e,	// (0x0001ce13) midp_canvas_pane

0x3052,	// (0x000140d7) nsta_clock_indic_pane

0x30b0,	// (0x00014135) listscroll_form_pane_vc

0x30cc,	// (0x00014151) listscroll_set_pane_vc_ParamLimits

0x30cc,	// (0x00014151) listscroll_set_pane_vc

0xc6f7,	// (0x0001d77c) clock_nsta_pane

0xc721,	// (0x0001d7a6) indicator_nsta_pane

0x3b61,	// (0x00014be6) bg_popup_sub_pane_cp2_ParamLimits

0x3b75,	// (0x00014bfa) find_pane_cp2_ParamLimits

0x3b75,	// (0x00014bfa) find_pane_cp2

0x3b8b,	// (0x00014c10) grid_toobar_pane_ParamLimits

0x3d41,	// (0x00014dc6) list_form_gen_pane_vc_ParamLimits

0x3d41,	// (0x00014dc6) list_form_gen_pane_vc

0x3d57,	// (0x00014ddc) scroll_pane_cp8_vc_ParamLimits

0x3d57,	// (0x00014ddc) scroll_pane_cp8_vc

0x3dd3,	// (0x00014e58) data_form_wide_pane_vc_ParamLimits

0x3dd3,	// (0x00014e58) data_form_wide_pane_vc

0x3ddf,	// (0x00014e64) form_field_data_wide_pane_vc_g1

0x3de7,	// (0x00014e6c) form_field_data_wide_pane_vc_t1_ParamLimits

0x3de7,	// (0x00014e6c) form_field_data_wide_pane_vc_t1

0x1ed9,	// (0x00012f5e) input_focus_pane_cp6_vc_ParamLimits

0x1ed9,	// (0x00012f5e) input_focus_pane_cp6_vc

0xcad9,	// (0x0001db5e) list_midp_pane_ParamLimits

0x5505,	// (0x0001658a) scroll_pane_cp16_ParamLimits

0x5505,	// (0x0001658a) scroll_pane_cp16

0x4111,	// (0x00015196) button_value_adjust_pane_ParamLimits

0x4111,	// (0x00015196) button_value_adjust_pane

0xcd28,	// (0x0001ddad) button_value_adjust_pane_cp6_ParamLimits

0xcd28,	// (0x0001ddad) button_value_adjust_pane_cp6

0xce6a,	// (0x0001deef) settings_code_pane_cp_ParamLimits

0xce6a,	// (0x0001deef) settings_code_pane_cp

0xea82,	// (0x0001fb07) cell_touch_pane_g1

0xea82,	// (0x0001fb07) cell_touch_pane_g2

0x0001,

0xf716,	// (0x0002079b) cell_touch_pane_g

0xcfe2,	// (0x0001e067) cell_touch_pane_cp_ParamLimits

0xcfe2,	// (0x0001e067) cell_touch_pane_cp

0xcffe,	// (0x0001e083) cell_touch_pane_ParamLimits

0xcffe,	// (0x0001e083) cell_touch_pane

0xea82,	// (0x0001fb07) scroll_sc2_down_pane_g1

0xea82,	// (0x0001fb07) scroll_sc2_up_pane_g1

0xec05,	// (0x0001fc8a) bg_set_opt_pane_cp4_vc

0x58cd,	// (0x00016952) list_set_graphic_pane_vc_g1_ParamLimits

0x58cd,	// (0x00016952) list_set_graphic_pane_vc_g1

0x58d9,	// (0x0001695e) list_set_graphic_pane_vc_g2_ParamLimits

0x58d9,	// (0x0001695e) list_set_graphic_pane_vc_g2

0x0001,

0xfa06,	// (0x00020a8b) list_set_graphic_pane_vc_g_ParamLimits

0xfa06,	// (0x00020a8b) list_set_graphic_pane_vc_g

0x58e5,	// (0x0001696a) text_primary_small_cp13_vc_ParamLimits

0x58e5,	// (0x0001696a) text_primary_small_cp13_vc

0x58fd,	// (0x00016982) list_set_graphic_pane_vc_ParamLimits

0x58fd,	// (0x00016982) list_set_graphic_pane_vc

0xec05,	// (0x0001fc8a) input_focus_pane_cp2_vc

0xea82,	// (0x0001fb07) setting_code_pane_vc_g1

0x5911,	// (0x00016996) setting_code_pane_vc_t1

0x591f,	// (0x000169a4) set_text_pane_vc_t1_ParamLimits

0x591f,	// (0x000169a4) set_text_pane_vc_t1

0xec05,	// (0x0001fc8a) input_focus_pane_cp1_vc

0x593d,	// (0x000169c2) list_set_text_pane_vc

0xea82,	// (0x0001fb07) setting_text_pane_vc_g1

0xec05,	// (0x0001fc8a) bg_set_opt_pane_cp2_vc

0x5947,	// (0x000169cc) setting_slider_graphic_pane_vc_g1

0x594f,	// (0x000169d4) setting_slider_graphic_pane_vc_t1

0x595d,	// (0x000169e2) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0b,	// (0x00020a90) setting_slider_graphic_pane_vc_t

0x596b,	// (0x000169f0) slider_set_pane_cp_vc

0x5973,	// (0x000169f8) slider_set_pane_vc_g1

0x597c,	// (0x00016a01) slider_set_pane_vc_g2

0x0006,

0xfa10,	// (0x00020a95) slider_set_pane_vc_g

0x2015,	// (0x0001309a) set_opt_bg_pane_g1_copy1

0x201d,	// (0x000130a2) set_opt_bg_pane_g2_copy1

0x59a8,	// (0x00016a2d) set_opt_bg_pane_g3_copy1

0x202d,	// (0x000130b2) set_opt_bg_pane_g4_copy1

0x2035,	// (0x000130ba) set_opt_bg_pane_g5_copy1

0x203d,	// (0x000130c2) set_opt_bg_pane_g6_copy1

0x59b2,	// (0x00016a37) set_opt_bg_pane_g7_copy1

0x59bc,	// (0x00016a41) set_opt_bg_pane_g8_copy1

0x59c6,	// (0x00016a4b) set_opt_bg_pane_g9_copy1

0xec05,	// (0x0001fc8a) bg_set_opt_pane_cp_vc

0x59d0,	// (0x00016a55) setting_slider_pane_vc_t1

0x594f,	// (0x000169d4) setting_slider_pane_vc_t2

0x595d,	// (0x000169e2) setting_slider_pane_vc_t3

0x0002,

0xfa1f,	// (0x00020aa4) setting_slider_pane_vc_t

0x596b,	// (0x000169f0) slider_set_pane_vc

0xf50c,	// (0x00020591) volume_set_pane_vc_g1

0xf515,	// (0x0002059a) volume_set_pane_vc_g2

0xf51e,	// (0x000205a3) volume_set_pane_vc_g3

0xf527,	// (0x000205ac) volume_set_pane_vc_g4

0xf530,	// (0x000205b5) volume_set_pane_vc_g5

0xf539,	// (0x000205be) volume_set_pane_vc_g6

0xf542,	// (0x000205c7) volume_set_pane_vc_g7

0xf54b,	// (0x000205d0) volume_set_pane_vc_g8

0xf554,	// (0x000205d9) volume_set_pane_vc_g9

0xf55d,	// (0x000205e2) volume_set_pane_vc_g10

0x0009,

0xfa26,	// (0x00020aab) volume_set_pane_vc_g

0x59df,	// (0x00016a64) volume_set_pane_vc

0x59e7,	// (0x00016a6c) button_value_adjust_pane_cp1_vc

0x59f1,	// (0x00016a76) list_highlight_pane_cp2_vc

0x59fa,	// (0x00016a7f) list_set_pane_vc_ParamLimits

0x59fa,	// (0x00016a7f) list_set_pane_vc

0x5a64,	// (0x00016ae9) main_pane_set_vc_t1_ParamLimits

0x5a64,	// (0x00016ae9) main_pane_set_vc_t1

0x5a79,	// (0x00016afe) main_pane_set_vc_t2_ParamLimits

0x5a79,	// (0x00016afe) main_pane_set_vc_t2

0x5a8b,	// (0x00016b10) main_pane_set_vc_t3_ParamLimits

0x5a8b,	// (0x00016b10) main_pane_set_vc_t3

0x5a9f,	// (0x00016b24) main_pane_set_vc_t4_ParamLimits

0x5a9f,	// (0x00016b24) main_pane_set_vc_t4

0x0003,

0xfa3b,	// (0x00020ac0) main_pane_set_vc_t_ParamLimits

0xfa3b,	// (0x00020ac0) main_pane_set_vc_t

0x5ab3,	// (0x00016b38) setting_code_pane_vc_ParamLimits

0x5ab3,	// (0x00016b38) setting_code_pane_vc

0x5ac4,	// (0x00016b49) setting_slider_graphic_pane_vc

0x5ac4,	// (0x00016b49) setting_slider_pane_vc

0x5ac4,	// (0x00016b49) setting_text_pane_vc

0x5ac4,	// (0x00016b49) setting_volume_pane_vc

0x5ace,	// (0x00016b53) scroll_pane_cp121_vc

0x1dd1,	// (0x00012e56) set_content_pane_vc

0x5cdc,	// (0x00016d61) button_value_adjust_pane_g1

0x5ce5,	// (0x00016d6a) button_value_adjust_pane_g2

0x0001,

0xfa93,	// (0x00020b18) button_value_adjust_pane_g

0x5cee,	// (0x00016d73) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5cee,	// (0x00016d73) form_field_slider_wide_pane_vc_t1

0x5d02,	// (0x00016d87) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5d02,	// (0x00016d87) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa98,	// (0x00020b1d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa98,	// (0x00020b1d) form_field_slider_wide_pane_vc_t

0x1333,	// (0x000123b8) input_focus_pane_cp10_vc_ParamLimits

0x1333,	// (0x000123b8) input_focus_pane_cp10_vc

0x5d14,	// (0x00016d99) slider_cont_pane_cp1_vc_ParamLimits

0x5d14,	// (0x00016d99) slider_cont_pane_cp1_vc

0x5973,	// (0x000169f8) slider_form_pane_g1_cp2

0x597c,	// (0x00016a01) slider_form_pane_g2_cp2

0x5d2d,	// (0x00016db2) form_field_slider_pane_vc_t3

0x5d3b,	// (0x00016dc0) form_field_slider_pane_vc_t4

0x5d49,	// (0x00016dce) slider_form_pane_vc_ParamLimits

0x5d49,	// (0x00016dce) slider_form_pane_vc

0x5d56,	// (0x00016ddb) form_field_slider_pane_vc_t1_ParamLimits

0x5d56,	// (0x00016ddb) form_field_slider_pane_vc_t1

0x5d02,	// (0x00016d87) form_field_slider_pane_vc_t2_ParamLimits

0x5d02,	// (0x00016d87) form_field_slider_pane_vc_t2

0x0001,

0xfaa8,	// (0x00020b2d) form_field_slider_pane_vc_t_ParamLimits

0xfaa8,	// (0x00020b2d) form_field_slider_pane_vc_t

0x1333,	// (0x000123b8) input_focus_pane_cp9_vc_ParamLimits

0x1333,	// (0x000123b8) input_focus_pane_cp9_vc

0x5d72,	// (0x00016df7) slider_cont_pane_vc_ParamLimits

0x5d72,	// (0x00016df7) slider_cont_pane_vc

0x5d84,	// (0x00016e09) list_form_graphic_pane_cp_vc_ParamLimits

0x5d84,	// (0x00016e09) list_form_graphic_pane_cp_vc

0x3ddf,	// (0x00014e64) form_field_popup_wide_pane_vc_g1

0x5d99,	// (0x00016e1e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5d99,	// (0x00016e1e) form_field_popup_wide_pane_vc_t1

0x1ed9,	// (0x00012f5e) input_focus_pane_cp8_vc_ParamLimits

0x1ed9,	// (0x00012f5e) input_focus_pane_cp8_vc

0x5db0,	// (0x00016e35) list_form_wide_pane_vc_ParamLimits

0x5db0,	// (0x00016e35) list_form_wide_pane_vc

0x5dbc,	// (0x00016e41) list_form_graphic_pane_vc_g1

0x5dc4,	// (0x00016e49) list_form_graphic_pane_vc_t1_ParamLimits

0x5dc4,	// (0x00016e49) list_form_graphic_pane_vc_t1

0x109d,	// (0x00012122) list_highlight_pane_cp5_vc_ParamLimits

0x109d,	// (0x00012122) list_highlight_pane_cp5_vc

0x5de0,	// (0x00016e65) list_form_graphic_pane_vc_ParamLimits

0x5de0,	// (0x00016e65) list_form_graphic_pane_vc

0x3ddf,	// (0x00014e64) form_field_popup_pane_vc_g1

0x5df6,	// (0x00016e7b) form_field_popup_pane_vc_t1_ParamLimits

0x5df6,	// (0x00016e7b) form_field_popup_pane_vc_t1

0x1ed9,	// (0x00012f5e) input_focus_pane_cp7_vc_ParamLimits

0x1ed9,	// (0x00012f5e) input_focus_pane_cp7_vc

0x5e0d,	// (0x00016e92) list_form_pane_vc_ParamLimits

0x5e0d,	// (0x00016e92) list_form_pane_vc

0x5e19,	// (0x00016e9e) data_form_pane_vc_t1_ParamLimits

0x5e19,	// (0x00016e9e) data_form_pane_vc_t1

0x2015,	// (0x0001309a) input_focus_pane_vc_g1

0x201d,	// (0x000130a2) input_focus_pane_vc_g2

0x2025,	// (0x000130aa) input_focus_pane_vc_g3

0x202d,	// (0x000130b2) input_focus_pane_vc_g4

0x2035,	// (0x000130ba) input_focus_pane_vc_g5

0x203d,	// (0x000130c2) input_focus_pane_vc_g6

0x2045,	// (0x000130ca) input_focus_pane_vc_g7

0x204d,	// (0x000130d2) input_focus_pane_vc_g8

0x2055,	// (0x000130da) input_focus_pane_vc_g9

0xea82,	// (0x0001fb07) input_focus_pane_vc_g10

0x0009,

0xf69f,	// (0x00020724) input_focus_pane_vc_g

0x3dd3,	// (0x00014e58) data_form_pane_vc_ParamLimits

0x3dd3,	// (0x00014e58) data_form_pane_vc

0x3ddf,	// (0x00014e64) form_field_data_pane_vc_g1

0x5e36,	// (0x00016ebb) form_field_data_pane_vc_t1_ParamLimits

0x5e36,	// (0x00016ebb) form_field_data_pane_vc_t1

0x1ed9,	// (0x00012f5e) input_focus_pane_vc_ParamLimits

0x1ed9,	// (0x00012f5e) input_focus_pane_vc

0x5e50,	// (0x00016ed5) button_value_adjust_pane_cp3_vc

0x5e58,	// (0x00016edd) button_value_adjust_pane_cp5_vc

0x5e60,	// (0x00016ee5) form_field_data_pane_vc_ParamLimits

0x5e60,	// (0x00016ee5) form_field_data_pane_vc

0x5e7b,	// (0x00016f00) form_field_data_pane_vc_cp2

0x5e83,	// (0x00016f08) form_field_data_wide_pane_vc_ParamLimits

0x5e83,	// (0x00016f08) form_field_data_wide_pane_vc

0x5e9d,	// (0x00016f22) form_field_data_wide_pane_vc_cp2

0x5ea5,	// (0x00016f2a) form_field_popup_pane_vc_ParamLimits

0x5ea5,	// (0x00016f2a) form_field_popup_pane_vc

0x5ec0,	// (0x00016f45) form_field_popup_wide_pane_vc_ParamLimits

0x5ec0,	// (0x00016f45) form_field_popup_wide_pane_vc

0x5eda,	// (0x00016f5f) form_field_slider_pane_vc_ParamLimits

0x5eda,	// (0x00016f5f) form_field_slider_pane_vc

0x5eed,	// (0x00016f72) form_field_slider_wide_pane_vc_ParamLimits

0x5eed,	// (0x00016f72) form_field_slider_wide_pane_vc

0xd01c,	// (0x0001e0a1) grid_touch_1_pane_ParamLimits

0xd01c,	// (0x0001e0a1) grid_touch_1_pane

0xd030,	// (0x0001e0b5) grid_touch_2_pane_ParamLimits

0xd030,	// (0x0001e0b5) grid_touch_2_pane

0x5fc4,	// (0x00017049) touch_pane_g1_ParamLimits

0x5fc4,	// (0x00017049) touch_pane_g1

0x5f26,	// (0x00016fab) cell_app_pane_cp_wide_ParamLimits

0x5f26,	// (0x00016fab) cell_app_pane_cp_wide

0x5f37,	// (0x00016fbc) grid_popup_fast_wide_pane_ParamLimits

0x5f37,	// (0x00016fbc) grid_popup_fast_wide_pane

0x5f4b,	// (0x00016fd0) scroll_pane_cp19_ParamLimits

0x5f4b,	// (0x00016fd0) scroll_pane_cp19

0xec05,	// (0x0001fc8a) bg_popup_window_pane_cp20

0x5f5f,	// (0x00016fe4) listscroll_popup_fast_wide_pane

0x2211,	// (0x00013296) grid_indicator_nsta_pane

0x5f67,	// (0x00016fec) clock_nsta_pane_g1

0x5f70,	// (0x00016ff5) clock_nsta_pane_t1

0xd05c,	// (0x0001e0e1) cell_indicator_nsta_pane_ParamLimits

0xd05c,	// (0x0001e0e1) cell_indicator_nsta_pane

0x5fc4,	// (0x00017049) cell_indicator_nsta_pane_g1

0xd079,	// (0x0001e0fe) cell_indicator_nsta_pane_g2

0x0001,

0xfab2,	// (0x00020b37) cell_indicator_nsta_pane_g

0x5fe8,	// (0x0001706d) clock_nsta_pane_cp

0x5ff0,	// (0x00017075) indicator_nsta_pane_cp

0x5ff8,	// (0x0001707d) nsta_clock_indic_pane_g1

0x1183,	// (0x00012208) grid_indicator_pane

0x25e3,	// (0x00013668) scroll_pane_cp29

0xf1f3,	// (0x00020278) indicator_nsta_pane_cp2_ParamLimits

0xf1f3,	// (0x00020278) indicator_nsta_pane_cp2

0x109d,	// (0x00012122) main_apps_wheel_pane

0x3f94,	// (0x00015019) form_midp_field_text_pane_ParamLimits

0x40e3,	// (0x00015168) scroll_bar_cp050_ParamLimits

0x6061,	// (0x000170e6) cell_indicator_pane_ParamLimits

0x6061,	// (0x000170e6) cell_indicator_pane

0x6079,	// (0x000170fe) cell_indicator_pane_g1

0xd08f,	// (0x0001e114) grid_wheel_folder_pane_ParamLimits

0xd08f,	// (0x0001e114) grid_wheel_folder_pane

0xd09d,	// (0x0001e122) list_wheel_apps_pane_ParamLimits

0xd09d,	// (0x0001e122) list_wheel_apps_pane

0xd0ab,	// (0x0001e130) main_apps_wheel_pane_g1_ParamLimits

0xd0ab,	// (0x0001e130) main_apps_wheel_pane_g1

0xd0bb,	// (0x0001e140) main_apps_wheel_pane_g2_ParamLimits

0xd0bb,	// (0x0001e140) main_apps_wheel_pane_g2

0x0001,

0xface,	// (0x00020b53) main_apps_wheel_pane_g_ParamLimits

0xface,	// (0x00020b53) main_apps_wheel_pane_g

0xd0cb,	// (0x0001e150) main_apps_wheel_pane_t1_ParamLimits

0xd0cb,	// (0x0001e150) main_apps_wheel_pane_t1

0xd0e3,	// (0x0001e168) list_wheel_apps_pane_g1

0xd0eb,	// (0x0001e170) list_wheel_apps_pane_g2

0xd0f3,	// (0x0001e178) list_wheel_apps_pane_g3

0xd0fb,	// (0x0001e180) list_wheel_apps_pane_g4

0xd103,	// (0x0001e188) list_wheel_apps_pane_g5

0x0004,

0xfad3,	// (0x00020b58) list_wheel_apps_pane_g

0x2bcc,	// (0x00013c51) navi_icon_text_pane

0xc5c3,	// (0x0001d648) aid_fill_nsta

0xd120,	// (0x0001e1a5) navi_icon_text_pane_g1

0xd12c,	// (0x0001e1b1) navi_icon_text_pane_t1

0xbd65,	// (0x0001cdea) list_set_graphic_pane_t1_ParamLimits

0xbd65,	// (0x0001cdea) list_set_graphic_pane_t1

0x4834,	// (0x000158b9) popup_midp_note_alarm_window_t6_ParamLimits

0x4834,	// (0x000158b9) popup_midp_note_alarm_window_t6

0x4846,	// (0x000158cb) popup_midp_note_alarm_window_t7_ParamLimits

0x4846,	// (0x000158cb) popup_midp_note_alarm_window_t7

0x4858,	// (0x000158dd) popup_midp_note_alarm_window_t8_ParamLimits

0x4858,	// (0x000158dd) popup_midp_note_alarm_window_t8

0x486a,	// (0x000158ef) popup_midp_note_alarm_window_t9_ParamLimits

0x486a,	// (0x000158ef) popup_midp_note_alarm_window_t9

0x487c,	// (0x00015901) popup_midp_note_alarm_window_t10_ParamLimits

0x487c,	// (0x00015901) popup_midp_note_alarm_window_t10

0x488e,	// (0x00015913) popup_midp_note_alarm_window_t11_ParamLimits

0x488e,	// (0x00015913) popup_midp_note_alarm_window_t11

0x48a0,	// (0x00015925) scroll_pane_cp17_ParamLimits

0x48a0,	// (0x00015925) scroll_pane_cp17

0xf50c,	// (0x00020591) volume_small_pane_cp_g1

0x027b,	// (0x00011300) volume_small_pane_cp_g2

0x0284,	// (0x00011309) volume_small_pane_cp_g3

0x028d,	// (0x00011312) volume_small_pane_cp_g4

0x0296,	// (0x0001131b) volume_small_pane_cp_g5

0x029f,	// (0x00011324) volume_small_pane_cp_g6

0x02a8,	// (0x0001132d) volume_small_pane_cp_g7

0x02b1,	// (0x00011336) volume_small_pane_cp_g8

0x02ba,	// (0x0001133f) volume_small_pane_cp_g9

0x02c3,	// (0x00011348) volume_small_pane_cp_g10

0x2e2d,	// (0x00013eb2) midp_ticker_pane_g1_ParamLimits

0x2e39,	// (0x00013ebe) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x000207f0) midp_ticker_pane_g_ParamLimits

0xbe25,	// (0x0001ceaa) midp_ticker_pane_t1_ParamLimits

0xc5e7,	// (0x0001d66c) aid_fill_nsta_2

0x40cf,	// (0x00015154) list_form2_midp_pane

0x52ba,	// (0x0001633f) midp_editing_number_pane_ParamLimits

0x52c9,	// (0x0001634e) midp_ticker_pane_ParamLimits

0x6172,	// (0x000171f7) form2_midp_field_pane

0x6196,	// (0x0001721b) scroll_pane_cp51

0x61b6,	// (0x0001723b) form2_midp_button_pane_ParamLimits

0x61b6,	// (0x0001723b) form2_midp_button_pane

0x61c8,	// (0x0001724d) form2_midp_content_pane_ParamLimits

0x61c8,	// (0x0001724d) form2_midp_content_pane

0x61e2,	// (0x00017267) form2_midp_field_choice_group_pane

0x61ea,	// (0x0001726f) form2_midp_field_pane_g1

0x61f2,	// (0x00017277) form2_midp_field_pane_g2

0x61fa,	// (0x0001727f) form2_midp_field_pane_g3

0x6202,	// (0x00017287) form2_midp_field_pane_g4

0x0003,

0xfaf8,	// (0x00020b7d) form2_midp_field_pane_g

0x620a,	// (0x0001728f) form2_midp_gauge_slider_pane

0x6212,	// (0x00017297) form2_midp_gauge_wait_pane

0x621a,	// (0x0001729f) form2_midp_image_pane_ParamLimits

0x621a,	// (0x0001729f) form2_midp_image_pane

0xd15a,	// (0x0001e1df) form2_midp_label_pane_ParamLimits

0xd15a,	// (0x0001e1df) form2_midp_label_pane

0xd179,	// (0x0001e1fe) form2_midp_label_pane_cp_ParamLimits

0xd179,	// (0x0001e1fe) form2_midp_label_pane_cp

0x626d,	// (0x000172f2) form2_midp_string_pane_ParamLimits

0x626d,	// (0x000172f2) form2_midp_string_pane

0xd19a,	// (0x0001e21f) form2_midp_text_pane_ParamLimits

0xd19a,	// (0x0001e21f) form2_midp_text_pane

0x6298,	// (0x0001731d) form2_midp_time_pane

0x62a8,	// (0x0001732d) input_focus_pane_cp51_ParamLimits

0x62a8,	// (0x0001732d) input_focus_pane_cp51

0xd1bb,	// (0x0001e240) form2_midp_label_pane_t1_ParamLimits

0xd1bb,	// (0x0001e240) form2_midp_label_pane_t1

0xd1f8,	// (0x0001e27d) form2_mdip_text_pane_t1_ParamLimits

0xd1f8,	// (0x0001e27d) form2_mdip_text_pane_t1

0x630d,	// (0x00017392) form2_midp_time_pane_t1

0x6328,	// (0x000173ad) form2_midp_gauge_slider_pane_t1

0xd211,	// (0x0001e296) form2_midp_gauge_slider_pane_t2

0xd223,	// (0x0001e2a8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb01,	// (0x00020b86) form2_midp_gauge_slider_pane_t

0x635e,	// (0x000173e3) form2_midp_slider_pane

0x636a,	// (0x000173ef) form2_midp_gauge_wait_pane_t1

0x6378,	// (0x000173fd) form2_midp_wait_pane_ParamLimits

0x6378,	// (0x000173fd) form2_midp_wait_pane

0xd235,	// (0x0001e2ba) list_single_2graphic_pane_cp4_ParamLimits

0xd235,	// (0x0001e2ba) list_single_2graphic_pane_cp4

0xca42,	// (0x0001dac7) list_single_midp_graphic_pane_cp_ParamLimits

0xca42,	// (0x0001dac7) list_single_midp_graphic_pane_cp

0xec05,	// (0x0001fc8a) list_highlight_pane_cp20

0x63b4,	// (0x00017439) list_single_2graphic_pane_g1_cp4

0x5785,	// (0x0001680a) list_single_2graphic_pane_g2_cp4

0x63bc,	// (0x00017441) list_single_2graphic_pane_t1_cp4

0x109d,	// (0x00012122) list_highlight_pane_cp21

0x63cb,	// (0x00017450) list_single_midp_graphic_pane_g4_cp

0x63da,	// (0x0001745f) list_single_midp_graphic_pane_t1_cp

0xd248,	// (0x0001e2cd) form2_mdip_string_pane_t1_ParamLimits

0xd248,	// (0x0001e2cd) form2_mdip_string_pane_t1

0xec05,	// (0x0001fc8a) bg_wml_button_pane_cp2

0xea82,	// (0x0001fb07) form2_midp_image_pane_g1

0x1b85,	// (0x00012c0a) list_double_large_graphic_pane_g5_ParamLimits

0x1b85,	// (0x00012c0a) list_double_large_graphic_pane_g5

0xbd7d,	// (0x0001ce02) midp_form_pane_ParamLimits

0x109d,	// (0x00012122) main_apps_wheel_pane_ParamLimits

0xc2db,	// (0x0001d360) popup_preview_window_ParamLimits

0xc2db,	// (0x0001d360) popup_preview_window

0x36aa,	// (0x0001472f) popup_touch_info_window_ParamLimits

0x36aa,	// (0x0001472f) popup_touch_info_window

0x36cc,	// (0x00014751) popup_touch_menu_window_ParamLimits

0x36cc,	// (0x00014751) popup_touch_menu_window

0xea78,	// (0x0001fafd) bg_popup_sub_pane_cp6

0x6449,	// (0x000174ce) list_touch_menu_pane

0x6451,	// (0x000174d6) list_single_touch_menu_pane_ParamLimits

0x6451,	// (0x000174d6) list_single_touch_menu_pane

0x646c,	// (0x000174f1) list_single_touch_menu_pane_t1

0x109d,	// (0x00012122) bg_popup_sub_pane_cp7_ParamLimits

0x109d,	// (0x00012122) bg_popup_sub_pane_cp7

0x647a,	// (0x000174ff) heading_sub_pane

0x6482,	// (0x00017507) list_touch_info_pane_ParamLimits

0x6482,	// (0x00017507) list_touch_info_pane

0x6491,	// (0x00017516) list_single_touch_info_pane_ParamLimits

0x6491,	// (0x00017516) list_single_touch_info_pane

0x64a3,	// (0x00017528) list_single_touch_info_pane_t1

0x64b1,	// (0x00017536) list_single_touch_info_pane_t2

0x0001,

0xfb0f,	// (0x00020b94) list_single_touch_info_pane_t

0x2d50,	// (0x00013dd5) bg_popup_heading_pane_cp

0x64bf,	// (0x00017544) heading_sub_pane_t1

0x3d6d,	// (0x00014df2) bg_popup_preview_window_pane_cp_ParamLimits

0x3d6d,	// (0x00014df2) bg_popup_preview_window_pane_cp

0x647a,	// (0x000174ff) heading_preview_pane

0x6482,	// (0x00017507) list_preview_pane_ParamLimits

0x6482,	// (0x00017507) list_preview_pane

0x64cd,	// (0x00017552) popup_preview_window_g1

0x6491,	// (0x00017516) list_single_preview_pane_ParamLimits

0x6491,	// (0x00017516) list_single_preview_pane

0x64d5,	// (0x0001755a) list_single_preview_pane_g1

0x64dd,	// (0x00017562) list_single_preview_pane_t1

0x64a3,	// (0x00017528) list_single_preview_pane_t2

0x0001,

0xfb14,	// (0x00020b99) list_single_preview_pane_t

0x64eb,	// (0x00017570) bg_popup_heading_pane_cp2_ParamLimits

0x64eb,	// (0x00017570) bg_popup_heading_pane_cp2

0x6501,	// (0x00017586) heading_preview_pane_g1

0x6509,	// (0x0001758e) heading_preview_pane_t1_ParamLimits

0x6509,	// (0x0001758e) heading_preview_pane_t1

0x11a6,	// (0x0001222b) soft_indicator_pane_t1_ParamLimits

0x18b1,	// (0x00012936) scroll_pane_ParamLimits

0x24df,	// (0x00013564) scroll_sc2_left_pane

0x24e8,	// (0x0001356d) scroll_sc2_right_pane

0x2507,	// (0x0001358c) scroll_bg_pane_g1_ParamLimits

0x251c,	// (0x000135a1) scroll_bg_pane_g2_ParamLimits

0x2534,	// (0x000135b9) scroll_bg_pane_g3_ParamLimits

0xf6f6,	// (0x0002077b) scroll_bg_pane_g_ParamLimits

0x2507,	// (0x0001358c) scroll_handle_pane_g1_ParamLimits

0x2556,	// (0x000135db) scroll_handle_pane_g2_ParamLimits

0x2534,	// (0x000135b9) scroll_handle_pane_g3_ParamLimits

0xf6fd,	// (0x00020782) scroll_handle_pane_g_ParamLimits

0x310e,	// (0x00014193) popup_choice_list_window_ParamLimits

0x310e,	// (0x00014193) popup_choice_list_window

0x3b6d,	// (0x00014bf2) choice_list_pane

0x3c1d,	// (0x00014ca2) cell_toolbar_pane_t1

0x3c45,	// (0x00014cca) toolbar_button_pane_ParamLimits

0x4d70,	// (0x00015df5) ai_gene_pane_1_t2_ParamLimits

0x4d70,	// (0x00015df5) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x0002099e) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x0002099e) ai_gene_pane_1_t

0x6526,	// (0x000175ab) scroll_sc2_left_pane_g1

0x6526,	// (0x000175ab) scroll_sc2_right_pane_g1

0x30de,	// (0x00014163) bg_popup_sub_pane_cp10

0x6530,	// (0x000175b5) list_choice_list_pane

0x6547,	// (0x000175cc) list_single_choice_list_pane_ParamLimits

0x6547,	// (0x000175cc) list_single_choice_list_pane

0x655b,	// (0x000175e0) list_single_choice_list_pane_g1

0x6563,	// (0x000175e8) list_single_choice_list_pane_t1_ParamLimits

0x6563,	// (0x000175e8) list_single_choice_list_pane_t1

0x6578,	// (0x000175fd) choice_list_pane_g1

0x6580,	// (0x00017605) choice_list_pane_t1

0xea78,	// (0x0001fafd) input_focus_pane_cp11

0x23b9,	// (0x0001343e) title_pane_stacon_g2_ParamLimits

0x23b9,	// (0x0001343e) title_pane_stacon_g2

0x0002,

0xf6dc,	// (0x00020761) title_pane_stacon_g_ParamLimits

0xf6dc,	// (0x00020761) title_pane_stacon_g

0x2d50,	// (0x00013dd5) cursor_press_pane

0xbf5c,	// (0x0001cfe1) popup_fep_hwr_window_ParamLimits

0xbf5c,	// (0x0001cfe1) popup_fep_hwr_window

0x324e,	// (0x000142d3) popup_fep_vkb_window_ParamLimits

0x324e,	// (0x000142d3) popup_fep_vkb_window

0x658e,	// (0x00017613) cursor_press_pane_g1

0x0002,

0xfb3d,	// (0x00020bc2) fep_vkb_side_pane_g_ParamLimits

0x0305,	// (0x0001138a) fep_hwr_candidate_pane_ParamLimits

0x0305,	// (0x0001138a) fep_hwr_candidate_pane

0x032f,	// (0x000113b4) fep_hwr_side_pane_ParamLimits

0x032f,	// (0x000113b4) fep_hwr_side_pane

0x0351,	// (0x000113d6) fep_hwr_top_pane_ParamLimits

0x0351,	// (0x000113d6) fep_hwr_top_pane

0x0369,	// (0x000113ee) fep_hwr_write_pane_ParamLimits

0x0369,	// (0x000113ee) fep_hwr_write_pane

0xfb3d,	// (0x00020bc2) fep_vkb_side_pane_g

0x6596,	// (0x0001761b) fep_hwr_top_pane_g1

0x65a8,	// (0x0001762d) fep_hwr_top_pane_g2

0x03a3,	// (0x00011428) fep_hwr_top_pane_g3

0x0002,

0xfb19,	// (0x00020b9e) fep_hwr_top_pane_g

0x03b8,	// (0x0001143d) fep_hwr_top_text_pane

0x26ab,	// (0x00013730) fep_hwr_top_text_pane_g1

0x65de,	// (0x00017663) fep_hwr_top_text_pane_t1

0x04c2,	// (0x00011547) fep_hwr_candidate_pane_g1

0x6829,	// (0x000178ae) fep_vkb_keypad_pane_g3_ParamLimits

0x6829,	// (0x000178ae) fep_vkb_keypad_pane_g3

0x6855,	// (0x000178da) fep_vkb_keypad_pane_g4_ParamLimits

0x6855,	// (0x000178da) fep_vkb_keypad_pane_g4

0x68cc,	// (0x00017951) fep_vkb_bottom_pane_g2_ParamLimits

0x68cc,	// (0x00017951) fep_vkb_bottom_pane_g2

0x0001,

0xfb44,	// (0x00020bc9) fep_vkb_bottom_pane_g_ParamLimits

0xfb44,	// (0x00020bc9) fep_vkb_bottom_pane_g

0x6526,	// (0x000175ab) cell_vkb_side_pane_g2

0x0001,

0xfb4e,	// (0x00020bd3) cell_vkb_side_pane_g

0x6957,	// (0x000179dc) cell_vkb_side_pane_t1

0x6965,	// (0x000179ea) cell_vkb_side_pane_t1_copy1

0x6526,	// (0x000175ab) bg_fep_vkb_candidate_pane_g2

0x6aa9,	// (0x00017b2e) cell_vkb_candidate_pane_ParamLimits

0x65ec,	// (0x00017671) aid_size_cell_vkb_ParamLimits

0x65ec,	// (0x00017671) aid_size_cell_vkb

0x6aa9,	// (0x00017b2e) cell_vkb_candidate_pane

0x04e9,	// (0x0001156e) bg_popup_fep_shadow_pane_g1

0xd2cc,	// (0x0001e351) fep_vkb_bottom_pane_ParamLimits

0xd2cc,	// (0x0001e351) fep_vkb_bottom_pane

0x66bb,	// (0x00017740) fep_vkb_candidate_pane_ParamLimits

0x66bb,	// (0x00017740) fep_vkb_candidate_pane

0xd2f8,	// (0x0001e37d) fep_vkb_keypad_pane_ParamLimits

0xd2f8,	// (0x0001e37d) fep_vkb_keypad_pane

0xd31f,	// (0x0001e3a4) fep_vkb_side_pane_ParamLimits

0xd31f,	// (0x0001e3a4) fep_vkb_side_pane

0xd35b,	// (0x0001e3e0) fep_vkb_top_pane_ParamLimits

0xd35b,	// (0x0001e3e0) fep_vkb_top_pane

0x6782,	// (0x00017807) fep_vkb_top_pane_g1_ParamLimits

0x6782,	// (0x00017807) fep_vkb_top_pane_g1

0x6791,	// (0x00017816) fep_vkb_top_pane_g2_ParamLimits

0x6791,	// (0x00017816) fep_vkb_top_pane_g2

0x67a0,	// (0x00017825) fep_vkb_top_pane_g3_ParamLimits

0x67a0,	// (0x00017825) fep_vkb_top_pane_g3

0x0003,

0xfb34,	// (0x00020bb9) fep_vkb_top_pane_g_ParamLimits

0xfb34,	// (0x00020bb9) fep_vkb_top_pane_g

0x67be,	// (0x00017843) fep_vkb_top_text_pane_ParamLimits

0x67be,	// (0x00017843) fep_vkb_top_text_pane

0xd397,	// (0x0001e41c) fep_vkb_side_pane_g1_ParamLimits

0xd397,	// (0x0001e41c) fep_vkb_side_pane_g1

0x6818,	// (0x0001789d) grid_vkb_side_pane_ParamLimits

0x6818,	// (0x0001789d) grid_vkb_side_pane

0x04f1,	// (0x00011576) bg_popup_fep_shadow_pane_g2

0x04fa,	// (0x0001157f) bg_popup_fep_shadow_pane_g3

0x0502,	// (0x00011587) bg_popup_fep_shadow_pane_g4

0x050b,	// (0x00011590) bg_popup_fep_shadow_pane_g5

0x0515,	// (0x0001159a) bg_popup_fep_shadow_pane_g6

0x051d,	// (0x000115a2) bg_popup_fep_shadow_pane_g7

0x202d,	// (0x000130b2) bg_popup_fep_shadow_pane_g8

0x6877,	// (0x000178fc) grid_vkb_keypad_number_pane_ParamLimits

0x6877,	// (0x000178fc) grid_vkb_keypad_number_pane

0x688b,	// (0x00017910) grid_vkb_keypad_pane_ParamLimits

0x688b,	// (0x00017910) grid_vkb_keypad_pane

0x68b1,	// (0x00017936) fep_vkb_bottom_pane_g1_ParamLimits

0x68b1,	// (0x00017936) fep_vkb_bottom_pane_g1

0x68da,	// (0x0001795f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x68da,	// (0x0001795f) grid_vkb_keypad_bottom_left_pane

0x68ef,	// (0x00017974) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x68ef,	// (0x00017974) grid_vkb_keypad_bottom_right_pane

0x6904,	// (0x00017989) fep_vkb_top_text_pane_g1

0xd3de,	// (0x0001e463) fep_vkb_top_text_pane_t1

0xd3f0,	// (0x0001e475) cell_vkb_side_pane_ParamLimits

0xd3f0,	// (0x0001e475) cell_vkb_side_pane

0x6526,	// (0x000175ab) cell_vkb_side_pane_g1

0x6973,	// (0x000179f8) cell_vkb_keypad_pane_ParamLimits

0x6973,	// (0x000179f8) cell_vkb_keypad_pane

0x6a00,	// (0x00017a85) cell_vkb_keypad_pane_g1

0x0008,

0xfb61,	// (0x00020be6) bg_popup_fep_shadow_pane_g

0x052f,	// (0x000115b4) cell_hwr_side_pane_g1

0x052f,	// (0x000115b4) cell_hwr_side_pane_g2

0x6a0a,	// (0x00017a8f) cell_vkb_keypad_pane_t1

0xd406,	// (0x0001e48b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd406,	// (0x0001e48b) cell_vkb_keypad_bottom_left_pane

0xd41b,	// (0x0001e4a0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd41b,	// (0x0001e4a0) cell_vkb_keypad_bottom_right_pane

0x6526,	// (0x000175ab) cell_vkb_keypad_bottom_left_pane_g1

0x6526,	// (0x000175ab) cell_vkb_keypad_bottom_right_pane_g1

0x6a6e,	// (0x00017af3) cell_vkb_keypad_number_pane_ParamLimits

0x6a6e,	// (0x00017af3) cell_vkb_keypad_number_pane

0x6a8d,	// (0x00017b12) cell_vkb_keypad_number_pane_g1

0x6a97,	// (0x00017b1c) cell_vkb_keypad_number_pane_g2

0x6aa0,	// (0x00017b25) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb53,	// (0x00020bd8) cell_vkb_keypad_number_pane_g

0x6a0a,	// (0x00017a8f) cell_vkb_keypad_number_pane_t1

0x6aca,	// (0x00017b4f) fep_vkb_candidate_pane_g1

0x0001,

0xfb74,	// (0x00020bf9) cell_hwr_side_pane_g

0x6ae3,	// (0x00017b68) cell_hwr_side_pane_t1

0x0539,	// (0x000115be) cell_hwr_side_pane_t1_copy1

0x0547,	// (0x000115cc) cell_hwr_candidate_pane_g1

0x0576,	// (0x000115fb) cell_hwr_candidate_pane_t1

0x6526,	// (0x000175ab) cell_vkb_candidate_pane_g2

0x6b27,	// (0x00017bac) cell_vkb_candidate_pane_t1

0x02cc,	// (0x00011351) bg_popup_fep_shadow_pane_ParamLimits

0x02cc,	// (0x00011351) bg_popup_fep_shadow_pane

0x0383,	// (0x00011408) bg_fep_hwr_top_pane_g4

0x65ba,	// (0x0001763f) bg_hwr_side_pane_g1_ParamLimits

0x65ba,	// (0x0001763f) bg_hwr_side_pane_g1

0xac52,	// (0x0001bcd7) cell_hwr_side_pane_ParamLimits

0xac52,	// (0x0001bcd7) cell_hwr_side_pane

0x0433,	// (0x000114b8) fep_hwr_write_pane_g1_ParamLimits

0x0433,	// (0x000114b8) fep_hwr_write_pane_g1

0x0440,	// (0x000114c5) fep_hwr_write_pane_g2_ParamLimits

0x0440,	// (0x000114c5) fep_hwr_write_pane_g2

0x044d,	// (0x000114d2) fep_hwr_write_pane_g3_ParamLimits

0x044d,	// (0x000114d2) fep_hwr_write_pane_g3

0xac72,	// (0x0001bcf7) fep_hwr_write_pane_g4_ParamLimits

0xac72,	// (0x0001bcf7) fep_hwr_write_pane_g4

0x0005,

0xfb20,	// (0x00020ba5) fep_hwr_write_pane_g_ParamLimits

0xfb20,	// (0x00020ba5) fep_hwr_write_pane_g

0x0383,	// (0x00011408) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0383,	// (0x00011408) bg_fep_hwr_candidate_pane_g2

0x0470,	// (0x000114f5) cell_hwr_candidate_pane_ParamLimits

0x0470,	// (0x000114f5) cell_hwr_candidate_pane

0x04c2,	// (0x00011547) fep_hwr_candidate_pane_g1_ParamLimits

0x661a,	// (0x0001769f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x661a,	// (0x0001769f) bg_popup_fep_shadow_pane_cp2

0x67b0,	// (0x00017835) fep_vkb_top_pane_g4_ParamLimits

0x67b0,	// (0x00017835) fep_vkb_top_pane_g4

0x67f6,	// (0x0001787b) fep_vkb_side_pane_g2_ParamLimits

0x67f6,	// (0x0001787b) fep_vkb_side_pane_g2

0xb7dd,	// (0x0001c862) list_setting_pane_t4_ParamLimits

0xb7dd,	// (0x0001c862) list_setting_pane_t4

0xb859,	// (0x0001c8de) list_setting_number_pane_t5_ParamLimits

0xb859,	// (0x0001c8de) list_setting_number_pane_t5

0x26e2,	// (0x00013767) list_double_heading_pane_cp2_ParamLimits

0x26e2,	// (0x00013767) list_double_heading_pane_cp2

0x1eff,	// (0x00012f84) list_double_heading_pane_g1_cp2_ParamLimits

0x1eff,	// (0x00012f84) list_double_heading_pane_g1_cp2

0x1f0b,	// (0x00012f90) list_double_heading_pane_g2_cp2_ParamLimits

0x1f0b,	// (0x00012f90) list_double_heading_pane_g2_cp2

0x6b35,	// (0x00017bba) list_double_heading_pane_t1_cp2_ParamLimits

0x6b35,	// (0x00017bba) list_double_heading_pane_t1_cp2

0x6b4b,	// (0x00017bd0) list_double_heading_pane_t2_cp2_ParamLimits

0x6b4b,	// (0x00017bd0) list_double_heading_pane_t2_cp2

0xea70,	// (0x0001faf5) aid_value_unit2

0xee2a,	// (0x0001feaf) popup_preview_fixed_window

0x1341,	// (0x000123c6) bg_popup_preview_window_pane_cp02

0x6b5d,	// (0x00017be2) list_preview_fixed_pane

0x6ba3,	// (0x00017c28) list_empty_pane_fp_ParamLimits

0x6ba3,	// (0x00017c28) list_empty_pane_fp

0x6ba3,	// (0x00017c28) list_single_cale_day_pane_fp_ParamLimits

0x6ba3,	// (0x00017c28) list_single_cale_day_pane_fp

0x6ba3,	// (0x00017c28) list_single_graphic_heading_pane_fp_ParamLimits

0x6ba3,	// (0x00017c28) list_single_graphic_heading_pane_fp

0x6ba3,	// (0x00017c28) list_single_graphic_pane_fp_ParamLimits

0x6ba3,	// (0x00017c28) list_single_graphic_pane_fp

0x6ba3,	// (0x00017c28) list_single_heading_pane_fp_ParamLimits

0x6ba3,	// (0x00017c28) list_single_heading_pane_fp

0x6ba3,	// (0x00017c28) list_single_pane_fp_ParamLimits

0x6ba3,	// (0x00017c28) list_single_pane_fp

0x6bbc,	// (0x00017c41) list_single_pane_fp_g1_ParamLimits

0x6bbc,	// (0x00017c41) list_single_pane_fp_g1

0x6bc8,	// (0x00017c4d) list_single_pane_fp_g2_ParamLimits

0x6bc8,	// (0x00017c4d) list_single_pane_fp_g2

0x6bd4,	// (0x00017c59) list_single_pane_fp_g3_ParamLimits

0x6bd4,	// (0x00017c59) list_single_pane_fp_g3

0x6be8,	// (0x00017c6d) list_single_pane_fp_g4_ParamLimits

0x6be8,	// (0x00017c6d) list_single_pane_fp_g4

0x0003,

0xfb87,	// (0x00020c0c) list_single_pane_fp_g_ParamLimits

0xfb87,	// (0x00020c0c) list_single_pane_fp_g

0x6bf4,	// (0x00017c79) list_single_pane_fp_t1_ParamLimits

0x6bf4,	// (0x00017c79) list_single_pane_fp_t1

0x6c0b,	// (0x00017c90) list_single_graphic_pane_fp_g1_ParamLimits

0x6c0b,	// (0x00017c90) list_single_graphic_pane_fp_g1

0x6bbc,	// (0x00017c41) list_single_graphic_pane_fp_g2_ParamLimits

0x6bbc,	// (0x00017c41) list_single_graphic_pane_fp_g2

0x6bc8,	// (0x00017c4d) list_single_graphic_pane_fp_g3_ParamLimits

0x6bc8,	// (0x00017c4d) list_single_graphic_pane_fp_g3

0x6bd4,	// (0x00017c59) list_single_graphic_pane_fp_g4_ParamLimits

0x6bd4,	// (0x00017c59) list_single_graphic_pane_fp_g4

0x6be8,	// (0x00017c6d) list_single_graphic_pane_fp_g5_ParamLimits

0x6be8,	// (0x00017c6d) list_single_graphic_pane_fp_g5

0x0004,

0xfb90,	// (0x00020c15) list_single_graphic_pane_fp_g_ParamLimits

0xfb90,	// (0x00020c15) list_single_graphic_pane_fp_g

0x6c17,	// (0x00017c9c) list_single_graphic_pane_fp_t1_ParamLimits

0x6c17,	// (0x00017c9c) list_single_graphic_pane_fp_t1

0x6c0b,	// (0x00017c90) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6c0b,	// (0x00017c90) list_single_graphic_heading_pane_fp_g1

0x6bbc,	// (0x00017c41) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6bbc,	// (0x00017c41) list_single_graphic_heading_pane_fp_g2

0x6bc8,	// (0x00017c4d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6bc8,	// (0x00017c4d) list_single_graphic_heading_pane_fp_g3

0x6bd4,	// (0x00017c59) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6bd4,	// (0x00017c59) list_single_graphic_heading_pane_fp_g4

0x6be8,	// (0x00017c6d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6be8,	// (0x00017c6d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb90,	// (0x00020c15) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x00020c15) list_single_graphic_heading_pane_fp_g

0x6c2d,	// (0x00017cb2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6c2d,	// (0x00017cb2) list_single_graphic_heading_pane_fp_t1

0x6c43,	// (0x00017cc8) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6c43,	// (0x00017cc8) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9b,	// (0x00020c20) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9b,	// (0x00020c20) list_single_graphic_heading_pane_fp_t

0x6c55,	// (0x00017cda) list_single_cale_day_pane_fp_g1_ParamLimits

0x6c55,	// (0x00017cda) list_single_cale_day_pane_fp_g1

0x6c8d,	// (0x00017d12) list_single_cale_day_pane_fp_g2_ParamLimits

0x6c8d,	// (0x00017d12) list_single_cale_day_pane_fp_g2

0x6c99,	// (0x00017d1e) list_single_cale_day_pane_fp_g3_ParamLimits

0x6c99,	// (0x00017d1e) list_single_cale_day_pane_fp_g3

0x6cc1,	// (0x00017d46) list_single_cale_day_pane_fp_g4_ParamLimits

0x6cc1,	// (0x00017d46) list_single_cale_day_pane_fp_g4

0x6ce5,	// (0x00017d6a) list_single_cale_day_pane_fp_g5_ParamLimits

0x6ce5,	// (0x00017d6a) list_single_cale_day_pane_fp_g5

0x0004,

0xfba0,	// (0x00020c25) list_single_cale_day_pane_fp_g_ParamLimits

0xfba0,	// (0x00020c25) list_single_cale_day_pane_fp_g

0x6d09,	// (0x00017d8e) list_single_cale_day_pane_fp_t1_ParamLimits

0x6d09,	// (0x00017d8e) list_single_cale_day_pane_fp_t1

0x6d2f,	// (0x00017db4) list_single_cale_day_pane_fp_t2_ParamLimits

0x6d2f,	// (0x00017db4) list_single_cale_day_pane_fp_t2

0x6d48,	// (0x00017dcd) list_single_cale_day_pane_fp_t3_ParamLimits

0x6d48,	// (0x00017dcd) list_single_cale_day_pane_fp_t3

0x0002,

0xfbab,	// (0x00020c30) list_single_cale_day_pane_fp_t_ParamLimits

0xfbab,	// (0x00020c30) list_single_cale_day_pane_fp_t

0x6bbc,	// (0x00017c41) list_empty_pane_fp_g1_ParamLimits

0x6bbc,	// (0x00017c41) list_empty_pane_fp_g1

0x6d61,	// (0x00017de6) list_empty_pane_fp_t1

0x6d6f,	// (0x00017df4) list_empty_pane_fp_t2

0x0001,

0xfbb2,	// (0x00020c37) list_empty_pane_fp_t

0x6bbc,	// (0x00017c41) list_single_heading_pane_fp_g1_ParamLimits

0x6bbc,	// (0x00017c41) list_single_heading_pane_fp_g1

0x6bc8,	// (0x00017c4d) list_single_heading_pane_fp_g2_ParamLimits

0x6bc8,	// (0x00017c4d) list_single_heading_pane_fp_g2

0x6bd4,	// (0x00017c59) list_single_heading_pane_fp_g3_ParamLimits

0x6bd4,	// (0x00017c59) list_single_heading_pane_fp_g3

0x0002,

0xfbb7,	// (0x00020c3c) list_single_heading_pane_fp_g_ParamLimits

0xfbb7,	// (0x00020c3c) list_single_heading_pane_fp_g

0x6d7d,	// (0x00017e02) list_single_heading_pane_fp_t1_ParamLimits

0x6d7d,	// (0x00017e02) list_single_heading_pane_fp_t1

0x6d8f,	// (0x00017e14) list_single_heading_pane_fp_t2_ParamLimits

0x6d8f,	// (0x00017e14) list_single_heading_pane_fp_t2

0x0001,

0xfbbe,	// (0x00020c43) list_single_heading_pane_fp_t_ParamLimits

0xfbbe,	// (0x00020c43) list_single_heading_pane_fp_t

0x2250,	// (0x000132d5) aid_size_cell_fast

0x12b3,	// (0x00012338) soft_indicator_pane_cp1_t1

0x228d,	// (0x00013312) cell_app_pane_cp2_ParamLimits

0x228d,	// (0x00013312) cell_app_pane_cp2

0x02ee,	// (0x00011373) fep_hwr_candidate_drop_down_list_pane

0x04dc,	// (0x00011561) fep_hwr_candidate_pane_g3_ParamLimits

0x04dc,	// (0x00011561) fep_hwr_candidate_pane_g3

0xdaa8,	// (0x0001eb2d) fep_hwr_candidate_pane_g4_ParamLimits

0xdaa8,	// (0x0001eb2d) fep_hwr_candidate_pane_g4

0x0002,

0xfb2d,	// (0x00020bb2) fep_hwr_candidate_pane_g_ParamLimits

0xfb2d,	// (0x00020bb2) fep_hwr_candidate_pane_g

0x66aa,	// (0x0001772f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x66aa,	// (0x0001772f) fep_vkb_candidate_drop_down_list_pane

0x6ad2,	// (0x00017b57) fep_vkb_candidate_pane_g3

0x6ada,	// (0x00017b5f) fep_vkb_candidate_pane_g4

0x0002,

0xfb5a,	// (0x00020bdf) fep_vkb_candidate_pane_g

0x0547,	// (0x000115cc) cell_hwr_candidate_pane_g1_ParamLimits

0x0555,	// (0x000115da) cell_hwr_candidate_pane_g3_ParamLimits

0x0555,	// (0x000115da) cell_hwr_candidate_pane_g3

0x7eac,	// (0x00018f31) cell_hwr_candidate_pane_g4_ParamLimits

0x7eac,	// (0x00018f31) cell_hwr_candidate_pane_g4

0x0002,

0xfb79,	// (0x00020bfe) cell_hwr_candidate_pane_g_ParamLimits

0xfb79,	// (0x00020bfe) cell_hwr_candidate_pane_g

0x6af1,	// (0x00017b76) cell_vkb_candidate_pane_g3_ParamLimits

0x6af1,	// (0x00017b76) cell_vkb_candidate_pane_g3

0x6b0c,	// (0x00017b91) cell_vkb_candidate_pane_g4_ParamLimits

0x6b0c,	// (0x00017b91) cell_vkb_candidate_pane_g4

0x6da5,	// (0x00017e2a) cell_app_pane_cp2_g1_ParamLimits

0x6da5,	// (0x00017e2a) cell_app_pane_cp2_g1

0x6dc3,	// (0x00017e48) cell_app_pane_cp2_g2_ParamLimits

0x6dc3,	// (0x00017e48) cell_app_pane_cp2_g2

0x0001,

0xfbc3,	// (0x00020c48) cell_app_pane_cp2_g_ParamLimits

0xfbc3,	// (0x00020c48) cell_app_pane_cp2_g

0x6dcf,	// (0x00017e54) cell_app_pane_cp2_t1_ParamLimits

0x6dcf,	// (0x00017e54) cell_app_pane_cp2_t1

0x1ed9,	// (0x00012f5e) grid_highlight_pane_cp1_ParamLimits

0x1ed9,	// (0x00012f5e) grid_highlight_pane_cp1

0x0594,	// (0x00011619) cell_hwr_candidate_pane_cp1_ParamLimits

0x0594,	// (0x00011619) cell_hwr_candidate_pane_cp1

0x0547,	// (0x000115cc) fep_hwr_candidate_drop_down_list_pane_g1

0x05b8,	// (0x0001163d) fep_hwr_candidate_drop_down_list_pane_g2

0x05c5,	// (0x0001164a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc8,	// (0x00020c4d) fep_hwr_candidate_drop_down_list_pane_g

0x05d2,	// (0x00011657) fep_hwr_candidate_drop_down_list_scroll_pane

0x05db,	// (0x00011660) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x05db,	// (0x00011660) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x05e8,	// (0x0001166d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x05e8,	// (0x0001166d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x05f5,	// (0x0001167a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x05f5,	// (0x0001167a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0602,	// (0x00011687) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0602,	// (0x00011687) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x061d,	// (0x000116a2) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x061d,	// (0x000116a2) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0638,	// (0x000116bd) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0638,	// (0x000116bd) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0653,	// (0x000116d8) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0653,	// (0x000116d8) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x066e,	// (0x000116f3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x066e,	// (0x000116f3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcf,	// (0x00020c54) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcf,	// (0x00020c54) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6de1,	// (0x00017e66) cell_vkb_candidate_pane_cp1_ParamLimits

0x6de1,	// (0x00017e66) cell_vkb_candidate_pane_cp1

0x67b0,	// (0x00017835) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x67b0,	// (0x00017835) fep_vkb_candidate_drop_down_list_pane_g1

0x6e07,	// (0x00017e8c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6e07,	// (0x00017e8c) fep_vkb_candidate_drop_down_list_pane_g2

0x6e14,	// (0x00017e99) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6e14,	// (0x00017e99) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe0,	// (0x00020c65) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe0,	// (0x00020c65) fep_vkb_candidate_drop_down_list_pane_g

0x6e21,	// (0x00017ea6) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6e21,	// (0x00017ea6) fep_vkb_candidate_drop_down_list_scroll_pane

0x6e2e,	// (0x00017eb3) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6e2e,	// (0x00017eb3) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6e3b,	// (0x00017ec0) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6e3b,	// (0x00017ec0) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6e47,	// (0x00017ecc) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6e47,	// (0x00017ecc) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6e53,	// (0x00017ed8) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6e53,	// (0x00017ed8) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6e74,	// (0x00017ef9) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6e74,	// (0x00017ef9) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6e95,	// (0x00017f1a) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6e95,	// (0x00017f1a) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6eb6,	// (0x00017f3b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6eb6,	// (0x00017f3b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6ed7,	// (0x00017f5c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6ed7,	// (0x00017f5c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe7,	// (0x00020c6c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe7,	// (0x00020c6c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb0e2,	// (0x0001c167) title_pane_g1_ParamLimits

0xb0f5,	// (0x0001c17a) title_pane_g2_ParamLimits

0xf566,	// (0x000205eb) title_pane_g_ParamLimits

0x269b,	// (0x00013720) aid_call2_pane

0x26a3,	// (0x00013728) aid_call_pane

0x26ab,	// (0x00013730) popup_clock_analogue_window_g1

0x26ab,	// (0x00013730) popup_clock_analogue_window_g2

0xf0f2,	// (0x00020177) popup_clock_analogue_window_g3

0xf0fb,	// (0x00020180) popup_clock_analogue_window_g4

0xea82,	// (0x0001fb07) popup_clock_analogue_window_g5

0x0004,

0xf70b,	// (0x00020790) popup_clock_analogue_window_g

0xf103,	// (0x00020188) popup_clock_analogue_window_t1

0xf111,	// (0x00020196) clock_digital_number_pane_ParamLimits

0xf111,	// (0x00020196) clock_digital_number_pane

0xf11d,	// (0x000201a2) clock_digital_number_pane_cp02_ParamLimits

0xf11d,	// (0x000201a2) clock_digital_number_pane_cp02

0xf129,	// (0x000201ae) clock_digital_number_pane_cp03_ParamLimits

0xf129,	// (0x000201ae) clock_digital_number_pane_cp03

0xf135,	// (0x000201ba) clock_digital_number_pane_cp04_ParamLimits

0xf135,	// (0x000201ba) clock_digital_number_pane_cp04

0xf141,	// (0x000201c6) clock_digital_separator_pane_ParamLimits

0xf141,	// (0x000201c6) clock_digital_separator_pane

0xf14d,	// (0x000201d2) popup_clock_digital_window_t1_ParamLimits

0xf14d,	// (0x000201d2) popup_clock_digital_window_t1

0xea82,	// (0x0001fb07) clock_digital_number_pane_g1

0xea82,	// (0x0001fb07) clock_digital_number_pane_g2

0x0001,

0xf716,	// (0x0002079b) clock_digital_number_pane_g

0xea82,	// (0x0001fb07) clock_digital_separator_pane_g1

0xea82,	// (0x0001fb07) clock_digital_separator_pane_g2

0x0001,

0xf716,	// (0x0002079b) clock_digital_separator_pane_g

0xc5c3,	// (0x0001d648) aid_fill_nsta_ParamLimits

0xc721,	// (0x0001d7a6) indicator_nsta_pane_ParamLimits

0x39fa,	// (0x00014a7f) popup_clock_analogue_window

0x39fa,	// (0x00014a7f) popup_clock_digital_window

0x2211,	// (0x00013296) grid_indicator_nsta_pane_ParamLimits

0x5f7e,	// (0x00017003) clock_nsta_pane_t2

0x0001,

0xfaad,	// (0x00020b32) clock_nsta_pane_t

0xf0bf,	// (0x00020144) aid_size_max_handle

0xa8f7,	// (0x0001b97c) aid_size_min_handle

0x2d50,	// (0x00013dd5) editor_scroll_pane

0x6ef2,	// (0x00017f77) ex_editor_pane

0x21bd,	// (0x00013242) scroll_pane_cp13

0x18dd,	// (0x00012962) scroll_pane_cp14

0x26da,	// (0x0001375f) scroll_pane_cp36

0xbbd0,	// (0x0001cc55) list_single_graphic_hl_pane_cp2_ParamLimits

0xbbd0,	// (0x0001cc55) list_single_graphic_hl_pane_cp2

0xcef8,	// (0x0001df7d) list_single_graphic_hl_pane_ParamLimits

0xcef8,	// (0x0001df7d) list_single_graphic_hl_pane

0x6efa,	// (0x00017f7f) aid_size_min_hl_cp1

0x6f03,	// (0x00017f88) list_highlight_pane_cp34_ParamLimits

0x6f03,	// (0x00017f88) list_highlight_pane_cp34

0x6f14,	// (0x00017f99) list_single_graphic_hl_pane_g1_ParamLimits

0x6f14,	// (0x00017f99) list_single_graphic_hl_pane_g1

0x18e5,	// (0x0001296a) list_single_graphic_hl_pane_g2_ParamLimits

0x18e5,	// (0x0001296a) list_single_graphic_hl_pane_g2

0x18e5,	// (0x0001296a) list_single_graphic_hl_pane_g3_ParamLimits

0x18e5,	// (0x0001296a) list_single_graphic_hl_pane_g3

0x18f1,	// (0x00012976) list_single_graphic_hl_pane_g4_ParamLimits

0x18f1,	// (0x00012976) list_single_graphic_hl_pane_g4

0x6f87,	// (0x0001800c) list_single_graphic_hl_pane_g5_ParamLimits

0x6f87,	// (0x0001800c) list_single_graphic_hl_pane_g5

0x0004,

0xfbf8,	// (0x00020c7d) list_single_graphic_hl_pane_g_ParamLimits

0xfbf8,	// (0x00020c7d) list_single_graphic_hl_pane_g

0xd436,	// (0x0001e4bb) list_single_graphic_hl_pane_t1_ParamLimits

0xd436,	// (0x0001e4bb) list_single_graphic_hl_pane_t1

0x6f57,	// (0x00017fdc) aid_size_min_hl_cp2

0x6f60,	// (0x00017fe5) list_highlight_pane_cp34_cp2_ParamLimits

0x6f60,	// (0x00017fe5) list_highlight_pane_cp34_cp2

0x6f14,	// (0x00017f99) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6f14,	// (0x00017f99) list_single_graphic_hl_pane_g1_cp2

0x6f6d,	// (0x00017ff2) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6f6d,	// (0x00017ff2) list_single_graphic_hl_pane_g2_cp2

0x6f79,	// (0x00017ffe) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6f79,	// (0x00017ffe) list_single_graphic_hl_pane_g3_cp2

0x18f1,	// (0x00012976) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x18f1,	// (0x00012976) list_single_graphic_hl_pane_g4_cp2

0x6f87,	// (0x0001800c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6f87,	// (0x0001800c) list_single_graphic_hl_pane_g5_cp2

0xa94e,	// (0x0001b9d3) control_pane_g4_ParamLimits

0xa94e,	// (0x0001b9d3) control_pane_g4

0x30de,	// (0x00014163) bg_popup_sub_pane_cp10_ParamLimits

0x6530,	// (0x000175b5) list_choice_list_pane_ParamLimits

0x653f,	// (0x000175c4) scroll_pane_cp23

0x1341,	// (0x000123c6) bg_popup_preview_window_pane_cp02_ParamLimits

0x6b5d,	// (0x00017be2) list_preview_fixed_pane_ParamLimits

0x6b73,	// (0x00017bf8) list_preview_fixed_pane_cp_ParamLimits

0x6b73,	// (0x00017bf8) list_preview_fixed_pane_cp

0x6b7f,	// (0x00017c04) popup_preview_fixed_window_g1_ParamLimits

0x6b7f,	// (0x00017c04) popup_preview_fixed_window_g1

0x6b8b,	// (0x00017c10) popup_preview_fixed_window_g2_ParamLimits

0x6b8b,	// (0x00017c10) popup_preview_fixed_window_g2

0x0002,

0xfb80,	// (0x00020c05) popup_preview_fixed_window_g_ParamLimits

0xfb80,	// (0x00020c05) popup_preview_fixed_window_g

0xf031,	// (0x000200b6) aid_navi_side_left_pane_ParamLimits

0xf046,	// (0x000200cb) aid_navi_side_right_pane_ParamLimits

0xf05e,	// (0x000200e3) navi_icon_pane_stacon_ParamLimits

0xf072,	// (0x000200f7) navi_navi_pane_stacon_ParamLimits

0xf05e,	// (0x000200e3) navi_text_pane_stacon_ParamLimits

0xea78,	// (0x0001fafd) main_text_info_pane

0x6fb1,	// (0x00018036) listscroll_text_info_pane

0x6fb9,	// (0x0001803e) list_text_info_pane_ParamLimits

0x6fb9,	// (0x0001803e) list_text_info_pane

0x6fc8,	// (0x0001804d) scroll_pane_cp24_ParamLimits

0x6fc8,	// (0x0001804d) scroll_pane_cp24

0xd44c,	// (0x0001e4d1) list_text_info_pane_t1_ParamLimits

0xd44c,	// (0x0001e4d1) list_text_info_pane_t1

0xbec0,	// (0x0001cf45) popup_fast_swap2_window_ParamLimits

0xbec0,	// (0x0001cf45) popup_fast_swap2_window

0x700b,	// (0x00018090) aid_size_cell_fast2

0xea78,	// (0x0001fafd) bg_popup_window_pane_cp17

0x40fb,	// (0x00015180) heading_pane_cp2

0x15a1,	// (0x00012626) listscroll_fast2_pane

0x7015,	// (0x0001809a) grid_fast2_pane

0x701f,	// (0x000180a4) listscroll_fast2_pane_g1

0x7029,	// (0x000180ae) listscroll_fast2_pane_g2

0x0001,

0xfc03,	// (0x00020c88) listscroll_fast2_pane_g

0x21bd,	// (0x00013242) scroll_pane_cp26

0x7033,	// (0x000180b8) cell_fast2_pane_ParamLimits

0x7033,	// (0x000180b8) cell_fast2_pane

0x704a,	// (0x000180cf) cell_fast2_pane_g1

0x7053,	// (0x000180d8) cell_fast2_pane_g2

0x705c,	// (0x000180e1) cell_fast2_pane_g3

0x0002,

0xfc08,	// (0x00020c8d) cell_fast2_pane_g

0x169a,	// (0x0001271f) grid_highlight_pane_cp9

0x16af,	// (0x00012734) main_eswt_pane_ParamLimits

0x16af,	// (0x00012734) main_eswt_pane

0x6fdd,	// (0x00018062) list_single_text_info_pane

0x7064,	// (0x000180e9) eswt_ctrl_button_pane

0x7064,	// (0x000180e9) eswt_ctrl_canvas_pane

0x706c,	// (0x000180f1) eswt_ctrl_combo_pane

0x7064,	// (0x000180e9) eswt_ctrl_default_pane

0x7064,	// (0x000180e9) eswt_ctrl_label_pane

0x7074,	// (0x000180f9) eswt_ctrl_wait_pane

0x707c,	// (0x00018101) eswt_shell_pane

0xea78,	// (0x0001fafd) listscroll_eswt_app_pane

0x709c,	// (0x00018121) popup_eswt_tasktip_window_ParamLimits

0x709c,	// (0x00018121) popup_eswt_tasktip_window

0x3d6d,	// (0x00014df2) bg_popup_window_pane_cp18

0x70ad,	// (0x00018132) eswt_control_pane_g1_ParamLimits

0x70ad,	// (0x00018132) eswt_control_pane_g1

0x70ba,	// (0x0001813f) eswt_control_pane_g2_ParamLimits

0x70ba,	// (0x0001813f) eswt_control_pane_g2

0x70c7,	// (0x0001814c) eswt_control_pane_g3_ParamLimits

0x70c7,	// (0x0001814c) eswt_control_pane_g3

0x70d4,	// (0x00018159) eswt_control_pane_g4_ParamLimits

0x70d4,	// (0x00018159) eswt_control_pane_g4

0x0003,

0xfc0f,	// (0x00020c94) eswt_control_pane_g_ParamLimits

0xfc0f,	// (0x00020c94) eswt_control_pane_g

0x1ed9,	// (0x00012f5e) bg_button_pane_ParamLimits

0x1ed9,	// (0x00012f5e) bg_button_pane

0x16af,	// (0x00012734) common_borders_pane_copy2_ParamLimits

0x16af,	// (0x00012734) common_borders_pane_copy2

0x70e1,	// (0x00018166) control_button_pane_g1_ParamLimits

0x70e1,	// (0x00018166) control_button_pane_g1

0x70ed,	// (0x00018172) control_button_pane_g2_ParamLimits

0x70ed,	// (0x00018172) control_button_pane_g2

0x70f9,	// (0x0001817e) control_button_pane_g3_ParamLimits

0x70f9,	// (0x0001817e) control_button_pane_g3

0x0002,

0xfc18,	// (0x00020c9d) control_button_pane_g_ParamLimits

0xfc18,	// (0x00020c9d) control_button_pane_g

0x710d,	// (0x00018192) control_button_pane_t1

0x711b,	// (0x000181a0) control_button_pane_t2

0x0001,

0xfc1f,	// (0x00020ca4) control_button_pane_t

0x3c51,	// (0x00014cd6) bg_button_pane_g1

0x3c61,	// (0x00014ce6) bg_button_pane_g2

0x3c59,	// (0x00014cde) bg_button_pane_g3

0x3c71,	// (0x00014cf6) bg_button_pane_g4

0x3c69,	// (0x00014cee) bg_button_pane_g5

0x3c79,	// (0x00014cfe) bg_button_pane_g6

0x3c81,	// (0x00014d06) bg_button_pane_g7

0x3c91,	// (0x00014d16) bg_button_pane_g8

0x3c89,	// (0x00014d0e) bg_button_pane_g9

0x0008,

0xf86d,	// (0x000208f2) bg_button_pane_g

0x64eb,	// (0x00017570) common_borders_pane_ParamLimits

0x64eb,	// (0x00017570) common_borders_pane

0x70ad,	// (0x00018132) eswt_control_pane_g1_copy1_ParamLimits

0x70ad,	// (0x00018132) eswt_control_pane_g1_copy1

0x70ba,	// (0x0001813f) eswt_control_pane_g2_copy1_ParamLimits

0x70ba,	// (0x0001813f) eswt_control_pane_g2_copy1

0x70c7,	// (0x0001814c) eswt_control_pane_g3_copy1_ParamLimits

0x70c7,	// (0x0001814c) eswt_control_pane_g3_copy1

0x70d4,	// (0x00018159) eswt_control_pane_g4_copy1_ParamLimits

0x70d4,	// (0x00018159) eswt_control_pane_g4_copy1

0x6526,	// (0x000175ab) bg_eswt_ctrl_canvas_pane_g1

0x64eb,	// (0x00017570) common_borders_pane_cp2_ParamLimits

0x64eb,	// (0x00017570) common_borders_pane_cp2

0x64eb,	// (0x00017570) common_borders_pane_cp3_ParamLimits

0x64eb,	// (0x00017570) common_borders_pane_cp3

0x7129,	// (0x000181ae) separator_horizontal_pane

0x7131,	// (0x000181b6) separator_vertical_pane

0x70ad,	// (0x00018132) eswt_control_pane_g1_copy2_ParamLimits

0x70ad,	// (0x00018132) eswt_control_pane_g1_copy2

0x70ba,	// (0x0001813f) eswt_control_pane_g2_copy2_ParamLimits

0x70ba,	// (0x0001813f) eswt_control_pane_g2_copy2

0x70c7,	// (0x0001814c) eswt_control_pane_g3_copy2_ParamLimits

0x70c7,	// (0x0001814c) eswt_control_pane_g3_copy2

0x70d4,	// (0x00018159) eswt_control_pane_g4_copy2_ParamLimits

0x70d4,	// (0x00018159) eswt_control_pane_g4_copy2

0xea78,	// (0x0001fafd) common_borders_pane_cp4

0x713a,	// (0x000181bf) separator_horizontal_pane_g1

0x7143,	// (0x000181c8) separator_horizontal_pane_g2

0x714c,	// (0x000181d1) separator_horizontal_pane_g3

0x0002,

0xfc24,	// (0x00020ca9) separator_horizontal_pane_g

0x70ad,	// (0x00018132) eswt_control_pane_g1_copy3_ParamLimits

0x70ad,	// (0x00018132) eswt_control_pane_g1_copy3

0x70ba,	// (0x0001813f) eswt_control_pane_g2_copy3_ParamLimits

0x70ba,	// (0x0001813f) eswt_control_pane_g2_copy3

0x70c7,	// (0x0001814c) eswt_control_pane_g3_copy3_ParamLimits

0x70c7,	// (0x0001814c) eswt_control_pane_g3_copy3

0x70d4,	// (0x00018159) eswt_control_pane_g4_copy3_ParamLimits

0x70d4,	// (0x00018159) eswt_control_pane_g4_copy3

0xea78,	// (0x0001fafd) common_borders_pane_cp5

0x7155,	// (0x000181da) separator_vertical_pane_g1

0x715e,	// (0x000181e3) separator_vertical_pane_g2

0x7167,	// (0x000181ec) separator_vertical_pane_g3

0x0002,

0xfc2b,	// (0x00020cb0) separator_vertical_pane_g

0x70ad,	// (0x00018132) eswt_control_pane_g1_copy4_ParamLimits

0x70ad,	// (0x00018132) eswt_control_pane_g1_copy4

0x70ba,	// (0x0001813f) eswt_control_pane_g2_copy4_ParamLimits

0x70ba,	// (0x0001813f) eswt_control_pane_g2_copy4

0x70c7,	// (0x0001814c) eswt_control_pane_g3_copy4_ParamLimits

0x70c7,	// (0x0001814c) eswt_control_pane_g3_copy4

0x70d4,	// (0x00018159) eswt_control_pane_g4_copy4_ParamLimits

0x70d4,	// (0x00018159) eswt_control_pane_g4_copy4

0xd46e,	// (0x0001e4f3) eswt_ctrl_combo_button_pane

0xd476,	// (0x0001e4fb) eswt_ctrl_input_pane

0xd47e,	// (0x0001e503) popup_choice_list_window_cp70

0xd486,	// (0x0001e50b) eswt_ctrl_input_pane_t1

0xea78,	// (0x0001fafd) input_focus_pane_cp70

0x64eb,	// (0x00017570) bg_button_pane_cp70_ParamLimits

0x64eb,	// (0x00017570) bg_button_pane_cp70

0xd494,	// (0x0001e519) eswt_ctrl_combo_button_pane_g1

0x719e,	// (0x00018223) wait_bar_pane_cp70

0x3d6d,	// (0x00014df2) bg_popup_window_pane_cp70_ParamLimits

0x3d6d,	// (0x00014df2) bg_popup_window_pane_cp70

0x71a6,	// (0x0001822b) popup_eswt_tasktip_window_t1

0x71bc,	// (0x00018241) wait_bar_pane_cp71_ParamLimits

0x71bc,	// (0x00018241) wait_bar_pane_cp71

0x71c8,	// (0x0001824d) grid_eswt_app_pane

0x24df,	// (0x00013564) scroll_pane_cp70

0xd49c,	// (0x0001e521) cell_eswt_app_pane_ParamLimits

0xd49c,	// (0x0001e521) cell_eswt_app_pane

0xd4ce,	// (0x0001e553) cell_eswt_app_pane_g1_ParamLimits

0xd4ce,	// (0x0001e553) cell_eswt_app_pane_g1

0xd4fd,	// (0x0001e582) cell_eswt_app_pane_g2_ParamLimits

0xd4fd,	// (0x0001e582) cell_eswt_app_pane_g2

0x0001,

0xfc32,	// (0x00020cb7) cell_eswt_app_pane_g_ParamLimits

0xfc32,	// (0x00020cb7) cell_eswt_app_pane_g

0xd526,	// (0x0001e5ab) cell_eswt_app_pane_t1_ParamLimits

0xd526,	// (0x0001e5ab) cell_eswt_app_pane_t1

0x728d,	// (0x00018312) grid_highlight_pane_cp70_ParamLimits

0x728d,	// (0x00018312) grid_highlight_pane_cp70

0x521c,	// (0x000162a1) set_content_pane_g1

0x3000,	// (0x00014085) status_small_volume_pane

0x0689,	// (0x0001170e) status_small_volume_pane_g1

0x0691,	// (0x00011716) volume_small2_pane

0x069a,	// (0x0001171f) volume_small2_pane_g1

0x06a3,	// (0x00011728) volume_small2_pane_g2

0x06ac,	// (0x00011731) volume_small2_pane_g3

0x06b5,	// (0x0001173a) volume_small2_pane_g4

0x06be,	// (0x00011743) volume_small2_pane_g5

0x06c7,	// (0x0001174c) volume_small2_pane_g6

0x06d0,	// (0x00011755) volume_small2_pane_g7

0x06d9,	// (0x0001175e) volume_small2_pane_g8

0x06e2,	// (0x00011767) volume_small2_pane_g9

0x06eb,	// (0x00011770) volume_small2_pane_g10

0x0009,

0xfc37,	// (0x00020cbc) volume_small2_pane_g

0x6904,	// (0x00017989) fep_vkb_top_text_pane_g1_ParamLimits

0xd3de,	// (0x0001e463) fep_vkb_top_text_pane_t1_ParamLimits

0x6b97,	// (0x00017c1c) popup_preview_fixed_window_g3_ParamLimits

0x6b97,	// (0x00017c1c) popup_preview_fixed_window_g3

0xc556,	// (0x0001d5db) popup_toolbar_trans_pane

0xcd17,	// (0x0001dd9c) aid_height_set_list_ParamLimits

0x50d2,	// (0x00016157) aid_size_parent_ParamLimits

0x30de,	// (0x00014163) list_highlight_pane_cp2_ParamLimits

0x521c,	// (0x000162a1) set_content_pane_g1_ParamLimits

0xcf0c,	// (0x0001df91) list_single_image_pane_ParamLimits

0xcf0c,	// (0x0001df91) list_single_image_pane

0xd558,	// (0x0001e5dd) aid_size_cell_image_ParamLimits

0xd558,	// (0x0001e5dd) aid_size_cell_image

0xd565,	// (0x0001e5ea) grid_single_image_pane_ParamLimits

0xd565,	// (0x0001e5ea) grid_single_image_pane

0x1eff,	// (0x00012f84) list_single_image_pane_g1_ParamLimits

0x1eff,	// (0x00012f84) list_single_image_pane_g1

0x1f0b,	// (0x00012f90) list_single_image_pane_g2_ParamLimits

0x1f0b,	// (0x00012f90) list_single_image_pane_g2

0x0001,

0xfc4c,	// (0x00020cd1) list_single_image_pane_g_ParamLimits

0xfc4c,	// (0x00020cd1) list_single_image_pane_g

0x72b4,	// (0x00018339) list_single_image_pane_t1_ParamLimits

0x72b4,	// (0x00018339) list_single_image_pane_t1

0xd573,	// (0x0001e5f8) cell_image_list_pane_ParamLimits

0xd573,	// (0x0001e5f8) cell_image_list_pane

0xd58d,	// (0x0001e612) cell_image_list_pane_g1

0xd596,	// (0x0001e61b) cell_image_list_pane_g2

0x0001,

0xfc51,	// (0x00020cd6) cell_image_list_pane_g

0x72f2,	// (0x00018377) aid_size_cell_tb_trans_pane

0x1ed9,	// (0x00012f5e) bg_tb_trans_pane

0x7304,	// (0x00018389) grid_tb_trans_pane

0x3c51,	// (0x00014cd6) bg_tb_trans_pane_g1

0x3c61,	// (0x00014ce6) bg_tb_trans_pane_g2

0x3c59,	// (0x00014cde) bg_tb_trans_pane_g3

0x3c71,	// (0x00014cf6) bg_tb_trans_pane_g4

0x3c69,	// (0x00014cee) bg_tb_trans_pane_g5

0x3c91,	// (0x00014d16) bg_tb_trans_pane_g6

0x3c89,	// (0x00014d0e) bg_tb_trans_pane_g7

0x3c79,	// (0x00014cfe) bg_tb_trans_pane_g8

0x3c81,	// (0x00014d06) bg_tb_trans_pane_g9

0x0008,

0xfc56,	// (0x00020cdb) bg_tb_trans_pane_g

0x7318,	// (0x0001839d) cell_toolbar_trans_pane_ParamLimits

0x7318,	// (0x0001839d) cell_toolbar_trans_pane

0x6526,	// (0x000175ab) cell_toolbar_trans_pane_g1

0xd13e,	// (0x0001e1c3) list_form2_midp_pane_t1

0xd14c,	// (0x0001e1d1) list_form2_midp_pane_t2

0x0001,

0xfaf3,	// (0x00020b78) list_form2_midp_pane_t

0x6196,	// (0x0001721b) scroll_pane_cp51_ParamLimits

0x6388,	// (0x0001740d) form2_midp_wait_pane_g1

0x6391,	// (0x00017416) form2_midp_wait_pane_g2

0x639a,	// (0x0001741f) form2_midp_wait_pane_g3

0x0002,

0xfb08,	// (0x00020b8d) form2_midp_wait_pane_g

0x109d,	// (0x00012122) list_highlight_pane_cp21_ParamLimits

0x63cb,	// (0x00017450) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x63da,	// (0x0001745f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x52ff,	// (0x00016384) list_single_2graphic_im_pane_ParamLimits

0x52ff,	// (0x00016384) list_single_2graphic_im_pane

0xd59f,	// (0x0001e624) list_single_2graphic_im_pane_g1_ParamLimits

0xd59f,	// (0x0001e624) list_single_2graphic_im_pane_g1

0xd5b0,	// (0x0001e635) list_single_2graphic_im_pane_g2_ParamLimits

0xd5b0,	// (0x0001e635) list_single_2graphic_im_pane_g2

0xd5bc,	// (0x0001e641) list_single_2graphic_im_pane_g3_ParamLimits

0xd5bc,	// (0x0001e641) list_single_2graphic_im_pane_g3

0x0003,

0xfc69,	// (0x00020cee) list_single_2graphic_im_pane_g_ParamLimits

0xfc69,	// (0x00020cee) list_single_2graphic_im_pane_g

0xd5d0,	// (0x0001e655) list_single_2graphic_im_pane_t1_ParamLimits

0xd5d0,	// (0x0001e655) list_single_2graphic_im_pane_t1

0x6ba3,	// (0x00017c28) list_single_graphic_2heading_pane_fp_ParamLimits

0x6ba3,	// (0x00017c28) list_single_graphic_2heading_pane_fp

0x6c0b,	// (0x00017c90) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6c0b,	// (0x00017c90) list_single_graphic_2heading_pane_fp_g1

0x6bbc,	// (0x00017c41) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6bbc,	// (0x00017c41) list_single_graphic_2heading_pane_fp_g2

0x6bc8,	// (0x00017c4d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6bc8,	// (0x00017c4d) list_single_graphic_2heading_pane_fp_g3

0x6bd4,	// (0x00017c59) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6bd4,	// (0x00017c59) list_single_graphic_2heading_pane_fp_g4

0x6be8,	// (0x00017c6d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6be8,	// (0x00017c6d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb90,	// (0x00020c15) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb90,	// (0x00020c15) list_single_graphic_2heading_pane_fp_g

0x73ac,	// (0x00018431) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x73ac,	// (0x00018431) list_single_graphic_2heading_pane_fp_t1

0x6c43,	// (0x00017cc8) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6c43,	// (0x00017cc8) list_single_graphic_2heading_pane_fp_t2

0x73c2,	// (0x00018447) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x73c2,	// (0x00018447) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc72,	// (0x00020cf7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc72,	// (0x00020cf7) list_single_graphic_2heading_pane_fp_t

0x65c6,	// (0x0001764b) fep_hwr_write_pane_g5_ParamLimits

0x65c6,	// (0x0001764b) fep_hwr_write_pane_g5

0x65d2,	// (0x00017657) fep_hwr_write_pane_g6_ParamLimits

0x65d2,	// (0x00017657) fep_hwr_write_pane_g6

0x707c,	// (0x00018101) eswt_shell_pane_ParamLimits

0x3d6d,	// (0x00014df2) bg_popup_window_pane_cp18_ParamLimits

0x4ff0,	// (0x00016075) heading_pane_cp70

0x71a6,	// (0x0001822b) popup_eswt_tasktip_window_t1_ParamLimits

0xc620,	// (0x0001d6a5) aid_touch_tab_arrow_left

0xc634,	// (0x0001d6b9) aid_touch_tab_arrow_right

0xb10d,	// (0x0001c192) title_pane_g3_ParamLimits

0xb10d,	// (0x0001c192) title_pane_g3

0x1da8,	// (0x00012e2d) set_value_pane_g1

0xc556,	// (0x0001d5db) popup_toolbar_trans_pane_ParamLimits

0x72f2,	// (0x00018377) aid_size_cell_tb_trans_pane_ParamLimits

0x1ed9,	// (0x00012f5e) bg_tb_trans_pane_ParamLimits

0x7304,	// (0x00018389) grid_tb_trans_pane_ParamLimits

0x1341,	// (0x000123c6) cont_note_pane_ParamLimits

0x1341,	// (0x000123c6) cont_note_pane

0x16af,	// (0x00012734) cont_snote2_single_text_pane_ParamLimits

0x16af,	// (0x00012734) cont_snote2_single_text_pane

0x16af,	// (0x00012734) cont_snote2_single_graphic_pane_ParamLimits

0x16af,	// (0x00012734) cont_snote2_single_graphic_pane

0x4317,	// (0x0001539c) cont_note_wait_pane_ParamLimits

0x4317,	// (0x0001539c) cont_note_wait_pane

0x4317,	// (0x0001539c) cont_note_image_pane_ParamLimits

0x4317,	// (0x0001539c) cont_note_image_pane

0x73d8,	// (0x0001845d) popup_note2_window_g1_ParamLimits

0x73d8,	// (0x0001845d) popup_note2_window_g1

0x7409,	// (0x0001848e) popup_note2_window_t1_ParamLimits

0x7409,	// (0x0001848e) popup_note2_window_t1

0x744e,	// (0x000184d3) popup_note2_window_t2_ParamLimits

0x744e,	// (0x000184d3) popup_note2_window_t2

0x7493,	// (0x00018518) popup_note2_window_t3_ParamLimits

0x7493,	// (0x00018518) popup_note2_window_t3

0x74d8,	// (0x0001855d) popup_note2_window_t4_ParamLimits

0x74d8,	// (0x0001855d) popup_note2_window_t4

0x13c5,	// (0x0001244a) popup_note2_window_t5_ParamLimits

0x13c5,	// (0x0001244a) popup_note2_window_t5

0x0004,

0xfc7e,	// (0x00020d03) popup_note2_window_t_ParamLimits

0xfc7e,	// (0x00020d03) popup_note2_window_t

0x7507,	// (0x0001858c) popup_note2_image_window_g1_ParamLimits

0x7507,	// (0x0001858c) popup_note2_image_window_g1

0x7513,	// (0x00018598) popup_note2_image_window_g2_ParamLimits

0x7513,	// (0x00018598) popup_note2_image_window_g2

0x0001,

0xfc89,	// (0x00020d0e) popup_note2_image_window_g_ParamLimits

0xfc89,	// (0x00020d0e) popup_note2_image_window_g

0x7525,	// (0x000185aa) popup_note2_image_window_t1_ParamLimits

0x7525,	// (0x000185aa) popup_note2_image_window_t1

0x753d,	// (0x000185c2) popup_note2_image_window_t2_ParamLimits

0x753d,	// (0x000185c2) popup_note2_image_window_t2

0x7555,	// (0x000185da) popup_note2_image_window_t3_ParamLimits

0x7555,	// (0x000185da) popup_note2_image_window_t3

0x0002,

0xfc8e,	// (0x00020d13) popup_note2_image_window_t_ParamLimits

0xfc8e,	// (0x00020d13) popup_note2_image_window_t

0x4325,	// (0x000153aa) popup_note2_wait_window_g1_ParamLimits

0x4325,	// (0x000153aa) popup_note2_wait_window_g1

0x7571,	// (0x000185f6) popup_note2_wait_window_g2_ParamLimits

0x7571,	// (0x000185f6) popup_note2_wait_window_g2

0x433d,	// (0x000153c2) popup_note2_wait_window_g3_ParamLimits

0x433d,	// (0x000153c2) popup_note2_wait_window_g3

0x0002,

0xfc95,	// (0x00020d1a) popup_note2_wait_window_g_ParamLimits

0xfc95,	// (0x00020d1a) popup_note2_wait_window_g

0x757d,	// (0x00018602) popup_note2_wait_window_t1_ParamLimits

0x757d,	// (0x00018602) popup_note2_wait_window_t1

0x759b,	// (0x00018620) popup_note2_wait_window_t2_ParamLimits

0x759b,	// (0x00018620) popup_note2_wait_window_t2

0x75b9,	// (0x0001863e) popup_note2_wait_window_t3_ParamLimits

0x75b9,	// (0x0001863e) popup_note2_wait_window_t3

0x75cb,	// (0x00018650) popup_note2_wait_window_t4_ParamLimits

0x75cb,	// (0x00018650) popup_note2_wait_window_t4

0x0003,

0xfc9c,	// (0x00020d21) popup_note2_wait_window_t_ParamLimits

0xfc9c,	// (0x00020d21) popup_note2_wait_window_t

0x75dd,	// (0x00018662) wait_bar2_pane_ParamLimits

0x75dd,	// (0x00018662) wait_bar2_pane

0x75f5,	// (0x0001867a) popup_snote2_single_text_window_g1_ParamLimits

0x75f5,	// (0x0001867a) popup_snote2_single_text_window_g1

0x761d,	// (0x000186a2) popup_snote2_single_text_window_t1_ParamLimits

0x761d,	// (0x000186a2) popup_snote2_single_text_window_t1

0x7669,	// (0x000186ee) popup_snote2_single_text_window_t2_ParamLimits

0x7669,	// (0x000186ee) popup_snote2_single_text_window_t2

0x76b5,	// (0x0001873a) popup_snote2_single_text_window_t3_ParamLimits

0x76b5,	// (0x0001873a) popup_snote2_single_text_window_t3

0x76f6,	// (0x0001877b) popup_snote2_single_text_window_t4_ParamLimits

0x76f6,	// (0x0001877b) popup_snote2_single_text_window_t4

0x772c,	// (0x000187b1) popup_snote2_single_text_window_t5_ParamLimits

0x772c,	// (0x000187b1) popup_snote2_single_text_window_t5

0x0004,

0xfca5,	// (0x00020d2a) popup_snote2_single_text_window_t_ParamLimits

0xfca5,	// (0x00020d2a) popup_snote2_single_text_window_t

0x7757,	// (0x000187dc) popup_snote2_single_graphic_window_g1_ParamLimits

0x7757,	// (0x000187dc) popup_snote2_single_graphic_window_g1

0x777f,	// (0x00018804) popup_snote2_single_graphic_window_g2_ParamLimits

0x777f,	// (0x00018804) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb0,	// (0x00020d35) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb0,	// (0x00020d35) popup_snote2_single_graphic_window_g

0x77a7,	// (0x0001882c) popup_snote2_single_graphic_window_t1_ParamLimits

0x77a7,	// (0x0001882c) popup_snote2_single_graphic_window_t1

0x77f3,	// (0x00018878) popup_snote2_single_graphic_window_t2_ParamLimits

0x77f3,	// (0x00018878) popup_snote2_single_graphic_window_t2

0x76b5,	// (0x0001873a) popup_snote2_single_graphic_window_t3_ParamLimits

0x76b5,	// (0x0001873a) popup_snote2_single_graphic_window_t3

0x76f6,	// (0x0001877b) popup_snote2_single_graphic_window_t4_ParamLimits

0x76f6,	// (0x0001877b) popup_snote2_single_graphic_window_t4

0x772c,	// (0x000187b1) popup_snote2_single_graphic_window_t5_ParamLimits

0x772c,	// (0x000187b1) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb5,	// (0x00020d3a) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb5,	// (0x00020d3a) popup_snote2_single_graphic_window_t

0x6040,	// (0x000170c5) clock_nsta_pane_cp2_t1

0x6040,	// (0x000170c5) clock_nsta_pane_cp2_t2

0x0001,

0xfac9,	// (0x00020b4e) clock_nsta_pane_cp2_t

0x1ef3,	// (0x00012f78) form_field_data_wide_pane_g1_ParamLimits

0x1eff,	// (0x00012f84) form_field_data_wide_pane_g2_ParamLimits

0x1eff,	// (0x00012f84) form_field_data_wide_pane_g2

0x1f0b,	// (0x00012f90) form_field_data_wide_pane_g3_ParamLimits

0x1f0b,	// (0x00012f90) form_field_data_wide_pane_g3

0x0002,

0xf68e,	// (0x00020713) form_field_data_wide_pane_g_ParamLimits

0xf68e,	// (0x00020713) form_field_data_wide_pane_g

0xd046,	// (0x0001e0cb) grid_touch_3_pane_ParamLimits

0xd046,	// (0x0001e0cb) grid_touch_3_pane

0xd601,	// (0x0001e686) cell_touch_3_pane_ParamLimits

0xd601,	// (0x0001e686) cell_touch_3_pane

0x6526,	// (0x000175ab) cell_touch_3_pane_g1

0x6526,	// (0x000175ab) cell_touch_3_pane_g2

0x0001,

0xfb4e,	// (0x00020bd3) cell_touch_3_pane_g

0x13f7,	// (0x0001247c) cont_query_data_pane

0x13ff,	// (0x00012484) cont_query_data_pane_cp1

0x7872,	// (0x000188f7) button_value_adjust_pane_cp7

0x787a,	// (0x000188ff) query_popup_pane_cp3

0x27a0,	// (0x00013825) bg_popup_sub_pane_cp22_ParamLimits

0xf16c,	// (0x000201f1) navi_navi_volume_pane_cp2

0xf187,	// (0x0002020c) popup_side_volume_key_window_g2

0xf196,	// (0x0002021b) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x000207a9) popup_side_volume_key_window_g

0xf1b3,	// (0x00020238) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x000207b0) popup_side_volume_key_window_t

0x2ae7,	// (0x00013b6c) popup_side_volume_key_window_ParamLimits

0xb5ef,	// (0x0001c674) list_double_graphic_pane_g4_ParamLimits

0xb5ef,	// (0x0001c674) list_double_graphic_pane_g4

0xcee3,	// (0x0001df68) list_single_2heading_msg_pane_ParamLimits

0xcee3,	// (0x0001df68) list_single_2heading_msg_pane

0xd64b,	// (0x0001e6d0) list_single_2heading_msg_pane_g1_ParamLimits

0xd64b,	// (0x0001e6d0) list_single_2heading_msg_pane_g1

0xd657,	// (0x0001e6dc) list_single_2heading_msg_pane_g2_ParamLimits

0xd657,	// (0x0001e6dc) list_single_2heading_msg_pane_g2

0xd66a,	// (0x0001e6ef) list_single_2heading_msg_pane_g3_ParamLimits

0xd66a,	// (0x0001e6ef) list_single_2heading_msg_pane_g3

0xd676,	// (0x0001e6fb) list_single_2heading_msg_pane_g4_ParamLimits

0xd676,	// (0x0001e6fb) list_single_2heading_msg_pane_g4

0x0003,

0xfcc0,	// (0x00020d45) list_single_2heading_msg_pane_g_ParamLimits

0xfcc0,	// (0x00020d45) list_single_2heading_msg_pane_g

0xd68e,	// (0x0001e713) list_single_2heading_msg_pane_t1_ParamLimits

0xd68e,	// (0x0001e713) list_single_2heading_msg_pane_t1

0xd6b6,	// (0x0001e73b) list_single_2heading_msg_pane_t2_ParamLimits

0xd6b6,	// (0x0001e73b) list_single_2heading_msg_pane_t2

0xd721,	// (0x0001e7a6) list_single_2heading_msg_pane_t3_ParamLimits

0xd721,	// (0x0001e7a6) list_single_2heading_msg_pane_t3

0x796b,	// (0x000189f0) list_single_2heading_msg_pane_t4_ParamLimits

0x796b,	// (0x000189f0) list_single_2heading_msg_pane_t4

0x0003,

0xfcc9,	// (0x00020d4e) list_single_2heading_msg_pane_t_ParamLimits

0xfcc9,	// (0x00020d4e) list_single_2heading_msg_pane_t

0xec0f,	// (0x0001fc94) title_pane_g4_ParamLimits

0xec0f,	// (0x0001fc94) title_pane_g4

0xef81,	// (0x00020006) title_pane_stacon_g3_ParamLimits

0xef81,	// (0x00020006) title_pane_stacon_g3

0x736f,	// (0x000183f4) list_single_2graphic_im_pane_g4_ParamLimits

0x736f,	// (0x000183f4) list_single_2graphic_im_pane_g4

0x4d8d,	// (0x00015e12) popup_side_volume_key_window_cp

0x568c,	// (0x00016711) main_idle_act2_pane_t1

0xf463,	// (0x000204e8) toolbar_button_pane_g10

0xb49a,	// (0x0001c51f) popup_toolbar_window_cp1

0x6031,	// (0x000170b6) clock_nsta_pane_cp_t1

0x6031,	// (0x000170b6) clock_nsta_pane_cp_t2

0x0001,

0xfac4,	// (0x00020b49) clock_nsta_pane_cp_t

0xf16c,	// (0x000201f1) navi_navi_volume_pane_cp2_ParamLimits

0xf17b,	// (0x00020200) popup_side_volume_key_window_g1_ParamLimits

0xf187,	// (0x0002020c) popup_side_volume_key_window_g2_ParamLimits

0xf196,	// (0x0002021b) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x000207a9) popup_side_volume_key_window_g_ParamLimits

0x02da,	// (0x0001135f) fep_hwr_aid_pane

0x0383,	// (0x00011408) bg_fep_hwr_top_pane_g4_ParamLimits

0x6596,	// (0x0001761b) fep_hwr_top_pane_g1_ParamLimits

0x65a8,	// (0x0001762d) fep_hwr_top_pane_g2_ParamLimits

0x03a3,	// (0x00011428) fep_hwr_top_pane_g3_ParamLimits

0xfb19,	// (0x00020b9e) fep_hwr_top_pane_g_ParamLimits

0x03b8,	// (0x0001143d) fep_hwr_top_text_pane_ParamLimits

0x4b42,	// (0x00015bc7) aid_touch_tab_arrow_arrow_2

0x4b4b,	// (0x00015bd0) aid_touch_tab_arrow_left_2

0x02ee,	// (0x00011373) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0325,	// (0x000113aa) fep_hwr_prediction_pane

0x66fe,	// (0x00017783) fep_vkb_prediction_pane

0xd3be,	// (0x0001e443) fep_vkb_side_pane_g3_ParamLimits

0xd3be,	// (0x0001e443) fep_vkb_side_pane_g3

0x0547,	// (0x000115cc) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x05b8,	// (0x0001163d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x05c5,	// (0x0001164a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc8,	// (0x00020c4d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x06f4,	// (0x00011779) fep_hwr_prediction_pane_g1

0x06fe,	// (0x00011783) fep_hwr_prediction_pane_g2

0x0706,	// (0x0001178b) fep_hwr_prediction_pane_g3

0x070e,	// (0x00011793) fep_hwr_prediction_pane_g4

0x0003,

0xfcd2,	// (0x00020d57) fep_hwr_prediction_pane_g

0x7990,	// (0x00018a15) fep_vkb_prediction_pane_g1

0x799a,	// (0x00018a1f) fep_vkb_prediction_pane_g2

0x79a2,	// (0x00018a27) fep_vkb_prediction_pane_g3

0x79aa,	// (0x00018a2f) fep_vkb_prediction_pane_g4

0x0003,

0xfcdb,	// (0x00020d60) fep_vkb_prediction_pane_g

0x015a,	// (0x000111df) slider_set_pane_g3

0x016e,	// (0x000111f3) slider_set_pane_g4

0x0186,	// (0x0001120b) slider_set_pane_g5

0x015a,	// (0x000111df) slider_set_pane_g6

0x019c,	// (0x00011221) slider_set_pane_g7

0x5263,	// (0x000162e8) slider_form_pane_g3

0x526c,	// (0x000162f1) slider_form_pane_g4

0x5274,	// (0x000162f9) slider_form_pane_g5

0x5263,	// (0x000162e8) slider_form_pane_g6

0xce86,	// (0x0001df0b) slider_form_pane_g7

0x5984,	// (0x00016a09) slider_set_pane_vc_g3

0x598d,	// (0x00016a12) slider_set_pane_vc_g4

0x5996,	// (0x00016a1b) slider_set_pane_vc_g5

0x5984,	// (0x00016a09) slider_set_pane_vc_g6

0x599f,	// (0x00016a24) slider_set_pane_vc_g7

0x5984,	// (0x00016a09) slider_form_pane_vc_g1

0x598d,	// (0x00016a12) slider_form_pane_vc_g2

0x5996,	// (0x00016a1b) slider_form_pane_vc_g3

0x5984,	// (0x00016a09) slider_form_pane_vc_g4

0x5d24,	// (0x00016da9) slider_form_pane_vc_g5

0x0004,

0xfa9d,	// (0x00020b22) slider_form_pane_vc_g

0xea78,	// (0x0001fafd) main_idle_act3_pane

0x79b2,	// (0x00018a37) ai3_links_pane

0xd78f,	// (0x0001e814) popup_ai3_data_window_ParamLimits

0xd78f,	// (0x0001e814) popup_ai3_data_window

0xea78,	// (0x0001fafd) grid_ai3_links_pane

0xd7ad,	// (0x0001e832) cell_ai3_links_pane_ParamLimits

0xd7ad,	// (0x0001e832) cell_ai3_links_pane

0x79f3,	// (0x00018a78) bg_popup_sub_pane_cp11

0x7a00,	// (0x00018a85) cell_ai3_links_pane_g1

0xea78,	// (0x0001fafd) bg_popup_sub_pane_cp12

0x7a25,	// (0x00018aaa) heading_ai3_data_pane

0x7a2d,	// (0x00018ab2) list_ai3_gene_pane

0x7a39,	// (0x00018abe) popup_ai3_data_window_g1

0x7a41,	// (0x00018ac6) heading_ai3_data_pane_g1

0x7a49,	// (0x00018ace) heading_ai3_data_pane_t1

0x7a57,	// (0x00018adc) list_double_ai3_gene_pane_ParamLimits

0x7a57,	// (0x00018adc) list_double_ai3_gene_pane

0x7a64,	// (0x00018ae9) list_single_ai3_gene_pane_ParamLimits

0x7a64,	// (0x00018ae9) list_single_ai3_gene_pane

0x64eb,	// (0x00017570) list_highlight_pane_cp7_ParamLimits

0x64eb,	// (0x00017570) list_highlight_pane_cp7

0x7a71,	// (0x00018af6) list_single_a13_gene_pane_t1_ParamLimits

0x7a71,	// (0x00018af6) list_single_a13_gene_pane_t1

0x7a88,	// (0x00018b0d) list_single_ai3_gene_pane_g1

0x7a91,	// (0x00018b16) list_single_ai3_gene_pane_g2

0x0001,

0xfce4,	// (0x00020d69) list_single_ai3_gene_pane_g

0x7a99,	// (0x00018b1e) list_double_ai3_gene_pane_g1_ParamLimits

0x7a99,	// (0x00018b1e) list_double_ai3_gene_pane_g1

0x7aa5,	// (0x00018b2a) list_double_ai3_gene_pane_t1_ParamLimits

0x7aa5,	// (0x00018b2a) list_double_ai3_gene_pane_t1

0x7ac1,	// (0x00018b46) list_double_ai3_gene_pane_t2_ParamLimits

0x7ac1,	// (0x00018b46) list_double_ai3_gene_pane_t2

0x7ad6,	// (0x00018b5b) list_double_ai3_gene_pane_t3_ParamLimits

0x7ad6,	// (0x00018b5b) list_double_ai3_gene_pane_t3

0x0002,

0xfce9,	// (0x00020d6e) list_double_ai3_gene_pane_t_ParamLimits

0xfce9,	// (0x00020d6e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x788b,	// (0x00018910) aid_size_min_col_2

0xd635,	// (0x0001e6ba) aid_size_min_msg_ParamLimits

0xd635,	// (0x0001e6ba) aid_size_min_msg

0xd3d2,	// (0x0001e457) fep_vkb_top_text_pane_g2_ParamLimits

0xd3d2,	// (0x0001e457) fep_vkb_top_text_pane_g2

0x0001,

0xfb49,	// (0x00020bce) fep_vkb_top_text_pane_g_ParamLimits

0xfb49,	// (0x00020bce) fep_vkb_top_text_pane_g

0xea78,	// (0x0001fafd) main_hc_apps_shell_pane

0x7af3,	// (0x00018b78) grid_hc_apps_pane_ParamLimits

0x7af3,	// (0x00018b78) grid_hc_apps_pane

0x7b02,	// (0x00018b87) list_hc_apps_pane

0x7b0a,	// (0x00018b8f) scroll_pane_cp37_ParamLimits

0x7b0a,	// (0x00018b8f) scroll_pane_cp37

0xd7c7,	// (0x0001e84c) cell_hc_apps_pane_ParamLimits

0xd7c7,	// (0x0001e84c) cell_hc_apps_pane

0xd891,	// (0x0001e916) cell_hc_apps_pane_g1_ParamLimits

0xd891,	// (0x0001e916) cell_hc_apps_pane_g1

0x7bff,	// (0x00018c84) cell_hc_apps_pane_g2_ParamLimits

0x7bff,	// (0x00018c84) cell_hc_apps_pane_g2

0x7c1b,	// (0x00018ca0) cell_hc_apps_pane_g3_ParamLimits

0x7c1b,	// (0x00018ca0) cell_hc_apps_pane_g3

0x0002,

0xfcf0,	// (0x00020d75) cell_hc_apps_pane_g_ParamLimits

0xfcf0,	// (0x00020d75) cell_hc_apps_pane_g

0xd8be,	// (0x0001e943) cell_hc_apps_pane_t1_ParamLimits

0xd8be,	// (0x0001e943) cell_hc_apps_pane_t1

0x1341,	// (0x000123c6) grid_highlight_pane_cp10_ParamLimits

0x1341,	// (0x000123c6) grid_highlight_pane_cp10

0xd8fe,	// (0x0001e983) list_single_hc_apps_pane_ParamLimits

0xd8fe,	// (0x0001e983) list_single_hc_apps_pane

0xd938,	// (0x0001e9bd) list_single_hc_apps_pane_g1

0xd951,	// (0x0001e9d6) list_single_hc_apps_pane_g2

0x0001,

0xfcf7,	// (0x00020d7c) list_single_hc_apps_pane_g

0xd96a,	// (0x0001e9ef) list_single_hc_apps_pane_g2_copy1

0xd986,	// (0x0001ea0b) list_single_hc_apps_pane_t1

0x109d,	// (0x00012122) bg_set_opt_pane_cp_ParamLimits

0xeeab,	// (0x0001ff30) setting_slider_pane_t1_ParamLimits

0xeec1,	// (0x0001ff46) setting_slider_pane_t2_ParamLimits

0xeedb,	// (0x0001ff60) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x000205fb) setting_slider_pane_t_ParamLimits

0xeef3,	// (0x0001ff78) slider_set_pane_ParamLimits

0xf3b8,	// (0x0002043d) control_pane_g5_ParamLimits

0xf3b8,	// (0x0002043d) control_pane_g5

0x5084,	// (0x00016109) slider_set_pane_g1_ParamLimits

0x014e,	// (0x000111d3) slider_set_pane_g2_ParamLimits

0x015a,	// (0x000111df) slider_set_pane_g3_ParamLimits

0x016e,	// (0x000111f3) slider_set_pane_g4_ParamLimits

0x0186,	// (0x0001120b) slider_set_pane_g5_ParamLimits

0x015a,	// (0x000111df) slider_set_pane_g6_ParamLimits

0x019c,	// (0x00011221) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x000209f0) slider_set_pane_g_ParamLimits

0x2bcc,	// (0x00013c51) navi_icon_text_pane_ParamLimits

0xc5e7,	// (0x0001d66c) aid_fill_nsta_2_ParamLimits

0xc620,	// (0x0001d6a5) aid_touch_tab_arrow_left_ParamLimits

0xc634,	// (0x0001d6b9) aid_touch_tab_arrow_right_ParamLimits

0xc6f7,	// (0x0001d77c) clock_nsta_pane_ParamLimits

0xcbc3,	// (0x0001dc48) navi_icon_pane_g1_ParamLimits

0xcbcf,	// (0x0001dc54) navi_text_pane_t1_ParamLimits

0xd120,	// (0x0001e1a5) navi_icon_text_pane_g1_ParamLimits

0xd12c,	// (0x0001e1b1) navi_icon_text_pane_t1_ParamLimits

0xd938,	// (0x0001e9bd) list_single_hc_apps_pane_g1_ParamLimits

0xd951,	// (0x0001e9d6) list_single_hc_apps_pane_g2_ParamLimits

0xfcf7,	// (0x00020d7c) list_single_hc_apps_pane_g_ParamLimits

0xd96a,	// (0x0001e9ef) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd986,	// (0x0001ea0b) list_single_hc_apps_pane_t1_ParamLimits

0xa88c,	// (0x0001b911) popup_toolbar2_fixed_window_ParamLimits

0xa88c,	// (0x0001b911) popup_toolbar2_fixed_window

0xc54c,	// (0x0001d5d1) popup_toolbar2_float_window

0xea78,	// (0x0001fafd) bg_popup_sub_pane_cp27

0x7d38,	// (0x00018dbd) grid_toolbar2_float_pane

0xea78,	// (0x0001fafd) bg_popup_sub_pane_cp26

0x7d38,	// (0x00018dbd) grid_toolbar2_fixed_pane

0xd9b4,	// (0x0001ea39) cell_toolbar2_fixed_pane_ParamLimits

0xd9b4,	// (0x0001ea39) cell_toolbar2_fixed_pane

0xd9d1,	// (0x0001ea56) cell_toolbar2_fixed_pane_g1

0x7d59,	// (0x00018dde) toolbar2_fixed_button_pane

0x3c51,	// (0x00014cd6) toolbar2_fixed_button_pane_g1

0x3c61,	// (0x00014ce6) toolbar2_fixed_button_pane_g2

0x3c59,	// (0x00014cde) toolbar2_fixed_button_pane_g3

0x3c71,	// (0x00014cf6) toolbar2_fixed_button_pane_g4

0x3c69,	// (0x00014cee) toolbar2_fixed_button_pane_g5

0x3c79,	// (0x00014cfe) toolbar2_fixed_button_pane_g6

0x3c81,	// (0x00014d06) toolbar2_fixed_button_pane_g7

0x3c91,	// (0x00014d16) toolbar2_fixed_button_pane_g8

0x3c89,	// (0x00014d0e) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x000208f2) toolbar2_fixed_button_pane_g

0x7d61,	// (0x00018de6) cell_toolbar2_float_pane_ParamLimits

0x7d61,	// (0x00018de6) cell_toolbar2_float_pane

0x7d72,	// (0x00018df7) cell_toolbar2_float_pane_g1

0x7d59,	// (0x00018dde) toolbar2_fixed_button_pane_cp

0xd2ba,	// (0x0001e33f) fep_vkb_accented_list_pane_ParamLimits

0xd2ba,	// (0x0001e33f) fep_vkb_accented_list_pane

0x0527,	// (0x000115ac) bg_popup_fep_shadow_pane_g9

0x2d50,	// (0x00013dd5) bg_popup_fep_shadow_pane_cp3

0x21a4,	// (0x00013229) list_accented_list_pane

0x7d7b,	// (0x00018e00) list_single_accented_list_pane_ParamLimits

0x7d7b,	// (0x00018e00) list_single_accented_list_pane

0x2d50,	// (0x00013dd5) list_highlight_pane_cp10

0x7d8c,	// (0x00018e11) list_single_accented_list_pane_t1

0xc468,	// (0x0001d4ed) popup_slider_window_ParamLimits

0xc468,	// (0x0001d4ed) popup_slider_window

0x7882,	// (0x00018907) aid_indentation_list_msg

0xdae9,	// (0x0001eb6e) bg_popup_window_pane_cp19

0x7ee7,	// (0x00018f6c) popup_slider_window_g1

0x7f03,	// (0x00018f88) popup_slider_window_g2

0x7f1f,	// (0x00018fa4) popup_slider_window_g3

0x0005,

0xfcfc,	// (0x00020d81) popup_slider_window_g

0x7f7b,	// (0x00019000) popup_slider_window_t1

0x7fef,	// (0x00019074) small_volume_slider_vertical_pane

0x6526,	// (0x000175ab) small_volume_slider_vertical_pane_g1

0x6526,	// (0x000175ab) small_volume_slider_vertical_pane_g2

0x800b,	// (0x00019090) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0e,	// (0x00020d93) small_volume_slider_vertical_pane_g

0xa7f6,	// (0x0001b87b) area_side_right_pane_ParamLimits

0xa7f6,	// (0x0001b87b) area_side_right_pane

0xac87,	// (0x0001bd0c) aid_size_side_button_ParamLimits

0xac87,	// (0x0001bd0c) aid_size_side_button

0xaca0,	// (0x0001bd25) grid_sctrl_middle_pane_ParamLimits

0xaca0,	// (0x0001bd25) grid_sctrl_middle_pane

0x074a,	// (0x000117cf) sctrl_sk_bottom_pane

0x075b,	// (0x000117e0) sctrl_sk_top_pane

0x076d,	// (0x000117f2) aid_touch_sctrl_top

0x077a,	// (0x000117ff) bg_sctrl_sk_pane_ParamLimits

0x077a,	// (0x000117ff) bg_sctrl_sk_pane

0x0788,	// (0x0001180d) sctrl_sk_top_pane_g1

0x0795,	// (0x0001181a) sctrl_sk_top_pane_t1

0x076d,	// (0x000117f2) aid_touch_sctrl_bottom

0x077a,	// (0x000117ff) bg_sctrl_sk_pane_cp_ParamLimits

0x077a,	// (0x000117ff) bg_sctrl_sk_pane_cp

0x07b0,	// (0x00011835) sctrl_sk_bottom_pane_g1

0x0795,	// (0x0001181a) sctrl_sk_bottom_pane_t1

0xacba,	// (0x0001bd3f) cell_sctrl_middle_pane_ParamLimits

0xacba,	// (0x0001bd3f) cell_sctrl_middle_pane

0xaccd,	// (0x0001bd52) aid_touch_sctrl_middle_ParamLimits

0xaccd,	// (0x0001bd52) aid_touch_sctrl_middle

0xacda,	// (0x0001bd5f) bg_sctrl_middle_pane_ParamLimits

0xacda,	// (0x0001bd5f) bg_sctrl_middle_pane

0x0e2a,	// (0x00011eaf) cell_sctrl_middle_pane_g1_ParamLimits

0x0e2a,	// (0x00011eaf) cell_sctrl_middle_pane_g1

0xace8,	// (0x0001bd6d) cell_sctrl_middle_pane_g2_ParamLimits

0xace8,	// (0x0001bd6d) cell_sctrl_middle_pane_g2

0x0001,

0xfd1a,	// (0x00020d9f) cell_sctrl_middle_pane_g_ParamLimits

0xfd1a,	// (0x00020d9f) cell_sctrl_middle_pane_g

0x3c51,	// (0x00014cd6) bg_sctrl_middle_pane_g1

0x3c59,	// (0x00014cde) bg_sctrl_middle_pane_g2

0x3c61,	// (0x00014ce6) bg_sctrl_middle_pane_g3

0x3c69,	// (0x00014cee) bg_sctrl_middle_pane_g4

0x3c71,	// (0x00014cf6) bg_sctrl_middle_pane_g5

0x3c79,	// (0x00014cfe) bg_sctrl_middle_pane_g6

0x3c81,	// (0x00014d06) bg_sctrl_middle_pane_g7

0x3c89,	// (0x00014d0e) bg_sctrl_middle_pane_g8

0x0007,

0xfd1f,	// (0x00020da4) bg_sctrl_middle_pane_g

0x3c91,	// (0x00014d16) bg_sctrl_middle_pane_g8_copy1

0x3c51,	// (0x00014cd6) bg_sctrl_sk_pane_g1

0x3c61,	// (0x00014ce6) bg_sctrl_sk_pane_g2

0x3c59,	// (0x00014cde) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x000208f2) bg_sctrl_sk_pane_g

0x186d,	// (0x000128f2) aid_size_touch_scroll_bar

0x3c71,	// (0x00014cf6) bg_sctrl_sk_pane_g4

0x3c69,	// (0x00014cee) bg_sctrl_sk_pane_g5

0x3c79,	// (0x00014cfe) bg_sctrl_sk_pane_g6

0x3c81,	// (0x00014d06) bg_sctrl_sk_pane_g7

0x3c91,	// (0x00014d16) bg_sctrl_sk_pane_g8

0x3c89,	// (0x00014d0e) bg_sctrl_sk_pane_g9

0x3190,	// (0x00014215) popup_fep_china_hwr2_fs_candidate_window

0xbf24,	// (0x0001cfa9) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbf24,	// (0x0001cfa9) popup_fep_china_hwr2_fs_control_window

0x0547,	// (0x000115cc) sctrl_sk_top_pane_g2

0x0001,

0xfd15,	// (0x00020d9a) sctrl_sk_top_pane_g

0xdba1,	// (0x0001ec26) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdba1,	// (0x0001ec26) aid_fep_china_hwr2_fs_cell

0xdbb7,	// (0x0001ec3c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdbb7,	// (0x0001ec3c) bg_popup_fep_shadow_pane_cp4

0xdbce,	// (0x0001ec53) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdbce,	// (0x0001ec53) bg_popup_fep_shadow_pane_cp5

0xdbe0,	// (0x0001ec65) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdbe0,	// (0x0001ec65) popup_fep_china_hwr2_fs_control_bar_grid

0xdbf4,	// (0x0001ec79) popup_fep_china_hwr2_fs_control_funtion_grid

0x806a,	// (0x000190ef) aid_fep_china_hwr2_fs_candi_cell

0xea78,	// (0x0001fafd) bg_popup_fep_shadow_pane_cp6

0x8074,	// (0x000190f9) popup_fep_china_hwr2_fs_candidate_grid

0xdbfc,	// (0x0001ec81) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdbfc,	// (0x0001ec81) cell_fep_china_hwr2_fs_funtion_grid

0x6526,	// (0x000175ab) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8096,	// (0x0001911b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8096,	// (0x0001911b) cell_fep_china_hwr2_fs_funtion_grid_g1

0x80a4,	// (0x00019129) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x80a4,	// (0x00019129) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd30,	// (0x00020db5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd30,	// (0x00020db5) cell_fep_china_hwr2_fs_funtion_grid_g

0xdc14,	// (0x0001ec99) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdc14,	// (0x0001ec99) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdc29,	// (0x0001ecae) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdc29,	// (0x0001ecae) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd35,	// (0x00020dba) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd35,	// (0x00020dba) cell_fep_china_hwr2_fs_funtion_grid_t

0x80eb,	// (0x00019170) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x80f3,	// (0x00019178) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x80fb,	// (0x00019180) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3a,	// (0x00020dbf) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8103,	// (0x00019188) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8103,	// (0x00019188) cell_fep_china_hwr2_fs_candidate_grid

0x8122,	// (0x000191a7) popup_fep_china_hwr2_fs_candidate_grid_g20

0x812a,	// (0x000191af) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6526,	// (0x000175ab) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6526,	// (0x000175ab) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4e,	// (0x00020bd3) cell_fep_china_hwr2_fs_candidate_grid_g

0x8132,	// (0x000191b7) cell_fep_china_hwr2_fs_candidate_grid_t1

0x37ff,	// (0x00014884) clock_nsta_pane_cp_24_ParamLimits

0x37ff,	// (0x00014884) clock_nsta_pane_cp_24

0x387f,	// (0x00014904) indicator_nsta_pane_cp_24_ParamLimits

0x387f,	// (0x00014904) indicator_nsta_pane_cp_24

0x499a,	// (0x00015a1f) heading_pane_g1

0x0001,

0xf8d2,	// (0x00020957) heading_pane_g

0x54d3,	// (0x00016558) grid_sct_catagory_button_pane

0x5505,	// (0x0001658a) scroll_pane_cp5_ParamLimits

0x61a2,	// (0x00017227) button_value_adjust_pane_cp5_ParamLimits

0x61a2,	// (0x00017227) button_value_adjust_pane_cp5

0x6298,	// (0x0001731d) form2_midp_time_pane_ParamLimits

0x8140,	// (0x000191c5) cell_sct_catagory_button_pane_ParamLimits

0x8140,	// (0x000191c5) cell_sct_catagory_button_pane

0x64eb,	// (0x00017570) bg_button_pane_cp01_ParamLimits

0x64eb,	// (0x00017570) bg_button_pane_cp01

0x6526,	// (0x000175ab) cell_sct_catagory_button_pane_g1

0xc4e9,	// (0x0001d56e) popup_tb_extension_window

0xdc45,	// (0x0001ecca) aid_size_cell_ext_ParamLimits

0xdc45,	// (0x0001ecca) aid_size_cell_ext

0x16af,	// (0x00012734) bg_tb_trans_pane_cp1_ParamLimits

0x16af,	// (0x00012734) bg_tb_trans_pane_cp1

0xdc6b,	// (0x0001ecf0) grid_tb_ext_pane_ParamLimits

0xdc6b,	// (0x0001ecf0) grid_tb_ext_pane

0xdcab,	// (0x0001ed30) cell_tb_ext_pane_ParamLimits

0xdcab,	// (0x0001ed30) cell_tb_ext_pane

0xdcd3,	// (0x0001ed58) cell_tb_ext_pane_g1_ParamLimits

0xdcd3,	// (0x0001ed58) cell_tb_ext_pane_g1

0x81d6,	// (0x0001925b) cell_tb_ext_pane_t1

0x1341,	// (0x000123c6) list_highlight_pane_cp11_ParamLimits

0x1341,	// (0x000123c6) list_highlight_pane_cp11

0xee34,	// (0x0001feb9) popup_uni_indicator_window_ParamLimits

0xee34,	// (0x0001feb9) popup_uni_indicator_window

0x1ed9,	// (0x00012f5e) bg_popup_sub_pane_cp14

0x81f1,	// (0x00019276) list_uniindi_pane

0x81fd,	// (0x00019282) uniindi_top_pane

0x1341,	// (0x000123c6) bg_uniindi_top_pane

0x821e,	// (0x000192a3) uniindi_top_pane_g1

0x8234,	// (0x000192b9) uniindi_top_pane_g2

0x0003,

0xfd41,	// (0x00020dc6) uniindi_top_pane_g

0x825e,	// (0x000192e3) uniindi_top_pane_t1

0x828a,	// (0x0001930f) list_single_uniindi_pane_ParamLimits

0x828a,	// (0x0001930f) list_single_uniindi_pane

0x6526,	// (0x000175ab) bg_uniindi_top_pane_g1

0x829c,	// (0x00019321) list_single_uniindi_pane_g1

0x82af,	// (0x00019334) list_single_uniindi_pane_t1

0xeb40,	// (0x0001fbc5) control_bg_pane

0x82d4,	// (0x00019359) bg_sctrl_sk_pane_cp1

0x82dd,	// (0x00019362) bg_sctrl_sk_pane_cp2

0x82e6,	// (0x0001936b) control_bg_pane_g1

0x82ef,	// (0x00019374) control_bg_pane_g2

0x0001,

0xfd4a,	// (0x00020dcf) control_bg_pane_g

0x5fc4,	// (0x00017049) cell_indicator_nsta_pane_g1_ParamLimits

0xd079,	// (0x0001e0fe) cell_indicator_nsta_pane_g2_ParamLimits

0xfab2,	// (0x00020b37) cell_indicator_nsta_pane_g_ParamLimits

0x630d,	// (0x00017392) form2_midp_time_pane_t1_ParamLimits

0xbe9a,	// (0x0001cf1f) main_idle_act4_pane_ParamLimits

0xbe9a,	// (0x0001cf1f) main_idle_act4_pane

0xc4e9,	// (0x0001d56e) popup_tb_extension_window_ParamLimits

0xdc93,	// (0x0001ed18) tb_ext_find_pane_ParamLimits

0xdc93,	// (0x0001ed18) tb_ext_find_pane

0x82f8,	// (0x0001937d) ai_gene_pane_1_cp1

0x2e99,	// (0x00013f1e) ai_gene_pane_2_cp1

0x8300,	// (0x00019385) list_single_idle_plugin_calendar_pane

0x8309,	// (0x0001938e) list_single_idle_plugin_notification_pane

0x8312,	// (0x00019397) list_single_idle_plugin_player_pane

0xdcf0,	// (0x0001ed75) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcf0,	// (0x0001ed75) list_single_idle_plugin_shortcut_pane

0xdd18,	// (0x0001ed9d) main_idle_act4_pane_t1

0xdd30,	// (0x0001edb5) main_idle_act4_pane_t2

0x0001,

0xfd4f,	// (0x00020dd4) main_idle_act4_pane_t

0xdd48,	// (0x0001edcd) middle_sk_idle_act4_pane_ParamLimits

0xdd48,	// (0x0001edcd) middle_sk_idle_act4_pane

0xdd64,	// (0x0001ede9) popup_clock_digital_analogue_window_cp2

0xdd8b,	// (0x0001ee10) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd8b,	// (0x0001ee10) shortcut_wheel_idle_act4_pane

0x6526,	// (0x000175ab) shortcut_wheel_idle_act4_pane_g1

0x6526,	// (0x000175ab) shortcut_wheel_idle_act4_pane_g2

0x6526,	// (0x000175ab) shortcut_wheel_idle_act4_pane_g3

0x6526,	// (0x000175ab) shortcut_wheel_idle_act4_pane_g4

0x6526,	// (0x000175ab) shortcut_wheel_idle_act4_pane_g5

0x83a5,	// (0x0001942a) shortcut_wheel_idle_act4_pane_g6

0x83ad,	// (0x00019432) shortcut_wheel_idle_act4_pane_g7

0x83b5,	// (0x0001943a) shortcut_wheel_idle_act4_pane_g8

0x83bd,	// (0x00019442) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd54,	// (0x00020dd9) shortcut_wheel_idle_act4_pane_g

0xc6a7,	// (0x0001d72c) middle_sk_idle_act4_pane_g1_ParamLimits

0xc6a7,	// (0x0001d72c) middle_sk_idle_act4_pane_g1

0xde08,	// (0x0001ee8d) middle_sk_idle_act4_pane_g2_ParamLimits

0xde08,	// (0x0001ee8d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd77,	// (0x00020dfc) middle_sk_idle_act4_pane_g_ParamLimits

0xfd77,	// (0x00020dfc) middle_sk_idle_act4_pane_g

0xde20,	// (0x0001eea5) middle_sk_idle_act4_pane_t1_ParamLimits

0xde20,	// (0x0001eea5) middle_sk_idle_act4_pane_t1

0xde4f,	// (0x0001eed4) grid_ai_shortcut_pane_ParamLimits

0xde4f,	// (0x0001eed4) grid_ai_shortcut_pane

0xde6c,	// (0x0001eef1) list_highlight_pane_cp16_ParamLimits

0xde6c,	// (0x0001eef1) list_highlight_pane_cp16

0xde79,	// (0x0001eefe) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde79,	// (0x0001eefe) list_single_idle_plugin_shortcut_pane_g1

0xde85,	// (0x0001ef0a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde85,	// (0x0001ef0a) list_single_idle_plugin_shortcut_pane_g2

0xdea3,	// (0x0001ef28) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdea3,	// (0x0001ef28) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7c,	// (0x00020e01) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7c,	// (0x00020e01) list_single_idle_plugin_shortcut_pane_g

0xdeb8,	// (0x0001ef3d) cell_ai_shortcut_pane_ParamLimits

0xdeb8,	// (0x0001ef3d) cell_ai_shortcut_pane

0xdece,	// (0x0001ef53) cell_ai_shortcut_pane_g1_ParamLimits

0xdece,	// (0x0001ef53) cell_ai_shortcut_pane_g1

0x82f8,	// (0x0001937d) ai_gene_pane_1_cp2

0x84ee,	// (0x00019573) ai_gene_pane_2_cp2

0x84f6,	// (0x0001957b) list_highlight_pane_cp15

0x84ff,	// (0x00019584) list_single_idle_plugin_calendar_pane_g1

0x84f6,	// (0x0001957b) list_highlight_pane_cp17

0x8507,	// (0x0001958c) list_single_idle_plugin_calendar_pane_g1_copy1

0x850f,	// (0x00019594) list_single_idle_plugin_player_pane_g1

0x573a,	// (0x000167bf) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd83,	// (0x00020e08) list_single_idle_plugin_player_pane_g

0x8517,	// (0x0001959c) list_single_idle_plugin_player_pane_t1

0x8525,	// (0x000195aa) list_single_idle_plugin_player_pane_t2

0x8533,	// (0x000195b8) list_single_idle_plugin_player_pane_t3

0x8541,	// (0x000195c6) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd88,	// (0x00020e0d) list_single_idle_plugin_player_pane_t

0x854f,	// (0x000195d4) wait_bar_pane_cp15

0x8557,	// (0x000195dc) grid_ai_notification_pane

0x573a,	// (0x000167bf) list_single_idle_plugin_notification_pane_g1

0xdef0,	// (0x0001ef75) cell_ai_notification_pane_ParamLimits

0xdef0,	// (0x0001ef75) cell_ai_notification_pane

0x856d,	// (0x000195f2) cell_ai_notification_pane_g1

0x8575,	// (0x000195fa) cell_ai_notification_pane_t1

0xdefd,	// (0x0001ef82) tb_ext_find_button_pane

0xdf05,	// (0x0001ef8a) tb_ext_find_pane_g1

0xdf0d,	// (0x0001ef92) tb_ext_find_pane_t1

0x26ab,	// (0x00013730) tb_ext_find_button_pane_g1

0x85a1,	// (0x00019626) tb_ext_find_button_pane_g2

0x0001,

0xfd91,	// (0x00020e16) tb_ext_find_button_pane_g

0xdd18,	// (0x0001ed9d) main_idle_act4_pane_t1_ParamLimits

0xdd30,	// (0x0001edb5) main_idle_act4_pane_t2_ParamLimits

0xfd4f,	// (0x00020dd4) main_idle_act4_pane_t_ParamLimits

0xdd64,	// (0x0001ede9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd7b,	// (0x0001ee00) sat_plugin_idle_act4_pane_ParamLimits

0xdd7b,	// (0x0001ee00) sat_plugin_idle_act4_pane

0xdf1b,	// (0x0001efa0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf1b,	// (0x0001efa0) sat_plugin_idle_act4_pane_t1

0xdf33,	// (0x0001efb8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf33,	// (0x0001efb8) sat_plugin_idle_act4_pane_t2

0xdf4b,	// (0x0001efd0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf4b,	// (0x0001efd0) sat_plugin_idle_act4_pane_t3

0xdf63,	// (0x0001efe8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf63,	// (0x0001efe8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd96,	// (0x00020e1b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd96,	// (0x00020e1b) sat_plugin_idle_act4_pane_t

0xede0,	// (0x0001fe65) popup_battery_window_ParamLimits

0xede0,	// (0x0001fe65) popup_battery_window

0x1341,	// (0x000123c6) bg_popup_sub_pane_cp25_ParamLimits

0x1341,	// (0x000123c6) bg_popup_sub_pane_cp25

0x85f6,	// (0x0001967b) popup_battery_window_g1_ParamLimits

0x85f6,	// (0x0001967b) popup_battery_window_g1

0x8602,	// (0x00019687) popup_battery_window_t1_ParamLimits

0x8602,	// (0x00019687) popup_battery_window_t1

0x8614,	// (0x00019699) popup_battery_window_t2_ParamLimits

0x8614,	// (0x00019699) popup_battery_window_t2

0x0001,

0xfd9f,	// (0x00020e24) popup_battery_window_t_ParamLimits

0xfd9f,	// (0x00020e24) popup_battery_window_t

0xbd8e,	// (0x0001ce13) midp_canvas_pane_ParamLimits

0xbde9,	// (0x0001ce6e) midp_keypad_pane_ParamLimits

0xbde9,	// (0x0001ce6e) midp_keypad_pane

0x30de,	// (0x00014163) main_midp_pane_ParamLimits

0x604f,	// (0x000170d4) signal_pane_g2_cp_ParamLimits

0xdf7b,	// (0x0001f000) aid_size_cell_midp_keypad_ParamLimits

0xdf7b,	// (0x0001f000) aid_size_cell_midp_keypad

0xdf99,	// (0x0001f01e) midp_keyp_game_grid_pane_ParamLimits

0xdf99,	// (0x0001f01e) midp_keyp_game_grid_pane

0xdfc0,	// (0x0001f045) midp_keyp_rocker_pane_ParamLimits

0xdfc0,	// (0x0001f045) midp_keyp_rocker_pane

0xe005,	// (0x0001f08a) midp_keyp_sk_left_pane_ParamLimits

0xe005,	// (0x0001f08a) midp_keyp_sk_left_pane

0xe059,	// (0x0001f0de) midp_keyp_sk_right_pane_ParamLimits

0xe059,	// (0x0001f0de) midp_keyp_sk_right_pane

0xea78,	// (0x0001fafd) bg_button_pane_cp03

0xe0ad,	// (0x0001f132) midp_keyp_sk_left_pane_g1

0xea78,	// (0x0001fafd) bg_button_pane_cp04

0xe0ad,	// (0x0001f132) midp_keyp_sk_right_pane_g1

0x6526,	// (0x000175ab) midp_keyp_rocker_pane_g1

0xe0b6,	// (0x0001f13b) keyp_game_cell_pane_ParamLimits

0xe0b6,	// (0x0001f13b) keyp_game_cell_pane

0xea78,	// (0x0001fafd) bg_button_pane_cp02

0xe0dc,	// (0x0001f161) keyp_game_cell_pane_g1

0xa838,	// (0x0001b8bd) popup_fep_vkb2_window_ParamLimits

0xa838,	// (0x0001b8bd) popup_fep_vkb2_window

0xacf4,	// (0x0001bd79) aid_size_cell_vkb2_ParamLimits

0xacf4,	// (0x0001bd79) aid_size_cell_vkb2

0xad22,	// (0x0001bda7) popup_fep_vkb2_window_g1_ParamLimits

0xad22,	// (0x0001bda7) popup_fep_vkb2_window_g1

0xad72,	// (0x0001bdf7) vkb2_area_bottom_pane_ParamLimits

0xad72,	// (0x0001bdf7) vkb2_area_bottom_pane

0xadce,	// (0x0001be53) vkb2_area_keypad_pane_ParamLimits

0xadce,	// (0x0001be53) vkb2_area_keypad_pane

0xae1c,	// (0x0001bea1) vkb2_area_top_pane_ParamLimits

0xae1c,	// (0x0001bea1) vkb2_area_top_pane

0xaea2,	// (0x0001bf27) vkb2_top_entry_pane_ParamLimits

0xaea2,	// (0x0001bf27) vkb2_top_entry_pane

0xaecf,	// (0x0001bf54) vkb2_top_grid_left_pane_ParamLimits

0xaecf,	// (0x0001bf54) vkb2_top_grid_left_pane

0xaeef,	// (0x0001bf74) vkb2_top_grid_right_pane_ParamLimits

0xaeef,	// (0x0001bf74) vkb2_top_grid_right_pane

0x0a26,	// (0x00011aab) vkb2_cell_keypad_pane_ParamLimits

0x0a26,	// (0x00011aab) vkb2_cell_keypad_pane

0xaf35,	// (0x0001bfba) vkb2_area_bottom_grid_pane_ParamLimits

0xaf35,	// (0x0001bfba) vkb2_area_bottom_grid_pane

0xaf5f,	// (0x0001bfe4) vkb2_area_bottom_pane_g1_ParamLimits

0xaf5f,	// (0x0001bfe4) vkb2_area_bottom_pane_g1

0xaf85,	// (0x0001c00a) vkb2_area_bottom_pane_g2_ParamLimits

0xaf85,	// (0x0001c00a) vkb2_area_bottom_pane_g2

0xafb6,	// (0x0001c03b) vkb2_area_bottom_pane_g3_ParamLimits

0xafb6,	// (0x0001c03b) vkb2_area_bottom_pane_g3

0x0002,

0xfda4,	// (0x00020e29) vkb2_area_bottom_pane_g_ParamLimits

0xfda4,	// (0x00020e29) vkb2_area_bottom_pane_g

0x0bb5,	// (0x00011c3a) vkb2_top_cell_left_pane_ParamLimits

0x0bb5,	// (0x00011c3a) vkb2_top_cell_left_pane

0xe0e5,	// (0x0001f16a) vkb2_top_entry_pane_g1_ParamLimits

0xe0e5,	// (0x0001f16a) vkb2_top_entry_pane_g1

0xe0f3,	// (0x0001f178) vkb2_top_entry_pane_t1_ParamLimits

0xe0f3,	// (0x0001f178) vkb2_top_entry_pane_t1

0x87a1,	// (0x00019826) vkb2_top_entry_pane_t2_ParamLimits

0x87a1,	// (0x00019826) vkb2_top_entry_pane_t2

0x87b9,	// (0x0001983e) vkb2_top_entry_pane_t3_ParamLimits

0x87b9,	// (0x0001983e) vkb2_top_entry_pane_t3

0x0002,

0xfdab,	// (0x00020e30) vkb2_top_entry_pane_t_ParamLimits

0xfdab,	// (0x00020e30) vkb2_top_entry_pane_t

0xb020,	// (0x0001c0a5) vkb2_top_grid_right_pane_g1_ParamLimits

0xb020,	// (0x0001c0a5) vkb2_top_grid_right_pane_g1

0x0c18,	// (0x00011c9d) vkb2_top_grid_right_pane_g2_ParamLimits

0x0c18,	// (0x00011c9d) vkb2_top_grid_right_pane_g2

0x0c30,	// (0x00011cb5) vkb2_top_grid_right_pane_g3_ParamLimits

0x0c30,	// (0x00011cb5) vkb2_top_grid_right_pane_g3

0xb036,	// (0x0001c0bb) vkb2_top_grid_right_pane_g4_ParamLimits

0xb036,	// (0x0001c0bb) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb2,	// (0x00020e37) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb2,	// (0x00020e37) vkb2_top_grid_right_pane_g

0x0c5e,	// (0x00011ce3) vkb2_top_cell_left_pane_g1

0x0c75,	// (0x00011cfa) vkb2_cell_keypad_pane_g1_ParamLimits

0x0c75,	// (0x00011cfa) vkb2_cell_keypad_pane_g1

0x87cf,	// (0x00019854) vkb2_cell_keypad_pane_t1_ParamLimits

0x87cf,	// (0x00019854) vkb2_cell_keypad_pane_t1

0x0c99,	// (0x00011d1e) vkb2_cell_bottom_grid_pane_ParamLimits

0x0c99,	// (0x00011d1e) vkb2_cell_bottom_grid_pane

0x0cd2,	// (0x00011d57) vkb2_cell_bottom_grid_pane_g1

0xddac,	// (0x0001ee31) aid_call2_pane_cp02

0xddb4,	// (0x0001ee39) aid_call_pane_cp02

0xddbc,	// (0x0001ee41) clock_digital_number_pane_cp10

0xddc4,	// (0x0001ee49) clock_digital_number_pane_cp11

0xddcc,	// (0x0001ee51) clock_digital_number_pane_cp12

0xddd4,	// (0x0001ee59) clock_digital_number_pane_cp13

0xdddc,	// (0x0001ee61) clock_digital_separator_pane_cp10

0x26ab,	// (0x00013730) popup_clock_digital_analogue_window_cp2_g1

0x26ab,	// (0x00013730) popup_clock_digital_analogue_window_cp2_g2

0xdde4,	// (0x0001ee69) popup_clock_digital_analogue_window_cp2_g3

0x26ab,	// (0x00013730) popup_clock_digital_analogue_window_cp2_g4

0xdde4,	// (0x0001ee69) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd67,	// (0x00020dec) popup_clock_digital_analogue_window_cp2_g

0xddec,	// (0x0001ee71) popup_clock_digital_analogue_window_cp2_t1

0xddfa,	// (0x0001ee7f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd72,	// (0x00020df7) popup_clock_digital_analogue_window_cp2_t

0x6526,	// (0x000175ab) clock_digital_number_pane_cp10_g1

0x6526,	// (0x000175ab) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4e,	// (0x00020bd3) clock_digital_number_pane_cp10_g

0x6526,	// (0x000175ab) clock_digital_separator_pane_cp10_g1

0x6526,	// (0x000175ab) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4e,	// (0x00020bd3) clock_digital_separator_pane_cp10_g

0x8240,	// (0x000192c5) uniindi_top_pane_g3

0x8251,	// (0x000192d6) uniindi_top_pane_g4

0x0a96,	// (0x00011b1b) vkb2_row_keypad_pane_ParamLimits

0x0a96,	// (0x00011b1b) vkb2_row_keypad_pane

0x0cee,	// (0x00011d73) vkb2_cell_t_keypad_pane_ParamLimits

0x0cee,	// (0x00011d73) vkb2_cell_t_keypad_pane

0x0cfe,	// (0x00011d83) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x0cfe,	// (0x00011d83) vkb2_cell_t_keypad_pane_cp08

0x0d13,	// (0x00011d98) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x0d13,	// (0x00011d98) vkb2_cell_t_keypad_pane_cp09

0x0d27,	// (0x00011dac) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x0d27,	// (0x00011dac) vkb2_cell_t_keypad_pane_cp01

0x0d38,	// (0x00011dbd) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x0d38,	// (0x00011dbd) vkb2_cell_t_keypad_pane_cp02

0x0d49,	// (0x00011dce) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x0d49,	// (0x00011dce) vkb2_cell_t_keypad_pane_cp03

0x0d5a,	// (0x00011ddf) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x0d5a,	// (0x00011ddf) vkb2_cell_t_keypad_pane_cp04

0x0d6b,	// (0x00011df0) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x0d6b,	// (0x00011df0) vkb2_cell_t_keypad_pane_cp05

0x0d7c,	// (0x00011e01) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x0d7c,	// (0x00011e01) vkb2_cell_t_keypad_pane_cp06

0x0d8f,	// (0x00011e14) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x0d8f,	// (0x00011e14) vkb2_cell_t_keypad_pane_cp07

0x0da4,	// (0x00011e29) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x0da4,	// (0x00011e29) vkb2_cell_t_keypad_pane_cp10

0x0547,	// (0x000115cc) vkb2_cell_t_keypad_pane_g1

0x87e6,	// (0x0001986b) vkb2_cell_t_keypad_pane_t1

0xeb40,	// (0x0001fbc5) popup_grid_graphic2_window

0xe12c,	// (0x0001f1b1) aid_size_cell_graphic2_ParamLimits

0xe12c,	// (0x0001f1b1) aid_size_cell_graphic2

0xe16a,	// (0x0001f1ef) bg_popup_window_pane_cp21_ParamLimits

0xe16a,	// (0x0001f1ef) bg_popup_window_pane_cp21

0xe178,	// (0x0001f1fd) graphic2_pages_pane_ParamLimits

0xe178,	// (0x0001f1fd) graphic2_pages_pane

0xe1d0,	// (0x0001f255) grid_graphic2_control_pane_ParamLimits

0xe1d0,	// (0x0001f255) grid_graphic2_control_pane

0xe218,	// (0x0001f29d) grid_graphic2_pane_ParamLimits

0xe218,	// (0x0001f29d) grid_graphic2_pane

0xe2a3,	// (0x0001f328) cell_graphic2_pane

0xea78,	// (0x0001fafd) main_comp_mode_pane

0x7a2d,	// (0x00018ab2) list_ai3_gene_pane_ParamLimits

0xdae9,	// (0x0001eb6e) bg_popup_window_pane_cp19_ParamLimits

0x7e64,	// (0x00018ee9) bg_touch_area_indi_pane_ParamLimits

0x7e64,	// (0x00018ee9) bg_touch_area_indi_pane

0x7e7a,	// (0x00018eff) bg_touch_area_indi_pane_cp01_ParamLimits

0x7e7a,	// (0x00018eff) bg_touch_area_indi_pane_cp01

0x7e92,	// (0x00018f17) bg_touch_area_indi_pane_cp02_ParamLimits

0x7e92,	// (0x00018f17) bg_touch_area_indi_pane_cp02

0x7ecd,	// (0x00018f52) bg_touch_area_indi_pane_cp03_ParamLimits

0x7ecd,	// (0x00018f52) bg_touch_area_indi_pane_cp03

0x7ee7,	// (0x00018f6c) popup_slider_window_g1_ParamLimits

0x7f03,	// (0x00018f88) popup_slider_window_g2_ParamLimits

0x7f1f,	// (0x00018fa4) popup_slider_window_g3_ParamLimits

0xfcfc,	// (0x00020d81) popup_slider_window_g_ParamLimits

0x7f7b,	// (0x00019000) popup_slider_window_t1_ParamLimits

0x7fef,	// (0x00019074) small_volume_slider_vertical_pane_ParamLimits

0xe2a3,	// (0x0001f328) cell_graphic2_pane_ParamLimits

0xe306,	// (0x0001f38b) bg_button_pane_cp10_ParamLimits

0xe306,	// (0x0001f38b) bg_button_pane_cp10

0xe319,	// (0x0001f39e) bg_button_pane_cp11_ParamLimits

0xe319,	// (0x0001f39e) bg_button_pane_cp11

0xe32c,	// (0x0001f3b1) graphic2_pages_pane_g1_ParamLimits

0xe32c,	// (0x0001f3b1) graphic2_pages_pane_g1

0xe347,	// (0x0001f3cc) graphic2_pages_pane_g2_ParamLimits

0xe347,	// (0x0001f3cc) graphic2_pages_pane_g2

0x0001,

0xfdc0,	// (0x00020e45) graphic2_pages_pane_g_ParamLimits

0xfdc0,	// (0x00020e45) graphic2_pages_pane_g

0xe35f,	// (0x0001f3e4) graphic2_pages_pane_t1_ParamLimits

0xe35f,	// (0x0001f3e4) graphic2_pages_pane_t1

0xe377,	// (0x0001f3fc) cell_graphic2_control_pane_ParamLimits

0xe377,	// (0x0001f3fc) cell_graphic2_control_pane

0xe393,	// (0x0001f418) cell_graphic2_pane_g1_ParamLimits

0xe393,	// (0x0001f418) cell_graphic2_pane_g1

0xc6b5,	// (0x0001d73a) cell_graphic2_pane_g2_ParamLimits

0xc6b5,	// (0x0001d73a) cell_graphic2_pane_g2

0xdaa8,	// (0x0001eb2d) cell_graphic2_pane_g3_ParamLimits

0xdaa8,	// (0x0001eb2d) cell_graphic2_pane_g3

0xc6c2,	// (0x0001d747) cell_graphic2_pane_g4_ParamLimits

0xc6c2,	// (0x0001d747) cell_graphic2_pane_g4

0xe3a0,	// (0x0001f425) cell_graphic2_pane_g5_ParamLimits

0xe3a0,	// (0x0001f425) cell_graphic2_pane_g5

0x0004,

0xfdc5,	// (0x00020e4a) cell_graphic2_pane_g_ParamLimits

0xfdc5,	// (0x00020e4a) cell_graphic2_pane_g

0xe3c0,	// (0x0001f445) cell_graphic2_pane_t1_ParamLimits

0xe3c0,	// (0x0001f445) cell_graphic2_pane_t1

0x498e,	// (0x00015a13) grid_highlight_pane_cp11_ParamLimits

0x498e,	// (0x00015a13) grid_highlight_pane_cp11

0x1341,	// (0x000123c6) bg_button_pane_cp05

0xe3f5,	// (0x0001f47a) cell_graphic2_control_pane_g1

0x6526,	// (0x000175ab) bg_touch_area_indi_pane_g1

0x8ab7,	// (0x00019b3c) aid_cmod_rocker_key_size

0x8ac1,	// (0x00019b46) aid_cmode_itu_key_size

0x8acb,	// (0x00019b50) main_cmode_video_pane

0x8ad5,	// (0x00019b5a) main_comp_mode_itu_pane

0x8ae1,	// (0x00019b66) main_comp_mode_rocker_pane

0x8aed,	// (0x00019b72) cell_cmode_rocker_pane_ParamLimits

0x8aed,	// (0x00019b72) cell_cmode_rocker_pane

0x8b01,	// (0x00019b86) cell_cmode_itu_pane_ParamLimits

0x8b01,	// (0x00019b86) cell_cmode_itu_pane

0x1ed9,	// (0x00012f5e) bg_button_pane_cp06_ParamLimits

0x1ed9,	// (0x00012f5e) bg_button_pane_cp06

0x67b0,	// (0x00017835) cell_cmode_rocker_pane_g1_ParamLimits

0x67b0,	// (0x00017835) cell_cmode_rocker_pane_g1

0x8096,	// (0x0001911b) cell_cmode_rocker_pane_g2_ParamLimits

0x8096,	// (0x0001911b) cell_cmode_rocker_pane_g2

0x0001,

0xfdd5,	// (0x00020e5a) cell_cmode_rocker_pane_g_ParamLimits

0xfdd5,	// (0x00020e5a) cell_cmode_rocker_pane_g

0xea78,	// (0x0001fafd) bg_button_pane_cp07

0x8b18,	// (0x00019b9d) cell_cmode_itu_pane_g1

0x8b21,	// (0x00019ba6) cell_cmode_itu_pane_t1

0x8b2f,	// (0x00019bb4) cell_cmode_itu_pane_t2

0x0001,

0xfdda,	// (0x00020e5f) cell_cmode_itu_pane_t

0x82c4,	// (0x00019349) aid_touch_ctrl_left

0x82cc,	// (0x00019351) aid_touch_ctrl_right

0xea78,	// (0x0001fafd) compa_mode_pane

0xe41d,	// (0x0001f4a2) aid_cmod_rocker_key_size_cp

0xe427,	// (0x0001f4ac) aid_cmode_itu_key_size_cp

0x8b51,	// (0x00019bd6) compa_mode_pane_g1

0x8b59,	// (0x00019bde) compa_mode_pane_g2

0x8b61,	// (0x00019be6) compa_mode_pane_g3

0x0002,

0xfddf,	// (0x00020e64) compa_mode_pane_g

0xe431,	// (0x0001f4b6) main_comp_mode_itu_pane_cp

0xe439,	// (0x0001f4be) main_comp_mode_rocker_pane_cp

0xe441,	// (0x0001f4c6) cell_cmode_itu_pane_cp_ParamLimits

0xe441,	// (0x0001f4c6) cell_cmode_itu_pane_cp

0xe456,	// (0x0001f4db) cell_cmode_rocker_pane_cp_ParamLimits

0xe456,	// (0x0001f4db) cell_cmode_rocker_pane_cp

0x1ed9,	// (0x00012f5e) bg_button_pane_cp06_cp_ParamLimits

0x1ed9,	// (0x00012f5e) bg_button_pane_cp06_cp

0x67b0,	// (0x00017835) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x67b0,	// (0x00017835) cell_cmode_rocker_pane_g1_cp

0x6526,	// (0x000175ab) cell_cmode_rocker_pane_g2_cp

0xea78,	// (0x0001fafd) bg_button_pane_cp07_cp

0xe468,	// (0x0001f4ed) cell_cmode_itu_pane_g1_cp

0xe471,	// (0x0001f4f6) cell_cmode_itu_pane_t1_cp

0xe471,	// (0x0001f4f6) cell_cmode_itu_pane_t2_cp

0xce7e,	// (0x0001df03) settings_code_pane_cp2

0x109d,	// (0x00012122) bg_popup_window_pane_cp3_ParamLimits

0x152f,	// (0x000125b4) heading_pane_cp3_ParamLimits

0x153b,	// (0x000125c0) listscroll_popup_graphic_pane_ParamLimits

0x02da,	// (0x0001135f) fep_hwr_aid_pane_ParamLimits

0x076d,	// (0x000117f2) aid_touch_sctrl_top_ParamLimits

0x0788,	// (0x0001180d) sctrl_sk_top_pane_g1_ParamLimits

0x0547,	// (0x000115cc) sctrl_sk_top_pane_g2_ParamLimits

0xfd15,	// (0x00020d9a) sctrl_sk_top_pane_g_ParamLimits

0x0795,	// (0x0001181a) sctrl_sk_top_pane_t1_ParamLimits

0x076d,	// (0x000117f2) aid_touch_sctrl_bottom_ParamLimits

0x0795,	// (0x0001181a) sctrl_sk_bottom_pane_t1_ParamLimits

0x820a,	// (0x0001928f) aid_area_touch_clock

0xae64,	// (0x0001bee9) aid_vkb2_area_top_pane_cell_ParamLimits

0xae64,	// (0x0001bee9) aid_vkb2_area_top_pane_cell

0xaf0f,	// (0x0001bf94) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xaf0f,	// (0x0001bf94) aid_vkb2_area_bottom_pane_cell

0x8773,	// (0x000197f8) popup_char_count_window

0x8bb7,	// (0x00019c3c) popup_char_count_window_g1

0x8bc0,	// (0x00019c45) popup_char_count_window_g2

0x8bc9,	// (0x00019c4e) popup_char_count_window_g3

0x0002,

0xfde6,	// (0x00020e6b) popup_char_count_window_g

0x8bd2,	// (0x00019c57) popup_char_count_window_t1

0x0842,	// (0x000118c7) popup_fep_char_preview_window_ParamLimits

0x0842,	// (0x000118c7) popup_fep_char_preview_window

0xae84,	// (0x0001bf09) vkb2_top_candi_pane_ParamLimits

0xae84,	// (0x0001bf09) vkb2_top_candi_pane

0xe47f,	// (0x0001f504) cell_vkb2_top_candi_pane_ParamLimits

0xe47f,	// (0x0001f504) cell_vkb2_top_candi_pane

0x0db9,	// (0x00011e3e) bg_popup_fep_char_preview_window_ParamLimits

0x0db9,	// (0x00011e3e) bg_popup_fep_char_preview_window

0x0dc7,	// (0x00011e4c) popup_fep_char_preview_window_t1_ParamLimits

0x0dc7,	// (0x00011e4c) popup_fep_char_preview_window_t1

0x8c31,	// (0x00019cb6) bg_popup_fep_char_preview_window_g1

0x8c39,	// (0x00019cbe) bg_popup_fep_char_preview_window_g2

0x8c41,	// (0x00019cc6) bg_popup_fep_char_preview_window_g3

0x8c49,	// (0x00019cce) bg_popup_fep_char_preview_window_g4

0x8c51,	// (0x00019cd6) bg_popup_fep_char_preview_window_g5

0x0e01,	// (0x00011e86) bg_popup_fep_char_preview_window_g6

0x8c59,	// (0x00019cde) bg_popup_fep_char_preview_window_g7

0x8c61,	// (0x00019ce6) bg_popup_fep_char_preview_window_g8

0x8c69,	// (0x00019cee) bg_popup_fep_char_preview_window_g9

0x0008,

0xfded,	// (0x00020e72) bg_popup_fep_char_preview_window_g

0x0547,	// (0x000115cc) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0547,	// (0x000115cc) cell_vkb2_top_candi_pane_g1

0x0555,	// (0x000115da) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0555,	// (0x000115da) cell_vkb2_top_candi_pane_g2

0x7eac,	// (0x00018f31) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7eac,	// (0x00018f31) cell_vkb2_top_candi_pane_g3

0x0e09,	// (0x00011e8e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x0e09,	// (0x00011e8e) cell_vkb2_top_candi_pane_g4

0x6e74,	// (0x00017ef9) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6e74,	// (0x00017ef9) cell_vkb2_top_candi_pane_g5

0x0e2a,	// (0x00011eaf) cell_vkb2_top_candi_pane_g6_ParamLimits

0x0e2a,	// (0x00011eaf) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe00,	// (0x00020e85) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe00,	// (0x00020e85) cell_vkb2_top_candi_pane_g

0x0e38,	// (0x00011ebd) cell_vkb2_top_candi_pane_t1

0x013a,	// (0x000111bf) aid_size_touch_slider_mark_ParamLimits

0x013a,	// (0x000111bf) aid_size_touch_slider_mark

0xe1b4,	// (0x0001f239) grid_graphic2_catg_pane_ParamLimits

0xe1b4,	// (0x0001f239) grid_graphic2_catg_pane

0xe272,	// (0x0001f2f7) popup_grid_graphic2_window_t1_ParamLimits

0xe272,	// (0x0001f2f7) popup_grid_graphic2_window_t1

0xe288,	// (0x0001f30d) popup_grid_graphic2_window_t2_ParamLimits

0xe288,	// (0x0001f30d) popup_grid_graphic2_window_t2

0x0001,

0xfdbb,	// (0x00020e40) popup_grid_graphic2_window_t_ParamLimits

0xfdbb,	// (0x00020e40) popup_grid_graphic2_window_t

0x1341,	// (0x000123c6) bg_button_pane_cp05_ParamLimits

0xe3f5,	// (0x0001f47a) cell_graphic2_control_pane_g1_ParamLimits

0xe4d3,	// (0x0001f558) cell_graphic2_catg_pane_ParamLimits

0xe4d3,	// (0x0001f558) cell_graphic2_catg_pane

0xea78,	// (0x0001fafd) bg_button_pane_cp12

0xe4e5,	// (0x0001f56a) cell_graphic2_catg_pane_g1

0x81d6,	// (0x0001925b) cell_tb_ext_pane_t1_ParamLimits

0x0bd5,	// (0x00011c5a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x0bd5,	// (0x00011c5a) vkb2_top_cell_right_narrow_pane

0x0bed,	// (0x00011c72) vkb2_top_cell_right_wide_pane_ParamLimits

0x0bed,	// (0x00011c72) vkb2_top_cell_right_wide_pane

0x02cc,	// (0x00011351) bg_vkb2_func_pane_ParamLimits

0x02cc,	// (0x00011351) bg_vkb2_func_pane

0x0c5e,	// (0x00011ce3) vkb2_top_cell_left_pane_g1_ParamLimits

0x02cc,	// (0x00011351) bg_vkb2_fuc_pane_cp03_ParamLimits

0x02cc,	// (0x00011351) bg_vkb2_fuc_pane_cp03

0x0cd2,	// (0x00011d57) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3c59,	// (0x00014cde) bg_vkb2_func_pane_g1

0x3c61,	// (0x00014ce6) bg_vkb2_func_pane_g2

0x3c71,	// (0x00014cf6) bg_vkb2_func_pane_g3

0x3c69,	// (0x00014cee) bg_vkb2_func_pane_g4

0x3c79,	// (0x00014cfe) bg_vkb2_func_pane_g5

0x3c81,	// (0x00014d06) bg_vkb2_func_pane_g6

0x3c89,	// (0x00014d0e) bg_vkb2_func_pane_g7

0x3c91,	// (0x00014d16) bg_vkb2_func_pane_g8

0x3c51,	// (0x00014cd6) bg_vkb2_func_pane_g9

0x0008,

0xfe0d,	// (0x00020e92) bg_vkb2_func_pane_g

0x02cc,	// (0x00011351) bg_vkb2_fuc_pane_cp01_ParamLimits

0x02cc,	// (0x00011351) bg_vkb2_fuc_pane_cp01

0x0c5e,	// (0x00011ce3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x0c5e,	// (0x00011ce3) vkb2_top_cell_right_wide_pane_g1

0x02cc,	// (0x00011351) bg_vkb2_fuc_pane_cp02_ParamLimits

0x02cc,	// (0x00011351) bg_vkb2_fuc_pane_cp02

0x0cd2,	// (0x00011d57) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x0cd2,	// (0x00011d57) vkb2_top_cell_right_narrow_pane_g1

0xda16,	// (0x0001ea9b) aid_touch_area_decrease_ParamLimits

0xda16,	// (0x0001ea9b) aid_touch_area_decrease

0xda50,	// (0x0001ead5) aid_touch_area_increase_ParamLimits

0xda50,	// (0x0001ead5) aid_touch_area_increase

0xda78,	// (0x0001eafd) aid_touch_area_mute_ParamLimits

0xda78,	// (0x0001eafd) aid_touch_area_mute

0xdab5,	// (0x0001eb3a) aid_touch_area_slider_ParamLimits

0xdab5,	// (0x0001eb3a) aid_touch_area_slider

0xdaf5,	// (0x0001eb7a) popup_slider_window_g4_ParamLimits

0xdaf5,	// (0x0001eb7a) popup_slider_window_g4

0xdb1d,	// (0x0001eba2) popup_slider_window_g5_ParamLimits

0xdb1d,	// (0x0001eba2) popup_slider_window_g5

0xdb51,	// (0x0001ebd6) popup_slider_window_g6_ParamLimits

0xdb51,	// (0x0001ebd6) popup_slider_window_g6

0x7fa9,	// (0x0001902e) popup_slider_window_t2_ParamLimits

0x7fa9,	// (0x0001902e) popup_slider_window_t2

0x0001,

0xfd09,	// (0x00020d8e) popup_slider_window_t_ParamLimits

0xfd09,	// (0x00020d8e) popup_slider_window_t

0xdb6d,	// (0x0001ebf2) slider_pane_ParamLimits

0xdb6d,	// (0x0001ebf2) slider_pane

0x8c8c,	// (0x00019d11) slider_pane_g1_ParamLimits

0x8c8c,	// (0x00019d11) slider_pane_g1

0x8ca0,	// (0x00019d25) slider_pane_g2_ParamLimits

0x8ca0,	// (0x00019d25) slider_pane_g2

0x8cb6,	// (0x00019d3b) slider_pane_g3_ParamLimits

0x8cb6,	// (0x00019d3b) slider_pane_g3

0x0003,

0xfe20,	// (0x00020ea5) slider_pane_g_ParamLimits

0xfe20,	// (0x00020ea5) slider_pane_g

0xc535,	// (0x0001d5ba) popup_tb_float_extension_window_ParamLimits

0xc535,	// (0x0001d5ba) popup_tb_float_extension_window

0x8ce2,	// (0x00019d67) aid_size_cell_tb_float_ext

0xea78,	// (0x0001fafd) bg_popup_sub_window_cp28

0x8cee,	// (0x00019d73) grid_tb_float_ext_pane

0x8cfa,	// (0x00019d7f) cell_tb_float_ext_pane_ParamLimits

0x8cfa,	// (0x00019d7f) cell_tb_float_ext_pane

0x8d16,	// (0x00019d9b) cell_tb_float_ext_pane_g1

0x8d1f,	// (0x00019da4) grid_highlight_pane_cp12

0xac65,	// (0x0001bcea) cell_last_hwr_side_pane_ParamLimits

0xac65,	// (0x0001bcea) cell_last_hwr_side_pane

0x6526,	// (0x000175ab) cell_last_hwr_side_pane_g1

0x8d28,	// (0x00019dad) cell_last_hwr_side_pane_g2

0x0001,

0xfe29,	// (0x00020eae) cell_last_hwr_side_pane_g

0xafeb,	// (0x0001c070) vkb2_area_bottom_space_btn_pane_ParamLimits

0xafeb,	// (0x0001c070) vkb2_area_bottom_space_btn_pane

0x0547,	// (0x000115cc) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x87e6,	// (0x0001986b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x0e38,	// (0x00011ebd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x0e56,	// (0x00011edb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x0e56,	// (0x00011edb) vkb2_area_bottom_space_btn_pane_g1

0x0e90,	// (0x00011f15) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x0e90,	// (0x00011f15) vkb2_area_bottom_space_btn_pane_g2

0x0ec6,	// (0x00011f4b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x0ec6,	// (0x00011f4b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2e,	// (0x00020eb3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2e,	// (0x00020eb3) vkb2_area_bottom_space_btn_pane_g

0x0391,	// (0x00011416) cel_fep_hwr_func_pane_ParamLimits

0x0391,	// (0x00011416) cel_fep_hwr_func_pane

0xac3a,	// (0x0001bcbf) cell_hwr_side_button_pane_ParamLimits

0xac3a,	// (0x0001bcbf) cell_hwr_side_button_pane

0x820a,	// (0x0001928f) aid_area_touch_clock_ParamLimits

0x1341,	// (0x000123c6) bg_uniindi_top_pane_ParamLimits

0x821e,	// (0x000192a3) uniindi_top_pane_g1_ParamLimits

0x8234,	// (0x000192b9) uniindi_top_pane_g2_ParamLimits

0x8240,	// (0x000192c5) uniindi_top_pane_g3_ParamLimits

0x8251,	// (0x000192d6) uniindi_top_pane_g4_ParamLimits

0xfd41,	// (0x00020dc6) uniindi_top_pane_g_ParamLimits

0x825e,	// (0x000192e3) uniindi_top_pane_t1_ParamLimits

0x1341,	// (0x000123c6) bg_vkb2_func_pane_cp01_ParamLimits

0x1341,	// (0x000123c6) bg_vkb2_func_pane_cp01

0x8d31,	// (0x00019db6) cel_fep_hwr_func_pane_g1_ParamLimits

0x8d31,	// (0x00019db6) cel_fep_hwr_func_pane_g1

0x1341,	// (0x000123c6) bg_vkb2_func_pane_cp02_ParamLimits

0x1341,	// (0x000123c6) bg_vkb2_func_pane_cp02

0x8d31,	// (0x00019db6) cell_hwr_side_button_pane_g1_ParamLimits

0x8d31,	// (0x00019db6) cell_hwr_side_button_pane_g1

0x3aa4,	// (0x00014b29) status_pane_g4_ParamLimits

0x3aa4,	// (0x00014b29) status_pane_g4

0x3abe,	// (0x00014b43) status_pane_t1

0x6320,	// (0x000173a5) form2_midp_gauge_slider_cont_pane

0x6328,	// (0x000173ad) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd211,	// (0x0001e296) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd223,	// (0x0001e2a8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb01,	// (0x00020b86) form2_midp_gauge_slider_pane_t_ParamLimits

0x635e,	// (0x000173e3) form2_midp_slider_pane_ParamLimits

0x080a,	// (0x0001188f) aid_size_cell_func_vkb2_ParamLimits

0x080a,	// (0x0001188f) aid_size_cell_func_vkb2

0x8cce,	// (0x00019d53) slider_pane_g4_ParamLimits

0x8cce,	// (0x00019d53) slider_pane_g4

0xb04c,	// (0x0001c0d1) form2_midp_gauge_slider_pane_t2_cp01

0xb05a,	// (0x0001c0df) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb05a,	// (0x0001c0df) form2_midp_gauge_slider_pane_t3_cp01

0x0f3b,	// (0x00011fc0) form2_midp_slider_pane_cp01

0xea78,	// (0x0001fafd) navi_smil_pane

0x8d6a,	// (0x00019def) navi_smil_pane_g1

0x8d72,	// (0x00019df7) navi_smil_pane_t1

0x8d3f,	// (0x00019dc4) form2_midp_slider_pane_g1

0x8d48,	// (0x00019dcd) form2_midp_slider_pane_g2

0x8d50,	// (0x00019dd5) form2_midp_slider_pane_g3

0x8d3f,	// (0x00019dc4) form2_midp_slider_pane_g4

0xe4ee,	// (0x0001f573) form2_midp_slider_pane_g5

0x0004,

0xfe37,	// (0x00020ebc) form2_midp_slider_pane_g

0x0f00,	// (0x00011f85) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x0f00,	// (0x00011f85) vkb2_area_bottom_space_btn_pane_g4

0xc742,	// (0x0001d7c7) lc0_navi_pane_ParamLimits

0xc742,	// (0x0001d7c7) lc0_navi_pane

0xc7b2,	// (0x0001d837) lc0_stat_indi_pane_ParamLimits

0xc7b2,	// (0x0001d837) lc0_stat_indi_pane

0xc7c7,	// (0x0001d84c) ls0_title_pane_ParamLimits

0xc7c7,	// (0x0001d84c) ls0_title_pane

0x1ed9,	// (0x00012f5e) bg_popup_sub_pane_cp14_ParamLimits

0x81f1,	// (0x00019276) list_uniindi_pane_ParamLimits

0x81fd,	// (0x00019282) uniindi_top_pane_ParamLimits

0x829c,	// (0x00019321) list_single_uniindi_pane_g1_ParamLimits

0x82af,	// (0x00019334) list_single_uniindi_pane_t1_ParamLimits

0xb077,	// (0x0001c0fc) lc0_stat_clock_pane_ParamLimits

0xb077,	// (0x0001c0fc) lc0_stat_clock_pane

0xe4f7,	// (0x0001f57c) lc0_stat_indi_pane_g1_ParamLimits

0xe4f7,	// (0x0001f57c) lc0_stat_indi_pane_g1

0xe504,	// (0x0001f589) lc0_stat_indi_pane_g2_ParamLimits

0xe504,	// (0x0001f589) lc0_stat_indi_pane_g2

0x0001,

0xfe42,	// (0x00020ec7) lc0_stat_indi_pane_g_ParamLimits

0xfe42,	// (0x00020ec7) lc0_stat_indi_pane_g

0xb084,	// (0x0001c109) lc0_uni_indicator_pane_ParamLimits

0xb084,	// (0x0001c109) lc0_uni_indicator_pane

0xe511,	// (0x0001f596) ls0_title_pane_g1_ParamLimits

0xe511,	// (0x0001f596) ls0_title_pane_g1

0xe525,	// (0x0001f5aa) ls0_title_pane_t1_ParamLimits

0xe525,	// (0x0001f5aa) ls0_title_pane_t1

0xb091,	// (0x0001c116) lc0_uni_indicator_pane_g1_ParamLimits

0xb091,	// (0x0001c116) lc0_uni_indicator_pane_g1

0x8de4,	// (0x00019e69) lc0_stat_clock_pane_t1

0xea78,	// (0x0001fafd) main_ai5_pane

0x8df2,	// (0x00019e77) ai5_sk_pane_ParamLimits

0x8df2,	// (0x00019e77) ai5_sk_pane

0xe553,	// (0x0001f5d8) cell_ai5_widget_pane_ParamLimits

0xe553,	// (0x0001f5d8) cell_ai5_widget_pane

0x8e75,	// (0x00019efa) aid_size_cell_widget_grid

0x8e89,	// (0x00019f0e) bg_ai5_widget_pane_ParamLimits

0x8e89,	// (0x00019f0e) bg_ai5_widget_pane

0xe5e0,	// (0x0001f665) cell_ai5_widget_pane_g2

0xe5f0,	// (0x0001f675) cell_ai5_widget_pane_g3

0xe60f,	// (0x0001f694) cell_ai5_widget_pane_g4

0xe61b,	// (0x0001f6a0) cell_ai5_widget_pane_g5

0xe627,	// (0x0001f6ac) cell_ai5_widget_pane_g6

0xe633,	// (0x0001f6b8) cell_ai5_widget_pane_g7

0xe67b,	// (0x0001f700) cell_ai5_widget_pane_t1_ParamLimits

0xe67b,	// (0x0001f700) cell_ai5_widget_pane_t1

0xe698,	// (0x0001f71d) cell_ai5_widget_pane_t2_ParamLimits

0xe698,	// (0x0001f71d) cell_ai5_widget_pane_t2

0xe6b0,	// (0x0001f735) cell_ai5_widget_pane_t3_ParamLimits

0xe6b0,	// (0x0001f735) cell_ai5_widget_pane_t3

0xe6c8,	// (0x0001f74d) cell_ai5_widget_pane_t4_ParamLimits

0xe6c8,	// (0x0001f74d) cell_ai5_widget_pane_t4

0xe6e2,	// (0x0001f767) cell_ai5_widget_pane_t5_ParamLimits

0xe6e2,	// (0x0001f767) cell_ai5_widget_pane_t5

0x8fd4,	// (0x0001a059) cell_ai5_widget_pane_t6_ParamLimits

0x8fd4,	// (0x0001a059) cell_ai5_widget_pane_t6

0x8fe6,	// (0x0001a06b) cell_ai5_widget_pane_t7_ParamLimits

0x8fe6,	// (0x0001a06b) cell_ai5_widget_pane_t7

0xe701,	// (0x0001f786) cell_ai5_widget_pane_t8_ParamLimits

0xe701,	// (0x0001f786) cell_ai5_widget_pane_t8

0x0009,

0xfe5c,	// (0x00020ee1) cell_ai5_widget_pane_t_ParamLimits

0xfe5c,	// (0x00020ee1) cell_ai5_widget_pane_t

0xe74d,	// (0x0001f7d2) grid_ai5_widget_pane

0x1ed9,	// (0x00012f5e) highlight_cell_ai5_widget_pane_ParamLimits

0x1ed9,	// (0x00012f5e) highlight_cell_ai5_widget_pane

0xe764,	// (0x0001f7e9) ai5_sk_left_pane

0xe76e,	// (0x0001f7f3) ai5_sk_middle_pane

0xe778,	// (0x0001f7fd) ai5_sk_right_pane

0x9080,	// (0x0001a105) bg_ai5_widget_pane_g1_ParamLimits

0x9080,	// (0x0001a105) bg_ai5_widget_pane_g1

0x908c,	// (0x0001a111) bg_ai5_widget_pane_g2_ParamLimits

0x908c,	// (0x0001a111) bg_ai5_widget_pane_g2

0x9098,	// (0x0001a11d) bg_ai5_widget_pane_g3_ParamLimits

0x9098,	// (0x0001a11d) bg_ai5_widget_pane_g3

0x90a4,	// (0x0001a129) bg_ai5_widget_pane_g4_ParamLimits

0x90a4,	// (0x0001a129) bg_ai5_widget_pane_g4

0x90b0,	// (0x0001a135) bg_ai5_widget_pane_g5_ParamLimits

0x90b0,	// (0x0001a135) bg_ai5_widget_pane_g5

0x90bc,	// (0x0001a141) bg_ai5_widget_pane_g6_ParamLimits

0x90bc,	// (0x0001a141) bg_ai5_widget_pane_g6

0x90c8,	// (0x0001a14d) bg_ai5_widget_pane_g7_ParamLimits

0x90c8,	// (0x0001a14d) bg_ai5_widget_pane_g7

0x90d4,	// (0x0001a159) bg_ai5_widget_pane_g8_ParamLimits

0x90d4,	// (0x0001a159) bg_ai5_widget_pane_g8

0x90e0,	// (0x0001a165) bg_ai5_widget_pane_g9_ParamLimits

0x90e0,	// (0x0001a165) bg_ai5_widget_pane_g9

0x0008,

0xfe71,	// (0x00020ef6) bg_ai5_widget_pane_g_ParamLimits

0xfe71,	// (0x00020ef6) bg_ai5_widget_pane_g

0x9107,	// (0x0001a18c) cell_shortcut_ai5_widget_pane_ParamLimits

0x9107,	// (0x0001a18c) cell_shortcut_ai5_widget_pane

0x1183,	// (0x00012208) bg_cell_shortcut_ai5_widget_pane

0x9119,	// (0x0001a19e) cell_grid_ai5_widget_pane_g1

0x9122,	// (0x0001a1a7) highlight_cell_shortcut_ai5_widget_pane

0x3c59,	// (0x00014cde) ai5_sk_left_pane_g1

0x912a,	// (0x0001a1af) ai5_sk_left_pane_g2

0x9132,	// (0x0001a1b7) ai5_sk_left_pane_g3

0x913a,	// (0x0001a1bf) ai5_sk_left_pane_g4

0x0003,

0xfe84,	// (0x00020f09) ai5_sk_left_pane_g

0x9142,	// (0x0001a1c7) ai5_sk_left_pane_t1

0x3c61,	// (0x00014ce6) ai5_sk_right_pane_g1

0x9150,	// (0x0001a1d5) ai5_sk_right_pane_g2

0x9158,	// (0x0001a1dd) ai5_sk_right_pane_g3

0x9160,	// (0x0001a1e5) ai5_sk_right_pane_g4

0x0003,

0xfe8d,	// (0x00020f12) ai5_sk_right_pane_g

0x9168,	// (0x0001a1ed) ai5_sk_right_pane_t1

0x3c61,	// (0x00014ce6) ai5_sk_middle_pane_g1

0x3c59,	// (0x00014cde) ai5_sk_middle_pane_g2

0x3c79,	// (0x00014cfe) ai5_sk_middle_pane_g3

0x9158,	// (0x0001a1dd) ai5_sk_middle_pane_g4

0x9132,	// (0x0001a1b7) ai5_sk_middle_pane_g5

0x9176,	// (0x0001a1fb) ai5_sk_middle_pane_g6

0xe79d,	// (0x0001f822) ai5_sk_middle_pane_g7

0x0006,

0xfe96,	// (0x00020f1b) ai5_sk_middle_pane_g

0xc606,	// (0x0001d68b) aid_touch_area_size_lc0_ParamLimits

0xc606,	// (0x0001d68b) aid_touch_area_size_lc0

0x0576,	// (0x000115fb) cell_hwr_candidate_pane_t1_ParamLimits

0x375b,	// (0x000147e0) aid_touch_navi_pane

0xc8d2,	// (0x0001d957) status_dt_navi_pane_ParamLimits

0xc8d2,	// (0x0001d957) status_dt_navi_pane

0xc8ea,	// (0x0001d96f) status_dt_sta_pane_ParamLimits

0xc8ea,	// (0x0001d96f) status_dt_sta_pane

0xe7a5,	// (0x0001f82a) dt_sta_controll_pane

0xe7b2,	// (0x0001f837) dt_sta_indi_pane

0xe7bf,	// (0x0001f844) dt_sta_title_pane

0x1341,	// (0x000123c6) bg_dt_sta_indi_pane_ParamLimits

0x1341,	// (0x000123c6) bg_dt_sta_indi_pane

0xe7d1,	// (0x0001f856) dt_sta_battery_pane

0xe7d9,	// (0x0001f85e) dt_sta_indi_pane_g1

0xe7e2,	// (0x0001f867) dt_sta_indi_pane_g2

0xe7eb,	// (0x0001f870) dt_sta_indi_pane_g3

0x0002,

0xfea5,	// (0x00020f2a) dt_sta_indi_pane_g

0xe7f4,	// (0x0001f879) dt_sta_signal_pane

0x1ed9,	// (0x00012f5e) bg_dt_sta_title_pane_ParamLimits

0x1ed9,	// (0x00012f5e) bg_dt_sta_title_pane

0xe7fd,	// (0x0001f882) dt_sta_title_pane_g1

0xe805,	// (0x0001f88a) dt_sta_title_pane_t1_ParamLimits

0xe805,	// (0x0001f88a) dt_sta_title_pane_t1

0xea78,	// (0x0001fafd) bg_dt_sta_control_pane

0xe81a,	// (0x0001f89f) dt_sta_controll_pane_g1

0xe823,	// (0x0001f8a8) bg_dt_sta_title_pane_g1

0xe82c,	// (0x0001f8b1) bg_dt_sta_title_pane_g2

0xe835,	// (0x0001f8ba) bg_dt_sta_title_pane_g3

0x0002,

0xfeac,	// (0x00020f31) bg_dt_sta_title_pane_g

0x6526,	// (0x000175ab) bg_dt_sta_indi_pane_g1

0x9224,	// (0x0001a2a9) dt_sta_signal_pane_g1

0x922c,	// (0x0001a2b1) dt_sta_signal_pane_g2

0x0001,

0xfeb3,	// (0x00020f38) dt_sta_signal_pane_g

0x9234,	// (0x0001a2b9) dt_sta_battery_pane_g1

0x923d,	// (0x0001a2c2) dt_sta_battery_pane_t1

0x6526,	// (0x000175ab) bg_dt_sta_control_pane_g1

0x27c2,	// (0x00013847) fep_china_uni_eep_pane

0x27ca,	// (0x0001384f) fep_china_uni_entry_pane_ParamLimits

0x27da,	// (0x0001385f) popup_fep_china_uni_window_g1_ParamLimits

0x27ea,	// (0x0001386f) popup_fep_china_uni_window_g2_ParamLimits

0x27ea,	// (0x0001386f) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x000207b5) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x000207b5) popup_fep_china_uni_window_g

0x924c,	// (0x0001a2d1) fep_china_uni_eep_pane_g1

0x9254,	// (0x0001a2d9) fep_china_uni_eep_pane_t1

0x8d61,	// (0x00019de6) aid_touch_area_size_smil_player

0x38b3,	// (0x00014938) lc0_clock_pane

0x3ab2,	// (0x00014b37) status_pane_g5_ParamLimits

0x3ab2,	// (0x00014b37) status_pane_g5

0xc05f,	// (0x0001d0e4) popup_keymap_window

0x3a70,	// (0x00014af5) status_icon_pane

0xe5f0,	// (0x0001f675) cell_ai5_widget_pane_g3_ParamLimits

0xe60f,	// (0x0001f694) cell_ai5_widget_pane_g4_ParamLimits

0xe61b,	// (0x0001f6a0) cell_ai5_widget_pane_g5_ParamLimits

0xe63f,	// (0x0001f6c4) cell_ai5_widget_pane_g8_ParamLimits

0xe63f,	// (0x0001f6c4) cell_ai5_widget_pane_g8

0xe653,	// (0x0001f6d8) cell_ai5_widget_pane_g9_ParamLimits

0xe653,	// (0x0001f6d8) cell_ai5_widget_pane_g9

0xe667,	// (0x0001f6ec) cell_ai5_widget_pane_g10_ParamLimits

0xe667,	// (0x0001f6ec) cell_ai5_widget_pane_g10

0x9263,	// (0x0001a2e8) status_icon_pane_g1

0xea78,	// (0x0001fafd) bg_popup_sub_pane_cp13

0x926b,	// (0x0001a2f0) popup_keymap_window_t1

0xbe41,	// (0x0001cec6) control_pane_g6_ParamLimits

0xbe41,	// (0x0001cec6) control_pane_g6

0xbe4e,	// (0x0001ced3) control_pane_g7_ParamLimits

0xbe4e,	// (0x0001ced3) control_pane_g7

0xbe5b,	// (0x0001cee0) control_pane_g8_ParamLimits

0xbe5b,	// (0x0001cee0) control_pane_g8

0xe7a5,	// (0x0001f82a) dt_sta_controll_pane_ParamLimits

0xe7b2,	// (0x0001f837) dt_sta_indi_pane_ParamLimits

0xe7bf,	// (0x0001f844) dt_sta_title_pane_ParamLimits

0x1876,	// (0x000128fb) aid_size_touch_scroll_bar_cale

0xedf8,	// (0x0001fe7d) popup_discreet_window_ParamLimits

0xedf8,	// (0x0001fe7d) popup_discreet_window

0xa882,	// (0x0001b907) popup_sk_window

0x4317,	// (0x0001539c) bg_popup_sub_pane_cp28_ParamLimits

0x4317,	// (0x0001539c) bg_popup_sub_pane_cp28

0x9279,	// (0x0001a2fe) popup_discreet_window_g1_ParamLimits

0x9279,	// (0x0001a2fe) popup_discreet_window_g1

0x9299,	// (0x0001a31e) popup_discreet_window_t1_ParamLimits

0x9299,	// (0x0001a31e) popup_discreet_window_t1

0x92b7,	// (0x0001a33c) popup_discreet_window_t2_ParamLimits

0x92b7,	// (0x0001a33c) popup_discreet_window_t2

0x0002,

0xfeb8,	// (0x00020f3d) popup_discreet_window_t_ParamLimits

0xfeb8,	// (0x00020f3d) popup_discreet_window_t

0x0f71,	// (0x00011ff6) popup_sk_window_g1

0x0f7b,	// (0x00012000) popup_sk_window_g2

0x0001,

0xfebf,	// (0x00020f44) popup_sk_window_g

0x9309,	// (0x0001a38e) popup_sk_window_t1

0x9317,	// (0x0001a39c) popup_sk_window_t1_copy1

0xe5e0,	// (0x0001f665) cell_ai5_widget_pane_g2_ParamLimits

0xe713,	// (0x0001f798) cell_ai5_widget_pane_t9_ParamLimits

0xe713,	// (0x0001f798) cell_ai5_widget_pane_t9

0xea78,	// (0x0001fafd) main_fep_fshwr2_pane

0xe83e,	// (0x0001f8c3) aid_fshwr2_btn_pane

0xe846,	// (0x0001f8cb) aid_fshwr2_syb_pane

0xe84e,	// (0x0001f8d3) aid_fshwr2_txt_pane

0xe856,	// (0x0001f8db) fshwr2_func_candi_pane

0xe860,	// (0x0001f8e5) fshwr2_hwr_syb_pane

0xe86c,	// (0x0001f8f1) fshwr2_icf_pane

0xea78,	// (0x0001fafd) fshwr2_icf_bg_pane

0xe876,	// (0x0001f8fb) fshwr2_icf_pane_t1_ParamLimits

0xe876,	// (0x0001f8fb) fshwr2_icf_pane_t1

0x6526,	// (0x000175ab) fshwr2_func_candi_pane_g1

0x938a,	// (0x0001a40f) fshwr2_func_candi_row_pane_ParamLimits

0x938a,	// (0x0001a40f) fshwr2_func_candi_row_pane

0xe88e,	// (0x0001f913) cell_fshwr2_syb_pane_ParamLimits

0xe88e,	// (0x0001f913) cell_fshwr2_syb_pane

0x67b0,	// (0x00017835) fshwr2_hwr_syb_pane_g1_ParamLimits

0x67b0,	// (0x00017835) fshwr2_hwr_syb_pane_g1

0xea78,	// (0x0001fafd) bg_popup_call_pane_cp01

0x93b5,	// (0x0001a43a) fshwr2_func_candi_cell_pane_ParamLimits

0x93b5,	// (0x0001a43a) fshwr2_func_candi_cell_pane

0x93e7,	// (0x0001a46c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x93e7,	// (0x0001a46c) fshwr2_func_candi_cell_bg_pane

0x9401,	// (0x0001a486) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9401,	// (0x0001a486) fshwr2_func_candi_cell_pane_g1

0x9421,	// (0x0001a4a6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9421,	// (0x0001a4a6) fshwr2_func_candi_cell_pane_t1

0xea78,	// (0x0001fafd) bg_button_pane_cp08

0x2d50,	// (0x00013dd5) cell_fshwr2_syb_bg_pane

0xe8a7,	// (0x0001f92c) cell_fshwr2_syb_bg_pane_g1

0xe8af,	// (0x0001f934) cell_fshwr2_syb_bg_pane_t1

0x1ed9,	// (0x00012f5e) main_tmo_pane

0xcc42,	// (0x0001dcc7) uni_indicator_pane_g1_ParamLimits

0xcc57,	// (0x0001dcdc) uni_indicator_pane_g2_ParamLimits

0xcc6c,	// (0x0001dcf1) uni_indicator_pane_g3_ParamLimits

0xcc82,	// (0x0001dd07) uni_indicator_pane_g4_ParamLimits

0xcc82,	// (0x0001dd07) uni_indicator_pane_g4

0xcc96,	// (0x0001dd1b) uni_indicator_pane_g5_ParamLimits

0xcc96,	// (0x0001dd1b) uni_indicator_pane_g5

0xccaa,	// (0x0001dd2f) uni_indicator_pane_g6_ParamLimits

0xccaa,	// (0x0001dd2f) uni_indicator_pane_g6

0xf928,	// (0x000209ad) uni_indicator_pane_g_ParamLimits

0xd9e6,	// (0x0001ea6b) popup_tmo_note_window_ParamLimits

0xd9e6,	// (0x0001ea6b) popup_tmo_note_window

0xea78,	// (0x0001fafd) fshwr2_bg_pane

0x9412,	// (0x0001a497) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9412,	// (0x0001a497) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec4,	// (0x00020f49) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec4,	// (0x00020f49) fshwr2_func_candi_cell_pane_g

0x6526,	// (0x000175ab) bg_popup_window_pane_cp01

0x944b,	// (0x0001a4d0) bg_popup_window_pane_g1_cp01

0x9454,	// (0x0001a4d9) bg_popup_window_pane_cp22_ParamLimits

0x9454,	// (0x0001a4d9) bg_popup_window_pane_cp22

0x9462,	// (0x0001a4e7) listscroll_tmo_link_pane_ParamLimits

0x9462,	// (0x0001a4e7) listscroll_tmo_link_pane

0x94a2,	// (0x0001a527) popup_tmo_note_window_g1_ParamLimits

0x94a2,	// (0x0001a527) popup_tmo_note_window_g1

0x94af,	// (0x0001a534) tmo_note_info_pane_ParamLimits

0x94af,	// (0x0001a534) tmo_note_info_pane

0xe8be,	// (0x0001f943) list_tmo_note_info_pane_g1_ParamLimits

0xe8be,	// (0x0001f943) list_tmo_note_info_pane_g1

0x94e0,	// (0x0001a565) list_tmo_note_info_pane_g2_ParamLimits

0x94e0,	// (0x0001a565) list_tmo_note_info_pane_g2

0x0001,

0xfec9,	// (0x00020f4e) list_tmo_note_info_pane_g_ParamLimits

0xfec9,	// (0x00020f4e) list_tmo_note_info_pane_g

0x94fc,	// (0x0001a581) list_tmo_note_info_text_pane_ParamLimits

0x94fc,	// (0x0001a581) list_tmo_note_info_text_pane

0x9581,	// (0x0001a606) list_tmo_link_pane

0x958e,	// (0x0001a613) scroll_pane_cp20

0x959b,	// (0x0001a620) list_single_tmo_link_pane_ParamLimits

0x959b,	// (0x0001a620) list_single_tmo_link_pane

0x95ab,	// (0x0001a630) list_single_tmo_link_pane_t1

0x95b9,	// (0x0001a63e) list_tmo_note_info_text_pane_t1_ParamLimits

0x95b9,	// (0x0001a63e) list_tmo_note_info_text_pane_t1

0xb9f4,	// (0x0001ca79) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb9f4,	// (0x0001ca79) aid_size_touch_scroll_bar_cp01

0xb923,	// (0x0001c9a8) aid_size_touch_slider_marker

0xa872,	// (0x0001b8f7) popup_settings_window_ParamLimits

0xa872,	// (0x0001b8f7) popup_settings_window

0x3106,	// (0x0001418b) popup_candi_list_indi_window

0x375b,	// (0x000147e0) aid_touch_navi_pane_ParamLimits

0x0741,	// (0x000117c6) rs_clock_indi_pane

0x074a,	// (0x000117cf) sctrl_sk_bottom_pane_ParamLimits

0x075b,	// (0x000117e0) sctrl_sk_top_pane_ParamLimits

0x085c,	// (0x000118e1) popup_fep_tooltip_window

0x8e75,	// (0x00019efa) aid_size_cell_widget_grid_ParamLimits

0xe5d4,	// (0x0001f659) cell_ai5_widget_pane_g1_ParamLimits

0xe5d4,	// (0x0001f659) cell_ai5_widget_pane_g1

0xe627,	// (0x0001f6ac) cell_ai5_widget_pane_g6_ParamLimits

0xe633,	// (0x0001f6b8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe47,	// (0x00020ecc) cell_ai5_widget_pane_g_ParamLimits

0xfe47,	// (0x00020ecc) cell_ai5_widget_pane_g

0xe737,	// (0x0001f7bc) cell_ai5_widget_pane_t10_ParamLimits

0xe737,	// (0x0001f7bc) cell_ai5_widget_pane_t10

0xe74d,	// (0x0001f7d2) grid_ai5_widget_pane_ParamLimits

0xe782,	// (0x0001f807) cell_contacts_ai5_widget_pane_ParamLimits

0xe782,	// (0x0001f807) cell_contacts_ai5_widget_pane

0x92cc,	// (0x0001a351) popup_discreet_window_t3_ParamLimits

0x92cc,	// (0x0001a351) popup_discreet_window_t3

0x935b,	// (0x0001a3e0) popup_fshwr2_char_preview_window_ParamLimits

0x935b,	// (0x0001a3e0) popup_fshwr2_char_preview_window

0xe8d5,	// (0x0001f95a) tmo_note_info_pane_t1

0xe8ea,	// (0x0001f96f) tmo_note_info_pane_t2

0xe903,	// (0x0001f988) tmo_note_info_pane_t3

0x955d,	// (0x0001a5e2) tmo_note_info_pane_t4

0x956f,	// (0x0001a5f4) tmo_note_info_pane_t5

0x0004,

0xfece,	// (0x00020f53) tmo_note_info_pane_t

0x9581,	// (0x0001a606) list_tmo_link_pane_ParamLimits

0x958e,	// (0x0001a613) scroll_pane_cp20_ParamLimits

0xea78,	// (0x0001fafd) bg_popup_fep_char_preview_window_cp01

0x95d2,	// (0x0001a657) popup_fshwr2_char_preview_window_t1

0x95e0,	// (0x0001a665) popup_candi_list_indi_window_g1

0x95e9,	// (0x0001a66e) bg_cell_contacts_ai5_widget_pane

0x95f5,	// (0x0001a67a) cell_contacts_ai5_widget_pane_g1

0x9609,	// (0x0001a68e) cell_contacts_ai5_widget_pane_g2

0x9618,	// (0x0001a69d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed9,	// (0x00020f5e) cell_contacts_ai5_widget_pane_g

0x962b,	// (0x0001a6b0) cell_contacts_ai5_widget_pane_t1

0x1ed9,	// (0x00012f5e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe97d,	// (0x0001fa02) settings_container_pane

0x2d50,	// (0x00013dd5) listscroll_set_pane_copy1

0x5ace,	// (0x00016b53) scroll_pane_cp121_copy1

0x96b1,	// (0x0001a736) set_content_pane_copy1

0xe989,	// (0x0001fa0e) aid_height_set_list_copy1_ParamLimits

0xe989,	// (0x0001fa0e) aid_height_set_list_copy1

0x50d2,	// (0x00016157) aid_size_parent_copy1_ParamLimits

0x50d2,	// (0x00016157) aid_size_parent_copy1

0xe995,	// (0x0001fa1a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe995,	// (0x0001fa1a) button_value_adjust_pane_cp6_copy1

0x30de,	// (0x00014163) list_highlight_pane_cp2_copy1_ParamLimits

0x30de,	// (0x00014163) list_highlight_pane_cp2_copy1

0xe9a9,	// (0x0001fa2e) list_set_pane_copy1_ParamLimits

0xe9a9,	// (0x0001fa2e) list_set_pane_copy1

0xe918,	// (0x0001f99d) main_pane_set_t1_copy1_ParamLimits

0xe918,	// (0x0001f99d) main_pane_set_t1_copy1

0xe952,	// (0x0001f9d7) main_pane_set_t2_copy1_ParamLimits

0xe952,	// (0x0001f9d7) main_pane_set_t2_copy1

0xec1b,	// (0x0001fca0) main_pane_set_t3_copy1

0xec29,	// (0x0001fcae) main_pane_set_t4_copy1

0xe971,	// (0x0001f9f6) set_content_pane_g1_copy1_ParamLimits

0xe971,	// (0x0001f9f6) set_content_pane_g1_copy1

0xec37,	// (0x0001fcbc) setting_code_pane_copy1

0x97c6,	// (0x0001a84b) setting_slider_graphic_pane_copy1

0x97c6,	// (0x0001a84b) setting_slider_pane_copy1

0x97c6,	// (0x0001a84b) setting_text_pane_copy1

0x97d0,	// (0x0001a855) setting_volume_pane_copy1

0xec41,	// (0x0001fcc6) settings_code_pane_cp2_copy1

0xec49,	// (0x0001fcce) settings_code_pane_cp_copy1_ParamLimits

0xec49,	// (0x0001fcce) settings_code_pane_cp_copy1

0xec5d,	// (0x0001fce2) volume_set_pane_copy1

0xec69,	// (0x0001fcee) volume_set_pane_g10_copy1

0xec75,	// (0x0001fcfa) volume_set_pane_g1_copy1

0xec7f,	// (0x0001fd04) volume_set_pane_g2_copy1

0xec89,	// (0x0001fd0e) volume_set_pane_g3_copy1

0xec93,	// (0x0001fd18) volume_set_pane_g4_copy1

0xec9d,	// (0x0001fd22) volume_set_pane_g5_copy1

0xeca7,	// (0x0001fd2c) volume_set_pane_g6_copy1

0xecb1,	// (0x0001fd36) volume_set_pane_g7_copy1

0xecbb,	// (0x0001fd40) volume_set_pane_g8_copy1

0xecc5,	// (0x0001fd4a) volume_set_pane_g9_copy1

0x109d,	// (0x00012122) bg_set_opt_pane_cp_copy1_ParamLimits

0x109d,	// (0x00012122) bg_set_opt_pane_cp_copy1

0x9867,	// (0x0001a8ec) setting_slider_pane_t1_copy1_ParamLimits

0x9867,	// (0x0001a8ec) setting_slider_pane_t1_copy1

0xeccf,	// (0x0001fd54) setting_slider_pane_t2_copy1_ParamLimits

0xeccf,	// (0x0001fd54) setting_slider_pane_t2_copy1

0xece9,	// (0x0001fd6e) setting_slider_pane_t3_copy1_ParamLimits

0xece9,	// (0x0001fd6e) setting_slider_pane_t3_copy1

0xed01,	// (0x0001fd86) slider_set_pane_copy1_ParamLimits

0xed01,	// (0x0001fd86) slider_set_pane_copy1

0x2015,	// (0x0001309a) set_opt_bg_pane_g1_copy2

0x201d,	// (0x000130a2) set_opt_bg_pane_g2_copy2

0x98cd,	// (0x0001a952) set_opt_bg_pane_g3_copy2

0x202d,	// (0x000130b2) set_opt_bg_pane_g4_copy2

0x2035,	// (0x000130ba) set_opt_bg_pane_g5_copy2

0x203d,	// (0x000130c2) set_opt_bg_pane_g6_copy2

0xed17,	// (0x0001fd9c) set_opt_bg_pane_g7_copy2

0x98e1,	// (0x0001a966) set_opt_bg_pane_g8_copy2

0x98eb,	// (0x0001a970) set_opt_bg_pane_g9_copy2

0x0f85,	// (0x0001200a) aid_size_touch_slider_mark_copy1_ParamLimits

0x0f85,	// (0x0001200a) aid_size_touch_slider_mark_copy1

0x98f5,	// (0x0001a97a) slider_set_pane_g1_copy1

0x0f99,	// (0x0001201e) slider_set_pane_g2_copy1

0x015a,	// (0x000111df) slider_set_pane_g3_copy1_ParamLimits

0x015a,	// (0x000111df) slider_set_pane_g3_copy1

0x016e,	// (0x000111f3) slider_set_pane_g4_copy1_ParamLimits

0x016e,	// (0x000111f3) slider_set_pane_g4_copy1

0x0186,	// (0x0001120b) slider_set_pane_g5_copy1_ParamLimits

0x0186,	// (0x0001120b) slider_set_pane_g5_copy1

0x015a,	// (0x000111df) slider_set_pane_g6_copy1_ParamLimits

0x015a,	// (0x000111df) slider_set_pane_g6_copy1

0xb0b0,	// (0x0001c135) slider_set_pane_g7_copy1_ParamLimits

0xb0b0,	// (0x0001c135) slider_set_pane_g7_copy1

0xec05,	// (0x0001fc8a) bg_set_opt_pane_cp2_copy1

0x98fe,	// (0x0001a983) setting_slider_graphic_pane_g1_copy1

0xed21,	// (0x0001fda6) setting_slider_graphic_pane_t1_copy1

0xed31,	// (0x0001fdb6) setting_slider_graphic_pane_t2_copy1

0xed41,	// (0x0001fdc6) slider_set_pane_cp_copy1

0x9937,	// (0x0001a9bc) input_focus_pane_cp1_copy1

0x9940,	// (0x0001a9c5) list_set_text_pane_copy1

0x9948,	// (0x0001a9cd) setting_text_pane_g1_copy1

0x10f6,	// (0x0001217b) set_text_pane_t1_copy1

0x9937,	// (0x0001a9bc) input_focus_pane_cp2_copy1

0x9948,	// (0x0001a9cd) setting_code_pane_g1_copy1

0xed49,	// (0x0001fdce) setting_code_pane_t1_copy1

0xed57,	// (0x0001fddc) list_set_graphic_pane_copy1

0xec05,	// (0x0001fc8a) bg_set_opt_pane_cp4_copy1

0xbd4d,	// (0x0001cdd2) list_set_graphic_pane_g1_copy1_ParamLimits

0xbd4d,	// (0x0001cdd2) list_set_graphic_pane_g1_copy1

0xed69,	// (0x0001fdee) list_set_graphic_pane_g2_copy1

0xbd65,	// (0x0001cdea) list_set_graphic_pane_t1_copy1_ParamLimits

0xbd65,	// (0x0001cdea) list_set_graphic_pane_t1_copy1

0x6526,	// (0x000175ab) rs_clock_indi_pane_g1

0x9992,	// (0x0001aa17) rs_clock_indi_pane_t1

0x99a0,	// (0x0001aa25) rs_indi_pane

0x99a8,	// (0x0001aa2d) rs_indi_pane_g1

0x99b1,	// (0x0001aa36) rs_indi_pane_g2

0x99ba,	// (0x0001aa3f) rs_indi_pane_g3

0x0002,

0xfee0,	// (0x00020f65) rs_indi_pane_g

0x2d50,	// (0x00013dd5) bg_popup_preview_window_pane_cp03

0x99c3,	// (0x0001aa48) popup_fep_tooltip_window_t1

0x73fc,	// (0x00018481) popup_note2_window_g2_ParamLimits

0x73fc,	// (0x00018481) popup_note2_window_g2

0x0001,

0xfc79,	// (0x00020cfe) popup_note2_window_g_ParamLimits

0xfc79,	// (0x00020cfe) popup_note2_window_g

0x79f3,	// (0x00018a78) bg_popup_sub_pane_cp11_ParamLimits

0x7a00,	// (0x00018a85) cell_ai3_links_pane_g1_ParamLimits

0x7a17,	// (0x00018a9c) cell_ai3_links_pane_t1

0x10f6,	// (0x0001217b) set_text_pane_t1_copy1_ParamLimits

0x2c5d,	// (0x00013ce2) cell_graphic_popup_pane_cp2_ParamLimits

0x2c5d,	// (0x00013ce2) cell_graphic_popup_pane_cp2

0x99d1,	// (0x0001aa56) cell_graphic_popup_pane_g1_cp2

0x1689,	// (0x0001270e) cell_graphic_popup_pane_g2_cp2

0x99d9,	// (0x0001aa5e) cell_graphic_popup_pane_g3_cp2

0x99e1,	// (0x0001aa66) cell_graphic_popup_pane_t2_cp2

0x169a,	// (0x0001271f) grid_highlight_pane_cp3_cp2

0x23ee,	// (0x00013473) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1ed9,	// (0x00012f5e) main_tmo_pane_ParamLimits

0xd9da,	// (0x0001ea5f) popup_tmo_big_image_note_window

0xe5c4,	// (0x0001f649) cell_ai5_widget_list_pane

0xe5cc,	// (0x0001f651) cell_ai5_widget_lrg_icon_pane

0xe8d5,	// (0x0001f95a) tmo_note_info_pane_t1_ParamLimits

0xe8ea,	// (0x0001f96f) tmo_note_info_pane_t2_ParamLimits

0xe903,	// (0x0001f988) tmo_note_info_pane_t3_ParamLimits

0x955d,	// (0x0001a5e2) tmo_note_info_pane_t4_ParamLimits

0x956f,	// (0x0001a5f4) tmo_note_info_pane_t5_ParamLimits

0xfece,	// (0x00020f53) tmo_note_info_pane_t_ParamLimits

0xe97d,	// (0x0001fa02) settings_container_pane_ParamLimits

0x992f,	// (0x0001a9b4) indicator_popup_pane_cp5

0x992f,	// (0x0001a9b4) indicator_popup_pane_cp6

0xed57,	// (0x0001fddc) list_set_graphic_pane_copy1_ParamLimits

0xea78,	// (0x0001fafd) bg_popup_window_pane_cp23

0x99ef,	// (0x0001aa74) popup_tmo_big_image_note_window_g1

0x99fb,	// (0x0001aa80) popup_tmo_big_image_note_window_t1

0x9a0b,	// (0x0001aa90) popup_tmo_big_image_note_window_t2

0x9a1b,	// (0x0001aaa0) popup_tmo_big_image_note_window_t3

0x0002,

0xfee7,	// (0x00020f6c) popup_tmo_big_image_note_window_t

0xed71,	// (0x0001fdf6) cell_ai5_widget_lrg_icon_pane_g1

0xed79,	// (0x0001fdfe) cell_ai5_widget_lrg_icon_pane_t1

0xed87,	// (0x0001fe0c) cell_ai5_widget_list_row_pane_ParamLimits

0xed87,	// (0x0001fe0c) cell_ai5_widget_list_row_pane

0xeda0,	// (0x0001fe25) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeda0,	// (0x0001fe25) cell_ai5_widget_list_row_pane_g1

0xedad,	// (0x0001fe32) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xedad,	// (0x0001fe32) cell_ai5_widget_list_row_pane_t1

0xedc5,	// (0x0001fe4a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xedc5,	// (0x0001fe4a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeee,	// (0x00020f73) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeee,	// (0x00020f73) cell_ai5_widget_list_row_pane_t

0xeb40,	// (0x0001fbc5) main_fep_vtchi_ss_pane

0x9a91,	// (0x0001ab16) popup_fep_char_pre_window

0x9a99,	// (0x0001ab1e) popup_fep_ituss_window

0x9ab3,	// (0x0001ab38) popup_fep_vkbss_window

0x9ad3,	// (0x0001ab58) grid_vkbss_keypad_pane_ParamLimits

0x9ad3,	// (0x0001ab58) grid_vkbss_keypad_pane

0x9ae3,	// (0x0001ab68) ituss_keypad_pane

0x9af9,	// (0x0001ab7e) aid_vkbss_key_offset_ParamLimits

0x9af9,	// (0x0001ab7e) aid_vkbss_key_offset

0x9b05,	// (0x0001ab8a) cell_vkbss_key_pane_ParamLimits

0x9b05,	// (0x0001ab8a) cell_vkbss_key_pane

0x9b1b,	// (0x0001aba0) bg_cell_vkbss_key_g1_ParamLimits

0x9b1b,	// (0x0001aba0) bg_cell_vkbss_key_g1

0x9b27,	// (0x0001abac) cell_vkbss_key_3p_pane_ParamLimits

0x9b27,	// (0x0001abac) cell_vkbss_key_3p_pane

0x9b41,	// (0x0001abc6) cell_vkbss_key_g1_ParamLimits

0x9b41,	// (0x0001abc6) cell_vkbss_key_g1

0x9b5b,	// (0x0001abe0) cell_vkbss_key_t1_ParamLimits

0x9b5b,	// (0x0001abe0) cell_vkbss_key_t1

0x9b86,	// (0x0001ac0b) cell_ituss_key_pane_ParamLimits

0x9b86,	// (0x0001ac0b) cell_ituss_key_pane

0x9b96,	// (0x0001ac1b) bg_cell_ituss_key_g1_ParamLimits

0x9b96,	// (0x0001ac1b) bg_cell_ituss_key_g1

0x9ba2,	// (0x0001ac27) cell_ituss_key_pane_g1_ParamLimits

0x9ba2,	// (0x0001ac27) cell_ituss_key_pane_g1

0x9bae,	// (0x0001ac33) cell_ituss_key_pane_g2_ParamLimits

0x9bae,	// (0x0001ac33) cell_ituss_key_pane_g2

0x0001,

0xfef3,	// (0x00020f78) cell_ituss_key_pane_g_ParamLimits

0xfef3,	// (0x00020f78) cell_ituss_key_pane_g

0x9bc7,	// (0x0001ac4c) cell_ituss_key_t1_ParamLimits

0x9bc7,	// (0x0001ac4c) cell_ituss_key_t1

0x9bf5,	// (0x0001ac7a) cell_ituss_key_t2_ParamLimits

0x9bf5,	// (0x0001ac7a) cell_ituss_key_t2

0x9c26,	// (0x0001acab) cell_ituss_key_t3_ParamLimits

0x9c26,	// (0x0001acab) cell_ituss_key_t3

0x9c57,	// (0x0001acdc) cell_ituss_key_t4_ParamLimits

0x9c57,	// (0x0001acdc) cell_ituss_key_t4

0x0003,

0xfef8,	// (0x00020f7d) cell_ituss_key_t_ParamLimits

0xfef8,	// (0x00020f7d) cell_ituss_key_t

0x9c88,	// (0x0001ad0d) cell_vkbss_key_3p_pane_g1

0x9c90,	// (0x0001ad15) cell_vkbss_key_3p_pane_g2

0x9c98,	// (0x0001ad1d) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x00020f86) cell_vkbss_key_3p_pane_g

0xea78,	// (0x0001fafd) bg_popup_fep_char_preview_window_cp02

0x9ca0,	// (0x0001ad25) popup_fep_char_pre_window_t1

0xe5ba,	// (0x0001f63f) main_ai5_sk_pane

0x95e9,	// (0x0001a66e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x95f5,	// (0x0001a67a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9609,	// (0x0001a68e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9618,	// (0x0001a69d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed9,	// (0x00020f5e) cell_contacts_ai5_widget_pane_g_ParamLimits

0x962b,	// (0x0001a6b0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1ed9,	// (0x00012f5e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xedd7,	// (0x0001fe5c) main_ai5_sk_pane_g1

0x414f,	// (0x000151d4) popup_query_code_window_g1

0x9aa8,	// (0x0001ab2d) popup_fep_vkb_icf_pane

0x9abe,	// (0x0001ab43) popup_fep_vtchi_icf_pane

0x1ed9,	// (0x00012f5e) bg_icf_pane

0x9cc7,	// (0x0001ad4c) list_vkb_icf_pane

0x1ed9,	// (0x00012f5e) bg_icf_pane_cp01

0x9cdf,	// (0x0001ad64) vtchi_icf_list_pane

0x9cef,	// (0x0001ad74) list_vkb_icf_pane_t1_ParamLimits

0x9cef,	// (0x0001ad74) list_vkb_icf_pane_t1

0x9d06,	// (0x0001ad8b) vtchi_icf_list_pane_t1_ParamLimits

0x9d06,	// (0x0001ad8b) vtchi_icf_list_pane_t1

0x9a99,	// (0x0001ab1e) popup_fep_ituss_window_ParamLimits

0x9abe,	// (0x0001ab43) popup_fep_vtchi_icf_pane_ParamLimits

0x9ae3,	// (0x0001ab68) ituss_keypad_pane_ParamLimits

0x9aef,	// (0x0001ab74) ituss_sks_pane

0x1ed9,	// (0x00012f5e) bg_icf_pane_ParamLimits

0x9cb8,	// (0x0001ad3d) icf_edit_indi_pane_ParamLimits

0x9cb8,	// (0x0001ad3d) icf_edit_indi_pane

0x9cc7,	// (0x0001ad4c) list_vkb_icf_pane_ParamLimits

0x1ed9,	// (0x00012f5e) bg_icf_pane_cp01_ParamLimits

0x9cd3,	// (0x0001ad58) icf_edit_indi_pane_cp01_ParamLimits

0x9cd3,	// (0x0001ad58) icf_edit_indi_pane_cp01

0x9ce7,	// (0x0001ad6c) vtchi_query_pane

0x67b0,	// (0x00017835) icf_edit_indi_pane_g1_ParamLimits

0x67b0,	// (0x00017835) icf_edit_indi_pane_g1

0x9d1f,	// (0x0001ada4) icf_edit_indi_pane_g2_ParamLimits

0x9d1f,	// (0x0001ada4) icf_edit_indi_pane_g2

0x0001,

0xff08,	// (0x00020f8d) icf_edit_indi_pane_g_ParamLimits

0xff08,	// (0x00020f8d) icf_edit_indi_pane_g

0x9d2b,	// (0x0001adb0) icf_edit_indi_pane_t1

0x9d39,	// (0x0001adbe) bg_input_focus_pane_cp042

0x186d,	// (0x000128f2) vtchi_button_pane

0x9d42,	// (0x0001adc7) vtchi_query_pane_t1

0x9d50,	// (0x0001add5) vtchi_query_pane_t2

0x9d5e,	// (0x0001ade3) vtchi_query_pane_t3

0x0002,

0xff0d,	// (0x00020f92) vtchi_query_pane_t

0xea78,	// (0x0001fafd) bg_button_pane_cp13

0x9d6c,	// (0x0001adf1) vtchi_button_pane_g1

0x9d74,	// (0x0001adf9) ituss_sks_pane_g1

0x9d7f,	// (0x0001ae04) ituss_sks_pane_g2

0x0001,

0xff14,	// (0x00020f99) ituss_sks_pane_g

0x9d87,	// (0x0001ae0c) ituss_sks_pane_t1

0x9d95,	// (0x0001ae1a) ituss_sks_pane_t2

0x0001,

0xff19,	// (0x00020f9e) ituss_sks_pane_t

0x6000,	// (0x00017085) indicator_nsta_pane_cp_g1

0x6009,	// (0x0001708e) indicator_nsta_pane_cp_g2

0x6011,	// (0x00017096) indicator_nsta_pane_cp_g3

0x6019,	// (0x0001709e) indicator_nsta_pane_cp_g4

0x6021,	// (0x000170a6) indicator_nsta_pane_cp_g5

0x6029,	// (0x000170ae) indicator_nsta_pane_cp_g6

0x0005,

0xfab7,	// (0x00020b3c) indicator_nsta_pane_cp_g

0xe3d7,	// (0x0001f45c) cell_graphic2_pane_t2_ParamLimits

0xe3d7,	// (0x0001f45c) cell_graphic2_pane_t2

0x0001,

0xfdd0,	// (0x00020e55) cell_graphic2_pane_t_ParamLimits

0xfdd0,	// (0x00020e55) cell_graphic2_pane_t

0xe40f,	// (0x0001f494) cell_graphic2_control_pane_t1

0xbc33,	// (0x0001ccb8) signal_pane_g3_ParamLimits

0xbc33,	// (0x0001ccb8) signal_pane_g3

0xbc47,	// (0x0001cccc) signal_pane_g4_ParamLimits

0xbc47,	// (0x0001cccc) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
