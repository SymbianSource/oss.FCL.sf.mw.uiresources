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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002e328 };

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
0x0238,	// (0x0002e560) Screen

0x0244,	// (0x0002e56c) application_window_ParamLimits

0x0244,	// (0x0002e56c) application_window

0x3418,	// (0x00031740) screen_g1

0xeb7e,	// (0x0003cea6) area_bottom_pane_ParamLimits

0xeb7e,	// (0x0003cea6) area_bottom_pane

0x7cf0,	// (0x00036018) area_top_pane_ParamLimits

0x7cf0,	// (0x00036018) area_top_pane

0x7d84,	// (0x000360ac) main_pane_ParamLimits

0x7d84,	// (0x000360ac) main_pane

0x3422,	// (0x0003174a) misc_graphics

0x1619,	// (0x0002f941) battery_pane_ParamLimits

0x1619,	// (0x0002f941) battery_pane

0x5190,	// (0x000334b8) bg_status_flat_pane_g8

0x5198,	// (0x000334c0) bg_status_flat_pane_g9

0x48f6,	// (0x00032c1e) context_pane_ParamLimits

0x48f6,	// (0x00032c1e) context_pane

0x1784,	// (0x0002faac) navi_pane_ParamLimits

0x1784,	// (0x0002faac) navi_pane

0x17fb,	// (0x0002fb23) signal_pane_ParamLimits

0x17fb,	// (0x0002fb23) signal_pane

0x0008,

0xf8b2,	// (0x0003dbda) bg_status_flat_pane_g

0x188b,	// (0x0002fbb3) status_pane_g1_ParamLimits

0x188b,	// (0x0002fbb3) status_pane_g1

0x18a1,	// (0x0002fbc9) status_pane_g2_ParamLimits

0x18a1,	// (0x0002fbc9) status_pane_g2

0x495b,	// (0x00032c83) status_pane_g3_ParamLimits

0x495b,	// (0x00032c83) status_pane_g3

0x0004,

0xf7e5,	// (0x0003db0d) status_pane_g_ParamLimits

0xf7e5,	// (0x0003db0d) status_pane_g

0x18ad,	// (0x0002fbd5) title_pane_ParamLimits

0x18ad,	// (0x0002fbd5) title_pane

0x190e,	// (0x0002fc36) uni_indicator_pane_ParamLimits

0x190e,	// (0x0002fc36) uni_indicator_pane

0x4715,	// (0x00032a3d) bg_list_pane_ParamLimits

0x4715,	// (0x00032a3d) bg_list_pane

0xeec9,	// (0x0003d1f1) find_pane

0x0f07,	// (0x0002f22f) listscroll_app_pane_ParamLimits

0x0f07,	// (0x0002f22f) listscroll_app_pane

0x4741,	// (0x00032a69) listscroll_form_pane

0xeed1,	// (0x0003d1f9) listscroll_gen_pane_ParamLimits

0xeed1,	// (0x0003d1f9) listscroll_gen_pane

0x4741,	// (0x00032a69) listscroll_set_pane

0x5971,	// (0x00033c99) main_idle_act_pane

0x44fb,	// (0x00032823) main_idle_trad_pane

0x44fb,	// (0x00032823) main_list_empty_pane

0x4735,	// (0x00032a5d) main_midp_pane

0x475b,	// (0x00032a83) main_pane_g1_ParamLimits

0x475b,	// (0x00032a83) main_pane_g1

0x0f13,	// (0x0002f23b) popup_ai_message_window_ParamLimits

0x0f13,	// (0x0002f23b) popup_ai_message_window

0x0fa4,	// (0x0002f2cc) popup_fep_china_uni_window_ParamLimits

0x0fa4,	// (0x0002f2cc) popup_fep_china_uni_window

0x479b,	// (0x00032ac3) popup_fep_japan_candidate_window_ParamLimits

0x479b,	// (0x00032ac3) popup_fep_japan_candidate_window

0x47b9,	// (0x00032ae1) popup_fep_japan_predictive_window_ParamLimits

0x47b9,	// (0x00032ae1) popup_fep_japan_predictive_window

0x0ffe,	// (0x0002f326) popup_find_window

0x101b,	// (0x0002f343) popup_grid_graphic_window_ParamLimits

0x101b,	// (0x0002f343) popup_grid_graphic_window

0x47e9,	// (0x00032b11) popup_large_graphic_colour_window

0x10ad,	// (0x0002f3d5) popup_menu_window_ParamLimits

0x10ad,	// (0x0002f3d5) popup_menu_window

0x1279,	// (0x0002f5a1) popup_note_image_window

0x123f,	// (0x0002f567) popup_note_wait_window_ParamLimits

0x123f,	// (0x0002f567) popup_note_wait_window

0x1291,	// (0x0002f5b9) popup_note_window_ParamLimits

0x1291,	// (0x0002f5b9) popup_note_window

0x1337,	// (0x0002f65f) popup_query_code_window_ParamLimits

0x1337,	// (0x0002f65f) popup_query_code_window

0x480f,	// (0x00032b37) popup_query_data_code_window_ParamLimits

0x480f,	// (0x00032b37) popup_query_data_code_window

0x1371,	// (0x0002f699) popup_query_data_window_ParamLimits

0x1371,	// (0x0002f699) popup_query_data_window

0x13e7,	// (0x0002f70f) popup_query_sat_info_window_ParamLimits

0x13e7,	// (0x0002f70f) popup_query_sat_info_window

0x147e,	// (0x0002f7a6) popup_snote_single_graphic_window_ParamLimits

0x147e,	// (0x0002f7a6) popup_snote_single_graphic_window

0x147e,	// (0x0002f7a6) popup_snote_single_text_window_ParamLimits

0x147e,	// (0x0002f7a6) popup_snote_single_text_window

0x4826,	// (0x00032b4e) popup_sub_window_general

0x486c,	// (0x00032b94) popup_window_general_ParamLimits

0x486c,	// (0x00032b94) popup_window_general

0x4881,	// (0x00032ba9) power_save_pane

0xed93,	// (0x0003d0bb) control_pane_g1_ParamLimits

0xed93,	// (0x0003d0bb) control_pane_g1

0x8a3f,	// (0x00036d67) control_pane_g2_ParamLimits

0x8a3f,	// (0x00036d67) control_pane_g2

0x46ef,	// (0x00032a17) control_pane_g3_ParamLimits

0x46ef,	// (0x00032a17) control_pane_g3

0x0007,

0xf7cd,	// (0x0003daf5) control_pane_g_ParamLimits

0xf7cd,	// (0x0003daf5) control_pane_g

0xedca,	// (0x0003d0f2) control_pane_t1_ParamLimits

0xedca,	// (0x0003d0f2) control_pane_t1

0xee28,	// (0x0003d150) control_pane_t2_ParamLimits

0xee28,	// (0x0003d150) control_pane_t2

0x0002,

0xf7de,	// (0x0003db06) control_pane_t_ParamLimits

0xf7de,	// (0x0003db06) control_pane_t

0x4610,	// (0x00032938) navi_navi_volume_pane_cp1

0x4619,	// (0x00032941) status_small_icon_pane

0x4621,	// (0x00032949) status_small_pane_g1_ParamLimits

0x4621,	// (0x00032949) status_small_pane_g1

0x4655,	// (0x0003297d) status_small_pane_g2_ParamLimits

0x4655,	// (0x0003297d) status_small_pane_g2

0x4661,	// (0x00032989) status_small_pane_g3_ParamLimits

0x4661,	// (0x00032989) status_small_pane_g3

0x466d,	// (0x00032995) status_small_pane_g4_ParamLimits

0x466d,	// (0x00032995) status_small_pane_g4

0x4679,	// (0x000329a1) status_small_pane_g5_ParamLimits

0x4679,	// (0x000329a1) status_small_pane_g5

0x4688,	// (0x000329b0) status_small_pane_g6_ParamLimits

0x4688,	// (0x000329b0) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0003dae4) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0003dae4) status_small_pane_g

0x46b8,	// (0x000329e0) status_small_pane_t1

0x46db,	// (0x00032a03) status_small_wait_pane_ParamLimits

0x46db,	// (0x00032a03) status_small_wait_pane

0x0d77,	// (0x0002f09f) aid_levels_signal_ParamLimits

0x0d77,	// (0x0002f09f) aid_levels_signal

0x0d8f,	// (0x0002f0b7) signal_pane_g1_ParamLimits

0x0d8f,	// (0x0002f0b7) signal_pane_g1

0x0daa,	// (0x0002f0d2) signal_pane_g2_ParamLimits

0x0daa,	// (0x0002f0d2) signal_pane_g2

0x0001,

0xf751,	// (0x0003da79) signal_pane_g_ParamLimits

0xf751,	// (0x0003da79) signal_pane_g

0x403f,	// (0x00032367) context_pane_g1

0x0254,	// (0x0002e57c) title_pane_g1

0x0289,	// (0x0002e5b1) title_pane_t1

0x3438,	// (0x00031760) title_pane_t2

0x345e,	// (0x00031786) title_pane_t3

0x0002,

0xf59b,	// (0x0003d8c3) title_pane_t

0x1936,	// (0x0002fc5e) aid_levels_battery_ParamLimits

0x1936,	// (0x0002fc5e) aid_levels_battery

0x1952,	// (0x0002fc7a) battery_pane_g1_ParamLimits

0x1952,	// (0x0002fc7a) battery_pane_g1

0x196f,	// (0x0002fc97) battery_pane_g2_ParamLimits

0x196f,	// (0x0002fc97) battery_pane_g2

0x0001,

0xf7f0,	// (0x0003db18) battery_pane_g_ParamLimits

0xf7f0,	// (0x0003db18) battery_pane_g

0x1bb4,	// (0x0002fedc) uni_indicator_pane_g1

0x1bc9,	// (0x0002fef1) uni_indicator_pane_g2

0x1bde,	// (0x0002ff06) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0003dc82) uni_indicator_pane_g

0x436b,	// (0x00032693) navi_icon_pane_ParamLimits

0x436b,	// (0x00032693) navi_icon_pane

0x42b2,	// (0x000325da) navi_midp_pane

0x4387,	// (0x000326af) navi_navi_pane

0x4391,	// (0x000326b9) navi_text_pane_ParamLimits

0x4391,	// (0x000326b9) navi_text_pane

0x3418,	// (0x00031740) status_small_wait_pane_g1

0x3739,	// (0x00031a61) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0003dc7d) status_small_wait_pane_g

0x1b53,	// (0x0002fe7b) navi_navi_icon_text_pane

0x1b6d,	// (0x0002fe95) navi_navi_pane_g1_ParamLimits

0x1b6d,	// (0x0002fe95) navi_navi_pane_g1

0x1b5b,	// (0x0002fe83) navi_navi_pane_g2_ParamLimits

0x1b5b,	// (0x0002fe83) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0003dc4b) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0003dc4b) navi_navi_pane_g

0x5713,	// (0x00033a3b) navi_navi_tabs_pane

0x1b7f,	// (0x0002fea7) navi_navi_text_pane

0x1b53,	// (0x0002fe7b) navi_navi_volume_pane

0x1b41,	// (0x0002fe69) navi_text_pane_t1

0x1b35,	// (0x0002fe5d) navi_icon_pane_g1

0x5654,	// (0x0003397c) navi_navi_text_pane_t1

0xf093,	// (0x0003d3bb) navi_navi_volume_pane_g1

0xf09b,	// (0x0003d3c3) volume_small_pane

0x1a91,	// (0x0002fdb9) navi_navi_icon_text_pane_g1

0x1a99,	// (0x0002fdc1) navi_navi_icon_text_pane_t1

0x4387,	// (0x000326af) navi_tabs_2_long_pane

0x4387,	// (0x000326af) navi_tabs_2_pane

0x4387,	// (0x000326af) navi_tabs_3_long_pane

0x4387,	// (0x000326af) navi_tabs_3_pane

0x4387,	// (0x000326af) navi_tabs_4_pane

0xf073,	// (0x0003d39b) tabs_2_active_pane_ParamLimits

0xf073,	// (0x0003d39b) tabs_2_active_pane

0xf083,	// (0x0003d3ab) tabs_2_passive_pane_ParamLimits

0xf083,	// (0x0003d3ab) tabs_2_passive_pane

0xf041,	// (0x0003d369) tabs_3_active_pane_ParamLimits

0xf041,	// (0x0003d369) tabs_3_active_pane

0xf051,	// (0x0003d379) tabs_3_passive_pane_ParamLimits

0xf051,	// (0x0003d379) tabs_3_passive_pane

0xf062,	// (0x0003d38a) tabs_3_passive_pane_cp_ParamLimits

0xf062,	// (0x0003d38a) tabs_3_passive_pane_cp

0xeffd,	// (0x0003d325) tabs_4_active_pane_ParamLimits

0xeffd,	// (0x0003d325) tabs_4_active_pane

0xf00e,	// (0x0003d336) tabs_4_passive_pane_ParamLimits

0xf00e,	// (0x0003d336) tabs_4_passive_pane

0xf01f,	// (0x0003d347) tabs_4_passive_pane_cp_ParamLimits

0xf01f,	// (0x0003d347) tabs_4_passive_pane_cp

0xf030,	// (0x0003d358) tabs_4_passive_pane_cp2_ParamLimits

0xf030,	// (0x0003d358) tabs_4_passive_pane_cp2

0xefdd,	// (0x0003d305) tabs_2_long_active_pane_ParamLimits

0xefdd,	// (0x0003d305) tabs_2_long_active_pane

0xefed,	// (0x0003d315) tabs_2_long_passive_pane_ParamLimits

0xefed,	// (0x0003d315) tabs_2_long_passive_pane

0xefa8,	// (0x0003d2d0) tabs_3_long_active_pane_ParamLimits

0xefa8,	// (0x0003d2d0) tabs_3_long_active_pane

0xefb9,	// (0x0003d2e1) tabs_3_long_passive_pane_ParamLimits

0xefb9,	// (0x0003d2e1) tabs_3_long_passive_pane

0xefcc,	// (0x0003d2f4) tabs_3_long_passive_pane_cp_ParamLimits

0xefcc,	// (0x0003d2f4) tabs_3_long_passive_pane_cp

0x8caa,	// (0x00036fd2) volume_small_pane_g1

0xef57,	// (0x0003d27f) volume_small_pane_g2

0xef60,	// (0x0003d288) volume_small_pane_g3

0xef69,	// (0x0003d291) volume_small_pane_g4

0xef72,	// (0x0003d29a) volume_small_pane_g5

0xef7b,	// (0x0003d2a3) volume_small_pane_g6

0xef84,	// (0x0003d2ac) volume_small_pane_g7

0xef8d,	// (0x0003d2b5) volume_small_pane_g8

0xef96,	// (0x0003d2be) volume_small_pane_g9

0xef9f,	// (0x0003d2c7) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0003dc17) volume_small_pane_g

0x3470,	// (0x00031798) bg_active_tab_pane_cp2_ParamLimits

0x3470,	// (0x00031798) bg_active_tab_pane_cp2

0x0315,	// (0x0002e63d) tabs_3_active_pane_g1

0x031d,	// (0x0002e645) tabs_3_active_pane_t1

0x3470,	// (0x00031798) bg_passive_tab_pane_cp2_ParamLimits

0x3470,	// (0x00031798) bg_passive_tab_pane_cp2

0x0315,	// (0x0002e63d) tabs_3_passive_pane_g1

0x031d,	// (0x0002e645) tabs_3_passive_pane_t1

0x3470,	// (0x00031798) bg_active_tab_pane_cp3_ParamLimits

0x3470,	// (0x00031798) bg_active_tab_pane_cp3

0x032f,	// (0x0002e657) tabs_4_active_pane_g1

0x0337,	// (0x0002e65f) tabs_4_active_pane_t1

0x3470,	// (0x00031798) bg_passive_tab_pane_cp3_ParamLimits

0x3470,	// (0x00031798) bg_passive_tab_pane_cp3

0x032f,	// (0x0002e657) tabs_4_1_passive_pane_g1

0x0337,	// (0x0002e65f) tabs_4_1_passive_pane_t1

0x4735,	// (0x00032a5d) list_highlight_pane_cp2

0x1c6b,	// (0x0002ff93) list_set_pane_ParamLimits

0x1c6b,	// (0x0002ff93) list_set_pane

0x1d05,	// (0x0003002d) main_pane_set_t1_ParamLimits

0x1d05,	// (0x0003002d) main_pane_set_t1

0x1d25,	// (0x0003004d) main_pane_set_t2_ParamLimits

0x1d25,	// (0x0003004d) main_pane_set_t2

0x1d39,	// (0x00030061) main_pane_set_t3_ParamLimits

0x1d39,	// (0x00030061) main_pane_set_t3

0x1d4b,	// (0x00030073) main_pane_set_t4_ParamLimits

0x1d4b,	// (0x00030073) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0003dce7) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0003dce7) main_pane_set_t

0x1d5d,	// (0x00030085) setting_code_pane

0x1d65,	// (0x0003008d) setting_slider_graphic_pane

0x1d65,	// (0x0003008d) setting_slider_pane

0x1d65,	// (0x0003008d) setting_text_pane

0x1d65,	// (0x0003008d) setting_volume_pane

0x807b,	// (0x000363a3) volume_set_pane

0x347e,	// (0x000317a6) bg_set_opt_pane_cp

0x8083,	// (0x000363ab) setting_slider_pane_t1

0x809c,	// (0x000363c4) setting_slider_pane_t2

0x80b5,	// (0x000363dd) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0003d8ca) setting_slider_pane_t

0x80cc,	// (0x000363f4) slider_set_pane

0x3422,	// (0x0003174a) bg_set_opt_pane_cp2

0x348c,	// (0x000317b4) setting_slider_graphic_pane_g1

0x80e2,	// (0x0003640a) setting_slider_graphic_pane_t1

0x80f1,	// (0x00036419) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003d8d1) setting_slider_graphic_pane_t

0x8100,	// (0x00036428) slider_set_pane_cp

0x3422,	// (0x0003174a) input_focus_pane_cp1

0x5b7a,	// (0x00033ea2) list_set_text_pane

0x3418,	// (0x00031740) setting_text_pane_g1

0x3422,	// (0x0003174a) input_focus_pane_cp2

0x3418,	// (0x00031740) setting_code_pane_g1

0x3495,	// (0x000317bd) setting_code_pane_t1

0x6da4,	// (0x000350cc) set_text_pane_t1_ParamLimits

0x6da4,	// (0x000350cc) set_text_pane_t1

0x3b2c,	// (0x00031e54) set_opt_bg_pane_g1

0x3b34,	// (0x00031e5c) set_opt_bg_pane_g2

0x5b5a,	// (0x00033e82) set_opt_bg_pane_g3

0x3b44,	// (0x00031e6c) set_opt_bg_pane_g4

0x3b4c,	// (0x00031e74) set_opt_bg_pane_g5

0x3b54,	// (0x00031e7c) set_opt_bg_pane_g6

0x5b62,	// (0x00033e8a) set_opt_bg_pane_g7

0x5b6a,	// (0x00033e92) set_opt_bg_pane_g8

0x5b72,	// (0x00033e9a) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0003dcd4) set_opt_bg_pane_g

0x5b4d,	// (0x00033e75) slider_set_pane_g1

0x8e78,	// (0x000371a0) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0003dcc5) slider_set_pane_g

0x8e14,	// (0x0003713c) volume_set_pane_g1

0x8e1c,	// (0x00037144) volume_set_pane_g2

0x8e24,	// (0x0003714c) volume_set_pane_g3

0x8e2c,	// (0x00037154) volume_set_pane_g4

0x8e34,	// (0x0003715c) volume_set_pane_g5

0x8e3c,	// (0x00037164) volume_set_pane_g6

0x8e44,	// (0x0003716c) volume_set_pane_g7

0x8e4c,	// (0x00037174) volume_set_pane_g8

0x8e54,	// (0x0003717c) volume_set_pane_g9

0x8e5c,	// (0x00037184) volume_set_pane_g10

0x0009,

0xf975,	// (0x0003dc9d) volume_set_pane_g

0x0349,	// (0x0002e671) indicator_pane_ParamLimits

0x0349,	// (0x0002e671) indicator_pane

0x0371,	// (0x0002e699) main_idle_pane_g2_ParamLimits

0x0371,	// (0x0002e699) main_idle_pane_g2

0x0a04,	// (0x0002ed2c) main_pane_idle_g1_ParamLimits

0x0a04,	// (0x0002ed2c) main_pane_idle_g1

0x34a3,	// (0x000317cb) popup_clock_digital_analogue_window_ParamLimits

0x34a3,	// (0x000317cb) popup_clock_digital_analogue_window

0x0a2b,	// (0x0002ed53) soft_indicator_pane_ParamLimits

0x0a2b,	// (0x0002ed53) soft_indicator_pane

0x0a45,	// (0x0002ed6d) wallpaper_pane_ParamLimits

0x0a45,	// (0x0002ed6d) wallpaper_pane

0x3418,	// (0x00031740) wallpaper_pane_g1

0x0a57,	// (0x0002ed7f) indicator_pane_g1_ParamLimits

0x0a57,	// (0x0002ed7f) indicator_pane_g1

0x5cc1,	// (0x00033fe9) navi_navi_icon_text_pane_srt_g1

0x34d1,	// (0x000317f9) soft_indicator_pane_t1

0x34eb,	// (0x00031813) aid_ps_area_pane

0x0a70,	// (0x0002ed98) aid_ps_clock_pane

0x34fc,	// (0x00031824) aid_ps_indicator_pane

0x3508,	// (0x00031830) indicator_ps_pane_ParamLimits

0x3508,	// (0x00031830) indicator_ps_pane

0x3517,	// (0x0003183f) power_save_pane_g1_ParamLimits

0x3517,	// (0x0003183f) power_save_pane_g1

0x3523,	// (0x0003184b) power_save_pane_g2_ParamLimits

0x3523,	// (0x0003184b) power_save_pane_g2

0x7be4,	// (0x00035f0c) aid_navinavi_width_pane

0x34eb,	// (0x00031813) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0003d8d6) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0003d8d6) power_save_pane_g

0x3531,	// (0x00031859) power_save_pane_t1_ParamLimits

0x3531,	// (0x00031859) power_save_pane_t1

0x0a70,	// (0x0002ed98) aid_ps_clock_pane_ParamLimits

0x34fc,	// (0x00031824) aid_ps_indicator_pane_ParamLimits

0x3543,	// (0x0003186b) power_save_pane_t4_ParamLimits

0x3543,	// (0x0003186b) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003d8db) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003d8db) power_save_pane_t

0x356d,	// (0x00031895) power_save_t3_ParamLimits

0x356d,	// (0x00031895) power_save_t3

0x3558,	// (0x00031880) power_save_t2_ParamLimits

0x3558,	// (0x00031880) power_save_t2

0x3582,	// (0x000318aa) indicator_ps_pane_g1

0x0a7e,	// (0x0002eda6) ai_gene_pane_ParamLimits

0x0a7e,	// (0x0002eda6) ai_gene_pane

0x0a95,	// (0x0002edbd) ai_links_pane_ParamLimits

0x0a95,	// (0x0002edbd) ai_links_pane

0x0aad,	// (0x0002edd5) indicator_pane_cp1_ParamLimits

0x0aad,	// (0x0002edd5) indicator_pane_cp1

0x0abc,	// (0x0002ede4) main_pane_idle_g1_cp_ParamLimits

0x0abc,	// (0x0002ede4) main_pane_idle_g1_cp

0x358b,	// (0x000318b3) popup_ai_links_title_window

0x0ad4,	// (0x0002edfc) soft_indicator_pane_cp1_ParamLimits

0x0ad4,	// (0x0002edfc) soft_indicator_pane_cp1

0x59a1,	// (0x00033cc9) ai_links_pane_g1

0x59aa,	// (0x00033cd2) grid_ai_links_pane

0x1bab,	// (0x0002fed3) ai_gene_pane_1

0x598f,	// (0x00033cb7) ai_gene_pane_2

0x5998,	// (0x00033cc0) list_highlight_pane_cp4

0x1b87,	// (0x0002feaf) cell_ai_link_pane_ParamLimits

0x1b87,	// (0x0002feaf) cell_ai_link_pane

0x5969,	// (0x00033c91) cell_ai_link_pane_g1

0x3739,	// (0x00031a61) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0003dc78) cell_ai_link_pane_g

0x3422,	// (0x0003174a) grid_highlight_cp2

0x3422,	// (0x0003174a) bg_popup_sub_pane_cp1

0x35a2,	// (0x000318ca) popup_ai_links_title_window_t1

0x58b7,	// (0x00033bdf) ai_gene_pane_1_g1_ParamLimits

0x58b7,	// (0x00033bdf) ai_gene_pane_1_g1

0x58c3,	// (0x00033beb) ai_gene_pane_1_g2_ParamLimits

0x58c3,	// (0x00033beb) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0003dc6e) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0003dc6e) ai_gene_pane_1_g

0x58d0,	// (0x00033bf8) ai_gene_pane_1_t1_ParamLimits

0x58d0,	// (0x00033bf8) ai_gene_pane_1_t1

0x5904,	// (0x00033c2c) grid_ai_soft_ind_pane

0x58a2,	// (0x00033bca) ai_gene_pane_2_t1_ParamLimits

0x58a2,	// (0x00033bca) ai_gene_pane_2_t1

0x0ae8,	// (0x0002ee10) main_pane_empty_t1_ParamLimits

0x0ae8,	// (0x0002ee10) main_pane_empty_t1

0x0b00,	// (0x0002ee28) main_pane_empty_t2_ParamLimits

0x0b00,	// (0x0002ee28) main_pane_empty_t2

0x0b15,	// (0x0002ee3d) main_pane_empty_t3_ParamLimits

0x0b15,	// (0x0002ee3d) main_pane_empty_t3

0x0b27,	// (0x0002ee4f) main_pane_empty_t4_ParamLimits

0x0b27,	// (0x0002ee4f) main_pane_empty_t4

0x0b39,	// (0x0002ee61) main_pane_empty_t5_ParamLimits

0x0b39,	// (0x0002ee61) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003d8e0) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003d8e0) main_pane_empty_t

0x3b7d,	// (0x00031ea5) bg_popup_window_pane_ParamLimits

0x3b7d,	// (0x00031ea5) bg_popup_window_pane

0x5662,	// (0x0003398a) find_popup_pane_cp2_ParamLimits

0x5662,	// (0x0003398a) find_popup_pane_cp2

0x566e,	// (0x00033996) heading_pane_ParamLimits

0x566e,	// (0x00033996) heading_pane

0x3422,	// (0x0003174a) bg_popup_sub_pane

0x1ab6,	// (0x0002fdde) bg_popup_window_pane_g1_ParamLimits

0x1ab6,	// (0x0002fdde) bg_popup_window_pane_g1

0x1ac5,	// (0x0002fded) bg_popup_window_pane_g2_ParamLimits

0x1ac5,	// (0x0002fded) bg_popup_window_pane_g2

0x1ad1,	// (0x0002fdf9) bg_popup_window_pane_g3_ParamLimits

0x1ad1,	// (0x0002fdf9) bg_popup_window_pane_g3

0x1add,	// (0x0002fe05) bg_popup_window_pane_g4_ParamLimits

0x1add,	// (0x0002fe05) bg_popup_window_pane_g4

0x1aec,	// (0x0002fe14) bg_popup_window_pane_g5_ParamLimits

0x1aec,	// (0x0002fe14) bg_popup_window_pane_g5

0x1afc,	// (0x0002fe24) bg_popup_window_pane_g6_ParamLimits

0x1afc,	// (0x0002fe24) bg_popup_window_pane_g6

0x1b08,	// (0x0002fe30) bg_popup_window_pane_g7_ParamLimits

0x1b08,	// (0x0002fe30) bg_popup_window_pane_g7

0x1b17,	// (0x0002fe3f) bg_popup_window_pane_g8_ParamLimits

0x1b17,	// (0x0002fe3f) bg_popup_window_pane_g8

0x1b26,	// (0x0002fe4e) bg_popup_window_pane_g9_ParamLimits

0x1b26,	// (0x0002fe4e) bg_popup_window_pane_g9

0x5648,	// (0x00033970) bg_popup_window_pane_g10_ParamLimits

0x5648,	// (0x00033970) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0003dc36) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0003dc36) bg_popup_window_pane_g

0x55ff,	// (0x00033927) bg_popup_heading_pane_ParamLimits

0x55ff,	// (0x00033927) bg_popup_heading_pane

0x8fb6,	// (0x000372de) tabs_4_passive_pane_cp_srt_ParamLimits

0x8fb6,	// (0x000372de) tabs_4_passive_pane_cp_srt

0x8fc8,	// (0x000372f0) tabs_4_passive_pane_srt_ParamLimits

0x5613,	// (0x0003393b) heading_pane_g2

0x8fc8,	// (0x000372f0) tabs_4_passive_pane_srt

0x4b3f,	// (0x00032e67) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4b3f,	// (0x00032e67) bg_passive_tab_pane_cp3_srt

0x561b,	// (0x00033943) heading_pane_t1_ParamLimits

0x561b,	// (0x00033943) heading_pane_t1

0x5632,	// (0x0003395a) heading_pane_t2_ParamLimits

0x5632,	// (0x0003395a) heading_pane_t2

0x0001,

0xf909,	// (0x0003dc31) heading_pane_t_ParamLimits

0xf909,	// (0x0003dc31) heading_pane_t

0x5158,	// (0x00033480) bg_popup_heading_pane_g1

0x51e9,	// (0x00033511) bg_popup_heading_pane_g2

0x51f3,	// (0x0003351b) bg_popup_heading_pane_g3

0x51fd,	// (0x00033525) bg_popup_heading_pane_g4

0x5207,	// (0x0003352f) bg_popup_heading_pane_g5

0x5211,	// (0x00033539) bg_popup_heading_pane_g6

0x5219,	// (0x00033541) bg_popup_heading_pane_g7

0x5221,	// (0x00033549) bg_popup_heading_pane_g8

0x522b,	// (0x00033553) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0003dbed) bg_popup_heading_pane_g

0x4a4f,	// (0x00032d77) bg_popup_sub_pane_g1

0x4a5f,	// (0x00032d87) bg_popup_sub_pane_g2

0x4a57,	// (0x00032d7f) bg_popup_sub_pane_g3

0x4a6f,	// (0x00032d97) bg_popup_sub_pane_g4

0x4a67,	// (0x00032d8f) bg_popup_sub_pane_g5

0x4a77,	// (0x00032d9f) bg_popup_sub_pane_g6

0x4a7f,	// (0x00032da7) bg_popup_sub_pane_g7

0x4a8f,	// (0x00032db7) bg_popup_sub_pane_g8

0x4a87,	// (0x00032daf) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0003dbc7) bg_popup_sub_pane_g

0x3470,	// (0x00031798) bg_popup_window_pane_cp5_ParamLimits

0x3470,	// (0x00031798) bg_popup_window_pane_cp5

0x35bf,	// (0x000318e7) popup_note_window_g1_ParamLimits

0x35bf,	// (0x000318e7) popup_note_window_g1

0x35cb,	// (0x000318f3) popup_note_window_t1_ParamLimits

0x35cb,	// (0x000318f3) popup_note_window_t1

0x35dd,	// (0x00031905) popup_note_window_t2_ParamLimits

0x35dd,	// (0x00031905) popup_note_window_t2

0x35ef,	// (0x00031917) popup_note_window_t3_ParamLimits

0x35ef,	// (0x00031917) popup_note_window_t3

0x3601,	// (0x00031929) popup_note_window_t4_ParamLimits

0x3601,	// (0x00031929) popup_note_window_t4

0x3629,	// (0x00031951) popup_note_window_t5_ParamLimits

0x3629,	// (0x00031951) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003d8eb) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003d8eb) popup_note_window_t

0x364d,	// (0x00031975) bg_popup_window_pane_cp6_ParamLimits

0x364d,	// (0x00031975) bg_popup_window_pane_cp6

0x50cc,	// (0x000333f4) popup_note_image_window_g1_ParamLimits

0x50cc,	// (0x000333f4) popup_note_image_window_g1

0x50d8,	// (0x00033400) popup_note_image_window_g2_ParamLimits

0x50d8,	// (0x00033400) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0003dbbb) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0003dbbb) popup_note_image_window_g

0x50f1,	// (0x00033419) popup_note_image_window_t1_ParamLimits

0x50f1,	// (0x00033419) popup_note_image_window_t1

0x510a,	// (0x00033432) popup_note_image_window_t2_ParamLimits

0x510a,	// (0x00033432) popup_note_image_window_t2

0x5123,	// (0x0003344b) popup_note_image_window_t3_ParamLimits

0x5123,	// (0x0003344b) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0003dbc0) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0003dbc0) popup_note_image_window_t

0x4fa9,	// (0x000332d1) bg_popup_window_pane_cp7_ParamLimits

0x4fa9,	// (0x000332d1) bg_popup_window_pane_cp7

0x4fd9,	// (0x00033301) popup_note_wait_window_g1_ParamLimits

0x4fd9,	// (0x00033301) popup_note_wait_window_g1

0x4fe5,	// (0x0003330d) popup_note_wait_window_g2_ParamLimits

0x4fe5,	// (0x0003330d) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0003dba9) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0003dba9) popup_note_wait_window_g

0x4ffd,	// (0x00033325) popup_note_wait_window_t1_ParamLimits

0x4ffd,	// (0x00033325) popup_note_wait_window_t1

0x5024,	// (0x0003334c) popup_note_wait_window_t2_ParamLimits

0x5024,	// (0x0003334c) popup_note_wait_window_t2

0x5041,	// (0x00033369) popup_note_wait_window_t3_ParamLimits

0x5041,	// (0x00033369) popup_note_wait_window_t3

0x5054,	// (0x0003337c) popup_note_wait_window_t4_ParamLimits

0x5054,	// (0x0003337c) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0003dbb0) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0003dbb0) popup_note_wait_window_t

0x5079,	// (0x000333a1) wait_bar_pane_ParamLimits

0x5079,	// (0x000333a1) wait_bar_pane

0x3422,	// (0x0003174a) wait_anim_pane

0x3422,	// (0x0003174a) wait_border_pane

0x3418,	// (0x00031740) wait_anim_pane_g1

0x3418,	// (0x00031740) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0003da74) wait_anim_pane_g

0x4f4d,	// (0x00033275) wait_border_pane_g1

0x4f58,	// (0x00033280) wait_border_pane_g2

0x4f61,	// (0x00033289) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0003dba2) wait_border_pane_g

0x4eaf,	// (0x000331d7) bg_popup_window_pane_cp16_ParamLimits

0x4eaf,	// (0x000331d7) bg_popup_window_pane_cp16

0x4ebd,	// (0x000331e5) indicator_popup_pane_cp4_ParamLimits

0x4ebd,	// (0x000331e5) indicator_popup_pane_cp4

0x4ed1,	// (0x000331f9) popup_query_data_window_t1_ParamLimits

0x4ed1,	// (0x000331f9) popup_query_data_window_t1

0x4ee3,	// (0x0003320b) popup_query_data_window_t2_ParamLimits

0x4ee3,	// (0x0003320b) popup_query_data_window_t2

0x4efc,	// (0x00033224) popup_query_data_window_t3_ParamLimits

0x4efc,	// (0x00033224) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0003db9b) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0003db9b) popup_query_data_window_t

0x4f16,	// (0x0003323e) query_popup_data_pane_ParamLimits

0x4f16,	// (0x0003323e) query_popup_data_pane

0x4f2a,	// (0x00033252) query_popup_data_pane_cp1_ParamLimits

0x4f2a,	// (0x00033252) query_popup_data_pane_cp1

0x364d,	// (0x00031975) bg_popup_window_pane_cp10_ParamLimits

0x364d,	// (0x00031975) bg_popup_window_pane_cp10

0x4e12,	// (0x0003313a) indicator_popup_pane_ParamLimits

0x4e12,	// (0x0003313a) indicator_popup_pane

0x36a4,	// (0x000319cc) popup_query_code_window_t1_ParamLimits

0x36a4,	// (0x000319cc) popup_query_code_window_t1

0x4e2a,	// (0x00033152) popup_query_code_window_t2_ParamLimits

0x4e2a,	// (0x00033152) popup_query_code_window_t2

0x4e68,	// (0x00033190) popup_query_code_window_t3_ParamLimits

0x4e68,	// (0x00033190) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0003db94) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0003db94) popup_query_code_window_t

0x4e97,	// (0x000331bf) query_popup_pane_ParamLimits

0x4e97,	// (0x000331bf) query_popup_pane

0x364d,	// (0x00031975) bg_popup_window_pane_cp15_ParamLimits

0x364d,	// (0x00031975) bg_popup_window_pane_cp15

0x366b,	// (0x00031993) indicator_popup_pane_cp1_ParamLimits

0x366b,	// (0x00031993) indicator_popup_pane_cp1

0x367e,	// (0x000319a6) indicator_popup_pane_cp2_ParamLimits

0x367e,	// (0x000319a6) indicator_popup_pane_cp2

0x3691,	// (0x000319b9) popup_query_data_code_window_g1_ParamLimits

0x3691,	// (0x000319b9) popup_query_data_code_window_g1

0x36a4,	// (0x000319cc) popup_query_data_code_window_t1_ParamLimits

0x36a4,	// (0x000319cc) popup_query_data_code_window_t1

0x36b6,	// (0x000319de) popup_query_data_code_window_t2_ParamLimits

0x36b6,	// (0x000319de) popup_query_data_code_window_t2

0x36c8,	// (0x000319f0) popup_query_data_code_window_t3_ParamLimits

0x36c8,	// (0x000319f0) popup_query_data_code_window_t3

0x36de,	// (0x00031a06) popup_query_data_code_window_t4_ParamLimits

0x36de,	// (0x00031a06) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003d8f6) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003d8f6) popup_query_data_code_window_t

0x4327,	// (0x0003264f) list_single_midp_graphic_pane_g3

0x36f6,	// (0x00031a1e) query_popup_data_pane_cp2_ParamLimits

0x3709,	// (0x00031a31) query_popup_pane_cp2_ParamLimits

0x3709,	// (0x00031a31) query_popup_pane_cp2

0x3422,	// (0x0003174a) bg_popup_window_pane_cp11

0x4de6,	// (0x0003310e) heading_pane_cp5

0x3797,	// (0x00031abf) listscroll_popup_info_pane

0x3422,	// (0x0003174a) input_focus_pane_cp3

0x371c,	// (0x00031a44) query_popup_pane_t1

0x372a,	// (0x00031a52) list_popup_info_pane_ParamLimits

0x372a,	// (0x00031a52) list_popup_info_pane

0x3739,	// (0x00031a61) listscroll_popup_info_pane_g1

0x3741,	// (0x00031a69) scroll_pane_cp7

0x374b,	// (0x00031a73) popup_info_list_pane_t1_ParamLimits

0x374b,	// (0x00031a73) popup_info_list_pane_t1

0x3765,	// (0x00031a8d) popup_info_list_pane_t2_ParamLimits

0x3765,	// (0x00031a8d) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003d8ff) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003d8ff) popup_info_list_pane_t

0x3422,	// (0x0003174a) bg_popup_window_pane_cp12

0x5cdb,	// (0x00034003) find_popup_pane

0x347e,	// (0x000317a6) bg_popup_window_pane_cp3

0x377f,	// (0x00031aa7) heading_pane_cp3

0x378b,	// (0x00031ab3) listscroll_popup_graphic_pane

0x3422,	// (0x0003174a) bg_popup_window_pane_cp4

0x0b9b,	// (0x0002eec3) heading_pane_cp4

0x3797,	// (0x00031abf) listscroll_popup_colour_pane

0x379f,	// (0x00031ac7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x379f,	// (0x00031ac7) cell_large_graphic_colour_none_popup_pane

0x0ba3,	// (0x0002eecb) grid_large_graphic_colour_popup_pane_ParamLimits

0x0ba3,	// (0x0002eecb) grid_large_graphic_colour_popup_pane

0x37b3,	// (0x00031adb) listscroll_popup_colour_pane_g1_ParamLimits

0x37b3,	// (0x00031adb) listscroll_popup_colour_pane_g1

0x37ca,	// (0x00031af2) listscroll_popup_colour_pane_g2_ParamLimits

0x37ca,	// (0x00031af2) listscroll_popup_colour_pane_g2

0x37e1,	// (0x00031b09) listscroll_popup_colour_pane_g3_ParamLimits

0x37e1,	// (0x00031b09) listscroll_popup_colour_pane_g3

0x0bc7,	// (0x0002eeef) listscroll_popup_colour_pane_g4_ParamLimits

0x0bc7,	// (0x0002eeef) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003d904) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003d904) listscroll_popup_colour_pane_g

0x37f1,	// (0x00031b19) scroll_pane_cp6_ParamLimits

0x37f1,	// (0x00031b19) scroll_pane_cp6

0x0bd6,	// (0x0002eefe) cell_large_graphic_colour_popup_pane_ParamLimits

0x0bd6,	// (0x0002eefe) cell_large_graphic_colour_popup_pane

0x3803,	// (0x00031b2b) cell_large_graphic_colour_none_popup_pane_t1

0x3422,	// (0x0003174a) grid_highlight_pane_cp5

0x3812,	// (0x00031b3a) cell_large_graphic_colour_popup_pane_g1

0x381a,	// (0x00031b42) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003d90d) cell_large_graphic_colour_popup_pane_g

0x3822,	// (0x00031b4a) cell_large_graphic_colour_popup_pane_g2_copy1

0x382b,	// (0x00031b53) grid_highlight_pane_cp4

0x3833,	// (0x00031b5b) bg_popup_window_pane_cp8_ParamLimits

0x3833,	// (0x00031b5b) bg_popup_window_pane_cp8

0x384e,	// (0x00031b76) popup_snote_single_text_window_g1_ParamLimits

0x384e,	// (0x00031b76) popup_snote_single_text_window_g1

0x3860,	// (0x00031b88) popup_snote_single_text_window_t1_ParamLimits

0x3860,	// (0x00031b88) popup_snote_single_text_window_t1

0x3873,	// (0x00031b9b) popup_snote_single_text_window_t2_ParamLimits

0x3873,	// (0x00031b9b) popup_snote_single_text_window_t2

0x3886,	// (0x00031bae) popup_snote_single_text_window_t3_ParamLimits

0x3886,	// (0x00031bae) popup_snote_single_text_window_t3

0x38bf,	// (0x00031be7) popup_snote_single_text_window_t4_ParamLimits

0x38bf,	// (0x00031be7) popup_snote_single_text_window_t4

0x38f3,	// (0x00031c1b) popup_snote_single_text_window_t5_ParamLimits

0x38f3,	// (0x00031c1b) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0003d912) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0003d912) popup_snote_single_text_window_t

0x3922,	// (0x00031c4a) bg_popup_window_pane_cp9_ParamLimits

0x3922,	// (0x00031c4a) bg_popup_window_pane_cp9

0x384e,	// (0x00031b76) popup_snote_single_graphic_window_g1_ParamLimits

0x384e,	// (0x00031b76) popup_snote_single_graphic_window_g1

0x3930,	// (0x00031c58) popup_snote_single_graphic_window_g2_ParamLimits

0x3930,	// (0x00031c58) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003d91d) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003d91d) popup_snote_single_graphic_window_g

0x393c,	// (0x00031c64) popup_snote_single_graphic_window_t1_ParamLimits

0x393c,	// (0x00031c64) popup_snote_single_graphic_window_t1

0x394f,	// (0x00031c77) popup_snote_single_graphic_window_t2_ParamLimits

0x394f,	// (0x00031c77) popup_snote_single_graphic_window_t2

0x3962,	// (0x00031c8a) popup_snote_single_graphic_window_t3_ParamLimits

0x3962,	// (0x00031c8a) popup_snote_single_graphic_window_t3

0x399b,	// (0x00031cc3) popup_snote_single_graphic_window_t4_ParamLimits

0x399b,	// (0x00031cc3) popup_snote_single_graphic_window_t4

0x39cf,	// (0x00031cf7) popup_snote_single_graphic_window_t5_ParamLimits

0x39cf,	// (0x00031cf7) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0003d922) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0003d922) popup_snote_single_graphic_window_t

0x5c5f,	// (0x00033f87) grid_graphic_popup_pane_ParamLimits

0x5c5f,	// (0x00033f87) grid_graphic_popup_pane

0x5c8b,	// (0x00033fb3) listscroll_popup_graphic_pane_g1_ParamLimits

0x5c8b,	// (0x00033fb3) listscroll_popup_graphic_pane_g1

0x1e76,	// (0x0003019e) listscroll_popup_graphic_pane_g2_ParamLimits

0x1e76,	// (0x0003019e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0003dd11) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0003dd11) listscroll_popup_graphic_pane_g

0x5983,	// (0x00033cab) scroll_pane_cp5

0x1e39,	// (0x00030161) cell_graphic_popup_pane_ParamLimits

0x1e39,	// (0x00030161) cell_graphic_popup_pane

0x5c2a,	// (0x00033f52) cell_graphic_popup_pane_g1

0x5c32,	// (0x00033f5a) cell_graphic_popup_pane_g2

0x3822,	// (0x00031b4a) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0003dd0a) cell_graphic_popup_pane_g

0x5c3b,	// (0x00033f63) cell_graphic_popup_pane_t2

0x382b,	// (0x00031b53) grid_highlight_pane_cp3

0x3a10,	// (0x00031d38) list_gen_pane_ParamLimits

0x3a10,	// (0x00031d38) list_gen_pane

0x3a38,	// (0x00031d60) scroll_pane

0x1df4,	// (0x0003011c) bg_list_pane_g1_ParamLimits

0x1df4,	// (0x0003011c) bg_list_pane_g1

0x5bd9,	// (0x00033f01) bg_list_pane_g2_ParamLimits

0x5bd9,	// (0x00033f01) bg_list_pane_g2

0x5bec,	// (0x00033f14) bg_list_pane_g3_ParamLimits

0x5bec,	// (0x00033f14) bg_list_pane_g3

0x5bfe,	// (0x00033f26) bg_list_pane_g4_ParamLimits

0x5bfe,	// (0x00033f26) bg_list_pane_g4

0x1e0f,	// (0x00030137) bg_list_pane_g5_ParamLimits

0x1e0f,	// (0x00030137) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0003dcff) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0003dcff) bg_list_pane_g

0x1da7,	// (0x000300cf) list_double2_graphic_large_graphic_pane_ParamLimits

0x1da7,	// (0x000300cf) list_double2_graphic_large_graphic_pane

0x1da7,	// (0x000300cf) list_double2_graphic_pane_ParamLimits

0x1da7,	// (0x000300cf) list_double2_graphic_pane

0x1da7,	// (0x000300cf) list_double2_large_graphic_pane_ParamLimits

0x1da7,	// (0x000300cf) list_double2_large_graphic_pane

0x1da7,	// (0x000300cf) list_double2_pane_ParamLimits

0x1da7,	// (0x000300cf) list_double2_pane

0x1da7,	// (0x000300cf) list_double_graphic_heading_pane_ParamLimits

0x1da7,	// (0x000300cf) list_double_graphic_heading_pane

0x1da7,	// (0x000300cf) list_double_graphic_pane_ParamLimits

0x1da7,	// (0x000300cf) list_double_graphic_pane

0x1da7,	// (0x000300cf) list_double_heading_pane_ParamLimits

0x1da7,	// (0x000300cf) list_double_heading_pane

0x1da7,	// (0x000300cf) list_double_large_graphic_pane_ParamLimits

0x1da7,	// (0x000300cf) list_double_large_graphic_pane

0x1da7,	// (0x000300cf) list_double_number_pane_ParamLimits

0x1da7,	// (0x000300cf) list_double_number_pane

0x1da7,	// (0x000300cf) list_double_pane_ParamLimits

0x1da7,	// (0x000300cf) list_double_pane

0x1da7,	// (0x000300cf) list_double_time_pane_ParamLimits

0x1da7,	// (0x000300cf) list_double_time_pane

0x1da7,	// (0x000300cf) list_setting_number_pane_ParamLimits

0x1da7,	// (0x000300cf) list_setting_number_pane

0x1da7,	// (0x000300cf) list_setting_pane_ParamLimits

0x1da7,	// (0x000300cf) list_setting_pane

0x1dba,	// (0x000300e2) list_single_2graphic_pane_ParamLimits

0x1dba,	// (0x000300e2) list_single_2graphic_pane

0x1dba,	// (0x000300e2) list_single_graphic_heading_pane_ParamLimits

0x1dba,	// (0x000300e2) list_single_graphic_heading_pane

0x1dba,	// (0x000300e2) list_single_graphic_pane_ParamLimits

0x1dba,	// (0x000300e2) list_single_graphic_pane

0x1dba,	// (0x000300e2) list_single_heading_pane_ParamLimits

0x1dba,	// (0x000300e2) list_single_heading_pane

0x1dba,	// (0x000300e2) list_single_large_graphic_pane_ParamLimits

0x1dba,	// (0x000300e2) list_single_large_graphic_pane

0x1dba,	// (0x000300e2) list_single_number_heading_pane_ParamLimits

0x1dba,	// (0x000300e2) list_single_number_heading_pane

0x1dba,	// (0x000300e2) list_single_number_pane_ParamLimits

0x1dba,	// (0x000300e2) list_single_number_pane

0x1dba,	// (0x000300e2) list_single_pane_ParamLimits

0x1dba,	// (0x000300e2) list_single_pane

0x3422,	// (0x0003174a) list_highlight_pane_cp1

0x82f0,	// (0x00036618) list_single_pane_g1_ParamLimits

0x82f0,	// (0x00036618) list_single_pane_g1

0x82fc,	// (0x00036624) list_single_pane_g2_ParamLimits

0x82fc,	// (0x00036624) list_single_pane_g2

0x0001,

0xf616,	// (0x0003d93e) list_single_pane_g_ParamLimits

0xf616,	// (0x0003d93e) list_single_pane_g

0x7704,	// (0x00035a2c) list_single_pane_t1_ParamLimits

0x7704,	// (0x00035a2c) list_single_pane_t1

0x82f0,	// (0x00036618) list_single_number_pane_g1_ParamLimits

0x82f0,	// (0x00036618) list_single_number_pane_g1

0x82fc,	// (0x00036624) list_single_number_pane_g2_ParamLimits

0x82fc,	// (0x00036624) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0003d93e) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0003d93e) list_single_number_pane_g

0x7583,	// (0x000358ab) list_single_number_pane_t1_ParamLimits

0x7583,	// (0x000358ab) list_single_number_pane_t1

0xe9e3,	// (0x0003cd0b) list_single_number_pane_t2_ParamLimits

0xe9e3,	// (0x0003cd0b) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0003dcc0) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0003dcc0) list_single_number_pane_t

0xe455,	// (0x0003c77d) list_single_graphic_pane_g1_ParamLimits

0xe455,	// (0x0003c77d) list_single_graphic_pane_g1

0x82f0,	// (0x00036618) list_single_graphic_pane_g2_ParamLimits

0x82f0,	// (0x00036618) list_single_graphic_pane_g2

0x82fc,	// (0x00036624) list_single_graphic_pane_g3_ParamLimits

0x82fc,	// (0x00036624) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003d92d) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003d92d) list_single_graphic_pane_g

0xe461,	// (0x0003c789) list_single_graphic_pane_t1_ParamLimits

0xe461,	// (0x0003c789) list_single_graphic_pane_t1

0xe477,	// (0x0003c79f) list_single_heading_pane_g1_ParamLimits

0xe477,	// (0x0003c79f) list_single_heading_pane_g1

0x82fc,	// (0x00036624) list_single_heading_pane_g2_ParamLimits

0x82fc,	// (0x00036624) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003d934) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003d934) list_single_heading_pane_g

0xe48a,	// (0x0003c7b2) list_single_heading_pane_t1_ParamLimits

0xe48a,	// (0x0003c7b2) list_single_heading_pane_t1

0xe4a0,	// (0x0003c7c8) list_single_heading_pane_t2_ParamLimits

0xe4a0,	// (0x0003c7c8) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003d939) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003d939) list_single_heading_pane_t

0x82f0,	// (0x00036618) list_single_number_heading_pane_g1_ParamLimits

0x82f0,	// (0x00036618) list_single_number_heading_pane_g1

0x82fc,	// (0x00036624) list_single_number_heading_pane_g2_ParamLimits

0x82fc,	// (0x00036624) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0003d93e) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0003d93e) list_single_number_heading_pane_g

0x771a,	// (0x00035a42) list_single_number_heading_pane_t1_ParamLimits

0x771a,	// (0x00035a42) list_single_number_heading_pane_t1

0xe4b2,	// (0x0003c7da) list_single_number_heading_pane_t2_ParamLimits

0xe4b2,	// (0x0003c7da) list_single_number_heading_pane_t2

0x76de,	// (0x00035a06) list_single_number_heading_pane_t3_ParamLimits

0x76de,	// (0x00035a06) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0003d943) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0003d943) list_single_number_heading_pane_t

0xe4c4,	// (0x0003c7ec) list_single_graphic_heading_pane_g1_ParamLimits

0xe4c4,	// (0x0003c7ec) list_single_graphic_heading_pane_g1

0xecf7,	// (0x0003d01f) list_single_graphic_heading_pane_g4_ParamLimits

0xecf7,	// (0x0003d01f) list_single_graphic_heading_pane_g4

0x82fc,	// (0x00036624) list_single_graphic_heading_pane_g5_ParamLimits

0x82fc,	// (0x00036624) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0003d94a) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003d94a) list_single_graphic_heading_pane_g

0x771a,	// (0x00035a42) list_single_graphic_heading_pane_t1_ParamLimits

0x771a,	// (0x00035a42) list_single_graphic_heading_pane_t1

0xe4d8,	// (0x0003c800) list_single_graphic_heading_pane_t2_ParamLimits

0xe4d8,	// (0x0003c800) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003d951) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003d951) list_single_graphic_heading_pane_t

0x90ac,	// (0x000373d4) list_single_large_graphic_pane_g1_ParamLimits

0x90ac,	// (0x000373d4) list_single_large_graphic_pane_g1

0x82f0,	// (0x00036618) list_single_large_graphic_pane_g2_ParamLimits

0x82f0,	// (0x00036618) list_single_large_graphic_pane_g2

0x82fc,	// (0x00036624) list_single_large_graphic_pane_g3_ParamLimits

0x82fc,	// (0x00036624) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0003d956) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0003d956) list_single_large_graphic_pane_g

0x4f58,	// (0x00033280) wait_border_pane_g2_copy1

0xed08,	// (0x0003d030) list_single_large_graphic_pane_g4_cp2

0x771a,	// (0x00035a42) list_single_large_graphic_pane_t1_ParamLimits

0x771a,	// (0x00035a42) list_single_large_graphic_pane_t1

0x8343,	// (0x0003666b) list_double_pane_g1_ParamLimits

0x8343,	// (0x0003666b) list_double_pane_g1

0x834f,	// (0x00036677) list_double_pane_g2_ParamLimits

0x834f,	// (0x00036677) list_double_pane_g2

0x0001,

0xf635,	// (0x0003d95d) list_double_pane_g_ParamLimits

0xf635,	// (0x0003d95d) list_double_pane_g

0xe4f0,	// (0x0003c818) list_double_pane_t1_ParamLimits

0xe4f0,	// (0x0003c818) list_double_pane_t1

0xe506,	// (0x0003c82e) list_double_pane_t2_ParamLimits

0xe506,	// (0x0003c82e) list_double_pane_t2

0x0001,

0xf63a,	// (0x0003d962) list_double_pane_t_ParamLimits

0xf63a,	// (0x0003d962) list_double_pane_t

0xe518,	// (0x0003c840) list_double2_pane_g1_ParamLimits

0xe518,	// (0x0003c840) list_double2_pane_g1

0x7123,	// (0x0003544b) list_double2_pane_g2_ParamLimits

0x7123,	// (0x0003544b) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0003d967) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0003d967) list_double2_pane_g

0xe529,	// (0x0003c851) list_double2_pane_t1_ParamLimits

0xe529,	// (0x0003c851) list_double2_pane_t1

0xe53f,	// (0x0003c867) list_double2_pane_t2_ParamLimits

0xe53f,	// (0x0003c867) list_double2_pane_t2

0x0001,

0xf644,	// (0x0003d96c) list_double2_pane_t_ParamLimits

0xf644,	// (0x0003d96c) list_double2_pane_t

0x8343,	// (0x0003666b) list_double_number_pane_g1_ParamLimits

0x8343,	// (0x0003666b) list_double_number_pane_g1

0x834f,	// (0x00036677) list_double_number_pane_g2_ParamLimits

0x834f,	// (0x00036677) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0003d95d) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0003d95d) list_double_number_pane_g

0xe551,	// (0x0003c879) list_double_number_pane_t1_ParamLimits

0xe551,	// (0x0003c879) list_double_number_pane_t1

0x6f96,	// (0x000352be) list_double_number_pane_t2_ParamLimits

0x6f96,	// (0x000352be) list_double_number_pane_t2

0xe563,	// (0x0003c88b) list_double_number_pane_t3_ParamLimits

0xe563,	// (0x0003c88b) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0003d971) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0003d971) list_double_number_pane_t

0x6f8a,	// (0x000352b2) list_double_graphic_pane_g1_ParamLimits

0x6f8a,	// (0x000352b2) list_double_graphic_pane_g1

0xed10,	// (0x0003d038) list_double_graphic_pane_g2_ParamLimits

0xed10,	// (0x0003d038) list_double_graphic_pane_g2

0xed1f,	// (0x0003d047) list_double_graphic_pane_g3_ParamLimits

0xed1f,	// (0x0003d047) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0003d978) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0003d978) list_double_graphic_pane_g

0xe575,	// (0x0003c89d) list_double_graphic_pane_t1_ParamLimits

0xe575,	// (0x0003c89d) list_double_graphic_pane_t1

0xe58b,	// (0x0003c8b3) list_double_graphic_pane_t2_ParamLimits

0xe58b,	// (0x0003c8b3) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0003d981) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0003d981) list_double_graphic_pane_t

0xe59d,	// (0x0003c8c5) list_double2_graphic_pane_g1_ParamLimits

0xe59d,	// (0x0003c8c5) list_double2_graphic_pane_g1

0x3adf,	// (0x00031e07) list_double2_graphic_pane_g2_ParamLimits

0x3adf,	// (0x00031e07) list_double2_graphic_pane_g2

0xed37,	// (0x0003d05f) list_double2_graphic_pane_g3_ParamLimits

0xed37,	// (0x0003d05f) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0003d986) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0003d986) list_double2_graphic_pane_g

0xe5a9,	// (0x0003c8d1) list_double2_graphic_pane_t1_ParamLimits

0xe5a9,	// (0x0003c8d1) list_double2_graphic_pane_t1

0xe5bf,	// (0x0003c8e7) list_double2_graphic_pane_t2_ParamLimits

0xe5bf,	// (0x0003c8e7) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0003d98d) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0003d98d) list_double2_graphic_pane_t

0xe5d1,	// (0x0003c8f9) list_double_large_graphic_pane_g1_ParamLimits

0xe5d1,	// (0x0003c8f9) list_double_large_graphic_pane_g1

0xe5f0,	// (0x0003c918) list_double_large_graphic_pane_g2_ParamLimits

0xe5f0,	// (0x0003c918) list_double_large_graphic_pane_g2

0x834f,	// (0x00036677) list_double_large_graphic_pane_g3_ParamLimits

0x834f,	// (0x00036677) list_double_large_graphic_pane_g3

0xe606,	// (0x0003c92e) list_double_large_graphic_pane_g4_ParamLimits

0xe606,	// (0x0003c92e) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0003d992) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0003d992) list_double_large_graphic_pane_g

0xe619,	// (0x0003c941) list_double_large_graphic_pane_t1_ParamLimits

0xe619,	// (0x0003c941) list_double_large_graphic_pane_t1

0xe632,	// (0x0003c95a) list_double_large_graphic_pane_t2_ParamLimits

0xe632,	// (0x0003c95a) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0003d99d) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0003d99d) list_double_large_graphic_pane_t

0xed43,	// (0x0003d06b) list_double2_large_graphic_pane_g1_ParamLimits

0xed43,	// (0x0003d06b) list_double2_large_graphic_pane_g1

0xed4f,	// (0x0003d077) list_double2_large_graphic_pane_g2_ParamLimits

0xed4f,	// (0x0003d077) list_double2_large_graphic_pane_g2

0xed37,	// (0x0003d05f) list_double2_large_graphic_pane_g3_ParamLimits

0xed37,	// (0x0003d05f) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0003d9a2) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0003d9a2) list_double2_large_graphic_pane_g

0xe644,	// (0x0003c96c) list_double2_large_graphic_pane_t1_ParamLimits

0xe644,	// (0x0003c96c) list_double2_large_graphic_pane_t1

0xe65a,	// (0x0003c982) list_double2_large_graphic_pane_t2_ParamLimits

0xe65a,	// (0x0003c982) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0003d9a9) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0003d9a9) list_double2_large_graphic_pane_t

0xe66c,	// (0x0003c994) list_double_heading_pane_g1_ParamLimits

0xe66c,	// (0x0003c994) list_double_heading_pane_g1

0xe67d,	// (0x0003c9a5) list_double_heading_pane_g2_ParamLimits

0xe67d,	// (0x0003c9a5) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0003d9ae) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0003d9ae) list_double_heading_pane_g

0xe689,	// (0x0003c9b1) list_double_heading_pane_t1_ParamLimits

0xe689,	// (0x0003c9b1) list_double_heading_pane_t1

0xe53f,	// (0x0003c867) list_double_heading_pane_t2_ParamLimits

0xe53f,	// (0x0003c867) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0003d9b3) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0003d9b3) list_double_heading_pane_t

0x6f4a,	// (0x00035272) list_double_graphic_heading_pane_g1_ParamLimits

0x6f4a,	// (0x00035272) list_double_graphic_heading_pane_g1

0xe66c,	// (0x0003c994) list_double_graphic_heading_pane_g2_ParamLimits

0xe66c,	// (0x0003c994) list_double_graphic_heading_pane_g2

0xe67d,	// (0x0003c9a5) list_double_graphic_heading_pane_g3_ParamLimits

0xe67d,	// (0x0003c9a5) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0003d9b8) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0003d9b8) list_double_graphic_heading_pane_g

0xe69f,	// (0x0003c9c7) list_double_graphic_heading_pane_t1_ParamLimits

0xe69f,	// (0x0003c9c7) list_double_graphic_heading_pane_t1

0xe5bf,	// (0x0003c8e7) list_double_graphic_heading_pane_t2_ParamLimits

0xe5bf,	// (0x0003c8e7) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0003d9bf) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0003d9bf) list_double_graphic_heading_pane_t

0xe6b5,	// (0x0003c9dd) list_double_time_pane_g1_ParamLimits

0xe6b5,	// (0x0003c9dd) list_double_time_pane_g1

0x6edc,	// (0x00035204) list_double_time_pane_g2_ParamLimits

0x6edc,	// (0x00035204) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0003d9c4) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0003d9c4) list_double_time_pane_g

0xe6c6,	// (0x0003c9ee) list_double_time_pane_t1_ParamLimits

0xe6c6,	// (0x0003c9ee) list_double_time_pane_t1

0xe6dc,	// (0x0003ca04) list_double_time_pane_t2_ParamLimits

0xe6dc,	// (0x0003ca04) list_double_time_pane_t2

0xe6ee,	// (0x0003ca16) list_double_time_pane_t3_ParamLimits

0xe6ee,	// (0x0003ca16) list_double_time_pane_t3

0xe700,	// (0x0003ca28) list_double_time_pane_t4_ParamLimits

0xe700,	// (0x0003ca28) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0003d9c9) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0003d9c9) list_double_time_pane_t

0x7117,	// (0x0003543f) list_setting_pane_g1_ParamLimits

0x7117,	// (0x0003543f) list_setting_pane_g1

0x7123,	// (0x0003544b) list_setting_pane_g2_ParamLimits

0x7123,	// (0x0003544b) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0003d9d2) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0003d9d2) list_setting_pane_g

0xe712,	// (0x0003ca3a) list_setting_pane_t1_ParamLimits

0xe712,	// (0x0003ca3a) list_setting_pane_t1

0xe72c,	// (0x0003ca54) list_setting_pane_t2_ParamLimits

0xe72c,	// (0x0003ca54) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0003d9d7) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0003d9d7) list_setting_pane_t

0xe769,	// (0x0003ca91) set_value_pane_cp_ParamLimits

0xe769,	// (0x0003ca91) set_value_pane_cp

0x7192,	// (0x000354ba) list_setting_number_pane_g1_ParamLimits

0x7192,	// (0x000354ba) list_setting_number_pane_g1

0x719e,	// (0x000354c6) list_setting_number_pane_g2_ParamLimits

0x719e,	// (0x000354c6) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0003d9de) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0003d9de) list_setting_number_pane_g

0xe775,	// (0x0003ca9d) list_setting_number_pane_t1_ParamLimits

0xe775,	// (0x0003ca9d) list_setting_number_pane_t1

0xe78e,	// (0x0003cab6) list_setting_number_pane_t2_ParamLimits

0xe78e,	// (0x0003cab6) list_setting_number_pane_t2

0xe7a8,	// (0x0003cad0) list_setting_number_pane_t3_ParamLimits

0xe7a8,	// (0x0003cad0) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0003d9e3) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0003d9e3) list_setting_number_pane_t

0xe769,	// (0x0003ca91) set_value_pane_ParamLimits

0xe769,	// (0x0003ca91) set_value_pane

0x3a6c,	// (0x00031d94) bg_set_opt_pane_ParamLimits

0x3a6c,	// (0x00031d94) bg_set_opt_pane

0x7220,	// (0x00035548) set_value_pane_t1

0x3a8d,	// (0x00031db5) slider_set_pane_cp3

0x3a96,	// (0x00031dbe) volume_small_pane_cp

0x3a9f,	// (0x00031dc7) list_form_gen_pane

0x3aa8,	// (0x00031dd0) scroll_pane_cp8

0xe7eb,	// (0x0003cb13) form_field_data_pane_ParamLimits

0xe7eb,	// (0x0003cb13) form_field_data_pane

0xe802,	// (0x0003cb2a) form_field_data_wide_pane_ParamLimits

0xe802,	// (0x0003cb2a) form_field_data_wide_pane

0xe822,	// (0x0003cb4a) form_field_popup_pane_ParamLimits

0xe822,	// (0x0003cb4a) form_field_popup_pane

0xe83a,	// (0x0003cb62) form_field_popup_wide_pane_ParamLimits

0xe83a,	// (0x0003cb62) form_field_popup_wide_pane

0x72b2,	// (0x000355da) form_field_slider_pane_ParamLimits

0x72b2,	// (0x000355da) form_field_slider_pane

0x72c5,	// (0x000355ed) form_field_slider_wide_pane_ParamLimits

0x72c5,	// (0x000355ed) form_field_slider_wide_pane

0x3ab9,	// (0x00031de1) data_form_pane

0xe861,	// (0x0003cb89) form_field_data_pane_t1

0x3ac5,	// (0x00031ded) input_focus_pane

0x3ad3,	// (0x00031dfb) data_form_wide_pane

0x7308,	// (0x00035630) form_field_data_wide_pane_t1

0x3840,	// (0x00031b68) input_focus_pane_cp6

0xe87b,	// (0x0003cba3) form_field_popup_pane_t1

0x3ac5,	// (0x00031ded) input_focus_pane_cp7

0x3aff,	// (0x00031e27) list_form_pane

0x734c,	// (0x00035674) form_field_popup_wide_pane_t1

0x3ac5,	// (0x00031ded) input_focus_pane_cp8

0x3b0b,	// (0x00031e33) list_form_wide_pane

0xe89d,	// (0x0003cbc5) form_field_slider_pane_t1_ParamLimits

0xe89d,	// (0x0003cbc5) form_field_slider_pane_t1

0xe8b5,	// (0x0003cbdd) form_field_slider_pane_t2_ParamLimits

0xe8b5,	// (0x0003cbdd) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0003d9f3) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0003d9f3) form_field_slider_pane_t

0x3470,	// (0x00031798) input_focus_pane_cp9_ParamLimits

0x3470,	// (0x00031798) input_focus_pane_cp9

0xe8ca,	// (0x0003cbf2) slider_cont_pane_ParamLimits

0xe8ca,	// (0x0003cbf2) slider_cont_pane

0x3b1a,	// (0x00031e42) form_field_slider_wide_pane_t1_ParamLimits

0x3b1a,	// (0x00031e42) form_field_slider_wide_pane_t1

0x73aa,	// (0x000356d2) form_field_slider_wide_pane_t2_ParamLimits

0x73aa,	// (0x000356d2) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0003d9f8) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0003d9f8) form_field_slider_wide_pane_t

0x3470,	// (0x00031798) input_focus_pane_cp10_ParamLimits

0x3470,	// (0x00031798) input_focus_pane_cp10

0xe8de,	// (0x0003cc06) slider_cont_pane_cp1_ParamLimits

0xe8de,	// (0x0003cc06) slider_cont_pane_cp1

0xe8f2,	// (0x0003cc1a) slider_form_pane_cp

0x3b2c,	// (0x00031e54) input_focus_pane_g1

0x3b34,	// (0x00031e5c) input_focus_pane_g2

0x3b3c,	// (0x00031e64) input_focus_pane_g3

0x3b44,	// (0x00031e6c) input_focus_pane_g4

0x3b4c,	// (0x00031e74) input_focus_pane_g5

0x3b54,	// (0x00031e7c) input_focus_pane_g6

0x3b5c,	// (0x00031e84) input_focus_pane_g7

0x3b64,	// (0x00031e8c) input_focus_pane_g8

0x3b6c,	// (0x00031e94) input_focus_pane_g9

0x3418,	// (0x00031740) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0003d9fd) input_focus_pane_g

0x4f61,	// (0x00033289) wait_border_pane_g3_copy1

0xe8fa,	// (0x0003cc22) data_form_pane_t1

0x3418,	// (0x00031740) wait_anim_pane_g1_copy1

0xe9f5,	// (0x0003cd1d) data_form_wide_pane_t1

0xe914,	// (0x0003cc3c) list_form_graphic_pane_cp_ParamLimits

0xe914,	// (0x0003cc3c) list_form_graphic_pane_cp

0x5b82,	// (0x00033eaa) slider_form_pane_g1

0x5b8b,	// (0x00033eb3) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0003dcf0) slider_form_pane_g

0xe914,	// (0x0003cc3c) list_form_graphic_pane_ParamLimits

0xe914,	// (0x0003cc3c) list_form_graphic_pane

0x7424,	// (0x0003574c) list_form_graphic_pane_g1

0x742c,	// (0x00035754) list_form_graphic_pane_t1_ParamLimits

0x742c,	// (0x00035754) list_form_graphic_pane_t1

0x347e,	// (0x000317a6) list_highlight_pane_cp5_ParamLimits

0x347e,	// (0x000317a6) list_highlight_pane_cp5

0xe927,	// (0x0003cc4f) find_pane_g1

0x3b74,	// (0x00031e9c) input_find_pane

0xe930,	// (0x0003cc58) input_find_pane_g1_ParamLimits

0xe930,	// (0x0003cc58) input_find_pane_g1

0xe93c,	// (0x0003cc64) input_find_pane_t1_ParamLimits

0xe93c,	// (0x0003cc64) input_find_pane_t1

0xe951,	// (0x0003cc79) input_find_pane_t2_ParamLimits

0xe951,	// (0x0003cc79) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0003da12) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0003da12) input_find_pane_t

0x3b7d,	// (0x00031ea5) input_focus_pane_cp5_ParamLimits

0x3b7d,	// (0x00031ea5) input_focus_pane_cp5

0x0c0b,	// (0x0002ef33) bg_popup_window_pane_cp2_ParamLimits

0x0c0b,	// (0x0002ef33) bg_popup_window_pane_cp2

0x0c18,	// (0x0002ef40) listscroll_menu_pane_ParamLimits

0x0c18,	// (0x0002ef40) listscroll_menu_pane

0x0c24,	// (0x0002ef4c) popup_submenu_window_ParamLimits

0x0c24,	// (0x0002ef4c) popup_submenu_window

0x3b8b,	// (0x00031eb3) find_popup_pane_g1

0x3b93,	// (0x00031ebb) input_popup_find_pane_cp

0x3b7d,	// (0x00031ea5) input_focus_pane_cp4_ParamLimits

0x3b7d,	// (0x00031ea5) input_focus_pane_cp4

0x3b9d,	// (0x00031ec5) input_popup_find_pane_t1_ParamLimits

0x3b9d,	// (0x00031ec5) input_popup_find_pane_t1

0x3422,	// (0x0003174a) bg_popup_sub_pane_cp

0x3bcb,	// (0x00031ef3) listscroll_popup_sub_pane

0x3bd3,	// (0x00031efb) list_submenu_pane_ParamLimits

0x3bd3,	// (0x00031efb) list_submenu_pane

0x3be4,	// (0x00031f0c) scroll_pane_cp4

0x3bec,	// (0x00031f14) list_single_popup_submenu_pane_ParamLimits

0x3bec,	// (0x00031f14) list_single_popup_submenu_pane

0x3bff,	// (0x00031f27) list_single_popup_submenu_pane_g1

0x3c07,	// (0x00031f2f) list_single_popup_submenu_pane_t1_ParamLimits

0x3c07,	// (0x00031f2f) list_single_popup_submenu_pane_t1

0x3470,	// (0x00031798) bg_active_tab_pane_cp1_ParamLimits

0x3470,	// (0x00031798) bg_active_tab_pane_cp1

0x0c56,	// (0x0002ef7e) tabs_2_active_pane_g1

0x0c5e,	// (0x0002ef86) tabs_2_active_pane_t1

0x3470,	// (0x00031798) bg_passive_tab_pane_cp1_ParamLimits

0x3470,	// (0x00031798) bg_passive_tab_pane_cp1

0x0c56,	// (0x0002ef7e) tabs_2_passive_pane_g1

0x0c5e,	// (0x0002ef86) tabs_2_passive_pane_t1

0x347e,	// (0x000317a6) bg_active_tab_pane_cp4

0x0c70,	// (0x0002ef98) tabs_2_long_active_pane_t1

0x4735,	// (0x00032a5d) bg_passive_tab_pane_cp4

0x8bd1,	// (0x00036ef9) list_single_midp_graphic_pane_g4_ParamLimits

0x347e,	// (0x000317a6) bg_active_tab_pane_cp5

0x0c83,	// (0x0002efab) tabs_3_long_active_pane_t1

0x4735,	// (0x00032a5d) bg_passive_tab_pane_cp5

0x8bd1,	// (0x00036ef9) list_single_midp_graphic_pane_g4

0x347e,	// (0x000317a6) bg_popup_window_pane_cp13_ParamLimits

0x347e,	// (0x000317a6) bg_popup_window_pane_cp13

0x3c25,	// (0x00031f4d) listscroll_popup_fast_pane_ParamLimits

0x3c25,	// (0x00031f4d) listscroll_popup_fast_pane

0x3c34,	// (0x00031f5c) grid_popup_fast_pane_ParamLimits

0x3c34,	// (0x00031f5c) grid_popup_fast_pane

0x3c46,	// (0x00031f6e) scroll_pane_cp9_ParamLimits

0x3c46,	// (0x00031f6e) scroll_pane_cp9

0xb7e1,	// (0x00039b09) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xb7e1,	// (0x00039b09) list_single_graphic_hl_pane_t1_cp2

0x3c6a,	// (0x00031f92) input_focus_pane_cp20_ParamLimits

0x3c6a,	// (0x00031f92) input_focus_pane_cp20

0x3c78,	// (0x00031fa0) query_popup_data_pane_t1_ParamLimits

0x3c78,	// (0x00031fa0) query_popup_data_pane_t1

0x3c8b,	// (0x00031fb3) query_popup_data_pane_t2_ParamLimits

0x3c8b,	// (0x00031fb3) query_popup_data_pane_t2

0x3cd1,	// (0x00031ff9) query_popup_data_pane_t3_ParamLimits

0x3cd1,	// (0x00031ff9) query_popup_data_pane_t3

0x3d12,	// (0x0003203a) query_popup_data_pane_t4_ParamLimits

0x3d12,	// (0x0003203a) query_popup_data_pane_t4

0x3d4e,	// (0x00032076) query_popup_data_pane_t5_ParamLimits

0x3d4e,	// (0x00032076) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0003da17) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0003da17) query_popup_data_pane_t

0x3b2c,	// (0x00031e54) bg_set_opt_pane_g1

0x3b34,	// (0x00031e5c) bg_set_opt_pane_g2

0x3b3c,	// (0x00031e64) bg_set_opt_pane_g3

0x3b44,	// (0x00031e6c) bg_set_opt_pane_g4

0x3b4c,	// (0x00031e74) bg_set_opt_pane_g5

0x3b54,	// (0x00031e7c) bg_set_opt_pane_g6

0x3b5c,	// (0x00031e84) bg_set_opt_pane_g7

0x3b64,	// (0x00031e8c) bg_set_opt_pane_g8

0x3b6c,	// (0x00031e94) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0003da22) bg_set_opt_pane_g

0x882c,	// (0x00036b54) control_top_pane_stacon_ParamLimits

0x882c,	// (0x00036b54) control_top_pane_stacon

0x887f,	// (0x00036ba7) signal_pane_stacon_ParamLimits

0x887f,	// (0x00036ba7) signal_pane_stacon

0x41ad,	// (0x000324d5) stacon_top_pane_g1_ParamLimits

0x41ad,	// (0x000324d5) stacon_top_pane_g1

0x88a4,	// (0x00036bcc) title_pane_stacon_ParamLimits

0x88a4,	// (0x00036bcc) title_pane_stacon

0x88ce,	// (0x00036bf6) uni_indicator_pane_stacon_ParamLimits

0x88ce,	// (0x00036bf6) uni_indicator_pane_stacon

0x88e3,	// (0x00036c0b) battery_pane_stacon_ParamLimits

0x88e3,	// (0x00036c0b) battery_pane_stacon

0x8927,	// (0x00036c4f) control_bottom_pane_stacon_ParamLimits

0x8927,	// (0x00036c4f) control_bottom_pane_stacon

0x894a,	// (0x00036c72) navi_pane_stacon_ParamLimits

0x894a,	// (0x00036c72) navi_pane_stacon

0x41cf,	// (0x000324f7) stacon_bottom_pane_g1_ParamLimits

0x41cf,	// (0x000324f7) stacon_bottom_pane_g1

0x843b,	// (0x00036763) aid_levels_signal_lsc_ParamLimits

0x843b,	// (0x00036763) aid_levels_signal_lsc

0x8452,	// (0x0003677a) signal_pane_stacon_g1_ParamLimits

0x8452,	// (0x0003677a) signal_pane_stacon_g1

0x8466,	// (0x0003678e) signal_pane_stacon_g2_ParamLimits

0x8466,	// (0x0003678e) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0003da35) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0003da35) signal_pane_stacon_g

0x849b,	// (0x000367c3) title_pane_stacon_t1_ParamLimits

0x849b,	// (0x000367c3) title_pane_stacon_t1

0x3da6,	// (0x000320ce) uni_indicator_pane_stacon_g1

0x3db0,	// (0x000320d8) uni_indicator_pane_stacon_g2

0x3d92,	// (0x000320ba) uni_indicator_pane_stacon_g3

0x3d9c,	// (0x000320c4) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0003da41) uni_indicator_pane_stacon_g

0x84c0,	// (0x000367e8) control_top_pane_stacon_g1

0x84c8,	// (0x000367f0) control_top_pane_stacon_t1_ParamLimits

0x84c8,	// (0x000367f0) control_top_pane_stacon_t1

0x84ff,	// (0x00036827) aid_levels_battery_lsc_ParamLimits

0x84ff,	// (0x00036827) aid_levels_battery_lsc

0x8517,	// (0x0003683f) battery_pane_stacon_g1_ParamLimits

0x8517,	// (0x0003683f) battery_pane_stacon_g1

0x852a,	// (0x00036852) battery_pane_stacon_g2_ParamLimits

0x852a,	// (0x00036852) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0003da4a) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0003da4a) battery_pane_stacon_g

0x8568,	// (0x00036890) navi_icon_pane_stacon

0x857c,	// (0x000368a4) navi_navi_pane_stacon

0x8568,	// (0x00036890) navi_text_pane_stacon

0x84c0,	// (0x000367e8) control_bottom_pane_stacon_g1

0x8590,	// (0x000368b8) control_bottom_pane_stacon_t1_ParamLimits

0x8590,	// (0x000368b8) control_bottom_pane_stacon_t1

0x0c95,	// (0x0002efbd) grid_app_pane_ParamLimits

0x0c95,	// (0x0002efbd) grid_app_pane

0x0ccb,	// (0x0002eff3) scroll_pane_cp15_ParamLimits

0x0ccb,	// (0x0002eff3) scroll_pane_cp15

0x0ce8,	// (0x0002f010) cell_app_pane_ParamLimits

0x0ce8,	// (0x0002f010) cell_app_pane

0x0d2f,	// (0x0002f057) cell_app_pane_g1_ParamLimits

0x0d2f,	// (0x0002f057) cell_app_pane_g1

0x3dd4,	// (0x000320fc) cell_app_pane_g2_ParamLimits

0x3dd4,	// (0x000320fc) cell_app_pane_g2

0x0001,

0xf727,	// (0x0003da4f) cell_app_pane_g_ParamLimits

0xf727,	// (0x0003da4f) cell_app_pane_g

0x3de0,	// (0x00032108) cell_app_pane_t1_ParamLimits

0x3de0,	// (0x00032108) cell_app_pane_t1

0x3df2,	// (0x0003211a) grid_highlight_pane_ParamLimits

0x3df2,	// (0x0003211a) grid_highlight_pane

0x3b2c,	// (0x00031e54) cell_highlight_pane_g1

0x3b34,	// (0x00031e5c) cell_highlight_pane_g2

0x3b3c,	// (0x00031e64) cell_highlight_pane_g3

0x3b44,	// (0x00031e6c) cell_highlight_pane_g4

0x3b4c,	// (0x00031e74) cell_highlight_pane_g5

0x3b54,	// (0x00031e7c) cell_highlight_pane_g6

0x3b5c,	// (0x00031e84) cell_highlight_pane_g7

0x3b64,	// (0x00031e8c) cell_highlight_pane_g8

0x3b6c,	// (0x00031e94) cell_highlight_pane_g9

0x3418,	// (0x00031740) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0003d9fd) cell_highlight_pane_g

0x3e03,	// (0x0003212b) bg_scroll_pane

0x865f,	// (0x00036987) scroll_handle_pane

0x3e4a,	// (0x00032172) scroll_bg_pane_g1

0x3e5f,	// (0x00032187) scroll_bg_pane_g2

0x3e77,	// (0x0003219f) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0003da54) scroll_bg_pane_g

0x3e8c,	// (0x000321b4) scroll_handle_focus_pane_ParamLimits

0x3e8c,	// (0x000321b4) scroll_handle_focus_pane

0x3e4a,	// (0x00032172) scroll_handle_pane_g1

0x3e99,	// (0x000321c1) scroll_handle_pane_g2

0x3e77,	// (0x0003219f) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0003da5b) scroll_handle_pane_g

0x3b7d,	// (0x00031ea5) bg_popup_sub_pane_cp21_ParamLimits

0x3b7d,	// (0x00031ea5) bg_popup_sub_pane_cp21

0x3ead,	// (0x000321d5) popup_fep_japan_predictive_window_t1_ParamLimits

0x3ead,	// (0x000321d5) popup_fep_japan_predictive_window_t1

0x3ec4,	// (0x000321ec) popup_fep_japan_predictive_window_t2_ParamLimits

0x3ec4,	// (0x000321ec) popup_fep_japan_predictive_window_t2

0x3ef7,	// (0x0003221f) popup_fep_japan_predictive_window_t3_ParamLimits

0x3ef7,	// (0x0003221f) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0003da62) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0003da62) popup_fep_japan_predictive_window_t

0x3422,	// (0x0003174a) bg_popup_sub_pane_cp23

0x3f2e,	// (0x00032256) listscroll_japin_cand_pane

0x3f36,	// (0x0003225e) popup_fep_japan_candidate_window_t1

0x3f44,	// (0x0003226c) candidate_pane_ParamLimits

0x3f44,	// (0x0003226c) candidate_pane

0x3f56,	// (0x0003227e) scroll_pane_cp30

0x3f5e,	// (0x00032286) list_single_popup_jap_candidate_pane_ParamLimits

0x3f5e,	// (0x00032286) list_single_popup_jap_candidate_pane

0x3422,	// (0x0003174a) list_highlight_pane_cp30

0x3f72,	// (0x0003229a) list_single_popup_jap_candidate_pane_t1

0x3f81,	// (0x000322a9) level_1_signal

0x3f8e,	// (0x000322b6) level_2_signal

0x3f9b,	// (0x000322c3) level_3_signal

0x3fa8,	// (0x000322d0) level_4_signal

0x3fb5,	// (0x000322dd) level_5_signal

0x3fc2,	// (0x000322ea) level_6_signal

0x3fcf,	// (0x000322f7) level_7_signal

0x3f81,	// (0x000322a9) level_1_battery

0x3f8e,	// (0x000322b6) level_2_battery

0x3f9b,	// (0x000322c3) level_3_battery

0x3fa8,	// (0x000322d0) level_4_battery

0x3fb5,	// (0x000322dd) level_5_battery

0x3fc2,	// (0x000322ea) level_6_battery

0x3fcf,	// (0x000322f7) level_7_battery

0x3ff4,	// (0x0003231c) list_menu_pane_ParamLimits

0x3ff4,	// (0x0003231c) list_menu_pane

0x4005,	// (0x0003232d) scroll_pane_cp25_ParamLimits

0x4005,	// (0x0003232d) scroll_pane_cp25

0x401e,	// (0x00032346) list_double2_graphic_pane_cp2_ParamLimits

0x401e,	// (0x00032346) list_double2_graphic_pane_cp2

0x401e,	// (0x00032346) list_double2_large_graphic_pane_cp2_ParamLimits

0x401e,	// (0x00032346) list_double2_large_graphic_pane_cp2

0x401e,	// (0x00032346) list_double2_pane_cp2_ParamLimits

0x401e,	// (0x00032346) list_double2_pane_cp2

0x401e,	// (0x00032346) list_double_graphic_pane_cp2_ParamLimits

0x401e,	// (0x00032346) list_double_graphic_pane_cp2

0x401e,	// (0x00032346) list_double_large_graphic_pane_cp2_ParamLimits

0x401e,	// (0x00032346) list_double_large_graphic_pane_cp2

0x401e,	// (0x00032346) list_double_number_pane_cp2_ParamLimits

0x401e,	// (0x00032346) list_double_number_pane_cp2

0x401e,	// (0x00032346) list_double_pane_cp2_ParamLimits

0x401e,	// (0x00032346) list_double_pane_cp2

0x0d64,	// (0x0002f08c) list_single_2graphic_pane_cp2_ParamLimits

0x0d64,	// (0x0002f08c) list_single_2graphic_pane_cp2

0x0d64,	// (0x0002f08c) list_single_graphic_heading_pane_cp2_ParamLimits

0x0d64,	// (0x0002f08c) list_single_graphic_heading_pane_cp2

0x0d64,	// (0x0002f08c) list_single_graphic_pane_cp2_ParamLimits

0x0d64,	// (0x0002f08c) list_single_graphic_pane_cp2

0x0d64,	// (0x0002f08c) list_single_heading_pane_cp2_ParamLimits

0x0d64,	// (0x0002f08c) list_single_heading_pane_cp2

0x402e,	// (0x00032356) list_single_large_graphic_pane_cp2_ParamLimits

0x402e,	// (0x00032356) list_single_large_graphic_pane_cp2

0x0d64,	// (0x0002f08c) list_single_number_heading_pane_cp2_ParamLimits

0x0d64,	// (0x0002f08c) list_single_number_heading_pane_cp2

0x0d64,	// (0x0002f08c) list_single_number_pane_cp2_ParamLimits

0x0d64,	// (0x0002f08c) list_single_number_pane_cp2

0x0d64,	// (0x0002f08c) list_single_pane_cp2_ParamLimits

0x0d64,	// (0x0002f08c) list_single_pane_cp2

0x4048,	// (0x00032370) bg_popup_sub_pane_cp22

0x8776,	// (0x00036a9e) popup_side_volume_key_window_g1

0x87a0,	// (0x00036ac8) popup_side_volume_key_window_t1

0x87bc,	// (0x00036ae4) volume_small_pane_cp1

0x3470,	// (0x00031798) bg_popup_sub_pane_cp24_ParamLimits

0x3470,	// (0x00031798) bg_popup_sub_pane_cp24

0x405e,	// (0x00032386) fep_china_uni_candidate_pane_ParamLimits

0x405e,	// (0x00032386) fep_china_uni_candidate_pane

0x4072,	// (0x0003239a) fep_china_uni_entry_pane

0x4082,	// (0x000323aa) popup_fep_china_uni_window_g1

0x409e,	// (0x000323c6) fep_china_uni_entry_pane_g1

0x40a6,	// (0x000323ce) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0003da8f) fep_china_uni_entry_pane_g

0x40ae,	// (0x000323d6) fep_entry_item_pane

0x40b8,	// (0x000323e0) fep_candidate_item_pane

0x40c0,	// (0x000323e8) fep_china_uni_candidate_pane_g1

0x40c8,	// (0x000323f0) fep_china_uni_candidate_pane_g2

0x40d0,	// (0x000323f8) fep_china_uni_candidate_pane_g3

0x40d8,	// (0x00032400) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0003da94) fep_china_uni_candidate_pane_g

0x3418,	// (0x00031740) fep_entry_item_pane_g1

0x40e0,	// (0x00032408) fep_entry_item_pane_t1_ParamLimits

0x40e0,	// (0x00032408) fep_entry_item_pane_t1

0x40f6,	// (0x0003241e) fep_candidate_item_pane_t1_ParamLimits

0x40f6,	// (0x0003241e) fep_candidate_item_pane_t1

0x410b,	// (0x00032433) fep_candidate_item_pane_t2_ParamLimits

0x410b,	// (0x00032433) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0003da9d) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0003da9d) fep_candidate_item_pane_t

0x347e,	// (0x000317a6) list_highlight_pane_cp31_ParamLimits

0x347e,	// (0x000317a6) list_highlight_pane_cp31

0x411d,	// (0x00032445) level_1_signal_lsc

0x4126,	// (0x0003244e) level_2_signal_lsc

0x412f,	// (0x00032457) level_3_signal_lsc

0x4138,	// (0x00032460) level_4_signal_lsc

0x4141,	// (0x00032469) level_5_signal_lsc

0x414a,	// (0x00032472) level_6_signal_lsc

0x4153,	// (0x0003247b) level_7_signal_lsc

0x4153,	// (0x0003247b) level_1_battery_lsc

0x415c,	// (0x00032484) level_2_battery_lsc

0x4165,	// (0x0003248d) level_3_battery_lsc

0x416e,	// (0x00032496) level_4_battery_lsc

0x4177,	// (0x0003249f) level_5_battery_lsc

0x4180,	// (0x000324a8) level_6_battery_lsc

0x411d,	// (0x00032445) level_7_battery_lsc

0x4189,	// (0x000324b1) scroll_handle_focus_pane_g1

0x4192,	// (0x000324ba) scroll_handle_focus_pane_g2

0x419b,	// (0x000324c3) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0003daa2) scroll_handle_focus_pane_g

0xe966,	// (0x0003cc8e) list_single_2graphic_pane_g1_ParamLimits

0xe966,	// (0x0003cc8e) list_single_2graphic_pane_g1

0xecf7,	// (0x0003d01f) list_single_2graphic_pane_g2_ParamLimits

0xecf7,	// (0x0003d01f) list_single_2graphic_pane_g2

0x82fc,	// (0x00036624) list_single_2graphic_pane_g3_ParamLimits

0x82fc,	// (0x00036624) list_single_2graphic_pane_g3

0xed69,	// (0x0003d091) list_single_2graphic_pane_g4_ParamLimits

0xed69,	// (0x0003d091) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0003daa9) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0003daa9) list_single_2graphic_pane_g

0xe972,	// (0x0003cc9a) list_single_2graphic_pane_t1_ParamLimits

0xe972,	// (0x0003cc9a) list_single_2graphic_pane_t1

0xed75,	// (0x0003d09d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xed75,	// (0x0003d09d) list_double2_graphic_large_graphic_pane_g1

0xed4f,	// (0x0003d077) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xed4f,	// (0x0003d077) list_double2_graphic_large_graphic_pane_g2

0xed37,	// (0x0003d05f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xed37,	// (0x0003d05f) list_double2_graphic_large_graphic_pane_g3

0xed87,	// (0x0003d0af) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xed87,	// (0x0003d0af) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0003dab2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0003dab2) list_double2_graphic_large_graphic_pane_g

0xe9a0,	// (0x0003ccc8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe9a0,	// (0x0003ccc8) list_double2_graphic_large_graphic_pane_t1

0xe9b6,	// (0x0003ccde) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xe9b6,	// (0x0003ccde) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0003dabb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0003dabb) list_double2_graphic_large_graphic_pane_t

0x427c,	// (0x000325a4) popup_fast_swap_window_ParamLimits

0x427c,	// (0x000325a4) popup_fast_swap_window

0x4298,	// (0x000325c0) popup_side_volume_key_window

0x42b2,	// (0x000325da) stacon_top_pane

0x42bc,	// (0x000325e4) status_pane_ParamLimits

0x42bc,	// (0x000325e4) status_pane

0x42b2,	// (0x000325da) status_small_pane

0x3422,	// (0x0003174a) control_pane

0x3422,	// (0x0003174a) stacon_bottom_pane

0x3aa8,	// (0x00031dd0) scroll_pane_cp121

0x3a9f,	// (0x00031dc7) set_content_pane

0x0dcf,	// (0x0002f0f7) bg_active_tab_pane_g1_cp1

0x41a4,	// (0x000324cc) bg_active_tab_pane_g2_cp1

0x0dc6,	// (0x0002f0ee) bg_active_tab_pane_g3_cp1

0x0dcf,	// (0x0002f0f7) bg_passive_tab_pane_g1_cp1

0x41a4,	// (0x000324cc) bg_passive_tab_pane_g2_cp1

0x0dc6,	// (0x0002f0ee) bg_passive_tab_pane_g3_cp1

0x0de1,	// (0x0002f109) bg_active_tab_pane_g1_cp2

0x41a4,	// (0x000324cc) bg_active_tab_pane_g2_cp2

0x0dd8,	// (0x0002f100) bg_active_tab_pane_g3_cp2

0x0de1,	// (0x0002f109) bg_passive_tab_pane_g1_cp2

0x41a4,	// (0x000324cc) bg_passive_tab_pane_g2_cp2

0x0dd8,	// (0x0002f100) bg_passive_tab_pane_g3_cp2

0x0df3,	// (0x0002f11b) bg_active_tab_pane_g1_cp3

0x41a4,	// (0x000324cc) bg_active_tab_pane_g2_cp3

0x0dea,	// (0x0002f112) bg_active_tab_pane_g3_cp3

0x0df3,	// (0x0002f11b) bg_passive_tab_pane_g1_cp3

0x41a4,	// (0x000324cc) bg_passive_tab_pane_g2_cp3

0x0dea,	// (0x0002f112) bg_passive_tab_pane_g3_cp3

0x0e05,	// (0x0002f12d) bg_active_tab_pane_g1_cp4

0x41a4,	// (0x000324cc) bg_active_tab_pane_g2_cp4

0x0dfc,	// (0x0002f124) bg_active_tab_pane_g3_cp4

0x0e05,	// (0x0002f12d) bg_passive_tab_pane_g1_cp4

0x41a4,	// (0x000324cc) bg_passive_tab_pane_g2_cp4

0x0dfc,	// (0x0002f124) bg_passive_tab_pane_g3_cp4

0x41f4,	// (0x0003251c) bg_active_tab_pane_g1_cp5

0x41a4,	// (0x000324cc) bg_active_tab_pane_g2_cp5

0x41eb,	// (0x00032513) bg_active_tab_pane_g3_cp5

0x41f4,	// (0x0003251c) bg_passive_tab_pane_g1_cp5

0x41a4,	// (0x000324cc) bg_passive_tab_pane_g2_cp5

0x41eb,	// (0x00032513) bg_passive_tab_pane_g3_cp5

0xd87e,	// (0x0003bba6) list_set_graphic_pane_ParamLimits

0xd87e,	// (0x0003bba6) list_set_graphic_pane

0x3422,	// (0x0003174a) bg_set_opt_pane_cp4

0x41fd,	// (0x00032525) list_set_graphic_pane_g1_ParamLimits

0x41fd,	// (0x00032525) list_set_graphic_pane_g1

0x4209,	// (0x00032531) list_set_graphic_pane_g2_ParamLimits

0x4209,	// (0x00032531) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0003dac0) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0003dac0) list_set_graphic_pane_g

0x0009,

0xfaf7,	// (0x0003de1f) volume_small_pane_cp_g

0x422d,	// (0x00032555) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x422d,	// (0x00032555) list_double2_large_graphic_pane_g1_cp2

0x423b,	// (0x00032563) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x423b,	// (0x00032563) list_double2_large_graphic_pane_g2_cp2

0x424c,	// (0x00032574) list_double2_large_graphic_pane_g3_cp2

0x4254,	// (0x0003257c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4254,	// (0x0003257c) list_double2_large_graphic_pane_t1_cp2

0x426a,	// (0x00032592) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x426a,	// (0x00032592) list_double2_large_graphic_pane_t2_cp2

0x5914,	// (0x00033c3c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5914,	// (0x00033c3c) list_double_large_graphic_pane_g1_cp2

0x5927,	// (0x00033c4f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5927,	// (0x00033c4f) list_double_large_graphic_pane_g2_cp2

0x43da,	// (0x00032702) list_double_large_graphic_pane_g3_cp2

0x5938,	// (0x00033c60) list_double_large_graphic_pane_g4_cp

0x5940,	// (0x00033c68) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5940,	// (0x00033c68) list_double_large_graphic_pane_t1_cp2

0x5957,	// (0x00033c7f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5957,	// (0x00033c7f) list_double_large_graphic_pane_t2_cp2

0x42ca,	// (0x000325f2) list_double2_graphic_pane_g1_cp2_ParamLimits

0x42ca,	// (0x000325f2) list_double2_graphic_pane_g1_cp2

0x42d8,	// (0x00032600) list_double2_graphic_pane_g2_cp2_ParamLimits

0x42d8,	// (0x00032600) list_double2_graphic_pane_g2_cp2

0x42e9,	// (0x00032611) list_double2_graphic_pane_g3_cp2

0x42f3,	// (0x0003261b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x42f3,	// (0x0003261b) list_double2_graphic_pane_t1_cp2

0x4309,	// (0x00032631) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4309,	// (0x00032631) list_double2_graphic_pane_t2_cp2

0x431b,	// (0x00032643) list_single_number_heading_pane_g1_cp2_ParamLimits

0x431b,	// (0x00032643) list_single_number_heading_pane_g1_cp2

0x4327,	// (0x0003264f) list_single_number_heading_pane_g2_cp2

0x432f,	// (0x00032657) list_single_number_heading_pane_t1_cp2_ParamLimits

0x432f,	// (0x00032657) list_single_number_heading_pane_t1_cp2

0x4345,	// (0x0003266d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4345,	// (0x0003266d) list_single_number_heading_pane_t2_cp2

0x4359,	// (0x00032681) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4359,	// (0x00032681) list_single_number_heading_pane_t3_cp2

0x431b,	// (0x00032643) list_single_heading_pane_g1_cp2_ParamLimits

0x431b,	// (0x00032643) list_single_heading_pane_g1_cp2

0x4327,	// (0x0003264f) list_single_heading_pane_g2_cp2

0x432f,	// (0x00032657) list_single_heading_pane_t1_cp2_ParamLimits

0x432f,	// (0x00032657) list_single_heading_pane_t1_cp2

0x571c,	// (0x00033a44) list_single_heading_pane_t2_cp2_ParamLimits

0x571c,	// (0x00033a44) list_single_heading_pane_t2_cp2

0x56b6,	// (0x000339de) list_double_graphic_pane_g1_cp2_ParamLimits

0x56b6,	// (0x000339de) list_double_graphic_pane_g1_cp2

0x56c2,	// (0x000339ea) list_double_graphic_pane_g2_cp2_ParamLimits

0x56c2,	// (0x000339ea) list_double_graphic_pane_g2_cp2

0x56d1,	// (0x000339f9) list_double_graphic_pane_g3_cp2

0x56d9,	// (0x00033a01) list_double_graphic_pane_t1_cp2_ParamLimits

0x56d9,	// (0x00033a01) list_double_graphic_pane_t1_cp2

0x56ef,	// (0x00033a17) list_double_graphic_pane_t2_cp2_ParamLimits

0x56ef,	// (0x00033a17) list_double_graphic_pane_t2_cp2

0x43ce,	// (0x000326f6) list_double_number_pane_g1_cp2_ParamLimits

0x43ce,	// (0x000326f6) list_double_number_pane_g1_cp2

0x43da,	// (0x00032702) list_double_number_pane_g2_cp2

0x567a,	// (0x000339a2) list_double_number_pane_t1_cp2_ParamLimits

0x567a,	// (0x000339a2) list_double_number_pane_t1_cp2

0x568e,	// (0x000339b6) list_double_number_pane_t2_cp2_ParamLimits

0x568e,	// (0x000339b6) list_double_number_pane_t2_cp2

0x56a4,	// (0x000339cc) list_double_number_pane_t3_cp2_ParamLimits

0x56a4,	// (0x000339cc) list_double_number_pane_t3_cp2

0x55f1,	// (0x00033919) list_single_graphic_pane_g1_cp2_ParamLimits

0x55f1,	// (0x00033919) list_single_graphic_pane_g1_cp2

0x4432,	// (0x0003275a) list_single_graphic_pane_g2_cp2_ParamLimits

0x4432,	// (0x0003275a) list_single_graphic_pane_g2_cp2

0x443e,	// (0x00032766) list_single_graphic_pane_g3_cp2

0x55c7,	// (0x000338ef) list_single_graphic_pane_t1_cp2_ParamLimits

0x55c7,	// (0x000338ef) list_single_graphic_pane_t1_cp2

0x4432,	// (0x0003275a) list_single_number_pane_g1_cp2_ParamLimits

0x4432,	// (0x0003275a) list_single_number_pane_g1_cp2

0x443e,	// (0x00032766) list_single_number_pane_g2_cp2

0x55c7,	// (0x000338ef) list_single_number_pane_t1_cp2_ParamLimits

0x55c7,	// (0x000338ef) list_single_number_pane_t1_cp2

0x55dd,	// (0x00033905) list_single_number_pane_t2_cp2_ParamLimits

0x55dd,	// (0x00033905) list_single_number_pane_t2_cp2

0x423b,	// (0x00032563) list_double2_pane_g1_cp2_ParamLimits

0x423b,	// (0x00032563) list_double2_pane_g1_cp2

0x424c,	// (0x00032574) list_double2_pane_g2_cp2

0x43a6,	// (0x000326ce) list_double2_pane_t1_cp2_ParamLimits

0x43a6,	// (0x000326ce) list_double2_pane_t1_cp2

0x43bc,	// (0x000326e4) list_double2_pane_t2_cp2_ParamLimits

0x43bc,	// (0x000326e4) list_double2_pane_t2_cp2

0x43ce,	// (0x000326f6) list_double_pane_g1_cp2_ParamLimits

0x43ce,	// (0x000326f6) list_double_pane_g1_cp2

0x43da,	// (0x00032702) list_double_pane_g2_cp2

0x43e2,	// (0x0003270a) list_double_pane_t1_cp2_ParamLimits

0x43e2,	// (0x0003270a) list_double_pane_t1_cp2

0x43f8,	// (0x00032720) list_double_pane_t2_cp2_ParamLimits

0x43f8,	// (0x00032720) list_double_pane_t2_cp2

0x4422,	// (0x0003274a) list_single_pane_cp2_g3

0x4432,	// (0x0003275a) list_single_pane_g1_cp2_ParamLimits

0x4432,	// (0x0003275a) list_single_pane_g1_cp2

0x443e,	// (0x00032766) list_single_pane_g2_cp2

0x4446,	// (0x0003276e) list_single_pane_t1_cp2_ParamLimits

0x4446,	// (0x0003276e) list_single_pane_t1_cp2

0x445e,	// (0x00032786) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x445e,	// (0x00032786) list_single_large_graphic_pane_g1_cp2

0x446c,	// (0x00032794) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x446c,	// (0x00032794) list_single_large_graphic_pane_g2_cp2

0x4478,	// (0x000327a0) list_single_large_graphic_pane_g3_cp2

0x4480,	// (0x000327a8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4480,	// (0x000327a8) list_single_large_graphic_pane_g4_cp1

0x449a,	// (0x000327c2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x449a,	// (0x000327c2) list_single_large_graphic_pane_t1_cp2

0x5591,	// (0x000338b9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5591,	// (0x000338b9) list_single_graphic_heading_pane_g1_cp2

0x555e,	// (0x00033886) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x555e,	// (0x00033886) list_single_graphic_heading_pane_g4_cp2

0x443e,	// (0x00032766) list_single_graphic_heading_pane_g5_cp2

0x559d,	// (0x000338c5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x559d,	// (0x000338c5) list_single_graphic_heading_pane_t1_cp2

0x55b3,	// (0x000338db) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x55b3,	// (0x000338db) list_single_graphic_heading_pane_t2_cp2

0x5552,	// (0x0003387a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5552,	// (0x0003387a) list_single_2graphic_pane_g1_cp2

0x555e,	// (0x00033886) list_single_2graphic_pane_g2_cp2_ParamLimits

0x555e,	// (0x00033886) list_single_2graphic_pane_g2_cp2

0x443e,	// (0x00032766) list_single_2graphic_pane_g3_cp2

0x556f,	// (0x00033897) list_single_2graphic_pane_g4_cp2_ParamLimits

0x556f,	// (0x00033897) list_single_2graphic_pane_g4_cp2

0x557b,	// (0x000338a3) list_single_2graphic_pane_t1_cp2_ParamLimits

0x557b,	// (0x000338a3) list_single_2graphic_pane_t1_cp2

0x3418,	// (0x00031740) list_highlight_pane_g10_cp1

0x5158,	// (0x00033480) list_highlight_pane_g1_cp1

0x5160,	// (0x00033488) list_highlight_pane_g2_cp1

0x5168,	// (0x00033490) list_highlight_pane_g3_cp1

0x5170,	// (0x00033498) list_highlight_pane_g4_cp1

0x5178,	// (0x000334a0) list_highlight_pane_g5_cp1

0x5180,	// (0x000334a8) list_highlight_pane_g6_cp1

0x5188,	// (0x000334b0) list_highlight_pane_g7_cp1

0x5190,	// (0x000334b8) list_highlight_pane_g8_cp1

0x5198,	// (0x000334c0) list_highlight_pane_g9_cp1

0x1a53,	// (0x0002fd7b) form_field_slider_pane_t3

0x1a63,	// (0x0002fd8b) form_field_slider_pane_t4

0x508c,	// (0x000333b4) slider_form_pane_ParamLimits

0x508c,	// (0x000333b4) slider_form_pane

0x3422,	// (0x0003174a) control_abbreviations

0x3422,	// (0x0003174a) control_conventions

0x3422,	// (0x0003174a) control_definitions

0x3422,	// (0x0003174a) format_table_attribute

0x5768,	// (0x00033a90) bg_popup_preview_window_pane_g9

0x3422,	// (0x0003174a) format_table_data2

0x3422,	// (0x0003174a) format_table_data3

0x3422,	// (0x0003174a) format_table_data_example

0x0008,

0x3422,	// (0x0003174a) intro_purpose

0xf928,	// (0x0003dc50) bg_popup_preview_window_pane_g

0x3422,	// (0x0003174a) texts_category

0x3422,	// (0x0003174a) texts_graphics

0x44b0,	// (0x000327d8) text_digital

0x44bf,	// (0x000327e7) text_primary

0x44ce,	// (0x000327f6) text_primary_small

0x44dd,	// (0x00032805) text_secondary

0x44ec,	// (0x00032814) text_title

0x5c19,	// (0x00033f41) bg_passive_tab_pane_g1_cp3_srt

0x41a4,	// (0x000324cc) bg_passive_tab_pane_g2_cp3_srt

0x5c10,	// (0x00033f38) bg_passive_tab_pane_g3_cp3_srt

0x3470,	// (0x00031798) bg_active_tab_pane_cp3_srt_ParamLimits

0x3470,	// (0x00031798) bg_active_tab_pane_cp3_srt

0x5c22,	// (0x00033f4a) tabs_4_active_pane_srt_g1

0x1e23,	// (0x0003014b) tabs_4_active_pane_srt_t1_ParamLimits

0x1e23,	// (0x0003014b) tabs_4_active_pane_srt_t1

0x5c19,	// (0x00033f41) bg_active_tab_pane_g1_cp3_copy1

0x41a4,	// (0x000324cc) bg_active_tab_pane_g2_cp3_copy1

0x5c10,	// (0x00033f38) bg_active_tab_pane_g3_cp3_copy1

0x347e,	// (0x000317a6) tabs_2_long_active_pane_srt_ParamLimits

0x347e,	// (0x000317a6) tabs_2_long_active_pane_srt

0x347e,	// (0x000317a6) tabs_2_long_passive_pane_srt_ParamLimits

0x347e,	// (0x000317a6) tabs_2_long_passive_pane_srt

0x4735,	// (0x00032a5d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4735,	// (0x00032a5d) bg_passive_tab_pane_cp4_srt

0x5b44,	// (0x00033e6c) bg_passive_tab_pane_g1_cp4_srt

0x41a4,	// (0x000324cc) bg_passive_tab_pane_g2_cp4_srt

0x5b3b,	// (0x00033e63) bg_passive_tab_pane_g3_cp4_srt

0x347e,	// (0x000317a6) bg_active_tab_pane_cp4_srt_ParamLimits

0x347e,	// (0x000317a6) bg_active_tab_pane_cp4_srt

0x1c2f,	// (0x0002ff57) tabs_2_long_active_pane_srt_t1_ParamLimits

0x1c2f,	// (0x0002ff57) tabs_2_long_active_pane_srt_t1

0x5b44,	// (0x00033e6c) bg_active_tab_pane_g1_cp4_srt

0x41a4,	// (0x000324cc) bg_active_tab_pane_g2_cp4_srt

0x5b3b,	// (0x00033e63) bg_active_tab_pane_g3_cp4_srt

0x3470,	// (0x00031798) tabs_3_long_active_pane_srt_ParamLimits

0x3470,	// (0x00031798) tabs_3_long_active_pane_srt

0x3470,	// (0x00031798) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3470,	// (0x00031798) tabs_3_long_passive_pane_cp_srt

0x3470,	// (0x00031798) tabs_3_long_passive_pane_srt_ParamLimits

0x3470,	// (0x00031798) tabs_3_long_passive_pane_srt

0x4735,	// (0x00032a5d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4735,	// (0x00032a5d) bg_passive_tab_pane_cp5_srt

0x41f4,	// (0x0003251c) bg_passive_tab_pane_g1_cp5_srt

0x41a4,	// (0x000324cc) bg_passive_tab_pane_g2_cp5_srt

0x41eb,	// (0x00032513) bg_passive_tab_pane_g3_cp5_srt

0x347e,	// (0x000317a6) bg_active_tab_pane_cp5_srt_ParamLimits

0x347e,	// (0x000317a6) bg_active_tab_pane_cp5_srt

0x1c19,	// (0x0002ff41) tabs_3_long_active_pane_srt_t1_ParamLimits

0x1c19,	// (0x0002ff41) tabs_3_long_active_pane_srt_t1

0x41f4,	// (0x0003251c) bg_active_tab_pane_g1_cp5_srt

0x41a4,	// (0x000324cc) bg_active_tab_pane_g2_cp5_srt

0x41eb,	// (0x00032513) bg_active_tab_pane_g3_cp5_srt

0x5b2d,	// (0x00033e55) navi_text_pane_srt_t1

0x5b25,	// (0x00033e4d) navi_icon_pane_srt_g1

0x45ea,	// (0x00032912) midp_editing_number_pane_srt

0x44fb,	// (0x00032823) midp_ticker_pane_srt

0x45f2,	// (0x0003291a) midp_ticker_pane_srt_g1

0x45fa,	// (0x00032922) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0003dadf) midp_ticker_pane_srt_g

0x4602,	// (0x0003292a) midp_ticker_pane_srt_t1

0x5b16,	// (0x00033e3e) midp_editing_number_pane_t1_copy1

0x0e0e,	// (0x0002f136) listscroll_midp_pane

0x0e0e,	// (0x0002f136) midp_form_pane

0x4503,	// (0x0003282b) midp_info_popup_window_ParamLimits

0x4503,	// (0x0003282b) midp_info_popup_window

0x3b7d,	// (0x00031ea5) bg_popup_sub_pane_cp50_ParamLimits

0x3b7d,	// (0x00031ea5) bg_popup_sub_pane_cp50

0x4dda,	// (0x00033102) listscroll_midp_info_pane_ParamLimits

0x4dda,	// (0x00033102) listscroll_midp_info_pane

0x4dc2,	// (0x000330ea) listscroll_form_midp_pane_ParamLimits

0x4dc2,	// (0x000330ea) listscroll_form_midp_pane

0x4dce,	// (0x000330f6) scroll_bar_cp050

0x1a47,	// (0x0002fd6f) list_midp_pane

0x64b2,	// (0x000347da) signal_pane_g2_cp

0x4cf4,	// (0x0003301c) listscroll_midp_info_pane_t1_ParamLimits

0x4cf4,	// (0x0003301c) listscroll_midp_info_pane_t1

0x4d0c,	// (0x00033034) listscroll_midp_info_pane_t2_ParamLimits

0x4d0c,	// (0x00033034) listscroll_midp_info_pane_t2

0x4d4a,	// (0x00033072) listscroll_midp_info_pane_t3_ParamLimits

0x4d4a,	// (0x00033072) listscroll_midp_info_pane_t3

0x4d84,	// (0x000330ac) listscroll_midp_info_pane_t4_ParamLimits

0x4d84,	// (0x000330ac) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0003db8b) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0003db8b) listscroll_midp_info_pane_t

0x3be4,	// (0x00031f0c) scroll_pane_cp21

0x4c98,	// (0x00032fc0) form_midp_field_choice_group_pane

0x4ca1,	// (0x00032fc9) form_midp_field_text_pane

0x4cda,	// (0x00033002) form_midp_field_time_pane

0x4ce2,	// (0x0003300a) form_midp_gauge_slider_pane

0x4ceb,	// (0x00033013) form_midp_gauge_wait_pane

0x3422,	// (0x0003174a) form_midp_image_pane

0xe9c8,	// (0x0003ccf0) list_single_midp_pane_ParamLimits

0xe9c8,	// (0x0003ccf0) list_single_midp_pane

0x1a23,	// (0x0002fd4b) form_midp_field_text_pane_t1

0x4b3f,	// (0x00032e67) input_focus_pane_cp050

0x4c87,	// (0x00032faf) list_midp_form_text_pane

0x4c56,	// (0x00032f7e) form_midp_field_choice_group_pane_t1

0x4c64,	// (0x00032f8c) input_focus_pane_cp051

0x4c78,	// (0x00032fa0) list_midp_choice_pane

0x3422,	// (0x0003174a) status_idle_pane

0x4c3a,	// (0x00032f62) form_midp_field_time_pane_t1

0x3418,	// (0x00031740) wait_anim_pane_g2_copy1

0x4c48,	// (0x00032f70) form_midp_field_time_pane_t2

0x0001,

0x455c,	// (0x00032884) aid_navinavi_width_2_pane

0xf85e,	// (0x0003db86) form_midp_field_time_pane_t

0x3422,	// (0x0003174a) input_focus_pane_cp052

0x3422,	// (0x0003174a) bg_input_focus_pane_cp040

0x4c16,	// (0x00032f3e) form_midp_gauge_slider_pane_t1

0x4c24,	// (0x00032f4c) form_midp_gauge_slider_pane_t2

0x1a07,	// (0x0002fd2f) form_midp_gauge_slider_pane_t3

0x1a15,	// (0x0002fd3d) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0003db7d) form_midp_gauge_slider_pane_t

0x4c32,	// (0x00032f5a) form_midp_slider_pane

0x347e,	// (0x000317a6) bg_input_focus_pane_cp041_ParamLimits

0x347e,	// (0x000317a6) bg_input_focus_pane_cp041

0x4be3,	// (0x00032f0b) form_midp_gauge_wait_pane_t1_ParamLimits

0x4be3,	// (0x00032f0b) form_midp_gauge_wait_pane_t1

0x4bf5,	// (0x00032f1d) form_midp_gauge_wait_pane_t2_ParamLimits

0x4bf5,	// (0x00032f1d) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0003db78) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0003db78) form_midp_gauge_wait_pane_t

0x4c07,	// (0x00032f2f) form_midp_wait_pane_ParamLimits

0x4c07,	// (0x00032f2f) form_midp_wait_pane

0x4bad,	// (0x00032ed5) form_midp_image_pane_g1

0x4bb6,	// (0x00032ede) form_midp_image_pane_t1

0x4bc5,	// (0x00032eed) form_midp_image_pane_t2

0x4bd4,	// (0x00032efc) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0003db71) form_midp_image_pane_t

0x4ba4,	// (0x00032ecc) list_single_midp_pane_g1

0x75c3,	// (0x000358eb) list_single_midp_pane_t1

0x19f0,	// (0x0002fd18) list_midp_form_item_pane_ParamLimits

0x19f0,	// (0x0002fd18) list_midp_form_item_pane

0x4516,	// (0x0003283e) list_midp_form_item_pane_t1

0x4525,	// (0x0003284d) midp_ticker_pane_g1

0x4531,	// (0x00032859) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0003dac5) midp_ticker_pane_g

0x0eba,	// (0x0002f1e2) midp_ticker_pane_t1

0x1d98,	// (0x000300c0) midp_editing_number_pane_t1

0x5ba4,	// (0x00033ecc) midp_editing_number_pane

0x5bb3,	// (0x00033edb) midp_ticker_pane

0x5b06,	// (0x00033e2e) ai_message_heading_pane

0x3422,	// (0x0003174a) bg_popup_window_pane_cp14

0x5b0e,	// (0x00033e36) listscroll_ai_message_pane

0x5a90,	// (0x00033db8) ai_message_heading_pane_g1_ParamLimits

0x5a90,	// (0x00033db8) ai_message_heading_pane_g1

0x5a9c,	// (0x00033dc4) ai_message_heading_pane_g2_ParamLimits

0x5a9c,	// (0x00033dc4) ai_message_heading_pane_g2

0x5aa8,	// (0x00033dd0) ai_message_heading_pane_g3_ParamLimits

0x5aa8,	// (0x00033dd0) ai_message_heading_pane_g3

0x5ab4,	// (0x00033ddc) ai_message_heading_pane_g4_ParamLimits

0x5ab4,	// (0x00033ddc) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0003dcb2) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0003dcb2) ai_message_heading_pane_g

0x5ac0,	// (0x00033de8) ai_message_heading_pane_t1_ParamLimits

0x5ac0,	// (0x00033de8) ai_message_heading_pane_t1

0x5ada,	// (0x00033e02) ai_message_heading_pane_t2_ParamLimits

0x5ada,	// (0x00033e02) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0003dcbb) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0003dcbb) ai_message_heading_pane_t

0x5aec,	// (0x00033e14) bg_popup_heading_pane_cp1_ParamLimits

0x5aec,	// (0x00033e14) bg_popup_heading_pane_cp1

0x5a7e,	// (0x00033da6) list_ai_message_pane_ParamLimits

0x5a7e,	// (0x00033da6) list_ai_message_pane

0x3be4,	// (0x00031f0c) scroll_pane_cp10

0x5a1a,	// (0x00033d42) list_ai_message_pane_g1

0x5a22,	// (0x00033d4a) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0003dc8f) list_ai_message_pane_g

0x5a2a,	// (0x00033d52) list_ai_message_pane_t1_ParamLimits

0x5a2a,	// (0x00033d52) list_ai_message_pane_t1

0x5a3f,	// (0x00033d67) list_ai_message_pane_t2_ParamLimits

0x5a3f,	// (0x00033d67) list_ai_message_pane_t2

0x5a54,	// (0x00033d7c) list_ai_message_pane_t3_ParamLimits

0x5a54,	// (0x00033d7c) list_ai_message_pane_t3

0x5a69,	// (0x00033d91) list_ai_message_pane_t4_ParamLimits

0x5a69,	// (0x00033d91) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0003dc94) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0003dc94) list_ai_message_pane_t

0x1bf4,	// (0x0002ff1c) cell_ai_soft_ind_pane_ParamLimits

0x1bf4,	// (0x0002ff1c) cell_ai_soft_ind_pane

0x453d,	// (0x00032865) cell_ai_soft_ind_pane_g1_ParamLimits

0x453d,	// (0x00032865) cell_ai_soft_ind_pane_g1

0x3422,	// (0x0003174a) grid_highlight_cp1

0x454a,	// (0x00032872) text_secondary_cp56_ParamLimits

0x454a,	// (0x00032872) text_secondary_cp56

0x59ef,	// (0x00033d17) example_general_pane_ParamLimits

0x59ef,	// (0x00033d17) example_general_pane

0x59fb,	// (0x00033d23) example_parent_pane_g1_ParamLimits

0x59fb,	// (0x00033d23) example_parent_pane_g1

0x5a07,	// (0x00033d2f) example_parent_pane_t1_ParamLimits

0x5a07,	// (0x00033d2f) example_parent_pane_t1

0x12c3,	// (0x0002f5eb) popup_preview_text_window_ParamLimits

0x12c3,	// (0x0002f5eb) popup_preview_text_window

0x442a,	// (0x00032752) list_single_pane_cp2_g4

0x364d,	// (0x00031975) bg_popup_preview_window_pane_ParamLimits

0x364d,	// (0x00031975) bg_popup_preview_window_pane

0x5770,	// (0x00033a98) popup_preview_text_window_t1_ParamLimits

0x5770,	// (0x00033a98) popup_preview_text_window_t1

0x578e,	// (0x00033ab6) popup_preview_text_window_t2_ParamLimits

0x578e,	// (0x00033ab6) popup_preview_text_window_t2

0x57d7,	// (0x00033aff) popup_preview_text_window_t3_ParamLimits

0x57d7,	// (0x00033aff) popup_preview_text_window_t3

0x581c,	// (0x00033b44) popup_preview_text_window_t4_ParamLimits

0x581c,	// (0x00033b44) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0003dc63) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0003dc63) popup_preview_text_window_t

0x589a,	// (0x00033bc2) scroll_pane_cp11

0x4a4f,	// (0x00032d77) bg_popup_preview_window_pane_g1

0x5730,	// (0x00033a58) bg_popup_preview_window_pane_g2

0x5738,	// (0x00033a60) bg_popup_preview_window_pane_g3

0x5740,	// (0x00033a68) bg_popup_preview_window_pane_g4

0x5748,	// (0x00033a70) bg_popup_preview_window_pane_g5

0x5750,	// (0x00033a78) bg_popup_preview_window_pane_g6

0x5758,	// (0x00033a80) bg_popup_preview_window_pane_g7

0x5760,	// (0x00033a88) bg_popup_preview_window_pane_g8

0x7bf0,	// (0x00035f18) aid_popup_width_pane

0x123f,	// (0x0002f567) popup_midp_note_alarm_window_ParamLimits

0x123f,	// (0x0002f567) popup_midp_note_alarm_window

0x3ab9,	// (0x00031de1) data_form_pane_ParamLimits

0xe857,	// (0x0003cb7f) form_field_data_pane_g1

0xe861,	// (0x0003cb89) form_field_data_pane_t1_ParamLimits

0x3ac5,	// (0x00031ded) input_focus_pane_ParamLimits

0x3ad3,	// (0x00031dfb) data_form_wide_pane_ParamLimits

0x72fc,	// (0x00035624) form_field_data_wide_pane_g1

0x7308,	// (0x00035630) form_field_data_wide_pane_t1_ParamLimits

0x3840,	// (0x00031b68) input_focus_pane_cp6_ParamLimits

0x0c48,	// (0x0002ef70) input_popup_find_pane_g1_ParamLimits

0x0c48,	// (0x0002ef70) input_popup_find_pane_g1

0x853b,	// (0x00036863) aid_navi_side_left_pane

0x8550,	// (0x00036878) aid_navi_side_right_pane

0x5235,	// (0x0003355d) bg_popup_window_pane_cp30_ParamLimits

0x5235,	// (0x0003355d) bg_popup_window_pane_cp30

0x52af,	// (0x000335d7) popup_midp_note_alarm_window_g1_ParamLimits

0x52af,	// (0x000335d7) popup_midp_note_alarm_window_g1

0x52df,	// (0x00033607) popup_midp_note_alarm_window_t1_ParamLimits

0x52df,	// (0x00033607) popup_midp_note_alarm_window_t1

0x5380,	// (0x000336a8) popup_midp_note_alarm_window_t2_ParamLimits

0x5380,	// (0x000336a8) popup_midp_note_alarm_window_t2

0x542e,	// (0x00033756) popup_midp_note_alarm_window_t3_ParamLimits

0x542e,	// (0x00033756) popup_midp_note_alarm_window_t3

0x5456,	// (0x0003377e) popup_midp_note_alarm_window_t4_ParamLimits

0x5456,	// (0x0003377e) popup_midp_note_alarm_window_t4

0x5476,	// (0x0003379e) popup_midp_note_alarm_window_t5_ParamLimits

0x5476,	// (0x0003379e) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0003dc00) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0003dc00) popup_midp_note_alarm_window_t

0x5522,	// (0x0003384a) wait_bar_pane_cp1_ParamLimits

0x5522,	// (0x0003384a) wait_bar_pane_cp1

0x3422,	// (0x0003174a) wait_anim_pane_copy1

0x3422,	// (0x0003174a) wait_border_pane_copy1

0x4f4d,	// (0x00033275) wait_border_pane_g1_copy1

0x7322,	// (0x0003564a) form_field_popup_pane_g1

0xe87b,	// (0x0003cba3) form_field_popup_pane_t1_ParamLimits

0x3ac5,	// (0x00031ded) input_focus_pane_cp7_ParamLimits

0x3aff,	// (0x00031e27) list_form_pane_ParamLimits

0x7344,	// (0x0003566c) form_field_popup_wide_pane_g1

0x734c,	// (0x00035674) form_field_popup_wide_pane_t1_ParamLimits

0x3ac5,	// (0x00031ded) input_focus_pane_cp8_ParamLimits

0x3b0b,	// (0x00031e33) list_form_wide_pane_ParamLimits

0x5c49,	// (0x00033f71) aid_size_cell_graphic_pane

0xe8fa,	// (0x0003cc22) data_form_pane_t1_ParamLimits

0xe9f5,	// (0x0003cd1d) data_form_wide_pane_t1_ParamLimits

0x1678,	// (0x0002f9a0) bg_status_flat_pane

0x0289,	// (0x0002e5b1) title_pane_t1_ParamLimits

0x3438,	// (0x00031760) title_pane_t2_ParamLimits

0x345e,	// (0x00031786) title_pane_t3_ParamLimits

0xf59b,	// (0x0003d8c3) title_pane_t_ParamLimits

0x3f81,	// (0x000322a9) level_1_signal_ParamLimits

0x3f8e,	// (0x000322b6) level_2_signal_ParamLimits

0x3f9b,	// (0x000322c3) level_3_signal_ParamLimits

0x3fa8,	// (0x000322d0) level_4_signal_ParamLimits

0x3fb5,	// (0x000322dd) level_5_signal_ParamLimits

0x3fc2,	// (0x000322ea) level_6_signal_ParamLimits

0x3fcf,	// (0x000322f7) level_7_signal_ParamLimits

0x3f81,	// (0x000322a9) level_1_battery_ParamLimits

0x3f8e,	// (0x000322b6) level_2_battery_ParamLimits

0x3f9b,	// (0x000322c3) level_3_battery_ParamLimits

0x3fa8,	// (0x000322d0) level_4_battery_ParamLimits

0x3fb5,	// (0x000322dd) level_5_battery_ParamLimits

0x3fc2,	// (0x000322ea) level_6_battery_ParamLimits

0x3fcf,	// (0x000322f7) level_7_battery_ParamLimits

0x5158,	// (0x00033480) bg_status_flat_pane_g1

0x5160,	// (0x00033488) bg_status_flat_pane_g2

0x5168,	// (0x00033490) bg_status_flat_pane_g3

0x5170,	// (0x00033498) bg_status_flat_pane_g4

0x5178,	// (0x000334a0) bg_status_flat_pane_g5

0x5180,	// (0x000334a8) bg_status_flat_pane_g6

0x5188,	// (0x000334b0) bg_status_flat_pane_g7

0x031d,	// (0x0002e645) tabs_3_active_pane_t1_ParamLimits

0x031d,	// (0x0002e645) tabs_3_passive_pane_t1_ParamLimits

0x0337,	// (0x0002e65f) tabs_4_active_pane_t1_ParamLimits

0x0337,	// (0x0002e65f) tabs_4_1_passive_pane_t1_ParamLimits

0x0c5e,	// (0x0002ef86) tabs_2_active_pane_t1_ParamLimits

0x0c5e,	// (0x0002ef86) tabs_2_passive_pane_t1_ParamLimits

0x347e,	// (0x000317a6) bg_active_tab_pane_cp4_ParamLimits

0x0c70,	// (0x0002ef98) tabs_2_long_active_pane_t1_ParamLimits

0x4735,	// (0x00032a5d) bg_passive_tab_pane_cp4_ParamLimits

0x8bf7,	// (0x00036f1f) list_single_midp_graphic_pane_t1_ParamLimits

0x347e,	// (0x000317a6) bg_active_tab_pane_cp5_ParamLimits

0x0c83,	// (0x0002efab) tabs_3_long_active_pane_t1_ParamLimits

0x4735,	// (0x00032a5d) bg_passive_tab_pane_cp5_ParamLimits

0x8bf7,	// (0x00036f1f) list_single_midp_graphic_pane_t1

0x1678,	// (0x0002f9a0) bg_status_flat_pane_ParamLimits

0x4922,	// (0x00032c4a) indicator_pane_cp2_ParamLimits

0x4922,	// (0x00032c4a) indicator_pane_cp2

0x17ef,	// (0x0002fb17) navi_pane_srt_ParamLimits

0x17ef,	// (0x0002fb17) navi_pane_srt

0x494a,	// (0x00032c72) popup_clock_digital_analogue_window_cp1

0x34c2,	// (0x000317ea) indicator_pane_t1

0x44fb,	// (0x00032823) copy_highlight_pane

0x44fb,	// (0x00032823) cursor_graphics_pane

0x44fb,	// (0x00032823) graphic_within_text_pane

0x44fb,	// (0x00032823) link_highlight_pane

0x585d,	// (0x00033b85) popup_preview_text_window_t5_ParamLimits

0x585d,	// (0x00033b85) popup_preview_text_window_t5

0x4564,	// (0x0003288c) cursor_digital_pane

0x4564,	// (0x0003288c) cursor_primary_pane

0x4575,	// (0x0003289d) cursor_primary_small_pane

0x457d,	// (0x000328a5) cursor_secondary_pane

0x4585,	// (0x000328ad) cursor_title_pane

0x4564,	// (0x0003288c) link_highlight_digital_pane

0x456c,	// (0x00032894) link_highlight_primary_pane

0x4575,	// (0x0003289d) link_highlight_primary_small_pane

0x457d,	// (0x000328a5) link_highlight_secondary_pane

0x4585,	// (0x000328ad) link_highlight_title_pane

0x4564,	// (0x0003288c) copy_highlight_digital_pane

0x4564,	// (0x0003288c) copy_highlight_primary_pane

0x4575,	// (0x0003289d) copy_highlight_primary_small_pane

0x457d,	// (0x000328a5) copy_highlight_secondary_pane

0x4585,	// (0x000328ad) copy_highlight_title_pane

0x457d,	// (0x000328a5) graphic_text_digital_pane

0x51d8,	// (0x00033500) graphic_text_primary_pane

0x51e1,	// (0x00033509) graphic_text_primary_small_pane

0x4575,	// (0x0003289d) graphic_text_secondary_pane

0x4564,	// (0x0003288c) graphic_text_title_pane

0x0ecc,	// (0x0002f1f4) cursor_primary_pane_g1

0x51ca,	// (0x000334f2) cursor_text_primary_t1

0x1a87,	// (0x0002fdaf) cursor_primary_small_pane_g1

0x51bc,	// (0x000334e4) cursor_text_primary_small_t1

0x1a7d,	// (0x0002fda5) cursor_primary_small_pane_g1_copy1

0x51ae,	// (0x000334d6) cursor_text_primary_small_t1_copy1

0x51a0,	// (0x000334c8) cursor_text_title_t1

0x1a73,	// (0x0002fd9b) cursor_title_pane_g1

0x0ecc,	// (0x0002f1f4) cursor_digital_pane_g1

0x458d,	// (0x000328b5) cursor_text_digital_t1

0x5141,	// (0x00033469) link_highlight_primary_pane_g1

0x5149,	// (0x00033471) link_highlight_primary_pane_t1

0x459b,	// (0x000328c3) link_highlight_primary_small_pane_g1

0x45a3,	// (0x000328cb) link_highlight_primary_small_pane_t1

0x459b,	// (0x000328c3) link_highlight_secondary_pane_g1

0x45b2,	// (0x000328da) link_highlight_secondary_pane_t1

0x50b5,	// (0x000333dd) link_highlight_title_pane_g1

0x50bd,	// (0x000333e5) link_highlight_title_pane_t1

0x509e,	// (0x000333c6) link_highlight_digital_pane_g1

0x50a6,	// (0x000333ce) link_highlight_digital_pane_t1

0x4f92,	// (0x000332ba) copy_highlight_primary_pane_g1

0x4f9a,	// (0x000332c2) copy_highlight_primary_pane_t1

0x4f6c,	// (0x00033294) copy_highlight_primary_small_pane_g1

0x4f83,	// (0x000332ab) copy_highlight_primary_small_pane_t1

0x45c1,	// (0x000328e9) copy_highlight_secondary_pane_g1

0x45c9,	// (0x000328f1) copy_highlight_secondary_pane_t1

0x4f6c,	// (0x00033294) copy_highlight_title_pane_g1

0x4f74,	// (0x0003329c) copy_highlight_title_pane_t1

0x4f92,	// (0x000332ba) copy_highlight_digital_pane_g1

0x5dd3,	// (0x000340fb) copy_highlight_digital_pane_t1

0x5d27,	// (0x0003404f) graphic_text_primary_pane_g1

0x5db7,	// (0x000340df) graphic_text_primary_pane_t1

0x5dc5,	// (0x000340ed) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x0003dd2f) graphic_text_primary_pane_t

0x5d93,	// (0x000340bb) graphic_text_primary_small_pane_g1

0x5d9b,	// (0x000340c3) graphic_text_primary_small_pane_t1

0x5da9,	// (0x000340d1) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x0003dd2a) graphic_text_primary_small_pane_t

0x5d6f,	// (0x00034097) graphic_text_secondary_pane_g1

0x5d77,	// (0x0003409f) graphic_text_secondary_pane_t1

0x5d85,	// (0x000340ad) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x0003dd25) graphic_text_secondary_pane_t

0x5d4b,	// (0x00034073) graphic_text_title_pane_g1

0x5d53,	// (0x0003407b) graphic_text_title_pane_t1

0x5d61,	// (0x00034089) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x0003dd20) graphic_text_title_pane_t

0x5d27,	// (0x0003404f) graphic_text_digital_pane_g1

0x5d2f,	// (0x00034057) graphic_text_digital_pane_t1

0x5d3d,	// (0x00034065) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x0003dd1b) graphic_text_digital_pane_t

0x347e,	// (0x000317a6) navi_icon_pane_srt_ParamLimits

0x347e,	// (0x000317a6) navi_icon_pane_srt

0x3422,	// (0x0003174a) navi_midp_pane_srt

0x3422,	// (0x0003174a) navi_navi_pane_srt

0x347e,	// (0x000317a6) navi_text_pane_srt_ParamLimits

0x347e,	// (0x000317a6) navi_text_pane_srt

0x5cf2,	// (0x0003401a) navi_navi_icon_text_pane_srt

0x5d0c,	// (0x00034034) navi_navi_pane_srt_g1_ParamLimits

0x5d0c,	// (0x00034034) navi_navi_pane_srt_g1

0x5cfa,	// (0x00034022) navi_navi_pane_srt_g2_ParamLimits

0x5cfa,	// (0x00034022) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x0003dd16) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x0003dd16) navi_navi_pane_srt_g

0x5d1e,	// (0x00034046) navi_navi_tabs_pane_srt

0x5cf2,	// (0x0003401a) navi_navi_text_pane_srt

0x5cf2,	// (0x0003401a) navi_navi_volume_pane_srt

0x5ce3,	// (0x0003400b) navi_navi_text_pane_srt_t1

0x902d,	// (0x00037355) navi_navi_volume_pane_srt_g1

0x9035,	// (0x0003735d) volume_small_pane_srt_ParamLimits

0x9035,	// (0x0003735d) volume_small_pane_srt

0x896d,	// (0x00036c95) volume_small_pane_srt_g1_ParamLimits

0x896d,	// (0x00036c95) volume_small_pane_srt_g1

0x897d,	// (0x00036ca5) volume_small_pane_srt_g2_ParamLimits

0x897d,	// (0x00036ca5) volume_small_pane_srt_g2

0x898e,	// (0x00036cb6) volume_small_pane_srt_g3_ParamLimits

0x898e,	// (0x00036cb6) volume_small_pane_srt_g3

0x899f,	// (0x00036cc7) volume_small_pane_srt_g4_ParamLimits

0x899f,	// (0x00036cc7) volume_small_pane_srt_g4

0x89b0,	// (0x00036cd8) volume_small_pane_srt_g5_ParamLimits

0x89b0,	// (0x00036cd8) volume_small_pane_srt_g5

0x89c1,	// (0x00036ce9) volume_small_pane_srt_g6_ParamLimits

0x89c1,	// (0x00036ce9) volume_small_pane_srt_g6

0x89d2,	// (0x00036cfa) volume_small_pane_srt_g7_ParamLimits

0x89d2,	// (0x00036cfa) volume_small_pane_srt_g7

0x89e3,	// (0x00036d0b) volume_small_pane_srt_g8_ParamLimits

0x89e3,	// (0x00036d0b) volume_small_pane_srt_g8

0x89f4,	// (0x00036d1c) volume_small_pane_srt_g9_ParamLimits

0x89f4,	// (0x00036d1c) volume_small_pane_srt_g9

0x8a05,	// (0x00036d2d) volume_small_pane_srt_g10_ParamLimits

0x8a05,	// (0x00036d2d) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0003daca) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0003daca) volume_small_pane_srt_g

0x36f6,	// (0x00031a1e) query_popup_data_pane_cp2

0x5cc9,	// (0x00033ff1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5cc9,	// (0x00033ff1) navi_navi_icon_text_pane_srt_t1

0x51d8,	// (0x00033500) navi_tabs_2_long_pane_srt

0x51d8,	// (0x00033500) navi_tabs_2_pane_srt

0x51d8,	// (0x00033500) navi_tabs_3_long_pane_srt

0x51d8,	// (0x00033500) navi_tabs_3_pane_srt

0x51d8,	// (0x00033500) navi_tabs_4_pane_srt

0x900d,	// (0x00037335) tabs_2_active_pane_srt_ParamLimits

0x900d,	// (0x00037335) tabs_2_active_pane_srt

0x901d,	// (0x00037345) tabs_2_passive_pane_srt_ParamLimits

0x901d,	// (0x00037345) tabs_2_passive_pane_srt

0x4b3f,	// (0x00032e67) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4b3f,	// (0x00032e67) bg_passive_tab_pane_cp1_srt

0x5cb0,	// (0x00033fd8) bg_passive_tab_pane_g1_cp1_srt

0x41a4,	// (0x000324cc) bg_passive_tab_pane_g2_cp1_srt

0x5ca7,	// (0x00033fcf) bg_passive_tab_pane_g3_cp1_srt

0x3470,	// (0x00031798) bg_active_tab_pane_cp1_srt_ParamLimits

0x3470,	// (0x00031798) bg_active_tab_pane_cp1_srt

0x5cb9,	// (0x00033fe1) tabs_2_active_pane_srt_g1

0x1ea0,	// (0x000301c8) tabs_2_active_pane_srt_t1_ParamLimits

0x1ea0,	// (0x000301c8) tabs_2_active_pane_srt_t1

0x5cb0,	// (0x00033fd8) bg_active_tab_pane_g1_cp1_srt

0x41a4,	// (0x000324cc) bg_active_tab_pane_g2_cp1_srt

0x5ca7,	// (0x00033fcf) bg_active_tab_pane_g3_cp1_srt

0x8fda,	// (0x00037302) tabs_3_active_pane_srt_ParamLimits

0x8fda,	// (0x00037302) tabs_3_active_pane_srt

0x8feb,	// (0x00037313) tabs_3_passive_pane_cp_srt_ParamLimits

0x8feb,	// (0x00037313) tabs_3_passive_pane_cp_srt

0x8ffc,	// (0x00037324) tabs_3_passive_pane_srt_ParamLimits

0x8ffc,	// (0x00037324) tabs_3_passive_pane_srt

0x4b3f,	// (0x00032e67) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4b3f,	// (0x00032e67) bg_passive_tab_pane_cp2_srt

0x45e1,	// (0x00032909) bg_passive_tab_pane_g1_cp2_srt

0x41a4,	// (0x000324cc) bg_passive_tab_pane_g2_cp2_srt

0x45d8,	// (0x00032900) bg_passive_tab_pane_g3_cp2_srt

0x3470,	// (0x00031798) bg_active_tab_pane_cp2_srt_ParamLimits

0x3470,	// (0x00031798) bg_active_tab_pane_cp2_srt

0x5c9f,	// (0x00033fc7) tabs_3_active_pane_srt_g1

0x1e8a,	// (0x000301b2) tabs_3_active_pane_srt_t1_ParamLimits

0x1e8a,	// (0x000301b2) tabs_3_active_pane_srt_t1

0x45e1,	// (0x00032909) bg_active_tab_pane_g1_cp2_srt

0x41a4,	// (0x000324cc) bg_active_tab_pane_g2_cp2_srt

0x45d8,	// (0x00032900) bg_active_tab_pane_g3_cp2_srt

0x8f92,	// (0x000372ba) tabs_4_active_pane_srt_ParamLimits

0x8f92,	// (0x000372ba) tabs_4_active_pane_srt

0x8fa4,	// (0x000372cc) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8fa4,	// (0x000372cc) tabs_4_passive_pane_cp2_srt

0x4705,	// (0x00032a2d) aid_size_cell_toolbar

0x5971,	// (0x00033c99) main_idle_act_pane_ParamLimits

0x47e9,	// (0x00032b11) popup_large_graphic_colour_window_ParamLimits

0x1543,	// (0x0002f86b) popup_toolbar_window_ParamLimits

0x1543,	// (0x0002f86b) popup_toolbar_window

0x5bc6,	// (0x00033eee) list_single_graphic_2heading_pane_ParamLimits

0x5bc6,	// (0x00033eee) list_single_graphic_2heading_pane

0x3dba,	// (0x000320e2) aid_size_cell_apps_grid_lsc_pane

0x3dcc,	// (0x000320f4) aid_size_cell_apps_grid_prt_pane

0x4735,	// (0x00032a5d) bg_wml_button_pane_cp1_ParamLimits

0x4735,	// (0x00032a5d) bg_wml_button_pane_cp1

0x1a23,	// (0x0002fd4b) form_midp_field_text_pane_t1_ParamLimits

0x4b3f,	// (0x00032e67) input_focus_pane_cp050_ParamLimits

0x4c87,	// (0x00032faf) list_midp_form_text_pane_ParamLimits

0x4c64,	// (0x00032f8c) input_focus_pane_cp051_ParamLimits

0x4c78,	// (0x00032fa0) list_midp_choice_pane_ParamLimits

0x19b8,	// (0x0002fce0) list_single_2graphic_pane_cp3_ParamLimits

0x19b8,	// (0x0002fce0) list_single_2graphic_pane_cp3

0x19ce,	// (0x0002fcf6) list_single_midp_graphic_pane_ParamLimits

0x19ce,	// (0x0002fcf6) list_single_midp_graphic_pane

0x750b,	// (0x00035833) list_single_graphic_2heading_pane_g1_ParamLimits

0x750b,	// (0x00035833) list_single_graphic_2heading_pane_g1

0x7517,	// (0x0003583f) list_single_graphic_2heading_pane_g4_ParamLimits

0x7517,	// (0x0003583f) list_single_graphic_2heading_pane_g4

0x7523,	// (0x0003584b) list_single_graphic_2heading_pane_g5_ParamLimits

0x7523,	// (0x0003584b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0003db1d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0003db1d) list_single_graphic_2heading_pane_g

0x752f,	// (0x00035857) list_single_graphic_2heading_pane_t1_ParamLimits

0x752f,	// (0x00035857) list_single_graphic_2heading_pane_t1

0x7543,	// (0x0003586b) list_single_graphic_2heading_pane_t2_ParamLimits

0x7543,	// (0x0003586b) list_single_graphic_2heading_pane_t2

0x755f,	// (0x00035887) list_single_graphic_2heading_pane_t3_ParamLimits

0x755f,	// (0x00035887) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0003db24) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0003db24) list_single_graphic_2heading_pane_t

0x498d,	// (0x00032cb5) bg_popup_sub_pane_cp2

0x49b7,	// (0x00032cdf) grid_toobar_pane

0x8b7c,	// (0x00036ea4) cell_toolbar_pane_ParamLimits

0x8b7c,	// (0x00036ea4) cell_toolbar_pane

0x49f3,	// (0x00032d1b) cell_toolbar_pane_g1_ParamLimits

0x49f3,	// (0x00032d1b) cell_toolbar_pane_g1

0x4a07,	// (0x00032d2f) cell_toolbar_pane_g2_ParamLimits

0x4a07,	// (0x00032d2f) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0003db32) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0003db32) cell_toolbar_pane_g

0x4a29,	// (0x00032d51) grid_highlight_pane_cp2_ParamLimits

0x4a29,	// (0x00032d51) grid_highlight_pane_cp2

0x4a43,	// (0x00032d6b) toolbar_button_pane

0x4a4f,	// (0x00032d77) toolbar_button_pane_g1

0x4a5f,	// (0x00032d87) toolbar_button_pane_g2

0x4a57,	// (0x00032d7f) toolbar_button_pane_g3

0x4a6f,	// (0x00032d97) toolbar_button_pane_g4

0x4a67,	// (0x00032d8f) toolbar_button_pane_g5

0x4a77,	// (0x00032d9f) toolbar_button_pane_g6

0x4a7f,	// (0x00032da7) toolbar_button_pane_g7

0x4a8f,	// (0x00032db7) toolbar_button_pane_g8

0x4a87,	// (0x00032daf) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0003db37) toolbar_button_pane_g

0x8bb4,	// (0x00036edc) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8bb4,	// (0x00036edc) list_single_2graphic_pane_g1_cp3

0xeee5,	// (0x0003d20d) list_single_2graphic_pane_g2_cp3_ParamLimits

0xeee5,	// (0x0003d20d) list_single_2graphic_pane_g2_cp3

0x4327,	// (0x0003264f) list_single_2graphic_pane_g3_cp3

0x8bd1,	// (0x00036ef9) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8bd1,	// (0x00036ef9) list_single_2graphic_pane_g4_cp3

0x8bdd,	// (0x00036f05) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8bdd,	// (0x00036f05) list_single_2graphic_pane_t1_cp3

0x431b,	// (0x00032643) list_single_midp_graphic_pane_g2_ParamLimits

0x431b,	// (0x00032643) list_single_midp_graphic_pane_g2

0x74f3,	// (0x0003581b) aid_zoom_text_primary

0x74fb,	// (0x00035823) aid_zoom_text_secondary

0x4695,	// (0x000329bd) status_small_pane_g7_ParamLimits

0x4695,	// (0x000329bd) status_small_pane_g7

0x46b8,	// (0x000329e0) status_small_pane_t1_ParamLimits

0x0265,	// (0x0002e58d) title_pane_g2

0x0003,

0xf592,	// (0x0003d8ba) title_pane_g

0x0b4b,	// (0x0002ee73) aid_size_cell_colour_1_pane_ParamLimits

0x0b4b,	// (0x0002ee73) aid_size_cell_colour_1_pane

0x0b5f,	// (0x0002ee87) aid_size_cell_colour_2_pane_ParamLimits

0x0b5f,	// (0x0002ee87) aid_size_cell_colour_2_pane

0x0b73,	// (0x0002ee9b) aid_size_cell_colour_3_pane_ParamLimits

0x0b73,	// (0x0002ee9b) aid_size_cell_colour_3_pane

0x0b87,	// (0x0002eeaf) aid_size_cell_colour_4_pane_ParamLimits

0x0b87,	// (0x0002eeaf) aid_size_cell_colour_4_pane

0x8477,	// (0x0003679f) title_pane_stacon_g1_ParamLimits

0x8477,	// (0x0003679f) title_pane_stacon_g1

0x4ff1,	// (0x00033319) popup_note_wait_window_g3_ParamLimits

0x4ff1,	// (0x00033319) popup_note_wait_window_g3

0x5067,	// (0x0003338f) popup_note_wait_window_t5_ParamLimits

0x5067,	// (0x0003338f) popup_note_wait_window_t5

0x3422,	// (0x0003174a) main_feb_china_hwr_fs_writing_pane

0x0f6b,	// (0x0002f293) popup_feb_china_hwr_fs_window_ParamLimits

0x0f6b,	// (0x0002f293) popup_feb_china_hwr_fs_window

0xeef6,	// (0x0003d21e) aid_size_cell_hwr_fs_ParamLimits

0xeef6,	// (0x0003d21e) aid_size_cell_hwr_fs

0x4b3f,	// (0x00032e67) bg_popup_sub_pane_cp3_ParamLimits

0x4b3f,	// (0x00032e67) bg_popup_sub_pane_cp3

0xef0b,	// (0x0003d233) grid_hwr_fs_pane_ParamLimits

0xef0b,	// (0x0003d233) grid_hwr_fs_pane

0x8c3a,	// (0x00036f62) linegrid_hwr_fs_pane_ParamLimits

0x8c3a,	// (0x00036f62) linegrid_hwr_fs_pane

0xef23,	// (0x0003d24b) cell_hwr_fs_pane_ParamLimits

0xef23,	// (0x0003d24b) cell_hwr_fs_pane

0x4b4b,	// (0x00032e73) linegrid_hwr_fs_pane_g1_ParamLimits

0x4b4b,	// (0x00032e73) linegrid_hwr_fs_pane_g1

0x198c,	// (0x0002fcb4) linegrid_hwr_fs_pane_g2_ParamLimits

0x198c,	// (0x0002fcb4) linegrid_hwr_fs_pane_g2

0x4b57,	// (0x00032e7f) linegrid_hwr_fs_pane_g3_ParamLimits

0x4b57,	// (0x00032e7f) linegrid_hwr_fs_pane_g3

0x8c6c,	// (0x00036f94) linegrid_hwr_fs_pane_g4_ParamLimits

0x8c6c,	// (0x00036f94) linegrid_hwr_fs_pane_g4

0x8c86,	// (0x00036fae) linegrid_hwr_fs_pane_g5_ParamLimits

0x8c86,	// (0x00036fae) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0003db5d) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0003db5d) linegrid_hwr_fs_pane_g

0x4b63,	// (0x00032e8b) cell_hwr_fs_pane_g1_ParamLimits

0x4b63,	// (0x00032e8b) cell_hwr_fs_pane_g1

0x495b,	// (0x00032c83) cell_hwr_fs_pane_g2_ParamLimits

0x495b,	// (0x00032c83) cell_hwr_fs_pane_g2

0x199e,	// (0x0002fcc6) cell_hwr_fs_pane_g3_ParamLimits

0x199e,	// (0x0002fcc6) cell_hwr_fs_pane_g3

0x19ab,	// (0x0002fcd3) cell_hwr_fs_pane_g4_ParamLimits

0x19ab,	// (0x0002fcd3) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0003db68) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0003db68) cell_hwr_fs_pane_g

0xef49,	// (0x0003d271) cell_hwr_fs_pane_t1

0x3422,	// (0x0003174a) grid_highlight_pane_cp6

0x3422,	// (0x0003174a) main_idle_act2_pane

0x3bcb,	// (0x00031ef3) aid_inside_area_popup_secondary

0x1aa7,	// (0x0002fdcf) aid_inside_area_window_primary_ParamLimits

0x1aa7,	// (0x0002fdcf) aid_inside_area_window_primary

0x5de2,	// (0x0003410a) ai2_news_ticker_pane

0x5dea,	// (0x00034112) aid_size_cell_ai1_link_ParamLimits

0x5dea,	// (0x00034112) aid_size_cell_ai1_link

0x5e04,	// (0x0003412c) popup_ai2_data_window_ParamLimits

0x5e04,	// (0x0003412c) popup_ai2_data_window

0x5e18,	// (0x00034140) popup_ai2_link_window_ParamLimits

0x5e18,	// (0x00034140) popup_ai2_link_window

0x4b3f,	// (0x00032e67) bg_popup_sub_pane_cp4_ParamLimits

0x4b3f,	// (0x00032e67) bg_popup_sub_pane_cp4

0x5e2c,	// (0x00034154) grid_ai2_link_pane_ParamLimits

0x5e2c,	// (0x00034154) grid_ai2_link_pane

0x5e43,	// (0x0003416b) popup_ai2_link_window_g1_ParamLimits

0x5e43,	// (0x0003416b) popup_ai2_link_window_g1

0x5e4f,	// (0x00034177) popup_ai2_link_window_g2_ParamLimits

0x5e4f,	// (0x00034177) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x0003dd34) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x0003dd34) popup_ai2_link_window_g

0x5e5e,	// (0x00034186) ai2_mp_button_pane

0x5e66,	// (0x0003418e) ai2_mp_volume_pane

0x4c64,	// (0x00032f8c) bg_popup_sub_pane_cp5_ParamLimits

0x4c64,	// (0x00032f8c) bg_popup_sub_pane_cp5

0x5e6e,	// (0x00034196) heading_ai2_gene_pane_ParamLimits

0x5e6e,	// (0x00034196) heading_ai2_gene_pane

0x5e7a,	// (0x000341a2) list_ai2_gene_pane_ParamLimits

0x5e7a,	// (0x000341a2) list_ai2_gene_pane

0x5ec2,	// (0x000341ea) cell_ai2_link_pane_ParamLimits

0x5ec2,	// (0x000341ea) cell_ai2_link_pane

0x5ed8,	// (0x00034200) cell_ai2_link_pane_g1

0x3422,	// (0x0003174a) grid_highlight_pane_cp7

0x904a,	// (0x00037372) ai2_mp_volume_pane_g1

0x5fb1,	// (0x000342d9) ai2_mp_volume_pane_g2

0x5f1e,	// (0x00034246) list_ai2_gene_pane_t1

0x5fa9,	// (0x000342d1) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x0003dd4d) ai2_mp_volume_pane_g

0x9052,	// (0x0003737a) volume_small_pane_cp3

0x5fb9,	// (0x000342e1) aid_size_cell_ai2_button

0x5fc1,	// (0x000342e9) grid_ai2_button_pane

0x5fca,	// (0x000342f2) cell_ai2_button_pane_ParamLimits

0x5fca,	// (0x000342f2) cell_ai2_button_pane

0x3418,	// (0x00031740) cell_ai2_button_pane_g1

0x3422,	// (0x0003174a) grid_highlight_pane_cp8

0x5f69,	// (0x00034291) ai2_gene_pane_t1_ParamLimits

0x5f69,	// (0x00034291) ai2_gene_pane_t1

0x0efd,	// (0x0002f225) aid_height_parent_landscape

0x1c46,	// (0x0002ff6e) aid_height_set_list

0x5971,	// (0x00033c99) aid_size_parent

0x5c49,	// (0x00033f71) aid_size_cell_graphic_pane_ParamLimits

0x5e8a,	// (0x000341b2) popup_ai2_data_window_g1_ParamLimits

0x5e8a,	// (0x000341b2) popup_ai2_data_window_g1

0x5e96,	// (0x000341be) ai2_news_ticker_pane_g1

0x5e9e,	// (0x000341c6) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x0003dd39) ai2_news_ticker_pane_g

0x5ea6,	// (0x000341ce) ai2_news_ticker_pane_t1

0x5eb4,	// (0x000341dc) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x0003dd3e) ai2_news_ticker_pane_t

0x5ee1,	// (0x00034209) heading_ai2_gene_pane_g1

0x5ee9,	// (0x00034211) heading_ai2_gene_pane_t1_ParamLimits

0x5ee9,	// (0x00034211) heading_ai2_gene_pane_t1

0x5efe,	// (0x00034226) list_highlight_pane_cp6

0x5f06,	// (0x0003422e) ai2_gene_pane_ParamLimits

0x5f06,	// (0x0003422e) ai2_gene_pane

0x5f2c,	// (0x00034254) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x0003dd43) list_ai2_gene_pane_t

0x5f3a,	// (0x00034262) list_highlight_pane_cp8_ParamLimits

0x5f3a,	// (0x00034262) list_highlight_pane_cp8

0x5f4b,	// (0x00034273) ai2_gene_pane_g1_ParamLimits

0x5f4b,	// (0x00034273) ai2_gene_pane_g1

0x5f5d,	// (0x00034285) ai2_gene_pane_g2_ParamLimits

0x5f5d,	// (0x00034285) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x0003dd48) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x0003dd48) ai2_gene_pane_g

0x3a5b,	// (0x00031d83) scroll_pane_cp12

0xee86,	// (0x0003d1ae) control_pane_t3_ParamLimits

0xee86,	// (0x0003d1ae) control_pane_t3

0x46a9,	// (0x000329d1) status_small_pane_g8_ParamLimits

0x46a9,	// (0x000329d1) status_small_pane_g8

0x0ffe,	// (0x0002f326) popup_find_window_ParamLimits

0x1279,	// (0x0002f5a1) popup_note_image_window_ParamLimits

0x7577,	// (0x0003589f) list_double2_graphic_pane_vc_g1_ParamLimits

0x7577,	// (0x0003589f) list_double2_graphic_pane_vc_g1

0x82f0,	// (0x00036618) list_double2_graphic_pane_vc_g2_ParamLimits

0x82f0,	// (0x00036618) list_double2_graphic_pane_vc_g2

0x82fc,	// (0x00036624) list_double2_graphic_pane_vc_g3_ParamLimits

0x82fc,	// (0x00036624) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0003db2b) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0003db2b) list_double2_graphic_pane_vc_g

0x7583,	// (0x000358ab) list_double2_graphic_pane_vc_t1_ParamLimits

0x7583,	// (0x000358ab) list_double2_graphic_pane_vc_t1

0x82f0,	// (0x00036618) list_single_heading_pane_vc_g1_ParamLimits

0x82f0,	// (0x00036618) list_single_heading_pane_vc_g1

0x82fc,	// (0x00036624) list_single_heading_pane_vc_g2_ParamLimits

0x82fc,	// (0x00036624) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003d93e) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003d93e) list_single_heading_pane_vc_g

0x7599,	// (0x000358c1) list_single_heading_pane_vc_t1_ParamLimits

0x7599,	// (0x000358c1) list_single_heading_pane_vc_t1

0x75af,	// (0x000358d7) list_single_heading_pane_vc_t2_ParamLimits

0x75af,	// (0x000358d7) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0003db4c) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0003db4c) list_single_heading_pane_vc_t

0x4a97,	// (0x00032dbf) list_setting_number_pane_vc_g1_ParamLimits

0x4a97,	// (0x00032dbf) list_setting_number_pane_vc_g1

0x4aa3,	// (0x00032dcb) list_setting_number_pane_vc_g2_ParamLimits

0x4aa3,	// (0x00032dcb) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0003db51) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0003db51) list_setting_number_pane_vc_g

0x4aaf,	// (0x00032dd7) list_setting_number_pane_vc_t1_ParamLimits

0x4aaf,	// (0x00032dd7) list_setting_number_pane_vc_t1

0x4ac3,	// (0x00032deb) list_setting_number_pane_vc_t2_ParamLimits

0x4ac3,	// (0x00032deb) list_setting_number_pane_vc_t2

0x4adf,	// (0x00032e07) list_setting_number_pane_vc_t3_ParamLimits

0x4adf,	// (0x00032e07) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0003db56) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0003db56) list_setting_number_pane_vc_t

0x4b07,	// (0x00032e2f) set_value_pane_vc_ParamLimits

0x4b07,	// (0x00032e2f) set_value_pane_vc

0x5bc6,	// (0x00033eee) list_double2_graphic_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_double2_graphic_pane_vc

0x5bc6,	// (0x00033eee) list_double2_large_graphic_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_double2_large_graphic_pane_vc

0x5bc6,	// (0x00033eee) list_double2_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_double2_pane_vc

0x5bc6,	// (0x00033eee) list_double_graphic_heading_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_double_graphic_heading_pane_vc

0x5bc6,	// (0x00033eee) list_double_graphic_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_double_graphic_pane_vc

0x5bc6,	// (0x00033eee) list_double_heading_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_double_heading_pane_vc

0x5bc6,	// (0x00033eee) list_double_large_graphic_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_double_large_graphic_pane_vc

0x5bc6,	// (0x00033eee) list_double_number_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_double_number_pane_vc

0x5bc6,	// (0x00033eee) list_double_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_double_pane_vc

0x5bc6,	// (0x00033eee) list_double_time_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_double_time_pane_vc

0x5bc6,	// (0x00033eee) list_setting_number_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_setting_number_pane_vc

0x5bc6,	// (0x00033eee) list_setting_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_setting_pane_vc

0x5bc6,	// (0x00033eee) list_single_graphic_heading_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_single_graphic_heading_pane_vc

0x5bc6,	// (0x00033eee) list_single_heading_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_single_heading_pane_vc

0x5bc6,	// (0x00033eee) list_single_number_heading_pane_vc_ParamLimits

0x5bc6,	// (0x00033eee) list_single_number_heading_pane_vc

0x7577,	// (0x0003589f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x7577,	// (0x0003589f) list_double_graphic_heading_pane_vc_g1

0x82f0,	// (0x00036618) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x82f0,	// (0x00036618) list_double_graphic_heading_pane_vc_g2

0x82fc,	// (0x00036624) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x82fc,	// (0x00036624) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x0003db2b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003db2b) list_double_graphic_heading_pane_vc_g

0x76b6,	// (0x000359de) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x76b6,	// (0x000359de) list_double_graphic_heading_pane_vc_t1

0x7599,	// (0x000358c1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x7599,	// (0x000358c1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa2c,	// (0x0003dd54) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x0003dd54) list_double_graphic_heading_pane_vc_t

0x4a97,	// (0x00032dbf) list_setting_pane_vc_g1_ParamLimits

0x4a97,	// (0x00032dbf) list_setting_pane_vc_g1

0x4aa3,	// (0x00032dcb) list_setting_pane_vc_g2_ParamLimits

0x4aa3,	// (0x00032dcb) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0003db51) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0003db51) list_setting_pane_vc_g

0x61c0,	// (0x000344e8) list_setting_pane_vc_t1_ParamLimits

0x61c0,	// (0x000344e8) list_setting_pane_vc_t1

0x61d4,	// (0x000344fc) list_setting_pane_vc_t2_ParamLimits

0x61d4,	// (0x000344fc) list_setting_pane_vc_t2

0x0001,

0xfa6f,	// (0x0003dd97) list_setting_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003dd97) list_setting_pane_vc_t

0x4b07,	// (0x00032e2f) set_value_pane_cp_vc_ParamLimits

0x4b07,	// (0x00032e2f) set_value_pane_cp_vc

0x82f0,	// (0x00036618) list_single_number_heading_pane_vc_g1_ParamLimits

0x82f0,	// (0x00036618) list_single_number_heading_pane_vc_g1

0x82fc,	// (0x00036624) list_single_number_heading_pane_vc_g2_ParamLimits

0x82fc,	// (0x00036624) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003d93e) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003d93e) list_single_number_heading_pane_vc_g

0x7599,	// (0x000358c1) list_single_number_heading_pane_vc_t1_ParamLimits

0x7599,	// (0x000358c1) list_single_number_heading_pane_vc_t1

0x76ca,	// (0x000359f2) list_single_number_heading_pane_vc_t2_ParamLimits

0x76ca,	// (0x000359f2) list_single_number_heading_pane_vc_t2

0x76de,	// (0x00035a06) list_single_number_heading_pane_vc_t3_ParamLimits

0x76de,	// (0x00035a06) list_single_number_heading_pane_vc_t3

0x0002,

0xfa74,	// (0x0003dd9c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x0003dd9c) list_single_number_heading_pane_vc_t

0x7577,	// (0x0003589f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x7577,	// (0x0003589f) list_single_graphic_heading_pane_vc_g1

0x82f0,	// (0x00036618) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x82f0,	// (0x00036618) list_single_graphic_heading_pane_vc_g4

0x82fc,	// (0x00036624) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x82fc,	// (0x00036624) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0003db2b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003db2b) list_single_graphic_heading_pane_vc_g

0x7599,	// (0x000358c1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x7599,	// (0x000358c1) list_single_graphic_heading_pane_vc_t1

0x76f0,	// (0x00035a18) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x76f0,	// (0x00035a18) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x0003dda3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0003dda3) list_single_graphic_heading_pane_vc_t

0x82f0,	// (0x00036618) list_double2_pane_vc_g1_ParamLimits

0x82f0,	// (0x00036618) list_double2_pane_vc_g1

0x82fc,	// (0x00036624) list_double2_pane_vc_g2_ParamLimits

0x82fc,	// (0x00036624) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x0003d93e) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x0003d93e) list_double2_pane_vc_g

0x7704,	// (0x00035a2c) list_double2_pane_vc_t1_ParamLimits

0x7704,	// (0x00035a2c) list_double2_pane_vc_t1

0x90ac,	// (0x000373d4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x90ac,	// (0x000373d4) list_double2_large_graphic_pane_vc_g1

0x82f0,	// (0x00036618) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x82f0,	// (0x00036618) list_double2_large_graphic_pane_vc_g2

0x82fc,	// (0x00036624) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x82fc,	// (0x00036624) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x0003d956) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x0003d956) list_double2_large_graphic_pane_vc_g

0x771a,	// (0x00035a42) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x771a,	// (0x00035a42) list_double2_large_graphic_pane_vc_t1

0x90b8,	// (0x000373e0) list_double_time_pane_vc_g1_ParamLimits

0x90b8,	// (0x000373e0) list_double_time_pane_vc_g1

0x90c4,	// (0x000373ec) list_double_time_pane_vc_g2_ParamLimits

0x90c4,	// (0x000373ec) list_double_time_pane_vc_g2

0x0001,

0xfa80,	// (0x0003dda8) list_double_time_pane_vc_g_ParamLimits

0xfa80,	// (0x0003dda8) list_double_time_pane_vc_g

0x7730,	// (0x00035a58) list_double_time_pane_vc_t1_ParamLimits

0x7730,	// (0x00035a58) list_double_time_pane_vc_t1

0x7749,	// (0x00035a71) list_double_time_pane_vc_t2_ParamLimits

0x7749,	// (0x00035a71) list_double_time_pane_vc_t2

0x7789,	// (0x00035ab1) list_double_time_pane_vc_t3_ParamLimits

0x7789,	// (0x00035ab1) list_double_time_pane_vc_t3

0x77a1,	// (0x00035ac9) list_double_time_pane_vc_t4_ParamLimits

0x77a1,	// (0x00035ac9) list_double_time_pane_vc_t4

0x0003,

0xfa85,	// (0x0003ddad) list_double_time_pane_vc_t_ParamLimits

0xfa85,	// (0x0003ddad) list_double_time_pane_vc_t

0x82f0,	// (0x00036618) list_double_pane_vc_g1_ParamLimits

0x82f0,	// (0x00036618) list_double_pane_vc_g1

0x82fc,	// (0x00036624) list_double_pane_vc_g2_ParamLimits

0x82fc,	// (0x00036624) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x0003d93e) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x0003d93e) list_double_pane_vc_g

0x77b5,	// (0x00035add) list_double_pane_vc_t1_ParamLimits

0x77b5,	// (0x00035add) list_double_pane_vc_t1

0x77c7,	// (0x00035aef) list_double_pane_vc_t2_ParamLimits

0x77c7,	// (0x00035aef) list_double_pane_vc_t2

0x0001,

0xfa8e,	// (0x0003ddb6) list_double_pane_vc_t_ParamLimits

0xfa8e,	// (0x0003ddb6) list_double_pane_vc_t

0x82f0,	// (0x00036618) list_double_number_pane_vc_g1_ParamLimits

0x82f0,	// (0x00036618) list_double_number_pane_vc_g1

0x82fc,	// (0x00036624) list_double_number_pane_vc_g2_ParamLimits

0x82fc,	// (0x00036624) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x0003d93e) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x0003d93e) list_double_number_pane_vc_g

0x77df,	// (0x00035b07) list_double_number_pane_vc_t1_ParamLimits

0x77df,	// (0x00035b07) list_double_number_pane_vc_t1

0x77f3,	// (0x00035b1b) list_double_number_pane_vc_t2_ParamLimits

0x77f3,	// (0x00035b1b) list_double_number_pane_vc_t2

0x77c7,	// (0x00035aef) list_double_number_pane_vc_t3_ParamLimits

0x77c7,	// (0x00035aef) list_double_number_pane_vc_t3

0x0002,

0xfa93,	// (0x0003ddbb) list_double_number_pane_vc_t_ParamLimits

0xfa93,	// (0x0003ddbb) list_double_number_pane_vc_t

0x90d0,	// (0x000373f8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x90d0,	// (0x000373f8) list_double_large_graphic_pane_vc_g1

0x90dc,	// (0x00037404) list_double_large_graphic_pane_vc_g2_ParamLimits

0x90dc,	// (0x00037404) list_double_large_graphic_pane_vc_g2

0x82fc,	// (0x00036624) list_double_large_graphic_pane_vc_g3_ParamLimits

0x82fc,	// (0x00036624) list_double_large_graphic_pane_vc_g3

0x7805,	// (0x00035b2d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7805,	// (0x00035b2d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa9a,	// (0x0003ddc2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa9a,	// (0x0003ddc2) list_double_large_graphic_pane_vc_g

0x7811,	// (0x00035b39) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7811,	// (0x00035b39) list_double_large_graphic_pane_vc_t1

0x7823,	// (0x00035b4b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7823,	// (0x00035b4b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa3,	// (0x0003ddcb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa3,	// (0x0003ddcb) list_double_large_graphic_pane_vc_t

0x82f0,	// (0x00036618) list_double_heading_pane_vc_g1_ParamLimits

0x82f0,	// (0x00036618) list_double_heading_pane_vc_g1

0x82fc,	// (0x00036624) list_double_heading_pane_vc_g2_ParamLimits

0x82fc,	// (0x00036624) list_double_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003d93e) list_double_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003d93e) list_double_heading_pane_vc_g

0x783c,	// (0x00035b64) list_double_heading_pane_vc_t1_ParamLimits

0x783c,	// (0x00035b64) list_double_heading_pane_vc_t1

0x7599,	// (0x000358c1) list_double_heading_pane_vc_t2_ParamLimits

0x7599,	// (0x000358c1) list_double_heading_pane_vc_t2

0x0001,

0xfaa8,	// (0x0003ddd0) list_double_heading_pane_vc_t_ParamLimits

0xfaa8,	// (0x0003ddd0) list_double_heading_pane_vc_t

0x7577,	// (0x0003589f) list_double_graphic_pane_vc_g1_ParamLimits

0x7577,	// (0x0003589f) list_double_graphic_pane_vc_g1

0x90eb,	// (0x00037413) list_double_graphic_pane_vc_g2_ParamLimits

0x90eb,	// (0x00037413) list_double_graphic_pane_vc_g2

0x90fa,	// (0x00037422) list_double_graphic_pane_vc_g3_ParamLimits

0x90fa,	// (0x00037422) list_double_graphic_pane_vc_g3

0x0002,

0xfaad,	// (0x0003ddd5) list_double_graphic_pane_vc_g_ParamLimits

0xfaad,	// (0x0003ddd5) list_double_graphic_pane_vc_g

0x7850,	// (0x00035b78) list_double_graphic_pane_vc_t1_ParamLimits

0x7850,	// (0x00035b78) list_double_graphic_pane_vc_t1

0x77c7,	// (0x00035aef) list_double_graphic_pane_vc_t2_ParamLimits

0x77c7,	// (0x00035aef) list_double_graphic_pane_vc_t2

0x0001,

0xfab4,	// (0x0003dddc) list_double_graphic_pane_vc_t_ParamLimits

0xfab4,	// (0x0003dddc) list_double_graphic_pane_vc_t

0x7bfc,	// (0x00035f24) aid_size_cell_fastswap

0xeb56,	// (0x0003ce7e) aid_size_cell_touch_ParamLimits

0xeb56,	// (0x0003ce7e) aid_size_cell_touch

0x7e5f,	// (0x00036187) popup_fast_swap_wide_window_ParamLimits

0x7e5f,	// (0x00036187) popup_fast_swap_wide_window

0xeca1,	// (0x0003cfc9) touch_pane_ParamLimits

0xeca1,	// (0x0003cfc9) touch_pane

0x3ab1,	// (0x00031dd9) button_value_adjust_pane_cp2

0x722e,	// (0x00035556) button_value_adjust_pane_cp4

0x724e,	// (0x00035576) form_field_data_pane_cp2

0xe818,	// (0x0003cb40) form_field_data_wide_pane_cp2

0x3e03,	// (0x0003212b) bg_scroll_pane_ParamLimits

0x865f,	// (0x00036987) scroll_handle_pane_ParamLimits

0x8673,	// (0x0003699b) scroll_sc2_down_pane_ParamLimits

0x8673,	// (0x0003699b) scroll_sc2_down_pane

0x3e34,	// (0x0003215c) scroll_sc2_up_pane_ParamLimits

0x3e34,	// (0x0003215c) scroll_sc2_up_pane

0x1fd7,	// (0x000302ff) grid_wheel_folder_pane_g1_ParamLimits

0x1fd7,	// (0x000302ff) grid_wheel_folder_pane_g1

0x8905,	// (0x00036c2d) clock_nsta_pane_cp2_ParamLimits

0x8905,	// (0x00036c2d) clock_nsta_pane_cp2

0x0e0e,	// (0x0002f136) listscroll_midp_pane_ParamLimits

0x0e1f,	// (0x0002f147) midp_canvas_pane

0x46fd,	// (0x00032a25) nsta_clock_indic_pane

0x4741,	// (0x00032a69) listscroll_form_pane_vc

0x4749,	// (0x00032a71) listscroll_set_pane_vc_ParamLimits

0x4749,	// (0x00032a71) listscroll_set_pane_vc

0x16a0,	// (0x0002f9c8) clock_nsta_pane

0x16ca,	// (0x0002f9f2) indicator_nsta_pane

0x498d,	// (0x00032cb5) bg_popup_sub_pane_cp2_ParamLimits

0x49a1,	// (0x00032cc9) find_pane_cp2_ParamLimits

0x49a1,	// (0x00032cc9) find_pane_cp2

0x49b7,	// (0x00032cdf) grid_toobar_pane_ParamLimits

0x4b13,	// (0x00032e3b) list_form_gen_pane_vc_ParamLimits

0x4b13,	// (0x00032e3b) list_form_gen_pane_vc

0x4b29,	// (0x00032e51) scroll_pane_cp8_vc_ParamLimits

0x4b29,	// (0x00032e51) scroll_pane_cp8_vc

0x4b79,	// (0x00032ea1) data_form_wide_pane_vc_ParamLimits

0x4b79,	// (0x00032ea1) data_form_wide_pane_vc

0x4b85,	// (0x00032ead) form_field_data_wide_pane_vc_g1

0x4b8d,	// (0x00032eb5) form_field_data_wide_pane_vc_t1_ParamLimits

0x4b8d,	// (0x00032eb5) form_field_data_wide_pane_vc_t1

0x3ac5,	// (0x00031ded) input_focus_pane_cp6_vc_ParamLimits

0x3ac5,	// (0x00031ded) input_focus_pane_cp6_vc

0x1a47,	// (0x0002fd6f) list_midp_pane_ParamLimits

0x5983,	// (0x00033cab) scroll_pane_cp16_ParamLimits

0x5983,	// (0x00033cab) scroll_pane_cp16

0x4dee,	// (0x00033116) button_value_adjust_pane_ParamLimits

0x4dee,	// (0x00033116) button_value_adjust_pane

0x1c57,	// (0x0002ff7f) button_value_adjust_pane_cp6_ParamLimits

0x1c57,	// (0x0002ff7f) button_value_adjust_pane_cp6

0x1d6d,	// (0x00030095) settings_code_pane_cp_ParamLimits

0x1d6d,	// (0x00030095) settings_code_pane_cp

0x3418,	// (0x00031740) cell_touch_pane_g1

0x3418,	// (0x00031740) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0003da74) cell_touch_pane_g

0x1eb6,	// (0x000301de) cell_touch_pane_cp_ParamLimits

0x1eb6,	// (0x000301de) cell_touch_pane_cp

0x1ed2,	// (0x000301fa) cell_touch_pane_ParamLimits

0x1ed2,	// (0x000301fa) cell_touch_pane

0x3418,	// (0x00031740) scroll_sc2_down_pane_g1

0x3418,	// (0x00031740) scroll_sc2_up_pane_g1

0x3422,	// (0x0003174a) bg_set_opt_pane_cp4_vc

0x5fdc,	// (0x00034304) list_set_graphic_pane_vc_g1_ParamLimits

0x5fdc,	// (0x00034304) list_set_graphic_pane_vc_g1

0x5fe8,	// (0x00034310) list_set_graphic_pane_vc_g2_ParamLimits

0x5fe8,	// (0x00034310) list_set_graphic_pane_vc_g2

0x0001,

0xfa31,	// (0x0003dd59) list_set_graphic_pane_vc_g_ParamLimits

0xfa31,	// (0x0003dd59) list_set_graphic_pane_vc_g

0x5ff4,	// (0x0003431c) text_primary_small_cp13_vc_ParamLimits

0x5ff4,	// (0x0003431c) text_primary_small_cp13_vc

0x600c,	// (0x00034334) list_set_graphic_pane_vc_ParamLimits

0x600c,	// (0x00034334) list_set_graphic_pane_vc

0x3422,	// (0x0003174a) input_focus_pane_cp2_vc

0x3418,	// (0x00031740) setting_code_pane_vc_g1

0x6020,	// (0x00034348) setting_code_pane_vc_t1

0x602e,	// (0x00034356) set_text_pane_vc_t1_ParamLimits

0x602e,	// (0x00034356) set_text_pane_vc_t1

0x3422,	// (0x0003174a) input_focus_pane_cp1_vc

0x604d,	// (0x00034375) list_set_text_pane_vc

0x3418,	// (0x00031740) setting_text_pane_vc_g1

0x3422,	// (0x0003174a) bg_set_opt_pane_cp2_vc

0x6057,	// (0x0003437f) setting_slider_graphic_pane_vc_g1

0x605f,	// (0x00034387) setting_slider_graphic_pane_vc_t1

0x606d,	// (0x00034395) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa36,	// (0x0003dd5e) setting_slider_graphic_pane_vc_t

0x607b,	// (0x000343a3) slider_set_pane_cp_vc

0x6083,	// (0x000343ab) slider_set_pane_vc_g1

0x608c,	// (0x000343b4) slider_set_pane_vc_g2

0x0006,

0xfa3b,	// (0x0003dd63) slider_set_pane_vc_g

0x3b2c,	// (0x00031e54) set_opt_bg_pane_g1_copy1

0x3b34,	// (0x00031e5c) set_opt_bg_pane_g2_copy1

0x60b8,	// (0x000343e0) set_opt_bg_pane_g3_copy1

0x3b44,	// (0x00031e6c) set_opt_bg_pane_g4_copy1

0x3b4c,	// (0x00031e74) set_opt_bg_pane_g5_copy1

0x3b54,	// (0x00031e7c) set_opt_bg_pane_g6_copy1

0x60c0,	// (0x000343e8) set_opt_bg_pane_g7_copy1

0x60ca,	// (0x000343f2) set_opt_bg_pane_g8_copy1

0x60d2,	// (0x000343fa) set_opt_bg_pane_g9_copy1

0x3422,	// (0x0003174a) bg_set_opt_pane_cp_vc

0x60da,	// (0x00034402) setting_slider_pane_vc_t1

0x605f,	// (0x00034387) setting_slider_pane_vc_t2

0x606d,	// (0x00034395) setting_slider_pane_vc_t3

0x0002,

0xfa4a,	// (0x0003dd72) setting_slider_pane_vc_t

0x607b,	// (0x000343a3) slider_set_pane_vc

0x8caa,	// (0x00036fd2) volume_set_pane_vc_g1

0x905b,	// (0x00037383) volume_set_pane_vc_g2

0x9064,	// (0x0003738c) volume_set_pane_vc_g3

0x906d,	// (0x00037395) volume_set_pane_vc_g4

0x9076,	// (0x0003739e) volume_set_pane_vc_g5

0x907f,	// (0x000373a7) volume_set_pane_vc_g6

0x9088,	// (0x000373b0) volume_set_pane_vc_g7

0x9091,	// (0x000373b9) volume_set_pane_vc_g8

0x909a,	// (0x000373c2) volume_set_pane_vc_g9

0x90a3,	// (0x000373cb) volume_set_pane_vc_g10

0x0009,

0xfa51,	// (0x0003dd79) volume_set_pane_vc_g

0x60e9,	// (0x00034411) volume_set_pane_vc

0x60f1,	// (0x00034419) button_value_adjust_pane_cp1_vc

0x60fb,	// (0x00034423) list_highlight_pane_cp2_vc

0x6104,	// (0x0003442c) list_set_pane_vc_ParamLimits

0x6104,	// (0x0003442c) list_set_pane_vc

0x6156,	// (0x0003447e) main_pane_set_vc_t1_ParamLimits

0x6156,	// (0x0003447e) main_pane_set_vc_t1

0x616b,	// (0x00034493) main_pane_set_vc_t2_ParamLimits

0x616b,	// (0x00034493) main_pane_set_vc_t2

0x617d,	// (0x000344a5) main_pane_set_vc_t3_ParamLimits

0x617d,	// (0x000344a5) main_pane_set_vc_t3

0x618f,	// (0x000344b7) main_pane_set_vc_t4_ParamLimits

0x618f,	// (0x000344b7) main_pane_set_vc_t4

0x0003,

0xfa66,	// (0x0003dd8e) main_pane_set_vc_t_ParamLimits

0xfa66,	// (0x0003dd8e) main_pane_set_vc_t

0x61a1,	// (0x000344c9) setting_code_pane_vc_ParamLimits

0x61a1,	// (0x000344c9) setting_code_pane_vc

0x61b0,	// (0x000344d8) setting_slider_graphic_pane_vc

0x61b0,	// (0x000344d8) setting_slider_pane_vc

0x61b0,	// (0x000344d8) setting_text_pane_vc

0x61b0,	// (0x000344d8) setting_volume_pane_vc

0x61b8,	// (0x000344e0) scroll_pane_cp121_vc

0x3a9f,	// (0x00031dc7) set_content_pane_vc

0x61f6,	// (0x0003451e) button_value_adjust_pane_g1

0x61ff,	// (0x00034527) button_value_adjust_pane_g2

0x0001,

0xfab9,	// (0x0003dde1) button_value_adjust_pane_g

0x6208,	// (0x00034530) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6208,	// (0x00034530) form_field_slider_wide_pane_vc_t1

0x621c,	// (0x00034544) form_field_slider_wide_pane_vc_t2_ParamLimits

0x621c,	// (0x00034544) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabe,	// (0x0003dde6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabe,	// (0x0003dde6) form_field_slider_wide_pane_vc_t

0x3470,	// (0x00031798) input_focus_pane_cp10_vc_ParamLimits

0x3470,	// (0x00031798) input_focus_pane_cp10_vc

0x622e,	// (0x00034556) slider_cont_pane_cp1_vc_ParamLimits

0x622e,	// (0x00034556) slider_cont_pane_cp1_vc

0x6083,	// (0x000343ab) slider_form_pane_g1_cp2

0x608c,	// (0x000343b4) slider_form_pane_g2_cp2

0x6247,	// (0x0003456f) form_field_slider_pane_vc_t3

0x6255,	// (0x0003457d) form_field_slider_pane_vc_t4

0x6263,	// (0x0003458b) slider_form_pane_vc_ParamLimits

0x6263,	// (0x0003458b) slider_form_pane_vc

0x6270,	// (0x00034598) form_field_slider_pane_vc_t1_ParamLimits

0x6270,	// (0x00034598) form_field_slider_pane_vc_t1

0x621c,	// (0x00034544) form_field_slider_pane_vc_t2_ParamLimits

0x621c,	// (0x00034544) form_field_slider_pane_vc_t2

0x0001,

0xface,	// (0x0003ddf6) form_field_slider_pane_vc_t_ParamLimits

0xface,	// (0x0003ddf6) form_field_slider_pane_vc_t

0x3470,	// (0x00031798) input_focus_pane_cp9_vc_ParamLimits

0x3470,	// (0x00031798) input_focus_pane_cp9_vc

0x628c,	// (0x000345b4) slider_cont_pane_vc_ParamLimits

0x628c,	// (0x000345b4) slider_cont_pane_vc

0x629e,	// (0x000345c6) list_form_graphic_pane_cp_vc_ParamLimits

0x629e,	// (0x000345c6) list_form_graphic_pane_cp_vc

0x4b85,	// (0x00032ead) form_field_popup_wide_pane_vc_g1

0x62b3,	// (0x000345db) form_field_popup_wide_pane_vc_t1_ParamLimits

0x62b3,	// (0x000345db) form_field_popup_wide_pane_vc_t1

0x3ac5,	// (0x00031ded) input_focus_pane_cp8_vc_ParamLimits

0x3ac5,	// (0x00031ded) input_focus_pane_cp8_vc

0x62ca,	// (0x000345f2) list_form_wide_pane_vc_ParamLimits

0x62ca,	// (0x000345f2) list_form_wide_pane_vc

0x62d6,	// (0x000345fe) list_form_graphic_pane_vc_g1

0x62de,	// (0x00034606) list_form_graphic_pane_vc_t1_ParamLimits

0x62de,	// (0x00034606) list_form_graphic_pane_vc_t1

0x347e,	// (0x000317a6) list_highlight_pane_cp5_vc_ParamLimits

0x347e,	// (0x000317a6) list_highlight_pane_cp5_vc

0x62fa,	// (0x00034622) list_form_graphic_pane_vc_ParamLimits

0x62fa,	// (0x00034622) list_form_graphic_pane_vc

0x4b85,	// (0x00032ead) form_field_popup_pane_vc_g1

0x6310,	// (0x00034638) form_field_popup_pane_vc_t1_ParamLimits

0x6310,	// (0x00034638) form_field_popup_pane_vc_t1

0x3ac5,	// (0x00031ded) input_focus_pane_cp7_vc_ParamLimits

0x3ac5,	// (0x00031ded) input_focus_pane_cp7_vc

0x6327,	// (0x0003464f) list_form_pane_vc_ParamLimits

0x6327,	// (0x0003464f) list_form_pane_vc

0x6333,	// (0x0003465b) data_form_pane_vc_t1_ParamLimits

0x6333,	// (0x0003465b) data_form_pane_vc_t1

0x3b2c,	// (0x00031e54) input_focus_pane_vc_g1

0x3b34,	// (0x00031e5c) input_focus_pane_vc_g2

0x3b3c,	// (0x00031e64) input_focus_pane_vc_g3

0x3b44,	// (0x00031e6c) input_focus_pane_vc_g4

0x3b4c,	// (0x00031e74) input_focus_pane_vc_g5

0x3b54,	// (0x00031e7c) input_focus_pane_vc_g6

0x3b5c,	// (0x00031e84) input_focus_pane_vc_g7

0x3b64,	// (0x00031e8c) input_focus_pane_vc_g8

0x3b6c,	// (0x00031e94) input_focus_pane_vc_g9

0x3418,	// (0x00031740) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0003d9fd) input_focus_pane_vc_g

0x4b79,	// (0x00032ea1) data_form_pane_vc_ParamLimits

0x4b79,	// (0x00032ea1) data_form_pane_vc

0x4b85,	// (0x00032ead) form_field_data_pane_vc_g1

0x634e,	// (0x00034676) form_field_data_pane_vc_t1_ParamLimits

0x634e,	// (0x00034676) form_field_data_pane_vc_t1

0x3ac5,	// (0x00031ded) input_focus_pane_vc_ParamLimits

0x3ac5,	// (0x00031ded) input_focus_pane_vc

0x6368,	// (0x00034690) button_value_adjust_pane_cp3_vc

0x6370,	// (0x00034698) button_value_adjust_pane_cp5_vc

0x6378,	// (0x000346a0) form_field_data_pane_vc_ParamLimits

0x6378,	// (0x000346a0) form_field_data_pane_vc

0x638f,	// (0x000346b7) form_field_data_pane_vc_cp2

0x6397,	// (0x000346bf) form_field_data_wide_pane_vc_ParamLimits

0x6397,	// (0x000346bf) form_field_data_wide_pane_vc

0x63ad,	// (0x000346d5) form_field_data_wide_pane_vc_cp2

0x63b5,	// (0x000346dd) form_field_popup_pane_vc_ParamLimits

0x63b5,	// (0x000346dd) form_field_popup_pane_vc

0x63cc,	// (0x000346f4) form_field_popup_wide_pane_vc_ParamLimits

0x63cc,	// (0x000346f4) form_field_popup_wide_pane_vc

0x63e2,	// (0x0003470a) form_field_slider_pane_vc_ParamLimits

0x63e2,	// (0x0003470a) form_field_slider_pane_vc

0x63f5,	// (0x0003471d) form_field_slider_wide_pane_vc_ParamLimits

0x63f5,	// (0x0003471d) form_field_slider_wide_pane_vc

0x1ef0,	// (0x00030218) grid_touch_1_pane_ParamLimits

0x1ef0,	// (0x00030218) grid_touch_1_pane

0x1f04,	// (0x0003022c) grid_touch_2_pane_ParamLimits

0x1f04,	// (0x0003022c) grid_touch_2_pane

0x6452,	// (0x0003477a) touch_pane_g1_ParamLimits

0x6452,	// (0x0003477a) touch_pane_g1

0x6408,	// (0x00034730) cell_app_pane_cp_wide_ParamLimits

0x6408,	// (0x00034730) cell_app_pane_cp_wide

0x6419,	// (0x00034741) grid_popup_fast_wide_pane_ParamLimits

0x6419,	// (0x00034741) grid_popup_fast_wide_pane

0x642d,	// (0x00034755) scroll_pane_cp19_ParamLimits

0x642d,	// (0x00034755) scroll_pane_cp19

0x3422,	// (0x0003174a) bg_popup_window_pane_cp20

0x6441,	// (0x00034769) listscroll_popup_fast_wide_pane

0x4783,	// (0x00032aab) grid_indicator_nsta_pane

0x6449,	// (0x00034771) clock_nsta_pane_g1

0x6460,	// (0x00034788) clock_nsta_pane_t1

0x1f2e,	// (0x00030256) cell_indicator_nsta_pane_ParamLimits

0x1f2e,	// (0x00030256) cell_indicator_nsta_pane

0x6452,	// (0x0003477a) cell_indicator_nsta_pane_g1

0x1f4b,	// (0x00030273) cell_indicator_nsta_pane_g2

0x0001,

0xfad8,	// (0x0003de00) cell_indicator_nsta_pane_g

0x647c,	// (0x000347a4) clock_nsta_pane_cp

0x6484,	// (0x000347ac) indicator_nsta_pane_cp

0x648c,	// (0x000347b4) nsta_clock_indic_pane_g1

0x34ba,	// (0x000317e2) grid_indicator_pane

0x3f26,	// (0x0003224e) scroll_pane_cp29

0x8854,	// (0x00036b7c) indicator_nsta_pane_cp2_ParamLimits

0x8854,	// (0x00036b7c) indicator_nsta_pane_cp2

0x347e,	// (0x000317a6) main_apps_wheel_pane

0x4ca1,	// (0x00032fc9) form_midp_field_text_pane_ParamLimits

0x4dce,	// (0x000330f6) scroll_bar_cp050_ParamLimits

0x64c4,	// (0x000347ec) cell_indicator_pane_ParamLimits

0x64c4,	// (0x000347ec) cell_indicator_pane

0x64e1,	// (0x00034809) cell_indicator_pane_g1

0x1f61,	// (0x00030289) grid_wheel_folder_pane_ParamLimits

0x1f61,	// (0x00030289) grid_wheel_folder_pane

0x1f6f,	// (0x00030297) list_wheel_apps_pane_ParamLimits

0x1f6f,	// (0x00030297) list_wheel_apps_pane

0x1f7d,	// (0x000302a5) main_apps_wheel_pane_g1_ParamLimits

0x1f7d,	// (0x000302a5) main_apps_wheel_pane_g1

0x1f89,	// (0x000302b1) main_apps_wheel_pane_g2_ParamLimits

0x1f89,	// (0x000302b1) main_apps_wheel_pane_g2

0x0001,

0xfae7,	// (0x0003de0f) main_apps_wheel_pane_g_ParamLimits

0xfae7,	// (0x0003de0f) main_apps_wheel_pane_g

0x1f97,	// (0x000302bf) main_apps_wheel_pane_t1_ParamLimits

0x1f97,	// (0x000302bf) main_apps_wheel_pane_t1

0x1fab,	// (0x000302d3) list_wheel_apps_pane_g1

0x1fb3,	// (0x000302db) list_wheel_apps_pane_g2

0x1fbb,	// (0x000302e3) list_wheel_apps_pane_g3

0x1fc3,	// (0x000302eb) list_wheel_apps_pane_g4

0x1fcd,	// (0x000302f5) list_wheel_apps_pane_g5

0x0004,

0xfaec,	// (0x0003de14) list_wheel_apps_pane_g

0x4379,	// (0x000326a1) navi_icon_text_pane

0x159b,	// (0x0002f8c3) aid_fill_nsta

0x1fe4,	// (0x0003030c) navi_icon_text_pane_g1

0x1ff0,	// (0x00030318) navi_icon_text_pane_t1

0x4215,	// (0x0003253d) list_set_graphic_pane_t1_ParamLimits

0x4215,	// (0x0003253d) list_set_graphic_pane_t1

0x54a5,	// (0x000337cd) popup_midp_note_alarm_window_t6_ParamLimits

0x54a5,	// (0x000337cd) popup_midp_note_alarm_window_t6

0x54b7,	// (0x000337df) popup_midp_note_alarm_window_t7_ParamLimits

0x54b7,	// (0x000337df) popup_midp_note_alarm_window_t7

0x54c9,	// (0x000337f1) popup_midp_note_alarm_window_t8_ParamLimits

0x54c9,	// (0x000337f1) popup_midp_note_alarm_window_t8

0x54db,	// (0x00033803) popup_midp_note_alarm_window_t9_ParamLimits

0x54db,	// (0x00033803) popup_midp_note_alarm_window_t9

0x54ed,	// (0x00033815) popup_midp_note_alarm_window_t10_ParamLimits

0x54ed,	// (0x00033815) popup_midp_note_alarm_window_t10

0x54ff,	// (0x00033827) popup_midp_note_alarm_window_t11_ParamLimits

0x54ff,	// (0x00033827) popup_midp_note_alarm_window_t11

0x5511,	// (0x00033839) scroll_pane_cp17_ParamLimits

0x5511,	// (0x00033839) scroll_pane_cp17

0x8caa,	// (0x00036fd2) volume_small_pane_cp_g1

0x9106,	// (0x0003742e) volume_small_pane_cp_g2

0x910f,	// (0x00037437) volume_small_pane_cp_g3

0x9118,	// (0x00037440) volume_small_pane_cp_g4

0x9121,	// (0x00037449) volume_small_pane_cp_g5

0x912a,	// (0x00037452) volume_small_pane_cp_g6

0x9133,	// (0x0003745b) volume_small_pane_cp_g7

0x913c,	// (0x00037464) volume_small_pane_cp_g8

0x9145,	// (0x0003746d) volume_small_pane_cp_g9

0x914e,	// (0x00037476) volume_small_pane_cp_g10

0x4525,	// (0x0003284d) midp_ticker_pane_g1_ParamLimits

0x4531,	// (0x00032859) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0003dac5) midp_ticker_pane_g_ParamLimits

0x0eba,	// (0x0002f1e2) midp_ticker_pane_t1_ParamLimits

0x15bb,	// (0x0002f8e3) aid_fill_nsta_2

0x4dba,	// (0x000330e2) list_form2_midp_pane

0x5ba4,	// (0x00033ecc) midp_editing_number_pane_ParamLimits

0x5bb3,	// (0x00033edb) midp_ticker_pane_ParamLimits

0x64eb,	// (0x00034813) form2_midp_field_pane

0x64f3,	// (0x0003481b) scroll_pane_cp51

0x6513,	// (0x0003483b) form2_midp_button_pane_ParamLimits

0x6513,	// (0x0003483b) form2_midp_button_pane

0x6525,	// (0x0003484d) form2_midp_content_pane_ParamLimits

0x6525,	// (0x0003484d) form2_midp_content_pane

0x653f,	// (0x00034867) form2_midp_field_choice_group_pane

0x6547,	// (0x0003486f) form2_midp_field_pane_g1

0x654f,	// (0x00034877) form2_midp_field_pane_g2

0x6557,	// (0x0003487f) form2_midp_field_pane_g3

0x655f,	// (0x00034887) form2_midp_field_pane_g4

0x0003,

0xfb11,	// (0x0003de39) form2_midp_field_pane_g

0x6567,	// (0x0003488f) form2_midp_gauge_slider_pane

0x656f,	// (0x00034897) form2_midp_gauge_wait_pane

0x6577,	// (0x0003489f) form2_midp_image_pane_ParamLimits

0x6577,	// (0x0003489f) form2_midp_image_pane

0x6592,	// (0x000348ba) form2_midp_label_pane_ParamLimits

0x6592,	// (0x000348ba) form2_midp_label_pane

0x201e,	// (0x00030346) form2_midp_label_pane_cp_ParamLimits

0x201e,	// (0x00030346) form2_midp_label_pane_cp

0x65ab,	// (0x000348d3) form2_midp_string_pane_ParamLimits

0x65ab,	// (0x000348d3) form2_midp_string_pane

0x7862,	// (0x00035b8a) form2_midp_text_pane_ParamLimits

0x7862,	// (0x00035b8a) form2_midp_text_pane

0x65bd,	// (0x000348e5) form2_midp_time_pane

0x65cd,	// (0x000348f5) input_focus_pane_cp51_ParamLimits

0x65cd,	// (0x000348f5) input_focus_pane_cp51

0x65e5,	// (0x0003490d) form2_midp_label_pane_t1_ParamLimits

0x65e5,	// (0x0003490d) form2_midp_label_pane_t1

0x787d,	// (0x00035ba5) form2_mdip_text_pane_t1_ParamLimits

0x787d,	// (0x00035ba5) form2_mdip_text_pane_t1

0x7899,	// (0x00035bc1) form2_midp_time_pane_t1

0x662d,	// (0x00034955) form2_midp_gauge_slider_pane_t1

0x203f,	// (0x00030367) form2_midp_gauge_slider_pane_t2

0x2051,	// (0x00030379) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1a,	// (0x0003de42) form2_midp_gauge_slider_pane_t

0x663f,	// (0x00034967) form2_midp_slider_pane

0x664b,	// (0x00034973) form2_midp_gauge_wait_pane_t1

0x6659,	// (0x00034981) form2_midp_wait_pane_ParamLimits

0x6659,	// (0x00034981) form2_midp_wait_pane

0x2063,	// (0x0003038b) list_single_2graphic_pane_cp4_ParamLimits

0x2063,	// (0x0003038b) list_single_2graphic_pane_cp4

0x19ce,	// (0x0002fcf6) list_single_midp_graphic_pane_cp_ParamLimits

0x19ce,	// (0x0002fcf6) list_single_midp_graphic_pane_cp

0x3422,	// (0x0003174a) list_highlight_pane_cp20

0x6684,	// (0x000349ac) list_single_2graphic_pane_g1_cp4

0x5ee1,	// (0x00034209) list_single_2graphic_pane_g2_cp4

0x668c,	// (0x000349b4) list_single_2graphic_pane_t1_cp4

0x347e,	// (0x000317a6) list_highlight_pane_cp21

0x669b,	// (0x000349c3) list_single_midp_graphic_pane_g4_cp

0x66aa,	// (0x000349d2) list_single_midp_graphic_pane_t1_cp

0x207a,	// (0x000303a2) form2_mdip_string_pane_t1_ParamLimits

0x207a,	// (0x000303a2) form2_mdip_string_pane_t1

0x3422,	// (0x0003174a) bg_wml_button_pane_cp2

0x3418,	// (0x00031740) form2_midp_image_pane_g1

0x835b,	// (0x00036683) list_double_large_graphic_pane_g5_ParamLimits

0x835b,	// (0x00036683) list_double_large_graphic_pane_g5

0x0e0e,	// (0x0002f136) midp_form_pane_ParamLimits

0x347e,	// (0x000317a6) main_apps_wheel_pane_ParamLimits

0x12f7,	// (0x0002f61f) popup_preview_window_ParamLimits

0x12f7,	// (0x0002f61f) popup_preview_window

0x482e,	// (0x00032b56) popup_touch_info_window_ParamLimits

0x482e,	// (0x00032b56) popup_touch_info_window

0x484c,	// (0x00032b74) popup_touch_menu_window_ParamLimits

0x484c,	// (0x00032b74) popup_touch_menu_window

0x340e,	// (0x00031736) bg_popup_sub_pane_cp6

0xaea6,	// (0x000391ce) list_touch_menu_pane

0xaeae,	// (0x000391d6) list_single_touch_menu_pane_ParamLimits

0xaeae,	// (0x000391d6) list_single_touch_menu_pane

0xaec3,	// (0x000391eb) list_single_touch_menu_pane_t1

0x347e,	// (0x000317a6) bg_popup_sub_pane_cp7_ParamLimits

0x347e,	// (0x000317a6) bg_popup_sub_pane_cp7

0xaed1,	// (0x000391f9) heading_sub_pane

0xaed9,	// (0x00039201) list_touch_info_pane_ParamLimits

0xaed9,	// (0x00039201) list_touch_info_pane

0xaee8,	// (0x00039210) list_single_touch_info_pane_ParamLimits

0xaee8,	// (0x00039210) list_single_touch_info_pane

0xaefa,	// (0x00039222) list_single_touch_info_pane_t1

0xaf08,	// (0x00039230) list_single_touch_info_pane_t2

0x0001,

0xfb28,	// (0x0003de50) list_single_touch_info_pane_t

0x44fb,	// (0x00032823) bg_popup_heading_pane_cp

0xaf16,	// (0x0003923e) heading_sub_pane_t1

0x4b3f,	// (0x00032e67) bg_popup_preview_window_pane_cp_ParamLimits

0x4b3f,	// (0x00032e67) bg_popup_preview_window_pane_cp

0xaed1,	// (0x000391f9) heading_preview_pane

0xaed9,	// (0x00039201) list_preview_pane_ParamLimits

0xaed9,	// (0x00039201) list_preview_pane

0xaf24,	// (0x0003924c) popup_preview_window_g1

0xaee8,	// (0x00039210) list_single_preview_pane_ParamLimits

0xaee8,	// (0x00039210) list_single_preview_pane

0xaf2c,	// (0x00039254) list_single_preview_pane_g1

0xaf34,	// (0x0003925c) list_single_preview_pane_t1

0xaefa,	// (0x00039222) list_single_preview_pane_t2

0x0001,

0xfb2d,	// (0x0003de55) list_single_preview_pane_t

0xaf42,	// (0x0003926a) bg_popup_heading_pane_cp2_ParamLimits

0xaf42,	// (0x0003926a) bg_popup_heading_pane_cp2

0xaf58,	// (0x00039280) heading_preview_pane_g1

0xaf60,	// (0x00039288) heading_preview_pane_t1_ParamLimits

0xaf60,	// (0x00039288) heading_preview_pane_t1

0x34d1,	// (0x000317f9) soft_indicator_pane_t1_ParamLimits

0x3a38,	// (0x00031d60) scroll_pane_ParamLimits

0x3e2b,	// (0x00032153) scroll_sc2_left_pane

0x3e22,	// (0x0003214a) scroll_sc2_right_pane

0x3e4a,	// (0x00032172) scroll_bg_pane_g1_ParamLimits

0x3e5f,	// (0x00032187) scroll_bg_pane_g2_ParamLimits

0x3e77,	// (0x0003219f) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0003da54) scroll_bg_pane_g_ParamLimits

0x3e4a,	// (0x00032172) scroll_handle_pane_g1_ParamLimits

0x3e99,	// (0x000321c1) scroll_handle_pane_g2_ParamLimits

0x3e77,	// (0x0003219f) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0003da5b) scroll_handle_pane_g_ParamLimits

0x4769,	// (0x00032a91) popup_choice_list_window_ParamLimits

0x4769,	// (0x00032a91) popup_choice_list_window

0x4999,	// (0x00032cc1) choice_list_pane

0x4a1b,	// (0x00032d43) cell_toolbar_pane_t1

0x4a43,	// (0x00032d6b) toolbar_button_pane_ParamLimits

0x58ef,	// (0x00033c17) ai_gene_pane_1_t2_ParamLimits

0x58ef,	// (0x00033c17) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0003dc73) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0003dc73) ai_gene_pane_1_t

0xaf7d,	// (0x000392a5) scroll_sc2_left_pane_g1

0xaf7d,	// (0x000392a5) scroll_sc2_right_pane_g1

0x4735,	// (0x00032a5d) bg_popup_sub_pane_cp10

0xaf87,	// (0x000392af) list_choice_list_pane

0xaf9e,	// (0x000392c6) list_single_choice_list_pane_ParamLimits

0xaf9e,	// (0x000392c6) list_single_choice_list_pane

0xafb2,	// (0x000392da) list_single_choice_list_pane_g1

0xafba,	// (0x000392e2) list_single_choice_list_pane_t1_ParamLimits

0xafba,	// (0x000392e2) list_single_choice_list_pane_t1

0xafcf,	// (0x000392f7) choice_list_pane_g1

0xafd7,	// (0x000392ff) choice_list_pane_t1

0x340e,	// (0x00031736) input_focus_pane_cp11

0x3d85,	// (0x000320ad) title_pane_stacon_g2_ParamLimits

0x3d85,	// (0x000320ad) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0003da3a) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0003da3a) title_pane_stacon_g

0x44fb,	// (0x00032823) cursor_press_pane

0x0fb6,	// (0x0002f2de) popup_fep_hwr_window_ParamLimits

0x0fb6,	// (0x0002f2de) popup_fep_hwr_window

0x47cb,	// (0x00032af3) popup_fep_vkb_window_ParamLimits

0x47cb,	// (0x00032af3) popup_fep_vkb_window

0xafe5,	// (0x0003930d) cursor_press_pane_g1

0x0002,

0xfb56,	// (0x0003de7e) fep_vkb_side_pane_g_ParamLimits

0x9182,	// (0x000374aa) fep_hwr_candidate_pane_ParamLimits

0x9182,	// (0x000374aa) fep_hwr_candidate_pane

0x91ac,	// (0x000374d4) fep_hwr_side_pane_ParamLimits

0x91ac,	// (0x000374d4) fep_hwr_side_pane

0x91cc,	// (0x000374f4) fep_hwr_top_pane_ParamLimits

0x91cc,	// (0x000374f4) fep_hwr_top_pane

0x91e4,	// (0x0003750c) fep_hwr_write_pane_ParamLimits

0x91e4,	// (0x0003750c) fep_hwr_write_pane

0xfb56,	// (0x0003de7e) fep_vkb_side_pane_g

0xafed,	// (0x00039315) fep_hwr_top_pane_g1

0xafff,	// (0x00039327) fep_hwr_top_pane_g2

0x9210,	// (0x00037538) fep_hwr_top_pane_g3

0x0002,

0xfb32,	// (0x0003de5a) fep_hwr_top_pane_g

0x9225,	// (0x0003754d) fep_hwr_top_text_pane

0x3fec,	// (0x00032314) fep_hwr_top_text_pane_g1

0xb035,	// (0x0003935d) fep_hwr_top_text_pane_t1

0x931b,	// (0x00037643) fep_hwr_candidate_pane_g1

0xb28f,	// (0x000395b7) fep_vkb_keypad_pane_g3_ParamLimits

0xb28f,	// (0x000395b7) fep_vkb_keypad_pane_g3

0xb2b7,	// (0x000395df) fep_vkb_keypad_pane_g4_ParamLimits

0xb2b7,	// (0x000395df) fep_vkb_keypad_pane_g4

0xb326,	// (0x0003964e) fep_vkb_bottom_pane_g2_ParamLimits

0xb326,	// (0x0003964e) fep_vkb_bottom_pane_g2

0x0001,

0xfb5d,	// (0x0003de85) fep_vkb_bottom_pane_g_ParamLimits

0xfb5d,	// (0x0003de85) fep_vkb_bottom_pane_g

0xaf7d,	// (0x000392a5) cell_vkb_side_pane_g2

0x0001,

0xfb67,	// (0x0003de8f) cell_vkb_side_pane_g

0xb3b1,	// (0x000396d9) cell_vkb_side_pane_t1

0xb3bf,	// (0x000396e7) cell_vkb_side_pane_t1_copy1

0xaf7d,	// (0x000392a5) bg_fep_vkb_candidate_pane_g2

0xb4f1,	// (0x00039819) cell_vkb_candidate_pane_ParamLimits

0xb043,	// (0x0003936b) aid_size_cell_vkb_ParamLimits

0xb043,	// (0x0003936b) aid_size_cell_vkb

0xb4f1,	// (0x00039819) cell_vkb_candidate_pane

0x9335,	// (0x0003765d) bg_popup_fep_shadow_pane_g1

0xb0d1,	// (0x000393f9) fep_vkb_bottom_pane_ParamLimits

0xb0d1,	// (0x000393f9) fep_vkb_bottom_pane

0xb10e,	// (0x00039436) fep_vkb_candidate_pane_ParamLimits

0xb10e,	// (0x00039436) fep_vkb_candidate_pane

0xb12a,	// (0x00039452) fep_vkb_keypad_pane_ParamLimits

0xb12a,	// (0x00039452) fep_vkb_keypad_pane

0xb170,	// (0x00039498) fep_vkb_side_pane_ParamLimits

0xb170,	// (0x00039498) fep_vkb_side_pane

0xb1ac,	// (0x000394d4) fep_vkb_top_pane_ParamLimits

0xb1ac,	// (0x000394d4) fep_vkb_top_pane

0xb1e8,	// (0x00039510) fep_vkb_top_pane_g1_ParamLimits

0xb1e8,	// (0x00039510) fep_vkb_top_pane_g1

0xb1f7,	// (0x0003951f) fep_vkb_top_pane_g2_ParamLimits

0xb1f7,	// (0x0003951f) fep_vkb_top_pane_g2

0xb206,	// (0x0003952e) fep_vkb_top_pane_g3_ParamLimits

0xb206,	// (0x0003952e) fep_vkb_top_pane_g3

0x0003,

0xfb4d,	// (0x0003de75) fep_vkb_top_pane_g_ParamLimits

0xfb4d,	// (0x0003de75) fep_vkb_top_pane_g

0xb224,	// (0x0003954c) fep_vkb_top_text_pane_ParamLimits

0xb224,	// (0x0003954c) fep_vkb_top_text_pane

0x2112,	// (0x0003043a) fep_vkb_side_pane_g1_ParamLimits

0x2112,	// (0x0003043a) fep_vkb_side_pane_g1

0xb27e,	// (0x000395a6) grid_vkb_side_pane_ParamLimits

0xb27e,	// (0x000395a6) grid_vkb_side_pane

0x933d,	// (0x00037665) bg_popup_fep_shadow_pane_g2

0x9346,	// (0x0003766e) bg_popup_fep_shadow_pane_g3

0x934e,	// (0x00037676) bg_popup_fep_shadow_pane_g4

0x9357,	// (0x0003767f) bg_popup_fep_shadow_pane_g5

0x9361,	// (0x00037689) bg_popup_fep_shadow_pane_g6

0x9369,	// (0x00037691) bg_popup_fep_shadow_pane_g7

0x3b4c,	// (0x00031e74) bg_popup_fep_shadow_pane_g8

0xb2d5,	// (0x000395fd) grid_vkb_keypad_number_pane_ParamLimits

0xb2d5,	// (0x000395fd) grid_vkb_keypad_number_pane

0xb2e5,	// (0x0003960d) grid_vkb_keypad_pane_ParamLimits

0xb2e5,	// (0x0003960d) grid_vkb_keypad_pane

0xb30b,	// (0x00039633) fep_vkb_bottom_pane_g1_ParamLimits

0xb30b,	// (0x00039633) fep_vkb_bottom_pane_g1

0xb334,	// (0x0003965c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb334,	// (0x0003965c) grid_vkb_keypad_bottom_left_pane

0xb349,	// (0x00039671) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb349,	// (0x00039671) grid_vkb_keypad_bottom_right_pane

0xb35e,	// (0x00039686) fep_vkb_top_text_pane_g1

0x2159,	// (0x00030481) fep_vkb_top_text_pane_t1

0x216b,	// (0x00030493) cell_vkb_side_pane_ParamLimits

0x216b,	// (0x00030493) cell_vkb_side_pane

0xaf7d,	// (0x000392a5) cell_vkb_side_pane_g1

0xb3cd,	// (0x000396f5) cell_vkb_keypad_pane_ParamLimits

0xb3cd,	// (0x000396f5) cell_vkb_keypad_pane

0xb448,	// (0x00039770) cell_vkb_keypad_pane_g1

0x0008,

0xfb7a,	// (0x0003dea2) bg_popup_fep_shadow_pane_g

0xaf7d,	// (0x000392a5) cell_hwr_side_pane_g1

0xaf7d,	// (0x000392a5) cell_hwr_side_pane_g2

0xb452,	// (0x0003977a) cell_vkb_keypad_pane_t1

0x2181,	// (0x000304a9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x2181,	// (0x000304a9) cell_vkb_keypad_bottom_left_pane

0x2196,	// (0x000304be) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x2196,	// (0x000304be) cell_vkb_keypad_bottom_right_pane

0xaf7d,	// (0x000392a5) cell_vkb_keypad_bottom_left_pane_g1

0xaf7d,	// (0x000392a5) cell_vkb_keypad_bottom_right_pane_g1

0xb4b6,	// (0x000397de) cell_vkb_keypad_number_pane_ParamLimits

0xb4b6,	// (0x000397de) cell_vkb_keypad_number_pane

0xb4d5,	// (0x000397fd) cell_vkb_keypad_number_pane_g1

0xb4df,	// (0x00039807) cell_vkb_keypad_number_pane_g2

0xb4e8,	// (0x00039810) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6c,	// (0x0003de94) cell_vkb_keypad_number_pane_g

0xb452,	// (0x0003977a) cell_vkb_keypad_number_pane_t1

0xb51c,	// (0x00039844) fep_vkb_candidate_pane_g1

0x0001,

0xfb67,	// (0x0003de8f) cell_hwr_side_pane_g

0xb535,	// (0x0003985d) cell_hwr_side_pane_t1

0x937b,	// (0x000376a3) cell_hwr_side_pane_t1_copy1

0xb216,	// (0x0003953e) cell_hwr_candidate_pane_g1

0x9389,	// (0x000376b1) cell_hwr_candidate_pane_t1

0xaf7d,	// (0x000392a5) cell_vkb_candidate_pane_g2

0xb5bb,	// (0x000398e3) cell_vkb_candidate_pane_t1

0xb50e,	// (0x00039836) bg_popup_fep_shadow_pane_ParamLimits

0xb50e,	// (0x00039836) bg_popup_fep_shadow_pane

0xf584,	// (0x0003d8ac) bg_fep_hwr_top_pane_g4

0xb011,	// (0x00039339) bg_hwr_side_pane_g1_ParamLimits

0xb011,	// (0x00039339) bg_hwr_side_pane_g1

0xf0d0,	// (0x0003d3f8) cell_hwr_side_pane_ParamLimits

0xf0d0,	// (0x0003d3f8) cell_hwr_side_pane

0x929c,	// (0x000375c4) fep_hwr_write_pane_g1_ParamLimits

0x929c,	// (0x000375c4) fep_hwr_write_pane_g1

0x92a9,	// (0x000375d1) fep_hwr_write_pane_g2_ParamLimits

0x92a9,	// (0x000375d1) fep_hwr_write_pane_g2

0x92b6,	// (0x000375de) fep_hwr_write_pane_g3_ParamLimits

0x92b6,	// (0x000375de) fep_hwr_write_pane_g3

0xf0f0,	// (0x0003d418) fep_hwr_write_pane_g4_ParamLimits

0xf0f0,	// (0x0003d418) fep_hwr_write_pane_g4

0x0005,

0xfb39,	// (0x0003de61) fep_hwr_write_pane_g_ParamLimits

0xfb39,	// (0x0003de61) fep_hwr_write_pane_g

0xf584,	// (0x0003d8ac) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xf584,	// (0x0003d8ac) bg_fep_hwr_candidate_pane_g2

0x92d9,	// (0x00037601) cell_hwr_candidate_pane_ParamLimits

0x92d9,	// (0x00037601) cell_hwr_candidate_pane

0x931b,	// (0x00037643) fep_hwr_candidate_pane_g1_ParamLimits

0xb071,	// (0x00039399) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb071,	// (0x00039399) bg_popup_fep_shadow_pane_cp2

0xb216,	// (0x0003953e) fep_vkb_top_pane_g4_ParamLimits

0xb216,	// (0x0003953e) fep_vkb_top_pane_g4

0xb25c,	// (0x00039584) fep_vkb_side_pane_g2_ParamLimits

0xb25c,	// (0x00039584) fep_vkb_side_pane_g2

0xe73e,	// (0x0003ca66) list_setting_pane_t4_ParamLimits

0xe73e,	// (0x0003ca66) list_setting_pane_t4

0xe7c0,	// (0x0003cae8) list_setting_number_pane_t5_ParamLimits

0xe7c0,	// (0x0003cae8) list_setting_number_pane_t5

0x0d53,	// (0x0002f07b) list_double_heading_pane_cp2_ParamLimits

0x0d53,	// (0x0002f07b) list_double_heading_pane_cp2

0x3adf,	// (0x00031e07) list_double_heading_pane_g1_cp2_ParamLimits

0x3adf,	// (0x00031e07) list_double_heading_pane_g1_cp2

0x3aeb,	// (0x00031e13) list_double_heading_pane_g2_cp2_ParamLimits

0x3aeb,	// (0x00031e13) list_double_heading_pane_g2_cp2

0xb5c9,	// (0x000398f1) list_double_heading_pane_t1_cp2_ParamLimits

0xb5c9,	// (0x000398f1) list_double_heading_pane_t1_cp2

0xb5df,	// (0x00039907) list_double_heading_pane_t2_cp2_ParamLimits

0xb5df,	// (0x00039907) list_double_heading_pane_t2_cp2

0x3406,	// (0x0003172e) aid_value_unit2

0x7eab,	// (0x000361d3) popup_preview_fixed_window

0x35b1,	// (0x000318d9) bg_popup_preview_window_pane_cp02

0xb5f1,	// (0x00039919) list_preview_fixed_pane

0xb637,	// (0x0003995f) list_empty_pane_fp_ParamLimits

0xb637,	// (0x0003995f) list_empty_pane_fp

0xb637,	// (0x0003995f) list_single_cale_day_pane_fp_ParamLimits

0xb637,	// (0x0003995f) list_single_cale_day_pane_fp

0xb637,	// (0x0003995f) list_single_graphic_heading_pane_fp_ParamLimits

0xb637,	// (0x0003995f) list_single_graphic_heading_pane_fp

0xb637,	// (0x0003995f) list_single_graphic_pane_fp_ParamLimits

0xb637,	// (0x0003995f) list_single_graphic_pane_fp

0xb637,	// (0x0003995f) list_single_heading_pane_fp_ParamLimits

0xb637,	// (0x0003995f) list_single_heading_pane_fp

0xb637,	// (0x0003995f) list_single_pane_fp_ParamLimits

0xb637,	// (0x0003995f) list_single_pane_fp

0xb64e,	// (0x00039976) list_single_pane_fp_g1_ParamLimits

0xb64e,	// (0x00039976) list_single_pane_fp_g1

0x8343,	// (0x0003666b) list_single_pane_fp_g2_ParamLimits

0x8343,	// (0x0003666b) list_single_pane_fp_g2

0x78ac,	// (0x00035bd4) list_single_pane_fp_g3_ParamLimits

0x78ac,	// (0x00035bd4) list_single_pane_fp_g3

0xb65a,	// (0x00039982) list_single_pane_fp_g4_ParamLimits

0xb65a,	// (0x00039982) list_single_pane_fp_g4

0x0003,

0xfb9b,	// (0x0003dec3) list_single_pane_fp_g_ParamLimits

0xfb9b,	// (0x0003dec3) list_single_pane_fp_g

0x78c0,	// (0x00035be8) list_single_pane_fp_t1_ParamLimits

0x78c0,	// (0x00035be8) list_single_pane_fp_t1

0x78d7,	// (0x00035bff) list_single_graphic_pane_fp_g1_ParamLimits

0x78d7,	// (0x00035bff) list_single_graphic_pane_fp_g1

0xb64e,	// (0x00039976) list_single_graphic_pane_fp_g2_ParamLimits

0xb64e,	// (0x00039976) list_single_graphic_pane_fp_g2

0x8343,	// (0x0003666b) list_single_graphic_pane_fp_g3_ParamLimits

0x8343,	// (0x0003666b) list_single_graphic_pane_fp_g3

0x78ac,	// (0x00035bd4) list_single_graphic_pane_fp_g4_ParamLimits

0x78ac,	// (0x00035bd4) list_single_graphic_pane_fp_g4

0xb65a,	// (0x00039982) list_single_graphic_pane_fp_g5_ParamLimits

0xb65a,	// (0x00039982) list_single_graphic_pane_fp_g5

0x0004,

0xfba4,	// (0x0003decc) list_single_graphic_pane_fp_g_ParamLimits

0xfba4,	// (0x0003decc) list_single_graphic_pane_fp_g

0x78e3,	// (0x00035c0b) list_single_graphic_pane_fp_t1_ParamLimits

0x78e3,	// (0x00035c0b) list_single_graphic_pane_fp_t1

0x78d7,	// (0x00035bff) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x78d7,	// (0x00035bff) list_single_graphic_heading_pane_fp_g1

0xb64e,	// (0x00039976) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb64e,	// (0x00039976) list_single_graphic_heading_pane_fp_g2

0x8343,	// (0x0003666b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8343,	// (0x0003666b) list_single_graphic_heading_pane_fp_g3

0x78ac,	// (0x00035bd4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x78ac,	// (0x00035bd4) list_single_graphic_heading_pane_fp_g4

0xb65a,	// (0x00039982) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb65a,	// (0x00039982) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba4,	// (0x0003decc) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0003decc) list_single_graphic_heading_pane_fp_g

0x78f9,	// (0x00035c21) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x78f9,	// (0x00035c21) list_single_graphic_heading_pane_fp_t1

0x790f,	// (0x00035c37) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x790f,	// (0x00035c37) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0003ded7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0003ded7) list_single_graphic_heading_pane_fp_t

0x7921,	// (0x00035c49) list_single_cale_day_pane_fp_g1_ParamLimits

0x7921,	// (0x00035c49) list_single_cale_day_pane_fp_g1

0xb666,	// (0x0003998e) list_single_cale_day_pane_fp_g2_ParamLimits

0xb666,	// (0x0003998e) list_single_cale_day_pane_fp_g2

0x7959,	// (0x00035c81) list_single_cale_day_pane_fp_g3_ParamLimits

0x7959,	// (0x00035c81) list_single_cale_day_pane_fp_g3

0x7981,	// (0x00035ca9) list_single_cale_day_pane_fp_g4_ParamLimits

0x7981,	// (0x00035ca9) list_single_cale_day_pane_fp_g4

0x79a5,	// (0x00035ccd) list_single_cale_day_pane_fp_g5_ParamLimits

0x79a5,	// (0x00035ccd) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb4,	// (0x0003dedc) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb4,	// (0x0003dedc) list_single_cale_day_pane_fp_g

0x79c9,	// (0x00035cf1) list_single_cale_day_pane_fp_t1_ParamLimits

0x79c9,	// (0x00035cf1) list_single_cale_day_pane_fp_t1

0x79ef,	// (0x00035d17) list_single_cale_day_pane_fp_t2_ParamLimits

0x79ef,	// (0x00035d17) list_single_cale_day_pane_fp_t2

0x7a08,	// (0x00035d30) list_single_cale_day_pane_fp_t3_ParamLimits

0x7a08,	// (0x00035d30) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbf,	// (0x0003dee7) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbf,	// (0x0003dee7) list_single_cale_day_pane_fp_t

0xb64e,	// (0x00039976) list_empty_pane_fp_g1_ParamLimits

0xb64e,	// (0x00039976) list_empty_pane_fp_g1

0x7a21,	// (0x00035d49) list_empty_pane_fp_t1

0x7a2f,	// (0x00035d57) list_empty_pane_fp_t2

0x0001,

0xfbc6,	// (0x0003deee) list_empty_pane_fp_t

0xb64e,	// (0x00039976) list_single_heading_pane_fp_g1_ParamLimits

0xb64e,	// (0x00039976) list_single_heading_pane_fp_g1

0x8343,	// (0x0003666b) list_single_heading_pane_fp_g2_ParamLimits

0x8343,	// (0x0003666b) list_single_heading_pane_fp_g2

0x78ac,	// (0x00035bd4) list_single_heading_pane_fp_g3_ParamLimits

0x78ac,	// (0x00035bd4) list_single_heading_pane_fp_g3

0x0002,

0xfbcb,	// (0x0003def3) list_single_heading_pane_fp_g_ParamLimits

0xfbcb,	// (0x0003def3) list_single_heading_pane_fp_g

0x7a3d,	// (0x00035d65) list_single_heading_pane_fp_t1_ParamLimits

0x7a3d,	// (0x00035d65) list_single_heading_pane_fp_t1

0x7a4f,	// (0x00035d77) list_single_heading_pane_fp_t2_ParamLimits

0x7a4f,	// (0x00035d77) list_single_heading_pane_fp_t2

0x0001,

0xfbd2,	// (0x0003defa) list_single_heading_pane_fp_t_ParamLimits

0xfbd2,	// (0x0003defa) list_single_heading_pane_fp_t

0x3c1c,	// (0x00031f44) aid_size_cell_fast

0x3594,	// (0x000318bc) soft_indicator_pane_cp1_t1

0x3c59,	// (0x00031f81) cell_app_pane_cp2_ParamLimits

0x3c59,	// (0x00031f81) cell_app_pane_cp2

0x916b,	// (0x00037493) fep_hwr_candidate_drop_down_list_pane

0x01aa,	// (0x0002e4d2) fep_hwr_candidate_pane_g3_ParamLimits

0x01aa,	// (0x0002e4d2) fep_hwr_candidate_pane_g3

0x01b7,	// (0x0002e4df) fep_hwr_candidate_pane_g4_ParamLimits

0x01b7,	// (0x0002e4df) fep_hwr_candidate_pane_g4

0x0002,

0xfb46,	// (0x0003de6e) fep_hwr_candidate_pane_g_ParamLimits

0xfb46,	// (0x0003de6e) fep_hwr_candidate_pane_g

0xb0fd,	// (0x00039425) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb0fd,	// (0x00039425) fep_vkb_candidate_drop_down_list_pane

0xb524,	// (0x0003984c) fep_vkb_candidate_pane_g3

0xb52c,	// (0x00039854) fep_vkb_candidate_pane_g4

0x0002,

0xfb73,	// (0x0003de9b) fep_vkb_candidate_pane_g

0xb216,	// (0x0003953e) cell_hwr_candidate_pane_g1_ParamLimits

0xb543,	// (0x0003986b) cell_hwr_candidate_pane_g3_ParamLimits

0xb543,	// (0x0003986b) cell_hwr_candidate_pane_g3

0xb564,	// (0x0003988c) cell_hwr_candidate_pane_g4_ParamLimits

0xb564,	// (0x0003988c) cell_hwr_candidate_pane_g4

0x0002,

0xfb8d,	// (0x0003deb5) cell_hwr_candidate_pane_g_ParamLimits

0xfb8d,	// (0x0003deb5) cell_hwr_candidate_pane_g

0xb585,	// (0x000398ad) cell_vkb_candidate_pane_g3_ParamLimits

0xb585,	// (0x000398ad) cell_vkb_candidate_pane_g3

0xb5a0,	// (0x000398c8) cell_vkb_candidate_pane_g4_ParamLimits

0xb5a0,	// (0x000398c8) cell_vkb_candidate_pane_g4

0xb672,	// (0x0003999a) cell_app_pane_cp2_g1_ParamLimits

0xb672,	// (0x0003999a) cell_app_pane_cp2_g1

0xb690,	// (0x000399b8) cell_app_pane_cp2_g2_ParamLimits

0xb690,	// (0x000399b8) cell_app_pane_cp2_g2

0x0001,

0xfbd7,	// (0x0003deff) cell_app_pane_cp2_g_ParamLimits

0xfbd7,	// (0x0003deff) cell_app_pane_cp2_g

0xb69c,	// (0x000399c4) cell_app_pane_cp2_t1_ParamLimits

0xb69c,	// (0x000399c4) cell_app_pane_cp2_t1

0x3ac5,	// (0x00031ded) grid_highlight_pane_cp1_ParamLimits

0x3ac5,	// (0x00031ded) grid_highlight_pane_cp1

0x93a7,	// (0x000376cf) cell_hwr_candidate_pane_cp1_ParamLimits

0x93a7,	// (0x000376cf) cell_hwr_candidate_pane_cp1

0xb216,	// (0x0003953e) fep_hwr_candidate_drop_down_list_pane_g1

0xb6ae,	// (0x000399d6) fep_hwr_candidate_drop_down_list_pane_g2

0xb6bb,	// (0x000399e3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbdc,	// (0x0003df04) fep_hwr_candidate_drop_down_list_pane_g

0x93c6,	// (0x000376ee) fep_hwr_candidate_drop_down_list_scroll_pane

0x93cf,	// (0x000376f7) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x93cf,	// (0x000376f7) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x93dc,	// (0x00037704) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x93dc,	// (0x00037704) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x93e9,	// (0x00037711) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x93e9,	// (0x00037711) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xb585,	// (0x000398ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb585,	// (0x000398ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xb5a0,	// (0x000398c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb5a0,	// (0x000398c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x93f6,	// (0x0003771e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x93f6,	// (0x0003771e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x9411,	// (0x00037739) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9411,	// (0x00037739) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xb6c8,	// (0x000399f0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb6c8,	// (0x000399f0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x0003df0b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x0003df0b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xb6e3,	// (0x00039a0b) cell_vkb_candidate_pane_cp1_ParamLimits

0xb6e3,	// (0x00039a0b) cell_vkb_candidate_pane_cp1

0xb216,	// (0x0003953e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb216,	// (0x0003953e) fep_vkb_candidate_drop_down_list_pane_g1

0xb6ae,	// (0x000399d6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xb6ae,	// (0x000399d6) fep_vkb_candidate_drop_down_list_pane_g2

0xb6bb,	// (0x000399e3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xb6bb,	// (0x000399e3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdc,	// (0x0003df04) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdc,	// (0x0003df04) fep_vkb_candidate_drop_down_list_pane_g

0xb703,	// (0x00039a2b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xb703,	// (0x00039a2b) fep_vkb_candidate_drop_down_list_scroll_pane

0xb710,	// (0x00039a38) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb710,	// (0x00039a38) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xb71d,	// (0x00039a45) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb71d,	// (0x00039a45) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xb729,	// (0x00039a51) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb729,	// (0x00039a51) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xb543,	// (0x0003986b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb543,	// (0x0003986b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xb564,	// (0x0003988c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb564,	// (0x0003988c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xb735,	// (0x00039a5d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb735,	// (0x00039a5d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xb756,	// (0x00039a7e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb756,	// (0x00039a7e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xb6c8,	// (0x000399f0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb6c8,	// (0x000399f0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf4,	// (0x0003df1c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf4,	// (0x0003df1c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x0254,	// (0x0002e57c) title_pane_g1_ParamLimits

0x0265,	// (0x0002e58d) title_pane_g2_ParamLimits

0xf592,	// (0x0003d8ba) title_pane_g_ParamLimits

0x3fe4,	// (0x0003230c) aid_call2_pane

0x3fdc,	// (0x00032304) aid_call_pane

0x3fec,	// (0x00032314) popup_clock_analogue_window_g1

0x3fec,	// (0x00032314) popup_clock_analogue_window_g2

0x8688,	// (0x000369b0) popup_clock_analogue_window_g3

0x8691,	// (0x000369b9) popup_clock_analogue_window_g4

0x3418,	// (0x00031740) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0003da69) popup_clock_analogue_window_g

0x8699,	// (0x000369c1) popup_clock_analogue_window_t1

0x86d0,	// (0x000369f8) clock_digital_number_pane_ParamLimits

0x86d0,	// (0x000369f8) clock_digital_number_pane

0x86dc,	// (0x00036a04) clock_digital_number_pane_cp02_ParamLimits

0x86dc,	// (0x00036a04) clock_digital_number_pane_cp02

0x86e8,	// (0x00036a10) clock_digital_number_pane_cp03_ParamLimits

0x86e8,	// (0x00036a10) clock_digital_number_pane_cp03

0x86f4,	// (0x00036a1c) clock_digital_number_pane_cp04_ParamLimits

0x86f4,	// (0x00036a1c) clock_digital_number_pane_cp04

0x8700,	// (0x00036a28) clock_digital_separator_pane_ParamLimits

0x8700,	// (0x00036a28) clock_digital_separator_pane

0x870c,	// (0x00036a34) popup_clock_digital_window_t1_ParamLimits

0x870c,	// (0x00036a34) popup_clock_digital_window_t1

0x3418,	// (0x00031740) clock_digital_number_pane_g1

0x3418,	// (0x00031740) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0003da74) clock_digital_number_pane_g

0x3418,	// (0x00031740) clock_digital_separator_pane_g1

0x3418,	// (0x00031740) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0003da74) clock_digital_separator_pane_g

0x159b,	// (0x0002f8c3) aid_fill_nsta_ParamLimits

0x16ca,	// (0x0002f9f2) indicator_nsta_pane_ParamLimits

0x4942,	// (0x00032c6a) popup_clock_analogue_window

0x4942,	// (0x00032c6a) popup_clock_digital_window

0x4783,	// (0x00032aab) grid_indicator_nsta_pane_ParamLimits

0x646e,	// (0x00034796) clock_nsta_pane_t2

0x0001,

0xfad3,	// (0x0003ddfb) clock_nsta_pane_t

0x864c,	// (0x00036974) aid_size_max_handle

0xed60,	// (0x0003d088) aid_size_min_handle

0x44fb,	// (0x00032823) editor_scroll_pane

0xb777,	// (0x00039a9f) ex_editor_pane

0x3be4,	// (0x00031f0c) scroll_pane_cp13

0x3a64,	// (0x00031d8c) scroll_pane_cp14

0x4016,	// (0x0003233e) scroll_pane_cp36

0x0d64,	// (0x0002f08c) list_single_graphic_hl_pane_cp2_ParamLimits

0x0d64,	// (0x0002f08c) list_single_graphic_hl_pane_cp2

0x1dce,	// (0x000300f6) list_single_graphic_hl_pane_ParamLimits

0x1dce,	// (0x000300f6) list_single_graphic_hl_pane

0x7a65,	// (0x00035d8d) aid_size_min_hl_cp1

0xb77f,	// (0x00039aa7) list_highlight_pane_cp34_ParamLimits

0xb77f,	// (0x00039aa7) list_highlight_pane_cp34

0xb790,	// (0x00039ab8) list_single_graphic_hl_pane_g1_ParamLimits

0xb790,	// (0x00039ab8) list_single_graphic_hl_pane_g1

0xea33,	// (0x0003cd5b) list_single_graphic_hl_pane_g2_ParamLimits

0xea33,	// (0x0003cd5b) list_single_graphic_hl_pane_g2

0xea33,	// (0x0003cd5b) list_single_graphic_hl_pane_g3_ParamLimits

0xea33,	// (0x0003cd5b) list_single_graphic_hl_pane_g3

0x94a3,	// (0x000377cb) list_single_graphic_hl_pane_g4_ParamLimits

0x94a3,	// (0x000377cb) list_single_graphic_hl_pane_g4

0xf105,	// (0x0003d42d) list_single_graphic_hl_pane_g5_ParamLimits

0xf105,	// (0x0003d42d) list_single_graphic_hl_pane_g5

0x0004,

0xfc05,	// (0x0003df2d) list_single_graphic_hl_pane_g_ParamLimits

0xfc05,	// (0x0003df2d) list_single_graphic_hl_pane_g

0xea3f,	// (0x0003cd67) list_single_graphic_hl_pane_t1_ParamLimits

0xea3f,	// (0x0003cd67) list_single_graphic_hl_pane_t1

0xb79d,	// (0x00039ac5) aid_size_min_hl_cp2

0xb7a6,	// (0x00039ace) list_highlight_pane_cp34_cp2_ParamLimits

0xb7a6,	// (0x00039ace) list_highlight_pane_cp34_cp2

0xb790,	// (0x00039ab8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xb790,	// (0x00039ab8) list_single_graphic_hl_pane_g1_cp2

0xb7b3,	// (0x00039adb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xb7b3,	// (0x00039adb) list_single_graphic_hl_pane_g2_cp2

0xb7bf,	// (0x00039ae7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb7bf,	// (0x00039ae7) list_single_graphic_hl_pane_g3_cp2

0x4432,	// (0x0003275a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4432,	// (0x0003275a) list_single_graphic_hl_pane_g4_cp2

0xb7cd,	// (0x00039af5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xb7cd,	// (0x00039af5) list_single_graphic_hl_pane_g5_cp2

0xedbc,	// (0x0003d0e4) control_pane_g4_ParamLimits

0xedbc,	// (0x0003d0e4) control_pane_g4

0x4735,	// (0x00032a5d) bg_popup_sub_pane_cp10_ParamLimits

0xaf87,	// (0x000392af) list_choice_list_pane_ParamLimits

0xaf96,	// (0x000392be) scroll_pane_cp23

0x35b1,	// (0x000318d9) bg_popup_preview_window_pane_cp02_ParamLimits

0xb5f1,	// (0x00039919) list_preview_fixed_pane_ParamLimits

0xb607,	// (0x0003992f) list_preview_fixed_pane_cp_ParamLimits

0xb607,	// (0x0003992f) list_preview_fixed_pane_cp

0xb613,	// (0x0003993b) popup_preview_fixed_window_g1_ParamLimits

0xb613,	// (0x0003993b) popup_preview_fixed_window_g1

0xb61f,	// (0x00039947) popup_preview_fixed_window_g2_ParamLimits

0xb61f,	// (0x00039947) popup_preview_fixed_window_g2

0x0002,

0xfb94,	// (0x0003debc) popup_preview_fixed_window_g_ParamLimits

0xfb94,	// (0x0003debc) popup_preview_fixed_window_g

0x853b,	// (0x00036863) aid_navi_side_left_pane_ParamLimits

0x8550,	// (0x00036878) aid_navi_side_right_pane_ParamLimits

0x8568,	// (0x00036890) navi_icon_pane_stacon_ParamLimits

0x857c,	// (0x000368a4) navi_navi_pane_stacon_ParamLimits

0x8568,	// (0x00036890) navi_text_pane_stacon_ParamLimits

0x340e,	// (0x00031736) main_text_info_pane

0xb7f7,	// (0x00039b1f) listscroll_text_info_pane

0xb7ff,	// (0x00039b27) list_text_info_pane_ParamLimits

0xb7ff,	// (0x00039b27) list_text_info_pane

0xb80e,	// (0x00039b36) scroll_pane_cp24_ParamLimits

0xb80e,	// (0x00039b36) scroll_pane_cp24

0x21b1,	// (0x000304d9) list_text_info_pane_t1_ParamLimits

0x21b1,	// (0x000304d9) list_text_info_pane_t1

0x0f2b,	// (0x0002f253) popup_fast_swap2_window_ParamLimits

0x0f2b,	// (0x0002f253) popup_fast_swap2_window

0xb865,	// (0x00039b8d) aid_size_cell_fast2

0x340e,	// (0x00031736) bg_popup_window_pane_cp17

0x4de6,	// (0x0003310e) heading_pane_cp2

0x3797,	// (0x00031abf) listscroll_fast2_pane

0xb86f,	// (0x00039b97) grid_fast2_pane

0xb879,	// (0x00039ba1) listscroll_fast2_pane_g1

0xb881,	// (0x00039ba9) listscroll_fast2_pane_g2

0x0001,

0xfc10,	// (0x0003df38) listscroll_fast2_pane_g

0x3be4,	// (0x00031f0c) scroll_pane_cp26

0xb88b,	// (0x00039bb3) cell_fast2_pane_ParamLimits

0xb88b,	// (0x00039bb3) cell_fast2_pane

0xb8a0,	// (0x00039bc8) cell_fast2_pane_g1

0xb8a9,	// (0x00039bd1) cell_fast2_pane_g2

0xb8b2,	// (0x00039bda) cell_fast2_pane_g3

0x0002,

0xfc15,	// (0x0003df3d) cell_fast2_pane_g

0x382b,	// (0x00031b53) grid_highlight_pane_cp9

0x3840,	// (0x00031b68) main_eswt_pane_ParamLimits

0x3840,	// (0x00031b68) main_eswt_pane

0xb823,	// (0x00039b4b) list_single_text_info_pane

0xb8ba,	// (0x00039be2) eswt_ctrl_button_pane

0xb8ba,	// (0x00039be2) eswt_ctrl_canvas_pane

0xb8c2,	// (0x00039bea) eswt_ctrl_combo_pane

0xb8ba,	// (0x00039be2) eswt_ctrl_default_pane

0xb8ba,	// (0x00039be2) eswt_ctrl_label_pane

0xb8ca,	// (0x00039bf2) eswt_ctrl_wait_pane

0xb8d2,	// (0x00039bfa) eswt_shell_pane

0x340e,	// (0x00031736) listscroll_eswt_app_pane

0xb8f2,	// (0x00039c1a) popup_eswt_tasktip_window_ParamLimits

0xb8f2,	// (0x00039c1a) popup_eswt_tasktip_window

0x4b3f,	// (0x00032e67) bg_popup_window_pane_cp18

0xb903,	// (0x00039c2b) eswt_control_pane_g1_ParamLimits

0xb903,	// (0x00039c2b) eswt_control_pane_g1

0xb910,	// (0x00039c38) eswt_control_pane_g2_ParamLimits

0xb910,	// (0x00039c38) eswt_control_pane_g2

0xb91d,	// (0x00039c45) eswt_control_pane_g3_ParamLimits

0xb91d,	// (0x00039c45) eswt_control_pane_g3

0xb92a,	// (0x00039c52) eswt_control_pane_g4_ParamLimits

0xb92a,	// (0x00039c52) eswt_control_pane_g4

0x0003,

0xfc1c,	// (0x0003df44) eswt_control_pane_g_ParamLimits

0xfc1c,	// (0x0003df44) eswt_control_pane_g

0x3ac5,	// (0x00031ded) bg_button_pane_ParamLimits

0x3ac5,	// (0x00031ded) bg_button_pane

0x3840,	// (0x00031b68) common_borders_pane_copy2_ParamLimits

0x3840,	// (0x00031b68) common_borders_pane_copy2

0xb937,	// (0x00039c5f) control_button_pane_g1_ParamLimits

0xb937,	// (0x00039c5f) control_button_pane_g1

0xb943,	// (0x00039c6b) control_button_pane_g2_ParamLimits

0xb943,	// (0x00039c6b) control_button_pane_g2

0xb94f,	// (0x00039c77) control_button_pane_g3_ParamLimits

0xb94f,	// (0x00039c77) control_button_pane_g3

0x0002,

0xfc25,	// (0x0003df4d) control_button_pane_g_ParamLimits

0xfc25,	// (0x0003df4d) control_button_pane_g

0xb963,	// (0x00039c8b) control_button_pane_t1

0xb971,	// (0x00039c99) control_button_pane_t2

0x0001,

0xfc2c,	// (0x0003df54) control_button_pane_t

0x4a4f,	// (0x00032d77) bg_button_pane_g1

0x4a5f,	// (0x00032d87) bg_button_pane_g2

0x4a57,	// (0x00032d7f) bg_button_pane_g3

0x4a6f,	// (0x00032d97) bg_button_pane_g4

0x4a67,	// (0x00032d8f) bg_button_pane_g5

0x4a77,	// (0x00032d9f) bg_button_pane_g6

0x4a7f,	// (0x00032da7) bg_button_pane_g7

0x4a8f,	// (0x00032db7) bg_button_pane_g8

0x4a87,	// (0x00032daf) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0003dbc7) bg_button_pane_g

0xaf42,	// (0x0003926a) common_borders_pane_ParamLimits

0xaf42,	// (0x0003926a) common_borders_pane

0xb903,	// (0x00039c2b) eswt_control_pane_g1_copy1_ParamLimits

0xb903,	// (0x00039c2b) eswt_control_pane_g1_copy1

0xb910,	// (0x00039c38) eswt_control_pane_g2_copy1_ParamLimits

0xb910,	// (0x00039c38) eswt_control_pane_g2_copy1

0xb91d,	// (0x00039c45) eswt_control_pane_g3_copy1_ParamLimits

0xb91d,	// (0x00039c45) eswt_control_pane_g3_copy1

0xb92a,	// (0x00039c52) eswt_control_pane_g4_copy1_ParamLimits

0xb92a,	// (0x00039c52) eswt_control_pane_g4_copy1

0xaf7d,	// (0x000392a5) bg_eswt_ctrl_canvas_pane_g1

0xaf42,	// (0x0003926a) common_borders_pane_cp2_ParamLimits

0xaf42,	// (0x0003926a) common_borders_pane_cp2

0xaf42,	// (0x0003926a) common_borders_pane_cp3_ParamLimits

0xaf42,	// (0x0003926a) common_borders_pane_cp3

0xb97f,	// (0x00039ca7) separator_horizontal_pane

0xb987,	// (0x00039caf) separator_vertical_pane

0xb903,	// (0x00039c2b) eswt_control_pane_g1_copy2_ParamLimits

0xb903,	// (0x00039c2b) eswt_control_pane_g1_copy2

0xb910,	// (0x00039c38) eswt_control_pane_g2_copy2_ParamLimits

0xb910,	// (0x00039c38) eswt_control_pane_g2_copy2

0xb91d,	// (0x00039c45) eswt_control_pane_g3_copy2_ParamLimits

0xb91d,	// (0x00039c45) eswt_control_pane_g3_copy2

0xb92a,	// (0x00039c52) eswt_control_pane_g4_copy2_ParamLimits

0xb92a,	// (0x00039c52) eswt_control_pane_g4_copy2

0x340e,	// (0x00031736) common_borders_pane_cp4

0xb990,	// (0x00039cb8) separator_horizontal_pane_g1

0xb999,	// (0x00039cc1) separator_horizontal_pane_g2

0xb9a2,	// (0x00039cca) separator_horizontal_pane_g3

0x0002,

0xfc31,	// (0x0003df59) separator_horizontal_pane_g

0xb903,	// (0x00039c2b) eswt_control_pane_g1_copy3_ParamLimits

0xb903,	// (0x00039c2b) eswt_control_pane_g1_copy3

0xb910,	// (0x00039c38) eswt_control_pane_g2_copy3_ParamLimits

0xb910,	// (0x00039c38) eswt_control_pane_g2_copy3

0xb91d,	// (0x00039c45) eswt_control_pane_g3_copy3_ParamLimits

0xb91d,	// (0x00039c45) eswt_control_pane_g3_copy3

0xb92a,	// (0x00039c52) eswt_control_pane_g4_copy3_ParamLimits

0xb92a,	// (0x00039c52) eswt_control_pane_g4_copy3

0x340e,	// (0x00031736) common_borders_pane_cp5

0xb9ab,	// (0x00039cd3) separator_vertical_pane_g1

0xb9b4,	// (0x00039cdc) separator_vertical_pane_g2

0xb9bd,	// (0x00039ce5) separator_vertical_pane_g3

0x0002,

0xfc38,	// (0x0003df60) separator_vertical_pane_g

0xb903,	// (0x00039c2b) eswt_control_pane_g1_copy4_ParamLimits

0xb903,	// (0x00039c2b) eswt_control_pane_g1_copy4

0xb910,	// (0x00039c38) eswt_control_pane_g2_copy4_ParamLimits

0xb910,	// (0x00039c38) eswt_control_pane_g2_copy4

0xb91d,	// (0x00039c45) eswt_control_pane_g3_copy4_ParamLimits

0xb91d,	// (0x00039c45) eswt_control_pane_g3_copy4

0xb92a,	// (0x00039c52) eswt_control_pane_g4_copy4_ParamLimits

0xb92a,	// (0x00039c52) eswt_control_pane_g4_copy4

0x21cf,	// (0x000304f7) eswt_ctrl_combo_button_pane

0x21d7,	// (0x000304ff) eswt_ctrl_input_pane

0x21df,	// (0x00030507) popup_choice_list_window_cp70

0x21e7,	// (0x0003050f) eswt_ctrl_input_pane_t1

0x340e,	// (0x00031736) input_focus_pane_cp70

0xaf42,	// (0x0003926a) bg_button_pane_cp70_ParamLimits

0xaf42,	// (0x0003926a) bg_button_pane_cp70

0x21f5,	// (0x0003051d) eswt_ctrl_combo_button_pane_g1

0xb9f4,	// (0x00039d1c) wait_bar_pane_cp70

0x4b3f,	// (0x00032e67) bg_popup_window_pane_cp70_ParamLimits

0x4b3f,	// (0x00032e67) bg_popup_window_pane_cp70

0xb9fc,	// (0x00039d24) popup_eswt_tasktip_window_t1

0xba12,	// (0x00039d3a) wait_bar_pane_cp71_ParamLimits

0xba12,	// (0x00039d3a) wait_bar_pane_cp71

0xba1e,	// (0x00039d46) grid_eswt_app_pane

0x3e22,	// (0x0003214a) scroll_pane_cp70

0x21fd,	// (0x00030525) cell_eswt_app_pane_ParamLimits

0x21fd,	// (0x00030525) cell_eswt_app_pane

0x2227,	// (0x0003054f) cell_eswt_app_pane_g1_ParamLimits

0x2227,	// (0x0003054f) cell_eswt_app_pane_g1

0x2256,	// (0x0003057e) cell_eswt_app_pane_g2_ParamLimits

0x2256,	// (0x0003057e) cell_eswt_app_pane_g2

0x0001,

0xfc3f,	// (0x0003df67) cell_eswt_app_pane_g_ParamLimits

0xfc3f,	// (0x0003df67) cell_eswt_app_pane_g

0x227f,	// (0x000305a7) cell_eswt_app_pane_t1_ParamLimits

0x227f,	// (0x000305a7) cell_eswt_app_pane_t1

0xbae5,	// (0x00039e0d) grid_highlight_pane_cp70_ParamLimits

0xbae5,	// (0x00039e0d) grid_highlight_pane_cp70

0x43ce,	// (0x000326f6) set_content_pane_g1

0x46d2,	// (0x000329fa) status_small_volume_pane

0x942c,	// (0x00037754) status_small_volume_pane_g1

0x9434,	// (0x0003775c) volume_small2_pane

0x943d,	// (0x00037765) volume_small2_pane_g1

0x9446,	// (0x0003776e) volume_small2_pane_g2

0x944f,	// (0x00037777) volume_small2_pane_g3

0x9458,	// (0x00037780) volume_small2_pane_g4

0x9461,	// (0x00037789) volume_small2_pane_g5

0x946a,	// (0x00037792) volume_small2_pane_g6

0x9473,	// (0x0003779b) volume_small2_pane_g7

0x947c,	// (0x000377a4) volume_small2_pane_g8

0x9485,	// (0x000377ad) volume_small2_pane_g9

0x948e,	// (0x000377b6) volume_small2_pane_g10

0x0009,

0xfc44,	// (0x0003df6c) volume_small2_pane_g

0xb35e,	// (0x00039686) fep_vkb_top_text_pane_g1_ParamLimits

0x2159,	// (0x00030481) fep_vkb_top_text_pane_t1_ParamLimits

0xb62b,	// (0x00039953) popup_preview_fixed_window_g3_ParamLimits

0xb62b,	// (0x00039953) popup_preview_fixed_window_g3

0x152e,	// (0x0002f856) popup_toolbar_trans_pane

0x1c46,	// (0x0002ff6e) aid_height_set_list_ParamLimits

0x5971,	// (0x00033c99) aid_size_parent_ParamLimits

0x4735,	// (0x00032a5d) list_highlight_pane_cp2_ParamLimits

0x43ce,	// (0x000326f6) set_content_pane_g1_ParamLimits

0xea21,	// (0x0003cd49) list_single_image_pane_ParamLimits

0xea21,	// (0x0003cd49) list_single_image_pane

0x22b1,	// (0x000305d9) aid_size_cell_image_ParamLimits

0x22b1,	// (0x000305d9) aid_size_cell_image

0x22be,	// (0x000305e6) grid_single_image_pane_ParamLimits

0x22be,	// (0x000305e6) grid_single_image_pane

0x3adf,	// (0x00031e07) list_single_image_pane_g1_ParamLimits

0x3adf,	// (0x00031e07) list_single_image_pane_g1

0x3aeb,	// (0x00031e13) list_single_image_pane_g2_ParamLimits

0x3aeb,	// (0x00031e13) list_single_image_pane_g2

0x0001,

0xfc59,	// (0x0003df81) list_single_image_pane_g_ParamLimits

0xfc59,	// (0x0003df81) list_single_image_pane_g

0xbb0a,	// (0x00039e32) list_single_image_pane_t1_ParamLimits

0xbb0a,	// (0x00039e32) list_single_image_pane_t1

0x22ca,	// (0x000305f2) cell_image_list_pane_ParamLimits

0x22ca,	// (0x000305f2) cell_image_list_pane

0x22de,	// (0x00030606) cell_image_list_pane_g1

0x22e7,	// (0x0003060f) cell_image_list_pane_g2

0x0001,

0xfc5e,	// (0x0003df86) cell_image_list_pane_g

0xbb46,	// (0x00039e6e) aid_size_cell_tb_trans_pane

0x3ac5,	// (0x00031ded) bg_tb_trans_pane

0xbb58,	// (0x00039e80) grid_tb_trans_pane

0x4a4f,	// (0x00032d77) bg_tb_trans_pane_g1

0x4a5f,	// (0x00032d87) bg_tb_trans_pane_g2

0x4a57,	// (0x00032d7f) bg_tb_trans_pane_g3

0x4a6f,	// (0x00032d97) bg_tb_trans_pane_g4

0x4a67,	// (0x00032d8f) bg_tb_trans_pane_g5

0x4a8f,	// (0x00032db7) bg_tb_trans_pane_g6

0x4a87,	// (0x00032daf) bg_tb_trans_pane_g7

0x4a77,	// (0x00032d9f) bg_tb_trans_pane_g8

0x4a7f,	// (0x00032da7) bg_tb_trans_pane_g9

0x0008,

0xfc63,	// (0x0003df8b) bg_tb_trans_pane_g

0xbb6c,	// (0x00039e94) cell_toolbar_trans_pane_ParamLimits

0xbb6c,	// (0x00039e94) cell_toolbar_trans_pane

0xaf7d,	// (0x000392a5) cell_toolbar_trans_pane_g1

0x2002,	// (0x0003032a) list_form2_midp_pane_t1

0x2010,	// (0x00030338) list_form2_midp_pane_t2

0x0001,

0xfb0c,	// (0x0003de34) list_form2_midp_pane_t

0x64f3,	// (0x0003481b) scroll_pane_cp51_ParamLimits

0x6669,	// (0x00034991) form2_midp_wait_pane_g1

0x6672,	// (0x0003499a) form2_midp_wait_pane_g2

0x667b,	// (0x000349a3) form2_midp_wait_pane_g3

0x0002,

0xfb21,	// (0x0003de49) form2_midp_wait_pane_g

0x347e,	// (0x000317a6) list_highlight_pane_cp21_ParamLimits

0x669b,	// (0x000349c3) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x66aa,	// (0x000349d2) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5bc6,	// (0x00033eee) list_single_2graphic_im_pane_ParamLimits

0x5bc6,	// (0x00033eee) list_single_2graphic_im_pane

0x22f0,	// (0x00030618) list_single_2graphic_im_pane_g1_ParamLimits

0x22f0,	// (0x00030618) list_single_2graphic_im_pane_g1

0x2301,	// (0x00030629) list_single_2graphic_im_pane_g2_ParamLimits

0x2301,	// (0x00030629) list_single_2graphic_im_pane_g2

0x230d,	// (0x00030635) list_single_2graphic_im_pane_g3_ParamLimits

0x230d,	// (0x00030635) list_single_2graphic_im_pane_g3

0x0003,

0xfc76,	// (0x0003df9e) list_single_2graphic_im_pane_g_ParamLimits

0xfc76,	// (0x0003df9e) list_single_2graphic_im_pane_g

0x2321,	// (0x00030649) list_single_2graphic_im_pane_t1_ParamLimits

0x2321,	// (0x00030649) list_single_2graphic_im_pane_t1

0xb637,	// (0x0003995f) list_single_graphic_2heading_pane_fp_ParamLimits

0xb637,	// (0x0003995f) list_single_graphic_2heading_pane_fp

0x78d7,	// (0x00035bff) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x78d7,	// (0x00035bff) list_single_graphic_2heading_pane_fp_g1

0xb64e,	// (0x00039976) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb64e,	// (0x00039976) list_single_graphic_2heading_pane_fp_g2

0x8343,	// (0x0003666b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8343,	// (0x0003666b) list_single_graphic_2heading_pane_fp_g3

0x78ac,	// (0x00035bd4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x78ac,	// (0x00035bd4) list_single_graphic_2heading_pane_fp_g4

0xb65a,	// (0x00039982) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb65a,	// (0x00039982) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba4,	// (0x0003decc) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0003decc) list_single_graphic_2heading_pane_fp_g

0x7a8e,	// (0x00035db6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7a8e,	// (0x00035db6) list_single_graphic_2heading_pane_fp_t1

0x790f,	// (0x00035c37) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x790f,	// (0x00035c37) list_single_graphic_2heading_pane_fp_t2

0x7aa4,	// (0x00035dcc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7aa4,	// (0x00035dcc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7f,	// (0x0003dfa7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7f,	// (0x0003dfa7) list_single_graphic_2heading_pane_fp_t

0xb01d,	// (0x00039345) fep_hwr_write_pane_g5_ParamLimits

0xb01d,	// (0x00039345) fep_hwr_write_pane_g5

0xb029,	// (0x00039351) fep_hwr_write_pane_g6_ParamLimits

0xb029,	// (0x00039351) fep_hwr_write_pane_g6

0xb8d2,	// (0x00039bfa) eswt_shell_pane_ParamLimits

0x4b3f,	// (0x00032e67) bg_popup_window_pane_cp18_ParamLimits

0x5b06,	// (0x00033e2e) heading_pane_cp70

0xb9fc,	// (0x00039d24) popup_eswt_tasktip_window_t1_ParamLimits

0x15ef,	// (0x0002f917) aid_touch_tab_arrow_left

0x1605,	// (0x0002f92d) aid_touch_tab_arrow_right

0x027d,	// (0x0002e5a5) title_pane_g3_ParamLimits

0x027d,	// (0x0002e5a5) title_pane_g3

0x3a84,	// (0x00031dac) set_value_pane_g1

0x152e,	// (0x0002f856) popup_toolbar_trans_pane_ParamLimits

0xbb46,	// (0x00039e6e) aid_size_cell_tb_trans_pane_ParamLimits

0x3ac5,	// (0x00031ded) bg_tb_trans_pane_ParamLimits

0xbb58,	// (0x00039e80) grid_tb_trans_pane_ParamLimits

0x35b1,	// (0x000318d9) cont_note_pane_ParamLimits

0x35b1,	// (0x000318d9) cont_note_pane

0x3840,	// (0x00031b68) cont_snote2_single_text_pane_ParamLimits

0x3840,	// (0x00031b68) cont_snote2_single_text_pane

0x3840,	// (0x00031b68) cont_snote2_single_graphic_pane_ParamLimits

0x3840,	// (0x00031b68) cont_snote2_single_graphic_pane

0x4fcb,	// (0x000332f3) cont_note_wait_pane_ParamLimits

0x4fcb,	// (0x000332f3) cont_note_wait_pane

0x4fcb,	// (0x000332f3) cont_note_image_pane_ParamLimits

0x4fcb,	// (0x000332f3) cont_note_image_pane

0xbc00,	// (0x00039f28) popup_note2_window_g1_ParamLimits

0xbc00,	// (0x00039f28) popup_note2_window_g1

0xbc31,	// (0x00039f59) popup_note2_window_t1_ParamLimits

0xbc31,	// (0x00039f59) popup_note2_window_t1

0xbc76,	// (0x00039f9e) popup_note2_window_t2_ParamLimits

0xbc76,	// (0x00039f9e) popup_note2_window_t2

0xbcbb,	// (0x00039fe3) popup_note2_window_t3_ParamLimits

0xbcbb,	// (0x00039fe3) popup_note2_window_t3

0xbd00,	// (0x0003a028) popup_note2_window_t4_ParamLimits

0xbd00,	// (0x0003a028) popup_note2_window_t4

0x3629,	// (0x00031951) popup_note2_window_t5_ParamLimits

0x3629,	// (0x00031951) popup_note2_window_t5

0x0004,

0xfc8b,	// (0x0003dfb3) popup_note2_window_t_ParamLimits

0xfc8b,	// (0x0003dfb3) popup_note2_window_t

0xbd2f,	// (0x0003a057) popup_note2_image_window_g1_ParamLimits

0xbd2f,	// (0x0003a057) popup_note2_image_window_g1

0xbd3b,	// (0x0003a063) popup_note2_image_window_g2_ParamLimits

0xbd3b,	// (0x0003a063) popup_note2_image_window_g2

0x0001,

0xfc96,	// (0x0003dfbe) popup_note2_image_window_g_ParamLimits

0xfc96,	// (0x0003dfbe) popup_note2_image_window_g

0xbd4d,	// (0x0003a075) popup_note2_image_window_t1_ParamLimits

0xbd4d,	// (0x0003a075) popup_note2_image_window_t1

0xbd65,	// (0x0003a08d) popup_note2_image_window_t2_ParamLimits

0xbd65,	// (0x0003a08d) popup_note2_image_window_t2

0xbd7d,	// (0x0003a0a5) popup_note2_image_window_t3_ParamLimits

0xbd7d,	// (0x0003a0a5) popup_note2_image_window_t3

0x0002,

0xfc9b,	// (0x0003dfc3) popup_note2_image_window_t_ParamLimits

0xfc9b,	// (0x0003dfc3) popup_note2_image_window_t

0x4fd9,	// (0x00033301) popup_note2_wait_window_g1_ParamLimits

0x4fd9,	// (0x00033301) popup_note2_wait_window_g1

0x4fe5,	// (0x0003330d) popup_note2_wait_window_g2_ParamLimits

0x4fe5,	// (0x0003330d) popup_note2_wait_window_g2

0x4ff1,	// (0x00033319) popup_note2_wait_window_g3_ParamLimits

0x4ff1,	// (0x00033319) popup_note2_wait_window_g3

0x0002,

0xf881,	// (0x0003dba9) popup_note2_wait_window_g_ParamLimits

0xf881,	// (0x0003dba9) popup_note2_wait_window_g

0xbd99,	// (0x0003a0c1) popup_note2_wait_window_t1_ParamLimits

0xbd99,	// (0x0003a0c1) popup_note2_wait_window_t1

0xbdb7,	// (0x0003a0df) popup_note2_wait_window_t2_ParamLimits

0xbdb7,	// (0x0003a0df) popup_note2_wait_window_t2

0xbdd5,	// (0x0003a0fd) popup_note2_wait_window_t3_ParamLimits

0xbdd5,	// (0x0003a0fd) popup_note2_wait_window_t3

0xbde7,	// (0x0003a10f) popup_note2_wait_window_t4_ParamLimits

0xbde7,	// (0x0003a10f) popup_note2_wait_window_t4

0x0003,

0xfca2,	// (0x0003dfca) popup_note2_wait_window_t_ParamLimits

0xfca2,	// (0x0003dfca) popup_note2_wait_window_t

0xbdf9,	// (0x0003a121) wait_bar2_pane_ParamLimits

0xbdf9,	// (0x0003a121) wait_bar2_pane

0xbe11,	// (0x0003a139) popup_snote2_single_text_window_g1_ParamLimits

0xbe11,	// (0x0003a139) popup_snote2_single_text_window_g1

0xbe39,	// (0x0003a161) popup_snote2_single_text_window_t1_ParamLimits

0xbe39,	// (0x0003a161) popup_snote2_single_text_window_t1

0xbe85,	// (0x0003a1ad) popup_snote2_single_text_window_t2_ParamLimits

0xbe85,	// (0x0003a1ad) popup_snote2_single_text_window_t2

0xbed1,	// (0x0003a1f9) popup_snote2_single_text_window_t3_ParamLimits

0xbed1,	// (0x0003a1f9) popup_snote2_single_text_window_t3

0xbf12,	// (0x0003a23a) popup_snote2_single_text_window_t4_ParamLimits

0xbf12,	// (0x0003a23a) popup_snote2_single_text_window_t4

0xbf48,	// (0x0003a270) popup_snote2_single_text_window_t5_ParamLimits

0xbf48,	// (0x0003a270) popup_snote2_single_text_window_t5

0x0004,

0xfcab,	// (0x0003dfd3) popup_snote2_single_text_window_t_ParamLimits

0xfcab,	// (0x0003dfd3) popup_snote2_single_text_window_t

0xbf73,	// (0x0003a29b) popup_snote2_single_graphic_window_g1_ParamLimits

0xbf73,	// (0x0003a29b) popup_snote2_single_graphic_window_g1

0xbf9b,	// (0x0003a2c3) popup_snote2_single_graphic_window_g2_ParamLimits

0xbf9b,	// (0x0003a2c3) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb6,	// (0x0003dfde) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb6,	// (0x0003dfde) popup_snote2_single_graphic_window_g

0xbfc3,	// (0x0003a2eb) popup_snote2_single_graphic_window_t1_ParamLimits

0xbfc3,	// (0x0003a2eb) popup_snote2_single_graphic_window_t1

0xc00f,	// (0x0003a337) popup_snote2_single_graphic_window_t2_ParamLimits

0xc00f,	// (0x0003a337) popup_snote2_single_graphic_window_t2

0xbed1,	// (0x0003a1f9) popup_snote2_single_graphic_window_t3_ParamLimits

0xbed1,	// (0x0003a1f9) popup_snote2_single_graphic_window_t3

0xbf12,	// (0x0003a23a) popup_snote2_single_graphic_window_t4_ParamLimits

0xbf12,	// (0x0003a23a) popup_snote2_single_graphic_window_t4

0xbf48,	// (0x0003a270) popup_snote2_single_graphic_window_t5_ParamLimits

0xbf48,	// (0x0003a270) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbb,	// (0x0003dfe3) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbb,	// (0x0003dfe3) popup_snote2_single_graphic_window_t

0x64a3,	// (0x000347cb) clock_nsta_pane_cp2_t1

0x64a3,	// (0x000347cb) clock_nsta_pane_cp2_t2

0x0001,

0xfae2,	// (0x0003de0a) clock_nsta_pane_cp2_t

0x72fc,	// (0x00035624) form_field_data_wide_pane_g1_ParamLimits

0x3adf,	// (0x00031e07) form_field_data_wide_pane_g2_ParamLimits

0x3adf,	// (0x00031e07) form_field_data_wide_pane_g2

0x3aeb,	// (0x00031e13) form_field_data_wide_pane_g3_ParamLimits

0x3aeb,	// (0x00031e13) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0003d9ec) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0003d9ec) form_field_data_wide_pane_g

0x1f18,	// (0x00030240) grid_touch_3_pane_ParamLimits

0x1f18,	// (0x00030240) grid_touch_3_pane

0x2352,	// (0x0003067a) cell_touch_3_pane_ParamLimits

0x2352,	// (0x0003067a) cell_touch_3_pane

0xaf7d,	// (0x000392a5) cell_touch_3_pane_g1

0xaf7d,	// (0x000392a5) cell_touch_3_pane_g2

0x0001,

0xfb67,	// (0x0003de8f) cell_touch_3_pane_g

0x365b,	// (0x00031983) cont_query_data_pane

0x3663,	// (0x0003198b) cont_query_data_pane_cp1

0xc08a,	// (0x0003a3b2) button_value_adjust_pane_cp7

0xc092,	// (0x0003a3ba) query_popup_pane_cp3

0x4048,	// (0x00032370) bg_popup_sub_pane_cp22_ParamLimits

0x8767,	// (0x00036a8f) navi_navi_volume_pane_cp2

0x8782,	// (0x00036aaa) popup_side_volume_key_window_g2

0x8791,	// (0x00036ab9) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0003da7e) popup_side_volume_key_window_g

0x87ae,	// (0x00036ad6) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0003da85) popup_side_volume_key_window_t

0x4298,	// (0x000325c0) popup_side_volume_key_window_ParamLimits

0xed2b,	// (0x0003d053) list_double_graphic_pane_g4_ParamLimits

0xed2b,	// (0x0003d053) list_double_graphic_pane_g4

0xf0a4,	// (0x0003d3cc) list_single_2heading_msg_pane_ParamLimits

0xf0a4,	// (0x0003d3cc) list_single_2heading_msg_pane

0xf119,	// (0x0003d441) list_single_2heading_msg_pane_g1_ParamLimits

0xf119,	// (0x0003d441) list_single_2heading_msg_pane_g1

0xf125,	// (0x0003d44d) list_single_2heading_msg_pane_g2_ParamLimits

0xf125,	// (0x0003d44d) list_single_2heading_msg_pane_g2

0xf138,	// (0x0003d460) list_single_2heading_msg_pane_g3_ParamLimits

0xf138,	// (0x0003d460) list_single_2heading_msg_pane_g3

0xf144,	// (0x0003d46c) list_single_2heading_msg_pane_g4_ParamLimits

0xf144,	// (0x0003d46c) list_single_2heading_msg_pane_g4

0x0003,

0xfcc6,	// (0x0003dfee) list_single_2heading_msg_pane_g_ParamLimits

0xfcc6,	// (0x0003dfee) list_single_2heading_msg_pane_g

0xea55,	// (0x0003cd7d) list_single_2heading_msg_pane_t1_ParamLimits

0xea55,	// (0x0003cd7d) list_single_2heading_msg_pane_t1

0xea7d,	// (0x0003cda5) list_single_2heading_msg_pane_t2_ParamLimits

0xea7d,	// (0x0003cda5) list_single_2heading_msg_pane_t2

0xeae8,	// (0x0003ce10) list_single_2heading_msg_pane_t3_ParamLimits

0xeae8,	// (0x0003ce10) list_single_2heading_msg_pane_t3

0x7b59,	// (0x00035e81) list_single_2heading_msg_pane_t4_ParamLimits

0x7b59,	// (0x00035e81) list_single_2heading_msg_pane_t4

0x0003,

0xfccf,	// (0x0003dff7) list_single_2heading_msg_pane_t_ParamLimits

0xfccf,	// (0x0003dff7) list_single_2heading_msg_pane_t

0x342c,	// (0x00031754) title_pane_g4_ParamLimits

0x342c,	// (0x00031754) title_pane_g4

0x848b,	// (0x000367b3) title_pane_stacon_g3_ParamLimits

0x848b,	// (0x000367b3) title_pane_stacon_g3

0xbbc3,	// (0x00039eeb) list_single_2graphic_im_pane_g4_ParamLimits

0xbbc3,	// (0x00039eeb) list_single_2graphic_im_pane_g4

0x590c,	// (0x00033c34) popup_side_volume_key_window_cp

0x5df6,	// (0x0003411e) main_idle_act2_pane_t1

0x8bac,	// (0x00036ed4) toolbar_button_pane_g10

0x0bf5,	// (0x0002ef1d) popup_toolbar_window_cp1

0x6494,	// (0x000347bc) clock_nsta_pane_cp_t1

0x6494,	// (0x000347bc) clock_nsta_pane_cp_t2

0x0001,

0xfadd,	// (0x0003de05) clock_nsta_pane_cp_t

0x8767,	// (0x00036a8f) navi_navi_volume_pane_cp2_ParamLimits

0x8776,	// (0x00036a9e) popup_side_volume_key_window_g1_ParamLimits

0x8782,	// (0x00036aaa) popup_side_volume_key_window_g2_ParamLimits

0x8791,	// (0x00036ab9) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0003da7e) popup_side_volume_key_window_g_ParamLimits

0x9157,	// (0x0003747f) fep_hwr_aid_pane

0xf584,	// (0x0003d8ac) bg_fep_hwr_top_pane_g4_ParamLimits

0xafed,	// (0x00039315) fep_hwr_top_pane_g1_ParamLimits

0xafff,	// (0x00039327) fep_hwr_top_pane_g2_ParamLimits

0x9210,	// (0x00037538) fep_hwr_top_pane_g3_ParamLimits

0xfb32,	// (0x0003de5a) fep_hwr_top_pane_g_ParamLimits

0x9225,	// (0x0003754d) fep_hwr_top_text_pane_ParamLimits

0x570a,	// (0x00033a32) aid_touch_tab_arrow_arrow_2

0x5701,	// (0x00033a29) aid_touch_tab_arrow_left_2

0x916b,	// (0x00037493) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x91a2,	// (0x000374ca) fep_hwr_prediction_pane

0xb166,	// (0x0003948e) fep_vkb_prediction_pane

0x2139,	// (0x00030461) fep_vkb_side_pane_g3_ParamLimits

0x2139,	// (0x00030461) fep_vkb_side_pane_g3

0xb216,	// (0x0003953e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xb6ae,	// (0x000399d6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xb6bb,	// (0x000399e3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbdc,	// (0x0003df04) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc0b7,	// (0x0003a3df) fep_hwr_prediction_pane_g1

0x94d3,	// (0x000377fb) fep_hwr_prediction_pane_g2

0x94db,	// (0x00037803) fep_hwr_prediction_pane_g3

0x94e3,	// (0x0003780b) fep_hwr_prediction_pane_g4

0x0003,

0xfcd8,	// (0x0003e000) fep_hwr_prediction_pane_g

0xc0b7,	// (0x0003a3df) fep_vkb_prediction_pane_g1

0xc0c1,	// (0x0003a3e9) fep_vkb_prediction_pane_g2

0xc0c9,	// (0x0003a3f1) fep_vkb_prediction_pane_g3

0xc0d1,	// (0x0003a3f9) fep_vkb_prediction_pane_g4

0x0003,

0xfce1,	// (0x0003e009) fep_vkb_prediction_pane_g

0x8e84,	// (0x000371ac) slider_set_pane_g3

0x8e98,	// (0x000371c0) slider_set_pane_g4

0x8eb0,	// (0x000371d8) slider_set_pane_g5

0x8e84,	// (0x000371ac) slider_set_pane_g6

0x8ec6,	// (0x000371ee) slider_set_pane_g7

0x5b8b,	// (0x00033eb3) slider_form_pane_g3

0x5b94,	// (0x00033ebc) slider_form_pane_g4

0x5b9c,	// (0x00033ec4) slider_form_pane_g5

0x5b8b,	// (0x00033eb3) slider_form_pane_g6

0x1d8d,	// (0x000300b5) slider_form_pane_g7

0x6094,	// (0x000343bc) slider_set_pane_vc_g3

0x609d,	// (0x000343c5) slider_set_pane_vc_g4

0x60a6,	// (0x000343ce) slider_set_pane_vc_g5

0x6094,	// (0x000343bc) slider_set_pane_vc_g6

0x60af,	// (0x000343d7) slider_set_pane_vc_g7

0x6094,	// (0x000343bc) slider_form_pane_vc_g1

0x609d,	// (0x000343c5) slider_form_pane_vc_g2

0x60a6,	// (0x000343ce) slider_form_pane_vc_g3

0x6094,	// (0x000343bc) slider_form_pane_vc_g4

0x623e,	// (0x00034566) slider_form_pane_vc_g5

0x0004,

0xfac3,	// (0x0003ddeb) slider_form_pane_vc_g

0x340e,	// (0x00031736) main_idle_act3_pane

0xc0d9,	// (0x0003a401) ai3_links_pane

0x239b,	// (0x000306c3) popup_ai3_data_window_ParamLimits

0x239b,	// (0x000306c3) popup_ai3_data_window

0x340e,	// (0x00031736) grid_ai3_links_pane

0x23b3,	// (0x000306db) cell_ai3_links_pane_ParamLimits

0x23b3,	// (0x000306db) cell_ai3_links_pane

0xc112,	// (0x0003a43a) bg_popup_sub_pane_cp11

0xc11f,	// (0x0003a447) cell_ai3_links_pane_g1

0x340e,	// (0x00031736) bg_popup_sub_pane_cp12

0xc144,	// (0x0003a46c) heading_ai3_data_pane

0xc14c,	// (0x0003a474) list_ai3_gene_pane

0xc158,	// (0x0003a480) popup_ai3_data_window_g1

0xc160,	// (0x0003a488) heading_ai3_data_pane_g1

0xc168,	// (0x0003a490) heading_ai3_data_pane_t1

0xc176,	// (0x0003a49e) list_double_ai3_gene_pane_ParamLimits

0xc176,	// (0x0003a49e) list_double_ai3_gene_pane

0xc183,	// (0x0003a4ab) list_single_ai3_gene_pane_ParamLimits

0xc183,	// (0x0003a4ab) list_single_ai3_gene_pane

0xaf42,	// (0x0003926a) list_highlight_pane_cp7_ParamLimits

0xaf42,	// (0x0003926a) list_highlight_pane_cp7

0xc190,	// (0x0003a4b8) list_single_a13_gene_pane_t1_ParamLimits

0xc190,	// (0x0003a4b8) list_single_a13_gene_pane_t1

0xc1a7,	// (0x0003a4cf) list_single_ai3_gene_pane_g1

0xc1d1,	// (0x0003a4f9) list_single_ai3_gene_pane_g2

0x0001,

0xfcea,	// (0x0003e012) list_single_ai3_gene_pane_g

0xc1d9,	// (0x0003a501) list_double_ai3_gene_pane_g1_ParamLimits

0xc1d9,	// (0x0003a501) list_double_ai3_gene_pane_g1

0xc1e5,	// (0x0003a50d) list_double_ai3_gene_pane_t1_ParamLimits

0xc1e5,	// (0x0003a50d) list_double_ai3_gene_pane_t1

0xc201,	// (0x0003a529) list_double_ai3_gene_pane_t2_ParamLimits

0xc201,	// (0x0003a529) list_double_ai3_gene_pane_t2

0xc216,	// (0x0003a53e) list_double_ai3_gene_pane_t3_ParamLimits

0xc216,	// (0x0003a53e) list_double_ai3_gene_pane_t3

0x0002,

0xfcef,	// (0x0003e017) list_double_ai3_gene_pane_t_ParamLimits

0xfcef,	// (0x0003e017) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7aba,	// (0x00035de2) aid_size_min_col_2

0x2385,	// (0x000306ad) aid_size_min_msg_ParamLimits

0x2385,	// (0x000306ad) aid_size_min_msg

0x214d,	// (0x00030475) fep_vkb_top_text_pane_g2_ParamLimits

0x214d,	// (0x00030475) fep_vkb_top_text_pane_g2

0x0001,

0xfb62,	// (0x0003de8a) fep_vkb_top_text_pane_g_ParamLimits

0xfb62,	// (0x0003de8a) fep_vkb_top_text_pane_g

0x340e,	// (0x00031736) main_hc_apps_shell_pane

0xc233,	// (0x0003a55b) grid_hc_apps_pane_ParamLimits

0xc233,	// (0x0003a55b) grid_hc_apps_pane

0xc242,	// (0x0003a56a) list_hc_apps_pane

0xc24a,	// (0x0003a572) scroll_pane_cp37_ParamLimits

0xc24a,	// (0x0003a572) scroll_pane_cp37

0x23cd,	// (0x000306f5) cell_hc_apps_pane_ParamLimits

0x23cd,	// (0x000306f5) cell_hc_apps_pane

0x248d,	// (0x000307b5) cell_hc_apps_pane_g1_ParamLimits

0x248d,	// (0x000307b5) cell_hc_apps_pane_g1

0xc337,	// (0x0003a65f) cell_hc_apps_pane_g2_ParamLimits

0xc337,	// (0x0003a65f) cell_hc_apps_pane_g2

0xc353,	// (0x0003a67b) cell_hc_apps_pane_g3_ParamLimits

0xc353,	// (0x0003a67b) cell_hc_apps_pane_g3

0x0002,

0xfcf6,	// (0x0003e01e) cell_hc_apps_pane_g_ParamLimits

0xfcf6,	// (0x0003e01e) cell_hc_apps_pane_g

0x24ba,	// (0x000307e2) cell_hc_apps_pane_t1_ParamLimits

0x24ba,	// (0x000307e2) cell_hc_apps_pane_t1

0x35b1,	// (0x000318d9) grid_highlight_pane_cp10_ParamLimits

0x35b1,	// (0x000318d9) grid_highlight_pane_cp10

0x24f8,	// (0x00030820) list_single_hc_apps_pane_ParamLimits

0x24f8,	// (0x00030820) list_single_hc_apps_pane

0xc428,	// (0x0003a750) list_single_hc_apps_pane_g1

0x94eb,	// (0x00037813) list_single_hc_apps_pane_g2

0x0001,

0xfcfd,	// (0x0003e025) list_single_hc_apps_pane_g

0x9504,	// (0x0003782c) list_single_hc_apps_pane_g2_copy1

0x7b7e,	// (0x00035ea6) list_single_hc_apps_pane_t1

0x347e,	// (0x000317a6) bg_set_opt_pane_cp_ParamLimits

0x8083,	// (0x000363ab) setting_slider_pane_t1_ParamLimits

0x809c,	// (0x000363c4) setting_slider_pane_t2_ParamLimits

0x80b5,	// (0x000363dd) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0003d8ca) setting_slider_pane_t_ParamLimits

0x80cc,	// (0x000363f4) slider_set_pane_ParamLimits

0x8a6e,	// (0x00036d96) control_pane_g5_ParamLimits

0x8a6e,	// (0x00036d96) control_pane_g5

0x5b4d,	// (0x00033e75) slider_set_pane_g1_ParamLimits

0x8e78,	// (0x000371a0) slider_set_pane_g2_ParamLimits

0x8e84,	// (0x000371ac) slider_set_pane_g3_ParamLimits

0x8e98,	// (0x000371c0) slider_set_pane_g4_ParamLimits

0x8eb0,	// (0x000371d8) slider_set_pane_g5_ParamLimits

0x8e84,	// (0x000371ac) slider_set_pane_g6_ParamLimits

0x8ec6,	// (0x000371ee) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0003dcc5) slider_set_pane_g_ParamLimits

0x4379,	// (0x000326a1) navi_icon_text_pane_ParamLimits

0x15bb,	// (0x0002f8e3) aid_fill_nsta_2_ParamLimits

0x15ef,	// (0x0002f917) aid_touch_tab_arrow_left_ParamLimits

0x1605,	// (0x0002f92d) aid_touch_tab_arrow_right_ParamLimits

0x16a0,	// (0x0002f9c8) clock_nsta_pane_ParamLimits

0x1b35,	// (0x0002fe5d) navi_icon_pane_g1_ParamLimits

0x1b41,	// (0x0002fe69) navi_text_pane_t1_ParamLimits

0x1fe4,	// (0x0003030c) navi_icon_text_pane_g1_ParamLimits

0x1ff0,	// (0x00030318) navi_icon_text_pane_t1_ParamLimits

0xc428,	// (0x0003a750) list_single_hc_apps_pane_g1_ParamLimits

0x94eb,	// (0x00037813) list_single_hc_apps_pane_g2_ParamLimits

0xfcfd,	// (0x0003e025) list_single_hc_apps_pane_g_ParamLimits

0x9504,	// (0x0003782c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7b7e,	// (0x00035ea6) list_single_hc_apps_pane_t1_ParamLimits

0xec8c,	// (0x0003cfb4) popup_toolbar2_fixed_window_ParamLimits

0xec8c,	// (0x0003cfb4) popup_toolbar2_fixed_window

0x1524,	// (0x0002f84c) popup_toolbar2_float_window

0x340e,	// (0x00031736) bg_popup_sub_pane_cp27

0xc441,	// (0x0003a769) grid_toolbar2_float_pane

0x340e,	// (0x00031736) bg_popup_sub_pane_cp26

0xc441,	// (0x0003a769) grid_toolbar2_fixed_pane

0x252b,	// (0x00030853) cell_toolbar2_fixed_pane_ParamLimits

0x252b,	// (0x00030853) cell_toolbar2_fixed_pane

0x2546,	// (0x0003086e) cell_toolbar2_fixed_pane_g1

0xc463,	// (0x0003a78b) toolbar2_fixed_button_pane

0x4a4f,	// (0x00032d77) toolbar2_fixed_button_pane_g1

0x4a5f,	// (0x00032d87) toolbar2_fixed_button_pane_g2

0x4a57,	// (0x00032d7f) toolbar2_fixed_button_pane_g3

0x4a6f,	// (0x00032d97) toolbar2_fixed_button_pane_g4

0x4a67,	// (0x00032d8f) toolbar2_fixed_button_pane_g5

0x4a77,	// (0x00032d9f) toolbar2_fixed_button_pane_g6

0x4a7f,	// (0x00032da7) toolbar2_fixed_button_pane_g7

0x4a8f,	// (0x00032db7) toolbar2_fixed_button_pane_g8

0x4a87,	// (0x00032daf) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0003dbc7) toolbar2_fixed_button_pane_g

0xc46b,	// (0x0003a793) cell_toolbar2_float_pane_ParamLimits

0xc46b,	// (0x0003a793) cell_toolbar2_float_pane

0xc47c,	// (0x0003a7a4) cell_toolbar2_float_pane_g1

0xc463,	// (0x0003a78b) toolbar2_fixed_button_pane_cp

0x2100,	// (0x00030428) fep_vkb_accented_list_pane_ParamLimits

0x2100,	// (0x00030428) fep_vkb_accented_list_pane

0x9373,	// (0x0003769b) bg_popup_fep_shadow_pane_g9

0x44fb,	// (0x00032823) bg_popup_fep_shadow_pane_cp3

0x3bcb,	// (0x00031ef3) list_accented_list_pane

0xc485,	// (0x0003a7ad) list_single_accented_list_pane_ParamLimits

0xc485,	// (0x0003a7ad) list_single_accented_list_pane

0x44fb,	// (0x00032823) list_highlight_pane_cp10

0xc496,	// (0x0003a7be) list_single_accented_list_pane_t1

0x144e,	// (0x0002f776) popup_slider_window_ParamLimits

0x144e,	// (0x0002f776) popup_slider_window

0xc09a,	// (0x0003a3c2) aid_indentation_list_msg

0x263f,	// (0x00030967) bg_popup_window_pane_cp19

0xc5ba,	// (0x0003a8e2) popup_slider_window_g1

0xc5d6,	// (0x0003a8fe) popup_slider_window_g2

0xc5f2,	// (0x0003a91a) popup_slider_window_g3

0x0005,

0xfd02,	// (0x0003e02a) popup_slider_window_g

0xc64e,	// (0x0003a976) popup_slider_window_t1

0xc6c2,	// (0x0003a9ea) small_volume_slider_vertical_pane

0xaf7d,	// (0x000392a5) small_volume_slider_vertical_pane_g1

0xaf7d,	// (0x000392a5) small_volume_slider_vertical_pane_g2

0xc6de,	// (0x0003aa06) small_volume_slider_vertical_pane_g3

0x0002,

0xfd14,	// (0x0003e03c) small_volume_slider_vertical_pane_g

0xebfa,	// (0x0003cf22) area_side_right_pane_ParamLimits

0xebfa,	// (0x0003cf22) area_side_right_pane

0xf15c,	// (0x0003d484) aid_size_side_button_ParamLimits

0xf15c,	// (0x0003d484) aid_size_side_button

0xf175,	// (0x0003d49d) grid_sctrl_middle_pane_ParamLimits

0xf175,	// (0x0003d49d) grid_sctrl_middle_pane

0x9554,	// (0x0003787c) sctrl_sk_bottom_pane

0x9565,	// (0x0003788d) sctrl_sk_top_pane

0x9577,	// (0x0003789f) aid_touch_sctrl_top

0x35b1,	// (0x000318d9) bg_sctrl_sk_pane_ParamLimits

0x35b1,	// (0x000318d9) bg_sctrl_sk_pane

0x9584,	// (0x000378ac) sctrl_sk_top_pane_g1

0x9591,	// (0x000378b9) sctrl_sk_top_pane_t1

0x9577,	// (0x0003789f) aid_touch_sctrl_bottom

0x35b1,	// (0x000318d9) bg_sctrl_sk_pane_cp_ParamLimits

0x35b1,	// (0x000318d9) bg_sctrl_sk_pane_cp

0x95ac,	// (0x000378d4) sctrl_sk_bottom_pane_g1

0x9591,	// (0x000378b9) sctrl_sk_bottom_pane_t1

0xf18f,	// (0x0003d4b7) cell_sctrl_middle_pane_ParamLimits

0xf18f,	// (0x0003d4b7) cell_sctrl_middle_pane

0xf1a0,	// (0x0003d4c8) aid_touch_sctrl_middle_ParamLimits

0xf1a0,	// (0x0003d4c8) aid_touch_sctrl_middle

0xf1ad,	// (0x0003d4d5) bg_sctrl_middle_pane_ParamLimits

0xf1ad,	// (0x0003d4d5) bg_sctrl_middle_pane

0xc766,	// (0x0003aa8e) cell_sctrl_middle_pane_g1_ParamLimits

0xc766,	// (0x0003aa8e) cell_sctrl_middle_pane_g1

0xf1bb,	// (0x0003d4e3) cell_sctrl_middle_pane_g2_ParamLimits

0xf1bb,	// (0x0003d4e3) cell_sctrl_middle_pane_g2

0x0001,

0xfd20,	// (0x0003e048) cell_sctrl_middle_pane_g_ParamLimits

0xfd20,	// (0x0003e048) cell_sctrl_middle_pane_g

0x4a4f,	// (0x00032d77) bg_sctrl_middle_pane_g1

0x4a5f,	// (0x00032d87) bg_sctrl_middle_pane_g2

0x4a57,	// (0x00032d7f) bg_sctrl_middle_pane_g3

0x4a6f,	// (0x00032d97) bg_sctrl_middle_pane_g4

0x4a67,	// (0x00032d8f) bg_sctrl_middle_pane_g5

0x4a77,	// (0x00032d9f) bg_sctrl_middle_pane_g6

0x4a7f,	// (0x00032da7) bg_sctrl_middle_pane_g7

0x4a8f,	// (0x00032db7) bg_sctrl_middle_pane_g8

0x0007,

0xfd25,	// (0x0003e04d) bg_sctrl_middle_pane_g

0x4a87,	// (0x00032daf) bg_sctrl_middle_pane_g8_copy1

0x4a4f,	// (0x00032d77) bg_sctrl_sk_pane_g1

0x4a5f,	// (0x00032d87) bg_sctrl_sk_pane_g2

0x4a57,	// (0x00032d7f) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0003dbc7) bg_sctrl_sk_pane_g

0x39fe,	// (0x00031d26) aid_size_touch_scroll_bar

0x4a6f,	// (0x00032d97) bg_sctrl_sk_pane_g4

0x4a67,	// (0x00032d8f) bg_sctrl_sk_pane_g5

0x4a77,	// (0x00032d9f) bg_sctrl_sk_pane_g6

0x4a7f,	// (0x00032da7) bg_sctrl_sk_pane_g7

0x4a8f,	// (0x00032db7) bg_sctrl_sk_pane_g8

0x4a87,	// (0x00032daf) bg_sctrl_sk_pane_g9

0x4791,	// (0x00032ab9) popup_fep_china_hwr2_fs_candidate_window

0x0f88,	// (0x0002f2b0) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x0f88,	// (0x0002f2b0) popup_fep_china_hwr2_fs_control_window

0xb216,	// (0x0003953e) sctrl_sk_top_pane_g2

0x0001,

0xfd1b,	// (0x0003e043) sctrl_sk_top_pane_g

0x26f7,	// (0x00030a1f) aid_fep_china_hwr2_fs_cell_ParamLimits

0x26f7,	// (0x00030a1f) aid_fep_china_hwr2_fs_cell

0x270b,	// (0x00030a33) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x270b,	// (0x00030a33) bg_popup_fep_shadow_pane_cp4

0x2722,	// (0x00030a4a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x2722,	// (0x00030a4a) bg_popup_fep_shadow_pane_cp5

0x2734,	// (0x00030a5c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x2734,	// (0x00030a5c) popup_fep_china_hwr2_fs_control_bar_grid

0x2748,	// (0x00030a70) popup_fep_china_hwr2_fs_control_funtion_grid

0xc73a,	// (0x0003aa62) aid_fep_china_hwr2_fs_candi_cell

0x340e,	// (0x00031736) bg_popup_fep_shadow_pane_cp6

0xc744,	// (0x0003aa6c) popup_fep_china_hwr2_fs_candidate_grid

0x2750,	// (0x00030a78) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x2750,	// (0x00030a78) cell_fep_china_hwr2_fs_funtion_grid

0xaf7d,	// (0x000392a5) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xc766,	// (0x0003aa8e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xc766,	// (0x0003aa8e) cell_fep_china_hwr2_fs_funtion_grid_g1

0xc774,	// (0x0003aa9c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xc774,	// (0x0003aa9c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd36,	// (0x0003e05e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd36,	// (0x0003e05e) cell_fep_china_hwr2_fs_funtion_grid_g

0x2768,	// (0x00030a90) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x2768,	// (0x00030a90) cell_fep_china_hwr2_fs_funtion_grid_t1

0x277d,	// (0x00030aa5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x277d,	// (0x00030aa5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3b,	// (0x0003e063) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3b,	// (0x0003e063) cell_fep_china_hwr2_fs_funtion_grid_t

0xc7bb,	// (0x0003aae3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xc7c3,	// (0x0003aaeb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xc7cb,	// (0x0003aaf3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd40,	// (0x0003e068) popup_fep_china_hwr2_fs_control_bar_grid_g

0xc7d3,	// (0x0003aafb) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xc7d3,	// (0x0003aafb) cell_fep_china_hwr2_fs_candidate_grid

0xc7ec,	// (0x0003ab14) popup_fep_china_hwr2_fs_candidate_grid_g20

0xc7f4,	// (0x0003ab1c) popup_fep_china_hwr2_fs_candidate_grid_g21

0xaf7d,	// (0x000392a5) cell_fep_china_hwr2_fs_candidate_grid_g1

0xaf7d,	// (0x000392a5) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb67,	// (0x0003de8f) cell_fep_china_hwr2_fs_candidate_grid_g

0xc7fc,	// (0x0003ab24) cell_fep_china_hwr2_fs_candidate_grid_t1

0x489e,	// (0x00032bc6) clock_nsta_pane_cp_24_ParamLimits

0x489e,	// (0x00032bc6) clock_nsta_pane_cp_24

0x4906,	// (0x00032c2e) indicator_nsta_pane_cp_24_ParamLimits

0x4906,	// (0x00032c2e) indicator_nsta_pane_cp_24

0x560b,	// (0x00033933) heading_pane_g1

0x0001,

0xf904,	// (0x0003dc2c) heading_pane_g

0x5c81,	// (0x00033fa9) grid_sct_catagory_button_pane

0x5983,	// (0x00033cab) scroll_pane_cp5_ParamLimits

0x64ff,	// (0x00034827) button_value_adjust_pane_cp5_ParamLimits

0x64ff,	// (0x00034827) button_value_adjust_pane_cp5

0x65bd,	// (0x000348e5) form2_midp_time_pane_ParamLimits

0xc80a,	// (0x0003ab32) cell_sct_catagory_button_pane_ParamLimits

0xc80a,	// (0x0003ab32) cell_sct_catagory_button_pane

0xaf42,	// (0x0003926a) bg_button_pane_cp01_ParamLimits

0xaf42,	// (0x0003926a) bg_button_pane_cp01

0xaf7d,	// (0x000392a5) cell_sct_catagory_button_pane_g1

0x14c7,	// (0x0002f7ef) popup_tb_extension_window

0x2799,	// (0x00030ac1) aid_size_cell_ext_ParamLimits

0x2799,	// (0x00030ac1) aid_size_cell_ext

0x3840,	// (0x00031b68) bg_tb_trans_pane_cp1_ParamLimits

0x3840,	// (0x00031b68) bg_tb_trans_pane_cp1

0x27bf,	// (0x00030ae7) grid_tb_ext_pane_ParamLimits

0x27bf,	// (0x00030ae7) grid_tb_ext_pane

0x27ff,	// (0x00030b27) cell_tb_ext_pane_ParamLimits

0x27ff,	// (0x00030b27) cell_tb_ext_pane

0x2827,	// (0x00030b4f) cell_tb_ext_pane_g1_ParamLimits

0x2827,	// (0x00030b4f) cell_tb_ext_pane_g1

0xc8a2,	// (0x0003abca) cell_tb_ext_pane_t1

0x35b1,	// (0x000318d9) list_highlight_pane_cp11_ParamLimits

0x35b1,	// (0x000318d9) list_highlight_pane_cp11

0x7ef6,	// (0x0003621e) popup_uni_indicator_window_ParamLimits

0x7ef6,	// (0x0003621e) popup_uni_indicator_window

0x3ac5,	// (0x00031ded) bg_popup_sub_pane_cp14

0xc8bd,	// (0x0003abe5) list_uniindi_pane

0xc8c9,	// (0x0003abf1) uniindi_top_pane

0x35b1,	// (0x000318d9) bg_uniindi_top_pane

0xc8e8,	// (0x0003ac10) uniindi_top_pane_g1

0xc8fe,	// (0x0003ac26) uniindi_top_pane_g2

0x0003,

0xfd47,	// (0x0003e06f) uniindi_top_pane_g

0xc928,	// (0x0003ac50) uniindi_top_pane_t1

0xc952,	// (0x0003ac7a) list_single_uniindi_pane_ParamLimits

0xc952,	// (0x0003ac7a) list_single_uniindi_pane

0xaf7d,	// (0x000392a5) bg_uniindi_top_pane_g1

0xc964,	// (0x0003ac8c) list_single_uniindi_pane_g1

0xc977,	// (0x0003ac9f) list_single_uniindi_pane_t1

0x340e,	// (0x00031736) control_bg_pane

0xc99c,	// (0x0003acc4) bg_sctrl_sk_pane_cp1

0xc9a5,	// (0x0003accd) bg_sctrl_sk_pane_cp2

0xc9ae,	// (0x0003acd6) control_bg_pane_g1

0xc9b7,	// (0x0003acdf) control_bg_pane_g2

0x0001,

0xfd50,	// (0x0003e078) control_bg_pane_g

0x6452,	// (0x0003477a) cell_indicator_nsta_pane_g1_ParamLimits

0x1f4b,	// (0x00030273) cell_indicator_nsta_pane_g2_ParamLimits

0xfad8,	// (0x0003de00) cell_indicator_nsta_pane_g_ParamLimits

0x7899,	// (0x00035bc1) form2_midp_time_pane_t1_ParamLimits

0xb50e,	// (0x00039836) main_idle_act4_pane_ParamLimits

0xb50e,	// (0x00039836) main_idle_act4_pane

0x14c7,	// (0x0002f7ef) popup_tb_extension_window_ParamLimits

0x27e6,	// (0x00030b0e) tb_ext_find_pane_ParamLimits

0x27e6,	// (0x00030b0e) tb_ext_find_pane

0xc9c0,	// (0x0003ace8) ai_gene_pane_1_cp1

0x457d,	// (0x000328a5) ai_gene_pane_2_cp1

0xc9c8,	// (0x0003acf0) list_single_idle_plugin_calendar_pane

0xc9d1,	// (0x0003acf9) list_single_idle_plugin_notification_pane

0xc9da,	// (0x0003ad02) list_single_idle_plugin_player_pane

0x2844,	// (0x00030b6c) list_single_idle_plugin_shortcut_pane_ParamLimits

0x2844,	// (0x00030b6c) list_single_idle_plugin_shortcut_pane

0x286c,	// (0x00030b94) main_idle_act4_pane_t1

0x2882,	// (0x00030baa) main_idle_act4_pane_t2

0x0001,

0xfd55,	// (0x0003e07d) main_idle_act4_pane_t

0x289a,	// (0x00030bc2) middle_sk_idle_act4_pane_ParamLimits

0x289a,	// (0x00030bc2) middle_sk_idle_act4_pane

0x28b6,	// (0x00030bde) popup_clock_digital_analogue_window_cp2

0x28dd,	// (0x00030c05) shortcut_wheel_idle_act4_pane_ParamLimits

0x28dd,	// (0x00030c05) shortcut_wheel_idle_act4_pane

0xaf7d,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g1

0xaf7d,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g2

0xaf7d,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g3

0xaf7d,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g4

0xaf7d,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g5

0xca6d,	// (0x0003ad95) shortcut_wheel_idle_act4_pane_g6

0xca75,	// (0x0003ad9d) shortcut_wheel_idle_act4_pane_g7

0xca7d,	// (0x0003ada5) shortcut_wheel_idle_act4_pane_g8

0xca85,	// (0x0003adad) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5a,	// (0x0003e082) shortcut_wheel_idle_act4_pane_g

0xf584,	// (0x0003d8ac) middle_sk_idle_act4_pane_g1_ParamLimits

0xf584,	// (0x0003d8ac) middle_sk_idle_act4_pane_g1

0x295a,	// (0x00030c82) middle_sk_idle_act4_pane_g2_ParamLimits

0x295a,	// (0x00030c82) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7d,	// (0x0003e0a5) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7d,	// (0x0003e0a5) middle_sk_idle_act4_pane_g

0x2972,	// (0x00030c9a) middle_sk_idle_act4_pane_t1_ParamLimits

0x2972,	// (0x00030c9a) middle_sk_idle_act4_pane_t1

0x29a1,	// (0x00030cc9) grid_ai_shortcut_pane_ParamLimits

0x29a1,	// (0x00030cc9) grid_ai_shortcut_pane

0x29be,	// (0x00030ce6) list_highlight_pane_cp16_ParamLimits

0x29be,	// (0x00030ce6) list_highlight_pane_cp16

0x29cb,	// (0x00030cf3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x29cb,	// (0x00030cf3) list_single_idle_plugin_shortcut_pane_g1

0x29d7,	// (0x00030cff) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x29d7,	// (0x00030cff) list_single_idle_plugin_shortcut_pane_g2

0x29f3,	// (0x00030d1b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x29f3,	// (0x00030d1b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd82,	// (0x0003e0aa) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd82,	// (0x0003e0aa) list_single_idle_plugin_shortcut_pane_g

0x2a08,	// (0x00030d30) cell_ai_shortcut_pane_ParamLimits

0x2a08,	// (0x00030d30) cell_ai_shortcut_pane

0x2a1e,	// (0x00030d46) cell_ai_shortcut_pane_g1_ParamLimits

0x2a1e,	// (0x00030d46) cell_ai_shortcut_pane_g1

0xc9c0,	// (0x0003ace8) ai_gene_pane_1_cp2

0xcbb2,	// (0x0003aeda) ai_gene_pane_2_cp2

0xcbba,	// (0x0003aee2) list_highlight_pane_cp15

0xcbc3,	// (0x0003aeeb) list_single_idle_plugin_calendar_pane_g1

0xcbba,	// (0x0003aee2) list_highlight_pane_cp17

0xcbcb,	// (0x0003aef3) list_single_idle_plugin_calendar_pane_g1_copy1

0xcbd3,	// (0x0003aefb) list_single_idle_plugin_player_pane_g1

0x5e96,	// (0x000341be) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd89,	// (0x0003e0b1) list_single_idle_plugin_player_pane_g

0xcbdb,	// (0x0003af03) list_single_idle_plugin_player_pane_t1

0xcbe9,	// (0x0003af11) list_single_idle_plugin_player_pane_t2

0xcbf7,	// (0x0003af1f) list_single_idle_plugin_player_pane_t3

0xcc05,	// (0x0003af2d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8e,	// (0x0003e0b6) list_single_idle_plugin_player_pane_t

0xcc13,	// (0x0003af3b) wait_bar_pane_cp15

0xcc1b,	// (0x0003af43) grid_ai_notification_pane

0x5e96,	// (0x000341be) list_single_idle_plugin_notification_pane_g1

0x2a40,	// (0x00030d68) cell_ai_notification_pane_ParamLimits

0x2a40,	// (0x00030d68) cell_ai_notification_pane

0xcc31,	// (0x0003af59) cell_ai_notification_pane_g1

0xcc39,	// (0x0003af61) cell_ai_notification_pane_t1

0x2a4d,	// (0x00030d75) tb_ext_find_button_pane

0x2a55,	// (0x00030d7d) tb_ext_find_pane_g1

0x2a5d,	// (0x00030d85) tb_ext_find_pane_t1

0x3fec,	// (0x00032314) tb_ext_find_button_pane_g1

0xcc65,	// (0x0003af8d) tb_ext_find_button_pane_g2

0x0001,

0xfd97,	// (0x0003e0bf) tb_ext_find_button_pane_g

0x286c,	// (0x00030b94) main_idle_act4_pane_t1_ParamLimits

0x2882,	// (0x00030baa) main_idle_act4_pane_t2_ParamLimits

0xfd55,	// (0x0003e07d) main_idle_act4_pane_t_ParamLimits

0x28b6,	// (0x00030bde) popup_clock_digital_analogue_window_cp2_ParamLimits

0x28cd,	// (0x00030bf5) sat_plugin_idle_act4_pane_ParamLimits

0x28cd,	// (0x00030bf5) sat_plugin_idle_act4_pane

0x2a6b,	// (0x00030d93) sat_plugin_idle_act4_pane_t1_ParamLimits

0x2a6b,	// (0x00030d93) sat_plugin_idle_act4_pane_t1

0x2a83,	// (0x00030dab) sat_plugin_idle_act4_pane_t2_ParamLimits

0x2a83,	// (0x00030dab) sat_plugin_idle_act4_pane_t2

0x2a9b,	// (0x00030dc3) sat_plugin_idle_act4_pane_t3_ParamLimits

0x2a9b,	// (0x00030dc3) sat_plugin_idle_act4_pane_t3

0x2ab3,	// (0x00030ddb) sat_plugin_idle_act4_pane_t4_ParamLimits

0x2ab3,	// (0x00030ddb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9c,	// (0x0003e0c4) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9c,	// (0x0003e0c4) sat_plugin_idle_act4_pane_t

0x7e3f,	// (0x00036167) popup_battery_window_ParamLimits

0x7e3f,	// (0x00036167) popup_battery_window

0x35b1,	// (0x000318d9) bg_popup_sub_pane_cp25_ParamLimits

0x35b1,	// (0x000318d9) bg_popup_sub_pane_cp25

0xccba,	// (0x0003afe2) popup_battery_window_g1_ParamLimits

0xccba,	// (0x0003afe2) popup_battery_window_g1

0xccc6,	// (0x0003afee) popup_battery_window_t1_ParamLimits

0xccc6,	// (0x0003afee) popup_battery_window_t1

0xccd8,	// (0x0003b000) popup_battery_window_t2_ParamLimits

0xccd8,	// (0x0003b000) popup_battery_window_t2

0x0001,

0xfda5,	// (0x0003e0cd) popup_battery_window_t_ParamLimits

0xfda5,	// (0x0003e0cd) popup_battery_window_t

0x0e1f,	// (0x0002f147) midp_canvas_pane_ParamLimits

0x0e7c,	// (0x0002f1a4) midp_keypad_pane_ParamLimits

0x0e7c,	// (0x0002f1a4) midp_keypad_pane

0x4735,	// (0x00032a5d) main_midp_pane_ParamLimits

0x64b2,	// (0x000347da) signal_pane_g2_cp_ParamLimits

0x2acb,	// (0x00030df3) aid_size_cell_midp_keypad_ParamLimits

0x2acb,	// (0x00030df3) aid_size_cell_midp_keypad

0x2ae9,	// (0x00030e11) midp_keyp_game_grid_pane_ParamLimits

0x2ae9,	// (0x00030e11) midp_keyp_game_grid_pane

0x2b10,	// (0x00030e38) midp_keyp_rocker_pane_ParamLimits

0x2b10,	// (0x00030e38) midp_keyp_rocker_pane

0x2b69,	// (0x00030e91) midp_keyp_sk_left_pane_ParamLimits

0x2b69,	// (0x00030e91) midp_keyp_sk_left_pane

0x2bbd,	// (0x00030ee5) midp_keyp_sk_right_pane_ParamLimits

0x2bbd,	// (0x00030ee5) midp_keyp_sk_right_pane

0x340e,	// (0x00031736) bg_button_pane_cp03

0x2c11,	// (0x00030f39) midp_keyp_sk_left_pane_g1

0x340e,	// (0x00031736) bg_button_pane_cp04

0x2c11,	// (0x00030f39) midp_keyp_sk_right_pane_g1

0xaf7d,	// (0x000392a5) midp_keyp_rocker_pane_g1

0x2c1a,	// (0x00030f42) keyp_game_cell_pane_ParamLimits

0x2c1a,	// (0x00030f42) keyp_game_cell_pane

0x340e,	// (0x00031736) bg_button_pane_cp02

0x2c3e,	// (0x00030f66) keyp_game_cell_pane_g1

0xec3c,	// (0x0003cf64) popup_fep_vkb2_window_ParamLimits

0xec3c,	// (0x0003cf64) popup_fep_vkb2_window

0xf1c7,	// (0x0003d4ef) aid_size_cell_vkb2_ParamLimits

0xf1c7,	// (0x0003d4ef) aid_size_cell_vkb2

0xf1fd,	// (0x0003d525) popup_fep_vkb2_window_g1_ParamLimits

0xf1fd,	// (0x0003d525) popup_fep_vkb2_window_g1

0xf244,	// (0x0003d56c) vkb2_area_bottom_pane_ParamLimits

0xf244,	// (0x0003d56c) vkb2_area_bottom_pane

0xf298,	// (0x0003d5c0) vkb2_area_keypad_pane_ParamLimits

0xf298,	// (0x0003d5c0) vkb2_area_keypad_pane

0xf2e0,	// (0x0003d608) vkb2_area_top_pane_ParamLimits

0xf2e0,	// (0x0003d608) vkb2_area_top_pane

0xf366,	// (0x0003d68e) vkb2_top_entry_pane_ParamLimits

0xf366,	// (0x0003d68e) vkb2_top_entry_pane

0xf393,	// (0x0003d6bb) vkb2_top_grid_left_pane_ParamLimits

0xf393,	// (0x0003d6bb) vkb2_top_grid_left_pane

0xf3b3,	// (0x0003d6db) vkb2_top_grid_right_pane_ParamLimits

0xf3b3,	// (0x0003d6db) vkb2_top_grid_right_pane

0x9806,	// (0x00037b2e) vkb2_cell_keypad_pane_ParamLimits

0x9806,	// (0x00037b2e) vkb2_cell_keypad_pane

0xf3f9,	// (0x0003d721) vkb2_area_bottom_grid_pane_ParamLimits

0xf3f9,	// (0x0003d721) vkb2_area_bottom_grid_pane

0xf423,	// (0x0003d74b) vkb2_area_bottom_pane_g1_ParamLimits

0xf423,	// (0x0003d74b) vkb2_area_bottom_pane_g1

0xf449,	// (0x0003d771) vkb2_area_bottom_pane_g2_ParamLimits

0xf449,	// (0x0003d771) vkb2_area_bottom_pane_g2

0xf47a,	// (0x0003d7a2) vkb2_area_bottom_pane_g3_ParamLimits

0xf47a,	// (0x0003d7a2) vkb2_area_bottom_pane_g3

0x0002,

0xfdaa,	// (0x0003e0d2) vkb2_area_bottom_pane_g_ParamLimits

0xfdaa,	// (0x0003e0d2) vkb2_area_bottom_pane_g

0x99b0,	// (0x00037cd8) vkb2_top_cell_left_pane_ParamLimits

0x99b0,	// (0x00037cd8) vkb2_top_cell_left_pane

0x2c47,	// (0x00030f6f) vkb2_top_entry_pane_g1_ParamLimits

0x2c47,	// (0x00030f6f) vkb2_top_entry_pane_g1

0x2c55,	// (0x00030f7d) vkb2_top_entry_pane_t1_ParamLimits

0x2c55,	// (0x00030f7d) vkb2_top_entry_pane_t1

0xce49,	// (0x0003b171) vkb2_top_entry_pane_t2_ParamLimits

0xce49,	// (0x0003b171) vkb2_top_entry_pane_t2

0xce7b,	// (0x0003b1a3) vkb2_top_entry_pane_t3_ParamLimits

0xce7b,	// (0x0003b1a3) vkb2_top_entry_pane_t3

0x0002,

0xfdb1,	// (0x0003e0d9) vkb2_top_entry_pane_t_ParamLimits

0xfdb1,	// (0x0003e0d9) vkb2_top_entry_pane_t

0xf4e4,	// (0x0003d80c) vkb2_top_grid_right_pane_g1_ParamLimits

0xf4e4,	// (0x0003d80c) vkb2_top_grid_right_pane_g1

0x9a13,	// (0x00037d3b) vkb2_top_grid_right_pane_g2_ParamLimits

0x9a13,	// (0x00037d3b) vkb2_top_grid_right_pane_g2

0x9a2b,	// (0x00037d53) vkb2_top_grid_right_pane_g3_ParamLimits

0x9a2b,	// (0x00037d53) vkb2_top_grid_right_pane_g3

0xf4fa,	// (0x0003d822) vkb2_top_grid_right_pane_g4_ParamLimits

0xf4fa,	// (0x0003d822) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb8,	// (0x0003e0e0) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb8,	// (0x0003e0e0) vkb2_top_grid_right_pane_g

0x9a59,	// (0x00037d81) vkb2_top_cell_left_pane_g1

0x9a70,	// (0x00037d98) vkb2_cell_keypad_pane_g1_ParamLimits

0x9a70,	// (0x00037d98) vkb2_cell_keypad_pane_g1

0xce91,	// (0x0003b1b9) vkb2_cell_keypad_pane_t1_ParamLimits

0xce91,	// (0x0003b1b9) vkb2_cell_keypad_pane_t1

0x9a7e,	// (0x00037da6) vkb2_cell_bottom_grid_pane_ParamLimits

0x9a7e,	// (0x00037da6) vkb2_cell_bottom_grid_pane

0x9ab7,	// (0x00037ddf) vkb2_cell_bottom_grid_pane_g1

0x28fe,	// (0x00030c26) aid_call2_pane_cp02

0x2906,	// (0x00030c2e) aid_call_pane_cp02

0x290e,	// (0x00030c36) clock_digital_number_pane_cp10

0x2916,	// (0x00030c3e) clock_digital_number_pane_cp11

0x291e,	// (0x00030c46) clock_digital_number_pane_cp12

0x2926,	// (0x00030c4e) clock_digital_number_pane_cp13

0x292e,	// (0x00030c56) clock_digital_separator_pane_cp10

0x3fec,	// (0x00032314) popup_clock_digital_analogue_window_cp2_g1

0x3fec,	// (0x00032314) popup_clock_digital_analogue_window_cp2_g2

0x2936,	// (0x00030c5e) popup_clock_digital_analogue_window_cp2_g3

0x3fec,	// (0x00032314) popup_clock_digital_analogue_window_cp2_g4

0x2936,	// (0x00030c5e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6d,	// (0x0003e095) popup_clock_digital_analogue_window_cp2_g

0x293e,	// (0x00030c66) popup_clock_digital_analogue_window_cp2_t1

0x294c,	// (0x00030c74) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd78,	// (0x0003e0a0) popup_clock_digital_analogue_window_cp2_t

0xaf7d,	// (0x000392a5) clock_digital_number_pane_cp10_g1

0xaf7d,	// (0x000392a5) clock_digital_number_pane_cp10_g2

0x0001,

0xfb67,	// (0x0003de8f) clock_digital_number_pane_cp10_g

0xaf7d,	// (0x000392a5) clock_digital_separator_pane_cp10_g1

0xaf7d,	// (0x000392a5) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb67,	// (0x0003de8f) clock_digital_separator_pane_cp10_g

0xc90a,	// (0x0003ac32) uniindi_top_pane_g3

0xc91b,	// (0x0003ac43) uniindi_top_pane_g4

0x9891,	// (0x00037bb9) vkb2_row_keypad_pane_ParamLimits

0x9891,	// (0x00037bb9) vkb2_row_keypad_pane

0x9ad7,	// (0x00037dff) vkb2_cell_t_keypad_pane_ParamLimits

0x9ad7,	// (0x00037dff) vkb2_cell_t_keypad_pane

0x9ae7,	// (0x00037e0f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9ae7,	// (0x00037e0f) vkb2_cell_t_keypad_pane_cp08

0x9afa,	// (0x00037e22) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9afa,	// (0x00037e22) vkb2_cell_t_keypad_pane_cp09

0x9b0e,	// (0x00037e36) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9b0e,	// (0x00037e36) vkb2_cell_t_keypad_pane_cp01

0x9b1f,	// (0x00037e47) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9b1f,	// (0x00037e47) vkb2_cell_t_keypad_pane_cp02

0x9b30,	// (0x00037e58) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9b30,	// (0x00037e58) vkb2_cell_t_keypad_pane_cp03

0x9b41,	// (0x00037e69) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9b41,	// (0x00037e69) vkb2_cell_t_keypad_pane_cp04

0x9b52,	// (0x00037e7a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9b52,	// (0x00037e7a) vkb2_cell_t_keypad_pane_cp05

0x9b63,	// (0x00037e8b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9b63,	// (0x00037e8b) vkb2_cell_t_keypad_pane_cp06

0x9b74,	// (0x00037e9c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9b74,	// (0x00037e9c) vkb2_cell_t_keypad_pane_cp07

0x9b85,	// (0x00037ead) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9b85,	// (0x00037ead) vkb2_cell_t_keypad_pane_cp10

0xb216,	// (0x0003953e) vkb2_cell_t_keypad_pane_g1

0xcea8,	// (0x0003b1d0) vkb2_cell_t_keypad_pane_t1

0x340e,	// (0x00031736) popup_grid_graphic2_window

0x2c8e,	// (0x00030fb6) aid_size_cell_graphic2_ParamLimits

0x2c8e,	// (0x00030fb6) aid_size_cell_graphic2

0x4fcb,	// (0x000332f3) bg_popup_window_pane_cp21_ParamLimits

0x4fcb,	// (0x000332f3) bg_popup_window_pane_cp21

0x2cc0,	// (0x00030fe8) graphic2_pages_pane_ParamLimits

0x2cc0,	// (0x00030fe8) graphic2_pages_pane

0x2d16,	// (0x0003103e) grid_graphic2_control_pane_ParamLimits

0x2d16,	// (0x0003103e) grid_graphic2_control_pane

0x2d4a,	// (0x00031072) grid_graphic2_pane_ParamLimits

0x2d4a,	// (0x00031072) grid_graphic2_pane

0x2dbd,	// (0x000310e5) cell_graphic2_pane

0x340e,	// (0x00031736) main_comp_mode_pane

0xc14c,	// (0x0003a474) list_ai3_gene_pane_ParamLimits

0x263f,	// (0x00030967) bg_popup_window_pane_cp19_ParamLimits

0xc55c,	// (0x0003a884) bg_touch_area_indi_pane_ParamLimits

0xc55c,	// (0x0003a884) bg_touch_area_indi_pane

0xc572,	// (0x0003a89a) bg_touch_area_indi_pane_cp01_ParamLimits

0xc572,	// (0x0003a89a) bg_touch_area_indi_pane_cp01

0xc588,	// (0x0003a8b0) bg_touch_area_indi_pane_cp02_ParamLimits

0xc588,	// (0x0003a8b0) bg_touch_area_indi_pane_cp02

0xc5a0,	// (0x0003a8c8) bg_touch_area_indi_pane_cp03_ParamLimits

0xc5a0,	// (0x0003a8c8) bg_touch_area_indi_pane_cp03

0xc5ba,	// (0x0003a8e2) popup_slider_window_g1_ParamLimits

0xc5d6,	// (0x0003a8fe) popup_slider_window_g2_ParamLimits

0xc5f2,	// (0x0003a91a) popup_slider_window_g3_ParamLimits

0xfd02,	// (0x0003e02a) popup_slider_window_g_ParamLimits

0xc64e,	// (0x0003a976) popup_slider_window_t1_ParamLimits

0xc6c2,	// (0x0003a9ea) small_volume_slider_vertical_pane_ParamLimits

0x2dbd,	// (0x000310e5) cell_graphic2_pane_ParamLimits

0x2e25,	// (0x0003114d) bg_button_pane_cp10_ParamLimits

0x2e25,	// (0x0003114d) bg_button_pane_cp10

0x2e38,	// (0x00031160) bg_button_pane_cp11_ParamLimits

0x2e38,	// (0x00031160) bg_button_pane_cp11

0x2e4b,	// (0x00031173) graphic2_pages_pane_g1_ParamLimits

0x2e4b,	// (0x00031173) graphic2_pages_pane_g1

0x2e66,	// (0x0003118e) graphic2_pages_pane_g2_ParamLimits

0x2e66,	// (0x0003118e) graphic2_pages_pane_g2

0x0001,

0xfdc6,	// (0x0003e0ee) graphic2_pages_pane_g_ParamLimits

0xfdc6,	// (0x0003e0ee) graphic2_pages_pane_g

0x2e7e,	// (0x000311a6) graphic2_pages_pane_t1_ParamLimits

0x2e7e,	// (0x000311a6) graphic2_pages_pane_t1

0x2e96,	// (0x000311be) cell_graphic2_control_pane_ParamLimits

0x2e96,	// (0x000311be) cell_graphic2_control_pane

0x2eb0,	// (0x000311d8) cell_graphic2_pane_g1_ParamLimits

0x2eb0,	// (0x000311d8) cell_graphic2_pane_g1

0x01aa,	// (0x0002e4d2) cell_graphic2_pane_g2_ParamLimits

0x01aa,	// (0x0002e4d2) cell_graphic2_pane_g2

0x2e18,	// (0x00031140) cell_graphic2_pane_g3_ParamLimits

0x2e18,	// (0x00031140) cell_graphic2_pane_g3

0x01b7,	// (0x0002e4df) cell_graphic2_pane_g4_ParamLimits

0x01b7,	// (0x0002e4df) cell_graphic2_pane_g4

0x2ebd,	// (0x000311e5) cell_graphic2_pane_g5_ParamLimits

0x2ebd,	// (0x000311e5) cell_graphic2_pane_g5

0x0004,

0xfdcb,	// (0x0003e0f3) cell_graphic2_pane_g_ParamLimits

0xfdcb,	// (0x0003e0f3) cell_graphic2_pane_g

0x2edd,	// (0x00031205) cell_graphic2_pane_t1_ParamLimits

0x2edd,	// (0x00031205) cell_graphic2_pane_t1

0x55ff,	// (0x00033927) grid_highlight_pane_cp11_ParamLimits

0x55ff,	// (0x00033927) grid_highlight_pane_cp11

0x3ac5,	// (0x00031ded) bg_button_pane_cp05

0x2ef4,	// (0x0003121c) cell_graphic2_control_pane_g1

0xaf7d,	// (0x000392a5) bg_touch_area_indi_pane_g1

0xceba,	// (0x0003b1e2) aid_cmod_rocker_key_size

0xcec4,	// (0x0003b1ec) aid_cmode_itu_key_size

0xcece,	// (0x0003b1f6) main_cmode_video_pane

0xced8,	// (0x0003b200) main_comp_mode_itu_pane

0xcee4,	// (0x0003b20c) main_comp_mode_rocker_pane

0xcef0,	// (0x0003b218) cell_cmode_rocker_pane_ParamLimits

0xcef0,	// (0x0003b218) cell_cmode_rocker_pane

0xcf02,	// (0x0003b22a) cell_cmode_itu_pane_ParamLimits

0xcf02,	// (0x0003b22a) cell_cmode_itu_pane

0x3ac5,	// (0x00031ded) bg_button_pane_cp06_ParamLimits

0x3ac5,	// (0x00031ded) bg_button_pane_cp06

0xb216,	// (0x0003953e) cell_cmode_rocker_pane_g1_ParamLimits

0xb216,	// (0x0003953e) cell_cmode_rocker_pane_g1

0xc766,	// (0x0003aa8e) cell_cmode_rocker_pane_g2_ParamLimits

0xc766,	// (0x0003aa8e) cell_cmode_rocker_pane_g2

0x0001,

0xfdd6,	// (0x0003e0fe) cell_cmode_rocker_pane_g_ParamLimits

0xfdd6,	// (0x0003e0fe) cell_cmode_rocker_pane_g

0x340e,	// (0x00031736) bg_button_pane_cp07

0xcf17,	// (0x0003b23f) cell_cmode_itu_pane_g1

0xcf20,	// (0x0003b248) cell_cmode_itu_pane_t1

0xcf2e,	// (0x0003b256) cell_cmode_itu_pane_t2

0x0001,

0xfddb,	// (0x0003e103) cell_cmode_itu_pane_t

0xc98c,	// (0x0003acb4) aid_touch_ctrl_left

0xc994,	// (0x0003acbc) aid_touch_ctrl_right

0x340e,	// (0x00031736) compa_mode_pane

0x2f01,	// (0x00031229) aid_cmod_rocker_key_size_cp

0x2f0b,	// (0x00031233) aid_cmode_itu_key_size_cp

0xcf3c,	// (0x0003b264) compa_mode_pane_g1

0xcf44,	// (0x0003b26c) compa_mode_pane_g2

0xcf4c,	// (0x0003b274) compa_mode_pane_g3

0x0002,

0xfde0,	// (0x0003e108) compa_mode_pane_g

0x2f15,	// (0x0003123d) main_comp_mode_itu_pane_cp

0x2f1d,	// (0x00031245) main_comp_mode_rocker_pane_cp

0x2f25,	// (0x0003124d) cell_cmode_itu_pane_cp_ParamLimits

0x2f25,	// (0x0003124d) cell_cmode_itu_pane_cp

0x2f3a,	// (0x00031262) cell_cmode_rocker_pane_cp_ParamLimits

0x2f3a,	// (0x00031262) cell_cmode_rocker_pane_cp

0x3ac5,	// (0x00031ded) bg_button_pane_cp06_cp_ParamLimits

0x3ac5,	// (0x00031ded) bg_button_pane_cp06_cp

0xb216,	// (0x0003953e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb216,	// (0x0003953e) cell_cmode_rocker_pane_g1_cp

0xaf7d,	// (0x000392a5) cell_cmode_rocker_pane_g2_cp

0x340e,	// (0x00031736) bg_button_pane_cp07_cp

0x2f4c,	// (0x00031274) cell_cmode_itu_pane_g1_cp

0x2f55,	// (0x0003127d) cell_cmode_itu_pane_t1_cp

0x2f55,	// (0x0003127d) cell_cmode_itu_pane_t2_cp

0x1d83,	// (0x000300ab) settings_code_pane_cp2

0x347e,	// (0x000317a6) bg_popup_window_pane_cp3_ParamLimits

0x377f,	// (0x00031aa7) heading_pane_cp3_ParamLimits

0x378b,	// (0x00031ab3) listscroll_popup_graphic_pane_ParamLimits

0x9157,	// (0x0003747f) fep_hwr_aid_pane_ParamLimits

0x9577,	// (0x0003789f) aid_touch_sctrl_top_ParamLimits

0x9584,	// (0x000378ac) sctrl_sk_top_pane_g1_ParamLimits

0xb216,	// (0x0003953e) sctrl_sk_top_pane_g2_ParamLimits

0xfd1b,	// (0x0003e043) sctrl_sk_top_pane_g_ParamLimits

0x9591,	// (0x000378b9) sctrl_sk_top_pane_t1_ParamLimits

0x9577,	// (0x0003789f) aid_touch_sctrl_bottom_ParamLimits

0x9591,	// (0x000378b9) sctrl_sk_bottom_pane_t1_ParamLimits

0xc8d6,	// (0x0003abfe) aid_area_touch_clock

0xf328,	// (0x0003d650) aid_vkb2_area_top_pane_cell_ParamLimits

0xf328,	// (0x0003d650) aid_vkb2_area_top_pane_cell

0xf3d3,	// (0x0003d6fb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xf3d3,	// (0x0003d6fb) aid_vkb2_area_bottom_pane_cell

0xce41,	// (0x0003b169) popup_char_count_window

0xcf54,	// (0x0003b27c) popup_char_count_window_g1

0xcf5d,	// (0x0003b285) popup_char_count_window_g2

0xcf66,	// (0x0003b28e) popup_char_count_window_g3

0x0002,

0xfde7,	// (0x0003e10f) popup_char_count_window_g

0xcf6f,	// (0x0003b297) popup_char_count_window_t1

0x9636,	// (0x0003795e) popup_fep_char_preview_window_ParamLimits

0x9636,	// (0x0003795e) popup_fep_char_preview_window

0xf348,	// (0x0003d670) vkb2_top_candi_pane_ParamLimits

0xf348,	// (0x0003d670) vkb2_top_candi_pane

0x2f63,	// (0x0003128b) cell_vkb2_top_candi_pane_ParamLimits

0x2f63,	// (0x0003128b) cell_vkb2_top_candi_pane

0x4fcb,	// (0x000332f3) bg_popup_fep_char_preview_window_ParamLimits

0x4fcb,	// (0x000332f3) bg_popup_fep_char_preview_window

0x9b9a,	// (0x00037ec2) popup_fep_char_preview_window_t1_ParamLimits

0x9b9a,	// (0x00037ec2) popup_fep_char_preview_window_t1

0xcf7d,	// (0x0003b2a5) bg_popup_fep_char_preview_window_g1

0xcf85,	// (0x0003b2ad) bg_popup_fep_char_preview_window_g2

0xcf8d,	// (0x0003b2b5) bg_popup_fep_char_preview_window_g3

0xcf95,	// (0x0003b2bd) bg_popup_fep_char_preview_window_g4

0xcf9d,	// (0x0003b2c5) bg_popup_fep_char_preview_window_g5

0x9bd4,	// (0x00037efc) bg_popup_fep_char_preview_window_g6

0xcfa5,	// (0x0003b2cd) bg_popup_fep_char_preview_window_g7

0xcfad,	// (0x0003b2d5) bg_popup_fep_char_preview_window_g8

0xcfb5,	// (0x0003b2dd) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdee,	// (0x0003e116) bg_popup_fep_char_preview_window_g

0xb216,	// (0x0003953e) cell_vkb2_top_candi_pane_g1_ParamLimits

0xb216,	// (0x0003953e) cell_vkb2_top_candi_pane_g1

0xb543,	// (0x0003986b) cell_vkb2_top_candi_pane_g2_ParamLimits

0xb543,	// (0x0003986b) cell_vkb2_top_candi_pane_g2

0xb564,	// (0x0003988c) cell_vkb2_top_candi_pane_g3_ParamLimits

0xb564,	// (0x0003988c) cell_vkb2_top_candi_pane_g3

0x9bdc,	// (0x00037f04) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9bdc,	// (0x00037f04) cell_vkb2_top_candi_pane_g4

0xc1b0,	// (0x0003a4d8) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc1b0,	// (0x0003a4d8) cell_vkb2_top_candi_pane_g5

0xc766,	// (0x0003aa8e) cell_vkb2_top_candi_pane_g6_ParamLimits

0xc766,	// (0x0003aa8e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe01,	// (0x0003e129) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe01,	// (0x0003e129) cell_vkb2_top_candi_pane_g

0x9bfd,	// (0x00037f25) cell_vkb2_top_candi_pane_t1

0x8e64,	// (0x0003718c) aid_size_touch_slider_mark_ParamLimits

0x8e64,	// (0x0003718c) aid_size_touch_slider_mark

0x2cfc,	// (0x00031024) grid_graphic2_catg_pane_ParamLimits

0x2cfc,	// (0x00031024) grid_graphic2_catg_pane

0x2d90,	// (0x000310b8) popup_grid_graphic2_window_t1_ParamLimits

0x2d90,	// (0x000310b8) popup_grid_graphic2_window_t1

0x2da6,	// (0x000310ce) popup_grid_graphic2_window_t2_ParamLimits

0x2da6,	// (0x000310ce) popup_grid_graphic2_window_t2

0x0001,

0xfdc1,	// (0x0003e0e9) popup_grid_graphic2_window_t_ParamLimits

0xfdc1,	// (0x0003e0e9) popup_grid_graphic2_window_t

0x3ac5,	// (0x00031ded) bg_button_pane_cp05_ParamLimits

0x2ef4,	// (0x0003121c) cell_graphic2_control_pane_g1_ParamLimits

0x2fc9,	// (0x000312f1) cell_graphic2_catg_pane_ParamLimits

0x2fc9,	// (0x000312f1) cell_graphic2_catg_pane

0x340e,	// (0x00031736) bg_button_pane_cp12

0x2fdb,	// (0x00031303) cell_graphic2_catg_pane_g1

0xc8a2,	// (0x0003abca) cell_tb_ext_pane_t1_ParamLimits

0x99d0,	// (0x00037cf8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x99d0,	// (0x00037cf8) vkb2_top_cell_right_narrow_pane

0x99e8,	// (0x00037d10) vkb2_top_cell_right_wide_pane_ParamLimits

0x99e8,	// (0x00037d10) vkb2_top_cell_right_wide_pane

0xb50e,	// (0x00039836) bg_vkb2_func_pane_ParamLimits

0xb50e,	// (0x00039836) bg_vkb2_func_pane

0x9a59,	// (0x00037d81) vkb2_top_cell_left_pane_g1_ParamLimits

0xb50e,	// (0x00039836) bg_vkb2_fuc_pane_cp03_ParamLimits

0xb50e,	// (0x00039836) bg_vkb2_fuc_pane_cp03

0x9ab7,	// (0x00037ddf) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4a5f,	// (0x00032d87) bg_vkb2_func_pane_g1

0x4a57,	// (0x00032d7f) bg_vkb2_func_pane_g2

0x4a67,	// (0x00032d8f) bg_vkb2_func_pane_g3

0x4a6f,	// (0x00032d97) bg_vkb2_func_pane_g4

0x4a77,	// (0x00032d9f) bg_vkb2_func_pane_g5

0x4a7f,	// (0x00032da7) bg_vkb2_func_pane_g6

0x4a8f,	// (0x00032db7) bg_vkb2_func_pane_g7

0x4a87,	// (0x00032daf) bg_vkb2_func_pane_g8

0x4a4f,	// (0x00032d77) bg_vkb2_func_pane_g9

0x0008,

0xfe0e,	// (0x0003e136) bg_vkb2_func_pane_g

0xb50e,	// (0x00039836) bg_vkb2_fuc_pane_cp01_ParamLimits

0xb50e,	// (0x00039836) bg_vkb2_fuc_pane_cp01

0x9a59,	// (0x00037d81) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9a59,	// (0x00037d81) vkb2_top_cell_right_wide_pane_g1

0xb50e,	// (0x00039836) bg_vkb2_fuc_pane_cp02_ParamLimits

0xb50e,	// (0x00039836) bg_vkb2_fuc_pane_cp02

0x9ab7,	// (0x00037ddf) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9ab7,	// (0x00037ddf) vkb2_top_cell_right_narrow_pane_g1

0x2579,	// (0x000308a1) aid_touch_area_decrease_ParamLimits

0x2579,	// (0x000308a1) aid_touch_area_decrease

0x25b3,	// (0x000308db) aid_touch_area_increase_ParamLimits

0x25b3,	// (0x000308db) aid_touch_area_increase

0x25db,	// (0x00030903) aid_touch_area_mute_ParamLimits

0x25db,	// (0x00030903) aid_touch_area_mute

0x260b,	// (0x00030933) aid_touch_area_slider_ParamLimits

0x260b,	// (0x00030933) aid_touch_area_slider

0x264b,	// (0x00030973) popup_slider_window_g4_ParamLimits

0x264b,	// (0x00030973) popup_slider_window_g4

0x2673,	// (0x0003099b) popup_slider_window_g5_ParamLimits

0x2673,	// (0x0003099b) popup_slider_window_g5

0x26a7,	// (0x000309cf) popup_slider_window_g6_ParamLimits

0x26a7,	// (0x000309cf) popup_slider_window_g6

0xc67c,	// (0x0003a9a4) popup_slider_window_t2_ParamLimits

0xc67c,	// (0x0003a9a4) popup_slider_window_t2

0x0001,

0xfd0f,	// (0x0003e037) popup_slider_window_t_ParamLimits

0xfd0f,	// (0x0003e037) popup_slider_window_t

0x26c3,	// (0x000309eb) slider_pane_ParamLimits

0x26c3,	// (0x000309eb) slider_pane

0xcfbd,	// (0x0003b2e5) slider_pane_g1_ParamLimits

0xcfbd,	// (0x0003b2e5) slider_pane_g1

0xcfd1,	// (0x0003b2f9) slider_pane_g2_ParamLimits

0xcfd1,	// (0x0003b2f9) slider_pane_g2

0xcfe7,	// (0x0003b30f) slider_pane_g3_ParamLimits

0xcfe7,	// (0x0003b30f) slider_pane_g3

0x0003,

0xfe21,	// (0x0003e149) slider_pane_g_ParamLimits

0xfe21,	// (0x0003e149) slider_pane_g

0x150f,	// (0x0002f837) popup_tb_float_extension_window_ParamLimits

0x150f,	// (0x0002f837) popup_tb_float_extension_window

0xd013,	// (0x0003b33b) aid_size_cell_tb_float_ext

0x340e,	// (0x00031736) bg_popup_sub_window_cp28

0xd01f,	// (0x0003b347) grid_tb_float_ext_pane

0xd029,	// (0x0003b351) cell_tb_float_ext_pane_ParamLimits

0xd029,	// (0x0003b351) cell_tb_float_ext_pane

0xd043,	// (0x0003b36b) cell_tb_float_ext_pane_g1

0xd04c,	// (0x0003b374) grid_highlight_pane_cp12

0xf0e3,	// (0x0003d40b) cell_last_hwr_side_pane_ParamLimits

0xf0e3,	// (0x0003d40b) cell_last_hwr_side_pane

0xaf7d,	// (0x000392a5) cell_last_hwr_side_pane_g1

0xd055,	// (0x0003b37d) cell_last_hwr_side_pane_g2

0x0001,

0xfe2a,	// (0x0003e152) cell_last_hwr_side_pane_g

0xf4af,	// (0x0003d7d7) vkb2_area_bottom_space_btn_pane_ParamLimits

0xf4af,	// (0x0003d7d7) vkb2_area_bottom_space_btn_pane

0xb216,	// (0x0003953e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xcea8,	// (0x0003b1d0) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9bfd,	// (0x00037f25) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9c1c,	// (0x00037f44) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9c1c,	// (0x00037f44) vkb2_area_bottom_space_btn_pane_g1

0x9c56,	// (0x00037f7e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9c56,	// (0x00037f7e) vkb2_area_bottom_space_btn_pane_g2

0x9c8c,	// (0x00037fb4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9c8c,	// (0x00037fb4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2f,	// (0x0003e157) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2f,	// (0x0003e157) vkb2_area_bottom_space_btn_pane_g

0x91fe,	// (0x00037526) cel_fep_hwr_func_pane_ParamLimits

0x91fe,	// (0x00037526) cel_fep_hwr_func_pane

0xf0b8,	// (0x0003d3e0) cell_hwr_side_button_pane_ParamLimits

0xf0b8,	// (0x0003d3e0) cell_hwr_side_button_pane

0xc8d6,	// (0x0003abfe) aid_area_touch_clock_ParamLimits

0x35b1,	// (0x000318d9) bg_uniindi_top_pane_ParamLimits

0xc8e8,	// (0x0003ac10) uniindi_top_pane_g1_ParamLimits

0xc8fe,	// (0x0003ac26) uniindi_top_pane_g2_ParamLimits

0xc90a,	// (0x0003ac32) uniindi_top_pane_g3_ParamLimits

0xc91b,	// (0x0003ac43) uniindi_top_pane_g4_ParamLimits

0xfd47,	// (0x0003e06f) uniindi_top_pane_g_ParamLimits

0xc928,	// (0x0003ac50) uniindi_top_pane_t1_ParamLimits

0x35b1,	// (0x000318d9) bg_vkb2_func_pane_cp01_ParamLimits

0x35b1,	// (0x000318d9) bg_vkb2_func_pane_cp01

0xd05e,	// (0x0003b386) cel_fep_hwr_func_pane_g1_ParamLimits

0xd05e,	// (0x0003b386) cel_fep_hwr_func_pane_g1

0x35b1,	// (0x000318d9) bg_vkb2_func_pane_cp02_ParamLimits

0x35b1,	// (0x000318d9) bg_vkb2_func_pane_cp02

0xd05e,	// (0x0003b386) cell_hwr_side_button_pane_g1_ParamLimits

0xd05e,	// (0x0003b386) cell_hwr_side_button_pane_g1

0x4967,	// (0x00032c8f) status_pane_g4_ParamLimits

0x4967,	// (0x00032c8f) status_pane_g4

0x497f,	// (0x00032ca7) status_pane_t1

0x6625,	// (0x0003494d) form2_midp_gauge_slider_cont_pane

0x662d,	// (0x00034955) form2_midp_gauge_slider_pane_t1_ParamLimits

0x203f,	// (0x00030367) form2_midp_gauge_slider_pane_t2_ParamLimits

0x2051,	// (0x00030379) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1a,	// (0x0003de42) form2_midp_gauge_slider_pane_t_ParamLimits

0x663f,	// (0x00034967) form2_midp_slider_pane_ParamLimits

0x95f6,	// (0x0003791e) aid_size_cell_func_vkb2_ParamLimits

0x95f6,	// (0x0003791e) aid_size_cell_func_vkb2

0xcfff,	// (0x0003b327) slider_pane_g4_ParamLimits

0xcfff,	// (0x0003b327) slider_pane_g4

0xf510,	// (0x0003d838) form2_midp_gauge_slider_pane_t2_cp01

0xf51e,	// (0x0003d846) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xf51e,	// (0x0003d846) form2_midp_gauge_slider_pane_t3_cp01

0x9d01,	// (0x00038029) form2_midp_slider_pane_cp01

0x340e,	// (0x00031736) navi_smil_pane

0xd08e,	// (0x0003b3b6) navi_smil_pane_g1

0xd096,	// (0x0003b3be) navi_smil_pane_t1

0xd06c,	// (0x0003b394) form2_midp_slider_pane_g1

0xd075,	// (0x0003b39d) form2_midp_slider_pane_g2

0xd07d,	// (0x0003b3a5) form2_midp_slider_pane_g3

0xd06c,	// (0x0003b394) form2_midp_slider_pane_g4

0x2fe4,	// (0x0003130c) form2_midp_slider_pane_g5

0x0004,

0xfe38,	// (0x0003e160) form2_midp_slider_pane_g

0x9cc6,	// (0x00037fee) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9cc6,	// (0x00037fee) vkb2_area_bottom_space_btn_pane_g4

0x16eb,	// (0x0002fa13) lc0_navi_pane_ParamLimits

0x16eb,	// (0x0002fa13) lc0_navi_pane

0x1755,	// (0x0002fa7d) lc0_stat_indi_pane_ParamLimits

0x1755,	// (0x0002fa7d) lc0_stat_indi_pane

0x176a,	// (0x0002fa92) ls0_title_pane_ParamLimits

0x176a,	// (0x0002fa92) ls0_title_pane

0x3ac5,	// (0x00031ded) bg_popup_sub_pane_cp14_ParamLimits

0xc8bd,	// (0x0003abe5) list_uniindi_pane_ParamLimits

0xc8c9,	// (0x0003abf1) uniindi_top_pane_ParamLimits

0xc964,	// (0x0003ac8c) list_single_uniindi_pane_g1_ParamLimits

0xc977,	// (0x0003ac9f) list_single_uniindi_pane_t1_ParamLimits

0xf53b,	// (0x0003d863) lc0_stat_clock_pane_ParamLimits

0xf53b,	// (0x0003d863) lc0_stat_clock_pane

0x2ffa,	// (0x00031322) lc0_stat_indi_pane_g1_ParamLimits

0x2ffa,	// (0x00031322) lc0_stat_indi_pane_g1

0x2fed,	// (0x00031315) lc0_stat_indi_pane_g2_ParamLimits

0x2fed,	// (0x00031315) lc0_stat_indi_pane_g2

0x0001,

0xfe43,	// (0x0003e16b) lc0_stat_indi_pane_g_ParamLimits

0xfe43,	// (0x0003e16b) lc0_stat_indi_pane_g

0xf548,	// (0x0003d870) lc0_uni_indicator_pane_ParamLimits

0xf548,	// (0x0003d870) lc0_uni_indicator_pane

0x3007,	// (0x0003132f) ls0_title_pane_g1_ParamLimits

0x3007,	// (0x0003132f) ls0_title_pane_g1

0x301b,	// (0x00031343) ls0_title_pane_t1_ParamLimits

0x301b,	// (0x00031343) ls0_title_pane_t1

0xf555,	// (0x0003d87d) lc0_uni_indicator_pane_g1_ParamLimits

0xf555,	// (0x0003d87d) lc0_uni_indicator_pane_g1

0xd0a4,	// (0x0003b3cc) lc0_stat_clock_pane_t1

0x340e,	// (0x00031736) main_ai5_pane

0xd0b2,	// (0x0003b3da) ai5_sk_pane_ParamLimits

0xd0b2,	// (0x0003b3da) ai5_sk_pane

0x3049,	// (0x00031371) cell_ai5_widget_pane_ParamLimits

0x3049,	// (0x00031371) cell_ai5_widget_pane

0xd0bf,	// (0x0003b3e7) aid_size_cell_widget_grid

0xd0d1,	// (0x0003b3f9) bg_ai5_widget_pane_ParamLimits

0xd0d1,	// (0x0003b3f9) bg_ai5_widget_pane

0x30d2,	// (0x000313fa) cell_ai5_widget_pane_g2

0x30e2,	// (0x0003140a) cell_ai5_widget_pane_g3

0x30f6,	// (0x0003141e) cell_ai5_widget_pane_g4

0x3102,	// (0x0003142a) cell_ai5_widget_pane_g5

0x310e,	// (0x00031436) cell_ai5_widget_pane_g6

0x311a,	// (0x00031442) cell_ai5_widget_pane_g7

0x3162,	// (0x0003148a) cell_ai5_widget_pane_t1_ParamLimits

0x3162,	// (0x0003148a) cell_ai5_widget_pane_t1

0x317f,	// (0x000314a7) cell_ai5_widget_pane_t2_ParamLimits

0x317f,	// (0x000314a7) cell_ai5_widget_pane_t2

0x3197,	// (0x000314bf) cell_ai5_widget_pane_t3_ParamLimits

0x3197,	// (0x000314bf) cell_ai5_widget_pane_t3

0x31af,	// (0x000314d7) cell_ai5_widget_pane_t4_ParamLimits

0x31af,	// (0x000314d7) cell_ai5_widget_pane_t4

0x31c9,	// (0x000314f1) cell_ai5_widget_pane_t5_ParamLimits

0x31c9,	// (0x000314f1) cell_ai5_widget_pane_t5

0xd0dd,	// (0x0003b405) cell_ai5_widget_pane_t6_ParamLimits

0xd0dd,	// (0x0003b405) cell_ai5_widget_pane_t6

0xd0ef,	// (0x0003b417) cell_ai5_widget_pane_t7_ParamLimits

0xd0ef,	// (0x0003b417) cell_ai5_widget_pane_t7

0x31e8,	// (0x00031510) cell_ai5_widget_pane_t8_ParamLimits

0x31e8,	// (0x00031510) cell_ai5_widget_pane_t8

0x0009,

0xfe5d,	// (0x0003e185) cell_ai5_widget_pane_t_ParamLimits

0xfe5d,	// (0x0003e185) cell_ai5_widget_pane_t

0x3230,	// (0x00031558) grid_ai5_widget_pane

0x3ac5,	// (0x00031ded) highlight_cell_ai5_widget_pane_ParamLimits

0x3ac5,	// (0x00031ded) highlight_cell_ai5_widget_pane

0x3246,	// (0x0003156e) ai5_sk_left_pane

0x3250,	// (0x00031578) ai5_sk_middle_pane

0x325a,	// (0x00031582) ai5_sk_right_pane

0xd108,	// (0x0003b430) bg_ai5_widget_pane_g1_ParamLimits

0xd108,	// (0x0003b430) bg_ai5_widget_pane_g1

0xd114,	// (0x0003b43c) bg_ai5_widget_pane_g2_ParamLimits

0xd114,	// (0x0003b43c) bg_ai5_widget_pane_g2

0xd120,	// (0x0003b448) bg_ai5_widget_pane_g3_ParamLimits

0xd120,	// (0x0003b448) bg_ai5_widget_pane_g3

0xd12c,	// (0x0003b454) bg_ai5_widget_pane_g4_ParamLimits

0xd12c,	// (0x0003b454) bg_ai5_widget_pane_g4

0xd138,	// (0x0003b460) bg_ai5_widget_pane_g5_ParamLimits

0xd138,	// (0x0003b460) bg_ai5_widget_pane_g5

0xd144,	// (0x0003b46c) bg_ai5_widget_pane_g6_ParamLimits

0xd144,	// (0x0003b46c) bg_ai5_widget_pane_g6

0xd150,	// (0x0003b478) bg_ai5_widget_pane_g7_ParamLimits

0xd150,	// (0x0003b478) bg_ai5_widget_pane_g7

0xd15c,	// (0x0003b484) bg_ai5_widget_pane_g8_ParamLimits

0xd15c,	// (0x0003b484) bg_ai5_widget_pane_g8

0xd168,	// (0x0003b490) bg_ai5_widget_pane_g9_ParamLimits

0xd168,	// (0x0003b490) bg_ai5_widget_pane_g9

0x0008,

0xfe72,	// (0x0003e19a) bg_ai5_widget_pane_g_ParamLimits

0xfe72,	// (0x0003e19a) bg_ai5_widget_pane_g

0xd190,	// (0x0003b4b8) cell_shortcut_ai5_widget_pane_ParamLimits

0xd190,	// (0x0003b4b8) cell_shortcut_ai5_widget_pane

0x34ba,	// (0x000317e2) bg_cell_shortcut_ai5_widget_pane

0xd1a2,	// (0x0003b4ca) cell_grid_ai5_widget_pane_g1

0xd1ab,	// (0x0003b4d3) highlight_cell_shortcut_ai5_widget_pane

0x4a57,	// (0x00032d7f) ai5_sk_left_pane_g1

0xd1b3,	// (0x0003b4db) ai5_sk_left_pane_g2

0xd1bb,	// (0x0003b4e3) ai5_sk_left_pane_g3

0xd1c3,	// (0x0003b4eb) ai5_sk_left_pane_g4

0x0003,

0xfe85,	// (0x0003e1ad) ai5_sk_left_pane_g

0xd1cb,	// (0x0003b4f3) ai5_sk_left_pane_t1

0x4a5f,	// (0x00032d87) ai5_sk_right_pane_g1

0xd1d9,	// (0x0003b501) ai5_sk_right_pane_g2

0xd1e1,	// (0x0003b509) ai5_sk_right_pane_g3

0xd1e9,	// (0x0003b511) ai5_sk_right_pane_g4

0x0003,

0xfe8e,	// (0x0003e1b6) ai5_sk_right_pane_g

0xd1f1,	// (0x0003b519) ai5_sk_right_pane_t1

0x4a5f,	// (0x00032d87) ai5_sk_middle_pane_g1

0x4a57,	// (0x00032d7f) ai5_sk_middle_pane_g2

0x4a77,	// (0x00032d9f) ai5_sk_middle_pane_g3

0xd1e1,	// (0x0003b509) ai5_sk_middle_pane_g4

0xd1bb,	// (0x0003b4e3) ai5_sk_middle_pane_g5

0xd1ff,	// (0x0003b527) ai5_sk_middle_pane_g6

0x3264,	// (0x0003158c) ai5_sk_middle_pane_g7

0x0006,

0xfe97,	// (0x0003e1bf) ai5_sk_middle_pane_g

0x15d7,	// (0x0002f8ff) aid_touch_area_size_lc0_ParamLimits

0x15d7,	// (0x0002f8ff) aid_touch_area_size_lc0

0x9389,	// (0x000376b1) cell_hwr_candidate_pane_t1_ParamLimits

0x4889,	// (0x00032bb1) aid_touch_navi_pane

0x185c,	// (0x0002fb84) status_dt_navi_pane_ParamLimits

0x185c,	// (0x0002fb84) status_dt_navi_pane

0x1874,	// (0x0002fb9c) status_dt_sta_pane_ParamLimits

0x1874,	// (0x0002fb9c) status_dt_sta_pane

0x326c,	// (0x00031594) dt_sta_controll_pane

0x3279,	// (0x000315a1) dt_sta_indi_pane

0x3286,	// (0x000315ae) dt_sta_title_pane

0x35b1,	// (0x000318d9) bg_dt_sta_indi_pane_ParamLimits

0x35b1,	// (0x000318d9) bg_dt_sta_indi_pane

0x3298,	// (0x000315c0) dt_sta_battery_pane

0x32a0,	// (0x000315c8) dt_sta_indi_pane_g1

0xd207,	// (0x0003b52f) dt_sta_indi_pane_g2

0xd210,	// (0x0003b538) dt_sta_indi_pane_g3

0x0002,

0xfea6,	// (0x0003e1ce) dt_sta_indi_pane_g

0xd219,	// (0x0003b541) dt_sta_signal_pane

0x3ac5,	// (0x00031ded) bg_dt_sta_title_pane_ParamLimits

0x3ac5,	// (0x00031ded) bg_dt_sta_title_pane

0x56d1,	// (0x000339f9) dt_sta_title_pane_g1

0x32a9,	// (0x000315d1) dt_sta_title_pane_t1_ParamLimits

0x32a9,	// (0x000315d1) dt_sta_title_pane_t1

0x340e,	// (0x00031736) bg_dt_sta_control_pane

0x32be,	// (0x000315e6) dt_sta_controll_pane_g1

0xd222,	// (0x0003b54a) bg_dt_sta_title_pane_g1

0xd22b,	// (0x0003b553) bg_dt_sta_title_pane_g2

0xd234,	// (0x0003b55c) bg_dt_sta_title_pane_g3

0x0002,

0xfead,	// (0x0003e1d5) bg_dt_sta_title_pane_g

0xaf7d,	// (0x000392a5) bg_dt_sta_indi_pane_g1

0xd23d,	// (0x0003b565) dt_sta_signal_pane_g1

0xd245,	// (0x0003b56d) dt_sta_signal_pane_g2

0x0001,

0xfeb4,	// (0x0003e1dc) dt_sta_signal_pane_g

0xd24d,	// (0x0003b575) dt_sta_battery_pane_g1

0xd256,	// (0x0003b57e) dt_sta_battery_pane_t1

0xaf7d,	// (0x000392a5) bg_dt_sta_control_pane_g1

0x406a,	// (0x00032392) fep_china_uni_eep_pane

0x4072,	// (0x0003239a) fep_china_uni_entry_pane_ParamLimits

0x4082,	// (0x000323aa) popup_fep_china_uni_window_g1_ParamLimits

0x4092,	// (0x000323ba) popup_fep_china_uni_window_g2_ParamLimits

0x4092,	// (0x000323ba) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0003da8a) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0003da8a) popup_fep_china_uni_window_g

0xd265,	// (0x0003b58d) fep_china_uni_eep_pane_g1

0xd26d,	// (0x0003b595) fep_china_uni_eep_pane_t1

0xd085,	// (0x0003b3ad) aid_touch_area_size_smil_player

0x493a,	// (0x00032c62) lc0_clock_pane

0x4973,	// (0x00032c9b) status_pane_g5_ParamLimits

0x4973,	// (0x00032c9b) status_pane_g5

0x10a3,	// (0x0002f3cb) popup_keymap_window

0x4953,	// (0x00032c7b) status_icon_pane

0x30e2,	// (0x0003140a) cell_ai5_widget_pane_g3_ParamLimits

0x30f6,	// (0x0003141e) cell_ai5_widget_pane_g4_ParamLimits

0x3102,	// (0x0003142a) cell_ai5_widget_pane_g5_ParamLimits

0x3126,	// (0x0003144e) cell_ai5_widget_pane_g8_ParamLimits

0x3126,	// (0x0003144e) cell_ai5_widget_pane_g8

0x313a,	// (0x00031462) cell_ai5_widget_pane_g9_ParamLimits

0x313a,	// (0x00031462) cell_ai5_widget_pane_g9

0x314e,	// (0x00031476) cell_ai5_widget_pane_g10_ParamLimits

0x314e,	// (0x00031476) cell_ai5_widget_pane_g10

0xd27c,	// (0x0003b5a4) status_icon_pane_g1

0x340e,	// (0x00031736) bg_popup_sub_pane_cp13

0xd284,	// (0x0003b5ac) popup_keymap_window_t1

0x0ef0,	// (0x0002f218) control_pane_g6_ParamLimits

0x0ef0,	// (0x0002f218) control_pane_g6

0x0ee3,	// (0x0002f20b) control_pane_g7_ParamLimits

0x0ee3,	// (0x0002f20b) control_pane_g7

0x0ed6,	// (0x0002f1fe) control_pane_g8_ParamLimits

0x0ed6,	// (0x0002f1fe) control_pane_g8

0x326c,	// (0x00031594) dt_sta_controll_pane_ParamLimits

0x3279,	// (0x000315a1) dt_sta_indi_pane_ParamLimits

0x3286,	// (0x000315ae) dt_sta_title_pane_ParamLimits

0x3a07,	// (0x00031d2f) aid_size_touch_scroll_bar_cale

0x7e53,	// (0x0003617b) popup_discreet_window_ParamLimits

0x7e53,	// (0x0003617b) popup_discreet_window

0xec82,	// (0x0003cfaa) popup_sk_window

0x4fcb,	// (0x000332f3) bg_popup_sub_pane_cp28_ParamLimits

0x4fcb,	// (0x000332f3) bg_popup_sub_pane_cp28

0xd292,	// (0x0003b5ba) popup_discreet_window_g1_ParamLimits

0xd292,	// (0x0003b5ba) popup_discreet_window_g1

0xd2b2,	// (0x0003b5da) popup_discreet_window_t1_ParamLimits

0xd2b2,	// (0x0003b5da) popup_discreet_window_t1

0xd2d0,	// (0x0003b5f8) popup_discreet_window_t2_ParamLimits

0xd2d0,	// (0x0003b5f8) popup_discreet_window_t2

0x0002,

0xfeb9,	// (0x0003e1e1) popup_discreet_window_t_ParamLimits

0xfeb9,	// (0x0003e1e1) popup_discreet_window_t

0x9d3a,	// (0x00038062) popup_sk_window_g1

0x9d44,	// (0x0003806c) popup_sk_window_g2

0x0001,

0xfec0,	// (0x0003e1e8) popup_sk_window_g

0xd322,	// (0x0003b64a) popup_sk_window_t1

0xd330,	// (0x0003b658) popup_sk_window_t1_copy1

0x30d2,	// (0x000313fa) cell_ai5_widget_pane_g2_ParamLimits

0x31fa,	// (0x00031522) cell_ai5_widget_pane_t9_ParamLimits

0x31fa,	// (0x00031522) cell_ai5_widget_pane_t9

0x340e,	// (0x00031736) main_fep_fshwr2_pane

0x32c7,	// (0x000315ef) aid_fshwr2_btn_pane

0x32cf,	// (0x000315f7) aid_fshwr2_syb_pane

0x32d7,	// (0x000315ff) aid_fshwr2_txt_pane

0x32df,	// (0x00031607) fshwr2_func_candi_pane

0x32e9,	// (0x00031611) fshwr2_hwr_syb_pane

0x32f7,	// (0x0003161f) fshwr2_icf_pane

0x340e,	// (0x00031736) fshwr2_icf_bg_pane

0x3301,	// (0x00031629) fshwr2_icf_pane_t1_ParamLimits

0x3301,	// (0x00031629) fshwr2_icf_pane_t1

0xaf7d,	// (0x000392a5) fshwr2_func_candi_pane_g1

0xd352,	// (0x0003b67a) fshwr2_func_candi_row_pane_ParamLimits

0xd352,	// (0x0003b67a) fshwr2_func_candi_row_pane

0x331b,	// (0x00031643) cell_fshwr2_syb_pane_ParamLimits

0x331b,	// (0x00031643) cell_fshwr2_syb_pane

0xb216,	// (0x0003953e) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb216,	// (0x0003953e) fshwr2_hwr_syb_pane_g1

0x340e,	// (0x00031736) bg_popup_call_pane_cp01

0xd363,	// (0x0003b68b) fshwr2_func_candi_cell_pane_ParamLimits

0xd363,	// (0x0003b68b) fshwr2_func_candi_cell_pane

0xd394,	// (0x0003b6bc) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xd394,	// (0x0003b6bc) fshwr2_func_candi_cell_bg_pane

0xd3ae,	// (0x0003b6d6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd3ae,	// (0x0003b6d6) fshwr2_func_candi_cell_pane_g1

0xd3ce,	// (0x0003b6f6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd3ce,	// (0x0003b6f6) fshwr2_func_candi_cell_pane_t1

0x340e,	// (0x00031736) bg_button_pane_cp08

0x44fb,	// (0x00032823) cell_fshwr2_syb_bg_pane

0x3335,	// (0x0003165d) cell_fshwr2_syb_bg_pane_g1

0xd3e1,	// (0x0003b709) cell_fshwr2_syb_bg_pane_t1

0x3ac5,	// (0x00031ded) main_tmo_pane

0x1bb4,	// (0x0002fedc) uni_indicator_pane_g1_ParamLimits

0x1bc9,	// (0x0002fef1) uni_indicator_pane_g2_ParamLimits

0x1bde,	// (0x0002ff06) uni_indicator_pane_g3_ParamLimits

0x59b3,	// (0x00033cdb) uni_indicator_pane_g4_ParamLimits

0x59b3,	// (0x00033cdb) uni_indicator_pane_g4

0x59c7,	// (0x00033cef) uni_indicator_pane_g5_ParamLimits

0x59c7,	// (0x00033cef) uni_indicator_pane_g5

0x59db,	// (0x00033d03) uni_indicator_pane_g6_ParamLimits

0x59db,	// (0x00033d03) uni_indicator_pane_g6

0xf95a,	// (0x0003dc82) uni_indicator_pane_g_ParamLimits

0x255b,	// (0x00030883) popup_tmo_note_window_ParamLimits

0x255b,	// (0x00030883) popup_tmo_note_window

0x340e,	// (0x00031736) fshwr2_bg_pane

0xd3bf,	// (0x0003b6e7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd3bf,	// (0x0003b6e7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec5,	// (0x0003e1ed) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec5,	// (0x0003e1ed) fshwr2_func_candi_cell_pane_g

0xaf7d,	// (0x000392a5) bg_popup_window_pane_cp01

0xd3f0,	// (0x0003b718) bg_popup_window_pane_g1_cp01

0xd3f9,	// (0x0003b721) bg_popup_window_pane_cp22_ParamLimits

0xd3f9,	// (0x0003b721) bg_popup_window_pane_cp22

0xd407,	// (0x0003b72f) listscroll_tmo_link_pane_ParamLimits

0xd407,	// (0x0003b72f) listscroll_tmo_link_pane

0xd447,	// (0x0003b76f) popup_tmo_note_window_g1_ParamLimits

0xd447,	// (0x0003b76f) popup_tmo_note_window_g1

0xd454,	// (0x0003b77c) tmo_note_info_pane_ParamLimits

0xd454,	// (0x0003b77c) tmo_note_info_pane

0x333d,	// (0x00031665) list_tmo_note_info_pane_g1_ParamLimits

0x333d,	// (0x00031665) list_tmo_note_info_pane_g1

0xd46e,	// (0x0003b796) list_tmo_note_info_pane_g2_ParamLimits

0xd46e,	// (0x0003b796) list_tmo_note_info_pane_g2

0x0001,

0xfeca,	// (0x0003e1f2) list_tmo_note_info_pane_g_ParamLimits

0xfeca,	// (0x0003e1f2) list_tmo_note_info_pane_g

0xd48a,	// (0x0003b7b2) list_tmo_note_info_text_pane_ParamLimits

0xd48a,	// (0x0003b7b2) list_tmo_note_info_text_pane

0xd4cc,	// (0x0003b7f4) list_tmo_link_pane

0xd4d9,	// (0x0003b801) scroll_pane_cp20

0xd4e6,	// (0x0003b80e) list_single_tmo_link_pane_ParamLimits

0xd4e6,	// (0x0003b80e) list_single_tmo_link_pane

0xd4f6,	// (0x0003b81e) list_single_tmo_link_pane_t1

0xd504,	// (0x0003b82c) list_tmo_note_info_text_pane_t1_ParamLimits

0xd504,	// (0x0003b82c) list_tmo_note_info_text_pane_t1

0x0bff,	// (0x0002ef27) aid_size_touch_scroll_bar_cp01_ParamLimits

0x0bff,	// (0x0002ef27) aid_size_touch_scroll_bar_cp01

0xe895,	// (0x0003cbbd) aid_size_touch_slider_marker

0xec72,	// (0x0003cf9a) popup_settings_window_ParamLimits

0xec72,	// (0x0003cf9a) popup_settings_window

0x7503,	// (0x0003582b) popup_candi_list_indi_window

0x4889,	// (0x00032bb1) aid_touch_navi_pane_ParamLimits

0x954b,	// (0x00037873) rs_clock_indi_pane

0x9554,	// (0x0003787c) sctrl_sk_bottom_pane_ParamLimits

0x9565,	// (0x0003788d) sctrl_sk_top_pane_ParamLimits

0x9650,	// (0x00037978) popup_fep_tooltip_window

0xd0bf,	// (0x0003b3e7) aid_size_cell_widget_grid_ParamLimits

0x30c6,	// (0x000313ee) cell_ai5_widget_pane_g1_ParamLimits

0x30c6,	// (0x000313ee) cell_ai5_widget_pane_g1

0x310e,	// (0x00031436) cell_ai5_widget_pane_g6_ParamLimits

0x311a,	// (0x00031442) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe48,	// (0x0003e170) cell_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0003e170) cell_ai5_widget_pane_g

0x321e,	// (0x00031546) cell_ai5_widget_pane_t10_ParamLimits

0x321e,	// (0x00031546) cell_ai5_widget_pane_t10

0x3230,	// (0x00031558) grid_ai5_widget_pane_ParamLimits

0xd174,	// (0x0003b49c) cell_contacts_ai5_widget_pane_ParamLimits

0xd174,	// (0x0003b49c) cell_contacts_ai5_widget_pane

0xd2e5,	// (0x0003b60d) popup_discreet_window_t3_ParamLimits

0xd2e5,	// (0x0003b60d) popup_discreet_window_t3

0xd33e,	// (0x0003b666) popup_fshwr2_char_preview_window_ParamLimits

0xd33e,	// (0x0003b666) popup_fshwr2_char_preview_window

0x3354,	// (0x0003167c) tmo_note_info_pane_t1

0x3369,	// (0x00031691) tmo_note_info_pane_t2

0x3382,	// (0x000316aa) tmo_note_info_pane_t3

0xd4a8,	// (0x0003b7d0) tmo_note_info_pane_t4

0xd4ba,	// (0x0003b7e2) tmo_note_info_pane_t5

0x0004,

0xfecf,	// (0x0003e1f7) tmo_note_info_pane_t

0xd4cc,	// (0x0003b7f4) list_tmo_link_pane_ParamLimits

0xd4d9,	// (0x0003b801) scroll_pane_cp20_ParamLimits

0x340e,	// (0x00031736) bg_popup_fep_char_preview_window_cp01

0xd51d,	// (0x0003b845) popup_fshwr2_char_preview_window_t1

0xd52b,	// (0x0003b853) popup_candi_list_indi_window_g1

0xd534,	// (0x0003b85c) bg_cell_contacts_ai5_widget_pane

0xd540,	// (0x0003b868) cell_contacts_ai5_widget_pane_g1

0xd554,	// (0x0003b87c) cell_contacts_ai5_widget_pane_g2

0xd563,	// (0x0003b88b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeda,	// (0x0003e202) cell_contacts_ai5_widget_pane_g

0xd576,	// (0x0003b89e) cell_contacts_ai5_widget_pane_t1

0x3ac5,	// (0x00031ded) highlight_cell_shortcut_ai5_widget_pane_cp01

0xd5f0,	// (0x0003b918) settings_container_pane

0x44fb,	// (0x00032823) listscroll_set_pane_copy1

0x61b8,	// (0x000344e0) scroll_pane_cp121_copy1

0xd5fc,	// (0x0003b924) set_content_pane_copy1

0xd604,	// (0x0003b92c) aid_height_set_list_copy1_ParamLimits

0xd604,	// (0x0003b92c) aid_height_set_list_copy1

0x5971,	// (0x00033c99) aid_size_parent_copy1_ParamLimits

0x5971,	// (0x00033c99) aid_size_parent_copy1

0xd610,	// (0x0003b938) button_value_adjust_pane_cp6_copy1_ParamLimits

0xd610,	// (0x0003b938) button_value_adjust_pane_cp6_copy1

0x4735,	// (0x00032a5d) list_highlight_pane_cp2_copy1_ParamLimits

0x4735,	// (0x00032a5d) list_highlight_pane_cp2_copy1

0xd624,	// (0x0003b94c) list_set_pane_copy1_ParamLimits

0xd624,	// (0x0003b94c) list_set_pane_copy1

0xd58b,	// (0x0003b8b3) main_pane_set_t1_copy1_ParamLimits

0xd58b,	// (0x0003b8b3) main_pane_set_t1_copy1

0xd5c5,	// (0x0003b8ed) main_pane_set_t2_copy1_ParamLimits

0xd5c5,	// (0x0003b8ed) main_pane_set_t2_copy1

0xd6d1,	// (0x0003b9f9) main_pane_set_t3_copy1

0xd6df,	// (0x0003ba07) main_pane_set_t4_copy1

0xd5e4,	// (0x0003b90c) set_content_pane_g1_copy1_ParamLimits

0xd5e4,	// (0x0003b90c) set_content_pane_g1_copy1

0xd6ed,	// (0x0003ba15) setting_code_pane_copy1

0xd6f7,	// (0x0003ba1f) setting_slider_graphic_pane_copy1

0xd6f7,	// (0x0003ba1f) setting_slider_pane_copy1

0xd701,	// (0x0003ba29) setting_text_pane_copy1

0xd70b,	// (0x0003ba33) setting_volume_pane_copy1

0xd714,	// (0x0003ba3c) settings_code_pane_cp2_copy1

0xd71c,	// (0x0003ba44) settings_code_pane_cp_copy1_ParamLimits

0xd71c,	// (0x0003ba44) settings_code_pane_cp_copy1

0xd730,	// (0x0003ba58) volume_set_pane_copy1

0xd738,	// (0x0003ba60) volume_set_pane_g10_copy1

0xd740,	// (0x0003ba68) volume_set_pane_g1_copy1

0xd748,	// (0x0003ba70) volume_set_pane_g2_copy1

0xd750,	// (0x0003ba78) volume_set_pane_g3_copy1

0xd758,	// (0x0003ba80) volume_set_pane_g4_copy1

0xd760,	// (0x0003ba88) volume_set_pane_g5_copy1

0xd768,	// (0x0003ba90) volume_set_pane_g6_copy1

0xd770,	// (0x0003ba98) volume_set_pane_g7_copy1

0xd778,	// (0x0003baa0) volume_set_pane_g8_copy1

0xd780,	// (0x0003baa8) volume_set_pane_g9_copy1

0x347e,	// (0x000317a6) bg_set_opt_pane_cp_copy1_ParamLimits

0x347e,	// (0x000317a6) bg_set_opt_pane_cp_copy1

0xd788,	// (0x0003bab0) setting_slider_pane_t1_copy1_ParamLimits

0xd788,	// (0x0003bab0) setting_slider_pane_t1_copy1

0xd7a6,	// (0x0003bace) setting_slider_pane_t2_copy1_ParamLimits

0xd7a6,	// (0x0003bace) setting_slider_pane_t2_copy1

0xd7c0,	// (0x0003bae8) setting_slider_pane_t3_copy1_ParamLimits

0xd7c0,	// (0x0003bae8) setting_slider_pane_t3_copy1

0xd7d8,	// (0x0003bb00) slider_set_pane_copy1_ParamLimits

0xd7d8,	// (0x0003bb00) slider_set_pane_copy1

0x3b2c,	// (0x00031e54) set_opt_bg_pane_g1_copy2

0x3b34,	// (0x00031e5c) set_opt_bg_pane_g2_copy2

0xd7ee,	// (0x0003bb16) set_opt_bg_pane_g3_copy2

0x3b44,	// (0x00031e6c) set_opt_bg_pane_g4_copy2

0x3b4c,	// (0x00031e74) set_opt_bg_pane_g5_copy2

0x3b54,	// (0x00031e7c) set_opt_bg_pane_g6_copy2

0xd7f8,	// (0x0003bb20) set_opt_bg_pane_g7_copy2

0xd800,	// (0x0003bb28) set_opt_bg_pane_g8_copy2

0xd80a,	// (0x0003bb32) set_opt_bg_pane_g9_copy2

0x9d4e,	// (0x00038076) aid_size_touch_slider_mark_copy1_ParamLimits

0x9d4e,	// (0x00038076) aid_size_touch_slider_mark_copy1

0xd814,	// (0x0003bb3c) slider_set_pane_g1_copy1

0x9d62,	// (0x0003808a) slider_set_pane_g2_copy1

0x8e84,	// (0x000371ac) slider_set_pane_g3_copy1_ParamLimits

0x8e84,	// (0x000371ac) slider_set_pane_g3_copy1

0x8e98,	// (0x000371c0) slider_set_pane_g4_copy1_ParamLimits

0x8e98,	// (0x000371c0) slider_set_pane_g4_copy1

0x8eb0,	// (0x000371d8) slider_set_pane_g5_copy1_ParamLimits

0x8eb0,	// (0x000371d8) slider_set_pane_g5_copy1

0x8e84,	// (0x000371ac) slider_set_pane_g6_copy1_ParamLimits

0x8e84,	// (0x000371ac) slider_set_pane_g6_copy1

0x9d6a,	// (0x00038092) slider_set_pane_g7_copy1_ParamLimits

0x9d6a,	// (0x00038092) slider_set_pane_g7_copy1

0x3422,	// (0x0003174a) bg_set_opt_pane_cp2_copy1

0xd81d,	// (0x0003bb45) setting_slider_graphic_pane_g1_copy1

0xd826,	// (0x0003bb4e) setting_slider_graphic_pane_t1_copy1

0xd836,	// (0x0003bb5e) setting_slider_graphic_pane_t2_copy1

0xd846,	// (0x0003bb6e) slider_set_pane_cp_copy1

0xd856,	// (0x0003bb7e) input_focus_pane_cp1_copy1

0xd85f,	// (0x0003bb87) list_set_text_pane_copy1

0xd867,	// (0x0003bb8f) setting_text_pane_g1_copy1

0x7bac,	// (0x00035ed4) set_text_pane_t1_copy1

0xd856,	// (0x0003bb7e) input_focus_pane_cp2_copy1

0xd867,	// (0x0003bb8f) setting_code_pane_g1_copy1

0xd870,	// (0x0003bb98) setting_code_pane_t1_copy1

0xd87e,	// (0x0003bba6) list_set_graphic_pane_copy1

0x3422,	// (0x0003174a) bg_set_opt_pane_cp4_copy1

0x41fd,	// (0x00032525) list_set_graphic_pane_g1_copy1_ParamLimits

0x41fd,	// (0x00032525) list_set_graphic_pane_g1_copy1

0xd892,	// (0x0003bbba) list_set_graphic_pane_g2_copy1

0x4215,	// (0x0003253d) list_set_graphic_pane_t1_copy1_ParamLimits

0x4215,	// (0x0003253d) list_set_graphic_pane_t1_copy1

0xaf7d,	// (0x000392a5) rs_clock_indi_pane_g1

0xd89a,	// (0x0003bbc2) rs_clock_indi_pane_t1

0xd8a8,	// (0x0003bbd0) rs_indi_pane

0xd8b0,	// (0x0003bbd8) rs_indi_pane_g1

0xd8b9,	// (0x0003bbe1) rs_indi_pane_g2

0xd8c2,	// (0x0003bbea) rs_indi_pane_g3

0x0002,

0xfee1,	// (0x0003e209) rs_indi_pane_g

0x44fb,	// (0x00032823) bg_popup_preview_window_pane_cp03

0xd8cb,	// (0x0003bbf3) popup_fep_tooltip_window_t1

0xbc24,	// (0x00039f4c) popup_note2_window_g2_ParamLimits

0xbc24,	// (0x00039f4c) popup_note2_window_g2

0x0001,

0xfc86,	// (0x0003dfae) popup_note2_window_g_ParamLimits

0xfc86,	// (0x0003dfae) popup_note2_window_g

0xc112,	// (0x0003a43a) bg_popup_sub_pane_cp11_ParamLimits

0xc11f,	// (0x0003a447) cell_ai3_links_pane_g1_ParamLimits

0xc136,	// (0x0003a45e) cell_ai3_links_pane_t1

0x7bac,	// (0x00035ed4) set_text_pane_t1_copy1_ParamLimits

0x440a,	// (0x00032732) cell_graphic_popup_pane_cp2_ParamLimits

0x440a,	// (0x00032732) cell_graphic_popup_pane_cp2

0xd8d9,	// (0x0003bc01) cell_graphic_popup_pane_g1_cp2

0x381a,	// (0x00031b42) cell_graphic_popup_pane_g2_cp2

0xd8e1,	// (0x0003bc09) cell_graphic_popup_pane_g3_cp2

0xd8e9,	// (0x0003bc11) cell_graphic_popup_pane_t2_cp2

0x382b,	// (0x00031b53) grid_highlight_pane_cp3_cp2

0x3dba,	// (0x000320e2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3ac5,	// (0x00031ded) main_tmo_pane_ParamLimits

0x254f,	// (0x00030877) popup_tmo_big_image_note_window

0x30b6,	// (0x000313de) cell_ai5_widget_list_pane

0x30be,	// (0x000313e6) cell_ai5_widget_lrg_icon_pane

0x3354,	// (0x0003167c) tmo_note_info_pane_t1_ParamLimits

0x3369,	// (0x00031691) tmo_note_info_pane_t2_ParamLimits

0x3382,	// (0x000316aa) tmo_note_info_pane_t3_ParamLimits

0xd4a8,	// (0x0003b7d0) tmo_note_info_pane_t4_ParamLimits

0xd4ba,	// (0x0003b7e2) tmo_note_info_pane_t5_ParamLimits

0xfecf,	// (0x0003e1f7) tmo_note_info_pane_t_ParamLimits

0xd5f0,	// (0x0003b918) settings_container_pane_ParamLimits

0xd84e,	// (0x0003bb76) indicator_popup_pane_cp5

0xd84e,	// (0x0003bb76) indicator_popup_pane_cp6

0xd87e,	// (0x0003bba6) list_set_graphic_pane_copy1_ParamLimits

0x340e,	// (0x00031736) bg_popup_window_pane_cp23

0xd8f7,	// (0x0003bc1f) popup_tmo_big_image_note_window_g1

0xd902,	// (0x0003bc2a) popup_tmo_big_image_note_window_t1

0xd912,	// (0x0003bc3a) popup_tmo_big_image_note_window_t2

0xd922,	// (0x0003bc4a) popup_tmo_big_image_note_window_t3

0x0002,

0xfee8,	// (0x0003e210) popup_tmo_big_image_note_window_t

0x3397,	// (0x000316bf) cell_ai5_widget_lrg_icon_pane_g1

0x339f,	// (0x000316c7) cell_ai5_widget_lrg_icon_pane_t1

0x33ad,	// (0x000316d5) cell_ai5_widget_list_row_pane_ParamLimits

0x33ad,	// (0x000316d5) cell_ai5_widget_list_row_pane

0x33c6,	// (0x000316ee) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x33c6,	// (0x000316ee) cell_ai5_widget_list_row_pane_g1

0x33d3,	// (0x000316fb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x33d3,	// (0x000316fb) cell_ai5_widget_list_row_pane_t1

0x33eb,	// (0x00031713) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x33eb,	// (0x00031713) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeef,	// (0x0003e217) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeef,	// (0x0003e217) cell_ai5_widget_list_row_pane_t

0x340e,	// (0x00031736) main_fep_vtchi_ss_pane

0xd932,	// (0x0003bc5a) popup_fep_char_pre_window

0xd93a,	// (0x0003bc62) popup_fep_ituss_window

0xd945,	// (0x0003bc6d) popup_fep_vkbss_window

0xd94e,	// (0x0003bc76) grid_vkbss_keypad_pane_ParamLimits

0xd94e,	// (0x0003bc76) grid_vkbss_keypad_pane

0xd95e,	// (0x0003bc86) ituss_keypad_pane

0xd966,	// (0x0003bc8e) aid_vkbss_key_offset_ParamLimits

0xd966,	// (0x0003bc8e) aid_vkbss_key_offset

0xd975,	// (0x0003bc9d) cell_vkbss_key_pane_ParamLimits

0xd975,	// (0x0003bc9d) cell_vkbss_key_pane

0xd98b,	// (0x0003bcb3) bg_cell_vkbss_key_g1_ParamLimits

0xd98b,	// (0x0003bcb3) bg_cell_vkbss_key_g1

0xd997,	// (0x0003bcbf) cell_vkbss_key_3p_pane_ParamLimits

0xd997,	// (0x0003bcbf) cell_vkbss_key_3p_pane

0xd9b1,	// (0x0003bcd9) cell_vkbss_key_g1_ParamLimits

0xd9b1,	// (0x0003bcd9) cell_vkbss_key_g1

0xd9cb,	// (0x0003bcf3) cell_vkbss_key_t1_ParamLimits

0xd9cb,	// (0x0003bcf3) cell_vkbss_key_t1

0xd9f6,	// (0x0003bd1e) cell_ituss_key_pane_ParamLimits

0xd9f6,	// (0x0003bd1e) cell_ituss_key_pane

0xda05,	// (0x0003bd2d) bg_cell_ituss_key_g1_ParamLimits

0xda05,	// (0x0003bd2d) bg_cell_ituss_key_g1

0xda11,	// (0x0003bd39) cell_ituss_key_pane_g1_ParamLimits

0xda11,	// (0x0003bd39) cell_ituss_key_pane_g1

0xda1d,	// (0x0003bd45) cell_ituss_key_pane_g2_ParamLimits

0xda1d,	// (0x0003bd45) cell_ituss_key_pane_g2

0x0001,

0xfef4,	// (0x0003e21c) cell_ituss_key_pane_g_ParamLimits

0xfef4,	// (0x0003e21c) cell_ituss_key_pane_g

0xda30,	// (0x0003bd58) cell_ituss_key_t1_ParamLimits

0xda30,	// (0x0003bd58) cell_ituss_key_t1

0xda4e,	// (0x0003bd76) cell_ituss_key_t2_ParamLimits

0xda4e,	// (0x0003bd76) cell_ituss_key_t2

0xda6d,	// (0x0003bd95) cell_ituss_key_t3_ParamLimits

0xda6d,	// (0x0003bd95) cell_ituss_key_t3

0xda8c,	// (0x0003bdb4) cell_ituss_key_t4_ParamLimits

0xda8c,	// (0x0003bdb4) cell_ituss_key_t4

0x0003,

0xfef9,	// (0x0003e221) cell_ituss_key_t_ParamLimits

0xfef9,	// (0x0003e221) cell_ituss_key_t

0xdaab,	// (0x0003bdd3) cell_vkbss_key_3p_pane_g1

0xdab3,	// (0x0003bddb) cell_vkbss_key_3p_pane_g2

0xdabb,	// (0x0003bde3) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x0003e22a) cell_vkbss_key_3p_pane_g

0x340e,	// (0x00031736) bg_popup_fep_char_preview_window_cp02

0xdac3,	// (0x0003bdeb) popup_fep_char_pre_window_t1

0x30ac,	// (0x000313d4) main_ai5_sk_pane

0xd534,	// (0x0003b85c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xd540,	// (0x0003b868) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xd554,	// (0x0003b87c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xd563,	// (0x0003b88b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeda,	// (0x0003e202) cell_contacts_ai5_widget_pane_g_ParamLimits

0xd576,	// (0x0003b89e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3ac5,	// (0x00031ded) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x33fd,	// (0x00031725) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
