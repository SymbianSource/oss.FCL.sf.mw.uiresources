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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000098aa };

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
0x1370,	// (0x0000ac1a) Screen

0x137a,	// (0x0000ac24) application_window_ParamLimits

0x137a,	// (0x0000ac24) application_window

0x726f,	// (0x00010b19) screen_g1

0xc993,	// (0x0001623d) area_bottom_pane_ParamLimits

0xc993,	// (0x0001623d) area_bottom_pane

0x5037,	// (0x0000e8e1) area_top_pane_ParamLimits

0x5037,	// (0x0000e8e1) area_top_pane

0x50cb,	// (0x0000e975) main_pane_ParamLimits

0x50cb,	// (0x0000e975) main_pane

0x7279,	// (0x00010b23) misc_graphics

0x28ce,	// (0x0000c178) battery_pane_ParamLimits

0x28ce,	// (0x0000c178) battery_pane

0x9f5b,	// (0x00013805) bg_status_flat_pane_g8

0x9f63,	// (0x0001380d) bg_status_flat_pane_g9

0x92ee,	// (0x00012b98) context_pane_ParamLimits

0x92ee,	// (0x00012b98) context_pane

0x2a37,	// (0x0000c2e1) navi_pane_ParamLimits

0x2a37,	// (0x0000c2e1) navi_pane

0x2aad,	// (0x0000c357) signal_pane_ParamLimits

0x2aad,	// (0x0000c357) signal_pane

0x0008,

0xf86f,	// (0x00019119) bg_status_flat_pane_g

0x2b39,	// (0x0000c3e3) status_pane_g1_ParamLimits

0x2b39,	// (0x0000c3e3) status_pane_g1

0x2b4f,	// (0x0000c3f9) status_pane_g2_ParamLimits

0x2b4f,	// (0x0000c3f9) status_pane_g2

0x950b,	// (0x00012db5) status_pane_g3_ParamLimits

0x950b,	// (0x00012db5) status_pane_g3

0x0004,

0xf79b,	// (0x00019045) status_pane_g_ParamLimits

0xf79b,	// (0x00019045) status_pane_g

0x2b5b,	// (0x0000c405) title_pane_ParamLimits

0x2b5b,	// (0x0000c405) title_pane

0x2bb6,	// (0x0000c460) uni_indicator_pane_ParamLimits

0x2bb6,	// (0x0000c460) uni_indicator_pane

0x914e,	// (0x000129f8) bg_list_pane_ParamLimits

0x914e,	// (0x000129f8) bg_list_pane

0x229b,	// (0x0000bb45) find_pane

0xcd08,	// (0x000165b2) listscroll_app_pane_ParamLimits

0xcd08,	// (0x000165b2) listscroll_app_pane

0x9182,	// (0x00012a2c) listscroll_form_pane

0xcd18,	// (0x000165c2) listscroll_gen_pane_ParamLimits

0xcd18,	// (0x000165c2) listscroll_gen_pane

0x5944,	// (0x0000f1ee) listscroll_set_pane

0xaaa6,	// (0x00014350) main_idle_act_pane

0x8e5a,	// (0x00012704) main_idle_trad_pane

0x8e5a,	// (0x00012704) main_list_empty_pane

0x919c,	// (0x00012a46) main_midp_pane

0x91a8,	// (0x00012a52) main_pane_g1_ParamLimits

0x91a8,	// (0x00012a52) main_pane_g1

0xcd2c,	// (0x000165d6) popup_ai_message_window_ParamLimits

0xcd2c,	// (0x000165d6) popup_ai_message_window

0xcdb1,	// (0x0001665b) popup_fep_china_uni_window_ParamLimits

0xcdb1,	// (0x0001665b) popup_fep_china_uni_window

0x5a2e,	// (0x0000f2d8) popup_fep_japan_candidate_window_ParamLimits

0x5a2e,	// (0x0000f2d8) popup_fep_japan_candidate_window

0x5a4c,	// (0x0000f2f6) popup_fep_japan_predictive_window_ParamLimits

0x5a4c,	// (0x0000f2f6) popup_fep_japan_predictive_window

0xcdef,	// (0x00016699) popup_find_window

0xce08,	// (0x000166b2) popup_grid_graphic_window_ParamLimits

0xce08,	// (0x000166b2) popup_grid_graphic_window

0x5aab,	// (0x0000f355) popup_large_graphic_colour_window

0xce84,	// (0x0001672e) popup_menu_window_ParamLimits

0xce84,	// (0x0001672e) popup_menu_window

0xcfe2,	// (0x0001688c) popup_note_image_window

0xcfaa,	// (0x00016854) popup_note_wait_window_ParamLimits

0xcfaa,	// (0x00016854) popup_note_wait_window

0xcff8,	// (0x000168a2) popup_note_window_ParamLimits

0xcff8,	// (0x000168a2) popup_note_window

0xd08c,	// (0x00016936) popup_query_code_window_ParamLimits

0xd08c,	// (0x00016936) popup_query_code_window

0x5c7d,	// (0x0000f527) popup_query_data_code_window_ParamLimits

0x5c7d,	// (0x0000f527) popup_query_data_code_window

0xd0c4,	// (0x0001696e) popup_query_data_window_ParamLimits

0xd0c4,	// (0x0001696e) popup_query_data_window

0xd138,	// (0x000169e2) popup_query_sat_info_window_ParamLimits

0xd138,	// (0x000169e2) popup_query_sat_info_window

0xd1c5,	// (0x00016a6f) popup_snote_single_graphic_window_ParamLimits

0xd1c5,	// (0x00016a6f) popup_snote_single_graphic_window

0xd1c5,	// (0x00016a6f) popup_snote_single_text_window_ParamLimits

0xd1c5,	// (0x00016a6f) popup_snote_single_text_window

0x5cec,	// (0x0000f596) popup_sub_window_general

0x5dfa,	// (0x0000f6a4) popup_window_general_ParamLimits

0x5dfa,	// (0x0000f6a4) popup_window_general

0x91be,	// (0x00012a68) power_save_pane

0xcb9c,	// (0x00016446) control_pane_g1_ParamLimits

0xcb9c,	// (0x00016446) control_pane_g1

0xcbc3,	// (0x0001646d) control_pane_g2_ParamLimits

0xcbc3,	// (0x0001646d) control_pane_g2

0x9111,	// (0x000129bb) control_pane_g3_ParamLimits

0x9111,	// (0x000129bb) control_pane_g3

0x0007,

0xf783,	// (0x0001902d) control_pane_g_ParamLimits

0xf783,	// (0x0001902d) control_pane_g

0xcbfe,	// (0x000164a8) control_pane_t1_ParamLimits

0xcbfe,	// (0x000164a8) control_pane_t1

0xcc61,	// (0x0001650b) control_pane_t2_ParamLimits

0xcc61,	// (0x0001650b) control_pane_t2

0x0002,

0xf794,	// (0x0001903e) control_pane_t_ParamLimits

0xf794,	// (0x0001903e) control_pane_t

0x2063,	// (0x0000b90d) navi_navi_volume_pane_cp1

0x206b,	// (0x0000b915) status_small_icon_pane

0x9048,	// (0x000128f2) status_small_pane_g1_ParamLimits

0x9048,	// (0x000128f2) status_small_pane_g1

0x2073,	// (0x0000b91d) status_small_pane_g2_ParamLimits

0x2073,	// (0x0000b91d) status_small_pane_g2

0x207f,	// (0x0000b929) status_small_pane_g3_ParamLimits

0x207f,	// (0x0000b929) status_small_pane_g3

0x208b,	// (0x0000b935) status_small_pane_g4_ParamLimits

0x208b,	// (0x0000b935) status_small_pane_g4

0x2097,	// (0x0000b941) status_small_pane_g5_ParamLimits

0x2097,	// (0x0000b941) status_small_pane_g5

0x20a3,	// (0x0000b94d) status_small_pane_g6_ParamLimits

0x20a3,	// (0x0000b94d) status_small_pane_g6

0x0007,

0xf772,	// (0x0001901c) status_small_pane_g_ParamLimits

0xf772,	// (0x0001901c) status_small_pane_g

0x20d2,	// (0x0000b97c) status_small_pane_t1

0x20f4,	// (0x0000b99e) status_small_wait_pane_ParamLimits

0x20f4,	// (0x0000b99e) status_small_wait_pane

0x1ebe,	// (0x0000b768) aid_levels_signal_ParamLimits

0x1ebe,	// (0x0000b768) aid_levels_signal

0x1ed6,	// (0x0000b780) signal_pane_g1_ParamLimits

0x1ed6,	// (0x0000b780) signal_pane_g1

0x1ef1,	// (0x0000b79b) signal_pane_g2_ParamLimits

0x1ef1,	// (0x0000b79b) signal_pane_g2

0x0003,

0xf703,	// (0x00018fad) signal_pane_g_ParamLimits

0xf703,	// (0x00018fad) signal_pane_g

0x88cf,	// (0x00012179) context_pane_g1

0x155a,	// (0x0000ae04) title_pane_g1

0x1591,	// (0x0000ae3b) title_pane_t1

0x7321,	// (0x00010bcb) title_pane_t2

0x7347,	// (0x00010bf1) title_pane_t3

0x0002,

0xf557,	// (0x00018e01) title_pane_t

0x2bdc,	// (0x0000c486) aid_levels_battery_ParamLimits

0x2bdc,	// (0x0000c486) aid_levels_battery

0x2bf8,	// (0x0000c4a2) battery_pane_g1_ParamLimits

0x2bf8,	// (0x0000c4a2) battery_pane_g1

0x2c15,	// (0x0000c4bf) battery_pane_g2_ParamLimits

0x2c15,	// (0x0000c4bf) battery_pane_g2

0x0001,

0xf7a6,	// (0x00019050) battery_pane_g_ParamLimits

0xf7a6,	// (0x00019050) battery_pane_g

0x2e44,	// (0x0000c6ee) uni_indicator_pane_g1

0x2e5a,	// (0x0000c704) uni_indicator_pane_g2

0x2e70,	// (0x0000c71a) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x000191c1) uni_indicator_pane_g

0x8cda,	// (0x00012584) navi_icon_pane_ParamLimits

0x8cda,	// (0x00012584) navi_icon_pane

0x8c20,	// (0x000124ca) navi_midp_pane

0x8cf6,	// (0x000125a0) navi_navi_pane

0x8d00,	// (0x000125aa) navi_text_pane_ParamLimits

0x8d00,	// (0x000125aa) navi_text_pane

0x726f,	// (0x00010b19) status_small_wait_pane_g1

0x7786,	// (0x00011030) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x000191bc) status_small_wait_pane_g

0xa58c,	// (0x00013e36) navi_navi_icon_text_pane

0xa594,	// (0x00013e3e) navi_navi_pane_g1_ParamLimits

0xa594,	// (0x00013e3e) navi_navi_pane_g1

0xa5a6,	// (0x00013e50) navi_navi_pane_g2_ParamLimits

0xa5a6,	// (0x00013e50) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0001918a) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0001918a) navi_navi_pane_g

0xa5b8,	// (0x00013e62) navi_navi_tabs_pane

0xa5c1,	// (0x00013e6b) navi_navi_text_pane

0xa58c,	// (0x00013e36) navi_navi_volume_pane

0xa568,	// (0x00013e12) navi_text_pane_t1

0xa55c,	// (0x00013e06) navi_icon_pane_g1

0xa4b1,	// (0x00013d5b) navi_navi_text_pane_t1

0x60ec,	// (0x0000f996) navi_navi_volume_pane_g1

0x60f4,	// (0x0000f99e) volume_small_pane

0xa417,	// (0x00013cc1) navi_navi_icon_text_pane_g1

0xa41f,	// (0x00013cc9) navi_navi_icon_text_pane_t1

0x8cf6,	// (0x000125a0) navi_tabs_2_long_pane

0x8cf6,	// (0x000125a0) navi_tabs_2_pane

0x8cf6,	// (0x000125a0) navi_tabs_3_long_pane

0x8cf6,	// (0x000125a0) navi_tabs_3_pane

0x8cf6,	// (0x000125a0) navi_tabs_4_pane

0x60cc,	// (0x0000f976) tabs_2_active_pane_ParamLimits

0x60cc,	// (0x0000f976) tabs_2_active_pane

0x60dc,	// (0x0000f986) tabs_2_passive_pane_ParamLimits

0x60dc,	// (0x0000f986) tabs_2_passive_pane

0x609a,	// (0x0000f944) tabs_3_active_pane_ParamLimits

0x609a,	// (0x0000f944) tabs_3_active_pane

0x60aa,	// (0x0000f954) tabs_3_passive_pane_ParamLimits

0x60aa,	// (0x0000f954) tabs_3_passive_pane

0x60bb,	// (0x0000f965) tabs_3_passive_pane_cp_ParamLimits

0x60bb,	// (0x0000f965) tabs_3_passive_pane_cp

0x6056,	// (0x0000f900) tabs_4_active_pane_ParamLimits

0x6056,	// (0x0000f900) tabs_4_active_pane

0x6067,	// (0x0000f911) tabs_4_passive_pane_ParamLimits

0x6067,	// (0x0000f911) tabs_4_passive_pane

0x6078,	// (0x0000f922) tabs_4_passive_pane_cp_ParamLimits

0x6078,	// (0x0000f922) tabs_4_passive_pane_cp

0x6089,	// (0x0000f933) tabs_4_passive_pane_cp2_ParamLimits

0x6089,	// (0x0000f933) tabs_4_passive_pane_cp2

0x6036,	// (0x0000f8e0) tabs_2_long_active_pane_ParamLimits

0x6036,	// (0x0000f8e0) tabs_2_long_active_pane

0x6046,	// (0x0000f8f0) tabs_2_long_passive_pane_ParamLimits

0x6046,	// (0x0000f8f0) tabs_2_long_passive_pane

0x6003,	// (0x0000f8ad) tabs_3_long_active_pane_ParamLimits

0x6003,	// (0x0000f8ad) tabs_3_long_active_pane

0x6014,	// (0x0000f8be) tabs_3_long_passive_pane_ParamLimits

0x6014,	// (0x0000f8be) tabs_3_long_passive_pane

0x6025,	// (0x0000f8cf) tabs_3_long_passive_pane_cp_ParamLimits

0x6025,	// (0x0000f8cf) tabs_3_long_passive_pane_cp

0x5fa9,	// (0x0000f853) volume_small_pane_g1

0x5fb2,	// (0x0000f85c) volume_small_pane_g2

0x5fbb,	// (0x0000f865) volume_small_pane_g3

0x5fc4,	// (0x0000f86e) volume_small_pane_g4

0x5fcd,	// (0x0000f877) volume_small_pane_g5

0x5fd6,	// (0x0000f880) volume_small_pane_g6

0x5fdf,	// (0x0000f889) volume_small_pane_g7

0x5fe8,	// (0x0000f892) volume_small_pane_g8

0x5ff1,	// (0x0000f89b) volume_small_pane_g9

0x5ffa,	// (0x0000f8a4) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x00019156) volume_small_pane_g

0x75e4,	// (0x00010e8e) bg_active_tab_pane_cp2_ParamLimits

0x75e4,	// (0x00010e8e) bg_active_tab_pane_cp2

0x7367,	// (0x00010c11) tabs_3_active_pane_g1

0x161d,	// (0x0000aec7) tabs_3_active_pane_t1

0x75e4,	// (0x00010e8e) bg_passive_tab_pane_cp2_ParamLimits

0x75e4,	// (0x00010e8e) bg_passive_tab_pane_cp2

0x7367,	// (0x00010c11) tabs_3_passive_pane_g1

0x161d,	// (0x0000aec7) tabs_3_passive_pane_t1

0x75e4,	// (0x00010e8e) bg_active_tab_pane_cp3_ParamLimits

0x75e4,	// (0x00010e8e) bg_active_tab_pane_cp3

0x7381,	// (0x00010c2b) tabs_4_active_pane_g1

0x162f,	// (0x0000aed9) tabs_4_active_pane_t1

0x75e4,	// (0x00010e8e) bg_passive_tab_pane_cp3_ParamLimits

0x75e4,	// (0x00010e8e) bg_passive_tab_pane_cp3

0x7381,	// (0x00010c2b) tabs_4_1_passive_pane_g1

0x162f,	// (0x0000aed9) tabs_4_1_passive_pane_t1

0x919c,	// (0x00012a46) list_highlight_pane_cp2

0x2f70,	// (0x0000c81a) list_set_pane_ParamLimits

0x2f70,	// (0x0000c81a) list_set_pane

0x2ffe,	// (0x0000c8a8) main_pane_set_t1_ParamLimits

0x2ffe,	// (0x0000c8a8) main_pane_set_t1

0x301e,	// (0x0000c8c8) main_pane_set_t2_ParamLimits

0x301e,	// (0x0000c8c8) main_pane_set_t2

0x3032,	// (0x0000c8dc) main_pane_set_t3_ParamLimits

0x3032,	// (0x0000c8dc) main_pane_set_t3

0x3044,	// (0x0000c8ee) main_pane_set_t4_ParamLimits

0x3044,	// (0x0000c8ee) main_pane_set_t4

0x0003,

0xf97c,	// (0x00019226) main_pane_set_t_ParamLimits

0xf97c,	// (0x00019226) main_pane_set_t

0x3056,	// (0x0000c900) setting_code_pane

0x305e,	// (0x0000c908) setting_slider_graphic_pane

0x305e,	// (0x0000c908) setting_slider_pane

0x305e,	// (0x0000c908) setting_text_pane

0x305e,	// (0x0000c908) setting_volume_pane

0xcb3d,	// (0x000163e7) volume_set_pane

0x7359,	// (0x00010c03) bg_set_opt_pane_cp

0x52d4,	// (0x0000eb7e) setting_slider_pane_t1

0xcb45,	// (0x000163ef) setting_slider_pane_t2

0xcb5e,	// (0x00016408) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00018e08) setting_slider_pane_t

0x531d,	// (0x0000ebc7) slider_set_pane

0x7279,	// (0x00010b23) bg_set_opt_pane_cp2

0x739b,	// (0x00010c45) setting_slider_graphic_pane_g1

0xcb75,	// (0x0001641f) setting_slider_graphic_pane_t1

0xcb84,	// (0x0001642e) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00018e0f) setting_slider_graphic_pane_t

0x5351,	// (0x0000ebfb) slider_set_pane_cp

0x7279,	// (0x00010b23) input_focus_pane_cp1

0xaa8d,	// (0x00014337) list_set_text_pane

0x726f,	// (0x00010b19) setting_text_pane_g1

0x7279,	// (0x00010b23) input_focus_pane_cp2

0x726f,	// (0x00010b19) setting_code_pane_g1

0x73a4,	// (0x00010c4e) setting_code_pane_t1

0x73b2,	// (0x00010c5c) set_text_pane_t1_ParamLimits

0x73b2,	// (0x00010c5c) set_text_pane_t1

0x818b,	// (0x00011a35) set_opt_bg_pane_g1

0x8193,	// (0x00011a3d) set_opt_bg_pane_g2

0x2f33,	// (0x0000c7dd) set_opt_bg_pane_g3

0x81a3,	// (0x00011a4d) set_opt_bg_pane_g4

0x81ab,	// (0x00011a55) set_opt_bg_pane_g5

0x81b3,	// (0x00011a5d) set_opt_bg_pane_g6

0xaa75,	// (0x0001431f) set_opt_bg_pane_g7

0x2f3b,	// (0x0000c7e5) set_opt_bg_pane_g8

0x2f43,	// (0x0000c7ed) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x00019213) set_opt_bg_pane_g

0xaa60,	// (0x0001430a) slider_set_pane_g1

0x6161,	// (0x0000fa0b) slider_set_pane_g2

0x0006,

0xf95a,	// (0x00019204) slider_set_pane_g

0x60fd,	// (0x0000f9a7) volume_set_pane_g1

0xd32c,	// (0x00016bd6) volume_set_pane_g2

0xd334,	// (0x00016bde) volume_set_pane_g3

0xd33c,	// (0x00016be6) volume_set_pane_g4

0xd344,	// (0x00016bee) volume_set_pane_g5

0xd34c,	// (0x00016bf6) volume_set_pane_g6

0xd354,	// (0x00016bfe) volume_set_pane_g7

0xd35c,	// (0x00016c06) volume_set_pane_g8

0xd364,	// (0x00016c0e) volume_set_pane_g9

0xd36c,	// (0x00016c16) volume_set_pane_g10

0x0009,

0xf932,	// (0x000191dc) volume_set_pane_g

0x1697,	// (0x0000af41) indicator_pane_ParamLimits

0x1697,	// (0x0000af41) indicator_pane

0x16bf,	// (0x0000af69) main_idle_pane_g2_ParamLimits

0x16bf,	// (0x0000af69) main_idle_pane_g2

0x16ed,	// (0x0000af97) main_pane_idle_g1_ParamLimits

0x16ed,	// (0x0000af97) main_pane_idle_g1

0x7407,	// (0x00010cb1) popup_clock_digital_analogue_window_ParamLimits

0x7407,	// (0x00010cb1) popup_clock_digital_analogue_window

0x1712,	// (0x0000afbc) soft_indicator_pane_ParamLimits

0x1712,	// (0x0000afbc) soft_indicator_pane

0x172c,	// (0x0000afd6) wallpaper_pane_ParamLimits

0x172c,	// (0x0000afd6) wallpaper_pane

0x726f,	// (0x00010b19) wallpaper_pane_g1

0x173e,	// (0x0000afe8) indicator_pane_g1_ParamLimits

0x173e,	// (0x0000afe8) indicator_pane_g1

0xaebc,	// (0x00014766) navi_navi_icon_text_pane_srt_g1

0x7459,	// (0x00010d03) soft_indicator_pane_t1

0x7473,	// (0x00010d1d) aid_ps_area_pane

0x1757,	// (0x0000b001) aid_ps_clock_pane

0x7490,	// (0x00010d3a) aid_ps_indicator_pane

0x749c,	// (0x00010d46) indicator_ps_pane_ParamLimits

0x749c,	// (0x00010d46) indicator_ps_pane

0x74ab,	// (0x00010d55) power_save_pane_g1_ParamLimits

0x74ab,	// (0x00010d55) power_save_pane_g1

0x74b7,	// (0x00010d61) power_save_pane_g2_ParamLimits

0x74b7,	// (0x00010d61) power_save_pane_g2

0x4f33,	// (0x0000e7dd) aid_navinavi_width_pane

0x7473,	// (0x00010d1d) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00018e14) power_save_pane_g_ParamLimits

0xf56a,	// (0x00018e14) power_save_pane_g

0x74c5,	// (0x00010d6f) power_save_pane_t1_ParamLimits

0x74c5,	// (0x00010d6f) power_save_pane_t1

0x1757,	// (0x0000b001) aid_ps_clock_pane_ParamLimits

0x7490,	// (0x00010d3a) aid_ps_indicator_pane_ParamLimits

0x74d7,	// (0x00010d81) power_save_pane_t4_ParamLimits

0x74d7,	// (0x00010d81) power_save_pane_t4

0x0001,

0xf56f,	// (0x00018e19) power_save_pane_t_ParamLimits

0xf56f,	// (0x00018e19) power_save_pane_t

0x7501,	// (0x00010dab) power_save_t3_ParamLimits

0x7501,	// (0x00010dab) power_save_t3

0x74ec,	// (0x00010d96) power_save_t2_ParamLimits

0x74ec,	// (0x00010d96) power_save_t2

0x7516,	// (0x00010dc0) indicator_ps_pane_g1

0x1763,	// (0x0000b00d) ai_gene_pane_ParamLimits

0x1763,	// (0x0000b00d) ai_gene_pane

0x177a,	// (0x0000b024) ai_links_pane_ParamLimits

0x177a,	// (0x0000b024) ai_links_pane

0x1792,	// (0x0000b03c) indicator_pane_cp1_ParamLimits

0x1792,	// (0x0000b03c) indicator_pane_cp1

0x17a1,	// (0x0000b04b) main_pane_idle_g1_cp_ParamLimits

0x17a1,	// (0x0000b04b) main_pane_idle_g1_cp

0x754f,	// (0x00010df9) popup_ai_links_title_window

0x17b9,	// (0x0000b063) soft_indicator_pane_cp1_ParamLimits

0x17b9,	// (0x0000b063) soft_indicator_pane_cp1

0xa84b,	// (0x000140f5) ai_links_pane_g1

0xa854,	// (0x000140fe) grid_ai_links_pane

0x2e3b,	// (0x0000c6e5) ai_gene_pane_1

0xa839,	// (0x000140e3) ai_gene_pane_2

0xa842,	// (0x000140ec) list_highlight_pane_cp4

0x2e21,	// (0x0000c6cb) cell_ai_link_pane_ParamLimits

0x2e21,	// (0x0000c6cb) cell_ai_link_pane

0xa810,	// (0x000140ba) cell_ai_link_pane_g1

0x7786,	// (0x00011030) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x000191b7) cell_ai_link_pane_g

0x7279,	// (0x00010b23) grid_highlight_cp2

0x7279,	// (0x00010b23) bg_popup_sub_pane_cp1

0x7572,	// (0x00010e1c) popup_ai_links_title_window_t1

0xa762,	// (0x0001400c) ai_gene_pane_1_g1_ParamLimits

0xa762,	// (0x0001400c) ai_gene_pane_1_g1

0xa76e,	// (0x00014018) ai_gene_pane_1_g2_ParamLimits

0xa76e,	// (0x00014018) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x000191ad) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x000191ad) ai_gene_pane_1_g

0xa77b,	// (0x00014025) ai_gene_pane_1_t1_ParamLimits

0xa77b,	// (0x00014025) ai_gene_pane_1_t1

0xa7af,	// (0x00014059) grid_ai_soft_ind_pane

0xa74d,	// (0x00013ff7) ai_gene_pane_2_t1_ParamLimits

0xa74d,	// (0x00013ff7) ai_gene_pane_2_t1

0x17cd,	// (0x0000b077) main_pane_empty_t1_ParamLimits

0x17cd,	// (0x0000b077) main_pane_empty_t1

0x17e5,	// (0x0000b08f) main_pane_empty_t2_ParamLimits

0x17e5,	// (0x0000b08f) main_pane_empty_t2

0x17fa,	// (0x0000b0a4) main_pane_empty_t3_ParamLimits

0x17fa,	// (0x0000b0a4) main_pane_empty_t3

0x180c,	// (0x0000b0b6) main_pane_empty_t4_ParamLimits

0x180c,	// (0x0000b0b6) main_pane_empty_t4

0x181e,	// (0x0000b0c8) main_pane_empty_t5_ParamLimits

0x181e,	// (0x0000b0c8) main_pane_empty_t5

0x0004,

0xf574,	// (0x00018e1e) main_pane_empty_t_ParamLimits

0xf574,	// (0x00018e1e) main_pane_empty_t

0x8263,	// (0x00011b0d) bg_popup_window_pane_ParamLimits

0x8263,	// (0x00011b0d) bg_popup_window_pane

0xa4bf,	// (0x00013d69) find_popup_pane_cp2_ParamLimits

0xa4bf,	// (0x00013d69) find_popup_pane_cp2

0xa4cb,	// (0x00013d75) heading_pane_ParamLimits

0xa4cb,	// (0x00013d75) heading_pane

0x7279,	// (0x00010b23) bg_popup_sub_pane

0x2da2,	// (0x0000c64c) bg_popup_window_pane_g1_ParamLimits

0x2da2,	// (0x0000c64c) bg_popup_window_pane_g1

0x2db1,	// (0x0000c65b) bg_popup_window_pane_g2_ParamLimits

0x2db1,	// (0x0000c65b) bg_popup_window_pane_g2

0x2dbd,	// (0x0000c667) bg_popup_window_pane_g3_ParamLimits

0x2dbd,	// (0x0000c667) bg_popup_window_pane_g3

0x2dc9,	// (0x0000c673) bg_popup_window_pane_g4_ParamLimits

0x2dc9,	// (0x0000c673) bg_popup_window_pane_g4

0x2dd8,	// (0x0000c682) bg_popup_window_pane_g5_ParamLimits

0x2dd8,	// (0x0000c682) bg_popup_window_pane_g5

0x2de8,	// (0x0000c692) bg_popup_window_pane_g6_ParamLimits

0x2de8,	// (0x0000c692) bg_popup_window_pane_g6

0x2df4,	// (0x0000c69e) bg_popup_window_pane_g7_ParamLimits

0x2df4,	// (0x0000c69e) bg_popup_window_pane_g7

0x2e03,	// (0x0000c6ad) bg_popup_window_pane_g8_ParamLimits

0x2e03,	// (0x0000c6ad) bg_popup_window_pane_g8

0x2e12,	// (0x0000c6bc) bg_popup_window_pane_g9_ParamLimits

0x2e12,	// (0x0000c6bc) bg_popup_window_pane_g9

0xa4a5,	// (0x00013d4f) bg_popup_window_pane_g10_ParamLimits

0xa4a5,	// (0x00013d4f) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x00019175) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x00019175) bg_popup_window_pane_g

0xa3ce,	// (0x00013c78) bg_popup_heading_pane_ParamLimits

0xa3ce,	// (0x00013c78) bg_popup_heading_pane

0x61e9,	// (0x0000fa93) tabs_4_passive_pane_cp_srt_ParamLimits

0x61e9,	// (0x0000fa93) tabs_4_passive_pane_cp_srt

0x61fb,	// (0x0000faa5) tabs_4_passive_pane_srt_ParamLimits

0xa3e2,	// (0x00013c8c) heading_pane_g2

0x61fb,	// (0x0000faa5) tabs_4_passive_pane_srt

0x97ce,	// (0x00013078) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97ce,	// (0x00013078) bg_passive_tab_pane_cp3_srt

0xa3ea,	// (0x00013c94) heading_pane_t1_ParamLimits

0xa3ea,	// (0x00013c94) heading_pane_t1

0xa401,	// (0x00013cab) heading_pane_t2_ParamLimits

0xa401,	// (0x00013cab) heading_pane_t2

0x0001,

0xf8c6,	// (0x00019170) heading_pane_t_ParamLimits

0xf8c6,	// (0x00019170) heading_pane_t

0x9f23,	// (0x000137cd) bg_popup_heading_pane_g1

0x9fcc,	// (0x00013876) bg_popup_heading_pane_g2

0x9fd4,	// (0x0001387e) bg_popup_heading_pane_g3

0x9fdc,	// (0x00013886) bg_popup_heading_pane_g4

0x9fe4,	// (0x0001388e) bg_popup_heading_pane_g5

0x9fec,	// (0x00013896) bg_popup_heading_pane_g6

0x9ff4,	// (0x0001389e) bg_popup_heading_pane_g7

0x9ffc,	// (0x000138a6) bg_popup_heading_pane_g8

0xa004,	// (0x000138ae) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0001912c) bg_popup_heading_pane_g

0x96b8,	// (0x00012f62) bg_popup_sub_pane_g1

0x96c8,	// (0x00012f72) bg_popup_sub_pane_g2

0x96c0,	// (0x00012f6a) bg_popup_sub_pane_g3

0x96d8,	// (0x00012f82) bg_popup_sub_pane_g4

0x96d0,	// (0x00012f7a) bg_popup_sub_pane_g5

0x96e0,	// (0x00012f8a) bg_popup_sub_pane_g6

0x96e8,	// (0x00012f92) bg_popup_sub_pane_g7

0x96f8,	// (0x00012fa2) bg_popup_sub_pane_g8

0x96f0,	// (0x00012f9a) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x00019106) bg_popup_sub_pane_g

0x75e4,	// (0x00010e8e) bg_popup_window_pane_cp5_ParamLimits

0x75e4,	// (0x00010e8e) bg_popup_window_pane_cp5

0x7600,	// (0x00010eaa) popup_note_window_g1_ParamLimits

0x7600,	// (0x00010eaa) popup_note_window_g1

0x760c,	// (0x00010eb6) popup_note_window_t1_ParamLimits

0x760c,	// (0x00010eb6) popup_note_window_t1

0x7622,	// (0x00010ecc) popup_note_window_t2_ParamLimits

0x7622,	// (0x00010ecc) popup_note_window_t2

0x7638,	// (0x00010ee2) popup_note_window_t3_ParamLimits

0x7638,	// (0x00010ee2) popup_note_window_t3

0x764e,	// (0x00010ef8) popup_note_window_t4_ParamLimits

0x764e,	// (0x00010ef8) popup_note_window_t4

0x7676,	// (0x00010f20) popup_note_window_t5_ParamLimits

0x7676,	// (0x00010f20) popup_note_window_t5

0x0004,

0xf57f,	// (0x00018e29) popup_note_window_t_ParamLimits

0xf57f,	// (0x00018e29) popup_note_window_t

0x769a,	// (0x00010f44) bg_popup_window_pane_cp6_ParamLimits

0x769a,	// (0x00010f44) bg_popup_window_pane_cp6

0x9e9f,	// (0x00013749) popup_note_image_window_g1_ParamLimits

0x9e9f,	// (0x00013749) popup_note_image_window_g1

0x9eab,	// (0x00013755) popup_note_image_window_g2_ParamLimits

0x9eab,	// (0x00013755) popup_note_image_window_g2

0x0001,

0xf850,	// (0x000190fa) popup_note_image_window_g_ParamLimits

0xf850,	// (0x000190fa) popup_note_image_window_g

0x9ec4,	// (0x0001376e) popup_note_image_window_t1_ParamLimits

0x9ec4,	// (0x0001376e) popup_note_image_window_t1

0x9edd,	// (0x00013787) popup_note_image_window_t2_ParamLimits

0x9edd,	// (0x00013787) popup_note_image_window_t2

0x9ef6,	// (0x000137a0) popup_note_image_window_t3_ParamLimits

0x9ef6,	// (0x000137a0) popup_note_image_window_t3

0x0002,

0xf855,	// (0x000190ff) popup_note_image_window_t_ParamLimits

0xf855,	// (0x000190ff) popup_note_image_window_t

0x9d68,	// (0x00013612) bg_popup_window_pane_cp7_ParamLimits

0x9d68,	// (0x00013612) bg_popup_window_pane_cp7

0x9d98,	// (0x00013642) popup_note_wait_window_g1_ParamLimits

0x9d98,	// (0x00013642) popup_note_wait_window_g1

0x9da4,	// (0x0001364e) popup_note_wait_window_g2_ParamLimits

0x9da4,	// (0x0001364e) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x000190e8) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x000190e8) popup_note_wait_window_g

0x9dbc,	// (0x00013666) popup_note_wait_window_t1_ParamLimits

0x9dbc,	// (0x00013666) popup_note_wait_window_t1

0x9de3,	// (0x0001368d) popup_note_wait_window_t2_ParamLimits

0x9de3,	// (0x0001368d) popup_note_wait_window_t2

0x9e00,	// (0x000136aa) popup_note_wait_window_t3_ParamLimits

0x9e00,	// (0x000136aa) popup_note_wait_window_t3

0x9e13,	// (0x000136bd) popup_note_wait_window_t4_ParamLimits

0x9e13,	// (0x000136bd) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x000190ef) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x000190ef) popup_note_wait_window_t

0x9e38,	// (0x000136e2) wait_bar_pane_ParamLimits

0x9e38,	// (0x000136e2) wait_bar_pane

0x7279,	// (0x00010b23) wait_anim_pane

0x7279,	// (0x00010b23) wait_border_pane

0x726f,	// (0x00010b19) wait_anim_pane_g1

0x726f,	// (0x00010b19) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00018fa8) wait_anim_pane_g

0x9d18,	// (0x000135c2) wait_border_pane_g1

0x9d21,	// (0x000135cb) wait_border_pane_g2

0x9d2a,	// (0x000135d4) wait_border_pane_g3

0x0002,

0xf837,	// (0x000190e1) wait_border_pane_g

0x9b88,	// (0x00013432) bg_popup_window_pane_cp16_ParamLimits

0x9b88,	// (0x00013432) bg_popup_window_pane_cp16

0x9c88,	// (0x00013532) indicator_popup_pane_cp4_ParamLimits

0x9c88,	// (0x00013532) indicator_popup_pane_cp4

0x9c9c,	// (0x00013546) popup_query_data_window_t1_ParamLimits

0x9c9c,	// (0x00013546) popup_query_data_window_t1

0x9cae,	// (0x00013558) popup_query_data_window_t2_ParamLimits

0x9cae,	// (0x00013558) popup_query_data_window_t2

0x9cc7,	// (0x00013571) popup_query_data_window_t3_ParamLimits

0x9cc7,	// (0x00013571) popup_query_data_window_t3

0x0002,

0xf830,	// (0x000190da) popup_query_data_window_t_ParamLimits

0xf830,	// (0x000190da) popup_query_data_window_t

0x9ce1,	// (0x0001358b) query_popup_data_pane_ParamLimits

0x9ce1,	// (0x0001358b) query_popup_data_pane

0x9cf5,	// (0x0001359f) query_popup_data_pane_cp1_ParamLimits

0x9cf5,	// (0x0001359f) query_popup_data_pane_cp1

0x9b88,	// (0x00013432) bg_popup_window_pane_cp10_ParamLimits

0x9b88,	// (0x00013432) bg_popup_window_pane_cp10

0x9bba,	// (0x00013464) indicator_popup_pane_ParamLimits

0x9bba,	// (0x00013464) indicator_popup_pane

0x9bdc,	// (0x00013486) popup_query_code_window_t1_ParamLimits

0x9bdc,	// (0x00013486) popup_query_code_window_t1

0x9bf6,	// (0x000134a0) popup_query_code_window_t2_ParamLimits

0x9bf6,	// (0x000134a0) popup_query_code_window_t2

0x9c3f,	// (0x000134e9) popup_query_code_window_t3_ParamLimits

0x9c3f,	// (0x000134e9) popup_query_code_window_t3

0x0002,

0xf829,	// (0x000190d3) popup_query_code_window_t_ParamLimits

0xf829,	// (0x000190d3) popup_query_code_window_t

0x9c6e,	// (0x00013518) query_popup_pane_ParamLimits

0x9c6e,	// (0x00013518) query_popup_pane

0x769a,	// (0x00010f44) bg_popup_window_pane_cp15_ParamLimits

0x769a,	// (0x00010f44) bg_popup_window_pane_cp15

0x76b8,	// (0x00010f62) indicator_popup_pane_cp1_ParamLimits

0x76b8,	// (0x00010f62) indicator_popup_pane_cp1

0x76cb,	// (0x00010f75) indicator_popup_pane_cp2_ParamLimits

0x76cb,	// (0x00010f75) indicator_popup_pane_cp2

0x76de,	// (0x00010f88) popup_query_data_code_window_g1_ParamLimits

0x76de,	// (0x00010f88) popup_query_data_code_window_g1

0x76f1,	// (0x00010f9b) popup_query_data_code_window_t1_ParamLimits

0x76f1,	// (0x00010f9b) popup_query_data_code_window_t1

0x7703,	// (0x00010fad) popup_query_data_code_window_t2_ParamLimits

0x7703,	// (0x00010fad) popup_query_data_code_window_t2

0x7715,	// (0x00010fbf) popup_query_data_code_window_t3_ParamLimits

0x7715,	// (0x00010fbf) popup_query_data_code_window_t3

0x772b,	// (0x00010fd5) popup_query_data_code_window_t4_ParamLimits

0x772b,	// (0x00010fd5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00018e34) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00018e34) popup_query_data_code_window_t

0x5ec4,	// (0x0000f76e) list_single_midp_graphic_pane_g3

0x7743,	// (0x00010fed) query_popup_data_pane_cp2_ParamLimits

0x7756,	// (0x00011000) query_popup_pane_cp2_ParamLimits

0x7756,	// (0x00011000) query_popup_pane_cp2

0x7279,	// (0x00010b23) bg_popup_window_pane_cp11

0x9b80,	// (0x0001342a) heading_pane_cp5

0x783d,	// (0x000110e7) listscroll_popup_info_pane

0x7279,	// (0x00010b23) input_focus_pane_cp3

0x7769,	// (0x00011013) query_popup_pane_t1

0x7777,	// (0x00011021) list_popup_info_pane_ParamLimits

0x7777,	// (0x00011021) list_popup_info_pane

0x7786,	// (0x00011030) listscroll_popup_info_pane_g1

0x778e,	// (0x00011038) scroll_pane_cp7

0x7796,	// (0x00011040) popup_info_list_pane_t1_ParamLimits

0x7796,	// (0x00011040) popup_info_list_pane_t1

0x77b0,	// (0x0001105a) popup_info_list_pane_t2_ParamLimits

0x77b0,	// (0x0001105a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00018e3d) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00018e3d) popup_info_list_pane_t

0x7279,	// (0x00010b23) bg_popup_window_pane_cp12

0xaed6,	// (0x00014780) find_popup_pane

0x7359,	// (0x00010c03) bg_popup_window_pane_cp3

0x77ca,	// (0x00011074) heading_pane_cp3

0x77d6,	// (0x00011080) listscroll_popup_graphic_pane

0x7279,	// (0x00010b23) bg_popup_window_pane_cp4

0x1880,	// (0x0000b12a) heading_pane_cp4

0x783d,	// (0x000110e7) listscroll_popup_colour_pane

0x7845,	// (0x000110ef) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7845,	// (0x000110ef) cell_large_graphic_colour_none_popup_pane

0x1888,	// (0x0000b132) grid_large_graphic_colour_popup_pane_ParamLimits

0x1888,	// (0x0000b132) grid_large_graphic_colour_popup_pane

0x7871,	// (0x0001111b) listscroll_popup_colour_pane_g1_ParamLimits

0x7871,	// (0x0001111b) listscroll_popup_colour_pane_g1

0x7888,	// (0x00011132) listscroll_popup_colour_pane_g2_ParamLimits

0x7888,	// (0x00011132) listscroll_popup_colour_pane_g2

0x789f,	// (0x00011149) listscroll_popup_colour_pane_g3_ParamLimits

0x789f,	// (0x00011149) listscroll_popup_colour_pane_g3

0x18a4,	// (0x0000b14e) listscroll_popup_colour_pane_g4_ParamLimits

0x18a4,	// (0x0000b14e) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00018e42) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00018e42) listscroll_popup_colour_pane_g

0x78be,	// (0x00011168) scroll_pane_cp6_ParamLimits

0x78be,	// (0x00011168) scroll_pane_cp6

0x18b3,	// (0x0000b15d) cell_large_graphic_colour_popup_pane_ParamLimits

0x18b3,	// (0x0000b15d) cell_large_graphic_colour_popup_pane

0x78ef,	// (0x00011199) cell_large_graphic_colour_none_popup_pane_t1

0x7279,	// (0x00010b23) grid_highlight_pane_cp5

0x78fe,	// (0x000111a8) cell_large_graphic_colour_popup_pane_g1

0x7906,	// (0x000111b0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00018e4b) cell_large_graphic_colour_popup_pane_g

0x790e,	// (0x000111b8) cell_large_graphic_colour_popup_pane_g2_copy1

0x7917,	// (0x000111c1) grid_highlight_pane_cp4

0x791f,	// (0x000111c9) bg_popup_window_pane_cp8_ParamLimits

0x791f,	// (0x000111c9) bg_popup_window_pane_cp8

0x793a,	// (0x000111e4) popup_snote_single_text_window_g1_ParamLimits

0x793a,	// (0x000111e4) popup_snote_single_text_window_g1

0x794c,	// (0x000111f6) popup_snote_single_text_window_t1_ParamLimits

0x794c,	// (0x000111f6) popup_snote_single_text_window_t1

0x795f,	// (0x00011209) popup_snote_single_text_window_t2_ParamLimits

0x795f,	// (0x00011209) popup_snote_single_text_window_t2

0x7972,	// (0x0001121c) popup_snote_single_text_window_t3_ParamLimits

0x7972,	// (0x0001121c) popup_snote_single_text_window_t3

0x79ab,	// (0x00011255) popup_snote_single_text_window_t4_ParamLimits

0x79ab,	// (0x00011255) popup_snote_single_text_window_t4

0x79df,	// (0x00011289) popup_snote_single_text_window_t5_ParamLimits

0x79df,	// (0x00011289) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00018e50) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00018e50) popup_snote_single_text_window_t

0x7a0e,	// (0x000112b8) bg_popup_window_pane_cp9_ParamLimits

0x7a0e,	// (0x000112b8) bg_popup_window_pane_cp9

0x793a,	// (0x000111e4) popup_snote_single_graphic_window_g1_ParamLimits

0x793a,	// (0x000111e4) popup_snote_single_graphic_window_g1

0x7a1c,	// (0x000112c6) popup_snote_single_graphic_window_g2_ParamLimits

0x7a1c,	// (0x000112c6) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00018e5b) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00018e5b) popup_snote_single_graphic_window_g

0x7a28,	// (0x000112d2) popup_snote_single_graphic_window_t1_ParamLimits

0x7a28,	// (0x000112d2) popup_snote_single_graphic_window_t1

0x7a3b,	// (0x000112e5) popup_snote_single_graphic_window_t2_ParamLimits

0x7a3b,	// (0x000112e5) popup_snote_single_graphic_window_t2

0x7972,	// (0x0001121c) popup_snote_single_graphic_window_t3_ParamLimits

0x7972,	// (0x0001121c) popup_snote_single_graphic_window_t3

0x79ab,	// (0x00011255) popup_snote_single_graphic_window_t4_ParamLimits

0x79ab,	// (0x00011255) popup_snote_single_graphic_window_t4

0x79df,	// (0x00011289) popup_snote_single_graphic_window_t5_ParamLimits

0x79df,	// (0x00011289) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00018e60) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00018e60) popup_snote_single_graphic_window_t

0xae1e,	// (0x000146c8) grid_graphic_popup_pane_ParamLimits

0xae1e,	// (0x000146c8) grid_graphic_popup_pane

0xae42,	// (0x000146ec) listscroll_popup_graphic_pane_g1_ParamLimits

0xae42,	// (0x000146ec) listscroll_popup_graphic_pane_g1

0x317c,	// (0x0000ca26) listscroll_popup_graphic_pane_g2_ParamLimits

0x317c,	// (0x0000ca26) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x00019250) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x00019250) listscroll_popup_graphic_pane_g

0xae6a,	// (0x00014714) scroll_pane_cp5

0x313f,	// (0x0000c9e9) cell_graphic_popup_pane_ParamLimits

0x313f,	// (0x0000c9e9) cell_graphic_popup_pane

0xada8,	// (0x00014652) cell_graphic_popup_pane_g1

0xadb0,	// (0x0001465a) cell_graphic_popup_pane_g2

0x790e,	// (0x000111b8) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x00019249) cell_graphic_popup_pane_g

0xadb9,	// (0x00014663) cell_graphic_popup_pane_t2

0x7917,	// (0x000111c1) grid_highlight_pane_cp3

0x7a60,	// (0x0001130a) list_gen_pane_ParamLimits

0x7a60,	// (0x0001130a) list_gen_pane

0x7a92,	// (0x0001133c) scroll_pane

0x30fc,	// (0x0000c9a6) bg_list_pane_g1_ParamLimits

0x30fc,	// (0x0000c9a6) bg_list_pane_g1

0xad2f,	// (0x000145d9) bg_list_pane_g2_ParamLimits

0xad2f,	// (0x000145d9) bg_list_pane_g2

0xad42,	// (0x000145ec) bg_list_pane_g3_ParamLimits

0xad42,	// (0x000145ec) bg_list_pane_g3

0xad54,	// (0x000145fe) bg_list_pane_g4_ParamLimits

0xad54,	// (0x000145fe) bg_list_pane_g4

0x3117,	// (0x0000c9c1) bg_list_pane_g5_ParamLimits

0x3117,	// (0x0000c9c1) bg_list_pane_g5

0x0004,

0xf994,	// (0x0001923e) bg_list_pane_g_ParamLimits

0xf994,	// (0x0001923e) bg_list_pane_g

0x30a6,	// (0x0000c950) list_double2_graphic_large_graphic_pane_ParamLimits

0x30a6,	// (0x0000c950) list_double2_graphic_large_graphic_pane

0x30a6,	// (0x0000c950) list_double2_graphic_pane_ParamLimits

0x30a6,	// (0x0000c950) list_double2_graphic_pane

0x30a6,	// (0x0000c950) list_double2_large_graphic_pane_ParamLimits

0x30a6,	// (0x0000c950) list_double2_large_graphic_pane

0x30a6,	// (0x0000c950) list_double2_pane_ParamLimits

0x30a6,	// (0x0000c950) list_double2_pane

0x30a6,	// (0x0000c950) list_double_graphic_heading_pane_ParamLimits

0x30a6,	// (0x0000c950) list_double_graphic_heading_pane

0x30a6,	// (0x0000c950) list_double_graphic_pane_ParamLimits

0x30a6,	// (0x0000c950) list_double_graphic_pane

0x30a6,	// (0x0000c950) list_double_heading_pane_ParamLimits

0x30a6,	// (0x0000c950) list_double_heading_pane

0x30a6,	// (0x0000c950) list_double_large_graphic_pane_ParamLimits

0x30a6,	// (0x0000c950) list_double_large_graphic_pane

0x30a6,	// (0x0000c950) list_double_number_pane_ParamLimits

0x30a6,	// (0x0000c950) list_double_number_pane

0x30a6,	// (0x0000c950) list_double_pane_ParamLimits

0x30a6,	// (0x0000c950) list_double_pane

0x30a6,	// (0x0000c950) list_double_time_pane_ParamLimits

0x30a6,	// (0x0000c950) list_double_time_pane

0x30a6,	// (0x0000c950) list_setting_number_pane_ParamLimits

0x30a6,	// (0x0000c950) list_setting_number_pane

0x30a6,	// (0x0000c950) list_setting_pane_ParamLimits

0x30a6,	// (0x0000c950) list_setting_pane

0x30b7,	// (0x0000c961) list_single_2graphic_pane_ParamLimits

0x30b7,	// (0x0000c961) list_single_2graphic_pane

0x30b7,	// (0x0000c961) list_single_graphic_heading_pane_ParamLimits

0x30b7,	// (0x0000c961) list_single_graphic_heading_pane

0x30b7,	// (0x0000c961) list_single_graphic_pane_ParamLimits

0x30b7,	// (0x0000c961) list_single_graphic_pane

0x30b7,	// (0x0000c961) list_single_heading_pane_ParamLimits

0x30b7,	// (0x0000c961) list_single_heading_pane

0x30b7,	// (0x0000c961) list_single_large_graphic_pane_ParamLimits

0x30b7,	// (0x0000c961) list_single_large_graphic_pane

0x30b7,	// (0x0000c961) list_single_number_heading_pane_ParamLimits

0x30b7,	// (0x0000c961) list_single_number_heading_pane

0x30b7,	// (0x0000c961) list_single_number_pane_ParamLimits

0x30b7,	// (0x0000c961) list_single_number_pane

0x30b7,	// (0x0000c961) list_single_pane_ParamLimits

0x30b7,	// (0x0000c961) list_single_pane

0x7279,	// (0x00010b23) list_highlight_pane_cp1

0x8d93,	// (0x0001263d) list_single_pane_g1_ParamLimits

0x8d93,	// (0x0001263d) list_single_pane_g1

0x963a,	// (0x00012ee4) list_single_pane_g2_ParamLimits

0x963a,	// (0x00012ee4) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00018e72) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00018e72) list_single_pane_g

0xb49f,	// (0x00014d49) list_single_pane_t1_ParamLimits

0xb49f,	// (0x00014d49) list_single_pane_t1

0x8d93,	// (0x0001263d) list_single_number_pane_g1_ParamLimits

0x8d93,	// (0x0001263d) list_single_number_pane_g1

0x963a,	// (0x00012ee4) list_single_number_pane_g2_ParamLimits

0x963a,	// (0x00012ee4) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00018e72) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00018e72) list_single_number_pane_g

0x9646,	// (0x00012ef0) list_single_number_pane_t1_ParamLimits

0x9646,	// (0x00012ef0) list_single_number_pane_t1

0x2ede,	// (0x0000c788) list_single_number_pane_t2_ParamLimits

0x2ede,	// (0x0000c788) list_single_number_pane_t2

0x0001,

0xf955,	// (0x000191ff) list_single_number_pane_t_ParamLimits

0xf955,	// (0x000191ff) list_single_number_pane_t

0x18dc,	// (0x0000b186) list_single_graphic_pane_g1_ParamLimits

0x18dc,	// (0x0000b186) list_single_graphic_pane_g1

0x8d93,	// (0x0001263d) list_single_graphic_pane_g2_ParamLimits

0x8d93,	// (0x0001263d) list_single_graphic_pane_g2

0x963a,	// (0x00012ee4) list_single_graphic_pane_g3_ParamLimits

0x963a,	// (0x00012ee4) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00018e6b) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00018e6b) list_single_graphic_pane_g

0x18e8,	// (0x0000b192) list_single_graphic_pane_t1_ParamLimits

0x18e8,	// (0x0000b192) list_single_graphic_pane_t1

0x8d93,	// (0x0001263d) list_single_heading_pane_g1_ParamLimits

0x8d93,	// (0x0001263d) list_single_heading_pane_g1

0x963a,	// (0x00012ee4) list_single_heading_pane_g2_ParamLimits

0x963a,	// (0x00012ee4) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00018e72) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00018e72) list_single_heading_pane_g

0x18fe,	// (0x0000b1a8) list_single_heading_pane_t1_ParamLimits

0x18fe,	// (0x0000b1a8) list_single_heading_pane_t1

0x1914,	// (0x0000b1be) list_single_heading_pane_t2_ParamLimits

0x1914,	// (0x0000b1be) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00018e77) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00018e77) list_single_heading_pane_t

0x8d93,	// (0x0001263d) list_single_number_heading_pane_g1_ParamLimits

0x8d93,	// (0x0001263d) list_single_number_heading_pane_g1

0x963a,	// (0x00012ee4) list_single_number_heading_pane_g2_ParamLimits

0x963a,	// (0x00012ee4) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00018e72) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00018e72) list_single_number_heading_pane_g

0x18fe,	// (0x0000b1a8) list_single_number_heading_pane_t1_ParamLimits

0x18fe,	// (0x0000b1a8) list_single_number_heading_pane_t1

0xb453,	// (0x00014cfd) list_single_number_heading_pane_t2_ParamLimits

0xb453,	// (0x00014cfd) list_single_number_heading_pane_t2

0xb465,	// (0x00014d0f) list_single_number_heading_pane_t3_ParamLimits

0xb465,	// (0x00014d0f) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00018e7c) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00018e7c) list_single_number_heading_pane_t

0x962e,	// (0x00012ed8) list_single_graphic_heading_pane_g1_ParamLimits

0x962e,	// (0x00012ed8) list_single_graphic_heading_pane_g1

0x1926,	// (0x0000b1d0) list_single_graphic_heading_pane_g4_ParamLimits

0x1926,	// (0x0000b1d0) list_single_graphic_heading_pane_g4

0x963a,	// (0x00012ee4) list_single_graphic_heading_pane_g5_ParamLimits

0x963a,	// (0x00012ee4) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00018e83) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00018e83) list_single_graphic_heading_pane_g

0x18fe,	// (0x0000b1a8) list_single_graphic_heading_pane_t1_ParamLimits

0x18fe,	// (0x0000b1a8) list_single_graphic_heading_pane_t1

0x1937,	// (0x0000b1e1) list_single_graphic_heading_pane_t2_ParamLimits

0x1937,	// (0x0000b1e1) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00018e8a) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00018e8a) list_single_graphic_heading_pane_t

0xb4b5,	// (0x00014d5f) list_single_large_graphic_pane_g1_ParamLimits

0xb4b5,	// (0x00014d5f) list_single_large_graphic_pane_g1

0x8d93,	// (0x0001263d) list_single_large_graphic_pane_g2_ParamLimits

0x8d93,	// (0x0001263d) list_single_large_graphic_pane_g2

0x963a,	// (0x00012ee4) list_single_large_graphic_pane_g3_ParamLimits

0x963a,	// (0x00012ee4) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00018e8f) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00018e8f) list_single_large_graphic_pane_g

0x9d21,	// (0x000135cb) wait_border_pane_g2_copy1

0x1949,	// (0x0000b1f3) list_single_large_graphic_pane_g4_cp2

0xb4c1,	// (0x00014d6b) list_single_large_graphic_pane_t1_ParamLimits

0xb4c1,	// (0x00014d6b) list_single_large_graphic_pane_t1

0x8075,	// (0x0001191f) list_double_pane_g1_ParamLimits

0x8075,	// (0x0001191f) list_double_pane_g1

0x1951,	// (0x0000b1fb) list_double_pane_g2_ParamLimits

0x1951,	// (0x0000b1fb) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00018e96) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00018e96) list_double_pane_g

0xd914,	// (0x000171be) list_double_pane_t1_ParamLimits

0xd914,	// (0x000171be) list_double_pane_t1

0x195d,	// (0x0000b207) list_double_pane_t2_ParamLimits

0x195d,	// (0x0000b207) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00018e9b) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00018e9b) list_double_pane_t

0x196f,	// (0x0000b219) list_double2_pane_g1_ParamLimits

0x196f,	// (0x0000b219) list_double2_pane_g1

0x1980,	// (0x0000b22a) list_double2_pane_g2_ParamLimits

0x1980,	// (0x0000b22a) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00018ea0) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00018ea0) list_double2_pane_g

0x198c,	// (0x0000b236) list_double2_pane_t1_ParamLimits

0x198c,	// (0x0000b236) list_double2_pane_t1

0x19a2,	// (0x0000b24c) list_double2_pane_t2_ParamLimits

0x19a2,	// (0x0000b24c) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00018ea5) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00018ea5) list_double2_pane_t

0x8075,	// (0x0001191f) list_double_number_pane_g1_ParamLimits

0x8075,	// (0x0001191f) list_double_number_pane_g1

0x1951,	// (0x0000b1fb) list_double_number_pane_g2_ParamLimits

0x1951,	// (0x0000b1fb) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00018e96) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00018e96) list_double_number_pane_g

0x19b4,	// (0x0000b25e) list_double_number_pane_t1_ParamLimits

0x19b4,	// (0x0000b25e) list_double_number_pane_t1

0x19c6,	// (0x0000b270) list_double_number_pane_t2_ParamLimits

0x19c6,	// (0x0000b270) list_double_number_pane_t2

0x19dc,	// (0x0000b286) list_double_number_pane_t3_ParamLimits

0x19dc,	// (0x0000b286) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00018eaa) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00018eaa) list_double_number_pane_t

0x19ee,	// (0x0000b298) list_double_graphic_pane_g1_ParamLimits

0x19ee,	// (0x0000b298) list_double_graphic_pane_g1

0x19fa,	// (0x0000b2a4) list_double_graphic_pane_g2_ParamLimits

0x19fa,	// (0x0000b2a4) list_double_graphic_pane_g2

0x1a09,	// (0x0000b2b3) list_double_graphic_pane_g3_ParamLimits

0x1a09,	// (0x0000b2b3) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00018eb1) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00018eb1) list_double_graphic_pane_g

0x1a21,	// (0x0000b2cb) list_double_graphic_pane_t1_ParamLimits

0x1a21,	// (0x0000b2cb) list_double_graphic_pane_t1

0x1a37,	// (0x0000b2e1) list_double_graphic_pane_t2_ParamLimits

0x1a37,	// (0x0000b2e1) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00018eba) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00018eba) list_double_graphic_pane_t

0x1a49,	// (0x0000b2f3) list_double2_graphic_pane_g1_ParamLimits

0x1a49,	// (0x0000b2f3) list_double2_graphic_pane_g1

0x8c8c,	// (0x00012536) list_double2_graphic_pane_g2_ParamLimits

0x8c8c,	// (0x00012536) list_double2_graphic_pane_g2

0x1980,	// (0x0000b22a) list_double2_graphic_pane_g3_ParamLimits

0x1980,	// (0x0000b22a) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00018ebf) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00018ebf) list_double2_graphic_pane_g

0x1a55,	// (0x0000b2ff) list_double2_graphic_pane_t1_ParamLimits

0x1a55,	// (0x0000b2ff) list_double2_graphic_pane_t1

0x1a6b,	// (0x0000b315) list_double2_graphic_pane_t2_ParamLimits

0x1a6b,	// (0x0000b315) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00018ec6) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00018ec6) list_double2_graphic_pane_t

0x1a7d,	// (0x0000b327) list_double_large_graphic_pane_g1_ParamLimits

0x1a7d,	// (0x0000b327) list_double_large_graphic_pane_g1

0x1a9c,	// (0x0000b346) list_double_large_graphic_pane_g2_ParamLimits

0x1a9c,	// (0x0000b346) list_double_large_graphic_pane_g2

0x1951,	// (0x0000b1fb) list_double_large_graphic_pane_g3_ParamLimits

0x1951,	// (0x0000b1fb) list_double_large_graphic_pane_g3

0x1aad,	// (0x0000b357) list_double_large_graphic_pane_g4_ParamLimits

0x1aad,	// (0x0000b357) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00018ecb) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00018ecb) list_double_large_graphic_pane_g

0x1abe,	// (0x0000b368) list_double_large_graphic_pane_t1_ParamLimits

0x1abe,	// (0x0000b368) list_double_large_graphic_pane_t1

0x1ad7,	// (0x0000b381) list_double_large_graphic_pane_t2_ParamLimits

0x1ad7,	// (0x0000b381) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00018ed6) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00018ed6) list_double_large_graphic_pane_t

0x1ae9,	// (0x0000b393) list_double2_large_graphic_pane_g1_ParamLimits

0x1ae9,	// (0x0000b393) list_double2_large_graphic_pane_g1

0x196f,	// (0x0000b219) list_double2_large_graphic_pane_g2_ParamLimits

0x196f,	// (0x0000b219) list_double2_large_graphic_pane_g2

0x1980,	// (0x0000b22a) list_double2_large_graphic_pane_g3_ParamLimits

0x1980,	// (0x0000b22a) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00018edb) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00018edb) list_double2_large_graphic_pane_g

0x1af5,	// (0x0000b39f) list_double2_large_graphic_pane_t1_ParamLimits

0x1af5,	// (0x0000b39f) list_double2_large_graphic_pane_t1

0x1b0b,	// (0x0000b3b5) list_double2_large_graphic_pane_t2_ParamLimits

0x1b0b,	// (0x0000b3b5) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00018ee2) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00018ee2) list_double2_large_graphic_pane_t

0x1b1d,	// (0x0000b3c7) list_double_heading_pane_g1_ParamLimits

0x1b1d,	// (0x0000b3c7) list_double_heading_pane_g1

0x7c0a,	// (0x000114b4) list_double_heading_pane_g2_ParamLimits

0x7c0a,	// (0x000114b4) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00018ee7) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00018ee7) list_double_heading_pane_g

0x1b2e,	// (0x0000b3d8) list_double_heading_pane_t1_ParamLimits

0x1b2e,	// (0x0000b3d8) list_double_heading_pane_t1

0x19a2,	// (0x0000b24c) list_double_heading_pane_t2_ParamLimits

0x19a2,	// (0x0000b24c) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00018eec) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00018eec) list_double_heading_pane_t

0x7df7,	// (0x000116a1) list_double_graphic_heading_pane_g1_ParamLimits

0x7df7,	// (0x000116a1) list_double_graphic_heading_pane_g1

0x1b1d,	// (0x0000b3c7) list_double_graphic_heading_pane_g2_ParamLimits

0x1b1d,	// (0x0000b3c7) list_double_graphic_heading_pane_g2

0x7c0a,	// (0x000114b4) list_double_graphic_heading_pane_g3_ParamLimits

0x7c0a,	// (0x000114b4) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00018ef1) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00018ef1) list_double_graphic_heading_pane_g

0x1b44,	// (0x0000b3ee) list_double_graphic_heading_pane_t1_ParamLimits

0x1b44,	// (0x0000b3ee) list_double_graphic_heading_pane_t1

0x1a6b,	// (0x0000b315) list_double_graphic_heading_pane_t2_ParamLimits

0x1a6b,	// (0x0000b315) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00018ef8) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00018ef8) list_double_graphic_heading_pane_t

0x1a9c,	// (0x0000b346) list_double_time_pane_g1_ParamLimits

0x1a9c,	// (0x0000b346) list_double_time_pane_g1

0x1951,	// (0x0000b1fb) list_double_time_pane_g2_ParamLimits

0x1951,	// (0x0000b1fb) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00018efd) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00018efd) list_double_time_pane_g

0x1b5a,	// (0x0000b404) list_double_time_pane_t1_ParamLimits

0x1b5a,	// (0x0000b404) list_double_time_pane_t1

0x1b70,	// (0x0000b41a) list_double_time_pane_t2_ParamLimits

0x1b70,	// (0x0000b41a) list_double_time_pane_t2

0x1b82,	// (0x0000b42c) list_double_time_pane_t3_ParamLimits

0x1b82,	// (0x0000b42c) list_double_time_pane_t3

0x1b94,	// (0x0000b43e) list_double_time_pane_t4_ParamLimits

0x1b94,	// (0x0000b43e) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00018f02) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00018f02) list_double_time_pane_t

0x8c8c,	// (0x00012536) list_setting_pane_g1_ParamLimits

0x8c8c,	// (0x00012536) list_setting_pane_g1

0x1980,	// (0x0000b22a) list_setting_pane_g2_ParamLimits

0x1980,	// (0x0000b22a) list_setting_pane_g2

0x0001,

0xf661,	// (0x00018f0b) list_setting_pane_g_ParamLimits

0xf661,	// (0x00018f0b) list_setting_pane_g

0x1ba6,	// (0x0000b450) list_setting_pane_t1_ParamLimits

0x1ba6,	// (0x0000b450) list_setting_pane_t1

0x1bbd,	// (0x0000b467) list_setting_pane_t2_ParamLimits

0x1bbd,	// (0x0000b467) list_setting_pane_t2

0x0002,

0xf666,	// (0x00018f10) list_setting_pane_t_ParamLimits

0xf666,	// (0x00018f10) list_setting_pane_t

0x1bfa,	// (0x0000b4a4) set_value_pane_cp_ParamLimits

0x1bfa,	// (0x0000b4a4) set_value_pane_cp

0x8c8c,	// (0x00012536) list_setting_number_pane_g1_ParamLimits

0x8c8c,	// (0x00012536) list_setting_number_pane_g1

0x1980,	// (0x0000b22a) list_setting_number_pane_g2_ParamLimits

0x1980,	// (0x0000b22a) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x00018f0b) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x00018f0b) list_setting_number_pane_g

0x1c06,	// (0x0000b4b0) list_setting_number_pane_t1_ParamLimits

0x1c06,	// (0x0000b4b0) list_setting_number_pane_t1

0x1c1a,	// (0x0000b4c4) list_setting_number_pane_t2_ParamLimits

0x1c1a,	// (0x0000b4c4) list_setting_number_pane_t2

0x1c31,	// (0x0000b4db) list_setting_number_pane_t3_ParamLimits

0x1c31,	// (0x0000b4db) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00018f17) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00018f17) list_setting_number_pane_t

0x1bfa,	// (0x0000b4a4) set_value_pane_ParamLimits

0x1bfa,	// (0x0000b4a4) set_value_pane

0x7f2f,	// (0x000117d9) bg_set_opt_pane_ParamLimits

0x7f2f,	// (0x000117d9) bg_set_opt_pane

0x7f50,	// (0x000117fa) set_value_pane_t1

0x7f5e,	// (0x00011808) slider_set_pane_cp3

0x1c74,	// (0x0000b51e) volume_small_pane_cp

0x7f70,	// (0x0001181a) list_form_gen_pane

0x7f79,	// (0x00011823) scroll_pane_cp8

0x1c7d,	// (0x0000b527) form_field_data_pane_ParamLimits

0x1c7d,	// (0x0000b527) form_field_data_pane

0x1c94,	// (0x0000b53e) form_field_data_wide_pane_ParamLimits

0x1c94,	// (0x0000b53e) form_field_data_wide_pane

0x7fc9,	// (0x00011873) form_field_popup_pane_ParamLimits

0x7fc9,	// (0x00011873) form_field_popup_pane

0x7fe1,	// (0x0001188b) form_field_popup_wide_pane_ParamLimits

0x7fe1,	// (0x0001188b) form_field_popup_wide_pane

0x7ff8,	// (0x000118a2) form_field_slider_pane_ParamLimits

0x7ff8,	// (0x000118a2) form_field_slider_pane

0x800b,	// (0x000118b5) form_field_slider_wide_pane_ParamLimits

0x800b,	// (0x000118b5) form_field_slider_wide_pane

0x801e,	// (0x000118c8) data_form_pane

0x1cbc,	// (0x0000b566) form_field_data_pane_t1

0x804a,	// (0x000118f4) input_focus_pane

0x8058,	// (0x00011902) data_form_wide_pane

0x8095,	// (0x0001193f) form_field_data_wide_pane_t1

0x792c,	// (0x000111d6) input_focus_pane_cp6

0x1cd4,	// (0x0000b57e) form_field_popup_pane_t1

0x804a,	// (0x000118f4) input_focus_pane_cp7

0x80cf,	// (0x00011979) list_form_pane

0x80e3,	// (0x0001198d) form_field_popup_wide_pane_t1

0x804a,	// (0x000118f4) input_focus_pane_cp8

0x80f8,	// (0x000119a2) list_form_wide_pane

0x1cf4,	// (0x0000b59e) form_field_slider_pane_t1_ParamLimits

0x1cf4,	// (0x0000b59e) form_field_slider_pane_t1

0x1d0a,	// (0x0000b5b4) form_field_slider_pane_t2_ParamLimits

0x1d0a,	// (0x0000b5b4) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00018f27) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00018f27) form_field_slider_pane_t

0x75e4,	// (0x00010e8e) input_focus_pane_cp9_ParamLimits

0x75e4,	// (0x00010e8e) input_focus_pane_cp9

0x1d1f,	// (0x0000b5c9) slider_cont_pane_ParamLimits

0x1d1f,	// (0x0000b5c9) slider_cont_pane

0x814b,	// (0x000119f5) form_field_slider_wide_pane_t1_ParamLimits

0x814b,	// (0x000119f5) form_field_slider_wide_pane_t1

0x815d,	// (0x00011a07) form_field_slider_wide_pane_t2_ParamLimits

0x815d,	// (0x00011a07) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00018f2c) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00018f2c) form_field_slider_wide_pane_t

0x75e4,	// (0x00010e8e) input_focus_pane_cp10_ParamLimits

0x75e4,	// (0x00010e8e) input_focus_pane_cp10

0x1d33,	// (0x0000b5dd) slider_cont_pane_cp1_ParamLimits

0x1d33,	// (0x0000b5dd) slider_cont_pane_cp1

0x1d47,	// (0x0000b5f1) slider_form_pane_cp

0x818b,	// (0x00011a35) input_focus_pane_g1

0x8193,	// (0x00011a3d) input_focus_pane_g2

0x819b,	// (0x00011a45) input_focus_pane_g3

0x81a3,	// (0x00011a4d) input_focus_pane_g4

0x81ab,	// (0x00011a55) input_focus_pane_g5

0x81b3,	// (0x00011a5d) input_focus_pane_g6

0x81bb,	// (0x00011a65) input_focus_pane_g7

0x81c3,	// (0x00011a6d) input_focus_pane_g8

0x81cb,	// (0x00011a75) input_focus_pane_g9

0x726f,	// (0x00010b19) input_focus_pane_g10

0x0009,

0xf687,	// (0x00018f31) input_focus_pane_g

0x9d2a,	// (0x000135d4) wait_border_pane_g3_copy1

0x1d4f,	// (0x0000b5f9) data_form_pane_t1

0x726f,	// (0x00010b19) wait_anim_pane_g1_copy1

0x308b,	// (0x0000c935) data_form_wide_pane_t1

0x81ed,	// (0x00011a97) list_form_graphic_pane_cp_ParamLimits

0x81ed,	// (0x00011a97) list_form_graphic_pane_cp

0xabdc,	// (0x00014486) slider_form_pane_g1

0xabe5,	// (0x0001448f) slider_form_pane_g2

0x0006,

0xf985,	// (0x0001922f) slider_form_pane_g

0x81ed,	// (0x00011a97) list_form_graphic_pane_ParamLimits

0x81ed,	// (0x00011a97) list_form_graphic_pane

0x81fe,	// (0x00011aa8) list_form_graphic_pane_g1

0x8206,	// (0x00011ab0) list_form_graphic_pane_t1_ParamLimits

0x8206,	// (0x00011ab0) list_form_graphic_pane_t1

0x7359,	// (0x00010c03) list_highlight_pane_cp5_ParamLimits

0x7359,	// (0x00010c03) list_highlight_pane_cp5

0x1d67,	// (0x0000b611) find_pane_g1

0x8224,	// (0x00011ace) input_find_pane

0x822d,	// (0x00011ad7) input_find_pane_g1_ParamLimits

0x822d,	// (0x00011ad7) input_find_pane_g1

0x8239,	// (0x00011ae3) input_find_pane_t1_ParamLimits

0x8239,	// (0x00011ae3) input_find_pane_t1

0x824e,	// (0x00011af8) input_find_pane_t2_ParamLimits

0x824e,	// (0x00011af8) input_find_pane_t2

0x0001,

0xf69c,	// (0x00018f46) input_find_pane_t_ParamLimits

0xf69c,	// (0x00018f46) input_find_pane_t

0x8263,	// (0x00011b0d) input_focus_pane_cp5_ParamLimits

0x8263,	// (0x00011b0d) input_focus_pane_cp5

0x827d,	// (0x00011b27) bg_popup_window_pane_cp2_ParamLimits

0x827d,	// (0x00011b27) bg_popup_window_pane_cp2

0x828a,	// (0x00011b34) listscroll_menu_pane_ParamLimits

0x828a,	// (0x00011b34) listscroll_menu_pane

0x1d7c,	// (0x0000b626) popup_submenu_window_ParamLimits

0x1d7c,	// (0x0000b626) popup_submenu_window

0x82ba,	// (0x00011b64) find_popup_pane_g1

0x82c2,	// (0x00011b6c) input_popup_find_pane_cp

0x8263,	// (0x00011b0d) input_focus_pane_cp4_ParamLimits

0x8263,	// (0x00011b0d) input_focus_pane_cp4

0x82d8,	// (0x00011b82) input_popup_find_pane_t1_ParamLimits

0x82d8,	// (0x00011b82) input_popup_find_pane_t1

0x7279,	// (0x00010b23) bg_popup_sub_pane_cp

0x8306,	// (0x00011bb0) listscroll_popup_sub_pane

0x830e,	// (0x00011bb8) list_submenu_pane_ParamLimits

0x830e,	// (0x00011bb8) list_submenu_pane

0x831f,	// (0x00011bc9) scroll_pane_cp4

0x8327,	// (0x00011bd1) list_single_popup_submenu_pane_ParamLimits

0x8327,	// (0x00011bd1) list_single_popup_submenu_pane

0x833a,	// (0x00011be4) list_single_popup_submenu_pane_g1

0x8342,	// (0x00011bec) list_single_popup_submenu_pane_t1_ParamLimits

0x8342,	// (0x00011bec) list_single_popup_submenu_pane_t1

0x75e4,	// (0x00010e8e) bg_active_tab_pane_cp1_ParamLimits

0x75e4,	// (0x00010e8e) bg_active_tab_pane_cp1

0x8357,	// (0x00011c01) tabs_2_active_pane_g1

0x1dac,	// (0x0000b656) tabs_2_active_pane_t1

0x75e4,	// (0x00010e8e) bg_passive_tab_pane_cp1_ParamLimits

0x75e4,	// (0x00010e8e) bg_passive_tab_pane_cp1

0x8357,	// (0x00011c01) tabs_2_passive_pane_g1

0x1dac,	// (0x0000b656) tabs_2_passive_pane_t1

0x7359,	// (0x00010c03) bg_active_tab_pane_cp4

0x1dbe,	// (0x0000b668) tabs_2_long_active_pane_t1

0x919c,	// (0x00012a46) bg_passive_tab_pane_cp4

0x5ecc,	// (0x0000f776) list_single_midp_graphic_pane_g4_ParamLimits

0x7359,	// (0x00010c03) bg_active_tab_pane_cp5

0x1dd1,	// (0x0000b67b) tabs_3_long_active_pane_t1

0x919c,	// (0x00012a46) bg_passive_tab_pane_cp5

0x5ecc,	// (0x0000f776) list_single_midp_graphic_pane_g4

0x7359,	// (0x00010c03) bg_popup_window_pane_cp13_ParamLimits

0x7359,	// (0x00010c03) bg_popup_window_pane_cp13

0x83b9,	// (0x00011c63) listscroll_popup_fast_pane_ParamLimits

0x83b9,	// (0x00011c63) listscroll_popup_fast_pane

0x83c8,	// (0x00011c72) grid_popup_fast_pane_ParamLimits

0x83c8,	// (0x00011c72) grid_popup_fast_pane

0x83da,	// (0x00011c84) scroll_pane_cp9_ParamLimits

0x83da,	// (0x00011c84) scroll_pane_cp9

0xe128,	// (0x000179d2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe128,	// (0x000179d2) list_single_graphic_hl_pane_t1_cp2

0x83fe,	// (0x00011ca8) input_focus_pane_cp20_ParamLimits

0x83fe,	// (0x00011ca8) input_focus_pane_cp20

0x840c,	// (0x00011cb6) query_popup_data_pane_t1_ParamLimits

0x840c,	// (0x00011cb6) query_popup_data_pane_t1

0x841f,	// (0x00011cc9) query_popup_data_pane_t2_ParamLimits

0x841f,	// (0x00011cc9) query_popup_data_pane_t2

0x8465,	// (0x00011d0f) query_popup_data_pane_t3_ParamLimits

0x8465,	// (0x00011d0f) query_popup_data_pane_t3

0x84a6,	// (0x00011d50) query_popup_data_pane_t4_ParamLimits

0x84a6,	// (0x00011d50) query_popup_data_pane_t4

0x84e2,	// (0x00011d8c) query_popup_data_pane_t5_ParamLimits

0x84e2,	// (0x00011d8c) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00018f4b) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00018f4b) query_popup_data_pane_t

0x818b,	// (0x00011a35) bg_set_opt_pane_g1

0x8193,	// (0x00011a3d) bg_set_opt_pane_g2

0x819b,	// (0x00011a45) bg_set_opt_pane_g3

0x81a3,	// (0x00011a4d) bg_set_opt_pane_g4

0x81ab,	// (0x00011a55) bg_set_opt_pane_g5

0x81b3,	// (0x00011a5d) bg_set_opt_pane_g6

0x81bb,	// (0x00011a65) bg_set_opt_pane_g7

0x81c3,	// (0x00011a6d) bg_set_opt_pane_g8

0x81cb,	// (0x00011a75) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00018f56) bg_set_opt_pane_g

0x55e7,	// (0x0000ee91) control_top_pane_stacon_ParamLimits

0x55e7,	// (0x0000ee91) control_top_pane_stacon

0x563a,	// (0x0000eee4) signal_pane_stacon_ParamLimits

0x563a,	// (0x0000eee4) signal_pane_stacon

0x8b0f,	// (0x000123b9) stacon_top_pane_g1_ParamLimits

0x8b0f,	// (0x000123b9) stacon_top_pane_g1

0x565f,	// (0x0000ef09) title_pane_stacon_ParamLimits

0x565f,	// (0x0000ef09) title_pane_stacon

0x5681,	// (0x0000ef2b) uni_indicator_pane_stacon_ParamLimits

0x5681,	// (0x0000ef2b) uni_indicator_pane_stacon

0x5696,	// (0x0000ef40) battery_pane_stacon_ParamLimits

0x5696,	// (0x0000ef40) battery_pane_stacon

0x56d6,	// (0x0000ef80) control_bottom_pane_stacon_ParamLimits

0x56d6,	// (0x0000ef80) control_bottom_pane_stacon

0x56f5,	// (0x0000ef9f) navi_pane_stacon_ParamLimits

0x56f5,	// (0x0000ef9f) navi_pane_stacon

0x8b31,	// (0x000123db) stacon_bottom_pane_g1_ParamLimits

0x8b31,	// (0x000123db) stacon_bottom_pane_g1

0x5359,	// (0x0000ec03) aid_levels_signal_lsc_ParamLimits

0x5359,	// (0x0000ec03) aid_levels_signal_lsc

0x5370,	// (0x0000ec1a) signal_pane_stacon_g1_ParamLimits

0x5370,	// (0x0000ec1a) signal_pane_stacon_g1

0x5384,	// (0x0000ec2e) signal_pane_stacon_g2_ParamLimits

0x5384,	// (0x0000ec2e) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00018f69) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00018f69) signal_pane_stacon_g

0x53b9,	// (0x0000ec63) title_pane_stacon_t1_ParamLimits

0x53b9,	// (0x0000ec63) title_pane_stacon_t1

0x8526,	// (0x00011dd0) uni_indicator_pane_stacon_g1

0x8530,	// (0x00011dda) uni_indicator_pane_stacon_g2

0x853a,	// (0x00011de4) uni_indicator_pane_stacon_g3

0x8544,	// (0x00011dee) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00018f75) uni_indicator_pane_stacon_g

0x53de,	// (0x0000ec88) control_top_pane_stacon_g1

0x53e6,	// (0x0000ec90) control_top_pane_stacon_t1_ParamLimits

0x53e6,	// (0x0000ec90) control_top_pane_stacon_t1

0x541d,	// (0x0000ecc7) aid_levels_battery_lsc_ParamLimits

0x541d,	// (0x0000ecc7) aid_levels_battery_lsc

0x5435,	// (0x0000ecdf) battery_pane_stacon_g1_ParamLimits

0x5435,	// (0x0000ecdf) battery_pane_stacon_g1

0x5448,	// (0x0000ecf2) battery_pane_stacon_g2_ParamLimits

0x5448,	// (0x0000ecf2) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00018f7e) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00018f7e) battery_pane_stacon_g

0x547e,	// (0x0000ed28) navi_icon_pane_stacon

0x5492,	// (0x0000ed3c) navi_navi_pane_stacon

0x547e,	// (0x0000ed28) navi_text_pane_stacon

0x53de,	// (0x0000ec88) control_bottom_pane_stacon_g1

0x54a6,	// (0x0000ed50) control_bottom_pane_stacon_t1_ParamLimits

0x54a6,	// (0x0000ed50) control_bottom_pane_stacon_t1

0x1de3,	// (0x0000b68d) grid_app_pane_ParamLimits

0x1de3,	// (0x0000b68d) grid_app_pane

0x1e11,	// (0x0000b6bb) scroll_pane_cp15_ParamLimits

0x1e11,	// (0x0000b6bb) scroll_pane_cp15

0x1e24,	// (0x0000b6ce) cell_app_pane_ParamLimits

0x1e24,	// (0x0000b6ce) cell_app_pane

0x1e5f,	// (0x0000b709) cell_app_pane_g1_ParamLimits

0x1e5f,	// (0x0000b709) cell_app_pane_g1

0x85df,	// (0x00011e89) cell_app_pane_g2_ParamLimits

0x85df,	// (0x00011e89) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00018f83) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00018f83) cell_app_pane_g

0x1e83,	// (0x0000b72d) cell_app_pane_t1_ParamLimits

0x1e83,	// (0x0000b72d) cell_app_pane_t1

0x8602,	// (0x00011eac) grid_highlight_pane_ParamLimits

0x8602,	// (0x00011eac) grid_highlight_pane

0x818b,	// (0x00011a35) cell_highlight_pane_g1

0x8193,	// (0x00011a3d) cell_highlight_pane_g2

0x819b,	// (0x00011a45) cell_highlight_pane_g3

0x81a3,	// (0x00011a4d) cell_highlight_pane_g4

0x81ab,	// (0x00011a55) cell_highlight_pane_g5

0x81b3,	// (0x00011a5d) cell_highlight_pane_g6

0x81bb,	// (0x00011a65) cell_highlight_pane_g7

0x81c3,	// (0x00011a6d) cell_highlight_pane_g8

0x81cb,	// (0x00011a75) cell_highlight_pane_g9

0x726f,	// (0x00010b19) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00018f31) cell_highlight_pane_g

0x8613,	// (0x00011ebd) bg_scroll_pane

0x54f0,	// (0x0000ed9a) scroll_handle_pane

0x865a,	// (0x00011f04) scroll_bg_pane_g1

0x866f,	// (0x00011f19) scroll_bg_pane_g2

0x8687,	// (0x00011f31) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00018f88) scroll_bg_pane_g

0x869c,	// (0x00011f46) scroll_handle_focus_pane_ParamLimits

0x869c,	// (0x00011f46) scroll_handle_focus_pane

0x865a,	// (0x00011f04) scroll_handle_pane_g1

0x86a9,	// (0x00011f53) scroll_handle_pane_g2

0x8687,	// (0x00011f31) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00018f8f) scroll_handle_pane_g

0x8263,	// (0x00011b0d) bg_popup_sub_pane_cp21_ParamLimits

0x8263,	// (0x00011b0d) bg_popup_sub_pane_cp21

0x86bd,	// (0x00011f67) popup_fep_japan_predictive_window_t1_ParamLimits

0x86bd,	// (0x00011f67) popup_fep_japan_predictive_window_t1

0x86d4,	// (0x00011f7e) popup_fep_japan_predictive_window_t2_ParamLimits

0x86d4,	// (0x00011f7e) popup_fep_japan_predictive_window_t2

0x8707,	// (0x00011fb1) popup_fep_japan_predictive_window_t3_ParamLimits

0x8707,	// (0x00011fb1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00018f96) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00018f96) popup_fep_japan_predictive_window_t

0x7279,	// (0x00010b23) bg_popup_sub_pane_cp23

0x873e,	// (0x00011fe8) listscroll_japin_cand_pane

0x8746,	// (0x00011ff0) popup_fep_japan_candidate_window_t1

0x8754,	// (0x00011ffe) candidate_pane_ParamLimits

0x8754,	// (0x00011ffe) candidate_pane

0x8766,	// (0x00012010) scroll_pane_cp30

0x876e,	// (0x00012018) list_single_popup_jap_candidate_pane_ParamLimits

0x876e,	// (0x00012018) list_single_popup_jap_candidate_pane

0x7279,	// (0x00010b23) list_highlight_pane_cp30

0x8783,	// (0x0001202d) list_single_popup_jap_candidate_pane_t1

0x8792,	// (0x0001203c) level_1_signal

0x879f,	// (0x00012049) level_2_signal

0x87ac,	// (0x00012056) level_3_signal

0x87b9,	// (0x00012063) level_4_signal

0x87c6,	// (0x00012070) level_5_signal

0x87d3,	// (0x0001207d) level_6_signal

0x87e0,	// (0x0001208a) level_7_signal

0x8792,	// (0x0001203c) level_1_battery

0x879f,	// (0x00012049) level_2_battery

0x87ac,	// (0x00012056) level_3_battery

0x87b9,	// (0x00012063) level_4_battery

0x87c6,	// (0x00012070) level_5_battery

0x87d3,	// (0x0001207d) level_6_battery

0x87e0,	// (0x0001208a) level_7_battery

0x8805,	// (0x000120af) list_menu_pane_ParamLimits

0x8805,	// (0x000120af) list_menu_pane

0x881b,	// (0x000120c5) scroll_pane_cp25_ParamLimits

0x881b,	// (0x000120c5) scroll_pane_cp25

0x8834,	// (0x000120de) list_double2_graphic_pane_cp2_ParamLimits

0x8834,	// (0x000120de) list_double2_graphic_pane_cp2

0x8834,	// (0x000120de) list_double2_large_graphic_pane_cp2_ParamLimits

0x8834,	// (0x000120de) list_double2_large_graphic_pane_cp2

0x8834,	// (0x000120de) list_double2_pane_cp2_ParamLimits

0x8834,	// (0x000120de) list_double2_pane_cp2

0x8834,	// (0x000120de) list_double_graphic_pane_cp2_ParamLimits

0x8834,	// (0x000120de) list_double_graphic_pane_cp2

0x8834,	// (0x000120de) list_double_large_graphic_pane_cp2_ParamLimits

0x8834,	// (0x000120de) list_double_large_graphic_pane_cp2

0x8834,	// (0x000120de) list_double_number_pane_cp2_ParamLimits

0x8834,	// (0x000120de) list_double_number_pane_cp2

0x8834,	// (0x000120de) list_double_pane_cp2_ParamLimits

0x8834,	// (0x000120de) list_double_pane_cp2

0x1ead,	// (0x0000b757) list_single_2graphic_pane_cp2_ParamLimits

0x1ead,	// (0x0000b757) list_single_2graphic_pane_cp2

0x1ead,	// (0x0000b757) list_single_graphic_heading_pane_cp2_ParamLimits

0x1ead,	// (0x0000b757) list_single_graphic_heading_pane_cp2

0x1ead,	// (0x0000b757) list_single_graphic_pane_cp2_ParamLimits

0x1ead,	// (0x0000b757) list_single_graphic_pane_cp2

0x1ead,	// (0x0000b757) list_single_heading_pane_cp2_ParamLimits

0x1ead,	// (0x0000b757) list_single_heading_pane_cp2

0x8869,	// (0x00012113) list_single_large_graphic_pane_cp2_ParamLimits

0x8869,	// (0x00012113) list_single_large_graphic_pane_cp2

0x1ead,	// (0x0000b757) list_single_number_heading_pane_cp2_ParamLimits

0x1ead,	// (0x0000b757) list_single_number_heading_pane_cp2

0x1ead,	// (0x0000b757) list_single_number_pane_cp2_ParamLimits

0x1ead,	// (0x0000b757) list_single_number_pane_cp2

0x1ead,	// (0x0000b757) list_single_pane_cp2_ParamLimits

0x1ead,	// (0x0000b757) list_single_pane_cp2

0x88d8,	// (0x00012182) bg_popup_sub_pane_cp22

0x559f,	// (0x0000ee49) popup_side_volume_key_window_g1

0x55c3,	// (0x0000ee6d) popup_side_volume_key_window_t1

0x55df,	// (0x0000ee89) volume_small_pane_cp1

0x75e4,	// (0x00010e8e) bg_popup_sub_pane_cp24_ParamLimits

0x75e4,	// (0x00010e8e) bg_popup_sub_pane_cp24

0x88ee,	// (0x00012198) fep_china_uni_candidate_pane_ParamLimits

0x88ee,	// (0x00012198) fep_china_uni_candidate_pane

0x8902,	// (0x000121ac) fep_china_uni_entry_pane

0x8912,	// (0x000121bc) popup_fep_china_uni_window_g1

0x892e,	// (0x000121d8) fep_china_uni_entry_pane_g1

0x8936,	// (0x000121e0) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00018fc7) fep_china_uni_entry_pane_g

0x893e,	// (0x000121e8) fep_entry_item_pane

0x8948,	// (0x000121f2) fep_candidate_item_pane

0x8950,	// (0x000121fa) fep_china_uni_candidate_pane_g1

0x8958,	// (0x00012202) fep_china_uni_candidate_pane_g2

0x8960,	// (0x0001220a) fep_china_uni_candidate_pane_g3

0x8968,	// (0x00012212) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00018fcc) fep_china_uni_candidate_pane_g

0x726f,	// (0x00010b19) fep_entry_item_pane_g1

0x8970,	// (0x0001221a) fep_entry_item_pane_t1_ParamLimits

0x8970,	// (0x0001221a) fep_entry_item_pane_t1

0x8986,	// (0x00012230) fep_candidate_item_pane_t1_ParamLimits

0x8986,	// (0x00012230) fep_candidate_item_pane_t1

0x899b,	// (0x00012245) fep_candidate_item_pane_t2_ParamLimits

0x899b,	// (0x00012245) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00018fd5) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00018fd5) fep_candidate_item_pane_t

0x7359,	// (0x00010c03) list_highlight_pane_cp31_ParamLimits

0x7359,	// (0x00010c03) list_highlight_pane_cp31

0x89ad,	// (0x00012257) level_1_signal_lsc

0x89b6,	// (0x00012260) level_2_signal_lsc

0x89bf,	// (0x00012269) level_3_signal_lsc

0x89c8,	// (0x00012272) level_4_signal_lsc

0x89d1,	// (0x0001227b) level_5_signal_lsc

0x89da,	// (0x00012284) level_6_signal_lsc

0x89e3,	// (0x0001228d) level_7_signal_lsc

0x89e3,	// (0x0001228d) level_1_battery_lsc

0x89ec,	// (0x00012296) level_2_battery_lsc

0x89f5,	// (0x0001229f) level_3_battery_lsc

0x89fe,	// (0x000122a8) level_4_battery_lsc

0x8a07,	// (0x000122b1) level_5_battery_lsc

0x8a10,	// (0x000122ba) level_6_battery_lsc

0x89ad,	// (0x00012257) level_7_battery_lsc

0x8a19,	// (0x000122c3) scroll_handle_focus_pane_g1

0x8a22,	// (0x000122cc) scroll_handle_focus_pane_g2

0x8a2b,	// (0x000122d5) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00018fda) scroll_handle_focus_pane_g

0x1f39,	// (0x0000b7e3) list_single_2graphic_pane_g1_ParamLimits

0x1f39,	// (0x0000b7e3) list_single_2graphic_pane_g1

0x1926,	// (0x0000b1d0) list_single_2graphic_pane_g2_ParamLimits

0x1926,	// (0x0000b1d0) list_single_2graphic_pane_g2

0x963a,	// (0x00012ee4) list_single_2graphic_pane_g3_ParamLimits

0x963a,	// (0x00012ee4) list_single_2graphic_pane_g3

0x1f45,	// (0x0000b7ef) list_single_2graphic_pane_g4_ParamLimits

0x1f45,	// (0x0000b7ef) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00018fe1) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00018fe1) list_single_2graphic_pane_g

0x1f51,	// (0x0000b7fb) list_single_2graphic_pane_t1_ParamLimits

0x1f51,	// (0x0000b7fb) list_single_2graphic_pane_t1

0x1f7f,	// (0x0000b829) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x1f7f,	// (0x0000b829) list_double2_graphic_large_graphic_pane_g1

0x196f,	// (0x0000b219) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x196f,	// (0x0000b219) list_double2_graphic_large_graphic_pane_g2

0x1980,	// (0x0000b22a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x1980,	// (0x0000b22a) list_double2_graphic_large_graphic_pane_g3

0xd92a,	// (0x000171d4) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd92a,	// (0x000171d4) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00018fea) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00018fea) list_double2_graphic_large_graphic_pane_g

0x1f8f,	// (0x0000b839) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x1f8f,	// (0x0000b839) list_double2_graphic_large_graphic_pane_t1

0x1fa5,	// (0x0000b84f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x1fa5,	// (0x0000b84f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00018ff3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00018ff3) list_double2_graphic_large_graphic_pane_t

0x8bea,	// (0x00012494) popup_fast_swap_window_ParamLimits

0x8bea,	// (0x00012494) popup_fast_swap_window

0x8c06,	// (0x000124b0) popup_side_volume_key_window

0x8c20,	// (0x000124ca) stacon_top_pane

0x8c2a,	// (0x000124d4) status_pane_ParamLimits

0x8c2a,	// (0x000124d4) status_pane

0x1fb7,	// (0x0000b861) status_small_pane

0x7279,	// (0x00010b23) control_pane

0x7279,	// (0x00010b23) stacon_bottom_pane

0x7f79,	// (0x00011823) scroll_pane_cp121

0x7f70,	// (0x0001181a) set_content_pane

0x8abe,	// (0x00012368) bg_active_tab_pane_g1_cp1

0x8ac7,	// (0x00012371) bg_active_tab_pane_g2_cp1

0x8ad0,	// (0x0001237a) bg_active_tab_pane_g3_cp1

0x8abe,	// (0x00012368) bg_passive_tab_pane_g1_cp1

0x8ac7,	// (0x00012371) bg_passive_tab_pane_g2_cp1

0x8ad0,	// (0x0001237a) bg_passive_tab_pane_g3_cp1

0x8ad9,	// (0x00012383) bg_active_tab_pane_g1_cp2

0x8ac7,	// (0x00012371) bg_active_tab_pane_g2_cp2

0x8ae2,	// (0x0001238c) bg_active_tab_pane_g3_cp2

0x8ad9,	// (0x00012383) bg_passive_tab_pane_g1_cp2

0x8ac7,	// (0x00012371) bg_passive_tab_pane_g2_cp2

0x8ae2,	// (0x0001238c) bg_passive_tab_pane_g3_cp2

0x8aeb,	// (0x00012395) bg_active_tab_pane_g1_cp3

0x8ac7,	// (0x00012371) bg_active_tab_pane_g2_cp3

0x8af4,	// (0x0001239e) bg_active_tab_pane_g3_cp3

0x8aeb,	// (0x00012395) bg_passive_tab_pane_g1_cp3

0x8ac7,	// (0x00012371) bg_passive_tab_pane_g2_cp3

0x8af4,	// (0x0001239e) bg_passive_tab_pane_g3_cp3

0x8afd,	// (0x000123a7) bg_active_tab_pane_g1_cp4

0x8ac7,	// (0x00012371) bg_active_tab_pane_g2_cp4

0x8b06,	// (0x000123b0) bg_active_tab_pane_g3_cp4

0x8afd,	// (0x000123a7) bg_passive_tab_pane_g1_cp4

0x8ac7,	// (0x00012371) bg_passive_tab_pane_g2_cp4

0x8b06,	// (0x000123b0) bg_passive_tab_pane_g3_cp4

0x8b4d,	// (0x000123f7) bg_active_tab_pane_g1_cp5

0x8ac7,	// (0x00012371) bg_active_tab_pane_g2_cp5

0x8b56,	// (0x00012400) bg_active_tab_pane_g3_cp5

0x8b4d,	// (0x000123f7) bg_passive_tab_pane_g1_cp5

0x8ac7,	// (0x00012371) bg_passive_tab_pane_g2_cp5

0x8b56,	// (0x00012400) bg_passive_tab_pane_g3_cp5

0xb255,	// (0x00014aff) list_set_graphic_pane_ParamLimits

0xb255,	// (0x00014aff) list_set_graphic_pane

0x7279,	// (0x00010b23) bg_set_opt_pane_cp4

0x8b71,	// (0x0001241b) list_set_graphic_pane_g1_ParamLimits

0x8b71,	// (0x0001241b) list_set_graphic_pane_g1

0x8b7d,	// (0x00012427) list_set_graphic_pane_g2_ParamLimits

0x8b7d,	// (0x00012427) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00018ff8) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00018ff8) list_set_graphic_pane_g

0x0009,

0xfacc,	// (0x00019376) volume_small_pane_cp_g

0x8b9f,	// (0x00012449) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8b9f,	// (0x00012449) list_double2_large_graphic_pane_g1_cp2

0x8bab,	// (0x00012455) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8bab,	// (0x00012455) list_double2_large_graphic_pane_g2_cp2

0x8bba,	// (0x00012464) list_double2_large_graphic_pane_g3_cp2

0x8bc2,	// (0x0001246c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8bc2,	// (0x0001246c) list_double2_large_graphic_pane_t1_cp2

0x8bd8,	// (0x00012482) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8bd8,	// (0x00012482) list_double2_large_graphic_pane_t2_cp2

0xa7bf,	// (0x00014069) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa7bf,	// (0x00014069) list_double_large_graphic_pane_g1_cp2

0xa7d0,	// (0x0001407a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa7d0,	// (0x0001407a) list_double_large_graphic_pane_g2_cp2

0x8d3d,	// (0x000125e7) list_double_large_graphic_pane_g3_cp2

0xa7df,	// (0x00014089) list_double_large_graphic_pane_g4_cp

0xa7e7,	// (0x00014091) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa7e7,	// (0x00014091) list_double_large_graphic_pane_t1_cp2

0xa7fe,	// (0x000140a8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa7fe,	// (0x000140a8) list_double_large_graphic_pane_t2_cp2

0x8c41,	// (0x000124eb) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8c41,	// (0x000124eb) list_double2_graphic_pane_g1_cp2

0x8c4d,	// (0x000124f7) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8c4d,	// (0x000124f7) list_double2_graphic_pane_g2_cp2

0x8c5c,	// (0x00012506) list_double2_graphic_pane_g3_cp2

0x8c64,	// (0x0001250e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8c64,	// (0x0001250e) list_double2_graphic_pane_t1_cp2

0x8c7a,	// (0x00012524) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8c7a,	// (0x00012524) list_double2_graphic_pane_t2_cp2

0x8c8c,	// (0x00012536) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8c8c,	// (0x00012536) list_single_number_heading_pane_g1_cp2

0x8c98,	// (0x00012542) list_single_number_heading_pane_g2_cp2

0x8ca0,	// (0x0001254a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8ca0,	// (0x0001254a) list_single_number_heading_pane_t1_cp2

0x8cb6,	// (0x00012560) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8cb6,	// (0x00012560) list_single_number_heading_pane_t2_cp2

0x8cc8,	// (0x00012572) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8cc8,	// (0x00012572) list_single_number_heading_pane_t3_cp2

0x8c8c,	// (0x00012536) list_single_heading_pane_g1_cp2_ParamLimits

0x8c8c,	// (0x00012536) list_single_heading_pane_g1_cp2

0x8c98,	// (0x00012542) list_single_heading_pane_g2_cp2

0x8ca0,	// (0x0001254a) list_single_heading_pane_t1_cp2_ParamLimits

0x8ca0,	// (0x0001254a) list_single_heading_pane_t1_cp2

0xa5c9,	// (0x00013e73) list_single_heading_pane_t2_cp2_ParamLimits

0xa5c9,	// (0x00013e73) list_single_heading_pane_t2_cp2

0xa511,	// (0x00013dbb) list_double_graphic_pane_g1_cp2_ParamLimits

0xa511,	// (0x00013dbb) list_double_graphic_pane_g1_cp2

0xa51d,	// (0x00013dc7) list_double_graphic_pane_g2_cp2_ParamLimits

0xa51d,	// (0x00013dc7) list_double_graphic_pane_g2_cp2

0xa52c,	// (0x00013dd6) list_double_graphic_pane_g3_cp2

0xa534,	// (0x00013dde) list_double_graphic_pane_t1_cp2_ParamLimits

0xa534,	// (0x00013dde) list_double_graphic_pane_t1_cp2

0xa54a,	// (0x00013df4) list_double_graphic_pane_t2_cp2_ParamLimits

0xa54a,	// (0x00013df4) list_double_graphic_pane_t2_cp2

0x7ad2,	// (0x0001137c) list_double_number_pane_g1_cp2_ParamLimits

0x7ad2,	// (0x0001137c) list_double_number_pane_g1_cp2

0x8d3d,	// (0x000125e7) list_double_number_pane_g2_cp2

0xa4d7,	// (0x00013d81) list_double_number_pane_t1_cp2_ParamLimits

0xa4d7,	// (0x00013d81) list_double_number_pane_t1_cp2

0xa4e9,	// (0x00013d93) list_double_number_pane_t2_cp2_ParamLimits

0xa4e9,	// (0x00013d93) list_double_number_pane_t2_cp2

0xa4ff,	// (0x00013da9) list_double_number_pane_t3_cp2_ParamLimits

0xa4ff,	// (0x00013da9) list_double_number_pane_t3_cp2

0xa3c2,	// (0x00013c6c) list_single_graphic_pane_g1_cp2_ParamLimits

0xa3c2,	// (0x00013c6c) list_single_graphic_pane_g1_cp2

0x8d93,	// (0x0001263d) list_single_graphic_pane_g2_cp2_ParamLimits

0x8d93,	// (0x0001263d) list_single_graphic_pane_g2_cp2

0x8d9f,	// (0x00012649) list_single_graphic_pane_g3_cp2

0xa39a,	// (0x00013c44) list_single_graphic_pane_t1_cp2_ParamLimits

0xa39a,	// (0x00013c44) list_single_graphic_pane_t1_cp2

0x8d93,	// (0x0001263d) list_single_number_pane_g1_cp2_ParamLimits

0x8d93,	// (0x0001263d) list_single_number_pane_g1_cp2

0x8d9f,	// (0x00012649) list_single_number_pane_g2_cp2

0xa39a,	// (0x00013c44) list_single_number_pane_t1_cp2_ParamLimits

0xa39a,	// (0x00013c44) list_single_number_pane_t1_cp2

0xa3b0,	// (0x00013c5a) list_single_number_pane_t2_cp2_ParamLimits

0xa3b0,	// (0x00013c5a) list_single_number_pane_t2_cp2

0x8bab,	// (0x00012455) list_double2_pane_g1_cp2_ParamLimits

0x8bab,	// (0x00012455) list_double2_pane_g1_cp2

0x8bba,	// (0x00012464) list_double2_pane_g2_cp2

0x8d15,	// (0x000125bf) list_double2_pane_t1_cp2_ParamLimits

0x8d15,	// (0x000125bf) list_double2_pane_t1_cp2

0x8d2b,	// (0x000125d5) list_double2_pane_t2_cp2_ParamLimits

0x8d2b,	// (0x000125d5) list_double2_pane_t2_cp2

0x7ad2,	// (0x0001137c) list_double_pane_g1_cp2_ParamLimits

0x7ad2,	// (0x0001137c) list_double_pane_g1_cp2

0x8d3d,	// (0x000125e7) list_double_pane_g2_cp2

0x8d45,	// (0x000125ef) list_double_pane_t1_cp2_ParamLimits

0x8d45,	// (0x000125ef) list_double_pane_t1_cp2

0x8d5b,	// (0x00012605) list_double_pane_t2_cp2_ParamLimits

0x8d5b,	// (0x00012605) list_double_pane_t2_cp2

0x8d83,	// (0x0001262d) list_single_pane_cp2_g3

0x8d93,	// (0x0001263d) list_single_pane_g1_cp2_ParamLimits

0x8d93,	// (0x0001263d) list_single_pane_g1_cp2

0x8d9f,	// (0x00012649) list_single_pane_g2_cp2

0x8da7,	// (0x00012651) list_single_pane_t1_cp2_ParamLimits

0x8da7,	// (0x00012651) list_single_pane_t1_cp2

0x8dbf,	// (0x00012669) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8dbf,	// (0x00012669) list_single_large_graphic_pane_g1_cp2

0x8dcb,	// (0x00012675) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8dcb,	// (0x00012675) list_single_large_graphic_pane_g2_cp2

0x8dd7,	// (0x00012681) list_single_large_graphic_pane_g3_cp2

0x8ddf,	// (0x00012689) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8ddf,	// (0x00012689) list_single_large_graphic_pane_g4_cp1

0x8df9,	// (0x000126a3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8df9,	// (0x000126a3) list_single_large_graphic_pane_t1_cp2

0xa366,	// (0x00013c10) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa366,	// (0x00013c10) list_single_graphic_heading_pane_g1_cp2

0xa335,	// (0x00013bdf) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa335,	// (0x00013bdf) list_single_graphic_heading_pane_g4_cp2

0x8d9f,	// (0x00012649) list_single_graphic_heading_pane_g5_cp2

0xa372,	// (0x00013c1c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa372,	// (0x00013c1c) list_single_graphic_heading_pane_t1_cp2

0xa388,	// (0x00013c32) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa388,	// (0x00013c32) list_single_graphic_heading_pane_t2_cp2

0xa329,	// (0x00013bd3) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa329,	// (0x00013bd3) list_single_2graphic_pane_g1_cp2

0xa335,	// (0x00013bdf) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa335,	// (0x00013bdf) list_single_2graphic_pane_g2_cp2

0x8d9f,	// (0x00012649) list_single_2graphic_pane_g3_cp2

0xa344,	// (0x00013bee) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa344,	// (0x00013bee) list_single_2graphic_pane_g4_cp2

0xa350,	// (0x00013bfa) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa350,	// (0x00013bfa) list_single_2graphic_pane_t1_cp2

0x726f,	// (0x00010b19) list_highlight_pane_g10_cp1

0x9f23,	// (0x000137cd) list_highlight_pane_g1_cp1

0x9f2b,	// (0x000137d5) list_highlight_pane_g2_cp1

0x9f33,	// (0x000137dd) list_highlight_pane_g3_cp1

0x9f3b,	// (0x000137e5) list_highlight_pane_g4_cp1

0x9f43,	// (0x000137ed) list_highlight_pane_g5_cp1

0x9f4b,	// (0x000137f5) list_highlight_pane_g6_cp1

0x9f53,	// (0x000137fd) list_highlight_pane_g7_cp1

0x9f5b,	// (0x00013805) list_highlight_pane_g8_cp1

0x9f63,	// (0x0001380d) list_highlight_pane_g9_cp1

0x2d59,	// (0x0000c603) form_field_slider_pane_t3

0x2d67,	// (0x0000c611) form_field_slider_pane_t4

0x9e67,	// (0x00013711) slider_form_pane_ParamLimits

0x9e67,	// (0x00013711) slider_form_pane

0x7279,	// (0x00010b23) control_abbreviations

0x7279,	// (0x00010b23) control_conventions

0x7279,	// (0x00010b23) control_definitions

0x7279,	// (0x00010b23) format_table_attribute

0xa613,	// (0x00013ebd) bg_popup_preview_window_pane_g9

0x7279,	// (0x00010b23) format_table_data2

0x7279,	// (0x00010b23) format_table_data3

0x7279,	// (0x00010b23) format_table_data_example

0x0008,

0x7279,	// (0x00010b23) intro_purpose

0xf8e5,	// (0x0001918f) bg_popup_preview_window_pane_g

0x7279,	// (0x00010b23) texts_category

0x7279,	// (0x00010b23) texts_graphics

0x8e0f,	// (0x000126b9) text_digital

0x8e1e,	// (0x000126c8) text_primary

0x8e2d,	// (0x000126d7) text_primary_small

0x8e3c,	// (0x000126e6) text_secondary

0x8e4b,	// (0x000126f5) text_title

0xad7c,	// (0x00014626) bg_passive_tab_pane_g1_cp3_srt

0x8ac7,	// (0x00012371) bg_passive_tab_pane_g2_cp3_srt

0xad85,	// (0x0001462f) bg_passive_tab_pane_g3_cp3_srt

0x75e4,	// (0x00010e8e) bg_active_tab_pane_cp3_srt_ParamLimits

0x75e4,	// (0x00010e8e) bg_active_tab_pane_cp3_srt

0xad8e,	// (0x00014638) tabs_4_active_pane_srt_g1

0x3129,	// (0x0000c9d3) tabs_4_active_pane_srt_t1_ParamLimits

0x3129,	// (0x0000c9d3) tabs_4_active_pane_srt_t1

0xad7c,	// (0x00014626) bg_active_tab_pane_g1_cp3_copy1

0x8ac7,	// (0x00012371) bg_active_tab_pane_g2_cp3_copy1

0xad85,	// (0x0001462f) bg_active_tab_pane_g3_cp3_copy1

0x7359,	// (0x00010c03) tabs_2_long_active_pane_srt_ParamLimits

0x7359,	// (0x00010c03) tabs_2_long_active_pane_srt

0x7359,	// (0x00010c03) tabs_2_long_passive_pane_srt_ParamLimits

0x7359,	// (0x00010c03) tabs_2_long_passive_pane_srt

0x919c,	// (0x00012a46) bg_passive_tab_pane_cp4_srt_ParamLimits

0x919c,	// (0x00012a46) bg_passive_tab_pane_cp4_srt

0xaa3b,	// (0x000142e5) bg_passive_tab_pane_g1_cp4_srt

0x8ac7,	// (0x00012371) bg_passive_tab_pane_g2_cp4_srt

0xaa44,	// (0x000142ee) bg_passive_tab_pane_g3_cp4_srt

0x7359,	// (0x00010c03) bg_active_tab_pane_cp4_srt_ParamLimits

0x7359,	// (0x00010c03) bg_active_tab_pane_cp4_srt

0x2f06,	// (0x0000c7b0) tabs_2_long_active_pane_srt_t1_ParamLimits

0x2f06,	// (0x0000c7b0) tabs_2_long_active_pane_srt_t1

0xaa3b,	// (0x000142e5) bg_active_tab_pane_g1_cp4_srt

0x8ac7,	// (0x00012371) bg_active_tab_pane_g2_cp4_srt

0xaa44,	// (0x000142ee) bg_active_tab_pane_g3_cp4_srt

0x75e4,	// (0x00010e8e) tabs_3_long_active_pane_srt_ParamLimits

0x75e4,	// (0x00010e8e) tabs_3_long_active_pane_srt

0x75e4,	// (0x00010e8e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x75e4,	// (0x00010e8e) tabs_3_long_passive_pane_cp_srt

0x75e4,	// (0x00010e8e) tabs_3_long_passive_pane_srt_ParamLimits

0x75e4,	// (0x00010e8e) tabs_3_long_passive_pane_srt

0x919c,	// (0x00012a46) bg_passive_tab_pane_cp5_srt_ParamLimits

0x919c,	// (0x00012a46) bg_passive_tab_pane_cp5_srt

0x8b4d,	// (0x000123f7) bg_passive_tab_pane_g1_cp5_srt

0x8ac7,	// (0x00012371) bg_passive_tab_pane_g2_cp5_srt

0x8b56,	// (0x00012400) bg_passive_tab_pane_g3_cp5_srt

0x7359,	// (0x00010c03) bg_active_tab_pane_cp5_srt_ParamLimits

0x7359,	// (0x00010c03) bg_active_tab_pane_cp5_srt

0x2ef0,	// (0x0000c79a) tabs_3_long_active_pane_srt_t1_ParamLimits

0x2ef0,	// (0x0000c79a) tabs_3_long_active_pane_srt_t1

0x8b4d,	// (0x000123f7) bg_active_tab_pane_g1_cp5_srt

0x8ac7,	// (0x00012371) bg_active_tab_pane_g2_cp5_srt

0x8b56,	// (0x00012400) bg_active_tab_pane_g3_cp5_srt

0xaa1b,	// (0x000142c5) navi_text_pane_srt_t1

0xaa13,	// (0x000142bd) navi_icon_pane_srt_g1

0x9012,	// (0x000128bc) midp_editing_number_pane_srt

0x8e5a,	// (0x00012704) midp_ticker_pane_srt

0x901a,	// (0x000128c4) midp_ticker_pane_srt_g1

0x9022,	// (0x000128cc) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00019017) midp_ticker_pane_srt_g

0x902a,	// (0x000128d4) midp_ticker_pane_srt_t1

0xaa04,	// (0x000142ae) midp_editing_number_pane_t1_copy1

0x1fc0,	// (0x0000b86a) listscroll_midp_pane

0x1fc0,	// (0x0000b86a) midp_form_pane

0x8eca,	// (0x00012774) midp_info_popup_window_ParamLimits

0x8eca,	// (0x00012774) midp_info_popup_window

0x8263,	// (0x00011b0d) bg_popup_sub_pane_cp50_ParamLimits

0x8263,	// (0x00011b0d) bg_popup_sub_pane_cp50

0x9b74,	// (0x0001341e) listscroll_midp_info_pane_ParamLimits

0x9b74,	// (0x0001341e) listscroll_midp_info_pane

0x9b54,	// (0x000133fe) listscroll_form_midp_pane_ParamLimits

0x9b54,	// (0x000133fe) listscroll_form_midp_pane

0x9b60,	// (0x0001340a) scroll_bar_cp050

0x9b54,	// (0x000133fe) list_midp_pane

0xba37,	// (0x000152e1) signal_pane_g2_cp

0x9a6e,	// (0x00013318) listscroll_midp_info_pane_t1_ParamLimits

0x9a6e,	// (0x00013318) listscroll_midp_info_pane_t1

0x9a86,	// (0x00013330) listscroll_midp_info_pane_t2_ParamLimits

0x9a86,	// (0x00013330) listscroll_midp_info_pane_t2

0x9ac4,	// (0x0001336e) listscroll_midp_info_pane_t3_ParamLimits

0x9ac4,	// (0x0001336e) listscroll_midp_info_pane_t3

0x9afe,	// (0x000133a8) listscroll_midp_info_pane_t4_ParamLimits

0x9afe,	// (0x000133a8) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x000190ca) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x000190ca) listscroll_midp_info_pane_t

0x831f,	// (0x00011bc9) scroll_pane_cp21

0x9a12,	// (0x000132bc) form_midp_field_choice_group_pane

0x9a1b,	// (0x000132c5) form_midp_field_text_pane

0x9a54,	// (0x000132fe) form_midp_field_time_pane

0x9a5c,	// (0x00013306) form_midp_gauge_slider_pane

0x9a65,	// (0x0001330f) form_midp_gauge_wait_pane

0x7279,	// (0x00010b23) form_midp_image_pane

0x2d45,	// (0x0000c5ef) list_single_midp_pane_ParamLimits

0x2d45,	// (0x0000c5ef) list_single_midp_pane

0x2d26,	// (0x0000c5d0) form_midp_field_text_pane_t1

0x97ce,	// (0x00013078) input_focus_pane_cp050

0x99ec,	// (0x00013296) list_midp_form_text_pane

0x999b,	// (0x00013245) form_midp_field_choice_group_pane_t1

0x99a9,	// (0x00013253) input_focus_pane_cp051

0x99bd,	// (0x00013267) list_midp_choice_pane

0x7279,	// (0x00010b23) status_idle_pane

0x997f,	// (0x00013229) form_midp_field_time_pane_t1

0x726f,	// (0x00010b19) wait_anim_pane_g2_copy1

0x998d,	// (0x00013237) form_midp_field_time_pane_t2

0x0001,

0x8f74,	// (0x0001281e) aid_navinavi_width_2_pane

0xf81b,	// (0x000190c5) form_midp_field_time_pane_t

0x7279,	// (0x00010b23) input_focus_pane_cp052

0x7279,	// (0x00010b23) bg_input_focus_pane_cp040

0x993f,	// (0x000131e9) form_midp_gauge_slider_pane_t1

0x994d,	// (0x000131f7) form_midp_gauge_slider_pane_t2

0x2d0a,	// (0x0000c5b4) form_midp_gauge_slider_pane_t3

0x2d18,	// (0x0000c5c2) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x000190bc) form_midp_gauge_slider_pane_t

0x9977,	// (0x00013221) form_midp_slider_pane

0x7359,	// (0x00010c03) bg_input_focus_pane_cp041_ParamLimits

0x7359,	// (0x00010c03) bg_input_focus_pane_cp041

0x990f,	// (0x000131b9) form_midp_gauge_wait_pane_t1_ParamLimits

0x990f,	// (0x000131b9) form_midp_gauge_wait_pane_t1

0x9921,	// (0x000131cb) form_midp_gauge_wait_pane_t2_ParamLimits

0x9921,	// (0x000131cb) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x000190b7) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x000190b7) form_midp_gauge_wait_pane_t

0x9933,	// (0x000131dd) form_midp_wait_pane_ParamLimits

0x9933,	// (0x000131dd) form_midp_wait_pane

0x98d9,	// (0x00013183) form_midp_image_pane_g1

0x98e2,	// (0x0001318c) form_midp_image_pane_t1

0x98f1,	// (0x0001319b) form_midp_image_pane_t2

0x9900,	// (0x000131aa) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x000190b0) form_midp_image_pane_t

0x98c1,	// (0x0001316b) list_single_midp_pane_g1

0x98ca,	// (0x00013174) list_single_midp_pane_t1

0x2cf8,	// (0x0000c5a2) list_midp_form_item_pane_ParamLimits

0x2cf8,	// (0x0000c5a2) list_midp_form_item_pane

0x8f1c,	// (0x000127c6) list_midp_form_item_pane_t1

0x8f2b,	// (0x000127d5) midp_ticker_pane_g1

0x8f37,	// (0x000127e1) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00018ffd) midp_ticker_pane_g

0x8f43,	// (0x000127ed) midp_ticker_pane_t1

0xac5b,	// (0x00014505) midp_editing_number_pane_t1

0xac39,	// (0x000144e3) midp_editing_number_pane

0xac48,	// (0x000144f2) midp_ticker_pane

0xa9e2,	// (0x0001428c) ai_message_heading_pane

0x7279,	// (0x00010b23) bg_popup_window_pane_cp14

0xa9ea,	// (0x00014294) listscroll_ai_message_pane

0xa96c,	// (0x00014216) ai_message_heading_pane_g1_ParamLimits

0xa96c,	// (0x00014216) ai_message_heading_pane_g1

0xa978,	// (0x00014222) ai_message_heading_pane_g2_ParamLimits

0xa978,	// (0x00014222) ai_message_heading_pane_g2

0xa984,	// (0x0001422e) ai_message_heading_pane_g3_ParamLimits

0xa984,	// (0x0001422e) ai_message_heading_pane_g3

0xa990,	// (0x0001423a) ai_message_heading_pane_g4_ParamLimits

0xa990,	// (0x0001423a) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x000191f1) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x000191f1) ai_message_heading_pane_g

0xa99c,	// (0x00014246) ai_message_heading_pane_t1_ParamLimits

0xa99c,	// (0x00014246) ai_message_heading_pane_t1

0xa9b6,	// (0x00014260) ai_message_heading_pane_t2_ParamLimits

0xa9b6,	// (0x00014260) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x000191fa) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x000191fa) ai_message_heading_pane_t

0xa9c8,	// (0x00014272) bg_popup_heading_pane_cp1_ParamLimits

0xa9c8,	// (0x00014272) bg_popup_heading_pane_cp1

0xa95a,	// (0x00014204) list_ai_message_pane_ParamLimits

0xa95a,	// (0x00014204) list_ai_message_pane

0x831f,	// (0x00011bc9) scroll_pane_cp10

0xa8f6,	// (0x000141a0) list_ai_message_pane_g1

0xa8fe,	// (0x000141a8) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x000191ce) list_ai_message_pane_g

0xa906,	// (0x000141b0) list_ai_message_pane_t1_ParamLimits

0xa906,	// (0x000141b0) list_ai_message_pane_t1

0xa91b,	// (0x000141c5) list_ai_message_pane_t2_ParamLimits

0xa91b,	// (0x000141c5) list_ai_message_pane_t2

0xa930,	// (0x000141da) list_ai_message_pane_t3_ParamLimits

0xa930,	// (0x000141da) list_ai_message_pane_t3

0xa945,	// (0x000141ef) list_ai_message_pane_t4_ParamLimits

0xa945,	// (0x000141ef) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x000191d3) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x000191d3) list_ai_message_pane_t

0x2e83,	// (0x0000c72d) cell_ai_soft_ind_pane_ParamLimits

0x2e83,	// (0x0000c72d) cell_ai_soft_ind_pane

0x8f55,	// (0x000127ff) cell_ai_soft_ind_pane_g1_ParamLimits

0x8f55,	// (0x000127ff) cell_ai_soft_ind_pane_g1

0x7279,	// (0x00010b23) grid_highlight_cp1

0x8f62,	// (0x0001280c) text_secondary_cp56_ParamLimits

0x8f62,	// (0x0001280c) text_secondary_cp56

0xa8b9,	// (0x00014163) example_general_pane_ParamLimits

0xa8b9,	// (0x00014163) example_general_pane

0xa8c5,	// (0x0001416f) example_parent_pane_g1_ParamLimits

0xa8c5,	// (0x0001416f) example_parent_pane_g1

0xa8d1,	// (0x0001417b) example_parent_pane_t1_ParamLimits

0xa8d1,	// (0x0001417b) example_parent_pane_t1

0xd028,	// (0x000168d2) popup_preview_text_window_ParamLimits

0xd028,	// (0x000168d2) popup_preview_text_window

0x8d8b,	// (0x00012635) list_single_pane_cp2_g4

0x769a,	// (0x00010f44) bg_popup_preview_window_pane_ParamLimits

0x769a,	// (0x00010f44) bg_popup_preview_window_pane

0xa61b,	// (0x00013ec5) popup_preview_text_window_t1_ParamLimits

0xa61b,	// (0x00013ec5) popup_preview_text_window_t1

0xa639,	// (0x00013ee3) popup_preview_text_window_t2_ParamLimits

0xa639,	// (0x00013ee3) popup_preview_text_window_t2

0xa682,	// (0x00013f2c) popup_preview_text_window_t3_ParamLimits

0xa682,	// (0x00013f2c) popup_preview_text_window_t3

0xa6c7,	// (0x00013f71) popup_preview_text_window_t4_ParamLimits

0xa6c7,	// (0x00013f71) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x000191a2) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x000191a2) popup_preview_text_window_t

0xa745,	// (0x00013fef) scroll_pane_cp11

0x96b8,	// (0x00012f62) bg_popup_preview_window_pane_g1

0xa5db,	// (0x00013e85) bg_popup_preview_window_pane_g2

0xa5e3,	// (0x00013e8d) bg_popup_preview_window_pane_g3

0xa5eb,	// (0x00013e95) bg_popup_preview_window_pane_g4

0xa5f3,	// (0x00013e9d) bg_popup_preview_window_pane_g5

0xa5fb,	// (0x00013ea5) bg_popup_preview_window_pane_g6

0xa603,	// (0x00013ead) bg_popup_preview_window_pane_g7

0xa60b,	// (0x00013eb5) bg_popup_preview_window_pane_g8

0x4f3b,	// (0x0000e7e5) aid_popup_width_pane

0xcfaa,	// (0x00016854) popup_midp_note_alarm_window_ParamLimits

0xcfaa,	// (0x00016854) popup_midp_note_alarm_window

0x801e,	// (0x000118c8) data_form_pane_ParamLimits

0x1cb2,	// (0x0000b55c) form_field_data_pane_g1

0x1cbc,	// (0x0000b566) form_field_data_pane_t1_ParamLimits

0x804a,	// (0x000118f4) input_focus_pane_ParamLimits

0x8058,	// (0x00011902) data_form_wide_pane_ParamLimits

0x8069,	// (0x00011913) form_field_data_wide_pane_g1

0x8095,	// (0x0001193f) form_field_data_wide_pane_t1_ParamLimits

0x792c,	// (0x000111d6) input_focus_pane_cp6_ParamLimits

0x1da0,	// (0x0000b64a) input_popup_find_pane_g1_ParamLimits

0x1da0,	// (0x0000b64a) input_popup_find_pane_g1

0x5459,	// (0x0000ed03) aid_navi_side_left_pane

0x546a,	// (0x0000ed14) aid_navi_side_right_pane

0xa00c,	// (0x000138b6) bg_popup_window_pane_cp30_ParamLimits

0xa00c,	// (0x000138b6) bg_popup_window_pane_cp30

0xa086,	// (0x00013930) popup_midp_note_alarm_window_g1_ParamLimits

0xa086,	// (0x00013930) popup_midp_note_alarm_window_g1

0xa0b6,	// (0x00013960) popup_midp_note_alarm_window_t1_ParamLimits

0xa0b6,	// (0x00013960) popup_midp_note_alarm_window_t1

0xa157,	// (0x00013a01) popup_midp_note_alarm_window_t2_ParamLimits

0xa157,	// (0x00013a01) popup_midp_note_alarm_window_t2

0xa205,	// (0x00013aaf) popup_midp_note_alarm_window_t3_ParamLimits

0xa205,	// (0x00013aaf) popup_midp_note_alarm_window_t3

0xa22d,	// (0x00013ad7) popup_midp_note_alarm_window_t4_ParamLimits

0xa22d,	// (0x00013ad7) popup_midp_note_alarm_window_t4

0xa24d,	// (0x00013af7) popup_midp_note_alarm_window_t5_ParamLimits

0xa24d,	// (0x00013af7) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0001913f) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0001913f) popup_midp_note_alarm_window_t

0xa2f9,	// (0x00013ba3) wait_bar_pane_cp1_ParamLimits

0xa2f9,	// (0x00013ba3) wait_bar_pane_cp1

0x7279,	// (0x00010b23) wait_anim_pane_copy1

0x7279,	// (0x00010b23) wait_border_pane_copy1

0x9d18,	// (0x000135c2) wait_border_pane_g1_copy1

0x80af,	// (0x00011959) form_field_popup_pane_g1

0x1cd4,	// (0x0000b57e) form_field_popup_pane_t1_ParamLimits

0x804a,	// (0x000118f4) input_focus_pane_cp7_ParamLimits

0x80cf,	// (0x00011979) list_form_pane_ParamLimits

0x80db,	// (0x00011985) form_field_popup_wide_pane_g1

0x80e3,	// (0x0001198d) form_field_popup_wide_pane_t1_ParamLimits

0x804a,	// (0x000118f4) input_focus_pane_cp8_ParamLimits

0x80f8,	// (0x000119a2) list_form_wide_pane_ParamLimits

0xae08,	// (0x000146b2) aid_size_cell_graphic_pane

0x1d4f,	// (0x0000b5f9) data_form_pane_t1_ParamLimits

0x308b,	// (0x0000c935) data_form_wide_pane_t1_ParamLimits

0x292b,	// (0x0000c1d5) bg_status_flat_pane

0x1591,	// (0x0000ae3b) title_pane_t1_ParamLimits

0x7321,	// (0x00010bcb) title_pane_t2_ParamLimits

0x7347,	// (0x00010bf1) title_pane_t3_ParamLimits

0xf557,	// (0x00018e01) title_pane_t_ParamLimits

0x8792,	// (0x0001203c) level_1_signal_ParamLimits

0x879f,	// (0x00012049) level_2_signal_ParamLimits

0x87ac,	// (0x00012056) level_3_signal_ParamLimits

0x87b9,	// (0x00012063) level_4_signal_ParamLimits

0x87c6,	// (0x00012070) level_5_signal_ParamLimits

0x87d3,	// (0x0001207d) level_6_signal_ParamLimits

0x87e0,	// (0x0001208a) level_7_signal_ParamLimits

0x8792,	// (0x0001203c) level_1_battery_ParamLimits

0x879f,	// (0x00012049) level_2_battery_ParamLimits

0x87ac,	// (0x00012056) level_3_battery_ParamLimits

0x87b9,	// (0x00012063) level_4_battery_ParamLimits

0x87c6,	// (0x00012070) level_5_battery_ParamLimits

0x87d3,	// (0x0001207d) level_6_battery_ParamLimits

0x87e0,	// (0x0001208a) level_7_battery_ParamLimits

0x9f23,	// (0x000137cd) bg_status_flat_pane_g1

0x9f2b,	// (0x000137d5) bg_status_flat_pane_g2

0x9f33,	// (0x000137dd) bg_status_flat_pane_g3

0x9f3b,	// (0x000137e5) bg_status_flat_pane_g4

0x9f43,	// (0x000137ed) bg_status_flat_pane_g5

0x9f4b,	// (0x000137f5) bg_status_flat_pane_g6

0x9f53,	// (0x000137fd) bg_status_flat_pane_g7

0x161d,	// (0x0000aec7) tabs_3_active_pane_t1_ParamLimits

0x161d,	// (0x0000aec7) tabs_3_passive_pane_t1_ParamLimits

0x162f,	// (0x0000aed9) tabs_4_active_pane_t1_ParamLimits

0x162f,	// (0x0000aed9) tabs_4_1_passive_pane_t1_ParamLimits

0x1dac,	// (0x0000b656) tabs_2_active_pane_t1_ParamLimits

0x1dac,	// (0x0000b656) tabs_2_passive_pane_t1_ParamLimits

0x7359,	// (0x00010c03) bg_active_tab_pane_cp4_ParamLimits

0x1dbe,	// (0x0000b668) tabs_2_long_active_pane_t1_ParamLimits

0x919c,	// (0x00012a46) bg_passive_tab_pane_cp4_ParamLimits

0x5efe,	// (0x0000f7a8) list_single_midp_graphic_pane_t1_ParamLimits

0x7359,	// (0x00010c03) bg_active_tab_pane_cp5_ParamLimits

0x1dd1,	// (0x0000b67b) tabs_3_long_active_pane_t1_ParamLimits

0x919c,	// (0x00012a46) bg_passive_tab_pane_cp5_ParamLimits

0x5efe,	// (0x0000f7a8) list_single_midp_graphic_pane_t1

0x292b,	// (0x0000c1d5) bg_status_flat_pane_ParamLimits

0x9330,	// (0x00012bda) indicator_pane_cp2_ParamLimits

0x9330,	// (0x00012bda) indicator_pane_cp2

0x2aa1,	// (0x0000c34b) navi_pane_srt_ParamLimits

0x2aa1,	// (0x0000c34b) navi_pane_srt

0x9479,	// (0x00012d23) popup_clock_digital_analogue_window_cp1

0x744a,	// (0x00010cf4) indicator_pane_t1

0x8e5a,	// (0x00012704) copy_highlight_pane

0x8e5a,	// (0x00012704) cursor_graphics_pane

0x8e5a,	// (0x00012704) graphic_within_text_pane

0x8e5a,	// (0x00012704) link_highlight_pane

0xa708,	// (0x00013fb2) popup_preview_text_window_t5_ParamLimits

0xa708,	// (0x00013fb2) popup_preview_text_window_t5

0x8f7c,	// (0x00012826) cursor_digital_pane

0x8f7c,	// (0x00012826) cursor_primary_pane

0x8f8d,	// (0x00012837) cursor_primary_small_pane

0x8f95,	// (0x0001283f) cursor_secondary_pane

0x8f9d,	// (0x00012847) cursor_title_pane

0x8f7c,	// (0x00012826) link_highlight_digital_pane

0x8f84,	// (0x0001282e) link_highlight_primary_pane

0x8f8d,	// (0x00012837) link_highlight_primary_small_pane

0x8f95,	// (0x0001283f) link_highlight_secondary_pane

0x8f9d,	// (0x00012847) link_highlight_title_pane

0x8f7c,	// (0x00012826) copy_highlight_digital_pane

0x8f7c,	// (0x00012826) copy_highlight_primary_pane

0x8f8d,	// (0x00012837) copy_highlight_primary_small_pane

0x8f95,	// (0x0001283f) copy_highlight_secondary_pane

0x8f9d,	// (0x00012847) copy_highlight_title_pane

0x8f95,	// (0x0001283f) graphic_text_digital_pane

0x9fbb,	// (0x00013865) graphic_text_primary_pane

0x9fc4,	// (0x0001386e) graphic_text_primary_small_pane

0x8f8d,	// (0x00012837) graphic_text_secondary_pane

0x8f7c,	// (0x00012826) graphic_text_title_pane

0x2059,	// (0x0000b903) cursor_primary_pane_g1

0x9fad,	// (0x00013857) cursor_text_primary_t1

0x2d89,	// (0x0000c633) cursor_primary_small_pane_g1

0x9f9f,	// (0x00013849) cursor_text_primary_small_t1

0x2d7f,	// (0x0000c629) cursor_primary_small_pane_g1_copy1

0x9f89,	// (0x00013833) cursor_text_primary_small_t1_copy1

0x9f6b,	// (0x00013815) cursor_text_title_t1

0x2d75,	// (0x0000c61f) cursor_title_pane_g1

0x2059,	// (0x0000b903) cursor_digital_pane_g1

0x8fad,	// (0x00012857) cursor_text_digital_t1

0x8fbb,	// (0x00012865) link_highlight_primary_pane_g1

0x9f14,	// (0x000137be) link_highlight_primary_pane_t1

0x8fbb,	// (0x00012865) link_highlight_primary_small_pane_g1

0x8fc3,	// (0x0001286d) link_highlight_primary_small_pane_t1

0x8fd2,	// (0x0001287c) link_highlight_secondary_pane_g1

0x8fda,	// (0x00012884) link_highlight_secondary_pane_t1

0x9e79,	// (0x00013723) link_highlight_title_pane_g1

0x9e90,	// (0x0001373a) link_highlight_title_pane_t1

0x9e79,	// (0x00013723) link_highlight_digital_pane_g1

0x9e81,	// (0x0001372b) link_highlight_digital_pane_t1

0x9d33,	// (0x000135dd) copy_highlight_primary_pane_g1

0x9d59,	// (0x00013603) copy_highlight_primary_pane_t1

0x9d33,	// (0x000135dd) copy_highlight_primary_small_pane_g1

0x9d4a,	// (0x000135f4) copy_highlight_primary_small_pane_t1

0x8fe9,	// (0x00012893) copy_highlight_secondary_pane_g1

0x8ff1,	// (0x0001289b) copy_highlight_secondary_pane_t1

0x9d33,	// (0x000135dd) copy_highlight_title_pane_g1

0x9d3b,	// (0x000135e5) copy_highlight_title_pane_t1

0x9d33,	// (0x000135dd) copy_highlight_digital_pane_g1

0xafce,	// (0x00014878) copy_highlight_digital_pane_t1

0xaf22,	// (0x000147cc) graphic_text_primary_pane_g1

0xafb2,	// (0x0001485c) graphic_text_primary_pane_t1

0xafc0,	// (0x0001486a) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0001926e) graphic_text_primary_pane_t

0xaf8e,	// (0x00014838) graphic_text_primary_small_pane_g1

0xaf96,	// (0x00014840) graphic_text_primary_small_pane_t1

0xafa4,	// (0x0001484e) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x00019269) graphic_text_primary_small_pane_t

0xaf6a,	// (0x00014814) graphic_text_secondary_pane_g1

0xaf72,	// (0x0001481c) graphic_text_secondary_pane_t1

0xaf80,	// (0x0001482a) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x00019264) graphic_text_secondary_pane_t

0xaf46,	// (0x000147f0) graphic_text_title_pane_g1

0xaf4e,	// (0x000147f8) graphic_text_title_pane_t1

0xaf5c,	// (0x00014806) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0001925f) graphic_text_title_pane_t

0xaf22,	// (0x000147cc) graphic_text_digital_pane_g1

0xaf2a,	// (0x000147d4) graphic_text_digital_pane_t1

0xaf38,	// (0x000147e2) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0001925a) graphic_text_digital_pane_t

0x7359,	// (0x00010c03) navi_icon_pane_srt_ParamLimits

0x7359,	// (0x00010c03) navi_icon_pane_srt

0x7279,	// (0x00010b23) navi_midp_pane_srt

0x7279,	// (0x00010b23) navi_navi_pane_srt

0x7359,	// (0x00010c03) navi_text_pane_srt_ParamLimits

0x7359,	// (0x00010c03) navi_text_pane_srt

0xaeed,	// (0x00014797) navi_navi_icon_text_pane_srt

0xaef5,	// (0x0001479f) navi_navi_pane_srt_g1_ParamLimits

0xaef5,	// (0x0001479f) navi_navi_pane_srt_g1

0xaf07,	// (0x000147b1) navi_navi_pane_srt_g2_ParamLimits

0xaf07,	// (0x000147b1) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x00019255) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x00019255) navi_navi_pane_srt_g

0xaf19,	// (0x000147c3) navi_navi_tabs_pane_srt

0xaeed,	// (0x00014797) navi_navi_text_pane_srt

0xaeed,	// (0x00014797) navi_navi_volume_pane_srt

0xaede,	// (0x00014788) navi_navi_text_pane_srt_t1

0x6260,	// (0x0000fb0a) navi_navi_volume_pane_srt_g1

0x6268,	// (0x0000fb12) volume_small_pane_srt_ParamLimits

0x6268,	// (0x0000fb12) volume_small_pane_srt

0x5714,	// (0x0000efbe) volume_small_pane_srt_g1_ParamLimits

0x5714,	// (0x0000efbe) volume_small_pane_srt_g1

0x5724,	// (0x0000efce) volume_small_pane_srt_g2_ParamLimits

0x5724,	// (0x0000efce) volume_small_pane_srt_g2

0x5735,	// (0x0000efdf) volume_small_pane_srt_g3_ParamLimits

0x5735,	// (0x0000efdf) volume_small_pane_srt_g3

0x5746,	// (0x0000eff0) volume_small_pane_srt_g4_ParamLimits

0x5746,	// (0x0000eff0) volume_small_pane_srt_g4

0x5757,	// (0x0000f001) volume_small_pane_srt_g5_ParamLimits

0x5757,	// (0x0000f001) volume_small_pane_srt_g5

0x5768,	// (0x0000f012) volume_small_pane_srt_g6_ParamLimits

0x5768,	// (0x0000f012) volume_small_pane_srt_g6

0x5779,	// (0x0000f023) volume_small_pane_srt_g7_ParamLimits

0x5779,	// (0x0000f023) volume_small_pane_srt_g7

0x578a,	// (0x0000f034) volume_small_pane_srt_g8_ParamLimits

0x578a,	// (0x0000f034) volume_small_pane_srt_g8

0x579b,	// (0x0000f045) volume_small_pane_srt_g9_ParamLimits

0x579b,	// (0x0000f045) volume_small_pane_srt_g9

0x57ac,	// (0x0000f056) volume_small_pane_srt_g10_ParamLimits

0x57ac,	// (0x0000f056) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00019002) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00019002) volume_small_pane_srt_g

0x7743,	// (0x00010fed) query_popup_data_pane_cp2

0xaec4,	// (0x0001476e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaec4,	// (0x0001476e) navi_navi_icon_text_pane_srt_t1

0x9fbb,	// (0x00013865) navi_tabs_2_long_pane_srt

0x9fbb,	// (0x00013865) navi_tabs_2_pane_srt

0x9fbb,	// (0x00013865) navi_tabs_3_long_pane_srt

0x9fbb,	// (0x00013865) navi_tabs_3_pane_srt

0x9fbb,	// (0x00013865) navi_tabs_4_pane_srt

0x6240,	// (0x0000faea) tabs_2_active_pane_srt_ParamLimits

0x6240,	// (0x0000faea) tabs_2_active_pane_srt

0x6250,	// (0x0000fafa) tabs_2_passive_pane_srt_ParamLimits

0x6250,	// (0x0000fafa) tabs_2_passive_pane_srt

0x97ce,	// (0x00013078) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97ce,	// (0x00013078) bg_passive_tab_pane_cp1_srt

0xae90,	// (0x0001473a) bg_passive_tab_pane_g1_cp1_srt

0x8ac7,	// (0x00012371) bg_passive_tab_pane_g2_cp1_srt

0xae99,	// (0x00014743) bg_passive_tab_pane_g3_cp1_srt

0x75e4,	// (0x00010e8e) bg_active_tab_pane_cp1_srt_ParamLimits

0x75e4,	// (0x00010e8e) bg_active_tab_pane_cp1_srt

0xaea2,	// (0x0001474c) tabs_2_active_pane_srt_g1

0x31a6,	// (0x0000ca50) tabs_2_active_pane_srt_t1_ParamLimits

0x31a6,	// (0x0000ca50) tabs_2_active_pane_srt_t1

0xae90,	// (0x0001473a) bg_active_tab_pane_g1_cp1_srt

0x8ac7,	// (0x00012371) bg_active_tab_pane_g2_cp1_srt

0xae99,	// (0x00014743) bg_active_tab_pane_g3_cp1_srt

0x620d,	// (0x0000fab7) tabs_3_active_pane_srt_ParamLimits

0x620d,	// (0x0000fab7) tabs_3_active_pane_srt

0x621e,	// (0x0000fac8) tabs_3_passive_pane_cp_srt_ParamLimits

0x621e,	// (0x0000fac8) tabs_3_passive_pane_cp_srt

0x622f,	// (0x0000fad9) tabs_3_passive_pane_srt_ParamLimits

0x622f,	// (0x0000fad9) tabs_3_passive_pane_srt

0x97ce,	// (0x00013078) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97ce,	// (0x00013078) bg_passive_tab_pane_cp2_srt

0x9000,	// (0x000128aa) bg_passive_tab_pane_g1_cp2_srt

0x8ac7,	// (0x00012371) bg_passive_tab_pane_g2_cp2_srt

0x9009,	// (0x000128b3) bg_passive_tab_pane_g3_cp2_srt

0x75e4,	// (0x00010e8e) bg_active_tab_pane_cp2_srt_ParamLimits

0x75e4,	// (0x00010e8e) bg_active_tab_pane_cp2_srt

0xae76,	// (0x00014720) tabs_3_active_pane_srt_g1

0x3190,	// (0x0000ca3a) tabs_3_active_pane_srt_t1_ParamLimits

0x3190,	// (0x0000ca3a) tabs_3_active_pane_srt_t1

0x9000,	// (0x000128aa) bg_active_tab_pane_g1_cp2_srt

0x8ac7,	// (0x00012371) bg_active_tab_pane_g2_cp2_srt

0x9009,	// (0x000128b3) bg_active_tab_pane_g3_cp2_srt

0x61c5,	// (0x0000fa6f) tabs_4_active_pane_srt_ParamLimits

0x61c5,	// (0x0000fa6f) tabs_4_active_pane_srt

0x61d7,	// (0x0000fa81) tabs_4_passive_pane_cp2_srt_ParamLimits

0x61d7,	// (0x0000fa81) tabs_4_passive_pane_cp2_srt

0x5918,	// (0x0000f1c2) aid_size_cell_toolbar

0xaaa6,	// (0x00014350) main_idle_act_pane_ParamLimits

0x5aab,	// (0x0000f355) popup_large_graphic_colour_window_ParamLimits

0xd274,	// (0x00016b1e) popup_toolbar_window_ParamLimits

0xd274,	// (0x00016b1e) popup_toolbar_window

0xac7c,	// (0x00014526) list_single_graphic_2heading_pane_ParamLimits

0xac7c,	// (0x00014526) list_single_graphic_2heading_pane

0x854e,	// (0x00011df8) aid_size_cell_apps_grid_lsc_pane

0x8560,	// (0x00011e0a) aid_size_cell_apps_grid_prt_pane

0x919c,	// (0x00012a46) bg_wml_button_pane_cp1_ParamLimits

0x919c,	// (0x00012a46) bg_wml_button_pane_cp1

0x2d26,	// (0x0000c5d0) form_midp_field_text_pane_t1_ParamLimits

0x97ce,	// (0x00013078) input_focus_pane_cp050_ParamLimits

0x99ec,	// (0x00013296) list_midp_form_text_pane_ParamLimits

0x99a9,	// (0x00013253) input_focus_pane_cp051_ParamLimits

0x99bd,	// (0x00013267) list_midp_choice_pane_ParamLimits

0x2cca,	// (0x0000c574) list_single_2graphic_pane_cp3_ParamLimits

0x2cca,	// (0x0000c574) list_single_2graphic_pane_cp3

0x2cdb,	// (0x0000c585) list_single_midp_graphic_pane_ParamLimits

0x2cdb,	// (0x0000c585) list_single_midp_graphic_pane

0x5e0d,	// (0x0000f6b7) list_single_graphic_2heading_pane_g1_ParamLimits

0x5e0d,	// (0x0000f6b7) list_single_graphic_2heading_pane_g1

0x5e19,	// (0x0000f6c3) list_single_graphic_2heading_pane_g4_ParamLimits

0x5e19,	// (0x0000f6c3) list_single_graphic_2heading_pane_g4

0x5e25,	// (0x0000f6cf) list_single_graphic_2heading_pane_g5_ParamLimits

0x5e25,	// (0x0000f6cf) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00019055) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00019055) list_single_graphic_2heading_pane_g

0x5e31,	// (0x0000f6db) list_single_graphic_2heading_pane_t1_ParamLimits

0x5e31,	// (0x0000f6db) list_single_graphic_2heading_pane_t1

0x5e45,	// (0x0000f6ef) list_single_graphic_2heading_pane_t2_ParamLimits

0x5e45,	// (0x0000f6ef) list_single_graphic_2heading_pane_t2

0x5e5f,	// (0x0000f709) list_single_graphic_2heading_pane_t3_ParamLimits

0x5e5f,	// (0x0000f709) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001905c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001905c) list_single_graphic_2heading_pane_t

0x95ca,	// (0x00012e74) bg_popup_sub_pane_cp2

0x95f4,	// (0x00012e9e) grid_toobar_pane

0x5e77,	// (0x0000f721) cell_toolbar_pane_ParamLimits

0x5e77,	// (0x0000f721) cell_toolbar_pane

0x965c,	// (0x00012f06) cell_toolbar_pane_g1_ParamLimits

0x965c,	// (0x00012f06) cell_toolbar_pane_g1

0x9670,	// (0x00012f1a) cell_toolbar_pane_g2_ParamLimits

0x9670,	// (0x00012f1a) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001906a) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001906a) cell_toolbar_pane_g

0x9692,	// (0x00012f3c) grid_highlight_pane_cp2_ParamLimits

0x9692,	// (0x00012f3c) grid_highlight_pane_cp2

0x96ac,	// (0x00012f56) toolbar_button_pane

0x96b8,	// (0x00012f62) toolbar_button_pane_g1

0x96c0,	// (0x00012f6a) toolbar_button_pane_g2

0x96c8,	// (0x00012f72) toolbar_button_pane_g3

0x96d0,	// (0x00012f7a) toolbar_button_pane_g4

0x96d8,	// (0x00012f82) toolbar_button_pane_g5

0x96e0,	// (0x00012f8a) toolbar_button_pane_g6

0x96e8,	// (0x00012f92) toolbar_button_pane_g7

0x96f0,	// (0x00012f9a) toolbar_button_pane_g8

0x96f8,	// (0x00012fa2) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001906f) toolbar_button_pane_g

0x5ea9,	// (0x0000f753) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5ea9,	// (0x0000f753) list_single_2graphic_pane_g1_cp3

0xd2c0,	// (0x00016b6a) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd2c0,	// (0x00016b6a) list_single_2graphic_pane_g2_cp3

0x5ec4,	// (0x0000f76e) list_single_2graphic_pane_g3_cp3

0x5ecc,	// (0x0000f776) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5ecc,	// (0x0000f776) list_single_2graphic_pane_g4_cp3

0x5ed8,	// (0x0000f782) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5ed8,	// (0x0000f782) list_single_2graphic_pane_t1_cp3

0x5ef2,	// (0x0000f79c) list_single_midp_graphic_pane_g2_ParamLimits

0x5ef2,	// (0x0000f79c) list_single_midp_graphic_pane_g2

0x5920,	// (0x0000f1ca) aid_zoom_text_primary

0x5928,	// (0x0000f1d2) aid_zoom_text_secondary

0x20af,	// (0x0000b959) status_small_pane_g7_ParamLimits

0x20af,	// (0x0000b959) status_small_pane_g7

0x20d2,	// (0x0000b97c) status_small_pane_t1_ParamLimits

0x156d,	// (0x0000ae17) title_pane_g2

0x0003,

0xf54e,	// (0x00018df8) title_pane_g

0x1830,	// (0x0000b0da) aid_size_cell_colour_1_pane_ParamLimits

0x1830,	// (0x0000b0da) aid_size_cell_colour_1_pane

0x1844,	// (0x0000b0ee) aid_size_cell_colour_2_pane_ParamLimits

0x1844,	// (0x0000b0ee) aid_size_cell_colour_2_pane

0x1858,	// (0x0000b102) aid_size_cell_colour_3_pane_ParamLimits

0x1858,	// (0x0000b102) aid_size_cell_colour_3_pane

0x186c,	// (0x0000b116) aid_size_cell_colour_4_pane_ParamLimits

0x186c,	// (0x0000b116) aid_size_cell_colour_4_pane

0x5395,	// (0x0000ec3f) title_pane_stacon_g1_ParamLimits

0x5395,	// (0x0000ec3f) title_pane_stacon_g1

0x9db0,	// (0x0001365a) popup_note_wait_window_g3_ParamLimits

0x9db0,	// (0x0001365a) popup_note_wait_window_g3

0x9e26,	// (0x000136d0) popup_note_wait_window_t5_ParamLimits

0x9e26,	// (0x000136d0) popup_note_wait_window_t5

0x7279,	// (0x00010b23) main_feb_china_hwr_fs_writing_pane

0xcd7a,	// (0x00016624) popup_feb_china_hwr_fs_window_ParamLimits

0xcd7a,	// (0x00016624) popup_feb_china_hwr_fs_window

0xd2d1,	// (0x00016b7b) aid_size_cell_hwr_fs_ParamLimits

0xd2d1,	// (0x00016b7b) aid_size_cell_hwr_fs

0x97ce,	// (0x00013078) bg_popup_sub_pane_cp3_ParamLimits

0x97ce,	// (0x00013078) bg_popup_sub_pane_cp3

0xd2e6,	// (0x00016b90) grid_hwr_fs_pane_ParamLimits

0xd2e6,	// (0x00016b90) grid_hwr_fs_pane

0x5f3d,	// (0x0000f7e7) linegrid_hwr_fs_pane_ParamLimits

0x5f3d,	// (0x0000f7e7) linegrid_hwr_fs_pane

0xd2fe,	// (0x00016ba8) cell_hwr_fs_pane_ParamLimits

0xd2fe,	// (0x00016ba8) cell_hwr_fs_pane

0x97da,	// (0x00013084) linegrid_hwr_fs_pane_g1_ParamLimits

0x97da,	// (0x00013084) linegrid_hwr_fs_pane_g1

0x2c90,	// (0x0000c53a) linegrid_hwr_fs_pane_g2_ParamLimits

0x2c90,	// (0x0000c53a) linegrid_hwr_fs_pane_g2

0x97f8,	// (0x000130a2) linegrid_hwr_fs_pane_g3_ParamLimits

0x97f8,	// (0x000130a2) linegrid_hwr_fs_pane_g3

0x5f6b,	// (0x0000f815) linegrid_hwr_fs_pane_g4_ParamLimits

0x5f6b,	// (0x0000f815) linegrid_hwr_fs_pane_g4

0x5f85,	// (0x0000f82f) linegrid_hwr_fs_pane_g5_ParamLimits

0x5f85,	// (0x0000f82f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x00019095) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x00019095) linegrid_hwr_fs_pane_g

0x9804,	// (0x000130ae) cell_hwr_fs_pane_g1_ParamLimits

0x9804,	// (0x000130ae) cell_hwr_fs_pane_g1

0x950b,	// (0x00012db5) cell_hwr_fs_pane_g2_ParamLimits

0x950b,	// (0x00012db5) cell_hwr_fs_pane_g2

0x2ca2,	// (0x0000c54c) cell_hwr_fs_pane_g3_ParamLimits

0x2ca2,	// (0x0000c54c) cell_hwr_fs_pane_g3

0x2caf,	// (0x0000c559) cell_hwr_fs_pane_g4_ParamLimits

0x2caf,	// (0x0000c559) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x000190a0) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x000190a0) cell_hwr_fs_pane_g

0xd31e,	// (0x00016bc8) cell_hwr_fs_pane_t1

0x7279,	// (0x00010b23) grid_highlight_pane_cp6

0x7279,	// (0x00010b23) main_idle_act2_pane

0x8306,	// (0x00011bb0) aid_inside_area_popup_secondary

0x2d93,	// (0x0000c63d) aid_inside_area_window_primary_ParamLimits

0x2d93,	// (0x0000c63d) aid_inside_area_window_primary

0xafdd,	// (0x00014887) ai2_news_ticker_pane

0xafe5,	// (0x0001488f) aid_size_cell_ai1_link_ParamLimits

0xafe5,	// (0x0001488f) aid_size_cell_ai1_link

0x31bc,	// (0x0000ca66) popup_ai2_data_window_ParamLimits

0x31bc,	// (0x0000ca66) popup_ai2_data_window

0xb013,	// (0x000148bd) popup_ai2_link_window_ParamLimits

0xb013,	// (0x000148bd) popup_ai2_link_window

0x97ce,	// (0x00013078) bg_popup_sub_pane_cp4_ParamLimits

0x97ce,	// (0x00013078) bg_popup_sub_pane_cp4

0xb027,	// (0x000148d1) grid_ai2_link_pane_ParamLimits

0xb027,	// (0x000148d1) grid_ai2_link_pane

0xb03e,	// (0x000148e8) popup_ai2_link_window_g1_ParamLimits

0xb03e,	// (0x000148e8) popup_ai2_link_window_g1

0xb04a,	// (0x000148f4) popup_ai2_link_window_g2_ParamLimits

0xb04a,	// (0x000148f4) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x00019273) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x00019273) popup_ai2_link_window_g

0xb059,	// (0x00014903) ai2_mp_button_pane

0xb061,	// (0x0001490b) ai2_mp_volume_pane

0x99a9,	// (0x00013253) bg_popup_sub_pane_cp5_ParamLimits

0x99a9,	// (0x00013253) bg_popup_sub_pane_cp5

0xb069,	// (0x00014913) heading_ai2_gene_pane_ParamLimits

0xb069,	// (0x00014913) heading_ai2_gene_pane

0xb075,	// (0x0001491f) list_ai2_gene_pane_ParamLimits

0xb075,	// (0x0001491f) list_ai2_gene_pane

0xb0bd,	// (0x00014967) cell_ai2_link_pane_ParamLimits

0xb0bd,	// (0x00014967) cell_ai2_link_pane

0xb0d3,	// (0x0001497d) cell_ai2_link_pane_g1

0x7279,	// (0x00010b23) grid_highlight_pane_cp7

0x627d,	// (0x0000fb27) ai2_mp_volume_pane_g1

0xb1a2,	// (0x00014a4c) ai2_mp_volume_pane_g2

0x31dd,	// (0x0000ca87) list_ai2_gene_pane_t1

0xb1aa,	// (0x00014a54) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0001928c) ai2_mp_volume_pane_g

0x6285,	// (0x0000fb2f) volume_small_pane_cp3

0xb1b2,	// (0x00014a5c) aid_size_cell_ai2_button

0xb1ba,	// (0x00014a64) grid_ai2_button_pane

0xb1c3,	// (0x00014a6d) cell_ai2_button_pane_ParamLimits

0xb1c3,	// (0x00014a6d) cell_ai2_button_pane

0x726f,	// (0x00010b19) cell_ai2_button_pane_g1

0x7279,	// (0x00010b23) grid_highlight_pane_cp8

0xb162,	// (0x00014a0c) ai2_gene_pane_t1_ParamLimits

0xb162,	// (0x00014a0c) ai2_gene_pane_t1

0xcd00,	// (0x000165aa) aid_height_parent_landscape

0x2f4b,	// (0x0000c7f5) aid_height_set_list

0xaaa6,	// (0x00014350) aid_size_parent

0xae08,	// (0x000146b2) aid_size_cell_graphic_pane_ParamLimits

0xb085,	// (0x0001492f) popup_ai2_data_window_g1_ParamLimits

0xb085,	// (0x0001492f) popup_ai2_data_window_g1

0xb091,	// (0x0001493b) ai2_news_ticker_pane_g1

0xb099,	// (0x00014943) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x00019278) ai2_news_ticker_pane_g

0xb0a1,	// (0x0001494b) ai2_news_ticker_pane_t1

0xb0af,	// (0x00014959) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0001927d) ai2_news_ticker_pane_t

0xb0dc,	// (0x00014986) heading_ai2_gene_pane_g1

0xb0e4,	// (0x0001498e) heading_ai2_gene_pane_t1_ParamLimits

0xb0e4,	// (0x0001498e) heading_ai2_gene_pane_t1

0xb0f9,	// (0x000149a3) list_highlight_pane_cp6

0x31c8,	// (0x0000ca72) ai2_gene_pane_ParamLimits

0x31c8,	// (0x0000ca72) ai2_gene_pane

0x31eb,	// (0x0000ca95) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x00019282) list_ai2_gene_pane_t

0xb133,	// (0x000149dd) list_highlight_pane_cp8_ParamLimits

0xb133,	// (0x000149dd) list_highlight_pane_cp8

0xb144,	// (0x000149ee) ai2_gene_pane_g1_ParamLimits

0xb144,	// (0x000149ee) ai2_gene_pane_g1

0xb156,	// (0x00014a00) ai2_gene_pane_g2_ParamLimits

0xb156,	// (0x00014a00) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x00019287) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x00019287) ai2_gene_pane_g

0x7ab5,	// (0x0001135f) scroll_pane_cp12

0xccbd,	// (0x00016567) control_pane_t3_ParamLimits

0xccbd,	// (0x00016567) control_pane_t3

0x20c3,	// (0x0000b96d) status_small_pane_g8_ParamLimits

0x20c3,	// (0x0000b96d) status_small_pane_g8

0xcdef,	// (0x00016699) popup_find_window_ParamLimits

0xcfe2,	// (0x0001688c) popup_note_image_window_ParamLimits

0x962e,	// (0x00012ed8) list_double2_graphic_pane_vc_g1_ParamLimits

0x962e,	// (0x00012ed8) list_double2_graphic_pane_vc_g1

0x8d93,	// (0x0001263d) list_double2_graphic_pane_vc_g2_ParamLimits

0x8d93,	// (0x0001263d) list_double2_graphic_pane_vc_g2

0x963a,	// (0x00012ee4) list_double2_graphic_pane_vc_g3_ParamLimits

0x963a,	// (0x00012ee4) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x00019063) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x00019063) list_double2_graphic_pane_vc_g

0x9646,	// (0x00012ef0) list_double2_graphic_pane_vc_t1_ParamLimits

0x9646,	// (0x00012ef0) list_double2_graphic_pane_vc_t1

0x8d93,	// (0x0001263d) list_single_heading_pane_vc_g1_ParamLimits

0x8d93,	// (0x0001263d) list_single_heading_pane_vc_g1

0x963a,	// (0x00012ee4) list_single_heading_pane_vc_g2_ParamLimits

0x963a,	// (0x00012ee4) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00018e72) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00018e72) list_single_heading_pane_vc_g

0x9700,	// (0x00012faa) list_single_heading_pane_vc_t1_ParamLimits

0x9700,	// (0x00012faa) list_single_heading_pane_vc_t1

0x9716,	// (0x00012fc0) list_single_heading_pane_vc_t2_ParamLimits

0x9716,	// (0x00012fc0) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x00019084) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x00019084) list_single_heading_pane_vc_t

0x9728,	// (0x00012fd2) list_setting_number_pane_vc_g1_ParamLimits

0x9728,	// (0x00012fd2) list_setting_number_pane_vc_g1

0x9734,	// (0x00012fde) list_setting_number_pane_vc_g2_ParamLimits

0x9734,	// (0x00012fde) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x00019089) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x00019089) list_setting_number_pane_vc_g

0x9740,	// (0x00012fea) list_setting_number_pane_vc_t1_ParamLimits

0x9740,	// (0x00012fea) list_setting_number_pane_vc_t1

0x9754,	// (0x00012ffe) list_setting_number_pane_vc_t2_ParamLimits

0x9754,	// (0x00012ffe) list_setting_number_pane_vc_t2

0x976c,	// (0x00013016) list_setting_number_pane_vc_t3_ParamLimits

0x976c,	// (0x00013016) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0001908e) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0001908e) list_setting_number_pane_vc_t

0x9792,	// (0x0001303c) set_value_pane_vc_ParamLimits

0x9792,	// (0x0001303c) set_value_pane_vc

0xac7c,	// (0x00014526) list_double2_graphic_pane_vc_ParamLimits

0xac7c,	// (0x00014526) list_double2_graphic_pane_vc

0xac7c,	// (0x00014526) list_double2_large_graphic_pane_vc_ParamLimits

0xac7c,	// (0x00014526) list_double2_large_graphic_pane_vc

0xac7c,	// (0x00014526) list_double2_pane_vc_ParamLimits

0xac7c,	// (0x00014526) list_double2_pane_vc

0xac7c,	// (0x00014526) list_double_graphic_heading_pane_vc_ParamLimits

0xac7c,	// (0x00014526) list_double_graphic_heading_pane_vc

0xac7c,	// (0x00014526) list_double_graphic_pane_vc_ParamLimits

0xac7c,	// (0x00014526) list_double_graphic_pane_vc

0xac7c,	// (0x00014526) list_double_heading_pane_vc_ParamLimits

0xac7c,	// (0x00014526) list_double_heading_pane_vc

0xac8d,	// (0x00014537) list_double_large_graphic_pane_vc_ParamLimits

0xac8d,	// (0x00014537) list_double_large_graphic_pane_vc

0xac7c,	// (0x00014526) list_double_number_pane_vc_ParamLimits

0xac7c,	// (0x00014526) list_double_number_pane_vc

0xac7c,	// (0x00014526) list_double_pane_vc_ParamLimits

0xac7c,	// (0x00014526) list_double_pane_vc

0xac7c,	// (0x00014526) list_double_time_pane_vc_ParamLimits

0xac7c,	// (0x00014526) list_double_time_pane_vc

0xac7c,	// (0x00014526) list_setting_number_pane_vc_ParamLimits

0xac7c,	// (0x00014526) list_setting_number_pane_vc

0xac7c,	// (0x00014526) list_setting_pane_vc_ParamLimits

0xac7c,	// (0x00014526) list_setting_pane_vc

0xac7c,	// (0x00014526) list_single_graphic_heading_pane_vc_ParamLimits

0xac7c,	// (0x00014526) list_single_graphic_heading_pane_vc

0xac7c,	// (0x00014526) list_single_heading_pane_vc_ParamLimits

0xac7c,	// (0x00014526) list_single_heading_pane_vc

0xac7c,	// (0x00014526) list_single_number_heading_pane_vc_ParamLimits

0xac7c,	// (0x00014526) list_single_number_heading_pane_vc

0x962e,	// (0x00012ed8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x962e,	// (0x00012ed8) list_double_graphic_heading_pane_vc_g1

0x8d93,	// (0x0001263d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x8d93,	// (0x0001263d) list_double_graphic_heading_pane_vc_g2

0x963a,	// (0x00012ee4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x963a,	// (0x00012ee4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b9,	// (0x00019063) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x00019063) list_double_graphic_heading_pane_vc_g

0xb1f7,	// (0x00014aa1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb1f7,	// (0x00014aa1) list_double_graphic_heading_pane_vc_t1

0xb20d,	// (0x00014ab7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb20d,	// (0x00014ab7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x00019293) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x00019293) list_double_graphic_heading_pane_vc_t

0x9728,	// (0x00012fd2) list_setting_pane_vc_g1_ParamLimits

0x9728,	// (0x00012fd2) list_setting_pane_vc_g1

0x9734,	// (0x00012fde) list_setting_pane_vc_g2_ParamLimits

0x9734,	// (0x00012fde) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x00019089) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x00019089) list_setting_pane_vc_g

0xb40f,	// (0x00014cb9) list_setting_pane_vc_t1_ParamLimits

0xb40f,	// (0x00014cb9) list_setting_pane_vc_t1

0xb427,	// (0x00014cd1) list_setting_pane_vc_t2_ParamLimits

0xb427,	// (0x00014cd1) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x000192d6) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x000192d6) list_setting_pane_vc_t

0x9792,	// (0x0001303c) set_value_pane_cp_vc_ParamLimits

0x9792,	// (0x0001303c) set_value_pane_cp_vc

0x8d93,	// (0x0001263d) list_single_number_heading_pane_vc_g1_ParamLimits

0x8d93,	// (0x0001263d) list_single_number_heading_pane_vc_g1

0x963a,	// (0x00012ee4) list_single_number_heading_pane_vc_g2_ParamLimits

0x963a,	// (0x00012ee4) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00018e72) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00018e72) list_single_number_heading_pane_vc_g

0xb43d,	// (0x00014ce7) list_single_number_heading_pane_vc_t1_ParamLimits

0xb43d,	// (0x00014ce7) list_single_number_heading_pane_vc_t1

0xb453,	// (0x00014cfd) list_single_number_heading_pane_vc_t2_ParamLimits

0xb453,	// (0x00014cfd) list_single_number_heading_pane_vc_t2

0xb465,	// (0x00014d0f) list_single_number_heading_pane_vc_t3_ParamLimits

0xb465,	// (0x00014d0f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x000192db) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x000192db) list_single_number_heading_pane_vc_t

0x962e,	// (0x00012ed8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x962e,	// (0x00012ed8) list_single_graphic_heading_pane_vc_g1

0x8d93,	// (0x0001263d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8d93,	// (0x0001263d) list_single_graphic_heading_pane_vc_g4

0x963a,	// (0x00012ee4) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x963a,	// (0x00012ee4) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x00019063) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x00019063) list_single_graphic_heading_pane_vc_g

0xb477,	// (0x00014d21) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb477,	// (0x00014d21) list_single_graphic_heading_pane_vc_t1

0xb48d,	// (0x00014d37) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb48d,	// (0x00014d37) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x000192e2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x000192e2) list_single_graphic_heading_pane_vc_t

0x8d93,	// (0x0001263d) list_double2_pane_vc_g1_ParamLimits

0x8d93,	// (0x0001263d) list_double2_pane_vc_g1

0x963a,	// (0x00012ee4) list_double2_pane_vc_g2_ParamLimits

0x963a,	// (0x00012ee4) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00018e72) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00018e72) list_double2_pane_vc_g

0xb49f,	// (0x00014d49) list_double2_pane_vc_t1_ParamLimits

0xb49f,	// (0x00014d49) list_double2_pane_vc_t1

0xb4b5,	// (0x00014d5f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb4b5,	// (0x00014d5f) list_double2_large_graphic_pane_vc_g1

0x8d93,	// (0x0001263d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8d93,	// (0x0001263d) list_double2_large_graphic_pane_vc_g2

0x963a,	// (0x00012ee4) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x963a,	// (0x00012ee4) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00018e8f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00018e8f) list_double2_large_graphic_pane_vc_g

0xb4c1,	// (0x00014d6b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb4c1,	// (0x00014d6b) list_double2_large_graphic_pane_vc_t1

0xb4d7,	// (0x00014d81) list_double_time_pane_vc_g1_ParamLimits

0xb4d7,	// (0x00014d81) list_double_time_pane_vc_g1

0xb4e3,	// (0x00014d8d) list_double_time_pane_vc_g2_ParamLimits

0xb4e3,	// (0x00014d8d) list_double_time_pane_vc_g2

0x0001,

0xfa3d,	// (0x000192e7) list_double_time_pane_vc_g_ParamLimits

0xfa3d,	// (0x000192e7) list_double_time_pane_vc_g

0xb4ef,	// (0x00014d99) list_double_time_pane_vc_t1_ParamLimits

0xb4ef,	// (0x00014d99) list_double_time_pane_vc_t1

0xb50d,	// (0x00014db7) list_double_time_pane_vc_t2_ParamLimits

0xb50d,	// (0x00014db7) list_double_time_pane_vc_t2

0xb52b,	// (0x00014dd5) list_double_time_pane_vc_t3_ParamLimits

0xb52b,	// (0x00014dd5) list_double_time_pane_vc_t3

0xb53d,	// (0x00014de7) list_double_time_pane_vc_t4_ParamLimits

0xb53d,	// (0x00014de7) list_double_time_pane_vc_t4

0x0003,

0xfa42,	// (0x000192ec) list_double_time_pane_vc_t_ParamLimits

0xfa42,	// (0x000192ec) list_double_time_pane_vc_t

0x8d93,	// (0x0001263d) list_double_pane_vc_g1_ParamLimits

0x8d93,	// (0x0001263d) list_double_pane_vc_g1

0x963a,	// (0x00012ee4) list_double_pane_vc_g2_ParamLimits

0x963a,	// (0x00012ee4) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00018e72) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00018e72) list_double_pane_vc_g

0xb54f,	// (0x00014df9) list_double_pane_vc_t1_ParamLimits

0xb54f,	// (0x00014df9) list_double_pane_vc_t1

0xb561,	// (0x00014e0b) list_double_pane_vc_t2_ParamLimits

0xb561,	// (0x00014e0b) list_double_pane_vc_t2

0x0001,

0xfa4b,	// (0x000192f5) list_double_pane_vc_t_ParamLimits

0xfa4b,	// (0x000192f5) list_double_pane_vc_t

0x8d93,	// (0x0001263d) list_double_number_pane_vc_g1_ParamLimits

0x8d93,	// (0x0001263d) list_double_number_pane_vc_g1

0x963a,	// (0x00012ee4) list_double_number_pane_vc_g2_ParamLimits

0x963a,	// (0x00012ee4) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00018e72) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00018e72) list_double_number_pane_vc_g

0xb577,	// (0x00014e21) list_double_number_pane_vc_t1_ParamLimits

0xb577,	// (0x00014e21) list_double_number_pane_vc_t1

0xb589,	// (0x00014e33) list_double_number_pane_vc_t2_ParamLimits

0xb589,	// (0x00014e33) list_double_number_pane_vc_t2

0xb561,	// (0x00014e0b) list_double_number_pane_vc_t3_ParamLimits

0xb561,	// (0x00014e0b) list_double_number_pane_vc_t3

0x0002,

0xfa50,	// (0x000192fa) list_double_number_pane_vc_t_ParamLimits

0xfa50,	// (0x000192fa) list_double_number_pane_vc_t

0xb59b,	// (0x00014e45) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb59b,	// (0x00014e45) list_double_large_graphic_pane_vc_g1

0xb5b7,	// (0x00014e61) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb5b7,	// (0x00014e61) list_double_large_graphic_pane_vc_g2

0xb5cb,	// (0x00014e75) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb5cb,	// (0x00014e75) list_double_large_graphic_pane_vc_g3

0xb5da,	// (0x00014e84) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb5da,	// (0x00014e84) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa57,	// (0x00019301) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa57,	// (0x00019301) list_double_large_graphic_pane_vc_g

0xb5e6,	// (0x00014e90) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb5e6,	// (0x00014e90) list_double_large_graphic_pane_vc_t1

0xb600,	// (0x00014eaa) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb600,	// (0x00014eaa) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa60,	// (0x0001930a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa60,	// (0x0001930a) list_double_large_graphic_pane_vc_t

0x8d93,	// (0x0001263d) list_double_heading_pane_vc_g1_ParamLimits

0x8d93,	// (0x0001263d) list_double_heading_pane_vc_g1

0x963a,	// (0x00012ee4) list_double_heading_pane_vc_g2_ParamLimits

0x963a,	// (0x00012ee4) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00018e72) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00018e72) list_double_heading_pane_vc_g

0xb620,	// (0x00014eca) list_double_heading_pane_vc_t1_ParamLimits

0xb620,	// (0x00014eca) list_double_heading_pane_vc_t1

0xb632,	// (0x00014edc) list_double_heading_pane_vc_t2_ParamLimits

0xb632,	// (0x00014edc) list_double_heading_pane_vc_t2

0x0001,

0xfa65,	// (0x0001930f) list_double_heading_pane_vc_t_ParamLimits

0xfa65,	// (0x0001930f) list_double_heading_pane_vc_t

0xb648,	// (0x00014ef2) list_double_graphic_pane_vc_g1_ParamLimits

0xb648,	// (0x00014ef2) list_double_graphic_pane_vc_g1

0xb654,	// (0x00014efe) list_double_graphic_pane_vc_g2_ParamLimits

0xb654,	// (0x00014efe) list_double_graphic_pane_vc_g2

0x8d93,	// (0x0001263d) list_double_graphic_pane_vc_g3_ParamLimits

0x8d93,	// (0x0001263d) list_double_graphic_pane_vc_g3

0x0003,

0xfa6a,	// (0x00019314) list_double_graphic_pane_vc_g_ParamLimits

0xfa6a,	// (0x00019314) list_double_graphic_pane_vc_g

0xb671,	// (0x00014f1b) list_double_graphic_pane_vc_t1_ParamLimits

0xb671,	// (0x00014f1b) list_double_graphic_pane_vc_t1

0xb68f,	// (0x00014f39) list_double_graphic_pane_vc_t2_ParamLimits

0xb68f,	// (0x00014f39) list_double_graphic_pane_vc_t2

0x0001,

0xfa73,	// (0x0001931d) list_double_graphic_pane_vc_t_ParamLimits

0xfa73,	// (0x0001931d) list_double_graphic_pane_vc_t

0x4f43,	// (0x0000e7ed) aid_size_cell_fastswap

0xc96b,	// (0x00016215) aid_size_cell_touch_ParamLimits

0xc96b,	// (0x00016215) aid_size_cell_touch

0x51a6,	// (0x0000ea50) popup_fast_swap_wide_window_ParamLimits

0x51a6,	// (0x0000ea50) popup_fast_swap_wide_window

0xcae7,	// (0x00016391) touch_pane_ParamLimits

0xcae7,	// (0x00016391) touch_pane

0x7f82,	// (0x0001182c) button_value_adjust_pane_cp2

0x7f82,	// (0x0001182c) button_value_adjust_pane_cp4

0x7fa2,	// (0x0001184c) form_field_data_pane_cp2

0x1caa,	// (0x0000b554) form_field_data_wide_pane_cp2

0x8613,	// (0x00011ebd) bg_scroll_pane_ParamLimits

0x54f0,	// (0x0000ed9a) scroll_handle_pane_ParamLimits

0x5504,	// (0x0000edae) scroll_sc2_down_pane_ParamLimits

0x5504,	// (0x0000edae) scroll_sc2_down_pane

0x8644,	// (0x00011eee) scroll_sc2_up_pane_ParamLimits

0x8644,	// (0x00011eee) scroll_sc2_up_pane

0x3301,	// (0x0000cbab) grid_wheel_folder_pane_g1_ParamLimits

0x3301,	// (0x0000cbab) grid_wheel_folder_pane_g1

0x56b8,	// (0x0000ef62) clock_nsta_pane_cp2_ParamLimits

0x56b8,	// (0x0000ef62) clock_nsta_pane_cp2

0x1fc0,	// (0x0000b86a) listscroll_midp_pane_ParamLimits

0x1fcc,	// (0x0000b876) midp_canvas_pane

0x9146,	// (0x000129f0) nsta_clock_indic_pane

0x9182,	// (0x00012a2c) listscroll_form_pane_vc

0x918a,	// (0x00012a34) listscroll_set_pane_vc_ParamLimits

0x918a,	// (0x00012a34) listscroll_set_pane_vc

0x2953,	// (0x0000c1fd) clock_nsta_pane

0x297d,	// (0x0000c227) indicator_nsta_pane

0x95ca,	// (0x00012e74) bg_popup_sub_pane_cp2_ParamLimits

0x95de,	// (0x00012e88) find_pane_cp2_ParamLimits

0x95de,	// (0x00012e88) find_pane_cp2

0x95f4,	// (0x00012e9e) grid_toobar_pane_ParamLimits

0x97a2,	// (0x0001304c) list_form_gen_pane_vc_ParamLimits

0x97a2,	// (0x0001304c) list_form_gen_pane_vc

0x97b8,	// (0x00013062) scroll_pane_cp8_vc_ParamLimits

0x97b8,	// (0x00013062) scroll_pane_cp8_vc

0x9834,	// (0x000130de) data_form_wide_pane_vc_ParamLimits

0x9834,	// (0x000130de) data_form_wide_pane_vc

0x9840,	// (0x000130ea) form_field_data_wide_pane_vc_g1

0x9848,	// (0x000130f2) form_field_data_wide_pane_vc_t1_ParamLimits

0x9848,	// (0x000130f2) form_field_data_wide_pane_vc_t1

0x804a,	// (0x000118f4) input_focus_pane_cp6_vc_ParamLimits

0x804a,	// (0x000118f4) input_focus_pane_cp6_vc

0x9b54,	// (0x000133fe) list_midp_pane_ParamLimits

0xae6a,	// (0x00014714) scroll_pane_cp16_ParamLimits

0xae6a,	// (0x00014714) scroll_pane_cp16

0x9b96,	// (0x00013440) button_value_adjust_pane_ParamLimits

0x9b96,	// (0x00013440) button_value_adjust_pane

0x2f5c,	// (0x0000c806) button_value_adjust_pane_cp6_ParamLimits

0x2f5c,	// (0x0000c806) button_value_adjust_pane_cp6

0x3066,	// (0x0000c910) settings_code_pane_cp_ParamLimits

0x3066,	// (0x0000c910) settings_code_pane_cp

0x726f,	// (0x00010b19) cell_touch_pane_g1

0x726f,	// (0x00010b19) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00018fa8) cell_touch_pane_g

0x31f9,	// (0x0000caa3) cell_touch_pane_cp_ParamLimits

0x31f9,	// (0x0000caa3) cell_touch_pane_cp

0x3215,	// (0x0000cabf) cell_touch_pane_ParamLimits

0x3215,	// (0x0000cabf) cell_touch_pane

0x726f,	// (0x00010b19) scroll_sc2_down_pane_g1

0x726f,	// (0x00010b19) scroll_sc2_up_pane_g1

0x7279,	// (0x00010b23) bg_set_opt_pane_cp4_vc

0xb225,	// (0x00014acf) list_set_graphic_pane_vc_g1_ParamLimits

0xb225,	// (0x00014acf) list_set_graphic_pane_vc_g1

0xb231,	// (0x00014adb) list_set_graphic_pane_vc_g2_ParamLimits

0xb231,	// (0x00014adb) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x00019298) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x00019298) list_set_graphic_pane_vc_g

0xb23d,	// (0x00014ae7) text_primary_small_cp13_vc_ParamLimits

0xb23d,	// (0x00014ae7) text_primary_small_cp13_vc

0xb255,	// (0x00014aff) list_set_graphic_pane_vc_ParamLimits

0xb255,	// (0x00014aff) list_set_graphic_pane_vc

0x7279,	// (0x00010b23) input_focus_pane_cp2_vc

0x726f,	// (0x00010b19) setting_code_pane_vc_g1

0x73a4,	// (0x00010c4e) setting_code_pane_vc_t1

0xb266,	// (0x00014b10) set_text_pane_vc_t1_ParamLimits

0xb266,	// (0x00014b10) set_text_pane_vc_t1

0x7279,	// (0x00010b23) input_focus_pane_cp1_vc

0xb280,	// (0x00014b2a) list_set_text_pane_vc

0x726f,	// (0x00010b19) setting_text_pane_vc_g1

0x7279,	// (0x00010b23) bg_set_opt_pane_cp2_vc

0x739b,	// (0x00010c45) setting_slider_graphic_pane_vc_g1

0xb28a,	// (0x00014b34) setting_slider_graphic_pane_vc_t1

0xb299,	// (0x00014b43) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x0001929d) setting_slider_graphic_pane_vc_t

0xb2a8,	// (0x00014b52) slider_set_pane_cp_vc

0xb2b0,	// (0x00014b5a) slider_set_pane_vc_g1

0xb2b9,	// (0x00014b63) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x000192a2) slider_set_pane_vc_g

0x818b,	// (0x00011a35) set_opt_bg_pane_g1_copy1

0x8193,	// (0x00011a3d) set_opt_bg_pane_g2_copy1

0xb2e5,	// (0x00014b8f) set_opt_bg_pane_g3_copy1

0x81a3,	// (0x00011a4d) set_opt_bg_pane_g4_copy1

0x81ab,	// (0x00011a55) set_opt_bg_pane_g5_copy1

0x81b3,	// (0x00011a5d) set_opt_bg_pane_g6_copy1

0xb2ed,	// (0x00014b97) set_opt_bg_pane_g7_copy1

0xb2f5,	// (0x00014b9f) set_opt_bg_pane_g8_copy1

0xb2fd,	// (0x00014ba7) set_opt_bg_pane_g9_copy1

0x7279,	// (0x00010b23) bg_set_opt_pane_cp_vc

0xb305,	// (0x00014baf) setting_slider_pane_vc_t1

0xb314,	// (0x00014bbe) setting_slider_pane_vc_t2

0xb323,	// (0x00014bcd) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x000192b1) setting_slider_pane_vc_t

0xb332,	// (0x00014bdc) slider_set_pane_vc

0x5fa9,	// (0x0000f853) volume_set_pane_vc_g1

0x628e,	// (0x0000fb38) volume_set_pane_vc_g2

0x6297,	// (0x0000fb41) volume_set_pane_vc_g3

0x62a0,	// (0x0000fb4a) volume_set_pane_vc_g4

0x62a9,	// (0x0000fb53) volume_set_pane_vc_g5

0x62b2,	// (0x0000fb5c) volume_set_pane_vc_g6

0x62bb,	// (0x0000fb65) volume_set_pane_vc_g7

0x62c4,	// (0x0000fb6e) volume_set_pane_vc_g8

0x62cd,	// (0x0000fb77) volume_set_pane_vc_g9

0x62d6,	// (0x0000fb80) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x000192b8) volume_set_pane_vc_g

0xb33a,	// (0x00014be4) volume_set_pane_vc

0xb342,	// (0x00014bec) button_value_adjust_pane_cp1_vc

0xb34a,	// (0x00014bf4) list_highlight_pane_cp2_vc

0xb353,	// (0x00014bfd) list_set_pane_vc_ParamLimits

0xb353,	// (0x00014bfd) list_set_pane_vc

0xb3a5,	// (0x00014c4f) main_pane_set_vc_t1_ParamLimits

0xb3a5,	// (0x00014c4f) main_pane_set_vc_t1

0xb3ba,	// (0x00014c64) main_pane_set_vc_t2_ParamLimits

0xb3ba,	// (0x00014c64) main_pane_set_vc_t2

0xb3cc,	// (0x00014c76) main_pane_set_vc_t3_ParamLimits

0xb3cc,	// (0x00014c76) main_pane_set_vc_t3

0xb3de,	// (0x00014c88) main_pane_set_vc_t4_ParamLimits

0xb3de,	// (0x00014c88) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x000192cd) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x000192cd) main_pane_set_vc_t

0xb3f0,	// (0x00014c9a) setting_code_pane_vc_ParamLimits

0xb3f0,	// (0x00014c9a) setting_code_pane_vc

0xb3ff,	// (0x00014ca9) setting_slider_graphic_pane_vc

0xb3ff,	// (0x00014ca9) setting_slider_pane_vc

0xb3ff,	// (0x00014ca9) setting_text_pane_vc

0xb3ff,	// (0x00014ca9) setting_volume_pane_vc

0xb407,	// (0x00014cb1) scroll_pane_cp121_vc

0x7f70,	// (0x0001181a) set_content_pane_vc

0xb6ad,	// (0x00014f57) button_value_adjust_pane_g1

0xb6b6,	// (0x00014f60) button_value_adjust_pane_g2

0x0001,

0xfa78,	// (0x00019322) button_value_adjust_pane_g

0xb6bf,	// (0x00014f69) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb6bf,	// (0x00014f69) form_field_slider_wide_pane_vc_t1

0xb6d1,	// (0x00014f7b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb6d1,	// (0x00014f7b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7d,	// (0x00019327) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x00019327) form_field_slider_wide_pane_vc_t

0x75e4,	// (0x00010e8e) input_focus_pane_cp10_vc_ParamLimits

0x75e4,	// (0x00010e8e) input_focus_pane_cp10_vc

0xb6f9,	// (0x00014fa3) slider_cont_pane_cp1_vc_ParamLimits

0xb6f9,	// (0x00014fa3) slider_cont_pane_cp1_vc

0xb709,	// (0x00014fb3) slider_form_pane_g1_cp2

0xb2b9,	// (0x00014b63) slider_form_pane_g2_cp2

0xb736,	// (0x00014fe0) form_field_slider_pane_vc_t3

0xb744,	// (0x00014fee) form_field_slider_pane_vc_t4

0xb752,	// (0x00014ffc) slider_form_pane_vc_ParamLimits

0xb752,	// (0x00014ffc) slider_form_pane_vc

0xb75f,	// (0x00015009) form_field_slider_pane_vc_t1_ParamLimits

0xb75f,	// (0x00015009) form_field_slider_pane_vc_t1

0xb6d1,	// (0x00014f7b) form_field_slider_pane_vc_t2_ParamLimits

0xb6d1,	// (0x00014f7b) form_field_slider_pane_vc_t2

0x0001,

0xfa8f,	// (0x00019339) form_field_slider_pane_vc_t_ParamLimits

0xfa8f,	// (0x00019339) form_field_slider_pane_vc_t

0x75e4,	// (0x00010e8e) input_focus_pane_cp9_vc_ParamLimits

0x75e4,	// (0x00010e8e) input_focus_pane_cp9_vc

0xb775,	// (0x0001501f) slider_cont_pane_vc_ParamLimits

0xb775,	// (0x0001501f) slider_cont_pane_vc

0xb787,	// (0x00015031) list_form_graphic_pane_cp_vc_ParamLimits

0xb787,	// (0x00015031) list_form_graphic_pane_cp_vc

0x9840,	// (0x000130ea) form_field_popup_wide_pane_vc_g1

0xb79c,	// (0x00015046) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb79c,	// (0x00015046) form_field_popup_wide_pane_vc_t1

0x804a,	// (0x000118f4) input_focus_pane_cp8_vc_ParamLimits

0x804a,	// (0x000118f4) input_focus_pane_cp8_vc

0xb7db,	// (0x00015085) list_form_wide_pane_vc_ParamLimits

0xb7db,	// (0x00015085) list_form_wide_pane_vc

0xb7e7,	// (0x00015091) list_form_graphic_pane_vc_g1

0xb7ef,	// (0x00015099) list_form_graphic_pane_vc_t1_ParamLimits

0xb7ef,	// (0x00015099) list_form_graphic_pane_vc_t1

0x7359,	// (0x00010c03) list_highlight_pane_cp5_vc_ParamLimits

0x7359,	// (0x00010c03) list_highlight_pane_cp5_vc

0xb80b,	// (0x000150b5) list_form_graphic_pane_vc_ParamLimits

0xb80b,	// (0x000150b5) list_form_graphic_pane_vc

0x9840,	// (0x000130ea) form_field_popup_pane_vc_g1

0xb821,	// (0x000150cb) form_field_popup_pane_vc_t1_ParamLimits

0xb821,	// (0x000150cb) form_field_popup_pane_vc_t1

0x804a,	// (0x000118f4) input_focus_pane_cp7_vc_ParamLimits

0x804a,	// (0x000118f4) input_focus_pane_cp7_vc

0xb836,	// (0x000150e0) list_form_pane_vc_ParamLimits

0xb836,	// (0x000150e0) list_form_pane_vc

0xb842,	// (0x000150ec) data_form_pane_vc_t1_ParamLimits

0xb842,	// (0x000150ec) data_form_pane_vc_t1

0x818b,	// (0x00011a35) input_focus_pane_vc_g1

0x8193,	// (0x00011a3d) input_focus_pane_vc_g2

0x819b,	// (0x00011a45) input_focus_pane_vc_g3

0x81a3,	// (0x00011a4d) input_focus_pane_vc_g4

0x81ab,	// (0x00011a55) input_focus_pane_vc_g5

0x81b3,	// (0x00011a5d) input_focus_pane_vc_g6

0x81bb,	// (0x00011a65) input_focus_pane_vc_g7

0x81c3,	// (0x00011a6d) input_focus_pane_vc_g8

0x81cb,	// (0x00011a75) input_focus_pane_vc_g9

0x726f,	// (0x00010b19) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00018f31) input_focus_pane_vc_g

0x9834,	// (0x000130de) data_form_pane_vc_ParamLimits

0x9834,	// (0x000130de) data_form_pane_vc

0x9840,	// (0x000130ea) form_field_data_pane_vc_g1

0xb85d,	// (0x00015107) form_field_data_pane_vc_t1_ParamLimits

0xb85d,	// (0x00015107) form_field_data_pane_vc_t1

0x804a,	// (0x000118f4) input_focus_pane_vc_ParamLimits

0x804a,	// (0x000118f4) input_focus_pane_vc

0xb873,	// (0x0001511d) button_value_adjust_pane_cp3_vc

0xb87b,	// (0x00015125) button_value_adjust_pane_cp5_vc

0xb883,	// (0x0001512d) form_field_data_pane_vc_ParamLimits

0xb883,	// (0x0001512d) form_field_data_pane_vc

0xb89a,	// (0x00015144) form_field_data_pane_vc_cp2

0xb8a2,	// (0x0001514c) form_field_data_wide_pane_vc_ParamLimits

0xb8a2,	// (0x0001514c) form_field_data_wide_pane_vc

0xb8b8,	// (0x00015162) form_field_data_wide_pane_vc_cp2

0xb8c0,	// (0x0001516a) form_field_popup_pane_vc_ParamLimits

0xb8c0,	// (0x0001516a) form_field_popup_pane_vc

0xb8d7,	// (0x00015181) form_field_popup_wide_pane_vc_ParamLimits

0xb8d7,	// (0x00015181) form_field_popup_wide_pane_vc

0xb8ed,	// (0x00015197) form_field_slider_pane_vc_ParamLimits

0xb8ed,	// (0x00015197) form_field_slider_pane_vc

0xb900,	// (0x000151aa) form_field_slider_wide_pane_vc_ParamLimits

0xb900,	// (0x000151aa) form_field_slider_wide_pane_vc

0x3233,	// (0x0000cadd) grid_touch_1_pane_ParamLimits

0x3233,	// (0x0000cadd) grid_touch_1_pane

0x3247,	// (0x0000caf1) grid_touch_2_pane_ParamLimits

0x3247,	// (0x0000caf1) grid_touch_2_pane

0xb9ce,	// (0x00015278) touch_pane_g1_ParamLimits

0xb9ce,	// (0x00015278) touch_pane_g1

0xb937,	// (0x000151e1) cell_app_pane_cp_wide_ParamLimits

0xb937,	// (0x000151e1) cell_app_pane_cp_wide

0xb948,	// (0x000151f2) grid_popup_fast_wide_pane_ParamLimits

0xb948,	// (0x000151f2) grid_popup_fast_wide_pane

0xb95c,	// (0x00015206) scroll_pane_cp19_ParamLimits

0xb95c,	// (0x00015206) scroll_pane_cp19

0x7279,	// (0x00010b23) bg_popup_window_pane_cp20

0xb970,	// (0x0001521a) listscroll_popup_fast_wide_pane

0x8371,	// (0x00011c1b) grid_indicator_nsta_pane

0xb978,	// (0x00015222) clock_nsta_pane_g1

0xb981,	// (0x0001522b) clock_nsta_pane_t1

0x3271,	// (0x0000cb1b) cell_indicator_nsta_pane_ParamLimits

0x3271,	// (0x0000cb1b) cell_indicator_nsta_pane

0xb9ce,	// (0x00015278) cell_indicator_nsta_pane_g1

0x3288,	// (0x0000cb32) cell_indicator_nsta_pane_g2

0x0001,

0xfaa0,	// (0x0001934a) cell_indicator_nsta_pane_g

0xb9e9,	// (0x00015293) clock_nsta_pane_cp

0xb9f1,	// (0x0001529b) indicator_nsta_pane_cp

0xb9f9,	// (0x000152a3) nsta_clock_indic_pane_g1

0x7436,	// (0x00010ce0) grid_indicator_pane

0x8736,	// (0x00011fe0) scroll_pane_cp29

0x560f,	// (0x0000eeb9) indicator_nsta_pane_cp2_ParamLimits

0x560f,	// (0x0000eeb9) indicator_nsta_pane_cp2

0x7359,	// (0x00010c03) main_apps_wheel_pane

0x9a1b,	// (0x000132c5) form_midp_field_text_pane_ParamLimits

0x9b60,	// (0x0001340a) scroll_bar_cp050_ParamLimits

0xba49,	// (0x000152f3) cell_indicator_pane_ParamLimits

0xba49,	// (0x000152f3) cell_indicator_pane

0xba5d,	// (0x00015307) cell_indicator_pane_g1

0x3295,	// (0x0000cb3f) grid_wheel_folder_pane_ParamLimits

0x3295,	// (0x0000cb3f) grid_wheel_folder_pane

0x32a3,	// (0x0000cb4d) list_wheel_apps_pane_ParamLimits

0x32a3,	// (0x0000cb4d) list_wheel_apps_pane

0x32af,	// (0x0000cb59) main_apps_wheel_pane_g1_ParamLimits

0x32af,	// (0x0000cb59) main_apps_wheel_pane_g1

0x32bb,	// (0x0000cb65) main_apps_wheel_pane_g2_ParamLimits

0x32bb,	// (0x0000cb65) main_apps_wheel_pane_g2

0x0001,

0xfabc,	// (0x00019366) main_apps_wheel_pane_g_ParamLimits

0xfabc,	// (0x00019366) main_apps_wheel_pane_g

0x32c7,	// (0x0000cb71) main_apps_wheel_pane_t1_ParamLimits

0x32c7,	// (0x0000cb71) main_apps_wheel_pane_t1

0x32d9,	// (0x0000cb83) list_wheel_apps_pane_g1

0x32e1,	// (0x0000cb8b) list_wheel_apps_pane_g2

0x32e9,	// (0x0000cb93) list_wheel_apps_pane_g3

0x32f1,	// (0x0000cb9b) list_wheel_apps_pane_g4

0x32f9,	// (0x0000cba3) list_wheel_apps_pane_g5

0x0004,

0xfac1,	// (0x0001936b) list_wheel_apps_pane_g

0x8ce8,	// (0x00012592) navi_icon_text_pane

0x285b,	// (0x0000c105) aid_fill_nsta

0xbb0c,	// (0x000153b6) navi_icon_text_pane_g1

0xbb18,	// (0x000153c2) navi_icon_text_pane_t1

0x8b89,	// (0x00012433) list_set_graphic_pane_t1_ParamLimits

0x8b89,	// (0x00012433) list_set_graphic_pane_t1

0xa27c,	// (0x00013b26) popup_midp_note_alarm_window_t6_ParamLimits

0xa27c,	// (0x00013b26) popup_midp_note_alarm_window_t6

0xa28e,	// (0x00013b38) popup_midp_note_alarm_window_t7_ParamLimits

0xa28e,	// (0x00013b38) popup_midp_note_alarm_window_t7

0xa2a0,	// (0x00013b4a) popup_midp_note_alarm_window_t8_ParamLimits

0xa2a0,	// (0x00013b4a) popup_midp_note_alarm_window_t8

0xa2b2,	// (0x00013b5c) popup_midp_note_alarm_window_t9_ParamLimits

0xa2b2,	// (0x00013b5c) popup_midp_note_alarm_window_t9

0xa2c4,	// (0x00013b6e) popup_midp_note_alarm_window_t10_ParamLimits

0xa2c4,	// (0x00013b6e) popup_midp_note_alarm_window_t10

0xa2d6,	// (0x00013b80) popup_midp_note_alarm_window_t11_ParamLimits

0xa2d6,	// (0x00013b80) popup_midp_note_alarm_window_t11

0xa2e8,	// (0x00013b92) scroll_pane_cp17_ParamLimits

0xa2e8,	// (0x00013b92) scroll_pane_cp17

0x5fa9,	// (0x0000f853) volume_small_pane_cp_g1

0x62df,	// (0x0000fb89) volume_small_pane_cp_g2

0x62e8,	// (0x0000fb92) volume_small_pane_cp_g3

0x62f1,	// (0x0000fb9b) volume_small_pane_cp_g4

0x62fa,	// (0x0000fba4) volume_small_pane_cp_g5

0x6303,	// (0x0000fbad) volume_small_pane_cp_g6

0x630c,	// (0x0000fbb6) volume_small_pane_cp_g7

0x6315,	// (0x0000fbbf) volume_small_pane_cp_g8

0x631e,	// (0x0000fbc8) volume_small_pane_cp_g9

0x6327,	// (0x0000fbd1) volume_small_pane_cp_g10

0x8f2b,	// (0x000127d5) midp_ticker_pane_g1_ParamLimits

0x8f37,	// (0x000127e1) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00018ffd) midp_ticker_pane_g_ParamLimits

0x8f43,	// (0x000127ed) midp_ticker_pane_t1_ParamLimits

0x2877,	// (0x0000c121) aid_fill_nsta_2

0x9b4c,	// (0x000133f6) list_form2_midp_pane

0xac39,	// (0x000144e3) midp_editing_number_pane_ParamLimits

0xac48,	// (0x000144f2) midp_ticker_pane_ParamLimits

0xbb2a,	// (0x000153d4) form2_midp_field_pane

0xbb4e,	// (0x000153f8) scroll_pane_cp51

0xbb6e,	// (0x00015418) form2_midp_button_pane_ParamLimits

0xbb6e,	// (0x00015418) form2_midp_button_pane

0xbb80,	// (0x0001542a) form2_midp_content_pane_ParamLimits

0xbb80,	// (0x0001542a) form2_midp_content_pane

0xbb9a,	// (0x00015444) form2_midp_field_choice_group_pane

0xbba2,	// (0x0001544c) form2_midp_field_pane_g1

0xbbaa,	// (0x00015454) form2_midp_field_pane_g2

0xbbb2,	// (0x0001545c) form2_midp_field_pane_g3

0xbbba,	// (0x00015464) form2_midp_field_pane_g4

0x0003,

0xfae6,	// (0x00019390) form2_midp_field_pane_g

0xbbc2,	// (0x0001546c) form2_midp_gauge_slider_pane

0xbbca,	// (0x00015474) form2_midp_gauge_wait_pane

0xbbd2,	// (0x0001547c) form2_midp_image_pane_ParamLimits

0xbbd2,	// (0x0001547c) form2_midp_image_pane

0x332e,	// (0x0000cbd8) form2_midp_label_pane_ParamLimits

0x332e,	// (0x0000cbd8) form2_midp_label_pane

0x3347,	// (0x0000cbf1) form2_midp_label_pane_cp_ParamLimits

0x3347,	// (0x0000cbf1) form2_midp_label_pane_cp

0xbc25,	// (0x000154cf) form2_midp_string_pane_ParamLimits

0xbc25,	// (0x000154cf) form2_midp_string_pane

0x3366,	// (0x0000cc10) form2_midp_text_pane_ParamLimits

0x3366,	// (0x0000cc10) form2_midp_text_pane

0xbc50,	// (0x000154fa) form2_midp_time_pane

0xbc60,	// (0x0001550a) input_focus_pane_cp51_ParamLimits

0xbc60,	// (0x0001550a) input_focus_pane_cp51

0x337f,	// (0x0000cc29) form2_midp_label_pane_t1_ParamLimits

0x337f,	// (0x0000cc29) form2_midp_label_pane_t1

0x33ba,	// (0x0000cc64) form2_mdip_text_pane_t1_ParamLimits

0x33ba,	// (0x0000cc64) form2_mdip_text_pane_t1

0xbcce,	// (0x00015578) form2_midp_time_pane_t1

0xbce9,	// (0x00015593) form2_midp_gauge_slider_pane_t1

0x33d2,	// (0x0000cc7c) form2_midp_gauge_slider_pane_t2

0x33e4,	// (0x0000cc8e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaef,	// (0x00019399) form2_midp_gauge_slider_pane_t

0xbd1f,	// (0x000155c9) form2_midp_slider_pane

0xbd2b,	// (0x000155d5) form2_midp_gauge_wait_pane_t1

0xbd39,	// (0x000155e3) form2_midp_wait_pane_ParamLimits

0xbd39,	// (0x000155e3) form2_midp_wait_pane

0x987e,	// (0x00013128) list_single_2graphic_pane_cp4_ParamLimits

0x987e,	// (0x00013128) list_single_2graphic_pane_cp4

0x2cdb,	// (0x0000c585) list_single_midp_graphic_pane_cp_ParamLimits

0x2cdb,	// (0x0000c585) list_single_midp_graphic_pane_cp

0x7279,	// (0x00010b23) list_highlight_pane_cp20

0xbd77,	// (0x00015621) list_single_2graphic_pane_g1_cp4

0xb0dc,	// (0x00014986) list_single_2graphic_pane_g2_cp4

0xbd7f,	// (0x00015629) list_single_2graphic_pane_t1_cp4

0x7359,	// (0x00010c03) list_highlight_pane_cp21

0xbd8e,	// (0x00015638) list_single_midp_graphic_pane_g4_cp

0xbd9d,	// (0x00015647) list_single_midp_graphic_pane_t1_cp

0x33f6,	// (0x0000cca0) form2_mdip_string_pane_t1_ParamLimits

0x33f6,	// (0x0000cca0) form2_mdip_string_pane_t1

0x7279,	// (0x00010b23) bg_wml_button_pane_cp2

0x726f,	// (0x00010b19) form2_midp_image_pane_g1

0x7d52,	// (0x000115fc) list_double_large_graphic_pane_g5_ParamLimits

0x7d52,	// (0x000115fc) list_double_large_graphic_pane_g5

0x1fc0,	// (0x0000b86a) midp_form_pane_ParamLimits

0x7359,	// (0x00010c03) main_apps_wheel_pane_ParamLimits

0xd05c,	// (0x00016906) popup_preview_window_ParamLimits

0xd05c,	// (0x00016906) popup_preview_window

0x5dbc,	// (0x0000f666) popup_touch_info_window_ParamLimits

0x5dbc,	// (0x0000f666) popup_touch_info_window

0x5dda,	// (0x0000f684) popup_touch_menu_window_ParamLimits

0x5dda,	// (0x0000f684) popup_touch_menu_window

0x7265,	// (0x00010b0f) bg_popup_sub_pane_cp6

0xbe1c,	// (0x000156c6) list_touch_menu_pane

0xbe24,	// (0x000156ce) list_single_touch_menu_pane_ParamLimits

0xbe24,	// (0x000156ce) list_single_touch_menu_pane

0xbe38,	// (0x000156e2) list_single_touch_menu_pane_t1

0x7359,	// (0x00010c03) bg_popup_sub_pane_cp7_ParamLimits

0x7359,	// (0x00010c03) bg_popup_sub_pane_cp7

0xbe46,	// (0x000156f0) heading_sub_pane

0xbe4e,	// (0x000156f8) list_touch_info_pane_ParamLimits

0xbe4e,	// (0x000156f8) list_touch_info_pane

0xbe5d,	// (0x00015707) list_single_touch_info_pane_ParamLimits

0xbe5d,	// (0x00015707) list_single_touch_info_pane

0xbe6e,	// (0x00015718) list_single_touch_info_pane_t1

0xbe7c,	// (0x00015726) list_single_touch_info_pane_t2

0x0001,

0xfafd,	// (0x000193a7) list_single_touch_info_pane_t

0x8e5a,	// (0x00012704) bg_popup_heading_pane_cp

0xbe8a,	// (0x00015734) heading_sub_pane_t1

0x97ce,	// (0x00013078) bg_popup_preview_window_pane_cp_ParamLimits

0x97ce,	// (0x00013078) bg_popup_preview_window_pane_cp

0xbe46,	// (0x000156f0) heading_preview_pane

0xbe4e,	// (0x000156f8) list_preview_pane_ParamLimits

0xbe4e,	// (0x000156f8) list_preview_pane

0xbe98,	// (0x00015742) popup_preview_window_g1

0xbe5d,	// (0x00015707) list_single_preview_pane_ParamLimits

0xbe5d,	// (0x00015707) list_single_preview_pane

0xbea0,	// (0x0001574a) list_single_preview_pane_g1

0xbea8,	// (0x00015752) list_single_preview_pane_t1

0xbe6e,	// (0x00015718) list_single_preview_pane_t2

0x0001,

0xfb02,	// (0x000193ac) list_single_preview_pane_t

0xbeb6,	// (0x00015760) bg_popup_heading_pane_cp2_ParamLimits

0xbeb6,	// (0x00015760) bg_popup_heading_pane_cp2

0xbecc,	// (0x00015776) heading_preview_pane_g1

0xbed4,	// (0x0001577e) heading_preview_pane_t1_ParamLimits

0xbed4,	// (0x0001577e) heading_preview_pane_t1

0x7459,	// (0x00010d03) soft_indicator_pane_t1_ParamLimits

0x7a92,	// (0x0001133c) scroll_pane_ParamLimits

0x8632,	// (0x00011edc) scroll_sc2_left_pane

0x863b,	// (0x00011ee5) scroll_sc2_right_pane

0x865a,	// (0x00011f04) scroll_bg_pane_g1_ParamLimits

0x866f,	// (0x00011f19) scroll_bg_pane_g2_ParamLimits

0x8687,	// (0x00011f31) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00018f88) scroll_bg_pane_g_ParamLimits

0x865a,	// (0x00011f04) scroll_handle_pane_g1_ParamLimits

0x86a9,	// (0x00011f53) scroll_handle_pane_g2_ParamLimits

0x8687,	// (0x00011f31) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00018f8f) scroll_handle_pane_g_ParamLimits

0x5966,	// (0x0000f210) popup_choice_list_window_ParamLimits

0x5966,	// (0x0000f210) popup_choice_list_window

0x95d6,	// (0x00012e80) choice_list_pane

0x9684,	// (0x00012f2e) cell_toolbar_pane_t1

0x96ac,	// (0x00012f56) toolbar_button_pane_ParamLimits

0xa79a,	// (0x00014044) ai_gene_pane_1_t2_ParamLimits

0xa79a,	// (0x00014044) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x000191b2) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x000191b2) ai_gene_pane_1_t

0xbef1,	// (0x0001579b) scroll_sc2_left_pane_g1

0xbef1,	// (0x0001579b) scroll_sc2_right_pane_g1

0x919c,	// (0x00012a46) bg_popup_sub_pane_cp10

0xbefb,	// (0x000157a5) list_choice_list_pane

0xbf12,	// (0x000157bc) list_single_choice_list_pane_ParamLimits

0xbf12,	// (0x000157bc) list_single_choice_list_pane

0xbf26,	// (0x000157d0) list_single_choice_list_pane_g1

0x8342,	// (0x00011bec) list_single_choice_list_pane_t1_ParamLimits

0x8342,	// (0x00011bec) list_single_choice_list_pane_t1

0xbf2e,	// (0x000157d8) choice_list_pane_g1

0xbf36,	// (0x000157e0) choice_list_pane_t1

0x7265,	// (0x00010b0f) input_focus_pane_cp11

0x8519,	// (0x00011dc3) title_pane_stacon_g2_ParamLimits

0x8519,	// (0x00011dc3) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00018f6e) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00018f6e) title_pane_stacon_g

0x8e5a,	// (0x00012704) cursor_press_pane

0xcdc3,	// (0x0001666d) popup_fep_hwr_window_ParamLimits

0xcdc3,	// (0x0001666d) popup_fep_hwr_window

0x5a5e,	// (0x0000f308) popup_fep_vkb_window_ParamLimits

0x5a5e,	// (0x0000f308) popup_fep_vkb_window

0xbf44,	// (0x000157ee) cursor_press_pane_g1

0x0002,

0xfb2b,	// (0x000193d5) fep_vkb_side_pane_g_ParamLimits

0x6365,	// (0x0000fc0f) fep_hwr_candidate_pane_ParamLimits

0x6365,	// (0x0000fc0f) fep_hwr_candidate_pane

0x638d,	// (0x0000fc37) fep_hwr_side_pane_ParamLimits

0x638d,	// (0x0000fc37) fep_hwr_side_pane

0x63ad,	// (0x0000fc57) fep_hwr_top_pane_ParamLimits

0x63ad,	// (0x0000fc57) fep_hwr_top_pane

0x63c5,	// (0x0000fc6f) fep_hwr_write_pane_ParamLimits

0x63c5,	// (0x0000fc6f) fep_hwr_write_pane

0xfb2b,	// (0x000193d5) fep_vkb_side_pane_g

0xbf4c,	// (0x000157f6) fep_hwr_top_pane_g1

0xbf5e,	// (0x00015808) fep_hwr_top_pane_g2

0x63ff,	// (0x0000fca9) fep_hwr_top_pane_g3

0x0002,

0xfb07,	// (0x000193b1) fep_hwr_top_pane_g

0x6414,	// (0x0000fcbe) fep_hwr_top_text_pane

0x87fd,	// (0x000120a7) fep_hwr_top_text_pane_g1

0xbf94,	// (0x0001583e) fep_hwr_top_text_pane_t1

0x6502,	// (0x0000fdac) fep_hwr_candidate_pane_g1

0xdaf1,	// (0x0001739b) fep_vkb_keypad_pane_g3_ParamLimits

0xdaf1,	// (0x0001739b) fep_vkb_keypad_pane_g3

0xdb13,	// (0x000173bd) fep_vkb_keypad_pane_g4_ParamLimits

0xdb13,	// (0x000173bd) fep_vkb_keypad_pane_g4

0xdb82,	// (0x0001742c) fep_vkb_bottom_pane_g2_ParamLimits

0xdb82,	// (0x0001742c) fep_vkb_bottom_pane_g2

0x0001,

0xfb32,	// (0x000193dc) fep_vkb_bottom_pane_g_ParamLimits

0xfb32,	// (0x000193dc) fep_vkb_bottom_pane_g

0xbef1,	// (0x0001579b) cell_vkb_side_pane_g2

0x0001,

0xfb3c,	// (0x000193e6) cell_vkb_side_pane_g

0xdbc6,	// (0x00017470) cell_vkb_side_pane_t1

0xdbd4,	// (0x0001747e) cell_vkb_side_pane_t1_copy1

0xbef1,	// (0x0001579b) bg_fep_vkb_candidate_pane_g2

0xdca2,	// (0x0001754c) cell_vkb_candidate_pane_ParamLimits

0xd936,	// (0x000171e0) aid_size_cell_vkb_ParamLimits

0xd936,	// (0x000171e0) aid_size_cell_vkb

0xdca2,	// (0x0001754c) cell_vkb_candidate_pane

0x6529,	// (0x0000fdd3) bg_popup_fep_shadow_pane_g1

0xd9a0,	// (0x0001724a) fep_vkb_bottom_pane_ParamLimits

0xd9a0,	// (0x0001724a) fep_vkb_bottom_pane

0xd9dd,	// (0x00017287) fep_vkb_candidate_pane_ParamLimits

0xd9dd,	// (0x00017287) fep_vkb_candidate_pane

0xd9f9,	// (0x000172a3) fep_vkb_keypad_pane_ParamLimits

0xd9f9,	// (0x000172a3) fep_vkb_keypad_pane

0xda2d,	// (0x000172d7) fep_vkb_side_pane_ParamLimits

0xda2d,	// (0x000172d7) fep_vkb_side_pane

0xda59,	// (0x00017303) fep_vkb_top_pane_ParamLimits

0xda59,	// (0x00017303) fep_vkb_top_pane

0xda85,	// (0x0001732f) fep_vkb_top_pane_g1_ParamLimits

0xda85,	// (0x0001732f) fep_vkb_top_pane_g1

0xda94,	// (0x0001733e) fep_vkb_top_pane_g2_ParamLimits

0xda94,	// (0x0001733e) fep_vkb_top_pane_g2

0xdaa3,	// (0x0001734d) fep_vkb_top_pane_g3_ParamLimits

0xdaa3,	// (0x0001734d) fep_vkb_top_pane_g3

0x0003,

0xfb22,	// (0x000193cc) fep_vkb_top_pane_g_ParamLimits

0xfb22,	// (0x000193cc) fep_vkb_top_pane_g

0xdac1,	// (0x0001736b) fep_vkb_top_text_pane_ParamLimits

0xdac1,	// (0x0001736b) fep_vkb_top_text_pane

0x34b4,	// (0x0000cd5e) fep_vkb_side_pane_g1_ParamLimits

0x34b4,	// (0x0000cd5e) fep_vkb_side_pane_g1

0xdae0,	// (0x0001738a) grid_vkb_side_pane_ParamLimits

0xdae0,	// (0x0001738a) grid_vkb_side_pane

0x6531,	// (0x0000fddb) bg_popup_fep_shadow_pane_g2

0x653a,	// (0x0000fde4) bg_popup_fep_shadow_pane_g3

0x6542,	// (0x0000fdec) bg_popup_fep_shadow_pane_g4

0x654b,	// (0x0000fdf5) bg_popup_fep_shadow_pane_g5

0x6553,	// (0x0000fdfd) bg_popup_fep_shadow_pane_g6

0x655b,	// (0x0000fe05) bg_popup_fep_shadow_pane_g7

0x81a3,	// (0x00011a4d) bg_popup_fep_shadow_pane_g8

0xdb31,	// (0x000173db) grid_vkb_keypad_number_pane_ParamLimits

0xdb31,	// (0x000173db) grid_vkb_keypad_number_pane

0xdb41,	// (0x000173eb) grid_vkb_keypad_pane_ParamLimits

0xdb41,	// (0x000173eb) grid_vkb_keypad_pane

0xdb67,	// (0x00017411) fep_vkb_bottom_pane_g1_ParamLimits

0xdb67,	// (0x00017411) fep_vkb_bottom_pane_g1

0xdb90,	// (0x0001743a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xdb90,	// (0x0001743a) grid_vkb_keypad_bottom_left_pane

0xdba5,	// (0x0001744f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xdba5,	// (0x0001744f) grid_vkb_keypad_bottom_right_pane

0xdbba,	// (0x00017464) fep_vkb_top_text_pane_g1

0x34fb,	// (0x0000cda5) fep_vkb_top_text_pane_t1

0x350d,	// (0x0000cdb7) cell_vkb_side_pane_ParamLimits

0x350d,	// (0x0000cdb7) cell_vkb_side_pane

0xbef1,	// (0x0001579b) cell_vkb_side_pane_g1

0xdbe2,	// (0x0001748c) cell_vkb_keypad_pane_ParamLimits

0xdbe2,	// (0x0001748c) cell_vkb_keypad_pane

0xdc4f,	// (0x000174f9) cell_vkb_keypad_pane_g1

0x0008,

0xfb4f,	// (0x000193f9) bg_popup_fep_shadow_pane_g

0x656b,	// (0x0000fe15) cell_hwr_side_pane_g1

0x656b,	// (0x0000fe15) cell_hwr_side_pane_g2

0xdc59,	// (0x00017503) cell_vkb_keypad_pane_t1

0x3523,	// (0x0000cdcd) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x3523,	// (0x0000cdcd) cell_vkb_keypad_bottom_left_pane

0x3538,	// (0x0000cde2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x3538,	// (0x0000cde2) cell_vkb_keypad_bottom_right_pane

0xbef1,	// (0x0001579b) cell_vkb_keypad_bottom_left_pane_g1

0xbef1,	// (0x0001579b) cell_vkb_keypad_bottom_right_pane_g1

0xdc67,	// (0x00017511) cell_vkb_keypad_number_pane_ParamLimits

0xdc67,	// (0x00017511) cell_vkb_keypad_number_pane

0xdc86,	// (0x00017530) cell_vkb_keypad_number_pane_g1

0xdc90,	// (0x0001753a) cell_vkb_keypad_number_pane_g2

0xdc99,	// (0x00017543) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb41,	// (0x000193eb) cell_vkb_keypad_number_pane_g

0xdc59,	// (0x00017503) cell_vkb_keypad_number_pane_t1

0xdcbb,	// (0x00017565) fep_vkb_candidate_pane_g1

0x0001,

0xfb62,	// (0x0001940c) cell_hwr_side_pane_g

0xdcd4,	// (0x0001757e) cell_hwr_side_pane_t1

0x6575,	// (0x0000fe1f) cell_hwr_side_pane_t1_copy1

0x6583,	// (0x0000fe2d) cell_hwr_candidate_pane_g1

0x65b2,	// (0x0000fe5c) cell_hwr_candidate_pane_t1

0xbef1,	// (0x0001579b) cell_vkb_candidate_pane_g2

0xdd18,	// (0x000175c2) cell_vkb_candidate_pane_t1

0x6330,	// (0x0000fbda) bg_popup_fep_shadow_pane_ParamLimits

0x6330,	// (0x0000fbda) bg_popup_fep_shadow_pane

0x63df,	// (0x0000fc89) bg_fep_hwr_top_pane_g4

0xbf70,	// (0x0001581a) bg_hwr_side_pane_g1_ParamLimits

0xbf70,	// (0x0001581a) bg_hwr_side_pane_g1

0xd3a2,	// (0x00016c4c) cell_hwr_side_pane_ParamLimits

0xd3a2,	// (0x00016c4c) cell_hwr_side_pane

0x648b,	// (0x0000fd35) fep_hwr_write_pane_g1_ParamLimits

0x648b,	// (0x0000fd35) fep_hwr_write_pane_g1

0x6498,	// (0x0000fd42) fep_hwr_write_pane_g2_ParamLimits

0x6498,	// (0x0000fd42) fep_hwr_write_pane_g2

0x64a5,	// (0x0000fd4f) fep_hwr_write_pane_g3_ParamLimits

0x64a5,	// (0x0000fd4f) fep_hwr_write_pane_g3

0xd3c2,	// (0x00016c6c) fep_hwr_write_pane_g4_ParamLimits

0xd3c2,	// (0x00016c6c) fep_hwr_write_pane_g4

0x0005,

0xfb0e,	// (0x000193b8) fep_hwr_write_pane_g_ParamLimits

0xfb0e,	// (0x000193b8) fep_hwr_write_pane_g

0x63df,	// (0x0000fc89) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x63df,	// (0x0000fc89) bg_fep_hwr_candidate_pane_g2

0x64c8,	// (0x0000fd72) cell_hwr_candidate_pane_ParamLimits

0x64c8,	// (0x0000fd72) cell_hwr_candidate_pane

0x6502,	// (0x0000fdac) fep_hwr_candidate_pane_g1_ParamLimits

0xd964,	// (0x0001720e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xd964,	// (0x0001720e) bg_popup_fep_shadow_pane_cp2

0xdab3,	// (0x0001735d) fep_vkb_top_pane_g4_ParamLimits

0xdab3,	// (0x0001735d) fep_vkb_top_pane_g4

0xdad2,	// (0x0001737c) fep_vkb_side_pane_g2_ParamLimits

0xdad2,	// (0x0001737c) fep_vkb_side_pane_g2

0x1bcf,	// (0x0000b479) list_setting_pane_t4_ParamLimits

0x1bcf,	// (0x0000b479) list_setting_pane_t4

0x1c49,	// (0x0000b4f3) list_setting_number_pane_t5_ParamLimits

0x1c49,	// (0x0000b4f3) list_setting_number_pane_t5

0x1e9e,	// (0x0000b748) list_double_heading_pane_cp2_ParamLimits

0x1e9e,	// (0x0000b748) list_double_heading_pane_cp2

0x8075,	// (0x0001191f) list_double_heading_pane_g1_cp2_ParamLimits

0x8075,	// (0x0001191f) list_double_heading_pane_g1_cp2

0x8081,	// (0x0001192b) list_double_heading_pane_g2_cp2_ParamLimits

0x8081,	// (0x0001192b) list_double_heading_pane_g2_cp2

0xdd26,	// (0x000175d0) list_double_heading_pane_t1_cp2_ParamLimits

0xdd26,	// (0x000175d0) list_double_heading_pane_t1_cp2

0xdd3c,	// (0x000175e6) list_double_heading_pane_t2_cp2_ParamLimits

0xdd3c,	// (0x000175e6) list_double_heading_pane_t2_cp2

0x724f,	// (0x00010af9) aid_value_unit2

0x51e2,	// (0x0000ea8c) popup_preview_fixed_window

0x75f2,	// (0x00010e9c) bg_popup_preview_window_pane_cp02

0xdd4e,	// (0x000175f8) list_preview_fixed_pane

0xdd94,	// (0x0001763e) list_empty_pane_fp_ParamLimits

0xdd94,	// (0x0001763e) list_empty_pane_fp

0xdd94,	// (0x0001763e) list_single_cale_day_pane_fp_ParamLimits

0xdd94,	// (0x0001763e) list_single_cale_day_pane_fp

0xdd94,	// (0x0001763e) list_single_graphic_heading_pane_fp_ParamLimits

0xdd94,	// (0x0001763e) list_single_graphic_heading_pane_fp

0xdd94,	// (0x0001763e) list_single_graphic_pane_fp_ParamLimits

0xdd94,	// (0x0001763e) list_single_graphic_pane_fp

0xdd94,	// (0x0001763e) list_single_heading_pane_fp_ParamLimits

0xdd94,	// (0x0001763e) list_single_heading_pane_fp

0xdd94,	// (0x0001763e) list_single_pane_fp_ParamLimits

0xdd94,	// (0x0001763e) list_single_pane_fp

0xdda7,	// (0x00017651) list_single_pane_fp_g1_ParamLimits

0xdda7,	// (0x00017651) list_single_pane_fp_g1

0xddb3,	// (0x0001765d) list_single_pane_fp_g2_ParamLimits

0xddb3,	// (0x0001765d) list_single_pane_fp_g2

0xddbf,	// (0x00017669) list_single_pane_fp_g3_ParamLimits

0xddbf,	// (0x00017669) list_single_pane_fp_g3

0xddd3,	// (0x0001767d) list_single_pane_fp_g4_ParamLimits

0xddd3,	// (0x0001767d) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x0001941f) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x0001941f) list_single_pane_fp_g

0xdddf,	// (0x00017689) list_single_pane_fp_t1_ParamLimits

0xdddf,	// (0x00017689) list_single_pane_fp_t1

0xddf6,	// (0x000176a0) list_single_graphic_pane_fp_g1_ParamLimits

0xddf6,	// (0x000176a0) list_single_graphic_pane_fp_g1

0xdda7,	// (0x00017651) list_single_graphic_pane_fp_g2_ParamLimits

0xdda7,	// (0x00017651) list_single_graphic_pane_fp_g2

0xddb3,	// (0x0001765d) list_single_graphic_pane_fp_g3_ParamLimits

0xddb3,	// (0x0001765d) list_single_graphic_pane_fp_g3

0xddbf,	// (0x00017669) list_single_graphic_pane_fp_g4_ParamLimits

0xddbf,	// (0x00017669) list_single_graphic_pane_fp_g4

0xddd3,	// (0x0001767d) list_single_graphic_pane_fp_g5_ParamLimits

0xddd3,	// (0x0001767d) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x00019428) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x00019428) list_single_graphic_pane_fp_g

0xde02,	// (0x000176ac) list_single_graphic_pane_fp_t1_ParamLimits

0xde02,	// (0x000176ac) list_single_graphic_pane_fp_t1

0xddf6,	// (0x000176a0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xddf6,	// (0x000176a0) list_single_graphic_heading_pane_fp_g1

0xdda7,	// (0x00017651) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xdda7,	// (0x00017651) list_single_graphic_heading_pane_fp_g2

0xddb3,	// (0x0001765d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xddb3,	// (0x0001765d) list_single_graphic_heading_pane_fp_g3

0xddbf,	// (0x00017669) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xddbf,	// (0x00017669) list_single_graphic_heading_pane_fp_g4

0xddd3,	// (0x0001767d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xddd3,	// (0x0001767d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x00019428) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00019428) list_single_graphic_heading_pane_fp_g

0xde18,	// (0x000176c2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xde18,	// (0x000176c2) list_single_graphic_heading_pane_fp_t1

0xde2e,	// (0x000176d8) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xde2e,	// (0x000176d8) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x00019433) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x00019433) list_single_graphic_heading_pane_fp_t

0xde40,	// (0x000176ea) list_single_cale_day_pane_fp_g1_ParamLimits

0xde40,	// (0x000176ea) list_single_cale_day_pane_fp_g1

0xde78,	// (0x00017722) list_single_cale_day_pane_fp_g2_ParamLimits

0xde78,	// (0x00017722) list_single_cale_day_pane_fp_g2

0xde84,	// (0x0001772e) list_single_cale_day_pane_fp_g3_ParamLimits

0xde84,	// (0x0001772e) list_single_cale_day_pane_fp_g3

0xdeac,	// (0x00017756) list_single_cale_day_pane_fp_g4_ParamLimits

0xdeac,	// (0x00017756) list_single_cale_day_pane_fp_g4

0xded0,	// (0x0001777a) list_single_cale_day_pane_fp_g5_ParamLimits

0xded0,	// (0x0001777a) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x00019438) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x00019438) list_single_cale_day_pane_fp_g

0xdef4,	// (0x0001779e) list_single_cale_day_pane_fp_t1_ParamLimits

0xdef4,	// (0x0001779e) list_single_cale_day_pane_fp_t1

0xdf1a,	// (0x000177c4) list_single_cale_day_pane_fp_t2_ParamLimits

0xdf1a,	// (0x000177c4) list_single_cale_day_pane_fp_t2

0xdf33,	// (0x000177dd) list_single_cale_day_pane_fp_t3_ParamLimits

0xdf33,	// (0x000177dd) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x00019443) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x00019443) list_single_cale_day_pane_fp_t

0xdda7,	// (0x00017651) list_empty_pane_fp_g1_ParamLimits

0xdda7,	// (0x00017651) list_empty_pane_fp_g1

0xdf4c,	// (0x000177f6) list_empty_pane_fp_t1

0xdf5a,	// (0x00017804) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0001944a) list_empty_pane_fp_t

0xdda7,	// (0x00017651) list_single_heading_pane_fp_g1_ParamLimits

0xdda7,	// (0x00017651) list_single_heading_pane_fp_g1

0xddb3,	// (0x0001765d) list_single_heading_pane_fp_g2_ParamLimits

0xddb3,	// (0x0001765d) list_single_heading_pane_fp_g2

0xddbf,	// (0x00017669) list_single_heading_pane_fp_g3_ParamLimits

0xddbf,	// (0x00017669) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x0001944f) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x0001944f) list_single_heading_pane_fp_g

0xdf68,	// (0x00017812) list_single_heading_pane_fp_t1_ParamLimits

0xdf68,	// (0x00017812) list_single_heading_pane_fp_t1

0xdf7a,	// (0x00017824) list_single_heading_pane_fp_t2_ParamLimits

0xdf7a,	// (0x00017824) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x00019456) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x00019456) list_single_heading_pane_fp_t

0x83b0,	// (0x00011c5a) aid_size_cell_fast

0x7564,	// (0x00010e0e) soft_indicator_pane_cp1_t1

0x83ed,	// (0x00011c97) cell_app_pane_cp2_ParamLimits

0x83ed,	// (0x00011c97) cell_app_pane_cp2

0x6352,	// (0x0000fbfc) fep_hwr_candidate_drop_down_list_pane

0x651c,	// (0x0000fdc6) fep_hwr_candidate_pane_g3_ParamLimits

0x651c,	// (0x0000fdc6) fep_hwr_candidate_pane_g3

0x4710,	// (0x0000dfba) fep_hwr_candidate_pane_g4_ParamLimits

0x4710,	// (0x0000dfba) fep_hwr_candidate_pane_g4

0x0002,

0xfb1b,	// (0x000193c5) fep_hwr_candidate_pane_g_ParamLimits

0xfb1b,	// (0x000193c5) fep_hwr_candidate_pane_g

0xd9cc,	// (0x00017276) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xd9cc,	// (0x00017276) fep_vkb_candidate_drop_down_list_pane

0xdcc3,	// (0x0001756d) fep_vkb_candidate_pane_g3

0xdccb,	// (0x00017575) fep_vkb_candidate_pane_g4

0x0002,

0xfb48,	// (0x000193f2) fep_vkb_candidate_pane_g

0x6583,	// (0x0000fe2d) cell_hwr_candidate_pane_g1_ParamLimits

0x6591,	// (0x0000fe3b) cell_hwr_candidate_pane_g3_ParamLimits

0x6591,	// (0x0000fe3b) cell_hwr_candidate_pane_g3

0xef24,	// (0x000187ce) cell_hwr_candidate_pane_g4_ParamLimits

0xef24,	// (0x000187ce) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x00019411) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x00019411) cell_hwr_candidate_pane_g

0xdce2,	// (0x0001758c) cell_vkb_candidate_pane_g3_ParamLimits

0xdce2,	// (0x0001758c) cell_vkb_candidate_pane_g3

0xdcfd,	// (0x000175a7) cell_vkb_candidate_pane_g4_ParamLimits

0xdcfd,	// (0x000175a7) cell_vkb_candidate_pane_g4

0xdf90,	// (0x0001783a) cell_app_pane_cp2_g1_ParamLimits

0xdf90,	// (0x0001783a) cell_app_pane_cp2_g1

0xdfae,	// (0x00017858) cell_app_pane_cp2_g2_ParamLimits

0xdfae,	// (0x00017858) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0001945b) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0001945b) cell_app_pane_cp2_g

0xdfba,	// (0x00017864) cell_app_pane_cp2_t1_ParamLimits

0xdfba,	// (0x00017864) cell_app_pane_cp2_t1

0x804a,	// (0x000118f4) grid_highlight_pane_cp1_ParamLimits

0x804a,	// (0x000118f4) grid_highlight_pane_cp1

0x65cf,	// (0x0000fe79) cell_hwr_candidate_pane_cp1_ParamLimits

0x65cf,	// (0x0000fe79) cell_hwr_candidate_pane_cp1

0x6583,	// (0x0000fe2d) fep_hwr_candidate_drop_down_list_pane_g1

0x65ed,	// (0x0000fe97) fep_hwr_candidate_drop_down_list_pane_g2

0x65fa,	// (0x0000fea4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00019460) fep_hwr_candidate_drop_down_list_pane_g

0x6607,	// (0x0000feb1) fep_hwr_candidate_drop_down_list_scroll_pane

0x6610,	// (0x0000feba) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6610,	// (0x0000feba) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x661d,	// (0x0000fec7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x661d,	// (0x0000fec7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x662a,	// (0x0000fed4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x662a,	// (0x0000fed4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6637,	// (0x0000fee1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6637,	// (0x0000fee1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6652,	// (0x0000fefc) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6652,	// (0x0000fefc) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x666d,	// (0x0000ff17) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x666d,	// (0x0000ff17) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6688,	// (0x0000ff32) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6688,	// (0x0000ff32) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x66a3,	// (0x0000ff4d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x66a3,	// (0x0000ff4d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x00019467) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x00019467) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x3553,	// (0x0000cdfd) cell_vkb_candidate_pane_cp1_ParamLimits

0x3553,	// (0x0000cdfd) cell_vkb_candidate_pane_cp1

0xdab3,	// (0x0001735d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xdab3,	// (0x0001735d) fep_vkb_candidate_drop_down_list_pane_g1

0xdfcc,	// (0x00017876) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xdfcc,	// (0x00017876) fep_vkb_candidate_drop_down_list_pane_g2

0xdfd9,	// (0x00017883) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xdfd9,	// (0x00017883) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbce,	// (0x00019478) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbce,	// (0x00019478) fep_vkb_candidate_drop_down_list_pane_g

0xdfe6,	// (0x00017890) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xdfe6,	// (0x00017890) fep_vkb_candidate_drop_down_list_scroll_pane

0xdff3,	// (0x0001789d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xdff3,	// (0x0001789d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe000,	// (0x000178aa) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe000,	// (0x000178aa) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe00c,	// (0x000178b6) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe00c,	// (0x000178b6) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe018,	// (0x000178c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe018,	// (0x000178c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe039,	// (0x000178e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe039,	// (0x000178e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe05a,	// (0x00017904) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe05a,	// (0x00017904) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe07b,	// (0x00017925) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe07b,	// (0x00017925) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe09c,	// (0x00017946) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe09c,	// (0x00017946) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x0001947f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x0001947f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x155a,	// (0x0000ae04) title_pane_g1_ParamLimits

0x156d,	// (0x0000ae17) title_pane_g2_ParamLimits

0xf54e,	// (0x00018df8) title_pane_g_ParamLimits

0x87ed,	// (0x00012097) aid_call2_pane

0x87f5,	// (0x0001209f) aid_call_pane

0x87fd,	// (0x000120a7) popup_clock_analogue_window_g1

0x87fd,	// (0x000120a7) popup_clock_analogue_window_g2

0x5519,	// (0x0000edc3) popup_clock_analogue_window_g3

0x5522,	// (0x0000edcc) popup_clock_analogue_window_g4

0x726f,	// (0x00010b19) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00018f9d) popup_clock_analogue_window_g

0x552a,	// (0x0000edd4) popup_clock_analogue_window_t1

0x5538,	// (0x0000ede2) clock_digital_number_pane_ParamLimits

0x5538,	// (0x0000ede2) clock_digital_number_pane

0x5544,	// (0x0000edee) clock_digital_number_pane_cp02_ParamLimits

0x5544,	// (0x0000edee) clock_digital_number_pane_cp02

0x5550,	// (0x0000edfa) clock_digital_number_pane_cp03_ParamLimits

0x5550,	// (0x0000edfa) clock_digital_number_pane_cp03

0x555c,	// (0x0000ee06) clock_digital_number_pane_cp04_ParamLimits

0x555c,	// (0x0000ee06) clock_digital_number_pane_cp04

0x5568,	// (0x0000ee12) clock_digital_separator_pane_ParamLimits

0x5568,	// (0x0000ee12) clock_digital_separator_pane

0x5574,	// (0x0000ee1e) popup_clock_digital_window_t1_ParamLimits

0x5574,	// (0x0000ee1e) popup_clock_digital_window_t1

0x726f,	// (0x00010b19) clock_digital_number_pane_g1

0x726f,	// (0x00010b19) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00018fa8) clock_digital_number_pane_g

0x726f,	// (0x00010b19) clock_digital_separator_pane_g1

0x726f,	// (0x00010b19) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00018fa8) clock_digital_separator_pane_g

0x285b,	// (0x0000c105) aid_fill_nsta_ParamLimits

0x297d,	// (0x0000c227) indicator_nsta_pane_ParamLimits

0x9471,	// (0x00012d1b) popup_clock_analogue_window

0x9471,	// (0x00012d1b) popup_clock_digital_window

0x8371,	// (0x00011c1b) grid_indicator_nsta_pane_ParamLimits

0xb98f,	// (0x00015239) clock_nsta_pane_t2

0x0001,

0xfa9b,	// (0x00019345) clock_nsta_pane_t

0x54dd,	// (0x0000ed87) aid_size_max_handle

0xcb93,	// (0x0001643d) aid_size_min_handle

0x8e5a,	// (0x00012704) editor_scroll_pane

0xe0b7,	// (0x00017961) ex_editor_pane

0x831f,	// (0x00011bc9) scroll_pane_cp13

0x7abe,	// (0x00011368) scroll_pane_cp14

0x882c,	// (0x000120d6) scroll_pane_cp36

0x1ead,	// (0x0000b757) list_single_graphic_hl_pane_cp2_ParamLimits

0x1ead,	// (0x0000b757) list_single_graphic_hl_pane_cp2

0x30db,	// (0x0000c985) list_single_graphic_hl_pane_ParamLimits

0x30db,	// (0x0000c985) list_single_graphic_hl_pane

0xe0bf,	// (0x00017969) aid_size_min_hl_cp1

0xe0c8,	// (0x00017972) list_highlight_pane_cp34_ParamLimits

0xe0c8,	// (0x00017972) list_highlight_pane_cp34

0xe0d9,	// (0x00017983) list_single_graphic_hl_pane_g1_ParamLimits

0xe0d9,	// (0x00017983) list_single_graphic_hl_pane_g1

0x3573,	// (0x0000ce1d) list_single_graphic_hl_pane_g2_ParamLimits

0x3573,	// (0x0000ce1d) list_single_graphic_hl_pane_g2

0x3573,	// (0x0000ce1d) list_single_graphic_hl_pane_g3_ParamLimits

0x3573,	// (0x0000ce1d) list_single_graphic_hl_pane_g3

0x8dcb,	// (0x00012675) list_single_graphic_hl_pane_g4_ParamLimits

0x8dcb,	// (0x00012675) list_single_graphic_hl_pane_g4

0x357f,	// (0x0000ce29) list_single_graphic_hl_pane_g5_ParamLimits

0x357f,	// (0x0000ce29) list_single_graphic_hl_pane_g5

0x0004,

0xfbe6,	// (0x00019490) list_single_graphic_hl_pane_g_ParamLimits

0xfbe6,	// (0x00019490) list_single_graphic_hl_pane_g

0x3593,	// (0x0000ce3d) list_single_graphic_hl_pane_t1_ParamLimits

0x3593,	// (0x0000ce3d) list_single_graphic_hl_pane_t1

0xe0e6,	// (0x00017990) aid_size_min_hl_cp2

0xe0ef,	// (0x00017999) list_highlight_pane_cp34_cp2_ParamLimits

0xe0ef,	// (0x00017999) list_highlight_pane_cp34_cp2

0xe0d9,	// (0x00017983) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe0d9,	// (0x00017983) list_single_graphic_hl_pane_g1_cp2

0xe0fc,	// (0x000179a6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe0fc,	// (0x000179a6) list_single_graphic_hl_pane_g2_cp2

0xe108,	// (0x000179b2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe108,	// (0x000179b2) list_single_graphic_hl_pane_g3_cp2

0x8d93,	// (0x0001263d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8d93,	// (0x0001263d) list_single_graphic_hl_pane_g4_cp2

0xe114,	// (0x000179be) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe114,	// (0x000179be) list_single_graphic_hl_pane_g5_cp2

0xcbea,	// (0x00016494) control_pane_g4_ParamLimits

0xcbea,	// (0x00016494) control_pane_g4

0x919c,	// (0x00012a46) bg_popup_sub_pane_cp10_ParamLimits

0xbefb,	// (0x000157a5) list_choice_list_pane_ParamLimits

0xbf0a,	// (0x000157b4) scroll_pane_cp23

0x75f2,	// (0x00010e9c) bg_popup_preview_window_pane_cp02_ParamLimits

0xdd4e,	// (0x000175f8) list_preview_fixed_pane_ParamLimits

0xdd64,	// (0x0001760e) list_preview_fixed_pane_cp_ParamLimits

0xdd64,	// (0x0001760e) list_preview_fixed_pane_cp

0xdd70,	// (0x0001761a) popup_preview_fixed_window_g1_ParamLimits

0xdd70,	// (0x0001761a) popup_preview_fixed_window_g1

0xdd7c,	// (0x00017626) popup_preview_fixed_window_g2_ParamLimits

0xdd7c,	// (0x00017626) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x00019418) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x00019418) popup_preview_fixed_window_g

0x5459,	// (0x0000ed03) aid_navi_side_left_pane_ParamLimits

0x546a,	// (0x0000ed14) aid_navi_side_right_pane_ParamLimits

0x547e,	// (0x0000ed28) navi_icon_pane_stacon_ParamLimits

0x5492,	// (0x0000ed3c) navi_navi_pane_stacon_ParamLimits

0x547e,	// (0x0000ed28) navi_text_pane_stacon_ParamLimits

0x50c1,	// (0x0000e96b) main_text_info_pane

0xe13e,	// (0x000179e8) listscroll_text_info_pane

0xe146,	// (0x000179f0) list_text_info_pane_ParamLimits

0xe146,	// (0x000179f0) list_text_info_pane

0xe155,	// (0x000179ff) scroll_pane_cp24_ParamLimits

0xe155,	// (0x000179ff) scroll_pane_cp24

0x35a9,	// (0x0000ce53) list_text_info_pane_t1_ParamLimits

0x35a9,	// (0x0000ce53) list_text_info_pane_t1

0xcd42,	// (0x000165ec) popup_fast_swap2_window_ParamLimits

0xcd42,	// (0x000165ec) popup_fast_swap2_window

0xe173,	// (0x00017a1d) aid_size_cell_fast2

0x7265,	// (0x00010b0f) bg_popup_window_pane_cp17

0x9b80,	// (0x0001342a) heading_pane_cp2

0x783d,	// (0x000110e7) listscroll_fast2_pane

0xe17d,	// (0x00017a27) grid_fast2_pane

0xe185,	// (0x00017a2f) listscroll_fast2_pane_g1

0xe18d,	// (0x00017a37) listscroll_fast2_pane_g2

0x0001,

0xfbf1,	// (0x0001949b) listscroll_fast2_pane_g

0x831f,	// (0x00011bc9) scroll_pane_cp26

0xe195,	// (0x00017a3f) cell_fast2_pane_ParamLimits

0xe195,	// (0x00017a3f) cell_fast2_pane

0xe1aa,	// (0x00017a54) cell_fast2_pane_g1

0xe1b3,	// (0x00017a5d) cell_fast2_pane_g2

0xe1bc,	// (0x00017a66) cell_fast2_pane_g3

0x0002,

0xfbf6,	// (0x000194a0) cell_fast2_pane_g

0x7917,	// (0x000111c1) grid_highlight_pane_cp9

0x594c,	// (0x0000f1f6) main_eswt_pane_ParamLimits

0x594c,	// (0x0000f1f6) main_eswt_pane

0xe16a,	// (0x00017a14) list_single_text_info_pane

0xe1c4,	// (0x00017a6e) eswt_ctrl_button_pane

0xe1c4,	// (0x00017a6e) eswt_ctrl_canvas_pane

0xe1cc,	// (0x00017a76) eswt_ctrl_combo_pane

0xe1c4,	// (0x00017a6e) eswt_ctrl_default_pane

0xe1c4,	// (0x00017a6e) eswt_ctrl_label_pane

0xe1d4,	// (0x00017a7e) eswt_ctrl_wait_pane

0xe1dc,	// (0x00017a86) eswt_shell_pane

0x7265,	// (0x00010b0f) listscroll_eswt_app_pane

0xe1f8,	// (0x00017aa2) popup_eswt_tasktip_window_ParamLimits

0xe1f8,	// (0x00017aa2) popup_eswt_tasktip_window

0x97ce,	// (0x00013078) bg_popup_window_pane_cp18

0xe209,	// (0x00017ab3) eswt_control_pane_g1_ParamLimits

0xe209,	// (0x00017ab3) eswt_control_pane_g1

0xe216,	// (0x00017ac0) eswt_control_pane_g2_ParamLimits

0xe216,	// (0x00017ac0) eswt_control_pane_g2

0xe223,	// (0x00017acd) eswt_control_pane_g3_ParamLimits

0xe223,	// (0x00017acd) eswt_control_pane_g3

0xe230,	// (0x00017ada) eswt_control_pane_g4_ParamLimits

0xe230,	// (0x00017ada) eswt_control_pane_g4

0x0003,

0xfbfd,	// (0x000194a7) eswt_control_pane_g_ParamLimits

0xfbfd,	// (0x000194a7) eswt_control_pane_g

0x804a,	// (0x000118f4) bg_button_pane_ParamLimits

0x804a,	// (0x000118f4) bg_button_pane

0x792c,	// (0x000111d6) common_borders_pane_copy2_ParamLimits

0x792c,	// (0x000111d6) common_borders_pane_copy2

0xe23d,	// (0x00017ae7) control_button_pane_g1_ParamLimits

0xe23d,	// (0x00017ae7) control_button_pane_g1

0xe249,	// (0x00017af3) control_button_pane_g2_ParamLimits

0xe249,	// (0x00017af3) control_button_pane_g2

0xe255,	// (0x00017aff) control_button_pane_g3_ParamLimits

0xe255,	// (0x00017aff) control_button_pane_g3

0x0002,

0xfc06,	// (0x000194b0) control_button_pane_g_ParamLimits

0xfc06,	// (0x000194b0) control_button_pane_g

0xe269,	// (0x00017b13) control_button_pane_t1

0xe277,	// (0x00017b21) control_button_pane_t2

0x0001,

0xfc0d,	// (0x000194b7) control_button_pane_t

0x96b8,	// (0x00012f62) bg_button_pane_g1

0x96c8,	// (0x00012f72) bg_button_pane_g2

0x96c0,	// (0x00012f6a) bg_button_pane_g3

0x96d8,	// (0x00012f82) bg_button_pane_g4

0x96d0,	// (0x00012f7a) bg_button_pane_g5

0x96e0,	// (0x00012f8a) bg_button_pane_g6

0x96e8,	// (0x00012f92) bg_button_pane_g7

0x96f8,	// (0x00012fa2) bg_button_pane_g8

0x96f0,	// (0x00012f9a) bg_button_pane_g9

0x0008,

0xf85c,	// (0x00019106) bg_button_pane_g

0xbeb6,	// (0x00015760) common_borders_pane_ParamLimits

0xbeb6,	// (0x00015760) common_borders_pane

0xe209,	// (0x00017ab3) eswt_control_pane_g1_copy1_ParamLimits

0xe209,	// (0x00017ab3) eswt_control_pane_g1_copy1

0xe216,	// (0x00017ac0) eswt_control_pane_g2_copy1_ParamLimits

0xe216,	// (0x00017ac0) eswt_control_pane_g2_copy1

0xe223,	// (0x00017acd) eswt_control_pane_g3_copy1_ParamLimits

0xe223,	// (0x00017acd) eswt_control_pane_g3_copy1

0xe230,	// (0x00017ada) eswt_control_pane_g4_copy1_ParamLimits

0xe230,	// (0x00017ada) eswt_control_pane_g4_copy1

0xbef1,	// (0x0001579b) bg_eswt_ctrl_canvas_pane_g1

0xbeb6,	// (0x00015760) common_borders_pane_cp2_ParamLimits

0xbeb6,	// (0x00015760) common_borders_pane_cp2

0xbeb6,	// (0x00015760) common_borders_pane_cp3_ParamLimits

0xbeb6,	// (0x00015760) common_borders_pane_cp3

0xe285,	// (0x00017b2f) separator_horizontal_pane

0xe28d,	// (0x00017b37) separator_vertical_pane

0xe209,	// (0x00017ab3) eswt_control_pane_g1_copy2_ParamLimits

0xe209,	// (0x00017ab3) eswt_control_pane_g1_copy2

0xe216,	// (0x00017ac0) eswt_control_pane_g2_copy2_ParamLimits

0xe216,	// (0x00017ac0) eswt_control_pane_g2_copy2

0xe223,	// (0x00017acd) eswt_control_pane_g3_copy2_ParamLimits

0xe223,	// (0x00017acd) eswt_control_pane_g3_copy2

0xe230,	// (0x00017ada) eswt_control_pane_g4_copy2_ParamLimits

0xe230,	// (0x00017ada) eswt_control_pane_g4_copy2

0x7265,	// (0x00010b0f) common_borders_pane_cp4

0xe296,	// (0x00017b40) separator_horizontal_pane_g1

0xe29f,	// (0x00017b49) separator_horizontal_pane_g2

0xe2a8,	// (0x00017b52) separator_horizontal_pane_g3

0x0002,

0xfc12,	// (0x000194bc) separator_horizontal_pane_g

0xe209,	// (0x00017ab3) eswt_control_pane_g1_copy3_ParamLimits

0xe209,	// (0x00017ab3) eswt_control_pane_g1_copy3

0xe216,	// (0x00017ac0) eswt_control_pane_g2_copy3_ParamLimits

0xe216,	// (0x00017ac0) eswt_control_pane_g2_copy3

0xe223,	// (0x00017acd) eswt_control_pane_g3_copy3_ParamLimits

0xe223,	// (0x00017acd) eswt_control_pane_g3_copy3

0xe230,	// (0x00017ada) eswt_control_pane_g4_copy3_ParamLimits

0xe230,	// (0x00017ada) eswt_control_pane_g4_copy3

0x7265,	// (0x00010b0f) common_borders_pane_cp5

0xe2b1,	// (0x00017b5b) separator_vertical_pane_g1

0xe2ba,	// (0x00017b64) separator_vertical_pane_g2

0xe2c3,	// (0x00017b6d) separator_vertical_pane_g3

0x0002,

0xfc19,	// (0x000194c3) separator_vertical_pane_g

0xe209,	// (0x00017ab3) eswt_control_pane_g1_copy4_ParamLimits

0xe209,	// (0x00017ab3) eswt_control_pane_g1_copy4

0xe216,	// (0x00017ac0) eswt_control_pane_g2_copy4_ParamLimits

0xe216,	// (0x00017ac0) eswt_control_pane_g2_copy4

0xe223,	// (0x00017acd) eswt_control_pane_g3_copy4_ParamLimits

0xe223,	// (0x00017acd) eswt_control_pane_g3_copy4

0xe230,	// (0x00017ada) eswt_control_pane_g4_copy4_ParamLimits

0xe230,	// (0x00017ada) eswt_control_pane_g4_copy4

0x35c2,	// (0x0000ce6c) eswt_ctrl_combo_button_pane

0x35ca,	// (0x0000ce74) eswt_ctrl_input_pane

0x35d2,	// (0x0000ce7c) popup_choice_list_window_cp70

0x35da,	// (0x0000ce84) eswt_ctrl_input_pane_t1

0x7265,	// (0x00010b0f) input_focus_pane_cp70

0xbeb6,	// (0x00015760) bg_button_pane_cp70_ParamLimits

0xbeb6,	// (0x00015760) bg_button_pane_cp70

0x35e8,	// (0x0000ce92) eswt_ctrl_combo_button_pane_g1

0xe2cc,	// (0x00017b76) wait_bar_pane_cp70

0x97ce,	// (0x00013078) bg_popup_window_pane_cp70_ParamLimits

0x97ce,	// (0x00013078) bg_popup_window_pane_cp70

0xe2d4,	// (0x00017b7e) popup_eswt_tasktip_window_t1

0xe2ea,	// (0x00017b94) wait_bar_pane_cp71_ParamLimits

0xe2ea,	// (0x00017b94) wait_bar_pane_cp71

0xe2f6,	// (0x00017ba0) grid_eswt_app_pane

0x8632,	// (0x00011edc) scroll_pane_cp70

0x35f0,	// (0x0000ce9a) cell_eswt_app_pane_ParamLimits

0x35f0,	// (0x0000ce9a) cell_eswt_app_pane

0x3618,	// (0x0000cec2) cell_eswt_app_pane_g1_ParamLimits

0x3618,	// (0x0000cec2) cell_eswt_app_pane_g1

0x3647,	// (0x0000cef1) cell_eswt_app_pane_g2_ParamLimits

0x3647,	// (0x0000cef1) cell_eswt_app_pane_g2

0x0001,

0xfc20,	// (0x000194ca) cell_eswt_app_pane_g_ParamLimits

0xfc20,	// (0x000194ca) cell_eswt_app_pane_g

0x3670,	// (0x0000cf1a) cell_eswt_app_pane_t1_ParamLimits

0x3670,	// (0x0000cf1a) cell_eswt_app_pane_t1

0xe2ff,	// (0x00017ba9) grid_highlight_pane_cp70_ParamLimits

0xe2ff,	// (0x00017ba9) grid_highlight_pane_cp70

0x7ad2,	// (0x0001137c) set_content_pane_g1

0x20ec,	// (0x0000b996) status_small_volume_pane

0x66be,	// (0x0000ff68) status_small_volume_pane_g1

0x66c6,	// (0x0000ff70) volume_small2_pane

0x66cf,	// (0x0000ff79) volume_small2_pane_g1

0x66d8,	// (0x0000ff82) volume_small2_pane_g2

0x66e1,	// (0x0000ff8b) volume_small2_pane_g3

0x66ea,	// (0x0000ff94) volume_small2_pane_g4

0x66f3,	// (0x0000ff9d) volume_small2_pane_g5

0x66fc,	// (0x0000ffa6) volume_small2_pane_g6

0x6705,	// (0x0000ffaf) volume_small2_pane_g7

0x670e,	// (0x0000ffb8) volume_small2_pane_g8

0x6717,	// (0x0000ffc1) volume_small2_pane_g9

0x6720,	// (0x0000ffca) volume_small2_pane_g10

0x0009,

0xfc25,	// (0x000194cf) volume_small2_pane_g

0xdbba,	// (0x00017464) fep_vkb_top_text_pane_g1_ParamLimits

0x34fb,	// (0x0000cda5) fep_vkb_top_text_pane_t1_ParamLimits

0xdd88,	// (0x00017632) popup_preview_fixed_window_g3_ParamLimits

0xdd88,	// (0x00017632) popup_preview_fixed_window_g3

0xd25f,	// (0x00016b09) popup_toolbar_trans_pane

0x2f4b,	// (0x0000c7f5) aid_height_set_list_ParamLimits

0xaaa6,	// (0x00014350) aid_size_parent_ParamLimits

0x919c,	// (0x00012a46) list_highlight_pane_cp2_ParamLimits

0x7ad2,	// (0x0001137c) set_content_pane_g1_ParamLimits

0x30eb,	// (0x0000c995) list_single_image_pane_ParamLimits

0x30eb,	// (0x0000c995) list_single_image_pane

0x36a2,	// (0x0000cf4c) aid_size_cell_image_ParamLimits

0x36a2,	// (0x0000cf4c) aid_size_cell_image

0x36af,	// (0x0000cf59) grid_single_image_pane_ParamLimits

0x36af,	// (0x0000cf59) grid_single_image_pane

0x8075,	// (0x0001191f) list_single_image_pane_g1_ParamLimits

0x8075,	// (0x0001191f) list_single_image_pane_g1

0x8081,	// (0x0001192b) list_single_image_pane_g2_ParamLimits

0x8081,	// (0x0001192b) list_single_image_pane_g2

0x0001,

0xfc3a,	// (0x000194e4) list_single_image_pane_g_ParamLimits

0xfc3a,	// (0x000194e4) list_single_image_pane_g

0xd914,	// (0x000171be) list_single_image_pane_t1_ParamLimits

0xd914,	// (0x000171be) list_single_image_pane_t1

0x36bb,	// (0x0000cf65) cell_image_list_pane_ParamLimits

0x36bb,	// (0x0000cf65) cell_image_list_pane

0x36cf,	// (0x0000cf79) cell_image_list_pane_g1

0x36d8,	// (0x0000cf82) cell_image_list_pane_g2

0x0001,

0xfc3f,	// (0x000194e9) cell_image_list_pane_g

0xe30b,	// (0x00017bb5) aid_size_cell_tb_trans_pane

0x804a,	// (0x000118f4) bg_tb_trans_pane

0xe31d,	// (0x00017bc7) grid_tb_trans_pane

0x96b8,	// (0x00012f62) bg_tb_trans_pane_g1

0x96c8,	// (0x00012f72) bg_tb_trans_pane_g2

0x96c0,	// (0x00012f6a) bg_tb_trans_pane_g3

0x96d8,	// (0x00012f82) bg_tb_trans_pane_g4

0x96d0,	// (0x00012f7a) bg_tb_trans_pane_g5

0x96f8,	// (0x00012fa2) bg_tb_trans_pane_g6

0x96f0,	// (0x00012f9a) bg_tb_trans_pane_g7

0x96e0,	// (0x00012f8a) bg_tb_trans_pane_g8

0x96e8,	// (0x00012f92) bg_tb_trans_pane_g9

0x0008,

0xfc44,	// (0x000194ee) bg_tb_trans_pane_g

0xe331,	// (0x00017bdb) cell_toolbar_trans_pane_ParamLimits

0xe331,	// (0x00017bdb) cell_toolbar_trans_pane

0xbef1,	// (0x0001579b) cell_toolbar_trans_pane_g1

0x3312,	// (0x0000cbbc) list_form2_midp_pane_t1

0x3320,	// (0x0000cbca) list_form2_midp_pane_t2

0x0001,

0xfae1,	// (0x0001938b) list_form2_midp_pane_t

0xbb4e,	// (0x000153f8) scroll_pane_cp51_ParamLimits

0xbd49,	// (0x000155f3) form2_midp_wait_pane_g1

0xbd52,	// (0x000155fc) form2_midp_wait_pane_g2

0xbd5b,	// (0x00015605) form2_midp_wait_pane_g3

0x0002,

0xfaf6,	// (0x000193a0) form2_midp_wait_pane_g

0x7359,	// (0x00010c03) list_highlight_pane_cp21_ParamLimits

0xbd8e,	// (0x00015638) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbd9d,	// (0x00015647) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xac7c,	// (0x00014526) list_single_2graphic_im_pane_ParamLimits

0xac7c,	// (0x00014526) list_single_2graphic_im_pane

0x36e1,	// (0x0000cf8b) list_single_2graphic_im_pane_g1_ParamLimits

0x36e1,	// (0x0000cf8b) list_single_2graphic_im_pane_g1

0xe357,	// (0x00017c01) list_single_2graphic_im_pane_g2_ParamLimits

0xe357,	// (0x00017c01) list_single_2graphic_im_pane_g2

0xe363,	// (0x00017c0d) list_single_2graphic_im_pane_g3_ParamLimits

0xe363,	// (0x00017c0d) list_single_2graphic_im_pane_g3

0x0003,

0xfc57,	// (0x00019501) list_single_2graphic_im_pane_g_ParamLimits

0xfc57,	// (0x00019501) list_single_2graphic_im_pane_g

0x36f2,	// (0x0000cf9c) list_single_2graphic_im_pane_t1_ParamLimits

0x36f2,	// (0x0000cf9c) list_single_2graphic_im_pane_t1

0xdd94,	// (0x0001763e) list_single_graphic_2heading_pane_fp_ParamLimits

0xdd94,	// (0x0001763e) list_single_graphic_2heading_pane_fp

0xddf6,	// (0x000176a0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xddf6,	// (0x000176a0) list_single_graphic_2heading_pane_fp_g1

0xdda7,	// (0x00017651) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xdda7,	// (0x00017651) list_single_graphic_2heading_pane_fp_g2

0xddb3,	// (0x0001765d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xddb3,	// (0x0001765d) list_single_graphic_2heading_pane_fp_g3

0xddbf,	// (0x00017669) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xddbf,	// (0x00017669) list_single_graphic_2heading_pane_fp_g4

0xddd3,	// (0x0001767d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xddd3,	// (0x0001767d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x00019428) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00019428) list_single_graphic_2heading_pane_fp_g

0xe383,	// (0x00017c2d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe383,	// (0x00017c2d) list_single_graphic_2heading_pane_fp_t1

0xde2e,	// (0x000176d8) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xde2e,	// (0x000176d8) list_single_graphic_2heading_pane_fp_t2

0xe399,	// (0x00017c43) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe399,	// (0x00017c43) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc60,	// (0x0001950a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc60,	// (0x0001950a) list_single_graphic_2heading_pane_fp_t

0xbf7c,	// (0x00015826) fep_hwr_write_pane_g5_ParamLimits

0xbf7c,	// (0x00015826) fep_hwr_write_pane_g5

0xbf88,	// (0x00015832) fep_hwr_write_pane_g6_ParamLimits

0xbf88,	// (0x00015832) fep_hwr_write_pane_g6

0xe1dc,	// (0x00017a86) eswt_shell_pane_ParamLimits

0x97ce,	// (0x00013078) bg_popup_window_pane_cp18_ParamLimits

0xa9e2,	// (0x0001428c) heading_pane_cp70

0xe2d4,	// (0x00017b7e) popup_eswt_tasktip_window_t1_ParamLimits

0x28a6,	// (0x0000c150) aid_touch_tab_arrow_left

0x28ba,	// (0x0000c164) aid_touch_tab_arrow_right

0x1585,	// (0x0000ae2f) title_pane_g3_ParamLimits

0x1585,	// (0x0000ae2f) title_pane_g3

0x7f47,	// (0x000117f1) set_value_pane_g1

0xd25f,	// (0x00016b09) popup_toolbar_trans_pane_ParamLimits

0xe30b,	// (0x00017bb5) aid_size_cell_tb_trans_pane_ParamLimits

0x804a,	// (0x000118f4) bg_tb_trans_pane_ParamLimits

0xe31d,	// (0x00017bc7) grid_tb_trans_pane_ParamLimits

0x75f2,	// (0x00010e9c) cont_note_pane_ParamLimits

0x75f2,	// (0x00010e9c) cont_note_pane

0x792c,	// (0x000111d6) cont_snote2_single_text_pane_ParamLimits

0x792c,	// (0x000111d6) cont_snote2_single_text_pane

0x792c,	// (0x000111d6) cont_snote2_single_graphic_pane_ParamLimits

0x792c,	// (0x000111d6) cont_snote2_single_graphic_pane

0x9d8a,	// (0x00013634) cont_note_wait_pane_ParamLimits

0x9d8a,	// (0x00013634) cont_note_wait_pane

0x9d8a,	// (0x00013634) cont_note_image_pane_ParamLimits

0x9d8a,	// (0x00013634) cont_note_image_pane

0xe3af,	// (0x00017c59) popup_note2_window_g1_ParamLimits

0xe3af,	// (0x00017c59) popup_note2_window_g1

0xe3e0,	// (0x00017c8a) popup_note2_window_t1_ParamLimits

0xe3e0,	// (0x00017c8a) popup_note2_window_t1

0xe425,	// (0x00017ccf) popup_note2_window_t2_ParamLimits

0xe425,	// (0x00017ccf) popup_note2_window_t2

0xe46a,	// (0x00017d14) popup_note2_window_t3_ParamLimits

0xe46a,	// (0x00017d14) popup_note2_window_t3

0xe4af,	// (0x00017d59) popup_note2_window_t4_ParamLimits

0xe4af,	// (0x00017d59) popup_note2_window_t4

0x7676,	// (0x00010f20) popup_note2_window_t5_ParamLimits

0x7676,	// (0x00010f20) popup_note2_window_t5

0x0004,

0xfc6c,	// (0x00019516) popup_note2_window_t_ParamLimits

0xfc6c,	// (0x00019516) popup_note2_window_t

0xe4de,	// (0x00017d88) popup_note2_image_window_g1_ParamLimits

0xe4de,	// (0x00017d88) popup_note2_image_window_g1

0xe4ea,	// (0x00017d94) popup_note2_image_window_g2_ParamLimits

0xe4ea,	// (0x00017d94) popup_note2_image_window_g2

0x0001,

0xfc77,	// (0x00019521) popup_note2_image_window_g_ParamLimits

0xfc77,	// (0x00019521) popup_note2_image_window_g

0xe4fc,	// (0x00017da6) popup_note2_image_window_t1_ParamLimits

0xe4fc,	// (0x00017da6) popup_note2_image_window_t1

0xe514,	// (0x00017dbe) popup_note2_image_window_t2_ParamLimits

0xe514,	// (0x00017dbe) popup_note2_image_window_t2

0xe52c,	// (0x00017dd6) popup_note2_image_window_t3_ParamLimits

0xe52c,	// (0x00017dd6) popup_note2_image_window_t3

0x0002,

0xfc7c,	// (0x00019526) popup_note2_image_window_t_ParamLimits

0xfc7c,	// (0x00019526) popup_note2_image_window_t

0x9d98,	// (0x00013642) popup_note2_wait_window_g1_ParamLimits

0x9d98,	// (0x00013642) popup_note2_wait_window_g1

0x9da4,	// (0x0001364e) popup_note2_wait_window_g2_ParamLimits

0x9da4,	// (0x0001364e) popup_note2_wait_window_g2

0x9db0,	// (0x0001365a) popup_note2_wait_window_g3_ParamLimits

0x9db0,	// (0x0001365a) popup_note2_wait_window_g3

0x0002,

0xf83e,	// (0x000190e8) popup_note2_wait_window_g_ParamLimits

0xf83e,	// (0x000190e8) popup_note2_wait_window_g

0xe548,	// (0x00017df2) popup_note2_wait_window_t1_ParamLimits

0xe548,	// (0x00017df2) popup_note2_wait_window_t1

0xe566,	// (0x00017e10) popup_note2_wait_window_t2_ParamLimits

0xe566,	// (0x00017e10) popup_note2_wait_window_t2

0xe584,	// (0x00017e2e) popup_note2_wait_window_t3_ParamLimits

0xe584,	// (0x00017e2e) popup_note2_wait_window_t3

0xe596,	// (0x00017e40) popup_note2_wait_window_t4_ParamLimits

0xe596,	// (0x00017e40) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x0001952d) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x0001952d) popup_note2_wait_window_t

0xe5a8,	// (0x00017e52) wait_bar2_pane_ParamLimits

0xe5a8,	// (0x00017e52) wait_bar2_pane

0xe5c0,	// (0x00017e6a) popup_snote2_single_text_window_g1_ParamLimits

0xe5c0,	// (0x00017e6a) popup_snote2_single_text_window_g1

0xe5e8,	// (0x00017e92) popup_snote2_single_text_window_t1_ParamLimits

0xe5e8,	// (0x00017e92) popup_snote2_single_text_window_t1

0xe634,	// (0x00017ede) popup_snote2_single_text_window_t2_ParamLimits

0xe634,	// (0x00017ede) popup_snote2_single_text_window_t2

0xe680,	// (0x00017f2a) popup_snote2_single_text_window_t3_ParamLimits

0xe680,	// (0x00017f2a) popup_snote2_single_text_window_t3

0xe6c1,	// (0x00017f6b) popup_snote2_single_text_window_t4_ParamLimits

0xe6c1,	// (0x00017f6b) popup_snote2_single_text_window_t4

0xe6f7,	// (0x00017fa1) popup_snote2_single_text_window_t5_ParamLimits

0xe6f7,	// (0x00017fa1) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x00019536) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x00019536) popup_snote2_single_text_window_t

0xe722,	// (0x00017fcc) popup_snote2_single_graphic_window_g1_ParamLimits

0xe722,	// (0x00017fcc) popup_snote2_single_graphic_window_g1

0xe74a,	// (0x00017ff4) popup_snote2_single_graphic_window_g2_ParamLimits

0xe74a,	// (0x00017ff4) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x00019541) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x00019541) popup_snote2_single_graphic_window_g

0xe772,	// (0x0001801c) popup_snote2_single_graphic_window_t1_ParamLimits

0xe772,	// (0x0001801c) popup_snote2_single_graphic_window_t1

0xe7be,	// (0x00018068) popup_snote2_single_graphic_window_t2_ParamLimits

0xe7be,	// (0x00018068) popup_snote2_single_graphic_window_t2

0xe680,	// (0x00017f2a) popup_snote2_single_graphic_window_t3_ParamLimits

0xe680,	// (0x00017f2a) popup_snote2_single_graphic_window_t3

0xe6c1,	// (0x00017f6b) popup_snote2_single_graphic_window_t4_ParamLimits

0xe6c1,	// (0x00017f6b) popup_snote2_single_graphic_window_t4

0xe6f7,	// (0x00017fa1) popup_snote2_single_graphic_window_t5_ParamLimits

0xe6f7,	// (0x00017fa1) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x00019546) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x00019546) popup_snote2_single_graphic_window_t

0xba28,	// (0x000152d2) clock_nsta_pane_cp2_t1

0xba28,	// (0x000152d2) clock_nsta_pane_cp2_t2

0x0001,

0xfab7,	// (0x00019361) clock_nsta_pane_cp2_t

0x8069,	// (0x00011913) form_field_data_wide_pane_g1_ParamLimits

0x8075,	// (0x0001191f) form_field_data_wide_pane_g2_ParamLimits

0x8075,	// (0x0001191f) form_field_data_wide_pane_g2

0x8081,	// (0x0001192b) form_field_data_wide_pane_g3_ParamLimits

0x8081,	// (0x0001192b) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00018f20) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00018f20) form_field_data_wide_pane_g

0x325b,	// (0x0000cb05) grid_touch_3_pane_ParamLimits

0x325b,	// (0x0000cb05) grid_touch_3_pane

0x3723,	// (0x0000cfcd) cell_touch_3_pane_ParamLimits

0x3723,	// (0x0000cfcd) cell_touch_3_pane

0xbef1,	// (0x0001579b) cell_touch_3_pane_g1

0xbef1,	// (0x0001579b) cell_touch_3_pane_g2

0x0001,

0xfb3c,	// (0x000193e6) cell_touch_3_pane_g

0x76a8,	// (0x00010f52) cont_query_data_pane

0x76b0,	// (0x00010f5a) cont_query_data_pane_cp1

0xe80a,	// (0x000180b4) button_value_adjust_pane_cp7

0xe812,	// (0x000180bc) query_popup_pane_cp3

0x88d8,	// (0x00012182) bg_popup_sub_pane_cp22_ParamLimits

0x5593,	// (0x0000ee3d) navi_navi_volume_pane_cp2

0x55ab,	// (0x0000ee55) popup_side_volume_key_window_g2

0x55b7,	// (0x0000ee61) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00018fb6) popup_side_volume_key_window_g

0x55d1,	// (0x0000ee7b) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00018fbd) popup_side_volume_key_window_t

0x8c06,	// (0x000124b0) popup_side_volume_key_window_ParamLimits

0x1a15,	// (0x0000b2bf) list_double_graphic_pane_g4_ParamLimits

0x1a15,	// (0x0000b2bf) list_double_graphic_pane_g4

0x30c9,	// (0x0000c973) list_single_2heading_msg_pane_ParamLimits

0x30c9,	// (0x0000c973) list_single_2heading_msg_pane

0x3769,	// (0x0000d013) list_single_2heading_msg_pane_g1_ParamLimits

0x3769,	// (0x0000d013) list_single_2heading_msg_pane_g1

0x3775,	// (0x0000d01f) list_single_2heading_msg_pane_g2_ParamLimits

0x3775,	// (0x0000d01f) list_single_2heading_msg_pane_g2

0x3788,	// (0x0000d032) list_single_2heading_msg_pane_g3_ParamLimits

0x3788,	// (0x0000d032) list_single_2heading_msg_pane_g3

0xe82b,	// (0x000180d5) list_single_2heading_msg_pane_g4_ParamLimits

0xe82b,	// (0x000180d5) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x00019551) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x00019551) list_single_2heading_msg_pane_g

0x3794,	// (0x0000d03e) list_single_2heading_msg_pane_t1_ParamLimits

0x3794,	// (0x0000d03e) list_single_2heading_msg_pane_t1

0x37bc,	// (0x0000d066) list_single_2heading_msg_pane_t2_ParamLimits

0x37bc,	// (0x0000d066) list_single_2heading_msg_pane_t2

0x3827,	// (0x0000d0d1) list_single_2heading_msg_pane_t3_ParamLimits

0x3827,	// (0x0000d0d1) list_single_2heading_msg_pane_t3

0xe843,	// (0x000180ed) list_single_2heading_msg_pane_t4_ParamLimits

0xe843,	// (0x000180ed) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x0001955a) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x0001955a) list_single_2heading_msg_pane_t

0x72ad,	// (0x00010b57) title_pane_g4_ParamLimits

0x72ad,	// (0x00010b57) title_pane_g4

0x53a9,	// (0x0000ec53) title_pane_stacon_g3_ParamLimits

0x53a9,	// (0x0000ec53) title_pane_stacon_g3

0xe377,	// (0x00017c21) list_single_2graphic_im_pane_g4_ParamLimits

0xe377,	// (0x00017c21) list_single_2graphic_im_pane_g4

0xa7b7,	// (0x00014061) popup_side_volume_key_window_cp

0xaff1,	// (0x0001489b) main_idle_act2_pane_t1

0x5ea1,	// (0x0000f74b) toolbar_button_pane_g10

0x18d2,	// (0x0000b17c) popup_toolbar_window_cp1

0xba19,	// (0x000152c3) clock_nsta_pane_cp_t1

0xba19,	// (0x000152c3) clock_nsta_pane_cp_t2

0x0001,

0xfab2,	// (0x0001935c) clock_nsta_pane_cp_t

0x5593,	// (0x0000ee3d) navi_navi_volume_pane_cp2_ParamLimits

0x559f,	// (0x0000ee49) popup_side_volume_key_window_g1_ParamLimits

0x55ab,	// (0x0000ee55) popup_side_volume_key_window_g2_ParamLimits

0x55b7,	// (0x0000ee61) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00018fb6) popup_side_volume_key_window_g_ParamLimits

0x633e,	// (0x0000fbe8) fep_hwr_aid_pane

0x63df,	// (0x0000fc89) bg_fep_hwr_top_pane_g4_ParamLimits

0xbf4c,	// (0x000157f6) fep_hwr_top_pane_g1_ParamLimits

0xbf5e,	// (0x00015808) fep_hwr_top_pane_g2_ParamLimits

0x63ff,	// (0x0000fca9) fep_hwr_top_pane_g3_ParamLimits

0xfb07,	// (0x000193b1) fep_hwr_top_pane_g_ParamLimits

0x6414,	// (0x0000fcbe) fep_hwr_top_text_pane_ParamLimits

0xa57a,	// (0x00013e24) aid_touch_tab_arrow_arrow_2

0xa583,	// (0x00013e2d) aid_touch_tab_arrow_left_2

0x6352,	// (0x0000fbfc) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6385,	// (0x0000fc2f) fep_hwr_prediction_pane

0xda25,	// (0x000172cf) fep_vkb_prediction_pane

0x34db,	// (0x0000cd85) fep_vkb_side_pane_g3_ParamLimits

0x34db,	// (0x0000cd85) fep_vkb_side_pane_g3

0x6583,	// (0x0000fe2d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x65ed,	// (0x0000fe97) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x65fa,	// (0x0000fea4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x00019460) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6729,	// (0x0000ffd3) fep_hwr_prediction_pane_g1

0x6733,	// (0x0000ffdd) fep_hwr_prediction_pane_g2

0x673b,	// (0x0000ffe5) fep_hwr_prediction_pane_g3

0x6743,	// (0x0000ffed) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x00019563) fep_hwr_prediction_pane_g

0xe868,	// (0x00018112) fep_vkb_prediction_pane_g1

0xe872,	// (0x0001811c) fep_vkb_prediction_pane_g2

0xe87a,	// (0x00018124) fep_vkb_prediction_pane_g3

0xe882,	// (0x0001812c) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0001956c) fep_vkb_prediction_pane_g

0x616d,	// (0x0000fa17) slider_set_pane_g3

0x6181,	// (0x0000fa2b) slider_set_pane_g4

0x6199,	// (0x0000fa43) slider_set_pane_g5

0x616d,	// (0x0000fa17) slider_set_pane_g6

0xd374,	// (0x00016c1e) slider_set_pane_g7

0xabe5,	// (0x0001448f) slider_form_pane_g3

0xabee,	// (0x00014498) slider_form_pane_g4

0xabf6,	// (0x000144a0) slider_form_pane_g5

0xabe5,	// (0x0001448f) slider_form_pane_g6

0x3082,	// (0x0000c92c) slider_form_pane_g7

0xb2c1,	// (0x00014b6b) slider_set_pane_vc_g3

0xb2ca,	// (0x00014b74) slider_set_pane_vc_g4

0xb2d3,	// (0x00014b7d) slider_set_pane_vc_g5

0xb2c1,	// (0x00014b6b) slider_set_pane_vc_g6

0xb2dc,	// (0x00014b86) slider_set_pane_vc_g7

0xb712,	// (0x00014fbc) slider_form_pane_vc_g1

0xb71b,	// (0x00014fc5) slider_form_pane_vc_g2

0xb724,	// (0x00014fce) slider_form_pane_vc_g3

0xb712,	// (0x00014fbc) slider_form_pane_vc_g4

0xb72d,	// (0x00014fd7) slider_form_pane_vc_g5

0x0004,

0xfa84,	// (0x0001932e) slider_form_pane_vc_g

0x50c1,	// (0x0000e96b) main_idle_act3_pane

0xe88a,	// (0x00018134) ai3_links_pane

0x3895,	// (0x0000d13f) popup_ai3_data_window_ParamLimits

0x3895,	// (0x0000d13f) popup_ai3_data_window

0x7265,	// (0x00010b0f) grid_ai3_links_pane

0x38ad,	// (0x0000d157) cell_ai3_links_pane_ParamLimits

0x38ad,	// (0x0000d157) cell_ai3_links_pane

0xe893,	// (0x0001813d) bg_popup_sub_pane_cp11

0xe8a0,	// (0x0001814a) cell_ai3_links_pane_g1

0x7265,	// (0x00010b0f) bg_popup_sub_pane_cp12

0xe8c5,	// (0x0001816f) heading_ai3_data_pane

0xe8cd,	// (0x00018177) list_ai3_gene_pane

0xe8d9,	// (0x00018183) popup_ai3_data_window_g1

0xe8e1,	// (0x0001818b) heading_ai3_data_pane_g1

0xe8e9,	// (0x00018193) heading_ai3_data_pane_t1

0xe8f7,	// (0x000181a1) list_double_ai3_gene_pane_ParamLimits

0xe8f7,	// (0x000181a1) list_double_ai3_gene_pane

0xe904,	// (0x000181ae) list_single_ai3_gene_pane_ParamLimits

0xe904,	// (0x000181ae) list_single_ai3_gene_pane

0xbeb6,	// (0x00015760) list_highlight_pane_cp7_ParamLimits

0xbeb6,	// (0x00015760) list_highlight_pane_cp7

0xe911,	// (0x000181bb) list_single_a13_gene_pane_t1_ParamLimits

0xe911,	// (0x000181bb) list_single_a13_gene_pane_t1

0xe928,	// (0x000181d2) list_single_ai3_gene_pane_g1

0xe931,	// (0x000181db) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x00019575) list_single_ai3_gene_pane_g

0xe939,	// (0x000181e3) list_double_ai3_gene_pane_g1_ParamLimits

0xe939,	// (0x000181e3) list_double_ai3_gene_pane_g1

0xe945,	// (0x000181ef) list_double_ai3_gene_pane_t1_ParamLimits

0xe945,	// (0x000181ef) list_double_ai3_gene_pane_t1

0xe961,	// (0x0001820b) list_double_ai3_gene_pane_t2_ParamLimits

0xe961,	// (0x0001820b) list_double_ai3_gene_pane_t2

0xe977,	// (0x00018221) list_double_ai3_gene_pane_t3_ParamLimits

0xe977,	// (0x00018221) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x0001957a) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x0001957a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe823,	// (0x000180cd) aid_size_min_col_2

0x3755,	// (0x0000cfff) aid_size_min_msg_ParamLimits

0x3755,	// (0x0000cfff) aid_size_min_msg

0x34ef,	// (0x0000cd99) fep_vkb_top_text_pane_g2_ParamLimits

0x34ef,	// (0x0000cd99) fep_vkb_top_text_pane_g2

0x0001,

0xfb37,	// (0x000193e1) fep_vkb_top_text_pane_g_ParamLimits

0xfb37,	// (0x000193e1) fep_vkb_top_text_pane_g

0x50c1,	// (0x0000e96b) main_hc_apps_shell_pane

0xe994,	// (0x0001823e) grid_hc_apps_pane_ParamLimits

0xe994,	// (0x0001823e) grid_hc_apps_pane

0xe9a3,	// (0x0001824d) list_hc_apps_pane

0xe9ab,	// (0x00018255) scroll_pane_cp37_ParamLimits

0xe9ab,	// (0x00018255) scroll_pane_cp37

0x38c3,	// (0x0000d16d) cell_hc_apps_pane_ParamLimits

0x38c3,	// (0x0000d16d) cell_hc_apps_pane

0x395d,	// (0x0000d207) cell_hc_apps_pane_g1_ParamLimits

0x395d,	// (0x0000d207) cell_hc_apps_pane_g1

0xe9b7,	// (0x00018261) cell_hc_apps_pane_g2_ParamLimits

0xe9b7,	// (0x00018261) cell_hc_apps_pane_g2

0xe9d3,	// (0x0001827d) cell_hc_apps_pane_g3_ParamLimits

0xe9d3,	// (0x0001827d) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x00019581) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x00019581) cell_hc_apps_pane_g

0x398a,	// (0x0000d234) cell_hc_apps_pane_t1_ParamLimits

0x398a,	// (0x0000d234) cell_hc_apps_pane_t1

0x75f2,	// (0x00010e9c) grid_highlight_pane_cp10_ParamLimits

0x75f2,	// (0x00010e9c) grid_highlight_pane_cp10

0x39c8,	// (0x0000d272) list_single_hc_apps_pane_ParamLimits

0x39c8,	// (0x0000d272) list_single_hc_apps_pane

0x39f3,	// (0x0000d29d) list_single_hc_apps_pane_g1

0x3a0c,	// (0x0000d2b6) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x00019588) list_single_hc_apps_pane_g

0x3a25,	// (0x0000d2cf) list_single_hc_apps_pane_g2_copy1

0x3a41,	// (0x0000d2eb) list_single_hc_apps_pane_t1

0x7359,	// (0x00010c03) bg_set_opt_pane_cp_ParamLimits

0x52d4,	// (0x0000eb7e) setting_slider_pane_t1_ParamLimits

0xcb45,	// (0x000163ef) setting_slider_pane_t2_ParamLimits

0xcb5e,	// (0x00016408) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00018e08) setting_slider_pane_t_ParamLimits

0x531d,	// (0x0000ebc7) slider_set_pane_ParamLimits

0x581f,	// (0x0000f0c9) control_pane_g5_ParamLimits

0x581f,	// (0x0000f0c9) control_pane_g5

0xaa60,	// (0x0001430a) slider_set_pane_g1_ParamLimits

0x6161,	// (0x0000fa0b) slider_set_pane_g2_ParamLimits

0x616d,	// (0x0000fa17) slider_set_pane_g3_ParamLimits

0x6181,	// (0x0000fa2b) slider_set_pane_g4_ParamLimits

0x6199,	// (0x0000fa43) slider_set_pane_g5_ParamLimits

0x616d,	// (0x0000fa17) slider_set_pane_g6_ParamLimits

0xd374,	// (0x00016c1e) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x00019204) slider_set_pane_g_ParamLimits

0x8ce8,	// (0x00012592) navi_icon_text_pane_ParamLimits

0x2877,	// (0x0000c121) aid_fill_nsta_2_ParamLimits

0x28a6,	// (0x0000c150) aid_touch_tab_arrow_left_ParamLimits

0x28ba,	// (0x0000c164) aid_touch_tab_arrow_right_ParamLimits

0x2953,	// (0x0000c1fd) clock_nsta_pane_ParamLimits

0xa55c,	// (0x00013e06) navi_icon_pane_g1_ParamLimits

0xa568,	// (0x00013e12) navi_text_pane_t1_ParamLimits

0xbb0c,	// (0x000153b6) navi_icon_text_pane_g1_ParamLimits

0xbb18,	// (0x000153c2) navi_icon_text_pane_t1_ParamLimits

0x39f3,	// (0x0000d29d) list_single_hc_apps_pane_g1_ParamLimits

0x3a0c,	// (0x0000d2b6) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x00019588) list_single_hc_apps_pane_g_ParamLimits

0x3a25,	// (0x0000d2cf) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x3a41,	// (0x0000d2eb) list_single_hc_apps_pane_t1_ParamLimits

0xca8b,	// (0x00016335) popup_toolbar2_fixed_window_ParamLimits

0xca8b,	// (0x00016335) popup_toolbar2_fixed_window

0xd257,	// (0x00016b01) popup_toolbar2_float_window

0x7265,	// (0x00010b0f) bg_popup_sub_pane_cp27

0xe9f5,	// (0x0001829f) grid_toolbar2_float_pane

0x7265,	// (0x00010b0f) bg_popup_sub_pane_cp26

0xe9f5,	// (0x0001829f) grid_toolbar2_fixed_pane

0x3a6f,	// (0x0000d319) cell_toolbar2_fixed_pane_ParamLimits

0x3a6f,	// (0x0000d319) cell_toolbar2_fixed_pane

0x3a8a,	// (0x0000d334) cell_toolbar2_fixed_pane_g1

0xe9fd,	// (0x000182a7) toolbar2_fixed_button_pane

0x96b8,	// (0x00012f62) toolbar2_fixed_button_pane_g1

0x96c8,	// (0x00012f72) toolbar2_fixed_button_pane_g2

0x96c0,	// (0x00012f6a) toolbar2_fixed_button_pane_g3

0x96d8,	// (0x00012f82) toolbar2_fixed_button_pane_g4

0x96d0,	// (0x00012f7a) toolbar2_fixed_button_pane_g5

0x96e0,	// (0x00012f8a) toolbar2_fixed_button_pane_g6

0x96e8,	// (0x00012f92) toolbar2_fixed_button_pane_g7

0x96f8,	// (0x00012fa2) toolbar2_fixed_button_pane_g8

0x96f0,	// (0x00012f9a) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x00019106) toolbar2_fixed_button_pane_g

0xea05,	// (0x000182af) cell_toolbar2_float_pane_ParamLimits

0xea05,	// (0x000182af) cell_toolbar2_float_pane

0xea16,	// (0x000182c0) cell_toolbar2_float_pane_g1

0xe9fd,	// (0x000182a7) toolbar2_fixed_button_pane_cp

0x34a4,	// (0x0000cd4e) fep_vkb_accented_list_pane_ParamLimits

0x34a4,	// (0x0000cd4e) fep_vkb_accented_list_pane

0x6563,	// (0x0000fe0d) bg_popup_fep_shadow_pane_g9

0x8e5a,	// (0x00012704) bg_popup_fep_shadow_pane_cp3

0x8306,	// (0x00011bb0) list_accented_list_pane

0xea1f,	// (0x000182c9) list_single_accented_list_pane_ParamLimits

0xea1f,	// (0x000182c9) list_single_accented_list_pane

0x8e5a,	// (0x00012704) list_highlight_pane_cp10

0xea30,	// (0x000182da) list_single_accented_list_pane_t1

0xd19d,	// (0x00016a47) popup_slider_window_ParamLimits

0xd19d,	// (0x00016a47) popup_slider_window

0xe81a,	// (0x000180c4) aid_indentation_list_msg

0x3b69,	// (0x0000d413) bg_popup_window_pane_cp19

0xea96,	// (0x00018340) popup_slider_window_g1

0xeab2,	// (0x0001835c) popup_slider_window_g2

0xeaf6,	// (0x000183a0) popup_slider_window_g3

0x0005,

0xfce3,	// (0x0001958d) popup_slider_window_g

0xeb12,	// (0x000183bc) popup_slider_window_t1

0xeb56,	// (0x00018400) small_volume_slider_vertical_pane

0xbef1,	// (0x0001579b) small_volume_slider_vertical_pane_g1

0xbef1,	// (0x0001579b) small_volume_slider_vertical_pane_g2

0xeb72,	// (0x0001841c) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x0001959f) small_volume_slider_vertical_pane_g

0xca0f,	// (0x000162b9) area_side_right_pane_ParamLimits

0xca0f,	// (0x000162b9) area_side_right_pane

0xd3d7,	// (0x00016c81) aid_size_side_button_ParamLimits

0xd3d7,	// (0x00016c81) aid_size_side_button

0xd3f0,	// (0x00016c9a) grid_sctrl_middle_pane_ParamLimits

0xd3f0,	// (0x00016c9a) grid_sctrl_middle_pane

0x677a,	// (0x00010024) sctrl_sk_bottom_pane

0x678b,	// (0x00010035) sctrl_sk_top_pane

0x679d,	// (0x00010047) aid_touch_sctrl_top

0x67aa,	// (0x00010054) bg_sctrl_sk_pane_ParamLimits

0x67aa,	// (0x00010054) bg_sctrl_sk_pane

0x67b8,	// (0x00010062) sctrl_sk_top_pane_g1

0x67c5,	// (0x0001006f) sctrl_sk_top_pane_t1

0x679d,	// (0x00010047) aid_touch_sctrl_bottom

0x67aa,	// (0x00010054) bg_sctrl_sk_pane_cp_ParamLimits

0x67aa,	// (0x00010054) bg_sctrl_sk_pane_cp

0x67e0,	// (0x0001008a) sctrl_sk_bottom_pane_g1

0x67c5,	// (0x0001006f) sctrl_sk_bottom_pane_t1

0xd406,	// (0x00016cb0) cell_sctrl_middle_pane_ParamLimits

0xd406,	// (0x00016cb0) cell_sctrl_middle_pane

0xd417,	// (0x00016cc1) aid_touch_sctrl_middle_ParamLimits

0xd417,	// (0x00016cc1) aid_touch_sctrl_middle

0xd424,	// (0x00016cce) bg_sctrl_middle_pane_ParamLimits

0xd424,	// (0x00016cce) bg_sctrl_middle_pane

0x6de3,	// (0x0001068d) cell_sctrl_middle_pane_g1_ParamLimits

0x6de3,	// (0x0001068d) cell_sctrl_middle_pane_g1

0xd432,	// (0x00016cdc) cell_sctrl_middle_pane_g2_ParamLimits

0xd432,	// (0x00016cdc) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x000195ab) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x000195ab) cell_sctrl_middle_pane_g

0x96b8,	// (0x00012f62) bg_sctrl_middle_pane_g1

0x96c0,	// (0x00012f6a) bg_sctrl_middle_pane_g2

0x96c8,	// (0x00012f72) bg_sctrl_middle_pane_g3

0x96d0,	// (0x00012f7a) bg_sctrl_middle_pane_g4

0x96d8,	// (0x00012f82) bg_sctrl_middle_pane_g5

0x96e0,	// (0x00012f8a) bg_sctrl_middle_pane_g6

0x96e8,	// (0x00012f92) bg_sctrl_middle_pane_g7

0x96f0,	// (0x00012f9a) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x000195b0) bg_sctrl_middle_pane_g

0x96f8,	// (0x00012fa2) bg_sctrl_middle_pane_g8_copy1

0x96b8,	// (0x00012f62) bg_sctrl_sk_pane_g1

0x96c8,	// (0x00012f72) bg_sctrl_sk_pane_g2

0x96c0,	// (0x00012f6a) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x00019106) bg_sctrl_sk_pane_g

0x7a4e,	// (0x000112f8) aid_size_touch_scroll_bar

0x96d8,	// (0x00012f82) bg_sctrl_sk_pane_g4

0x96d0,	// (0x00012f7a) bg_sctrl_sk_pane_g5

0x96e0,	// (0x00012f8a) bg_sctrl_sk_pane_g6

0x96e8,	// (0x00012f92) bg_sctrl_sk_pane_g7

0x96f8,	// (0x00012fa2) bg_sctrl_sk_pane_g8

0x96f0,	// (0x00012f9a) bg_sctrl_sk_pane_g9

0x59d6,	// (0x0000f280) popup_fep_china_hwr2_fs_candidate_window

0xcd95,	// (0x0001663f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcd95,	// (0x0001663f) popup_fep_china_hwr2_fs_control_window

0x6583,	// (0x0000fe2d) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x000195a6) sctrl_sk_top_pane_g

0x3c88,	// (0x0000d532) aid_fep_china_hwr2_fs_cell_ParamLimits

0x3c88,	// (0x0000d532) aid_fep_china_hwr2_fs_cell

0x3c9c,	// (0x0000d546) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x3c9c,	// (0x0000d546) bg_popup_fep_shadow_pane_cp4

0x3cb3,	// (0x0000d55d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x3cb3,	// (0x0000d55d) bg_popup_fep_shadow_pane_cp5

0x3cc5,	// (0x0000d56f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x3cc5,	// (0x0000d56f) popup_fep_china_hwr2_fs_control_bar_grid

0x3cd9,	// (0x0000d583) popup_fep_china_hwr2_fs_control_funtion_grid

0xeb7b,	// (0x00018425) aid_fep_china_hwr2_fs_candi_cell

0x7265,	// (0x00010b0f) bg_popup_fep_shadow_pane_cp6

0xeb85,	// (0x0001842f) popup_fep_china_hwr2_fs_candidate_grid

0x3ce1,	// (0x0000d58b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x3ce1,	// (0x0000d58b) cell_fep_china_hwr2_fs_funtion_grid

0xbef1,	// (0x0001579b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xeb8d,	// (0x00018437) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xeb8d,	// (0x00018437) cell_fep_china_hwr2_fs_funtion_grid_g1

0xeb9b,	// (0x00018445) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xeb9b,	// (0x00018445) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x000195c1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x000195c1) cell_fep_china_hwr2_fs_funtion_grid_g

0x3cf9,	// (0x0000d5a3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x3cf9,	// (0x0000d5a3) cell_fep_china_hwr2_fs_funtion_grid_t1

0x3d0e,	// (0x0000d5b8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x3d0e,	// (0x0000d5b8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x000195c6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x000195c6) cell_fep_china_hwr2_fs_funtion_grid_t

0xebb1,	// (0x0001845b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xebb9,	// (0x00018463) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xebc1,	// (0x0001846b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x000195cb) popup_fep_china_hwr2_fs_control_bar_grid_g

0xebc9,	// (0x00018473) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xebc9,	// (0x00018473) cell_fep_china_hwr2_fs_candidate_grid

0xebe2,	// (0x0001848c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xebea,	// (0x00018494) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbef1,	// (0x0001579b) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbef1,	// (0x0001579b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3c,	// (0x000193e6) cell_fep_china_hwr2_fs_candidate_grid_g

0xebf2,	// (0x0001849c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9296,	// (0x00012b40) clock_nsta_pane_cp_24_ParamLimits

0x9296,	// (0x00012b40) clock_nsta_pane_cp_24

0x9314,	// (0x00012bbe) indicator_nsta_pane_cp_24_ParamLimits

0x9314,	// (0x00012bbe) indicator_nsta_pane_cp_24

0xa3da,	// (0x00013c84) heading_pane_g1

0x0001,

0xf8c1,	// (0x0001916b) heading_pane_g

0xae3a,	// (0x000146e4) grid_sct_catagory_button_pane

0xae6a,	// (0x00014714) scroll_pane_cp5_ParamLimits

0xbb5a,	// (0x00015404) button_value_adjust_pane_cp5_ParamLimits

0xbb5a,	// (0x00015404) button_value_adjust_pane_cp5

0xbc50,	// (0x000154fa) form2_midp_time_pane_ParamLimits

0xec00,	// (0x000184aa) cell_sct_catagory_button_pane_ParamLimits

0xec00,	// (0x000184aa) cell_sct_catagory_button_pane

0xbeb6,	// (0x00015760) bg_button_pane_cp01_ParamLimits

0xbeb6,	// (0x00015760) bg_button_pane_cp01

0xbef1,	// (0x0001579b) cell_sct_catagory_button_pane_g1

0xd20c,	// (0x00016ab6) popup_tb_extension_window

0x3d2a,	// (0x0000d5d4) aid_size_cell_ext_ParamLimits

0x3d2a,	// (0x0000d5d4) aid_size_cell_ext

0x792c,	// (0x000111d6) bg_tb_trans_pane_cp1_ParamLimits

0x792c,	// (0x000111d6) bg_tb_trans_pane_cp1

0x3d4c,	// (0x0000d5f6) grid_tb_ext_pane_ParamLimits

0x3d4c,	// (0x0000d5f6) grid_tb_ext_pane

0x3d7c,	// (0x0000d626) cell_tb_ext_pane_ParamLimits

0x3d7c,	// (0x0000d626) cell_tb_ext_pane

0x3da0,	// (0x0000d64a) cell_tb_ext_pane_g1_ParamLimits

0x3da0,	// (0x0000d64a) cell_tb_ext_pane_g1

0xec12,	// (0x000184bc) cell_tb_ext_pane_t1

0x75f2,	// (0x00010e9c) list_highlight_pane_cp11_ParamLimits

0x75f2,	// (0x00010e9c) list_highlight_pane_cp11

0xcaa0,	// (0x0001634a) popup_uni_indicator_window_ParamLimits

0xcaa0,	// (0x0001634a) popup_uni_indicator_window

0x804a,	// (0x000118f4) bg_popup_sub_pane_cp14

0xec2d,	// (0x000184d7) list_uniindi_pane

0xec39,	// (0x000184e3) uniindi_top_pane

0x75f2,	// (0x00010e9c) bg_uniindi_top_pane

0xec58,	// (0x00018502) uniindi_top_pane_g1

0xec6e,	// (0x00018518) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x000195d2) uniindi_top_pane_g

0xec98,	// (0x00018542) uniindi_top_pane_t1

0xecc2,	// (0x0001856c) list_single_uniindi_pane_ParamLimits

0xecc2,	// (0x0001856c) list_single_uniindi_pane

0xbef1,	// (0x0001579b) bg_uniindi_top_pane_g1

0xecd4,	// (0x0001857e) list_single_uniindi_pane_g1

0xece7,	// (0x00018591) list_single_uniindi_pane_t1

0x50c1,	// (0x0000e96b) control_bg_pane

0xed0c,	// (0x000185b6) bg_sctrl_sk_pane_cp1

0xed15,	// (0x000185bf) bg_sctrl_sk_pane_cp2

0xed1e,	// (0x000185c8) control_bg_pane_g1

0xed27,	// (0x000185d1) control_bg_pane_g2

0x0001,

0xfd31,	// (0x000195db) control_bg_pane_g

0xb9ce,	// (0x00015278) cell_indicator_nsta_pane_g1_ParamLimits

0x3288,	// (0x0000cb32) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa0,	// (0x0001934a) cell_indicator_nsta_pane_g_ParamLimits

0xbcce,	// (0x00015578) form2_midp_time_pane_t1_ParamLimits

0x6330,	// (0x0000fbda) main_idle_act4_pane_ParamLimits

0x6330,	// (0x0000fbda) main_idle_act4_pane

0xd20c,	// (0x00016ab6) popup_tb_extension_window_ParamLimits

0x3d68,	// (0x0000d612) tb_ext_find_pane_ParamLimits

0x3d68,	// (0x0000d612) tb_ext_find_pane

0xed30,	// (0x000185da) ai_gene_pane_1_cp1

0x8f95,	// (0x0001283f) ai_gene_pane_2_cp1

0xed38,	// (0x000185e2) list_single_idle_plugin_calendar_pane

0xed41,	// (0x000185eb) list_single_idle_plugin_notification_pane

0xed4a,	// (0x000185f4) list_single_idle_plugin_player_pane

0x3dbd,	// (0x0000d667) list_single_idle_plugin_shortcut_pane_ParamLimits

0x3dbd,	// (0x0000d667) list_single_idle_plugin_shortcut_pane

0x3ddd,	// (0x0000d687) main_idle_act4_pane_t1

0x3df3,	// (0x0000d69d) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x000195e0) main_idle_act4_pane_t

0x3e09,	// (0x0000d6b3) middle_sk_idle_act4_pane_ParamLimits

0x3e09,	// (0x0000d6b3) middle_sk_idle_act4_pane

0x3e25,	// (0x0000d6cf) popup_clock_digital_analogue_window_cp2

0x3e4b,	// (0x0000d6f5) shortcut_wheel_idle_act4_pane_ParamLimits

0x3e4b,	// (0x0000d6f5) shortcut_wheel_idle_act4_pane

0xbef1,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g1

0xbef1,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g2

0xbef1,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g3

0xbef1,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g4

0xbef1,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g5

0xed53,	// (0x000185fd) shortcut_wheel_idle_act4_pane_g6

0xed5b,	// (0x00018605) shortcut_wheel_idle_act4_pane_g7

0xed63,	// (0x0001860d) shortcut_wheel_idle_act4_pane_g8

0xed6b,	// (0x00018615) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x000195e5) shortcut_wheel_idle_act4_pane_g

0xeace,	// (0x00018378) middle_sk_idle_act4_pane_g1_ParamLimits

0xeace,	// (0x00018378) middle_sk_idle_act4_pane_g1

0x3ec6,	// (0x0000d770) middle_sk_idle_act4_pane_g2_ParamLimits

0x3ec6,	// (0x0000d770) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x00019608) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x00019608) middle_sk_idle_act4_pane_g

0x3ede,	// (0x0000d788) middle_sk_idle_act4_pane_t1_ParamLimits

0x3ede,	// (0x0000d788) middle_sk_idle_act4_pane_t1

0x3f0d,	// (0x0000d7b7) grid_ai_shortcut_pane_ParamLimits

0x3f0d,	// (0x0000d7b7) grid_ai_shortcut_pane

0x3f2a,	// (0x0000d7d4) list_highlight_pane_cp16_ParamLimits

0x3f2a,	// (0x0000d7d4) list_highlight_pane_cp16

0x3f37,	// (0x0000d7e1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x3f37,	// (0x0000d7e1) list_single_idle_plugin_shortcut_pane_g1

0x3f43,	// (0x0000d7ed) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x3f43,	// (0x0000d7ed) list_single_idle_plugin_shortcut_pane_g2

0x3f5f,	// (0x0000d809) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x3f5f,	// (0x0000d809) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x0001960d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x0001960d) list_single_idle_plugin_shortcut_pane_g

0x3f74,	// (0x0000d81e) cell_ai_shortcut_pane_ParamLimits

0x3f74,	// (0x0000d81e) cell_ai_shortcut_pane

0x3f8a,	// (0x0000d834) cell_ai_shortcut_pane_g1_ParamLimits

0x3f8a,	// (0x0000d834) cell_ai_shortcut_pane_g1

0xed30,	// (0x000185da) ai_gene_pane_1_cp2

0xed73,	// (0x0001861d) ai_gene_pane_2_cp2

0xed7b,	// (0x00018625) list_highlight_pane_cp15

0xed84,	// (0x0001862e) list_single_idle_plugin_calendar_pane_g1

0xed7b,	// (0x00018625) list_highlight_pane_cp17

0xed8c,	// (0x00018636) list_single_idle_plugin_calendar_pane_g1_copy1

0xed94,	// (0x0001863e) list_single_idle_plugin_player_pane_g1

0xb091,	// (0x0001493b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x00019614) list_single_idle_plugin_player_pane_g

0xed9c,	// (0x00018646) list_single_idle_plugin_player_pane_t1

0xedaa,	// (0x00018654) list_single_idle_plugin_player_pane_t2

0xedb8,	// (0x00018662) list_single_idle_plugin_player_pane_t3

0xedc6,	// (0x00018670) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x00019619) list_single_idle_plugin_player_pane_t

0xedd4,	// (0x0001867e) wait_bar_pane_cp15

0xeddc,	// (0x00018686) grid_ai_notification_pane

0xb091,	// (0x0001493b) list_single_idle_plugin_notification_pane_g1

0x3fac,	// (0x0000d856) cell_ai_notification_pane_ParamLimits

0x3fac,	// (0x0000d856) cell_ai_notification_pane

0xede5,	// (0x0001868f) cell_ai_notification_pane_g1

0xeded,	// (0x00018697) cell_ai_notification_pane_t1

0x3fb9,	// (0x0000d863) tb_ext_find_button_pane

0x3fc1,	// (0x0000d86b) tb_ext_find_pane_g1

0x3fc9,	// (0x0000d873) tb_ext_find_pane_t1

0x87fd,	// (0x000120a7) tb_ext_find_button_pane_g1

0xedfb,	// (0x000186a5) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x00019622) tb_ext_find_button_pane_g

0x3ddd,	// (0x0000d687) main_idle_act4_pane_t1_ParamLimits

0x3df3,	// (0x0000d69d) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x000195e0) main_idle_act4_pane_t_ParamLimits

0x3e25,	// (0x0000d6cf) popup_clock_digital_analogue_window_cp2_ParamLimits

0x3e3b,	// (0x0000d6e5) sat_plugin_idle_act4_pane_ParamLimits

0x3e3b,	// (0x0000d6e5) sat_plugin_idle_act4_pane

0x3fd7,	// (0x0000d881) sat_plugin_idle_act4_pane_t1_ParamLimits

0x3fd7,	// (0x0000d881) sat_plugin_idle_act4_pane_t1

0x3fef,	// (0x0000d899) sat_plugin_idle_act4_pane_t2_ParamLimits

0x3fef,	// (0x0000d899) sat_plugin_idle_act4_pane_t2

0x4007,	// (0x0000d8b1) sat_plugin_idle_act4_pane_t3_ParamLimits

0x4007,	// (0x0000d8b1) sat_plugin_idle_act4_pane_t3

0x401f,	// (0x0000d8c9) sat_plugin_idle_act4_pane_t4_ParamLimits

0x401f,	// (0x0000d8c9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x00019627) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x00019627) sat_plugin_idle_act4_pane_t

0x5186,	// (0x0000ea30) popup_battery_window_ParamLimits

0x5186,	// (0x0000ea30) popup_battery_window

0x75f2,	// (0x00010e9c) bg_popup_sub_pane_cp25_ParamLimits

0x75f2,	// (0x00010e9c) bg_popup_sub_pane_cp25

0xee04,	// (0x000186ae) popup_battery_window_g1_ParamLimits

0xee04,	// (0x000186ae) popup_battery_window_g1

0xee10,	// (0x000186ba) popup_battery_window_t1_ParamLimits

0xee10,	// (0x000186ba) popup_battery_window_t1

0xee22,	// (0x000186cc) popup_battery_window_t2_ParamLimits

0xee22,	// (0x000186cc) popup_battery_window_t2

0x0001,

0xfd86,	// (0x00019630) popup_battery_window_t_ParamLimits

0xfd86,	// (0x00019630) popup_battery_window_t

0x1fcc,	// (0x0000b876) midp_canvas_pane_ParamLimits

0x2021,	// (0x0000b8cb) midp_keypad_pane_ParamLimits

0x2021,	// (0x0000b8cb) midp_keypad_pane

0x919c,	// (0x00012a46) main_midp_pane_ParamLimits

0xba37,	// (0x000152e1) signal_pane_g2_cp_ParamLimits

0x4037,	// (0x0000d8e1) aid_size_cell_midp_keypad_ParamLimits

0x4037,	// (0x0000d8e1) aid_size_cell_midp_keypad

0x4054,	// (0x0000d8fe) midp_keyp_game_grid_pane_ParamLimits

0x4054,	// (0x0000d8fe) midp_keyp_game_grid_pane

0x4073,	// (0x0000d91d) midp_keyp_rocker_pane_ParamLimits

0x4073,	// (0x0000d91d) midp_keyp_rocker_pane

0x40b4,	// (0x0000d95e) midp_keyp_sk_left_pane_ParamLimits

0x40b4,	// (0x0000d95e) midp_keyp_sk_left_pane

0x4106,	// (0x0000d9b0) midp_keyp_sk_right_pane_ParamLimits

0x4106,	// (0x0000d9b0) midp_keyp_sk_right_pane

0x7265,	// (0x00010b0f) bg_button_pane_cp03

0x4152,	// (0x0000d9fc) midp_keyp_sk_left_pane_g1

0x7265,	// (0x00010b0f) bg_button_pane_cp04

0x4152,	// (0x0000d9fc) midp_keyp_sk_right_pane_g1

0xbef1,	// (0x0001579b) midp_keyp_rocker_pane_g1

0x415b,	// (0x0000da05) keyp_game_cell_pane_ParamLimits

0x415b,	// (0x0000da05) keyp_game_cell_pane

0x7265,	// (0x00010b0f) bg_button_pane_cp02

0x417d,	// (0x0000da27) keyp_game_cell_pane_g1

0xca51,	// (0x000162fb) popup_fep_vkb2_window_ParamLimits

0xca51,	// (0x000162fb) popup_fep_vkb2_window

0xd43e,	// (0x00016ce8) aid_size_cell_vkb2_ParamLimits

0xd43e,	// (0x00016ce8) aid_size_cell_vkb2

0xd474,	// (0x00016d1e) popup_fep_vkb2_window_g1_ParamLimits

0xd474,	// (0x00016d1e) popup_fep_vkb2_window_g1

0xd4c4,	// (0x00016d6e) vkb2_area_bottom_pane_ParamLimits

0xd4c4,	// (0x00016d6e) vkb2_area_bottom_pane

0xd502,	// (0x00016dac) vkb2_area_keypad_pane_ParamLimits

0xd502,	// (0x00016dac) vkb2_area_keypad_pane

0xd540,	// (0x00016dea) vkb2_area_top_pane_ParamLimits

0xd540,	// (0x00016dea) vkb2_area_top_pane

0xd5bc,	// (0x00016e66) vkb2_top_entry_pane_ParamLimits

0xd5bc,	// (0x00016e66) vkb2_top_entry_pane

0xd5e9,	// (0x00016e93) vkb2_top_grid_left_pane_ParamLimits

0xd5e9,	// (0x00016e93) vkb2_top_grid_left_pane

0xd609,	// (0x00016eb3) vkb2_top_grid_right_pane_ParamLimits

0xd609,	// (0x00016eb3) vkb2_top_grid_right_pane

0x6a24,	// (0x000102ce) vkb2_cell_keypad_pane_ParamLimits

0x6a24,	// (0x000102ce) vkb2_cell_keypad_pane

0xd64f,	// (0x00016ef9) vkb2_area_bottom_grid_pane_ParamLimits

0xd64f,	// (0x00016ef9) vkb2_area_bottom_grid_pane

0xd675,	// (0x00016f1f) vkb2_area_bottom_pane_g1_ParamLimits

0xd675,	// (0x00016f1f) vkb2_area_bottom_pane_g1

0xd69b,	// (0x00016f45) vkb2_area_bottom_pane_g2_ParamLimits

0xd69b,	// (0x00016f45) vkb2_area_bottom_pane_g2

0xd6cc,	// (0x00016f76) vkb2_area_bottom_pane_g3_ParamLimits

0xd6cc,	// (0x00016f76) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x00019635) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x00019635) vkb2_area_bottom_pane_g

0x6b9c,	// (0x00010446) vkb2_top_cell_left_pane_ParamLimits

0x6b9c,	// (0x00010446) vkb2_top_cell_left_pane

0x446a,	// (0x0000dd14) vkb2_top_entry_pane_g1_ParamLimits

0x446a,	// (0x0000dd14) vkb2_top_entry_pane_g1

0x4478,	// (0x0000dd22) vkb2_top_entry_pane_t1_ParamLimits

0x4478,	// (0x0000dd22) vkb2_top_entry_pane_t1

0xee47,	// (0x000186f1) vkb2_top_entry_pane_t2_ParamLimits

0xee47,	// (0x000186f1) vkb2_top_entry_pane_t2

0xee79,	// (0x00018723) vkb2_top_entry_pane_t3_ParamLimits

0xee79,	// (0x00018723) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x0001963c) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x0001963c) vkb2_top_entry_pane_t

0xd722,	// (0x00016fcc) vkb2_top_grid_right_pane_g1_ParamLimits

0xd722,	// (0x00016fcc) vkb2_top_grid_right_pane_g1

0x6bff,	// (0x000104a9) vkb2_top_grid_right_pane_g2_ParamLimits

0x6bff,	// (0x000104a9) vkb2_top_grid_right_pane_g2

0x6c17,	// (0x000104c1) vkb2_top_grid_right_pane_g3_ParamLimits

0x6c17,	// (0x000104c1) vkb2_top_grid_right_pane_g3

0xd738,	// (0x00016fe2) vkb2_top_grid_right_pane_g4_ParamLimits

0xd738,	// (0x00016fe2) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x00019643) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x00019643) vkb2_top_grid_right_pane_g

0x6c45,	// (0x000104ef) vkb2_top_cell_left_pane_g1

0x6c5c,	// (0x00010506) vkb2_cell_keypad_pane_g1_ParamLimits

0x6c5c,	// (0x00010506) vkb2_cell_keypad_pane_g1

0xee9d,	// (0x00018747) vkb2_cell_keypad_pane_t1_ParamLimits

0xee9d,	// (0x00018747) vkb2_cell_keypad_pane_t1

0x6c6a,	// (0x00010514) vkb2_cell_bottom_grid_pane_ParamLimits

0x6c6a,	// (0x00010514) vkb2_cell_bottom_grid_pane

0x6ca3,	// (0x0001054d) vkb2_cell_bottom_grid_pane_g1

0x3e6a,	// (0x0000d714) aid_call2_pane_cp02

0x3e72,	// (0x0000d71c) aid_call_pane_cp02

0x3e7a,	// (0x0000d724) clock_digital_number_pane_cp10

0x3e82,	// (0x0000d72c) clock_digital_number_pane_cp11

0x3e8a,	// (0x0000d734) clock_digital_number_pane_cp12

0x3e92,	// (0x0000d73c) clock_digital_number_pane_cp13

0x3e9a,	// (0x0000d744) clock_digital_separator_pane_cp10

0x87fd,	// (0x000120a7) popup_clock_digital_analogue_window_cp2_g1

0x87fd,	// (0x000120a7) popup_clock_digital_analogue_window_cp2_g2

0x3ea2,	// (0x0000d74c) popup_clock_digital_analogue_window_cp2_g3

0x87fd,	// (0x000120a7) popup_clock_digital_analogue_window_cp2_g4

0x3ea2,	// (0x0000d74c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x000195f8) popup_clock_digital_analogue_window_cp2_g

0x3eaa,	// (0x0000d754) popup_clock_digital_analogue_window_cp2_t1

0x3eb8,	// (0x0000d762) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x00019603) popup_clock_digital_analogue_window_cp2_t

0xbef1,	// (0x0001579b) clock_digital_number_pane_cp10_g1

0xbef1,	// (0x0001579b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3c,	// (0x000193e6) clock_digital_number_pane_cp10_g

0xbef1,	// (0x0001579b) clock_digital_separator_pane_cp10_g1

0xbef1,	// (0x0001579b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3c,	// (0x000193e6) clock_digital_separator_pane_cp10_g

0xec7a,	// (0x00018524) uniindi_top_pane_g3

0xec8b,	// (0x00018535) uniindi_top_pane_g4

0x6a8f,	// (0x00010339) vkb2_row_keypad_pane_ParamLimits

0x6a8f,	// (0x00010339) vkb2_row_keypad_pane

0x6cbf,	// (0x00010569) vkb2_cell_t_keypad_pane_ParamLimits

0x6cbf,	// (0x00010569) vkb2_cell_t_keypad_pane

0x6ccc,	// (0x00010576) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6ccc,	// (0x00010576) vkb2_cell_t_keypad_pane_cp08

0x6cdc,	// (0x00010586) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6cdc,	// (0x00010586) vkb2_cell_t_keypad_pane_cp09

0x6ced,	// (0x00010597) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6ced,	// (0x00010597) vkb2_cell_t_keypad_pane_cp01

0x6cfd,	// (0x000105a7) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6cfd,	// (0x000105a7) vkb2_cell_t_keypad_pane_cp02

0x6d0d,	// (0x000105b7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6d0d,	// (0x000105b7) vkb2_cell_t_keypad_pane_cp03

0x6d1d,	// (0x000105c7) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6d1d,	// (0x000105c7) vkb2_cell_t_keypad_pane_cp04

0x6d2d,	// (0x000105d7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6d2d,	// (0x000105d7) vkb2_cell_t_keypad_pane_cp05

0x6d3d,	// (0x000105e7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6d3d,	// (0x000105e7) vkb2_cell_t_keypad_pane_cp06

0x6d4d,	// (0x000105f7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6d4d,	// (0x000105f7) vkb2_cell_t_keypad_pane_cp07

0x6d5d,	// (0x00010607) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6d5d,	// (0x00010607) vkb2_cell_t_keypad_pane_cp10

0x6583,	// (0x0000fe2d) vkb2_cell_t_keypad_pane_g1

0xeeb4,	// (0x0001875e) vkb2_cell_t_keypad_pane_t1

0x50c1,	// (0x0000e96b) popup_grid_graphic2_window

0x44dd,	// (0x0000dd87) aid_size_cell_graphic2_ParamLimits

0x44dd,	// (0x0000dd87) aid_size_cell_graphic2

0x451b,	// (0x0000ddc5) bg_popup_window_pane_cp21_ParamLimits

0x451b,	// (0x0000ddc5) bg_popup_window_pane_cp21

0x4529,	// (0x0000ddd3) graphic2_pages_pane_ParamLimits

0x4529,	// (0x0000ddd3) graphic2_pages_pane

0x4572,	// (0x0000de1c) grid_graphic2_control_pane_ParamLimits

0x4572,	// (0x0000de1c) grid_graphic2_control_pane

0x45b0,	// (0x0000de5a) grid_graphic2_pane_ParamLimits

0x45b0,	// (0x0000de5a) grid_graphic2_pane

0x461f,	// (0x0000dec9) cell_graphic2_pane

0x50c1,	// (0x0000e96b) main_comp_mode_pane

0xe8cd,	// (0x00018177) list_ai3_gene_pane_ParamLimits

0x3b69,	// (0x0000d413) bg_popup_window_pane_cp19_ParamLimits

0xea3e,	// (0x000182e8) bg_touch_area_indi_pane_ParamLimits

0xea3e,	// (0x000182e8) bg_touch_area_indi_pane

0xea54,	// (0x000182fe) bg_touch_area_indi_pane_cp01_ParamLimits

0xea54,	// (0x000182fe) bg_touch_area_indi_pane_cp01

0xea6a,	// (0x00018314) bg_touch_area_indi_pane_cp02_ParamLimits

0xea6a,	// (0x00018314) bg_touch_area_indi_pane_cp02

0xea80,	// (0x0001832a) bg_touch_area_indi_pane_cp03_ParamLimits

0xea80,	// (0x0001832a) bg_touch_area_indi_pane_cp03

0xea96,	// (0x00018340) popup_slider_window_g1_ParamLimits

0xeab2,	// (0x0001835c) popup_slider_window_g2_ParamLimits

0xeaf6,	// (0x000183a0) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x0001958d) popup_slider_window_g_ParamLimits

0xeb12,	// (0x000183bc) popup_slider_window_t1_ParamLimits

0xeb56,	// (0x00018400) small_volume_slider_vertical_pane_ParamLimits

0x461f,	// (0x0000dec9) cell_graphic2_pane_ParamLimits

0x4668,	// (0x0000df12) bg_button_pane_cp10_ParamLimits

0x4668,	// (0x0000df12) bg_button_pane_cp10

0x467b,	// (0x0000df25) bg_button_pane_cp11_ParamLimits

0x467b,	// (0x0000df25) bg_button_pane_cp11

0x468e,	// (0x0000df38) graphic2_pages_pane_g1_ParamLimits

0x468e,	// (0x0000df38) graphic2_pages_pane_g1

0x46a9,	// (0x0000df53) graphic2_pages_pane_g2_ParamLimits

0x46a9,	// (0x0000df53) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x00019651) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x00019651) graphic2_pages_pane_g

0x46c1,	// (0x0000df6b) graphic2_pages_pane_t1_ParamLimits

0x46c1,	// (0x0000df6b) graphic2_pages_pane_t1

0x46d9,	// (0x0000df83) cell_graphic2_control_pane_ParamLimits

0x46d9,	// (0x0000df83) cell_graphic2_control_pane

0x4703,	// (0x0000dfad) cell_graphic2_pane_g1_ParamLimits

0x4703,	// (0x0000dfad) cell_graphic2_pane_g1

0xeadc,	// (0x00018386) cell_graphic2_pane_g2_ParamLimits

0xeadc,	// (0x00018386) cell_graphic2_pane_g2

0x4710,	// (0x0000dfba) cell_graphic2_pane_g3_ParamLimits

0x4710,	// (0x0000dfba) cell_graphic2_pane_g3

0xeae9,	// (0x00018393) cell_graphic2_pane_g4_ParamLimits

0xeae9,	// (0x00018393) cell_graphic2_pane_g4

0x471d,	// (0x0000dfc7) cell_graphic2_pane_g5_ParamLimits

0x471d,	// (0x0000dfc7) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x00019656) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x00019656) cell_graphic2_pane_g

0x473d,	// (0x0000dfe7) cell_graphic2_pane_t1_ParamLimits

0x473d,	// (0x0000dfe7) cell_graphic2_pane_t1

0xa3ce,	// (0x00013c78) grid_highlight_pane_cp11_ParamLimits

0xa3ce,	// (0x00013c78) grid_highlight_pane_cp11

0x75f2,	// (0x00010e9c) bg_button_pane_cp05

0x4785,	// (0x0000e02f) cell_graphic2_control_pane_g1

0xbef1,	// (0x0001579b) bg_touch_area_indi_pane_g1

0xeec6,	// (0x00018770) aid_cmod_rocker_key_size

0xeed0,	// (0x0001877a) aid_cmode_itu_key_size

0xeeda,	// (0x00018784) main_cmode_video_pane

0xeee2,	// (0x0001878c) main_comp_mode_itu_pane

0xeeec,	// (0x00018796) main_comp_mode_rocker_pane

0xeef4,	// (0x0001879e) cell_cmode_rocker_pane_ParamLimits

0xeef4,	// (0x0001879e) cell_cmode_rocker_pane

0xef06,	// (0x000187b0) cell_cmode_itu_pane_ParamLimits

0xef06,	// (0x000187b0) cell_cmode_itu_pane

0x804a,	// (0x000118f4) bg_button_pane_cp06_ParamLimits

0x804a,	// (0x000118f4) bg_button_pane_cp06

0xdab3,	// (0x0001735d) cell_cmode_rocker_pane_g1_ParamLimits

0xdab3,	// (0x0001735d) cell_cmode_rocker_pane_g1

0xeb8d,	// (0x00018437) cell_cmode_rocker_pane_g2_ParamLimits

0xeb8d,	// (0x00018437) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x00019666) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x00019666) cell_cmode_rocker_pane_g

0x7265,	// (0x00010b0f) bg_button_pane_cp07

0xef1b,	// (0x000187c5) cell_cmode_itu_pane_g1

0xef45,	// (0x000187ef) cell_cmode_itu_pane_t1

0xef53,	// (0x000187fd) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x0001966b) cell_cmode_itu_pane_t

0xecfc,	// (0x000185a6) aid_touch_ctrl_left

0xed04,	// (0x000185ae) aid_touch_ctrl_right

0x7265,	// (0x00010b0f) compa_mode_pane

0x47ad,	// (0x0000e057) aid_cmod_rocker_key_size_cp

0x47b7,	// (0x0000e061) aid_cmode_itu_key_size_cp

0xef61,	// (0x0001880b) compa_mode_pane_g1

0xef69,	// (0x00018813) compa_mode_pane_g2

0xef71,	// (0x0001881b) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x00019670) compa_mode_pane_g

0x47c1,	// (0x0000e06b) main_comp_mode_itu_pane_cp

0x47c9,	// (0x0000e073) main_comp_mode_rocker_pane_cp

0x47d1,	// (0x0000e07b) cell_cmode_itu_pane_cp_ParamLimits

0x47d1,	// (0x0000e07b) cell_cmode_itu_pane_cp

0x47e6,	// (0x0000e090) cell_cmode_rocker_pane_cp_ParamLimits

0x47e6,	// (0x0000e090) cell_cmode_rocker_pane_cp

0x804a,	// (0x000118f4) bg_button_pane_cp06_cp_ParamLimits

0x804a,	// (0x000118f4) bg_button_pane_cp06_cp

0xdab3,	// (0x0001735d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xdab3,	// (0x0001735d) cell_cmode_rocker_pane_g1_cp

0xbef1,	// (0x0001579b) cell_cmode_rocker_pane_g2_cp

0x7265,	// (0x00010b0f) bg_button_pane_cp07_cp

0x47f8,	// (0x0000e0a2) cell_cmode_itu_pane_g1_cp

0x4801,	// (0x0000e0ab) cell_cmode_itu_pane_t1_cp

0x4801,	// (0x0000e0ab) cell_cmode_itu_pane_t2_cp

0x307a,	// (0x0000c924) settings_code_pane_cp2

0x7359,	// (0x00010c03) bg_popup_window_pane_cp3_ParamLimits

0x77ca,	// (0x00011074) heading_pane_cp3_ParamLimits

0x77d6,	// (0x00011080) listscroll_popup_graphic_pane_ParamLimits

0x633e,	// (0x0000fbe8) fep_hwr_aid_pane_ParamLimits

0x679d,	// (0x00010047) aid_touch_sctrl_top_ParamLimits

0x67b8,	// (0x00010062) sctrl_sk_top_pane_g1_ParamLimits

0x6583,	// (0x0000fe2d) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x000195a6) sctrl_sk_top_pane_g_ParamLimits

0x67c5,	// (0x0001006f) sctrl_sk_top_pane_t1_ParamLimits

0x679d,	// (0x00010047) aid_touch_sctrl_bottom_ParamLimits

0x67c5,	// (0x0001006f) sctrl_sk_bottom_pane_t1_ParamLimits

0xec46,	// (0x000184f0) aid_area_touch_clock

0xd57e,	// (0x00016e28) aid_vkb2_area_top_pane_cell_ParamLimits

0xd57e,	// (0x00016e28) aid_vkb2_area_top_pane_cell

0xd629,	// (0x00016ed3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd629,	// (0x00016ed3) aid_vkb2_area_bottom_pane_cell

0xee3f,	// (0x000186e9) popup_char_count_window

0xef79,	// (0x00018823) popup_char_count_window_g1

0xef82,	// (0x0001882c) popup_char_count_window_g2

0xef8b,	// (0x00018835) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x00019677) popup_char_count_window_g

0xef94,	// (0x0001883e) popup_char_count_window_t1

0x6874,	// (0x0001011e) popup_fep_char_preview_window_ParamLimits

0x6874,	// (0x0001011e) popup_fep_char_preview_window

0xd59e,	// (0x00016e48) vkb2_top_candi_pane_ParamLimits

0xd59e,	// (0x00016e48) vkb2_top_candi_pane

0x480f,	// (0x0000e0b9) cell_vkb2_top_candi_pane_ParamLimits

0x480f,	// (0x0000e0b9) cell_vkb2_top_candi_pane

0x6d72,	// (0x0001061c) bg_popup_fep_char_preview_window_ParamLimits

0x6d72,	// (0x0001061c) bg_popup_fep_char_preview_window

0x6d80,	// (0x0001062a) popup_fep_char_preview_window_t1_ParamLimits

0x6d80,	// (0x0001062a) popup_fep_char_preview_window_t1

0xefa2,	// (0x0001884c) bg_popup_fep_char_preview_window_g1

0xefaa,	// (0x00018854) bg_popup_fep_char_preview_window_g2

0xefb2,	// (0x0001885c) bg_popup_fep_char_preview_window_g3

0xefba,	// (0x00018864) bg_popup_fep_char_preview_window_g4

0xefc2,	// (0x0001886c) bg_popup_fep_char_preview_window_g5

0x6dba,	// (0x00010664) bg_popup_fep_char_preview_window_g6

0xefca,	// (0x00018874) bg_popup_fep_char_preview_window_g7

0xefd2,	// (0x0001887c) bg_popup_fep_char_preview_window_g8

0xefda,	// (0x00018884) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x0001967e) bg_popup_fep_char_preview_window_g

0x6583,	// (0x0000fe2d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6583,	// (0x0000fe2d) cell_vkb2_top_candi_pane_g1

0x6591,	// (0x0000fe3b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6591,	// (0x0000fe3b) cell_vkb2_top_candi_pane_g2

0xef24,	// (0x000187ce) cell_vkb2_top_candi_pane_g3_ParamLimits

0xef24,	// (0x000187ce) cell_vkb2_top_candi_pane_g3

0x6dc2,	// (0x0001066c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6dc2,	// (0x0001066c) cell_vkb2_top_candi_pane_g4

0xe039,	// (0x000178e3) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe039,	// (0x000178e3) cell_vkb2_top_candi_pane_g5

0x6de3,	// (0x0001068d) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6de3,	// (0x0001068d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x00019691) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x00019691) cell_vkb2_top_candi_pane_g

0x6df1,	// (0x0001069b) cell_vkb2_top_candi_pane_t1

0x614d,	// (0x0000f9f7) aid_size_touch_slider_mark_ParamLimits

0x614d,	// (0x0000f9f7) aid_size_touch_slider_mark

0x455d,	// (0x0000de07) grid_graphic2_catg_pane_ParamLimits

0x455d,	// (0x0000de07) grid_graphic2_catg_pane

0x45f4,	// (0x0000de9e) popup_grid_graphic2_window_t1_ParamLimits

0x45f4,	// (0x0000de9e) popup_grid_graphic2_window_t1

0x4609,	// (0x0000deb3) popup_grid_graphic2_window_t2_ParamLimits

0x4609,	// (0x0000deb3) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x0001964c) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x0001964c) popup_grid_graphic2_window_t

0x75f2,	// (0x00010e9c) bg_button_pane_cp05_ParamLimits

0x4785,	// (0x0000e02f) cell_graphic2_control_pane_g1_ParamLimits

0xecc2,	// (0x0001856c) cell_graphic2_catg_pane_ParamLimits

0xecc2,	// (0x0001856c) cell_graphic2_catg_pane

0x7265,	// (0x00010b0f) bg_button_pane_cp12

0x4859,	// (0x0000e103) cell_graphic2_catg_pane_g1

0xec12,	// (0x000184bc) cell_tb_ext_pane_t1_ParamLimits

0x6bbc,	// (0x00010466) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6bbc,	// (0x00010466) vkb2_top_cell_right_narrow_pane

0x6bd4,	// (0x0001047e) vkb2_top_cell_right_wide_pane_ParamLimits

0x6bd4,	// (0x0001047e) vkb2_top_cell_right_wide_pane

0x6330,	// (0x0000fbda) bg_vkb2_func_pane_ParamLimits

0x6330,	// (0x0000fbda) bg_vkb2_func_pane

0x6c45,	// (0x000104ef) vkb2_top_cell_left_pane_g1_ParamLimits

0x6330,	// (0x0000fbda) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6330,	// (0x0000fbda) bg_vkb2_fuc_pane_cp03

0x6ca3,	// (0x0001054d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x96c0,	// (0x00012f6a) bg_vkb2_func_pane_g1

0x96c8,	// (0x00012f72) bg_vkb2_func_pane_g2

0x96d8,	// (0x00012f82) bg_vkb2_func_pane_g3

0x96d0,	// (0x00012f7a) bg_vkb2_func_pane_g4

0x96e0,	// (0x00012f8a) bg_vkb2_func_pane_g5

0x96e8,	// (0x00012f92) bg_vkb2_func_pane_g6

0x96f0,	// (0x00012f9a) bg_vkb2_func_pane_g7

0x96f8,	// (0x00012fa2) bg_vkb2_func_pane_g8

0x96b8,	// (0x00012f62) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x0001969e) bg_vkb2_func_pane_g

0x6330,	// (0x0000fbda) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6330,	// (0x0000fbda) bg_vkb2_fuc_pane_cp01

0x6c45,	// (0x000104ef) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6c45,	// (0x000104ef) vkb2_top_cell_right_wide_pane_g1

0x6330,	// (0x0000fbda) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6330,	// (0x0000fbda) bg_vkb2_fuc_pane_cp02

0x6ca3,	// (0x0001054d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6ca3,	// (0x0001054d) vkb2_top_cell_right_narrow_pane_g1

0x3ab7,	// (0x0000d361) aid_touch_area_decrease_ParamLimits

0x3ab7,	// (0x0000d361) aid_touch_area_decrease

0x3ae5,	// (0x0000d38f) aid_touch_area_increase_ParamLimits

0x3ae5,	// (0x0000d38f) aid_touch_area_increase

0x3b0d,	// (0x0000d3b7) aid_touch_area_mute_ParamLimits

0x3b0d,	// (0x0000d3b7) aid_touch_area_mute

0x3b35,	// (0x0000d3df) aid_touch_area_slider_ParamLimits

0x3b35,	// (0x0000d3df) aid_touch_area_slider

0x3b75,	// (0x0000d41f) popup_slider_window_g4_ParamLimits

0x3b75,	// (0x0000d41f) popup_slider_window_g4

0x3b9d,	// (0x0000d447) popup_slider_window_g5_ParamLimits

0x3b9d,	// (0x0000d447) popup_slider_window_g5

0x3bd1,	// (0x0000d47b) popup_slider_window_g6_ParamLimits

0x3bd1,	// (0x0000d47b) popup_slider_window_g6

0xeb3e,	// (0x000183e8) popup_slider_window_t2_ParamLimits

0xeb3e,	// (0x000183e8) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x0001959a) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x0001959a) popup_slider_window_t

0x3bed,	// (0x0000d497) slider_pane_ParamLimits

0x3bed,	// (0x0000d497) slider_pane

0xefe2,	// (0x0001888c) slider_pane_g1_ParamLimits

0xefe2,	// (0x0001888c) slider_pane_g1

0xeff6,	// (0x000188a0) slider_pane_g2_ParamLimits

0xeff6,	// (0x000188a0) slider_pane_g2

0xf00c,	// (0x000188b6) slider_pane_g3_ParamLimits

0xf00c,	// (0x000188b6) slider_pane_g3

0x0003,

0xfe07,	// (0x000196b1) slider_pane_g_ParamLimits

0xfe07,	// (0x000196b1) slider_pane_g

0xd244,	// (0x00016aee) popup_tb_float_extension_window_ParamLimits

0xd244,	// (0x00016aee) popup_tb_float_extension_window

0xf038,	// (0x000188e2) aid_size_cell_tb_float_ext

0x7265,	// (0x00010b0f) bg_popup_sub_window_cp28

0xf043,	// (0x000188ed) grid_tb_float_ext_pane

0xf04b,	// (0x000188f5) cell_tb_float_ext_pane_ParamLimits

0xf04b,	// (0x000188f5) cell_tb_float_ext_pane

0xf063,	// (0x0001890d) cell_tb_float_ext_pane_g1

0xf06c,	// (0x00018916) grid_highlight_pane_cp12

0xd3b5,	// (0x00016c5f) cell_last_hwr_side_pane_ParamLimits

0xd3b5,	// (0x00016c5f) cell_last_hwr_side_pane

0xbef1,	// (0x0001579b) cell_last_hwr_side_pane_g1

0xf075,	// (0x0001891f) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x000196ba) cell_last_hwr_side_pane_g

0xd6fd,	// (0x00016fa7) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd6fd,	// (0x00016fa7) vkb2_area_bottom_space_btn_pane

0x6583,	// (0x0000fe2d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xeeb4,	// (0x0001875e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6df1,	// (0x0001069b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6e0f,	// (0x000106b9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6e0f,	// (0x000106b9) vkb2_area_bottom_space_btn_pane_g1

0x6e45,	// (0x000106ef) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6e45,	// (0x000106ef) vkb2_area_bottom_space_btn_pane_g2

0x6e7b,	// (0x00010725) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6e7b,	// (0x00010725) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x000196bf) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x000196bf) vkb2_area_bottom_space_btn_pane_g

0x63ed,	// (0x0000fc97) cel_fep_hwr_func_pane_ParamLimits

0x63ed,	// (0x0000fc97) cel_fep_hwr_func_pane

0xd38a,	// (0x00016c34) cell_hwr_side_button_pane_ParamLimits

0xd38a,	// (0x00016c34) cell_hwr_side_button_pane

0xec46,	// (0x000184f0) aid_area_touch_clock_ParamLimits

0x75f2,	// (0x00010e9c) bg_uniindi_top_pane_ParamLimits

0xec58,	// (0x00018502) uniindi_top_pane_g1_ParamLimits

0xec6e,	// (0x00018518) uniindi_top_pane_g2_ParamLimits

0xec7a,	// (0x00018524) uniindi_top_pane_g3_ParamLimits

0xec8b,	// (0x00018535) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x000195d2) uniindi_top_pane_g_ParamLimits

0xec98,	// (0x00018542) uniindi_top_pane_t1_ParamLimits

0x75f2,	// (0x00010e9c) bg_vkb2_func_pane_cp01_ParamLimits

0x75f2,	// (0x00010e9c) bg_vkb2_func_pane_cp01

0xf07e,	// (0x00018928) cel_fep_hwr_func_pane_g1_ParamLimits

0xf07e,	// (0x00018928) cel_fep_hwr_func_pane_g1

0x75f2,	// (0x00010e9c) bg_vkb2_func_pane_cp02_ParamLimits

0x75f2,	// (0x00010e9c) bg_vkb2_func_pane_cp02

0xf07e,	// (0x00018928) cell_hwr_side_button_pane_g1_ParamLimits

0xf07e,	// (0x00018928) cell_hwr_side_button_pane_g1

0x9517,	// (0x00012dc1) status_pane_g4_ParamLimits

0x9517,	// (0x00012dc1) status_pane_g4

0x952f,	// (0x00012dd9) status_pane_t1

0xbce1,	// (0x0001558b) form2_midp_gauge_slider_cont_pane

0xbce9,	// (0x00015593) form2_midp_gauge_slider_pane_t1_ParamLimits

0x33d2,	// (0x0000cc7c) form2_midp_gauge_slider_pane_t2_ParamLimits

0x33e4,	// (0x0000cc8e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaef,	// (0x00019399) form2_midp_gauge_slider_pane_t_ParamLimits

0xbd1f,	// (0x000155c9) form2_midp_slider_pane_ParamLimits

0x6834,	// (0x000100de) aid_size_cell_func_vkb2_ParamLimits

0x6834,	// (0x000100de) aid_size_cell_func_vkb2

0xf024,	// (0x000188ce) slider_pane_g4_ParamLimits

0xf024,	// (0x000188ce) slider_pane_g4

0xd74e,	// (0x00016ff8) form2_midp_gauge_slider_pane_t2_cp01

0xd75c,	// (0x00017006) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd75c,	// (0x00017006) form2_midp_gauge_slider_pane_t3_cp01

0x6eec,	// (0x00010796) form2_midp_slider_pane_cp01

0x7265,	// (0x00010b0f) navi_smil_pane

0xf0ae,	// (0x00018958) navi_smil_pane_g1

0xf0b6,	// (0x00018960) navi_smil_pane_t1

0xf08c,	// (0x00018936) form2_midp_slider_pane_g1

0xf095,	// (0x0001893f) form2_midp_slider_pane_g2

0xf09d,	// (0x00018947) form2_midp_slider_pane_g3

0xf08c,	// (0x00018936) form2_midp_slider_pane_g4

0x488d,	// (0x0000e137) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x000196c8) form2_midp_slider_pane_g

0x6eb1,	// (0x0001075b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6eb1,	// (0x0001075b) vkb2_area_bottom_space_btn_pane_g4

0x299e,	// (0x0000c248) lc0_navi_pane_ParamLimits

0x299e,	// (0x0000c248) lc0_navi_pane

0x2a08,	// (0x0000c2b2) lc0_stat_indi_pane_ParamLimits

0x2a08,	// (0x0000c2b2) lc0_stat_indi_pane

0x2a1d,	// (0x0000c2c7) ls0_title_pane_ParamLimits

0x2a1d,	// (0x0000c2c7) ls0_title_pane

0x804a,	// (0x000118f4) bg_popup_sub_pane_cp14_ParamLimits

0xec2d,	// (0x000184d7) list_uniindi_pane_ParamLimits

0xec39,	// (0x000184e3) uniindi_top_pane_ParamLimits

0xecd4,	// (0x0001857e) list_single_uniindi_pane_g1_ParamLimits

0xece7,	// (0x00018591) list_single_uniindi_pane_t1_ParamLimits

0xd779,	// (0x00017023) lc0_stat_clock_pane_ParamLimits

0xd779,	// (0x00017023) lc0_stat_clock_pane

0x48b0,	// (0x0000e15a) lc0_stat_indi_pane_g1_ParamLimits

0x48b0,	// (0x0000e15a) lc0_stat_indi_pane_g1

0x48a3,	// (0x0000e14d) lc0_stat_indi_pane_g2_ParamLimits

0x48a3,	// (0x0000e14d) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x000196d3) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x000196d3) lc0_stat_indi_pane_g

0xd786,	// (0x00017030) lc0_uni_indicator_pane_ParamLimits

0xd786,	// (0x00017030) lc0_uni_indicator_pane

0xf0c4,	// (0x0001896e) ls0_title_pane_g1_ParamLimits

0xf0c4,	// (0x0001896e) ls0_title_pane_g1

0x48ca,	// (0x0000e174) ls0_title_pane_t1_ParamLimits

0x48ca,	// (0x0000e174) ls0_title_pane_t1

0xd793,	// (0x0001703d) lc0_uni_indicator_pane_g1_ParamLimits

0xd793,	// (0x0001703d) lc0_uni_indicator_pane_g1

0xf0d8,	// (0x00018982) lc0_stat_clock_pane_t1

0x50c1,	// (0x0000e96b) main_ai5_pane

0xf0e6,	// (0x00018990) ai5_sk_pane_ParamLimits

0xf0e6,	// (0x00018990) ai5_sk_pane

0x490d,	// (0x0000e1b7) cell_ai5_widget_pane_ParamLimits

0x490d,	// (0x0000e1b7) cell_ai5_widget_pane

0xf0f3,	// (0x0001899d) aid_size_cell_widget_grid

0xf101,	// (0x000189ab) bg_ai5_widget_pane_ParamLimits

0xf101,	// (0x000189ab) bg_ai5_widget_pane

0xf155,	// (0x000189ff) cell_ai5_widget_pane_g2

0xf165,	// (0x00018a0f) cell_ai5_widget_pane_g3

0xf17c,	// (0x00018a26) cell_ai5_widget_pane_g4

0xf188,	// (0x00018a32) cell_ai5_widget_pane_g5

0xf194,	// (0x00018a3e) cell_ai5_widget_pane_g6

0xf1a0,	// (0x00018a4a) cell_ai5_widget_pane_g7

0xf1e8,	// (0x00018a92) cell_ai5_widget_pane_t1_ParamLimits

0xf1e8,	// (0x00018a92) cell_ai5_widget_pane_t1

0xf205,	// (0x00018aaf) cell_ai5_widget_pane_t2_ParamLimits

0xf205,	// (0x00018aaf) cell_ai5_widget_pane_t2

0xf21d,	// (0x00018ac7) cell_ai5_widget_pane_t3_ParamLimits

0xf21d,	// (0x00018ac7) cell_ai5_widget_pane_t3

0xf235,	// (0x00018adf) cell_ai5_widget_pane_t4_ParamLimits

0xf235,	// (0x00018adf) cell_ai5_widget_pane_t4

0xf252,	// (0x00018afc) cell_ai5_widget_pane_t5_ParamLimits

0xf252,	// (0x00018afc) cell_ai5_widget_pane_t5

0xf271,	// (0x00018b1b) cell_ai5_widget_pane_t6_ParamLimits

0xf271,	// (0x00018b1b) cell_ai5_widget_pane_t6

0xf283,	// (0x00018b2d) cell_ai5_widget_pane_t7_ParamLimits

0xf283,	// (0x00018b2d) cell_ai5_widget_pane_t7

0xf29c,	// (0x00018b46) cell_ai5_widget_pane_t8_ParamLimits

0xf29c,	// (0x00018b46) cell_ai5_widget_pane_t8

0x0009,

0xfe43,	// (0x000196ed) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x000196ed) cell_ai5_widget_pane_t

0xf2f0,	// (0x00018b9a) grid_ai5_widget_pane

0x804a,	// (0x000118f4) highlight_cell_ai5_widget_pane_ParamLimits

0x804a,	// (0x000118f4) highlight_cell_ai5_widget_pane

0x496b,	// (0x0000e215) ai5_sk_left_pane

0x4975,	// (0x0000e21f) ai5_sk_middle_pane

0x497f,	// (0x0000e229) ai5_sk_right_pane

0xf2fc,	// (0x00018ba6) bg_ai5_widget_pane_g1_ParamLimits

0xf2fc,	// (0x00018ba6) bg_ai5_widget_pane_g1

0xf308,	// (0x00018bb2) bg_ai5_widget_pane_g2_ParamLimits

0xf308,	// (0x00018bb2) bg_ai5_widget_pane_g2

0xf314,	// (0x00018bbe) bg_ai5_widget_pane_g3_ParamLimits

0xf314,	// (0x00018bbe) bg_ai5_widget_pane_g3

0xf320,	// (0x00018bca) bg_ai5_widget_pane_g4_ParamLimits

0xf320,	// (0x00018bca) bg_ai5_widget_pane_g4

0xf32c,	// (0x00018bd6) bg_ai5_widget_pane_g5_ParamLimits

0xf32c,	// (0x00018bd6) bg_ai5_widget_pane_g5

0xf338,	// (0x00018be2) bg_ai5_widget_pane_g6_ParamLimits

0xf338,	// (0x00018be2) bg_ai5_widget_pane_g6

0xf344,	// (0x00018bee) bg_ai5_widget_pane_g7_ParamLimits

0xf344,	// (0x00018bee) bg_ai5_widget_pane_g7

0xf350,	// (0x00018bfa) bg_ai5_widget_pane_g8_ParamLimits

0xf350,	// (0x00018bfa) bg_ai5_widget_pane_g8

0xf35c,	// (0x00018c06) bg_ai5_widget_pane_g9_ParamLimits

0xf35c,	// (0x00018c06) bg_ai5_widget_pane_g9

0x0008,

0xfe58,	// (0x00019702) bg_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x00019702) bg_ai5_widget_pane_g

0xf38e,	// (0x00018c38) cell_shortcut_ai5_widget_pane_ParamLimits

0xf38e,	// (0x00018c38) cell_shortcut_ai5_widget_pane

0x8e5a,	// (0x00012704) bg_cell_shortcut_ai5_widget_pane

0xf39f,	// (0x00018c49) cell_grid_ai5_widget_pane_g1

0x8e5a,	// (0x00012704) highlight_cell_shortcut_ai5_widget_pane

0x96c0,	// (0x00012f6a) ai5_sk_left_pane_g1

0xf3a8,	// (0x00018c52) ai5_sk_left_pane_g2

0xf3b0,	// (0x00018c5a) ai5_sk_left_pane_g3

0xf3b8,	// (0x00018c62) ai5_sk_left_pane_g4

0x0003,

0xfe6b,	// (0x00019715) ai5_sk_left_pane_g

0xf3c0,	// (0x00018c6a) ai5_sk_left_pane_t1

0x96c8,	// (0x00012f72) ai5_sk_right_pane_g1

0xf3ce,	// (0x00018c78) ai5_sk_right_pane_g2

0xf3d6,	// (0x00018c80) ai5_sk_right_pane_g3

0xf3de,	// (0x00018c88) ai5_sk_right_pane_g4

0x0003,

0xfe74,	// (0x0001971e) ai5_sk_right_pane_g

0xf3e6,	// (0x00018c90) ai5_sk_right_pane_t1

0x96c8,	// (0x00012f72) ai5_sk_middle_pane_g1

0x96c0,	// (0x00012f6a) ai5_sk_middle_pane_g2

0x96e0,	// (0x00012f8a) ai5_sk_middle_pane_g3

0xf3d6,	// (0x00018c80) ai5_sk_middle_pane_g4

0xf3b0,	// (0x00018c5a) ai5_sk_middle_pane_g5

0xf3f4,	// (0x00018c9e) ai5_sk_middle_pane_g6

0x4989,	// (0x0000e233) ai5_sk_middle_pane_g7

0x0006,

0xfe7d,	// (0x00019727) ai5_sk_middle_pane_g

0x2890,	// (0x0000c13a) aid_touch_area_size_lc0_ParamLimits

0x2890,	// (0x0000c13a) aid_touch_area_size_lc0

0x65b2,	// (0x0000fe5c) cell_hwr_candidate_pane_t1_ParamLimits

0x91fc,	// (0x00012aa6) aid_touch_navi_pane

0x2b0a,	// (0x0000c3b4) status_dt_navi_pane_ParamLimits

0x2b0a,	// (0x0000c3b4) status_dt_navi_pane

0x2b22,	// (0x0000c3cc) status_dt_sta_pane_ParamLimits

0x2b22,	// (0x0000c3cc) status_dt_sta_pane

0x4991,	// (0x0000e23b) dt_sta_controll_pane

0x499e,	// (0x0000e248) dt_sta_indi_pane

0x49ab,	// (0x0000e255) dt_sta_title_pane

0x75f2,	// (0x00010e9c) bg_dt_sta_indi_pane_ParamLimits

0x75f2,	// (0x00010e9c) bg_dt_sta_indi_pane

0xf3fc,	// (0x00018ca6) dt_sta_battery_pane

0xf404,	// (0x00018cae) dt_sta_indi_pane_g1

0xf40d,	// (0x00018cb7) dt_sta_indi_pane_g2

0xf416,	// (0x00018cc0) dt_sta_indi_pane_g3

0x0002,

0xfe8c,	// (0x00019736) dt_sta_indi_pane_g

0xf41f,	// (0x00018cc9) dt_sta_signal_pane

0x804a,	// (0x000118f4) bg_dt_sta_title_pane_ParamLimits

0x804a,	// (0x000118f4) bg_dt_sta_title_pane

0xf428,	// (0x00018cd2) dt_sta_title_pane_g1

0xf430,	// (0x00018cda) dt_sta_title_pane_t1_ParamLimits

0xf430,	// (0x00018cda) dt_sta_title_pane_t1

0x7265,	// (0x00010b0f) bg_dt_sta_control_pane

0xf445,	// (0x00018cef) dt_sta_controll_pane_g1

0xf44e,	// (0x00018cf8) bg_dt_sta_title_pane_g1

0xf457,	// (0x00018d01) bg_dt_sta_title_pane_g2

0xf460,	// (0x00018d0a) bg_dt_sta_title_pane_g3

0x0002,

0xfe93,	// (0x0001973d) bg_dt_sta_title_pane_g

0xbef1,	// (0x0001579b) bg_dt_sta_indi_pane_g1

0xf469,	// (0x00018d13) dt_sta_signal_pane_g1

0xf471,	// (0x00018d1b) dt_sta_signal_pane_g2

0x0001,

0xfe9a,	// (0x00019744) dt_sta_signal_pane_g

0xf479,	// (0x00018d23) dt_sta_battery_pane_g1

0xf482,	// (0x00018d2c) dt_sta_battery_pane_t1

0xbef1,	// (0x0001579b) bg_dt_sta_control_pane_g1

0x88fa,	// (0x000121a4) fep_china_uni_eep_pane

0x8902,	// (0x000121ac) fep_china_uni_entry_pane_ParamLimits

0x8912,	// (0x000121bc) popup_fep_china_uni_window_g1_ParamLimits

0x8922,	// (0x000121cc) popup_fep_china_uni_window_g2_ParamLimits

0x8922,	// (0x000121cc) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00018fc2) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00018fc2) popup_fep_china_uni_window_g

0xf491,	// (0x00018d3b) fep_china_uni_eep_pane_g1

0xf499,	// (0x00018d43) fep_china_uni_eep_pane_t1

0xf0a5,	// (0x0001894f) aid_touch_area_size_smil_player

0x9348,	// (0x00012bf2) lc0_clock_pane

0x9523,	// (0x00012dcd) status_pane_g5_ParamLimits

0x9523,	// (0x00012dcd) status_pane_g5

0xce7c,	// (0x00016726) popup_keymap_window

0x94e3,	// (0x00012d8d) status_icon_pane

0xf165,	// (0x00018a0f) cell_ai5_widget_pane_g3_ParamLimits

0xf17c,	// (0x00018a26) cell_ai5_widget_pane_g4_ParamLimits

0xf188,	// (0x00018a32) cell_ai5_widget_pane_g5_ParamLimits

0xf1ac,	// (0x00018a56) cell_ai5_widget_pane_g8_ParamLimits

0xf1ac,	// (0x00018a56) cell_ai5_widget_pane_g8

0xf1c0,	// (0x00018a6a) cell_ai5_widget_pane_g9_ParamLimits

0xf1c0,	// (0x00018a6a) cell_ai5_widget_pane_g9

0xf1d4,	// (0x00018a7e) cell_ai5_widget_pane_g10_ParamLimits

0xf1d4,	// (0x00018a7e) cell_ai5_widget_pane_g10

0xf4a8,	// (0x00018d52) status_icon_pane_g1

0x7265,	// (0x00010b0f) bg_popup_sub_pane_cp13

0xf4b0,	// (0x00018d5a) popup_keymap_window_t1

0x2184,	// (0x0000ba2e) control_pane_g6_ParamLimits

0x2184,	// (0x0000ba2e) control_pane_g6

0x2177,	// (0x0000ba21) control_pane_g7_ParamLimits

0x2177,	// (0x0000ba21) control_pane_g7

0x216a,	// (0x0000ba14) control_pane_g8_ParamLimits

0x216a,	// (0x0000ba14) control_pane_g8

0x4991,	// (0x0000e23b) dt_sta_controll_pane_ParamLimits

0x499e,	// (0x0000e248) dt_sta_indi_pane_ParamLimits

0x49ab,	// (0x0000e255) dt_sta_title_pane_ParamLimits

0x7a57,	// (0x00011301) aid_size_touch_scroll_bar_cale

0x519a,	// (0x0000ea44) popup_discreet_window_ParamLimits

0x519a,	// (0x0000ea44) popup_discreet_window

0xca83,	// (0x0001632d) popup_sk_window

0x9d8a,	// (0x00013634) bg_popup_sub_pane_cp28_ParamLimits

0x9d8a,	// (0x00013634) bg_popup_sub_pane_cp28

0xf4be,	// (0x00018d68) popup_discreet_window_g1_ParamLimits

0xf4be,	// (0x00018d68) popup_discreet_window_g1

0xf4de,	// (0x00018d88) popup_discreet_window_t1_ParamLimits

0xf4de,	// (0x00018d88) popup_discreet_window_t1

0xf4fc,	// (0x00018da6) popup_discreet_window_t2_ParamLimits

0xf4fc,	// (0x00018da6) popup_discreet_window_t2

0x0002,

0xfe9f,	// (0x00019749) popup_discreet_window_t_ParamLimits

0xfe9f,	// (0x00019749) popup_discreet_window_t

0x6f21,	// (0x000107cb) popup_sk_window_g1

0x6f2b,	// (0x000107d5) popup_sk_window_g2

0x0001,

0xfea6,	// (0x00019750) popup_sk_window_g

0x6f33,	// (0x000107dd) popup_sk_window_t1

0x6f41,	// (0x000107eb) popup_sk_window_t1_copy1

0xf155,	// (0x000189ff) cell_ai5_widget_pane_g2_ParamLimits

0xf2ae,	// (0x00018b58) cell_ai5_widget_pane_t9_ParamLimits

0xf2ae,	// (0x00018b58) cell_ai5_widget_pane_t9

0x7265,	// (0x00010b0f) main_fep_fshwr2_pane

0xd7a8,	// (0x00017052) aid_fshwr2_btn_pane

0xd7b9,	// (0x00017063) aid_fshwr2_syb_pane

0xd7ca,	// (0x00017074) aid_fshwr2_txt_pane

0xd7d6,	// (0x00017080) fshwr2_func_candi_pane

0xd7f0,	// (0x0001709a) fshwr2_hwr_syb_pane

0xd805,	// (0x000170af) fshwr2_icf_pane

0x50c1,	// (0x0000e96b) fshwr2_icf_bg_pane

0xd82b,	// (0x000170d5) fshwr2_icf_pane_t1_ParamLimits

0xd82b,	// (0x000170d5) fshwr2_icf_pane_t1

0x87fd,	// (0x000120a7) fshwr2_func_candi_pane_g1

0x4a57,	// (0x0000e301) fshwr2_func_candi_row_pane_ParamLimits

0x4a57,	// (0x0000e301) fshwr2_func_candi_row_pane

0xd842,	// (0x000170ec) cell_fshwr2_syb_pane_ParamLimits

0xd842,	// (0x000170ec) cell_fshwr2_syb_pane

0x6583,	// (0x0000fe2d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6583,	// (0x0000fe2d) fshwr2_hwr_syb_pane_g1

0x50c1,	// (0x0000e96b) bg_popup_call_pane_cp01

0xd856,	// (0x00017100) fshwr2_func_candi_cell_pane_ParamLimits

0xd856,	// (0x00017100) fshwr2_func_candi_cell_pane

0x4acd,	// (0x0000e377) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x4acd,	// (0x0000e377) fshwr2_func_candi_cell_bg_pane

0xd895,	// (0x0001713f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd895,	// (0x0001713f) fshwr2_func_candi_cell_pane_g1

0xd8cc,	// (0x00017176) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd8cc,	// (0x00017176) fshwr2_func_candi_cell_pane_t1

0x50c1,	// (0x0000e96b) bg_button_pane_cp08

0x8e5a,	// (0x00012704) cell_fshwr2_syb_bg_pane

0xd8e7,	// (0x00017191) cell_fshwr2_syb_bg_pane_g1

0xd8ef,	// (0x00017199) cell_fshwr2_syb_bg_pane_t1

0x804a,	// (0x000118f4) main_tmo_pane

0x2e44,	// (0x0000c6ee) uni_indicator_pane_g1_ParamLimits

0x2e5a,	// (0x0000c704) uni_indicator_pane_g2_ParamLimits

0x2e70,	// (0x0000c71a) uni_indicator_pane_g3_ParamLimits

0xa891,	// (0x0001413b) uni_indicator_pane_g4_ParamLimits

0xa891,	// (0x0001413b) uni_indicator_pane_g4

0xa8a5,	// (0x0001414f) uni_indicator_pane_g5_ParamLimits

0xa8a5,	// (0x0001414f) uni_indicator_pane_g5

0xa8a5,	// (0x0001414f) uni_indicator_pane_g6_ParamLimits

0xa8a5,	// (0x0001414f) uni_indicator_pane_g6

0xf917,	// (0x000191c1) uni_indicator_pane_g_ParamLimits

0x3a9b,	// (0x0000d345) popup_tmo_note_window_ParamLimits

0x3a9b,	// (0x0000d345) popup_tmo_note_window

0x6816,	// (0x000100c0) fshwr2_bg_pane

0xd8bd,	// (0x00017167) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd8bd,	// (0x00017167) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeab,	// (0x00019755) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeab,	// (0x00019755) fshwr2_func_candi_cell_pane_g

0x656b,	// (0x0000fe15) bg_popup_window_pane_cp01

0x706a,	// (0x00010914) bg_popup_window_pane_g1_cp01

0x008f,	// (0x00009939) bg_popup_window_pane_cp22_ParamLimits

0x008f,	// (0x00009939) bg_popup_window_pane_cp22

0x009d,	// (0x00009947) listscroll_tmo_link_pane_ParamLimits

0x009d,	// (0x00009947) listscroll_tmo_link_pane

0x00dd,	// (0x00009987) popup_tmo_note_window_g1_ParamLimits

0x00dd,	// (0x00009987) popup_tmo_note_window_g1

0x00ea,	// (0x00009994) tmo_note_info_pane_ParamLimits

0x00ea,	// (0x00009994) tmo_note_info_pane

0x4b42,	// (0x0000e3ec) list_tmo_note_info_pane_g1_ParamLimits

0x4b42,	// (0x0000e3ec) list_tmo_note_info_pane_g1

0x011b,	// (0x000099c5) list_tmo_note_info_pane_g2_ParamLimits

0x011b,	// (0x000099c5) list_tmo_note_info_pane_g2

0x0001,

0xfeb0,	// (0x0001975a) list_tmo_note_info_pane_g_ParamLimits

0xfeb0,	// (0x0001975a) list_tmo_note_info_pane_g

0x0137,	// (0x000099e1) list_tmo_note_info_text_pane_ParamLimits

0x0137,	// (0x000099e1) list_tmo_note_info_text_pane

0x01b8,	// (0x00009a62) list_tmo_link_pane

0x01c5,	// (0x00009a6f) scroll_pane_cp20

0x01d2,	// (0x00009a7c) list_single_tmo_link_pane_ParamLimits

0x01d2,	// (0x00009a7c) list_single_tmo_link_pane

0x01e2,	// (0x00009a8c) list_single_tmo_link_pane_t1

0x01f0,	// (0x00009a9a) list_tmo_note_info_text_pane_t1_ParamLimits

0x01f0,	// (0x00009a9a) list_tmo_note_info_text_pane_t1

0x1d70,	// (0x0000b61a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x1d70,	// (0x0000b61a) aid_size_touch_scroll_bar_cp01

0x1cec,	// (0x0000b596) aid_size_touch_slider_marker

0xca77,	// (0x00016321) popup_settings_window_ParamLimits

0xca77,	// (0x00016321) popup_settings_window

0x91b6,	// (0x00012a60) popup_candi_list_indi_window

0x91fc,	// (0x00012aa6) aid_touch_navi_pane_ParamLimits

0x6771,	// (0x0001001b) rs_clock_indi_pane

0x677a,	// (0x00010024) sctrl_sk_bottom_pane_ParamLimits

0x678b,	// (0x00010035) sctrl_sk_top_pane_ParamLimits

0x688e,	// (0x00010138) popup_fep_tooltip_window

0xf0f3,	// (0x0001899d) aid_size_cell_widget_grid_ParamLimits

0xf140,	// (0x000189ea) cell_ai5_widget_pane_g1_ParamLimits

0xf140,	// (0x000189ea) cell_ai5_widget_pane_g1

0xf194,	// (0x00018a3e) cell_ai5_widget_pane_g6_ParamLimits

0xf1a0,	// (0x00018a4a) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2e,	// (0x000196d8) cell_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x000196d8) cell_ai5_widget_pane_g

0xf2d2,	// (0x00018b7c) cell_ai5_widget_pane_t10_ParamLimits

0xf2d2,	// (0x00018b7c) cell_ai5_widget_pane_t10

0xf2f0,	// (0x00018b9a) grid_ai5_widget_pane_ParamLimits

0xf368,	// (0x00018c12) cell_contacts_ai5_widget_pane_ParamLimits

0xf368,	// (0x00018c12) cell_contacts_ai5_widget_pane

0xf511,	// (0x00018dbb) popup_discreet_window_t3_ParamLimits

0xf511,	// (0x00018dbb) popup_discreet_window_t3

0xd819,	// (0x000170c3) popup_fshwr2_char_preview_window_ParamLimits

0xd819,	// (0x000170c3) popup_fshwr2_char_preview_window

0x4b59,	// (0x0000e403) tmo_note_info_pane_t1

0x4b6e,	// (0x0000e418) tmo_note_info_pane_t2

0x4b83,	// (0x0000e42d) tmo_note_info_pane_t3

0x0194,	// (0x00009a3e) tmo_note_info_pane_t4

0x01a6,	// (0x00009a50) tmo_note_info_pane_t5

0x0004,

0xfeb5,	// (0x0001975f) tmo_note_info_pane_t

0x01b8,	// (0x00009a62) list_tmo_link_pane_ParamLimits

0x01c5,	// (0x00009a6f) scroll_pane_cp20_ParamLimits

0x50c1,	// (0x0000e96b) bg_popup_fep_char_preview_window_cp01

0x0209,	// (0x00009ab3) popup_fshwr2_char_preview_window_t1

0x0217,	// (0x00009ac1) popup_candi_list_indi_window_g1

0x0220,	// (0x00009aca) bg_cell_contacts_ai5_widget_pane

0x022c,	// (0x00009ad6) cell_contacts_ai5_widget_pane_g1

0x0241,	// (0x00009aeb) cell_contacts_ai5_widget_pane_g2

0x024d,	// (0x00009af7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec0,	// (0x0001976a) cell_contacts_ai5_widget_pane_g

0x0259,	// (0x00009b03) cell_contacts_ai5_widget_pane_t1

0x804a,	// (0x000118f4) highlight_cell_shortcut_ai5_widget_pane_cp01

0x02ce,	// (0x00009b78) settings_container_pane

0x8e5a,	// (0x00012704) listscroll_set_pane_copy1

0xb407,	// (0x00014cb1) scroll_pane_cp121_copy1

0x9b4c,	// (0x000133f6) set_content_pane_copy1

0x02da,	// (0x00009b84) aid_height_set_list_copy1_ParamLimits

0x02da,	// (0x00009b84) aid_height_set_list_copy1

0xaaa6,	// (0x00014350) aid_size_parent_copy1_ParamLimits

0xaaa6,	// (0x00014350) aid_size_parent_copy1

0x02e6,	// (0x00009b90) button_value_adjust_pane_cp6_copy1_ParamLimits

0x02e6,	// (0x00009b90) button_value_adjust_pane_cp6_copy1

0x919c,	// (0x00012a46) list_highlight_pane_cp2_copy1_ParamLimits

0x919c,	// (0x00012a46) list_highlight_pane_cp2_copy1

0x02fa,	// (0x00009ba4) list_set_pane_copy1_ParamLimits

0x02fa,	// (0x00009ba4) list_set_pane_copy1

0x026b,	// (0x00009b15) main_pane_set_t1_copy1_ParamLimits

0x026b,	// (0x00009b15) main_pane_set_t1_copy1

0x02a5,	// (0x00009b4f) main_pane_set_t2_copy1_ParamLimits

0x02a5,	// (0x00009b4f) main_pane_set_t2_copy1

0x0389,	// (0x00009c33) main_pane_set_t3_copy1

0x0397,	// (0x00009c41) main_pane_set_t4_copy1

0x02c2,	// (0x00009b6c) set_content_pane_g1_copy1_ParamLimits

0x02c2,	// (0x00009b6c) set_content_pane_g1_copy1

0x03a5,	// (0x00009c4f) setting_code_pane_copy1

0x03ad,	// (0x00009c57) setting_slider_graphic_pane_copy1

0x03ad,	// (0x00009c57) setting_slider_pane_copy1

0x03ad,	// (0x00009c57) setting_text_pane_copy1

0x03ad,	// (0x00009c57) setting_volume_pane_copy1

0x03a5,	// (0x00009c4f) settings_code_pane_cp2_copy1

0x03b5,	// (0x00009c5f) settings_code_pane_cp_copy1_ParamLimits

0x03b5,	// (0x00009c5f) settings_code_pane_cp_copy1

0x7073,	// (0x0001091d) volume_set_pane_copy1

0x03d1,	// (0x00009c7b) volume_set_pane_g10_copy1

0x03d9,	// (0x00009c83) volume_set_pane_g1_copy1

0x03e1,	// (0x00009c8b) volume_set_pane_g2_copy1

0x03e9,	// (0x00009c93) volume_set_pane_g3_copy1

0x03f1,	// (0x00009c9b) volume_set_pane_g4_copy1

0x03f9,	// (0x00009ca3) volume_set_pane_g5_copy1

0x0401,	// (0x00009cab) volume_set_pane_g6_copy1

0x0409,	// (0x00009cb3) volume_set_pane_g7_copy1

0x0411,	// (0x00009cbb) volume_set_pane_g8_copy1

0x0419,	// (0x00009cc3) volume_set_pane_g9_copy1

0x7359,	// (0x00010c03) bg_set_opt_pane_cp_copy1_ParamLimits

0x7359,	// (0x00010c03) bg_set_opt_pane_cp_copy1

0x707b,	// (0x00010925) setting_slider_pane_t1_copy1_ParamLimits

0x707b,	// (0x00010925) setting_slider_pane_t1_copy1

0x7099,	// (0x00010943) setting_slider_pane_t2_copy1_ParamLimits

0x7099,	// (0x00010943) setting_slider_pane_t2_copy1

0x70b2,	// (0x0001095c) setting_slider_pane_t3_copy1_ParamLimits

0x70b2,	// (0x0001095c) setting_slider_pane_t3_copy1

0x70c9,	// (0x00010973) slider_set_pane_copy1_ParamLimits

0x70c9,	// (0x00010973) slider_set_pane_copy1

0x818b,	// (0x00011a35) set_opt_bg_pane_g1_copy2

0x8193,	// (0x00011a3d) set_opt_bg_pane_g2_copy2

0x0485,	// (0x00009d2f) set_opt_bg_pane_g3_copy2

0x81a3,	// (0x00011a4d) set_opt_bg_pane_g4_copy2

0x81ab,	// (0x00011a55) set_opt_bg_pane_g5_copy2

0x81b3,	// (0x00011a5d) set_opt_bg_pane_g6_copy2

0x048d,	// (0x00009d37) set_opt_bg_pane_g7_copy2

0x0495,	// (0x00009d3f) set_opt_bg_pane_g8_copy2

0x049d,	// (0x00009d47) set_opt_bg_pane_g9_copy2

0x70df,	// (0x00010989) aid_size_touch_slider_mark_copy1_ParamLimits

0x70df,	// (0x00010989) aid_size_touch_slider_mark_copy1

0x04b9,	// (0x00009d63) slider_set_pane_g1_copy1

0x70f3,	// (0x0001099d) slider_set_pane_g2_copy1

0x616d,	// (0x0000fa17) slider_set_pane_g3_copy1_ParamLimits

0x616d,	// (0x0000fa17) slider_set_pane_g3_copy1

0x6181,	// (0x0000fa2b) slider_set_pane_g4_copy1_ParamLimits

0x6181,	// (0x0000fa2b) slider_set_pane_g4_copy1

0x6199,	// (0x0000fa43) slider_set_pane_g5_copy1_ParamLimits

0x6199,	// (0x0000fa43) slider_set_pane_g5_copy1

0x616d,	// (0x0000fa17) slider_set_pane_g6_copy1_ParamLimits

0x616d,	// (0x0000fa17) slider_set_pane_g6_copy1

0x70fb,	// (0x000109a5) slider_set_pane_g7_copy1_ParamLimits

0x70fb,	// (0x000109a5) slider_set_pane_g7_copy1

0x7279,	// (0x00010b23) bg_set_opt_pane_cp2_copy1

0x04e0,	// (0x00009d8a) setting_slider_graphic_pane_g1_copy1

0x04f8,	// (0x00009da2) setting_slider_graphic_pane_t1_copy1

0x04e9,	// (0x00009d93) setting_slider_graphic_pane_t2_copy1

0x0507,	// (0x00009db1) slider_set_pane_cp_copy1

0x0517,	// (0x00009dc1) input_focus_pane_cp1_copy1

0x0520,	// (0x00009dca) list_set_text_pane_copy1

0x0528,	// (0x00009dd2) setting_text_pane_g1_copy1

0x0531,	// (0x00009ddb) set_text_pane_t1_copy1

0x0517,	// (0x00009dc1) input_focus_pane_cp2_copy1

0x0528,	// (0x00009dd2) setting_code_pane_g1_copy1

0x0549,	// (0x00009df3) setting_code_pane_t1_copy1

0x8b5f,	// (0x00012409) list_set_graphic_pane_copy1

0x7279,	// (0x00010b23) bg_set_opt_pane_cp4_copy1

0x8b71,	// (0x0001241b) list_set_graphic_pane_g1_copy1_ParamLimits

0x8b71,	// (0x0001241b) list_set_graphic_pane_g1_copy1

0x0557,	// (0x00009e01) list_set_graphic_pane_g2_copy1

0x8b89,	// (0x00012433) list_set_graphic_pane_t1_copy1_ParamLimits

0x8b89,	// (0x00012433) list_set_graphic_pane_t1_copy1

0xbef1,	// (0x0001579b) rs_clock_indi_pane_g1

0x055f,	// (0x00009e09) rs_clock_indi_pane_t1

0x056d,	// (0x00009e17) rs_indi_pane

0x0575,	// (0x00009e1f) rs_indi_pane_g1

0x057e,	// (0x00009e28) rs_indi_pane_g2

0x0587,	// (0x00009e31) rs_indi_pane_g3

0x0002,

0xfec7,	// (0x00019771) rs_indi_pane_g

0x8e5a,	// (0x00012704) bg_popup_preview_window_pane_cp03

0x0590,	// (0x00009e3a) popup_fep_tooltip_window_t1

0xe3d3,	// (0x00017c7d) popup_note2_window_g2_ParamLimits

0xe3d3,	// (0x00017c7d) popup_note2_window_g2

0x0001,

0xfc67,	// (0x00019511) popup_note2_window_g_ParamLimits

0xfc67,	// (0x00019511) popup_note2_window_g

0xe893,	// (0x0001813d) bg_popup_sub_pane_cp11_ParamLimits

0xe8a0,	// (0x0001814a) cell_ai3_links_pane_g1_ParamLimits

0xe8b7,	// (0x00018161) cell_ai3_links_pane_t1

0x0531,	// (0x00009ddb) set_text_pane_t1_copy1_ParamLimits

0x8d6d,	// (0x00012617) cell_graphic_popup_pane_cp2_ParamLimits

0x8d6d,	// (0x00012617) cell_graphic_popup_pane_cp2

0x059e,	// (0x00009e48) cell_graphic_popup_pane_g1_cp2

0x7906,	// (0x000111b0) cell_graphic_popup_pane_g2_cp2

0x05a6,	// (0x00009e50) cell_graphic_popup_pane_g3_cp2

0x05ae,	// (0x00009e58) cell_graphic_popup_pane_t2_cp2

0x7917,	// (0x000111c1) grid_highlight_pane_cp3_cp2

0x854e,	// (0x00011df8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x804a,	// (0x000118f4) main_tmo_pane_ParamLimits

0x3a93,	// (0x0000d33d) popup_tmo_big_image_note_window

0xf12f,	// (0x000189d9) cell_ai5_widget_list_pane

0xf137,	// (0x000189e1) cell_ai5_widget_lrg_icon_pane

0x4b59,	// (0x0000e403) tmo_note_info_pane_t1_ParamLimits

0x4b6e,	// (0x0000e418) tmo_note_info_pane_t2_ParamLimits

0x4b83,	// (0x0000e42d) tmo_note_info_pane_t3_ParamLimits

0x0194,	// (0x00009a3e) tmo_note_info_pane_t4_ParamLimits

0x01a6,	// (0x00009a50) tmo_note_info_pane_t5_ParamLimits

0xfeb5,	// (0x0001975f) tmo_note_info_pane_t_ParamLimits

0x02ce,	// (0x00009b78) settings_container_pane_ParamLimits

0x050f,	// (0x00009db9) indicator_popup_pane_cp5

0x050f,	// (0x00009db9) indicator_popup_pane_cp6

0x8b5f,	// (0x00012409) list_set_graphic_pane_copy1_ParamLimits

0x7265,	// (0x00010b0f) bg_popup_window_pane_cp23

0x05bc,	// (0x00009e66) popup_tmo_big_image_note_window_g1

0x05c5,	// (0x00009e6f) popup_tmo_big_image_note_window_t1

0x05d3,	// (0x00009e7d) popup_tmo_big_image_note_window_t2

0x05e1,	// (0x00009e8b) popup_tmo_big_image_note_window_t3

0x0002,

0xfece,	// (0x00019778) popup_tmo_big_image_note_window_t

0xbef1,	// (0x0001579b) cell_ai5_widget_lrg_icon_pane_g1

0x05ef,	// (0x00009e99) cell_ai5_widget_lrg_icon_pane_t1

0x05fd,	// (0x00009ea7) cell_ai5_widget_list_row_pane_ParamLimits

0x05fd,	// (0x00009ea7) cell_ai5_widget_list_row_pane

0x0614,	// (0x00009ebe) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0614,	// (0x00009ebe) cell_ai5_widget_list_row_pane_g1

0x0621,	// (0x00009ecb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0621,	// (0x00009ecb) cell_ai5_widget_list_row_pane_t1

0x064f,	// (0x00009ef9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x064f,	// (0x00009ef9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed5,	// (0x0001977f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed5,	// (0x0001977f) cell_ai5_widget_list_row_pane_t

0x50c1,	// (0x0000e96b) main_fep_vtchi_ss_pane

0x0693,	// (0x00009f3d) popup_fep_char_pre_window

0x069b,	// (0x00009f45) popup_fep_ituss_window

0x4b98,	// (0x0000e442) popup_fep_vkbss_window

0x4ba5,	// (0x0000e44f) grid_vkbss_keypad_pane_ParamLimits

0x4ba5,	// (0x0000e44f) grid_vkbss_keypad_pane

0x06ec,	// (0x00009f96) ituss_keypad_pane

0x711b,	// (0x000109c5) aid_vkbss_key_offset_ParamLimits

0x711b,	// (0x000109c5) aid_vkbss_key_offset

0xd8fe,	// (0x000171a8) cell_vkbss_key_pane_ParamLimits

0xd8fe,	// (0x000171a8) cell_vkbss_key_pane

0x94ff,	// (0x00012da9) bg_cell_vkbss_key_g1_ParamLimits

0x94ff,	// (0x00012da9) bg_cell_vkbss_key_g1

0x4bcb,	// (0x0000e475) cell_vkbss_key_3p_pane_ParamLimits

0x4bcb,	// (0x0000e475) cell_vkbss_key_3p_pane

0x4be5,	// (0x0000e48f) cell_vkbss_key_g1_ParamLimits

0x4be5,	// (0x0000e48f) cell_vkbss_key_g1

0x4bff,	// (0x0000e4a9) cell_vkbss_key_t1_ParamLimits

0x4bff,	// (0x0000e4a9) cell_vkbss_key_t1

0x713d,	// (0x000109e7) cell_ituss_key_pane_ParamLimits

0x713d,	// (0x000109e7) cell_ituss_key_pane

0x078b,	// (0x0000a035) bg_cell_ituss_key_g1_ParamLimits

0x078b,	// (0x0000a035) bg_cell_ituss_key_g1

0x0797,	// (0x0000a041) cell_ituss_key_pane_g1_ParamLimits

0x0797,	// (0x0000a041) cell_ituss_key_pane_g1

0x714e,	// (0x000109f8) cell_ituss_key_pane_g2_ParamLimits

0x714e,	// (0x000109f8) cell_ituss_key_pane_g2

0x0002,

0xfedc,	// (0x00019786) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x00019786) cell_ituss_key_pane_g

0x7176,	// (0x00010a20) cell_ituss_key_t1_ParamLimits

0x7176,	// (0x00010a20) cell_ituss_key_t1

0x71b0,	// (0x00010a5a) cell_ituss_key_t2_ParamLimits

0x71b0,	// (0x00010a5a) cell_ituss_key_t2

0x71e1,	// (0x00010a8b) cell_ituss_key_t3_ParamLimits

0x71e1,	// (0x00010a8b) cell_ituss_key_t3

0x71b0,	// (0x00010a5a) cell_ituss_key_t4_ParamLimits

0x71b0,	// (0x00010a5a) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x0001978d) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x0001978d) cell_ituss_key_t

0x08a3,	// (0x0000a14d) cell_vkbss_key_3p_pane_g1

0x089b,	// (0x0000a145) cell_vkbss_key_3p_pane_g2

0x0893,	// (0x0000a13d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x00019798) cell_vkbss_key_3p_pane_g

0x50c1,	// (0x0000e96b) bg_popup_fep_char_preview_window_cp02

0x7224,	// (0x00010ace) popup_fep_char_pre_window_t1

0x4961,	// (0x0000e20b) main_ai5_sk_pane

0x0220,	// (0x00009aca) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x022c,	// (0x00009ad6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x0241,	// (0x00009aeb) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x024d,	// (0x00009af7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec0,	// (0x0001976a) cell_contacts_ai5_widget_pane_g_ParamLimits

0x0259,	// (0x00009b03) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x804a,	// (0x000118f4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x4c2a,	// (0x0000e4d4) main_ai5_sk_pane_g1

0x9bd4,	// (0x0001347e) popup_query_code_window_g1

0x06ad,	// (0x00009f57) popup_fep_vkb_icf_pane

0x06ca,	// (0x00009f74) popup_fep_vtchi_icf_pane

0x08c3,	// (0x0000a16d) bg_icf_pane

0x08cf,	// (0x0000a179) list_vkb_icf_pane

0x08de,	// (0x0000a188) bg_icf_pane_cp01

0x08f1,	// (0x0000a19b) vtchi_icf_list_pane

0x0901,	// (0x0000a1ab) list_vkb_icf_pane_t1_ParamLimits

0x0901,	// (0x0000a1ab) list_vkb_icf_pane_t1

0x0916,	// (0x0000a1c0) vtchi_icf_list_pane_t1_ParamLimits

0x0916,	// (0x0000a1c0) vtchi_icf_list_pane_t1

0x069b,	// (0x00009f45) popup_fep_ituss_window_ParamLimits

0x06ca,	// (0x00009f74) popup_fep_vtchi_icf_pane_ParamLimits

0x06ec,	// (0x00009f96) ituss_keypad_pane_ParamLimits

0x7111,	// (0x000109bb) ituss_sks_pane

0x08c3,	// (0x0000a16d) bg_icf_pane_ParamLimits

0x0677,	// (0x00009f21) icf_edit_indi_pane_ParamLimits

0x0677,	// (0x00009f21) icf_edit_indi_pane

0x08cf,	// (0x0000a179) list_vkb_icf_pane_ParamLimits

0x08de,	// (0x0000a188) bg_icf_pane_cp01_ParamLimits

0x0686,	// (0x00009f30) icf_edit_indi_pane_cp01_ParamLimits

0x0686,	// (0x00009f30) icf_edit_indi_pane_cp01

0x08f9,	// (0x0000a1a3) vtchi_query_pane

0xdab3,	// (0x0001735d) icf_edit_indi_pane_g1_ParamLimits

0xdab3,	// (0x0001735d) icf_edit_indi_pane_g1

0x0996,	// (0x0000a240) icf_edit_indi_pane_g2_ParamLimits

0x0996,	// (0x0000a240) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x000197b0) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x000197b0) icf_edit_indi_pane_g

0x09a5,	// (0x0000a24f) icf_edit_indi_pane_t1

0x092d,	// (0x0000a1d7) bg_input_focus_pane_cp042

0x7a4e,	// (0x000112f8) vtchi_button_pane

0x0936,	// (0x0000a1e0) vtchi_query_pane_t1

0x0944,	// (0x0000a1ee) vtchi_query_pane_t2

0x0952,	// (0x0000a1fc) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x0001979f) vtchi_query_pane_t

0x50c1,	// (0x0000e96b) bg_button_pane_cp13

0x0960,	// (0x0000a20a) vtchi_button_pane_g1

0x7233,	// (0x00010add) ituss_sks_pane_g1

0x723d,	// (0x00010ae7) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x000197a6) ituss_sks_pane_g

0x0988,	// (0x0000a232) ituss_sks_pane_t1

0x097a,	// (0x0000a224) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x000197ab) ituss_sks_pane_t

0xba01,	// (0x000152ab) indicator_nsta_pane_cp_g1

0xba09,	// (0x000152b3) indicator_nsta_pane_cp_g2

0xba11,	// (0x000152bb) indicator_nsta_pane_cp_g3

0xba01,	// (0x000152ab) indicator_nsta_pane_cp_g4

0xba09,	// (0x000152b3) indicator_nsta_pane_cp_g5

0xba11,	// (0x000152bb) indicator_nsta_pane_cp_g6

0x0005,

0xfaa5,	// (0x0001934f) indicator_nsta_pane_cp_g

0x4768,	// (0x0000e012) cell_graphic2_pane_t2_ParamLimits

0x4768,	// (0x0000e012) cell_graphic2_pane_t2

0x0001,

0xfdb7,	// (0x00019661) cell_graphic2_pane_t_ParamLimits

0xfdb7,	// (0x00019661) cell_graphic2_pane_t

0x479f,	// (0x0000e049) cell_graphic2_control_pane_t1

0x1f0d,	// (0x0000b7b7) signal_pane_g3_ParamLimits

0x1f0d,	// (0x0000b7b7) signal_pane_g3

0x1f21,	// (0x0000b7cb) signal_pane_g4_ParamLimits

0x1f21,	// (0x0000b7cb) signal_pane_g4

0x0661,	// (0x00009f0b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x0661,	// (0x00009f0b) cell_ai5_widget_list_row_pane_t3

0x07d3,	// (0x0000a07d) cell_ituss_key_pane_t1_ParamLimits

0x07d3,	// (0x0000a07d) cell_ituss_key_pane_t1

0x985a,	// (0x00013104) form_field_data_wide_pane_vc_t2_ParamLimits

0x985a,	// (0x00013104) form_field_data_wide_pane_vc_t2

0x986c,	// (0x00013116) form_field_data_wide_pane_vc_t3_ParamLimits

0x986c,	// (0x00013116) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x000190a9) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x000190a9) form_field_data_wide_pane_vc_t

0xb6e3,	// (0x00014f8d) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb6e3,	// (0x00014f8d) form_field_slider_wide_pane_vc_t3

0xb7b1,	// (0x0001505b) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb7b1,	// (0x0001505b) form_field_popup_wide_pane_vc_t2

0xb7c6,	// (0x00015070) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb7c6,	// (0x00015070) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa94,	// (0x0001933e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa94,	// (0x0001933e) form_field_popup_wide_pane_vc_t

0xd7a8,	// (0x00017052) aid_fshwr2_btn_pane_ParamLimits

0xd7b9,	// (0x00017063) aid_fshwr2_syb_pane_ParamLimits

0xd7ca,	// (0x00017074) aid_fshwr2_txt_pane_ParamLimits

0x6816,	// (0x000100c0) fshwr2_bg_pane_ParamLimits

0xd7d6,	// (0x00017080) fshwr2_func_candi_pane_ParamLimits

0xd7f0,	// (0x0001709a) fshwr2_hwr_syb_pane_ParamLimits

0xd805,	// (0x000170af) fshwr2_icf_pane_ParamLimits

0xb665,	// (0x00014f0f) list_double_graphic_pane_vc_g4_ParamLimits

0xb665,	// (0x00014f0f) list_double_graphic_pane_vc_g4

0x716a,	// (0x00010a14) cell_ituss_key_pane_g3_ParamLimits

0x716a,	// (0x00010a14) cell_ituss_key_pane_g3

0x7212,	// (0x00010abc) cell_ituss_key_t5_ParamLimits

0x7212,	// (0x00010abc) cell_ituss_key_t5

0x4b98,	// (0x0000e442) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal
