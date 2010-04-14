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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0003117a };

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
0x5380,	// (0x000364fa) Screen

0x538c,	// (0x00036506) application_window_ParamLimits

0x538c,	// (0x00036506) application_window

0xe55f,	// (0x0003f6d9) screen_g1

0x53e8,	// (0x00036562) area_bottom_pane_ParamLimits

0x53e8,	// (0x00036562) area_bottom_pane

0x54a8,	// (0x00036622) area_top_pane_ParamLimits

0x54a8,	// (0x00036622) area_top_pane

0x5546,	// (0x000366c0) main_pane_ParamLimits

0x5546,	// (0x000366c0) main_pane

0xe569,	// (0x0003f6e3) misc_graphics

0x8c9f,	// (0x00039e19) battery_pane_ParamLimits

0x8c9f,	// (0x00039e19) battery_pane

0x995d,	// (0x0003aad7) bg_status_flat_pane_g8

0x9965,	// (0x0003aadf) bg_status_flat_pane_g9

0x8d67,	// (0x00039ee1) context_pane_ParamLimits

0x8d67,	// (0x00039ee1) context_pane

0x8e8b,	// (0x0003a005) navi_pane_ParamLimits

0x8e8b,	// (0x0003a005) navi_pane

0x8f1b,	// (0x0003a095) signal_pane_ParamLimits

0x8f1b,	// (0x0003a095) signal_pane

0x0008,

0xf874,	// (0x000409ee) bg_status_flat_pane_g

0x8f88,	// (0x0003a102) status_pane_g1_ParamLimits

0x8f88,	// (0x0003a102) status_pane_g1

0x8f9c,	// (0x0003a116) status_pane_g2_ParamLimits

0x8f9c,	// (0x0003a116) status_pane_g2

0x8fa8,	// (0x0003a122) status_pane_g3_ParamLimits

0x8fa8,	// (0x0003a122) status_pane_g3

0x0004,

0xf79b,	// (0x00040915) status_pane_g_ParamLimits

0xf79b,	// (0x00040915) status_pane_g

0x8fdc,	// (0x0003a156) title_pane_ParamLimits

0x8fdc,	// (0x0003a156) title_pane

0x9019,	// (0x0003a193) uni_indicator_pane_ParamLimits

0x9019,	// (0x0003a193) uni_indicator_pane

0x6e3f,	// (0x00037fb9) bg_list_pane_ParamLimits

0x6e3f,	// (0x00037fb9) bg_list_pane

0x6e5f,	// (0x00037fd9) find_pane

0x6e67,	// (0x00037fe1) listscroll_app_pane_ParamLimits

0x6e67,	// (0x00037fe1) listscroll_app_pane

0x6e73,	// (0x00037fed) listscroll_form_pane

0x6e7b,	// (0x00037ff5) listscroll_gen_pane_ParamLimits

0x6e7b,	// (0x00037ff5) listscroll_gen_pane

0x6e8f,	// (0x00038009) listscroll_set_pane

0x6149,	// (0x000372c3) main_idle_act_pane

0x6938,	// (0x00037ab2) main_idle_trad_pane

0x6938,	// (0x00037ab2) main_list_empty_pane

0x6ea9,	// (0x00038023) main_midp_pane

0x6eb5,	// (0x0003802f) main_pane_g1_ParamLimits

0x6eb5,	// (0x0003802f) main_pane_g1

0x6ec3,	// (0x0003803d) popup_ai_message_window_ParamLimits

0x6ec3,	// (0x0003803d) popup_ai_message_window

0x6f77,	// (0x000380f1) popup_fep_china_uni_window_ParamLimits

0x6f77,	// (0x000380f1) popup_fep_china_uni_window

0x8720,	// (0x0003989a) popup_fep_japan_candidate_window_ParamLimits

0x8720,	// (0x0003989a) popup_fep_japan_candidate_window

0x874a,	// (0x000398c4) popup_fep_japan_predictive_window_ParamLimits

0x874a,	// (0x000398c4) popup_fep_japan_predictive_window

0x8780,	// (0x000398fa) popup_find_window

0x878d,	// (0x00039907) popup_grid_graphic_window_ParamLimits

0x878d,	// (0x00039907) popup_grid_graphic_window

0x87bb,	// (0x00039935) popup_large_graphic_colour_window

0x87e1,	// (0x0003995b) popup_menu_window_ParamLimits

0x87e1,	// (0x0003995b) popup_menu_window

0x89ab,	// (0x00039b25) popup_note_image_window

0x8995,	// (0x00039b0f) popup_note_wait_window_ParamLimits

0x8995,	// (0x00039b0f) popup_note_wait_window

0x8995,	// (0x00039b0f) popup_note_window_ParamLimits

0x8995,	// (0x00039b0f) popup_note_window

0x8a11,	// (0x00039b8b) popup_query_code_window_ParamLimits

0x8a11,	// (0x00039b8b) popup_query_code_window

0x8a27,	// (0x00039ba1) popup_query_data_code_window_ParamLimits

0x8a27,	// (0x00039ba1) popup_query_data_code_window

0x8a4a,	// (0x00039bc4) popup_query_data_window_ParamLimits

0x8a4a,	// (0x00039bc4) popup_query_data_window

0x8a6c,	// (0x00039be6) popup_query_sat_info_window_ParamLimits

0x8a6c,	// (0x00039be6) popup_query_sat_info_window

0x8aab,	// (0x00039c25) popup_snote_single_graphic_window_ParamLimits

0x8aab,	// (0x00039c25) popup_snote_single_graphic_window

0x8aab,	// (0x00039c25) popup_snote_single_text_window_ParamLimits

0x8aab,	// (0x00039c25) popup_snote_single_text_window

0x8ac2,	// (0x00039c3c) popup_sub_window_general

0x8c08,	// (0x00039d82) popup_window_general_ParamLimits

0x8c08,	// (0x00039d82) popup_window_general

0x8c21,	// (0x00039d9b) power_save_pane

0x6c9e,	// (0x00037e18) control_pane_g1_ParamLimits

0x6c9e,	// (0x00037e18) control_pane_g1

0x6cc7,	// (0x00037e41) control_pane_g2_ParamLimits

0x6cc7,	// (0x00037e41) control_pane_g2

0x6cec,	// (0x00037e66) control_pane_g3_ParamLimits

0x6cec,	// (0x00037e66) control_pane_g3

0x0007,

0xf783,	// (0x000408fd) control_pane_g_ParamLimits

0xf783,	// (0x000408fd) control_pane_g

0x6d44,	// (0x00037ebe) control_pane_t1_ParamLimits

0x6d44,	// (0x00037ebe) control_pane_t1

0x6d90,	// (0x00037f0a) control_pane_t2_ParamLimits

0x6d90,	// (0x00037f0a) control_pane_t2

0x0002,

0xf794,	// (0x0004090e) control_pane_t_ParamLimits

0xf794,	// (0x0004090e) control_pane_t

0x6bc3,	// (0x00037d3d) navi_navi_volume_pane_cp1

0x6bcb,	// (0x00037d45) status_small_icon_pane

0x6bd3,	// (0x00037d4d) status_small_pane_g1_ParamLimits

0x6bd3,	// (0x00037d4d) status_small_pane_g1

0x6c07,	// (0x00037d81) status_small_pane_g2_ParamLimits

0x6c07,	// (0x00037d81) status_small_pane_g2

0x6c13,	// (0x00037d8d) status_small_pane_g3_ParamLimits

0x6c13,	// (0x00037d8d) status_small_pane_g3

0x6c1f,	// (0x00037d99) status_small_pane_g4_ParamLimits

0x6c1f,	// (0x00037d99) status_small_pane_g4

0x6c2b,	// (0x00037da5) status_small_pane_g5_ParamLimits

0x6c2b,	// (0x00037da5) status_small_pane_g5

0x6c39,	// (0x00037db3) status_small_pane_g6_ParamLimits

0x6c39,	// (0x00037db3) status_small_pane_g6

0x0007,

0xf772,	// (0x000408ec) status_small_pane_g_ParamLimits

0xf772,	// (0x000408ec) status_small_pane_g

0x6c68,	// (0x00037de2) status_small_pane_t1

0x6c8a,	// (0x00037e04) status_small_wait_pane_ParamLimits

0x6c8a,	// (0x00037e04) status_small_wait_pane

0x64bc,	// (0x00037636) aid_levels_signal_ParamLimits

0x64bc,	// (0x00037636) aid_levels_signal

0x64ce,	// (0x00037648) signal_pane_g1_ParamLimits

0x64ce,	// (0x00037648) signal_pane_g1

0x64e3,	// (0x0003765d) signal_pane_g2_ParamLimits

0x64e3,	// (0x0003765d) signal_pane_g2

0x0003,

0xf703,	// (0x0004087d) signal_pane_g_ParamLimits

0xf703,	// (0x0004087d) signal_pane_g

0x23e6,	// (0x00033560) context_pane_g1

0x57a5,	// (0x0003691f) title_pane_g1

0x57c3,	// (0x0003693d) title_pane_t1

0xef4c,	// (0x000400c6) title_pane_t2

0xef72,	// (0x000400ec) title_pane_t3

0x0002,

0xf557,	// (0x000406d1) title_pane_t

0x9031,	// (0x0003a1ab) aid_levels_battery_ParamLimits

0x9031,	// (0x0003a1ab) aid_levels_battery

0x9045,	// (0x0003a1bf) battery_pane_g1_ParamLimits

0x9045,	// (0x0003a1bf) battery_pane_g1

0x905b,	// (0x0003a1d5) battery_pane_g2_ParamLimits

0x905b,	// (0x0003a1d5) battery_pane_g2

0x0001,

0xf7a6,	// (0x00040920) battery_pane_g_ParamLimits

0xf7a6,	// (0x00040920) battery_pane_g

0xa2a7,	// (0x0003b421) uni_indicator_pane_g1

0xa2bd,	// (0x0003b437) uni_indicator_pane_g2

0xa2d3,	// (0x0003b44d) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x00040a96) uni_indicator_pane_g

0x2694,	// (0x0003380e) navi_icon_pane_ParamLimits

0x2694,	// (0x0003380e) navi_icon_pane

0x2618,	// (0x00033792) navi_midp_pane

0x26b0,	// (0x0003382a) navi_navi_pane

0x26ba,	// (0x00033834) navi_text_pane_ParamLimits

0x26ba,	// (0x00033834) navi_text_pane

0xe55f,	// (0x0003f6d9) status_small_wait_pane_g1

0xf26d,	// (0x000403e7) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x00040a91) status_small_wait_pane_g

0x9fba,	// (0x0003b134) navi_navi_icon_text_pane

0x9fc2,	// (0x0003b13c) navi_navi_pane_g1_ParamLimits

0x9fc2,	// (0x0003b13c) navi_navi_pane_g1

0x9fd4,	// (0x0003b14e) navi_navi_pane_g2_ParamLimits

0x9fd4,	// (0x0003b14e) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00040a5f) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00040a5f) navi_navi_pane_g

0x9fe6,	// (0x0003b160) navi_navi_tabs_pane

0x9fef,	// (0x0003b169) navi_navi_text_pane

0x9fba,	// (0x0003b134) navi_navi_volume_pane

0x9f96,	// (0x0003b110) navi_text_pane_t1

0x9f8a,	// (0x0003b104) navi_icon_pane_g1

0x9edd,	// (0x0003b057) navi_navi_text_pane_t1

0x729e,	// (0x00038418) navi_navi_volume_pane_g1

0x72a6,	// (0x00038420) volume_small_pane

0x9e43,	// (0x0003afbd) navi_navi_icon_text_pane_g1

0x9e4b,	// (0x0003afc5) navi_navi_icon_text_pane_t1

0x26b0,	// (0x0003382a) navi_tabs_2_long_pane

0x26b0,	// (0x0003382a) navi_tabs_2_pane

0x26b0,	// (0x0003382a) navi_tabs_3_long_pane

0x26b0,	// (0x0003382a) navi_tabs_3_pane

0x26b0,	// (0x0003382a) navi_tabs_4_pane

0x727e,	// (0x000383f8) tabs_2_active_pane_ParamLimits

0x727e,	// (0x000383f8) tabs_2_active_pane

0x728e,	// (0x00038408) tabs_2_passive_pane_ParamLimits

0x728e,	// (0x00038408) tabs_2_passive_pane

0x724c,	// (0x000383c6) tabs_3_active_pane_ParamLimits

0x724c,	// (0x000383c6) tabs_3_active_pane

0x725c,	// (0x000383d6) tabs_3_passive_pane_ParamLimits

0x725c,	// (0x000383d6) tabs_3_passive_pane

0x726d,	// (0x000383e7) tabs_3_passive_pane_cp_ParamLimits

0x726d,	// (0x000383e7) tabs_3_passive_pane_cp

0x7200,	// (0x0003837a) tabs_4_active_pane_ParamLimits

0x7200,	// (0x0003837a) tabs_4_active_pane

0x7213,	// (0x0003838d) tabs_4_passive_pane_ParamLimits

0x7213,	// (0x0003838d) tabs_4_passive_pane

0x7224,	// (0x0003839e) tabs_4_passive_pane_cp_ParamLimits

0x7224,	// (0x0003839e) tabs_4_passive_pane_cp

0x7235,	// (0x000383af) tabs_4_passive_pane_cp2_ParamLimits

0x7235,	// (0x000383af) tabs_4_passive_pane_cp2

0x71dc,	// (0x00038356) tabs_2_long_active_pane_ParamLimits

0x71dc,	// (0x00038356) tabs_2_long_active_pane

0x71ee,	// (0x00038368) tabs_2_long_passive_pane_ParamLimits

0x71ee,	// (0x00038368) tabs_2_long_passive_pane

0x719d,	// (0x00038317) tabs_3_long_active_pane_ParamLimits

0x719d,	// (0x00038317) tabs_3_long_active_pane

0x71b0,	// (0x0003832a) tabs_3_long_passive_pane_ParamLimits

0x71b0,	// (0x0003832a) tabs_3_long_passive_pane

0x71c9,	// (0x00038343) tabs_3_long_passive_pane_cp_ParamLimits

0x71c9,	// (0x00038343) tabs_3_long_passive_pane_cp

0x7143,	// (0x000382bd) volume_small_pane_g1

0x714c,	// (0x000382c6) volume_small_pane_g2

0x7155,	// (0x000382cf) volume_small_pane_g3

0x715e,	// (0x000382d8) volume_small_pane_g4

0x7167,	// (0x000382e1) volume_small_pane_g5

0x7170,	// (0x000382ea) volume_small_pane_g6

0x7179,	// (0x000382f3) volume_small_pane_g7

0x7182,	// (0x000382fc) volume_small_pane_g8

0x718b,	// (0x00038305) volume_small_pane_g9

0x7194,	// (0x0003830e) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00040a2b) volume_small_pane_g

0xef84,	// (0x000400fe) bg_active_tab_pane_cp2_ParamLimits

0xef84,	// (0x000400fe) bg_active_tab_pane_cp2

0x582b,	// (0x000369a5) tabs_3_active_pane_g1

0x5833,	// (0x000369ad) tabs_3_active_pane_t1

0xef84,	// (0x000400fe) bg_passive_tab_pane_cp2_ParamLimits

0xef84,	// (0x000400fe) bg_passive_tab_pane_cp2

0x582b,	// (0x000369a5) tabs_3_passive_pane_g1

0x5833,	// (0x000369ad) tabs_3_passive_pane_t1

0xef84,	// (0x000400fe) bg_active_tab_pane_cp3_ParamLimits

0xef84,	// (0x000400fe) bg_active_tab_pane_cp3

0x5845,	// (0x000369bf) tabs_4_active_pane_g1

0x584d,	// (0x000369c7) tabs_4_active_pane_t1

0xef84,	// (0x000400fe) bg_passive_tab_pane_cp3_ParamLimits

0xef84,	// (0x000400fe) bg_passive_tab_pane_cp3

0x5845,	// (0x000369bf) tabs_4_1_passive_pane_g1

0x584d,	// (0x000369c7) tabs_4_1_passive_pane_t1

0x6ea9,	// (0x00038023) list_highlight_pane_cp2

0xa522,	// (0x0003b69c) list_set_pane_ParamLimits

0xa522,	// (0x0003b69c) list_set_pane

0xa5ea,	// (0x0003b764) main_pane_set_t1_ParamLimits

0xa5ea,	// (0x0003b764) main_pane_set_t1

0xa60a,	// (0x0003b784) main_pane_set_t2_ParamLimits

0xa60a,	// (0x0003b784) main_pane_set_t2

0xa61e,	// (0x0003b798) main_pane_set_t3_ParamLimits

0xa61e,	// (0x0003b798) main_pane_set_t3

0xa632,	// (0x0003b7ac) main_pane_set_t4_ParamLimits

0xa632,	// (0x0003b7ac) main_pane_set_t4

0x0003,

0xf981,	// (0x00040afb) main_pane_set_t_ParamLimits

0xf981,	// (0x00040afb) main_pane_set_t

0xa646,	// (0x0003b7c0) setting_code_pane

0xa650,	// (0x0003b7ca) setting_slider_graphic_pane

0xa650,	// (0x0003b7ca) setting_slider_pane

0xa650,	// (0x0003b7ca) setting_text_pane

0xa650,	// (0x0003b7ca) setting_volume_pane

0x585f,	// (0x000369d9) volume_set_pane

0xef84,	// (0x000400fe) bg_set_opt_pane_cp

0x5869,	// (0x000369e3) setting_slider_pane_t1

0x5882,	// (0x000369fc) setting_slider_pane_t2

0x589c,	// (0x00036a16) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000406d8) setting_slider_pane_t

0x58b4,	// (0x00036a2e) slider_set_pane

0xe569,	// (0x0003f6e3) bg_set_opt_pane_cp2

0xef92,	// (0x0004010c) setting_slider_graphic_pane_g1

0x58ca,	// (0x00036a44) setting_slider_graphic_pane_t1

0x58da,	// (0x00036a54) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000406df) setting_slider_graphic_pane_t

0x58ea,	// (0x00036a64) slider_set_pane_cp

0xe569,	// (0x0003f6e3) input_focus_pane_cp1

0xa4e3,	// (0x0003b65d) list_set_text_pane

0xe55f,	// (0x0003f6d9) setting_text_pane_g1

0xe569,	// (0x0003f6e3) input_focus_pane_cp2

0xe55f,	// (0x0003f6d9) setting_code_pane_g1

0xef9b,	// (0x00040115) setting_code_pane_t1

0x3c16,	// (0x00034d90) set_text_pane_t1_ParamLimits

0x3c16,	// (0x00034d90) set_text_pane_t1

0x1f08,	// (0x00033082) set_opt_bg_pane_g1

0x1f10,	// (0x0003308a) set_opt_bg_pane_g2

0xa4bb,	// (0x0003b635) set_opt_bg_pane_g3

0x1f20,	// (0x0003309a) set_opt_bg_pane_g4

0x1f28,	// (0x000330a2) set_opt_bg_pane_g5

0x1f30,	// (0x000330aa) set_opt_bg_pane_g6

0xa4c5,	// (0x0003b63f) set_opt_bg_pane_g7

0xa4cf,	// (0x0003b649) set_opt_bg_pane_g8

0xa4d9,	// (0x0003b653) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00040ae8) set_opt_bg_pane_g

0xa4ae,	// (0x0003b628) slider_set_pane_g1

0x734f,	// (0x000384c9) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00040ad9) slider_set_pane_g

0x72af,	// (0x00038429) volume_set_pane_g1

0x72b9,	// (0x00038433) volume_set_pane_g2

0x72c3,	// (0x0003843d) volume_set_pane_g3

0x72cd,	// (0x00038447) volume_set_pane_g4

0x72d7,	// (0x00038451) volume_set_pane_g5

0x72e1,	// (0x0003845b) volume_set_pane_g6

0x72eb,	// (0x00038465) volume_set_pane_g7

0x72f5,	// (0x0003846f) volume_set_pane_g8

0x72ff,	// (0x00038479) volume_set_pane_g9

0x7309,	// (0x00038483) volume_set_pane_g10

0x0009,

0xf937,	// (0x00040ab1) volume_set_pane_g

0x58f2,	// (0x00036a6c) indicator_pane_ParamLimits

0x58f2,	// (0x00036a6c) indicator_pane

0x58fe,	// (0x00036a78) main_idle_pane_g2_ParamLimits

0x58fe,	// (0x00036a78) main_idle_pane_g2

0x5926,	// (0x00036aa0) main_pane_idle_g1_ParamLimits

0x5926,	// (0x00036aa0) main_pane_idle_g1

0xefa9,	// (0x00040123) popup_clock_digital_analogue_window_ParamLimits

0xefa9,	// (0x00040123) popup_clock_digital_analogue_window

0x5934,	// (0x00036aae) soft_indicator_pane_ParamLimits

0x5934,	// (0x00036aae) soft_indicator_pane

0x5942,	// (0x00036abc) wallpaper_pane_ParamLimits

0x5942,	// (0x00036abc) wallpaper_pane

0xe55f,	// (0x0003f6d9) wallpaper_pane_g1

0x594e,	// (0x00036ac8) indicator_pane_g1_ParamLimits

0x594e,	// (0x00036ac8) indicator_pane_g1

0xa92c,	// (0x0003baa6) navi_navi_icon_text_pane_srt_g1

0xefd7,	// (0x00040151) soft_indicator_pane_t1

0xeff1,	// (0x0004016b) aid_ps_area_pane

0x595a,	// (0x00036ad4) aid_ps_clock_pane

0xf002,	// (0x0004017c) aid_ps_indicator_pane

0xf00e,	// (0x00040188) indicator_ps_pane_ParamLimits

0xf00e,	// (0x00040188) indicator_ps_pane

0xf01d,	// (0x00040197) power_save_pane_g1_ParamLimits

0xf01d,	// (0x00040197) power_save_pane_g1

0xf029,	// (0x000401a3) power_save_pane_g2_ParamLimits

0xf029,	// (0x000401a3) power_save_pane_g2

0x539c,	// (0x00036516) aid_navinavi_width_pane

0xeff1,	// (0x0004016b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000406e4) power_save_pane_g_ParamLimits

0xf56a,	// (0x000406e4) power_save_pane_g

0xf037,	// (0x000401b1) power_save_pane_t1_ParamLimits

0xf037,	// (0x000401b1) power_save_pane_t1

0x595a,	// (0x00036ad4) aid_ps_clock_pane_ParamLimits

0xf002,	// (0x0004017c) aid_ps_indicator_pane_ParamLimits

0xf049,	// (0x000401c3) power_save_pane_t4_ParamLimits

0xf049,	// (0x000401c3) power_save_pane_t4

0x0001,

0xf56f,	// (0x000406e9) power_save_pane_t_ParamLimits

0xf56f,	// (0x000406e9) power_save_pane_t

0xf073,	// (0x000401ed) power_save_t3_ParamLimits

0xf073,	// (0x000401ed) power_save_t3

0xf05e,	// (0x000401d8) power_save_t2_ParamLimits

0xf05e,	// (0x000401d8) power_save_t2

0xf088,	// (0x00040202) indicator_ps_pane_g1

0x5968,	// (0x00036ae2) ai_gene_pane_ParamLimits

0x5968,	// (0x00036ae2) ai_gene_pane

0x5974,	// (0x00036aee) ai_links_pane_ParamLimits

0x5974,	// (0x00036aee) ai_links_pane

0x5980,	// (0x00036afa) indicator_pane_cp1_ParamLimits

0x5980,	// (0x00036afa) indicator_pane_cp1

0x598c,	// (0x00036b06) main_pane_idle_g1_cp_ParamLimits

0x598c,	// (0x00036b06) main_pane_idle_g1_cp

0xf091,	// (0x0004020b) popup_ai_links_title_window

0x5998,	// (0x00036b12) soft_indicator_pane_cp1_ParamLimits

0x5998,	// (0x00036b12) soft_indicator_pane_cp1

0xa295,	// (0x0003b40f) ai_links_pane_g1

0xa29e,	// (0x0003b418) grid_ai_links_pane

0xa27a,	// (0x0003b3f4) ai_gene_pane_1

0xa283,	// (0x0003b3fd) ai_gene_pane_2

0xa28c,	// (0x0003b406) list_highlight_pane_cp4

0xa25a,	// (0x0003b3d4) cell_ai_link_pane_ParamLimits

0xa25a,	// (0x0003b3d4) cell_ai_link_pane

0xa252,	// (0x0003b3cc) cell_ai_link_pane_g1

0xf26d,	// (0x000403e7) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x00040a8c) cell_ai_link_pane_g

0xe569,	// (0x0003f6e3) grid_highlight_cp2

0xe569,	// (0x0003f6e3) bg_popup_sub_pane_cp1

0xf0a8,	// (0x00040222) popup_ai_links_title_window_t1

0xa19e,	// (0x0003b318) ai_gene_pane_1_g1_ParamLimits

0xa19e,	// (0x0003b318) ai_gene_pane_1_g1

0xa1aa,	// (0x0003b324) ai_gene_pane_1_g2_ParamLimits

0xa1aa,	// (0x0003b324) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x00040a82) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x00040a82) ai_gene_pane_1_g

0xa1b7,	// (0x0003b331) ai_gene_pane_1_t1_ParamLimits

0xa1b7,	// (0x0003b331) ai_gene_pane_1_t1

0xa1eb,	// (0x0003b365) grid_ai_soft_ind_pane

0xa189,	// (0x0003b303) ai_gene_pane_2_t1_ParamLimits

0xa189,	// (0x0003b303) ai_gene_pane_2_t1

0x59a4,	// (0x00036b1e) main_pane_empty_t1_ParamLimits

0x59a4,	// (0x00036b1e) main_pane_empty_t1

0x59bc,	// (0x00036b36) main_pane_empty_t2_ParamLimits

0x59bc,	// (0x00036b36) main_pane_empty_t2

0x59d1,	// (0x00036b4b) main_pane_empty_t3_ParamLimits

0x59d1,	// (0x00036b4b) main_pane_empty_t3

0x59e3,	// (0x00036b5d) main_pane_empty_t4_ParamLimits

0x59e3,	// (0x00036b5d) main_pane_empty_t4

0x59f5,	// (0x00036b6f) main_pane_empty_t5_ParamLimits

0x59f5,	// (0x00036b6f) main_pane_empty_t5

0x0004,

0xf574,	// (0x000406ee) main_pane_empty_t_ParamLimits

0xf574,	// (0x000406ee) main_pane_empty_t

0x1f59,	// (0x000330d3) bg_popup_window_pane_ParamLimits

0x1f59,	// (0x000330d3) bg_popup_window_pane

0x9eeb,	// (0x0003b065) find_popup_pane_cp2_ParamLimits

0x9eeb,	// (0x0003b065) find_popup_pane_cp2

0x9ef7,	// (0x0003b071) heading_pane_ParamLimits

0x9ef7,	// (0x0003b071) heading_pane

0xe569,	// (0x0003f6e3) bg_popup_sub_pane

0x9e65,	// (0x0003afdf) bg_popup_window_pane_g1_ParamLimits

0x9e65,	// (0x0003afdf) bg_popup_window_pane_g1

0x9e71,	// (0x0003afeb) bg_popup_window_pane_g2_ParamLimits

0x9e71,	// (0x0003afeb) bg_popup_window_pane_g2

0x9e7d,	// (0x0003aff7) bg_popup_window_pane_g3_ParamLimits

0x9e7d,	// (0x0003aff7) bg_popup_window_pane_g3

0x9e89,	// (0x0003b003) bg_popup_window_pane_g4_ParamLimits

0x9e89,	// (0x0003b003) bg_popup_window_pane_g4

0x9e95,	// (0x0003b00f) bg_popup_window_pane_g5_ParamLimits

0x9e95,	// (0x0003b00f) bg_popup_window_pane_g5

0x9ea1,	// (0x0003b01b) bg_popup_window_pane_g6_ParamLimits

0x9ea1,	// (0x0003b01b) bg_popup_window_pane_g6

0x9ead,	// (0x0003b027) bg_popup_window_pane_g7_ParamLimits

0x9ead,	// (0x0003b027) bg_popup_window_pane_g7

0x9eb9,	// (0x0003b033) bg_popup_window_pane_g8_ParamLimits

0x9eb9,	// (0x0003b033) bg_popup_window_pane_g8

0x9ec5,	// (0x0003b03f) bg_popup_window_pane_g9_ParamLimits

0x9ec5,	// (0x0003b03f) bg_popup_window_pane_g9

0x9ed1,	// (0x0003b04b) bg_popup_window_pane_g10_ParamLimits

0x9ed1,	// (0x0003b04b) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x00040a4a) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x00040a4a) bg_popup_window_pane_g

0x9dfa,	// (0x0003af74) bg_popup_heading_pane_ParamLimits

0x9dfa,	// (0x0003af74) bg_popup_heading_pane

0x7460,	// (0x000385da) tabs_4_passive_pane_cp_srt_ParamLimits

0x7460,	// (0x000385da) tabs_4_passive_pane_cp_srt

0x7472,	// (0x000385ec) tabs_4_passive_pane_srt_ParamLimits

0x9e0e,	// (0x0003af88) heading_pane_g2

0x7472,	// (0x000385ec) tabs_4_passive_pane_srt

0x6ea9,	// (0x00038023) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6ea9,	// (0x00038023) bg_passive_tab_pane_cp3_srt

0x9e16,	// (0x0003af90) heading_pane_t1_ParamLimits

0x9e16,	// (0x0003af90) heading_pane_t1

0x9e2d,	// (0x0003afa7) heading_pane_t2_ParamLimits

0x9e2d,	// (0x0003afa7) heading_pane_t2

0x0001,

0xf8cb,	// (0x00040a45) heading_pane_t_ParamLimits

0xf8cb,	// (0x00040a45) heading_pane_t

0x9925,	// (0x0003aa9f) bg_popup_heading_pane_g1

0x99d4,	// (0x0003ab4e) bg_popup_heading_pane_g2

0x99de,	// (0x0003ab58) bg_popup_heading_pane_g3

0x99e8,	// (0x0003ab62) bg_popup_heading_pane_g4

0x99f2,	// (0x0003ab6c) bg_popup_heading_pane_g5

0x99fc,	// (0x0003ab76) bg_popup_heading_pane_g6

0x9a04,	// (0x0003ab7e) bg_popup_heading_pane_g7

0x9a0c,	// (0x0003ab86) bg_popup_heading_pane_g8

0x9a16,	// (0x0003ab90) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x00040a01) bg_popup_heading_pane_g

0x9133,	// (0x0003a2ad) bg_popup_sub_pane_g1

0x9143,	// (0x0003a2bd) bg_popup_sub_pane_g2

0x913b,	// (0x0003a2b5) bg_popup_sub_pane_g3

0x9153,	// (0x0003a2cd) bg_popup_sub_pane_g4

0x914b,	// (0x0003a2c5) bg_popup_sub_pane_g5

0x915b,	// (0x0003a2d5) bg_popup_sub_pane_g6

0x9163,	// (0x0003a2dd) bg_popup_sub_pane_g7

0x9173,	// (0x0003a2ed) bg_popup_sub_pane_g8

0x916b,	// (0x0003a2e5) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x000409db) bg_popup_sub_pane_g

0xf0b7,	// (0x00040231) bg_popup_window_pane_cp5_ParamLimits

0xf0b7,	// (0x00040231) bg_popup_window_pane_cp5

0xf0d3,	// (0x0004024d) popup_note_window_g1_ParamLimits

0xf0d3,	// (0x0004024d) popup_note_window_g1

0xf0df,	// (0x00040259) popup_note_window_t1_ParamLimits

0xf0df,	// (0x00040259) popup_note_window_t1

0xf0f5,	// (0x0004026f) popup_note_window_t2_ParamLimits

0xf0f5,	// (0x0004026f) popup_note_window_t2

0xf10b,	// (0x00040285) popup_note_window_t3_ParamLimits

0xf10b,	// (0x00040285) popup_note_window_t3

0xf121,	// (0x0004029b) popup_note_window_t4_ParamLimits

0xf121,	// (0x0004029b) popup_note_window_t4

0xf149,	// (0x000402c3) popup_note_window_t5_ParamLimits

0xf149,	// (0x000402c3) popup_note_window_t5

0x0004,

0xf57f,	// (0x000406f9) popup_note_window_t_ParamLimits

0xf57f,	// (0x000406f9) popup_note_window_t

0xf16d,	// (0x000402e7) bg_popup_window_pane_cp6_ParamLimits

0xf16d,	// (0x000402e7) bg_popup_window_pane_cp6

0x98a1,	// (0x0003aa1b) popup_note_image_window_g1_ParamLimits

0x98a1,	// (0x0003aa1b) popup_note_image_window_g1

0x98ad,	// (0x0003aa27) popup_note_image_window_g2_ParamLimits

0x98ad,	// (0x0003aa27) popup_note_image_window_g2

0x0001,

0xf855,	// (0x000409cf) popup_note_image_window_g_ParamLimits

0xf855,	// (0x000409cf) popup_note_image_window_g

0x98c6,	// (0x0003aa40) popup_note_image_window_t1_ParamLimits

0x98c6,	// (0x0003aa40) popup_note_image_window_t1

0x98df,	// (0x0003aa59) popup_note_image_window_t2_ParamLimits

0x98df,	// (0x0003aa59) popup_note_image_window_t2

0x98f8,	// (0x0003aa72) popup_note_image_window_t3_ParamLimits

0x98f8,	// (0x0003aa72) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x000409d4) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x000409d4) popup_note_image_window_t

0x9761,	// (0x0003a8db) bg_popup_window_pane_cp7_ParamLimits

0x9761,	// (0x0003a8db) bg_popup_window_pane_cp7

0x9791,	// (0x0003a90b) popup_note_wait_window_g1_ParamLimits

0x9791,	// (0x0003a90b) popup_note_wait_window_g1

0x979d,	// (0x0003a917) popup_note_wait_window_g2_ParamLimits

0x979d,	// (0x0003a917) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x000409bd) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x000409bd) popup_note_wait_window_g

0x97b5,	// (0x0003a92f) popup_note_wait_window_t1_ParamLimits

0x97b5,	// (0x0003a92f) popup_note_wait_window_t1

0x97dc,	// (0x0003a956) popup_note_wait_window_t2_ParamLimits

0x97dc,	// (0x0003a956) popup_note_wait_window_t2

0x97fa,	// (0x0003a974) popup_note_wait_window_t3_ParamLimits

0x97fa,	// (0x0003a974) popup_note_wait_window_t3

0x980d,	// (0x0003a987) popup_note_wait_window_t4_ParamLimits

0x980d,	// (0x0003a987) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x000409c4) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x000409c4) popup_note_wait_window_t

0x9832,	// (0x0003a9ac) wait_bar_pane_ParamLimits

0x9832,	// (0x0003a9ac) wait_bar_pane

0xe569,	// (0x0003f6e3) wait_anim_pane

0xe569,	// (0x0003f6e3) wait_border_pane

0xe55f,	// (0x0003f6d9) wait_anim_pane_g1

0xe55f,	// (0x0003f6d9) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00040878) wait_anim_pane_g

0x9705,	// (0x0003a87f) wait_border_pane_g1

0x9710,	// (0x0003a88a) wait_border_pane_g2

0x9719,	// (0x0003a893) wait_border_pane_g3

0x0002,

0xf83c,	// (0x000409b6) wait_border_pane_g

0x956f,	// (0x0003a6e9) bg_popup_window_pane_cp16_ParamLimits

0x956f,	// (0x0003a6e9) bg_popup_window_pane_cp16

0x966f,	// (0x0003a7e9) indicator_popup_pane_cp4_ParamLimits

0x966f,	// (0x0003a7e9) indicator_popup_pane_cp4

0x9683,	// (0x0003a7fd) popup_query_data_window_t1_ParamLimits

0x9683,	// (0x0003a7fd) popup_query_data_window_t1

0x9695,	// (0x0003a80f) popup_query_data_window_t2_ParamLimits

0x9695,	// (0x0003a80f) popup_query_data_window_t2

0x96ae,	// (0x0003a828) popup_query_data_window_t3_ParamLimits

0x96ae,	// (0x0003a828) popup_query_data_window_t3

0x0002,

0xf835,	// (0x000409af) popup_query_data_window_t_ParamLimits

0xf835,	// (0x000409af) popup_query_data_window_t

0x96c8,	// (0x0003a842) query_popup_data_pane_ParamLimits

0x96c8,	// (0x0003a842) query_popup_data_pane

0x96dc,	// (0x0003a856) query_popup_data_pane_cp1_ParamLimits

0x96dc,	// (0x0003a856) query_popup_data_pane_cp1

0x956f,	// (0x0003a6e9) bg_popup_window_pane_cp10_ParamLimits

0x956f,	// (0x0003a6e9) bg_popup_window_pane_cp10

0x95a1,	// (0x0003a71b) indicator_popup_pane_ParamLimits

0x95a1,	// (0x0003a71b) indicator_popup_pane

0x95c3,	// (0x0003a73d) popup_query_code_window_t1_ParamLimits

0x95c3,	// (0x0003a73d) popup_query_code_window_t1

0x95dd,	// (0x0003a757) popup_query_code_window_t2_ParamLimits

0x95dd,	// (0x0003a757) popup_query_code_window_t2

0x9626,	// (0x0003a7a0) popup_query_code_window_t3_ParamLimits

0x9626,	// (0x0003a7a0) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x000409a8) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x000409a8) popup_query_code_window_t

0x9655,	// (0x0003a7cf) query_popup_pane_ParamLimits

0x9655,	// (0x0003a7cf) query_popup_pane

0xf16d,	// (0x000402e7) bg_popup_window_pane_cp15_ParamLimits

0xf16d,	// (0x000402e7) bg_popup_window_pane_cp15

0xf18d,	// (0x00040307) indicator_popup_pane_cp1_ParamLimits

0xf18d,	// (0x00040307) indicator_popup_pane_cp1

0xf1a0,	// (0x0004031a) indicator_popup_pane_cp2_ParamLimits

0xf1a0,	// (0x0004031a) indicator_popup_pane_cp2

0xf1bb,	// (0x00040335) popup_query_data_code_window_g1_ParamLimits

0xf1bb,	// (0x00040335) popup_query_data_code_window_g1

0xf1ce,	// (0x00040348) popup_query_data_code_window_t1_ParamLimits

0xf1ce,	// (0x00040348) popup_query_data_code_window_t1

0xf1e0,	// (0x0004035a) popup_query_data_code_window_t2_ParamLimits

0xf1e0,	// (0x0004035a) popup_query_data_code_window_t2

0xf1f2,	// (0x0004036c) popup_query_data_code_window_t3_ParamLimits

0xf1f2,	// (0x0004036c) popup_query_data_code_window_t3

0xf208,	// (0x00040382) popup_query_data_code_window_t4_ParamLimits

0xf208,	// (0x00040382) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00040704) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00040704) popup_query_data_code_window_t

0x702c,	// (0x000381a6) list_single_midp_graphic_pane_g3

0xf222,	// (0x0004039c) query_popup_data_pane_cp2_ParamLimits

0xf235,	// (0x000403af) query_popup_pane_cp2_ParamLimits

0xf235,	// (0x000403af) query_popup_pane_cp2

0xe569,	// (0x0003f6e3) bg_popup_window_pane_cp11

0x9567,	// (0x0003a6e1) heading_pane_cp5

0xf2cb,	// (0x00040445) listscroll_popup_info_pane

0xe569,	// (0x0003f6e3) input_focus_pane_cp3

0xf250,	// (0x000403ca) query_popup_pane_t1

0xf25e,	// (0x000403d8) list_popup_info_pane_ParamLimits

0xf25e,	// (0x000403d8) list_popup_info_pane

0xf26d,	// (0x000403e7) listscroll_popup_info_pane_g1

0xf275,	// (0x000403ef) scroll_pane_cp7

0xf27f,	// (0x000403f9) popup_info_list_pane_t1_ParamLimits

0xf27f,	// (0x000403f9) popup_info_list_pane_t1

0xf299,	// (0x00040413) popup_info_list_pane_t2_ParamLimits

0xf299,	// (0x00040413) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004070d) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004070d) popup_info_list_pane_t

0xe569,	// (0x0003f6e3) bg_popup_window_pane_cp12

0xa946,	// (0x0003bac0) find_popup_pane

0xef84,	// (0x000400fe) bg_popup_window_pane_cp3

0xf2b3,	// (0x0004042d) heading_pane_cp3

0xf2bf,	// (0x00040439) listscroll_popup_graphic_pane

0xe569,	// (0x0003f6e3) bg_popup_window_pane_cp4

0x5a57,	// (0x00036bd1) heading_pane_cp4

0xf2cb,	// (0x00040445) listscroll_popup_colour_pane

0x5a61,	// (0x00036bdb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5a61,	// (0x00036bdb) cell_large_graphic_colour_none_popup_pane

0x5a75,	// (0x00036bef) grid_large_graphic_colour_popup_pane_ParamLimits

0x5a75,	// (0x00036bef) grid_large_graphic_colour_popup_pane

0x5aa1,	// (0x00036c1b) listscroll_popup_colour_pane_g1_ParamLimits

0x5aa1,	// (0x00036c1b) listscroll_popup_colour_pane_g1

0x5ab8,	// (0x00036c32) listscroll_popup_colour_pane_g2_ParamLimits

0x5ab8,	// (0x00036c32) listscroll_popup_colour_pane_g2

0x5acf,	// (0x00036c49) listscroll_popup_colour_pane_g3_ParamLimits

0x5acf,	// (0x00036c49) listscroll_popup_colour_pane_g3

0x5adf,	// (0x00036c59) listscroll_popup_colour_pane_g4_ParamLimits

0x5adf,	// (0x00036c59) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00040712) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00040712) listscroll_popup_colour_pane_g

0xf2d3,	// (0x0004044d) scroll_pane_cp6_ParamLimits

0xf2d3,	// (0x0004044d) scroll_pane_cp6

0x5af3,	// (0x00036c6d) cell_large_graphic_colour_popup_pane_ParamLimits

0x5af3,	// (0x00036c6d) cell_large_graphic_colour_popup_pane

0xf2e5,	// (0x0004045f) cell_large_graphic_colour_none_popup_pane_t1

0xe569,	// (0x0003f6e3) grid_highlight_pane_cp5

0xf2f4,	// (0x0004046e) cell_large_graphic_colour_popup_pane_g1

0xf2fc,	// (0x00040476) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004071b) cell_large_graphic_colour_popup_pane_g

0xf304,	// (0x0004047e) cell_large_graphic_colour_popup_pane_g2_copy1

0xf30d,	// (0x00040487) grid_highlight_pane_cp4

0xf315,	// (0x0004048f) bg_popup_window_pane_cp8_ParamLimits

0xf315,	// (0x0004048f) bg_popup_window_pane_cp8

0xf330,	// (0x000404aa) popup_snote_single_text_window_g1_ParamLimits

0xf330,	// (0x000404aa) popup_snote_single_text_window_g1

0xf342,	// (0x000404bc) popup_snote_single_text_window_t1_ParamLimits

0xf342,	// (0x000404bc) popup_snote_single_text_window_t1

0xf355,	// (0x000404cf) popup_snote_single_text_window_t2_ParamLimits

0xf355,	// (0x000404cf) popup_snote_single_text_window_t2

0xf368,	// (0x000404e2) popup_snote_single_text_window_t3_ParamLimits

0xf368,	// (0x000404e2) popup_snote_single_text_window_t3

0xf3a1,	// (0x0004051b) popup_snote_single_text_window_t4_ParamLimits

0xf3a1,	// (0x0004051b) popup_snote_single_text_window_t4

0xf3d5,	// (0x0004054f) popup_snote_single_text_window_t5_ParamLimits

0xf3d5,	// (0x0004054f) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00040720) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00040720) popup_snote_single_text_window_t

0xf404,	// (0x0004057e) bg_popup_window_pane_cp9_ParamLimits

0xf404,	// (0x0004057e) bg_popup_window_pane_cp9

0xf330,	// (0x000404aa) popup_snote_single_graphic_window_g1_ParamLimits

0xf330,	// (0x000404aa) popup_snote_single_graphic_window_g1

0xf412,	// (0x0004058c) popup_snote_single_graphic_window_g2_ParamLimits

0xf412,	// (0x0004058c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004072b) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004072b) popup_snote_single_graphic_window_g

0xf41e,	// (0x00040598) popup_snote_single_graphic_window_t1_ParamLimits

0xf41e,	// (0x00040598) popup_snote_single_graphic_window_t1

0xf431,	// (0x000405ab) popup_snote_single_graphic_window_t2_ParamLimits

0xf431,	// (0x000405ab) popup_snote_single_graphic_window_t2

0xf444,	// (0x000405be) popup_snote_single_graphic_window_t3_ParamLimits

0xf444,	// (0x000405be) popup_snote_single_graphic_window_t3

0xf47d,	// (0x000405f7) popup_snote_single_graphic_window_t4_ParamLimits

0xf47d,	// (0x000405f7) popup_snote_single_graphic_window_t4

0xf4b1,	// (0x0004062b) popup_snote_single_graphic_window_t5_ParamLimits

0xf4b1,	// (0x0004062b) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00040730) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00040730) popup_snote_single_graphic_window_t

0xa884,	// (0x0003b9fe) grid_graphic_popup_pane_ParamLimits

0xa884,	// (0x0003b9fe) grid_graphic_popup_pane

0xa8b2,	// (0x0003ba2c) listscroll_popup_graphic_pane_g1_ParamLimits

0xa8b2,	// (0x0003ba2c) listscroll_popup_graphic_pane_g1

0xa8c6,	// (0x0003ba40) listscroll_popup_graphic_pane_g2_ParamLimits

0xa8c6,	// (0x0003ba40) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x00040b25) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x00040b25) listscroll_popup_graphic_pane_g

0xa8da,	// (0x0003ba54) scroll_pane_cp5

0xa82c,	// (0x0003b9a6) cell_graphic_popup_pane_ParamLimits

0xa82c,	// (0x0003b9a6) cell_graphic_popup_pane

0xa80d,	// (0x0003b987) cell_graphic_popup_pane_g1

0xa815,	// (0x0003b98f) cell_graphic_popup_pane_g2

0xf304,	// (0x0004047e) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00040b1e) cell_graphic_popup_pane_g

0xa81e,	// (0x0003b998) cell_graphic_popup_pane_t2

0xf30d,	// (0x00040487) grid_highlight_pane_cp3

0xf4f2,	// (0x0004066c) list_gen_pane_ParamLimits

0xf4f2,	// (0x0004066c) list_gen_pane

0xf51a,	// (0x00040694) scroll_pane

0xa765,	// (0x0003b8df) bg_list_pane_g1_ParamLimits

0xa765,	// (0x0003b8df) bg_list_pane_g1

0xa782,	// (0x0003b8fc) bg_list_pane_g2_ParamLimits

0xa782,	// (0x0003b8fc) bg_list_pane_g2

0xa797,	// (0x0003b911) bg_list_pane_g3_ParamLimits

0xa797,	// (0x0003b911) bg_list_pane_g3

0xa7ab,	// (0x0003b925) bg_list_pane_g4_ParamLimits

0xa7ab,	// (0x0003b925) bg_list_pane_g4

0xa7bf,	// (0x0003b939) bg_list_pane_g5_ParamLimits

0xa7bf,	// (0x0003b939) bg_list_pane_g5

0x0004,

0xf999,	// (0x00040b13) bg_list_pane_g_ParamLimits

0xf999,	// (0x00040b13) bg_list_pane_g

0x73f7,	// (0x00038571) list_double2_graphic_large_graphic_pane_ParamLimits

0x73f7,	// (0x00038571) list_double2_graphic_large_graphic_pane

0x73f7,	// (0x00038571) list_double2_graphic_pane_ParamLimits

0x73f7,	// (0x00038571) list_double2_graphic_pane

0x73f7,	// (0x00038571) list_double2_large_graphic_pane_ParamLimits

0x73f7,	// (0x00038571) list_double2_large_graphic_pane

0x73f7,	// (0x00038571) list_double2_pane_ParamLimits

0x73f7,	// (0x00038571) list_double2_pane

0x73f7,	// (0x00038571) list_double_graphic_heading_pane_ParamLimits

0x73f7,	// (0x00038571) list_double_graphic_heading_pane

0x73f7,	// (0x00038571) list_double_graphic_pane_ParamLimits

0x73f7,	// (0x00038571) list_double_graphic_pane

0x73f7,	// (0x00038571) list_double_heading_pane_ParamLimits

0x73f7,	// (0x00038571) list_double_heading_pane

0x73f7,	// (0x00038571) list_double_large_graphic_pane_ParamLimits

0x73f7,	// (0x00038571) list_double_large_graphic_pane

0x73f7,	// (0x00038571) list_double_number_pane_ParamLimits

0x73f7,	// (0x00038571) list_double_number_pane

0x73f7,	// (0x00038571) list_double_pane_ParamLimits

0x73f7,	// (0x00038571) list_double_pane

0x73f7,	// (0x00038571) list_double_time_pane_ParamLimits

0x73f7,	// (0x00038571) list_double_time_pane

0x73f7,	// (0x00038571) list_setting_number_pane_ParamLimits

0x73f7,	// (0x00038571) list_setting_number_pane

0x73f7,	// (0x00038571) list_setting_pane_ParamLimits

0x73f7,	// (0x00038571) list_setting_pane

0xa721,	// (0x0003b89b) list_single_2graphic_pane_ParamLimits

0xa721,	// (0x0003b89b) list_single_2graphic_pane

0xa721,	// (0x0003b89b) list_single_graphic_heading_pane_ParamLimits

0xa721,	// (0x0003b89b) list_single_graphic_heading_pane

0xa721,	// (0x0003b89b) list_single_graphic_pane_ParamLimits

0xa721,	// (0x0003b89b) list_single_graphic_pane

0xa721,	// (0x0003b89b) list_single_heading_pane_ParamLimits

0xa721,	// (0x0003b89b) list_single_heading_pane

0x7421,	// (0x0003859b) list_single_large_graphic_pane_ParamLimits

0x7421,	// (0x0003859b) list_single_large_graphic_pane

0xa721,	// (0x0003b89b) list_single_number_heading_pane_ParamLimits

0xa721,	// (0x0003b89b) list_single_number_heading_pane

0xa721,	// (0x0003b89b) list_single_number_pane_ParamLimits

0xa721,	// (0x0003b89b) list_single_number_pane

0xa721,	// (0x0003b89b) list_single_pane_ParamLimits

0xa721,	// (0x0003b89b) list_single_pane

0xe569,	// (0x0003f6e3) list_highlight_pane_cp1

0x443e,	// (0x000355b8) list_single_pane_g1_ParamLimits

0x443e,	// (0x000355b8) list_single_pane_g1

0x5b2e,	// (0x00036ca8) list_single_pane_g2_ParamLimits

0x5b2e,	// (0x00036ca8) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00040742) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00040742) list_single_pane_g

0x73e1,	// (0x0003855b) list_single_pane_t1_ParamLimits

0x73e1,	// (0x0003855b) list_single_pane_t1

0x443e,	// (0x000355b8) list_single_number_pane_g1_ParamLimits

0x443e,	// (0x000355b8) list_single_number_pane_g1

0x5b2e,	// (0x00036ca8) list_single_number_pane_g2_ParamLimits

0x5b2e,	// (0x00036ca8) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00040742) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00040742) list_single_number_pane_g

0x7313,	// (0x0003848d) list_single_number_pane_t1_ParamLimits

0x7313,	// (0x0003848d) list_single_number_pane_t1

0x7329,	// (0x000384a3) list_single_number_pane_t2_ParamLimits

0x7329,	// (0x000384a3) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x00040ad4) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x00040ad4) list_single_number_pane_t

0x5b22,	// (0x00036c9c) list_single_graphic_pane_g1_ParamLimits

0x5b22,	// (0x00036c9c) list_single_graphic_pane_g1

0x443e,	// (0x000355b8) list_single_graphic_pane_g2_ParamLimits

0x443e,	// (0x000355b8) list_single_graphic_pane_g2

0x5b2e,	// (0x00036ca8) list_single_graphic_pane_g3_ParamLimits

0x5b2e,	// (0x00036ca8) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004073b) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004073b) list_single_graphic_pane_g

0x5b3a,	// (0x00036cb4) list_single_graphic_pane_t1_ParamLimits

0x5b3a,	// (0x00036cb4) list_single_graphic_pane_t1

0x443e,	// (0x000355b8) list_single_heading_pane_g1_ParamLimits

0x443e,	// (0x000355b8) list_single_heading_pane_g1

0x5b2e,	// (0x00036ca8) list_single_heading_pane_g2_ParamLimits

0x5b2e,	// (0x00036ca8) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00040742) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00040742) list_single_heading_pane_g

0x5b50,	// (0x00036cca) list_single_heading_pane_t1_ParamLimits

0x5b50,	// (0x00036cca) list_single_heading_pane_t1

0x5b66,	// (0x00036ce0) list_single_heading_pane_t2_ParamLimits

0x5b66,	// (0x00036ce0) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00040747) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00040747) list_single_heading_pane_t

0x443e,	// (0x000355b8) list_single_number_heading_pane_g1_ParamLimits

0x443e,	// (0x000355b8) list_single_number_heading_pane_g1

0x5b2e,	// (0x00036ca8) list_single_number_heading_pane_g2_ParamLimits

0x5b2e,	// (0x00036ca8) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00040742) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00040742) list_single_number_heading_pane_g

0x5b50,	// (0x00036cca) list_single_number_heading_pane_t1_ParamLimits

0x5b50,	// (0x00036cca) list_single_number_heading_pane_t1

0x5b78,	// (0x00036cf2) list_single_number_heading_pane_t2_ParamLimits

0x5b78,	// (0x00036cf2) list_single_number_heading_pane_t2

0x5b8a,	// (0x00036d04) list_single_number_heading_pane_t3_ParamLimits

0x5b8a,	// (0x00036d04) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0004074c) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0004074c) list_single_number_heading_pane_t

0x5b9c,	// (0x00036d16) list_single_graphic_heading_pane_g1_ParamLimits

0x5b9c,	// (0x00036d16) list_single_graphic_heading_pane_g1

0x5ba8,	// (0x00036d22) list_single_graphic_heading_pane_g4_ParamLimits

0x5ba8,	// (0x00036d22) list_single_graphic_heading_pane_g4

0x5b2e,	// (0x00036ca8) list_single_graphic_heading_pane_g5_ParamLimits

0x5b2e,	// (0x00036ca8) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00040753) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00040753) list_single_graphic_heading_pane_g

0x5b50,	// (0x00036cca) list_single_graphic_heading_pane_t1_ParamLimits

0x5b50,	// (0x00036cca) list_single_graphic_heading_pane_t1

0x5bb9,	// (0x00036d33) list_single_graphic_heading_pane_t2_ParamLimits

0x5bb9,	// (0x00036d33) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0004075a) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0004075a) list_single_graphic_heading_pane_t

0x5bcb,	// (0x00036d45) list_single_large_graphic_pane_g1_ParamLimits

0x5bcb,	// (0x00036d45) list_single_large_graphic_pane_g1

0x443e,	// (0x000355b8) list_single_large_graphic_pane_g2_ParamLimits

0x443e,	// (0x000355b8) list_single_large_graphic_pane_g2

0x5b2e,	// (0x00036ca8) list_single_large_graphic_pane_g3_ParamLimits

0x5b2e,	// (0x00036ca8) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0004075f) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0004075f) list_single_large_graphic_pane_g

0x9710,	// (0x0003a88a) wait_border_pane_g2_copy1

0x5bd7,	// (0x00036d51) list_single_large_graphic_pane_g4_cp2

0x5b50,	// (0x00036cca) list_single_large_graphic_pane_t1_ParamLimits

0x5b50,	// (0x00036cca) list_single_large_graphic_pane_t1

0x5bdf,	// (0x00036d59) list_double_pane_g1_ParamLimits

0x5bdf,	// (0x00036d59) list_double_pane_g1

0x5beb,	// (0x00036d65) list_double_pane_g2_ParamLimits

0x5beb,	// (0x00036d65) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00040766) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00040766) list_double_pane_g

0x5bf7,	// (0x00036d71) list_double_pane_t1_ParamLimits

0x5bf7,	// (0x00036d71) list_double_pane_t1

0x5c0d,	// (0x00036d87) list_double_pane_t2_ParamLimits

0x5c0d,	// (0x00036d87) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0004076b) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0004076b) list_double_pane_t

0x5c1f,	// (0x00036d99) list_double2_pane_g1_ParamLimits

0x5c1f,	// (0x00036d99) list_double2_pane_g1

0x5beb,	// (0x00036d65) list_double2_pane_g2_ParamLimits

0x5beb,	// (0x00036d65) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00040770) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00040770) list_double2_pane_g

0x5bf7,	// (0x00036d71) list_double2_pane_t1_ParamLimits

0x5bf7,	// (0x00036d71) list_double2_pane_t1

0x5c30,	// (0x00036daa) list_double2_pane_t2_ParamLimits

0x5c30,	// (0x00036daa) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00040775) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00040775) list_double2_pane_t

0x5bdf,	// (0x00036d59) list_double_number_pane_g1_ParamLimits

0x5bdf,	// (0x00036d59) list_double_number_pane_g1

0x5beb,	// (0x00036d65) list_double_number_pane_g2_ParamLimits

0x5beb,	// (0x00036d65) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00040766) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00040766) list_double_number_pane_g

0x5c42,	// (0x00036dbc) list_double_number_pane_t1_ParamLimits

0x5c42,	// (0x00036dbc) list_double_number_pane_t1

0x5c54,	// (0x00036dce) list_double_number_pane_t2_ParamLimits

0x5c54,	// (0x00036dce) list_double_number_pane_t2

0x5c6a,	// (0x00036de4) list_double_number_pane_t3_ParamLimits

0x5c6a,	// (0x00036de4) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0004077a) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0004077a) list_double_number_pane_t

0x5c7c,	// (0x00036df6) list_double_graphic_pane_g1_ParamLimits

0x5c7c,	// (0x00036df6) list_double_graphic_pane_g1

0x5c88,	// (0x00036e02) list_double_graphic_pane_g2_ParamLimits

0x5c88,	// (0x00036e02) list_double_graphic_pane_g2

0x5c97,	// (0x00036e11) list_double_graphic_pane_g3_ParamLimits

0x5c97,	// (0x00036e11) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00040781) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00040781) list_double_graphic_pane_g

0x5caf,	// (0x00036e29) list_double_graphic_pane_t1_ParamLimits

0x5caf,	// (0x00036e29) list_double_graphic_pane_t1

0x5cc5,	// (0x00036e3f) list_double_graphic_pane_t2_ParamLimits

0x5cc5,	// (0x00036e3f) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0004078a) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0004078a) list_double_graphic_pane_t

0x5c7c,	// (0x00036df6) list_double2_graphic_pane_g1_ParamLimits

0x5c7c,	// (0x00036df6) list_double2_graphic_pane_g1

0x5cd7,	// (0x00036e51) list_double2_graphic_pane_g2_ParamLimits

0x5cd7,	// (0x00036e51) list_double2_graphic_pane_g2

0x5ce3,	// (0x00036e5d) list_double2_graphic_pane_g3_ParamLimits

0x5ce3,	// (0x00036e5d) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0004078f) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0004078f) list_double2_graphic_pane_g

0x5c54,	// (0x00036dce) list_double2_graphic_pane_t1_ParamLimits

0x5c54,	// (0x00036dce) list_double2_graphic_pane_t1

0x5cef,	// (0x00036e69) list_double2_graphic_pane_t2_ParamLimits

0x5cef,	// (0x00036e69) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00040796) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00040796) list_double2_graphic_pane_t

0x5d01,	// (0x00036e7b) list_double_large_graphic_pane_g1_ParamLimits

0x5d01,	// (0x00036e7b) list_double_large_graphic_pane_g1

0x5c1f,	// (0x00036d99) list_double_large_graphic_pane_g2_ParamLimits

0x5c1f,	// (0x00036d99) list_double_large_graphic_pane_g2

0x5beb,	// (0x00036d65) list_double_large_graphic_pane_g3_ParamLimits

0x5beb,	// (0x00036d65) list_double_large_graphic_pane_g3

0x5d2c,	// (0x00036ea6) list_double_large_graphic_pane_g4_ParamLimits

0x5d2c,	// (0x00036ea6) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0004079b) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0004079b) list_double_large_graphic_pane_g

0x5d3f,	// (0x00036eb9) list_double_large_graphic_pane_t1_ParamLimits

0x5d3f,	// (0x00036eb9) list_double_large_graphic_pane_t1

0x5d58,	// (0x00036ed2) list_double_large_graphic_pane_t2_ParamLimits

0x5d58,	// (0x00036ed2) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x000407a6) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x000407a6) list_double_large_graphic_pane_t

0x5d6a,	// (0x00036ee4) list_double2_large_graphic_pane_g1_ParamLimits

0x5d6a,	// (0x00036ee4) list_double2_large_graphic_pane_g1

0x5c1f,	// (0x00036d99) list_double2_large_graphic_pane_g2_ParamLimits

0x5c1f,	// (0x00036d99) list_double2_large_graphic_pane_g2

0x5beb,	// (0x00036d65) list_double2_large_graphic_pane_g3_ParamLimits

0x5beb,	// (0x00036d65) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x000407ab) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x000407ab) list_double2_large_graphic_pane_g

0x5d76,	// (0x00036ef0) list_double2_large_graphic_pane_t1_ParamLimits

0x5d76,	// (0x00036ef0) list_double2_large_graphic_pane_t1

0x5d8c,	// (0x00036f06) list_double2_large_graphic_pane_t2_ParamLimits

0x5d8c,	// (0x00036f06) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x000407b2) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x000407b2) list_double2_large_graphic_pane_t

0x5d9e,	// (0x00036f18) list_double_heading_pane_g1_ParamLimits

0x5d9e,	// (0x00036f18) list_double_heading_pane_g1

0x5daf,	// (0x00036f29) list_double_heading_pane_g2_ParamLimits

0x5daf,	// (0x00036f29) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x000407b7) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x000407b7) list_double_heading_pane_g

0x5dbb,	// (0x00036f35) list_double_heading_pane_t1_ParamLimits

0x5dbb,	// (0x00036f35) list_double_heading_pane_t1

0x5dd1,	// (0x00036f4b) list_double_heading_pane_t2_ParamLimits

0x5dd1,	// (0x00036f4b) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x000407bc) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x000407bc) list_double_heading_pane_t

0x5de3,	// (0x00036f5d) list_double_graphic_heading_pane_g1_ParamLimits

0x5de3,	// (0x00036f5d) list_double_graphic_heading_pane_g1

0x5d9e,	// (0x00036f18) list_double_graphic_heading_pane_g2_ParamLimits

0x5d9e,	// (0x00036f18) list_double_graphic_heading_pane_g2

0x5daf,	// (0x00036f29) list_double_graphic_heading_pane_g3_ParamLimits

0x5daf,	// (0x00036f29) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x000407c1) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x000407c1) list_double_graphic_heading_pane_g

0x5def,	// (0x00036f69) list_double_graphic_heading_pane_t1_ParamLimits

0x5def,	// (0x00036f69) list_double_graphic_heading_pane_t1

0x5e05,	// (0x00036f7f) list_double_graphic_heading_pane_t2_ParamLimits

0x5e05,	// (0x00036f7f) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x000407c8) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x000407c8) list_double_graphic_heading_pane_t

0x5c1f,	// (0x00036d99) list_double_time_pane_g1_ParamLimits

0x5c1f,	// (0x00036d99) list_double_time_pane_g1

0x5beb,	// (0x00036d65) list_double_time_pane_g2_ParamLimits

0x5beb,	// (0x00036d65) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x00040770) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x00040770) list_double_time_pane_g

0x5d76,	// (0x00036ef0) list_double_time_pane_t1_ParamLimits

0x5d76,	// (0x00036ef0) list_double_time_pane_t1

0x5e17,	// (0x00036f91) list_double_time_pane_t2_ParamLimits

0x5e17,	// (0x00036f91) list_double_time_pane_t2

0x5e29,	// (0x00036fa3) list_double_time_pane_t3_ParamLimits

0x5e29,	// (0x00036fa3) list_double_time_pane_t3

0x5e3b,	// (0x00036fb5) list_double_time_pane_t4_ParamLimits

0x5e3b,	// (0x00036fb5) list_double_time_pane_t4

0x0003,

0xf653,	// (0x000407cd) list_double_time_pane_t_ParamLimits

0xf653,	// (0x000407cd) list_double_time_pane_t

0x5e4d,	// (0x00036fc7) list_setting_pane_g1_ParamLimits

0x5e4d,	// (0x00036fc7) list_setting_pane_g1

0x5e59,	// (0x00036fd3) list_setting_pane_g2_ParamLimits

0x5e59,	// (0x00036fd3) list_setting_pane_g2

0x0001,

0xf65c,	// (0x000407d6) list_setting_pane_g_ParamLimits

0xf65c,	// (0x000407d6) list_setting_pane_g

0x5e65,	// (0x00036fdf) list_setting_pane_t1_ParamLimits

0x5e65,	// (0x00036fdf) list_setting_pane_t1

0x5e7f,	// (0x00036ff9) list_setting_pane_t2_ParamLimits

0x5e7f,	// (0x00036ff9) list_setting_pane_t2

0x0002,

0xf661,	// (0x000407db) list_setting_pane_t_ParamLimits

0xf661,	// (0x000407db) list_setting_pane_t

0x5ebe,	// (0x00037038) set_value_pane_cp_ParamLimits

0x5ebe,	// (0x00037038) set_value_pane_cp

0x5ecc,	// (0x00037046) list_setting_number_pane_g1_ParamLimits

0x5ecc,	// (0x00037046) list_setting_number_pane_g1

0x5ed8,	// (0x00037052) list_setting_number_pane_g2_ParamLimits

0x5ed8,	// (0x00037052) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x000407e2) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x000407e2) list_setting_number_pane_g

0x5ee4,	// (0x0003705e) list_setting_number_pane_t1_ParamLimits

0x5ee4,	// (0x0003705e) list_setting_number_pane_t1

0x5efd,	// (0x00037077) list_setting_number_pane_t2_ParamLimits

0x5efd,	// (0x00037077) list_setting_number_pane_t2

0x5f17,	// (0x00037091) list_setting_number_pane_t3_ParamLimits

0x5f17,	// (0x00037091) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x000407e7) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x000407e7) list_setting_number_pane_t

0x5ebe,	// (0x00037038) set_value_pane_ParamLimits

0x5ebe,	// (0x00037038) set_value_pane

0x1e54,	// (0x00032fce) bg_set_opt_pane_ParamLimits

0x1e54,	// (0x00032fce) bg_set_opt_pane

0x3cb6,	// (0x00034e30) set_value_pane_t1

0x1e75,	// (0x00032fef) slider_set_pane_cp3

0x1e7e,	// (0x00032ff8) volume_small_pane_cp

0x1e87,	// (0x00033001) list_form_gen_pane

0x1e90,	// (0x0003300a) scroll_pane_cp8

0x5f5a,	// (0x000370d4) form_field_data_pane_ParamLimits

0x5f5a,	// (0x000370d4) form_field_data_pane

0x5f78,	// (0x000370f2) form_field_data_wide_pane_ParamLimits

0x5f78,	// (0x000370f2) form_field_data_wide_pane

0x3cd4,	// (0x00034e4e) form_field_popup_pane_ParamLimits

0x3cd4,	// (0x00034e4e) form_field_popup_pane

0x5f9d,	// (0x00037117) form_field_popup_wide_pane_ParamLimits

0x5f9d,	// (0x00037117) form_field_popup_wide_pane

0x3cf6,	// (0x00034e70) form_field_slider_pane_ParamLimits

0x3cf6,	// (0x00034e70) form_field_slider_pane

0x3d09,	// (0x00034e83) form_field_slider_wide_pane_ParamLimits

0x3d09,	// (0x00034e83) form_field_slider_wide_pane

0x1ea1,	// (0x0003301b) data_form_pane

0x5fc8,	// (0x00037142) form_field_data_pane_t1

0x1ead,	// (0x00033027) input_focus_pane

0x3d1c,	// (0x00034e96) data_form_wide_pane

0x3d39,	// (0x00034eb3) form_field_data_wide_pane_t1

0xf322,	// (0x0004049c) input_focus_pane_cp6

0x5fe2,	// (0x0003715c) form_field_popup_pane_t1

0x1ead,	// (0x00033027) input_focus_pane_cp7

0x1edb,	// (0x00033055) list_form_pane

0x3d63,	// (0x00034edd) form_field_popup_wide_pane_t1

0x1ead,	// (0x00033027) input_focus_pane_cp8

0x1ee7,	// (0x00033061) list_form_wide_pane

0x6004,	// (0x0003717e) form_field_slider_pane_t1_ParamLimits

0x6004,	// (0x0003717e) form_field_slider_pane_t1

0x601c,	// (0x00037196) form_field_slider_pane_t2_ParamLimits

0x601c,	// (0x00037196) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x000407f7) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x000407f7) form_field_slider_pane_t

0xf0b7,	// (0x00040231) input_focus_pane_cp9_ParamLimits

0xf0b7,	// (0x00040231) input_focus_pane_cp9

0x6031,	// (0x000371ab) slider_cont_pane_ParamLimits

0x6031,	// (0x000371ab) slider_cont_pane

0x1ef6,	// (0x00033070) form_field_slider_wide_pane_t1_ParamLimits

0x1ef6,	// (0x00033070) form_field_slider_wide_pane_t1

0x3d78,	// (0x00034ef2) form_field_slider_wide_pane_t2_ParamLimits

0x3d78,	// (0x00034ef2) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x000407fc) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x000407fc) form_field_slider_wide_pane_t

0xf0b7,	// (0x00040231) input_focus_pane_cp10_ParamLimits

0xf0b7,	// (0x00040231) input_focus_pane_cp10

0x6045,	// (0x000371bf) slider_cont_pane_cp1_ParamLimits

0x6045,	// (0x000371bf) slider_cont_pane_cp1

0x6059,	// (0x000371d3) slider_form_pane_cp

0x1f08,	// (0x00033082) input_focus_pane_g1

0x1f10,	// (0x0003308a) input_focus_pane_g2

0x1f18,	// (0x00033092) input_focus_pane_g3

0x1f20,	// (0x0003309a) input_focus_pane_g4

0x1f28,	// (0x000330a2) input_focus_pane_g5

0x1f30,	// (0x000330aa) input_focus_pane_g6

0x1f38,	// (0x000330b2) input_focus_pane_g7

0x1f40,	// (0x000330ba) input_focus_pane_g8

0x1f48,	// (0x000330c2) input_focus_pane_g9

0xe55f,	// (0x0003f6d9) input_focus_pane_g10

0x0009,

0xf687,	// (0x00040801) input_focus_pane_g

0x9719,	// (0x0003a893) wait_border_pane_g3_copy1

0x6061,	// (0x000371db) data_form_pane_t1

0xe55f,	// (0x0003f6d9) wait_anim_pane_g1_copy1

0x73b3,	// (0x0003852d) data_form_wide_pane_t1

0x607e,	// (0x000371f8) list_form_graphic_pane_cp_ParamLimits

0x607e,	// (0x000371f8) list_form_graphic_pane_cp

0xa678,	// (0x0003b7f2) slider_form_pane_g1

0xa681,	// (0x0003b7fb) slider_form_pane_g2

0x0006,

0xf98a,	// (0x00040b04) slider_form_pane_g

0x3d8a,	// (0x00034f04) list_form_graphic_pane_ParamLimits

0x3d8a,	// (0x00034f04) list_form_graphic_pane

0x3d9c,	// (0x00034f16) list_form_graphic_pane_g1

0x3da4,	// (0x00034f1e) list_form_graphic_pane_t1_ParamLimits

0x3da4,	// (0x00034f1e) list_form_graphic_pane_t1

0xef84,	// (0x000400fe) list_highlight_pane_cp5_ParamLimits

0xef84,	// (0x000400fe) list_highlight_pane_cp5

0x6093,	// (0x0003720d) find_pane_g1

0x1f50,	// (0x000330ca) input_find_pane

0x609c,	// (0x00037216) input_find_pane_g1_ParamLimits

0x609c,	// (0x00037216) input_find_pane_g1

0x60a8,	// (0x00037222) input_find_pane_t1_ParamLimits

0x60a8,	// (0x00037222) input_find_pane_t1

0x60bd,	// (0x00037237) input_find_pane_t2_ParamLimits

0x60bd,	// (0x00037237) input_find_pane_t2

0x0001,

0xf69c,	// (0x00040816) input_find_pane_t_ParamLimits

0xf69c,	// (0x00040816) input_find_pane_t

0x1f59,	// (0x000330d3) input_focus_pane_cp5_ParamLimits

0x1f59,	// (0x000330d3) input_focus_pane_cp5

0x1f67,	// (0x000330e1) bg_popup_window_pane_cp2_ParamLimits

0x1f67,	// (0x000330e1) bg_popup_window_pane_cp2

0x1f74,	// (0x000330ee) listscroll_menu_pane_ParamLimits

0x1f74,	// (0x000330ee) listscroll_menu_pane

0x60de,	// (0x00037258) popup_submenu_window_ParamLimits

0x60de,	// (0x00037258) popup_submenu_window

0x1f80,	// (0x000330fa) find_popup_pane_g1

0x1f88,	// (0x00033102) input_popup_find_pane_cp

0x1f59,	// (0x000330d3) input_focus_pane_cp4_ParamLimits

0x1f59,	// (0x000330d3) input_focus_pane_cp4

0x1f92,	// (0x0003310c) input_popup_find_pane_t1_ParamLimits

0x1f92,	// (0x0003310c) input_popup_find_pane_t1

0xe569,	// (0x0003f6e3) bg_popup_sub_pane_cp

0x1fc0,	// (0x0003313a) listscroll_popup_sub_pane

0x1fc8,	// (0x00033142) list_submenu_pane_ParamLimits

0x1fc8,	// (0x00033142) list_submenu_pane

0x1fd9,	// (0x00033153) scroll_pane_cp4

0x1fe1,	// (0x0003315b) list_single_popup_submenu_pane_ParamLimits

0x1fe1,	// (0x0003315b) list_single_popup_submenu_pane

0x1ff6,	// (0x00033170) list_single_popup_submenu_pane_g1

0x1ffe,	// (0x00033178) list_single_popup_submenu_pane_t1_ParamLimits

0x1ffe,	// (0x00033178) list_single_popup_submenu_pane_t1

0xef84,	// (0x000400fe) bg_active_tab_pane_cp1_ParamLimits

0xef84,	// (0x000400fe) bg_active_tab_pane_cp1

0x611c,	// (0x00037296) tabs_2_active_pane_g1

0x6124,	// (0x0003729e) tabs_2_active_pane_t1

0xef84,	// (0x000400fe) bg_passive_tab_pane_cp1_ParamLimits

0xef84,	// (0x000400fe) bg_passive_tab_pane_cp1

0x611c,	// (0x00037296) tabs_2_passive_pane_g1

0x6124,	// (0x0003729e) tabs_2_passive_pane_t1

0x273f,	// (0x000338b9) bg_active_tab_pane_cp4

0x6136,	// (0x000372b0) tabs_2_long_active_pane_t1

0x6149,	// (0x000372c3) bg_passive_tab_pane_cp4

0x7034,	// (0x000381ae) list_single_midp_graphic_pane_g4_ParamLimits

0x273f,	// (0x000338b9) bg_active_tab_pane_cp5

0x6155,	// (0x000372cf) tabs_3_long_active_pane_t1

0x6149,	// (0x000372c3) bg_passive_tab_pane_cp5

0x7034,	// (0x000381ae) list_single_midp_graphic_pane_g4

0xef84,	// (0x000400fe) bg_popup_window_pane_cp13_ParamLimits

0xef84,	// (0x000400fe) bg_popup_window_pane_cp13

0x201c,	// (0x00033196) listscroll_popup_fast_pane_ParamLimits

0x201c,	// (0x00033196) listscroll_popup_fast_pane

0x202b,	// (0x000331a5) grid_popup_fast_pane_ParamLimits

0x202b,	// (0x000331a5) grid_popup_fast_pane

0x203d,	// (0x000331b7) scroll_pane_cp9_ParamLimits

0x203d,	// (0x000331b7) scroll_pane_cp9

0xbff9,	// (0x0003d173) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbff9,	// (0x0003d173) list_single_graphic_hl_pane_t1_cp2

0x2061,	// (0x000331db) input_focus_pane_cp20_ParamLimits

0x2061,	// (0x000331db) input_focus_pane_cp20

0x206f,	// (0x000331e9) query_popup_data_pane_t1_ParamLimits

0x206f,	// (0x000331e9) query_popup_data_pane_t1

0x2082,	// (0x000331fc) query_popup_data_pane_t2_ParamLimits

0x2082,	// (0x000331fc) query_popup_data_pane_t2

0x20c8,	// (0x00033242) query_popup_data_pane_t3_ParamLimits

0x20c8,	// (0x00033242) query_popup_data_pane_t3

0x2109,	// (0x00033283) query_popup_data_pane_t4_ParamLimits

0x2109,	// (0x00033283) query_popup_data_pane_t4

0x2145,	// (0x000332bf) query_popup_data_pane_t5_ParamLimits

0x2145,	// (0x000332bf) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0004081b) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0004081b) query_popup_data_pane_t

0x1f08,	// (0x00033082) bg_set_opt_pane_g1

0x1f10,	// (0x0003308a) bg_set_opt_pane_g2

0x1f18,	// (0x00033092) bg_set_opt_pane_g3

0x1f20,	// (0x0003309a) bg_set_opt_pane_g4

0x1f28,	// (0x000330a2) bg_set_opt_pane_g5

0x1f30,	// (0x000330aa) bg_set_opt_pane_g6

0x1f38,	// (0x000330b2) bg_set_opt_pane_g7

0x1f40,	// (0x000330ba) bg_set_opt_pane_g8

0x1f48,	// (0x000330c2) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00040826) bg_set_opt_pane_g

0x6655,	// (0x000377cf) control_top_pane_stacon_ParamLimits

0x6655,	// (0x000377cf) control_top_pane_stacon

0x66a8,	// (0x00037822) signal_pane_stacon_ParamLimits

0x66a8,	// (0x00037822) signal_pane_stacon

0x255c,	// (0x000336d6) stacon_top_pane_g1_ParamLimits

0x255c,	// (0x000336d6) stacon_top_pane_g1

0x66cd,	// (0x00037847) title_pane_stacon_ParamLimits

0x66cd,	// (0x00037847) title_pane_stacon

0x66f7,	// (0x00037871) uni_indicator_pane_stacon_ParamLimits

0x66f7,	// (0x00037871) uni_indicator_pane_stacon

0x670f,	// (0x00037889) battery_pane_stacon_ParamLimits

0x670f,	// (0x00037889) battery_pane_stacon

0x6753,	// (0x000378cd) control_bottom_pane_stacon_ParamLimits

0x6753,	// (0x000378cd) control_bottom_pane_stacon

0x6776,	// (0x000378f0) navi_pane_stacon_ParamLimits

0x6776,	// (0x000378f0) navi_pane_stacon

0x257e,	// (0x000336f8) stacon_bottom_pane_g1_ParamLimits

0x257e,	// (0x000336f8) stacon_bottom_pane_g1

0x6167,	// (0x000372e1) aid_levels_signal_lsc_ParamLimits

0x6167,	// (0x000372e1) aid_levels_signal_lsc

0x617e,	// (0x000372f8) signal_pane_stacon_g1_ParamLimits

0x617e,	// (0x000372f8) signal_pane_stacon_g1

0x6192,	// (0x0003730c) signal_pane_stacon_g2_ParamLimits

0x6192,	// (0x0003730c) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00040839) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00040839) signal_pane_stacon_g

0x61c7,	// (0x00037341) title_pane_stacon_t1_ParamLimits

0x61c7,	// (0x00037341) title_pane_stacon_t1

0x219d,	// (0x00033317) uni_indicator_pane_stacon_g1

0x21a7,	// (0x00033321) uni_indicator_pane_stacon_g2

0x2189,	// (0x00033303) uni_indicator_pane_stacon_g3

0x2193,	// (0x0003330d) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00040845) uni_indicator_pane_stacon_g

0x61ec,	// (0x00037366) control_top_pane_stacon_g1

0x61f4,	// (0x0003736e) control_top_pane_stacon_t1_ParamLimits

0x61f4,	// (0x0003736e) control_top_pane_stacon_t1

0x622b,	// (0x000373a5) aid_levels_battery_lsc_ParamLimits

0x622b,	// (0x000373a5) aid_levels_battery_lsc

0x6243,	// (0x000373bd) battery_pane_stacon_g1_ParamLimits

0x6243,	// (0x000373bd) battery_pane_stacon_g1

0x6256,	// (0x000373d0) battery_pane_stacon_g2_ParamLimits

0x6256,	// (0x000373d0) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0004084e) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0004084e) battery_pane_stacon_g

0x6294,	// (0x0003740e) navi_icon_pane_stacon

0x62a8,	// (0x00037422) navi_navi_pane_stacon

0x6294,	// (0x0003740e) navi_text_pane_stacon

0x61ec,	// (0x00037366) control_bottom_pane_stacon_g1

0x62be,	// (0x00037438) control_bottom_pane_stacon_t1_ParamLimits

0x62be,	// (0x00037438) control_bottom_pane_stacon_t1

0x62f5,	// (0x0003746f) grid_app_pane_ParamLimits

0x62f5,	// (0x0003746f) grid_app_pane

0x6319,	// (0x00037493) scroll_pane_cp15_ParamLimits

0x6319,	// (0x00037493) scroll_pane_cp15

0x632c,	// (0x000374a6) cell_app_pane_ParamLimits

0x632c,	// (0x000374a6) cell_app_pane

0x6358,	// (0x000374d2) cell_app_pane_g1_ParamLimits

0x6358,	// (0x000374d2) cell_app_pane_g1

0x21cb,	// (0x00033345) cell_app_pane_g2_ParamLimits

0x21cb,	// (0x00033345) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00040853) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00040853) cell_app_pane_g

0x21d7,	// (0x00033351) cell_app_pane_t1_ParamLimits

0x21d7,	// (0x00033351) cell_app_pane_t1

0x21ee,	// (0x00033368) grid_highlight_pane_ParamLimits

0x21ee,	// (0x00033368) grid_highlight_pane

0x1f08,	// (0x00033082) cell_highlight_pane_g1

0x1f10,	// (0x0003308a) cell_highlight_pane_g2

0x1f18,	// (0x00033092) cell_highlight_pane_g3

0x1f20,	// (0x0003309a) cell_highlight_pane_g4

0x1f28,	// (0x000330a2) cell_highlight_pane_g5

0x1f30,	// (0x000330aa) cell_highlight_pane_g6

0x1f38,	// (0x000330b2) cell_highlight_pane_g7

0x1f40,	// (0x000330ba) cell_highlight_pane_g8

0x1f48,	// (0x000330c2) cell_highlight_pane_g9

0xe55f,	// (0x0003f6d9) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00040801) cell_highlight_pane_g

0x21ff,	// (0x00033379) bg_scroll_pane

0x638b,	// (0x00037505) scroll_handle_pane

0x2246,	// (0x000333c0) scroll_bg_pane_g1

0x225b,	// (0x000333d5) scroll_bg_pane_g2

0x2273,	// (0x000333ed) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00040858) scroll_bg_pane_g

0x2288,	// (0x00033402) scroll_handle_focus_pane_ParamLimits

0x2288,	// (0x00033402) scroll_handle_focus_pane

0x2246,	// (0x000333c0) scroll_handle_pane_g1

0x2295,	// (0x0003340f) scroll_handle_pane_g2

0x2273,	// (0x000333ed) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0004085f) scroll_handle_pane_g

0x1f59,	// (0x000330d3) bg_popup_sub_pane_cp21_ParamLimits

0x1f59,	// (0x000330d3) bg_popup_sub_pane_cp21

0x22a9,	// (0x00033423) popup_fep_japan_predictive_window_t1_ParamLimits

0x22a9,	// (0x00033423) popup_fep_japan_predictive_window_t1

0x22c0,	// (0x0003343a) popup_fep_japan_predictive_window_t2_ParamLimits

0x22c0,	// (0x0003343a) popup_fep_japan_predictive_window_t2

0x22f3,	// (0x0003346d) popup_fep_japan_predictive_window_t3_ParamLimits

0x22f3,	// (0x0003346d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00040866) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00040866) popup_fep_japan_predictive_window_t

0xe569,	// (0x0003f6e3) bg_popup_sub_pane_cp23

0x232a,	// (0x000334a4) listscroll_japin_cand_pane

0x2332,	// (0x000334ac) popup_fep_japan_candidate_window_t1

0x2340,	// (0x000334ba) candidate_pane_ParamLimits

0x2340,	// (0x000334ba) candidate_pane

0x2352,	// (0x000334cc) scroll_pane_cp30

0x235c,	// (0x000334d6) list_single_popup_jap_candidate_pane_ParamLimits

0x235c,	// (0x000334d6) list_single_popup_jap_candidate_pane

0xe569,	// (0x0003f6e3) list_highlight_pane_cp30

0x2370,	// (0x000334ea) list_single_popup_jap_candidate_pane_t1

0x63b4,	// (0x0003752e) level_1_signal

0x63c1,	// (0x0003753b) level_2_signal

0x63ce,	// (0x00037548) level_3_signal

0x63db,	// (0x00037555) level_4_signal

0x63e8,	// (0x00037562) level_5_signal

0x63f5,	// (0x0003756f) level_6_signal

0x6402,	// (0x0003757c) level_7_signal

0x63b4,	// (0x0003752e) level_1_battery

0x63c1,	// (0x0003753b) level_2_battery

0x63ce,	// (0x00037548) level_3_battery

0x63db,	// (0x00037555) level_4_battery

0x63e8,	// (0x00037562) level_5_battery

0x63f5,	// (0x0003756f) level_6_battery

0x6402,	// (0x0003757c) level_7_battery

0x2397,	// (0x00033511) list_menu_pane_ParamLimits

0x2397,	// (0x00033511) list_menu_pane

0x23ad,	// (0x00033527) scroll_pane_cp25_ParamLimits

0x23ad,	// (0x00033527) scroll_pane_cp25

0x23c6,	// (0x00033540) list_double2_graphic_pane_cp2_ParamLimits

0x23c6,	// (0x00033540) list_double2_graphic_pane_cp2

0x23c6,	// (0x00033540) list_double2_large_graphic_pane_cp2_ParamLimits

0x23c6,	// (0x00033540) list_double2_large_graphic_pane_cp2

0x23c6,	// (0x00033540) list_double2_pane_cp2_ParamLimits

0x23c6,	// (0x00033540) list_double2_pane_cp2

0x23c6,	// (0x00033540) list_double_graphic_pane_cp2_ParamLimits

0x23c6,	// (0x00033540) list_double_graphic_pane_cp2

0x23c6,	// (0x00033540) list_double_large_graphic_pane_cp2_ParamLimits

0x23c6,	// (0x00033540) list_double_large_graphic_pane_cp2

0x23c6,	// (0x00033540) list_double_number_pane_cp2_ParamLimits

0x23c6,	// (0x00033540) list_double_number_pane_cp2

0x23c6,	// (0x00033540) list_double_pane_cp2_ParamLimits

0x23c6,	// (0x00033540) list_double_pane_cp2

0x6444,	// (0x000375be) list_single_2graphic_pane_cp2_ParamLimits

0x6444,	// (0x000375be) list_single_2graphic_pane_cp2

0x6444,	// (0x000375be) list_single_graphic_heading_pane_cp2_ParamLimits

0x6444,	// (0x000375be) list_single_graphic_heading_pane_cp2

0x6444,	// (0x000375be) list_single_graphic_pane_cp2_ParamLimits

0x6444,	// (0x000375be) list_single_graphic_pane_cp2

0x6444,	// (0x000375be) list_single_heading_pane_cp2_ParamLimits

0x6444,	// (0x000375be) list_single_heading_pane_cp2

0x23d6,	// (0x00033550) list_single_large_graphic_pane_cp2_ParamLimits

0x23d6,	// (0x00033550) list_single_large_graphic_pane_cp2

0x6444,	// (0x000375be) list_single_number_heading_pane_cp2_ParamLimits

0x6444,	// (0x000375be) list_single_number_heading_pane_cp2

0x6444,	// (0x000375be) list_single_number_pane_cp2_ParamLimits

0x6444,	// (0x000375be) list_single_number_pane_cp2

0x6444,	// (0x000375be) list_single_pane_cp2_ParamLimits

0x6444,	// (0x000375be) list_single_pane_cp2

0x23ef,	// (0x00033569) bg_popup_sub_pane_cp22

0x652d,	// (0x000376a7) popup_side_volume_key_window_g1

0x6557,	// (0x000376d1) popup_side_volume_key_window_t1

0x6575,	// (0x000376ef) volume_small_pane_cp1

0xf0b7,	// (0x00040231) bg_popup_sub_pane_cp24_ParamLimits

0xf0b7,	// (0x00040231) bg_popup_sub_pane_cp24

0x2405,	// (0x0003357f) fep_china_uni_candidate_pane_ParamLimits

0x2405,	// (0x0003357f) fep_china_uni_candidate_pane

0x2419,	// (0x00033593) fep_china_uni_entry_pane

0x2429,	// (0x000335a3) popup_fep_china_uni_window_g1

0x2445,	// (0x000335bf) fep_china_uni_entry_pane_g1

0x244f,	// (0x000335c9) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00040897) fep_china_uni_entry_pane_g

0x2459,	// (0x000335d3) fep_entry_item_pane

0x2463,	// (0x000335dd) fep_candidate_item_pane

0x246b,	// (0x000335e5) fep_china_uni_candidate_pane_g1

0x2475,	// (0x000335ef) fep_china_uni_candidate_pane_g2

0x247d,	// (0x000335f7) fep_china_uni_candidate_pane_g3

0x2485,	// (0x000335ff) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0004089c) fep_china_uni_candidate_pane_g

0xe55f,	// (0x0003f6d9) fep_entry_item_pane_g1

0x248f,	// (0x00033609) fep_entry_item_pane_t1_ParamLimits

0x248f,	// (0x00033609) fep_entry_item_pane_t1

0x24a5,	// (0x0003361f) fep_candidate_item_pane_t1_ParamLimits

0x24a5,	// (0x0003361f) fep_candidate_item_pane_t1

0x24ba,	// (0x00033634) fep_candidate_item_pane_t2_ParamLimits

0x24ba,	// (0x00033634) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x000408a5) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x000408a5) fep_candidate_item_pane_t

0xef84,	// (0x000400fe) list_highlight_pane_cp31_ParamLimits

0xef84,	// (0x000400fe) list_highlight_pane_cp31

0x24cc,	// (0x00033646) level_1_signal_lsc

0x24d5,	// (0x0003364f) level_2_signal_lsc

0x24de,	// (0x00033658) level_3_signal_lsc

0x24e7,	// (0x00033661) level_4_signal_lsc

0x24f0,	// (0x0003366a) level_5_signal_lsc

0x24f9,	// (0x00033673) level_6_signal_lsc

0x2502,	// (0x0003367c) level_7_signal_lsc

0x2502,	// (0x0003367c) level_1_battery_lsc

0x250b,	// (0x00033685) level_2_battery_lsc

0x2514,	// (0x0003368e) level_3_battery_lsc

0x251d,	// (0x00033697) level_4_battery_lsc

0x2526,	// (0x000336a0) level_5_battery_lsc

0x252f,	// (0x000336a9) level_6_battery_lsc

0x24cc,	// (0x00033646) level_7_battery_lsc

0x2538,	// (0x000336b2) scroll_handle_focus_pane_g1

0x2541,	// (0x000336bb) scroll_handle_focus_pane_g2

0x254a,	// (0x000336c4) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x000408aa) scroll_handle_focus_pane_g

0x657d,	// (0x000376f7) list_single_2graphic_pane_g1_ParamLimits

0x657d,	// (0x000376f7) list_single_2graphic_pane_g1

0x5ba8,	// (0x00036d22) list_single_2graphic_pane_g2_ParamLimits

0x5ba8,	// (0x00036d22) list_single_2graphic_pane_g2

0x5b2e,	// (0x00036ca8) list_single_2graphic_pane_g3_ParamLimits

0x5b2e,	// (0x00036ca8) list_single_2graphic_pane_g3

0x6589,	// (0x00037703) list_single_2graphic_pane_g4_ParamLimits

0x6589,	// (0x00037703) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x000408b1) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x000408b1) list_single_2graphic_pane_g

0x6595,	// (0x0003770f) list_single_2graphic_pane_t1_ParamLimits

0x6595,	// (0x0003770f) list_single_2graphic_pane_t1

0x65c3,	// (0x0003773d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x65c3,	// (0x0003773d) list_double2_graphic_large_graphic_pane_g1

0x5c1f,	// (0x00036d99) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5c1f,	// (0x00036d99) list_double2_graphic_large_graphic_pane_g2

0x5beb,	// (0x00036d65) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5beb,	// (0x00036d65) list_double2_graphic_large_graphic_pane_g3

0x65d5,	// (0x0003774f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x65d5,	// (0x0003774f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x000408ba) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x000408ba) list_double2_graphic_large_graphic_pane_g

0x65e1,	// (0x0003775b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x65e1,	// (0x0003775b) list_double2_graphic_large_graphic_pane_t1

0x65f7,	// (0x00037771) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x65f7,	// (0x00037771) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x000408c3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x000408c3) list_double2_graphic_large_graphic_pane_t

0x25dc,	// (0x00033756) popup_fast_swap_window_ParamLimits

0x25dc,	// (0x00033756) popup_fast_swap_window

0x25fa,	// (0x00033774) popup_side_volume_key_window

0x2618,	// (0x00033792) stacon_top_pane

0x2622,	// (0x0003379c) status_pane_ParamLimits

0x2622,	// (0x0003379c) status_pane

0x67fd,	// (0x00037977) status_small_pane

0xe569,	// (0x0003f6e3) control_pane

0xe569,	// (0x0003f6e3) stacon_bottom_pane

0x1e90,	// (0x0003300a) scroll_pane_cp121

0x1e87,	// (0x00033001) set_content_pane

0x6609,	// (0x00037783) bg_active_tab_pane_g1_cp1

0x2553,	// (0x000336cd) bg_active_tab_pane_g2_cp1

0x6612,	// (0x0003778c) bg_active_tab_pane_g3_cp1

0x6609,	// (0x00037783) bg_passive_tab_pane_g1_cp1

0x2553,	// (0x000336cd) bg_passive_tab_pane_g2_cp1

0x6612,	// (0x0003778c) bg_passive_tab_pane_g3_cp1

0x661b,	// (0x00037795) bg_active_tab_pane_g1_cp2

0x2553,	// (0x000336cd) bg_active_tab_pane_g2_cp2

0x6624,	// (0x0003779e) bg_active_tab_pane_g3_cp2

0x661b,	// (0x00037795) bg_passive_tab_pane_g1_cp2

0x2553,	// (0x000336cd) bg_passive_tab_pane_g2_cp2

0x6624,	// (0x0003779e) bg_passive_tab_pane_g3_cp2

0x662d,	// (0x000377a7) bg_active_tab_pane_g1_cp3

0x2553,	// (0x000336cd) bg_active_tab_pane_g2_cp3

0x6636,	// (0x000377b0) bg_active_tab_pane_g3_cp3

0x662d,	// (0x000377a7) bg_passive_tab_pane_g1_cp3

0x2553,	// (0x000336cd) bg_passive_tab_pane_g2_cp3

0x6636,	// (0x000377b0) bg_passive_tab_pane_g3_cp3

0x663f,	// (0x000377b9) bg_active_tab_pane_g1_cp4

0x2553,	// (0x000336cd) bg_active_tab_pane_g2_cp4

0x664a,	// (0x000377c4) bg_active_tab_pane_g3_cp4

0x663f,	// (0x000377b9) bg_passive_tab_pane_g1_cp4

0x2553,	// (0x000336cd) bg_passive_tab_pane_g2_cp4

0x664a,	// (0x000377c4) bg_passive_tab_pane_g3_cp4

0x25a3,	// (0x0003371d) bg_active_tab_pane_g1_cp5

0x2553,	// (0x000336cd) bg_active_tab_pane_g2_cp5

0x259a,	// (0x00033714) bg_active_tab_pane_g3_cp5

0x25a3,	// (0x0003371d) bg_passive_tab_pane_g1_cp5

0x2553,	// (0x000336cd) bg_passive_tab_pane_g2_cp5

0x259a,	// (0x00033714) bg_passive_tab_pane_g3_cp5

0x6799,	// (0x00037913) list_set_graphic_pane_ParamLimits

0x6799,	// (0x00037913) list_set_graphic_pane

0xe569,	// (0x0003f6e3) bg_set_opt_pane_cp4

0x67ae,	// (0x00037928) list_set_graphic_pane_g1_ParamLimits

0x67ae,	// (0x00037928) list_set_graphic_pane_g1

0x67ba,	// (0x00037934) list_set_graphic_pane_g2_ParamLimits

0x67ba,	// (0x00037934) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x000408c8) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x000408c8) list_set_graphic_pane_g

0x0009,

0xfaca,	// (0x00040c44) volume_small_pane_cp_g

0x67de,	// (0x00037958) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x67de,	// (0x00037958) list_double2_large_graphic_pane_g1_cp2

0x67ec,	// (0x00037966) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x67ec,	// (0x00037966) list_double2_large_graphic_pane_g2_cp2

0x25ac,	// (0x00033726) list_double2_large_graphic_pane_g3_cp2

0x25b4,	// (0x0003372e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x25b4,	// (0x0003372e) list_double2_large_graphic_pane_t1_cp2

0x25ca,	// (0x00033744) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x25ca,	// (0x00033744) list_double2_large_graphic_pane_t2_cp2

0xa1fd,	// (0x0003b377) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa1fd,	// (0x0003b377) list_double_large_graphic_pane_g1_cp2

0xa210,	// (0x0003b38a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa210,	// (0x0003b38a) list_double_large_graphic_pane_g2_cp2

0x2703,	// (0x0003387d) list_double_large_graphic_pane_g3_cp2

0xa221,	// (0x0003b39b) list_double_large_graphic_pane_g4_cp

0xa229,	// (0x0003b3a3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa229,	// (0x0003b3a3) list_double_large_graphic_pane_t1_cp2

0xa240,	// (0x0003b3ba) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa240,	// (0x0003b3ba) list_double_large_graphic_pane_t2_cp2

0x6808,	// (0x00037982) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6808,	// (0x00037982) list_double2_graphic_pane_g1_cp2

0x6816,	// (0x00037990) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6816,	// (0x00037990) list_double2_graphic_pane_g2_cp2

0x6827,	// (0x000379a1) list_double2_graphic_pane_g3_cp2

0x2630,	// (0x000337aa) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2630,	// (0x000337aa) list_double2_graphic_pane_t1_cp2

0x2646,	// (0x000337c0) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2646,	// (0x000337c0) list_double2_graphic_pane_t2_cp2

0x2658,	// (0x000337d2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2658,	// (0x000337d2) list_single_number_heading_pane_g1_cp2

0x2664,	// (0x000337de) list_single_number_heading_pane_g2_cp2

0x266c,	// (0x000337e6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x266c,	// (0x000337e6) list_single_number_heading_pane_t1_cp2

0x6831,	// (0x000379ab) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6831,	// (0x000379ab) list_single_number_heading_pane_t2_cp2

0x2682,	// (0x000337fc) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2682,	// (0x000337fc) list_single_number_heading_pane_t3_cp2

0x2658,	// (0x000337d2) list_single_heading_pane_g1_cp2_ParamLimits

0x2658,	// (0x000337d2) list_single_heading_pane_g1_cp2

0x2664,	// (0x000337de) list_single_heading_pane_g2_cp2

0x266c,	// (0x000337e6) list_single_heading_pane_t1_cp2_ParamLimits

0x266c,	// (0x000337e6) list_single_heading_pane_t1_cp2

0x9ff7,	// (0x0003b171) list_single_heading_pane_t2_cp2_ParamLimits

0x9ff7,	// (0x0003b171) list_single_heading_pane_t2_cp2

0x9f3f,	// (0x0003b0b9) list_double_graphic_pane_g1_cp2_ParamLimits

0x9f3f,	// (0x0003b0b9) list_double_graphic_pane_g1_cp2

0x9f4b,	// (0x0003b0c5) list_double_graphic_pane_g2_cp2_ParamLimits

0x9f4b,	// (0x0003b0c5) list_double_graphic_pane_g2_cp2

0x9f5a,	// (0x0003b0d4) list_double_graphic_pane_g3_cp2

0x9f62,	// (0x0003b0dc) list_double_graphic_pane_t1_cp2_ParamLimits

0x9f62,	// (0x0003b0dc) list_double_graphic_pane_t1_cp2

0x9f78,	// (0x0003b0f2) list_double_graphic_pane_t2_cp2_ParamLimits

0x9f78,	// (0x0003b0f2) list_double_graphic_pane_t2_cp2

0x26f7,	// (0x00033871) list_double_number_pane_g1_cp2_ParamLimits

0x26f7,	// (0x00033871) list_double_number_pane_g1_cp2

0x2703,	// (0x0003387d) list_double_number_pane_g2_cp2

0x9f03,	// (0x0003b07d) list_double_number_pane_t1_cp2_ParamLimits

0x9f03,	// (0x0003b07d) list_double_number_pane_t1_cp2

0x9f17,	// (0x0003b091) list_double_number_pane_t2_cp2_ParamLimits

0x9f17,	// (0x0003b091) list_double_number_pane_t2_cp2

0x9f2d,	// (0x0003b0a7) list_double_number_pane_t3_cp2_ParamLimits

0x9f2d,	// (0x0003b0a7) list_double_number_pane_t3_cp2

0x9dec,	// (0x0003af66) list_single_graphic_pane_g1_cp2_ParamLimits

0x9dec,	// (0x0003af66) list_single_graphic_pane_g1_cp2

0x686f,	// (0x000379e9) list_single_graphic_pane_g2_cp2_ParamLimits

0x686f,	// (0x000379e9) list_single_graphic_pane_g2_cp2

0x687b,	// (0x000379f5) list_single_graphic_pane_g3_cp2

0x9dc2,	// (0x0003af3c) list_single_graphic_pane_t1_cp2_ParamLimits

0x9dc2,	// (0x0003af3c) list_single_graphic_pane_t1_cp2

0x686f,	// (0x000379e9) list_single_number_pane_g1_cp2_ParamLimits

0x686f,	// (0x000379e9) list_single_number_pane_g1_cp2

0x687b,	// (0x000379f5) list_single_number_pane_g2_cp2

0x9dc2,	// (0x0003af3c) list_single_number_pane_t1_cp2_ParamLimits

0x9dc2,	// (0x0003af3c) list_single_number_pane_t1_cp2

0x9dd8,	// (0x0003af52) list_single_number_pane_t2_cp2_ParamLimits

0x9dd8,	// (0x0003af52) list_single_number_pane_t2_cp2

0x67ec,	// (0x00037966) list_double2_pane_g1_cp2_ParamLimits

0x67ec,	// (0x00037966) list_double2_pane_g1_cp2

0x25ac,	// (0x00033726) list_double2_pane_g2_cp2

0x26cf,	// (0x00033849) list_double2_pane_t1_cp2_ParamLimits

0x26cf,	// (0x00033849) list_double2_pane_t1_cp2

0x26e5,	// (0x0003385f) list_double2_pane_t2_cp2_ParamLimits

0x26e5,	// (0x0003385f) list_double2_pane_t2_cp2

0x26f7,	// (0x00033871) list_double_pane_g1_cp2_ParamLimits

0x26f7,	// (0x00033871) list_double_pane_g1_cp2

0x2703,	// (0x0003387d) list_double_pane_g2_cp2

0x270b,	// (0x00033885) list_double_pane_t1_cp2_ParamLimits

0x270b,	// (0x00033885) list_double_pane_t1_cp2

0x2721,	// (0x0003389b) list_double_pane_t2_cp2_ParamLimits

0x2721,	// (0x0003389b) list_double_pane_t2_cp2

0x685f,	// (0x000379d9) list_single_pane_cp2_g3

0x686f,	// (0x000379e9) list_single_pane_g1_cp2_ParamLimits

0x686f,	// (0x000379e9) list_single_pane_g1_cp2

0x687b,	// (0x000379f5) list_single_pane_g2_cp2

0x6883,	// (0x000379fd) list_single_pane_t1_cp2_ParamLimits

0x6883,	// (0x000379fd) list_single_pane_t1_cp2

0x689b,	// (0x00037a15) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x689b,	// (0x00037a15) list_single_large_graphic_pane_g1_cp2

0x68a9,	// (0x00037a23) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x68a9,	// (0x00037a23) list_single_large_graphic_pane_g2_cp2

0x68b5,	// (0x00037a2f) list_single_large_graphic_pane_g3_cp2

0x68bd,	// (0x00037a37) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x68bd,	// (0x00037a37) list_single_large_graphic_pane_g4_cp1

0x68d7,	// (0x00037a51) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x68d7,	// (0x00037a51) list_single_large_graphic_pane_t1_cp2

0x9d8c,	// (0x0003af06) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9d8c,	// (0x0003af06) list_single_graphic_heading_pane_g1_cp2

0x9d59,	// (0x0003aed3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9d59,	// (0x0003aed3) list_single_graphic_heading_pane_g4_cp2

0x687b,	// (0x000379f5) list_single_graphic_heading_pane_g5_cp2

0x9d98,	// (0x0003af12) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9d98,	// (0x0003af12) list_single_graphic_heading_pane_t1_cp2

0x9dae,	// (0x0003af28) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9dae,	// (0x0003af28) list_single_graphic_heading_pane_t2_cp2

0x9d4d,	// (0x0003aec7) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9d4d,	// (0x0003aec7) list_single_2graphic_pane_g1_cp2

0x9d59,	// (0x0003aed3) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9d59,	// (0x0003aed3) list_single_2graphic_pane_g2_cp2

0x687b,	// (0x000379f5) list_single_2graphic_pane_g3_cp2

0x9d6a,	// (0x0003aee4) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9d6a,	// (0x0003aee4) list_single_2graphic_pane_g4_cp2

0x9d76,	// (0x0003aef0) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9d76,	// (0x0003aef0) list_single_2graphic_pane_t1_cp2

0xe55f,	// (0x0003f6d9) list_highlight_pane_g10_cp1

0x9925,	// (0x0003aa9f) list_highlight_pane_g1_cp1

0x992d,	// (0x0003aaa7) list_highlight_pane_g2_cp1

0x9935,	// (0x0003aaaf) list_highlight_pane_g3_cp1

0x993d,	// (0x0003aab7) list_highlight_pane_g4_cp1

0x9945,	// (0x0003aabf) list_highlight_pane_g5_cp1

0x994d,	// (0x0003aac7) list_highlight_pane_g6_cp1

0x9955,	// (0x0003aacf) list_highlight_pane_g7_cp1

0x995d,	// (0x0003aad7) list_highlight_pane_g8_cp1

0x9965,	// (0x0003aadf) list_highlight_pane_g9_cp1

0x9845,	// (0x0003a9bf) form_field_slider_pane_t3

0x9853,	// (0x0003a9cd) form_field_slider_pane_t4

0x9861,	// (0x0003a9db) slider_form_pane_ParamLimits

0x9861,	// (0x0003a9db) slider_form_pane

0xe569,	// (0x0003f6e3) control_abbreviations

0xe569,	// (0x0003f6e3) control_conventions

0xe569,	// (0x0003f6e3) control_definitions

0xe569,	// (0x0003f6e3) format_table_attribute

0xa04d,	// (0x0003b1c7) bg_popup_preview_window_pane_g9

0xe569,	// (0x0003f6e3) format_table_data2

0xe569,	// (0x0003f6e3) format_table_data3

0xe569,	// (0x0003f6e3) format_table_data_example

0x0008,

0xe569,	// (0x0003f6e3) intro_purpose

0xf8ea,	// (0x00040a64) bg_popup_preview_window_pane_g

0xe569,	// (0x0003f6e3) texts_category

0xe569,	// (0x0003f6e3) texts_graphics

0x68ed,	// (0x00037a67) text_digital

0x68fc,	// (0x00037a76) text_primary

0x690b,	// (0x00037a85) text_primary_small

0x691a,	// (0x00037a94) text_secondary

0x6929,	// (0x00037aa3) text_title

0xa7e1,	// (0x0003b95b) bg_passive_tab_pane_g1_cp3_srt

0x2553,	// (0x000336cd) bg_passive_tab_pane_g2_cp3_srt

0xa7ea,	// (0x0003b964) bg_passive_tab_pane_g3_cp3_srt

0xef84,	// (0x000400fe) bg_active_tab_pane_cp3_srt_ParamLimits

0xef84,	// (0x000400fe) bg_active_tab_pane_cp3_srt

0xa7f3,	// (0x0003b96d) tabs_4_active_pane_srt_g1

0xa7fb,	// (0x0003b975) tabs_4_active_pane_srt_t1_ParamLimits

0xa7fb,	// (0x0003b975) tabs_4_active_pane_srt_t1

0xa7e1,	// (0x0003b95b) bg_active_tab_pane_g1_cp3_copy1

0x2553,	// (0x000336cd) bg_active_tab_pane_g2_cp3_copy1

0xa7ea,	// (0x0003b964) bg_active_tab_pane_g3_cp3_copy1

0xef84,	// (0x000400fe) tabs_2_long_active_pane_srt_ParamLimits

0xef84,	// (0x000400fe) tabs_2_long_active_pane_srt

0xef84,	// (0x000400fe) tabs_2_long_passive_pane_srt_ParamLimits

0xef84,	// (0x000400fe) tabs_2_long_passive_pane_srt

0x6149,	// (0x000372c3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6149,	// (0x000372c3) bg_passive_tab_pane_cp4_srt

0xa489,	// (0x0003b603) bg_passive_tab_pane_g1_cp4_srt

0x2553,	// (0x000336cd) bg_passive_tab_pane_g2_cp4_srt

0xa492,	// (0x0003b60c) bg_passive_tab_pane_g3_cp4_srt

0x273f,	// (0x000338b9) bg_active_tab_pane_cp4_srt_ParamLimits

0x273f,	// (0x000338b9) bg_active_tab_pane_cp4_srt

0xa49b,	// (0x0003b615) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa49b,	// (0x0003b615) tabs_2_long_active_pane_srt_t1

0xa489,	// (0x0003b603) bg_active_tab_pane_g1_cp4_srt

0x2553,	// (0x000336cd) bg_active_tab_pane_g2_cp4_srt

0xa492,	// (0x0003b60c) bg_active_tab_pane_g3_cp4_srt

0xf0b7,	// (0x00040231) tabs_3_long_active_pane_srt_ParamLimits

0xf0b7,	// (0x00040231) tabs_3_long_active_pane_srt

0xf0b7,	// (0x00040231) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xf0b7,	// (0x00040231) tabs_3_long_passive_pane_cp_srt

0xf0b7,	// (0x00040231) tabs_3_long_passive_pane_srt_ParamLimits

0xf0b7,	// (0x00040231) tabs_3_long_passive_pane_srt

0x6149,	// (0x000372c3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6149,	// (0x000372c3) bg_passive_tab_pane_cp5_srt

0x25a3,	// (0x0003371d) bg_passive_tab_pane_g1_cp5_srt

0x2553,	// (0x000336cd) bg_passive_tab_pane_g2_cp5_srt

0x259a,	// (0x00033714) bg_passive_tab_pane_g3_cp5_srt

0x273f,	// (0x000338b9) bg_active_tab_pane_cp5_srt_ParamLimits

0x273f,	// (0x000338b9) bg_active_tab_pane_cp5_srt

0xa477,	// (0x0003b5f1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa477,	// (0x0003b5f1) tabs_3_long_active_pane_srt_t1

0x25a3,	// (0x0003371d) bg_active_tab_pane_g1_cp5_srt

0x2553,	// (0x000336cd) bg_active_tab_pane_g2_cp5_srt

0x259a,	// (0x00033714) bg_active_tab_pane_g3_cp5_srt

0xa469,	// (0x0003b5e3) navi_text_pane_srt_t1

0xa461,	// (0x0003b5db) navi_icon_pane_srt_g1

0x6b9d,	// (0x00037d17) midp_editing_number_pane_srt

0x6938,	// (0x00037ab2) midp_ticker_pane_srt

0x6ba5,	// (0x00037d1f) midp_ticker_pane_srt_g1

0x6bad,	// (0x00037d27) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x000408e7) midp_ticker_pane_srt_g

0x6bb5,	// (0x00037d2f) midp_ticker_pane_srt_t1

0xa452,	// (0x0003b5cc) midp_editing_number_pane_t1_copy1

0x6149,	// (0x000372c3) listscroll_midp_pane

0x6149,	// (0x000372c3) midp_form_pane

0x69a2,	// (0x00037b1c) midp_info_popup_window_ParamLimits

0x69a2,	// (0x00037b1c) midp_info_popup_window

0x1f59,	// (0x000330d3) bg_popup_sub_pane_cp50_ParamLimits

0x1f59,	// (0x000330d3) bg_popup_sub_pane_cp50

0x955b,	// (0x0003a6d5) listscroll_midp_info_pane_ParamLimits

0x955b,	// (0x0003a6d5) listscroll_midp_info_pane

0x9543,	// (0x0003a6bd) listscroll_form_midp_pane_ParamLimits

0x9543,	// (0x0003a6bd) listscroll_form_midp_pane

0x954f,	// (0x0003a6c9) scroll_bar_cp050

0x9523,	// (0x0003a69d) list_midp_pane

0xb276,	// (0x0003c3f0) signal_pane_g2_cp

0x945d,	// (0x0003a5d7) listscroll_midp_info_pane_t1_ParamLimits

0x945d,	// (0x0003a5d7) listscroll_midp_info_pane_t1

0x9475,	// (0x0003a5ef) listscroll_midp_info_pane_t2_ParamLimits

0x9475,	// (0x0003a5ef) listscroll_midp_info_pane_t2

0x94b3,	// (0x0003a62d) listscroll_midp_info_pane_t3_ParamLimits

0x94b3,	// (0x0003a62d) listscroll_midp_info_pane_t3

0x94ed,	// (0x0003a667) listscroll_midp_info_pane_t4_ParamLimits

0x94ed,	// (0x0003a667) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0004099f) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0004099f) listscroll_midp_info_pane_t

0x1fd9,	// (0x00033153) scroll_pane_cp21

0x93f7,	// (0x0003a571) form_midp_field_choice_group_pane

0x9400,	// (0x0003a57a) form_midp_field_text_pane

0x9443,	// (0x0003a5bd) form_midp_field_time_pane

0x944b,	// (0x0003a5c5) form_midp_gauge_slider_pane

0x9454,	// (0x0003a5ce) form_midp_gauge_wait_pane

0xe569,	// (0x0003f6e3) form_midp_image_pane

0x7120,	// (0x0003829a) list_single_midp_pane_ParamLimits

0x7120,	// (0x0003829a) list_single_midp_pane

0x93bb,	// (0x0003a535) form_midp_field_text_pane_t1

0x91a7,	// (0x0003a321) input_focus_pane_cp050

0x93e6,	// (0x0003a560) list_midp_form_text_pane

0x938a,	// (0x0003a504) form_midp_field_choice_group_pane_t1

0x9398,	// (0x0003a512) input_focus_pane_cp051

0x93ac,	// (0x0003a526) list_midp_choice_pane

0xe569,	// (0x0003f6e3) status_idle_pane

0x936e,	// (0x0003a4e8) form_midp_field_time_pane_t1

0xe55f,	// (0x0003f6d9) wait_anim_pane_g2_copy1

0x937c,	// (0x0003a4f6) form_midp_field_time_pane_t2

0x0001,

0x6a52,	// (0x00037bcc) aid_navinavi_width_2_pane

0xf820,	// (0x0004099a) form_midp_field_time_pane_t

0xe569,	// (0x0003f6e3) input_focus_pane_cp052

0xe569,	// (0x0003f6e3) bg_input_focus_pane_cp040

0x932e,	// (0x0003a4a8) form_midp_gauge_slider_pane_t1

0x933c,	// (0x0003a4b6) form_midp_gauge_slider_pane_t2

0x934a,	// (0x0003a4c4) form_midp_gauge_slider_pane_t3

0x9358,	// (0x0003a4d2) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00040991) form_midp_gauge_slider_pane_t

0x9366,	// (0x0003a4e0) form_midp_slider_pane

0xef84,	// (0x000400fe) bg_input_focus_pane_cp041_ParamLimits

0xef84,	// (0x000400fe) bg_input_focus_pane_cp041

0x92fb,	// (0x0003a475) form_midp_gauge_wait_pane_t1_ParamLimits

0x92fb,	// (0x0003a475) form_midp_gauge_wait_pane_t1

0x930d,	// (0x0003a487) form_midp_gauge_wait_pane_t2_ParamLimits

0x930d,	// (0x0003a487) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0004098c) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0004098c) form_midp_gauge_wait_pane_t

0x931f,	// (0x0003a499) form_midp_wait_pane_ParamLimits

0x931f,	// (0x0003a499) form_midp_wait_pane

0x92c3,	// (0x0003a43d) form_midp_image_pane_g1

0x92cc,	// (0x0003a446) form_midp_image_pane_t1

0x92db,	// (0x0003a455) form_midp_image_pane_t2

0x92ea,	// (0x0003a464) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x00040985) form_midp_image_pane_t

0x92ba,	// (0x0003a434) list_single_midp_pane_g1

0x3efd,	// (0x00035077) list_single_midp_pane_t1

0x92a0,	// (0x0003a41a) list_midp_form_item_pane_ParamLimits

0x92a0,	// (0x0003a41a) list_midp_form_item_pane

0x69fa,	// (0x00037b74) list_midp_form_item_pane_t1

0x6a09,	// (0x00037b83) midp_ticker_pane_g1

0x6a15,	// (0x00037b8f) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x000408cd) midp_ticker_pane_g

0x6a21,	// (0x00037b9b) midp_ticker_pane_t1

0xa6c5,	// (0x0003b83f) midp_editing_number_pane_t1

0xa6a3,	// (0x0003b81d) midp_editing_number_pane

0xa6b2,	// (0x0003b82c) midp_ticker_pane

0xa442,	// (0x0003b5bc) ai_message_heading_pane

0xe569,	// (0x0003f6e3) bg_popup_window_pane_cp14

0xa44a,	// (0x0003b5c4) listscroll_ai_message_pane

0xa3c8,	// (0x0003b542) ai_message_heading_pane_g1_ParamLimits

0xa3c8,	// (0x0003b542) ai_message_heading_pane_g1

0xa3d4,	// (0x0003b54e) ai_message_heading_pane_g2_ParamLimits

0xa3d4,	// (0x0003b54e) ai_message_heading_pane_g2

0xa3e2,	// (0x0003b55c) ai_message_heading_pane_g3_ParamLimits

0xa3e2,	// (0x0003b55c) ai_message_heading_pane_g3

0xa3ee,	// (0x0003b568) ai_message_heading_pane_g4_ParamLimits

0xa3ee,	// (0x0003b568) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x00040ac6) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x00040ac6) ai_message_heading_pane_g

0xa3fa,	// (0x0003b574) ai_message_heading_pane_t1_ParamLimits

0xa3fa,	// (0x0003b574) ai_message_heading_pane_t1

0xa414,	// (0x0003b58e) ai_message_heading_pane_t2_ParamLimits

0xa414,	// (0x0003b58e) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00040acf) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00040acf) ai_message_heading_pane_t

0xa428,	// (0x0003b5a2) bg_popup_heading_pane_cp1_ParamLimits

0xa428,	// (0x0003b5a2) bg_popup_heading_pane_cp1

0xa3b6,	// (0x0003b530) list_ai_message_pane_ParamLimits

0xa3b6,	// (0x0003b530) list_ai_message_pane

0x1fd9,	// (0x00033153) scroll_pane_cp10

0xa352,	// (0x0003b4cc) list_ai_message_pane_g1

0xa35a,	// (0x0003b4d4) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x00040aa3) list_ai_message_pane_g

0xa362,	// (0x0003b4dc) list_ai_message_pane_t1_ParamLimits

0xa362,	// (0x0003b4dc) list_ai_message_pane_t1

0xa377,	// (0x0003b4f1) list_ai_message_pane_t2_ParamLimits

0xa377,	// (0x0003b4f1) list_ai_message_pane_t2

0xa38c,	// (0x0003b506) list_ai_message_pane_t3_ParamLimits

0xa38c,	// (0x0003b506) list_ai_message_pane_t3

0xa3a1,	// (0x0003b51b) list_ai_message_pane_t4_ParamLimits

0xa3a1,	// (0x0003b51b) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00040aa8) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00040aa8) list_ai_message_pane_t

0xa33b,	// (0x0003b4b5) cell_ai_soft_ind_pane_ParamLimits

0xa33b,	// (0x0003b4b5) cell_ai_soft_ind_pane

0x6a33,	// (0x00037bad) cell_ai_soft_ind_pane_g1_ParamLimits

0x6a33,	// (0x00037bad) cell_ai_soft_ind_pane_g1

0xe569,	// (0x0003f6e3) grid_highlight_cp1

0x6a40,	// (0x00037bba) text_secondary_cp56_ParamLimits

0x6a40,	// (0x00037bba) text_secondary_cp56

0xa310,	// (0x0003b48a) example_general_pane_ParamLimits

0xa310,	// (0x0003b48a) example_general_pane

0xa31c,	// (0x0003b496) example_parent_pane_g1_ParamLimits

0xa31c,	// (0x0003b496) example_parent_pane_g1

0xa328,	// (0x0003b4a2) example_parent_pane_t1_ParamLimits

0xa328,	// (0x0003b4a2) example_parent_pane_t1

0x89b9,	// (0x00039b33) popup_preview_text_window_ParamLimits

0x89b9,	// (0x00039b33) popup_preview_text_window

0x6867,	// (0x000379e1) list_single_pane_cp2_g4

0xf16d,	// (0x000402e7) bg_popup_preview_window_pane_ParamLimits

0xf16d,	// (0x000402e7) bg_popup_preview_window_pane

0xa057,	// (0x0003b1d1) popup_preview_text_window_t1_ParamLimits

0xa057,	// (0x0003b1d1) popup_preview_text_window_t1

0xa075,	// (0x0003b1ef) popup_preview_text_window_t2_ParamLimits

0xa075,	// (0x0003b1ef) popup_preview_text_window_t2

0xa0be,	// (0x0003b238) popup_preview_text_window_t3_ParamLimits

0xa0be,	// (0x0003b238) popup_preview_text_window_t3

0xa103,	// (0x0003b27d) popup_preview_text_window_t4_ParamLimits

0xa103,	// (0x0003b27d) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x00040a77) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x00040a77) popup_preview_text_window_t

0xa181,	// (0x0003b2fb) scroll_pane_cp11

0x9133,	// (0x0003a2ad) bg_popup_preview_window_pane_g1

0xa00b,	// (0x0003b185) bg_popup_preview_window_pane_g2

0xa015,	// (0x0003b18f) bg_popup_preview_window_pane_g3

0xa01f,	// (0x0003b199) bg_popup_preview_window_pane_g4

0xa029,	// (0x0003b1a3) bg_popup_preview_window_pane_g5

0xa033,	// (0x0003b1ad) bg_popup_preview_window_pane_g6

0xa03b,	// (0x0003b1b5) bg_popup_preview_window_pane_g7

0xa043,	// (0x0003b1bd) bg_popup_preview_window_pane_g8

0x53a8,	// (0x00036522) aid_popup_width_pane

0x8995,	// (0x00039b0f) popup_midp_note_alarm_window_ParamLimits

0x8995,	// (0x00039b0f) popup_midp_note_alarm_window

0x1ea1,	// (0x0003301b) data_form_pane_ParamLimits

0x5fbe,	// (0x00037138) form_field_data_pane_g1

0x5fc8,	// (0x00037142) form_field_data_pane_t1_ParamLimits

0x1ead,	// (0x00033027) input_focus_pane_ParamLimits

0x3d1c,	// (0x00034e96) data_form_wide_pane_ParamLimits

0x3d2d,	// (0x00034ea7) form_field_data_wide_pane_g1

0x3d39,	// (0x00034eb3) form_field_data_wide_pane_t1_ParamLimits

0xf322,	// (0x0004049c) input_focus_pane_cp6_ParamLimits

0x610e,	// (0x00037288) input_popup_find_pane_g1_ParamLimits

0x610e,	// (0x00037288) input_popup_find_pane_g1

0x6267,	// (0x000373e1) aid_navi_side_left_pane

0x627c,	// (0x000373f6) aid_navi_side_right_pane

0x9a20,	// (0x0003ab9a) bg_popup_window_pane_cp30_ParamLimits

0x9a20,	// (0x0003ab9a) bg_popup_window_pane_cp30

0x9a9a,	// (0x0003ac14) popup_midp_note_alarm_window_g1_ParamLimits

0x9a9a,	// (0x0003ac14) popup_midp_note_alarm_window_g1

0x9aca,	// (0x0003ac44) popup_midp_note_alarm_window_t1_ParamLimits

0x9aca,	// (0x0003ac44) popup_midp_note_alarm_window_t1

0x9b6b,	// (0x0003ace5) popup_midp_note_alarm_window_t2_ParamLimits

0x9b6b,	// (0x0003ace5) popup_midp_note_alarm_window_t2

0x9c19,	// (0x0003ad93) popup_midp_note_alarm_window_t3_ParamLimits

0x9c19,	// (0x0003ad93) popup_midp_note_alarm_window_t3

0x9c4b,	// (0x0003adc5) popup_midp_note_alarm_window_t4_ParamLimits

0x9c4b,	// (0x0003adc5) popup_midp_note_alarm_window_t4

0x9c71,	// (0x0003adeb) popup_midp_note_alarm_window_t5_ParamLimits

0x9c71,	// (0x0003adeb) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00040a14) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00040a14) popup_midp_note_alarm_window_t

0x9d1d,	// (0x0003ae97) wait_bar_pane_cp1_ParamLimits

0x9d1d,	// (0x0003ae97) wait_bar_pane_cp1

0xe569,	// (0x0003f6e3) wait_anim_pane_copy1

0xe569,	// (0x0003f6e3) wait_border_pane_copy1

0x9705,	// (0x0003a87f) wait_border_pane_g1_copy1

0x3d53,	// (0x00034ecd) form_field_popup_pane_g1

0x5fe2,	// (0x0003715c) form_field_popup_pane_t1_ParamLimits

0x1ead,	// (0x00033027) input_focus_pane_cp7_ParamLimits

0x1edb,	// (0x00033055) list_form_pane_ParamLimits

0x3d5b,	// (0x00034ed5) form_field_popup_wide_pane_g1

0x3d63,	// (0x00034edd) form_field_popup_wide_pane_t1_ParamLimits

0x1ead,	// (0x00033027) input_focus_pane_cp8_ParamLimits

0x1ee7,	// (0x00033061) list_form_wide_pane_ParamLimits

0xa86e,	// (0x0003b9e8) aid_size_cell_graphic_pane

0x6061,	// (0x000371db) data_form_pane_t1_ParamLimits

0x73b3,	// (0x0003852d) data_form_wide_pane_t1_ParamLimits

0x8ce0,	// (0x00039e5a) bg_status_flat_pane

0x57c3,	// (0x0003693d) title_pane_t1_ParamLimits

0xef4c,	// (0x000400c6) title_pane_t2_ParamLimits

0xef72,	// (0x000400ec) title_pane_t3_ParamLimits

0xf557,	// (0x000406d1) title_pane_t_ParamLimits

0x63b4,	// (0x0003752e) level_1_signal_ParamLimits

0x63c1,	// (0x0003753b) level_2_signal_ParamLimits

0x63ce,	// (0x00037548) level_3_signal_ParamLimits

0x63db,	// (0x00037555) level_4_signal_ParamLimits

0x63e8,	// (0x00037562) level_5_signal_ParamLimits

0x63f5,	// (0x0003756f) level_6_signal_ParamLimits

0x6402,	// (0x0003757c) level_7_signal_ParamLimits

0x63b4,	// (0x0003752e) level_1_battery_ParamLimits

0x63c1,	// (0x0003753b) level_2_battery_ParamLimits

0x63ce,	// (0x00037548) level_3_battery_ParamLimits

0x63db,	// (0x00037555) level_4_battery_ParamLimits

0x63e8,	// (0x00037562) level_5_battery_ParamLimits

0x63f5,	// (0x0003756f) level_6_battery_ParamLimits

0x6402,	// (0x0003757c) level_7_battery_ParamLimits

0x9925,	// (0x0003aa9f) bg_status_flat_pane_g1

0x992d,	// (0x0003aaa7) bg_status_flat_pane_g2

0x9935,	// (0x0003aaaf) bg_status_flat_pane_g3

0x993d,	// (0x0003aab7) bg_status_flat_pane_g4

0x9945,	// (0x0003aabf) bg_status_flat_pane_g5

0x994d,	// (0x0003aac7) bg_status_flat_pane_g6

0x9955,	// (0x0003aacf) bg_status_flat_pane_g7

0x5833,	// (0x000369ad) tabs_3_active_pane_t1_ParamLimits

0x5833,	// (0x000369ad) tabs_3_passive_pane_t1_ParamLimits

0x584d,	// (0x000369c7) tabs_4_active_pane_t1_ParamLimits

0x584d,	// (0x000369c7) tabs_4_1_passive_pane_t1_ParamLimits

0x6124,	// (0x0003729e) tabs_2_active_pane_t1_ParamLimits

0x6124,	// (0x0003729e) tabs_2_passive_pane_t1_ParamLimits

0x273f,	// (0x000338b9) bg_active_tab_pane_cp4_ParamLimits

0x6136,	// (0x000372b0) tabs_2_long_active_pane_t1_ParamLimits

0x6149,	// (0x000372c3) bg_passive_tab_pane_cp4_ParamLimits

0x7067,	// (0x000381e1) list_single_midp_graphic_pane_t1_ParamLimits

0x273f,	// (0x000338b9) bg_active_tab_pane_cp5_ParamLimits

0x6155,	// (0x000372cf) tabs_3_long_active_pane_t1_ParamLimits

0x6149,	// (0x000372c3) bg_passive_tab_pane_cp5_ParamLimits

0x7067,	// (0x000381e1) list_single_midp_graphic_pane_t1

0x8ce0,	// (0x00039e5a) bg_status_flat_pane_ParamLimits

0x8dab,	// (0x00039f25) indicator_pane_cp2_ParamLimits

0x8dab,	// (0x00039f25) indicator_pane_cp2

0x8eee,	// (0x0003a068) navi_pane_srt_ParamLimits

0x8eee,	// (0x0003a068) navi_pane_srt

0x8f12,	// (0x0003a08c) popup_clock_digital_analogue_window_cp1

0xefc8,	// (0x00040142) indicator_pane_t1

0x6938,	// (0x00037ab2) copy_highlight_pane

0x6938,	// (0x00037ab2) cursor_graphics_pane

0x6938,	// (0x00037ab2) graphic_within_text_pane

0x6938,	// (0x00037ab2) link_highlight_pane

0xa144,	// (0x0003b2be) popup_preview_text_window_t5_ParamLimits

0xa144,	// (0x0003b2be) popup_preview_text_window_t5

0x6a5c,	// (0x00037bd6) cursor_digital_pane

0x6a5c,	// (0x00037bd6) cursor_primary_pane

0x6a6d,	// (0x00037be7) cursor_primary_small_pane

0x6a75,	// (0x00037bef) cursor_secondary_pane

0x6a7d,	// (0x00037bf7) cursor_title_pane

0x6a5c,	// (0x00037bd6) link_highlight_digital_pane

0x6a64,	// (0x00037bde) link_highlight_primary_pane

0x6a6d,	// (0x00037be7) link_highlight_primary_small_pane

0x6a75,	// (0x00037bef) link_highlight_secondary_pane

0x6a7d,	// (0x00037bf7) link_highlight_title_pane

0x6a5c,	// (0x00037bd6) copy_highlight_digital_pane

0x6a5c,	// (0x00037bd6) copy_highlight_primary_pane

0x6a6d,	// (0x00037be7) copy_highlight_primary_small_pane

0x6a75,	// (0x00037bef) copy_highlight_secondary_pane

0x6a7d,	// (0x00037bf7) copy_highlight_title_pane

0x6a75,	// (0x00037bef) graphic_text_digital_pane

0x99c3,	// (0x0003ab3d) graphic_text_primary_pane

0x99cc,	// (0x0003ab46) graphic_text_primary_small_pane

0x6a6d,	// (0x00037be7) graphic_text_secondary_pane

0x6a5c,	// (0x00037bd6) graphic_text_title_pane

0x6a85,	// (0x00037bff) cursor_primary_pane_g1

0x99b5,	// (0x0003ab2f) cursor_text_primary_t1

0x999d,	// (0x0003ab17) cursor_primary_small_pane_g1

0x99a7,	// (0x0003ab21) cursor_text_primary_small_t1

0x9985,	// (0x0003aaff) cursor_primary_small_pane_g1_copy1

0x998f,	// (0x0003ab09) cursor_text_primary_small_t1_copy1

0x996d,	// (0x0003aae7) cursor_text_title_t1

0x997b,	// (0x0003aaf5) cursor_title_pane_g1

0x6a85,	// (0x00037bff) cursor_digital_pane_g1

0x6a8f,	// (0x00037c09) cursor_text_digital_t1

0x6a9d,	// (0x00037c17) link_highlight_primary_pane_g1

0x9916,	// (0x0003aa90) link_highlight_primary_pane_t1

0x6a9d,	// (0x00037c17) link_highlight_primary_small_pane_g1

0x6aa5,	// (0x00037c1f) link_highlight_primary_small_pane_t1

0x6ab4,	// (0x00037c2e) link_highlight_secondary_pane_g1

0x6abc,	// (0x00037c36) link_highlight_secondary_pane_t1

0x988a,	// (0x0003aa04) link_highlight_title_pane_g1

0x9892,	// (0x0003aa0c) link_highlight_title_pane_t1

0x9873,	// (0x0003a9ed) link_highlight_digital_pane_g1

0x987b,	// (0x0003a9f5) link_highlight_digital_pane_t1

0x973b,	// (0x0003a8b5) copy_highlight_primary_pane_g1

0x9752,	// (0x0003a8cc) copy_highlight_primary_pane_t1

0x973b,	// (0x0003a8b5) copy_highlight_primary_small_pane_g1

0x9743,	// (0x0003a8bd) copy_highlight_primary_small_pane_t1

0x6acb,	// (0x00037c45) copy_highlight_secondary_pane_g1

0x6ad3,	// (0x00037c4d) copy_highlight_secondary_pane_t1

0x9724,	// (0x0003a89e) copy_highlight_title_pane_g1

0x972c,	// (0x0003a8a6) copy_highlight_title_pane_t1

0x973b,	// (0x0003a8b5) copy_highlight_digital_pane_g1

0xaa3e,	// (0x0003bbb8) copy_highlight_digital_pane_t1

0xa992,	// (0x0003bb0c) graphic_text_primary_pane_g1

0xaa22,	// (0x0003bb9c) graphic_text_primary_pane_t1

0xaa30,	// (0x0003bbaa) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x00040b43) graphic_text_primary_pane_t

0xa9fe,	// (0x0003bb78) graphic_text_primary_small_pane_g1

0xaa06,	// (0x0003bb80) graphic_text_primary_small_pane_t1

0xaa14,	// (0x0003bb8e) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00040b3e) graphic_text_primary_small_pane_t

0xa9da,	// (0x0003bb54) graphic_text_secondary_pane_g1

0xa9e2,	// (0x0003bb5c) graphic_text_secondary_pane_t1

0xa9f0,	// (0x0003bb6a) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00040b39) graphic_text_secondary_pane_t

0xa9b6,	// (0x0003bb30) graphic_text_title_pane_g1

0xa9be,	// (0x0003bb38) graphic_text_title_pane_t1

0xa9cc,	// (0x0003bb46) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x00040b34) graphic_text_title_pane_t

0xa992,	// (0x0003bb0c) graphic_text_digital_pane_g1

0xa99a,	// (0x0003bb14) graphic_text_digital_pane_t1

0xa9a8,	// (0x0003bb22) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00040b2f) graphic_text_digital_pane_t

0xef84,	// (0x000400fe) navi_icon_pane_srt_ParamLimits

0xef84,	// (0x000400fe) navi_icon_pane_srt

0xe569,	// (0x0003f6e3) navi_midp_pane_srt

0xe569,	// (0x0003f6e3) navi_navi_pane_srt

0xef84,	// (0x000400fe) navi_text_pane_srt_ParamLimits

0xef84,	// (0x000400fe) navi_text_pane_srt

0xa95d,	// (0x0003bad7) navi_navi_icon_text_pane_srt

0xa965,	// (0x0003badf) navi_navi_pane_srt_g1_ParamLimits

0xa965,	// (0x0003badf) navi_navi_pane_srt_g1

0xa977,	// (0x0003baf1) navi_navi_pane_srt_g2_ParamLimits

0xa977,	// (0x0003baf1) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x00040b2a) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x00040b2a) navi_navi_pane_srt_g

0xa989,	// (0x0003bb03) navi_navi_tabs_pane_srt

0xa95d,	// (0x0003bad7) navi_navi_text_pane_srt

0xa95d,	// (0x0003bad7) navi_navi_volume_pane_srt

0xa94e,	// (0x0003bac8) navi_navi_text_pane_srt_t1

0x74d7,	// (0x00038651) navi_navi_volume_pane_srt_g1

0x74df,	// (0x00038659) volume_small_pane_srt_ParamLimits

0x74df,	// (0x00038659) volume_small_pane_srt

0x6ae2,	// (0x00037c5c) volume_small_pane_srt_g1_ParamLimits

0x6ae2,	// (0x00037c5c) volume_small_pane_srt_g1

0x6af2,	// (0x00037c6c) volume_small_pane_srt_g2_ParamLimits

0x6af2,	// (0x00037c6c) volume_small_pane_srt_g2

0x6b03,	// (0x00037c7d) volume_small_pane_srt_g3_ParamLimits

0x6b03,	// (0x00037c7d) volume_small_pane_srt_g3

0x6b14,	// (0x00037c8e) volume_small_pane_srt_g4_ParamLimits

0x6b14,	// (0x00037c8e) volume_small_pane_srt_g4

0x6b25,	// (0x00037c9f) volume_small_pane_srt_g5_ParamLimits

0x6b25,	// (0x00037c9f) volume_small_pane_srt_g5

0x6b36,	// (0x00037cb0) volume_small_pane_srt_g6_ParamLimits

0x6b36,	// (0x00037cb0) volume_small_pane_srt_g6

0x6b47,	// (0x00037cc1) volume_small_pane_srt_g7_ParamLimits

0x6b47,	// (0x00037cc1) volume_small_pane_srt_g7

0x6b58,	// (0x00037cd2) volume_small_pane_srt_g8_ParamLimits

0x6b58,	// (0x00037cd2) volume_small_pane_srt_g8

0x6b69,	// (0x00037ce3) volume_small_pane_srt_g9_ParamLimits

0x6b69,	// (0x00037ce3) volume_small_pane_srt_g9

0x6b7a,	// (0x00037cf4) volume_small_pane_srt_g10_ParamLimits

0x6b7a,	// (0x00037cf4) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x000408d2) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x000408d2) volume_small_pane_srt_g

0xf222,	// (0x0004039c) query_popup_data_pane_cp2

0xa934,	// (0x0003baae) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa934,	// (0x0003baae) navi_navi_icon_text_pane_srt_t1

0x99c3,	// (0x0003ab3d) navi_tabs_2_long_pane_srt

0x99c3,	// (0x0003ab3d) navi_tabs_2_pane_srt

0x99c3,	// (0x0003ab3d) navi_tabs_3_long_pane_srt

0x99c3,	// (0x0003ab3d) navi_tabs_3_pane_srt

0x99c3,	// (0x0003ab3d) navi_tabs_4_pane_srt

0x74b7,	// (0x00038631) tabs_2_active_pane_srt_ParamLimits

0x74b7,	// (0x00038631) tabs_2_active_pane_srt

0x74c7,	// (0x00038641) tabs_2_passive_pane_srt_ParamLimits

0x74c7,	// (0x00038641) tabs_2_passive_pane_srt

0x6ea9,	// (0x00038023) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6ea9,	// (0x00038023) bg_passive_tab_pane_cp1_srt

0xa900,	// (0x0003ba7a) bg_passive_tab_pane_g1_cp1_srt

0x2553,	// (0x000336cd) bg_passive_tab_pane_g2_cp1_srt

0xa909,	// (0x0003ba83) bg_passive_tab_pane_g3_cp1_srt

0xef84,	// (0x000400fe) bg_active_tab_pane_cp1_srt_ParamLimits

0xef84,	// (0x000400fe) bg_active_tab_pane_cp1_srt

0xa912,	// (0x0003ba8c) tabs_2_active_pane_srt_g1

0xa91a,	// (0x0003ba94) tabs_2_active_pane_srt_t1_ParamLimits

0xa91a,	// (0x0003ba94) tabs_2_active_pane_srt_t1

0xa900,	// (0x0003ba7a) bg_active_tab_pane_g1_cp1_srt

0x2553,	// (0x000336cd) bg_active_tab_pane_g2_cp1_srt

0xa909,	// (0x0003ba83) bg_active_tab_pane_g3_cp1_srt

0x7484,	// (0x000385fe) tabs_3_active_pane_srt_ParamLimits

0x7484,	// (0x000385fe) tabs_3_active_pane_srt

0x7495,	// (0x0003860f) tabs_3_passive_pane_cp_srt_ParamLimits

0x7495,	// (0x0003860f) tabs_3_passive_pane_cp_srt

0x74a6,	// (0x00038620) tabs_3_passive_pane_srt_ParamLimits

0x74a6,	// (0x00038620) tabs_3_passive_pane_srt

0x6ea9,	// (0x00038023) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6ea9,	// (0x00038023) bg_passive_tab_pane_cp2_srt

0x6b8b,	// (0x00037d05) bg_passive_tab_pane_g1_cp2_srt

0x2553,	// (0x000336cd) bg_passive_tab_pane_g2_cp2_srt

0x6b94,	// (0x00037d0e) bg_passive_tab_pane_g3_cp2_srt

0xef84,	// (0x000400fe) bg_active_tab_pane_cp2_srt_ParamLimits

0xef84,	// (0x000400fe) bg_active_tab_pane_cp2_srt

0xa8e6,	// (0x0003ba60) tabs_3_active_pane_srt_g1

0xa8ee,	// (0x0003ba68) tabs_3_active_pane_srt_t1_ParamLimits

0xa8ee,	// (0x0003ba68) tabs_3_active_pane_srt_t1

0x6b8b,	// (0x00037d05) bg_active_tab_pane_g1_cp2_srt

0x2553,	// (0x000336cd) bg_active_tab_pane_g2_cp2_srt

0x6b94,	// (0x00037d0e) bg_active_tab_pane_g3_cp2_srt

0x743c,	// (0x000385b6) tabs_4_active_pane_srt_ParamLimits

0x743c,	// (0x000385b6) tabs_4_active_pane_srt

0x744e,	// (0x000385c8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x744e,	// (0x000385c8) tabs_4_passive_pane_cp2_srt

0x6e2f,	// (0x00037fa9) aid_size_cell_toolbar

0x6149,	// (0x000372c3) main_idle_act_pane_ParamLimits

0x87bb,	// (0x00039935) popup_large_graphic_colour_window_ParamLimits

0x8b62,	// (0x00039cdc) popup_toolbar_window_ParamLimits

0x8b62,	// (0x00039cdc) popup_toolbar_window

0x3f22,	// (0x0003509c) list_single_graphic_2heading_pane_ParamLimits

0x3f22,	// (0x0003509c) list_single_graphic_2heading_pane

0x21b1,	// (0x0003332b) aid_size_cell_apps_grid_lsc_pane

0x21c3,	// (0x0003333d) aid_size_cell_apps_grid_prt_pane

0x6ea9,	// (0x00038023) bg_wml_button_pane_cp1_ParamLimits

0x6ea9,	// (0x00038023) bg_wml_button_pane_cp1

0x93bb,	// (0x0003a535) form_midp_field_text_pane_t1_ParamLimits

0x91a7,	// (0x0003a321) input_focus_pane_cp050_ParamLimits

0x93e6,	// (0x0003a560) list_midp_form_text_pane_ParamLimits

0x9398,	// (0x0003a512) input_focus_pane_cp051_ParamLimits

0x93ac,	// (0x0003a526) list_midp_choice_pane_ParamLimits

0x9260,	// (0x0003a3da) list_single_2graphic_pane_cp3_ParamLimits

0x9260,	// (0x0003a3da) list_single_2graphic_pane_cp3

0x9279,	// (0x0003a3f3) list_single_midp_graphic_pane_ParamLimits

0x9279,	// (0x0003a3f3) list_single_midp_graphic_pane

0x5314,	// (0x0003648e) list_single_graphic_2heading_pane_g1_ParamLimits

0x5314,	// (0x0003648e) list_single_graphic_2heading_pane_g1

0x5320,	// (0x0003649a) list_single_graphic_2heading_pane_g4_ParamLimits

0x5320,	// (0x0003649a) list_single_graphic_2heading_pane_g4

0x532c,	// (0x000364a6) list_single_graphic_2heading_pane_g5_ParamLimits

0x532c,	// (0x000364a6) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00040925) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00040925) list_single_graphic_2heading_pane_g

0x5338,	// (0x000364b2) list_single_graphic_2heading_pane_t1_ParamLimits

0x5338,	// (0x000364b2) list_single_graphic_2heading_pane_t1

0x534c,	// (0x000364c6) list_single_graphic_2heading_pane_t2_ParamLimits

0x534c,	// (0x000364c6) list_single_graphic_2heading_pane_t2

0x5368,	// (0x000364e2) list_single_graphic_2heading_pane_t3_ParamLimits

0x5368,	// (0x000364e2) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0004092c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0004092c) list_single_graphic_2heading_pane_t

0x9071,	// (0x0003a1eb) bg_popup_sub_pane_cp2

0x909b,	// (0x0003a215) grid_toobar_pane

0x6fd7,	// (0x00038151) cell_toolbar_pane_ParamLimits

0x6fd7,	// (0x00038151) cell_toolbar_pane

0x90d7,	// (0x0003a251) cell_toolbar_pane_g1_ParamLimits

0x90d7,	// (0x0003a251) cell_toolbar_pane_g1

0x90eb,	// (0x0003a265) cell_toolbar_pane_g2_ParamLimits

0x90eb,	// (0x0003a265) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0004093a) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0004093a) cell_toolbar_pane_g

0x910d,	// (0x0003a287) grid_highlight_pane_cp2_ParamLimits

0x910d,	// (0x0003a287) grid_highlight_pane_cp2

0x9127,	// (0x0003a2a1) toolbar_button_pane

0x9133,	// (0x0003a2ad) toolbar_button_pane_g1

0x913b,	// (0x0003a2b5) toolbar_button_pane_g2

0x9143,	// (0x0003a2bd) toolbar_button_pane_g3

0x914b,	// (0x0003a2c5) toolbar_button_pane_g4

0x9153,	// (0x0003a2cd) toolbar_button_pane_g5

0x915b,	// (0x0003a2d5) toolbar_button_pane_g6

0x9163,	// (0x0003a2dd) toolbar_button_pane_g7

0x916b,	// (0x0003a2e5) toolbar_button_pane_g8

0x9173,	// (0x0003a2ed) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0004093f) toolbar_button_pane_g

0x700f,	// (0x00038189) list_single_2graphic_pane_g1_cp3_ParamLimits

0x700f,	// (0x00038189) list_single_2graphic_pane_g1_cp3

0x701b,	// (0x00038195) list_single_2graphic_pane_g2_cp3_ParamLimits

0x701b,	// (0x00038195) list_single_2graphic_pane_g2_cp3

0x702c,	// (0x000381a6) list_single_2graphic_pane_g3_cp3

0x7034,	// (0x000381ae) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7034,	// (0x000381ae) list_single_2graphic_pane_g4_cp3

0x7040,	// (0x000381ba) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7040,	// (0x000381ba) list_single_2graphic_pane_t1_cp3

0x705b,	// (0x000381d5) list_single_midp_graphic_pane_g2_ParamLimits

0x705b,	// (0x000381d5) list_single_midp_graphic_pane_g2

0x6e37,	// (0x00037fb1) aid_zoom_text_primary

0x3db9,	// (0x00034f33) aid_zoom_text_secondary

0x6c45,	// (0x00037dbf) status_small_pane_g7_ParamLimits

0x6c45,	// (0x00037dbf) status_small_pane_g7

0x6c68,	// (0x00037de2) status_small_pane_t1_ParamLimits

0x57b2,	// (0x0003692c) title_pane_g2

0x0003,

0xf54e,	// (0x000406c8) title_pane_g

0x5a07,	// (0x00036b81) aid_size_cell_colour_1_pane_ParamLimits

0x5a07,	// (0x00036b81) aid_size_cell_colour_1_pane

0x5a1b,	// (0x00036b95) aid_size_cell_colour_2_pane_ParamLimits

0x5a1b,	// (0x00036b95) aid_size_cell_colour_2_pane

0x5a2f,	// (0x00036ba9) aid_size_cell_colour_3_pane_ParamLimits

0x5a2f,	// (0x00036ba9) aid_size_cell_colour_3_pane

0x5a43,	// (0x00036bbd) aid_size_cell_colour_4_pane_ParamLimits

0x5a43,	// (0x00036bbd) aid_size_cell_colour_4_pane

0x61a3,	// (0x0003731d) title_pane_stacon_g1_ParamLimits

0x61a3,	// (0x0003731d) title_pane_stacon_g1

0x97a9,	// (0x0003a923) popup_note_wait_window_g3_ParamLimits

0x97a9,	// (0x0003a923) popup_note_wait_window_g3

0x9820,	// (0x0003a99a) popup_note_wait_window_t5_ParamLimits

0x9820,	// (0x0003a99a) popup_note_wait_window_t5

0xe569,	// (0x0003f6e3) main_feb_china_hwr_fs_writing_pane

0x6f39,	// (0x000380b3) popup_feb_china_hwr_fs_window_ParamLimits

0x6f39,	// (0x000380b3) popup_feb_china_hwr_fs_window

0x707d,	// (0x000381f7) aid_size_cell_hwr_fs_ParamLimits

0x707d,	// (0x000381f7) aid_size_cell_hwr_fs

0x91a7,	// (0x0003a321) bg_popup_sub_pane_cp3_ParamLimits

0x91a7,	// (0x0003a321) bg_popup_sub_pane_cp3

0x7092,	// (0x0003820c) grid_hwr_fs_pane_ParamLimits

0x7092,	// (0x0003820c) grid_hwr_fs_pane

0x70aa,	// (0x00038224) linegrid_hwr_fs_pane_ParamLimits

0x70aa,	// (0x00038224) linegrid_hwr_fs_pane

0x70ba,	// (0x00038234) cell_hwr_fs_pane_ParamLimits

0x70ba,	// (0x00038234) cell_hwr_fs_pane

0x91b3,	// (0x0003a32d) linegrid_hwr_fs_pane_g1_ParamLimits

0x91b3,	// (0x0003a32d) linegrid_hwr_fs_pane_g1

0x91bf,	// (0x0003a339) linegrid_hwr_fs_pane_g2_ParamLimits

0x91bf,	// (0x0003a339) linegrid_hwr_fs_pane_g2

0x91d1,	// (0x0003a34b) linegrid_hwr_fs_pane_g3_ParamLimits

0x91d1,	// (0x0003a34b) linegrid_hwr_fs_pane_g3

0x70de,	// (0x00038258) linegrid_hwr_fs_pane_g4_ParamLimits

0x70de,	// (0x00038258) linegrid_hwr_fs_pane_g4

0x70fc,	// (0x00038276) linegrid_hwr_fs_pane_g5_ParamLimits

0x70fc,	// (0x00038276) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0004096a) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0004096a) linegrid_hwr_fs_pane_g

0x91dd,	// (0x0003a357) cell_hwr_fs_pane_g1_ParamLimits

0x91dd,	// (0x0003a357) cell_hwr_fs_pane_g1

0x8fa8,	// (0x0003a122) cell_hwr_fs_pane_g2_ParamLimits

0x8fa8,	// (0x0003a122) cell_hwr_fs_pane_g2

0x91f3,	// (0x0003a36d) cell_hwr_fs_pane_g3_ParamLimits

0x91f3,	// (0x0003a36d) cell_hwr_fs_pane_g3

0x9200,	// (0x0003a37a) cell_hwr_fs_pane_g4_ParamLimits

0x9200,	// (0x0003a37a) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x00040975) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00040975) cell_hwr_fs_pane_g

0x7112,	// (0x0003828c) cell_hwr_fs_pane_t1

0xe569,	// (0x0003f6e3) grid_highlight_pane_cp6

0xe569,	// (0x0003f6e3) main_idle_act2_pane

0x1fc0,	// (0x0003313a) aid_inside_area_popup_secondary

0x9e59,	// (0x0003afd3) aid_inside_area_window_primary_ParamLimits

0x9e59,	// (0x0003afd3) aid_inside_area_window_primary

0xaa4d,	// (0x0003bbc7) ai2_news_ticker_pane

0xaa55,	// (0x0003bbcf) aid_size_cell_ai1_link_ParamLimits

0xaa55,	// (0x0003bbcf) aid_size_cell_ai1_link

0xaa6f,	// (0x0003bbe9) popup_ai2_data_window_ParamLimits

0xaa6f,	// (0x0003bbe9) popup_ai2_data_window

0xaa8d,	// (0x0003bc07) popup_ai2_link_window_ParamLimits

0xaa8d,	// (0x0003bc07) popup_ai2_link_window

0x91a7,	// (0x0003a321) bg_popup_sub_pane_cp4_ParamLimits

0x91a7,	// (0x0003a321) bg_popup_sub_pane_cp4

0xaaa3,	// (0x0003bc1d) grid_ai2_link_pane_ParamLimits

0xaaa3,	// (0x0003bc1d) grid_ai2_link_pane

0xaaba,	// (0x0003bc34) popup_ai2_link_window_g1_ParamLimits

0xaaba,	// (0x0003bc34) popup_ai2_link_window_g1

0xaac6,	// (0x0003bc40) popup_ai2_link_window_g2_ParamLimits

0xaac6,	// (0x0003bc40) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00040b48) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00040b48) popup_ai2_link_window_g

0xaad7,	// (0x0003bc51) ai2_mp_button_pane

0xaadf,	// (0x0003bc59) ai2_mp_volume_pane

0x9398,	// (0x0003a512) bg_popup_sub_pane_cp5_ParamLimits

0x9398,	// (0x0003a512) bg_popup_sub_pane_cp5

0xaae7,	// (0x0003bc61) heading_ai2_gene_pane_ParamLimits

0xaae7,	// (0x0003bc61) heading_ai2_gene_pane

0xaaf3,	// (0x0003bc6d) list_ai2_gene_pane_ParamLimits

0xaaf3,	// (0x0003bc6d) list_ai2_gene_pane

0xab3b,	// (0x0003bcb5) cell_ai2_link_pane_ParamLimits

0xab3b,	// (0x0003bcb5) cell_ai2_link_pane

0xab51,	// (0x0003bccb) cell_ai2_link_pane_g1

0xe569,	// (0x0003f6e3) grid_highlight_pane_cp7

0x74f4,	// (0x0003866e) ai2_mp_volume_pane_g1

0xac24,	// (0x0003bd9e) ai2_mp_volume_pane_g2

0xab99,	// (0x0003bd13) list_ai2_gene_pane_t1

0xac2c,	// (0x0003bda6) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x00040b61) ai2_mp_volume_pane_g

0x74fc,	// (0x00038676) volume_small_pane_cp3

0xac34,	// (0x0003bdae) aid_size_cell_ai2_button

0xac3c,	// (0x0003bdb6) grid_ai2_button_pane

0xac45,	// (0x0003bdbf) cell_ai2_button_pane_ParamLimits

0xac45,	// (0x0003bdbf) cell_ai2_button_pane

0xe55f,	// (0x0003f6d9) cell_ai2_button_pane_g1

0xe569,	// (0x0003f6e3) grid_highlight_pane_cp8

0xabe4,	// (0x0003bd5e) ai2_gene_pane_t1_ParamLimits

0xabe4,	// (0x0003bd5e) ai2_gene_pane_t1

0x6e25,	// (0x00037f9f) aid_height_parent_landscape

0xa4eb,	// (0x0003b665) aid_height_set_list

0xa4fc,	// (0x0003b676) aid_size_parent

0xa86e,	// (0x0003b9e8) aid_size_cell_graphic_pane_ParamLimits

0xab03,	// (0x0003bc7d) popup_ai2_data_window_g1_ParamLimits

0xab03,	// (0x0003bc7d) popup_ai2_data_window_g1

0xab0f,	// (0x0003bc89) ai2_news_ticker_pane_g1

0xab17,	// (0x0003bc91) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00040b4d) ai2_news_ticker_pane_g

0xab1f,	// (0x0003bc99) ai2_news_ticker_pane_t1

0xab2d,	// (0x0003bca7) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x00040b52) ai2_news_ticker_pane_t

0xab5a,	// (0x0003bcd4) heading_ai2_gene_pane_g1

0xab62,	// (0x0003bcdc) heading_ai2_gene_pane_t1_ParamLimits

0xab62,	// (0x0003bcdc) heading_ai2_gene_pane_t1

0xab77,	// (0x0003bcf1) list_highlight_pane_cp6

0xab7f,	// (0x0003bcf9) ai2_gene_pane_ParamLimits

0xab7f,	// (0x0003bcf9) ai2_gene_pane

0xaba7,	// (0x0003bd21) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00040b57) list_ai2_gene_pane_t

0xabb5,	// (0x0003bd2f) list_highlight_pane_cp8_ParamLimits

0xabb5,	// (0x0003bd2f) list_highlight_pane_cp8

0xabc6,	// (0x0003bd40) ai2_gene_pane_g1_ParamLimits

0xabc6,	// (0x0003bd40) ai2_gene_pane_g1

0xabd8,	// (0x0003bd52) ai2_gene_pane_g2_ParamLimits

0xabd8,	// (0x0003bd52) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00040b5c) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00040b5c) ai2_gene_pane_g

0xf53d,	// (0x000406b7) scroll_pane_cp12

0x6ddc,	// (0x00037f56) control_pane_t3_ParamLimits

0x6ddc,	// (0x00037f56) control_pane_t3

0x6c59,	// (0x00037dd3) status_small_pane_g8_ParamLimits

0x6c59,	// (0x00037dd3) status_small_pane_g8

0x8780,	// (0x000398fa) popup_find_window_ParamLimits

0x89ab,	// (0x00039b25) popup_note_image_window_ParamLimits

0x3c5b,	// (0x00034dd5) list_double2_graphic_pane_vc_g1_ParamLimits

0x3c5b,	// (0x00034dd5) list_double2_graphic_pane_vc_g1

0x3e1d,	// (0x00034f97) list_double2_graphic_pane_vc_g2_ParamLimits

0x3e1d,	// (0x00034f97) list_double2_graphic_pane_vc_g2

0x3e29,	// (0x00034fa3) list_double2_graphic_pane_vc_g3_ParamLimits

0x3e29,	// (0x00034fa3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x00040933) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x00040933) list_double2_graphic_pane_vc_g

0x3e35,	// (0x00034faf) list_double2_graphic_pane_vc_t1_ParamLimits

0x3e35,	// (0x00034faf) list_double2_graphic_pane_vc_t1

0x3c31,	// (0x00034dab) list_single_heading_pane_vc_g1_ParamLimits

0x3c31,	// (0x00034dab) list_single_heading_pane_vc_g1

0x3c3d,	// (0x00034db7) list_single_heading_pane_vc_g2_ParamLimits

0x3c3d,	// (0x00034db7) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00040954) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00040954) list_single_heading_pane_vc_g

0x3e4b,	// (0x00034fc5) list_single_heading_pane_vc_t1_ParamLimits

0x3e4b,	// (0x00034fc5) list_single_heading_pane_vc_t1

0x3e63,	// (0x00034fdd) list_single_heading_pane_vc_t2_ParamLimits

0x3e63,	// (0x00034fdd) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x00040959) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x00040959) list_single_heading_pane_vc_t

0x3e75,	// (0x00034fef) list_setting_number_pane_vc_g1_ParamLimits

0x3e75,	// (0x00034fef) list_setting_number_pane_vc_g1

0x3e81,	// (0x00034ffb) list_setting_number_pane_vc_g2_ParamLimits

0x3e81,	// (0x00034ffb) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004095e) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004095e) list_setting_number_pane_vc_g

0x3e8d,	// (0x00035007) list_setting_number_pane_vc_t1_ParamLimits

0x3e8d,	// (0x00035007) list_setting_number_pane_vc_t1

0x3ea1,	// (0x0003501b) list_setting_number_pane_vc_t2_ParamLimits

0x3ea1,	// (0x0003501b) list_setting_number_pane_vc_t2

0x3ebd,	// (0x00035037) list_setting_number_pane_vc_t3_ParamLimits

0x3ebd,	// (0x00035037) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x00040963) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x00040963) list_setting_number_pane_vc_t

0x3eeb,	// (0x00035065) set_value_pane_vc_ParamLimits

0x3eeb,	// (0x00035065) set_value_pane_vc

0x3f22,	// (0x0003509c) list_double2_graphic_pane_vc_ParamLimits

0x3f22,	// (0x0003509c) list_double2_graphic_pane_vc

0xa6d4,	// (0x0003b84e) list_double2_large_graphic_pane_vc_ParamLimits

0xa6d4,	// (0x0003b84e) list_double2_large_graphic_pane_vc

0x3f22,	// (0x0003509c) list_double2_pane_vc_ParamLimits

0x3f22,	// (0x0003509c) list_double2_pane_vc

0x3f22,	// (0x0003509c) list_double_graphic_heading_pane_vc_ParamLimits

0x3f22,	// (0x0003509c) list_double_graphic_heading_pane_vc

0x3f22,	// (0x0003509c) list_double_graphic_pane_vc_ParamLimits

0x3f22,	// (0x0003509c) list_double_graphic_pane_vc

0x3f22,	// (0x0003509c) list_double_heading_pane_vc_ParamLimits

0x3f22,	// (0x0003509c) list_double_heading_pane_vc

0xa6e8,	// (0x0003b862) list_double_large_graphic_pane_vc_ParamLimits

0xa6e8,	// (0x0003b862) list_double_large_graphic_pane_vc

0x3f22,	// (0x0003509c) list_double_number_pane_vc_ParamLimits

0x3f22,	// (0x0003509c) list_double_number_pane_vc

0x3f22,	// (0x0003509c) list_double_pane_vc_ParamLimits

0x3f22,	// (0x0003509c) list_double_pane_vc

0x3f22,	// (0x0003509c) list_double_time_pane_vc_ParamLimits

0x3f22,	// (0x0003509c) list_double_time_pane_vc

0x3f22,	// (0x0003509c) list_setting_number_pane_vc_ParamLimits

0x3f22,	// (0x0003509c) list_setting_number_pane_vc

0x3f22,	// (0x0003509c) list_setting_pane_vc_ParamLimits

0x3f22,	// (0x0003509c) list_setting_pane_vc

0x3f22,	// (0x0003509c) list_single_graphic_heading_pane_vc_ParamLimits

0x3f22,	// (0x0003509c) list_single_graphic_heading_pane_vc

0x3f22,	// (0x0003509c) list_single_heading_pane_vc_ParamLimits

0x3f22,	// (0x0003509c) list_single_heading_pane_vc

0xa70a,	// (0x0003b884) list_single_number_heading_pane_vc_ParamLimits

0xa70a,	// (0x0003b884) list_single_number_heading_pane_vc

0x3c5b,	// (0x00034dd5) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3c5b,	// (0x00034dd5) list_double_graphic_heading_pane_vc_g1

0x3c31,	// (0x00034dab) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3c31,	// (0x00034dab) list_double_graphic_heading_pane_vc_g2

0x3c3d,	// (0x00034db7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3c3d,	// (0x00034db7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x00040b68) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00040b68) list_double_graphic_heading_pane_vc_g

0x3f37,	// (0x000350b1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3f37,	// (0x000350b1) list_double_graphic_heading_pane_vc_t1

0x3f4d,	// (0x000350c7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3f4d,	// (0x000350c7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x00040b6f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x00040b6f) list_double_graphic_heading_pane_vc_t

0x3e75,	// (0x00034fef) list_setting_pane_vc_g1_ParamLimits

0x3e75,	// (0x00034fef) list_setting_pane_vc_g1

0x3e81,	// (0x00034ffb) list_setting_pane_vc_g2_ParamLimits

0x3e81,	// (0x00034ffb) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004095e) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004095e) list_setting_pane_vc_g

0x3f6b,	// (0x000350e5) list_setting_pane_vc_t1_ParamLimits

0x3f6b,	// (0x000350e5) list_setting_pane_vc_t1

0x3f87,	// (0x00035101) list_setting_pane_vc_t2_ParamLimits

0x3f87,	// (0x00035101) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x00040b9d) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x00040b9d) list_setting_pane_vc_t

0x3eeb,	// (0x00035065) set_value_pane_cp_vc_ParamLimits

0x3eeb,	// (0x00035065) set_value_pane_cp_vc

0x3c31,	// (0x00034dab) list_single_number_heading_pane_vc_g1_ParamLimits

0x3c31,	// (0x00034dab) list_single_number_heading_pane_vc_g1

0x3c3d,	// (0x00034db7) list_single_number_heading_pane_vc_g2_ParamLimits

0x3c3d,	// (0x00034db7) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00040954) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00040954) list_single_number_heading_pane_vc_g

0x3e4b,	// (0x00034fc5) list_single_number_heading_pane_vc_t1_ParamLimits

0x3e4b,	// (0x00034fc5) list_single_number_heading_pane_vc_t1

0x3fa3,	// (0x0003511d) list_single_number_heading_pane_vc_t2_ParamLimits

0x3fa3,	// (0x0003511d) list_single_number_heading_pane_vc_t2

0x3c49,	// (0x00034dc3) list_single_number_heading_pane_vc_t3_ParamLimits

0x3c49,	// (0x00034dc3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x00040ba2) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x00040ba2) list_single_number_heading_pane_vc_t

0x3c5b,	// (0x00034dd5) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3c5b,	// (0x00034dd5) list_single_graphic_heading_pane_vc_g1

0x3c31,	// (0x00034dab) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3c31,	// (0x00034dab) list_single_graphic_heading_pane_vc_g4

0x3c3d,	// (0x00034db7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3c3d,	// (0x00034db7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x00040b68) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00040b68) list_single_graphic_heading_pane_vc_g

0x3e4b,	// (0x00034fc5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3e4b,	// (0x00034fc5) list_single_graphic_heading_pane_vc_t1

0x3fb5,	// (0x0003512f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3fb5,	// (0x0003512f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x00040ba9) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x00040ba9) list_single_graphic_heading_pane_vc_t

0x3c31,	// (0x00034dab) list_double2_pane_vc_g1_ParamLimits

0x3c31,	// (0x00034dab) list_double2_pane_vc_g1

0x3c3d,	// (0x00034db7) list_double2_pane_vc_g2_ParamLimits

0x3c3d,	// (0x00034db7) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x00040954) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x00040954) list_double2_pane_vc_g

0x3f0c,	// (0x00035086) list_double2_pane_vc_t1_ParamLimits

0x3f0c,	// (0x00035086) list_double2_pane_vc_t1

0x3c67,	// (0x00034de1) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3c67,	// (0x00034de1) list_double2_large_graphic_pane_vc_g1

0x3c73,	// (0x00034ded) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3c73,	// (0x00034ded) list_double2_large_graphic_pane_vc_g2

0x3c7f,	// (0x00034df9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3c7f,	// (0x00034df9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x00040bae) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x00040bae) list_double2_large_graphic_pane_vc_g

0x3c8b,	// (0x00034e05) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3c8b,	// (0x00034e05) list_double2_large_graphic_pane_vc_t1

0x3fc7,	// (0x00035141) list_double_time_pane_vc_g1_ParamLimits

0x3fc7,	// (0x00035141) list_double_time_pane_vc_g1

0x3fd3,	// (0x0003514d) list_double_time_pane_vc_g2_ParamLimits

0x3fd3,	// (0x0003514d) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x00040bb5) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x00040bb5) list_double_time_pane_vc_g

0x3fdf,	// (0x00035159) list_double_time_pane_vc_t1_ParamLimits

0x3fdf,	// (0x00035159) list_double_time_pane_vc_t1

0x4009,	// (0x00035183) list_double_time_pane_vc_t2_ParamLimits

0x4009,	// (0x00035183) list_double_time_pane_vc_t2

0x4052,	// (0x000351cc) list_double_time_pane_vc_t3_ParamLimits

0x4052,	// (0x000351cc) list_double_time_pane_vc_t3

0x4064,	// (0x000351de) list_double_time_pane_vc_t4_ParamLimits

0x4064,	// (0x000351de) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x00040bba) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x00040bba) list_double_time_pane_vc_t

0x3c31,	// (0x00034dab) list_double_pane_vc_g1_ParamLimits

0x3c31,	// (0x00034dab) list_double_pane_vc_g1

0x3c3d,	// (0x00034db7) list_double_pane_vc_g2_ParamLimits

0x3c3d,	// (0x00034db7) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x00040954) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x00040954) list_double_pane_vc_g

0x4089,	// (0x00035203) list_double_pane_vc_t1_ParamLimits

0x4089,	// (0x00035203) list_double_pane_vc_t1

0x409d,	// (0x00035217) list_double_pane_vc_t2_ParamLimits

0x409d,	// (0x00035217) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x00040bc3) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x00040bc3) list_double_pane_vc_t

0x3c31,	// (0x00034dab) list_double_number_pane_vc_g1_ParamLimits

0x3c31,	// (0x00034dab) list_double_number_pane_vc_g1

0x3c3d,	// (0x00034db7) list_double_number_pane_vc_g2_ParamLimits

0x3c3d,	// (0x00034db7) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x00040954) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x00040954) list_double_number_pane_vc_g

0x40b3,	// (0x0003522d) list_double_number_pane_vc_t1_ParamLimits

0x40b3,	// (0x0003522d) list_double_number_pane_vc_t1

0x40c7,	// (0x00035241) list_double_number_pane_vc_t2_ParamLimits

0x40c7,	// (0x00035241) list_double_number_pane_vc_t2

0x40db,	// (0x00035255) list_double_number_pane_vc_t3_ParamLimits

0x40db,	// (0x00035255) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x00040bc8) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x00040bc8) list_double_number_pane_vc_t

0x40f1,	// (0x0003526b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x40f1,	// (0x0003526b) list_double_large_graphic_pane_vc_g1

0x4119,	// (0x00035293) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4119,	// (0x00035293) list_double_large_graphic_pane_vc_g2

0x412d,	// (0x000352a7) list_double_large_graphic_pane_vc_g3_ParamLimits

0x412d,	// (0x000352a7) list_double_large_graphic_pane_vc_g3

0x413c,	// (0x000352b6) list_double_large_graphic_pane_vc_g4_ParamLimits

0x413c,	// (0x000352b6) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x00040bcf) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x00040bcf) list_double_large_graphic_pane_vc_g

0x414c,	// (0x000352c6) list_double_large_graphic_pane_vc_t1_ParamLimits

0x414c,	// (0x000352c6) list_double_large_graphic_pane_vc_t1

0x416e,	// (0x000352e8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x416e,	// (0x000352e8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x00040bd8) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x00040bd8) list_double_large_graphic_pane_vc_t

0x3c31,	// (0x00034dab) list_double_heading_pane_vc_g1_ParamLimits

0x3c31,	// (0x00034dab) list_double_heading_pane_vc_g1

0x3c3d,	// (0x00034db7) list_double_heading_pane_vc_g2_ParamLimits

0x3c3d,	// (0x00034db7) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00040954) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00040954) list_double_heading_pane_vc_g

0x418e,	// (0x00035308) list_double_heading_pane_vc_t1_ParamLimits

0x418e,	// (0x00035308) list_double_heading_pane_vc_t1

0x3e4b,	// (0x00034fc5) list_double_heading_pane_vc_t2_ParamLimits

0x3e4b,	// (0x00034fc5) list_double_heading_pane_vc_t2

0x0001,

0xfa63,	// (0x00040bdd) list_double_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x00040bdd) list_double_heading_pane_vc_t

0x41a0,	// (0x0003531a) list_double_graphic_pane_vc_g1_ParamLimits

0x41a0,	// (0x0003531a) list_double_graphic_pane_vc_g1

0x41b3,	// (0x0003532d) list_double_graphic_pane_vc_g2_ParamLimits

0x41b3,	// (0x0003532d) list_double_graphic_pane_vc_g2

0x3c31,	// (0x00034dab) list_double_graphic_pane_vc_g3_ParamLimits

0x3c31,	// (0x00034dab) list_double_graphic_pane_vc_g3

0x0003,

0xfa68,	// (0x00040be2) list_double_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00040be2) list_double_graphic_pane_vc_g

0x41d0,	// (0x0003534a) list_double_graphic_pane_vc_t1_ParamLimits

0x41d0,	// (0x0003534a) list_double_graphic_pane_vc_t1

0x41fa,	// (0x00035374) list_double_graphic_pane_vc_t2_ParamLimits

0x41fa,	// (0x00035374) list_double_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x00040beb) list_double_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x00040beb) list_double_graphic_pane_vc_t

0x53b4,	// (0x0003652e) aid_size_cell_fastswap

0x53bc,	// (0x00036536) aid_size_cell_touch_ParamLimits

0x53bc,	// (0x00036536) aid_size_cell_touch

0x5627,	// (0x000367a1) popup_fast_swap_wide_window_ParamLimits

0x5627,	// (0x000367a1) popup_fast_swap_wide_window

0x5745,	// (0x000368bf) touch_pane_ParamLimits

0x5745,	// (0x000368bf) touch_pane

0x1e99,	// (0x00033013) button_value_adjust_pane_cp2

0x3cc4,	// (0x00034e3e) button_value_adjust_pane_cp4

0x3ccc,	// (0x00034e46) form_field_data_pane_cp2

0x5f93,	// (0x0003710d) form_field_data_wide_pane_cp2

0x21ff,	// (0x00033379) bg_scroll_pane_ParamLimits

0x638b,	// (0x00037505) scroll_handle_pane_ParamLimits

0x639f,	// (0x00037519) scroll_sc2_down_pane_ParamLimits

0x639f,	// (0x00037519) scroll_sc2_down_pane

0x2230,	// (0x000333aa) scroll_sc2_up_pane_ParamLimits

0x2230,	// (0x000333aa) scroll_sc2_up_pane

0xb35e,	// (0x0003c4d8) grid_wheel_folder_pane_g1_ParamLimits

0xb35e,	// (0x0003c4d8) grid_wheel_folder_pane_g1

0x6731,	// (0x000378ab) clock_nsta_pane_cp2_ParamLimits

0x6731,	// (0x000378ab) clock_nsta_pane_cp2

0x6149,	// (0x000372c3) listscroll_midp_pane_ParamLimits

0x6940,	// (0x00037aba) midp_canvas_pane

0x6e1d,	// (0x00037f97) nsta_clock_indic_pane

0x6e73,	// (0x00037fed) listscroll_form_pane_vc

0x6e97,	// (0x00038011) listscroll_set_pane_vc_ParamLimits

0x6e97,	// (0x00038011) listscroll_set_pane_vc

0x8cfc,	// (0x00039e76) clock_nsta_pane

0x8d79,	// (0x00039ef3) indicator_nsta_pane

0x9071,	// (0x0003a1eb) bg_popup_sub_pane_cp2_ParamLimits

0x9085,	// (0x0003a1ff) find_pane_cp2_ParamLimits

0x9085,	// (0x0003a1ff) find_pane_cp2

0x909b,	// (0x0003a215) grid_toobar_pane_ParamLimits

0x917b,	// (0x0003a2f5) list_form_gen_pane_vc_ParamLimits

0x917b,	// (0x0003a2f5) list_form_gen_pane_vc

0x9191,	// (0x0003a30b) scroll_pane_cp8_vc_ParamLimits

0x9191,	// (0x0003a30b) scroll_pane_cp8_vc

0x920d,	// (0x0003a387) data_form_wide_pane_vc_ParamLimits

0x920d,	// (0x0003a387) data_form_wide_pane_vc

0x9219,	// (0x0003a393) form_field_data_wide_pane_vc_g1

0x9221,	// (0x0003a39b) form_field_data_wide_pane_vc_t1_ParamLimits

0x9221,	// (0x0003a39b) form_field_data_wide_pane_vc_t1

0x1ead,	// (0x00033027) input_focus_pane_cp6_vc_ParamLimits

0x1ead,	// (0x00033027) input_focus_pane_cp6_vc

0x9523,	// (0x0003a69d) list_midp_pane_ParamLimits

0x952f,	// (0x0003a6a9) scroll_pane_cp16_ParamLimits

0x952f,	// (0x0003a6a9) scroll_pane_cp16

0x957d,	// (0x0003a6f7) button_value_adjust_pane_ParamLimits

0x957d,	// (0x0003a6f7) button_value_adjust_pane

0xa50e,	// (0x0003b688) button_value_adjust_pane_cp6_ParamLimits

0xa50e,	// (0x0003b688) button_value_adjust_pane_cp6

0xa65c,	// (0x0003b7d6) settings_code_pane_cp_ParamLimits

0xa65c,	// (0x0003b7d6) settings_code_pane_cp

0xe55f,	// (0x0003f6d9) cell_touch_pane_g1

0xe55f,	// (0x0003f6d9) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00040878) cell_touch_pane_g

0xac57,	// (0x0003bdd1) cell_touch_pane_cp_ParamLimits

0xac57,	// (0x0003bdd1) cell_touch_pane_cp

0xac67,	// (0x0003bde1) cell_touch_pane_ParamLimits

0xac67,	// (0x0003bde1) cell_touch_pane

0xe55f,	// (0x0003f6d9) scroll_sc2_down_pane_g1

0xe55f,	// (0x0003f6d9) scroll_sc2_up_pane_g1

0xe569,	// (0x0003f6e3) bg_set_opt_pane_cp4_vc

0xac78,	// (0x0003bdf2) list_set_graphic_pane_vc_g1_ParamLimits

0xac78,	// (0x0003bdf2) list_set_graphic_pane_vc_g1

0x2733,	// (0x000338ad) list_set_graphic_pane_vc_g2_ParamLimits

0x2733,	// (0x000338ad) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x00040b74) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x00040b74) list_set_graphic_pane_vc_g

0xac84,	// (0x0003bdfe) text_primary_small_cp13_vc_ParamLimits

0xac84,	// (0x0003bdfe) text_primary_small_cp13_vc

0xac9c,	// (0x0003be16) list_set_graphic_pane_vc_ParamLimits

0xac9c,	// (0x0003be16) list_set_graphic_pane_vc

0xe569,	// (0x0003f6e3) input_focus_pane_cp2_vc

0xe55f,	// (0x0003f6d9) setting_code_pane_vc_g1

0xef9b,	// (0x00040115) setting_code_pane_vc_t1

0xacb1,	// (0x0003be2b) set_text_pane_vc_t1_ParamLimits

0xacb1,	// (0x0003be2b) set_text_pane_vc_t1

0xe569,	// (0x0003f6e3) input_focus_pane_cp1_vc

0xaccf,	// (0x0003be49) list_set_text_pane_vc

0xe55f,	// (0x0003f6d9) setting_text_pane_vc_g1

0xe569,	// (0x0003f6e3) bg_set_opt_pane_cp2_vc

0xef92,	// (0x0004010c) setting_slider_graphic_pane_vc_g1

0xacd9,	// (0x0003be53) setting_slider_graphic_pane_vc_t1

0xaceb,	// (0x0003be65) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x00040b79) setting_slider_graphic_pane_vc_t

0xacfd,	// (0x0003be77) slider_set_pane_cp_vc

0xad07,	// (0x0003be81) slider_set_pane_vc_g1

0xad10,	// (0x0003be8a) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x00040b7e) slider_set_pane_vc_g

0x1f08,	// (0x00033082) set_opt_bg_pane_g1_copy1

0x1f10,	// (0x0003308a) set_opt_bg_pane_g2_copy1

0xad3c,	// (0x0003beb6) set_opt_bg_pane_g3_copy1

0x1f20,	// (0x0003309a) set_opt_bg_pane_g4_copy1

0x1f28,	// (0x000330a2) set_opt_bg_pane_g5_copy1

0x1f30,	// (0x000330aa) set_opt_bg_pane_g6_copy1

0xad46,	// (0x0003bec0) set_opt_bg_pane_g7_copy1

0xad50,	// (0x0003beca) set_opt_bg_pane_g8_copy1

0xad5a,	// (0x0003bed4) set_opt_bg_pane_g9_copy1

0xe569,	// (0x0003f6e3) bg_set_opt_pane_cp_vc

0xad64,	// (0x0003bede) setting_slider_pane_vc_t1

0xad73,	// (0x0003beed) setting_slider_pane_vc_t2

0xad85,	// (0x0003beff) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x00040b8d) setting_slider_pane_vc_t

0xad97,	// (0x0003bf11) slider_set_pane_vc

0x7143,	// (0x000382bd) volume_set_pane_vc_g1

0x714c,	// (0x000382c6) volume_set_pane_vc_g2

0x7155,	// (0x000382cf) volume_set_pane_vc_g3

0x715e,	// (0x000382d8) volume_set_pane_vc_g4

0x7167,	// (0x000382e1) volume_set_pane_vc_g5

0x7170,	// (0x000382ea) volume_set_pane_vc_g6

0x7179,	// (0x000382f3) volume_set_pane_vc_g7

0x7182,	// (0x000382fc) volume_set_pane_vc_g8

0x718b,	// (0x00038305) volume_set_pane_vc_g9

0x7194,	// (0x0003830e) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x00040a2b) volume_set_pane_vc_g

0xada1,	// (0x0003bf1b) volume_set_pane_vc

0xadab,	// (0x0003bf25) button_value_adjust_pane_cp1_vc

0xadb5,	// (0x0003bf2f) list_highlight_pane_cp2_vc

0xadbe,	// (0x0003bf38) list_set_pane_vc_ParamLimits

0xadbe,	// (0x0003bf38) list_set_pane_vc

0xae2e,	// (0x0003bfa8) main_pane_set_vc_t1_ParamLimits

0xae2e,	// (0x0003bfa8) main_pane_set_vc_t1

0xae43,	// (0x0003bfbd) main_pane_set_vc_t2_ParamLimits

0xae43,	// (0x0003bfbd) main_pane_set_vc_t2

0xae55,	// (0x0003bfcf) main_pane_set_vc_t3_ParamLimits

0xae55,	// (0x0003bfcf) main_pane_set_vc_t3

0xae69,	// (0x0003bfe3) main_pane_set_vc_t4_ParamLimits

0xae69,	// (0x0003bfe3) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x00040b94) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x00040b94) main_pane_set_vc_t

0xae7d,	// (0x0003bff7) setting_code_pane_vc_ParamLimits

0xae7d,	// (0x0003bff7) setting_code_pane_vc

0xae8e,	// (0x0003c008) setting_slider_graphic_pane_vc

0xae8e,	// (0x0003c008) setting_slider_pane_vc

0xae8e,	// (0x0003c008) setting_text_pane_vc

0xae8e,	// (0x0003c008) setting_volume_pane_vc

0xae98,	// (0x0003c012) scroll_pane_cp121_vc

0x1e87,	// (0x00033001) set_content_pane_vc

0xaea0,	// (0x0003c01a) button_value_adjust_pane_g1

0xaea9,	// (0x0003c023) button_value_adjust_pane_g2

0x0001,

0xfa76,	// (0x00040bf0) button_value_adjust_pane_g

0xaeb2,	// (0x0003c02c) form_field_slider_wide_pane_vc_t1_ParamLimits

0xaeb2,	// (0x0003c02c) form_field_slider_wide_pane_vc_t1

0xaec4,	// (0x0003c03e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xaec4,	// (0x0003c03e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7b,	// (0x00040bf5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x00040bf5) form_field_slider_wide_pane_vc_t

0xf0b7,	// (0x00040231) input_focus_pane_cp10_vc_ParamLimits

0xf0b7,	// (0x00040231) input_focus_pane_cp10_vc

0xaef0,	// (0x0003c06a) slider_cont_pane_cp1_vc_ParamLimits

0xaef0,	// (0x0003c06a) slider_cont_pane_cp1_vc

0xaf02,	// (0x0003c07c) slider_form_pane_g1_cp2

0xad10,	// (0x0003be8a) slider_form_pane_g2_cp2

0xaf2f,	// (0x0003c0a9) form_field_slider_pane_vc_t3

0xaf3d,	// (0x0003c0b7) form_field_slider_pane_vc_t4

0xaf4b,	// (0x0003c0c5) slider_form_pane_vc_ParamLimits

0xaf4b,	// (0x0003c0c5) slider_form_pane_vc

0xaf58,	// (0x0003c0d2) form_field_slider_pane_vc_t1_ParamLimits

0xaf58,	// (0x0003c0d2) form_field_slider_pane_vc_t1

0xaec4,	// (0x0003c03e) form_field_slider_pane_vc_t2_ParamLimits

0xaec4,	// (0x0003c03e) form_field_slider_pane_vc_t2

0x0001,

0xfa8d,	// (0x00040c07) form_field_slider_pane_vc_t_ParamLimits

0xfa8d,	// (0x00040c07) form_field_slider_pane_vc_t

0xf0b7,	// (0x00040231) input_focus_pane_cp9_vc_ParamLimits

0xf0b7,	// (0x00040231) input_focus_pane_cp9_vc

0xaf6e,	// (0x0003c0e8) slider_cont_pane_vc_ParamLimits

0xaf6e,	// (0x0003c0e8) slider_cont_pane_vc

0xaf82,	// (0x0003c0fc) list_form_graphic_pane_cp_vc_ParamLimits

0xaf82,	// (0x0003c0fc) list_form_graphic_pane_cp_vc

0x9219,	// (0x0003a393) form_field_popup_wide_pane_vc_g1

0xaf97,	// (0x0003c111) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaf97,	// (0x0003c111) form_field_popup_wide_pane_vc_t1

0x1ead,	// (0x00033027) input_focus_pane_cp8_vc_ParamLimits

0x1ead,	// (0x00033027) input_focus_pane_cp8_vc

0xafdc,	// (0x0003c156) list_form_wide_pane_vc_ParamLimits

0xafdc,	// (0x0003c156) list_form_wide_pane_vc

0xafe8,	// (0x0003c162) list_form_graphic_pane_vc_g1

0xaff0,	// (0x0003c16a) list_form_graphic_pane_vc_t1_ParamLimits

0xaff0,	// (0x0003c16a) list_form_graphic_pane_vc_t1

0xef84,	// (0x000400fe) list_highlight_pane_cp5_vc_ParamLimits

0xef84,	// (0x000400fe) list_highlight_pane_cp5_vc

0xb00c,	// (0x0003c186) list_form_graphic_pane_vc_ParamLimits

0xb00c,	// (0x0003c186) list_form_graphic_pane_vc

0x9219,	// (0x0003a393) form_field_popup_pane_vc_g1

0xb022,	// (0x0003c19c) form_field_popup_pane_vc_t1_ParamLimits

0xb022,	// (0x0003c19c) form_field_popup_pane_vc_t1

0x1ead,	// (0x00033027) input_focus_pane_cp7_vc_ParamLimits

0x1ead,	// (0x00033027) input_focus_pane_cp7_vc

0xb039,	// (0x0003c1b3) list_form_pane_vc_ParamLimits

0xb039,	// (0x0003c1b3) list_form_pane_vc

0xb045,	// (0x0003c1bf) data_form_pane_vc_t1_ParamLimits

0xb045,	// (0x0003c1bf) data_form_pane_vc_t1

0x1f08,	// (0x00033082) input_focus_pane_vc_g1

0x1f10,	// (0x0003308a) input_focus_pane_vc_g2

0x1f18,	// (0x00033092) input_focus_pane_vc_g3

0x1f20,	// (0x0003309a) input_focus_pane_vc_g4

0x1f28,	// (0x000330a2) input_focus_pane_vc_g5

0x1f30,	// (0x000330aa) input_focus_pane_vc_g6

0x1f38,	// (0x000330b2) input_focus_pane_vc_g7

0x1f40,	// (0x000330ba) input_focus_pane_vc_g8

0x1f48,	// (0x000330c2) input_focus_pane_vc_g9

0xe55f,	// (0x0003f6d9) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00040801) input_focus_pane_vc_g

0x920d,	// (0x0003a387) data_form_pane_vc_ParamLimits

0x920d,	// (0x0003a387) data_form_pane_vc

0x9219,	// (0x0003a393) form_field_data_pane_vc_g1

0xb062,	// (0x0003c1dc) form_field_data_pane_vc_t1_ParamLimits

0xb062,	// (0x0003c1dc) form_field_data_pane_vc_t1

0x1ead,	// (0x00033027) input_focus_pane_vc_ParamLimits

0x1ead,	// (0x00033027) input_focus_pane_vc

0xb07c,	// (0x0003c1f6) button_value_adjust_pane_cp3_vc

0xb084,	// (0x0003c1fe) button_value_adjust_pane_cp5_vc

0xb08c,	// (0x0003c206) form_field_data_pane_vc_ParamLimits

0xb08c,	// (0x0003c206) form_field_data_pane_vc

0xb0a7,	// (0x0003c221) form_field_data_pane_vc_cp2

0xb0af,	// (0x0003c229) form_field_data_wide_pane_vc_ParamLimits

0xb0af,	// (0x0003c229) form_field_data_wide_pane_vc

0xb0c9,	// (0x0003c243) form_field_data_wide_pane_vc_cp2

0xb0d1,	// (0x0003c24b) form_field_popup_pane_vc_ParamLimits

0xb0d1,	// (0x0003c24b) form_field_popup_pane_vc

0xb0ec,	// (0x0003c266) form_field_popup_wide_pane_vc_ParamLimits

0xb0ec,	// (0x0003c266) form_field_popup_wide_pane_vc

0xb106,	// (0x0003c280) form_field_slider_pane_vc_ParamLimits

0xb106,	// (0x0003c280) form_field_slider_pane_vc

0xb119,	// (0x0003c293) form_field_slider_wide_pane_vc_ParamLimits

0xb119,	// (0x0003c293) form_field_slider_wide_pane_vc

0xb12c,	// (0x0003c2a6) grid_touch_1_pane_ParamLimits

0xb12c,	// (0x0003c2a6) grid_touch_1_pane

0xb138,	// (0x0003c2b2) grid_touch_2_pane_ParamLimits

0xb138,	// (0x0003c2b2) grid_touch_2_pane

0x6cec,	// (0x00037e66) touch_pane_g1_ParamLimits

0x6cec,	// (0x00037e66) touch_pane_g1

0xb152,	// (0x0003c2cc) cell_app_pane_cp_wide_ParamLimits

0xb152,	// (0x0003c2cc) cell_app_pane_cp_wide

0xb163,	// (0x0003c2dd) grid_popup_fast_wide_pane_ParamLimits

0xb163,	// (0x0003c2dd) grid_popup_fast_wide_pane

0xb177,	// (0x0003c2f1) scroll_pane_cp19_ParamLimits

0xb177,	// (0x0003c2f1) scroll_pane_cp19

0xe569,	// (0x0003f6e3) bg_popup_window_pane_cp20

0xb18b,	// (0x0003c305) listscroll_popup_fast_wide_pane

0xef84,	// (0x000400fe) grid_indicator_nsta_pane

0xb193,	// (0x0003c30d) clock_nsta_pane_g1

0xb19c,	// (0x0003c316) clock_nsta_pane_t1

0xb1b8,	// (0x0003c332) cell_indicator_nsta_pane_ParamLimits

0xb1b8,	// (0x0003c332) cell_indicator_nsta_pane

0xb1ea,	// (0x0003c364) cell_indicator_nsta_pane_g1

0xb1f8,	// (0x0003c372) cell_indicator_nsta_pane_g2

0x0001,

0xfa9e,	// (0x00040c18) cell_indicator_nsta_pane_g

0xb20e,	// (0x0003c388) clock_nsta_pane_cp

0xb216,	// (0x0003c390) indicator_nsta_pane_cp

0xb21f,	// (0x0003c399) nsta_clock_indic_pane_g1

0xefc0,	// (0x0004013a) grid_indicator_pane

0x2322,	// (0x0003349c) scroll_pane_cp29

0x667d,	// (0x000377f7) indicator_nsta_pane_cp2_ParamLimits

0x667d,	// (0x000377f7) indicator_nsta_pane_cp2

0xef84,	// (0x000400fe) main_apps_wheel_pane

0x9400,	// (0x0003a57a) form_midp_field_text_pane_ParamLimits

0x954f,	// (0x0003a6c9) scroll_bar_cp050_ParamLimits

0xb288,	// (0x0003c402) cell_indicator_pane_ParamLimits

0xb288,	// (0x0003c402) cell_indicator_pane

0xb2a0,	// (0x0003c41a) cell_indicator_pane_g1

0xb2aa,	// (0x0003c424) grid_wheel_folder_pane_ParamLimits

0xb2aa,	// (0x0003c424) grid_wheel_folder_pane

0xb2be,	// (0x0003c438) list_wheel_apps_pane_ParamLimits

0xb2be,	// (0x0003c438) list_wheel_apps_pane

0xb2d1,	// (0x0003c44b) main_apps_wheel_pane_g1_ParamLimits

0xb2d1,	// (0x0003c44b) main_apps_wheel_pane_g1

0xb2ed,	// (0x0003c467) main_apps_wheel_pane_g2_ParamLimits

0xb2ed,	// (0x0003c467) main_apps_wheel_pane_g2

0x0001,

0xfaba,	// (0x00040c34) main_apps_wheel_pane_g_ParamLimits

0xfaba,	// (0x00040c34) main_apps_wheel_pane_g

0xb309,	// (0x0003c483) main_apps_wheel_pane_t1_ParamLimits

0xb309,	// (0x0003c483) main_apps_wheel_pane_t1

0xb332,	// (0x0003c4ac) list_wheel_apps_pane_g1

0xb33a,	// (0x0003c4b4) list_wheel_apps_pane_g2

0xb342,	// (0x0003c4bc) list_wheel_apps_pane_g3

0xb34a,	// (0x0003c4c4) list_wheel_apps_pane_g4

0xb354,	// (0x0003c4ce) list_wheel_apps_pane_g5

0x0004,

0xfabf,	// (0x00040c39) list_wheel_apps_pane_g

0x26a2,	// (0x0003381c) navi_icon_text_pane

0x8c29,	// (0x00039da3) aid_fill_nsta

0xb375,	// (0x0003c4ef) navi_icon_text_pane_g1

0xb381,	// (0x0003c4fb) navi_icon_text_pane_t1

0x67c6,	// (0x00037940) list_set_graphic_pane_t1_ParamLimits

0x67c6,	// (0x00037940) list_set_graphic_pane_t1

0x9ca0,	// (0x0003ae1a) popup_midp_note_alarm_window_t6_ParamLimits

0x9ca0,	// (0x0003ae1a) popup_midp_note_alarm_window_t6

0x9cb2,	// (0x0003ae2c) popup_midp_note_alarm_window_t7_ParamLimits

0x9cb2,	// (0x0003ae2c) popup_midp_note_alarm_window_t7

0x9cc4,	// (0x0003ae3e) popup_midp_note_alarm_window_t8_ParamLimits

0x9cc4,	// (0x0003ae3e) popup_midp_note_alarm_window_t8

0x9cd6,	// (0x0003ae50) popup_midp_note_alarm_window_t9_ParamLimits

0x9cd6,	// (0x0003ae50) popup_midp_note_alarm_window_t9

0x9ce8,	// (0x0003ae62) popup_midp_note_alarm_window_t10_ParamLimits

0x9ce8,	// (0x0003ae62) popup_midp_note_alarm_window_t10

0x9cfa,	// (0x0003ae74) popup_midp_note_alarm_window_t11_ParamLimits

0x9cfa,	// (0x0003ae74) popup_midp_note_alarm_window_t11

0x9d0c,	// (0x0003ae86) scroll_pane_cp17_ParamLimits

0x9d0c,	// (0x0003ae86) scroll_pane_cp17

0x7143,	// (0x000382bd) volume_small_pane_cp_g1

0x7505,	// (0x0003867f) volume_small_pane_cp_g2

0x750e,	// (0x00038688) volume_small_pane_cp_g3

0x7517,	// (0x00038691) volume_small_pane_cp_g4

0x7520,	// (0x0003869a) volume_small_pane_cp_g5

0x7529,	// (0x000386a3) volume_small_pane_cp_g6

0x7532,	// (0x000386ac) volume_small_pane_cp_g7

0x753b,	// (0x000386b5) volume_small_pane_cp_g8

0x7544,	// (0x000386be) volume_small_pane_cp_g9

0x754d,	// (0x000386c7) volume_small_pane_cp_g10

0x6a09,	// (0x00037b83) midp_ticker_pane_g1_ParamLimits

0x6a15,	// (0x00037b8f) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x000408cd) midp_ticker_pane_g_ParamLimits

0x6a21,	// (0x00037b9b) midp_ticker_pane_t1_ParamLimits

0x8c3f,	// (0x00039db9) aid_fill_nsta_2

0x953b,	// (0x0003a6b5) list_form2_midp_pane

0xa6a3,	// (0x0003b81d) midp_editing_number_pane_ParamLimits

0xa6b2,	// (0x0003b82c) midp_ticker_pane_ParamLimits

0xb393,	// (0x0003c50d) form2_midp_field_pane

0xb3b7,	// (0x0003c531) scroll_pane_cp51

0xb3d7,	// (0x0003c551) form2_midp_button_pane_ParamLimits

0xb3d7,	// (0x0003c551) form2_midp_button_pane

0xb3e9,	// (0x0003c563) form2_midp_content_pane_ParamLimits

0xb3e9,	// (0x0003c563) form2_midp_content_pane

0xb403,	// (0x0003c57d) form2_midp_field_choice_group_pane

0xb40b,	// (0x0003c585) form2_midp_field_pane_g1

0xb413,	// (0x0003c58d) form2_midp_field_pane_g2

0xb41b,	// (0x0003c595) form2_midp_field_pane_g3

0xb423,	// (0x0003c59d) form2_midp_field_pane_g4

0x0003,

0xfae4,	// (0x00040c5e) form2_midp_field_pane_g

0xb42b,	// (0x0003c5a5) form2_midp_gauge_slider_pane

0xb433,	// (0x0003c5ad) form2_midp_gauge_wait_pane

0xb43b,	// (0x0003c5b5) form2_midp_image_pane_ParamLimits

0xb43b,	// (0x0003c5b5) form2_midp_image_pane

0xb456,	// (0x0003c5d0) form2_midp_label_pane_ParamLimits

0xb456,	// (0x0003c5d0) form2_midp_label_pane

0xb475,	// (0x0003c5ef) form2_midp_label_pane_cp_ParamLimits

0xb475,	// (0x0003c5ef) form2_midp_label_pane_cp

0xb496,	// (0x0003c610) form2_midp_string_pane_ParamLimits

0xb496,	// (0x0003c610) form2_midp_string_pane

0x4218,	// (0x00035392) form2_midp_text_pane_ParamLimits

0x4218,	// (0x00035392) form2_midp_text_pane

0xb4a8,	// (0x0003c622) form2_midp_time_pane

0xb4b8,	// (0x0003c632) input_focus_pane_cp51_ParamLimits

0xb4b8,	// (0x0003c632) input_focus_pane_cp51

0xb4d0,	// (0x0003c64a) form2_midp_label_pane_t1_ParamLimits

0xb4d0,	// (0x0003c64a) form2_midp_label_pane_t1

0x4239,	// (0x000353b3) form2_mdip_text_pane_t1_ParamLimits

0x4239,	// (0x000353b3) form2_mdip_text_pane_t1

0x425d,	// (0x000353d7) form2_midp_time_pane_t1

0xb51e,	// (0x0003c698) form2_midp_gauge_slider_pane_t1

0xb530,	// (0x0003c6aa) form2_midp_gauge_slider_pane_t2

0xb542,	// (0x0003c6bc) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaed,	// (0x00040c67) form2_midp_gauge_slider_pane_t

0xb554,	// (0x0003c6ce) form2_midp_slider_pane

0xb560,	// (0x0003c6da) form2_midp_gauge_wait_pane_t1

0xb56e,	// (0x0003c6e8) form2_midp_wait_pane_ParamLimits

0xb56e,	// (0x0003c6e8) form2_midp_wait_pane

0x9260,	// (0x0003a3da) list_single_2graphic_pane_cp4_ParamLimits

0x9260,	// (0x0003a3da) list_single_2graphic_pane_cp4

0xb599,	// (0x0003c713) list_single_midp_graphic_pane_cp_ParamLimits

0xb599,	// (0x0003c713) list_single_midp_graphic_pane_cp

0xe569,	// (0x0003f6e3) list_highlight_pane_cp20

0xb5bd,	// (0x0003c737) list_single_2graphic_pane_g1_cp4

0xab5a,	// (0x0003bcd4) list_single_2graphic_pane_g2_cp4

0xb5c5,	// (0x0003c73f) list_single_2graphic_pane_t1_cp4

0xef84,	// (0x000400fe) list_highlight_pane_cp21

0xb5d4,	// (0x0003c74e) list_single_midp_graphic_pane_g4_cp

0xb5e3,	// (0x0003c75d) list_single_midp_graphic_pane_t1_cp

0xb5f8,	// (0x0003c772) form2_mdip_string_pane_t1_ParamLimits

0xb5f8,	// (0x0003c772) form2_mdip_string_pane_t1

0xe569,	// (0x0003f6e3) bg_wml_button_pane_cp2

0xe55f,	// (0x0003f6d9) form2_midp_image_pane_g1

0x3ca1,	// (0x00034e1b) list_double_large_graphic_pane_g5_ParamLimits

0x3ca1,	// (0x00034e1b) list_double_large_graphic_pane_g5

0x6149,	// (0x000372c3) midp_form_pane_ParamLimits

0xef84,	// (0x000400fe) main_apps_wheel_pane_ParamLimits

0x89d3,	// (0x00039b4d) popup_preview_window_ParamLimits

0x89d3,	// (0x00039b4d) popup_preview_window

0x8bba,	// (0x00039d34) popup_touch_info_window_ParamLimits

0x8bba,	// (0x00039d34) popup_touch_info_window

0x8bdc,	// (0x00039d56) popup_touch_menu_window_ParamLimits

0x8bdc,	// (0x00039d56) popup_touch_menu_window

0xe555,	// (0x0003f6cf) bg_popup_sub_pane_cp6

0xb69d,	// (0x0003c817) list_touch_menu_pane

0xb6a5,	// (0x0003c81f) list_single_touch_menu_pane_ParamLimits

0xb6a5,	// (0x0003c81f) list_single_touch_menu_pane

0xb6bd,	// (0x0003c837) list_single_touch_menu_pane_t1

0xef84,	// (0x000400fe) bg_popup_sub_pane_cp7_ParamLimits

0xef84,	// (0x000400fe) bg_popup_sub_pane_cp7

0xb6cb,	// (0x0003c845) heading_sub_pane

0xb6d3,	// (0x0003c84d) list_touch_info_pane_ParamLimits

0xb6d3,	// (0x0003c84d) list_touch_info_pane

0xb6e2,	// (0x0003c85c) list_single_touch_info_pane_ParamLimits

0xb6e2,	// (0x0003c85c) list_single_touch_info_pane

0xb6f4,	// (0x0003c86e) list_single_touch_info_pane_t1

0xb702,	// (0x0003c87c) list_single_touch_info_pane_t2

0x0001,

0xfafb,	// (0x00040c75) list_single_touch_info_pane_t

0x6938,	// (0x00037ab2) bg_popup_heading_pane_cp

0xb710,	// (0x0003c88a) heading_sub_pane_t1

0x91a7,	// (0x0003a321) bg_popup_preview_window_pane_cp_ParamLimits

0x91a7,	// (0x0003a321) bg_popup_preview_window_pane_cp

0xb6cb,	// (0x0003c845) heading_preview_pane

0xb6d3,	// (0x0003c84d) list_preview_pane_ParamLimits

0xb6d3,	// (0x0003c84d) list_preview_pane

0xb71e,	// (0x0003c898) popup_preview_window_g1

0xb6e2,	// (0x0003c85c) list_single_preview_pane_ParamLimits

0xb6e2,	// (0x0003c85c) list_single_preview_pane

0xb726,	// (0x0003c8a0) list_single_preview_pane_g1

0xb72e,	// (0x0003c8a8) list_single_preview_pane_t1

0xb6f4,	// (0x0003c86e) list_single_preview_pane_t2

0x0001,

0xfb00,	// (0x00040c7a) list_single_preview_pane_t

0xb73c,	// (0x0003c8b6) bg_popup_heading_pane_cp2_ParamLimits

0xb73c,	// (0x0003c8b6) bg_popup_heading_pane_cp2

0xb752,	// (0x0003c8cc) heading_preview_pane_g1

0xb75a,	// (0x0003c8d4) heading_preview_pane_t1_ParamLimits

0xb75a,	// (0x0003c8d4) heading_preview_pane_t1

0xefd7,	// (0x00040151) soft_indicator_pane_t1_ParamLimits

0xf51a,	// (0x00040694) scroll_pane_ParamLimits

0x2227,	// (0x000333a1) scroll_sc2_left_pane

0x221e,	// (0x00033398) scroll_sc2_right_pane

0x2246,	// (0x000333c0) scroll_bg_pane_g1_ParamLimits

0x225b,	// (0x000333d5) scroll_bg_pane_g2_ParamLimits

0x2273,	// (0x000333ed) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00040858) scroll_bg_pane_g_ParamLimits

0x2246,	// (0x000333c0) scroll_handle_pane_g1_ParamLimits

0x2295,	// (0x0003340f) scroll_handle_pane_g2_ParamLimits

0x2273,	// (0x000333ed) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0004085f) scroll_handle_pane_g_ParamLimits

0x6ed1,	// (0x0003804b) popup_choice_list_window_ParamLimits

0x6ed1,	// (0x0003804b) popup_choice_list_window

0x907d,	// (0x0003a1f7) choice_list_pane

0x90ff,	// (0x0003a279) cell_toolbar_pane_t1

0x9127,	// (0x0003a2a1) toolbar_button_pane_ParamLimits

0xa1d6,	// (0x0003b350) ai_gene_pane_1_t2_ParamLimits

0xa1d6,	// (0x0003b350) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00040a87) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00040a87) ai_gene_pane_1_t

0xb777,	// (0x0003c8f1) scroll_sc2_left_pane_g1

0xb777,	// (0x0003c8f1) scroll_sc2_right_pane_g1

0x6ea9,	// (0x00038023) bg_popup_sub_pane_cp10

0xb781,	// (0x0003c8fb) list_choice_list_pane

0xb79a,	// (0x0003c914) list_single_choice_list_pane_ParamLimits

0xb79a,	// (0x0003c914) list_single_choice_list_pane

0xb7b2,	// (0x0003c92c) list_single_choice_list_pane_g1

0x1ffe,	// (0x00033178) list_single_choice_list_pane_t1_ParamLimits

0x1ffe,	// (0x00033178) list_single_choice_list_pane_t1

0xb7ba,	// (0x0003c934) choice_list_pane_g1

0xb7c2,	// (0x0003c93c) choice_list_pane_t1

0xe555,	// (0x0003f6cf) input_focus_pane_cp11

0x217c,	// (0x000332f6) title_pane_stacon_g2_ParamLimits

0x217c,	// (0x000332f6) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0004083e) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0004083e) title_pane_stacon_g

0x6938,	// (0x00037ab2) cursor_press_pane

0x6f8b,	// (0x00038105) popup_fep_hwr_window_ParamLimits

0x6f8b,	// (0x00038105) popup_fep_hwr_window

0x875e,	// (0x000398d8) popup_fep_vkb_window_ParamLimits

0x875e,	// (0x000398d8) popup_fep_vkb_window

0xb7d0,	// (0x0003c94a) cursor_press_pane_g1

0x0002,

0xfb29,	// (0x00040ca3) fep_vkb_side_pane_g_ParamLimits

0x758f,	// (0x00038709) fep_hwr_candidate_pane_ParamLimits

0x758f,	// (0x00038709) fep_hwr_candidate_pane

0x75b9,	// (0x00038733) fep_hwr_side_pane_ParamLimits

0x75b9,	// (0x00038733) fep_hwr_side_pane

0x75db,	// (0x00038755) fep_hwr_top_pane_ParamLimits

0x75db,	// (0x00038755) fep_hwr_top_pane

0x75f3,	// (0x0003876d) fep_hwr_write_pane_ParamLimits

0x75f3,	// (0x0003876d) fep_hwr_write_pane

0xfb29,	// (0x00040ca3) fep_vkb_side_pane_g

0xb7d8,	// (0x0003c952) fep_hwr_top_pane_g1

0xb7ea,	// (0x0003c964) fep_hwr_top_pane_g2

0x762d,	// (0x000387a7) fep_hwr_top_pane_g3

0x0002,

0xfb05,	// (0x00040c7f) fep_hwr_top_pane_g

0x7642,	// (0x000387bc) fep_hwr_top_text_pane

0x238f,	// (0x00033509) fep_hwr_top_text_pane_g1

0xb820,	// (0x0003c99a) fep_hwr_top_text_pane_t1

0x774c,	// (0x000388c6) fep_hwr_candidate_pane_g1

0xba6b,	// (0x0003cbe5) fep_vkb_keypad_pane_g3_ParamLimits

0xba6b,	// (0x0003cbe5) fep_vkb_keypad_pane_g3

0xba97,	// (0x0003cc11) fep_vkb_keypad_pane_g4_ParamLimits

0xba97,	// (0x0003cc11) fep_vkb_keypad_pane_g4

0xbb0e,	// (0x0003cc88) fep_vkb_bottom_pane_g2_ParamLimits

0xbb0e,	// (0x0003cc88) fep_vkb_bottom_pane_g2

0x0001,

0xfb30,	// (0x00040caa) fep_vkb_bottom_pane_g_ParamLimits

0xfb30,	// (0x00040caa) fep_vkb_bottom_pane_g

0xb777,	// (0x0003c8f1) cell_vkb_side_pane_g2

0x0001,

0xfb3a,	// (0x00040cb4) cell_vkb_side_pane_g

0xbb99,	// (0x0003cd13) cell_vkb_side_pane_t1

0xbba7,	// (0x0003cd21) cell_vkb_side_pane_t1_copy1

0xb777,	// (0x0003c8f1) bg_fep_vkb_candidate_pane_g2

0xbceb,	// (0x0003ce65) cell_vkb_candidate_pane_ParamLimits

0xb82e,	// (0x0003c9a8) aid_size_cell_vkb_ParamLimits

0xb82e,	// (0x0003c9a8) aid_size_cell_vkb

0xbceb,	// (0x0003ce65) cell_vkb_candidate_pane

0x7773,	// (0x000388ed) bg_popup_fep_shadow_pane_g1

0xb8c0,	// (0x0003ca3a) fep_vkb_bottom_pane_ParamLimits

0xb8c0,	// (0x0003ca3a) fep_vkb_bottom_pane

0xb8fd,	// (0x0003ca77) fep_vkb_candidate_pane_ParamLimits

0xb8fd,	// (0x0003ca77) fep_vkb_candidate_pane

0xb919,	// (0x0003ca93) fep_vkb_keypad_pane_ParamLimits

0xb919,	// (0x0003ca93) fep_vkb_keypad_pane

0xb94c,	// (0x0003cac6) fep_vkb_side_pane_ParamLimits

0xb94c,	// (0x0003cac6) fep_vkb_side_pane

0xb988,	// (0x0003cb02) fep_vkb_top_pane_ParamLimits

0xb988,	// (0x0003cb02) fep_vkb_top_pane

0xb9c4,	// (0x0003cb3e) fep_vkb_top_pane_g1_ParamLimits

0xb9c4,	// (0x0003cb3e) fep_vkb_top_pane_g1

0xb9d3,	// (0x0003cb4d) fep_vkb_top_pane_g2_ParamLimits

0xb9d3,	// (0x0003cb4d) fep_vkb_top_pane_g2

0xb9e2,	// (0x0003cb5c) fep_vkb_top_pane_g3_ParamLimits

0xb9e2,	// (0x0003cb5c) fep_vkb_top_pane_g3

0x0003,

0xfb20,	// (0x00040c9a) fep_vkb_top_pane_g_ParamLimits

0xfb20,	// (0x00040c9a) fep_vkb_top_pane_g

0xba00,	// (0x0003cb7a) fep_vkb_top_text_pane_ParamLimits

0xba00,	// (0x0003cb7a) fep_vkb_top_text_pane

0xba11,	// (0x0003cb8b) fep_vkb_side_pane_g1_ParamLimits

0xba11,	// (0x0003cb8b) fep_vkb_side_pane_g1

0xba5a,	// (0x0003cbd4) grid_vkb_side_pane_ParamLimits

0xba5a,	// (0x0003cbd4) grid_vkb_side_pane

0x777b,	// (0x000388f5) bg_popup_fep_shadow_pane_g2

0x7784,	// (0x000388fe) bg_popup_fep_shadow_pane_g3

0x778c,	// (0x00038906) bg_popup_fep_shadow_pane_g4

0x7795,	// (0x0003890f) bg_popup_fep_shadow_pane_g5

0x779f,	// (0x00038919) bg_popup_fep_shadow_pane_g6

0x77a7,	// (0x00038921) bg_popup_fep_shadow_pane_g7

0x1f20,	// (0x0003309a) bg_popup_fep_shadow_pane_g8

0xbab9,	// (0x0003cc33) grid_vkb_keypad_number_pane_ParamLimits

0xbab9,	// (0x0003cc33) grid_vkb_keypad_number_pane

0xbacd,	// (0x0003cc47) grid_vkb_keypad_pane_ParamLimits

0xbacd,	// (0x0003cc47) grid_vkb_keypad_pane

0xbaf3,	// (0x0003cc6d) fep_vkb_bottom_pane_g1_ParamLimits

0xbaf3,	// (0x0003cc6d) fep_vkb_bottom_pane_g1

0xbb1c,	// (0x0003cc96) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbb1c,	// (0x0003cc96) grid_vkb_keypad_bottom_left_pane

0xbb31,	// (0x0003ccab) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbb31,	// (0x0003ccab) grid_vkb_keypad_bottom_right_pane

0xbb46,	// (0x0003ccc0) fep_vkb_top_text_pane_g1

0xbb61,	// (0x0003ccdb) fep_vkb_top_text_pane_t1

0xbb76,	// (0x0003ccf0) cell_vkb_side_pane_ParamLimits

0xbb76,	// (0x0003ccf0) cell_vkb_side_pane

0xb777,	// (0x0003c8f1) cell_vkb_side_pane_g1

0xbbb5,	// (0x0003cd2f) cell_vkb_keypad_pane_ParamLimits

0xbbb5,	// (0x0003cd2f) cell_vkb_keypad_pane

0xbc42,	// (0x0003cdbc) cell_vkb_keypad_pane_g1

0x0008,

0xfb4d,	// (0x00040cc7) bg_popup_fep_shadow_pane_g

0x77b9,	// (0x00038933) cell_hwr_side_pane_g1

0x77b9,	// (0x00038933) cell_hwr_side_pane_g2

0xbc4c,	// (0x0003cdc6) cell_vkb_keypad_pane_t1

0xbc5a,	// (0x0003cdd4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbc5a,	// (0x0003cdd4) cell_vkb_keypad_bottom_left_pane

0xbc77,	// (0x0003cdf1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbc77,	// (0x0003cdf1) cell_vkb_keypad_bottom_right_pane

0xb777,	// (0x0003c8f1) cell_vkb_keypad_bottom_left_pane_g1

0xb777,	// (0x0003c8f1) cell_vkb_keypad_bottom_right_pane_g1

0xbcb0,	// (0x0003ce2a) cell_vkb_keypad_number_pane_ParamLimits

0xbcb0,	// (0x0003ce2a) cell_vkb_keypad_number_pane

0xbccf,	// (0x0003ce49) cell_vkb_keypad_number_pane_g1

0xbcd9,	// (0x0003ce53) cell_vkb_keypad_number_pane_g2

0xbce2,	// (0x0003ce5c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3f,	// (0x00040cb9) cell_vkb_keypad_number_pane_g

0xbc4c,	// (0x0003cdc6) cell_vkb_keypad_number_pane_t1

0xbd0c,	// (0x0003ce86) fep_vkb_candidate_pane_g1

0x0001,

0xfb60,	// (0x00040cda) cell_hwr_side_pane_g

0xbd25,	// (0x0003ce9f) cell_hwr_side_pane_t1

0x77c3,	// (0x0003893d) cell_hwr_side_pane_t1_copy1

0x77d1,	// (0x0003894b) cell_hwr_candidate_pane_g1

0x7800,	// (0x0003897a) cell_hwr_candidate_pane_t1

0xb777,	// (0x0003c8f1) cell_vkb_candidate_pane_g2

0xbd69,	// (0x0003cee3) cell_vkb_candidate_pane_t1

0x7556,	// (0x000386d0) bg_popup_fep_shadow_pane_ParamLimits

0x7556,	// (0x000386d0) bg_popup_fep_shadow_pane

0x760d,	// (0x00038787) bg_fep_hwr_top_pane_g4

0xb7fc,	// (0x0003c976) bg_hwr_side_pane_g1_ParamLimits

0xb7fc,	// (0x0003c976) bg_hwr_side_pane_g1

0x7680,	// (0x000387fa) cell_hwr_side_pane_ParamLimits

0x7680,	// (0x000387fa) cell_hwr_side_pane

0x76bd,	// (0x00038837) fep_hwr_write_pane_g1_ParamLimits

0x76bd,	// (0x00038837) fep_hwr_write_pane_g1

0x76ca,	// (0x00038844) fep_hwr_write_pane_g2_ParamLimits

0x76ca,	// (0x00038844) fep_hwr_write_pane_g2

0x76d7,	// (0x00038851) fep_hwr_write_pane_g3_ParamLimits

0x76d7,	// (0x00038851) fep_hwr_write_pane_g3

0x76e5,	// (0x0003885f) fep_hwr_write_pane_g4_ParamLimits

0x76e5,	// (0x0003885f) fep_hwr_write_pane_g4

0x0005,

0xfb0c,	// (0x00040c86) fep_hwr_write_pane_g_ParamLimits

0xfb0c,	// (0x00040c86) fep_hwr_write_pane_g

0x760d,	// (0x00038787) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x760d,	// (0x00038787) bg_fep_hwr_candidate_pane_g2

0x76fa,	// (0x00038874) cell_hwr_candidate_pane_ParamLimits

0x76fa,	// (0x00038874) cell_hwr_candidate_pane

0x774c,	// (0x000388c6) fep_hwr_candidate_pane_g1_ParamLimits

0xb85c,	// (0x0003c9d6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb85c,	// (0x0003c9d6) bg_popup_fep_shadow_pane_cp2

0xb9f2,	// (0x0003cb6c) fep_vkb_top_pane_g4_ParamLimits

0xb9f2,	// (0x0003cb6c) fep_vkb_top_pane_g4

0xba38,	// (0x0003cbb2) fep_vkb_side_pane_g2_ParamLimits

0xba38,	// (0x0003cbb2) fep_vkb_side_pane_g2

0x5e93,	// (0x0003700d) list_setting_pane_t4_ParamLimits

0x5e93,	// (0x0003700d) list_setting_pane_t4

0x5f2f,	// (0x000370a9) list_setting_number_pane_t5_ParamLimits

0x5f2f,	// (0x000370a9) list_setting_number_pane_t5

0x642e,	// (0x000375a8) list_double_heading_pane_cp2_ParamLimits

0x642e,	// (0x000375a8) list_double_heading_pane_cp2

0xbd77,	// (0x0003cef1) list_double_heading_pane_g1_cp2_ParamLimits

0xbd77,	// (0x0003cef1) list_double_heading_pane_g1_cp2

0xbd83,	// (0x0003cefd) list_double_heading_pane_g2_cp2_ParamLimits

0xbd83,	// (0x0003cefd) list_double_heading_pane_g2_cp2

0xbd97,	// (0x0003cf11) list_double_heading_pane_t1_cp2_ParamLimits

0xbd97,	// (0x0003cf11) list_double_heading_pane_t1_cp2

0xbdad,	// (0x0003cf27) list_double_heading_pane_t2_cp2_ParamLimits

0xbdad,	// (0x0003cf27) list_double_heading_pane_t2_cp2

0xe54d,	// (0x0003f6c7) aid_value_unit2

0x5685,	// (0x000367ff) popup_preview_fixed_window

0xf0c5,	// (0x0004023f) bg_popup_preview_window_pane_cp02

0xbdbf,	// (0x0003cf39) list_preview_fixed_pane

0xbe05,	// (0x0003cf7f) list_empty_pane_fp_ParamLimits

0xbe05,	// (0x0003cf7f) list_empty_pane_fp

0xbe05,	// (0x0003cf7f) list_single_cale_day_pane_fp_ParamLimits

0xbe05,	// (0x0003cf7f) list_single_cale_day_pane_fp

0xbe05,	// (0x0003cf7f) list_single_graphic_heading_pane_fp_ParamLimits

0xbe05,	// (0x0003cf7f) list_single_graphic_heading_pane_fp

0xbe05,	// (0x0003cf7f) list_single_graphic_pane_fp_ParamLimits

0xbe05,	// (0x0003cf7f) list_single_graphic_pane_fp

0xbe05,	// (0x0003cf7f) list_single_heading_pane_fp_ParamLimits

0xbe05,	// (0x0003cf7f) list_single_heading_pane_fp

0xbe05,	// (0x0003cf7f) list_single_pane_fp_ParamLimits

0xbe05,	// (0x0003cf7f) list_single_pane_fp

0xbe1e,	// (0x0003cf98) list_single_pane_fp_g1_ParamLimits

0xbe1e,	// (0x0003cf98) list_single_pane_fp_g1

0x4270,	// (0x000353ea) list_single_pane_fp_g2_ParamLimits

0x4270,	// (0x000353ea) list_single_pane_fp_g2

0x427c,	// (0x000353f6) list_single_pane_fp_g3_ParamLimits

0x427c,	// (0x000353f6) list_single_pane_fp_g3

0xbe2a,	// (0x0003cfa4) list_single_pane_fp_g4_ParamLimits

0xbe2a,	// (0x0003cfa4) list_single_pane_fp_g4

0x0003,

0xfb73,	// (0x00040ced) list_single_pane_fp_g_ParamLimits

0xfb73,	// (0x00040ced) list_single_pane_fp_g

0x4290,	// (0x0003540a) list_single_pane_fp_t1_ParamLimits

0x4290,	// (0x0003540a) list_single_pane_fp_t1

0x42a7,	// (0x00035421) list_single_graphic_pane_fp_g1_ParamLimits

0x42a7,	// (0x00035421) list_single_graphic_pane_fp_g1

0xbe1e,	// (0x0003cf98) list_single_graphic_pane_fp_g2_ParamLimits

0xbe1e,	// (0x0003cf98) list_single_graphic_pane_fp_g2

0x4270,	// (0x000353ea) list_single_graphic_pane_fp_g3_ParamLimits

0x4270,	// (0x000353ea) list_single_graphic_pane_fp_g3

0x427c,	// (0x000353f6) list_single_graphic_pane_fp_g4_ParamLimits

0x427c,	// (0x000353f6) list_single_graphic_pane_fp_g4

0xbe2a,	// (0x0003cfa4) list_single_graphic_pane_fp_g5_ParamLimits

0xbe2a,	// (0x0003cfa4) list_single_graphic_pane_fp_g5

0x0004,

0xfb7c,	// (0x00040cf6) list_single_graphic_pane_fp_g_ParamLimits

0xfb7c,	// (0x00040cf6) list_single_graphic_pane_fp_g

0x42b3,	// (0x0003542d) list_single_graphic_pane_fp_t1_ParamLimits

0x42b3,	// (0x0003542d) list_single_graphic_pane_fp_t1

0x42a7,	// (0x00035421) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x42a7,	// (0x00035421) list_single_graphic_heading_pane_fp_g1

0xbe1e,	// (0x0003cf98) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbe1e,	// (0x0003cf98) list_single_graphic_heading_pane_fp_g2

0x4270,	// (0x000353ea) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4270,	// (0x000353ea) list_single_graphic_heading_pane_fp_g3

0x427c,	// (0x000353f6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x427c,	// (0x000353f6) list_single_graphic_heading_pane_fp_g4

0xbe2a,	// (0x0003cfa4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbe2a,	// (0x0003cfa4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7c,	// (0x00040cf6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x00040cf6) list_single_graphic_heading_pane_fp_g

0x42c9,	// (0x00035443) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x42c9,	// (0x00035443) list_single_graphic_heading_pane_fp_t1

0x42df,	// (0x00035459) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x42df,	// (0x00035459) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb87,	// (0x00040d01) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb87,	// (0x00040d01) list_single_graphic_heading_pane_fp_t

0x42f1,	// (0x0003546b) list_single_cale_day_pane_fp_g1_ParamLimits

0x42f1,	// (0x0003546b) list_single_cale_day_pane_fp_g1

0xbe36,	// (0x0003cfb0) list_single_cale_day_pane_fp_g2_ParamLimits

0xbe36,	// (0x0003cfb0) list_single_cale_day_pane_fp_g2

0x4329,	// (0x000354a3) list_single_cale_day_pane_fp_g3_ParamLimits

0x4329,	// (0x000354a3) list_single_cale_day_pane_fp_g3

0x4351,	// (0x000354cb) list_single_cale_day_pane_fp_g4_ParamLimits

0x4351,	// (0x000354cb) list_single_cale_day_pane_fp_g4

0x4375,	// (0x000354ef) list_single_cale_day_pane_fp_g5_ParamLimits

0x4375,	// (0x000354ef) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8c,	// (0x00040d06) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8c,	// (0x00040d06) list_single_cale_day_pane_fp_g

0x4399,	// (0x00035513) list_single_cale_day_pane_fp_t1_ParamLimits

0x4399,	// (0x00035513) list_single_cale_day_pane_fp_t1

0x43bf,	// (0x00035539) list_single_cale_day_pane_fp_t2_ParamLimits

0x43bf,	// (0x00035539) list_single_cale_day_pane_fp_t2

0x43d8,	// (0x00035552) list_single_cale_day_pane_fp_t3_ParamLimits

0x43d8,	// (0x00035552) list_single_cale_day_pane_fp_t3

0x0002,

0xfb97,	// (0x00040d11) list_single_cale_day_pane_fp_t_ParamLimits

0xfb97,	// (0x00040d11) list_single_cale_day_pane_fp_t

0xbe1e,	// (0x0003cf98) list_empty_pane_fp_g1_ParamLimits

0xbe1e,	// (0x0003cf98) list_empty_pane_fp_g1

0x43f1,	// (0x0003556b) list_empty_pane_fp_t1

0x43ff,	// (0x00035579) list_empty_pane_fp_t2

0x0001,

0xfb9e,	// (0x00040d18) list_empty_pane_fp_t

0xbe1e,	// (0x0003cf98) list_single_heading_pane_fp_g1_ParamLimits

0xbe1e,	// (0x0003cf98) list_single_heading_pane_fp_g1

0x4270,	// (0x000353ea) list_single_heading_pane_fp_g2_ParamLimits

0x4270,	// (0x000353ea) list_single_heading_pane_fp_g2

0x427c,	// (0x000353f6) list_single_heading_pane_fp_g3_ParamLimits

0x427c,	// (0x000353f6) list_single_heading_pane_fp_g3

0x0002,

0xfba3,	// (0x00040d1d) list_single_heading_pane_fp_g_ParamLimits

0xfba3,	// (0x00040d1d) list_single_heading_pane_fp_g

0x440d,	// (0x00035587) list_single_heading_pane_fp_t1_ParamLimits

0x440d,	// (0x00035587) list_single_heading_pane_fp_t1

0x441f,	// (0x00035599) list_single_heading_pane_fp_t2_ParamLimits

0x441f,	// (0x00035599) list_single_heading_pane_fp_t2

0x0001,

0xfbaa,	// (0x00040d24) list_single_heading_pane_fp_t_ParamLimits

0xfbaa,	// (0x00040d24) list_single_heading_pane_fp_t

0x2013,	// (0x0003318d) aid_size_cell_fast

0xf09a,	// (0x00040214) soft_indicator_pane_cp1_t1

0x2050,	// (0x000331ca) cell_app_pane_cp2_ParamLimits

0x2050,	// (0x000331ca) cell_app_pane_cp2

0x7578,	// (0x000386f2) fep_hwr_candidate_drop_down_list_pane

0x7766,	// (0x000388e0) fep_hwr_candidate_pane_g3_ParamLimits

0x7766,	// (0x000388e0) fep_hwr_candidate_pane_g3

0x1c42,	// (0x00032dbc) fep_hwr_candidate_pane_g4_ParamLimits

0x1c42,	// (0x00032dbc) fep_hwr_candidate_pane_g4

0x0002,

0xfb19,	// (0x00040c93) fep_hwr_candidate_pane_g_ParamLimits

0xfb19,	// (0x00040c93) fep_hwr_candidate_pane_g

0xb8ec,	// (0x0003ca66) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb8ec,	// (0x0003ca66) fep_vkb_candidate_drop_down_list_pane

0xbd14,	// (0x0003ce8e) fep_vkb_candidate_pane_g3

0xbd1c,	// (0x0003ce96) fep_vkb_candidate_pane_g4

0x0002,

0xfb46,	// (0x00040cc0) fep_vkb_candidate_pane_g

0x77d1,	// (0x0003894b) cell_hwr_candidate_pane_g1_ParamLimits

0x77df,	// (0x00038959) cell_hwr_candidate_pane_g3_ParamLimits

0x77df,	// (0x00038959) cell_hwr_candidate_pane_g3

0xc5eb,	// (0x0003d765) cell_hwr_candidate_pane_g4_ParamLimits

0xc5eb,	// (0x0003d765) cell_hwr_candidate_pane_g4

0x0002,

0xfb65,	// (0x00040cdf) cell_hwr_candidate_pane_g_ParamLimits

0xfb65,	// (0x00040cdf) cell_hwr_candidate_pane_g

0xbd33,	// (0x0003cead) cell_vkb_candidate_pane_g3_ParamLimits

0xbd33,	// (0x0003cead) cell_vkb_candidate_pane_g3

0xbd4e,	// (0x0003cec8) cell_vkb_candidate_pane_g4_ParamLimits

0xbd4e,	// (0x0003cec8) cell_vkb_candidate_pane_g4

0xbe42,	// (0x0003cfbc) cell_app_pane_cp2_g1_ParamLimits

0xbe42,	// (0x0003cfbc) cell_app_pane_cp2_g1

0xbe60,	// (0x0003cfda) cell_app_pane_cp2_g2_ParamLimits

0xbe60,	// (0x0003cfda) cell_app_pane_cp2_g2

0x0001,

0xfbaf,	// (0x00040d29) cell_app_pane_cp2_g_ParamLimits

0xfbaf,	// (0x00040d29) cell_app_pane_cp2_g

0xbe6c,	// (0x0003cfe6) cell_app_pane_cp2_t1_ParamLimits

0xbe6c,	// (0x0003cfe6) cell_app_pane_cp2_t1

0x1ead,	// (0x00033027) grid_highlight_pane_cp1_ParamLimits

0x1ead,	// (0x00033027) grid_highlight_pane_cp1

0x781e,	// (0x00038998) cell_hwr_candidate_pane_cp1_ParamLimits

0x781e,	// (0x00038998) cell_hwr_candidate_pane_cp1

0x77d1,	// (0x0003894b) fep_hwr_candidate_drop_down_list_pane_g1

0x7842,	// (0x000389bc) fep_hwr_candidate_drop_down_list_pane_g2

0x784f,	// (0x000389c9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb4,	// (0x00040d2e) fep_hwr_candidate_drop_down_list_pane_g

0x785c,	// (0x000389d6) fep_hwr_candidate_drop_down_list_scroll_pane

0x7865,	// (0x000389df) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7865,	// (0x000389df) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7872,	// (0x000389ec) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7872,	// (0x000389ec) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x787f,	// (0x000389f9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x787f,	// (0x000389f9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x788c,	// (0x00038a06) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x788c,	// (0x00038a06) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x78a7,	// (0x00038a21) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x78a7,	// (0x00038a21) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x78c2,	// (0x00038a3c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x78c2,	// (0x00038a3c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x78dd,	// (0x00038a57) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x78dd,	// (0x00038a57) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x78f8,	// (0x00038a72) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x78f8,	// (0x00038a72) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbb,	// (0x00040d35) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbb,	// (0x00040d35) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbe7e,	// (0x0003cff8) cell_vkb_candidate_pane_cp1_ParamLimits

0xbe7e,	// (0x0003cff8) cell_vkb_candidate_pane_cp1

0xb9f2,	// (0x0003cb6c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb9f2,	// (0x0003cb6c) fep_vkb_candidate_drop_down_list_pane_g1

0xbea4,	// (0x0003d01e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbea4,	// (0x0003d01e) fep_vkb_candidate_drop_down_list_pane_g2

0xbeb1,	// (0x0003d02b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbeb1,	// (0x0003d02b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcc,	// (0x00040d46) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcc,	// (0x00040d46) fep_vkb_candidate_drop_down_list_pane_g

0xbebe,	// (0x0003d038) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbebe,	// (0x0003d038) fep_vkb_candidate_drop_down_list_scroll_pane

0xbecb,	// (0x0003d045) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbecb,	// (0x0003d045) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbed8,	// (0x0003d052) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbed8,	// (0x0003d052) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbee4,	// (0x0003d05e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbee4,	// (0x0003d05e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbef0,	// (0x0003d06a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbef0,	// (0x0003d06a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbf11,	// (0x0003d08b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbf11,	// (0x0003d08b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbf32,	// (0x0003d0ac) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbf32,	// (0x0003d0ac) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbf53,	// (0x0003d0cd) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbf53,	// (0x0003d0cd) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbf74,	// (0x0003d0ee) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbf74,	// (0x0003d0ee) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd3,	// (0x00040d4d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd3,	// (0x00040d4d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x57a5,	// (0x0003691f) title_pane_g1_ParamLimits

0x57b2,	// (0x0003692c) title_pane_g2_ParamLimits

0xf54e,	// (0x000406c8) title_pane_g_ParamLimits

0x2387,	// (0x00033501) aid_call2_pane

0x237f,	// (0x000334f9) aid_call_pane

0x238f,	// (0x00033509) popup_clock_analogue_window_g1

0x238f,	// (0x00033509) popup_clock_analogue_window_g2

0x640f,	// (0x00037589) popup_clock_analogue_window_g3

0x6418,	// (0x00037592) popup_clock_analogue_window_g4

0xe55f,	// (0x0003f6d9) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0004086d) popup_clock_analogue_window_g

0x6420,	// (0x0003759a) popup_clock_analogue_window_t1

0x6461,	// (0x000375db) clock_digital_number_pane_ParamLimits

0x6461,	// (0x000375db) clock_digital_number_pane

0x646d,	// (0x000375e7) clock_digital_number_pane_cp02_ParamLimits

0x646d,	// (0x000375e7) clock_digital_number_pane_cp02

0x6479,	// (0x000375f3) clock_digital_number_pane_cp03_ParamLimits

0x6479,	// (0x000375f3) clock_digital_number_pane_cp03

0x6485,	// (0x000375ff) clock_digital_number_pane_cp04_ParamLimits

0x6485,	// (0x000375ff) clock_digital_number_pane_cp04

0x6491,	// (0x0003760b) clock_digital_separator_pane_ParamLimits

0x6491,	// (0x0003760b) clock_digital_separator_pane

0x649d,	// (0x00037617) popup_clock_digital_window_t1_ParamLimits

0x649d,	// (0x00037617) popup_clock_digital_window_t1

0xe55f,	// (0x0003f6d9) clock_digital_number_pane_g1

0xe55f,	// (0x0003f6d9) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00040878) clock_digital_number_pane_g

0xe55f,	// (0x0003f6d9) clock_digital_separator_pane_g1

0xe55f,	// (0x0003f6d9) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00040878) clock_digital_separator_pane_g

0x8c29,	// (0x00039da3) aid_fill_nsta_ParamLimits

0x8d79,	// (0x00039ef3) indicator_nsta_pane_ParamLimits

0x8f0a,	// (0x0003a084) popup_clock_analogue_window

0x8f0a,	// (0x0003a084) popup_clock_digital_window

0xef84,	// (0x000400fe) grid_indicator_nsta_pane_ParamLimits

0xb1aa,	// (0x0003c324) clock_nsta_pane_t2

0x0001,

0xfa99,	// (0x00040c13) clock_nsta_pane_t

0x6378,	// (0x000374f2) aid_size_max_handle

0x6382,	// (0x000374fc) aid_size_min_handle

0x6938,	// (0x00037ab2) editor_scroll_pane

0xbf8f,	// (0x0003d109) ex_editor_pane

0x1fd9,	// (0x00033153) scroll_pane_cp13

0xf546,	// (0x000406c0) scroll_pane_cp14

0x23be,	// (0x00033538) scroll_pane_cp36

0x6444,	// (0x000375be) list_single_graphic_hl_pane_cp2_ParamLimits

0x6444,	// (0x000375be) list_single_graphic_hl_pane_cp2

0x740c,	// (0x00038586) list_single_graphic_hl_pane_ParamLimits

0x740c,	// (0x00038586) list_single_graphic_hl_pane

0x4435,	// (0x000355af) aid_size_min_hl_cp1

0xbf97,	// (0x0003d111) list_highlight_pane_cp34_ParamLimits

0xbf97,	// (0x0003d111) list_highlight_pane_cp34

0xbfa8,	// (0x0003d122) list_single_graphic_hl_pane_g1_ParamLimits

0xbfa8,	// (0x0003d122) list_single_graphic_hl_pane_g1

0x7913,	// (0x00038a8d) list_single_graphic_hl_pane_g2_ParamLimits

0x7913,	// (0x00038a8d) list_single_graphic_hl_pane_g2

0x7913,	// (0x00038a8d) list_single_graphic_hl_pane_g3_ParamLimits

0x7913,	// (0x00038a8d) list_single_graphic_hl_pane_g3

0x3c31,	// (0x00034dab) list_single_graphic_hl_pane_g4_ParamLimits

0x3c31,	// (0x00034dab) list_single_graphic_hl_pane_g4

0x791f,	// (0x00038a99) list_single_graphic_hl_pane_g5_ParamLimits

0x791f,	// (0x00038a99) list_single_graphic_hl_pane_g5

0x0004,

0xfbe4,	// (0x00040d5e) list_single_graphic_hl_pane_g_ParamLimits

0xfbe4,	// (0x00040d5e) list_single_graphic_hl_pane_g

0x7933,	// (0x00038aad) list_single_graphic_hl_pane_t1_ParamLimits

0x7933,	// (0x00038aad) list_single_graphic_hl_pane_t1

0xbfb5,	// (0x0003d12f) aid_size_min_hl_cp2

0xbfbe,	// (0x0003d138) list_highlight_pane_cp34_cp2_ParamLimits

0xbfbe,	// (0x0003d138) list_highlight_pane_cp34_cp2

0xbfa8,	// (0x0003d122) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbfa8,	// (0x0003d122) list_single_graphic_hl_pane_g1_cp2

0xbfcb,	// (0x0003d145) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbfcb,	// (0x0003d145) list_single_graphic_hl_pane_g2_cp2

0xbfd7,	// (0x0003d151) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbfd7,	// (0x0003d151) list_single_graphic_hl_pane_g3_cp2

0x16ba,	// (0x00032834) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x16ba,	// (0x00032834) list_single_graphic_hl_pane_g4_cp2

0xbfe5,	// (0x0003d15f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbfe5,	// (0x0003d15f) list_single_graphic_hl_pane_g5_cp2

0x6cfa,	// (0x00037e74) control_pane_g4_ParamLimits

0x6cfa,	// (0x00037e74) control_pane_g4

0x6ea9,	// (0x00038023) bg_popup_sub_pane_cp10_ParamLimits

0xb781,	// (0x0003c8fb) list_choice_list_pane_ParamLimits

0xb790,	// (0x0003c90a) scroll_pane_cp23

0xf0c5,	// (0x0004023f) bg_popup_preview_window_pane_cp02_ParamLimits

0xbdbf,	// (0x0003cf39) list_preview_fixed_pane_ParamLimits

0xbdd5,	// (0x0003cf4f) list_preview_fixed_pane_cp_ParamLimits

0xbdd5,	// (0x0003cf4f) list_preview_fixed_pane_cp

0xbde1,	// (0x0003cf5b) popup_preview_fixed_window_g1_ParamLimits

0xbde1,	// (0x0003cf5b) popup_preview_fixed_window_g1

0xbded,	// (0x0003cf67) popup_preview_fixed_window_g2_ParamLimits

0xbded,	// (0x0003cf67) popup_preview_fixed_window_g2

0x0002,

0xfb6c,	// (0x00040ce6) popup_preview_fixed_window_g_ParamLimits

0xfb6c,	// (0x00040ce6) popup_preview_fixed_window_g

0x6267,	// (0x000373e1) aid_navi_side_left_pane_ParamLimits

0x627c,	// (0x000373f6) aid_navi_side_right_pane_ParamLimits

0x6294,	// (0x0003740e) navi_icon_pane_stacon_ParamLimits

0x62a8,	// (0x00037422) navi_navi_pane_stacon_ParamLimits

0x6294,	// (0x0003740e) navi_text_pane_stacon_ParamLimits

0xe555,	// (0x0003f6cf) main_text_info_pane

0xc00f,	// (0x0003d189) listscroll_text_info_pane

0xc017,	// (0x0003d191) list_text_info_pane_ParamLimits

0xc017,	// (0x0003d191) list_text_info_pane

0xc026,	// (0x0003d1a0) scroll_pane_cp24_ParamLimits

0xc026,	// (0x0003d1a0) scroll_pane_cp24

0xc044,	// (0x0003d1be) list_text_info_pane_t1_ParamLimits

0xc044,	// (0x0003d1be) list_text_info_pane_t1

0x6ef3,	// (0x0003806d) popup_fast_swap2_window_ParamLimits

0x6ef3,	// (0x0003806d) popup_fast_swap2_window

0xc069,	// (0x0003d1e3) aid_size_cell_fast2

0xe555,	// (0x0003f6cf) bg_popup_window_pane_cp17

0x9567,	// (0x0003a6e1) heading_pane_cp2

0xf2cb,	// (0x00040445) listscroll_fast2_pane

0xc073,	// (0x0003d1ed) grid_fast2_pane

0xc07d,	// (0x0003d1f7) listscroll_fast2_pane_g1

0xc087,	// (0x0003d201) listscroll_fast2_pane_g2

0x0001,

0xfbef,	// (0x00040d69) listscroll_fast2_pane_g

0x1fd9,	// (0x00033153) scroll_pane_cp26

0xc091,	// (0x0003d20b) cell_fast2_pane_ParamLimits

0xc091,	// (0x0003d20b) cell_fast2_pane

0xc0a8,	// (0x0003d222) cell_fast2_pane_g1

0xc0b1,	// (0x0003d22b) cell_fast2_pane_g2

0xc0ba,	// (0x0003d234) cell_fast2_pane_g3

0x0002,

0xfbf4,	// (0x00040d6e) cell_fast2_pane_g

0xf30d,	// (0x00040487) grid_highlight_pane_cp9

0xf322,	// (0x0004049c) main_eswt_pane_ParamLimits

0xf322,	// (0x0004049c) main_eswt_pane

0xc03b,	// (0x0003d1b5) list_single_text_info_pane

0xc0c2,	// (0x0003d23c) eswt_ctrl_button_pane

0xc0c2,	// (0x0003d23c) eswt_ctrl_canvas_pane

0xc0ca,	// (0x0003d244) eswt_ctrl_combo_pane

0xc0c2,	// (0x0003d23c) eswt_ctrl_default_pane

0xc0c2,	// (0x0003d23c) eswt_ctrl_label_pane

0xc0d2,	// (0x0003d24c) eswt_ctrl_wait_pane

0xc0da,	// (0x0003d254) eswt_shell_pane

0xe555,	// (0x0003f6cf) listscroll_eswt_app_pane

0xc0fa,	// (0x0003d274) popup_eswt_tasktip_window_ParamLimits

0xc0fa,	// (0x0003d274) popup_eswt_tasktip_window

0x91a7,	// (0x0003a321) bg_popup_window_pane_cp18

0xc10b,	// (0x0003d285) eswt_control_pane_g1_ParamLimits

0xc10b,	// (0x0003d285) eswt_control_pane_g1

0xc118,	// (0x0003d292) eswt_control_pane_g2_ParamLimits

0xc118,	// (0x0003d292) eswt_control_pane_g2

0xc125,	// (0x0003d29f) eswt_control_pane_g3_ParamLimits

0xc125,	// (0x0003d29f) eswt_control_pane_g3

0xc132,	// (0x0003d2ac) eswt_control_pane_g4_ParamLimits

0xc132,	// (0x0003d2ac) eswt_control_pane_g4

0x0003,

0xfbfb,	// (0x00040d75) eswt_control_pane_g_ParamLimits

0xfbfb,	// (0x00040d75) eswt_control_pane_g

0x1ead,	// (0x00033027) bg_button_pane_ParamLimits

0x1ead,	// (0x00033027) bg_button_pane

0xf322,	// (0x0004049c) common_borders_pane_copy2_ParamLimits

0xf322,	// (0x0004049c) common_borders_pane_copy2

0xc13f,	// (0x0003d2b9) control_button_pane_g1_ParamLimits

0xc13f,	// (0x0003d2b9) control_button_pane_g1

0xc14b,	// (0x0003d2c5) control_button_pane_g2_ParamLimits

0xc14b,	// (0x0003d2c5) control_button_pane_g2

0xc157,	// (0x0003d2d1) control_button_pane_g3_ParamLimits

0xc157,	// (0x0003d2d1) control_button_pane_g3

0x0002,

0xfc04,	// (0x00040d7e) control_button_pane_g_ParamLimits

0xfc04,	// (0x00040d7e) control_button_pane_g

0xc16b,	// (0x0003d2e5) control_button_pane_t1

0xc179,	// (0x0003d2f3) control_button_pane_t2

0x0001,

0xfc0b,	// (0x00040d85) control_button_pane_t

0x9133,	// (0x0003a2ad) bg_button_pane_g1

0x9143,	// (0x0003a2bd) bg_button_pane_g2

0x913b,	// (0x0003a2b5) bg_button_pane_g3

0x9153,	// (0x0003a2cd) bg_button_pane_g4

0x914b,	// (0x0003a2c5) bg_button_pane_g5

0x915b,	// (0x0003a2d5) bg_button_pane_g6

0x9163,	// (0x0003a2dd) bg_button_pane_g7

0x9173,	// (0x0003a2ed) bg_button_pane_g8

0x916b,	// (0x0003a2e5) bg_button_pane_g9

0x0008,

0xf861,	// (0x000409db) bg_button_pane_g

0xb73c,	// (0x0003c8b6) common_borders_pane_ParamLimits

0xb73c,	// (0x0003c8b6) common_borders_pane

0xc10b,	// (0x0003d285) eswt_control_pane_g1_copy1_ParamLimits

0xc10b,	// (0x0003d285) eswt_control_pane_g1_copy1

0xc118,	// (0x0003d292) eswt_control_pane_g2_copy1_ParamLimits

0xc118,	// (0x0003d292) eswt_control_pane_g2_copy1

0xc125,	// (0x0003d29f) eswt_control_pane_g3_copy1_ParamLimits

0xc125,	// (0x0003d29f) eswt_control_pane_g3_copy1

0xc132,	// (0x0003d2ac) eswt_control_pane_g4_copy1_ParamLimits

0xc132,	// (0x0003d2ac) eswt_control_pane_g4_copy1

0xb777,	// (0x0003c8f1) bg_eswt_ctrl_canvas_pane_g1

0xb73c,	// (0x0003c8b6) common_borders_pane_cp2_ParamLimits

0xb73c,	// (0x0003c8b6) common_borders_pane_cp2

0xb73c,	// (0x0003c8b6) common_borders_pane_cp3_ParamLimits

0xb73c,	// (0x0003c8b6) common_borders_pane_cp3

0xc187,	// (0x0003d301) separator_horizontal_pane

0xc18f,	// (0x0003d309) separator_vertical_pane

0xc10b,	// (0x0003d285) eswt_control_pane_g1_copy2_ParamLimits

0xc10b,	// (0x0003d285) eswt_control_pane_g1_copy2

0xc118,	// (0x0003d292) eswt_control_pane_g2_copy2_ParamLimits

0xc118,	// (0x0003d292) eswt_control_pane_g2_copy2

0xc125,	// (0x0003d29f) eswt_control_pane_g3_copy2_ParamLimits

0xc125,	// (0x0003d29f) eswt_control_pane_g3_copy2

0xc132,	// (0x0003d2ac) eswt_control_pane_g4_copy2_ParamLimits

0xc132,	// (0x0003d2ac) eswt_control_pane_g4_copy2

0xe555,	// (0x0003f6cf) common_borders_pane_cp4

0xc198,	// (0x0003d312) separator_horizontal_pane_g1

0xc1a1,	// (0x0003d31b) separator_horizontal_pane_g2

0xc1aa,	// (0x0003d324) separator_horizontal_pane_g3

0x0002,

0xfc10,	// (0x00040d8a) separator_horizontal_pane_g

0xc10b,	// (0x0003d285) eswt_control_pane_g1_copy3_ParamLimits

0xc10b,	// (0x0003d285) eswt_control_pane_g1_copy3

0xc118,	// (0x0003d292) eswt_control_pane_g2_copy3_ParamLimits

0xc118,	// (0x0003d292) eswt_control_pane_g2_copy3

0xc125,	// (0x0003d29f) eswt_control_pane_g3_copy3_ParamLimits

0xc125,	// (0x0003d29f) eswt_control_pane_g3_copy3

0xc132,	// (0x0003d2ac) eswt_control_pane_g4_copy3_ParamLimits

0xc132,	// (0x0003d2ac) eswt_control_pane_g4_copy3

0xe555,	// (0x0003f6cf) common_borders_pane_cp5

0xc1b3,	// (0x0003d32d) separator_vertical_pane_g1

0xc1bc,	// (0x0003d336) separator_vertical_pane_g2

0xc1c5,	// (0x0003d33f) separator_vertical_pane_g3

0x0002,

0xfc17,	// (0x00040d91) separator_vertical_pane_g

0xc10b,	// (0x0003d285) eswt_control_pane_g1_copy4_ParamLimits

0xc10b,	// (0x0003d285) eswt_control_pane_g1_copy4

0xc118,	// (0x0003d292) eswt_control_pane_g2_copy4_ParamLimits

0xc118,	// (0x0003d292) eswt_control_pane_g2_copy4

0xc125,	// (0x0003d29f) eswt_control_pane_g3_copy4_ParamLimits

0xc125,	// (0x0003d29f) eswt_control_pane_g3_copy4

0xc132,	// (0x0003d2ac) eswt_control_pane_g4_copy4_ParamLimits

0xc132,	// (0x0003d2ac) eswt_control_pane_g4_copy4

0xc1ce,	// (0x0003d348) eswt_ctrl_combo_button_pane

0xc1d6,	// (0x0003d350) eswt_ctrl_input_pane

0xc1de,	// (0x0003d358) popup_choice_list_window_cp70

0xc1e6,	// (0x0003d360) eswt_ctrl_input_pane_t1

0xe555,	// (0x0003f6cf) input_focus_pane_cp70

0xb73c,	// (0x0003c8b6) bg_button_pane_cp70_ParamLimits

0xb73c,	// (0x0003c8b6) bg_button_pane_cp70

0xc1f4,	// (0x0003d36e) eswt_ctrl_combo_button_pane_g1

0xc1fc,	// (0x0003d376) wait_bar_pane_cp70

0x91a7,	// (0x0003a321) bg_popup_window_pane_cp70_ParamLimits

0x91a7,	// (0x0003a321) bg_popup_window_pane_cp70

0xc204,	// (0x0003d37e) popup_eswt_tasktip_window_t1

0xc21a,	// (0x0003d394) wait_bar_pane_cp71_ParamLimits

0xc21a,	// (0x0003d394) wait_bar_pane_cp71

0xc226,	// (0x0003d3a0) grid_eswt_app_pane

0x2227,	// (0x000333a1) scroll_pane_cp70

0xc22f,	// (0x0003d3a9) cell_eswt_app_pane_ParamLimits

0xc22f,	// (0x0003d3a9) cell_eswt_app_pane

0xc261,	// (0x0003d3db) cell_eswt_app_pane_g1_ParamLimits

0xc261,	// (0x0003d3db) cell_eswt_app_pane_g1

0xc290,	// (0x0003d40a) cell_eswt_app_pane_g2_ParamLimits

0xc290,	// (0x0003d40a) cell_eswt_app_pane_g2

0x0001,

0xfc1e,	// (0x00040d98) cell_eswt_app_pane_g_ParamLimits

0xfc1e,	// (0x00040d98) cell_eswt_app_pane_g

0xc2b9,	// (0x0003d433) cell_eswt_app_pane_t1_ParamLimits

0xc2b9,	// (0x0003d433) cell_eswt_app_pane_t1

0xc2eb,	// (0x0003d465) grid_highlight_pane_cp70_ParamLimits

0xc2eb,	// (0x0003d465) grid_highlight_pane_cp70

0x26f7,	// (0x00033871) set_content_pane_g1

0x6c82,	// (0x00037dfc) status_small_volume_pane

0x7949,	// (0x00038ac3) status_small_volume_pane_g1

0x7951,	// (0x00038acb) volume_small2_pane

0x795a,	// (0x00038ad4) volume_small2_pane_g1

0x7963,	// (0x00038add) volume_small2_pane_g2

0x796c,	// (0x00038ae6) volume_small2_pane_g3

0x7975,	// (0x00038aef) volume_small2_pane_g4

0x797e,	// (0x00038af8) volume_small2_pane_g5

0x7987,	// (0x00038b01) volume_small2_pane_g6

0x7990,	// (0x00038b0a) volume_small2_pane_g7

0x7999,	// (0x00038b13) volume_small2_pane_g8

0x79a2,	// (0x00038b1c) volume_small2_pane_g9

0x79ab,	// (0x00038b25) volume_small2_pane_g10

0x0009,

0xfc23,	// (0x00040d9d) volume_small2_pane_g

0xbb46,	// (0x0003ccc0) fep_vkb_top_text_pane_g1_ParamLimits

0xbb61,	// (0x0003ccdb) fep_vkb_top_text_pane_t1_ParamLimits

0xbdf9,	// (0x0003cf73) popup_preview_fixed_window_g3_ParamLimits

0xbdf9,	// (0x0003cf73) popup_preview_fixed_window_g3

0x8b4d,	// (0x00039cc7) popup_toolbar_trans_pane

0xa4eb,	// (0x0003b665) aid_height_set_list_ParamLimits

0xa4fc,	// (0x0003b676) aid_size_parent_ParamLimits

0x6ea9,	// (0x00038023) list_highlight_pane_cp2_ParamLimits

0x26f7,	// (0x00033871) set_content_pane_g1_ParamLimits

0xa751,	// (0x0003b8cb) list_single_image_pane_ParamLimits

0xa751,	// (0x0003b8cb) list_single_image_pane

0xc2f7,	// (0x0003d471) aid_size_cell_image_ParamLimits

0xc2f7,	// (0x0003d471) aid_size_cell_image

0xc304,	// (0x0003d47e) grid_single_image_pane_ParamLimits

0xc304,	// (0x0003d47e) grid_single_image_pane

0x1ebb,	// (0x00033035) list_single_image_pane_g1_ParamLimits

0x1ebb,	// (0x00033035) list_single_image_pane_g1

0x1ec7,	// (0x00033041) list_single_image_pane_g2_ParamLimits

0x1ec7,	// (0x00033041) list_single_image_pane_g2

0x0001,

0xfc38,	// (0x00040db2) list_single_image_pane_g_ParamLimits

0xfc38,	// (0x00040db2) list_single_image_pane_g

0xc312,	// (0x0003d48c) list_single_image_pane_t1_ParamLimits

0xc312,	// (0x0003d48c) list_single_image_pane_t1

0xc328,	// (0x0003d4a2) cell_image_list_pane_ParamLimits

0xc328,	// (0x0003d4a2) cell_image_list_pane

0xc33e,	// (0x0003d4b8) cell_image_list_pane_g1

0xc347,	// (0x0003d4c1) cell_image_list_pane_g2

0x0001,

0xfc3d,	// (0x00040db7) cell_image_list_pane_g

0xc350,	// (0x0003d4ca) aid_size_cell_tb_trans_pane

0x1ead,	// (0x00033027) bg_tb_trans_pane

0xc362,	// (0x0003d4dc) grid_tb_trans_pane

0x9133,	// (0x0003a2ad) bg_tb_trans_pane_g1

0x9143,	// (0x0003a2bd) bg_tb_trans_pane_g2

0x913b,	// (0x0003a2b5) bg_tb_trans_pane_g3

0x9153,	// (0x0003a2cd) bg_tb_trans_pane_g4

0x914b,	// (0x0003a2c5) bg_tb_trans_pane_g5

0x9173,	// (0x0003a2ed) bg_tb_trans_pane_g6

0x916b,	// (0x0003a2e5) bg_tb_trans_pane_g7

0x915b,	// (0x0003a2d5) bg_tb_trans_pane_g8

0x9163,	// (0x0003a2dd) bg_tb_trans_pane_g9

0x0008,

0xfc42,	// (0x00040dbc) bg_tb_trans_pane_g

0xc376,	// (0x0003d4f0) cell_toolbar_trans_pane_ParamLimits

0xc376,	// (0x0003d4f0) cell_toolbar_trans_pane

0xb777,	// (0x0003c8f1) cell_toolbar_trans_pane_g1

0xb39b,	// (0x0003c515) list_form2_midp_pane_t1

0xb3a9,	// (0x0003c523) list_form2_midp_pane_t2

0x0001,

0xfadf,	// (0x00040c59) list_form2_midp_pane_t

0xb3b7,	// (0x0003c531) scroll_pane_cp51_ParamLimits

0xb57e,	// (0x0003c6f8) form2_midp_wait_pane_g1

0xb587,	// (0x0003c701) form2_midp_wait_pane_g2

0xb590,	// (0x0003c70a) form2_midp_wait_pane_g3

0x0002,

0xfaf4,	// (0x00040c6e) form2_midp_wait_pane_g

0xef84,	// (0x000400fe) list_highlight_pane_cp21_ParamLimits

0xb5d4,	// (0x0003c74e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb5e3,	// (0x0003c75d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa70a,	// (0x0003b884) list_single_2graphic_im_pane_ParamLimits

0xa70a,	// (0x0003b884) list_single_2graphic_im_pane

0xc39c,	// (0x0003d516) list_single_2graphic_im_pane_g1_ParamLimits

0xc39c,	// (0x0003d516) list_single_2graphic_im_pane_g1

0xc3ad,	// (0x0003d527) list_single_2graphic_im_pane_g2_ParamLimits

0xc3ad,	// (0x0003d527) list_single_2graphic_im_pane_g2

0xc3b9,	// (0x0003d533) list_single_2graphic_im_pane_g3_ParamLimits

0xc3b9,	// (0x0003d533) list_single_2graphic_im_pane_g3

0x0003,

0xfc55,	// (0x00040dcf) list_single_2graphic_im_pane_g_ParamLimits

0xfc55,	// (0x00040dcf) list_single_2graphic_im_pane_g

0xc3d9,	// (0x0003d553) list_single_2graphic_im_pane_t1_ParamLimits

0xc3d9,	// (0x0003d553) list_single_2graphic_im_pane_t1

0xbe05,	// (0x0003cf7f) list_single_graphic_2heading_pane_fp_ParamLimits

0xbe05,	// (0x0003cf7f) list_single_graphic_2heading_pane_fp

0x42a7,	// (0x00035421) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x42a7,	// (0x00035421) list_single_graphic_2heading_pane_fp_g1

0xbe1e,	// (0x0003cf98) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbe1e,	// (0x0003cf98) list_single_graphic_2heading_pane_fp_g2

0x4270,	// (0x000353ea) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4270,	// (0x000353ea) list_single_graphic_2heading_pane_fp_g3

0x427c,	// (0x000353f6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x427c,	// (0x000353f6) list_single_graphic_2heading_pane_fp_g4

0xbe2a,	// (0x0003cfa4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbe2a,	// (0x0003cfa4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7c,	// (0x00040cf6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x00040cf6) list_single_graphic_2heading_pane_fp_g

0x444a,	// (0x000355c4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x444a,	// (0x000355c4) list_single_graphic_2heading_pane_fp_t1

0x42df,	// (0x00035459) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x42df,	// (0x00035459) list_single_graphic_2heading_pane_fp_t2

0x46b6,	// (0x00035830) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x46b6,	// (0x00035830) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5e,	// (0x00040dd8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5e,	// (0x00040dd8) list_single_graphic_2heading_pane_fp_t

0xb808,	// (0x0003c982) fep_hwr_write_pane_g5_ParamLimits

0xb808,	// (0x0003c982) fep_hwr_write_pane_g5

0xb814,	// (0x0003c98e) fep_hwr_write_pane_g6_ParamLimits

0xb814,	// (0x0003c98e) fep_hwr_write_pane_g6

0xc0da,	// (0x0003d254) eswt_shell_pane_ParamLimits

0x91a7,	// (0x0003a321) bg_popup_window_pane_cp18_ParamLimits

0xa442,	// (0x0003b5bc) heading_pane_cp70

0xc204,	// (0x0003d37e) popup_eswt_tasktip_window_t1_ParamLimits

0x8c80,	// (0x00039dfa) aid_touch_tab_arrow_left

0x8c8f,	// (0x00039e09) aid_touch_tab_arrow_right

0xe573,	// (0x0003f6ed) title_pane_g3_ParamLimits

0xe573,	// (0x0003f6ed) title_pane_g3

0x1e6c,	// (0x00032fe6) set_value_pane_g1

0x8b4d,	// (0x00039cc7) popup_toolbar_trans_pane_ParamLimits

0xc350,	// (0x0003d4ca) aid_size_cell_tb_trans_pane_ParamLimits

0x1ead,	// (0x00033027) bg_tb_trans_pane_ParamLimits

0xc362,	// (0x0003d4dc) grid_tb_trans_pane_ParamLimits

0xf0c5,	// (0x0004023f) cont_note_pane_ParamLimits

0xf0c5,	// (0x0004023f) cont_note_pane

0xf322,	// (0x0004049c) cont_snote2_single_text_pane_ParamLimits

0xf322,	// (0x0004049c) cont_snote2_single_text_pane

0xf322,	// (0x0004049c) cont_snote2_single_graphic_pane_ParamLimits

0xf322,	// (0x0004049c) cont_snote2_single_graphic_pane

0x9783,	// (0x0003a8fd) cont_note_wait_pane_ParamLimits

0x9783,	// (0x0003a8fd) cont_note_wait_pane

0x9783,	// (0x0003a8fd) cont_note_image_pane_ParamLimits

0x9783,	// (0x0003a8fd) cont_note_image_pane

0xc40a,	// (0x0003d584) popup_note2_window_g1_ParamLimits

0xc40a,	// (0x0003d584) popup_note2_window_g1

0xc43b,	// (0x0003d5b5) popup_note2_window_t1_ParamLimits

0xc43b,	// (0x0003d5b5) popup_note2_window_t1

0xc480,	// (0x0003d5fa) popup_note2_window_t2_ParamLimits

0xc480,	// (0x0003d5fa) popup_note2_window_t2

0xc4c5,	// (0x0003d63f) popup_note2_window_t3_ParamLimits

0xc4c5,	// (0x0003d63f) popup_note2_window_t3

0xc50a,	// (0x0003d684) popup_note2_window_t4_ParamLimits

0xc50a,	// (0x0003d684) popup_note2_window_t4

0xf149,	// (0x000402c3) popup_note2_window_t5_ParamLimits

0xf149,	// (0x000402c3) popup_note2_window_t5

0x0004,

0xfc6a,	// (0x00040de4) popup_note2_window_t_ParamLimits

0xfc6a,	// (0x00040de4) popup_note2_window_t

0xc539,	// (0x0003d6b3) popup_note2_image_window_g1_ParamLimits

0xc539,	// (0x0003d6b3) popup_note2_image_window_g1

0xc545,	// (0x0003d6bf) popup_note2_image_window_g2_ParamLimits

0xc545,	// (0x0003d6bf) popup_note2_image_window_g2

0x0001,

0xfc75,	// (0x00040def) popup_note2_image_window_g_ParamLimits

0xfc75,	// (0x00040def) popup_note2_image_window_g

0xc557,	// (0x0003d6d1) popup_note2_image_window_t1_ParamLimits

0xc557,	// (0x0003d6d1) popup_note2_image_window_t1

0xc56f,	// (0x0003d6e9) popup_note2_image_window_t2_ParamLimits

0xc56f,	// (0x0003d6e9) popup_note2_image_window_t2

0xc587,	// (0x0003d701) popup_note2_image_window_t3_ParamLimits

0xc587,	// (0x0003d701) popup_note2_image_window_t3

0x0002,

0xfc7a,	// (0x00040df4) popup_note2_image_window_t_ParamLimits

0xfc7a,	// (0x00040df4) popup_note2_image_window_t

0x9791,	// (0x0003a90b) popup_note2_wait_window_g1_ParamLimits

0x9791,	// (0x0003a90b) popup_note2_wait_window_g1

0xc5a3,	// (0x0003d71d) popup_note2_wait_window_g2_ParamLimits

0xc5a3,	// (0x0003d71d) popup_note2_wait_window_g2

0x97a9,	// (0x0003a923) popup_note2_wait_window_g3_ParamLimits

0x97a9,	// (0x0003a923) popup_note2_wait_window_g3

0x0002,

0xfc81,	// (0x00040dfb) popup_note2_wait_window_g_ParamLimits

0xfc81,	// (0x00040dfb) popup_note2_wait_window_g

0xc5af,	// (0x0003d729) popup_note2_wait_window_t1_ParamLimits

0xc5af,	// (0x0003d729) popup_note2_wait_window_t1

0xc5cd,	// (0x0003d747) popup_note2_wait_window_t2_ParamLimits

0xc5cd,	// (0x0003d747) popup_note2_wait_window_t2

0xc60c,	// (0x0003d786) popup_note2_wait_window_t3_ParamLimits

0xc60c,	// (0x0003d786) popup_note2_wait_window_t3

0xc61e,	// (0x0003d798) popup_note2_wait_window_t4_ParamLimits

0xc61e,	// (0x0003d798) popup_note2_wait_window_t4

0x0003,

0xfc88,	// (0x00040e02) popup_note2_wait_window_t_ParamLimits

0xfc88,	// (0x00040e02) popup_note2_wait_window_t

0xc630,	// (0x0003d7aa) wait_bar2_pane_ParamLimits

0xc630,	// (0x0003d7aa) wait_bar2_pane

0xc648,	// (0x0003d7c2) popup_snote2_single_text_window_g1_ParamLimits

0xc648,	// (0x0003d7c2) popup_snote2_single_text_window_g1

0xc670,	// (0x0003d7ea) popup_snote2_single_text_window_t1_ParamLimits

0xc670,	// (0x0003d7ea) popup_snote2_single_text_window_t1

0xc6bc,	// (0x0003d836) popup_snote2_single_text_window_t2_ParamLimits

0xc6bc,	// (0x0003d836) popup_snote2_single_text_window_t2

0xc708,	// (0x0003d882) popup_snote2_single_text_window_t3_ParamLimits

0xc708,	// (0x0003d882) popup_snote2_single_text_window_t3

0xc749,	// (0x0003d8c3) popup_snote2_single_text_window_t4_ParamLimits

0xc749,	// (0x0003d8c3) popup_snote2_single_text_window_t4

0xc77f,	// (0x0003d8f9) popup_snote2_single_text_window_t5_ParamLimits

0xc77f,	// (0x0003d8f9) popup_snote2_single_text_window_t5

0x0004,

0xfc91,	// (0x00040e0b) popup_snote2_single_text_window_t_ParamLimits

0xfc91,	// (0x00040e0b) popup_snote2_single_text_window_t

0xc7aa,	// (0x0003d924) popup_snote2_single_graphic_window_g1_ParamLimits

0xc7aa,	// (0x0003d924) popup_snote2_single_graphic_window_g1

0xc7d2,	// (0x0003d94c) popup_snote2_single_graphic_window_g2_ParamLimits

0xc7d2,	// (0x0003d94c) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9c,	// (0x00040e16) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9c,	// (0x00040e16) popup_snote2_single_graphic_window_g

0xc7fa,	// (0x0003d974) popup_snote2_single_graphic_window_t1_ParamLimits

0xc7fa,	// (0x0003d974) popup_snote2_single_graphic_window_t1

0xc846,	// (0x0003d9c0) popup_snote2_single_graphic_window_t2_ParamLimits

0xc846,	// (0x0003d9c0) popup_snote2_single_graphic_window_t2

0xc708,	// (0x0003d882) popup_snote2_single_graphic_window_t3_ParamLimits

0xc708,	// (0x0003d882) popup_snote2_single_graphic_window_t3

0xc749,	// (0x0003d8c3) popup_snote2_single_graphic_window_t4_ParamLimits

0xc749,	// (0x0003d8c3) popup_snote2_single_graphic_window_t4

0xc77f,	// (0x0003d8f9) popup_snote2_single_graphic_window_t5_ParamLimits

0xc77f,	// (0x0003d8f9) popup_snote2_single_graphic_window_t5

0x0004,

0xfca1,	// (0x00040e1b) popup_snote2_single_graphic_window_t_ParamLimits

0xfca1,	// (0x00040e1b) popup_snote2_single_graphic_window_t

0xb267,	// (0x0003c3e1) clock_nsta_pane_cp2_t1

0xb267,	// (0x0003c3e1) clock_nsta_pane_cp2_t2

0x0001,

0xfab5,	// (0x00040c2f) clock_nsta_pane_cp2_t

0x3d2d,	// (0x00034ea7) form_field_data_wide_pane_g1_ParamLimits

0x1ebb,	// (0x00033035) form_field_data_wide_pane_g2_ParamLimits

0x1ebb,	// (0x00033035) form_field_data_wide_pane_g2

0x1ec7,	// (0x00033041) form_field_data_wide_pane_g3_ParamLimits

0x1ec7,	// (0x00033041) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x000407f0) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x000407f0) form_field_data_wide_pane_g

0xb146,	// (0x0003c2c0) grid_touch_3_pane_ParamLimits

0xb146,	// (0x0003c2c0) grid_touch_3_pane

0xc892,	// (0x0003da0c) cell_touch_3_pane_ParamLimits

0xc892,	// (0x0003da0c) cell_touch_3_pane

0xb777,	// (0x0003c8f1) cell_touch_3_pane_g1

0xb777,	// (0x0003c8f1) cell_touch_3_pane_g2

0x0001,

0xfb3a,	// (0x00040cb4) cell_touch_3_pane_g

0xf17b,	// (0x000402f5) cont_query_data_pane

0xf183,	// (0x000402fd) cont_query_data_pane_cp1

0xc8c5,	// (0x0003da3f) button_value_adjust_pane_cp7

0xc8cd,	// (0x0003da47) query_popup_pane_cp3

0x23ef,	// (0x00033569) bg_popup_sub_pane_cp22_ParamLimits

0x651e,	// (0x00037698) navi_navi_volume_pane_cp2

0x6539,	// (0x000376b3) popup_side_volume_key_window_g2

0x6548,	// (0x000376c2) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00040886) popup_side_volume_key_window_g

0x6565,	// (0x000376df) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0004088d) popup_side_volume_key_window_t

0x25fa,	// (0x00033774) popup_side_volume_key_window_ParamLimits

0x5ca3,	// (0x00036e1d) list_double_graphic_pane_g4_ParamLimits

0x5ca3,	// (0x00036e1d) list_double_graphic_pane_g4

0xa739,	// (0x0003b8b3) list_single_2heading_msg_pane_ParamLimits

0xa739,	// (0x0003b8b3) list_single_2heading_msg_pane

0x79b4,	// (0x00038b2e) list_single_2heading_msg_pane_g1_ParamLimits

0x79b4,	// (0x00038b2e) list_single_2heading_msg_pane_g1

0x443e,	// (0x000355b8) list_single_2heading_msg_pane_g2_ParamLimits

0x443e,	// (0x000355b8) list_single_2heading_msg_pane_g2

0x79c0,	// (0x00038b3a) list_single_2heading_msg_pane_g3_ParamLimits

0x79c0,	// (0x00038b3a) list_single_2heading_msg_pane_g3

0x79cc,	// (0x00038b46) list_single_2heading_msg_pane_g4_ParamLimits

0x79cc,	// (0x00038b46) list_single_2heading_msg_pane_g4

0x0003,

0xfcac,	// (0x00040e26) list_single_2heading_msg_pane_g_ParamLimits

0xfcac,	// (0x00040e26) list_single_2heading_msg_pane_g

0x79e4,	// (0x00038b5e) list_single_2heading_msg_pane_t1_ParamLimits

0x79e4,	// (0x00038b5e) list_single_2heading_msg_pane_t1

0x7a0c,	// (0x00038b86) list_single_2heading_msg_pane_t2_ParamLimits

0x7a0c,	// (0x00038b86) list_single_2heading_msg_pane_t2

0x7a40,	// (0x00038bba) list_single_2heading_msg_pane_t3_ParamLimits

0x7a40,	// (0x00038bba) list_single_2heading_msg_pane_t3

0x46d6,	// (0x00035850) list_single_2heading_msg_pane_t4_ParamLimits

0x46d6,	// (0x00035850) list_single_2heading_msg_pane_t4

0x0003,

0xfcb5,	// (0x00040e2f) list_single_2heading_msg_pane_t_ParamLimits

0xfcb5,	// (0x00040e2f) list_single_2heading_msg_pane_t

0xe57f,	// (0x0003f6f9) title_pane_g4_ParamLimits

0xe57f,	// (0x0003f6f9) title_pane_g4

0x61b7,	// (0x00037331) title_pane_stacon_g3_ParamLimits

0x61b7,	// (0x00037331) title_pane_stacon_g3

0xc3cd,	// (0x0003d547) list_single_2graphic_im_pane_g4_ParamLimits

0xc3cd,	// (0x0003d547) list_single_2graphic_im_pane_g4

0xa1f3,	// (0x0003b36d) popup_side_volume_key_window_cp

0xaa61,	// (0x0003bbdb) main_idle_act2_pane_t1

0x7007,	// (0x00038181) toolbar_button_pane_g10

0x5b18,	// (0x00036c92) popup_toolbar_window_cp1

0xb258,	// (0x0003c3d2) clock_nsta_pane_cp_t1

0xb258,	// (0x0003c3d2) clock_nsta_pane_cp_t2

0x0001,

0xfab0,	// (0x00040c2a) clock_nsta_pane_cp_t

0x651e,	// (0x00037698) navi_navi_volume_pane_cp2_ParamLimits

0x652d,	// (0x000376a7) popup_side_volume_key_window_g1_ParamLimits

0x6539,	// (0x000376b3) popup_side_volume_key_window_g2_ParamLimits

0x6548,	// (0x000376c2) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00040886) popup_side_volume_key_window_g_ParamLimits

0x7564,	// (0x000386de) fep_hwr_aid_pane

0x760d,	// (0x00038787) bg_fep_hwr_top_pane_g4_ParamLimits

0xb7d8,	// (0x0003c952) fep_hwr_top_pane_g1_ParamLimits

0xb7ea,	// (0x0003c964) fep_hwr_top_pane_g2_ParamLimits

0x762d,	// (0x000387a7) fep_hwr_top_pane_g3_ParamLimits

0xfb05,	// (0x00040c7f) fep_hwr_top_pane_g_ParamLimits

0x7642,	// (0x000387bc) fep_hwr_top_text_pane_ParamLimits

0x9fa8,	// (0x0003b122) aid_touch_tab_arrow_arrow_2

0x9fb1,	// (0x0003b12b) aid_touch_tab_arrow_left_2

0x7578,	// (0x000386f2) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x75af,	// (0x00038729) fep_hwr_prediction_pane

0xb940,	// (0x0003caba) fep_vkb_prediction_pane

0xba46,	// (0x0003cbc0) fep_vkb_side_pane_g3_ParamLimits

0xba46,	// (0x0003cbc0) fep_vkb_side_pane_g3

0x77d1,	// (0x0003894b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7842,	// (0x000389bc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x784f,	// (0x000389c9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb4,	// (0x00040d2e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7a79,	// (0x00038bf3) fep_hwr_prediction_pane_g1

0x7a83,	// (0x00038bfd) fep_hwr_prediction_pane_g2

0x7a8b,	// (0x00038c05) fep_hwr_prediction_pane_g3

0x7a93,	// (0x00038c0d) fep_hwr_prediction_pane_g4

0x0003,

0xfcbe,	// (0x00040e38) fep_hwr_prediction_pane_g

0xc8f4,	// (0x0003da6e) fep_vkb_prediction_pane_g1

0xc8fe,	// (0x0003da78) fep_vkb_prediction_pane_g2

0xc906,	// (0x0003da80) fep_vkb_prediction_pane_g3

0xc90e,	// (0x0003da88) fep_vkb_prediction_pane_g4

0x0003,

0xfcc7,	// (0x00040e41) fep_vkb_prediction_pane_g

0x735b,	// (0x000384d5) slider_set_pane_g3

0x736f,	// (0x000384e9) slider_set_pane_g4

0x7387,	// (0x00038501) slider_set_pane_g5

0x735b,	// (0x000384d5) slider_set_pane_g6

0x739d,	// (0x00038517) slider_set_pane_g7

0xa681,	// (0x0003b7fb) slider_form_pane_g3

0xa68a,	// (0x0003b804) slider_form_pane_g4

0xa692,	// (0x0003b80c) slider_form_pane_g5

0xa681,	// (0x0003b7fb) slider_form_pane_g6

0xa69a,	// (0x0003b814) slider_form_pane_g7

0xad18,	// (0x0003be92) slider_set_pane_vc_g3

0xad21,	// (0x0003be9b) slider_set_pane_vc_g4

0xad2a,	// (0x0003bea4) slider_set_pane_vc_g5

0xad18,	// (0x0003be92) slider_set_pane_vc_g6

0xad33,	// (0x0003bead) slider_set_pane_vc_g7

0xaf0b,	// (0x0003c085) slider_form_pane_vc_g1

0xaf14,	// (0x0003c08e) slider_form_pane_vc_g2

0xaf1d,	// (0x0003c097) slider_form_pane_vc_g3

0xaf0b,	// (0x0003c085) slider_form_pane_vc_g4

0xaf26,	// (0x0003c0a0) slider_form_pane_vc_g5

0x0004,

0xfa82,	// (0x00040bfc) slider_form_pane_vc_g

0xe555,	// (0x0003f6cf) main_idle_act3_pane

0xc916,	// (0x0003da90) ai3_links_pane

0xc91f,	// (0x0003da99) popup_ai3_data_window_ParamLimits

0xc91f,	// (0x0003da99) popup_ai3_data_window

0xe555,	// (0x0003f6cf) grid_ai3_links_pane

0xc93d,	// (0x0003dab7) cell_ai3_links_pane_ParamLimits

0xc93d,	// (0x0003dab7) cell_ai3_links_pane

0xc957,	// (0x0003dad1) bg_popup_sub_pane_cp11

0xc964,	// (0x0003dade) cell_ai3_links_pane_g1

0xe555,	// (0x0003f6cf) bg_popup_sub_pane_cp12

0xc989,	// (0x0003db03) heading_ai3_data_pane

0xc991,	// (0x0003db0b) list_ai3_gene_pane

0xc99d,	// (0x0003db17) popup_ai3_data_window_g1

0xc9a5,	// (0x0003db1f) heading_ai3_data_pane_g1

0xc9ad,	// (0x0003db27) heading_ai3_data_pane_t1

0xc9bb,	// (0x0003db35) list_double_ai3_gene_pane_ParamLimits

0xc9bb,	// (0x0003db35) list_double_ai3_gene_pane

0xc9c8,	// (0x0003db42) list_single_ai3_gene_pane_ParamLimits

0xc9c8,	// (0x0003db42) list_single_ai3_gene_pane

0xb73c,	// (0x0003c8b6) list_highlight_pane_cp7_ParamLimits

0xb73c,	// (0x0003c8b6) list_highlight_pane_cp7

0xc9d5,	// (0x0003db4f) list_single_a13_gene_pane_t1_ParamLimits

0xc9d5,	// (0x0003db4f) list_single_a13_gene_pane_t1

0xc9ec,	// (0x0003db66) list_single_ai3_gene_pane_g1

0xc9f5,	// (0x0003db6f) list_single_ai3_gene_pane_g2

0x0001,

0xfcd0,	// (0x00040e4a) list_single_ai3_gene_pane_g

0xc9fd,	// (0x0003db77) list_double_ai3_gene_pane_g1_ParamLimits

0xc9fd,	// (0x0003db77) list_double_ai3_gene_pane_g1

0xca09,	// (0x0003db83) list_double_ai3_gene_pane_t1_ParamLimits

0xca09,	// (0x0003db83) list_double_ai3_gene_pane_t1

0xca25,	// (0x0003db9f) list_double_ai3_gene_pane_t2_ParamLimits

0xca25,	// (0x0003db9f) list_double_ai3_gene_pane_t2

0xca3a,	// (0x0003dbb4) list_double_ai3_gene_pane_t3_ParamLimits

0xca3a,	// (0x0003dbb4) list_double_ai3_gene_pane_t3

0x0002,

0xfcd5,	// (0x00040e4f) list_double_ai3_gene_pane_t_ParamLimits

0xfcd5,	// (0x00040e4f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x46cc,	// (0x00035846) aid_size_min_col_2

0xc8de,	// (0x0003da58) aid_size_min_msg_ParamLimits

0xc8de,	// (0x0003da58) aid_size_min_msg

0xbb52,	// (0x0003cccc) fep_vkb_top_text_pane_g2_ParamLimits

0xbb52,	// (0x0003cccc) fep_vkb_top_text_pane_g2

0x0001,

0xfb35,	// (0x00040caf) fep_vkb_top_text_pane_g_ParamLimits

0xfb35,	// (0x00040caf) fep_vkb_top_text_pane_g

0xe555,	// (0x0003f6cf) main_hc_apps_shell_pane

0xca57,	// (0x0003dbd1) grid_hc_apps_pane_ParamLimits

0xca57,	// (0x0003dbd1) grid_hc_apps_pane

0xca66,	// (0x0003dbe0) list_hc_apps_pane

0xca6e,	// (0x0003dbe8) scroll_pane_cp37_ParamLimits

0xca6e,	// (0x0003dbe8) scroll_pane_cp37

0xca7a,	// (0x0003dbf4) cell_hc_apps_pane_ParamLimits

0xca7a,	// (0x0003dbf4) cell_hc_apps_pane

0xcb32,	// (0x0003dcac) cell_hc_apps_pane_g1_ParamLimits

0xcb32,	// (0x0003dcac) cell_hc_apps_pane_g1

0xcb63,	// (0x0003dcdd) cell_hc_apps_pane_g2_ParamLimits

0xcb63,	// (0x0003dcdd) cell_hc_apps_pane_g2

0xcb7f,	// (0x0003dcf9) cell_hc_apps_pane_g3_ParamLimits

0xcb7f,	// (0x0003dcf9) cell_hc_apps_pane_g3

0x0002,

0xfcdc,	// (0x00040e56) cell_hc_apps_pane_g_ParamLimits

0xfcdc,	// (0x00040e56) cell_hc_apps_pane_g

0xcba1,	// (0x0003dd1b) cell_hc_apps_pane_t1_ParamLimits

0xcba1,	// (0x0003dd1b) cell_hc_apps_pane_t1

0xf0c5,	// (0x0004023f) grid_highlight_pane_cp10_ParamLimits

0xf0c5,	// (0x0004023f) grid_highlight_pane_cp10

0xcbe1,	// (0x0003dd5b) list_single_hc_apps_pane_ParamLimits

0xcbe1,	// (0x0003dd5b) list_single_hc_apps_pane

0xcc20,	// (0x0003dd9a) list_single_hc_apps_pane_g1

0x7a9b,	// (0x00038c15) list_single_hc_apps_pane_g2

0x0001,

0xfce3,	// (0x00040e5d) list_single_hc_apps_pane_g

0x7ab4,	// (0x00038c2e) list_single_hc_apps_pane_g2_copy1

0x7ad0,	// (0x00038c4a) list_single_hc_apps_pane_t1

0xef84,	// (0x000400fe) bg_set_opt_pane_cp_ParamLimits

0x5869,	// (0x000369e3) setting_slider_pane_t1_ParamLimits

0x5882,	// (0x000369fc) setting_slider_pane_t2_ParamLimits

0x589c,	// (0x00036a16) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000406d8) setting_slider_pane_t_ParamLimits

0x58b4,	// (0x00036a2e) slider_set_pane_ParamLimits

0x6d0e,	// (0x00037e88) control_pane_g5_ParamLimits

0x6d0e,	// (0x00037e88) control_pane_g5

0xa4ae,	// (0x0003b628) slider_set_pane_g1_ParamLimits

0x734f,	// (0x000384c9) slider_set_pane_g2_ParamLimits

0x735b,	// (0x000384d5) slider_set_pane_g3_ParamLimits

0x736f,	// (0x000384e9) slider_set_pane_g4_ParamLimits

0x7387,	// (0x00038501) slider_set_pane_g5_ParamLimits

0x735b,	// (0x000384d5) slider_set_pane_g6_ParamLimits

0x739d,	// (0x00038517) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00040ad9) slider_set_pane_g_ParamLimits

0x26a2,	// (0x0003381c) navi_icon_text_pane_ParamLimits

0x8c3f,	// (0x00039db9) aid_fill_nsta_2_ParamLimits

0x8c80,	// (0x00039dfa) aid_touch_tab_arrow_left_ParamLimits

0x8c8f,	// (0x00039e09) aid_touch_tab_arrow_right_ParamLimits

0x8cfc,	// (0x00039e76) clock_nsta_pane_ParamLimits

0x9f8a,	// (0x0003b104) navi_icon_pane_g1_ParamLimits

0x9f96,	// (0x0003b110) navi_text_pane_t1_ParamLimits

0xb375,	// (0x0003c4ef) navi_icon_text_pane_g1_ParamLimits

0xb381,	// (0x0003c4fb) navi_icon_text_pane_t1_ParamLimits

0xcc20,	// (0x0003dd9a) list_single_hc_apps_pane_g1_ParamLimits

0x7a9b,	// (0x00038c15) list_single_hc_apps_pane_g2_ParamLimits

0xfce3,	// (0x00040e5d) list_single_hc_apps_pane_g_ParamLimits

0x7ab4,	// (0x00038c2e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7ad0,	// (0x00038c4a) list_single_hc_apps_pane_t1_ParamLimits

0x56b1,	// (0x0003682b) popup_toolbar2_fixed_window_ParamLimits

0x56b1,	// (0x0003682b) popup_toolbar2_fixed_window

0x8b43,	// (0x00039cbd) popup_toolbar2_float_window

0xe555,	// (0x0003f6cf) bg_popup_sub_pane_cp27

0xcc39,	// (0x0003ddb3) grid_toolbar2_float_pane

0xe555,	// (0x0003f6cf) bg_popup_sub_pane_cp26

0xcc39,	// (0x0003ddb3) grid_toolbar2_fixed_pane

0xcc41,	// (0x0003ddbb) cell_toolbar2_fixed_pane_ParamLimits

0xcc41,	// (0x0003ddbb) cell_toolbar2_fixed_pane

0xcc51,	// (0x0003ddcb) cell_toolbar2_fixed_pane_g1

0xcc5a,	// (0x0003ddd4) toolbar2_fixed_button_pane

0x9133,	// (0x0003a2ad) toolbar2_fixed_button_pane_g1

0x9143,	// (0x0003a2bd) toolbar2_fixed_button_pane_g2

0x913b,	// (0x0003a2b5) toolbar2_fixed_button_pane_g3

0x9153,	// (0x0003a2cd) toolbar2_fixed_button_pane_g4

0x914b,	// (0x0003a2c5) toolbar2_fixed_button_pane_g5

0x915b,	// (0x0003a2d5) toolbar2_fixed_button_pane_g6

0x9163,	// (0x0003a2dd) toolbar2_fixed_button_pane_g7

0x9173,	// (0x0003a2ed) toolbar2_fixed_button_pane_g8

0x916b,	// (0x0003a2e5) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x000409db) toolbar2_fixed_button_pane_g

0xcc62,	// (0x0003dddc) cell_toolbar2_float_pane_ParamLimits

0xcc62,	// (0x0003dddc) cell_toolbar2_float_pane

0xcc73,	// (0x0003dded) cell_toolbar2_float_pane_g1

0xcc5a,	// (0x0003ddd4) toolbar2_fixed_button_pane_cp

0xb8ae,	// (0x0003ca28) fep_vkb_accented_list_pane_ParamLimits

0xb8ae,	// (0x0003ca28) fep_vkb_accented_list_pane

0x77b1,	// (0x0003892b) bg_popup_fep_shadow_pane_g9

0x6938,	// (0x00037ab2) bg_popup_fep_shadow_pane_cp3

0x1fc0,	// (0x0003313a) list_accented_list_pane

0xcc7c,	// (0x0003ddf6) list_single_accented_list_pane_ParamLimits

0xcc7c,	// (0x0003ddf6) list_single_accented_list_pane

0x6938,	// (0x00037ab2) list_highlight_pane_cp10

0xcc8d,	// (0x0003de07) list_single_accented_list_pane_t1

0x8a89,	// (0x00039c03) popup_slider_window_ParamLimits

0x8a89,	// (0x00039c03) popup_slider_window

0xc8d5,	// (0x0003da4f) aid_indentation_list_msg

0xcd59,	// (0x0003ded3) bg_popup_window_pane_cp19

0xcdc7,	// (0x0003df41) popup_slider_window_g1

0xcde3,	// (0x0003df5d) popup_slider_window_g2

0xcdff,	// (0x0003df79) popup_slider_window_g3

0x0005,

0xfce8,	// (0x00040e62) popup_slider_window_g

0xce5b,	// (0x0003dfd5) popup_slider_window_t1

0xcecf,	// (0x0003e049) small_volume_slider_vertical_pane

0xb777,	// (0x0003c8f1) small_volume_slider_vertical_pane_g1

0xb777,	// (0x0003c8f1) small_volume_slider_vertical_pane_g2

0xceeb,	// (0x0003e065) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfa,	// (0x00040e74) small_volume_slider_vertical_pane_g

0x545f,	// (0x000365d9) area_side_right_pane_ParamLimits

0x545f,	// (0x000365d9) area_side_right_pane

0x7afe,	// (0x00038c78) aid_size_side_button_ParamLimits

0x7afe,	// (0x00038c78) aid_size_side_button

0x7b12,	// (0x00038c8c) grid_sctrl_middle_pane_ParamLimits

0x7b12,	// (0x00038c8c) grid_sctrl_middle_pane

0x7b32,	// (0x00038cac) sctrl_sk_bottom_pane

0x7b43,	// (0x00038cbd) sctrl_sk_top_pane

0x7b55,	// (0x00038ccf) aid_touch_sctrl_top

0x7b62,	// (0x00038cdc) bg_sctrl_sk_pane_ParamLimits

0x7b62,	// (0x00038cdc) bg_sctrl_sk_pane

0x7b70,	// (0x00038cea) sctrl_sk_top_pane_g1

0x7b7d,	// (0x00038cf7) sctrl_sk_top_pane_t1

0x7b55,	// (0x00038ccf) aid_touch_sctrl_bottom

0x7b62,	// (0x00038cdc) bg_sctrl_sk_pane_cp_ParamLimits

0x7b62,	// (0x00038cdc) bg_sctrl_sk_pane_cp

0x7b98,	// (0x00038d12) sctrl_sk_bottom_pane_g1

0x7b7d,	// (0x00038cf7) sctrl_sk_bottom_pane_t1

0x7ba1,	// (0x00038d1b) cell_sctrl_middle_pane_ParamLimits

0x7ba1,	// (0x00038d1b) cell_sctrl_middle_pane

0x7bbe,	// (0x00038d38) aid_touch_sctrl_middle_ParamLimits

0x7bbe,	// (0x00038d38) aid_touch_sctrl_middle

0x7bd0,	// (0x00038d4a) bg_sctrl_middle_pane_ParamLimits

0x7bd0,	// (0x00038d4a) bg_sctrl_middle_pane

0x77d1,	// (0x0003894b) cell_sctrl_middle_pane_g1_ParamLimits

0x77d1,	// (0x0003894b) cell_sctrl_middle_pane_g1

0x7bde,	// (0x00038d58) cell_sctrl_middle_pane_g2_ParamLimits

0x7bde,	// (0x00038d58) cell_sctrl_middle_pane_g2

0x0001,

0xfd06,	// (0x00040e80) cell_sctrl_middle_pane_g_ParamLimits

0xfd06,	// (0x00040e80) cell_sctrl_middle_pane_g

0x9133,	// (0x0003a2ad) bg_sctrl_middle_pane_g1

0x913b,	// (0x0003a2b5) bg_sctrl_middle_pane_g2

0x9143,	// (0x0003a2bd) bg_sctrl_middle_pane_g3

0x914b,	// (0x0003a2c5) bg_sctrl_middle_pane_g4

0x9153,	// (0x0003a2cd) bg_sctrl_middle_pane_g5

0x915b,	// (0x0003a2d5) bg_sctrl_middle_pane_g6

0x9163,	// (0x0003a2dd) bg_sctrl_middle_pane_g7

0x916b,	// (0x0003a2e5) bg_sctrl_middle_pane_g8

0x0007,

0xfd0b,	// (0x00040e85) bg_sctrl_middle_pane_g

0x9173,	// (0x0003a2ed) bg_sctrl_middle_pane_g8_copy1

0x9133,	// (0x0003a2ad) bg_sctrl_sk_pane_g1

0x9143,	// (0x0003a2bd) bg_sctrl_sk_pane_g2

0x913b,	// (0x0003a2b5) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x000409db) bg_sctrl_sk_pane_g

0xf4e0,	// (0x0004065a) aid_size_touch_scroll_bar

0x9153,	// (0x0003a2cd) bg_sctrl_sk_pane_g4

0x914b,	// (0x0003a2c5) bg_sctrl_sk_pane_g5

0x915b,	// (0x0003a2d5) bg_sctrl_sk_pane_g6

0x9163,	// (0x0003a2dd) bg_sctrl_sk_pane_g7

0x9173,	// (0x0003a2ed) bg_sctrl_sk_pane_g8

0x916b,	// (0x0003a2e5) bg_sctrl_sk_pane_g9

0x6f57,	// (0x000380d1) popup_fep_china_hwr2_fs_candidate_window

0x6f61,	// (0x000380db) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6f61,	// (0x000380db) popup_fep_china_hwr2_fs_control_window

0x77d1,	// (0x0003894b) sctrl_sk_top_pane_g2

0x0001,

0xfd01,	// (0x00040e7b) sctrl_sk_top_pane_g

0xcef4,	// (0x0003e06e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcef4,	// (0x0003e06e) aid_fep_china_hwr2_fs_cell

0xcf07,	// (0x0003e081) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcf07,	// (0x0003e081) bg_popup_fep_shadow_pane_cp4

0xcf20,	// (0x0003e09a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcf20,	// (0x0003e09a) bg_popup_fep_shadow_pane_cp5

0xcf32,	// (0x0003e0ac) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcf32,	// (0x0003e0ac) popup_fep_china_hwr2_fs_control_bar_grid

0xcf42,	// (0x0003e0bc) popup_fep_china_hwr2_fs_control_funtion_grid

0xcf4a,	// (0x0003e0c4) aid_fep_china_hwr2_fs_candi_cell

0xe555,	// (0x0003f6cf) bg_popup_fep_shadow_pane_cp6

0xcf54,	// (0x0003e0ce) popup_fep_china_hwr2_fs_candidate_grid

0xcf5e,	// (0x0003e0d8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcf5e,	// (0x0003e0d8) cell_fep_china_hwr2_fs_funtion_grid

0xb777,	// (0x0003c8f1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcf76,	// (0x0003e0f0) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcf76,	// (0x0003e0f0) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcf84,	// (0x0003e0fe) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcf84,	// (0x0003e0fe) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1c,	// (0x00040e96) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1c,	// (0x00040e96) cell_fep_china_hwr2_fs_funtion_grid_g

0xcf9a,	// (0x0003e114) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcf9a,	// (0x0003e114) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcfaf,	// (0x0003e129) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcfaf,	// (0x0003e129) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd21,	// (0x00040e9b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd21,	// (0x00040e9b) cell_fep_china_hwr2_fs_funtion_grid_t

0xcfcb,	// (0x0003e145) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcfd3,	// (0x0003e14d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcfdb,	// (0x0003e155) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd26,	// (0x00040ea0) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcfe3,	// (0x0003e15d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcfe3,	// (0x0003e15d) cell_fep_china_hwr2_fs_candidate_grid

0xd002,	// (0x0003e17c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd00a,	// (0x0003e184) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb777,	// (0x0003c8f1) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb777,	// (0x0003c8f1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3a,	// (0x00040cb4) cell_fep_china_hwr2_fs_candidate_grid_g

0xd012,	// (0x0003e18c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8d0f,	// (0x00039e89) clock_nsta_pane_cp_24_ParamLimits

0x8d0f,	// (0x00039e89) clock_nsta_pane_cp_24

0x8d8f,	// (0x00039f09) indicator_nsta_pane_cp_24_ParamLimits

0x8d8f,	// (0x00039f09) indicator_nsta_pane_cp_24

0x9e06,	// (0x0003af80) heading_pane_g1

0x0001,

0xf8c6,	// (0x00040a40) heading_pane_g

0xa8a8,	// (0x0003ba22) grid_sct_catagory_button_pane

0xa8da,	// (0x0003ba54) scroll_pane_cp5_ParamLimits

0xb3c3,	// (0x0003c53d) button_value_adjust_pane_cp5_ParamLimits

0xb3c3,	// (0x0003c53d) button_value_adjust_pane_cp5

0xb4a8,	// (0x0003c622) form2_midp_time_pane_ParamLimits

0xd020,	// (0x0003e19a) cell_sct_catagory_button_pane_ParamLimits

0xd020,	// (0x0003e19a) cell_sct_catagory_button_pane

0xb73c,	// (0x0003c8b6) bg_button_pane_cp01_ParamLimits

0xb73c,	// (0x0003c8b6) bg_button_pane_cp01

0xb777,	// (0x0003c8f1) cell_sct_catagory_button_pane_g1

0x8aca,	// (0x00039c44) popup_tb_extension_window

0xd032,	// (0x0003e1ac) aid_size_cell_ext_ParamLimits

0xd032,	// (0x0003e1ac) aid_size_cell_ext

0xf0c5,	// (0x0004023f) bg_tb_trans_pane_cp1_ParamLimits

0xf0c5,	// (0x0004023f) bg_tb_trans_pane_cp1

0xd052,	// (0x0003e1cc) grid_tb_ext_pane_ParamLimits

0xd052,	// (0x0003e1cc) grid_tb_ext_pane

0xd082,	// (0x0003e1fc) cell_tb_ext_pane_ParamLimits

0xd082,	// (0x0003e1fc) cell_tb_ext_pane

0xd099,	// (0x0003e213) cell_tb_ext_pane_g1_ParamLimits

0xd099,	// (0x0003e213) cell_tb_ext_pane_g1

0xd0b6,	// (0x0003e230) cell_tb_ext_pane_t1

0xf0c5,	// (0x0004023f) list_highlight_pane_cp11_ParamLimits

0xf0c5,	// (0x0004023f) list_highlight_pane_cp11

0x56d0,	// (0x0003684a) popup_uni_indicator_window_ParamLimits

0x56d0,	// (0x0003684a) popup_uni_indicator_window

0x1ead,	// (0x00033027) bg_popup_sub_pane_cp14

0xd0d1,	// (0x0003e24b) list_uniindi_pane

0xd0dd,	// (0x0003e257) uniindi_top_pane

0xf0c5,	// (0x0004023f) bg_uniindi_top_pane

0xd0fe,	// (0x0003e278) uniindi_top_pane_g1

0xd114,	// (0x0003e28e) uniindi_top_pane_g2

0x0003,

0xfd2d,	// (0x00040ea7) uniindi_top_pane_g

0xd13e,	// (0x0003e2b8) uniindi_top_pane_t1

0xd16a,	// (0x0003e2e4) list_single_uniindi_pane_ParamLimits

0xd16a,	// (0x0003e2e4) list_single_uniindi_pane

0xb777,	// (0x0003c8f1) bg_uniindi_top_pane_g1

0xd17c,	// (0x0003e2f6) list_single_uniindi_pane_g1

0xd18f,	// (0x0003e309) list_single_uniindi_pane_t1

0x553c,	// (0x000366b6) control_bg_pane

0xd1b4,	// (0x0003e32e) bg_sctrl_sk_pane_cp1

0xd1bd,	// (0x0003e337) bg_sctrl_sk_pane_cp2

0xd1c6,	// (0x0003e340) control_bg_pane_g1

0xd1cf,	// (0x0003e349) control_bg_pane_g2

0x0001,

0xfd36,	// (0x00040eb0) control_bg_pane_g

0xb1ea,	// (0x0003c364) cell_indicator_nsta_pane_g1_ParamLimits

0xb1f8,	// (0x0003c372) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9e,	// (0x00040c18) cell_indicator_nsta_pane_g_ParamLimits

0x425d,	// (0x000353d7) form2_midp_time_pane_t1_ParamLimits

0xf322,	// (0x0004049c) main_idle_act4_pane_ParamLimits

0xf322,	// (0x0004049c) main_idle_act4_pane

0x8aca,	// (0x00039c44) popup_tb_extension_window_ParamLimits

0xd074,	// (0x0003e1ee) tb_ext_find_pane_ParamLimits

0xd074,	// (0x0003e1ee) tb_ext_find_pane

0xd1d8,	// (0x0003e352) ai_gene_pane_1_cp1

0x6a75,	// (0x00037bef) ai_gene_pane_2_cp1

0xd1e0,	// (0x0003e35a) list_single_idle_plugin_calendar_pane

0xd1e9,	// (0x0003e363) list_single_idle_plugin_notification_pane

0xd1f2,	// (0x0003e36c) list_single_idle_plugin_player_pane

0xd1fb,	// (0x0003e375) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd1fb,	// (0x0003e375) list_single_idle_plugin_shortcut_pane

0xd21d,	// (0x0003e397) main_idle_act4_pane_t1

0xd22f,	// (0x0003e3a9) main_idle_act4_pane_t2

0x0001,

0xfd3b,	// (0x00040eb5) main_idle_act4_pane_t

0xd241,	// (0x0003e3bb) middle_sk_idle_act4_pane_ParamLimits

0xd241,	// (0x0003e3bb) middle_sk_idle_act4_pane

0xd257,	// (0x0003e3d1) popup_clock_digital_analogue_window_cp2

0xd271,	// (0x0003e3eb) shortcut_wheel_idle_act4_pane_ParamLimits

0xd271,	// (0x0003e3eb) shortcut_wheel_idle_act4_pane

0xb777,	// (0x0003c8f1) shortcut_wheel_idle_act4_pane_g1

0xb777,	// (0x0003c8f1) shortcut_wheel_idle_act4_pane_g2

0xb777,	// (0x0003c8f1) shortcut_wheel_idle_act4_pane_g3

0xb777,	// (0x0003c8f1) shortcut_wheel_idle_act4_pane_g4

0xb777,	// (0x0003c8f1) shortcut_wheel_idle_act4_pane_g5

0xd285,	// (0x0003e3ff) shortcut_wheel_idle_act4_pane_g6

0xd28d,	// (0x0003e407) shortcut_wheel_idle_act4_pane_g7

0xd295,	// (0x0003e40f) shortcut_wheel_idle_act4_pane_g8

0xd29d,	// (0x0003e417) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd40,	// (0x00040eba) shortcut_wheel_idle_act4_pane_g

0xb9f2,	// (0x0003cb6c) middle_sk_idle_act4_pane_g1_ParamLimits

0xb9f2,	// (0x0003cb6c) middle_sk_idle_act4_pane_g1

0xd301,	// (0x0003e47b) middle_sk_idle_act4_pane_g2_ParamLimits

0xd301,	// (0x0003e47b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd63,	// (0x00040edd) middle_sk_idle_act4_pane_g_ParamLimits

0xfd63,	// (0x00040edd) middle_sk_idle_act4_pane_g

0xd30d,	// (0x0003e487) middle_sk_idle_act4_pane_t1_ParamLimits

0xd30d,	// (0x0003e487) middle_sk_idle_act4_pane_t1

0xd32a,	// (0x0003e4a4) grid_ai_shortcut_pane_ParamLimits

0xd32a,	// (0x0003e4a4) grid_ai_shortcut_pane

0xd343,	// (0x0003e4bd) list_highlight_pane_cp16_ParamLimits

0xd343,	// (0x0003e4bd) list_highlight_pane_cp16

0xd350,	// (0x0003e4ca) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd350,	// (0x0003e4ca) list_single_idle_plugin_shortcut_pane_g1

0xd35c,	// (0x0003e4d6) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd35c,	// (0x0003e4d6) list_single_idle_plugin_shortcut_pane_g2

0xd376,	// (0x0003e4f0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd376,	// (0x0003e4f0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd68,	// (0x00040ee2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd68,	// (0x00040ee2) list_single_idle_plugin_shortcut_pane_g

0xd389,	// (0x0003e503) cell_ai_shortcut_pane_ParamLimits

0xd389,	// (0x0003e503) cell_ai_shortcut_pane

0xd3ac,	// (0x0003e526) cell_ai_shortcut_pane_g1_ParamLimits

0xd3ac,	// (0x0003e526) cell_ai_shortcut_pane_g1

0xd1d8,	// (0x0003e352) ai_gene_pane_1_cp2

0xd3ce,	// (0x0003e548) ai_gene_pane_2_cp2

0xd3d6,	// (0x0003e550) list_highlight_pane_cp15

0xd3df,	// (0x0003e559) list_single_idle_plugin_calendar_pane_g1

0xd3d6,	// (0x0003e550) list_highlight_pane_cp17

0xd3e7,	// (0x0003e561) list_single_idle_plugin_calendar_pane_g1_copy1

0xd3ef,	// (0x0003e569) list_single_idle_plugin_player_pane_g1

0xab0f,	// (0x0003bc89) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6f,	// (0x00040ee9) list_single_idle_plugin_player_pane_g

0xd3f7,	// (0x0003e571) list_single_idle_plugin_player_pane_t1

0xd405,	// (0x0003e57f) list_single_idle_plugin_player_pane_t2

0xd413,	// (0x0003e58d) list_single_idle_plugin_player_pane_t3

0xd421,	// (0x0003e59b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd74,	// (0x00040eee) list_single_idle_plugin_player_pane_t

0xd42f,	// (0x0003e5a9) wait_bar_pane_cp15

0xd437,	// (0x0003e5b1) grid_ai_notification_pane

0xab0f,	// (0x0003bc89) list_single_idle_plugin_notification_pane_g1

0xd440,	// (0x0003e5ba) cell_ai_notification_pane_ParamLimits

0xd440,	// (0x0003e5ba) cell_ai_notification_pane

0xd44d,	// (0x0003e5c7) cell_ai_notification_pane_g1

0xd455,	// (0x0003e5cf) cell_ai_notification_pane_t1

0xd463,	// (0x0003e5dd) tb_ext_find_button_pane

0xd46b,	// (0x0003e5e5) tb_ext_find_pane_g1

0xd473,	// (0x0003e5ed) tb_ext_find_pane_t1

0x238f,	// (0x00033509) tb_ext_find_button_pane_g1

0xd481,	// (0x0003e5fb) tb_ext_find_button_pane_g2

0x0001,

0xfd7d,	// (0x00040ef7) tb_ext_find_button_pane_g

0xd21d,	// (0x0003e397) main_idle_act4_pane_t1_ParamLimits

0xd22f,	// (0x0003e3a9) main_idle_act4_pane_t2_ParamLimits

0xfd3b,	// (0x00040eb5) main_idle_act4_pane_t_ParamLimits

0xd257,	// (0x0003e3d1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd265,	// (0x0003e3df) sat_plugin_idle_act4_pane_ParamLimits

0xd265,	// (0x0003e3df) sat_plugin_idle_act4_pane

0xd48a,	// (0x0003e604) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd48a,	// (0x0003e604) sat_plugin_idle_act4_pane_t1

0xd49d,	// (0x0003e617) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd49d,	// (0x0003e617) sat_plugin_idle_act4_pane_t2

0xd4b0,	// (0x0003e62a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd4b0,	// (0x0003e62a) sat_plugin_idle_act4_pane_t3

0xd4c3,	// (0x0003e63d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd4c3,	// (0x0003e63d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd82,	// (0x00040efc) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd82,	// (0x00040efc) sat_plugin_idle_act4_pane_t

0x5601,	// (0x0003677b) popup_battery_window_ParamLimits

0x5601,	// (0x0003677b) popup_battery_window

0xf0c5,	// (0x0004023f) bg_popup_sub_pane_cp25_ParamLimits

0xf0c5,	// (0x0004023f) bg_popup_sub_pane_cp25

0xd4d6,	// (0x0003e650) popup_battery_window_g1_ParamLimits

0xd4d6,	// (0x0003e650) popup_battery_window_g1

0xd4e2,	// (0x0003e65c) popup_battery_window_t1_ParamLimits

0xd4e2,	// (0x0003e65c) popup_battery_window_t1

0xd4f4,	// (0x0003e66e) popup_battery_window_t2_ParamLimits

0xd4f4,	// (0x0003e66e) popup_battery_window_t2

0x0001,

0xfd8b,	// (0x00040f05) popup_battery_window_t_ParamLimits

0xfd8b,	// (0x00040f05) popup_battery_window_t

0x6940,	// (0x00037aba) midp_canvas_pane_ParamLimits

0x69b7,	// (0x00037b31) midp_keypad_pane_ParamLimits

0x69b7,	// (0x00037b31) midp_keypad_pane

0x6ea9,	// (0x00038023) main_midp_pane_ParamLimits

0xb276,	// (0x0003c3f0) signal_pane_g2_cp_ParamLimits

0xd511,	// (0x0003e68b) aid_size_cell_midp_keypad_ParamLimits

0xd511,	// (0x0003e68b) aid_size_cell_midp_keypad

0xd52b,	// (0x0003e6a5) midp_keyp_game_grid_pane_ParamLimits

0xd52b,	// (0x0003e6a5) midp_keyp_game_grid_pane

0xd54b,	// (0x0003e6c5) midp_keyp_rocker_pane_ParamLimits

0xd54b,	// (0x0003e6c5) midp_keyp_rocker_pane

0xd576,	// (0x0003e6f0) midp_keyp_sk_left_pane_ParamLimits

0xd576,	// (0x0003e6f0) midp_keyp_sk_left_pane

0xd5d0,	// (0x0003e74a) midp_keyp_sk_right_pane_ParamLimits

0xd5d0,	// (0x0003e74a) midp_keyp_sk_right_pane

0xe555,	// (0x0003f6cf) bg_button_pane_cp03

0xd62a,	// (0x0003e7a4) midp_keyp_sk_left_pane_g1

0xe555,	// (0x0003f6cf) bg_button_pane_cp04

0xd62a,	// (0x0003e7a4) midp_keyp_sk_right_pane_g1

0xb777,	// (0x0003c8f1) midp_keyp_rocker_pane_g1

0xd633,	// (0x0003e7ad) keyp_game_cell_pane_ParamLimits

0xd633,	// (0x0003e7ad) keyp_game_cell_pane

0xe555,	// (0x0003f6cf) bg_button_pane_cp02

0xd646,	// (0x0003e7c0) keyp_game_cell_pane_g1

0x564b,	// (0x000367c5) popup_fep_vkb2_window_ParamLimits

0x564b,	// (0x000367c5) popup_fep_vkb2_window

0x7bfc,	// (0x00038d76) aid_size_cell_vkb2_ParamLimits

0x7bfc,	// (0x00038d76) aid_size_cell_vkb2

0x7c50,	// (0x00038dca) popup_fep_vkb2_window_g1_ParamLimits

0x7c50,	// (0x00038dca) popup_fep_vkb2_window_g1

0x7c98,	// (0x00038e12) vkb2_area_bottom_pane_ParamLimits

0x7c98,	// (0x00038e12) vkb2_area_bottom_pane

0x7cec,	// (0x00038e66) vkb2_area_keypad_pane_ParamLimits

0x7cec,	// (0x00038e66) vkb2_area_keypad_pane

0x7d32,	// (0x00038eac) vkb2_area_top_pane_ParamLimits

0x7d32,	// (0x00038eac) vkb2_area_top_pane

0x7dac,	// (0x00038f26) vkb2_top_entry_pane_ParamLimits

0x7dac,	// (0x00038f26) vkb2_top_entry_pane

0x7dd6,	// (0x00038f50) vkb2_top_grid_left_pane_ParamLimits

0x7dd6,	// (0x00038f50) vkb2_top_grid_left_pane

0x7df4,	// (0x00038f6e) vkb2_top_grid_right_pane_ParamLimits

0x7df4,	// (0x00038f6e) vkb2_top_grid_right_pane

0x7e12,	// (0x00038f8c) vkb2_cell_keypad_pane_ParamLimits

0x7e12,	// (0x00038f8c) vkb2_cell_keypad_pane

0x7ee3,	// (0x0003905d) vkb2_area_bottom_grid_pane_ParamLimits

0x7ee3,	// (0x0003905d) vkb2_area_bottom_grid_pane

0x7f09,	// (0x00039083) vkb2_area_bottom_pane_g1_ParamLimits

0x7f09,	// (0x00039083) vkb2_area_bottom_pane_g1

0x7f2d,	// (0x000390a7) vkb2_area_bottom_pane_g2_ParamLimits

0x7f2d,	// (0x000390a7) vkb2_area_bottom_pane_g2

0x7f5b,	// (0x000390d5) vkb2_area_bottom_pane_g3_ParamLimits

0x7f5b,	// (0x000390d5) vkb2_area_bottom_pane_g3

0x0002,

0xfd90,	// (0x00040f0a) vkb2_area_bottom_pane_g_ParamLimits

0xfd90,	// (0x00040f0a) vkb2_area_bottom_pane_g

0x7fbc,	// (0x00039136) vkb2_top_cell_left_pane_ParamLimits

0x7fbc,	// (0x00039136) vkb2_top_cell_left_pane

0xd657,	// (0x0003e7d1) vkb2_top_entry_pane_g1_ParamLimits

0xd657,	// (0x0003e7d1) vkb2_top_entry_pane_g1

0xd665,	// (0x0003e7df) vkb2_top_entry_pane_t1_ParamLimits

0xd665,	// (0x0003e7df) vkb2_top_entry_pane_t1

0xd697,	// (0x0003e811) vkb2_top_entry_pane_t2_ParamLimits

0xd697,	// (0x0003e811) vkb2_top_entry_pane_t2

0xd6c9,	// (0x0003e843) vkb2_top_entry_pane_t3_ParamLimits

0xd6c9,	// (0x0003e843) vkb2_top_entry_pane_t3

0x0002,

0xfd97,	// (0x00040f11) vkb2_top_entry_pane_t_ParamLimits

0xfd97,	// (0x00040f11) vkb2_top_entry_pane_t

0x8009,	// (0x00039183) vkb2_top_grid_right_pane_g1_ParamLimits

0x8009,	// (0x00039183) vkb2_top_grid_right_pane_g1

0x801f,	// (0x00039199) vkb2_top_grid_right_pane_g2_ParamLimits

0x801f,	// (0x00039199) vkb2_top_grid_right_pane_g2

0x8037,	// (0x000391b1) vkb2_top_grid_right_pane_g3_ParamLimits

0x8037,	// (0x000391b1) vkb2_top_grid_right_pane_g3

0x804f,	// (0x000391c9) vkb2_top_grid_right_pane_g4_ParamLimits

0x804f,	// (0x000391c9) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9e,	// (0x00040f18) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9e,	// (0x00040f18) vkb2_top_grid_right_pane_g

0x8065,	// (0x000391df) vkb2_top_cell_left_pane_g1

0x807c,	// (0x000391f6) vkb2_cell_keypad_pane_g1_ParamLimits

0x807c,	// (0x000391f6) vkb2_cell_keypad_pane_g1

0xd6ed,	// (0x0003e867) vkb2_cell_keypad_pane_t1_ParamLimits

0xd6ed,	// (0x0003e867) vkb2_cell_keypad_pane_t1

0x808a,	// (0x00039204) vkb2_cell_bottom_grid_pane_ParamLimits

0x808a,	// (0x00039204) vkb2_cell_bottom_grid_pane

0x80c3,	// (0x0003923d) vkb2_cell_bottom_grid_pane_g1

0xd2a5,	// (0x0003e41f) aid_call2_pane_cp02

0xd2ad,	// (0x0003e427) aid_call_pane_cp02

0xd2b5,	// (0x0003e42f) clock_digital_number_pane_cp10

0xd2bd,	// (0x0003e437) clock_digital_number_pane_cp11

0xd2c5,	// (0x0003e43f) clock_digital_number_pane_cp12

0xd2cd,	// (0x0003e447) clock_digital_number_pane_cp13

0xd2d5,	// (0x0003e44f) clock_digital_separator_pane_cp10

0x238f,	// (0x00033509) popup_clock_digital_analogue_window_cp2_g1

0x238f,	// (0x00033509) popup_clock_digital_analogue_window_cp2_g2

0xd2dd,	// (0x0003e457) popup_clock_digital_analogue_window_cp2_g3

0x238f,	// (0x00033509) popup_clock_digital_analogue_window_cp2_g4

0xd2dd,	// (0x0003e457) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd53,	// (0x00040ecd) popup_clock_digital_analogue_window_cp2_g

0xd2e5,	// (0x0003e45f) popup_clock_digital_analogue_window_cp2_t1

0xd2f3,	// (0x0003e46d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5e,	// (0x00040ed8) popup_clock_digital_analogue_window_cp2_t

0xb777,	// (0x0003c8f1) clock_digital_number_pane_cp10_g1

0xb777,	// (0x0003c8f1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3a,	// (0x00040cb4) clock_digital_number_pane_cp10_g

0xb777,	// (0x0003c8f1) clock_digital_separator_pane_cp10_g1

0xb777,	// (0x0003c8f1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3a,	// (0x00040cb4) clock_digital_separator_pane_cp10_g

0xd120,	// (0x0003e29a) uniindi_top_pane_g3

0xd131,	// (0x0003e2ab) uniindi_top_pane_g4

0x7e9d,	// (0x00039017) vkb2_row_keypad_pane_ParamLimits

0x7e9d,	// (0x00039017) vkb2_row_keypad_pane

0x80df,	// (0x00039259) vkb2_cell_t_keypad_pane_ParamLimits

0x80df,	// (0x00039259) vkb2_cell_t_keypad_pane

0x80ef,	// (0x00039269) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x80ef,	// (0x00039269) vkb2_cell_t_keypad_pane_cp08

0x8104,	// (0x0003927e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8104,	// (0x0003927e) vkb2_cell_t_keypad_pane_cp09

0x8118,	// (0x00039292) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8118,	// (0x00039292) vkb2_cell_t_keypad_pane_cp01

0x8129,	// (0x000392a3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8129,	// (0x000392a3) vkb2_cell_t_keypad_pane_cp02

0x813a,	// (0x000392b4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x813a,	// (0x000392b4) vkb2_cell_t_keypad_pane_cp03

0x814b,	// (0x000392c5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x814b,	// (0x000392c5) vkb2_cell_t_keypad_pane_cp04

0x815c,	// (0x000392d6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x815c,	// (0x000392d6) vkb2_cell_t_keypad_pane_cp05

0x816d,	// (0x000392e7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x816d,	// (0x000392e7) vkb2_cell_t_keypad_pane_cp06

0x8180,	// (0x000392fa) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8180,	// (0x000392fa) vkb2_cell_t_keypad_pane_cp07

0x8195,	// (0x0003930f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8195,	// (0x0003930f) vkb2_cell_t_keypad_pane_cp10

0x77d1,	// (0x0003894b) vkb2_cell_t_keypad_pane_g1

0xd704,	// (0x0003e87e) vkb2_cell_t_keypad_pane_t1

0x553c,	// (0x000366b6) popup_grid_graphic2_window

0xd716,	// (0x0003e890) aid_size_cell_graphic2_ParamLimits

0xd716,	// (0x0003e890) aid_size_cell_graphic2

0xd74e,	// (0x0003e8c8) bg_popup_window_pane_cp21_ParamLimits

0xd74e,	// (0x0003e8c8) bg_popup_window_pane_cp21

0xd75c,	// (0x0003e8d6) graphic2_pages_pane_ParamLimits

0xd75c,	// (0x0003e8d6) graphic2_pages_pane

0xd7a2,	// (0x0003e91c) grid_graphic2_control_pane_ParamLimits

0xd7a2,	// (0x0003e91c) grid_graphic2_control_pane

0xd7e0,	// (0x0003e95a) grid_graphic2_pane_ParamLimits

0xd7e0,	// (0x0003e95a) grid_graphic2_pane

0xd856,	// (0x0003e9d0) cell_graphic2_pane

0xe555,	// (0x0003f6cf) main_comp_mode_pane

0xc991,	// (0x0003db0b) list_ai3_gene_pane_ParamLimits

0xcd59,	// (0x0003ded3) bg_popup_window_pane_cp19_ParamLimits

0xcd65,	// (0x0003dedf) bg_touch_area_indi_pane_ParamLimits

0xcd65,	// (0x0003dedf) bg_touch_area_indi_pane

0xcd7b,	// (0x0003def5) bg_touch_area_indi_pane_cp01_ParamLimits

0xcd7b,	// (0x0003def5) bg_touch_area_indi_pane_cp01

0xcd93,	// (0x0003df0d) bg_touch_area_indi_pane_cp02_ParamLimits

0xcd93,	// (0x0003df0d) bg_touch_area_indi_pane_cp02

0xcdad,	// (0x0003df27) bg_touch_area_indi_pane_cp03_ParamLimits

0xcdad,	// (0x0003df27) bg_touch_area_indi_pane_cp03

0xcdc7,	// (0x0003df41) popup_slider_window_g1_ParamLimits

0xcde3,	// (0x0003df5d) popup_slider_window_g2_ParamLimits

0xcdff,	// (0x0003df79) popup_slider_window_g3_ParamLimits

0xfce8,	// (0x00040e62) popup_slider_window_g_ParamLimits

0xce5b,	// (0x0003dfd5) popup_slider_window_t1_ParamLimits

0xcecf,	// (0x0003e049) small_volume_slider_vertical_pane_ParamLimits

0xd856,	// (0x0003e9d0) cell_graphic2_pane_ParamLimits

0xd8a8,	// (0x0003ea22) bg_button_pane_cp10_ParamLimits

0xd8a8,	// (0x0003ea22) bg_button_pane_cp10

0xd8bd,	// (0x0003ea37) bg_button_pane_cp11_ParamLimits

0xd8bd,	// (0x0003ea37) bg_button_pane_cp11

0xd8d2,	// (0x0003ea4c) graphic2_pages_pane_g1_ParamLimits

0xd8d2,	// (0x0003ea4c) graphic2_pages_pane_g1

0xd8ed,	// (0x0003ea67) graphic2_pages_pane_g2_ParamLimits

0xd8ed,	// (0x0003ea67) graphic2_pages_pane_g2

0x0001,

0xfdac,	// (0x00040f26) graphic2_pages_pane_g_ParamLimits

0xfdac,	// (0x00040f26) graphic2_pages_pane_g

0xd905,	// (0x0003ea7f) graphic2_pages_pane_t1_ParamLimits

0xd905,	// (0x0003ea7f) graphic2_pages_pane_t1

0xd91b,	// (0x0003ea95) cell_graphic2_control_pane_ParamLimits

0xd91b,	// (0x0003ea95) cell_graphic2_control_pane

0xd93e,	// (0x0003eab8) cell_graphic2_pane_g1_ParamLimits

0xd93e,	// (0x0003eab8) cell_graphic2_pane_g1

0xd94b,	// (0x0003eac5) cell_graphic2_pane_g2_ParamLimits

0xd94b,	// (0x0003eac5) cell_graphic2_pane_g2

0xd958,	// (0x0003ead2) cell_graphic2_pane_g3_ParamLimits

0xd958,	// (0x0003ead2) cell_graphic2_pane_g3

0xd965,	// (0x0003eadf) cell_graphic2_pane_g4_ParamLimits

0xd965,	// (0x0003eadf) cell_graphic2_pane_g4

0xd972,	// (0x0003eaec) cell_graphic2_pane_g5_ParamLimits

0xd972,	// (0x0003eaec) cell_graphic2_pane_g5

0x0004,

0xfdb1,	// (0x00040f2b) cell_graphic2_pane_g_ParamLimits

0xfdb1,	// (0x00040f2b) cell_graphic2_pane_g

0xd98d,	// (0x0003eb07) cell_graphic2_pane_t1_ParamLimits

0xd98d,	// (0x0003eb07) cell_graphic2_pane_t1

0x91a7,	// (0x0003a321) grid_highlight_pane_cp11_ParamLimits

0x91a7,	// (0x0003a321) grid_highlight_pane_cp11

0xf0c5,	// (0x0004023f) bg_button_pane_cp05

0xd9b6,	// (0x0003eb30) cell_graphic2_control_pane_g1

0xb777,	// (0x0003c8f1) bg_touch_area_indi_pane_g1

0xd9de,	// (0x0003eb58) aid_cmod_rocker_key_size

0xd9e8,	// (0x0003eb62) aid_cmode_itu_key_size

0xd9f2,	// (0x0003eb6c) main_cmode_video_pane

0xd9fc,	// (0x0003eb76) main_comp_mode_itu_pane

0xda08,	// (0x0003eb82) main_comp_mode_rocker_pane

0xda14,	// (0x0003eb8e) cell_cmode_rocker_pane_ParamLimits

0xda14,	// (0x0003eb8e) cell_cmode_rocker_pane

0xda28,	// (0x0003eba2) cell_cmode_itu_pane_ParamLimits

0xda28,	// (0x0003eba2) cell_cmode_itu_pane

0x1ead,	// (0x00033027) bg_button_pane_cp06_ParamLimits

0x1ead,	// (0x00033027) bg_button_pane_cp06

0xb9f2,	// (0x0003cb6c) cell_cmode_rocker_pane_g1_ParamLimits

0xb9f2,	// (0x0003cb6c) cell_cmode_rocker_pane_g1

0xcf76,	// (0x0003e0f0) cell_cmode_rocker_pane_g2_ParamLimits

0xcf76,	// (0x0003e0f0) cell_cmode_rocker_pane_g2

0x0001,

0xfdc1,	// (0x00040f3b) cell_cmode_rocker_pane_g_ParamLimits

0xfdc1,	// (0x00040f3b) cell_cmode_rocker_pane_g

0xe555,	// (0x0003f6cf) bg_button_pane_cp07

0xda3f,	// (0x0003ebb9) cell_cmode_itu_pane_g1

0xda48,	// (0x0003ebc2) cell_cmode_itu_pane_t1

0xda56,	// (0x0003ebd0) cell_cmode_itu_pane_t2

0x0001,

0xfdc6,	// (0x00040f40) cell_cmode_itu_pane_t

0xd1a4,	// (0x0003e31e) aid_touch_ctrl_left

0xd1ac,	// (0x0003e326) aid_touch_ctrl_right

0xe555,	// (0x0003f6cf) compa_mode_pane

0xda64,	// (0x0003ebde) aid_cmod_rocker_key_size_cp

0xda6e,	// (0x0003ebe8) aid_cmode_itu_key_size_cp

0xda78,	// (0x0003ebf2) compa_mode_pane_g1

0xda80,	// (0x0003ebfa) compa_mode_pane_g2

0xda88,	// (0x0003ec02) compa_mode_pane_g3

0x0002,

0xfdcb,	// (0x00040f45) compa_mode_pane_g

0xda90,	// (0x0003ec0a) main_comp_mode_itu_pane_cp

0xda98,	// (0x0003ec12) main_comp_mode_rocker_pane_cp

0xdaa0,	// (0x0003ec1a) cell_cmode_itu_pane_cp_ParamLimits

0xdaa0,	// (0x0003ec1a) cell_cmode_itu_pane_cp

0xdab5,	// (0x0003ec2f) cell_cmode_rocker_pane_cp_ParamLimits

0xdab5,	// (0x0003ec2f) cell_cmode_rocker_pane_cp

0x1ead,	// (0x00033027) bg_button_pane_cp06_cp_ParamLimits

0x1ead,	// (0x00033027) bg_button_pane_cp06_cp

0xb9f2,	// (0x0003cb6c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb9f2,	// (0x0003cb6c) cell_cmode_rocker_pane_g1_cp

0xb777,	// (0x0003c8f1) cell_cmode_rocker_pane_g2_cp

0xe555,	// (0x0003f6cf) bg_button_pane_cp07_cp

0xdac7,	// (0x0003ec41) cell_cmode_itu_pane_g1_cp

0xdad0,	// (0x0003ec4a) cell_cmode_itu_pane_t1_cp

0xdad0,	// (0x0003ec4a) cell_cmode_itu_pane_t2_cp

0xa670,	// (0x0003b7ea) settings_code_pane_cp2

0xef84,	// (0x000400fe) bg_popup_window_pane_cp3_ParamLimits

0xf2b3,	// (0x0004042d) heading_pane_cp3_ParamLimits

0xf2bf,	// (0x00040439) listscroll_popup_graphic_pane_ParamLimits

0x7564,	// (0x000386de) fep_hwr_aid_pane_ParamLimits

0x7b55,	// (0x00038ccf) aid_touch_sctrl_top_ParamLimits

0x7b70,	// (0x00038cea) sctrl_sk_top_pane_g1_ParamLimits

0x77d1,	// (0x0003894b) sctrl_sk_top_pane_g2_ParamLimits

0xfd01,	// (0x00040e7b) sctrl_sk_top_pane_g_ParamLimits

0x7b7d,	// (0x00038cf7) sctrl_sk_top_pane_t1_ParamLimits

0x7b55,	// (0x00038ccf) aid_touch_sctrl_bottom_ParamLimits

0x7b7d,	// (0x00038cf7) sctrl_sk_bottom_pane_t1_ParamLimits

0xd0ea,	// (0x0003e264) aid_area_touch_clock

0x7d74,	// (0x00038eee) aid_vkb2_area_top_pane_cell_ParamLimits

0x7d74,	// (0x00038eee) aid_vkb2_area_top_pane_cell

0x7ebf,	// (0x00039039) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7ebf,	// (0x00039039) aid_vkb2_area_bottom_pane_cell

0xd64f,	// (0x0003e7c9) popup_char_count_window

0xdade,	// (0x0003ec58) popup_char_count_window_g1

0xdae7,	// (0x0003ec61) popup_char_count_window_g2

0xdaf0,	// (0x0003ec6a) popup_char_count_window_g3

0x0002,

0xfdd2,	// (0x00040f4c) popup_char_count_window_g

0xdaf9,	// (0x0003ec73) popup_char_count_window_t1

0x7c2e,	// (0x00038da8) popup_fep_char_preview_window_ParamLimits

0x7c2e,	// (0x00038da8) popup_fep_char_preview_window

0x7d92,	// (0x00038f0c) vkb2_top_candi_pane_ParamLimits

0x7d92,	// (0x00038f0c) vkb2_top_candi_pane

0xdb07,	// (0x0003ec81) cell_vkb2_top_candi_pane_ParamLimits

0xdb07,	// (0x0003ec81) cell_vkb2_top_candi_pane

0x81aa,	// (0x00039324) bg_popup_fep_char_preview_window_ParamLimits

0x81aa,	// (0x00039324) bg_popup_fep_char_preview_window

0x81b8,	// (0x00039332) popup_fep_char_preview_window_t1_ParamLimits

0x81b8,	// (0x00039332) popup_fep_char_preview_window_t1

0xdb58,	// (0x0003ecd2) bg_popup_fep_char_preview_window_g1

0xdb60,	// (0x0003ecda) bg_popup_fep_char_preview_window_g2

0xdb68,	// (0x0003ece2) bg_popup_fep_char_preview_window_g3

0xdb70,	// (0x0003ecea) bg_popup_fep_char_preview_window_g4

0xdb78,	// (0x0003ecf2) bg_popup_fep_char_preview_window_g5

0x81f2,	// (0x0003936c) bg_popup_fep_char_preview_window_g6

0xdb80,	// (0x0003ecfa) bg_popup_fep_char_preview_window_g7

0xdb88,	// (0x0003ed02) bg_popup_fep_char_preview_window_g8

0xdb90,	// (0x0003ed0a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd9,	// (0x00040f53) bg_popup_fep_char_preview_window_g

0x77d1,	// (0x0003894b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x77d1,	// (0x0003894b) cell_vkb2_top_candi_pane_g1

0x77df,	// (0x00038959) cell_vkb2_top_candi_pane_g2_ParamLimits

0x77df,	// (0x00038959) cell_vkb2_top_candi_pane_g2

0xc5eb,	// (0x0003d765) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5eb,	// (0x0003d765) cell_vkb2_top_candi_pane_g3

0x81fa,	// (0x00039374) cell_vkb2_top_candi_pane_g4_ParamLimits

0x81fa,	// (0x00039374) cell_vkb2_top_candi_pane_g4

0xbf11,	// (0x0003d08b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbf11,	// (0x0003d08b) cell_vkb2_top_candi_pane_g5

0x821b,	// (0x00039395) cell_vkb2_top_candi_pane_g6_ParamLimits

0x821b,	// (0x00039395) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdec,	// (0x00040f66) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdec,	// (0x00040f66) cell_vkb2_top_candi_pane_g

0x8229,	// (0x000393a3) cell_vkb2_top_candi_pane_t1

0x733b,	// (0x000384b5) aid_size_touch_slider_mark_ParamLimits

0x733b,	// (0x000384b5) aid_size_touch_slider_mark

0xd792,	// (0x0003e90c) grid_graphic2_catg_pane_ParamLimits

0xd792,	// (0x0003e90c) grid_graphic2_catg_pane

0xd830,	// (0x0003e9aa) popup_grid_graphic2_window_t1_ParamLimits

0xd830,	// (0x0003e9aa) popup_grid_graphic2_window_t1

0xd842,	// (0x0003e9bc) popup_grid_graphic2_window_t2_ParamLimits

0xd842,	// (0x0003e9bc) popup_grid_graphic2_window_t2

0x0001,

0xfda7,	// (0x00040f21) popup_grid_graphic2_window_t_ParamLimits

0xfda7,	// (0x00040f21) popup_grid_graphic2_window_t

0xf0c5,	// (0x0004023f) bg_button_pane_cp05_ParamLimits

0xd9b6,	// (0x0003eb30) cell_graphic2_control_pane_g1_ParamLimits

0xdb98,	// (0x0003ed12) cell_graphic2_catg_pane_ParamLimits

0xdb98,	// (0x0003ed12) cell_graphic2_catg_pane

0xe555,	// (0x0003f6cf) bg_button_pane_cp12

0xdbaa,	// (0x0003ed24) cell_graphic2_catg_pane_g1

0xd0b6,	// (0x0003e230) cell_tb_ext_pane_t1_ParamLimits

0x7fdc,	// (0x00039156) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7fdc,	// (0x00039156) vkb2_top_cell_right_narrow_pane

0x7ff4,	// (0x0003916e) vkb2_top_cell_right_wide_pane_ParamLimits

0x7ff4,	// (0x0003916e) vkb2_top_cell_right_wide_pane

0x7556,	// (0x000386d0) bg_vkb2_func_pane_ParamLimits

0x7556,	// (0x000386d0) bg_vkb2_func_pane

0x8065,	// (0x000391df) vkb2_top_cell_left_pane_g1_ParamLimits

0x7556,	// (0x000386d0) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7556,	// (0x000386d0) bg_vkb2_fuc_pane_cp03

0x80c3,	// (0x0003923d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x913b,	// (0x0003a2b5) bg_vkb2_func_pane_g1

0x9143,	// (0x0003a2bd) bg_vkb2_func_pane_g2

0x9153,	// (0x0003a2cd) bg_vkb2_func_pane_g3

0x914b,	// (0x0003a2c5) bg_vkb2_func_pane_g4

0x915b,	// (0x0003a2d5) bg_vkb2_func_pane_g5

0x9163,	// (0x0003a2dd) bg_vkb2_func_pane_g6

0x916b,	// (0x0003a2e5) bg_vkb2_func_pane_g7

0x9173,	// (0x0003a2ed) bg_vkb2_func_pane_g8

0x9133,	// (0x0003a2ad) bg_vkb2_func_pane_g9

0x0008,

0xfdf9,	// (0x00040f73) bg_vkb2_func_pane_g

0x7556,	// (0x000386d0) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7556,	// (0x000386d0) bg_vkb2_fuc_pane_cp01

0x8065,	// (0x000391df) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8065,	// (0x000391df) vkb2_top_cell_right_wide_pane_g1

0x7556,	// (0x000386d0) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7556,	// (0x000386d0) bg_vkb2_fuc_pane_cp02

0x80c3,	// (0x0003923d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x80c3,	// (0x0003923d) vkb2_top_cell_right_narrow_pane_g1

0xccd7,	// (0x0003de51) aid_touch_area_decrease_ParamLimits

0xccd7,	// (0x0003de51) aid_touch_area_decrease

0xccfb,	// (0x0003de75) aid_touch_area_increase_ParamLimits

0xccfb,	// (0x0003de75) aid_touch_area_increase

0xcd07,	// (0x0003de81) aid_touch_area_mute_ParamLimits

0xcd07,	// (0x0003de81) aid_touch_area_mute

0xcd2b,	// (0x0003dea5) aid_touch_area_slider_ParamLimits

0xcd2b,	// (0x0003dea5) aid_touch_area_slider

0xce1b,	// (0x0003df95) popup_slider_window_g4_ParamLimits

0xce1b,	// (0x0003df95) popup_slider_window_g4

0xce27,	// (0x0003dfa1) popup_slider_window_g5_ParamLimits

0xce27,	// (0x0003dfa1) popup_slider_window_g5

0xce49,	// (0x0003dfc3) popup_slider_window_g6_ParamLimits

0xce49,	// (0x0003dfc3) popup_slider_window_g6

0xce89,	// (0x0003e003) popup_slider_window_t2_ParamLimits

0xce89,	// (0x0003e003) popup_slider_window_t2

0x0001,

0xfcf5,	// (0x00040e6f) popup_slider_window_t_ParamLimits

0xfcf5,	// (0x00040e6f) popup_slider_window_t

0xcea1,	// (0x0003e01b) slider_pane_ParamLimits

0xcea1,	// (0x0003e01b) slider_pane

0xdbb3,	// (0x0003ed2d) slider_pane_g1_ParamLimits

0xdbb3,	// (0x0003ed2d) slider_pane_g1

0xdbc7,	// (0x0003ed41) slider_pane_g2_ParamLimits

0xdbc7,	// (0x0003ed41) slider_pane_g2

0xdbdd,	// (0x0003ed57) slider_pane_g3_ParamLimits

0xdbdd,	// (0x0003ed57) slider_pane_g3

0x0003,

0xfe0c,	// (0x00040f86) slider_pane_g_ParamLimits

0xfe0c,	// (0x00040f86) slider_pane_g

0x8b2c,	// (0x00039ca6) popup_tb_float_extension_window_ParamLimits

0x8b2c,	// (0x00039ca6) popup_tb_float_extension_window

0xdc09,	// (0x0003ed83) aid_size_cell_tb_float_ext

0xe555,	// (0x0003f6cf) bg_popup_sub_window_cp28

0xdc15,	// (0x0003ed8f) grid_tb_float_ext_pane

0xdc21,	// (0x0003ed9b) cell_tb_float_ext_pane_ParamLimits

0xdc21,	// (0x0003ed9b) cell_tb_float_ext_pane

0xdc3d,	// (0x0003edb7) cell_tb_float_ext_pane_g1

0xdc46,	// (0x0003edc0) grid_highlight_pane_cp12

0x76ab,	// (0x00038825) cell_last_hwr_side_pane_ParamLimits

0x76ab,	// (0x00038825) cell_last_hwr_side_pane

0xb777,	// (0x0003c8f1) cell_last_hwr_side_pane_g1

0xdc4f,	// (0x0003edc9) cell_last_hwr_side_pane_g2

0x0001,

0xfe15,	// (0x00040f8f) cell_last_hwr_side_pane_g

0x7f8b,	// (0x00039105) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7f8b,	// (0x00039105) vkb2_area_bottom_space_btn_pane

0x77d1,	// (0x0003894b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd704,	// (0x0003e87e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8229,	// (0x000393a3) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8247,	// (0x000393c1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8247,	// (0x000393c1) vkb2_area_bottom_space_btn_pane_g1

0x8281,	// (0x000393fb) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8281,	// (0x000393fb) vkb2_area_bottom_space_btn_pane_g2

0x82b7,	// (0x00039431) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x82b7,	// (0x00039431) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1a,	// (0x00040f94) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1a,	// (0x00040f94) vkb2_area_bottom_space_btn_pane_g

0x761b,	// (0x00038795) cel_fep_hwr_func_pane_ParamLimits

0x761b,	// (0x00038795) cel_fep_hwr_func_pane

0x7657,	// (0x000387d1) cell_hwr_side_button_pane_ParamLimits

0x7657,	// (0x000387d1) cell_hwr_side_button_pane

0xd0ea,	// (0x0003e264) aid_area_touch_clock_ParamLimits

0xf0c5,	// (0x0004023f) bg_uniindi_top_pane_ParamLimits

0xd0fe,	// (0x0003e278) uniindi_top_pane_g1_ParamLimits

0xd114,	// (0x0003e28e) uniindi_top_pane_g2_ParamLimits

0xd120,	// (0x0003e29a) uniindi_top_pane_g3_ParamLimits

0xd131,	// (0x0003e2ab) uniindi_top_pane_g4_ParamLimits

0xfd2d,	// (0x00040ea7) uniindi_top_pane_g_ParamLimits

0xd13e,	// (0x0003e2b8) uniindi_top_pane_t1_ParamLimits

0xf0c5,	// (0x0004023f) bg_vkb2_func_pane_cp01_ParamLimits

0xf0c5,	// (0x0004023f) bg_vkb2_func_pane_cp01

0xdc58,	// (0x0003edd2) cel_fep_hwr_func_pane_g1_ParamLimits

0xdc58,	// (0x0003edd2) cel_fep_hwr_func_pane_g1

0xf0c5,	// (0x0004023f) bg_vkb2_func_pane_cp02_ParamLimits

0xf0c5,	// (0x0004023f) bg_vkb2_func_pane_cp02

0xdc58,	// (0x0003edd2) cell_hwr_side_button_pane_g1_ParamLimits

0xdc58,	// (0x0003edd2) cell_hwr_side_button_pane_g1

0x8fb4,	// (0x0003a12e) status_pane_g4_ParamLimits

0x8fb4,	// (0x0003a12e) status_pane_g4

0x8fce,	// (0x0003a148) status_pane_t1

0xb516,	// (0x0003c690) form2_midp_gauge_slider_cont_pane

0xb51e,	// (0x0003c698) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb530,	// (0x0003c6aa) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb542,	// (0x0003c6bc) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaed,	// (0x00040c67) form2_midp_gauge_slider_pane_t_ParamLimits

0xb554,	// (0x0003c6ce) form2_midp_slider_pane_ParamLimits

0x7bee,	// (0x00038d68) aid_size_cell_func_vkb2_ParamLimits

0x7bee,	// (0x00038d68) aid_size_cell_func_vkb2

0xdbf5,	// (0x0003ed6f) slider_pane_g4_ParamLimits

0xdbf5,	// (0x0003ed6f) slider_pane_g4

0x8301,	// (0x0003947b) form2_midp_gauge_slider_pane_t2_cp01

0x830f,	// (0x00039489) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x830f,	// (0x00039489) form2_midp_gauge_slider_pane_t3_cp01

0x832c,	// (0x000394a6) form2_midp_slider_pane_cp01

0xe555,	// (0x0003f6cf) navi_smil_pane

0xdc91,	// (0x0003ee0b) navi_smil_pane_g1

0xdc99,	// (0x0003ee13) navi_smil_pane_t1

0xdc66,	// (0x0003ede0) form2_midp_slider_pane_g1

0xdc6f,	// (0x0003ede9) form2_midp_slider_pane_g2

0xdc77,	// (0x0003edf1) form2_midp_slider_pane_g3

0xdc66,	// (0x0003ede0) form2_midp_slider_pane_g4

0xdc7f,	// (0x0003edf9) form2_midp_slider_pane_g5

0x0004,

0xfe23,	// (0x00040f9d) form2_midp_slider_pane_g

0x82f1,	// (0x0003946b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x82f1,	// (0x0003946b) vkb2_area_bottom_space_btn_pane_g4

0x8dcb,	// (0x00039f45) lc0_navi_pane_ParamLimits

0x8dcb,	// (0x00039f45) lc0_navi_pane

0x8e47,	// (0x00039fc1) lc0_stat_indi_pane_ParamLimits

0x8e47,	// (0x00039fc1) lc0_stat_indi_pane

0x8e5e,	// (0x00039fd8) ls0_title_pane_ParamLimits

0x8e5e,	// (0x00039fd8) ls0_title_pane

0x1ead,	// (0x00033027) bg_popup_sub_pane_cp14_ParamLimits

0xd0d1,	// (0x0003e24b) list_uniindi_pane_ParamLimits

0xd0dd,	// (0x0003e257) uniindi_top_pane_ParamLimits

0xd17c,	// (0x0003e2f6) list_single_uniindi_pane_g1_ParamLimits

0xd18f,	// (0x0003e309) list_single_uniindi_pane_t1_ParamLimits

0x8335,	// (0x000394af) lc0_stat_clock_pane_ParamLimits

0x8335,	// (0x000394af) lc0_stat_clock_pane

0xdca7,	// (0x0003ee21) lc0_stat_indi_pane_g1_ParamLimits

0xdca7,	// (0x0003ee21) lc0_stat_indi_pane_g1

0xdcb4,	// (0x0003ee2e) lc0_stat_indi_pane_g2_ParamLimits

0xdcb4,	// (0x0003ee2e) lc0_stat_indi_pane_g2

0x0001,

0xfe2e,	// (0x00040fa8) lc0_stat_indi_pane_g_ParamLimits

0xfe2e,	// (0x00040fa8) lc0_stat_indi_pane_g

0x8342,	// (0x000394bc) lc0_uni_indicator_pane_ParamLimits

0x8342,	// (0x000394bc) lc0_uni_indicator_pane

0xdcc1,	// (0x0003ee3b) ls0_title_pane_g1_ParamLimits

0xdcc1,	// (0x0003ee3b) ls0_title_pane_g1

0xdcd5,	// (0x0003ee4f) ls0_title_pane_t1_ParamLimits

0xdcd5,	// (0x0003ee4f) ls0_title_pane_t1

0x834f,	// (0x000394c9) lc0_uni_indicator_pane_g1_ParamLimits

0x834f,	// (0x000394c9) lc0_uni_indicator_pane_g1

0xdd0b,	// (0x0003ee85) lc0_stat_clock_pane_t1

0xe555,	// (0x0003f6cf) main_ai5_pane

0xdd19,	// (0x0003ee93) ai5_sk_pane_ParamLimits

0xdd19,	// (0x0003ee93) ai5_sk_pane

0xdd26,	// (0x0003eea0) cell_ai5_widget_pane_ParamLimits

0xdd26,	// (0x0003eea0) cell_ai5_widget_pane

0xe2c2,	// (0x0003f43c) aid_size_cell_widget_grid

0xe2d0,	// (0x0003f44a) bg_ai5_widget_pane_ParamLimits

0xe2d0,	// (0x0003f44a) bg_ai5_widget_pane

0xe344,	// (0x0003f4be) cell_ai5_widget_pane_g2

0xe354,	// (0x0003f4ce) cell_ai5_widget_pane_g3

0xe36b,	// (0x0003f4e5) cell_ai5_widget_pane_g4

0xe377,	// (0x0003f4f1) cell_ai5_widget_pane_g5

0xe383,	// (0x0003f4fd) cell_ai5_widget_pane_g6

0xe38f,	// (0x0003f509) cell_ai5_widget_pane_g7

0xe3d7,	// (0x0003f551) cell_ai5_widget_pane_t1_ParamLimits

0xe3d7,	// (0x0003f551) cell_ai5_widget_pane_t1

0xe3f4,	// (0x0003f56e) cell_ai5_widget_pane_t2_ParamLimits

0xe3f4,	// (0x0003f56e) cell_ai5_widget_pane_t2

0xe40c,	// (0x0003f586) cell_ai5_widget_pane_t3_ParamLimits

0xe40c,	// (0x0003f586) cell_ai5_widget_pane_t3

0xe424,	// (0x0003f59e) cell_ai5_widget_pane_t4_ParamLimits

0xe424,	// (0x0003f59e) cell_ai5_widget_pane_t4

0xe441,	// (0x0003f5bb) cell_ai5_widget_pane_t5_ParamLimits

0xe441,	// (0x0003f5bb) cell_ai5_widget_pane_t5

0xe460,	// (0x0003f5da) cell_ai5_widget_pane_t6_ParamLimits

0xe460,	// (0x0003f5da) cell_ai5_widget_pane_t6

0xe472,	// (0x0003f5ec) cell_ai5_widget_pane_t7_ParamLimits

0xe472,	// (0x0003f5ec) cell_ai5_widget_pane_t7

0xe48b,	// (0x0003f605) cell_ai5_widget_pane_t8_ParamLimits

0xe48b,	// (0x0003f605) cell_ai5_widget_pane_t8

0x0009,

0xfe48,	// (0x00040fc2) cell_ai5_widget_pane_t_ParamLimits

0xfe48,	// (0x00040fc2) cell_ai5_widget_pane_t

0xe4df,	// (0x0003f659) grid_ai5_widget_pane

0x1ead,	// (0x00033027) highlight_cell_ai5_widget_pane_ParamLimits

0x1ead,	// (0x00033027) highlight_cell_ai5_widget_pane

0xe4f3,	// (0x0003f66d) ai5_sk_left_pane

0xe4fd,	// (0x0003f677) ai5_sk_middle_pane

0xe507,	// (0x0003f681) ai5_sk_right_pane

0xe511,	// (0x0003f68b) bg_ai5_widget_pane_g1_ParamLimits

0xe511,	// (0x0003f68b) bg_ai5_widget_pane_g1

0xe51d,	// (0x0003f697) bg_ai5_widget_pane_g2_ParamLimits

0xe51d,	// (0x0003f697) bg_ai5_widget_pane_g2

0xe529,	// (0x0003f6a3) bg_ai5_widget_pane_g3_ParamLimits

0xe529,	// (0x0003f6a3) bg_ai5_widget_pane_g3

0xe535,	// (0x0003f6af) bg_ai5_widget_pane_g4_ParamLimits

0xe535,	// (0x0003f6af) bg_ai5_widget_pane_g4

0xe541,	// (0x0003f6bb) bg_ai5_widget_pane_g5_ParamLimits

0xe541,	// (0x0003f6bb) bg_ai5_widget_pane_g5

0xe58b,	// (0x0003f705) bg_ai5_widget_pane_g6_ParamLimits

0xe58b,	// (0x0003f705) bg_ai5_widget_pane_g6

0xe597,	// (0x0003f711) bg_ai5_widget_pane_g7_ParamLimits

0xe597,	// (0x0003f711) bg_ai5_widget_pane_g7

0xe5a3,	// (0x0003f71d) bg_ai5_widget_pane_g8_ParamLimits

0xe5a3,	// (0x0003f71d) bg_ai5_widget_pane_g8

0xe5af,	// (0x0003f729) bg_ai5_widget_pane_g9_ParamLimits

0xe5af,	// (0x0003f729) bg_ai5_widget_pane_g9

0x0008,

0xfe5d,	// (0x00040fd7) bg_ai5_widget_pane_g_ParamLimits

0xfe5d,	// (0x00040fd7) bg_ai5_widget_pane_g

0xe5e5,	// (0x0003f75f) cell_shortcut_ai5_widget_pane_ParamLimits

0xe5e5,	// (0x0003f75f) cell_shortcut_ai5_widget_pane

0x6938,	// (0x00037ab2) bg_cell_shortcut_ai5_widget_pane

0xe5f8,	// (0x0003f772) cell_grid_ai5_widget_pane_g1

0x6938,	// (0x00037ab2) highlight_cell_shortcut_ai5_widget_pane

0x913b,	// (0x0003a2b5) ai5_sk_left_pane_g1

0xe601,	// (0x0003f77b) ai5_sk_left_pane_g2

0xe609,	// (0x0003f783) ai5_sk_left_pane_g3

0xe611,	// (0x0003f78b) ai5_sk_left_pane_g4

0x0003,

0xfe70,	// (0x00040fea) ai5_sk_left_pane_g

0xe619,	// (0x0003f793) ai5_sk_left_pane_t1

0x9143,	// (0x0003a2bd) ai5_sk_right_pane_g1

0xe627,	// (0x0003f7a1) ai5_sk_right_pane_g2

0xe62f,	// (0x0003f7a9) ai5_sk_right_pane_g3

0xe637,	// (0x0003f7b1) ai5_sk_right_pane_g4

0x0003,

0xfe79,	// (0x00040ff3) ai5_sk_right_pane_g

0xe63f,	// (0x0003f7b9) ai5_sk_right_pane_t1

0x9143,	// (0x0003a2bd) ai5_sk_middle_pane_g1

0x913b,	// (0x0003a2b5) ai5_sk_middle_pane_g2

0x915b,	// (0x0003a2d5) ai5_sk_middle_pane_g3

0xe62f,	// (0x0003f7a9) ai5_sk_middle_pane_g4

0xe609,	// (0x0003f783) ai5_sk_middle_pane_g5

0xe64d,	// (0x0003f7c7) ai5_sk_middle_pane_g6

0xe655,	// (0x0003f7cf) ai5_sk_middle_pane_g7

0x0006,

0xfe82,	// (0x00040ffc) ai5_sk_middle_pane_g

0x8c4d,	// (0x00039dc7) aid_touch_area_size_lc0_ParamLimits

0x8c4d,	// (0x00039dc7) aid_touch_area_size_lc0

0x7800,	// (0x0003897a) cell_hwr_candidate_pane_t1_ParamLimits

0x8c6b,	// (0x00039de5) aid_touch_navi_pane

0x8f5e,	// (0x0003a0d8) status_dt_navi_pane_ParamLimits

0x8f5e,	// (0x0003a0d8) status_dt_navi_pane

0x8f6b,	// (0x0003a0e5) status_dt_sta_pane_ParamLimits

0x8f6b,	// (0x0003a0e5) status_dt_sta_pane

0xe65d,	// (0x0003f7d7) dt_sta_controll_pane

0xe66a,	// (0x0003f7e4) dt_sta_indi_pane

0xe67b,	// (0x0003f7f5) dt_sta_title_pane

0xf0c5,	// (0x0004023f) bg_dt_sta_indi_pane_ParamLimits

0xf0c5,	// (0x0004023f) bg_dt_sta_indi_pane

0xe68e,	// (0x0003f808) dt_sta_battery_pane

0xe696,	// (0x0003f810) dt_sta_indi_pane_g1

0xe69f,	// (0x0003f819) dt_sta_indi_pane_g2

0xe6a8,	// (0x0003f822) dt_sta_indi_pane_g3

0x0002,

0xfe91,	// (0x0004100b) dt_sta_indi_pane_g

0xe6b1,	// (0x0003f82b) dt_sta_signal_pane

0x1ead,	// (0x00033027) bg_dt_sta_title_pane_ParamLimits

0x1ead,	// (0x00033027) bg_dt_sta_title_pane

0xe6ba,	// (0x0003f834) dt_sta_title_pane_g1

0xe6c2,	// (0x0003f83c) dt_sta_title_pane_t1_ParamLimits

0xe6c2,	// (0x0003f83c) dt_sta_title_pane_t1

0xe555,	// (0x0003f6cf) bg_dt_sta_control_pane

0xe6d7,	// (0x0003f851) dt_sta_controll_pane_g1

0xe6e0,	// (0x0003f85a) bg_dt_sta_title_pane_g1

0xe6e9,	// (0x0003f863) bg_dt_sta_title_pane_g2

0xe6f2,	// (0x0003f86c) bg_dt_sta_title_pane_g3

0x0002,

0xfe98,	// (0x00041012) bg_dt_sta_title_pane_g

0xb777,	// (0x0003c8f1) bg_dt_sta_indi_pane_g1

0xe6fb,	// (0x0003f875) dt_sta_signal_pane_g1

0xe703,	// (0x0003f87d) dt_sta_signal_pane_g2

0x0001,

0xfe9f,	// (0x00041019) dt_sta_signal_pane_g

0xe70b,	// (0x0003f885) dt_sta_battery_pane_g1

0xe714,	// (0x0003f88e) dt_sta_battery_pane_t1

0xb777,	// (0x0003c8f1) bg_dt_sta_control_pane_g1

0x2411,	// (0x0003358b) fep_china_uni_eep_pane

0x2419,	// (0x00033593) fep_china_uni_entry_pane_ParamLimits

0x2429,	// (0x000335a3) popup_fep_china_uni_window_g1_ParamLimits

0x2439,	// (0x000335b3) popup_fep_china_uni_window_g2_ParamLimits

0x2439,	// (0x000335b3) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00040892) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00040892) popup_fep_china_uni_window_g

0xe723,	// (0x0003f89d) fep_china_uni_eep_pane_g1

0xe72b,	// (0x0003f8a5) fep_china_uni_eep_pane_t1

0xdc88,	// (0x0003ee02) aid_touch_area_size_smil_player

0x8dc3,	// (0x00039f3d) lc0_clock_pane

0x8fc2,	// (0x0003a13c) status_pane_g5_ParamLimits

0x8fc2,	// (0x0003a13c) status_pane_g5

0x87b1,	// (0x0003992b) popup_keymap_window

0x8f80,	// (0x0003a0fa) status_icon_pane

0xe354,	// (0x0003f4ce) cell_ai5_widget_pane_g3_ParamLimits

0xe36b,	// (0x0003f4e5) cell_ai5_widget_pane_g4_ParamLimits

0xe377,	// (0x0003f4f1) cell_ai5_widget_pane_g5_ParamLimits

0xe39b,	// (0x0003f515) cell_ai5_widget_pane_g8_ParamLimits

0xe39b,	// (0x0003f515) cell_ai5_widget_pane_g8

0xe3af,	// (0x0003f529) cell_ai5_widget_pane_g9_ParamLimits

0xe3af,	// (0x0003f529) cell_ai5_widget_pane_g9

0xe3c3,	// (0x0003f53d) cell_ai5_widget_pane_g10_ParamLimits

0xe3c3,	// (0x0003f53d) cell_ai5_widget_pane_g10

0xe73a,	// (0x0003f8b4) status_icon_pane_g1

0xe555,	// (0x0003f6cf) bg_popup_sub_pane_cp13

0xe742,	// (0x0003f8bc) popup_keymap_window_t1

0x6d1d,	// (0x00037e97) control_pane_g6_ParamLimits

0x6d1d,	// (0x00037e97) control_pane_g6

0x6d2a,	// (0x00037ea4) control_pane_g7_ParamLimits

0x6d2a,	// (0x00037ea4) control_pane_g7

0x6d37,	// (0x00037eb1) control_pane_g8_ParamLimits

0x6d37,	// (0x00037eb1) control_pane_g8

0xe65d,	// (0x0003f7d7) dt_sta_controll_pane_ParamLimits

0xe66a,	// (0x0003f7e4) dt_sta_indi_pane_ParamLimits

0xe67b,	// (0x0003f7f5) dt_sta_title_pane_ParamLimits

0xf4e9,	// (0x00040663) aid_size_touch_scroll_bar_cale

0x5619,	// (0x00036793) popup_discreet_window_ParamLimits

0x5619,	// (0x00036793) popup_discreet_window

0x56a7,	// (0x00036821) popup_sk_window

0x9783,	// (0x0003a8fd) bg_popup_sub_pane_cp28_ParamLimits

0x9783,	// (0x0003a8fd) bg_popup_sub_pane_cp28

0xe750,	// (0x0003f8ca) popup_discreet_window_g1_ParamLimits

0xe750,	// (0x0003f8ca) popup_discreet_window_g1

0xe770,	// (0x0003f8ea) popup_discreet_window_t1_ParamLimits

0xe770,	// (0x0003f8ea) popup_discreet_window_t1

0xe78e,	// (0x0003f908) popup_discreet_window_t2_ParamLimits

0xe78e,	// (0x0003f908) popup_discreet_window_t2

0x0002,

0xfea4,	// (0x0004101e) popup_discreet_window_t_ParamLimits

0xfea4,	// (0x0004101e) popup_discreet_window_t

0x8362,	// (0x000394dc) popup_sk_window_g1

0x836c,	// (0x000394e6) popup_sk_window_g2

0x0001,

0xfeab,	// (0x00041025) popup_sk_window_g

0x8376,	// (0x000394f0) popup_sk_window_t1

0x8386,	// (0x00039500) popup_sk_window_t1_copy1

0xe344,	// (0x0003f4be) cell_ai5_widget_pane_g2_ParamLimits

0xe49d,	// (0x0003f617) cell_ai5_widget_pane_t9_ParamLimits

0xe49d,	// (0x0003f617) cell_ai5_widget_pane_t9

0xe555,	// (0x0003f6cf) main_fep_fshwr2_pane

0x8394,	// (0x0003950e) aid_fshwr2_btn_pane

0x83a0,	// (0x0003951a) aid_fshwr2_syb_pane

0x83ac,	// (0x00039526) aid_fshwr2_txt_pane

0x83b8,	// (0x00039532) fshwr2_func_candi_pane

0x83cb,	// (0x00039545) fshwr2_hwr_syb_pane

0x83d9,	// (0x00039553) fshwr2_icf_pane

0x553c,	// (0x000366b6) fshwr2_icf_bg_pane

0x8408,	// (0x00039582) fshwr2_icf_pane_t1_ParamLimits

0x8408,	// (0x00039582) fshwr2_icf_pane_t1

0x238f,	// (0x00033509) fshwr2_func_candi_pane_g1

0xe7e0,	// (0x0003f95a) fshwr2_func_candi_row_pane_ParamLimits

0xe7e0,	// (0x0003f95a) fshwr2_func_candi_row_pane

0x8420,	// (0x0003959a) cell_fshwr2_syb_pane_ParamLimits

0x8420,	// (0x0003959a) cell_fshwr2_syb_pane

0x77d1,	// (0x0003894b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x77d1,	// (0x0003894b) fshwr2_hwr_syb_pane_g1

0x553c,	// (0x000366b6) bg_popup_call_pane_cp01

0x8436,	// (0x000395b0) fshwr2_func_candi_cell_pane_ParamLimits

0x8436,	// (0x000395b0) fshwr2_func_candi_cell_pane

0xe7f0,	// (0x0003f96a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe7f0,	// (0x0003f96a) fshwr2_func_candi_cell_bg_pane

0x846a,	// (0x000395e4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x846a,	// (0x000395e4) fshwr2_func_candi_cell_pane_g1

0x848a,	// (0x00039604) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x848a,	// (0x00039604) fshwr2_func_candi_cell_pane_t1

0x553c,	// (0x000366b6) bg_button_pane_cp08

0xe7fc,	// (0x0003f976) cell_fshwr2_syb_bg_pane

0x849d,	// (0x00039617) cell_fshwr2_syb_bg_pane_g1

0x84a5,	// (0x0003961f) cell_fshwr2_syb_bg_pane_t1

0x1ead,	// (0x00033027) main_tmo_pane

0xa2a7,	// (0x0003b421) uni_indicator_pane_g1_ParamLimits

0xa2bd,	// (0x0003b437) uni_indicator_pane_g2_ParamLimits

0xa2d3,	// (0x0003b44d) uni_indicator_pane_g3_ParamLimits

0xa2e8,	// (0x0003b462) uni_indicator_pane_g4_ParamLimits

0xa2e8,	// (0x0003b462) uni_indicator_pane_g4

0xa2fc,	// (0x0003b476) uni_indicator_pane_g5_ParamLimits

0xa2fc,	// (0x0003b476) uni_indicator_pane_g5

0xa2fc,	// (0x0003b476) uni_indicator_pane_g6_ParamLimits

0xa2fc,	// (0x0003b476) uni_indicator_pane_g6

0xf91c,	// (0x00040a96) uni_indicator_pane_g_ParamLimits

0xcca7,	// (0x0003de21) popup_tmo_note_window_ParamLimits

0xcca7,	// (0x0003de21) popup_tmo_note_window

0x7bd0,	// (0x00038d4a) fshwr2_bg_pane

0x847b,	// (0x000395f5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x847b,	// (0x000395f5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb0,	// (0x0004102a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb0,	// (0x0004102a) fshwr2_func_candi_cell_pane_g

0x77b9,	// (0x00038933) bg_popup_window_pane_cp01

0x84b4,	// (0x0003962e) bg_popup_window_pane_g1_cp01

0xe804,	// (0x0003f97e) bg_popup_window_pane_cp22_ParamLimits

0xe804,	// (0x0003f97e) bg_popup_window_pane_cp22

0xe812,	// (0x0003f98c) listscroll_tmo_link_pane_ParamLimits

0xe812,	// (0x0003f98c) listscroll_tmo_link_pane

0xe852,	// (0x0003f9cc) popup_tmo_note_window_g1_ParamLimits

0xe852,	// (0x0003f9cc) popup_tmo_note_window_g1

0xe85f,	// (0x0003f9d9) tmo_note_info_pane_ParamLimits

0xe85f,	// (0x0003f9d9) tmo_note_info_pane

0xe879,	// (0x0003f9f3) list_tmo_note_info_pane_g1_ParamLimits

0xe879,	// (0x0003f9f3) list_tmo_note_info_pane_g1

0xe890,	// (0x0003fa0a) list_tmo_note_info_pane_g2_ParamLimits

0xe890,	// (0x0003fa0a) list_tmo_note_info_pane_g2

0x0001,

0xfeb5,	// (0x0004102f) list_tmo_note_info_pane_g_ParamLimits

0xfeb5,	// (0x0004102f) list_tmo_note_info_pane_g

0xe8ac,	// (0x0003fa26) list_tmo_note_info_text_pane_ParamLimits

0xe8ac,	// (0x0003fa26) list_tmo_note_info_text_pane

0xe931,	// (0x0003faab) list_tmo_link_pane

0xe93e,	// (0x0003fab8) scroll_pane_cp20

0xe94b,	// (0x0003fac5) list_single_tmo_link_pane_ParamLimits

0xe94b,	// (0x0003fac5) list_single_tmo_link_pane

0xe95b,	// (0x0003fad5) list_single_tmo_link_pane_t1

0xe969,	// (0x0003fae3) list_tmo_note_info_text_pane_t1_ParamLimits

0xe969,	// (0x0003fae3) list_tmo_note_info_text_pane_t1

0x60d2,	// (0x0003724c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x60d2,	// (0x0003724c) aid_size_touch_scroll_bar_cp01

0x5ffc,	// (0x00037176) aid_size_touch_slider_marker

0x568f,	// (0x00036809) popup_settings_window_ParamLimits

0x568f,	// (0x00036809) popup_settings_window

0x3dc1,	// (0x00034f3b) popup_candi_list_indi_window

0x8c6b,	// (0x00039de5) aid_touch_navi_pane_ParamLimits

0x7b29,	// (0x00038ca3) rs_clock_indi_pane

0x7b32,	// (0x00038cac) sctrl_sk_bottom_pane_ParamLimits

0x7b43,	// (0x00038cbd) sctrl_sk_top_pane_ParamLimits

0x7c48,	// (0x00038dc2) popup_fep_tooltip_window

0xe2c2,	// (0x0003f43c) aid_size_cell_widget_grid_ParamLimits

0xe32f,	// (0x0003f4a9) cell_ai5_widget_pane_g1_ParamLimits

0xe32f,	// (0x0003f4a9) cell_ai5_widget_pane_g1

0xe383,	// (0x0003f4fd) cell_ai5_widget_pane_g6_ParamLimits

0xe38f,	// (0x0003f509) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe33,	// (0x00040fad) cell_ai5_widget_pane_g_ParamLimits

0xfe33,	// (0x00040fad) cell_ai5_widget_pane_g

0xe4c1,	// (0x0003f63b) cell_ai5_widget_pane_t10_ParamLimits

0xe4c1,	// (0x0003f63b) cell_ai5_widget_pane_t10

0xe4df,	// (0x0003f659) grid_ai5_widget_pane_ParamLimits

0xe5bb,	// (0x0003f735) cell_contacts_ai5_widget_pane_ParamLimits

0xe5bb,	// (0x0003f735) cell_contacts_ai5_widget_pane

0xe7a3,	// (0x0003f91d) popup_discreet_window_t3_ParamLimits

0xe7a3,	// (0x0003f91d) popup_discreet_window_t3

0x83f0,	// (0x0003956a) popup_fshwr2_char_preview_window_ParamLimits

0x83f0,	// (0x0003956a) popup_fshwr2_char_preview_window

0xe8ca,	// (0x0003fa44) tmo_note_info_pane_t1

0xe8df,	// (0x0003fa59) tmo_note_info_pane_t2

0xe8f8,	// (0x0003fa72) tmo_note_info_pane_t3

0xe90d,	// (0x0003fa87) tmo_note_info_pane_t4

0xe91f,	// (0x0003fa99) tmo_note_info_pane_t5

0x0004,

0xfeba,	// (0x00041034) tmo_note_info_pane_t

0xe931,	// (0x0003faab) list_tmo_link_pane_ParamLimits

0xe93e,	// (0x0003fab8) scroll_pane_cp20_ParamLimits

0x553c,	// (0x000366b6) bg_popup_fep_char_preview_window_cp01

0xe982,	// (0x0003fafc) popup_fshwr2_char_preview_window_t1

0xe990,	// (0x0003fb0a) popup_candi_list_indi_window_g1

0xe999,	// (0x0003fb13) bg_cell_contacts_ai5_widget_pane

0xe9a5,	// (0x0003fb1f) cell_contacts_ai5_widget_pane_g1

0xe9ba,	// (0x0003fb34) cell_contacts_ai5_widget_pane_g2

0xe9c6,	// (0x0003fb40) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec5,	// (0x0004103f) cell_contacts_ai5_widget_pane_g

0xe9d2,	// (0x0003fb4c) cell_contacts_ai5_widget_pane_t1

0x1ead,	// (0x00033027) highlight_cell_shortcut_ai5_widget_pane_cp01

0xea49,	// (0x0003fbc3) settings_container_pane

0x6938,	// (0x00037ab2) listscroll_set_pane_copy1

0xae98,	// (0x0003c012) scroll_pane_cp121_copy1

0xea55,	// (0x0003fbcf) set_content_pane_copy1

0xea5d,	// (0x0003fbd7) aid_height_set_list_copy1_ParamLimits

0xea5d,	// (0x0003fbd7) aid_height_set_list_copy1

0xa4fc,	// (0x0003b676) aid_size_parent_copy1_ParamLimits

0xa4fc,	// (0x0003b676) aid_size_parent_copy1

0xea69,	// (0x0003fbe3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xea69,	// (0x0003fbe3) button_value_adjust_pane_cp6_copy1

0x6ea9,	// (0x00038023) list_highlight_pane_cp2_copy1_ParamLimits

0x6ea9,	// (0x00038023) list_highlight_pane_cp2_copy1

0xea7d,	// (0x0003fbf7) list_set_pane_copy1_ParamLimits

0xea7d,	// (0x0003fbf7) list_set_pane_copy1

0xe9e4,	// (0x0003fb5e) main_pane_set_t1_copy1_ParamLimits

0xe9e4,	// (0x0003fb5e) main_pane_set_t1_copy1

0xea1e,	// (0x0003fb98) main_pane_set_t2_copy1_ParamLimits

0xea1e,	// (0x0003fb98) main_pane_set_t2_copy1

0xeb44,	// (0x0003fcbe) main_pane_set_t3_copy1

0xeb52,	// (0x0003fccc) main_pane_set_t4_copy1

0xea3d,	// (0x0003fbb7) set_content_pane_g1_copy1_ParamLimits

0xea3d,	// (0x0003fbb7) set_content_pane_g1_copy1

0xeb60,	// (0x0003fcda) setting_code_pane_copy1

0xeb68,	// (0x0003fce2) setting_slider_graphic_pane_copy1

0xeb68,	// (0x0003fce2) setting_slider_pane_copy1

0xeb68,	// (0x0003fce2) setting_text_pane_copy1

0xeb68,	// (0x0003fce2) setting_volume_pane_copy1

0xeb60,	// (0x0003fcda) settings_code_pane_cp2_copy1

0xeb70,	// (0x0003fcea) settings_code_pane_cp_copy1_ParamLimits

0xeb70,	// (0x0003fcea) settings_code_pane_cp_copy1

0x84bd,	// (0x00039637) volume_set_pane_copy1

0xeb84,	// (0x0003fcfe) volume_set_pane_g10_copy1

0xeb90,	// (0x0003fd0a) volume_set_pane_g1_copy1

0xeb9a,	// (0x0003fd14) volume_set_pane_g2_copy1

0xeba4,	// (0x0003fd1e) volume_set_pane_g3_copy1

0xebae,	// (0x0003fd28) volume_set_pane_g4_copy1

0xebb8,	// (0x0003fd32) volume_set_pane_g5_copy1

0xebc2,	// (0x0003fd3c) volume_set_pane_g6_copy1

0xebcc,	// (0x0003fd46) volume_set_pane_g7_copy1

0xebd6,	// (0x0003fd50) volume_set_pane_g8_copy1

0xebe0,	// (0x0003fd5a) volume_set_pane_g9_copy1

0xef84,	// (0x000400fe) bg_set_opt_pane_cp_copy1_ParamLimits

0xef84,	// (0x000400fe) bg_set_opt_pane_cp_copy1

0x84c9,	// (0x00039643) setting_slider_pane_t1_copy1_ParamLimits

0x84c9,	// (0x00039643) setting_slider_pane_t1_copy1

0x84e7,	// (0x00039661) setting_slider_pane_t2_copy1_ParamLimits

0x84e7,	// (0x00039661) setting_slider_pane_t2_copy1

0x8501,	// (0x0003967b) setting_slider_pane_t3_copy1_ParamLimits

0x8501,	// (0x0003967b) setting_slider_pane_t3_copy1

0x8519,	// (0x00039693) slider_set_pane_copy1_ParamLimits

0x8519,	// (0x00039693) slider_set_pane_copy1

0x1f08,	// (0x00033082) set_opt_bg_pane_g1_copy2

0x1f10,	// (0x0003308a) set_opt_bg_pane_g2_copy2

0xebea,	// (0x0003fd64) set_opt_bg_pane_g3_copy2

0x1f20,	// (0x0003309a) set_opt_bg_pane_g4_copy2

0x1f28,	// (0x000330a2) set_opt_bg_pane_g5_copy2

0x1f30,	// (0x000330aa) set_opt_bg_pane_g6_copy2

0xebf4,	// (0x0003fd6e) set_opt_bg_pane_g7_copy2

0xebfe,	// (0x0003fd78) set_opt_bg_pane_g8_copy2

0xec08,	// (0x0003fd82) set_opt_bg_pane_g9_copy2

0x852f,	// (0x000396a9) aid_size_touch_slider_mark_copy1_ParamLimits

0x852f,	// (0x000396a9) aid_size_touch_slider_mark_copy1

0xec12,	// (0x0003fd8c) slider_set_pane_g1_copy1

0x8543,	// (0x000396bd) slider_set_pane_g2_copy1

0x735b,	// (0x000384d5) slider_set_pane_g3_copy1_ParamLimits

0x735b,	// (0x000384d5) slider_set_pane_g3_copy1

0x736f,	// (0x000384e9) slider_set_pane_g4_copy1_ParamLimits

0x736f,	// (0x000384e9) slider_set_pane_g4_copy1

0x7387,	// (0x00038501) slider_set_pane_g5_copy1_ParamLimits

0x7387,	// (0x00038501) slider_set_pane_g5_copy1

0x735b,	// (0x000384d5) slider_set_pane_g6_copy1_ParamLimits

0x735b,	// (0x000384d5) slider_set_pane_g6_copy1

0x854b,	// (0x000396c5) slider_set_pane_g7_copy1_ParamLimits

0x854b,	// (0x000396c5) slider_set_pane_g7_copy1

0xe569,	// (0x0003f6e3) bg_set_opt_pane_cp2_copy1

0xec1b,	// (0x0003fd95) setting_slider_graphic_pane_g1_copy1

0xec24,	// (0x0003fd9e) setting_slider_graphic_pane_t1_copy1

0xec34,	// (0x0003fdae) setting_slider_graphic_pane_t2_copy1

0xec44,	// (0x0003fdbe) slider_set_pane_cp_copy1

0xec54,	// (0x0003fdce) input_focus_pane_cp1_copy1

0xec5d,	// (0x0003fdd7) list_set_text_pane_copy1

0xec65,	// (0x0003fddf) setting_text_pane_g1_copy1

0x46fb,	// (0x00035875) set_text_pane_t1_copy1

0xec54,	// (0x0003fdce) input_focus_pane_cp2_copy1

0xec65,	// (0x0003fddf) setting_code_pane_g1_copy1

0xec6e,	// (0x0003fde8) setting_code_pane_t1_copy1

0xec7c,	// (0x0003fdf6) list_set_graphic_pane_copy1

0xe569,	// (0x0003f6e3) bg_set_opt_pane_cp4_copy1

0x67ae,	// (0x00037928) list_set_graphic_pane_g1_copy1_ParamLimits

0x67ae,	// (0x00037928) list_set_graphic_pane_g1_copy1

0xec8e,	// (0x0003fe08) list_set_graphic_pane_g2_copy1

0x67c6,	// (0x00037940) list_set_graphic_pane_t1_copy1_ParamLimits

0x67c6,	// (0x00037940) list_set_graphic_pane_t1_copy1

0xb777,	// (0x0003c8f1) rs_clock_indi_pane_g1

0xec96,	// (0x0003fe10) rs_clock_indi_pane_t1

0xeca4,	// (0x0003fe1e) rs_indi_pane

0xecac,	// (0x0003fe26) rs_indi_pane_g1

0xecb5,	// (0x0003fe2f) rs_indi_pane_g2

0xecbe,	// (0x0003fe38) rs_indi_pane_g3

0x0002,

0xfecc,	// (0x00041046) rs_indi_pane_g

0x6938,	// (0x00037ab2) bg_popup_preview_window_pane_cp03

0xecc7,	// (0x0003fe41) popup_fep_tooltip_window_t1

0xc42e,	// (0x0003d5a8) popup_note2_window_g2_ParamLimits

0xc42e,	// (0x0003d5a8) popup_note2_window_g2

0x0001,

0xfc65,	// (0x00040ddf) popup_note2_window_g_ParamLimits

0xfc65,	// (0x00040ddf) popup_note2_window_g

0xc957,	// (0x0003dad1) bg_popup_sub_pane_cp11_ParamLimits

0xc964,	// (0x0003dade) cell_ai3_links_pane_g1_ParamLimits

0xc97b,	// (0x0003daf5) cell_ai3_links_pane_t1

0x46fb,	// (0x00035875) set_text_pane_t1_copy1_ParamLimits

0x6845,	// (0x000379bf) cell_graphic_popup_pane_cp2_ParamLimits

0x6845,	// (0x000379bf) cell_graphic_popup_pane_cp2

0xecd5,	// (0x0003fe4f) cell_graphic_popup_pane_g1_cp2

0xf2fc,	// (0x00040476) cell_graphic_popup_pane_g2_cp2

0xecdd,	// (0x0003fe57) cell_graphic_popup_pane_g3_cp2

0xece5,	// (0x0003fe5f) cell_graphic_popup_pane_t2_cp2

0xf30d,	// (0x00040487) grid_highlight_pane_cp3_cp2

0x21b1,	// (0x0003332b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1ead,	// (0x00033027) main_tmo_pane_ParamLimits

0xcc9b,	// (0x0003de15) popup_tmo_big_image_note_window

0xe31e,	// (0x0003f498) cell_ai5_widget_list_pane

0xe326,	// (0x0003f4a0) cell_ai5_widget_lrg_icon_pane

0xe8ca,	// (0x0003fa44) tmo_note_info_pane_t1_ParamLimits

0xe8df,	// (0x0003fa59) tmo_note_info_pane_t2_ParamLimits

0xe8f8,	// (0x0003fa72) tmo_note_info_pane_t3_ParamLimits

0xe90d,	// (0x0003fa87) tmo_note_info_pane_t4_ParamLimits

0xe91f,	// (0x0003fa99) tmo_note_info_pane_t5_ParamLimits

0xfeba,	// (0x00041034) tmo_note_info_pane_t_ParamLimits

0xea49,	// (0x0003fbc3) settings_container_pane_ParamLimits

0xec4c,	// (0x0003fdc6) indicator_popup_pane_cp5

0xec4c,	// (0x0003fdc6) indicator_popup_pane_cp6

0xec7c,	// (0x0003fdf6) list_set_graphic_pane_copy1_ParamLimits

0xe555,	// (0x0003f6cf) bg_popup_window_pane_cp23

0xecf3,	// (0x0003fe6d) popup_tmo_big_image_note_window_g1

0xecff,	// (0x0003fe79) popup_tmo_big_image_note_window_t1

0xed0f,	// (0x0003fe89) popup_tmo_big_image_note_window_t2

0xed1f,	// (0x0003fe99) popup_tmo_big_image_note_window_t3

0x0002,

0xfed3,	// (0x0004104d) popup_tmo_big_image_note_window_t

0xb777,	// (0x0003c8f1) cell_ai5_widget_lrg_icon_pane_g1

0xed2f,	// (0x0003fea9) cell_ai5_widget_lrg_icon_pane_t1

0xed3d,	// (0x0003feb7) cell_ai5_widget_list_row_pane_ParamLimits

0xed3d,	// (0x0003feb7) cell_ai5_widget_list_row_pane

0xed55,	// (0x0003fecf) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xed55,	// (0x0003fecf) cell_ai5_widget_list_row_pane_g1

0xed62,	// (0x0003fedc) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xed62,	// (0x0003fedc) cell_ai5_widget_list_row_pane_t1

0xed8d,	// (0x0003ff07) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xed8d,	// (0x0003ff07) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeda,	// (0x00041054) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeda,	// (0x00041054) cell_ai5_widget_list_row_pane_t

0x553c,	// (0x000366b6) main_fep_vtchi_ss_pane

0x857d,	// (0x000396f7) popup_fep_char_pre_window

0x8585,	// (0x000396ff) popup_fep_ituss_window

0x85a6,	// (0x00039720) popup_fep_vkbss_window

0xedb5,	// (0x0003ff2f) grid_vkbss_keypad_pane_ParamLimits

0xedb5,	// (0x0003ff2f) grid_vkbss_keypad_pane

0xedc5,	// (0x0003ff3f) ituss_keypad_pane

0x85d4,	// (0x0003974e) aid_vkbss_key_offset_ParamLimits

0x85d4,	// (0x0003974e) aid_vkbss_key_offset

0x85e0,	// (0x0003975a) cell_vkbss_key_pane_ParamLimits

0x85e0,	// (0x0003975a) cell_vkbss_key_pane

0xedd4,	// (0x0003ff4e) bg_cell_vkbss_key_g1_ParamLimits

0xedd4,	// (0x0003ff4e) bg_cell_vkbss_key_g1

0xede0,	// (0x0003ff5a) cell_vkbss_key_3p_pane_ParamLimits

0xede0,	// (0x0003ff5a) cell_vkbss_key_3p_pane

0xedfa,	// (0x0003ff74) cell_vkbss_key_g1_ParamLimits

0xedfa,	// (0x0003ff74) cell_vkbss_key_g1

0xee14,	// (0x0003ff8e) cell_vkbss_key_t1_ParamLimits

0xee14,	// (0x0003ff8e) cell_vkbss_key_t1

0x85f6,	// (0x00039770) cell_ituss_key_pane_ParamLimits

0x85f6,	// (0x00039770) cell_ituss_key_pane

0xee3f,	// (0x0003ffb9) bg_cell_ituss_key_g1_ParamLimits

0xee3f,	// (0x0003ffb9) bg_cell_ituss_key_g1

0xee4b,	// (0x0003ffc5) cell_ituss_key_pane_g1_ParamLimits

0xee4b,	// (0x0003ffc5) cell_ituss_key_pane_g1

0x8607,	// (0x00039781) cell_ituss_key_pane_g2_ParamLimits

0x8607,	// (0x00039781) cell_ituss_key_pane_g2

0x0002,

0xfee1,	// (0x0004105b) cell_ituss_key_pane_g_ParamLimits

0xfee1,	// (0x0004105b) cell_ituss_key_pane_g

0x8633,	// (0x000397ad) cell_ituss_key_t1_ParamLimits

0x8633,	// (0x000397ad) cell_ituss_key_t1

0x866d,	// (0x000397e7) cell_ituss_key_t2_ParamLimits

0x866d,	// (0x000397e7) cell_ituss_key_t2

0x869e,	// (0x00039818) cell_ituss_key_t3_ParamLimits

0x869e,	// (0x00039818) cell_ituss_key_t3

0x866d,	// (0x000397e7) cell_ituss_key_t4_ParamLimits

0x866d,	// (0x000397e7) cell_ituss_key_t4

0x0004,

0xfee8,	// (0x00041062) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x00041062) cell_ituss_key_t

0xee71,	// (0x0003ffeb) cell_vkbss_key_3p_pane_g1

0xee79,	// (0x0003fff3) cell_vkbss_key_3p_pane_g2

0xee81,	// (0x0003fffb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x0004106d) cell_vkbss_key_3p_pane_g

0x553c,	// (0x000366b6) bg_popup_fep_char_preview_window_cp02

0x86e1,	// (0x0003985b) popup_fep_char_pre_window_t1

0xe2b8,	// (0x0003f432) main_ai5_sk_pane

0xe999,	// (0x0003fb13) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe9a5,	// (0x0003fb1f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe9ba,	// (0x0003fb34) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe9c6,	// (0x0003fb40) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec5,	// (0x0004103f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe9d2,	// (0x0003fb4c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1ead,	// (0x00033027) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xee89,	// (0x00040003) main_ai5_sk_pane_g1

0x95bb,	// (0x0003a735) popup_query_code_window_g1

0x859b,	// (0x00039715) popup_fep_vkb_icf_pane

0x85b1,	// (0x0003972b) popup_fep_vtchi_icf_pane

0xee92,	// (0x0004000c) bg_icf_pane

0xee9e,	// (0x00040018) list_vkb_icf_pane

0xeeaa,	// (0x00040024) bg_icf_pane_cp01

0xeeb6,	// (0x00040030) vtchi_icf_list_pane

0xeec7,	// (0x00040041) list_vkb_icf_pane_t1_ParamLimits

0xeec7,	// (0x00040041) list_vkb_icf_pane_t1

0xeedd,	// (0x00040057) vtchi_icf_list_pane_t1_ParamLimits

0xeedd,	// (0x00040057) vtchi_icf_list_pane_t1

0x8585,	// (0x000396ff) popup_fep_ituss_window_ParamLimits

0x85b1,	// (0x0003972b) popup_fep_vtchi_icf_pane_ParamLimits

0xedc5,	// (0x0003ff3f) ituss_keypad_pane_ParamLimits

0x85c8,	// (0x00039742) ituss_sks_pane

0xee92,	// (0x0004000c) bg_icf_pane_ParamLimits

0x8561,	// (0x000396db) icf_edit_indi_pane_ParamLimits

0x8561,	// (0x000396db) icf_edit_indi_pane

0xee9e,	// (0x00040018) list_vkb_icf_pane_ParamLimits

0xeeaa,	// (0x00040024) bg_icf_pane_cp01_ParamLimits

0x8570,	// (0x000396ea) icf_edit_indi_pane_cp01_ParamLimits

0x8570,	// (0x000396ea) icf_edit_indi_pane_cp01

0xeebe,	// (0x00040038) vtchi_query_pane

0x77d1,	// (0x0003894b) icf_edit_indi_pane_g1_ParamLimits

0x77d1,	// (0x0003894b) icf_edit_indi_pane_g1

0x8703,	// (0x0003987d) icf_edit_indi_pane_g2_ParamLimits

0x8703,	// (0x0003987d) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x00041085) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x00041085) icf_edit_indi_pane_g

0x8712,	// (0x0003988c) icf_edit_indi_pane_t1

0xeef5,	// (0x0004006f) bg_input_focus_pane_cp042

0xf4e0,	// (0x0004065a) vtchi_button_pane

0xeefe,	// (0x00040078) vtchi_query_pane_t1

0xef0c,	// (0x00040086) vtchi_query_pane_t2

0xef1a,	// (0x00040094) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x00041074) vtchi_query_pane_t

0x553c,	// (0x000366b6) bg_button_pane_cp13

0xef28,	// (0x000400a2) vtchi_button_pane_g1

0x86f0,	// (0x0003986a) ituss_sks_pane_g1

0x86fb,	// (0x00039875) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x0004107b) ituss_sks_pane_g

0xef30,	// (0x000400aa) ituss_sks_pane_t1

0xef3e,	// (0x000400b8) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x00041080) ituss_sks_pane_t

0xb227,	// (0x0003c3a1) indicator_nsta_pane_cp_g1

0xb230,	// (0x0003c3aa) indicator_nsta_pane_cp_g2

0xb238,	// (0x0003c3b2) indicator_nsta_pane_cp_g3

0xb240,	// (0x0003c3ba) indicator_nsta_pane_cp_g4

0xb248,	// (0x0003c3c2) indicator_nsta_pane_cp_g5

0xb250,	// (0x0003c3ca) indicator_nsta_pane_cp_g6

0x0005,

0xfaa3,	// (0x00040c1d) indicator_nsta_pane_cp_g

0xd9a3,	// (0x0003eb1d) cell_graphic2_pane_t2_ParamLimits

0xd9a3,	// (0x0003eb1d) cell_graphic2_pane_t2

0x0001,

0xfdbc,	// (0x00040f36) cell_graphic2_pane_t_ParamLimits

0xfdbc,	// (0x00040f36) cell_graphic2_pane_t

0xd9d0,	// (0x0003eb4a) cell_graphic2_control_pane_t1

0x64f8,	// (0x00037672) signal_pane_g3_ParamLimits

0x64f8,	// (0x00037672) signal_pane_g3

0x650a,	// (0x00037684) signal_pane_g4_ParamLimits

0x650a,	// (0x00037684) signal_pane_g4

0xed9f,	// (0x0003ff19) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xed9f,	// (0x0003ff19) cell_ai5_widget_list_row_pane_t3

0xee5f,	// (0x0003ffd9) cell_ituss_key_pane_t1_ParamLimits

0xee5f,	// (0x0003ffd9) cell_ituss_key_pane_t1

0x9238,	// (0x0003a3b2) form_field_data_wide_pane_vc_t2_ParamLimits

0x9238,	// (0x0003a3b2) form_field_data_wide_pane_vc_t2

0x924c,	// (0x0003a3c6) form_field_data_wide_pane_vc_t3_ParamLimits

0x924c,	// (0x0003a3c6) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0004097e) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0004097e) form_field_data_wide_pane_vc_t

0xaed8,	// (0x0003c052) form_field_slider_wide_pane_vc_t3_ParamLimits

0xaed8,	// (0x0003c052) form_field_slider_wide_pane_vc_t3

0xafae,	// (0x0003c128) form_field_popup_wide_pane_vc_t2_ParamLimits

0xafae,	// (0x0003c128) form_field_popup_wide_pane_vc_t2

0xafc5,	// (0x0003c13f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xafc5,	// (0x0003c13f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa92,	// (0x00040c0c) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x00040c0c) form_field_popup_wide_pane_vc_t

0x8394,	// (0x0003950e) aid_fshwr2_btn_pane_ParamLimits

0x83a0,	// (0x0003951a) aid_fshwr2_syb_pane_ParamLimits

0x83ac,	// (0x00039526) aid_fshwr2_txt_pane_ParamLimits

0x7bd0,	// (0x00038d4a) fshwr2_bg_pane_ParamLimits

0x83b8,	// (0x00039532) fshwr2_func_candi_pane_ParamLimits

0x83cb,	// (0x00039545) fshwr2_hwr_syb_pane_ParamLimits

0x83d9,	// (0x00039553) fshwr2_icf_pane_ParamLimits

0x41c4,	// (0x0003533e) list_double_graphic_pane_vc_g4_ParamLimits

0x41c4,	// (0x0003533e) list_double_graphic_pane_vc_g4

0x8627,	// (0x000397a1) cell_ituss_key_pane_g3_ParamLimits

0x8627,	// (0x000397a1) cell_ituss_key_pane_g3

0x86cf,	// (0x00039849) cell_ituss_key_t5_ParamLimits

0x86cf,	// (0x00039849) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
