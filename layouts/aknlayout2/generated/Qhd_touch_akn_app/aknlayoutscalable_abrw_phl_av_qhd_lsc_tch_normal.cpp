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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000f719 };

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
0xc6d1,	// (0x0001bdea) Screen

0xc6dd,	// (0x0001bdf6) application_window_ParamLimits

0xc6dd,	// (0x0001bdf6) application_window

0x2568,	// (0x00011c81) screen_g1

0xb627,	// (0x0001ad40) area_bottom_pane_ParamLimits

0xb627,	// (0x0001ad40) area_bottom_pane

0x00d2,	// (0x0000f7eb) area_top_pane_ParamLimits

0x00d2,	// (0x0000f7eb) area_top_pane

0x0170,	// (0x0000f889) main_pane_ParamLimits

0x0170,	// (0x0000f889) main_pane

0x2572,	// (0x00011c8b) misc_graphics

0xd443,	// (0x0001cb5c) battery_pane_ParamLimits

0xd443,	// (0x0001cb5c) battery_pane

0x54c1,	// (0x00014bda) bg_status_flat_pane_g8

0x54c9,	// (0x00014be2) bg_status_flat_pane_g9

0x4797,	// (0x00013eb0) context_pane_ParamLimits

0x4797,	// (0x00013eb0) context_pane

0xd5ae,	// (0x0001ccc7) navi_pane_ParamLimits

0xd5ae,	// (0x0001ccc7) navi_pane

0xd62c,	// (0x0001cd45) signal_pane_ParamLimits

0xd62c,	// (0x0001cd45) signal_pane

0x0008,

0xf86f,	// (0x0001ef88) bg_status_flat_pane_g

0xd6bc,	// (0x0001cdd5) status_pane_g1_ParamLimits

0xd6bc,	// (0x0001cdd5) status_pane_g1

0xd6d2,	// (0x0001cdeb) status_pane_g2_ParamLimits

0xd6d2,	// (0x0001cdeb) status_pane_g2

0x49be,	// (0x000140d7) status_pane_g3_ParamLimits

0x49be,	// (0x000140d7) status_pane_g3

0x0004,

0xf79b,	// (0x0001eeb4) status_pane_g_ParamLimits

0xf79b,	// (0x0001eeb4) status_pane_g

0xd6de,	// (0x0001cdf7) title_pane_ParamLimits

0xd6de,	// (0x0001cdf7) title_pane

0xd741,	// (0x0001ce5a) uni_indicator_pane_ParamLimits

0xd741,	// (0x0001ce5a) uni_indicator_pane

0x45e9,	// (0x00013d02) bg_list_pane_ParamLimits

0x45e9,	// (0x00013d02) bg_list_pane

0xd38e,	// (0x0001caa7) find_pane

0xb97f,	// (0x0001b098) listscroll_app_pane_ParamLimits

0xb97f,	// (0x0001b098) listscroll_app_pane

0x461d,	// (0x00013d36) listscroll_form_pane

0xb98f,	// (0x0001b0a8) listscroll_gen_pane_ParamLimits

0xb98f,	// (0x0001b0a8) listscroll_gen_pane

0x0a57,	// (0x00010170) listscroll_set_pane

0x6077,	// (0x00015790) main_idle_act_pane

0x42f1,	// (0x00013a0a) main_idle_trad_pane

0x42f1,	// (0x00013a0a) main_list_empty_pane

0x4637,	// (0x00013d50) main_midp_pane

0x4643,	// (0x00013d5c) main_pane_g1_ParamLimits

0x4643,	// (0x00013d5c) main_pane_g1

0xb9a3,	// (0x0001b0bc) popup_ai_message_window_ParamLimits

0xb9a3,	// (0x0001b0bc) popup_ai_message_window

0xba34,	// (0x0001b14d) popup_fep_china_uni_window_ParamLimits

0xba34,	// (0x0001b14d) popup_fep_china_uni_window

0x0b6f,	// (0x00010288) popup_fep_japan_candidate_window_ParamLimits

0x0b6f,	// (0x00010288) popup_fep_japan_candidate_window

0x0b8f,	// (0x000102a8) popup_fep_japan_predictive_window_ParamLimits

0x0b8f,	// (0x000102a8) popup_fep_japan_predictive_window

0xba90,	// (0x0001b1a9) popup_find_window

0xbaad,	// (0x0001b1c6) popup_grid_graphic_window_ParamLimits

0xbaad,	// (0x0001b1c6) popup_grid_graphic_window

0x0bf6,	// (0x0001030f) popup_large_graphic_colour_window

0xbb4b,	// (0x0001b264) popup_menu_window_ParamLimits

0xbb4b,	// (0x0001b264) popup_menu_window

0xbd1d,	// (0x0001b436) popup_note_image_window

0xbce3,	// (0x0001b3fc) popup_note_wait_window_ParamLimits

0xbce3,	// (0x0001b3fc) popup_note_wait_window

0xbd35,	// (0x0001b44e) popup_note_window_ParamLimits

0xbd35,	// (0x0001b44e) popup_note_window

0xbddb,	// (0x0001b4f4) popup_query_code_window_ParamLimits

0xbddb,	// (0x0001b4f4) popup_query_code_window

0x0e3e,	// (0x00010557) popup_query_data_code_window_ParamLimits

0x0e3e,	// (0x00010557) popup_query_data_code_window

0xbe15,	// (0x0001b52e) popup_query_data_window_ParamLimits

0xbe15,	// (0x0001b52e) popup_query_data_window

0xbe97,	// (0x0001b5b0) popup_query_sat_info_window_ParamLimits

0xbe97,	// (0x0001b5b0) popup_query_sat_info_window

0xbf2e,	// (0x0001b647) popup_snote_single_graphic_window_ParamLimits

0xbf2e,	// (0x0001b647) popup_snote_single_graphic_window

0xbf2e,	// (0x0001b647) popup_snote_single_text_window_ParamLimits

0xbf2e,	// (0x0001b647) popup_snote_single_text_window

0x0ec5,	// (0x000105de) popup_sub_window_general

0x0ff5,	// (0x0001070e) popup_window_general_ParamLimits

0x0ff5,	// (0x0001070e) popup_window_general

0x4659,	// (0x00013d72) power_save_pane

0xb80e,	// (0x0001af27) control_pane_g1_ParamLimits

0xb80e,	// (0x0001af27) control_pane_g1

0xb837,	// (0x0001af50) control_pane_g2_ParamLimits

0xb837,	// (0x0001af50) control_pane_g2

0x45ac,	// (0x00013cc5) control_pane_g3_ParamLimits

0x45ac,	// (0x00013cc5) control_pane_g3

0x0007,

0xf783,	// (0x0001ee9c) control_pane_g_ParamLimits

0xf783,	// (0x0001ee9c) control_pane_g

0xb878,	// (0x0001af91) control_pane_t1_ParamLimits

0xb878,	// (0x0001af91) control_pane_t1

0xb8d6,	// (0x0001afef) control_pane_t2_ParamLimits

0xb8d6,	// (0x0001afef) control_pane_t2

0x0002,

0xf794,	// (0x0001eead) control_pane_t_ParamLimits

0xf794,	// (0x0001eead) control_pane_t

0xd2c0,	// (0x0001c9d9) navi_navi_volume_pane_cp1

0xd2c8,	// (0x0001c9e1) status_small_icon_pane

0x44e1,	// (0x00013bfa) status_small_pane_g1_ParamLimits

0x44e1,	// (0x00013bfa) status_small_pane_g1

0xd2d0,	// (0x0001c9e9) status_small_pane_g2_ParamLimits

0xd2d0,	// (0x0001c9e9) status_small_pane_g2

0xd2dc,	// (0x0001c9f5) status_small_pane_g3_ParamLimits

0xd2dc,	// (0x0001c9f5) status_small_pane_g3

0xd2e8,	// (0x0001ca01) status_small_pane_g4_ParamLimits

0xd2e8,	// (0x0001ca01) status_small_pane_g4

0xd2f4,	// (0x0001ca0d) status_small_pane_g5_ParamLimits

0xd2f4,	// (0x0001ca0d) status_small_pane_g5

0xd302,	// (0x0001ca1b) status_small_pane_g6_ParamLimits

0xd302,	// (0x0001ca1b) status_small_pane_g6

0x0007,

0xf772,	// (0x0001ee8b) status_small_pane_g_ParamLimits

0xf772,	// (0x0001ee8b) status_small_pane_g

0xd331,	// (0x0001ca4a) status_small_pane_t1

0xd353,	// (0x0001ca6c) status_small_wait_pane_ParamLimits

0xd353,	// (0x0001ca6c) status_small_wait_pane

0xd0d6,	// (0x0001c7ef) aid_levels_signal_ParamLimits

0xd0d6,	// (0x0001c7ef) aid_levels_signal

0xd0ee,	// (0x0001c807) signal_pane_g1_ParamLimits

0xd0ee,	// (0x0001c807) signal_pane_g1

0xd109,	// (0x0001c822) signal_pane_g2_ParamLimits

0xd109,	// (0x0001c822) signal_pane_g2

0x0003,

0xf703,	// (0x0001ee1c) signal_pane_g_ParamLimits

0xf703,	// (0x0001ee1c) signal_pane_g

0x3d36,	// (0x0001344f) context_pane_g1

0xc6ed,	// (0x0001be06) title_pane_g1

0xc724,	// (0x0001be3d) title_pane_t1

0x261a,	// (0x00011d33) title_pane_t2

0x2640,	// (0x00011d59) title_pane_t3

0x0002,

0xf557,	// (0x0001ec70) title_pane_t

0xd769,	// (0x0001ce82) aid_levels_battery_ParamLimits

0xd769,	// (0x0001ce82) aid_levels_battery

0xd785,	// (0x0001ce9e) battery_pane_g1_ParamLimits

0xd785,	// (0x0001ce9e) battery_pane_g1

0xd7a2,	// (0x0001cebb) battery_pane_g2_ParamLimits

0xd7a2,	// (0x0001cebb) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001eebf) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001eebf) battery_pane_g

0xd988,	// (0x0001d0a1) uni_indicator_pane_g1

0xd99e,	// (0x0001d0b7) uni_indicator_pane_g2

0xd9b4,	// (0x0001d0cd) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x0001f030) uni_indicator_pane_g

0x4163,	// (0x0001387c) navi_icon_pane_ParamLimits

0x4163,	// (0x0001387c) navi_icon_pane

0x40a1,	// (0x000137ba) navi_midp_pane

0x417f,	// (0x00013898) navi_navi_pane

0x4189,	// (0x000138a2) navi_text_pane_ParamLimits

0x4189,	// (0x000138a2) navi_text_pane

0x2568,	// (0x00011c81) status_small_wait_pane_g1

0x2a89,	// (0x000121a2) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0001f02b) status_small_wait_pane_g

0x5b28,	// (0x00015241) navi_navi_icon_text_pane

0x5b30,	// (0x00015249) navi_navi_pane_g1_ParamLimits

0x5b30,	// (0x00015249) navi_navi_pane_g1

0x5b42,	// (0x0001525b) navi_navi_pane_g2_ParamLimits

0x5b42,	// (0x0001525b) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0001eff9) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0001eff9) navi_navi_pane_g

0x5b54,	// (0x0001526d) navi_navi_tabs_pane

0x5b5d,	// (0x00015276) navi_navi_text_pane

0x5b28,	// (0x00015241) navi_navi_volume_pane

0x5b04,	// (0x0001521d) navi_text_pane_t1

0x5af8,	// (0x00015211) navi_icon_pane_g1

0x5a4b,	// (0x00015164) navi_navi_text_pane_t1

0x130d,	// (0x00010a26) navi_navi_volume_pane_g1

0x1315,	// (0x00010a2e) volume_small_pane

0x59b1,	// (0x000150ca) navi_navi_icon_text_pane_g1

0x59b9,	// (0x000150d2) navi_navi_icon_text_pane_t1

0x417f,	// (0x00013898) navi_tabs_2_long_pane

0x417f,	// (0x00013898) navi_tabs_2_pane

0x417f,	// (0x00013898) navi_tabs_3_long_pane

0x417f,	// (0x00013898) navi_tabs_3_pane

0x417f,	// (0x00013898) navi_tabs_4_pane

0x12ed,	// (0x00010a06) tabs_2_active_pane_ParamLimits

0x12ed,	// (0x00010a06) tabs_2_active_pane

0x12fd,	// (0x00010a16) tabs_2_passive_pane_ParamLimits

0x12fd,	// (0x00010a16) tabs_2_passive_pane

0x12bb,	// (0x000109d4) tabs_3_active_pane_ParamLimits

0x12bb,	// (0x000109d4) tabs_3_active_pane

0x12cb,	// (0x000109e4) tabs_3_passive_pane_ParamLimits

0x12cb,	// (0x000109e4) tabs_3_passive_pane

0x12dc,	// (0x000109f5) tabs_3_passive_pane_cp_ParamLimits

0x12dc,	// (0x000109f5) tabs_3_passive_pane_cp

0x1277,	// (0x00010990) tabs_4_active_pane_ParamLimits

0x1277,	// (0x00010990) tabs_4_active_pane

0x1288,	// (0x000109a1) tabs_4_passive_pane_ParamLimits

0x1288,	// (0x000109a1) tabs_4_passive_pane

0x1299,	// (0x000109b2) tabs_4_passive_pane_cp_ParamLimits

0x1299,	// (0x000109b2) tabs_4_passive_pane_cp

0x12aa,	// (0x000109c3) tabs_4_passive_pane_cp2_ParamLimits

0x12aa,	// (0x000109c3) tabs_4_passive_pane_cp2

0x1253,	// (0x0001096c) tabs_2_long_active_pane_ParamLimits

0x1253,	// (0x0001096c) tabs_2_long_active_pane

0x1265,	// (0x0001097e) tabs_2_long_passive_pane_ParamLimits

0x1265,	// (0x0001097e) tabs_2_long_passive_pane

0x1214,	// (0x0001092d) tabs_3_long_active_pane_ParamLimits

0x1214,	// (0x0001092d) tabs_3_long_active_pane

0x1227,	// (0x00010940) tabs_3_long_passive_pane_ParamLimits

0x1227,	// (0x00010940) tabs_3_long_passive_pane

0x1240,	// (0x00010959) tabs_3_long_passive_pane_cp_ParamLimits

0x1240,	// (0x00010959) tabs_3_long_passive_pane_cp

0x11ba,	// (0x000108d3) volume_small_pane_g1

0x11c3,	// (0x000108dc) volume_small_pane_g2

0x11cc,	// (0x000108e5) volume_small_pane_g3

0x11d5,	// (0x000108ee) volume_small_pane_g4

0x11de,	// (0x000108f7) volume_small_pane_g5

0x11e7,	// (0x00010900) volume_small_pane_g6

0x11f0,	// (0x00010909) volume_small_pane_g7

0x11f9,	// (0x00010912) volume_small_pane_g8

0x1202,	// (0x0001091b) volume_small_pane_g9

0x120b,	// (0x00010924) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x0001efc5) volume_small_pane_g

0x28e7,	// (0x00012000) bg_active_tab_pane_cp2_ParamLimits

0x28e7,	// (0x00012000) bg_active_tab_pane_cp2

0x2660,	// (0x00011d79) tabs_3_active_pane_g1

0xc7b0,	// (0x0001bec9) tabs_3_active_pane_t1

0x28e7,	// (0x00012000) bg_passive_tab_pane_cp2_ParamLimits

0x28e7,	// (0x00012000) bg_passive_tab_pane_cp2

0x2660,	// (0x00011d79) tabs_3_passive_pane_g1

0xc7b0,	// (0x0001bec9) tabs_3_passive_pane_t1

0x28e7,	// (0x00012000) bg_active_tab_pane_cp3_ParamLimits

0x28e7,	// (0x00012000) bg_active_tab_pane_cp3

0x267a,	// (0x00011d93) tabs_4_active_pane_g1

0xc7c2,	// (0x0001bedb) tabs_4_active_pane_t1

0x28e7,	// (0x00012000) bg_passive_tab_pane_cp3_ParamLimits

0x28e7,	// (0x00012000) bg_passive_tab_pane_cp3

0x267a,	// (0x00011d93) tabs_4_1_passive_pane_g1

0xc7c2,	// (0x0001bedb) tabs_4_1_passive_pane_t1

0x4637,	// (0x00013d50) list_highlight_pane_cp2

0xda4e,	// (0x0001d167) list_set_pane_ParamLimits

0xda4e,	// (0x0001d167) list_set_pane

0xdae8,	// (0x0001d201) main_pane_set_t1_ParamLimits

0xdae8,	// (0x0001d201) main_pane_set_t1

0xdb08,	// (0x0001d221) main_pane_set_t2_ParamLimits

0xdb08,	// (0x0001d221) main_pane_set_t2

0xdb1c,	// (0x0001d235) main_pane_set_t3_ParamLimits

0xdb1c,	// (0x0001d235) main_pane_set_t3

0xdb2e,	// (0x0001d247) main_pane_set_t4_ParamLimits

0xdb2e,	// (0x0001d247) main_pane_set_t4

0x0003,

0xf97c,	// (0x0001f095) main_pane_set_t_ParamLimits

0xf97c,	// (0x0001f095) main_pane_set_t

0xdb40,	// (0x0001d259) setting_code_pane

0xdb4a,	// (0x0001d263) setting_slider_graphic_pane

0xdb4a,	// (0x0001d263) setting_slider_pane

0xdb4a,	// (0x0001d263) setting_text_pane

0xdb4a,	// (0x0001d263) setting_volume_pane

0x03bf,	// (0x0000fad8) volume_set_pane

0x2652,	// (0x00011d6b) bg_set_opt_pane_cp

0x03c7,	// (0x0000fae0) setting_slider_pane_t1

0x03e0,	// (0x0000faf9) setting_slider_pane_t2

0x03fa,	// (0x0000fb13) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001ec77) setting_slider_pane_t

0x0412,	// (0x0000fb2b) slider_set_pane

0x2572,	// (0x00011c8b) bg_set_opt_pane_cp2

0x2694,	// (0x00011dad) setting_slider_graphic_pane_g1

0x0428,	// (0x0000fb41) setting_slider_graphic_pane_t1

0x0438,	// (0x0000fb51) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001ec7e) setting_slider_graphic_pane_t

0x0448,	// (0x0000fb61) slider_set_pane_cp

0x2572,	// (0x00011c8b) input_focus_pane_cp1

0x605e,	// (0x00015777) list_set_text_pane

0x2568,	// (0x00011c81) setting_text_pane_g1

0x2572,	// (0x00011c8b) input_focus_pane_cp2

0x2568,	// (0x00011c81) setting_code_pane_g1

0x269d,	// (0x00011db6) setting_code_pane_t1

0x26ab,	// (0x00011dc4) set_text_pane_t1_ParamLimits

0x26ab,	// (0x00011dc4) set_text_pane_t1

0x357f,	// (0x00012c98) set_opt_bg_pane_g1

0x3587,	// (0x00012ca0) set_opt_bg_pane_g2

0x6038,	// (0x00015751) set_opt_bg_pane_g3

0x3597,	// (0x00012cb0) set_opt_bg_pane_g4

0x359f,	// (0x00012cb8) set_opt_bg_pane_g5

0x35a7,	// (0x00012cc0) set_opt_bg_pane_g6

0x6042,	// (0x0001575b) set_opt_bg_pane_g7

0x604a,	// (0x00015763) set_opt_bg_pane_g8

0x6054,	// (0x0001576d) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x0001f082) set_opt_bg_pane_g

0x602b,	// (0x00015744) slider_set_pane_g1

0x1382,	// (0x00010a9b) slider_set_pane_g2

0x0006,

0xf95a,	// (0x0001f073) slider_set_pane_g

0x131e,	// (0x00010a37) volume_set_pane_g1

0x1326,	// (0x00010a3f) volume_set_pane_g2

0x132e,	// (0x00010a47) volume_set_pane_g3

0x1336,	// (0x00010a4f) volume_set_pane_g4

0x133e,	// (0x00010a57) volume_set_pane_g5

0x1346,	// (0x00010a5f) volume_set_pane_g6

0x134e,	// (0x00010a67) volume_set_pane_g7

0x1356,	// (0x00010a6f) volume_set_pane_g8

0x135e,	// (0x00010a77) volume_set_pane_g9

0x1366,	// (0x00010a7f) volume_set_pane_g10

0x0009,

0xf932,	// (0x0001f04b) volume_set_pane_g

0xc7d4,	// (0x0001beed) indicator_pane_ParamLimits

0xc7d4,	// (0x0001beed) indicator_pane

0xc7fc,	// (0x0001bf15) main_idle_pane_g2_ParamLimits

0xc7fc,	// (0x0001bf15) main_idle_pane_g2

0xc834,	// (0x0001bf4d) main_pane_idle_g1_ParamLimits

0xc834,	// (0x0001bf4d) main_pane_idle_g1

0x2706,	// (0x00011e1f) popup_clock_digital_analogue_window_ParamLimits

0x2706,	// (0x00011e1f) popup_clock_digital_analogue_window

0xc85b,	// (0x0001bf74) soft_indicator_pane_ParamLimits

0xc85b,	// (0x0001bf74) soft_indicator_pane

0xc875,	// (0x0001bf8e) wallpaper_pane_ParamLimits

0xc875,	// (0x0001bf8e) wallpaper_pane

0x2568,	// (0x00011c81) wallpaper_pane_g1

0xc887,	// (0x0001bfa0) indicator_pane_g1_ParamLimits

0xc887,	// (0x0001bfa0) indicator_pane_g1

0x652c,	// (0x00015c45) navi_navi_icon_text_pane_srt_g1

0x2758,	// (0x00011e71) soft_indicator_pane_t1

0x2772,	// (0x00011e8b) aid_ps_area_pane

0xc89d,	// (0x0001bfb6) aid_ps_clock_pane

0x2791,	// (0x00011eaa) aid_ps_indicator_pane

0x279d,	// (0x00011eb6) indicator_ps_pane_ParamLimits

0x279d,	// (0x00011eb6) indicator_ps_pane

0x27ac,	// (0x00011ec5) power_save_pane_g1_ParamLimits

0x27ac,	// (0x00011ec5) power_save_pane_g1

0x27b8,	// (0x00011ed1) power_save_pane_g2_ParamLimits

0x27b8,	// (0x00011ed1) power_save_pane_g2

0xf52e,	// (0x0001ec47) aid_navinavi_width_pane

0x2772,	// (0x00011e8b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001ec83) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001ec83) power_save_pane_g

0x27c6,	// (0x00011edf) power_save_pane_t1_ParamLimits

0x27c6,	// (0x00011edf) power_save_pane_t1

0xc89d,	// (0x0001bfb6) aid_ps_clock_pane_ParamLimits

0x2791,	// (0x00011eaa) aid_ps_indicator_pane_ParamLimits

0x27d8,	// (0x00011ef1) power_save_pane_t4_ParamLimits

0x27d8,	// (0x00011ef1) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001ec88) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001ec88) power_save_pane_t

0x2802,	// (0x00011f1b) power_save_t3_ParamLimits

0x2802,	// (0x00011f1b) power_save_t3

0x27ed,	// (0x00011f06) power_save_t2_ParamLimits

0x27ed,	// (0x00011f06) power_save_t2

0x2817,	// (0x00011f30) indicator_ps_pane_g1

0xc8ab,	// (0x0001bfc4) ai_gene_pane_ParamLimits

0xc8ab,	// (0x0001bfc4) ai_gene_pane

0xc8c2,	// (0x0001bfdb) ai_links_pane_ParamLimits

0xc8c2,	// (0x0001bfdb) ai_links_pane

0xc8da,	// (0x0001bff3) indicator_pane_cp1_ParamLimits

0xc8da,	// (0x0001bff3) indicator_pane_cp1

0xc8e9,	// (0x0001c002) main_pane_idle_g1_cp_ParamLimits

0xc8e9,	// (0x0001c002) main_pane_idle_g1_cp

0x2850,	// (0x00011f69) popup_ai_links_title_window

0xc901,	// (0x0001c01a) soft_indicator_pane_cp1_ParamLimits

0xc901,	// (0x0001c01a) soft_indicator_pane_cp1

0x5df1,	// (0x0001550a) ai_links_pane_g1

0x5dfa,	// (0x00015513) grid_ai_links_pane

0xd97f,	// (0x0001d098) ai_gene_pane_1

0x5ddf,	// (0x000154f8) ai_gene_pane_2

0x5de8,	// (0x00015501) list_highlight_pane_cp4

0xd95b,	// (0x0001d074) cell_ai_link_pane_ParamLimits

0xd95b,	// (0x0001d074) cell_ai_link_pane

0x5db0,	// (0x000154c9) cell_ai_link_pane_g1

0x2a89,	// (0x000121a2) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x0001f026) cell_ai_link_pane_g

0x2572,	// (0x00011c8b) grid_highlight_cp2

0x2572,	// (0x00011c8b) bg_popup_sub_pane_cp1

0x2873,	// (0x00011f8c) popup_ai_links_title_window_t1

0x5cfe,	// (0x00015417) ai_gene_pane_1_g1_ParamLimits

0x5cfe,	// (0x00015417) ai_gene_pane_1_g1

0x5d0a,	// (0x00015423) ai_gene_pane_1_g2_ParamLimits

0x5d0a,	// (0x00015423) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0001f01c) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0001f01c) ai_gene_pane_1_g

0x5d17,	// (0x00015430) ai_gene_pane_1_t1_ParamLimits

0x5d17,	// (0x00015430) ai_gene_pane_1_t1

0x5d4b,	// (0x00015464) grid_ai_soft_ind_pane

0x5ce9,	// (0x00015402) ai_gene_pane_2_t1_ParamLimits

0x5ce9,	// (0x00015402) ai_gene_pane_2_t1

0xc915,	// (0x0001c02e) main_pane_empty_t1_ParamLimits

0xc915,	// (0x0001c02e) main_pane_empty_t1

0xc92d,	// (0x0001c046) main_pane_empty_t2_ParamLimits

0xc92d,	// (0x0001c046) main_pane_empty_t2

0xc942,	// (0x0001c05b) main_pane_empty_t3_ParamLimits

0xc942,	// (0x0001c05b) main_pane_empty_t3

0xc954,	// (0x0001c06d) main_pane_empty_t4_ParamLimits

0xc954,	// (0x0001c06d) main_pane_empty_t4

0xc966,	// (0x0001c07f) main_pane_empty_t5_ParamLimits

0xc966,	// (0x0001c07f) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001ec8d) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001ec8d) main_pane_empty_t

0x367c,	// (0x00012d95) bg_popup_window_pane_ParamLimits

0x367c,	// (0x00012d95) bg_popup_window_pane

0x5a59,	// (0x00015172) find_popup_pane_cp2_ParamLimits

0x5a59,	// (0x00015172) find_popup_pane_cp2

0x5a65,	// (0x0001517e) heading_pane_ParamLimits

0x5a65,	// (0x0001517e) heading_pane

0x2572,	// (0x00011c8b) bg_popup_sub_pane

0xd8dc,	// (0x0001cff5) bg_popup_window_pane_g1_ParamLimits

0xd8dc,	// (0x0001cff5) bg_popup_window_pane_g1

0xd8eb,	// (0x0001d004) bg_popup_window_pane_g2_ParamLimits

0xd8eb,	// (0x0001d004) bg_popup_window_pane_g2

0xd8f7,	// (0x0001d010) bg_popup_window_pane_g3_ParamLimits

0xd8f7,	// (0x0001d010) bg_popup_window_pane_g3

0xd903,	// (0x0001d01c) bg_popup_window_pane_g4_ParamLimits

0xd903,	// (0x0001d01c) bg_popup_window_pane_g4

0xd912,	// (0x0001d02b) bg_popup_window_pane_g5_ParamLimits

0xd912,	// (0x0001d02b) bg_popup_window_pane_g5

0xd922,	// (0x0001d03b) bg_popup_window_pane_g6_ParamLimits

0xd922,	// (0x0001d03b) bg_popup_window_pane_g6

0xd92e,	// (0x0001d047) bg_popup_window_pane_g7_ParamLimits

0xd92e,	// (0x0001d047) bg_popup_window_pane_g7

0xd93d,	// (0x0001d056) bg_popup_window_pane_g8_ParamLimits

0xd93d,	// (0x0001d056) bg_popup_window_pane_g8

0xd94c,	// (0x0001d065) bg_popup_window_pane_g9_ParamLimits

0xd94c,	// (0x0001d065) bg_popup_window_pane_g9

0x5a3f,	// (0x00015158) bg_popup_window_pane_g10_ParamLimits

0x5a3f,	// (0x00015158) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x0001efe4) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x0001efe4) bg_popup_window_pane_g

0x5968,	// (0x00015081) bg_popup_heading_pane_ParamLimits

0x5968,	// (0x00015081) bg_popup_heading_pane

0x140a,	// (0x00010b23) tabs_4_passive_pane_cp_srt_ParamLimits

0x140a,	// (0x00010b23) tabs_4_passive_pane_cp_srt

0x141c,	// (0x00010b35) tabs_4_passive_pane_srt_ParamLimits

0x597c,	// (0x00015095) heading_pane_g2

0x141c,	// (0x00010b35) tabs_4_passive_pane_srt

0x4ca5,	// (0x000143be) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4ca5,	// (0x000143be) bg_passive_tab_pane_cp3_srt

0x5984,	// (0x0001509d) heading_pane_t1_ParamLimits

0x5984,	// (0x0001509d) heading_pane_t1

0x599b,	// (0x000150b4) heading_pane_t2_ParamLimits

0x599b,	// (0x000150b4) heading_pane_t2

0x0001,

0xf8c6,	// (0x0001efdf) heading_pane_t_ParamLimits

0xf8c6,	// (0x0001efdf) heading_pane_t

0x5489,	// (0x00014ba2) bg_popup_heading_pane_g1

0x5538,	// (0x00014c51) bg_popup_heading_pane_g2

0x5542,	// (0x00014c5b) bg_popup_heading_pane_g3

0x554c,	// (0x00014c65) bg_popup_heading_pane_g4

0x5556,	// (0x00014c6f) bg_popup_heading_pane_g5

0x5560,	// (0x00014c79) bg_popup_heading_pane_g6

0x5568,	// (0x00014c81) bg_popup_heading_pane_g7

0x5570,	// (0x00014c89) bg_popup_heading_pane_g8

0x557a,	// (0x00014c93) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0001ef9b) bg_popup_heading_pane_g

0x4b77,	// (0x00014290) bg_popup_sub_pane_g1

0x4b87,	// (0x000142a0) bg_popup_sub_pane_g2

0x4b7f,	// (0x00014298) bg_popup_sub_pane_g3

0x4b97,	// (0x000142b0) bg_popup_sub_pane_g4

0x4b8f,	// (0x000142a8) bg_popup_sub_pane_g5

0x4b9f,	// (0x000142b8) bg_popup_sub_pane_g6

0x4ba7,	// (0x000142c0) bg_popup_sub_pane_g7

0x4bb7,	// (0x000142d0) bg_popup_sub_pane_g8

0x4baf,	// (0x000142c8) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x0001ef75) bg_popup_sub_pane_g

0x28e7,	// (0x00012000) bg_popup_window_pane_cp5_ParamLimits

0x28e7,	// (0x00012000) bg_popup_window_pane_cp5

0x2903,	// (0x0001201c) popup_note_window_g1_ParamLimits

0x2903,	// (0x0001201c) popup_note_window_g1

0x290f,	// (0x00012028) popup_note_window_t1_ParamLimits

0x290f,	// (0x00012028) popup_note_window_t1

0x2925,	// (0x0001203e) popup_note_window_t2_ParamLimits

0x2925,	// (0x0001203e) popup_note_window_t2

0x293b,	// (0x00012054) popup_note_window_t3_ParamLimits

0x293b,	// (0x00012054) popup_note_window_t3

0x2951,	// (0x0001206a) popup_note_window_t4_ParamLimits

0x2951,	// (0x0001206a) popup_note_window_t4

0x2979,	// (0x00012092) popup_note_window_t5_ParamLimits

0x2979,	// (0x00012092) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001ec98) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001ec98) popup_note_window_t

0x299d,	// (0x000120b6) bg_popup_window_pane_cp6_ParamLimits

0x299d,	// (0x000120b6) bg_popup_window_pane_cp6

0x5405,	// (0x00014b1e) popup_note_image_window_g1_ParamLimits

0x5405,	// (0x00014b1e) popup_note_image_window_g1

0x5411,	// (0x00014b2a) popup_note_image_window_g2_ParamLimits

0x5411,	// (0x00014b2a) popup_note_image_window_g2

0x0001,

0xf850,	// (0x0001ef69) popup_note_image_window_g_ParamLimits

0xf850,	// (0x0001ef69) popup_note_image_window_g

0x542a,	// (0x00014b43) popup_note_image_window_t1_ParamLimits

0x542a,	// (0x00014b43) popup_note_image_window_t1

0x5443,	// (0x00014b5c) popup_note_image_window_t2_ParamLimits

0x5443,	// (0x00014b5c) popup_note_image_window_t2

0x545c,	// (0x00014b75) popup_note_image_window_t3_ParamLimits

0x545c,	// (0x00014b75) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0001ef6e) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0001ef6e) popup_note_image_window_t

0x52c6,	// (0x000149df) bg_popup_window_pane_cp7_ParamLimits

0x52c6,	// (0x000149df) bg_popup_window_pane_cp7

0x52f6,	// (0x00014a0f) popup_note_wait_window_g1_ParamLimits

0x52f6,	// (0x00014a0f) popup_note_wait_window_g1

0x5302,	// (0x00014a1b) popup_note_wait_window_g2_ParamLimits

0x5302,	// (0x00014a1b) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x0001ef57) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x0001ef57) popup_note_wait_window_g

0x531a,	// (0x00014a33) popup_note_wait_window_t1_ParamLimits

0x531a,	// (0x00014a33) popup_note_wait_window_t1

0x5341,	// (0x00014a5a) popup_note_wait_window_t2_ParamLimits

0x5341,	// (0x00014a5a) popup_note_wait_window_t2

0x535e,	// (0x00014a77) popup_note_wait_window_t3_ParamLimits

0x535e,	// (0x00014a77) popup_note_wait_window_t3

0x5371,	// (0x00014a8a) popup_note_wait_window_t4_ParamLimits

0x5371,	// (0x00014a8a) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0001ef5e) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0001ef5e) popup_note_wait_window_t

0x5396,	// (0x00014aaf) wait_bar_pane_ParamLimits

0x5396,	// (0x00014aaf) wait_bar_pane

0x2572,	// (0x00011c8b) wait_anim_pane

0x2572,	// (0x00011c8b) wait_border_pane

0x2568,	// (0x00011c81) wait_anim_pane_g1

0x2568,	// (0x00011c81) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001ee17) wait_anim_pane_g

0x526a,	// (0x00014983) wait_border_pane_g1

0x5275,	// (0x0001498e) wait_border_pane_g2

0x527e,	// (0x00014997) wait_border_pane_g3

0x0002,

0xf837,	// (0x0001ef50) wait_border_pane_g

0x50d5,	// (0x000147ee) bg_popup_window_pane_cp16_ParamLimits

0x50d5,	// (0x000147ee) bg_popup_window_pane_cp16

0x51d5,	// (0x000148ee) indicator_popup_pane_cp4_ParamLimits

0x51d5,	// (0x000148ee) indicator_popup_pane_cp4

0x51e9,	// (0x00014902) popup_query_data_window_t1_ParamLimits

0x51e9,	// (0x00014902) popup_query_data_window_t1

0x51fb,	// (0x00014914) popup_query_data_window_t2_ParamLimits

0x51fb,	// (0x00014914) popup_query_data_window_t2

0x5214,	// (0x0001492d) popup_query_data_window_t3_ParamLimits

0x5214,	// (0x0001492d) popup_query_data_window_t3

0x0002,

0xf830,	// (0x0001ef49) popup_query_data_window_t_ParamLimits

0xf830,	// (0x0001ef49) popup_query_data_window_t

0x522e,	// (0x00014947) query_popup_data_pane_ParamLimits

0x522e,	// (0x00014947) query_popup_data_pane

0x5242,	// (0x0001495b) query_popup_data_pane_cp1_ParamLimits

0x5242,	// (0x0001495b) query_popup_data_pane_cp1

0x50d5,	// (0x000147ee) bg_popup_window_pane_cp10_ParamLimits

0x50d5,	// (0x000147ee) bg_popup_window_pane_cp10

0x5107,	// (0x00014820) indicator_popup_pane_ParamLimits

0x5107,	// (0x00014820) indicator_popup_pane

0x5129,	// (0x00014842) popup_query_code_window_t1_ParamLimits

0x5129,	// (0x00014842) popup_query_code_window_t1

0x5143,	// (0x0001485c) popup_query_code_window_t2_ParamLimits

0x5143,	// (0x0001485c) popup_query_code_window_t2

0x518c,	// (0x000148a5) popup_query_code_window_t3_ParamLimits

0x518c,	// (0x000148a5) popup_query_code_window_t3

0x0002,

0xf829,	// (0x0001ef42) popup_query_code_window_t_ParamLimits

0xf829,	// (0x0001ef42) popup_query_code_window_t

0x51bb,	// (0x000148d4) query_popup_pane_ParamLimits

0x51bb,	// (0x000148d4) query_popup_pane

0x299d,	// (0x000120b6) bg_popup_window_pane_cp15_ParamLimits

0x299d,	// (0x000120b6) bg_popup_window_pane_cp15

0x29bb,	// (0x000120d4) indicator_popup_pane_cp1_ParamLimits

0x29bb,	// (0x000120d4) indicator_popup_pane_cp1

0x29ce,	// (0x000120e7) indicator_popup_pane_cp2_ParamLimits

0x29ce,	// (0x000120e7) indicator_popup_pane_cp2

0x29e1,	// (0x000120fa) popup_query_data_code_window_g1_ParamLimits

0x29e1,	// (0x000120fa) popup_query_data_code_window_g1

0x29f4,	// (0x0001210d) popup_query_data_code_window_t1_ParamLimits

0x29f4,	// (0x0001210d) popup_query_data_code_window_t1

0x2a06,	// (0x0001211f) popup_query_data_code_window_t2_ParamLimits

0x2a06,	// (0x0001211f) popup_query_data_code_window_t2

0x2a18,	// (0x00012131) popup_query_data_code_window_t3_ParamLimits

0x2a18,	// (0x00012131) popup_query_data_code_window_t3

0x2a2e,	// (0x00012147) popup_query_data_code_window_t4_ParamLimits

0x2a2e,	// (0x00012147) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001eca3) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001eca3) popup_query_data_code_window_t

0x10cb,	// (0x000107e4) list_single_midp_graphic_pane_g3

0x2a46,	// (0x0001215f) query_popup_data_pane_cp2_ParamLimits

0x2a59,	// (0x00012172) query_popup_pane_cp2_ParamLimits

0x2a59,	// (0x00012172) query_popup_pane_cp2

0x2572,	// (0x00011c8b) bg_popup_window_pane_cp11

0x50cd,	// (0x000147e6) heading_pane_cp5

0x2b44,	// (0x0001225d) listscroll_popup_info_pane

0x2572,	// (0x00011c8b) input_focus_pane_cp3

0x2a6c,	// (0x00012185) query_popup_pane_t1

0x2a7a,	// (0x00012193) list_popup_info_pane_ParamLimits

0x2a7a,	// (0x00012193) list_popup_info_pane

0x2a89,	// (0x000121a2) listscroll_popup_info_pane_g1

0x2a91,	// (0x000121aa) scroll_pane_cp7

0x2a9b,	// (0x000121b4) popup_info_list_pane_t1_ParamLimits

0x2a9b,	// (0x000121b4) popup_info_list_pane_t1

0x2ab5,	// (0x000121ce) popup_info_list_pane_t2_ParamLimits

0x2ab5,	// (0x000121ce) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001ecac) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001ecac) popup_info_list_pane_t

0x2572,	// (0x00011c8b) bg_popup_window_pane_cp12

0x6546,	// (0x00015c5f) find_popup_pane

0x2652,	// (0x00011d6b) bg_popup_window_pane_cp3

0x2acf,	// (0x000121e8) heading_pane_cp3

0x2adb,	// (0x000121f4) listscroll_popup_graphic_pane

0x2572,	// (0x00011c8b) bg_popup_window_pane_cp4

0xc9c8,	// (0x0001c0e1) heading_pane_cp4

0x2b44,	// (0x0001225d) listscroll_popup_colour_pane

0x2b4c,	// (0x00012265) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2b4c,	// (0x00012265) cell_large_graphic_colour_none_popup_pane

0xc9d0,	// (0x0001c0e9) grid_large_graphic_colour_popup_pane_ParamLimits

0xc9d0,	// (0x0001c0e9) grid_large_graphic_colour_popup_pane

0x2b8c,	// (0x000122a5) listscroll_popup_colour_pane_g1_ParamLimits

0x2b8c,	// (0x000122a5) listscroll_popup_colour_pane_g1

0x2ba3,	// (0x000122bc) listscroll_popup_colour_pane_g2_ParamLimits

0x2ba3,	// (0x000122bc) listscroll_popup_colour_pane_g2

0x2bba,	// (0x000122d3) listscroll_popup_colour_pane_g3_ParamLimits

0x2bba,	// (0x000122d3) listscroll_popup_colour_pane_g3

0xc9f4,	// (0x0001c10d) listscroll_popup_colour_pane_g4_ParamLimits

0xc9f4,	// (0x0001c10d) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001ecb1) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001ecb1) listscroll_popup_colour_pane_g

0x2bde,	// (0x000122f7) scroll_pane_cp6_ParamLimits

0x2bde,	// (0x000122f7) scroll_pane_cp6

0xca04,	// (0x0001c11d) cell_large_graphic_colour_popup_pane_ParamLimits

0xca04,	// (0x0001c11d) cell_large_graphic_colour_popup_pane

0x2c0f,	// (0x00012328) cell_large_graphic_colour_none_popup_pane_t1

0x2572,	// (0x00011c8b) grid_highlight_pane_cp5

0x2c1e,	// (0x00012337) cell_large_graphic_colour_popup_pane_g1

0x2c26,	// (0x0001233f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001ecba) cell_large_graphic_colour_popup_pane_g

0x2c2e,	// (0x00012347) cell_large_graphic_colour_popup_pane_g2_copy1

0x2c37,	// (0x00012350) grid_highlight_pane_cp4

0x2c3f,	// (0x00012358) bg_popup_window_pane_cp8_ParamLimits

0x2c3f,	// (0x00012358) bg_popup_window_pane_cp8

0x2c5a,	// (0x00012373) popup_snote_single_text_window_g1_ParamLimits

0x2c5a,	// (0x00012373) popup_snote_single_text_window_g1

0x2c6c,	// (0x00012385) popup_snote_single_text_window_t1_ParamLimits

0x2c6c,	// (0x00012385) popup_snote_single_text_window_t1

0x2c7f,	// (0x00012398) popup_snote_single_text_window_t2_ParamLimits

0x2c7f,	// (0x00012398) popup_snote_single_text_window_t2

0x2c92,	// (0x000123ab) popup_snote_single_text_window_t3_ParamLimits

0x2c92,	// (0x000123ab) popup_snote_single_text_window_t3

0x2ccb,	// (0x000123e4) popup_snote_single_text_window_t4_ParamLimits

0x2ccb,	// (0x000123e4) popup_snote_single_text_window_t4

0x2cff,	// (0x00012418) popup_snote_single_text_window_t5_ParamLimits

0x2cff,	// (0x00012418) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001ecbf) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001ecbf) popup_snote_single_text_window_t

0x2d2e,	// (0x00012447) bg_popup_window_pane_cp9_ParamLimits

0x2d2e,	// (0x00012447) bg_popup_window_pane_cp9

0x2c5a,	// (0x00012373) popup_snote_single_graphic_window_g1_ParamLimits

0x2c5a,	// (0x00012373) popup_snote_single_graphic_window_g1

0x2d3c,	// (0x00012455) popup_snote_single_graphic_window_g2_ParamLimits

0x2d3c,	// (0x00012455) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001ecca) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001ecca) popup_snote_single_graphic_window_g

0x2d48,	// (0x00012461) popup_snote_single_graphic_window_t1_ParamLimits

0x2d48,	// (0x00012461) popup_snote_single_graphic_window_t1

0x2d5b,	// (0x00012474) popup_snote_single_graphic_window_t2_ParamLimits

0x2d5b,	// (0x00012474) popup_snote_single_graphic_window_t2

0x2d6e,	// (0x00012487) popup_snote_single_graphic_window_t3_ParamLimits

0x2d6e,	// (0x00012487) popup_snote_single_graphic_window_t3

0x2da7,	// (0x000124c0) popup_snote_single_graphic_window_t4_ParamLimits

0x2da7,	// (0x000124c0) popup_snote_single_graphic_window_t4

0x2ddb,	// (0x000124f4) popup_snote_single_graphic_window_t5_ParamLimits

0x2ddb,	// (0x000124f4) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001eccf) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001eccf) popup_snote_single_graphic_window_t

0xdc80,	// (0x0001d399) grid_graphic_popup_pane_ParamLimits

0xdc80,	// (0x0001d399) grid_graphic_popup_pane

0x64b2,	// (0x00015bcb) listscroll_popup_graphic_pane_g1_ParamLimits

0x64b2,	// (0x00015bcb) listscroll_popup_graphic_pane_g1

0xdc9f,	// (0x0001d3b8) listscroll_popup_graphic_pane_g2_ParamLimits

0xdc9f,	// (0x0001d3b8) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0001f0bf) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0001f0bf) listscroll_popup_graphic_pane_g

0x64da,	// (0x00015bf3) scroll_pane_cp5

0xdc3c,	// (0x0001d355) cell_graphic_popup_pane_ParamLimits

0xdc3c,	// (0x0001d355) cell_graphic_popup_pane

0x6407,	// (0x00015b20) cell_graphic_popup_pane_g1

0x640f,	// (0x00015b28) cell_graphic_popup_pane_g2

0x2c2e,	// (0x00012347) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0001f0b8) cell_graphic_popup_pane_g

0x6418,	// (0x00015b31) cell_graphic_popup_pane_t2

0x2c37,	// (0x00012350) grid_highlight_pane_cp3

0x2e1c,	// (0x00012535) list_gen_pane_ParamLimits

0x2e1c,	// (0x00012535) list_gen_pane

0x2e4e,	// (0x00012567) scroll_pane

0xdbf3,	// (0x0001d30c) bg_list_pane_g1_ParamLimits

0xdbf3,	// (0x0001d30c) bg_list_pane_g1

0x637c,	// (0x00015a95) bg_list_pane_g2_ParamLimits

0x637c,	// (0x00015a95) bg_list_pane_g2

0x6391,	// (0x00015aaa) bg_list_pane_g3_ParamLimits

0x6391,	// (0x00015aaa) bg_list_pane_g3

0x63a5,	// (0x00015abe) bg_list_pane_g4_ParamLimits

0x63a5,	// (0x00015abe) bg_list_pane_g4

0xdc10,	// (0x0001d329) bg_list_pane_g5_ParamLimits

0xdc10,	// (0x0001d329) bg_list_pane_g5

0x0004,

0xf994,	// (0x0001f0ad) bg_list_pane_g_ParamLimits

0xf994,	// (0x0001f0ad) bg_list_pane_g

0xdb99,	// (0x0001d2b2) list_double2_graphic_large_graphic_pane_ParamLimits

0xdb99,	// (0x0001d2b2) list_double2_graphic_large_graphic_pane

0xdb99,	// (0x0001d2b2) list_double2_graphic_pane_ParamLimits

0xdb99,	// (0x0001d2b2) list_double2_graphic_pane

0xdb99,	// (0x0001d2b2) list_double2_large_graphic_pane_ParamLimits

0xdb99,	// (0x0001d2b2) list_double2_large_graphic_pane

0xdb99,	// (0x0001d2b2) list_double2_pane_ParamLimits

0xdb99,	// (0x0001d2b2) list_double2_pane

0xdb99,	// (0x0001d2b2) list_double_graphic_heading_pane_ParamLimits

0xdb99,	// (0x0001d2b2) list_double_graphic_heading_pane

0xdb99,	// (0x0001d2b2) list_double_graphic_pane_ParamLimits

0xdb99,	// (0x0001d2b2) list_double_graphic_pane

0xdb99,	// (0x0001d2b2) list_double_heading_pane_ParamLimits

0xdb99,	// (0x0001d2b2) list_double_heading_pane

0xdb99,	// (0x0001d2b2) list_double_large_graphic_pane_ParamLimits

0xdb99,	// (0x0001d2b2) list_double_large_graphic_pane

0xdb99,	// (0x0001d2b2) list_double_number_pane_ParamLimits

0xdb99,	// (0x0001d2b2) list_double_number_pane

0xdb99,	// (0x0001d2b2) list_double_pane_ParamLimits

0xdb99,	// (0x0001d2b2) list_double_pane

0xdb99,	// (0x0001d2b2) list_double_time_pane_ParamLimits

0xdb99,	// (0x0001d2b2) list_double_time_pane

0xdb99,	// (0x0001d2b2) list_setting_number_pane_ParamLimits

0xdb99,	// (0x0001d2b2) list_setting_number_pane

0xdb99,	// (0x0001d2b2) list_setting_pane_ParamLimits

0xdb99,	// (0x0001d2b2) list_setting_pane

0xdbab,	// (0x0001d2c4) list_single_2graphic_pane_ParamLimits

0xdbab,	// (0x0001d2c4) list_single_2graphic_pane

0xdbab,	// (0x0001d2c4) list_single_graphic_heading_pane_ParamLimits

0xdbab,	// (0x0001d2c4) list_single_graphic_heading_pane

0xdbab,	// (0x0001d2c4) list_single_graphic_pane_ParamLimits

0xdbab,	// (0x0001d2c4) list_single_graphic_pane

0xdbab,	// (0x0001d2c4) list_single_heading_pane_ParamLimits

0xdbab,	// (0x0001d2c4) list_single_heading_pane

0xdbab,	// (0x0001d2c4) list_single_large_graphic_pane_ParamLimits

0xdbab,	// (0x0001d2c4) list_single_large_graphic_pane

0xdbab,	// (0x0001d2c4) list_single_number_heading_pane_ParamLimits

0xdbab,	// (0x0001d2c4) list_single_number_heading_pane

0xdbab,	// (0x0001d2c4) list_single_number_pane_ParamLimits

0xdbab,	// (0x0001d2c4) list_single_number_pane

0xdbab,	// (0x0001d2c4) list_single_pane_ParamLimits

0xdbab,	// (0x0001d2c4) list_single_pane

0x2572,	// (0x00011c8b) list_highlight_pane_cp1

0x422a,	// (0x00013943) list_single_pane_g1_ParamLimits

0x422a,	// (0x00013943) list_single_pane_g1

0x4af9,	// (0x00014212) list_single_pane_g2_ParamLimits

0x4af9,	// (0x00014212) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001ece1) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001ece1) list_single_pane_g

0x6b3c,	// (0x00016255) list_single_pane_t1_ParamLimits

0x6b3c,	// (0x00016255) list_single_pane_t1

0x422a,	// (0x00013943) list_single_number_pane_g1_ParamLimits

0x422a,	// (0x00013943) list_single_number_pane_g1

0x4af9,	// (0x00014212) list_single_number_pane_g2_ParamLimits

0x4af9,	// (0x00014212) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001ece1) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001ece1) list_single_number_pane_g

0x4b05,	// (0x0001421e) list_single_number_pane_t1_ParamLimits

0x4b05,	// (0x0001421e) list_single_number_pane_t1

0xd9ea,	// (0x0001d103) list_single_number_pane_t2_ParamLimits

0xd9ea,	// (0x0001d103) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0001f06e) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0001f06e) list_single_number_pane_t

0xca2d,	// (0x0001c146) list_single_graphic_pane_g1_ParamLimits

0xca2d,	// (0x0001c146) list_single_graphic_pane_g1

0x422a,	// (0x00013943) list_single_graphic_pane_g2_ParamLimits

0x422a,	// (0x00013943) list_single_graphic_pane_g2

0x4af9,	// (0x00014212) list_single_graphic_pane_g3_ParamLimits

0x4af9,	// (0x00014212) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001ecda) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001ecda) list_single_graphic_pane_g

0xca39,	// (0x0001c152) list_single_graphic_pane_t1_ParamLimits

0xca39,	// (0x0001c152) list_single_graphic_pane_t1

0x422a,	// (0x00013943) list_single_heading_pane_g1_ParamLimits

0x422a,	// (0x00013943) list_single_heading_pane_g1

0x4af9,	// (0x00014212) list_single_heading_pane_g2_ParamLimits

0x4af9,	// (0x00014212) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001ece1) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001ece1) list_single_heading_pane_g

0xca4f,	// (0x0001c168) list_single_heading_pane_t1_ParamLimits

0xca4f,	// (0x0001c168) list_single_heading_pane_t1

0xca65,	// (0x0001c17e) list_single_heading_pane_t2_ParamLimits

0xca65,	// (0x0001c17e) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001ece6) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001ece6) list_single_heading_pane_t

0x422a,	// (0x00013943) list_single_number_heading_pane_g1_ParamLimits

0x422a,	// (0x00013943) list_single_number_heading_pane_g1

0x4af9,	// (0x00014212) list_single_number_heading_pane_g2_ParamLimits

0x4af9,	// (0x00014212) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001ece1) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001ece1) list_single_number_heading_pane_g

0xca4f,	// (0x0001c168) list_single_number_heading_pane_t1_ParamLimits

0xca4f,	// (0x0001c168) list_single_number_heading_pane_t1

0xca77,	// (0x0001c190) list_single_number_heading_pane_t2_ParamLimits

0xca77,	// (0x0001c190) list_single_number_heading_pane_t2

0x6b16,	// (0x0001622f) list_single_number_heading_pane_t3_ParamLimits

0x6b16,	// (0x0001622f) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001eceb) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001eceb) list_single_number_heading_pane_t

0x4aed,	// (0x00014206) list_single_graphic_heading_pane_g1_ParamLimits

0x4aed,	// (0x00014206) list_single_graphic_heading_pane_g1

0xca89,	// (0x0001c1a2) list_single_graphic_heading_pane_g4_ParamLimits

0xca89,	// (0x0001c1a2) list_single_graphic_heading_pane_g4

0x4af9,	// (0x00014212) list_single_graphic_heading_pane_g5_ParamLimits

0x4af9,	// (0x00014212) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001ecf2) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001ecf2) list_single_graphic_heading_pane_g

0xca4f,	// (0x0001c168) list_single_graphic_heading_pane_t1_ParamLimits

0xca4f,	// (0x0001c168) list_single_graphic_heading_pane_t1

0xca9a,	// (0x0001c1b3) list_single_graphic_heading_pane_t2_ParamLimits

0xca9a,	// (0x0001c1b3) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001ecf9) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001ecf9) list_single_graphic_heading_pane_t

0x6b52,	// (0x0001626b) list_single_large_graphic_pane_g1_ParamLimits

0x6b52,	// (0x0001626b) list_single_large_graphic_pane_g1

0x422a,	// (0x00013943) list_single_large_graphic_pane_g2_ParamLimits

0x422a,	// (0x00013943) list_single_large_graphic_pane_g2

0x4af9,	// (0x00014212) list_single_large_graphic_pane_g3_ParamLimits

0x4af9,	// (0x00014212) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001ecfe) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001ecfe) list_single_large_graphic_pane_g

0x5275,	// (0x0001498e) wait_border_pane_g2_copy1

0xcaac,	// (0x0001c1c5) list_single_large_graphic_pane_g4_cp2

0x6b5e,	// (0x00016277) list_single_large_graphic_pane_t1_ParamLimits

0x6b5e,	// (0x00016277) list_single_large_graphic_pane_t1

0x5924,	// (0x0001503d) list_double_pane_g1_ParamLimits

0x5924,	// (0x0001503d) list_double_pane_g1

0xcab4,	// (0x0001c1cd) list_double_pane_g2_ParamLimits

0xcab4,	// (0x0001c1cd) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001ed05) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001ed05) list_double_pane_g

0x8413,	// (0x00017b2c) list_double_pane_t1_ParamLimits

0x8413,	// (0x00017b2c) list_double_pane_t1

0xcac0,	// (0x0001c1d9) list_double_pane_t2_ParamLimits

0xcac0,	// (0x0001c1d9) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001ed0a) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001ed0a) list_double_pane_t

0xcad2,	// (0x0001c1eb) list_double2_pane_g1_ParamLimits

0xcad2,	// (0x0001c1eb) list_double2_pane_g1

0xcae3,	// (0x0001c1fc) list_double2_pane_g2_ParamLimits

0xcae3,	// (0x0001c1fc) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001ed0f) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001ed0f) list_double2_pane_g

0xcaef,	// (0x0001c208) list_double2_pane_t1_ParamLimits

0xcaef,	// (0x0001c208) list_double2_pane_t1

0xcb05,	// (0x0001c21e) list_double2_pane_t2_ParamLimits

0xcb05,	// (0x0001c21e) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001ed14) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001ed14) list_double2_pane_t

0x5924,	// (0x0001503d) list_double_number_pane_g1_ParamLimits

0x5924,	// (0x0001503d) list_double_number_pane_g1

0xcab4,	// (0x0001c1cd) list_double_number_pane_g2_ParamLimits

0xcab4,	// (0x0001c1cd) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001ed05) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001ed05) list_double_number_pane_g

0xcb17,	// (0x0001c230) list_double_number_pane_t1_ParamLimits

0xcb17,	// (0x0001c230) list_double_number_pane_t1

0xcb29,	// (0x0001c242) list_double_number_pane_t2_ParamLimits

0xcb29,	// (0x0001c242) list_double_number_pane_t2

0xcb3f,	// (0x0001c258) list_double_number_pane_t3_ParamLimits

0xcb3f,	// (0x0001c258) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001ed19) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001ed19) list_double_number_pane_t

0xcb51,	// (0x0001c26a) list_double_graphic_pane_g1_ParamLimits

0xcb51,	// (0x0001c26a) list_double_graphic_pane_g1

0xcb5d,	// (0x0001c276) list_double_graphic_pane_g2_ParamLimits

0xcb5d,	// (0x0001c276) list_double_graphic_pane_g2

0xcb6c,	// (0x0001c285) list_double_graphic_pane_g3_ParamLimits

0xcb6c,	// (0x0001c285) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001ed20) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001ed20) list_double_graphic_pane_g

0xcb84,	// (0x0001c29d) list_double_graphic_pane_t1_ParamLimits

0xcb84,	// (0x0001c29d) list_double_graphic_pane_t1

0xcb9a,	// (0x0001c2b3) list_double_graphic_pane_t2_ParamLimits

0xcb9a,	// (0x0001c2b3) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001ed29) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001ed29) list_double_graphic_pane_t

0xcbac,	// (0x0001c2c5) list_double2_graphic_pane_g1_ParamLimits

0xcbac,	// (0x0001c2c5) list_double2_graphic_pane_g1

0x4115,	// (0x0001382e) list_double2_graphic_pane_g2_ParamLimits

0x4115,	// (0x0001382e) list_double2_graphic_pane_g2

0xcae3,	// (0x0001c1fc) list_double2_graphic_pane_g3_ParamLimits

0xcae3,	// (0x0001c1fc) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001ed2e) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001ed2e) list_double2_graphic_pane_g

0xcbb8,	// (0x0001c2d1) list_double2_graphic_pane_t1_ParamLimits

0xcbb8,	// (0x0001c2d1) list_double2_graphic_pane_t1

0xcbce,	// (0x0001c2e7) list_double2_graphic_pane_t2_ParamLimits

0xcbce,	// (0x0001c2e7) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001ed35) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001ed35) list_double2_graphic_pane_t

0xcbe0,	// (0x0001c2f9) list_double_large_graphic_pane_g1_ParamLimits

0xcbe0,	// (0x0001c2f9) list_double_large_graphic_pane_g1

0xcbff,	// (0x0001c318) list_double_large_graphic_pane_g2_ParamLimits

0xcbff,	// (0x0001c318) list_double_large_graphic_pane_g2

0xcab4,	// (0x0001c1cd) list_double_large_graphic_pane_g3_ParamLimits

0xcab4,	// (0x0001c1cd) list_double_large_graphic_pane_g3

0xcc10,	// (0x0001c329) list_double_large_graphic_pane_g4_ParamLimits

0xcc10,	// (0x0001c329) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001ed3a) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001ed3a) list_double_large_graphic_pane_g

0xcc22,	// (0x0001c33b) list_double_large_graphic_pane_t1_ParamLimits

0xcc22,	// (0x0001c33b) list_double_large_graphic_pane_t1

0xcc3b,	// (0x0001c354) list_double_large_graphic_pane_t2_ParamLimits

0xcc3b,	// (0x0001c354) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001ed45) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001ed45) list_double_large_graphic_pane_t

0xcc4d,	// (0x0001c366) list_double2_large_graphic_pane_g1_ParamLimits

0xcc4d,	// (0x0001c366) list_double2_large_graphic_pane_g1

0xcad2,	// (0x0001c1eb) list_double2_large_graphic_pane_g2_ParamLimits

0xcad2,	// (0x0001c1eb) list_double2_large_graphic_pane_g2

0xcae3,	// (0x0001c1fc) list_double2_large_graphic_pane_g3_ParamLimits

0xcae3,	// (0x0001c1fc) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001ed4a) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001ed4a) list_double2_large_graphic_pane_g

0xcc59,	// (0x0001c372) list_double2_large_graphic_pane_t1_ParamLimits

0xcc59,	// (0x0001c372) list_double2_large_graphic_pane_t1

0xcc6f,	// (0x0001c388) list_double2_large_graphic_pane_t2_ParamLimits

0xcc6f,	// (0x0001c388) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001ed51) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001ed51) list_double2_large_graphic_pane_t

0xcc81,	// (0x0001c39a) list_double_heading_pane_g1_ParamLimits

0xcc81,	// (0x0001c39a) list_double_heading_pane_g1

0xcc92,	// (0x0001c3ab) list_double_heading_pane_g2_ParamLimits

0xcc92,	// (0x0001c3ab) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001ed56) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001ed56) list_double_heading_pane_g

0xcc9e,	// (0x0001c3b7) list_double_heading_pane_t1_ParamLimits

0xcc9e,	// (0x0001c3b7) list_double_heading_pane_t1

0xccb4,	// (0x0001c3cd) list_double_heading_pane_t2_ParamLimits

0xccb4,	// (0x0001c3cd) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001ed5b) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001ed5b) list_double_heading_pane_t

0x3038,	// (0x00012751) list_double_graphic_heading_pane_g1_ParamLimits

0x3038,	// (0x00012751) list_double_graphic_heading_pane_g1

0xcc81,	// (0x0001c39a) list_double_graphic_heading_pane_g2_ParamLimits

0xcc81,	// (0x0001c39a) list_double_graphic_heading_pane_g2

0xcc92,	// (0x0001c3ab) list_double_graphic_heading_pane_g3_ParamLimits

0xcc92,	// (0x0001c3ab) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001ed60) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001ed60) list_double_graphic_heading_pane_g

0xccc6,	// (0x0001c3df) list_double_graphic_heading_pane_t1_ParamLimits

0xccc6,	// (0x0001c3df) list_double_graphic_heading_pane_t1

0xccdc,	// (0x0001c3f5) list_double_graphic_heading_pane_t2_ParamLimits

0xccdc,	// (0x0001c3f5) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001ed67) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001ed67) list_double_graphic_heading_pane_t

0xcbff,	// (0x0001c318) list_double_time_pane_g1_ParamLimits

0xcbff,	// (0x0001c318) list_double_time_pane_g1

0xcab4,	// (0x0001c1cd) list_double_time_pane_g2_ParamLimits

0xcab4,	// (0x0001c1cd) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001ed6c) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001ed6c) list_double_time_pane_g

0xccee,	// (0x0001c407) list_double_time_pane_t1_ParamLimits

0xccee,	// (0x0001c407) list_double_time_pane_t1

0xcd04,	// (0x0001c41d) list_double_time_pane_t2_ParamLimits

0xcd04,	// (0x0001c41d) list_double_time_pane_t2

0xcd16,	// (0x0001c42f) list_double_time_pane_t3_ParamLimits

0xcd16,	// (0x0001c42f) list_double_time_pane_t3

0xcd28,	// (0x0001c441) list_double_time_pane_t4_ParamLimits

0xcd28,	// (0x0001c441) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001ed71) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001ed71) list_double_time_pane_t

0x4115,	// (0x0001382e) list_setting_pane_g1_ParamLimits

0x4115,	// (0x0001382e) list_setting_pane_g1

0xcae3,	// (0x0001c1fc) list_setting_pane_g2_ParamLimits

0xcae3,	// (0x0001c1fc) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001ed7a) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001ed7a) list_setting_pane_g

0xcd3a,	// (0x0001c453) list_setting_pane_t1_ParamLimits

0xcd3a,	// (0x0001c453) list_setting_pane_t1

0xcd51,	// (0x0001c46a) list_setting_pane_t2_ParamLimits

0xcd51,	// (0x0001c46a) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001ed7f) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001ed7f) list_setting_pane_t

0xcd90,	// (0x0001c4a9) set_value_pane_cp_ParamLimits

0xcd90,	// (0x0001c4a9) set_value_pane_cp

0x4115,	// (0x0001382e) list_setting_number_pane_g1_ParamLimits

0x4115,	// (0x0001382e) list_setting_number_pane_g1

0xcae3,	// (0x0001c1fc) list_setting_number_pane_g2_ParamLimits

0xcae3,	// (0x0001c1fc) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001ed7a) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001ed7a) list_setting_number_pane_g

0xcd9c,	// (0x0001c4b5) list_setting_number_pane_t1_ParamLimits

0xcd9c,	// (0x0001c4b5) list_setting_number_pane_t1

0xcdb0,	// (0x0001c4c9) list_setting_number_pane_t2_ParamLimits

0xcdb0,	// (0x0001c4c9) list_setting_number_pane_t2

0xcdc7,	// (0x0001c4e0) list_setting_number_pane_t3_ParamLimits

0xcdc7,	// (0x0001c4e0) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001ed86) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001ed86) list_setting_number_pane_t

0xcd90,	// (0x0001c4a9) set_value_pane_ParamLimits

0xcd90,	// (0x0001c4a9) set_value_pane

0x331d,	// (0x00012a36) bg_set_opt_pane_ParamLimits

0x331d,	// (0x00012a36) bg_set_opt_pane

0x333e,	// (0x00012a57) set_value_pane_t1

0x334c,	// (0x00012a65) slider_set_pane_cp3

0x3355,	// (0x00012a6e) volume_small_pane_cp

0x335e,	// (0x00012a77) list_form_gen_pane

0x3367,	// (0x00012a80) scroll_pane_cp8

0xce0a,	// (0x0001c523) form_field_data_pane_ParamLimits

0xce0a,	// (0x0001c523) form_field_data_pane

0xce21,	// (0x0001c53a) form_field_data_wide_pane_ParamLimits

0xce21,	// (0x0001c53a) form_field_data_wide_pane

0xce41,	// (0x0001c55a) form_field_popup_pane_ParamLimits

0xce41,	// (0x0001c55a) form_field_popup_pane

0xce59,	// (0x0001c572) form_field_popup_wide_pane_ParamLimits

0xce59,	// (0x0001c572) form_field_popup_wide_pane

0x3402,	// (0x00012b1b) form_field_slider_pane_ParamLimits

0x3402,	// (0x00012b1b) form_field_slider_pane

0x3415,	// (0x00012b2e) form_field_slider_wide_pane_ParamLimits

0x3415,	// (0x00012b2e) form_field_slider_wide_pane

0x3428,	// (0x00012b41) data_form_pane

0xce7a,	// (0x0001c593) form_field_data_pane_t1

0x3456,	// (0x00012b6f) input_focus_pane

0x3464,	// (0x00012b7d) data_form_wide_pane

0x3490,	// (0x00012ba9) form_field_data_wide_pane_t1

0x2c4c,	// (0x00012365) input_focus_pane_cp6

0xce94,	// (0x0001c5ad) form_field_popup_pane_t1

0x3456,	// (0x00012b6f) input_focus_pane_cp7

0x34c7,	// (0x00012be0) list_form_pane

0x34db,	// (0x00012bf4) form_field_popup_wide_pane_t1

0x3456,	// (0x00012b6f) input_focus_pane_cp8

0x34f0,	// (0x00012c09) list_form_wide_pane

0xceb6,	// (0x0001c5cf) form_field_slider_pane_t1_ParamLimits

0xceb6,	// (0x0001c5cf) form_field_slider_pane_t1

0xcece,	// (0x0001c5e7) form_field_slider_pane_t2_ParamLimits

0xcece,	// (0x0001c5e7) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001ed96) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001ed96) form_field_slider_pane_t

0x28e7,	// (0x00012000) input_focus_pane_cp9_ParamLimits

0x28e7,	// (0x00012000) input_focus_pane_cp9

0xcee3,	// (0x0001c5fc) slider_cont_pane_ParamLimits

0xcee3,	// (0x0001c5fc) slider_cont_pane

0x353f,	// (0x00012c58) form_field_slider_wide_pane_t1_ParamLimits

0x353f,	// (0x00012c58) form_field_slider_wide_pane_t1

0x3551,	// (0x00012c6a) form_field_slider_wide_pane_t2_ParamLimits

0x3551,	// (0x00012c6a) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001ed9b) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001ed9b) form_field_slider_wide_pane_t

0x28e7,	// (0x00012000) input_focus_pane_cp10_ParamLimits

0x28e7,	// (0x00012000) input_focus_pane_cp10

0xcef7,	// (0x0001c610) slider_cont_pane_cp1_ParamLimits

0xcef7,	// (0x0001c610) slider_cont_pane_cp1

0xcf0b,	// (0x0001c624) slider_form_pane_cp

0x357f,	// (0x00012c98) input_focus_pane_g1

0x3587,	// (0x00012ca0) input_focus_pane_g2

0x358f,	// (0x00012ca8) input_focus_pane_g3

0x3597,	// (0x00012cb0) input_focus_pane_g4

0x359f,	// (0x00012cb8) input_focus_pane_g5

0x35a7,	// (0x00012cc0) input_focus_pane_g6

0x35af,	// (0x00012cc8) input_focus_pane_g7

0x35b7,	// (0x00012cd0) input_focus_pane_g8

0x35bf,	// (0x00012cd8) input_focus_pane_g9

0x2568,	// (0x00011c81) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001eda0) input_focus_pane_g

0x527e,	// (0x00014997) wait_border_pane_g3_copy1

0xcf13,	// (0x0001c62c) data_form_pane_t1

0x2568,	// (0x00011c81) wait_anim_pane_g1_copy1

0xdb7d,	// (0x0001d296) data_form_wide_pane_t1

0xcf2d,	// (0x0001c646) list_form_graphic_pane_cp_ParamLimits

0xcf2d,	// (0x0001c646) list_form_graphic_pane_cp

0x61d3,	// (0x000158ec) slider_form_pane_g1

0x61dc,	// (0x000158f5) slider_form_pane_g2

0x0006,

0xf985,	// (0x0001f09e) slider_form_pane_g

0xcf2d,	// (0x0001c646) list_form_graphic_pane_ParamLimits

0xcf2d,	// (0x0001c646) list_form_graphic_pane

0x3617,	// (0x00012d30) list_form_graphic_pane_g1

0x361f,	// (0x00012d38) list_form_graphic_pane_t1_ParamLimits

0x361f,	// (0x00012d38) list_form_graphic_pane_t1

0x2652,	// (0x00011d6b) list_highlight_pane_cp5_ParamLimits

0x2652,	// (0x00011d6b) list_highlight_pane_cp5

0xcf3f,	// (0x0001c658) find_pane_g1

0x363d,	// (0x00012d56) input_find_pane

0xcf48,	// (0x0001c661) input_find_pane_g1_ParamLimits

0xcf48,	// (0x0001c661) input_find_pane_g1

0xcf54,	// (0x0001c66d) input_find_pane_t1_ParamLimits

0xcf54,	// (0x0001c66d) input_find_pane_t1

0xcf69,	// (0x0001c682) input_find_pane_t2_ParamLimits

0xcf69,	// (0x0001c682) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001edb5) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001edb5) input_find_pane_t

0x367c,	// (0x00012d95) input_focus_pane_cp5_ParamLimits

0x367c,	// (0x00012d95) input_focus_pane_cp5

0x3696,	// (0x00012daf) bg_popup_window_pane_cp2_ParamLimits

0x3696,	// (0x00012daf) bg_popup_window_pane_cp2

0x36a3,	// (0x00012dbc) listscroll_menu_pane_ParamLimits

0x36a3,	// (0x00012dbc) listscroll_menu_pane

0xcf8a,	// (0x0001c6a3) popup_submenu_window_ParamLimits

0xcf8a,	// (0x0001c6a3) popup_submenu_window

0x36db,	// (0x00012df4) find_popup_pane_g1

0x36e3,	// (0x00012dfc) input_popup_find_pane_cp

0x367c,	// (0x00012d95) input_focus_pane_cp4_ParamLimits

0x367c,	// (0x00012d95) input_focus_pane_cp4

0x36f9,	// (0x00012e12) input_popup_find_pane_t1_ParamLimits

0x36f9,	// (0x00012e12) input_popup_find_pane_t1

0x2572,	// (0x00011c8b) bg_popup_sub_pane_cp

0x3727,	// (0x00012e40) listscroll_popup_sub_pane

0x372f,	// (0x00012e48) list_submenu_pane_ParamLimits

0x372f,	// (0x00012e48) list_submenu_pane

0x3740,	// (0x00012e59) scroll_pane_cp4

0x3748,	// (0x00012e61) list_single_popup_submenu_pane_ParamLimits

0x3748,	// (0x00012e61) list_single_popup_submenu_pane

0x375c,	// (0x00012e75) list_single_popup_submenu_pane_g1

0x3764,	// (0x00012e7d) list_single_popup_submenu_pane_t1_ParamLimits

0x3764,	// (0x00012e7d) list_single_popup_submenu_pane_t1

0x28e7,	// (0x00012000) bg_active_tab_pane_cp1_ParamLimits

0x28e7,	// (0x00012000) bg_active_tab_pane_cp1

0x3779,	// (0x00012e92) tabs_2_active_pane_g1

0xcfc4,	// (0x0001c6dd) tabs_2_active_pane_t1

0x28e7,	// (0x00012000) bg_passive_tab_pane_cp1_ParamLimits

0x28e7,	// (0x00012000) bg_passive_tab_pane_cp1

0x3779,	// (0x00012e92) tabs_2_passive_pane_g1

0xcfc4,	// (0x0001c6dd) tabs_2_passive_pane_t1

0x2652,	// (0x00011d6b) bg_active_tab_pane_cp4

0xcfd6,	// (0x0001c6ef) tabs_2_long_active_pane_t1

0x4637,	// (0x00013d50) bg_passive_tab_pane_cp4

0x10d3,	// (0x000107ec) list_single_midp_graphic_pane_g4_ParamLimits

0x2652,	// (0x00011d6b) bg_active_tab_pane_cp5

0xcfe9,	// (0x0001c702) tabs_3_long_active_pane_t1

0x4637,	// (0x00013d50) bg_passive_tab_pane_cp5

0x10d3,	// (0x000107ec) list_single_midp_graphic_pane_g4

0x2652,	// (0x00011d6b) bg_popup_window_pane_cp13_ParamLimits

0x2652,	// (0x00011d6b) bg_popup_window_pane_cp13

0x37db,	// (0x00012ef4) listscroll_popup_fast_pane_ParamLimits

0x37db,	// (0x00012ef4) listscroll_popup_fast_pane

0x37ea,	// (0x00012f03) grid_popup_fast_pane_ParamLimits

0x37ea,	// (0x00012f03) grid_popup_fast_pane

0x37fc,	// (0x00012f15) scroll_pane_cp9_ParamLimits

0x37fc,	// (0x00012f15) scroll_pane_cp9

0x80e2,	// (0x000177fb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x80e2,	// (0x000177fb) list_single_graphic_hl_pane_t1_cp2

0x3820,	// (0x00012f39) input_focus_pane_cp20_ParamLimits

0x3820,	// (0x00012f39) input_focus_pane_cp20

0x382e,	// (0x00012f47) query_popup_data_pane_t1_ParamLimits

0x382e,	// (0x00012f47) query_popup_data_pane_t1

0x3841,	// (0x00012f5a) query_popup_data_pane_t2_ParamLimits

0x3841,	// (0x00012f5a) query_popup_data_pane_t2

0x3887,	// (0x00012fa0) query_popup_data_pane_t3_ParamLimits

0x3887,	// (0x00012fa0) query_popup_data_pane_t3

0x38c8,	// (0x00012fe1) query_popup_data_pane_t4_ParamLimits

0x38c8,	// (0x00012fe1) query_popup_data_pane_t4

0x3904,	// (0x0001301d) query_popup_data_pane_t5_ParamLimits

0x3904,	// (0x0001301d) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001edba) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001edba) query_popup_data_pane_t

0x357f,	// (0x00012c98) bg_set_opt_pane_g1

0x3587,	// (0x00012ca0) bg_set_opt_pane_g2

0x358f,	// (0x00012ca8) bg_set_opt_pane_g3

0x3597,	// (0x00012cb0) bg_set_opt_pane_g4

0x359f,	// (0x00012cb8) bg_set_opt_pane_g5

0x35a7,	// (0x00012cc0) bg_set_opt_pane_g6

0x35af,	// (0x00012cc8) bg_set_opt_pane_g7

0x35b7,	// (0x00012cd0) bg_set_opt_pane_g8

0x35bf,	// (0x00012cd8) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001edc5) bg_set_opt_pane_g

0x06ed,	// (0x0000fe06) control_top_pane_stacon_ParamLimits

0x06ed,	// (0x0000fe06) control_top_pane_stacon

0x0740,	// (0x0000fe59) signal_pane_stacon_ParamLimits

0x0740,	// (0x0000fe59) signal_pane_stacon

0x3f7f,	// (0x00013698) stacon_top_pane_g1_ParamLimits

0x3f7f,	// (0x00013698) stacon_top_pane_g1

0x0765,	// (0x0000fe7e) title_pane_stacon_ParamLimits

0x0765,	// (0x0000fe7e) title_pane_stacon

0x078f,	// (0x0000fea8) uni_indicator_pane_stacon_ParamLimits

0x078f,	// (0x0000fea8) uni_indicator_pane_stacon

0x07a4,	// (0x0000febd) battery_pane_stacon_ParamLimits

0x07a4,	// (0x0000febd) battery_pane_stacon

0x07e8,	// (0x0000ff01) control_bottom_pane_stacon_ParamLimits

0x07e8,	// (0x0000ff01) control_bottom_pane_stacon

0x080b,	// (0x0000ff24) navi_pane_stacon_ParamLimits

0x080b,	// (0x0000ff24) navi_pane_stacon

0x3fa1,	// (0x000136ba) stacon_bottom_pane_g1_ParamLimits

0x3fa1,	// (0x000136ba) stacon_bottom_pane_g1

0x0450,	// (0x0000fb69) aid_levels_signal_lsc_ParamLimits

0x0450,	// (0x0000fb69) aid_levels_signal_lsc

0x0466,	// (0x0000fb7f) signal_pane_stacon_g1_ParamLimits

0x0466,	// (0x0000fb7f) signal_pane_stacon_g1

0x047a,	// (0x0000fb93) signal_pane_stacon_g2_ParamLimits

0x047a,	// (0x0000fb93) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001edd8) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001edd8) signal_pane_stacon_g

0x04af,	// (0x0000fbc8) title_pane_stacon_t1_ParamLimits

0x04af,	// (0x0000fbc8) title_pane_stacon_t1

0x3948,	// (0x00013061) uni_indicator_pane_stacon_g1

0x3952,	// (0x0001306b) uni_indicator_pane_stacon_g2

0x395c,	// (0x00013075) uni_indicator_pane_stacon_g3

0x3966,	// (0x0001307f) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001ede4) uni_indicator_pane_stacon_g

0x04d4,	// (0x0000fbed) control_top_pane_stacon_g1

0x04dc,	// (0x0000fbf5) control_top_pane_stacon_t1_ParamLimits

0x04dc,	// (0x0000fbf5) control_top_pane_stacon_t1

0x0513,	// (0x0000fc2c) aid_levels_battery_lsc_ParamLimits

0x0513,	// (0x0000fc2c) aid_levels_battery_lsc

0x052a,	// (0x0000fc43) battery_pane_stacon_g1_ParamLimits

0x052a,	// (0x0000fc43) battery_pane_stacon_g1

0x053d,	// (0x0000fc56) battery_pane_stacon_g2_ParamLimits

0x053d,	// (0x0000fc56) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001eded) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001eded) battery_pane_stacon_g

0x057b,	// (0x0000fc94) navi_icon_pane_stacon

0x058f,	// (0x0000fca8) navi_navi_pane_stacon

0x057b,	// (0x0000fc94) navi_text_pane_stacon

0x04d4,	// (0x0000fbed) control_bottom_pane_stacon_g1

0x05a3,	// (0x0000fcbc) control_bottom_pane_stacon_t1_ParamLimits

0x05a3,	// (0x0000fcbc) control_bottom_pane_stacon_t1

0xcffb,	// (0x0001c714) grid_app_pane_ParamLimits

0xcffb,	// (0x0001c714) grid_app_pane

0xd033,	// (0x0001c74c) scroll_pane_cp15_ParamLimits

0xd033,	// (0x0001c74c) scroll_pane_cp15

0xd048,	// (0x0001c761) cell_app_pane_ParamLimits

0xd048,	// (0x0001c761) cell_app_pane

0xd08d,	// (0x0001c7a6) cell_app_pane_g1_ParamLimits

0xd08d,	// (0x0001c7a6) cell_app_pane_g1

0x3a05,	// (0x0001311e) cell_app_pane_g2_ParamLimits

0x3a05,	// (0x0001311e) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001edf2) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001edf2) cell_app_pane_g

0xd0ad,	// (0x0001c7c6) cell_app_pane_t1_ParamLimits

0xd0ad,	// (0x0001c7c6) cell_app_pane_t1

0x3a28,	// (0x00013141) grid_highlight_pane_ParamLimits

0x3a28,	// (0x00013141) grid_highlight_pane

0x357f,	// (0x00012c98) cell_highlight_pane_g1

0x3587,	// (0x00012ca0) cell_highlight_pane_g2

0x358f,	// (0x00012ca8) cell_highlight_pane_g3

0x3597,	// (0x00012cb0) cell_highlight_pane_g4

0x359f,	// (0x00012cb8) cell_highlight_pane_g5

0x35a7,	// (0x00012cc0) cell_highlight_pane_g6

0x35af,	// (0x00012cc8) cell_highlight_pane_g7

0x35b7,	// (0x00012cd0) cell_highlight_pane_g8

0x35bf,	// (0x00012cd8) cell_highlight_pane_g9

0x2568,	// (0x00011c81) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001eda0) cell_highlight_pane_g

0x3a39,	// (0x00013152) bg_scroll_pane

0x05ed,	// (0x0000fd06) scroll_handle_pane

0x3a80,	// (0x00013199) scroll_bg_pane_g1

0x3a95,	// (0x000131ae) scroll_bg_pane_g2

0x3aad,	// (0x000131c6) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001edf7) scroll_bg_pane_g

0x3ac2,	// (0x000131db) scroll_handle_focus_pane_ParamLimits

0x3ac2,	// (0x000131db) scroll_handle_focus_pane

0x3a80,	// (0x00013199) scroll_handle_pane_g1

0x3acf,	// (0x000131e8) scroll_handle_pane_g2

0x3aad,	// (0x000131c6) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001edfe) scroll_handle_pane_g

0x367c,	// (0x00012d95) bg_popup_sub_pane_cp21_ParamLimits

0x367c,	// (0x00012d95) bg_popup_sub_pane_cp21

0x3ae3,	// (0x000131fc) popup_fep_japan_predictive_window_t1_ParamLimits

0x3ae3,	// (0x000131fc) popup_fep_japan_predictive_window_t1

0x3afd,	// (0x00013216) popup_fep_japan_predictive_window_t2_ParamLimits

0x3afd,	// (0x00013216) popup_fep_japan_predictive_window_t2

0x3b30,	// (0x00013249) popup_fep_japan_predictive_window_t3_ParamLimits

0x3b30,	// (0x00013249) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001ee05) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001ee05) popup_fep_japan_predictive_window_t

0x2572,	// (0x00011c8b) bg_popup_sub_pane_cp23

0x3b67,	// (0x00013280) listscroll_japin_cand_pane

0x3b6f,	// (0x00013288) popup_fep_japan_candidate_window_t1

0x3b7d,	// (0x00013296) candidate_pane_ParamLimits

0x3b7d,	// (0x00013296) candidate_pane

0x3b8f,	// (0x000132a8) scroll_pane_cp30

0x3b97,	// (0x000132b0) list_single_popup_jap_candidate_pane_ParamLimits

0x3b97,	// (0x000132b0) list_single_popup_jap_candidate_pane

0x2572,	// (0x00011c8b) list_highlight_pane_cp30

0x3bac,	// (0x000132c5) list_single_popup_jap_candidate_pane_t1

0x3bbb,	// (0x000132d4) level_1_signal

0x3bcd,	// (0x000132e6) level_2_signal

0x3be0,	// (0x000132f9) level_3_signal

0x3bf3,	// (0x0001330c) level_4_signal

0x3c06,	// (0x0001331f) level_5_signal

0x3c19,	// (0x00013332) level_6_signal

0x3c2c,	// (0x00013345) level_7_signal

0x3bbb,	// (0x000132d4) level_1_battery

0x3bcd,	// (0x000132e6) level_2_battery

0x3be0,	// (0x000132f9) level_3_battery

0x3bf3,	// (0x0001330c) level_4_battery

0x3c06,	// (0x0001331f) level_5_battery

0x3c19,	// (0x00013332) level_6_battery

0x3c2c,	// (0x00013345) level_7_battery

0x3c57,	// (0x00013370) list_menu_pane_ParamLimits

0x3c57,	// (0x00013370) list_menu_pane

0x3c6d,	// (0x00013386) scroll_pane_cp25_ParamLimits

0x3c6d,	// (0x00013386) scroll_pane_cp25

0x3c86,	// (0x0001339f) list_double2_graphic_pane_cp2_ParamLimits

0x3c86,	// (0x0001339f) list_double2_graphic_pane_cp2

0x3c86,	// (0x0001339f) list_double2_large_graphic_pane_cp2_ParamLimits

0x3c86,	// (0x0001339f) list_double2_large_graphic_pane_cp2

0x3c86,	// (0x0001339f) list_double2_pane_cp2_ParamLimits

0x3c86,	// (0x0001339f) list_double2_pane_cp2

0x3c86,	// (0x0001339f) list_double_graphic_pane_cp2_ParamLimits

0x3c86,	// (0x0001339f) list_double_graphic_pane_cp2

0x3c86,	// (0x0001339f) list_double_large_graphic_pane_cp2_ParamLimits

0x3c86,	// (0x0001339f) list_double_large_graphic_pane_cp2

0x3c86,	// (0x0001339f) list_double_number_pane_cp2_ParamLimits

0x3c86,	// (0x0001339f) list_double_number_pane_cp2

0x3c86,	// (0x0001339f) list_double_pane_cp2_ParamLimits

0x3c86,	// (0x0001339f) list_double_pane_cp2

0xd0c4,	// (0x0001c7dd) list_single_2graphic_pane_cp2_ParamLimits

0xd0c4,	// (0x0001c7dd) list_single_2graphic_pane_cp2

0xd0c4,	// (0x0001c7dd) list_single_graphic_heading_pane_cp2_ParamLimits

0xd0c4,	// (0x0001c7dd) list_single_graphic_heading_pane_cp2

0xd0c4,	// (0x0001c7dd) list_single_graphic_pane_cp2_ParamLimits

0xd0c4,	// (0x0001c7dd) list_single_graphic_pane_cp2

0xd0c4,	// (0x0001c7dd) list_single_heading_pane_cp2_ParamLimits

0xd0c4,	// (0x0001c7dd) list_single_heading_pane_cp2

0x3cc3,	// (0x000133dc) list_single_large_graphic_pane_cp2_ParamLimits

0x3cc3,	// (0x000133dc) list_single_large_graphic_pane_cp2

0xd0c4,	// (0x0001c7dd) list_single_number_heading_pane_cp2_ParamLimits

0xd0c4,	// (0x0001c7dd) list_single_number_heading_pane_cp2

0xd0c4,	// (0x0001c7dd) list_single_number_pane_cp2_ParamLimits

0xd0c4,	// (0x0001c7dd) list_single_number_pane_cp2

0xd0c4,	// (0x0001c7dd) list_single_pane_cp2_ParamLimits

0xd0c4,	// (0x0001c7dd) list_single_pane_cp2

0x3d3f,	// (0x00013458) bg_popup_sub_pane_cp22

0x069f,	// (0x0000fdb8) popup_side_volume_key_window_g1

0x06c9,	// (0x0000fde2) popup_side_volume_key_window_t1

0x06e5,	// (0x0000fdfe) volume_small_pane_cp1

0x28e7,	// (0x00012000) bg_popup_sub_pane_cp24_ParamLimits

0x28e7,	// (0x00012000) bg_popup_sub_pane_cp24

0x3d55,	// (0x0001346e) fep_china_uni_candidate_pane_ParamLimits

0x3d55,	// (0x0001346e) fep_china_uni_candidate_pane

0x3d69,	// (0x00013482) fep_china_uni_entry_pane

0x3d79,	// (0x00013492) popup_fep_china_uni_window_g1

0x3d95,	// (0x000134ae) fep_china_uni_entry_pane_g1

0x3d9d,	// (0x000134b6) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001ee36) fep_china_uni_entry_pane_g

0x3da5,	// (0x000134be) fep_entry_item_pane

0x3daf,	// (0x000134c8) fep_candidate_item_pane

0x3db7,	// (0x000134d0) fep_china_uni_candidate_pane_g1

0x3dbf,	// (0x000134d8) fep_china_uni_candidate_pane_g2

0x3dc7,	// (0x000134e0) fep_china_uni_candidate_pane_g3

0x3dcf,	// (0x000134e8) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001ee3b) fep_china_uni_candidate_pane_g

0x2568,	// (0x00011c81) fep_entry_item_pane_g1

0x3dd7,	// (0x000134f0) fep_entry_item_pane_t1_ParamLimits

0x3dd7,	// (0x000134f0) fep_entry_item_pane_t1

0x3ded,	// (0x00013506) fep_candidate_item_pane_t1_ParamLimits

0x3ded,	// (0x00013506) fep_candidate_item_pane_t1

0x3e02,	// (0x0001351b) fep_candidate_item_pane_t2_ParamLimits

0x3e02,	// (0x0001351b) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001ee44) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001ee44) fep_candidate_item_pane_t

0x2652,	// (0x00011d6b) list_highlight_pane_cp31_ParamLimits

0x2652,	// (0x00011d6b) list_highlight_pane_cp31

0x3e14,	// (0x0001352d) level_1_signal_lsc

0x3e1d,	// (0x00013536) level_2_signal_lsc

0x3e26,	// (0x0001353f) level_3_signal_lsc

0x3e2f,	// (0x00013548) level_4_signal_lsc

0x3e38,	// (0x00013551) level_5_signal_lsc

0x3e41,	// (0x0001355a) level_6_signal_lsc

0x3e4a,	// (0x00013563) level_7_signal_lsc

0x3e4a,	// (0x00013563) level_1_battery_lsc

0x3e53,	// (0x0001356c) level_2_battery_lsc

0x3e5c,	// (0x00013575) level_3_battery_lsc

0x3e65,	// (0x0001357e) level_4_battery_lsc

0x3e6e,	// (0x00013587) level_5_battery_lsc

0x3e77,	// (0x00013590) level_6_battery_lsc

0x3e14,	// (0x0001352d) level_7_battery_lsc

0x3e80,	// (0x00013599) scroll_handle_focus_pane_g1

0x3e89,	// (0x000135a2) scroll_handle_focus_pane_g2

0x3e92,	// (0x000135ab) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001ee49) scroll_handle_focus_pane_g

0xd151,	// (0x0001c86a) list_single_2graphic_pane_g1_ParamLimits

0xd151,	// (0x0001c86a) list_single_2graphic_pane_g1

0xca89,	// (0x0001c1a2) list_single_2graphic_pane_g2_ParamLimits

0xca89,	// (0x0001c1a2) list_single_2graphic_pane_g2

0x4af9,	// (0x00014212) list_single_2graphic_pane_g3_ParamLimits

0x4af9,	// (0x00014212) list_single_2graphic_pane_g3

0xd15d,	// (0x0001c876) list_single_2graphic_pane_g4_ParamLimits

0xd15d,	// (0x0001c876) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001ee50) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001ee50) list_single_2graphic_pane_g

0xd16e,	// (0x0001c887) list_single_2graphic_pane_t1_ParamLimits

0xd16e,	// (0x0001c887) list_single_2graphic_pane_t1

0xd19c,	// (0x0001c8b5) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd19c,	// (0x0001c8b5) list_double2_graphic_large_graphic_pane_g1

0xcad2,	// (0x0001c1eb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcad2,	// (0x0001c1eb) list_double2_graphic_large_graphic_pane_g2

0xcae3,	// (0x0001c1fc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xcae3,	// (0x0001c1fc) list_double2_graphic_large_graphic_pane_g3

0xd1ae,	// (0x0001c8c7) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd1ae,	// (0x0001c8c7) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001ee59) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001ee59) list_double2_graphic_large_graphic_pane_g

0xd1ba,	// (0x0001c8d3) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd1ba,	// (0x0001c8d3) list_double2_graphic_large_graphic_pane_t1

0xd1d0,	// (0x0001c8e9) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd1d0,	// (0x0001c8e9) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001ee62) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001ee62) list_double2_graphic_large_graphic_pane_t

0x4069,	// (0x00013782) popup_fast_swap_window_ParamLimits

0x4069,	// (0x00013782) popup_fast_swap_window

0x4085,	// (0x0001379e) popup_side_volume_key_window

0x40a1,	// (0x000137ba) stacon_top_pane

0x40ab,	// (0x000137c4) status_pane_ParamLimits

0x40ab,	// (0x000137c4) status_pane

0xd212,	// (0x0001c92b) status_small_pane

0x2572,	// (0x00011c8b) control_pane

0x2572,	// (0x00011c8b) stacon_bottom_pane

0x3367,	// (0x00012a80) scroll_pane_cp121

0x335e,	// (0x00012a77) set_content_pane

0x3f2a,	// (0x00013643) bg_active_tab_pane_g1_cp1

0x3f33,	// (0x0001364c) bg_active_tab_pane_g2_cp1

0x3f3c,	// (0x00013655) bg_active_tab_pane_g3_cp1

0x3f2a,	// (0x00013643) bg_passive_tab_pane_g1_cp1

0x3f33,	// (0x0001364c) bg_passive_tab_pane_g2_cp1

0x3f3c,	// (0x00013655) bg_passive_tab_pane_g3_cp1

0x3f45,	// (0x0001365e) bg_active_tab_pane_g1_cp2

0x3f33,	// (0x0001364c) bg_active_tab_pane_g2_cp2

0x3f4e,	// (0x00013667) bg_active_tab_pane_g3_cp2

0x3f45,	// (0x0001365e) bg_passive_tab_pane_g1_cp2

0x3f33,	// (0x0001364c) bg_passive_tab_pane_g2_cp2

0x3f4e,	// (0x00013667) bg_passive_tab_pane_g3_cp2

0x3f57,	// (0x00013670) bg_active_tab_pane_g1_cp3

0x3f33,	// (0x0001364c) bg_active_tab_pane_g2_cp3

0x3f60,	// (0x00013679) bg_active_tab_pane_g3_cp3

0x3f57,	// (0x00013670) bg_passive_tab_pane_g1_cp3

0x3f33,	// (0x0001364c) bg_passive_tab_pane_g2_cp3

0x3f60,	// (0x00013679) bg_passive_tab_pane_g3_cp3

0x3f69,	// (0x00013682) bg_active_tab_pane_g1_cp4

0x3f33,	// (0x0001364c) bg_active_tab_pane_g2_cp4

0x3f74,	// (0x0001368d) bg_active_tab_pane_g3_cp4

0x3f69,	// (0x00013682) bg_passive_tab_pane_g1_cp4

0x3f33,	// (0x0001364c) bg_passive_tab_pane_g2_cp4

0x3f74,	// (0x0001368d) bg_passive_tab_pane_g3_cp4

0x3fbd,	// (0x000136d6) bg_active_tab_pane_g1_cp5

0x3f33,	// (0x0001364c) bg_active_tab_pane_g2_cp5

0x3fc6,	// (0x000136df) bg_active_tab_pane_g3_cp5

0x3fbd,	// (0x000136d6) bg_passive_tab_pane_g1_cp5

0x3f33,	// (0x0001364c) bg_passive_tab_pane_g2_cp5

0x3fc6,	// (0x000136df) bg_passive_tab_pane_g3_cp5

0x68ec,	// (0x00016005) list_set_graphic_pane_ParamLimits

0x68ec,	// (0x00016005) list_set_graphic_pane

0x2572,	// (0x00011c8b) bg_set_opt_pane_cp4

0xd1e2,	// (0x0001c8fb) list_set_graphic_pane_g1_ParamLimits

0xd1e2,	// (0x0001c8fb) list_set_graphic_pane_g1

0xd1ee,	// (0x0001c907) list_set_graphic_pane_g2_ParamLimits

0xd1ee,	// (0x0001c907) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001ee67) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001ee67) list_set_graphic_pane_g

0x0009,

0xfac3,	// (0x0001f1dc) volume_small_pane_cp_g

0x401c,	// (0x00013735) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x401c,	// (0x00013735) list_double2_large_graphic_pane_g1_cp2

0x4028,	// (0x00013741) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4028,	// (0x00013741) list_double2_large_graphic_pane_g2_cp2

0x4039,	// (0x00013752) list_double2_large_graphic_pane_g3_cp2

0x4041,	// (0x0001375a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4041,	// (0x0001375a) list_double2_large_graphic_pane_t1_cp2

0x4057,	// (0x00013770) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4057,	// (0x00013770) list_double2_large_graphic_pane_t2_cp2

0x5d5d,	// (0x00015476) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5d5d,	// (0x00015476) list_double_large_graphic_pane_g1_cp2

0x5d6e,	// (0x00015487) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5d6e,	// (0x00015487) list_double_large_graphic_pane_g2_cp2

0x41d2,	// (0x000138eb) list_double_large_graphic_pane_g3_cp2

0x5d7f,	// (0x00015498) list_double_large_graphic_pane_g4_cp

0x5d87,	// (0x000154a0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5d87,	// (0x000154a0) list_double_large_graphic_pane_t1_cp2

0x5d9e,	// (0x000154b7) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5d9e,	// (0x000154b7) list_double_large_graphic_pane_t2_cp2

0x40c4,	// (0x000137dd) list_double2_graphic_pane_g1_cp2_ParamLimits

0x40c4,	// (0x000137dd) list_double2_graphic_pane_g1_cp2

0x40d2,	// (0x000137eb) list_double2_graphic_pane_g2_cp2_ParamLimits

0x40d2,	// (0x000137eb) list_double2_graphic_pane_g2_cp2

0x40e3,	// (0x000137fc) list_double2_graphic_pane_g3_cp2

0x40ed,	// (0x00013806) list_double2_graphic_pane_t1_cp2_ParamLimits

0x40ed,	// (0x00013806) list_double2_graphic_pane_t1_cp2

0x4103,	// (0x0001381c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4103,	// (0x0001381c) list_double2_graphic_pane_t2_cp2

0x4115,	// (0x0001382e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4115,	// (0x0001382e) list_single_number_heading_pane_g1_cp2

0x4121,	// (0x0001383a) list_single_number_heading_pane_g2_cp2

0x4129,	// (0x00013842) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4129,	// (0x00013842) list_single_number_heading_pane_t1_cp2

0x413f,	// (0x00013858) list_single_number_heading_pane_t2_cp2_ParamLimits

0x413f,	// (0x00013858) list_single_number_heading_pane_t2_cp2

0x4151,	// (0x0001386a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4151,	// (0x0001386a) list_single_number_heading_pane_t3_cp2

0x4115,	// (0x0001382e) list_single_heading_pane_g1_cp2_ParamLimits

0x4115,	// (0x0001382e) list_single_heading_pane_g1_cp2

0x4121,	// (0x0001383a) list_single_heading_pane_g2_cp2

0x4129,	// (0x00013842) list_single_heading_pane_t1_cp2_ParamLimits

0x4129,	// (0x00013842) list_single_heading_pane_t1_cp2

0x5b65,	// (0x0001527e) list_single_heading_pane_t2_cp2_ParamLimits

0x5b65,	// (0x0001527e) list_single_heading_pane_t2_cp2

0x5aad,	// (0x000151c6) list_double_graphic_pane_g1_cp2_ParamLimits

0x5aad,	// (0x000151c6) list_double_graphic_pane_g1_cp2

0x5ab9,	// (0x000151d2) list_double_graphic_pane_g2_cp2_ParamLimits

0x5ab9,	// (0x000151d2) list_double_graphic_pane_g2_cp2

0x5ac8,	// (0x000151e1) list_double_graphic_pane_g3_cp2

0x5ad0,	// (0x000151e9) list_double_graphic_pane_t1_cp2_ParamLimits

0x5ad0,	// (0x000151e9) list_double_graphic_pane_t1_cp2

0x5ae6,	// (0x000151ff) list_double_graphic_pane_t2_cp2_ParamLimits

0x5ae6,	// (0x000151ff) list_double_graphic_pane_t2_cp2

0x41c6,	// (0x000138df) list_double_number_pane_g1_cp2_ParamLimits

0x41c6,	// (0x000138df) list_double_number_pane_g1_cp2

0x41d2,	// (0x000138eb) list_double_number_pane_g2_cp2

0x5a71,	// (0x0001518a) list_double_number_pane_t1_cp2_ParamLimits

0x5a71,	// (0x0001518a) list_double_number_pane_t1_cp2

0x5a85,	// (0x0001519e) list_double_number_pane_t2_cp2_ParamLimits

0x5a85,	// (0x0001519e) list_double_number_pane_t2_cp2

0x5a9b,	// (0x000151b4) list_double_number_pane_t3_cp2_ParamLimits

0x5a9b,	// (0x000151b4) list_double_number_pane_t3_cp2

0x595a,	// (0x00015073) list_single_graphic_pane_g1_cp2_ParamLimits

0x595a,	// (0x00015073) list_single_graphic_pane_g1_cp2

0x422a,	// (0x00013943) list_single_graphic_pane_g2_cp2_ParamLimits

0x422a,	// (0x00013943) list_single_graphic_pane_g2_cp2

0x4236,	// (0x0001394f) list_single_graphic_pane_g3_cp2

0x5930,	// (0x00015049) list_single_graphic_pane_t1_cp2_ParamLimits

0x5930,	// (0x00015049) list_single_graphic_pane_t1_cp2

0x422a,	// (0x00013943) list_single_number_pane_g1_cp2_ParamLimits

0x422a,	// (0x00013943) list_single_number_pane_g1_cp2

0x4236,	// (0x0001394f) list_single_number_pane_g2_cp2

0x5930,	// (0x00015049) list_single_number_pane_t1_cp2_ParamLimits

0x5930,	// (0x00015049) list_single_number_pane_t1_cp2

0x5946,	// (0x0001505f) list_single_number_pane_t2_cp2_ParamLimits

0x5946,	// (0x0001505f) list_single_number_pane_t2_cp2

0x4028,	// (0x00013741) list_double2_pane_g1_cp2_ParamLimits

0x4028,	// (0x00013741) list_double2_pane_g1_cp2

0x4039,	// (0x00013752) list_double2_pane_g2_cp2

0x419e,	// (0x000138b7) list_double2_pane_t1_cp2_ParamLimits

0x419e,	// (0x000138b7) list_double2_pane_t1_cp2

0x41b4,	// (0x000138cd) list_double2_pane_t2_cp2_ParamLimits

0x41b4,	// (0x000138cd) list_double2_pane_t2_cp2

0x41c6,	// (0x000138df) list_double_pane_g1_cp2_ParamLimits

0x41c6,	// (0x000138df) list_double_pane_g1_cp2

0x41d2,	// (0x000138eb) list_double_pane_g2_cp2

0x41da,	// (0x000138f3) list_double_pane_t1_cp2_ParamLimits

0x41da,	// (0x000138f3) list_double_pane_t1_cp2

0x41f0,	// (0x00013909) list_double_pane_t2_cp2_ParamLimits

0x41f0,	// (0x00013909) list_double_pane_t2_cp2

0x421a,	// (0x00013933) list_single_pane_cp2_g3

0x422a,	// (0x00013943) list_single_pane_g1_cp2_ParamLimits

0x422a,	// (0x00013943) list_single_pane_g1_cp2

0x4236,	// (0x0001394f) list_single_pane_g2_cp2

0x423e,	// (0x00013957) list_single_pane_t1_cp2_ParamLimits

0x423e,	// (0x00013957) list_single_pane_t1_cp2

0x4256,	// (0x0001396f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4256,	// (0x0001396f) list_single_large_graphic_pane_g1_cp2

0x4262,	// (0x0001397b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4262,	// (0x0001397b) list_single_large_graphic_pane_g2_cp2

0x426e,	// (0x00013987) list_single_large_graphic_pane_g3_cp2

0x4276,	// (0x0001398f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4276,	// (0x0001398f) list_single_large_graphic_pane_g4_cp1

0x4290,	// (0x000139a9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4290,	// (0x000139a9) list_single_large_graphic_pane_t1_cp2

0x58f0,	// (0x00015009) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x58f0,	// (0x00015009) list_single_graphic_heading_pane_g1_cp2

0x58bd,	// (0x00014fd6) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x58bd,	// (0x00014fd6) list_single_graphic_heading_pane_g4_cp2

0x4236,	// (0x0001394f) list_single_graphic_heading_pane_g5_cp2

0x58fc,	// (0x00015015) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x58fc,	// (0x00015015) list_single_graphic_heading_pane_t1_cp2

0x5912,	// (0x0001502b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5912,	// (0x0001502b) list_single_graphic_heading_pane_t2_cp2

0x58b1,	// (0x00014fca) list_single_2graphic_pane_g1_cp2_ParamLimits

0x58b1,	// (0x00014fca) list_single_2graphic_pane_g1_cp2

0x58bd,	// (0x00014fd6) list_single_2graphic_pane_g2_cp2_ParamLimits

0x58bd,	// (0x00014fd6) list_single_2graphic_pane_g2_cp2

0x4236,	// (0x0001394f) list_single_2graphic_pane_g3_cp2

0x58ce,	// (0x00014fe7) list_single_2graphic_pane_g4_cp2_ParamLimits

0x58ce,	// (0x00014fe7) list_single_2graphic_pane_g4_cp2

0x58da,	// (0x00014ff3) list_single_2graphic_pane_t1_cp2_ParamLimits

0x58da,	// (0x00014ff3) list_single_2graphic_pane_t1_cp2

0x2568,	// (0x00011c81) list_highlight_pane_g10_cp1

0x5489,	// (0x00014ba2) list_highlight_pane_g1_cp1

0x5491,	// (0x00014baa) list_highlight_pane_g2_cp1

0x5499,	// (0x00014bb2) list_highlight_pane_g3_cp1

0x54a1,	// (0x00014bba) list_highlight_pane_g4_cp1

0x54a9,	// (0x00014bc2) list_highlight_pane_g5_cp1

0x54b1,	// (0x00014bca) list_highlight_pane_g6_cp1

0x54b9,	// (0x00014bd2) list_highlight_pane_g7_cp1

0x54c1,	// (0x00014bda) list_highlight_pane_g8_cp1

0x54c9,	// (0x00014be2) list_highlight_pane_g9_cp1

0xd893,	// (0x0001cfac) form_field_slider_pane_t3

0xd8a1,	// (0x0001cfba) form_field_slider_pane_t4

0x53c5,	// (0x00014ade) slider_form_pane_ParamLimits

0x53c5,	// (0x00014ade) slider_form_pane

0x2572,	// (0x00011c8b) control_abbreviations

0x2572,	// (0x00011c8b) control_conventions

0x2572,	// (0x00011c8b) control_definitions

0x2572,	// (0x00011c8b) format_table_attribute

0x5baf,	// (0x000152c8) bg_popup_preview_window_pane_g9

0x2572,	// (0x00011c8b) format_table_data2

0x2572,	// (0x00011c8b) format_table_data3

0x2572,	// (0x00011c8b) format_table_data_example

0x0008,

0x2572,	// (0x00011c8b) intro_purpose

0xf8e5,	// (0x0001effe) bg_popup_preview_window_pane_g

0x2572,	// (0x00011c8b) texts_category

0x2572,	// (0x00011c8b) texts_graphics

0x42a6,	// (0x000139bf) text_digital

0x42b5,	// (0x000139ce) text_primary

0x42c4,	// (0x000139dd) text_primary_small

0x42d3,	// (0x000139ec) text_secondary

0x42e2,	// (0x000139fb) text_title

0x63db,	// (0x00015af4) bg_passive_tab_pane_g1_cp3_srt

0x3f33,	// (0x0001364c) bg_passive_tab_pane_g2_cp3_srt

0x63e4,	// (0x00015afd) bg_passive_tab_pane_g3_cp3_srt

0x28e7,	// (0x00012000) bg_active_tab_pane_cp3_srt_ParamLimits

0x28e7,	// (0x00012000) bg_active_tab_pane_cp3_srt

0x63ed,	// (0x00015b06) tabs_4_active_pane_srt_g1

0xdc26,	// (0x0001d33f) tabs_4_active_pane_srt_t1_ParamLimits

0xdc26,	// (0x0001d33f) tabs_4_active_pane_srt_t1

0x63db,	// (0x00015af4) bg_active_tab_pane_g1_cp3_copy1

0x3f33,	// (0x0001364c) bg_active_tab_pane_g2_cp3_copy1

0x63e4,	// (0x00015afd) bg_active_tab_pane_g3_cp3_copy1

0x2652,	// (0x00011d6b) tabs_2_long_active_pane_srt_ParamLimits

0x2652,	// (0x00011d6b) tabs_2_long_active_pane_srt

0x2652,	// (0x00011d6b) tabs_2_long_passive_pane_srt_ParamLimits

0x2652,	// (0x00011d6b) tabs_2_long_passive_pane_srt

0x4637,	// (0x00013d50) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4637,	// (0x00013d50) bg_passive_tab_pane_cp4_srt

0x6006,	// (0x0001571f) bg_passive_tab_pane_g1_cp4_srt

0x3f33,	// (0x0001364c) bg_passive_tab_pane_g2_cp4_srt

0x600f,	// (0x00015728) bg_passive_tab_pane_g3_cp4_srt

0x2652,	// (0x00011d6b) bg_active_tab_pane_cp4_srt_ParamLimits

0x2652,	// (0x00011d6b) bg_active_tab_pane_cp4_srt

0xda12,	// (0x0001d12b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xda12,	// (0x0001d12b) tabs_2_long_active_pane_srt_t1

0x6006,	// (0x0001571f) bg_active_tab_pane_g1_cp4_srt

0x3f33,	// (0x0001364c) bg_active_tab_pane_g2_cp4_srt

0x600f,	// (0x00015728) bg_active_tab_pane_g3_cp4_srt

0x28e7,	// (0x00012000) tabs_3_long_active_pane_srt_ParamLimits

0x28e7,	// (0x00012000) tabs_3_long_active_pane_srt

0x28e7,	// (0x00012000) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x28e7,	// (0x00012000) tabs_3_long_passive_pane_cp_srt

0x28e7,	// (0x00012000) tabs_3_long_passive_pane_srt_ParamLimits

0x28e7,	// (0x00012000) tabs_3_long_passive_pane_srt

0x4637,	// (0x00013d50) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4637,	// (0x00013d50) bg_passive_tab_pane_cp5_srt

0x3fbd,	// (0x000136d6) bg_passive_tab_pane_g1_cp5_srt

0x3f33,	// (0x0001364c) bg_passive_tab_pane_g2_cp5_srt

0x3fc6,	// (0x000136df) bg_passive_tab_pane_g3_cp5_srt

0x2652,	// (0x00011d6b) bg_active_tab_pane_cp5_srt_ParamLimits

0x2652,	// (0x00011d6b) bg_active_tab_pane_cp5_srt

0xd9fc,	// (0x0001d115) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd9fc,	// (0x0001d115) tabs_3_long_active_pane_srt_t1

0x3fbd,	// (0x000136d6) bg_active_tab_pane_g1_cp5_srt

0x3f33,	// (0x0001364c) bg_active_tab_pane_g2_cp5_srt

0x3fc6,	// (0x000136df) bg_active_tab_pane_g3_cp5_srt

0x5fe6,	// (0x000156ff) navi_text_pane_srt_t1

0x5fde,	// (0x000156f7) navi_icon_pane_srt_g1

0x44ab,	// (0x00013bc4) midp_editing_number_pane_srt

0x42f1,	// (0x00013a0a) midp_ticker_pane_srt

0x44b3,	// (0x00013bcc) midp_ticker_pane_srt_g1

0x44bb,	// (0x00013bd4) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001ee86) midp_ticker_pane_srt_g

0x44c3,	// (0x00013bdc) midp_ticker_pane_srt_t1

0x5fcf,	// (0x000156e8) midp_editing_number_pane_t1_copy1

0x4637,	// (0x00013d50) listscroll_midp_pane

0x4637,	// (0x00013d50) midp_form_pane

0x435d,	// (0x00013a76) midp_info_popup_window_ParamLimits

0x435d,	// (0x00013a76) midp_info_popup_window

0x367c,	// (0x00012d95) bg_popup_sub_pane_cp50_ParamLimits

0x367c,	// (0x00012d95) bg_popup_sub_pane_cp50

0x50c1,	// (0x000147da) listscroll_midp_info_pane_ParamLimits

0x50c1,	// (0x000147da) listscroll_midp_info_pane

0x50a9,	// (0x000147c2) listscroll_form_midp_pane_ParamLimits

0x50a9,	// (0x000147c2) listscroll_form_midp_pane

0x50b5,	// (0x000147ce) scroll_bar_cp050

0xd887,	// (0x0001cfa0) list_midp_pane

0x7148,	// (0x00016861) signal_pane_g2_cp

0x4fc3,	// (0x000146dc) listscroll_midp_info_pane_t1_ParamLimits

0x4fc3,	// (0x000146dc) listscroll_midp_info_pane_t1

0x4fdb,	// (0x000146f4) listscroll_midp_info_pane_t2_ParamLimits

0x4fdb,	// (0x000146f4) listscroll_midp_info_pane_t2

0x5019,	// (0x00014732) listscroll_midp_info_pane_t3_ParamLimits

0x5019,	// (0x00014732) listscroll_midp_info_pane_t3

0x5053,	// (0x0001476c) listscroll_midp_info_pane_t4_ParamLimits

0x5053,	// (0x0001476c) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0001ef39) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0001ef39) listscroll_midp_info_pane_t

0x3740,	// (0x00012e59) scroll_pane_cp21

0x4f61,	// (0x0001467a) form_midp_field_choice_group_pane

0x4f6a,	// (0x00014683) form_midp_field_text_pane

0x4fa9,	// (0x000146c2) form_midp_field_time_pane

0x4fb1,	// (0x000146ca) form_midp_gauge_slider_pane

0x4fba,	// (0x000146d3) form_midp_gauge_wait_pane

0x2572,	// (0x00011c8b) form_midp_image_pane

0xd870,	// (0x0001cf89) list_single_midp_pane_ParamLimits

0xd870,	// (0x0001cf89) list_single_midp_pane

0xd84e,	// (0x0001cf67) form_midp_field_text_pane_t1

0x4ca5,	// (0x000143be) input_focus_pane_cp050

0x4f21,	// (0x0001463a) list_midp_form_text_pane

0x4eb9,	// (0x000145d2) form_midp_field_choice_group_pane_t1

0x4ec7,	// (0x000145e0) input_focus_pane_cp051

0x4edb,	// (0x000145f4) list_midp_choice_pane

0x2572,	// (0x00011c8b) status_idle_pane

0x4e9d,	// (0x000145b6) form_midp_field_time_pane_t1

0x2568,	// (0x00011c81) wait_anim_pane_g2_copy1

0x4eab,	// (0x000145c4) form_midp_field_time_pane_t2

0x0001,

0x440b,	// (0x00013b24) aid_navinavi_width_2_pane

0xf81b,	// (0x0001ef34) form_midp_field_time_pane_t

0x2572,	// (0x00011c8b) input_focus_pane_cp052

0x2572,	// (0x00011c8b) bg_input_focus_pane_cp040

0x4e5d,	// (0x00014576) form_midp_gauge_slider_pane_t1

0x4e6b,	// (0x00014584) form_midp_gauge_slider_pane_t2

0xd832,	// (0x0001cf4b) form_midp_gauge_slider_pane_t3

0xd840,	// (0x0001cf59) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0001ef2b) form_midp_gauge_slider_pane_t

0x4e95,	// (0x000145ae) form_midp_slider_pane

0x2652,	// (0x00011d6b) bg_input_focus_pane_cp041_ParamLimits

0x2652,	// (0x00011d6b) bg_input_focus_pane_cp041

0x4e2a,	// (0x00014543) form_midp_gauge_wait_pane_t1_ParamLimits

0x4e2a,	// (0x00014543) form_midp_gauge_wait_pane_t1

0x4e3c,	// (0x00014555) form_midp_gauge_wait_pane_t2_ParamLimits

0x4e3c,	// (0x00014555) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x0001ef26) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x0001ef26) form_midp_gauge_wait_pane_t

0x4e4e,	// (0x00014567) form_midp_wait_pane_ParamLimits

0x4e4e,	// (0x00014567) form_midp_wait_pane

0x4df4,	// (0x0001450d) form_midp_image_pane_g1

0x4dfd,	// (0x00014516) form_midp_image_pane_t1

0x4e0c,	// (0x00014525) form_midp_image_pane_t2

0x4e1b,	// (0x00014534) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0001ef1f) form_midp_image_pane_t

0x4ddc,	// (0x000144f5) list_single_midp_pane_g1

0x4de5,	// (0x000144fe) list_single_midp_pane_t1

0xd81d,	// (0x0001cf36) list_midp_form_item_pane_ParamLimits

0xd81d,	// (0x0001cf36) list_midp_form_item_pane

0x43b3,	// (0x00013acc) list_midp_form_item_pane_t1

0x43c2,	// (0x00013adb) midp_ticker_pane_g1

0x43ce,	// (0x00013ae7) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001ee6c) midp_ticker_pane_g

0x43da,	// (0x00013af3) midp_ticker_pane_t1

0x6253,	// (0x0001596c) midp_editing_number_pane_t1

0x6231,	// (0x0001594a) midp_editing_number_pane

0x6240,	// (0x00015959) midp_ticker_pane

0x5f97,	// (0x000156b0) ai_message_heading_pane

0x2572,	// (0x00011c8b) bg_popup_window_pane_cp14

0x5f9f,	// (0x000156b8) listscroll_ai_message_pane

0x5f21,	// (0x0001563a) ai_message_heading_pane_g1_ParamLimits

0x5f21,	// (0x0001563a) ai_message_heading_pane_g1

0x5f2d,	// (0x00015646) ai_message_heading_pane_g2_ParamLimits

0x5f2d,	// (0x00015646) ai_message_heading_pane_g2

0x5f39,	// (0x00015652) ai_message_heading_pane_g3_ParamLimits

0x5f39,	// (0x00015652) ai_message_heading_pane_g3

0x5f45,	// (0x0001565e) ai_message_heading_pane_g4_ParamLimits

0x5f45,	// (0x0001565e) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x0001f060) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x0001f060) ai_message_heading_pane_g

0x5f51,	// (0x0001566a) ai_message_heading_pane_t1_ParamLimits

0x5f51,	// (0x0001566a) ai_message_heading_pane_t1

0x5f6b,	// (0x00015684) ai_message_heading_pane_t2_ParamLimits

0x5f6b,	// (0x00015684) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0001f069) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0001f069) ai_message_heading_pane_t

0x5f7d,	// (0x00015696) bg_popup_heading_pane_cp1_ParamLimits

0x5f7d,	// (0x00015696) bg_popup_heading_pane_cp1

0x5f0f,	// (0x00015628) list_ai_message_pane_ParamLimits

0x5f0f,	// (0x00015628) list_ai_message_pane

0x3740,	// (0x00012e59) scroll_pane_cp10

0x5eab,	// (0x000155c4) list_ai_message_pane_g1

0x5eb3,	// (0x000155cc) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0001f03d) list_ai_message_pane_g

0x5ebb,	// (0x000155d4) list_ai_message_pane_t1_ParamLimits

0x5ebb,	// (0x000155d4) list_ai_message_pane_t1

0x5ed0,	// (0x000155e9) list_ai_message_pane_t2_ParamLimits

0x5ed0,	// (0x000155e9) list_ai_message_pane_t2

0x5ee5,	// (0x000155fe) list_ai_message_pane_t3_ParamLimits

0x5ee5,	// (0x000155fe) list_ai_message_pane_t3

0x5efa,	// (0x00015613) list_ai_message_pane_t4_ParamLimits

0x5efa,	// (0x00015613) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x0001f042) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x0001f042) list_ai_message_pane_t

0xd9c9,	// (0x0001d0e2) cell_ai_soft_ind_pane_ParamLimits

0xd9c9,	// (0x0001d0e2) cell_ai_soft_ind_pane

0x43ec,	// (0x00013b05) cell_ai_soft_ind_pane_g1_ParamLimits

0x43ec,	// (0x00013b05) cell_ai_soft_ind_pane_g1

0x2572,	// (0x00011c8b) grid_highlight_cp1

0x43f9,	// (0x00013b12) text_secondary_cp56_ParamLimits

0x43f9,	// (0x00013b12) text_secondary_cp56

0x5e6b,	// (0x00015584) example_general_pane_ParamLimits

0x5e6b,	// (0x00015584) example_general_pane

0x5e77,	// (0x00015590) example_parent_pane_g1_ParamLimits

0x5e77,	// (0x00015590) example_parent_pane_g1

0x5e83,	// (0x0001559c) example_parent_pane_t1_ParamLimits

0x5e83,	// (0x0001559c) example_parent_pane_t1

0xbd67,	// (0x0001b480) popup_preview_text_window_ParamLimits

0xbd67,	// (0x0001b480) popup_preview_text_window

0x4222,	// (0x0001393b) list_single_pane_cp2_g4

0x299d,	// (0x000120b6) bg_popup_preview_window_pane_ParamLimits

0x299d,	// (0x000120b6) bg_popup_preview_window_pane

0x5bb7,	// (0x000152d0) popup_preview_text_window_t1_ParamLimits

0x5bb7,	// (0x000152d0) popup_preview_text_window_t1

0x5bd5,	// (0x000152ee) popup_preview_text_window_t2_ParamLimits

0x5bd5,	// (0x000152ee) popup_preview_text_window_t2

0x5c1e,	// (0x00015337) popup_preview_text_window_t3_ParamLimits

0x5c1e,	// (0x00015337) popup_preview_text_window_t3

0x5c63,	// (0x0001537c) popup_preview_text_window_t4_ParamLimits

0x5c63,	// (0x0001537c) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x0001f011) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x0001f011) popup_preview_text_window_t

0x5ce1,	// (0x000153fa) scroll_pane_cp11

0x4b77,	// (0x00014290) bg_popup_preview_window_pane_g1

0x5b77,	// (0x00015290) bg_popup_preview_window_pane_g2

0x5b7f,	// (0x00015298) bg_popup_preview_window_pane_g3

0x5b87,	// (0x000152a0) bg_popup_preview_window_pane_g4

0x5b8f,	// (0x000152a8) bg_popup_preview_window_pane_g5

0x5b97,	// (0x000152b0) bg_popup_preview_window_pane_g6

0x5b9f,	// (0x000152b8) bg_popup_preview_window_pane_g7

0x5ba7,	// (0x000152c0) bg_popup_preview_window_pane_g8

0xf53a,	// (0x0001ec53) aid_popup_width_pane

0xbce3,	// (0x0001b3fc) popup_midp_note_alarm_window_ParamLimits

0xbce3,	// (0x0001b3fc) popup_midp_note_alarm_window

0x3428,	// (0x00012b41) data_form_pane_ParamLimits

0xce70,	// (0x0001c589) form_field_data_pane_g1

0xce7a,	// (0x0001c593) form_field_data_pane_t1_ParamLimits

0x3456,	// (0x00012b6f) input_focus_pane_ParamLimits

0x3464,	// (0x00012b7d) data_form_wide_pane_ParamLimits

0x3470,	// (0x00012b89) form_field_data_wide_pane_g1

0x3490,	// (0x00012ba9) form_field_data_wide_pane_t1_ParamLimits

0x2c4c,	// (0x00012365) input_focus_pane_cp6_ParamLimits

0xcfb6,	// (0x0001c6cf) input_popup_find_pane_g1_ParamLimits

0xcfb6,	// (0x0001c6cf) input_popup_find_pane_g1

0x054e,	// (0x0000fc67) aid_navi_side_left_pane

0x0563,	// (0x0000fc7c) aid_navi_side_right_pane

0x5584,	// (0x00014c9d) bg_popup_window_pane_cp30_ParamLimits

0x5584,	// (0x00014c9d) bg_popup_window_pane_cp30

0x55fe,	// (0x00014d17) popup_midp_note_alarm_window_g1_ParamLimits

0x55fe,	// (0x00014d17) popup_midp_note_alarm_window_g1

0x562e,	// (0x00014d47) popup_midp_note_alarm_window_t1_ParamLimits

0x562e,	// (0x00014d47) popup_midp_note_alarm_window_t1

0x56cf,	// (0x00014de8) popup_midp_note_alarm_window_t2_ParamLimits

0x56cf,	// (0x00014de8) popup_midp_note_alarm_window_t2

0x577d,	// (0x00014e96) popup_midp_note_alarm_window_t3_ParamLimits

0x577d,	// (0x00014e96) popup_midp_note_alarm_window_t3

0x57af,	// (0x00014ec8) popup_midp_note_alarm_window_t4_ParamLimits

0x57af,	// (0x00014ec8) popup_midp_note_alarm_window_t4

0x57d5,	// (0x00014eee) popup_midp_note_alarm_window_t5_ParamLimits

0x57d5,	// (0x00014eee) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0001efae) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0001efae) popup_midp_note_alarm_window_t

0x5881,	// (0x00014f9a) wait_bar_pane_cp1_ParamLimits

0x5881,	// (0x00014f9a) wait_bar_pane_cp1

0x2572,	// (0x00011c8b) wait_anim_pane_copy1

0x2572,	// (0x00011c8b) wait_border_pane_copy1

0x526a,	// (0x00014983) wait_border_pane_g1_copy1

0x34a7,	// (0x00012bc0) form_field_popup_pane_g1

0xce94,	// (0x0001c5ad) form_field_popup_pane_t1_ParamLimits

0x3456,	// (0x00012b6f) input_focus_pane_cp7_ParamLimits

0x34c7,	// (0x00012be0) list_form_pane_ParamLimits

0x34d3,	// (0x00012bec) form_field_popup_wide_pane_g1

0x34db,	// (0x00012bf4) form_field_popup_wide_pane_t1_ParamLimits

0x3456,	// (0x00012b6f) input_focus_pane_cp8_ParamLimits

0x34f0,	// (0x00012c09) list_form_wide_pane_ParamLimits

0x6473,	// (0x00015b8c) aid_size_cell_graphic_pane

0xcf13,	// (0x0001c62c) data_form_pane_t1_ParamLimits

0xdb7d,	// (0x0001d296) data_form_wide_pane_t1_ParamLimits

0xd4a2,	// (0x0001cbbb) bg_status_flat_pane

0xc724,	// (0x0001be3d) title_pane_t1_ParamLimits

0x261a,	// (0x00011d33) title_pane_t2_ParamLimits

0x2640,	// (0x00011d59) title_pane_t3_ParamLimits

0xf557,	// (0x0001ec70) title_pane_t_ParamLimits

0x3bbb,	// (0x000132d4) level_1_signal_ParamLimits

0x3bcd,	// (0x000132e6) level_2_signal_ParamLimits

0x3be0,	// (0x000132f9) level_3_signal_ParamLimits

0x3bf3,	// (0x0001330c) level_4_signal_ParamLimits

0x3c06,	// (0x0001331f) level_5_signal_ParamLimits

0x3c19,	// (0x00013332) level_6_signal_ParamLimits

0x3c2c,	// (0x00013345) level_7_signal_ParamLimits

0x3bbb,	// (0x000132d4) level_1_battery_ParamLimits

0x3bcd,	// (0x000132e6) level_2_battery_ParamLimits

0x3be0,	// (0x000132f9) level_3_battery_ParamLimits

0x3bf3,	// (0x0001330c) level_4_battery_ParamLimits

0x3c06,	// (0x0001331f) level_5_battery_ParamLimits

0x3c19,	// (0x00013332) level_6_battery_ParamLimits

0x3c2c,	// (0x00013345) level_7_battery_ParamLimits

0x5489,	// (0x00014ba2) bg_status_flat_pane_g1

0x5491,	// (0x00014baa) bg_status_flat_pane_g2

0x5499,	// (0x00014bb2) bg_status_flat_pane_g3

0x54a1,	// (0x00014bba) bg_status_flat_pane_g4

0x54a9,	// (0x00014bc2) bg_status_flat_pane_g5

0x54b1,	// (0x00014bca) bg_status_flat_pane_g6

0x54b9,	// (0x00014bd2) bg_status_flat_pane_g7

0xc7b0,	// (0x0001bec9) tabs_3_active_pane_t1_ParamLimits

0xc7b0,	// (0x0001bec9) tabs_3_passive_pane_t1_ParamLimits

0xc7c2,	// (0x0001bedb) tabs_4_active_pane_t1_ParamLimits

0xc7c2,	// (0x0001bedb) tabs_4_1_passive_pane_t1_ParamLimits

0xcfc4,	// (0x0001c6dd) tabs_2_active_pane_t1_ParamLimits

0xcfc4,	// (0x0001c6dd) tabs_2_passive_pane_t1_ParamLimits

0x2652,	// (0x00011d6b) bg_active_tab_pane_cp4_ParamLimits

0xcfd6,	// (0x0001c6ef) tabs_2_long_active_pane_t1_ParamLimits

0x4637,	// (0x00013d50) bg_passive_tab_pane_cp4_ParamLimits

0x1107,	// (0x00010820) list_single_midp_graphic_pane_t1_ParamLimits

0x2652,	// (0x00011d6b) bg_active_tab_pane_cp5_ParamLimits

0xcfe9,	// (0x0001c702) tabs_3_long_active_pane_t1_ParamLimits

0x4637,	// (0x00013d50) bg_passive_tab_pane_cp5_ParamLimits

0x1107,	// (0x00010820) list_single_midp_graphic_pane_t1

0xd4a2,	// (0x0001cbbb) bg_status_flat_pane_ParamLimits

0x47d9,	// (0x00013ef2) indicator_pane_cp2_ParamLimits

0x47d9,	// (0x00013ef2) indicator_pane_cp2

0xd620,	// (0x0001cd39) navi_pane_srt_ParamLimits

0xd620,	// (0x0001cd39) navi_pane_srt

0x4928,	// (0x00014041) popup_clock_digital_analogue_window_cp1

0x2749,	// (0x00011e62) indicator_pane_t1

0x42f1,	// (0x00013a0a) copy_highlight_pane

0x42f1,	// (0x00013a0a) cursor_graphics_pane

0x42f1,	// (0x00013a0a) graphic_within_text_pane

0x42f1,	// (0x00013a0a) link_highlight_pane

0x5ca4,	// (0x000153bd) popup_preview_text_window_t5_ParamLimits

0x5ca4,	// (0x000153bd) popup_preview_text_window_t5

0x4413,	// (0x00013b2c) cursor_digital_pane

0x4413,	// (0x00013b2c) cursor_primary_pane

0x4424,	// (0x00013b3d) cursor_primary_small_pane

0x442c,	// (0x00013b45) cursor_secondary_pane

0x4434,	// (0x00013b4d) cursor_title_pane

0x4413,	// (0x00013b2c) link_highlight_digital_pane

0x441b,	// (0x00013b34) link_highlight_primary_pane

0x4424,	// (0x00013b3d) link_highlight_primary_small_pane

0x442c,	// (0x00013b45) link_highlight_secondary_pane

0x4434,	// (0x00013b4d) link_highlight_title_pane

0x4413,	// (0x00013b2c) copy_highlight_digital_pane

0x4413,	// (0x00013b2c) copy_highlight_primary_pane

0x4424,	// (0x00013b3d) copy_highlight_primary_small_pane

0x442c,	// (0x00013b45) copy_highlight_secondary_pane

0x4434,	// (0x00013b4d) copy_highlight_title_pane

0x442c,	// (0x00013b45) graphic_text_digital_pane

0x5527,	// (0x00014c40) graphic_text_primary_pane

0x5530,	// (0x00014c49) graphic_text_primary_small_pane

0x4424,	// (0x00013b3d) graphic_text_secondary_pane

0x4413,	// (0x00013b2c) graphic_text_title_pane

0xd2b6,	// (0x0001c9cf) cursor_primary_pane_g1

0x5519,	// (0x00014c32) cursor_text_primary_t1

0xd8c3,	// (0x0001cfdc) cursor_primary_small_pane_g1

0x550b,	// (0x00014c24) cursor_text_primary_small_t1

0xd8b9,	// (0x0001cfd2) cursor_primary_small_pane_g1_copy1

0x54f3,	// (0x00014c0c) cursor_text_primary_small_t1_copy1

0x54d1,	// (0x00014bea) cursor_text_title_t1

0xd8af,	// (0x0001cfc8) cursor_title_pane_g1

0xd2b6,	// (0x0001c9cf) cursor_digital_pane_g1

0x4446,	// (0x00013b5f) cursor_text_digital_t1

0x446b,	// (0x00013b84) link_highlight_primary_pane_g1

0x547a,	// (0x00014b93) link_highlight_primary_pane_t1

0x4454,	// (0x00013b6d) link_highlight_primary_small_pane_g1

0x445c,	// (0x00013b75) link_highlight_primary_small_pane_t1

0x446b,	// (0x00013b84) link_highlight_secondary_pane_g1

0x4473,	// (0x00013b8c) link_highlight_secondary_pane_t1

0x53ee,	// (0x00014b07) link_highlight_title_pane_g1

0x53f6,	// (0x00014b0f) link_highlight_title_pane_t1

0x53d7,	// (0x00014af0) link_highlight_digital_pane_g1

0x53df,	// (0x00014af8) link_highlight_digital_pane_t1

0x52af,	// (0x000149c8) copy_highlight_primary_pane_g1

0x52b7,	// (0x000149d0) copy_highlight_primary_pane_t1

0x5289,	// (0x000149a2) copy_highlight_primary_small_pane_g1

0x52a0,	// (0x000149b9) copy_highlight_primary_small_pane_t1

0x4482,	// (0x00013b9b) copy_highlight_secondary_pane_g1

0x448a,	// (0x00013ba3) copy_highlight_secondary_pane_t1

0x5289,	// (0x000149a2) copy_highlight_title_pane_g1

0x5291,	// (0x000149aa) copy_highlight_title_pane_t1

0x52af,	// (0x000149c8) copy_highlight_digital_pane_g1

0x663e,	// (0x00015d57) copy_highlight_digital_pane_t1

0x6592,	// (0x00015cab) graphic_text_primary_pane_g1

0x6622,	// (0x00015d3b) graphic_text_primary_pane_t1

0x6630,	// (0x00015d49) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0001f0dd) graphic_text_primary_pane_t

0x65fe,	// (0x00015d17) graphic_text_primary_small_pane_g1

0x6606,	// (0x00015d1f) graphic_text_primary_small_pane_t1

0x6614,	// (0x00015d2d) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0001f0d8) graphic_text_primary_small_pane_t

0x65da,	// (0x00015cf3) graphic_text_secondary_pane_g1

0x65e2,	// (0x00015cfb) graphic_text_secondary_pane_t1

0x65f0,	// (0x00015d09) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x0001f0d3) graphic_text_secondary_pane_t

0x65b6,	// (0x00015ccf) graphic_text_title_pane_g1

0x65be,	// (0x00015cd7) graphic_text_title_pane_t1

0x65cc,	// (0x00015ce5) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0001f0ce) graphic_text_title_pane_t

0x6592,	// (0x00015cab) graphic_text_digital_pane_g1

0x659a,	// (0x00015cb3) graphic_text_digital_pane_t1

0x65a8,	// (0x00015cc1) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0001f0c9) graphic_text_digital_pane_t

0x2652,	// (0x00011d6b) navi_icon_pane_srt_ParamLimits

0x2652,	// (0x00011d6b) navi_icon_pane_srt

0x2572,	// (0x00011c8b) navi_midp_pane_srt

0x2572,	// (0x00011c8b) navi_navi_pane_srt

0x2652,	// (0x00011d6b) navi_text_pane_srt_ParamLimits

0x2652,	// (0x00011d6b) navi_text_pane_srt

0x655d,	// (0x00015c76) navi_navi_icon_text_pane_srt

0x6565,	// (0x00015c7e) navi_navi_pane_srt_g1_ParamLimits

0x6565,	// (0x00015c7e) navi_navi_pane_srt_g1

0x6577,	// (0x00015c90) navi_navi_pane_srt_g2_ParamLimits

0x6577,	// (0x00015c90) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x0001f0c4) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x0001f0c4) navi_navi_pane_srt_g

0x6589,	// (0x00015ca2) navi_navi_tabs_pane_srt

0x655d,	// (0x00015c76) navi_navi_text_pane_srt

0x655d,	// (0x00015c76) navi_navi_volume_pane_srt

0x654e,	// (0x00015c67) navi_navi_text_pane_srt_t1

0x1481,	// (0x00010b9a) navi_navi_volume_pane_srt_g1

0x1489,	// (0x00010ba2) volume_small_pane_srt_ParamLimits

0x1489,	// (0x00010ba2) volume_small_pane_srt

0x082e,	// (0x0000ff47) volume_small_pane_srt_g1_ParamLimits

0x082e,	// (0x0000ff47) volume_small_pane_srt_g1

0x083e,	// (0x0000ff57) volume_small_pane_srt_g2_ParamLimits

0x083e,	// (0x0000ff57) volume_small_pane_srt_g2

0x084f,	// (0x0000ff68) volume_small_pane_srt_g3_ParamLimits

0x084f,	// (0x0000ff68) volume_small_pane_srt_g3

0x0860,	// (0x0000ff79) volume_small_pane_srt_g4_ParamLimits

0x0860,	// (0x0000ff79) volume_small_pane_srt_g4

0x0871,	// (0x0000ff8a) volume_small_pane_srt_g5_ParamLimits

0x0871,	// (0x0000ff8a) volume_small_pane_srt_g5

0x0882,	// (0x0000ff9b) volume_small_pane_srt_g6_ParamLimits

0x0882,	// (0x0000ff9b) volume_small_pane_srt_g6

0x0893,	// (0x0000ffac) volume_small_pane_srt_g7_ParamLimits

0x0893,	// (0x0000ffac) volume_small_pane_srt_g7

0x08a4,	// (0x0000ffbd) volume_small_pane_srt_g8_ParamLimits

0x08a4,	// (0x0000ffbd) volume_small_pane_srt_g8

0x08b5,	// (0x0000ffce) volume_small_pane_srt_g9_ParamLimits

0x08b5,	// (0x0000ffce) volume_small_pane_srt_g9

0x08c6,	// (0x0000ffdf) volume_small_pane_srt_g10_ParamLimits

0x08c6,	// (0x0000ffdf) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001ee71) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001ee71) volume_small_pane_srt_g

0x2a46,	// (0x0001215f) query_popup_data_pane_cp2

0x6534,	// (0x00015c4d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6534,	// (0x00015c4d) navi_navi_icon_text_pane_srt_t1

0x5527,	// (0x00014c40) navi_tabs_2_long_pane_srt

0x5527,	// (0x00014c40) navi_tabs_2_pane_srt

0x5527,	// (0x00014c40) navi_tabs_3_long_pane_srt

0x5527,	// (0x00014c40) navi_tabs_3_pane_srt

0x5527,	// (0x00014c40) navi_tabs_4_pane_srt

0x1461,	// (0x00010b7a) tabs_2_active_pane_srt_ParamLimits

0x1461,	// (0x00010b7a) tabs_2_active_pane_srt

0x1471,	// (0x00010b8a) tabs_2_passive_pane_srt_ParamLimits

0x1471,	// (0x00010b8a) tabs_2_passive_pane_srt

0x4ca5,	// (0x000143be) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4ca5,	// (0x000143be) bg_passive_tab_pane_cp1_srt

0x6500,	// (0x00015c19) bg_passive_tab_pane_g1_cp1_srt

0x3f33,	// (0x0001364c) bg_passive_tab_pane_g2_cp1_srt

0x6509,	// (0x00015c22) bg_passive_tab_pane_g3_cp1_srt

0x28e7,	// (0x00012000) bg_active_tab_pane_cp1_srt_ParamLimits

0x28e7,	// (0x00012000) bg_active_tab_pane_cp1_srt

0x6512,	// (0x00015c2b) tabs_2_active_pane_srt_g1

0xdcc9,	// (0x0001d3e2) tabs_2_active_pane_srt_t1_ParamLimits

0xdcc9,	// (0x0001d3e2) tabs_2_active_pane_srt_t1

0x6500,	// (0x00015c19) bg_active_tab_pane_g1_cp1_srt

0x3f33,	// (0x0001364c) bg_active_tab_pane_g2_cp1_srt

0x6509,	// (0x00015c22) bg_active_tab_pane_g3_cp1_srt

0x142e,	// (0x00010b47) tabs_3_active_pane_srt_ParamLimits

0x142e,	// (0x00010b47) tabs_3_active_pane_srt

0x143f,	// (0x00010b58) tabs_3_passive_pane_cp_srt_ParamLimits

0x143f,	// (0x00010b58) tabs_3_passive_pane_cp_srt

0x1450,	// (0x00010b69) tabs_3_passive_pane_srt_ParamLimits

0x1450,	// (0x00010b69) tabs_3_passive_pane_srt

0x4ca5,	// (0x000143be) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4ca5,	// (0x000143be) bg_passive_tab_pane_cp2_srt

0x4499,	// (0x00013bb2) bg_passive_tab_pane_g1_cp2_srt

0x3f33,	// (0x0001364c) bg_passive_tab_pane_g2_cp2_srt

0x44a2,	// (0x00013bbb) bg_passive_tab_pane_g3_cp2_srt

0x28e7,	// (0x00012000) bg_active_tab_pane_cp2_srt_ParamLimits

0x28e7,	// (0x00012000) bg_active_tab_pane_cp2_srt

0x64e6,	// (0x00015bff) tabs_3_active_pane_srt_g1

0xdcb3,	// (0x0001d3cc) tabs_3_active_pane_srt_t1_ParamLimits

0xdcb3,	// (0x0001d3cc) tabs_3_active_pane_srt_t1

0x4499,	// (0x00013bb2) bg_active_tab_pane_g1_cp2_srt

0x3f33,	// (0x0001364c) bg_active_tab_pane_g2_cp2_srt

0x44a2,	// (0x00013bbb) bg_active_tab_pane_g3_cp2_srt

0x13e6,	// (0x00010aff) tabs_4_active_pane_srt_ParamLimits

0x13e6,	// (0x00010aff) tabs_4_active_pane_srt

0x13f8,	// (0x00010b11) tabs_4_passive_pane_cp2_srt_ParamLimits

0x13f8,	// (0x00010b11) tabs_4_passive_pane_cp2_srt

0x0a2b,	// (0x00010144) aid_size_cell_toolbar

0x6077,	// (0x00015790) main_idle_act_pane_ParamLimits

0x0bf6,	// (0x0001030f) popup_large_graphic_colour_window_ParamLimits

0xbff3,	// (0x0001b70c) popup_toolbar_window_ParamLimits

0xbff3,	// (0x0001b70c) popup_toolbar_window

0x627d,	// (0x00015996) list_single_graphic_2heading_pane_ParamLimits

0x627d,	// (0x00015996) list_single_graphic_2heading_pane

0x3970,	// (0x00013089) aid_size_cell_apps_grid_lsc_pane

0x3982,	// (0x0001309b) aid_size_cell_apps_grid_prt_pane

0x4637,	// (0x00013d50) bg_wml_button_pane_cp1_ParamLimits

0x4637,	// (0x00013d50) bg_wml_button_pane_cp1

0xd84e,	// (0x0001cf67) form_midp_field_text_pane_t1_ParamLimits

0x4ca5,	// (0x000143be) input_focus_pane_cp050_ParamLimits

0x4f21,	// (0x0001463a) list_midp_form_text_pane_ParamLimits

0x4ec7,	// (0x000145e0) input_focus_pane_cp051_ParamLimits

0x4edb,	// (0x000145f4) list_midp_choice_pane_ParamLimits

0xd7eb,	// (0x0001cf04) list_single_2graphic_pane_cp3_ParamLimits

0xd7eb,	// (0x0001cf04) list_single_2graphic_pane_cp3

0xd7fe,	// (0x0001cf17) list_single_midp_graphic_pane_ParamLimits

0xd7fe,	// (0x0001cf17) list_single_midp_graphic_pane

0x100a,	// (0x00010723) list_single_graphic_2heading_pane_g1_ParamLimits

0x100a,	// (0x00010723) list_single_graphic_2heading_pane_g1

0x1016,	// (0x0001072f) list_single_graphic_2heading_pane_g4_ParamLimits

0x1016,	// (0x0001072f) list_single_graphic_2heading_pane_g4

0x1022,	// (0x0001073b) list_single_graphic_2heading_pane_g5_ParamLimits

0x1022,	// (0x0001073b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001eec4) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001eec4) list_single_graphic_2heading_pane_g

0x102e,	// (0x00010747) list_single_graphic_2heading_pane_t1_ParamLimits

0x102e,	// (0x00010747) list_single_graphic_2heading_pane_t1

0x1042,	// (0x0001075b) list_single_graphic_2heading_pane_t2_ParamLimits

0x1042,	// (0x0001075b) list_single_graphic_2heading_pane_t2

0x105e,	// (0x00010777) list_single_graphic_2heading_pane_t3_ParamLimits

0x105e,	// (0x00010777) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001eecb) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001eecb) list_single_graphic_2heading_pane_t

0x4a87,	// (0x000141a0) bg_popup_sub_pane_cp2

0x4ab1,	// (0x000141ca) grid_toobar_pane

0x1076,	// (0x0001078f) cell_toolbar_pane_ParamLimits

0x1076,	// (0x0001078f) cell_toolbar_pane

0x4b1b,	// (0x00014234) cell_toolbar_pane_g1_ParamLimits

0x4b1b,	// (0x00014234) cell_toolbar_pane_g1

0x4b2f,	// (0x00014248) cell_toolbar_pane_g2_ParamLimits

0x4b2f,	// (0x00014248) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001eed9) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001eed9) cell_toolbar_pane_g

0x4b51,	// (0x0001426a) grid_highlight_pane_cp2_ParamLimits

0x4b51,	// (0x0001426a) grid_highlight_pane_cp2

0x4b6b,	// (0x00014284) toolbar_button_pane

0x4b77,	// (0x00014290) toolbar_button_pane_g1

0x4b7f,	// (0x00014298) toolbar_button_pane_g2

0x4b87,	// (0x000142a0) toolbar_button_pane_g3

0x4b8f,	// (0x000142a8) toolbar_button_pane_g4

0x4b97,	// (0x000142b0) toolbar_button_pane_g5

0x4b9f,	// (0x000142b8) toolbar_button_pane_g6

0x4ba7,	// (0x000142c0) toolbar_button_pane_g7

0x4baf,	// (0x000142c8) toolbar_button_pane_g8

0x4bb7,	// (0x000142d0) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001eede) toolbar_button_pane_g

0x10ae,	// (0x000107c7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x10ae,	// (0x000107c7) list_single_2graphic_pane_g1_cp3

0xc04b,	// (0x0001b764) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc04b,	// (0x0001b764) list_single_2graphic_pane_g2_cp3

0x10cb,	// (0x000107e4) list_single_2graphic_pane_g3_cp3

0x10d3,	// (0x000107ec) list_single_2graphic_pane_g4_cp3_ParamLimits

0x10d3,	// (0x000107ec) list_single_2graphic_pane_g4_cp3

0x10df,	// (0x000107f8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x10df,	// (0x000107f8) list_single_2graphic_pane_t1_cp3

0x10fb,	// (0x00010814) list_single_midp_graphic_pane_g2_ParamLimits

0x10fb,	// (0x00010814) list_single_midp_graphic_pane_g2

0x0a33,	// (0x0001014c) aid_zoom_text_primary

0x0a3b,	// (0x00010154) aid_zoom_text_secondary

0xd30e,	// (0x0001ca27) status_small_pane_g7_ParamLimits

0xd30e,	// (0x0001ca27) status_small_pane_g7

0xd331,	// (0x0001ca4a) status_small_pane_t1_ParamLimits

0xc700,	// (0x0001be19) title_pane_g2

0x0003,

0xf54e,	// (0x0001ec67) title_pane_g

0xc978,	// (0x0001c091) aid_size_cell_colour_1_pane_ParamLimits

0xc978,	// (0x0001c091) aid_size_cell_colour_1_pane

0xc98c,	// (0x0001c0a5) aid_size_cell_colour_2_pane_ParamLimits

0xc98c,	// (0x0001c0a5) aid_size_cell_colour_2_pane

0xc9a0,	// (0x0001c0b9) aid_size_cell_colour_3_pane_ParamLimits

0xc9a0,	// (0x0001c0b9) aid_size_cell_colour_3_pane

0xc9b4,	// (0x0001c0cd) aid_size_cell_colour_4_pane_ParamLimits

0xc9b4,	// (0x0001c0cd) aid_size_cell_colour_4_pane

0x048b,	// (0x0000fba4) title_pane_stacon_g1_ParamLimits

0x048b,	// (0x0000fba4) title_pane_stacon_g1

0x530e,	// (0x00014a27) popup_note_wait_window_g3_ParamLimits

0x530e,	// (0x00014a27) popup_note_wait_window_g3

0x5384,	// (0x00014a9d) popup_note_wait_window_t5_ParamLimits

0x5384,	// (0x00014a9d) popup_note_wait_window_t5

0x2572,	// (0x00011c8b) main_feb_china_hwr_fs_writing_pane

0xb9fb,	// (0x0001b114) popup_feb_china_hwr_fs_window_ParamLimits

0xb9fb,	// (0x0001b114) popup_feb_china_hwr_fs_window

0xc05c,	// (0x0001b775) aid_size_cell_hwr_fs_ParamLimits

0xc05c,	// (0x0001b775) aid_size_cell_hwr_fs

0x4ca5,	// (0x000143be) bg_popup_sub_pane_cp3_ParamLimits

0x4ca5,	// (0x000143be) bg_popup_sub_pane_cp3

0xc071,	// (0x0001b78a) grid_hwr_fs_pane_ParamLimits

0xc071,	// (0x0001b78a) grid_hwr_fs_pane

0x114a,	// (0x00010863) linegrid_hwr_fs_pane_ParamLimits

0x114a,	// (0x00010863) linegrid_hwr_fs_pane

0xc089,	// (0x0001b7a2) cell_hwr_fs_pane_ParamLimits

0xc089,	// (0x0001b7a2) cell_hwr_fs_pane

0x4cb1,	// (0x000143ca) linegrid_hwr_fs_pane_g1_ParamLimits

0x4cb1,	// (0x000143ca) linegrid_hwr_fs_pane_g1

0xd7bf,	// (0x0001ced8) linegrid_hwr_fs_pane_g2_ParamLimits

0xd7bf,	// (0x0001ced8) linegrid_hwr_fs_pane_g2

0x4ccf,	// (0x000143e8) linegrid_hwr_fs_pane_g3_ParamLimits

0x4ccf,	// (0x000143e8) linegrid_hwr_fs_pane_g3

0x117c,	// (0x00010895) linegrid_hwr_fs_pane_g4_ParamLimits

0x117c,	// (0x00010895) linegrid_hwr_fs_pane_g4

0x1196,	// (0x000108af) linegrid_hwr_fs_pane_g5_ParamLimits

0x1196,	// (0x000108af) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x0001ef04) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x0001ef04) linegrid_hwr_fs_pane_g

0x4cdb,	// (0x000143f4) cell_hwr_fs_pane_g1_ParamLimits

0x4cdb,	// (0x000143f4) cell_hwr_fs_pane_g1

0x49be,	// (0x000140d7) cell_hwr_fs_pane_g2_ParamLimits

0x49be,	// (0x000140d7) cell_hwr_fs_pane_g2

0xd7d1,	// (0x0001ceea) cell_hwr_fs_pane_g3_ParamLimits

0xd7d1,	// (0x0001ceea) cell_hwr_fs_pane_g3

0xd7de,	// (0x0001cef7) cell_hwr_fs_pane_g4_ParamLimits

0xd7de,	// (0x0001cef7) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0001ef0f) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001ef0f) cell_hwr_fs_pane_g

0xc0af,	// (0x0001b7c8) cell_hwr_fs_pane_t1

0x2572,	// (0x00011c8b) grid_highlight_pane_cp6

0x2572,	// (0x00011c8b) main_idle_act2_pane

0x3727,	// (0x00012e40) aid_inside_area_popup_secondary

0xd8cd,	// (0x0001cfe6) aid_inside_area_window_primary_ParamLimits

0xd8cd,	// (0x0001cfe6) aid_inside_area_window_primary

0x664d,	// (0x00015d66) ai2_news_ticker_pane

0x6655,	// (0x00015d6e) aid_size_cell_ai1_link_ParamLimits

0x6655,	// (0x00015d6e) aid_size_cell_ai1_link

0xdcdf,	// (0x0001d3f8) popup_ai2_data_window_ParamLimits

0xdcdf,	// (0x0001d3f8) popup_ai2_data_window

0x6685,	// (0x00015d9e) popup_ai2_link_window_ParamLimits

0x6685,	// (0x00015d9e) popup_ai2_link_window

0x4ca5,	// (0x000143be) bg_popup_sub_pane_cp4_ParamLimits

0x4ca5,	// (0x000143be) bg_popup_sub_pane_cp4

0x6699,	// (0x00015db2) grid_ai2_link_pane_ParamLimits

0x6699,	// (0x00015db2) grid_ai2_link_pane

0x66b0,	// (0x00015dc9) popup_ai2_link_window_g1_ParamLimits

0x66b0,	// (0x00015dc9) popup_ai2_link_window_g1

0x66bc,	// (0x00015dd5) popup_ai2_link_window_g2_ParamLimits

0x66bc,	// (0x00015dd5) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x0001f0e2) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x0001f0e2) popup_ai2_link_window_g

0x66cb,	// (0x00015de4) ai2_mp_button_pane

0x66d3,	// (0x00015dec) ai2_mp_volume_pane

0x4ec7,	// (0x000145e0) bg_popup_sub_pane_cp5_ParamLimits

0x4ec7,	// (0x000145e0) bg_popup_sub_pane_cp5

0x66db,	// (0x00015df4) heading_ai2_gene_pane_ParamLimits

0x66db,	// (0x00015df4) heading_ai2_gene_pane

0x66e7,	// (0x00015e00) list_ai2_gene_pane_ParamLimits

0x66e7,	// (0x00015e00) list_ai2_gene_pane

0x672f,	// (0x00015e48) cell_ai2_link_pane_ParamLimits

0x672f,	// (0x00015e48) cell_ai2_link_pane

0x6745,	// (0x00015e5e) cell_ai2_link_pane_g1

0x2572,	// (0x00011c8b) grid_highlight_pane_cp7

0x149e,	// (0x00010bb7) ai2_mp_volume_pane_g1

0x6815,	// (0x00015f2e) ai2_mp_volume_pane_g2

0xdd09,	// (0x0001d422) list_ai2_gene_pane_t1

0x681d,	// (0x00015f36) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0001f0fb) ai2_mp_volume_pane_g

0x14a6,	// (0x00010bbf) volume_small_pane_cp3

0x6825,	// (0x00015f3e) aid_size_cell_ai2_button

0x682d,	// (0x00015f46) grid_ai2_button_pane

0x6836,	// (0x00015f4f) cell_ai2_button_pane_ParamLimits

0x6836,	// (0x00015f4f) cell_ai2_button_pane

0x2568,	// (0x00011c81) cell_ai2_button_pane_g1

0x2572,	// (0x00011c8b) grid_highlight_pane_cp8

0x67d5,	// (0x00015eee) ai2_gene_pane_t1_ParamLimits

0x67d5,	// (0x00015eee) ai2_gene_pane_t1

0xb975,	// (0x0001b08e) aid_height_parent_landscape

0xda29,	// (0x0001d142) aid_height_set_list

0x6077,	// (0x00015790) aid_size_parent

0x6473,	// (0x00015b8c) aid_size_cell_graphic_pane_ParamLimits

0x66f7,	// (0x00015e10) popup_ai2_data_window_g1_ParamLimits

0x66f7,	// (0x00015e10) popup_ai2_data_window_g1

0x6703,	// (0x00015e1c) ai2_news_ticker_pane_g1

0x670b,	// (0x00015e24) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x0001f0e7) ai2_news_ticker_pane_g

0x6713,	// (0x00015e2c) ai2_news_ticker_pane_t1

0x6721,	// (0x00015e3a) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0001f0ec) ai2_news_ticker_pane_t

0x674e,	// (0x00015e67) heading_ai2_gene_pane_g1

0x6756,	// (0x00015e6f) heading_ai2_gene_pane_t1_ParamLimits

0x6756,	// (0x00015e6f) heading_ai2_gene_pane_t1

0x676b,	// (0x00015e84) list_highlight_pane_cp6

0xdcf3,	// (0x0001d40c) ai2_gene_pane_ParamLimits

0xdcf3,	// (0x0001d40c) ai2_gene_pane

0xdd17,	// (0x0001d430) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x0001f0f1) list_ai2_gene_pane_t

0x67a6,	// (0x00015ebf) list_highlight_pane_cp8_ParamLimits

0x67a6,	// (0x00015ebf) list_highlight_pane_cp8

0x67b7,	// (0x00015ed0) ai2_gene_pane_g1_ParamLimits

0x67b7,	// (0x00015ed0) ai2_gene_pane_g1

0x67c9,	// (0x00015ee2) ai2_gene_pane_g2_ParamLimits

0x67c9,	// (0x00015ee2) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x0001f0f6) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x0001f0f6) ai2_gene_pane_g

0x2e71,	// (0x0001258a) scroll_pane_cp12

0xb934,	// (0x0001b04d) control_pane_t3_ParamLimits

0xb934,	// (0x0001b04d) control_pane_t3

0xd322,	// (0x0001ca3b) status_small_pane_g8_ParamLimits

0xd322,	// (0x0001ca3b) status_small_pane_g8

0xba90,	// (0x0001b1a9) popup_find_window_ParamLimits

0xbd1d,	// (0x0001b436) popup_note_image_window_ParamLimits

0x4aed,	// (0x00014206) list_double2_graphic_pane_vc_g1_ParamLimits

0x4aed,	// (0x00014206) list_double2_graphic_pane_vc_g1

0x422a,	// (0x00013943) list_double2_graphic_pane_vc_g2_ParamLimits

0x422a,	// (0x00013943) list_double2_graphic_pane_vc_g2

0x4af9,	// (0x00014212) list_double2_graphic_pane_vc_g3_ParamLimits

0x4af9,	// (0x00014212) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001eed2) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001eed2) list_double2_graphic_pane_vc_g

0x4b05,	// (0x0001421e) list_double2_graphic_pane_vc_t1_ParamLimits

0x4b05,	// (0x0001421e) list_double2_graphic_pane_vc_t1

0x422a,	// (0x00013943) list_single_heading_pane_vc_g1_ParamLimits

0x422a,	// (0x00013943) list_single_heading_pane_vc_g1

0x4af9,	// (0x00014212) list_single_heading_pane_vc_g2_ParamLimits

0x4af9,	// (0x00014212) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ece1) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ece1) list_single_heading_pane_vc_g

0x4bbf,	// (0x000142d8) list_single_heading_pane_vc_t1_ParamLimits

0x4bbf,	// (0x000142d8) list_single_heading_pane_vc_t1

0x4bd7,	// (0x000142f0) list_single_heading_pane_vc_t2_ParamLimits

0x4bd7,	// (0x000142f0) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x0001eef3) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x0001eef3) list_single_heading_pane_vc_t

0x4bf3,	// (0x0001430c) list_setting_number_pane_vc_g1_ParamLimits

0x4bf3,	// (0x0001430c) list_setting_number_pane_vc_g1

0x4bff,	// (0x00014318) list_setting_number_pane_vc_g2_ParamLimits

0x4bff,	// (0x00014318) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0001eef8) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0001eef8) list_setting_number_pane_vc_g

0x4c0b,	// (0x00014324) list_setting_number_pane_vc_t1_ParamLimits

0x4c0b,	// (0x00014324) list_setting_number_pane_vc_t1

0x4c1f,	// (0x00014338) list_setting_number_pane_vc_t2_ParamLimits

0x4c1f,	// (0x00014338) list_setting_number_pane_vc_t2

0x4c3b,	// (0x00014354) list_setting_number_pane_vc_t3_ParamLimits

0x4c3b,	// (0x00014354) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0001eefd) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0001eefd) list_setting_number_pane_vc_t

0x4c69,	// (0x00014382) set_value_pane_vc_ParamLimits

0x4c69,	// (0x00014382) set_value_pane_vc

0x627d,	// (0x00015996) list_double2_graphic_pane_vc_ParamLimits

0x627d,	// (0x00015996) list_double2_graphic_pane_vc

0x627d,	// (0x00015996) list_double2_large_graphic_pane_vc_ParamLimits

0x627d,	// (0x00015996) list_double2_large_graphic_pane_vc

0x627d,	// (0x00015996) list_double2_pane_vc_ParamLimits

0x627d,	// (0x00015996) list_double2_pane_vc

0x627d,	// (0x00015996) list_double_graphic_heading_pane_vc_ParamLimits

0x627d,	// (0x00015996) list_double_graphic_heading_pane_vc

0x627d,	// (0x00015996) list_double_graphic_pane_vc_ParamLimits

0x627d,	// (0x00015996) list_double_graphic_pane_vc

0x627d,	// (0x00015996) list_double_heading_pane_vc_ParamLimits

0x627d,	// (0x00015996) list_double_heading_pane_vc

0x628f,	// (0x000159a8) list_double_large_graphic_pane_vc_ParamLimits

0x628f,	// (0x000159a8) list_double_large_graphic_pane_vc

0x627d,	// (0x00015996) list_double_number_pane_vc_ParamLimits

0x627d,	// (0x00015996) list_double_number_pane_vc

0x627d,	// (0x00015996) list_double_pane_vc_ParamLimits

0x627d,	// (0x00015996) list_double_pane_vc

0x627d,	// (0x00015996) list_double_time_pane_vc_ParamLimits

0x627d,	// (0x00015996) list_double_time_pane_vc

0x627d,	// (0x00015996) list_setting_number_pane_vc_ParamLimits

0x627d,	// (0x00015996) list_setting_number_pane_vc

0x627d,	// (0x00015996) list_setting_pane_vc_ParamLimits

0x627d,	// (0x00015996) list_setting_pane_vc

0x627d,	// (0x00015996) list_single_graphic_heading_pane_vc_ParamLimits

0x627d,	// (0x00015996) list_single_graphic_heading_pane_vc

0x627d,	// (0x00015996) list_single_heading_pane_vc_ParamLimits

0x627d,	// (0x00015996) list_single_heading_pane_vc

0x627d,	// (0x00015996) list_single_number_heading_pane_vc_ParamLimits

0x627d,	// (0x00015996) list_single_number_heading_pane_vc

0x4aed,	// (0x00014206) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4aed,	// (0x00014206) list_double_graphic_heading_pane_vc_g1

0x686a,	// (0x00015f83) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x686a,	// (0x00015f83) list_double_graphic_heading_pane_vc_g2

0x6876,	// (0x00015f8f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6876,	// (0x00015f8f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x0001f102) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x0001f102) list_double_graphic_heading_pane_vc_g

0x6882,	// (0x00015f9b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6882,	// (0x00015f9b) list_double_graphic_heading_pane_vc_t1

0x689e,	// (0x00015fb7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x689e,	// (0x00015fb7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0001f109) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0001f109) list_double_graphic_heading_pane_vc_t

0x4bf3,	// (0x0001430c) list_setting_pane_vc_g1_ParamLimits

0x4bf3,	// (0x0001430c) list_setting_pane_vc_g1

0x4bff,	// (0x00014318) list_setting_pane_vc_g2_ParamLimits

0x4bff,	// (0x00014318) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0001eef8) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0001eef8) list_setting_pane_vc_g

0x6aca,	// (0x000161e3) list_setting_pane_vc_t1_ParamLimits

0x6aca,	// (0x000161e3) list_setting_pane_vc_t1

0x6ae6,	// (0x000161ff) list_setting_pane_vc_t2_ParamLimits

0x6ae6,	// (0x000161ff) list_setting_pane_vc_t2

0x0001,

0xfa1e,	// (0x0001f137) list_setting_pane_vc_t_ParamLimits

0xfa1e,	// (0x0001f137) list_setting_pane_vc_t

0x4c69,	// (0x00014382) set_value_pane_cp_vc_ParamLimits

0x4c69,	// (0x00014382) set_value_pane_cp_vc

0x422a,	// (0x00013943) list_single_number_heading_pane_vc_g1_ParamLimits

0x422a,	// (0x00013943) list_single_number_heading_pane_vc_g1

0x4af9,	// (0x00014212) list_single_number_heading_pane_vc_g2_ParamLimits

0x4af9,	// (0x00014212) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ece1) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ece1) list_single_number_heading_pane_vc_g

0x4bbf,	// (0x000142d8) list_single_number_heading_pane_vc_t1_ParamLimits

0x4bbf,	// (0x000142d8) list_single_number_heading_pane_vc_t1

0x6b02,	// (0x0001621b) list_single_number_heading_pane_vc_t2_ParamLimits

0x6b02,	// (0x0001621b) list_single_number_heading_pane_vc_t2

0x6b16,	// (0x0001622f) list_single_number_heading_pane_vc_t3_ParamLimits

0x6b16,	// (0x0001622f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa23,	// (0x0001f13c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa23,	// (0x0001f13c) list_single_number_heading_pane_vc_t

0x4aed,	// (0x00014206) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4aed,	// (0x00014206) list_single_graphic_heading_pane_vc_g1

0x422a,	// (0x00013943) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x422a,	// (0x00013943) list_single_graphic_heading_pane_vc_g4

0x4af9,	// (0x00014212) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4af9,	// (0x00014212) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001eed2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001eed2) list_single_graphic_heading_pane_vc_g

0x4bbf,	// (0x000142d8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4bbf,	// (0x000142d8) list_single_graphic_heading_pane_vc_t1

0x6b28,	// (0x00016241) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6b28,	// (0x00016241) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2a,	// (0x0001f143) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2a,	// (0x0001f143) list_single_graphic_heading_pane_vc_t

0x422a,	// (0x00013943) list_double2_pane_vc_g1_ParamLimits

0x422a,	// (0x00013943) list_double2_pane_vc_g1

0x4af9,	// (0x00014212) list_double2_pane_vc_g2_ParamLimits

0x4af9,	// (0x00014212) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ece1) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ece1) list_double2_pane_vc_g

0x6b3c,	// (0x00016255) list_double2_pane_vc_t1_ParamLimits

0x6b3c,	// (0x00016255) list_double2_pane_vc_t1

0x6b52,	// (0x0001626b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6b52,	// (0x0001626b) list_double2_large_graphic_pane_vc_g1

0x422a,	// (0x00013943) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x422a,	// (0x00013943) list_double2_large_graphic_pane_vc_g2

0x4af9,	// (0x00014212) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4af9,	// (0x00014212) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0001ecfe) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0001ecfe) list_double2_large_graphic_pane_vc_g

0x6b5e,	// (0x00016277) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6b5e,	// (0x00016277) list_double2_large_graphic_pane_vc_t1

0x6b74,	// (0x0001628d) list_double_time_pane_vc_g1_ParamLimits

0x6b74,	// (0x0001628d) list_double_time_pane_vc_g1

0x6b80,	// (0x00016299) list_double_time_pane_vc_g2_ParamLimits

0x6b80,	// (0x00016299) list_double_time_pane_vc_g2

0x0001,

0xfa2f,	// (0x0001f148) list_double_time_pane_vc_g_ParamLimits

0xfa2f,	// (0x0001f148) list_double_time_pane_vc_g

0x6b8c,	// (0x000162a5) list_double_time_pane_vc_t1_ParamLimits

0x6b8c,	// (0x000162a5) list_double_time_pane_vc_t1

0x6bb0,	// (0x000162c9) list_double_time_pane_vc_t2_ParamLimits

0x6bb0,	// (0x000162c9) list_double_time_pane_vc_t2

0x6bdf,	// (0x000162f8) list_double_time_pane_vc_t3_ParamLimits

0x6bdf,	// (0x000162f8) list_double_time_pane_vc_t3

0x6bf1,	// (0x0001630a) list_double_time_pane_vc_t4_ParamLimits

0x6bf1,	// (0x0001630a) list_double_time_pane_vc_t4

0x0003,

0xfa34,	// (0x0001f14d) list_double_time_pane_vc_t_ParamLimits

0xfa34,	// (0x0001f14d) list_double_time_pane_vc_t

0x422a,	// (0x00013943) list_double_pane_vc_g1_ParamLimits

0x422a,	// (0x00013943) list_double_pane_vc_g1

0x4af9,	// (0x00014212) list_double_pane_vc_g2_ParamLimits

0x4af9,	// (0x00014212) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ece1) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ece1) list_double_pane_vc_g

0x6c05,	// (0x0001631e) list_double_pane_vc_t1_ParamLimits

0x6c05,	// (0x0001631e) list_double_pane_vc_t1

0x6c19,	// (0x00016332) list_double_pane_vc_t2_ParamLimits

0x6c19,	// (0x00016332) list_double_pane_vc_t2

0x0001,

0xfa3d,	// (0x0001f156) list_double_pane_vc_t_ParamLimits

0xfa3d,	// (0x0001f156) list_double_pane_vc_t

0x422a,	// (0x00013943) list_double_number_pane_vc_g1_ParamLimits

0x422a,	// (0x00013943) list_double_number_pane_vc_g1

0x4af9,	// (0x00014212) list_double_number_pane_vc_g2_ParamLimits

0x4af9,	// (0x00014212) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ece1) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ece1) list_double_number_pane_vc_g

0x6c31,	// (0x0001634a) list_double_number_pane_vc_t1_ParamLimits

0x6c31,	// (0x0001634a) list_double_number_pane_vc_t1

0x6c43,	// (0x0001635c) list_double_number_pane_vc_t2_ParamLimits

0x6c43,	// (0x0001635c) list_double_number_pane_vc_t2

0x6c57,	// (0x00016370) list_double_number_pane_vc_t3_ParamLimits

0x6c57,	// (0x00016370) list_double_number_pane_vc_t3

0x0002,

0xfa42,	// (0x0001f15b) list_double_number_pane_vc_t_ParamLimits

0xfa42,	// (0x0001f15b) list_double_number_pane_vc_t

0x6c6f,	// (0x00016388) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6c6f,	// (0x00016388) list_double_large_graphic_pane_vc_g1

0x6c91,	// (0x000163aa) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6c91,	// (0x000163aa) list_double_large_graphic_pane_vc_g2

0x6ca5,	// (0x000163be) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6ca5,	// (0x000163be) list_double_large_graphic_pane_vc_g3

0x6cb4,	// (0x000163cd) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6cb4,	// (0x000163cd) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa49,	// (0x0001f162) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa49,	// (0x0001f162) list_double_large_graphic_pane_vc_g

0x6cc0,	// (0x000163d9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6cc0,	// (0x000163d9) list_double_large_graphic_pane_vc_t1

0x6cdc,	// (0x000163f5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6cdc,	// (0x000163f5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa52,	// (0x0001f16b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa52,	// (0x0001f16b) list_double_large_graphic_pane_vc_t

0x686a,	// (0x00015f83) list_double_heading_pane_vc_g1_ParamLimits

0x686a,	// (0x00015f83) list_double_heading_pane_vc_g1

0x6876,	// (0x00015f8f) list_double_heading_pane_vc_g2_ParamLimits

0x6876,	// (0x00015f8f) list_double_heading_pane_vc_g2

0x0001,

0xfa57,	// (0x0001f170) list_double_heading_pane_vc_g_ParamLimits

0xfa57,	// (0x0001f170) list_double_heading_pane_vc_g

0x6cfe,	// (0x00016417) list_double_heading_pane_vc_t1_ParamLimits

0x6cfe,	// (0x00016417) list_double_heading_pane_vc_t1

0x4bbf,	// (0x000142d8) list_double_heading_pane_vc_t2_ParamLimits

0x4bbf,	// (0x000142d8) list_double_heading_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001f175) list_double_heading_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001f175) list_double_heading_pane_vc_t

0x6d12,	// (0x0001642b) list_double_graphic_pane_vc_g1_ParamLimits

0x6d12,	// (0x0001642b) list_double_graphic_pane_vc_g1

0x6d1e,	// (0x00016437) list_double_graphic_pane_vc_g2_ParamLimits

0x6d1e,	// (0x00016437) list_double_graphic_pane_vc_g2

0x422a,	// (0x00013943) list_double_graphic_pane_vc_g3_ParamLimits

0x422a,	// (0x00013943) list_double_graphic_pane_vc_g3

0x0003,

0xfa61,	// (0x0001f17a) list_double_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x0001f17a) list_double_graphic_pane_vc_g

0x6d3b,	// (0x00016454) list_double_graphic_pane_vc_t1_ParamLimits

0x6d3b,	// (0x00016454) list_double_graphic_pane_vc_t1

0x6d65,	// (0x0001647e) list_double_graphic_pane_vc_t2_ParamLimits

0x6d65,	// (0x0001647e) list_double_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x0001f183) list_double_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001f183) list_double_graphic_pane_vc_t

0xf546,	// (0x0001ec5f) aid_size_cell_fastswap

0xb5ff,	// (0x0001ad18) aid_size_cell_touch_ParamLimits

0xb5ff,	// (0x0001ad18) aid_size_cell_touch

0x024b,	// (0x0000f964) popup_fast_swap_wide_window_ParamLimits

0x024b,	// (0x0000f964) popup_fast_swap_wide_window

0xb7af,	// (0x0001aec8) touch_pane_ParamLimits

0xb7af,	// (0x0001aec8) touch_pane

0x3370,	// (0x00012a89) button_value_adjust_pane_cp2

0x3378,	// (0x00012a91) button_value_adjust_pane_cp4

0x339a,	// (0x00012ab3) form_field_data_pane_cp2

0xce37,	// (0x0001c550) form_field_data_wide_pane_cp2

0x3a39,	// (0x00013152) bg_scroll_pane_ParamLimits

0x05ed,	// (0x0000fd06) scroll_handle_pane_ParamLimits

0x0601,	// (0x0000fd1a) scroll_sc2_down_pane_ParamLimits

0x0601,	// (0x0000fd1a) scroll_sc2_down_pane

0x3a6a,	// (0x00013183) scroll_sc2_up_pane_ParamLimits

0x3a6a,	// (0x00013183) scroll_sc2_up_pane

0xde37,	// (0x0001d550) grid_wheel_folder_pane_g1_ParamLimits

0xde37,	// (0x0001d550) grid_wheel_folder_pane_g1

0x07c6,	// (0x0000fedf) clock_nsta_pane_cp2_ParamLimits

0x07c6,	// (0x0000fedf) clock_nsta_pane_cp2

0x4637,	// (0x00013d50) listscroll_midp_pane_ParamLimits

0xd21d,	// (0x0001c936) midp_canvas_pane

0x45e1,	// (0x00013cfa) nsta_clock_indic_pane

0x461d,	// (0x00013d36) listscroll_form_pane_vc

0x4625,	// (0x00013d3e) listscroll_set_pane_vc_ParamLimits

0x4625,	// (0x00013d3e) listscroll_set_pane_vc

0xd4ca,	// (0x0001cbe3) clock_nsta_pane

0xd4f4,	// (0x0001cc0d) indicator_nsta_pane

0x4a87,	// (0x000141a0) bg_popup_sub_pane_cp2_ParamLimits

0x4a9b,	// (0x000141b4) find_pane_cp2_ParamLimits

0x4a9b,	// (0x000141b4) find_pane_cp2

0x4ab1,	// (0x000141ca) grid_toobar_pane_ParamLimits

0x4c79,	// (0x00014392) list_form_gen_pane_vc_ParamLimits

0x4c79,	// (0x00014392) list_form_gen_pane_vc

0x4c8f,	// (0x000143a8) scroll_pane_cp8_vc_ParamLimits

0x4c8f,	// (0x000143a8) scroll_pane_cp8_vc

0x4d0b,	// (0x00014424) data_form_wide_pane_vc_ParamLimits

0x4d0b,	// (0x00014424) data_form_wide_pane_vc

0x4d17,	// (0x00014430) form_field_data_wide_pane_vc_g1

0x4d1f,	// (0x00014438) form_field_data_wide_pane_vc_t1_ParamLimits

0x4d1f,	// (0x00014438) form_field_data_wide_pane_vc_t1

0x3456,	// (0x00012b6f) input_focus_pane_cp6_vc_ParamLimits

0x3456,	// (0x00012b6f) input_focus_pane_cp6_vc

0xd887,	// (0x0001cfa0) list_midp_pane_ParamLimits

0x64da,	// (0x00015bf3) scroll_pane_cp16_ParamLimits

0x64da,	// (0x00015bf3) scroll_pane_cp16

0x50e3,	// (0x000147fc) button_value_adjust_pane_ParamLimits

0x50e3,	// (0x000147fc) button_value_adjust_pane

0xda3a,	// (0x0001d153) button_value_adjust_pane_cp6_ParamLimits

0xda3a,	// (0x0001d153) button_value_adjust_pane_cp6

0xdb54,	// (0x0001d26d) settings_code_pane_cp_ParamLimits

0xdb54,	// (0x0001d26d) settings_code_pane_cp

0x2568,	// (0x00011c81) cell_touch_pane_g1

0x2568,	// (0x00011c81) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001ee17) cell_touch_pane_g

0xdd25,	// (0x0001d43e) cell_touch_pane_cp_ParamLimits

0xdd25,	// (0x0001d43e) cell_touch_pane_cp

0xdd41,	// (0x0001d45a) cell_touch_pane_ParamLimits

0xdd41,	// (0x0001d45a) cell_touch_pane

0x2568,	// (0x00011c81) scroll_sc2_down_pane_g1

0x2568,	// (0x00011c81) scroll_sc2_up_pane_g1

0x2572,	// (0x00011c8b) bg_set_opt_pane_cp4_vc

0x68bc,	// (0x00015fd5) list_set_graphic_pane_vc_g1_ParamLimits

0x68bc,	// (0x00015fd5) list_set_graphic_pane_vc_g1

0x68c8,	// (0x00015fe1) list_set_graphic_pane_vc_g2_ParamLimits

0x68c8,	// (0x00015fe1) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0001f10e) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0001f10e) list_set_graphic_pane_vc_g

0x68d4,	// (0x00015fed) text_primary_small_cp13_vc_ParamLimits

0x68d4,	// (0x00015fed) text_primary_small_cp13_vc

0x68ec,	// (0x00016005) list_set_graphic_pane_vc_ParamLimits

0x68ec,	// (0x00016005) list_set_graphic_pane_vc

0x2572,	// (0x00011c8b) input_focus_pane_cp2_vc

0x2568,	// (0x00011c81) setting_code_pane_vc_g1

0x269d,	// (0x00011db6) setting_code_pane_vc_t1

0x68ff,	// (0x00016018) set_text_pane_vc_t1_ParamLimits

0x68ff,	// (0x00016018) set_text_pane_vc_t1

0x2572,	// (0x00011c8b) input_focus_pane_cp1_vc

0x691b,	// (0x00016034) list_set_text_pane_vc

0x2568,	// (0x00011c81) setting_text_pane_vc_g1

0x2572,	// (0x00011c8b) bg_set_opt_pane_cp2_vc

0x2694,	// (0x00011dad) setting_slider_graphic_pane_vc_g1

0x6925,	// (0x0001603e) setting_slider_graphic_pane_vc_t1

0x6935,	// (0x0001604e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x0001f113) setting_slider_graphic_pane_vc_t

0x6945,	// (0x0001605e) slider_set_pane_cp_vc

0x694d,	// (0x00016066) slider_set_pane_vc_g1

0x6956,	// (0x0001606f) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0001f118) slider_set_pane_vc_g

0x357f,	// (0x00012c98) set_opt_bg_pane_g1_copy1

0x3587,	// (0x00012ca0) set_opt_bg_pane_g2_copy1

0x6982,	// (0x0001609b) set_opt_bg_pane_g3_copy1

0x3597,	// (0x00012cb0) set_opt_bg_pane_g4_copy1

0x359f,	// (0x00012cb8) set_opt_bg_pane_g5_copy1

0x35a7,	// (0x00012cc0) set_opt_bg_pane_g6_copy1

0x698c,	// (0x000160a5) set_opt_bg_pane_g7_copy1

0x6994,	// (0x000160ad) set_opt_bg_pane_g8_copy1

0x699e,	// (0x000160b7) set_opt_bg_pane_g9_copy1

0x2572,	// (0x00011c8b) bg_set_opt_pane_cp_vc

0x69a8,	// (0x000160c1) setting_slider_pane_vc_t1

0x69b7,	// (0x000160d0) setting_slider_pane_vc_t2

0x69c7,	// (0x000160e0) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001f127) setting_slider_pane_vc_t

0x69d7,	// (0x000160f0) slider_set_pane_vc

0x11ba,	// (0x000108d3) volume_set_pane_vc_g1

0x11c3,	// (0x000108dc) volume_set_pane_vc_g2

0x11cc,	// (0x000108e5) volume_set_pane_vc_g3

0x11d5,	// (0x000108ee) volume_set_pane_vc_g4

0x11de,	// (0x000108f7) volume_set_pane_vc_g5

0x11e7,	// (0x00010900) volume_set_pane_vc_g6

0x11f0,	// (0x00010909) volume_set_pane_vc_g7

0x11f9,	// (0x00010912) volume_set_pane_vc_g8

0x1202,	// (0x0001091b) volume_set_pane_vc_g9

0x120b,	// (0x00010924) volume_set_pane_vc_g10

0x0009,

0xf8ac,	// (0x0001efc5) volume_set_pane_vc_g

0x69df,	// (0x000160f8) volume_set_pane_vc

0x69e7,	// (0x00016100) button_value_adjust_pane_cp1_vc

0x69f1,	// (0x0001610a) list_highlight_pane_cp2_vc

0x69fa,	// (0x00016113) list_set_pane_vc_ParamLimits

0x69fa,	// (0x00016113) list_set_pane_vc

0x6a58,	// (0x00016171) main_pane_set_vc_t1_ParamLimits

0x6a58,	// (0x00016171) main_pane_set_vc_t1

0x6a6d,	// (0x00016186) main_pane_set_vc_t2_ParamLimits

0x6a6d,	// (0x00016186) main_pane_set_vc_t2

0x6a7f,	// (0x00016198) main_pane_set_vc_t3_ParamLimits

0x6a7f,	// (0x00016198) main_pane_set_vc_t3

0x6a93,	// (0x000161ac) main_pane_set_vc_t4_ParamLimits

0x6a93,	// (0x000161ac) main_pane_set_vc_t4

0x0003,

0xfa15,	// (0x0001f12e) main_pane_set_vc_t_ParamLimits

0xfa15,	// (0x0001f12e) main_pane_set_vc_t

0x6aa7,	// (0x000161c0) setting_code_pane_vc_ParamLimits

0x6aa7,	// (0x000161c0) setting_code_pane_vc

0x6ab8,	// (0x000161d1) setting_slider_graphic_pane_vc

0x6ab8,	// (0x000161d1) setting_slider_pane_vc

0x6ab8,	// (0x000161d1) setting_text_pane_vc

0x6ab8,	// (0x000161d1) setting_volume_pane_vc

0x6ac2,	// (0x000161db) scroll_pane_cp121_vc

0x335e,	// (0x00012a77) set_content_pane_vc

0x6d8f,	// (0x000164a8) button_value_adjust_pane_g1

0x6d98,	// (0x000164b1) button_value_adjust_pane_g2

0x0001,

0xfa6f,	// (0x0001f188) button_value_adjust_pane_g

0x6da1,	// (0x000164ba) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6da1,	// (0x000164ba) form_field_slider_wide_pane_vc_t1

0x6db5,	// (0x000164ce) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6db5,	// (0x000164ce) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa74,	// (0x0001f18d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa74,	// (0x0001f18d) form_field_slider_wide_pane_vc_t

0x28e7,	// (0x00012000) input_focus_pane_cp10_vc_ParamLimits

0x28e7,	// (0x00012000) input_focus_pane_cp10_vc

0x6de3,	// (0x000164fc) slider_cont_pane_cp1_vc_ParamLimits

0x6de3,	// (0x000164fc) slider_cont_pane_cp1_vc

0x6df5,	// (0x0001650e) slider_form_pane_g1_cp2

0x6956,	// (0x0001606f) slider_form_pane_g2_cp2

0x6e22,	// (0x0001653b) form_field_slider_pane_vc_t3

0x6e30,	// (0x00016549) form_field_slider_pane_vc_t4

0x6e3e,	// (0x00016557) slider_form_pane_vc_ParamLimits

0x6e3e,	// (0x00016557) slider_form_pane_vc

0x6e4b,	// (0x00016564) form_field_slider_pane_vc_t1_ParamLimits

0x6e4b,	// (0x00016564) form_field_slider_pane_vc_t1

0x6db5,	// (0x000164ce) form_field_slider_pane_vc_t2_ParamLimits

0x6db5,	// (0x000164ce) form_field_slider_pane_vc_t2

0x0001,

0xfa86,	// (0x0001f19f) form_field_slider_pane_vc_t_ParamLimits

0xfa86,	// (0x0001f19f) form_field_slider_pane_vc_t

0x28e7,	// (0x00012000) input_focus_pane_cp9_vc_ParamLimits

0x28e7,	// (0x00012000) input_focus_pane_cp9_vc

0x6e67,	// (0x00016580) slider_cont_pane_vc_ParamLimits

0x6e67,	// (0x00016580) slider_cont_pane_vc

0x6e7b,	// (0x00016594) list_form_graphic_pane_cp_vc_ParamLimits

0x6e7b,	// (0x00016594) list_form_graphic_pane_cp_vc

0x4d17,	// (0x00014430) form_field_popup_wide_pane_vc_g1

0x6e90,	// (0x000165a9) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6e90,	// (0x000165a9) form_field_popup_wide_pane_vc_t1

0x3456,	// (0x00012b6f) input_focus_pane_cp8_vc_ParamLimits

0x3456,	// (0x00012b6f) input_focus_pane_cp8_vc

0x6ed5,	// (0x000165ee) list_form_wide_pane_vc_ParamLimits

0x6ed5,	// (0x000165ee) list_form_wide_pane_vc

0x6ee1,	// (0x000165fa) list_form_graphic_pane_vc_g1

0x6ee9,	// (0x00016602) list_form_graphic_pane_vc_t1_ParamLimits

0x6ee9,	// (0x00016602) list_form_graphic_pane_vc_t1

0x2652,	// (0x00011d6b) list_highlight_pane_cp5_vc_ParamLimits

0x2652,	// (0x00011d6b) list_highlight_pane_cp5_vc

0x6f05,	// (0x0001661e) list_form_graphic_pane_vc_ParamLimits

0x6f05,	// (0x0001661e) list_form_graphic_pane_vc

0x4d17,	// (0x00014430) form_field_popup_pane_vc_g1

0x6f1b,	// (0x00016634) form_field_popup_pane_vc_t1_ParamLimits

0x6f1b,	// (0x00016634) form_field_popup_pane_vc_t1

0x3456,	// (0x00012b6f) input_focus_pane_cp7_vc_ParamLimits

0x3456,	// (0x00012b6f) input_focus_pane_cp7_vc

0x6f32,	// (0x0001664b) list_form_pane_vc_ParamLimits

0x6f32,	// (0x0001664b) list_form_pane_vc

0x6f3e,	// (0x00016657) data_form_pane_vc_t1_ParamLimits

0x6f3e,	// (0x00016657) data_form_pane_vc_t1

0x357f,	// (0x00012c98) input_focus_pane_vc_g1

0x3587,	// (0x00012ca0) input_focus_pane_vc_g2

0x358f,	// (0x00012ca8) input_focus_pane_vc_g3

0x3597,	// (0x00012cb0) input_focus_pane_vc_g4

0x359f,	// (0x00012cb8) input_focus_pane_vc_g5

0x35a7,	// (0x00012cc0) input_focus_pane_vc_g6

0x35af,	// (0x00012cc8) input_focus_pane_vc_g7

0x35b7,	// (0x00012cd0) input_focus_pane_vc_g8

0x35bf,	// (0x00012cd8) input_focus_pane_vc_g9

0x2568,	// (0x00011c81) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001eda0) input_focus_pane_vc_g

0x4d0b,	// (0x00014424) data_form_pane_vc_ParamLimits

0x4d0b,	// (0x00014424) data_form_pane_vc

0x4d17,	// (0x00014430) form_field_data_pane_vc_g1

0x6f59,	// (0x00016672) form_field_data_pane_vc_t1_ParamLimits

0x6f59,	// (0x00016672) form_field_data_pane_vc_t1

0x3456,	// (0x00012b6f) input_focus_pane_vc_ParamLimits

0x3456,	// (0x00012b6f) input_focus_pane_vc

0x6f73,	// (0x0001668c) button_value_adjust_pane_cp3_vc

0x6f7b,	// (0x00016694) button_value_adjust_pane_cp5_vc

0x6f83,	// (0x0001669c) form_field_data_pane_vc_ParamLimits

0x6f83,	// (0x0001669c) form_field_data_pane_vc

0x6f9a,	// (0x000166b3) form_field_data_pane_vc_cp2

0x6fa2,	// (0x000166bb) form_field_data_wide_pane_vc_ParamLimits

0x6fa2,	// (0x000166bb) form_field_data_wide_pane_vc

0x6fb8,	// (0x000166d1) form_field_data_wide_pane_vc_cp2

0x6fc0,	// (0x000166d9) form_field_popup_pane_vc_ParamLimits

0x6fc0,	// (0x000166d9) form_field_popup_pane_vc

0x6fd7,	// (0x000166f0) form_field_popup_wide_pane_vc_ParamLimits

0x6fd7,	// (0x000166f0) form_field_popup_wide_pane_vc

0x6fed,	// (0x00016706) form_field_slider_pane_vc_ParamLimits

0x6fed,	// (0x00016706) form_field_slider_pane_vc

0x7000,	// (0x00016719) form_field_slider_wide_pane_vc_ParamLimits

0x7000,	// (0x00016719) form_field_slider_wide_pane_vc

0xdd5f,	// (0x0001d478) grid_touch_1_pane_ParamLimits

0xdd5f,	// (0x0001d478) grid_touch_1_pane

0xdd73,	// (0x0001d48c) grid_touch_2_pane_ParamLimits

0xdd73,	// (0x0001d48c) grid_touch_2_pane

0x70ce,	// (0x000167e7) touch_pane_g1_ParamLimits

0x70ce,	// (0x000167e7) touch_pane_g1

0x7037,	// (0x00016750) cell_app_pane_cp_wide_ParamLimits

0x7037,	// (0x00016750) cell_app_pane_cp_wide

0x7048,	// (0x00016761) grid_popup_fast_wide_pane_ParamLimits

0x7048,	// (0x00016761) grid_popup_fast_wide_pane

0x705c,	// (0x00016775) scroll_pane_cp19_ParamLimits

0x705c,	// (0x00016775) scroll_pane_cp19

0x2572,	// (0x00011c8b) bg_popup_window_pane_cp20

0x7070,	// (0x00016789) listscroll_popup_fast_wide_pane

0x3793,	// (0x00012eac) grid_indicator_nsta_pane

0x7078,	// (0x00016791) clock_nsta_pane_g1

0x7081,	// (0x0001679a) clock_nsta_pane_t1

0xdd9d,	// (0x0001d4b6) cell_indicator_nsta_pane_ParamLimits

0xdd9d,	// (0x0001d4b6) cell_indicator_nsta_pane

0x70ce,	// (0x000167e7) cell_indicator_nsta_pane_g1

0xddb4,	// (0x0001d4cd) cell_indicator_nsta_pane_g2

0x0001,

0xfa97,	// (0x0001f1b0) cell_indicator_nsta_pane_g

0x70e9,	// (0x00016802) clock_nsta_pane_cp

0x70f1,	// (0x0001680a) indicator_nsta_pane_cp

0x70f9,	// (0x00016812) nsta_clock_indic_pane_g1

0x2735,	// (0x00011e4e) grid_indicator_pane

0x3b5f,	// (0x00013278) scroll_pane_cp29

0x0715,	// (0x0000fe2e) indicator_nsta_pane_cp2_ParamLimits

0x0715,	// (0x0000fe2e) indicator_nsta_pane_cp2

0x2652,	// (0x00011d6b) main_apps_wheel_pane

0x4f6a,	// (0x00014683) form_midp_field_text_pane_ParamLimits

0x50b5,	// (0x000147ce) scroll_bar_cp050_ParamLimits

0x715a,	// (0x00016873) cell_indicator_pane_ParamLimits

0x715a,	// (0x00016873) cell_indicator_pane

0x7171,	// (0x0001688a) cell_indicator_pane_g1

0xddc1,	// (0x0001d4da) grid_wheel_folder_pane_ParamLimits

0xddc1,	// (0x0001d4da) grid_wheel_folder_pane

0xddcf,	// (0x0001d4e8) list_wheel_apps_pane_ParamLimits

0xddcf,	// (0x0001d4e8) list_wheel_apps_pane

0xdddd,	// (0x0001d4f6) main_apps_wheel_pane_g1_ParamLimits

0xdddd,	// (0x0001d4f6) main_apps_wheel_pane_g1

0xdde9,	// (0x0001d502) main_apps_wheel_pane_g2_ParamLimits

0xdde9,	// (0x0001d502) main_apps_wheel_pane_g2

0x0001,

0xfab3,	// (0x0001f1cc) main_apps_wheel_pane_g_ParamLimits

0xfab3,	// (0x0001f1cc) main_apps_wheel_pane_g

0xddf7,	// (0x0001d510) main_apps_wheel_pane_t1_ParamLimits

0xddf7,	// (0x0001d510) main_apps_wheel_pane_t1

0xde0b,	// (0x0001d524) list_wheel_apps_pane_g1

0xde13,	// (0x0001d52c) list_wheel_apps_pane_g2

0xde1b,	// (0x0001d534) list_wheel_apps_pane_g3

0xde23,	// (0x0001d53c) list_wheel_apps_pane_g4

0xde2d,	// (0x0001d546) list_wheel_apps_pane_g5

0x0004,

0xfab8,	// (0x0001f1d1) list_wheel_apps_pane_g

0x4171,	// (0x0001388a) navi_icon_text_pane

0xd3be,	// (0x0001cad7) aid_fill_nsta

0x7236,	// (0x0001694f) navi_icon_text_pane_g1

0x7242,	// (0x0001695b) navi_icon_text_pane_t1

0xd1fa,	// (0x0001c913) list_set_graphic_pane_t1_ParamLimits

0xd1fa,	// (0x0001c913) list_set_graphic_pane_t1

0x5804,	// (0x00014f1d) popup_midp_note_alarm_window_t6_ParamLimits

0x5804,	// (0x00014f1d) popup_midp_note_alarm_window_t6

0x5816,	// (0x00014f2f) popup_midp_note_alarm_window_t7_ParamLimits

0x5816,	// (0x00014f2f) popup_midp_note_alarm_window_t7

0x5828,	// (0x00014f41) popup_midp_note_alarm_window_t8_ParamLimits

0x5828,	// (0x00014f41) popup_midp_note_alarm_window_t8

0x583a,	// (0x00014f53) popup_midp_note_alarm_window_t9_ParamLimits

0x583a,	// (0x00014f53) popup_midp_note_alarm_window_t9

0x584c,	// (0x00014f65) popup_midp_note_alarm_window_t10_ParamLimits

0x584c,	// (0x00014f65) popup_midp_note_alarm_window_t10

0x585e,	// (0x00014f77) popup_midp_note_alarm_window_t11_ParamLimits

0x585e,	// (0x00014f77) popup_midp_note_alarm_window_t11

0x5870,	// (0x00014f89) scroll_pane_cp17_ParamLimits

0x5870,	// (0x00014f89) scroll_pane_cp17

0x11ba,	// (0x000108d3) volume_small_pane_cp_g1

0x14af,	// (0x00010bc8) volume_small_pane_cp_g2

0x14b8,	// (0x00010bd1) volume_small_pane_cp_g3

0x14c1,	// (0x00010bda) volume_small_pane_cp_g4

0x14ca,	// (0x00010be3) volume_small_pane_cp_g5

0x14d3,	// (0x00010bec) volume_small_pane_cp_g6

0x14dc,	// (0x00010bf5) volume_small_pane_cp_g7

0x14e5,	// (0x00010bfe) volume_small_pane_cp_g8

0x14ee,	// (0x00010c07) volume_small_pane_cp_g9

0x14f7,	// (0x00010c10) volume_small_pane_cp_g10

0x43c2,	// (0x00013adb) midp_ticker_pane_g1_ParamLimits

0x43ce,	// (0x00013ae7) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001ee6c) midp_ticker_pane_g_ParamLimits

0x43da,	// (0x00013af3) midp_ticker_pane_t1_ParamLimits

0xd3e2,	// (0x0001cafb) aid_fill_nsta_2

0x50a1,	// (0x000147ba) list_form2_midp_pane

0x6231,	// (0x0001594a) midp_editing_number_pane_ParamLimits

0x6240,	// (0x00015959) midp_ticker_pane_ParamLimits

0x7254,	// (0x0001696d) form2_midp_field_pane

0x7278,	// (0x00016991) scroll_pane_cp51

0x7298,	// (0x000169b1) form2_midp_button_pane_ParamLimits

0x7298,	// (0x000169b1) form2_midp_button_pane

0x72aa,	// (0x000169c3) form2_midp_content_pane_ParamLimits

0x72aa,	// (0x000169c3) form2_midp_content_pane

0x72c4,	// (0x000169dd) form2_midp_field_choice_group_pane

0x72cc,	// (0x000169e5) form2_midp_field_pane_g1

0x72d4,	// (0x000169ed) form2_midp_field_pane_g2

0x72dc,	// (0x000169f5) form2_midp_field_pane_g3

0x72e4,	// (0x000169fd) form2_midp_field_pane_g4

0x0003,

0xfadd,	// (0x0001f1f6) form2_midp_field_pane_g

0x72ec,	// (0x00016a05) form2_midp_gauge_slider_pane

0x72f4,	// (0x00016a0d) form2_midp_gauge_wait_pane

0x72fc,	// (0x00016a15) form2_midp_image_pane_ParamLimits

0x72fc,	// (0x00016a15) form2_midp_image_pane

0x7317,	// (0x00016a30) form2_midp_label_pane_ParamLimits

0x7317,	// (0x00016a30) form2_midp_label_pane

0xde60,	// (0x0001d579) form2_midp_label_pane_cp_ParamLimits

0xde60,	// (0x0001d579) form2_midp_label_pane_cp

0x7351,	// (0x00016a6a) form2_midp_string_pane_ParamLimits

0x7351,	// (0x00016a6a) form2_midp_string_pane

0xde7f,	// (0x0001d598) form2_midp_text_pane_ParamLimits

0xde7f,	// (0x0001d598) form2_midp_text_pane

0x7380,	// (0x00016a99) form2_midp_time_pane

0x7390,	// (0x00016aa9) input_focus_pane_cp51_ParamLimits

0x7390,	// (0x00016aa9) input_focus_pane_cp51

0x73a8,	// (0x00016ac1) form2_midp_label_pane_t1_ParamLimits

0x73a8,	// (0x00016ac1) form2_midp_label_pane_t1

0xde98,	// (0x0001d5b1) form2_mdip_text_pane_t1_ParamLimits

0xde98,	// (0x0001d5b1) form2_mdip_text_pane_t1

0x7408,	// (0x00016b21) form2_midp_time_pane_t1

0x7423,	// (0x00016b3c) form2_midp_gauge_slider_pane_t1

0xdeb3,	// (0x0001d5cc) form2_midp_gauge_slider_pane_t2

0xdec5,	// (0x0001d5de) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae6,	// (0x0001f1ff) form2_midp_gauge_slider_pane_t

0x7459,	// (0x00016b72) form2_midp_slider_pane

0x7465,	// (0x00016b7e) form2_midp_gauge_wait_pane_t1

0x7473,	// (0x00016b8c) form2_midp_wait_pane_ParamLimits

0x7473,	// (0x00016b8c) form2_midp_wait_pane

0xded7,	// (0x0001d5f0) list_single_2graphic_pane_cp4_ParamLimits

0xded7,	// (0x0001d5f0) list_single_2graphic_pane_cp4

0xd7fe,	// (0x0001cf17) list_single_midp_graphic_pane_cp_ParamLimits

0xd7fe,	// (0x0001cf17) list_single_midp_graphic_pane_cp

0x2572,	// (0x00011c8b) list_highlight_pane_cp20

0x74cd,	// (0x00016be6) list_single_2graphic_pane_g1_cp4

0x74d5,	// (0x00016bee) list_single_2graphic_pane_g2_cp4

0x74dd,	// (0x00016bf6) list_single_2graphic_pane_t1_cp4

0x2652,	// (0x00011d6b) list_highlight_pane_cp21

0x74ec,	// (0x00016c05) list_single_midp_graphic_pane_g4_cp

0x74fb,	// (0x00016c14) list_single_midp_graphic_pane_t1_cp

0xdeeb,	// (0x0001d604) form2_mdip_string_pane_t1_ParamLimits

0xdeeb,	// (0x0001d604) form2_mdip_string_pane_t1

0x2572,	// (0x00011c8b) bg_wml_button_pane_cp2

0x2568,	// (0x00011c81) form2_midp_image_pane_g1

0x3114,	// (0x0001282d) list_double_large_graphic_pane_g5_ParamLimits

0x3114,	// (0x0001282d) list_double_large_graphic_pane_g5

0x4637,	// (0x00013d50) midp_form_pane_ParamLimits

0x2652,	// (0x00011d6b) main_apps_wheel_pane_ParamLimits

0xbd9b,	// (0x0001b4b4) popup_preview_window_ParamLimits

0xbd9b,	// (0x0001b4b4) popup_preview_window

0x0fb5,	// (0x000106ce) popup_touch_info_window_ParamLimits

0x0fb5,	// (0x000106ce) popup_touch_info_window

0x0fd3,	// (0x000106ec) popup_touch_menu_window_ParamLimits

0x0fd3,	// (0x000106ec) popup_touch_menu_window

0x255e,	// (0x00011c77) bg_popup_sub_pane_cp6

0x7609,	// (0x00016d22) list_touch_menu_pane

0x7611,	// (0x00016d2a) list_single_touch_menu_pane_ParamLimits

0x7611,	// (0x00016d2a) list_single_touch_menu_pane

0x7627,	// (0x00016d40) list_single_touch_menu_pane_t1

0x2652,	// (0x00011d6b) bg_popup_sub_pane_cp7_ParamLimits

0x2652,	// (0x00011d6b) bg_popup_sub_pane_cp7

0x7635,	// (0x00016d4e) heading_sub_pane

0x763d,	// (0x00016d56) list_touch_info_pane_ParamLimits

0x763d,	// (0x00016d56) list_touch_info_pane

0x764c,	// (0x00016d65) list_single_touch_info_pane_ParamLimits

0x764c,	// (0x00016d65) list_single_touch_info_pane

0x765e,	// (0x00016d77) list_single_touch_info_pane_t1

0x766c,	// (0x00016d85) list_single_touch_info_pane_t2

0x0001,

0xfaf4,	// (0x0001f20d) list_single_touch_info_pane_t

0x42f1,	// (0x00013a0a) bg_popup_heading_pane_cp

0x767a,	// (0x00016d93) heading_sub_pane_t1

0x4ca5,	// (0x000143be) bg_popup_preview_window_pane_cp_ParamLimits

0x4ca5,	// (0x000143be) bg_popup_preview_window_pane_cp

0x7635,	// (0x00016d4e) heading_preview_pane

0x763d,	// (0x00016d56) list_preview_pane_ParamLimits

0x763d,	// (0x00016d56) list_preview_pane

0x7688,	// (0x00016da1) popup_preview_window_g1

0x764c,	// (0x00016d65) list_single_preview_pane_ParamLimits

0x764c,	// (0x00016d65) list_single_preview_pane

0x7690,	// (0x00016da9) list_single_preview_pane_g1

0x7698,	// (0x00016db1) list_single_preview_pane_t1

0x765e,	// (0x00016d77) list_single_preview_pane_t2

0x0001,

0xfaf9,	// (0x0001f212) list_single_preview_pane_t

0x76a6,	// (0x00016dbf) bg_popup_heading_pane_cp2_ParamLimits

0x76a6,	// (0x00016dbf) bg_popup_heading_pane_cp2

0x76bc,	// (0x00016dd5) heading_preview_pane_g1

0x76c4,	// (0x00016ddd) heading_preview_pane_t1_ParamLimits

0x76c4,	// (0x00016ddd) heading_preview_pane_t1

0x2758,	// (0x00011e71) soft_indicator_pane_t1_ParamLimits

0x2e4e,	// (0x00012567) scroll_pane_ParamLimits

0x3a58,	// (0x00013171) scroll_sc2_left_pane

0x3a61,	// (0x0001317a) scroll_sc2_right_pane

0x3a80,	// (0x00013199) scroll_bg_pane_g1_ParamLimits

0x3a95,	// (0x000131ae) scroll_bg_pane_g2_ParamLimits

0x3aad,	// (0x000131c6) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001edf7) scroll_bg_pane_g_ParamLimits

0x3a80,	// (0x00013199) scroll_handle_pane_g1_ParamLimits

0x3acf,	// (0x000131e8) scroll_handle_pane_g2_ParamLimits

0x3aad,	// (0x000131c6) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001edfe) scroll_handle_pane_g_ParamLimits

0x0a7b,	// (0x00010194) popup_choice_list_window_ParamLimits

0x0a7b,	// (0x00010194) popup_choice_list_window

0x4a93,	// (0x000141ac) choice_list_pane

0x4b43,	// (0x0001425c) cell_toolbar_pane_t1

0x4b6b,	// (0x00014284) toolbar_button_pane_ParamLimits

0x5d36,	// (0x0001544f) ai_gene_pane_1_t2_ParamLimits

0x5d36,	// (0x0001544f) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x0001f021) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x0001f021) ai_gene_pane_1_t

0x76e1,	// (0x00016dfa) scroll_sc2_left_pane_g1

0x76e1,	// (0x00016dfa) scroll_sc2_right_pane_g1

0x4637,	// (0x00013d50) bg_popup_sub_pane_cp10

0x76eb,	// (0x00016e04) list_choice_list_pane

0x7704,	// (0x00016e1d) list_single_choice_list_pane_ParamLimits

0x7704,	// (0x00016e1d) list_single_choice_list_pane

0x7717,	// (0x00016e30) list_single_choice_list_pane_g1

0x3764,	// (0x00012e7d) list_single_choice_list_pane_t1_ParamLimits

0x3764,	// (0x00012e7d) list_single_choice_list_pane_t1

0x771f,	// (0x00016e38) choice_list_pane_g1

0x7727,	// (0x00016e40) choice_list_pane_t1

0x255e,	// (0x00011c77) input_focus_pane_cp11

0x393b,	// (0x00013054) title_pane_stacon_g2_ParamLimits

0x393b,	// (0x00013054) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001eddd) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001eddd) title_pane_stacon_g

0x42f1,	// (0x00013a0a) cursor_press_pane

0xba48,	// (0x0001b161) popup_fep_hwr_window_ParamLimits

0xba48,	// (0x0001b161) popup_fep_hwr_window

0x0ba1,	// (0x000102ba) popup_fep_vkb_window_ParamLimits

0x0ba1,	// (0x000102ba) popup_fep_vkb_window

0x7735,	// (0x00016e4e) cursor_press_pane_g1

0x0002,

0xfb22,	// (0x0001f23b) fep_vkb_side_pane_g_ParamLimits

0x1539,	// (0x00010c52) fep_hwr_candidate_pane_ParamLimits

0x1539,	// (0x00010c52) fep_hwr_candidate_pane

0x1563,	// (0x00010c7c) fep_hwr_side_pane_ParamLimits

0x1563,	// (0x00010c7c) fep_hwr_side_pane

0x1583,	// (0x00010c9c) fep_hwr_top_pane_ParamLimits

0x1583,	// (0x00010c9c) fep_hwr_top_pane

0x159b,	// (0x00010cb4) fep_hwr_write_pane_ParamLimits

0x159b,	// (0x00010cb4) fep_hwr_write_pane

0xfb22,	// (0x0001f23b) fep_vkb_side_pane_g

0x773d,	// (0x00016e56) fep_hwr_top_pane_g1

0x774f,	// (0x00016e68) fep_hwr_top_pane_g2

0x15d5,	// (0x00010cee) fep_hwr_top_pane_g3

0x0002,

0xfafe,	// (0x0001f217) fep_hwr_top_pane_g

0x15ea,	// (0x00010d03) fep_hwr_top_text_pane

0x3c4f,	// (0x00013368) fep_hwr_top_text_pane_g1

0x7785,	// (0x00016e9e) fep_hwr_top_text_pane_t1

0x16e0,	// (0x00010df9) fep_hwr_candidate_pane_g1

0x79d8,	// (0x000170f1) fep_vkb_keypad_pane_g3_ParamLimits

0x79d8,	// (0x000170f1) fep_vkb_keypad_pane_g3

0x7a00,	// (0x00017119) fep_vkb_keypad_pane_g4_ParamLimits

0x7a00,	// (0x00017119) fep_vkb_keypad_pane_g4

0x7a6f,	// (0x00017188) fep_vkb_bottom_pane_g2_ParamLimits

0x7a6f,	// (0x00017188) fep_vkb_bottom_pane_g2

0x0001,

0xfb29,	// (0x0001f242) fep_vkb_bottom_pane_g_ParamLimits

0xfb29,	// (0x0001f242) fep_vkb_bottom_pane_g

0x76e1,	// (0x00016dfa) cell_vkb_side_pane_g2

0x0001,

0xfb33,	// (0x0001f24c) cell_vkb_side_pane_g

0x7afa,	// (0x00017213) cell_vkb_side_pane_t1

0x7b08,	// (0x00017221) cell_vkb_side_pane_t1_copy1

0x76e1,	// (0x00016dfa) bg_fep_vkb_candidate_pane_g2

0x7c34,	// (0x0001734d) cell_vkb_candidate_pane_ParamLimits

0x7793,	// (0x00016eac) aid_size_cell_vkb_ParamLimits

0x7793,	// (0x00016eac) aid_size_cell_vkb

0x7c34,	// (0x0001734d) cell_vkb_candidate_pane

0x1707,	// (0x00010e20) bg_popup_fep_shadow_pane_g1

0xdf6f,	// (0x0001d688) fep_vkb_bottom_pane_ParamLimits

0xdf6f,	// (0x0001d688) fep_vkb_bottom_pane

0x7857,	// (0x00016f70) fep_vkb_candidate_pane_ParamLimits

0x7857,	// (0x00016f70) fep_vkb_candidate_pane

0xdf94,	// (0x0001d6ad) fep_vkb_keypad_pane_ParamLimits

0xdf94,	// (0x0001d6ad) fep_vkb_keypad_pane

0xdfd0,	// (0x0001d6e9) fep_vkb_side_pane_ParamLimits

0xdfd0,	// (0x0001d6e9) fep_vkb_side_pane

0xe00c,	// (0x0001d725) fep_vkb_top_pane_ParamLimits

0xe00c,	// (0x0001d725) fep_vkb_top_pane

0x7931,	// (0x0001704a) fep_vkb_top_pane_g1_ParamLimits

0x7931,	// (0x0001704a) fep_vkb_top_pane_g1

0x7940,	// (0x00017059) fep_vkb_top_pane_g2_ParamLimits

0x7940,	// (0x00017059) fep_vkb_top_pane_g2

0x794f,	// (0x00017068) fep_vkb_top_pane_g3_ParamLimits

0x794f,	// (0x00017068) fep_vkb_top_pane_g3

0x0003,

0xfb19,	// (0x0001f232) fep_vkb_top_pane_g_ParamLimits

0xfb19,	// (0x0001f232) fep_vkb_top_pane_g

0x796d,	// (0x00017086) fep_vkb_top_text_pane_ParamLimits

0x796d,	// (0x00017086) fep_vkb_top_text_pane

0xe048,	// (0x0001d761) fep_vkb_side_pane_g1_ParamLimits

0xe048,	// (0x0001d761) fep_vkb_side_pane_g1

0x79c7,	// (0x000170e0) grid_vkb_side_pane_ParamLimits

0x79c7,	// (0x000170e0) grid_vkb_side_pane

0x170f,	// (0x00010e28) bg_popup_fep_shadow_pane_g2

0x1718,	// (0x00010e31) bg_popup_fep_shadow_pane_g3

0x1720,	// (0x00010e39) bg_popup_fep_shadow_pane_g4

0x1729,	// (0x00010e42) bg_popup_fep_shadow_pane_g5

0x1733,	// (0x00010e4c) bg_popup_fep_shadow_pane_g6

0x173b,	// (0x00010e54) bg_popup_fep_shadow_pane_g7

0x3597,	// (0x00012cb0) bg_popup_fep_shadow_pane_g8

0x7a1e,	// (0x00017137) grid_vkb_keypad_number_pane_ParamLimits

0x7a1e,	// (0x00017137) grid_vkb_keypad_number_pane

0x7a2e,	// (0x00017147) grid_vkb_keypad_pane_ParamLimits

0x7a2e,	// (0x00017147) grid_vkb_keypad_pane

0x7a54,	// (0x0001716d) fep_vkb_bottom_pane_g1_ParamLimits

0x7a54,	// (0x0001716d) fep_vkb_bottom_pane_g1

0x7a7d,	// (0x00017196) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7a7d,	// (0x00017196) grid_vkb_keypad_bottom_left_pane

0x7a92,	// (0x000171ab) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a92,	// (0x000171ab) grid_vkb_keypad_bottom_right_pane

0x7aa7,	// (0x000171c0) fep_vkb_top_text_pane_g1

0xe08f,	// (0x0001d7a8) fep_vkb_top_text_pane_t1

0xe0a1,	// (0x0001d7ba) cell_vkb_side_pane_ParamLimits

0xe0a1,	// (0x0001d7ba) cell_vkb_side_pane

0x76e1,	// (0x00016dfa) cell_vkb_side_pane_g1

0x7b16,	// (0x0001722f) cell_vkb_keypad_pane_ParamLimits

0x7b16,	// (0x0001722f) cell_vkb_keypad_pane

0x7b8b,	// (0x000172a4) cell_vkb_keypad_pane_g1

0x0008,

0xfb46,	// (0x0001f25f) bg_popup_fep_shadow_pane_g

0x174d,	// (0x00010e66) cell_hwr_side_pane_g1

0x174d,	// (0x00010e66) cell_hwr_side_pane_g2

0x7b95,	// (0x000172ae) cell_vkb_keypad_pane_t1

0xe0b7,	// (0x0001d7d0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe0b7,	// (0x0001d7d0) cell_vkb_keypad_bottom_left_pane

0xe0cc,	// (0x0001d7e5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe0cc,	// (0x0001d7e5) cell_vkb_keypad_bottom_right_pane

0x76e1,	// (0x00016dfa) cell_vkb_keypad_bottom_left_pane_g1

0x76e1,	// (0x00016dfa) cell_vkb_keypad_bottom_right_pane_g1

0x7bf9,	// (0x00017312) cell_vkb_keypad_number_pane_ParamLimits

0x7bf9,	// (0x00017312) cell_vkb_keypad_number_pane

0x7c18,	// (0x00017331) cell_vkb_keypad_number_pane_g1

0x7c22,	// (0x0001733b) cell_vkb_keypad_number_pane_g2

0x7c2b,	// (0x00017344) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb38,	// (0x0001f251) cell_vkb_keypad_number_pane_g

0x7b95,	// (0x000172ae) cell_vkb_keypad_number_pane_t1

0x7c4f,	// (0x00017368) fep_vkb_candidate_pane_g1

0x0001,

0xfb59,	// (0x0001f272) cell_hwr_side_pane_g

0x7c68,	// (0x00017381) cell_hwr_side_pane_t1

0x1757,	// (0x00010e70) cell_hwr_side_pane_t1_copy1

0x1765,	// (0x00010e7e) cell_hwr_candidate_pane_g1

0x1794,	// (0x00010ead) cell_hwr_candidate_pane_t1

0x76e1,	// (0x00016dfa) cell_vkb_candidate_pane_g2

0x7cac,	// (0x000173c5) cell_vkb_candidate_pane_t1

0x1500,	// (0x00010c19) bg_popup_fep_shadow_pane_ParamLimits

0x1500,	// (0x00010c19) bg_popup_fep_shadow_pane

0x15b5,	// (0x00010cce) bg_fep_hwr_top_pane_g4

0x7761,	// (0x00016e7a) bg_hwr_side_pane_g1_ParamLimits

0x7761,	// (0x00016e7a) bg_hwr_side_pane_g1

0xc0d5,	// (0x0001b7ee) cell_hwr_side_pane_ParamLimits

0xc0d5,	// (0x0001b7ee) cell_hwr_side_pane

0x1661,	// (0x00010d7a) fep_hwr_write_pane_g1_ParamLimits

0x1661,	// (0x00010d7a) fep_hwr_write_pane_g1

0x166e,	// (0x00010d87) fep_hwr_write_pane_g2_ParamLimits

0x166e,	// (0x00010d87) fep_hwr_write_pane_g2

0x167b,	// (0x00010d94) fep_hwr_write_pane_g3_ParamLimits

0x167b,	// (0x00010d94) fep_hwr_write_pane_g3

0xc0f5,	// (0x0001b80e) fep_hwr_write_pane_g4_ParamLimits

0xc0f5,	// (0x0001b80e) fep_hwr_write_pane_g4

0x0005,

0xfb05,	// (0x0001f21e) fep_hwr_write_pane_g_ParamLimits

0xfb05,	// (0x0001f21e) fep_hwr_write_pane_g

0x15b5,	// (0x00010cce) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x15b5,	// (0x00010cce) bg_fep_hwr_candidate_pane_g2

0x169e,	// (0x00010db7) cell_hwr_candidate_pane_ParamLimits

0x169e,	// (0x00010db7) cell_hwr_candidate_pane

0x16e0,	// (0x00010df9) fep_hwr_candidate_pane_g1_ParamLimits

0x77c1,	// (0x00016eda) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x77c1,	// (0x00016eda) bg_popup_fep_shadow_pane_cp2

0x795f,	// (0x00017078) fep_vkb_top_pane_g4_ParamLimits

0x795f,	// (0x00017078) fep_vkb_top_pane_g4

0x79a5,	// (0x000170be) fep_vkb_side_pane_g2_ParamLimits

0x79a5,	// (0x000170be) fep_vkb_side_pane_g2

0xcd65,	// (0x0001c47e) list_setting_pane_t4_ParamLimits

0xcd65,	// (0x0001c47e) list_setting_pane_t4

0xcddf,	// (0x0001c4f8) list_setting_number_pane_t5_ParamLimits

0xcddf,	// (0x0001c4f8) list_setting_number_pane_t5

0x3c86,	// (0x0001339f) list_double_heading_pane_cp2_ParamLimits

0x3c86,	// (0x0001339f) list_double_heading_pane_cp2

0x309f,	// (0x000127b8) list_double_heading_pane_g1_cp2_ParamLimits

0x309f,	// (0x000127b8) list_double_heading_pane_g1_cp2

0x347c,	// (0x00012b95) list_double_heading_pane_g2_cp2_ParamLimits

0x347c,	// (0x00012b95) list_double_heading_pane_g2_cp2

0x7cba,	// (0x000173d3) list_double_heading_pane_t1_cp2_ParamLimits

0x7cba,	// (0x000173d3) list_double_heading_pane_t1_cp2

0x7cd0,	// (0x000173e9) list_double_heading_pane_t2_cp2_ParamLimits

0x7cd0,	// (0x000173e9) list_double_heading_pane_t2_cp2

0x2546,	// (0x00011c5f) aid_value_unit2

0x02a5,	// (0x0000f9be) popup_preview_fixed_window

0x28f5,	// (0x0001200e) bg_popup_preview_window_pane_cp02

0x7ce2,	// (0x000173fb) list_preview_fixed_pane

0x7d28,	// (0x00017441) list_empty_pane_fp_ParamLimits

0x7d28,	// (0x00017441) list_empty_pane_fp

0x7d28,	// (0x00017441) list_single_cale_day_pane_fp_ParamLimits

0x7d28,	// (0x00017441) list_single_cale_day_pane_fp

0x7d28,	// (0x00017441) list_single_graphic_heading_pane_fp_ParamLimits

0x7d28,	// (0x00017441) list_single_graphic_heading_pane_fp

0x7d28,	// (0x00017441) list_single_graphic_pane_fp_ParamLimits

0x7d28,	// (0x00017441) list_single_graphic_pane_fp

0x7d28,	// (0x00017441) list_single_heading_pane_fp_ParamLimits

0x7d28,	// (0x00017441) list_single_heading_pane_fp

0x7d28,	// (0x00017441) list_single_pane_fp_ParamLimits

0x7d28,	// (0x00017441) list_single_pane_fp

0x7d3d,	// (0x00017456) list_single_pane_fp_g1_ParamLimits

0x7d3d,	// (0x00017456) list_single_pane_fp_g1

0x309f,	// (0x000127b8) list_single_pane_fp_g2_ParamLimits

0x309f,	// (0x000127b8) list_single_pane_fp_g2

0x347c,	// (0x00012b95) list_single_pane_fp_g3_ParamLimits

0x347c,	// (0x00012b95) list_single_pane_fp_g3

0x7d49,	// (0x00017462) list_single_pane_fp_g4_ParamLimits

0x7d49,	// (0x00017462) list_single_pane_fp_g4

0x0003,

0xfb6c,	// (0x0001f285) list_single_pane_fp_g_ParamLimits

0xfb6c,	// (0x0001f285) list_single_pane_fp_g

0x7d55,	// (0x0001746e) list_single_pane_fp_t1_ParamLimits

0x7d55,	// (0x0001746e) list_single_pane_fp_t1

0x7d6c,	// (0x00017485) list_single_graphic_pane_fp_g1_ParamLimits

0x7d6c,	// (0x00017485) list_single_graphic_pane_fp_g1

0x7d3d,	// (0x00017456) list_single_graphic_pane_fp_g2_ParamLimits

0x7d3d,	// (0x00017456) list_single_graphic_pane_fp_g2

0x309f,	// (0x000127b8) list_single_graphic_pane_fp_g3_ParamLimits

0x309f,	// (0x000127b8) list_single_graphic_pane_fp_g3

0x347c,	// (0x00012b95) list_single_graphic_pane_fp_g4_ParamLimits

0x347c,	// (0x00012b95) list_single_graphic_pane_fp_g4

0x7d49,	// (0x00017462) list_single_graphic_pane_fp_g5_ParamLimits

0x7d49,	// (0x00017462) list_single_graphic_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f28e) list_single_graphic_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f28e) list_single_graphic_pane_fp_g

0x7d78,	// (0x00017491) list_single_graphic_pane_fp_t1_ParamLimits

0x7d78,	// (0x00017491) list_single_graphic_pane_fp_t1

0x7d6c,	// (0x00017485) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7d6c,	// (0x00017485) list_single_graphic_heading_pane_fp_g1

0x7d3d,	// (0x00017456) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7d3d,	// (0x00017456) list_single_graphic_heading_pane_fp_g2

0x309f,	// (0x000127b8) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x309f,	// (0x000127b8) list_single_graphic_heading_pane_fp_g3

0x347c,	// (0x00012b95) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x347c,	// (0x00012b95) list_single_graphic_heading_pane_fp_g4

0x7d49,	// (0x00017462) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7d49,	// (0x00017462) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f28e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f28e) list_single_graphic_heading_pane_fp_g

0x7d8e,	// (0x000174a7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7d8e,	// (0x000174a7) list_single_graphic_heading_pane_fp_t1

0x7da4,	// (0x000174bd) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7da4,	// (0x000174bd) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb80,	// (0x0001f299) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb80,	// (0x0001f299) list_single_graphic_heading_pane_fp_t

0x7db6,	// (0x000174cf) list_single_cale_day_pane_fp_g1_ParamLimits

0x7db6,	// (0x000174cf) list_single_cale_day_pane_fp_g1

0x7dee,	// (0x00017507) list_single_cale_day_pane_fp_g2_ParamLimits

0x7dee,	// (0x00017507) list_single_cale_day_pane_fp_g2

0x7dfa,	// (0x00017513) list_single_cale_day_pane_fp_g3_ParamLimits

0x7dfa,	// (0x00017513) list_single_cale_day_pane_fp_g3

0x7e22,	// (0x0001753b) list_single_cale_day_pane_fp_g4_ParamLimits

0x7e22,	// (0x0001753b) list_single_cale_day_pane_fp_g4

0x7e46,	// (0x0001755f) list_single_cale_day_pane_fp_g5_ParamLimits

0x7e46,	// (0x0001755f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb85,	// (0x0001f29e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb85,	// (0x0001f29e) list_single_cale_day_pane_fp_g

0x7e6a,	// (0x00017583) list_single_cale_day_pane_fp_t1_ParamLimits

0x7e6a,	// (0x00017583) list_single_cale_day_pane_fp_t1

0x7e90,	// (0x000175a9) list_single_cale_day_pane_fp_t2_ParamLimits

0x7e90,	// (0x000175a9) list_single_cale_day_pane_fp_t2

0x7ea9,	// (0x000175c2) list_single_cale_day_pane_fp_t3_ParamLimits

0x7ea9,	// (0x000175c2) list_single_cale_day_pane_fp_t3

0x0002,

0xfb90,	// (0x0001f2a9) list_single_cale_day_pane_fp_t_ParamLimits

0xfb90,	// (0x0001f2a9) list_single_cale_day_pane_fp_t

0x7d3d,	// (0x00017456) list_empty_pane_fp_g1_ParamLimits

0x7d3d,	// (0x00017456) list_empty_pane_fp_g1

0x7ec2,	// (0x000175db) list_empty_pane_fp_t1

0x7ed0,	// (0x000175e9) list_empty_pane_fp_t2

0x0001,

0xfb97,	// (0x0001f2b0) list_empty_pane_fp_t

0x7d3d,	// (0x00017456) list_single_heading_pane_fp_g1_ParamLimits

0x7d3d,	// (0x00017456) list_single_heading_pane_fp_g1

0x309f,	// (0x000127b8) list_single_heading_pane_fp_g2_ParamLimits

0x309f,	// (0x000127b8) list_single_heading_pane_fp_g2

0x347c,	// (0x00012b95) list_single_heading_pane_fp_g3_ParamLimits

0x347c,	// (0x00012b95) list_single_heading_pane_fp_g3

0x0002,

0xfb9c,	// (0x0001f2b5) list_single_heading_pane_fp_g_ParamLimits

0xfb9c,	// (0x0001f2b5) list_single_heading_pane_fp_g

0x7ede,	// (0x000175f7) list_single_heading_pane_fp_t1_ParamLimits

0x7ede,	// (0x000175f7) list_single_heading_pane_fp_t1

0x7ef0,	// (0x00017609) list_single_heading_pane_fp_t2_ParamLimits

0x7ef0,	// (0x00017609) list_single_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x0001f2bc) list_single_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x0001f2bc) list_single_heading_pane_fp_t

0x37d2,	// (0x00012eeb) aid_size_cell_fast

0x2865,	// (0x00011f7e) soft_indicator_pane_cp1_t1

0x380f,	// (0x00012f28) cell_app_pane_cp2_ParamLimits

0x380f,	// (0x00012f28) cell_app_pane_cp2

0x1522,	// (0x00010c3b) fep_hwr_candidate_drop_down_list_pane

0x16fa,	// (0x00010e13) fep_hwr_candidate_pane_g3_ParamLimits

0x16fa,	// (0x00010e13) fep_hwr_candidate_pane_g3

0xed30,	// (0x0001e449) fep_hwr_candidate_pane_g4_ParamLimits

0xed30,	// (0x0001e449) fep_hwr_candidate_pane_g4

0x0002,

0xfb12,	// (0x0001f22b) fep_hwr_candidate_pane_g_ParamLimits

0xfb12,	// (0x0001f22b) fep_hwr_candidate_pane_g

0x7846,	// (0x00016f5f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7846,	// (0x00016f5f) fep_vkb_candidate_drop_down_list_pane

0x7c57,	// (0x00017370) fep_vkb_candidate_pane_g3

0x7c5f,	// (0x00017378) fep_vkb_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0001f258) fep_vkb_candidate_pane_g

0x1765,	// (0x00010e7e) cell_hwr_candidate_pane_g1_ParamLimits

0x1773,	// (0x00010e8c) cell_hwr_candidate_pane_g3_ParamLimits

0x1773,	// (0x00010e8c) cell_hwr_candidate_pane_g3

0x9810,	// (0x00018f29) cell_hwr_candidate_pane_g4_ParamLimits

0x9810,	// (0x00018f29) cell_hwr_candidate_pane_g4

0x0002,

0xfb5e,	// (0x0001f277) cell_hwr_candidate_pane_g_ParamLimits

0xfb5e,	// (0x0001f277) cell_hwr_candidate_pane_g

0x7c76,	// (0x0001738f) cell_vkb_candidate_pane_g3_ParamLimits

0x7c76,	// (0x0001738f) cell_vkb_candidate_pane_g3

0x7c91,	// (0x000173aa) cell_vkb_candidate_pane_g4_ParamLimits

0x7c91,	// (0x000173aa) cell_vkb_candidate_pane_g4

0x7f06,	// (0x0001761f) cell_app_pane_cp2_g1_ParamLimits

0x7f06,	// (0x0001761f) cell_app_pane_cp2_g1

0x7f24,	// (0x0001763d) cell_app_pane_cp2_g2_ParamLimits

0x7f24,	// (0x0001763d) cell_app_pane_cp2_g2

0x0001,

0xfba8,	// (0x0001f2c1) cell_app_pane_cp2_g_ParamLimits

0xfba8,	// (0x0001f2c1) cell_app_pane_cp2_g

0x7f30,	// (0x00017649) cell_app_pane_cp2_t1_ParamLimits

0x7f30,	// (0x00017649) cell_app_pane_cp2_t1

0x3456,	// (0x00012b6f) grid_highlight_pane_cp1_ParamLimits

0x3456,	// (0x00012b6f) grid_highlight_pane_cp1

0x17b2,	// (0x00010ecb) cell_hwr_candidate_pane_cp1_ParamLimits

0x17b2,	// (0x00010ecb) cell_hwr_candidate_pane_cp1

0x1765,	// (0x00010e7e) fep_hwr_candidate_drop_down_list_pane_g1

0x17d1,	// (0x00010eea) fep_hwr_candidate_drop_down_list_pane_g2

0x17de,	// (0x00010ef7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbad,	// (0x0001f2c6) fep_hwr_candidate_drop_down_list_pane_g

0x17eb,	// (0x00010f04) fep_hwr_candidate_drop_down_list_scroll_pane

0x17f4,	// (0x00010f0d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x17f4,	// (0x00010f0d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1801,	// (0x00010f1a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1801,	// (0x00010f1a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x180e,	// (0x00010f27) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x180e,	// (0x00010f27) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x181b,	// (0x00010f34) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x181b,	// (0x00010f34) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1836,	// (0x00010f4f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1836,	// (0x00010f4f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1851,	// (0x00010f6a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1851,	// (0x00010f6a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x186c,	// (0x00010f85) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x186c,	// (0x00010f85) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1887,	// (0x00010fa0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1887,	// (0x00010fa0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb4,	// (0x0001f2cd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb4,	// (0x0001f2cd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7f42,	// (0x0001765b) cell_vkb_candidate_pane_cp1_ParamLimits

0x7f42,	// (0x0001765b) cell_vkb_candidate_pane_cp1

0x795f,	// (0x00017078) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x795f,	// (0x00017078) fep_vkb_candidate_drop_down_list_pane_g1

0x7f62,	// (0x0001767b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7f62,	// (0x0001767b) fep_vkb_candidate_drop_down_list_pane_g2

0x7f6f,	// (0x00017688) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7f6f,	// (0x00017688) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc5,	// (0x0001f2de) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc5,	// (0x0001f2de) fep_vkb_candidate_drop_down_list_pane_g

0x7f7c,	// (0x00017695) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7f7c,	// (0x00017695) fep_vkb_candidate_drop_down_list_scroll_pane

0x7f89,	// (0x000176a2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f89,	// (0x000176a2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7f96,	// (0x000176af) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f96,	// (0x000176af) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7fa2,	// (0x000176bb) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7fa2,	// (0x000176bb) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7fae,	// (0x000176c7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7fae,	// (0x000176c7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7fcf,	// (0x000176e8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7fcf,	// (0x000176e8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7ff0,	// (0x00017709) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7ff0,	// (0x00017709) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8011,	// (0x0001772a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8011,	// (0x0001772a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8032,	// (0x0001774b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8032,	// (0x0001774b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcc,	// (0x0001f2e5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcc,	// (0x0001f2e5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc6ed,	// (0x0001be06) title_pane_g1_ParamLimits

0xc700,	// (0x0001be19) title_pane_g2_ParamLimits

0xf54e,	// (0x0001ec67) title_pane_g_ParamLimits

0x3c3f,	// (0x00013358) aid_call2_pane

0x3c47,	// (0x00013360) aid_call_pane

0x3c4f,	// (0x00013368) popup_clock_analogue_window_g1

0x3c4f,	// (0x00013368) popup_clock_analogue_window_g2

0x0616,	// (0x0000fd2f) popup_clock_analogue_window_g3

0x061f,	// (0x0000fd38) popup_clock_analogue_window_g4

0x2568,	// (0x00011c81) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001ee0c) popup_clock_analogue_window_g

0x0627,	// (0x0000fd40) popup_clock_analogue_window_t1

0x0635,	// (0x0000fd4e) clock_digital_number_pane_ParamLimits

0x0635,	// (0x0000fd4e) clock_digital_number_pane

0x0641,	// (0x0000fd5a) clock_digital_number_pane_cp02_ParamLimits

0x0641,	// (0x0000fd5a) clock_digital_number_pane_cp02

0x064d,	// (0x0000fd66) clock_digital_number_pane_cp03_ParamLimits

0x064d,	// (0x0000fd66) clock_digital_number_pane_cp03

0x0659,	// (0x0000fd72) clock_digital_number_pane_cp04_ParamLimits

0x0659,	// (0x0000fd72) clock_digital_number_pane_cp04

0x0665,	// (0x0000fd7e) clock_digital_separator_pane_ParamLimits

0x0665,	// (0x0000fd7e) clock_digital_separator_pane

0x0671,	// (0x0000fd8a) popup_clock_digital_window_t1_ParamLimits

0x0671,	// (0x0000fd8a) popup_clock_digital_window_t1

0x2568,	// (0x00011c81) clock_digital_number_pane_g1

0x2568,	// (0x00011c81) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001ee17) clock_digital_number_pane_g

0x2568,	// (0x00011c81) clock_digital_separator_pane_g1

0x2568,	// (0x00011c81) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001ee17) clock_digital_separator_pane_g

0xd3be,	// (0x0001cad7) aid_fill_nsta_ParamLimits

0xd4f4,	// (0x0001cc0d) indicator_nsta_pane_ParamLimits

0x4920,	// (0x00014039) popup_clock_analogue_window

0x4920,	// (0x00014039) popup_clock_digital_window

0x3793,	// (0x00012eac) grid_indicator_nsta_pane_ParamLimits

0x708f,	// (0x000167a8) clock_nsta_pane_t2

0x0001,

0xfa92,	// (0x0001f1ab) clock_nsta_pane_t

0x05da,	// (0x0000fcf3) aid_size_max_handle

0xb805,	// (0x0001af1e) aid_size_min_handle

0x42f1,	// (0x00013a0a) editor_scroll_pane

0x804d,	// (0x00017766) ex_editor_pane

0x3740,	// (0x00012e59) scroll_pane_cp13

0x2e7a,	// (0x00012593) scroll_pane_cp14

0x3c7e,	// (0x00013397) scroll_pane_cp36

0xd0c4,	// (0x0001c7dd) list_single_graphic_hl_pane_cp2_ParamLimits

0xd0c4,	// (0x0001c7dd) list_single_graphic_hl_pane_cp2

0xdbd1,	// (0x0001d2ea) list_single_graphic_hl_pane_ParamLimits

0xdbd1,	// (0x0001d2ea) list_single_graphic_hl_pane

0x8055,	// (0x0001776e) aid_size_min_hl_cp1

0x805e,	// (0x00017777) list_highlight_pane_cp34_ParamLimits

0x805e,	// (0x00017777) list_highlight_pane_cp34

0x806f,	// (0x00017788) list_single_graphic_hl_pane_g1_ParamLimits

0x806f,	// (0x00017788) list_single_graphic_hl_pane_g1

0xe0e7,	// (0x0001d800) list_single_graphic_hl_pane_g2_ParamLimits

0xe0e7,	// (0x0001d800) list_single_graphic_hl_pane_g2

0xe0e7,	// (0x0001d800) list_single_graphic_hl_pane_g3_ParamLimits

0xe0e7,	// (0x0001d800) list_single_graphic_hl_pane_g3

0x4262,	// (0x0001397b) list_single_graphic_hl_pane_g4_ParamLimits

0x4262,	// (0x0001397b) list_single_graphic_hl_pane_g4

0xe0f3,	// (0x0001d80c) list_single_graphic_hl_pane_g5_ParamLimits

0xe0f3,	// (0x0001d80c) list_single_graphic_hl_pane_g5

0x0004,

0xfbdd,	// (0x0001f2f6) list_single_graphic_hl_pane_g_ParamLimits

0xfbdd,	// (0x0001f2f6) list_single_graphic_hl_pane_g

0xe107,	// (0x0001d820) list_single_graphic_hl_pane_t1_ParamLimits

0xe107,	// (0x0001d820) list_single_graphic_hl_pane_t1

0x80b2,	// (0x000177cb) aid_size_min_hl_cp2

0x80bb,	// (0x000177d4) list_highlight_pane_cp34_cp2_ParamLimits

0x80bb,	// (0x000177d4) list_highlight_pane_cp34_cp2

0x806f,	// (0x00017788) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x806f,	// (0x00017788) list_single_graphic_hl_pane_g1_cp2

0x80c8,	// (0x000177e1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x80c8,	// (0x000177e1) list_single_graphic_hl_pane_g2_cp2

0x80d4,	// (0x000177ed) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x80d4,	// (0x000177ed) list_single_graphic_hl_pane_g3_cp2

0x686a,	// (0x00015f83) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x686a,	// (0x00015f83) list_single_graphic_hl_pane_g4_cp2

0x8088,	// (0x000177a1) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8088,	// (0x000177a1) list_single_graphic_hl_pane_g5_cp2

0xb860,	// (0x0001af79) control_pane_g4_ParamLimits

0xb860,	// (0x0001af79) control_pane_g4

0x4637,	// (0x00013d50) bg_popup_sub_pane_cp10_ParamLimits

0x76eb,	// (0x00016e04) list_choice_list_pane_ParamLimits

0x76fa,	// (0x00016e13) scroll_pane_cp23

0x28f5,	// (0x0001200e) bg_popup_preview_window_pane_cp02_ParamLimits

0x7ce2,	// (0x000173fb) list_preview_fixed_pane_ParamLimits

0x7cf8,	// (0x00017411) list_preview_fixed_pane_cp_ParamLimits

0x7cf8,	// (0x00017411) list_preview_fixed_pane_cp

0x7d04,	// (0x0001741d) popup_preview_fixed_window_g1_ParamLimits

0x7d04,	// (0x0001741d) popup_preview_fixed_window_g1

0x7d10,	// (0x00017429) popup_preview_fixed_window_g2_ParamLimits

0x7d10,	// (0x00017429) popup_preview_fixed_window_g2

0x0002,

0xfb65,	// (0x0001f27e) popup_preview_fixed_window_g_ParamLimits

0xfb65,	// (0x0001f27e) popup_preview_fixed_window_g

0x054e,	// (0x0000fc67) aid_navi_side_left_pane_ParamLimits

0x0563,	// (0x0000fc7c) aid_navi_side_right_pane_ParamLimits

0x057b,	// (0x0000fc94) navi_icon_pane_stacon_ParamLimits

0x058f,	// (0x0000fca8) navi_navi_pane_stacon_ParamLimits

0x057b,	// (0x0000fc94) navi_text_pane_stacon_ParamLimits

0x0166,	// (0x0000f87f) main_text_info_pane

0x80f8,	// (0x00017811) listscroll_text_info_pane

0x8100,	// (0x00017819) list_text_info_pane_ParamLimits

0x8100,	// (0x00017819) list_text_info_pane

0x810f,	// (0x00017828) scroll_pane_cp24_ParamLimits

0x810f,	// (0x00017828) scroll_pane_cp24

0xe11d,	// (0x0001d836) list_text_info_pane_t1_ParamLimits

0xe11d,	// (0x0001d836) list_text_info_pane_t1

0xb9bb,	// (0x0001b0d4) popup_fast_swap2_window_ParamLimits

0xb9bb,	// (0x0001b0d4) popup_fast_swap2_window

0x815e,	// (0x00017877) aid_size_cell_fast2

0x255e,	// (0x00011c77) bg_popup_window_pane_cp17

0x50cd,	// (0x000147e6) heading_pane_cp2

0x2b44,	// (0x0001225d) listscroll_fast2_pane

0x8168,	// (0x00017881) grid_fast2_pane

0x8172,	// (0x0001788b) listscroll_fast2_pane_g1

0x817a,	// (0x00017893) listscroll_fast2_pane_g2

0x0001,

0xfbe8,	// (0x0001f301) listscroll_fast2_pane_g

0x3740,	// (0x00012e59) scroll_pane_cp26

0x8184,	// (0x0001789d) cell_fast2_pane_ParamLimits

0x8184,	// (0x0001789d) cell_fast2_pane

0x8199,	// (0x000178b2) cell_fast2_pane_g1

0x81a2,	// (0x000178bb) cell_fast2_pane_g2

0x81ab,	// (0x000178c4) cell_fast2_pane_g3

0x0002,

0xfbed,	// (0x0001f306) cell_fast2_pane_g

0x2c37,	// (0x00012350) grid_highlight_pane_cp9

0x0a5f,	// (0x00010178) main_eswt_pane_ParamLimits

0x0a5f,	// (0x00010178) main_eswt_pane

0x8124,	// (0x0001783d) list_single_text_info_pane

0x81b3,	// (0x000178cc) eswt_ctrl_button_pane

0x81b3,	// (0x000178cc) eswt_ctrl_canvas_pane

0x81bb,	// (0x000178d4) eswt_ctrl_combo_pane

0x81b3,	// (0x000178cc) eswt_ctrl_default_pane

0x81b3,	// (0x000178cc) eswt_ctrl_label_pane

0x81c3,	// (0x000178dc) eswt_ctrl_wait_pane

0x81cb,	// (0x000178e4) eswt_shell_pane

0x255e,	// (0x00011c77) listscroll_eswt_app_pane

0x81eb,	// (0x00017904) popup_eswt_tasktip_window_ParamLimits

0x81eb,	// (0x00017904) popup_eswt_tasktip_window

0x4ca5,	// (0x000143be) bg_popup_window_pane_cp18

0x81fc,	// (0x00017915) eswt_control_pane_g1_ParamLimits

0x81fc,	// (0x00017915) eswt_control_pane_g1

0x8209,	// (0x00017922) eswt_control_pane_g2_ParamLimits

0x8209,	// (0x00017922) eswt_control_pane_g2

0x8216,	// (0x0001792f) eswt_control_pane_g3_ParamLimits

0x8216,	// (0x0001792f) eswt_control_pane_g3

0x8223,	// (0x0001793c) eswt_control_pane_g4_ParamLimits

0x8223,	// (0x0001793c) eswt_control_pane_g4

0x0003,

0xfbf4,	// (0x0001f30d) eswt_control_pane_g_ParamLimits

0xfbf4,	// (0x0001f30d) eswt_control_pane_g

0x3456,	// (0x00012b6f) bg_button_pane_ParamLimits

0x3456,	// (0x00012b6f) bg_button_pane

0x2c4c,	// (0x00012365) common_borders_pane_copy2_ParamLimits

0x2c4c,	// (0x00012365) common_borders_pane_copy2

0x8230,	// (0x00017949) control_button_pane_g1_ParamLimits

0x8230,	// (0x00017949) control_button_pane_g1

0x823c,	// (0x00017955) control_button_pane_g2_ParamLimits

0x823c,	// (0x00017955) control_button_pane_g2

0x8248,	// (0x00017961) control_button_pane_g3_ParamLimits

0x8248,	// (0x00017961) control_button_pane_g3

0x0002,

0xfbfd,	// (0x0001f316) control_button_pane_g_ParamLimits

0xfbfd,	// (0x0001f316) control_button_pane_g

0x825c,	// (0x00017975) control_button_pane_t1

0x826a,	// (0x00017983) control_button_pane_t2

0x0001,

0xfc04,	// (0x0001f31d) control_button_pane_t

0x4b77,	// (0x00014290) bg_button_pane_g1

0x4b87,	// (0x000142a0) bg_button_pane_g2

0x4b7f,	// (0x00014298) bg_button_pane_g3

0x4b97,	// (0x000142b0) bg_button_pane_g4

0x4b8f,	// (0x000142a8) bg_button_pane_g5

0x4b9f,	// (0x000142b8) bg_button_pane_g6

0x4ba7,	// (0x000142c0) bg_button_pane_g7

0x4bb7,	// (0x000142d0) bg_button_pane_g8

0x4baf,	// (0x000142c8) bg_button_pane_g9

0x0008,

0xf85c,	// (0x0001ef75) bg_button_pane_g

0x76a6,	// (0x00016dbf) common_borders_pane_ParamLimits

0x76a6,	// (0x00016dbf) common_borders_pane

0x81fc,	// (0x00017915) eswt_control_pane_g1_copy1_ParamLimits

0x81fc,	// (0x00017915) eswt_control_pane_g1_copy1

0x8209,	// (0x00017922) eswt_control_pane_g2_copy1_ParamLimits

0x8209,	// (0x00017922) eswt_control_pane_g2_copy1

0x8216,	// (0x0001792f) eswt_control_pane_g3_copy1_ParamLimits

0x8216,	// (0x0001792f) eswt_control_pane_g3_copy1

0x8223,	// (0x0001793c) eswt_control_pane_g4_copy1_ParamLimits

0x8223,	// (0x0001793c) eswt_control_pane_g4_copy1

0x76e1,	// (0x00016dfa) bg_eswt_ctrl_canvas_pane_g1

0x76a6,	// (0x00016dbf) common_borders_pane_cp2_ParamLimits

0x76a6,	// (0x00016dbf) common_borders_pane_cp2

0x76a6,	// (0x00016dbf) common_borders_pane_cp3_ParamLimits

0x76a6,	// (0x00016dbf) common_borders_pane_cp3

0x8278,	// (0x00017991) separator_horizontal_pane

0x8280,	// (0x00017999) separator_vertical_pane

0x81fc,	// (0x00017915) eswt_control_pane_g1_copy2_ParamLimits

0x81fc,	// (0x00017915) eswt_control_pane_g1_copy2

0x8209,	// (0x00017922) eswt_control_pane_g2_copy2_ParamLimits

0x8209,	// (0x00017922) eswt_control_pane_g2_copy2

0x8216,	// (0x0001792f) eswt_control_pane_g3_copy2_ParamLimits

0x8216,	// (0x0001792f) eswt_control_pane_g3_copy2

0x8223,	// (0x0001793c) eswt_control_pane_g4_copy2_ParamLimits

0x8223,	// (0x0001793c) eswt_control_pane_g4_copy2

0x255e,	// (0x00011c77) common_borders_pane_cp4

0x8289,	// (0x000179a2) separator_horizontal_pane_g1

0x8292,	// (0x000179ab) separator_horizontal_pane_g2

0x829b,	// (0x000179b4) separator_horizontal_pane_g3

0x0002,

0xfc09,	// (0x0001f322) separator_horizontal_pane_g

0x81fc,	// (0x00017915) eswt_control_pane_g1_copy3_ParamLimits

0x81fc,	// (0x00017915) eswt_control_pane_g1_copy3

0x8209,	// (0x00017922) eswt_control_pane_g2_copy3_ParamLimits

0x8209,	// (0x00017922) eswt_control_pane_g2_copy3

0x8216,	// (0x0001792f) eswt_control_pane_g3_copy3_ParamLimits

0x8216,	// (0x0001792f) eswt_control_pane_g3_copy3

0x8223,	// (0x0001793c) eswt_control_pane_g4_copy3_ParamLimits

0x8223,	// (0x0001793c) eswt_control_pane_g4_copy3

0x255e,	// (0x00011c77) common_borders_pane_cp5

0x82a4,	// (0x000179bd) separator_vertical_pane_g1

0x82ad,	// (0x000179c6) separator_vertical_pane_g2

0x82b6,	// (0x000179cf) separator_vertical_pane_g3

0x0002,

0xfc10,	// (0x0001f329) separator_vertical_pane_g

0x81fc,	// (0x00017915) eswt_control_pane_g1_copy4_ParamLimits

0x81fc,	// (0x00017915) eswt_control_pane_g1_copy4

0x8209,	// (0x00017922) eswt_control_pane_g2_copy4_ParamLimits

0x8209,	// (0x00017922) eswt_control_pane_g2_copy4

0x8216,	// (0x0001792f) eswt_control_pane_g3_copy4_ParamLimits

0x8216,	// (0x0001792f) eswt_control_pane_g3_copy4

0x8223,	// (0x0001793c) eswt_control_pane_g4_copy4_ParamLimits

0x8223,	// (0x0001793c) eswt_control_pane_g4_copy4

0xe138,	// (0x0001d851) eswt_ctrl_combo_button_pane

0xe140,	// (0x0001d859) eswt_ctrl_input_pane

0xe148,	// (0x0001d861) popup_choice_list_window_cp70

0xe150,	// (0x0001d869) eswt_ctrl_input_pane_t1

0x255e,	// (0x00011c77) input_focus_pane_cp70

0x76a6,	// (0x00016dbf) bg_button_pane_cp70_ParamLimits

0x76a6,	// (0x00016dbf) bg_button_pane_cp70

0xe15e,	// (0x0001d877) eswt_ctrl_combo_button_pane_g1

0x82ed,	// (0x00017a06) wait_bar_pane_cp70

0x4ca5,	// (0x000143be) bg_popup_window_pane_cp70_ParamLimits

0x4ca5,	// (0x000143be) bg_popup_window_pane_cp70

0x82f5,	// (0x00017a0e) popup_eswt_tasktip_window_t1

0x830b,	// (0x00017a24) wait_bar_pane_cp71_ParamLimits

0x830b,	// (0x00017a24) wait_bar_pane_cp71

0x8317,	// (0x00017a30) grid_eswt_app_pane

0x3a58,	// (0x00013171) scroll_pane_cp70

0xe166,	// (0x0001d87f) cell_eswt_app_pane_ParamLimits

0xe166,	// (0x0001d87f) cell_eswt_app_pane

0xe190,	// (0x0001d8a9) cell_eswt_app_pane_g1_ParamLimits

0xe190,	// (0x0001d8a9) cell_eswt_app_pane_g1

0xe1bf,	// (0x0001d8d8) cell_eswt_app_pane_g2_ParamLimits

0xe1bf,	// (0x0001d8d8) cell_eswt_app_pane_g2

0x0001,

0xfc17,	// (0x0001f330) cell_eswt_app_pane_g_ParamLimits

0xfc17,	// (0x0001f330) cell_eswt_app_pane_g

0xe1e8,	// (0x0001d901) cell_eswt_app_pane_t1_ParamLimits

0xe1e8,	// (0x0001d901) cell_eswt_app_pane_t1

0x83da,	// (0x00017af3) grid_highlight_pane_cp70_ParamLimits

0x83da,	// (0x00017af3) grid_highlight_pane_cp70

0x41c6,	// (0x000138df) set_content_pane_g1

0xd34b,	// (0x0001ca64) status_small_volume_pane

0x18a2,	// (0x00010fbb) status_small_volume_pane_g1

0x18aa,	// (0x00010fc3) volume_small2_pane

0x18b3,	// (0x00010fcc) volume_small2_pane_g1

0x18bc,	// (0x00010fd5) volume_small2_pane_g2

0x18c5,	// (0x00010fde) volume_small2_pane_g3

0x18ce,	// (0x00010fe7) volume_small2_pane_g4

0x18d7,	// (0x00010ff0) volume_small2_pane_g5

0x18e0,	// (0x00010ff9) volume_small2_pane_g6

0x18e9,	// (0x00011002) volume_small2_pane_g7

0x18f2,	// (0x0001100b) volume_small2_pane_g8

0x18fb,	// (0x00011014) volume_small2_pane_g9

0x1904,	// (0x0001101d) volume_small2_pane_g10

0x0009,

0xfc1c,	// (0x0001f335) volume_small2_pane_g

0x7aa7,	// (0x000171c0) fep_vkb_top_text_pane_g1_ParamLimits

0xe08f,	// (0x0001d7a8) fep_vkb_top_text_pane_t1_ParamLimits

0x7d1c,	// (0x00017435) popup_preview_fixed_window_g3_ParamLimits

0x7d1c,	// (0x00017435) popup_preview_fixed_window_g3

0xbfde,	// (0x0001b6f7) popup_toolbar_trans_pane

0xda29,	// (0x0001d142) aid_height_set_list_ParamLimits

0x6077,	// (0x00015790) aid_size_parent_ParamLimits

0x4637,	// (0x00013d50) list_highlight_pane_cp2_ParamLimits

0x41c6,	// (0x000138df) set_content_pane_g1_ParamLimits

0xdbe2,	// (0x0001d2fb) list_single_image_pane_ParamLimits

0xdbe2,	// (0x0001d2fb) list_single_image_pane

0xe21a,	// (0x0001d933) aid_size_cell_image_ParamLimits

0xe21a,	// (0x0001d933) aid_size_cell_image

0xe227,	// (0x0001d940) grid_single_image_pane_ParamLimits

0xe227,	// (0x0001d940) grid_single_image_pane

0x5924,	// (0x0001503d) list_single_image_pane_g1_ParamLimits

0x5924,	// (0x0001503d) list_single_image_pane_g1

0x83ff,	// (0x00017b18) list_single_image_pane_g2_ParamLimits

0x83ff,	// (0x00017b18) list_single_image_pane_g2

0x0001,

0xfc31,	// (0x0001f34a) list_single_image_pane_g_ParamLimits

0xfc31,	// (0x0001f34a) list_single_image_pane_g

0x8413,	// (0x00017b2c) list_single_image_pane_t1_ParamLimits

0x8413,	// (0x00017b2c) list_single_image_pane_t1

0xe235,	// (0x0001d94e) cell_image_list_pane_ParamLimits

0xe235,	// (0x0001d94e) cell_image_list_pane

0xe24b,	// (0x0001d964) cell_image_list_pane_g1

0xe254,	// (0x0001d96d) cell_image_list_pane_g2

0x0001,

0xfc36,	// (0x0001f34f) cell_image_list_pane_g

0x844f,	// (0x00017b68) aid_size_cell_tb_trans_pane

0x3456,	// (0x00012b6f) bg_tb_trans_pane

0x8461,	// (0x00017b7a) grid_tb_trans_pane

0x4b77,	// (0x00014290) bg_tb_trans_pane_g1

0x4b87,	// (0x000142a0) bg_tb_trans_pane_g2

0x4b7f,	// (0x00014298) bg_tb_trans_pane_g3

0x4b97,	// (0x000142b0) bg_tb_trans_pane_g4

0x4b8f,	// (0x000142a8) bg_tb_trans_pane_g5

0x4bb7,	// (0x000142d0) bg_tb_trans_pane_g6

0x4baf,	// (0x000142c8) bg_tb_trans_pane_g7

0x4b9f,	// (0x000142b8) bg_tb_trans_pane_g8

0x4ba7,	// (0x000142c0) bg_tb_trans_pane_g9

0x0008,

0xfc3b,	// (0x0001f354) bg_tb_trans_pane_g

0x8475,	// (0x00017b8e) cell_toolbar_trans_pane_ParamLimits

0x8475,	// (0x00017b8e) cell_toolbar_trans_pane

0x76e1,	// (0x00016dfa) cell_toolbar_trans_pane_g1

0xde44,	// (0x0001d55d) list_form2_midp_pane_t1

0xde52,	// (0x0001d56b) list_form2_midp_pane_t2

0x0001,

0xfad8,	// (0x0001f1f1) list_form2_midp_pane_t

0x7278,	// (0x00016991) scroll_pane_cp51_ParamLimits

0x7483,	// (0x00016b9c) form2_midp_wait_pane_g1

0x748c,	// (0x00016ba5) form2_midp_wait_pane_g2

0x7495,	// (0x00016bae) form2_midp_wait_pane_g3

0x0002,

0xfaed,	// (0x0001f206) form2_midp_wait_pane_g

0x2652,	// (0x00011d6b) list_highlight_pane_cp21_ParamLimits

0x74ec,	// (0x00016c05) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x74fb,	// (0x00016c14) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x627d,	// (0x00015996) list_single_2graphic_im_pane_ParamLimits

0x627d,	// (0x00015996) list_single_2graphic_im_pane

0xe25d,	// (0x0001d976) list_single_2graphic_im_pane_g1_ParamLimits

0xe25d,	// (0x0001d976) list_single_2graphic_im_pane_g1

0xe26e,	// (0x0001d987) list_single_2graphic_im_pane_g2_ParamLimits

0xe26e,	// (0x0001d987) list_single_2graphic_im_pane_g2

0xe27a,	// (0x0001d993) list_single_2graphic_im_pane_g3_ParamLimits

0xe27a,	// (0x0001d993) list_single_2graphic_im_pane_g3

0x0003,

0xfc4e,	// (0x0001f367) list_single_2graphic_im_pane_g_ParamLimits

0xfc4e,	// (0x0001f367) list_single_2graphic_im_pane_g

0xe28e,	// (0x0001d9a7) list_single_2graphic_im_pane_t1_ParamLimits

0xe28e,	// (0x0001d9a7) list_single_2graphic_im_pane_t1

0x7d28,	// (0x00017441) list_single_graphic_2heading_pane_fp_ParamLimits

0x7d28,	// (0x00017441) list_single_graphic_2heading_pane_fp

0x7d6c,	// (0x00017485) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7d6c,	// (0x00017485) list_single_graphic_2heading_pane_fp_g1

0x7d3d,	// (0x00017456) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7d3d,	// (0x00017456) list_single_graphic_2heading_pane_fp_g2

0x309f,	// (0x000127b8) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x309f,	// (0x000127b8) list_single_graphic_2heading_pane_fp_g3

0x347c,	// (0x00012b95) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x347c,	// (0x00012b95) list_single_graphic_2heading_pane_fp_g4

0x7d49,	// (0x00017462) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7d49,	// (0x00017462) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f28e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f28e) list_single_graphic_2heading_pane_fp_g

0x8509,	// (0x00017c22) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8509,	// (0x00017c22) list_single_graphic_2heading_pane_fp_t1

0x7da4,	// (0x000174bd) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7da4,	// (0x000174bd) list_single_graphic_2heading_pane_fp_t2

0x851f,	// (0x00017c38) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x851f,	// (0x00017c38) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc57,	// (0x0001f370) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc57,	// (0x0001f370) list_single_graphic_2heading_pane_fp_t

0x776d,	// (0x00016e86) fep_hwr_write_pane_g5_ParamLimits

0x776d,	// (0x00016e86) fep_hwr_write_pane_g5

0x7779,	// (0x00016e92) fep_hwr_write_pane_g6_ParamLimits

0x7779,	// (0x00016e92) fep_hwr_write_pane_g6

0x81cb,	// (0x000178e4) eswt_shell_pane_ParamLimits

0x4ca5,	// (0x000143be) bg_popup_window_pane_cp18_ParamLimits

0x5f97,	// (0x000156b0) heading_pane_cp70

0x82f5,	// (0x00017a0e) popup_eswt_tasktip_window_t1_ParamLimits

0xd419,	// (0x0001cb32) aid_touch_tab_arrow_left

0xd42f,	// (0x0001cb48) aid_touch_tab_arrow_right

0xc718,	// (0x0001be31) title_pane_g3_ParamLimits

0xc718,	// (0x0001be31) title_pane_g3

0x3335,	// (0x00012a4e) set_value_pane_g1

0xbfde,	// (0x0001b6f7) popup_toolbar_trans_pane_ParamLimits

0x844f,	// (0x00017b68) aid_size_cell_tb_trans_pane_ParamLimits

0x3456,	// (0x00012b6f) bg_tb_trans_pane_ParamLimits

0x8461,	// (0x00017b7a) grid_tb_trans_pane_ParamLimits

0x28f5,	// (0x0001200e) cont_note_pane_ParamLimits

0x28f5,	// (0x0001200e) cont_note_pane

0x2c4c,	// (0x00012365) cont_snote2_single_text_pane_ParamLimits

0x2c4c,	// (0x00012365) cont_snote2_single_text_pane

0x2c4c,	// (0x00012365) cont_snote2_single_graphic_pane_ParamLimits

0x2c4c,	// (0x00012365) cont_snote2_single_graphic_pane

0x52e8,	// (0x00014a01) cont_note_wait_pane_ParamLimits

0x52e8,	// (0x00014a01) cont_note_wait_pane

0x52e8,	// (0x00014a01) cont_note_image_pane_ParamLimits

0x52e8,	// (0x00014a01) cont_note_image_pane

0x8535,	// (0x00017c4e) popup_note2_window_g1_ParamLimits

0x8535,	// (0x00017c4e) popup_note2_window_g1

0x8566,	// (0x00017c7f) popup_note2_window_t1_ParamLimits

0x8566,	// (0x00017c7f) popup_note2_window_t1

0x85ab,	// (0x00017cc4) popup_note2_window_t2_ParamLimits

0x85ab,	// (0x00017cc4) popup_note2_window_t2

0x85f0,	// (0x00017d09) popup_note2_window_t3_ParamLimits

0x85f0,	// (0x00017d09) popup_note2_window_t3

0x8635,	// (0x00017d4e) popup_note2_window_t4_ParamLimits

0x8635,	// (0x00017d4e) popup_note2_window_t4

0x2979,	// (0x00012092) popup_note2_window_t5_ParamLimits

0x2979,	// (0x00012092) popup_note2_window_t5

0x0004,

0xfc63,	// (0x0001f37c) popup_note2_window_t_ParamLimits

0xfc63,	// (0x0001f37c) popup_note2_window_t

0x8664,	// (0x00017d7d) popup_note2_image_window_g1_ParamLimits

0x8664,	// (0x00017d7d) popup_note2_image_window_g1

0x8670,	// (0x00017d89) popup_note2_image_window_g2_ParamLimits

0x8670,	// (0x00017d89) popup_note2_image_window_g2

0x0001,

0xfc6e,	// (0x0001f387) popup_note2_image_window_g_ParamLimits

0xfc6e,	// (0x0001f387) popup_note2_image_window_g

0x8682,	// (0x00017d9b) popup_note2_image_window_t1_ParamLimits

0x8682,	// (0x00017d9b) popup_note2_image_window_t1

0x869a,	// (0x00017db3) popup_note2_image_window_t2_ParamLimits

0x869a,	// (0x00017db3) popup_note2_image_window_t2

0x86b2,	// (0x00017dcb) popup_note2_image_window_t3_ParamLimits

0x86b2,	// (0x00017dcb) popup_note2_image_window_t3

0x0002,

0xfc73,	// (0x0001f38c) popup_note2_image_window_t_ParamLimits

0xfc73,	// (0x0001f38c) popup_note2_image_window_t

0x52f6,	// (0x00014a0f) popup_note2_wait_window_g1_ParamLimits

0x52f6,	// (0x00014a0f) popup_note2_wait_window_g1

0x86ce,	// (0x00017de7) popup_note2_wait_window_g2_ParamLimits

0x86ce,	// (0x00017de7) popup_note2_wait_window_g2

0x530e,	// (0x00014a27) popup_note2_wait_window_g3_ParamLimits

0x530e,	// (0x00014a27) popup_note2_wait_window_g3

0x0002,

0xfc7a,	// (0x0001f393) popup_note2_wait_window_g_ParamLimits

0xfc7a,	// (0x0001f393) popup_note2_wait_window_g

0x86da,	// (0x00017df3) popup_note2_wait_window_t1_ParamLimits

0x86da,	// (0x00017df3) popup_note2_wait_window_t1

0x86f8,	// (0x00017e11) popup_note2_wait_window_t2_ParamLimits

0x86f8,	// (0x00017e11) popup_note2_wait_window_t2

0x8716,	// (0x00017e2f) popup_note2_wait_window_t3_ParamLimits

0x8716,	// (0x00017e2f) popup_note2_wait_window_t3

0x8728,	// (0x00017e41) popup_note2_wait_window_t4_ParamLimits

0x8728,	// (0x00017e41) popup_note2_wait_window_t4

0x0003,

0xfc81,	// (0x0001f39a) popup_note2_wait_window_t_ParamLimits

0xfc81,	// (0x0001f39a) popup_note2_wait_window_t

0x873a,	// (0x00017e53) wait_bar2_pane_ParamLimits

0x873a,	// (0x00017e53) wait_bar2_pane

0x8752,	// (0x00017e6b) popup_snote2_single_text_window_g1_ParamLimits

0x8752,	// (0x00017e6b) popup_snote2_single_text_window_g1

0x877a,	// (0x00017e93) popup_snote2_single_text_window_t1_ParamLimits

0x877a,	// (0x00017e93) popup_snote2_single_text_window_t1

0x87c6,	// (0x00017edf) popup_snote2_single_text_window_t2_ParamLimits

0x87c6,	// (0x00017edf) popup_snote2_single_text_window_t2

0x8812,	// (0x00017f2b) popup_snote2_single_text_window_t3_ParamLimits

0x8812,	// (0x00017f2b) popup_snote2_single_text_window_t3

0x8853,	// (0x00017f6c) popup_snote2_single_text_window_t4_ParamLimits

0x8853,	// (0x00017f6c) popup_snote2_single_text_window_t4

0x8889,	// (0x00017fa2) popup_snote2_single_text_window_t5_ParamLimits

0x8889,	// (0x00017fa2) popup_snote2_single_text_window_t5

0x0004,

0xfc8a,	// (0x0001f3a3) popup_snote2_single_text_window_t_ParamLimits

0xfc8a,	// (0x0001f3a3) popup_snote2_single_text_window_t

0x88b4,	// (0x00017fcd) popup_snote2_single_graphic_window_g1_ParamLimits

0x88b4,	// (0x00017fcd) popup_snote2_single_graphic_window_g1

0x88dc,	// (0x00017ff5) popup_snote2_single_graphic_window_g2_ParamLimits

0x88dc,	// (0x00017ff5) popup_snote2_single_graphic_window_g2

0x0001,

0xfc95,	// (0x0001f3ae) popup_snote2_single_graphic_window_g_ParamLimits

0xfc95,	// (0x0001f3ae) popup_snote2_single_graphic_window_g

0x8904,	// (0x0001801d) popup_snote2_single_graphic_window_t1_ParamLimits

0x8904,	// (0x0001801d) popup_snote2_single_graphic_window_t1

0x8950,	// (0x00018069) popup_snote2_single_graphic_window_t2_ParamLimits

0x8950,	// (0x00018069) popup_snote2_single_graphic_window_t2

0x8812,	// (0x00017f2b) popup_snote2_single_graphic_window_t3_ParamLimits

0x8812,	// (0x00017f2b) popup_snote2_single_graphic_window_t3

0x8853,	// (0x00017f6c) popup_snote2_single_graphic_window_t4_ParamLimits

0x8853,	// (0x00017f6c) popup_snote2_single_graphic_window_t4

0x8889,	// (0x00017fa2) popup_snote2_single_graphic_window_t5_ParamLimits

0x8889,	// (0x00017fa2) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9a,	// (0x0001f3b3) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9a,	// (0x0001f3b3) popup_snote2_single_graphic_window_t

0x7139,	// (0x00016852) clock_nsta_pane_cp2_t1

0x7139,	// (0x00016852) clock_nsta_pane_cp2_t2

0x0001,

0xfaae,	// (0x0001f1c7) clock_nsta_pane_cp2_t

0x3470,	// (0x00012b89) form_field_data_wide_pane_g1_ParamLimits

0x309f,	// (0x000127b8) form_field_data_wide_pane_g2_ParamLimits

0x309f,	// (0x000127b8) form_field_data_wide_pane_g2

0x347c,	// (0x00012b95) form_field_data_wide_pane_g3_ParamLimits

0x347c,	// (0x00012b95) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001ed8f) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001ed8f) form_field_data_wide_pane_g

0xdd87,	// (0x0001d4a0) grid_touch_3_pane_ParamLimits

0xdd87,	// (0x0001d4a0) grid_touch_3_pane

0xe2bf,	// (0x0001d9d8) cell_touch_3_pane_ParamLimits

0xe2bf,	// (0x0001d9d8) cell_touch_3_pane

0x76e1,	// (0x00016dfa) cell_touch_3_pane_g1

0x76e1,	// (0x00016dfa) cell_touch_3_pane_g2

0x0001,

0xfb33,	// (0x0001f24c) cell_touch_3_pane_g

0x29ab,	// (0x000120c4) cont_query_data_pane

0x29b3,	// (0x000120cc) cont_query_data_pane_cp1

0x89ca,	// (0x000180e3) button_value_adjust_pane_cp7

0x89d2,	// (0x000180eb) query_popup_pane_cp3

0x3d3f,	// (0x00013458) bg_popup_sub_pane_cp22_ParamLimits

0x0690,	// (0x0000fda9) navi_navi_volume_pane_cp2

0x06ab,	// (0x0000fdc4) popup_side_volume_key_window_g2

0x06ba,	// (0x0000fdd3) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001ee25) popup_side_volume_key_window_g

0x06d7,	// (0x0000fdf0) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001ee2c) popup_side_volume_key_window_t

0x4085,	// (0x0001379e) popup_side_volume_key_window_ParamLimits

0xcb78,	// (0x0001c291) list_double_graphic_pane_g4_ParamLimits

0xcb78,	// (0x0001c291) list_double_graphic_pane_g4

0xdbbe,	// (0x0001d2d7) list_single_2heading_msg_pane_ParamLimits

0xdbbe,	// (0x0001d2d7) list_single_2heading_msg_pane

0xe307,	// (0x0001da20) list_single_2heading_msg_pane_g1_ParamLimits

0xe307,	// (0x0001da20) list_single_2heading_msg_pane_g1

0xe313,	// (0x0001da2c) list_single_2heading_msg_pane_g2_ParamLimits

0xe313,	// (0x0001da2c) list_single_2heading_msg_pane_g2

0xe326,	// (0x0001da3f) list_single_2heading_msg_pane_g3_ParamLimits

0xe326,	// (0x0001da3f) list_single_2heading_msg_pane_g3

0xe332,	// (0x0001da4b) list_single_2heading_msg_pane_g4_ParamLimits

0xe332,	// (0x0001da4b) list_single_2heading_msg_pane_g4

0x0003,

0xfca5,	// (0x0001f3be) list_single_2heading_msg_pane_g_ParamLimits

0xfca5,	// (0x0001f3be) list_single_2heading_msg_pane_g

0xe34a,	// (0x0001da63) list_single_2heading_msg_pane_t1_ParamLimits

0xe34a,	// (0x0001da63) list_single_2heading_msg_pane_t1

0xe372,	// (0x0001da8b) list_single_2heading_msg_pane_t2_ParamLimits

0xe372,	// (0x0001da8b) list_single_2heading_msg_pane_t2

0xe3dd,	// (0x0001daf6) list_single_2heading_msg_pane_t3_ParamLimits

0xe3dd,	// (0x0001daf6) list_single_2heading_msg_pane_t3

0x8ab5,	// (0x000181ce) list_single_2heading_msg_pane_t4_ParamLimits

0x8ab5,	// (0x000181ce) list_single_2heading_msg_pane_t4

0x0003,

0xfcae,	// (0x0001f3c7) list_single_2heading_msg_pane_t_ParamLimits

0xfcae,	// (0x0001f3c7) list_single_2heading_msg_pane_t

0x25a6,	// (0x00011cbf) title_pane_g4_ParamLimits

0x25a6,	// (0x00011cbf) title_pane_g4

0x049f,	// (0x0000fbb8) title_pane_stacon_g3_ParamLimits

0x049f,	// (0x0000fbb8) title_pane_stacon_g3

0x84cc,	// (0x00017be5) list_single_2graphic_im_pane_g4_ParamLimits

0x84cc,	// (0x00017be5) list_single_2graphic_im_pane_g4

0x5d53,	// (0x0001546c) popup_side_volume_key_window_cp

0x6661,	// (0x00015d7a) main_idle_act2_pane_t1

0x10a6,	// (0x000107bf) toolbar_button_pane_g10

0xca23,	// (0x0001c13c) popup_toolbar_window_cp1

0x712a,	// (0x00016843) clock_nsta_pane_cp_t1

0x712a,	// (0x00016843) clock_nsta_pane_cp_t2

0x0001,

0xfaa9,	// (0x0001f1c2) clock_nsta_pane_cp_t

0x0690,	// (0x0000fda9) navi_navi_volume_pane_cp2_ParamLimits

0x069f,	// (0x0000fdb8) popup_side_volume_key_window_g1_ParamLimits

0x06ab,	// (0x0000fdc4) popup_side_volume_key_window_g2_ParamLimits

0x06ba,	// (0x0000fdd3) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001ee25) popup_side_volume_key_window_g_ParamLimits

0x150e,	// (0x00010c27) fep_hwr_aid_pane

0x15b5,	// (0x00010cce) bg_fep_hwr_top_pane_g4_ParamLimits

0x773d,	// (0x00016e56) fep_hwr_top_pane_g1_ParamLimits

0x774f,	// (0x00016e68) fep_hwr_top_pane_g2_ParamLimits

0x15d5,	// (0x00010cee) fep_hwr_top_pane_g3_ParamLimits

0xfafe,	// (0x0001f217) fep_hwr_top_pane_g_ParamLimits

0x15ea,	// (0x00010d03) fep_hwr_top_text_pane_ParamLimits

0x5b16,	// (0x0001522f) aid_touch_tab_arrow_arrow_2

0x5b1f,	// (0x00015238) aid_touch_tab_arrow_left_2

0x1522,	// (0x00010c3b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1559,	// (0x00010c72) fep_hwr_prediction_pane

0x78af,	// (0x00016fc8) fep_vkb_prediction_pane

0xe06f,	// (0x0001d788) fep_vkb_side_pane_g3_ParamLimits

0xe06f,	// (0x0001d788) fep_vkb_side_pane_g3

0x1765,	// (0x00010e7e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x17d1,	// (0x00010eea) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x17de,	// (0x00010ef7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbad,	// (0x0001f2c6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x190d,	// (0x00011026) fep_hwr_prediction_pane_g1

0x1917,	// (0x00011030) fep_hwr_prediction_pane_g2

0x191f,	// (0x00011038) fep_hwr_prediction_pane_g3

0x1927,	// (0x00011040) fep_hwr_prediction_pane_g4

0x0003,

0xfcb7,	// (0x0001f3d0) fep_hwr_prediction_pane_g

0x8ada,	// (0x000181f3) fep_vkb_prediction_pane_g1

0x8ae4,	// (0x000181fd) fep_vkb_prediction_pane_g2

0x8aec,	// (0x00018205) fep_vkb_prediction_pane_g3

0x8af4,	// (0x0001820d) fep_vkb_prediction_pane_g4

0x0003,

0xfcc0,	// (0x0001f3d9) fep_vkb_prediction_pane_g

0x138e,	// (0x00010aa7) slider_set_pane_g3

0x13a2,	// (0x00010abb) slider_set_pane_g4

0x13ba,	// (0x00010ad3) slider_set_pane_g5

0x138e,	// (0x00010aa7) slider_set_pane_g6

0x13d0,	// (0x00010ae9) slider_set_pane_g7

0x61dc,	// (0x000158f5) slider_form_pane_g3

0x61e5,	// (0x000158fe) slider_form_pane_g4

0x61ed,	// (0x00015906) slider_form_pane_g5

0x61dc,	// (0x000158f5) slider_form_pane_g6

0xdb74,	// (0x0001d28d) slider_form_pane_g7

0x695e,	// (0x00016077) slider_set_pane_vc_g3

0x6967,	// (0x00016080) slider_set_pane_vc_g4

0x6970,	// (0x00016089) slider_set_pane_vc_g5

0x695e,	// (0x00016077) slider_set_pane_vc_g6

0x6979,	// (0x00016092) slider_set_pane_vc_g7

0x6dfe,	// (0x00016517) slider_form_pane_vc_g1

0x6e07,	// (0x00016520) slider_form_pane_vc_g2

0x6e10,	// (0x00016529) slider_form_pane_vc_g3

0x6dfe,	// (0x00016517) slider_form_pane_vc_g4

0x6e19,	// (0x00016532) slider_form_pane_vc_g5

0x0004,

0xfa7b,	// (0x0001f194) slider_form_pane_vc_g

0x0166,	// (0x0000f87f) main_idle_act3_pane

0x8afc,	// (0x00018215) ai3_links_pane

0xe44b,	// (0x0001db64) popup_ai3_data_window_ParamLimits

0xe44b,	// (0x0001db64) popup_ai3_data_window

0x255e,	// (0x00011c77) grid_ai3_links_pane

0xe465,	// (0x0001db7e) cell_ai3_links_pane_ParamLimits

0xe465,	// (0x0001db7e) cell_ai3_links_pane

0x8b37,	// (0x00018250) bg_popup_sub_pane_cp11

0x8b44,	// (0x0001825d) cell_ai3_links_pane_g1

0x255e,	// (0x00011c77) bg_popup_sub_pane_cp12

0x8b69,	// (0x00018282) heading_ai3_data_pane

0x8b71,	// (0x0001828a) list_ai3_gene_pane

0x8b7d,	// (0x00018296) popup_ai3_data_window_g1

0x8b85,	// (0x0001829e) heading_ai3_data_pane_g1

0x8b8d,	// (0x000182a6) heading_ai3_data_pane_t1

0x8b9b,	// (0x000182b4) list_double_ai3_gene_pane_ParamLimits

0x8b9b,	// (0x000182b4) list_double_ai3_gene_pane

0x8ba8,	// (0x000182c1) list_single_ai3_gene_pane_ParamLimits

0x8ba8,	// (0x000182c1) list_single_ai3_gene_pane

0x76a6,	// (0x00016dbf) list_highlight_pane_cp7_ParamLimits

0x76a6,	// (0x00016dbf) list_highlight_pane_cp7

0x8bb5,	// (0x000182ce) list_single_a13_gene_pane_t1_ParamLimits

0x8bb5,	// (0x000182ce) list_single_a13_gene_pane_t1

0x8bcc,	// (0x000182e5) list_single_ai3_gene_pane_g1

0x8bd5,	// (0x000182ee) list_single_ai3_gene_pane_g2

0x0001,

0xfcc9,	// (0x0001f3e2) list_single_ai3_gene_pane_g

0x8bdd,	// (0x000182f6) list_double_ai3_gene_pane_g1_ParamLimits

0x8bdd,	// (0x000182f6) list_double_ai3_gene_pane_g1

0x8be9,	// (0x00018302) list_double_ai3_gene_pane_t1_ParamLimits

0x8be9,	// (0x00018302) list_double_ai3_gene_pane_t1

0x8c05,	// (0x0001831e) list_double_ai3_gene_pane_t2_ParamLimits

0x8c05,	// (0x0001831e) list_double_ai3_gene_pane_t2

0x8c1b,	// (0x00018334) list_double_ai3_gene_pane_t3_ParamLimits

0x8c1b,	// (0x00018334) list_double_ai3_gene_pane_t3

0x0002,

0xfcce,	// (0x0001f3e7) list_double_ai3_gene_pane_t_ParamLimits

0xfcce,	// (0x0001f3e7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x89e3,	// (0x000180fc) aid_size_min_col_2

0xe2f1,	// (0x0001da0a) aid_size_min_msg_ParamLimits

0xe2f1,	// (0x0001da0a) aid_size_min_msg

0xe083,	// (0x0001d79c) fep_vkb_top_text_pane_g2_ParamLimits

0xe083,	// (0x0001d79c) fep_vkb_top_text_pane_g2

0x0001,

0xfb2e,	// (0x0001f247) fep_vkb_top_text_pane_g_ParamLimits

0xfb2e,	// (0x0001f247) fep_vkb_top_text_pane_g

0x0166,	// (0x0000f87f) main_hc_apps_shell_pane

0x8c38,	// (0x00018351) grid_hc_apps_pane_ParamLimits

0x8c38,	// (0x00018351) grid_hc_apps_pane

0x8c47,	// (0x00018360) list_hc_apps_pane

0x8c4f,	// (0x00018368) scroll_pane_cp37_ParamLimits

0x8c4f,	// (0x00018368) scroll_pane_cp37

0xe47f,	// (0x0001db98) cell_hc_apps_pane_ParamLimits

0xe47f,	// (0x0001db98) cell_hc_apps_pane

0xe53d,	// (0x0001dc56) cell_hc_apps_pane_g1_ParamLimits

0xe53d,	// (0x0001dc56) cell_hc_apps_pane_g1

0x8d3a,	// (0x00018453) cell_hc_apps_pane_g2_ParamLimits

0x8d3a,	// (0x00018453) cell_hc_apps_pane_g2

0x8d56,	// (0x0001846f) cell_hc_apps_pane_g3_ParamLimits

0x8d56,	// (0x0001846f) cell_hc_apps_pane_g3

0x0002,

0xfcd5,	// (0x0001f3ee) cell_hc_apps_pane_g_ParamLimits

0xfcd5,	// (0x0001f3ee) cell_hc_apps_pane_g

0xe56a,	// (0x0001dc83) cell_hc_apps_pane_t1_ParamLimits

0xe56a,	// (0x0001dc83) cell_hc_apps_pane_t1

0x28f5,	// (0x0001200e) grid_highlight_pane_cp10_ParamLimits

0x28f5,	// (0x0001200e) grid_highlight_pane_cp10

0xe5a8,	// (0x0001dcc1) list_single_hc_apps_pane_ParamLimits

0xe5a8,	// (0x0001dcc1) list_single_hc_apps_pane

0xe5d5,	// (0x0001dcee) list_single_hc_apps_pane_g1

0xe5ee,	// (0x0001dd07) list_single_hc_apps_pane_g2

0x0001,

0xfcdc,	// (0x0001f3f5) list_single_hc_apps_pane_g

0xe607,	// (0x0001dd20) list_single_hc_apps_pane_g2_copy1

0x8e62,	// (0x0001857b) list_single_hc_apps_pane_t1

0x2652,	// (0x00011d6b) bg_set_opt_pane_cp_ParamLimits

0x03c7,	// (0x0000fae0) setting_slider_pane_t1_ParamLimits

0x03e0,	// (0x0000faf9) setting_slider_pane_t2_ParamLimits

0x03fa,	// (0x0000fb13) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001ec77) setting_slider_pane_t_ParamLimits

0x0412,	// (0x0000fb2b) slider_set_pane_ParamLimits

0x0939,	// (0x00010052) control_pane_g5_ParamLimits

0x0939,	// (0x00010052) control_pane_g5

0x602b,	// (0x00015744) slider_set_pane_g1_ParamLimits

0x1382,	// (0x00010a9b) slider_set_pane_g2_ParamLimits

0x138e,	// (0x00010aa7) slider_set_pane_g3_ParamLimits

0x13a2,	// (0x00010abb) slider_set_pane_g4_ParamLimits

0x13ba,	// (0x00010ad3) slider_set_pane_g5_ParamLimits

0x138e,	// (0x00010aa7) slider_set_pane_g6_ParamLimits

0x13d0,	// (0x00010ae9) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x0001f073) slider_set_pane_g_ParamLimits

0x4171,	// (0x0001388a) navi_icon_text_pane_ParamLimits

0xd3e2,	// (0x0001cafb) aid_fill_nsta_2_ParamLimits

0xd419,	// (0x0001cb32) aid_touch_tab_arrow_left_ParamLimits

0xd42f,	// (0x0001cb48) aid_touch_tab_arrow_right_ParamLimits

0xd4ca,	// (0x0001cbe3) clock_nsta_pane_ParamLimits

0x5af8,	// (0x00015211) navi_icon_pane_g1_ParamLimits

0x5b04,	// (0x0001521d) navi_text_pane_t1_ParamLimits

0x7236,	// (0x0001694f) navi_icon_text_pane_g1_ParamLimits

0x7242,	// (0x0001695b) navi_icon_text_pane_t1_ParamLimits

0xe5d5,	// (0x0001dcee) list_single_hc_apps_pane_g1_ParamLimits

0xe5ee,	// (0x0001dd07) list_single_hc_apps_pane_g2_ParamLimits

0xfcdc,	// (0x0001f3f5) list_single_hc_apps_pane_g_ParamLimits

0xe607,	// (0x0001dd20) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8e62,	// (0x0001857b) list_single_hc_apps_pane_t1_ParamLimits

0xb735,	// (0x0001ae4e) popup_toolbar2_fixed_window_ParamLimits

0xb735,	// (0x0001ae4e) popup_toolbar2_fixed_window

0xbfd4,	// (0x0001b6ed) popup_toolbar2_float_window

0x255e,	// (0x00011c77) bg_popup_sub_pane_cp27

0x8e90,	// (0x000185a9) grid_toolbar2_float_pane

0x255e,	// (0x00011c77) bg_popup_sub_pane_cp26

0x8e90,	// (0x000185a9) grid_toolbar2_fixed_pane

0xe623,	// (0x0001dd3c) cell_toolbar2_fixed_pane_ParamLimits

0xe623,	// (0x0001dd3c) cell_toolbar2_fixed_pane

0xe63d,	// (0x0001dd56) cell_toolbar2_fixed_pane_g1

0x8eb1,	// (0x000185ca) toolbar2_fixed_button_pane

0x4b77,	// (0x00014290) toolbar2_fixed_button_pane_g1

0x4b87,	// (0x000142a0) toolbar2_fixed_button_pane_g2

0x4b7f,	// (0x00014298) toolbar2_fixed_button_pane_g3

0x4b97,	// (0x000142b0) toolbar2_fixed_button_pane_g4

0x4b8f,	// (0x000142a8) toolbar2_fixed_button_pane_g5

0x4b9f,	// (0x000142b8) toolbar2_fixed_button_pane_g6

0x4ba7,	// (0x000142c0) toolbar2_fixed_button_pane_g7

0x4bb7,	// (0x000142d0) toolbar2_fixed_button_pane_g8

0x4baf,	// (0x000142c8) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x0001ef75) toolbar2_fixed_button_pane_g

0x8eb9,	// (0x000185d2) cell_toolbar2_float_pane_ParamLimits

0x8eb9,	// (0x000185d2) cell_toolbar2_float_pane

0x8eca,	// (0x000185e3) cell_toolbar2_float_pane_g1

0x8eb1,	// (0x000185ca) toolbar2_fixed_button_pane_cp

0xdf5d,	// (0x0001d676) fep_vkb_accented_list_pane_ParamLimits

0xdf5d,	// (0x0001d676) fep_vkb_accented_list_pane

0x1745,	// (0x00010e5e) bg_popup_fep_shadow_pane_g9

0x42f1,	// (0x00013a0a) bg_popup_fep_shadow_pane_cp3

0x3727,	// (0x00012e40) list_accented_list_pane

0x8ed3,	// (0x000185ec) list_single_accented_list_pane_ParamLimits

0x8ed3,	// (0x000185ec) list_single_accented_list_pane

0x42f1,	// (0x00013a0a) list_highlight_pane_cp10

0x8ee4,	// (0x000185fd) list_single_accented_list_pane_t1

0xbefe,	// (0x0001b617) popup_slider_window_ParamLimits

0xbefe,	// (0x0001b617) popup_slider_window

0x89da,	// (0x000180f3) aid_indentation_list_msg

0xe736,	// (0x0001de4f) bg_popup_window_pane_cp19

0x9008,	// (0x00018721) popup_slider_window_g1

0x9024,	// (0x0001873d) popup_slider_window_g2

0x9040,	// (0x00018759) popup_slider_window_g3

0x0005,

0xfce1,	// (0x0001f3fa) popup_slider_window_g

0x909c,	// (0x000187b5) popup_slider_window_t1

0x9110,	// (0x00018829) small_volume_slider_vertical_pane

0x76e1,	// (0x00016dfa) small_volume_slider_vertical_pane_g1

0x76e1,	// (0x00016dfa) small_volume_slider_vertical_pane_g2

0x912c,	// (0x00018845) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf3,	// (0x0001f40c) small_volume_slider_vertical_pane_g

0xb6a3,	// (0x0001adbc) area_side_right_pane_ParamLimits

0xb6a3,	// (0x0001adbc) area_side_right_pane

0xc10a,	// (0x0001b823) aid_size_side_button_ParamLimits

0xc10a,	// (0x0001b823) aid_size_side_button

0xc123,	// (0x0001b83c) grid_sctrl_middle_pane_ParamLimits

0xc123,	// (0x0001b83c) grid_sctrl_middle_pane

0x1962,	// (0x0001107b) sctrl_sk_bottom_pane

0x1973,	// (0x0001108c) sctrl_sk_top_pane

0x1985,	// (0x0001109e) aid_touch_sctrl_top

0x1992,	// (0x000110ab) bg_sctrl_sk_pane_ParamLimits

0x1992,	// (0x000110ab) bg_sctrl_sk_pane

0x19a0,	// (0x000110b9) sctrl_sk_top_pane_g1

0x19ad,	// (0x000110c6) sctrl_sk_top_pane_t1

0x1985,	// (0x0001109e) aid_touch_sctrl_bottom

0x1992,	// (0x000110ab) bg_sctrl_sk_pane_cp_ParamLimits

0x1992,	// (0x000110ab) bg_sctrl_sk_pane_cp

0x19c8,	// (0x000110e1) sctrl_sk_bottom_pane_g1

0x19ad,	// (0x000110c6) sctrl_sk_bottom_pane_t1

0xc13d,	// (0x0001b856) cell_sctrl_middle_pane_ParamLimits

0xc13d,	// (0x0001b856) cell_sctrl_middle_pane

0xc14e,	// (0x0001b867) aid_touch_sctrl_middle_ParamLimits

0xc14e,	// (0x0001b867) aid_touch_sctrl_middle

0xc15b,	// (0x0001b874) bg_sctrl_middle_pane_ParamLimits

0xc15b,	// (0x0001b874) bg_sctrl_middle_pane

0x2035,	// (0x0001174e) cell_sctrl_middle_pane_g1_ParamLimits

0x2035,	// (0x0001174e) cell_sctrl_middle_pane_g1

0xc169,	// (0x0001b882) cell_sctrl_middle_pane_g2_ParamLimits

0xc169,	// (0x0001b882) cell_sctrl_middle_pane_g2

0x0001,

0xfcff,	// (0x0001f418) cell_sctrl_middle_pane_g_ParamLimits

0xfcff,	// (0x0001f418) cell_sctrl_middle_pane_g

0x4b77,	// (0x00014290) bg_sctrl_middle_pane_g1

0x4b7f,	// (0x00014298) bg_sctrl_middle_pane_g2

0x4b87,	// (0x000142a0) bg_sctrl_middle_pane_g3

0x4b8f,	// (0x000142a8) bg_sctrl_middle_pane_g4

0x4b97,	// (0x000142b0) bg_sctrl_middle_pane_g5

0x4b9f,	// (0x000142b8) bg_sctrl_middle_pane_g6

0x4ba7,	// (0x000142c0) bg_sctrl_middle_pane_g7

0x4baf,	// (0x000142c8) bg_sctrl_middle_pane_g8

0x0007,

0xfd04,	// (0x0001f41d) bg_sctrl_middle_pane_g

0x4bb7,	// (0x000142d0) bg_sctrl_middle_pane_g8_copy1

0x4b77,	// (0x00014290) bg_sctrl_sk_pane_g1

0x4b87,	// (0x000142a0) bg_sctrl_sk_pane_g2

0x4b7f,	// (0x00014298) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x0001ef75) bg_sctrl_sk_pane_g

0x2e0a,	// (0x00012523) aid_size_touch_scroll_bar

0x4b97,	// (0x000142b0) bg_sctrl_sk_pane_g4

0x4b8f,	// (0x000142a8) bg_sctrl_sk_pane_g5

0x4b9f,	// (0x000142b8) bg_sctrl_sk_pane_g6

0x4ba7,	// (0x000142c0) bg_sctrl_sk_pane_g7

0x4bb7,	// (0x000142d0) bg_sctrl_sk_pane_g8

0x4baf,	// (0x000142c8) bg_sctrl_sk_pane_g9

0x0af7,	// (0x00010210) popup_fep_china_hwr2_fs_candidate_window

0xba18,	// (0x0001b131) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xba18,	// (0x0001b131) popup_fep_china_hwr2_fs_control_window

0x1765,	// (0x00010e7e) sctrl_sk_top_pane_g2

0x0001,

0xfcfa,	// (0x0001f413) sctrl_sk_top_pane_g

0xe7ee,	// (0x0001df07) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe7ee,	// (0x0001df07) aid_fep_china_hwr2_fs_cell

0xe802,	// (0x0001df1b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe802,	// (0x0001df1b) bg_popup_fep_shadow_pane_cp4

0xe819,	// (0x0001df32) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe819,	// (0x0001df32) bg_popup_fep_shadow_pane_cp5

0xe82b,	// (0x0001df44) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe82b,	// (0x0001df44) popup_fep_china_hwr2_fs_control_bar_grid

0xe83f,	// (0x0001df58) popup_fep_china_hwr2_fs_control_funtion_grid

0x9188,	// (0x000188a1) aid_fep_china_hwr2_fs_candi_cell

0x255e,	// (0x00011c77) bg_popup_fep_shadow_pane_cp6

0x9192,	// (0x000188ab) popup_fep_china_hwr2_fs_candidate_grid

0xe847,	// (0x0001df60) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe847,	// (0x0001df60) cell_fep_china_hwr2_fs_funtion_grid

0x76e1,	// (0x00016dfa) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x91b4,	// (0x000188cd) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x91b4,	// (0x000188cd) cell_fep_china_hwr2_fs_funtion_grid_g1

0x91c2,	// (0x000188db) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x91c2,	// (0x000188db) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd15,	// (0x0001f42e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd15,	// (0x0001f42e) cell_fep_china_hwr2_fs_funtion_grid_g

0xe85f,	// (0x0001df78) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe85f,	// (0x0001df78) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe874,	// (0x0001df8d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe874,	// (0x0001df8d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1a,	// (0x0001f433) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1a,	// (0x0001f433) cell_fep_china_hwr2_fs_funtion_grid_t

0x9209,	// (0x00018922) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9211,	// (0x0001892a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9219,	// (0x00018932) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1f,	// (0x0001f438) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9221,	// (0x0001893a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9221,	// (0x0001893a) cell_fep_china_hwr2_fs_candidate_grid

0x923a,	// (0x00018953) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9242,	// (0x0001895b) popup_fep_china_hwr2_fs_candidate_grid_g21

0x76e1,	// (0x00016dfa) cell_fep_china_hwr2_fs_candidate_grid_g1

0x76e1,	// (0x00016dfa) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb33,	// (0x0001f24c) cell_fep_china_hwr2_fs_candidate_grid_g

0x924a,	// (0x00018963) cell_fep_china_hwr2_fs_candidate_grid_t1

0x473f,	// (0x00013e58) clock_nsta_pane_cp_24_ParamLimits

0x473f,	// (0x00013e58) clock_nsta_pane_cp_24

0x47bd,	// (0x00013ed6) indicator_nsta_pane_cp_24_ParamLimits

0x47bd,	// (0x00013ed6) indicator_nsta_pane_cp_24

0x5974,	// (0x0001508d) heading_pane_g1

0x0001,

0xf8c1,	// (0x0001efda) heading_pane_g

0x64aa,	// (0x00015bc3) grid_sct_catagory_button_pane

0x64da,	// (0x00015bf3) scroll_pane_cp5_ParamLimits

0x7284,	// (0x0001699d) button_value_adjust_pane_cp5_ParamLimits

0x7284,	// (0x0001699d) button_value_adjust_pane_cp5

0x7380,	// (0x00016a99) form2_midp_time_pane_ParamLimits

0x9258,	// (0x00018971) cell_sct_catagory_button_pane_ParamLimits

0x9258,	// (0x00018971) cell_sct_catagory_button_pane

0x76a6,	// (0x00016dbf) bg_button_pane_cp01_ParamLimits

0x76a6,	// (0x00016dbf) bg_button_pane_cp01

0x76e1,	// (0x00016dfa) cell_sct_catagory_button_pane_g1

0xbf77,	// (0x0001b690) popup_tb_extension_window

0xe890,	// (0x0001dfa9) aid_size_cell_ext_ParamLimits

0xe890,	// (0x0001dfa9) aid_size_cell_ext

0x2c4c,	// (0x00012365) bg_tb_trans_pane_cp1_ParamLimits

0x2c4c,	// (0x00012365) bg_tb_trans_pane_cp1

0xe8b6,	// (0x0001dfcf) grid_tb_ext_pane_ParamLimits

0xe8b6,	// (0x0001dfcf) grid_tb_ext_pane

0xe8f1,	// (0x0001e00a) cell_tb_ext_pane_ParamLimits

0xe8f1,	// (0x0001e00a) cell_tb_ext_pane

0xe919,	// (0x0001e032) cell_tb_ext_pane_g1_ParamLimits

0xe919,	// (0x0001e032) cell_tb_ext_pane_g1

0x92ec,	// (0x00018a05) cell_tb_ext_pane_t1

0x28f5,	// (0x0001200e) list_highlight_pane_cp11_ParamLimits

0x28f5,	// (0x0001200e) list_highlight_pane_cp11

0xb74a,	// (0x0001ae63) popup_uni_indicator_window_ParamLimits

0xb74a,	// (0x0001ae63) popup_uni_indicator_window

0x3456,	// (0x00012b6f) bg_popup_sub_pane_cp14

0x9307,	// (0x00018a20) list_uniindi_pane

0x9313,	// (0x00018a2c) uniindi_top_pane

0x28f5,	// (0x0001200e) bg_uniindi_top_pane

0x9332,	// (0x00018a4b) uniindi_top_pane_g1

0x9348,	// (0x00018a61) uniindi_top_pane_g2

0x0003,

0xfd26,	// (0x0001f43f) uniindi_top_pane_g

0x9372,	// (0x00018a8b) uniindi_top_pane_t1

0x939c,	// (0x00018ab5) list_single_uniindi_pane_ParamLimits

0x939c,	// (0x00018ab5) list_single_uniindi_pane

0x76e1,	// (0x00016dfa) bg_uniindi_top_pane_g1

0x93af,	// (0x00018ac8) list_single_uniindi_pane_g1

0x93c2,	// (0x00018adb) list_single_uniindi_pane_t1

0x0166,	// (0x0000f87f) control_bg_pane

0x93e7,	// (0x00018b00) bg_sctrl_sk_pane_cp1

0x93f0,	// (0x00018b09) bg_sctrl_sk_pane_cp2

0x93f9,	// (0x00018b12) control_bg_pane_g1

0x9402,	// (0x00018b1b) control_bg_pane_g2

0x0001,

0xfd2f,	// (0x0001f448) control_bg_pane_g

0x70ce,	// (0x000167e7) cell_indicator_nsta_pane_g1_ParamLimits

0xddb4,	// (0x0001d4cd) cell_indicator_nsta_pane_g2_ParamLimits

0xfa97,	// (0x0001f1b0) cell_indicator_nsta_pane_g_ParamLimits

0x7408,	// (0x00016b21) form2_midp_time_pane_t1_ParamLimits

0x1500,	// (0x00010c19) main_idle_act4_pane_ParamLimits

0x1500,	// (0x00010c19) main_idle_act4_pane

0xbf77,	// (0x0001b690) popup_tb_extension_window_ParamLimits

0xe8d8,	// (0x0001dff1) tb_ext_find_pane_ParamLimits

0xe8d8,	// (0x0001dff1) tb_ext_find_pane

0x940b,	// (0x00018b24) ai_gene_pane_1_cp1

0x442c,	// (0x00013b45) ai_gene_pane_2_cp1

0x9413,	// (0x00018b2c) list_single_idle_plugin_calendar_pane

0x941c,	// (0x00018b35) list_single_idle_plugin_notification_pane

0x9425,	// (0x00018b3e) list_single_idle_plugin_player_pane

0xe936,	// (0x0001e04f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe936,	// (0x0001e04f) list_single_idle_plugin_shortcut_pane

0xe95e,	// (0x0001e077) main_idle_act4_pane_t1

0xe974,	// (0x0001e08d) main_idle_act4_pane_t2

0x0001,

0xfd34,	// (0x0001f44d) main_idle_act4_pane_t

0xe98a,	// (0x0001e0a3) middle_sk_idle_act4_pane_ParamLimits

0xe98a,	// (0x0001e0a3) middle_sk_idle_act4_pane

0xe9a6,	// (0x0001e0bf) popup_clock_digital_analogue_window_cp2

0xe9ce,	// (0x0001e0e7) shortcut_wheel_idle_act4_pane_ParamLimits

0xe9ce,	// (0x0001e0e7) shortcut_wheel_idle_act4_pane

0x76e1,	// (0x00016dfa) shortcut_wheel_idle_act4_pane_g1

0x76e1,	// (0x00016dfa) shortcut_wheel_idle_act4_pane_g2

0x76e1,	// (0x00016dfa) shortcut_wheel_idle_act4_pane_g3

0x76e1,	// (0x00016dfa) shortcut_wheel_idle_act4_pane_g4

0x76e1,	// (0x00016dfa) shortcut_wheel_idle_act4_pane_g5

0x94b8,	// (0x00018bd1) shortcut_wheel_idle_act4_pane_g6

0x94c0,	// (0x00018bd9) shortcut_wheel_idle_act4_pane_g7

0x94c8,	// (0x00018be1) shortcut_wheel_idle_act4_pane_g8

0x94d0,	// (0x00018be9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd39,	// (0x0001f452) shortcut_wheel_idle_act4_pane_g

0xd396,	// (0x0001caaf) middle_sk_idle_act4_pane_g1_ParamLimits

0xd396,	// (0x0001caaf) middle_sk_idle_act4_pane_g1

0xea4b,	// (0x0001e164) middle_sk_idle_act4_pane_g2_ParamLimits

0xea4b,	// (0x0001e164) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5c,	// (0x0001f475) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5c,	// (0x0001f475) middle_sk_idle_act4_pane_g

0xea63,	// (0x0001e17c) middle_sk_idle_act4_pane_t1_ParamLimits

0xea63,	// (0x0001e17c) middle_sk_idle_act4_pane_t1

0xea92,	// (0x0001e1ab) grid_ai_shortcut_pane_ParamLimits

0xea92,	// (0x0001e1ab) grid_ai_shortcut_pane

0xeaaf,	// (0x0001e1c8) list_highlight_pane_cp16_ParamLimits

0xeaaf,	// (0x0001e1c8) list_highlight_pane_cp16

0xeabc,	// (0x0001e1d5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeabc,	// (0x0001e1d5) list_single_idle_plugin_shortcut_pane_g1

0xeac8,	// (0x0001e1e1) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeac8,	// (0x0001e1e1) list_single_idle_plugin_shortcut_pane_g2

0xeae4,	// (0x0001e1fd) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeae4,	// (0x0001e1fd) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd61,	// (0x0001f47a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd61,	// (0x0001f47a) list_single_idle_plugin_shortcut_pane_g

0xeaf9,	// (0x0001e212) cell_ai_shortcut_pane_ParamLimits

0xeaf9,	// (0x0001e212) cell_ai_shortcut_pane

0xeb0f,	// (0x0001e228) cell_ai_shortcut_pane_g1_ParamLimits

0xeb0f,	// (0x0001e228) cell_ai_shortcut_pane_g1

0x940b,	// (0x00018b24) ai_gene_pane_1_cp2

0x9600,	// (0x00018d19) ai_gene_pane_2_cp2

0x9608,	// (0x00018d21) list_highlight_pane_cp15

0x9611,	// (0x00018d2a) list_single_idle_plugin_calendar_pane_g1

0x9608,	// (0x00018d21) list_highlight_pane_cp17

0x9619,	// (0x00018d32) list_single_idle_plugin_calendar_pane_g1_copy1

0x9621,	// (0x00018d3a) list_single_idle_plugin_player_pane_g1

0x6703,	// (0x00015e1c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd68,	// (0x0001f481) list_single_idle_plugin_player_pane_g

0x9629,	// (0x00018d42) list_single_idle_plugin_player_pane_t1

0x9637,	// (0x00018d50) list_single_idle_plugin_player_pane_t2

0x9645,	// (0x00018d5e) list_single_idle_plugin_player_pane_t3

0x9653,	// (0x00018d6c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6d,	// (0x0001f486) list_single_idle_plugin_player_pane_t

0x9661,	// (0x00018d7a) wait_bar_pane_cp15

0x9669,	// (0x00018d82) grid_ai_notification_pane

0x6703,	// (0x00015e1c) list_single_idle_plugin_notification_pane_g1

0xeb31,	// (0x0001e24a) cell_ai_notification_pane_ParamLimits

0xeb31,	// (0x0001e24a) cell_ai_notification_pane

0x967f,	// (0x00018d98) cell_ai_notification_pane_g1

0x9687,	// (0x00018da0) cell_ai_notification_pane_t1

0xeb3e,	// (0x0001e257) tb_ext_find_button_pane

0xeb46,	// (0x0001e25f) tb_ext_find_pane_g1

0xeb4e,	// (0x0001e267) tb_ext_find_pane_t1

0x3c4f,	// (0x00013368) tb_ext_find_button_pane_g1

0x96b3,	// (0x00018dcc) tb_ext_find_button_pane_g2

0x0001,

0xfd76,	// (0x0001f48f) tb_ext_find_button_pane_g

0xe95e,	// (0x0001e077) main_idle_act4_pane_t1_ParamLimits

0xe974,	// (0x0001e08d) main_idle_act4_pane_t2_ParamLimits

0xfd34,	// (0x0001f44d) main_idle_act4_pane_t_ParamLimits

0xe9a6,	// (0x0001e0bf) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe9be,	// (0x0001e0d7) sat_plugin_idle_act4_pane_ParamLimits

0xe9be,	// (0x0001e0d7) sat_plugin_idle_act4_pane

0xeb5c,	// (0x0001e275) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb5c,	// (0x0001e275) sat_plugin_idle_act4_pane_t1

0xeb74,	// (0x0001e28d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb74,	// (0x0001e28d) sat_plugin_idle_act4_pane_t2

0xeb8c,	// (0x0001e2a5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb8c,	// (0x0001e2a5) sat_plugin_idle_act4_pane_t3

0xeba4,	// (0x0001e2bd) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeba4,	// (0x0001e2bd) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7b,	// (0x0001f494) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7b,	// (0x0001f494) sat_plugin_idle_act4_pane_t

0x022b,	// (0x0000f944) popup_battery_window_ParamLimits

0x022b,	// (0x0000f944) popup_battery_window

0x28f5,	// (0x0001200e) bg_popup_sub_pane_cp25_ParamLimits

0x28f5,	// (0x0001200e) bg_popup_sub_pane_cp25

0x9708,	// (0x00018e21) popup_battery_window_g1_ParamLimits

0x9708,	// (0x00018e21) popup_battery_window_g1

0x9714,	// (0x00018e2d) popup_battery_window_t1_ParamLimits

0x9714,	// (0x00018e2d) popup_battery_window_t1

0x9726,	// (0x00018e3f) popup_battery_window_t2_ParamLimits

0x9726,	// (0x00018e3f) popup_battery_window_t2

0x0001,

0xfd84,	// (0x0001f49d) popup_battery_window_t_ParamLimits

0xfd84,	// (0x0001f49d) popup_battery_window_t

0xd21d,	// (0x0001c936) midp_canvas_pane_ParamLimits

0xd27a,	// (0x0001c993) midp_keypad_pane_ParamLimits

0xd27a,	// (0x0001c993) midp_keypad_pane

0x4637,	// (0x00013d50) main_midp_pane_ParamLimits

0x7148,	// (0x00016861) signal_pane_g2_cp_ParamLimits

0xebbc,	// (0x0001e2d5) aid_size_cell_midp_keypad_ParamLimits

0xebbc,	// (0x0001e2d5) aid_size_cell_midp_keypad

0xebda,	// (0x0001e2f3) midp_keyp_game_grid_pane_ParamLimits

0xebda,	// (0x0001e2f3) midp_keyp_game_grid_pane

0xec01,	// (0x0001e31a) midp_keyp_rocker_pane_ParamLimits

0xec01,	// (0x0001e31a) midp_keyp_rocker_pane

0xec52,	// (0x0001e36b) midp_keyp_sk_left_pane_ParamLimits

0xec52,	// (0x0001e36b) midp_keyp_sk_left_pane

0xeca6,	// (0x0001e3bf) midp_keyp_sk_right_pane_ParamLimits

0xeca6,	// (0x0001e3bf) midp_keyp_sk_right_pane

0x255e,	// (0x00011c77) bg_button_pane_cp03

0xecfa,	// (0x0001e413) midp_keyp_sk_left_pane_g1

0x255e,	// (0x00011c77) bg_button_pane_cp04

0xecfa,	// (0x0001e413) midp_keyp_sk_right_pane_g1

0x76e1,	// (0x00016dfa) midp_keyp_rocker_pane_g1

0xed03,	// (0x0001e41c) keyp_game_cell_pane_ParamLimits

0xed03,	// (0x0001e41c) keyp_game_cell_pane

0x255e,	// (0x00011c77) bg_button_pane_cp02

0xed27,	// (0x0001e440) keyp_game_cell_pane_g1

0xb6e5,	// (0x0001adfe) popup_fep_vkb2_window_ParamLimits

0xb6e5,	// (0x0001adfe) popup_fep_vkb2_window

0xc175,	// (0x0001b88e) aid_size_cell_vkb2_ParamLimits

0xc175,	// (0x0001b88e) aid_size_cell_vkb2

0xc1ab,	// (0x0001b8c4) popup_fep_vkb2_window_g1_ParamLimits

0xc1ab,	// (0x0001b8c4) popup_fep_vkb2_window_g1

0xc1fb,	// (0x0001b914) vkb2_area_bottom_pane_ParamLimits

0xc1fb,	// (0x0001b914) vkb2_area_bottom_pane

0xc24f,	// (0x0001b968) vkb2_area_keypad_pane_ParamLimits

0xc24f,	// (0x0001b968) vkb2_area_keypad_pane

0xc297,	// (0x0001b9b0) vkb2_area_top_pane_ParamLimits

0xc297,	// (0x0001b9b0) vkb2_area_top_pane

0xc31d,	// (0x0001ba36) vkb2_top_entry_pane_ParamLimits

0xc31d,	// (0x0001ba36) vkb2_top_entry_pane

0xc34a,	// (0x0001ba63) vkb2_top_grid_left_pane_ParamLimits

0xc34a,	// (0x0001ba63) vkb2_top_grid_left_pane

0xc36a,	// (0x0001ba83) vkb2_top_grid_right_pane_ParamLimits

0xc36a,	// (0x0001ba83) vkb2_top_grid_right_pane

0x1c34,	// (0x0001134d) vkb2_cell_keypad_pane_ParamLimits

0x1c34,	// (0x0001134d) vkb2_cell_keypad_pane

0xc3b0,	// (0x0001bac9) vkb2_area_bottom_grid_pane_ParamLimits

0xc3b0,	// (0x0001bac9) vkb2_area_bottom_grid_pane

0xc3da,	// (0x0001baf3) vkb2_area_bottom_pane_g1_ParamLimits

0xc3da,	// (0x0001baf3) vkb2_area_bottom_pane_g1

0xc400,	// (0x0001bb19) vkb2_area_bottom_pane_g2_ParamLimits

0xc400,	// (0x0001bb19) vkb2_area_bottom_pane_g2

0xc431,	// (0x0001bb4a) vkb2_area_bottom_pane_g3_ParamLimits

0xc431,	// (0x0001bb4a) vkb2_area_bottom_pane_g3

0x0002,

0xfd89,	// (0x0001f4a2) vkb2_area_bottom_pane_g_ParamLimits

0xfd89,	// (0x0001f4a2) vkb2_area_bottom_pane_g

0x1dde,	// (0x000114f7) vkb2_top_cell_left_pane_ParamLimits

0x1dde,	// (0x000114f7) vkb2_top_cell_left_pane

0xed3d,	// (0x0001e456) vkb2_top_entry_pane_g1_ParamLimits

0xed3d,	// (0x0001e456) vkb2_top_entry_pane_g1

0xed4b,	// (0x0001e464) vkb2_top_entry_pane_t1_ParamLimits

0xed4b,	// (0x0001e464) vkb2_top_entry_pane_t1

0x98f8,	// (0x00019011) vkb2_top_entry_pane_t2_ParamLimits

0x98f8,	// (0x00019011) vkb2_top_entry_pane_t2

0x992a,	// (0x00019043) vkb2_top_entry_pane_t3_ParamLimits

0x992a,	// (0x00019043) vkb2_top_entry_pane_t3

0x0002,

0xfd90,	// (0x0001f4a9) vkb2_top_entry_pane_t_ParamLimits

0xfd90,	// (0x0001f4a9) vkb2_top_entry_pane_t

0xc49b,	// (0x0001bbb4) vkb2_top_grid_right_pane_g1_ParamLimits

0xc49b,	// (0x0001bbb4) vkb2_top_grid_right_pane_g1

0x1e41,	// (0x0001155a) vkb2_top_grid_right_pane_g2_ParamLimits

0x1e41,	// (0x0001155a) vkb2_top_grid_right_pane_g2

0x1e59,	// (0x00011572) vkb2_top_grid_right_pane_g3_ParamLimits

0x1e59,	// (0x00011572) vkb2_top_grid_right_pane_g3

0xc4b1,	// (0x0001bbca) vkb2_top_grid_right_pane_g4_ParamLimits

0xc4b1,	// (0x0001bbca) vkb2_top_grid_right_pane_g4

0x0003,

0xfd97,	// (0x0001f4b0) vkb2_top_grid_right_pane_g_ParamLimits

0xfd97,	// (0x0001f4b0) vkb2_top_grid_right_pane_g

0x1e87,	// (0x000115a0) vkb2_top_cell_left_pane_g1

0x1e9e,	// (0x000115b7) vkb2_cell_keypad_pane_g1_ParamLimits

0x1e9e,	// (0x000115b7) vkb2_cell_keypad_pane_g1

0x994e,	// (0x00019067) vkb2_cell_keypad_pane_t1_ParamLimits

0x994e,	// (0x00019067) vkb2_cell_keypad_pane_t1

0x1eac,	// (0x000115c5) vkb2_cell_bottom_grid_pane_ParamLimits

0x1eac,	// (0x000115c5) vkb2_cell_bottom_grid_pane

0x1ee5,	// (0x000115fe) vkb2_cell_bottom_grid_pane_g1

0xe9ef,	// (0x0001e108) aid_call2_pane_cp02

0xe9f7,	// (0x0001e110) aid_call_pane_cp02

0xe9ff,	// (0x0001e118) clock_digital_number_pane_cp10

0xea07,	// (0x0001e120) clock_digital_number_pane_cp11

0xea0f,	// (0x0001e128) clock_digital_number_pane_cp12

0xea17,	// (0x0001e130) clock_digital_number_pane_cp13

0xea1f,	// (0x0001e138) clock_digital_separator_pane_cp10

0x3c4f,	// (0x00013368) popup_clock_digital_analogue_window_cp2_g1

0x3c4f,	// (0x00013368) popup_clock_digital_analogue_window_cp2_g2

0xea27,	// (0x0001e140) popup_clock_digital_analogue_window_cp2_g3

0x3c4f,	// (0x00013368) popup_clock_digital_analogue_window_cp2_g4

0xea27,	// (0x0001e140) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4c,	// (0x0001f465) popup_clock_digital_analogue_window_cp2_g

0xea2f,	// (0x0001e148) popup_clock_digital_analogue_window_cp2_t1

0xea3d,	// (0x0001e156) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd57,	// (0x0001f470) popup_clock_digital_analogue_window_cp2_t

0x76e1,	// (0x00016dfa) clock_digital_number_pane_cp10_g1

0x76e1,	// (0x00016dfa) clock_digital_number_pane_cp10_g2

0x0001,

0xfb33,	// (0x0001f24c) clock_digital_number_pane_cp10_g

0x76e1,	// (0x00016dfa) clock_digital_separator_pane_cp10_g1

0x76e1,	// (0x00016dfa) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb33,	// (0x0001f24c) clock_digital_separator_pane_cp10_g

0x9354,	// (0x00018a6d) uniindi_top_pane_g3

0x9365,	// (0x00018a7e) uniindi_top_pane_g4

0x1cbf,	// (0x000113d8) vkb2_row_keypad_pane_ParamLimits

0x1cbf,	// (0x000113d8) vkb2_row_keypad_pane

0x1f01,	// (0x0001161a) vkb2_cell_t_keypad_pane_ParamLimits

0x1f01,	// (0x0001161a) vkb2_cell_t_keypad_pane

0x1f11,	// (0x0001162a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1f11,	// (0x0001162a) vkb2_cell_t_keypad_pane_cp08

0x1f24,	// (0x0001163d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1f24,	// (0x0001163d) vkb2_cell_t_keypad_pane_cp09

0x1f38,	// (0x00011651) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1f38,	// (0x00011651) vkb2_cell_t_keypad_pane_cp01

0x1f49,	// (0x00011662) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1f49,	// (0x00011662) vkb2_cell_t_keypad_pane_cp02

0x1f5a,	// (0x00011673) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1f5a,	// (0x00011673) vkb2_cell_t_keypad_pane_cp03

0x1f6b,	// (0x00011684) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1f6b,	// (0x00011684) vkb2_cell_t_keypad_pane_cp04

0x1f7c,	// (0x00011695) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1f7c,	// (0x00011695) vkb2_cell_t_keypad_pane_cp05

0x1f8d,	// (0x000116a6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1f8d,	// (0x000116a6) vkb2_cell_t_keypad_pane_cp06

0x1f9e,	// (0x000116b7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1f9e,	// (0x000116b7) vkb2_cell_t_keypad_pane_cp07

0x1faf,	// (0x000116c8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1faf,	// (0x000116c8) vkb2_cell_t_keypad_pane_cp10

0x1765,	// (0x00010e7e) vkb2_cell_t_keypad_pane_g1

0x9965,	// (0x0001907e) vkb2_cell_t_keypad_pane_t1

0x0166,	// (0x0000f87f) popup_grid_graphic2_window

0xed84,	// (0x0001e49d) aid_size_cell_graphic2_ParamLimits

0xed84,	// (0x0001e49d) aid_size_cell_graphic2

0xedc2,	// (0x0001e4db) bg_popup_window_pane_cp21_ParamLimits

0xedc2,	// (0x0001e4db) bg_popup_window_pane_cp21

0xedd0,	// (0x0001e4e9) graphic2_pages_pane_ParamLimits

0xedd0,	// (0x0001e4e9) graphic2_pages_pane

0xee26,	// (0x0001e53f) grid_graphic2_control_pane_ParamLimits

0xee26,	// (0x0001e53f) grid_graphic2_control_pane

0xee6e,	// (0x0001e587) grid_graphic2_pane_ParamLimits

0xee6e,	// (0x0001e587) grid_graphic2_pane

0xeef5,	// (0x0001e60e) cell_graphic2_pane

0x0166,	// (0x0000f87f) main_comp_mode_pane

0x8b71,	// (0x0001828a) list_ai3_gene_pane_ParamLimits

0xe736,	// (0x0001de4f) bg_popup_window_pane_cp19_ParamLimits

0x8faa,	// (0x000186c3) bg_touch_area_indi_pane_ParamLimits

0x8faa,	// (0x000186c3) bg_touch_area_indi_pane

0x8fc0,	// (0x000186d9) bg_touch_area_indi_pane_cp01_ParamLimits

0x8fc0,	// (0x000186d9) bg_touch_area_indi_pane_cp01

0x8fd6,	// (0x000186ef) bg_touch_area_indi_pane_cp02_ParamLimits

0x8fd6,	// (0x000186ef) bg_touch_area_indi_pane_cp02

0x8fee,	// (0x00018707) bg_touch_area_indi_pane_cp03_ParamLimits

0x8fee,	// (0x00018707) bg_touch_area_indi_pane_cp03

0x9008,	// (0x00018721) popup_slider_window_g1_ParamLimits

0x9024,	// (0x0001873d) popup_slider_window_g2_ParamLimits

0x9040,	// (0x00018759) popup_slider_window_g3_ParamLimits

0xfce1,	// (0x0001f3fa) popup_slider_window_g_ParamLimits

0x909c,	// (0x000187b5) popup_slider_window_t1_ParamLimits

0x9110,	// (0x00018829) small_volume_slider_vertical_pane_ParamLimits

0xeef5,	// (0x0001e60e) cell_graphic2_pane_ParamLimits

0xef52,	// (0x0001e66b) bg_button_pane_cp10_ParamLimits

0xef52,	// (0x0001e66b) bg_button_pane_cp10

0xef65,	// (0x0001e67e) bg_button_pane_cp11_ParamLimits

0xef65,	// (0x0001e67e) bg_button_pane_cp11

0xef78,	// (0x0001e691) graphic2_pages_pane_g1_ParamLimits

0xef78,	// (0x0001e691) graphic2_pages_pane_g1

0xef93,	// (0x0001e6ac) graphic2_pages_pane_g2_ParamLimits

0xef93,	// (0x0001e6ac) graphic2_pages_pane_g2

0x0001,

0xfda5,	// (0x0001f4be) graphic2_pages_pane_g_ParamLimits

0xfda5,	// (0x0001f4be) graphic2_pages_pane_g

0xefab,	// (0x0001e6c4) graphic2_pages_pane_t1_ParamLimits

0xefab,	// (0x0001e6c4) graphic2_pages_pane_t1

0xefc3,	// (0x0001e6dc) cell_graphic2_control_pane_ParamLimits

0xefc3,	// (0x0001e6dc) cell_graphic2_control_pane

0xeff5,	// (0x0001e70e) cell_graphic2_pane_g1_ParamLimits

0xeff5,	// (0x0001e70e) cell_graphic2_pane_g1

0xd3a4,	// (0x0001cabd) cell_graphic2_pane_g2_ParamLimits

0xd3a4,	// (0x0001cabd) cell_graphic2_pane_g2

0xed30,	// (0x0001e449) cell_graphic2_pane_g3_ParamLimits

0xed30,	// (0x0001e449) cell_graphic2_pane_g3

0xd3b1,	// (0x0001caca) cell_graphic2_pane_g4_ParamLimits

0xd3b1,	// (0x0001caca) cell_graphic2_pane_g4

0xf002,	// (0x0001e71b) cell_graphic2_pane_g5_ParamLimits

0xf002,	// (0x0001e71b) cell_graphic2_pane_g5

0x0004,

0xfdaa,	// (0x0001f4c3) cell_graphic2_pane_g_ParamLimits

0xfdaa,	// (0x0001f4c3) cell_graphic2_pane_g

0xf022,	// (0x0001e73b) cell_graphic2_pane_t1_ParamLimits

0xf022,	// (0x0001e73b) cell_graphic2_pane_t1

0x5968,	// (0x00015081) grid_highlight_pane_cp11_ParamLimits

0x5968,	// (0x00015081) grid_highlight_pane_cp11

0x28f5,	// (0x0001200e) bg_button_pane_cp05

0xf057,	// (0x0001e770) cell_graphic2_control_pane_g1

0x76e1,	// (0x00016dfa) bg_touch_area_indi_pane_g1

0x9c35,	// (0x0001934e) aid_cmod_rocker_key_size

0x9c3f,	// (0x00019358) aid_cmode_itu_key_size

0x9c49,	// (0x00019362) main_cmode_video_pane

0x9c53,	// (0x0001936c) main_comp_mode_itu_pane

0x9c5f,	// (0x00019378) main_comp_mode_rocker_pane

0x9c6b,	// (0x00019384) cell_cmode_rocker_pane_ParamLimits

0x9c6b,	// (0x00019384) cell_cmode_rocker_pane

0x9c7d,	// (0x00019396) cell_cmode_itu_pane_ParamLimits

0x9c7d,	// (0x00019396) cell_cmode_itu_pane

0x3456,	// (0x00012b6f) bg_button_pane_cp06_ParamLimits

0x3456,	// (0x00012b6f) bg_button_pane_cp06

0x795f,	// (0x00017078) cell_cmode_rocker_pane_g1_ParamLimits

0x795f,	// (0x00017078) cell_cmode_rocker_pane_g1

0x91b4,	// (0x000188cd) cell_cmode_rocker_pane_g2_ParamLimits

0x91b4,	// (0x000188cd) cell_cmode_rocker_pane_g2

0x0001,

0xfdba,	// (0x0001f4d3) cell_cmode_rocker_pane_g_ParamLimits

0xfdba,	// (0x0001f4d3) cell_cmode_rocker_pane_g

0x255e,	// (0x00011c77) bg_button_pane_cp07

0x9c92,	// (0x000193ab) cell_cmode_itu_pane_g1

0x9c9b,	// (0x000193b4) cell_cmode_itu_pane_t1

0x9ca9,	// (0x000193c2) cell_cmode_itu_pane_t2

0x0001,

0xfdbf,	// (0x0001f4d8) cell_cmode_itu_pane_t

0x93d7,	// (0x00018af0) aid_touch_ctrl_left

0x93df,	// (0x00018af8) aid_touch_ctrl_right

0x255e,	// (0x00011c77) compa_mode_pane

0xf07d,	// (0x0001e796) aid_cmod_rocker_key_size_cp

0xf087,	// (0x0001e7a0) aid_cmode_itu_key_size_cp

0x9ccb,	// (0x000193e4) compa_mode_pane_g1

0x9cd3,	// (0x000193ec) compa_mode_pane_g2

0x9cdb,	// (0x000193f4) compa_mode_pane_g3

0x0002,

0xfdc4,	// (0x0001f4dd) compa_mode_pane_g

0xf091,	// (0x0001e7aa) main_comp_mode_itu_pane_cp

0xf099,	// (0x0001e7b2) main_comp_mode_rocker_pane_cp

0xf0a1,	// (0x0001e7ba) cell_cmode_itu_pane_cp_ParamLimits

0xf0a1,	// (0x0001e7ba) cell_cmode_itu_pane_cp

0xf0b6,	// (0x0001e7cf) cell_cmode_rocker_pane_cp_ParamLimits

0xf0b6,	// (0x0001e7cf) cell_cmode_rocker_pane_cp

0x3456,	// (0x00012b6f) bg_button_pane_cp06_cp_ParamLimits

0x3456,	// (0x00012b6f) bg_button_pane_cp06_cp

0x795f,	// (0x00017078) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x795f,	// (0x00017078) cell_cmode_rocker_pane_g1_cp

0x76e1,	// (0x00016dfa) cell_cmode_rocker_pane_g2_cp

0x255e,	// (0x00011c77) bg_button_pane_cp07_cp

0xf0c8,	// (0x0001e7e1) cell_cmode_itu_pane_g1_cp

0xf0d1,	// (0x0001e7ea) cell_cmode_itu_pane_t1_cp

0xf0d1,	// (0x0001e7ea) cell_cmode_itu_pane_t2_cp

0xdb6a,	// (0x0001d283) settings_code_pane_cp2

0x2652,	// (0x00011d6b) bg_popup_window_pane_cp3_ParamLimits

0x2acf,	// (0x000121e8) heading_pane_cp3_ParamLimits

0x2adb,	// (0x000121f4) listscroll_popup_graphic_pane_ParamLimits

0x150e,	// (0x00010c27) fep_hwr_aid_pane_ParamLimits

0x1985,	// (0x0001109e) aid_touch_sctrl_top_ParamLimits

0x19a0,	// (0x000110b9) sctrl_sk_top_pane_g1_ParamLimits

0x1765,	// (0x00010e7e) sctrl_sk_top_pane_g2_ParamLimits

0xfcfa,	// (0x0001f413) sctrl_sk_top_pane_g_ParamLimits

0x19ad,	// (0x000110c6) sctrl_sk_top_pane_t1_ParamLimits

0x1985,	// (0x0001109e) aid_touch_sctrl_bottom_ParamLimits

0x19ad,	// (0x000110c6) sctrl_sk_bottom_pane_t1_ParamLimits

0x9320,	// (0x00018a39) aid_area_touch_clock

0xc2df,	// (0x0001b9f8) aid_vkb2_area_top_pane_cell_ParamLimits

0xc2df,	// (0x0001b9f8) aid_vkb2_area_top_pane_cell

0xc38a,	// (0x0001baa3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc38a,	// (0x0001baa3) aid_vkb2_area_bottom_pane_cell

0x98b0,	// (0x00018fc9) popup_char_count_window

0x9d28,	// (0x00019441) popup_char_count_window_g1

0x9d31,	// (0x0001944a) popup_char_count_window_g2

0x9d3a,	// (0x00019453) popup_char_count_window_g3

0x0002,

0xfdcb,	// (0x0001f4e4) popup_char_count_window_g

0x9d43,	// (0x0001945c) popup_char_count_window_t1

0x1a5c,	// (0x00011175) popup_fep_char_preview_window_ParamLimits

0x1a5c,	// (0x00011175) popup_fep_char_preview_window

0xc2ff,	// (0x0001ba18) vkb2_top_candi_pane_ParamLimits

0xc2ff,	// (0x0001ba18) vkb2_top_candi_pane

0xf0df,	// (0x0001e7f8) cell_vkb2_top_candi_pane_ParamLimits

0xf0df,	// (0x0001e7f8) cell_vkb2_top_candi_pane

0x1fc4,	// (0x000116dd) bg_popup_fep_char_preview_window_ParamLimits

0x1fc4,	// (0x000116dd) bg_popup_fep_char_preview_window

0x1fd2,	// (0x000116eb) popup_fep_char_preview_window_t1_ParamLimits

0x1fd2,	// (0x000116eb) popup_fep_char_preview_window_t1

0x9d9e,	// (0x000194b7) bg_popup_fep_char_preview_window_g1

0x9da6,	// (0x000194bf) bg_popup_fep_char_preview_window_g2

0x9dae,	// (0x000194c7) bg_popup_fep_char_preview_window_g3

0x9db6,	// (0x000194cf) bg_popup_fep_char_preview_window_g4

0x9dbe,	// (0x000194d7) bg_popup_fep_char_preview_window_g5

0x200c,	// (0x00011725) bg_popup_fep_char_preview_window_g6

0x9dc6,	// (0x000194df) bg_popup_fep_char_preview_window_g7

0x9dce,	// (0x000194e7) bg_popup_fep_char_preview_window_g8

0x9dd6,	// (0x000194ef) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd2,	// (0x0001f4eb) bg_popup_fep_char_preview_window_g

0x1765,	// (0x00010e7e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1765,	// (0x00010e7e) cell_vkb2_top_candi_pane_g1

0x1773,	// (0x00010e8c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1773,	// (0x00010e8c) cell_vkb2_top_candi_pane_g2

0x9810,	// (0x00018f29) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9810,	// (0x00018f29) cell_vkb2_top_candi_pane_g3

0x2014,	// (0x0001172d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2014,	// (0x0001172d) cell_vkb2_top_candi_pane_g4

0x7fcf,	// (0x000176e8) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7fcf,	// (0x000176e8) cell_vkb2_top_candi_pane_g5

0x2035,	// (0x0001174e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2035,	// (0x0001174e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde5,	// (0x0001f4fe) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde5,	// (0x0001f4fe) cell_vkb2_top_candi_pane_g

0x2043,	// (0x0001175c) cell_vkb2_top_candi_pane_t1

0x136e,	// (0x00010a87) aid_size_touch_slider_mark_ParamLimits

0x136e,	// (0x00010a87) aid_size_touch_slider_mark

0xee0c,	// (0x0001e525) grid_graphic2_catg_pane_ParamLimits

0xee0c,	// (0x0001e525) grid_graphic2_catg_pane

0xeec8,	// (0x0001e5e1) popup_grid_graphic2_window_t1_ParamLimits

0xeec8,	// (0x0001e5e1) popup_grid_graphic2_window_t1

0xeede,	// (0x0001e5f7) popup_grid_graphic2_window_t2_ParamLimits

0xeede,	// (0x0001e5f7) popup_grid_graphic2_window_t2

0x0001,

0xfda0,	// (0x0001f4b9) popup_grid_graphic2_window_t_ParamLimits

0xfda0,	// (0x0001f4b9) popup_grid_graphic2_window_t

0x28f5,	// (0x0001200e) bg_button_pane_cp05_ParamLimits

0xf057,	// (0x0001e770) cell_graphic2_control_pane_g1_ParamLimits

0xf145,	// (0x0001e85e) cell_graphic2_catg_pane_ParamLimits

0xf145,	// (0x0001e85e) cell_graphic2_catg_pane

0x255e,	// (0x00011c77) bg_button_pane_cp12

0xf157,	// (0x0001e870) cell_graphic2_catg_pane_g1

0x92ec,	// (0x00018a05) cell_tb_ext_pane_t1_ParamLimits

0x1dfe,	// (0x00011517) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1dfe,	// (0x00011517) vkb2_top_cell_right_narrow_pane

0x1e16,	// (0x0001152f) vkb2_top_cell_right_wide_pane_ParamLimits

0x1e16,	// (0x0001152f) vkb2_top_cell_right_wide_pane

0x1500,	// (0x00010c19) bg_vkb2_func_pane_ParamLimits

0x1500,	// (0x00010c19) bg_vkb2_func_pane

0x1e87,	// (0x000115a0) vkb2_top_cell_left_pane_g1_ParamLimits

0x1500,	// (0x00010c19) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1500,	// (0x00010c19) bg_vkb2_fuc_pane_cp03

0x1ee5,	// (0x000115fe) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4b7f,	// (0x00014298) bg_vkb2_func_pane_g1

0x4b87,	// (0x000142a0) bg_vkb2_func_pane_g2

0x4b97,	// (0x000142b0) bg_vkb2_func_pane_g3

0x4b8f,	// (0x000142a8) bg_vkb2_func_pane_g4

0x4b9f,	// (0x000142b8) bg_vkb2_func_pane_g5

0x4ba7,	// (0x000142c0) bg_vkb2_func_pane_g6

0x4baf,	// (0x000142c8) bg_vkb2_func_pane_g7

0x4bb7,	// (0x000142d0) bg_vkb2_func_pane_g8

0x4b77,	// (0x00014290) bg_vkb2_func_pane_g9

0x0008,

0xfdf2,	// (0x0001f50b) bg_vkb2_func_pane_g

0x1500,	// (0x00010c19) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1500,	// (0x00010c19) bg_vkb2_fuc_pane_cp01

0x1e87,	// (0x000115a0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1e87,	// (0x000115a0) vkb2_top_cell_right_wide_pane_g1

0x1500,	// (0x00010c19) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1500,	// (0x00010c19) bg_vkb2_fuc_pane_cp02

0x1ee5,	// (0x000115fe) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1ee5,	// (0x000115fe) vkb2_top_cell_right_narrow_pane_g1

0xe676,	// (0x0001dd8f) aid_touch_area_decrease_ParamLimits

0xe676,	// (0x0001dd8f) aid_touch_area_decrease

0xe6aa,	// (0x0001ddc3) aid_touch_area_increase_ParamLimits

0xe6aa,	// (0x0001ddc3) aid_touch_area_increase

0xe6d2,	// (0x0001ddeb) aid_touch_area_mute_ParamLimits

0xe6d2,	// (0x0001ddeb) aid_touch_area_mute

0xe702,	// (0x0001de1b) aid_touch_area_slider_ParamLimits

0xe702,	// (0x0001de1b) aid_touch_area_slider

0xe742,	// (0x0001de5b) popup_slider_window_g4_ParamLimits

0xe742,	// (0x0001de5b) popup_slider_window_g4

0xe76a,	// (0x0001de83) popup_slider_window_g5_ParamLimits

0xe76a,	// (0x0001de83) popup_slider_window_g5

0xe79e,	// (0x0001deb7) popup_slider_window_g6_ParamLimits

0xe79e,	// (0x0001deb7) popup_slider_window_g6

0x90ca,	// (0x000187e3) popup_slider_window_t2_ParamLimits

0x90ca,	// (0x000187e3) popup_slider_window_t2

0x0001,

0xfcee,	// (0x0001f407) popup_slider_window_t_ParamLimits

0xfcee,	// (0x0001f407) popup_slider_window_t

0xe7ba,	// (0x0001ded3) slider_pane_ParamLimits

0xe7ba,	// (0x0001ded3) slider_pane

0x9df9,	// (0x00019512) slider_pane_g1_ParamLimits

0x9df9,	// (0x00019512) slider_pane_g1

0x9e0d,	// (0x00019526) slider_pane_g2_ParamLimits

0x9e0d,	// (0x00019526) slider_pane_g2

0x9e23,	// (0x0001953c) slider_pane_g3_ParamLimits

0x9e23,	// (0x0001953c) slider_pane_g3

0x0003,

0xfe05,	// (0x0001f51e) slider_pane_g_ParamLimits

0xfe05,	// (0x0001f51e) slider_pane_g

0xbfbf,	// (0x0001b6d8) popup_tb_float_extension_window_ParamLimits

0xbfbf,	// (0x0001b6d8) popup_tb_float_extension_window

0x9e4f,	// (0x00019568) aid_size_cell_tb_float_ext

0x255e,	// (0x00011c77) bg_popup_sub_window_cp28

0x9e5b,	// (0x00019574) grid_tb_float_ext_pane

0x9e65,	// (0x0001957e) cell_tb_float_ext_pane_ParamLimits

0x9e65,	// (0x0001957e) cell_tb_float_ext_pane

0x9e7f,	// (0x00019598) cell_tb_float_ext_pane_g1

0x9e88,	// (0x000195a1) grid_highlight_pane_cp12

0xc0e8,	// (0x0001b801) cell_last_hwr_side_pane_ParamLimits

0xc0e8,	// (0x0001b801) cell_last_hwr_side_pane

0x76e1,	// (0x00016dfa) cell_last_hwr_side_pane_g1

0x9e91,	// (0x000195aa) cell_last_hwr_side_pane_g2

0x0001,

0xfe0e,	// (0x0001f527) cell_last_hwr_side_pane_g

0xc466,	// (0x0001bb7f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc466,	// (0x0001bb7f) vkb2_area_bottom_space_btn_pane

0x1765,	// (0x00010e7e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9965,	// (0x0001907e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2043,	// (0x0001175c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2062,	// (0x0001177b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2062,	// (0x0001177b) vkb2_area_bottom_space_btn_pane_g1

0x209c,	// (0x000117b5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x209c,	// (0x000117b5) vkb2_area_bottom_space_btn_pane_g2

0x20d2,	// (0x000117eb) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x20d2,	// (0x000117eb) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe13,	// (0x0001f52c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe13,	// (0x0001f52c) vkb2_area_bottom_space_btn_pane_g

0x15c3,	// (0x00010cdc) cel_fep_hwr_func_pane_ParamLimits

0x15c3,	// (0x00010cdc) cel_fep_hwr_func_pane

0xc0bd,	// (0x0001b7d6) cell_hwr_side_button_pane_ParamLimits

0xc0bd,	// (0x0001b7d6) cell_hwr_side_button_pane

0x9320,	// (0x00018a39) aid_area_touch_clock_ParamLimits

0x28f5,	// (0x0001200e) bg_uniindi_top_pane_ParamLimits

0x9332,	// (0x00018a4b) uniindi_top_pane_g1_ParamLimits

0x9348,	// (0x00018a61) uniindi_top_pane_g2_ParamLimits

0x9354,	// (0x00018a6d) uniindi_top_pane_g3_ParamLimits

0x9365,	// (0x00018a7e) uniindi_top_pane_g4_ParamLimits

0xfd26,	// (0x0001f43f) uniindi_top_pane_g_ParamLimits

0x9372,	// (0x00018a8b) uniindi_top_pane_t1_ParamLimits

0x28f5,	// (0x0001200e) bg_vkb2_func_pane_cp01_ParamLimits

0x28f5,	// (0x0001200e) bg_vkb2_func_pane_cp01

0x9e9a,	// (0x000195b3) cel_fep_hwr_func_pane_g1_ParamLimits

0x9e9a,	// (0x000195b3) cel_fep_hwr_func_pane_g1

0x28f5,	// (0x0001200e) bg_vkb2_func_pane_cp02_ParamLimits

0x28f5,	// (0x0001200e) bg_vkb2_func_pane_cp02

0x9e9a,	// (0x000195b3) cell_hwr_side_button_pane_g1_ParamLimits

0x9e9a,	// (0x000195b3) cell_hwr_side_button_pane_g1

0x49ca,	// (0x000140e3) status_pane_g4_ParamLimits

0x49ca,	// (0x000140e3) status_pane_g4

0x49e4,	// (0x000140fd) status_pane_t1

0x741b,	// (0x00016b34) form2_midp_gauge_slider_cont_pane

0x7423,	// (0x00016b3c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdeb3,	// (0x0001d5cc) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdec5,	// (0x0001d5de) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae6,	// (0x0001f1ff) form2_midp_gauge_slider_pane_t_ParamLimits

0x7459,	// (0x00016b72) form2_midp_slider_pane_ParamLimits

0x1a1c,	// (0x00011135) aid_size_cell_func_vkb2_ParamLimits

0x1a1c,	// (0x00011135) aid_size_cell_func_vkb2

0x9e3b,	// (0x00019554) slider_pane_g4_ParamLimits

0x9e3b,	// (0x00019554) slider_pane_g4

0xc4c7,	// (0x0001bbe0) form2_midp_gauge_slider_pane_t2_cp01

0xc4d5,	// (0x0001bbee) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc4d5,	// (0x0001bbee) form2_midp_gauge_slider_pane_t3_cp01

0x2147,	// (0x00011860) form2_midp_slider_pane_cp01

0x255e,	// (0x00011c77) navi_smil_pane

0x9ed3,	// (0x000195ec) navi_smil_pane_g1

0x9edb,	// (0x000195f4) navi_smil_pane_t1

0x9ea8,	// (0x000195c1) form2_midp_slider_pane_g1

0x9eb1,	// (0x000195ca) form2_midp_slider_pane_g2

0x9eb9,	// (0x000195d2) form2_midp_slider_pane_g3

0x9ea8,	// (0x000195c1) form2_midp_slider_pane_g4

0xf160,	// (0x0001e879) form2_midp_slider_pane_g5

0x0004,

0xfe1c,	// (0x0001f535) form2_midp_slider_pane_g

0x210c,	// (0x00011825) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x210c,	// (0x00011825) vkb2_area_bottom_space_btn_pane_g4

0xd515,	// (0x0001cc2e) lc0_navi_pane_ParamLimits

0xd515,	// (0x0001cc2e) lc0_navi_pane

0xd57f,	// (0x0001cc98) lc0_stat_indi_pane_ParamLimits

0xd57f,	// (0x0001cc98) lc0_stat_indi_pane

0xd594,	// (0x0001ccad) ls0_title_pane_ParamLimits

0xd594,	// (0x0001ccad) ls0_title_pane

0x3456,	// (0x00012b6f) bg_popup_sub_pane_cp14_ParamLimits

0x9307,	// (0x00018a20) list_uniindi_pane_ParamLimits

0x9313,	// (0x00018a2c) uniindi_top_pane_ParamLimits

0x93af,	// (0x00018ac8) list_single_uniindi_pane_g1_ParamLimits

0x93c2,	// (0x00018adb) list_single_uniindi_pane_t1_ParamLimits

0xc4f2,	// (0x0001bc0b) lc0_stat_clock_pane_ParamLimits

0xc4f2,	// (0x0001bc0b) lc0_stat_clock_pane

0xf16b,	// (0x0001e884) lc0_stat_indi_pane_g1_ParamLimits

0xf16b,	// (0x0001e884) lc0_stat_indi_pane_g1

0xf178,	// (0x0001e891) lc0_stat_indi_pane_g2_ParamLimits

0xf178,	// (0x0001e891) lc0_stat_indi_pane_g2

0x0001,

0xfe27,	// (0x0001f540) lc0_stat_indi_pane_g_ParamLimits

0xfe27,	// (0x0001f540) lc0_stat_indi_pane_g

0xc4ff,	// (0x0001bc18) lc0_uni_indicator_pane_ParamLimits

0xc4ff,	// (0x0001bc18) lc0_uni_indicator_pane

0xf185,	// (0x0001e89e) ls0_title_pane_g1_ParamLimits

0xf185,	// (0x0001e89e) ls0_title_pane_g1

0xf199,	// (0x0001e8b2) ls0_title_pane_t1_ParamLimits

0xf199,	// (0x0001e8b2) ls0_title_pane_t1

0xc50c,	// (0x0001bc25) lc0_uni_indicator_pane_g1_ParamLimits

0xc50c,	// (0x0001bc25) lc0_uni_indicator_pane_g1

0x9f4d,	// (0x00019666) lc0_stat_clock_pane_t1

0x0166,	// (0x0000f87f) main_ai5_pane

0x9f5b,	// (0x00019674) ai5_sk_pane_ParamLimits

0x9f5b,	// (0x00019674) ai5_sk_pane

0xf1c7,	// (0x0001e8e0) cell_ai5_widget_pane_ParamLimits

0xf1c7,	// (0x0001e8e0) cell_ai5_widget_pane

0xa01e,	// (0x00019737) aid_size_cell_widget_grid

0xa034,	// (0x0001974d) bg_ai5_widget_pane_ParamLimits

0xa034,	// (0x0001974d) bg_ai5_widget_pane

0xa0a8,	// (0x000197c1) cell_ai5_widget_pane_g2

0xa0b8,	// (0x000197d1) cell_ai5_widget_pane_g3

0xa0cf,	// (0x000197e8) cell_ai5_widget_pane_g4

0xa0db,	// (0x000197f4) cell_ai5_widget_pane_g5

0xa0e7,	// (0x00019800) cell_ai5_widget_pane_g6

0xa0f3,	// (0x0001980c) cell_ai5_widget_pane_g7

0xa13b,	// (0x00019854) cell_ai5_widget_pane_t1_ParamLimits

0xa13b,	// (0x00019854) cell_ai5_widget_pane_t1

0xa158,	// (0x00019871) cell_ai5_widget_pane_t2_ParamLimits

0xa158,	// (0x00019871) cell_ai5_widget_pane_t2

0xa170,	// (0x00019889) cell_ai5_widget_pane_t3_ParamLimits

0xa170,	// (0x00019889) cell_ai5_widget_pane_t3

0xa188,	// (0x000198a1) cell_ai5_widget_pane_t4_ParamLimits

0xa188,	// (0x000198a1) cell_ai5_widget_pane_t4

0xa1a5,	// (0x000198be) cell_ai5_widget_pane_t5_ParamLimits

0xa1a5,	// (0x000198be) cell_ai5_widget_pane_t5

0xa1c4,	// (0x000198dd) cell_ai5_widget_pane_t6_ParamLimits

0xa1c4,	// (0x000198dd) cell_ai5_widget_pane_t6

0xa1d6,	// (0x000198ef) cell_ai5_widget_pane_t7_ParamLimits

0xa1d6,	// (0x000198ef) cell_ai5_widget_pane_t7

0xa1ef,	// (0x00019908) cell_ai5_widget_pane_t8_ParamLimits

0xa1ef,	// (0x00019908) cell_ai5_widget_pane_t8

0x0009,

0xfe41,	// (0x0001f55a) cell_ai5_widget_pane_t_ParamLimits

0xfe41,	// (0x0001f55a) cell_ai5_widget_pane_t

0xa243,	// (0x0001995c) grid_ai5_widget_pane

0x3456,	// (0x00012b6f) highlight_cell_ai5_widget_pane_ParamLimits

0x3456,	// (0x00012b6f) highlight_cell_ai5_widget_pane

0xf231,	// (0x0001e94a) ai5_sk_left_pane

0xf23b,	// (0x0001e954) ai5_sk_middle_pane

0xf245,	// (0x0001e95e) ai5_sk_right_pane

0xa278,	// (0x00019991) bg_ai5_widget_pane_g1_ParamLimits

0xa278,	// (0x00019991) bg_ai5_widget_pane_g1

0xa284,	// (0x0001999d) bg_ai5_widget_pane_g2_ParamLimits

0xa284,	// (0x0001999d) bg_ai5_widget_pane_g2

0xa290,	// (0x000199a9) bg_ai5_widget_pane_g3_ParamLimits

0xa290,	// (0x000199a9) bg_ai5_widget_pane_g3

0xa29c,	// (0x000199b5) bg_ai5_widget_pane_g4_ParamLimits

0xa29c,	// (0x000199b5) bg_ai5_widget_pane_g4

0xa2a8,	// (0x000199c1) bg_ai5_widget_pane_g5_ParamLimits

0xa2a8,	// (0x000199c1) bg_ai5_widget_pane_g5

0xa2b4,	// (0x000199cd) bg_ai5_widget_pane_g6_ParamLimits

0xa2b4,	// (0x000199cd) bg_ai5_widget_pane_g6

0xa2c0,	// (0x000199d9) bg_ai5_widget_pane_g7_ParamLimits

0xa2c0,	// (0x000199d9) bg_ai5_widget_pane_g7

0xa2cc,	// (0x000199e5) bg_ai5_widget_pane_g8_ParamLimits

0xa2cc,	// (0x000199e5) bg_ai5_widget_pane_g8

0xa2d8,	// (0x000199f1) bg_ai5_widget_pane_g9_ParamLimits

0xa2d8,	// (0x000199f1) bg_ai5_widget_pane_g9

0x0008,

0xfe56,	// (0x0001f56f) bg_ai5_widget_pane_g_ParamLimits

0xfe56,	// (0x0001f56f) bg_ai5_widget_pane_g

0xa30a,	// (0x00019a23) cell_shortcut_ai5_widget_pane_ParamLimits

0xa30a,	// (0x00019a23) cell_shortcut_ai5_widget_pane

0x42f1,	// (0x00013a0a) bg_cell_shortcut_ai5_widget_pane

0xa31b,	// (0x00019a34) cell_grid_ai5_widget_pane_g1

0x42f1,	// (0x00013a0a) highlight_cell_shortcut_ai5_widget_pane

0x4b7f,	// (0x00014298) ai5_sk_left_pane_g1

0xa324,	// (0x00019a3d) ai5_sk_left_pane_g2

0xa32c,	// (0x00019a45) ai5_sk_left_pane_g3

0xa334,	// (0x00019a4d) ai5_sk_left_pane_g4

0x0003,

0xfe69,	// (0x0001f582) ai5_sk_left_pane_g

0xa33c,	// (0x00019a55) ai5_sk_left_pane_t1

0x4b87,	// (0x000142a0) ai5_sk_right_pane_g1

0xa34a,	// (0x00019a63) ai5_sk_right_pane_g2

0xa352,	// (0x00019a6b) ai5_sk_right_pane_g3

0xa35a,	// (0x00019a73) ai5_sk_right_pane_g4

0x0003,

0xfe72,	// (0x0001f58b) ai5_sk_right_pane_g

0xa362,	// (0x00019a7b) ai5_sk_right_pane_t1

0x4b87,	// (0x000142a0) ai5_sk_middle_pane_g1

0x4b7f,	// (0x00014298) ai5_sk_middle_pane_g2

0x4b9f,	// (0x000142b8) ai5_sk_middle_pane_g3

0xa352,	// (0x00019a6b) ai5_sk_middle_pane_g4

0xa32c,	// (0x00019a45) ai5_sk_middle_pane_g5

0xa370,	// (0x00019a89) ai5_sk_middle_pane_g6

0xf24f,	// (0x0001e968) ai5_sk_middle_pane_g7

0x0006,

0xfe7b,	// (0x0001f594) ai5_sk_middle_pane_g

0xd401,	// (0x0001cb1a) aid_touch_area_size_lc0_ParamLimits

0xd401,	// (0x0001cb1a) aid_touch_area_size_lc0

0x1794,	// (0x00010ead) cell_hwr_candidate_pane_t1_ParamLimits

0x46a1,	// (0x00013dba) aid_touch_navi_pane

0xd68d,	// (0x0001cda6) status_dt_navi_pane_ParamLimits

0xd68d,	// (0x0001cda6) status_dt_navi_pane

0xd6a5,	// (0x0001cdbe) status_dt_sta_pane_ParamLimits

0xd6a5,	// (0x0001cdbe) status_dt_sta_pane

0xf257,	// (0x0001e970) dt_sta_controll_pane

0xf264,	// (0x0001e97d) dt_sta_indi_pane

0xf271,	// (0x0001e98a) dt_sta_title_pane

0x28f5,	// (0x0001200e) bg_dt_sta_indi_pane_ParamLimits

0x28f5,	// (0x0001200e) bg_dt_sta_indi_pane

0xf283,	// (0x0001e99c) dt_sta_battery_pane

0xf28b,	// (0x0001e9a4) dt_sta_indi_pane_g1

0xa3c2,	// (0x00019adb) dt_sta_indi_pane_g2

0xa3cb,	// (0x00019ae4) dt_sta_indi_pane_g3

0x0002,

0xfe8a,	// (0x0001f5a3) dt_sta_indi_pane_g

0xa3d4,	// (0x00019aed) dt_sta_signal_pane

0x3456,	// (0x00012b6f) bg_dt_sta_title_pane_ParamLimits

0x3456,	// (0x00012b6f) bg_dt_sta_title_pane

0xa3dd,	// (0x00019af6) dt_sta_title_pane_g1

0xa3e5,	// (0x00019afe) dt_sta_title_pane_t1_ParamLimits

0xa3e5,	// (0x00019afe) dt_sta_title_pane_t1

0x255e,	// (0x00011c77) bg_dt_sta_control_pane

0xf294,	// (0x0001e9ad) dt_sta_controll_pane_g1

0xa403,	// (0x00019b1c) bg_dt_sta_title_pane_g1

0xa40c,	// (0x00019b25) bg_dt_sta_title_pane_g2

0xa415,	// (0x00019b2e) bg_dt_sta_title_pane_g3

0x0002,

0xfe91,	// (0x0001f5aa) bg_dt_sta_title_pane_g

0x76e1,	// (0x00016dfa) bg_dt_sta_indi_pane_g1

0xa41e,	// (0x00019b37) dt_sta_signal_pane_g1

0xa426,	// (0x00019b3f) dt_sta_signal_pane_g2

0x0001,

0xfe98,	// (0x0001f5b1) dt_sta_signal_pane_g

0xa42e,	// (0x00019b47) dt_sta_battery_pane_g1

0xa437,	// (0x00019b50) dt_sta_battery_pane_t1

0x76e1,	// (0x00016dfa) bg_dt_sta_control_pane_g1

0x3d61,	// (0x0001347a) fep_china_uni_eep_pane

0x3d69,	// (0x00013482) fep_china_uni_entry_pane_ParamLimits

0x3d79,	// (0x00013492) popup_fep_china_uni_window_g1_ParamLimits

0x3d89,	// (0x000134a2) popup_fep_china_uni_window_g2_ParamLimits

0x3d89,	// (0x000134a2) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001ee31) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001ee31) popup_fep_china_uni_window_g

0xa446,	// (0x00019b5f) fep_china_uni_eep_pane_g1

0xa44e,	// (0x00019b67) fep_china_uni_eep_pane_t1

0x9eca,	// (0x000195e3) aid_touch_area_size_smil_player

0x47f1,	// (0x00013f0a) lc0_clock_pane

0x49d8,	// (0x000140f1) status_pane_g5_ParamLimits

0x49d8,	// (0x000140f1) status_pane_g5

0xbb41,	// (0x0001b25a) popup_keymap_window

0x4996,	// (0x000140af) status_icon_pane

0xa0b8,	// (0x000197d1) cell_ai5_widget_pane_g3_ParamLimits

0xa0cf,	// (0x000197e8) cell_ai5_widget_pane_g4_ParamLimits

0xa0db,	// (0x000197f4) cell_ai5_widget_pane_g5_ParamLimits

0xa0ff,	// (0x00019818) cell_ai5_widget_pane_g8_ParamLimits

0xa0ff,	// (0x00019818) cell_ai5_widget_pane_g8

0xa113,	// (0x0001982c) cell_ai5_widget_pane_g9_ParamLimits

0xa113,	// (0x0001982c) cell_ai5_widget_pane_g9

0xa127,	// (0x00019840) cell_ai5_widget_pane_g10_ParamLimits

0xa127,	// (0x00019840) cell_ai5_widget_pane_g10

0xa45d,	// (0x00019b76) status_icon_pane_g1

0x255e,	// (0x00011c77) bg_popup_sub_pane_cp13

0xa465,	// (0x00019b7e) popup_keymap_window_t1

0xd367,	// (0x0001ca80) control_pane_g6_ParamLimits

0xd367,	// (0x0001ca80) control_pane_g6

0xd374,	// (0x0001ca8d) control_pane_g7_ParamLimits

0xd374,	// (0x0001ca8d) control_pane_g7

0xd381,	// (0x0001ca9a) control_pane_g8_ParamLimits

0xd381,	// (0x0001ca9a) control_pane_g8

0xf257,	// (0x0001e970) dt_sta_controll_pane_ParamLimits

0xf264,	// (0x0001e97d) dt_sta_indi_pane_ParamLimits

0xf271,	// (0x0001e98a) dt_sta_title_pane_ParamLimits

0x2e13,	// (0x0001252c) aid_size_touch_scroll_bar_cale

0x023f,	// (0x0000f958) popup_discreet_window_ParamLimits

0x023f,	// (0x0000f958) popup_discreet_window

0xb72b,	// (0x0001ae44) popup_sk_window

0x52e8,	// (0x00014a01) bg_popup_sub_pane_cp28_ParamLimits

0x52e8,	// (0x00014a01) bg_popup_sub_pane_cp28

0xa473,	// (0x00019b8c) popup_discreet_window_g1_ParamLimits

0xa473,	// (0x00019b8c) popup_discreet_window_g1

0xa493,	// (0x00019bac) popup_discreet_window_t1_ParamLimits

0xa493,	// (0x00019bac) popup_discreet_window_t1

0xa4b1,	// (0x00019bca) popup_discreet_window_t2_ParamLimits

0xa4b1,	// (0x00019bca) popup_discreet_window_t2

0x0002,

0xfe9d,	// (0x0001f5b6) popup_discreet_window_t_ParamLimits

0xfe9d,	// (0x0001f5b6) popup_discreet_window_t

0x217e,	// (0x00011897) popup_sk_window_g1

0x2188,	// (0x000118a1) popup_sk_window_g2

0x0001,

0xfea4,	// (0x0001f5bd) popup_sk_window_g

0x2192,	// (0x000118ab) popup_sk_window_t1

0x21a0,	// (0x000118b9) popup_sk_window_t1_copy1

0xa0a8,	// (0x000197c1) cell_ai5_widget_pane_g2_ParamLimits

0xa201,	// (0x0001991a) cell_ai5_widget_pane_t9_ParamLimits

0xa201,	// (0x0001991a) cell_ai5_widget_pane_t9

0x255e,	// (0x00011c77) main_fep_fshwr2_pane

0xc533,	// (0x0001bc4c) aid_fshwr2_btn_pane

0xc544,	// (0x0001bc5d) aid_fshwr2_syb_pane

0xc555,	// (0x0001bc6e) aid_fshwr2_txt_pane

0xc561,	// (0x0001bc7a) fshwr2_func_candi_pane

0xc580,	// (0x0001bc99) fshwr2_hwr_syb_pane

0xc59b,	// (0x0001bcb4) fshwr2_icf_pane

0x0166,	// (0x0000f87f) fshwr2_icf_bg_pane

0x2220,	// (0x00011939) fshwr2_icf_pane_t1_ParamLimits

0x2220,	// (0x00011939) fshwr2_icf_pane_t1

0x3c4f,	// (0x00013368) fshwr2_func_candi_pane_g1

0xf29d,	// (0x0001e9b6) fshwr2_func_candi_row_pane_ParamLimits

0xf29d,	// (0x0001e9b6) fshwr2_func_candi_row_pane

0xc5c7,	// (0x0001bce0) cell_fshwr2_syb_pane_ParamLimits

0xc5c7,	// (0x0001bce0) cell_fshwr2_syb_pane

0x1765,	// (0x00010e7e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1765,	// (0x00010e7e) fshwr2_hwr_syb_pane_g1

0x0166,	// (0x0000f87f) bg_popup_call_pane_cp01

0xc5dd,	// (0x0001bcf6) fshwr2_func_candi_cell_pane_ParamLimits

0xc5dd,	// (0x0001bcf6) fshwr2_func_candi_cell_pane

0xf2b5,	// (0x0001e9ce) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf2b5,	// (0x0001e9ce) fshwr2_func_candi_cell_bg_pane

0xc612,	// (0x0001bd2b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc612,	// (0x0001bd2b) fshwr2_func_candi_cell_pane_g1

0xc641,	// (0x0001bd5a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc641,	// (0x0001bd5a) fshwr2_func_candi_cell_pane_t1

0x0166,	// (0x0000f87f) bg_button_pane_cp08

0xa51f,	// (0x00019c38) cell_fshwr2_syb_bg_pane

0xc654,	// (0x0001bd6d) cell_fshwr2_syb_bg_pane_g1

0xc65c,	// (0x0001bd75) cell_fshwr2_syb_bg_pane_t1

0x3456,	// (0x00012b6f) main_tmo_pane

0xd988,	// (0x0001d0a1) uni_indicator_pane_g1_ParamLimits

0xd99e,	// (0x0001d0b7) uni_indicator_pane_g2_ParamLimits

0xd9b4,	// (0x0001d0cd) uni_indicator_pane_g3_ParamLimits

0x5e43,	// (0x0001555c) uni_indicator_pane_g4_ParamLimits

0x5e43,	// (0x0001555c) uni_indicator_pane_g4

0x5e57,	// (0x00015570) uni_indicator_pane_g5_ParamLimits

0x5e57,	// (0x00015570) uni_indicator_pane_g5

0x5e57,	// (0x00015570) uni_indicator_pane_g6_ParamLimits

0x5e57,	// (0x00015570) uni_indicator_pane_g6

0xf917,	// (0x0001f030) uni_indicator_pane_g_ParamLimits

0xe652,	// (0x0001dd6b) popup_tmo_note_window_ParamLimits

0xe652,	// (0x0001dd6b) popup_tmo_note_window

0x19fe,	// (0x00011117) fshwr2_bg_pane

0xc632,	// (0x0001bd4b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc632,	// (0x0001bd4b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea9,	// (0x0001f5c2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea9,	// (0x0001f5c2) fshwr2_func_candi_cell_pane_g

0x174d,	// (0x00010e66) bg_popup_window_pane_cp01

0x22d5,	// (0x000119ee) bg_popup_window_pane_g1_cp01

0xa527,	// (0x00019c40) bg_popup_window_pane_cp22_ParamLimits

0xa527,	// (0x00019c40) bg_popup_window_pane_cp22

0xa535,	// (0x00019c4e) listscroll_tmo_link_pane_ParamLimits

0xa535,	// (0x00019c4e) listscroll_tmo_link_pane

0xa575,	// (0x00019c8e) popup_tmo_note_window_g1_ParamLimits

0xa575,	// (0x00019c8e) popup_tmo_note_window_g1

0xa582,	// (0x00019c9b) tmo_note_info_pane_ParamLimits

0xa582,	// (0x00019c9b) tmo_note_info_pane

0xf2c1,	// (0x0001e9da) list_tmo_note_info_pane_g1_ParamLimits

0xf2c1,	// (0x0001e9da) list_tmo_note_info_pane_g1

0xa5b3,	// (0x00019ccc) list_tmo_note_info_pane_g2_ParamLimits

0xa5b3,	// (0x00019ccc) list_tmo_note_info_pane_g2

0x0001,

0xfeae,	// (0x0001f5c7) list_tmo_note_info_pane_g_ParamLimits

0xfeae,	// (0x0001f5c7) list_tmo_note_info_pane_g

0xa5cf,	// (0x00019ce8) list_tmo_note_info_text_pane_ParamLimits

0xa5cf,	// (0x00019ce8) list_tmo_note_info_text_pane

0xa650,	// (0x00019d69) list_tmo_link_pane

0xa65d,	// (0x00019d76) scroll_pane_cp20

0xa66a,	// (0x00019d83) list_single_tmo_link_pane_ParamLimits

0xa66a,	// (0x00019d83) list_single_tmo_link_pane

0xa67a,	// (0x00019d93) list_single_tmo_link_pane_t1

0xa688,	// (0x00019da1) list_tmo_note_info_text_pane_t1_ParamLimits

0xa688,	// (0x00019da1) list_tmo_note_info_text_pane_t1

0xcf7e,	// (0x0001c697) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcf7e,	// (0x0001c697) aid_size_touch_scroll_bar_cp01

0xceae,	// (0x0001c5c7) aid_size_touch_slider_marker

0xb71b,	// (0x0001ae34) popup_settings_window_ParamLimits

0xb71b,	// (0x0001ae34) popup_settings_window

0x4651,	// (0x00013d6a) popup_candi_list_indi_window

0x46a1,	// (0x00013dba) aid_touch_navi_pane_ParamLimits

0x1959,	// (0x00011072) rs_clock_indi_pane

0x1962,	// (0x0001107b) sctrl_sk_bottom_pane_ParamLimits

0x1973,	// (0x0001108c) sctrl_sk_top_pane_ParamLimits

0x1a76,	// (0x0001118f) popup_fep_tooltip_window

0xa01e,	// (0x00019737) aid_size_cell_widget_grid_ParamLimits

0xa093,	// (0x000197ac) cell_ai5_widget_pane_g1_ParamLimits

0xa093,	// (0x000197ac) cell_ai5_widget_pane_g1

0xa0e7,	// (0x00019800) cell_ai5_widget_pane_g6_ParamLimits

0xa0f3,	// (0x0001980c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2c,	// (0x0001f545) cell_ai5_widget_pane_g_ParamLimits

0xfe2c,	// (0x0001f545) cell_ai5_widget_pane_g

0xa225,	// (0x0001993e) cell_ai5_widget_pane_t10_ParamLimits

0xa225,	// (0x0001993e) cell_ai5_widget_pane_t10

0xa243,	// (0x0001995c) grid_ai5_widget_pane_ParamLimits

0xa2e4,	// (0x000199fd) cell_contacts_ai5_widget_pane_ParamLimits

0xa2e4,	// (0x000199fd) cell_contacts_ai5_widget_pane

0xa4c6,	// (0x00019bdf) popup_discreet_window_t3_ParamLimits

0xa4c6,	// (0x00019bdf) popup_discreet_window_t3

0xc5b3,	// (0x0001bccc) popup_fshwr2_char_preview_window_ParamLimits

0xc5b3,	// (0x0001bccc) popup_fshwr2_char_preview_window

0xf2d8,	// (0x0001e9f1) tmo_note_info_pane_t1

0xf2ed,	// (0x0001ea06) tmo_note_info_pane_t2

0xf304,	// (0x0001ea1d) tmo_note_info_pane_t3

0xa62c,	// (0x00019d45) tmo_note_info_pane_t4

0xa63e,	// (0x00019d57) tmo_note_info_pane_t5

0x0004,

0xfeb3,	// (0x0001f5cc) tmo_note_info_pane_t

0xa650,	// (0x00019d69) list_tmo_link_pane_ParamLimits

0xa65d,	// (0x00019d76) scroll_pane_cp20_ParamLimits

0x0166,	// (0x0000f87f) bg_popup_fep_char_preview_window_cp01

0xa6a1,	// (0x00019dba) popup_fshwr2_char_preview_window_t1

0xa6af,	// (0x00019dc8) popup_candi_list_indi_window_g1

0xa6b8,	// (0x00019dd1) bg_cell_contacts_ai5_widget_pane

0xa6c4,	// (0x00019ddd) cell_contacts_ai5_widget_pane_g1

0x7f24,	// (0x0001763d) cell_contacts_ai5_widget_pane_g2

0xa6d9,	// (0x00019df2) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebe,	// (0x0001f5d7) cell_contacts_ai5_widget_pane_g

0xa6e5,	// (0x00019dfe) cell_contacts_ai5_widget_pane_t1

0x3456,	// (0x00012b6f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf37e,	// (0x0001ea97) settings_container_pane

0x42f1,	// (0x00013a0a) listscroll_set_pane_copy1

0x6ac2,	// (0x000161db) scroll_pane_cp121_copy1

0xa768,	// (0x00019e81) set_content_pane_copy1

0xf38a,	// (0x0001eaa3) aid_height_set_list_copy1_ParamLimits

0xf38a,	// (0x0001eaa3) aid_height_set_list_copy1

0x6077,	// (0x00015790) aid_size_parent_copy1_ParamLimits

0x6077,	// (0x00015790) aid_size_parent_copy1

0xf396,	// (0x0001eaaf) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf396,	// (0x0001eaaf) button_value_adjust_pane_cp6_copy1

0x4637,	// (0x00013d50) list_highlight_pane_cp2_copy1_ParamLimits

0x4637,	// (0x00013d50) list_highlight_pane_cp2_copy1

0xf3aa,	// (0x0001eac3) list_set_pane_copy1_ParamLimits

0xf3aa,	// (0x0001eac3) list_set_pane_copy1

0xf319,	// (0x0001ea32) main_pane_set_t1_copy1_ParamLimits

0xf319,	// (0x0001ea32) main_pane_set_t1_copy1

0xf353,	// (0x0001ea6c) main_pane_set_t2_copy1_ParamLimits

0xf353,	// (0x0001ea6c) main_pane_set_t2_copy1

0xf457,	// (0x0001eb70) main_pane_set_t3_copy1

0xf465,	// (0x0001eb7e) main_pane_set_t4_copy1

0xf372,	// (0x0001ea8b) set_content_pane_g1_copy1_ParamLimits

0xf372,	// (0x0001ea8b) set_content_pane_g1_copy1

0xf473,	// (0x0001eb8c) setting_code_pane_copy1

0xa861,	// (0x00019f7a) setting_slider_graphic_pane_copy1

0xa861,	// (0x00019f7a) setting_slider_pane_copy1

0xa861,	// (0x00019f7a) setting_text_pane_copy1

0xa861,	// (0x00019f7a) setting_volume_pane_copy1

0xf473,	// (0x0001eb8c) settings_code_pane_cp2_copy1

0xf47b,	// (0x0001eb94) settings_code_pane_cp_copy1_ParamLimits

0xf47b,	// (0x0001eb94) settings_code_pane_cp_copy1

0xc66b,	// (0x0001bd84) volume_set_pane_copy1

0xf48f,	// (0x0001eba8) volume_set_pane_g10_copy1

0xf497,	// (0x0001ebb0) volume_set_pane_g1_copy1

0xf49f,	// (0x0001ebb8) volume_set_pane_g2_copy1

0xf4a7,	// (0x0001ebc0) volume_set_pane_g3_copy1

0xf4af,	// (0x0001ebc8) volume_set_pane_g4_copy1

0xf4b7,	// (0x0001ebd0) volume_set_pane_g5_copy1

0xf4bf,	// (0x0001ebd8) volume_set_pane_g6_copy1

0xf4c7,	// (0x0001ebe0) volume_set_pane_g7_copy1

0xf4cf,	// (0x0001ebe8) volume_set_pane_g8_copy1

0xf4d7,	// (0x0001ebf0) volume_set_pane_g9_copy1

0x2652,	// (0x00011d6b) bg_set_opt_pane_cp_copy1_ParamLimits

0x2652,	// (0x00011d6b) bg_set_opt_pane_cp_copy1

0x22e6,	// (0x000119ff) setting_slider_pane_t1_copy1_ParamLimits

0x22e6,	// (0x000119ff) setting_slider_pane_t1_copy1

0xc673,	// (0x0001bd8c) setting_slider_pane_t2_copy1_ParamLimits

0xc673,	// (0x0001bd8c) setting_slider_pane_t2_copy1

0xc68d,	// (0x0001bda6) setting_slider_pane_t3_copy1_ParamLimits

0xc68d,	// (0x0001bda6) setting_slider_pane_t3_copy1

0xc6a5,	// (0x0001bdbe) slider_set_pane_copy1_ParamLimits

0xc6a5,	// (0x0001bdbe) slider_set_pane_copy1

0x357f,	// (0x00012c98) set_opt_bg_pane_g1_copy2

0x3587,	// (0x00012ca0) set_opt_bg_pane_g2_copy2

0xa8cd,	// (0x00019fe6) set_opt_bg_pane_g3_copy2

0x3597,	// (0x00012cb0) set_opt_bg_pane_g4_copy2

0x359f,	// (0x00012cb8) set_opt_bg_pane_g5_copy2

0x35a7,	// (0x00012cc0) set_opt_bg_pane_g6_copy2

0xf4df,	// (0x0001ebf8) set_opt_bg_pane_g7_copy2

0xa8df,	// (0x00019ff8) set_opt_bg_pane_g8_copy2

0xa8e9,	// (0x0001a002) set_opt_bg_pane_g9_copy2

0x234c,	// (0x00011a65) aid_size_touch_slider_mark_copy1_ParamLimits

0x234c,	// (0x00011a65) aid_size_touch_slider_mark_copy1

0xa8f3,	// (0x0001a00c) slider_set_pane_g1_copy1

0x2360,	// (0x00011a79) slider_set_pane_g2_copy1

0x138e,	// (0x00010aa7) slider_set_pane_g3_copy1_ParamLimits

0x138e,	// (0x00010aa7) slider_set_pane_g3_copy1

0x13a2,	// (0x00010abb) slider_set_pane_g4_copy1_ParamLimits

0x13a2,	// (0x00010abb) slider_set_pane_g4_copy1

0x13ba,	// (0x00010ad3) slider_set_pane_g5_copy1_ParamLimits

0x13ba,	// (0x00010ad3) slider_set_pane_g5_copy1

0x138e,	// (0x00010aa7) slider_set_pane_g6_copy1_ParamLimits

0x138e,	// (0x00010aa7) slider_set_pane_g6_copy1

0xc6bb,	// (0x0001bdd4) slider_set_pane_g7_copy1_ParamLimits

0xc6bb,	// (0x0001bdd4) slider_set_pane_g7_copy1

0x2572,	// (0x00011c8b) bg_set_opt_pane_cp2_copy1

0xa8fc,	// (0x0001a015) setting_slider_graphic_pane_g1_copy1

0xf4e7,	// (0x0001ec00) setting_slider_graphic_pane_t1_copy1

0xf4f7,	// (0x0001ec10) setting_slider_graphic_pane_t2_copy1

0xf507,	// (0x0001ec20) slider_set_pane_cp_copy1

0xa935,	// (0x0001a04e) input_focus_pane_cp1_copy1

0xa93e,	// (0x0001a057) list_set_text_pane_copy1

0xa946,	// (0x0001a05f) setting_text_pane_g1_copy1

0x26ab,	// (0x00011dc4) set_text_pane_t1_copy1

0xa935,	// (0x0001a04e) input_focus_pane_cp2_copy1

0xa946,	// (0x0001a05f) setting_code_pane_g1_copy1

0xf50f,	// (0x0001ec28) setting_code_pane_t1_copy1

0x68ec,	// (0x00016005) list_set_graphic_pane_copy1

0x2572,	// (0x00011c8b) bg_set_opt_pane_cp4_copy1

0xd1e2,	// (0x0001c8fb) list_set_graphic_pane_g1_copy1_ParamLimits

0xd1e2,	// (0x0001c8fb) list_set_graphic_pane_g1_copy1

0xf51d,	// (0x0001ec36) list_set_graphic_pane_g2_copy1

0xd1fa,	// (0x0001c913) list_set_graphic_pane_t1_copy1_ParamLimits

0xd1fa,	// (0x0001c913) list_set_graphic_pane_t1_copy1

0x76e1,	// (0x00016dfa) rs_clock_indi_pane_g1

0xa977,	// (0x0001a090) rs_clock_indi_pane_t1

0xa985,	// (0x0001a09e) rs_indi_pane

0xa98d,	// (0x0001a0a6) rs_indi_pane_g1

0xa996,	// (0x0001a0af) rs_indi_pane_g2

0xa99f,	// (0x0001a0b8) rs_indi_pane_g3

0x0002,

0xfec5,	// (0x0001f5de) rs_indi_pane_g

0x42f1,	// (0x00013a0a) bg_popup_preview_window_pane_cp03

0xa9a8,	// (0x0001a0c1) popup_fep_tooltip_window_t1

0x8559,	// (0x00017c72) popup_note2_window_g2_ParamLimits

0x8559,	// (0x00017c72) popup_note2_window_g2

0x0001,

0xfc5e,	// (0x0001f377) popup_note2_window_g_ParamLimits

0xfc5e,	// (0x0001f377) popup_note2_window_g

0x8b37,	// (0x00018250) bg_popup_sub_pane_cp11_ParamLimits

0x8b44,	// (0x0001825d) cell_ai3_links_pane_g1_ParamLimits

0x8b5b,	// (0x00018274) cell_ai3_links_pane_t1

0x26ab,	// (0x00011dc4) set_text_pane_t1_copy1_ParamLimits

0x4202,	// (0x0001391b) cell_graphic_popup_pane_cp2_ParamLimits

0x4202,	// (0x0001391b) cell_graphic_popup_pane_cp2

0xa9b6,	// (0x0001a0cf) cell_graphic_popup_pane_g1_cp2

0x2c26,	// (0x0001233f) cell_graphic_popup_pane_g2_cp2

0xa9be,	// (0x0001a0d7) cell_graphic_popup_pane_g3_cp2

0xa9c6,	// (0x0001a0df) cell_graphic_popup_pane_t2_cp2

0x2c37,	// (0x00012350) grid_highlight_pane_cp3_cp2

0x3970,	// (0x00013089) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3456,	// (0x00012b6f) main_tmo_pane_ParamLimits

0xe646,	// (0x0001dd5f) popup_tmo_big_image_note_window

0xa082,	// (0x0001979b) cell_ai5_widget_list_pane

0xa08a,	// (0x000197a3) cell_ai5_widget_lrg_icon_pane

0xf2d8,	// (0x0001e9f1) tmo_note_info_pane_t1_ParamLimits

0xf2ed,	// (0x0001ea06) tmo_note_info_pane_t2_ParamLimits

0xf304,	// (0x0001ea1d) tmo_note_info_pane_t3_ParamLimits

0xa62c,	// (0x00019d45) tmo_note_info_pane_t4_ParamLimits

0xa63e,	// (0x00019d57) tmo_note_info_pane_t5_ParamLimits

0xfeb3,	// (0x0001f5cc) tmo_note_info_pane_t_ParamLimits

0xf37e,	// (0x0001ea97) settings_container_pane_ParamLimits

0xa92d,	// (0x0001a046) indicator_popup_pane_cp5

0xa92d,	// (0x0001a046) indicator_popup_pane_cp6

0x68ec,	// (0x00016005) list_set_graphic_pane_copy1_ParamLimits

0x255e,	// (0x00011c77) bg_popup_window_pane_cp23

0xa9d4,	// (0x0001a0ed) popup_tmo_big_image_note_window_g1

0xa9de,	// (0x0001a0f7) popup_tmo_big_image_note_window_t1

0xa9ee,	// (0x0001a107) popup_tmo_big_image_note_window_t2

0xa9fe,	// (0x0001a117) popup_tmo_big_image_note_window_t3

0x0002,

0xfecc,	// (0x0001f5e5) popup_tmo_big_image_note_window_t

0x76e1,	// (0x00016dfa) cell_ai5_widget_lrg_icon_pane_g1

0xaa0e,	// (0x0001a127) cell_ai5_widget_lrg_icon_pane_t1

0xaa1c,	// (0x0001a135) cell_ai5_widget_list_row_pane_ParamLimits

0xaa1c,	// (0x0001a135) cell_ai5_widget_list_row_pane

0xaa33,	// (0x0001a14c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xaa33,	// (0x0001a14c) cell_ai5_widget_list_row_pane_g1

0xaa40,	// (0x0001a159) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaa40,	// (0x0001a159) cell_ai5_widget_list_row_pane_t1

0xaa71,	// (0x0001a18a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaa71,	// (0x0001a18a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed3,	// (0x0001f5ec) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed3,	// (0x0001f5ec) cell_ai5_widget_list_row_pane_t

0x0166,	// (0x0000f87f) main_fep_vtchi_ss_pane

0x239a,	// (0x00011ab3) popup_fep_char_pre_window

0x23a2,	// (0x00011abb) popup_fep_ituss_window

0x23c3,	// (0x00011adc) popup_fep_vkbss_window

0xaa99,	// (0x0001a1b2) grid_vkbss_keypad_pane_ParamLimits

0xaa99,	// (0x0001a1b2) grid_vkbss_keypad_pane

0xaaa9,	// (0x0001a1c2) ituss_keypad_pane

0x23ee,	// (0x00011b07) aid_vkbss_key_offset_ParamLimits

0x23ee,	// (0x00011b07) aid_vkbss_key_offset

0x23fa,	// (0x00011b13) cell_vkbss_key_pane_ParamLimits

0x23fa,	// (0x00011b13) cell_vkbss_key_pane

0xaab8,	// (0x0001a1d1) bg_cell_vkbss_key_g1_ParamLimits

0xaab8,	// (0x0001a1d1) bg_cell_vkbss_key_g1

0xaac4,	// (0x0001a1dd) cell_vkbss_key_3p_pane_ParamLimits

0xaac4,	// (0x0001a1dd) cell_vkbss_key_3p_pane

0xaade,	// (0x0001a1f7) cell_vkbss_key_g1_ParamLimits

0xaade,	// (0x0001a1f7) cell_vkbss_key_g1

0xaaf8,	// (0x0001a211) cell_vkbss_key_t1_ParamLimits

0xaaf8,	// (0x0001a211) cell_vkbss_key_t1

0x2410,	// (0x00011b29) cell_ituss_key_pane_ParamLimits

0x2410,	// (0x00011b29) cell_ituss_key_pane

0xab23,	// (0x0001a23c) bg_cell_ituss_key_g1_ParamLimits

0xab23,	// (0x0001a23c) bg_cell_ituss_key_g1

0xab2f,	// (0x0001a248) cell_ituss_key_pane_g1_ParamLimits

0xab2f,	// (0x0001a248) cell_ituss_key_pane_g1

0x2421,	// (0x00011b3a) cell_ituss_key_pane_g2_ParamLimits

0x2421,	// (0x00011b3a) cell_ituss_key_pane_g2

0x0002,

0xfeda,	// (0x0001f5f3) cell_ituss_key_pane_g_ParamLimits

0xfeda,	// (0x0001f5f3) cell_ituss_key_pane_g

0x244d,	// (0x00011b66) cell_ituss_key_t1_ParamLimits

0x244d,	// (0x00011b66) cell_ituss_key_t1

0x2487,	// (0x00011ba0) cell_ituss_key_t2_ParamLimits

0x2487,	// (0x00011ba0) cell_ituss_key_t2

0x24b8,	// (0x00011bd1) cell_ituss_key_t3_ParamLimits

0x24b8,	// (0x00011bd1) cell_ituss_key_t3

0x2487,	// (0x00011ba0) cell_ituss_key_t4_ParamLimits

0x2487,	// (0x00011ba0) cell_ituss_key_t4

0x0004,

0xfee1,	// (0x0001f5fa) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0001f5fa) cell_ituss_key_t

0xab5b,	// (0x0001a274) cell_vkbss_key_3p_pane_g1

0xab63,	// (0x0001a27c) cell_vkbss_key_3p_pane_g2

0xab6b,	// (0x0001a284) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0001f605) cell_vkbss_key_3p_pane_g

0x0166,	// (0x0000f87f) bg_popup_fep_char_preview_window_cp02

0x24fb,	// (0x00011c14) popup_fep_char_pre_window_t1

0xf227,	// (0x0001e940) main_ai5_sk_pane

0xa6b8,	// (0x00019dd1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa6c4,	// (0x00019ddd) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7f24,	// (0x0001763d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa6d9,	// (0x00019df2) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebe,	// (0x0001f5d7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa6e5,	// (0x00019dfe) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3456,	// (0x00012b6f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf525,	// (0x0001ec3e) main_ai5_sk_pane_g1

0x5121,	// (0x0001483a) popup_query_code_window_g1

0x23b8,	// (0x00011ad1) popup_fep_vkb_icf_pane

0x23cc,	// (0x00011ae5) popup_fep_vtchi_icf_pane

0xab7c,	// (0x0001a295) bg_icf_pane

0xab88,	// (0x0001a2a1) list_vkb_icf_pane

0xab94,	// (0x0001a2ad) bg_icf_pane_cp01

0xaba0,	// (0x0001a2b9) vtchi_icf_list_pane

0xabb1,	// (0x0001a2ca) list_vkb_icf_pane_t1_ParamLimits

0xabb1,	// (0x0001a2ca) list_vkb_icf_pane_t1

0xabc7,	// (0x0001a2e0) vtchi_icf_list_pane_t1_ParamLimits

0xabc7,	// (0x0001a2e0) vtchi_icf_list_pane_t1

0x23a2,	// (0x00011abb) popup_fep_ituss_window_ParamLimits

0x23cc,	// (0x00011ae5) popup_fep_vtchi_icf_pane_ParamLimits

0xaaa9,	// (0x0001a1c2) ituss_keypad_pane_ParamLimits

0x23e2,	// (0x00011afb) ituss_sks_pane

0xab7c,	// (0x0001a295) bg_icf_pane_ParamLimits

0x237e,	// (0x00011a97) icf_edit_indi_pane_ParamLimits

0x237e,	// (0x00011a97) icf_edit_indi_pane

0xab88,	// (0x0001a2a1) list_vkb_icf_pane_ParamLimits

0xab94,	// (0x0001a2ad) bg_icf_pane_cp01_ParamLimits

0x238d,	// (0x00011aa6) icf_edit_indi_pane_cp01_ParamLimits

0x238d,	// (0x00011aa6) icf_edit_indi_pane_cp01

0xaba8,	// (0x0001a2c1) vtchi_query_pane

0x1765,	// (0x00010e7e) icf_edit_indi_pane_g1_ParamLimits

0x1765,	// (0x00010e7e) icf_edit_indi_pane_g1

0x251d,	// (0x00011c36) icf_edit_indi_pane_g2_ParamLimits

0x251d,	// (0x00011c36) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0001f61d) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0001f61d) icf_edit_indi_pane_g

0x252c,	// (0x00011c45) icf_edit_indi_pane_t1

0xabe1,	// (0x0001a2fa) bg_input_focus_pane_cp042

0x2e0a,	// (0x00012523) vtchi_button_pane

0xabea,	// (0x0001a303) vtchi_query_pane_t1

0xabf8,	// (0x0001a311) vtchi_query_pane_t2

0xac06,	// (0x0001a31f) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0001f60c) vtchi_query_pane_t

0x0166,	// (0x0000f87f) bg_button_pane_cp13

0xac14,	// (0x0001a32d) vtchi_button_pane_g1

0x250a,	// (0x00011c23) ituss_sks_pane_g1

0x2515,	// (0x00011c2e) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0001f613) ituss_sks_pane_g

0xac1c,	// (0x0001a335) ituss_sks_pane_t1

0xac2a,	// (0x0001a343) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0001f618) ituss_sks_pane_t

0x7101,	// (0x0001681a) indicator_nsta_pane_cp_g1

0x710a,	// (0x00016823) indicator_nsta_pane_cp_g2

0x7112,	// (0x0001682b) indicator_nsta_pane_cp_g3

0x711a,	// (0x00016833) indicator_nsta_pane_cp_g4

0x7122,	// (0x0001683b) indicator_nsta_pane_cp_g5

0x7122,	// (0x0001683b) indicator_nsta_pane_cp_g6

0x0005,

0xfa9c,	// (0x0001f1b5) indicator_nsta_pane_cp_g

0xf039,	// (0x0001e752) cell_graphic2_pane_t2_ParamLimits

0xf039,	// (0x0001e752) cell_graphic2_pane_t2

0x0001,

0xfdb5,	// (0x0001f4ce) cell_graphic2_pane_t_ParamLimits

0xfdb5,	// (0x0001f4ce) cell_graphic2_pane_t

0xf06f,	// (0x0001e788) cell_graphic2_control_pane_t1

0xd125,	// (0x0001c83e) signal_pane_g3_ParamLimits

0xd125,	// (0x0001c83e) signal_pane_g3

0xd139,	// (0x0001c852) signal_pane_g4_ParamLimits

0xd139,	// (0x0001c852) signal_pane_g4

0xaa83,	// (0x0001a19c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaa83,	// (0x0001a19c) cell_ai5_widget_list_row_pane_t3

0xab49,	// (0x0001a262) cell_ituss_key_pane_t1_ParamLimits

0xab49,	// (0x0001a262) cell_ituss_key_pane_t1

0x4d36,	// (0x0001444f) form_field_data_wide_pane_vc_t2_ParamLimits

0x4d36,	// (0x0001444f) form_field_data_wide_pane_vc_t2

0x4d4a,	// (0x00014463) form_field_data_wide_pane_vc_t3_ParamLimits

0x4d4a,	// (0x00014463) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0001ef18) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0001ef18) form_field_data_wide_pane_vc_t

0x6dc9,	// (0x000164e2) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6dc9,	// (0x000164e2) form_field_slider_wide_pane_vc_t3

0x6ea7,	// (0x000165c0) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6ea7,	// (0x000165c0) form_field_popup_wide_pane_vc_t2

0x6ebe,	// (0x000165d7) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6ebe,	// (0x000165d7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8b,	// (0x0001f1a4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8b,	// (0x0001f1a4) form_field_popup_wide_pane_vc_t

0xc533,	// (0x0001bc4c) aid_fshwr2_btn_pane_ParamLimits

0xc544,	// (0x0001bc5d) aid_fshwr2_syb_pane_ParamLimits

0xc555,	// (0x0001bc6e) aid_fshwr2_txt_pane_ParamLimits

0x19fe,	// (0x00011117) fshwr2_bg_pane_ParamLimits

0xc561,	// (0x0001bc7a) fshwr2_func_candi_pane_ParamLimits

0xc580,	// (0x0001bc99) fshwr2_hwr_syb_pane_ParamLimits

0xc59b,	// (0x0001bcb4) fshwr2_icf_pane_ParamLimits

0x6d2f,	// (0x00016448) list_double_graphic_pane_vc_g4_ParamLimits

0x6d2f,	// (0x00016448) list_double_graphic_pane_vc_g4

0x2441,	// (0x00011b5a) cell_ituss_key_pane_g3_ParamLimits

0x2441,	// (0x00011b5a) cell_ituss_key_pane_g3

0x24e9,	// (0x00011c02) cell_ituss_key_t5_ParamLimits

0x24e9,	// (0x00011c02) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
