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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0005505a };

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
0x4ac4,	// (0x00059b1e) Screen

0x4ad0,	// (0x00059b2a) application_window_ParamLimits

0x4ad0,	// (0x00059b2a) application_window

0xc08d,	// (0x000610e7) screen_g1

0x4b2c,	// (0x00059b86) area_bottom_pane_ParamLimits

0x4b2c,	// (0x00059b86) area_bottom_pane

0x4bec,	// (0x00059c46) area_top_pane_ParamLimits

0x4bec,	// (0x00059c46) area_top_pane

0x4c8a,	// (0x00059ce4) main_pane_ParamLimits

0x4c8a,	// (0x00059ce4) main_pane

0xc097,	// (0x000610f1) misc_graphics

0x8233,	// (0x0005d28d) battery_pane_ParamLimits

0x8233,	// (0x0005d28d) battery_pane

0x8ef1,	// (0x0005df4b) bg_status_flat_pane_g8

0x8ef9,	// (0x0005df53) bg_status_flat_pane_g9

0x82fb,	// (0x0005d355) context_pane_ParamLimits

0x82fb,	// (0x0005d355) context_pane

0x841f,	// (0x0005d479) navi_pane_ParamLimits

0x841f,	// (0x0005d479) navi_pane

0x84af,	// (0x0005d509) signal_pane_ParamLimits

0x84af,	// (0x0005d509) signal_pane

0x0008,

0xf87e,	// (0x000648d8) bg_status_flat_pane_g

0x851c,	// (0x0005d576) status_pane_g1_ParamLimits

0x851c,	// (0x0005d576) status_pane_g1

0x8530,	// (0x0005d58a) status_pane_g2_ParamLimits

0x8530,	// (0x0005d58a) status_pane_g2

0x853c,	// (0x0005d596) status_pane_g3_ParamLimits

0x853c,	// (0x0005d596) status_pane_g3

0x0004,

0xf7a5,	// (0x000647ff) status_pane_g_ParamLimits

0xf7a5,	// (0x000647ff) status_pane_g

0x8570,	// (0x0005d5ca) title_pane_ParamLimits

0x8570,	// (0x0005d5ca) title_pane

0x85ad,	// (0x0005d607) uni_indicator_pane_ParamLimits

0x85ad,	// (0x0005d607) uni_indicator_pane

0x642e,	// (0x0005b488) bg_list_pane_ParamLimits

0x642e,	// (0x0005b488) bg_list_pane

0x644e,	// (0x0005b4a8) find_pane

0x6456,	// (0x0005b4b0) listscroll_app_pane_ParamLimits

0x6456,	// (0x0005b4b0) listscroll_app_pane

0x6462,	// (0x0005b4bc) listscroll_form_pane

0x646a,	// (0x0005b4c4) listscroll_gen_pane_ParamLimits

0x646a,	// (0x0005b4c4) listscroll_gen_pane

0x647e,	// (0x0005b4d8) listscroll_set_pane

0x596e,	// (0x0005a9c8) main_idle_act_pane

0x3331,	// (0x0005838b) main_idle_trad_pane

0x3331,	// (0x0005838b) main_list_empty_pane

0x6498,	// (0x0005b4f2) main_midp_pane

0x64a4,	// (0x0005b4fe) main_pane_g1_ParamLimits

0x64a4,	// (0x0005b4fe) main_pane_g1

0x64b2,	// (0x0005b50c) popup_ai_message_window_ParamLimits

0x64b2,	// (0x0005b50c) popup_ai_message_window

0x6566,	// (0x0005b5c0) popup_fep_china_uni_window_ParamLimits

0x6566,	// (0x0005b5c0) popup_fep_china_uni_window

0x7cb4,	// (0x0005cd0e) popup_fep_japan_candidate_window_ParamLimits

0x7cb4,	// (0x0005cd0e) popup_fep_japan_candidate_window

0x7cde,	// (0x0005cd38) popup_fep_japan_predictive_window_ParamLimits

0x7cde,	// (0x0005cd38) popup_fep_japan_predictive_window

0x7d14,	// (0x0005cd6e) popup_find_window

0x7d21,	// (0x0005cd7b) popup_grid_graphic_window_ParamLimits

0x7d21,	// (0x0005cd7b) popup_grid_graphic_window

0x7d4f,	// (0x0005cda9) popup_large_graphic_colour_window

0x7d75,	// (0x0005cdcf) popup_menu_window_ParamLimits

0x7d75,	// (0x0005cdcf) popup_menu_window

0x7f3f,	// (0x0005cf99) popup_note_image_window

0x7f29,	// (0x0005cf83) popup_note_wait_window_ParamLimits

0x7f29,	// (0x0005cf83) popup_note_wait_window

0x7f29,	// (0x0005cf83) popup_note_window_ParamLimits

0x7f29,	// (0x0005cf83) popup_note_window

0x7fa5,	// (0x0005cfff) popup_query_code_window_ParamLimits

0x7fa5,	// (0x0005cfff) popup_query_code_window

0x7fbb,	// (0x0005d015) popup_query_data_code_window_ParamLimits

0x7fbb,	// (0x0005d015) popup_query_data_code_window

0x7fde,	// (0x0005d038) popup_query_data_window_ParamLimits

0x7fde,	// (0x0005d038) popup_query_data_window

0x8000,	// (0x0005d05a) popup_query_sat_info_window_ParamLimits

0x8000,	// (0x0005d05a) popup_query_sat_info_window

0x803f,	// (0x0005d099) popup_snote_single_graphic_window_ParamLimits

0x803f,	// (0x0005d099) popup_snote_single_graphic_window

0x803f,	// (0x0005d099) popup_snote_single_text_window_ParamLimits

0x803f,	// (0x0005d099) popup_snote_single_text_window

0x8056,	// (0x0005d0b0) popup_sub_window_general

0x819c,	// (0x0005d1f6) popup_window_general_ParamLimits

0x819c,	// (0x0005d1f6) popup_window_general

0x81b5,	// (0x0005d20f) power_save_pane

0x62a3,	// (0x0005b2fd) control_pane_g1_ParamLimits

0x62a3,	// (0x0005b2fd) control_pane_g1

0x62cc,	// (0x0005b326) control_pane_g2_ParamLimits

0x62cc,	// (0x0005b326) control_pane_g2

0x3486,	// (0x000584e0) control_pane_g3_ParamLimits

0x3486,	// (0x000584e0) control_pane_g3

0x0007,

0xf78d,	// (0x000647e7) control_pane_g_ParamLimits

0xf78d,	// (0x000647e7) control_pane_g

0x633b,	// (0x0005b395) control_pane_t1_ParamLimits

0x633b,	// (0x0005b395) control_pane_t1

0x6387,	// (0x0005b3e1) control_pane_t2_ParamLimits

0x6387,	// (0x0005b3e1) control_pane_t2

0x0002,

0xf79e,	// (0x000647f8) control_pane_t_ParamLimits

0xf79e,	// (0x000647f8) control_pane_t

0x61fc,	// (0x0005b256) navi_navi_volume_pane_cp1

0x6204,	// (0x0005b25e) status_small_icon_pane

0x3452,	// (0x000584ac) status_small_pane_g1_ParamLimits

0x3452,	// (0x000584ac) status_small_pane_g1

0x620c,	// (0x0005b266) status_small_pane_g2_ParamLimits

0x620c,	// (0x0005b266) status_small_pane_g2

0x6218,	// (0x0005b272) status_small_pane_g3_ParamLimits

0x6218,	// (0x0005b272) status_small_pane_g3

0x6224,	// (0x0005b27e) status_small_pane_g4_ParamLimits

0x6224,	// (0x0005b27e) status_small_pane_g4

0x6230,	// (0x0005b28a) status_small_pane_g5_ParamLimits

0x6230,	// (0x0005b28a) status_small_pane_g5

0x623e,	// (0x0005b298) status_small_pane_g6_ParamLimits

0x623e,	// (0x0005b298) status_small_pane_g6

0x0007,

0xf77c,	// (0x000647d6) status_small_pane_g_ParamLimits

0xf77c,	// (0x000647d6) status_small_pane_g

0x626d,	// (0x0005b2c7) status_small_pane_t1

0x628f,	// (0x0005b2e9) status_small_wait_pane_ParamLimits

0x628f,	// (0x0005b2e9) status_small_wait_pane

0x5ce1,	// (0x0005ad3b) aid_levels_signal_ParamLimits

0x5ce1,	// (0x0005ad3b) aid_levels_signal

0x5cf3,	// (0x0005ad4d) signal_pane_g1_ParamLimits

0x5cf3,	// (0x0005ad4d) signal_pane_g1

0x5d08,	// (0x0005ad62) signal_pane_g2_ParamLimits

0x5d08,	// (0x0005ad62) signal_pane_g2

0x0003,

0xf70d,	// (0x00064767) signal_pane_g_ParamLimits

0xf70d,	// (0x00064767) signal_pane_g

0xf201,	// (0x0006425b) context_pane_g1

0x4ee9,	// (0x00059f43) title_pane_g1

0x4f07,	// (0x00059f61) title_pane_t1

0xc0b9,	// (0x00061113) title_pane_t2

0xc0df,	// (0x00061139) title_pane_t3

0x0002,

0xf557,	// (0x000645b1) title_pane_t

0x85c5,	// (0x0005d61f) aid_levels_battery_ParamLimits

0x85c5,	// (0x0005d61f) aid_levels_battery

0x85d9,	// (0x0005d633) battery_pane_g1_ParamLimits

0x85d9,	// (0x0005d633) battery_pane_g1

0x85ef,	// (0x0005d649) battery_pane_g2_ParamLimits

0x85ef,	// (0x0005d649) battery_pane_g2

0x0001,

0xf7b0,	// (0x0006480a) battery_pane_g_ParamLimits

0xf7b0,	// (0x0006480a) battery_pane_g

0x983b,	// (0x0005e895) uni_indicator_pane_g1

0x9851,	// (0x0005e8ab) uni_indicator_pane_g2

0x9867,	// (0x0005e8c1) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00064980) uni_indicator_pane_g

0xf4af,	// (0x00064509) navi_icon_pane_ParamLimits

0xf4af,	// (0x00064509) navi_icon_pane

0xf433,	// (0x0006448d) navi_midp_pane

0xf4cb,	// (0x00064525) navi_navi_pane

0xf4d5,	// (0x0006452f) navi_text_pane_ParamLimits

0xf4d5,	// (0x0006452f) navi_text_pane

0xc08d,	// (0x000610e7) status_small_wait_pane_g1

0xc3da,	// (0x00061434) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x0006497b) status_small_wait_pane_g

0x954e,	// (0x0005e5a8) navi_navi_icon_text_pane

0x9556,	// (0x0005e5b0) navi_navi_pane_g1_ParamLimits

0x9556,	// (0x0005e5b0) navi_navi_pane_g1

0x9568,	// (0x0005e5c2) navi_navi_pane_g2_ParamLimits

0x9568,	// (0x0005e5c2) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00064949) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00064949) navi_navi_pane_g

0x957a,	// (0x0005e5d4) navi_navi_tabs_pane

0x9583,	// (0x0005e5dd) navi_navi_text_pane

0x954e,	// (0x0005e5a8) navi_navi_volume_pane

0x952a,	// (0x0005e584) navi_text_pane_t1

0x951e,	// (0x0005e578) navi_icon_pane_g1

0x9471,	// (0x0005e4cb) navi_navi_text_pane_t1

0x68ad,	// (0x0005b907) navi_navi_volume_pane_g1

0x68b5,	// (0x0005b90f) volume_small_pane

0x93d7,	// (0x0005e431) navi_navi_icon_text_pane_g1

0x93df,	// (0x0005e439) navi_navi_icon_text_pane_t1

0xf4cb,	// (0x00064525) navi_tabs_2_long_pane

0xf4cb,	// (0x00064525) navi_tabs_2_pane

0xf4cb,	// (0x00064525) navi_tabs_3_long_pane

0xf4cb,	// (0x00064525) navi_tabs_3_pane

0xf4cb,	// (0x00064525) navi_tabs_4_pane

0x688d,	// (0x0005b8e7) tabs_2_active_pane_ParamLimits

0x688d,	// (0x0005b8e7) tabs_2_active_pane

0x689d,	// (0x0005b8f7) tabs_2_passive_pane_ParamLimits

0x689d,	// (0x0005b8f7) tabs_2_passive_pane

0x685b,	// (0x0005b8b5) tabs_3_active_pane_ParamLimits

0x685b,	// (0x0005b8b5) tabs_3_active_pane

0x686b,	// (0x0005b8c5) tabs_3_passive_pane_ParamLimits

0x686b,	// (0x0005b8c5) tabs_3_passive_pane

0x687c,	// (0x0005b8d6) tabs_3_passive_pane_cp_ParamLimits

0x687c,	// (0x0005b8d6) tabs_3_passive_pane_cp

0x680f,	// (0x0005b869) tabs_4_active_pane_ParamLimits

0x680f,	// (0x0005b869) tabs_4_active_pane

0x6822,	// (0x0005b87c) tabs_4_passive_pane_ParamLimits

0x6822,	// (0x0005b87c) tabs_4_passive_pane

0x6833,	// (0x0005b88d) tabs_4_passive_pane_cp_ParamLimits

0x6833,	// (0x0005b88d) tabs_4_passive_pane_cp

0x6844,	// (0x0005b89e) tabs_4_passive_pane_cp2_ParamLimits

0x6844,	// (0x0005b89e) tabs_4_passive_pane_cp2

0x67eb,	// (0x0005b845) tabs_2_long_active_pane_ParamLimits

0x67eb,	// (0x0005b845) tabs_2_long_active_pane

0x67fd,	// (0x0005b857) tabs_2_long_passive_pane_ParamLimits

0x67fd,	// (0x0005b857) tabs_2_long_passive_pane

0x67ac,	// (0x0005b806) tabs_3_long_active_pane_ParamLimits

0x67ac,	// (0x0005b806) tabs_3_long_active_pane

0x67bf,	// (0x0005b819) tabs_3_long_passive_pane_ParamLimits

0x67bf,	// (0x0005b819) tabs_3_long_passive_pane

0x67d8,	// (0x0005b832) tabs_3_long_passive_pane_cp_ParamLimits

0x67d8,	// (0x0005b832) tabs_3_long_passive_pane_cp

0x6752,	// (0x0005b7ac) volume_small_pane_g1

0x675b,	// (0x0005b7b5) volume_small_pane_g2

0x6764,	// (0x0005b7be) volume_small_pane_g3

0x676d,	// (0x0005b7c7) volume_small_pane_g4

0x6776,	// (0x0005b7d0) volume_small_pane_g5

0x677f,	// (0x0005b7d9) volume_small_pane_g6

0x6788,	// (0x0005b7e2) volume_small_pane_g7

0x6791,	// (0x0005b7eb) volume_small_pane_g8

0x679a,	// (0x0005b7f4) volume_small_pane_g9

0x67a3,	// (0x0005b7fd) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x00064915) volume_small_pane_g

0xc0f1,	// (0x0006114b) bg_active_tab_pane_cp2_ParamLimits

0xc0f1,	// (0x0006114b) bg_active_tab_pane_cp2

0x4f6f,	// (0x00059fc9) tabs_3_active_pane_g1

0x4f77,	// (0x00059fd1) tabs_3_active_pane_t1

0xc0f1,	// (0x0006114b) bg_passive_tab_pane_cp2_ParamLimits

0xc0f1,	// (0x0006114b) bg_passive_tab_pane_cp2

0x4f6f,	// (0x00059fc9) tabs_3_passive_pane_g1

0x4f77,	// (0x00059fd1) tabs_3_passive_pane_t1

0xc0f1,	// (0x0006114b) bg_active_tab_pane_cp3_ParamLimits

0xc0f1,	// (0x0006114b) bg_active_tab_pane_cp3

0x4f89,	// (0x00059fe3) tabs_4_active_pane_g1

0x4f91,	// (0x00059feb) tabs_4_active_pane_t1

0xc0f1,	// (0x0006114b) bg_passive_tab_pane_cp3_ParamLimits

0xc0f1,	// (0x0006114b) bg_passive_tab_pane_cp3

0x4f89,	// (0x00059fe3) tabs_4_1_passive_pane_g1

0x4f91,	// (0x00059feb) tabs_4_1_passive_pane_t1

0x6498,	// (0x0005b4f2) list_highlight_pane_cp2

0x9ab6,	// (0x0005eb10) list_set_pane_ParamLimits

0x9ab6,	// (0x0005eb10) list_set_pane

0x9b7e,	// (0x0005ebd8) main_pane_set_t1_ParamLimits

0x9b7e,	// (0x0005ebd8) main_pane_set_t1

0x9b9e,	// (0x0005ebf8) main_pane_set_t2_ParamLimits

0x9b9e,	// (0x0005ebf8) main_pane_set_t2

0x9bb2,	// (0x0005ec0c) main_pane_set_t3_ParamLimits

0x9bb2,	// (0x0005ec0c) main_pane_set_t3

0x9bc6,	// (0x0005ec20) main_pane_set_t4_ParamLimits

0x9bc6,	// (0x0005ec20) main_pane_set_t4

0x0003,

0xf98b,	// (0x000649e5) main_pane_set_t_ParamLimits

0xf98b,	// (0x000649e5) main_pane_set_t

0x9bda,	// (0x0005ec34) setting_code_pane

0x9be4,	// (0x0005ec3e) setting_slider_graphic_pane

0x9be4,	// (0x0005ec3e) setting_slider_pane

0x9be4,	// (0x0005ec3e) setting_text_pane

0x9be4,	// (0x0005ec3e) setting_volume_pane

0x4fa3,	// (0x00059ffd) volume_set_pane

0xc0f1,	// (0x0006114b) bg_set_opt_pane_cp

0x4fad,	// (0x0005a007) setting_slider_pane_t1

0x4fc6,	// (0x0005a020) setting_slider_pane_t2

0x4fe0,	// (0x0005a03a) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000645b8) setting_slider_pane_t

0x4ff8,	// (0x0005a052) slider_set_pane

0xc097,	// (0x000610f1) bg_set_opt_pane_cp2

0xc0ff,	// (0x00061159) setting_slider_graphic_pane_g1

0x500e,	// (0x0005a068) setting_slider_graphic_pane_t1

0x501e,	// (0x0005a078) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000645bf) setting_slider_graphic_pane_t

0x502e,	// (0x0005a088) slider_set_pane_cp

0xc097,	// (0x000610f1) input_focus_pane_cp1

0x9a77,	// (0x0005ead1) list_set_text_pane

0xc08d,	// (0x000610e7) setting_text_pane_g1

0xc097,	// (0x000610f1) input_focus_pane_cp2

0xc08d,	// (0x000610e7) setting_code_pane_g1

0xc108,	// (0x00061162) setting_code_pane_t1

0x3117,	// (0x00058171) set_text_pane_t1_ParamLimits

0x3117,	// (0x00058171) set_text_pane_t1

0xed23,	// (0x00063d7d) set_opt_bg_pane_g1

0xed2b,	// (0x00063d85) set_opt_bg_pane_g2

0x9a4f,	// (0x0005eaa9) set_opt_bg_pane_g3

0xed3b,	// (0x00063d95) set_opt_bg_pane_g4

0xed43,	// (0x00063d9d) set_opt_bg_pane_g5

0xed4b,	// (0x00063da5) set_opt_bg_pane_g6

0x9a59,	// (0x0005eab3) set_opt_bg_pane_g7

0x9a63,	// (0x0005eabd) set_opt_bg_pane_g8

0x9a6d,	// (0x0005eac7) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x000649d2) set_opt_bg_pane_g

0x9a42,	// (0x0005ea9c) slider_set_pane_g1

0x695e,	// (0x0005b9b8) slider_set_pane_g2

0x0006,

0xf969,	// (0x000649c3) slider_set_pane_g

0x68be,	// (0x0005b918) volume_set_pane_g1

0x68c8,	// (0x0005b922) volume_set_pane_g2

0x68d2,	// (0x0005b92c) volume_set_pane_g3

0x68dc,	// (0x0005b936) volume_set_pane_g4

0x68e6,	// (0x0005b940) volume_set_pane_g5

0x68f0,	// (0x0005b94a) volume_set_pane_g6

0x68fa,	// (0x0005b954) volume_set_pane_g7

0x6904,	// (0x0005b95e) volume_set_pane_g8

0x690e,	// (0x0005b968) volume_set_pane_g9

0x6918,	// (0x0005b972) volume_set_pane_g10

0x0009,

0xf941,	// (0x0006499b) volume_set_pane_g

0x5036,	// (0x0005a090) indicator_pane_ParamLimits

0x5036,	// (0x0005a090) indicator_pane

0x5042,	// (0x0005a09c) main_idle_pane_g2_ParamLimits

0x5042,	// (0x0005a09c) main_idle_pane_g2

0x506a,	// (0x0005a0c4) main_pane_idle_g1_ParamLimits

0x506a,	// (0x0005a0c4) main_pane_idle_g1

0xc116,	// (0x00061170) popup_clock_digital_analogue_window_ParamLimits

0xc116,	// (0x00061170) popup_clock_digital_analogue_window

0x5078,	// (0x0005a0d2) soft_indicator_pane_ParamLimits

0x5078,	// (0x0005a0d2) soft_indicator_pane

0x5086,	// (0x0005a0e0) wallpaper_pane_ParamLimits

0x5086,	// (0x0005a0e0) wallpaper_pane

0xc08d,	// (0x000610e7) wallpaper_pane_g1

0x5092,	// (0x0005a0ec) indicator_pane_g1_ParamLimits

0x5092,	// (0x0005a0ec) indicator_pane_g1

0xa04d,	// (0x0005f0a7) navi_navi_icon_text_pane_srt_g1

0xc144,	// (0x0006119e) soft_indicator_pane_t1

0xc15e,	// (0x000611b8) aid_ps_area_pane

0x509e,	// (0x0005a0f8) aid_ps_clock_pane

0xc16f,	// (0x000611c9) aid_ps_indicator_pane

0xc17b,	// (0x000611d5) indicator_ps_pane_ParamLimits

0xc17b,	// (0x000611d5) indicator_ps_pane

0xc18a,	// (0x000611e4) power_save_pane_g1_ParamLimits

0xc18a,	// (0x000611e4) power_save_pane_g1

0xc196,	// (0x000611f0) power_save_pane_g2_ParamLimits

0xc196,	// (0x000611f0) power_save_pane_g2

0x4ae0,	// (0x00059b3a) aid_navinavi_width_pane

0xc15e,	// (0x000611b8) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000645c4) power_save_pane_g_ParamLimits

0xf56a,	// (0x000645c4) power_save_pane_g

0xc1a4,	// (0x000611fe) power_save_pane_t1_ParamLimits

0xc1a4,	// (0x000611fe) power_save_pane_t1

0x509e,	// (0x0005a0f8) aid_ps_clock_pane_ParamLimits

0xc16f,	// (0x000611c9) aid_ps_indicator_pane_ParamLimits

0xc1b6,	// (0x00061210) power_save_pane_t4_ParamLimits

0xc1b6,	// (0x00061210) power_save_pane_t4

0x0001,

0xf56f,	// (0x000645c9) power_save_pane_t_ParamLimits

0xf56f,	// (0x000645c9) power_save_pane_t

0xc1e0,	// (0x0006123a) power_save_t3_ParamLimits

0xc1e0,	// (0x0006123a) power_save_t3

0xc1cb,	// (0x00061225) power_save_t2_ParamLimits

0xc1cb,	// (0x00061225) power_save_t2

0xc1f5,	// (0x0006124f) indicator_ps_pane_g1

0x50ac,	// (0x0005a106) ai_gene_pane_ParamLimits

0x50ac,	// (0x0005a106) ai_gene_pane

0x50b8,	// (0x0005a112) ai_links_pane_ParamLimits

0x50b8,	// (0x0005a112) ai_links_pane

0x50c4,	// (0x0005a11e) indicator_pane_cp1_ParamLimits

0x50c4,	// (0x0005a11e) indicator_pane_cp1

0x50d0,	// (0x0005a12a) main_pane_idle_g1_cp_ParamLimits

0x50d0,	// (0x0005a12a) main_pane_idle_g1_cp

0xc1fe,	// (0x00061258) popup_ai_links_title_window

0x50dc,	// (0x0005a136) soft_indicator_pane_cp1_ParamLimits

0x50dc,	// (0x0005a136) soft_indicator_pane_cp1

0x9829,	// (0x0005e883) ai_links_pane_g1

0x9832,	// (0x0005e88c) grid_ai_links_pane

0x980e,	// (0x0005e868) ai_gene_pane_1

0x9817,	// (0x0005e871) ai_gene_pane_2

0x9820,	// (0x0005e87a) list_highlight_pane_cp4

0x97ee,	// (0x0005e848) cell_ai_link_pane_ParamLimits

0x97ee,	// (0x0005e848) cell_ai_link_pane

0x97e6,	// (0x0005e840) cell_ai_link_pane_g1

0xc3da,	// (0x00061434) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00064976) cell_ai_link_pane_g

0xc097,	// (0x000610f1) grid_highlight_cp2

0xc097,	// (0x000610f1) bg_popup_sub_pane_cp1

0xc215,	// (0x0006126f) popup_ai_links_title_window_t1

0x9732,	// (0x0005e78c) ai_gene_pane_1_g1_ParamLimits

0x9732,	// (0x0005e78c) ai_gene_pane_1_g1

0x973e,	// (0x0005e798) ai_gene_pane_1_g2_ParamLimits

0x973e,	// (0x0005e798) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x0006496c) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x0006496c) ai_gene_pane_1_g

0x974b,	// (0x0005e7a5) ai_gene_pane_1_t1_ParamLimits

0x974b,	// (0x0005e7a5) ai_gene_pane_1_t1

0x977f,	// (0x0005e7d9) grid_ai_soft_ind_pane

0x971d,	// (0x0005e777) ai_gene_pane_2_t1_ParamLimits

0x971d,	// (0x0005e777) ai_gene_pane_2_t1

0x50e8,	// (0x0005a142) main_pane_empty_t1_ParamLimits

0x50e8,	// (0x0005a142) main_pane_empty_t1

0x5100,	// (0x0005a15a) main_pane_empty_t2_ParamLimits

0x5100,	// (0x0005a15a) main_pane_empty_t2

0x5115,	// (0x0005a16f) main_pane_empty_t3_ParamLimits

0x5115,	// (0x0005a16f) main_pane_empty_t3

0x5127,	// (0x0005a181) main_pane_empty_t4_ParamLimits

0x5127,	// (0x0005a181) main_pane_empty_t4

0x5139,	// (0x0005a193) main_pane_empty_t5_ParamLimits

0x5139,	// (0x0005a193) main_pane_empty_t5

0x0004,

0xf574,	// (0x000645ce) main_pane_empty_t_ParamLimits

0xf574,	// (0x000645ce) main_pane_empty_t

0xed74,	// (0x00063dce) bg_popup_window_pane_ParamLimits

0xed74,	// (0x00063dce) bg_popup_window_pane

0x947f,	// (0x0005e4d9) find_popup_pane_cp2_ParamLimits

0x947f,	// (0x0005e4d9) find_popup_pane_cp2

0x948b,	// (0x0005e4e5) heading_pane_ParamLimits

0x948b,	// (0x0005e4e5) heading_pane

0xc097,	// (0x000610f1) bg_popup_sub_pane

0x93f9,	// (0x0005e453) bg_popup_window_pane_g1_ParamLimits

0x93f9,	// (0x0005e453) bg_popup_window_pane_g1

0x9405,	// (0x0005e45f) bg_popup_window_pane_g2_ParamLimits

0x9405,	// (0x0005e45f) bg_popup_window_pane_g2

0x9411,	// (0x0005e46b) bg_popup_window_pane_g3_ParamLimits

0x9411,	// (0x0005e46b) bg_popup_window_pane_g3

0x941d,	// (0x0005e477) bg_popup_window_pane_g4_ParamLimits

0x941d,	// (0x0005e477) bg_popup_window_pane_g4

0x9429,	// (0x0005e483) bg_popup_window_pane_g5_ParamLimits

0x9429,	// (0x0005e483) bg_popup_window_pane_g5

0x9435,	// (0x0005e48f) bg_popup_window_pane_g6_ParamLimits

0x9435,	// (0x0005e48f) bg_popup_window_pane_g6

0x9441,	// (0x0005e49b) bg_popup_window_pane_g7_ParamLimits

0x9441,	// (0x0005e49b) bg_popup_window_pane_g7

0x944d,	// (0x0005e4a7) bg_popup_window_pane_g8_ParamLimits

0x944d,	// (0x0005e4a7) bg_popup_window_pane_g8

0x9459,	// (0x0005e4b3) bg_popup_window_pane_g9_ParamLimits

0x9459,	// (0x0005e4b3) bg_popup_window_pane_g9

0x9465,	// (0x0005e4bf) bg_popup_window_pane_g10_ParamLimits

0x9465,	// (0x0005e4bf) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00064934) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00064934) bg_popup_window_pane_g

0x938e,	// (0x0005e3e8) bg_popup_heading_pane_ParamLimits

0x938e,	// (0x0005e3e8) bg_popup_heading_pane

0x6a72,	// (0x0005bacc) tabs_4_passive_pane_cp_srt_ParamLimits

0x6a72,	// (0x0005bacc) tabs_4_passive_pane_cp_srt

0x6a84,	// (0x0005bade) tabs_4_passive_pane_srt_ParamLimits

0x93a2,	// (0x0005e3fc) heading_pane_g2

0x6a84,	// (0x0005bade) tabs_4_passive_pane_srt

0x6498,	// (0x0005b4f2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6498,	// (0x0005b4f2) bg_passive_tab_pane_cp3_srt

0x93aa,	// (0x0005e404) heading_pane_t1_ParamLimits

0x93aa,	// (0x0005e404) heading_pane_t1

0x93c1,	// (0x0005e41b) heading_pane_t2_ParamLimits

0x93c1,	// (0x0005e41b) heading_pane_t2

0x0001,

0xf8d5,	// (0x0006492f) heading_pane_t_ParamLimits

0xf8d5,	// (0x0006492f) heading_pane_t

0x8eb9,	// (0x0005df13) bg_popup_heading_pane_g1

0x8f68,	// (0x0005dfc2) bg_popup_heading_pane_g2

0x8f72,	// (0x0005dfcc) bg_popup_heading_pane_g3

0x8f7c,	// (0x0005dfd6) bg_popup_heading_pane_g4

0x8f86,	// (0x0005dfe0) bg_popup_heading_pane_g5

0x8f90,	// (0x0005dfea) bg_popup_heading_pane_g6

0x8f98,	// (0x0005dff2) bg_popup_heading_pane_g7

0x8fa0,	// (0x0005dffa) bg_popup_heading_pane_g8

0x8faa,	// (0x0005e004) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x000648eb) bg_popup_heading_pane_g

0x86c7,	// (0x0005d721) bg_popup_sub_pane_g1

0x86d7,	// (0x0005d731) bg_popup_sub_pane_g2

0x86cf,	// (0x0005d729) bg_popup_sub_pane_g3

0x86e7,	// (0x0005d741) bg_popup_sub_pane_g4

0x86df,	// (0x0005d739) bg_popup_sub_pane_g5

0x86ef,	// (0x0005d749) bg_popup_sub_pane_g6

0x86f7,	// (0x0005d751) bg_popup_sub_pane_g7

0x8707,	// (0x0005d761) bg_popup_sub_pane_g8

0x86ff,	// (0x0005d759) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x000648c5) bg_popup_sub_pane_g

0xc224,	// (0x0006127e) bg_popup_window_pane_cp5_ParamLimits

0xc224,	// (0x0006127e) bg_popup_window_pane_cp5

0xc240,	// (0x0006129a) popup_note_window_g1_ParamLimits

0xc240,	// (0x0006129a) popup_note_window_g1

0xc24c,	// (0x000612a6) popup_note_window_t1_ParamLimits

0xc24c,	// (0x000612a6) popup_note_window_t1

0xc262,	// (0x000612bc) popup_note_window_t2_ParamLimits

0xc262,	// (0x000612bc) popup_note_window_t2

0xc278,	// (0x000612d2) popup_note_window_t3_ParamLimits

0xc278,	// (0x000612d2) popup_note_window_t3

0xc28e,	// (0x000612e8) popup_note_window_t4_ParamLimits

0xc28e,	// (0x000612e8) popup_note_window_t4

0xc2b6,	// (0x00061310) popup_note_window_t5_ParamLimits

0xc2b6,	// (0x00061310) popup_note_window_t5

0x0004,

0xf57f,	// (0x000645d9) popup_note_window_t_ParamLimits

0xf57f,	// (0x000645d9) popup_note_window_t

0xc2da,	// (0x00061334) bg_popup_window_pane_cp6_ParamLimits

0xc2da,	// (0x00061334) bg_popup_window_pane_cp6

0x8e35,	// (0x0005de8f) popup_note_image_window_g1_ParamLimits

0x8e35,	// (0x0005de8f) popup_note_image_window_g1

0x8e41,	// (0x0005de9b) popup_note_image_window_g2_ParamLimits

0x8e41,	// (0x0005de9b) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x000648b9) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x000648b9) popup_note_image_window_g

0x8e5a,	// (0x0005deb4) popup_note_image_window_t1_ParamLimits

0x8e5a,	// (0x0005deb4) popup_note_image_window_t1

0x8e73,	// (0x0005decd) popup_note_image_window_t2_ParamLimits

0x8e73,	// (0x0005decd) popup_note_image_window_t2

0x8e8c,	// (0x0005dee6) popup_note_image_window_t3_ParamLimits

0x8e8c,	// (0x0005dee6) popup_note_image_window_t3

0x0002,

0xf864,	// (0x000648be) popup_note_image_window_t_ParamLimits

0xf864,	// (0x000648be) popup_note_image_window_t

0x8cf5,	// (0x0005dd4f) bg_popup_window_pane_cp7_ParamLimits

0x8cf5,	// (0x0005dd4f) bg_popup_window_pane_cp7

0x8d25,	// (0x0005dd7f) popup_note_wait_window_g1_ParamLimits

0x8d25,	// (0x0005dd7f) popup_note_wait_window_g1

0x8d31,	// (0x0005dd8b) popup_note_wait_window_g2_ParamLimits

0x8d31,	// (0x0005dd8b) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x000648a7) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x000648a7) popup_note_wait_window_g

0x8d49,	// (0x0005dda3) popup_note_wait_window_t1_ParamLimits

0x8d49,	// (0x0005dda3) popup_note_wait_window_t1

0x8d70,	// (0x0005ddca) popup_note_wait_window_t2_ParamLimits

0x8d70,	// (0x0005ddca) popup_note_wait_window_t2

0x8d8e,	// (0x0005dde8) popup_note_wait_window_t3_ParamLimits

0x8d8e,	// (0x0005dde8) popup_note_wait_window_t3

0x8da1,	// (0x0005ddfb) popup_note_wait_window_t4_ParamLimits

0x8da1,	// (0x0005ddfb) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x000648ae) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x000648ae) popup_note_wait_window_t

0x8dc6,	// (0x0005de20) wait_bar_pane_ParamLimits

0x8dc6,	// (0x0005de20) wait_bar_pane

0xc097,	// (0x000610f1) wait_anim_pane

0xc097,	// (0x000610f1) wait_border_pane

0xc08d,	// (0x000610e7) wait_anim_pane_g1

0xc08d,	// (0x000610e7) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00064762) wait_anim_pane_g

0x8c99,	// (0x0005dcf3) wait_border_pane_g1

0x8ca4,	// (0x0005dcfe) wait_border_pane_g2

0x8cad,	// (0x0005dd07) wait_border_pane_g3

0x0002,

0xf846,	// (0x000648a0) wait_border_pane_g

0x8b03,	// (0x0005db5d) bg_popup_window_pane_cp16_ParamLimits

0x8b03,	// (0x0005db5d) bg_popup_window_pane_cp16

0x8c03,	// (0x0005dc5d) indicator_popup_pane_cp4_ParamLimits

0x8c03,	// (0x0005dc5d) indicator_popup_pane_cp4

0x8c17,	// (0x0005dc71) popup_query_data_window_t1_ParamLimits

0x8c17,	// (0x0005dc71) popup_query_data_window_t1

0x8c29,	// (0x0005dc83) popup_query_data_window_t2_ParamLimits

0x8c29,	// (0x0005dc83) popup_query_data_window_t2

0x8c42,	// (0x0005dc9c) popup_query_data_window_t3_ParamLimits

0x8c42,	// (0x0005dc9c) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00064899) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00064899) popup_query_data_window_t

0x8c5c,	// (0x0005dcb6) query_popup_data_pane_ParamLimits

0x8c5c,	// (0x0005dcb6) query_popup_data_pane

0x8c70,	// (0x0005dcca) query_popup_data_pane_cp1_ParamLimits

0x8c70,	// (0x0005dcca) query_popup_data_pane_cp1

0x8b03,	// (0x0005db5d) bg_popup_window_pane_cp10_ParamLimits

0x8b03,	// (0x0005db5d) bg_popup_window_pane_cp10

0x8b35,	// (0x0005db8f) indicator_popup_pane_ParamLimits

0x8b35,	// (0x0005db8f) indicator_popup_pane

0x8b57,	// (0x0005dbb1) popup_query_code_window_t1_ParamLimits

0x8b57,	// (0x0005dbb1) popup_query_code_window_t1

0x8b71,	// (0x0005dbcb) popup_query_code_window_t2_ParamLimits

0x8b71,	// (0x0005dbcb) popup_query_code_window_t2

0x8bba,	// (0x0005dc14) popup_query_code_window_t3_ParamLimits

0x8bba,	// (0x0005dc14) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00064892) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00064892) popup_query_code_window_t

0x8be9,	// (0x0005dc43) query_popup_pane_ParamLimits

0x8be9,	// (0x0005dc43) query_popup_pane

0xc2da,	// (0x00061334) bg_popup_window_pane_cp15_ParamLimits

0xc2da,	// (0x00061334) bg_popup_window_pane_cp15

0xc2fa,	// (0x00061354) indicator_popup_pane_cp1_ParamLimits

0xc2fa,	// (0x00061354) indicator_popup_pane_cp1

0xc30d,	// (0x00061367) indicator_popup_pane_cp2_ParamLimits

0xc30d,	// (0x00061367) indicator_popup_pane_cp2

0xc328,	// (0x00061382) popup_query_data_code_window_g1_ParamLimits

0xc328,	// (0x00061382) popup_query_data_code_window_g1

0xc33b,	// (0x00061395) popup_query_data_code_window_t1_ParamLimits

0xc33b,	// (0x00061395) popup_query_data_code_window_t1

0xc34d,	// (0x000613a7) popup_query_data_code_window_t2_ParamLimits

0xc34d,	// (0x000613a7) popup_query_data_code_window_t2

0xc35f,	// (0x000613b9) popup_query_data_code_window_t3_ParamLimits

0xc35f,	// (0x000613b9) popup_query_data_code_window_t3

0xc375,	// (0x000613cf) popup_query_data_code_window_t4_ParamLimits

0xc375,	// (0x000613cf) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000645e4) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000645e4) popup_query_data_code_window_t

0x6627,	// (0x0005b681) list_single_midp_graphic_pane_g3

0xc38f,	// (0x000613e9) query_popup_data_pane_cp2_ParamLimits

0xc3a2,	// (0x000613fc) query_popup_pane_cp2_ParamLimits

0xc3a2,	// (0x000613fc) query_popup_pane_cp2

0xc097,	// (0x000610f1) bg_popup_window_pane_cp11

0x8afb,	// (0x0005db55) heading_pane_cp5

0xc438,	// (0x00061492) listscroll_popup_info_pane

0xc097,	// (0x000610f1) input_focus_pane_cp3

0xc3bd,	// (0x00061417) query_popup_pane_t1

0xc3cb,	// (0x00061425) list_popup_info_pane_ParamLimits

0xc3cb,	// (0x00061425) list_popup_info_pane

0xc3da,	// (0x00061434) listscroll_popup_info_pane_g1

0xc3e2,	// (0x0006143c) scroll_pane_cp7

0xc3ec,	// (0x00061446) popup_info_list_pane_t1_ParamLimits

0xc3ec,	// (0x00061446) popup_info_list_pane_t1

0xc406,	// (0x00061460) popup_info_list_pane_t2_ParamLimits

0xc406,	// (0x00061460) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000645ed) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000645ed) popup_info_list_pane_t

0xc097,	// (0x000610f1) bg_popup_window_pane_cp12

0xa067,	// (0x0005f0c1) find_popup_pane

0xc0f1,	// (0x0006114b) bg_popup_window_pane_cp3

0xc420,	// (0x0006147a) heading_pane_cp3

0xc42c,	// (0x00061486) listscroll_popup_graphic_pane

0xc097,	// (0x000610f1) bg_popup_window_pane_cp4

0x519b,	// (0x0005a1f5) heading_pane_cp4

0xc438,	// (0x00061492) listscroll_popup_colour_pane

0x51a5,	// (0x0005a1ff) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x51a5,	// (0x0005a1ff) cell_large_graphic_colour_none_popup_pane

0x51b9,	// (0x0005a213) grid_large_graphic_colour_popup_pane_ParamLimits

0x51b9,	// (0x0005a213) grid_large_graphic_colour_popup_pane

0x51e5,	// (0x0005a23f) listscroll_popup_colour_pane_g1_ParamLimits

0x51e5,	// (0x0005a23f) listscroll_popup_colour_pane_g1

0x51fc,	// (0x0005a256) listscroll_popup_colour_pane_g2_ParamLimits

0x51fc,	// (0x0005a256) listscroll_popup_colour_pane_g2

0x5213,	// (0x0005a26d) listscroll_popup_colour_pane_g3_ParamLimits

0x5213,	// (0x0005a26d) listscroll_popup_colour_pane_g3

0x5223,	// (0x0005a27d) listscroll_popup_colour_pane_g4_ParamLimits

0x5223,	// (0x0005a27d) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000645f2) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000645f2) listscroll_popup_colour_pane_g

0xc440,	// (0x0006149a) scroll_pane_cp6_ParamLimits

0xc440,	// (0x0006149a) scroll_pane_cp6

0x5237,	// (0x0005a291) cell_large_graphic_colour_popup_pane_ParamLimits

0x5237,	// (0x0005a291) cell_large_graphic_colour_popup_pane

0xc452,	// (0x000614ac) cell_large_graphic_colour_none_popup_pane_t1

0xc097,	// (0x000610f1) grid_highlight_pane_cp5

0xc461,	// (0x000614bb) cell_large_graphic_colour_popup_pane_g1

0xc469,	// (0x000614c3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000645fb) cell_large_graphic_colour_popup_pane_g

0xc471,	// (0x000614cb) cell_large_graphic_colour_popup_pane_g2_copy1

0xc47a,	// (0x000614d4) grid_highlight_pane_cp4

0xc482,	// (0x000614dc) bg_popup_window_pane_cp8_ParamLimits

0xc482,	// (0x000614dc) bg_popup_window_pane_cp8

0xc49d,	// (0x000614f7) popup_snote_single_text_window_g1_ParamLimits

0xc49d,	// (0x000614f7) popup_snote_single_text_window_g1

0xc4af,	// (0x00061509) popup_snote_single_text_window_t1_ParamLimits

0xc4af,	// (0x00061509) popup_snote_single_text_window_t1

0xc4c2,	// (0x0006151c) popup_snote_single_text_window_t2_ParamLimits

0xc4c2,	// (0x0006151c) popup_snote_single_text_window_t2

0xc4d5,	// (0x0006152f) popup_snote_single_text_window_t3_ParamLimits

0xc4d5,	// (0x0006152f) popup_snote_single_text_window_t3

0xc50e,	// (0x00061568) popup_snote_single_text_window_t4_ParamLimits

0xc50e,	// (0x00061568) popup_snote_single_text_window_t4

0xc542,	// (0x0006159c) popup_snote_single_text_window_t5_ParamLimits

0xc542,	// (0x0006159c) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00064600) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00064600) popup_snote_single_text_window_t

0xc571,	// (0x000615cb) bg_popup_window_pane_cp9_ParamLimits

0xc571,	// (0x000615cb) bg_popup_window_pane_cp9

0xc49d,	// (0x000614f7) popup_snote_single_graphic_window_g1_ParamLimits

0xc49d,	// (0x000614f7) popup_snote_single_graphic_window_g1

0xc57f,	// (0x000615d9) popup_snote_single_graphic_window_g2_ParamLimits

0xc57f,	// (0x000615d9) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0006460b) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0006460b) popup_snote_single_graphic_window_g

0xc58b,	// (0x000615e5) popup_snote_single_graphic_window_t1_ParamLimits

0xc58b,	// (0x000615e5) popup_snote_single_graphic_window_t1

0xc59e,	// (0x000615f8) popup_snote_single_graphic_window_t2_ParamLimits

0xc59e,	// (0x000615f8) popup_snote_single_graphic_window_t2

0xc5b1,	// (0x0006160b) popup_snote_single_graphic_window_t3_ParamLimits

0xc5b1,	// (0x0006160b) popup_snote_single_graphic_window_t3

0xc5ea,	// (0x00061644) popup_snote_single_graphic_window_t4_ParamLimits

0xc5ea,	// (0x00061644) popup_snote_single_graphic_window_t4

0xc61e,	// (0x00061678) popup_snote_single_graphic_window_t5_ParamLimits

0xc61e,	// (0x00061678) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00064610) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00064610) popup_snote_single_graphic_window_t

0x9fa5,	// (0x0005efff) grid_graphic_popup_pane_ParamLimits

0x9fa5,	// (0x0005efff) grid_graphic_popup_pane

0x9fd3,	// (0x0005f02d) listscroll_popup_graphic_pane_g1_ParamLimits

0x9fd3,	// (0x0005f02d) listscroll_popup_graphic_pane_g1

0x9fe7,	// (0x0005f041) listscroll_popup_graphic_pane_g2_ParamLimits

0x9fe7,	// (0x0005f041) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00064a0f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00064a0f) listscroll_popup_graphic_pane_g

0x9ffb,	// (0x0005f055) scroll_pane_cp5

0x9f4d,	// (0x0005efa7) cell_graphic_popup_pane_ParamLimits

0x9f4d,	// (0x0005efa7) cell_graphic_popup_pane

0x9f2e,	// (0x0005ef88) cell_graphic_popup_pane_g1

0x9f36,	// (0x0005ef90) cell_graphic_popup_pane_g2

0xc471,	// (0x000614cb) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00064a08) cell_graphic_popup_pane_g

0x9f3f,	// (0x0005ef99) cell_graphic_popup_pane_t2

0xc47a,	// (0x000614d4) grid_highlight_pane_cp3

0xc65f,	// (0x000616b9) list_gen_pane_ParamLimits

0xc65f,	// (0x000616b9) list_gen_pane

0xc687,	// (0x000616e1) scroll_pane

0x9cf9,	// (0x0005ed53) bg_list_pane_g1_ParamLimits

0x9cf9,	// (0x0005ed53) bg_list_pane_g1

0x9ea3,	// (0x0005eefd) bg_list_pane_g2_ParamLimits

0x9ea3,	// (0x0005eefd) bg_list_pane_g2

0x9eb8,	// (0x0005ef12) bg_list_pane_g3_ParamLimits

0x9eb8,	// (0x0005ef12) bg_list_pane_g3

0x9ecc,	// (0x0005ef26) bg_list_pane_g4_ParamLimits

0x9ecc,	// (0x0005ef26) bg_list_pane_g4

0x9ee0,	// (0x0005ef3a) bg_list_pane_g5_ParamLimits

0x9ee0,	// (0x0005ef3a) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x000649fd) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x000649fd) bg_list_pane_g

0x6a0e,	// (0x0005ba68) list_double2_graphic_large_graphic_pane_ParamLimits

0x6a0e,	// (0x0005ba68) list_double2_graphic_large_graphic_pane

0x6a0e,	// (0x0005ba68) list_double2_graphic_pane_ParamLimits

0x6a0e,	// (0x0005ba68) list_double2_graphic_pane

0x6a0e,	// (0x0005ba68) list_double2_large_graphic_pane_ParamLimits

0x6a0e,	// (0x0005ba68) list_double2_large_graphic_pane

0x6a0e,	// (0x0005ba68) list_double2_pane_ParamLimits

0x6a0e,	// (0x0005ba68) list_double2_pane

0x6a0e,	// (0x0005ba68) list_double_graphic_heading_pane_ParamLimits

0x6a0e,	// (0x0005ba68) list_double_graphic_heading_pane

0x6a0e,	// (0x0005ba68) list_double_graphic_pane_ParamLimits

0x6a0e,	// (0x0005ba68) list_double_graphic_pane

0x6a0e,	// (0x0005ba68) list_double_heading_pane_ParamLimits

0x6a0e,	// (0x0005ba68) list_double_heading_pane

0x6a0e,	// (0x0005ba68) list_double_large_graphic_pane_ParamLimits

0x6a0e,	// (0x0005ba68) list_double_large_graphic_pane

0x6a0e,	// (0x0005ba68) list_double_number_pane_ParamLimits

0x6a0e,	// (0x0005ba68) list_double_number_pane

0x6a0e,	// (0x0005ba68) list_double_pane_ParamLimits

0x6a0e,	// (0x0005ba68) list_double_pane

0x6a0e,	// (0x0005ba68) list_double_time_pane_ParamLimits

0x6a0e,	// (0x0005ba68) list_double_time_pane

0x6a0e,	// (0x0005ba68) list_setting_number_pane_ParamLimits

0x6a0e,	// (0x0005ba68) list_setting_number_pane

0x6a0e,	// (0x0005ba68) list_setting_pane_ParamLimits

0x6a0e,	// (0x0005ba68) list_setting_pane

0x9cb5,	// (0x0005ed0f) list_single_2graphic_pane_ParamLimits

0x9cb5,	// (0x0005ed0f) list_single_2graphic_pane

0x9cb5,	// (0x0005ed0f) list_single_graphic_heading_pane_ParamLimits

0x9cb5,	// (0x0005ed0f) list_single_graphic_heading_pane

0x9cb5,	// (0x0005ed0f) list_single_graphic_pane_ParamLimits

0x9cb5,	// (0x0005ed0f) list_single_graphic_pane

0x9cb5,	// (0x0005ed0f) list_single_heading_pane_ParamLimits

0x9cb5,	// (0x0005ed0f) list_single_heading_pane

0x6a36,	// (0x0005ba90) list_single_large_graphic_pane_ParamLimits

0x6a36,	// (0x0005ba90) list_single_large_graphic_pane

0x9cb5,	// (0x0005ed0f) list_single_number_heading_pane_ParamLimits

0x9cb5,	// (0x0005ed0f) list_single_number_heading_pane

0x9cb5,	// (0x0005ed0f) list_single_number_pane_ParamLimits

0x9cb5,	// (0x0005ed0f) list_single_number_pane

0x9cb5,	// (0x0005ed0f) list_single_pane_ParamLimits

0x9cb5,	// (0x0005ed0f) list_single_pane

0xc097,	// (0x000610f1) list_highlight_pane_cp1

0x1a78,	// (0x00056ad2) list_single_pane_g1_ParamLimits

0x1a78,	// (0x00056ad2) list_single_pane_g1

0x5272,	// (0x0005a2cc) list_single_pane_g2_ParamLimits

0x5272,	// (0x0005a2cc) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0006462c) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0006462c) list_single_pane_g

0x69f8,	// (0x0005ba52) list_single_pane_t1_ParamLimits

0x69f8,	// (0x0005ba52) list_single_pane_t1

0x1a78,	// (0x00056ad2) list_single_number_pane_g1_ParamLimits

0x1a78,	// (0x00056ad2) list_single_number_pane_g1

0x5272,	// (0x0005a2cc) list_single_number_pane_g2_ParamLimits

0x5272,	// (0x0005a2cc) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0006462c) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0006462c) list_single_number_pane_g

0x6922,	// (0x0005b97c) list_single_number_pane_t1_ParamLimits

0x6922,	// (0x0005b97c) list_single_number_pane_t1

0x6938,	// (0x0005b992) list_single_number_pane_t2_ParamLimits

0x6938,	// (0x0005b992) list_single_number_pane_t2

0x0001,

0xf964,	// (0x000649be) list_single_number_pane_t_ParamLimits

0xf964,	// (0x000649be) list_single_number_pane_t

0x5266,	// (0x0005a2c0) list_single_graphic_pane_g1_ParamLimits

0x5266,	// (0x0005a2c0) list_single_graphic_pane_g1

0x1a78,	// (0x00056ad2) list_single_graphic_pane_g2_ParamLimits

0x1a78,	// (0x00056ad2) list_single_graphic_pane_g2

0x5272,	// (0x0005a2cc) list_single_graphic_pane_g3_ParamLimits

0x5272,	// (0x0005a2cc) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0006461b) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0006461b) list_single_graphic_pane_g

0x527e,	// (0x0005a2d8) list_single_graphic_pane_t1_ParamLimits

0x527e,	// (0x0005a2d8) list_single_graphic_pane_t1

0x5294,	// (0x0005a2ee) list_single_heading_pane_g1_ParamLimits

0x5294,	// (0x0005a2ee) list_single_heading_pane_g1

0x5272,	// (0x0005a2cc) list_single_heading_pane_g2_ParamLimits

0x5272,	// (0x0005a2cc) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00064622) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00064622) list_single_heading_pane_g

0x52a7,	// (0x0005a301) list_single_heading_pane_t1_ParamLimits

0x52a7,	// (0x0005a301) list_single_heading_pane_t1

0x52bd,	// (0x0005a317) list_single_heading_pane_t2_ParamLimits

0x52bd,	// (0x0005a317) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00064627) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00064627) list_single_heading_pane_t

0x1a78,	// (0x00056ad2) list_single_number_heading_pane_g1_ParamLimits

0x1a78,	// (0x00056ad2) list_single_number_heading_pane_g1

0x5272,	// (0x0005a2cc) list_single_number_heading_pane_g2_ParamLimits

0x5272,	// (0x0005a2cc) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0006462c) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0006462c) list_single_number_heading_pane_g

0x52cf,	// (0x0005a329) list_single_number_heading_pane_t1_ParamLimits

0x52cf,	// (0x0005a329) list_single_number_heading_pane_t1

0x52e5,	// (0x0005a33f) list_single_number_heading_pane_t2_ParamLimits

0x52e5,	// (0x0005a33f) list_single_number_heading_pane_t2

0x52f7,	// (0x0005a351) list_single_number_heading_pane_t3_ParamLimits

0x52f7,	// (0x0005a351) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00064631) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00064631) list_single_number_heading_pane_t

0x5309,	// (0x0005a363) list_single_graphic_heading_pane_g1_ParamLimits

0x5309,	// (0x0005a363) list_single_graphic_heading_pane_g1

0x5321,	// (0x0005a37b) list_single_graphic_heading_pane_g4_ParamLimits

0x5321,	// (0x0005a37b) list_single_graphic_heading_pane_g4

0x5272,	// (0x0005a2cc) list_single_graphic_heading_pane_g5_ParamLimits

0x5272,	// (0x0005a2cc) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00064638) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00064638) list_single_graphic_heading_pane_g

0x52cf,	// (0x0005a329) list_single_graphic_heading_pane_t1_ParamLimits

0x52cf,	// (0x0005a329) list_single_graphic_heading_pane_t1

0x5332,	// (0x0005a38c) list_single_graphic_heading_pane_t2_ParamLimits

0x5332,	// (0x0005a38c) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0006463f) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0006463f) list_single_graphic_heading_pane_t

0x534a,	// (0x0005a3a4) list_single_large_graphic_pane_g1_ParamLimits

0x534a,	// (0x0005a3a4) list_single_large_graphic_pane_g1

0x5356,	// (0x0005a3b0) list_single_large_graphic_pane_g2_ParamLimits

0x5356,	// (0x0005a3b0) list_single_large_graphic_pane_g2

0x5362,	// (0x0005a3bc) list_single_large_graphic_pane_g3_ParamLimits

0x5362,	// (0x0005a3bc) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00064644) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00064644) list_single_large_graphic_pane_g

0x8ca4,	// (0x0005dcfe) wait_border_pane_g2_copy1

0x536e,	// (0x0005a3c8) list_single_large_graphic_pane_g4_cp2

0x5376,	// (0x0005a3d0) list_single_large_graphic_pane_t1_ParamLimits

0x5376,	// (0x0005a3d0) list_single_large_graphic_pane_t1

0x538c,	// (0x0005a3e6) list_double_pane_g1_ParamLimits

0x538c,	// (0x0005a3e6) list_double_pane_g1

0x5398,	// (0x0005a3f2) list_double_pane_g2_ParamLimits

0x5398,	// (0x0005a3f2) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0006464b) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0006464b) list_double_pane_g

0x53a4,	// (0x0005a3fe) list_double_pane_t1_ParamLimits

0x53a4,	// (0x0005a3fe) list_double_pane_t1

0x53ba,	// (0x0005a414) list_double_pane_t2_ParamLimits

0x53ba,	// (0x0005a414) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00064650) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00064650) list_double_pane_t

0x53cc,	// (0x0005a426) list_double2_pane_g1_ParamLimits

0x53cc,	// (0x0005a426) list_double2_pane_g1

0x53dd,	// (0x0005a437) list_double2_pane_g2_ParamLimits

0x53dd,	// (0x0005a437) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00064655) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00064655) list_double2_pane_g

0x53e9,	// (0x0005a443) list_double2_pane_t1_ParamLimits

0x53e9,	// (0x0005a443) list_double2_pane_t1

0x53ff,	// (0x0005a459) list_double2_pane_t2_ParamLimits

0x53ff,	// (0x0005a459) list_double2_pane_t2

0x0001,

0xf600,	// (0x0006465a) list_double2_pane_t_ParamLimits

0xf600,	// (0x0006465a) list_double2_pane_t

0x538c,	// (0x0005a3e6) list_double_number_pane_g1_ParamLimits

0x538c,	// (0x0005a3e6) list_double_number_pane_g1

0x5398,	// (0x0005a3f2) list_double_number_pane_g2_ParamLimits

0x5398,	// (0x0005a3f2) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0006464b) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0006464b) list_double_number_pane_g

0x5411,	// (0x0005a46b) list_double_number_pane_t1_ParamLimits

0x5411,	// (0x0005a46b) list_double_number_pane_t1

0x5423,	// (0x0005a47d) list_double_number_pane_t2_ParamLimits

0x5423,	// (0x0005a47d) list_double_number_pane_t2

0x5439,	// (0x0005a493) list_double_number_pane_t3_ParamLimits

0x5439,	// (0x0005a493) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0006465f) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0006465f) list_double_number_pane_t

0x544b,	// (0x0005a4a5) list_double_graphic_pane_g1_ParamLimits

0x544b,	// (0x0005a4a5) list_double_graphic_pane_g1

0x5457,	// (0x0005a4b1) list_double_graphic_pane_g2_ParamLimits

0x5457,	// (0x0005a4b1) list_double_graphic_pane_g2

0x5466,	// (0x0005a4c0) list_double_graphic_pane_g3_ParamLimits

0x5466,	// (0x0005a4c0) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00064666) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00064666) list_double_graphic_pane_g

0x547e,	// (0x0005a4d8) list_double_graphic_pane_t1_ParamLimits

0x547e,	// (0x0005a4d8) list_double_graphic_pane_t1

0x5494,	// (0x0005a4ee) list_double_graphic_pane_t2_ParamLimits

0x5494,	// (0x0005a4ee) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0006466f) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0006466f) list_double_graphic_pane_t

0x3164,	// (0x000581be) list_double2_graphic_pane_g1_ParamLimits

0x3164,	// (0x000581be) list_double2_graphic_pane_g1

0x54a6,	// (0x0005a500) list_double2_graphic_pane_g2_ParamLimits

0x54a6,	// (0x0005a500) list_double2_graphic_pane_g2

0x54b2,	// (0x0005a50c) list_double2_graphic_pane_g3_ParamLimits

0x54b2,	// (0x0005a50c) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00064674) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00064674) list_double2_graphic_pane_g

0x54be,	// (0x0005a518) list_double2_graphic_pane_t1_ParamLimits

0x54be,	// (0x0005a518) list_double2_graphic_pane_t1

0x54d4,	// (0x0005a52e) list_double2_graphic_pane_t2_ParamLimits

0x54d4,	// (0x0005a52e) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0006467b) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0006467b) list_double2_graphic_pane_t

0x54e6,	// (0x0005a540) list_double_large_graphic_pane_g1_ParamLimits

0x54e6,	// (0x0005a540) list_double_large_graphic_pane_g1

0x5511,	// (0x0005a56b) list_double_large_graphic_pane_g2_ParamLimits

0x5511,	// (0x0005a56b) list_double_large_graphic_pane_g2

0x5398,	// (0x0005a3f2) list_double_large_graphic_pane_g3_ParamLimits

0x5398,	// (0x0005a3f2) list_double_large_graphic_pane_g3

0x5527,	// (0x0005a581) list_double_large_graphic_pane_g4_ParamLimits

0x5527,	// (0x0005a581) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00064680) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00064680) list_double_large_graphic_pane_g

0x553a,	// (0x0005a594) list_double_large_graphic_pane_t1_ParamLimits

0x553a,	// (0x0005a594) list_double_large_graphic_pane_t1

0x5553,	// (0x0005a5ad) list_double_large_graphic_pane_t2_ParamLimits

0x5553,	// (0x0005a5ad) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0006468b) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0006468b) list_double_large_graphic_pane_t

0x5565,	// (0x0005a5bf) list_double2_large_graphic_pane_g1_ParamLimits

0x5565,	// (0x0005a5bf) list_double2_large_graphic_pane_g1

0x5571,	// (0x0005a5cb) list_double2_large_graphic_pane_g2_ParamLimits

0x5571,	// (0x0005a5cb) list_double2_large_graphic_pane_g2

0x54b2,	// (0x0005a50c) list_double2_large_graphic_pane_g3_ParamLimits

0x54b2,	// (0x0005a50c) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00064690) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00064690) list_double2_large_graphic_pane_g

0x5582,	// (0x0005a5dc) list_double2_large_graphic_pane_t1_ParamLimits

0x5582,	// (0x0005a5dc) list_double2_large_graphic_pane_t1

0x5598,	// (0x0005a5f2) list_double2_large_graphic_pane_t2_ParamLimits

0x5598,	// (0x0005a5f2) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00064697) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00064697) list_double2_large_graphic_pane_t

0x55aa,	// (0x0005a604) list_double_heading_pane_g1_ParamLimits

0x55aa,	// (0x0005a604) list_double_heading_pane_g1

0x55bb,	// (0x0005a615) list_double_heading_pane_g2_ParamLimits

0x55bb,	// (0x0005a615) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0006469c) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0006469c) list_double_heading_pane_g

0x55c7,	// (0x0005a621) list_double_heading_pane_t1_ParamLimits

0x55c7,	// (0x0005a621) list_double_heading_pane_t1

0x55dd,	// (0x0005a637) list_double_heading_pane_t2_ParamLimits

0x55dd,	// (0x0005a637) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x000646a1) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x000646a1) list_double_heading_pane_t

0x544b,	// (0x0005a4a5) list_double_graphic_heading_pane_g1_ParamLimits

0x544b,	// (0x0005a4a5) list_double_graphic_heading_pane_g1

0x55aa,	// (0x0005a604) list_double_graphic_heading_pane_g2_ParamLimits

0x55aa,	// (0x0005a604) list_double_graphic_heading_pane_g2

0x55bb,	// (0x0005a615) list_double_graphic_heading_pane_g3_ParamLimits

0x55bb,	// (0x0005a615) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x000646a6) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x000646a6) list_double_graphic_heading_pane_g

0x55ef,	// (0x0005a649) list_double_graphic_heading_pane_t1_ParamLimits

0x55ef,	// (0x0005a649) list_double_graphic_heading_pane_t1

0x5605,	// (0x0005a65f) list_double_graphic_heading_pane_t2_ParamLimits

0x5605,	// (0x0005a65f) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x000646ad) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x000646ad) list_double_graphic_heading_pane_t

0x5617,	// (0x0005a671) list_double_time_pane_g1_ParamLimits

0x5617,	// (0x0005a671) list_double_time_pane_g1

0x5628,	// (0x0005a682) list_double_time_pane_g2_ParamLimits

0x5628,	// (0x0005a682) list_double_time_pane_g2

0x0001,

0xf658,	// (0x000646b2) list_double_time_pane_g_ParamLimits

0xf658,	// (0x000646b2) list_double_time_pane_g

0x5634,	// (0x0005a68e) list_double_time_pane_t1_ParamLimits

0x5634,	// (0x0005a68e) list_double_time_pane_t1

0x564a,	// (0x0005a6a4) list_double_time_pane_t2_ParamLimits

0x564a,	// (0x0005a6a4) list_double_time_pane_t2

0x565c,	// (0x0005a6b6) list_double_time_pane_t3_ParamLimits

0x565c,	// (0x0005a6b6) list_double_time_pane_t3

0x566e,	// (0x0005a6c8) list_double_time_pane_t4_ParamLimits

0x566e,	// (0x0005a6c8) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x000646b7) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x000646b7) list_double_time_pane_t

0x5680,	// (0x0005a6da) list_setting_pane_g1_ParamLimits

0x5680,	// (0x0005a6da) list_setting_pane_g1

0x568c,	// (0x0005a6e6) list_setting_pane_g2_ParamLimits

0x568c,	// (0x0005a6e6) list_setting_pane_g2

0x0001,

0xf666,	// (0x000646c0) list_setting_pane_g_ParamLimits

0xf666,	// (0x000646c0) list_setting_pane_g

0x5698,	// (0x0005a6f2) list_setting_pane_t1_ParamLimits

0x5698,	// (0x0005a6f2) list_setting_pane_t1

0x56b2,	// (0x0005a70c) list_setting_pane_t2_ParamLimits

0x56b2,	// (0x0005a70c) list_setting_pane_t2

0x0002,

0xf66b,	// (0x000646c5) list_setting_pane_t_ParamLimits

0xf66b,	// (0x000646c5) list_setting_pane_t

0x56f1,	// (0x0005a74b) set_value_pane_cp_ParamLimits

0x56f1,	// (0x0005a74b) set_value_pane_cp

0x56ff,	// (0x0005a759) list_setting_number_pane_g1_ParamLimits

0x56ff,	// (0x0005a759) list_setting_number_pane_g1

0x570b,	// (0x0005a765) list_setting_number_pane_g2_ParamLimits

0x570b,	// (0x0005a765) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x000646cc) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x000646cc) list_setting_number_pane_g

0x5717,	// (0x0005a771) list_setting_number_pane_t1_ParamLimits

0x5717,	// (0x0005a771) list_setting_number_pane_t1

0x5730,	// (0x0005a78a) list_setting_number_pane_t2_ParamLimits

0x5730,	// (0x0005a78a) list_setting_number_pane_t2

0x574a,	// (0x0005a7a4) list_setting_number_pane_t3_ParamLimits

0x574a,	// (0x0005a7a4) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x000646d1) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x000646d1) list_setting_number_pane_t

0x56f1,	// (0x0005a74b) set_value_pane_ParamLimits

0x56f1,	// (0x0005a74b) set_value_pane

0xec6f,	// (0x00063cc9) bg_set_opt_pane_ParamLimits

0xec6f,	// (0x00063cc9) bg_set_opt_pane

0x3170,	// (0x000581ca) set_value_pane_t1

0xec90,	// (0x00063cea) slider_set_pane_cp3

0xec99,	// (0x00063cf3) volume_small_pane_cp

0xeca2,	// (0x00063cfc) list_form_gen_pane

0xecab,	// (0x00063d05) scroll_pane_cp8

0x578d,	// (0x0005a7e7) form_field_data_pane_ParamLimits

0x578d,	// (0x0005a7e7) form_field_data_pane

0x57ad,	// (0x0005a807) form_field_data_wide_pane_ParamLimits

0x57ad,	// (0x0005a807) form_field_data_wide_pane

0x57d4,	// (0x0005a82e) form_field_popup_pane_ParamLimits

0x57d4,	// (0x0005a82e) form_field_popup_pane

0x318e,	// (0x000581e8) form_field_popup_wide_pane_ParamLimits

0x318e,	// (0x000581e8) form_field_popup_wide_pane

0x31af,	// (0x00058209) form_field_slider_pane_ParamLimits

0x31af,	// (0x00058209) form_field_slider_pane

0x31c2,	// (0x0005821c) form_field_slider_wide_pane_ParamLimits

0x31c2,	// (0x0005821c) form_field_slider_wide_pane

0xecbc,	// (0x00063d16) data_form_pane

0x5800,	// (0x0005a85a) form_field_data_pane_t1

0xecc8,	// (0x00063d22) input_focus_pane

0x31d5,	// (0x0005822f) data_form_wide_pane

0x31f2,	// (0x0005824c) form_field_data_wide_pane_t1

0xc48f,	// (0x000614e9) input_focus_pane_cp6

0x581a,	// (0x0005a874) form_field_popup_pane_t1

0xecc8,	// (0x00063d22) input_focus_pane_cp7

0xecf6,	// (0x00063d50) list_form_pane

0x321c,	// (0x00058276) form_field_popup_wide_pane_t1

0xecc8,	// (0x00063d22) input_focus_pane_cp8

0xed02,	// (0x00063d5c) list_form_wide_pane

0x583c,	// (0x0005a896) form_field_slider_pane_t1_ParamLimits

0x583c,	// (0x0005a896) form_field_slider_pane_t1

0x5854,	// (0x0005a8ae) form_field_slider_pane_t2_ParamLimits

0x5854,	// (0x0005a8ae) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x000646e1) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x000646e1) form_field_slider_pane_t

0xc224,	// (0x0006127e) input_focus_pane_cp9_ParamLimits

0xc224,	// (0x0006127e) input_focus_pane_cp9

0x5869,	// (0x0005a8c3) slider_cont_pane_ParamLimits

0x5869,	// (0x0005a8c3) slider_cont_pane

0xed11,	// (0x00063d6b) form_field_slider_wide_pane_t1_ParamLimits

0xed11,	// (0x00063d6b) form_field_slider_wide_pane_t1

0x3231,	// (0x0005828b) form_field_slider_wide_pane_t2_ParamLimits

0x3231,	// (0x0005828b) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x000646e6) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x000646e6) form_field_slider_wide_pane_t

0xc224,	// (0x0006127e) input_focus_pane_cp10_ParamLimits

0xc224,	// (0x0006127e) input_focus_pane_cp10

0x587d,	// (0x0005a8d7) slider_cont_pane_cp1_ParamLimits

0x587d,	// (0x0005a8d7) slider_cont_pane_cp1

0x5891,	// (0x0005a8eb) slider_form_pane_cp

0xed23,	// (0x00063d7d) input_focus_pane_g1

0xed2b,	// (0x00063d85) input_focus_pane_g2

0xed33,	// (0x00063d8d) input_focus_pane_g3

0xed3b,	// (0x00063d95) input_focus_pane_g4

0xed43,	// (0x00063d9d) input_focus_pane_g5

0xed4b,	// (0x00063da5) input_focus_pane_g6

0xed53,	// (0x00063dad) input_focus_pane_g7

0xed5b,	// (0x00063db5) input_focus_pane_g8

0xed63,	// (0x00063dbd) input_focus_pane_g9

0xc08d,	// (0x000610e7) input_focus_pane_g10

0x0009,

0xf691,	// (0x000646eb) input_focus_pane_g

0x8cad,	// (0x0005dd07) wait_border_pane_g3_copy1

0x5899,	// (0x0005a8f3) data_form_pane_t1

0xc08d,	// (0x000610e7) wait_anim_pane_g1_copy1

0x69c2,	// (0x0005ba1c) data_form_wide_pane_t1

0x3243,	// (0x0005829d) list_form_graphic_pane_cp_ParamLimits

0x3243,	// (0x0005829d) list_form_graphic_pane_cp

0x9c0c,	// (0x0005ec66) slider_form_pane_g1

0x9c15,	// (0x0005ec6f) slider_form_pane_g2

0x0006,

0xf994,	// (0x000649ee) slider_form_pane_g

0x3243,	// (0x0005829d) list_form_graphic_pane_ParamLimits

0x3243,	// (0x0005829d) list_form_graphic_pane

0x3255,	// (0x000582af) list_form_graphic_pane_g1

0x325d,	// (0x000582b7) list_form_graphic_pane_t1_ParamLimits

0x325d,	// (0x000582b7) list_form_graphic_pane_t1

0xc0f1,	// (0x0006114b) list_highlight_pane_cp5_ParamLimits

0xc0f1,	// (0x0006114b) list_highlight_pane_cp5

0x58b8,	// (0x0005a912) find_pane_g1

0xed6b,	// (0x00063dc5) input_find_pane

0x58c1,	// (0x0005a91b) input_find_pane_g1_ParamLimits

0x58c1,	// (0x0005a91b) input_find_pane_g1

0x58cd,	// (0x0005a927) input_find_pane_t1_ParamLimits

0x58cd,	// (0x0005a927) input_find_pane_t1

0x58e2,	// (0x0005a93c) input_find_pane_t2_ParamLimits

0x58e2,	// (0x0005a93c) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00064700) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00064700) input_find_pane_t

0xed74,	// (0x00063dce) input_focus_pane_cp5_ParamLimits

0xed74,	// (0x00063dce) input_focus_pane_cp5

0xed82,	// (0x00063ddc) bg_popup_window_pane_cp2_ParamLimits

0xed82,	// (0x00063ddc) bg_popup_window_pane_cp2

0xed8f,	// (0x00063de9) listscroll_menu_pane_ParamLimits

0xed8f,	// (0x00063de9) listscroll_menu_pane

0x5903,	// (0x0005a95d) popup_submenu_window_ParamLimits

0x5903,	// (0x0005a95d) popup_submenu_window

0xed9b,	// (0x00063df5) find_popup_pane_g1

0xeda3,	// (0x00063dfd) input_popup_find_pane_cp

0xed74,	// (0x00063dce) input_focus_pane_cp4_ParamLimits

0xed74,	// (0x00063dce) input_focus_pane_cp4

0xedad,	// (0x00063e07) input_popup_find_pane_t1_ParamLimits

0xedad,	// (0x00063e07) input_popup_find_pane_t1

0xc097,	// (0x000610f1) bg_popup_sub_pane_cp

0xeddb,	// (0x00063e35) listscroll_popup_sub_pane

0xede3,	// (0x00063e3d) list_submenu_pane_ParamLimits

0xede3,	// (0x00063e3d) list_submenu_pane

0xedf4,	// (0x00063e4e) scroll_pane_cp4

0xedfc,	// (0x00063e56) list_single_popup_submenu_pane_ParamLimits

0xedfc,	// (0x00063e56) list_single_popup_submenu_pane

0xee11,	// (0x00063e6b) list_single_popup_submenu_pane_g1

0xee19,	// (0x00063e73) list_single_popup_submenu_pane_t1_ParamLimits

0xee19,	// (0x00063e73) list_single_popup_submenu_pane_t1

0xc0f1,	// (0x0006114b) bg_active_tab_pane_cp1_ParamLimits

0xc0f1,	// (0x0006114b) bg_active_tab_pane_cp1

0x5941,	// (0x0005a99b) tabs_2_active_pane_g1

0x5949,	// (0x0005a9a3) tabs_2_active_pane_t1

0xc0f1,	// (0x0006114b) bg_passive_tab_pane_cp1_ParamLimits

0xc0f1,	// (0x0006114b) bg_passive_tab_pane_cp1

0x5941,	// (0x0005a99b) tabs_2_passive_pane_g1

0x5949,	// (0x0005a9a3) tabs_2_passive_pane_t1

0x16f1,	// (0x0005674b) bg_active_tab_pane_cp4

0x595b,	// (0x0005a9b5) tabs_2_long_active_pane_t1

0x596e,	// (0x0005a9c8) bg_passive_tab_pane_cp4

0x662f,	// (0x0005b689) list_single_midp_graphic_pane_g4_ParamLimits

0x16f1,	// (0x0005674b) bg_active_tab_pane_cp5

0x597a,	// (0x0005a9d4) tabs_3_long_active_pane_t1

0x596e,	// (0x0005a9c8) bg_passive_tab_pane_cp5

0x662f,	// (0x0005b689) list_single_midp_graphic_pane_g4

0xc0f1,	// (0x0006114b) bg_popup_window_pane_cp13_ParamLimits

0xc0f1,	// (0x0006114b) bg_popup_window_pane_cp13

0xee37,	// (0x00063e91) listscroll_popup_fast_pane_ParamLimits

0xee37,	// (0x00063e91) listscroll_popup_fast_pane

0xee46,	// (0x00063ea0) grid_popup_fast_pane_ParamLimits

0xee46,	// (0x00063ea0) grid_popup_fast_pane

0xee58,	// (0x00063eb2) scroll_pane_cp9_ParamLimits

0xee58,	// (0x00063eb2) scroll_pane_cp9

0xb71a,	// (0x00060774) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xb71a,	// (0x00060774) list_single_graphic_hl_pane_t1_cp2

0xee7c,	// (0x00063ed6) input_focus_pane_cp20_ParamLimits

0xee7c,	// (0x00063ed6) input_focus_pane_cp20

0xee8a,	// (0x00063ee4) query_popup_data_pane_t1_ParamLimits

0xee8a,	// (0x00063ee4) query_popup_data_pane_t1

0xee9d,	// (0x00063ef7) query_popup_data_pane_t2_ParamLimits

0xee9d,	// (0x00063ef7) query_popup_data_pane_t2

0xeee3,	// (0x00063f3d) query_popup_data_pane_t3_ParamLimits

0xeee3,	// (0x00063f3d) query_popup_data_pane_t3

0xef24,	// (0x00063f7e) query_popup_data_pane_t4_ParamLimits

0xef24,	// (0x00063f7e) query_popup_data_pane_t4

0xef60,	// (0x00063fba) query_popup_data_pane_t5_ParamLimits

0xef60,	// (0x00063fba) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00064705) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00064705) query_popup_data_pane_t

0xed23,	// (0x00063d7d) bg_set_opt_pane_g1

0xed2b,	// (0x00063d85) bg_set_opt_pane_g2

0xed33,	// (0x00063d8d) bg_set_opt_pane_g3

0xed3b,	// (0x00063d95) bg_set_opt_pane_g4

0xed43,	// (0x00063d9d) bg_set_opt_pane_g5

0xed4b,	// (0x00063da5) bg_set_opt_pane_g6

0xed53,	// (0x00063dad) bg_set_opt_pane_g7

0xed5b,	// (0x00063db5) bg_set_opt_pane_g8

0xed63,	// (0x00063dbd) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00064710) bg_set_opt_pane_g

0x5e7a,	// (0x0005aed4) control_top_pane_stacon_ParamLimits

0x5e7a,	// (0x0005aed4) control_top_pane_stacon

0x5ecd,	// (0x0005af27) signal_pane_stacon_ParamLimits

0x5ecd,	// (0x0005af27) signal_pane_stacon

0xf377,	// (0x000643d1) stacon_top_pane_g1_ParamLimits

0xf377,	// (0x000643d1) stacon_top_pane_g1

0x5ef2,	// (0x0005af4c) title_pane_stacon_ParamLimits

0x5ef2,	// (0x0005af4c) title_pane_stacon

0x5f1c,	// (0x0005af76) uni_indicator_pane_stacon_ParamLimits

0x5f1c,	// (0x0005af76) uni_indicator_pane_stacon

0x5f34,	// (0x0005af8e) battery_pane_stacon_ParamLimits

0x5f34,	// (0x0005af8e) battery_pane_stacon

0x5f78,	// (0x0005afd2) control_bottom_pane_stacon_ParamLimits

0x5f78,	// (0x0005afd2) control_bottom_pane_stacon

0x5f9b,	// (0x0005aff5) navi_pane_stacon_ParamLimits

0x5f9b,	// (0x0005aff5) navi_pane_stacon

0xf399,	// (0x000643f3) stacon_bottom_pane_g1_ParamLimits

0xf399,	// (0x000643f3) stacon_bottom_pane_g1

0x598c,	// (0x0005a9e6) aid_levels_signal_lsc_ParamLimits

0x598c,	// (0x0005a9e6) aid_levels_signal_lsc

0x59a3,	// (0x0005a9fd) signal_pane_stacon_g1_ParamLimits

0x59a3,	// (0x0005a9fd) signal_pane_stacon_g1

0x59b7,	// (0x0005aa11) signal_pane_stacon_g2_ParamLimits

0x59b7,	// (0x0005aa11) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00064723) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00064723) signal_pane_stacon_g

0x59ec,	// (0x0005aa46) title_pane_stacon_t1_ParamLimits

0x59ec,	// (0x0005aa46) title_pane_stacon_t1

0xefa4,	// (0x00063ffe) uni_indicator_pane_stacon_g1

0xefae,	// (0x00064008) uni_indicator_pane_stacon_g2

0xefb8,	// (0x00064012) uni_indicator_pane_stacon_g3

0xefc2,	// (0x0006401c) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0006472f) uni_indicator_pane_stacon_g

0x5a11,	// (0x0005aa6b) control_top_pane_stacon_g1

0x5a19,	// (0x0005aa73) control_top_pane_stacon_t1_ParamLimits

0x5a19,	// (0x0005aa73) control_top_pane_stacon_t1

0x5a50,	// (0x0005aaaa) aid_levels_battery_lsc_ParamLimits

0x5a50,	// (0x0005aaaa) aid_levels_battery_lsc

0x5a68,	// (0x0005aac2) battery_pane_stacon_g1_ParamLimits

0x5a68,	// (0x0005aac2) battery_pane_stacon_g1

0x5a7b,	// (0x0005aad5) battery_pane_stacon_g2_ParamLimits

0x5a7b,	// (0x0005aad5) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00064738) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00064738) battery_pane_stacon_g

0x5ab9,	// (0x0005ab13) navi_icon_pane_stacon

0x5acd,	// (0x0005ab27) navi_navi_pane_stacon

0x5ab9,	// (0x0005ab13) navi_text_pane_stacon

0x5a11,	// (0x0005aa6b) control_bottom_pane_stacon_g1

0x5ae3,	// (0x0005ab3d) control_bottom_pane_stacon_t1_ParamLimits

0x5ae3,	// (0x0005ab3d) control_bottom_pane_stacon_t1

0x5b1a,	// (0x0005ab74) grid_app_pane_ParamLimits

0x5b1a,	// (0x0005ab74) grid_app_pane

0x5b3e,	// (0x0005ab98) scroll_pane_cp15_ParamLimits

0x5b3e,	// (0x0005ab98) scroll_pane_cp15

0x5b51,	// (0x0005abab) cell_app_pane_ParamLimits

0x5b51,	// (0x0005abab) cell_app_pane

0x5b7d,	// (0x0005abd7) cell_app_pane_g1_ParamLimits

0x5b7d,	// (0x0005abd7) cell_app_pane_g1

0xefe6,	// (0x00064040) cell_app_pane_g2_ParamLimits

0xefe6,	// (0x00064040) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0006473d) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0006473d) cell_app_pane_g

0xeff2,	// (0x0006404c) cell_app_pane_t1_ParamLimits

0xeff2,	// (0x0006404c) cell_app_pane_t1

0xf009,	// (0x00064063) grid_highlight_pane_ParamLimits

0xf009,	// (0x00064063) grid_highlight_pane

0xed23,	// (0x00063d7d) cell_highlight_pane_g1

0xed2b,	// (0x00063d85) cell_highlight_pane_g2

0xed33,	// (0x00063d8d) cell_highlight_pane_g3

0xed3b,	// (0x00063d95) cell_highlight_pane_g4

0xed43,	// (0x00063d9d) cell_highlight_pane_g5

0xed4b,	// (0x00063da5) cell_highlight_pane_g6

0xed53,	// (0x00063dad) cell_highlight_pane_g7

0xed5b,	// (0x00063db5) cell_highlight_pane_g8

0xed63,	// (0x00063dbd) cell_highlight_pane_g9

0xc08d,	// (0x000610e7) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x000646eb) cell_highlight_pane_g

0xf01a,	// (0x00064074) bg_scroll_pane

0x5bb0,	// (0x0005ac0a) scroll_handle_pane

0xf061,	// (0x000640bb) scroll_bg_pane_g1

0xf076,	// (0x000640d0) scroll_bg_pane_g2

0xf08e,	// (0x000640e8) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00064742) scroll_bg_pane_g

0xf0a3,	// (0x000640fd) scroll_handle_focus_pane_ParamLimits

0xf0a3,	// (0x000640fd) scroll_handle_focus_pane

0xf061,	// (0x000640bb) scroll_handle_pane_g1

0xf0b0,	// (0x0006410a) scroll_handle_pane_g2

0xf08e,	// (0x000640e8) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00064749) scroll_handle_pane_g

0xed74,	// (0x00063dce) bg_popup_sub_pane_cp21_ParamLimits

0xed74,	// (0x00063dce) bg_popup_sub_pane_cp21

0xf0c4,	// (0x0006411e) popup_fep_japan_predictive_window_t1_ParamLimits

0xf0c4,	// (0x0006411e) popup_fep_japan_predictive_window_t1

0xf0db,	// (0x00064135) popup_fep_japan_predictive_window_t2_ParamLimits

0xf0db,	// (0x00064135) popup_fep_japan_predictive_window_t2

0xf10e,	// (0x00064168) popup_fep_japan_predictive_window_t3_ParamLimits

0xf10e,	// (0x00064168) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00064750) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00064750) popup_fep_japan_predictive_window_t

0xc097,	// (0x000610f1) bg_popup_sub_pane_cp23

0xf145,	// (0x0006419f) listscroll_japin_cand_pane

0xf14d,	// (0x000641a7) popup_fep_japan_candidate_window_t1

0xf15b,	// (0x000641b5) candidate_pane_ParamLimits

0xf15b,	// (0x000641b5) candidate_pane

0xf16d,	// (0x000641c7) scroll_pane_cp30

0xf177,	// (0x000641d1) list_single_popup_jap_candidate_pane_ParamLimits

0xf177,	// (0x000641d1) list_single_popup_jap_candidate_pane

0xc097,	// (0x000610f1) list_highlight_pane_cp30

0xf18b,	// (0x000641e5) list_single_popup_jap_candidate_pane_t1

0x5bd9,	// (0x0005ac33) level_1_signal

0x5be6,	// (0x0005ac40) level_2_signal

0x5bf3,	// (0x0005ac4d) level_3_signal

0x5c00,	// (0x0005ac5a) level_4_signal

0x5c0d,	// (0x0005ac67) level_5_signal

0x5c1a,	// (0x0005ac74) level_6_signal

0x5c27,	// (0x0005ac81) level_7_signal

0x5bd9,	// (0x0005ac33) level_1_battery

0x5be6,	// (0x0005ac40) level_2_battery

0x5bf3,	// (0x0005ac4d) level_3_battery

0x5c00,	// (0x0005ac5a) level_4_battery

0x5c0d,	// (0x0005ac67) level_5_battery

0x5c1a,	// (0x0005ac74) level_6_battery

0x5c27,	// (0x0005ac81) level_7_battery

0xf1b2,	// (0x0006420c) list_menu_pane_ParamLimits

0xf1b2,	// (0x0006420c) list_menu_pane

0xf1c8,	// (0x00064222) scroll_pane_cp25_ParamLimits

0xf1c8,	// (0x00064222) scroll_pane_cp25

0xf1e1,	// (0x0006423b) list_double2_graphic_pane_cp2_ParamLimits

0xf1e1,	// (0x0006423b) list_double2_graphic_pane_cp2

0xf1e1,	// (0x0006423b) list_double2_large_graphic_pane_cp2_ParamLimits

0xf1e1,	// (0x0006423b) list_double2_large_graphic_pane_cp2

0xf1e1,	// (0x0006423b) list_double2_pane_cp2_ParamLimits

0xf1e1,	// (0x0006423b) list_double2_pane_cp2

0xf1e1,	// (0x0006423b) list_double_graphic_pane_cp2_ParamLimits

0xf1e1,	// (0x0006423b) list_double_graphic_pane_cp2

0xf1e1,	// (0x0006423b) list_double_large_graphic_pane_cp2_ParamLimits

0xf1e1,	// (0x0006423b) list_double_large_graphic_pane_cp2

0xf1e1,	// (0x0006423b) list_double_number_pane_cp2_ParamLimits

0xf1e1,	// (0x0006423b) list_double_number_pane_cp2

0xf1e1,	// (0x0006423b) list_double_pane_cp2_ParamLimits

0xf1e1,	// (0x0006423b) list_double_pane_cp2

0x5c69,	// (0x0005acc3) list_single_2graphic_pane_cp2_ParamLimits

0x5c69,	// (0x0005acc3) list_single_2graphic_pane_cp2

0x5c69,	// (0x0005acc3) list_single_graphic_heading_pane_cp2_ParamLimits

0x5c69,	// (0x0005acc3) list_single_graphic_heading_pane_cp2

0x5c69,	// (0x0005acc3) list_single_graphic_pane_cp2_ParamLimits

0x5c69,	// (0x0005acc3) list_single_graphic_pane_cp2

0x5c69,	// (0x0005acc3) list_single_heading_pane_cp2_ParamLimits

0x5c69,	// (0x0005acc3) list_single_heading_pane_cp2

0xf1f1,	// (0x0006424b) list_single_large_graphic_pane_cp2_ParamLimits

0xf1f1,	// (0x0006424b) list_single_large_graphic_pane_cp2

0x5c69,	// (0x0005acc3) list_single_number_heading_pane_cp2_ParamLimits

0x5c69,	// (0x0005acc3) list_single_number_heading_pane_cp2

0x5c69,	// (0x0005acc3) list_single_number_pane_cp2_ParamLimits

0x5c69,	// (0x0005acc3) list_single_number_pane_cp2

0x5c69,	// (0x0005acc3) list_single_pane_cp2_ParamLimits

0x5c69,	// (0x0005acc3) list_single_pane_cp2

0xf20a,	// (0x00064264) bg_popup_sub_pane_cp22

0x5d52,	// (0x0005adac) popup_side_volume_key_window_g1

0x5d7c,	// (0x0005add6) popup_side_volume_key_window_t1

0x5d9a,	// (0x0005adf4) volume_small_pane_cp1

0xc224,	// (0x0006127e) bg_popup_sub_pane_cp24_ParamLimits

0xc224,	// (0x0006127e) bg_popup_sub_pane_cp24

0xf220,	// (0x0006427a) fep_china_uni_candidate_pane_ParamLimits

0xf220,	// (0x0006427a) fep_china_uni_candidate_pane

0xf234,	// (0x0006428e) fep_china_uni_entry_pane

0xf244,	// (0x0006429e) popup_fep_china_uni_window_g1

0xf260,	// (0x000642ba) fep_china_uni_entry_pane_g1

0xf26a,	// (0x000642c4) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00064781) fep_china_uni_entry_pane_g

0xf274,	// (0x000642ce) fep_entry_item_pane

0xf27e,	// (0x000642d8) fep_candidate_item_pane

0xf286,	// (0x000642e0) fep_china_uni_candidate_pane_g1

0xf290,	// (0x000642ea) fep_china_uni_candidate_pane_g2

0xf298,	// (0x000642f2) fep_china_uni_candidate_pane_g3

0xf2a0,	// (0x000642fa) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00064786) fep_china_uni_candidate_pane_g

0xc08d,	// (0x000610e7) fep_entry_item_pane_g1

0xf2aa,	// (0x00064304) fep_entry_item_pane_t1_ParamLimits

0xf2aa,	// (0x00064304) fep_entry_item_pane_t1

0xf2c0,	// (0x0006431a) fep_candidate_item_pane_t1_ParamLimits

0xf2c0,	// (0x0006431a) fep_candidate_item_pane_t1

0xf2d5,	// (0x0006432f) fep_candidate_item_pane_t2_ParamLimits

0xf2d5,	// (0x0006432f) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0006478f) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0006478f) fep_candidate_item_pane_t

0xc0f1,	// (0x0006114b) list_highlight_pane_cp31_ParamLimits

0xc0f1,	// (0x0006114b) list_highlight_pane_cp31

0xf2e7,	// (0x00064341) level_1_signal_lsc

0xf2f0,	// (0x0006434a) level_2_signal_lsc

0xf2f9,	// (0x00064353) level_3_signal_lsc

0xf302,	// (0x0006435c) level_4_signal_lsc

0xf30b,	// (0x00064365) level_5_signal_lsc

0xf314,	// (0x0006436e) level_6_signal_lsc

0xf31d,	// (0x00064377) level_7_signal_lsc

0xf31d,	// (0x00064377) level_1_battery_lsc

0xf326,	// (0x00064380) level_2_battery_lsc

0xf32f,	// (0x00064389) level_3_battery_lsc

0xf338,	// (0x00064392) level_4_battery_lsc

0xf341,	// (0x0006439b) level_5_battery_lsc

0xf34a,	// (0x000643a4) level_6_battery_lsc

0xf2e7,	// (0x00064341) level_7_battery_lsc

0xf353,	// (0x000643ad) scroll_handle_focus_pane_g1

0xf35c,	// (0x000643b6) scroll_handle_focus_pane_g2

0xf365,	// (0x000643bf) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00064794) scroll_handle_focus_pane_g

0x5da2,	// (0x0005adfc) list_single_2graphic_pane_g1_ParamLimits

0x5da2,	// (0x0005adfc) list_single_2graphic_pane_g1

0x5321,	// (0x0005a37b) list_single_2graphic_pane_g2_ParamLimits

0x5321,	// (0x0005a37b) list_single_2graphic_pane_g2

0x5272,	// (0x0005a2cc) list_single_2graphic_pane_g3_ParamLimits

0x5272,	// (0x0005a2cc) list_single_2graphic_pane_g3

0x5dae,	// (0x0005ae08) list_single_2graphic_pane_g4_ParamLimits

0x5dae,	// (0x0005ae08) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0006479b) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0006479b) list_single_2graphic_pane_g

0x5dba,	// (0x0005ae14) list_single_2graphic_pane_t1_ParamLimits

0x5dba,	// (0x0005ae14) list_single_2graphic_pane_t1

0x5de8,	// (0x0005ae42) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5de8,	// (0x0005ae42) list_double2_graphic_large_graphic_pane_g1

0x5571,	// (0x0005a5cb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5571,	// (0x0005a5cb) list_double2_graphic_large_graphic_pane_g2

0x54b2,	// (0x0005a50c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x54b2,	// (0x0005a50c) list_double2_graphic_large_graphic_pane_g3

0x5dfa,	// (0x0005ae54) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5dfa,	// (0x0005ae54) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x000647a4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x000647a4) list_double2_graphic_large_graphic_pane_g

0x5e06,	// (0x0005ae60) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5e06,	// (0x0005ae60) list_double2_graphic_large_graphic_pane_t1

0x5e1c,	// (0x0005ae76) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5e1c,	// (0x0005ae76) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x000647ad) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x000647ad) list_double2_graphic_large_graphic_pane_t

0xf3f7,	// (0x00064451) popup_fast_swap_window_ParamLimits

0xf3f7,	// (0x00064451) popup_fast_swap_window

0xf415,	// (0x0006446f) popup_side_volume_key_window

0xf433,	// (0x0006448d) stacon_top_pane

0xf43d,	// (0x00064497) status_pane_ParamLimits

0xf43d,	// (0x00064497) status_pane

0x6022,	// (0x0005b07c) status_small_pane

0xc097,	// (0x000610f1) control_pane

0xc097,	// (0x000610f1) stacon_bottom_pane

0xecab,	// (0x00063d05) scroll_pane_cp121

0xeca2,	// (0x00063cfc) set_content_pane

0x5e2e,	// (0x0005ae88) bg_active_tab_pane_g1_cp1

0xf36e,	// (0x000643c8) bg_active_tab_pane_g2_cp1

0x5e37,	// (0x0005ae91) bg_active_tab_pane_g3_cp1

0x5e2e,	// (0x0005ae88) bg_passive_tab_pane_g1_cp1

0xf36e,	// (0x000643c8) bg_passive_tab_pane_g2_cp1

0x5e37,	// (0x0005ae91) bg_passive_tab_pane_g3_cp1

0x5e40,	// (0x0005ae9a) bg_active_tab_pane_g1_cp2

0xf36e,	// (0x000643c8) bg_active_tab_pane_g2_cp2

0x5e49,	// (0x0005aea3) bg_active_tab_pane_g3_cp2

0x5e40,	// (0x0005ae9a) bg_passive_tab_pane_g1_cp2

0xf36e,	// (0x000643c8) bg_passive_tab_pane_g2_cp2

0x5e49,	// (0x0005aea3) bg_passive_tab_pane_g3_cp2

0x5e52,	// (0x0005aeac) bg_active_tab_pane_g1_cp3

0xf36e,	// (0x000643c8) bg_active_tab_pane_g2_cp3

0x5e5b,	// (0x0005aeb5) bg_active_tab_pane_g3_cp3

0x5e52,	// (0x0005aeac) bg_passive_tab_pane_g1_cp3

0xf36e,	// (0x000643c8) bg_passive_tab_pane_g2_cp3

0x5e5b,	// (0x0005aeb5) bg_passive_tab_pane_g3_cp3

0x5e64,	// (0x0005aebe) bg_active_tab_pane_g1_cp4

0xf36e,	// (0x000643c8) bg_active_tab_pane_g2_cp4

0x5e6f,	// (0x0005aec9) bg_active_tab_pane_g3_cp4

0x5e64,	// (0x0005aebe) bg_passive_tab_pane_g1_cp4

0xf36e,	// (0x000643c8) bg_passive_tab_pane_g2_cp4

0x5e6f,	// (0x0005aec9) bg_passive_tab_pane_g3_cp4

0xf3b5,	// (0x0006440f) bg_active_tab_pane_g1_cp5

0xf36e,	// (0x000643c8) bg_active_tab_pane_g2_cp5

0xf3be,	// (0x00064418) bg_active_tab_pane_g3_cp5

0xf3b5,	// (0x0006440f) bg_passive_tab_pane_g1_cp5

0xf36e,	// (0x000643c8) bg_passive_tab_pane_g2_cp5

0xf3be,	// (0x00064418) bg_passive_tab_pane_g3_cp5

0x5fbe,	// (0x0005b018) list_set_graphic_pane_ParamLimits

0x5fbe,	// (0x0005b018) list_set_graphic_pane

0xc097,	// (0x000610f1) bg_set_opt_pane_cp4

0x5fd3,	// (0x0005b02d) list_set_graphic_pane_g1_ParamLimits

0x5fd3,	// (0x0005b02d) list_set_graphic_pane_g1

0x5fdf,	// (0x0005b039) list_set_graphic_pane_g2_ParamLimits

0x5fdf,	// (0x0005b039) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x000647b2) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x000647b2) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x00064b33) volume_small_pane_cp_g

0x6003,	// (0x0005b05d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6003,	// (0x0005b05d) list_double2_large_graphic_pane_g1_cp2

0x6011,	// (0x0005b06b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6011,	// (0x0005b06b) list_double2_large_graphic_pane_g2_cp2

0xf3c7,	// (0x00064421) list_double2_large_graphic_pane_g3_cp2

0xf3cf,	// (0x00064429) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf3cf,	// (0x00064429) list_double2_large_graphic_pane_t1_cp2

0xf3e5,	// (0x0006443f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf3e5,	// (0x0006443f) list_double2_large_graphic_pane_t2_cp2

0x9791,	// (0x0005e7eb) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9791,	// (0x0005e7eb) list_double_large_graphic_pane_g1_cp2

0x97a4,	// (0x0005e7fe) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x97a4,	// (0x0005e7fe) list_double_large_graphic_pane_g2_cp2

0xf51e,	// (0x00064578) list_double_large_graphic_pane_g3_cp2

0x97b5,	// (0x0005e80f) list_double_large_graphic_pane_g4_cp

0x97bd,	// (0x0005e817) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x97bd,	// (0x0005e817) list_double_large_graphic_pane_t1_cp2

0x97d4,	// (0x0005e82e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x97d4,	// (0x0005e82e) list_double_large_graphic_pane_t2_cp2

0x602d,	// (0x0005b087) list_double2_graphic_pane_g1_cp2_ParamLimits

0x602d,	// (0x0005b087) list_double2_graphic_pane_g1_cp2

0x603b,	// (0x0005b095) list_double2_graphic_pane_g2_cp2_ParamLimits

0x603b,	// (0x0005b095) list_double2_graphic_pane_g2_cp2

0x604c,	// (0x0005b0a6) list_double2_graphic_pane_g3_cp2

0xf44b,	// (0x000644a5) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf44b,	// (0x000644a5) list_double2_graphic_pane_t1_cp2

0xf461,	// (0x000644bb) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf461,	// (0x000644bb) list_double2_graphic_pane_t2_cp2

0xf473,	// (0x000644cd) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf473,	// (0x000644cd) list_single_number_heading_pane_g1_cp2

0xf47f,	// (0x000644d9) list_single_number_heading_pane_g2_cp2

0xf487,	// (0x000644e1) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf487,	// (0x000644e1) list_single_number_heading_pane_t1_cp2

0x6056,	// (0x0005b0b0) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6056,	// (0x0005b0b0) list_single_number_heading_pane_t2_cp2

0xf49d,	// (0x000644f7) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf49d,	// (0x000644f7) list_single_number_heading_pane_t3_cp2

0xf473,	// (0x000644cd) list_single_heading_pane_g1_cp2_ParamLimits

0xf473,	// (0x000644cd) list_single_heading_pane_g1_cp2

0xf47f,	// (0x000644d9) list_single_heading_pane_g2_cp2

0xf487,	// (0x000644e1) list_single_heading_pane_t1_cp2_ParamLimits

0xf487,	// (0x000644e1) list_single_heading_pane_t1_cp2

0x958b,	// (0x0005e5e5) list_single_heading_pane_t2_cp2_ParamLimits

0x958b,	// (0x0005e5e5) list_single_heading_pane_t2_cp2

0x94d3,	// (0x0005e52d) list_double_graphic_pane_g1_cp2_ParamLimits

0x94d3,	// (0x0005e52d) list_double_graphic_pane_g1_cp2

0x94df,	// (0x0005e539) list_double_graphic_pane_g2_cp2_ParamLimits

0x94df,	// (0x0005e539) list_double_graphic_pane_g2_cp2

0x94ee,	// (0x0005e548) list_double_graphic_pane_g3_cp2

0x94f6,	// (0x0005e550) list_double_graphic_pane_t1_cp2_ParamLimits

0x94f6,	// (0x0005e550) list_double_graphic_pane_t1_cp2

0x950c,	// (0x0005e566) list_double_graphic_pane_t2_cp2_ParamLimits

0x950c,	// (0x0005e566) list_double_graphic_pane_t2_cp2

0xf512,	// (0x0006456c) list_double_number_pane_g1_cp2_ParamLimits

0xf512,	// (0x0006456c) list_double_number_pane_g1_cp2

0xf51e,	// (0x00064578) list_double_number_pane_g2_cp2

0x9497,	// (0x0005e4f1) list_double_number_pane_t1_cp2_ParamLimits

0x9497,	// (0x0005e4f1) list_double_number_pane_t1_cp2

0x94ab,	// (0x0005e505) list_double_number_pane_t2_cp2_ParamLimits

0x94ab,	// (0x0005e505) list_double_number_pane_t2_cp2

0x94c1,	// (0x0005e51b) list_double_number_pane_t3_cp2_ParamLimits

0x94c1,	// (0x0005e51b) list_double_number_pane_t3_cp2

0x9380,	// (0x0005e3da) list_single_graphic_pane_g1_cp2_ParamLimits

0x9380,	// (0x0005e3da) list_single_graphic_pane_g1_cp2

0x3282,	// (0x000582dc) list_single_graphic_pane_g2_cp2_ParamLimits

0x3282,	// (0x000582dc) list_single_graphic_pane_g2_cp2

0x328e,	// (0x000582e8) list_single_graphic_pane_g3_cp2

0x9356,	// (0x0005e3b0) list_single_graphic_pane_t1_cp2_ParamLimits

0x9356,	// (0x0005e3b0) list_single_graphic_pane_t1_cp2

0x3282,	// (0x000582dc) list_single_number_pane_g1_cp2_ParamLimits

0x3282,	// (0x000582dc) list_single_number_pane_g1_cp2

0x328e,	// (0x000582e8) list_single_number_pane_g2_cp2

0x9356,	// (0x0005e3b0) list_single_number_pane_t1_cp2_ParamLimits

0x9356,	// (0x0005e3b0) list_single_number_pane_t1_cp2

0x936c,	// (0x0005e3c6) list_single_number_pane_t2_cp2_ParamLimits

0x936c,	// (0x0005e3c6) list_single_number_pane_t2_cp2

0x6011,	// (0x0005b06b) list_double2_pane_g1_cp2_ParamLimits

0x6011,	// (0x0005b06b) list_double2_pane_g1_cp2

0xf3c7,	// (0x00064421) list_double2_pane_g2_cp2

0xf4ea,	// (0x00064544) list_double2_pane_t1_cp2_ParamLimits

0xf4ea,	// (0x00064544) list_double2_pane_t1_cp2

0xf500,	// (0x0006455a) list_double2_pane_t2_cp2_ParamLimits

0xf500,	// (0x0006455a) list_double2_pane_t2_cp2

0xf512,	// (0x0006456c) list_double_pane_g1_cp2_ParamLimits

0xf512,	// (0x0006456c) list_double_pane_g1_cp2

0xf51e,	// (0x00064578) list_double_pane_g2_cp2

0xf526,	// (0x00064580) list_double_pane_t1_cp2_ParamLimits

0xf526,	// (0x00064580) list_double_pane_t1_cp2

0xf53c,	// (0x00064596) list_double_pane_t2_cp2_ParamLimits

0xf53c,	// (0x00064596) list_double_pane_t2_cp2

0x3272,	// (0x000582cc) list_single_pane_cp2_g3

0x3282,	// (0x000582dc) list_single_pane_g1_cp2_ParamLimits

0x3282,	// (0x000582dc) list_single_pane_g1_cp2

0x328e,	// (0x000582e8) list_single_pane_g2_cp2

0x3296,	// (0x000582f0) list_single_pane_t1_cp2_ParamLimits

0x3296,	// (0x000582f0) list_single_pane_t1_cp2

0x6084,	// (0x0005b0de) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6084,	// (0x0005b0de) list_single_large_graphic_pane_g1_cp2

0x3130,	// (0x0005818a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3130,	// (0x0005818a) list_single_large_graphic_pane_g2_cp2

0x32ae,	// (0x00058308) list_single_large_graphic_pane_g3_cp2

0x32b6,	// (0x00058310) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x32b6,	// (0x00058310) list_single_large_graphic_pane_g4_cp1

0x32d0,	// (0x0005832a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x32d0,	// (0x0005832a) list_single_large_graphic_pane_t1_cp2

0x9320,	// (0x0005e37a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9320,	// (0x0005e37a) list_single_graphic_heading_pane_g1_cp2

0x92ed,	// (0x0005e347) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x92ed,	// (0x0005e347) list_single_graphic_heading_pane_g4_cp2

0x328e,	// (0x000582e8) list_single_graphic_heading_pane_g5_cp2

0x932c,	// (0x0005e386) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x932c,	// (0x0005e386) list_single_graphic_heading_pane_t1_cp2

0x9342,	// (0x0005e39c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9342,	// (0x0005e39c) list_single_graphic_heading_pane_t2_cp2

0x92e1,	// (0x0005e33b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x92e1,	// (0x0005e33b) list_single_2graphic_pane_g1_cp2

0x92ed,	// (0x0005e347) list_single_2graphic_pane_g2_cp2_ParamLimits

0x92ed,	// (0x0005e347) list_single_2graphic_pane_g2_cp2

0x328e,	// (0x000582e8) list_single_2graphic_pane_g3_cp2

0x92fe,	// (0x0005e358) list_single_2graphic_pane_g4_cp2_ParamLimits

0x92fe,	// (0x0005e358) list_single_2graphic_pane_g4_cp2

0x930a,	// (0x0005e364) list_single_2graphic_pane_t1_cp2_ParamLimits

0x930a,	// (0x0005e364) list_single_2graphic_pane_t1_cp2

0xc08d,	// (0x000610e7) list_highlight_pane_g10_cp1

0x8eb9,	// (0x0005df13) list_highlight_pane_g1_cp1

0x8ec1,	// (0x0005df1b) list_highlight_pane_g2_cp1

0x8ec9,	// (0x0005df23) list_highlight_pane_g3_cp1

0x8ed1,	// (0x0005df2b) list_highlight_pane_g4_cp1

0x8ed9,	// (0x0005df33) list_highlight_pane_g5_cp1

0x8ee1,	// (0x0005df3b) list_highlight_pane_g6_cp1

0x8ee9,	// (0x0005df43) list_highlight_pane_g7_cp1

0x8ef1,	// (0x0005df4b) list_highlight_pane_g8_cp1

0x8ef9,	// (0x0005df53) list_highlight_pane_g9_cp1

0x8dd9,	// (0x0005de33) form_field_slider_pane_t3

0x8de7,	// (0x0005de41) form_field_slider_pane_t4

0x8df5,	// (0x0005de4f) slider_form_pane_ParamLimits

0x8df5,	// (0x0005de4f) slider_form_pane

0xc097,	// (0x000610f1) control_abbreviations

0xc097,	// (0x000610f1) control_conventions

0xc097,	// (0x000610f1) control_definitions

0xc097,	// (0x000610f1) format_table_attribute

0x95e1,	// (0x0005e63b) bg_popup_preview_window_pane_g9

0xc097,	// (0x000610f1) format_table_data2

0xc097,	// (0x000610f1) format_table_data3

0xc097,	// (0x000610f1) format_table_data_example

0x0008,

0xc097,	// (0x000610f1) intro_purpose

0xf8f4,	// (0x0006494e) bg_popup_preview_window_pane_g

0xc097,	// (0x000610f1) texts_category

0xc097,	// (0x000610f1) texts_graphics

0x32e6,	// (0x00058340) text_digital

0x32f5,	// (0x0005834f) text_primary

0x3304,	// (0x0005835e) text_primary_small

0x3313,	// (0x0005836d) text_secondary

0x3322,	// (0x0005837c) text_title

0x9f02,	// (0x0005ef5c) bg_passive_tab_pane_g1_cp3_srt

0xf36e,	// (0x000643c8) bg_passive_tab_pane_g2_cp3_srt

0x9f0b,	// (0x0005ef65) bg_passive_tab_pane_g3_cp3_srt

0xc0f1,	// (0x0006114b) bg_active_tab_pane_cp3_srt_ParamLimits

0xc0f1,	// (0x0006114b) bg_active_tab_pane_cp3_srt

0x9f14,	// (0x0005ef6e) tabs_4_active_pane_srt_g1

0x9f1c,	// (0x0005ef76) tabs_4_active_pane_srt_t1_ParamLimits

0x9f1c,	// (0x0005ef76) tabs_4_active_pane_srt_t1

0x9f02,	// (0x0005ef5c) bg_active_tab_pane_g1_cp3_copy1

0xf36e,	// (0x000643c8) bg_active_tab_pane_g2_cp3_copy1

0x9f0b,	// (0x0005ef65) bg_active_tab_pane_g3_cp3_copy1

0xc0f1,	// (0x0006114b) tabs_2_long_active_pane_srt_ParamLimits

0xc0f1,	// (0x0006114b) tabs_2_long_active_pane_srt

0xc0f1,	// (0x0006114b) tabs_2_long_passive_pane_srt_ParamLimits

0xc0f1,	// (0x0006114b) tabs_2_long_passive_pane_srt

0x596e,	// (0x0005a9c8) bg_passive_tab_pane_cp4_srt_ParamLimits

0x596e,	// (0x0005a9c8) bg_passive_tab_pane_cp4_srt

0x9a1d,	// (0x0005ea77) bg_passive_tab_pane_g1_cp4_srt

0xf36e,	// (0x000643c8) bg_passive_tab_pane_g2_cp4_srt

0x9a26,	// (0x0005ea80) bg_passive_tab_pane_g3_cp4_srt

0x16f1,	// (0x0005674b) bg_active_tab_pane_cp4_srt_ParamLimits

0x16f1,	// (0x0005674b) bg_active_tab_pane_cp4_srt

0x9a2f,	// (0x0005ea89) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9a2f,	// (0x0005ea89) tabs_2_long_active_pane_srt_t1

0x9a1d,	// (0x0005ea77) bg_active_tab_pane_g1_cp4_srt

0xf36e,	// (0x000643c8) bg_active_tab_pane_g2_cp4_srt

0x9a26,	// (0x0005ea80) bg_active_tab_pane_g3_cp4_srt

0xc224,	// (0x0006127e) tabs_3_long_active_pane_srt_ParamLimits

0xc224,	// (0x0006127e) tabs_3_long_active_pane_srt

0xc224,	// (0x0006127e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc224,	// (0x0006127e) tabs_3_long_passive_pane_cp_srt

0xc224,	// (0x0006127e) tabs_3_long_passive_pane_srt_ParamLimits

0xc224,	// (0x0006127e) tabs_3_long_passive_pane_srt

0x596e,	// (0x0005a9c8) bg_passive_tab_pane_cp5_srt_ParamLimits

0x596e,	// (0x0005a9c8) bg_passive_tab_pane_cp5_srt

0xf3b5,	// (0x0006440f) bg_passive_tab_pane_g1_cp5_srt

0xf36e,	// (0x000643c8) bg_passive_tab_pane_g2_cp5_srt

0xf3be,	// (0x00064418) bg_passive_tab_pane_g3_cp5_srt

0x16f1,	// (0x0005674b) bg_active_tab_pane_cp5_srt_ParamLimits

0x16f1,	// (0x0005674b) bg_active_tab_pane_cp5_srt

0x9a0b,	// (0x0005ea65) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9a0b,	// (0x0005ea65) tabs_3_long_active_pane_srt_t1

0xf3b5,	// (0x0006440f) bg_active_tab_pane_g1_cp5_srt

0xf36e,	// (0x000643c8) bg_active_tab_pane_g2_cp5_srt

0xf3be,	// (0x00064418) bg_active_tab_pane_g3_cp5_srt

0x99fd,	// (0x0005ea57) navi_text_pane_srt_t1

0x99f5,	// (0x0005ea4f) navi_icon_pane_srt_g1

0x342c,	// (0x00058486) midp_editing_number_pane_srt

0x3331,	// (0x0005838b) midp_ticker_pane_srt

0x3434,	// (0x0005848e) midp_ticker_pane_srt_g1

0x343c,	// (0x00058496) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x000647d1) midp_ticker_pane_srt_g

0x3444,	// (0x0005849e) midp_ticker_pane_srt_t1

0x99e6,	// (0x0005ea40) midp_editing_number_pane_t1_copy1

0x596e,	// (0x0005a9c8) listscroll_midp_pane

0x596e,	// (0x0005a9c8) midp_form_pane

0x3339,	// (0x00058393) midp_info_popup_window_ParamLimits

0x3339,	// (0x00058393) midp_info_popup_window

0xed74,	// (0x00063dce) bg_popup_sub_pane_cp50_ParamLimits

0xed74,	// (0x00063dce) bg_popup_sub_pane_cp50

0x8aef,	// (0x0005db49) listscroll_midp_info_pane_ParamLimits

0x8aef,	// (0x0005db49) listscroll_midp_info_pane

0x8ad7,	// (0x0005db31) listscroll_form_midp_pane_ParamLimits

0x8ad7,	// (0x0005db31) listscroll_form_midp_pane

0x8ae3,	// (0x0005db3d) scroll_bar_cp050

0x8ab7,	// (0x0005db11) list_midp_pane

0xa997,	// (0x0005f9f1) signal_pane_g2_cp

0x89f1,	// (0x0005da4b) listscroll_midp_info_pane_t1_ParamLimits

0x89f1,	// (0x0005da4b) listscroll_midp_info_pane_t1

0x8a09,	// (0x0005da63) listscroll_midp_info_pane_t2_ParamLimits

0x8a09,	// (0x0005da63) listscroll_midp_info_pane_t2

0x8a47,	// (0x0005daa1) listscroll_midp_info_pane_t3_ParamLimits

0x8a47,	// (0x0005daa1) listscroll_midp_info_pane_t3

0x8a81,	// (0x0005dadb) listscroll_midp_info_pane_t4_ParamLimits

0x8a81,	// (0x0005dadb) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00064889) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00064889) listscroll_midp_info_pane_t

0xedf4,	// (0x00063e4e) scroll_pane_cp21

0x898b,	// (0x0005d9e5) form_midp_field_choice_group_pane

0x8994,	// (0x0005d9ee) form_midp_field_text_pane

0x89d7,	// (0x0005da31) form_midp_field_time_pane

0x89df,	// (0x0005da39) form_midp_gauge_slider_pane

0x89e8,	// (0x0005da42) form_midp_gauge_wait_pane

0xc097,	// (0x000610f1) form_midp_image_pane

0x6733,	// (0x0005b78d) list_single_midp_pane_ParamLimits

0x6733,	// (0x0005b78d) list_single_midp_pane

0x894f,	// (0x0005d9a9) form_midp_field_text_pane_t1

0x873b,	// (0x0005d795) input_focus_pane_cp050

0x897a,	// (0x0005d9d4) list_midp_form_text_pane

0x891e,	// (0x0005d978) form_midp_field_choice_group_pane_t1

0x892c,	// (0x0005d986) input_focus_pane_cp051

0x8940,	// (0x0005d99a) list_midp_choice_pane

0xc097,	// (0x000610f1) status_idle_pane

0x8902,	// (0x0005d95c) form_midp_field_time_pane_t1

0xc08d,	// (0x000610e7) wait_anim_pane_g2_copy1

0x8910,	// (0x0005d96a) form_midp_field_time_pane_t2

0x0001,

0x3394,	// (0x000583ee) aid_navinavi_width_2_pane

0xf82a,	// (0x00064884) form_midp_field_time_pane_t

0xc097,	// (0x000610f1) input_focus_pane_cp052

0xc097,	// (0x000610f1) bg_input_focus_pane_cp040

0x88c2,	// (0x0005d91c) form_midp_gauge_slider_pane_t1

0x88d0,	// (0x0005d92a) form_midp_gauge_slider_pane_t2

0x88de,	// (0x0005d938) form_midp_gauge_slider_pane_t3

0x88ec,	// (0x0005d946) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0006487b) form_midp_gauge_slider_pane_t

0x88fa,	// (0x0005d954) form_midp_slider_pane

0xc0f1,	// (0x0006114b) bg_input_focus_pane_cp041_ParamLimits

0xc0f1,	// (0x0006114b) bg_input_focus_pane_cp041

0x888f,	// (0x0005d8e9) form_midp_gauge_wait_pane_t1_ParamLimits

0x888f,	// (0x0005d8e9) form_midp_gauge_wait_pane_t1

0x88a1,	// (0x0005d8fb) form_midp_gauge_wait_pane_t2_ParamLimits

0x88a1,	// (0x0005d8fb) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00064876) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00064876) form_midp_gauge_wait_pane_t

0x88b3,	// (0x0005d90d) form_midp_wait_pane_ParamLimits

0x88b3,	// (0x0005d90d) form_midp_wait_pane

0x8857,	// (0x0005d8b1) form_midp_image_pane_g1

0x8860,	// (0x0005d8ba) form_midp_image_pane_t1

0x886f,	// (0x0005d8c9) form_midp_image_pane_t2

0x887e,	// (0x0005d8d8) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x0006486f) form_midp_image_pane_t

0x884e,	// (0x0005d8a8) list_single_midp_pane_g1

0x35d4,	// (0x0005862e) list_single_midp_pane_t1

0x8834,	// (0x0005d88e) list_midp_form_item_pane_ParamLimits

0x8834,	// (0x0005d88e) list_midp_form_item_pane

0x334e,	// (0x000583a8) list_midp_form_item_pane_t1

0x335d,	// (0x000583b7) midp_ticker_pane_g1

0x3369,	// (0x000583c3) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x000647b7) midp_ticker_pane_g

0x6137,	// (0x0005b191) midp_ticker_pane_t1

0x9c59,	// (0x0005ecb3) midp_editing_number_pane_t1

0x9c37,	// (0x0005ec91) midp_editing_number_pane

0x9c46,	// (0x0005eca0) midp_ticker_pane

0x99d6,	// (0x0005ea30) ai_message_heading_pane

0xc097,	// (0x000610f1) bg_popup_window_pane_cp14

0x99de,	// (0x0005ea38) listscroll_ai_message_pane

0x995c,	// (0x0005e9b6) ai_message_heading_pane_g1_ParamLimits

0x995c,	// (0x0005e9b6) ai_message_heading_pane_g1

0x9968,	// (0x0005e9c2) ai_message_heading_pane_g2_ParamLimits

0x9968,	// (0x0005e9c2) ai_message_heading_pane_g2

0x9976,	// (0x0005e9d0) ai_message_heading_pane_g3_ParamLimits

0x9976,	// (0x0005e9d0) ai_message_heading_pane_g3

0x9982,	// (0x0005e9dc) ai_message_heading_pane_g4_ParamLimits

0x9982,	// (0x0005e9dc) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x000649b0) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x000649b0) ai_message_heading_pane_g

0x998e,	// (0x0005e9e8) ai_message_heading_pane_t1_ParamLimits

0x998e,	// (0x0005e9e8) ai_message_heading_pane_t1

0x99a8,	// (0x0005ea02) ai_message_heading_pane_t2_ParamLimits

0x99a8,	// (0x0005ea02) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x000649b9) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x000649b9) ai_message_heading_pane_t

0x99bc,	// (0x0005ea16) bg_popup_heading_pane_cp1_ParamLimits

0x99bc,	// (0x0005ea16) bg_popup_heading_pane_cp1

0x994a,	// (0x0005e9a4) list_ai_message_pane_ParamLimits

0x994a,	// (0x0005e9a4) list_ai_message_pane

0xedf4,	// (0x00063e4e) scroll_pane_cp10

0x98e6,	// (0x0005e940) list_ai_message_pane_g1

0x98ee,	// (0x0005e948) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0006498d) list_ai_message_pane_g

0x98f6,	// (0x0005e950) list_ai_message_pane_t1_ParamLimits

0x98f6,	// (0x0005e950) list_ai_message_pane_t1

0x990b,	// (0x0005e965) list_ai_message_pane_t2_ParamLimits

0x990b,	// (0x0005e965) list_ai_message_pane_t2

0x9920,	// (0x0005e97a) list_ai_message_pane_t3_ParamLimits

0x9920,	// (0x0005e97a) list_ai_message_pane_t3

0x9935,	// (0x0005e98f) list_ai_message_pane_t4_ParamLimits

0x9935,	// (0x0005e98f) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00064992) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00064992) list_ai_message_pane_t

0x98cf,	// (0x0005e929) cell_ai_soft_ind_pane_ParamLimits

0x98cf,	// (0x0005e929) cell_ai_soft_ind_pane

0x3375,	// (0x000583cf) cell_ai_soft_ind_pane_g1_ParamLimits

0x3375,	// (0x000583cf) cell_ai_soft_ind_pane_g1

0xc097,	// (0x000610f1) grid_highlight_cp1

0x3382,	// (0x000583dc) text_secondary_cp56_ParamLimits

0x3382,	// (0x000583dc) text_secondary_cp56

0x98a4,	// (0x0005e8fe) example_general_pane_ParamLimits

0x98a4,	// (0x0005e8fe) example_general_pane

0x98b0,	// (0x0005e90a) example_parent_pane_g1_ParamLimits

0x98b0,	// (0x0005e90a) example_parent_pane_g1

0x98bc,	// (0x0005e916) example_parent_pane_t1_ParamLimits

0x98bc,	// (0x0005e916) example_parent_pane_t1

0x7f4d,	// (0x0005cfa7) popup_preview_text_window_ParamLimits

0x7f4d,	// (0x0005cfa7) popup_preview_text_window

0x327a,	// (0x000582d4) list_single_pane_cp2_g4

0xc2da,	// (0x00061334) bg_popup_preview_window_pane_ParamLimits

0xc2da,	// (0x00061334) bg_popup_preview_window_pane

0x95eb,	// (0x0005e645) popup_preview_text_window_t1_ParamLimits

0x95eb,	// (0x0005e645) popup_preview_text_window_t1

0x9609,	// (0x0005e663) popup_preview_text_window_t2_ParamLimits

0x9609,	// (0x0005e663) popup_preview_text_window_t2

0x9652,	// (0x0005e6ac) popup_preview_text_window_t3_ParamLimits

0x9652,	// (0x0005e6ac) popup_preview_text_window_t3

0x9697,	// (0x0005e6f1) popup_preview_text_window_t4_ParamLimits

0x9697,	// (0x0005e6f1) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x00064961) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x00064961) popup_preview_text_window_t

0x9715,	// (0x0005e76f) scroll_pane_cp11

0x86c7,	// (0x0005d721) bg_popup_preview_window_pane_g1

0x959f,	// (0x0005e5f9) bg_popup_preview_window_pane_g2

0x95a9,	// (0x0005e603) bg_popup_preview_window_pane_g3

0x95b3,	// (0x0005e60d) bg_popup_preview_window_pane_g4

0x95bd,	// (0x0005e617) bg_popup_preview_window_pane_g5

0x95c7,	// (0x0005e621) bg_popup_preview_window_pane_g6

0x95cf,	// (0x0005e629) bg_popup_preview_window_pane_g7

0x95d7,	// (0x0005e631) bg_popup_preview_window_pane_g8

0x4aec,	// (0x00059b46) aid_popup_width_pane

0x7f29,	// (0x0005cf83) popup_midp_note_alarm_window_ParamLimits

0x7f29,	// (0x0005cf83) popup_midp_note_alarm_window

0xecbc,	// (0x00063d16) data_form_pane_ParamLimits

0x57f6,	// (0x0005a850) form_field_data_pane_g1

0x5800,	// (0x0005a85a) form_field_data_pane_t1_ParamLimits

0xecc8,	// (0x00063d22) input_focus_pane_ParamLimits

0x31d5,	// (0x0005822f) data_form_wide_pane_ParamLimits

0x31e6,	// (0x00058240) form_field_data_wide_pane_g1

0x31f2,	// (0x0005824c) form_field_data_wide_pane_t1_ParamLimits

0xc48f,	// (0x000614e9) input_focus_pane_cp6_ParamLimits

0x5933,	// (0x0005a98d) input_popup_find_pane_g1_ParamLimits

0x5933,	// (0x0005a98d) input_popup_find_pane_g1

0x5a8c,	// (0x0005aae6) aid_navi_side_left_pane

0x5aa1,	// (0x0005aafb) aid_navi_side_right_pane

0x8fb4,	// (0x0005e00e) bg_popup_window_pane_cp30_ParamLimits

0x8fb4,	// (0x0005e00e) bg_popup_window_pane_cp30

0x902e,	// (0x0005e088) popup_midp_note_alarm_window_g1_ParamLimits

0x902e,	// (0x0005e088) popup_midp_note_alarm_window_g1

0x905e,	// (0x0005e0b8) popup_midp_note_alarm_window_t1_ParamLimits

0x905e,	// (0x0005e0b8) popup_midp_note_alarm_window_t1

0x90ff,	// (0x0005e159) popup_midp_note_alarm_window_t2_ParamLimits

0x90ff,	// (0x0005e159) popup_midp_note_alarm_window_t2

0x91ad,	// (0x0005e207) popup_midp_note_alarm_window_t3_ParamLimits

0x91ad,	// (0x0005e207) popup_midp_note_alarm_window_t3

0x91df,	// (0x0005e239) popup_midp_note_alarm_window_t4_ParamLimits

0x91df,	// (0x0005e239) popup_midp_note_alarm_window_t4

0x9205,	// (0x0005e25f) popup_midp_note_alarm_window_t5_ParamLimits

0x9205,	// (0x0005e25f) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x000648fe) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x000648fe) popup_midp_note_alarm_window_t

0x92b1,	// (0x0005e30b) wait_bar_pane_cp1_ParamLimits

0x92b1,	// (0x0005e30b) wait_bar_pane_cp1

0xc097,	// (0x000610f1) wait_anim_pane_copy1

0xc097,	// (0x000610f1) wait_border_pane_copy1

0x8c99,	// (0x0005dcf3) wait_border_pane_g1_copy1

0x320c,	// (0x00058266) form_field_popup_pane_g1

0x581a,	// (0x0005a874) form_field_popup_pane_t1_ParamLimits

0xecc8,	// (0x00063d22) input_focus_pane_cp7_ParamLimits

0xecf6,	// (0x00063d50) list_form_pane_ParamLimits

0x3214,	// (0x0005826e) form_field_popup_wide_pane_g1

0x321c,	// (0x00058276) form_field_popup_wide_pane_t1_ParamLimits

0xecc8,	// (0x00063d22) input_focus_pane_cp8_ParamLimits

0xed02,	// (0x00063d5c) list_form_wide_pane_ParamLimits

0x9f8f,	// (0x0005efe9) aid_size_cell_graphic_pane

0x5899,	// (0x0005a8f3) data_form_pane_t1_ParamLimits

0x69c2,	// (0x0005ba1c) data_form_wide_pane_t1_ParamLimits

0x8274,	// (0x0005d2ce) bg_status_flat_pane

0x4f07,	// (0x00059f61) title_pane_t1_ParamLimits

0xc0b9,	// (0x00061113) title_pane_t2_ParamLimits

0xc0df,	// (0x00061139) title_pane_t3_ParamLimits

0xf557,	// (0x000645b1) title_pane_t_ParamLimits

0x5bd9,	// (0x0005ac33) level_1_signal_ParamLimits

0x5be6,	// (0x0005ac40) level_2_signal_ParamLimits

0x5bf3,	// (0x0005ac4d) level_3_signal_ParamLimits

0x5c00,	// (0x0005ac5a) level_4_signal_ParamLimits

0x5c0d,	// (0x0005ac67) level_5_signal_ParamLimits

0x5c1a,	// (0x0005ac74) level_6_signal_ParamLimits

0x5c27,	// (0x0005ac81) level_7_signal_ParamLimits

0x5bd9,	// (0x0005ac33) level_1_battery_ParamLimits

0x5be6,	// (0x0005ac40) level_2_battery_ParamLimits

0x5bf3,	// (0x0005ac4d) level_3_battery_ParamLimits

0x5c00,	// (0x0005ac5a) level_4_battery_ParamLimits

0x5c0d,	// (0x0005ac67) level_5_battery_ParamLimits

0x5c1a,	// (0x0005ac74) level_6_battery_ParamLimits

0x5c27,	// (0x0005ac81) level_7_battery_ParamLimits

0x8eb9,	// (0x0005df13) bg_status_flat_pane_g1

0x8ec1,	// (0x0005df1b) bg_status_flat_pane_g2

0x8ec9,	// (0x0005df23) bg_status_flat_pane_g3

0x8ed1,	// (0x0005df2b) bg_status_flat_pane_g4

0x8ed9,	// (0x0005df33) bg_status_flat_pane_g5

0x8ee1,	// (0x0005df3b) bg_status_flat_pane_g6

0x8ee9,	// (0x0005df43) bg_status_flat_pane_g7

0x4f77,	// (0x00059fd1) tabs_3_active_pane_t1_ParamLimits

0x4f77,	// (0x00059fd1) tabs_3_passive_pane_t1_ParamLimits

0x4f91,	// (0x00059feb) tabs_4_active_pane_t1_ParamLimits

0x4f91,	// (0x00059feb) tabs_4_1_passive_pane_t1_ParamLimits

0x5949,	// (0x0005a9a3) tabs_2_active_pane_t1_ParamLimits

0x5949,	// (0x0005a9a3) tabs_2_passive_pane_t1_ParamLimits

0x16f1,	// (0x0005674b) bg_active_tab_pane_cp4_ParamLimits

0x595b,	// (0x0005a9b5) tabs_2_long_active_pane_t1_ParamLimits

0x596e,	// (0x0005a9c8) bg_passive_tab_pane_cp4_ParamLimits

0x6662,	// (0x0005b6bc) list_single_midp_graphic_pane_t1_ParamLimits

0x16f1,	// (0x0005674b) bg_active_tab_pane_cp5_ParamLimits

0x597a,	// (0x0005a9d4) tabs_3_long_active_pane_t1_ParamLimits

0x596e,	// (0x0005a9c8) bg_passive_tab_pane_cp5_ParamLimits

0x6662,	// (0x0005b6bc) list_single_midp_graphic_pane_t1

0x8274,	// (0x0005d2ce) bg_status_flat_pane_ParamLimits

0x833f,	// (0x0005d399) indicator_pane_cp2_ParamLimits

0x833f,	// (0x0005d399) indicator_pane_cp2

0x8482,	// (0x0005d4dc) navi_pane_srt_ParamLimits

0x8482,	// (0x0005d4dc) navi_pane_srt

0x84a6,	// (0x0005d500) popup_clock_digital_analogue_window_cp1

0xc135,	// (0x0006118f) indicator_pane_t1

0x3331,	// (0x0005838b) copy_highlight_pane

0x3331,	// (0x0005838b) cursor_graphics_pane

0x3331,	// (0x0005838b) graphic_within_text_pane

0x3331,	// (0x0005838b) link_highlight_pane

0x96d8,	// (0x0005e732) popup_preview_text_window_t5_ParamLimits

0x96d8,	// (0x0005e732) popup_preview_text_window_t5

0x339e,	// (0x000583f8) cursor_digital_pane

0x339e,	// (0x000583f8) cursor_primary_pane

0x33af,	// (0x00058409) cursor_primary_small_pane

0x33b7,	// (0x00058411) cursor_secondary_pane

0x33bf,	// (0x00058419) cursor_title_pane

0x339e,	// (0x000583f8) link_highlight_digital_pane

0x33a6,	// (0x00058400) link_highlight_primary_pane

0x33af,	// (0x00058409) link_highlight_primary_small_pane

0x33b7,	// (0x00058411) link_highlight_secondary_pane

0x33bf,	// (0x00058419) link_highlight_title_pane

0x339e,	// (0x000583f8) copy_highlight_digital_pane

0x339e,	// (0x000583f8) copy_highlight_primary_pane

0x33af,	// (0x00058409) copy_highlight_primary_small_pane

0x33b7,	// (0x00058411) copy_highlight_secondary_pane

0x33bf,	// (0x00058419) copy_highlight_title_pane

0x33b7,	// (0x00058411) graphic_text_digital_pane

0x8f57,	// (0x0005dfb1) graphic_text_primary_pane

0x8f60,	// (0x0005dfba) graphic_text_primary_small_pane

0x33af,	// (0x00058409) graphic_text_secondary_pane

0x339e,	// (0x000583f8) graphic_text_title_pane

0x6149,	// (0x0005b1a3) cursor_primary_pane_g1

0x8f49,	// (0x0005dfa3) cursor_text_primary_t1

0x8f31,	// (0x0005df8b) cursor_primary_small_pane_g1

0x8f3b,	// (0x0005df95) cursor_text_primary_small_t1

0x8f19,	// (0x0005df73) cursor_primary_small_pane_g1_copy1

0x8f23,	// (0x0005df7d) cursor_text_primary_small_t1_copy1

0x8f01,	// (0x0005df5b) cursor_text_title_t1

0x8f0f,	// (0x0005df69) cursor_title_pane_g1

0x6149,	// (0x0005b1a3) cursor_digital_pane_g1

0x33c7,	// (0x00058421) cursor_text_digital_t1

0x33d5,	// (0x0005842f) link_highlight_primary_pane_g1

0x8eaa,	// (0x0005df04) link_highlight_primary_pane_t1

0x33d5,	// (0x0005842f) link_highlight_primary_small_pane_g1

0x33dd,	// (0x00058437) link_highlight_primary_small_pane_t1

0x33ec,	// (0x00058446) link_highlight_secondary_pane_g1

0x33f4,	// (0x0005844e) link_highlight_secondary_pane_t1

0x8e1e,	// (0x0005de78) link_highlight_title_pane_g1

0x8e26,	// (0x0005de80) link_highlight_title_pane_t1

0x8e07,	// (0x0005de61) link_highlight_digital_pane_g1

0x8e0f,	// (0x0005de69) link_highlight_digital_pane_t1

0x8ccf,	// (0x0005dd29) copy_highlight_primary_pane_g1

0x8ce6,	// (0x0005dd40) copy_highlight_primary_pane_t1

0x8ccf,	// (0x0005dd29) copy_highlight_primary_small_pane_g1

0x8cd7,	// (0x0005dd31) copy_highlight_primary_small_pane_t1

0x3403,	// (0x0005845d) copy_highlight_secondary_pane_g1

0x340b,	// (0x00058465) copy_highlight_secondary_pane_t1

0x8cb8,	// (0x0005dd12) copy_highlight_title_pane_g1

0x8cc0,	// (0x0005dd1a) copy_highlight_title_pane_t1

0x8ccf,	// (0x0005dd29) copy_highlight_digital_pane_g1

0xa15f,	// (0x0005f1b9) copy_highlight_digital_pane_t1

0xa0b3,	// (0x0005f10d) graphic_text_primary_pane_g1

0xa143,	// (0x0005f19d) graphic_text_primary_pane_t1

0xa151,	// (0x0005f1ab) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x00064a2d) graphic_text_primary_pane_t

0xa11f,	// (0x0005f179) graphic_text_primary_small_pane_g1

0xa127,	// (0x0005f181) graphic_text_primary_small_pane_t1

0xa135,	// (0x0005f18f) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x00064a28) graphic_text_primary_small_pane_t

0xa0fb,	// (0x0005f155) graphic_text_secondary_pane_g1

0xa103,	// (0x0005f15d) graphic_text_secondary_pane_t1

0xa111,	// (0x0005f16b) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x00064a23) graphic_text_secondary_pane_t

0xa0d7,	// (0x0005f131) graphic_text_title_pane_g1

0xa0df,	// (0x0005f139) graphic_text_title_pane_t1

0xa0ed,	// (0x0005f147) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x00064a1e) graphic_text_title_pane_t

0xa0b3,	// (0x0005f10d) graphic_text_digital_pane_g1

0xa0bb,	// (0x0005f115) graphic_text_digital_pane_t1

0xa0c9,	// (0x0005f123) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x00064a19) graphic_text_digital_pane_t

0xc0f1,	// (0x0006114b) navi_icon_pane_srt_ParamLimits

0xc0f1,	// (0x0006114b) navi_icon_pane_srt

0xc097,	// (0x000610f1) navi_midp_pane_srt

0xc097,	// (0x000610f1) navi_navi_pane_srt

0xc0f1,	// (0x0006114b) navi_text_pane_srt_ParamLimits

0xc0f1,	// (0x0006114b) navi_text_pane_srt

0xa07e,	// (0x0005f0d8) navi_navi_icon_text_pane_srt

0xa086,	// (0x0005f0e0) navi_navi_pane_srt_g1_ParamLimits

0xa086,	// (0x0005f0e0) navi_navi_pane_srt_g1

0xa098,	// (0x0005f0f2) navi_navi_pane_srt_g2_ParamLimits

0xa098,	// (0x0005f0f2) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x00064a14) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x00064a14) navi_navi_pane_srt_g

0xa0aa,	// (0x0005f104) navi_navi_tabs_pane_srt

0xa07e,	// (0x0005f0d8) navi_navi_text_pane_srt

0xa07e,	// (0x0005f0d8) navi_navi_volume_pane_srt

0xa06f,	// (0x0005f0c9) navi_navi_text_pane_srt_t1

0x6ae9,	// (0x0005bb43) navi_navi_volume_pane_srt_g1

0x6af1,	// (0x0005bb4b) volume_small_pane_srt_ParamLimits

0x6af1,	// (0x0005bb4b) volume_small_pane_srt

0x6153,	// (0x0005b1ad) volume_small_pane_srt_g1_ParamLimits

0x6153,	// (0x0005b1ad) volume_small_pane_srt_g1

0x6163,	// (0x0005b1bd) volume_small_pane_srt_g2_ParamLimits

0x6163,	// (0x0005b1bd) volume_small_pane_srt_g2

0x6174,	// (0x0005b1ce) volume_small_pane_srt_g3_ParamLimits

0x6174,	// (0x0005b1ce) volume_small_pane_srt_g3

0x6185,	// (0x0005b1df) volume_small_pane_srt_g4_ParamLimits

0x6185,	// (0x0005b1df) volume_small_pane_srt_g4

0x6196,	// (0x0005b1f0) volume_small_pane_srt_g5_ParamLimits

0x6196,	// (0x0005b1f0) volume_small_pane_srt_g5

0x61a7,	// (0x0005b201) volume_small_pane_srt_g6_ParamLimits

0x61a7,	// (0x0005b201) volume_small_pane_srt_g6

0x61b8,	// (0x0005b212) volume_small_pane_srt_g7_ParamLimits

0x61b8,	// (0x0005b212) volume_small_pane_srt_g7

0x61c9,	// (0x0005b223) volume_small_pane_srt_g8_ParamLimits

0x61c9,	// (0x0005b223) volume_small_pane_srt_g8

0x61da,	// (0x0005b234) volume_small_pane_srt_g9_ParamLimits

0x61da,	// (0x0005b234) volume_small_pane_srt_g9

0x61eb,	// (0x0005b245) volume_small_pane_srt_g10_ParamLimits

0x61eb,	// (0x0005b245) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x000647bc) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x000647bc) volume_small_pane_srt_g

0xc38f,	// (0x000613e9) query_popup_data_pane_cp2

0xa055,	// (0x0005f0af) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa055,	// (0x0005f0af) navi_navi_icon_text_pane_srt_t1

0x8f57,	// (0x0005dfb1) navi_tabs_2_long_pane_srt

0x8f57,	// (0x0005dfb1) navi_tabs_2_pane_srt

0x8f57,	// (0x0005dfb1) navi_tabs_3_long_pane_srt

0x8f57,	// (0x0005dfb1) navi_tabs_3_pane_srt

0x8f57,	// (0x0005dfb1) navi_tabs_4_pane_srt

0x6ac9,	// (0x0005bb23) tabs_2_active_pane_srt_ParamLimits

0x6ac9,	// (0x0005bb23) tabs_2_active_pane_srt

0x6ad9,	// (0x0005bb33) tabs_2_passive_pane_srt_ParamLimits

0x6ad9,	// (0x0005bb33) tabs_2_passive_pane_srt

0x6498,	// (0x0005b4f2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6498,	// (0x0005b4f2) bg_passive_tab_pane_cp1_srt

0xa021,	// (0x0005f07b) bg_passive_tab_pane_g1_cp1_srt

0xf36e,	// (0x000643c8) bg_passive_tab_pane_g2_cp1_srt

0xa02a,	// (0x0005f084) bg_passive_tab_pane_g3_cp1_srt

0xc0f1,	// (0x0006114b) bg_active_tab_pane_cp1_srt_ParamLimits

0xc0f1,	// (0x0006114b) bg_active_tab_pane_cp1_srt

0xa033,	// (0x0005f08d) tabs_2_active_pane_srt_g1

0xa03b,	// (0x0005f095) tabs_2_active_pane_srt_t1_ParamLimits

0xa03b,	// (0x0005f095) tabs_2_active_pane_srt_t1

0xa021,	// (0x0005f07b) bg_active_tab_pane_g1_cp1_srt

0xf36e,	// (0x000643c8) bg_active_tab_pane_g2_cp1_srt

0xa02a,	// (0x0005f084) bg_active_tab_pane_g3_cp1_srt

0x6a96,	// (0x0005baf0) tabs_3_active_pane_srt_ParamLimits

0x6a96,	// (0x0005baf0) tabs_3_active_pane_srt

0x6aa7,	// (0x0005bb01) tabs_3_passive_pane_cp_srt_ParamLimits

0x6aa7,	// (0x0005bb01) tabs_3_passive_pane_cp_srt

0x6ab8,	// (0x0005bb12) tabs_3_passive_pane_srt_ParamLimits

0x6ab8,	// (0x0005bb12) tabs_3_passive_pane_srt

0x6498,	// (0x0005b4f2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6498,	// (0x0005b4f2) bg_passive_tab_pane_cp2_srt

0x3423,	// (0x0005847d) bg_passive_tab_pane_g1_cp2_srt

0xf36e,	// (0x000643c8) bg_passive_tab_pane_g2_cp2_srt

0x341a,	// (0x00058474) bg_passive_tab_pane_g3_cp2_srt

0xc0f1,	// (0x0006114b) bg_active_tab_pane_cp2_srt_ParamLimits

0xc0f1,	// (0x0006114b) bg_active_tab_pane_cp2_srt

0xa007,	// (0x0005f061) tabs_3_active_pane_srt_g1

0xa00f,	// (0x0005f069) tabs_3_active_pane_srt_t1_ParamLimits

0xa00f,	// (0x0005f069) tabs_3_active_pane_srt_t1

0x3423,	// (0x0005847d) bg_active_tab_pane_g1_cp2_srt

0xf36e,	// (0x000643c8) bg_active_tab_pane_g2_cp2_srt

0x341a,	// (0x00058474) bg_active_tab_pane_g3_cp2_srt

0x6a4e,	// (0x0005baa8) tabs_4_active_pane_srt_ParamLimits

0x6a4e,	// (0x0005baa8) tabs_4_active_pane_srt

0x6a60,	// (0x0005baba) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6a60,	// (0x0005baba) tabs_4_passive_pane_cp2_srt

0x6426,	// (0x0005b480) aid_size_cell_toolbar

0x596e,	// (0x0005a9c8) main_idle_act_pane_ParamLimits

0x7d4f,	// (0x0005cda9) popup_large_graphic_colour_window_ParamLimits

0x80f6,	// (0x0005d150) popup_toolbar_window_ParamLimits

0x80f6,	// (0x0005d150) popup_toolbar_window

0x9c68,	// (0x0005ecc2) list_single_graphic_2heading_pane_ParamLimits

0x9c68,	// (0x0005ecc2) list_single_graphic_2heading_pane

0xefcc,	// (0x00064026) aid_size_cell_apps_grid_lsc_pane

0xefde,	// (0x00064038) aid_size_cell_apps_grid_prt_pane

0x6498,	// (0x0005b4f2) bg_wml_button_pane_cp1_ParamLimits

0x6498,	// (0x0005b4f2) bg_wml_button_pane_cp1

0x894f,	// (0x0005d9a9) form_midp_field_text_pane_t1_ParamLimits

0x873b,	// (0x0005d795) input_focus_pane_cp050_ParamLimits

0x897a,	// (0x0005d9d4) list_midp_form_text_pane_ParamLimits

0x892c,	// (0x0005d986) input_focus_pane_cp051_ParamLimits

0x8940,	// (0x0005d99a) list_midp_choice_pane_ParamLimits

0x87f4,	// (0x0005d84e) list_single_2graphic_pane_cp3_ParamLimits

0x87f4,	// (0x0005d84e) list_single_2graphic_pane_cp3

0x880d,	// (0x0005d867) list_single_midp_graphic_pane_ParamLimits

0x880d,	// (0x0005d867) list_single_midp_graphic_pane

0x4a58,	// (0x00059ab2) list_single_graphic_2heading_pane_g1_ParamLimits

0x4a58,	// (0x00059ab2) list_single_graphic_2heading_pane_g1

0x4a64,	// (0x00059abe) list_single_graphic_2heading_pane_g4_ParamLimits

0x4a64,	// (0x00059abe) list_single_graphic_2heading_pane_g4

0x4a70,	// (0x00059aca) list_single_graphic_2heading_pane_g5_ParamLimits

0x4a70,	// (0x00059aca) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0006480f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0006480f) list_single_graphic_2heading_pane_g

0x4a7c,	// (0x00059ad6) list_single_graphic_2heading_pane_t1_ParamLimits

0x4a7c,	// (0x00059ad6) list_single_graphic_2heading_pane_t1

0x4a90,	// (0x00059aea) list_single_graphic_2heading_pane_t2_ParamLimits

0x4a90,	// (0x00059aea) list_single_graphic_2heading_pane_t2

0x4aac,	// (0x00059b06) list_single_graphic_2heading_pane_t3_ParamLimits

0x4aac,	// (0x00059b06) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00064816) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00064816) list_single_graphic_2heading_pane_t

0x8605,	// (0x0005d65f) bg_popup_sub_pane_cp2

0x862f,	// (0x0005d689) grid_toobar_pane

0x65c6,	// (0x0005b620) cell_toolbar_pane_ParamLimits

0x65c6,	// (0x0005b620) cell_toolbar_pane

0x866b,	// (0x0005d6c5) cell_toolbar_pane_g1_ParamLimits

0x866b,	// (0x0005d6c5) cell_toolbar_pane_g1

0x867f,	// (0x0005d6d9) cell_toolbar_pane_g2_ParamLimits

0x867f,	// (0x0005d6d9) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00064824) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00064824) cell_toolbar_pane_g

0x86a1,	// (0x0005d6fb) grid_highlight_pane_cp2_ParamLimits

0x86a1,	// (0x0005d6fb) grid_highlight_pane_cp2

0x86bb,	// (0x0005d715) toolbar_button_pane

0x86c7,	// (0x0005d721) toolbar_button_pane_g1

0x86cf,	// (0x0005d729) toolbar_button_pane_g2

0x86d7,	// (0x0005d731) toolbar_button_pane_g3

0x86df,	// (0x0005d739) toolbar_button_pane_g4

0x86e7,	// (0x0005d741) toolbar_button_pane_g5

0x86ef,	// (0x0005d749) toolbar_button_pane_g6

0x86f7,	// (0x0005d751) toolbar_button_pane_g7

0x86ff,	// (0x0005d759) toolbar_button_pane_g8

0x8707,	// (0x0005d761) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00064829) toolbar_button_pane_g

0x660a,	// (0x0005b664) list_single_2graphic_pane_g1_cp3_ParamLimits

0x660a,	// (0x0005b664) list_single_2graphic_pane_g1_cp3

0x6616,	// (0x0005b670) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6616,	// (0x0005b670) list_single_2graphic_pane_g2_cp3

0x6627,	// (0x0005b681) list_single_2graphic_pane_g3_cp3

0x662f,	// (0x0005b689) list_single_2graphic_pane_g4_cp3_ParamLimits

0x662f,	// (0x0005b689) list_single_2graphic_pane_g4_cp3

0x663b,	// (0x0005b695) list_single_2graphic_pane_t1_cp3_ParamLimits

0x663b,	// (0x0005b695) list_single_2graphic_pane_t1_cp3

0x6656,	// (0x0005b6b0) list_single_midp_graphic_pane_g2_ParamLimits

0x6656,	// (0x0005b6b0) list_single_midp_graphic_pane_g2

0x3494,	// (0x000584ee) aid_zoom_text_primary

0x349c,	// (0x000584f6) aid_zoom_text_secondary

0x624a,	// (0x0005b2a4) status_small_pane_g7_ParamLimits

0x624a,	// (0x0005b2a4) status_small_pane_g7

0x626d,	// (0x0005b2c7) status_small_pane_t1_ParamLimits

0x4ef6,	// (0x00059f50) title_pane_g2

0x0003,

0xf54e,	// (0x000645a8) title_pane_g

0x514b,	// (0x0005a1a5) aid_size_cell_colour_1_pane_ParamLimits

0x514b,	// (0x0005a1a5) aid_size_cell_colour_1_pane

0x515f,	// (0x0005a1b9) aid_size_cell_colour_2_pane_ParamLimits

0x515f,	// (0x0005a1b9) aid_size_cell_colour_2_pane

0x5173,	// (0x0005a1cd) aid_size_cell_colour_3_pane_ParamLimits

0x5173,	// (0x0005a1cd) aid_size_cell_colour_3_pane

0x5187,	// (0x0005a1e1) aid_size_cell_colour_4_pane_ParamLimits

0x5187,	// (0x0005a1e1) aid_size_cell_colour_4_pane

0x59c8,	// (0x0005aa22) title_pane_stacon_g1_ParamLimits

0x59c8,	// (0x0005aa22) title_pane_stacon_g1

0x8d3d,	// (0x0005dd97) popup_note_wait_window_g3_ParamLimits

0x8d3d,	// (0x0005dd97) popup_note_wait_window_g3

0x8db4,	// (0x0005de0e) popup_note_wait_window_t5_ParamLimits

0x8db4,	// (0x0005de0e) popup_note_wait_window_t5

0xc097,	// (0x000610f1) main_feb_china_hwr_fs_writing_pane

0x6528,	// (0x0005b582) popup_feb_china_hwr_fs_window_ParamLimits

0x6528,	// (0x0005b582) popup_feb_china_hwr_fs_window

0x6690,	// (0x0005b6ea) aid_size_cell_hwr_fs_ParamLimits

0x6690,	// (0x0005b6ea) aid_size_cell_hwr_fs

0x873b,	// (0x0005d795) bg_popup_sub_pane_cp3_ParamLimits

0x873b,	// (0x0005d795) bg_popup_sub_pane_cp3

0x66a5,	// (0x0005b6ff) grid_hwr_fs_pane_ParamLimits

0x66a5,	// (0x0005b6ff) grid_hwr_fs_pane

0x66bd,	// (0x0005b717) linegrid_hwr_fs_pane_ParamLimits

0x66bd,	// (0x0005b717) linegrid_hwr_fs_pane

0x66cd,	// (0x0005b727) cell_hwr_fs_pane_ParamLimits

0x66cd,	// (0x0005b727) cell_hwr_fs_pane

0x8747,	// (0x0005d7a1) linegrid_hwr_fs_pane_g1_ParamLimits

0x8747,	// (0x0005d7a1) linegrid_hwr_fs_pane_g1

0x8753,	// (0x0005d7ad) linegrid_hwr_fs_pane_g2_ParamLimits

0x8753,	// (0x0005d7ad) linegrid_hwr_fs_pane_g2

0x8765,	// (0x0005d7bf) linegrid_hwr_fs_pane_g3_ParamLimits

0x8765,	// (0x0005d7bf) linegrid_hwr_fs_pane_g3

0x66f1,	// (0x0005b74b) linegrid_hwr_fs_pane_g4_ParamLimits

0x66f1,	// (0x0005b74b) linegrid_hwr_fs_pane_g4

0x670f,	// (0x0005b769) linegrid_hwr_fs_pane_g5_ParamLimits

0x670f,	// (0x0005b769) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00064854) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00064854) linegrid_hwr_fs_pane_g

0x8771,	// (0x0005d7cb) cell_hwr_fs_pane_g1_ParamLimits

0x8771,	// (0x0005d7cb) cell_hwr_fs_pane_g1

0x853c,	// (0x0005d596) cell_hwr_fs_pane_g2_ParamLimits

0x853c,	// (0x0005d596) cell_hwr_fs_pane_g2

0x8787,	// (0x0005d7e1) cell_hwr_fs_pane_g3_ParamLimits

0x8787,	// (0x0005d7e1) cell_hwr_fs_pane_g3

0x8794,	// (0x0005d7ee) cell_hwr_fs_pane_g4_ParamLimits

0x8794,	// (0x0005d7ee) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x0006485f) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x0006485f) cell_hwr_fs_pane_g

0x6725,	// (0x0005b77f) cell_hwr_fs_pane_t1

0xc097,	// (0x000610f1) grid_highlight_pane_cp6

0xc097,	// (0x000610f1) main_idle_act2_pane

0xeddb,	// (0x00063e35) aid_inside_area_popup_secondary

0x93ed,	// (0x0005e447) aid_inside_area_window_primary_ParamLimits

0x93ed,	// (0x0005e447) aid_inside_area_window_primary

0xa16e,	// (0x0005f1c8) ai2_news_ticker_pane

0xa176,	// (0x0005f1d0) aid_size_cell_ai1_link_ParamLimits

0xa176,	// (0x0005f1d0) aid_size_cell_ai1_link

0xa190,	// (0x0005f1ea) popup_ai2_data_window_ParamLimits

0xa190,	// (0x0005f1ea) popup_ai2_data_window

0xa1ae,	// (0x0005f208) popup_ai2_link_window_ParamLimits

0xa1ae,	// (0x0005f208) popup_ai2_link_window

0x873b,	// (0x0005d795) bg_popup_sub_pane_cp4_ParamLimits

0x873b,	// (0x0005d795) bg_popup_sub_pane_cp4

0xa1c4,	// (0x0005f21e) grid_ai2_link_pane_ParamLimits

0xa1c4,	// (0x0005f21e) grid_ai2_link_pane

0xa1db,	// (0x0005f235) popup_ai2_link_window_g1_ParamLimits

0xa1db,	// (0x0005f235) popup_ai2_link_window_g1

0xa1e7,	// (0x0005f241) popup_ai2_link_window_g2_ParamLimits

0xa1e7,	// (0x0005f241) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x00064a32) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x00064a32) popup_ai2_link_window_g

0xa1f8,	// (0x0005f252) ai2_mp_button_pane

0xa200,	// (0x0005f25a) ai2_mp_volume_pane

0x892c,	// (0x0005d986) bg_popup_sub_pane_cp5_ParamLimits

0x892c,	// (0x0005d986) bg_popup_sub_pane_cp5

0xa208,	// (0x0005f262) heading_ai2_gene_pane_ParamLimits

0xa208,	// (0x0005f262) heading_ai2_gene_pane

0xa214,	// (0x0005f26e) list_ai2_gene_pane_ParamLimits

0xa214,	// (0x0005f26e) list_ai2_gene_pane

0xa25c,	// (0x0005f2b6) cell_ai2_link_pane_ParamLimits

0xa25c,	// (0x0005f2b6) cell_ai2_link_pane

0xa272,	// (0x0005f2cc) cell_ai2_link_pane_g1

0xc097,	// (0x000610f1) grid_highlight_pane_cp7

0x6b06,	// (0x0005bb60) ai2_mp_volume_pane_g1

0xa345,	// (0x0005f39f) ai2_mp_volume_pane_g2

0xa2ba,	// (0x0005f314) list_ai2_gene_pane_t1

0xa34d,	// (0x0005f3a7) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00064a4b) ai2_mp_volume_pane_g

0x6b0e,	// (0x0005bb68) volume_small_pane_cp3

0xa355,	// (0x0005f3af) aid_size_cell_ai2_button

0xa35d,	// (0x0005f3b7) grid_ai2_button_pane

0xa366,	// (0x0005f3c0) cell_ai2_button_pane_ParamLimits

0xa366,	// (0x0005f3c0) cell_ai2_button_pane

0xc08d,	// (0x000610e7) cell_ai2_button_pane_g1

0xc097,	// (0x000610f1) grid_highlight_pane_cp8

0xa305,	// (0x0005f35f) ai2_gene_pane_t1_ParamLimits

0xa305,	// (0x0005f35f) ai2_gene_pane_t1

0x641c,	// (0x0005b476) aid_height_parent_landscape

0x9a7f,	// (0x0005ead9) aid_height_set_list

0x9a90,	// (0x0005eaea) aid_size_parent

0x9f8f,	// (0x0005efe9) aid_size_cell_graphic_pane_ParamLimits

0xa224,	// (0x0005f27e) popup_ai2_data_window_g1_ParamLimits

0xa224,	// (0x0005f27e) popup_ai2_data_window_g1

0xa230,	// (0x0005f28a) ai2_news_ticker_pane_g1

0xa238,	// (0x0005f292) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00064a37) ai2_news_ticker_pane_g

0xa240,	// (0x0005f29a) ai2_news_ticker_pane_t1

0xa24e,	// (0x0005f2a8) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00064a3c) ai2_news_ticker_pane_t

0xa27b,	// (0x0005f2d5) heading_ai2_gene_pane_g1

0xa283,	// (0x0005f2dd) heading_ai2_gene_pane_t1_ParamLimits

0xa283,	// (0x0005f2dd) heading_ai2_gene_pane_t1

0xa298,	// (0x0005f2f2) list_highlight_pane_cp6

0xa2a0,	// (0x0005f2fa) ai2_gene_pane_ParamLimits

0xa2a0,	// (0x0005f2fa) ai2_gene_pane

0xa2c8,	// (0x0005f322) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00064a41) list_ai2_gene_pane_t

0xa2d6,	// (0x0005f330) list_highlight_pane_cp8_ParamLimits

0xa2d6,	// (0x0005f330) list_highlight_pane_cp8

0xa2e7,	// (0x0005f341) ai2_gene_pane_g1_ParamLimits

0xa2e7,	// (0x0005f341) ai2_gene_pane_g1

0xa2f9,	// (0x0005f353) ai2_gene_pane_g2_ParamLimits

0xa2f9,	// (0x0005f353) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x00064a46) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x00064a46) ai2_gene_pane_g

0xc6aa,	// (0x00061704) scroll_pane_cp12

0x63d3,	// (0x0005b42d) control_pane_t3_ParamLimits

0x63d3,	// (0x0005b42d) control_pane_t3

0x625e,	// (0x0005b2b8) status_small_pane_g8_ParamLimits

0x625e,	// (0x0005b2b8) status_small_pane_g8

0x7d14,	// (0x0005cd6e) popup_find_window_ParamLimits

0x7f3f,	// (0x0005cf99) popup_note_image_window_ParamLimits

0x3518,	// (0x00058572) list_double2_graphic_pane_vc_g1_ParamLimits

0x3518,	// (0x00058572) list_double2_graphic_pane_vc_g1

0x3130,	// (0x0005818a) list_double2_graphic_pane_vc_g2_ParamLimits

0x3130,	// (0x0005818a) list_double2_graphic_pane_vc_g2

0x65f6,	// (0x0005b650) list_double2_graphic_pane_vc_g3_ParamLimits

0x65f6,	// (0x0005b650) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0006481d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0006481d) list_double2_graphic_pane_vc_g

0x3524,	// (0x0005857e) list_double2_graphic_pane_vc_t1_ParamLimits

0x3524,	// (0x0005857e) list_double2_graphic_pane_vc_t1

0x3130,	// (0x0005818a) list_single_heading_pane_vc_g1_ParamLimits

0x3130,	// (0x0005818a) list_single_heading_pane_vc_g1

0x65f6,	// (0x0005b650) list_single_heading_pane_vc_g2_ParamLimits

0x65f6,	// (0x0005b650) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0006483e) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0006483e) list_single_heading_pane_vc_g

0x353a,	// (0x00058594) list_single_heading_pane_vc_t1_ParamLimits

0x353a,	// (0x00058594) list_single_heading_pane_vc_t1

0x3552,	// (0x000585ac) list_single_heading_pane_vc_t2_ParamLimits

0x3552,	// (0x000585ac) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x00064843) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x00064843) list_single_heading_pane_vc_t

0x6678,	// (0x0005b6d2) list_setting_number_pane_vc_g1_ParamLimits

0x6678,	// (0x0005b6d2) list_setting_number_pane_vc_g1

0x6684,	// (0x0005b6de) list_setting_number_pane_vc_g2_ParamLimits

0x6684,	// (0x0005b6de) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00064848) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00064848) list_setting_number_pane_vc_g

0x3564,	// (0x000585be) list_setting_number_pane_vc_t1_ParamLimits

0x3564,	// (0x000585be) list_setting_number_pane_vc_t1

0x3578,	// (0x000585d2) list_setting_number_pane_vc_t2_ParamLimits

0x3578,	// (0x000585d2) list_setting_number_pane_vc_t2

0x3594,	// (0x000585ee) list_setting_number_pane_vc_t3_ParamLimits

0x3594,	// (0x000585ee) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x0006484d) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x0006484d) list_setting_number_pane_vc_t

0x35c2,	// (0x0005861c) set_value_pane_vc_ParamLimits

0x35c2,	// (0x0005861c) set_value_pane_vc

0x9c68,	// (0x0005ecc2) list_double2_graphic_pane_vc_ParamLimits

0x9c68,	// (0x0005ecc2) list_double2_graphic_pane_vc

0x9c68,	// (0x0005ecc2) list_double2_large_graphic_pane_vc_ParamLimits

0x9c68,	// (0x0005ecc2) list_double2_large_graphic_pane_vc

0x9c68,	// (0x0005ecc2) list_double2_pane_vc_ParamLimits

0x9c68,	// (0x0005ecc2) list_double2_pane_vc

0x9c68,	// (0x0005ecc2) list_double_graphic_heading_pane_vc_ParamLimits

0x9c68,	// (0x0005ecc2) list_double_graphic_heading_pane_vc

0x9c68,	// (0x0005ecc2) list_double_graphic_pane_vc_ParamLimits

0x9c68,	// (0x0005ecc2) list_double_graphic_pane_vc

0x9c68,	// (0x0005ecc2) list_double_heading_pane_vc_ParamLimits

0x9c68,	// (0x0005ecc2) list_double_heading_pane_vc

0x9c7c,	// (0x0005ecd6) list_double_large_graphic_pane_vc_ParamLimits

0x9c7c,	// (0x0005ecd6) list_double_large_graphic_pane_vc

0x9c68,	// (0x0005ecc2) list_double_number_pane_vc_ParamLimits

0x9c68,	// (0x0005ecc2) list_double_number_pane_vc

0x9c68,	// (0x0005ecc2) list_double_pane_vc_ParamLimits

0x9c68,	// (0x0005ecc2) list_double_pane_vc

0x9c68,	// (0x0005ecc2) list_double_time_pane_vc_ParamLimits

0x9c68,	// (0x0005ecc2) list_double_time_pane_vc

0x9c68,	// (0x0005ecc2) list_setting_number_pane_vc_ParamLimits

0x9c68,	// (0x0005ecc2) list_setting_number_pane_vc

0x9c68,	// (0x0005ecc2) list_setting_pane_vc_ParamLimits

0x9c68,	// (0x0005ecc2) list_setting_pane_vc

0x9c68,	// (0x0005ecc2) list_single_graphic_heading_pane_vc_ParamLimits

0x9c68,	// (0x0005ecc2) list_single_graphic_heading_pane_vc

0x9c68,	// (0x0005ecc2) list_single_heading_pane_vc_ParamLimits

0x9c68,	// (0x0005ecc2) list_single_heading_pane_vc

0x9c9e,	// (0x0005ecf8) list_single_number_heading_pane_vc_ParamLimits

0x9c9e,	// (0x0005ecf8) list_single_number_heading_pane_vc

0x3518,	// (0x00058572) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3518,	// (0x00058572) list_double_graphic_heading_pane_vc_g1

0x9d16,	// (0x0005ed70) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9d16,	// (0x0005ed70) list_double_graphic_heading_pane_vc_g2

0x9d22,	// (0x0005ed7c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9d22,	// (0x0005ed7c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f8,	// (0x00064a52) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f8,	// (0x00064a52) list_double_graphic_heading_pane_vc_g

0x35f9,	// (0x00058653) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x35f9,	// (0x00058653) list_double_graphic_heading_pane_vc_t1

0x360f,	// (0x00058669) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x360f,	// (0x00058669) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x00064a59) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x00064a59) list_double_graphic_heading_pane_vc_t

0x6678,	// (0x0005b6d2) list_setting_pane_vc_g1_ParamLimits

0x6678,	// (0x0005b6d2) list_setting_pane_vc_g1

0x6684,	// (0x0005b6de) list_setting_pane_vc_g2_ParamLimits

0x6684,	// (0x0005b6de) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00064848) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00064848) list_setting_pane_vc_g

0x362d,	// (0x00058687) list_setting_pane_vc_t1_ParamLimits

0x362d,	// (0x00058687) list_setting_pane_vc_t1

0x3649,	// (0x000586a3) list_setting_pane_vc_t2_ParamLimits

0x3649,	// (0x000586a3) list_setting_pane_vc_t2

0x0001,

0xfa2d,	// (0x00064a87) list_setting_pane_vc_t_ParamLimits

0xfa2d,	// (0x00064a87) list_setting_pane_vc_t

0x35c2,	// (0x0005861c) set_value_pane_cp_vc_ParamLimits

0x35c2,	// (0x0005861c) set_value_pane_cp_vc

0x3130,	// (0x0005818a) list_single_number_heading_pane_vc_g1_ParamLimits

0x3130,	// (0x0005818a) list_single_number_heading_pane_vc_g1

0x65f6,	// (0x0005b650) list_single_number_heading_pane_vc_g2_ParamLimits

0x65f6,	// (0x0005b650) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0006483e) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0006483e) list_single_number_heading_pane_vc_g

0x353a,	// (0x00058594) list_single_number_heading_pane_vc_t1_ParamLimits

0x353a,	// (0x00058594) list_single_number_heading_pane_vc_t1

0x3665,	// (0x000586bf) list_single_number_heading_pane_vc_t2_ParamLimits

0x3665,	// (0x000586bf) list_single_number_heading_pane_vc_t2

0x3152,	// (0x000581ac) list_single_number_heading_pane_vc_t3_ParamLimits

0x3152,	// (0x000581ac) list_single_number_heading_pane_vc_t3

0x0002,

0xfa32,	// (0x00064a8c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x00064a8c) list_single_number_heading_pane_vc_t

0x3518,	// (0x00058572) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3518,	// (0x00058572) list_single_graphic_heading_pane_vc_g1

0x3130,	// (0x0005818a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3130,	// (0x0005818a) list_single_graphic_heading_pane_vc_g4

0x65f6,	// (0x0005b650) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x65f6,	// (0x0005b650) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0006481d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0006481d) list_single_graphic_heading_pane_vc_g

0x353a,	// (0x00058594) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x353a,	// (0x00058594) list_single_graphic_heading_pane_vc_t1

0x3677,	// (0x000586d1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3677,	// (0x000586d1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa39,	// (0x00064a93) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x00064a93) list_single_graphic_heading_pane_vc_t

0x3130,	// (0x0005818a) list_double2_pane_vc_g1_ParamLimits

0x3130,	// (0x0005818a) list_double2_pane_vc_g1

0x65f6,	// (0x0005b650) list_double2_pane_vc_g2_ParamLimits

0x65f6,	// (0x0005b650) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x0006483e) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x0006483e) list_double2_pane_vc_g

0x35e3,	// (0x0005863d) list_double2_pane_vc_t1_ParamLimits

0x35e3,	// (0x0005863d) list_double2_pane_vc_t1

0x9d2e,	// (0x0005ed88) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9d2e,	// (0x0005ed88) list_double2_large_graphic_pane_vc_g1

0x3130,	// (0x0005818a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3130,	// (0x0005818a) list_double2_large_graphic_pane_vc_g2

0x65f6,	// (0x0005b650) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x65f6,	// (0x0005b650) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3e,	// (0x00064a98) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00064a98) list_double2_large_graphic_pane_vc_g

0x313c,	// (0x00058196) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x313c,	// (0x00058196) list_double2_large_graphic_pane_vc_t1

0x9d3a,	// (0x0005ed94) list_double_time_pane_vc_g1_ParamLimits

0x9d3a,	// (0x0005ed94) list_double_time_pane_vc_g1

0x9d46,	// (0x0005eda0) list_double_time_pane_vc_g2_ParamLimits

0x9d46,	// (0x0005eda0) list_double_time_pane_vc_g2

0x0001,

0xfa45,	// (0x00064a9f) list_double_time_pane_vc_g_ParamLimits

0xfa45,	// (0x00064a9f) list_double_time_pane_vc_g

0x3689,	// (0x000586e3) list_double_time_pane_vc_t1_ParamLimits

0x3689,	// (0x000586e3) list_double_time_pane_vc_t1

0x36b3,	// (0x0005870d) list_double_time_pane_vc_t2_ParamLimits

0x36b3,	// (0x0005870d) list_double_time_pane_vc_t2

0x36fc,	// (0x00058756) list_double_time_pane_vc_t3_ParamLimits

0x36fc,	// (0x00058756) list_double_time_pane_vc_t3

0x370e,	// (0x00058768) list_double_time_pane_vc_t4_ParamLimits

0x370e,	// (0x00058768) list_double_time_pane_vc_t4

0x0003,

0xfa4a,	// (0x00064aa4) list_double_time_pane_vc_t_ParamLimits

0xfa4a,	// (0x00064aa4) list_double_time_pane_vc_t

0x3130,	// (0x0005818a) list_double_pane_vc_g1_ParamLimits

0x3130,	// (0x0005818a) list_double_pane_vc_g1

0x65f6,	// (0x0005b650) list_double_pane_vc_g2_ParamLimits

0x65f6,	// (0x0005b650) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x0006483e) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x0006483e) list_double_pane_vc_g

0x3733,	// (0x0005878d) list_double_pane_vc_t1_ParamLimits

0x3733,	// (0x0005878d) list_double_pane_vc_t1

0x3747,	// (0x000587a1) list_double_pane_vc_t2_ParamLimits

0x3747,	// (0x000587a1) list_double_pane_vc_t2

0x0001,

0xfa53,	// (0x00064aad) list_double_pane_vc_t_ParamLimits

0xfa53,	// (0x00064aad) list_double_pane_vc_t

0x3130,	// (0x0005818a) list_double_number_pane_vc_g1_ParamLimits

0x3130,	// (0x0005818a) list_double_number_pane_vc_g1

0x65f6,	// (0x0005b650) list_double_number_pane_vc_g2_ParamLimits

0x65f6,	// (0x0005b650) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0006483e) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0006483e) list_double_number_pane_vc_g

0x375d,	// (0x000587b7) list_double_number_pane_vc_t1_ParamLimits

0x375d,	// (0x000587b7) list_double_number_pane_vc_t1

0x3771,	// (0x000587cb) list_double_number_pane_vc_t2_ParamLimits

0x3771,	// (0x000587cb) list_double_number_pane_vc_t2

0x3785,	// (0x000587df) list_double_number_pane_vc_t3_ParamLimits

0x3785,	// (0x000587df) list_double_number_pane_vc_t3

0x0002,

0xfa58,	// (0x00064ab2) list_double_number_pane_vc_t_ParamLimits

0xfa58,	// (0x00064ab2) list_double_number_pane_vc_t

0x9d52,	// (0x0005edac) list_double_large_graphic_pane_vc_g1_ParamLimits

0x9d52,	// (0x0005edac) list_double_large_graphic_pane_vc_g1

0x9d7a,	// (0x0005edd4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9d7a,	// (0x0005edd4) list_double_large_graphic_pane_vc_g2

0x9d8e,	// (0x0005ede8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9d8e,	// (0x0005ede8) list_double_large_graphic_pane_vc_g3

0x379b,	// (0x000587f5) list_double_large_graphic_pane_vc_g4_ParamLimits

0x379b,	// (0x000587f5) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5f,	// (0x00064ab9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00064ab9) list_double_large_graphic_pane_vc_g

0x37ab,	// (0x00058805) list_double_large_graphic_pane_vc_t1_ParamLimits

0x37ab,	// (0x00058805) list_double_large_graphic_pane_vc_t1

0x37cd,	// (0x00058827) list_double_large_graphic_pane_vc_t2_ParamLimits

0x37cd,	// (0x00058827) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x00064ac2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x00064ac2) list_double_large_graphic_pane_vc_t

0x9d16,	// (0x0005ed70) list_double_heading_pane_vc_g1_ParamLimits

0x9d16,	// (0x0005ed70) list_double_heading_pane_vc_g1

0x9d22,	// (0x0005ed7c) list_double_heading_pane_vc_g2_ParamLimits

0x9d22,	// (0x0005ed7c) list_double_heading_pane_vc_g2

0x0001,

0xfa6d,	// (0x00064ac7) list_double_heading_pane_vc_g_ParamLimits

0xfa6d,	// (0x00064ac7) list_double_heading_pane_vc_g

0x37ed,	// (0x00058847) list_double_heading_pane_vc_t1_ParamLimits

0x37ed,	// (0x00058847) list_double_heading_pane_vc_t1

0x353a,	// (0x00058594) list_double_heading_pane_vc_t2_ParamLimits

0x353a,	// (0x00058594) list_double_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x00064acc) list_double_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x00064acc) list_double_heading_pane_vc_t

0x37ff,	// (0x00058859) list_double_graphic_pane_vc_g1_ParamLimits

0x37ff,	// (0x00058859) list_double_graphic_pane_vc_g1

0x9d9d,	// (0x0005edf7) list_double_graphic_pane_vc_g2_ParamLimits

0x9d9d,	// (0x0005edf7) list_double_graphic_pane_vc_g2

0x3130,	// (0x0005818a) list_double_graphic_pane_vc_g3_ParamLimits

0x3130,	// (0x0005818a) list_double_graphic_pane_vc_g3

0x0003,

0xfa77,	// (0x00064ad1) list_double_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x00064ad1) list_double_graphic_pane_vc_g

0x380b,	// (0x00058865) list_double_graphic_pane_vc_t1_ParamLimits

0x380b,	// (0x00058865) list_double_graphic_pane_vc_t1

0x3835,	// (0x0005888f) list_double_graphic_pane_vc_t2_ParamLimits

0x3835,	// (0x0005888f) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x00064ada) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x00064ada) list_double_graphic_pane_vc_t

0x4af8,	// (0x00059b52) aid_size_cell_fastswap

0x4b00,	// (0x00059b5a) aid_size_cell_touch_ParamLimits

0x4b00,	// (0x00059b5a) aid_size_cell_touch

0x4d6b,	// (0x00059dc5) popup_fast_swap_wide_window_ParamLimits

0x4d6b,	// (0x00059dc5) popup_fast_swap_wide_window

0x4e89,	// (0x00059ee3) touch_pane_ParamLimits

0x4e89,	// (0x00059ee3) touch_pane

0xecb4,	// (0x00063d0e) button_value_adjust_pane_cp2

0x317e,	// (0x000581d8) button_value_adjust_pane_cp4

0x3186,	// (0x000581e0) form_field_data_pane_cp2

0x57ca,	// (0x0005a824) form_field_data_wide_pane_cp2

0xf01a,	// (0x00064074) bg_scroll_pane_ParamLimits

0x5bb0,	// (0x0005ac0a) scroll_handle_pane_ParamLimits

0x5bc4,	// (0x0005ac1e) scroll_sc2_down_pane_ParamLimits

0x5bc4,	// (0x0005ac1e) scroll_sc2_down_pane

0xf04b,	// (0x000640a5) scroll_sc2_up_pane_ParamLimits

0xf04b,	// (0x000640a5) scroll_sc2_up_pane

0xaa7f,	// (0x0005fad9) grid_wheel_folder_pane_g1_ParamLimits

0xaa7f,	// (0x0005fad9) grid_wheel_folder_pane_g1

0x5f56,	// (0x0005afb0) clock_nsta_pane_cp2_ParamLimits

0x5f56,	// (0x0005afb0) clock_nsta_pane_cp2

0x596e,	// (0x0005a9c8) listscroll_midp_pane_ParamLimits

0x6092,	// (0x0005b0ec) midp_canvas_pane

0x6414,	// (0x0005b46e) nsta_clock_indic_pane

0x6462,	// (0x0005b4bc) listscroll_form_pane_vc

0x6486,	// (0x0005b4e0) listscroll_set_pane_vc_ParamLimits

0x6486,	// (0x0005b4e0) listscroll_set_pane_vc

0x8290,	// (0x0005d2ea) clock_nsta_pane

0x830d,	// (0x0005d367) indicator_nsta_pane

0x8605,	// (0x0005d65f) bg_popup_sub_pane_cp2_ParamLimits

0x8619,	// (0x0005d673) find_pane_cp2_ParamLimits

0x8619,	// (0x0005d673) find_pane_cp2

0x862f,	// (0x0005d689) grid_toobar_pane_ParamLimits

0x870f,	// (0x0005d769) list_form_gen_pane_vc_ParamLimits

0x870f,	// (0x0005d769) list_form_gen_pane_vc

0x8725,	// (0x0005d77f) scroll_pane_cp8_vc_ParamLimits

0x8725,	// (0x0005d77f) scroll_pane_cp8_vc

0x87a1,	// (0x0005d7fb) data_form_wide_pane_vc_ParamLimits

0x87a1,	// (0x0005d7fb) data_form_wide_pane_vc

0x87ad,	// (0x0005d807) form_field_data_wide_pane_vc_g1

0x87b5,	// (0x0005d80f) form_field_data_wide_pane_vc_t1_ParamLimits

0x87b5,	// (0x0005d80f) form_field_data_wide_pane_vc_t1

0xecc8,	// (0x00063d22) input_focus_pane_cp6_vc_ParamLimits

0xecc8,	// (0x00063d22) input_focus_pane_cp6_vc

0x8ab7,	// (0x0005db11) list_midp_pane_ParamLimits

0x8ac3,	// (0x0005db1d) scroll_pane_cp16_ParamLimits

0x8ac3,	// (0x0005db1d) scroll_pane_cp16

0x8b11,	// (0x0005db6b) button_value_adjust_pane_ParamLimits

0x8b11,	// (0x0005db6b) button_value_adjust_pane

0x9aa2,	// (0x0005eafc) button_value_adjust_pane_cp6_ParamLimits

0x9aa2,	// (0x0005eafc) button_value_adjust_pane_cp6

0x9bf0,	// (0x0005ec4a) settings_code_pane_cp_ParamLimits

0x9bf0,	// (0x0005ec4a) settings_code_pane_cp

0xc08d,	// (0x000610e7) cell_touch_pane_g1

0xc08d,	// (0x000610e7) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00064762) cell_touch_pane_g

0xa378,	// (0x0005f3d2) cell_touch_pane_cp_ParamLimits

0xa378,	// (0x0005f3d2) cell_touch_pane_cp

0xa388,	// (0x0005f3e2) cell_touch_pane_ParamLimits

0xa388,	// (0x0005f3e2) cell_touch_pane

0xc08d,	// (0x000610e7) scroll_sc2_down_pane_g1

0xc08d,	// (0x000610e7) scroll_sc2_up_pane_g1

0xc097,	// (0x000610f1) bg_set_opt_pane_cp4_vc

0xa399,	// (0x0005f3f3) list_set_graphic_pane_vc_g1_ParamLimits

0xa399,	// (0x0005f3f3) list_set_graphic_pane_vc_g1

0x16a5,	// (0x000566ff) list_set_graphic_pane_vc_g2_ParamLimits

0x16a5,	// (0x000566ff) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x00064a5e) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x00064a5e) list_set_graphic_pane_vc_g

0xa3a5,	// (0x0005f3ff) text_primary_small_cp13_vc_ParamLimits

0xa3a5,	// (0x0005f3ff) text_primary_small_cp13_vc

0xa3bd,	// (0x0005f417) list_set_graphic_pane_vc_ParamLimits

0xa3bd,	// (0x0005f417) list_set_graphic_pane_vc

0xc097,	// (0x000610f1) input_focus_pane_cp2_vc

0xc08d,	// (0x000610e7) setting_code_pane_vc_g1

0xc108,	// (0x00061162) setting_code_pane_vc_t1

0xa3d2,	// (0x0005f42c) set_text_pane_vc_t1_ParamLimits

0xa3d2,	// (0x0005f42c) set_text_pane_vc_t1

0xc097,	// (0x000610f1) input_focus_pane_cp1_vc

0xa3f0,	// (0x0005f44a) list_set_text_pane_vc

0xc08d,	// (0x000610e7) setting_text_pane_vc_g1

0xc097,	// (0x000610f1) bg_set_opt_pane_cp2_vc

0xc0ff,	// (0x00061159) setting_slider_graphic_pane_vc_g1

0xa3fa,	// (0x0005f454) setting_slider_graphic_pane_vc_t1

0xa40c,	// (0x0005f466) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x00064a63) setting_slider_graphic_pane_vc_t

0xa41e,	// (0x0005f478) slider_set_pane_cp_vc

0xa428,	// (0x0005f482) slider_set_pane_vc_g1

0xa431,	// (0x0005f48b) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x00064a68) slider_set_pane_vc_g

0xed23,	// (0x00063d7d) set_opt_bg_pane_g1_copy1

0xed2b,	// (0x00063d85) set_opt_bg_pane_g2_copy1

0xa45d,	// (0x0005f4b7) set_opt_bg_pane_g3_copy1

0xed3b,	// (0x00063d95) set_opt_bg_pane_g4_copy1

0xed43,	// (0x00063d9d) set_opt_bg_pane_g5_copy1

0xed4b,	// (0x00063da5) set_opt_bg_pane_g6_copy1

0xa467,	// (0x0005f4c1) set_opt_bg_pane_g7_copy1

0xa471,	// (0x0005f4cb) set_opt_bg_pane_g8_copy1

0xa47b,	// (0x0005f4d5) set_opt_bg_pane_g9_copy1

0xc097,	// (0x000610f1) bg_set_opt_pane_cp_vc

0xa485,	// (0x0005f4df) setting_slider_pane_vc_t1

0xa494,	// (0x0005f4ee) setting_slider_pane_vc_t2

0xa4a6,	// (0x0005f500) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x00064a77) setting_slider_pane_vc_t

0xa4b8,	// (0x0005f512) slider_set_pane_vc

0x6752,	// (0x0005b7ac) volume_set_pane_vc_g1

0x675b,	// (0x0005b7b5) volume_set_pane_vc_g2

0x6764,	// (0x0005b7be) volume_set_pane_vc_g3

0x676d,	// (0x0005b7c7) volume_set_pane_vc_g4

0x6776,	// (0x0005b7d0) volume_set_pane_vc_g5

0x677f,	// (0x0005b7d9) volume_set_pane_vc_g6

0x6788,	// (0x0005b7e2) volume_set_pane_vc_g7

0x6791,	// (0x0005b7eb) volume_set_pane_vc_g8

0x679a,	// (0x0005b7f4) volume_set_pane_vc_g9

0x67a3,	// (0x0005b7fd) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x00064915) volume_set_pane_vc_g

0xa4c2,	// (0x0005f51c) volume_set_pane_vc

0xa4cc,	// (0x0005f526) button_value_adjust_pane_cp1_vc

0xa4d6,	// (0x0005f530) list_highlight_pane_cp2_vc

0xa4df,	// (0x0005f539) list_set_pane_vc_ParamLimits

0xa4df,	// (0x0005f539) list_set_pane_vc

0xa54f,	// (0x0005f5a9) main_pane_set_vc_t1_ParamLimits

0xa54f,	// (0x0005f5a9) main_pane_set_vc_t1

0xa564,	// (0x0005f5be) main_pane_set_vc_t2_ParamLimits

0xa564,	// (0x0005f5be) main_pane_set_vc_t2

0xa576,	// (0x0005f5d0) main_pane_set_vc_t3_ParamLimits

0xa576,	// (0x0005f5d0) main_pane_set_vc_t3

0xa58a,	// (0x0005f5e4) main_pane_set_vc_t4_ParamLimits

0xa58a,	// (0x0005f5e4) main_pane_set_vc_t4

0x0003,

0xfa24,	// (0x00064a7e) main_pane_set_vc_t_ParamLimits

0xfa24,	// (0x00064a7e) main_pane_set_vc_t

0xa59e,	// (0x0005f5f8) setting_code_pane_vc_ParamLimits

0xa59e,	// (0x0005f5f8) setting_code_pane_vc

0xa5af,	// (0x0005f609) setting_slider_graphic_pane_vc

0xa5af,	// (0x0005f609) setting_slider_pane_vc

0xa5af,	// (0x0005f609) setting_text_pane_vc

0xa5af,	// (0x0005f609) setting_volume_pane_vc

0xa5b9,	// (0x0005f613) scroll_pane_cp121_vc

0xeca2,	// (0x00063cfc) set_content_pane_vc

0xa5c1,	// (0x0005f61b) button_value_adjust_pane_g1

0xa5ca,	// (0x0005f624) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x00064adf) button_value_adjust_pane_g

0xa5d3,	// (0x0005f62d) form_field_slider_wide_pane_vc_t1_ParamLimits

0xa5d3,	// (0x0005f62d) form_field_slider_wide_pane_vc_t1

0xa5e5,	// (0x0005f63f) form_field_slider_wide_pane_vc_t2_ParamLimits

0xa5e5,	// (0x0005f63f) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8a,	// (0x00064ae4) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x00064ae4) form_field_slider_wide_pane_vc_t

0xc224,	// (0x0006127e) input_focus_pane_cp10_vc_ParamLimits

0xc224,	// (0x0006127e) input_focus_pane_cp10_vc

0xa611,	// (0x0005f66b) slider_cont_pane_cp1_vc_ParamLimits

0xa611,	// (0x0005f66b) slider_cont_pane_cp1_vc

0xa623,	// (0x0005f67d) slider_form_pane_g1_cp2

0xa431,	// (0x0005f48b) slider_form_pane_g2_cp2

0xa650,	// (0x0005f6aa) form_field_slider_pane_vc_t3

0xa65e,	// (0x0005f6b8) form_field_slider_pane_vc_t4

0xa66c,	// (0x0005f6c6) slider_form_pane_vc_ParamLimits

0xa66c,	// (0x0005f6c6) slider_form_pane_vc

0xa679,	// (0x0005f6d3) form_field_slider_pane_vc_t1_ParamLimits

0xa679,	// (0x0005f6d3) form_field_slider_pane_vc_t1

0xa5e5,	// (0x0005f63f) form_field_slider_pane_vc_t2_ParamLimits

0xa5e5,	// (0x0005f63f) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x00064af6) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x00064af6) form_field_slider_pane_vc_t

0xc224,	// (0x0006127e) input_focus_pane_cp9_vc_ParamLimits

0xc224,	// (0x0006127e) input_focus_pane_cp9_vc

0xa68f,	// (0x0005f6e9) slider_cont_pane_vc_ParamLimits

0xa68f,	// (0x0005f6e9) slider_cont_pane_vc

0xa6a3,	// (0x0005f6fd) list_form_graphic_pane_cp_vc_ParamLimits

0xa6a3,	// (0x0005f6fd) list_form_graphic_pane_cp_vc

0x87ad,	// (0x0005d807) form_field_popup_wide_pane_vc_g1

0xa6b8,	// (0x0005f712) form_field_popup_wide_pane_vc_t1_ParamLimits

0xa6b8,	// (0x0005f712) form_field_popup_wide_pane_vc_t1

0xecc8,	// (0x00063d22) input_focus_pane_cp8_vc_ParamLimits

0xecc8,	// (0x00063d22) input_focus_pane_cp8_vc

0xa6fd,	// (0x0005f757) list_form_wide_pane_vc_ParamLimits

0xa6fd,	// (0x0005f757) list_form_wide_pane_vc

0xa709,	// (0x0005f763) list_form_graphic_pane_vc_g1

0xa711,	// (0x0005f76b) list_form_graphic_pane_vc_t1_ParamLimits

0xa711,	// (0x0005f76b) list_form_graphic_pane_vc_t1

0xc0f1,	// (0x0006114b) list_highlight_pane_cp5_vc_ParamLimits

0xc0f1,	// (0x0006114b) list_highlight_pane_cp5_vc

0xa72d,	// (0x0005f787) list_form_graphic_pane_vc_ParamLimits

0xa72d,	// (0x0005f787) list_form_graphic_pane_vc

0x87ad,	// (0x0005d807) form_field_popup_pane_vc_g1

0xa743,	// (0x0005f79d) form_field_popup_pane_vc_t1_ParamLimits

0xa743,	// (0x0005f79d) form_field_popup_pane_vc_t1

0xecc8,	// (0x00063d22) input_focus_pane_cp7_vc_ParamLimits

0xecc8,	// (0x00063d22) input_focus_pane_cp7_vc

0xa75a,	// (0x0005f7b4) list_form_pane_vc_ParamLimits

0xa75a,	// (0x0005f7b4) list_form_pane_vc

0xa766,	// (0x0005f7c0) data_form_pane_vc_t1_ParamLimits

0xa766,	// (0x0005f7c0) data_form_pane_vc_t1

0xed23,	// (0x00063d7d) input_focus_pane_vc_g1

0xed2b,	// (0x00063d85) input_focus_pane_vc_g2

0xed33,	// (0x00063d8d) input_focus_pane_vc_g3

0xed3b,	// (0x00063d95) input_focus_pane_vc_g4

0xed43,	// (0x00063d9d) input_focus_pane_vc_g5

0xed4b,	// (0x00063da5) input_focus_pane_vc_g6

0xed53,	// (0x00063dad) input_focus_pane_vc_g7

0xed5b,	// (0x00063db5) input_focus_pane_vc_g8

0xed63,	// (0x00063dbd) input_focus_pane_vc_g9

0xc08d,	// (0x000610e7) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x000646eb) input_focus_pane_vc_g

0x87a1,	// (0x0005d7fb) data_form_pane_vc_ParamLimits

0x87a1,	// (0x0005d7fb) data_form_pane_vc

0x87ad,	// (0x0005d807) form_field_data_pane_vc_g1

0xa783,	// (0x0005f7dd) form_field_data_pane_vc_t1_ParamLimits

0xa783,	// (0x0005f7dd) form_field_data_pane_vc_t1

0xecc8,	// (0x00063d22) input_focus_pane_vc_ParamLimits

0xecc8,	// (0x00063d22) input_focus_pane_vc

0xa79d,	// (0x0005f7f7) button_value_adjust_pane_cp3_vc

0xa7a5,	// (0x0005f7ff) button_value_adjust_pane_cp5_vc

0xa7ad,	// (0x0005f807) form_field_data_pane_vc_ParamLimits

0xa7ad,	// (0x0005f807) form_field_data_pane_vc

0xa7c8,	// (0x0005f822) form_field_data_pane_vc_cp2

0xa7d0,	// (0x0005f82a) form_field_data_wide_pane_vc_ParamLimits

0xa7d0,	// (0x0005f82a) form_field_data_wide_pane_vc

0xa7ea,	// (0x0005f844) form_field_data_wide_pane_vc_cp2

0xa7f2,	// (0x0005f84c) form_field_popup_pane_vc_ParamLimits

0xa7f2,	// (0x0005f84c) form_field_popup_pane_vc

0xa80d,	// (0x0005f867) form_field_popup_wide_pane_vc_ParamLimits

0xa80d,	// (0x0005f867) form_field_popup_wide_pane_vc

0xa827,	// (0x0005f881) form_field_slider_pane_vc_ParamLimits

0xa827,	// (0x0005f881) form_field_slider_pane_vc

0xa83a,	// (0x0005f894) form_field_slider_wide_pane_vc_ParamLimits

0xa83a,	// (0x0005f894) form_field_slider_wide_pane_vc

0xa84d,	// (0x0005f8a7) grid_touch_1_pane_ParamLimits

0xa84d,	// (0x0005f8a7) grid_touch_1_pane

0xa859,	// (0x0005f8b3) grid_touch_2_pane_ParamLimits

0xa859,	// (0x0005f8b3) grid_touch_2_pane

0x3486,	// (0x000584e0) touch_pane_g1_ParamLimits

0x3486,	// (0x000584e0) touch_pane_g1

0xa873,	// (0x0005f8cd) cell_app_pane_cp_wide_ParamLimits

0xa873,	// (0x0005f8cd) cell_app_pane_cp_wide

0xa884,	// (0x0005f8de) grid_popup_fast_wide_pane_ParamLimits

0xa884,	// (0x0005f8de) grid_popup_fast_wide_pane

0xa898,	// (0x0005f8f2) scroll_pane_cp19_ParamLimits

0xa898,	// (0x0005f8f2) scroll_pane_cp19

0xc097,	// (0x000610f1) bg_popup_window_pane_cp20

0xa8ac,	// (0x0005f906) listscroll_popup_fast_wide_pane

0xc0f1,	// (0x0006114b) grid_indicator_nsta_pane

0xa8b4,	// (0x0005f90e) clock_nsta_pane_g1

0xa8bd,	// (0x0005f917) clock_nsta_pane_t1

0xa8d9,	// (0x0005f933) cell_indicator_nsta_pane_ParamLimits

0xa8d9,	// (0x0005f933) cell_indicator_nsta_pane

0xa90b,	// (0x0005f965) cell_indicator_nsta_pane_g1

0xa919,	// (0x0005f973) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x00064b07) cell_indicator_nsta_pane_g

0xa92f,	// (0x0005f989) clock_nsta_pane_cp

0xa937,	// (0x0005f991) indicator_nsta_pane_cp

0xa940,	// (0x0005f99a) nsta_clock_indic_pane_g1

0xc12d,	// (0x00061187) grid_indicator_pane

0xf13d,	// (0x00064197) scroll_pane_cp29

0x5ea2,	// (0x0005aefc) indicator_nsta_pane_cp2_ParamLimits

0x5ea2,	// (0x0005aefc) indicator_nsta_pane_cp2

0xc0f1,	// (0x0006114b) main_apps_wheel_pane

0x8994,	// (0x0005d9ee) form_midp_field_text_pane_ParamLimits

0x8ae3,	// (0x0005db3d) scroll_bar_cp050_ParamLimits

0xa9a9,	// (0x0005fa03) cell_indicator_pane_ParamLimits

0xa9a9,	// (0x0005fa03) cell_indicator_pane

0xa9c1,	// (0x0005fa1b) cell_indicator_pane_g1

0xa9cb,	// (0x0005fa25) grid_wheel_folder_pane_ParamLimits

0xa9cb,	// (0x0005fa25) grid_wheel_folder_pane

0xa9df,	// (0x0005fa39) list_wheel_apps_pane_ParamLimits

0xa9df,	// (0x0005fa39) list_wheel_apps_pane

0xa9f2,	// (0x0005fa4c) main_apps_wheel_pane_g1_ParamLimits

0xa9f2,	// (0x0005fa4c) main_apps_wheel_pane_g1

0xaa0e,	// (0x0005fa68) main_apps_wheel_pane_g2_ParamLimits

0xaa0e,	// (0x0005fa68) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x00064b23) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x00064b23) main_apps_wheel_pane_g

0xaa2a,	// (0x0005fa84) main_apps_wheel_pane_t1_ParamLimits

0xaa2a,	// (0x0005fa84) main_apps_wheel_pane_t1

0xaa53,	// (0x0005faad) list_wheel_apps_pane_g1

0xaa5b,	// (0x0005fab5) list_wheel_apps_pane_g2

0xaa63,	// (0x0005fabd) list_wheel_apps_pane_g3

0xaa6b,	// (0x0005fac5) list_wheel_apps_pane_g4

0xaa75,	// (0x0005facf) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x00064b28) list_wheel_apps_pane_g

0xf4bd,	// (0x00064517) navi_icon_text_pane

0x81bd,	// (0x0005d217) aid_fill_nsta

0xaa96,	// (0x0005faf0) navi_icon_text_pane_g1

0xaaa2,	// (0x0005fafc) navi_icon_text_pane_t1

0x5feb,	// (0x0005b045) list_set_graphic_pane_t1_ParamLimits

0x5feb,	// (0x0005b045) list_set_graphic_pane_t1

0x9234,	// (0x0005e28e) popup_midp_note_alarm_window_t6_ParamLimits

0x9234,	// (0x0005e28e) popup_midp_note_alarm_window_t6

0x9246,	// (0x0005e2a0) popup_midp_note_alarm_window_t7_ParamLimits

0x9246,	// (0x0005e2a0) popup_midp_note_alarm_window_t7

0x9258,	// (0x0005e2b2) popup_midp_note_alarm_window_t8_ParamLimits

0x9258,	// (0x0005e2b2) popup_midp_note_alarm_window_t8

0x926a,	// (0x0005e2c4) popup_midp_note_alarm_window_t9_ParamLimits

0x926a,	// (0x0005e2c4) popup_midp_note_alarm_window_t9

0x927c,	// (0x0005e2d6) popup_midp_note_alarm_window_t10_ParamLimits

0x927c,	// (0x0005e2d6) popup_midp_note_alarm_window_t10

0x928e,	// (0x0005e2e8) popup_midp_note_alarm_window_t11_ParamLimits

0x928e,	// (0x0005e2e8) popup_midp_note_alarm_window_t11

0x92a0,	// (0x0005e2fa) scroll_pane_cp17_ParamLimits

0x92a0,	// (0x0005e2fa) scroll_pane_cp17

0x6752,	// (0x0005b7ac) volume_small_pane_cp_g1

0x6b17,	// (0x0005bb71) volume_small_pane_cp_g2

0x6b20,	// (0x0005bb7a) volume_small_pane_cp_g3

0x6b29,	// (0x0005bb83) volume_small_pane_cp_g4

0x6b32,	// (0x0005bb8c) volume_small_pane_cp_g5

0x6b3b,	// (0x0005bb95) volume_small_pane_cp_g6

0x6b44,	// (0x0005bb9e) volume_small_pane_cp_g7

0x6b4d,	// (0x0005bba7) volume_small_pane_cp_g8

0x6b56,	// (0x0005bbb0) volume_small_pane_cp_g9

0x6b5f,	// (0x0005bbb9) volume_small_pane_cp_g10

0x335d,	// (0x000583b7) midp_ticker_pane_g1_ParamLimits

0x3369,	// (0x000583c3) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x000647b7) midp_ticker_pane_g_ParamLimits

0x6137,	// (0x0005b191) midp_ticker_pane_t1_ParamLimits

0x81d3,	// (0x0005d22d) aid_fill_nsta_2

0x8acf,	// (0x0005db29) list_form2_midp_pane

0x9c37,	// (0x0005ec91) midp_editing_number_pane_ParamLimits

0x9c46,	// (0x0005eca0) midp_ticker_pane_ParamLimits

0xaab4,	// (0x0005fb0e) form2_midp_field_pane

0xaad8,	// (0x0005fb32) scroll_pane_cp51

0xaaf8,	// (0x0005fb52) form2_midp_button_pane_ParamLimits

0xaaf8,	// (0x0005fb52) form2_midp_button_pane

0xab0a,	// (0x0005fb64) form2_midp_content_pane_ParamLimits

0xab0a,	// (0x0005fb64) form2_midp_content_pane

0xab24,	// (0x0005fb7e) form2_midp_field_choice_group_pane

0xab2c,	// (0x0005fb86) form2_midp_field_pane_g1

0xab34,	// (0x0005fb8e) form2_midp_field_pane_g2

0xab3c,	// (0x0005fb96) form2_midp_field_pane_g3

0xab44,	// (0x0005fb9e) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x00064b4d) form2_midp_field_pane_g

0xab4c,	// (0x0005fba6) form2_midp_gauge_slider_pane

0xab54,	// (0x0005fbae) form2_midp_gauge_wait_pane

0xab5c,	// (0x0005fbb6) form2_midp_image_pane_ParamLimits

0xab5c,	// (0x0005fbb6) form2_midp_image_pane

0xab77,	// (0x0005fbd1) form2_midp_label_pane_ParamLimits

0xab77,	// (0x0005fbd1) form2_midp_label_pane

0xab96,	// (0x0005fbf0) form2_midp_label_pane_cp_ParamLimits

0xab96,	// (0x0005fbf0) form2_midp_label_pane_cp

0xabb7,	// (0x0005fc11) form2_midp_string_pane_ParamLimits

0xabb7,	// (0x0005fc11) form2_midp_string_pane

0x3853,	// (0x000588ad) form2_midp_text_pane_ParamLimits

0x3853,	// (0x000588ad) form2_midp_text_pane

0xabc9,	// (0x0005fc23) form2_midp_time_pane

0xabd9,	// (0x0005fc33) input_focus_pane_cp51_ParamLimits

0xabd9,	// (0x0005fc33) input_focus_pane_cp51

0xabf1,	// (0x0005fc4b) form2_midp_label_pane_t1_ParamLimits

0xabf1,	// (0x0005fc4b) form2_midp_label_pane_t1

0x3876,	// (0x000588d0) form2_mdip_text_pane_t1_ParamLimits

0x3876,	// (0x000588d0) form2_mdip_text_pane_t1

0x3895,	// (0x000588ef) form2_midp_time_pane_t1

0xac3f,	// (0x0005fc99) form2_midp_gauge_slider_pane_t1

0xac51,	// (0x0005fcab) form2_midp_gauge_slider_pane_t2

0xac63,	// (0x0005fcbd) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x00064b56) form2_midp_gauge_slider_pane_t

0xac75,	// (0x0005fccf) form2_midp_slider_pane

0xac81,	// (0x0005fcdb) form2_midp_gauge_wait_pane_t1

0xac8f,	// (0x0005fce9) form2_midp_wait_pane_ParamLimits

0xac8f,	// (0x0005fce9) form2_midp_wait_pane

0x87f4,	// (0x0005d84e) list_single_2graphic_pane_cp4_ParamLimits

0x87f4,	// (0x0005d84e) list_single_2graphic_pane_cp4

0xacba,	// (0x0005fd14) list_single_midp_graphic_pane_cp_ParamLimits

0xacba,	// (0x0005fd14) list_single_midp_graphic_pane_cp

0xc097,	// (0x000610f1) list_highlight_pane_cp20

0xacde,	// (0x0005fd38) list_single_2graphic_pane_g1_cp4

0xa27b,	// (0x0005f2d5) list_single_2graphic_pane_g2_cp4

0xace6,	// (0x0005fd40) list_single_2graphic_pane_t1_cp4

0xc0f1,	// (0x0006114b) list_highlight_pane_cp21

0xacf5,	// (0x0005fd4f) list_single_midp_graphic_pane_g4_cp

0xad04,	// (0x0005fd5e) list_single_midp_graphic_pane_t1_cp

0xad19,	// (0x0005fd73) form2_mdip_string_pane_t1_ParamLimits

0xad19,	// (0x0005fd73) form2_mdip_string_pane_t1

0xc097,	// (0x000610f1) bg_wml_button_pane_cp2

0xc08d,	// (0x000610e7) form2_midp_image_pane_g1

0x3c72,	// (0x00058ccc) list_double_large_graphic_pane_g5_ParamLimits

0x3c72,	// (0x00058ccc) list_double_large_graphic_pane_g5

0x596e,	// (0x0005a9c8) midp_form_pane_ParamLimits

0xc0f1,	// (0x0006114b) main_apps_wheel_pane_ParamLimits

0x7f67,	// (0x0005cfc1) popup_preview_window_ParamLimits

0x7f67,	// (0x0005cfc1) popup_preview_window

0x814e,	// (0x0005d1a8) popup_touch_info_window_ParamLimits

0x814e,	// (0x0005d1a8) popup_touch_info_window

0x8170,	// (0x0005d1ca) popup_touch_menu_window_ParamLimits

0x8170,	// (0x0005d1ca) popup_touch_menu_window

0xc083,	// (0x000610dd) bg_popup_sub_pane_cp6

0xadbe,	// (0x0005fe18) list_touch_menu_pane

0xadc6,	// (0x0005fe20) list_single_touch_menu_pane_ParamLimits

0xadc6,	// (0x0005fe20) list_single_touch_menu_pane

0xadde,	// (0x0005fe38) list_single_touch_menu_pane_t1

0xc0f1,	// (0x0006114b) bg_popup_sub_pane_cp7_ParamLimits

0xc0f1,	// (0x0006114b) bg_popup_sub_pane_cp7

0xadec,	// (0x0005fe46) heading_sub_pane

0xadf4,	// (0x0005fe4e) list_touch_info_pane_ParamLimits

0xadf4,	// (0x0005fe4e) list_touch_info_pane

0xae03,	// (0x0005fe5d) list_single_touch_info_pane_ParamLimits

0xae03,	// (0x0005fe5d) list_single_touch_info_pane

0xae15,	// (0x0005fe6f) list_single_touch_info_pane_t1

0xae23,	// (0x0005fe7d) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x00064b64) list_single_touch_info_pane_t

0x3331,	// (0x0005838b) bg_popup_heading_pane_cp

0xae31,	// (0x0005fe8b) heading_sub_pane_t1

0x873b,	// (0x0005d795) bg_popup_preview_window_pane_cp_ParamLimits

0x873b,	// (0x0005d795) bg_popup_preview_window_pane_cp

0xadec,	// (0x0005fe46) heading_preview_pane

0xadf4,	// (0x0005fe4e) list_preview_pane_ParamLimits

0xadf4,	// (0x0005fe4e) list_preview_pane

0xae3f,	// (0x0005fe99) popup_preview_window_g1

0xae03,	// (0x0005fe5d) list_single_preview_pane_ParamLimits

0xae03,	// (0x0005fe5d) list_single_preview_pane

0xae47,	// (0x0005fea1) list_single_preview_pane_g1

0xae4f,	// (0x0005fea9) list_single_preview_pane_t1

0xae15,	// (0x0005fe6f) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x00064b69) list_single_preview_pane_t

0xae5d,	// (0x0005feb7) bg_popup_heading_pane_cp2_ParamLimits

0xae5d,	// (0x0005feb7) bg_popup_heading_pane_cp2

0xae73,	// (0x0005fecd) heading_preview_pane_g1

0xae7b,	// (0x0005fed5) heading_preview_pane_t1_ParamLimits

0xae7b,	// (0x0005fed5) heading_preview_pane_t1

0xc144,	// (0x0006119e) soft_indicator_pane_t1_ParamLimits

0xc687,	// (0x000616e1) scroll_pane_ParamLimits

0xf039,	// (0x00064093) scroll_sc2_left_pane

0xf042,	// (0x0006409c) scroll_sc2_right_pane

0xf061,	// (0x000640bb) scroll_bg_pane_g1_ParamLimits

0xf076,	// (0x000640d0) scroll_bg_pane_g2_ParamLimits

0xf08e,	// (0x000640e8) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00064742) scroll_bg_pane_g_ParamLimits

0xf061,	// (0x000640bb) scroll_handle_pane_g1_ParamLimits

0xf0b0,	// (0x0006410a) scroll_handle_pane_g2_ParamLimits

0xf08e,	// (0x000640e8) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00064749) scroll_handle_pane_g_ParamLimits

0x64c0,	// (0x0005b51a) popup_choice_list_window_ParamLimits

0x64c0,	// (0x0005b51a) popup_choice_list_window

0x8611,	// (0x0005d66b) choice_list_pane

0x8693,	// (0x0005d6ed) cell_toolbar_pane_t1

0x86bb,	// (0x0005d715) toolbar_button_pane_ParamLimits

0x976a,	// (0x0005e7c4) ai_gene_pane_1_t2_ParamLimits

0x976a,	// (0x0005e7c4) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x00064971) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x00064971) ai_gene_pane_1_t

0xae98,	// (0x0005fef2) scroll_sc2_left_pane_g1

0xae98,	// (0x0005fef2) scroll_sc2_right_pane_g1

0x6498,	// (0x0005b4f2) bg_popup_sub_pane_cp10

0xaea2,	// (0x0005fefc) list_choice_list_pane

0xaebb,	// (0x0005ff15) list_single_choice_list_pane_ParamLimits

0xaebb,	// (0x0005ff15) list_single_choice_list_pane

0xaed3,	// (0x0005ff2d) list_single_choice_list_pane_g1

0xee19,	// (0x00063e73) list_single_choice_list_pane_t1_ParamLimits

0xee19,	// (0x00063e73) list_single_choice_list_pane_t1

0xaedb,	// (0x0005ff35) choice_list_pane_g1

0xaee3,	// (0x0005ff3d) choice_list_pane_t1

0xc083,	// (0x000610dd) input_focus_pane_cp11

0xef97,	// (0x00063ff1) title_pane_stacon_g2_ParamLimits

0xef97,	// (0x00063ff1) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00064728) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00064728) title_pane_stacon_g

0x3331,	// (0x0005838b) cursor_press_pane

0x657a,	// (0x0005b5d4) popup_fep_hwr_window_ParamLimits

0x657a,	// (0x0005b5d4) popup_fep_hwr_window

0x7cf2,	// (0x0005cd4c) popup_fep_vkb_window_ParamLimits

0x7cf2,	// (0x0005cd4c) popup_fep_vkb_window

0xaef1,	// (0x0005ff4b) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x00064b92) fep_vkb_side_pane_g_ParamLimits

0x6ba1,	// (0x0005bbfb) fep_hwr_candidate_pane_ParamLimits

0x6ba1,	// (0x0005bbfb) fep_hwr_candidate_pane

0x6bcb,	// (0x0005bc25) fep_hwr_side_pane_ParamLimits

0x6bcb,	// (0x0005bc25) fep_hwr_side_pane

0x6bed,	// (0x0005bc47) fep_hwr_top_pane_ParamLimits

0x6bed,	// (0x0005bc47) fep_hwr_top_pane

0x6c05,	// (0x0005bc5f) fep_hwr_write_pane_ParamLimits

0x6c05,	// (0x0005bc5f) fep_hwr_write_pane

0xfb38,	// (0x00064b92) fep_vkb_side_pane_g

0xaef9,	// (0x0005ff53) fep_hwr_top_pane_g1

0xaf0b,	// (0x0005ff65) fep_hwr_top_pane_g2

0x6c3f,	// (0x0005bc99) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x00064b6e) fep_hwr_top_pane_g

0x6c54,	// (0x0005bcae) fep_hwr_top_text_pane

0xf1aa,	// (0x00064204) fep_hwr_top_text_pane_g1

0xaf41,	// (0x0005ff9b) fep_hwr_top_text_pane_t1

0x6d5e,	// (0x0005bdb8) fep_hwr_candidate_pane_g1

0xb18c,	// (0x000601e6) fep_vkb_keypad_pane_g3_ParamLimits

0xb18c,	// (0x000601e6) fep_vkb_keypad_pane_g3

0xb1b8,	// (0x00060212) fep_vkb_keypad_pane_g4_ParamLimits

0xb1b8,	// (0x00060212) fep_vkb_keypad_pane_g4

0xb22f,	// (0x00060289) fep_vkb_bottom_pane_g2_ParamLimits

0xb22f,	// (0x00060289) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00064b99) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00064b99) fep_vkb_bottom_pane_g

0xae98,	// (0x0005fef2) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x00064ba3) cell_vkb_side_pane_g

0xb2ba,	// (0x00060314) cell_vkb_side_pane_t1

0xb2c8,	// (0x00060322) cell_vkb_side_pane_t1_copy1

0xae98,	// (0x0005fef2) bg_fep_vkb_candidate_pane_g2

0xb40c,	// (0x00060466) cell_vkb_candidate_pane_ParamLimits

0xaf4f,	// (0x0005ffa9) aid_size_cell_vkb_ParamLimits

0xaf4f,	// (0x0005ffa9) aid_size_cell_vkb

0xb40c,	// (0x00060466) cell_vkb_candidate_pane

0x6d85,	// (0x0005bddf) bg_popup_fep_shadow_pane_g1

0xafe1,	// (0x0006003b) fep_vkb_bottom_pane_ParamLimits

0xafe1,	// (0x0006003b) fep_vkb_bottom_pane

0xb01e,	// (0x00060078) fep_vkb_candidate_pane_ParamLimits

0xb01e,	// (0x00060078) fep_vkb_candidate_pane

0xb03a,	// (0x00060094) fep_vkb_keypad_pane_ParamLimits

0xb03a,	// (0x00060094) fep_vkb_keypad_pane

0xb06d,	// (0x000600c7) fep_vkb_side_pane_ParamLimits

0xb06d,	// (0x000600c7) fep_vkb_side_pane

0xb0a9,	// (0x00060103) fep_vkb_top_pane_ParamLimits

0xb0a9,	// (0x00060103) fep_vkb_top_pane

0xb0e5,	// (0x0006013f) fep_vkb_top_pane_g1_ParamLimits

0xb0e5,	// (0x0006013f) fep_vkb_top_pane_g1

0xb0f4,	// (0x0006014e) fep_vkb_top_pane_g2_ParamLimits

0xb0f4,	// (0x0006014e) fep_vkb_top_pane_g2

0xb103,	// (0x0006015d) fep_vkb_top_pane_g3_ParamLimits

0xb103,	// (0x0006015d) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00064b89) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00064b89) fep_vkb_top_pane_g

0xb121,	// (0x0006017b) fep_vkb_top_text_pane_ParamLimits

0xb121,	// (0x0006017b) fep_vkb_top_text_pane

0xb132,	// (0x0006018c) fep_vkb_side_pane_g1_ParamLimits

0xb132,	// (0x0006018c) fep_vkb_side_pane_g1

0xb17b,	// (0x000601d5) grid_vkb_side_pane_ParamLimits

0xb17b,	// (0x000601d5) grid_vkb_side_pane

0x6d8d,	// (0x0005bde7) bg_popup_fep_shadow_pane_g2

0x6d96,	// (0x0005bdf0) bg_popup_fep_shadow_pane_g3

0x6d9e,	// (0x0005bdf8) bg_popup_fep_shadow_pane_g4

0x6da7,	// (0x0005be01) bg_popup_fep_shadow_pane_g5

0x6db1,	// (0x0005be0b) bg_popup_fep_shadow_pane_g6

0x6db9,	// (0x0005be13) bg_popup_fep_shadow_pane_g7

0xed3b,	// (0x00063d95) bg_popup_fep_shadow_pane_g8

0xb1da,	// (0x00060234) grid_vkb_keypad_number_pane_ParamLimits

0xb1da,	// (0x00060234) grid_vkb_keypad_number_pane

0xb1ee,	// (0x00060248) grid_vkb_keypad_pane_ParamLimits

0xb1ee,	// (0x00060248) grid_vkb_keypad_pane

0xb214,	// (0x0006026e) fep_vkb_bottom_pane_g1_ParamLimits

0xb214,	// (0x0006026e) fep_vkb_bottom_pane_g1

0xb23d,	// (0x00060297) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb23d,	// (0x00060297) grid_vkb_keypad_bottom_left_pane

0xb252,	// (0x000602ac) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb252,	// (0x000602ac) grid_vkb_keypad_bottom_right_pane

0xb267,	// (0x000602c1) fep_vkb_top_text_pane_g1

0xb282,	// (0x000602dc) fep_vkb_top_text_pane_t1

0xb297,	// (0x000602f1) cell_vkb_side_pane_ParamLimits

0xb297,	// (0x000602f1) cell_vkb_side_pane

0xae98,	// (0x0005fef2) cell_vkb_side_pane_g1

0xb2d6,	// (0x00060330) cell_vkb_keypad_pane_ParamLimits

0xb2d6,	// (0x00060330) cell_vkb_keypad_pane

0xb363,	// (0x000603bd) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x00064bb6) bg_popup_fep_shadow_pane_g

0x6dcb,	// (0x0005be25) cell_hwr_side_pane_g1

0x6dcb,	// (0x0005be25) cell_hwr_side_pane_g2

0xb36d,	// (0x000603c7) cell_vkb_keypad_pane_t1

0xb37b,	// (0x000603d5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb37b,	// (0x000603d5) cell_vkb_keypad_bottom_left_pane

0xb398,	// (0x000603f2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb398,	// (0x000603f2) cell_vkb_keypad_bottom_right_pane

0xae98,	// (0x0005fef2) cell_vkb_keypad_bottom_left_pane_g1

0xae98,	// (0x0005fef2) cell_vkb_keypad_bottom_right_pane_g1

0xb3d1,	// (0x0006042b) cell_vkb_keypad_number_pane_ParamLimits

0xb3d1,	// (0x0006042b) cell_vkb_keypad_number_pane

0xb3f0,	// (0x0006044a) cell_vkb_keypad_number_pane_g1

0xb3fa,	// (0x00060454) cell_vkb_keypad_number_pane_g2

0xb403,	// (0x0006045d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00064ba8) cell_vkb_keypad_number_pane_g

0xb36d,	// (0x000603c7) cell_vkb_keypad_number_pane_t1

0xb42d,	// (0x00060487) fep_vkb_candidate_pane_g1

0x0001,

0xfb6f,	// (0x00064bc9) cell_hwr_side_pane_g

0xb446,	// (0x000604a0) cell_hwr_side_pane_t1

0x6dd5,	// (0x0005be2f) cell_hwr_side_pane_t1_copy1

0x6de3,	// (0x0005be3d) cell_hwr_candidate_pane_g1

0x6e12,	// (0x0005be6c) cell_hwr_candidate_pane_t1

0xae98,	// (0x0005fef2) cell_vkb_candidate_pane_g2

0xb48a,	// (0x000604e4) cell_vkb_candidate_pane_t1

0x6b68,	// (0x0005bbc2) bg_popup_fep_shadow_pane_ParamLimits

0x6b68,	// (0x0005bbc2) bg_popup_fep_shadow_pane

0x6c1f,	// (0x0005bc79) bg_fep_hwr_top_pane_g4

0xaf1d,	// (0x0005ff77) bg_hwr_side_pane_g1_ParamLimits

0xaf1d,	// (0x0005ff77) bg_hwr_side_pane_g1

0x6c92,	// (0x0005bcec) cell_hwr_side_pane_ParamLimits

0x6c92,	// (0x0005bcec) cell_hwr_side_pane

0x6ccf,	// (0x0005bd29) fep_hwr_write_pane_g1_ParamLimits

0x6ccf,	// (0x0005bd29) fep_hwr_write_pane_g1

0x6cdc,	// (0x0005bd36) fep_hwr_write_pane_g2_ParamLimits

0x6cdc,	// (0x0005bd36) fep_hwr_write_pane_g2

0x6ce9,	// (0x0005bd43) fep_hwr_write_pane_g3_ParamLimits

0x6ce9,	// (0x0005bd43) fep_hwr_write_pane_g3

0x6cf7,	// (0x0005bd51) fep_hwr_write_pane_g4_ParamLimits

0x6cf7,	// (0x0005bd51) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x00064b75) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x00064b75) fep_hwr_write_pane_g

0x6c1f,	// (0x0005bc79) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6c1f,	// (0x0005bc79) bg_fep_hwr_candidate_pane_g2

0x6d0c,	// (0x0005bd66) cell_hwr_candidate_pane_ParamLimits

0x6d0c,	// (0x0005bd66) cell_hwr_candidate_pane

0x6d5e,	// (0x0005bdb8) fep_hwr_candidate_pane_g1_ParamLimits

0xaf7d,	// (0x0005ffd7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xaf7d,	// (0x0005ffd7) bg_popup_fep_shadow_pane_cp2

0xb113,	// (0x0006016d) fep_vkb_top_pane_g4_ParamLimits

0xb113,	// (0x0006016d) fep_vkb_top_pane_g4

0xb159,	// (0x000601b3) fep_vkb_side_pane_g2_ParamLimits

0xb159,	// (0x000601b3) fep_vkb_side_pane_g2

0x56c6,	// (0x0005a720) list_setting_pane_t4_ParamLimits

0x56c6,	// (0x0005a720) list_setting_pane_t4

0x5762,	// (0x0005a7bc) list_setting_number_pane_t5_ParamLimits

0x5762,	// (0x0005a7bc) list_setting_number_pane_t5

0x5c53,	// (0x0005acad) list_double_heading_pane_cp2_ParamLimits

0x5c53,	// (0x0005acad) list_double_heading_pane_cp2

0xb498,	// (0x000604f2) list_double_heading_pane_g1_cp2_ParamLimits

0xb498,	// (0x000604f2) list_double_heading_pane_g1_cp2

0xb4a4,	// (0x000604fe) list_double_heading_pane_g2_cp2_ParamLimits

0xb4a4,	// (0x000604fe) list_double_heading_pane_g2_cp2

0xb4b8,	// (0x00060512) list_double_heading_pane_t1_cp2_ParamLimits

0xb4b8,	// (0x00060512) list_double_heading_pane_t1_cp2

0xb4ce,	// (0x00060528) list_double_heading_pane_t2_cp2_ParamLimits

0xb4ce,	// (0x00060528) list_double_heading_pane_t2_cp2

0xc07b,	// (0x000610d5) aid_value_unit2

0x4dc9,	// (0x00059e23) popup_preview_fixed_window

0xc232,	// (0x0006128c) bg_popup_preview_window_pane_cp02

0xb4e0,	// (0x0006053a) list_preview_fixed_pane

0xb526,	// (0x00060580) list_empty_pane_fp_ParamLimits

0xb526,	// (0x00060580) list_empty_pane_fp

0xb526,	// (0x00060580) list_single_cale_day_pane_fp_ParamLimits

0xb526,	// (0x00060580) list_single_cale_day_pane_fp

0xb526,	// (0x00060580) list_single_graphic_heading_pane_fp_ParamLimits

0xb526,	// (0x00060580) list_single_graphic_heading_pane_fp

0xb526,	// (0x00060580) list_single_graphic_pane_fp_ParamLimits

0xb526,	// (0x00060580) list_single_graphic_pane_fp

0xb526,	// (0x00060580) list_single_heading_pane_fp_ParamLimits

0xb526,	// (0x00060580) list_single_heading_pane_fp

0xb526,	// (0x00060580) list_single_pane_fp_ParamLimits

0xb526,	// (0x00060580) list_single_pane_fp

0xb53f,	// (0x00060599) list_single_pane_fp_g1_ParamLimits

0xb53f,	// (0x00060599) list_single_pane_fp_g1

0xb498,	// (0x000604f2) list_single_pane_fp_g2_ParamLimits

0xb498,	// (0x000604f2) list_single_pane_fp_g2

0xb4a4,	// (0x000604fe) list_single_pane_fp_g3_ParamLimits

0xb4a4,	// (0x000604fe) list_single_pane_fp_g3

0xb54b,	// (0x000605a5) list_single_pane_fp_g4_ParamLimits

0xb54b,	// (0x000605a5) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x00064bdc) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x00064bdc) list_single_pane_fp_g

0x38a8,	// (0x00058902) list_single_pane_fp_t1_ParamLimits

0x38a8,	// (0x00058902) list_single_pane_fp_t1

0x38bf,	// (0x00058919) list_single_graphic_pane_fp_g1_ParamLimits

0x38bf,	// (0x00058919) list_single_graphic_pane_fp_g1

0xb53f,	// (0x00060599) list_single_graphic_pane_fp_g2_ParamLimits

0xb53f,	// (0x00060599) list_single_graphic_pane_fp_g2

0xb498,	// (0x000604f2) list_single_graphic_pane_fp_g3_ParamLimits

0xb498,	// (0x000604f2) list_single_graphic_pane_fp_g3

0xb4a4,	// (0x000604fe) list_single_graphic_pane_fp_g4_ParamLimits

0xb4a4,	// (0x000604fe) list_single_graphic_pane_fp_g4

0xb54b,	// (0x000605a5) list_single_graphic_pane_fp_g5_ParamLimits

0xb54b,	// (0x000605a5) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x00064be5) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x00064be5) list_single_graphic_pane_fp_g

0x38cb,	// (0x00058925) list_single_graphic_pane_fp_t1_ParamLimits

0x38cb,	// (0x00058925) list_single_graphic_pane_fp_t1

0x38bf,	// (0x00058919) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x38bf,	// (0x00058919) list_single_graphic_heading_pane_fp_g1

0xb53f,	// (0x00060599) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb53f,	// (0x00060599) list_single_graphic_heading_pane_fp_g2

0xb498,	// (0x000604f2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb498,	// (0x000604f2) list_single_graphic_heading_pane_fp_g3

0xb4a4,	// (0x000604fe) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb4a4,	// (0x000604fe) list_single_graphic_heading_pane_fp_g4

0xb54b,	// (0x000605a5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb54b,	// (0x000605a5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x00064be5) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x00064be5) list_single_graphic_heading_pane_fp_g

0x38e1,	// (0x0005893b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x38e1,	// (0x0005893b) list_single_graphic_heading_pane_fp_t1

0x38f7,	// (0x00058951) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x38f7,	// (0x00058951) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x00064bf0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x00064bf0) list_single_graphic_heading_pane_fp_t

0x3909,	// (0x00058963) list_single_cale_day_pane_fp_g1_ParamLimits

0x3909,	// (0x00058963) list_single_cale_day_pane_fp_g1

0xb557,	// (0x000605b1) list_single_cale_day_pane_fp_g2_ParamLimits

0xb557,	// (0x000605b1) list_single_cale_day_pane_fp_g2

0x9dba,	// (0x0005ee14) list_single_cale_day_pane_fp_g3_ParamLimits

0x9dba,	// (0x0005ee14) list_single_cale_day_pane_fp_g3

0x9de2,	// (0x0005ee3c) list_single_cale_day_pane_fp_g4_ParamLimits

0x9de2,	// (0x0005ee3c) list_single_cale_day_pane_fp_g4

0x9e06,	// (0x0005ee60) list_single_cale_day_pane_fp_g5_ParamLimits

0x9e06,	// (0x0005ee60) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x00064bf5) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x00064bf5) list_single_cale_day_pane_fp_g

0x3941,	// (0x0005899b) list_single_cale_day_pane_fp_t1_ParamLimits

0x3941,	// (0x0005899b) list_single_cale_day_pane_fp_t1

0x3967,	// (0x000589c1) list_single_cale_day_pane_fp_t2_ParamLimits

0x3967,	// (0x000589c1) list_single_cale_day_pane_fp_t2

0x3980,	// (0x000589da) list_single_cale_day_pane_fp_t3_ParamLimits

0x3980,	// (0x000589da) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x00064c00) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x00064c00) list_single_cale_day_pane_fp_t

0xb53f,	// (0x00060599) list_empty_pane_fp_g1_ParamLimits

0xb53f,	// (0x00060599) list_empty_pane_fp_g1

0x3999,	// (0x000589f3) list_empty_pane_fp_t1

0x39a7,	// (0x00058a01) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x00064c07) list_empty_pane_fp_t

0xb53f,	// (0x00060599) list_single_heading_pane_fp_g1_ParamLimits

0xb53f,	// (0x00060599) list_single_heading_pane_fp_g1

0xb498,	// (0x000604f2) list_single_heading_pane_fp_g2_ParamLimits

0xb498,	// (0x000604f2) list_single_heading_pane_fp_g2

0xb4a4,	// (0x000604fe) list_single_heading_pane_fp_g3_ParamLimits

0xb4a4,	// (0x000604fe) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x00064c0c) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x00064c0c) list_single_heading_pane_fp_g

0x39b5,	// (0x00058a0f) list_single_heading_pane_fp_t1_ParamLimits

0x39b5,	// (0x00058a0f) list_single_heading_pane_fp_t1

0x39c7,	// (0x00058a21) list_single_heading_pane_fp_t2_ParamLimits

0x39c7,	// (0x00058a21) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x00064c13) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x00064c13) list_single_heading_pane_fp_t

0xee2e,	// (0x00063e88) aid_size_cell_fast

0xc207,	// (0x00061261) soft_indicator_pane_cp1_t1

0xee6b,	// (0x00063ec5) cell_app_pane_cp2_ParamLimits

0xee6b,	// (0x00063ec5) cell_app_pane_cp2

0x6b8a,	// (0x0005bbe4) fep_hwr_candidate_drop_down_list_pane

0x6d78,	// (0x0005bdd2) fep_hwr_candidate_pane_g3_ParamLimits

0x6d78,	// (0x0005bdd2) fep_hwr_candidate_pane_g3

0x283e,	// (0x00057898) fep_hwr_candidate_pane_g4_ParamLimits

0x283e,	// (0x00057898) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x00064b82) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x00064b82) fep_hwr_candidate_pane_g

0xb00d,	// (0x00060067) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb00d,	// (0x00060067) fep_vkb_candidate_drop_down_list_pane

0xb435,	// (0x0006048f) fep_vkb_candidate_pane_g3

0xb43d,	// (0x00060497) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x00064baf) fep_vkb_candidate_pane_g

0x6de3,	// (0x0005be3d) cell_hwr_candidate_pane_g1_ParamLimits

0x6df1,	// (0x0005be4b) cell_hwr_candidate_pane_g3_ParamLimits

0x6df1,	// (0x0005be4b) cell_hwr_candidate_pane_g3

0xc6bb,	// (0x00061715) cell_hwr_candidate_pane_g4_ParamLimits

0xc6bb,	// (0x00061715) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x00064bce) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x00064bce) cell_hwr_candidate_pane_g

0xb454,	// (0x000604ae) cell_vkb_candidate_pane_g3_ParamLimits

0xb454,	// (0x000604ae) cell_vkb_candidate_pane_g3

0xb46f,	// (0x000604c9) cell_vkb_candidate_pane_g4_ParamLimits

0xb46f,	// (0x000604c9) cell_vkb_candidate_pane_g4

0xb563,	// (0x000605bd) cell_app_pane_cp2_g1_ParamLimits

0xb563,	// (0x000605bd) cell_app_pane_cp2_g1

0xb581,	// (0x000605db) cell_app_pane_cp2_g2_ParamLimits

0xb581,	// (0x000605db) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x00064c18) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x00064c18) cell_app_pane_cp2_g

0xb58d,	// (0x000605e7) cell_app_pane_cp2_t1_ParamLimits

0xb58d,	// (0x000605e7) cell_app_pane_cp2_t1

0xecc8,	// (0x00063d22) grid_highlight_pane_cp1_ParamLimits

0xecc8,	// (0x00063d22) grid_highlight_pane_cp1

0x6e30,	// (0x0005be8a) cell_hwr_candidate_pane_cp1_ParamLimits

0x6e30,	// (0x0005be8a) cell_hwr_candidate_pane_cp1

0x6de3,	// (0x0005be3d) fep_hwr_candidate_drop_down_list_pane_g1

0x6e54,	// (0x0005beae) fep_hwr_candidate_drop_down_list_pane_g2

0x6e61,	// (0x0005bebb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x00064c1d) fep_hwr_candidate_drop_down_list_pane_g

0x6e6e,	// (0x0005bec8) fep_hwr_candidate_drop_down_list_scroll_pane

0x6e77,	// (0x0005bed1) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6e77,	// (0x0005bed1) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6e84,	// (0x0005bede) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6e84,	// (0x0005bede) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6e91,	// (0x0005beeb) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6e91,	// (0x0005beeb) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6e9e,	// (0x0005bef8) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6e9e,	// (0x0005bef8) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6eb9,	// (0x0005bf13) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6eb9,	// (0x0005bf13) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6ed4,	// (0x0005bf2e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6ed4,	// (0x0005bf2e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6eef,	// (0x0005bf49) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6eef,	// (0x0005bf49) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6f0a,	// (0x0005bf64) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6f0a,	// (0x0005bf64) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x00064c24) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x00064c24) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xb59f,	// (0x000605f9) cell_vkb_candidate_pane_cp1_ParamLimits

0xb59f,	// (0x000605f9) cell_vkb_candidate_pane_cp1

0xb113,	// (0x0006016d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb113,	// (0x0006016d) fep_vkb_candidate_drop_down_list_pane_g1

0xb5c5,	// (0x0006061f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xb5c5,	// (0x0006061f) fep_vkb_candidate_drop_down_list_pane_g2

0xb5d2,	// (0x0006062c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xb5d2,	// (0x0006062c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdb,	// (0x00064c35) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdb,	// (0x00064c35) fep_vkb_candidate_drop_down_list_pane_g

0xb5df,	// (0x00060639) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xb5df,	// (0x00060639) fep_vkb_candidate_drop_down_list_scroll_pane

0xb5ec,	// (0x00060646) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb5ec,	// (0x00060646) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xb5f9,	// (0x00060653) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb5f9,	// (0x00060653) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xb605,	// (0x0006065f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb605,	// (0x0006065f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xb611,	// (0x0006066b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb611,	// (0x0006066b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xb632,	// (0x0006068c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb632,	// (0x0006068c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xb653,	// (0x000606ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb653,	// (0x000606ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xb674,	// (0x000606ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb674,	// (0x000606ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xb695,	// (0x000606ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb695,	// (0x000606ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe2,	// (0x00064c3c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe2,	// (0x00064c3c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x4ee9,	// (0x00059f43) title_pane_g1_ParamLimits

0x4ef6,	// (0x00059f50) title_pane_g2_ParamLimits

0xf54e,	// (0x000645a8) title_pane_g_ParamLimits

0xf19a,	// (0x000641f4) aid_call2_pane

0xf1a2,	// (0x000641fc) aid_call_pane

0xf1aa,	// (0x00064204) popup_clock_analogue_window_g1

0xf1aa,	// (0x00064204) popup_clock_analogue_window_g2

0x5c34,	// (0x0005ac8e) popup_clock_analogue_window_g3

0x5c3d,	// (0x0005ac97) popup_clock_analogue_window_g4

0xc08d,	// (0x000610e7) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00064757) popup_clock_analogue_window_g

0x5c45,	// (0x0005ac9f) popup_clock_analogue_window_t1

0x5c86,	// (0x0005ace0) clock_digital_number_pane_ParamLimits

0x5c86,	// (0x0005ace0) clock_digital_number_pane

0x5c92,	// (0x0005acec) clock_digital_number_pane_cp02_ParamLimits

0x5c92,	// (0x0005acec) clock_digital_number_pane_cp02

0x5c9e,	// (0x0005acf8) clock_digital_number_pane_cp03_ParamLimits

0x5c9e,	// (0x0005acf8) clock_digital_number_pane_cp03

0x5caa,	// (0x0005ad04) clock_digital_number_pane_cp04_ParamLimits

0x5caa,	// (0x0005ad04) clock_digital_number_pane_cp04

0x5cb6,	// (0x0005ad10) clock_digital_separator_pane_ParamLimits

0x5cb6,	// (0x0005ad10) clock_digital_separator_pane

0x5cc2,	// (0x0005ad1c) popup_clock_digital_window_t1_ParamLimits

0x5cc2,	// (0x0005ad1c) popup_clock_digital_window_t1

0xc08d,	// (0x000610e7) clock_digital_number_pane_g1

0xc08d,	// (0x000610e7) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00064762) clock_digital_number_pane_g

0xc08d,	// (0x000610e7) clock_digital_separator_pane_g1

0xc08d,	// (0x000610e7) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00064762) clock_digital_separator_pane_g

0x81bd,	// (0x0005d217) aid_fill_nsta_ParamLimits

0x830d,	// (0x0005d367) indicator_nsta_pane_ParamLimits

0x849e,	// (0x0005d4f8) popup_clock_analogue_window

0x849e,	// (0x0005d4f8) popup_clock_digital_window

0xc0f1,	// (0x0006114b) grid_indicator_nsta_pane_ParamLimits

0xa8cb,	// (0x0005f925) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x00064b02) clock_nsta_pane_t

0x5b9d,	// (0x0005abf7) aid_size_max_handle

0x5ba7,	// (0x0005ac01) aid_size_min_handle

0x3331,	// (0x0005838b) editor_scroll_pane

0xb6b0,	// (0x0006070a) ex_editor_pane

0xedf4,	// (0x00063e4e) scroll_pane_cp13

0xc6b3,	// (0x0006170d) scroll_pane_cp14

0xf1d9,	// (0x00064233) scroll_pane_cp36

0x5c69,	// (0x0005acc3) list_single_graphic_hl_pane_cp2_ParamLimits

0x5c69,	// (0x0005acc3) list_single_graphic_hl_pane_cp2

0x6a22,	// (0x0005ba7c) list_single_graphic_hl_pane_ParamLimits

0x6a22,	// (0x0005ba7c) list_single_graphic_hl_pane

0x39dd,	// (0x00058a37) aid_size_min_hl_cp1

0xb6b8,	// (0x00060712) list_highlight_pane_cp34_ParamLimits

0xb6b8,	// (0x00060712) list_highlight_pane_cp34

0xb6c9,	// (0x00060723) list_single_graphic_hl_pane_g1_ParamLimits

0xb6c9,	// (0x00060723) list_single_graphic_hl_pane_g1

0x6f25,	// (0x0005bf7f) list_single_graphic_hl_pane_g2_ParamLimits

0x6f25,	// (0x0005bf7f) list_single_graphic_hl_pane_g2

0x6f25,	// (0x0005bf7f) list_single_graphic_hl_pane_g3_ParamLimits

0x6f25,	// (0x0005bf7f) list_single_graphic_hl_pane_g3

0x9d16,	// (0x0005ed70) list_single_graphic_hl_pane_g4_ParamLimits

0x9d16,	// (0x0005ed70) list_single_graphic_hl_pane_g4

0x9e2a,	// (0x0005ee84) list_single_graphic_hl_pane_g5_ParamLimits

0x9e2a,	// (0x0005ee84) list_single_graphic_hl_pane_g5

0x0004,

0xfbf3,	// (0x00064c4d) list_single_graphic_hl_pane_g_ParamLimits

0xfbf3,	// (0x00064c4d) list_single_graphic_hl_pane_g

0x6f31,	// (0x0005bf8b) list_single_graphic_hl_pane_t1_ParamLimits

0x6f31,	// (0x0005bf8b) list_single_graphic_hl_pane_t1

0xb6d6,	// (0x00060730) aid_size_min_hl_cp2

0xb6df,	// (0x00060739) list_highlight_pane_cp34_cp2_ParamLimits

0xb6df,	// (0x00060739) list_highlight_pane_cp34_cp2

0xb6c9,	// (0x00060723) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xb6c9,	// (0x00060723) list_single_graphic_hl_pane_g1_cp2

0xb6ec,	// (0x00060746) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xb6ec,	// (0x00060746) list_single_graphic_hl_pane_g2_cp2

0xb6f8,	// (0x00060752) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb6f8,	// (0x00060752) list_single_graphic_hl_pane_g3_cp2

0x1a78,	// (0x00056ad2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1a78,	// (0x00056ad2) list_single_graphic_hl_pane_g4_cp2

0xb706,	// (0x00060760) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xb706,	// (0x00060760) list_single_graphic_hl_pane_g5_cp2

0x62f1,	// (0x0005b34b) control_pane_g4_ParamLimits

0x62f1,	// (0x0005b34b) control_pane_g4

0x6498,	// (0x0005b4f2) bg_popup_sub_pane_cp10_ParamLimits

0xaea2,	// (0x0005fefc) list_choice_list_pane_ParamLimits

0xaeb1,	// (0x0005ff0b) scroll_pane_cp23

0xc232,	// (0x0006128c) bg_popup_preview_window_pane_cp02_ParamLimits

0xb4e0,	// (0x0006053a) list_preview_fixed_pane_ParamLimits

0xb4f6,	// (0x00060550) list_preview_fixed_pane_cp_ParamLimits

0xb4f6,	// (0x00060550) list_preview_fixed_pane_cp

0xb502,	// (0x0006055c) popup_preview_fixed_window_g1_ParamLimits

0xb502,	// (0x0006055c) popup_preview_fixed_window_g1

0xb50e,	// (0x00060568) popup_preview_fixed_window_g2_ParamLimits

0xb50e,	// (0x00060568) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x00064bd5) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x00064bd5) popup_preview_fixed_window_g

0x5a8c,	// (0x0005aae6) aid_navi_side_left_pane_ParamLimits

0x5aa1,	// (0x0005aafb) aid_navi_side_right_pane_ParamLimits

0x5ab9,	// (0x0005ab13) navi_icon_pane_stacon_ParamLimits

0x5acd,	// (0x0005ab27) navi_navi_pane_stacon_ParamLimits

0x5ab9,	// (0x0005ab13) navi_text_pane_stacon_ParamLimits

0xc083,	// (0x000610dd) main_text_info_pane

0xb730,	// (0x0006078a) listscroll_text_info_pane

0xb738,	// (0x00060792) list_text_info_pane_ParamLimits

0xb738,	// (0x00060792) list_text_info_pane

0xb747,	// (0x000607a1) scroll_pane_cp24_ParamLimits

0xb747,	// (0x000607a1) scroll_pane_cp24

0xb765,	// (0x000607bf) list_text_info_pane_t1_ParamLimits

0xb765,	// (0x000607bf) list_text_info_pane_t1

0x64e2,	// (0x0005b53c) popup_fast_swap2_window_ParamLimits

0x64e2,	// (0x0005b53c) popup_fast_swap2_window

0xb78a,	// (0x000607e4) aid_size_cell_fast2

0xc083,	// (0x000610dd) bg_popup_window_pane_cp17

0x8afb,	// (0x0005db55) heading_pane_cp2

0xc438,	// (0x00061492) listscroll_fast2_pane

0xb794,	// (0x000607ee) grid_fast2_pane

0xb79e,	// (0x000607f8) listscroll_fast2_pane_g1

0xb7a8,	// (0x00060802) listscroll_fast2_pane_g2

0x0001,

0xfbfe,	// (0x00064c58) listscroll_fast2_pane_g

0xedf4,	// (0x00063e4e) scroll_pane_cp26

0xb7b2,	// (0x0006080c) cell_fast2_pane_ParamLimits

0xb7b2,	// (0x0006080c) cell_fast2_pane

0xb7c9,	// (0x00060823) cell_fast2_pane_g1

0xb7d2,	// (0x0006082c) cell_fast2_pane_g2

0xb7db,	// (0x00060835) cell_fast2_pane_g3

0x0002,

0xfc03,	// (0x00064c5d) cell_fast2_pane_g

0xc47a,	// (0x000614d4) grid_highlight_pane_cp9

0xc48f,	// (0x000614e9) main_eswt_pane_ParamLimits

0xc48f,	// (0x000614e9) main_eswt_pane

0xb75c,	// (0x000607b6) list_single_text_info_pane

0xb7e3,	// (0x0006083d) eswt_ctrl_button_pane

0xb7e3,	// (0x0006083d) eswt_ctrl_canvas_pane

0xb7eb,	// (0x00060845) eswt_ctrl_combo_pane

0xb7e3,	// (0x0006083d) eswt_ctrl_default_pane

0xb7e3,	// (0x0006083d) eswt_ctrl_label_pane

0xb7f3,	// (0x0006084d) eswt_ctrl_wait_pane

0xb7fb,	// (0x00060855) eswt_shell_pane

0xc083,	// (0x000610dd) listscroll_eswt_app_pane

0xb81b,	// (0x00060875) popup_eswt_tasktip_window_ParamLimits

0xb81b,	// (0x00060875) popup_eswt_tasktip_window

0x873b,	// (0x0005d795) bg_popup_window_pane_cp18

0xb82c,	// (0x00060886) eswt_control_pane_g1_ParamLimits

0xb82c,	// (0x00060886) eswt_control_pane_g1

0xb839,	// (0x00060893) eswt_control_pane_g2_ParamLimits

0xb839,	// (0x00060893) eswt_control_pane_g2

0xb846,	// (0x000608a0) eswt_control_pane_g3_ParamLimits

0xb846,	// (0x000608a0) eswt_control_pane_g3

0xb853,	// (0x000608ad) eswt_control_pane_g4_ParamLimits

0xb853,	// (0x000608ad) eswt_control_pane_g4

0x0003,

0xfc0a,	// (0x00064c64) eswt_control_pane_g_ParamLimits

0xfc0a,	// (0x00064c64) eswt_control_pane_g

0xecc8,	// (0x00063d22) bg_button_pane_ParamLimits

0xecc8,	// (0x00063d22) bg_button_pane

0xc48f,	// (0x000614e9) common_borders_pane_copy2_ParamLimits

0xc48f,	// (0x000614e9) common_borders_pane_copy2

0xb860,	// (0x000608ba) control_button_pane_g1_ParamLimits

0xb860,	// (0x000608ba) control_button_pane_g1

0xb86c,	// (0x000608c6) control_button_pane_g2_ParamLimits

0xb86c,	// (0x000608c6) control_button_pane_g2

0xb878,	// (0x000608d2) control_button_pane_g3_ParamLimits

0xb878,	// (0x000608d2) control_button_pane_g3

0x0002,

0xfc13,	// (0x00064c6d) control_button_pane_g_ParamLimits

0xfc13,	// (0x00064c6d) control_button_pane_g

0xb88c,	// (0x000608e6) control_button_pane_t1

0xb89a,	// (0x000608f4) control_button_pane_t2

0x0001,

0xfc1a,	// (0x00064c74) control_button_pane_t

0x86c7,	// (0x0005d721) bg_button_pane_g1

0x86d7,	// (0x0005d731) bg_button_pane_g2

0x86cf,	// (0x0005d729) bg_button_pane_g3

0x86e7,	// (0x0005d741) bg_button_pane_g4

0x86df,	// (0x0005d739) bg_button_pane_g5

0x86ef,	// (0x0005d749) bg_button_pane_g6

0x86f7,	// (0x0005d751) bg_button_pane_g7

0x8707,	// (0x0005d761) bg_button_pane_g8

0x86ff,	// (0x0005d759) bg_button_pane_g9

0x0008,

0xf86b,	// (0x000648c5) bg_button_pane_g

0xae5d,	// (0x0005feb7) common_borders_pane_ParamLimits

0xae5d,	// (0x0005feb7) common_borders_pane

0xb82c,	// (0x00060886) eswt_control_pane_g1_copy1_ParamLimits

0xb82c,	// (0x00060886) eswt_control_pane_g1_copy1

0xb839,	// (0x00060893) eswt_control_pane_g2_copy1_ParamLimits

0xb839,	// (0x00060893) eswt_control_pane_g2_copy1

0xb846,	// (0x000608a0) eswt_control_pane_g3_copy1_ParamLimits

0xb846,	// (0x000608a0) eswt_control_pane_g3_copy1

0xb853,	// (0x000608ad) eswt_control_pane_g4_copy1_ParamLimits

0xb853,	// (0x000608ad) eswt_control_pane_g4_copy1

0xae98,	// (0x0005fef2) bg_eswt_ctrl_canvas_pane_g1

0xae5d,	// (0x0005feb7) common_borders_pane_cp2_ParamLimits

0xae5d,	// (0x0005feb7) common_borders_pane_cp2

0xae5d,	// (0x0005feb7) common_borders_pane_cp3_ParamLimits

0xae5d,	// (0x0005feb7) common_borders_pane_cp3

0xb8a8,	// (0x00060902) separator_horizontal_pane

0xb8b0,	// (0x0006090a) separator_vertical_pane

0xb82c,	// (0x00060886) eswt_control_pane_g1_copy2_ParamLimits

0xb82c,	// (0x00060886) eswt_control_pane_g1_copy2

0xb839,	// (0x00060893) eswt_control_pane_g2_copy2_ParamLimits

0xb839,	// (0x00060893) eswt_control_pane_g2_copy2

0xb846,	// (0x000608a0) eswt_control_pane_g3_copy2_ParamLimits

0xb846,	// (0x000608a0) eswt_control_pane_g3_copy2

0xb853,	// (0x000608ad) eswt_control_pane_g4_copy2_ParamLimits

0xb853,	// (0x000608ad) eswt_control_pane_g4_copy2

0xc083,	// (0x000610dd) common_borders_pane_cp4

0xb8b9,	// (0x00060913) separator_horizontal_pane_g1

0xb8c2,	// (0x0006091c) separator_horizontal_pane_g2

0xb8cb,	// (0x00060925) separator_horizontal_pane_g3

0x0002,

0xfc1f,	// (0x00064c79) separator_horizontal_pane_g

0xb82c,	// (0x00060886) eswt_control_pane_g1_copy3_ParamLimits

0xb82c,	// (0x00060886) eswt_control_pane_g1_copy3

0xb839,	// (0x00060893) eswt_control_pane_g2_copy3_ParamLimits

0xb839,	// (0x00060893) eswt_control_pane_g2_copy3

0xb846,	// (0x000608a0) eswt_control_pane_g3_copy3_ParamLimits

0xb846,	// (0x000608a0) eswt_control_pane_g3_copy3

0xb853,	// (0x000608ad) eswt_control_pane_g4_copy3_ParamLimits

0xb853,	// (0x000608ad) eswt_control_pane_g4_copy3

0xc083,	// (0x000610dd) common_borders_pane_cp5

0xb8d4,	// (0x0006092e) separator_vertical_pane_g1

0xb8dd,	// (0x00060937) separator_vertical_pane_g2

0xb8e6,	// (0x00060940) separator_vertical_pane_g3

0x0002,

0xfc26,	// (0x00064c80) separator_vertical_pane_g

0xb82c,	// (0x00060886) eswt_control_pane_g1_copy4_ParamLimits

0xb82c,	// (0x00060886) eswt_control_pane_g1_copy4

0xb839,	// (0x00060893) eswt_control_pane_g2_copy4_ParamLimits

0xb839,	// (0x00060893) eswt_control_pane_g2_copy4

0xb846,	// (0x000608a0) eswt_control_pane_g3_copy4_ParamLimits

0xb846,	// (0x000608a0) eswt_control_pane_g3_copy4

0xb853,	// (0x000608ad) eswt_control_pane_g4_copy4_ParamLimits

0xb853,	// (0x000608ad) eswt_control_pane_g4_copy4

0xb8ef,	// (0x00060949) eswt_ctrl_combo_button_pane

0xb8f7,	// (0x00060951) eswt_ctrl_input_pane

0xb8ff,	// (0x00060959) popup_choice_list_window_cp70

0xb907,	// (0x00060961) eswt_ctrl_input_pane_t1

0xc083,	// (0x000610dd) input_focus_pane_cp70

0xae5d,	// (0x0005feb7) bg_button_pane_cp70_ParamLimits

0xae5d,	// (0x0005feb7) bg_button_pane_cp70

0xb915,	// (0x0006096f) eswt_ctrl_combo_button_pane_g1

0xb91d,	// (0x00060977) wait_bar_pane_cp70

0x873b,	// (0x0005d795) bg_popup_window_pane_cp70_ParamLimits

0x873b,	// (0x0005d795) bg_popup_window_pane_cp70

0xb925,	// (0x0006097f) popup_eswt_tasktip_window_t1

0xb93b,	// (0x00060995) wait_bar_pane_cp71_ParamLimits

0xb93b,	// (0x00060995) wait_bar_pane_cp71

0xb947,	// (0x000609a1) grid_eswt_app_pane

0xf039,	// (0x00064093) scroll_pane_cp70

0xb950,	// (0x000609aa) cell_eswt_app_pane_ParamLimits

0xb950,	// (0x000609aa) cell_eswt_app_pane

0xb982,	// (0x000609dc) cell_eswt_app_pane_g1_ParamLimits

0xb982,	// (0x000609dc) cell_eswt_app_pane_g1

0xb9b1,	// (0x00060a0b) cell_eswt_app_pane_g2_ParamLimits

0xb9b1,	// (0x00060a0b) cell_eswt_app_pane_g2

0x0001,

0xfc2d,	// (0x00064c87) cell_eswt_app_pane_g_ParamLimits

0xfc2d,	// (0x00064c87) cell_eswt_app_pane_g

0xb9da,	// (0x00060a34) cell_eswt_app_pane_t1_ParamLimits

0xb9da,	// (0x00060a34) cell_eswt_app_pane_t1

0xba0c,	// (0x00060a66) grid_highlight_pane_cp70_ParamLimits

0xba0c,	// (0x00060a66) grid_highlight_pane_cp70

0xf512,	// (0x0006456c) set_content_pane_g1

0x6287,	// (0x0005b2e1) status_small_volume_pane

0x6f47,	// (0x0005bfa1) status_small_volume_pane_g1

0x6f4f,	// (0x0005bfa9) volume_small2_pane

0x6f58,	// (0x0005bfb2) volume_small2_pane_g1

0x6f61,	// (0x0005bfbb) volume_small2_pane_g2

0x6f6a,	// (0x0005bfc4) volume_small2_pane_g3

0x6f73,	// (0x0005bfcd) volume_small2_pane_g4

0x6f7c,	// (0x0005bfd6) volume_small2_pane_g5

0x6f85,	// (0x0005bfdf) volume_small2_pane_g6

0x6f8e,	// (0x0005bfe8) volume_small2_pane_g7

0x6f97,	// (0x0005bff1) volume_small2_pane_g8

0x6fa0,	// (0x0005bffa) volume_small2_pane_g9

0x6fa9,	// (0x0005c003) volume_small2_pane_g10

0x0009,

0xfc32,	// (0x00064c8c) volume_small2_pane_g

0xb267,	// (0x000602c1) fep_vkb_top_text_pane_g1_ParamLimits

0xb282,	// (0x000602dc) fep_vkb_top_text_pane_t1_ParamLimits

0xb51a,	// (0x00060574) popup_preview_fixed_window_g3_ParamLimits

0xb51a,	// (0x00060574) popup_preview_fixed_window_g3

0x80e1,	// (0x0005d13b) popup_toolbar_trans_pane

0x9a7f,	// (0x0005ead9) aid_height_set_list_ParamLimits

0x9a90,	// (0x0005eaea) aid_size_parent_ParamLimits

0x6498,	// (0x0005b4f2) list_highlight_pane_cp2_ParamLimits

0xf512,	// (0x0006456c) set_content_pane_g1_ParamLimits

0x9ce5,	// (0x0005ed3f) list_single_image_pane_ParamLimits

0x9ce5,	// (0x0005ed3f) list_single_image_pane

0xba18,	// (0x00060a72) aid_size_cell_image_ParamLimits

0xba18,	// (0x00060a72) aid_size_cell_image

0xba25,	// (0x00060a7f) grid_single_image_pane_ParamLimits

0xba25,	// (0x00060a7f) grid_single_image_pane

0xecd6,	// (0x00063d30) list_single_image_pane_g1_ParamLimits

0xecd6,	// (0x00063d30) list_single_image_pane_g1

0xece2,	// (0x00063d3c) list_single_image_pane_g2_ParamLimits

0xece2,	// (0x00063d3c) list_single_image_pane_g2

0x0001,

0xfc47,	// (0x00064ca1) list_single_image_pane_g_ParamLimits

0xfc47,	// (0x00064ca1) list_single_image_pane_g

0xba33,	// (0x00060a8d) list_single_image_pane_t1_ParamLimits

0xba33,	// (0x00060a8d) list_single_image_pane_t1

0xba49,	// (0x00060aa3) cell_image_list_pane_ParamLimits

0xba49,	// (0x00060aa3) cell_image_list_pane

0xba5f,	// (0x00060ab9) cell_image_list_pane_g1

0xba68,	// (0x00060ac2) cell_image_list_pane_g2

0x0001,

0xfc4c,	// (0x00064ca6) cell_image_list_pane_g

0xba71,	// (0x00060acb) aid_size_cell_tb_trans_pane

0xecc8,	// (0x00063d22) bg_tb_trans_pane

0xba83,	// (0x00060add) grid_tb_trans_pane

0x86c7,	// (0x0005d721) bg_tb_trans_pane_g1

0x86d7,	// (0x0005d731) bg_tb_trans_pane_g2

0x86cf,	// (0x0005d729) bg_tb_trans_pane_g3

0x86e7,	// (0x0005d741) bg_tb_trans_pane_g4

0x86df,	// (0x0005d739) bg_tb_trans_pane_g5

0x8707,	// (0x0005d761) bg_tb_trans_pane_g6

0x86ff,	// (0x0005d759) bg_tb_trans_pane_g7

0x86ef,	// (0x0005d749) bg_tb_trans_pane_g8

0x86f7,	// (0x0005d751) bg_tb_trans_pane_g9

0x0008,

0xfc51,	// (0x00064cab) bg_tb_trans_pane_g

0xba97,	// (0x00060af1) cell_toolbar_trans_pane_ParamLimits

0xba97,	// (0x00060af1) cell_toolbar_trans_pane

0xae98,	// (0x0005fef2) cell_toolbar_trans_pane_g1

0xaabc,	// (0x0005fb16) list_form2_midp_pane_t1

0xaaca,	// (0x0005fb24) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x00064b48) list_form2_midp_pane_t

0xaad8,	// (0x0005fb32) scroll_pane_cp51_ParamLimits

0xac9f,	// (0x0005fcf9) form2_midp_wait_pane_g1

0xaca8,	// (0x0005fd02) form2_midp_wait_pane_g2

0xacb1,	// (0x0005fd0b) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x00064b5d) form2_midp_wait_pane_g

0xc0f1,	// (0x0006114b) list_highlight_pane_cp21_ParamLimits

0xacf5,	// (0x0005fd4f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xad04,	// (0x0005fd5e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9c9e,	// (0x0005ecf8) list_single_2graphic_im_pane_ParamLimits

0x9c9e,	// (0x0005ecf8) list_single_2graphic_im_pane

0xbabd,	// (0x00060b17) list_single_2graphic_im_pane_g1_ParamLimits

0xbabd,	// (0x00060b17) list_single_2graphic_im_pane_g1

0xbace,	// (0x00060b28) list_single_2graphic_im_pane_g2_ParamLimits

0xbace,	// (0x00060b28) list_single_2graphic_im_pane_g2

0xbada,	// (0x00060b34) list_single_2graphic_im_pane_g3_ParamLimits

0xbada,	// (0x00060b34) list_single_2graphic_im_pane_g3

0x0003,

0xfc64,	// (0x00064cbe) list_single_2graphic_im_pane_g_ParamLimits

0xfc64,	// (0x00064cbe) list_single_2graphic_im_pane_g

0xbafa,	// (0x00060b54) list_single_2graphic_im_pane_t1_ParamLimits

0xbafa,	// (0x00060b54) list_single_2graphic_im_pane_t1

0xb526,	// (0x00060580) list_single_graphic_2heading_pane_fp_ParamLimits

0xb526,	// (0x00060580) list_single_graphic_2heading_pane_fp

0x38bf,	// (0x00058919) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x38bf,	// (0x00058919) list_single_graphic_2heading_pane_fp_g1

0xb53f,	// (0x00060599) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb53f,	// (0x00060599) list_single_graphic_2heading_pane_fp_g2

0xb498,	// (0x000604f2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb498,	// (0x000604f2) list_single_graphic_2heading_pane_fp_g3

0xb4a4,	// (0x000604fe) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb4a4,	// (0x000604fe) list_single_graphic_2heading_pane_fp_g4

0xb54b,	// (0x000605a5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb54b,	// (0x000605a5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x00064be5) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x00064be5) list_single_graphic_2heading_pane_fp_g

0x39e6,	// (0x00058a40) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x39e6,	// (0x00058a40) list_single_graphic_2heading_pane_fp_t1

0x38f7,	// (0x00058951) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x38f7,	// (0x00058951) list_single_graphic_2heading_pane_fp_t2

0x39fc,	// (0x00058a56) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x39fc,	// (0x00058a56) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6d,	// (0x00064cc7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6d,	// (0x00064cc7) list_single_graphic_2heading_pane_fp_t

0xaf29,	// (0x0005ff83) fep_hwr_write_pane_g5_ParamLimits

0xaf29,	// (0x0005ff83) fep_hwr_write_pane_g5

0xaf35,	// (0x0005ff8f) fep_hwr_write_pane_g6_ParamLimits

0xaf35,	// (0x0005ff8f) fep_hwr_write_pane_g6

0xb7fb,	// (0x00060855) eswt_shell_pane_ParamLimits

0x873b,	// (0x0005d795) bg_popup_window_pane_cp18_ParamLimits

0x99d6,	// (0x0005ea30) heading_pane_cp70

0xb925,	// (0x0006097f) popup_eswt_tasktip_window_t1_ParamLimits

0x8214,	// (0x0005d26e) aid_touch_tab_arrow_left

0x8223,	// (0x0005d27d) aid_touch_tab_arrow_right

0xc0a1,	// (0x000610fb) title_pane_g3_ParamLimits

0xc0a1,	// (0x000610fb) title_pane_g3

0xec87,	// (0x00063ce1) set_value_pane_g1

0x80e1,	// (0x0005d13b) popup_toolbar_trans_pane_ParamLimits

0xba71,	// (0x00060acb) aid_size_cell_tb_trans_pane_ParamLimits

0xecc8,	// (0x00063d22) bg_tb_trans_pane_ParamLimits

0xba83,	// (0x00060add) grid_tb_trans_pane_ParamLimits

0xc232,	// (0x0006128c) cont_note_pane_ParamLimits

0xc232,	// (0x0006128c) cont_note_pane

0xc48f,	// (0x000614e9) cont_snote2_single_text_pane_ParamLimits

0xc48f,	// (0x000614e9) cont_snote2_single_text_pane

0xc48f,	// (0x000614e9) cont_snote2_single_graphic_pane_ParamLimits

0xc48f,	// (0x000614e9) cont_snote2_single_graphic_pane

0x8d17,	// (0x0005dd71) cont_note_wait_pane_ParamLimits

0x8d17,	// (0x0005dd71) cont_note_wait_pane

0x8d17,	// (0x0005dd71) cont_note_image_pane_ParamLimits

0x8d17,	// (0x0005dd71) cont_note_image_pane

0xbb2b,	// (0x00060b85) popup_note2_window_g1_ParamLimits

0xbb2b,	// (0x00060b85) popup_note2_window_g1

0xbb5c,	// (0x00060bb6) popup_note2_window_t1_ParamLimits

0xbb5c,	// (0x00060bb6) popup_note2_window_t1

0xbba1,	// (0x00060bfb) popup_note2_window_t2_ParamLimits

0xbba1,	// (0x00060bfb) popup_note2_window_t2

0xbbe6,	// (0x00060c40) popup_note2_window_t3_ParamLimits

0xbbe6,	// (0x00060c40) popup_note2_window_t3

0xbc2b,	// (0x00060c85) popup_note2_window_t4_ParamLimits

0xbc2b,	// (0x00060c85) popup_note2_window_t4

0xc2b6,	// (0x00061310) popup_note2_window_t5_ParamLimits

0xc2b6,	// (0x00061310) popup_note2_window_t5

0x0004,

0xfc79,	// (0x00064cd3) popup_note2_window_t_ParamLimits

0xfc79,	// (0x00064cd3) popup_note2_window_t

0xbc5a,	// (0x00060cb4) popup_note2_image_window_g1_ParamLimits

0xbc5a,	// (0x00060cb4) popup_note2_image_window_g1

0xbc66,	// (0x00060cc0) popup_note2_image_window_g2_ParamLimits

0xbc66,	// (0x00060cc0) popup_note2_image_window_g2

0x0001,

0xfc84,	// (0x00064cde) popup_note2_image_window_g_ParamLimits

0xfc84,	// (0x00064cde) popup_note2_image_window_g

0xbc78,	// (0x00060cd2) popup_note2_image_window_t1_ParamLimits

0xbc78,	// (0x00060cd2) popup_note2_image_window_t1

0xbc90,	// (0x00060cea) popup_note2_image_window_t2_ParamLimits

0xbc90,	// (0x00060cea) popup_note2_image_window_t2

0xbca8,	// (0x00060d02) popup_note2_image_window_t3_ParamLimits

0xbca8,	// (0x00060d02) popup_note2_image_window_t3

0x0002,

0xfc89,	// (0x00064ce3) popup_note2_image_window_t_ParamLimits

0xfc89,	// (0x00064ce3) popup_note2_image_window_t

0x8d25,	// (0x0005dd7f) popup_note2_wait_window_g1_ParamLimits

0x8d25,	// (0x0005dd7f) popup_note2_wait_window_g1

0xbcc4,	// (0x00060d1e) popup_note2_wait_window_g2_ParamLimits

0xbcc4,	// (0x00060d1e) popup_note2_wait_window_g2

0x8d3d,	// (0x0005dd97) popup_note2_wait_window_g3_ParamLimits

0x8d3d,	// (0x0005dd97) popup_note2_wait_window_g3

0x0002,

0xfc90,	// (0x00064cea) popup_note2_wait_window_g_ParamLimits

0xfc90,	// (0x00064cea) popup_note2_wait_window_g

0xbcd0,	// (0x00060d2a) popup_note2_wait_window_t1_ParamLimits

0xbcd0,	// (0x00060d2a) popup_note2_wait_window_t1

0xbcee,	// (0x00060d48) popup_note2_wait_window_t2_ParamLimits

0xbcee,	// (0x00060d48) popup_note2_wait_window_t2

0xbd0c,	// (0x00060d66) popup_note2_wait_window_t3_ParamLimits

0xbd0c,	// (0x00060d66) popup_note2_wait_window_t3

0xbd1e,	// (0x00060d78) popup_note2_wait_window_t4_ParamLimits

0xbd1e,	// (0x00060d78) popup_note2_wait_window_t4

0x0003,

0xfc97,	// (0x00064cf1) popup_note2_wait_window_t_ParamLimits

0xfc97,	// (0x00064cf1) popup_note2_wait_window_t

0xbd30,	// (0x00060d8a) wait_bar2_pane_ParamLimits

0xbd30,	// (0x00060d8a) wait_bar2_pane

0xbd48,	// (0x00060da2) popup_snote2_single_text_window_g1_ParamLimits

0xbd48,	// (0x00060da2) popup_snote2_single_text_window_g1

0xbd70,	// (0x00060dca) popup_snote2_single_text_window_t1_ParamLimits

0xbd70,	// (0x00060dca) popup_snote2_single_text_window_t1

0xbdbc,	// (0x00060e16) popup_snote2_single_text_window_t2_ParamLimits

0xbdbc,	// (0x00060e16) popup_snote2_single_text_window_t2

0xbe08,	// (0x00060e62) popup_snote2_single_text_window_t3_ParamLimits

0xbe08,	// (0x00060e62) popup_snote2_single_text_window_t3

0xbe49,	// (0x00060ea3) popup_snote2_single_text_window_t4_ParamLimits

0xbe49,	// (0x00060ea3) popup_snote2_single_text_window_t4

0xbe7f,	// (0x00060ed9) popup_snote2_single_text_window_t5_ParamLimits

0xbe7f,	// (0x00060ed9) popup_snote2_single_text_window_t5

0x0004,

0xfca0,	// (0x00064cfa) popup_snote2_single_text_window_t_ParamLimits

0xfca0,	// (0x00064cfa) popup_snote2_single_text_window_t

0xbeaa,	// (0x00060f04) popup_snote2_single_graphic_window_g1_ParamLimits

0xbeaa,	// (0x00060f04) popup_snote2_single_graphic_window_g1

0xbed2,	// (0x00060f2c) popup_snote2_single_graphic_window_g2_ParamLimits

0xbed2,	// (0x00060f2c) popup_snote2_single_graphic_window_g2

0x0001,

0xfcab,	// (0x00064d05) popup_snote2_single_graphic_window_g_ParamLimits

0xfcab,	// (0x00064d05) popup_snote2_single_graphic_window_g

0xbefa,	// (0x00060f54) popup_snote2_single_graphic_window_t1_ParamLimits

0xbefa,	// (0x00060f54) popup_snote2_single_graphic_window_t1

0xbf46,	// (0x00060fa0) popup_snote2_single_graphic_window_t2_ParamLimits

0xbf46,	// (0x00060fa0) popup_snote2_single_graphic_window_t2

0xbe08,	// (0x00060e62) popup_snote2_single_graphic_window_t3_ParamLimits

0xbe08,	// (0x00060e62) popup_snote2_single_graphic_window_t3

0xbe49,	// (0x00060ea3) popup_snote2_single_graphic_window_t4_ParamLimits

0xbe49,	// (0x00060ea3) popup_snote2_single_graphic_window_t4

0xbe7f,	// (0x00060ed9) popup_snote2_single_graphic_window_t5_ParamLimits

0xbe7f,	// (0x00060ed9) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb0,	// (0x00064d0a) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb0,	// (0x00064d0a) popup_snote2_single_graphic_window_t

0xa988,	// (0x0005f9e2) clock_nsta_pane_cp2_t1

0xa988,	// (0x0005f9e2) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x00064b1e) clock_nsta_pane_cp2_t

0x31e6,	// (0x00058240) form_field_data_wide_pane_g1_ParamLimits

0xecd6,	// (0x00063d30) form_field_data_wide_pane_g2_ParamLimits

0xecd6,	// (0x00063d30) form_field_data_wide_pane_g2

0xece2,	// (0x00063d3c) form_field_data_wide_pane_g3_ParamLimits

0xece2,	// (0x00063d3c) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x000646da) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x000646da) form_field_data_wide_pane_g

0xa867,	// (0x0005f8c1) grid_touch_3_pane_ParamLimits

0xa867,	// (0x0005f8c1) grid_touch_3_pane

0xbf92,	// (0x00060fec) cell_touch_3_pane_ParamLimits

0xbf92,	// (0x00060fec) cell_touch_3_pane

0xae98,	// (0x0005fef2) cell_touch_3_pane_g1

0xae98,	// (0x0005fef2) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x00064ba3) cell_touch_3_pane_g

0xc2e8,	// (0x00061342) cont_query_data_pane

0xc2f0,	// (0x0006134a) cont_query_data_pane_cp1

0xbfc5,	// (0x0006101f) button_value_adjust_pane_cp7

0xbfcd,	// (0x00061027) query_popup_pane_cp3

0xf20a,	// (0x00064264) bg_popup_sub_pane_cp22_ParamLimits

0x5d43,	// (0x0005ad9d) navi_navi_volume_pane_cp2

0x5d5e,	// (0x0005adb8) popup_side_volume_key_window_g2

0x5d6d,	// (0x0005adc7) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00064770) popup_side_volume_key_window_g

0x5d8a,	// (0x0005ade4) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00064777) popup_side_volume_key_window_t

0xf415,	// (0x0006446f) popup_side_volume_key_window_ParamLimits

0x5472,	// (0x0005a4cc) list_double_graphic_pane_g4_ParamLimits

0x5472,	// (0x0005a4cc) list_double_graphic_pane_g4

0x9ccd,	// (0x0005ed27) list_single_2heading_msg_pane_ParamLimits

0x9ccd,	// (0x0005ed27) list_single_2heading_msg_pane

0x9e3e,	// (0x0005ee98) list_single_2heading_msg_pane_g1_ParamLimits

0x9e3e,	// (0x0005ee98) list_single_2heading_msg_pane_g1

0x1a78,	// (0x00056ad2) list_single_2heading_msg_pane_g2_ParamLimits

0x1a78,	// (0x00056ad2) list_single_2heading_msg_pane_g2

0x9e4a,	// (0x0005eea4) list_single_2heading_msg_pane_g3_ParamLimits

0x9e4a,	// (0x0005eea4) list_single_2heading_msg_pane_g3

0x9e56,	// (0x0005eeb0) list_single_2heading_msg_pane_g4_ParamLimits

0x9e56,	// (0x0005eeb0) list_single_2heading_msg_pane_g4

0x0003,

0xfcbb,	// (0x00064d15) list_single_2heading_msg_pane_g_ParamLimits

0xfcbb,	// (0x00064d15) list_single_2heading_msg_pane_g

0x6fb2,	// (0x0005c00c) list_single_2heading_msg_pane_t1_ParamLimits

0x6fb2,	// (0x0005c00c) list_single_2heading_msg_pane_t1

0x6fda,	// (0x0005c034) list_single_2heading_msg_pane_t2_ParamLimits

0x6fda,	// (0x0005c034) list_single_2heading_msg_pane_t2

0x7009,	// (0x0005c063) list_single_2heading_msg_pane_t3_ParamLimits

0x7009,	// (0x0005c063) list_single_2heading_msg_pane_t3

0x3c87,	// (0x00058ce1) list_single_2heading_msg_pane_t4_ParamLimits

0x3c87,	// (0x00058ce1) list_single_2heading_msg_pane_t4

0x0003,

0xfcc4,	// (0x00064d1e) list_single_2heading_msg_pane_t_ParamLimits

0xfcc4,	// (0x00064d1e) list_single_2heading_msg_pane_t

0xc0ad,	// (0x00061107) title_pane_g4_ParamLimits

0xc0ad,	// (0x00061107) title_pane_g4

0x59dc,	// (0x0005aa36) title_pane_stacon_g3_ParamLimits

0x59dc,	// (0x0005aa36) title_pane_stacon_g3

0xbaee,	// (0x00060b48) list_single_2graphic_im_pane_g4_ParamLimits

0xbaee,	// (0x00060b48) list_single_2graphic_im_pane_g4

0x9787,	// (0x0005e7e1) popup_side_volume_key_window_cp

0xa182,	// (0x0005f1dc) main_idle_act2_pane_t1

0x6602,	// (0x0005b65c) toolbar_button_pane_g10

0x525c,	// (0x0005a2b6) popup_toolbar_window_cp1

0xa979,	// (0x0005f9d3) clock_nsta_pane_cp_t1

0xa979,	// (0x0005f9d3) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x00064b19) clock_nsta_pane_cp_t

0x5d43,	// (0x0005ad9d) navi_navi_volume_pane_cp2_ParamLimits

0x5d52,	// (0x0005adac) popup_side_volume_key_window_g1_ParamLimits

0x5d5e,	// (0x0005adb8) popup_side_volume_key_window_g2_ParamLimits

0x5d6d,	// (0x0005adc7) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00064770) popup_side_volume_key_window_g_ParamLimits

0x6b76,	// (0x0005bbd0) fep_hwr_aid_pane

0x6c1f,	// (0x0005bc79) bg_fep_hwr_top_pane_g4_ParamLimits

0xaef9,	// (0x0005ff53) fep_hwr_top_pane_g1_ParamLimits

0xaf0b,	// (0x0005ff65) fep_hwr_top_pane_g2_ParamLimits

0x6c3f,	// (0x0005bc99) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x00064b6e) fep_hwr_top_pane_g_ParamLimits

0x6c54,	// (0x0005bcae) fep_hwr_top_text_pane_ParamLimits

0x953c,	// (0x0005e596) aid_touch_tab_arrow_arrow_2

0x9545,	// (0x0005e59f) aid_touch_tab_arrow_left_2

0x6b8a,	// (0x0005bbe4) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6bc1,	// (0x0005bc1b) fep_hwr_prediction_pane

0xb061,	// (0x000600bb) fep_vkb_prediction_pane

0xb167,	// (0x000601c1) fep_vkb_side_pane_g3_ParamLimits

0xb167,	// (0x000601c1) fep_vkb_side_pane_g3

0x6de3,	// (0x0005be3d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6e54,	// (0x0005beae) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6e61,	// (0x0005bebb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x00064c1d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7042,	// (0x0005c09c) fep_hwr_prediction_pane_g1

0x704c,	// (0x0005c0a6) fep_hwr_prediction_pane_g2

0x7054,	// (0x0005c0ae) fep_hwr_prediction_pane_g3

0x705c,	// (0x0005c0b6) fep_hwr_prediction_pane_g4

0x0003,

0xfccd,	// (0x00064d27) fep_hwr_prediction_pane_g

0xbff4,	// (0x0006104e) fep_vkb_prediction_pane_g1

0xbffe,	// (0x00061058) fep_vkb_prediction_pane_g2

0xc006,	// (0x00061060) fep_vkb_prediction_pane_g3

0xc00e,	// (0x00061068) fep_vkb_prediction_pane_g4

0x0003,

0xfcd6,	// (0x00064d30) fep_vkb_prediction_pane_g

0x696a,	// (0x0005b9c4) slider_set_pane_g3

0x697e,	// (0x0005b9d8) slider_set_pane_g4

0x6996,	// (0x0005b9f0) slider_set_pane_g5

0x696a,	// (0x0005b9c4) slider_set_pane_g6

0x69ac,	// (0x0005ba06) slider_set_pane_g7

0x9c15,	// (0x0005ec6f) slider_form_pane_g3

0x9c1e,	// (0x0005ec78) slider_form_pane_g4

0x9c26,	// (0x0005ec80) slider_form_pane_g5

0x9c15,	// (0x0005ec6f) slider_form_pane_g6

0x9c2e,	// (0x0005ec88) slider_form_pane_g7

0xa439,	// (0x0005f493) slider_set_pane_vc_g3

0xa442,	// (0x0005f49c) slider_set_pane_vc_g4

0xa44b,	// (0x0005f4a5) slider_set_pane_vc_g5

0xa439,	// (0x0005f493) slider_set_pane_vc_g6

0xa454,	// (0x0005f4ae) slider_set_pane_vc_g7

0xa62c,	// (0x0005f686) slider_form_pane_vc_g1

0xa635,	// (0x0005f68f) slider_form_pane_vc_g2

0xa63e,	// (0x0005f698) slider_form_pane_vc_g3

0xa62c,	// (0x0005f686) slider_form_pane_vc_g4

0xa647,	// (0x0005f6a1) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x00064aeb) slider_form_pane_vc_g

0xc083,	// (0x000610dd) main_idle_act3_pane

0xc016,	// (0x00061070) ai3_links_pane

0xc01f,	// (0x00061079) popup_ai3_data_window_ParamLimits

0xc01f,	// (0x00061079) popup_ai3_data_window

0xc083,	// (0x000610dd) grid_ai3_links_pane

0xc03d,	// (0x00061097) cell_ai3_links_pane_ParamLimits

0xc03d,	// (0x00061097) cell_ai3_links_pane

0xc057,	// (0x000610b1) bg_popup_sub_pane_cp11

0xc064,	// (0x000610be) cell_ai3_links_pane_g1

0xc083,	// (0x000610dd) bg_popup_sub_pane_cp12

0xc6ea,	// (0x00061744) heading_ai3_data_pane

0xc6f2,	// (0x0006174c) list_ai3_gene_pane

0xc6fe,	// (0x00061758) popup_ai3_data_window_g1

0xc706,	// (0x00061760) heading_ai3_data_pane_g1

0xc70e,	// (0x00061768) heading_ai3_data_pane_t1

0xc71c,	// (0x00061776) list_double_ai3_gene_pane_ParamLimits

0xc71c,	// (0x00061776) list_double_ai3_gene_pane

0xc729,	// (0x00061783) list_single_ai3_gene_pane_ParamLimits

0xc729,	// (0x00061783) list_single_ai3_gene_pane

0xae5d,	// (0x0005feb7) list_highlight_pane_cp7_ParamLimits

0xae5d,	// (0x0005feb7) list_highlight_pane_cp7

0xc736,	// (0x00061790) list_single_a13_gene_pane_t1_ParamLimits

0xc736,	// (0x00061790) list_single_a13_gene_pane_t1

0xc74d,	// (0x000617a7) list_single_ai3_gene_pane_g1

0xc756,	// (0x000617b0) list_single_ai3_gene_pane_g2

0x0001,

0xfcdf,	// (0x00064d39) list_single_ai3_gene_pane_g

0xc75e,	// (0x000617b8) list_double_ai3_gene_pane_g1_ParamLimits

0xc75e,	// (0x000617b8) list_double_ai3_gene_pane_g1

0xc76a,	// (0x000617c4) list_double_ai3_gene_pane_t1_ParamLimits

0xc76a,	// (0x000617c4) list_double_ai3_gene_pane_t1

0xc786,	// (0x000617e0) list_double_ai3_gene_pane_t2_ParamLimits

0xc786,	// (0x000617e0) list_double_ai3_gene_pane_t2

0xc79b,	// (0x000617f5) list_double_ai3_gene_pane_t3_ParamLimits

0xc79b,	// (0x000617f5) list_double_ai3_gene_pane_t3

0x0002,

0xfce4,	// (0x00064d3e) list_double_ai3_gene_pane_t_ParamLimits

0xfce4,	// (0x00064d3e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3a12,	// (0x00058a6c) aid_size_min_col_2

0xbfde,	// (0x00061038) aid_size_min_msg_ParamLimits

0xbfde,	// (0x00061038) aid_size_min_msg

0xb273,	// (0x000602cd) fep_vkb_top_text_pane_g2_ParamLimits

0xb273,	// (0x000602cd) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x00064b9e) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x00064b9e) fep_vkb_top_text_pane_g

0xc083,	// (0x000610dd) main_hc_apps_shell_pane

0xc7b8,	// (0x00061812) grid_hc_apps_pane_ParamLimits

0xc7b8,	// (0x00061812) grid_hc_apps_pane

0xc7c7,	// (0x00061821) list_hc_apps_pane

0xc7cf,	// (0x00061829) scroll_pane_cp37_ParamLimits

0xc7cf,	// (0x00061829) scroll_pane_cp37

0xc7db,	// (0x00061835) cell_hc_apps_pane_ParamLimits

0xc7db,	// (0x00061835) cell_hc_apps_pane

0xc893,	// (0x000618ed) cell_hc_apps_pane_g1_ParamLimits

0xc893,	// (0x000618ed) cell_hc_apps_pane_g1

0xc8c4,	// (0x0006191e) cell_hc_apps_pane_g2_ParamLimits

0xc8c4,	// (0x0006191e) cell_hc_apps_pane_g2

0xc8e0,	// (0x0006193a) cell_hc_apps_pane_g3_ParamLimits

0xc8e0,	// (0x0006193a) cell_hc_apps_pane_g3

0x0002,

0xfceb,	// (0x00064d45) cell_hc_apps_pane_g_ParamLimits

0xfceb,	// (0x00064d45) cell_hc_apps_pane_g

0xc902,	// (0x0006195c) cell_hc_apps_pane_t1_ParamLimits

0xc902,	// (0x0006195c) cell_hc_apps_pane_t1

0xc232,	// (0x0006128c) grid_highlight_pane_cp10_ParamLimits

0xc232,	// (0x0006128c) grid_highlight_pane_cp10

0xc942,	// (0x0006199c) list_single_hc_apps_pane_ParamLimits

0xc942,	// (0x0006199c) list_single_hc_apps_pane

0xc981,	// (0x000619db) list_single_hc_apps_pane_g1

0x9e6e,	// (0x0005eec8) list_single_hc_apps_pane_g2

0x0001,

0xfcf2,	// (0x00064d4c) list_single_hc_apps_pane_g

0x9e87,	// (0x0005eee1) list_single_hc_apps_pane_g2_copy1

0x7064,	// (0x0005c0be) list_single_hc_apps_pane_t1

0xc0f1,	// (0x0006114b) bg_set_opt_pane_cp_ParamLimits

0x4fad,	// (0x0005a007) setting_slider_pane_t1_ParamLimits

0x4fc6,	// (0x0005a020) setting_slider_pane_t2_ParamLimits

0x4fe0,	// (0x0005a03a) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000645b8) setting_slider_pane_t_ParamLimits

0x4ff8,	// (0x0005a052) slider_set_pane_ParamLimits

0x6305,	// (0x0005b35f) control_pane_g5_ParamLimits

0x6305,	// (0x0005b35f) control_pane_g5

0x9a42,	// (0x0005ea9c) slider_set_pane_g1_ParamLimits

0x695e,	// (0x0005b9b8) slider_set_pane_g2_ParamLimits

0x696a,	// (0x0005b9c4) slider_set_pane_g3_ParamLimits

0x697e,	// (0x0005b9d8) slider_set_pane_g4_ParamLimits

0x6996,	// (0x0005b9f0) slider_set_pane_g5_ParamLimits

0x696a,	// (0x0005b9c4) slider_set_pane_g6_ParamLimits

0x69ac,	// (0x0005ba06) slider_set_pane_g7_ParamLimits

0xf969,	// (0x000649c3) slider_set_pane_g_ParamLimits

0xf4bd,	// (0x00064517) navi_icon_text_pane_ParamLimits

0x81d3,	// (0x0005d22d) aid_fill_nsta_2_ParamLimits

0x8214,	// (0x0005d26e) aid_touch_tab_arrow_left_ParamLimits

0x8223,	// (0x0005d27d) aid_touch_tab_arrow_right_ParamLimits

0x8290,	// (0x0005d2ea) clock_nsta_pane_ParamLimits

0x951e,	// (0x0005e578) navi_icon_pane_g1_ParamLimits

0x952a,	// (0x0005e584) navi_text_pane_t1_ParamLimits

0xaa96,	// (0x0005faf0) navi_icon_text_pane_g1_ParamLimits

0xaaa2,	// (0x0005fafc) navi_icon_text_pane_t1_ParamLimits

0xc981,	// (0x000619db) list_single_hc_apps_pane_g1_ParamLimits

0x9e6e,	// (0x0005eec8) list_single_hc_apps_pane_g2_ParamLimits

0xfcf2,	// (0x00064d4c) list_single_hc_apps_pane_g_ParamLimits

0x9e87,	// (0x0005eee1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7064,	// (0x0005c0be) list_single_hc_apps_pane_t1_ParamLimits

0x4df5,	// (0x00059e4f) popup_toolbar2_fixed_window_ParamLimits

0x4df5,	// (0x00059e4f) popup_toolbar2_fixed_window

0x80d7,	// (0x0005d131) popup_toolbar2_float_window

0xc083,	// (0x000610dd) bg_popup_sub_pane_cp27

0xc99a,	// (0x000619f4) grid_toolbar2_float_pane

0xc083,	// (0x000610dd) bg_popup_sub_pane_cp26

0xc99a,	// (0x000619f4) grid_toolbar2_fixed_pane

0xc9a2,	// (0x000619fc) cell_toolbar2_fixed_pane_ParamLimits

0xc9a2,	// (0x000619fc) cell_toolbar2_fixed_pane

0xc9b2,	// (0x00061a0c) cell_toolbar2_fixed_pane_g1

0xc9bb,	// (0x00061a15) toolbar2_fixed_button_pane

0x86c7,	// (0x0005d721) toolbar2_fixed_button_pane_g1

0x86d7,	// (0x0005d731) toolbar2_fixed_button_pane_g2

0x86cf,	// (0x0005d729) toolbar2_fixed_button_pane_g3

0x86e7,	// (0x0005d741) toolbar2_fixed_button_pane_g4

0x86df,	// (0x0005d739) toolbar2_fixed_button_pane_g5

0x86ef,	// (0x0005d749) toolbar2_fixed_button_pane_g6

0x86f7,	// (0x0005d751) toolbar2_fixed_button_pane_g7

0x8707,	// (0x0005d761) toolbar2_fixed_button_pane_g8

0x86ff,	// (0x0005d759) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x000648c5) toolbar2_fixed_button_pane_g

0xc9c3,	// (0x00061a1d) cell_toolbar2_float_pane_ParamLimits

0xc9c3,	// (0x00061a1d) cell_toolbar2_float_pane

0xc9d4,	// (0x00061a2e) cell_toolbar2_float_pane_g1

0xc9bb,	// (0x00061a15) toolbar2_fixed_button_pane_cp

0xafcf,	// (0x00060029) fep_vkb_accented_list_pane_ParamLimits

0xafcf,	// (0x00060029) fep_vkb_accented_list_pane

0x6dc3,	// (0x0005be1d) bg_popup_fep_shadow_pane_g9

0x3331,	// (0x0005838b) bg_popup_fep_shadow_pane_cp3

0xeddb,	// (0x00063e35) list_accented_list_pane

0xc9dd,	// (0x00061a37) list_single_accented_list_pane_ParamLimits

0xc9dd,	// (0x00061a37) list_single_accented_list_pane

0x3331,	// (0x0005838b) list_highlight_pane_cp10

0xc9ee,	// (0x00061a48) list_single_accented_list_pane_t1

0x801d,	// (0x0005d077) popup_slider_window_ParamLimits

0x801d,	// (0x0005d077) popup_slider_window

0xbfd5,	// (0x0006102f) aid_indentation_list_msg

0xcaba,	// (0x00061b14) bg_popup_window_pane_cp19

0xcb28,	// (0x00061b82) popup_slider_window_g1

0xcb44,	// (0x00061b9e) popup_slider_window_g2

0xcb60,	// (0x00061bba) popup_slider_window_g3

0x0005,

0xfcf7,	// (0x00064d51) popup_slider_window_g

0xcbbc,	// (0x00061c16) popup_slider_window_t1

0xcc30,	// (0x00061c8a) small_volume_slider_vertical_pane

0xae98,	// (0x0005fef2) small_volume_slider_vertical_pane_g1

0xae98,	// (0x0005fef2) small_volume_slider_vertical_pane_g2

0xcc4c,	// (0x00061ca6) small_volume_slider_vertical_pane_g3

0x0002,

0xfd09,	// (0x00064d63) small_volume_slider_vertical_pane_g

0x4ba3,	// (0x00059bfd) area_side_right_pane_ParamLimits

0x4ba3,	// (0x00059bfd) area_side_right_pane

0x7092,	// (0x0005c0ec) aid_size_side_button_ParamLimits

0x7092,	// (0x0005c0ec) aid_size_side_button

0x70a6,	// (0x0005c100) grid_sctrl_middle_pane_ParamLimits

0x70a6,	// (0x0005c100) grid_sctrl_middle_pane

0x70c6,	// (0x0005c120) sctrl_sk_bottom_pane

0x70d7,	// (0x0005c131) sctrl_sk_top_pane

0x70e9,	// (0x0005c143) aid_touch_sctrl_top

0x70f6,	// (0x0005c150) bg_sctrl_sk_pane_ParamLimits

0x70f6,	// (0x0005c150) bg_sctrl_sk_pane

0x7104,	// (0x0005c15e) sctrl_sk_top_pane_g1

0x7111,	// (0x0005c16b) sctrl_sk_top_pane_t1

0x70e9,	// (0x0005c143) aid_touch_sctrl_bottom

0x70f6,	// (0x0005c150) bg_sctrl_sk_pane_cp_ParamLimits

0x70f6,	// (0x0005c150) bg_sctrl_sk_pane_cp

0x712c,	// (0x0005c186) sctrl_sk_bottom_pane_g1

0x7111,	// (0x0005c16b) sctrl_sk_bottom_pane_t1

0x7135,	// (0x0005c18f) cell_sctrl_middle_pane_ParamLimits

0x7135,	// (0x0005c18f) cell_sctrl_middle_pane

0x7152,	// (0x0005c1ac) aid_touch_sctrl_middle_ParamLimits

0x7152,	// (0x0005c1ac) aid_touch_sctrl_middle

0x7164,	// (0x0005c1be) bg_sctrl_middle_pane_ParamLimits

0x7164,	// (0x0005c1be) bg_sctrl_middle_pane

0x6de3,	// (0x0005be3d) cell_sctrl_middle_pane_g1_ParamLimits

0x6de3,	// (0x0005be3d) cell_sctrl_middle_pane_g1

0x7172,	// (0x0005c1cc) cell_sctrl_middle_pane_g2_ParamLimits

0x7172,	// (0x0005c1cc) cell_sctrl_middle_pane_g2

0x0001,

0xfd15,	// (0x00064d6f) cell_sctrl_middle_pane_g_ParamLimits

0xfd15,	// (0x00064d6f) cell_sctrl_middle_pane_g

0x86c7,	// (0x0005d721) bg_sctrl_middle_pane_g1

0x86cf,	// (0x0005d729) bg_sctrl_middle_pane_g2

0x86d7,	// (0x0005d731) bg_sctrl_middle_pane_g3

0x86df,	// (0x0005d739) bg_sctrl_middle_pane_g4

0x86e7,	// (0x0005d741) bg_sctrl_middle_pane_g5

0x86ef,	// (0x0005d749) bg_sctrl_middle_pane_g6

0x86f7,	// (0x0005d751) bg_sctrl_middle_pane_g7

0x86ff,	// (0x0005d759) bg_sctrl_middle_pane_g8

0x0007,

0xfd1a,	// (0x00064d74) bg_sctrl_middle_pane_g

0x8707,	// (0x0005d761) bg_sctrl_middle_pane_g8_copy1

0x86c7,	// (0x0005d721) bg_sctrl_sk_pane_g1

0x86d7,	// (0x0005d731) bg_sctrl_sk_pane_g2

0x86cf,	// (0x0005d729) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x000648c5) bg_sctrl_sk_pane_g

0xc64d,	// (0x000616a7) aid_size_touch_scroll_bar

0x86e7,	// (0x0005d741) bg_sctrl_sk_pane_g4

0x86df,	// (0x0005d739) bg_sctrl_sk_pane_g5

0x86ef,	// (0x0005d749) bg_sctrl_sk_pane_g6

0x86f7,	// (0x0005d751) bg_sctrl_sk_pane_g7

0x8707,	// (0x0005d761) bg_sctrl_sk_pane_g8

0x86ff,	// (0x0005d759) bg_sctrl_sk_pane_g9

0x6546,	// (0x0005b5a0) popup_fep_china_hwr2_fs_candidate_window

0x6550,	// (0x0005b5aa) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6550,	// (0x0005b5aa) popup_fep_china_hwr2_fs_control_window

0x6de3,	// (0x0005be3d) sctrl_sk_top_pane_g2

0x0001,

0xfd10,	// (0x00064d6a) sctrl_sk_top_pane_g

0xcc55,	// (0x00061caf) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcc55,	// (0x00061caf) aid_fep_china_hwr2_fs_cell

0xcc68,	// (0x00061cc2) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcc68,	// (0x00061cc2) bg_popup_fep_shadow_pane_cp4

0xcc81,	// (0x00061cdb) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcc81,	// (0x00061cdb) bg_popup_fep_shadow_pane_cp5

0xcc93,	// (0x00061ced) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcc93,	// (0x00061ced) popup_fep_china_hwr2_fs_control_bar_grid

0xcca3,	// (0x00061cfd) popup_fep_china_hwr2_fs_control_funtion_grid

0xccab,	// (0x00061d05) aid_fep_china_hwr2_fs_candi_cell

0xc083,	// (0x000610dd) bg_popup_fep_shadow_pane_cp6

0xccb5,	// (0x00061d0f) popup_fep_china_hwr2_fs_candidate_grid

0xccbf,	// (0x00061d19) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xccbf,	// (0x00061d19) cell_fep_china_hwr2_fs_funtion_grid

0xae98,	// (0x0005fef2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xccd7,	// (0x00061d31) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xccd7,	// (0x00061d31) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcce5,	// (0x00061d3f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcce5,	// (0x00061d3f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2b,	// (0x00064d85) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2b,	// (0x00064d85) cell_fep_china_hwr2_fs_funtion_grid_g

0xccfb,	// (0x00061d55) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xccfb,	// (0x00061d55) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcd10,	// (0x00061d6a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcd10,	// (0x00061d6a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd30,	// (0x00064d8a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd30,	// (0x00064d8a) cell_fep_china_hwr2_fs_funtion_grid_t

0xcd2c,	// (0x00061d86) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcd34,	// (0x00061d8e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcd3c,	// (0x00061d96) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd35,	// (0x00064d8f) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcd44,	// (0x00061d9e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcd44,	// (0x00061d9e) cell_fep_china_hwr2_fs_candidate_grid

0xcd63,	// (0x00061dbd) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcd6b,	// (0x00061dc5) popup_fep_china_hwr2_fs_candidate_grid_g21

0xae98,	// (0x0005fef2) cell_fep_china_hwr2_fs_candidate_grid_g1

0xae98,	// (0x0005fef2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x00064ba3) cell_fep_china_hwr2_fs_candidate_grid_g

0xcd73,	// (0x00061dcd) cell_fep_china_hwr2_fs_candidate_grid_t1

0x82a3,	// (0x0005d2fd) clock_nsta_pane_cp_24_ParamLimits

0x82a3,	// (0x0005d2fd) clock_nsta_pane_cp_24

0x8323,	// (0x0005d37d) indicator_nsta_pane_cp_24_ParamLimits

0x8323,	// (0x0005d37d) indicator_nsta_pane_cp_24

0x939a,	// (0x0005e3f4) heading_pane_g1

0x0001,

0xf8d0,	// (0x0006492a) heading_pane_g

0x9fc9,	// (0x0005f023) grid_sct_catagory_button_pane

0x9ffb,	// (0x0005f055) scroll_pane_cp5_ParamLimits

0xaae4,	// (0x0005fb3e) button_value_adjust_pane_cp5_ParamLimits

0xaae4,	// (0x0005fb3e) button_value_adjust_pane_cp5

0xabc9,	// (0x0005fc23) form2_midp_time_pane_ParamLimits

0xcd81,	// (0x00061ddb) cell_sct_catagory_button_pane_ParamLimits

0xcd81,	// (0x00061ddb) cell_sct_catagory_button_pane

0xae5d,	// (0x0005feb7) bg_button_pane_cp01_ParamLimits

0xae5d,	// (0x0005feb7) bg_button_pane_cp01

0xae98,	// (0x0005fef2) cell_sct_catagory_button_pane_g1

0x805e,	// (0x0005d0b8) popup_tb_extension_window

0xcd93,	// (0x00061ded) aid_size_cell_ext_ParamLimits

0xcd93,	// (0x00061ded) aid_size_cell_ext

0xc232,	// (0x0006128c) bg_tb_trans_pane_cp1_ParamLimits

0xc232,	// (0x0006128c) bg_tb_trans_pane_cp1

0xcdb3,	// (0x00061e0d) grid_tb_ext_pane_ParamLimits

0xcdb3,	// (0x00061e0d) grid_tb_ext_pane

0xcde3,	// (0x00061e3d) cell_tb_ext_pane_ParamLimits

0xcde3,	// (0x00061e3d) cell_tb_ext_pane

0xcdfa,	// (0x00061e54) cell_tb_ext_pane_g1_ParamLimits

0xcdfa,	// (0x00061e54) cell_tb_ext_pane_g1

0xce17,	// (0x00061e71) cell_tb_ext_pane_t1

0xc232,	// (0x0006128c) list_highlight_pane_cp11_ParamLimits

0xc232,	// (0x0006128c) list_highlight_pane_cp11

0x4e14,	// (0x00059e6e) popup_uni_indicator_window_ParamLimits

0x4e14,	// (0x00059e6e) popup_uni_indicator_window

0xecc8,	// (0x00063d22) bg_popup_sub_pane_cp14

0xce32,	// (0x00061e8c) list_uniindi_pane

0xce3e,	// (0x00061e98) uniindi_top_pane

0xc232,	// (0x0006128c) bg_uniindi_top_pane

0xce5f,	// (0x00061eb9) uniindi_top_pane_g1

0xce75,	// (0x00061ecf) uniindi_top_pane_g2

0x0003,

0xfd3c,	// (0x00064d96) uniindi_top_pane_g

0xce9f,	// (0x00061ef9) uniindi_top_pane_t1

0xcecb,	// (0x00061f25) list_single_uniindi_pane_ParamLimits

0xcecb,	// (0x00061f25) list_single_uniindi_pane

0xae98,	// (0x0005fef2) bg_uniindi_top_pane_g1

0xcedd,	// (0x00061f37) list_single_uniindi_pane_g1

0xcef0,	// (0x00061f4a) list_single_uniindi_pane_t1

0x4c80,	// (0x00059cda) control_bg_pane

0xcf15,	// (0x00061f6f) bg_sctrl_sk_pane_cp1

0xcf1e,	// (0x00061f78) bg_sctrl_sk_pane_cp2

0xcf27,	// (0x00061f81) control_bg_pane_g1

0xcf30,	// (0x00061f8a) control_bg_pane_g2

0x0001,

0xfd45,	// (0x00064d9f) control_bg_pane_g

0xa90b,	// (0x0005f965) cell_indicator_nsta_pane_g1_ParamLimits

0xa919,	// (0x0005f973) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x00064b07) cell_indicator_nsta_pane_g_ParamLimits

0x3895,	// (0x000588ef) form2_midp_time_pane_t1_ParamLimits

0xc48f,	// (0x000614e9) main_idle_act4_pane_ParamLimits

0xc48f,	// (0x000614e9) main_idle_act4_pane

0x805e,	// (0x0005d0b8) popup_tb_extension_window_ParamLimits

0xcdd5,	// (0x00061e2f) tb_ext_find_pane_ParamLimits

0xcdd5,	// (0x00061e2f) tb_ext_find_pane

0xcf39,	// (0x00061f93) ai_gene_pane_1_cp1

0x33b7,	// (0x00058411) ai_gene_pane_2_cp1

0xcf41,	// (0x00061f9b) list_single_idle_plugin_calendar_pane

0xcf4a,	// (0x00061fa4) list_single_idle_plugin_notification_pane

0xcf53,	// (0x00061fad) list_single_idle_plugin_player_pane

0xcf5c,	// (0x00061fb6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcf5c,	// (0x00061fb6) list_single_idle_plugin_shortcut_pane

0xcf7e,	// (0x00061fd8) main_idle_act4_pane_t1

0xcf90,	// (0x00061fea) main_idle_act4_pane_t2

0x0001,

0xfd4a,	// (0x00064da4) main_idle_act4_pane_t

0xcfa2,	// (0x00061ffc) middle_sk_idle_act4_pane_ParamLimits

0xcfa2,	// (0x00061ffc) middle_sk_idle_act4_pane

0xcfb8,	// (0x00062012) popup_clock_digital_analogue_window_cp2

0xcfd2,	// (0x0006202c) shortcut_wheel_idle_act4_pane_ParamLimits

0xcfd2,	// (0x0006202c) shortcut_wheel_idle_act4_pane

0xae98,	// (0x0005fef2) shortcut_wheel_idle_act4_pane_g1

0xae98,	// (0x0005fef2) shortcut_wheel_idle_act4_pane_g2

0xae98,	// (0x0005fef2) shortcut_wheel_idle_act4_pane_g3

0xae98,	// (0x0005fef2) shortcut_wheel_idle_act4_pane_g4

0xae98,	// (0x0005fef2) shortcut_wheel_idle_act4_pane_g5

0xcfe6,	// (0x00062040) shortcut_wheel_idle_act4_pane_g6

0xcfee,	// (0x00062048) shortcut_wheel_idle_act4_pane_g7

0xcff6,	// (0x00062050) shortcut_wheel_idle_act4_pane_g8

0xcffe,	// (0x00062058) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4f,	// (0x00064da9) shortcut_wheel_idle_act4_pane_g

0xb113,	// (0x0006016d) middle_sk_idle_act4_pane_g1_ParamLimits

0xb113,	// (0x0006016d) middle_sk_idle_act4_pane_g1

0xd062,	// (0x000620bc) middle_sk_idle_act4_pane_g2_ParamLimits

0xd062,	// (0x000620bc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd72,	// (0x00064dcc) middle_sk_idle_act4_pane_g_ParamLimits

0xfd72,	// (0x00064dcc) middle_sk_idle_act4_pane_g

0xd06e,	// (0x000620c8) middle_sk_idle_act4_pane_t1_ParamLimits

0xd06e,	// (0x000620c8) middle_sk_idle_act4_pane_t1

0xd08b,	// (0x000620e5) grid_ai_shortcut_pane_ParamLimits

0xd08b,	// (0x000620e5) grid_ai_shortcut_pane

0xd0a4,	// (0x000620fe) list_highlight_pane_cp16_ParamLimits

0xd0a4,	// (0x000620fe) list_highlight_pane_cp16

0xd0b1,	// (0x0006210b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd0b1,	// (0x0006210b) list_single_idle_plugin_shortcut_pane_g1

0xd0bd,	// (0x00062117) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd0bd,	// (0x00062117) list_single_idle_plugin_shortcut_pane_g2

0xd0d7,	// (0x00062131) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd0d7,	// (0x00062131) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd77,	// (0x00064dd1) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd77,	// (0x00064dd1) list_single_idle_plugin_shortcut_pane_g

0xd0ea,	// (0x00062144) cell_ai_shortcut_pane_ParamLimits

0xd0ea,	// (0x00062144) cell_ai_shortcut_pane

0xd10d,	// (0x00062167) cell_ai_shortcut_pane_g1_ParamLimits

0xd10d,	// (0x00062167) cell_ai_shortcut_pane_g1

0xcf39,	// (0x00061f93) ai_gene_pane_1_cp2

0xd12f,	// (0x00062189) ai_gene_pane_2_cp2

0xd137,	// (0x00062191) list_highlight_pane_cp15

0xd140,	// (0x0006219a) list_single_idle_plugin_calendar_pane_g1

0xd137,	// (0x00062191) list_highlight_pane_cp17

0xd148,	// (0x000621a2) list_single_idle_plugin_calendar_pane_g1_copy1

0xd150,	// (0x000621aa) list_single_idle_plugin_player_pane_g1

0xa230,	// (0x0005f28a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7e,	// (0x00064dd8) list_single_idle_plugin_player_pane_g

0xd158,	// (0x000621b2) list_single_idle_plugin_player_pane_t1

0xd166,	// (0x000621c0) list_single_idle_plugin_player_pane_t2

0xd174,	// (0x000621ce) list_single_idle_plugin_player_pane_t3

0xd182,	// (0x000621dc) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd83,	// (0x00064ddd) list_single_idle_plugin_player_pane_t

0xd190,	// (0x000621ea) wait_bar_pane_cp15

0xd198,	// (0x000621f2) grid_ai_notification_pane

0xa230,	// (0x0005f28a) list_single_idle_plugin_notification_pane_g1

0xd1a1,	// (0x000621fb) cell_ai_notification_pane_ParamLimits

0xd1a1,	// (0x000621fb) cell_ai_notification_pane

0xd1ae,	// (0x00062208) cell_ai_notification_pane_g1

0xd1b6,	// (0x00062210) cell_ai_notification_pane_t1

0xd1c4,	// (0x0006221e) tb_ext_find_button_pane

0xd1cc,	// (0x00062226) tb_ext_find_pane_g1

0xd1d4,	// (0x0006222e) tb_ext_find_pane_t1

0xf1aa,	// (0x00064204) tb_ext_find_button_pane_g1

0xd1e2,	// (0x0006223c) tb_ext_find_button_pane_g2

0x0001,

0xfd8c,	// (0x00064de6) tb_ext_find_button_pane_g

0xcf7e,	// (0x00061fd8) main_idle_act4_pane_t1_ParamLimits

0xcf90,	// (0x00061fea) main_idle_act4_pane_t2_ParamLimits

0xfd4a,	// (0x00064da4) main_idle_act4_pane_t_ParamLimits

0xcfb8,	// (0x00062012) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcfc6,	// (0x00062020) sat_plugin_idle_act4_pane_ParamLimits

0xcfc6,	// (0x00062020) sat_plugin_idle_act4_pane

0xd1eb,	// (0x00062245) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd1eb,	// (0x00062245) sat_plugin_idle_act4_pane_t1

0xd1fe,	// (0x00062258) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd1fe,	// (0x00062258) sat_plugin_idle_act4_pane_t2

0xd211,	// (0x0006226b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd211,	// (0x0006226b) sat_plugin_idle_act4_pane_t3

0xd224,	// (0x0006227e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd224,	// (0x0006227e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd91,	// (0x00064deb) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd91,	// (0x00064deb) sat_plugin_idle_act4_pane_t

0x4d45,	// (0x00059d9f) popup_battery_window_ParamLimits

0x4d45,	// (0x00059d9f) popup_battery_window

0xc232,	// (0x0006128c) bg_popup_sub_pane_cp25_ParamLimits

0xc232,	// (0x0006128c) bg_popup_sub_pane_cp25

0xd237,	// (0x00062291) popup_battery_window_g1_ParamLimits

0xd237,	// (0x00062291) popup_battery_window_g1

0xd243,	// (0x0006229d) popup_battery_window_t1_ParamLimits

0xd243,	// (0x0006229d) popup_battery_window_t1

0xd255,	// (0x000622af) popup_battery_window_t2_ParamLimits

0xd255,	// (0x000622af) popup_battery_window_t2

0x0001,

0xfd9a,	// (0x00064df4) popup_battery_window_t_ParamLimits

0xfd9a,	// (0x00064df4) popup_battery_window_t

0x6092,	// (0x0005b0ec) midp_canvas_pane_ParamLimits

0x60f4,	// (0x0005b14e) midp_keypad_pane_ParamLimits

0x60f4,	// (0x0005b14e) midp_keypad_pane

0x6498,	// (0x0005b4f2) main_midp_pane_ParamLimits

0xa997,	// (0x0005f9f1) signal_pane_g2_cp_ParamLimits

0xd272,	// (0x000622cc) aid_size_cell_midp_keypad_ParamLimits

0xd272,	// (0x000622cc) aid_size_cell_midp_keypad

0xd28c,	// (0x000622e6) midp_keyp_game_grid_pane_ParamLimits

0xd28c,	// (0x000622e6) midp_keyp_game_grid_pane

0xd2ac,	// (0x00062306) midp_keyp_rocker_pane_ParamLimits

0xd2ac,	// (0x00062306) midp_keyp_rocker_pane

0xd2d7,	// (0x00062331) midp_keyp_sk_left_pane_ParamLimits

0xd2d7,	// (0x00062331) midp_keyp_sk_left_pane

0xd331,	// (0x0006238b) midp_keyp_sk_right_pane_ParamLimits

0xd331,	// (0x0006238b) midp_keyp_sk_right_pane

0xc083,	// (0x000610dd) bg_button_pane_cp03

0xd38b,	// (0x000623e5) midp_keyp_sk_left_pane_g1

0xc083,	// (0x000610dd) bg_button_pane_cp04

0xd38b,	// (0x000623e5) midp_keyp_sk_right_pane_g1

0xae98,	// (0x0005fef2) midp_keyp_rocker_pane_g1

0xd394,	// (0x000623ee) keyp_game_cell_pane_ParamLimits

0xd394,	// (0x000623ee) keyp_game_cell_pane

0xc083,	// (0x000610dd) bg_button_pane_cp02

0xd3a7,	// (0x00062401) keyp_game_cell_pane_g1

0x4d8f,	// (0x00059de9) popup_fep_vkb2_window_ParamLimits

0x4d8f,	// (0x00059de9) popup_fep_vkb2_window

0x7190,	// (0x0005c1ea) aid_size_cell_vkb2_ParamLimits

0x7190,	// (0x0005c1ea) aid_size_cell_vkb2

0x71e4,	// (0x0005c23e) popup_fep_vkb2_window_g1_ParamLimits

0x71e4,	// (0x0005c23e) popup_fep_vkb2_window_g1

0x722c,	// (0x0005c286) vkb2_area_bottom_pane_ParamLimits

0x722c,	// (0x0005c286) vkb2_area_bottom_pane

0x7280,	// (0x0005c2da) vkb2_area_keypad_pane_ParamLimits

0x7280,	// (0x0005c2da) vkb2_area_keypad_pane

0x72c6,	// (0x0005c320) vkb2_area_top_pane_ParamLimits

0x72c6,	// (0x0005c320) vkb2_area_top_pane

0x7340,	// (0x0005c39a) vkb2_top_entry_pane_ParamLimits

0x7340,	// (0x0005c39a) vkb2_top_entry_pane

0x736a,	// (0x0005c3c4) vkb2_top_grid_left_pane_ParamLimits

0x736a,	// (0x0005c3c4) vkb2_top_grid_left_pane

0x7388,	// (0x0005c3e2) vkb2_top_grid_right_pane_ParamLimits

0x7388,	// (0x0005c3e2) vkb2_top_grid_right_pane

0x73a6,	// (0x0005c400) vkb2_cell_keypad_pane_ParamLimits

0x73a6,	// (0x0005c400) vkb2_cell_keypad_pane

0x7477,	// (0x0005c4d1) vkb2_area_bottom_grid_pane_ParamLimits

0x7477,	// (0x0005c4d1) vkb2_area_bottom_grid_pane

0x749d,	// (0x0005c4f7) vkb2_area_bottom_pane_g1_ParamLimits

0x749d,	// (0x0005c4f7) vkb2_area_bottom_pane_g1

0x74c1,	// (0x0005c51b) vkb2_area_bottom_pane_g2_ParamLimits

0x74c1,	// (0x0005c51b) vkb2_area_bottom_pane_g2

0x74ef,	// (0x0005c549) vkb2_area_bottom_pane_g3_ParamLimits

0x74ef,	// (0x0005c549) vkb2_area_bottom_pane_g3

0x0002,

0xfd9f,	// (0x00064df9) vkb2_area_bottom_pane_g_ParamLimits

0xfd9f,	// (0x00064df9) vkb2_area_bottom_pane_g

0x7550,	// (0x0005c5aa) vkb2_top_cell_left_pane_ParamLimits

0x7550,	// (0x0005c5aa) vkb2_top_cell_left_pane

0xd3b8,	// (0x00062412) vkb2_top_entry_pane_g1_ParamLimits

0xd3b8,	// (0x00062412) vkb2_top_entry_pane_g1

0xd3c6,	// (0x00062420) vkb2_top_entry_pane_t1_ParamLimits

0xd3c6,	// (0x00062420) vkb2_top_entry_pane_t1

0xd3f8,	// (0x00062452) vkb2_top_entry_pane_t2_ParamLimits

0xd3f8,	// (0x00062452) vkb2_top_entry_pane_t2

0xd42a,	// (0x00062484) vkb2_top_entry_pane_t3_ParamLimits

0xd42a,	// (0x00062484) vkb2_top_entry_pane_t3

0x0002,

0xfda6,	// (0x00064e00) vkb2_top_entry_pane_t_ParamLimits

0xfda6,	// (0x00064e00) vkb2_top_entry_pane_t

0x759d,	// (0x0005c5f7) vkb2_top_grid_right_pane_g1_ParamLimits

0x759d,	// (0x0005c5f7) vkb2_top_grid_right_pane_g1

0x75b3,	// (0x0005c60d) vkb2_top_grid_right_pane_g2_ParamLimits

0x75b3,	// (0x0005c60d) vkb2_top_grid_right_pane_g2

0x75cb,	// (0x0005c625) vkb2_top_grid_right_pane_g3_ParamLimits

0x75cb,	// (0x0005c625) vkb2_top_grid_right_pane_g3

0x75e3,	// (0x0005c63d) vkb2_top_grid_right_pane_g4_ParamLimits

0x75e3,	// (0x0005c63d) vkb2_top_grid_right_pane_g4

0x0003,

0xfdad,	// (0x00064e07) vkb2_top_grid_right_pane_g_ParamLimits

0xfdad,	// (0x00064e07) vkb2_top_grid_right_pane_g

0x75f9,	// (0x0005c653) vkb2_top_cell_left_pane_g1

0x7610,	// (0x0005c66a) vkb2_cell_keypad_pane_g1_ParamLimits

0x7610,	// (0x0005c66a) vkb2_cell_keypad_pane_g1

0xd44e,	// (0x000624a8) vkb2_cell_keypad_pane_t1_ParamLimits

0xd44e,	// (0x000624a8) vkb2_cell_keypad_pane_t1

0x761e,	// (0x0005c678) vkb2_cell_bottom_grid_pane_ParamLimits

0x761e,	// (0x0005c678) vkb2_cell_bottom_grid_pane

0x7657,	// (0x0005c6b1) vkb2_cell_bottom_grid_pane_g1

0xd006,	// (0x00062060) aid_call2_pane_cp02

0xd00e,	// (0x00062068) aid_call_pane_cp02

0xd016,	// (0x00062070) clock_digital_number_pane_cp10

0xd01e,	// (0x00062078) clock_digital_number_pane_cp11

0xd026,	// (0x00062080) clock_digital_number_pane_cp12

0xd02e,	// (0x00062088) clock_digital_number_pane_cp13

0xd036,	// (0x00062090) clock_digital_separator_pane_cp10

0xf1aa,	// (0x00064204) popup_clock_digital_analogue_window_cp2_g1

0xf1aa,	// (0x00064204) popup_clock_digital_analogue_window_cp2_g2

0xd03e,	// (0x00062098) popup_clock_digital_analogue_window_cp2_g3

0xf1aa,	// (0x00064204) popup_clock_digital_analogue_window_cp2_g4

0xd03e,	// (0x00062098) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd62,	// (0x00064dbc) popup_clock_digital_analogue_window_cp2_g

0xd046,	// (0x000620a0) popup_clock_digital_analogue_window_cp2_t1

0xd054,	// (0x000620ae) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6d,	// (0x00064dc7) popup_clock_digital_analogue_window_cp2_t

0xae98,	// (0x0005fef2) clock_digital_number_pane_cp10_g1

0xae98,	// (0x0005fef2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x00064ba3) clock_digital_number_pane_cp10_g

0xae98,	// (0x0005fef2) clock_digital_separator_pane_cp10_g1

0xae98,	// (0x0005fef2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x00064ba3) clock_digital_separator_pane_cp10_g

0xce81,	// (0x00061edb) uniindi_top_pane_g3

0xce92,	// (0x00061eec) uniindi_top_pane_g4

0x7431,	// (0x0005c48b) vkb2_row_keypad_pane_ParamLimits

0x7431,	// (0x0005c48b) vkb2_row_keypad_pane

0x7673,	// (0x0005c6cd) vkb2_cell_t_keypad_pane_ParamLimits

0x7673,	// (0x0005c6cd) vkb2_cell_t_keypad_pane

0x7683,	// (0x0005c6dd) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7683,	// (0x0005c6dd) vkb2_cell_t_keypad_pane_cp08

0x7698,	// (0x0005c6f2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7698,	// (0x0005c6f2) vkb2_cell_t_keypad_pane_cp09

0x76ac,	// (0x0005c706) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x76ac,	// (0x0005c706) vkb2_cell_t_keypad_pane_cp01

0x76bd,	// (0x0005c717) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x76bd,	// (0x0005c717) vkb2_cell_t_keypad_pane_cp02

0x76ce,	// (0x0005c728) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x76ce,	// (0x0005c728) vkb2_cell_t_keypad_pane_cp03

0x76df,	// (0x0005c739) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x76df,	// (0x0005c739) vkb2_cell_t_keypad_pane_cp04

0x76f0,	// (0x0005c74a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x76f0,	// (0x0005c74a) vkb2_cell_t_keypad_pane_cp05

0x7701,	// (0x0005c75b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7701,	// (0x0005c75b) vkb2_cell_t_keypad_pane_cp06

0x7714,	// (0x0005c76e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7714,	// (0x0005c76e) vkb2_cell_t_keypad_pane_cp07

0x7729,	// (0x0005c783) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7729,	// (0x0005c783) vkb2_cell_t_keypad_pane_cp10

0x6de3,	// (0x0005be3d) vkb2_cell_t_keypad_pane_g1

0xd465,	// (0x000624bf) vkb2_cell_t_keypad_pane_t1

0x4c80,	// (0x00059cda) popup_grid_graphic2_window

0xd477,	// (0x000624d1) aid_size_cell_graphic2_ParamLimits

0xd477,	// (0x000624d1) aid_size_cell_graphic2

0xd4af,	// (0x00062509) bg_popup_window_pane_cp21_ParamLimits

0xd4af,	// (0x00062509) bg_popup_window_pane_cp21

0xd4bd,	// (0x00062517) graphic2_pages_pane_ParamLimits

0xd4bd,	// (0x00062517) graphic2_pages_pane

0xd503,	// (0x0006255d) grid_graphic2_control_pane_ParamLimits

0xd503,	// (0x0006255d) grid_graphic2_control_pane

0xd541,	// (0x0006259b) grid_graphic2_pane_ParamLimits

0xd541,	// (0x0006259b) grid_graphic2_pane

0xd5b7,	// (0x00062611) cell_graphic2_pane

0xc083,	// (0x000610dd) main_comp_mode_pane

0xc6f2,	// (0x0006174c) list_ai3_gene_pane_ParamLimits

0xcaba,	// (0x00061b14) bg_popup_window_pane_cp19_ParamLimits

0xcac6,	// (0x00061b20) bg_touch_area_indi_pane_ParamLimits

0xcac6,	// (0x00061b20) bg_touch_area_indi_pane

0xcadc,	// (0x00061b36) bg_touch_area_indi_pane_cp01_ParamLimits

0xcadc,	// (0x00061b36) bg_touch_area_indi_pane_cp01

0xcaf4,	// (0x00061b4e) bg_touch_area_indi_pane_cp02_ParamLimits

0xcaf4,	// (0x00061b4e) bg_touch_area_indi_pane_cp02

0xcb0e,	// (0x00061b68) bg_touch_area_indi_pane_cp03_ParamLimits

0xcb0e,	// (0x00061b68) bg_touch_area_indi_pane_cp03

0xcb28,	// (0x00061b82) popup_slider_window_g1_ParamLimits

0xcb44,	// (0x00061b9e) popup_slider_window_g2_ParamLimits

0xcb60,	// (0x00061bba) popup_slider_window_g3_ParamLimits

0xfcf7,	// (0x00064d51) popup_slider_window_g_ParamLimits

0xcbbc,	// (0x00061c16) popup_slider_window_t1_ParamLimits

0xcc30,	// (0x00061c8a) small_volume_slider_vertical_pane_ParamLimits

0xd5b7,	// (0x00062611) cell_graphic2_pane_ParamLimits

0xd609,	// (0x00062663) bg_button_pane_cp10_ParamLimits

0xd609,	// (0x00062663) bg_button_pane_cp10

0xd61e,	// (0x00062678) bg_button_pane_cp11_ParamLimits

0xd61e,	// (0x00062678) bg_button_pane_cp11

0xd633,	// (0x0006268d) graphic2_pages_pane_g1_ParamLimits

0xd633,	// (0x0006268d) graphic2_pages_pane_g1

0xd64e,	// (0x000626a8) graphic2_pages_pane_g2_ParamLimits

0xd64e,	// (0x000626a8) graphic2_pages_pane_g2

0x0001,

0xfdbb,	// (0x00064e15) graphic2_pages_pane_g_ParamLimits

0xfdbb,	// (0x00064e15) graphic2_pages_pane_g

0xd666,	// (0x000626c0) graphic2_pages_pane_t1_ParamLimits

0xd666,	// (0x000626c0) graphic2_pages_pane_t1

0xd67c,	// (0x000626d6) cell_graphic2_control_pane_ParamLimits

0xd67c,	// (0x000626d6) cell_graphic2_control_pane

0xd69f,	// (0x000626f9) cell_graphic2_pane_g1_ParamLimits

0xd69f,	// (0x000626f9) cell_graphic2_pane_g1

0xd6ac,	// (0x00062706) cell_graphic2_pane_g2_ParamLimits

0xd6ac,	// (0x00062706) cell_graphic2_pane_g2

0xd6b9,	// (0x00062713) cell_graphic2_pane_g3_ParamLimits

0xd6b9,	// (0x00062713) cell_graphic2_pane_g3

0xd6c6,	// (0x00062720) cell_graphic2_pane_g4_ParamLimits

0xd6c6,	// (0x00062720) cell_graphic2_pane_g4

0xd6d3,	// (0x0006272d) cell_graphic2_pane_g5_ParamLimits

0xd6d3,	// (0x0006272d) cell_graphic2_pane_g5

0x0004,

0xfdc0,	// (0x00064e1a) cell_graphic2_pane_g_ParamLimits

0xfdc0,	// (0x00064e1a) cell_graphic2_pane_g

0xd6ee,	// (0x00062748) cell_graphic2_pane_t1_ParamLimits

0xd6ee,	// (0x00062748) cell_graphic2_pane_t1

0x873b,	// (0x0005d795) grid_highlight_pane_cp11_ParamLimits

0x873b,	// (0x0005d795) grid_highlight_pane_cp11

0xc232,	// (0x0006128c) bg_button_pane_cp05

0xd717,	// (0x00062771) cell_graphic2_control_pane_g1

0xae98,	// (0x0005fef2) bg_touch_area_indi_pane_g1

0xd73f,	// (0x00062799) aid_cmod_rocker_key_size

0xd749,	// (0x000627a3) aid_cmode_itu_key_size

0xd753,	// (0x000627ad) main_cmode_video_pane

0xd75d,	// (0x000627b7) main_comp_mode_itu_pane

0xd769,	// (0x000627c3) main_comp_mode_rocker_pane

0xd775,	// (0x000627cf) cell_cmode_rocker_pane_ParamLimits

0xd775,	// (0x000627cf) cell_cmode_rocker_pane

0xd789,	// (0x000627e3) cell_cmode_itu_pane_ParamLimits

0xd789,	// (0x000627e3) cell_cmode_itu_pane

0xecc8,	// (0x00063d22) bg_button_pane_cp06_ParamLimits

0xecc8,	// (0x00063d22) bg_button_pane_cp06

0xb113,	// (0x0006016d) cell_cmode_rocker_pane_g1_ParamLimits

0xb113,	// (0x0006016d) cell_cmode_rocker_pane_g1

0xccd7,	// (0x00061d31) cell_cmode_rocker_pane_g2_ParamLimits

0xccd7,	// (0x00061d31) cell_cmode_rocker_pane_g2

0x0001,

0xfdd0,	// (0x00064e2a) cell_cmode_rocker_pane_g_ParamLimits

0xfdd0,	// (0x00064e2a) cell_cmode_rocker_pane_g

0xc083,	// (0x000610dd) bg_button_pane_cp07

0xd7a0,	// (0x000627fa) cell_cmode_itu_pane_g1

0xd7a9,	// (0x00062803) cell_cmode_itu_pane_t1

0xd7b7,	// (0x00062811) cell_cmode_itu_pane_t2

0x0001,

0xfdd5,	// (0x00064e2f) cell_cmode_itu_pane_t

0xcf05,	// (0x00061f5f) aid_touch_ctrl_left

0xcf0d,	// (0x00061f67) aid_touch_ctrl_right

0xc083,	// (0x000610dd) compa_mode_pane

0xd7c5,	// (0x0006281f) aid_cmod_rocker_key_size_cp

0xd7cf,	// (0x00062829) aid_cmode_itu_key_size_cp

0xd7d9,	// (0x00062833) compa_mode_pane_g1

0xd7e1,	// (0x0006283b) compa_mode_pane_g2

0xd7e9,	// (0x00062843) compa_mode_pane_g3

0x0002,

0xfdda,	// (0x00064e34) compa_mode_pane_g

0xd7f1,	// (0x0006284b) main_comp_mode_itu_pane_cp

0xd7f9,	// (0x00062853) main_comp_mode_rocker_pane_cp

0xd801,	// (0x0006285b) cell_cmode_itu_pane_cp_ParamLimits

0xd801,	// (0x0006285b) cell_cmode_itu_pane_cp

0xd816,	// (0x00062870) cell_cmode_rocker_pane_cp_ParamLimits

0xd816,	// (0x00062870) cell_cmode_rocker_pane_cp

0xecc8,	// (0x00063d22) bg_button_pane_cp06_cp_ParamLimits

0xecc8,	// (0x00063d22) bg_button_pane_cp06_cp

0xb113,	// (0x0006016d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb113,	// (0x0006016d) cell_cmode_rocker_pane_g1_cp

0xae98,	// (0x0005fef2) cell_cmode_rocker_pane_g2_cp

0xc083,	// (0x000610dd) bg_button_pane_cp07_cp

0xd828,	// (0x00062882) cell_cmode_itu_pane_g1_cp

0xd831,	// (0x0006288b) cell_cmode_itu_pane_t1_cp

0xd831,	// (0x0006288b) cell_cmode_itu_pane_t2_cp

0x9c04,	// (0x0005ec5e) settings_code_pane_cp2

0xc0f1,	// (0x0006114b) bg_popup_window_pane_cp3_ParamLimits

0xc420,	// (0x0006147a) heading_pane_cp3_ParamLimits

0xc42c,	// (0x00061486) listscroll_popup_graphic_pane_ParamLimits

0x6b76,	// (0x0005bbd0) fep_hwr_aid_pane_ParamLimits

0x70e9,	// (0x0005c143) aid_touch_sctrl_top_ParamLimits

0x7104,	// (0x0005c15e) sctrl_sk_top_pane_g1_ParamLimits

0x6de3,	// (0x0005be3d) sctrl_sk_top_pane_g2_ParamLimits

0xfd10,	// (0x00064d6a) sctrl_sk_top_pane_g_ParamLimits

0x7111,	// (0x0005c16b) sctrl_sk_top_pane_t1_ParamLimits

0x70e9,	// (0x0005c143) aid_touch_sctrl_bottom_ParamLimits

0x7111,	// (0x0005c16b) sctrl_sk_bottom_pane_t1_ParamLimits

0xce4b,	// (0x00061ea5) aid_area_touch_clock

0x7308,	// (0x0005c362) aid_vkb2_area_top_pane_cell_ParamLimits

0x7308,	// (0x0005c362) aid_vkb2_area_top_pane_cell

0x7453,	// (0x0005c4ad) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7453,	// (0x0005c4ad) aid_vkb2_area_bottom_pane_cell

0xd3b0,	// (0x0006240a) popup_char_count_window

0xd83f,	// (0x00062899) popup_char_count_window_g1

0xd848,	// (0x000628a2) popup_char_count_window_g2

0xd851,	// (0x000628ab) popup_char_count_window_g3

0x0002,

0xfde1,	// (0x00064e3b) popup_char_count_window_g

0xd85a,	// (0x000628b4) popup_char_count_window_t1

0x71c2,	// (0x0005c21c) popup_fep_char_preview_window_ParamLimits

0x71c2,	// (0x0005c21c) popup_fep_char_preview_window

0x7326,	// (0x0005c380) vkb2_top_candi_pane_ParamLimits

0x7326,	// (0x0005c380) vkb2_top_candi_pane

0xd868,	// (0x000628c2) cell_vkb2_top_candi_pane_ParamLimits

0xd868,	// (0x000628c2) cell_vkb2_top_candi_pane

0x773e,	// (0x0005c798) bg_popup_fep_char_preview_window_ParamLimits

0x773e,	// (0x0005c798) bg_popup_fep_char_preview_window

0x774c,	// (0x0005c7a6) popup_fep_char_preview_window_t1_ParamLimits

0x774c,	// (0x0005c7a6) popup_fep_char_preview_window_t1

0xd8b9,	// (0x00062913) bg_popup_fep_char_preview_window_g1

0xd8c1,	// (0x0006291b) bg_popup_fep_char_preview_window_g2

0xd8c9,	// (0x00062923) bg_popup_fep_char_preview_window_g3

0xd8d1,	// (0x0006292b) bg_popup_fep_char_preview_window_g4

0xd8d9,	// (0x00062933) bg_popup_fep_char_preview_window_g5

0x7786,	// (0x0005c7e0) bg_popup_fep_char_preview_window_g6

0xd8e1,	// (0x0006293b) bg_popup_fep_char_preview_window_g7

0xd8e9,	// (0x00062943) bg_popup_fep_char_preview_window_g8

0xd8f1,	// (0x0006294b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde8,	// (0x00064e42) bg_popup_fep_char_preview_window_g

0x6de3,	// (0x0005be3d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6de3,	// (0x0005be3d) cell_vkb2_top_candi_pane_g1

0x6df1,	// (0x0005be4b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6df1,	// (0x0005be4b) cell_vkb2_top_candi_pane_g2

0xc6bb,	// (0x00061715) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc6bb,	// (0x00061715) cell_vkb2_top_candi_pane_g3

0x778e,	// (0x0005c7e8) cell_vkb2_top_candi_pane_g4_ParamLimits

0x778e,	// (0x0005c7e8) cell_vkb2_top_candi_pane_g4

0xb632,	// (0x0006068c) cell_vkb2_top_candi_pane_g5_ParamLimits

0xb632,	// (0x0006068c) cell_vkb2_top_candi_pane_g5

0x77af,	// (0x0005c809) cell_vkb2_top_candi_pane_g6_ParamLimits

0x77af,	// (0x0005c809) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfb,	// (0x00064e55) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfb,	// (0x00064e55) cell_vkb2_top_candi_pane_g

0x77bd,	// (0x0005c817) cell_vkb2_top_candi_pane_t1

0x694a,	// (0x0005b9a4) aid_size_touch_slider_mark_ParamLimits

0x694a,	// (0x0005b9a4) aid_size_touch_slider_mark

0xd4f3,	// (0x0006254d) grid_graphic2_catg_pane_ParamLimits

0xd4f3,	// (0x0006254d) grid_graphic2_catg_pane

0xd591,	// (0x000625eb) popup_grid_graphic2_window_t1_ParamLimits

0xd591,	// (0x000625eb) popup_grid_graphic2_window_t1

0xd5a3,	// (0x000625fd) popup_grid_graphic2_window_t2_ParamLimits

0xd5a3,	// (0x000625fd) popup_grid_graphic2_window_t2

0x0001,

0xfdb6,	// (0x00064e10) popup_grid_graphic2_window_t_ParamLimits

0xfdb6,	// (0x00064e10) popup_grid_graphic2_window_t

0xc232,	// (0x0006128c) bg_button_pane_cp05_ParamLimits

0xd717,	// (0x00062771) cell_graphic2_control_pane_g1_ParamLimits

0xd8f9,	// (0x00062953) cell_graphic2_catg_pane_ParamLimits

0xd8f9,	// (0x00062953) cell_graphic2_catg_pane

0xc083,	// (0x000610dd) bg_button_pane_cp12

0xd90b,	// (0x00062965) cell_graphic2_catg_pane_g1

0xce17,	// (0x00061e71) cell_tb_ext_pane_t1_ParamLimits

0x7570,	// (0x0005c5ca) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7570,	// (0x0005c5ca) vkb2_top_cell_right_narrow_pane

0x7588,	// (0x0005c5e2) vkb2_top_cell_right_wide_pane_ParamLimits

0x7588,	// (0x0005c5e2) vkb2_top_cell_right_wide_pane

0x6b68,	// (0x0005bbc2) bg_vkb2_func_pane_ParamLimits

0x6b68,	// (0x0005bbc2) bg_vkb2_func_pane

0x75f9,	// (0x0005c653) vkb2_top_cell_left_pane_g1_ParamLimits

0x6b68,	// (0x0005bbc2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6b68,	// (0x0005bbc2) bg_vkb2_fuc_pane_cp03

0x7657,	// (0x0005c6b1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x86cf,	// (0x0005d729) bg_vkb2_func_pane_g1

0x86d7,	// (0x0005d731) bg_vkb2_func_pane_g2

0x86e7,	// (0x0005d741) bg_vkb2_func_pane_g3

0x86df,	// (0x0005d739) bg_vkb2_func_pane_g4

0x86ef,	// (0x0005d749) bg_vkb2_func_pane_g5

0x86f7,	// (0x0005d751) bg_vkb2_func_pane_g6

0x86ff,	// (0x0005d759) bg_vkb2_func_pane_g7

0x8707,	// (0x0005d761) bg_vkb2_func_pane_g8

0x86c7,	// (0x0005d721) bg_vkb2_func_pane_g9

0x0008,

0xfe08,	// (0x00064e62) bg_vkb2_func_pane_g

0x6b68,	// (0x0005bbc2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6b68,	// (0x0005bbc2) bg_vkb2_fuc_pane_cp01

0x75f9,	// (0x0005c653) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x75f9,	// (0x0005c653) vkb2_top_cell_right_wide_pane_g1

0x6b68,	// (0x0005bbc2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6b68,	// (0x0005bbc2) bg_vkb2_fuc_pane_cp02

0x7657,	// (0x0005c6b1) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7657,	// (0x0005c6b1) vkb2_top_cell_right_narrow_pane_g1

0xca38,	// (0x00061a92) aid_touch_area_decrease_ParamLimits

0xca38,	// (0x00061a92) aid_touch_area_decrease

0xca5c,	// (0x00061ab6) aid_touch_area_increase_ParamLimits

0xca5c,	// (0x00061ab6) aid_touch_area_increase

0xca68,	// (0x00061ac2) aid_touch_area_mute_ParamLimits

0xca68,	// (0x00061ac2) aid_touch_area_mute

0xca8c,	// (0x00061ae6) aid_touch_area_slider_ParamLimits

0xca8c,	// (0x00061ae6) aid_touch_area_slider

0xcb7c,	// (0x00061bd6) popup_slider_window_g4_ParamLimits

0xcb7c,	// (0x00061bd6) popup_slider_window_g4

0xcb88,	// (0x00061be2) popup_slider_window_g5_ParamLimits

0xcb88,	// (0x00061be2) popup_slider_window_g5

0xcbaa,	// (0x00061c04) popup_slider_window_g6_ParamLimits

0xcbaa,	// (0x00061c04) popup_slider_window_g6

0xcbea,	// (0x00061c44) popup_slider_window_t2_ParamLimits

0xcbea,	// (0x00061c44) popup_slider_window_t2

0x0001,

0xfd04,	// (0x00064d5e) popup_slider_window_t_ParamLimits

0xfd04,	// (0x00064d5e) popup_slider_window_t

0xcc02,	// (0x00061c5c) slider_pane_ParamLimits

0xcc02,	// (0x00061c5c) slider_pane

0xd914,	// (0x0006296e) slider_pane_g1_ParamLimits

0xd914,	// (0x0006296e) slider_pane_g1

0xd928,	// (0x00062982) slider_pane_g2_ParamLimits

0xd928,	// (0x00062982) slider_pane_g2

0xd93e,	// (0x00062998) slider_pane_g3_ParamLimits

0xd93e,	// (0x00062998) slider_pane_g3

0x0003,

0xfe1b,	// (0x00064e75) slider_pane_g_ParamLimits

0xfe1b,	// (0x00064e75) slider_pane_g

0x80c0,	// (0x0005d11a) popup_tb_float_extension_window_ParamLimits

0x80c0,	// (0x0005d11a) popup_tb_float_extension_window

0xd96a,	// (0x000629c4) aid_size_cell_tb_float_ext

0xc083,	// (0x000610dd) bg_popup_sub_window_cp28

0xd976,	// (0x000629d0) grid_tb_float_ext_pane

0xd982,	// (0x000629dc) cell_tb_float_ext_pane_ParamLimits

0xd982,	// (0x000629dc) cell_tb_float_ext_pane

0xd99e,	// (0x000629f8) cell_tb_float_ext_pane_g1

0xd9a7,	// (0x00062a01) grid_highlight_pane_cp12

0x6cbd,	// (0x0005bd17) cell_last_hwr_side_pane_ParamLimits

0x6cbd,	// (0x0005bd17) cell_last_hwr_side_pane

0xae98,	// (0x0005fef2) cell_last_hwr_side_pane_g1

0xd9b0,	// (0x00062a0a) cell_last_hwr_side_pane_g2

0x0001,

0xfe24,	// (0x00064e7e) cell_last_hwr_side_pane_g

0x751f,	// (0x0005c579) vkb2_area_bottom_space_btn_pane_ParamLimits

0x751f,	// (0x0005c579) vkb2_area_bottom_space_btn_pane

0x6de3,	// (0x0005be3d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd465,	// (0x000624bf) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x77bd,	// (0x0005c817) cell_vkb2_top_candi_pane_t1_ParamLimits

0x77db,	// (0x0005c835) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x77db,	// (0x0005c835) vkb2_area_bottom_space_btn_pane_g1

0x7815,	// (0x0005c86f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7815,	// (0x0005c86f) vkb2_area_bottom_space_btn_pane_g2

0x784b,	// (0x0005c8a5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x784b,	// (0x0005c8a5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe29,	// (0x00064e83) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe29,	// (0x00064e83) vkb2_area_bottom_space_btn_pane_g

0x6c2d,	// (0x0005bc87) cel_fep_hwr_func_pane_ParamLimits

0x6c2d,	// (0x0005bc87) cel_fep_hwr_func_pane

0x6c69,	// (0x0005bcc3) cell_hwr_side_button_pane_ParamLimits

0x6c69,	// (0x0005bcc3) cell_hwr_side_button_pane

0xce4b,	// (0x00061ea5) aid_area_touch_clock_ParamLimits

0xc232,	// (0x0006128c) bg_uniindi_top_pane_ParamLimits

0xce5f,	// (0x00061eb9) uniindi_top_pane_g1_ParamLimits

0xce75,	// (0x00061ecf) uniindi_top_pane_g2_ParamLimits

0xce81,	// (0x00061edb) uniindi_top_pane_g3_ParamLimits

0xce92,	// (0x00061eec) uniindi_top_pane_g4_ParamLimits

0xfd3c,	// (0x00064d96) uniindi_top_pane_g_ParamLimits

0xce9f,	// (0x00061ef9) uniindi_top_pane_t1_ParamLimits

0xc232,	// (0x0006128c) bg_vkb2_func_pane_cp01_ParamLimits

0xc232,	// (0x0006128c) bg_vkb2_func_pane_cp01

0xd9b9,	// (0x00062a13) cel_fep_hwr_func_pane_g1_ParamLimits

0xd9b9,	// (0x00062a13) cel_fep_hwr_func_pane_g1

0xc232,	// (0x0006128c) bg_vkb2_func_pane_cp02_ParamLimits

0xc232,	// (0x0006128c) bg_vkb2_func_pane_cp02

0xd9b9,	// (0x00062a13) cell_hwr_side_button_pane_g1_ParamLimits

0xd9b9,	// (0x00062a13) cell_hwr_side_button_pane_g1

0x8548,	// (0x0005d5a2) status_pane_g4_ParamLimits

0x8548,	// (0x0005d5a2) status_pane_g4

0x8562,	// (0x0005d5bc) status_pane_t1

0xac37,	// (0x0005fc91) form2_midp_gauge_slider_cont_pane

0xac3f,	// (0x0005fc99) form2_midp_gauge_slider_pane_t1_ParamLimits

0xac51,	// (0x0005fcab) form2_midp_gauge_slider_pane_t2_ParamLimits

0xac63,	// (0x0005fcbd) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x00064b56) form2_midp_gauge_slider_pane_t_ParamLimits

0xac75,	// (0x0005fccf) form2_midp_slider_pane_ParamLimits

0x7182,	// (0x0005c1dc) aid_size_cell_func_vkb2_ParamLimits

0x7182,	// (0x0005c1dc) aid_size_cell_func_vkb2

0xd956,	// (0x000629b0) slider_pane_g4_ParamLimits

0xd956,	// (0x000629b0) slider_pane_g4

0x7895,	// (0x0005c8ef) form2_midp_gauge_slider_pane_t2_cp01

0x78a3,	// (0x0005c8fd) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x78a3,	// (0x0005c8fd) form2_midp_gauge_slider_pane_t3_cp01

0x78c0,	// (0x0005c91a) form2_midp_slider_pane_cp01

0xc083,	// (0x000610dd) navi_smil_pane

0xd9f2,	// (0x00062a4c) navi_smil_pane_g1

0xd9fa,	// (0x00062a54) navi_smil_pane_t1

0xd9c7,	// (0x00062a21) form2_midp_slider_pane_g1

0xd9d0,	// (0x00062a2a) form2_midp_slider_pane_g2

0xd9d8,	// (0x00062a32) form2_midp_slider_pane_g3

0xd9c7,	// (0x00062a21) form2_midp_slider_pane_g4

0xd9e0,	// (0x00062a3a) form2_midp_slider_pane_g5

0x0004,

0xfe32,	// (0x00064e8c) form2_midp_slider_pane_g

0x7885,	// (0x0005c8df) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7885,	// (0x0005c8df) vkb2_area_bottom_space_btn_pane_g4

0x835f,	// (0x0005d3b9) lc0_navi_pane_ParamLimits

0x835f,	// (0x0005d3b9) lc0_navi_pane

0x83db,	// (0x0005d435) lc0_stat_indi_pane_ParamLimits

0x83db,	// (0x0005d435) lc0_stat_indi_pane

0x83f2,	// (0x0005d44c) ls0_title_pane_ParamLimits

0x83f2,	// (0x0005d44c) ls0_title_pane

0xecc8,	// (0x00063d22) bg_popup_sub_pane_cp14_ParamLimits

0xce32,	// (0x00061e8c) list_uniindi_pane_ParamLimits

0xce3e,	// (0x00061e98) uniindi_top_pane_ParamLimits

0xcedd,	// (0x00061f37) list_single_uniindi_pane_g1_ParamLimits

0xcef0,	// (0x00061f4a) list_single_uniindi_pane_t1_ParamLimits

0x78c9,	// (0x0005c923) lc0_stat_clock_pane_ParamLimits

0x78c9,	// (0x0005c923) lc0_stat_clock_pane

0xda08,	// (0x00062a62) lc0_stat_indi_pane_g1_ParamLimits

0xda08,	// (0x00062a62) lc0_stat_indi_pane_g1

0xda15,	// (0x00062a6f) lc0_stat_indi_pane_g2_ParamLimits

0xda15,	// (0x00062a6f) lc0_stat_indi_pane_g2

0x0001,

0xfe3d,	// (0x00064e97) lc0_stat_indi_pane_g_ParamLimits

0xfe3d,	// (0x00064e97) lc0_stat_indi_pane_g

0x78d6,	// (0x0005c930) lc0_uni_indicator_pane_ParamLimits

0x78d6,	// (0x0005c930) lc0_uni_indicator_pane

0xda22,	// (0x00062a7c) ls0_title_pane_g1_ParamLimits

0xda22,	// (0x00062a7c) ls0_title_pane_g1

0xda36,	// (0x00062a90) ls0_title_pane_t1_ParamLimits

0xda36,	// (0x00062a90) ls0_title_pane_t1

0x78e3,	// (0x0005c93d) lc0_uni_indicator_pane_g1_ParamLimits

0x78e3,	// (0x0005c93d) lc0_uni_indicator_pane_g1

0xda6c,	// (0x00062ac6) lc0_stat_clock_pane_t1

0xc083,	// (0x000610dd) main_ai5_pane

0xda7a,	// (0x00062ad4) ai5_sk_pane_ParamLimits

0xda7a,	// (0x00062ad4) ai5_sk_pane

0xda87,	// (0x00062ae1) cell_ai5_widget_pane_ParamLimits

0xda87,	// (0x00062ae1) cell_ai5_widget_pane

0xe023,	// (0x0006307d) aid_size_cell_widget_grid

0xe031,	// (0x0006308b) bg_ai5_widget_pane_ParamLimits

0xe031,	// (0x0006308b) bg_ai5_widget_pane

0xe0a5,	// (0x000630ff) cell_ai5_widget_pane_g2

0xe0b5,	// (0x0006310f) cell_ai5_widget_pane_g3

0xe0cc,	// (0x00063126) cell_ai5_widget_pane_g4

0xe0d8,	// (0x00063132) cell_ai5_widget_pane_g5

0xe0e4,	// (0x0006313e) cell_ai5_widget_pane_g6

0xe0f0,	// (0x0006314a) cell_ai5_widget_pane_g7

0xe138,	// (0x00063192) cell_ai5_widget_pane_t1_ParamLimits

0xe138,	// (0x00063192) cell_ai5_widget_pane_t1

0xe155,	// (0x000631af) cell_ai5_widget_pane_t2_ParamLimits

0xe155,	// (0x000631af) cell_ai5_widget_pane_t2

0xe16d,	// (0x000631c7) cell_ai5_widget_pane_t3_ParamLimits

0xe16d,	// (0x000631c7) cell_ai5_widget_pane_t3

0xe185,	// (0x000631df) cell_ai5_widget_pane_t4_ParamLimits

0xe185,	// (0x000631df) cell_ai5_widget_pane_t4

0xe1a2,	// (0x000631fc) cell_ai5_widget_pane_t5_ParamLimits

0xe1a2,	// (0x000631fc) cell_ai5_widget_pane_t5

0xe1c1,	// (0x0006321b) cell_ai5_widget_pane_t6_ParamLimits

0xe1c1,	// (0x0006321b) cell_ai5_widget_pane_t6

0xe1d3,	// (0x0006322d) cell_ai5_widget_pane_t7_ParamLimits

0xe1d3,	// (0x0006322d) cell_ai5_widget_pane_t7

0xe1ec,	// (0x00063246) cell_ai5_widget_pane_t8_ParamLimits

0xe1ec,	// (0x00063246) cell_ai5_widget_pane_t8

0x0009,

0xfe57,	// (0x00064eb1) cell_ai5_widget_pane_t_ParamLimits

0xfe57,	// (0x00064eb1) cell_ai5_widget_pane_t

0xe240,	// (0x0006329a) grid_ai5_widget_pane

0xecc8,	// (0x00063d22) highlight_cell_ai5_widget_pane_ParamLimits

0xecc8,	// (0x00063d22) highlight_cell_ai5_widget_pane

0xe254,	// (0x000632ae) ai5_sk_left_pane

0xe25e,	// (0x000632b8) ai5_sk_middle_pane

0xe268,	// (0x000632c2) ai5_sk_right_pane

0xe272,	// (0x000632cc) bg_ai5_widget_pane_g1_ParamLimits

0xe272,	// (0x000632cc) bg_ai5_widget_pane_g1

0xe27e,	// (0x000632d8) bg_ai5_widget_pane_g2_ParamLimits

0xe27e,	// (0x000632d8) bg_ai5_widget_pane_g2

0xe28a,	// (0x000632e4) bg_ai5_widget_pane_g3_ParamLimits

0xe28a,	// (0x000632e4) bg_ai5_widget_pane_g3

0xe296,	// (0x000632f0) bg_ai5_widget_pane_g4_ParamLimits

0xe296,	// (0x000632f0) bg_ai5_widget_pane_g4

0xe2a2,	// (0x000632fc) bg_ai5_widget_pane_g5_ParamLimits

0xe2a2,	// (0x000632fc) bg_ai5_widget_pane_g5

0xe2ae,	// (0x00063308) bg_ai5_widget_pane_g6_ParamLimits

0xe2ae,	// (0x00063308) bg_ai5_widget_pane_g6

0xe2ba,	// (0x00063314) bg_ai5_widget_pane_g7_ParamLimits

0xe2ba,	// (0x00063314) bg_ai5_widget_pane_g7

0xe2c6,	// (0x00063320) bg_ai5_widget_pane_g8_ParamLimits

0xe2c6,	// (0x00063320) bg_ai5_widget_pane_g8

0xe2d2,	// (0x0006332c) bg_ai5_widget_pane_g9_ParamLimits

0xe2d2,	// (0x0006332c) bg_ai5_widget_pane_g9

0x0008,

0xfe6c,	// (0x00064ec6) bg_ai5_widget_pane_g_ParamLimits

0xfe6c,	// (0x00064ec6) bg_ai5_widget_pane_g

0xe308,	// (0x00063362) cell_shortcut_ai5_widget_pane_ParamLimits

0xe308,	// (0x00063362) cell_shortcut_ai5_widget_pane

0x3331,	// (0x0005838b) bg_cell_shortcut_ai5_widget_pane

0xe31b,	// (0x00063375) cell_grid_ai5_widget_pane_g1

0x3331,	// (0x0005838b) highlight_cell_shortcut_ai5_widget_pane

0x86cf,	// (0x0005d729) ai5_sk_left_pane_g1

0xe324,	// (0x0006337e) ai5_sk_left_pane_g2

0xe32c,	// (0x00063386) ai5_sk_left_pane_g3

0xe334,	// (0x0006338e) ai5_sk_left_pane_g4

0x0003,

0xfe7f,	// (0x00064ed9) ai5_sk_left_pane_g

0xe33c,	// (0x00063396) ai5_sk_left_pane_t1

0x86d7,	// (0x0005d731) ai5_sk_right_pane_g1

0xe34a,	// (0x000633a4) ai5_sk_right_pane_g2

0xe352,	// (0x000633ac) ai5_sk_right_pane_g3

0xe35a,	// (0x000633b4) ai5_sk_right_pane_g4

0x0003,

0xfe88,	// (0x00064ee2) ai5_sk_right_pane_g

0xe362,	// (0x000633bc) ai5_sk_right_pane_t1

0x86d7,	// (0x0005d731) ai5_sk_middle_pane_g1

0x86cf,	// (0x0005d729) ai5_sk_middle_pane_g2

0x86ef,	// (0x0005d749) ai5_sk_middle_pane_g3

0xe352,	// (0x000633ac) ai5_sk_middle_pane_g4

0xe32c,	// (0x00063386) ai5_sk_middle_pane_g5

0xe370,	// (0x000633ca) ai5_sk_middle_pane_g6

0xe378,	// (0x000633d2) ai5_sk_middle_pane_g7

0x0006,

0xfe91,	// (0x00064eeb) ai5_sk_middle_pane_g

0x81e1,	// (0x0005d23b) aid_touch_area_size_lc0_ParamLimits

0x81e1,	// (0x0005d23b) aid_touch_area_size_lc0

0x6e12,	// (0x0005be6c) cell_hwr_candidate_pane_t1_ParamLimits

0x81ff,	// (0x0005d259) aid_touch_navi_pane

0x84f2,	// (0x0005d54c) status_dt_navi_pane_ParamLimits

0x84f2,	// (0x0005d54c) status_dt_navi_pane

0x84ff,	// (0x0005d559) status_dt_sta_pane_ParamLimits

0x84ff,	// (0x0005d559) status_dt_sta_pane

0xe380,	// (0x000633da) dt_sta_controll_pane

0xe38d,	// (0x000633e7) dt_sta_indi_pane

0xe39e,	// (0x000633f8) dt_sta_title_pane

0xc232,	// (0x0006128c) bg_dt_sta_indi_pane_ParamLimits

0xc232,	// (0x0006128c) bg_dt_sta_indi_pane

0xe3b1,	// (0x0006340b) dt_sta_battery_pane

0xe3b9,	// (0x00063413) dt_sta_indi_pane_g1

0xe3c2,	// (0x0006341c) dt_sta_indi_pane_g2

0xe3cb,	// (0x00063425) dt_sta_indi_pane_g3

0x0002,

0xfea0,	// (0x00064efa) dt_sta_indi_pane_g

0xe3d4,	// (0x0006342e) dt_sta_signal_pane

0xecc8,	// (0x00063d22) bg_dt_sta_title_pane_ParamLimits

0xecc8,	// (0x00063d22) bg_dt_sta_title_pane

0xe3dd,	// (0x00063437) dt_sta_title_pane_g1

0xe3e5,	// (0x0006343f) dt_sta_title_pane_t1_ParamLimits

0xe3e5,	// (0x0006343f) dt_sta_title_pane_t1

0xc083,	// (0x000610dd) bg_dt_sta_control_pane

0xe3fa,	// (0x00063454) dt_sta_controll_pane_g1

0xe403,	// (0x0006345d) bg_dt_sta_title_pane_g1

0xe40c,	// (0x00063466) bg_dt_sta_title_pane_g2

0xe415,	// (0x0006346f) bg_dt_sta_title_pane_g3

0x0002,

0xfea7,	// (0x00064f01) bg_dt_sta_title_pane_g

0xae98,	// (0x0005fef2) bg_dt_sta_indi_pane_g1

0xe41e,	// (0x00063478) dt_sta_signal_pane_g1

0xe426,	// (0x00063480) dt_sta_signal_pane_g2

0x0001,

0xfeae,	// (0x00064f08) dt_sta_signal_pane_g

0xe42e,	// (0x00063488) dt_sta_battery_pane_g1

0xe437,	// (0x00063491) dt_sta_battery_pane_t1

0xae98,	// (0x0005fef2) bg_dt_sta_control_pane_g1

0xf22c,	// (0x00064286) fep_china_uni_eep_pane

0xf234,	// (0x0006428e) fep_china_uni_entry_pane_ParamLimits

0xf244,	// (0x0006429e) popup_fep_china_uni_window_g1_ParamLimits

0xf254,	// (0x000642ae) popup_fep_china_uni_window_g2_ParamLimits

0xf254,	// (0x000642ae) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0006477c) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0006477c) popup_fep_china_uni_window_g

0xe446,	// (0x000634a0) fep_china_uni_eep_pane_g1

0xe44e,	// (0x000634a8) fep_china_uni_eep_pane_t1

0xd9e9,	// (0x00062a43) aid_touch_area_size_smil_player

0x8357,	// (0x0005d3b1) lc0_clock_pane

0x8556,	// (0x0005d5b0) status_pane_g5_ParamLimits

0x8556,	// (0x0005d5b0) status_pane_g5

0x7d45,	// (0x0005cd9f) popup_keymap_window

0x8514,	// (0x0005d56e) status_icon_pane

0xe0b5,	// (0x0006310f) cell_ai5_widget_pane_g3_ParamLimits

0xe0cc,	// (0x00063126) cell_ai5_widget_pane_g4_ParamLimits

0xe0d8,	// (0x00063132) cell_ai5_widget_pane_g5_ParamLimits

0xe0fc,	// (0x00063156) cell_ai5_widget_pane_g8_ParamLimits

0xe0fc,	// (0x00063156) cell_ai5_widget_pane_g8

0xe110,	// (0x0006316a) cell_ai5_widget_pane_g9_ParamLimits

0xe110,	// (0x0006316a) cell_ai5_widget_pane_g9

0xe124,	// (0x0006317e) cell_ai5_widget_pane_g10_ParamLimits

0xe124,	// (0x0006317e) cell_ai5_widget_pane_g10

0xe45d,	// (0x000634b7) status_icon_pane_g1

0xc083,	// (0x000610dd) bg_popup_sub_pane_cp13

0xe465,	// (0x000634bf) popup_keymap_window_t1

0x6314,	// (0x0005b36e) control_pane_g6_ParamLimits

0x6314,	// (0x0005b36e) control_pane_g6

0x6321,	// (0x0005b37b) control_pane_g7_ParamLimits

0x6321,	// (0x0005b37b) control_pane_g7

0x632e,	// (0x0005b388) control_pane_g8_ParamLimits

0x632e,	// (0x0005b388) control_pane_g8

0xe380,	// (0x000633da) dt_sta_controll_pane_ParamLimits

0xe38d,	// (0x000633e7) dt_sta_indi_pane_ParamLimits

0xe39e,	// (0x000633f8) dt_sta_title_pane_ParamLimits

0xc656,	// (0x000616b0) aid_size_touch_scroll_bar_cale

0x4d5d,	// (0x00059db7) popup_discreet_window_ParamLimits

0x4d5d,	// (0x00059db7) popup_discreet_window

0x4deb,	// (0x00059e45) popup_sk_window

0x8d17,	// (0x0005dd71) bg_popup_sub_pane_cp28_ParamLimits

0x8d17,	// (0x0005dd71) bg_popup_sub_pane_cp28

0xe473,	// (0x000634cd) popup_discreet_window_g1_ParamLimits

0xe473,	// (0x000634cd) popup_discreet_window_g1

0xe493,	// (0x000634ed) popup_discreet_window_t1_ParamLimits

0xe493,	// (0x000634ed) popup_discreet_window_t1

0xe4b1,	// (0x0006350b) popup_discreet_window_t2_ParamLimits

0xe4b1,	// (0x0006350b) popup_discreet_window_t2

0x0002,

0xfeb3,	// (0x00064f0d) popup_discreet_window_t_ParamLimits

0xfeb3,	// (0x00064f0d) popup_discreet_window_t

0x78f6,	// (0x0005c950) popup_sk_window_g1

0x7900,	// (0x0005c95a) popup_sk_window_g2

0x0001,

0xfeba,	// (0x00064f14) popup_sk_window_g

0x790a,	// (0x0005c964) popup_sk_window_t1

0x791a,	// (0x0005c974) popup_sk_window_t1_copy1

0xe0a5,	// (0x000630ff) cell_ai5_widget_pane_g2_ParamLimits

0xe1fe,	// (0x00063258) cell_ai5_widget_pane_t9_ParamLimits

0xe1fe,	// (0x00063258) cell_ai5_widget_pane_t9

0xc083,	// (0x000610dd) main_fep_fshwr2_pane

0x7928,	// (0x0005c982) aid_fshwr2_btn_pane

0x7934,	// (0x0005c98e) aid_fshwr2_syb_pane

0x7940,	// (0x0005c99a) aid_fshwr2_txt_pane

0x794c,	// (0x0005c9a6) fshwr2_func_candi_pane

0x795f,	// (0x0005c9b9) fshwr2_hwr_syb_pane

0x796d,	// (0x0005c9c7) fshwr2_icf_pane

0x4c80,	// (0x00059cda) fshwr2_icf_bg_pane

0x799c,	// (0x0005c9f6) fshwr2_icf_pane_t1_ParamLimits

0x799c,	// (0x0005c9f6) fshwr2_icf_pane_t1

0xf1aa,	// (0x00064204) fshwr2_func_candi_pane_g1

0xe503,	// (0x0006355d) fshwr2_func_candi_row_pane_ParamLimits

0xe503,	// (0x0006355d) fshwr2_func_candi_row_pane

0x79b4,	// (0x0005ca0e) cell_fshwr2_syb_pane_ParamLimits

0x79b4,	// (0x0005ca0e) cell_fshwr2_syb_pane

0x6de3,	// (0x0005be3d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6de3,	// (0x0005be3d) fshwr2_hwr_syb_pane_g1

0x4c80,	// (0x00059cda) bg_popup_call_pane_cp01

0x79ca,	// (0x0005ca24) fshwr2_func_candi_cell_pane_ParamLimits

0x79ca,	// (0x0005ca24) fshwr2_func_candi_cell_pane

0xe513,	// (0x0006356d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe513,	// (0x0006356d) fshwr2_func_candi_cell_bg_pane

0x79fe,	// (0x0005ca58) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x79fe,	// (0x0005ca58) fshwr2_func_candi_cell_pane_g1

0x7a1e,	// (0x0005ca78) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7a1e,	// (0x0005ca78) fshwr2_func_candi_cell_pane_t1

0x4c80,	// (0x00059cda) bg_button_pane_cp08

0xe51f,	// (0x00063579) cell_fshwr2_syb_bg_pane

0x7a31,	// (0x0005ca8b) cell_fshwr2_syb_bg_pane_g1

0x7a39,	// (0x0005ca93) cell_fshwr2_syb_bg_pane_t1

0xecc8,	// (0x00063d22) main_tmo_pane

0x983b,	// (0x0005e895) uni_indicator_pane_g1_ParamLimits

0x9851,	// (0x0005e8ab) uni_indicator_pane_g2_ParamLimits

0x9867,	// (0x0005e8c1) uni_indicator_pane_g3_ParamLimits

0x987c,	// (0x0005e8d6) uni_indicator_pane_g4_ParamLimits

0x987c,	// (0x0005e8d6) uni_indicator_pane_g4

0x9890,	// (0x0005e8ea) uni_indicator_pane_g5_ParamLimits

0x9890,	// (0x0005e8ea) uni_indicator_pane_g5

0x9890,	// (0x0005e8ea) uni_indicator_pane_g6_ParamLimits

0x9890,	// (0x0005e8ea) uni_indicator_pane_g6

0xf926,	// (0x00064980) uni_indicator_pane_g_ParamLimits

0xca08,	// (0x00061a62) popup_tmo_note_window_ParamLimits

0xca08,	// (0x00061a62) popup_tmo_note_window

0x7164,	// (0x0005c1be) fshwr2_bg_pane

0x7a0f,	// (0x0005ca69) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7a0f,	// (0x0005ca69) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebf,	// (0x00064f19) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebf,	// (0x00064f19) fshwr2_func_candi_cell_pane_g

0x6dcb,	// (0x0005be25) bg_popup_window_pane_cp01

0x7a48,	// (0x0005caa2) bg_popup_window_pane_g1_cp01

0xe527,	// (0x00063581) bg_popup_window_pane_cp22_ParamLimits

0xe527,	// (0x00063581) bg_popup_window_pane_cp22

0xe535,	// (0x0006358f) listscroll_tmo_link_pane_ParamLimits

0xe535,	// (0x0006358f) listscroll_tmo_link_pane

0xe575,	// (0x000635cf) popup_tmo_note_window_g1_ParamLimits

0xe575,	// (0x000635cf) popup_tmo_note_window_g1

0xe582,	// (0x000635dc) tmo_note_info_pane_ParamLimits

0xe582,	// (0x000635dc) tmo_note_info_pane

0xe59c,	// (0x000635f6) list_tmo_note_info_pane_g1_ParamLimits

0xe59c,	// (0x000635f6) list_tmo_note_info_pane_g1

0xe5b3,	// (0x0006360d) list_tmo_note_info_pane_g2_ParamLimits

0xe5b3,	// (0x0006360d) list_tmo_note_info_pane_g2

0x0001,

0xfec4,	// (0x00064f1e) list_tmo_note_info_pane_g_ParamLimits

0xfec4,	// (0x00064f1e) list_tmo_note_info_pane_g

0xe5cf,	// (0x00063629) list_tmo_note_info_text_pane_ParamLimits

0xe5cf,	// (0x00063629) list_tmo_note_info_text_pane

0xe654,	// (0x000636ae) list_tmo_link_pane

0xe661,	// (0x000636bb) scroll_pane_cp20

0xe66e,	// (0x000636c8) list_single_tmo_link_pane_ParamLimits

0xe66e,	// (0x000636c8) list_single_tmo_link_pane

0xe67e,	// (0x000636d8) list_single_tmo_link_pane_t1

0xe68c,	// (0x000636e6) list_tmo_note_info_text_pane_t1_ParamLimits

0xe68c,	// (0x000636e6) list_tmo_note_info_text_pane_t1

0x58f7,	// (0x0005a951) aid_size_touch_scroll_bar_cp01_ParamLimits

0x58f7,	// (0x0005a951) aid_size_touch_scroll_bar_cp01

0x5834,	// (0x0005a88e) aid_size_touch_slider_marker

0x4dd3,	// (0x00059e2d) popup_settings_window_ParamLimits

0x4dd3,	// (0x00059e2d) popup_settings_window

0x34a4,	// (0x000584fe) popup_candi_list_indi_window

0x81ff,	// (0x0005d259) aid_touch_navi_pane_ParamLimits

0x70bd,	// (0x0005c117) rs_clock_indi_pane

0x70c6,	// (0x0005c120) sctrl_sk_bottom_pane_ParamLimits

0x70d7,	// (0x0005c131) sctrl_sk_top_pane_ParamLimits

0x71dc,	// (0x0005c236) popup_fep_tooltip_window

0xe023,	// (0x0006307d) aid_size_cell_widget_grid_ParamLimits

0xe090,	// (0x000630ea) cell_ai5_widget_pane_g1_ParamLimits

0xe090,	// (0x000630ea) cell_ai5_widget_pane_g1

0xe0e4,	// (0x0006313e) cell_ai5_widget_pane_g6_ParamLimits

0xe0f0,	// (0x0006314a) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe42,	// (0x00064e9c) cell_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x00064e9c) cell_ai5_widget_pane_g

0xe222,	// (0x0006327c) cell_ai5_widget_pane_t10_ParamLimits

0xe222,	// (0x0006327c) cell_ai5_widget_pane_t10

0xe240,	// (0x0006329a) grid_ai5_widget_pane_ParamLimits

0xe2de,	// (0x00063338) cell_contacts_ai5_widget_pane_ParamLimits

0xe2de,	// (0x00063338) cell_contacts_ai5_widget_pane

0xe4c6,	// (0x00063520) popup_discreet_window_t3_ParamLimits

0xe4c6,	// (0x00063520) popup_discreet_window_t3

0x7984,	// (0x0005c9de) popup_fshwr2_char_preview_window_ParamLimits

0x7984,	// (0x0005c9de) popup_fshwr2_char_preview_window

0xe5ed,	// (0x00063647) tmo_note_info_pane_t1

0xe602,	// (0x0006365c) tmo_note_info_pane_t2

0xe61b,	// (0x00063675) tmo_note_info_pane_t3

0xe630,	// (0x0006368a) tmo_note_info_pane_t4

0xe642,	// (0x0006369c) tmo_note_info_pane_t5

0x0004,

0xfec9,	// (0x00064f23) tmo_note_info_pane_t

0xe654,	// (0x000636ae) list_tmo_link_pane_ParamLimits

0xe661,	// (0x000636bb) scroll_pane_cp20_ParamLimits

0x4c80,	// (0x00059cda) bg_popup_fep_char_preview_window_cp01

0xe6a5,	// (0x000636ff) popup_fshwr2_char_preview_window_t1

0xe6b3,	// (0x0006370d) popup_candi_list_indi_window_g1

0xe6bc,	// (0x00063716) bg_cell_contacts_ai5_widget_pane

0xe6c8,	// (0x00063722) cell_contacts_ai5_widget_pane_g1

0xe6dd,	// (0x00063737) cell_contacts_ai5_widget_pane_g2

0xe6e9,	// (0x00063743) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed4,	// (0x00064f2e) cell_contacts_ai5_widget_pane_g

0xe6f5,	// (0x0006374f) cell_contacts_ai5_widget_pane_t1

0xecc8,	// (0x00063d22) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe76c,	// (0x000637c6) settings_container_pane

0x3331,	// (0x0005838b) listscroll_set_pane_copy1

0xa5b9,	// (0x0005f613) scroll_pane_cp121_copy1

0xe778,	// (0x000637d2) set_content_pane_copy1

0xe780,	// (0x000637da) aid_height_set_list_copy1_ParamLimits

0xe780,	// (0x000637da) aid_height_set_list_copy1

0x9a90,	// (0x0005eaea) aid_size_parent_copy1_ParamLimits

0x9a90,	// (0x0005eaea) aid_size_parent_copy1

0xe78c,	// (0x000637e6) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe78c,	// (0x000637e6) button_value_adjust_pane_cp6_copy1

0x6498,	// (0x0005b4f2) list_highlight_pane_cp2_copy1_ParamLimits

0x6498,	// (0x0005b4f2) list_highlight_pane_cp2_copy1

0xe7a0,	// (0x000637fa) list_set_pane_copy1_ParamLimits

0xe7a0,	// (0x000637fa) list_set_pane_copy1

0xe707,	// (0x00063761) main_pane_set_t1_copy1_ParamLimits

0xe707,	// (0x00063761) main_pane_set_t1_copy1

0xe741,	// (0x0006379b) main_pane_set_t2_copy1_ParamLimits

0xe741,	// (0x0006379b) main_pane_set_t2_copy1

0xe867,	// (0x000638c1) main_pane_set_t3_copy1

0xe875,	// (0x000638cf) main_pane_set_t4_copy1

0xe760,	// (0x000637ba) set_content_pane_g1_copy1_ParamLimits

0xe760,	// (0x000637ba) set_content_pane_g1_copy1

0xe883,	// (0x000638dd) setting_code_pane_copy1

0xe88b,	// (0x000638e5) setting_slider_graphic_pane_copy1

0xe88b,	// (0x000638e5) setting_slider_pane_copy1

0xe88b,	// (0x000638e5) setting_text_pane_copy1

0xe88b,	// (0x000638e5) setting_volume_pane_copy1

0xe883,	// (0x000638dd) settings_code_pane_cp2_copy1

0xe893,	// (0x000638ed) settings_code_pane_cp_copy1_ParamLimits

0xe893,	// (0x000638ed) settings_code_pane_cp_copy1

0x7a51,	// (0x0005caab) volume_set_pane_copy1

0xe8a7,	// (0x00063901) volume_set_pane_g10_copy1

0xe8b3,	// (0x0006390d) volume_set_pane_g1_copy1

0xe8bd,	// (0x00063917) volume_set_pane_g2_copy1

0xe8c7,	// (0x00063921) volume_set_pane_g3_copy1

0xe8d1,	// (0x0006392b) volume_set_pane_g4_copy1

0xe8db,	// (0x00063935) volume_set_pane_g5_copy1

0xe8e5,	// (0x0006393f) volume_set_pane_g6_copy1

0xe8ef,	// (0x00063949) volume_set_pane_g7_copy1

0xe8f9,	// (0x00063953) volume_set_pane_g8_copy1

0xe903,	// (0x0006395d) volume_set_pane_g9_copy1

0xc0f1,	// (0x0006114b) bg_set_opt_pane_cp_copy1_ParamLimits

0xc0f1,	// (0x0006114b) bg_set_opt_pane_cp_copy1

0x7a5d,	// (0x0005cab7) setting_slider_pane_t1_copy1_ParamLimits

0x7a5d,	// (0x0005cab7) setting_slider_pane_t1_copy1

0x7a7b,	// (0x0005cad5) setting_slider_pane_t2_copy1_ParamLimits

0x7a7b,	// (0x0005cad5) setting_slider_pane_t2_copy1

0x7a95,	// (0x0005caef) setting_slider_pane_t3_copy1_ParamLimits

0x7a95,	// (0x0005caef) setting_slider_pane_t3_copy1

0x7aad,	// (0x0005cb07) slider_set_pane_copy1_ParamLimits

0x7aad,	// (0x0005cb07) slider_set_pane_copy1

0xed23,	// (0x00063d7d) set_opt_bg_pane_g1_copy2

0xed2b,	// (0x00063d85) set_opt_bg_pane_g2_copy2

0xe90d,	// (0x00063967) set_opt_bg_pane_g3_copy2

0xed3b,	// (0x00063d95) set_opt_bg_pane_g4_copy2

0xed43,	// (0x00063d9d) set_opt_bg_pane_g5_copy2

0xed4b,	// (0x00063da5) set_opt_bg_pane_g6_copy2

0xe917,	// (0x00063971) set_opt_bg_pane_g7_copy2

0xe921,	// (0x0006397b) set_opt_bg_pane_g8_copy2

0xe92b,	// (0x00063985) set_opt_bg_pane_g9_copy2

0x7ac3,	// (0x0005cb1d) aid_size_touch_slider_mark_copy1_ParamLimits

0x7ac3,	// (0x0005cb1d) aid_size_touch_slider_mark_copy1

0xe935,	// (0x0006398f) slider_set_pane_g1_copy1

0x7ad7,	// (0x0005cb31) slider_set_pane_g2_copy1

0x696a,	// (0x0005b9c4) slider_set_pane_g3_copy1_ParamLimits

0x696a,	// (0x0005b9c4) slider_set_pane_g3_copy1

0x697e,	// (0x0005b9d8) slider_set_pane_g4_copy1_ParamLimits

0x697e,	// (0x0005b9d8) slider_set_pane_g4_copy1

0x6996,	// (0x0005b9f0) slider_set_pane_g5_copy1_ParamLimits

0x6996,	// (0x0005b9f0) slider_set_pane_g5_copy1

0x696a,	// (0x0005b9c4) slider_set_pane_g6_copy1_ParamLimits

0x696a,	// (0x0005b9c4) slider_set_pane_g6_copy1

0x7adf,	// (0x0005cb39) slider_set_pane_g7_copy1_ParamLimits

0x7adf,	// (0x0005cb39) slider_set_pane_g7_copy1

0xc097,	// (0x000610f1) bg_set_opt_pane_cp2_copy1

0xe93e,	// (0x00063998) setting_slider_graphic_pane_g1_copy1

0xe947,	// (0x000639a1) setting_slider_graphic_pane_t1_copy1

0xe957,	// (0x000639b1) setting_slider_graphic_pane_t2_copy1

0xe967,	// (0x000639c1) slider_set_pane_cp_copy1

0xe977,	// (0x000639d1) input_focus_pane_cp1_copy1

0xe980,	// (0x000639da) list_set_text_pane_copy1

0xe988,	// (0x000639e2) setting_text_pane_g1_copy1

0x3117,	// (0x00058171) set_text_pane_t1_copy1

0xe977,	// (0x000639d1) input_focus_pane_cp2_copy1

0xe988,	// (0x000639e2) setting_code_pane_g1_copy1

0xe991,	// (0x000639eb) setting_code_pane_t1_copy1

0xe99f,	// (0x000639f9) list_set_graphic_pane_copy1

0xc097,	// (0x000610f1) bg_set_opt_pane_cp4_copy1

0x5fd3,	// (0x0005b02d) list_set_graphic_pane_g1_copy1_ParamLimits

0x5fd3,	// (0x0005b02d) list_set_graphic_pane_g1_copy1

0xe9b1,	// (0x00063a0b) list_set_graphic_pane_g2_copy1

0x5feb,	// (0x0005b045) list_set_graphic_pane_t1_copy1_ParamLimits

0x5feb,	// (0x0005b045) list_set_graphic_pane_t1_copy1

0xae98,	// (0x0005fef2) rs_clock_indi_pane_g1

0xe9b9,	// (0x00063a13) rs_clock_indi_pane_t1

0xe9c7,	// (0x00063a21) rs_indi_pane

0xe9cf,	// (0x00063a29) rs_indi_pane_g1

0xe9d8,	// (0x00063a32) rs_indi_pane_g2

0xe9e1,	// (0x00063a3b) rs_indi_pane_g3

0x0002,

0xfedb,	// (0x00064f35) rs_indi_pane_g

0x3331,	// (0x0005838b) bg_popup_preview_window_pane_cp03

0xe9ea,	// (0x00063a44) popup_fep_tooltip_window_t1

0xbb4f,	// (0x00060ba9) popup_note2_window_g2_ParamLimits

0xbb4f,	// (0x00060ba9) popup_note2_window_g2

0x0001,

0xfc74,	// (0x00064cce) popup_note2_window_g_ParamLimits

0xfc74,	// (0x00064cce) popup_note2_window_g

0xc057,	// (0x000610b1) bg_popup_sub_pane_cp11_ParamLimits

0xc064,	// (0x000610be) cell_ai3_links_pane_g1_ParamLimits

0xc6dc,	// (0x00061736) cell_ai3_links_pane_t1

0x3117,	// (0x00058171) set_text_pane_t1_copy1_ParamLimits

0x606a,	// (0x0005b0c4) cell_graphic_popup_pane_cp2_ParamLimits

0x606a,	// (0x0005b0c4) cell_graphic_popup_pane_cp2

0xe9f8,	// (0x00063a52) cell_graphic_popup_pane_g1_cp2

0xc469,	// (0x000614c3) cell_graphic_popup_pane_g2_cp2

0xea00,	// (0x00063a5a) cell_graphic_popup_pane_g3_cp2

0xea08,	// (0x00063a62) cell_graphic_popup_pane_t2_cp2

0xc47a,	// (0x000614d4) grid_highlight_pane_cp3_cp2

0xefcc,	// (0x00064026) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xecc8,	// (0x00063d22) main_tmo_pane_ParamLimits

0xc9fc,	// (0x00061a56) popup_tmo_big_image_note_window

0xe07f,	// (0x000630d9) cell_ai5_widget_list_pane

0xe087,	// (0x000630e1) cell_ai5_widget_lrg_icon_pane

0xe5ed,	// (0x00063647) tmo_note_info_pane_t1_ParamLimits

0xe602,	// (0x0006365c) tmo_note_info_pane_t2_ParamLimits

0xe61b,	// (0x00063675) tmo_note_info_pane_t3_ParamLimits

0xe630,	// (0x0006368a) tmo_note_info_pane_t4_ParamLimits

0xe642,	// (0x0006369c) tmo_note_info_pane_t5_ParamLimits

0xfec9,	// (0x00064f23) tmo_note_info_pane_t_ParamLimits

0xe76c,	// (0x000637c6) settings_container_pane_ParamLimits

0xe96f,	// (0x000639c9) indicator_popup_pane_cp5

0xe96f,	// (0x000639c9) indicator_popup_pane_cp6

0xe99f,	// (0x000639f9) list_set_graphic_pane_copy1_ParamLimits

0xc083,	// (0x000610dd) bg_popup_window_pane_cp23

0xea16,	// (0x00063a70) popup_tmo_big_image_note_window_g1

0xea22,	// (0x00063a7c) popup_tmo_big_image_note_window_t1

0xea32,	// (0x00063a8c) popup_tmo_big_image_note_window_t2

0xea42,	// (0x00063a9c) popup_tmo_big_image_note_window_t3

0x0002,

0xfee2,	// (0x00064f3c) popup_tmo_big_image_note_window_t

0xae98,	// (0x0005fef2) cell_ai5_widget_lrg_icon_pane_g1

0xea52,	// (0x00063aac) cell_ai5_widget_lrg_icon_pane_t1

0xea60,	// (0x00063aba) cell_ai5_widget_list_row_pane_ParamLimits

0xea60,	// (0x00063aba) cell_ai5_widget_list_row_pane

0xea78,	// (0x00063ad2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xea78,	// (0x00063ad2) cell_ai5_widget_list_row_pane_g1

0xea85,	// (0x00063adf) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xea85,	// (0x00063adf) cell_ai5_widget_list_row_pane_t1

0xeab0,	// (0x00063b0a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xeab0,	// (0x00063b0a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee9,	// (0x00064f43) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee9,	// (0x00064f43) cell_ai5_widget_list_row_pane_t

0x4c80,	// (0x00059cda) main_fep_vtchi_ss_pane

0x7b11,	// (0x0005cb6b) popup_fep_char_pre_window

0x7b19,	// (0x0005cb73) popup_fep_ituss_window

0x7b3a,	// (0x0005cb94) popup_fep_vkbss_window

0xead8,	// (0x00063b32) grid_vkbss_keypad_pane_ParamLimits

0xead8,	// (0x00063b32) grid_vkbss_keypad_pane

0xeae8,	// (0x00063b42) ituss_keypad_pane

0x7b68,	// (0x0005cbc2) aid_vkbss_key_offset_ParamLimits

0x7b68,	// (0x0005cbc2) aid_vkbss_key_offset

0x7b74,	// (0x0005cbce) cell_vkbss_key_pane_ParamLimits

0x7b74,	// (0x0005cbce) cell_vkbss_key_pane

0xeaf7,	// (0x00063b51) bg_cell_vkbss_key_g1_ParamLimits

0xeaf7,	// (0x00063b51) bg_cell_vkbss_key_g1

0xeb03,	// (0x00063b5d) cell_vkbss_key_3p_pane_ParamLimits

0xeb03,	// (0x00063b5d) cell_vkbss_key_3p_pane

0xeb1d,	// (0x00063b77) cell_vkbss_key_g1_ParamLimits

0xeb1d,	// (0x00063b77) cell_vkbss_key_g1

0xeb37,	// (0x00063b91) cell_vkbss_key_t1_ParamLimits

0xeb37,	// (0x00063b91) cell_vkbss_key_t1

0x7b8a,	// (0x0005cbe4) cell_ituss_key_pane_ParamLimits

0x7b8a,	// (0x0005cbe4) cell_ituss_key_pane

0xeb62,	// (0x00063bbc) bg_cell_ituss_key_g1_ParamLimits

0xeb62,	// (0x00063bbc) bg_cell_ituss_key_g1

0xeb6e,	// (0x00063bc8) cell_ituss_key_pane_g1_ParamLimits

0xeb6e,	// (0x00063bc8) cell_ituss_key_pane_g1

0x7b9b,	// (0x0005cbf5) cell_ituss_key_pane_g2_ParamLimits

0x7b9b,	// (0x0005cbf5) cell_ituss_key_pane_g2

0x0002,

0xfef0,	// (0x00064f4a) cell_ituss_key_pane_g_ParamLimits

0xfef0,	// (0x00064f4a) cell_ituss_key_pane_g

0x7bc7,	// (0x0005cc21) cell_ituss_key_t1_ParamLimits

0x7bc7,	// (0x0005cc21) cell_ituss_key_t1

0x7c01,	// (0x0005cc5b) cell_ituss_key_t2_ParamLimits

0x7c01,	// (0x0005cc5b) cell_ituss_key_t2

0x7c32,	// (0x0005cc8c) cell_ituss_key_t3_ParamLimits

0x7c32,	// (0x0005cc8c) cell_ituss_key_t3

0x7c01,	// (0x0005cc5b) cell_ituss_key_t4_ParamLimits

0x7c01,	// (0x0005cc5b) cell_ituss_key_t4

0x0004,

0xfef7,	// (0x00064f51) cell_ituss_key_t_ParamLimits

0xfef7,	// (0x00064f51) cell_ituss_key_t

0xeb94,	// (0x00063bee) cell_vkbss_key_3p_pane_g1

0xeb9c,	// (0x00063bf6) cell_vkbss_key_3p_pane_g2

0xeba4,	// (0x00063bfe) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x00064f5c) cell_vkbss_key_3p_pane_g

0x4c80,	// (0x00059cda) bg_popup_fep_char_preview_window_cp02

0x7c75,	// (0x0005cccf) popup_fep_char_pre_window_t1

0xe019,	// (0x00063073) main_ai5_sk_pane

0xe6bc,	// (0x00063716) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe6c8,	// (0x00063722) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe6dd,	// (0x00063737) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe6e9,	// (0x00063743) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed4,	// (0x00064f2e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe6f5,	// (0x0006374f) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xecc8,	// (0x00063d22) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xebac,	// (0x00063c06) main_ai5_sk_pane_g1

0x8b4f,	// (0x0005dba9) popup_query_code_window_g1

0x7b2f,	// (0x0005cb89) popup_fep_vkb_icf_pane

0x7b45,	// (0x0005cb9f) popup_fep_vtchi_icf_pane

0xebb5,	// (0x00063c0f) bg_icf_pane

0xebc1,	// (0x00063c1b) list_vkb_icf_pane

0xebcd,	// (0x00063c27) bg_icf_pane_cp01

0xebd9,	// (0x00063c33) vtchi_icf_list_pane

0xebea,	// (0x00063c44) list_vkb_icf_pane_t1_ParamLimits

0xebea,	// (0x00063c44) list_vkb_icf_pane_t1

0xec00,	// (0x00063c5a) vtchi_icf_list_pane_t1_ParamLimits

0xec00,	// (0x00063c5a) vtchi_icf_list_pane_t1

0x7b19,	// (0x0005cb73) popup_fep_ituss_window_ParamLimits

0x7b45,	// (0x0005cb9f) popup_fep_vtchi_icf_pane_ParamLimits

0xeae8,	// (0x00063b42) ituss_keypad_pane_ParamLimits

0x7b5c,	// (0x0005cbb6) ituss_sks_pane

0xebb5,	// (0x00063c0f) bg_icf_pane_ParamLimits

0x7af5,	// (0x0005cb4f) icf_edit_indi_pane_ParamLimits

0x7af5,	// (0x0005cb4f) icf_edit_indi_pane

0xebc1,	// (0x00063c1b) list_vkb_icf_pane_ParamLimits

0xebcd,	// (0x00063c27) bg_icf_pane_cp01_ParamLimits

0x7b04,	// (0x0005cb5e) icf_edit_indi_pane_cp01_ParamLimits

0x7b04,	// (0x0005cb5e) icf_edit_indi_pane_cp01

0xebe1,	// (0x00063c3b) vtchi_query_pane

0x6de3,	// (0x0005be3d) icf_edit_indi_pane_g1_ParamLimits

0x6de3,	// (0x0005be3d) icf_edit_indi_pane_g1

0x7c97,	// (0x0005ccf1) icf_edit_indi_pane_g2_ParamLimits

0x7c97,	// (0x0005ccf1) icf_edit_indi_pane_g2

0x0001,

0xff1a,	// (0x00064f74) icf_edit_indi_pane_g_ParamLimits

0xff1a,	// (0x00064f74) icf_edit_indi_pane_g

0x7ca6,	// (0x0005cd00) icf_edit_indi_pane_t1

0xec18,	// (0x00063c72) bg_input_focus_pane_cp042

0xc64d,	// (0x000616a7) vtchi_button_pane

0xec21,	// (0x00063c7b) vtchi_query_pane_t1

0xec2f,	// (0x00063c89) vtchi_query_pane_t2

0xec3d,	// (0x00063c97) vtchi_query_pane_t3

0x0002,

0xff09,	// (0x00064f63) vtchi_query_pane_t

0x4c80,	// (0x00059cda) bg_button_pane_cp13

0xec4b,	// (0x00063ca5) vtchi_button_pane_g1

0x7c84,	// (0x0005ccde) ituss_sks_pane_g1

0x7c8f,	// (0x0005cce9) ituss_sks_pane_g2

0x0001,

0xff10,	// (0x00064f6a) ituss_sks_pane_g

0xec53,	// (0x00063cad) ituss_sks_pane_t1

0xec61,	// (0x00063cbb) ituss_sks_pane_t2

0x0001,

0xff15,	// (0x00064f6f) ituss_sks_pane_t

0xa948,	// (0x0005f9a2) indicator_nsta_pane_cp_g1

0xa951,	// (0x0005f9ab) indicator_nsta_pane_cp_g2

0xa959,	// (0x0005f9b3) indicator_nsta_pane_cp_g3

0xa961,	// (0x0005f9bb) indicator_nsta_pane_cp_g4

0xa969,	// (0x0005f9c3) indicator_nsta_pane_cp_g5

0xa971,	// (0x0005f9cb) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x00064b0c) indicator_nsta_pane_cp_g

0xd704,	// (0x0006275e) cell_graphic2_pane_t2_ParamLimits

0xd704,	// (0x0006275e) cell_graphic2_pane_t2

0x0001,

0xfdcb,	// (0x00064e25) cell_graphic2_pane_t_ParamLimits

0xfdcb,	// (0x00064e25) cell_graphic2_pane_t

0xd731,	// (0x0006278b) cell_graphic2_control_pane_t1

0x5d1d,	// (0x0005ad77) signal_pane_g3_ParamLimits

0x5d1d,	// (0x0005ad77) signal_pane_g3

0x5d2f,	// (0x0005ad89) signal_pane_g4_ParamLimits

0x5d2f,	// (0x0005ad89) signal_pane_g4

0xeac2,	// (0x00063b1c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xeac2,	// (0x00063b1c) cell_ai5_widget_list_row_pane_t3

0xeb82,	// (0x00063bdc) cell_ituss_key_pane_t1_ParamLimits

0xeb82,	// (0x00063bdc) cell_ituss_key_pane_t1

0x87cc,	// (0x0005d826) form_field_data_wide_pane_vc_t2_ParamLimits

0x87cc,	// (0x0005d826) form_field_data_wide_pane_vc_t2

0x87e0,	// (0x0005d83a) form_field_data_wide_pane_vc_t3_ParamLimits

0x87e0,	// (0x0005d83a) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00064868) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00064868) form_field_data_wide_pane_vc_t

0xa5f9,	// (0x0005f653) form_field_slider_wide_pane_vc_t3_ParamLimits

0xa5f9,	// (0x0005f653) form_field_slider_wide_pane_vc_t3

0xa6cf,	// (0x0005f729) form_field_popup_wide_pane_vc_t2_ParamLimits

0xa6cf,	// (0x0005f729) form_field_popup_wide_pane_vc_t2

0xa6e6,	// (0x0005f740) form_field_popup_wide_pane_vc_t3_ParamLimits

0xa6e6,	// (0x0005f740) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa1,	// (0x00064afb) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa1,	// (0x00064afb) form_field_popup_wide_pane_vc_t

0x7928,	// (0x0005c982) aid_fshwr2_btn_pane_ParamLimits

0x7934,	// (0x0005c98e) aid_fshwr2_syb_pane_ParamLimits

0x7940,	// (0x0005c99a) aid_fshwr2_txt_pane_ParamLimits

0x7164,	// (0x0005c1be) fshwr2_bg_pane_ParamLimits

0x794c,	// (0x0005c9a6) fshwr2_func_candi_pane_ParamLimits

0x795f,	// (0x0005c9b9) fshwr2_hwr_syb_pane_ParamLimits

0x796d,	// (0x0005c9c7) fshwr2_icf_pane_ParamLimits

0x9dae,	// (0x0005ee08) list_double_graphic_pane_vc_g4_ParamLimits

0x9dae,	// (0x0005ee08) list_double_graphic_pane_vc_g4

0x7bbb,	// (0x0005cc15) cell_ituss_key_pane_g3_ParamLimits

0x7bbb,	// (0x0005cc15) cell_ituss_key_pane_g3

0x7c63,	// (0x0005ccbd) cell_ituss_key_t5_ParamLimits

0x7c63,	// (0x0005ccbd) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
