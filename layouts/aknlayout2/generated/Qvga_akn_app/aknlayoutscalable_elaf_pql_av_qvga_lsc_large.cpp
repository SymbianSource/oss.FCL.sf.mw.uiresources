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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000283cd };

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
0x83ea,	// (0x000307b7) Screen

0x83fc,	// (0x000307c9) application_window_ParamLimits

0x83fc,	// (0x000307c9) application_window

0x8414,	// (0x000307e1) screen_g1

0x843e,	// (0x0003080b) area_bottom_pane_ParamLimits

0x843e,	// (0x0003080b) area_bottom_pane

0x84e9,	// (0x000308b6) area_top_pane_ParamLimits

0x84e9,	// (0x000308b6) area_top_pane

0x5068,	// (0x0002d435) main_pane_ParamLimits

0x5068,	// (0x0002d435) main_pane

0x8561,	// (0x0003092e) misc_graphics

0x9dd0,	// (0x0003219d) battery_pane_ParamLimits

0x9dd0,	// (0x0003219d) battery_pane

0xd3f5,	// (0x000357c2) bg_status_flat_pane_g8

0xd3fd,	// (0x000357ca) bg_status_flat_pane_g9

0xcb55,	// (0x00034f22) context_pane_ParamLimits

0xcb55,	// (0x00034f22) context_pane

0x9f2a,	// (0x000322f7) navi_pane_ParamLimits

0x9f2a,	// (0x000322f7) navi_pane

0x9f9f,	// (0x0003236c) signal_pane_ParamLimits

0x9f9f,	// (0x0003236c) signal_pane

0x0008,

0xf883,	// (0x00037c50) bg_status_flat_pane_g

0xa02b,	// (0x000323f8) status_pane_g1_ParamLimits

0xa02b,	// (0x000323f8) status_pane_g1

0xa037,	// (0x00032404) status_pane_g2_ParamLimits

0xa037,	// (0x00032404) status_pane_g2

0xcbbb,	// (0x00034f88) status_pane_g3_ParamLimits

0xcbbb,	// (0x00034f88) status_pane_g3

0x0004,

0xf7bd,	// (0x00037b8a) status_pane_g_ParamLimits

0xf7bd,	// (0x00037b8a) status_pane_g

0xa043,	// (0x00032410) title_pane_ParamLimits

0xa043,	// (0x00032410) title_pane

0xa09e,	// (0x0003246b) uni_indicator_pane_ParamLimits

0xa09e,	// (0x0003246b) uni_indicator_pane

0xc9b7,	// (0x00034d84) bg_list_pane_ParamLimits

0xc9b7,	// (0x00034d84) bg_list_pane

0x9798,	// (0x00031b65) find_pane

0x97a0,	// (0x00031b6d) listscroll_app_pane_ParamLimits

0x97a0,	// (0x00031b6d) listscroll_app_pane

0xc9d7,	// (0x00034da4) listscroll_form_pane

0x97ac,	// (0x00031b79) listscroll_gen_pane_ParamLimits

0x97ac,	// (0x00031b79) listscroll_gen_pane

0xc9d7,	// (0x00034da4) listscroll_set_pane

0x97c1,	// (0x00031b8e) main_idle_act_pane

0xc795,	// (0x00034b62) main_idle_trad_pane

0xc795,	// (0x00034b62) main_list_empty_pane

0xc0d3,	// (0x000344a0) main_midp_pane

0xc9f1,	// (0x00034dbe) main_pane_g1_ParamLimits

0xc9f1,	// (0x00034dbe) main_pane_g1

0x97d4,	// (0x00031ba1) popup_ai_message_window_ParamLimits

0x97d4,	// (0x00031ba1) popup_ai_message_window

0x9858,	// (0x00031c25) popup_fep_china_uni_window_ParamLimits

0x9858,	// (0x00031c25) popup_fep_china_uni_window

0xca21,	// (0x00034dee) popup_fep_japan_candidate_window_ParamLimits

0xca21,	// (0x00034dee) popup_fep_japan_candidate_window

0xca3f,	// (0x00034e0c) popup_fep_japan_predictive_window_ParamLimits

0xca3f,	// (0x00034e0c) popup_fep_japan_predictive_window

0x9896,	// (0x00031c63) popup_find_window

0x98af,	// (0x00031c7c) popup_grid_graphic_window_ParamLimits

0x98af,	// (0x00031c7c) popup_grid_graphic_window

0xca6b,	// (0x00034e38) popup_large_graphic_colour_window

0x992b,	// (0x00031cf8) popup_menu_window_ParamLimits

0x992b,	// (0x00031cf8) popup_menu_window

0x9a89,	// (0x00031e56) popup_note_image_window

0x9a51,	// (0x00031e1e) popup_note_wait_window_ParamLimits

0x9a51,	// (0x00031e1e) popup_note_wait_window

0x9a9f,	// (0x00031e6c) popup_note_window_ParamLimits

0x9a9f,	// (0x00031e6c) popup_note_window

0x9b33,	// (0x00031f00) popup_query_code_window_ParamLimits

0x9b33,	// (0x00031f00) popup_query_code_window

0xca8a,	// (0x00034e57) popup_query_data_code_window_ParamLimits

0xca8a,	// (0x00034e57) popup_query_data_code_window

0x9b6b,	// (0x00031f38) popup_query_data_window_ParamLimits

0x9b6b,	// (0x00031f38) popup_query_data_window

0x9bdf,	// (0x00031fac) popup_query_sat_info_window_ParamLimits

0x9bdf,	// (0x00031fac) popup_query_sat_info_window

0x9c6c,	// (0x00032039) popup_snote_single_graphic_window_ParamLimits

0x9c6c,	// (0x00032039) popup_snote_single_graphic_window

0x9c6c,	// (0x00032039) popup_snote_single_text_window_ParamLimits

0x9c6c,	// (0x00032039) popup_snote_single_text_window

0xca9f,	// (0x00034e6c) popup_sub_window_general

0xcae1,	// (0x00034eae) popup_window_general_ParamLimits

0xcae1,	// (0x00034eae) popup_window_general

0xcaf4,	// (0x00034ec1) power_save_pane

0x9641,	// (0x00031a0e) control_pane_g1_ParamLimits

0x9641,	// (0x00031a0e) control_pane_g1

0x57ce,	// (0x0002db9b) control_pane_g2_ParamLimits

0x57ce,	// (0x0002db9b) control_pane_g2

0xc9a1,	// (0x00034d6e) control_pane_g3_ParamLimits

0xc9a1,	// (0x00034d6e) control_pane_g3

0x0007,

0xf7a5,	// (0x00037b72) control_pane_g_ParamLimits

0xf7a5,	// (0x00037b72) control_pane_g

0x969e,	// (0x00031a6b) control_pane_t1_ParamLimits

0x969e,	// (0x00031a6b) control_pane_t1

0x96fa,	// (0x00031ac7) control_pane_t2_ParamLimits

0x96fa,	// (0x00031ac7) control_pane_t2

0x0002,

0xf7b6,	// (0x00037b83) control_pane_t_ParamLimits

0xf7b6,	// (0x00037b83) control_pane_t

0xc8c4,	// (0x00034c91) navi_navi_volume_pane_cp1

0xc8cd,	// (0x00034c9a) status_small_icon_pane

0xc8d5,	// (0x00034ca2) status_small_pane_g1_ParamLimits

0xc8d5,	// (0x00034ca2) status_small_pane_g1

0xc909,	// (0x00034cd6) status_small_pane_g2_ParamLimits

0xc909,	// (0x00034cd6) status_small_pane_g2

0xc915,	// (0x00034ce2) status_small_pane_g3_ParamLimits

0xc915,	// (0x00034ce2) status_small_pane_g3

0xc921,	// (0x00034cee) status_small_pane_g4_ParamLimits

0xc921,	// (0x00034cee) status_small_pane_g4

0xc92d,	// (0x00034cfa) status_small_pane_g5_ParamLimits

0xc92d,	// (0x00034cfa) status_small_pane_g5

0xc93a,	// (0x00034d07) status_small_pane_g6_ParamLimits

0xc93a,	// (0x00034d07) status_small_pane_g6

0x0007,

0xf794,	// (0x00037b61) status_small_pane_g_ParamLimits

0xf794,	// (0x00037b61) status_small_pane_g

0xc96a,	// (0x00034d37) status_small_pane_t1

0xc98d,	// (0x00034d5a) status_small_wait_pane_ParamLimits

0xc98d,	// (0x00034d5a) status_small_wait_pane

0x94f7,	// (0x000318c4) aid_levels_signal_ParamLimits

0x94f7,	// (0x000318c4) aid_levels_signal

0x950b,	// (0x000318d8) signal_pane_g1_ParamLimits

0x950b,	// (0x000318d8) signal_pane_g1

0x9525,	// (0x000318f2) signal_pane_g2_ParamLimits

0x9525,	// (0x000318f2) signal_pane_g2

0x0001,

0xf729,	// (0x00037af6) signal_pane_g_ParamLimits

0xf729,	// (0x00037af6) signal_pane_g

0xc33a,	// (0x00034707) context_pane_g1

0x8610,	// (0x000309dd) title_pane_g1

0x865e,	// (0x00030a2b) title_pane_t1

0x86eb,	// (0x00030ab8) title_pane_t2

0x8711,	// (0x00030ade) title_pane_t3

0x0002,

0xf573,	// (0x00037940) title_pane_t

0xa0c4,	// (0x00032491) aid_levels_battery_ParamLimits

0xa0c4,	// (0x00032491) aid_levels_battery

0xa0dc,	// (0x000324a9) battery_pane_g1_ParamLimits

0xa0dc,	// (0x000324a9) battery_pane_g1

0xa0f7,	// (0x000324c4) battery_pane_g2_ParamLimits

0xa0f7,	// (0x000324c4) battery_pane_g2

0x0001,

0xf7c8,	// (0x00037b95) battery_pane_g_ParamLimits

0xf7c8,	// (0x00037b95) battery_pane_g

0xa466,	// (0x00032833) uni_indicator_pane_g1

0xa47b,	// (0x00032848) uni_indicator_pane_g2

0xa491,	// (0x0003285e) uni_indicator_pane_g3

0x0005,

0xf92b,	// (0x00037cf8) uni_indicator_pane_g

0x90f2,	// (0x000314bf) navi_icon_pane_ParamLimits

0x90f2,	// (0x000314bf) navi_icon_pane

0x8561,	// (0x0003092e) navi_midp_pane

0x8561,	// (0x0003092e) navi_navi_pane

0x90f2,	// (0x000314bf) navi_text_pane_ParamLimits

0x90f2,	// (0x000314bf) navi_text_pane

0x8414,	// (0x000307e1) status_small_wait_pane_g1

0x8c56,	// (0x00031023) status_small_wait_pane_g2

0x0001,

0xf926,	// (0x00037cf3) status_small_wait_pane_g

0xa40c,	// (0x000327d9) navi_navi_icon_text_pane

0xa414,	// (0x000327e1) navi_navi_pane_g1_ParamLimits

0xa414,	// (0x000327e1) navi_navi_pane_g1

0xa426,	// (0x000327f3) navi_navi_pane_g2_ParamLimits

0xa426,	// (0x000327f3) navi_navi_pane_g2

0x0001,

0xf8f4,	// (0x00037cc1) navi_navi_pane_g_ParamLimits

0xf8f4,	// (0x00037cc1) navi_navi_pane_g

0xa438,	// (0x00032805) navi_navi_tabs_pane

0xa40c,	// (0x000327d9) navi_navi_text_pane

0xa40c,	// (0x000327d9) navi_navi_volume_pane

0xdb20,	// (0x00035eed) navi_text_pane_t1

0xdb14,	// (0x00035ee1) navi_icon_pane_g1

0xda68,	// (0x00035e35) navi_navi_text_pane_t1

0x5b54,	// (0x0002df21) navi_navi_volume_pane_g1

0xa403,	// (0x000327d0) volume_small_pane

0xa35f,	// (0x0003272c) navi_navi_icon_text_pane_g1

0xa367,	// (0x00032734) navi_navi_icon_text_pane_t1

0xd43d,	// (0x0003580a) navi_tabs_2_long_pane

0xd43d,	// (0x0003580a) navi_tabs_2_pane

0xd43d,	// (0x0003580a) navi_tabs_3_long_pane

0xd43d,	// (0x0003580a) navi_tabs_3_pane

0xd43d,	// (0x0003580a) navi_tabs_4_pane

0xa33f,	// (0x0003270c) tabs_2_active_pane_ParamLimits

0xa33f,	// (0x0003270c) tabs_2_active_pane

0xa34f,	// (0x0003271c) tabs_2_passive_pane_ParamLimits

0xa34f,	// (0x0003271c) tabs_2_passive_pane

0xa30d,	// (0x000326da) tabs_3_active_pane_ParamLimits

0xa30d,	// (0x000326da) tabs_3_active_pane

0xa31d,	// (0x000326ea) tabs_3_passive_pane_ParamLimits

0xa31d,	// (0x000326ea) tabs_3_passive_pane

0xa32e,	// (0x000326fb) tabs_3_passive_pane_cp_ParamLimits

0xa32e,	// (0x000326fb) tabs_3_passive_pane_cp

0xa2c9,	// (0x00032696) tabs_4_active_pane_ParamLimits

0xa2c9,	// (0x00032696) tabs_4_active_pane

0xa2da,	// (0x000326a7) tabs_4_passive_pane_ParamLimits

0xa2da,	// (0x000326a7) tabs_4_passive_pane

0xa2eb,	// (0x000326b8) tabs_4_passive_pane_cp_ParamLimits

0xa2eb,	// (0x000326b8) tabs_4_passive_pane_cp

0xa2fc,	// (0x000326c9) tabs_4_passive_pane_cp2_ParamLimits

0xa2fc,	// (0x000326c9) tabs_4_passive_pane_cp2

0xa2a9,	// (0x00032676) tabs_2_long_active_pane_ParamLimits

0xa2a9,	// (0x00032676) tabs_2_long_active_pane

0xa2b9,	// (0x00032686) tabs_2_long_passive_pane_ParamLimits

0xa2b9,	// (0x00032686) tabs_2_long_passive_pane

0xa272,	// (0x0003263f) tabs_3_long_active_pane_ParamLimits

0xa272,	// (0x0003263f) tabs_3_long_active_pane

0xa285,	// (0x00032652) tabs_3_long_passive_pane_ParamLimits

0xa285,	// (0x00032652) tabs_3_long_passive_pane

0xa296,	// (0x00032663) tabs_3_long_passive_pane_cp_ParamLimits

0xa296,	// (0x00032663) tabs_3_long_passive_pane_cp

0x5a0f,	// (0x0002dddc) volume_small_pane_g1

0x5a18,	// (0x0002dde5) volume_small_pane_g2

0x5a21,	// (0x0002ddee) volume_small_pane_g3

0x5a2a,	// (0x0002ddf7) volume_small_pane_g4

0x5a33,	// (0x0002de00) volume_small_pane_g5

0x5a3c,	// (0x0002de09) volume_small_pane_g6

0x5a45,	// (0x0002de12) volume_small_pane_g7

0x5a4e,	// (0x0002de1b) volume_small_pane_g8

0x5a57,	// (0x0002de24) volume_small_pane_g9

0x5a60,	// (0x0002de2d) volume_small_pane_g10

0x0009,

0xf8c0,	// (0x00037c8d) volume_small_pane_g

0x8723,	// (0x00030af0) bg_active_tab_pane_cp2_ParamLimits

0x8723,	// (0x00030af0) bg_active_tab_pane_cp2

0x8731,	// (0x00030afe) tabs_3_active_pane_g1

0x8739,	// (0x00030b06) tabs_3_active_pane_t1

0x8723,	// (0x00030af0) bg_passive_tab_pane_cp2_ParamLimits

0x8723,	// (0x00030af0) bg_passive_tab_pane_cp2

0x8731,	// (0x00030afe) tabs_3_passive_pane_g1

0x8739,	// (0x00030b06) tabs_3_passive_pane_t1

0x8723,	// (0x00030af0) bg_active_tab_pane_cp3_ParamLimits

0x8723,	// (0x00030af0) bg_active_tab_pane_cp3

0xd9b1,	// (0x00035d7e) tabs_4_active_pane_g1

0x874f,	// (0x00030b1c) tabs_4_active_pane_t1

0x8723,	// (0x00030af0) bg_passive_tab_pane_cp3_ParamLimits

0x8723,	// (0x00030af0) bg_passive_tab_pane_cp3

0xd9b1,	// (0x00035d7e) tabs_4_1_passive_pane_g1

0x874f,	// (0x00030b1c) tabs_4_1_passive_pane_t1

0xc0d3,	// (0x000344a0) list_highlight_pane_cp2

0xa54d,	// (0x0003291a) list_set_pane_ParamLimits

0xa54d,	// (0x0003291a) list_set_pane

0xa5db,	// (0x000329a8) main_pane_set_t1_ParamLimits

0xa5db,	// (0x000329a8) main_pane_set_t1

0xa5fb,	// (0x000329c8) main_pane_set_t2_ParamLimits

0xa5fb,	// (0x000329c8) main_pane_set_t2

0xa60f,	// (0x000329dc) main_pane_set_t3_ParamLimits

0xa60f,	// (0x000329dc) main_pane_set_t3

0xa621,	// (0x000329ee) main_pane_set_t4_ParamLimits

0xa621,	// (0x000329ee) main_pane_set_t4

0x0003,

0xf990,	// (0x00037d5d) main_pane_set_t_ParamLimits

0xf990,	// (0x00037d5d) main_pane_set_t

0xa633,	// (0x00032a00) setting_code_pane

0xa63b,	// (0x00032a08) setting_slider_graphic_pane

0xa63b,	// (0x00032a08) setting_slider_pane

0xa63b,	// (0x00032a08) setting_text_pane

0xa63b,	// (0x00032a08) setting_volume_pane

0x8765,	// (0x00030b32) volume_set_pane

0x876d,	// (0x00030b3a) bg_set_opt_pane_cp

0x877b,	// (0x00030b48) setting_slider_pane_t1

0x8791,	// (0x00030b5e) setting_slider_pane_t2

0x87aa,	// (0x00030b77) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00037947) setting_slider_pane_t

0x87c1,	// (0x00030b8e) slider_set_pane

0x8561,	// (0x0003092e) bg_set_opt_pane_cp2

0x87d7,	// (0x00030ba4) setting_slider_graphic_pane_g1

0x87e0,	// (0x00030bad) setting_slider_graphic_pane_t1

0x87ef,	// (0x00030bbc) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0003794e) setting_slider_graphic_pane_t

0x87fe,	// (0x00030bcb) slider_set_pane_cp

0x8561,	// (0x0003092e) input_focus_pane_cp1

0xdf70,	// (0x0003633d) list_set_text_pane

0x8414,	// (0x000307e1) setting_text_pane_g1

0x8561,	// (0x0003092e) input_focus_pane_cp2

0x8414,	// (0x000307e1) setting_code_pane_g1

0x8806,	// (0x00030bd3) setting_code_pane_t1

0x7c1d,	// (0x0002ffea) set_text_pane_t1_ParamLimits

0x7c1d,	// (0x0002ffea) set_text_pane_t1

0x90a1,	// (0x0003146e) set_opt_bg_pane_g1

0x90a9,	// (0x00031476) set_opt_bg_pane_g2

0xa50d,	// (0x000328da) set_opt_bg_pane_g3

0x90b9,	// (0x00031486) set_opt_bg_pane_g4

0x90c1,	// (0x0003148e) set_opt_bg_pane_g5

0x90c9,	// (0x00031496) set_opt_bg_pane_g6

0xa515,	// (0x000328e2) set_opt_bg_pane_g7

0xa51d,	// (0x000328ea) set_opt_bg_pane_g8

0xa525,	// (0x000328f2) set_opt_bg_pane_g9

0x0008,

0xf97d,	// (0x00037d4a) set_opt_bg_pane_g

0xdf63,	// (0x00036330) slider_set_pane_g1

0x5bb5,	// (0x0002df82) slider_set_pane_g2

0x0006,

0xf96e,	// (0x00037d3b) slider_set_pane_g

0xa4a7,	// (0x00032874) volume_set_pane_g1

0xa4af,	// (0x0003287c) volume_set_pane_g2

0xa4b7,	// (0x00032884) volume_set_pane_g3

0xa4bf,	// (0x0003288c) volume_set_pane_g4

0xa4c7,	// (0x00032894) volume_set_pane_g5

0xa4cf,	// (0x0003289c) volume_set_pane_g6

0xa4d7,	// (0x000328a4) volume_set_pane_g7

0xa4df,	// (0x000328ac) volume_set_pane_g8

0xa4e7,	// (0x000328b4) volume_set_pane_g9

0xa4ef,	// (0x000328bc) volume_set_pane_g10

0x0009,

0xf946,	// (0x00037d13) volume_set_pane_g

0x8814,	// (0x00030be1) indicator_pane_ParamLimits

0x8814,	// (0x00030be1) indicator_pane

0x883c,	// (0x00030c09) main_idle_pane_g2_ParamLimits

0x883c,	// (0x00030c09) main_idle_pane_g2

0x886c,	// (0x00030c39) main_pane_idle_g1_ParamLimits

0x886c,	// (0x00030c39) main_pane_idle_g1

0x8891,	// (0x00030c5e) popup_clock_digital_analogue_window_ParamLimits

0x8891,	// (0x00030c5e) popup_clock_digital_analogue_window

0x88a8,	// (0x00030c75) soft_indicator_pane_ParamLimits

0x88a8,	// (0x00030c75) soft_indicator_pane

0x88c2,	// (0x00030c8f) wallpaper_pane_ParamLimits

0x88c2,	// (0x00030c8f) wallpaper_pane

0x8414,	// (0x000307e1) wallpaper_pane_g1

0x88dc,	// (0x00030ca9) indicator_pane_g1_ParamLimits

0x88dc,	// (0x00030ca9) indicator_pane_g1

0xe06a,	// (0x00036437) navi_navi_icon_text_pane_srt_g1

0x8904,	// (0x00030cd1) soft_indicator_pane_t1

0x891e,	// (0x00030ceb) aid_ps_area_pane

0x892f,	// (0x00030cfc) aid_ps_clock_pane

0x893b,	// (0x00030d08) aid_ps_indicator_pane

0x8947,	// (0x00030d14) indicator_ps_pane_ParamLimits

0x8947,	// (0x00030d14) indicator_ps_pane

0x8956,	// (0x00030d23) power_save_pane_g1_ParamLimits

0x8956,	// (0x00030d23) power_save_pane_g1

0x8962,	// (0x00030d2f) power_save_pane_g2_ParamLimits

0x8962,	// (0x00030d2f) power_save_pane_g2

0x4fe4,	// (0x0002d3b1) aid_navinavi_width_pane

0x891e,	// (0x00030ceb) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00037953) power_save_pane_g_ParamLimits

0xf586,	// (0x00037953) power_save_pane_g

0x8970,	// (0x00030d3d) power_save_pane_t1_ParamLimits

0x8970,	// (0x00030d3d) power_save_pane_t1

0x892f,	// (0x00030cfc) aid_ps_clock_pane_ParamLimits

0x893b,	// (0x00030d08) aid_ps_indicator_pane_ParamLimits

0x8982,	// (0x00030d4f) power_save_pane_t4_ParamLimits

0x8982,	// (0x00030d4f) power_save_pane_t4

0x0001,

0xf58b,	// (0x00037958) power_save_pane_t_ParamLimits

0xf58b,	// (0x00037958) power_save_pane_t

0x89ac,	// (0x00030d79) power_save_t3_ParamLimits

0x89ac,	// (0x00030d79) power_save_t3

0x8997,	// (0x00030d64) power_save_t2_ParamLimits

0x8997,	// (0x00030d64) power_save_t2

0x89c1,	// (0x00030d8e) indicator_ps_pane_g1

0x89ca,	// (0x00030d97) ai_gene_pane_ParamLimits

0x89ca,	// (0x00030d97) ai_gene_pane

0x89e1,	// (0x00030dae) ai_links_pane_ParamLimits

0x89e1,	// (0x00030dae) ai_links_pane

0x89f3,	// (0x00030dc0) indicator_pane_cp1_ParamLimits

0x89f3,	// (0x00030dc0) indicator_pane_cp1

0x8a02,	// (0x00030dcf) main_pane_idle_g1_cp_ParamLimits

0x8a02,	// (0x00030dcf) main_pane_idle_g1_cp

0x8a1a,	// (0x00030de7) popup_ai_links_title_window

0x8a23,	// (0x00030df0) soft_indicator_pane_cp1_ParamLimits

0x8a23,	// (0x00030df0) soft_indicator_pane_cp1

0xdda5,	// (0x00036172) ai_links_pane_g1

0xddae,	// (0x0003617b) grid_ai_links_pane

0xa45d,	// (0x0003282a) ai_gene_pane_1

0xdd93,	// (0x00036160) ai_gene_pane_2

0xdd9c,	// (0x00036169) list_highlight_pane_cp4

0xa441,	// (0x0003280e) cell_ai_link_pane_ParamLimits

0xa441,	// (0x0003280e) cell_ai_link_pane

0xdd8b,	// (0x00036158) cell_ai_link_pane_g1

0x8c56,	// (0x00031023) cell_ai_link_pane_g2

0x0001,

0xf921,	// (0x00037cee) cell_ai_link_pane_g

0x8561,	// (0x0003092e) grid_highlight_cp2

0x8561,	// (0x0003092e) bg_popup_sub_pane_cp1

0x8a45,	// (0x00030e12) popup_ai_links_title_window_t1

0xdcdd,	// (0x000360aa) ai_gene_pane_1_g1_ParamLimits

0xdcdd,	// (0x000360aa) ai_gene_pane_1_g1

0xdce9,	// (0x000360b6) ai_gene_pane_1_g2_ParamLimits

0xdce9,	// (0x000360b6) ai_gene_pane_1_g2

0x0001,

0xf917,	// (0x00037ce4) ai_gene_pane_1_g_ParamLimits

0xf917,	// (0x00037ce4) ai_gene_pane_1_g

0xdcf6,	// (0x000360c3) ai_gene_pane_1_t1_ParamLimits

0xdcf6,	// (0x000360c3) ai_gene_pane_1_t1

0xdd2a,	// (0x000360f7) grid_ai_soft_ind_pane

0xdcc8,	// (0x00036095) ai_gene_pane_2_t1_ParamLimits

0xdcc8,	// (0x00036095) ai_gene_pane_2_t1

0x8a54,	// (0x00030e21) main_pane_empty_t1_ParamLimits

0x8a54,	// (0x00030e21) main_pane_empty_t1

0x8a71,	// (0x00030e3e) main_pane_empty_t2_ParamLimits

0x8a71,	// (0x00030e3e) main_pane_empty_t2

0x8a89,	// (0x00030e56) main_pane_empty_t3_ParamLimits

0x8a89,	// (0x00030e56) main_pane_empty_t3

0x8a9c,	// (0x00030e69) main_pane_empty_t4_ParamLimits

0x8a9c,	// (0x00030e69) main_pane_empty_t4

0x8aaf,	// (0x00030e7c) main_pane_empty_t5_ParamLimits

0x8aaf,	// (0x00030e7c) main_pane_empty_t5

0x0004,

0xf590,	// (0x0003795d) main_pane_empty_t_ParamLimits

0xf590,	// (0x0003795d) main_pane_empty_t

0x90f2,	// (0x000314bf) bg_popup_window_pane_ParamLimits

0x90f2,	// (0x000314bf) bg_popup_window_pane

0xda77,	// (0x00035e44) find_popup_pane_cp2_ParamLimits

0xda77,	// (0x00035e44) find_popup_pane_cp2

0xda83,	// (0x00035e50) heading_pane_ParamLimits

0xda83,	// (0x00035e50) heading_pane

0x8561,	// (0x0003092e) bg_popup_sub_pane

0xa384,	// (0x00032751) bg_popup_window_pane_g1_ParamLimits

0xa384,	// (0x00032751) bg_popup_window_pane_g1

0xa393,	// (0x00032760) bg_popup_window_pane_g2_ParamLimits

0xa393,	// (0x00032760) bg_popup_window_pane_g2

0xa39f,	// (0x0003276c) bg_popup_window_pane_g3_ParamLimits

0xa39f,	// (0x0003276c) bg_popup_window_pane_g3

0xa3ab,	// (0x00032778) bg_popup_window_pane_g4_ParamLimits

0xa3ab,	// (0x00032778) bg_popup_window_pane_g4

0xa3ba,	// (0x00032787) bg_popup_window_pane_g5_ParamLimits

0xa3ba,	// (0x00032787) bg_popup_window_pane_g5

0xa3ca,	// (0x00032797) bg_popup_window_pane_g6_ParamLimits

0xa3ca,	// (0x00032797) bg_popup_window_pane_g6

0xa3d6,	// (0x000327a3) bg_popup_window_pane_g7_ParamLimits

0xa3d6,	// (0x000327a3) bg_popup_window_pane_g7

0xa3e5,	// (0x000327b2) bg_popup_window_pane_g8_ParamLimits

0xa3e5,	// (0x000327b2) bg_popup_window_pane_g8

0xa3f4,	// (0x000327c1) bg_popup_window_pane_g9_ParamLimits

0xa3f4,	// (0x000327c1) bg_popup_window_pane_g9

0xda5c,	// (0x00035e29) bg_popup_window_pane_g10_ParamLimits

0xda5c,	// (0x00035e29) bg_popup_window_pane_g10

0x0009,

0xf8df,	// (0x00037cac) bg_popup_window_pane_g_ParamLimits

0xf8df,	// (0x00037cac) bg_popup_window_pane_g

0xda13,	// (0x00035de0) bg_popup_heading_pane_ParamLimits

0xda13,	// (0x00035de0) bg_popup_heading_pane

0x5c24,	// (0x0002dff1) tabs_4_passive_pane_cp_srt_ParamLimits

0x5c24,	// (0x0002dff1) tabs_4_passive_pane_cp_srt

0x5c36,	// (0x0002e003) tabs_4_passive_pane_srt_ParamLimits

0xda27,	// (0x00035df4) heading_pane_g2

0x5c36,	// (0x0002e003) tabs_4_passive_pane_srt

0xcd9d,	// (0x0003516a) bg_passive_tab_pane_cp3_srt_ParamLimits

0xcd9d,	// (0x0003516a) bg_passive_tab_pane_cp3_srt

0xda2f,	// (0x00035dfc) heading_pane_t1_ParamLimits

0xda2f,	// (0x00035dfc) heading_pane_t1

0xda46,	// (0x00035e13) heading_pane_t2_ParamLimits

0xda46,	// (0x00035e13) heading_pane_t2

0x0001,

0xf8da,	// (0x00037ca7) heading_pane_t_ParamLimits

0xf8da,	// (0x00037ca7) heading_pane_t

0xd3bd,	// (0x0003578a) bg_popup_heading_pane_g1

0xd44e,	// (0x0003581b) bg_popup_heading_pane_g2

0xd456,	// (0x00035823) bg_popup_heading_pane_g3

0xd45e,	// (0x0003582b) bg_popup_heading_pane_g4

0xd466,	// (0x00035833) bg_popup_heading_pane_g5

0xd46e,	// (0x0003583b) bg_popup_heading_pane_g6

0xd476,	// (0x00035843) bg_popup_heading_pane_g7

0xd47e,	// (0x0003584b) bg_popup_heading_pane_g8

0xd486,	// (0x00035853) bg_popup_heading_pane_g9

0x0008,

0xf896,	// (0x00037c63) bg_popup_heading_pane_g

0xcca3,	// (0x00035070) bg_popup_sub_pane_g1

0xccab,	// (0x00035078) bg_popup_sub_pane_g2

0xccb3,	// (0x00035080) bg_popup_sub_pane_g3

0xccbb,	// (0x00035088) bg_popup_sub_pane_g4

0xccc3,	// (0x00035090) bg_popup_sub_pane_g5

0xcccb,	// (0x00035098) bg_popup_sub_pane_g6

0xccd3,	// (0x000350a0) bg_popup_sub_pane_g7

0xccdb,	// (0x000350a8) bg_popup_sub_pane_g8

0xcce3,	// (0x000350b0) bg_popup_sub_pane_g9

0x0008,

0xf870,	// (0x00037c3d) bg_popup_sub_pane_g

0x8723,	// (0x00030af0) bg_popup_window_pane_cp5_ParamLimits

0x8723,	// (0x00030af0) bg_popup_window_pane_cp5

0x8ad0,	// (0x00030e9d) popup_note_window_g1_ParamLimits

0x8ad0,	// (0x00030e9d) popup_note_window_g1

0x8adc,	// (0x00030ea9) popup_note_window_t1_ParamLimits

0x8adc,	// (0x00030ea9) popup_note_window_t1

0x8af2,	// (0x00030ebf) popup_note_window_t2_ParamLimits

0x8af2,	// (0x00030ebf) popup_note_window_t2

0x8b08,	// (0x00030ed5) popup_note_window_t3_ParamLimits

0x8b08,	// (0x00030ed5) popup_note_window_t3

0x8b1e,	// (0x00030eeb) popup_note_window_t4_ParamLimits

0x8b1e,	// (0x00030eeb) popup_note_window_t4

0x8b46,	// (0x00030f13) popup_note_window_t5_ParamLimits

0x8b46,	// (0x00030f13) popup_note_window_t5

0x0004,

0xf59b,	// (0x00037968) popup_note_window_t_ParamLimits

0xf59b,	// (0x00037968) popup_note_window_t

0x8b6a,	// (0x00030f37) bg_popup_window_pane_cp6_ParamLimits

0x8b6a,	// (0x00030f37) bg_popup_window_pane_cp6

0xd339,	// (0x00035706) popup_note_image_window_g1_ParamLimits

0xd339,	// (0x00035706) popup_note_image_window_g1

0xd345,	// (0x00035712) popup_note_image_window_g2_ParamLimits

0xd345,	// (0x00035712) popup_note_image_window_g2

0x0001,

0xf864,	// (0x00037c31) popup_note_image_window_g_ParamLimits

0xf864,	// (0x00037c31) popup_note_image_window_g

0xd35e,	// (0x0003572b) popup_note_image_window_t1_ParamLimits

0xd35e,	// (0x0003572b) popup_note_image_window_t1

0xd377,	// (0x00035744) popup_note_image_window_t2_ParamLimits

0xd377,	// (0x00035744) popup_note_image_window_t2

0xd390,	// (0x0003575d) popup_note_image_window_t3_ParamLimits

0xd390,	// (0x0003575d) popup_note_image_window_t3

0x0002,

0xf869,	// (0x00037c36) popup_note_image_window_t_ParamLimits

0xf869,	// (0x00037c36) popup_note_image_window_t

0xd224,	// (0x000355f1) bg_popup_window_pane_cp7_ParamLimits

0xd224,	// (0x000355f1) bg_popup_window_pane_cp7

0xd254,	// (0x00035621) popup_note_wait_window_g1_ParamLimits

0xd254,	// (0x00035621) popup_note_wait_window_g1

0xd260,	// (0x0003562d) popup_note_wait_window_g2_ParamLimits

0xd260,	// (0x0003562d) popup_note_wait_window_g2

0x0002,

0xf852,	// (0x00037c1f) popup_note_wait_window_g_ParamLimits

0xf852,	// (0x00037c1f) popup_note_wait_window_g

0xd278,	// (0x00035645) popup_note_wait_window_t1_ParamLimits

0xd278,	// (0x00035645) popup_note_wait_window_t1

0xd29f,	// (0x0003566c) popup_note_wait_window_t2_ParamLimits

0xd29f,	// (0x0003566c) popup_note_wait_window_t2

0xd2bc,	// (0x00035689) popup_note_wait_window_t3_ParamLimits

0xd2bc,	// (0x00035689) popup_note_wait_window_t3

0xd2cf,	// (0x0003569c) popup_note_wait_window_t4_ParamLimits

0xd2cf,	// (0x0003569c) popup_note_wait_window_t4

0x0004,

0xf859,	// (0x00037c26) popup_note_wait_window_t_ParamLimits

0xf859,	// (0x00037c26) popup_note_wait_window_t

0xd2f4,	// (0x000356c1) wait_bar_pane_ParamLimits

0xd2f4,	// (0x000356c1) wait_bar_pane

0x8561,	// (0x0003092e) wait_anim_pane

0x8561,	// (0x0003092e) wait_border_pane

0x8414,	// (0x000307e1) wait_anim_pane_g1

0x8414,	// (0x000307e1) wait_anim_pane_g2

0x0001,

0xf724,	// (0x00037af1) wait_anim_pane_g

0xd1d4,	// (0x000355a1) wait_border_pane_g1

0xd1dd,	// (0x000355aa) wait_border_pane_g2

0xd1e6,	// (0x000355b3) wait_border_pane_g3

0x0002,

0xf84b,	// (0x00037c18) wait_border_pane_g

0xd044,	// (0x00035411) bg_popup_window_pane_cp16_ParamLimits

0xd044,	// (0x00035411) bg_popup_window_pane_cp16

0xd144,	// (0x00035511) indicator_popup_pane_cp4_ParamLimits

0xd144,	// (0x00035511) indicator_popup_pane_cp4

0xd158,	// (0x00035525) popup_query_data_window_t1_ParamLimits

0xd158,	// (0x00035525) popup_query_data_window_t1

0xd16a,	// (0x00035537) popup_query_data_window_t2_ParamLimits

0xd16a,	// (0x00035537) popup_query_data_window_t2

0xd183,	// (0x00035550) popup_query_data_window_t3_ParamLimits

0xd183,	// (0x00035550) popup_query_data_window_t3

0x0002,

0xf844,	// (0x00037c11) popup_query_data_window_t_ParamLimits

0xf844,	// (0x00037c11) popup_query_data_window_t

0xd19d,	// (0x0003556a) query_popup_data_pane_ParamLimits

0xd19d,	// (0x0003556a) query_popup_data_pane

0xd1b1,	// (0x0003557e) query_popup_data_pane_cp1_ParamLimits

0xd1b1,	// (0x0003557e) query_popup_data_pane_cp1

0xd044,	// (0x00035411) bg_popup_window_pane_cp10_ParamLimits

0xd044,	// (0x00035411) bg_popup_window_pane_cp10

0xd076,	// (0x00035443) indicator_popup_pane_ParamLimits

0xd076,	// (0x00035443) indicator_popup_pane

0xd098,	// (0x00035465) popup_query_code_window_t1_ParamLimits

0xd098,	// (0x00035465) popup_query_code_window_t1

0xd0b2,	// (0x0003547f) popup_query_code_window_t2_ParamLimits

0xd0b2,	// (0x0003547f) popup_query_code_window_t2

0xd0fb,	// (0x000354c8) popup_query_code_window_t3_ParamLimits

0xd0fb,	// (0x000354c8) popup_query_code_window_t3

0x0002,

0xf83d,	// (0x00037c0a) popup_query_code_window_t_ParamLimits

0xf83d,	// (0x00037c0a) popup_query_code_window_t

0xd12a,	// (0x000354f7) query_popup_pane_ParamLimits

0xd12a,	// (0x000354f7) query_popup_pane

0x8b6a,	// (0x00030f37) bg_popup_window_pane_cp15_ParamLimits

0x8b6a,	// (0x00030f37) bg_popup_window_pane_cp15

0x8b88,	// (0x00030f55) indicator_popup_pane_cp1_ParamLimits

0x8b88,	// (0x00030f55) indicator_popup_pane_cp1

0x8b9b,	// (0x00030f68) indicator_popup_pane_cp2_ParamLimits

0x8b9b,	// (0x00030f68) indicator_popup_pane_cp2

0x8bae,	// (0x00030f7b) popup_query_data_code_window_g1_ParamLimits

0x8bae,	// (0x00030f7b) popup_query_data_code_window_g1

0x8bc1,	// (0x00030f8e) popup_query_data_code_window_t1_ParamLimits

0x8bc1,	// (0x00030f8e) popup_query_data_code_window_t1

0x8bd3,	// (0x00030fa0) popup_query_data_code_window_t2_ParamLimits

0x8bd3,	// (0x00030fa0) popup_query_data_code_window_t2

0x8be5,	// (0x00030fb2) popup_query_data_code_window_t3_ParamLimits

0x8be5,	// (0x00030fb2) popup_query_data_code_window_t3

0x8bfb,	// (0x00030fc8) popup_query_data_code_window_t4_ParamLimits

0x8bfb,	// (0x00030fc8) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00037973) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00037973) popup_query_data_code_window_t

0xc616,	// (0x000349e3) list_single_midp_graphic_pane_g3

0x8c13,	// (0x00030fe0) query_popup_data_pane_cp2_ParamLimits

0x8c26,	// (0x00030ff3) query_popup_pane_cp2_ParamLimits

0x8c26,	// (0x00030ff3) query_popup_pane_cp2

0x8561,	// (0x0003092e) bg_popup_window_pane_cp11

0xd03c,	// (0x00035409) heading_pane_cp5

0x8d0a,	// (0x000310d7) listscroll_popup_info_pane

0x8561,	// (0x0003092e) input_focus_pane_cp3

0x8c39,	// (0x00031006) query_popup_pane_t1

0x8c47,	// (0x00031014) list_popup_info_pane_ParamLimits

0x8c47,	// (0x00031014) list_popup_info_pane

0x8c56,	// (0x00031023) listscroll_popup_info_pane_g1

0x8c5e,	// (0x0003102b) scroll_pane_cp7

0x8c66,	// (0x00031033) popup_info_list_pane_t1_ParamLimits

0x8c66,	// (0x00031033) popup_info_list_pane_t1

0x8c80,	// (0x0003104d) popup_info_list_pane_t2_ParamLimits

0x8c80,	// (0x0003104d) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0003797c) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0003797c) popup_info_list_pane_t

0x8561,	// (0x0003092e) bg_popup_window_pane_cp12

0xe084,	// (0x00036451) find_popup_pane

0x876d,	// (0x00030b3a) bg_popup_window_pane_cp3

0x8c9a,	// (0x00031067) heading_pane_cp3

0x8ca6,	// (0x00031073) listscroll_popup_graphic_pane

0x8561,	// (0x0003092e) bg_popup_window_pane_cp4

0x8d02,	// (0x000310cf) heading_pane_cp4

0x8d0a,	// (0x000310d7) listscroll_popup_colour_pane

0x8d12,	// (0x000310df) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8d12,	// (0x000310df) cell_large_graphic_colour_none_popup_pane

0x8d22,	// (0x000310ef) grid_large_graphic_colour_popup_pane_ParamLimits

0x8d22,	// (0x000310ef) grid_large_graphic_colour_popup_pane

0x8d3e,	// (0x0003110b) listscroll_popup_colour_pane_g1_ParamLimits

0x8d3e,	// (0x0003110b) listscroll_popup_colour_pane_g1

0x8d55,	// (0x00031122) listscroll_popup_colour_pane_g2_ParamLimits

0x8d55,	// (0x00031122) listscroll_popup_colour_pane_g2

0x8d69,	// (0x00031136) listscroll_popup_colour_pane_g3_ParamLimits

0x8d69,	// (0x00031136) listscroll_popup_colour_pane_g3

0x8d79,	// (0x00031146) listscroll_popup_colour_pane_g4_ParamLimits

0x8d79,	// (0x00031146) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00037981) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00037981) listscroll_popup_colour_pane_g

0x8d88,	// (0x00031155) scroll_pane_cp6_ParamLimits

0x8d88,	// (0x00031155) scroll_pane_cp6

0x8d9a,	// (0x00031167) cell_large_graphic_colour_popup_pane_ParamLimits

0x8d9a,	// (0x00031167) cell_large_graphic_colour_popup_pane

0x8db9,	// (0x00031186) cell_large_graphic_colour_none_popup_pane_t1

0x8561,	// (0x0003092e) grid_highlight_pane_cp5

0x8dc8,	// (0x00031195) cell_large_graphic_colour_popup_pane_g1

0x8dd0,	// (0x0003119d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0003798a) cell_large_graphic_colour_popup_pane_g

0x8dd8,	// (0x000311a5) cell_large_graphic_colour_popup_pane_g2_copy1

0x8de1,	// (0x000311ae) grid_highlight_pane_cp4

0x8de9,	// (0x000311b6) bg_popup_window_pane_cp8_ParamLimits

0x8de9,	// (0x000311b6) bg_popup_window_pane_cp8

0x8e04,	// (0x000311d1) popup_snote_single_text_window_g1_ParamLimits

0x8e04,	// (0x000311d1) popup_snote_single_text_window_g1

0x8e16,	// (0x000311e3) popup_snote_single_text_window_t1_ParamLimits

0x8e16,	// (0x000311e3) popup_snote_single_text_window_t1

0x8e29,	// (0x000311f6) popup_snote_single_text_window_t2_ParamLimits

0x8e29,	// (0x000311f6) popup_snote_single_text_window_t2

0x8e3c,	// (0x00031209) popup_snote_single_text_window_t3_ParamLimits

0x8e3c,	// (0x00031209) popup_snote_single_text_window_t3

0x8e75,	// (0x00031242) popup_snote_single_text_window_t4_ParamLimits

0x8e75,	// (0x00031242) popup_snote_single_text_window_t4

0x8ea9,	// (0x00031276) popup_snote_single_text_window_t5_ParamLimits

0x8ea9,	// (0x00031276) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0003798f) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0003798f) popup_snote_single_text_window_t

0x8ed8,	// (0x000312a5) bg_popup_window_pane_cp9_ParamLimits

0x8ed8,	// (0x000312a5) bg_popup_window_pane_cp9

0x8e04,	// (0x000311d1) popup_snote_single_graphic_window_g1_ParamLimits

0x8e04,	// (0x000311d1) popup_snote_single_graphic_window_g1

0x8ee6,	// (0x000312b3) popup_snote_single_graphic_window_g2_ParamLimits

0x8ee6,	// (0x000312b3) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0003799a) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0003799a) popup_snote_single_graphic_window_g

0x8ef2,	// (0x000312bf) popup_snote_single_graphic_window_t1_ParamLimits

0x8ef2,	// (0x000312bf) popup_snote_single_graphic_window_t1

0x8f05,	// (0x000312d2) popup_snote_single_graphic_window_t2_ParamLimits

0x8f05,	// (0x000312d2) popup_snote_single_graphic_window_t2

0x8e3c,	// (0x00031209) popup_snote_single_graphic_window_t3_ParamLimits

0x8e3c,	// (0x00031209) popup_snote_single_graphic_window_t3

0x8e75,	// (0x00031242) popup_snote_single_graphic_window_t4_ParamLimits

0x8e75,	// (0x00031242) popup_snote_single_graphic_window_t4

0x8ea9,	// (0x00031276) popup_snote_single_graphic_window_t5_ParamLimits

0x8ea9,	// (0x00031276) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0003799f) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0003799f) popup_snote_single_graphic_window_t

0xa735,	// (0x00032b02) grid_graphic_popup_pane_ParamLimits

0xa735,	// (0x00032b02) grid_graphic_popup_pane

0xa758,	// (0x00032b25) listscroll_popup_graphic_pane_g1_ParamLimits

0xa758,	// (0x00032b25) listscroll_popup_graphic_pane_g1

0xa76c,	// (0x00032b39) listscroll_popup_graphic_pane_g2_ParamLimits

0xa76c,	// (0x00032b39) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ba,	// (0x00037d87) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ba,	// (0x00037d87) listscroll_popup_graphic_pane_g

0xd9d3,	// (0x00035da0) scroll_pane_cp5

0xa6f0,	// (0x00032abd) cell_graphic_popup_pane_ParamLimits

0xa6f0,	// (0x00032abd) cell_graphic_popup_pane

0xe02d,	// (0x000363fa) cell_graphic_popup_pane_g1

0xe035,	// (0x00036402) cell_graphic_popup_pane_g2

0x8dd8,	// (0x000311a5) cell_graphic_popup_pane_g3

0x0002,

0xf9b3,	// (0x00037d80) cell_graphic_popup_pane_g

0xe03e,	// (0x0003640b) cell_graphic_popup_pane_t2

0x8de1,	// (0x000311ae) grid_highlight_pane_cp3

0x8f2a,	// (0x000312f7) list_gen_pane_ParamLimits

0x8f2a,	// (0x000312f7) list_gen_pane

0x8f5b,	// (0x00031328) scroll_pane

0xa6c3,	// (0x00032a90) bg_list_pane_g1_ParamLimits

0xa6c3,	// (0x00032a90) bg_list_pane_g1

0xdfe4,	// (0x000363b1) bg_list_pane_g2_ParamLimits

0xdfe4,	// (0x000363b1) bg_list_pane_g2

0xdff7,	// (0x000363c4) bg_list_pane_g3_ParamLimits

0xdff7,	// (0x000363c4) bg_list_pane_g3

0xe009,	// (0x000363d6) bg_list_pane_g4_ParamLimits

0xe009,	// (0x000363d6) bg_list_pane_g4

0xa6de,	// (0x00032aab) bg_list_pane_g5_ParamLimits

0xa6de,	// (0x00032aab) bg_list_pane_g5

0x0004,

0xf9a8,	// (0x00037d75) bg_list_pane_g_ParamLimits

0xf9a8,	// (0x00037d75) bg_list_pane_g

0xa668,	// (0x00032a35) list_double2_graphic_large_graphic_pane_ParamLimits

0xa668,	// (0x00032a35) list_double2_graphic_large_graphic_pane

0xa668,	// (0x00032a35) list_double2_graphic_pane_ParamLimits

0xa668,	// (0x00032a35) list_double2_graphic_pane

0xa668,	// (0x00032a35) list_double2_large_graphic_pane_ParamLimits

0xa668,	// (0x00032a35) list_double2_large_graphic_pane

0xa668,	// (0x00032a35) list_double2_pane_ParamLimits

0xa668,	// (0x00032a35) list_double2_pane

0xa668,	// (0x00032a35) list_double_graphic_heading_pane_ParamLimits

0xa668,	// (0x00032a35) list_double_graphic_heading_pane

0xa668,	// (0x00032a35) list_double_graphic_pane_ParamLimits

0xa668,	// (0x00032a35) list_double_graphic_pane

0xa668,	// (0x00032a35) list_double_heading_pane_ParamLimits

0xa668,	// (0x00032a35) list_double_heading_pane

0xa668,	// (0x00032a35) list_double_large_graphic_pane_ParamLimits

0xa668,	// (0x00032a35) list_double_large_graphic_pane

0xa668,	// (0x00032a35) list_double_number_pane_ParamLimits

0xa668,	// (0x00032a35) list_double_number_pane

0xa668,	// (0x00032a35) list_double_pane_ParamLimits

0xa668,	// (0x00032a35) list_double_pane

0xa668,	// (0x00032a35) list_double_time_pane_ParamLimits

0xa668,	// (0x00032a35) list_double_time_pane

0xa668,	// (0x00032a35) list_setting_number_pane_ParamLimits

0xa668,	// (0x00032a35) list_setting_number_pane

0xa668,	// (0x00032a35) list_setting_pane_ParamLimits

0xa668,	// (0x00032a35) list_setting_pane

0xa679,	// (0x00032a46) list_single_2graphic_pane_ParamLimits

0xa679,	// (0x00032a46) list_single_2graphic_pane

0xa679,	// (0x00032a46) list_single_graphic_heading_pane_ParamLimits

0xa679,	// (0x00032a46) list_single_graphic_heading_pane

0xa679,	// (0x00032a46) list_single_graphic_pane_ParamLimits

0xa679,	// (0x00032a46) list_single_graphic_pane

0xa679,	// (0x00032a46) list_single_heading_pane_ParamLimits

0xa679,	// (0x00032a46) list_single_heading_pane

0xa6b1,	// (0x00032a7e) list_single_large_graphic_pane_ParamLimits

0xa6b1,	// (0x00032a7e) list_single_large_graphic_pane

0xa679,	// (0x00032a46) list_single_number_heading_pane_ParamLimits

0xa679,	// (0x00032a46) list_single_number_heading_pane

0xa679,	// (0x00032a46) list_single_number_pane_ParamLimits

0xa679,	// (0x00032a46) list_single_number_pane

0xa679,	// (0x00032a46) list_single_pane_ParamLimits

0xa679,	// (0x00032a46) list_single_pane

0x8561,	// (0x0003092e) list_highlight_pane_cp1

0x5318,	// (0x0002d6e5) list_single_pane_g1_ParamLimits

0x5318,	// (0x0002d6e5) list_single_pane_g1

0x5324,	// (0x0002d6f1) list_single_pane_g2_ParamLimits

0x5324,	// (0x0002d6f1) list_single_pane_g2

0x0001,

0xf5ee,	// (0x000379bb) list_single_pane_g_ParamLimits

0xf5ee,	// (0x000379bb) list_single_pane_g

0x43eb,	// (0x0002c7b8) list_single_pane_t1_ParamLimits

0x43eb,	// (0x0002c7b8) list_single_pane_t1

0x5318,	// (0x0002d6e5) list_single_number_pane_g1_ParamLimits

0x5318,	// (0x0002d6e5) list_single_number_pane_g1

0x5324,	// (0x0002d6f1) list_single_number_pane_g2_ParamLimits

0x5324,	// (0x0002d6f1) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x000379bb) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x000379bb) list_single_number_pane_g

0x4468,	// (0x0002c835) list_single_number_pane_t1_ParamLimits

0x4468,	// (0x0002c835) list_single_number_pane_t1

0x81d7,	// (0x000305a4) list_single_number_pane_t2_ParamLimits

0x81d7,	// (0x000305a4) list_single_number_pane_t2

0x0001,

0xf969,	// (0x00037d36) list_single_number_pane_t_ParamLimits

0xf969,	// (0x00037d36) list_single_number_pane_t

0x4490,	// (0x0002c85d) list_single_graphic_pane_g1_ParamLimits

0x4490,	// (0x0002c85d) list_single_graphic_pane_g1

0x5318,	// (0x0002d6e5) list_single_graphic_pane_g2_ParamLimits

0x5318,	// (0x0002d6e5) list_single_graphic_pane_g2

0x5324,	// (0x0002d6f1) list_single_graphic_pane_g3_ParamLimits

0x5324,	// (0x0002d6f1) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x000379aa) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x000379aa) list_single_graphic_pane_g

0x4468,	// (0x0002c835) list_single_graphic_pane_t1_ParamLimits

0x4468,	// (0x0002c835) list_single_graphic_pane_t1

0x7c36,	// (0x00030003) list_single_heading_pane_g1_ParamLimits

0x7c36,	// (0x00030003) list_single_heading_pane_g1

0x5324,	// (0x0002d6f1) list_single_heading_pane_g2_ParamLimits

0x5324,	// (0x0002d6f1) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x000379b1) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x000379b1) list_single_heading_pane_g

0x7c49,	// (0x00030016) list_single_heading_pane_t1_ParamLimits

0x7c49,	// (0x00030016) list_single_heading_pane_t1

0x8f90,	// (0x0003135d) list_single_heading_pane_t2_ParamLimits

0x8f90,	// (0x0003135d) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x000379b6) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x000379b6) list_single_heading_pane_t

0x5318,	// (0x0002d6e5) list_single_number_heading_pane_g1_ParamLimits

0x5318,	// (0x0002d6e5) list_single_number_heading_pane_g1

0x5324,	// (0x0002d6f1) list_single_number_heading_pane_g2_ParamLimits

0x5324,	// (0x0002d6f1) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x000379bb) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x000379bb) list_single_number_heading_pane_g

0x7c5f,	// (0x0003002c) list_single_number_heading_pane_t1_ParamLimits

0x7c5f,	// (0x0003002c) list_single_number_heading_pane_t1

0x7c75,	// (0x00030042) list_single_number_heading_pane_t2_ParamLimits

0x7c75,	// (0x00030042) list_single_number_heading_pane_t2

0x4bad,	// (0x0002cf7a) list_single_number_heading_pane_t3_ParamLimits

0x4bad,	// (0x0002cf7a) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x000379c0) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x000379c0) list_single_number_heading_pane_t

0x7c87,	// (0x00030054) list_single_graphic_heading_pane_g1_ParamLimits

0x7c87,	// (0x00030054) list_single_graphic_heading_pane_g1

0x8fa2,	// (0x0003136f) list_single_graphic_heading_pane_g4_ParamLimits

0x8fa2,	// (0x0003136f) list_single_graphic_heading_pane_g4

0x5324,	// (0x0002d6f1) list_single_graphic_heading_pane_g5_ParamLimits

0x5324,	// (0x0002d6f1) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x000379c7) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x000379c7) list_single_graphic_heading_pane_g

0x7c5f,	// (0x0003002c) list_single_graphic_heading_pane_t1_ParamLimits

0x7c5f,	// (0x0003002c) list_single_graphic_heading_pane_t1

0x7c9d,	// (0x0003006a) list_single_graphic_heading_pane_t2_ParamLimits

0x7c9d,	// (0x0003006a) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x000379ce) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x000379ce) list_single_graphic_heading_pane_t

0x52ec,	// (0x0002d6b9) list_single_large_graphic_pane_g1_ParamLimits

0x52ec,	// (0x0002d6b9) list_single_large_graphic_pane_g1

0x52f8,	// (0x0002d6c5) list_single_large_graphic_pane_g2_ParamLimits

0x52f8,	// (0x0002d6c5) list_single_large_graphic_pane_g2

0x5304,	// (0x0002d6d1) list_single_large_graphic_pane_g3_ParamLimits

0x5304,	// (0x0002d6d1) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x000379d3) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x000379d3) list_single_large_graphic_pane_g

0xd1dd,	// (0x000355aa) wait_border_pane_g2_copy1

0x5310,	// (0x0002d6dd) list_single_large_graphic_pane_g4_cp2

0x43d5,	// (0x0002c7a2) list_single_large_graphic_pane_t1_ParamLimits

0x43d5,	// (0x0002c7a2) list_single_large_graphic_pane_t1

0x8fb3,	// (0x00031380) list_double_pane_g1_ParamLimits

0x8fb3,	// (0x00031380) list_double_pane_g1

0x8fbf,	// (0x0003138c) list_double_pane_g2_ParamLimits

0x8fbf,	// (0x0003138c) list_double_pane_g2

0x0001,

0xf60d,	// (0x000379da) list_double_pane_g_ParamLimits

0xf60d,	// (0x000379da) list_double_pane_g

0x7cb5,	// (0x00030082) list_double_pane_t1_ParamLimits

0x7cb5,	// (0x00030082) list_double_pane_t1

0x7ccb,	// (0x00030098) list_double_pane_t2_ParamLimits

0x7ccb,	// (0x00030098) list_double_pane_t2

0x0001,

0xf612,	// (0x000379df) list_double_pane_t_ParamLimits

0xf612,	// (0x000379df) list_double_pane_t

0x7cdd,	// (0x000300aa) list_double2_pane_g1_ParamLimits

0x7cdd,	// (0x000300aa) list_double2_pane_g1

0x7cee,	// (0x000300bb) list_double2_pane_g2_ParamLimits

0x7cee,	// (0x000300bb) list_double2_pane_g2

0x0001,

0xf617,	// (0x000379e4) list_double2_pane_g_ParamLimits

0xf617,	// (0x000379e4) list_double2_pane_g

0x7cfa,	// (0x000300c7) list_double2_pane_t1_ParamLimits

0x7cfa,	// (0x000300c7) list_double2_pane_t1

0x7d10,	// (0x000300dd) list_double2_pane_t2_ParamLimits

0x7d10,	// (0x000300dd) list_double2_pane_t2

0x0001,

0xf61c,	// (0x000379e9) list_double2_pane_t_ParamLimits

0xf61c,	// (0x000379e9) list_double2_pane_t

0x8fb3,	// (0x00031380) list_double_number_pane_g1_ParamLimits

0x8fb3,	// (0x00031380) list_double_number_pane_g1

0x8fbf,	// (0x0003138c) list_double_number_pane_g2_ParamLimits

0x8fbf,	// (0x0003138c) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x000379da) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x000379da) list_double_number_pane_g

0x7d22,	// (0x000300ef) list_double_number_pane_t1_ParamLimits

0x7d22,	// (0x000300ef) list_double_number_pane_t1

0x7d34,	// (0x00030101) list_double_number_pane_t2_ParamLimits

0x7d34,	// (0x00030101) list_double_number_pane_t2

0x7d4a,	// (0x00030117) list_double_number_pane_t3_ParamLimits

0x7d4a,	// (0x00030117) list_double_number_pane_t3

0x0002,

0xf621,	// (0x000379ee) list_double_number_pane_t_ParamLimits

0xf621,	// (0x000379ee) list_double_number_pane_t

0x45be,	// (0x0002c98b) list_double_graphic_pane_g1_ParamLimits

0x45be,	// (0x0002c98b) list_double_graphic_pane_g1

0x8fcb,	// (0x00031398) list_double_graphic_pane_g2_ParamLimits

0x8fcb,	// (0x00031398) list_double_graphic_pane_g2

0x8fda,	// (0x000313a7) list_double_graphic_pane_g3_ParamLimits

0x8fda,	// (0x000313a7) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x000379f5) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x000379f5) list_double_graphic_pane_g

0x7d68,	// (0x00030135) list_double_graphic_pane_t1_ParamLimits

0x7d68,	// (0x00030135) list_double_graphic_pane_t1

0x7d7e,	// (0x0003014b) list_double_graphic_pane_t2_ParamLimits

0x7d7e,	// (0x0003014b) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x000379fe) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x000379fe) list_double_graphic_pane_t

0x4312,	// (0x0002c6df) list_double2_graphic_pane_g1_ParamLimits

0x4312,	// (0x0002c6df) list_double2_graphic_pane_g1

0x52c5,	// (0x0002d692) list_double2_graphic_pane_g2_ParamLimits

0x52c5,	// (0x0002d692) list_double2_graphic_pane_g2

0x52d1,	// (0x0002d69e) list_double2_graphic_pane_g3_ParamLimits

0x52d1,	// (0x0002d69e) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x00037a03) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x00037a03) list_double2_graphic_pane_g

0x431e,	// (0x0002c6eb) list_double2_graphic_pane_t1_ParamLimits

0x431e,	// (0x0002c6eb) list_double2_graphic_pane_t1

0x7d90,	// (0x0003015d) list_double2_graphic_pane_t2_ParamLimits

0x7d90,	// (0x0003015d) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x00037a0a) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x00037a0a) list_double2_graphic_pane_t

0x7da2,	// (0x0003016f) list_double_large_graphic_pane_g1_ParamLimits

0x7da2,	// (0x0003016f) list_double_large_graphic_pane_g1

0x7dc6,	// (0x00030193) list_double_large_graphic_pane_g2_ParamLimits

0x7dc6,	// (0x00030193) list_double_large_graphic_pane_g2

0x8fbf,	// (0x0003138c) list_double_large_graphic_pane_g3_ParamLimits

0x8fbf,	// (0x0003138c) list_double_large_graphic_pane_g3

0x7ddc,	// (0x000301a9) list_double_large_graphic_pane_g4_ParamLimits

0x7ddc,	// (0x000301a9) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x00037a0f) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x00037a0f) list_double_large_graphic_pane_g

0x7ded,	// (0x000301ba) list_double_large_graphic_pane_t1_ParamLimits

0x7ded,	// (0x000301ba) list_double_large_graphic_pane_t1

0x7e06,	// (0x000301d3) list_double_large_graphic_pane_t2_ParamLimits

0x7e06,	// (0x000301d3) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x00037a1a) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x00037a1a) list_double_large_graphic_pane_t

0x8fe6,	// (0x000313b3) list_double2_large_graphic_pane_g1_ParamLimits

0x8fe6,	// (0x000313b3) list_double2_large_graphic_pane_g1

0x7e18,	// (0x000301e5) list_double2_large_graphic_pane_g2_ParamLimits

0x7e18,	// (0x000301e5) list_double2_large_graphic_pane_g2

0x52d1,	// (0x0002d69e) list_double2_large_graphic_pane_g3_ParamLimits

0x52d1,	// (0x0002d69e) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x00037a1f) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x00037a1f) list_double2_large_graphic_pane_g

0x436f,	// (0x0002c73c) list_double2_large_graphic_pane_t1_ParamLimits

0x436f,	// (0x0002c73c) list_double2_large_graphic_pane_t1

0x7e29,	// (0x000301f6) list_double2_large_graphic_pane_t2_ParamLimits

0x7e29,	// (0x000301f6) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x00037a26) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x00037a26) list_double2_large_graphic_pane_t

0x7e3b,	// (0x00030208) list_double_heading_pane_g1_ParamLimits

0x7e3b,	// (0x00030208) list_double_heading_pane_g1

0x8ff2,	// (0x000313bf) list_double_heading_pane_g2_ParamLimits

0x8ff2,	// (0x000313bf) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x00037a2b) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x00037a2b) list_double_heading_pane_g

0x7e4c,	// (0x00030219) list_double_heading_pane_t1_ParamLimits

0x7e4c,	// (0x00030219) list_double_heading_pane_t1

0x7d10,	// (0x000300dd) list_double_heading_pane_t2_ParamLimits

0x7d10,	// (0x000300dd) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x00037a30) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x00037a30) list_double_heading_pane_t

0x45be,	// (0x0002c98b) list_double_graphic_heading_pane_g1_ParamLimits

0x45be,	// (0x0002c98b) list_double_graphic_heading_pane_g1

0x7e3b,	// (0x00030208) list_double_graphic_heading_pane_g2_ParamLimits

0x7e3b,	// (0x00030208) list_double_graphic_heading_pane_g2

0x8ff2,	// (0x000313bf) list_double_graphic_heading_pane_g3_ParamLimits

0x8ff2,	// (0x000313bf) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x00037a35) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x00037a35) list_double_graphic_heading_pane_g

0x7e62,	// (0x0003022f) list_double_graphic_heading_pane_t1_ParamLimits

0x7e62,	// (0x0003022f) list_double_graphic_heading_pane_t1

0x7d90,	// (0x0003015d) list_double_graphic_heading_pane_t2_ParamLimits

0x7d90,	// (0x0003015d) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x00037a3c) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x00037a3c) list_double_graphic_heading_pane_t

0x7e78,	// (0x00030245) list_double_time_pane_g1_ParamLimits

0x7e78,	// (0x00030245) list_double_time_pane_g1

0x7e89,	// (0x00030256) list_double_time_pane_g2_ParamLimits

0x7e89,	// (0x00030256) list_double_time_pane_g2

0x0001,

0xf674,	// (0x00037a41) list_double_time_pane_g_ParamLimits

0xf674,	// (0x00037a41) list_double_time_pane_g

0x7e95,	// (0x00030262) list_double_time_pane_t1_ParamLimits

0x7e95,	// (0x00030262) list_double_time_pane_t1

0x7eab,	// (0x00030278) list_double_time_pane_t2_ParamLimits

0x7eab,	// (0x00030278) list_double_time_pane_t2

0x7ebd,	// (0x0003028a) list_double_time_pane_t3_ParamLimits

0x7ebd,	// (0x0003028a) list_double_time_pane_t3

0x7ecf,	// (0x0003029c) list_double_time_pane_t4_ParamLimits

0x7ecf,	// (0x0003029c) list_double_time_pane_t4

0x0003,

0xf679,	// (0x00037a46) list_double_time_pane_t_ParamLimits

0xf679,	// (0x00037a46) list_double_time_pane_t

0x4a3f,	// (0x0002ce0c) list_setting_pane_g1_ParamLimits

0x4a3f,	// (0x0002ce0c) list_setting_pane_g1

0x45ef,	// (0x0002c9bc) list_setting_pane_g2_ParamLimits

0x45ef,	// (0x0002c9bc) list_setting_pane_g2

0x0001,

0xf682,	// (0x00037a4f) list_setting_pane_g_ParamLimits

0xf682,	// (0x00037a4f) list_setting_pane_g

0x7ee1,	// (0x000302ae) list_setting_pane_t1_ParamLimits

0x7ee1,	// (0x000302ae) list_setting_pane_t1

0x7efb,	// (0x000302c8) list_setting_pane_t2_ParamLimits

0x7efb,	// (0x000302c8) list_setting_pane_t2

0x0002,

0xf687,	// (0x00037a54) list_setting_pane_t_ParamLimits

0xf687,	// (0x00037a54) list_setting_pane_t

0x7f38,	// (0x00030305) set_value_pane_cp_ParamLimits

0x7f38,	// (0x00030305) set_value_pane_cp

0x7f44,	// (0x00030311) list_setting_number_pane_g1_ParamLimits

0x7f44,	// (0x00030311) list_setting_number_pane_g1

0x7f50,	// (0x0003031d) list_setting_number_pane_g2_ParamLimits

0x7f50,	// (0x0003031d) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x00037a5b) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x00037a5b) list_setting_number_pane_g

0x7f5c,	// (0x00030329) list_setting_number_pane_t1_ParamLimits

0x7f5c,	// (0x00030329) list_setting_number_pane_t1

0x7f75,	// (0x00030342) list_setting_number_pane_t2_ParamLimits

0x7f75,	// (0x00030342) list_setting_number_pane_t2

0x7f8f,	// (0x0003035c) list_setting_number_pane_t3_ParamLimits

0x7f8f,	// (0x0003035c) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x00037a60) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x00037a60) list_setting_number_pane_t

0x7f38,	// (0x00030305) set_value_pane_ParamLimits

0x7f38,	// (0x00030305) set_value_pane

0x8ffe,	// (0x000313cb) bg_set_opt_pane_ParamLimits

0x8ffe,	// (0x000313cb) bg_set_opt_pane

0x4740,	// (0x0002cb0d) set_value_pane_t1

0x901f,	// (0x000313ec) slider_set_pane_cp3

0x9028,	// (0x000313f5) volume_small_pane_cp

0x9031,	// (0x000313fe) list_form_gen_pane

0x8f7f,	// (0x0003134c) scroll_pane_cp8

0x7fd2,	// (0x0003039f) form_field_data_pane_ParamLimits

0x7fd2,	// (0x0003039f) form_field_data_pane

0x7fe9,	// (0x000303b6) form_field_data_wide_pane_ParamLimits

0x7fe9,	// (0x000303b6) form_field_data_wide_pane

0x8009,	// (0x000303d6) form_field_popup_pane_ParamLimits

0x8009,	// (0x000303d6) form_field_popup_pane

0x8021,	// (0x000303ee) form_field_popup_wide_pane_ParamLimits

0x8021,	// (0x000303ee) form_field_popup_wide_pane

0x47cc,	// (0x0002cb99) form_field_slider_pane_ParamLimits

0x47cc,	// (0x0002cb99) form_field_slider_pane

0x47df,	// (0x0002cbac) form_field_slider_wide_pane_ParamLimits

0x47df,	// (0x0002cbac) form_field_slider_wide_pane

0x903a,	// (0x00031407) data_form_pane

0x8042,	// (0x0003040f) form_field_data_pane_t1

0x9046,	// (0x00031413) input_focus_pane

0x9054,	// (0x00031421) data_form_wide_pane

0x481e,	// (0x0002cbeb) form_field_data_wide_pane_t1

0x8df6,	// (0x000311c3) input_focus_pane_cp6

0x805a,	// (0x00030427) form_field_popup_pane_t1

0x9046,	// (0x00031413) input_focus_pane_cp7

0x903a,	// (0x00031407) list_form_pane

0x4860,	// (0x0002cc2d) form_field_popup_wide_pane_t1

0x9046,	// (0x00031413) input_focus_pane_cp8

0x9080,	// (0x0003144d) list_form_wide_pane

0x807a,	// (0x00030447) form_field_slider_pane_t1_ParamLimits

0x807a,	// (0x00030447) form_field_slider_pane_t1

0x8090,	// (0x0003045d) form_field_slider_pane_t2_ParamLimits

0x8090,	// (0x0003045d) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x00037a70) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x00037a70) form_field_slider_pane_t

0x8723,	// (0x00030af0) input_focus_pane_cp9_ParamLimits

0x8723,	// (0x00030af0) input_focus_pane_cp9

0x80a5,	// (0x00030472) slider_cont_pane_ParamLimits

0x80a5,	// (0x00030472) slider_cont_pane

0x908f,	// (0x0003145c) form_field_slider_wide_pane_t1_ParamLimits

0x908f,	// (0x0003145c) form_field_slider_wide_pane_t1

0x48bc,	// (0x0002cc89) form_field_slider_wide_pane_t2_ParamLimits

0x48bc,	// (0x0002cc89) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x00037a75) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x00037a75) form_field_slider_wide_pane_t

0x8723,	// (0x00030af0) input_focus_pane_cp10_ParamLimits

0x8723,	// (0x00030af0) input_focus_pane_cp10

0x80b9,	// (0x00030486) slider_cont_pane_cp1_ParamLimits

0x80b9,	// (0x00030486) slider_cont_pane_cp1

0x80cf,	// (0x0003049c) slider_form_pane_cp

0x90a1,	// (0x0003146e) input_focus_pane_g1

0x90a9,	// (0x00031476) input_focus_pane_g2

0x90b1,	// (0x0003147e) input_focus_pane_g3

0x90b9,	// (0x00031486) input_focus_pane_g4

0x90c1,	// (0x0003148e) input_focus_pane_g5

0x90c9,	// (0x00031496) input_focus_pane_g6

0x90d1,	// (0x0003149e) input_focus_pane_g7

0x90d9,	// (0x000314a6) input_focus_pane_g8

0x90e1,	// (0x000314ae) input_focus_pane_g9

0x8414,	// (0x000307e1) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x00037a7a) input_focus_pane_g

0xd1e6,	// (0x000355b3) wait_border_pane_g3_copy1

0x80d7,	// (0x000304a4) data_form_pane_t1

0x8414,	// (0x000307e1) wait_anim_pane_g1_copy1

0x81e9,	// (0x000305b6) data_form_wide_pane_t1

0x80ef,	// (0x000304bc) list_form_graphic_pane_cp_ParamLimits

0x80ef,	// (0x000304bc) list_form_graphic_pane_cp

0xdf8a,	// (0x00036357) slider_form_pane_g1

0xdf93,	// (0x00036360) slider_form_pane_g2

0x0006,

0xf999,	// (0x00037d66) slider_form_pane_g

0x4906,	// (0x0002ccd3) list_form_graphic_pane_ParamLimits

0x4906,	// (0x0002ccd3) list_form_graphic_pane

0x4930,	// (0x0002ccfd) list_form_graphic_pane_g1

0x4938,	// (0x0002cd05) list_form_graphic_pane_t1_ParamLimits

0x4938,	// (0x0002cd05) list_form_graphic_pane_t1

0x876d,	// (0x00030b3a) list_highlight_pane_cp5_ParamLimits

0x876d,	// (0x00030b3a) list_highlight_pane_cp5

0x8102,	// (0x000304cf) find_pane_g1

0x90e9,	// (0x000314b6) input_find_pane

0x810d,	// (0x000304da) input_find_pane_g1_ParamLimits

0x810d,	// (0x000304da) input_find_pane_g1

0x8119,	// (0x000304e6) input_find_pane_t1_ParamLimits

0x8119,	// (0x000304e6) input_find_pane_t1

0x812e,	// (0x000304fb) input_find_pane_t2_ParamLimits

0x812e,	// (0x000304fb) input_find_pane_t2

0x0001,

0xf6c2,	// (0x00037a8f) input_find_pane_t_ParamLimits

0xf6c2,	// (0x00037a8f) input_find_pane_t

0x90f2,	// (0x000314bf) input_focus_pane_cp5_ParamLimits

0x90f2,	// (0x000314bf) input_focus_pane_cp5

0x8723,	// (0x00030af0) bg_popup_window_pane_cp2_ParamLimits

0x8723,	// (0x00030af0) bg_popup_window_pane_cp2

0x910c,	// (0x000314d9) listscroll_menu_pane_ParamLimits

0x910c,	// (0x000314d9) listscroll_menu_pane

0x9118,	// (0x000314e5) popup_submenu_window_ParamLimits

0x9118,	// (0x000314e5) popup_submenu_window

0x913c,	// (0x00031509) find_popup_pane_g1

0x9144,	// (0x00031511) input_popup_find_pane_cp

0x90f2,	// (0x000314bf) input_focus_pane_cp4_ParamLimits

0x90f2,	// (0x000314bf) input_focus_pane_cp4

0x915a,	// (0x00031527) input_popup_find_pane_t1_ParamLimits

0x915a,	// (0x00031527) input_popup_find_pane_t1

0x8561,	// (0x0003092e) bg_popup_sub_pane_cp

0x9188,	// (0x00031555) listscroll_popup_sub_pane

0x9190,	// (0x0003155d) list_submenu_pane_ParamLimits

0x9190,	// (0x0003155d) list_submenu_pane

0x91a1,	// (0x0003156e) scroll_pane_cp4

0x91a9,	// (0x00031576) list_single_popup_submenu_pane_ParamLimits

0x91a9,	// (0x00031576) list_single_popup_submenu_pane

0x91bd,	// (0x0003158a) list_single_popup_submenu_pane_g1

0x91c5,	// (0x00031592) list_single_popup_submenu_pane_t1_ParamLimits

0x91c5,	// (0x00031592) list_single_popup_submenu_pane_t1

0x8723,	// (0x00030af0) bg_active_tab_pane_cp1_ParamLimits

0x8723,	// (0x00030af0) bg_active_tab_pane_cp1

0xd9b9,	// (0x00035d86) tabs_2_active_pane_g1

0x91da,	// (0x000315a7) tabs_2_active_pane_t1

0x8723,	// (0x00030af0) bg_passive_tab_pane_cp1_ParamLimits

0x8723,	// (0x00030af0) bg_passive_tab_pane_cp1

0xd9b9,	// (0x00035d86) tabs_2_passive_pane_g1

0x91da,	// (0x000315a7) tabs_2_passive_pane_t1

0x876d,	// (0x00030b3a) bg_active_tab_pane_cp4

0x91f0,	// (0x000315bd) tabs_2_long_active_pane_t1

0xc0d3,	// (0x000344a0) bg_passive_tab_pane_cp4

0xcceb,	// (0x000350b8) list_single_midp_graphic_pane_g4_ParamLimits

0x876d,	// (0x00030b3a) bg_active_tab_pane_cp5

0x9207,	// (0x000315d4) tabs_3_long_active_pane_t1

0xc0d3,	// (0x000344a0) bg_passive_tab_pane_cp5

0xcceb,	// (0x000350b8) list_single_midp_graphic_pane_g4

0x876d,	// (0x00030b3a) bg_popup_window_pane_cp13_ParamLimits

0x876d,	// (0x00030b3a) bg_popup_window_pane_cp13

0x9226,	// (0x000315f3) listscroll_popup_fast_pane_ParamLimits

0x9226,	// (0x000315f3) listscroll_popup_fast_pane

0x9235,	// (0x00031602) grid_popup_fast_pane_ParamLimits

0x9235,	// (0x00031602) grid_popup_fast_pane

0x9247,	// (0x00031614) scroll_pane_cp9_ParamLimits

0x9247,	// (0x00031614) scroll_pane_cp9

0xf266,	// (0x00037633) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xf266,	// (0x00037633) list_single_graphic_hl_pane_t1_cp2

0x926b,	// (0x00031638) input_focus_pane_cp20_ParamLimits

0x926b,	// (0x00031638) input_focus_pane_cp20

0x9279,	// (0x00031646) query_popup_data_pane_t1_ParamLimits

0x9279,	// (0x00031646) query_popup_data_pane_t1

0x928c,	// (0x00031659) query_popup_data_pane_t2_ParamLimits

0x928c,	// (0x00031659) query_popup_data_pane_t2

0x92d2,	// (0x0003169f) query_popup_data_pane_t3_ParamLimits

0x92d2,	// (0x0003169f) query_popup_data_pane_t3

0x9313,	// (0x000316e0) query_popup_data_pane_t4_ParamLimits

0x9313,	// (0x000316e0) query_popup_data_pane_t4

0x934f,	// (0x0003171c) query_popup_data_pane_t5_ParamLimits

0x934f,	// (0x0003171c) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x00037a94) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x00037a94) query_popup_data_pane_t

0x90a1,	// (0x0003146e) bg_set_opt_pane_g1

0x90a9,	// (0x00031476) bg_set_opt_pane_g2

0x90b1,	// (0x0003147e) bg_set_opt_pane_g3

0x90b9,	// (0x00031486) bg_set_opt_pane_g4

0x90c1,	// (0x0003148e) bg_set_opt_pane_g5

0x90c9,	// (0x00031496) bg_set_opt_pane_g6

0x90d1,	// (0x0003149e) bg_set_opt_pane_g7

0x90d9,	// (0x000314a6) bg_set_opt_pane_g8

0x90e1,	// (0x000314ae) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x00037a9f) bg_set_opt_pane_g

0x55d7,	// (0x0002d9a4) control_top_pane_stacon_ParamLimits

0x55d7,	// (0x0002d9a4) control_top_pane_stacon

0x562a,	// (0x0002d9f7) signal_pane_stacon_ParamLimits

0x562a,	// (0x0002d9f7) signal_pane_stacon

0xc4a8,	// (0x00034875) stacon_top_pane_g1_ParamLimits

0xc4a8,	// (0x00034875) stacon_top_pane_g1

0x564f,	// (0x0002da1c) title_pane_stacon_ParamLimits

0x564f,	// (0x0002da1c) title_pane_stacon

0x5671,	// (0x0002da3e) uni_indicator_pane_stacon_ParamLimits

0x5671,	// (0x0002da3e) uni_indicator_pane_stacon

0x5686,	// (0x0002da53) battery_pane_stacon_ParamLimits

0x5686,	// (0x0002da53) battery_pane_stacon

0x56c6,	// (0x0002da93) control_bottom_pane_stacon_ParamLimits

0x56c6,	// (0x0002da93) control_bottom_pane_stacon

0x56e5,	// (0x0002dab2) navi_pane_stacon_ParamLimits

0x56e5,	// (0x0002dab2) navi_pane_stacon

0xc4ca,	// (0x00034897) stacon_bottom_pane_g1_ParamLimits

0xc4ca,	// (0x00034897) stacon_bottom_pane_g1

0xc0df,	// (0x000344ac) aid_levels_signal_lsc_ParamLimits

0xc0df,	// (0x000344ac) aid_levels_signal_lsc

0x5393,	// (0x0002d760) signal_pane_stacon_g1_ParamLimits

0x5393,	// (0x0002d760) signal_pane_stacon_g1

0x539f,	// (0x0002d76c) signal_pane_stacon_g2_ParamLimits

0x539f,	// (0x0002d76c) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x00037ab2) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x00037ab2) signal_pane_stacon_g

0x53d3,	// (0x0002d7a0) title_pane_stacon_t1_ParamLimits

0x53d3,	// (0x0002d7a0) title_pane_stacon_t1

0xc0f9,	// (0x000344c6) uni_indicator_pane_stacon_g1

0xc103,	// (0x000344d0) uni_indicator_pane_stacon_g2

0xc10d,	// (0x000344da) uni_indicator_pane_stacon_g3

0xc117,	// (0x000344e4) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x00037abe) uni_indicator_pane_stacon_g

0x53f8,	// (0x0002d7c5) control_top_pane_stacon_g1

0x5400,	// (0x0002d7cd) control_top_pane_stacon_t1_ParamLimits

0x5400,	// (0x0002d7cd) control_top_pane_stacon_t1

0xc121,	// (0x000344ee) aid_levels_battery_lsc_ParamLimits

0xc121,	// (0x000344ee) aid_levels_battery_lsc

0x5431,	// (0x0002d7fe) battery_pane_stacon_g1_ParamLimits

0x5431,	// (0x0002d7fe) battery_pane_stacon_g1

0x543d,	// (0x0002d80a) battery_pane_stacon_g2_ParamLimits

0x543d,	// (0x0002d80a) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x00037ac7) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x00037ac7) battery_pane_stacon_g

0x546c,	// (0x0002d839) navi_icon_pane_stacon

0x547c,	// (0x0002d849) navi_navi_pane_stacon

0x546c,	// (0x0002d839) navi_text_pane_stacon

0x53f8,	// (0x0002d7c5) control_bottom_pane_stacon_g1

0x548c,	// (0x0002d859) control_bottom_pane_stacon_t1_ParamLimits

0x548c,	// (0x0002d859) control_bottom_pane_stacon_t1

0x9386,	// (0x00031753) grid_app_pane_ParamLimits

0x9386,	// (0x00031753) grid_app_pane

0x93b4,	// (0x00031781) scroll_pane_cp15_ParamLimits

0x93b4,	// (0x00031781) scroll_pane_cp15

0x93cb,	// (0x00031798) cell_app_pane_ParamLimits

0x93cb,	// (0x00031798) cell_app_pane

0x940a,	// (0x000317d7) cell_app_pane_g1_ParamLimits

0x940a,	// (0x000317d7) cell_app_pane_g1

0xc149,	// (0x00034516) cell_app_pane_g2_ParamLimits

0xc149,	// (0x00034516) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x00037acc) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x00037acc) cell_app_pane_g

0xc155,	// (0x00034522) cell_app_pane_t1_ParamLimits

0xc155,	// (0x00034522) cell_app_pane_t1

0xc167,	// (0x00034534) grid_highlight_pane_ParamLimits

0xc167,	// (0x00034534) grid_highlight_pane

0x90a1,	// (0x0003146e) cell_highlight_pane_g1

0x90a9,	// (0x00031476) cell_highlight_pane_g2

0x90b1,	// (0x0003147e) cell_highlight_pane_g3

0x90b9,	// (0x00031486) cell_highlight_pane_g4

0x90c1,	// (0x0003148e) cell_highlight_pane_g5

0x90c9,	// (0x00031496) cell_highlight_pane_g6

0x90d1,	// (0x0003149e) cell_highlight_pane_g7

0x90d9,	// (0x000314a6) cell_highlight_pane_g8

0x90e1,	// (0x000314ae) cell_highlight_pane_g9

0x8414,	// (0x000307e1) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x00037a7a) cell_highlight_pane_g

0xc178,	// (0x00034545) bg_scroll_pane

0x54d0,	// (0x0002d89d) scroll_handle_pane

0xc1bf,	// (0x0003458c) scroll_bg_pane_g1

0xc1d4,	// (0x000345a1) scroll_bg_pane_g2

0xc1ec,	// (0x000345b9) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x00037ad1) scroll_bg_pane_g

0xc201,	// (0x000345ce) scroll_handle_focus_pane_ParamLimits

0xc201,	// (0x000345ce) scroll_handle_focus_pane

0xc1bf,	// (0x0003458c) scroll_handle_pane_g1

0xc20e,	// (0x000345db) scroll_handle_pane_g2

0xc1ec,	// (0x000345b9) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x00037ad8) scroll_handle_pane_g

0x90f2,	// (0x000314bf) bg_popup_sub_pane_cp21_ParamLimits

0x90f2,	// (0x000314bf) bg_popup_sub_pane_cp21

0xc222,	// (0x000345ef) popup_fep_japan_predictive_window_t1_ParamLimits

0xc222,	// (0x000345ef) popup_fep_japan_predictive_window_t1

0xc239,	// (0x00034606) popup_fep_japan_predictive_window_t2_ParamLimits

0xc239,	// (0x00034606) popup_fep_japan_predictive_window_t2

0xc26c,	// (0x00034639) popup_fep_japan_predictive_window_t3_ParamLimits

0xc26c,	// (0x00034639) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x00037adf) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x00037adf) popup_fep_japan_predictive_window_t

0x8561,	// (0x0003092e) bg_popup_sub_pane_cp23

0xc2a3,	// (0x00034670) listscroll_japin_cand_pane

0xc2ab,	// (0x00034678) popup_fep_japan_candidate_window_t1

0xc2b9,	// (0x00034686) candidate_pane_ParamLimits

0xc2b9,	// (0x00034686) candidate_pane

0xc2cc,	// (0x00034699) scroll_pane_cp30

0xc2d4,	// (0x000346a1) list_single_popup_jap_candidate_pane_ParamLimits

0xc2d4,	// (0x000346a1) list_single_popup_jap_candidate_pane

0x8561,	// (0x0003092e) list_highlight_pane_cp30

0xc2e9,	// (0x000346b6) list_single_popup_jap_candidate_pane_t1

0x9437,	// (0x00031804) level_1_signal

0x9449,	// (0x00031816) level_2_signal

0x945c,	// (0x00031829) level_3_signal

0x946f,	// (0x0003183c) level_4_signal

0x9482,	// (0x0003184f) level_5_signal

0x9495,	// (0x00031862) level_6_signal

0x94a8,	// (0x00031875) level_7_signal

0x9437,	// (0x00031804) level_1_battery

0x9449,	// (0x00031816) level_2_battery

0x945c,	// (0x00031829) level_3_battery

0x946f,	// (0x0003183c) level_4_battery

0x9482,	// (0x0003184f) level_5_battery

0x9495,	// (0x00031862) level_6_battery

0x94a8,	// (0x00031875) level_7_battery

0xc310,	// (0x000346dd) list_menu_pane_ParamLimits

0xc310,	// (0x000346dd) list_menu_pane

0xc321,	// (0x000346ee) scroll_pane_cp25_ParamLimits

0xc321,	// (0x000346ee) scroll_pane_cp25

0x94bb,	// (0x00031888) list_double2_graphic_pane_cp2_ParamLimits

0x94bb,	// (0x00031888) list_double2_graphic_pane_cp2

0x94bb,	// (0x00031888) list_double2_large_graphic_pane_cp2_ParamLimits

0x94bb,	// (0x00031888) list_double2_large_graphic_pane_cp2

0x94bb,	// (0x00031888) list_double2_pane_cp2_ParamLimits

0x94bb,	// (0x00031888) list_double2_pane_cp2

0x94bb,	// (0x00031888) list_double_graphic_pane_cp2_ParamLimits

0x94bb,	// (0x00031888) list_double_graphic_pane_cp2

0x94bb,	// (0x00031888) list_double_large_graphic_pane_cp2_ParamLimits

0x94bb,	// (0x00031888) list_double_large_graphic_pane_cp2

0x94bb,	// (0x00031888) list_double_number_pane_cp2_ParamLimits

0x94bb,	// (0x00031888) list_double_number_pane_cp2

0x94bb,	// (0x00031888) list_double_pane_cp2_ParamLimits

0x94bb,	// (0x00031888) list_double_pane_cp2

0x94d6,	// (0x000318a3) list_single_2graphic_pane_cp2_ParamLimits

0x94d6,	// (0x000318a3) list_single_2graphic_pane_cp2

0x94d6,	// (0x000318a3) list_single_graphic_heading_pane_cp2_ParamLimits

0x94d6,	// (0x000318a3) list_single_graphic_heading_pane_cp2

0x94d6,	// (0x000318a3) list_single_graphic_pane_cp2_ParamLimits

0x94d6,	// (0x000318a3) list_single_graphic_pane_cp2

0x94d6,	// (0x000318a3) list_single_heading_pane_cp2_ParamLimits

0x94d6,	// (0x000318a3) list_single_heading_pane_cp2

0x94e7,	// (0x000318b4) list_single_large_graphic_pane_cp2_ParamLimits

0x94e7,	// (0x000318b4) list_single_large_graphic_pane_cp2

0x94d6,	// (0x000318a3) list_single_number_heading_pane_cp2_ParamLimits

0x94d6,	// (0x000318a3) list_single_number_heading_pane_cp2

0x94d6,	// (0x000318a3) list_single_number_pane_cp2_ParamLimits

0x94d6,	// (0x000318a3) list_single_number_pane_cp2

0x94d6,	// (0x000318a3) list_single_pane_cp2_ParamLimits

0x94d6,	// (0x000318a3) list_single_pane_cp2

0xc343,	// (0x00034710) bg_popup_sub_pane_cp22

0x557f,	// (0x0002d94c) popup_side_volume_key_window_g1

0x55a3,	// (0x0002d970) popup_side_volume_key_window_t1

0x55bf,	// (0x0002d98c) volume_small_pane_cp1

0x8723,	// (0x00030af0) bg_popup_sub_pane_cp24_ParamLimits

0x8723,	// (0x00030af0) bg_popup_sub_pane_cp24

0xc359,	// (0x00034726) fep_china_uni_candidate_pane_ParamLimits

0xc359,	// (0x00034726) fep_china_uni_candidate_pane

0xc36d,	// (0x0003473a) fep_china_uni_entry_pane

0xc37d,	// (0x0003474a) popup_fep_china_uni_window_g1

0xc399,	// (0x00034766) fep_china_uni_entry_pane_g1

0xc3a1,	// (0x0003476e) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00037b0c) fep_china_uni_entry_pane_g

0xc3a9,	// (0x00034776) fep_entry_item_pane

0xc3b3,	// (0x00034780) fep_candidate_item_pane

0xc3bb,	// (0x00034788) fep_china_uni_candidate_pane_g1

0xc3c3,	// (0x00034790) fep_china_uni_candidate_pane_g2

0xc3cb,	// (0x00034798) fep_china_uni_candidate_pane_g3

0xc3d3,	// (0x000347a0) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x00037b11) fep_china_uni_candidate_pane_g

0x8414,	// (0x000307e1) fep_entry_item_pane_g1

0xc3db,	// (0x000347a8) fep_entry_item_pane_t1_ParamLimits

0xc3db,	// (0x000347a8) fep_entry_item_pane_t1

0xc3f1,	// (0x000347be) fep_candidate_item_pane_t1_ParamLimits

0xc3f1,	// (0x000347be) fep_candidate_item_pane_t1

0xc406,	// (0x000347d3) fep_candidate_item_pane_t2_ParamLimits

0xc406,	// (0x000347d3) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00037b1a) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00037b1a) fep_candidate_item_pane_t

0x876d,	// (0x00030b3a) list_highlight_pane_cp31_ParamLimits

0x876d,	// (0x00030b3a) list_highlight_pane_cp31

0xc418,	// (0x000347e5) level_1_signal_lsc

0xc421,	// (0x000347ee) level_2_signal_lsc

0xc42a,	// (0x000347f7) level_3_signal_lsc

0xc433,	// (0x00034800) level_4_signal_lsc

0xc43c,	// (0x00034809) level_5_signal_lsc

0xc445,	// (0x00034812) level_6_signal_lsc

0xc44e,	// (0x0003481b) level_7_signal_lsc

0xc44e,	// (0x0003481b) level_1_battery_lsc

0xc457,	// (0x00034824) level_2_battery_lsc

0xc460,	// (0x0003482d) level_3_battery_lsc

0xc469,	// (0x00034836) level_4_battery_lsc

0xc472,	// (0x0003483f) level_5_battery_lsc

0xc47b,	// (0x00034848) level_6_battery_lsc

0xc418,	// (0x000347e5) level_7_battery_lsc

0xc484,	// (0x00034851) scroll_handle_focus_pane_g1

0xc48d,	// (0x0003485a) scroll_handle_focus_pane_g2

0xc496,	// (0x00034863) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x00037b1f) scroll_handle_focus_pane_g

0x8143,	// (0x00030510) list_single_2graphic_pane_g1_ParamLimits

0x8143,	// (0x00030510) list_single_2graphic_pane_g1

0x8fa2,	// (0x0003136f) list_single_2graphic_pane_g2_ParamLimits

0x8fa2,	// (0x0003136f) list_single_2graphic_pane_g2

0x5324,	// (0x0002d6f1) list_single_2graphic_pane_g3_ParamLimits

0x5324,	// (0x0002d6f1) list_single_2graphic_pane_g3

0x814f,	// (0x0003051c) list_single_2graphic_pane_g4_ParamLimits

0x814f,	// (0x0003051c) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00037b26) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00037b26) list_single_2graphic_pane_g

0x8160,	// (0x0003052d) list_single_2graphic_pane_t1_ParamLimits

0x8160,	// (0x0003052d) list_single_2graphic_pane_t1

0x9540,	// (0x0003190d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9540,	// (0x0003190d) list_double2_graphic_large_graphic_pane_g1

0x7e18,	// (0x000301e5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7e18,	// (0x000301e5) list_double2_graphic_large_graphic_pane_g2

0x52d1,	// (0x0002d69e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x52d1,	// (0x0002d69e) list_double2_graphic_large_graphic_pane_g3

0x818e,	// (0x0003055b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x818e,	// (0x0003055b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x00037b2f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x00037b2f) list_double2_graphic_large_graphic_pane_g

0x819a,	// (0x00030567) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x819a,	// (0x00030567) list_double2_graphic_large_graphic_pane_t1

0x81b0,	// (0x0003057d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x81b0,	// (0x0003057d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00037b38) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00037b38) list_double2_graphic_large_graphic_pane_t

0xc571,	// (0x0003493e) popup_fast_swap_window_ParamLimits

0xc571,	// (0x0003493e) popup_fast_swap_window

0xc58d,	// (0x0003495a) popup_side_volume_key_window

0xc5a7,	// (0x00034974) stacon_top_pane

0xc5b1,	// (0x0003497e) status_pane_ParamLimits

0xc5b1,	// (0x0003497e) status_pane

0xc5a7,	// (0x00034974) status_small_pane

0x8561,	// (0x0003092e) control_pane

0x8561,	// (0x0003092e) stacon_bottom_pane

0x8f7f,	// (0x0003134c) scroll_pane_cp121

0x9031,	// (0x000313fe) set_content_pane

0xd9c1,	// (0x00035d8e) bg_active_tab_pane_g1_cp1

0xc49f,	// (0x0003486c) bg_active_tab_pane_g2_cp1

0xd9ca,	// (0x00035d97) bg_active_tab_pane_g3_cp1

0xd9c1,	// (0x00035d8e) bg_passive_tab_pane_g1_cp1

0xc49f,	// (0x0003486c) bg_passive_tab_pane_g2_cp1

0xd9ca,	// (0x00035d97) bg_passive_tab_pane_g3_cp1

0x9550,	// (0x0003191d) bg_active_tab_pane_g1_cp2

0xc49f,	// (0x0003486c) bg_active_tab_pane_g2_cp2

0x9559,	// (0x00031926) bg_active_tab_pane_g3_cp2

0x9550,	// (0x0003191d) bg_passive_tab_pane_g1_cp2

0xc49f,	// (0x0003486c) bg_passive_tab_pane_g2_cp2

0x9559,	// (0x00031926) bg_passive_tab_pane_g3_cp2

0x9562,	// (0x0003192f) bg_active_tab_pane_g1_cp3

0xc49f,	// (0x0003486c) bg_active_tab_pane_g2_cp3

0x956b,	// (0x00031938) bg_active_tab_pane_g3_cp3

0x9562,	// (0x0003192f) bg_passive_tab_pane_g1_cp3

0xc49f,	// (0x0003486c) bg_passive_tab_pane_g2_cp3

0x956b,	// (0x00031938) bg_passive_tab_pane_g3_cp3

0x9574,	// (0x00031941) bg_active_tab_pane_g1_cp4

0xc49f,	// (0x0003486c) bg_active_tab_pane_g2_cp4

0x957d,	// (0x0003194a) bg_active_tab_pane_g3_cp4

0x9574,	// (0x00031941) bg_passive_tab_pane_g1_cp4

0xc49f,	// (0x0003486c) bg_passive_tab_pane_g2_cp4

0x957d,	// (0x0003194a) bg_passive_tab_pane_g3_cp4

0xc4e6,	// (0x000348b3) bg_active_tab_pane_g1_cp5

0xc49f,	// (0x0003486c) bg_active_tab_pane_g2_cp5

0xc4ef,	// (0x000348bc) bg_active_tab_pane_g3_cp5

0xc4e6,	// (0x000348b3) bg_passive_tab_pane_g1_cp5

0xc49f,	// (0x0003486c) bg_passive_tab_pane_g2_cp5

0xc4ef,	// (0x000348bc) bg_passive_tab_pane_g3_cp5

0x9586,	// (0x00031953) list_set_graphic_pane_ParamLimits

0x9586,	// (0x00031953) list_set_graphic_pane

0x8561,	// (0x0003092e) bg_set_opt_pane_cp4

0xc4f8,	// (0x000348c5) list_set_graphic_pane_g1_ParamLimits

0xc4f8,	// (0x000348c5) list_set_graphic_pane_g1

0xc504,	// (0x000348d1) list_set_graphic_pane_g2_ParamLimits

0xc504,	// (0x000348d1) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x00037b3d) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x00037b3d) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x00037ea2) volume_small_pane_cp_g

0xc526,	// (0x000348f3) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc526,	// (0x000348f3) list_double2_large_graphic_pane_g1_cp2

0xc532,	// (0x000348ff) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc532,	// (0x000348ff) list_double2_large_graphic_pane_g2_cp2

0xc541,	// (0x0003490e) list_double2_large_graphic_pane_g3_cp2

0xc549,	// (0x00034916) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc549,	// (0x00034916) list_double2_large_graphic_pane_t1_cp2

0xc55f,	// (0x0003492c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc55f,	// (0x0003492c) list_double2_large_graphic_pane_t2_cp2

0xdd3a,	// (0x00036107) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xdd3a,	// (0x00036107) list_double_large_graphic_pane_g1_cp2

0xdd4b,	// (0x00036118) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xdd4b,	// (0x00036118) list_double_large_graphic_pane_g2_cp2

0xc68c,	// (0x00034a59) list_double_large_graphic_pane_g3_cp2

0xdd5a,	// (0x00036127) list_double_large_graphic_pane_g4_cp

0xdd62,	// (0x0003612f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xdd62,	// (0x0003612f) list_double_large_graphic_pane_t1_cp2

0xdd79,	// (0x00036146) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xdd79,	// (0x00036146) list_double_large_graphic_pane_t2_cp2

0xc5bf,	// (0x0003498c) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc5bf,	// (0x0003498c) list_double2_graphic_pane_g1_cp2

0xc5cb,	// (0x00034998) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc5cb,	// (0x00034998) list_double2_graphic_pane_g2_cp2

0xc5da,	// (0x000349a7) list_double2_graphic_pane_g3_cp2

0xc5e2,	// (0x000349af) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc5e2,	// (0x000349af) list_double2_graphic_pane_t1_cp2

0xc5f8,	// (0x000349c5) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc5f8,	// (0x000349c5) list_double2_graphic_pane_t2_cp2

0xc60a,	// (0x000349d7) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc60a,	// (0x000349d7) list_single_number_heading_pane_g1_cp2

0xc616,	// (0x000349e3) list_single_number_heading_pane_g2_cp2

0xc61e,	// (0x000349eb) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc61e,	// (0x000349eb) list_single_number_heading_pane_t1_cp2

0xc634,	// (0x00034a01) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc634,	// (0x00034a01) list_single_number_heading_pane_t2_cp2

0xc646,	// (0x00034a13) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc646,	// (0x00034a13) list_single_number_heading_pane_t3_cp2

0xc60a,	// (0x000349d7) list_single_heading_pane_g1_cp2_ParamLimits

0xc60a,	// (0x000349d7) list_single_heading_pane_g1_cp2

0xc616,	// (0x000349e3) list_single_heading_pane_g2_cp2

0xc61e,	// (0x000349eb) list_single_heading_pane_t1_cp2_ParamLimits

0xc61e,	// (0x000349eb) list_single_heading_pane_t1_cp2

0xdb44,	// (0x00035f11) list_single_heading_pane_t2_cp2_ParamLimits

0xdb44,	// (0x00035f11) list_single_heading_pane_t2_cp2

0xdac9,	// (0x00035e96) list_double_graphic_pane_g1_cp2_ParamLimits

0xdac9,	// (0x00035e96) list_double_graphic_pane_g1_cp2

0xdad5,	// (0x00035ea2) list_double_graphic_pane_g2_cp2_ParamLimits

0xdad5,	// (0x00035ea2) list_double_graphic_pane_g2_cp2

0xdae4,	// (0x00035eb1) list_double_graphic_pane_g3_cp2

0xdaec,	// (0x00035eb9) list_double_graphic_pane_t1_cp2_ParamLimits

0xdaec,	// (0x00035eb9) list_double_graphic_pane_t1_cp2

0xdb02,	// (0x00035ecf) list_double_graphic_pane_t2_cp2_ParamLimits

0xdb02,	// (0x00035ecf) list_double_graphic_pane_t2_cp2

0xc680,	// (0x00034a4d) list_double_number_pane_g1_cp2_ParamLimits

0xc680,	// (0x00034a4d) list_double_number_pane_g1_cp2

0xc68c,	// (0x00034a59) list_double_number_pane_g2_cp2

0xda8f,	// (0x00035e5c) list_double_number_pane_t1_cp2_ParamLimits

0xda8f,	// (0x00035e5c) list_double_number_pane_t1_cp2

0xdaa1,	// (0x00035e6e) list_double_number_pane_t2_cp2_ParamLimits

0xdaa1,	// (0x00035e6e) list_double_number_pane_t2_cp2

0xdab7,	// (0x00035e84) list_double_number_pane_t3_cp2_ParamLimits

0xdab7,	// (0x00035e84) list_double_number_pane_t3_cp2

0xda07,	// (0x00035dd4) list_single_graphic_pane_g1_cp2_ParamLimits

0xda07,	// (0x00035dd4) list_single_graphic_pane_g1_cp2

0xc60a,	// (0x000349d7) list_single_graphic_pane_g2_cp2_ParamLimits

0xc60a,	// (0x000349d7) list_single_graphic_pane_g2_cp2

0xc616,	// (0x000349e3) list_single_graphic_pane_g3_cp2

0xd9df,	// (0x00035dac) list_single_graphic_pane_t1_cp2_ParamLimits

0xd9df,	// (0x00035dac) list_single_graphic_pane_t1_cp2

0xc60a,	// (0x000349d7) list_single_number_pane_g1_cp2_ParamLimits

0xc60a,	// (0x000349d7) list_single_number_pane_g1_cp2

0xc616,	// (0x000349e3) list_single_number_pane_g2_cp2

0xd9df,	// (0x00035dac) list_single_number_pane_t1_cp2_ParamLimits

0xd9df,	// (0x00035dac) list_single_number_pane_t1_cp2

0xd9f5,	// (0x00035dc2) list_single_number_pane_t2_cp2_ParamLimits

0xd9f5,	// (0x00035dc2) list_single_number_pane_t2_cp2

0xc532,	// (0x000348ff) list_double2_pane_g1_cp2_ParamLimits

0xc532,	// (0x000348ff) list_double2_pane_g1_cp2

0xc541,	// (0x0003490e) list_double2_pane_g2_cp2

0xc658,	// (0x00034a25) list_double2_pane_t1_cp2_ParamLimits

0xc658,	// (0x00034a25) list_double2_pane_t1_cp2

0xc66e,	// (0x00034a3b) list_double2_pane_t2_cp2_ParamLimits

0xc66e,	// (0x00034a3b) list_double2_pane_t2_cp2

0xc680,	// (0x00034a4d) list_double_pane_g1_cp2_ParamLimits

0xc680,	// (0x00034a4d) list_double_pane_g1_cp2

0xc68c,	// (0x00034a59) list_double_pane_g2_cp2

0xc694,	// (0x00034a61) list_double_pane_t1_cp2_ParamLimits

0xc694,	// (0x00034a61) list_double_pane_t1_cp2

0xc6aa,	// (0x00034a77) list_double_pane_t2_cp2_ParamLimits

0xc6aa,	// (0x00034a77) list_double_pane_t2_cp2

0xc6d2,	// (0x00034a9f) list_single_pane_cp2_g3

0xc60a,	// (0x000349d7) list_single_pane_g1_cp2_ParamLimits

0xc60a,	// (0x000349d7) list_single_pane_g1_cp2

0xc616,	// (0x000349e3) list_single_pane_g2_cp2

0xc6e2,	// (0x00034aaf) list_single_pane_t1_cp2_ParamLimits

0xc6e2,	// (0x00034aaf) list_single_pane_t1_cp2

0xc6fa,	// (0x00034ac7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc6fa,	// (0x00034ac7) list_single_large_graphic_pane_g1_cp2

0xc706,	// (0x00034ad3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc706,	// (0x00034ad3) list_single_large_graphic_pane_g2_cp2

0xc712,	// (0x00034adf) list_single_large_graphic_pane_g3_cp2

0xc71a,	// (0x00034ae7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc71a,	// (0x00034ae7) list_single_large_graphic_pane_g4_cp1

0xc734,	// (0x00034b01) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc734,	// (0x00034b01) list_single_large_graphic_pane_t1_cp2

0xd7dc,	// (0x00035ba9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd7dc,	// (0x00035ba9) list_single_graphic_heading_pane_g1_cp2

0xd7b7,	// (0x00035b84) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd7b7,	// (0x00035b84) list_single_graphic_heading_pane_g4_cp2

0xc616,	// (0x000349e3) list_single_graphic_heading_pane_g5_cp2

0xc61e,	// (0x000349eb) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xc61e,	// (0x000349eb) list_single_graphic_heading_pane_t1_cp2

0xd7e8,	// (0x00035bb5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd7e8,	// (0x00035bb5) list_single_graphic_heading_pane_t2_cp2

0xd7ab,	// (0x00035b78) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd7ab,	// (0x00035b78) list_single_2graphic_pane_g1_cp2

0xd7b7,	// (0x00035b84) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd7b7,	// (0x00035b84) list_single_2graphic_pane_g2_cp2

0xc616,	// (0x000349e3) list_single_2graphic_pane_g3_cp2

0xcceb,	// (0x000350b8) list_single_2graphic_pane_g4_cp2_ParamLimits

0xcceb,	// (0x000350b8) list_single_2graphic_pane_g4_cp2

0xd7c6,	// (0x00035b93) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd7c6,	// (0x00035b93) list_single_2graphic_pane_t1_cp2

0x8414,	// (0x000307e1) list_highlight_pane_g10_cp1

0xd3bd,	// (0x0003578a) list_highlight_pane_g1_cp1

0xd3c5,	// (0x00035792) list_highlight_pane_g2_cp1

0xd3cd,	// (0x0003579a) list_highlight_pane_g3_cp1

0xd3d5,	// (0x000357a2) list_highlight_pane_g4_cp1

0xd3dd,	// (0x000357aa) list_highlight_pane_g5_cp1

0xd3e5,	// (0x000357b2) list_highlight_pane_g6_cp1

0xd3ed,	// (0x000357ba) list_highlight_pane_g7_cp1

0xd3f5,	// (0x000357c2) list_highlight_pane_g8_cp1

0xd3fd,	// (0x000357ca) list_highlight_pane_g9_cp1

0xa238,	// (0x00032605) form_field_slider_pane_t3

0xa246,	// (0x00032613) form_field_slider_pane_t4

0xd307,	// (0x000356d4) slider_form_pane_ParamLimits

0xd307,	// (0x000356d4) slider_form_pane

0x8561,	// (0x0003092e) control_abbreviations

0x8561,	// (0x0003092e) control_conventions

0x8561,	// (0x0003092e) control_definitions

0x8561,	// (0x0003092e) format_table_attribute

0xdb8e,	// (0x00035f5b) bg_popup_preview_window_pane_g9

0x8561,	// (0x0003092e) format_table_data2

0x8561,	// (0x0003092e) format_table_data3

0x8561,	// (0x0003092e) format_table_data_example

0x0008,

0x8561,	// (0x0003092e) intro_purpose

0xf8f9,	// (0x00037cc6) bg_popup_preview_window_pane_g

0x8561,	// (0x0003092e) texts_category

0x8561,	// (0x0003092e) texts_graphics

0xc74a,	// (0x00034b17) text_digital

0xc759,	// (0x00034b26) text_primary

0xc768,	// (0x00034b35) text_primary_small

0xc777,	// (0x00034b44) text_secondary

0xc786,	// (0x00034b53) text_title

0xe01b,	// (0x000363e8) bg_passive_tab_pane_g1_cp3_srt

0xc49f,	// (0x0003486c) bg_passive_tab_pane_g2_cp3_srt

0xe024,	// (0x000363f1) bg_passive_tab_pane_g3_cp3_srt

0x8723,	// (0x00030af0) bg_active_tab_pane_cp3_srt_ParamLimits

0x8723,	// (0x00030af0) bg_active_tab_pane_cp3_srt

0xd9b1,	// (0x00035d7e) tabs_4_active_pane_srt_g1

0x874f,	// (0x00030b1c) tabs_4_active_pane_srt_t1_ParamLimits

0x874f,	// (0x00030b1c) tabs_4_active_pane_srt_t1

0xe01b,	// (0x000363e8) bg_active_tab_pane_g1_cp3_copy1

0xc49f,	// (0x0003486c) bg_active_tab_pane_g2_cp3_copy1

0xe024,	// (0x000363f1) bg_active_tab_pane_g3_cp3_copy1

0x876d,	// (0x00030b3a) tabs_2_long_active_pane_srt_ParamLimits

0x876d,	// (0x00030b3a) tabs_2_long_active_pane_srt

0x876d,	// (0x00030b3a) tabs_2_long_passive_pane_srt_ParamLimits

0x876d,	// (0x00030b3a) tabs_2_long_passive_pane_srt

0xc0d3,	// (0x000344a0) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc0d3,	// (0x000344a0) bg_passive_tab_pane_cp4_srt

0xdf51,	// (0x0003631e) bg_passive_tab_pane_g1_cp4_srt

0xc49f,	// (0x0003486c) bg_passive_tab_pane_g2_cp4_srt

0xdf5a,	// (0x00036327) bg_passive_tab_pane_g3_cp4_srt

0x876d,	// (0x00030b3a) bg_active_tab_pane_cp4_srt_ParamLimits

0x876d,	// (0x00030b3a) bg_active_tab_pane_cp4_srt

0x91f0,	// (0x000315bd) tabs_2_long_active_pane_srt_t1_ParamLimits

0x91f0,	// (0x000315bd) tabs_2_long_active_pane_srt_t1

0xdf51,	// (0x0003631e) bg_active_tab_pane_g1_cp4_srt

0xc49f,	// (0x0003486c) bg_active_tab_pane_g2_cp4_srt

0xdf5a,	// (0x00036327) bg_active_tab_pane_g3_cp4_srt

0x8723,	// (0x00030af0) tabs_3_long_active_pane_srt_ParamLimits

0x8723,	// (0x00030af0) tabs_3_long_active_pane_srt

0x8723,	// (0x00030af0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8723,	// (0x00030af0) tabs_3_long_passive_pane_cp_srt

0x8723,	// (0x00030af0) tabs_3_long_passive_pane_srt_ParamLimits

0x8723,	// (0x00030af0) tabs_3_long_passive_pane_srt

0xc0d3,	// (0x000344a0) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc0d3,	// (0x000344a0) bg_passive_tab_pane_cp5_srt

0xc4e6,	// (0x000348b3) bg_passive_tab_pane_g1_cp5_srt

0xc49f,	// (0x0003486c) bg_passive_tab_pane_g2_cp5_srt

0xc4ef,	// (0x000348bc) bg_passive_tab_pane_g3_cp5_srt

0x876d,	// (0x00030b3a) bg_active_tab_pane_cp5_srt_ParamLimits

0x876d,	// (0x00030b3a) bg_active_tab_pane_cp5_srt

0x9207,	// (0x000315d4) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9207,	// (0x000315d4) tabs_3_long_active_pane_srt_t1

0xc4e6,	// (0x000348b3) bg_active_tab_pane_g1_cp5_srt

0xc49f,	// (0x0003486c) bg_active_tab_pane_g2_cp5_srt

0xc4ef,	// (0x000348bc) bg_active_tab_pane_g3_cp5_srt

0xdf43,	// (0x00036310) navi_text_pane_srt_t1

0xdf3b,	// (0x00036308) navi_icon_pane_srt_g1

0xc89e,	// (0x00034c6b) midp_editing_number_pane_srt

0xc795,	// (0x00034b62) midp_ticker_pane_srt

0xc8a6,	// (0x00034c73) midp_ticker_pane_srt_g1

0xc8ae,	// (0x00034c7b) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x00037b5c) midp_ticker_pane_srt_g

0xc8b6,	// (0x00034c83) midp_ticker_pane_srt_t1

0xdf2c,	// (0x000362f9) midp_editing_number_pane_t1_copy1

0x959a,	// (0x00031967) listscroll_midp_pane

0x959a,	// (0x00031967) midp_form_pane

0xc79d,	// (0x00034b6a) midp_info_popup_window_ParamLimits

0xc79d,	// (0x00034b6a) midp_info_popup_window

0x90f2,	// (0x000314bf) bg_popup_sub_pane_cp50_ParamLimits

0x90f2,	// (0x000314bf) bg_popup_sub_pane_cp50

0xd030,	// (0x000353fd) listscroll_midp_info_pane_ParamLimits

0xd030,	// (0x000353fd) listscroll_midp_info_pane

0xd018,	// (0x000353e5) listscroll_form_midp_pane_ParamLimits

0xd018,	// (0x000353e5) listscroll_form_midp_pane

0xd024,	// (0x000353f1) scroll_bar_cp050

0xa22c,	// (0x000325f9) list_midp_pane

0xe830,	// (0x00036bfd) signal_pane_g2_cp

0xcf4a,	// (0x00035317) listscroll_midp_info_pane_t1_ParamLimits

0xcf4a,	// (0x00035317) listscroll_midp_info_pane_t1

0xcf62,	// (0x0003532f) listscroll_midp_info_pane_t2_ParamLimits

0xcf62,	// (0x0003532f) listscroll_midp_info_pane_t2

0xcfa0,	// (0x0003536d) listscroll_midp_info_pane_t3_ParamLimits

0xcfa0,	// (0x0003536d) listscroll_midp_info_pane_t3

0xcfda,	// (0x000353a7) listscroll_midp_info_pane_t4_ParamLimits

0xcfda,	// (0x000353a7) listscroll_midp_info_pane_t4

0x0003,

0xf834,	// (0x00037c01) listscroll_midp_info_pane_t_ParamLimits

0xf834,	// (0x00037c01) listscroll_midp_info_pane_t

0x91a1,	// (0x0003156e) scroll_pane_cp21

0xceee,	// (0x000352bb) form_midp_field_choice_group_pane

0xcef7,	// (0x000352c4) form_midp_field_text_pane

0xcf30,	// (0x000352fd) form_midp_field_time_pane

0xcf38,	// (0x00035305) form_midp_gauge_slider_pane

0xcf41,	// (0x0003530e) form_midp_gauge_wait_pane

0x8561,	// (0x0003092e) form_midp_image_pane

0x81c2,	// (0x0003058f) list_single_midp_pane_ParamLimits

0x81c2,	// (0x0003058f) list_single_midp_pane

0xa20b,	// (0x000325d8) form_midp_field_text_pane_t1

0xcd9d,	// (0x0003516a) input_focus_pane_cp050

0xcedd,	// (0x000352aa) list_midp_form_text_pane

0xceac,	// (0x00035279) form_midp_field_choice_group_pane_t1

0xceba,	// (0x00035287) input_focus_pane_cp051

0xcece,	// (0x0003529b) list_midp_choice_pane

0x8561,	// (0x0003092e) status_idle_pane

0xce90,	// (0x0003525d) form_midp_field_time_pane_t1

0x8414,	// (0x000307e1) wait_anim_pane_g2_copy1

0xce9e,	// (0x0003526b) form_midp_field_time_pane_t2

0x0001,

0xc808,	// (0x00034bd5) aid_navinavi_width_2_pane

0xf82f,	// (0x00037bfc) form_midp_field_time_pane_t

0x8561,	// (0x0003092e) input_focus_pane_cp052

0x8561,	// (0x0003092e) bg_input_focus_pane_cp040

0xce6c,	// (0x00035239) form_midp_gauge_slider_pane_t1

0xce7a,	// (0x00035247) form_midp_gauge_slider_pane_t2

0xa1ef,	// (0x000325bc) form_midp_gauge_slider_pane_t3

0xa1fd,	// (0x000325ca) form_midp_gauge_slider_pane_t4

0x0003,

0xf826,	// (0x00037bf3) form_midp_gauge_slider_pane_t

0xce88,	// (0x00035255) form_midp_slider_pane

0x876d,	// (0x00030b3a) bg_input_focus_pane_cp041_ParamLimits

0x876d,	// (0x00030b3a) bg_input_focus_pane_cp041

0xce3c,	// (0x00035209) form_midp_gauge_wait_pane_t1_ParamLimits

0xce3c,	// (0x00035209) form_midp_gauge_wait_pane_t1

0xce4e,	// (0x0003521b) form_midp_gauge_wait_pane_t2_ParamLimits

0xce4e,	// (0x0003521b) form_midp_gauge_wait_pane_t2

0x0001,

0xf821,	// (0x00037bee) form_midp_gauge_wait_pane_t_ParamLimits

0xf821,	// (0x00037bee) form_midp_gauge_wait_pane_t

0xce60,	// (0x0003522d) form_midp_wait_pane_ParamLimits

0xce60,	// (0x0003522d) form_midp_wait_pane

0xce06,	// (0x000351d3) form_midp_image_pane_g1

0xce0f,	// (0x000351dc) form_midp_image_pane_t1

0xce1e,	// (0x000351eb) form_midp_image_pane_t2

0xce2d,	// (0x000351fa) form_midp_image_pane_t3

0x0002,

0xf81a,	// (0x00037be7) form_midp_image_pane_t

0xcdfd,	// (0x000351ca) list_single_midp_pane_g1

0x4ab9,	// (0x0002ce86) list_single_midp_pane_t1

0xa1db,	// (0x000325a8) list_midp_form_item_pane_ParamLimits

0xa1db,	// (0x000325a8) list_midp_form_item_pane

0xc7b0,	// (0x00034b7d) list_midp_form_item_pane_t1

0xc7bf,	// (0x00034b8c) midp_ticker_pane_g1

0xc7cb,	// (0x00034b98) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x00037b42) midp_ticker_pane_g

0xc7d7,	// (0x00034ba4) midp_ticker_pane_t1

0xdf2c,	// (0x000362f9) midp_editing_number_pane_t1

0xdfb4,	// (0x00036381) midp_editing_number_pane

0xdfc0,	// (0x0003638d) midp_ticker_pane

0xdf1c,	// (0x000362e9) ai_message_heading_pane

0x8561,	// (0x0003092e) bg_popup_window_pane_cp14

0xdf24,	// (0x000362f1) listscroll_ai_message_pane

0xdea6,	// (0x00036273) ai_message_heading_pane_g1_ParamLimits

0xdea6,	// (0x00036273) ai_message_heading_pane_g1

0xdeb2,	// (0x0003627f) ai_message_heading_pane_g2_ParamLimits

0xdeb2,	// (0x0003627f) ai_message_heading_pane_g2

0xdebe,	// (0x0003628b) ai_message_heading_pane_g3_ParamLimits

0xdebe,	// (0x0003628b) ai_message_heading_pane_g3

0xdeca,	// (0x00036297) ai_message_heading_pane_g4_ParamLimits

0xdeca,	// (0x00036297) ai_message_heading_pane_g4

0x0003,

0xf95b,	// (0x00037d28) ai_message_heading_pane_g_ParamLimits

0xf95b,	// (0x00037d28) ai_message_heading_pane_g

0xded6,	// (0x000362a3) ai_message_heading_pane_t1_ParamLimits

0xded6,	// (0x000362a3) ai_message_heading_pane_t1

0xdef0,	// (0x000362bd) ai_message_heading_pane_t2_ParamLimits

0xdef0,	// (0x000362bd) ai_message_heading_pane_t2

0x0001,

0xf964,	// (0x00037d31) ai_message_heading_pane_t_ParamLimits

0xf964,	// (0x00037d31) ai_message_heading_pane_t

0xdf02,	// (0x000362cf) bg_popup_heading_pane_cp1_ParamLimits

0xdf02,	// (0x000362cf) bg_popup_heading_pane_cp1

0xde94,	// (0x00036261) list_ai_message_pane_ParamLimits

0xde94,	// (0x00036261) list_ai_message_pane

0x91a1,	// (0x0003156e) scroll_pane_cp10

0xde30,	// (0x000361fd) list_ai_message_pane_g1

0xde38,	// (0x00036205) list_ai_message_pane_g2

0x0001,

0xf938,	// (0x00037d05) list_ai_message_pane_g

0xde40,	// (0x0003620d) list_ai_message_pane_t1_ParamLimits

0xde40,	// (0x0003620d) list_ai_message_pane_t1

0xde55,	// (0x00036222) list_ai_message_pane_t2_ParamLimits

0xde55,	// (0x00036222) list_ai_message_pane_t2

0xde6a,	// (0x00036237) list_ai_message_pane_t3_ParamLimits

0xde6a,	// (0x00036237) list_ai_message_pane_t3

0xde7f,	// (0x0003624c) list_ai_message_pane_t4_ParamLimits

0xde7f,	// (0x0003624c) list_ai_message_pane_t4

0x0003,

0xf93d,	// (0x00037d0a) list_ai_message_pane_t_ParamLimits

0xf93d,	// (0x00037d0a) list_ai_message_pane_t

0xde1e,	// (0x000361eb) cell_ai_soft_ind_pane_ParamLimits

0xde1e,	// (0x000361eb) cell_ai_soft_ind_pane

0xc7e9,	// (0x00034bb6) cell_ai_soft_ind_pane_g1_ParamLimits

0xc7e9,	// (0x00034bb6) cell_ai_soft_ind_pane_g1

0x8561,	// (0x0003092e) grid_highlight_cp1

0xc7f6,	// (0x00034bc3) text_secondary_cp56_ParamLimits

0xc7f6,	// (0x00034bc3) text_secondary_cp56

0xddf3,	// (0x000361c0) example_general_pane_ParamLimits

0xddf3,	// (0x000361c0) example_general_pane

0xddff,	// (0x000361cc) example_parent_pane_g1_ParamLimits

0xddff,	// (0x000361cc) example_parent_pane_g1

0xde0b,	// (0x000361d8) example_parent_pane_t1_ParamLimits

0xde0b,	// (0x000361d8) example_parent_pane_t1

0x9acf,	// (0x00031e9c) popup_preview_text_window_ParamLimits

0x9acf,	// (0x00031e9c) popup_preview_text_window

0xc6da,	// (0x00034aa7) list_single_pane_cp2_g4

0x8b6a,	// (0x00030f37) bg_popup_preview_window_pane_ParamLimits

0x8b6a,	// (0x00030f37) bg_popup_preview_window_pane

0xdb96,	// (0x00035f63) popup_preview_text_window_t1_ParamLimits

0xdb96,	// (0x00035f63) popup_preview_text_window_t1

0xdbb4,	// (0x00035f81) popup_preview_text_window_t2_ParamLimits

0xdbb4,	// (0x00035f81) popup_preview_text_window_t2

0xdbfd,	// (0x00035fca) popup_preview_text_window_t3_ParamLimits

0xdbfd,	// (0x00035fca) popup_preview_text_window_t3

0xdc42,	// (0x0003600f) popup_preview_text_window_t4_ParamLimits

0xdc42,	// (0x0003600f) popup_preview_text_window_t4

0x0004,

0xf90c,	// (0x00037cd9) popup_preview_text_window_t_ParamLimits

0xf90c,	// (0x00037cd9) popup_preview_text_window_t

0xdcc0,	// (0x0003608d) scroll_pane_cp11

0xcca3,	// (0x00035070) bg_popup_preview_window_pane_g1

0xdb56,	// (0x00035f23) bg_popup_preview_window_pane_g2

0xdb5e,	// (0x00035f2b) bg_popup_preview_window_pane_g3

0xdb66,	// (0x00035f33) bg_popup_preview_window_pane_g4

0xdb6e,	// (0x00035f3b) bg_popup_preview_window_pane_g5

0xdb76,	// (0x00035f43) bg_popup_preview_window_pane_g6

0xdb7e,	// (0x00035f4b) bg_popup_preview_window_pane_g7

0xdb86,	// (0x00035f53) bg_popup_preview_window_pane_g8

0x4fec,	// (0x0002d3b9) aid_popup_width_pane

0x9a51,	// (0x00031e1e) popup_midp_note_alarm_window_ParamLimits

0x9a51,	// (0x00031e1e) popup_midp_note_alarm_window

0x903a,	// (0x00031407) data_form_pane_ParamLimits

0x8038,	// (0x00030405) form_field_data_pane_g1

0x8042,	// (0x0003040f) form_field_data_pane_t1_ParamLimits

0x9046,	// (0x00031413) input_focus_pane_ParamLimits

0x9054,	// (0x00031421) data_form_wide_pane_ParamLimits

0x4812,	// (0x0002cbdf) form_field_data_wide_pane_g1

0x481e,	// (0x0002cbeb) form_field_data_wide_pane_t1_ParamLimits

0x8df6,	// (0x000311c3) input_focus_pane_cp6_ParamLimits

0x914e,	// (0x0003151b) input_popup_find_pane_g1_ParamLimits

0x914e,	// (0x0003151b) input_popup_find_pane_g1

0x544d,	// (0x0002d81a) aid_navi_side_left_pane

0x545d,	// (0x0002d82a) aid_navi_side_right_pane

0xd48e,	// (0x0003585b) bg_popup_window_pane_cp30_ParamLimits

0xd48e,	// (0x0003585b) bg_popup_window_pane_cp30

0xd508,	// (0x000358d5) popup_midp_note_alarm_window_g1_ParamLimits

0xd508,	// (0x000358d5) popup_midp_note_alarm_window_g1

0xd538,	// (0x00035905) popup_midp_note_alarm_window_t1_ParamLimits

0xd538,	// (0x00035905) popup_midp_note_alarm_window_t1

0xd5d9,	// (0x000359a6) popup_midp_note_alarm_window_t2_ParamLimits

0xd5d9,	// (0x000359a6) popup_midp_note_alarm_window_t2

0xd687,	// (0x00035a54) popup_midp_note_alarm_window_t3_ParamLimits

0xd687,	// (0x00035a54) popup_midp_note_alarm_window_t3

0xd6af,	// (0x00035a7c) popup_midp_note_alarm_window_t4_ParamLimits

0xd6af,	// (0x00035a7c) popup_midp_note_alarm_window_t4

0xd6cf,	// (0x00035a9c) popup_midp_note_alarm_window_t5_ParamLimits

0xd6cf,	// (0x00035a9c) popup_midp_note_alarm_window_t5

0x000a,

0xf8a9,	// (0x00037c76) popup_midp_note_alarm_window_t_ParamLimits

0xf8a9,	// (0x00037c76) popup_midp_note_alarm_window_t

0xd77b,	// (0x00035b48) wait_bar_pane_cp1_ParamLimits

0xd77b,	// (0x00035b48) wait_bar_pane_cp1

0x8561,	// (0x0003092e) wait_anim_pane_copy1

0x8561,	// (0x0003092e) wait_border_pane_copy1

0xd1d4,	// (0x000355a1) wait_border_pane_g1_copy1

0x4838,	// (0x0002cc05) form_field_popup_pane_g1

0x805a,	// (0x00030427) form_field_popup_pane_t1_ParamLimits

0x9046,	// (0x00031413) input_focus_pane_cp7_ParamLimits

0x903a,	// (0x00031407) list_form_pane_ParamLimits

0x4858,	// (0x0002cc25) form_field_popup_wide_pane_g1

0x4860,	// (0x0002cc2d) form_field_popup_wide_pane_t1_ParamLimits

0x9046,	// (0x00031413) input_focus_pane_cp8_ParamLimits

0x9080,	// (0x0003144d) list_form_wide_pane_ParamLimits

0xe04c,	// (0x00036419) aid_size_cell_graphic_pane

0x80d7,	// (0x000304a4) data_form_pane_t1_ParamLimits

0x81e9,	// (0x000305b6) data_form_wide_pane_t1_ParamLimits

0x9e2d,	// (0x000321fa) bg_status_flat_pane

0x865e,	// (0x00030a2b) title_pane_t1_ParamLimits

0x86eb,	// (0x00030ab8) title_pane_t2_ParamLimits

0x8711,	// (0x00030ade) title_pane_t3_ParamLimits

0xf573,	// (0x00037940) title_pane_t_ParamLimits

0x9437,	// (0x00031804) level_1_signal_ParamLimits

0x9449,	// (0x00031816) level_2_signal_ParamLimits

0x945c,	// (0x00031829) level_3_signal_ParamLimits

0x946f,	// (0x0003183c) level_4_signal_ParamLimits

0x9482,	// (0x0003184f) level_5_signal_ParamLimits

0x9495,	// (0x00031862) level_6_signal_ParamLimits

0x94a8,	// (0x00031875) level_7_signal_ParamLimits

0x9437,	// (0x00031804) level_1_battery_ParamLimits

0x9449,	// (0x00031816) level_2_battery_ParamLimits

0x945c,	// (0x00031829) level_3_battery_ParamLimits

0x946f,	// (0x0003183c) level_4_battery_ParamLimits

0x9482,	// (0x0003184f) level_5_battery_ParamLimits

0x9495,	// (0x00031862) level_6_battery_ParamLimits

0x94a8,	// (0x00031875) level_7_battery_ParamLimits

0xd3bd,	// (0x0003578a) bg_status_flat_pane_g1

0xd3c5,	// (0x00035792) bg_status_flat_pane_g2

0xd3cd,	// (0x0003579a) bg_status_flat_pane_g3

0xd3d5,	// (0x000357a2) bg_status_flat_pane_g4

0xd3dd,	// (0x000357aa) bg_status_flat_pane_g5

0xd3e5,	// (0x000357b2) bg_status_flat_pane_g6

0xd3ed,	// (0x000357ba) bg_status_flat_pane_g7

0x8739,	// (0x00030b06) tabs_3_active_pane_t1_ParamLimits

0x8739,	// (0x00030b06) tabs_3_passive_pane_t1_ParamLimits

0x874f,	// (0x00030b1c) tabs_4_active_pane_t1_ParamLimits

0x874f,	// (0x00030b1c) tabs_4_1_passive_pane_t1_ParamLimits

0x91da,	// (0x000315a7) tabs_2_active_pane_t1_ParamLimits

0x91da,	// (0x000315a7) tabs_2_passive_pane_t1_ParamLimits

0x876d,	// (0x00030b3a) bg_active_tab_pane_cp4_ParamLimits

0x91f0,	// (0x000315bd) tabs_2_long_active_pane_t1_ParamLimits

0xc0d3,	// (0x000344a0) bg_passive_tab_pane_cp4_ParamLimits

0x5964,	// (0x0002dd31) list_single_midp_graphic_pane_t1_ParamLimits

0x876d,	// (0x00030b3a) bg_active_tab_pane_cp5_ParamLimits

0x9207,	// (0x000315d4) tabs_3_long_active_pane_t1_ParamLimits

0xc0d3,	// (0x000344a0) bg_passive_tab_pane_cp5_ParamLimits

0x5964,	// (0x0002dd31) list_single_midp_graphic_pane_t1

0x9e2d,	// (0x000321fa) bg_status_flat_pane_ParamLimits

0xcb82,	// (0x00034f4f) indicator_pane_cp2_ParamLimits

0xcb82,	// (0x00034f4f) indicator_pane_cp2

0x9f93,	// (0x00032360) navi_pane_srt_ParamLimits

0x9f93,	// (0x00032360) navi_pane_srt

0xcbaa,	// (0x00034f77) popup_clock_digital_analogue_window_cp1

0x88f5,	// (0x00030cc2) indicator_pane_t1

0xc795,	// (0x00034b62) copy_highlight_pane

0xc795,	// (0x00034b62) cursor_graphics_pane

0xc795,	// (0x00034b62) graphic_within_text_pane

0xc795,	// (0x00034b62) link_highlight_pane

0xdc83,	// (0x00036050) popup_preview_text_window_t5_ParamLimits

0xdc83,	// (0x00036050) popup_preview_text_window_t5

0xc810,	// (0x00034bdd) cursor_digital_pane

0xc810,	// (0x00034bdd) cursor_primary_pane

0xc821,	// (0x00034bee) cursor_primary_small_pane

0xc829,	// (0x00034bf6) cursor_secondary_pane

0xc831,	// (0x00034bfe) cursor_title_pane

0xc810,	// (0x00034bdd) link_highlight_digital_pane

0xc818,	// (0x00034be5) link_highlight_primary_pane

0xc821,	// (0x00034bee) link_highlight_primary_small_pane

0xc829,	// (0x00034bf6) link_highlight_secondary_pane

0xc831,	// (0x00034bfe) link_highlight_title_pane

0xc810,	// (0x00034bdd) copy_highlight_digital_pane

0xc810,	// (0x00034bdd) copy_highlight_primary_pane

0xc821,	// (0x00034bee) copy_highlight_primary_small_pane

0xc829,	// (0x00034bf6) copy_highlight_secondary_pane

0xc831,	// (0x00034bfe) copy_highlight_title_pane

0xc829,	// (0x00034bf6) graphic_text_digital_pane

0xd43d,	// (0x0003580a) graphic_text_primary_pane

0xd446,	// (0x00035813) graphic_text_primary_small_pane

0xc821,	// (0x00034bee) graphic_text_secondary_pane

0xc810,	// (0x00034bdd) graphic_text_title_pane

0x9637,	// (0x00031a04) cursor_primary_pane_g1

0xd42f,	// (0x000357fc) cursor_text_primary_t1

0xa268,	// (0x00032635) cursor_primary_small_pane_g1

0xd421,	// (0x000357ee) cursor_text_primary_small_t1

0xa25e,	// (0x0003262b) cursor_primary_small_pane_g1_copy1

0xd413,	// (0x000357e0) cursor_text_primary_small_t1_copy1

0xd405,	// (0x000357d2) cursor_text_title_t1

0xa254,	// (0x00032621) cursor_title_pane_g1

0x9637,	// (0x00031a04) cursor_digital_pane_g1

0xc839,	// (0x00034c06) cursor_text_digital_t1

0xc847,	// (0x00034c14) link_highlight_primary_pane_g1

0xd3ae,	// (0x0003577b) link_highlight_primary_pane_t1

0xc847,	// (0x00034c14) link_highlight_primary_small_pane_g1

0xc84f,	// (0x00034c1c) link_highlight_primary_small_pane_t1

0xc85e,	// (0x00034c2b) link_highlight_secondary_pane_g1

0xc866,	// (0x00034c33) link_highlight_secondary_pane_t1

0xd313,	// (0x000356e0) link_highlight_title_pane_g1

0xd32a,	// (0x000356f7) link_highlight_title_pane_t1

0xd313,	// (0x000356e0) link_highlight_digital_pane_g1

0xd31b,	// (0x000356e8) link_highlight_digital_pane_t1

0xd1ef,	// (0x000355bc) copy_highlight_primary_pane_g1

0xd215,	// (0x000355e2) copy_highlight_primary_pane_t1

0xd1ef,	// (0x000355bc) copy_highlight_primary_small_pane_g1

0xd206,	// (0x000355d3) copy_highlight_primary_small_pane_t1

0xc875,	// (0x00034c42) copy_highlight_secondary_pane_g1

0xc87d,	// (0x00034c4a) copy_highlight_secondary_pane_t1

0xd1ef,	// (0x000355bc) copy_highlight_title_pane_g1

0xd1f7,	// (0x000355c4) copy_highlight_title_pane_t1

0xd1ef,	// (0x000355bc) copy_highlight_digital_pane_g1

0xe17c,	// (0x00036549) copy_highlight_digital_pane_t1

0xe0d0,	// (0x0003649d) graphic_text_primary_pane_g1

0xe160,	// (0x0003652d) graphic_text_primary_pane_t1

0xe16e,	// (0x0003653b) graphic_text_primary_pane_t2

0x0001,

0xf9d8,	// (0x00037da5) graphic_text_primary_pane_t

0xe13c,	// (0x00036509) graphic_text_primary_small_pane_g1

0xe144,	// (0x00036511) graphic_text_primary_small_pane_t1

0xe152,	// (0x0003651f) graphic_text_primary_small_pane_t2

0x0001,

0xf9d3,	// (0x00037da0) graphic_text_primary_small_pane_t

0xe118,	// (0x000364e5) graphic_text_secondary_pane_g1

0xe120,	// (0x000364ed) graphic_text_secondary_pane_t1

0xe12e,	// (0x000364fb) graphic_text_secondary_pane_t2

0x0001,

0xf9ce,	// (0x00037d9b) graphic_text_secondary_pane_t

0xe0f4,	// (0x000364c1) graphic_text_title_pane_g1

0xe0fc,	// (0x000364c9) graphic_text_title_pane_t1

0xe10a,	// (0x000364d7) graphic_text_title_pane_t2

0x0001,

0xf9c9,	// (0x00037d96) graphic_text_title_pane_t

0xe0d0,	// (0x0003649d) graphic_text_digital_pane_g1

0xe0d8,	// (0x000364a5) graphic_text_digital_pane_t1

0xe0e6,	// (0x000364b3) graphic_text_digital_pane_t2

0x0001,

0xf9c4,	// (0x00037d91) graphic_text_digital_pane_t

0x876d,	// (0x00030b3a) navi_icon_pane_srt_ParamLimits

0x876d,	// (0x00030b3a) navi_icon_pane_srt

0x8561,	// (0x0003092e) navi_midp_pane_srt

0x8561,	// (0x0003092e) navi_navi_pane_srt

0x876d,	// (0x00030b3a) navi_text_pane_srt_ParamLimits

0x876d,	// (0x00030b3a) navi_text_pane_srt

0xe09b,	// (0x00036468) navi_navi_icon_text_pane_srt

0xe0a3,	// (0x00036470) navi_navi_pane_srt_g1_ParamLimits

0xe0a3,	// (0x00036470) navi_navi_pane_srt_g1

0xe0b5,	// (0x00036482) navi_navi_pane_srt_g2_ParamLimits

0xe0b5,	// (0x00036482) navi_navi_pane_srt_g2

0x0001,

0xf9bf,	// (0x00037d8c) navi_navi_pane_srt_g_ParamLimits

0xf9bf,	// (0x00037d8c) navi_navi_pane_srt_g

0xe0c7,	// (0x00036494) navi_navi_tabs_pane_srt

0xe09b,	// (0x00036468) navi_navi_text_pane_srt

0xe09b,	// (0x00036468) navi_navi_volume_pane_srt

0xe08c,	// (0x00036459) navi_navi_text_pane_srt_t1

0x5c9b,	// (0x0002e068) navi_navi_volume_pane_srt_g1

0x5ca3,	// (0x0002e070) volume_small_pane_srt_ParamLimits

0x5ca3,	// (0x0002e070) volume_small_pane_srt

0x5704,	// (0x0002dad1) volume_small_pane_srt_g1_ParamLimits

0x5704,	// (0x0002dad1) volume_small_pane_srt_g1

0x5714,	// (0x0002dae1) volume_small_pane_srt_g2_ParamLimits

0x5714,	// (0x0002dae1) volume_small_pane_srt_g2

0x5725,	// (0x0002daf2) volume_small_pane_srt_g3_ParamLimits

0x5725,	// (0x0002daf2) volume_small_pane_srt_g3

0x5736,	// (0x0002db03) volume_small_pane_srt_g4_ParamLimits

0x5736,	// (0x0002db03) volume_small_pane_srt_g4

0x5747,	// (0x0002db14) volume_small_pane_srt_g5_ParamLimits

0x5747,	// (0x0002db14) volume_small_pane_srt_g5

0x5758,	// (0x0002db25) volume_small_pane_srt_g6_ParamLimits

0x5758,	// (0x0002db25) volume_small_pane_srt_g6

0x5769,	// (0x0002db36) volume_small_pane_srt_g7_ParamLimits

0x5769,	// (0x0002db36) volume_small_pane_srt_g7

0x577a,	// (0x0002db47) volume_small_pane_srt_g8_ParamLimits

0x577a,	// (0x0002db47) volume_small_pane_srt_g8

0x578b,	// (0x0002db58) volume_small_pane_srt_g9_ParamLimits

0x578b,	// (0x0002db58) volume_small_pane_srt_g9

0x579c,	// (0x0002db69) volume_small_pane_srt_g10_ParamLimits

0x579c,	// (0x0002db69) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x00037b47) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x00037b47) volume_small_pane_srt_g

0x8c13,	// (0x00030fe0) query_popup_data_pane_cp2

0xe072,	// (0x0003643f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe072,	// (0x0003643f) navi_navi_icon_text_pane_srt_t1

0xd43d,	// (0x0003580a) navi_tabs_2_long_pane_srt

0xd43d,	// (0x0003580a) navi_tabs_2_pane_srt

0xd43d,	// (0x0003580a) navi_tabs_3_long_pane_srt

0xd43d,	// (0x0003580a) navi_tabs_3_pane_srt

0xd43d,	// (0x0003580a) navi_tabs_4_pane_srt

0x5c7b,	// (0x0002e048) tabs_2_active_pane_srt_ParamLimits

0x5c7b,	// (0x0002e048) tabs_2_active_pane_srt

0x5c8b,	// (0x0002e058) tabs_2_passive_pane_srt_ParamLimits

0x5c8b,	// (0x0002e058) tabs_2_passive_pane_srt

0xcd9d,	// (0x0003516a) bg_passive_tab_pane_cp1_srt_ParamLimits

0xcd9d,	// (0x0003516a) bg_passive_tab_pane_cp1_srt

0xd9c1,	// (0x00035d8e) bg_passive_tab_pane_g1_cp1_srt

0xc49f,	// (0x0003486c) bg_passive_tab_pane_g2_cp1_srt

0xd9ca,	// (0x00035d97) bg_passive_tab_pane_g3_cp1_srt

0x8723,	// (0x00030af0) bg_active_tab_pane_cp1_srt_ParamLimits

0x8723,	// (0x00030af0) bg_active_tab_pane_cp1_srt

0xd9b9,	// (0x00035d86) tabs_2_active_pane_srt_g1

0x91da,	// (0x000315a7) tabs_2_active_pane_srt_t1_ParamLimits

0x91da,	// (0x000315a7) tabs_2_active_pane_srt_t1

0xd9c1,	// (0x00035d8e) bg_active_tab_pane_g1_cp1_srt

0xc49f,	// (0x0003486c) bg_active_tab_pane_g2_cp1_srt

0xd9ca,	// (0x00035d97) bg_active_tab_pane_g3_cp1_srt

0x5c48,	// (0x0002e015) tabs_3_active_pane_srt_ParamLimits

0x5c48,	// (0x0002e015) tabs_3_active_pane_srt

0x5c59,	// (0x0002e026) tabs_3_passive_pane_cp_srt_ParamLimits

0x5c59,	// (0x0002e026) tabs_3_passive_pane_cp_srt

0x5c6a,	// (0x0002e037) tabs_3_passive_pane_srt_ParamLimits

0x5c6a,	// (0x0002e037) tabs_3_passive_pane_srt

0xcd9d,	// (0x0003516a) bg_passive_tab_pane_cp2_srt_ParamLimits

0xcd9d,	// (0x0003516a) bg_passive_tab_pane_cp2_srt

0xc88c,	// (0x00034c59) bg_passive_tab_pane_g1_cp2_srt

0xc49f,	// (0x0003486c) bg_passive_tab_pane_g2_cp2_srt

0xc895,	// (0x00034c62) bg_passive_tab_pane_g3_cp2_srt

0x8723,	// (0x00030af0) bg_active_tab_pane_cp2_srt_ParamLimits

0x8723,	// (0x00030af0) bg_active_tab_pane_cp2_srt

0xe062,	// (0x0003642f) tabs_3_active_pane_srt_g1

0x8739,	// (0x00030b06) tabs_3_active_pane_srt_t1_ParamLimits

0x8739,	// (0x00030b06) tabs_3_active_pane_srt_t1

0xc88c,	// (0x00034c59) bg_active_tab_pane_g1_cp2_srt

0xc49f,	// (0x0003486c) bg_active_tab_pane_g2_cp2_srt

0xc895,	// (0x00034c62) bg_active_tab_pane_g3_cp2_srt

0x5c00,	// (0x0002dfcd) tabs_4_active_pane_srt_ParamLimits

0x5c00,	// (0x0002dfcd) tabs_4_active_pane_srt

0x5c12,	// (0x0002dfdf) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5c12,	// (0x0002dfdf) tabs_4_passive_pane_cp2_srt

0xc9af,	// (0x00034d7c) aid_size_cell_toolbar

0x97c1,	// (0x00031b8e) main_idle_act_pane_ParamLimits

0xca6b,	// (0x00034e38) popup_large_graphic_colour_window_ParamLimits

0x9d1f,	// (0x000320ec) popup_toolbar_window_ParamLimits

0x9d1f,	// (0x000320ec) popup_toolbar_window

0x5bd7,	// (0x0002dfa4) list_single_graphic_2heading_pane_ParamLimits

0x5bd7,	// (0x0002dfa4) list_single_graphic_2heading_pane

0xc12f,	// (0x000344fc) aid_size_cell_apps_grid_lsc_pane

0xc141,	// (0x0003450e) aid_size_cell_apps_grid_prt_pane

0xc0d3,	// (0x000344a0) bg_wml_button_pane_cp1_ParamLimits

0xc0d3,	// (0x000344a0) bg_wml_button_pane_cp1

0xa20b,	// (0x000325d8) form_midp_field_text_pane_t1_ParamLimits

0xcd9d,	// (0x0003516a) input_focus_pane_cp050_ParamLimits

0xcedd,	// (0x000352aa) list_midp_form_text_pane_ParamLimits

0xceba,	// (0x00035287) input_focus_pane_cp051_ParamLimits

0xcece,	// (0x0003529b) list_midp_choice_pane_ParamLimits

0xa1a9,	// (0x00032576) list_single_2graphic_pane_cp3_ParamLimits

0xa1a9,	// (0x00032576) list_single_2graphic_pane_cp3

0xa1bc,	// (0x00032589) list_single_midp_graphic_pane_ParamLimits

0xa1bc,	// (0x00032589) list_single_midp_graphic_pane

0x4a33,	// (0x0002ce00) list_single_graphic_2heading_pane_g1_ParamLimits

0x4a33,	// (0x0002ce00) list_single_graphic_2heading_pane_g1

0x4a3f,	// (0x0002ce0c) list_single_graphic_2heading_pane_g4_ParamLimits

0x4a3f,	// (0x0002ce0c) list_single_graphic_2heading_pane_g4

0x45ef,	// (0x0002c9bc) list_single_graphic_2heading_pane_g5_ParamLimits

0x45ef,	// (0x0002c9bc) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x00037b9a) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x00037b9a) list_single_graphic_2heading_pane_g

0x4a4b,	// (0x0002ce18) list_single_graphic_2heading_pane_t1_ParamLimits

0x4a4b,	// (0x0002ce18) list_single_graphic_2heading_pane_t1

0x4a5f,	// (0x0002ce2c) list_single_graphic_2heading_pane_t2_ParamLimits

0x4a5f,	// (0x0002ce2c) list_single_graphic_2heading_pane_t2

0x4a79,	// (0x0002ce46) list_single_graphic_2heading_pane_t3_ParamLimits

0x4a79,	// (0x0002ce46) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x00037ba1) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x00037ba1) list_single_graphic_2heading_pane_t

0xcbed,	// (0x00034fba) bg_popup_sub_pane_cp2

0xcc13,	// (0x00034fe0) grid_toobar_pane

0x5900,	// (0x0002dccd) cell_toolbar_pane_ParamLimits

0x5900,	// (0x0002dccd) cell_toolbar_pane

0xcc49,	// (0x00035016) cell_toolbar_pane_g1_ParamLimits

0xcc49,	// (0x00035016) cell_toolbar_pane_g1

0xcc5b,	// (0x00035028) cell_toolbar_pane_g2_ParamLimits

0xcc5b,	// (0x00035028) cell_toolbar_pane_g2

0x0001,

0xf7db,	// (0x00037ba8) cell_toolbar_pane_g_ParamLimits

0xf7db,	// (0x00037ba8) cell_toolbar_pane_g

0xcc7d,	// (0x0003504a) grid_highlight_pane_cp2_ParamLimits

0xcc7d,	// (0x0003504a) grid_highlight_pane_cp2

0xcc97,	// (0x00035064) toolbar_button_pane

0xcca3,	// (0x00035070) toolbar_button_pane_g1

0xccab,	// (0x00035078) toolbar_button_pane_g2

0xccb3,	// (0x00035080) toolbar_button_pane_g3

0xccbb,	// (0x00035088) toolbar_button_pane_g4

0xccc3,	// (0x00035090) toolbar_button_pane_g5

0xcccb,	// (0x00035098) toolbar_button_pane_g6

0xccd3,	// (0x000350a0) toolbar_button_pane_g7

0xccdb,	// (0x000350a8) toolbar_button_pane_g8

0xcce3,	// (0x000350b0) toolbar_button_pane_g9

0x0009,

0xf7e0,	// (0x00037bad) toolbar_button_pane_g

0x592f,	// (0x0002dcfc) list_single_2graphic_pane_g1_cp3_ParamLimits

0x592f,	// (0x0002dcfc) list_single_2graphic_pane_g1_cp3

0xa111,	// (0x000324de) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa111,	// (0x000324de) list_single_2graphic_pane_g2_cp3

0xc616,	// (0x000349e3) list_single_2graphic_pane_g3_cp3

0xcceb,	// (0x000350b8) list_single_2graphic_pane_g4_cp3_ParamLimits

0xcceb,	// (0x000350b8) list_single_2graphic_pane_g4_cp3

0x594a,	// (0x0002dd17) list_single_2graphic_pane_t1_cp3_ParamLimits

0x594a,	// (0x0002dd17) list_single_2graphic_pane_t1_cp3

0xc60a,	// (0x000349d7) list_single_midp_graphic_pane_g2_ParamLimits

0xc60a,	// (0x000349d7) list_single_midp_graphic_pane_g2

0x4a06,	// (0x0002cdd3) aid_zoom_text_primary

0x58f8,	// (0x0002dcc5) aid_zoom_text_secondary

0xc947,	// (0x00034d14) status_small_pane_g7_ParamLimits

0xc947,	// (0x00034d14) status_small_pane_g7

0xc96a,	// (0x00034d37) status_small_pane_t1_ParamLimits

0x8627,	// (0x000309f4) title_pane_g2

0x0003,

0xf56a,	// (0x00037937) title_pane_g

0x8cb2,	// (0x0003107f) aid_size_cell_colour_1_pane_ParamLimits

0x8cb2,	// (0x0003107f) aid_size_cell_colour_1_pane

0x8cc6,	// (0x00031093) aid_size_cell_colour_2_pane_ParamLimits

0x8cc6,	// (0x00031093) aid_size_cell_colour_2_pane

0x8cda,	// (0x000310a7) aid_size_cell_colour_3_pane_ParamLimits

0x8cda,	// (0x000310a7) aid_size_cell_colour_3_pane

0x8cee,	// (0x000310bb) aid_size_cell_colour_4_pane_ParamLimits

0x8cee,	// (0x000310bb) aid_size_cell_colour_4_pane

0x53af,	// (0x0002d77c) title_pane_stacon_g1_ParamLimits

0x53af,	// (0x0002d77c) title_pane_stacon_g1

0xd26c,	// (0x00035639) popup_note_wait_window_g3_ParamLimits

0xd26c,	// (0x00035639) popup_note_wait_window_g3

0xd2e2,	// (0x000356af) popup_note_wait_window_t5_ParamLimits

0xd2e2,	// (0x000356af) popup_note_wait_window_t5

0x8561,	// (0x0003092e) main_feb_china_hwr_fs_writing_pane

0x9822,	// (0x00031bef) popup_feb_china_hwr_fs_window_ParamLimits

0x9822,	// (0x00031bef) popup_feb_china_hwr_fs_window

0xa122,	// (0x000324ef) aid_size_cell_hwr_fs_ParamLimits

0xa122,	// (0x000324ef) aid_size_cell_hwr_fs

0xcd9d,	// (0x0003516a) bg_popup_sub_pane_cp3_ParamLimits

0xcd9d,	// (0x0003516a) bg_popup_sub_pane_cp3

0xa137,	// (0x00032504) grid_hwr_fs_pane_ParamLimits

0xa137,	// (0x00032504) grid_hwr_fs_pane

0x59a3,	// (0x0002dd70) linegrid_hwr_fs_pane_ParamLimits

0x59a3,	// (0x0002dd70) linegrid_hwr_fs_pane

0xa14f,	// (0x0003251c) cell_hwr_fs_pane_ParamLimits

0xa14f,	// (0x0003251c) cell_hwr_fs_pane

0xcda9,	// (0x00035176) linegrid_hwr_fs_pane_g1_ParamLimits

0xcda9,	// (0x00035176) linegrid_hwr_fs_pane_g1

0xa16f,	// (0x0003253c) linegrid_hwr_fs_pane_g2_ParamLimits

0xa16f,	// (0x0003253c) linegrid_hwr_fs_pane_g2

0xcdb5,	// (0x00035182) linegrid_hwr_fs_pane_g3_ParamLimits

0xcdb5,	// (0x00035182) linegrid_hwr_fs_pane_g3

0x59d1,	// (0x0002dd9e) linegrid_hwr_fs_pane_g4_ParamLimits

0x59d1,	// (0x0002dd9e) linegrid_hwr_fs_pane_g4

0x59eb,	// (0x0002ddb8) linegrid_hwr_fs_pane_g5_ParamLimits

0x59eb,	// (0x0002ddb8) linegrid_hwr_fs_pane_g5

0x0004,

0xf806,	// (0x00037bd3) linegrid_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x00037bd3) linegrid_hwr_fs_pane_g

0xcdc1,	// (0x0003518e) cell_hwr_fs_pane_g1_ParamLimits

0xcdc1,	// (0x0003518e) cell_hwr_fs_pane_g1

0xcbbb,	// (0x00034f88) cell_hwr_fs_pane_g2_ParamLimits

0xcbbb,	// (0x00034f88) cell_hwr_fs_pane_g2

0xa181,	// (0x0003254e) cell_hwr_fs_pane_g3_ParamLimits

0xa181,	// (0x0003254e) cell_hwr_fs_pane_g3

0xa18e,	// (0x0003255b) cell_hwr_fs_pane_g4_ParamLimits

0xa18e,	// (0x0003255b) cell_hwr_fs_pane_g4

0x0003,

0xf811,	// (0x00037bde) cell_hwr_fs_pane_g_ParamLimits

0xf811,	// (0x00037bde) cell_hwr_fs_pane_g

0xa19b,	// (0x00032568) cell_hwr_fs_pane_t1

0x8561,	// (0x0003092e) grid_highlight_pane_cp6

0x8561,	// (0x0003092e) main_idle_act2_pane

0x9188,	// (0x00031555) aid_inside_area_popup_secondary

0xa375,	// (0x00032742) aid_inside_area_window_primary_ParamLimits

0xa375,	// (0x00032742) aid_inside_area_window_primary

0xe18b,	// (0x00036558) ai2_news_ticker_pane

0xe193,	// (0x00036560) aid_size_cell_ai1_link_ParamLimits

0xe193,	// (0x00036560) aid_size_cell_ai1_link

0xa780,	// (0x00032b4d) popup_ai2_data_window_ParamLimits

0xa780,	// (0x00032b4d) popup_ai2_data_window

0xe1ad,	// (0x0003657a) popup_ai2_link_window_ParamLimits

0xe1ad,	// (0x0003657a) popup_ai2_link_window

0xcd9d,	// (0x0003516a) bg_popup_sub_pane_cp4_ParamLimits

0xcd9d,	// (0x0003516a) bg_popup_sub_pane_cp4

0xe1c1,	// (0x0003658e) grid_ai2_link_pane_ParamLimits

0xe1c1,	// (0x0003658e) grid_ai2_link_pane

0xe1d8,	// (0x000365a5) popup_ai2_link_window_g1_ParamLimits

0xe1d8,	// (0x000365a5) popup_ai2_link_window_g1

0xe1e4,	// (0x000365b1) popup_ai2_link_window_g2_ParamLimits

0xe1e4,	// (0x000365b1) popup_ai2_link_window_g2

0x0001,

0xf9dd,	// (0x00037daa) popup_ai2_link_window_g_ParamLimits

0xf9dd,	// (0x00037daa) popup_ai2_link_window_g

0xe1f3,	// (0x000365c0) ai2_mp_button_pane

0xe1fb,	// (0x000365c8) ai2_mp_volume_pane

0xceba,	// (0x00035287) bg_popup_sub_pane_cp5_ParamLimits

0xceba,	// (0x00035287) bg_popup_sub_pane_cp5

0xe203,	// (0x000365d0) heading_ai2_gene_pane_ParamLimits

0xe203,	// (0x000365d0) heading_ai2_gene_pane

0xe20f,	// (0x000365dc) list_ai2_gene_pane_ParamLimits

0xe20f,	// (0x000365dc) list_ai2_gene_pane

0xe257,	// (0x00036624) cell_ai2_link_pane_ParamLimits

0xe257,	// (0x00036624) cell_ai2_link_pane

0xe26d,	// (0x0003663a) cell_ai2_link_pane_g1

0x8561,	// (0x0003092e) grid_highlight_pane_cp7

0x5cb8,	// (0x0002e085) ai2_mp_volume_pane_g1

0xe302,	// (0x000366cf) ai2_mp_volume_pane_g2

0xa7aa,	// (0x00032b77) list_ai2_gene_pane_t1

0xe30a,	// (0x000366d7) ai2_mp_volume_pane_g3

0x0002,

0xf9f6,	// (0x00037dc3) ai2_mp_volume_pane_g

0x5cc0,	// (0x0002e08d) volume_small_pane_cp3

0xe312,	// (0x000366df) aid_size_cell_ai2_button

0xe31a,	// (0x000366e7) grid_ai2_button_pane

0xe323,	// (0x000366f0) cell_ai2_button_pane_ParamLimits

0xe323,	// (0x000366f0) cell_ai2_button_pane

0x8414,	// (0x000307e1) cell_ai2_button_pane_g1

0x8561,	// (0x0003092e) grid_highlight_pane_cp8

0xe2c2,	// (0x0003668f) ai2_gene_pane_t1_ParamLimits

0xe2c2,	// (0x0003668f) ai2_gene_pane_t1

0x9790,	// (0x00031b5d) aid_height_parent_landscape

0xa52d,	// (0x000328fa) aid_height_set_list

0xdf78,	// (0x00036345) aid_size_parent

0xe04c,	// (0x00036419) aid_size_cell_graphic_pane_ParamLimits

0xe21f,	// (0x000365ec) popup_ai2_data_window_g1_ParamLimits

0xe21f,	// (0x000365ec) popup_ai2_data_window_g1

0xe22b,	// (0x000365f8) ai2_news_ticker_pane_g1

0xe233,	// (0x00036600) ai2_news_ticker_pane_g2

0x0001,

0xf9e2,	// (0x00037daf) ai2_news_ticker_pane_g

0xe23b,	// (0x00036608) ai2_news_ticker_pane_t1

0xe249,	// (0x00036616) ai2_news_ticker_pane_t2

0x0001,

0xf9e7,	// (0x00037db4) ai2_news_ticker_pane_t

0xe02d,	// (0x000363fa) heading_ai2_gene_pane_g1

0xe276,	// (0x00036643) heading_ai2_gene_pane_t1_ParamLimits

0xe276,	// (0x00036643) heading_ai2_gene_pane_t1

0xe28b,	// (0x00036658) list_highlight_pane_cp6

0xa794,	// (0x00032b61) ai2_gene_pane_ParamLimits

0xa794,	// (0x00032b61) ai2_gene_pane

0xa7b8,	// (0x00032b85) list_ai2_gene_pane_t2

0x0001,

0xf9ec,	// (0x00037db9) list_ai2_gene_pane_t

0xe293,	// (0x00036660) list_highlight_pane_cp8_ParamLimits

0xe293,	// (0x00036660) list_highlight_pane_cp8

0xe2a4,	// (0x00036671) ai2_gene_pane_g1_ParamLimits

0xe2a4,	// (0x00036671) ai2_gene_pane_g1

0xe2b6,	// (0x00036683) ai2_gene_pane_g2_ParamLimits

0xe2b6,	// (0x00036683) ai2_gene_pane_g2

0x0001,

0xf9f1,	// (0x00037dbe) ai2_gene_pane_g_ParamLimits

0xf9f1,	// (0x00037dbe) ai2_gene_pane_g

0x8f7f,	// (0x0003134c) scroll_pane_cp12

0x974f,	// (0x00031b1c) control_pane_t3_ParamLimits

0x974f,	// (0x00031b1c) control_pane_t3

0xc95b,	// (0x00034d28) status_small_pane_g8_ParamLimits

0xc95b,	// (0x00034d28) status_small_pane_g8

0x9896,	// (0x00031c63) popup_find_window_ParamLimits

0x9a89,	// (0x00031e56) popup_note_image_window_ParamLimits

0x4490,	// (0x0002c85d) list_double2_graphic_pane_vc_g1_ParamLimits

0x4490,	// (0x0002c85d) list_double2_graphic_pane_vc_g1

0x5318,	// (0x0002d6e5) list_double2_graphic_pane_vc_g2_ParamLimits

0x5318,	// (0x0002d6e5) list_double2_graphic_pane_vc_g2

0x5324,	// (0x0002d6f1) list_double2_graphic_pane_vc_g3_ParamLimits

0x5324,	// (0x0002d6f1) list_double2_graphic_pane_vc_g3

0x0002,

0xf5dd,	// (0x000379aa) list_double2_graphic_pane_vc_g_ParamLimits

0xf5dd,	// (0x000379aa) list_double2_graphic_pane_vc_g

0x4468,	// (0x0002c835) list_double2_graphic_pane_vc_t1_ParamLimits

0x4468,	// (0x0002c835) list_double2_graphic_pane_vc_t1

0x5318,	// (0x0002d6e5) list_single_heading_pane_vc_g1_ParamLimits

0x5318,	// (0x0002d6e5) list_single_heading_pane_vc_g1

0x5324,	// (0x0002d6f1) list_single_heading_pane_vc_g2_ParamLimits

0x5324,	// (0x0002d6f1) list_single_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x000379bb) list_single_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x000379bb) list_single_heading_pane_vc_g

0x4a91,	// (0x0002ce5e) list_single_heading_pane_vc_t1_ParamLimits

0x4a91,	// (0x0002ce5e) list_single_heading_pane_vc_t1

0x4aa7,	// (0x0002ce74) list_single_heading_pane_vc_t2_ParamLimits

0x4aa7,	// (0x0002ce74) list_single_heading_pane_vc_t2

0x0001,

0xf7f5,	// (0x00037bc2) list_single_heading_pane_vc_t_ParamLimits

0xf7f5,	// (0x00037bc2) list_single_heading_pane_vc_t

0xccf7,	// (0x000350c4) list_setting_number_pane_vc_g1_ParamLimits

0xccf7,	// (0x000350c4) list_setting_number_pane_vc_g1

0xcd03,	// (0x000350d0) list_setting_number_pane_vc_g2_ParamLimits

0xcd03,	// (0x000350d0) list_setting_number_pane_vc_g2

0x0001,

0xf7fa,	// (0x00037bc7) list_setting_number_pane_vc_g_ParamLimits

0xf7fa,	// (0x00037bc7) list_setting_number_pane_vc_g

0xcd0f,	// (0x000350dc) list_setting_number_pane_vc_t1_ParamLimits

0xcd0f,	// (0x000350dc) list_setting_number_pane_vc_t1

0xcd23,	// (0x000350f0) list_setting_number_pane_vc_t2_ParamLimits

0xcd23,	// (0x000350f0) list_setting_number_pane_vc_t2

0xcd3f,	// (0x0003510c) list_setting_number_pane_vc_t3_ParamLimits

0xcd3f,	// (0x0003510c) list_setting_number_pane_vc_t3

0x0002,

0xf7ff,	// (0x00037bcc) list_setting_number_pane_vc_t_ParamLimits

0xf7ff,	// (0x00037bcc) list_setting_number_pane_vc_t

0xcd65,	// (0x00035132) set_value_pane_vc_ParamLimits

0xcd65,	// (0x00035132) set_value_pane_vc

0x5bd7,	// (0x0002dfa4) list_double2_graphic_pane_vc_ParamLimits

0x5bd7,	// (0x0002dfa4) list_double2_graphic_pane_vc

0xdfd3,	// (0x000363a0) list_double2_large_graphic_pane_vc_ParamLimits

0xdfd3,	// (0x000363a0) list_double2_large_graphic_pane_vc

0x5bd7,	// (0x0002dfa4) list_double2_pane_vc_ParamLimits

0x5bd7,	// (0x0002dfa4) list_double2_pane_vc

0x5bd7,	// (0x0002dfa4) list_double_graphic_heading_pane_vc_ParamLimits

0x5bd7,	// (0x0002dfa4) list_double_graphic_heading_pane_vc

0x5bd7,	// (0x0002dfa4) list_double_graphic_pane_vc_ParamLimits

0x5bd7,	// (0x0002dfa4) list_double_graphic_pane_vc

0x5bd7,	// (0x0002dfa4) list_double_heading_pane_vc_ParamLimits

0x5bd7,	// (0x0002dfa4) list_double_heading_pane_vc

0xdfd3,	// (0x000363a0) list_double_large_graphic_pane_vc_ParamLimits

0xdfd3,	// (0x000363a0) list_double_large_graphic_pane_vc

0x5bd7,	// (0x0002dfa4) list_double_number_pane_vc_ParamLimits

0x5bd7,	// (0x0002dfa4) list_double_number_pane_vc

0x5bd7,	// (0x0002dfa4) list_double_pane_vc_ParamLimits

0x5bd7,	// (0x0002dfa4) list_double_pane_vc

0x5bd7,	// (0x0002dfa4) list_double_time_pane_vc_ParamLimits

0x5bd7,	// (0x0002dfa4) list_double_time_pane_vc

0x5bd7,	// (0x0002dfa4) list_setting_number_pane_vc_ParamLimits

0x5bd7,	// (0x0002dfa4) list_setting_number_pane_vc

0x5bd7,	// (0x0002dfa4) list_setting_pane_vc_ParamLimits

0x5bd7,	// (0x0002dfa4) list_setting_pane_vc

0x5bd7,	// (0x0002dfa4) list_single_graphic_heading_pane_vc_ParamLimits

0x5bd7,	// (0x0002dfa4) list_single_graphic_heading_pane_vc

0x5bd7,	// (0x0002dfa4) list_single_heading_pane_vc_ParamLimits

0x5bd7,	// (0x0002dfa4) list_single_heading_pane_vc

0x5bd7,	// (0x0002dfa4) list_single_number_heading_pane_vc_ParamLimits

0x5bd7,	// (0x0002dfa4) list_single_number_heading_pane_vc

0x4490,	// (0x0002c85d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4490,	// (0x0002c85d) list_double_graphic_heading_pane_vc_g1

0x5318,	// (0x0002d6e5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5318,	// (0x0002d6e5) list_double_graphic_heading_pane_vc_g2

0x5324,	// (0x0002d6f1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5324,	// (0x0002d6f1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf5dd,	// (0x000379aa) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf5dd,	// (0x000379aa) list_double_graphic_heading_pane_vc_g

0x4b89,	// (0x0002cf56) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4b89,	// (0x0002cf56) list_double_graphic_heading_pane_vc_t1

0x4a91,	// (0x0002ce5e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4a91,	// (0x0002ce5e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fd,	// (0x00037dca) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fd,	// (0x00037dca) list_double_graphic_heading_pane_vc_t

0xccf7,	// (0x000350c4) list_setting_pane_vc_g1_ParamLimits

0xccf7,	// (0x000350c4) list_setting_pane_vc_g1

0xcd03,	// (0x000350d0) list_setting_pane_vc_g2_ParamLimits

0xcd03,	// (0x000350d0) list_setting_pane_vc_g2

0x0001,

0xf7fa,	// (0x00037bc7) list_setting_pane_vc_g_ParamLimits

0xf7fa,	// (0x00037bc7) list_setting_pane_vc_g

0xe512,	// (0x000368df) list_setting_pane_vc_t1_ParamLimits

0xe512,	// (0x000368df) list_setting_pane_vc_t1

0xe526,	// (0x000368f3) list_setting_pane_vc_t2_ParamLimits

0xe526,	// (0x000368f3) list_setting_pane_vc_t2

0x0001,

0xfa40,	// (0x00037e0d) list_setting_pane_vc_t_ParamLimits

0xfa40,	// (0x00037e0d) list_setting_pane_vc_t

0xcd65,	// (0x00035132) set_value_pane_cp_vc_ParamLimits

0xcd65,	// (0x00035132) set_value_pane_cp_vc

0x5318,	// (0x0002d6e5) list_single_number_heading_pane_vc_g1_ParamLimits

0x5318,	// (0x0002d6e5) list_single_number_heading_pane_vc_g1

0x5324,	// (0x0002d6f1) list_single_number_heading_pane_vc_g2_ParamLimits

0x5324,	// (0x0002d6f1) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x000379bb) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x000379bb) list_single_number_heading_pane_vc_g

0x4a91,	// (0x0002ce5e) list_single_number_heading_pane_vc_t1_ParamLimits

0x4a91,	// (0x0002ce5e) list_single_number_heading_pane_vc_t1

0x4b9b,	// (0x0002cf68) list_single_number_heading_pane_vc_t2_ParamLimits

0x4b9b,	// (0x0002cf68) list_single_number_heading_pane_vc_t2

0x4bad,	// (0x0002cf7a) list_single_number_heading_pane_vc_t3_ParamLimits

0x4bad,	// (0x0002cf7a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa45,	// (0x00037e12) list_single_number_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x00037e12) list_single_number_heading_pane_vc_t

0x4490,	// (0x0002c85d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4490,	// (0x0002c85d) list_single_graphic_heading_pane_vc_g1

0x5318,	// (0x0002d6e5) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5318,	// (0x0002d6e5) list_single_graphic_heading_pane_vc_g4

0x5324,	// (0x0002d6f1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5324,	// (0x0002d6f1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5dd,	// (0x000379aa) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5dd,	// (0x000379aa) list_single_graphic_heading_pane_vc_g

0x4a91,	// (0x0002ce5e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4a91,	// (0x0002ce5e) list_single_graphic_heading_pane_vc_t1

0x4bbf,	// (0x0002cf8c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4bbf,	// (0x0002cf8c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x00037e19) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x00037e19) list_single_graphic_heading_pane_vc_t

0x5318,	// (0x0002d6e5) list_double2_pane_vc_g1_ParamLimits

0x5318,	// (0x0002d6e5) list_double2_pane_vc_g1

0x5324,	// (0x0002d6f1) list_double2_pane_vc_g2_ParamLimits

0x5324,	// (0x0002d6f1) list_double2_pane_vc_g2

0x0001,

0xf5ee,	// (0x000379bb) list_double2_pane_vc_g_ParamLimits

0xf5ee,	// (0x000379bb) list_double2_pane_vc_g

0x43eb,	// (0x0002c7b8) list_double2_pane_vc_t1_ParamLimits

0x43eb,	// (0x0002c7b8) list_double2_pane_vc_t1

0x52ec,	// (0x0002d6b9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x52ec,	// (0x0002d6b9) list_double2_large_graphic_pane_vc_g1

0x52f8,	// (0x0002d6c5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x52f8,	// (0x0002d6c5) list_double2_large_graphic_pane_vc_g2

0x5304,	// (0x0002d6d1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5304,	// (0x0002d6d1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x000379d3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x000379d3) list_double2_large_graphic_pane_vc_g

0x43d5,	// (0x0002c7a2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x43d5,	// (0x0002c7a2) list_double2_large_graphic_pane_vc_t1

0x5d1a,	// (0x0002e0e7) list_double_time_pane_vc_g1_ParamLimits

0x5d1a,	// (0x0002e0e7) list_double_time_pane_vc_g1

0x5d26,	// (0x0002e0f3) list_double_time_pane_vc_g2_ParamLimits

0x5d26,	// (0x0002e0f3) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x00037e1e) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x00037e1e) list_double_time_pane_vc_g

0x4bd1,	// (0x0002cf9e) list_double_time_pane_vc_t1_ParamLimits

0x4bd1,	// (0x0002cf9e) list_double_time_pane_vc_t1

0x4bea,	// (0x0002cfb7) list_double_time_pane_vc_t2_ParamLimits

0x4bea,	// (0x0002cfb7) list_double_time_pane_vc_t2

0x4c23,	// (0x0002cff0) list_double_time_pane_vc_t3_ParamLimits

0x4c23,	// (0x0002cff0) list_double_time_pane_vc_t3

0x4c3b,	// (0x0002d008) list_double_time_pane_vc_t4_ParamLimits

0x4c3b,	// (0x0002d008) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x00037e23) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x00037e23) list_double_time_pane_vc_t

0x5318,	// (0x0002d6e5) list_double_pane_vc_g1_ParamLimits

0x5318,	// (0x0002d6e5) list_double_pane_vc_g1

0x5324,	// (0x0002d6f1) list_double_pane_vc_g2_ParamLimits

0x5324,	// (0x0002d6f1) list_double_pane_vc_g2

0x0001,

0xf5ee,	// (0x000379bb) list_double_pane_vc_g_ParamLimits

0xf5ee,	// (0x000379bb) list_double_pane_vc_g

0x4c4d,	// (0x0002d01a) list_double_pane_vc_t1_ParamLimits

0x4c4d,	// (0x0002d01a) list_double_pane_vc_t1

0x4c5f,	// (0x0002d02c) list_double_pane_vc_t2_ParamLimits

0x4c5f,	// (0x0002d02c) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x00037e2c) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x00037e2c) list_double_pane_vc_t

0x5318,	// (0x0002d6e5) list_double_number_pane_vc_g1_ParamLimits

0x5318,	// (0x0002d6e5) list_double_number_pane_vc_g1

0x5324,	// (0x0002d6f1) list_double_number_pane_vc_g2_ParamLimits

0x5324,	// (0x0002d6f1) list_double_number_pane_vc_g2

0x0001,

0xf5ee,	// (0x000379bb) list_double_number_pane_vc_g_ParamLimits

0xf5ee,	// (0x000379bb) list_double_number_pane_vc_g

0x4c75,	// (0x0002d042) list_double_number_pane_vc_t1_ParamLimits

0x4c75,	// (0x0002d042) list_double_number_pane_vc_t1

0x4c89,	// (0x0002d056) list_double_number_pane_vc_t2_ParamLimits

0x4c89,	// (0x0002d056) list_double_number_pane_vc_t2

0x4c5f,	// (0x0002d02c) list_double_number_pane_vc_t3_ParamLimits

0x4c5f,	// (0x0002d02c) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x00037e31) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x00037e31) list_double_number_pane_vc_t

0x5d32,	// (0x0002e0ff) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5d32,	// (0x0002e0ff) list_double_large_graphic_pane_vc_g1

0x5d3e,	// (0x0002e10b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5d3e,	// (0x0002e10b) list_double_large_graphic_pane_vc_g2

0x5304,	// (0x0002d6d1) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5304,	// (0x0002d6d1) list_double_large_graphic_pane_vc_g3

0x4c9b,	// (0x0002d068) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4c9b,	// (0x0002d068) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x00037e38) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x00037e38) list_double_large_graphic_pane_vc_g

0x4ca7,	// (0x0002d074) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4ca7,	// (0x0002d074) list_double_large_graphic_pane_vc_t1

0x4cb9,	// (0x0002d086) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4cb9,	// (0x0002d086) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x00037e41) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x00037e41) list_double_large_graphic_pane_vc_t

0x5318,	// (0x0002d6e5) list_double_heading_pane_vc_g1_ParamLimits

0x5318,	// (0x0002d6e5) list_double_heading_pane_vc_g1

0x5324,	// (0x0002d6f1) list_double_heading_pane_vc_g2_ParamLimits

0x5324,	// (0x0002d6f1) list_double_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x000379bb) list_double_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x000379bb) list_double_heading_pane_vc_g

0x4cd0,	// (0x0002d09d) list_double_heading_pane_vc_t1_ParamLimits

0x4cd0,	// (0x0002d09d) list_double_heading_pane_vc_t1

0x4a91,	// (0x0002ce5e) list_double_heading_pane_vc_t2_ParamLimits

0x4a91,	// (0x0002ce5e) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x00037e46) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x00037e46) list_double_heading_pane_vc_t

0x4490,	// (0x0002c85d) list_double_graphic_pane_vc_g1_ParamLimits

0x4490,	// (0x0002c85d) list_double_graphic_pane_vc_g1

0x5330,	// (0x0002d6fd) list_double_graphic_pane_vc_g2_ParamLimits

0x5330,	// (0x0002d6fd) list_double_graphic_pane_vc_g2

0x533f,	// (0x0002d70c) list_double_graphic_pane_vc_g3_ParamLimits

0x533f,	// (0x0002d70c) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x00037e4b) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x00037e4b) list_double_graphic_pane_vc_g

0x4ce2,	// (0x0002d0af) list_double_graphic_pane_vc_t1_ParamLimits

0x4ce2,	// (0x0002d0af) list_double_graphic_pane_vc_t1

0x4c5f,	// (0x0002d02c) list_double_graphic_pane_vc_t2_ParamLimits

0x4c5f,	// (0x0002d02c) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x00037e52) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x00037e52) list_double_graphic_pane_vc_t

0x4ff4,	// (0x0002d3c1) aid_size_cell_fastswap

0x841e,	// (0x000307eb) aid_size_cell_touch_ParamLimits

0x841e,	// (0x000307eb) aid_size_cell_touch

0x5141,	// (0x0002d50e) popup_fast_swap_wide_window_ParamLimits

0x5141,	// (0x0002d50e) popup_fast_swap_wide_window

0x85ba,	// (0x00030987) touch_pane_ParamLimits

0x85ba,	// (0x00030987) touch_pane

0x474e,	// (0x0002cb1b) button_value_adjust_pane_cp2

0x4756,	// (0x0002cb23) button_value_adjust_pane_cp4

0x4776,	// (0x0002cb43) form_field_data_pane_cp2

0x7fff,	// (0x000303cc) form_field_data_wide_pane_cp2

0xc178,	// (0x00034545) bg_scroll_pane_ParamLimits

0x54d0,	// (0x0002d89d) scroll_handle_pane_ParamLimits

0x54e4,	// (0x0002d8b1) scroll_sc2_down_pane_ParamLimits

0x54e4,	// (0x0002d8b1) scroll_sc2_down_pane

0xc1a9,	// (0x00034576) scroll_sc2_up_pane_ParamLimits

0xc1a9,	// (0x00034576) scroll_sc2_up_pane

0xa8dc,	// (0x00032ca9) grid_wheel_folder_pane_g1_ParamLimits

0xa8dc,	// (0x00032ca9) grid_wheel_folder_pane_g1

0x56a8,	// (0x0002da75) clock_nsta_pane_cp2_ParamLimits

0x56a8,	// (0x0002da75) clock_nsta_pane_cp2

0x959a,	// (0x00031967) listscroll_midp_pane_ParamLimits

0x95aa,	// (0x00031977) midp_canvas_pane

0x58f0,	// (0x0002dcbd) nsta_clock_indic_pane

0xc9d7,	// (0x00034da4) listscroll_form_pane_vc

0xc9df,	// (0x00034dac) listscroll_set_pane_vc_ParamLimits

0xc9df,	// (0x00034dac) listscroll_set_pane_vc

0x9e55,	// (0x00032222) clock_nsta_pane

0x9e78,	// (0x00032245) indicator_nsta_pane

0xcbed,	// (0x00034fba) bg_popup_sub_pane_cp2_ParamLimits

0xcc01,	// (0x00034fce) find_pane_cp2_ParamLimits

0xcc01,	// (0x00034fce) find_pane_cp2

0xcc13,	// (0x00034fe0) grid_toobar_pane_ParamLimits

0xcd71,	// (0x0003513e) list_form_gen_pane_vc_ParamLimits

0xcd71,	// (0x0003513e) list_form_gen_pane_vc

0xcd87,	// (0x00035154) scroll_pane_cp8_vc_ParamLimits

0xcd87,	// (0x00035154) scroll_pane_cp8_vc

0xcdd7,	// (0x000351a4) data_form_wide_pane_vc_ParamLimits

0xcdd7,	// (0x000351a4) data_form_wide_pane_vc

0xcde3,	// (0x000351b0) form_field_data_wide_pane_vc_g1

0xcdeb,	// (0x000351b8) form_field_data_wide_pane_vc_t1_ParamLimits

0xcdeb,	// (0x000351b8) form_field_data_wide_pane_vc_t1

0x9046,	// (0x00031413) input_focus_pane_cp6_vc_ParamLimits

0x9046,	// (0x00031413) input_focus_pane_cp6_vc

0xa22c,	// (0x000325f9) list_midp_pane_ParamLimits

0xd9d3,	// (0x00035da0) scroll_pane_cp16_ParamLimits

0xd9d3,	// (0x00035da0) scroll_pane_cp16

0xd052,	// (0x0003541f) button_value_adjust_pane_ParamLimits

0xd052,	// (0x0003541f) button_value_adjust_pane

0xa539,	// (0x00032906) button_value_adjust_pane_cp6_ParamLimits

0xa539,	// (0x00032906) button_value_adjust_pane_cp6

0xa643,	// (0x00032a10) settings_code_pane_cp_ParamLimits

0xa643,	// (0x00032a10) settings_code_pane_cp

0x8414,	// (0x000307e1) cell_touch_pane_g1

0x8414,	// (0x000307e1) cell_touch_pane_g2

0x0001,

0xf724,	// (0x00037af1) cell_touch_pane_g

0xa7c6,	// (0x00032b93) cell_touch_pane_cp_ParamLimits

0xa7c6,	// (0x00032b93) cell_touch_pane_cp

0xa7e2,	// (0x00032baf) cell_touch_pane_ParamLimits

0xa7e2,	// (0x00032baf) cell_touch_pane

0x8414,	// (0x000307e1) scroll_sc2_down_pane_g1

0x8414,	// (0x000307e1) scroll_sc2_up_pane_g1

0x8561,	// (0x0003092e) bg_set_opt_pane_cp4_vc

0xe335,	// (0x00036702) list_set_graphic_pane_vc_g1_ParamLimits

0xe335,	// (0x00036702) list_set_graphic_pane_vc_g1

0xe341,	// (0x0003670e) list_set_graphic_pane_vc_g2_ParamLimits

0xe341,	// (0x0003670e) list_set_graphic_pane_vc_g2

0x0001,

0xfa02,	// (0x00037dcf) list_set_graphic_pane_vc_g_ParamLimits

0xfa02,	// (0x00037dcf) list_set_graphic_pane_vc_g

0xe34d,	// (0x0003671a) text_primary_small_cp13_vc_ParamLimits

0xe34d,	// (0x0003671a) text_primary_small_cp13_vc

0xe365,	// (0x00036732) list_set_graphic_pane_vc_ParamLimits

0xe365,	// (0x00036732) list_set_graphic_pane_vc

0x8561,	// (0x0003092e) input_focus_pane_cp2_vc

0x8414,	// (0x000307e1) setting_code_pane_vc_g1

0xe378,	// (0x00036745) setting_code_pane_vc_t1

0xe386,	// (0x00036753) set_text_pane_vc_t1_ParamLimits

0xe386,	// (0x00036753) set_text_pane_vc_t1

0x8561,	// (0x0003092e) input_focus_pane_cp1_vc

0xe3a1,	// (0x0003676e) list_set_text_pane_vc

0x8414,	// (0x000307e1) setting_text_pane_vc_g1

0x8561,	// (0x0003092e) bg_set_opt_pane_cp2_vc

0xe3ab,	// (0x00036778) setting_slider_graphic_pane_vc_g1

0xe3b3,	// (0x00036780) setting_slider_graphic_pane_vc_t1

0xe3c1,	// (0x0003678e) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa07,	// (0x00037dd4) setting_slider_graphic_pane_vc_t

0xe3cf,	// (0x0003679c) slider_set_pane_cp_vc

0xe3d7,	// (0x000367a4) slider_set_pane_vc_g1

0xe3e0,	// (0x000367ad) slider_set_pane_vc_g2

0x0006,

0xfa0c,	// (0x00037dd9) slider_set_pane_vc_g

0x90a1,	// (0x0003146e) set_opt_bg_pane_g1_copy1

0x90a9,	// (0x00031476) set_opt_bg_pane_g2_copy1

0xe40c,	// (0x000367d9) set_opt_bg_pane_g3_copy1

0x90b9,	// (0x00031486) set_opt_bg_pane_g4_copy1

0x90c1,	// (0x0003148e) set_opt_bg_pane_g5_copy1

0x90c9,	// (0x00031496) set_opt_bg_pane_g6_copy1

0xe414,	// (0x000367e1) set_opt_bg_pane_g7_copy1

0xe41c,	// (0x000367e9) set_opt_bg_pane_g8_copy1

0xe424,	// (0x000367f1) set_opt_bg_pane_g9_copy1

0x8561,	// (0x0003092e) bg_set_opt_pane_cp_vc

0xe42c,	// (0x000367f9) setting_slider_pane_vc_t1

0xe3b3,	// (0x00036780) setting_slider_pane_vc_t2

0xe3c1,	// (0x0003678e) setting_slider_pane_vc_t3

0x0002,

0xfa1b,	// (0x00037de8) setting_slider_pane_vc_t

0xe3cf,	// (0x0003679c) slider_set_pane_vc

0x5a0f,	// (0x0002dddc) volume_set_pane_vc_g1

0x5cc9,	// (0x0002e096) volume_set_pane_vc_g2

0x5cd2,	// (0x0002e09f) volume_set_pane_vc_g3

0x5cdb,	// (0x0002e0a8) volume_set_pane_vc_g4

0x5ce4,	// (0x0002e0b1) volume_set_pane_vc_g5

0x5ced,	// (0x0002e0ba) volume_set_pane_vc_g6

0x5cf6,	// (0x0002e0c3) volume_set_pane_vc_g7

0x5cff,	// (0x0002e0cc) volume_set_pane_vc_g8

0x5d08,	// (0x0002e0d5) volume_set_pane_vc_g9

0x5d11,	// (0x0002e0de) volume_set_pane_vc_g10

0x0009,

0xfa22,	// (0x00037def) volume_set_pane_vc_g

0xe43b,	// (0x00036808) volume_set_pane_vc

0xe443,	// (0x00036810) button_value_adjust_pane_cp1_vc

0xe44d,	// (0x0003681a) list_highlight_pane_cp2_vc

0xe456,	// (0x00036823) list_set_pane_vc_ParamLimits

0xe456,	// (0x00036823) list_set_pane_vc

0xe4a8,	// (0x00036875) main_pane_set_vc_t1_ParamLimits

0xe4a8,	// (0x00036875) main_pane_set_vc_t1

0xe4bd,	// (0x0003688a) main_pane_set_vc_t2_ParamLimits

0xe4bd,	// (0x0003688a) main_pane_set_vc_t2

0xe4cf,	// (0x0003689c) main_pane_set_vc_t3_ParamLimits

0xe4cf,	// (0x0003689c) main_pane_set_vc_t3

0xe4e1,	// (0x000368ae) main_pane_set_vc_t4_ParamLimits

0xe4e1,	// (0x000368ae) main_pane_set_vc_t4

0x0003,

0xfa37,	// (0x00037e04) main_pane_set_vc_t_ParamLimits

0xfa37,	// (0x00037e04) main_pane_set_vc_t

0xe4f3,	// (0x000368c0) setting_code_pane_vc_ParamLimits

0xe4f3,	// (0x000368c0) setting_code_pane_vc

0xe502,	// (0x000368cf) setting_slider_graphic_pane_vc

0xe502,	// (0x000368cf) setting_slider_pane_vc

0xe502,	// (0x000368cf) setting_text_pane_vc

0xe502,	// (0x000368cf) setting_volume_pane_vc

0xe50a,	// (0x000368d7) scroll_pane_cp121_vc

0x9031,	// (0x000313fe) set_content_pane_vc

0xe548,	// (0x00036915) button_value_adjust_pane_g1

0xe551,	// (0x0003691e) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x00037e57) button_value_adjust_pane_g

0xe55a,	// (0x00036927) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe55a,	// (0x00036927) form_field_slider_wide_pane_vc_t1

0xe570,	// (0x0003693d) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe570,	// (0x0003693d) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x00037e5c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x00037e5c) form_field_slider_wide_pane_vc_t

0x8723,	// (0x00030af0) input_focus_pane_cp10_vc_ParamLimits

0x8723,	// (0x00030af0) input_focus_pane_cp10_vc

0xe585,	// (0x00036952) slider_cont_pane_cp1_vc_ParamLimits

0xe585,	// (0x00036952) slider_cont_pane_cp1_vc

0xe3d7,	// (0x000367a4) slider_form_pane_g1_cp2

0xe3e0,	// (0x000367ad) slider_form_pane_g2_cp2

0xe5a0,	// (0x0003696d) form_field_slider_pane_vc_t3

0xe5ae,	// (0x0003697b) form_field_slider_pane_vc_t4

0xe5c4,	// (0x00036991) slider_form_pane_vc_ParamLimits

0xe5c4,	// (0x00036991) slider_form_pane_vc

0xe5d1,	// (0x0003699e) form_field_slider_pane_vc_t1_ParamLimits

0xe5d1,	// (0x0003699e) form_field_slider_pane_vc_t1

0xe5e7,	// (0x000369b4) form_field_slider_pane_vc_t2_ParamLimits

0xe5e7,	// (0x000369b4) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x00037e6c) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x00037e6c) form_field_slider_pane_vc_t

0x8723,	// (0x00030af0) input_focus_pane_cp9_vc_ParamLimits

0x8723,	// (0x00030af0) input_focus_pane_cp9_vc

0xe5f9,	// (0x000369c6) slider_cont_pane_vc_ParamLimits

0xe5f9,	// (0x000369c6) slider_cont_pane_vc

0xe60b,	// (0x000369d8) list_form_graphic_pane_cp_vc_ParamLimits

0xe60b,	// (0x000369d8) list_form_graphic_pane_cp_vc

0xcde3,	// (0x000351b0) form_field_popup_wide_pane_vc_g1

0xe620,	// (0x000369ed) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe620,	// (0x000369ed) form_field_popup_wide_pane_vc_t1

0x9046,	// (0x00031413) input_focus_pane_cp8_vc_ParamLimits

0x9046,	// (0x00031413) input_focus_pane_cp8_vc

0xe635,	// (0x00036a02) list_form_wide_pane_vc_ParamLimits

0xe635,	// (0x00036a02) list_form_wide_pane_vc

0xe641,	// (0x00036a0e) list_form_graphic_pane_vc_g1

0xe649,	// (0x00036a16) list_form_graphic_pane_vc_t1_ParamLimits

0xe649,	// (0x00036a16) list_form_graphic_pane_vc_t1

0x876d,	// (0x00030b3a) list_highlight_pane_cp5_vc_ParamLimits

0x876d,	// (0x00030b3a) list_highlight_pane_cp5_vc

0xe665,	// (0x00036a32) list_form_graphic_pane_vc_ParamLimits

0xe665,	// (0x00036a32) list_form_graphic_pane_vc

0xcde3,	// (0x000351b0) form_field_popup_pane_vc_g1

0xe67b,	// (0x00036a48) form_field_popup_pane_vc_t1_ParamLimits

0xe67b,	// (0x00036a48) form_field_popup_pane_vc_t1

0x9046,	// (0x00031413) input_focus_pane_cp7_vc_ParamLimits

0x9046,	// (0x00031413) input_focus_pane_cp7_vc

0xe690,	// (0x00036a5d) list_form_pane_vc_ParamLimits

0xe690,	// (0x00036a5d) list_form_pane_vc

0xe69c,	// (0x00036a69) data_form_pane_vc_t1_ParamLimits

0xe69c,	// (0x00036a69) data_form_pane_vc_t1

0x90a1,	// (0x0003146e) input_focus_pane_vc_g1

0x90a9,	// (0x00031476) input_focus_pane_vc_g2

0x90b1,	// (0x0003147e) input_focus_pane_vc_g3

0x90b9,	// (0x00031486) input_focus_pane_vc_g4

0x90c1,	// (0x0003148e) input_focus_pane_vc_g5

0x90c9,	// (0x00031496) input_focus_pane_vc_g6

0x90d1,	// (0x0003149e) input_focus_pane_vc_g7

0x90d9,	// (0x000314a6) input_focus_pane_vc_g8

0x90e1,	// (0x000314ae) input_focus_pane_vc_g9

0x8414,	// (0x000307e1) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x00037a7a) input_focus_pane_vc_g

0xcdd7,	// (0x000351a4) data_form_pane_vc_ParamLimits

0xcdd7,	// (0x000351a4) data_form_pane_vc

0xcde3,	// (0x000351b0) form_field_data_pane_vc_g1

0xe6b7,	// (0x00036a84) form_field_data_pane_vc_t1_ParamLimits

0xe6b7,	// (0x00036a84) form_field_data_pane_vc_t1

0x9046,	// (0x00031413) input_focus_pane_vc_ParamLimits

0x9046,	// (0x00031413) input_focus_pane_vc

0xd7fa,	// (0x00035bc7) button_value_adjust_pane_cp3_vc

0xe5bc,	// (0x00036989) button_value_adjust_pane_cp5_vc

0xe6cd,	// (0x00036a9a) form_field_data_pane_vc_ParamLimits

0xe6cd,	// (0x00036a9a) form_field_data_pane_vc

0xd802,	// (0x00035bcf) form_field_data_pane_vc_cp2

0xe6e4,	// (0x00036ab1) form_field_data_wide_pane_vc_ParamLimits

0xe6e4,	// (0x00036ab1) form_field_data_wide_pane_vc

0xe6fa,	// (0x00036ac7) form_field_data_wide_pane_vc_cp2

0xe702,	// (0x00036acf) form_field_popup_pane_vc_ParamLimits

0xe702,	// (0x00036acf) form_field_popup_pane_vc

0xe719,	// (0x00036ae6) form_field_popup_wide_pane_vc_ParamLimits

0xe719,	// (0x00036ae6) form_field_popup_wide_pane_vc

0xe72f,	// (0x00036afc) form_field_slider_pane_vc_ParamLimits

0xe72f,	// (0x00036afc) form_field_slider_pane_vc

0xe742,	// (0x00036b0f) form_field_slider_wide_pane_vc_ParamLimits

0xe742,	// (0x00036b0f) form_field_slider_wide_pane_vc

0xa800,	// (0x00032bcd) grid_touch_1_pane_ParamLimits

0xa800,	// (0x00032bcd) grid_touch_1_pane

0xa814,	// (0x00032be1) grid_touch_2_pane_ParamLimits

0xa814,	// (0x00032be1) grid_touch_2_pane

0xe755,	// (0x00036b22) touch_pane_g1_ParamLimits

0xe755,	// (0x00036b22) touch_pane_g1

0xe763,	// (0x00036b30) cell_app_pane_cp_wide_ParamLimits

0xe763,	// (0x00036b30) cell_app_pane_cp_wide

0xe773,	// (0x00036b40) grid_popup_fast_wide_pane_ParamLimits

0xe773,	// (0x00036b40) grid_popup_fast_wide_pane

0xe787,	// (0x00036b54) scroll_pane_cp19_ParamLimits

0xe787,	// (0x00036b54) scroll_pane_cp19

0x8561,	// (0x0003092e) bg_popup_window_pane_cp20

0xe79b,	// (0x00036b68) listscroll_popup_fast_wide_pane

0xd80a,	// (0x00035bd7) grid_indicator_nsta_pane

0xe7a3,	// (0x00036b70) clock_nsta_pane_g1

0xe7ac,	// (0x00036b79) clock_nsta_pane_t1

0xa83e,	// (0x00032c0b) cell_indicator_nsta_pane_ParamLimits

0xa83e,	// (0x00032c0b) cell_indicator_nsta_pane

0xe755,	// (0x00036b22) cell_indicator_nsta_pane_g1

0xa85b,	// (0x00032c28) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x00037e76) cell_indicator_nsta_pane_g

0xe7c8,	// (0x00036b95) clock_nsta_pane_cp

0xe7d0,	// (0x00036b9d) indicator_nsta_pane_cp

0xe7d9,	// (0x00036ba6) nsta_clock_indic_pane_g1

0x88d4,	// (0x00030ca1) grid_indicator_pane

0xc29b,	// (0x00034668) scroll_pane_cp29

0x55ff,	// (0x0002d9cc) indicator_nsta_pane_cp2_ParamLimits

0x55ff,	// (0x0002d9cc) indicator_nsta_pane_cp2

0x876d,	// (0x00030b3a) main_apps_wheel_pane

0xcef7,	// (0x000352c4) form_midp_field_text_pane_ParamLimits

0xd024,	// (0x000353f1) scroll_bar_cp050_ParamLimits

0xe842,	// (0x00036c0f) cell_indicator_pane_ParamLimits

0xe842,	// (0x00036c0f) cell_indicator_pane

0xe858,	// (0x00036c25) cell_indicator_pane_g1

0xa870,	// (0x00032c3d) grid_wheel_folder_pane_ParamLimits

0xa870,	// (0x00032c3d) grid_wheel_folder_pane

0xa87e,	// (0x00032c4b) list_wheel_apps_pane_ParamLimits

0xa87e,	// (0x00032c4b) list_wheel_apps_pane

0xa88a,	// (0x00032c57) main_apps_wheel_pane_g1_ParamLimits

0xa88a,	// (0x00032c57) main_apps_wheel_pane_g1

0xa896,	// (0x00032c63) main_apps_wheel_pane_g2_ParamLimits

0xa896,	// (0x00032c63) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x00037e92) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x00037e92) main_apps_wheel_pane_g

0xa8a2,	// (0x00032c6f) main_apps_wheel_pane_t1_ParamLimits

0xa8a2,	// (0x00032c6f) main_apps_wheel_pane_t1

0xa8b4,	// (0x00032c81) list_wheel_apps_pane_g1

0xa8bc,	// (0x00032c89) list_wheel_apps_pane_g2

0xa8c4,	// (0x00032c91) list_wheel_apps_pane_g3

0xa8cc,	// (0x00032c99) list_wheel_apps_pane_g4

0xa8d4,	// (0x00032ca1) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x00037e97) list_wheel_apps_pane_g

0x876d,	// (0x00030b3a) navi_icon_text_pane

0x9d61,	// (0x0003212e) aid_fill_nsta

0xe862,	// (0x00036c2f) navi_icon_text_pane_g1

0xe86e,	// (0x00036c3b) navi_icon_text_pane_t1

0xc510,	// (0x000348dd) list_set_graphic_pane_t1_ParamLimits

0xc510,	// (0x000348dd) list_set_graphic_pane_t1

0xd6fe,	// (0x00035acb) popup_midp_note_alarm_window_t6_ParamLimits

0xd6fe,	// (0x00035acb) popup_midp_note_alarm_window_t6

0xd710,	// (0x00035add) popup_midp_note_alarm_window_t7_ParamLimits

0xd710,	// (0x00035add) popup_midp_note_alarm_window_t7

0xd722,	// (0x00035aef) popup_midp_note_alarm_window_t8_ParamLimits

0xd722,	// (0x00035aef) popup_midp_note_alarm_window_t8

0xd734,	// (0x00035b01) popup_midp_note_alarm_window_t9_ParamLimits

0xd734,	// (0x00035b01) popup_midp_note_alarm_window_t9

0xd746,	// (0x00035b13) popup_midp_note_alarm_window_t10_ParamLimits

0xd746,	// (0x00035b13) popup_midp_note_alarm_window_t10

0xd758,	// (0x00035b25) popup_midp_note_alarm_window_t11_ParamLimits

0xd758,	// (0x00035b25) popup_midp_note_alarm_window_t11

0xd76a,	// (0x00035b37) scroll_pane_cp17_ParamLimits

0xd76a,	// (0x00035b37) scroll_pane_cp17

0x5a0f,	// (0x0002dddc) volume_small_pane_cp_g1

0x5d4d,	// (0x0002e11a) volume_small_pane_cp_g2

0x5d56,	// (0x0002e123) volume_small_pane_cp_g3

0x5d5f,	// (0x0002e12c) volume_small_pane_cp_g4

0x5a3c,	// (0x0002de09) volume_small_pane_cp_g5

0x5d68,	// (0x0002e135) volume_small_pane_cp_g6

0x5d71,	// (0x0002e13e) volume_small_pane_cp_g7

0x5d7a,	// (0x0002e147) volume_small_pane_cp_g8

0x5d83,	// (0x0002e150) volume_small_pane_cp_g9

0x5d8c,	// (0x0002e159) volume_small_pane_cp_g10

0xc7bf,	// (0x00034b8c) midp_ticker_pane_g1_ParamLimits

0xc7cb,	// (0x00034b98) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x00037b42) midp_ticker_pane_g_ParamLimits

0xc7d7,	// (0x00034ba4) midp_ticker_pane_t1_ParamLimits

0x9d77,	// (0x00032144) aid_fill_nsta_2

0xd010,	// (0x000353dd) list_form2_midp_pane

0xdfb4,	// (0x00036381) midp_editing_number_pane_ParamLimits

0xdfc0,	// (0x0003638d) midp_ticker_pane_ParamLimits

0xe880,	// (0x00036c4d) form2_midp_field_pane

0xe888,	// (0x00036c55) scroll_pane_cp51

0xe8a8,	// (0x00036c75) form2_midp_button_pane_ParamLimits

0xe8a8,	// (0x00036c75) form2_midp_button_pane

0xe8ba,	// (0x00036c87) form2_midp_content_pane_ParamLimits

0xe8ba,	// (0x00036c87) form2_midp_content_pane

0xe8d4,	// (0x00036ca1) form2_midp_field_choice_group_pane

0xe8dc,	// (0x00036ca9) form2_midp_field_pane_g1

0xe8e4,	// (0x00036cb1) form2_midp_field_pane_g2

0xe8ec,	// (0x00036cb9) form2_midp_field_pane_g3

0xe8f4,	// (0x00036cc1) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x00037ebc) form2_midp_field_pane_g

0xe8fc,	// (0x00036cc9) form2_midp_gauge_slider_pane

0xe904,	// (0x00036cd1) form2_midp_gauge_wait_pane

0xe90c,	// (0x00036cd9) form2_midp_image_pane_ParamLimits

0xe90c,	// (0x00036cd9) form2_midp_image_pane

0xe927,	// (0x00036cf4) form2_midp_label_pane_ParamLimits

0xe927,	// (0x00036cf4) form2_midp_label_pane

0xa909,	// (0x00032cd6) form2_midp_label_pane_cp_ParamLimits

0xa909,	// (0x00032cd6) form2_midp_label_pane_cp

0xe940,	// (0x00036d0d) form2_midp_string_pane_ParamLimits

0xe940,	// (0x00036d0d) form2_midp_string_pane

0x8224,	// (0x000305f1) form2_midp_text_pane_ParamLimits

0x8224,	// (0x000305f1) form2_midp_text_pane

0xe952,	// (0x00036d1f) form2_midp_time_pane

0xe962,	// (0x00036d2f) input_focus_pane_cp51_ParamLimits

0xe962,	// (0x00036d2f) input_focus_pane_cp51

0xe97a,	// (0x00036d47) form2_midp_label_pane_t1_ParamLimits

0xe97a,	// (0x00036d47) form2_midp_label_pane_t1

0x823d,	// (0x0003060a) form2_mdip_text_pane_t1_ParamLimits

0x823d,	// (0x0003060a) form2_mdip_text_pane_t1

0x4d28,	// (0x0002d0f5) form2_midp_time_pane_t1

0xe9c2,	// (0x00036d8f) form2_midp_gauge_slider_pane_t1

0xa928,	// (0x00032cf5) form2_midp_gauge_slider_pane_t2

0xa93a,	// (0x00032d07) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x00037ec5) form2_midp_gauge_slider_pane_t

0xe9d4,	// (0x00036da1) form2_midp_slider_pane

0xe9e0,	// (0x00036dad) form2_midp_gauge_wait_pane_t1

0xe9ee,	// (0x00036dbb) form2_midp_wait_pane_ParamLimits

0xe9ee,	// (0x00036dbb) form2_midp_wait_pane

0xa1a9,	// (0x00032576) list_single_2graphic_pane_cp4_ParamLimits

0xa1a9,	// (0x00032576) list_single_2graphic_pane_cp4

0xa94c,	// (0x00032d19) list_single_midp_graphic_pane_cp_ParamLimits

0xa94c,	// (0x00032d19) list_single_midp_graphic_pane_cp

0x8561,	// (0x0003092e) list_highlight_pane_cp20

0xea19,	// (0x00036de6) list_single_2graphic_pane_g1_cp4

0xe02d,	// (0x000363fa) list_single_2graphic_pane_g2_cp4

0xea21,	// (0x00036dee) list_single_2graphic_pane_t1_cp4

0x876d,	// (0x00030b3a) list_highlight_pane_cp21

0xea30,	// (0x00036dfd) list_single_midp_graphic_pane_g4_cp

0xea3f,	// (0x00036e0c) list_single_midp_graphic_pane_t1_cp

0xa96a,	// (0x00032d37) form2_mdip_string_pane_t1_ParamLimits

0xa96a,	// (0x00032d37) form2_mdip_string_pane_t1

0x8561,	// (0x0003092e) bg_wml_button_pane_cp2

0x8414,	// (0x000307e1) form2_midp_image_pane_g1

0x5363,	// (0x0002d730) list_double_large_graphic_pane_g5_ParamLimits

0x5363,	// (0x0002d730) list_double_large_graphic_pane_g5

0x959a,	// (0x00031967) midp_form_pane_ParamLimits

0x876d,	// (0x00030b3a) main_apps_wheel_pane_ParamLimits

0x9b03,	// (0x00031ed0) popup_preview_window_ParamLimits

0x9b03,	// (0x00031ed0) popup_preview_window

0xcaa7,	// (0x00034e74) popup_touch_info_window_ParamLimits

0xcaa7,	// (0x00034e74) popup_touch_info_window

0xcac5,	// (0x00034e92) popup_touch_menu_window_ParamLimits

0xcac5,	// (0x00034e92) popup_touch_menu_window

0x840a,	// (0x000307d7) bg_popup_sub_pane_cp6

0xea54,	// (0x00036e21) list_touch_menu_pane

0xea5c,	// (0x00036e29) list_single_touch_menu_pane_ParamLimits

0xea5c,	// (0x00036e29) list_single_touch_menu_pane

0xea73,	// (0x00036e40) list_single_touch_menu_pane_t1

0x876d,	// (0x00030b3a) bg_popup_sub_pane_cp7_ParamLimits

0x876d,	// (0x00030b3a) bg_popup_sub_pane_cp7

0xea81,	// (0x00036e4e) heading_sub_pane

0xea89,	// (0x00036e56) list_touch_info_pane_ParamLimits

0xea89,	// (0x00036e56) list_touch_info_pane

0xea98,	// (0x00036e65) list_single_touch_info_pane_ParamLimits

0xea98,	// (0x00036e65) list_single_touch_info_pane

0xeaa9,	// (0x00036e76) list_single_touch_info_pane_t1

0xeab7,	// (0x00036e84) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x00037ed3) list_single_touch_info_pane_t

0xc795,	// (0x00034b62) bg_popup_heading_pane_cp

0xeac5,	// (0x00036e92) heading_sub_pane_t1

0xcd9d,	// (0x0003516a) bg_popup_preview_window_pane_cp_ParamLimits

0xcd9d,	// (0x0003516a) bg_popup_preview_window_pane_cp

0xea81,	// (0x00036e4e) heading_preview_pane

0xea89,	// (0x00036e56) list_preview_pane_ParamLimits

0xea89,	// (0x00036e56) list_preview_pane

0xead3,	// (0x00036ea0) popup_preview_window_g1

0xea98,	// (0x00036e65) list_single_preview_pane_ParamLimits

0xea98,	// (0x00036e65) list_single_preview_pane

0xeadb,	// (0x00036ea8) list_single_preview_pane_g1

0xeae3,	// (0x00036eb0) list_single_preview_pane_t1

0xeaa9,	// (0x00036e76) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x00037ed8) list_single_preview_pane_t

0xeaf1,	// (0x00036ebe) bg_popup_heading_pane_cp2_ParamLimits

0xeaf1,	// (0x00036ebe) bg_popup_heading_pane_cp2

0xeb07,	// (0x00036ed4) heading_preview_pane_g1

0xeb0f,	// (0x00036edc) heading_preview_pane_t1_ParamLimits

0xeb0f,	// (0x00036edc) heading_preview_pane_t1

0x8904,	// (0x00030cd1) soft_indicator_pane_t1_ParamLimits

0x8f5b,	// (0x00031328) scroll_pane_ParamLimits

0xc197,	// (0x00034564) scroll_sc2_left_pane

0xc1a0,	// (0x0003456d) scroll_sc2_right_pane

0xc1bf,	// (0x0003458c) scroll_bg_pane_g1_ParamLimits

0xc1d4,	// (0x000345a1) scroll_bg_pane_g2_ParamLimits

0xc1ec,	// (0x000345b9) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x00037ad1) scroll_bg_pane_g_ParamLimits

0xc1bf,	// (0x0003458c) scroll_handle_pane_g1_ParamLimits

0xc20e,	// (0x000345db) scroll_handle_pane_g2_ParamLimits

0xc1ec,	// (0x000345b9) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x00037ad8) scroll_handle_pane_g_ParamLimits

0xc9ff,	// (0x00034dcc) popup_choice_list_window_ParamLimits

0xc9ff,	// (0x00034dcc) popup_choice_list_window

0xcbf9,	// (0x00034fc6) choice_list_pane

0xcc6f,	// (0x0003503c) cell_toolbar_pane_t1

0xcc97,	// (0x00035064) toolbar_button_pane_ParamLimits

0xdd15,	// (0x000360e2) ai_gene_pane_1_t2_ParamLimits

0xdd15,	// (0x000360e2) ai_gene_pane_1_t2

0x0001,

0xf91c,	// (0x00037ce9) ai_gene_pane_1_t_ParamLimits

0xf91c,	// (0x00037ce9) ai_gene_pane_1_t

0xeb2c,	// (0x00036ef9) scroll_sc2_left_pane_g1

0xeb2c,	// (0x00036ef9) scroll_sc2_right_pane_g1

0xc0d3,	// (0x000344a0) bg_popup_sub_pane_cp10

0xeb36,	// (0x00036f03) list_choice_list_pane

0xeb4d,	// (0x00036f1a) list_single_choice_list_pane_ParamLimits

0xeb4d,	// (0x00036f1a) list_single_choice_list_pane

0xeb61,	// (0x00036f2e) list_single_choice_list_pane_g1

0x91c5,	// (0x00031592) list_single_choice_list_pane_t1_ParamLimits

0x91c5,	// (0x00031592) list_single_choice_list_pane_t1

0xeb69,	// (0x00036f36) choice_list_pane_g1

0xeb71,	// (0x00036f3e) choice_list_pane_t1

0x840a,	// (0x000307d7) input_focus_pane_cp11

0xc0ec,	// (0x000344b9) title_pane_stacon_g2_ParamLimits

0xc0ec,	// (0x000344b9) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x00037ab7) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x00037ab7) title_pane_stacon_g

0xc795,	// (0x00034b62) cursor_press_pane

0x986a,	// (0x00031c37) popup_fep_hwr_window_ParamLimits

0x986a,	// (0x00031c37) popup_fep_hwr_window

0xca51,	// (0x00034e1e) popup_fep_vkb_window_ParamLimits

0xca51,	// (0x00034e1e) popup_fep_vkb_window

0xeb7f,	// (0x00036f4c) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x00037f01) fep_vkb_side_pane_g_ParamLimits

0x5dbc,	// (0x0002e189) fep_hwr_candidate_pane_ParamLimits

0x5dbc,	// (0x0002e189) fep_hwr_candidate_pane

0x5de4,	// (0x0002e1b1) fep_hwr_side_pane_ParamLimits

0x5de4,	// (0x0002e1b1) fep_hwr_side_pane

0x5e04,	// (0x0002e1d1) fep_hwr_top_pane_ParamLimits

0x5e04,	// (0x0002e1d1) fep_hwr_top_pane

0x5e1c,	// (0x0002e1e9) fep_hwr_write_pane_ParamLimits

0x5e1c,	// (0x0002e1e9) fep_hwr_write_pane

0xfb34,	// (0x00037f01) fep_vkb_side_pane_g

0xeb87,	// (0x00036f54) fep_hwr_top_pane_g1

0xeb99,	// (0x00036f66) fep_hwr_top_pane_g2

0x5e48,	// (0x0002e215) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x00037edd) fep_hwr_top_pane_g

0x5e5d,	// (0x0002e22a) fep_hwr_top_text_pane

0xc308,	// (0x000346d5) fep_hwr_top_text_pane_g1

0xebcf,	// (0x00036f9c) fep_hwr_top_text_pane_t1

0x5f4b,	// (0x0002e318) fep_hwr_candidate_pane_g1

0xed98,	// (0x00037165) fep_vkb_keypad_pane_g3_ParamLimits

0xed98,	// (0x00037165) fep_vkb_keypad_pane_g3

0xedba,	// (0x00037187) fep_vkb_keypad_pane_g4_ParamLimits

0xedba,	// (0x00037187) fep_vkb_keypad_pane_g4

0xee29,	// (0x000371f6) fep_vkb_bottom_pane_g2_ParamLimits

0xee29,	// (0x000371f6) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x00037f08) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x00037f08) fep_vkb_bottom_pane_g

0xeb2c,	// (0x00036ef9) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x00037f12) cell_vkb_side_pane_g

0xee6d,	// (0x0003723a) cell_vkb_side_pane_t1

0xee7b,	// (0x00037248) cell_vkb_side_pane_t1_copy1

0xeb2c,	// (0x00036ef9) bg_fep_vkb_candidate_pane_g2

0xef49,	// (0x00037316) cell_vkb_candidate_pane_ParamLimits

0xebdd,	// (0x00036faa) aid_size_cell_vkb_ParamLimits

0xebdd,	// (0x00036faa) aid_size_cell_vkb

0xef49,	// (0x00037316) cell_vkb_candidate_pane

0x5f65,	// (0x0002e332) bg_popup_fep_shadow_pane_g1

0xec47,	// (0x00037014) fep_vkb_bottom_pane_ParamLimits

0xec47,	// (0x00037014) fep_vkb_bottom_pane

0xec84,	// (0x00037051) fep_vkb_candidate_pane_ParamLimits

0xec84,	// (0x00037051) fep_vkb_candidate_pane

0xeca0,	// (0x0003706d) fep_vkb_keypad_pane_ParamLimits

0xeca0,	// (0x0003706d) fep_vkb_keypad_pane

0xecd4,	// (0x000370a1) fep_vkb_side_pane_ParamLimits

0xecd4,	// (0x000370a1) fep_vkb_side_pane

0xed00,	// (0x000370cd) fep_vkb_top_pane_ParamLimits

0xed00,	// (0x000370cd) fep_vkb_top_pane

0xed2c,	// (0x000370f9) fep_vkb_top_pane_g1_ParamLimits

0xed2c,	// (0x000370f9) fep_vkb_top_pane_g1

0xed3b,	// (0x00037108) fep_vkb_top_pane_g2_ParamLimits

0xed3b,	// (0x00037108) fep_vkb_top_pane_g2

0xed4a,	// (0x00037117) fep_vkb_top_pane_g3_ParamLimits

0xed4a,	// (0x00037117) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x00037ef8) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x00037ef8) fep_vkb_top_pane_g

0xed68,	// (0x00037135) fep_vkb_top_text_pane_ParamLimits

0xed68,	// (0x00037135) fep_vkb_top_text_pane

0xaa31,	// (0x00032dfe) fep_vkb_side_pane_g1_ParamLimits

0xaa31,	// (0x00032dfe) fep_vkb_side_pane_g1

0xed87,	// (0x00037154) grid_vkb_side_pane_ParamLimits

0xed87,	// (0x00037154) grid_vkb_side_pane

0x5f6d,	// (0x0002e33a) bg_popup_fep_shadow_pane_g2

0x5f76,	// (0x0002e343) bg_popup_fep_shadow_pane_g3

0x5f7e,	// (0x0002e34b) bg_popup_fep_shadow_pane_g4

0x5f87,	// (0x0002e354) bg_popup_fep_shadow_pane_g5

0x5f8f,	// (0x0002e35c) bg_popup_fep_shadow_pane_g6

0x5f97,	// (0x0002e364) bg_popup_fep_shadow_pane_g7

0x90c1,	// (0x0003148e) bg_popup_fep_shadow_pane_g8

0xedd8,	// (0x000371a5) grid_vkb_keypad_number_pane_ParamLimits

0xedd8,	// (0x000371a5) grid_vkb_keypad_number_pane

0xede8,	// (0x000371b5) grid_vkb_keypad_pane_ParamLimits

0xede8,	// (0x000371b5) grid_vkb_keypad_pane

0xee0e,	// (0x000371db) fep_vkb_bottom_pane_g1_ParamLimits

0xee0e,	// (0x000371db) fep_vkb_bottom_pane_g1

0xee37,	// (0x00037204) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xee37,	// (0x00037204) grid_vkb_keypad_bottom_left_pane

0xee4c,	// (0x00037219) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xee4c,	// (0x00037219) grid_vkb_keypad_bottom_right_pane

0xee61,	// (0x0003722e) fep_vkb_top_text_pane_g1

0xaa78,	// (0x00032e45) fep_vkb_top_text_pane_t1

0xaa8a,	// (0x00032e57) cell_vkb_side_pane_ParamLimits

0xaa8a,	// (0x00032e57) cell_vkb_side_pane

0xeb2c,	// (0x00036ef9) cell_vkb_side_pane_g1

0xee89,	// (0x00037256) cell_vkb_keypad_pane_ParamLimits

0xee89,	// (0x00037256) cell_vkb_keypad_pane

0xeef6,	// (0x000372c3) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x00037f25) bg_popup_fep_shadow_pane_g

0xeb2c,	// (0x00036ef9) cell_hwr_side_pane_g1

0xeb2c,	// (0x00036ef9) cell_hwr_side_pane_g2

0xef00,	// (0x000372cd) cell_vkb_keypad_pane_t1

0xaaa0,	// (0x00032e6d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xaaa0,	// (0x00032e6d) cell_vkb_keypad_bottom_left_pane

0xaab5,	// (0x00032e82) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xaab5,	// (0x00032e82) cell_vkb_keypad_bottom_right_pane

0xeb2c,	// (0x00036ef9) cell_vkb_keypad_bottom_left_pane_g1

0xeb2c,	// (0x00036ef9) cell_vkb_keypad_bottom_right_pane_g1

0xef0e,	// (0x000372db) cell_vkb_keypad_number_pane_ParamLimits

0xef0e,	// (0x000372db) cell_vkb_keypad_number_pane

0xef2d,	// (0x000372fa) cell_vkb_keypad_number_pane_g1

0xef37,	// (0x00037304) cell_vkb_keypad_number_pane_g2

0xef40,	// (0x0003730d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x00037f17) cell_vkb_keypad_number_pane_g

0xef00,	// (0x000372cd) cell_vkb_keypad_number_pane_t1

0xef62,	// (0x0003732f) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x00037f12) cell_hwr_side_pane_g

0xef7b,	// (0x00037348) cell_hwr_side_pane_t1

0x5fa7,	// (0x0002e374) cell_hwr_side_pane_t1_copy1

0xed5a,	// (0x00037127) cell_hwr_candidate_pane_g1

0x5fb5,	// (0x0002e382) cell_hwr_candidate_pane_t1

0xeb2c,	// (0x00036ef9) cell_vkb_candidate_pane_g2

0xf001,	// (0x000373ce) cell_vkb_candidate_pane_t1

0xf1d4,	// (0x000375a1) bg_popup_fep_shadow_pane_ParamLimits

0xf1d4,	// (0x000375a1) bg_popup_fep_shadow_pane

0x2a4b,	// (0x0002ae18) bg_fep_hwr_top_pane_g4

0xebab,	// (0x00036f78) bg_hwr_side_pane_g1_ParamLimits

0xebab,	// (0x00036f78) bg_hwr_side_pane_g1

0xa9ec,	// (0x00032db9) cell_hwr_side_pane_ParamLimits

0xa9ec,	// (0x00032db9) cell_hwr_side_pane

0x5ed4,	// (0x0002e2a1) fep_hwr_write_pane_g1_ParamLimits

0x5ed4,	// (0x0002e2a1) fep_hwr_write_pane_g1

0x5ee1,	// (0x0002e2ae) fep_hwr_write_pane_g2_ParamLimits

0x5ee1,	// (0x0002e2ae) fep_hwr_write_pane_g2

0x5eee,	// (0x0002e2bb) fep_hwr_write_pane_g3_ParamLimits

0x5eee,	// (0x0002e2bb) fep_hwr_write_pane_g3

0xaa0c,	// (0x00032dd9) fep_hwr_write_pane_g4_ParamLimits

0xaa0c,	// (0x00032dd9) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x00037ee4) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x00037ee4) fep_hwr_write_pane_g

0x2a4b,	// (0x0002ae18) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2a4b,	// (0x0002ae18) bg_fep_hwr_candidate_pane_g2

0x5f11,	// (0x0002e2de) cell_hwr_candidate_pane_ParamLimits

0x5f11,	// (0x0002e2de) cell_hwr_candidate_pane

0x5f4b,	// (0x0002e318) fep_hwr_candidate_pane_g1_ParamLimits

0xec0b,	// (0x00036fd8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xec0b,	// (0x00036fd8) bg_popup_fep_shadow_pane_cp2

0xed5a,	// (0x00037127) fep_vkb_top_pane_g4_ParamLimits

0xed5a,	// (0x00037127) fep_vkb_top_pane_g4

0xed79,	// (0x00037146) fep_vkb_side_pane_g2_ParamLimits

0xed79,	// (0x00037146) fep_vkb_side_pane_g2

0x7f0d,	// (0x000302da) list_setting_pane_t4_ParamLimits

0x7f0d,	// (0x000302da) list_setting_pane_t4

0x7fa7,	// (0x00030374) list_setting_number_pane_t5_ParamLimits

0x7fa7,	// (0x00030374) list_setting_number_pane_t5

0x94ca,	// (0x00031897) list_double_heading_pane_cp2_ParamLimits

0x94ca,	// (0x00031897) list_double_heading_pane_cp2

0xc60a,	// (0x000349d7) list_double_heading_pane_g1_cp2_ParamLimits

0xc60a,	// (0x000349d7) list_double_heading_pane_g1_cp2

0xf00f,	// (0x000373dc) list_double_heading_pane_g2_cp2_ParamLimits

0xf00f,	// (0x000373dc) list_double_heading_pane_g2_cp2

0xf023,	// (0x000373f0) list_double_heading_pane_t1_cp2_ParamLimits

0xf023,	// (0x000373f0) list_double_heading_pane_t1_cp2

0xf039,	// (0x00037406) list_double_heading_pane_t2_cp2_ParamLimits

0xf039,	// (0x00037406) list_double_heading_pane_t2_cp2

0x83f4,	// (0x000307c1) aid_value_unit2

0x517d,	// (0x0002d54a) popup_preview_fixed_window

0x8ac2,	// (0x00030e8f) bg_popup_preview_window_pane_cp02

0xf04b,	// (0x00037418) list_preview_fixed_pane

0xf091,	// (0x0003745e) list_empty_pane_fp_ParamLimits

0xf091,	// (0x0003745e) list_empty_pane_fp

0xf091,	// (0x0003745e) list_single_cale_day_pane_fp_ParamLimits

0xf091,	// (0x0003745e) list_single_cale_day_pane_fp

0xf091,	// (0x0003745e) list_single_graphic_heading_pane_fp_ParamLimits

0xf091,	// (0x0003745e) list_single_graphic_heading_pane_fp

0xf091,	// (0x0003745e) list_single_graphic_pane_fp_ParamLimits

0xf091,	// (0x0003745e) list_single_graphic_pane_fp

0xf091,	// (0x0003745e) list_single_heading_pane_fp_ParamLimits

0xf091,	// (0x0003745e) list_single_heading_pane_fp

0xf091,	// (0x0003745e) list_single_pane_fp_ParamLimits

0xf091,	// (0x0003745e) list_single_pane_fp

0xf0a5,	// (0x00037472) list_single_pane_fp_g1_ParamLimits

0xf0a5,	// (0x00037472) list_single_pane_fp_g1

0x5318,	// (0x0002d6e5) list_single_pane_fp_g2_ParamLimits

0x5318,	// (0x0002d6e5) list_single_pane_fp_g2

0x5fd2,	// (0x0002e39f) list_single_pane_fp_g3_ParamLimits

0x5fd2,	// (0x0002e39f) list_single_pane_fp_g3

0xf0b1,	// (0x0003747e) list_single_pane_fp_g4_ParamLimits

0xf0b1,	// (0x0003747e) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x00037f46) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x00037f46) list_single_pane_fp_g

0x4d3b,	// (0x0002d108) list_single_pane_fp_t1_ParamLimits

0x4d3b,	// (0x0002d108) list_single_pane_fp_t1

0x4d52,	// (0x0002d11f) list_single_graphic_pane_fp_g1_ParamLimits

0x4d52,	// (0x0002d11f) list_single_graphic_pane_fp_g1

0xf0a5,	// (0x00037472) list_single_graphic_pane_fp_g2_ParamLimits

0xf0a5,	// (0x00037472) list_single_graphic_pane_fp_g2

0x5318,	// (0x0002d6e5) list_single_graphic_pane_fp_g3_ParamLimits

0x5318,	// (0x0002d6e5) list_single_graphic_pane_fp_g3

0x5fd2,	// (0x0002e39f) list_single_graphic_pane_fp_g4_ParamLimits

0x5fd2,	// (0x0002e39f) list_single_graphic_pane_fp_g4

0xf0b1,	// (0x0003747e) list_single_graphic_pane_fp_g5_ParamLimits

0xf0b1,	// (0x0003747e) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x00037f4f) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x00037f4f) list_single_graphic_pane_fp_g

0x4d5e,	// (0x0002d12b) list_single_graphic_pane_fp_t1_ParamLimits

0x4d5e,	// (0x0002d12b) list_single_graphic_pane_fp_t1

0x4d52,	// (0x0002d11f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4d52,	// (0x0002d11f) list_single_graphic_heading_pane_fp_g1

0xf0a5,	// (0x00037472) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf0a5,	// (0x00037472) list_single_graphic_heading_pane_fp_g2

0x5318,	// (0x0002d6e5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5318,	// (0x0002d6e5) list_single_graphic_heading_pane_fp_g3

0x5fd2,	// (0x0002e39f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5fd2,	// (0x0002e39f) list_single_graphic_heading_pane_fp_g4

0xf0b1,	// (0x0003747e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf0b1,	// (0x0003747e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x00037f4f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x00037f4f) list_single_graphic_heading_pane_fp_g

0x4d74,	// (0x0002d141) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4d74,	// (0x0002d141) list_single_graphic_heading_pane_fp_t1

0x4d8a,	// (0x0002d157) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4d8a,	// (0x0002d157) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x00037f5a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x00037f5a) list_single_graphic_heading_pane_fp_t

0x4d9c,	// (0x0002d169) list_single_cale_day_pane_fp_g1_ParamLimits

0x4d9c,	// (0x0002d169) list_single_cale_day_pane_fp_g1

0xf0bd,	// (0x0003748a) list_single_cale_day_pane_fp_g2_ParamLimits

0xf0bd,	// (0x0003748a) list_single_cale_day_pane_fp_g2

0x5fe6,	// (0x0002e3b3) list_single_cale_day_pane_fp_g3_ParamLimits

0x5fe6,	// (0x0002e3b3) list_single_cale_day_pane_fp_g3

0x600e,	// (0x0002e3db) list_single_cale_day_pane_fp_g4_ParamLimits

0x600e,	// (0x0002e3db) list_single_cale_day_pane_fp_g4

0x6032,	// (0x0002e3ff) list_single_cale_day_pane_fp_g5_ParamLimits

0x6032,	// (0x0002e3ff) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x00037f5f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x00037f5f) list_single_cale_day_pane_fp_g

0x4dd4,	// (0x0002d1a1) list_single_cale_day_pane_fp_t1_ParamLimits

0x4dd4,	// (0x0002d1a1) list_single_cale_day_pane_fp_t1

0x4dfa,	// (0x0002d1c7) list_single_cale_day_pane_fp_t2_ParamLimits

0x4dfa,	// (0x0002d1c7) list_single_cale_day_pane_fp_t2

0x4e13,	// (0x0002d1e0) list_single_cale_day_pane_fp_t3_ParamLimits

0x4e13,	// (0x0002d1e0) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x00037f6a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x00037f6a) list_single_cale_day_pane_fp_t

0xf0a5,	// (0x00037472) list_empty_pane_fp_g1_ParamLimits

0xf0a5,	// (0x00037472) list_empty_pane_fp_g1

0x4e2c,	// (0x0002d1f9) list_empty_pane_fp_t1

0x4e3a,	// (0x0002d207) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x00037f71) list_empty_pane_fp_t

0xf0a5,	// (0x00037472) list_single_heading_pane_fp_g1_ParamLimits

0xf0a5,	// (0x00037472) list_single_heading_pane_fp_g1

0x5318,	// (0x0002d6e5) list_single_heading_pane_fp_g2_ParamLimits

0x5318,	// (0x0002d6e5) list_single_heading_pane_fp_g2

0x5fd2,	// (0x0002e39f) list_single_heading_pane_fp_g3_ParamLimits

0x5fd2,	// (0x0002e39f) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x00037f76) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x00037f76) list_single_heading_pane_fp_g

0x4e48,	// (0x0002d215) list_single_heading_pane_fp_t1_ParamLimits

0x4e48,	// (0x0002d215) list_single_heading_pane_fp_t1

0x4e5a,	// (0x0002d227) list_single_heading_pane_fp_t2_ParamLimits

0x4e5a,	// (0x0002d227) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x00037f7d) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x00037f7d) list_single_heading_pane_fp_t

0x921d,	// (0x000315ea) aid_size_cell_fast

0x8a37,	// (0x00030e04) soft_indicator_pane_cp1_t1

0x925a,	// (0x00031627) cell_app_pane_cp2_ParamLimits

0x925a,	// (0x00031627) cell_app_pane_cp2

0x5da9,	// (0x0002e176) fep_hwr_candidate_drop_down_list_pane

0x2de2,	// (0x0002b1af) fep_hwr_candidate_pane_g3_ParamLimits

0x2de2,	// (0x0002b1af) fep_hwr_candidate_pane_g3

0x2def,	// (0x0002b1bc) fep_hwr_candidate_pane_g4_ParamLimits

0x2def,	// (0x0002b1bc) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x00037ef1) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x00037ef1) fep_hwr_candidate_pane_g

0xec73,	// (0x00037040) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xec73,	// (0x00037040) fep_vkb_candidate_drop_down_list_pane

0xef6a,	// (0x00037337) fep_vkb_candidate_pane_g3

0xef72,	// (0x0003733f) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x00037f1e) fep_vkb_candidate_pane_g

0xed5a,	// (0x00037127) cell_hwr_candidate_pane_g1_ParamLimits

0xef89,	// (0x00037356) cell_hwr_candidate_pane_g3_ParamLimits

0xef89,	// (0x00037356) cell_hwr_candidate_pane_g3

0xefaa,	// (0x00037377) cell_hwr_candidate_pane_g4_ParamLimits

0xefaa,	// (0x00037377) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x00037f38) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x00037f38) cell_hwr_candidate_pane_g

0xefcb,	// (0x00037398) cell_vkb_candidate_pane_g3_ParamLimits

0xefcb,	// (0x00037398) cell_vkb_candidate_pane_g3

0xefe6,	// (0x000373b3) cell_vkb_candidate_pane_g4_ParamLimits

0xefe6,	// (0x000373b3) cell_vkb_candidate_pane_g4

0xf0c9,	// (0x00037496) cell_app_pane_cp2_g1_ParamLimits

0xf0c9,	// (0x00037496) cell_app_pane_cp2_g1

0xf0e7,	// (0x000374b4) cell_app_pane_cp2_g2_ParamLimits

0xf0e7,	// (0x000374b4) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x00037f82) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x00037f82) cell_app_pane_cp2_g

0xf0f3,	// (0x000374c0) cell_app_pane_cp2_t1_ParamLimits

0xf0f3,	// (0x000374c0) cell_app_pane_cp2_t1

0x9046,	// (0x00031413) grid_highlight_pane_cp1_ParamLimits

0x9046,	// (0x00031413) grid_highlight_pane_cp1

0x6056,	// (0x0002e423) cell_hwr_candidate_pane_cp1_ParamLimits

0x6056,	// (0x0002e423) cell_hwr_candidate_pane_cp1

0xed5a,	// (0x00037127) fep_hwr_candidate_drop_down_list_pane_g1

0xf105,	// (0x000374d2) fep_hwr_candidate_drop_down_list_pane_g2

0xf112,	// (0x000374df) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x00037f87) fep_hwr_candidate_drop_down_list_pane_g

0x6074,	// (0x0002e441) fep_hwr_candidate_drop_down_list_scroll_pane

0x607d,	// (0x0002e44a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x607d,	// (0x0002e44a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x608a,	// (0x0002e457) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x608a,	// (0x0002e457) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6097,	// (0x0002e464) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6097,	// (0x0002e464) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xefcb,	// (0x00037398) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xefcb,	// (0x00037398) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xefe6,	// (0x000373b3) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xefe6,	// (0x000373b3) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x60a4,	// (0x0002e471) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x60a4,	// (0x0002e471) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x60bf,	// (0x0002e48c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x60bf,	// (0x0002e48c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x60da,	// (0x0002e4a7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x60da,	// (0x0002e4a7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x00037f8e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x00037f8e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xaad0,	// (0x00032e9d) cell_vkb_candidate_pane_cp1_ParamLimits

0xaad0,	// (0x00032e9d) cell_vkb_candidate_pane_cp1

0xed5a,	// (0x00037127) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xed5a,	// (0x00037127) fep_vkb_candidate_drop_down_list_pane_g1

0xf105,	// (0x000374d2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xf105,	// (0x000374d2) fep_vkb_candidate_drop_down_list_pane_g2

0xf112,	// (0x000374df) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xf112,	// (0x000374df) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x00037f87) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x00037f87) fep_vkb_candidate_drop_down_list_pane_g

0xf11f,	// (0x000374ec) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xf11f,	// (0x000374ec) fep_vkb_candidate_drop_down_list_scroll_pane

0xf12c,	// (0x000374f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf12c,	// (0x000374f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xf139,	// (0x00037506) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf139,	// (0x00037506) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xf145,	// (0x00037512) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf145,	// (0x00037512) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xef89,	// (0x00037356) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xef89,	// (0x00037356) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xefaa,	// (0x00037377) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xefaa,	// (0x00037377) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xf151,	// (0x0003751e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf151,	// (0x0003751e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xf172,	// (0x0003753f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf172,	// (0x0003753f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xf193,	// (0x00037560) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf193,	// (0x00037560) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00037f9f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00037f9f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8610,	// (0x000309dd) title_pane_g1_ParamLimits

0x8627,	// (0x000309f4) title_pane_g2_ParamLimits

0xf56a,	// (0x00037937) title_pane_g_ParamLimits

0xc2f8,	// (0x000346c5) aid_call2_pane

0xc300,	// (0x000346cd) aid_call_pane

0xc308,	// (0x000346d5) popup_clock_analogue_window_g1

0xc308,	// (0x000346d5) popup_clock_analogue_window_g2

0x54f9,	// (0x0002d8c6) popup_clock_analogue_window_g3

0x5502,	// (0x0002d8cf) popup_clock_analogue_window_g4

0x8414,	// (0x000307e1) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x00037ae6) popup_clock_analogue_window_g

0x550a,	// (0x0002d8d7) popup_clock_analogue_window_t1

0x5518,	// (0x0002d8e5) clock_digital_number_pane_ParamLimits

0x5518,	// (0x0002d8e5) clock_digital_number_pane

0x5524,	// (0x0002d8f1) clock_digital_number_pane_cp02_ParamLimits

0x5524,	// (0x0002d8f1) clock_digital_number_pane_cp02

0x5530,	// (0x0002d8fd) clock_digital_number_pane_cp03_ParamLimits

0x5530,	// (0x0002d8fd) clock_digital_number_pane_cp03

0x553c,	// (0x0002d909) clock_digital_number_pane_cp04_ParamLimits

0x553c,	// (0x0002d909) clock_digital_number_pane_cp04

0x5548,	// (0x0002d915) clock_digital_separator_pane_ParamLimits

0x5548,	// (0x0002d915) clock_digital_separator_pane

0x5554,	// (0x0002d921) popup_clock_digital_window_t1_ParamLimits

0x5554,	// (0x0002d921) popup_clock_digital_window_t1

0x8414,	// (0x000307e1) clock_digital_number_pane_g1

0x8414,	// (0x000307e1) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x00037af1) clock_digital_number_pane_g

0x8414,	// (0x000307e1) clock_digital_separator_pane_g1

0x8414,	// (0x000307e1) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x00037af1) clock_digital_separator_pane_g

0x9d61,	// (0x0003212e) aid_fill_nsta_ParamLimits

0x9e78,	// (0x00032245) indicator_nsta_pane_ParamLimits

0xcba2,	// (0x00034f6f) popup_clock_analogue_window

0xcba2,	// (0x00034f6f) popup_clock_digital_window

0xd80a,	// (0x00035bd7) grid_indicator_nsta_pane_ParamLimits

0xe7ba,	// (0x00036b87) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x00037e71) clock_nsta_pane_t

0x54bd,	// (0x0002d88a) aid_size_max_handle

0x942e,	// (0x000317fb) aid_size_min_handle

0xc795,	// (0x00034b62) editor_scroll_pane

0xf1ae,	// (0x0003757b) ex_editor_pane

0x91a1,	// (0x0003156e) scroll_pane_cp13

0x8f88,	// (0x00031355) scroll_pane_cp14

0xc332,	// (0x000346ff) scroll_pane_cp36

0x94d6,	// (0x000318a3) list_single_graphic_hl_pane_cp2_ParamLimits

0x94d6,	// (0x000318a3) list_single_graphic_hl_pane_cp2

0xa68d,	// (0x00032a5a) list_single_graphic_hl_pane_ParamLimits

0xa68d,	// (0x00032a5a) list_single_graphic_hl_pane

0x4e70,	// (0x0002d23d) aid_size_min_hl_cp1

0xf1b6,	// (0x00037583) list_highlight_pane_cp34_ParamLimits

0xf1b6,	// (0x00037583) list_highlight_pane_cp34

0xf1c7,	// (0x00037594) list_single_graphic_hl_pane_g1_ParamLimits

0xf1c7,	// (0x00037594) list_single_graphic_hl_pane_g1

0x8256,	// (0x00030623) list_single_graphic_hl_pane_g2_ParamLimits

0x8256,	// (0x00030623) list_single_graphic_hl_pane_g2

0x8256,	// (0x00030623) list_single_graphic_hl_pane_g3_ParamLimits

0x8256,	// (0x00030623) list_single_graphic_hl_pane_g3

0x9060,	// (0x0003142d) list_single_graphic_hl_pane_g4_ParamLimits

0x9060,	// (0x0003142d) list_single_graphic_hl_pane_g4

0x906c,	// (0x00031439) list_single_graphic_hl_pane_g5_ParamLimits

0x906c,	// (0x00031439) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x00037fb0) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x00037fb0) list_single_graphic_hl_pane_g

0x8262,	// (0x0003062f) list_single_graphic_hl_pane_t1_ParamLimits

0x8262,	// (0x0003062f) list_single_graphic_hl_pane_t1

0xf238,	// (0x00037605) aid_size_min_hl_cp2

0xf241,	// (0x0003760e) list_highlight_pane_cp34_cp2_ParamLimits

0xf241,	// (0x0003760e) list_highlight_pane_cp34_cp2

0xf1c7,	// (0x00037594) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xf1c7,	// (0x00037594) list_single_graphic_hl_pane_g1_cp2

0xf24e,	// (0x0003761b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xf24e,	// (0x0003761b) list_single_graphic_hl_pane_g2_cp2

0xf25a,	// (0x00037627) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xf25a,	// (0x00037627) list_single_graphic_hl_pane_g3_cp2

0xc60a,	// (0x000349d7) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc60a,	// (0x000349d7) list_single_graphic_hl_pane_g4_cp2

0xf00f,	// (0x000373dc) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xf00f,	// (0x000373dc) list_single_graphic_hl_pane_g5_cp2

0x9662,	// (0x00031a2f) control_pane_g4_ParamLimits

0x9662,	// (0x00031a2f) control_pane_g4

0xc0d3,	// (0x000344a0) bg_popup_sub_pane_cp10_ParamLimits

0xeb36,	// (0x00036f03) list_choice_list_pane_ParamLimits

0xeb45,	// (0x00036f12) scroll_pane_cp23

0x8ac2,	// (0x00030e8f) bg_popup_preview_window_pane_cp02_ParamLimits

0xf04b,	// (0x00037418) list_preview_fixed_pane_ParamLimits

0xf061,	// (0x0003742e) list_preview_fixed_pane_cp_ParamLimits

0xf061,	// (0x0003742e) list_preview_fixed_pane_cp

0xf06d,	// (0x0003743a) popup_preview_fixed_window_g1_ParamLimits

0xf06d,	// (0x0003743a) popup_preview_fixed_window_g1

0xf079,	// (0x00037446) popup_preview_fixed_window_g2_ParamLimits

0xf079,	// (0x00037446) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x00037f3f) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x00037f3f) popup_preview_fixed_window_g

0x544d,	// (0x0002d81a) aid_navi_side_left_pane_ParamLimits

0x545d,	// (0x0002d82a) aid_navi_side_right_pane_ParamLimits

0x546c,	// (0x0002d839) navi_icon_pane_stacon_ParamLimits

0x547c,	// (0x0002d849) navi_navi_pane_stacon_ParamLimits

0x546c,	// (0x0002d839) navi_text_pane_stacon_ParamLimits

0x840a,	// (0x000307d7) main_text_info_pane

0xf27c,	// (0x00037649) listscroll_text_info_pane

0xf284,	// (0x00037651) list_text_info_pane_ParamLimits

0xf284,	// (0x00037651) list_text_info_pane

0xf293,	// (0x00037660) scroll_pane_cp24_ParamLimits

0xf293,	// (0x00037660) scroll_pane_cp24

0xaaf0,	// (0x00032ebd) list_text_info_pane_t1_ParamLimits

0xaaf0,	// (0x00032ebd) list_text_info_pane_t1

0x97ea,	// (0x00031bb7) popup_fast_swap2_window_ParamLimits

0x97ea,	// (0x00031bb7) popup_fast_swap2_window

0xf2b1,	// (0x0003767e) aid_size_cell_fast2

0x840a,	// (0x000307d7) bg_popup_window_pane_cp17

0xd03c,	// (0x00035409) heading_pane_cp2

0x8d0a,	// (0x000310d7) listscroll_fast2_pane

0xf2bb,	// (0x00037688) grid_fast2_pane

0xf2c3,	// (0x00037690) listscroll_fast2_pane_g1

0xf2cb,	// (0x00037698) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x00037fbb) listscroll_fast2_pane_g

0x91a1,	// (0x0003156e) scroll_pane_cp26

0xf2d3,	// (0x000376a0) cell_fast2_pane_ParamLimits

0xf2d3,	// (0x000376a0) cell_fast2_pane

0xf2e9,	// (0x000376b6) cell_fast2_pane_g1

0xf2f2,	// (0x000376bf) cell_fast2_pane_g2

0xf2fb,	// (0x000376c8) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x00037fc0) cell_fast2_pane_g

0x8de1,	// (0x000311ae) grid_highlight_pane_cp9

0x8df6,	// (0x000311c3) main_eswt_pane_ParamLimits

0x8df6,	// (0x000311c3) main_eswt_pane

0xf2a8,	// (0x00037675) list_single_text_info_pane

0xf303,	// (0x000376d0) eswt_ctrl_button_pane

0xf303,	// (0x000376d0) eswt_ctrl_canvas_pane

0xf30b,	// (0x000376d8) eswt_ctrl_combo_pane

0xf303,	// (0x000376d0) eswt_ctrl_default_pane

0xf303,	// (0x000376d0) eswt_ctrl_label_pane

0xf313,	// (0x000376e0) eswt_ctrl_wait_pane

0xf31b,	// (0x000376e8) eswt_shell_pane

0x840a,	// (0x000307d7) listscroll_eswt_app_pane

0xf337,	// (0x00037704) popup_eswt_tasktip_window_ParamLimits

0xf337,	// (0x00037704) popup_eswt_tasktip_window

0xcd9d,	// (0x0003516a) bg_popup_window_pane_cp18

0xf348,	// (0x00037715) eswt_control_pane_g1_ParamLimits

0xf348,	// (0x00037715) eswt_control_pane_g1

0xf355,	// (0x00037722) eswt_control_pane_g2_ParamLimits

0xf355,	// (0x00037722) eswt_control_pane_g2

0xf362,	// (0x0003772f) eswt_control_pane_g3_ParamLimits

0xf362,	// (0x0003772f) eswt_control_pane_g3

0xf36f,	// (0x0003773c) eswt_control_pane_g4_ParamLimits

0xf36f,	// (0x0003773c) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x00037fc7) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x00037fc7) eswt_control_pane_g

0x9046,	// (0x00031413) bg_button_pane_ParamLimits

0x9046,	// (0x00031413) bg_button_pane

0x8df6,	// (0x000311c3) common_borders_pane_copy2_ParamLimits

0x8df6,	// (0x000311c3) common_borders_pane_copy2

0xf37c,	// (0x00037749) control_button_pane_g1_ParamLimits

0xf37c,	// (0x00037749) control_button_pane_g1

0xf388,	// (0x00037755) control_button_pane_g2_ParamLimits

0xf388,	// (0x00037755) control_button_pane_g2

0xf394,	// (0x00037761) control_button_pane_g3_ParamLimits

0xf394,	// (0x00037761) control_button_pane_g3

0x0002,

0xfc03,	// (0x00037fd0) control_button_pane_g_ParamLimits

0xfc03,	// (0x00037fd0) control_button_pane_g

0xf3a8,	// (0x00037775) control_button_pane_t1

0xf3b6,	// (0x00037783) control_button_pane_t2

0x0001,

0xfc0a,	// (0x00037fd7) control_button_pane_t

0xcca3,	// (0x00035070) bg_button_pane_g1

0xccab,	// (0x00035078) bg_button_pane_g2

0xccb3,	// (0x00035080) bg_button_pane_g3

0xccbb,	// (0x00035088) bg_button_pane_g4

0xccc3,	// (0x00035090) bg_button_pane_g5

0xcccb,	// (0x00035098) bg_button_pane_g6

0xccd3,	// (0x000350a0) bg_button_pane_g7

0xccdb,	// (0x000350a8) bg_button_pane_g8

0xcce3,	// (0x000350b0) bg_button_pane_g9

0x0008,

0xf870,	// (0x00037c3d) bg_button_pane_g

0xeaf1,	// (0x00036ebe) common_borders_pane_ParamLimits

0xeaf1,	// (0x00036ebe) common_borders_pane

0xf348,	// (0x00037715) eswt_control_pane_g1_copy1_ParamLimits

0xf348,	// (0x00037715) eswt_control_pane_g1_copy1

0xf355,	// (0x00037722) eswt_control_pane_g2_copy1_ParamLimits

0xf355,	// (0x00037722) eswt_control_pane_g2_copy1

0xf362,	// (0x0003772f) eswt_control_pane_g3_copy1_ParamLimits

0xf362,	// (0x0003772f) eswt_control_pane_g3_copy1

0xf36f,	// (0x0003773c) eswt_control_pane_g4_copy1_ParamLimits

0xf36f,	// (0x0003773c) eswt_control_pane_g4_copy1

0xeb2c,	// (0x00036ef9) bg_eswt_ctrl_canvas_pane_g1

0xeaf1,	// (0x00036ebe) common_borders_pane_cp2_ParamLimits

0xeaf1,	// (0x00036ebe) common_borders_pane_cp2

0xeaf1,	// (0x00036ebe) common_borders_pane_cp3_ParamLimits

0xeaf1,	// (0x00036ebe) common_borders_pane_cp3

0xf3c4,	// (0x00037791) separator_horizontal_pane

0xc197,	// (0x00034564) separator_vertical_pane

0xf348,	// (0x00037715) eswt_control_pane_g1_copy2_ParamLimits

0xf348,	// (0x00037715) eswt_control_pane_g1_copy2

0xf355,	// (0x00037722) eswt_control_pane_g2_copy2_ParamLimits

0xf355,	// (0x00037722) eswt_control_pane_g2_copy2

0xf362,	// (0x0003772f) eswt_control_pane_g3_copy2_ParamLimits

0xf362,	// (0x0003772f) eswt_control_pane_g3_copy2

0xf36f,	// (0x0003773c) eswt_control_pane_g4_copy2_ParamLimits

0xf36f,	// (0x0003773c) eswt_control_pane_g4_copy2

0x840a,	// (0x000307d7) common_borders_pane_cp4

0xf3cc,	// (0x00037799) separator_horizontal_pane_g1

0xf3d5,	// (0x000377a2) separator_horizontal_pane_g2

0xf3de,	// (0x000377ab) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x00037fdc) separator_horizontal_pane_g

0xf348,	// (0x00037715) eswt_control_pane_g1_copy3_ParamLimits

0xf348,	// (0x00037715) eswt_control_pane_g1_copy3

0xf355,	// (0x00037722) eswt_control_pane_g2_copy3_ParamLimits

0xf355,	// (0x00037722) eswt_control_pane_g2_copy3

0xf362,	// (0x0003772f) eswt_control_pane_g3_copy3_ParamLimits

0xf362,	// (0x0003772f) eswt_control_pane_g3_copy3

0xf36f,	// (0x0003773c) eswt_control_pane_g4_copy3_ParamLimits

0xf36f,	// (0x0003773c) eswt_control_pane_g4_copy3

0x840a,	// (0x000307d7) common_borders_pane_cp5

0xf3e7,	// (0x000377b4) separator_vertical_pane_g1

0xf3f0,	// (0x000377bd) separator_vertical_pane_g2

0xf3f9,	// (0x000377c6) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x00037fe3) separator_vertical_pane_g

0xf348,	// (0x00037715) eswt_control_pane_g1_copy4_ParamLimits

0xf348,	// (0x00037715) eswt_control_pane_g1_copy4

0xf355,	// (0x00037722) eswt_control_pane_g2_copy4_ParamLimits

0xf355,	// (0x00037722) eswt_control_pane_g2_copy4

0xf362,	// (0x0003772f) eswt_control_pane_g3_copy4_ParamLimits

0xf362,	// (0x0003772f) eswt_control_pane_g3_copy4

0xf36f,	// (0x0003773c) eswt_control_pane_g4_copy4_ParamLimits

0xf36f,	// (0x0003773c) eswt_control_pane_g4_copy4

0xab0b,	// (0x00032ed8) eswt_ctrl_combo_button_pane

0xab13,	// (0x00032ee0) eswt_ctrl_input_pane

0xab1b,	// (0x00032ee8) popup_choice_list_window_cp70

0xab23,	// (0x00032ef0) eswt_ctrl_input_pane_t1

0x840a,	// (0x000307d7) input_focus_pane_cp70

0xeaf1,	// (0x00036ebe) bg_button_pane_cp70_ParamLimits

0xeaf1,	// (0x00036ebe) bg_button_pane_cp70

0xab31,	// (0x00032efe) eswt_ctrl_combo_button_pane_g1

0xf402,	// (0x000377cf) wait_bar_pane_cp70

0xcd9d,	// (0x0003516a) bg_popup_window_pane_cp70_ParamLimits

0xcd9d,	// (0x0003516a) bg_popup_window_pane_cp70

0xf40a,	// (0x000377d7) popup_eswt_tasktip_window_t1

0xf420,	// (0x000377ed) wait_bar_pane_cp71_ParamLimits

0xf420,	// (0x000377ed) wait_bar_pane_cp71

0xf42c,	// (0x000377f9) grid_eswt_app_pane

0xc1a0,	// (0x0003456d) scroll_pane_cp70

0xab39,	// (0x00032f06) cell_eswt_app_pane_ParamLimits

0xab39,	// (0x00032f06) cell_eswt_app_pane

0xab61,	// (0x00032f2e) cell_eswt_app_pane_g1_ParamLimits

0xab61,	// (0x00032f2e) cell_eswt_app_pane_g1

0xab90,	// (0x00032f5d) cell_eswt_app_pane_g2_ParamLimits

0xab90,	// (0x00032f5d) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x00037fea) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x00037fea) cell_eswt_app_pane_g

0xabb9,	// (0x00032f86) cell_eswt_app_pane_t1_ParamLimits

0xabb9,	// (0x00032f86) cell_eswt_app_pane_t1

0xf435,	// (0x00037802) grid_highlight_pane_cp70_ParamLimits

0xf435,	// (0x00037802) grid_highlight_pane_cp70

0x9060,	// (0x0003142d) set_content_pane_g1

0xc984,	// (0x00034d51) status_small_volume_pane

0x60f5,	// (0x0002e4c2) status_small_volume_pane_g1

0x60fd,	// (0x0002e4ca) volume_small2_pane

0x6106,	// (0x0002e4d3) volume_small2_pane_g1

0x610f,	// (0x0002e4dc) volume_small2_pane_g2

0x6118,	// (0x0002e4e5) volume_small2_pane_g3

0x6121,	// (0x0002e4ee) volume_small2_pane_g4

0x612a,	// (0x0002e4f7) volume_small2_pane_g5

0x6133,	// (0x0002e500) volume_small2_pane_g6

0x613c,	// (0x0002e509) volume_small2_pane_g7

0x6145,	// (0x0002e512) volume_small2_pane_g8

0x614e,	// (0x0002e51b) volume_small2_pane_g9

0x6157,	// (0x0002e524) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x00037fef) volume_small2_pane_g

0xee61,	// (0x0003722e) fep_vkb_top_text_pane_g1_ParamLimits

0xaa78,	// (0x00032e45) fep_vkb_top_text_pane_t1_ParamLimits

0xf085,	// (0x00037452) popup_preview_fixed_window_g3_ParamLimits

0xf085,	// (0x00037452) popup_preview_fixed_window_g3

0x9d0a,	// (0x000320d7) popup_toolbar_trans_pane

0xa52d,	// (0x000328fa) aid_height_set_list_ParamLimits

0xdf78,	// (0x00036345) aid_size_parent_ParamLimits

0xc0d3,	// (0x000344a0) list_highlight_pane_cp2_ParamLimits

0x9060,	// (0x0003142d) set_content_pane_g1_ParamLimits

0xa6a0,	// (0x00032a6d) list_single_image_pane_ParamLimits

0xa6a0,	// (0x00032a6d) list_single_image_pane

0xabeb,	// (0x00032fb8) aid_size_cell_image_ParamLimits

0xabeb,	// (0x00032fb8) aid_size_cell_image

0xabf8,	// (0x00032fc5) grid_single_image_pane_ParamLimits

0xabf8,	// (0x00032fc5) grid_single_image_pane

0x9060,	// (0x0003142d) list_single_image_pane_g1_ParamLimits

0x9060,	// (0x0003142d) list_single_image_pane_g1

0x906c,	// (0x00031439) list_single_image_pane_g2_ParamLimits

0x906c,	// (0x00031439) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x00038004) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x00038004) list_single_image_pane_g

0xf441,	// (0x0003780e) list_single_image_pane_t1_ParamLimits

0xf441,	// (0x0003780e) list_single_image_pane_t1

0xac04,	// (0x00032fd1) cell_image_list_pane_ParamLimits

0xac04,	// (0x00032fd1) cell_image_list_pane

0xac18,	// (0x00032fe5) cell_image_list_pane_g1

0xac21,	// (0x00032fee) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x00038009) cell_image_list_pane_g

0xf457,	// (0x00037824) aid_size_cell_tb_trans_pane

0x9046,	// (0x00031413) bg_tb_trans_pane

0xf469,	// (0x00037836) grid_tb_trans_pane

0xcca3,	// (0x00035070) bg_tb_trans_pane_g1

0xccab,	// (0x00035078) bg_tb_trans_pane_g2

0xccb3,	// (0x00035080) bg_tb_trans_pane_g3

0xccbb,	// (0x00035088) bg_tb_trans_pane_g4

0xccc3,	// (0x00035090) bg_tb_trans_pane_g5

0xccdb,	// (0x000350a8) bg_tb_trans_pane_g6

0xcce3,	// (0x000350b0) bg_tb_trans_pane_g7

0xcccb,	// (0x00035098) bg_tb_trans_pane_g8

0xccd3,	// (0x000350a0) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x0003800e) bg_tb_trans_pane_g

0xf47d,	// (0x0003784a) cell_toolbar_trans_pane_ParamLimits

0xf47d,	// (0x0003784a) cell_toolbar_trans_pane

0xeb2c,	// (0x00036ef9) cell_toolbar_trans_pane_g1

0xa8ed,	// (0x00032cba) list_form2_midp_pane_t1

0xa8fb,	// (0x00032cc8) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x00037eb7) list_form2_midp_pane_t

0xe888,	// (0x00036c55) scroll_pane_cp51_ParamLimits

0xe9fe,	// (0x00036dcb) form2_midp_wait_pane_g1

0xea07,	// (0x00036dd4) form2_midp_wait_pane_g2

0xea10,	// (0x00036ddd) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x00037ecc) form2_midp_wait_pane_g

0x876d,	// (0x00030b3a) list_highlight_pane_cp21_ParamLimits

0xea30,	// (0x00036dfd) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xea3f,	// (0x00036e0c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5bd7,	// (0x0002dfa4) list_single_2graphic_im_pane_ParamLimits

0x5bd7,	// (0x0002dfa4) list_single_2graphic_im_pane

0xac2a,	// (0x00032ff7) list_single_2graphic_im_pane_g1_ParamLimits

0xac2a,	// (0x00032ff7) list_single_2graphic_im_pane_g1

0xac3b,	// (0x00033008) list_single_2graphic_im_pane_g2_ParamLimits

0xac3b,	// (0x00033008) list_single_2graphic_im_pane_g2

0xac47,	// (0x00033014) list_single_2graphic_im_pane_g3_ParamLimits

0xac47,	// (0x00033014) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x00038021) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x00038021) list_single_2graphic_im_pane_g

0xac5b,	// (0x00033028) list_single_2graphic_im_pane_t1_ParamLimits

0xac5b,	// (0x00033028) list_single_2graphic_im_pane_t1

0xf091,	// (0x0003745e) list_single_graphic_2heading_pane_fp_ParamLimits

0xf091,	// (0x0003745e) list_single_graphic_2heading_pane_fp

0x4d52,	// (0x0002d11f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4d52,	// (0x0002d11f) list_single_graphic_2heading_pane_fp_g1

0xf0a5,	// (0x00037472) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf0a5,	// (0x00037472) list_single_graphic_2heading_pane_fp_g2

0x5318,	// (0x0002d6e5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5318,	// (0x0002d6e5) list_single_graphic_2heading_pane_fp_g3

0x5fd2,	// (0x0002e39f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5fd2,	// (0x0002e39f) list_single_graphic_2heading_pane_fp_g4

0xf0b1,	// (0x0003747e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf0b1,	// (0x0003747e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x00037f4f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x00037f4f) list_single_graphic_2heading_pane_fp_g

0x4e85,	// (0x0002d252) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4e85,	// (0x0002d252) list_single_graphic_2heading_pane_fp_t1

0x4d8a,	// (0x0002d157) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4d8a,	// (0x0002d157) list_single_graphic_2heading_pane_fp_t2

0x4e9b,	// (0x0002d268) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4e9b,	// (0x0002d268) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x0003802a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x0003802a) list_single_graphic_2heading_pane_fp_t

0xebb7,	// (0x00036f84) fep_hwr_write_pane_g5_ParamLimits

0xebb7,	// (0x00036f84) fep_hwr_write_pane_g5

0xebc3,	// (0x00036f90) fep_hwr_write_pane_g6_ParamLimits

0xebc3,	// (0x00036f90) fep_hwr_write_pane_g6

0xf31b,	// (0x000376e8) eswt_shell_pane_ParamLimits

0xcd9d,	// (0x0003516a) bg_popup_window_pane_cp18_ParamLimits

0xdf1c,	// (0x000362e9) heading_pane_cp70

0xf40a,	// (0x000377d7) popup_eswt_tasktip_window_t1_ParamLimits

0x9da5,	// (0x00032172) aid_touch_tab_arrow_left

0x9db9,	// (0x00032186) aid_touch_tab_arrow_right

0x8646,	// (0x00030a13) title_pane_g3_ParamLimits

0x8646,	// (0x00030a13) title_pane_g3

0x9016,	// (0x000313e3) set_value_pane_g1

0x9d0a,	// (0x000320d7) popup_toolbar_trans_pane_ParamLimits

0xf457,	// (0x00037824) aid_size_cell_tb_trans_pane_ParamLimits

0x9046,	// (0x00031413) bg_tb_trans_pane_ParamLimits

0xf469,	// (0x00037836) grid_tb_trans_pane_ParamLimits

0x8ac2,	// (0x00030e8f) cont_note_pane_ParamLimits

0x8ac2,	// (0x00030e8f) cont_note_pane

0x8df6,	// (0x000311c3) cont_snote2_single_text_pane_ParamLimits

0x8df6,	// (0x000311c3) cont_snote2_single_text_pane

0x8df6,	// (0x000311c3) cont_snote2_single_graphic_pane_ParamLimits

0x8df6,	// (0x000311c3) cont_snote2_single_graphic_pane

0xd246,	// (0x00035613) cont_note_wait_pane_ParamLimits

0xd246,	// (0x00035613) cont_note_wait_pane

0xd246,	// (0x00035613) cont_note_image_pane_ParamLimits

0xd246,	// (0x00035613) cont_note_image_pane

0xf4af,	// (0x0003787c) popup_note2_window_g1_ParamLimits

0xf4af,	// (0x0003787c) popup_note2_window_g1

0xf4e0,	// (0x000378ad) popup_note2_window_t1_ParamLimits

0xf4e0,	// (0x000378ad) popup_note2_window_t1

0xf525,	// (0x000378f2) popup_note2_window_t2_ParamLimits

0xf525,	// (0x000378f2) popup_note2_window_t2

0x004e,	// (0x0002841b) popup_note2_window_t3_ParamLimits

0x004e,	// (0x0002841b) popup_note2_window_t3

0x0093,	// (0x00028460) popup_note2_window_t4_ParamLimits

0x0093,	// (0x00028460) popup_note2_window_t4

0x8b46,	// (0x00030f13) popup_note2_window_t5_ParamLimits

0x8b46,	// (0x00030f13) popup_note2_window_t5

0x0004,

0xfc69,	// (0x00038036) popup_note2_window_t_ParamLimits

0xfc69,	// (0x00038036) popup_note2_window_t

0x00c2,	// (0x0002848f) popup_note2_image_window_g1_ParamLimits

0x00c2,	// (0x0002848f) popup_note2_image_window_g1

0x00ce,	// (0x0002849b) popup_note2_image_window_g2_ParamLimits

0x00ce,	// (0x0002849b) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x00038041) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x00038041) popup_note2_image_window_g

0x00e0,	// (0x000284ad) popup_note2_image_window_t1_ParamLimits

0x00e0,	// (0x000284ad) popup_note2_image_window_t1

0x00f8,	// (0x000284c5) popup_note2_image_window_t2_ParamLimits

0x00f8,	// (0x000284c5) popup_note2_image_window_t2

0x0110,	// (0x000284dd) popup_note2_image_window_t3_ParamLimits

0x0110,	// (0x000284dd) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x00038046) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x00038046) popup_note2_image_window_t

0xd254,	// (0x00035621) popup_note2_wait_window_g1_ParamLimits

0xd254,	// (0x00035621) popup_note2_wait_window_g1

0xd260,	// (0x0003562d) popup_note2_wait_window_g2_ParamLimits

0xd260,	// (0x0003562d) popup_note2_wait_window_g2

0xd26c,	// (0x00035639) popup_note2_wait_window_g3_ParamLimits

0xd26c,	// (0x00035639) popup_note2_wait_window_g3

0x0002,

0xf852,	// (0x00037c1f) popup_note2_wait_window_g_ParamLimits

0xf852,	// (0x00037c1f) popup_note2_wait_window_g

0x012c,	// (0x000284f9) popup_note2_wait_window_t1_ParamLimits

0x012c,	// (0x000284f9) popup_note2_wait_window_t1

0x014a,	// (0x00028517) popup_note2_wait_window_t2_ParamLimits

0x014a,	// (0x00028517) popup_note2_wait_window_t2

0x0168,	// (0x00028535) popup_note2_wait_window_t3_ParamLimits

0x0168,	// (0x00028535) popup_note2_wait_window_t3

0x017a,	// (0x00028547) popup_note2_wait_window_t4_ParamLimits

0x017a,	// (0x00028547) popup_note2_wait_window_t4

0x0003,

0xfc80,	// (0x0003804d) popup_note2_wait_window_t_ParamLimits

0xfc80,	// (0x0003804d) popup_note2_wait_window_t

0x018c,	// (0x00028559) wait_bar2_pane_ParamLimits

0x018c,	// (0x00028559) wait_bar2_pane

0x01a4,	// (0x00028571) popup_snote2_single_text_window_g1_ParamLimits

0x01a4,	// (0x00028571) popup_snote2_single_text_window_g1

0x01cc,	// (0x00028599) popup_snote2_single_text_window_t1_ParamLimits

0x01cc,	// (0x00028599) popup_snote2_single_text_window_t1

0x0218,	// (0x000285e5) popup_snote2_single_text_window_t2_ParamLimits

0x0218,	// (0x000285e5) popup_snote2_single_text_window_t2

0x0264,	// (0x00028631) popup_snote2_single_text_window_t3_ParamLimits

0x0264,	// (0x00028631) popup_snote2_single_text_window_t3

0x02a5,	// (0x00028672) popup_snote2_single_text_window_t4_ParamLimits

0x02a5,	// (0x00028672) popup_snote2_single_text_window_t4

0x02db,	// (0x000286a8) popup_snote2_single_text_window_t5_ParamLimits

0x02db,	// (0x000286a8) popup_snote2_single_text_window_t5

0x0004,

0xfc89,	// (0x00038056) popup_snote2_single_text_window_t_ParamLimits

0xfc89,	// (0x00038056) popup_snote2_single_text_window_t

0x0306,	// (0x000286d3) popup_snote2_single_graphic_window_g1_ParamLimits

0x0306,	// (0x000286d3) popup_snote2_single_graphic_window_g1

0x032e,	// (0x000286fb) popup_snote2_single_graphic_window_g2_ParamLimits

0x032e,	// (0x000286fb) popup_snote2_single_graphic_window_g2

0x0001,

0xfc94,	// (0x00038061) popup_snote2_single_graphic_window_g_ParamLimits

0xfc94,	// (0x00038061) popup_snote2_single_graphic_window_g

0x0356,	// (0x00028723) popup_snote2_single_graphic_window_t1_ParamLimits

0x0356,	// (0x00028723) popup_snote2_single_graphic_window_t1

0x03a2,	// (0x0002876f) popup_snote2_single_graphic_window_t2_ParamLimits

0x03a2,	// (0x0002876f) popup_snote2_single_graphic_window_t2

0x0264,	// (0x00028631) popup_snote2_single_graphic_window_t3_ParamLimits

0x0264,	// (0x00028631) popup_snote2_single_graphic_window_t3

0x02a5,	// (0x00028672) popup_snote2_single_graphic_window_t4_ParamLimits

0x02a5,	// (0x00028672) popup_snote2_single_graphic_window_t4

0x02db,	// (0x000286a8) popup_snote2_single_graphic_window_t5_ParamLimits

0x02db,	// (0x000286a8) popup_snote2_single_graphic_window_t5

0x0004,

0xfc99,	// (0x00038066) popup_snote2_single_graphic_window_t_ParamLimits

0xfc99,	// (0x00038066) popup_snote2_single_graphic_window_t

0xe821,	// (0x00036bee) clock_nsta_pane_cp2_t1

0xe821,	// (0x00036bee) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x00037e8d) clock_nsta_pane_cp2_t

0x4812,	// (0x0002cbdf) form_field_data_wide_pane_g1_ParamLimits

0x9060,	// (0x0003142d) form_field_data_wide_pane_g2_ParamLimits

0x9060,	// (0x0003142d) form_field_data_wide_pane_g2

0x906c,	// (0x00031439) form_field_data_wide_pane_g3_ParamLimits

0x906c,	// (0x00031439) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x00037a69) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x00037a69) form_field_data_wide_pane_g

0xa828,	// (0x00032bf5) grid_touch_3_pane_ParamLimits

0xa828,	// (0x00032bf5) grid_touch_3_pane

0xac8c,	// (0x00033059) cell_touch_3_pane_ParamLimits

0xac8c,	// (0x00033059) cell_touch_3_pane

0xeb2c,	// (0x00036ef9) cell_touch_3_pane_g1

0xeb2c,	// (0x00036ef9) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x00037f12) cell_touch_3_pane_g

0x8b78,	// (0x00030f45) cont_query_data_pane

0x8b80,	// (0x00030f4d) cont_query_data_pane_cp1

0x03ee,	// (0x000287bb) button_value_adjust_pane_cp7

0x03f6,	// (0x000287c3) query_popup_pane_cp3

0xc343,	// (0x00034710) bg_popup_sub_pane_cp22_ParamLimits

0x5573,	// (0x0002d940) navi_navi_volume_pane_cp2

0x558b,	// (0x0002d958) popup_side_volume_key_window_g2

0x5597,	// (0x0002d964) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00037afb) popup_side_volume_key_window_g

0x55b1,	// (0x0002d97e) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x00037b02) popup_side_volume_key_window_t

0xc58d,	// (0x0003495a) popup_side_volume_key_window_ParamLimits

0x7d5c,	// (0x00030129) list_double_graphic_pane_g4_ParamLimits

0x7d5c,	// (0x00030129) list_double_graphic_pane_g4

0x8210,	// (0x000305dd) list_single_2heading_msg_pane_ParamLimits

0x8210,	// (0x000305dd) list_single_2heading_msg_pane

0x8278,	// (0x00030645) list_single_2heading_msg_pane_g1_ParamLimits

0x8278,	// (0x00030645) list_single_2heading_msg_pane_g1

0x8284,	// (0x00030651) list_single_2heading_msg_pane_g2_ParamLimits

0x8284,	// (0x00030651) list_single_2heading_msg_pane_g2

0x8297,	// (0x00030664) list_single_2heading_msg_pane_g3_ParamLimits

0x8297,	// (0x00030664) list_single_2heading_msg_pane_g3

0x82a3,	// (0x00030670) list_single_2heading_msg_pane_g4_ParamLimits

0x82a3,	// (0x00030670) list_single_2heading_msg_pane_g4

0x0003,

0xfca4,	// (0x00038071) list_single_2heading_msg_pane_g_ParamLimits

0xfca4,	// (0x00038071) list_single_2heading_msg_pane_g

0x82bb,	// (0x00030688) list_single_2heading_msg_pane_t1_ParamLimits

0x82bb,	// (0x00030688) list_single_2heading_msg_pane_t1

0x82e3,	// (0x000306b0) list_single_2heading_msg_pane_t2_ParamLimits

0x82e3,	// (0x000306b0) list_single_2heading_msg_pane_t2

0x834e,	// (0x0003071b) list_single_2heading_msg_pane_t3_ParamLimits

0x834e,	// (0x0003071b) list_single_2heading_msg_pane_t3

0x4f79,	// (0x0002d346) list_single_2heading_msg_pane_t4_ParamLimits

0x4f79,	// (0x0002d346) list_single_2heading_msg_pane_t4

0x0003,

0xfcad,	// (0x0003807a) list_single_2heading_msg_pane_t_ParamLimits

0xfcad,	// (0x0003807a) list_single_2heading_msg_pane_t

0x8652,	// (0x00030a1f) title_pane_g4_ParamLimits

0x8652,	// (0x00030a1f) title_pane_g4

0x53c3,	// (0x0002d790) title_pane_stacon_g3_ParamLimits

0x53c3,	// (0x0002d790) title_pane_stacon_g3

0xf4a3,	// (0x00037870) list_single_2graphic_im_pane_g4_ParamLimits

0xf4a3,	// (0x00037870) list_single_2graphic_im_pane_g4

0xdd32,	// (0x000360ff) popup_side_volume_key_window_cp

0xe19f,	// (0x0003656c) main_idle_act2_pane_t1

0x5927,	// (0x0002dcf4) toolbar_button_pane_g10

0x8f53,	// (0x00031320) popup_toolbar_window_cp1

0xe812,	// (0x00036bdf) clock_nsta_pane_cp_t1

0xe812,	// (0x00036bdf) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x00037e88) clock_nsta_pane_cp_t

0x5573,	// (0x0002d940) navi_navi_volume_pane_cp2_ParamLimits

0x557f,	// (0x0002d94c) popup_side_volume_key_window_g1_ParamLimits

0x558b,	// (0x0002d958) popup_side_volume_key_window_g2_ParamLimits

0x5597,	// (0x0002d964) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00037afb) popup_side_volume_key_window_g_ParamLimits

0x5d95,	// (0x0002e162) fep_hwr_aid_pane

0x2a4b,	// (0x0002ae18) bg_fep_hwr_top_pane_g4_ParamLimits

0xeb87,	// (0x00036f54) fep_hwr_top_pane_g1_ParamLimits

0xeb99,	// (0x00036f66) fep_hwr_top_pane_g2_ParamLimits

0x5e48,	// (0x0002e215) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x00037edd) fep_hwr_top_pane_g_ParamLimits

0x5e5d,	// (0x0002e22a) fep_hwr_top_text_pane_ParamLimits

0xdb32,	// (0x00035eff) aid_touch_tab_arrow_arrow_2

0xdb3b,	// (0x00035f08) aid_touch_tab_arrow_left_2

0x5da9,	// (0x0002e176) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5ddc,	// (0x0002e1a9) fep_hwr_prediction_pane

0xeccc,	// (0x00037099) fep_vkb_prediction_pane

0xaa58,	// (0x00032e25) fep_vkb_side_pane_g3_ParamLimits

0xaa58,	// (0x00032e25) fep_vkb_side_pane_g3

0xed5a,	// (0x00037127) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xf105,	// (0x000374d2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xf112,	// (0x000374df) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x00037f87) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0407,	// (0x000287d4) fep_hwr_prediction_pane_g1

0x6160,	// (0x0002e52d) fep_hwr_prediction_pane_g2

0x6168,	// (0x0002e535) fep_hwr_prediction_pane_g3

0x6170,	// (0x0002e53d) fep_hwr_prediction_pane_g4

0x0003,

0xfcb6,	// (0x00038083) fep_hwr_prediction_pane_g

0x0407,	// (0x000287d4) fep_vkb_prediction_pane_g1

0x0411,	// (0x000287de) fep_vkb_prediction_pane_g2

0x0419,	// (0x000287e6) fep_vkb_prediction_pane_g3

0x0421,	// (0x000287ee) fep_vkb_prediction_pane_g4

0x0003,

0xfcbf,	// (0x0003808c) fep_vkb_prediction_pane_g

0xf1f6,	// (0x000375c3) slider_set_pane_g3

0xf20a,	// (0x000375d7) slider_set_pane_g4

0xf222,	// (0x000375ef) slider_set_pane_g5

0xf1f6,	// (0x000375c3) slider_set_pane_g6

0xa4f7,	// (0x000328c4) slider_set_pane_g7

0xdf9b,	// (0x00036368) slider_form_pane_g3

0xdfa4,	// (0x00036371) slider_form_pane_g4

0xdfac,	// (0x00036379) slider_form_pane_g5

0xdf9b,	// (0x00036368) slider_form_pane_g6

0xa65f,	// (0x00032a2c) slider_form_pane_g7

0xe3e8,	// (0x000367b5) slider_set_pane_vc_g3

0xe3f1,	// (0x000367be) slider_set_pane_vc_g4

0xe3fa,	// (0x000367c7) slider_set_pane_vc_g5

0xe3e8,	// (0x000367b5) slider_set_pane_vc_g6

0xe403,	// (0x000367d0) slider_set_pane_vc_g7

0xe3e8,	// (0x000367b5) slider_form_pane_vc_g1

0xe3f1,	// (0x000367be) slider_form_pane_vc_g2

0xe3fa,	// (0x000367c7) slider_form_pane_vc_g3

0xe3e8,	// (0x000367b5) slider_form_pane_vc_g4

0xe597,	// (0x00036964) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x00037e61) slider_form_pane_vc_g

0x840a,	// (0x000307d7) main_idle_act3_pane

0x0429,	// (0x000287f6) ai3_links_pane

0xacd3,	// (0x000330a0) popup_ai3_data_window_ParamLimits

0xacd3,	// (0x000330a0) popup_ai3_data_window

0x840a,	// (0x000307d7) grid_ai3_links_pane

0xaceb,	// (0x000330b8) cell_ai3_links_pane_ParamLimits

0xaceb,	// (0x000330b8) cell_ai3_links_pane

0x0432,	// (0x000287ff) bg_popup_sub_pane_cp11

0x043f,	// (0x0002880c) cell_ai3_links_pane_g1

0x840a,	// (0x000307d7) bg_popup_sub_pane_cp12

0x0464,	// (0x00028831) heading_ai3_data_pane

0x046c,	// (0x00028839) list_ai3_gene_pane

0x0478,	// (0x00028845) popup_ai3_data_window_g1

0x0480,	// (0x0002884d) heading_ai3_data_pane_g1

0x0488,	// (0x00028855) heading_ai3_data_pane_t1

0x0496,	// (0x00028863) list_double_ai3_gene_pane_ParamLimits

0x0496,	// (0x00028863) list_double_ai3_gene_pane

0x04a3,	// (0x00028870) list_single_ai3_gene_pane_ParamLimits

0x04a3,	// (0x00028870) list_single_ai3_gene_pane

0xeaf1,	// (0x00036ebe) list_highlight_pane_cp7_ParamLimits

0xeaf1,	// (0x00036ebe) list_highlight_pane_cp7

0x04b0,	// (0x0002887d) list_single_a13_gene_pane_t1_ParamLimits

0x04b0,	// (0x0002887d) list_single_a13_gene_pane_t1

0x04c7,	// (0x00028894) list_single_ai3_gene_pane_g1

0x04d0,	// (0x0002889d) list_single_ai3_gene_pane_g2

0x0001,

0xfcc8,	// (0x00038095) list_single_ai3_gene_pane_g

0x04d8,	// (0x000288a5) list_double_ai3_gene_pane_g1_ParamLimits

0x04d8,	// (0x000288a5) list_double_ai3_gene_pane_g1

0x04e4,	// (0x000288b1) list_double_ai3_gene_pane_t1_ParamLimits

0x04e4,	// (0x000288b1) list_double_ai3_gene_pane_t1

0x0500,	// (0x000288cd) list_double_ai3_gene_pane_t2_ParamLimits

0x0500,	// (0x000288cd) list_double_ai3_gene_pane_t2

0x0515,	// (0x000288e2) list_double_ai3_gene_pane_t3_ParamLimits

0x0515,	// (0x000288e2) list_double_ai3_gene_pane_t3

0x0002,

0xfccd,	// (0x0003809a) list_double_ai3_gene_pane_t_ParamLimits

0xfccd,	// (0x0003809a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4eb1,	// (0x0002d27e) aid_size_min_col_2

0xacbf,	// (0x0003308c) aid_size_min_msg_ParamLimits

0xacbf,	// (0x0003308c) aid_size_min_msg

0xaa6c,	// (0x00032e39) fep_vkb_top_text_pane_g2_ParamLimits

0xaa6c,	// (0x00032e39) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x00037f0d) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x00037f0d) fep_vkb_top_text_pane_g

0x840a,	// (0x000307d7) main_hc_apps_shell_pane

0x0532,	// (0x000288ff) grid_hc_apps_pane_ParamLimits

0x0532,	// (0x000288ff) grid_hc_apps_pane

0x0541,	// (0x0002890e) list_hc_apps_pane

0x0549,	// (0x00028916) scroll_pane_cp37_ParamLimits

0x0549,	// (0x00028916) scroll_pane_cp37

0xad01,	// (0x000330ce) cell_hc_apps_pane_ParamLimits

0xad01,	// (0x000330ce) cell_hc_apps_pane

0xad9b,	// (0x00033168) cell_hc_apps_pane_g1_ParamLimits

0xad9b,	// (0x00033168) cell_hc_apps_pane_g1

0x0555,	// (0x00028922) cell_hc_apps_pane_g2_ParamLimits

0x0555,	// (0x00028922) cell_hc_apps_pane_g2

0x0571,	// (0x0002893e) cell_hc_apps_pane_g3_ParamLimits

0x0571,	// (0x0002893e) cell_hc_apps_pane_g3

0x0002,

0xfcd4,	// (0x000380a1) cell_hc_apps_pane_g_ParamLimits

0xfcd4,	// (0x000380a1) cell_hc_apps_pane_g

0xadc8,	// (0x00033195) cell_hc_apps_pane_t1_ParamLimits

0xadc8,	// (0x00033195) cell_hc_apps_pane_t1

0x8ac2,	// (0x00030e8f) grid_highlight_pane_cp10_ParamLimits

0x8ac2,	// (0x00030e8f) grid_highlight_pane_cp10

0xae06,	// (0x000331d3) list_single_hc_apps_pane_ParamLimits

0xae06,	// (0x000331d3) list_single_hc_apps_pane

0xae32,	// (0x000331ff) list_single_hc_apps_pane_g1

0xae4b,	// (0x00033218) list_single_hc_apps_pane_g2

0x0001,

0xfcdb,	// (0x000380a8) list_single_hc_apps_pane_g

0xae64,	// (0x00033231) list_single_hc_apps_pane_g2_copy1

0x83bc,	// (0x00030789) list_single_hc_apps_pane_t1

0x876d,	// (0x00030b3a) bg_set_opt_pane_cp_ParamLimits

0x877b,	// (0x00030b48) setting_slider_pane_t1_ParamLimits

0x8791,	// (0x00030b5e) setting_slider_pane_t2_ParamLimits

0x87aa,	// (0x00030b77) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00037947) setting_slider_pane_t_ParamLimits

0x87c1,	// (0x00030b8e) slider_set_pane_ParamLimits

0x5804,	// (0x0002dbd1) control_pane_g5_ParamLimits

0x5804,	// (0x0002dbd1) control_pane_g5

0xdf63,	// (0x00036330) slider_set_pane_g1_ParamLimits

0x5bb5,	// (0x0002df82) slider_set_pane_g2_ParamLimits

0xf1f6,	// (0x000375c3) slider_set_pane_g3_ParamLimits

0xf20a,	// (0x000375d7) slider_set_pane_g4_ParamLimits

0xf222,	// (0x000375ef) slider_set_pane_g5_ParamLimits

0xf1f6,	// (0x000375c3) slider_set_pane_g6_ParamLimits

0xa4f7,	// (0x000328c4) slider_set_pane_g7_ParamLimits

0xf96e,	// (0x00037d3b) slider_set_pane_g_ParamLimits

0x876d,	// (0x00030b3a) navi_icon_text_pane_ParamLimits

0x9d77,	// (0x00032144) aid_fill_nsta_2_ParamLimits

0x9da5,	// (0x00032172) aid_touch_tab_arrow_left_ParamLimits

0x9db9,	// (0x00032186) aid_touch_tab_arrow_right_ParamLimits

0x9e55,	// (0x00032222) clock_nsta_pane_ParamLimits

0xdb14,	// (0x00035ee1) navi_icon_pane_g1_ParamLimits

0xdb20,	// (0x00035eed) navi_text_pane_t1_ParamLimits

0xe862,	// (0x00036c2f) navi_icon_text_pane_g1_ParamLimits

0xe86e,	// (0x00036c3b) navi_icon_text_pane_t1_ParamLimits

0xae32,	// (0x000331ff) list_single_hc_apps_pane_g1_ParamLimits

0xae4b,	// (0x00033218) list_single_hc_apps_pane_g2_ParamLimits

0xfcdb,	// (0x000380a8) list_single_hc_apps_pane_g_ParamLimits

0xae64,	// (0x00033231) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x83bc,	// (0x00030789) list_single_hc_apps_pane_t1_ParamLimits

0x85a5,	// (0x00030972) popup_toolbar2_fixed_window_ParamLimits

0x85a5,	// (0x00030972) popup_toolbar2_fixed_window

0x9d02,	// (0x000320cf) popup_toolbar2_float_window

0x840a,	// (0x000307d7) bg_popup_sub_pane_cp27

0x11b9,	// (0x00029586) grid_toolbar2_float_pane

0x840a,	// (0x000307d7) bg_popup_sub_pane_cp26

0x11b9,	// (0x00029586) grid_toolbar2_fixed_pane

0xae80,	// (0x0003324d) cell_toolbar2_fixed_pane_ParamLimits

0xae80,	// (0x0003324d) cell_toolbar2_fixed_pane

0xae9b,	// (0x00033268) cell_toolbar2_fixed_pane_g1

0x11db,	// (0x000295a8) toolbar2_fixed_button_pane

0xcca3,	// (0x00035070) toolbar2_fixed_button_pane_g1

0xccab,	// (0x00035078) toolbar2_fixed_button_pane_g2

0xccb3,	// (0x00035080) toolbar2_fixed_button_pane_g3

0xccbb,	// (0x00035088) toolbar2_fixed_button_pane_g4

0xccc3,	// (0x00035090) toolbar2_fixed_button_pane_g5

0xcccb,	// (0x00035098) toolbar2_fixed_button_pane_g6

0xccd3,	// (0x000350a0) toolbar2_fixed_button_pane_g7

0xccdb,	// (0x000350a8) toolbar2_fixed_button_pane_g8

0xcce3,	// (0x000350b0) toolbar2_fixed_button_pane_g9

0x0008,

0xf870,	// (0x00037c3d) toolbar2_fixed_button_pane_g

0x11e3,	// (0x000295b0) cell_toolbar2_float_pane_ParamLimits

0x11e3,	// (0x000295b0) cell_toolbar2_float_pane

0x11f4,	// (0x000295c1) cell_toolbar2_float_pane_g1

0x11db,	// (0x000295a8) toolbar2_fixed_button_pane_cp

0xaa21,	// (0x00032dee) fep_vkb_accented_list_pane_ParamLimits

0xaa21,	// (0x00032dee) fep_vkb_accented_list_pane

0x5f9f,	// (0x0002e36c) bg_popup_fep_shadow_pane_g9

0xc795,	// (0x00034b62) bg_popup_fep_shadow_pane_cp3

0x9188,	// (0x00031555) list_accented_list_pane

0x11fd,	// (0x000295ca) list_single_accented_list_pane_ParamLimits

0x11fd,	// (0x000295ca) list_single_accented_list_pane

0xc795,	// (0x00034b62) list_highlight_pane_cp10

0x120e,	// (0x000295db) list_single_accented_list_pane_t1

0x9c44,	// (0x00032011) popup_slider_window_ParamLimits

0x9c44,	// (0x00032011) popup_slider_window

0x03fe,	// (0x000287cb) aid_indentation_list_msg

0xaf7a,	// (0x00033347) bg_popup_window_pane_cp19

0x1312,	// (0x000296df) popup_slider_window_g1

0x132e,	// (0x000296fb) popup_slider_window_g2

0x134a,	// (0x00029717) popup_slider_window_g3

0x0005,

0xfce0,	// (0x000380ad) popup_slider_window_g

0x13a6,	// (0x00029773) popup_slider_window_t1

0x1418,	// (0x000297e5) small_volume_slider_vertical_pane

0xeb2c,	// (0x00036ef9) small_volume_slider_vertical_pane_g1

0xeb2c,	// (0x00036ef9) small_volume_slider_vertical_pane_g2

0x1434,	// (0x00029801) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf2,	// (0x000380bf) small_volume_slider_vertical_pane_g

0x84a7,	// (0x00030874) area_side_right_pane_ParamLimits

0x84a7,	// (0x00030874) area_side_right_pane

0xb032,	// (0x000333ff) aid_size_side_button_ParamLimits

0xb032,	// (0x000333ff) aid_size_side_button

0xb04b,	// (0x00033418) grid_sctrl_middle_pane_ParamLimits

0xb04b,	// (0x00033418) grid_sctrl_middle_pane

0x61dd,	// (0x0002e5aa) sctrl_sk_bottom_pane

0x61ee,	// (0x0002e5bb) sctrl_sk_top_pane

0x6200,	// (0x0002e5cd) aid_touch_sctrl_top

0x8ac2,	// (0x00030e8f) bg_sctrl_sk_pane_ParamLimits

0x8ac2,	// (0x00030e8f) bg_sctrl_sk_pane

0x620d,	// (0x0002e5da) sctrl_sk_top_pane_g1

0x621a,	// (0x0002e5e7) sctrl_sk_top_pane_t1

0x6200,	// (0x0002e5cd) aid_touch_sctrl_bottom

0x8ac2,	// (0x00030e8f) bg_sctrl_sk_pane_cp_ParamLimits

0x8ac2,	// (0x00030e8f) bg_sctrl_sk_pane_cp

0x6235,	// (0x0002e602) sctrl_sk_bottom_pane_g1

0x621a,	// (0x0002e5e7) sctrl_sk_bottom_pane_t1

0xb061,	// (0x0003342e) cell_sctrl_middle_pane_ParamLimits

0xb061,	// (0x0003342e) cell_sctrl_middle_pane

0xb072,	// (0x0003343f) aid_touch_sctrl_middle_ParamLimits

0xb072,	// (0x0003343f) aid_touch_sctrl_middle

0xb07f,	// (0x0003344c) bg_sctrl_middle_pane_ParamLimits

0xb07f,	// (0x0003344c) bg_sctrl_middle_pane

0x14b9,	// (0x00029886) cell_sctrl_middle_pane_g1_ParamLimits

0x14b9,	// (0x00029886) cell_sctrl_middle_pane_g1

0xb08d,	// (0x0003345a) cell_sctrl_middle_pane_g2_ParamLimits

0xb08d,	// (0x0003345a) cell_sctrl_middle_pane_g2

0x0001,

0xfcfe,	// (0x000380cb) cell_sctrl_middle_pane_g_ParamLimits

0xfcfe,	// (0x000380cb) cell_sctrl_middle_pane_g

0xcca3,	// (0x00035070) bg_sctrl_middle_pane_g1

0xccab,	// (0x00035078) bg_sctrl_middle_pane_g2

0xccb3,	// (0x00035080) bg_sctrl_middle_pane_g3

0xccbb,	// (0x00035088) bg_sctrl_middle_pane_g4

0xccc3,	// (0x00035090) bg_sctrl_middle_pane_g5

0xcccb,	// (0x00035098) bg_sctrl_middle_pane_g6

0xccd3,	// (0x000350a0) bg_sctrl_middle_pane_g7

0xccdb,	// (0x000350a8) bg_sctrl_middle_pane_g8

0x0007,

0xfd03,	// (0x000380d0) bg_sctrl_middle_pane_g

0xcce3,	// (0x000350b0) bg_sctrl_middle_pane_g8_copy1

0xcca3,	// (0x00035070) bg_sctrl_sk_pane_g1

0xccab,	// (0x00035078) bg_sctrl_sk_pane_g2

0xccb3,	// (0x00035080) bg_sctrl_sk_pane_g3

0x0008,

0xf870,	// (0x00037c3d) bg_sctrl_sk_pane_g

0x8f18,	// (0x000312e5) aid_size_touch_scroll_bar

0xccbb,	// (0x00035088) bg_sctrl_sk_pane_g4

0xccc3,	// (0x00035090) bg_sctrl_sk_pane_g5

0xcccb,	// (0x00035098) bg_sctrl_sk_pane_g6

0xccd3,	// (0x000350a0) bg_sctrl_sk_pane_g7

0xccdb,	// (0x000350a8) bg_sctrl_sk_pane_g8

0xcce3,	// (0x000350b0) bg_sctrl_sk_pane_g9

0xca19,	// (0x00034de6) popup_fep_china_hwr2_fs_candidate_window

0x983f,	// (0x00031c0c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x983f,	// (0x00031c0c) popup_fep_china_hwr2_fs_control_window

0xed5a,	// (0x00037127) sctrl_sk_top_pane_g2

0x0001,

0xfcf9,	// (0x000380c6) sctrl_sk_top_pane_g

0xb09a,	// (0x00033467) aid_fep_china_hwr2_fs_cell_ParamLimits

0xb09a,	// (0x00033467) aid_fep_china_hwr2_fs_cell

0xb0ae,	// (0x0003347b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xb0ae,	// (0x0003347b) bg_popup_fep_shadow_pane_cp4

0xb0c5,	// (0x00033492) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xb0c5,	// (0x00033492) bg_popup_fep_shadow_pane_cp5

0xb0d7,	// (0x000334a4) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xb0d7,	// (0x000334a4) popup_fep_china_hwr2_fs_control_bar_grid

0xb0eb,	// (0x000334b8) popup_fep_china_hwr2_fs_control_funtion_grid

0x148f,	// (0x0002985c) aid_fep_china_hwr2_fs_candi_cell

0x840a,	// (0x000307d7) bg_popup_fep_shadow_pane_cp6

0x1499,	// (0x00029866) popup_fep_china_hwr2_fs_candidate_grid

0xb0f3,	// (0x000334c0) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xb0f3,	// (0x000334c0) cell_fep_china_hwr2_fs_funtion_grid

0xeb2c,	// (0x00036ef9) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x14b9,	// (0x00029886) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x14b9,	// (0x00029886) cell_fep_china_hwr2_fs_funtion_grid_g1

0x14c7,	// (0x00029894) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x14c7,	// (0x00029894) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd14,	// (0x000380e1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd14,	// (0x000380e1) cell_fep_china_hwr2_fs_funtion_grid_g

0xb10b,	// (0x000334d8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xb10b,	// (0x000334d8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xb120,	// (0x000334ed) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xb120,	// (0x000334ed) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd19,	// (0x000380e6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd19,	// (0x000380e6) cell_fep_china_hwr2_fs_funtion_grid_t

0x150e,	// (0x000298db) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x1516,	// (0x000298e3) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x151e,	// (0x000298eb) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1e,	// (0x000380eb) popup_fep_china_hwr2_fs_control_bar_grid_g

0x1526,	// (0x000298f3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x1526,	// (0x000298f3) cell_fep_china_hwr2_fs_candidate_grid

0x153f,	// (0x0002990c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x1547,	// (0x00029914) popup_fep_china_hwr2_fs_candidate_grid_g21

0xeb2c,	// (0x00036ef9) cell_fep_china_hwr2_fs_candidate_grid_g1

0xeb2c,	// (0x00036ef9) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x00037f12) cell_fep_china_hwr2_fs_candidate_grid_g

0x154f,	// (0x0002991c) cell_fep_china_hwr2_fs_candidate_grid_t1

0xcb08,	// (0x00034ed5) clock_nsta_pane_cp_24_ParamLimits

0xcb08,	// (0x00034ed5) clock_nsta_pane_cp_24

0xcb65,	// (0x00034f32) indicator_nsta_pane_cp_24_ParamLimits

0xcb65,	// (0x00034f32) indicator_nsta_pane_cp_24

0xda1f,	// (0x00035dec) heading_pane_g1

0x0001,

0xf8d5,	// (0x00037ca2) heading_pane_g

0xa750,	// (0x00032b1d) grid_sct_catagory_button_pane

0xd9d3,	// (0x00035da0) scroll_pane_cp5_ParamLimits

0xe894,	// (0x00036c61) button_value_adjust_pane_cp5_ParamLimits

0xe894,	// (0x00036c61) button_value_adjust_pane_cp5

0xe952,	// (0x00036d1f) form2_midp_time_pane_ParamLimits

0x155d,	// (0x0002992a) cell_sct_catagory_button_pane_ParamLimits

0x155d,	// (0x0002992a) cell_sct_catagory_button_pane

0xeaf1,	// (0x00036ebe) bg_button_pane_cp01_ParamLimits

0xeaf1,	// (0x00036ebe) bg_button_pane_cp01

0xeb2c,	// (0x00036ef9) cell_sct_catagory_button_pane_g1

0x9cb3,	// (0x00032080) popup_tb_extension_window

0xb13c,	// (0x00033509) aid_size_cell_ext_ParamLimits

0xb13c,	// (0x00033509) aid_size_cell_ext

0x8df6,	// (0x000311c3) bg_tb_trans_pane_cp1_ParamLimits

0x8df6,	// (0x000311c3) bg_tb_trans_pane_cp1

0xb162,	// (0x0003352f) grid_tb_ext_pane_ParamLimits

0xb162,	// (0x0003352f) grid_tb_ext_pane

0xb198,	// (0x00033565) cell_tb_ext_pane_ParamLimits

0xb198,	// (0x00033565) cell_tb_ext_pane

0xb1bc,	// (0x00033589) cell_tb_ext_pane_g1_ParamLimits

0xb1bc,	// (0x00033589) cell_tb_ext_pane_g1

0x15e7,	// (0x000299b4) cell_tb_ext_pane_t1

0x8ac2,	// (0x00030e8f) list_highlight_pane_cp11_ParamLimits

0x8ac2,	// (0x00030e8f) list_highlight_pane_cp11

0x51c0,	// (0x0002d58d) popup_uni_indicator_window_ParamLimits

0x51c0,	// (0x0002d58d) popup_uni_indicator_window

0x9046,	// (0x00031413) bg_popup_sub_pane_cp14

0x1602,	// (0x000299cf) list_uniindi_pane

0x160e,	// (0x000299db) uniindi_top_pane

0x8ac2,	// (0x00030e8f) bg_uniindi_top_pane

0x162d,	// (0x000299fa) uniindi_top_pane_g1

0x1643,	// (0x00029a10) uniindi_top_pane_g2

0x0003,

0xfd25,	// (0x000380f2) uniindi_top_pane_g

0x166d,	// (0x00029a3a) uniindi_top_pane_t1

0x1697,	// (0x00029a64) list_single_uniindi_pane_ParamLimits

0x1697,	// (0x00029a64) list_single_uniindi_pane

0xeb2c,	// (0x00036ef9) bg_uniindi_top_pane_g1

0x16a9,	// (0x00029a76) list_single_uniindi_pane_g1

0x16bc,	// (0x00029a89) list_single_uniindi_pane_t1

0x840a,	// (0x000307d7) control_bg_pane

0x16e1,	// (0x00029aae) bg_sctrl_sk_pane_cp1

0x16ea,	// (0x00029ab7) bg_sctrl_sk_pane_cp2

0x16f3,	// (0x00029ac0) control_bg_pane_g1

0x16fc,	// (0x00029ac9) control_bg_pane_g2

0x0001,

0xfd2e,	// (0x000380fb) control_bg_pane_g

0xe755,	// (0x00036b22) cell_indicator_nsta_pane_g1_ParamLimits

0xa85b,	// (0x00032c28) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x00037e76) cell_indicator_nsta_pane_g_ParamLimits

0x4d28,	// (0x0002d0f5) form2_midp_time_pane_t1_ParamLimits

0xf1d4,	// (0x000375a1) main_idle_act4_pane_ParamLimits

0xf1d4,	// (0x000375a1) main_idle_act4_pane

0x9cb3,	// (0x00032080) popup_tb_extension_window_ParamLimits

0xb182,	// (0x0003354f) tb_ext_find_pane_ParamLimits

0xb182,	// (0x0003354f) tb_ext_find_pane

0x1705,	// (0x00029ad2) ai_gene_pane_1_cp1

0xc829,	// (0x00034bf6) ai_gene_pane_2_cp1

0x170d,	// (0x00029ada) list_single_idle_plugin_calendar_pane

0x1716,	// (0x00029ae3) list_single_idle_plugin_notification_pane

0x171f,	// (0x00029aec) list_single_idle_plugin_player_pane

0xb1d9,	// (0x000335a6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xb1d9,	// (0x000335a6) list_single_idle_plugin_shortcut_pane

0xb201,	// (0x000335ce) main_idle_act4_pane_t1

0xb217,	// (0x000335e4) main_idle_act4_pane_t2

0x0001,

0xfd33,	// (0x00038100) main_idle_act4_pane_t

0xb22d,	// (0x000335fa) middle_sk_idle_act4_pane_ParamLimits

0xb22d,	// (0x000335fa) middle_sk_idle_act4_pane

0xb249,	// (0x00033616) popup_clock_digital_analogue_window_cp2

0xb26f,	// (0x0003363c) shortcut_wheel_idle_act4_pane_ParamLimits

0xb26f,	// (0x0003363c) shortcut_wheel_idle_act4_pane

0xeb2c,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g1

0xeb2c,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g2

0xeb2c,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g3

0xeb2c,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g4

0xeb2c,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g5

0x17b2,	// (0x00029b7f) shortcut_wheel_idle_act4_pane_g6

0x17ba,	// (0x00029b87) shortcut_wheel_idle_act4_pane_g7

0x17c2,	// (0x00029b8f) shortcut_wheel_idle_act4_pane_g8

0x17ca,	// (0x00029b97) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd38,	// (0x00038105) shortcut_wheel_idle_act4_pane_g

0x2a4b,	// (0x0002ae18) middle_sk_idle_act4_pane_g1_ParamLimits

0x2a4b,	// (0x0002ae18) middle_sk_idle_act4_pane_g1

0xb2ea,	// (0x000336b7) middle_sk_idle_act4_pane_g2_ParamLimits

0xb2ea,	// (0x000336b7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5b,	// (0x00038128) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5b,	// (0x00038128) middle_sk_idle_act4_pane_g

0xb302,	// (0x000336cf) middle_sk_idle_act4_pane_t1_ParamLimits

0xb302,	// (0x000336cf) middle_sk_idle_act4_pane_t1

0xb331,	// (0x000336fe) grid_ai_shortcut_pane_ParamLimits

0xb331,	// (0x000336fe) grid_ai_shortcut_pane

0xb34e,	// (0x0003371b) list_highlight_pane_cp16_ParamLimits

0xb34e,	// (0x0003371b) list_highlight_pane_cp16

0xb35b,	// (0x00033728) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb35b,	// (0x00033728) list_single_idle_plugin_shortcut_pane_g1

0xb367,	// (0x00033734) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb367,	// (0x00033734) list_single_idle_plugin_shortcut_pane_g2

0xb383,	// (0x00033750) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb383,	// (0x00033750) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd60,	// (0x0003812d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd60,	// (0x0003812d) list_single_idle_plugin_shortcut_pane_g

0xb398,	// (0x00033765) cell_ai_shortcut_pane_ParamLimits

0xb398,	// (0x00033765) cell_ai_shortcut_pane

0xb3ae,	// (0x0003377b) cell_ai_shortcut_pane_g1_ParamLimits

0xb3ae,	// (0x0003377b) cell_ai_shortcut_pane_g1

0x1705,	// (0x00029ad2) ai_gene_pane_1_cp2

0x18f7,	// (0x00029cc4) ai_gene_pane_2_cp2

0x18ff,	// (0x00029ccc) list_highlight_pane_cp15

0x1908,	// (0x00029cd5) list_single_idle_plugin_calendar_pane_g1

0x18ff,	// (0x00029ccc) list_highlight_pane_cp17

0x1910,	// (0x00029cdd) list_single_idle_plugin_calendar_pane_g1_copy1

0x1918,	// (0x00029ce5) list_single_idle_plugin_player_pane_g1

0xe22b,	// (0x000365f8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd67,	// (0x00038134) list_single_idle_plugin_player_pane_g

0x1920,	// (0x00029ced) list_single_idle_plugin_player_pane_t1

0x192e,	// (0x00029cfb) list_single_idle_plugin_player_pane_t2

0x193c,	// (0x00029d09) list_single_idle_plugin_player_pane_t3

0x194a,	// (0x00029d17) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6c,	// (0x00038139) list_single_idle_plugin_player_pane_t

0x1958,	// (0x00029d25) wait_bar_pane_cp15

0x1960,	// (0x00029d2d) grid_ai_notification_pane

0xe22b,	// (0x000365f8) list_single_idle_plugin_notification_pane_g1

0xb3d0,	// (0x0003379d) cell_ai_notification_pane_ParamLimits

0xb3d0,	// (0x0003379d) cell_ai_notification_pane

0x1976,	// (0x00029d43) cell_ai_notification_pane_g1

0x197e,	// (0x00029d4b) cell_ai_notification_pane_t1

0xb3dd,	// (0x000337aa) tb_ext_find_button_pane

0xb3e5,	// (0x000337b2) tb_ext_find_pane_g1

0xb3ed,	// (0x000337ba) tb_ext_find_pane_t1

0xc308,	// (0x000346d5) tb_ext_find_button_pane_g1

0x19aa,	// (0x00029d77) tb_ext_find_button_pane_g2

0x0001,

0xfd75,	// (0x00038142) tb_ext_find_button_pane_g

0xb201,	// (0x000335ce) main_idle_act4_pane_t1_ParamLimits

0xb217,	// (0x000335e4) main_idle_act4_pane_t2_ParamLimits

0xfd33,	// (0x00038100) main_idle_act4_pane_t_ParamLimits

0xb249,	// (0x00033616) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb25f,	// (0x0003362c) sat_plugin_idle_act4_pane_ParamLimits

0xb25f,	// (0x0003362c) sat_plugin_idle_act4_pane

0xb3fb,	// (0x000337c8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb3fb,	// (0x000337c8) sat_plugin_idle_act4_pane_t1

0xb413,	// (0x000337e0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb413,	// (0x000337e0) sat_plugin_idle_act4_pane_t2

0xb42b,	// (0x000337f8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb42b,	// (0x000337f8) sat_plugin_idle_act4_pane_t3

0xb443,	// (0x00033810) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb443,	// (0x00033810) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7a,	// (0x00038147) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7a,	// (0x00038147) sat_plugin_idle_act4_pane_t

0x5121,	// (0x0002d4ee) popup_battery_window_ParamLimits

0x5121,	// (0x0002d4ee) popup_battery_window

0x8ac2,	// (0x00030e8f) bg_popup_sub_pane_cp25_ParamLimits

0x8ac2,	// (0x00030e8f) bg_popup_sub_pane_cp25

0x19ff,	// (0x00029dcc) popup_battery_window_g1_ParamLimits

0x19ff,	// (0x00029dcc) popup_battery_window_g1

0x1a0b,	// (0x00029dd8) popup_battery_window_t1_ParamLimits

0x1a0b,	// (0x00029dd8) popup_battery_window_t1

0x1a1d,	// (0x00029dea) popup_battery_window_t2_ParamLimits

0x1a1d,	// (0x00029dea) popup_battery_window_t2

0x0001,

0xfd83,	// (0x00038150) popup_battery_window_t_ParamLimits

0xfd83,	// (0x00038150) popup_battery_window_t

0x95aa,	// (0x00031977) midp_canvas_pane_ParamLimits

0x95ff,	// (0x000319cc) midp_keypad_pane_ParamLimits

0x95ff,	// (0x000319cc) midp_keypad_pane

0xc0d3,	// (0x000344a0) main_midp_pane_ParamLimits

0xe830,	// (0x00036bfd) signal_pane_g2_cp_ParamLimits

0xb45b,	// (0x00033828) aid_size_cell_midp_keypad_ParamLimits

0xb45b,	// (0x00033828) aid_size_cell_midp_keypad

0xb479,	// (0x00033846) midp_keyp_game_grid_pane_ParamLimits

0xb479,	// (0x00033846) midp_keyp_game_grid_pane

0xb498,	// (0x00033865) midp_keyp_rocker_pane_ParamLimits

0xb498,	// (0x00033865) midp_keyp_rocker_pane

0xb4d9,	// (0x000338a6) midp_keyp_sk_left_pane_ParamLimits

0xb4d9,	// (0x000338a6) midp_keyp_sk_left_pane

0xb52b,	// (0x000338f8) midp_keyp_sk_right_pane_ParamLimits

0xb52b,	// (0x000338f8) midp_keyp_sk_right_pane

0x840a,	// (0x000307d7) bg_button_pane_cp03

0xb577,	// (0x00033944) midp_keyp_sk_left_pane_g1

0x840a,	// (0x000307d7) bg_button_pane_cp04

0xb577,	// (0x00033944) midp_keyp_sk_right_pane_g1

0xeb2c,	// (0x00036ef9) midp_keyp_rocker_pane_g1

0xb580,	// (0x0003394d) keyp_game_cell_pane_ParamLimits

0xb580,	// (0x0003394d) keyp_game_cell_pane

0x840a,	// (0x000307d7) bg_button_pane_cp02

0xb5a2,	// (0x0003396f) keyp_game_cell_pane_g1

0x856b,	// (0x00030938) popup_fep_vkb2_window_ParamLimits

0x856b,	// (0x00030938) popup_fep_vkb2_window

0xb5ab,	// (0x00033978) aid_size_cell_vkb2_ParamLimits

0xb5ab,	// (0x00033978) aid_size_cell_vkb2

0xb5e1,	// (0x000339ae) popup_fep_vkb2_window_g1_ParamLimits

0xb5e1,	// (0x000339ae) popup_fep_vkb2_window_g1

0xb631,	// (0x000339fe) vkb2_area_bottom_pane_ParamLimits

0xb631,	// (0x000339fe) vkb2_area_bottom_pane

0xb66f,	// (0x00033a3c) vkb2_area_keypad_pane_ParamLimits

0xb66f,	// (0x00033a3c) vkb2_area_keypad_pane

0xb6ad,	// (0x00033a7a) vkb2_area_top_pane_ParamLimits

0xb6ad,	// (0x00033a7a) vkb2_area_top_pane

0xb729,	// (0x00033af6) vkb2_top_entry_pane_ParamLimits

0xb729,	// (0x00033af6) vkb2_top_entry_pane

0xb756,	// (0x00033b23) vkb2_top_grid_left_pane_ParamLimits

0xb756,	// (0x00033b23) vkb2_top_grid_left_pane

0xb776,	// (0x00033b43) vkb2_top_grid_right_pane_ParamLimits

0xb776,	// (0x00033b43) vkb2_top_grid_right_pane

0x6470,	// (0x0002e83d) vkb2_cell_keypad_pane_ParamLimits

0x6470,	// (0x0002e83d) vkb2_cell_keypad_pane

0xb7bc,	// (0x00033b89) vkb2_area_bottom_grid_pane_ParamLimits

0xb7bc,	// (0x00033b89) vkb2_area_bottom_grid_pane

0xb7e2,	// (0x00033baf) vkb2_area_bottom_pane_g1_ParamLimits

0xb7e2,	// (0x00033baf) vkb2_area_bottom_pane_g1

0xb808,	// (0x00033bd5) vkb2_area_bottom_pane_g2_ParamLimits

0xb808,	// (0x00033bd5) vkb2_area_bottom_pane_g2

0xb839,	// (0x00033c06) vkb2_area_bottom_pane_g3_ParamLimits

0xb839,	// (0x00033c06) vkb2_area_bottom_pane_g3

0x0002,

0xfd88,	// (0x00038155) vkb2_area_bottom_pane_g_ParamLimits

0xfd88,	// (0x00038155) vkb2_area_bottom_pane_g

0x65e8,	// (0x0002e9b5) vkb2_top_cell_left_pane_ParamLimits

0x65e8,	// (0x0002e9b5) vkb2_top_cell_left_pane

0xb88f,	// (0x00033c5c) vkb2_top_entry_pane_g1_ParamLimits

0xb88f,	// (0x00033c5c) vkb2_top_entry_pane_g1

0xb89d,	// (0x00033c6a) vkb2_top_entry_pane_t1_ParamLimits

0xb89d,	// (0x00033c6a) vkb2_top_entry_pane_t1

0x2d45,	// (0x0002b112) vkb2_top_entry_pane_t2_ParamLimits

0x2d45,	// (0x0002b112) vkb2_top_entry_pane_t2

0x2d77,	// (0x0002b144) vkb2_top_entry_pane_t3_ParamLimits

0x2d77,	// (0x0002b144) vkb2_top_entry_pane_t3

0x0002,

0xfd8f,	// (0x0003815c) vkb2_top_entry_pane_t_ParamLimits

0xfd8f,	// (0x0003815c) vkb2_top_entry_pane_t

0xb8d6,	// (0x00033ca3) vkb2_top_grid_right_pane_g1_ParamLimits

0xb8d6,	// (0x00033ca3) vkb2_top_grid_right_pane_g1

0x668b,	// (0x0002ea58) vkb2_top_grid_right_pane_g2_ParamLimits

0x668b,	// (0x0002ea58) vkb2_top_grid_right_pane_g2

0x66a3,	// (0x0002ea70) vkb2_top_grid_right_pane_g3_ParamLimits

0x66a3,	// (0x0002ea70) vkb2_top_grid_right_pane_g3

0xb8ec,	// (0x00033cb9) vkb2_top_grid_right_pane_g4_ParamLimits

0xb8ec,	// (0x00033cb9) vkb2_top_grid_right_pane_g4

0x0003,

0xfd96,	// (0x00038163) vkb2_top_grid_right_pane_g_ParamLimits

0xfd96,	// (0x00038163) vkb2_top_grid_right_pane_g

0x66d1,	// (0x0002ea9e) vkb2_top_cell_left_pane_g1

0x66e8,	// (0x0002eab5) vkb2_cell_keypad_pane_g1_ParamLimits

0x66e8,	// (0x0002eab5) vkb2_cell_keypad_pane_g1

0x2db9,	// (0x0002b186) vkb2_cell_keypad_pane_t1_ParamLimits

0x2db9,	// (0x0002b186) vkb2_cell_keypad_pane_t1

0x66f6,	// (0x0002eac3) vkb2_cell_bottom_grid_pane_ParamLimits

0x66f6,	// (0x0002eac3) vkb2_cell_bottom_grid_pane

0x672f,	// (0x0002eafc) vkb2_cell_bottom_grid_pane_g1

0xb28e,	// (0x0003365b) aid_call2_pane_cp02

0xb296,	// (0x00033663) aid_call_pane_cp02

0xb29e,	// (0x0003366b) clock_digital_number_pane_cp10

0xb2a6,	// (0x00033673) clock_digital_number_pane_cp11

0xb2ae,	// (0x0003367b) clock_digital_number_pane_cp12

0xb2b6,	// (0x00033683) clock_digital_number_pane_cp13

0xb2be,	// (0x0003368b) clock_digital_separator_pane_cp10

0xc308,	// (0x000346d5) popup_clock_digital_analogue_window_cp2_g1

0xc308,	// (0x000346d5) popup_clock_digital_analogue_window_cp2_g2

0xb2c6,	// (0x00033693) popup_clock_digital_analogue_window_cp2_g3

0xc308,	// (0x000346d5) popup_clock_digital_analogue_window_cp2_g4

0xb2c6,	// (0x00033693) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4b,	// (0x00038118) popup_clock_digital_analogue_window_cp2_g

0xb2ce,	// (0x0003369b) popup_clock_digital_analogue_window_cp2_t1

0xb2dc,	// (0x000336a9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd56,	// (0x00038123) popup_clock_digital_analogue_window_cp2_t

0xeb2c,	// (0x00036ef9) clock_digital_number_pane_cp10_g1

0xeb2c,	// (0x00036ef9) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x00037f12) clock_digital_number_pane_cp10_g

0xeb2c,	// (0x00036ef9) clock_digital_separator_pane_cp10_g1

0xeb2c,	// (0x00036ef9) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x00037f12) clock_digital_separator_pane_cp10_g

0x164f,	// (0x00029a1c) uniindi_top_pane_g3

0x1660,	// (0x00029a2d) uniindi_top_pane_g4

0x64db,	// (0x0002e8a8) vkb2_row_keypad_pane_ParamLimits

0x64db,	// (0x0002e8a8) vkb2_row_keypad_pane

0x674b,	// (0x0002eb18) vkb2_cell_t_keypad_pane_ParamLimits

0x674b,	// (0x0002eb18) vkb2_cell_t_keypad_pane

0x6758,	// (0x0002eb25) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6758,	// (0x0002eb25) vkb2_cell_t_keypad_pane_cp08

0x6768,	// (0x0002eb35) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6768,	// (0x0002eb35) vkb2_cell_t_keypad_pane_cp09

0x6779,	// (0x0002eb46) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6779,	// (0x0002eb46) vkb2_cell_t_keypad_pane_cp01

0x6789,	// (0x0002eb56) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6789,	// (0x0002eb56) vkb2_cell_t_keypad_pane_cp02

0x6799,	// (0x0002eb66) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6799,	// (0x0002eb66) vkb2_cell_t_keypad_pane_cp03

0x67a9,	// (0x0002eb76) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x67a9,	// (0x0002eb76) vkb2_cell_t_keypad_pane_cp04

0x67b9,	// (0x0002eb86) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x67b9,	// (0x0002eb86) vkb2_cell_t_keypad_pane_cp05

0x67c9,	// (0x0002eb96) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x67c9,	// (0x0002eb96) vkb2_cell_t_keypad_pane_cp06

0x67d9,	// (0x0002eba6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x67d9,	// (0x0002eba6) vkb2_cell_t_keypad_pane_cp07

0x67e9,	// (0x0002ebb6) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x67e9,	// (0x0002ebb6) vkb2_cell_t_keypad_pane_cp10

0xed5a,	// (0x00037127) vkb2_cell_t_keypad_pane_g1

0x2dd0,	// (0x0002b19d) vkb2_cell_t_keypad_pane_t1

0x840a,	// (0x000307d7) popup_grid_graphic2_window

0xb902,	// (0x00033ccf) aid_size_cell_graphic2_ParamLimits

0xb902,	// (0x00033ccf) aid_size_cell_graphic2

0xd246,	// (0x00035613) bg_popup_window_pane_cp21_ParamLimits

0xd246,	// (0x00035613) bg_popup_window_pane_cp21

0xb934,	// (0x00033d01) graphic2_pages_pane_ParamLimits

0xb934,	// (0x00033d01) graphic2_pages_pane

0xb97d,	// (0x00033d4a) grid_graphic2_control_pane_ParamLimits

0xb97d,	// (0x00033d4a) grid_graphic2_control_pane

0xb9ab,	// (0x00033d78) grid_graphic2_pane_ParamLimits

0xb9ab,	// (0x00033d78) grid_graphic2_pane

0xba0a,	// (0x00033dd7) cell_graphic2_pane

0x840a,	// (0x000307d7) main_comp_mode_pane

0x046c,	// (0x00028839) list_ai3_gene_pane_ParamLimits

0xaf7a,	// (0x00033347) bg_popup_window_pane_cp19_ParamLimits

0x12ba,	// (0x00029687) bg_touch_area_indi_pane_ParamLimits

0x12ba,	// (0x00029687) bg_touch_area_indi_pane

0x12d0,	// (0x0002969d) bg_touch_area_indi_pane_cp01_ParamLimits

0x12d0,	// (0x0002969d) bg_touch_area_indi_pane_cp01

0x12e6,	// (0x000296b3) bg_touch_area_indi_pane_cp02_ParamLimits

0x12e6,	// (0x000296b3) bg_touch_area_indi_pane_cp02

0x12fc,	// (0x000296c9) bg_touch_area_indi_pane_cp03_ParamLimits

0x12fc,	// (0x000296c9) bg_touch_area_indi_pane_cp03

0x1312,	// (0x000296df) popup_slider_window_g1_ParamLimits

0x132e,	// (0x000296fb) popup_slider_window_g2_ParamLimits

0x134a,	// (0x00029717) popup_slider_window_g3_ParamLimits

0xfce0,	// (0x000380ad) popup_slider_window_g_ParamLimits

0x13a6,	// (0x00029773) popup_slider_window_t1_ParamLimits

0x1418,	// (0x000297e5) small_volume_slider_vertical_pane_ParamLimits

0xba0a,	// (0x00033dd7) cell_graphic2_pane_ParamLimits

0xba53,	// (0x00033e20) bg_button_pane_cp10_ParamLimits

0xba53,	// (0x00033e20) bg_button_pane_cp10

0xba64,	// (0x00033e31) bg_button_pane_cp11_ParamLimits

0xba64,	// (0x00033e31) bg_button_pane_cp11

0xba75,	// (0x00033e42) graphic2_pages_pane_g1_ParamLimits

0xba75,	// (0x00033e42) graphic2_pages_pane_g1

0xba90,	// (0x00033e5d) graphic2_pages_pane_g2_ParamLimits

0xba90,	// (0x00033e5d) graphic2_pages_pane_g2

0x0001,

0xfda4,	// (0x00038171) graphic2_pages_pane_g_ParamLimits

0xfda4,	// (0x00038171) graphic2_pages_pane_g

0xbaa8,	// (0x00033e75) graphic2_pages_pane_t1_ParamLimits

0xbaa8,	// (0x00033e75) graphic2_pages_pane_t1

0xbac0,	// (0x00033e8d) cell_graphic2_control_pane_ParamLimits

0xbac0,	// (0x00033e8d) cell_graphic2_control_pane

0xbada,	// (0x00033ea7) cell_graphic2_pane_g1_ParamLimits

0xbada,	// (0x00033ea7) cell_graphic2_pane_g1

0x2de2,	// (0x0002b1af) cell_graphic2_pane_g2_ParamLimits

0x2de2,	// (0x0002b1af) cell_graphic2_pane_g2

0xbae7,	// (0x00033eb4) cell_graphic2_pane_g3_ParamLimits

0xbae7,	// (0x00033eb4) cell_graphic2_pane_g3

0x2def,	// (0x0002b1bc) cell_graphic2_pane_g4_ParamLimits

0x2def,	// (0x0002b1bc) cell_graphic2_pane_g4

0xbaf4,	// (0x00033ec1) cell_graphic2_pane_g5_ParamLimits

0xbaf4,	// (0x00033ec1) cell_graphic2_pane_g5

0x0004,

0xfda9,	// (0x00038176) cell_graphic2_pane_g_ParamLimits

0xfda9,	// (0x00038176) cell_graphic2_pane_g

0xbb14,	// (0x00033ee1) cell_graphic2_pane_t1_ParamLimits

0xbb14,	// (0x00033ee1) cell_graphic2_pane_t1

0xda13,	// (0x00035de0) grid_highlight_pane_cp11_ParamLimits

0xda13,	// (0x00035de0) grid_highlight_pane_cp11

0x9046,	// (0x00031413) bg_button_pane_cp05

0xbb49,	// (0x00033f16) cell_graphic2_control_pane_g1

0xeb2c,	// (0x00036ef9) bg_touch_area_indi_pane_g1

0x2dfc,	// (0x0002b1c9) aid_cmod_rocker_key_size

0x2e06,	// (0x0002b1d3) aid_cmode_itu_key_size

0x2e10,	// (0x0002b1dd) main_cmode_video_pane

0x2e18,	// (0x0002b1e5) main_comp_mode_itu_pane

0x2e22,	// (0x0002b1ef) main_comp_mode_rocker_pane

0x2e2a,	// (0x0002b1f7) cell_cmode_rocker_pane_ParamLimits

0x2e2a,	// (0x0002b1f7) cell_cmode_rocker_pane

0x2e3c,	// (0x0002b209) cell_cmode_itu_pane_ParamLimits

0x2e3c,	// (0x0002b209) cell_cmode_itu_pane

0x9046,	// (0x00031413) bg_button_pane_cp06_ParamLimits

0x9046,	// (0x00031413) bg_button_pane_cp06

0xed5a,	// (0x00037127) cell_cmode_rocker_pane_g1_ParamLimits

0xed5a,	// (0x00037127) cell_cmode_rocker_pane_g1

0x14b9,	// (0x00029886) cell_cmode_rocker_pane_g2_ParamLimits

0x14b9,	// (0x00029886) cell_cmode_rocker_pane_g2

0x0001,

0xfdb9,	// (0x00038186) cell_cmode_rocker_pane_g_ParamLimits

0xfdb9,	// (0x00038186) cell_cmode_rocker_pane_g

0x840a,	// (0x000307d7) bg_button_pane_cp07

0x2e51,	// (0x0002b21e) cell_cmode_itu_pane_g1

0x2e5a,	// (0x0002b227) cell_cmode_itu_pane_t1

0x2e68,	// (0x0002b235) cell_cmode_itu_pane_t2

0x0001,

0xfdbe,	// (0x0003818b) cell_cmode_itu_pane_t

0x16d1,	// (0x00029a9e) aid_touch_ctrl_left

0x16d9,	// (0x00029aa6) aid_touch_ctrl_right

0x840a,	// (0x000307d7) compa_mode_pane

0xbb56,	// (0x00033f23) aid_cmod_rocker_key_size_cp

0xbb60,	// (0x00033f2d) aid_cmode_itu_key_size_cp

0x2e76,	// (0x0002b243) compa_mode_pane_g1

0x2e7e,	// (0x0002b24b) compa_mode_pane_g2

0x2e86,	// (0x0002b253) compa_mode_pane_g3

0x0002,

0xfdc3,	// (0x00038190) compa_mode_pane_g

0xbb6a,	// (0x00033f37) main_comp_mode_itu_pane_cp

0xbb74,	// (0x00033f41) main_comp_mode_rocker_pane_cp

0xbb7e,	// (0x00033f4b) cell_cmode_itu_pane_cp_ParamLimits

0xbb7e,	// (0x00033f4b) cell_cmode_itu_pane_cp

0xbb93,	// (0x00033f60) cell_cmode_rocker_pane_cp_ParamLimits

0xbb93,	// (0x00033f60) cell_cmode_rocker_pane_cp

0x9046,	// (0x00031413) bg_button_pane_cp06_cp_ParamLimits

0x9046,	// (0x00031413) bg_button_pane_cp06_cp

0xed5a,	// (0x00037127) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xed5a,	// (0x00037127) cell_cmode_rocker_pane_g1_cp

0xeb2c,	// (0x00036ef9) cell_cmode_rocker_pane_g2_cp

0x840a,	// (0x000307d7) bg_button_pane_cp07_cp

0xbba5,	// (0x00033f72) cell_cmode_itu_pane_g1_cp

0xbbae,	// (0x00033f7b) cell_cmode_itu_pane_t1_cp

0xbbbc,	// (0x00033f89) cell_cmode_itu_pane_t2_cp

0xa657,	// (0x00032a24) settings_code_pane_cp2

0x876d,	// (0x00030b3a) bg_popup_window_pane_cp3_ParamLimits

0x8c9a,	// (0x00031067) heading_pane_cp3_ParamLimits

0x8ca6,	// (0x00031073) listscroll_popup_graphic_pane_ParamLimits

0x5d95,	// (0x0002e162) fep_hwr_aid_pane_ParamLimits

0x6200,	// (0x0002e5cd) aid_touch_sctrl_top_ParamLimits

0x620d,	// (0x0002e5da) sctrl_sk_top_pane_g1_ParamLimits

0xed5a,	// (0x00037127) sctrl_sk_top_pane_g2_ParamLimits

0xfcf9,	// (0x000380c6) sctrl_sk_top_pane_g_ParamLimits

0x621a,	// (0x0002e5e7) sctrl_sk_top_pane_t1_ParamLimits

0x6200,	// (0x0002e5cd) aid_touch_sctrl_bottom_ParamLimits

0x621a,	// (0x0002e5e7) sctrl_sk_bottom_pane_t1_ParamLimits

0x161b,	// (0x000299e8) aid_area_touch_clock

0xb6eb,	// (0x00033ab8) aid_vkb2_area_top_pane_cell_ParamLimits

0xb6eb,	// (0x00033ab8) aid_vkb2_area_top_pane_cell

0xb796,	// (0x00033b63) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb796,	// (0x00033b63) aid_vkb2_area_bottom_pane_cell

0x2d3d,	// (0x0002b10a) popup_char_count_window

0x2e8e,	// (0x0002b25b) popup_char_count_window_g1

0x2e97,	// (0x0002b264) popup_char_count_window_g2

0x2ea0,	// (0x0002b26d) popup_char_count_window_g3

0x0002,

0xfdca,	// (0x00038197) popup_char_count_window_g

0x2ea9,	// (0x0002b276) popup_char_count_window_t1

0x62c0,	// (0x0002e68d) popup_fep_char_preview_window_ParamLimits

0x62c0,	// (0x0002e68d) popup_fep_char_preview_window

0xb70b,	// (0x00033ad8) vkb2_top_candi_pane_ParamLimits

0xb70b,	// (0x00033ad8) vkb2_top_candi_pane

0xbbca,	// (0x00033f97) cell_vkb2_top_candi_pane_ParamLimits

0xbbca,	// (0x00033f97) cell_vkb2_top_candi_pane

0xd246,	// (0x00035613) bg_popup_fep_char_preview_window_ParamLimits

0xd246,	// (0x00035613) bg_popup_fep_char_preview_window

0x6ac2,	// (0x0002ee8f) popup_fep_char_preview_window_t1_ParamLimits

0x6ac2,	// (0x0002ee8f) popup_fep_char_preview_window_t1

0x2ec7,	// (0x0002b294) bg_popup_fep_char_preview_window_g1

0x2ebf,	// (0x0002b28c) bg_popup_fep_char_preview_window_g2

0x2eb7,	// (0x0002b284) bg_popup_fep_char_preview_window_g3

0x2ee7,	// (0x0002b2b4) bg_popup_fep_char_preview_window_g4

0x2edf,	// (0x0002b2ac) bg_popup_fep_char_preview_window_g5

0x6afc,	// (0x0002eec9) bg_popup_fep_char_preview_window_g6

0x2ed7,	// (0x0002b2a4) bg_popup_fep_char_preview_window_g7

0x2ecf,	// (0x0002b29c) bg_popup_fep_char_preview_window_g8

0x2eef,	// (0x0002b2bc) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd1,	// (0x0003819e) bg_popup_fep_char_preview_window_g

0xed5a,	// (0x00037127) cell_vkb2_top_candi_pane_g1_ParamLimits

0xed5a,	// (0x00037127) cell_vkb2_top_candi_pane_g1

0xef89,	// (0x00037356) cell_vkb2_top_candi_pane_g2_ParamLimits

0xef89,	// (0x00037356) cell_vkb2_top_candi_pane_g2

0xefaa,	// (0x00037377) cell_vkb2_top_candi_pane_g3_ParamLimits

0xefaa,	// (0x00037377) cell_vkb2_top_candi_pane_g3

0x6b04,	// (0x0002eed1) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6b04,	// (0x0002eed1) cell_vkb2_top_candi_pane_g4

0x29c2,	// (0x0002ad8f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x29c2,	// (0x0002ad8f) cell_vkb2_top_candi_pane_g5

0x14b9,	// (0x00029886) cell_vkb2_top_candi_pane_g6_ParamLimits

0x14b9,	// (0x00029886) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde4,	// (0x000381b1) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde4,	// (0x000381b1) cell_vkb2_top_candi_pane_g

0x6b25,	// (0x0002eef2) cell_vkb2_top_candi_pane_t1

0xf1e2,	// (0x000375af) aid_size_touch_slider_mark_ParamLimits

0xf1e2,	// (0x000375af) aid_size_touch_slider_mark

0xb968,	// (0x00033d35) grid_graphic2_catg_pane_ParamLimits

0xb968,	// (0x00033d35) grid_graphic2_catg_pane

0xb9df,	// (0x00033dac) popup_grid_graphic2_window_t1_ParamLimits

0xb9df,	// (0x00033dac) popup_grid_graphic2_window_t1

0xb9f4,	// (0x00033dc1) popup_grid_graphic2_window_t2_ParamLimits

0xb9f4,	// (0x00033dc1) popup_grid_graphic2_window_t2

0x0001,

0xfd9f,	// (0x0003816c) popup_grid_graphic2_window_t_ParamLimits

0xfd9f,	// (0x0003816c) popup_grid_graphic2_window_t

0x9046,	// (0x00031413) bg_button_pane_cp05_ParamLimits

0xbb49,	// (0x00033f16) cell_graphic2_control_pane_g1_ParamLimits

0x1697,	// (0x00029a64) cell_graphic2_catg_pane_ParamLimits

0x1697,	// (0x00029a64) cell_graphic2_catg_pane

0x840a,	// (0x000307d7) bg_button_pane_cp12

0xbc14,	// (0x00033fe1) cell_graphic2_catg_pane_g1

0x15e7,	// (0x000299b4) cell_tb_ext_pane_t1_ParamLimits

0x6648,	// (0x0002ea15) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6648,	// (0x0002ea15) vkb2_top_cell_right_narrow_pane

0x6660,	// (0x0002ea2d) vkb2_top_cell_right_wide_pane_ParamLimits

0x6660,	// (0x0002ea2d) vkb2_top_cell_right_wide_pane

0xf1d4,	// (0x000375a1) bg_vkb2_func_pane_ParamLimits

0xf1d4,	// (0x000375a1) bg_vkb2_func_pane

0x66d1,	// (0x0002ea9e) vkb2_top_cell_left_pane_g1_ParamLimits

0xf1d4,	// (0x000375a1) bg_vkb2_fuc_pane_cp03_ParamLimits

0xf1d4,	// (0x000375a1) bg_vkb2_fuc_pane_cp03

0x672f,	// (0x0002eafc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xccab,	// (0x00035078) bg_vkb2_func_pane_g1

0xccb3,	// (0x00035080) bg_vkb2_func_pane_g2

0xccc3,	// (0x00035090) bg_vkb2_func_pane_g3

0xccbb,	// (0x00035088) bg_vkb2_func_pane_g4

0xcccb,	// (0x00035098) bg_vkb2_func_pane_g5

0xccd3,	// (0x000350a0) bg_vkb2_func_pane_g6

0xccdb,	// (0x000350a8) bg_vkb2_func_pane_g7

0xcce3,	// (0x000350b0) bg_vkb2_func_pane_g8

0xcca3,	// (0x00035070) bg_vkb2_func_pane_g9

0x0008,

0xfdf1,	// (0x000381be) bg_vkb2_func_pane_g

0xf1d4,	// (0x000375a1) bg_vkb2_fuc_pane_cp01_ParamLimits

0xf1d4,	// (0x000375a1) bg_vkb2_fuc_pane_cp01

0x66d1,	// (0x0002ea9e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x66d1,	// (0x0002ea9e) vkb2_top_cell_right_wide_pane_g1

0xf1d4,	// (0x000375a1) bg_vkb2_fuc_pane_cp02_ParamLimits

0xf1d4,	// (0x000375a1) bg_vkb2_fuc_pane_cp02

0x672f,	// (0x0002eafc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x672f,	// (0x0002eafc) vkb2_top_cell_right_narrow_pane_g1

0xaec8,	// (0x00033295) aid_touch_area_decrease_ParamLimits

0xaec8,	// (0x00033295) aid_touch_area_decrease

0xaef6,	// (0x000332c3) aid_touch_area_increase_ParamLimits

0xaef6,	// (0x000332c3) aid_touch_area_increase

0xaf1e,	// (0x000332eb) aid_touch_area_mute_ParamLimits

0xaf1e,	// (0x000332eb) aid_touch_area_mute

0xaf46,	// (0x00033313) aid_touch_area_slider_ParamLimits

0xaf46,	// (0x00033313) aid_touch_area_slider

0xaf86,	// (0x00033353) popup_slider_window_g4_ParamLimits

0xaf86,	// (0x00033353) popup_slider_window_g4

0xafae,	// (0x0003337b) popup_slider_window_g5_ParamLimits

0xafae,	// (0x0003337b) popup_slider_window_g5

0xafe2,	// (0x000333af) popup_slider_window_g6_ParamLimits

0xafe2,	// (0x000333af) popup_slider_window_g6

0x13d2,	// (0x0002979f) popup_slider_window_t2_ParamLimits

0x13d2,	// (0x0002979f) popup_slider_window_t2

0x0001,

0xfced,	// (0x000380ba) popup_slider_window_t_ParamLimits

0xfced,	// (0x000380ba) popup_slider_window_t

0xaffe,	// (0x000333cb) slider_pane_ParamLimits

0xaffe,	// (0x000333cb) slider_pane

0x2ef7,	// (0x0002b2c4) slider_pane_g1_ParamLimits

0x2ef7,	// (0x0002b2c4) slider_pane_g1

0x2f0b,	// (0x0002b2d8) slider_pane_g2_ParamLimits

0x2f0b,	// (0x0002b2d8) slider_pane_g2

0x2f7b,	// (0x0002b348) slider_pane_g3_ParamLimits

0x2f7b,	// (0x0002b348) slider_pane_g3

0x0003,

0xfe04,	// (0x000381d1) slider_pane_g_ParamLimits

0xfe04,	// (0x000381d1) slider_pane_g

0x9cef,	// (0x000320bc) popup_tb_float_extension_window_ParamLimits

0x9cef,	// (0x000320bc) popup_tb_float_extension_window

0x2fa7,	// (0x0002b374) aid_size_cell_tb_float_ext

0x840a,	// (0x000307d7) bg_popup_sub_window_cp28

0x2fb2,	// (0x0002b37f) grid_tb_float_ext_pane

0x2fba,	// (0x0002b387) cell_tb_float_ext_pane_ParamLimits

0x2fba,	// (0x0002b387) cell_tb_float_ext_pane

0x2fd2,	// (0x0002b39f) cell_tb_float_ext_pane_g1

0x2fdb,	// (0x0002b3a8) grid_highlight_pane_cp12

0xa9ff,	// (0x00032dcc) cell_last_hwr_side_pane_ParamLimits

0xa9ff,	// (0x00032dcc) cell_last_hwr_side_pane

0xeb2c,	// (0x00036ef9) cell_last_hwr_side_pane_g1

0x2fe4,	// (0x0002b3b1) cell_last_hwr_side_pane_g2

0x0001,

0xfe0d,	// (0x000381da) cell_last_hwr_side_pane_g

0xb86a,	// (0x00033c37) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb86a,	// (0x00033c37) vkb2_area_bottom_space_btn_pane

0xed5a,	// (0x00037127) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x2dd0,	// (0x0002b19d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6b25,	// (0x0002eef2) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6b56,	// (0x0002ef23) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6b56,	// (0x0002ef23) vkb2_area_bottom_space_btn_pane_g1

0x6b8c,	// (0x0002ef59) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6b8c,	// (0x0002ef59) vkb2_area_bottom_space_btn_pane_g2

0x6bc2,	// (0x0002ef8f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6bc2,	// (0x0002ef8f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe12,	// (0x000381df) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe12,	// (0x000381df) vkb2_area_bottom_space_btn_pane_g

0x5e36,	// (0x0002e203) cel_fep_hwr_func_pane_ParamLimits

0x5e36,	// (0x0002e203) cel_fep_hwr_func_pane

0xa9d4,	// (0x00032da1) cell_hwr_side_button_pane_ParamLimits

0xa9d4,	// (0x00032da1) cell_hwr_side_button_pane

0x161b,	// (0x000299e8) aid_area_touch_clock_ParamLimits

0x8ac2,	// (0x00030e8f) bg_uniindi_top_pane_ParamLimits

0x162d,	// (0x000299fa) uniindi_top_pane_g1_ParamLimits

0x1643,	// (0x00029a10) uniindi_top_pane_g2_ParamLimits

0x164f,	// (0x00029a1c) uniindi_top_pane_g3_ParamLimits

0x1660,	// (0x00029a2d) uniindi_top_pane_g4_ParamLimits

0xfd25,	// (0x000380f2) uniindi_top_pane_g_ParamLimits

0x166d,	// (0x00029a3a) uniindi_top_pane_t1_ParamLimits

0x8ac2,	// (0x00030e8f) bg_vkb2_func_pane_cp01_ParamLimits

0x8ac2,	// (0x00030e8f) bg_vkb2_func_pane_cp01

0x2fed,	// (0x0002b3ba) cel_fep_hwr_func_pane_g1_ParamLimits

0x2fed,	// (0x0002b3ba) cel_fep_hwr_func_pane_g1

0x8ac2,	// (0x00030e8f) bg_vkb2_func_pane_cp02_ParamLimits

0x8ac2,	// (0x00030e8f) bg_vkb2_func_pane_cp02

0x2fed,	// (0x0002b3ba) cell_hwr_side_button_pane_g1_ParamLimits

0x2fed,	// (0x0002b3ba) cell_hwr_side_button_pane_g1

0xcbc7,	// (0x00034f94) status_pane_g4_ParamLimits

0xcbc7,	// (0x00034f94) status_pane_g4

0xcbdf,	// (0x00034fac) status_pane_t1

0xe9ba,	// (0x00036d87) form2_midp_gauge_slider_cont_pane

0xe9c2,	// (0x00036d8f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa928,	// (0x00032cf5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa93a,	// (0x00032d07) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x00037ec5) form2_midp_gauge_slider_pane_t_ParamLimits

0xe9d4,	// (0x00036da1) form2_midp_slider_pane_ParamLimits

0x6280,	// (0x0002e64d) aid_size_cell_func_vkb2_ParamLimits

0x6280,	// (0x0002e64d) aid_size_cell_func_vkb2

0x2f93,	// (0x0002b360) slider_pane_g4_ParamLimits

0x2f93,	// (0x0002b360) slider_pane_g4

0xbc1d,	// (0x00033fea) form2_midp_gauge_slider_pane_t2_cp01

0xbc2b,	// (0x00033ff8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbc2b,	// (0x00033ff8) form2_midp_gauge_slider_pane_t3_cp01

0x6c33,	// (0x0002f000) form2_midp_slider_pane_cp01

0x840a,	// (0x000307d7) navi_smil_pane

0x301d,	// (0x0002b3ea) navi_smil_pane_g1

0x3025,	// (0x0002b3f2) navi_smil_pane_t1

0x2ffb,	// (0x0002b3c8) form2_midp_slider_pane_g1

0x3004,	// (0x0002b3d1) form2_midp_slider_pane_g2

0x300c,	// (0x0002b3d9) form2_midp_slider_pane_g3

0x2ffb,	// (0x0002b3c8) form2_midp_slider_pane_g4

0xbc48,	// (0x00034015) form2_midp_slider_pane_g5

0x0004,

0xfe1b,	// (0x000381e8) form2_midp_slider_pane_g

0x6bf8,	// (0x0002efc5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6bf8,	// (0x0002efc5) vkb2_area_bottom_space_btn_pane_g4

0x9e91,	// (0x0003225e) lc0_navi_pane_ParamLimits

0x9e91,	// (0x0003225e) lc0_navi_pane

0x9efb,	// (0x000322c8) lc0_stat_indi_pane_ParamLimits

0x9efb,	// (0x000322c8) lc0_stat_indi_pane

0x9f10,	// (0x000322dd) ls0_title_pane_ParamLimits

0x9f10,	// (0x000322dd) ls0_title_pane

0x9046,	// (0x00031413) bg_popup_sub_pane_cp14_ParamLimits

0x1602,	// (0x000299cf) list_uniindi_pane_ParamLimits

0x160e,	// (0x000299db) uniindi_top_pane_ParamLimits

0x16a9,	// (0x00029a76) list_single_uniindi_pane_g1_ParamLimits

0x16bc,	// (0x00029a89) list_single_uniindi_pane_t1_ParamLimits

0xbc51,	// (0x0003401e) lc0_stat_clock_pane_ParamLimits

0xbc51,	// (0x0003401e) lc0_stat_clock_pane

0xbc5e,	// (0x0003402b) lc0_stat_indi_pane_g1_ParamLimits

0xbc5e,	// (0x0003402b) lc0_stat_indi_pane_g1

0xbc6b,	// (0x00034038) lc0_stat_indi_pane_g2_ParamLimits

0xbc6b,	// (0x00034038) lc0_stat_indi_pane_g2

0x0001,

0xfe26,	// (0x000381f3) lc0_stat_indi_pane_g_ParamLimits

0xfe26,	// (0x000381f3) lc0_stat_indi_pane_g

0xbc78,	// (0x00034045) lc0_uni_indicator_pane_ParamLimits

0xbc78,	// (0x00034045) lc0_uni_indicator_pane

0x3033,	// (0x0002b400) ls0_title_pane_g1_ParamLimits

0x3033,	// (0x0002b400) ls0_title_pane_g1

0xbc85,	// (0x00034052) ls0_title_pane_t1_ParamLimits

0xbc85,	// (0x00034052) ls0_title_pane_t1

0xbcb3,	// (0x00034080) lc0_uni_indicator_pane_g1_ParamLimits

0xbcb3,	// (0x00034080) lc0_uni_indicator_pane_g1

0x3047,	// (0x0002b414) lc0_stat_clock_pane_t1

0x840a,	// (0x000307d7) main_ai5_pane

0x3055,	// (0x0002b422) ai5_sk_pane_ParamLimits

0x3055,	// (0x0002b422) ai5_sk_pane

0xbcc8,	// (0x00034095) cell_ai5_widget_pane_ParamLimits

0xbcc8,	// (0x00034095) cell_ai5_widget_pane

0x3062,	// (0x0002b42f) aid_size_cell_widget_grid

0x3074,	// (0x0002b441) bg_ai5_widget_pane_ParamLimits

0x3074,	// (0x0002b441) bg_ai5_widget_pane

0xbd49,	// (0x00034116) cell_ai5_widget_pane_g2

0xbd59,	// (0x00034126) cell_ai5_widget_pane_g3

0xbd78,	// (0x00034145) cell_ai5_widget_pane_g4

0xbd84,	// (0x00034151) cell_ai5_widget_pane_g5

0xbd90,	// (0x0003415d) cell_ai5_widget_pane_g6

0xbd9c,	// (0x00034169) cell_ai5_widget_pane_g7

0xbde4,	// (0x000341b1) cell_ai5_widget_pane_t1_ParamLimits

0xbde4,	// (0x000341b1) cell_ai5_widget_pane_t1

0xbe01,	// (0x000341ce) cell_ai5_widget_pane_t2_ParamLimits

0xbe01,	// (0x000341ce) cell_ai5_widget_pane_t2

0xbe19,	// (0x000341e6) cell_ai5_widget_pane_t3_ParamLimits

0xbe19,	// (0x000341e6) cell_ai5_widget_pane_t3

0xbe31,	// (0x000341fe) cell_ai5_widget_pane_t4_ParamLimits

0xbe31,	// (0x000341fe) cell_ai5_widget_pane_t4

0xbe4b,	// (0x00034218) cell_ai5_widget_pane_t5_ParamLimits

0xbe4b,	// (0x00034218) cell_ai5_widget_pane_t5

0x3080,	// (0x0002b44d) cell_ai5_widget_pane_t6_ParamLimits

0x3080,	// (0x0002b44d) cell_ai5_widget_pane_t6

0x3092,	// (0x0002b45f) cell_ai5_widget_pane_t7_ParamLimits

0x3092,	// (0x0002b45f) cell_ai5_widget_pane_t7

0xbe6a,	// (0x00034237) cell_ai5_widget_pane_t8_ParamLimits

0xbe6a,	// (0x00034237) cell_ai5_widget_pane_t8

0x0009,

0xfe40,	// (0x0003820d) cell_ai5_widget_pane_t_ParamLimits

0xfe40,	// (0x0003820d) cell_ai5_widget_pane_t

0xbeb5,	// (0x00034282) grid_ai5_widget_pane

0x9046,	// (0x00031413) highlight_cell_ai5_widget_pane_ParamLimits

0x9046,	// (0x00031413) highlight_cell_ai5_widget_pane

0xbec9,	// (0x00034296) ai5_sk_left_pane

0xbed3,	// (0x000342a0) ai5_sk_middle_pane

0xbedd,	// (0x000342aa) ai5_sk_right_pane

0x30ab,	// (0x0002b478) bg_ai5_widget_pane_g1_ParamLimits

0x30ab,	// (0x0002b478) bg_ai5_widget_pane_g1

0x30b7,	// (0x0002b484) bg_ai5_widget_pane_g2_ParamLimits

0x30b7,	// (0x0002b484) bg_ai5_widget_pane_g2

0x30c3,	// (0x0002b490) bg_ai5_widget_pane_g3_ParamLimits

0x30c3,	// (0x0002b490) bg_ai5_widget_pane_g3

0x30cf,	// (0x0002b49c) bg_ai5_widget_pane_g4_ParamLimits

0x30cf,	// (0x0002b49c) bg_ai5_widget_pane_g4

0x30db,	// (0x0002b4a8) bg_ai5_widget_pane_g5_ParamLimits

0x30db,	// (0x0002b4a8) bg_ai5_widget_pane_g5

0x30e7,	// (0x0002b4b4) bg_ai5_widget_pane_g6_ParamLimits

0x30e7,	// (0x0002b4b4) bg_ai5_widget_pane_g6

0x30f3,	// (0x0002b4c0) bg_ai5_widget_pane_g7_ParamLimits

0x30f3,	// (0x0002b4c0) bg_ai5_widget_pane_g7

0x30ff,	// (0x0002b4cc) bg_ai5_widget_pane_g8_ParamLimits

0x30ff,	// (0x0002b4cc) bg_ai5_widget_pane_g8

0x310b,	// (0x0002b4d8) bg_ai5_widget_pane_g9_ParamLimits

0x310b,	// (0x0002b4d8) bg_ai5_widget_pane_g9

0x0008,

0xfe55,	// (0x00038222) bg_ai5_widget_pane_g_ParamLimits

0xfe55,	// (0x00038222) bg_ai5_widget_pane_g

0x313d,	// (0x0002b50a) cell_shortcut_ai5_widget_pane_ParamLimits

0x313d,	// (0x0002b50a) cell_shortcut_ai5_widget_pane

0x88d4,	// (0x00030ca1) bg_cell_shortcut_ai5_widget_pane

0x3149,	// (0x0002b516) cell_grid_ai5_widget_pane_g1

0x3152,	// (0x0002b51f) highlight_cell_shortcut_ai5_widget_pane

0xccb3,	// (0x00035080) ai5_sk_left_pane_g1

0x315a,	// (0x0002b527) ai5_sk_left_pane_g2

0x3162,	// (0x0002b52f) ai5_sk_left_pane_g3

0x316a,	// (0x0002b537) ai5_sk_left_pane_g4

0x0003,

0xfe68,	// (0x00038235) ai5_sk_left_pane_g

0x3172,	// (0x0002b53f) ai5_sk_left_pane_t1

0xccab,	// (0x00035078) ai5_sk_right_pane_g1

0x3180,	// (0x0002b54d) ai5_sk_right_pane_g2

0x3188,	// (0x0002b555) ai5_sk_right_pane_g3

0x3190,	// (0x0002b55d) ai5_sk_right_pane_g4

0x0003,

0xfe71,	// (0x0003823e) ai5_sk_right_pane_g

0x3198,	// (0x0002b565) ai5_sk_right_pane_t1

0xccab,	// (0x00035078) ai5_sk_middle_pane_g1

0xccb3,	// (0x00035080) ai5_sk_middle_pane_g2

0xcccb,	// (0x00035098) ai5_sk_middle_pane_g3

0x3188,	// (0x0002b555) ai5_sk_middle_pane_g4

0x3162,	// (0x0002b52f) ai5_sk_middle_pane_g5

0x31a6,	// (0x0002b573) ai5_sk_middle_pane_g6

0xbee7,	// (0x000342b4) ai5_sk_middle_pane_g7

0x0006,

0xfe7a,	// (0x00038247) ai5_sk_middle_pane_g

0x9d8f,	// (0x0003215c) aid_touch_area_size_lc0_ParamLimits

0x9d8f,	// (0x0003215c) aid_touch_area_size_lc0

0x5fb5,	// (0x0002e382) cell_hwr_candidate_pane_t1_ParamLimits

0xcafc,	// (0x00034ec9) aid_touch_navi_pane

0x9ffc,	// (0x000323c9) status_dt_navi_pane_ParamLimits

0x9ffc,	// (0x000323c9) status_dt_navi_pane

0xa014,	// (0x000323e1) status_dt_sta_pane_ParamLimits

0xa014,	// (0x000323e1) status_dt_sta_pane

0xbeef,	// (0x000342bc) dt_sta_controll_pane

0xbefc,	// (0x000342c9) dt_sta_indi_pane

0xbf09,	// (0x000342d6) dt_sta_title_pane

0x8ac2,	// (0x00030e8f) bg_dt_sta_indi_pane_ParamLimits

0x8ac2,	// (0x00030e8f) bg_dt_sta_indi_pane

0xbf1b,	// (0x000342e8) dt_sta_battery_pane

0xbf23,	// (0x000342f0) dt_sta_indi_pane_g1

0xbf2c,	// (0x000342f9) dt_sta_indi_pane_g2

0xbf35,	// (0x00034302) dt_sta_indi_pane_g3

0x0002,

0xfe89,	// (0x00038256) dt_sta_indi_pane_g

0xbf3e,	// (0x0003430b) dt_sta_signal_pane

0x9046,	// (0x00031413) bg_dt_sta_title_pane_ParamLimits

0x9046,	// (0x00031413) bg_dt_sta_title_pane

0xbf47,	// (0x00034314) dt_sta_title_pane_g1

0xbf4f,	// (0x0003431c) dt_sta_title_pane_t1_ParamLimits

0xbf4f,	// (0x0003431c) dt_sta_title_pane_t1

0x840a,	// (0x000307d7) bg_dt_sta_control_pane

0xbf64,	// (0x00034331) dt_sta_controll_pane_g1

0xbf6d,	// (0x0003433a) bg_dt_sta_title_pane_g1

0xbf76,	// (0x00034343) bg_dt_sta_title_pane_g2

0xbf7f,	// (0x0003434c) bg_dt_sta_title_pane_g3

0x0002,

0xfe90,	// (0x0003825d) bg_dt_sta_title_pane_g

0xeb2c,	// (0x00036ef9) bg_dt_sta_indi_pane_g1

0xbf88,	// (0x00034355) dt_sta_signal_pane_g1

0xbf90,	// (0x0003435d) dt_sta_signal_pane_g2

0x0001,

0xfe97,	// (0x00038264) dt_sta_signal_pane_g

0x31ae,	// (0x0002b57b) dt_sta_battery_pane_g1

0x31b7,	// (0x0002b584) dt_sta_battery_pane_t1

0xeb2c,	// (0x00036ef9) bg_dt_sta_control_pane_g1

0xc365,	// (0x00034732) fep_china_uni_eep_pane

0xc36d,	// (0x0003473a) fep_china_uni_entry_pane_ParamLimits

0xc37d,	// (0x0003474a) popup_fep_china_uni_window_g1_ParamLimits

0xc38d,	// (0x0003475a) popup_fep_china_uni_window_g2_ParamLimits

0xc38d,	// (0x0003475a) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00037b07) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00037b07) popup_fep_china_uni_window_g

0x31c6,	// (0x0002b593) fep_china_uni_eep_pane_g1

0x31ce,	// (0x0002b59b) fep_china_uni_eep_pane_t1

0x3014,	// (0x0002b3e1) aid_touch_area_size_smil_player

0xcb9a,	// (0x00034f67) lc0_clock_pane

0xcbd3,	// (0x00034fa0) status_pane_g5_ParamLimits

0xcbd3,	// (0x00034fa0) status_pane_g5

0x9923,	// (0x00031cf0) popup_keymap_window

0xcbb3,	// (0x00034f80) status_icon_pane

0xbd59,	// (0x00034126) cell_ai5_widget_pane_g3_ParamLimits

0xbd78,	// (0x00034145) cell_ai5_widget_pane_g4_ParamLimits

0xbd84,	// (0x00034151) cell_ai5_widget_pane_g5_ParamLimits

0xbda8,	// (0x00034175) cell_ai5_widget_pane_g8_ParamLimits

0xbda8,	// (0x00034175) cell_ai5_widget_pane_g8

0xbdbc,	// (0x00034189) cell_ai5_widget_pane_g9_ParamLimits

0xbdbc,	// (0x00034189) cell_ai5_widget_pane_g9

0xbdd0,	// (0x0003419d) cell_ai5_widget_pane_g10_ParamLimits

0xbdd0,	// (0x0003419d) cell_ai5_widget_pane_g10

0x31dd,	// (0x0002b5aa) status_icon_pane_g1

0x840a,	// (0x000307d7) bg_popup_sub_pane_cp13

0x31e5,	// (0x0002b5b2) popup_keymap_window_t1

0x9677,	// (0x00031a44) control_pane_g6_ParamLimits

0x9677,	// (0x00031a44) control_pane_g6

0x9684,	// (0x00031a51) control_pane_g7_ParamLimits

0x9684,	// (0x00031a51) control_pane_g7

0x9691,	// (0x00031a5e) control_pane_g8_ParamLimits

0x9691,	// (0x00031a5e) control_pane_g8

0xbeef,	// (0x000342bc) dt_sta_controll_pane_ParamLimits

0xbefc,	// (0x000342c9) dt_sta_indi_pane_ParamLimits

0xbf09,	// (0x000342d6) dt_sta_title_pane_ParamLimits

0x8f21,	// (0x000312ee) aid_size_touch_scroll_bar_cale

0x5135,	// (0x0002d502) popup_discreet_window_ParamLimits

0x5135,	// (0x0002d502) popup_discreet_window

0x859d,	// (0x0003096a) popup_sk_window

0xd246,	// (0x00035613) bg_popup_sub_pane_cp28_ParamLimits

0xd246,	// (0x00035613) bg_popup_sub_pane_cp28

0x31f3,	// (0x0002b5c0) popup_discreet_window_g1_ParamLimits

0x31f3,	// (0x0002b5c0) popup_discreet_window_g1

0x3213,	// (0x0002b5e0) popup_discreet_window_t1_ParamLimits

0x3213,	// (0x0002b5e0) popup_discreet_window_t1

0x3231,	// (0x0002b5fe) popup_discreet_window_t2_ParamLimits

0x3231,	// (0x0002b5fe) popup_discreet_window_t2

0x0002,

0xfe9c,	// (0x00038269) popup_discreet_window_t_ParamLimits

0xfe9c,	// (0x00038269) popup_discreet_window_t

0x6f8a,	// (0x0002f357) popup_sk_window_g1

0x6f93,	// (0x0002f360) popup_sk_window_g2

0x0001,

0xfea3,	// (0x00038270) popup_sk_window_g

0x3291,	// (0x0002b65e) popup_sk_window_t1

0x3283,	// (0x0002b650) popup_sk_window_t1_copy1

0xbd49,	// (0x00034116) cell_ai5_widget_pane_g2_ParamLimits

0xbe7c,	// (0x00034249) cell_ai5_widget_pane_t9_ParamLimits

0xbe7c,	// (0x00034249) cell_ai5_widget_pane_t9

0x840a,	// (0x000307d7) main_fep_fshwr2_pane

0xbf98,	// (0x00034365) aid_fshwr2_btn_pane

0xbfa0,	// (0x0003436d) aid_fshwr2_syb_pane

0xbfa8,	// (0x00034375) aid_fshwr2_txt_pane

0xbfb0,	// (0x0003437d) fshwr2_func_candi_pane

0xbfb8,	// (0x00034385) fshwr2_hwr_syb_pane

0xbfc0,	// (0x0003438d) fshwr2_icf_pane

0x840a,	// (0x000307d7) fshwr2_icf_bg_pane

0xbfc8,	// (0x00034395) fshwr2_icf_pane_t1_ParamLimits

0xbfc8,	// (0x00034395) fshwr2_icf_pane_t1

0xeb2c,	// (0x00036ef9) fshwr2_func_candi_pane_g1

0x32b1,	// (0x0002b67e) fshwr2_func_candi_row_pane_ParamLimits

0x32b1,	// (0x0002b67e) fshwr2_func_candi_row_pane

0xbfe0,	// (0x000343ad) cell_fshwr2_syb_pane_ParamLimits

0xbfe0,	// (0x000343ad) cell_fshwr2_syb_pane

0xed5a,	// (0x00037127) fshwr2_hwr_syb_pane_g1_ParamLimits

0xed5a,	// (0x00037127) fshwr2_hwr_syb_pane_g1

0x840a,	// (0x000307d7) bg_popup_call_pane_cp01

0x32c2,	// (0x0002b68f) fshwr2_func_candi_cell_pane_ParamLimits

0x32c2,	// (0x0002b68f) fshwr2_func_candi_cell_pane

0x32ed,	// (0x0002b6ba) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x32ed,	// (0x0002b6ba) fshwr2_func_candi_cell_bg_pane

0x3307,	// (0x0002b6d4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x3307,	// (0x0002b6d4) fshwr2_func_candi_cell_pane_g1

0x3327,	// (0x0002b6f4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x3327,	// (0x0002b6f4) fshwr2_func_candi_cell_pane_t1

0x840a,	// (0x000307d7) bg_button_pane_cp08

0xc795,	// (0x00034b62) cell_fshwr2_syb_bg_pane

0xbff7,	// (0x000343c4) cell_fshwr2_syb_bg_pane_g1

0xbfff,	// (0x000343cc) cell_fshwr2_syb_bg_pane_t1

0x9046,	// (0x00031413) main_tmo_pane

0xa466,	// (0x00032833) uni_indicator_pane_g1_ParamLimits

0xa47b,	// (0x00032848) uni_indicator_pane_g2_ParamLimits

0xa491,	// (0x0003285e) uni_indicator_pane_g3_ParamLimits

0xddb7,	// (0x00036184) uni_indicator_pane_g4_ParamLimits

0xddb7,	// (0x00036184) uni_indicator_pane_g4

0xddcb,	// (0x00036198) uni_indicator_pane_g5_ParamLimits

0xddcb,	// (0x00036198) uni_indicator_pane_g5

0xdddf,	// (0x000361ac) uni_indicator_pane_g6_ParamLimits

0xdddf,	// (0x000361ac) uni_indicator_pane_g6

0xf92b,	// (0x00037cf8) uni_indicator_pane_g_ParamLimits

0xaeac,	// (0x00033279) popup_tmo_note_window_ParamLimits

0xaeac,	// (0x00033279) popup_tmo_note_window

0x840a,	// (0x000307d7) fshwr2_bg_pane

0x3318,	// (0x0002b6e5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x3318,	// (0x0002b6e5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea8,	// (0x00038275) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea8,	// (0x00038275) fshwr2_func_candi_cell_pane_g

0xeb2c,	// (0x00036ef9) bg_popup_window_pane_cp01

0x333a,	// (0x0002b707) bg_popup_window_pane_g1_cp01

0x3343,	// (0x0002b710) bg_popup_window_pane_cp22_ParamLimits

0x3343,	// (0x0002b710) bg_popup_window_pane_cp22

0x3351,	// (0x0002b71e) listscroll_tmo_link_pane_ParamLimits

0x3351,	// (0x0002b71e) listscroll_tmo_link_pane

0x3391,	// (0x0002b75e) popup_tmo_note_window_g1_ParamLimits

0x3391,	// (0x0002b75e) popup_tmo_note_window_g1

0x339e,	// (0x0002b76b) tmo_note_info_pane_ParamLimits

0x339e,	// (0x0002b76b) tmo_note_info_pane

0xc00e,	// (0x000343db) list_tmo_note_info_pane_g1_ParamLimits

0xc00e,	// (0x000343db) list_tmo_note_info_pane_g1

0x33b8,	// (0x0002b785) list_tmo_note_info_pane_g2_ParamLimits

0x33b8,	// (0x0002b785) list_tmo_note_info_pane_g2

0x0001,

0xfead,	// (0x0003827a) list_tmo_note_info_pane_g_ParamLimits

0xfead,	// (0x0003827a) list_tmo_note_info_pane_g

0x33d4,	// (0x0002b7a1) list_tmo_note_info_text_pane_ParamLimits

0x33d4,	// (0x0002b7a1) list_tmo_note_info_text_pane

0x3416,	// (0x0002b7e3) list_tmo_link_pane

0x3423,	// (0x0002b7f0) scroll_pane_cp20

0x3430,	// (0x0002b7fd) list_single_tmo_link_pane_ParamLimits

0x3430,	// (0x0002b7fd) list_single_tmo_link_pane

0x3440,	// (0x0002b80d) list_single_tmo_link_pane_t1

0x344e,	// (0x0002b81b) list_tmo_note_info_text_pane_t1_ParamLimits

0x344e,	// (0x0002b81b) list_tmo_note_info_text_pane_t1

0x9100,	// (0x000314cd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9100,	// (0x000314cd) aid_size_touch_scroll_bar_cp01

0x8072,	// (0x0003043f) aid_size_touch_slider_marker

0x8591,	// (0x0003095e) popup_settings_window_ParamLimits

0x8591,	// (0x0003095e) popup_settings_window

0x4a2b,	// (0x0002cdf8) popup_candi_list_indi_window

0xcafc,	// (0x00034ec9) aid_touch_navi_pane_ParamLimits

0x61d4,	// (0x0002e5a1) rs_clock_indi_pane

0x61dd,	// (0x0002e5aa) sctrl_sk_bottom_pane_ParamLimits

0x61ee,	// (0x0002e5bb) sctrl_sk_top_pane_ParamLimits

0x62da,	// (0x0002e6a7) popup_fep_tooltip_window

0x3062,	// (0x0002b42f) aid_size_cell_widget_grid_ParamLimits

0xbd3d,	// (0x0003410a) cell_ai5_widget_pane_g1_ParamLimits

0xbd3d,	// (0x0003410a) cell_ai5_widget_pane_g1

0xbd90,	// (0x0003415d) cell_ai5_widget_pane_g6_ParamLimits

0xbd9c,	// (0x00034169) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2b,	// (0x000381f8) cell_ai5_widget_pane_g_ParamLimits

0xfe2b,	// (0x000381f8) cell_ai5_widget_pane_g

0xbea0,	// (0x0003426d) cell_ai5_widget_pane_t10_ParamLimits

0xbea0,	// (0x0003426d) cell_ai5_widget_pane_t10

0xbeb5,	// (0x00034282) grid_ai5_widget_pane_ParamLimits

0x3117,	// (0x0002b4e4) cell_contacts_ai5_widget_pane_ParamLimits

0x3117,	// (0x0002b4e4) cell_contacts_ai5_widget_pane

0x3246,	// (0x0002b613) popup_discreet_window_t3_ParamLimits

0x3246,	// (0x0002b613) popup_discreet_window_t3

0x329f,	// (0x0002b66c) popup_fshwr2_char_preview_window_ParamLimits

0x329f,	// (0x0002b66c) popup_fshwr2_char_preview_window

0xc025,	// (0x000343f2) tmo_note_info_pane_t1

0xc03a,	// (0x00034407) tmo_note_info_pane_t2

0xc04f,	// (0x0003441c) tmo_note_info_pane_t3

0x33f2,	// (0x0002b7bf) tmo_note_info_pane_t4

0x3404,	// (0x0002b7d1) tmo_note_info_pane_t5

0x0004,

0xfeb2,	// (0x0003827f) tmo_note_info_pane_t

0x3416,	// (0x0002b7e3) list_tmo_link_pane_ParamLimits

0x3423,	// (0x0002b7f0) scroll_pane_cp20_ParamLimits

0x840a,	// (0x000307d7) bg_popup_fep_char_preview_window_cp01

0x3467,	// (0x0002b834) popup_fshwr2_char_preview_window_t1

0x3475,	// (0x0002b842) popup_candi_list_indi_window_g1

0x347e,	// (0x0002b84b) bg_cell_contacts_ai5_widget_pane

0x348a,	// (0x0002b857) cell_contacts_ai5_widget_pane_g1

0x349e,	// (0x0002b86b) cell_contacts_ai5_widget_pane_g2

0x34ad,	// (0x0002b87a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebd,	// (0x0003828a) cell_contacts_ai5_widget_pane_g

0x34c0,	// (0x0002b88d) cell_contacts_ai5_widget_pane_t1

0x9046,	// (0x00031413) highlight_cell_shortcut_ai5_widget_pane_cp01

0xc0c7,	// (0x00034494) settings_container_pane

0xc795,	// (0x00034b62) listscroll_set_pane_copy1

0xe50a,	// (0x000368d7) scroll_pane_cp121_copy1

0x34d5,	// (0x0002b8a2) set_content_pane_copy1

0x34dd,	// (0x0002b8aa) aid_height_set_list_copy1_ParamLimits

0x34dd,	// (0x0002b8aa) aid_height_set_list_copy1

0xdf78,	// (0x00036345) aid_size_parent_copy1_ParamLimits

0xdf78,	// (0x00036345) aid_size_parent_copy1

0x34e9,	// (0x0002b8b6) button_value_adjust_pane_cp6_copy1_ParamLimits

0x34e9,	// (0x0002b8b6) button_value_adjust_pane_cp6_copy1

0xc0d3,	// (0x000344a0) list_highlight_pane_cp2_copy1_ParamLimits

0xc0d3,	// (0x000344a0) list_highlight_pane_cp2_copy1

0xd818,	// (0x00035be5) list_set_pane_copy1_ParamLimits

0xd818,	// (0x00035be5) list_set_pane_copy1

0xc064,	// (0x00034431) main_pane_set_t1_copy1_ParamLimits

0xc064,	// (0x00034431) main_pane_set_t1_copy1

0xc09e,	// (0x0003446b) main_pane_set_t2_copy1_ParamLimits

0xc09e,	// (0x0003446b) main_pane_set_t2_copy1

0x34fd,	// (0x0002b8ca) main_pane_set_t3_copy1

0x350b,	// (0x0002b8d8) main_pane_set_t4_copy1

0xc0bb,	// (0x00034488) set_content_pane_g1_copy1_ParamLimits

0xc0bb,	// (0x00034488) set_content_pane_g1_copy1

0x3519,	// (0x0002b8e6) setting_code_pane_copy1

0x3521,	// (0x0002b8ee) setting_slider_graphic_pane_copy1

0x3521,	// (0x0002b8ee) setting_slider_pane_copy1

0x3521,	// (0x0002b8ee) setting_text_pane_copy1

0x3521,	// (0x0002b8ee) setting_volume_pane_copy1

0x3529,	// (0x0002b8f6) settings_code_pane_cp2_copy1

0x3531,	// (0x0002b8fe) settings_code_pane_cp_copy1_ParamLimits

0x3531,	// (0x0002b8fe) settings_code_pane_cp_copy1

0xd8a6,	// (0x00035c73) volume_set_pane_copy1

0xd8ae,	// (0x00035c7b) volume_set_pane_g10_copy1

0xd8b6,	// (0x00035c83) volume_set_pane_g1_copy1

0xd8be,	// (0x00035c8b) volume_set_pane_g2_copy1

0xd8c6,	// (0x00035c93) volume_set_pane_g3_copy1

0xd8ce,	// (0x00035c9b) volume_set_pane_g4_copy1

0xd8d6,	// (0x00035ca3) volume_set_pane_g5_copy1

0xd8de,	// (0x00035cab) volume_set_pane_g6_copy1

0xd8e6,	// (0x00035cb3) volume_set_pane_g7_copy1

0xd8ee,	// (0x00035cbb) volume_set_pane_g8_copy1

0xd8f6,	// (0x00035cc3) volume_set_pane_g9_copy1

0x876d,	// (0x00030b3a) bg_set_opt_pane_cp_copy1_ParamLimits

0x876d,	// (0x00030b3a) bg_set_opt_pane_cp_copy1

0x877b,	// (0x00030b48) setting_slider_pane_t1_copy1_ParamLimits

0x877b,	// (0x00030b48) setting_slider_pane_t1_copy1

0x3545,	// (0x0002b912) setting_slider_pane_t2_copy1_ParamLimits

0x3545,	// (0x0002b912) setting_slider_pane_t2_copy1

0x355e,	// (0x0002b92b) setting_slider_pane_t3_copy1_ParamLimits

0x355e,	// (0x0002b92b) setting_slider_pane_t3_copy1

0x87c1,	// (0x00030b8e) slider_set_pane_copy1_ParamLimits

0x87c1,	// (0x00030b8e) slider_set_pane_copy1

0x90a1,	// (0x0003146e) set_opt_bg_pane_g1_copy2

0x90a9,	// (0x00031476) set_opt_bg_pane_g2_copy2

0x3575,	// (0x0002b942) set_opt_bg_pane_g3_copy2

0x90b9,	// (0x00031486) set_opt_bg_pane_g4_copy2

0x90c1,	// (0x0003148e) set_opt_bg_pane_g5_copy2

0x90c9,	// (0x00031496) set_opt_bg_pane_g6_copy2

0xd8fe,	// (0x00035ccb) set_opt_bg_pane_g7_copy2

0x357d,	// (0x0002b94a) set_opt_bg_pane_g8_copy2

0x3585,	// (0x0002b952) set_opt_bg_pane_g9_copy2

0xf1e2,	// (0x000375af) aid_size_touch_slider_mark_copy1_ParamLimits

0xf1e2,	// (0x000375af) aid_size_touch_slider_mark_copy1

0xdf8a,	// (0x00036357) slider_set_pane_g1_copy1

0xdf93,	// (0x00036360) slider_set_pane_g2_copy1

0xf1f6,	// (0x000375c3) slider_set_pane_g3_copy1_ParamLimits

0xf1f6,	// (0x000375c3) slider_set_pane_g3_copy1

0xf20a,	// (0x000375d7) slider_set_pane_g4_copy1_ParamLimits

0xf20a,	// (0x000375d7) slider_set_pane_g4_copy1

0xf222,	// (0x000375ef) slider_set_pane_g5_copy1_ParamLimits

0xf222,	// (0x000375ef) slider_set_pane_g5_copy1

0xf1f6,	// (0x000375c3) slider_set_pane_g6_copy1_ParamLimits

0xf1f6,	// (0x000375c3) slider_set_pane_g6_copy1

0xd906,	// (0x00035cd3) slider_set_pane_g7_copy1_ParamLimits

0xd906,	// (0x00035cd3) slider_set_pane_g7_copy1

0x8561,	// (0x0003092e) bg_set_opt_pane_cp2_copy1

0x87d7,	// (0x00030ba4) setting_slider_graphic_pane_g1_copy1

0xd91c,	// (0x00035ce9) setting_slider_graphic_pane_t1_copy1

0xd92b,	// (0x00035cf8) setting_slider_graphic_pane_t2_copy1

0xd93a,	// (0x00035d07) slider_set_pane_cp_copy1

0x3595,	// (0x0002b962) input_focus_pane_cp1_copy1

0x359e,	// (0x0002b96b) list_set_text_pane_copy1

0x35a6,	// (0x0002b973) setting_text_pane_g1_copy1

0x4fcc,	// (0x0002d399) set_text_pane_t1_copy1

0x3595,	// (0x0002b962) input_focus_pane_cp2_copy1

0x35a6,	// (0x0002b973) setting_code_pane_g1_copy1

0x35af,	// (0x0002b97c) setting_code_pane_t1_copy1

0x9586,	// (0x00031953) list_set_graphic_pane_copy1

0x8561,	// (0x0003092e) bg_set_opt_pane_cp4_copy1

0x35bd,	// (0x0002b98a) list_set_graphic_pane_g1_copy1_ParamLimits

0x35bd,	// (0x0002b98a) list_set_graphic_pane_g1_copy1

0x35c9,	// (0x0002b996) list_set_graphic_pane_g2_copy1

0xc510,	// (0x000348dd) list_set_graphic_pane_t1_copy1_ParamLimits

0xc510,	// (0x000348dd) list_set_graphic_pane_t1_copy1

0xeb2c,	// (0x00036ef9) rs_clock_indi_pane_g1

0x35d1,	// (0x0002b99e) rs_clock_indi_pane_t1

0x35df,	// (0x0002b9ac) rs_indi_pane

0x35e7,	// (0x0002b9b4) rs_indi_pane_g1

0x35f0,	// (0x0002b9bd) rs_indi_pane_g2

0x3475,	// (0x0002b842) rs_indi_pane_g3

0x0002,

0xfec4,	// (0x00038291) rs_indi_pane_g

0xc795,	// (0x00034b62) bg_popup_preview_window_pane_cp03

0x35f9,	// (0x0002b9c6) popup_fep_tooltip_window_t1

0xf4d3,	// (0x000378a0) popup_note2_window_g2_ParamLimits

0xf4d3,	// (0x000378a0) popup_note2_window_g2

0x0001,

0xfc64,	// (0x00038031) popup_note2_window_g_ParamLimits

0xfc64,	// (0x00038031) popup_note2_window_g

0x0432,	// (0x000287ff) bg_popup_sub_pane_cp11_ParamLimits

0x043f,	// (0x0002880c) cell_ai3_links_pane_g1_ParamLimits

0x0456,	// (0x00028823) cell_ai3_links_pane_t1

0x4fcc,	// (0x0002d399) set_text_pane_t1_copy1_ParamLimits

0xc6bc,	// (0x00034a89) cell_graphic_popup_pane_cp2_ParamLimits

0xc6bc,	// (0x00034a89) cell_graphic_popup_pane_cp2

0x3607,	// (0x0002b9d4) cell_graphic_popup_pane_g1_cp2

0x8dd0,	// (0x0003119d) cell_graphic_popup_pane_g2_cp2

0x360f,	// (0x0002b9dc) cell_graphic_popup_pane_g3_cp2

0x3617,	// (0x0002b9e4) cell_graphic_popup_pane_t2_cp2

0x8de1,	// (0x000311ae) grid_highlight_pane_cp3_cp2

0xc12f,	// (0x000344fc) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x9046,	// (0x00031413) main_tmo_pane_ParamLimits

0xaea4,	// (0x00033271) popup_tmo_big_image_note_window

0xbd2d,	// (0x000340fa) cell_ai5_widget_list_pane

0xbd35,	// (0x00034102) cell_ai5_widget_lrg_icon_pane

0xc025,	// (0x000343f2) tmo_note_info_pane_t1_ParamLimits

0xc03a,	// (0x00034407) tmo_note_info_pane_t2_ParamLimits

0xc04f,	// (0x0003441c) tmo_note_info_pane_t3_ParamLimits

0x33f2,	// (0x0002b7bf) tmo_note_info_pane_t4_ParamLimits

0x3404,	// (0x0002b7d1) tmo_note_info_pane_t5_ParamLimits

0xfeb2,	// (0x0003827f) tmo_note_info_pane_t_ParamLimits

0xc0c7,	// (0x00034494) settings_container_pane_ParamLimits

0x358d,	// (0x0002b95a) indicator_popup_pane_cp5

0x358d,	// (0x0002b95a) indicator_popup_pane_cp6

0x9586,	// (0x00031953) list_set_graphic_pane_copy1_ParamLimits

0x840a,	// (0x000307d7) bg_popup_window_pane_cp23

0x3625,	// (0x0002b9f2) popup_tmo_big_image_note_window_g1

0x362e,	// (0x0002b9fb) popup_tmo_big_image_note_window_t1

0x363c,	// (0x0002ba09) popup_tmo_big_image_note_window_t2

0x364a,	// (0x0002ba17) popup_tmo_big_image_note_window_t3

0x0002,

0xfecb,	// (0x00038298) popup_tmo_big_image_note_window_t

0xd942,	// (0x00035d0f) cell_ai5_widget_lrg_icon_pane_g1

0xd94a,	// (0x00035d17) cell_ai5_widget_lrg_icon_pane_t1

0xd958,	// (0x00035d25) cell_ai5_widget_list_row_pane_ParamLimits

0xd958,	// (0x00035d25) cell_ai5_widget_list_row_pane

0xd971,	// (0x00035d3e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xd971,	// (0x00035d3e) cell_ai5_widget_list_row_pane_g1

0xd97e,	// (0x00035d4b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xd97e,	// (0x00035d4b) cell_ai5_widget_list_row_pane_t1

0xd996,	// (0x00035d63) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xd996,	// (0x00035d63) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfed2,	// (0x0003829f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed2,	// (0x0003829f) cell_ai5_widget_list_row_pane_t

0x840a,	// (0x000307d7) main_fep_vtchi_ss_pane

0x3658,	// (0x0002ba25) popup_fep_char_pre_window

0x3660,	// (0x0002ba2d) popup_fep_ituss_window

0x367d,	// (0x0002ba4a) popup_fep_vkbss_window

0x369c,	// (0x0002ba69) grid_vkbss_keypad_pane_ParamLimits

0x369c,	// (0x0002ba69) grid_vkbss_keypad_pane

0x36ac,	// (0x0002ba79) ituss_keypad_pane

0x36c5,	// (0x0002ba92) aid_vkbss_key_offset_ParamLimits

0x36c5,	// (0x0002ba92) aid_vkbss_key_offset

0x36d1,	// (0x0002ba9e) cell_vkbss_key_pane_ParamLimits

0x36d1,	// (0x0002ba9e) cell_vkbss_key_pane

0x36e7,	// (0x0002bab4) bg_cell_vkbss_key_g1_ParamLimits

0x36e7,	// (0x0002bab4) bg_cell_vkbss_key_g1

0x36f3,	// (0x0002bac0) cell_vkbss_key_3p_pane_ParamLimits

0x36f3,	// (0x0002bac0) cell_vkbss_key_3p_pane

0x370d,	// (0x0002bada) cell_vkbss_key_g1_ParamLimits

0x370d,	// (0x0002bada) cell_vkbss_key_g1

0x3727,	// (0x0002baf4) cell_vkbss_key_t1_ParamLimits

0x3727,	// (0x0002baf4) cell_vkbss_key_t1

0x3752,	// (0x0002bb1f) cell_ituss_key_pane_ParamLimits

0x3752,	// (0x0002bb1f) cell_ituss_key_pane

0x3762,	// (0x0002bb2f) bg_cell_ituss_key_g1_ParamLimits

0x3762,	// (0x0002bb2f) bg_cell_ituss_key_g1

0x376e,	// (0x0002bb3b) cell_ituss_key_pane_g1_ParamLimits

0x376e,	// (0x0002bb3b) cell_ituss_key_pane_g1

0x377a,	// (0x0002bb47) cell_ituss_key_pane_g2_ParamLimits

0x377a,	// (0x0002bb47) cell_ituss_key_pane_g2

0x0001,

0xfed7,	// (0x000382a4) cell_ituss_key_pane_g_ParamLimits

0xfed7,	// (0x000382a4) cell_ituss_key_pane_g

0x3793,	// (0x0002bb60) cell_ituss_key_t1_ParamLimits

0x3793,	// (0x0002bb60) cell_ituss_key_t1

0x37c1,	// (0x0002bb8e) cell_ituss_key_t2_ParamLimits

0x37c1,	// (0x0002bb8e) cell_ituss_key_t2

0x37f2,	// (0x0002bbbf) cell_ituss_key_t3_ParamLimits

0x37f2,	// (0x0002bbbf) cell_ituss_key_t3

0x3823,	// (0x0002bbf0) cell_ituss_key_t4_ParamLimits

0x3823,	// (0x0002bbf0) cell_ituss_key_t4

0x0003,

0xfedc,	// (0x000382a9) cell_ituss_key_t_ParamLimits

0xfedc,	// (0x000382a9) cell_ituss_key_t

0x3854,	// (0x0002bc21) cell_vkbss_key_3p_pane_g1

0x385c,	// (0x0002bc29) cell_vkbss_key_3p_pane_g2

0x3864,	// (0x0002bc31) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x000382b2) cell_vkbss_key_3p_pane_g

0x840a,	// (0x000307d7) bg_popup_fep_char_preview_window_cp02

0x386c,	// (0x0002bc39) popup_fep_char_pre_window_t1

0xbd23,	// (0x000340f0) main_ai5_sk_pane

0x347e,	// (0x0002b84b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x348a,	// (0x0002b857) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x349e,	// (0x0002b86b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x34ad,	// (0x0002b87a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebd,	// (0x0003828a) cell_contacts_ai5_widget_pane_g_ParamLimits

0x34c0,	// (0x0002b88d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x9046,	// (0x00031413) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xd9a8,	// (0x00035d75) main_ai5_sk_pane_g1

0xd090,	// (0x0003545d) popup_query_code_window_g1

0x3672,	// (0x0002ba3f) popup_fep_vkb_icf_pane

0x3686,	// (0x0002ba53) popup_fep_vtchi_icf_pane

0x9046,	// (0x00031413) bg_icf_pane

0x388a,	// (0x0002bc57) list_vkb_icf_pane

0x9046,	// (0x00031413) bg_icf_pane_cp01

0x11db,	// (0x000295a8) vtchi_icf_list_pane

0x38aa,	// (0x0002bc77) list_vkb_icf_pane_t1_ParamLimits

0x38aa,	// (0x0002bc77) list_vkb_icf_pane_t1

0x38c1,	// (0x0002bc8e) vtchi_icf_list_pane_t1_ParamLimits

0x38c1,	// (0x0002bc8e) vtchi_icf_list_pane_t1

0x3660,	// (0x0002ba2d) popup_fep_ituss_window_ParamLimits

0x3686,	// (0x0002ba53) popup_fep_vtchi_icf_pane_ParamLimits

0x36ac,	// (0x0002ba79) ituss_keypad_pane_ParamLimits

0x36bc,	// (0x0002ba89) ituss_sks_pane

0x9046,	// (0x00031413) bg_icf_pane_ParamLimits

0x387b,	// (0x0002bc48) icf_edit_indi_pane_ParamLimits

0x387b,	// (0x0002bc48) icf_edit_indi_pane

0x388a,	// (0x0002bc57) list_vkb_icf_pane_ParamLimits

0x9046,	// (0x00031413) bg_icf_pane_cp01_ParamLimits

0x3896,	// (0x0002bc63) icf_edit_indi_pane_cp01_ParamLimits

0x3896,	// (0x0002bc63) icf_edit_indi_pane_cp01

0x38a2,	// (0x0002bc6f) vtchi_query_pane

0xed5a,	// (0x00037127) icf_edit_indi_pane_g1_ParamLimits

0xed5a,	// (0x00037127) icf_edit_indi_pane_g1

0x38da,	// (0x0002bca7) icf_edit_indi_pane_g2_ParamLimits

0x38da,	// (0x0002bca7) icf_edit_indi_pane_g2

0x0001,

0xfeec,	// (0x000382b9) icf_edit_indi_pane_g_ParamLimits

0xfeec,	// (0x000382b9) icf_edit_indi_pane_g

0x38e6,	// (0x0002bcb3) icf_edit_indi_pane_t1

0x38f4,	// (0x0002bcc1) bg_input_focus_pane_cp042

0x38fd,	// (0x0002bcca) vtchi_button_pane

0x3906,	// (0x0002bcd3) vtchi_query_pane_t1

0x3914,	// (0x0002bce1) vtchi_query_pane_t2

0x3922,	// (0x0002bcef) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x000382be) vtchi_query_pane_t

0x840a,	// (0x000307d7) bg_button_pane_cp13

0x3930,	// (0x0002bcfd) vtchi_button_pane_g1

0x16f3,	// (0x00029ac0) ituss_sks_pane_g1

0x3938,	// (0x0002bd05) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x000382c5) ituss_sks_pane_g

0x3941,	// (0x0002bd0e) ituss_sks_pane_t1

0x394f,	// (0x0002bd1c) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x000382ca) ituss_sks_pane_t

0xe7e1,	// (0x00036bae) indicator_nsta_pane_cp_g1

0xe7ea,	// (0x00036bb7) indicator_nsta_pane_cp_g2

0xe7f2,	// (0x00036bbf) indicator_nsta_pane_cp_g3

0xe7fa,	// (0x00036bc7) indicator_nsta_pane_cp_g4

0xe802,	// (0x00036bcf) indicator_nsta_pane_cp_g5

0xe80a,	// (0x00036bd7) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x00037e7b) indicator_nsta_pane_cp_g

0xbb2b,	// (0x00033ef8) cell_graphic2_pane_t2_ParamLimits

0xbb2b,	// (0x00033ef8) cell_graphic2_pane_t2

0x0001,

0xfdb4,	// (0x00038181) cell_graphic2_pane_t_ParamLimits

0xfdb4,	// (0x00038181) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large
