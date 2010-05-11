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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000303ab };

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
0x5b63,	// (0x00035f0e) Screen

0x5b6f,	// (0x00035f1a) application_window_ParamLimits

0x5b6f,	// (0x00035f1a) application_window

0x2417,	// (0x000327c2) screen_g1

0x5bcb,	// (0x00035f76) area_bottom_pane_ParamLimits

0x5bcb,	// (0x00035f76) area_bottom_pane

0x5c8b,	// (0x00036036) area_top_pane_ParamLimits

0x5c8b,	// (0x00036036) area_top_pane

0x5d29,	// (0x000360d4) main_pane_ParamLimits

0x5d29,	// (0x000360d4) main_pane

0x2421,	// (0x000327cc) misc_graphics

0x9882,	// (0x00039c2d) battery_pane_ParamLimits

0x9882,	// (0x00039c2d) battery_pane

0xa53c,	// (0x0003a8e7) bg_status_flat_pane_g8

0xa544,	// (0x0003a8ef) bg_status_flat_pane_g9

0x994a,	// (0x00039cf5) context_pane_ParamLimits

0x994a,	// (0x00039cf5) context_pane

0x9a60,	// (0x00039e0b) navi_pane_ParamLimits

0x9a60,	// (0x00039e0b) navi_pane

0x9ae4,	// (0x00039e8f) signal_pane_ParamLimits

0x9ae4,	// (0x00039e8f) signal_pane

0x0008,

0xf874,	// (0x0003fc1f) bg_status_flat_pane_g

0x9b51,	// (0x00039efc) status_pane_g1_ParamLimits

0x9b51,	// (0x00039efc) status_pane_g1

0x9b65,	// (0x00039f10) status_pane_g2_ParamLimits

0x9b65,	// (0x00039f10) status_pane_g2

0x9b71,	// (0x00039f1c) status_pane_g3_ParamLimits

0x9b71,	// (0x00039f1c) status_pane_g3

0x0004,

0xf7a0,	// (0x0003fb4b) status_pane_g_ParamLimits

0xf7a0,	// (0x0003fb4b) status_pane_g

0x9ba5,	// (0x00039f50) title_pane_ParamLimits

0x9ba5,	// (0x00039f50) title_pane

0x9be2,	// (0x00039f8d) uni_indicator_pane_ParamLimits

0x9be2,	// (0x00039f8d) uni_indicator_pane

0x97a6,	// (0x00039b51) bg_list_pane_ParamLimits

0x97a6,	// (0x00039b51) bg_list_pane

0x4869,	// (0x00034c14) find_pane

0x97c6,	// (0x00039b71) listscroll_app_pane_ParamLimits

0x97c6,	// (0x00039b71) listscroll_app_pane

0x97d2,	// (0x00039b7d) listscroll_form_pane

0x5ae5,	// (0x00035e90) listscroll_gen_pane_ParamLimits

0x5ae5,	// (0x00035e90) listscroll_gen_pane

0x787c,	// (0x00037c27) listscroll_set_pane

0x6be4,	// (0x00036f8f) main_idle_act_pane

0x7601,	// (0x000379ac) main_idle_trad_pane

0x7601,	// (0x000379ac) main_list_empty_pane

0x97ec,	// (0x00039b97) main_midp_pane

0x97f8,	// (0x00039ba3) main_pane_g1_ParamLimits

0x97f8,	// (0x00039ba3) main_pane_g1

0x7892,	// (0x00037c3d) popup_ai_message_window_ParamLimits

0x7892,	// (0x00037c3d) popup_ai_message_window

0x7936,	// (0x00037ce1) popup_fep_china_uni_window_ParamLimits

0x7936,	// (0x00037ce1) popup_fep_china_uni_window

0x7990,	// (0x00037d3b) popup_fep_japan_candidate_window_ParamLimits

0x7990,	// (0x00037d3b) popup_fep_japan_candidate_window

0x79ae,	// (0x00037d59) popup_fep_japan_predictive_window_ParamLimits

0x79ae,	// (0x00037d59) popup_fep_japan_predictive_window

0x79de,	// (0x00037d89) popup_find_window

0x79eb,	// (0x00037d96) popup_grid_graphic_window_ParamLimits

0x79eb,	// (0x00037d96) popup_grid_graphic_window

0x7a15,	// (0x00037dc0) popup_large_graphic_colour_window

0x7a3b,	// (0x00037de6) popup_menu_window_ParamLimits

0x7a3b,	// (0x00037de6) popup_menu_window

0x7bf7,	// (0x00037fa2) popup_note_image_window

0x7be3,	// (0x00037f8e) popup_note_wait_window_ParamLimits

0x7be3,	// (0x00037f8e) popup_note_wait_window

0x7be3,	// (0x00037f8e) popup_note_window_ParamLimits

0x7be3,	// (0x00037f8e) popup_note_window

0x7c4d,	// (0x00037ff8) popup_query_code_window_ParamLimits

0x7c4d,	// (0x00037ff8) popup_query_code_window

0x7c61,	// (0x0003800c) popup_query_data_code_window_ParamLimits

0x7c61,	// (0x0003800c) popup_query_data_code_window

0x7c7e,	// (0x00038029) popup_query_data_window_ParamLimits

0x7c7e,	// (0x00038029) popup_query_data_window

0x7c9a,	// (0x00038045) popup_query_sat_info_window_ParamLimits

0x7c9a,	// (0x00038045) popup_query_sat_info_window

0x7cd3,	// (0x0003807e) popup_snote_single_graphic_window_ParamLimits

0x7cd3,	// (0x0003807e) popup_snote_single_graphic_window

0x7cd3,	// (0x0003807e) popup_snote_single_text_window_ParamLimits

0x7cd3,	// (0x0003807e) popup_snote_single_text_window

0x7ce8,	// (0x00038093) popup_sub_window_general

0x7e18,	// (0x000381c3) popup_window_general_ParamLimits

0x7e18,	// (0x000381c3) popup_window_general

0x9806,	// (0x00039bb1) power_save_pane

0x7718,	// (0x00037ac3) control_pane_g1_ParamLimits

0x7718,	// (0x00037ac3) control_pane_g1

0x773f,	// (0x00037aea) control_pane_g2_ParamLimits

0x773f,	// (0x00037aea) control_pane_g2

0x9769,	// (0x00039b14) control_pane_g3_ParamLimits

0x9769,	// (0x00039b14) control_pane_g3

0x0007,

0xf788,	// (0x0003fb33) control_pane_g_ParamLimits

0xf788,	// (0x0003fb33) control_pane_g

0x7789,	// (0x00037b34) control_pane_t1_ParamLimits

0x7789,	// (0x00037b34) control_pane_t1

0x77d5,	// (0x00037b80) control_pane_t2_ParamLimits

0x77d5,	// (0x00037b80) control_pane_t2

0x0002,

0xf799,	// (0x0003fb44) control_pane_t_ParamLimits

0xf799,	// (0x0003fb44) control_pane_t

0x968e,	// (0x00039a39) navi_navi_volume_pane_cp1

0x9696,	// (0x00039a41) status_small_icon_pane

0x969e,	// (0x00039a49) status_small_pane_g1_ParamLimits

0x969e,	// (0x00039a49) status_small_pane_g1

0x96d2,	// (0x00039a7d) status_small_pane_g2_ParamLimits

0x96d2,	// (0x00039a7d) status_small_pane_g2

0x96de,	// (0x00039a89) status_small_pane_g3_ParamLimits

0x96de,	// (0x00039a89) status_small_pane_g3

0x96ea,	// (0x00039a95) status_small_pane_g4_ParamLimits

0x96ea,	// (0x00039a95) status_small_pane_g4

0x96f6,	// (0x00039aa1) status_small_pane_g5_ParamLimits

0x96f6,	// (0x00039aa1) status_small_pane_g5

0x9704,	// (0x00039aaf) status_small_pane_g6_ParamLimits

0x9704,	// (0x00039aaf) status_small_pane_g6

0x0007,

0xf777,	// (0x0003fb22) status_small_pane_g_ParamLimits

0xf777,	// (0x0003fb22) status_small_pane_g

0x9733,	// (0x00039ade) status_small_pane_t1

0x9755,	// (0x00039b00) status_small_wait_pane_ParamLimits

0x9755,	// (0x00039b00) status_small_wait_pane

0x6fb9,	// (0x00037364) aid_levels_signal_ParamLimits

0x6fb9,	// (0x00037364) aid_levels_signal

0x6fcb,	// (0x00037376) signal_pane_g1_ParamLimits

0x6fcb,	// (0x00037376) signal_pane_g1

0x6fe0,	// (0x0003738b) signal_pane_g2_ParamLimits

0x6fe0,	// (0x0003738b) signal_pane_g2

0x0003,

0xf708,	// (0x0003fab3) signal_pane_g_ParamLimits

0xf708,	// (0x0003fab3) signal_pane_g

0x2cbd,	// (0x00033068) context_pane_g1

0x5f6a,	// (0x00036315) title_pane_g1

0x5f94,	// (0x0003633f) title_pane_t1

0x2437,	// (0x000327e2) title_pane_t2

0x245d,	// (0x00032808) title_pane_t3

0x0002,

0xf557,	// (0x0003f902) title_pane_t

0x9bfa,	// (0x00039fa5) aid_levels_battery_ParamLimits

0x9bfa,	// (0x00039fa5) aid_levels_battery

0x9c0e,	// (0x00039fb9) battery_pane_g1_ParamLimits

0x9c0e,	// (0x00039fb9) battery_pane_g1

0x9c24,	// (0x00039fcf) battery_pane_g2_ParamLimits

0x9c24,	// (0x00039fcf) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003fb56) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003fb56) battery_pane_g

0xae60,	// (0x0003b20b) uni_indicator_pane_g1

0xae76,	// (0x0003b221) uni_indicator_pane_g2

0xae8c,	// (0x0003b237) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0003fcc7) uni_indicator_pane_g

0x7473,	// (0x0003781e) navi_icon_pane_ParamLimits

0x7473,	// (0x0003781e) navi_icon_pane

0x73bd,	// (0x00037768) navi_midp_pane

0x748f,	// (0x0003783a) navi_navi_pane

0x7499,	// (0x00037844) navi_text_pane_ParamLimits

0x7499,	// (0x00037844) navi_text_pane

0x2417,	// (0x000327c2) status_small_wait_pane_g1

0x26ae,	// (0x00032a59) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0003fcc2) status_small_wait_pane_g

0xab87,	// (0x0003af32) navi_navi_icon_text_pane

0xab8f,	// (0x0003af3a) navi_navi_pane_g1_ParamLimits

0xab8f,	// (0x0003af3a) navi_navi_pane_g1

0xaba1,	// (0x0003af4c) navi_navi_pane_g2_ParamLimits

0xaba1,	// (0x0003af4c) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0003fc90) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0003fc90) navi_navi_pane_g

0xabb3,	// (0x0003af5e) navi_navi_tabs_pane

0xabbc,	// (0x0003af67) navi_navi_text_pane

0xab87,	// (0x0003af32) navi_navi_volume_pane

0xab63,	// (0x0003af0e) navi_text_pane_t1

0xab57,	// (0x0003af02) navi_icon_pane_g1

0xaaaa,	// (0x0003ae55) navi_navi_text_pane_t1

0x80ff,	// (0x000384aa) navi_navi_volume_pane_g1

0x8107,	// (0x000384b2) volume_small_pane

0xaa10,	// (0x0003adbb) navi_navi_icon_text_pane_g1

0xaa18,	// (0x0003adc3) navi_navi_icon_text_pane_t1

0x748f,	// (0x0003783a) navi_tabs_2_long_pane

0x748f,	// (0x0003783a) navi_tabs_2_pane

0x748f,	// (0x0003783a) navi_tabs_3_long_pane

0x748f,	// (0x0003783a) navi_tabs_3_pane

0x748f,	// (0x0003783a) navi_tabs_4_pane

0x80df,	// (0x0003848a) tabs_2_active_pane_ParamLimits

0x80df,	// (0x0003848a) tabs_2_active_pane

0x80ef,	// (0x0003849a) tabs_2_passive_pane_ParamLimits

0x80ef,	// (0x0003849a) tabs_2_passive_pane

0x80ad,	// (0x00038458) tabs_3_active_pane_ParamLimits

0x80ad,	// (0x00038458) tabs_3_active_pane

0x80bd,	// (0x00038468) tabs_3_passive_pane_ParamLimits

0x80bd,	// (0x00038468) tabs_3_passive_pane

0x80ce,	// (0x00038479) tabs_3_passive_pane_cp_ParamLimits

0x80ce,	// (0x00038479) tabs_3_passive_pane_cp

0x8069,	// (0x00038414) tabs_4_active_pane_ParamLimits

0x8069,	// (0x00038414) tabs_4_active_pane

0x807a,	// (0x00038425) tabs_4_passive_pane_ParamLimits

0x807a,	// (0x00038425) tabs_4_passive_pane

0x808b,	// (0x00038436) tabs_4_passive_pane_cp_ParamLimits

0x808b,	// (0x00038436) tabs_4_passive_pane_cp

0x809c,	// (0x00038447) tabs_4_passive_pane_cp2_ParamLimits

0x809c,	// (0x00038447) tabs_4_passive_pane_cp2

0x8045,	// (0x000383f0) tabs_2_long_active_pane_ParamLimits

0x8045,	// (0x000383f0) tabs_2_long_active_pane

0x8057,	// (0x00038402) tabs_2_long_passive_pane_ParamLimits

0x8057,	// (0x00038402) tabs_2_long_passive_pane

0x8000,	// (0x000383ab) tabs_3_long_active_pane_ParamLimits

0x8000,	// (0x000383ab) tabs_3_long_active_pane

0x8019,	// (0x000383c4) tabs_3_long_passive_pane_ParamLimits

0x8019,	// (0x000383c4) tabs_3_long_passive_pane

0x802c,	// (0x000383d7) tabs_3_long_passive_pane_cp_ParamLimits

0x802c,	// (0x000383d7) tabs_3_long_passive_pane_cp

0x7fa6,	// (0x00038351) volume_small_pane_g1

0x7faf,	// (0x0003835a) volume_small_pane_g2

0x7fb8,	// (0x00038363) volume_small_pane_g3

0x7fc1,	// (0x0003836c) volume_small_pane_g4

0x7fca,	// (0x00038375) volume_small_pane_g5

0x7fd3,	// (0x0003837e) volume_small_pane_g6

0x7fdc,	// (0x00038387) volume_small_pane_g7

0x7fe5,	// (0x00038390) volume_small_pane_g8

0x7fee,	// (0x00038399) volume_small_pane_g9

0x7ff7,	// (0x000383a2) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0003fc5c) volume_small_pane_g

0x247d,	// (0x00032828) bg_active_tab_pane_cp2_ParamLimits

0x247d,	// (0x00032828) bg_active_tab_pane_cp2

0x5ffc,	// (0x000363a7) tabs_3_active_pane_g1

0x6004,	// (0x000363af) tabs_3_active_pane_t1

0x247d,	// (0x00032828) bg_passive_tab_pane_cp2_ParamLimits

0x247d,	// (0x00032828) bg_passive_tab_pane_cp2

0x5ffc,	// (0x000363a7) tabs_3_passive_pane_g1

0x6004,	// (0x000363af) tabs_3_passive_pane_t1

0x247d,	// (0x00032828) bg_active_tab_pane_cp3_ParamLimits

0x247d,	// (0x00032828) bg_active_tab_pane_cp3

0x6016,	// (0x000363c1) tabs_4_active_pane_g1

0x601e,	// (0x000363c9) tabs_4_active_pane_t1

0x247d,	// (0x00032828) bg_passive_tab_pane_cp3_ParamLimits

0x247d,	// (0x00032828) bg_passive_tab_pane_cp3

0x6016,	// (0x000363c1) tabs_4_1_passive_pane_g1

0x601e,	// (0x000363c9) tabs_4_1_passive_pane_t1

0x97ec,	// (0x00039b97) list_highlight_pane_cp2

0xb0d5,	// (0x0003b480) list_set_pane_ParamLimits

0xb0d5,	// (0x0003b480) list_set_pane

0xb17b,	// (0x0003b526) main_pane_set_t1_ParamLimits

0xb17b,	// (0x0003b526) main_pane_set_t1

0xb19b,	// (0x0003b546) main_pane_set_t2_ParamLimits

0xb19b,	// (0x0003b546) main_pane_set_t2

0xb1af,	// (0x0003b55a) main_pane_set_t3_ParamLimits

0xb1af,	// (0x0003b55a) main_pane_set_t3

0xb1c1,	// (0x0003b56c) main_pane_set_t4_ParamLimits

0xb1c1,	// (0x0003b56c) main_pane_set_t4

0x0003,

0xf981,	// (0x0003fd2c) main_pane_set_t_ParamLimits

0xf981,	// (0x0003fd2c) main_pane_set_t

0xb1d3,	// (0x0003b57e) setting_code_pane

0xb1df,	// (0x0003b58a) setting_slider_graphic_pane

0xb1df,	// (0x0003b58a) setting_slider_pane

0xb1df,	// (0x0003b58a) setting_text_pane

0xb1df,	// (0x0003b58a) setting_volume_pane

0x6030,	// (0x000363db) volume_set_pane

0x247d,	// (0x00032828) bg_set_opt_pane_cp

0x6038,	// (0x000363e3) setting_slider_pane_t1

0x6051,	// (0x000363fc) setting_slider_pane_t2

0x606b,	// (0x00036416) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003f909) setting_slider_pane_t

0x6083,	// (0x0003642e) slider_set_pane

0x2421,	// (0x000327cc) bg_set_opt_pane_cp2

0x248b,	// (0x00032836) setting_slider_graphic_pane_g1

0x6099,	// (0x00036444) setting_slider_graphic_pane_t1

0x60a9,	// (0x00036454) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003f910) setting_slider_graphic_pane_t

0x60b9,	// (0x00036464) slider_set_pane_cp

0x2421,	// (0x000327cc) input_focus_pane_cp1

0xb094,	// (0x0003b43f) list_set_text_pane

0x2417,	// (0x000327c2) setting_text_pane_g1

0x2421,	// (0x000327cc) input_focus_pane_cp2

0x2417,	// (0x000327c2) setting_code_pane_g1

0x2494,	// (0x0003283f) setting_code_pane_t1

0x46f9,	// (0x00034aa4) set_text_pane_t1_ParamLimits

0x46f9,	// (0x00034aa4) set_text_pane_t1

0x288a,	// (0x00032c35) set_opt_bg_pane_g1

0x2892,	// (0x00032c3d) set_opt_bg_pane_g2

0xb06e,	// (0x0003b419) set_opt_bg_pane_g3

0x28a2,	// (0x00032c4d) set_opt_bg_pane_g4

0x28aa,	// (0x00032c55) set_opt_bg_pane_g5

0x28b2,	// (0x00032c5d) set_opt_bg_pane_g6

0xb078,	// (0x0003b423) set_opt_bg_pane_g7

0xb080,	// (0x0003b42b) set_opt_bg_pane_g8

0xb08a,	// (0x0003b435) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0003fd19) set_opt_bg_pane_g

0xb061,	// (0x0003b40c) slider_set_pane_g1

0x8174,	// (0x0003851f) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0003fd0a) slider_set_pane_g

0x8110,	// (0x000384bb) volume_set_pane_g1

0x8118,	// (0x000384c3) volume_set_pane_g2

0x8120,	// (0x000384cb) volume_set_pane_g3

0x8128,	// (0x000384d3) volume_set_pane_g4

0x8130,	// (0x000384db) volume_set_pane_g5

0x8138,	// (0x000384e3) volume_set_pane_g6

0x8140,	// (0x000384eb) volume_set_pane_g7

0x8148,	// (0x000384f3) volume_set_pane_g8

0x8150,	// (0x000384fb) volume_set_pane_g9

0x8158,	// (0x00038503) volume_set_pane_g10

0x0009,

0xf937,	// (0x0003fce2) volume_set_pane_g

0x60c1,	// (0x0003646c) indicator_pane_ParamLimits

0x60c1,	// (0x0003646c) indicator_pane

0x60cd,	// (0x00036478) main_idle_pane_g2_ParamLimits

0x60cd,	// (0x00036478) main_idle_pane_g2

0x60f5,	// (0x000364a0) main_pane_idle_g1_ParamLimits

0x60f5,	// (0x000364a0) main_pane_idle_g1

0x24a2,	// (0x0003284d) popup_clock_digital_analogue_window_ParamLimits

0x24a2,	// (0x0003284d) popup_clock_digital_analogue_window

0x6102,	// (0x000364ad) soft_indicator_pane_ParamLimits

0x6102,	// (0x000364ad) soft_indicator_pane

0x610e,	// (0x000364b9) wallpaper_pane_ParamLimits

0x610e,	// (0x000364b9) wallpaper_pane

0x2417,	// (0x000327c2) wallpaper_pane_g1

0x611a,	// (0x000364c5) indicator_pane_g1_ParamLimits

0x611a,	// (0x000364c5) indicator_pane_g1

0xb49c,	// (0x0003b847) navi_navi_icon_text_pane_srt_g1

0x24d0,	// (0x0003287b) soft_indicator_pane_t1

0x24ea,	// (0x00032895) aid_ps_area_pane

0x6126,	// (0x000364d1) aid_ps_clock_pane

0x24fb,	// (0x000328a6) aid_ps_indicator_pane

0x2507,	// (0x000328b2) indicator_ps_pane_ParamLimits

0x2507,	// (0x000328b2) indicator_ps_pane

0x2516,	// (0x000328c1) power_save_pane_g1_ParamLimits

0x2516,	// (0x000328c1) power_save_pane_g1

0x2522,	// (0x000328cd) power_save_pane_g2_ParamLimits

0x2522,	// (0x000328cd) power_save_pane_g2

0x5b7f,	// (0x00035f2a) aid_navinavi_width_pane

0x24ea,	// (0x00032895) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003f915) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003f915) power_save_pane_g

0x2530,	// (0x000328db) power_save_pane_t1_ParamLimits

0x2530,	// (0x000328db) power_save_pane_t1

0x6126,	// (0x000364d1) aid_ps_clock_pane_ParamLimits

0x24fb,	// (0x000328a6) aid_ps_indicator_pane_ParamLimits

0x2542,	// (0x000328ed) power_save_pane_t4_ParamLimits

0x2542,	// (0x000328ed) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003f91a) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003f91a) power_save_pane_t

0x256c,	// (0x00032917) power_save_t3_ParamLimits

0x256c,	// (0x00032917) power_save_t3

0x2557,	// (0x00032902) power_save_t2_ParamLimits

0x2557,	// (0x00032902) power_save_t2

0x2581,	// (0x0003292c) indicator_ps_pane_g1

0x6134,	// (0x000364df) ai_gene_pane_ParamLimits

0x6134,	// (0x000364df) ai_gene_pane

0x6140,	// (0x000364eb) ai_links_pane_ParamLimits

0x6140,	// (0x000364eb) ai_links_pane

0x614c,	// (0x000364f7) indicator_pane_cp1_ParamLimits

0x614c,	// (0x000364f7) indicator_pane_cp1

0x6158,	// (0x00036503) main_pane_idle_g1_cp_ParamLimits

0x6158,	// (0x00036503) main_pane_idle_g1_cp

0x6164,	// (0x0003650f) popup_ai_links_title_window

0x616d,	// (0x00036518) soft_indicator_pane_cp1_ParamLimits

0x616d,	// (0x00036518) soft_indicator_pane_cp1

0xae4e,	// (0x0003b1f9) ai_links_pane_g1

0xae57,	// (0x0003b202) grid_ai_links_pane

0xae31,	// (0x0003b1dc) ai_gene_pane_1

0xae3c,	// (0x0003b1e7) ai_gene_pane_2

0xae45,	// (0x0003b1f0) list_highlight_pane_cp4

0xae15,	// (0x0003b1c0) cell_ai_link_pane_ParamLimits

0xae15,	// (0x0003b1c0) cell_ai_link_pane

0xae0d,	// (0x0003b1b8) cell_ai_link_pane_g1

0x26ae,	// (0x00032a59) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0003fcbd) cell_ai_link_pane_g

0x2421,	// (0x000327cc) grid_highlight_cp2

0x2421,	// (0x000327cc) bg_popup_sub_pane_cp1

0x2598,	// (0x00032943) popup_ai_links_title_window_t1

0xad5d,	// (0x0003b108) ai_gene_pane_1_g1_ParamLimits

0xad5d,	// (0x0003b108) ai_gene_pane_1_g1

0xad69,	// (0x0003b114) ai_gene_pane_1_g2_ParamLimits

0xad69,	// (0x0003b114) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0003fcb3) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0003fcb3) ai_gene_pane_1_g

0xad76,	// (0x0003b121) ai_gene_pane_1_t1_ParamLimits

0xad76,	// (0x0003b121) ai_gene_pane_1_t1

0xadaa,	// (0x0003b155) grid_ai_soft_ind_pane

0xad48,	// (0x0003b0f3) ai_gene_pane_2_t1_ParamLimits

0xad48,	// (0x0003b0f3) ai_gene_pane_2_t1

0x6179,	// (0x00036524) main_pane_empty_t1_ParamLimits

0x6179,	// (0x00036524) main_pane_empty_t1

0x6191,	// (0x0003653c) main_pane_empty_t2_ParamLimits

0x6191,	// (0x0003653c) main_pane_empty_t2

0x61a6,	// (0x00036551) main_pane_empty_t3_ParamLimits

0x61a6,	// (0x00036551) main_pane_empty_t3

0x61b8,	// (0x00036563) main_pane_empty_t4_ParamLimits

0x61b8,	// (0x00036563) main_pane_empty_t4

0x61ca,	// (0x00036575) main_pane_empty_t5_ParamLimits

0x61ca,	// (0x00036575) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003f91f) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003f91f) main_pane_empty_t

0x28db,	// (0x00032c86) bg_popup_window_pane_ParamLimits

0x28db,	// (0x00032c86) bg_popup_window_pane

0xaab8,	// (0x0003ae63) find_popup_pane_cp2_ParamLimits

0xaab8,	// (0x0003ae63) find_popup_pane_cp2

0xaac4,	// (0x0003ae6f) heading_pane_ParamLimits

0xaac4,	// (0x0003ae6f) heading_pane

0x2421,	// (0x000327cc) bg_popup_sub_pane

0xaa32,	// (0x0003addd) bg_popup_window_pane_g1_ParamLimits

0xaa32,	// (0x0003addd) bg_popup_window_pane_g1

0xaa3e,	// (0x0003ade9) bg_popup_window_pane_g2_ParamLimits

0xaa3e,	// (0x0003ade9) bg_popup_window_pane_g2

0xaa4a,	// (0x0003adf5) bg_popup_window_pane_g3_ParamLimits

0xaa4a,	// (0x0003adf5) bg_popup_window_pane_g3

0xaa56,	// (0x0003ae01) bg_popup_window_pane_g4_ParamLimits

0xaa56,	// (0x0003ae01) bg_popup_window_pane_g4

0xaa62,	// (0x0003ae0d) bg_popup_window_pane_g5_ParamLimits

0xaa62,	// (0x0003ae0d) bg_popup_window_pane_g5

0xaa6e,	// (0x0003ae19) bg_popup_window_pane_g6_ParamLimits

0xaa6e,	// (0x0003ae19) bg_popup_window_pane_g6

0xaa7a,	// (0x0003ae25) bg_popup_window_pane_g7_ParamLimits

0xaa7a,	// (0x0003ae25) bg_popup_window_pane_g7

0xaa86,	// (0x0003ae31) bg_popup_window_pane_g8_ParamLimits

0xaa86,	// (0x0003ae31) bg_popup_window_pane_g8

0xaa92,	// (0x0003ae3d) bg_popup_window_pane_g9_ParamLimits

0xaa92,	// (0x0003ae3d) bg_popup_window_pane_g9

0xaa9e,	// (0x0003ae49) bg_popup_window_pane_g10_ParamLimits

0xaa9e,	// (0x0003ae49) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0003fc7b) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0003fc7b) bg_popup_window_pane_g

0xa9c7,	// (0x0003ad72) bg_popup_heading_pane_ParamLimits

0xa9c7,	// (0x0003ad72) bg_popup_heading_pane

0x82ee,	// (0x00038699) tabs_4_passive_pane_cp_srt_ParamLimits

0x82ee,	// (0x00038699) tabs_4_passive_pane_cp_srt

0x8300,	// (0x000386ab) tabs_4_passive_pane_srt_ParamLimits

0xa9db,	// (0x0003ad86) heading_pane_g2

0x8300,	// (0x000386ab) tabs_4_passive_pane_srt

0x97ec,	// (0x00039b97) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97ec,	// (0x00039b97) bg_passive_tab_pane_cp3_srt

0xa9e3,	// (0x0003ad8e) heading_pane_t1_ParamLimits

0xa9e3,	// (0x0003ad8e) heading_pane_t1

0xa9fa,	// (0x0003ada5) heading_pane_t2_ParamLimits

0xa9fa,	// (0x0003ada5) heading_pane_t2

0x0001,

0xf8cb,	// (0x0003fc76) heading_pane_t_ParamLimits

0xf8cb,	// (0x0003fc76) heading_pane_t

0xa504,	// (0x0003a8af) bg_popup_heading_pane_g1

0xa5b3,	// (0x0003a95e) bg_popup_heading_pane_g2

0xa5bd,	// (0x0003a968) bg_popup_heading_pane_g3

0xa5c7,	// (0x0003a972) bg_popup_heading_pane_g4

0xa5d1,	// (0x0003a97c) bg_popup_heading_pane_g5

0xa5db,	// (0x0003a986) bg_popup_heading_pane_g6

0xa5e3,	// (0x0003a98e) bg_popup_heading_pane_g7

0xa5eb,	// (0x0003a996) bg_popup_heading_pane_g8

0xa5f5,	// (0x0003a9a0) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0003fc32) bg_popup_heading_pane_g

0x9cf9,	// (0x0003a0a4) bg_popup_sub_pane_g1

0x9d09,	// (0x0003a0b4) bg_popup_sub_pane_g2

0x9d01,	// (0x0003a0ac) bg_popup_sub_pane_g3

0x9d19,	// (0x0003a0c4) bg_popup_sub_pane_g4

0x9d11,	// (0x0003a0bc) bg_popup_sub_pane_g5

0x9d21,	// (0x0003a0cc) bg_popup_sub_pane_g6

0x9d29,	// (0x0003a0d4) bg_popup_sub_pane_g7

0x9d39,	// (0x0003a0e4) bg_popup_sub_pane_g8

0x9d31,	// (0x0003a0dc) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0003fc0c) bg_popup_sub_pane_g

0x246f,	// (0x0003281a) bg_popup_window_pane_cp5_ParamLimits

0x246f,	// (0x0003281a) bg_popup_window_pane_cp5

0x25b5,	// (0x00032960) popup_note_window_g1_ParamLimits

0x25b5,	// (0x00032960) popup_note_window_g1

0x25c1,	// (0x0003296c) popup_note_window_t1_ParamLimits

0x25c1,	// (0x0003296c) popup_note_window_t1

0x25d7,	// (0x00032982) popup_note_window_t2_ParamLimits

0x25d7,	// (0x00032982) popup_note_window_t2

0x25ed,	// (0x00032998) popup_note_window_t3_ParamLimits

0x25ed,	// (0x00032998) popup_note_window_t3

0x2603,	// (0x000329ae) popup_note_window_t4_ParamLimits

0x2603,	// (0x000329ae) popup_note_window_t4

0x262b,	// (0x000329d6) popup_note_window_t5_ParamLimits

0x262b,	// (0x000329d6) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003f92a) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003f92a) popup_note_window_t

0x264f,	// (0x000329fa) bg_popup_window_pane_cp6_ParamLimits

0x264f,	// (0x000329fa) bg_popup_window_pane_cp6

0xa480,	// (0x0003a82b) popup_note_image_window_g1_ParamLimits

0xa480,	// (0x0003a82b) popup_note_image_window_g1

0xa48c,	// (0x0003a837) popup_note_image_window_g2_ParamLimits

0xa48c,	// (0x0003a837) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0003fc00) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0003fc00) popup_note_image_window_g

0xa4a5,	// (0x0003a850) popup_note_image_window_t1_ParamLimits

0xa4a5,	// (0x0003a850) popup_note_image_window_t1

0xa4be,	// (0x0003a869) popup_note_image_window_t2_ParamLimits

0xa4be,	// (0x0003a869) popup_note_image_window_t2

0xa4d7,	// (0x0003a882) popup_note_image_window_t3_ParamLimits

0xa4d7,	// (0x0003a882) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0003fc05) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0003fc05) popup_note_image_window_t

0xa349,	// (0x0003a6f4) bg_popup_window_pane_cp7_ParamLimits

0xa349,	// (0x0003a6f4) bg_popup_window_pane_cp7

0xa379,	// (0x0003a724) popup_note_wait_window_g1_ParamLimits

0xa379,	// (0x0003a724) popup_note_wait_window_g1

0xa385,	// (0x0003a730) popup_note_wait_window_g2_ParamLimits

0xa385,	// (0x0003a730) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0003fbee) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0003fbee) popup_note_wait_window_g

0xa39d,	// (0x0003a748) popup_note_wait_window_t1_ParamLimits

0xa39d,	// (0x0003a748) popup_note_wait_window_t1

0xa3c4,	// (0x0003a76f) popup_note_wait_window_t2_ParamLimits

0xa3c4,	// (0x0003a76f) popup_note_wait_window_t2

0xa3e1,	// (0x0003a78c) popup_note_wait_window_t3_ParamLimits

0xa3e1,	// (0x0003a78c) popup_note_wait_window_t3

0xa3f4,	// (0x0003a79f) popup_note_wait_window_t4_ParamLimits

0xa3f4,	// (0x0003a79f) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0003fbf5) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0003fbf5) popup_note_wait_window_t

0xa419,	// (0x0003a7c4) wait_bar_pane_ParamLimits

0xa419,	// (0x0003a7c4) wait_bar_pane

0x2421,	// (0x000327cc) wait_anim_pane

0x2421,	// (0x000327cc) wait_border_pane

0x2417,	// (0x000327c2) wait_anim_pane_g1

0x2417,	// (0x000327c2) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0003faae) wait_anim_pane_g

0xa2f5,	// (0x0003a6a0) wait_border_pane_g1

0xa300,	// (0x0003a6ab) wait_border_pane_g2

0xa309,	// (0x0003a6b4) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0003fbe7) wait_border_pane_g

0xa160,	// (0x0003a50b) bg_popup_window_pane_cp16_ParamLimits

0xa160,	// (0x0003a50b) bg_popup_window_pane_cp16

0xa260,	// (0x0003a60b) indicator_popup_pane_cp4_ParamLimits

0xa260,	// (0x0003a60b) indicator_popup_pane_cp4

0xa274,	// (0x0003a61f) popup_query_data_window_t1_ParamLimits

0xa274,	// (0x0003a61f) popup_query_data_window_t1

0xa286,	// (0x0003a631) popup_query_data_window_t2_ParamLimits

0xa286,	// (0x0003a631) popup_query_data_window_t2

0xa29f,	// (0x0003a64a) popup_query_data_window_t3_ParamLimits

0xa29f,	// (0x0003a64a) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0003fbe0) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0003fbe0) popup_query_data_window_t

0xa2b9,	// (0x0003a664) query_popup_data_pane_ParamLimits

0xa2b9,	// (0x0003a664) query_popup_data_pane

0xa2cd,	// (0x0003a678) query_popup_data_pane_cp1_ParamLimits

0xa2cd,	// (0x0003a678) query_popup_data_pane_cp1

0xa160,	// (0x0003a50b) bg_popup_window_pane_cp10_ParamLimits

0xa160,	// (0x0003a50b) bg_popup_window_pane_cp10

0xa192,	// (0x0003a53d) indicator_popup_pane_ParamLimits

0xa192,	// (0x0003a53d) indicator_popup_pane

0xa1b4,	// (0x0003a55f) popup_query_code_window_t1_ParamLimits

0xa1b4,	// (0x0003a55f) popup_query_code_window_t1

0xa1ce,	// (0x0003a579) popup_query_code_window_t2_ParamLimits

0xa1ce,	// (0x0003a579) popup_query_code_window_t2

0xa217,	// (0x0003a5c2) popup_query_code_window_t3_ParamLimits

0xa217,	// (0x0003a5c2) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0003fbd9) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0003fbd9) popup_query_code_window_t

0xa246,	// (0x0003a5f1) query_popup_pane_ParamLimits

0xa246,	// (0x0003a5f1) query_popup_pane

0x264f,	// (0x000329fa) bg_popup_window_pane_cp15_ParamLimits

0x264f,	// (0x000329fa) bg_popup_window_pane_cp15

0x61de,	// (0x00036589) indicator_popup_pane_cp1_ParamLimits

0x61de,	// (0x00036589) indicator_popup_pane_cp1

0x61f1,	// (0x0003659c) indicator_popup_pane_cp2_ParamLimits

0x61f1,	// (0x0003659c) indicator_popup_pane_cp2

0x6204,	// (0x000365af) popup_query_data_code_window_g1_ParamLimits

0x6204,	// (0x000365af) popup_query_data_code_window_g1

0x266d,	// (0x00032a18) popup_query_data_code_window_t1_ParamLimits

0x266d,	// (0x00032a18) popup_query_data_code_window_t1

0x267f,	// (0x00032a2a) popup_query_data_code_window_t2_ParamLimits

0x267f,	// (0x00032a2a) popup_query_data_code_window_t2

0x6217,	// (0x000365c2) popup_query_data_code_window_t3_ParamLimits

0x6217,	// (0x000365c2) popup_query_data_code_window_t3

0x622d,	// (0x000365d8) popup_query_data_code_window_t4_ParamLimits

0x622d,	// (0x000365d8) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003f935) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003f935) popup_query_data_code_window_t

0x7e82,	// (0x0003822d) list_single_midp_graphic_pane_g3

0x6245,	// (0x000365f0) query_popup_data_pane_cp2_ParamLimits

0x6258,	// (0x00036603) query_popup_pane_cp2_ParamLimits

0x6258,	// (0x00036603) query_popup_pane_cp2

0x2421,	// (0x000327cc) bg_popup_window_pane_cp11

0xa158,	// (0x0003a503) heading_pane_cp5

0x26db,	// (0x00032a86) listscroll_popup_info_pane

0x2421,	// (0x000327cc) input_focus_pane_cp3

0x2691,	// (0x00032a3c) query_popup_pane_t1

0x269f,	// (0x00032a4a) list_popup_info_pane_ParamLimits

0x269f,	// (0x00032a4a) list_popup_info_pane

0x26ae,	// (0x00032a59) listscroll_popup_info_pane_g1

0x26b6,	// (0x00032a61) scroll_pane_cp7

0x626b,	// (0x00036616) popup_info_list_pane_t1_ParamLimits

0x626b,	// (0x00036616) popup_info_list_pane_t1

0x6285,	// (0x00036630) popup_info_list_pane_t2_ParamLimits

0x6285,	// (0x00036630) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003f93e) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003f93e) popup_info_list_pane_t

0x2421,	// (0x000327cc) bg_popup_window_pane_cp12

0xb4b6,	// (0x0003b861) find_popup_pane

0x247d,	// (0x00032828) bg_popup_window_pane_cp3

0x26c0,	// (0x00032a6b) heading_pane_cp3

0x26cc,	// (0x00032a77) listscroll_popup_graphic_pane

0x2421,	// (0x000327cc) bg_popup_window_pane_cp4

0x62ef,	// (0x0003669a) heading_pane_cp4

0x26db,	// (0x00032a86) listscroll_popup_colour_pane

0x62f9,	// (0x000366a4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x62f9,	// (0x000366a4) cell_large_graphic_colour_none_popup_pane

0x630d,	// (0x000366b8) grid_large_graphic_colour_popup_pane_ParamLimits

0x630d,	// (0x000366b8) grid_large_graphic_colour_popup_pane

0x6335,	// (0x000366e0) listscroll_popup_colour_pane_g1_ParamLimits

0x6335,	// (0x000366e0) listscroll_popup_colour_pane_g1

0x634c,	// (0x000366f7) listscroll_popup_colour_pane_g2_ParamLimits

0x634c,	// (0x000366f7) listscroll_popup_colour_pane_g2

0x6363,	// (0x0003670e) listscroll_popup_colour_pane_g3_ParamLimits

0x6363,	// (0x0003670e) listscroll_popup_colour_pane_g3

0x6373,	// (0x0003671e) listscroll_popup_colour_pane_g4_ParamLimits

0x6373,	// (0x0003671e) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003f943) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003f943) listscroll_popup_colour_pane_g

0x26e3,	// (0x00032a8e) scroll_pane_cp6_ParamLimits

0x26e3,	// (0x00032a8e) scroll_pane_cp6

0x6383,	// (0x0003672e) cell_large_graphic_colour_popup_pane_ParamLimits

0x6383,	// (0x0003672e) cell_large_graphic_colour_popup_pane

0x63a2,	// (0x0003674d) cell_large_graphic_colour_none_popup_pane_t1

0x2421,	// (0x000327cc) grid_highlight_pane_cp5

0x26f5,	// (0x00032aa0) cell_large_graphic_colour_popup_pane_g1

0x26fd,	// (0x00032aa8) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003f94c) cell_large_graphic_colour_popup_pane_g

0x2705,	// (0x00032ab0) cell_large_graphic_colour_popup_pane_g2_copy1

0x270e,	// (0x00032ab9) grid_highlight_pane_cp4

0x2716,	// (0x00032ac1) bg_popup_window_pane_cp8_ParamLimits

0x2716,	// (0x00032ac1) bg_popup_window_pane_cp8

0x63b1,	// (0x0003675c) popup_snote_single_text_window_g1_ParamLimits

0x63b1,	// (0x0003675c) popup_snote_single_text_window_g1

0x63c3,	// (0x0003676e) popup_snote_single_text_window_t1_ParamLimits

0x63c3,	// (0x0003676e) popup_snote_single_text_window_t1

0x63d6,	// (0x00036781) popup_snote_single_text_window_t2_ParamLimits

0x63d6,	// (0x00036781) popup_snote_single_text_window_t2

0x63e9,	// (0x00036794) popup_snote_single_text_window_t3_ParamLimits

0x63e9,	// (0x00036794) popup_snote_single_text_window_t3

0x6422,	// (0x000367cd) popup_snote_single_text_window_t4_ParamLimits

0x6422,	// (0x000367cd) popup_snote_single_text_window_t4

0x6456,	// (0x00036801) popup_snote_single_text_window_t5_ParamLimits

0x6456,	// (0x00036801) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003f951) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003f951) popup_snote_single_text_window_t

0x2731,	// (0x00032adc) bg_popup_window_pane_cp9_ParamLimits

0x2731,	// (0x00032adc) bg_popup_window_pane_cp9

0x63b1,	// (0x0003675c) popup_snote_single_graphic_window_g1_ParamLimits

0x63b1,	// (0x0003675c) popup_snote_single_graphic_window_g1

0x273f,	// (0x00032aea) popup_snote_single_graphic_window_g2_ParamLimits

0x273f,	// (0x00032aea) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003f95c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003f95c) popup_snote_single_graphic_window_g

0x274b,	// (0x00032af6) popup_snote_single_graphic_window_t1_ParamLimits

0x274b,	// (0x00032af6) popup_snote_single_graphic_window_t1

0x275e,	// (0x00032b09) popup_snote_single_graphic_window_t2_ParamLimits

0x275e,	// (0x00032b09) popup_snote_single_graphic_window_t2

0x6485,	// (0x00036830) popup_snote_single_graphic_window_t3_ParamLimits

0x6485,	// (0x00036830) popup_snote_single_graphic_window_t3

0x64be,	// (0x00036869) popup_snote_single_graphic_window_t4_ParamLimits

0x64be,	// (0x00036869) popup_snote_single_graphic_window_t4

0x64f2,	// (0x0003689d) popup_snote_single_graphic_window_t5_ParamLimits

0x64f2,	// (0x0003689d) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003f961) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003f961) popup_snote_single_graphic_window_t

0xb3fa,	// (0x0003b7a5) grid_graphic_popup_pane_ParamLimits

0xb3fa,	// (0x0003b7a5) grid_graphic_popup_pane

0xb422,	// (0x0003b7cd) listscroll_popup_graphic_pane_g1_ParamLimits

0xb422,	// (0x0003b7cd) listscroll_popup_graphic_pane_g1

0xb436,	// (0x0003b7e1) listscroll_popup_graphic_pane_g2_ParamLimits

0xb436,	// (0x0003b7e1) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0003fd56) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0003fd56) listscroll_popup_graphic_pane_g

0xb44a,	// (0x0003b7f5) scroll_pane_cp5

0xb397,	// (0x0003b742) cell_graphic_popup_pane_ParamLimits

0xb397,	// (0x0003b742) cell_graphic_popup_pane

0xb378,	// (0x0003b723) cell_graphic_popup_pane_g1

0xb380,	// (0x0003b72b) cell_graphic_popup_pane_g2

0x2705,	// (0x00032ab0) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0003fd4f) cell_graphic_popup_pane_g

0xb389,	// (0x0003b734) cell_graphic_popup_pane_t2

0x270e,	// (0x00032ab9) grid_highlight_pane_cp3

0x2783,	// (0x00032b2e) list_gen_pane_ParamLimits

0x2783,	// (0x00032b2e) list_gen_pane

0x27ab,	// (0x00032b56) scroll_pane

0xb2d0,	// (0x0003b67b) bg_list_pane_g1_ParamLimits

0xb2d0,	// (0x0003b67b) bg_list_pane_g1

0xb2ed,	// (0x0003b698) bg_list_pane_g2_ParamLimits

0xb2ed,	// (0x0003b698) bg_list_pane_g2

0xb302,	// (0x0003b6ad) bg_list_pane_g3_ParamLimits

0xb302,	// (0x0003b6ad) bg_list_pane_g3

0xb316,	// (0x0003b6c1) bg_list_pane_g4_ParamLimits

0xb316,	// (0x0003b6c1) bg_list_pane_g4

0xb32a,	// (0x0003b6d5) bg_list_pane_g5_ParamLimits

0xb32a,	// (0x0003b6d5) bg_list_pane_g5

0x0004,

0xf999,	// (0x0003fd44) bg_list_pane_g_ParamLimits

0xf999,	// (0x0003fd44) bg_list_pane_g

0xb265,	// (0x0003b610) list_double2_graphic_large_graphic_pane_ParamLimits

0xb265,	// (0x0003b610) list_double2_graphic_large_graphic_pane

0xb265,	// (0x0003b610) list_double2_graphic_pane_ParamLimits

0xb265,	// (0x0003b610) list_double2_graphic_pane

0xb265,	// (0x0003b610) list_double2_large_graphic_pane_ParamLimits

0xb265,	// (0x0003b610) list_double2_large_graphic_pane

0x8204,	// (0x000385af) list_double2_pane_ParamLimits

0x8204,	// (0x000385af) list_double2_pane

0xb265,	// (0x0003b610) list_double_graphic_heading_pane_ParamLimits

0xb265,	// (0x0003b610) list_double_graphic_heading_pane

0xb265,	// (0x0003b610) list_double_graphic_pane_ParamLimits

0xb265,	// (0x0003b610) list_double_graphic_pane

0xb265,	// (0x0003b610) list_double_heading_pane_ParamLimits

0xb265,	// (0x0003b610) list_double_heading_pane

0xb265,	// (0x0003b610) list_double_large_graphic_pane_ParamLimits

0xb265,	// (0x0003b610) list_double_large_graphic_pane

0xb265,	// (0x0003b610) list_double_number_pane_ParamLimits

0xb265,	// (0x0003b610) list_double_number_pane

0xb265,	// (0x0003b610) list_double_pane_ParamLimits

0xb265,	// (0x0003b610) list_double_pane

0xb265,	// (0x0003b610) list_double_time_pane_ParamLimits

0xb265,	// (0x0003b610) list_double_time_pane

0xb265,	// (0x0003b610) list_setting_number_pane_ParamLimits

0xb265,	// (0x0003b610) list_setting_number_pane

0xb265,	// (0x0003b610) list_setting_pane_ParamLimits

0xb265,	// (0x0003b610) list_setting_pane

0x8245,	// (0x000385f0) list_single_2graphic_pane_ParamLimits

0x8245,	// (0x000385f0) list_single_2graphic_pane

0x8245,	// (0x000385f0) list_single_graphic_heading_pane_ParamLimits

0x8245,	// (0x000385f0) list_single_graphic_heading_pane

0x8245,	// (0x000385f0) list_single_graphic_pane_ParamLimits

0x8245,	// (0x000385f0) list_single_graphic_pane

0x8245,	// (0x000385f0) list_single_heading_pane_ParamLimits

0x8245,	// (0x000385f0) list_single_heading_pane

0x82a7,	// (0x00038652) list_single_large_graphic_pane_ParamLimits

0x82a7,	// (0x00038652) list_single_large_graphic_pane

0x8245,	// (0x000385f0) list_single_number_heading_pane_ParamLimits

0x8245,	// (0x000385f0) list_single_number_heading_pane

0x8245,	// (0x000385f0) list_single_number_pane_ParamLimits

0x8245,	// (0x000385f0) list_single_number_pane

0x8245,	// (0x000385f0) list_single_pane_ParamLimits

0x8245,	// (0x000385f0) list_single_pane

0x2421,	// (0x000327cc) list_highlight_pane_cp1

0x4714,	// (0x00034abf) list_single_pane_g1_ParamLimits

0x4714,	// (0x00034abf) list_single_pane_g1

0x4720,	// (0x00034acb) list_single_pane_g2_ParamLimits

0x4720,	// (0x00034acb) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003f973) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003f973) list_single_pane_g

0x49ce,	// (0x00034d79) list_single_pane_t1_ParamLimits

0x49ce,	// (0x00034d79) list_single_pane_t1

0x4714,	// (0x00034abf) list_single_number_pane_g1_ParamLimits

0x4714,	// (0x00034abf) list_single_number_pane_g1

0x4720,	// (0x00034acb) list_single_number_pane_g2_ParamLimits

0x4720,	// (0x00034acb) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003f973) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003f973) list_single_number_pane_g

0x48df,	// (0x00034c8a) list_single_number_pane_t1_ParamLimits

0x48df,	// (0x00034c8a) list_single_number_pane_t1

0x49bc,	// (0x00034d67) list_single_number_pane_t2_ParamLimits

0x49bc,	// (0x00034d67) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0003fd05) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0003fd05) list_single_number_pane_t

0x652b,	// (0x000368d6) list_single_graphic_pane_g1_ParamLimits

0x652b,	// (0x000368d6) list_single_graphic_pane_g1

0x4714,	// (0x00034abf) list_single_graphic_pane_g2_ParamLimits

0x4714,	// (0x00034abf) list_single_graphic_pane_g2

0x4720,	// (0x00034acb) list_single_graphic_pane_g3_ParamLimits

0x4720,	// (0x00034acb) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003f96c) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003f96c) list_single_graphic_pane_g

0x472c,	// (0x00034ad7) list_single_graphic_pane_t1_ParamLimits

0x472c,	// (0x00034ad7) list_single_graphic_pane_t1

0x4714,	// (0x00034abf) list_single_heading_pane_g1_ParamLimits

0x4714,	// (0x00034abf) list_single_heading_pane_g1

0x4720,	// (0x00034acb) list_single_heading_pane_g2_ParamLimits

0x4720,	// (0x00034acb) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003f973) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003f973) list_single_heading_pane_g

0x4742,	// (0x00034aed) list_single_heading_pane_t1_ParamLimits

0x4742,	// (0x00034aed) list_single_heading_pane_t1

0x4758,	// (0x00034b03) list_single_heading_pane_t2_ParamLimits

0x4758,	// (0x00034b03) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003f978) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003f978) list_single_heading_pane_t

0x4714,	// (0x00034abf) list_single_number_heading_pane_g1_ParamLimits

0x4714,	// (0x00034abf) list_single_number_heading_pane_g1

0x4720,	// (0x00034acb) list_single_number_heading_pane_g2_ParamLimits

0x4720,	// (0x00034acb) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003f973) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003f973) list_single_number_heading_pane_g

0x4742,	// (0x00034aed) list_single_number_heading_pane_t1_ParamLimits

0x4742,	// (0x00034aed) list_single_number_heading_pane_t1

0x476a,	// (0x00034b15) list_single_number_heading_pane_t2_ParamLimits

0x476a,	// (0x00034b15) list_single_number_heading_pane_t2

0x477c,	// (0x00034b27) list_single_number_heading_pane_t3_ParamLimits

0x477c,	// (0x00034b27) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003f97d) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003f97d) list_single_number_heading_pane_t

0x6537,	// (0x000368e2) list_single_graphic_heading_pane_g1_ParamLimits

0x6537,	// (0x000368e2) list_single_graphic_heading_pane_g1

0x6543,	// (0x000368ee) list_single_graphic_heading_pane_g4_ParamLimits

0x6543,	// (0x000368ee) list_single_graphic_heading_pane_g4

0x4720,	// (0x00034acb) list_single_graphic_heading_pane_g5_ParamLimits

0x4720,	// (0x00034acb) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003f984) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003f984) list_single_graphic_heading_pane_g

0x4742,	// (0x00034aed) list_single_graphic_heading_pane_t1_ParamLimits

0x4742,	// (0x00034aed) list_single_graphic_heading_pane_t1

0x6554,	// (0x000368ff) list_single_graphic_heading_pane_t2_ParamLimits

0x6554,	// (0x000368ff) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003f98b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003f98b) list_single_graphic_heading_pane_t

0x6566,	// (0x00036911) list_single_large_graphic_pane_g1_ParamLimits

0x6566,	// (0x00036911) list_single_large_graphic_pane_g1

0x4eda,	// (0x00035285) list_single_large_graphic_pane_g2_ParamLimits

0x4eda,	// (0x00035285) list_single_large_graphic_pane_g2

0x6572,	// (0x0003691d) list_single_large_graphic_pane_g3_ParamLimits

0x6572,	// (0x0003691d) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003f990) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003f990) list_single_large_graphic_pane_g

0xa300,	// (0x0003a6ab) wait_border_pane_g2_copy1

0x657e,	// (0x00036929) list_single_large_graphic_pane_g4_cp2

0x6586,	// (0x00036931) list_single_large_graphic_pane_t1_ParamLimits

0x6586,	// (0x00036931) list_single_large_graphic_pane_t1

0x659c,	// (0x00036947) list_double_pane_g1_ParamLimits

0x659c,	// (0x00036947) list_double_pane_g1

0x65a8,	// (0x00036953) list_double_pane_g2_ParamLimits

0x65a8,	// (0x00036953) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003f997) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003f997) list_double_pane_g

0x65b4,	// (0x0003695f) list_double_pane_t1_ParamLimits

0x65b4,	// (0x0003695f) list_double_pane_t1

0x65ca,	// (0x00036975) list_double_pane_t2_ParamLimits

0x65ca,	// (0x00036975) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003f99c) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003f99c) list_double_pane_t

0x65dc,	// (0x00036987) list_double2_pane_g1_ParamLimits

0x65dc,	// (0x00036987) list_double2_pane_g1

0x47d4,	// (0x00034b7f) list_double2_pane_g2_ParamLimits

0x47d4,	// (0x00034b7f) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003f9a1) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003f9a1) list_double2_pane_g

0x47e0,	// (0x00034b8b) list_double2_pane_t1_ParamLimits

0x47e0,	// (0x00034b8b) list_double2_pane_t1

0x47f6,	// (0x00034ba1) list_double2_pane_t2_ParamLimits

0x47f6,	// (0x00034ba1) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003f9a6) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003f9a6) list_double2_pane_t

0x659c,	// (0x00036947) list_double_number_pane_g1_ParamLimits

0x659c,	// (0x00036947) list_double_number_pane_g1

0x65a8,	// (0x00036953) list_double_number_pane_g2_ParamLimits

0x65a8,	// (0x00036953) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003f997) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003f997) list_double_number_pane_g

0x65ed,	// (0x00036998) list_double_number_pane_t1_ParamLimits

0x65ed,	// (0x00036998) list_double_number_pane_t1

0x65ff,	// (0x000369aa) list_double_number_pane_t2_ParamLimits

0x65ff,	// (0x000369aa) list_double_number_pane_t2

0x6615,	// (0x000369c0) list_double_number_pane_t3_ParamLimits

0x6615,	// (0x000369c0) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003f9ab) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003f9ab) list_double_number_pane_t

0x6627,	// (0x000369d2) list_double_graphic_pane_g1_ParamLimits

0x6627,	// (0x000369d2) list_double_graphic_pane_g1

0x6633,	// (0x000369de) list_double_graphic_pane_g2_ParamLimits

0x6633,	// (0x000369de) list_double_graphic_pane_g2

0x6642,	// (0x000369ed) list_double_graphic_pane_g3_ParamLimits

0x6642,	// (0x000369ed) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003f9b2) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003f9b2) list_double_graphic_pane_g

0x665a,	// (0x00036a05) list_double_graphic_pane_t1_ParamLimits

0x665a,	// (0x00036a05) list_double_graphic_pane_t1

0x6670,	// (0x00036a1b) list_double_graphic_pane_t2_ParamLimits

0x6670,	// (0x00036a1b) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003f9bb) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003f9bb) list_double_graphic_pane_t

0x6682,	// (0x00036a2d) list_double2_graphic_pane_g1_ParamLimits

0x6682,	// (0x00036a2d) list_double2_graphic_pane_g1

0x659c,	// (0x00036947) list_double2_graphic_pane_g2_ParamLimits

0x659c,	// (0x00036947) list_double2_graphic_pane_g2

0x65a8,	// (0x00036953) list_double2_graphic_pane_g3_ParamLimits

0x65a8,	// (0x00036953) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003f9c0) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003f9c0) list_double2_graphic_pane_g

0x668e,	// (0x00036a39) list_double2_graphic_pane_t1_ParamLimits

0x668e,	// (0x00036a39) list_double2_graphic_pane_t1

0x66a4,	// (0x00036a4f) list_double2_graphic_pane_t2_ParamLimits

0x66a4,	// (0x00036a4f) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003f9c7) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003f9c7) list_double2_graphic_pane_t

0x66b6,	// (0x00036a61) list_double_large_graphic_pane_g1_ParamLimits

0x66b6,	// (0x00036a61) list_double_large_graphic_pane_g1

0x66d5,	// (0x00036a80) list_double_large_graphic_pane_g2_ParamLimits

0x66d5,	// (0x00036a80) list_double_large_graphic_pane_g2

0x65a8,	// (0x00036953) list_double_large_graphic_pane_g3_ParamLimits

0x65a8,	// (0x00036953) list_double_large_graphic_pane_g3

0x66e6,	// (0x00036a91) list_double_large_graphic_pane_g4_ParamLimits

0x66e6,	// (0x00036a91) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003f9cc) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003f9cc) list_double_large_graphic_pane_g

0x66f9,	// (0x00036aa4) list_double_large_graphic_pane_t1_ParamLimits

0x66f9,	// (0x00036aa4) list_double_large_graphic_pane_t1

0x6712,	// (0x00036abd) list_double_large_graphic_pane_t2_ParamLimits

0x6712,	// (0x00036abd) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003f9d7) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003f9d7) list_double_large_graphic_pane_t

0x6724,	// (0x00036acf) list_double2_large_graphic_pane_g1_ParamLimits

0x6724,	// (0x00036acf) list_double2_large_graphic_pane_g1

0x6730,	// (0x00036adb) list_double2_large_graphic_pane_g2_ParamLimits

0x6730,	// (0x00036adb) list_double2_large_graphic_pane_g2

0x6741,	// (0x00036aec) list_double2_large_graphic_pane_g3_ParamLimits

0x6741,	// (0x00036aec) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003f9dc) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003f9dc) list_double2_large_graphic_pane_g

0x674d,	// (0x00036af8) list_double2_large_graphic_pane_t1_ParamLimits

0x674d,	// (0x00036af8) list_double2_large_graphic_pane_t1

0x6763,	// (0x00036b0e) list_double2_large_graphic_pane_t2_ParamLimits

0x6763,	// (0x00036b0e) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003f9e3) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003f9e3) list_double2_large_graphic_pane_t

0x6775,	// (0x00036b20) list_double_heading_pane_g1_ParamLimits

0x6775,	// (0x00036b20) list_double_heading_pane_g1

0x6786,	// (0x00036b31) list_double_heading_pane_g2_ParamLimits

0x6786,	// (0x00036b31) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003f9e8) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003f9e8) list_double_heading_pane_g

0x6792,	// (0x00036b3d) list_double_heading_pane_t1_ParamLimits

0x6792,	// (0x00036b3d) list_double_heading_pane_t1

0x67a8,	// (0x00036b53) list_double_heading_pane_t2_ParamLimits

0x67a8,	// (0x00036b53) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003f9ed) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003f9ed) list_double_heading_pane_t

0x6682,	// (0x00036a2d) list_double_graphic_heading_pane_g1_ParamLimits

0x6682,	// (0x00036a2d) list_double_graphic_heading_pane_g1

0x6775,	// (0x00036b20) list_double_graphic_heading_pane_g2_ParamLimits

0x6775,	// (0x00036b20) list_double_graphic_heading_pane_g2

0x6786,	// (0x00036b31) list_double_graphic_heading_pane_g3_ParamLimits

0x6786,	// (0x00036b31) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003f9f2) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003f9f2) list_double_graphic_heading_pane_g

0x67ba,	// (0x00036b65) list_double_graphic_heading_pane_t1_ParamLimits

0x67ba,	// (0x00036b65) list_double_graphic_heading_pane_t1

0x67d0,	// (0x00036b7b) list_double_graphic_heading_pane_t2_ParamLimits

0x67d0,	// (0x00036b7b) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003f9f9) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003f9f9) list_double_graphic_heading_pane_t

0x66d5,	// (0x00036a80) list_double_time_pane_g1_ParamLimits

0x66d5,	// (0x00036a80) list_double_time_pane_g1

0x65a8,	// (0x00036953) list_double_time_pane_g2_ParamLimits

0x65a8,	// (0x00036953) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003f9fe) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003f9fe) list_double_time_pane_g

0x67e2,	// (0x00036b8d) list_double_time_pane_t1_ParamLimits

0x67e2,	// (0x00036b8d) list_double_time_pane_t1

0x67f8,	// (0x00036ba3) list_double_time_pane_t2_ParamLimits

0x67f8,	// (0x00036ba3) list_double_time_pane_t2

0x680a,	// (0x00036bb5) list_double_time_pane_t3_ParamLimits

0x680a,	// (0x00036bb5) list_double_time_pane_t3

0x681c,	// (0x00036bc7) list_double_time_pane_t4_ParamLimits

0x681c,	// (0x00036bc7) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0003fa03) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0003fa03) list_double_time_pane_t

0x4d15,	// (0x000350c0) list_setting_pane_g1_ParamLimits

0x4d15,	// (0x000350c0) list_setting_pane_g1

0x6786,	// (0x00036b31) list_setting_pane_g2_ParamLimits

0x6786,	// (0x00036b31) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003fa0c) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003fa0c) list_setting_pane_g

0x682e,	// (0x00036bd9) list_setting_pane_t1_ParamLimits

0x682e,	// (0x00036bd9) list_setting_pane_t1

0x6845,	// (0x00036bf0) list_setting_pane_t2_ParamLimits

0x6845,	// (0x00036bf0) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003fa11) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003fa11) list_setting_pane_t

0x6882,	// (0x00036c2d) set_value_pane_cp_ParamLimits

0x6882,	// (0x00036c2d) set_value_pane_cp

0x688e,	// (0x00036c39) list_setting_number_pane_g1_ParamLimits

0x688e,	// (0x00036c39) list_setting_number_pane_g1

0x689a,	// (0x00036c45) list_setting_number_pane_g2_ParamLimits

0x689a,	// (0x00036c45) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003fa18) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003fa18) list_setting_number_pane_g

0x68a6,	// (0x00036c51) list_setting_number_pane_t1_ParamLimits

0x68a6,	// (0x00036c51) list_setting_number_pane_t1

0x68ba,	// (0x00036c65) list_setting_number_pane_t2_ParamLimits

0x68ba,	// (0x00036c65) list_setting_number_pane_t2

0x68d1,	// (0x00036c7c) list_setting_number_pane_t3_ParamLimits

0x68d1,	// (0x00036c7c) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003fa1d) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003fa1d) list_setting_number_pane_t

0x6882,	// (0x00036c2d) set_value_pane_ParamLimits

0x6882,	// (0x00036c2d) set_value_pane

0x27df,	// (0x00032b8a) bg_set_opt_pane_ParamLimits

0x27df,	// (0x00032b8a) bg_set_opt_pane

0x6914,	// (0x00036cbf) set_value_pane_t1

0x2800,	// (0x00032bab) slider_set_pane_cp3

0x6922,	// (0x00036ccd) volume_small_pane_cp

0x2809,	// (0x00032bb4) list_form_gen_pane

0x2812,	// (0x00032bbd) scroll_pane_cp8

0x692b,	// (0x00036cd6) form_field_data_pane_ParamLimits

0x692b,	// (0x00036cd6) form_field_data_pane

0x6943,	// (0x00036cee) form_field_data_wide_pane_ParamLimits

0x6943,	// (0x00036cee) form_field_data_wide_pane

0x6964,	// (0x00036d0f) form_field_popup_pane_ParamLimits

0x6964,	// (0x00036d0f) form_field_popup_pane

0x6982,	// (0x00036d2d) form_field_popup_wide_pane_ParamLimits

0x6982,	// (0x00036d2d) form_field_popup_wide_pane

0x482d,	// (0x00034bd8) form_field_slider_pane_ParamLimits

0x482d,	// (0x00034bd8) form_field_slider_pane

0x699f,	// (0x00036d4a) form_field_slider_wide_pane_ParamLimits

0x699f,	// (0x00036d4a) form_field_slider_wide_pane

0x2823,	// (0x00032bce) data_form_pane

0x69bc,	// (0x00036d67) form_field_data_pane_t1

0x282f,	// (0x00032bda) input_focus_pane

0x69d4,	// (0x00036d7f) data_form_wide_pane

0x69e5,	// (0x00036d90) form_field_data_wide_pane_t1

0x2723,	// (0x00032ace) input_focus_pane_cp6

0x6a07,	// (0x00036db2) form_field_popup_pane_t1

0x282f,	// (0x00032bda) input_focus_pane_cp7

0x285d,	// (0x00032c08) list_form_pane

0x6a27,	// (0x00036dd2) form_field_popup_wide_pane_t1

0x282f,	// (0x00032bda) input_focus_pane_cp8

0x2869,	// (0x00032c14) list_form_wide_pane

0x6a44,	// (0x00036def) form_field_slider_pane_t1_ParamLimits

0x6a44,	// (0x00036def) form_field_slider_pane_t1

0x6a5a,	// (0x00036e05) form_field_slider_pane_t2_ParamLimits

0x6a5a,	// (0x00036e05) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003fa2d) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003fa2d) form_field_slider_pane_t

0x246f,	// (0x0003281a) input_focus_pane_cp9_ParamLimits

0x246f,	// (0x0003281a) input_focus_pane_cp9

0x6a6f,	// (0x00036e1a) slider_cont_pane_ParamLimits

0x6a6f,	// (0x00036e1a) slider_cont_pane

0x2878,	// (0x00032c23) form_field_slider_wide_pane_t1_ParamLimits

0x2878,	// (0x00032c23) form_field_slider_wide_pane_t1

0x6a83,	// (0x00036e2e) form_field_slider_wide_pane_t2_ParamLimits

0x6a83,	// (0x00036e2e) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003fa32) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003fa32) form_field_slider_wide_pane_t

0x246f,	// (0x0003281a) input_focus_pane_cp10_ParamLimits

0x246f,	// (0x0003281a) input_focus_pane_cp10

0x6a95,	// (0x00036e40) slider_cont_pane_cp1_ParamLimits

0x6a95,	// (0x00036e40) slider_cont_pane_cp1

0x6aa9,	// (0x00036e54) slider_form_pane_cp

0x288a,	// (0x00032c35) input_focus_pane_g1

0x2892,	// (0x00032c3d) input_focus_pane_g2

0x289a,	// (0x00032c45) input_focus_pane_g3

0x28a2,	// (0x00032c4d) input_focus_pane_g4

0x28aa,	// (0x00032c55) input_focus_pane_g5

0x28b2,	// (0x00032c5d) input_focus_pane_g6

0x28ba,	// (0x00032c65) input_focus_pane_g7

0x28c2,	// (0x00032c6d) input_focus_pane_g8

0x28ca,	// (0x00032c75) input_focus_pane_g9

0x2417,	// (0x000327c2) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003fa37) input_focus_pane_g

0xa309,	// (0x0003a6b4) wait_border_pane_g3_copy1

0x6ab1,	// (0x00036e5c) data_form_pane_t1

0x2417,	// (0x000327c2) wait_anim_pane_g1_copy1

0x81d8,	// (0x00038583) data_form_wide_pane_t1

0x6acc,	// (0x00036e77) list_form_graphic_pane_cp_ParamLimits

0x6acc,	// (0x00036e77) list_form_graphic_pane_cp

0xb209,	// (0x0003b5b4) slider_form_pane_g1

0xb212,	// (0x0003b5bd) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0003fd35) slider_form_pane_g

0x6ae0,	// (0x00036e8b) list_form_graphic_pane_ParamLimits

0x6ae0,	// (0x00036e8b) list_form_graphic_pane

0x6af7,	// (0x00036ea2) list_form_graphic_pane_g1

0x6aff,	// (0x00036eaa) list_form_graphic_pane_t1_ParamLimits

0x6aff,	// (0x00036eaa) list_form_graphic_pane_t1

0x247d,	// (0x00032828) list_highlight_pane_cp5_ParamLimits

0x247d,	// (0x00032828) list_highlight_pane_cp5

0x484c,	// (0x00034bf7) find_pane_g1

0x28d2,	// (0x00032c7d) input_find_pane

0x6b14,	// (0x00036ebf) input_find_pane_g1_ParamLimits

0x6b14,	// (0x00036ebf) input_find_pane_g1

0x6b20,	// (0x00036ecb) input_find_pane_t1_ParamLimits

0x6b20,	// (0x00036ecb) input_find_pane_t1

0x6b35,	// (0x00036ee0) input_find_pane_t2_ParamLimits

0x6b35,	// (0x00036ee0) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003fa4c) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003fa4c) input_find_pane_t

0x28db,	// (0x00032c86) input_focus_pane_cp5_ParamLimits

0x28db,	// (0x00032c86) input_focus_pane_cp5

0x28e9,	// (0x00032c94) bg_popup_window_pane_cp2_ParamLimits

0x28e9,	// (0x00032c94) bg_popup_window_pane_cp2

0x28f6,	// (0x00032ca1) listscroll_menu_pane_ParamLimits

0x28f6,	// (0x00032ca1) listscroll_menu_pane

0x6b56,	// (0x00036f01) popup_submenu_window_ParamLimits

0x6b56,	// (0x00036f01) popup_submenu_window

0x2902,	// (0x00032cad) find_popup_pane_g1

0x6b7e,	// (0x00036f29) input_popup_find_pane_cp

0x28db,	// (0x00032c86) input_focus_pane_cp4_ParamLimits

0x28db,	// (0x00032c86) input_focus_pane_cp4

0x290a,	// (0x00032cb5) input_popup_find_pane_t1_ParamLimits

0x290a,	// (0x00032cb5) input_popup_find_pane_t1

0x2421,	// (0x000327cc) bg_popup_sub_pane_cp

0x2938,	// (0x00032ce3) listscroll_popup_sub_pane

0x2940,	// (0x00032ceb) list_submenu_pane_ParamLimits

0x2940,	// (0x00032ceb) list_submenu_pane

0x2951,	// (0x00032cfc) scroll_pane_cp4

0x6b96,	// (0x00036f41) list_single_popup_submenu_pane_ParamLimits

0x6b96,	// (0x00036f41) list_single_popup_submenu_pane

0x2e1c,	// (0x000331c7) list_single_popup_submenu_pane_g1

0x6baa,	// (0x00036f55) list_single_popup_submenu_pane_t1_ParamLimits

0x6baa,	// (0x00036f55) list_single_popup_submenu_pane_t1

0x247d,	// (0x00032828) bg_active_tab_pane_cp1_ParamLimits

0x247d,	// (0x00032828) bg_active_tab_pane_cp1

0x2959,	// (0x00032d04) tabs_2_active_pane_g1

0x6bbf,	// (0x00036f6a) tabs_2_active_pane_t1

0x247d,	// (0x00032828) bg_passive_tab_pane_cp1_ParamLimits

0x247d,	// (0x00032828) bg_passive_tab_pane_cp1

0x2959,	// (0x00032d04) tabs_2_passive_pane_g1

0x6bbf,	// (0x00036f6a) tabs_2_passive_pane_t1

0x2e0e,	// (0x000331b9) bg_active_tab_pane_cp4

0x6bd1,	// (0x00036f7c) tabs_2_long_active_pane_t1

0x6be4,	// (0x00036f8f) bg_passive_tab_pane_cp4

0x7e8a,	// (0x00038235) list_single_midp_graphic_pane_g4_ParamLimits

0x2e0e,	// (0x000331b9) bg_active_tab_pane_cp5

0x6bf0,	// (0x00036f9b) tabs_3_long_active_pane_t1

0x6be4,	// (0x00036f8f) bg_passive_tab_pane_cp5

0x7e8a,	// (0x00038235) list_single_midp_graphic_pane_g4

0x247d,	// (0x00032828) bg_popup_window_pane_cp13_ParamLimits

0x247d,	// (0x00032828) bg_popup_window_pane_cp13

0x2961,	// (0x00032d0c) listscroll_popup_fast_pane_ParamLimits

0x2961,	// (0x00032d0c) listscroll_popup_fast_pane

0x296d,	// (0x00032d18) grid_popup_fast_pane_ParamLimits

0x296d,	// (0x00032d18) grid_popup_fast_pane

0x297f,	// (0x00032d2a) scroll_pane_cp9_ParamLimits

0x297f,	// (0x00032d2a) scroll_pane_cp9

0xcb2a,	// (0x0003ced5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb2a,	// (0x0003ced5) list_single_graphic_hl_pane_t1_cp2

0x2992,	// (0x00032d3d) input_focus_pane_cp20_ParamLimits

0x2992,	// (0x00032d3d) input_focus_pane_cp20

0x29a0,	// (0x00032d4b) query_popup_data_pane_t1_ParamLimits

0x29a0,	// (0x00032d4b) query_popup_data_pane_t1

0x29b3,	// (0x00032d5e) query_popup_data_pane_t2_ParamLimits

0x29b3,	// (0x00032d5e) query_popup_data_pane_t2

0x29f9,	// (0x00032da4) query_popup_data_pane_t3_ParamLimits

0x29f9,	// (0x00032da4) query_popup_data_pane_t3

0x2a3a,	// (0x00032de5) query_popup_data_pane_t4_ParamLimits

0x2a3a,	// (0x00032de5) query_popup_data_pane_t4

0x2a76,	// (0x00032e21) query_popup_data_pane_t5_ParamLimits

0x2a76,	// (0x00032e21) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003fa51) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003fa51) query_popup_data_pane_t

0x288a,	// (0x00032c35) bg_set_opt_pane_g1

0x2892,	// (0x00032c3d) bg_set_opt_pane_g2

0x289a,	// (0x00032c45) bg_set_opt_pane_g3

0x28a2,	// (0x00032c4d) bg_set_opt_pane_g4

0x28aa,	// (0x00032c55) bg_set_opt_pane_g5

0x28b2,	// (0x00032c5d) bg_set_opt_pane_g6

0x28ba,	// (0x00032c65) bg_set_opt_pane_g7

0x28c2,	// (0x00032c6d) bg_set_opt_pane_g8

0x28ca,	// (0x00032c75) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003fa5c) bg_set_opt_pane_g

0x715b,	// (0x00037506) control_top_pane_stacon_ParamLimits

0x715b,	// (0x00037506) control_top_pane_stacon

0x71ae,	// (0x00037559) signal_pane_stacon_ParamLimits

0x71ae,	// (0x00037559) signal_pane_stacon

0x71d3,	// (0x0003757e) stacon_top_pane_g1_ParamLimits

0x71d3,	// (0x0003757e) stacon_top_pane_g1

0x71f5,	// (0x000375a0) title_pane_stacon_ParamLimits

0x71f5,	// (0x000375a0) title_pane_stacon

0x721f,	// (0x000375ca) uni_indicator_pane_stacon_ParamLimits

0x721f,	// (0x000375ca) uni_indicator_pane_stacon

0x7234,	// (0x000375df) battery_pane_stacon_ParamLimits

0x7234,	// (0x000375df) battery_pane_stacon

0x7278,	// (0x00037623) control_bottom_pane_stacon_ParamLimits

0x7278,	// (0x00037623) control_bottom_pane_stacon

0x729b,	// (0x00037646) navi_pane_stacon_ParamLimits

0x729b,	// (0x00037646) navi_pane_stacon

0x72be,	// (0x00037669) stacon_bottom_pane_g1_ParamLimits

0x72be,	// (0x00037669) stacon_bottom_pane_g1

0x6c1c,	// (0x00036fc7) aid_levels_signal_lsc_ParamLimits

0x6c1c,	// (0x00036fc7) aid_levels_signal_lsc

0x6c32,	// (0x00036fdd) signal_pane_stacon_g1_ParamLimits

0x6c32,	// (0x00036fdd) signal_pane_stacon_g1

0x6c46,	// (0x00036ff1) signal_pane_stacon_g2_ParamLimits

0x6c46,	// (0x00036ff1) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003fa6f) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003fa6f) signal_pane_stacon_g

0x6c7b,	// (0x00037026) title_pane_stacon_t1_ParamLimits

0x6c7b,	// (0x00037026) title_pane_stacon_t1

0x2ace,	// (0x00032e79) uni_indicator_pane_stacon_g1

0x2ad8,	// (0x00032e83) uni_indicator_pane_stacon_g2

0x2aba,	// (0x00032e65) uni_indicator_pane_stacon_g3

0x2ac4,	// (0x00032e6f) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0003fa7b) uni_indicator_pane_stacon_g

0x6ca0,	// (0x0003704b) control_top_pane_stacon_g1

0x6ca8,	// (0x00037053) control_top_pane_stacon_t1_ParamLimits

0x6ca8,	// (0x00037053) control_top_pane_stacon_t1

0x6cdf,	// (0x0003708a) aid_levels_battery_lsc_ParamLimits

0x6cdf,	// (0x0003708a) aid_levels_battery_lsc

0x6cf6,	// (0x000370a1) battery_pane_stacon_g1_ParamLimits

0x6cf6,	// (0x000370a1) battery_pane_stacon_g1

0x6d09,	// (0x000370b4) battery_pane_stacon_g2_ParamLimits

0x6d09,	// (0x000370b4) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0003fa84) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0003fa84) battery_pane_stacon_g

0x6d47,	// (0x000370f2) navi_icon_pane_stacon

0x6d5b,	// (0x00037106) navi_navi_pane_stacon

0x6d47,	// (0x000370f2) navi_text_pane_stacon

0x6ca0,	// (0x0003704b) control_bottom_pane_stacon_g1

0x6d6f,	// (0x0003711a) control_bottom_pane_stacon_t1_ParamLimits

0x6d6f,	// (0x0003711a) control_bottom_pane_stacon_t1

0x6da6,	// (0x00037151) grid_app_pane_ParamLimits

0x6da6,	// (0x00037151) grid_app_pane

0x6dca,	// (0x00037175) scroll_pane_cp15_ParamLimits

0x6dca,	// (0x00037175) scroll_pane_cp15

0x6ddd,	// (0x00037188) cell_app_pane_ParamLimits

0x6ddd,	// (0x00037188) cell_app_pane

0x6e05,	// (0x000371b0) cell_app_pane_g1_ParamLimits

0x6e05,	// (0x000371b0) cell_app_pane_g1

0x2afc,	// (0x00032ea7) cell_app_pane_g2_ParamLimits

0x2afc,	// (0x00032ea7) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0003fa89) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0003fa89) cell_app_pane_g

0x6e29,	// (0x000371d4) cell_app_pane_t1_ParamLimits

0x6e29,	// (0x000371d4) cell_app_pane_t1

0x2b08,	// (0x00032eb3) grid_highlight_pane_ParamLimits

0x2b08,	// (0x00032eb3) grid_highlight_pane

0x288a,	// (0x00032c35) cell_highlight_pane_g1

0x2892,	// (0x00032c3d) cell_highlight_pane_g2

0x289a,	// (0x00032c45) cell_highlight_pane_g3

0x28a2,	// (0x00032c4d) cell_highlight_pane_g4

0x28aa,	// (0x00032c55) cell_highlight_pane_g5

0x28b2,	// (0x00032c5d) cell_highlight_pane_g6

0x28ba,	// (0x00032c65) cell_highlight_pane_g7

0x28c2,	// (0x00032c6d) cell_highlight_pane_g8

0x28ca,	// (0x00032c75) cell_highlight_pane_g9

0x2417,	// (0x000327c2) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003fa37) cell_highlight_pane_g

0x2b19,	// (0x00032ec4) bg_scroll_pane

0x6e53,	// (0x000371fe) scroll_handle_pane

0x2b60,	// (0x00032f0b) scroll_bg_pane_g1

0x2b75,	// (0x00032f20) scroll_bg_pane_g2

0x2b8d,	// (0x00032f38) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003fa8e) scroll_bg_pane_g

0x6e7c,	// (0x00037227) scroll_handle_focus_pane_ParamLimits

0x6e7c,	// (0x00037227) scroll_handle_focus_pane

0x2b60,	// (0x00032f0b) scroll_handle_pane_g1

0x2ba2,	// (0x00032f4d) scroll_handle_pane_g2

0x2b8d,	// (0x00032f38) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0003fa95) scroll_handle_pane_g

0x28db,	// (0x00032c86) bg_popup_sub_pane_cp21_ParamLimits

0x28db,	// (0x00032c86) bg_popup_sub_pane_cp21

0x6e89,	// (0x00037234) popup_fep_japan_predictive_window_t1_ParamLimits

0x6e89,	// (0x00037234) popup_fep_japan_predictive_window_t1

0x6ea3,	// (0x0003724e) popup_fep_japan_predictive_window_t2_ParamLimits

0x6ea3,	// (0x0003724e) popup_fep_japan_predictive_window_t2

0x6ed6,	// (0x00037281) popup_fep_japan_predictive_window_t3_ParamLimits

0x6ed6,	// (0x00037281) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0003fa9c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0003fa9c) popup_fep_japan_predictive_window_t

0x2421,	// (0x000327cc) bg_popup_sub_pane_cp23

0x3734,	// (0x00033adf) listscroll_japin_cand_pane

0x2bb6,	// (0x00032f61) popup_fep_japan_candidate_window_t1

0x2bc4,	// (0x00032f6f) candidate_pane_ParamLimits

0x2bc4,	// (0x00032f6f) candidate_pane

0x6f0d,	// (0x000372b8) scroll_pane_cp30

0x2bd6,	// (0x00032f81) list_single_popup_jap_candidate_pane_ParamLimits

0x2bd6,	// (0x00032f81) list_single_popup_jap_candidate_pane

0x2421,	// (0x000327cc) list_highlight_pane_cp30

0x2beb,	// (0x00032f96) list_single_popup_jap_candidate_pane_t1

0x2bfa,	// (0x00032fa5) level_1_signal

0x2c07,	// (0x00032fb2) level_2_signal

0x2c14,	// (0x00032fbf) level_3_signal

0x2c21,	// (0x00032fcc) level_4_signal

0x2c2e,	// (0x00032fd9) level_5_signal

0x2c3b,	// (0x00032fe6) level_6_signal

0x2c48,	// (0x00032ff3) level_7_signal

0x2bfa,	// (0x00032fa5) level_1_battery

0x2c07,	// (0x00032fb2) level_2_battery

0x2c14,	// (0x00032fbf) level_3_battery

0x2c21,	// (0x00032fcc) level_4_battery

0x2c2e,	// (0x00032fd9) level_5_battery

0x2c3b,	// (0x00032fe6) level_6_battery

0x2c48,	// (0x00032ff3) level_7_battery

0x2c6d,	// (0x00033018) list_menu_pane_ParamLimits

0x2c6d,	// (0x00033018) list_menu_pane

0x2c83,	// (0x0003302e) scroll_pane_cp25_ParamLimits

0x2c83,	// (0x0003302e) scroll_pane_cp25

0x2c9c,	// (0x00033047) list_double2_graphic_pane_cp2_ParamLimits

0x2c9c,	// (0x00033047) list_double2_graphic_pane_cp2

0x2c9c,	// (0x00033047) list_double2_large_graphic_pane_cp2_ParamLimits

0x2c9c,	// (0x00033047) list_double2_large_graphic_pane_cp2

0x2c9c,	// (0x00033047) list_double2_pane_cp2_ParamLimits

0x2c9c,	// (0x00033047) list_double2_pane_cp2

0x2c9c,	// (0x00033047) list_double_graphic_pane_cp2_ParamLimits

0x2c9c,	// (0x00033047) list_double_graphic_pane_cp2

0x2c9c,	// (0x00033047) list_double_large_graphic_pane_cp2_ParamLimits

0x2c9c,	// (0x00033047) list_double_large_graphic_pane_cp2

0x2c9c,	// (0x00033047) list_double_number_pane_cp2_ParamLimits

0x2c9c,	// (0x00033047) list_double_number_pane_cp2

0x2c9c,	// (0x00033047) list_double_pane_cp2_ParamLimits

0x2c9c,	// (0x00033047) list_double_pane_cp2

0x6f48,	// (0x000372f3) list_single_2graphic_pane_cp2_ParamLimits

0x6f48,	// (0x000372f3) list_single_2graphic_pane_cp2

0x6f48,	// (0x000372f3) list_single_graphic_heading_pane_cp2_ParamLimits

0x6f48,	// (0x000372f3) list_single_graphic_heading_pane_cp2

0x6f48,	// (0x000372f3) list_single_graphic_pane_cp2_ParamLimits

0x6f48,	// (0x000372f3) list_single_graphic_pane_cp2

0x6f48,	// (0x000372f3) list_single_heading_pane_cp2_ParamLimits

0x6f48,	// (0x000372f3) list_single_heading_pane_cp2

0x2cac,	// (0x00033057) list_single_large_graphic_pane_cp2_ParamLimits

0x2cac,	// (0x00033057) list_single_large_graphic_pane_cp2

0x6f48,	// (0x000372f3) list_single_number_heading_pane_cp2_ParamLimits

0x6f48,	// (0x000372f3) list_single_number_heading_pane_cp2

0x6f48,	// (0x000372f3) list_single_number_pane_cp2_ParamLimits

0x6f48,	// (0x000372f3) list_single_number_pane_cp2

0x6f48,	// (0x000372f3) list_single_pane_cp2_ParamLimits

0x6f48,	// (0x000372f3) list_single_pane_cp2

0x2cc6,	// (0x00033071) bg_popup_sub_pane_cp22

0x7020,	// (0x000373cb) popup_side_volume_key_window_g1

0x7044,	// (0x000373ef) popup_side_volume_key_window_t1

0x7060,	// (0x0003740b) volume_small_pane_cp1

0x246f,	// (0x0003281a) bg_popup_sub_pane_cp24_ParamLimits

0x246f,	// (0x0003281a) bg_popup_sub_pane_cp24

0x2cdc,	// (0x00033087) fep_china_uni_candidate_pane_ParamLimits

0x2cdc,	// (0x00033087) fep_china_uni_candidate_pane

0x2cf0,	// (0x0003309b) fep_china_uni_entry_pane

0x2d00,	// (0x000330ab) popup_fep_china_uni_window_g1

0x7068,	// (0x00037413) fep_china_uni_entry_pane_g1

0x7070,	// (0x0003741b) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003facd) fep_china_uni_entry_pane_g

0x2d1c,	// (0x000330c7) fep_entry_item_pane

0x2d26,	// (0x000330d1) fep_candidate_item_pane

0x7078,	// (0x00037423) fep_china_uni_candidate_pane_g1

0x2d2e,	// (0x000330d9) fep_china_uni_candidate_pane_g2

0x2d36,	// (0x000330e1) fep_china_uni_candidate_pane_g3

0x7080,	// (0x0003742b) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0003fad2) fep_china_uni_candidate_pane_g

0x2417,	// (0x000327c2) fep_entry_item_pane_g1

0x2d3e,	// (0x000330e9) fep_entry_item_pane_t1_ParamLimits

0x2d3e,	// (0x000330e9) fep_entry_item_pane_t1

0x2d54,	// (0x000330ff) fep_candidate_item_pane_t1_ParamLimits

0x2d54,	// (0x000330ff) fep_candidate_item_pane_t1

0x2d69,	// (0x00033114) fep_candidate_item_pane_t2_ParamLimits

0x2d69,	// (0x00033114) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003fadb) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003fadb) fep_candidate_item_pane_t

0x247d,	// (0x00032828) list_highlight_pane_cp31_ParamLimits

0x247d,	// (0x00032828) list_highlight_pane_cp31

0x2d7b,	// (0x00033126) level_1_signal_lsc

0x2d84,	// (0x0003312f) level_2_signal_lsc

0x2d8d,	// (0x00033138) level_3_signal_lsc

0x2d96,	// (0x00033141) level_4_signal_lsc

0x2d9f,	// (0x0003314a) level_5_signal_lsc

0x2da8,	// (0x00033153) level_6_signal_lsc

0x2db1,	// (0x0003315c) level_7_signal_lsc

0x2db1,	// (0x0003315c) level_1_battery_lsc

0x2dba,	// (0x00033165) level_2_battery_lsc

0x2dc3,	// (0x0003316e) level_3_battery_lsc

0x2dcc,	// (0x00033177) level_4_battery_lsc

0x2dd5,	// (0x00033180) level_5_battery_lsc

0x2dde,	// (0x00033189) level_6_battery_lsc

0x2d7b,	// (0x00033126) level_7_battery_lsc

0x2de7,	// (0x00033192) scroll_handle_focus_pane_g1

0x2df0,	// (0x0003319b) scroll_handle_focus_pane_g2

0x2df9,	// (0x000331a4) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0003fae0) scroll_handle_focus_pane_g

0x7088,	// (0x00037433) list_single_2graphic_pane_g1_ParamLimits

0x7088,	// (0x00037433) list_single_2graphic_pane_g1

0x6543,	// (0x000368ee) list_single_2graphic_pane_g2_ParamLimits

0x6543,	// (0x000368ee) list_single_2graphic_pane_g2

0x4720,	// (0x00034acb) list_single_2graphic_pane_g3_ParamLimits

0x4720,	// (0x00034acb) list_single_2graphic_pane_g3

0x4855,	// (0x00034c00) list_single_2graphic_pane_g4_ParamLimits

0x4855,	// (0x00034c00) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003fae7) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003fae7) list_single_2graphic_pane_g

0x7094,	// (0x0003743f) list_single_2graphic_pane_t1_ParamLimits

0x7094,	// (0x0003743f) list_single_2graphic_pane_t1

0x70c2,	// (0x0003746d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x70c2,	// (0x0003746d) list_double2_graphic_large_graphic_pane_g1

0x6730,	// (0x00036adb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6730,	// (0x00036adb) list_double2_graphic_large_graphic_pane_g2

0x6741,	// (0x00036aec) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6741,	// (0x00036aec) list_double2_graphic_large_graphic_pane_g3

0x70d2,	// (0x0003747d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x70d2,	// (0x0003747d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003faf0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003faf0) list_double2_graphic_large_graphic_pane_g

0x70de,	// (0x00037489) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x70de,	// (0x00037489) list_double2_graphic_large_graphic_pane_t1

0x70f4,	// (0x0003749f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x70f4,	// (0x0003749f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003faf9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003faf9) list_double2_graphic_large_graphic_pane_t

0x7387,	// (0x00037732) popup_fast_swap_window_ParamLimits

0x7387,	// (0x00037732) popup_fast_swap_window

0x73a3,	// (0x0003774e) popup_side_volume_key_window

0x73bd,	// (0x00037768) stacon_top_pane

0x73c7,	// (0x00037772) status_pane_ParamLimits

0x73c7,	// (0x00037772) status_pane

0x73d5,	// (0x00037780) status_small_pane

0x2421,	// (0x000327cc) control_pane

0x2421,	// (0x000327cc) stacon_bottom_pane

0x2812,	// (0x00032bbd) scroll_pane_cp121

0x2809,	// (0x00032bb4) set_content_pane

0x7106,	// (0x000374b1) bg_active_tab_pane_g1_cp1

0x710f,	// (0x000374ba) bg_active_tab_pane_g2_cp1

0x7118,	// (0x000374c3) bg_active_tab_pane_g3_cp1

0x7106,	// (0x000374b1) bg_passive_tab_pane_g1_cp1

0x710f,	// (0x000374ba) bg_passive_tab_pane_g2_cp1

0x7118,	// (0x000374c3) bg_passive_tab_pane_g3_cp1

0x7121,	// (0x000374cc) bg_active_tab_pane_g1_cp2

0x710f,	// (0x000374ba) bg_active_tab_pane_g2_cp2

0x712a,	// (0x000374d5) bg_active_tab_pane_g3_cp2

0x7121,	// (0x000374cc) bg_passive_tab_pane_g1_cp2

0x710f,	// (0x000374ba) bg_passive_tab_pane_g2_cp2

0x712a,	// (0x000374d5) bg_passive_tab_pane_g3_cp2

0x7133,	// (0x000374de) bg_active_tab_pane_g1_cp3

0x710f,	// (0x000374ba) bg_active_tab_pane_g2_cp3

0x713c,	// (0x000374e7) bg_active_tab_pane_g3_cp3

0x7133,	// (0x000374de) bg_passive_tab_pane_g1_cp3

0x710f,	// (0x000374ba) bg_passive_tab_pane_g2_cp3

0x713c,	// (0x000374e7) bg_passive_tab_pane_g3_cp3

0x7145,	// (0x000374f0) bg_active_tab_pane_g1_cp4

0x710f,	// (0x000374ba) bg_active_tab_pane_g2_cp4

0x7150,	// (0x000374fb) bg_active_tab_pane_g3_cp4

0x7145,	// (0x000374f0) bg_passive_tab_pane_g1_cp4

0x710f,	// (0x000374ba) bg_passive_tab_pane_g2_cp4

0x7150,	// (0x000374fb) bg_passive_tab_pane_g3_cp4

0x72da,	// (0x00037685) bg_active_tab_pane_g1_cp5

0x710f,	// (0x000374ba) bg_active_tab_pane_g2_cp5

0x72e3,	// (0x0003768e) bg_active_tab_pane_g3_cp5

0x72da,	// (0x00037685) bg_passive_tab_pane_g1_cp5

0x710f,	// (0x000374ba) bg_passive_tab_pane_g2_cp5

0x72e3,	// (0x0003768e) bg_passive_tab_pane_g3_cp5

0x72ec,	// (0x00037697) list_set_graphic_pane_ParamLimits

0x72ec,	// (0x00037697) list_set_graphic_pane

0x2421,	// (0x000327cc) bg_set_opt_pane_cp4

0x730c,	// (0x000376b7) list_set_graphic_pane_g1_ParamLimits

0x730c,	// (0x000376b7) list_set_graphic_pane_g1

0x7318,	// (0x000376c3) list_set_graphic_pane_g2_ParamLimits

0x7318,	// (0x000376c3) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003fafe) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003fafe) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x0003fe83) volume_small_pane_cp_g

0x733a,	// (0x000376e5) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x733a,	// (0x000376e5) list_double2_large_graphic_pane_g1_cp2

0x7346,	// (0x000376f1) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7346,	// (0x000376f1) list_double2_large_graphic_pane_g2_cp2

0x7357,	// (0x00037702) list_double2_large_graphic_pane_g3_cp2

0x735f,	// (0x0003770a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x735f,	// (0x0003770a) list_double2_large_graphic_pane_t1_cp2

0x7375,	// (0x00037720) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7375,	// (0x00037720) list_double2_large_graphic_pane_t2_cp2

0xadba,	// (0x0003b165) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadba,	// (0x0003b165) list_double_large_graphic_pane_g1_cp2

0xadcb,	// (0x0003b176) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xadcb,	// (0x0003b176) list_double_large_graphic_pane_g2_cp2

0x74e2,	// (0x0003788d) list_double_large_graphic_pane_g3_cp2

0xaddc,	// (0x0003b187) list_double_large_graphic_pane_g4_cp

0xade4,	// (0x0003b18f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xade4,	// (0x0003b18f) list_double_large_graphic_pane_t1_cp2

0xadfb,	// (0x0003b1a6) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xadfb,	// (0x0003b1a6) list_double_large_graphic_pane_t2_cp2

0x73e0,	// (0x0003778b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x73e0,	// (0x0003778b) list_double2_graphic_pane_g1_cp2

0x73ee,	// (0x00037799) list_double2_graphic_pane_g2_cp2_ParamLimits

0x73ee,	// (0x00037799) list_double2_graphic_pane_g2_cp2

0x73ff,	// (0x000377aa) list_double2_graphic_pane_g3_cp2

0x7409,	// (0x000377b4) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7409,	// (0x000377b4) list_double2_graphic_pane_t1_cp2

0x741f,	// (0x000377ca) list_double2_graphic_pane_t2_cp2_ParamLimits

0x741f,	// (0x000377ca) list_double2_graphic_pane_t2_cp2

0x2e02,	// (0x000331ad) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2e02,	// (0x000331ad) list_single_number_heading_pane_g1_cp2

0x7431,	// (0x000377dc) list_single_number_heading_pane_g2_cp2

0x7439,	// (0x000377e4) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7439,	// (0x000377e4) list_single_number_heading_pane_t1_cp2

0x744f,	// (0x000377fa) list_single_number_heading_pane_t2_cp2_ParamLimits

0x744f,	// (0x000377fa) list_single_number_heading_pane_t2_cp2

0x7461,	// (0x0003780c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7461,	// (0x0003780c) list_single_number_heading_pane_t3_cp2

0x2e02,	// (0x000331ad) list_single_heading_pane_g1_cp2_ParamLimits

0x2e02,	// (0x000331ad) list_single_heading_pane_g1_cp2

0x7431,	// (0x000377dc) list_single_heading_pane_g2_cp2

0x7439,	// (0x000377e4) list_single_heading_pane_t1_cp2_ParamLimits

0x7439,	// (0x000377e4) list_single_heading_pane_t1_cp2

0xabc4,	// (0x0003af6f) list_single_heading_pane_t2_cp2_ParamLimits

0xabc4,	// (0x0003af6f) list_single_heading_pane_t2_cp2

0xab0c,	// (0x0003aeb7) list_double_graphic_pane_g1_cp2_ParamLimits

0xab0c,	// (0x0003aeb7) list_double_graphic_pane_g1_cp2

0xab18,	// (0x0003aec3) list_double_graphic_pane_g2_cp2_ParamLimits

0xab18,	// (0x0003aec3) list_double_graphic_pane_g2_cp2

0xab27,	// (0x0003aed2) list_double_graphic_pane_g3_cp2

0xab2f,	// (0x0003aeda) list_double_graphic_pane_t1_cp2_ParamLimits

0xab2f,	// (0x0003aeda) list_double_graphic_pane_t1_cp2

0xab45,	// (0x0003aef0) list_double_graphic_pane_t2_cp2_ParamLimits

0xab45,	// (0x0003aef0) list_double_graphic_pane_t2_cp2

0x74d6,	// (0x00037881) list_double_number_pane_g1_cp2_ParamLimits

0x74d6,	// (0x00037881) list_double_number_pane_g1_cp2

0x74e2,	// (0x0003788d) list_double_number_pane_g2_cp2

0xaad0,	// (0x0003ae7b) list_double_number_pane_t1_cp2_ParamLimits

0xaad0,	// (0x0003ae7b) list_double_number_pane_t1_cp2

0xaae4,	// (0x0003ae8f) list_double_number_pane_t2_cp2_ParamLimits

0xaae4,	// (0x0003ae8f) list_double_number_pane_t2_cp2

0xaafa,	// (0x0003aea5) list_double_number_pane_t3_cp2_ParamLimits

0xaafa,	// (0x0003aea5) list_double_number_pane_t3_cp2

0xa9b9,	// (0x0003ad64) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9b9,	// (0x0003ad64) list_single_graphic_pane_g1_cp2

0x753a,	// (0x000378e5) list_single_graphic_pane_g2_cp2_ParamLimits

0x753a,	// (0x000378e5) list_single_graphic_pane_g2_cp2

0x7546,	// (0x000378f1) list_single_graphic_pane_g3_cp2

0xa98f,	// (0x0003ad3a) list_single_graphic_pane_t1_cp2_ParamLimits

0xa98f,	// (0x0003ad3a) list_single_graphic_pane_t1_cp2

0x753a,	// (0x000378e5) list_single_number_pane_g1_cp2_ParamLimits

0x753a,	// (0x000378e5) list_single_number_pane_g1_cp2

0x7546,	// (0x000378f1) list_single_number_pane_g2_cp2

0xa98f,	// (0x0003ad3a) list_single_number_pane_t1_cp2_ParamLimits

0xa98f,	// (0x0003ad3a) list_single_number_pane_t1_cp2

0xa9a5,	// (0x0003ad50) list_single_number_pane_t2_cp2_ParamLimits

0xa9a5,	// (0x0003ad50) list_single_number_pane_t2_cp2

0x7346,	// (0x000376f1) list_double2_pane_g1_cp2_ParamLimits

0x7346,	// (0x000376f1) list_double2_pane_g1_cp2

0x7357,	// (0x00037702) list_double2_pane_g2_cp2

0x74ae,	// (0x00037859) list_double2_pane_t1_cp2_ParamLimits

0x74ae,	// (0x00037859) list_double2_pane_t1_cp2

0x74c4,	// (0x0003786f) list_double2_pane_t2_cp2_ParamLimits

0x74c4,	// (0x0003786f) list_double2_pane_t2_cp2

0x74d6,	// (0x00037881) list_double_pane_g1_cp2_ParamLimits

0x74d6,	// (0x00037881) list_double_pane_g1_cp2

0x74e2,	// (0x0003788d) list_double_pane_g2_cp2

0x74ea,	// (0x00037895) list_double_pane_t1_cp2_ParamLimits

0x74ea,	// (0x00037895) list_double_pane_t1_cp2

0x7500,	// (0x000378ab) list_double_pane_t2_cp2_ParamLimits

0x7500,	// (0x000378ab) list_double_pane_t2_cp2

0x752a,	// (0x000378d5) list_single_pane_cp2_g3

0x753a,	// (0x000378e5) list_single_pane_g1_cp2_ParamLimits

0x753a,	// (0x000378e5) list_single_pane_g1_cp2

0x7546,	// (0x000378f1) list_single_pane_g2_cp2

0x754e,	// (0x000378f9) list_single_pane_t1_cp2_ParamLimits

0x754e,	// (0x000378f9) list_single_pane_t1_cp2

0x7566,	// (0x00037911) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7566,	// (0x00037911) list_single_large_graphic_pane_g1_cp2

0x7572,	// (0x0003791d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7572,	// (0x0003791d) list_single_large_graphic_pane_g2_cp2

0x757e,	// (0x00037929) list_single_large_graphic_pane_g3_cp2

0x7586,	// (0x00037931) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7586,	// (0x00037931) list_single_large_graphic_pane_g4_cp1

0x75a0,	// (0x0003794b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x75a0,	// (0x0003794b) list_single_large_graphic_pane_t1_cp2

0xa95b,	// (0x0003ad06) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa95b,	// (0x0003ad06) list_single_graphic_heading_pane_g1_cp2

0xa928,	// (0x0003acd3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa928,	// (0x0003acd3) list_single_graphic_heading_pane_g4_cp2

0x7546,	// (0x000378f1) list_single_graphic_heading_pane_g5_cp2

0xa967,	// (0x0003ad12) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa967,	// (0x0003ad12) list_single_graphic_heading_pane_t1_cp2

0xa97d,	// (0x0003ad28) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa97d,	// (0x0003ad28) list_single_graphic_heading_pane_t2_cp2

0xa91c,	// (0x0003acc7) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa91c,	// (0x0003acc7) list_single_2graphic_pane_g1_cp2

0xa928,	// (0x0003acd3) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa928,	// (0x0003acd3) list_single_2graphic_pane_g2_cp2

0x7546,	// (0x000378f1) list_single_2graphic_pane_g3_cp2

0xa939,	// (0x0003ace4) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa939,	// (0x0003ace4) list_single_2graphic_pane_g4_cp2

0xa945,	// (0x0003acf0) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa945,	// (0x0003acf0) list_single_2graphic_pane_t1_cp2

0x2417,	// (0x000327c2) list_highlight_pane_g10_cp1

0xa504,	// (0x0003a8af) list_highlight_pane_g1_cp1

0xa50c,	// (0x0003a8b7) list_highlight_pane_g2_cp1

0xa514,	// (0x0003a8bf) list_highlight_pane_g3_cp1

0xa51c,	// (0x0003a8c7) list_highlight_pane_g4_cp1

0xa524,	// (0x0003a8cf) list_highlight_pane_g5_cp1

0xa52c,	// (0x0003a8d7) list_highlight_pane_g6_cp1

0xa534,	// (0x0003a8df) list_highlight_pane_g7_cp1

0xa53c,	// (0x0003a8e7) list_highlight_pane_g8_cp1

0xa544,	// (0x0003a8ef) list_highlight_pane_g9_cp1

0xa42c,	// (0x0003a7d7) form_field_slider_pane_t3

0xa43a,	// (0x0003a7e5) form_field_slider_pane_t4

0xa448,	// (0x0003a7f3) slider_form_pane_ParamLimits

0xa448,	// (0x0003a7f3) slider_form_pane

0x2421,	// (0x000327cc) control_abbreviations

0x2421,	// (0x000327cc) control_conventions

0x2421,	// (0x000327cc) control_definitions

0x2421,	// (0x000327cc) format_table_attribute

0xac0e,	// (0x0003afb9) bg_popup_preview_window_pane_g9

0x2421,	// (0x000327cc) format_table_data2

0x2421,	// (0x000327cc) format_table_data3

0x2421,	// (0x000327cc) format_table_data_example

0x0008,

0x2421,	// (0x000327cc) intro_purpose

0xf8ea,	// (0x0003fc95) bg_popup_preview_window_pane_g

0x2421,	// (0x000327cc) texts_category

0x2421,	// (0x000327cc) texts_graphics

0x75b6,	// (0x00037961) text_digital

0x75c5,	// (0x00037970) text_primary

0x75d4,	// (0x0003797f) text_primary_small

0x75e3,	// (0x0003798e) text_secondary

0x75f2,	// (0x0003799d) text_title

0xb34c,	// (0x0003b6f7) bg_passive_tab_pane_g1_cp3_srt

0x710f,	// (0x000374ba) bg_passive_tab_pane_g2_cp3_srt

0xb355,	// (0x0003b700) bg_passive_tab_pane_g3_cp3_srt

0x247d,	// (0x00032828) bg_active_tab_pane_cp3_srt_ParamLimits

0x247d,	// (0x00032828) bg_active_tab_pane_cp3_srt

0xb35e,	// (0x0003b709) tabs_4_active_pane_srt_g1

0xb366,	// (0x0003b711) tabs_4_active_pane_srt_t1_ParamLimits

0xb366,	// (0x0003b711) tabs_4_active_pane_srt_t1

0xb34c,	// (0x0003b6f7) bg_active_tab_pane_g1_cp3_copy1

0x710f,	// (0x000374ba) bg_active_tab_pane_g2_cp3_copy1

0xb355,	// (0x0003b700) bg_active_tab_pane_g3_cp3_copy1

0x247d,	// (0x00032828) tabs_2_long_active_pane_srt_ParamLimits

0x247d,	// (0x00032828) tabs_2_long_active_pane_srt

0x247d,	// (0x00032828) tabs_2_long_passive_pane_srt_ParamLimits

0x247d,	// (0x00032828) tabs_2_long_passive_pane_srt

0x6be4,	// (0x00036f8f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6be4,	// (0x00036f8f) bg_passive_tab_pane_cp4_srt

0xb03c,	// (0x0003b3e7) bg_passive_tab_pane_g1_cp4_srt

0x710f,	// (0x000374ba) bg_passive_tab_pane_g2_cp4_srt

0xb045,	// (0x0003b3f0) bg_passive_tab_pane_g3_cp4_srt

0x2e0e,	// (0x000331b9) bg_active_tab_pane_cp4_srt_ParamLimits

0x2e0e,	// (0x000331b9) bg_active_tab_pane_cp4_srt

0xb04e,	// (0x0003b3f9) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb04e,	// (0x0003b3f9) tabs_2_long_active_pane_srt_t1

0xb03c,	// (0x0003b3e7) bg_active_tab_pane_g1_cp4_srt

0x710f,	// (0x000374ba) bg_active_tab_pane_g2_cp4_srt

0xb045,	// (0x0003b3f0) bg_active_tab_pane_g3_cp4_srt

0x246f,	// (0x0003281a) tabs_3_long_active_pane_srt_ParamLimits

0x246f,	// (0x0003281a) tabs_3_long_active_pane_srt

0x246f,	// (0x0003281a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x246f,	// (0x0003281a) tabs_3_long_passive_pane_cp_srt

0x246f,	// (0x0003281a) tabs_3_long_passive_pane_srt_ParamLimits

0x246f,	// (0x0003281a) tabs_3_long_passive_pane_srt

0x6be4,	// (0x00036f8f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6be4,	// (0x00036f8f) bg_passive_tab_pane_cp5_srt

0x72da,	// (0x00037685) bg_passive_tab_pane_g1_cp5_srt

0x710f,	// (0x000374ba) bg_passive_tab_pane_g2_cp5_srt

0x72e3,	// (0x0003768e) bg_passive_tab_pane_g3_cp5_srt

0x2e0e,	// (0x000331b9) bg_active_tab_pane_cp5_srt_ParamLimits

0x2e0e,	// (0x000331b9) bg_active_tab_pane_cp5_srt

0xb02a,	// (0x0003b3d5) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb02a,	// (0x0003b3d5) tabs_3_long_active_pane_srt_t1

0x72da,	// (0x00037685) bg_active_tab_pane_g1_cp5_srt

0x710f,	// (0x000374ba) bg_active_tab_pane_g2_cp5_srt

0x72e3,	// (0x0003768e) bg_active_tab_pane_g3_cp5_srt

0xb01c,	// (0x0003b3c7) navi_text_pane_srt_t1

0xb014,	// (0x0003b3bf) navi_icon_pane_srt_g1

0x9668,	// (0x00039a13) midp_editing_number_pane_srt

0x7601,	// (0x000379ac) midp_ticker_pane_srt

0x9670,	// (0x00039a1b) midp_ticker_pane_srt_g1

0x9678,	// (0x00039a23) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003fb1d) midp_ticker_pane_srt_g

0x9680,	// (0x00039a2b) midp_ticker_pane_srt_t1

0xb005,	// (0x0003b3b0) midp_editing_number_pane_t1_copy1

0x6be4,	// (0x00036f8f) listscroll_midp_pane

0x6be4,	// (0x00036f8f) midp_form_pane

0x9520,	// (0x000398cb) midp_info_popup_window_ParamLimits

0x9520,	// (0x000398cb) midp_info_popup_window

0x28db,	// (0x00032c86) bg_popup_sub_pane_cp50_ParamLimits

0x28db,	// (0x00032c86) bg_popup_sub_pane_cp50

0xa14c,	// (0x0003a4f7) listscroll_midp_info_pane_ParamLimits

0xa14c,	// (0x0003a4f7) listscroll_midp_info_pane

0xa134,	// (0x0003a4df) listscroll_form_midp_pane_ParamLimits

0xa134,	// (0x0003a4df) listscroll_form_midp_pane

0xa140,	// (0x0003a4eb) scroll_bar_cp050

0xa114,	// (0x0003a4bf) list_midp_pane

0xbd93,	// (0x0003c13e) signal_pane_g2_cp

0xa04e,	// (0x0003a3f9) listscroll_midp_info_pane_t1_ParamLimits

0xa04e,	// (0x0003a3f9) listscroll_midp_info_pane_t1

0xa066,	// (0x0003a411) listscroll_midp_info_pane_t2_ParamLimits

0xa066,	// (0x0003a411) listscroll_midp_info_pane_t2

0xa0a4,	// (0x0003a44f) listscroll_midp_info_pane_t3_ParamLimits

0xa0a4,	// (0x0003a44f) listscroll_midp_info_pane_t3

0xa0de,	// (0x0003a489) listscroll_midp_info_pane_t4_ParamLimits

0xa0de,	// (0x0003a489) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0003fbd0) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0003fbd0) listscroll_midp_info_pane_t

0x2951,	// (0x00032cfc) scroll_pane_cp21

0x9fee,	// (0x0003a399) form_midp_field_choice_group_pane

0x9ff7,	// (0x0003a3a2) form_midp_field_text_pane

0xa034,	// (0x0003a3df) form_midp_field_time_pane

0xa03c,	// (0x0003a3e7) form_midp_gauge_slider_pane

0xa045,	// (0x0003a3f0) form_midp_gauge_wait_pane

0x2421,	// (0x000327cc) form_midp_image_pane

0x7f71,	// (0x0003831c) list_single_midp_pane_ParamLimits

0x7f71,	// (0x0003831c) list_single_midp_pane

0x9fa3,	// (0x0003a34e) form_midp_field_text_pane_t1

0x9d6d,	// (0x0003a118) input_focus_pane_cp050

0x9fdd,	// (0x0003a388) list_midp_form_text_pane

0x9f72,	// (0x0003a31d) form_midp_field_choice_group_pane_t1

0x9f80,	// (0x0003a32b) input_focus_pane_cp051

0x9f94,	// (0x0003a33f) list_midp_choice_pane

0x2421,	// (0x000327cc) status_idle_pane

0x9f56,	// (0x0003a301) form_midp_field_time_pane_t1

0x2417,	// (0x000327c2) wait_anim_pane_g2_copy1

0x9f64,	// (0x0003a30f) form_midp_field_time_pane_t2

0x0001,

0x95d0,	// (0x0003997b) aid_navinavi_width_2_pane

0xf820,	// (0x0003fbcb) form_midp_field_time_pane_t

0x2421,	// (0x000327cc) input_focus_pane_cp052

0x2421,	// (0x000327cc) bg_input_focus_pane_cp040

0x9f16,	// (0x0003a2c1) form_midp_gauge_slider_pane_t1

0x9f24,	// (0x0003a2cf) form_midp_gauge_slider_pane_t2

0x9f32,	// (0x0003a2dd) form_midp_gauge_slider_pane_t3

0x9f40,	// (0x0003a2eb) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0003fbc2) form_midp_gauge_slider_pane_t

0x9f4e,	// (0x0003a2f9) form_midp_slider_pane

0x247d,	// (0x00032828) bg_input_focus_pane_cp041_ParamLimits

0x247d,	// (0x00032828) bg_input_focus_pane_cp041

0x9ee3,	// (0x0003a28e) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ee3,	// (0x0003a28e) form_midp_gauge_wait_pane_t1

0x9ef5,	// (0x0003a2a0) form_midp_gauge_wait_pane_t2_ParamLimits

0x9ef5,	// (0x0003a2a0) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0003fbbd) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0003fbbd) form_midp_gauge_wait_pane_t

0x9f07,	// (0x0003a2b2) form_midp_wait_pane_ParamLimits

0x9f07,	// (0x0003a2b2) form_midp_wait_pane

0x9ead,	// (0x0003a258) form_midp_image_pane_g1

0x9eb6,	// (0x0003a261) form_midp_image_pane_t1

0x9ec5,	// (0x0003a270) form_midp_image_pane_t2

0x9ed4,	// (0x0003a27f) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0003fbb6) form_midp_image_pane_t

0x9ea4,	// (0x0003a24f) list_single_midp_pane_g1

0x49ad,	// (0x00034d58) list_single_midp_pane_t1

0x9e7b,	// (0x0003a226) list_midp_form_item_pane_ParamLimits

0x9e7b,	// (0x0003a226) list_midp_form_item_pane

0x9578,	// (0x00039923) list_midp_form_item_pane_t1

0x9587,	// (0x00039932) midp_ticker_pane_g1

0x9593,	// (0x0003993e) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003fb03) midp_ticker_pane_g

0x959f,	// (0x0003994a) midp_ticker_pane_t1

0xb256,	// (0x0003b601) midp_editing_number_pane_t1

0xb234,	// (0x0003b5df) midp_editing_number_pane

0xb243,	// (0x0003b5ee) midp_ticker_pane

0xaff5,	// (0x0003b3a0) ai_message_heading_pane

0x2421,	// (0x000327cc) bg_popup_window_pane_cp14

0xaffd,	// (0x0003b3a8) listscroll_ai_message_pane

0xaf7f,	// (0x0003b32a) ai_message_heading_pane_g1_ParamLimits

0xaf7f,	// (0x0003b32a) ai_message_heading_pane_g1

0xaf8b,	// (0x0003b336) ai_message_heading_pane_g2_ParamLimits

0xaf8b,	// (0x0003b336) ai_message_heading_pane_g2

0xaf97,	// (0x0003b342) ai_message_heading_pane_g3_ParamLimits

0xaf97,	// (0x0003b342) ai_message_heading_pane_g3

0xafa3,	// (0x0003b34e) ai_message_heading_pane_g4_ParamLimits

0xafa3,	// (0x0003b34e) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0003fcf7) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0003fcf7) ai_message_heading_pane_g

0xafaf,	// (0x0003b35a) ai_message_heading_pane_t1_ParamLimits

0xafaf,	// (0x0003b35a) ai_message_heading_pane_t1

0xafc9,	// (0x0003b374) ai_message_heading_pane_t2_ParamLimits

0xafc9,	// (0x0003b374) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0003fd00) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0003fd00) ai_message_heading_pane_t

0xafdb,	// (0x0003b386) bg_popup_heading_pane_cp1_ParamLimits

0xafdb,	// (0x0003b386) bg_popup_heading_pane_cp1

0xaf6d,	// (0x0003b318) list_ai_message_pane_ParamLimits

0xaf6d,	// (0x0003b318) list_ai_message_pane

0x2951,	// (0x00032cfc) scroll_pane_cp10

0xaf09,	// (0x0003b2b4) list_ai_message_pane_g1

0xaf11,	// (0x0003b2bc) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0003fcd4) list_ai_message_pane_g

0xaf19,	// (0x0003b2c4) list_ai_message_pane_t1_ParamLimits

0xaf19,	// (0x0003b2c4) list_ai_message_pane_t1

0xaf2e,	// (0x0003b2d9) list_ai_message_pane_t2_ParamLimits

0xaf2e,	// (0x0003b2d9) list_ai_message_pane_t2

0xaf43,	// (0x0003b2ee) list_ai_message_pane_t3_ParamLimits

0xaf43,	// (0x0003b2ee) list_ai_message_pane_t3

0xaf58,	// (0x0003b303) list_ai_message_pane_t4_ParamLimits

0xaf58,	// (0x0003b303) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0003fcd9) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0003fcd9) list_ai_message_pane_t

0xaef4,	// (0x0003b29f) cell_ai_soft_ind_pane_ParamLimits

0xaef4,	// (0x0003b29f) cell_ai_soft_ind_pane

0x95b1,	// (0x0003995c) cell_ai_soft_ind_pane_g1_ParamLimits

0x95b1,	// (0x0003995c) cell_ai_soft_ind_pane_g1

0x2421,	// (0x000327cc) grid_highlight_cp1

0x95be,	// (0x00039969) text_secondary_cp56_ParamLimits

0x95be,	// (0x00039969) text_secondary_cp56

0xaec9,	// (0x0003b274) example_general_pane_ParamLimits

0xaec9,	// (0x0003b274) example_general_pane

0xaed5,	// (0x0003b280) example_parent_pane_g1_ParamLimits

0xaed5,	// (0x0003b280) example_parent_pane_g1

0xaee1,	// (0x0003b28c) example_parent_pane_t1_ParamLimits

0xaee1,	// (0x0003b28c) example_parent_pane_t1

0x7c05,	// (0x00037fb0) popup_preview_text_window_ParamLimits

0x7c05,	// (0x00037fb0) popup_preview_text_window

0x7532,	// (0x000378dd) list_single_pane_cp2_g4

0x264f,	// (0x000329fa) bg_popup_preview_window_pane_ParamLimits

0x264f,	// (0x000329fa) bg_popup_preview_window_pane

0xac16,	// (0x0003afc1) popup_preview_text_window_t1_ParamLimits

0xac16,	// (0x0003afc1) popup_preview_text_window_t1

0xac34,	// (0x0003afdf) popup_preview_text_window_t2_ParamLimits

0xac34,	// (0x0003afdf) popup_preview_text_window_t2

0xac7d,	// (0x0003b028) popup_preview_text_window_t3_ParamLimits

0xac7d,	// (0x0003b028) popup_preview_text_window_t3

0xacc2,	// (0x0003b06d) popup_preview_text_window_t4_ParamLimits

0xacc2,	// (0x0003b06d) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0003fca8) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0003fca8) popup_preview_text_window_t

0xad40,	// (0x0003b0eb) scroll_pane_cp11

0x9cf9,	// (0x0003a0a4) bg_popup_preview_window_pane_g1

0xabd6,	// (0x0003af81) bg_popup_preview_window_pane_g2

0xabde,	// (0x0003af89) bg_popup_preview_window_pane_g3

0xabe6,	// (0x0003af91) bg_popup_preview_window_pane_g4

0xabee,	// (0x0003af99) bg_popup_preview_window_pane_g5

0xabf6,	// (0x0003afa1) bg_popup_preview_window_pane_g6

0xabfe,	// (0x0003afa9) bg_popup_preview_window_pane_g7

0xac06,	// (0x0003afb1) bg_popup_preview_window_pane_g8

0x5b8b,	// (0x00035f36) aid_popup_width_pane

0x7be3,	// (0x00037f8e) popup_midp_note_alarm_window_ParamLimits

0x7be3,	// (0x00037f8e) popup_midp_note_alarm_window

0x2823,	// (0x00032bce) data_form_pane_ParamLimits

0x69b2,	// (0x00036d5d) form_field_data_pane_g1

0x69bc,	// (0x00036d67) form_field_data_pane_t1_ParamLimits

0x282f,	// (0x00032bda) input_focus_pane_ParamLimits

0x69d4,	// (0x00036d7f) data_form_wide_pane_ParamLimits

0x4840,	// (0x00034beb) form_field_data_wide_pane_g1

0x69e5,	// (0x00036d90) form_field_data_wide_pane_t1_ParamLimits

0x2723,	// (0x00032ace) input_focus_pane_cp6_ParamLimits

0x6b88,	// (0x00036f33) input_popup_find_pane_g1_ParamLimits

0x6b88,	// (0x00036f33) input_popup_find_pane_g1

0x6d1a,	// (0x000370c5) aid_navi_side_left_pane

0x6d2f,	// (0x000370da) aid_navi_side_right_pane

0xa5ff,	// (0x0003a9aa) bg_popup_window_pane_cp30_ParamLimits

0xa5ff,	// (0x0003a9aa) bg_popup_window_pane_cp30

0xa679,	// (0x0003aa24) popup_midp_note_alarm_window_g1_ParamLimits

0xa679,	// (0x0003aa24) popup_midp_note_alarm_window_g1

0xa6a9,	// (0x0003aa54) popup_midp_note_alarm_window_t1_ParamLimits

0xa6a9,	// (0x0003aa54) popup_midp_note_alarm_window_t1

0xa74a,	// (0x0003aaf5) popup_midp_note_alarm_window_t2_ParamLimits

0xa74a,	// (0x0003aaf5) popup_midp_note_alarm_window_t2

0xa7f8,	// (0x0003aba3) popup_midp_note_alarm_window_t3_ParamLimits

0xa7f8,	// (0x0003aba3) popup_midp_note_alarm_window_t3

0xa820,	// (0x0003abcb) popup_midp_note_alarm_window_t4_ParamLimits

0xa820,	// (0x0003abcb) popup_midp_note_alarm_window_t4

0xa840,	// (0x0003abeb) popup_midp_note_alarm_window_t5_ParamLimits

0xa840,	// (0x0003abeb) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0003fc45) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0003fc45) popup_midp_note_alarm_window_t

0xa8ec,	// (0x0003ac97) wait_bar_pane_cp1_ParamLimits

0xa8ec,	// (0x0003ac97) wait_bar_pane_cp1

0x2421,	// (0x000327cc) wait_anim_pane_copy1

0x2421,	// (0x000327cc) wait_border_pane_copy1

0xa2f5,	// (0x0003a6a0) wait_border_pane_g1_copy1

0x69ff,	// (0x00036daa) form_field_popup_pane_g1

0x6a07,	// (0x00036db2) form_field_popup_pane_t1_ParamLimits

0x282f,	// (0x00032bda) input_focus_pane_cp7_ParamLimits

0x285d,	// (0x00032c08) list_form_pane_ParamLimits

0x6a1f,	// (0x00036dca) form_field_popup_wide_pane_g1

0x6a27,	// (0x00036dd2) form_field_popup_wide_pane_t1_ParamLimits

0x282f,	// (0x00032bda) input_focus_pane_cp8_ParamLimits

0x2869,	// (0x00032c14) list_form_wide_pane_ParamLimits

0xb3e4,	// (0x0003b78f) aid_size_cell_graphic_pane

0x6ab1,	// (0x00036e5c) data_form_pane_t1_ParamLimits

0x81d8,	// (0x00038583) data_form_wide_pane_t1_ParamLimits

0x98c3,	// (0x00039c6e) bg_status_flat_pane

0x5f94,	// (0x0003633f) title_pane_t1_ParamLimits

0x2437,	// (0x000327e2) title_pane_t2_ParamLimits

0x245d,	// (0x00032808) title_pane_t3_ParamLimits

0xf557,	// (0x0003f902) title_pane_t_ParamLimits

0x2bfa,	// (0x00032fa5) level_1_signal_ParamLimits

0x2c07,	// (0x00032fb2) level_2_signal_ParamLimits

0x2c14,	// (0x00032fbf) level_3_signal_ParamLimits

0x2c21,	// (0x00032fcc) level_4_signal_ParamLimits

0x2c2e,	// (0x00032fd9) level_5_signal_ParamLimits

0x2c3b,	// (0x00032fe6) level_6_signal_ParamLimits

0x2c48,	// (0x00032ff3) level_7_signal_ParamLimits

0x2bfa,	// (0x00032fa5) level_1_battery_ParamLimits

0x2c07,	// (0x00032fb2) level_2_battery_ParamLimits

0x2c14,	// (0x00032fbf) level_3_battery_ParamLimits

0x2c21,	// (0x00032fcc) level_4_battery_ParamLimits

0x2c2e,	// (0x00032fd9) level_5_battery_ParamLimits

0x2c3b,	// (0x00032fe6) level_6_battery_ParamLimits

0x2c48,	// (0x00032ff3) level_7_battery_ParamLimits

0xa504,	// (0x0003a8af) bg_status_flat_pane_g1

0xa50c,	// (0x0003a8b7) bg_status_flat_pane_g2

0xa514,	// (0x0003a8bf) bg_status_flat_pane_g3

0xa51c,	// (0x0003a8c7) bg_status_flat_pane_g4

0xa524,	// (0x0003a8cf) bg_status_flat_pane_g5

0xa52c,	// (0x0003a8d7) bg_status_flat_pane_g6

0xa534,	// (0x0003a8df) bg_status_flat_pane_g7

0x6004,	// (0x000363af) tabs_3_active_pane_t1_ParamLimits

0x6004,	// (0x000363af) tabs_3_passive_pane_t1_ParamLimits

0x601e,	// (0x000363c9) tabs_4_active_pane_t1_ParamLimits

0x601e,	// (0x000363c9) tabs_4_1_passive_pane_t1_ParamLimits

0x6bbf,	// (0x00036f6a) tabs_2_active_pane_t1_ParamLimits

0x6bbf,	// (0x00036f6a) tabs_2_passive_pane_t1_ParamLimits

0x2e0e,	// (0x000331b9) bg_active_tab_pane_cp4_ParamLimits

0x6bd1,	// (0x00036f7c) tabs_2_long_active_pane_t1_ParamLimits

0x6be4,	// (0x00036f8f) bg_passive_tab_pane_cp4_ParamLimits

0x7ebe,	// (0x00038269) list_single_midp_graphic_pane_t1_ParamLimits

0x2e0e,	// (0x000331b9) bg_active_tab_pane_cp5_ParamLimits

0x6bf0,	// (0x00036f9b) tabs_3_long_active_pane_t1_ParamLimits

0x6be4,	// (0x00036f8f) bg_passive_tab_pane_cp5_ParamLimits

0x7ebe,	// (0x00038269) list_single_midp_graphic_pane_t1

0x98c3,	// (0x00039c6e) bg_status_flat_pane_ParamLimits

0x998c,	// (0x00039d37) indicator_pane_cp2_ParamLimits

0x998c,	// (0x00039d37) indicator_pane_cp2

0x9ab7,	// (0x00039e62) navi_pane_srt_ParamLimits

0x9ab7,	// (0x00039e62) navi_pane_srt

0x9adb,	// (0x00039e86) popup_clock_digital_analogue_window_cp1

0x24c1,	// (0x0003286c) indicator_pane_t1

0x7601,	// (0x000379ac) copy_highlight_pane

0x7601,	// (0x000379ac) cursor_graphics_pane

0x7601,	// (0x000379ac) graphic_within_text_pane

0x7601,	// (0x000379ac) link_highlight_pane

0xad03,	// (0x0003b0ae) popup_preview_text_window_t5_ParamLimits

0xad03,	// (0x0003b0ae) popup_preview_text_window_t5

0x95d8,	// (0x00039983) cursor_digital_pane

0x95d8,	// (0x00039983) cursor_primary_pane

0x95e9,	// (0x00039994) cursor_primary_small_pane

0x95f1,	// (0x0003999c) cursor_secondary_pane

0x95f9,	// (0x000399a4) cursor_title_pane

0x95d8,	// (0x00039983) link_highlight_digital_pane

0x95e0,	// (0x0003998b) link_highlight_primary_pane

0x95e9,	// (0x00039994) link_highlight_primary_small_pane

0x95f1,	// (0x0003999c) link_highlight_secondary_pane

0x95f9,	// (0x000399a4) link_highlight_title_pane

0x95d8,	// (0x00039983) copy_highlight_digital_pane

0x95d8,	// (0x00039983) copy_highlight_primary_pane

0x95e9,	// (0x00039994) copy_highlight_primary_small_pane

0x95f1,	// (0x0003999c) copy_highlight_secondary_pane

0x95f9,	// (0x000399a4) copy_highlight_title_pane

0x95f1,	// (0x0003999c) graphic_text_digital_pane

0xa5a2,	// (0x0003a94d) graphic_text_primary_pane

0xa5ab,	// (0x0003a956) graphic_text_primary_small_pane

0x95e9,	// (0x00039994) graphic_text_secondary_pane

0x95d8,	// (0x00039983) graphic_text_title_pane

0x9601,	// (0x000399ac) cursor_primary_pane_g1

0xa594,	// (0x0003a93f) cursor_text_primary_t1

0xa57c,	// (0x0003a927) cursor_primary_small_pane_g1

0xa586,	// (0x0003a931) cursor_text_primary_small_t1

0xa564,	// (0x0003a90f) cursor_primary_small_pane_g1_copy1

0xa56e,	// (0x0003a919) cursor_text_primary_small_t1_copy1

0xa54c,	// (0x0003a8f7) cursor_text_title_t1

0xa55a,	// (0x0003a905) cursor_title_pane_g1

0x9601,	// (0x000399ac) cursor_digital_pane_g1

0x960b,	// (0x000399b6) cursor_text_digital_t1

0x9619,	// (0x000399c4) link_highlight_primary_pane_g1

0xa4f5,	// (0x0003a8a0) link_highlight_primary_pane_t1

0x9619,	// (0x000399c4) link_highlight_primary_small_pane_g1

0x9621,	// (0x000399cc) link_highlight_primary_small_pane_t1

0x9619,	// (0x000399c4) link_highlight_secondary_pane_g1

0x9630,	// (0x000399db) link_highlight_secondary_pane_t1

0xa45a,	// (0x0003a805) link_highlight_title_pane_g1

0xa471,	// (0x0003a81c) link_highlight_title_pane_t1

0xa45a,	// (0x0003a805) link_highlight_digital_pane_g1

0xa462,	// (0x0003a80d) link_highlight_digital_pane_t1

0xa314,	// (0x0003a6bf) copy_highlight_primary_pane_g1

0xa33a,	// (0x0003a6e5) copy_highlight_primary_pane_t1

0xa314,	// (0x0003a6bf) copy_highlight_primary_small_pane_g1

0xa32b,	// (0x0003a6d6) copy_highlight_primary_small_pane_t1

0x963f,	// (0x000399ea) copy_highlight_secondary_pane_g1

0x9647,	// (0x000399f2) copy_highlight_secondary_pane_t1

0xa314,	// (0x0003a6bf) copy_highlight_title_pane_g1

0xa31c,	// (0x0003a6c7) copy_highlight_title_pane_t1

0xa314,	// (0x0003a6bf) copy_highlight_digital_pane_g1

0xb5ae,	// (0x0003b959) copy_highlight_digital_pane_t1

0xb502,	// (0x0003b8ad) graphic_text_primary_pane_g1

0xb592,	// (0x0003b93d) graphic_text_primary_pane_t1

0xb5a0,	// (0x0003b94b) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0003fd74) graphic_text_primary_pane_t

0xb56e,	// (0x0003b919) graphic_text_primary_small_pane_g1

0xb576,	// (0x0003b921) graphic_text_primary_small_pane_t1

0xb584,	// (0x0003b92f) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0003fd6f) graphic_text_primary_small_pane_t

0xb54a,	// (0x0003b8f5) graphic_text_secondary_pane_g1

0xb552,	// (0x0003b8fd) graphic_text_secondary_pane_t1

0xb560,	// (0x0003b90b) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0003fd6a) graphic_text_secondary_pane_t

0xb526,	// (0x0003b8d1) graphic_text_title_pane_g1

0xb52e,	// (0x0003b8d9) graphic_text_title_pane_t1

0xb53c,	// (0x0003b8e7) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0003fd65) graphic_text_title_pane_t

0xb502,	// (0x0003b8ad) graphic_text_digital_pane_g1

0xb50a,	// (0x0003b8b5) graphic_text_digital_pane_t1

0xb518,	// (0x0003b8c3) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0003fd60) graphic_text_digital_pane_t

0x247d,	// (0x00032828) navi_icon_pane_srt_ParamLimits

0x247d,	// (0x00032828) navi_icon_pane_srt

0x2421,	// (0x000327cc) navi_midp_pane_srt

0x2421,	// (0x000327cc) navi_navi_pane_srt

0x247d,	// (0x00032828) navi_text_pane_srt_ParamLimits

0x247d,	// (0x00032828) navi_text_pane_srt

0xb4cd,	// (0x0003b878) navi_navi_icon_text_pane_srt

0xb4d5,	// (0x0003b880) navi_navi_pane_srt_g1_ParamLimits

0xb4d5,	// (0x0003b880) navi_navi_pane_srt_g1

0xb4e7,	// (0x0003b892) navi_navi_pane_srt_g2_ParamLimits

0xb4e7,	// (0x0003b892) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0003fd5b) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0003fd5b) navi_navi_pane_srt_g

0xb4f9,	// (0x0003b8a4) navi_navi_tabs_pane_srt

0xb4cd,	// (0x0003b878) navi_navi_text_pane_srt

0xb4cd,	// (0x0003b878) navi_navi_volume_pane_srt

0xb4be,	// (0x0003b869) navi_navi_text_pane_srt_t1

0x8365,	// (0x00038710) navi_navi_volume_pane_srt_g1

0x836d,	// (0x00038718) volume_small_pane_srt_ParamLimits

0x836d,	// (0x00038718) volume_small_pane_srt

0x766f,	// (0x00037a1a) volume_small_pane_srt_g1_ParamLimits

0x766f,	// (0x00037a1a) volume_small_pane_srt_g1

0x767f,	// (0x00037a2a) volume_small_pane_srt_g2_ParamLimits

0x767f,	// (0x00037a2a) volume_small_pane_srt_g2

0x7690,	// (0x00037a3b) volume_small_pane_srt_g3_ParamLimits

0x7690,	// (0x00037a3b) volume_small_pane_srt_g3

0x76a1,	// (0x00037a4c) volume_small_pane_srt_g4_ParamLimits

0x76a1,	// (0x00037a4c) volume_small_pane_srt_g4

0x76b2,	// (0x00037a5d) volume_small_pane_srt_g5_ParamLimits

0x76b2,	// (0x00037a5d) volume_small_pane_srt_g5

0x76c3,	// (0x00037a6e) volume_small_pane_srt_g6_ParamLimits

0x76c3,	// (0x00037a6e) volume_small_pane_srt_g6

0x76d4,	// (0x00037a7f) volume_small_pane_srt_g7_ParamLimits

0x76d4,	// (0x00037a7f) volume_small_pane_srt_g7

0x76e5,	// (0x00037a90) volume_small_pane_srt_g8_ParamLimits

0x76e5,	// (0x00037a90) volume_small_pane_srt_g8

0x76f6,	// (0x00037aa1) volume_small_pane_srt_g9_ParamLimits

0x76f6,	// (0x00037aa1) volume_small_pane_srt_g9

0x7707,	// (0x00037ab2) volume_small_pane_srt_g10_ParamLimits

0x7707,	// (0x00037ab2) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003fb08) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003fb08) volume_small_pane_srt_g

0x6245,	// (0x000365f0) query_popup_data_pane_cp2

0xb4a4,	// (0x0003b84f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4a4,	// (0x0003b84f) navi_navi_icon_text_pane_srt_t1

0xa5a2,	// (0x0003a94d) navi_tabs_2_long_pane_srt

0xa5a2,	// (0x0003a94d) navi_tabs_2_pane_srt

0xa5a2,	// (0x0003a94d) navi_tabs_3_long_pane_srt

0xa5a2,	// (0x0003a94d) navi_tabs_3_pane_srt

0xa5a2,	// (0x0003a94d) navi_tabs_4_pane_srt

0x8345,	// (0x000386f0) tabs_2_active_pane_srt_ParamLimits

0x8345,	// (0x000386f0) tabs_2_active_pane_srt

0x8355,	// (0x00038700) tabs_2_passive_pane_srt_ParamLimits

0x8355,	// (0x00038700) tabs_2_passive_pane_srt

0x97ec,	// (0x00039b97) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97ec,	// (0x00039b97) bg_passive_tab_pane_cp1_srt

0xb470,	// (0x0003b81b) bg_passive_tab_pane_g1_cp1_srt

0x710f,	// (0x000374ba) bg_passive_tab_pane_g2_cp1_srt

0xb479,	// (0x0003b824) bg_passive_tab_pane_g3_cp1_srt

0x247d,	// (0x00032828) bg_active_tab_pane_cp1_srt_ParamLimits

0x247d,	// (0x00032828) bg_active_tab_pane_cp1_srt

0xb482,	// (0x0003b82d) tabs_2_active_pane_srt_g1

0xb48a,	// (0x0003b835) tabs_2_active_pane_srt_t1_ParamLimits

0xb48a,	// (0x0003b835) tabs_2_active_pane_srt_t1

0xb470,	// (0x0003b81b) bg_active_tab_pane_g1_cp1_srt

0x710f,	// (0x000374ba) bg_active_tab_pane_g2_cp1_srt

0xb479,	// (0x0003b824) bg_active_tab_pane_g3_cp1_srt

0x8312,	// (0x000386bd) tabs_3_active_pane_srt_ParamLimits

0x8312,	// (0x000386bd) tabs_3_active_pane_srt

0x8323,	// (0x000386ce) tabs_3_passive_pane_cp_srt_ParamLimits

0x8323,	// (0x000386ce) tabs_3_passive_pane_cp_srt

0x8334,	// (0x000386df) tabs_3_passive_pane_srt_ParamLimits

0x8334,	// (0x000386df) tabs_3_passive_pane_srt

0x97ec,	// (0x00039b97) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97ec,	// (0x00039b97) bg_passive_tab_pane_cp2_srt

0x9656,	// (0x00039a01) bg_passive_tab_pane_g1_cp2_srt

0x710f,	// (0x000374ba) bg_passive_tab_pane_g2_cp2_srt

0x965f,	// (0x00039a0a) bg_passive_tab_pane_g3_cp2_srt

0x247d,	// (0x00032828) bg_active_tab_pane_cp2_srt_ParamLimits

0x247d,	// (0x00032828) bg_active_tab_pane_cp2_srt

0xb456,	// (0x0003b801) tabs_3_active_pane_srt_g1

0xb45e,	// (0x0003b809) tabs_3_active_pane_srt_t1_ParamLimits

0xb45e,	// (0x0003b809) tabs_3_active_pane_srt_t1

0x9656,	// (0x00039a01) bg_active_tab_pane_g1_cp2_srt

0x710f,	// (0x000374ba) bg_active_tab_pane_g2_cp2_srt

0x965f,	// (0x00039a0a) bg_active_tab_pane_g3_cp2_srt

0x82ca,	// (0x00038675) tabs_4_active_pane_srt_ParamLimits

0x82ca,	// (0x00038675) tabs_4_active_pane_srt

0x82dc,	// (0x00038687) tabs_4_passive_pane_cp2_srt_ParamLimits

0x82dc,	// (0x00038687) tabs_4_passive_pane_cp2_srt

0x786c,	// (0x00037c17) aid_size_cell_toolbar

0x6be4,	// (0x00036f8f) main_idle_act_pane_ParamLimits

0x7a15,	// (0x00037dc0) popup_large_graphic_colour_window_ParamLimits

0x7d80,	// (0x0003812b) popup_toolbar_window_ParamLimits

0x7d80,	// (0x0003812b) popup_toolbar_window

0x49e4,	// (0x00034d8f) list_single_graphic_2heading_pane_ParamLimits

0x49e4,	// (0x00034d8f) list_single_graphic_2heading_pane

0x2ae2,	// (0x00032e8d) aid_size_cell_apps_grid_lsc_pane

0x2af4,	// (0x00032e9f) aid_size_cell_apps_grid_prt_pane

0x97ec,	// (0x00039b97) bg_wml_button_pane_cp1_ParamLimits

0x97ec,	// (0x00039b97) bg_wml_button_pane_cp1

0x9fa3,	// (0x0003a34e) form_midp_field_text_pane_t1_ParamLimits

0x9d6d,	// (0x0003a118) input_focus_pane_cp050_ParamLimits

0x9fdd,	// (0x0003a388) list_midp_form_text_pane_ParamLimits

0x9f80,	// (0x0003a32b) input_focus_pane_cp051_ParamLimits

0x9f94,	// (0x0003a33f) list_midp_choice_pane_ParamLimits

0x9e23,	// (0x0003a1ce) list_single_2graphic_pane_cp3_ParamLimits

0x9e23,	// (0x0003a1ce) list_single_2graphic_pane_cp3

0x9e48,	// (0x0003a1f3) list_single_midp_graphic_pane_ParamLimits

0x9e48,	// (0x0003a1f3) list_single_midp_graphic_pane

0x5af9,	// (0x00035ea4) list_single_graphic_2heading_pane_g1_ParamLimits

0x5af9,	// (0x00035ea4) list_single_graphic_2heading_pane_g1

0x5b05,	// (0x00035eb0) list_single_graphic_2heading_pane_g4_ParamLimits

0x5b05,	// (0x00035eb0) list_single_graphic_2heading_pane_g4

0x5b11,	// (0x00035ebc) list_single_graphic_2heading_pane_g5_ParamLimits

0x5b11,	// (0x00035ebc) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003fb5b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003fb5b) list_single_graphic_2heading_pane_g

0x5b1d,	// (0x00035ec8) list_single_graphic_2heading_pane_t1_ParamLimits

0x5b1d,	// (0x00035ec8) list_single_graphic_2heading_pane_t1

0x5b31,	// (0x00035edc) list_single_graphic_2heading_pane_t2_ParamLimits

0x5b31,	// (0x00035edc) list_single_graphic_2heading_pane_t2

0x5b4b,	// (0x00035ef6) list_single_graphic_2heading_pane_t3_ParamLimits

0x5b4b,	// (0x00035ef6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003fb62) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003fb62) list_single_graphic_2heading_pane_t

0x9c37,	// (0x00039fe2) bg_popup_sub_pane_cp2

0x9c61,	// (0x0003a00c) grid_toobar_pane

0x7e2d,	// (0x000381d8) cell_toolbar_pane_ParamLimits

0x7e2d,	// (0x000381d8) cell_toolbar_pane

0x9c9d,	// (0x0003a048) cell_toolbar_pane_g1_ParamLimits

0x9c9d,	// (0x0003a048) cell_toolbar_pane_g1

0x9cb1,	// (0x0003a05c) cell_toolbar_pane_g2_ParamLimits

0x9cb1,	// (0x0003a05c) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003fb70) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003fb70) cell_toolbar_pane_g

0x9cd3,	// (0x0003a07e) grid_highlight_pane_cp2_ParamLimits

0x9cd3,	// (0x0003a07e) grid_highlight_pane_cp2

0x9ced,	// (0x0003a098) toolbar_button_pane

0x9cf9,	// (0x0003a0a4) toolbar_button_pane_g1

0x9d01,	// (0x0003a0ac) toolbar_button_pane_g2

0x9d09,	// (0x0003a0b4) toolbar_button_pane_g3

0x9d11,	// (0x0003a0bc) toolbar_button_pane_g4

0x9d19,	// (0x0003a0c4) toolbar_button_pane_g5

0x9d21,	// (0x0003a0cc) toolbar_button_pane_g6

0x9d29,	// (0x0003a0d4) toolbar_button_pane_g7

0x9d31,	// (0x0003a0dc) toolbar_button_pane_g8

0x9d39,	// (0x0003a0e4) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003fb75) toolbar_button_pane_g

0x7e65,	// (0x00038210) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7e65,	// (0x00038210) list_single_2graphic_pane_g1_cp3

0x7e71,	// (0x0003821c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7e71,	// (0x0003821c) list_single_2graphic_pane_g2_cp3

0x7e82,	// (0x0003822d) list_single_2graphic_pane_g3_cp3

0x7e8a,	// (0x00038235) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7e8a,	// (0x00038235) list_single_2graphic_pane_g4_cp3

0x7e96,	// (0x00038241) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7e96,	// (0x00038241) list_single_2graphic_pane_t1_cp3

0x7eb2,	// (0x0003825d) list_single_midp_graphic_pane_g2_ParamLimits

0x7eb2,	// (0x0003825d) list_single_midp_graphic_pane_g2

0x7874,	// (0x00037c1f) aid_zoom_text_primary

0x5add,	// (0x00035e88) aid_zoom_text_secondary

0x9710,	// (0x00039abb) status_small_pane_g7_ParamLimits

0x9710,	// (0x00039abb) status_small_pane_g7

0x9733,	// (0x00039ade) status_small_pane_t1_ParamLimits

0x5f77,	// (0x00036322) title_pane_g2

0x0003,

0xf54e,	// (0x0003f8f9) title_pane_g

0x629f,	// (0x0003664a) aid_size_cell_colour_1_pane_ParamLimits

0x629f,	// (0x0003664a) aid_size_cell_colour_1_pane

0x62b3,	// (0x0003665e) aid_size_cell_colour_2_pane_ParamLimits

0x62b3,	// (0x0003665e) aid_size_cell_colour_2_pane

0x62c7,	// (0x00036672) aid_size_cell_colour_3_pane_ParamLimits

0x62c7,	// (0x00036672) aid_size_cell_colour_3_pane

0x62db,	// (0x00036686) aid_size_cell_colour_4_pane_ParamLimits

0x62db,	// (0x00036686) aid_size_cell_colour_4_pane

0x6c57,	// (0x00037002) title_pane_stacon_g1_ParamLimits

0x6c57,	// (0x00037002) title_pane_stacon_g1

0xa391,	// (0x0003a73c) popup_note_wait_window_g3_ParamLimits

0xa391,	// (0x0003a73c) popup_note_wait_window_g3

0xa407,	// (0x0003a7b2) popup_note_wait_window_t5_ParamLimits

0xa407,	// (0x0003a7b2) popup_note_wait_window_t5

0x2421,	// (0x000327cc) main_feb_china_hwr_fs_writing_pane

0x78fc,	// (0x00037ca7) popup_feb_china_hwr_fs_window_ParamLimits

0x78fc,	// (0x00037ca7) popup_feb_china_hwr_fs_window

0x7ed4,	// (0x0003827f) aid_size_cell_hwr_fs_ParamLimits

0x7ed4,	// (0x0003827f) aid_size_cell_hwr_fs

0x9d6d,	// (0x0003a118) bg_popup_sub_pane_cp3_ParamLimits

0x9d6d,	// (0x0003a118) bg_popup_sub_pane_cp3

0x7ee9,	// (0x00038294) grid_hwr_fs_pane_ParamLimits

0x7ee9,	// (0x00038294) grid_hwr_fs_pane

0x7f01,	// (0x000382ac) linegrid_hwr_fs_pane_ParamLimits

0x7f01,	// (0x000382ac) linegrid_hwr_fs_pane

0x7f11,	// (0x000382bc) cell_hwr_fs_pane_ParamLimits

0x7f11,	// (0x000382bc) cell_hwr_fs_pane

0x9d79,	// (0x0003a124) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d79,	// (0x0003a124) linegrid_hwr_fs_pane_g1

0x9d85,	// (0x0003a130) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d85,	// (0x0003a130) linegrid_hwr_fs_pane_g2

0x9d97,	// (0x0003a142) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d97,	// (0x0003a142) linegrid_hwr_fs_pane_g3

0x7f33,	// (0x000382de) linegrid_hwr_fs_pane_g4_ParamLimits

0x7f33,	// (0x000382de) linegrid_hwr_fs_pane_g4

0x7f4d,	// (0x000382f8) linegrid_hwr_fs_pane_g5_ParamLimits

0x7f4d,	// (0x000382f8) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0003fb9b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0003fb9b) linegrid_hwr_fs_pane_g

0x9da3,	// (0x0003a14e) cell_hwr_fs_pane_g1_ParamLimits

0x9da3,	// (0x0003a14e) cell_hwr_fs_pane_g1

0x9b71,	// (0x00039f1c) cell_hwr_fs_pane_g2_ParamLimits

0x9b71,	// (0x00039f1c) cell_hwr_fs_pane_g2

0x9db9,	// (0x0003a164) cell_hwr_fs_pane_g3_ParamLimits

0x9db9,	// (0x0003a164) cell_hwr_fs_pane_g3

0x9dc6,	// (0x0003a171) cell_hwr_fs_pane_g4_ParamLimits

0x9dc6,	// (0x0003a171) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0003fba6) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003fba6) cell_hwr_fs_pane_g

0x7f63,	// (0x0003830e) cell_hwr_fs_pane_t1

0x2421,	// (0x000327cc) grid_highlight_pane_cp6

0x2421,	// (0x000327cc) main_idle_act2_pane

0x2938,	// (0x00032ce3) aid_inside_area_popup_secondary

0xaa26,	// (0x0003add1) aid_inside_area_window_primary_ParamLimits

0xaa26,	// (0x0003add1) aid_inside_area_window_primary

0xb5bd,	// (0x0003b968) ai2_news_ticker_pane

0xb5c5,	// (0x0003b970) aid_size_cell_ai1_link_ParamLimits

0xb5c5,	// (0x0003b970) aid_size_cell_ai1_link

0xb5df,	// (0x0003b98a) popup_ai2_data_window_ParamLimits

0xb5df,	// (0x0003b98a) popup_ai2_data_window

0xb5f5,	// (0x0003b9a0) popup_ai2_link_window_ParamLimits

0xb5f5,	// (0x0003b9a0) popup_ai2_link_window

0x9d6d,	// (0x0003a118) bg_popup_sub_pane_cp4_ParamLimits

0x9d6d,	// (0x0003a118) bg_popup_sub_pane_cp4

0xb609,	// (0x0003b9b4) grid_ai2_link_pane_ParamLimits

0xb609,	// (0x0003b9b4) grid_ai2_link_pane

0xb620,	// (0x0003b9cb) popup_ai2_link_window_g1_ParamLimits

0xb620,	// (0x0003b9cb) popup_ai2_link_window_g1

0xb62c,	// (0x0003b9d7) popup_ai2_link_window_g2_ParamLimits

0xb62c,	// (0x0003b9d7) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0003fd79) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0003fd79) popup_ai2_link_window_g

0xb63b,	// (0x0003b9e6) ai2_mp_button_pane

0xb643,	// (0x0003b9ee) ai2_mp_volume_pane

0x9f80,	// (0x0003a32b) bg_popup_sub_pane_cp5_ParamLimits

0x9f80,	// (0x0003a32b) bg_popup_sub_pane_cp5

0xb64b,	// (0x0003b9f6) heading_ai2_gene_pane_ParamLimits

0xb64b,	// (0x0003b9f6) heading_ai2_gene_pane

0xb657,	// (0x0003ba02) list_ai2_gene_pane_ParamLimits

0xb657,	// (0x0003ba02) list_ai2_gene_pane

0xb69f,	// (0x0003ba4a) cell_ai2_link_pane_ParamLimits

0xb69f,	// (0x0003ba4a) cell_ai2_link_pane

0xb6b5,	// (0x0003ba60) cell_ai2_link_pane_g1

0x2421,	// (0x000327cc) grid_highlight_pane_cp7

0x8382,	// (0x0003872d) ai2_mp_volume_pane_g1

0xb785,	// (0x0003bb30) ai2_mp_volume_pane_g2

0xb6fa,	// (0x0003baa5) list_ai2_gene_pane_t1

0xb78d,	// (0x0003bb38) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0003fd92) ai2_mp_volume_pane_g

0x838a,	// (0x00038735) volume_small_pane_cp3

0xb795,	// (0x0003bb40) aid_size_cell_ai2_button

0xb79d,	// (0x0003bb48) grid_ai2_button_pane

0xb7a6,	// (0x0003bb51) cell_ai2_button_pane_ParamLimits

0xb7a6,	// (0x0003bb51) cell_ai2_button_pane

0x2417,	// (0x000327c2) cell_ai2_button_pane_g1

0x2421,	// (0x000327cc) grid_highlight_pane_cp8

0xb745,	// (0x0003baf0) ai2_gene_pane_t1_ParamLimits

0xb745,	// (0x0003baf0) ai2_gene_pane_t1

0x7862,	// (0x00037c0d) aid_height_parent_landscape

0xb09c,	// (0x0003b447) aid_height_set_list

0xb0ad,	// (0x0003b458) aid_size_parent

0xb3e4,	// (0x0003b78f) aid_size_cell_graphic_pane_ParamLimits

0xb667,	// (0x0003ba12) popup_ai2_data_window_g1_ParamLimits

0xb667,	// (0x0003ba12) popup_ai2_data_window_g1

0xb673,	// (0x0003ba1e) ai2_news_ticker_pane_g1

0xb67b,	// (0x0003ba26) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0003fd7e) ai2_news_ticker_pane_g

0xb683,	// (0x0003ba2e) ai2_news_ticker_pane_t1

0xb691,	// (0x0003ba3c) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0003fd83) ai2_news_ticker_pane_t

0xb6be,	// (0x0003ba69) heading_ai2_gene_pane_g1

0xb6c6,	// (0x0003ba71) heading_ai2_gene_pane_t1_ParamLimits

0xb6c6,	// (0x0003ba71) heading_ai2_gene_pane_t1

0xb6db,	// (0x0003ba86) list_highlight_pane_cp6

0xb6e3,	// (0x0003ba8e) ai2_gene_pane_ParamLimits

0xb6e3,	// (0x0003ba8e) ai2_gene_pane

0xb708,	// (0x0003bab3) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0003fd88) list_ai2_gene_pane_t

0xb716,	// (0x0003bac1) list_highlight_pane_cp8_ParamLimits

0xb716,	// (0x0003bac1) list_highlight_pane_cp8

0xb727,	// (0x0003bad2) ai2_gene_pane_g1_ParamLimits

0xb727,	// (0x0003bad2) ai2_gene_pane_g1

0xb739,	// (0x0003bae4) ai2_gene_pane_g2_ParamLimits

0xb739,	// (0x0003bae4) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0003fd8d) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0003fd8d) ai2_gene_pane_g

0x27ce,	// (0x00032b79) scroll_pane_cp12

0x7821,	// (0x00037bcc) control_pane_t3_ParamLimits

0x7821,	// (0x00037bcc) control_pane_t3

0x9724,	// (0x00039acf) status_small_pane_g8_ParamLimits

0x9724,	// (0x00039acf) status_small_pane_g8

0x79de,	// (0x00037d89) popup_find_window_ParamLimits

0x7bf7,	// (0x00037fa2) popup_note_image_window_ParamLimits

0x478e,	// (0x00034b39) list_double2_graphic_pane_vc_g1_ParamLimits

0x478e,	// (0x00034b39) list_double2_graphic_pane_vc_g1

0x4714,	// (0x00034abf) list_double2_graphic_pane_vc_g2_ParamLimits

0x4714,	// (0x00034abf) list_double2_graphic_pane_vc_g2

0x4720,	// (0x00034acb) list_double2_graphic_pane_vc_g3_ParamLimits

0x4720,	// (0x00034acb) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003fb69) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003fb69) list_double2_graphic_pane_vc_g

0x48df,	// (0x00034c8a) list_double2_graphic_pane_vc_t1_ParamLimits

0x48df,	// (0x00034c8a) list_double2_graphic_pane_vc_t1

0x4714,	// (0x00034abf) list_single_heading_pane_vc_g1_ParamLimits

0x4714,	// (0x00034abf) list_single_heading_pane_vc_g1

0x4720,	// (0x00034acb) list_single_heading_pane_vc_g2_ParamLimits

0x4720,	// (0x00034acb) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f973) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f973) list_single_heading_pane_vc_g

0x48f5,	// (0x00034ca0) list_single_heading_pane_vc_t1_ParamLimits

0x48f5,	// (0x00034ca0) list_single_heading_pane_vc_t1

0x490d,	// (0x00034cb8) list_single_heading_pane_vc_t2_ParamLimits

0x490d,	// (0x00034cb8) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0003fb8a) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0003fb8a) list_single_heading_pane_vc_t

0x4929,	// (0x00034cd4) list_setting_number_pane_vc_g1_ParamLimits

0x4929,	// (0x00034cd4) list_setting_number_pane_vc_g1

0x4935,	// (0x00034ce0) list_setting_number_pane_vc_g2_ParamLimits

0x4935,	// (0x00034ce0) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003fb8f) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003fb8f) list_setting_number_pane_vc_g

0x4941,	// (0x00034cec) list_setting_number_pane_vc_t1_ParamLimits

0x4941,	// (0x00034cec) list_setting_number_pane_vc_t1

0x4955,	// (0x00034d00) list_setting_number_pane_vc_t2_ParamLimits

0x4955,	// (0x00034d00) list_setting_number_pane_vc_t2

0x4971,	// (0x00034d1c) list_setting_number_pane_vc_t3_ParamLimits

0x4971,	// (0x00034d1c) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0003fb94) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0003fb94) list_setting_number_pane_vc_t

0x499d,	// (0x00034d48) set_value_pane_vc_ParamLimits

0x499d,	// (0x00034d48) set_value_pane_vc

0x49e4,	// (0x00034d8f) list_double2_graphic_pane_vc_ParamLimits

0x49e4,	// (0x00034d8f) list_double2_graphic_pane_vc

0xb281,	// (0x0003b62c) list_double2_large_graphic_pane_vc_ParamLimits

0xb281,	// (0x0003b62c) list_double2_large_graphic_pane_vc

0x49e4,	// (0x00034d8f) list_double2_pane_vc_ParamLimits

0x49e4,	// (0x00034d8f) list_double2_pane_vc

0x49e4,	// (0x00034d8f) list_double_graphic_heading_pane_vc_ParamLimits

0x49e4,	// (0x00034d8f) list_double_graphic_heading_pane_vc

0x49e4,	// (0x00034d8f) list_double_graphic_pane_vc_ParamLimits

0x49e4,	// (0x00034d8f) list_double_graphic_pane_vc

0x49e4,	// (0x00034d8f) list_double_heading_pane_vc_ParamLimits

0x49e4,	// (0x00034d8f) list_double_heading_pane_vc

0xb293,	// (0x0003b63e) list_double_large_graphic_pane_vc_ParamLimits

0xb293,	// (0x0003b63e) list_double_large_graphic_pane_vc

0x49e4,	// (0x00034d8f) list_double_number_pane_vc_ParamLimits

0x49e4,	// (0x00034d8f) list_double_number_pane_vc

0x49e4,	// (0x00034d8f) list_double_pane_vc_ParamLimits

0x49e4,	// (0x00034d8f) list_double_pane_vc

0x49e4,	// (0x00034d8f) list_double_time_pane_vc_ParamLimits

0x49e4,	// (0x00034d8f) list_double_time_pane_vc

0x49e4,	// (0x00034d8f) list_setting_number_pane_vc_ParamLimits

0x49e4,	// (0x00034d8f) list_setting_number_pane_vc

0x49e4,	// (0x00034d8f) list_setting_pane_vc_ParamLimits

0x49e4,	// (0x00034d8f) list_setting_pane_vc

0x49e4,	// (0x00034d8f) list_single_graphic_heading_pane_vc_ParamLimits

0x49e4,	// (0x00034d8f) list_single_graphic_heading_pane_vc

0x49e4,	// (0x00034d8f) list_single_heading_pane_vc_ParamLimits

0x49e4,	// (0x00034d8f) list_single_heading_pane_vc

0x8223,	// (0x000385ce) list_single_number_heading_pane_vc_ParamLimits

0x8223,	// (0x000385ce) list_single_number_heading_pane_vc

0x478e,	// (0x00034b39) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x478e,	// (0x00034b39) list_double_graphic_heading_pane_vc_g1

0x4714,	// (0x00034abf) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4714,	// (0x00034abf) list_double_graphic_heading_pane_vc_g2

0x4720,	// (0x00034acb) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4720,	// (0x00034acb) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0003fb69) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003fb69) list_double_graphic_heading_pane_vc_g

0x49f7,	// (0x00034da2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x49f7,	// (0x00034da2) list_double_graphic_heading_pane_vc_t1

0x4a13,	// (0x00034dbe) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4a13,	// (0x00034dbe) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0003fd99) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0003fd99) list_double_graphic_heading_pane_vc_t

0x4929,	// (0x00034cd4) list_setting_pane_vc_g1_ParamLimits

0x4929,	// (0x00034cd4) list_setting_pane_vc_g1

0x4935,	// (0x00034ce0) list_setting_pane_vc_g2_ParamLimits

0x4935,	// (0x00034ce0) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003fb8f) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003fb8f) list_setting_pane_vc_g

0x4a31,	// (0x00034ddc) list_setting_pane_vc_t1_ParamLimits

0x4a31,	// (0x00034ddc) list_setting_pane_vc_t1

0x4a4d,	// (0x00034df8) list_setting_pane_vc_t2_ParamLimits

0x4a4d,	// (0x00034df8) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x0003fddc) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x0003fddc) list_setting_pane_vc_t

0x499d,	// (0x00034d48) set_value_pane_cp_vc_ParamLimits

0x499d,	// (0x00034d48) set_value_pane_cp_vc

0x4714,	// (0x00034abf) list_single_number_heading_pane_vc_g1_ParamLimits

0x4714,	// (0x00034abf) list_single_number_heading_pane_vc_g1

0x4720,	// (0x00034acb) list_single_number_heading_pane_vc_g2_ParamLimits

0x4720,	// (0x00034acb) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f973) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f973) list_single_number_heading_pane_vc_g

0x48f5,	// (0x00034ca0) list_single_number_heading_pane_vc_t1_ParamLimits

0x48f5,	// (0x00034ca0) list_single_number_heading_pane_vc_t1

0x4a67,	// (0x00034e12) list_single_number_heading_pane_vc_t2_ParamLimits

0x4a67,	// (0x00034e12) list_single_number_heading_pane_vc_t2

0x477c,	// (0x00034b27) list_single_number_heading_pane_vc_t3_ParamLimits

0x477c,	// (0x00034b27) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x0003fde1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x0003fde1) list_single_number_heading_pane_vc_t

0x478e,	// (0x00034b39) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x478e,	// (0x00034b39) list_single_graphic_heading_pane_vc_g1

0x4714,	// (0x00034abf) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4714,	// (0x00034abf) list_single_graphic_heading_pane_vc_g4

0x4720,	// (0x00034acb) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4720,	// (0x00034acb) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003fb69) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003fb69) list_single_graphic_heading_pane_vc_g

0x48f5,	// (0x00034ca0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x48f5,	// (0x00034ca0) list_single_graphic_heading_pane_vc_t1

0x4a7b,	// (0x00034e26) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4a7b,	// (0x00034e26) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x0003fde8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0003fde8) list_single_graphic_heading_pane_vc_t

0x4714,	// (0x00034abf) list_double2_pane_vc_g1_ParamLimits

0x4714,	// (0x00034abf) list_double2_pane_vc_g1

0x4720,	// (0x00034acb) list_double2_pane_vc_g2_ParamLimits

0x4720,	// (0x00034acb) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f973) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f973) list_double2_pane_vc_g

0x49ce,	// (0x00034d79) list_double2_pane_vc_t1_ParamLimits

0x49ce,	// (0x00034d79) list_double2_pane_vc_t1

0x479a,	// (0x00034b45) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x479a,	// (0x00034b45) list_double2_large_graphic_pane_vc_g1

0x47a6,	// (0x00034b51) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x47a6,	// (0x00034b51) list_double2_large_graphic_pane_vc_g2

0x47b2,	// (0x00034b5d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x47b2,	// (0x00034b5d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa42,	// (0x0003fded) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa42,	// (0x0003fded) list_double2_large_graphic_pane_vc_g

0x47be,	// (0x00034b69) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x47be,	// (0x00034b69) list_double2_large_graphic_pane_vc_t1

0x4a8f,	// (0x00034e3a) list_double_time_pane_vc_g1_ParamLimits

0x4a8f,	// (0x00034e3a) list_double_time_pane_vc_g1

0x4a9b,	// (0x00034e46) list_double_time_pane_vc_g2_ParamLimits

0x4a9b,	// (0x00034e46) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x0003fdf4) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x0003fdf4) list_double_time_pane_vc_g

0x4aa7,	// (0x00034e52) list_double_time_pane_vc_t1_ParamLimits

0x4aa7,	// (0x00034e52) list_double_time_pane_vc_t1

0x4acb,	// (0x00034e76) list_double_time_pane_vc_t2_ParamLimits

0x4acb,	// (0x00034e76) list_double_time_pane_vc_t2

0x4b1a,	// (0x00034ec5) list_double_time_pane_vc_t3_ParamLimits

0x4b1a,	// (0x00034ec5) list_double_time_pane_vc_t3

0x4b2c,	// (0x00034ed7) list_double_time_pane_vc_t4_ParamLimits

0x4b2c,	// (0x00034ed7) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x0003fdf9) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x0003fdf9) list_double_time_pane_vc_t

0x4714,	// (0x00034abf) list_double_pane_vc_g1_ParamLimits

0x4714,	// (0x00034abf) list_double_pane_vc_g1

0x4720,	// (0x00034acb) list_double_pane_vc_g2_ParamLimits

0x4720,	// (0x00034acb) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f973) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f973) list_double_pane_vc_g

0x4b40,	// (0x00034eeb) list_double_pane_vc_t1_ParamLimits

0x4b40,	// (0x00034eeb) list_double_pane_vc_t1

0x4b54,	// (0x00034eff) list_double_pane_vc_t2_ParamLimits

0x4b54,	// (0x00034eff) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x0003fe02) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x0003fe02) list_double_pane_vc_t

0x4714,	// (0x00034abf) list_double_number_pane_vc_g1_ParamLimits

0x4714,	// (0x00034abf) list_double_number_pane_vc_g1

0x4720,	// (0x00034acb) list_double_number_pane_vc_g2_ParamLimits

0x4720,	// (0x00034acb) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f973) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f973) list_double_number_pane_vc_g

0x4b6c,	// (0x00034f17) list_double_number_pane_vc_t1_ParamLimits

0x4b6c,	// (0x00034f17) list_double_number_pane_vc_t1

0x4b7e,	// (0x00034f29) list_double_number_pane_vc_t2_ParamLimits

0x4b7e,	// (0x00034f29) list_double_number_pane_vc_t2

0x4b92,	// (0x00034f3d) list_double_number_pane_vc_t3_ParamLimits

0x4b92,	// (0x00034f3d) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x0003fe07) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x0003fe07) list_double_number_pane_vc_t

0x4baa,	// (0x00034f55) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4baa,	// (0x00034f55) list_double_large_graphic_pane_vc_g1

0x4bcc,	// (0x00034f77) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4bcc,	// (0x00034f77) list_double_large_graphic_pane_vc_g2

0x4be0,	// (0x00034f8b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4be0,	// (0x00034f8b) list_double_large_graphic_pane_vc_g3

0x4bef,	// (0x00034f9a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4bef,	// (0x00034f9a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x0003fe0e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x0003fe0e) list_double_large_graphic_pane_vc_g

0x4bfb,	// (0x00034fa6) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4bfb,	// (0x00034fa6) list_double_large_graphic_pane_vc_t1

0x4c17,	// (0x00034fc2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4c17,	// (0x00034fc2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x0003fe17) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x0003fe17) list_double_large_graphic_pane_vc_t

0x4714,	// (0x00034abf) list_double_heading_pane_vc_g1_ParamLimits

0x4714,	// (0x00034abf) list_double_heading_pane_vc_g1

0x4720,	// (0x00034acb) list_double_heading_pane_vc_g2_ParamLimits

0x4720,	// (0x00034acb) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003f973) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003f973) list_double_heading_pane_vc_g

0x4c39,	// (0x00034fe4) list_double_heading_pane_vc_t1_ParamLimits

0x4c39,	// (0x00034fe4) list_double_heading_pane_vc_t1

0x48f5,	// (0x00034ca0) list_double_heading_pane_vc_t2_ParamLimits

0x48f5,	// (0x00034ca0) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0003fe1c) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0003fe1c) list_double_heading_pane_vc_t

0x4c4d,	// (0x00034ff8) list_double_graphic_pane_vc_g1_ParamLimits

0x4c4d,	// (0x00034ff8) list_double_graphic_pane_vc_g1

0x4c60,	// (0x0003500b) list_double_graphic_pane_vc_g2_ParamLimits

0x4c60,	// (0x0003500b) list_double_graphic_pane_vc_g2

0x4714,	// (0x00034abf) list_double_graphic_pane_vc_g3_ParamLimits

0x4714,	// (0x00034abf) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x0003fe21) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0003fe21) list_double_graphic_pane_vc_g

0x4c7d,	// (0x00035028) list_double_graphic_pane_vc_t1_ParamLimits

0x4c7d,	// (0x00035028) list_double_graphic_pane_vc_t1

0x4ca1,	// (0x0003504c) list_double_graphic_pane_vc_t2_ParamLimits

0x4ca1,	// (0x0003504c) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x0003fe2a) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x0003fe2a) list_double_graphic_pane_vc_t

0x5b97,	// (0x00035f42) aid_size_cell_fastswap

0x5b9f,	// (0x00035f4a) aid_size_cell_touch_ParamLimits

0x5b9f,	// (0x00035f4a) aid_size_cell_touch

0x5e04,	// (0x000361af) popup_fast_swap_wide_window_ParamLimits

0x5e04,	// (0x000361af) popup_fast_swap_wide_window

0x5f0a,	// (0x000362b5) touch_pane_ParamLimits

0x5f0a,	// (0x000362b5) touch_pane

0x281b,	// (0x00032bc6) button_value_adjust_pane_cp2

0x481d,	// (0x00034bc8) button_value_adjust_pane_cp4

0x4825,	// (0x00034bd0) form_field_data_pane_cp2

0x695a,	// (0x00036d05) form_field_data_wide_pane_cp2

0x2b19,	// (0x00032ec4) bg_scroll_pane_ParamLimits

0x6e53,	// (0x000371fe) scroll_handle_pane_ParamLimits

0x6e67,	// (0x00037212) scroll_sc2_down_pane_ParamLimits

0x6e67,	// (0x00037212) scroll_sc2_down_pane

0x2b4a,	// (0x00032ef5) scroll_sc2_up_pane_ParamLimits

0x2b4a,	// (0x00032ef5) scroll_sc2_up_pane

0xbe6c,	// (0x0003c217) grid_wheel_folder_pane_g1_ParamLimits

0xbe6c,	// (0x0003c217) grid_wheel_folder_pane_g1

0x7256,	// (0x00037601) clock_nsta_pane_cp2_ParamLimits

0x7256,	// (0x00037601) clock_nsta_pane_cp2

0x6be4,	// (0x00036f8f) listscroll_midp_pane_ParamLimits

0x7609,	// (0x000379b4) midp_canvas_pane

0x979e,	// (0x00039b49) nsta_clock_indic_pane

0x97d2,	// (0x00039b7d) listscroll_form_pane_vc

0x97da,	// (0x00039b85) listscroll_set_pane_vc_ParamLimits

0x97da,	// (0x00039b85) listscroll_set_pane_vc

0x98df,	// (0x00039c8a) clock_nsta_pane

0x995a,	// (0x00039d05) indicator_nsta_pane

0x9c37,	// (0x00039fe2) bg_popup_sub_pane_cp2_ParamLimits

0x9c4b,	// (0x00039ff6) find_pane_cp2_ParamLimits

0x9c4b,	// (0x00039ff6) find_pane_cp2

0x9c61,	// (0x0003a00c) grid_toobar_pane_ParamLimits

0x9d41,	// (0x0003a0ec) list_form_gen_pane_vc_ParamLimits

0x9d41,	// (0x0003a0ec) list_form_gen_pane_vc

0x9d57,	// (0x0003a102) scroll_pane_cp8_vc_ParamLimits

0x9d57,	// (0x0003a102) scroll_pane_cp8_vc

0x9dd3,	// (0x0003a17e) data_form_wide_pane_vc_ParamLimits

0x9dd3,	// (0x0003a17e) data_form_wide_pane_vc

0x9ddf,	// (0x0003a18a) form_field_data_wide_pane_vc_g1

0x9de7,	// (0x0003a192) form_field_data_wide_pane_vc_t1_ParamLimits

0x9de7,	// (0x0003a192) form_field_data_wide_pane_vc_t1

0x282f,	// (0x00032bda) input_focus_pane_cp6_vc_ParamLimits

0x282f,	// (0x00032bda) input_focus_pane_cp6_vc

0xa114,	// (0x0003a4bf) list_midp_pane_ParamLimits

0xa120,	// (0x0003a4cb) scroll_pane_cp16_ParamLimits

0xa120,	// (0x0003a4cb) scroll_pane_cp16

0xa16e,	// (0x0003a519) button_value_adjust_pane_ParamLimits

0xa16e,	// (0x0003a519) button_value_adjust_pane

0xb0bf,	// (0x0003b46a) button_value_adjust_pane_cp6_ParamLimits

0xb0bf,	// (0x0003b46a) button_value_adjust_pane_cp6

0xb1e9,	// (0x0003b594) settings_code_pane_cp_ParamLimits

0xb1e9,	// (0x0003b594) settings_code_pane_cp

0x2417,	// (0x000327c2) cell_touch_pane_g1

0x2417,	// (0x000327c2) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0003faae) cell_touch_pane_g

0xb7b8,	// (0x0003bb63) cell_touch_pane_cp_ParamLimits

0xb7b8,	// (0x0003bb63) cell_touch_pane_cp

0xb7c8,	// (0x0003bb73) cell_touch_pane_ParamLimits

0xb7c8,	// (0x0003bb73) cell_touch_pane

0x2417,	// (0x000327c2) scroll_sc2_down_pane_g1

0x2417,	// (0x000327c2) scroll_sc2_up_pane_g1

0x2421,	// (0x000327cc) bg_set_opt_pane_cp4_vc

0xb7da,	// (0x0003bb85) list_set_graphic_pane_vc_g1_ParamLimits

0xb7da,	// (0x0003bb85) list_set_graphic_pane_vc_g1

0xb7e6,	// (0x0003bb91) list_set_graphic_pane_vc_g2_ParamLimits

0xb7e6,	// (0x0003bb91) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0003fd9e) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0003fd9e) list_set_graphic_pane_vc_g

0xb7f2,	// (0x0003bb9d) text_primary_small_cp13_vc_ParamLimits

0xb7f2,	// (0x0003bb9d) text_primary_small_cp13_vc

0xb80a,	// (0x0003bbb5) list_set_graphic_pane_vc_ParamLimits

0xb80a,	// (0x0003bbb5) list_set_graphic_pane_vc

0x2421,	// (0x000327cc) input_focus_pane_cp2_vc

0x2417,	// (0x000327c2) setting_code_pane_vc_g1

0x2494,	// (0x0003283f) setting_code_pane_vc_t1

0xb81d,	// (0x0003bbc8) set_text_pane_vc_t1_ParamLimits

0xb81d,	// (0x0003bbc8) set_text_pane_vc_t1

0x2421,	// (0x000327cc) input_focus_pane_cp1_vc

0xb839,	// (0x0003bbe4) list_set_text_pane_vc

0x2417,	// (0x000327c2) setting_text_pane_vc_g1

0x2421,	// (0x000327cc) bg_set_opt_pane_cp2_vc

0x248b,	// (0x00032836) setting_slider_graphic_pane_vc_g1

0xb843,	// (0x0003bbee) setting_slider_graphic_pane_vc_t1

0xb853,	// (0x0003bbfe) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0003fda3) setting_slider_graphic_pane_vc_t

0xb863,	// (0x0003bc0e) slider_set_pane_cp_vc

0xb86b,	// (0x0003bc16) slider_set_pane_vc_g1

0xb874,	// (0x0003bc1f) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0003fda8) slider_set_pane_vc_g

0x288a,	// (0x00032c35) set_opt_bg_pane_g1_copy1

0x2892,	// (0x00032c3d) set_opt_bg_pane_g2_copy1

0xb8a0,	// (0x0003bc4b) set_opt_bg_pane_g3_copy1

0x28a2,	// (0x00032c4d) set_opt_bg_pane_g4_copy1

0x28aa,	// (0x00032c55) set_opt_bg_pane_g5_copy1

0x28b2,	// (0x00032c5d) set_opt_bg_pane_g6_copy1

0xb8a8,	// (0x0003bc53) set_opt_bg_pane_g7_copy1

0xb8b0,	// (0x0003bc5b) set_opt_bg_pane_g8_copy1

0xb8b8,	// (0x0003bc63) set_opt_bg_pane_g9_copy1

0x2421,	// (0x000327cc) bg_set_opt_pane_cp_vc

0xb8c0,	// (0x0003bc6b) setting_slider_pane_vc_t1

0xb8cf,	// (0x0003bc7a) setting_slider_pane_vc_t2

0xb8df,	// (0x0003bc8a) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0003fdb7) setting_slider_pane_vc_t

0xb8ef,	// (0x0003bc9a) slider_set_pane_vc

0x7fa6,	// (0x00038351) volume_set_pane_vc_g1

0x8393,	// (0x0003873e) volume_set_pane_vc_g2

0x839c,	// (0x00038747) volume_set_pane_vc_g3

0x83a5,	// (0x00038750) volume_set_pane_vc_g4

0x83ae,	// (0x00038759) volume_set_pane_vc_g5

0x83b7,	// (0x00038762) volume_set_pane_vc_g6

0x83c0,	// (0x0003876b) volume_set_pane_vc_g7

0x83c9,	// (0x00038774) volume_set_pane_vc_g8

0x83d2,	// (0x0003877d) volume_set_pane_vc_g9

0x83db,	// (0x00038786) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x0003fdbe) volume_set_pane_vc_g

0xb8f7,	// (0x0003bca2) volume_set_pane_vc

0xb8ff,	// (0x0003bcaa) button_value_adjust_pane_cp1_vc

0xb909,	// (0x0003bcb4) list_highlight_pane_cp2_vc

0xb912,	// (0x0003bcbd) list_set_pane_vc_ParamLimits

0xb912,	// (0x0003bcbd) list_set_pane_vc

0xb970,	// (0x0003bd1b) main_pane_set_vc_t1_ParamLimits

0xb970,	// (0x0003bd1b) main_pane_set_vc_t1

0xb985,	// (0x0003bd30) main_pane_set_vc_t2_ParamLimits

0xb985,	// (0x0003bd30) main_pane_set_vc_t2

0xb997,	// (0x0003bd42) main_pane_set_vc_t3_ParamLimits

0xb997,	// (0x0003bd42) main_pane_set_vc_t3

0xb9a9,	// (0x0003bd54) main_pane_set_vc_t4_ParamLimits

0xb9a9,	// (0x0003bd54) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x0003fdd3) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x0003fdd3) main_pane_set_vc_t

0xb9bb,	// (0x0003bd66) setting_code_pane_vc_ParamLimits

0xb9bb,	// (0x0003bd66) setting_code_pane_vc

0xb9ca,	// (0x0003bd75) setting_slider_graphic_pane_vc

0xb9ca,	// (0x0003bd75) setting_slider_pane_vc

0xb9ca,	// (0x0003bd75) setting_text_pane_vc

0xb9ca,	// (0x0003bd75) setting_volume_pane_vc

0xb9d2,	// (0x0003bd7d) scroll_pane_cp121_vc

0x2809,	// (0x00032bb4) set_content_pane_vc

0xb9da,	// (0x0003bd85) button_value_adjust_pane_g1

0xb9e3,	// (0x0003bd8e) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x0003fe2f) button_value_adjust_pane_g

0xb9ec,	// (0x0003bd97) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9ec,	// (0x0003bd97) form_field_slider_wide_pane_vc_t1

0xba00,	// (0x0003bdab) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba00,	// (0x0003bdab) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x0003fe34) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0003fe34) form_field_slider_wide_pane_vc_t

0x246f,	// (0x0003281a) input_focus_pane_cp10_vc_ParamLimits

0x246f,	// (0x0003281a) input_focus_pane_cp10_vc

0xba2e,	// (0x0003bdd9) slider_cont_pane_cp1_vc_ParamLimits

0xba2e,	// (0x0003bdd9) slider_cont_pane_cp1_vc

0xba40,	// (0x0003bdeb) slider_form_pane_g1_cp2

0xb874,	// (0x0003bc1f) slider_form_pane_g2_cp2

0xba6d,	// (0x0003be18) form_field_slider_pane_vc_t3

0xba7b,	// (0x0003be26) form_field_slider_pane_vc_t4

0xba89,	// (0x0003be34) slider_form_pane_vc_ParamLimits

0xba89,	// (0x0003be34) slider_form_pane_vc

0xba96,	// (0x0003be41) form_field_slider_pane_vc_t1_ParamLimits

0xba96,	// (0x0003be41) form_field_slider_pane_vc_t1

0xba00,	// (0x0003bdab) form_field_slider_pane_vc_t2_ParamLimits

0xba00,	// (0x0003bdab) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x0003fe46) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x0003fe46) form_field_slider_pane_vc_t

0x246f,	// (0x0003281a) input_focus_pane_cp9_vc_ParamLimits

0x246f,	// (0x0003281a) input_focus_pane_cp9_vc

0xbab2,	// (0x0003be5d) slider_cont_pane_vc_ParamLimits

0xbab2,	// (0x0003be5d) slider_cont_pane_vc

0xbac6,	// (0x0003be71) list_form_graphic_pane_cp_vc_ParamLimits

0xbac6,	// (0x0003be71) list_form_graphic_pane_cp_vc

0x9ddf,	// (0x0003a18a) form_field_popup_wide_pane_vc_g1

0xbadb,	// (0x0003be86) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbadb,	// (0x0003be86) form_field_popup_wide_pane_vc_t1

0x282f,	// (0x00032bda) input_focus_pane_cp8_vc_ParamLimits

0x282f,	// (0x00032bda) input_focus_pane_cp8_vc

0xbb20,	// (0x0003becb) list_form_wide_pane_vc_ParamLimits

0xbb20,	// (0x0003becb) list_form_wide_pane_vc

0xbb2c,	// (0x0003bed7) list_form_graphic_pane_vc_g1

0xbb34,	// (0x0003bedf) list_form_graphic_pane_vc_t1_ParamLimits

0xbb34,	// (0x0003bedf) list_form_graphic_pane_vc_t1

0x247d,	// (0x00032828) list_highlight_pane_cp5_vc_ParamLimits

0x247d,	// (0x00032828) list_highlight_pane_cp5_vc

0xbb50,	// (0x0003befb) list_form_graphic_pane_vc_ParamLimits

0xbb50,	// (0x0003befb) list_form_graphic_pane_vc

0x9ddf,	// (0x0003a18a) form_field_popup_pane_vc_g1

0xbb66,	// (0x0003bf11) form_field_popup_pane_vc_t1_ParamLimits

0xbb66,	// (0x0003bf11) form_field_popup_pane_vc_t1

0x282f,	// (0x00032bda) input_focus_pane_cp7_vc_ParamLimits

0x282f,	// (0x00032bda) input_focus_pane_cp7_vc

0xbb7d,	// (0x0003bf28) list_form_pane_vc_ParamLimits

0xbb7d,	// (0x0003bf28) list_form_pane_vc

0xbb89,	// (0x0003bf34) data_form_pane_vc_t1_ParamLimits

0xbb89,	// (0x0003bf34) data_form_pane_vc_t1

0x288a,	// (0x00032c35) input_focus_pane_vc_g1

0x2892,	// (0x00032c3d) input_focus_pane_vc_g2

0x289a,	// (0x00032c45) input_focus_pane_vc_g3

0x28a2,	// (0x00032c4d) input_focus_pane_vc_g4

0x28aa,	// (0x00032c55) input_focus_pane_vc_g5

0x28b2,	// (0x00032c5d) input_focus_pane_vc_g6

0x28ba,	// (0x00032c65) input_focus_pane_vc_g7

0x28c2,	// (0x00032c6d) input_focus_pane_vc_g8

0x28ca,	// (0x00032c75) input_focus_pane_vc_g9

0x2417,	// (0x000327c2) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003fa37) input_focus_pane_vc_g

0x9dd3,	// (0x0003a17e) data_form_pane_vc_ParamLimits

0x9dd3,	// (0x0003a17e) data_form_pane_vc

0x9ddf,	// (0x0003a18a) form_field_data_pane_vc_g1

0xbba4,	// (0x0003bf4f) form_field_data_pane_vc_t1_ParamLimits

0xbba4,	// (0x0003bf4f) form_field_data_pane_vc_t1

0x282f,	// (0x00032bda) input_focus_pane_vc_ParamLimits

0x282f,	// (0x00032bda) input_focus_pane_vc

0xbbbe,	// (0x0003bf69) button_value_adjust_pane_cp3_vc

0xbbc6,	// (0x0003bf71) button_value_adjust_pane_cp5_vc

0xbbce,	// (0x0003bf79) form_field_data_pane_vc_ParamLimits

0xbbce,	// (0x0003bf79) form_field_data_pane_vc

0xbbe5,	// (0x0003bf90) form_field_data_pane_vc_cp2

0xbbed,	// (0x0003bf98) form_field_data_wide_pane_vc_ParamLimits

0xbbed,	// (0x0003bf98) form_field_data_wide_pane_vc

0xbc03,	// (0x0003bfae) form_field_data_wide_pane_vc_cp2

0xbc0b,	// (0x0003bfb6) form_field_popup_pane_vc_ParamLimits

0xbc0b,	// (0x0003bfb6) form_field_popup_pane_vc

0xbc22,	// (0x0003bfcd) form_field_popup_wide_pane_vc_ParamLimits

0xbc22,	// (0x0003bfcd) form_field_popup_wide_pane_vc

0xbc38,	// (0x0003bfe3) form_field_slider_pane_vc_ParamLimits

0xbc38,	// (0x0003bfe3) form_field_slider_pane_vc

0xbc4b,	// (0x0003bff6) form_field_slider_wide_pane_vc_ParamLimits

0xbc4b,	// (0x0003bff6) form_field_slider_wide_pane_vc

0xbc5e,	// (0x0003c009) grid_touch_1_pane_ParamLimits

0xbc5e,	// (0x0003c009) grid_touch_1_pane

0xbc6a,	// (0x0003c015) grid_touch_2_pane_ParamLimits

0xbc6a,	// (0x0003c015) grid_touch_2_pane

0x9769,	// (0x00039b14) touch_pane_g1_ParamLimits

0x9769,	// (0x00039b14) touch_pane_g1

0xbc82,	// (0x0003c02d) cell_app_pane_cp_wide_ParamLimits

0xbc82,	// (0x0003c02d) cell_app_pane_cp_wide

0xbc93,	// (0x0003c03e) grid_popup_fast_wide_pane_ParamLimits

0xbc93,	// (0x0003c03e) grid_popup_fast_wide_pane

0xbca7,	// (0x0003c052) scroll_pane_cp19_ParamLimits

0xbca7,	// (0x0003c052) scroll_pane_cp19

0x2421,	// (0x000327cc) bg_popup_window_pane_cp20

0xbcbb,	// (0x0003c066) listscroll_popup_fast_wide_pane

0x247d,	// (0x00032828) grid_indicator_nsta_pane

0xbcc3,	// (0x0003c06e) clock_nsta_pane_g1

0xbccc,	// (0x0003c077) clock_nsta_pane_t1

0xbce8,	// (0x0003c093) cell_indicator_nsta_pane_ParamLimits

0xbce8,	// (0x0003c093) cell_indicator_nsta_pane

0xbd19,	// (0x0003c0c4) cell_indicator_nsta_pane_g1

0xbd27,	// (0x0003c0d2) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x0003fe57) cell_indicator_nsta_pane_g

0xbd34,	// (0x0003c0df) clock_nsta_pane_cp

0xbd3c,	// (0x0003c0e7) indicator_nsta_pane_cp

0xbd44,	// (0x0003c0ef) nsta_clock_indic_pane_g1

0x24b9,	// (0x00032864) grid_indicator_pane

0x6f05,	// (0x000372b0) scroll_pane_cp29

0x7183,	// (0x0003752e) indicator_nsta_pane_cp2_ParamLimits

0x7183,	// (0x0003752e) indicator_nsta_pane_cp2

0x247d,	// (0x00032828) main_apps_wheel_pane

0x9ff7,	// (0x0003a3a2) form_midp_field_text_pane_ParamLimits

0xa140,	// (0x0003a4eb) scroll_bar_cp050_ParamLimits

0xbda5,	// (0x0003c150) cell_indicator_pane_ParamLimits

0xbda5,	// (0x0003c150) cell_indicator_pane

0xbdbe,	// (0x0003c169) cell_indicator_pane_g1

0xbdc8,	// (0x0003c173) grid_wheel_folder_pane_ParamLimits

0xbdc8,	// (0x0003c173) grid_wheel_folder_pane

0xbdde,	// (0x0003c189) list_wheel_apps_pane_ParamLimits

0xbdde,	// (0x0003c189) list_wheel_apps_pane

0xbdef,	// (0x0003c19a) main_apps_wheel_pane_g1_ParamLimits

0xbdef,	// (0x0003c19a) main_apps_wheel_pane_g1

0xbe03,	// (0x0003c1ae) main_apps_wheel_pane_g2_ParamLimits

0xbe03,	// (0x0003c1ae) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x0003fe73) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x0003fe73) main_apps_wheel_pane_g

0xbe1b,	// (0x0003c1c6) main_apps_wheel_pane_t1_ParamLimits

0xbe1b,	// (0x0003c1c6) main_apps_wheel_pane_t1

0xbe3e,	// (0x0003c1e9) list_wheel_apps_pane_g1

0xbe46,	// (0x0003c1f1) list_wheel_apps_pane_g2

0xbe4e,	// (0x0003c1f9) list_wheel_apps_pane_g3

0xbe58,	// (0x0003c203) list_wheel_apps_pane_g4

0xbe62,	// (0x0003c20d) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x0003fe78) list_wheel_apps_pane_g

0x7481,	// (0x0003782c) navi_icon_text_pane

0x980e,	// (0x00039bb9) aid_fill_nsta

0xbe85,	// (0x0003c230) navi_icon_text_pane_g1

0xbe91,	// (0x0003c23c) navi_icon_text_pane_t1

0x7324,	// (0x000376cf) list_set_graphic_pane_t1_ParamLimits

0x7324,	// (0x000376cf) list_set_graphic_pane_t1

0xa86f,	// (0x0003ac1a) popup_midp_note_alarm_window_t6_ParamLimits

0xa86f,	// (0x0003ac1a) popup_midp_note_alarm_window_t6

0xa881,	// (0x0003ac2c) popup_midp_note_alarm_window_t7_ParamLimits

0xa881,	// (0x0003ac2c) popup_midp_note_alarm_window_t7

0xa893,	// (0x0003ac3e) popup_midp_note_alarm_window_t8_ParamLimits

0xa893,	// (0x0003ac3e) popup_midp_note_alarm_window_t8

0xa8a5,	// (0x0003ac50) popup_midp_note_alarm_window_t9_ParamLimits

0xa8a5,	// (0x0003ac50) popup_midp_note_alarm_window_t9

0xa8b7,	// (0x0003ac62) popup_midp_note_alarm_window_t10_ParamLimits

0xa8b7,	// (0x0003ac62) popup_midp_note_alarm_window_t10

0xa8c9,	// (0x0003ac74) popup_midp_note_alarm_window_t11_ParamLimits

0xa8c9,	// (0x0003ac74) popup_midp_note_alarm_window_t11

0xa8db,	// (0x0003ac86) scroll_pane_cp17_ParamLimits

0xa8db,	// (0x0003ac86) scroll_pane_cp17

0x7fa6,	// (0x00038351) volume_small_pane_cp_g1

0x83e4,	// (0x0003878f) volume_small_pane_cp_g2

0x83ed,	// (0x00038798) volume_small_pane_cp_g3

0x83f6,	// (0x000387a1) volume_small_pane_cp_g4

0x83ff,	// (0x000387aa) volume_small_pane_cp_g5

0x83ae,	// (0x00038759) volume_small_pane_cp_g6

0x8408,	// (0x000387b3) volume_small_pane_cp_g7

0x8411,	// (0x000387bc) volume_small_pane_cp_g8

0x841a,	// (0x000387c5) volume_small_pane_cp_g9

0x8423,	// (0x000387ce) volume_small_pane_cp_g10

0x9587,	// (0x00039932) midp_ticker_pane_g1_ParamLimits

0x9593,	// (0x0003993e) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003fb03) midp_ticker_pane_g_ParamLimits

0x959f,	// (0x0003994a) midp_ticker_pane_t1_ParamLimits

0x9824,	// (0x00039bcf) aid_fill_nsta_2

0xa12c,	// (0x0003a4d7) list_form2_midp_pane

0xb234,	// (0x0003b5df) midp_editing_number_pane_ParamLimits

0xb243,	// (0x0003b5ee) midp_ticker_pane_ParamLimits

0xbea3,	// (0x0003c24e) form2_midp_field_pane

0xbec7,	// (0x0003c272) scroll_pane_cp51

0xbee7,	// (0x0003c292) form2_midp_button_pane_ParamLimits

0xbee7,	// (0x0003c292) form2_midp_button_pane

0xbef9,	// (0x0003c2a4) form2_midp_content_pane_ParamLimits

0xbef9,	// (0x0003c2a4) form2_midp_content_pane

0xbf13,	// (0x0003c2be) form2_midp_field_choice_group_pane

0xbf1b,	// (0x0003c2c6) form2_midp_field_pane_g1

0xbf23,	// (0x0003c2ce) form2_midp_field_pane_g2

0xbf2b,	// (0x0003c2d6) form2_midp_field_pane_g3

0xbf33,	// (0x0003c2de) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x0003fe9d) form2_midp_field_pane_g

0xbf3b,	// (0x0003c2e6) form2_midp_gauge_slider_pane

0xbf43,	// (0x0003c2ee) form2_midp_gauge_wait_pane

0xbf4b,	// (0x0003c2f6) form2_midp_image_pane_ParamLimits

0xbf4b,	// (0x0003c2f6) form2_midp_image_pane

0xbf66,	// (0x0003c311) form2_midp_label_pane_ParamLimits

0xbf66,	// (0x0003c311) form2_midp_label_pane

0xbf7f,	// (0x0003c32a) form2_midp_label_pane_cp_ParamLimits

0xbf7f,	// (0x0003c32a) form2_midp_label_pane_cp

0xbfa0,	// (0x0003c34b) form2_midp_string_pane_ParamLimits

0xbfa0,	// (0x0003c34b) form2_midp_string_pane

0x4ccb,	// (0x00035076) form2_midp_text_pane_ParamLimits

0x4ccb,	// (0x00035076) form2_midp_text_pane

0xbfb2,	// (0x0003c35d) form2_midp_time_pane

0xbfc2,	// (0x0003c36d) input_focus_pane_cp51_ParamLimits

0xbfc2,	// (0x0003c36d) input_focus_pane_cp51

0xbfda,	// (0x0003c385) form2_midp_label_pane_t1_ParamLimits

0xbfda,	// (0x0003c385) form2_midp_label_pane_t1

0x4ce4,	// (0x0003508f) form2_mdip_text_pane_t1_ParamLimits

0x4ce4,	// (0x0003508f) form2_mdip_text_pane_t1

0x4d02,	// (0x000350ad) form2_midp_time_pane_t1

0xc023,	// (0x0003c3ce) form2_midp_gauge_slider_pane_t1

0xc035,	// (0x0003c3e0) form2_midp_gauge_slider_pane_t2

0xc047,	// (0x0003c3f2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x0003fea6) form2_midp_gauge_slider_pane_t

0xc059,	// (0x0003c404) form2_midp_slider_pane

0xc065,	// (0x0003c410) form2_midp_gauge_wait_pane_t1

0xc073,	// (0x0003c41e) form2_midp_wait_pane_ParamLimits

0xc073,	// (0x0003c41e) form2_midp_wait_pane

0xc09e,	// (0x0003c449) list_single_2graphic_pane_cp4_ParamLimits

0xc09e,	// (0x0003c449) list_single_2graphic_pane_cp4

0x9e48,	// (0x0003a1f3) list_single_midp_graphic_pane_cp_ParamLimits

0x9e48,	// (0x0003a1f3) list_single_midp_graphic_pane_cp

0x2421,	// (0x000327cc) list_highlight_pane_cp20

0xc0c6,	// (0x0003c471) list_single_2graphic_pane_g1_cp4

0xb6be,	// (0x0003ba69) list_single_2graphic_pane_g2_cp4

0xc0ce,	// (0x0003c479) list_single_2graphic_pane_t1_cp4

0x247d,	// (0x00032828) list_highlight_pane_cp21

0xc0dd,	// (0x0003c488) list_single_midp_graphic_pane_g4_cp

0xc0ec,	// (0x0003c497) list_single_midp_graphic_pane_t1_cp

0xc101,	// (0x0003c4ac) form2_mdip_string_pane_t1_ParamLimits

0xc101,	// (0x0003c4ac) form2_mdip_string_pane_t1

0x2421,	// (0x000327cc) bg_wml_button_pane_cp2

0x2417,	// (0x000327c2) form2_midp_image_pane_g1

0x4808,	// (0x00034bb3) list_double_large_graphic_pane_g5_ParamLimits

0x4808,	// (0x00034bb3) list_double_large_graphic_pane_g5

0x6be4,	// (0x00036f8f) midp_form_pane_ParamLimits

0x247d,	// (0x00032828) main_apps_wheel_pane_ParamLimits

0x7c1d,	// (0x00037fc8) popup_preview_window_ParamLimits

0x7c1d,	// (0x00037fc8) popup_preview_window

0x7dd8,	// (0x00038183) popup_touch_info_window_ParamLimits

0x7dd8,	// (0x00038183) popup_touch_info_window

0x7df6,	// (0x000381a1) popup_touch_menu_window_ParamLimits

0x7df6,	// (0x000381a1) popup_touch_menu_window

0x240d,	// (0x000327b8) bg_popup_sub_pane_cp6

0xc20e,	// (0x0003c5b9) list_touch_menu_pane

0xc216,	// (0x0003c5c1) list_single_touch_menu_pane_ParamLimits

0xc216,	// (0x0003c5c1) list_single_touch_menu_pane

0xc22c,	// (0x0003c5d7) list_single_touch_menu_pane_t1

0x247d,	// (0x00032828) bg_popup_sub_pane_cp7_ParamLimits

0x247d,	// (0x00032828) bg_popup_sub_pane_cp7

0xc23a,	// (0x0003c5e5) heading_sub_pane

0xc242,	// (0x0003c5ed) list_touch_info_pane_ParamLimits

0xc242,	// (0x0003c5ed) list_touch_info_pane

0xc251,	// (0x0003c5fc) list_single_touch_info_pane_ParamLimits

0xc251,	// (0x0003c5fc) list_single_touch_info_pane

0xc263,	// (0x0003c60e) list_single_touch_info_pane_t1

0xc271,	// (0x0003c61c) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x0003feb4) list_single_touch_info_pane_t

0x7601,	// (0x000379ac) bg_popup_heading_pane_cp

0xc27f,	// (0x0003c62a) heading_sub_pane_t1

0x9d6d,	// (0x0003a118) bg_popup_preview_window_pane_cp_ParamLimits

0x9d6d,	// (0x0003a118) bg_popup_preview_window_pane_cp

0xc23a,	// (0x0003c5e5) heading_preview_pane

0xc242,	// (0x0003c5ed) list_preview_pane_ParamLimits

0xc242,	// (0x0003c5ed) list_preview_pane

0xc28d,	// (0x0003c638) popup_preview_window_g1

0xc251,	// (0x0003c5fc) list_single_preview_pane_ParamLimits

0xc251,	// (0x0003c5fc) list_single_preview_pane

0xc295,	// (0x0003c640) list_single_preview_pane_g1

0xc29d,	// (0x0003c648) list_single_preview_pane_t1

0xc263,	// (0x0003c60e) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x0003feb9) list_single_preview_pane_t

0xc2ab,	// (0x0003c656) bg_popup_heading_pane_cp2_ParamLimits

0xc2ab,	// (0x0003c656) bg_popup_heading_pane_cp2

0xc2c1,	// (0x0003c66c) heading_preview_pane_g1

0xc2c9,	// (0x0003c674) heading_preview_pane_t1_ParamLimits

0xc2c9,	// (0x0003c674) heading_preview_pane_t1

0x24d0,	// (0x0003287b) soft_indicator_pane_t1_ParamLimits

0x27ab,	// (0x00032b56) scroll_pane_ParamLimits

0x2b41,	// (0x00032eec) scroll_sc2_left_pane

0x2b38,	// (0x00032ee3) scroll_sc2_right_pane

0x2b60,	// (0x00032f0b) scroll_bg_pane_g1_ParamLimits

0x2b75,	// (0x00032f20) scroll_bg_pane_g2_ParamLimits

0x2b8d,	// (0x00032f38) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003fa8e) scroll_bg_pane_g_ParamLimits

0x2b60,	// (0x00032f0b) scroll_handle_pane_g1_ParamLimits

0x2ba2,	// (0x00032f4d) scroll_handle_pane_g2_ParamLimits

0x2b8d,	// (0x00032f38) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0003fa95) scroll_handle_pane_g_ParamLimits

0x78a0,	// (0x00037c4b) popup_choice_list_window_ParamLimits

0x78a0,	// (0x00037c4b) popup_choice_list_window

0x9c43,	// (0x00039fee) choice_list_pane

0x9cc5,	// (0x0003a070) cell_toolbar_pane_t1

0x9ced,	// (0x0003a098) toolbar_button_pane_ParamLimits

0xad95,	// (0x0003b140) ai_gene_pane_1_t2_ParamLimits

0xad95,	// (0x0003b140) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0003fcb8) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0003fcb8) ai_gene_pane_1_t

0xc2e6,	// (0x0003c691) scroll_sc2_left_pane_g1

0xc2e6,	// (0x0003c691) scroll_sc2_right_pane_g1

0x97ec,	// (0x00039b97) bg_popup_sub_pane_cp10

0xc2f0,	// (0x0003c69b) list_choice_list_pane

0xc309,	// (0x0003c6b4) list_single_choice_list_pane_ParamLimits

0xc309,	// (0x0003c6b4) list_single_choice_list_pane

0xc31c,	// (0x0003c6c7) list_single_choice_list_pane_g1

0x6baa,	// (0x00036f55) list_single_choice_list_pane_t1_ParamLimits

0x6baa,	// (0x00036f55) list_single_choice_list_pane_t1

0xc324,	// (0x0003c6cf) choice_list_pane_g1

0xc32c,	// (0x0003c6d7) choice_list_pane_t1

0x240d,	// (0x000327b8) input_focus_pane_cp11

0x2aad,	// (0x00032e58) title_pane_stacon_g2_ParamLimits

0x2aad,	// (0x00032e58) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0003fa74) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003fa74) title_pane_stacon_g

0x7601,	// (0x000379ac) cursor_press_pane

0x7948,	// (0x00037cf3) popup_fep_hwr_window_ParamLimits

0x7948,	// (0x00037cf3) popup_fep_hwr_window

0x79c0,	// (0x00037d6b) popup_fep_vkb_window_ParamLimits

0x79c0,	// (0x00037d6b) popup_fep_vkb_window

0xc33a,	// (0x0003c6e5) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x0003fee2) fep_vkb_side_pane_g_ParamLimits

0x8465,	// (0x00038810) fep_hwr_candidate_pane_ParamLimits

0x8465,	// (0x00038810) fep_hwr_candidate_pane

0x848f,	// (0x0003883a) fep_hwr_side_pane_ParamLimits

0x848f,	// (0x0003883a) fep_hwr_side_pane

0x84af,	// (0x0003885a) fep_hwr_top_pane_ParamLimits

0x84af,	// (0x0003885a) fep_hwr_top_pane

0x84c7,	// (0x00038872) fep_hwr_write_pane_ParamLimits

0x84c7,	// (0x00038872) fep_hwr_write_pane

0xfb37,	// (0x0003fee2) fep_vkb_side_pane_g

0xc342,	// (0x0003c6ed) fep_hwr_top_pane_g1

0xc354,	// (0x0003c6ff) fep_hwr_top_pane_g2

0x8501,	// (0x000388ac) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x0003febe) fep_hwr_top_pane_g

0x8516,	// (0x000388c1) fep_hwr_top_text_pane

0x2c65,	// (0x00033010) fep_hwr_top_text_pane_g1

0xc38a,	// (0x0003c735) fep_hwr_top_text_pane_t1

0x860c,	// (0x000389b7) fep_hwr_candidate_pane_g1

0xc5cf,	// (0x0003c97a) fep_vkb_keypad_pane_g3_ParamLimits

0xc5cf,	// (0x0003c97a) fep_vkb_keypad_pane_g3

0xc5f7,	// (0x0003c9a2) fep_vkb_keypad_pane_g4_ParamLimits

0xc5f7,	// (0x0003c9a2) fep_vkb_keypad_pane_g4

0xc666,	// (0x0003ca11) fep_vkb_bottom_pane_g2_ParamLimits

0xc666,	// (0x0003ca11) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x0003fee9) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x0003fee9) fep_vkb_bottom_pane_g

0xc2e6,	// (0x0003c691) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x0003fef3) cell_vkb_side_pane_g

0xc6f1,	// (0x0003ca9c) cell_vkb_side_pane_t1

0xc6ff,	// (0x0003caaa) cell_vkb_side_pane_t1_copy1

0xc2e6,	// (0x0003c691) bg_fep_vkb_candidate_pane_g2

0xc82b,	// (0x0003cbd6) cell_vkb_candidate_pane_ParamLimits

0xc398,	// (0x0003c743) aid_size_cell_vkb_ParamLimits

0xc398,	// (0x0003c743) aid_size_cell_vkb

0xc82b,	// (0x0003cbd6) cell_vkb_candidate_pane

0x8633,	// (0x000389de) bg_popup_fep_shadow_pane_g1

0xc426,	// (0x0003c7d1) fep_vkb_bottom_pane_ParamLimits

0xc426,	// (0x0003c7d1) fep_vkb_bottom_pane

0xc45c,	// (0x0003c807) fep_vkb_candidate_pane_ParamLimits

0xc45c,	// (0x0003c807) fep_vkb_candidate_pane

0xc478,	// (0x0003c823) fep_vkb_keypad_pane_ParamLimits

0xc478,	// (0x0003c823) fep_vkb_keypad_pane

0xc4b7,	// (0x0003c862) fep_vkb_side_pane_ParamLimits

0xc4b7,	// (0x0003c862) fep_vkb_side_pane

0xc4f3,	// (0x0003c89e) fep_vkb_top_pane_ParamLimits

0xc4f3,	// (0x0003c89e) fep_vkb_top_pane

0xc528,	// (0x0003c8d3) fep_vkb_top_pane_g1_ParamLimits

0xc528,	// (0x0003c8d3) fep_vkb_top_pane_g1

0xc537,	// (0x0003c8e2) fep_vkb_top_pane_g2_ParamLimits

0xc537,	// (0x0003c8e2) fep_vkb_top_pane_g2

0xc546,	// (0x0003c8f1) fep_vkb_top_pane_g3_ParamLimits

0xc546,	// (0x0003c8f1) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x0003fed9) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x0003fed9) fep_vkb_top_pane_g

0xc564,	// (0x0003c90f) fep_vkb_top_text_pane_ParamLimits

0xc564,	// (0x0003c90f) fep_vkb_top_text_pane

0xc575,	// (0x0003c920) fep_vkb_side_pane_g1_ParamLimits

0xc575,	// (0x0003c920) fep_vkb_side_pane_g1

0xc5be,	// (0x0003c969) grid_vkb_side_pane_ParamLimits

0xc5be,	// (0x0003c969) grid_vkb_side_pane

0x863b,	// (0x000389e6) bg_popup_fep_shadow_pane_g2

0x8644,	// (0x000389ef) bg_popup_fep_shadow_pane_g3

0x864c,	// (0x000389f7) bg_popup_fep_shadow_pane_g4

0x8655,	// (0x00038a00) bg_popup_fep_shadow_pane_g5

0x865f,	// (0x00038a0a) bg_popup_fep_shadow_pane_g6

0x8667,	// (0x00038a12) bg_popup_fep_shadow_pane_g7

0x28a2,	// (0x00032c4d) bg_popup_fep_shadow_pane_g8

0xc615,	// (0x0003c9c0) grid_vkb_keypad_number_pane_ParamLimits

0xc615,	// (0x0003c9c0) grid_vkb_keypad_number_pane

0xc625,	// (0x0003c9d0) grid_vkb_keypad_pane_ParamLimits

0xc625,	// (0x0003c9d0) grid_vkb_keypad_pane

0xc64b,	// (0x0003c9f6) fep_vkb_bottom_pane_g1_ParamLimits

0xc64b,	// (0x0003c9f6) fep_vkb_bottom_pane_g1

0xc674,	// (0x0003ca1f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc674,	// (0x0003ca1f) grid_vkb_keypad_bottom_left_pane

0xc689,	// (0x0003ca34) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc689,	// (0x0003ca34) grid_vkb_keypad_bottom_right_pane

0xc69e,	// (0x0003ca49) fep_vkb_top_text_pane_g1

0xc6b9,	// (0x0003ca64) fep_vkb_top_text_pane_t1

0xc6ce,	// (0x0003ca79) cell_vkb_side_pane_ParamLimits

0xc6ce,	// (0x0003ca79) cell_vkb_side_pane

0xc2e6,	// (0x0003c691) cell_vkb_side_pane_g1

0xc70d,	// (0x0003cab8) cell_vkb_keypad_pane_ParamLimits

0xc70d,	// (0x0003cab8) cell_vkb_keypad_pane

0xc782,	// (0x0003cb2d) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x0003ff06) bg_popup_fep_shadow_pane_g

0x8679,	// (0x00038a24) cell_hwr_side_pane_g1

0x8679,	// (0x00038a24) cell_hwr_side_pane_g2

0xc78c,	// (0x0003cb37) cell_vkb_keypad_pane_t1

0xc79a,	// (0x0003cb45) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc79a,	// (0x0003cb45) cell_vkb_keypad_bottom_left_pane

0xc7b7,	// (0x0003cb62) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7b7,	// (0x0003cb62) cell_vkb_keypad_bottom_right_pane

0xc2e6,	// (0x0003c691) cell_vkb_keypad_bottom_left_pane_g1

0xc2e6,	// (0x0003c691) cell_vkb_keypad_bottom_right_pane_g1

0xc7f0,	// (0x0003cb9b) cell_vkb_keypad_number_pane_ParamLimits

0xc7f0,	// (0x0003cb9b) cell_vkb_keypad_number_pane

0xc80f,	// (0x0003cbba) cell_vkb_keypad_number_pane_g1

0xc819,	// (0x0003cbc4) cell_vkb_keypad_number_pane_g2

0xc822,	// (0x0003cbcd) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x0003fef8) cell_vkb_keypad_number_pane_g

0xc78c,	// (0x0003cb37) cell_vkb_keypad_number_pane_t1

0xc846,	// (0x0003cbf1) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x0003ff19) cell_hwr_side_pane_g

0xc85f,	// (0x0003cc0a) cell_hwr_side_pane_t1

0x8683,	// (0x00038a2e) cell_hwr_side_pane_t1_copy1

0x8691,	// (0x00038a3c) cell_hwr_candidate_pane_g1

0x86c0,	// (0x00038a6b) cell_hwr_candidate_pane_t1

0xc2e6,	// (0x0003c691) cell_vkb_candidate_pane_g2

0xc8a3,	// (0x0003cc4e) cell_vkb_candidate_pane_t1

0x842c,	// (0x000387d7) bg_popup_fep_shadow_pane_ParamLimits

0x842c,	// (0x000387d7) bg_popup_fep_shadow_pane

0x84e1,	// (0x0003888c) bg_fep_hwr_top_pane_g4

0xc366,	// (0x0003c711) bg_hwr_side_pane_g1_ParamLimits

0xc366,	// (0x0003c711) bg_hwr_side_pane_g1

0x8552,	// (0x000388fd) cell_hwr_side_pane_ParamLimits

0x8552,	// (0x000388fd) cell_hwr_side_pane

0x858d,	// (0x00038938) fep_hwr_write_pane_g1_ParamLimits

0x858d,	// (0x00038938) fep_hwr_write_pane_g1

0x859a,	// (0x00038945) fep_hwr_write_pane_g2_ParamLimits

0x859a,	// (0x00038945) fep_hwr_write_pane_g2

0x85a7,	// (0x00038952) fep_hwr_write_pane_g3_ParamLimits

0x85a7,	// (0x00038952) fep_hwr_write_pane_g3

0x85b5,	// (0x00038960) fep_hwr_write_pane_g4_ParamLimits

0x85b5,	// (0x00038960) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x0003fec5) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x0003fec5) fep_hwr_write_pane_g

0x84e1,	// (0x0003888c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x84e1,	// (0x0003888c) bg_fep_hwr_candidate_pane_g2

0x85ca,	// (0x00038975) cell_hwr_candidate_pane_ParamLimits

0x85ca,	// (0x00038975) cell_hwr_candidate_pane

0x860c,	// (0x000389b7) fep_hwr_candidate_pane_g1_ParamLimits

0xc3c6,	// (0x0003c771) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc3c6,	// (0x0003c771) bg_popup_fep_shadow_pane_cp2

0xc556,	// (0x0003c901) fep_vkb_top_pane_g4_ParamLimits

0xc556,	// (0x0003c901) fep_vkb_top_pane_g4

0xc59c,	// (0x0003c947) fep_vkb_side_pane_g2_ParamLimits

0xc59c,	// (0x0003c947) fep_vkb_side_pane_g2

0x6857,	// (0x00036c02) list_setting_pane_t4_ParamLimits

0x6857,	// (0x00036c02) list_setting_pane_t4

0x68e9,	// (0x00036c94) list_setting_number_pane_t5_ParamLimits

0x68e9,	// (0x00036c94) list_setting_number_pane_t5

0x6f34,	// (0x000372df) list_double_heading_pane_cp2_ParamLimits

0x6f34,	// (0x000372df) list_double_heading_pane_cp2

0xc8b1,	// (0x0003cc5c) list_double_heading_pane_g1_cp2_ParamLimits

0xc8b1,	// (0x0003cc5c) list_double_heading_pane_g1_cp2

0xc8bd,	// (0x0003cc68) list_double_heading_pane_g2_cp2_ParamLimits

0xc8bd,	// (0x0003cc68) list_double_heading_pane_g2_cp2

0xc8d1,	// (0x0003cc7c) list_double_heading_pane_t1_cp2_ParamLimits

0xc8d1,	// (0x0003cc7c) list_double_heading_pane_t1_cp2

0xc8e7,	// (0x0003cc92) list_double_heading_pane_t2_cp2_ParamLimits

0xc8e7,	// (0x0003cc92) list_double_heading_pane_t2_cp2

0x2405,	// (0x000327b0) aid_value_unit2

0x5e50,	// (0x000361fb) popup_preview_fixed_window

0x25a7,	// (0x00032952) bg_popup_preview_window_pane_cp02

0xc8f9,	// (0x0003cca4) list_preview_fixed_pane

0xc93f,	// (0x0003ccea) list_empty_pane_fp_ParamLimits

0xc93f,	// (0x0003ccea) list_empty_pane_fp

0xc93f,	// (0x0003ccea) list_single_cale_day_pane_fp_ParamLimits

0xc93f,	// (0x0003ccea) list_single_cale_day_pane_fp

0xc93f,	// (0x0003ccea) list_single_graphic_heading_pane_fp_ParamLimits

0xc93f,	// (0x0003ccea) list_single_graphic_heading_pane_fp

0xc93f,	// (0x0003ccea) list_single_graphic_pane_fp_ParamLimits

0xc93f,	// (0x0003ccea) list_single_graphic_pane_fp

0xc93f,	// (0x0003ccea) list_single_heading_pane_fp_ParamLimits

0xc93f,	// (0x0003ccea) list_single_heading_pane_fp

0xc93f,	// (0x0003ccea) list_single_pane_fp_ParamLimits

0xc93f,	// (0x0003ccea) list_single_pane_fp

0xc955,	// (0x0003cd00) list_single_pane_fp_g1_ParamLimits

0xc955,	// (0x0003cd00) list_single_pane_fp_g1

0x4d15,	// (0x000350c0) list_single_pane_fp_g2_ParamLimits

0x4d15,	// (0x000350c0) list_single_pane_fp_g2

0x4d21,	// (0x000350cc) list_single_pane_fp_g3_ParamLimits

0x4d21,	// (0x000350cc) list_single_pane_fp_g3

0xc961,	// (0x0003cd0c) list_single_pane_fp_g4_ParamLimits

0xc961,	// (0x0003cd0c) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0003ff2c) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0003ff2c) list_single_pane_fp_g

0x4d35,	// (0x000350e0) list_single_pane_fp_t1_ParamLimits

0x4d35,	// (0x000350e0) list_single_pane_fp_t1

0x4d4c,	// (0x000350f7) list_single_graphic_pane_fp_g1_ParamLimits

0x4d4c,	// (0x000350f7) list_single_graphic_pane_fp_g1

0xc955,	// (0x0003cd00) list_single_graphic_pane_fp_g2_ParamLimits

0xc955,	// (0x0003cd00) list_single_graphic_pane_fp_g2

0x4d15,	// (0x000350c0) list_single_graphic_pane_fp_g3_ParamLimits

0x4d15,	// (0x000350c0) list_single_graphic_pane_fp_g3

0x4d21,	// (0x000350cc) list_single_graphic_pane_fp_g4_ParamLimits

0x4d21,	// (0x000350cc) list_single_graphic_pane_fp_g4

0xc961,	// (0x0003cd0c) list_single_graphic_pane_fp_g5_ParamLimits

0xc961,	// (0x0003cd0c) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003ff35) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003ff35) list_single_graphic_pane_fp_g

0x4d58,	// (0x00035103) list_single_graphic_pane_fp_t1_ParamLimits

0x4d58,	// (0x00035103) list_single_graphic_pane_fp_t1

0x4d4c,	// (0x000350f7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4d4c,	// (0x000350f7) list_single_graphic_heading_pane_fp_g1

0xc955,	// (0x0003cd00) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc955,	// (0x0003cd00) list_single_graphic_heading_pane_fp_g2

0x4d15,	// (0x000350c0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4d15,	// (0x000350c0) list_single_graphic_heading_pane_fp_g3

0x4d21,	// (0x000350cc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4d21,	// (0x000350cc) list_single_graphic_heading_pane_fp_g4

0xc961,	// (0x0003cd0c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc961,	// (0x0003cd0c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003ff35) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003ff35) list_single_graphic_heading_pane_fp_g

0x4d6e,	// (0x00035119) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4d6e,	// (0x00035119) list_single_graphic_heading_pane_fp_t1

0x4d84,	// (0x0003512f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4d84,	// (0x0003512f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0003ff40) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0003ff40) list_single_graphic_heading_pane_fp_t

0x4d96,	// (0x00035141) list_single_cale_day_pane_fp_g1_ParamLimits

0x4d96,	// (0x00035141) list_single_cale_day_pane_fp_g1

0xc96d,	// (0x0003cd18) list_single_cale_day_pane_fp_g2_ParamLimits

0xc96d,	// (0x0003cd18) list_single_cale_day_pane_fp_g2

0x4dce,	// (0x00035179) list_single_cale_day_pane_fp_g3_ParamLimits

0x4dce,	// (0x00035179) list_single_cale_day_pane_fp_g3

0x4df6,	// (0x000351a1) list_single_cale_day_pane_fp_g4_ParamLimits

0x4df6,	// (0x000351a1) list_single_cale_day_pane_fp_g4

0x4e1a,	// (0x000351c5) list_single_cale_day_pane_fp_g5_ParamLimits

0x4e1a,	// (0x000351c5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x0003ff45) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x0003ff45) list_single_cale_day_pane_fp_g

0x4e3e,	// (0x000351e9) list_single_cale_day_pane_fp_t1_ParamLimits

0x4e3e,	// (0x000351e9) list_single_cale_day_pane_fp_t1

0x4e64,	// (0x0003520f) list_single_cale_day_pane_fp_t2_ParamLimits

0x4e64,	// (0x0003520f) list_single_cale_day_pane_fp_t2

0x4e7d,	// (0x00035228) list_single_cale_day_pane_fp_t3_ParamLimits

0x4e7d,	// (0x00035228) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x0003ff50) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x0003ff50) list_single_cale_day_pane_fp_t

0xc955,	// (0x0003cd00) list_empty_pane_fp_g1_ParamLimits

0xc955,	// (0x0003cd00) list_empty_pane_fp_g1

0x4e96,	// (0x00035241) list_empty_pane_fp_t1

0x4ea4,	// (0x0003524f) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x0003ff57) list_empty_pane_fp_t

0xc955,	// (0x0003cd00) list_single_heading_pane_fp_g1_ParamLimits

0xc955,	// (0x0003cd00) list_single_heading_pane_fp_g1

0x4d15,	// (0x000350c0) list_single_heading_pane_fp_g2_ParamLimits

0x4d15,	// (0x000350c0) list_single_heading_pane_fp_g2

0x4d21,	// (0x000350cc) list_single_heading_pane_fp_g3_ParamLimits

0x4d21,	// (0x000350cc) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0003ff5c) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0003ff5c) list_single_heading_pane_fp_g

0x4eb2,	// (0x0003525d) list_single_heading_pane_fp_t1_ParamLimits

0x4eb2,	// (0x0003525d) list_single_heading_pane_fp_t1

0x4ec4,	// (0x0003526f) list_single_heading_pane_fp_t2_ParamLimits

0x4ec4,	// (0x0003526f) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x0003ff63) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x0003ff63) list_single_heading_pane_fp_t

0x6c02,	// (0x00036fad) aid_size_cell_fast

0x258a,	// (0x00032935) soft_indicator_pane_cp1_t1

0x6c0b,	// (0x00036fb6) cell_app_pane_cp2_ParamLimits

0x6c0b,	// (0x00036fb6) cell_app_pane_cp2

0x844e,	// (0x000387f9) fep_hwr_candidate_drop_down_list_pane

0x8626,	// (0x000389d1) fep_hwr_candidate_pane_g3_ParamLimits

0x8626,	// (0x000389d1) fep_hwr_candidate_pane_g3

0x3f96,	// (0x00034341) fep_hwr_candidate_pane_g4_ParamLimits

0x3f96,	// (0x00034341) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x0003fed2) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x0003fed2) fep_hwr_candidate_pane_g

0xc44b,	// (0x0003c7f6) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc44b,	// (0x0003c7f6) fep_vkb_candidate_drop_down_list_pane

0xc84e,	// (0x0003cbf9) fep_vkb_candidate_pane_g3

0xc856,	// (0x0003cc01) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x0003feff) fep_vkb_candidate_pane_g

0x8691,	// (0x00038a3c) cell_hwr_candidate_pane_g1_ParamLimits

0x869f,	// (0x00038a4a) cell_hwr_candidate_pane_g3_ParamLimits

0x869f,	// (0x00038a4a) cell_hwr_candidate_pane_g3

0xd1e2,	// (0x0003d58d) cell_hwr_candidate_pane_g4_ParamLimits

0xd1e2,	// (0x0003d58d) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0003ff1e) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0003ff1e) cell_hwr_candidate_pane_g

0xc86d,	// (0x0003cc18) cell_vkb_candidate_pane_g3_ParamLimits

0xc86d,	// (0x0003cc18) cell_vkb_candidate_pane_g3

0xc888,	// (0x0003cc33) cell_vkb_candidate_pane_g4_ParamLimits

0xc888,	// (0x0003cc33) cell_vkb_candidate_pane_g4

0xc979,	// (0x0003cd24) cell_app_pane_cp2_g1_ParamLimits

0xc979,	// (0x0003cd24) cell_app_pane_cp2_g1

0xc997,	// (0x0003cd42) cell_app_pane_cp2_g2_ParamLimits

0xc997,	// (0x0003cd42) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x0003ff68) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x0003ff68) cell_app_pane_cp2_g

0xc9a3,	// (0x0003cd4e) cell_app_pane_cp2_t1_ParamLimits

0xc9a3,	// (0x0003cd4e) cell_app_pane_cp2_t1

0x282f,	// (0x00032bda) grid_highlight_pane_cp1_ParamLimits

0x282f,	// (0x00032bda) grid_highlight_pane_cp1

0x86de,	// (0x00038a89) cell_hwr_candidate_pane_cp1_ParamLimits

0x86de,	// (0x00038a89) cell_hwr_candidate_pane_cp1

0x8691,	// (0x00038a3c) fep_hwr_candidate_drop_down_list_pane_g1

0x86fd,	// (0x00038aa8) fep_hwr_candidate_drop_down_list_pane_g2

0x870a,	// (0x00038ab5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0003ff6d) fep_hwr_candidate_drop_down_list_pane_g

0x8717,	// (0x00038ac2) fep_hwr_candidate_drop_down_list_scroll_pane

0x8720,	// (0x00038acb) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8720,	// (0x00038acb) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x872d,	// (0x00038ad8) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x872d,	// (0x00038ad8) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x873a,	// (0x00038ae5) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x873a,	// (0x00038ae5) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8747,	// (0x00038af2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8747,	// (0x00038af2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8762,	// (0x00038b0d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8762,	// (0x00038b0d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x877d,	// (0x00038b28) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x877d,	// (0x00038b28) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8798,	// (0x00038b43) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8798,	// (0x00038b43) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x87b3,	// (0x00038b5e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x87b3,	// (0x00038b5e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0003ff74) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0003ff74) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9b5,	// (0x0003cd60) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9b5,	// (0x0003cd60) cell_vkb_candidate_pane_cp1

0xc556,	// (0x0003c901) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc556,	// (0x0003c901) fep_vkb_candidate_drop_down_list_pane_g1

0xc9d5,	// (0x0003cd80) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9d5,	// (0x0003cd80) fep_vkb_candidate_drop_down_list_pane_g2

0xc9e2,	// (0x0003cd8d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9e2,	// (0x0003cd8d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x0003ff85) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x0003ff85) fep_vkb_candidate_drop_down_list_pane_g

0xc9ef,	// (0x0003cd9a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9ef,	// (0x0003cd9a) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9fc,	// (0x0003cda7) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9fc,	// (0x0003cda7) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca09,	// (0x0003cdb4) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca09,	// (0x0003cdb4) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca15,	// (0x0003cdc0) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca15,	// (0x0003cdc0) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xca21,	// (0x0003cdcc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xca21,	// (0x0003cdcc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xca42,	// (0x0003cded) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xca42,	// (0x0003cded) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca63,	// (0x0003ce0e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca63,	// (0x0003ce0e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca84,	// (0x0003ce2f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca84,	// (0x0003ce2f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcaa5,	// (0x0003ce50) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcaa5,	// (0x0003ce50) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0003ff8c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0003ff8c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5f6a,	// (0x00036315) title_pane_g1_ParamLimits

0x5f77,	// (0x00036322) title_pane_g2_ParamLimits

0xf54e,	// (0x0003f8f9) title_pane_g_ParamLimits

0x2c5d,	// (0x00033008) aid_call2_pane

0x2c55,	// (0x00033000) aid_call_pane

0x2c65,	// (0x00033010) popup_clock_analogue_window_g1

0x2c65,	// (0x00033010) popup_clock_analogue_window_g2

0x6f15,	// (0x000372c0) popup_clock_analogue_window_g3

0x6f1e,	// (0x000372c9) popup_clock_analogue_window_g4

0x2417,	// (0x000327c2) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0003faa3) popup_clock_analogue_window_g

0x6f26,	// (0x000372d1) popup_clock_analogue_window_t1

0x6f5e,	// (0x00037309) clock_digital_number_pane_ParamLimits

0x6f5e,	// (0x00037309) clock_digital_number_pane

0x6f6a,	// (0x00037315) clock_digital_number_pane_cp02_ParamLimits

0x6f6a,	// (0x00037315) clock_digital_number_pane_cp02

0x6f76,	// (0x00037321) clock_digital_number_pane_cp03_ParamLimits

0x6f76,	// (0x00037321) clock_digital_number_pane_cp03

0x6f82,	// (0x0003732d) clock_digital_number_pane_cp04_ParamLimits

0x6f82,	// (0x0003732d) clock_digital_number_pane_cp04

0x6f8e,	// (0x00037339) clock_digital_separator_pane_ParamLimits

0x6f8e,	// (0x00037339) clock_digital_separator_pane

0x6f9a,	// (0x00037345) popup_clock_digital_window_t1_ParamLimits

0x6f9a,	// (0x00037345) popup_clock_digital_window_t1

0x2417,	// (0x000327c2) clock_digital_number_pane_g1

0x2417,	// (0x000327c2) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0003faae) clock_digital_number_pane_g

0x2417,	// (0x000327c2) clock_digital_separator_pane_g1

0x2417,	// (0x000327c2) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0003faae) clock_digital_separator_pane_g

0x980e,	// (0x00039bb9) aid_fill_nsta_ParamLimits

0x995a,	// (0x00039d05) indicator_nsta_pane_ParamLimits

0x9ad3,	// (0x00039e7e) popup_clock_analogue_window

0x9ad3,	// (0x00039e7e) popup_clock_digital_window

0x247d,	// (0x00032828) grid_indicator_nsta_pane_ParamLimits

0xbcda,	// (0x0003c085) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x0003fe52) clock_nsta_pane_t

0x6e40,	// (0x000371eb) aid_size_max_handle

0x6e4a,	// (0x000371f5) aid_size_min_handle

0x7601,	// (0x000379ac) editor_scroll_pane

0xcac0,	// (0x0003ce6b) ex_editor_pane

0x2951,	// (0x00032cfc) scroll_pane_cp13

0x27d7,	// (0x00032b82) scroll_pane_cp14

0x2c94,	// (0x0003303f) scroll_pane_cp36

0x6f48,	// (0x000372f3) list_single_graphic_hl_pane_cp2_ParamLimits

0x6f48,	// (0x000372f3) list_single_graphic_hl_pane_cp2

0xb2b1,	// (0x0003b65c) list_single_graphic_hl_pane_ParamLimits

0xb2b1,	// (0x0003b65c) list_single_graphic_hl_pane

0x87ce,	// (0x00038b79) aid_size_min_hl_cp1

0xcac8,	// (0x0003ce73) list_highlight_pane_cp34_ParamLimits

0xcac8,	// (0x0003ce73) list_highlight_pane_cp34

0xcad9,	// (0x0003ce84) list_single_graphic_hl_pane_g1_ParamLimits

0xcad9,	// (0x0003ce84) list_single_graphic_hl_pane_g1

0x87d7,	// (0x00038b82) list_single_graphic_hl_pane_g2_ParamLimits

0x87d7,	// (0x00038b82) list_single_graphic_hl_pane_g2

0x87d7,	// (0x00038b82) list_single_graphic_hl_pane_g3_ParamLimits

0x87d7,	// (0x00038b82) list_single_graphic_hl_pane_g3

0x87e3,	// (0x00038b8e) list_single_graphic_hl_pane_g4_ParamLimits

0x87e3,	// (0x00038b8e) list_single_graphic_hl_pane_g4

0x87ef,	// (0x00038b9a) list_single_graphic_hl_pane_g5_ParamLimits

0x87ef,	// (0x00038b9a) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x0003ff9d) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x0003ff9d) list_single_graphic_hl_pane_g

0x8803,	// (0x00038bae) list_single_graphic_hl_pane_t1_ParamLimits

0x8803,	// (0x00038bae) list_single_graphic_hl_pane_t1

0xcae6,	// (0x0003ce91) aid_size_min_hl_cp2

0xcaef,	// (0x0003ce9a) list_highlight_pane_cp34_cp2_ParamLimits

0xcaef,	// (0x0003ce9a) list_highlight_pane_cp34_cp2

0xcad9,	// (0x0003ce84) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcad9,	// (0x0003ce84) list_single_graphic_hl_pane_g1_cp2

0xcafc,	// (0x0003cea7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcafc,	// (0x0003cea7) list_single_graphic_hl_pane_g2_cp2

0xcb08,	// (0x0003ceb3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb08,	// (0x0003ceb3) list_single_graphic_hl_pane_g3_cp2

0x753a,	// (0x000378e5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x753a,	// (0x000378e5) list_single_graphic_hl_pane_g4_cp2

0xcb16,	// (0x0003cec1) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb16,	// (0x0003cec1) list_single_graphic_hl_pane_g5_cp2

0x7766,	// (0x00037b11) control_pane_g4_ParamLimits

0x7766,	// (0x00037b11) control_pane_g4

0x97ec,	// (0x00039b97) bg_popup_sub_pane_cp10_ParamLimits

0xc2f0,	// (0x0003c69b) list_choice_list_pane_ParamLimits

0xc2ff,	// (0x0003c6aa) scroll_pane_cp23

0x25a7,	// (0x00032952) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8f9,	// (0x0003cca4) list_preview_fixed_pane_ParamLimits

0xc90f,	// (0x0003ccba) list_preview_fixed_pane_cp_ParamLimits

0xc90f,	// (0x0003ccba) list_preview_fixed_pane_cp

0xc91b,	// (0x0003ccc6) popup_preview_fixed_window_g1_ParamLimits

0xc91b,	// (0x0003ccc6) popup_preview_fixed_window_g1

0xc927,	// (0x0003ccd2) popup_preview_fixed_window_g2_ParamLimits

0xc927,	// (0x0003ccd2) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x0003ff25) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x0003ff25) popup_preview_fixed_window_g

0x6d1a,	// (0x000370c5) aid_navi_side_left_pane_ParamLimits

0x6d2f,	// (0x000370da) aid_navi_side_right_pane_ParamLimits

0x6d47,	// (0x000370f2) navi_icon_pane_stacon_ParamLimits

0x6d5b,	// (0x00037106) navi_navi_pane_stacon_ParamLimits

0x6d47,	// (0x000370f2) navi_text_pane_stacon_ParamLimits

0x5d1f,	// (0x000360ca) main_text_info_pane

0xcb40,	// (0x0003ceeb) listscroll_text_info_pane

0xcb48,	// (0x0003cef3) list_text_info_pane_ParamLimits

0xcb48,	// (0x0003cef3) list_text_info_pane

0xcb57,	// (0x0003cf02) scroll_pane_cp24_ParamLimits

0xcb57,	// (0x0003cf02) scroll_pane_cp24

0xcb75,	// (0x0003cf20) list_text_info_pane_t1_ParamLimits

0xcb75,	// (0x0003cf20) list_text_info_pane_t1

0x78bc,	// (0x00037c67) popup_fast_swap2_window_ParamLimits

0x78bc,	// (0x00037c67) popup_fast_swap2_window

0xcba9,	// (0x0003cf54) aid_size_cell_fast2

0x240d,	// (0x000327b8) bg_popup_window_pane_cp17

0xa158,	// (0x0003a503) heading_pane_cp2

0x26db,	// (0x00032a86) listscroll_fast2_pane

0xcbb3,	// (0x0003cf5e) grid_fast2_pane

0xcbbd,	// (0x0003cf68) listscroll_fast2_pane_g1

0xcbc5,	// (0x0003cf70) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x0003ffa8) listscroll_fast2_pane_g

0x2951,	// (0x00032cfc) scroll_pane_cp26

0xcbcf,	// (0x0003cf7a) cell_fast2_pane_ParamLimits

0xcbcf,	// (0x0003cf7a) cell_fast2_pane

0xcbe4,	// (0x0003cf8f) cell_fast2_pane_g1

0xcbed,	// (0x0003cf98) cell_fast2_pane_g2

0xcbf6,	// (0x0003cfa1) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x0003ffad) cell_fast2_pane_g

0x270e,	// (0x00032ab9) grid_highlight_pane_cp9

0x7884,	// (0x00037c2f) main_eswt_pane_ParamLimits

0x7884,	// (0x00037c2f) main_eswt_pane

0xcb6c,	// (0x0003cf17) list_single_text_info_pane

0xcbfe,	// (0x0003cfa9) eswt_ctrl_button_pane

0xcbfe,	// (0x0003cfa9) eswt_ctrl_canvas_pane

0xcc06,	// (0x0003cfb1) eswt_ctrl_combo_pane

0xcbfe,	// (0x0003cfa9) eswt_ctrl_default_pane

0xcbfe,	// (0x0003cfa9) eswt_ctrl_label_pane

0xcc0e,	// (0x0003cfb9) eswt_ctrl_wait_pane

0xcc16,	// (0x0003cfc1) eswt_shell_pane

0x240d,	// (0x000327b8) listscroll_eswt_app_pane

0xcc36,	// (0x0003cfe1) popup_eswt_tasktip_window_ParamLimits

0xcc36,	// (0x0003cfe1) popup_eswt_tasktip_window

0x9d6d,	// (0x0003a118) bg_popup_window_pane_cp18

0xcc47,	// (0x0003cff2) eswt_control_pane_g1_ParamLimits

0xcc47,	// (0x0003cff2) eswt_control_pane_g1

0xcc54,	// (0x0003cfff) eswt_control_pane_g2_ParamLimits

0xcc54,	// (0x0003cfff) eswt_control_pane_g2

0xcc61,	// (0x0003d00c) eswt_control_pane_g3_ParamLimits

0xcc61,	// (0x0003d00c) eswt_control_pane_g3

0xcc6e,	// (0x0003d019) eswt_control_pane_g4_ParamLimits

0xcc6e,	// (0x0003d019) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x0003ffb4) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x0003ffb4) eswt_control_pane_g

0x282f,	// (0x00032bda) bg_button_pane_ParamLimits

0x282f,	// (0x00032bda) bg_button_pane

0x2723,	// (0x00032ace) common_borders_pane_copy2_ParamLimits

0x2723,	// (0x00032ace) common_borders_pane_copy2

0xcc7b,	// (0x0003d026) control_button_pane_g1_ParamLimits

0xcc7b,	// (0x0003d026) control_button_pane_g1

0xcc87,	// (0x0003d032) control_button_pane_g2_ParamLimits

0xcc87,	// (0x0003d032) control_button_pane_g2

0xcc93,	// (0x0003d03e) control_button_pane_g3_ParamLimits

0xcc93,	// (0x0003d03e) control_button_pane_g3

0x0002,

0xfc12,	// (0x0003ffbd) control_button_pane_g_ParamLimits

0xfc12,	// (0x0003ffbd) control_button_pane_g

0xcca7,	// (0x0003d052) control_button_pane_t1

0xccb5,	// (0x0003d060) control_button_pane_t2

0x0001,

0xfc19,	// (0x0003ffc4) control_button_pane_t

0x9cf9,	// (0x0003a0a4) bg_button_pane_g1

0x9d09,	// (0x0003a0b4) bg_button_pane_g2

0x9d01,	// (0x0003a0ac) bg_button_pane_g3

0x9d19,	// (0x0003a0c4) bg_button_pane_g4

0x9d11,	// (0x0003a0bc) bg_button_pane_g5

0x9d21,	// (0x0003a0cc) bg_button_pane_g6

0x9d29,	// (0x0003a0d4) bg_button_pane_g7

0x9d39,	// (0x0003a0e4) bg_button_pane_g8

0x9d31,	// (0x0003a0dc) bg_button_pane_g9

0x0008,

0xf861,	// (0x0003fc0c) bg_button_pane_g

0xc2ab,	// (0x0003c656) common_borders_pane_ParamLimits

0xc2ab,	// (0x0003c656) common_borders_pane

0xcc47,	// (0x0003cff2) eswt_control_pane_g1_copy1_ParamLimits

0xcc47,	// (0x0003cff2) eswt_control_pane_g1_copy1

0xcc54,	// (0x0003cfff) eswt_control_pane_g2_copy1_ParamLimits

0xcc54,	// (0x0003cfff) eswt_control_pane_g2_copy1

0xcc61,	// (0x0003d00c) eswt_control_pane_g3_copy1_ParamLimits

0xcc61,	// (0x0003d00c) eswt_control_pane_g3_copy1

0xcc6e,	// (0x0003d019) eswt_control_pane_g4_copy1_ParamLimits

0xcc6e,	// (0x0003d019) eswt_control_pane_g4_copy1

0xc2e6,	// (0x0003c691) bg_eswt_ctrl_canvas_pane_g1

0xc2ab,	// (0x0003c656) common_borders_pane_cp2_ParamLimits

0xc2ab,	// (0x0003c656) common_borders_pane_cp2

0xc2ab,	// (0x0003c656) common_borders_pane_cp3_ParamLimits

0xc2ab,	// (0x0003c656) common_borders_pane_cp3

0xccc3,	// (0x0003d06e) separator_horizontal_pane

0xcccb,	// (0x0003d076) separator_vertical_pane

0xcc47,	// (0x0003cff2) eswt_control_pane_g1_copy2_ParamLimits

0xcc47,	// (0x0003cff2) eswt_control_pane_g1_copy2

0xcc54,	// (0x0003cfff) eswt_control_pane_g2_copy2_ParamLimits

0xcc54,	// (0x0003cfff) eswt_control_pane_g2_copy2

0xcc61,	// (0x0003d00c) eswt_control_pane_g3_copy2_ParamLimits

0xcc61,	// (0x0003d00c) eswt_control_pane_g3_copy2

0xcc6e,	// (0x0003d019) eswt_control_pane_g4_copy2_ParamLimits

0xcc6e,	// (0x0003d019) eswt_control_pane_g4_copy2

0x240d,	// (0x000327b8) common_borders_pane_cp4

0xccd4,	// (0x0003d07f) separator_horizontal_pane_g1

0xccdd,	// (0x0003d088) separator_horizontal_pane_g2

0xcce6,	// (0x0003d091) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x0003ffc9) separator_horizontal_pane_g

0xcc47,	// (0x0003cff2) eswt_control_pane_g1_copy3_ParamLimits

0xcc47,	// (0x0003cff2) eswt_control_pane_g1_copy3

0xcc54,	// (0x0003cfff) eswt_control_pane_g2_copy3_ParamLimits

0xcc54,	// (0x0003cfff) eswt_control_pane_g2_copy3

0xcc61,	// (0x0003d00c) eswt_control_pane_g3_copy3_ParamLimits

0xcc61,	// (0x0003d00c) eswt_control_pane_g3_copy3

0xcc6e,	// (0x0003d019) eswt_control_pane_g4_copy3_ParamLimits

0xcc6e,	// (0x0003d019) eswt_control_pane_g4_copy3

0x240d,	// (0x000327b8) common_borders_pane_cp5

0xccef,	// (0x0003d09a) separator_vertical_pane_g1

0xccf8,	// (0x0003d0a3) separator_vertical_pane_g2

0xcd01,	// (0x0003d0ac) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x0003ffd0) separator_vertical_pane_g

0xcc47,	// (0x0003cff2) eswt_control_pane_g1_copy4_ParamLimits

0xcc47,	// (0x0003cff2) eswt_control_pane_g1_copy4

0xcc54,	// (0x0003cfff) eswt_control_pane_g2_copy4_ParamLimits

0xcc54,	// (0x0003cfff) eswt_control_pane_g2_copy4

0xcc61,	// (0x0003d00c) eswt_control_pane_g3_copy4_ParamLimits

0xcc61,	// (0x0003d00c) eswt_control_pane_g3_copy4

0xcc6e,	// (0x0003d019) eswt_control_pane_g4_copy4_ParamLimits

0xcc6e,	// (0x0003d019) eswt_control_pane_g4_copy4

0xcd0a,	// (0x0003d0b5) eswt_ctrl_combo_button_pane

0xcd12,	// (0x0003d0bd) eswt_ctrl_input_pane

0xcd1a,	// (0x0003d0c5) popup_choice_list_window_cp70

0xcd22,	// (0x0003d0cd) eswt_ctrl_input_pane_t1

0x240d,	// (0x000327b8) input_focus_pane_cp70

0xc2ab,	// (0x0003c656) bg_button_pane_cp70_ParamLimits

0xc2ab,	// (0x0003c656) bg_button_pane_cp70

0xcd30,	// (0x0003d0db) eswt_ctrl_combo_button_pane_g1

0xcd38,	// (0x0003d0e3) wait_bar_pane_cp70

0x9d6d,	// (0x0003a118) bg_popup_window_pane_cp70_ParamLimits

0x9d6d,	// (0x0003a118) bg_popup_window_pane_cp70

0xcd40,	// (0x0003d0eb) popup_eswt_tasktip_window_t1

0xcd56,	// (0x0003d101) wait_bar_pane_cp71_ParamLimits

0xcd56,	// (0x0003d101) wait_bar_pane_cp71

0xcd62,	// (0x0003d10d) grid_eswt_app_pane

0x2b41,	// (0x00032eec) scroll_pane_cp70

0xcd6b,	// (0x0003d116) cell_eswt_app_pane_ParamLimits

0xcd6b,	// (0x0003d116) cell_eswt_app_pane

0xcd9b,	// (0x0003d146) cell_eswt_app_pane_g1_ParamLimits

0xcd9b,	// (0x0003d146) cell_eswt_app_pane_g1

0xcdca,	// (0x0003d175) cell_eswt_app_pane_g2_ParamLimits

0xcdca,	// (0x0003d175) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x0003ffd7) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x0003ffd7) cell_eswt_app_pane_g

0xcdee,	// (0x0003d199) cell_eswt_app_pane_t1_ParamLimits

0xcdee,	// (0x0003d199) cell_eswt_app_pane_t1

0xce20,	// (0x0003d1cb) grid_highlight_pane_cp70_ParamLimits

0xce20,	// (0x0003d1cb) grid_highlight_pane_cp70

0x74d6,	// (0x00037881) set_content_pane_g1

0x974d,	// (0x00039af8) status_small_volume_pane

0x8819,	// (0x00038bc4) status_small_volume_pane_g1

0x8821,	// (0x00038bcc) volume_small2_pane

0x882a,	// (0x00038bd5) volume_small2_pane_g1

0x8833,	// (0x00038bde) volume_small2_pane_g2

0x883c,	// (0x00038be7) volume_small2_pane_g3

0x8845,	// (0x00038bf0) volume_small2_pane_g4

0x884e,	// (0x00038bf9) volume_small2_pane_g5

0x8857,	// (0x00038c02) volume_small2_pane_g6

0x8860,	// (0x00038c0b) volume_small2_pane_g7

0x8869,	// (0x00038c14) volume_small2_pane_g8

0x8872,	// (0x00038c1d) volume_small2_pane_g9

0x887b,	// (0x00038c26) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x0003ffdc) volume_small2_pane_g

0xc69e,	// (0x0003ca49) fep_vkb_top_text_pane_g1_ParamLimits

0xc6b9,	// (0x0003ca64) fep_vkb_top_text_pane_t1_ParamLimits

0xc933,	// (0x0003ccde) popup_preview_fixed_window_g3_ParamLimits

0xc933,	// (0x0003ccde) popup_preview_fixed_window_g3

0x7d6b,	// (0x00038116) popup_toolbar_trans_pane

0xb09c,	// (0x0003b447) aid_height_set_list_ParamLimits

0xb0ad,	// (0x0003b458) aid_size_parent_ParamLimits

0x97ec,	// (0x00039b97) list_highlight_pane_cp2_ParamLimits

0x74d6,	// (0x00037881) set_content_pane_g1_ParamLimits

0x828b,	// (0x00038636) list_single_image_pane_ParamLimits

0x828b,	// (0x00038636) list_single_image_pane

0xce2c,	// (0x0003d1d7) aid_size_cell_image_ParamLimits

0xce2c,	// (0x0003d1d7) aid_size_cell_image

0xce39,	// (0x0003d1e4) grid_single_image_pane_ParamLimits

0xce39,	// (0x0003d1e4) grid_single_image_pane

0xce47,	// (0x0003d1f2) list_single_image_pane_g1_ParamLimits

0xce47,	// (0x0003d1f2) list_single_image_pane_g1

0xce53,	// (0x0003d1fe) list_single_image_pane_g2_ParamLimits

0xce53,	// (0x0003d1fe) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x0003fff1) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x0003fff1) list_single_image_pane_g

0xce67,	// (0x0003d212) list_single_image_pane_t1_ParamLimits

0xce67,	// (0x0003d212) list_single_image_pane_t1

0xce7d,	// (0x0003d228) cell_image_list_pane_ParamLimits

0xce7d,	// (0x0003d228) cell_image_list_pane

0xce91,	// (0x0003d23c) cell_image_list_pane_g1

0xce9a,	// (0x0003d245) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x0003fff6) cell_image_list_pane_g

0xcea3,	// (0x0003d24e) aid_size_cell_tb_trans_pane

0x282f,	// (0x00032bda) bg_tb_trans_pane

0xceb5,	// (0x0003d260) grid_tb_trans_pane

0x9cf9,	// (0x0003a0a4) bg_tb_trans_pane_g1

0x9d09,	// (0x0003a0b4) bg_tb_trans_pane_g2

0x9d01,	// (0x0003a0ac) bg_tb_trans_pane_g3

0x9d19,	// (0x0003a0c4) bg_tb_trans_pane_g4

0x9d11,	// (0x0003a0bc) bg_tb_trans_pane_g5

0x9d39,	// (0x0003a0e4) bg_tb_trans_pane_g6

0x9d31,	// (0x0003a0dc) bg_tb_trans_pane_g7

0x9d21,	// (0x0003a0cc) bg_tb_trans_pane_g8

0x9d29,	// (0x0003a0d4) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x0003fffb) bg_tb_trans_pane_g

0xcec9,	// (0x0003d274) cell_toolbar_trans_pane_ParamLimits

0xcec9,	// (0x0003d274) cell_toolbar_trans_pane

0xc2e6,	// (0x0003c691) cell_toolbar_trans_pane_g1

0xbeab,	// (0x0003c256) list_form2_midp_pane_t1

0xbeb9,	// (0x0003c264) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x0003fe98) list_form2_midp_pane_t

0xbec7,	// (0x0003c272) scroll_pane_cp51_ParamLimits

0xc083,	// (0x0003c42e) form2_midp_wait_pane_g1

0xc08c,	// (0x0003c437) form2_midp_wait_pane_g2

0xc095,	// (0x0003c440) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x0003fead) form2_midp_wait_pane_g

0x247d,	// (0x00032828) list_highlight_pane_cp21_ParamLimits

0xc0dd,	// (0x0003c488) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0ec,	// (0x0003c497) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x8223,	// (0x000385ce) list_single_2graphic_im_pane_ParamLimits

0x8223,	// (0x000385ce) list_single_2graphic_im_pane

0xceef,	// (0x0003d29a) list_single_2graphic_im_pane_g1_ParamLimits

0xceef,	// (0x0003d29a) list_single_2graphic_im_pane_g1

0xcf00,	// (0x0003d2ab) list_single_2graphic_im_pane_g2_ParamLimits

0xcf00,	// (0x0003d2ab) list_single_2graphic_im_pane_g2

0xcf0c,	// (0x0003d2b7) list_single_2graphic_im_pane_g3_ParamLimits

0xcf0c,	// (0x0003d2b7) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x0004000e) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x0004000e) list_single_2graphic_im_pane_g

0xcf2c,	// (0x0003d2d7) list_single_2graphic_im_pane_t1_ParamLimits

0xcf2c,	// (0x0003d2d7) list_single_2graphic_im_pane_t1

0xc93f,	// (0x0003ccea) list_single_graphic_2heading_pane_fp_ParamLimits

0xc93f,	// (0x0003ccea) list_single_graphic_2heading_pane_fp

0x4d4c,	// (0x000350f7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4d4c,	// (0x000350f7) list_single_graphic_2heading_pane_fp_g1

0xc955,	// (0x0003cd00) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc955,	// (0x0003cd00) list_single_graphic_2heading_pane_fp_g2

0x4d15,	// (0x000350c0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4d15,	// (0x000350c0) list_single_graphic_2heading_pane_fp_g3

0x4d21,	// (0x000350cc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4d21,	// (0x000350cc) list_single_graphic_2heading_pane_fp_g4

0xc961,	// (0x0003cd0c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc961,	// (0x0003cd0c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003ff35) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003ff35) list_single_graphic_2heading_pane_fp_g

0x4ee6,	// (0x00035291) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4ee6,	// (0x00035291) list_single_graphic_2heading_pane_fp_t1

0x4d84,	// (0x0003512f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4d84,	// (0x0003512f) list_single_graphic_2heading_pane_fp_t2

0x4efc,	// (0x000352a7) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4efc,	// (0x000352a7) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x00040017) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x00040017) list_single_graphic_2heading_pane_fp_t

0xc372,	// (0x0003c71d) fep_hwr_write_pane_g5_ParamLimits

0xc372,	// (0x0003c71d) fep_hwr_write_pane_g5

0xc37e,	// (0x0003c729) fep_hwr_write_pane_g6_ParamLimits

0xc37e,	// (0x0003c729) fep_hwr_write_pane_g6

0xcc16,	// (0x0003cfc1) eswt_shell_pane_ParamLimits

0x9d6d,	// (0x0003a118) bg_popup_window_pane_cp18_ParamLimits

0xaff5,	// (0x0003b3a0) heading_pane_cp70

0xcd40,	// (0x0003d0eb) popup_eswt_tasktip_window_t1_ParamLimits

0x9863,	// (0x00039c0e) aid_touch_tab_arrow_left

0x9872,	// (0x00039c1d) aid_touch_tab_arrow_right

0x5f88,	// (0x00036333) title_pane_g3_ParamLimits

0x5f88,	// (0x00036333) title_pane_g3

0x27f7,	// (0x00032ba2) set_value_pane_g1

0x7d6b,	// (0x00038116) popup_toolbar_trans_pane_ParamLimits

0xcea3,	// (0x0003d24e) aid_size_cell_tb_trans_pane_ParamLimits

0x282f,	// (0x00032bda) bg_tb_trans_pane_ParamLimits

0xceb5,	// (0x0003d260) grid_tb_trans_pane_ParamLimits

0x25a7,	// (0x00032952) cont_note_pane_ParamLimits

0x25a7,	// (0x00032952) cont_note_pane

0x2723,	// (0x00032ace) cont_snote2_single_text_pane_ParamLimits

0x2723,	// (0x00032ace) cont_snote2_single_text_pane

0x2723,	// (0x00032ace) cont_snote2_single_graphic_pane_ParamLimits

0x2723,	// (0x00032ace) cont_snote2_single_graphic_pane

0xa36b,	// (0x0003a716) cont_note_wait_pane_ParamLimits

0xa36b,	// (0x0003a716) cont_note_wait_pane

0xa36b,	// (0x0003a716) cont_note_image_pane_ParamLimits

0xa36b,	// (0x0003a716) cont_note_image_pane

0xcf5d,	// (0x0003d308) popup_note2_window_g1_ParamLimits

0xcf5d,	// (0x0003d308) popup_note2_window_g1

0xcf8e,	// (0x0003d339) popup_note2_window_t1_ParamLimits

0xcf8e,	// (0x0003d339) popup_note2_window_t1

0xcfd3,	// (0x0003d37e) popup_note2_window_t2_ParamLimits

0xcfd3,	// (0x0003d37e) popup_note2_window_t2

0xd018,	// (0x0003d3c3) popup_note2_window_t3_ParamLimits

0xd018,	// (0x0003d3c3) popup_note2_window_t3

0xd05d,	// (0x0003d408) popup_note2_window_t4_ParamLimits

0xd05d,	// (0x0003d408) popup_note2_window_t4

0x262b,	// (0x000329d6) popup_note2_window_t5_ParamLimits

0x262b,	// (0x000329d6) popup_note2_window_t5

0x0004,

0xfc78,	// (0x00040023) popup_note2_window_t_ParamLimits

0xfc78,	// (0x00040023) popup_note2_window_t

0xd08c,	// (0x0003d437) popup_note2_image_window_g1_ParamLimits

0xd08c,	// (0x0003d437) popup_note2_image_window_g1

0xd098,	// (0x0003d443) popup_note2_image_window_g2_ParamLimits

0xd098,	// (0x0003d443) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x0004002e) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x0004002e) popup_note2_image_window_g

0xd0aa,	// (0x0003d455) popup_note2_image_window_t1_ParamLimits

0xd0aa,	// (0x0003d455) popup_note2_image_window_t1

0xd0c2,	// (0x0003d46d) popup_note2_image_window_t2_ParamLimits

0xd0c2,	// (0x0003d46d) popup_note2_image_window_t2

0xd0da,	// (0x0003d485) popup_note2_image_window_t3_ParamLimits

0xd0da,	// (0x0003d485) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x00040033) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x00040033) popup_note2_image_window_t

0xa379,	// (0x0003a724) popup_note2_wait_window_g1_ParamLimits

0xa379,	// (0x0003a724) popup_note2_wait_window_g1

0xa385,	// (0x0003a730) popup_note2_wait_window_g2_ParamLimits

0xa385,	// (0x0003a730) popup_note2_wait_window_g2

0xa391,	// (0x0003a73c) popup_note2_wait_window_g3_ParamLimits

0xa391,	// (0x0003a73c) popup_note2_wait_window_g3

0x0002,

0xf843,	// (0x0003fbee) popup_note2_wait_window_g_ParamLimits

0xf843,	// (0x0003fbee) popup_note2_wait_window_g

0xd0f6,	// (0x0003d4a1) popup_note2_wait_window_t1_ParamLimits

0xd0f6,	// (0x0003d4a1) popup_note2_wait_window_t1

0xd114,	// (0x0003d4bf) popup_note2_wait_window_t2_ParamLimits

0xd114,	// (0x0003d4bf) popup_note2_wait_window_t2

0xd132,	// (0x0003d4dd) popup_note2_wait_window_t3_ParamLimits

0xd132,	// (0x0003d4dd) popup_note2_wait_window_t3

0xd144,	// (0x0003d4ef) popup_note2_wait_window_t4_ParamLimits

0xd144,	// (0x0003d4ef) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x0004003a) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x0004003a) popup_note2_wait_window_t

0xd156,	// (0x0003d501) wait_bar2_pane_ParamLimits

0xd156,	// (0x0003d501) wait_bar2_pane

0xd16e,	// (0x0003d519) popup_snote2_single_text_window_g1_ParamLimits

0xd16e,	// (0x0003d519) popup_snote2_single_text_window_g1

0xd196,	// (0x0003d541) popup_snote2_single_text_window_t1_ParamLimits

0xd196,	// (0x0003d541) popup_snote2_single_text_window_t1

0xd203,	// (0x0003d5ae) popup_snote2_single_text_window_t2_ParamLimits

0xd203,	// (0x0003d5ae) popup_snote2_single_text_window_t2

0xd24f,	// (0x0003d5fa) popup_snote2_single_text_window_t3_ParamLimits

0xd24f,	// (0x0003d5fa) popup_snote2_single_text_window_t3

0xd290,	// (0x0003d63b) popup_snote2_single_text_window_t4_ParamLimits

0xd290,	// (0x0003d63b) popup_snote2_single_text_window_t4

0xd2c6,	// (0x0003d671) popup_snote2_single_text_window_t5_ParamLimits

0xd2c6,	// (0x0003d671) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x00040043) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x00040043) popup_snote2_single_text_window_t

0xd2f1,	// (0x0003d69c) popup_snote2_single_graphic_window_g1_ParamLimits

0xd2f1,	// (0x0003d69c) popup_snote2_single_graphic_window_g1

0xd319,	// (0x0003d6c4) popup_snote2_single_graphic_window_g2_ParamLimits

0xd319,	// (0x0003d6c4) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x0004004e) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x0004004e) popup_snote2_single_graphic_window_g

0xd341,	// (0x0003d6ec) popup_snote2_single_graphic_window_t1_ParamLimits

0xd341,	// (0x0003d6ec) popup_snote2_single_graphic_window_t1

0xd38d,	// (0x0003d738) popup_snote2_single_graphic_window_t2_ParamLimits

0xd38d,	// (0x0003d738) popup_snote2_single_graphic_window_t2

0xd24f,	// (0x0003d5fa) popup_snote2_single_graphic_window_t3_ParamLimits

0xd24f,	// (0x0003d5fa) popup_snote2_single_graphic_window_t3

0xd290,	// (0x0003d63b) popup_snote2_single_graphic_window_t4_ParamLimits

0xd290,	// (0x0003d63b) popup_snote2_single_graphic_window_t4

0xd2c6,	// (0x0003d671) popup_snote2_single_graphic_window_t5_ParamLimits

0xd2c6,	// (0x0003d671) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x00040053) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x00040053) popup_snote2_single_graphic_window_t

0xbd84,	// (0x0003c12f) clock_nsta_pane_cp2_t1

0xbd84,	// (0x0003c12f) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x0003fe6e) clock_nsta_pane_cp2_t

0x4840,	// (0x00034beb) form_field_data_wide_pane_g1_ParamLimits

0x283d,	// (0x00032be8) form_field_data_wide_pane_g2_ParamLimits

0x283d,	// (0x00032be8) form_field_data_wide_pane_g2

0x2849,	// (0x00032bf4) form_field_data_wide_pane_g3_ParamLimits

0x2849,	// (0x00032bf4) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0003fa26) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0003fa26) form_field_data_wide_pane_g

0xbc76,	// (0x0003c021) grid_touch_3_pane_ParamLimits

0xbc76,	// (0x0003c021) grid_touch_3_pane

0xd3d9,	// (0x0003d784) cell_touch_3_pane_ParamLimits

0xd3d9,	// (0x0003d784) cell_touch_3_pane

0xc2e6,	// (0x0003c691) cell_touch_3_pane_g1

0xc2e6,	// (0x0003c691) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x0003fef3) cell_touch_3_pane_g

0x265d,	// (0x00032a08) cont_query_data_pane

0x2665,	// (0x00032a10) cont_query_data_pane_cp1

0xd407,	// (0x0003d7b2) button_value_adjust_pane_cp7

0xd40f,	// (0x0003d7ba) query_popup_pane_cp3

0x2cc6,	// (0x00033071) bg_popup_sub_pane_cp22_ParamLimits

0x7014,	// (0x000373bf) navi_navi_volume_pane_cp2

0x702c,	// (0x000373d7) popup_side_volume_key_window_g2

0x7038,	// (0x000373e3) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003fabc) popup_side_volume_key_window_g

0x7052,	// (0x000373fd) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0003fac3) popup_side_volume_key_window_t

0x73a3,	// (0x0003774e) popup_side_volume_key_window_ParamLimits

0x664e,	// (0x000369f9) list_double_graphic_pane_g4_ParamLimits

0x664e,	// (0x000369f9) list_double_graphic_pane_g4

0x8268,	// (0x00038613) list_single_2heading_msg_pane_ParamLimits

0x8268,	// (0x00038613) list_single_2heading_msg_pane

0x8884,	// (0x00038c2f) list_single_2heading_msg_pane_g1_ParamLimits

0x8884,	// (0x00038c2f) list_single_2heading_msg_pane_g1

0x4714,	// (0x00034abf) list_single_2heading_msg_pane_g2_ParamLimits

0x4714,	// (0x00034abf) list_single_2heading_msg_pane_g2

0x4a8f,	// (0x00034e3a) list_single_2heading_msg_pane_g3_ParamLimits

0x4a8f,	// (0x00034e3a) list_single_2heading_msg_pane_g3

0x4f1c,	// (0x000352c7) list_single_2heading_msg_pane_g4_ParamLimits

0x4f1c,	// (0x000352c7) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x0004005e) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x0004005e) list_single_2heading_msg_pane_g

0x4f34,	// (0x000352df) list_single_2heading_msg_pane_t1_ParamLimits

0x4f34,	// (0x000352df) list_single_2heading_msg_pane_t1

0x8890,	// (0x00038c3b) list_single_2heading_msg_pane_t2_ParamLimits

0x8890,	// (0x00038c3b) list_single_2heading_msg_pane_t2

0x88c4,	// (0x00038c6f) list_single_2heading_msg_pane_t3_ParamLimits

0x88c4,	// (0x00038c6f) list_single_2heading_msg_pane_t3

0x4f5c,	// (0x00035307) list_single_2heading_msg_pane_t4_ParamLimits

0x4f5c,	// (0x00035307) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x00040067) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x00040067) list_single_2heading_msg_pane_t

0x242b,	// (0x000327d6) title_pane_g4_ParamLimits

0x242b,	// (0x000327d6) title_pane_g4

0x6c6b,	// (0x00037016) title_pane_stacon_g3_ParamLimits

0x6c6b,	// (0x00037016) title_pane_stacon_g3

0xcf20,	// (0x0003d2cb) list_single_2graphic_im_pane_g4_ParamLimits

0xcf20,	// (0x0003d2cb) list_single_2graphic_im_pane_g4

0xadb2,	// (0x0003b15d) popup_side_volume_key_window_cp

0xb5d1,	// (0x0003b97c) main_idle_act2_pane_t1

0x7e5d,	// (0x00038208) toolbar_button_pane_g10

0x6521,	// (0x000368cc) popup_toolbar_window_cp1

0xbd75,	// (0x0003c120) clock_nsta_pane_cp_t1

0xbd75,	// (0x0003c120) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x0003fe69) clock_nsta_pane_cp_t

0x7014,	// (0x000373bf) navi_navi_volume_pane_cp2_ParamLimits

0x7020,	// (0x000373cb) popup_side_volume_key_window_g1_ParamLimits

0x702c,	// (0x000373d7) popup_side_volume_key_window_g2_ParamLimits

0x7038,	// (0x000373e3) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003fabc) popup_side_volume_key_window_g_ParamLimits

0x843a,	// (0x000387e5) fep_hwr_aid_pane

0x84e1,	// (0x0003888c) bg_fep_hwr_top_pane_g4_ParamLimits

0xc342,	// (0x0003c6ed) fep_hwr_top_pane_g1_ParamLimits

0xc354,	// (0x0003c6ff) fep_hwr_top_pane_g2_ParamLimits

0x8501,	// (0x000388ac) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x0003febe) fep_hwr_top_pane_g_ParamLimits

0x8516,	// (0x000388c1) fep_hwr_top_text_pane_ParamLimits

0xab75,	// (0x0003af20) aid_touch_tab_arrow_arrow_2

0xab7e,	// (0x0003af29) aid_touch_tab_arrow_left_2

0x844e,	// (0x000387f9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8485,	// (0x00038830) fep_hwr_prediction_pane

0xc4ad,	// (0x0003c858) fep_vkb_prediction_pane

0xc5aa,	// (0x0003c955) fep_vkb_side_pane_g3_ParamLimits

0xc5aa,	// (0x0003c955) fep_vkb_side_pane_g3

0x8691,	// (0x00038a3c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x86fd,	// (0x00038aa8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x870a,	// (0x00038ab5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x0003ff6d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x88fd,	// (0x00038ca8) fep_hwr_prediction_pane_g1

0x8907,	// (0x00038cb2) fep_hwr_prediction_pane_g2

0x890f,	// (0x00038cba) fep_hwr_prediction_pane_g3

0x8917,	// (0x00038cc2) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x00040070) fep_hwr_prediction_pane_g

0xd434,	// (0x0003d7df) fep_vkb_prediction_pane_g1

0xd43e,	// (0x0003d7e9) fep_vkb_prediction_pane_g2

0xd446,	// (0x0003d7f1) fep_vkb_prediction_pane_g3

0xd44e,	// (0x0003d7f9) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x00040079) fep_vkb_prediction_pane_g

0x8180,	// (0x0003852b) slider_set_pane_g3

0x8194,	// (0x0003853f) slider_set_pane_g4

0x81ac,	// (0x00038557) slider_set_pane_g5

0x8180,	// (0x0003852b) slider_set_pane_g6

0x81c2,	// (0x0003856d) slider_set_pane_g7

0xb212,	// (0x0003b5bd) slider_form_pane_g3

0xb21b,	// (0x0003b5c6) slider_form_pane_g4

0xb223,	// (0x0003b5ce) slider_form_pane_g5

0xb212,	// (0x0003b5bd) slider_form_pane_g6

0xb22b,	// (0x0003b5d6) slider_form_pane_g7

0xb87c,	// (0x0003bc27) slider_set_pane_vc_g3

0xb885,	// (0x0003bc30) slider_set_pane_vc_g4

0xb88e,	// (0x0003bc39) slider_set_pane_vc_g5

0xb87c,	// (0x0003bc27) slider_set_pane_vc_g6

0xb897,	// (0x0003bc42) slider_set_pane_vc_g7

0xba49,	// (0x0003bdf4) slider_form_pane_vc_g1

0xba52,	// (0x0003bdfd) slider_form_pane_vc_g2

0xba5b,	// (0x0003be06) slider_form_pane_vc_g3

0xba49,	// (0x0003bdf4) slider_form_pane_vc_g4

0xba64,	// (0x0003be0f) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x0003fe3b) slider_form_pane_vc_g

0x5d1f,	// (0x000360ca) main_idle_act3_pane

0xd456,	// (0x0003d801) ai3_links_pane

0xd45f,	// (0x0003d80a) popup_ai3_data_window_ParamLimits

0xd45f,	// (0x0003d80a) popup_ai3_data_window

0x240d,	// (0x000327b8) grid_ai3_links_pane

0xd477,	// (0x0003d822) cell_ai3_links_pane_ParamLimits

0xd477,	// (0x0003d822) cell_ai3_links_pane

0xd48f,	// (0x0003d83a) bg_popup_sub_pane_cp11

0xd49c,	// (0x0003d847) cell_ai3_links_pane_g1

0x240d,	// (0x000327b8) bg_popup_sub_pane_cp12

0xd4c1,	// (0x0003d86c) heading_ai3_data_pane

0xd4c9,	// (0x0003d874) list_ai3_gene_pane

0xd4d5,	// (0x0003d880) popup_ai3_data_window_g1

0xd4dd,	// (0x0003d888) heading_ai3_data_pane_g1

0xd4e5,	// (0x0003d890) heading_ai3_data_pane_t1

0xd4f3,	// (0x0003d89e) list_double_ai3_gene_pane_ParamLimits

0xd4f3,	// (0x0003d89e) list_double_ai3_gene_pane

0xd500,	// (0x0003d8ab) list_single_ai3_gene_pane_ParamLimits

0xd500,	// (0x0003d8ab) list_single_ai3_gene_pane

0xc2ab,	// (0x0003c656) list_highlight_pane_cp7_ParamLimits

0xc2ab,	// (0x0003c656) list_highlight_pane_cp7

0xd50d,	// (0x0003d8b8) list_single_a13_gene_pane_t1_ParamLimits

0xd50d,	// (0x0003d8b8) list_single_a13_gene_pane_t1

0xd524,	// (0x0003d8cf) list_single_ai3_gene_pane_g1

0xd52d,	// (0x0003d8d8) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x00040082) list_single_ai3_gene_pane_g

0xd535,	// (0x0003d8e0) list_double_ai3_gene_pane_g1_ParamLimits

0xd535,	// (0x0003d8e0) list_double_ai3_gene_pane_g1

0xd541,	// (0x0003d8ec) list_double_ai3_gene_pane_t1_ParamLimits

0xd541,	// (0x0003d8ec) list_double_ai3_gene_pane_t1

0xd55d,	// (0x0003d908) list_double_ai3_gene_pane_t2_ParamLimits

0xd55d,	// (0x0003d908) list_double_ai3_gene_pane_t2

0xd572,	// (0x0003d91d) list_double_ai3_gene_pane_t3_ParamLimits

0xd572,	// (0x0003d91d) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x00040087) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x00040087) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4f12,	// (0x000352bd) aid_size_min_col_2

0xd420,	// (0x0003d7cb) aid_size_min_msg_ParamLimits

0xd420,	// (0x0003d7cb) aid_size_min_msg

0xc6aa,	// (0x0003ca55) fep_vkb_top_text_pane_g2_ParamLimits

0xc6aa,	// (0x0003ca55) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x0003feee) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x0003feee) fep_vkb_top_text_pane_g

0x5d1f,	// (0x000360ca) main_hc_apps_shell_pane

0xd58f,	// (0x0003d93a) grid_hc_apps_pane_ParamLimits

0xd58f,	// (0x0003d93a) grid_hc_apps_pane

0xd59e,	// (0x0003d949) list_hc_apps_pane

0xd5a6,	// (0x0003d951) scroll_pane_cp37_ParamLimits

0xd5a6,	// (0x0003d951) scroll_pane_cp37

0xd5b2,	// (0x0003d95d) cell_hc_apps_pane_ParamLimits

0xd5b2,	// (0x0003d95d) cell_hc_apps_pane

0xd660,	// (0x0003da0b) cell_hc_apps_pane_g1_ParamLimits

0xd660,	// (0x0003da0b) cell_hc_apps_pane_g1

0xd691,	// (0x0003da3c) cell_hc_apps_pane_g2_ParamLimits

0xd691,	// (0x0003da3c) cell_hc_apps_pane_g2

0xd6ad,	// (0x0003da58) cell_hc_apps_pane_g3_ParamLimits

0xd6ad,	// (0x0003da58) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x0004008e) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x0004008e) cell_hc_apps_pane_g

0xd6cf,	// (0x0003da7a) cell_hc_apps_pane_t1_ParamLimits

0xd6cf,	// (0x0003da7a) cell_hc_apps_pane_t1

0x25a7,	// (0x00032952) grid_highlight_pane_cp10_ParamLimits

0x25a7,	// (0x00032952) grid_highlight_pane_cp10

0xd70f,	// (0x0003daba) list_single_hc_apps_pane_ParamLimits

0xd70f,	// (0x0003daba) list_single_hc_apps_pane

0xd772,	// (0x0003db1d) list_single_hc_apps_pane_g1

0x891f,	// (0x00038cca) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x00040095) list_single_hc_apps_pane_g

0x8938,	// (0x00038ce3) list_single_hc_apps_pane_g2_copy1

0x8954,	// (0x00038cff) list_single_hc_apps_pane_t1

0x247d,	// (0x00032828) bg_set_opt_pane_cp_ParamLimits

0x6038,	// (0x000363e3) setting_slider_pane_t1_ParamLimits

0x6051,	// (0x000363fc) setting_slider_pane_t2_ParamLimits

0x606b,	// (0x00036416) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003f909) setting_slider_pane_t_ParamLimits

0x6083,	// (0x0003642e) slider_set_pane_ParamLimits

0x777a,	// (0x00037b25) control_pane_g5_ParamLimits

0x777a,	// (0x00037b25) control_pane_g5

0xb061,	// (0x0003b40c) slider_set_pane_g1_ParamLimits

0x8174,	// (0x0003851f) slider_set_pane_g2_ParamLimits

0x8180,	// (0x0003852b) slider_set_pane_g3_ParamLimits

0x8194,	// (0x0003853f) slider_set_pane_g4_ParamLimits

0x81ac,	// (0x00038557) slider_set_pane_g5_ParamLimits

0x8180,	// (0x0003852b) slider_set_pane_g6_ParamLimits

0x81c2,	// (0x0003856d) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0003fd0a) slider_set_pane_g_ParamLimits

0x7481,	// (0x0003782c) navi_icon_text_pane_ParamLimits

0x9824,	// (0x00039bcf) aid_fill_nsta_2_ParamLimits

0x9863,	// (0x00039c0e) aid_touch_tab_arrow_left_ParamLimits

0x9872,	// (0x00039c1d) aid_touch_tab_arrow_right_ParamLimits

0x98df,	// (0x00039c8a) clock_nsta_pane_ParamLimits

0xab57,	// (0x0003af02) navi_icon_pane_g1_ParamLimits

0xab63,	// (0x0003af0e) navi_text_pane_t1_ParamLimits

0xbe85,	// (0x0003c230) navi_icon_text_pane_g1_ParamLimits

0xbe91,	// (0x0003c23c) navi_icon_text_pane_t1_ParamLimits

0xd772,	// (0x0003db1d) list_single_hc_apps_pane_g1_ParamLimits

0x891f,	// (0x00038cca) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x00040095) list_single_hc_apps_pane_g_ParamLimits

0x8938,	// (0x00038ce3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8954,	// (0x00038cff) list_single_hc_apps_pane_t1_ParamLimits

0x5e7c,	// (0x00036227) popup_toolbar2_fixed_window_ParamLimits

0x5e7c,	// (0x00036227) popup_toolbar2_fixed_window

0x7d61,	// (0x0003810c) popup_toolbar2_float_window

0x240d,	// (0x000327b8) bg_popup_sub_pane_cp27

0xd78b,	// (0x0003db36) grid_toolbar2_float_pane

0x240d,	// (0x000327b8) bg_popup_sub_pane_cp26

0xd78b,	// (0x0003db36) grid_toolbar2_fixed_pane

0xd793,	// (0x0003db3e) cell_toolbar2_fixed_pane_ParamLimits

0xd793,	// (0x0003db3e) cell_toolbar2_fixed_pane

0xd7a3,	// (0x0003db4e) cell_toolbar2_fixed_pane_g1

0x7c33,	// (0x00037fde) toolbar2_fixed_button_pane

0x9cf9,	// (0x0003a0a4) toolbar2_fixed_button_pane_g1

0x9d09,	// (0x0003a0b4) toolbar2_fixed_button_pane_g2

0x9d01,	// (0x0003a0ac) toolbar2_fixed_button_pane_g3

0x9d19,	// (0x0003a0c4) toolbar2_fixed_button_pane_g4

0x9d11,	// (0x0003a0bc) toolbar2_fixed_button_pane_g5

0x9d21,	// (0x0003a0cc) toolbar2_fixed_button_pane_g6

0x9d29,	// (0x0003a0d4) toolbar2_fixed_button_pane_g7

0x9d39,	// (0x0003a0e4) toolbar2_fixed_button_pane_g8

0x9d31,	// (0x0003a0dc) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0003fc0c) toolbar2_fixed_button_pane_g

0xd7ac,	// (0x0003db57) cell_toolbar2_float_pane_ParamLimits

0xd7ac,	// (0x0003db57) cell_toolbar2_float_pane

0xd7bd,	// (0x0003db68) cell_toolbar2_float_pane_g1

0x7c33,	// (0x00037fde) toolbar2_fixed_button_pane_cp

0xc414,	// (0x0003c7bf) fep_vkb_accented_list_pane_ParamLimits

0xc414,	// (0x0003c7bf) fep_vkb_accented_list_pane

0x8671,	// (0x00038a1c) bg_popup_fep_shadow_pane_g9

0x7601,	// (0x000379ac) bg_popup_fep_shadow_pane_cp3

0x2938,	// (0x00032ce3) list_accented_list_pane

0xd7c6,	// (0x0003db71) list_single_accented_list_pane_ParamLimits

0xd7c6,	// (0x0003db71) list_single_accented_list_pane

0x7601,	// (0x000379ac) list_highlight_pane_cp10

0xd7d7,	// (0x0003db82) list_single_accented_list_pane_t1

0x7cb1,	// (0x0003805c) popup_slider_window_ParamLimits

0x7cb1,	// (0x0003805c) popup_slider_window

0xd417,	// (0x0003d7c2) aid_indentation_list_msg

0xd88d,	// (0x0003dc38) bg_popup_window_pane_cp19

0xd8f7,	// (0x0003dca2) popup_slider_window_g1

0xd913,	// (0x0003dcbe) popup_slider_window_g2

0xd92f,	// (0x0003dcda) popup_slider_window_g3

0x0005,

0xfcef,	// (0x0004009a) popup_slider_window_g

0xd98b,	// (0x0003dd36) popup_slider_window_t1

0xd9ff,	// (0x0003ddaa) small_volume_slider_vertical_pane

0xc2e6,	// (0x0003c691) small_volume_slider_vertical_pane_g1

0xc2e6,	// (0x0003c691) small_volume_slider_vertical_pane_g2

0xda1b,	// (0x0003ddc6) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x000400ac) small_volume_slider_vertical_pane_g

0x5c42,	// (0x00035fed) area_side_right_pane_ParamLimits

0x5c42,	// (0x00035fed) area_side_right_pane

0x8982,	// (0x00038d2d) aid_size_side_button_ParamLimits

0x8982,	// (0x00038d2d) aid_size_side_button

0x8996,	// (0x00038d41) grid_sctrl_middle_pane_ParamLimits

0x8996,	// (0x00038d41) grid_sctrl_middle_pane

0x89b5,	// (0x00038d60) sctrl_sk_bottom_pane

0x89c6,	// (0x00038d71) sctrl_sk_top_pane

0x89d8,	// (0x00038d83) aid_touch_sctrl_top

0x89e5,	// (0x00038d90) bg_sctrl_sk_pane_ParamLimits

0x89e5,	// (0x00038d90) bg_sctrl_sk_pane

0x89f3,	// (0x00038d9e) sctrl_sk_top_pane_g1

0x8a00,	// (0x00038dab) sctrl_sk_top_pane_t1

0x89d8,	// (0x00038d83) aid_touch_sctrl_bottom

0x89e5,	// (0x00038d90) bg_sctrl_sk_pane_cp_ParamLimits

0x89e5,	// (0x00038d90) bg_sctrl_sk_pane_cp

0x8a1b,	// (0x00038dc6) sctrl_sk_bottom_pane_g1

0x8a00,	// (0x00038dab) sctrl_sk_bottom_pane_t1

0x8a24,	// (0x00038dcf) cell_sctrl_middle_pane_ParamLimits

0x8a24,	// (0x00038dcf) cell_sctrl_middle_pane

0x8a3f,	// (0x00038dea) aid_touch_sctrl_middle_ParamLimits

0x8a3f,	// (0x00038dea) aid_touch_sctrl_middle

0x8a51,	// (0x00038dfc) bg_sctrl_middle_pane_ParamLimits

0x8a51,	// (0x00038dfc) bg_sctrl_middle_pane

0x8691,	// (0x00038a3c) cell_sctrl_middle_pane_g1_ParamLimits

0x8691,	// (0x00038a3c) cell_sctrl_middle_pane_g1

0x8a5f,	// (0x00038e0a) cell_sctrl_middle_pane_g2_ParamLimits

0x8a5f,	// (0x00038e0a) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x000400b8) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x000400b8) cell_sctrl_middle_pane_g

0x9cf9,	// (0x0003a0a4) bg_sctrl_middle_pane_g1

0x9d01,	// (0x0003a0ac) bg_sctrl_middle_pane_g2

0x9d09,	// (0x0003a0b4) bg_sctrl_middle_pane_g3

0x9d11,	// (0x0003a0bc) bg_sctrl_middle_pane_g4

0x9d19,	// (0x0003a0c4) bg_sctrl_middle_pane_g5

0x9d21,	// (0x0003a0cc) bg_sctrl_middle_pane_g6

0x9d29,	// (0x0003a0d4) bg_sctrl_middle_pane_g7

0x9d31,	// (0x0003a0dc) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x000400bd) bg_sctrl_middle_pane_g

0x9d39,	// (0x0003a0e4) bg_sctrl_middle_pane_g8_copy1

0x9cf9,	// (0x0003a0a4) bg_sctrl_sk_pane_g1

0x9d09,	// (0x0003a0b4) bg_sctrl_sk_pane_g2

0x9d01,	// (0x0003a0ac) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0003fc0c) bg_sctrl_sk_pane_g

0x2771,	// (0x00032b1c) aid_size_touch_scroll_bar

0x9d19,	// (0x0003a0c4) bg_sctrl_sk_pane_g4

0x9d11,	// (0x0003a0bc) bg_sctrl_sk_pane_g5

0x9d21,	// (0x0003a0cc) bg_sctrl_sk_pane_g6

0x9d29,	// (0x0003a0d4) bg_sctrl_sk_pane_g7

0x9d39,	// (0x0003a0e4) bg_sctrl_sk_pane_g8

0x9d31,	// (0x0003a0dc) bg_sctrl_sk_pane_g9

0x791a,	// (0x00037cc5) popup_fep_china_hwr2_fs_candidate_window

0x7924,	// (0x00037ccf) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7924,	// (0x00037ccf) popup_fep_china_hwr2_fs_control_window

0x8691,	// (0x00038a3c) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x000400b3) sctrl_sk_top_pane_g

0xda24,	// (0x0003ddcf) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda24,	// (0x0003ddcf) aid_fep_china_hwr2_fs_cell

0xda36,	// (0x0003dde1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda36,	// (0x0003dde1) bg_popup_fep_shadow_pane_cp4

0xda4d,	// (0x0003ddf8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda4d,	// (0x0003ddf8) bg_popup_fep_shadow_pane_cp5

0xda5f,	// (0x0003de0a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda5f,	// (0x0003de0a) popup_fep_china_hwr2_fs_control_bar_grid

0xda6f,	// (0x0003de1a) popup_fep_china_hwr2_fs_control_funtion_grid

0xda77,	// (0x0003de22) aid_fep_china_hwr2_fs_candi_cell

0x240d,	// (0x000327b8) bg_popup_fep_shadow_pane_cp6

0xda81,	// (0x0003de2c) popup_fep_china_hwr2_fs_candidate_grid

0xda8b,	// (0x0003de36) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda8b,	// (0x0003de36) cell_fep_china_hwr2_fs_funtion_grid

0xc2e6,	// (0x0003c691) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xdaa3,	// (0x0003de4e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xdaa3,	// (0x0003de4e) cell_fep_china_hwr2_fs_funtion_grid_g1

0xdab1,	// (0x0003de5c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xdab1,	// (0x0003de5c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x000400ce) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x000400ce) cell_fep_china_hwr2_fs_funtion_grid_g

0xdac7,	// (0x0003de72) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdac7,	// (0x0003de72) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdadc,	// (0x0003de87) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdadc,	// (0x0003de87) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x000400d3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x000400d3) cell_fep_china_hwr2_fs_funtion_grid_t

0xdaf8,	// (0x0003dea3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdb00,	// (0x0003deab) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdb08,	// (0x0003deb3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x000400d8) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdb10,	// (0x0003debb) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdb10,	// (0x0003debb) cell_fep_china_hwr2_fs_candidate_grid

0xdb29,	// (0x0003ded4) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb31,	// (0x0003dedc) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2e6,	// (0x0003c691) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2e6,	// (0x0003c691) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x0003fef3) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb39,	// (0x0003dee4) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98f2,	// (0x00039c9d) clock_nsta_pane_cp_24_ParamLimits

0x98f2,	// (0x00039c9d) clock_nsta_pane_cp_24

0x9970,	// (0x00039d1b) indicator_nsta_pane_cp_24_ParamLimits

0x9970,	// (0x00039d1b) indicator_nsta_pane_cp_24

0xa9d3,	// (0x0003ad7e) heading_pane_g1

0x0001,

0xf8c6,	// (0x0003fc71) heading_pane_g

0xb41a,	// (0x0003b7c5) grid_sct_catagory_button_pane

0xb44a,	// (0x0003b7f5) scroll_pane_cp5_ParamLimits

0xbed3,	// (0x0003c27e) button_value_adjust_pane_cp5_ParamLimits

0xbed3,	// (0x0003c27e) button_value_adjust_pane_cp5

0xbfb2,	// (0x0003c35d) form2_midp_time_pane_ParamLimits

0xdb47,	// (0x0003def2) cell_sct_catagory_button_pane_ParamLimits

0xdb47,	// (0x0003def2) cell_sct_catagory_button_pane

0xc2ab,	// (0x0003c656) bg_button_pane_cp01_ParamLimits

0xc2ab,	// (0x0003c656) bg_button_pane_cp01

0xc2e6,	// (0x0003c691) cell_sct_catagory_button_pane_g1

0x7cf0,	// (0x0003809b) popup_tb_extension_window

0xdb59,	// (0x0003df04) aid_size_cell_ext_ParamLimits

0xdb59,	// (0x0003df04) aid_size_cell_ext

0x25a7,	// (0x00032952) bg_tb_trans_pane_cp1_ParamLimits

0x25a7,	// (0x00032952) bg_tb_trans_pane_cp1

0xdb79,	// (0x0003df24) grid_tb_ext_pane_ParamLimits

0xdb79,	// (0x0003df24) grid_tb_ext_pane

0xdba9,	// (0x0003df54) cell_tb_ext_pane_ParamLimits

0xdba9,	// (0x0003df54) cell_tb_ext_pane

0xdbc0,	// (0x0003df6b) cell_tb_ext_pane_g1_ParamLimits

0xdbc0,	// (0x0003df6b) cell_tb_ext_pane_g1

0xdbdd,	// (0x0003df88) cell_tb_ext_pane_t1

0x25a7,	// (0x00032952) list_highlight_pane_cp11_ParamLimits

0x25a7,	// (0x00032952) list_highlight_pane_cp11

0x5e9b,	// (0x00036246) popup_uni_indicator_window_ParamLimits

0x5e9b,	// (0x00036246) popup_uni_indicator_window

0x282f,	// (0x00032bda) bg_popup_sub_pane_cp14

0xdbf8,	// (0x0003dfa3) list_uniindi_pane

0xdc04,	// (0x0003dfaf) uniindi_top_pane

0x25a7,	// (0x00032952) bg_uniindi_top_pane

0xdc23,	// (0x0003dfce) uniindi_top_pane_g1

0xdc39,	// (0x0003dfe4) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x000400df) uniindi_top_pane_g

0xdc63,	// (0x0003e00e) uniindi_top_pane_t1

0xdc8d,	// (0x0003e038) list_single_uniindi_pane_ParamLimits

0xdc8d,	// (0x0003e038) list_single_uniindi_pane

0xc2e6,	// (0x0003c691) bg_uniindi_top_pane_g1

0xdc9f,	// (0x0003e04a) list_single_uniindi_pane_g1

0xdcb2,	// (0x0003e05d) list_single_uniindi_pane_t1

0x5d1f,	// (0x000360ca) control_bg_pane

0xdcd7,	// (0x0003e082) bg_sctrl_sk_pane_cp1

0xdce0,	// (0x0003e08b) bg_sctrl_sk_pane_cp2

0xdce9,	// (0x0003e094) control_bg_pane_g1

0xdcf2,	// (0x0003e09d) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x000400e8) control_bg_pane_g

0xbd19,	// (0x0003c0c4) cell_indicator_nsta_pane_g1_ParamLimits

0xbd27,	// (0x0003c0d2) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x0003fe57) cell_indicator_nsta_pane_g_ParamLimits

0x4d02,	// (0x000350ad) form2_midp_time_pane_t1_ParamLimits

0x7884,	// (0x00037c2f) main_idle_act4_pane_ParamLimits

0x7884,	// (0x00037c2f) main_idle_act4_pane

0x7cf0,	// (0x0003809b) popup_tb_extension_window_ParamLimits

0xdb99,	// (0x0003df44) tb_ext_find_pane_ParamLimits

0xdb99,	// (0x0003df44) tb_ext_find_pane

0xdcfb,	// (0x0003e0a6) ai_gene_pane_1_cp1

0x95f1,	// (0x0003999c) ai_gene_pane_2_cp1

0xdd03,	// (0x0003e0ae) list_single_idle_plugin_calendar_pane

0xdd0c,	// (0x0003e0b7) list_single_idle_plugin_notification_pane

0xdd15,	// (0x0003e0c0) list_single_idle_plugin_player_pane

0xdd1e,	// (0x0003e0c9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd1e,	// (0x0003e0c9) list_single_idle_plugin_shortcut_pane

0xdd40,	// (0x0003e0eb) main_idle_act4_pane_t1

0xdd52,	// (0x0003e0fd) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x000400ed) main_idle_act4_pane_t

0xdd64,	// (0x0003e10f) middle_sk_idle_act4_pane_ParamLimits

0xdd64,	// (0x0003e10f) middle_sk_idle_act4_pane

0xdd7a,	// (0x0003e125) popup_clock_digital_analogue_window_cp2

0xdd94,	// (0x0003e13f) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd94,	// (0x0003e13f) shortcut_wheel_idle_act4_pane

0xc2e6,	// (0x0003c691) shortcut_wheel_idle_act4_pane_g1

0xc2e6,	// (0x0003c691) shortcut_wheel_idle_act4_pane_g2

0xc2e6,	// (0x0003c691) shortcut_wheel_idle_act4_pane_g3

0xc2e6,	// (0x0003c691) shortcut_wheel_idle_act4_pane_g4

0xc2e6,	// (0x0003c691) shortcut_wheel_idle_act4_pane_g5

0xdda8,	// (0x0003e153) shortcut_wheel_idle_act4_pane_g6

0xddb0,	// (0x0003e15b) shortcut_wheel_idle_act4_pane_g7

0xddb8,	// (0x0003e163) shortcut_wheel_idle_act4_pane_g8

0xddc0,	// (0x0003e16b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x000400f2) shortcut_wheel_idle_act4_pane_g

0xc556,	// (0x0003c901) middle_sk_idle_act4_pane_g1_ParamLimits

0xc556,	// (0x0003c901) middle_sk_idle_act4_pane_g1

0xde24,	// (0x0003e1cf) middle_sk_idle_act4_pane_g2_ParamLimits

0xde24,	// (0x0003e1cf) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x00040115) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x00040115) middle_sk_idle_act4_pane_g

0xde30,	// (0x0003e1db) middle_sk_idle_act4_pane_t1_ParamLimits

0xde30,	// (0x0003e1db) middle_sk_idle_act4_pane_t1

0xde4d,	// (0x0003e1f8) grid_ai_shortcut_pane_ParamLimits

0xde4d,	// (0x0003e1f8) grid_ai_shortcut_pane

0xde66,	// (0x0003e211) list_highlight_pane_cp16_ParamLimits

0xde66,	// (0x0003e211) list_highlight_pane_cp16

0xde73,	// (0x0003e21e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde73,	// (0x0003e21e) list_single_idle_plugin_shortcut_pane_g1

0xde7f,	// (0x0003e22a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde7f,	// (0x0003e22a) list_single_idle_plugin_shortcut_pane_g2

0xde97,	// (0x0003e242) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde97,	// (0x0003e242) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x0004011a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x0004011a) list_single_idle_plugin_shortcut_pane_g

0xdeaa,	// (0x0003e255) cell_ai_shortcut_pane_ParamLimits

0xdeaa,	// (0x0003e255) cell_ai_shortcut_pane

0xdece,	// (0x0003e279) cell_ai_shortcut_pane_g1_ParamLimits

0xdece,	// (0x0003e279) cell_ai_shortcut_pane_g1

0xdcfb,	// (0x0003e0a6) ai_gene_pane_1_cp2

0xdef0,	// (0x0003e29b) ai_gene_pane_2_cp2

0xdef8,	// (0x0003e2a3) list_highlight_pane_cp15

0xdf01,	// (0x0003e2ac) list_single_idle_plugin_calendar_pane_g1

0xdef8,	// (0x0003e2a3) list_highlight_pane_cp17

0xdf09,	// (0x0003e2b4) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf11,	// (0x0003e2bc) list_single_idle_plugin_player_pane_g1

0xb673,	// (0x0003ba1e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x00040121) list_single_idle_plugin_player_pane_g

0xdf19,	// (0x0003e2c4) list_single_idle_plugin_player_pane_t1

0xdf27,	// (0x0003e2d2) list_single_idle_plugin_player_pane_t2

0xdf35,	// (0x0003e2e0) list_single_idle_plugin_player_pane_t3

0xdf43,	// (0x0003e2ee) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x00040126) list_single_idle_plugin_player_pane_t

0xdf51,	// (0x0003e2fc) wait_bar_pane_cp15

0xdf59,	// (0x0003e304) grid_ai_notification_pane

0xb673,	// (0x0003ba1e) list_single_idle_plugin_notification_pane_g1

0xdf62,	// (0x0003e30d) cell_ai_notification_pane_ParamLimits

0xdf62,	// (0x0003e30d) cell_ai_notification_pane

0xdf6f,	// (0x0003e31a) cell_ai_notification_pane_g1

0xdf77,	// (0x0003e322) cell_ai_notification_pane_t1

0xdf85,	// (0x0003e330) tb_ext_find_button_pane

0xdf8d,	// (0x0003e338) tb_ext_find_pane_g1

0xdf95,	// (0x0003e340) tb_ext_find_pane_t1

0x2c65,	// (0x00033010) tb_ext_find_button_pane_g1

0xdfa3,	// (0x0003e34e) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x0004012f) tb_ext_find_button_pane_g

0xdd40,	// (0x0003e0eb) main_idle_act4_pane_t1_ParamLimits

0xdd52,	// (0x0003e0fd) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x000400ed) main_idle_act4_pane_t_ParamLimits

0xdd7a,	// (0x0003e125) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd88,	// (0x0003e133) sat_plugin_idle_act4_pane_ParamLimits

0xdd88,	// (0x0003e133) sat_plugin_idle_act4_pane

0xdfac,	// (0x0003e357) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdfac,	// (0x0003e357) sat_plugin_idle_act4_pane_t1

0xdfbf,	// (0x0003e36a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfbf,	// (0x0003e36a) sat_plugin_idle_act4_pane_t2

0xdfd2,	// (0x0003e37d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfd2,	// (0x0003e37d) sat_plugin_idle_act4_pane_t3

0xdfe5,	// (0x0003e390) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfe5,	// (0x0003e390) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x00040134) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x00040134) sat_plugin_idle_act4_pane_t

0x5de4,	// (0x0003618f) popup_battery_window_ParamLimits

0x5de4,	// (0x0003618f) popup_battery_window

0x25a7,	// (0x00032952) bg_popup_sub_pane_cp25_ParamLimits

0x25a7,	// (0x00032952) bg_popup_sub_pane_cp25

0xdff8,	// (0x0003e3a3) popup_battery_window_g1_ParamLimits

0xdff8,	// (0x0003e3a3) popup_battery_window_g1

0xe004,	// (0x0003e3af) popup_battery_window_t1_ParamLimits

0xe004,	// (0x0003e3af) popup_battery_window_t1

0xe016,	// (0x0003e3c1) popup_battery_window_t2_ParamLimits

0xe016,	// (0x0003e3c1) popup_battery_window_t2

0x0001,

0xfd92,	// (0x0004013d) popup_battery_window_t_ParamLimits

0xfd92,	// (0x0004013d) popup_battery_window_t

0x7609,	// (0x000379b4) midp_canvas_pane_ParamLimits

0x9533,	// (0x000398de) midp_keypad_pane_ParamLimits

0x9533,	// (0x000398de) midp_keypad_pane

0x97ec,	// (0x00039b97) main_midp_pane_ParamLimits

0xbd93,	// (0x0003c13e) signal_pane_g2_cp_ParamLimits

0xe033,	// (0x0003e3de) aid_size_cell_midp_keypad_ParamLimits

0xe033,	// (0x0003e3de) aid_size_cell_midp_keypad

0xe04d,	// (0x0003e3f8) midp_keyp_game_grid_pane_ParamLimits

0xe04d,	// (0x0003e3f8) midp_keyp_game_grid_pane

0xe06d,	// (0x0003e418) midp_keyp_rocker_pane_ParamLimits

0xe06d,	// (0x0003e418) midp_keyp_rocker_pane

0xe0a6,	// (0x0003e451) midp_keyp_sk_left_pane_ParamLimits

0xe0a6,	// (0x0003e451) midp_keyp_sk_left_pane

0xe100,	// (0x0003e4ab) midp_keyp_sk_right_pane_ParamLimits

0xe100,	// (0x0003e4ab) midp_keyp_sk_right_pane

0x240d,	// (0x000327b8) bg_button_pane_cp03

0xe15a,	// (0x0003e505) midp_keyp_sk_left_pane_g1

0x240d,	// (0x000327b8) bg_button_pane_cp04

0xe15a,	// (0x0003e505) midp_keyp_sk_right_pane_g1

0xc2e6,	// (0x0003c691) midp_keyp_rocker_pane_g1

0xe163,	// (0x0003e50e) keyp_game_cell_pane_ParamLimits

0xe163,	// (0x0003e50e) keyp_game_cell_pane

0x240d,	// (0x000327b8) bg_button_pane_cp02

0xe176,	// (0x0003e521) keyp_game_cell_pane_g1

0x5e1a,	// (0x000361c5) popup_fep_vkb2_window_ParamLimits

0x5e1a,	// (0x000361c5) popup_fep_vkb2_window

0x8a7d,	// (0x00038e28) aid_size_cell_vkb2_ParamLimits

0x8a7d,	// (0x00038e28) aid_size_cell_vkb2

0x8ad1,	// (0x00038e7c) popup_fep_vkb2_window_g1_ParamLimits

0x8ad1,	// (0x00038e7c) popup_fep_vkb2_window_g1

0x8b19,	// (0x00038ec4) vkb2_area_bottom_pane_ParamLimits

0x8b19,	// (0x00038ec4) vkb2_area_bottom_pane

0x8b65,	// (0x00038f10) vkb2_area_keypad_pane_ParamLimits

0x8b65,	// (0x00038f10) vkb2_area_keypad_pane

0x8ba7,	// (0x00038f52) vkb2_area_top_pane_ParamLimits

0x8ba7,	// (0x00038f52) vkb2_area_top_pane

0x8c21,	// (0x00038fcc) vkb2_top_entry_pane_ParamLimits

0x8c21,	// (0x00038fcc) vkb2_top_entry_pane

0x8c4b,	// (0x00038ff6) vkb2_top_grid_left_pane_ParamLimits

0x8c4b,	// (0x00038ff6) vkb2_top_grid_left_pane

0x8c69,	// (0x00039014) vkb2_top_grid_right_pane_ParamLimits

0x8c69,	// (0x00039014) vkb2_top_grid_right_pane

0x8c87,	// (0x00039032) vkb2_cell_keypad_pane_ParamLimits

0x8c87,	// (0x00039032) vkb2_cell_keypad_pane

0x8d58,	// (0x00039103) vkb2_area_bottom_grid_pane_ParamLimits

0x8d58,	// (0x00039103) vkb2_area_bottom_grid_pane

0x8d7e,	// (0x00039129) vkb2_area_bottom_pane_g1_ParamLimits

0x8d7e,	// (0x00039129) vkb2_area_bottom_pane_g1

0x8da2,	// (0x0003914d) vkb2_area_bottom_pane_g2_ParamLimits

0x8da2,	// (0x0003914d) vkb2_area_bottom_pane_g2

0x8dd0,	// (0x0003917b) vkb2_area_bottom_pane_g3_ParamLimits

0x8dd0,	// (0x0003917b) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x00040142) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x00040142) vkb2_area_bottom_pane_g

0x8e31,	// (0x000391dc) vkb2_top_cell_left_pane_ParamLimits

0x8e31,	// (0x000391dc) vkb2_top_cell_left_pane

0xe187,	// (0x0003e532) vkb2_top_entry_pane_g1_ParamLimits

0xe187,	// (0x0003e532) vkb2_top_entry_pane_g1

0xe195,	// (0x0003e540) vkb2_top_entry_pane_t1_ParamLimits

0xe195,	// (0x0003e540) vkb2_top_entry_pane_t1

0xe1c7,	// (0x0003e572) vkb2_top_entry_pane_t2_ParamLimits

0xe1c7,	// (0x0003e572) vkb2_top_entry_pane_t2

0xe1f9,	// (0x0003e5a4) vkb2_top_entry_pane_t3_ParamLimits

0xe1f9,	// (0x0003e5a4) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x00040149) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x00040149) vkb2_top_entry_pane_t

0x8e7e,	// (0x00039229) vkb2_top_grid_right_pane_g1_ParamLimits

0x8e7e,	// (0x00039229) vkb2_top_grid_right_pane_g1

0x8e94,	// (0x0003923f) vkb2_top_grid_right_pane_g2_ParamLimits

0x8e94,	// (0x0003923f) vkb2_top_grid_right_pane_g2

0x8eac,	// (0x00039257) vkb2_top_grid_right_pane_g3_ParamLimits

0x8eac,	// (0x00039257) vkb2_top_grid_right_pane_g3

0x8ec4,	// (0x0003926f) vkb2_top_grid_right_pane_g4_ParamLimits

0x8ec4,	// (0x0003926f) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x00040150) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x00040150) vkb2_top_grid_right_pane_g

0x8eda,	// (0x00039285) vkb2_top_cell_left_pane_g1

0x8ef1,	// (0x0003929c) vkb2_cell_keypad_pane_g1_ParamLimits

0x8ef1,	// (0x0003929c) vkb2_cell_keypad_pane_g1

0xe21d,	// (0x0003e5c8) vkb2_cell_keypad_pane_t1_ParamLimits

0xe21d,	// (0x0003e5c8) vkb2_cell_keypad_pane_t1

0x8eff,	// (0x000392aa) vkb2_cell_bottom_grid_pane_ParamLimits

0x8eff,	// (0x000392aa) vkb2_cell_bottom_grid_pane

0x8f38,	// (0x000392e3) vkb2_cell_bottom_grid_pane_g1

0xddc8,	// (0x0003e173) aid_call2_pane_cp02

0xddd0,	// (0x0003e17b) aid_call_pane_cp02

0xddd8,	// (0x0003e183) clock_digital_number_pane_cp10

0xdde0,	// (0x0003e18b) clock_digital_number_pane_cp11

0xdde8,	// (0x0003e193) clock_digital_number_pane_cp12

0xddf0,	// (0x0003e19b) clock_digital_number_pane_cp13

0xddf8,	// (0x0003e1a3) clock_digital_separator_pane_cp10

0x2c65,	// (0x00033010) popup_clock_digital_analogue_window_cp2_g1

0x2c65,	// (0x00033010) popup_clock_digital_analogue_window_cp2_g2

0xde00,	// (0x0003e1ab) popup_clock_digital_analogue_window_cp2_g3

0x2c65,	// (0x00033010) popup_clock_digital_analogue_window_cp2_g4

0xde00,	// (0x0003e1ab) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x00040105) popup_clock_digital_analogue_window_cp2_g

0xde08,	// (0x0003e1b3) popup_clock_digital_analogue_window_cp2_t1

0xde16,	// (0x0003e1c1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x00040110) popup_clock_digital_analogue_window_cp2_t

0xc2e6,	// (0x0003c691) clock_digital_number_pane_cp10_g1

0xc2e6,	// (0x0003c691) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x0003fef3) clock_digital_number_pane_cp10_g

0xc2e6,	// (0x0003c691) clock_digital_separator_pane_cp10_g1

0xc2e6,	// (0x0003c691) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x0003fef3) clock_digital_separator_pane_cp10_g

0xdc45,	// (0x0003dff0) uniindi_top_pane_g3

0xdc56,	// (0x0003e001) uniindi_top_pane_g4

0x8d12,	// (0x000390bd) vkb2_row_keypad_pane_ParamLimits

0x8d12,	// (0x000390bd) vkb2_row_keypad_pane

0x8f54,	// (0x000392ff) vkb2_cell_t_keypad_pane_ParamLimits

0x8f54,	// (0x000392ff) vkb2_cell_t_keypad_pane

0x8f64,	// (0x0003930f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8f64,	// (0x0003930f) vkb2_cell_t_keypad_pane_cp08

0x8f77,	// (0x00039322) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8f77,	// (0x00039322) vkb2_cell_t_keypad_pane_cp09

0x8f8b,	// (0x00039336) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8f8b,	// (0x00039336) vkb2_cell_t_keypad_pane_cp01

0x8f9c,	// (0x00039347) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8f9c,	// (0x00039347) vkb2_cell_t_keypad_pane_cp02

0x8fad,	// (0x00039358) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8fad,	// (0x00039358) vkb2_cell_t_keypad_pane_cp03

0x8fbe,	// (0x00039369) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8fbe,	// (0x00039369) vkb2_cell_t_keypad_pane_cp04

0x8fcf,	// (0x0003937a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8fcf,	// (0x0003937a) vkb2_cell_t_keypad_pane_cp05

0x8fe0,	// (0x0003938b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8fe0,	// (0x0003938b) vkb2_cell_t_keypad_pane_cp06

0x8ff1,	// (0x0003939c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8ff1,	// (0x0003939c) vkb2_cell_t_keypad_pane_cp07

0x9002,	// (0x000393ad) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9002,	// (0x000393ad) vkb2_cell_t_keypad_pane_cp10

0x8691,	// (0x00038a3c) vkb2_cell_t_keypad_pane_g1

0xe234,	// (0x0003e5df) vkb2_cell_t_keypad_pane_t1

0x5d1f,	// (0x000360ca) popup_grid_graphic2_window

0xe246,	// (0x0003e5f1) aid_size_cell_graphic2_ParamLimits

0xe246,	// (0x0003e5f1) aid_size_cell_graphic2

0xe27e,	// (0x0003e629) bg_popup_window_pane_cp21_ParamLimits

0xe27e,	// (0x0003e629) bg_popup_window_pane_cp21

0xe28c,	// (0x0003e637) graphic2_pages_pane_ParamLimits

0xe28c,	// (0x0003e637) graphic2_pages_pane

0xe2d2,	// (0x0003e67d) grid_graphic2_control_pane_ParamLimits

0xe2d2,	// (0x0003e67d) grid_graphic2_control_pane

0xe310,	// (0x0003e6bb) grid_graphic2_pane_ParamLimits

0xe310,	// (0x0003e6bb) grid_graphic2_pane

0xe384,	// (0x0003e72f) cell_graphic2_pane

0x5d1f,	// (0x000360ca) main_comp_mode_pane

0xd4c9,	// (0x0003d874) list_ai3_gene_pane_ParamLimits

0xd88d,	// (0x0003dc38) bg_popup_window_pane_cp19_ParamLimits

0xd899,	// (0x0003dc44) bg_touch_area_indi_pane_ParamLimits

0xd899,	// (0x0003dc44) bg_touch_area_indi_pane

0xd8af,	// (0x0003dc5a) bg_touch_area_indi_pane_cp01_ParamLimits

0xd8af,	// (0x0003dc5a) bg_touch_area_indi_pane_cp01

0xd8c5,	// (0x0003dc70) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8c5,	// (0x0003dc70) bg_touch_area_indi_pane_cp02

0xd8dd,	// (0x0003dc88) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8dd,	// (0x0003dc88) bg_touch_area_indi_pane_cp03

0xd8f7,	// (0x0003dca2) popup_slider_window_g1_ParamLimits

0xd913,	// (0x0003dcbe) popup_slider_window_g2_ParamLimits

0xd92f,	// (0x0003dcda) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x0004009a) popup_slider_window_g_ParamLimits

0xd98b,	// (0x0003dd36) popup_slider_window_t1_ParamLimits

0xd9ff,	// (0x0003ddaa) small_volume_slider_vertical_pane_ParamLimits

0xe384,	// (0x0003e72f) cell_graphic2_pane_ParamLimits

0xe3d2,	// (0x0003e77d) bg_button_pane_cp10_ParamLimits

0xe3d2,	// (0x0003e77d) bg_button_pane_cp10

0xe3e5,	// (0x0003e790) bg_button_pane_cp11_ParamLimits

0xe3e5,	// (0x0003e790) bg_button_pane_cp11

0xe3f8,	// (0x0003e7a3) graphic2_pages_pane_g1_ParamLimits

0xe3f8,	// (0x0003e7a3) graphic2_pages_pane_g1

0xe413,	// (0x0003e7be) graphic2_pages_pane_g2_ParamLimits

0xe413,	// (0x0003e7be) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x0004015e) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x0004015e) graphic2_pages_pane_g

0xe42b,	// (0x0003e7d6) graphic2_pages_pane_t1_ParamLimits

0xe42b,	// (0x0003e7d6) graphic2_pages_pane_t1

0xe443,	// (0x0003e7ee) cell_graphic2_control_pane_ParamLimits

0xe443,	// (0x0003e7ee) cell_graphic2_control_pane

0xe464,	// (0x0003e80f) cell_graphic2_pane_g1_ParamLimits

0xe464,	// (0x0003e80f) cell_graphic2_pane_g1

0xe471,	// (0x0003e81c) cell_graphic2_pane_g2_ParamLimits

0xe471,	// (0x0003e81c) cell_graphic2_pane_g2

0xe47e,	// (0x0003e829) cell_graphic2_pane_g3_ParamLimits

0xe47e,	// (0x0003e829) cell_graphic2_pane_g3

0xe48b,	// (0x0003e836) cell_graphic2_pane_g4_ParamLimits

0xe48b,	// (0x0003e836) cell_graphic2_pane_g4

0xe498,	// (0x0003e843) cell_graphic2_pane_g5_ParamLimits

0xe498,	// (0x0003e843) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x00040163) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x00040163) cell_graphic2_pane_g

0xe4b3,	// (0x0003e85e) cell_graphic2_pane_t1_ParamLimits

0xe4b3,	// (0x0003e85e) cell_graphic2_pane_t1

0x9d6d,	// (0x0003a118) grid_highlight_pane_cp11_ParamLimits

0x9d6d,	// (0x0003a118) grid_highlight_pane_cp11

0x25a7,	// (0x00032952) bg_button_pane_cp05

0xe4dc,	// (0x0003e887) cell_graphic2_control_pane_g1

0xc2e6,	// (0x0003c691) bg_touch_area_indi_pane_g1

0xe504,	// (0x0003e8af) aid_cmod_rocker_key_size

0xe50e,	// (0x0003e8b9) aid_cmode_itu_key_size

0xe518,	// (0x0003e8c3) main_cmode_video_pane

0xe522,	// (0x0003e8cd) main_comp_mode_itu_pane

0xe52e,	// (0x0003e8d9) main_comp_mode_rocker_pane

0xe53a,	// (0x0003e8e5) cell_cmode_rocker_pane_ParamLimits

0xe53a,	// (0x0003e8e5) cell_cmode_rocker_pane

0xe54c,	// (0x0003e8f7) cell_cmode_itu_pane_ParamLimits

0xe54c,	// (0x0003e8f7) cell_cmode_itu_pane

0x282f,	// (0x00032bda) bg_button_pane_cp06_ParamLimits

0x282f,	// (0x00032bda) bg_button_pane_cp06

0xc556,	// (0x0003c901) cell_cmode_rocker_pane_g1_ParamLimits

0xc556,	// (0x0003c901) cell_cmode_rocker_pane_g1

0xdaa3,	// (0x0003de4e) cell_cmode_rocker_pane_g2_ParamLimits

0xdaa3,	// (0x0003de4e) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x00040173) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x00040173) cell_cmode_rocker_pane_g

0x240d,	// (0x000327b8) bg_button_pane_cp07

0xe561,	// (0x0003e90c) cell_cmode_itu_pane_g1

0xe56a,	// (0x0003e915) cell_cmode_itu_pane_t1

0xe578,	// (0x0003e923) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x00040178) cell_cmode_itu_pane_t

0xdcc7,	// (0x0003e072) aid_touch_ctrl_left

0xdccf,	// (0x0003e07a) aid_touch_ctrl_right

0x240d,	// (0x000327b8) compa_mode_pane

0xe586,	// (0x0003e931) aid_cmod_rocker_key_size_cp

0xe590,	// (0x0003e93b) aid_cmode_itu_key_size_cp

0xe59a,	// (0x0003e945) compa_mode_pane_g1

0xe5a2,	// (0x0003e94d) compa_mode_pane_g2

0xe5aa,	// (0x0003e955) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x0004017d) compa_mode_pane_g

0xe5b2,	// (0x0003e95d) main_comp_mode_itu_pane_cp

0xe5ba,	// (0x0003e965) main_comp_mode_rocker_pane_cp

0xe5c2,	// (0x0003e96d) cell_cmode_itu_pane_cp_ParamLimits

0xe5c2,	// (0x0003e96d) cell_cmode_itu_pane_cp

0xe5d7,	// (0x0003e982) cell_cmode_rocker_pane_cp_ParamLimits

0xe5d7,	// (0x0003e982) cell_cmode_rocker_pane_cp

0x282f,	// (0x00032bda) bg_button_pane_cp06_cp_ParamLimits

0x282f,	// (0x00032bda) bg_button_pane_cp06_cp

0xc556,	// (0x0003c901) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc556,	// (0x0003c901) cell_cmode_rocker_pane_g1_cp

0xc2e6,	// (0x0003c691) cell_cmode_rocker_pane_g2_cp

0x240d,	// (0x000327b8) bg_button_pane_cp07_cp

0xe5e9,	// (0x0003e994) cell_cmode_itu_pane_g1_cp

0xe5f2,	// (0x0003e99d) cell_cmode_itu_pane_t1_cp

0xe5f2,	// (0x0003e99d) cell_cmode_itu_pane_t2_cp

0xb1ff,	// (0x0003b5aa) settings_code_pane_cp2

0x247d,	// (0x00032828) bg_popup_window_pane_cp3_ParamLimits

0x26c0,	// (0x00032a6b) heading_pane_cp3_ParamLimits

0x26cc,	// (0x00032a77) listscroll_popup_graphic_pane_ParamLimits

0x843a,	// (0x000387e5) fep_hwr_aid_pane_ParamLimits

0x89d8,	// (0x00038d83) aid_touch_sctrl_top_ParamLimits

0x89f3,	// (0x00038d9e) sctrl_sk_top_pane_g1_ParamLimits

0x8691,	// (0x00038a3c) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x000400b3) sctrl_sk_top_pane_g_ParamLimits

0x8a00,	// (0x00038dab) sctrl_sk_top_pane_t1_ParamLimits

0x89d8,	// (0x00038d83) aid_touch_sctrl_bottom_ParamLimits

0x8a00,	// (0x00038dab) sctrl_sk_bottom_pane_t1_ParamLimits

0xdc11,	// (0x0003dfbc) aid_area_touch_clock

0x8be9,	// (0x00038f94) aid_vkb2_area_top_pane_cell_ParamLimits

0x8be9,	// (0x00038f94) aid_vkb2_area_top_pane_cell

0x8d34,	// (0x000390df) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8d34,	// (0x000390df) aid_vkb2_area_bottom_pane_cell

0xe17f,	// (0x0003e52a) popup_char_count_window

0xe600,	// (0x0003e9ab) popup_char_count_window_g1

0xe609,	// (0x0003e9b4) popup_char_count_window_g2

0xe612,	// (0x0003e9bd) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x00040184) popup_char_count_window_g

0xe61b,	// (0x0003e9c6) popup_char_count_window_t1

0x8aaf,	// (0x00038e5a) popup_fep_char_preview_window_ParamLimits

0x8aaf,	// (0x00038e5a) popup_fep_char_preview_window

0x8c07,	// (0x00038fb2) vkb2_top_candi_pane_ParamLimits

0x8c07,	// (0x00038fb2) vkb2_top_candi_pane

0xe629,	// (0x0003e9d4) cell_vkb2_top_candi_pane_ParamLimits

0xe629,	// (0x0003e9d4) cell_vkb2_top_candi_pane

0x9017,	// (0x000393c2) bg_popup_fep_char_preview_window_ParamLimits

0x9017,	// (0x000393c2) bg_popup_fep_char_preview_window

0x9025,	// (0x000393d0) popup_fep_char_preview_window_t1_ParamLimits

0x9025,	// (0x000393d0) popup_fep_char_preview_window_t1

0xe676,	// (0x0003ea21) bg_popup_fep_char_preview_window_g1

0xe67e,	// (0x0003ea29) bg_popup_fep_char_preview_window_g2

0xe686,	// (0x0003ea31) bg_popup_fep_char_preview_window_g3

0xe68e,	// (0x0003ea39) bg_popup_fep_char_preview_window_g4

0xe696,	// (0x0003ea41) bg_popup_fep_char_preview_window_g5

0x905f,	// (0x0003940a) bg_popup_fep_char_preview_window_g6

0xe69e,	// (0x0003ea49) bg_popup_fep_char_preview_window_g7

0xe6a6,	// (0x0003ea51) bg_popup_fep_char_preview_window_g8

0xe6ae,	// (0x0003ea59) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x0004018b) bg_popup_fep_char_preview_window_g

0x8691,	// (0x00038a3c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x8691,	// (0x00038a3c) cell_vkb2_top_candi_pane_g1

0x869f,	// (0x00038a4a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x869f,	// (0x00038a4a) cell_vkb2_top_candi_pane_g2

0xd1e2,	// (0x0003d58d) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd1e2,	// (0x0003d58d) cell_vkb2_top_candi_pane_g3

0x9067,	// (0x00039412) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9067,	// (0x00039412) cell_vkb2_top_candi_pane_g4

0xca42,	// (0x0003cded) cell_vkb2_top_candi_pane_g5_ParamLimits

0xca42,	// (0x0003cded) cell_vkb2_top_candi_pane_g5

0x9088,	// (0x00039433) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9088,	// (0x00039433) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x0004019e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x0004019e) cell_vkb2_top_candi_pane_g

0x9096,	// (0x00039441) cell_vkb2_top_candi_pane_t1

0x8160,	// (0x0003850b) aid_size_touch_slider_mark_ParamLimits

0x8160,	// (0x0003850b) aid_size_touch_slider_mark

0xe2c2,	// (0x0003e66d) grid_graphic2_catg_pane_ParamLimits

0xe2c2,	// (0x0003e66d) grid_graphic2_catg_pane

0xe360,	// (0x0003e70b) popup_grid_graphic2_window_t1_ParamLimits

0xe360,	// (0x0003e70b) popup_grid_graphic2_window_t1

0xe372,	// (0x0003e71d) popup_grid_graphic2_window_t2_ParamLimits

0xe372,	// (0x0003e71d) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x00040159) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x00040159) popup_grid_graphic2_window_t

0x25a7,	// (0x00032952) bg_button_pane_cp05_ParamLimits

0xe4dc,	// (0x0003e887) cell_graphic2_control_pane_g1_ParamLimits

0xe6b6,	// (0x0003ea61) cell_graphic2_catg_pane_ParamLimits

0xe6b6,	// (0x0003ea61) cell_graphic2_catg_pane

0x240d,	// (0x000327b8) bg_button_pane_cp12

0xe6c8,	// (0x0003ea73) cell_graphic2_catg_pane_g1

0xdbdd,	// (0x0003df88) cell_tb_ext_pane_t1_ParamLimits

0x8e51,	// (0x000391fc) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8e51,	// (0x000391fc) vkb2_top_cell_right_narrow_pane

0x8e69,	// (0x00039214) vkb2_top_cell_right_wide_pane_ParamLimits

0x8e69,	// (0x00039214) vkb2_top_cell_right_wide_pane

0x842c,	// (0x000387d7) bg_vkb2_func_pane_ParamLimits

0x842c,	// (0x000387d7) bg_vkb2_func_pane

0x8eda,	// (0x00039285) vkb2_top_cell_left_pane_g1_ParamLimits

0x842c,	// (0x000387d7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x842c,	// (0x000387d7) bg_vkb2_fuc_pane_cp03

0x8f38,	// (0x000392e3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d01,	// (0x0003a0ac) bg_vkb2_func_pane_g1

0x9d09,	// (0x0003a0b4) bg_vkb2_func_pane_g2

0x9d19,	// (0x0003a0c4) bg_vkb2_func_pane_g3

0x9d11,	// (0x0003a0bc) bg_vkb2_func_pane_g4

0x9d21,	// (0x0003a0cc) bg_vkb2_func_pane_g5

0x9d29,	// (0x0003a0d4) bg_vkb2_func_pane_g6

0x9d31,	// (0x0003a0dc) bg_vkb2_func_pane_g7

0x9d39,	// (0x0003a0e4) bg_vkb2_func_pane_g8

0x9cf9,	// (0x0003a0a4) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x000401ab) bg_vkb2_func_pane_g

0x842c,	// (0x000387d7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x842c,	// (0x000387d7) bg_vkb2_fuc_pane_cp01

0x8eda,	// (0x00039285) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8eda,	// (0x00039285) vkb2_top_cell_right_wide_pane_g1

0x842c,	// (0x000387d7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x842c,	// (0x000387d7) bg_vkb2_fuc_pane_cp02

0x8f38,	// (0x000392e3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8f38,	// (0x000392e3) vkb2_top_cell_right_narrow_pane_g1

0xd80f,	// (0x0003dbba) aid_touch_area_decrease_ParamLimits

0xd80f,	// (0x0003dbba) aid_touch_area_decrease

0xd82f,	// (0x0003dbda) aid_touch_area_increase_ParamLimits

0xd82f,	// (0x0003dbda) aid_touch_area_increase

0xd83b,	// (0x0003dbe6) aid_touch_area_mute_ParamLimits

0xd83b,	// (0x0003dbe6) aid_touch_area_mute

0xd85f,	// (0x0003dc0a) aid_touch_area_slider_ParamLimits

0xd85f,	// (0x0003dc0a) aid_touch_area_slider

0xd94b,	// (0x0003dcf6) popup_slider_window_g4_ParamLimits

0xd94b,	// (0x0003dcf6) popup_slider_window_g4

0xd957,	// (0x0003dd02) popup_slider_window_g5_ParamLimits

0xd957,	// (0x0003dd02) popup_slider_window_g5

0xd979,	// (0x0003dd24) popup_slider_window_g6_ParamLimits

0xd979,	// (0x0003dd24) popup_slider_window_g6

0xd9b9,	// (0x0003dd64) popup_slider_window_t2_ParamLimits

0xd9b9,	// (0x0003dd64) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x000400a7) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x000400a7) popup_slider_window_t

0xd9d1,	// (0x0003dd7c) slider_pane_ParamLimits

0xd9d1,	// (0x0003dd7c) slider_pane

0xe6d1,	// (0x0003ea7c) slider_pane_g1_ParamLimits

0xe6d1,	// (0x0003ea7c) slider_pane_g1

0xe6e5,	// (0x0003ea90) slider_pane_g2_ParamLimits

0xe6e5,	// (0x0003ea90) slider_pane_g2

0xe6fb,	// (0x0003eaa6) slider_pane_g3_ParamLimits

0xe6fb,	// (0x0003eaa6) slider_pane_g3

0x0003,

0xfe13,	// (0x000401be) slider_pane_g_ParamLimits

0xfe13,	// (0x000401be) slider_pane_g

0x7d4c,	// (0x000380f7) popup_tb_float_extension_window_ParamLimits

0x7d4c,	// (0x000380f7) popup_tb_float_extension_window

0xe727,	// (0x0003ead2) aid_size_cell_tb_float_ext

0x240d,	// (0x000327b8) bg_popup_sub_window_cp28

0xe733,	// (0x0003eade) grid_tb_float_ext_pane

0xe73d,	// (0x0003eae8) cell_tb_float_ext_pane_ParamLimits

0xe73d,	// (0x0003eae8) cell_tb_float_ext_pane

0xe757,	// (0x0003eb02) cell_tb_float_ext_pane_g1

0xe760,	// (0x0003eb0b) grid_highlight_pane_cp12

0x857b,	// (0x00038926) cell_last_hwr_side_pane_ParamLimits

0x857b,	// (0x00038926) cell_last_hwr_side_pane

0xc2e6,	// (0x0003c691) cell_last_hwr_side_pane_g1

0xe769,	// (0x0003eb14) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x000401c7) cell_last_hwr_side_pane_g

0x8e00,	// (0x000391ab) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8e00,	// (0x000391ab) vkb2_area_bottom_space_btn_pane

0x8691,	// (0x00038a3c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe234,	// (0x0003e5df) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9096,	// (0x00039441) cell_vkb2_top_candi_pane_t1_ParamLimits

0x90b5,	// (0x00039460) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x90b5,	// (0x00039460) vkb2_area_bottom_space_btn_pane_g1

0x90ef,	// (0x0003949a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x90ef,	// (0x0003949a) vkb2_area_bottom_space_btn_pane_g2

0x9125,	// (0x000394d0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9125,	// (0x000394d0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x000401cc) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x000401cc) vkb2_area_bottom_space_btn_pane_g

0x84ef,	// (0x0003889a) cel_fep_hwr_func_pane_ParamLimits

0x84ef,	// (0x0003889a) cel_fep_hwr_func_pane

0x852b,	// (0x000388d6) cell_hwr_side_button_pane_ParamLimits

0x852b,	// (0x000388d6) cell_hwr_side_button_pane

0xdc11,	// (0x0003dfbc) aid_area_touch_clock_ParamLimits

0x25a7,	// (0x00032952) bg_uniindi_top_pane_ParamLimits

0xdc23,	// (0x0003dfce) uniindi_top_pane_g1_ParamLimits

0xdc39,	// (0x0003dfe4) uniindi_top_pane_g2_ParamLimits

0xdc45,	// (0x0003dff0) uniindi_top_pane_g3_ParamLimits

0xdc56,	// (0x0003e001) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x000400df) uniindi_top_pane_g_ParamLimits

0xdc63,	// (0x0003e00e) uniindi_top_pane_t1_ParamLimits

0x25a7,	// (0x00032952) bg_vkb2_func_pane_cp01_ParamLimits

0x25a7,	// (0x00032952) bg_vkb2_func_pane_cp01

0xe772,	// (0x0003eb1d) cel_fep_hwr_func_pane_g1_ParamLimits

0xe772,	// (0x0003eb1d) cel_fep_hwr_func_pane_g1

0x25a7,	// (0x00032952) bg_vkb2_func_pane_cp02_ParamLimits

0x25a7,	// (0x00032952) bg_vkb2_func_pane_cp02

0xe772,	// (0x0003eb1d) cell_hwr_side_button_pane_g1_ParamLimits

0xe772,	// (0x0003eb1d) cell_hwr_side_button_pane_g1

0x9b7d,	// (0x00039f28) status_pane_g4_ParamLimits

0x9b7d,	// (0x00039f28) status_pane_g4

0x9b97,	// (0x00039f42) status_pane_t1

0xc01b,	// (0x0003c3c6) form2_midp_gauge_slider_cont_pane

0xc023,	// (0x0003c3ce) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc035,	// (0x0003c3e0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc047,	// (0x0003c3f2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x0003fea6) form2_midp_gauge_slider_pane_t_ParamLimits

0xc059,	// (0x0003c404) form2_midp_slider_pane_ParamLimits

0x8a6f,	// (0x00038e1a) aid_size_cell_func_vkb2_ParamLimits

0x8a6f,	// (0x00038e1a) aid_size_cell_func_vkb2

0xe713,	// (0x0003eabe) slider_pane_g4_ParamLimits

0xe713,	// (0x0003eabe) slider_pane_g4

0x916f,	// (0x0003951a) form2_midp_gauge_slider_pane_t2_cp01

0x917d,	// (0x00039528) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x917d,	// (0x00039528) form2_midp_gauge_slider_pane_t3_cp01

0x919a,	// (0x00039545) form2_midp_slider_pane_cp01

0x240d,	// (0x000327b8) navi_smil_pane

0xe7ab,	// (0x0003eb56) navi_smil_pane_g1

0xe7b3,	// (0x0003eb5e) navi_smil_pane_t1

0xe780,	// (0x0003eb2b) form2_midp_slider_pane_g1

0xe789,	// (0x0003eb34) form2_midp_slider_pane_g2

0xe791,	// (0x0003eb3c) form2_midp_slider_pane_g3

0xe780,	// (0x0003eb2b) form2_midp_slider_pane_g4

0xe799,	// (0x0003eb44) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x000401d5) form2_midp_slider_pane_g

0x915f,	// (0x0003950a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x915f,	// (0x0003950a) vkb2_area_bottom_space_btn_pane_g4

0x99ac,	// (0x00039d57) lc0_navi_pane_ParamLimits

0x99ac,	// (0x00039d57) lc0_navi_pane

0x9a22,	// (0x00039dcd) lc0_stat_indi_pane_ParamLimits

0x9a22,	// (0x00039dcd) lc0_stat_indi_pane

0x9a39,	// (0x00039de4) ls0_title_pane_ParamLimits

0x9a39,	// (0x00039de4) ls0_title_pane

0x282f,	// (0x00032bda) bg_popup_sub_pane_cp14_ParamLimits

0xdbf8,	// (0x0003dfa3) list_uniindi_pane_ParamLimits

0xdc04,	// (0x0003dfaf) uniindi_top_pane_ParamLimits

0xdc9f,	// (0x0003e04a) list_single_uniindi_pane_g1_ParamLimits

0xdcb2,	// (0x0003e05d) list_single_uniindi_pane_t1_ParamLimits

0x91a3,	// (0x0003954e) lc0_stat_clock_pane_ParamLimits

0x91a3,	// (0x0003954e) lc0_stat_clock_pane

0xe7c1,	// (0x0003eb6c) lc0_stat_indi_pane_g1_ParamLimits

0xe7c1,	// (0x0003eb6c) lc0_stat_indi_pane_g1

0xe7ce,	// (0x0003eb79) lc0_stat_indi_pane_g2_ParamLimits

0xe7ce,	// (0x0003eb79) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x000401e0) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x000401e0) lc0_stat_indi_pane_g

0x91b0,	// (0x0003955b) lc0_uni_indicator_pane_ParamLimits

0x91b0,	// (0x0003955b) lc0_uni_indicator_pane

0xe7db,	// (0x0003eb86) ls0_title_pane_g1_ParamLimits

0xe7db,	// (0x0003eb86) ls0_title_pane_g1

0xe7ef,	// (0x0003eb9a) ls0_title_pane_t1_ParamLimits

0xe7ef,	// (0x0003eb9a) ls0_title_pane_t1

0x91bd,	// (0x00039568) lc0_uni_indicator_pane_g1_ParamLimits

0x91bd,	// (0x00039568) lc0_uni_indicator_pane_g1

0xe825,	// (0x0003ebd0) lc0_stat_clock_pane_t1

0x5d1f,	// (0x000360ca) main_ai5_pane

0xe833,	// (0x0003ebde) ai5_sk_pane_ParamLimits

0xe833,	// (0x0003ebde) ai5_sk_pane

0xe840,	// (0x0003ebeb) cell_ai5_widget_pane_ParamLimits

0xe840,	// (0x0003ebeb) cell_ai5_widget_pane

0xe8fc,	// (0x0003eca7) aid_size_cell_widget_grid

0xe90a,	// (0x0003ecb5) bg_ai5_widget_pane_ParamLimits

0xe90a,	// (0x0003ecb5) bg_ai5_widget_pane

0xe97e,	// (0x0003ed29) cell_ai5_widget_pane_g2

0xe98e,	// (0x0003ed39) cell_ai5_widget_pane_g3

0xe9a5,	// (0x0003ed50) cell_ai5_widget_pane_g4

0xe9b1,	// (0x0003ed5c) cell_ai5_widget_pane_g5

0xe9bd,	// (0x0003ed68) cell_ai5_widget_pane_g6

0xe9c9,	// (0x0003ed74) cell_ai5_widget_pane_g7

0xea11,	// (0x0003edbc) cell_ai5_widget_pane_t1_ParamLimits

0xea11,	// (0x0003edbc) cell_ai5_widget_pane_t1

0xea2e,	// (0x0003edd9) cell_ai5_widget_pane_t2_ParamLimits

0xea2e,	// (0x0003edd9) cell_ai5_widget_pane_t2

0xea46,	// (0x0003edf1) cell_ai5_widget_pane_t3_ParamLimits

0xea46,	// (0x0003edf1) cell_ai5_widget_pane_t3

0xea5e,	// (0x0003ee09) cell_ai5_widget_pane_t4_ParamLimits

0xea5e,	// (0x0003ee09) cell_ai5_widget_pane_t4

0xea7b,	// (0x0003ee26) cell_ai5_widget_pane_t5_ParamLimits

0xea7b,	// (0x0003ee26) cell_ai5_widget_pane_t5

0xea9a,	// (0x0003ee45) cell_ai5_widget_pane_t6_ParamLimits

0xea9a,	// (0x0003ee45) cell_ai5_widget_pane_t6

0xeaac,	// (0x0003ee57) cell_ai5_widget_pane_t7_ParamLimits

0xeaac,	// (0x0003ee57) cell_ai5_widget_pane_t7

0xeac5,	// (0x0003ee70) cell_ai5_widget_pane_t8_ParamLimits

0xeac5,	// (0x0003ee70) cell_ai5_widget_pane_t8

0x0009,

0xfe4f,	// (0x000401fa) cell_ai5_widget_pane_t_ParamLimits

0xfe4f,	// (0x000401fa) cell_ai5_widget_pane_t

0xeb19,	// (0x0003eec4) grid_ai5_widget_pane

0x282f,	// (0x00032bda) highlight_cell_ai5_widget_pane_ParamLimits

0x282f,	// (0x00032bda) highlight_cell_ai5_widget_pane

0xeb27,	// (0x0003eed2) ai5_sk_left_pane

0xeb31,	// (0x0003eedc) ai5_sk_middle_pane

0xeb3b,	// (0x0003eee6) ai5_sk_right_pane

0xeb45,	// (0x0003eef0) bg_ai5_widget_pane_g1_ParamLimits

0xeb45,	// (0x0003eef0) bg_ai5_widget_pane_g1

0xeb51,	// (0x0003eefc) bg_ai5_widget_pane_g2_ParamLimits

0xeb51,	// (0x0003eefc) bg_ai5_widget_pane_g2

0xeb5d,	// (0x0003ef08) bg_ai5_widget_pane_g3_ParamLimits

0xeb5d,	// (0x0003ef08) bg_ai5_widget_pane_g3

0xeb69,	// (0x0003ef14) bg_ai5_widget_pane_g4_ParamLimits

0xeb69,	// (0x0003ef14) bg_ai5_widget_pane_g4

0xeb75,	// (0x0003ef20) bg_ai5_widget_pane_g5_ParamLimits

0xeb75,	// (0x0003ef20) bg_ai5_widget_pane_g5

0xeb81,	// (0x0003ef2c) bg_ai5_widget_pane_g6_ParamLimits

0xeb81,	// (0x0003ef2c) bg_ai5_widget_pane_g6

0xeb8d,	// (0x0003ef38) bg_ai5_widget_pane_g7_ParamLimits

0xeb8d,	// (0x0003ef38) bg_ai5_widget_pane_g7

0xeb99,	// (0x0003ef44) bg_ai5_widget_pane_g8_ParamLimits

0xeb99,	// (0x0003ef44) bg_ai5_widget_pane_g8

0xeba5,	// (0x0003ef50) bg_ai5_widget_pane_g9_ParamLimits

0xeba5,	// (0x0003ef50) bg_ai5_widget_pane_g9

0x0008,

0xfe64,	// (0x0004020f) bg_ai5_widget_pane_g_ParamLimits

0xfe64,	// (0x0004020f) bg_ai5_widget_pane_g

0xebd7,	// (0x0003ef82) cell_shortcut_ai5_widget_pane_ParamLimits

0xebd7,	// (0x0003ef82) cell_shortcut_ai5_widget_pane

0x7601,	// (0x000379ac) bg_cell_shortcut_ai5_widget_pane

0xebe8,	// (0x0003ef93) cell_grid_ai5_widget_pane_g1

0x7601,	// (0x000379ac) highlight_cell_shortcut_ai5_widget_pane

0x9d01,	// (0x0003a0ac) ai5_sk_left_pane_g1

0xebf1,	// (0x0003ef9c) ai5_sk_left_pane_g2

0xebf9,	// (0x0003efa4) ai5_sk_left_pane_g3

0xec01,	// (0x0003efac) ai5_sk_left_pane_g4

0x0003,

0xfe77,	// (0x00040222) ai5_sk_left_pane_g

0xec09,	// (0x0003efb4) ai5_sk_left_pane_t1

0x9d09,	// (0x0003a0b4) ai5_sk_right_pane_g1

0xec17,	// (0x0003efc2) ai5_sk_right_pane_g2

0xec1f,	// (0x0003efca) ai5_sk_right_pane_g3

0xec27,	// (0x0003efd2) ai5_sk_right_pane_g4

0x0003,

0xfe80,	// (0x0004022b) ai5_sk_right_pane_g

0xec2f,	// (0x0003efda) ai5_sk_right_pane_t1

0x9d09,	// (0x0003a0b4) ai5_sk_middle_pane_g1

0x9d01,	// (0x0003a0ac) ai5_sk_middle_pane_g2

0x9d21,	// (0x0003a0cc) ai5_sk_middle_pane_g3

0xec1f,	// (0x0003efca) ai5_sk_middle_pane_g4

0xebf9,	// (0x0003efa4) ai5_sk_middle_pane_g5

0xec3d,	// (0x0003efe8) ai5_sk_middle_pane_g6

0xec45,	// (0x0003eff0) ai5_sk_middle_pane_g7

0x0006,

0xfe89,	// (0x00040234) ai5_sk_middle_pane_g

0x9832,	// (0x00039bdd) aid_touch_area_size_lc0_ParamLimits

0x9832,	// (0x00039bdd) aid_touch_area_size_lc0

0x86c0,	// (0x00038a6b) cell_hwr_candidate_pane_t1_ParamLimits

0x984e,	// (0x00039bf9) aid_touch_navi_pane

0x9b27,	// (0x00039ed2) status_dt_navi_pane_ParamLimits

0x9b27,	// (0x00039ed2) status_dt_navi_pane

0x9b34,	// (0x00039edf) status_dt_sta_pane_ParamLimits

0x9b34,	// (0x00039edf) status_dt_sta_pane

0xec4d,	// (0x0003eff8) dt_sta_controll_pane

0xec5a,	// (0x0003f005) dt_sta_indi_pane

0xec6b,	// (0x0003f016) dt_sta_title_pane

0x25a7,	// (0x00032952) bg_dt_sta_indi_pane_ParamLimits

0x25a7,	// (0x00032952) bg_dt_sta_indi_pane

0xec7e,	// (0x0003f029) dt_sta_battery_pane

0xec86,	// (0x0003f031) dt_sta_indi_pane_g1

0xec8f,	// (0x0003f03a) dt_sta_indi_pane_g2

0xec98,	// (0x0003f043) dt_sta_indi_pane_g3

0x0002,

0xfe98,	// (0x00040243) dt_sta_indi_pane_g

0xeca1,	// (0x0003f04c) dt_sta_signal_pane

0x282f,	// (0x00032bda) bg_dt_sta_title_pane_ParamLimits

0x282f,	// (0x00032bda) bg_dt_sta_title_pane

0xab27,	// (0x0003aed2) dt_sta_title_pane_g1

0xecaa,	// (0x0003f055) dt_sta_title_pane_t1_ParamLimits

0xecaa,	// (0x0003f055) dt_sta_title_pane_t1

0x240d,	// (0x000327b8) bg_dt_sta_control_pane

0xecbf,	// (0x0003f06a) dt_sta_controll_pane_g1

0xecc8,	// (0x0003f073) bg_dt_sta_title_pane_g1

0xecd1,	// (0x0003f07c) bg_dt_sta_title_pane_g2

0xecda,	// (0x0003f085) bg_dt_sta_title_pane_g3

0x0002,

0xfe9f,	// (0x0004024a) bg_dt_sta_title_pane_g

0xc2e6,	// (0x0003c691) bg_dt_sta_indi_pane_g1

0xece3,	// (0x0003f08e) dt_sta_signal_pane_g1

0xeceb,	// (0x0003f096) dt_sta_signal_pane_g2

0x0001,

0xfea6,	// (0x00040251) dt_sta_signal_pane_g

0xecf3,	// (0x0003f09e) dt_sta_battery_pane_g1

0xecfc,	// (0x0003f0a7) dt_sta_battery_pane_t1

0xc2e6,	// (0x0003c691) bg_dt_sta_control_pane_g1

0x2ce8,	// (0x00033093) fep_china_uni_eep_pane

0x2cf0,	// (0x0003309b) fep_china_uni_entry_pane_ParamLimits

0x2d00,	// (0x000330ab) popup_fep_china_uni_window_g1_ParamLimits

0x2d10,	// (0x000330bb) popup_fep_china_uni_window_g2_ParamLimits

0x2d10,	// (0x000330bb) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003fac8) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003fac8) popup_fep_china_uni_window_g

0xed0b,	// (0x0003f0b6) fep_china_uni_eep_pane_g1

0xed13,	// (0x0003f0be) fep_china_uni_eep_pane_t1

0xe7a2,	// (0x0003eb4d) aid_touch_area_size_smil_player

0x99a4,	// (0x00039d4f) lc0_clock_pane

0x9b8b,	// (0x00039f36) status_pane_g5_ParamLimits

0x9b8b,	// (0x00039f36) status_pane_g5

0x7a0d,	// (0x00037db8) popup_keymap_window

0x9b49,	// (0x00039ef4) status_icon_pane

0xe98e,	// (0x0003ed39) cell_ai5_widget_pane_g3_ParamLimits

0xe9a5,	// (0x0003ed50) cell_ai5_widget_pane_g4_ParamLimits

0xe9b1,	// (0x0003ed5c) cell_ai5_widget_pane_g5_ParamLimits

0xe9d5,	// (0x0003ed80) cell_ai5_widget_pane_g8_ParamLimits

0xe9d5,	// (0x0003ed80) cell_ai5_widget_pane_g8

0xe9e9,	// (0x0003ed94) cell_ai5_widget_pane_g9_ParamLimits

0xe9e9,	// (0x0003ed94) cell_ai5_widget_pane_g9

0xe9fd,	// (0x0003eda8) cell_ai5_widget_pane_g10_ParamLimits

0xe9fd,	// (0x0003eda8) cell_ai5_widget_pane_g10

0xed22,	// (0x0003f0cd) status_icon_pane_g1

0x240d,	// (0x000327b8) bg_popup_sub_pane_cp13

0xed2a,	// (0x0003f0d5) popup_keymap_window_t1

0x9777,	// (0x00039b22) control_pane_g6_ParamLimits

0x9777,	// (0x00039b22) control_pane_g6

0x9784,	// (0x00039b2f) control_pane_g7_ParamLimits

0x9784,	// (0x00039b2f) control_pane_g7

0x9791,	// (0x00039b3c) control_pane_g8_ParamLimits

0x9791,	// (0x00039b3c) control_pane_g8

0xec4d,	// (0x0003eff8) dt_sta_controll_pane_ParamLimits

0xec5a,	// (0x0003f005) dt_sta_indi_pane_ParamLimits

0xec6b,	// (0x0003f016) dt_sta_title_pane_ParamLimits

0x277a,	// (0x00032b25) aid_size_touch_scroll_bar_cale

0x5df8,	// (0x000361a3) popup_discreet_window_ParamLimits

0x5df8,	// (0x000361a3) popup_discreet_window

0x5e72,	// (0x0003621d) popup_sk_window

0xa36b,	// (0x0003a716) bg_popup_sub_pane_cp28_ParamLimits

0xa36b,	// (0x0003a716) bg_popup_sub_pane_cp28

0xed38,	// (0x0003f0e3) popup_discreet_window_g1_ParamLimits

0xed38,	// (0x0003f0e3) popup_discreet_window_g1

0xed58,	// (0x0003f103) popup_discreet_window_t1_ParamLimits

0xed58,	// (0x0003f103) popup_discreet_window_t1

0xed76,	// (0x0003f121) popup_discreet_window_t2_ParamLimits

0xed76,	// (0x0003f121) popup_discreet_window_t2

0x0002,

0xfeab,	// (0x00040256) popup_discreet_window_t_ParamLimits

0xfeab,	// (0x00040256) popup_discreet_window_t

0x91d1,	// (0x0003957c) popup_sk_window_g1

0x91db,	// (0x00039586) popup_sk_window_g2

0x0001,

0xfeb2,	// (0x0004025d) popup_sk_window_g

0x91e5,	// (0x00039590) popup_sk_window_t1

0x91f3,	// (0x0003959e) popup_sk_window_t1_copy1

0xe97e,	// (0x0003ed29) cell_ai5_widget_pane_g2_ParamLimits

0xead7,	// (0x0003ee82) cell_ai5_widget_pane_t9_ParamLimits

0xead7,	// (0x0003ee82) cell_ai5_widget_pane_t9

0x240d,	// (0x000327b8) main_fep_fshwr2_pane

0x9201,	// (0x000395ac) aid_fshwr2_btn_pane

0x920d,	// (0x000395b8) aid_fshwr2_syb_pane

0x9219,	// (0x000395c4) aid_fshwr2_txt_pane

0x9225,	// (0x000395d0) fshwr2_func_candi_pane

0x923a,	// (0x000395e5) fshwr2_hwr_syb_pane

0x924a,	// (0x000395f5) fshwr2_icf_pane

0x5d1f,	// (0x000360ca) fshwr2_icf_bg_pane

0x9273,	// (0x0003961e) fshwr2_icf_pane_t1_ParamLimits

0x9273,	// (0x0003961e) fshwr2_icf_pane_t1

0x2c65,	// (0x00033010) fshwr2_func_candi_pane_g1

0xedc8,	// (0x0003f173) fshwr2_func_candi_row_pane_ParamLimits

0xedc8,	// (0x0003f173) fshwr2_func_candi_row_pane

0x928b,	// (0x00039636) cell_fshwr2_syb_pane_ParamLimits

0x928b,	// (0x00039636) cell_fshwr2_syb_pane

0x8691,	// (0x00038a3c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8691,	// (0x00038a3c) fshwr2_hwr_syb_pane_g1

0x5d1f,	// (0x000360ca) bg_popup_call_pane_cp01

0x92a1,	// (0x0003964c) fshwr2_func_candi_cell_pane_ParamLimits

0x92a1,	// (0x0003964c) fshwr2_func_candi_cell_pane

0xa9c7,	// (0x0003ad72) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa9c7,	// (0x0003ad72) fshwr2_func_candi_cell_bg_pane

0x92ea,	// (0x00039695) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x92ea,	// (0x00039695) fshwr2_func_candi_cell_pane_g1

0x9312,	// (0x000396bd) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9312,	// (0x000396bd) fshwr2_func_candi_cell_pane_t1

0x5d1f,	// (0x000360ca) bg_button_pane_cp08

0xedd8,	// (0x0003f183) cell_fshwr2_syb_bg_pane

0x9325,	// (0x000396d0) cell_fshwr2_syb_bg_pane_g1

0x932d,	// (0x000396d8) cell_fshwr2_syb_bg_pane_t1

0x282f,	// (0x00032bda) main_tmo_pane

0xae60,	// (0x0003b20b) uni_indicator_pane_g1_ParamLimits

0xae76,	// (0x0003b221) uni_indicator_pane_g2_ParamLimits

0xae8c,	// (0x0003b237) uni_indicator_pane_g3_ParamLimits

0xaea1,	// (0x0003b24c) uni_indicator_pane_g4_ParamLimits

0xaea1,	// (0x0003b24c) uni_indicator_pane_g4

0xaeb5,	// (0x0003b260) uni_indicator_pane_g5_ParamLimits

0xaeb5,	// (0x0003b260) uni_indicator_pane_g5

0xaeb5,	// (0x0003b260) uni_indicator_pane_g6_ParamLimits

0xaeb5,	// (0x0003b260) uni_indicator_pane_g6

0xf91c,	// (0x0003fcc7) uni_indicator_pane_g_ParamLimits

0xd7f1,	// (0x0003db9c) popup_tmo_note_window_ParamLimits

0xd7f1,	// (0x0003db9c) popup_tmo_note_window

0x8a51,	// (0x00038dfc) fshwr2_bg_pane

0x9303,	// (0x000396ae) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9303,	// (0x000396ae) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb7,	// (0x00040262) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb7,	// (0x00040262) fshwr2_func_candi_cell_pane_g

0x8679,	// (0x00038a24) bg_popup_window_pane_cp01

0x933c,	// (0x000396e7) bg_popup_window_pane_g1_cp01

0xede0,	// (0x0003f18b) bg_popup_window_pane_cp22_ParamLimits

0xede0,	// (0x0003f18b) bg_popup_window_pane_cp22

0xedee,	// (0x0003f199) listscroll_tmo_link_pane_ParamLimits

0xedee,	// (0x0003f199) listscroll_tmo_link_pane

0xee2e,	// (0x0003f1d9) popup_tmo_note_window_g1_ParamLimits

0xee2e,	// (0x0003f1d9) popup_tmo_note_window_g1

0xee3b,	// (0x0003f1e6) tmo_note_info_pane_ParamLimits

0xee3b,	// (0x0003f1e6) tmo_note_info_pane

0xee55,	// (0x0003f200) list_tmo_note_info_pane_g1_ParamLimits

0xee55,	// (0x0003f200) list_tmo_note_info_pane_g1

0xee6c,	// (0x0003f217) list_tmo_note_info_pane_g2_ParamLimits

0xee6c,	// (0x0003f217) list_tmo_note_info_pane_g2

0x0001,

0xfebc,	// (0x00040267) list_tmo_note_info_pane_g_ParamLimits

0xfebc,	// (0x00040267) list_tmo_note_info_pane_g

0xee88,	// (0x0003f233) list_tmo_note_info_text_pane_ParamLimits

0xee88,	// (0x0003f233) list_tmo_note_info_text_pane

0xef09,	// (0x0003f2b4) list_tmo_link_pane

0xef16,	// (0x0003f2c1) scroll_pane_cp20

0xef23,	// (0x0003f2ce) list_single_tmo_link_pane_ParamLimits

0xef23,	// (0x0003f2ce) list_single_tmo_link_pane

0xef33,	// (0x0003f2de) list_single_tmo_link_pane_t1

0xef41,	// (0x0003f2ec) list_tmo_note_info_text_pane_t1_ParamLimits

0xef41,	// (0x0003f2ec) list_tmo_note_info_text_pane_t1

0x6b4a,	// (0x00036ef5) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6b4a,	// (0x00036ef5) aid_size_touch_scroll_bar_cp01

0x6a3c,	// (0x00036de7) aid_size_touch_slider_marker

0x5e5a,	// (0x00036205) popup_settings_window_ParamLimits

0x5e5a,	// (0x00036205) popup_settings_window

0x4885,	// (0x00034c30) popup_candi_list_indi_window

0x984e,	// (0x00039bf9) aid_touch_navi_pane_ParamLimits

0x89ac,	// (0x00038d57) rs_clock_indi_pane

0x89b5,	// (0x00038d60) sctrl_sk_bottom_pane_ParamLimits

0x89c6,	// (0x00038d71) sctrl_sk_top_pane_ParamLimits

0x8ac9,	// (0x00038e74) popup_fep_tooltip_window

0xe8fc,	// (0x0003eca7) aid_size_cell_widget_grid_ParamLimits

0xe969,	// (0x0003ed14) cell_ai5_widget_pane_g1_ParamLimits

0xe969,	// (0x0003ed14) cell_ai5_widget_pane_g1

0xe9bd,	// (0x0003ed68) cell_ai5_widget_pane_g6_ParamLimits

0xe9c9,	// (0x0003ed74) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x000401e5) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x000401e5) cell_ai5_widget_pane_g

0xeafb,	// (0x0003eea6) cell_ai5_widget_pane_t10_ParamLimits

0xeafb,	// (0x0003eea6) cell_ai5_widget_pane_t10

0xeb19,	// (0x0003eec4) grid_ai5_widget_pane_ParamLimits

0xebb1,	// (0x0003ef5c) cell_contacts_ai5_widget_pane_ParamLimits

0xebb1,	// (0x0003ef5c) cell_contacts_ai5_widget_pane

0xed8b,	// (0x0003f136) popup_discreet_window_t3_ParamLimits

0xed8b,	// (0x0003f136) popup_discreet_window_t3

0x925f,	// (0x0003960a) popup_fshwr2_char_preview_window_ParamLimits

0x925f,	// (0x0003960a) popup_fshwr2_char_preview_window

0xeea6,	// (0x0003f251) tmo_note_info_pane_t1

0xeebb,	// (0x0003f266) tmo_note_info_pane_t2

0xeed0,	// (0x0003f27b) tmo_note_info_pane_t3

0xeee5,	// (0x0003f290) tmo_note_info_pane_t4

0xeef7,	// (0x0003f2a2) tmo_note_info_pane_t5

0x0004,

0xfec1,	// (0x0004026c) tmo_note_info_pane_t

0xef09,	// (0x0003f2b4) list_tmo_link_pane_ParamLimits

0xef16,	// (0x0003f2c1) scroll_pane_cp20_ParamLimits

0x5d1f,	// (0x000360ca) bg_popup_fep_char_preview_window_cp01

0xef5a,	// (0x0003f305) popup_fshwr2_char_preview_window_t1

0xef68,	// (0x0003f313) popup_candi_list_indi_window_g1

0xef71,	// (0x0003f31c) bg_cell_contacts_ai5_widget_pane

0xef7d,	// (0x0003f328) cell_contacts_ai5_widget_pane_g1

0xc997,	// (0x0003cd42) cell_contacts_ai5_widget_pane_g2

0xef92,	// (0x0003f33d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecc,	// (0x00040277) cell_contacts_ai5_widget_pane_g

0xef9e,	// (0x0003f349) cell_contacts_ai5_widget_pane_t1

0x282f,	// (0x00032bda) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf015,	// (0x0003f3c0) settings_container_pane

0x7601,	// (0x000379ac) listscroll_set_pane_copy1

0xb9d2,	// (0x0003bd7d) scroll_pane_cp121_copy1

0xf021,	// (0x0003f3cc) set_content_pane_copy1

0xf029,	// (0x0003f3d4) aid_height_set_list_copy1_ParamLimits

0xf029,	// (0x0003f3d4) aid_height_set_list_copy1

0xb0ad,	// (0x0003b458) aid_size_parent_copy1_ParamLimits

0xb0ad,	// (0x0003b458) aid_size_parent_copy1

0xf035,	// (0x0003f3e0) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf035,	// (0x0003f3e0) button_value_adjust_pane_cp6_copy1

0x97ec,	// (0x00039b97) list_highlight_pane_cp2_copy1_ParamLimits

0x97ec,	// (0x00039b97) list_highlight_pane_cp2_copy1

0xf049,	// (0x0003f3f4) list_set_pane_copy1_ParamLimits

0xf049,	// (0x0003f3f4) list_set_pane_copy1

0xefb0,	// (0x0003f35b) main_pane_set_t1_copy1_ParamLimits

0xefb0,	// (0x0003f35b) main_pane_set_t1_copy1

0xefea,	// (0x0003f395) main_pane_set_t2_copy1_ParamLimits

0xefea,	// (0x0003f395) main_pane_set_t2_copy1

0xf0f6,	// (0x0003f4a1) main_pane_set_t3_copy1

0xf104,	// (0x0003f4af) main_pane_set_t4_copy1

0xf009,	// (0x0003f3b4) set_content_pane_g1_copy1_ParamLimits

0xf009,	// (0x0003f3b4) set_content_pane_g1_copy1

0xf112,	// (0x0003f4bd) setting_code_pane_copy1

0xf11a,	// (0x0003f4c5) setting_slider_graphic_pane_copy1

0xf11a,	// (0x0003f4c5) setting_slider_pane_copy1

0xf11a,	// (0x0003f4c5) setting_text_pane_copy1

0xf11a,	// (0x0003f4c5) setting_volume_pane_copy1

0xf112,	// (0x0003f4bd) settings_code_pane_cp2_copy1

0xf122,	// (0x0003f4cd) settings_code_pane_cp_copy1_ParamLimits

0xf122,	// (0x0003f4cd) settings_code_pane_cp_copy1

0x9345,	// (0x000396f0) volume_set_pane_copy1

0xf136,	// (0x0003f4e1) volume_set_pane_g10_copy1

0xf13e,	// (0x0003f4e9) volume_set_pane_g1_copy1

0xf146,	// (0x0003f4f1) volume_set_pane_g2_copy1

0xf14e,	// (0x0003f4f9) volume_set_pane_g3_copy1

0xf156,	// (0x0003f501) volume_set_pane_g4_copy1

0xf15e,	// (0x0003f509) volume_set_pane_g5_copy1

0xf166,	// (0x0003f511) volume_set_pane_g6_copy1

0xf16e,	// (0x0003f519) volume_set_pane_g7_copy1

0xf176,	// (0x0003f521) volume_set_pane_g8_copy1

0xf17e,	// (0x0003f529) volume_set_pane_g9_copy1

0x247d,	// (0x00032828) bg_set_opt_pane_cp_copy1_ParamLimits

0x247d,	// (0x00032828) bg_set_opt_pane_cp_copy1

0x934d,	// (0x000396f8) setting_slider_pane_t1_copy1_ParamLimits

0x934d,	// (0x000396f8) setting_slider_pane_t1_copy1

0x936b,	// (0x00039716) setting_slider_pane_t2_copy1_ParamLimits

0x936b,	// (0x00039716) setting_slider_pane_t2_copy1

0x9385,	// (0x00039730) setting_slider_pane_t3_copy1_ParamLimits

0x9385,	// (0x00039730) setting_slider_pane_t3_copy1

0x939d,	// (0x00039748) slider_set_pane_copy1_ParamLimits

0x939d,	// (0x00039748) slider_set_pane_copy1

0x288a,	// (0x00032c35) set_opt_bg_pane_g1_copy2

0x2892,	// (0x00032c3d) set_opt_bg_pane_g2_copy2

0xf186,	// (0x0003f531) set_opt_bg_pane_g3_copy2

0x28a2,	// (0x00032c4d) set_opt_bg_pane_g4_copy2

0x28aa,	// (0x00032c55) set_opt_bg_pane_g5_copy2

0x28b2,	// (0x00032c5d) set_opt_bg_pane_g6_copy2

0xf190,	// (0x0003f53b) set_opt_bg_pane_g7_copy2

0xf198,	// (0x0003f543) set_opt_bg_pane_g8_copy2

0xf1a2,	// (0x0003f54d) set_opt_bg_pane_g9_copy2

0x93b3,	// (0x0003975e) aid_size_touch_slider_mark_copy1_ParamLimits

0x93b3,	// (0x0003975e) aid_size_touch_slider_mark_copy1

0xf1ac,	// (0x0003f557) slider_set_pane_g1_copy1

0x93c7,	// (0x00039772) slider_set_pane_g2_copy1

0x8180,	// (0x0003852b) slider_set_pane_g3_copy1_ParamLimits

0x8180,	// (0x0003852b) slider_set_pane_g3_copy1

0x8194,	// (0x0003853f) slider_set_pane_g4_copy1_ParamLimits

0x8194,	// (0x0003853f) slider_set_pane_g4_copy1

0x81ac,	// (0x00038557) slider_set_pane_g5_copy1_ParamLimits

0x81ac,	// (0x00038557) slider_set_pane_g5_copy1

0x8180,	// (0x0003852b) slider_set_pane_g6_copy1_ParamLimits

0x8180,	// (0x0003852b) slider_set_pane_g6_copy1

0x93cf,	// (0x0003977a) slider_set_pane_g7_copy1_ParamLimits

0x93cf,	// (0x0003977a) slider_set_pane_g7_copy1

0x2421,	// (0x000327cc) bg_set_opt_pane_cp2_copy1

0xf1b5,	// (0x0003f560) setting_slider_graphic_pane_g1_copy1

0xf1be,	// (0x0003f569) setting_slider_graphic_pane_t1_copy1

0xf1ce,	// (0x0003f579) setting_slider_graphic_pane_t2_copy1

0xf1de,	// (0x0003f589) slider_set_pane_cp_copy1

0xf1ee,	// (0x0003f599) input_focus_pane_cp1_copy1

0xf1f7,	// (0x0003f5a2) list_set_text_pane_copy1

0xf1ff,	// (0x0003f5aa) setting_text_pane_g1_copy1

0x4f81,	// (0x0003532c) set_text_pane_t1_copy1

0xf1ee,	// (0x0003f599) input_focus_pane_cp2_copy1

0xf1ff,	// (0x0003f5aa) setting_code_pane_g1_copy1

0xf208,	// (0x0003f5b3) setting_code_pane_t1_copy1

0xb80a,	// (0x0003bbb5) list_set_graphic_pane_copy1

0x2421,	// (0x000327cc) bg_set_opt_pane_cp4_copy1

0x730c,	// (0x000376b7) list_set_graphic_pane_g1_copy1_ParamLimits

0x730c,	// (0x000376b7) list_set_graphic_pane_g1_copy1

0xf216,	// (0x0003f5c1) list_set_graphic_pane_g2_copy1

0x7324,	// (0x000376cf) list_set_graphic_pane_t1_copy1_ParamLimits

0x7324,	// (0x000376cf) list_set_graphic_pane_t1_copy1

0xc2e6,	// (0x0003c691) rs_clock_indi_pane_g1

0xf21e,	// (0x0003f5c9) rs_clock_indi_pane_t1

0xf22c,	// (0x0003f5d7) rs_indi_pane

0xf234,	// (0x0003f5df) rs_indi_pane_g1

0xf23d,	// (0x0003f5e8) rs_indi_pane_g2

0xef68,	// (0x0003f313) rs_indi_pane_g3

0x0002,

0xfed3,	// (0x0004027e) rs_indi_pane_g

0x7601,	// (0x000379ac) bg_popup_preview_window_pane_cp03

0xf246,	// (0x0003f5f1) popup_fep_tooltip_window_t1

0xcf81,	// (0x0003d32c) popup_note2_window_g2_ParamLimits

0xcf81,	// (0x0003d32c) popup_note2_window_g2

0x0001,

0xfc73,	// (0x0004001e) popup_note2_window_g_ParamLimits

0xfc73,	// (0x0004001e) popup_note2_window_g

0xd48f,	// (0x0003d83a) bg_popup_sub_pane_cp11_ParamLimits

0xd49c,	// (0x0003d847) cell_ai3_links_pane_g1_ParamLimits

0xd4b3,	// (0x0003d85e) cell_ai3_links_pane_t1

0x4f81,	// (0x0003532c) set_text_pane_t1_copy1_ParamLimits

0x7512,	// (0x000378bd) cell_graphic_popup_pane_cp2_ParamLimits

0x7512,	// (0x000378bd) cell_graphic_popup_pane_cp2

0xf254,	// (0x0003f5ff) cell_graphic_popup_pane_g1_cp2

0x26fd,	// (0x00032aa8) cell_graphic_popup_pane_g2_cp2

0xf25c,	// (0x0003f607) cell_graphic_popup_pane_g3_cp2

0xf264,	// (0x0003f60f) cell_graphic_popup_pane_t2_cp2

0x270e,	// (0x00032ab9) grid_highlight_pane_cp3_cp2

0x2ae2,	// (0x00032e8d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x282f,	// (0x00032bda) main_tmo_pane_ParamLimits

0xd7e5,	// (0x0003db90) popup_tmo_big_image_note_window

0xe958,	// (0x0003ed03) cell_ai5_widget_list_pane

0xe960,	// (0x0003ed0b) cell_ai5_widget_lrg_icon_pane

0xeea6,	// (0x0003f251) tmo_note_info_pane_t1_ParamLimits

0xeebb,	// (0x0003f266) tmo_note_info_pane_t2_ParamLimits

0xeed0,	// (0x0003f27b) tmo_note_info_pane_t3_ParamLimits

0xeee5,	// (0x0003f290) tmo_note_info_pane_t4_ParamLimits

0xeef7,	// (0x0003f2a2) tmo_note_info_pane_t5_ParamLimits

0xfec1,	// (0x0004026c) tmo_note_info_pane_t_ParamLimits

0xf015,	// (0x0003f3c0) settings_container_pane_ParamLimits

0xf1e6,	// (0x0003f591) indicator_popup_pane_cp5

0xf1e6,	// (0x0003f591) indicator_popup_pane_cp6

0xb80a,	// (0x0003bbb5) list_set_graphic_pane_copy1_ParamLimits

0x240d,	// (0x000327b8) bg_popup_window_pane_cp23

0xf272,	// (0x0003f61d) popup_tmo_big_image_note_window_g1

0xf27b,	// (0x0003f626) popup_tmo_big_image_note_window_t1

0xf28b,	// (0x0003f636) popup_tmo_big_image_note_window_t2

0xf29b,	// (0x0003f646) popup_tmo_big_image_note_window_t3

0x0002,

0xfeda,	// (0x00040285) popup_tmo_big_image_note_window_t

0xc2e6,	// (0x0003c691) cell_ai5_widget_lrg_icon_pane_g1

0xf2ab,	// (0x0003f656) cell_ai5_widget_lrg_icon_pane_t1

0xf2b9,	// (0x0003f664) cell_ai5_widget_list_row_pane_ParamLimits

0xf2b9,	// (0x0003f664) cell_ai5_widget_list_row_pane

0xf2d0,	// (0x0003f67b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2d0,	// (0x0003f67b) cell_ai5_widget_list_row_pane_g1

0xf2dd,	// (0x0003f688) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2dd,	// (0x0003f688) cell_ai5_widget_list_row_pane_t1

0xf308,	// (0x0003f6b3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf308,	// (0x0003f6b3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee1,	// (0x0004028c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee1,	// (0x0004028c) cell_ai5_widget_list_row_pane_t

0x5d1f,	// (0x000360ca) main_fep_vtchi_ss_pane

0xf34c,	// (0x0003f6f7) popup_fep_char_pre_window

0xf354,	// (0x0003f6ff) popup_fep_ituss_window

0xf375,	// (0x0003f720) popup_fep_vkbss_window

0xf394,	// (0x0003f73f) grid_vkbss_keypad_pane_ParamLimits

0xf394,	// (0x0003f73f) grid_vkbss_keypad_pane

0xf3a4,	// (0x0003f74f) ituss_keypad_pane

0x93f1,	// (0x0003979c) aid_vkbss_key_offset_ParamLimits

0x93f1,	// (0x0003979c) aid_vkbss_key_offset

0x93fd,	// (0x000397a8) cell_vkbss_key_pane_ParamLimits

0x93fd,	// (0x000397a8) cell_vkbss_key_pane

0x9b65,	// (0x00039f10) bg_cell_vkbss_key_g1_ParamLimits

0x9b65,	// (0x00039f10) bg_cell_vkbss_key_g1

0xf3b3,	// (0x0003f75e) cell_vkbss_key_3p_pane_ParamLimits

0xf3b3,	// (0x0003f75e) cell_vkbss_key_3p_pane

0xf3cd,	// (0x0003f778) cell_vkbss_key_g1_ParamLimits

0xf3cd,	// (0x0003f778) cell_vkbss_key_g1

0xf3e7,	// (0x0003f792) cell_vkbss_key_t1_ParamLimits

0xf3e7,	// (0x0003f792) cell_vkbss_key_t1

0x9413,	// (0x000397be) cell_ituss_key_pane_ParamLimits

0x9413,	// (0x000397be) cell_ituss_key_pane

0xf412,	// (0x0003f7bd) bg_cell_ituss_key_g1_ParamLimits

0xf412,	// (0x0003f7bd) bg_cell_ituss_key_g1

0xf41e,	// (0x0003f7c9) cell_ituss_key_pane_g1_ParamLimits

0xf41e,	// (0x0003f7c9) cell_ituss_key_pane_g1

0x9424,	// (0x000397cf) cell_ituss_key_pane_g2_ParamLimits

0x9424,	// (0x000397cf) cell_ituss_key_pane_g2

0x0002,

0xfee8,	// (0x00040293) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x00040293) cell_ituss_key_pane_g

0x9450,	// (0x000397fb) cell_ituss_key_t1_ParamLimits

0x9450,	// (0x000397fb) cell_ituss_key_t1

0x948a,	// (0x00039835) cell_ituss_key_t2_ParamLimits

0x948a,	// (0x00039835) cell_ituss_key_t2

0x94bb,	// (0x00039866) cell_ituss_key_t3_ParamLimits

0x94bb,	// (0x00039866) cell_ituss_key_t3

0x948a,	// (0x00039835) cell_ituss_key_t4_ParamLimits

0x948a,	// (0x00039835) cell_ituss_key_t4

0x0004,

0xfeef,	// (0x0004029a) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0004029a) cell_ituss_key_t

0xf44a,	// (0x0003f7f5) cell_vkbss_key_3p_pane_g1

0xf452,	// (0x0003f7fd) cell_vkbss_key_3p_pane_g2

0xf45a,	// (0x0003f805) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x000402a5) cell_vkbss_key_3p_pane_g

0x5d1f,	// (0x000360ca) bg_popup_fep_char_preview_window_cp02

0x94fe,	// (0x000398a9) popup_fep_char_pre_window_t1

0xe8f2,	// (0x0003ec9d) main_ai5_sk_pane

0xef71,	// (0x0003f31c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef7d,	// (0x0003f328) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc997,	// (0x0003cd42) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef92,	// (0x0003f33d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecc,	// (0x00040277) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef9e,	// (0x0003f349) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x282f,	// (0x00032bda) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf462,	// (0x0003f80d) main_ai5_sk_pane_g1

0xa1ac,	// (0x0003a557) popup_query_code_window_g1

0xf36a,	// (0x0003f715) popup_fep_vkb_icf_pane

0xf37e,	// (0x0003f729) popup_fep_vtchi_icf_pane

0xf46b,	// (0x0003f816) bg_icf_pane

0xf477,	// (0x0003f822) list_vkb_icf_pane

0xf486,	// (0x0003f831) bg_icf_pane_cp01

0xf499,	// (0x0003f844) vtchi_icf_list_pane

0xf4a9,	// (0x0003f854) list_vkb_icf_pane_t1_ParamLimits

0xf4a9,	// (0x0003f854) list_vkb_icf_pane_t1

0xf4bf,	// (0x0003f86a) vtchi_icf_list_pane_t1_ParamLimits

0xf4bf,	// (0x0003f86a) vtchi_icf_list_pane_t1

0xf354,	// (0x0003f6ff) popup_fep_ituss_window_ParamLimits

0xf37e,	// (0x0003f729) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a4,	// (0x0003f74f) ituss_keypad_pane_ParamLimits

0x93e5,	// (0x00039790) ituss_sks_pane

0xf46b,	// (0x0003f816) bg_icf_pane_ParamLimits

0xf330,	// (0x0003f6db) icf_edit_indi_pane_ParamLimits

0xf330,	// (0x0003f6db) icf_edit_indi_pane

0xf477,	// (0x0003f822) list_vkb_icf_pane_ParamLimits

0xf486,	// (0x0003f831) bg_icf_pane_cp01_ParamLimits

0xf33f,	// (0x0003f6ea) icf_edit_indi_pane_cp01_ParamLimits

0xf33f,	// (0x0003f6ea) icf_edit_indi_pane_cp01

0xf4a1,	// (0x0003f84c) vtchi_query_pane

0xc556,	// (0x0003c901) icf_edit_indi_pane_g1_ParamLimits

0xc556,	// (0x0003c901) icf_edit_indi_pane_g1

0xf531,	// (0x0003f8dc) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0003f8dc) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x000402bd) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x000402bd) icf_edit_indi_pane_g

0xf540,	// (0x0003f8eb) icf_edit_indi_pane_t1

0xf4da,	// (0x0003f885) bg_input_focus_pane_cp042

0x2771,	// (0x00032b1c) vtchi_button_pane

0xf4e3,	// (0x0003f88e) vtchi_query_pane_t1

0xf4f1,	// (0x0003f89c) vtchi_query_pane_t2

0xf4ff,	// (0x0003f8aa) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x000402ac) vtchi_query_pane_t

0x5d1f,	// (0x000360ca) bg_button_pane_cp13

0xf50d,	// (0x0003f8b8) vtchi_button_pane_g1

0x950d,	// (0x000398b8) ituss_sks_pane_g1

0x9518,	// (0x000398c3) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x000402b3) ituss_sks_pane_g

0xf515,	// (0x0003f8c0) ituss_sks_pane_t1

0xf523,	// (0x0003f8ce) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x000402b8) ituss_sks_pane_t

0xbd4c,	// (0x0003c0f7) indicator_nsta_pane_cp_g1

0xbd55,	// (0x0003c100) indicator_nsta_pane_cp_g2

0xbd5d,	// (0x0003c108) indicator_nsta_pane_cp_g3

0xbd65,	// (0x0003c110) indicator_nsta_pane_cp_g4

0xbd6d,	// (0x0003c118) indicator_nsta_pane_cp_g5

0xbd6d,	// (0x0003c118) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x0003fe5c) indicator_nsta_pane_cp_g

0xe4c9,	// (0x0003e874) cell_graphic2_pane_t2_ParamLimits

0xe4c9,	// (0x0003e874) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x0004016e) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x0004016e) cell_graphic2_pane_t

0xe4f6,	// (0x0003e8a1) cell_graphic2_control_pane_t1

0x6ff2,	// (0x0003739d) signal_pane_g3_ParamLimits

0x6ff2,	// (0x0003739d) signal_pane_g3

0x7004,	// (0x000373af) signal_pane_g4_ParamLimits

0x7004,	// (0x000373af) signal_pane_g4

0xf31a,	// (0x0003f6c5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf31a,	// (0x0003f6c5) cell_ai5_widget_list_row_pane_t3

0xf438,	// (0x0003f7e3) cell_ituss_key_pane_t1_ParamLimits

0xf438,	// (0x0003f7e3) cell_ituss_key_pane_t1

0x9dfb,	// (0x0003a1a6) form_field_data_wide_pane_vc_t2_ParamLimits

0x9dfb,	// (0x0003a1a6) form_field_data_wide_pane_vc_t2

0x9e0f,	// (0x0003a1ba) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e0f,	// (0x0003a1ba) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0003fbaf) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0003fbaf) form_field_data_wide_pane_vc_t

0xba14,	// (0x0003bdbf) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba14,	// (0x0003bdbf) form_field_slider_wide_pane_vc_t3

0xbaf2,	// (0x0003be9d) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbaf2,	// (0x0003be9d) form_field_popup_wide_pane_vc_t2

0xbb09,	// (0x0003beb4) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb09,	// (0x0003beb4) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x0003fe4b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x0003fe4b) form_field_popup_wide_pane_vc_t

0x9201,	// (0x000395ac) aid_fshwr2_btn_pane_ParamLimits

0x920d,	// (0x000395b8) aid_fshwr2_syb_pane_ParamLimits

0x9219,	// (0x000395c4) aid_fshwr2_txt_pane_ParamLimits

0x8a51,	// (0x00038dfc) fshwr2_bg_pane_ParamLimits

0x9225,	// (0x000395d0) fshwr2_func_candi_pane_ParamLimits

0x923a,	// (0x000395e5) fshwr2_hwr_syb_pane_ParamLimits

0x924a,	// (0x000395f5) fshwr2_icf_pane_ParamLimits

0x4c71,	// (0x0003501c) list_double_graphic_pane_vc_g4_ParamLimits

0x4c71,	// (0x0003501c) list_double_graphic_pane_vc_g4

0x9444,	// (0x000397ef) cell_ituss_key_pane_g3_ParamLimits

0x9444,	// (0x000397ef) cell_ituss_key_pane_g3

0x94ec,	// (0x00039897) cell_ituss_key_t5_ParamLimits

0x94ec,	// (0x00039897) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
