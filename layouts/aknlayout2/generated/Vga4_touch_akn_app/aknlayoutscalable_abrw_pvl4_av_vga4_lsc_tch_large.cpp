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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00051f7e };

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
0xad91,	// (0x0005cd0f) Screen

0xad9d,	// (0x0005cd1b) application_window_ParamLimits

0xad9d,	// (0x0005cd1b) application_window

0xd1cc,	// (0x0005f14a) screen_g1

0xadd5,	// (0x0005cd53) area_bottom_pane_ParamLimits

0xadd5,	// (0x0005cd53) area_bottom_pane

0xf2c0,	// (0x0006123e) area_top_pane_ParamLimits

0xf2c0,	// (0x0006123e) area_top_pane

0xf35e,	// (0x000612dc) main_pane_ParamLimits

0xf35e,	// (0x000612dc) main_pane

0xd1d6,	// (0x0005f154) misc_graphics

0xce76,	// (0x0005edf4) battery_pane_ParamLimits

0xce76,	// (0x0005edf4) battery_pane

0x50ee,	// (0x0005706c) bg_status_flat_pane_g8

0x50f6,	// (0x00057074) bg_status_flat_pane_g9

0x44a3,	// (0x00056421) context_pane_ParamLimits

0x44a3,	// (0x00056421) context_pane

0xcfed,	// (0x0005ef6b) navi_pane_ParamLimits

0xcfed,	// (0x0005ef6b) navi_pane

0xd076,	// (0x0005eff4) signal_pane_ParamLimits

0xd076,	// (0x0005eff4) signal_pane

0x0008,

0xf88a,	// (0x00061808) bg_status_flat_pane_g

0xd106,	// (0x0005f084) status_pane_g1_ParamLimits

0xd106,	// (0x0005f084) status_pane_g1

0xd1e0,	// (0x0005f15e) status_pane_g2_ParamLimits

0xd1e0,	// (0x0005f15e) status_pane_g2

0x46e3,	// (0x00056661) status_pane_g3_ParamLimits

0x46e3,	// (0x00056661) status_pane_g3

0x0004,

0xf7bd,	// (0x0006173b) status_pane_g_ParamLimits

0xf7bd,	// (0x0006173b) status_pane_g

0xd1ec,	// (0x0005f16a) title_pane_ParamLimits

0xd1ec,	// (0x0005f16a) title_pane

0xd249,	// (0x0005f1c7) uni_indicator_pane_ParamLimits

0xd249,	// (0x0005f1c7) uni_indicator_pane

0x3cc4,	// (0x00055c42) bg_list_pane_ParamLimits

0x3cc4,	// (0x00055c42) bg_list_pane

0xc6b3,	// (0x0005e631) find_pane

0xc6bb,	// (0x0005e639) listscroll_app_pane_ParamLimits

0xc6bb,	// (0x0005e639) listscroll_app_pane

0x3cf8,	// (0x00055c76) listscroll_form_pane

0xc6c7,	// (0x0005e645) listscroll_gen_pane_ParamLimits

0xc6c7,	// (0x0005e645) listscroll_gen_pane

0x3cf8,	// (0x00055c76) listscroll_set_pane

0x5ca7,	// (0x00057c25) main_idle_act_pane

0x39a8,	// (0x00055926) main_idle_trad_pane

0x39a8,	// (0x00055926) main_list_empty_pane

0x3d26,	// (0x00055ca4) main_midp_pane

0x3d32,	// (0x00055cb0) main_pane_g1_ParamLimits

0x3d32,	// (0x00055cb0) main_pane_g1

0xc6db,	// (0x0005e659) popup_ai_message_window_ParamLimits

0xc6db,	// (0x0005e659) popup_ai_message_window

0xc77b,	// (0x0005e6f9) popup_fep_china_uni_window_ParamLimits

0xc77b,	// (0x0005e6f9) popup_fep_china_uni_window

0x3e5c,	// (0x00055dda) popup_fep_japan_candidate_window_ParamLimits

0x3e5c,	// (0x00055dda) popup_fep_japan_candidate_window

0x3e86,	// (0x00055e04) popup_fep_japan_predictive_window_ParamLimits

0x3e86,	// (0x00055e04) popup_fep_japan_predictive_window

0xc7db,	// (0x0005e759) popup_find_window

0xc7f8,	// (0x0005e776) popup_grid_graphic_window_ParamLimits

0xc7f8,	// (0x0005e776) popup_grid_graphic_window

0x3ef7,	// (0x00055e75) popup_large_graphic_colour_window

0xc89c,	// (0x0005e81a) popup_menu_window_ParamLimits

0xc89c,	// (0x0005e81a) popup_menu_window

0xca88,	// (0x0005ea06) popup_note_image_window

0xca48,	// (0x0005e9c6) popup_note_wait_window_ParamLimits

0xca48,	// (0x0005e9c6) popup_note_wait_window

0xcaa0,	// (0x0005ea1e) popup_note_window_ParamLimits

0xcaa0,	// (0x0005ea1e) popup_note_window

0xcb4e,	// (0x0005eacc) popup_query_code_window_ParamLimits

0xcb4e,	// (0x0005eacc) popup_query_code_window

0x4163,	// (0x000560e1) popup_query_data_code_window_ParamLimits

0x4163,	// (0x000560e1) popup_query_data_code_window

0xcb8e,	// (0x0005eb0c) popup_query_data_window_ParamLimits

0xcb8e,	// (0x0005eb0c) popup_query_data_window

0xcc22,	// (0x0005eba0) popup_query_sat_info_window_ParamLimits

0xcc22,	// (0x0005eba0) popup_query_sat_info_window

0xcccd,	// (0x0005ec4b) popup_snote_single_graphic_window_ParamLimits

0xcccd,	// (0x0005ec4b) popup_snote_single_graphic_window

0xcccd,	// (0x0005ec4b) popup_snote_single_text_window_ParamLimits

0xcccd,	// (0x0005ec4b) popup_snote_single_text_window

0x41fe,	// (0x0005617c) popup_sub_window_general

0x4344,	// (0x000562c2) popup_window_general_ParamLimits

0x4344,	// (0x000562c2) popup_window_general

0x435d,	// (0x000562db) power_save_pane

0xba0a,	// (0x0005d988) control_pane_g1_ParamLimits

0xba0a,	// (0x0005d988) control_pane_g1

0x094f,	// (0x000528cd) control_pane_g2_ParamLimits

0x094f,	// (0x000528cd) control_pane_g2

0x3c75,	// (0x00055bf3) control_pane_g3_ParamLimits

0x3c75,	// (0x00055bf3) control_pane_g3

0x0007,

0xf7a5,	// (0x00061723) control_pane_g_ParamLimits

0xf7a5,	// (0x00061723) control_pane_g

0xba4c,	// (0x0005d9ca) control_pane_t1_ParamLimits

0xba4c,	// (0x0005d9ca) control_pane_t1

0xbaaa,	// (0x0005da28) control_pane_t2_ParamLimits

0xbaaa,	// (0x0005da28) control_pane_t2

0x0002,

0xf7b6,	// (0x00061734) control_pane_t_ParamLimits

0xf7b6,	// (0x00061734) control_pane_t

0x3b96,	// (0x00055b14) navi_navi_volume_pane_cp1

0x3b9f,	// (0x00055b1d) status_small_icon_pane

0x3ba7,	// (0x00055b25) status_small_pane_g1_ParamLimits

0x3ba7,	// (0x00055b25) status_small_pane_g1

0x3bdb,	// (0x00055b59) status_small_pane_g2_ParamLimits

0x3bdb,	// (0x00055b59) status_small_pane_g2

0x3be7,	// (0x00055b65) status_small_pane_g3_ParamLimits

0x3be7,	// (0x00055b65) status_small_pane_g3

0x3bf3,	// (0x00055b71) status_small_pane_g4_ParamLimits

0x3bf3,	// (0x00055b71) status_small_pane_g4

0x3bff,	// (0x00055b7d) status_small_pane_g5_ParamLimits

0x3bff,	// (0x00055b7d) status_small_pane_g5

0x3c0e,	// (0x00055b8c) status_small_pane_g6_ParamLimits

0x3c0e,	// (0x00055b8c) status_small_pane_g6

0x0007,

0xf794,	// (0x00061712) status_small_pane_g_ParamLimits

0xf794,	// (0x00061712) status_small_pane_g

0x3c3e,	// (0x00055bbc) status_small_pane_t1

0x3c61,	// (0x00055bdf) status_small_wait_pane_ParamLimits

0x3c61,	// (0x00055bdf) status_small_wait_pane

0xc4d4,	// (0x0005e452) aid_levels_signal_ParamLimits

0xc4d4,	// (0x0005e452) aid_levels_signal

0xc4ec,	// (0x0005e46a) signal_pane_g1_ParamLimits

0xc4ec,	// (0x0005e46a) signal_pane_g1

0xc507,	// (0x0005e485) signal_pane_g2_ParamLimits

0xc507,	// (0x0005e485) signal_pane_g2

0x0001,

0xf729,	// (0x000616a7) signal_pane_g_ParamLimits

0xf729,	// (0x000616a7) signal_pane_g

0x347b,	// (0x000553f9) context_pane_g1

0xaf52,	// (0x0005ced0) title_pane_g1

0xaf87,	// (0x0005cf05) title_pane_t1

0x221d,	// (0x0005419b) title_pane_t2

0x2243,	// (0x000541c1) title_pane_t3

0x0002,

0xf573,	// (0x000614f1) title_pane_t

0xd271,	// (0x0005f1ef) aid_levels_battery_ParamLimits

0xd271,	// (0x0005f1ef) aid_levels_battery

0xd28d,	// (0x0005f20b) battery_pane_g1_ParamLimits

0xd28d,	// (0x0005f20b) battery_pane_g1

0xd2aa,	// (0x0005f228) battery_pane_g2_ParamLimits

0xd2aa,	// (0x0005f228) battery_pane_g2

0x0001,

0xf7c8,	// (0x00061746) battery_pane_g_ParamLimits

0xf7c8,	// (0x00061746) battery_pane_g

0xd4cd,	// (0x0005f44b) uni_indicator_pane_g1

0xd4e2,	// (0x0005f460) uni_indicator_pane_g2

0xd4f7,	// (0x0005f475) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x000618b0) uni_indicator_pane_g

0x3816,	// (0x00055794) navi_icon_pane_ParamLimits

0x3816,	// (0x00055794) navi_icon_pane

0x375d,	// (0x000556db) navi_midp_pane

0x3832,	// (0x000557b0) navi_navi_pane

0x383c,	// (0x000557ba) navi_text_pane_ParamLimits

0x383c,	// (0x000557ba) navi_text_pane

0xd1cc,	// (0x0005f14a) status_small_wait_pane_g1

0x2687,	// (0x00054605) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x000618ab) status_small_wait_pane_g

0xd46c,	// (0x0005f3ea) navi_navi_icon_text_pane

0xd474,	// (0x0005f3f2) navi_navi_pane_g1_ParamLimits

0xd474,	// (0x0005f3f2) navi_navi_pane_g1

0xd486,	// (0x0005f404) navi_navi_pane_g2_ParamLimits

0xd486,	// (0x0005f404) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x00061879) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x00061879) navi_navi_pane_g

0x577d,	// (0x000576fb) navi_navi_tabs_pane

0xd498,	// (0x0005f416) navi_navi_text_pane

0xd46c,	// (0x0005f3ea) navi_navi_volume_pane

0xd45a,	// (0x0005f3d8) navi_text_pane_t1

0xd44e,	// (0x0005f3cc) navi_icon_pane_g1

0x566e,	// (0x000575ec) navi_navi_text_pane_t1

0xbd2d,	// (0x0005dcab) navi_navi_volume_pane_g1

0xbd35,	// (0x0005dcb3) volume_small_pane

0xd3aa,	// (0x0005f328) navi_navi_icon_text_pane_g1

0xd3b2,	// (0x0005f330) navi_navi_icon_text_pane_t1

0x3832,	// (0x000557b0) navi_tabs_2_long_pane

0x3832,	// (0x000557b0) navi_tabs_2_pane

0x3832,	// (0x000557b0) navi_tabs_3_long_pane

0x3832,	// (0x000557b0) navi_tabs_3_pane

0x3832,	// (0x000557b0) navi_tabs_4_pane

0xbd0d,	// (0x0005dc8b) tabs_2_active_pane_ParamLimits

0xbd0d,	// (0x0005dc8b) tabs_2_active_pane

0xbd1d,	// (0x0005dc9b) tabs_2_passive_pane_ParamLimits

0xbd1d,	// (0x0005dc9b) tabs_2_passive_pane

0xbcdb,	// (0x0005dc59) tabs_3_active_pane_ParamLimits

0xbcdb,	// (0x0005dc59) tabs_3_active_pane

0xbceb,	// (0x0005dc69) tabs_3_passive_pane_ParamLimits

0xbceb,	// (0x0005dc69) tabs_3_passive_pane

0xbcfc,	// (0x0005dc7a) tabs_3_passive_pane_cp_ParamLimits

0xbcfc,	// (0x0005dc7a) tabs_3_passive_pane_cp

0xbc97,	// (0x0005dc15) tabs_4_active_pane_ParamLimits

0xbc97,	// (0x0005dc15) tabs_4_active_pane

0xbca8,	// (0x0005dc26) tabs_4_passive_pane_ParamLimits

0xbca8,	// (0x0005dc26) tabs_4_passive_pane

0xbcb9,	// (0x0005dc37) tabs_4_passive_pane_cp_ParamLimits

0xbcb9,	// (0x0005dc37) tabs_4_passive_pane_cp

0xbcca,	// (0x0005dc48) tabs_4_passive_pane_cp2_ParamLimits

0xbcca,	// (0x0005dc48) tabs_4_passive_pane_cp2

0xbc73,	// (0x0005dbf1) tabs_2_long_active_pane_ParamLimits

0xbc73,	// (0x0005dbf1) tabs_2_long_active_pane

0xbc85,	// (0x0005dc03) tabs_2_long_passive_pane_ParamLimits

0xbc85,	// (0x0005dc03) tabs_2_long_passive_pane

0xbc28,	// (0x0005dba6) tabs_3_long_active_pane_ParamLimits

0xbc28,	// (0x0005dba6) tabs_3_long_active_pane

0xbc41,	// (0x0005dbbf) tabs_3_long_passive_pane_ParamLimits

0xbc41,	// (0x0005dbbf) tabs_3_long_passive_pane

0xbc5a,	// (0x0005dbd8) tabs_3_long_passive_pane_cp_ParamLimits

0xbc5a,	// (0x0005dbd8) tabs_3_long_passive_pane_cp

0x0c5a,	// (0x00052bd8) volume_small_pane_g1

0xbbd7,	// (0x0005db55) volume_small_pane_g2

0xbbe0,	// (0x0005db5e) volume_small_pane_g3

0xbbe9,	// (0x0005db67) volume_small_pane_g4

0xbbf2,	// (0x0005db70) volume_small_pane_g5

0xbbfb,	// (0x0005db79) volume_small_pane_g6

0xbc04,	// (0x0005db82) volume_small_pane_g7

0xbc0d,	// (0x0005db8b) volume_small_pane_g8

0xbc16,	// (0x0005db94) volume_small_pane_g9

0xbc1f,	// (0x0005db9d) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x00061845) volume_small_pane_g

0x24d1,	// (0x0005444f) bg_active_tab_pane_cp2_ParamLimits

0x24d1,	// (0x0005444f) bg_active_tab_pane_cp2

0xb013,	// (0x0005cf91) tabs_3_active_pane_g1

0xb01b,	// (0x0005cf99) tabs_3_active_pane_t1

0x24d1,	// (0x0005444f) bg_passive_tab_pane_cp2_ParamLimits

0x24d1,	// (0x0005444f) bg_passive_tab_pane_cp2

0xb013,	// (0x0005cf91) tabs_3_passive_pane_g1

0xb01b,	// (0x0005cf99) tabs_3_passive_pane_t1

0x24d1,	// (0x0005444f) bg_active_tab_pane_cp3_ParamLimits

0x24d1,	// (0x0005444f) bg_active_tab_pane_cp3

0xb02d,	// (0x0005cfab) tabs_4_active_pane_g1

0xb035,	// (0x0005cfb3) tabs_4_active_pane_t1

0x24d1,	// (0x0005444f) bg_passive_tab_pane_cp3_ParamLimits

0x24d1,	// (0x0005444f) bg_passive_tab_pane_cp3

0xb02d,	// (0x0005cfab) tabs_4_1_passive_pane_g1

0xb035,	// (0x0005cfb3) tabs_4_1_passive_pane_t1

0x3d26,	// (0x00055ca4) list_highlight_pane_cp2

0xd5b5,	// (0x0005f533) list_set_pane_ParamLimits

0xd5b5,	// (0x0005f533) list_set_pane

0xd67d,	// (0x0005f5fb) main_pane_set_t1_ParamLimits

0xd67d,	// (0x0005f5fb) main_pane_set_t1

0xd69d,	// (0x0005f61b) main_pane_set_t2_ParamLimits

0xd69d,	// (0x0005f61b) main_pane_set_t2

0xd6b1,	// (0x0005f62f) main_pane_set_t3_ParamLimits

0xd6b1,	// (0x0005f62f) main_pane_set_t3

0xd6c5,	// (0x0005f643) main_pane_set_t4_ParamLimits

0xd6c5,	// (0x0005f643) main_pane_set_t4

0x0003,

0xf997,	// (0x00061915) main_pane_set_t_ParamLimits

0xf997,	// (0x00061915) main_pane_set_t

0xd6d9,	// (0x0005f657) setting_code_pane

0x5e07,	// (0x00057d85) setting_slider_graphic_pane

0x5e07,	// (0x00057d85) setting_slider_pane

0x5e07,	// (0x00057d85) setting_text_pane

0x5e07,	// (0x00057d85) setting_volume_pane

0xf4da,	// (0x00061458) volume_set_pane

0x2255,	// (0x000541d3) bg_set_opt_pane_cp

0xf4e4,	// (0x00061462) setting_slider_pane_t1

0xf4fa,	// (0x00061478) setting_slider_pane_t2

0xf514,	// (0x00061492) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x000614f8) setting_slider_pane_t

0xf52c,	// (0x000614aa) slider_set_pane

0xd1d6,	// (0x0005f154) bg_set_opt_pane_cp2

0x2297,	// (0x00054215) setting_slider_graphic_pane_g1

0xf542,	// (0x000614c0) setting_slider_graphic_pane_t1

0xf552,	// (0x000614d0) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x000614ff) setting_slider_graphic_pane_t

0xf562,	// (0x000614e0) slider_set_pane_cp

0xd1d6,	// (0x0005f154) input_focus_pane_cp1

0x5c8e,	// (0x00057c0c) list_set_text_pane

0xd1cc,	// (0x0005f14a) setting_text_pane_g1

0xd1d6,	// (0x0005f154) input_focus_pane_cp2

0xd1cc,	// (0x0005f14a) setting_code_pane_g1

0x22a0,	// (0x0005421e) setting_code_pane_t1

0xee68,	// (0x00060de6) set_text_pane_t1_ParamLimits

0xee68,	// (0x00060de6) set_text_pane_t1

0x2be3,	// (0x00054b61) set_opt_bg_pane_g1

0x2beb,	// (0x00054b69) set_opt_bg_pane_g2

0x5c66,	// (0x00057be4) set_opt_bg_pane_g3

0x2bfb,	// (0x00054b79) set_opt_bg_pane_g4

0x2c03,	// (0x00054b81) set_opt_bg_pane_g5

0x2c0b,	// (0x00054b89) set_opt_bg_pane_g6

0x5c70,	// (0x00057bee) set_opt_bg_pane_g7

0x5c7a,	// (0x00057bf8) set_opt_bg_pane_g8

0x5c84,	// (0x00057c02) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x00061902) set_opt_bg_pane_g

0x5c59,	// (0x00057bd7) slider_set_pane_g1

0x0e66,	// (0x00052de4) slider_set_pane_g2

0x0006,

0xf975,	// (0x000618f3) slider_set_pane_g

0x0dc6,	// (0x00052d44) volume_set_pane_g1

0x0dd0,	// (0x00052d4e) volume_set_pane_g2

0x0dda,	// (0x00052d58) volume_set_pane_g3

0x0de4,	// (0x00052d62) volume_set_pane_g4

0x0dee,	// (0x00052d6c) volume_set_pane_g5

0x0df8,	// (0x00052d76) volume_set_pane_g6

0x0e02,	// (0x00052d80) volume_set_pane_g7

0x0e0c,	// (0x00052d8a) volume_set_pane_g8

0x0e16,	// (0x00052d94) volume_set_pane_g9

0x0e20,	// (0x00052d9e) volume_set_pane_g10

0x0009,

0xf94d,	// (0x000618cb) volume_set_pane_g

0xb047,	// (0x0005cfc5) indicator_pane_ParamLimits

0xb047,	// (0x0005cfc5) indicator_pane

0xb073,	// (0x0005cff1) main_idle_pane_g2_ParamLimits

0xb073,	// (0x0005cff1) main_idle_pane_g2

0xb0ab,	// (0x0005d029) main_pane_idle_g1_ParamLimits

0xb0ab,	// (0x0005d029) main_pane_idle_g1

0x22f0,	// (0x0005426e) popup_clock_digital_analogue_window_ParamLimits

0x22f0,	// (0x0005426e) popup_clock_digital_analogue_window

0xb0d9,	// (0x0005d057) soft_indicator_pane_ParamLimits

0xb0d9,	// (0x0005d057) soft_indicator_pane

0xb0f5,	// (0x0005d073) wallpaper_pane_ParamLimits

0xb0f5,	// (0x0005d073) wallpaper_pane

0xd1cc,	// (0x0005f14a) wallpaper_pane_g1

0xb107,	// (0x0005d085) indicator_pane_g1_ParamLimits

0xb107,	// (0x0005d085) indicator_pane_g1

0x60cb,	// (0x00058049) navi_navi_icon_text_pane_srt_g1

0x2344,	// (0x000542c2) soft_indicator_pane_t1

0x235e,	// (0x000542dc) aid_ps_area_pane

0xb120,	// (0x0005d09e) aid_ps_clock_pane

0x237d,	// (0x000542fb) aid_ps_indicator_pane

0x2389,	// (0x00054307) indicator_ps_pane_ParamLimits

0x2389,	// (0x00054307) indicator_ps_pane

0x2398,	// (0x00054316) power_save_pane_g1_ParamLimits

0x2398,	// (0x00054316) power_save_pane_g1

0x23a4,	// (0x00054322) power_save_pane_g2_ParamLimits

0x23a4,	// (0x00054322) power_save_pane_g2

0xee48,	// (0x00060dc6) aid_navinavi_width_pane

0x235e,	// (0x000542dc) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00061504) power_save_pane_g_ParamLimits

0xf586,	// (0x00061504) power_save_pane_g

0x23b2,	// (0x00054330) power_save_pane_t1_ParamLimits

0x23b2,	// (0x00054330) power_save_pane_t1

0xb120,	// (0x0005d09e) aid_ps_clock_pane_ParamLimits

0x237d,	// (0x000542fb) aid_ps_indicator_pane_ParamLimits

0x23c4,	// (0x00054342) power_save_pane_t4_ParamLimits

0x23c4,	// (0x00054342) power_save_pane_t4

0x0001,

0xf58b,	// (0x00061509) power_save_pane_t_ParamLimits

0xf58b,	// (0x00061509) power_save_pane_t

0x23ee,	// (0x0005436c) power_save_t3_ParamLimits

0x23ee,	// (0x0005436c) power_save_t3

0x23d9,	// (0x00054357) power_save_t2_ParamLimits

0x23d9,	// (0x00054357) power_save_t2

0x2403,	// (0x00054381) indicator_ps_pane_g1

0xb12e,	// (0x0005d0ac) ai_gene_pane_ParamLimits

0xb12e,	// (0x0005d0ac) ai_gene_pane

0xb145,	// (0x0005d0c3) ai_links_pane_ParamLimits

0xb145,	// (0x0005d0c3) ai_links_pane

0xb15d,	// (0x0005d0db) indicator_pane_cp1_ParamLimits

0xb15d,	// (0x0005d0db) indicator_pane_cp1

0xb16c,	// (0x0005d0ea) main_pane_idle_g1_cp_ParamLimits

0xb16c,	// (0x0005d0ea) main_pane_idle_g1_cp

0x243c,	// (0x000543ba) popup_ai_links_title_window

0xb184,	// (0x0005d102) soft_indicator_pane_cp1_ParamLimits

0xb184,	// (0x0005d102) soft_indicator_pane_cp1

0x5a2c,	// (0x000579aa) ai_links_pane_g1

0x5a35,	// (0x000579b3) grid_ai_links_pane

0xd4c4,	// (0x0005f442) ai_gene_pane_1

0x5a1a,	// (0x00057998) ai_gene_pane_2

0x5a23,	// (0x000579a1) list_highlight_pane_cp4

0xd4a0,	// (0x0005f41e) cell_ai_link_pane_ParamLimits

0xd4a0,	// (0x0005f41e) cell_ai_link_pane

0x59e9,	// (0x00057967) cell_ai_link_pane_g1

0x2687,	// (0x00054605) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x000618a6) cell_ai_link_pane_g

0xd1d6,	// (0x0005f154) grid_highlight_cp2

0xd1d6,	// (0x0005f154) bg_popup_sub_pane_cp1

0x245f,	// (0x000543dd) popup_ai_links_title_window_t1

0x5935,	// (0x000578b3) ai_gene_pane_1_g1_ParamLimits

0x5935,	// (0x000578b3) ai_gene_pane_1_g1

0x5941,	// (0x000578bf) ai_gene_pane_1_g2_ParamLimits

0x5941,	// (0x000578bf) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x0006189c) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x0006189c) ai_gene_pane_1_g

0x594e,	// (0x000578cc) ai_gene_pane_1_t1_ParamLimits

0x594e,	// (0x000578cc) ai_gene_pane_1_t1

0x5982,	// (0x00057900) grid_ai_soft_ind_pane

0x5920,	// (0x0005789e) ai_gene_pane_2_t1_ParamLimits

0x5920,	// (0x0005789e) ai_gene_pane_2_t1

0xb198,	// (0x0005d116) main_pane_empty_t1_ParamLimits

0xb198,	// (0x0005d116) main_pane_empty_t1

0xb1b0,	// (0x0005d12e) main_pane_empty_t2_ParamLimits

0xb1b0,	// (0x0005d12e) main_pane_empty_t2

0xb1c5,	// (0x0005d143) main_pane_empty_t3_ParamLimits

0xb1c5,	// (0x0005d143) main_pane_empty_t3

0xb1d7,	// (0x0005d155) main_pane_empty_t4_ParamLimits

0xb1d7,	// (0x0005d155) main_pane_empty_t4

0xb1e9,	// (0x0005d167) main_pane_empty_t5_ParamLimits

0xb1e9,	// (0x0005d167) main_pane_empty_t5

0x0004,

0xf590,	// (0x0006150e) main_pane_empty_t_ParamLimits

0xf590,	// (0x0006150e) main_pane_empty_t

0x2c3d,	// (0x00054bbb) bg_popup_window_pane_ParamLimits

0x2c3d,	// (0x00054bbb) bg_popup_window_pane

0x567c,	// (0x000575fa) find_popup_pane_cp2_ParamLimits

0x567c,	// (0x000575fa) find_popup_pane_cp2

0x5688,	// (0x00057606) heading_pane_ParamLimits

0x5688,	// (0x00057606) heading_pane

0xd1d6,	// (0x0005f154) bg_popup_sub_pane

0xd3cf,	// (0x0005f34d) bg_popup_window_pane_g1_ParamLimits

0xd3cf,	// (0x0005f34d) bg_popup_window_pane_g1

0xd3de,	// (0x0005f35c) bg_popup_window_pane_g2_ParamLimits

0xd3de,	// (0x0005f35c) bg_popup_window_pane_g2

0xd3ea,	// (0x0005f368) bg_popup_window_pane_g3_ParamLimits

0xd3ea,	// (0x0005f368) bg_popup_window_pane_g3

0xd3f6,	// (0x0005f374) bg_popup_window_pane_g4_ParamLimits

0xd3f6,	// (0x0005f374) bg_popup_window_pane_g4

0xd405,	// (0x0005f383) bg_popup_window_pane_g5_ParamLimits

0xd405,	// (0x0005f383) bg_popup_window_pane_g5

0xd415,	// (0x0005f393) bg_popup_window_pane_g6_ParamLimits

0xd415,	// (0x0005f393) bg_popup_window_pane_g6

0xd421,	// (0x0005f39f) bg_popup_window_pane_g7_ParamLimits

0xd421,	// (0x0005f39f) bg_popup_window_pane_g7

0xd430,	// (0x0005f3ae) bg_popup_window_pane_g8_ParamLimits

0xd430,	// (0x0005f3ae) bg_popup_window_pane_g8

0xd43f,	// (0x0005f3bd) bg_popup_window_pane_g9_ParamLimits

0xd43f,	// (0x0005f3bd) bg_popup_window_pane_g9

0x5662,	// (0x000575e0) bg_popup_window_pane_g10_ParamLimits

0x5662,	// (0x000575e0) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x00061864) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x00061864) bg_popup_window_pane_g

0x558b,	// (0x00057509) bg_popup_heading_pane_ParamLimits

0x558b,	// (0x00057509) bg_popup_heading_pane

0x0f3a,	// (0x00052eb8) tabs_4_passive_pane_cp_srt_ParamLimits

0x0f3a,	// (0x00052eb8) tabs_4_passive_pane_cp_srt

0x0f4c,	// (0x00052eca) tabs_4_passive_pane_srt_ParamLimits

0x559f,	// (0x0005751d) heading_pane_g2

0x0f4c,	// (0x00052eca) tabs_4_passive_pane_srt

0x4960,	// (0x000568de) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4960,	// (0x000568de) bg_passive_tab_pane_cp3_srt

0x55a7,	// (0x00057525) heading_pane_t1_ParamLimits

0x55a7,	// (0x00057525) heading_pane_t1

0x55be,	// (0x0005753c) heading_pane_t2_ParamLimits

0x55be,	// (0x0005753c) heading_pane_t2

0x0001,

0xf8e1,	// (0x0006185f) heading_pane_t_ParamLimits

0xf8e1,	// (0x0006185f) heading_pane_t

0x50b6,	// (0x00057034) bg_popup_heading_pane_g1

0x5165,	// (0x000570e3) bg_popup_heading_pane_g2

0x516f,	// (0x000570ed) bg_popup_heading_pane_g3

0x5179,	// (0x000570f7) bg_popup_heading_pane_g4

0x5183,	// (0x00057101) bg_popup_heading_pane_g5

0x518d,	// (0x0005710b) bg_popup_heading_pane_g6

0x5195,	// (0x00057113) bg_popup_heading_pane_g7

0x519d,	// (0x0005711b) bg_popup_heading_pane_g8

0x51a7,	// (0x00057125) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x0006181b) bg_popup_heading_pane_g

0x486e,	// (0x000567ec) bg_popup_sub_pane_g1

0x487e,	// (0x000567fc) bg_popup_sub_pane_g2

0x4876,	// (0x000567f4) bg_popup_sub_pane_g3

0x488e,	// (0x0005680c) bg_popup_sub_pane_g4

0x4886,	// (0x00056804) bg_popup_sub_pane_g5

0x4896,	// (0x00056814) bg_popup_sub_pane_g6

0x489e,	// (0x0005681c) bg_popup_sub_pane_g7

0x48ae,	// (0x0005682c) bg_popup_sub_pane_g8

0x48a6,	// (0x00056824) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x000617f5) bg_popup_sub_pane_g

0x24d1,	// (0x0005444f) bg_popup_window_pane_cp5_ParamLimits

0x24d1,	// (0x0005444f) bg_popup_window_pane_cp5

0x24ed,	// (0x0005446b) popup_note_window_g1_ParamLimits

0x24ed,	// (0x0005446b) popup_note_window_g1

0x24f9,	// (0x00054477) popup_note_window_t1_ParamLimits

0x24f9,	// (0x00054477) popup_note_window_t1

0x250f,	// (0x0005448d) popup_note_window_t2_ParamLimits

0x250f,	// (0x0005448d) popup_note_window_t2

0x2525,	// (0x000544a3) popup_note_window_t3_ParamLimits

0x2525,	// (0x000544a3) popup_note_window_t3

0x253b,	// (0x000544b9) popup_note_window_t4_ParamLimits

0x253b,	// (0x000544b9) popup_note_window_t4

0x2563,	// (0x000544e1) popup_note_window_t5_ParamLimits

0x2563,	// (0x000544e1) popup_note_window_t5

0x0004,

0xf59b,	// (0x00061519) popup_note_window_t_ParamLimits

0xf59b,	// (0x00061519) popup_note_window_t

0x2587,	// (0x00054505) bg_popup_window_pane_cp6_ParamLimits

0x2587,	// (0x00054505) bg_popup_window_pane_cp6

0x5032,	// (0x00056fb0) popup_note_image_window_g1_ParamLimits

0x5032,	// (0x00056fb0) popup_note_image_window_g1

0x503e,	// (0x00056fbc) popup_note_image_window_g2_ParamLimits

0x503e,	// (0x00056fbc) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x000617e9) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x000617e9) popup_note_image_window_g

0x5057,	// (0x00056fd5) popup_note_image_window_t1_ParamLimits

0x5057,	// (0x00056fd5) popup_note_image_window_t1

0x5070,	// (0x00056fee) popup_note_image_window_t2_ParamLimits

0x5070,	// (0x00056fee) popup_note_image_window_t2

0x5089,	// (0x00057007) popup_note_image_window_t3_ParamLimits

0x5089,	// (0x00057007) popup_note_image_window_t3

0x0002,

0xf870,	// (0x000617ee) popup_note_image_window_t_ParamLimits

0xf870,	// (0x000617ee) popup_note_image_window_t

0x4ef2,	// (0x00056e70) bg_popup_window_pane_cp7_ParamLimits

0x4ef2,	// (0x00056e70) bg_popup_window_pane_cp7

0x4f22,	// (0x00056ea0) popup_note_wait_window_g1_ParamLimits

0x4f22,	// (0x00056ea0) popup_note_wait_window_g1

0x4f2e,	// (0x00056eac) popup_note_wait_window_g2_ParamLimits

0x4f2e,	// (0x00056eac) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x000617d7) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x000617d7) popup_note_wait_window_g

0x4f46,	// (0x00056ec4) popup_note_wait_window_t1_ParamLimits

0x4f46,	// (0x00056ec4) popup_note_wait_window_t1

0x4f6d,	// (0x00056eeb) popup_note_wait_window_t2_ParamLimits

0x4f6d,	// (0x00056eeb) popup_note_wait_window_t2

0x4f8b,	// (0x00056f09) popup_note_wait_window_t3_ParamLimits

0x4f8b,	// (0x00056f09) popup_note_wait_window_t3

0x4f9e,	// (0x00056f1c) popup_note_wait_window_t4_ParamLimits

0x4f9e,	// (0x00056f1c) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x000617de) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x000617de) popup_note_wait_window_t

0x4fc3,	// (0x00056f41) wait_bar_pane_ParamLimits

0x4fc3,	// (0x00056f41) wait_bar_pane

0xd1d6,	// (0x0005f154) wait_anim_pane

0xd1d6,	// (0x0005f154) wait_border_pane

0xd1cc,	// (0x0005f14a) wait_anim_pane_g1

0xd1cc,	// (0x0005f14a) wait_anim_pane_g2

0x0001,

0xf724,	// (0x000616a2) wait_anim_pane_g

0x4e96,	// (0x00056e14) wait_border_pane_g1

0x4ea1,	// (0x00056e1f) wait_border_pane_g2

0x4eaa,	// (0x00056e28) wait_border_pane_g3

0x0002,

0xf852,	// (0x000617d0) wait_border_pane_g

0x4d00,	// (0x00056c7e) bg_popup_window_pane_cp16_ParamLimits

0x4d00,	// (0x00056c7e) bg_popup_window_pane_cp16

0x4e00,	// (0x00056d7e) indicator_popup_pane_cp4_ParamLimits

0x4e00,	// (0x00056d7e) indicator_popup_pane_cp4

0x4e14,	// (0x00056d92) popup_query_data_window_t1_ParamLimits

0x4e14,	// (0x00056d92) popup_query_data_window_t1

0x4e26,	// (0x00056da4) popup_query_data_window_t2_ParamLimits

0x4e26,	// (0x00056da4) popup_query_data_window_t2

0x4e3f,	// (0x00056dbd) popup_query_data_window_t3_ParamLimits

0x4e3f,	// (0x00056dbd) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x000617c9) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x000617c9) popup_query_data_window_t

0x4e59,	// (0x00056dd7) query_popup_data_pane_ParamLimits

0x4e59,	// (0x00056dd7) query_popup_data_pane

0x4e6d,	// (0x00056deb) query_popup_data_pane_cp1_ParamLimits

0x4e6d,	// (0x00056deb) query_popup_data_pane_cp1

0x4d00,	// (0x00056c7e) bg_popup_window_pane_cp10_ParamLimits

0x4d00,	// (0x00056c7e) bg_popup_window_pane_cp10

0x4d32,	// (0x00056cb0) indicator_popup_pane_ParamLimits

0x4d32,	// (0x00056cb0) indicator_popup_pane

0x4d54,	// (0x00056cd2) popup_query_code_window_t1_ParamLimits

0x4d54,	// (0x00056cd2) popup_query_code_window_t1

0x4d6e,	// (0x00056cec) popup_query_code_window_t2_ParamLimits

0x4d6e,	// (0x00056cec) popup_query_code_window_t2

0x4db7,	// (0x00056d35) popup_query_code_window_t3_ParamLimits

0x4db7,	// (0x00056d35) popup_query_code_window_t3

0x0002,

0xf844,	// (0x000617c2) popup_query_code_window_t_ParamLimits

0xf844,	// (0x000617c2) popup_query_code_window_t

0x4de6,	// (0x00056d64) query_popup_pane_ParamLimits

0x4de6,	// (0x00056d64) query_popup_pane

0x2587,	// (0x00054505) bg_popup_window_pane_cp15_ParamLimits

0x2587,	// (0x00054505) bg_popup_window_pane_cp15

0x25a7,	// (0x00054525) indicator_popup_pane_cp1_ParamLimits

0x25a7,	// (0x00054525) indicator_popup_pane_cp1

0x25ba,	// (0x00054538) indicator_popup_pane_cp2_ParamLimits

0x25ba,	// (0x00054538) indicator_popup_pane_cp2

0x25d5,	// (0x00054553) popup_query_data_code_window_g1_ParamLimits

0x25d5,	// (0x00054553) popup_query_data_code_window_g1

0x25e8,	// (0x00054566) popup_query_data_code_window_t1_ParamLimits

0x25e8,	// (0x00054566) popup_query_data_code_window_t1

0x25fa,	// (0x00054578) popup_query_data_code_window_t2_ParamLimits

0x25fa,	// (0x00054578) popup_query_data_code_window_t2

0x260c,	// (0x0005458a) popup_query_data_code_window_t3_ParamLimits

0x260c,	// (0x0005458a) popup_query_data_code_window_t3

0x2622,	// (0x000545a0) popup_query_data_code_window_t4_ParamLimits

0x2622,	// (0x000545a0) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00061524) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00061524) popup_query_data_code_window_t

0x0b0e,	// (0x00052a8c) list_single_midp_graphic_pane_g3

0x263c,	// (0x000545ba) query_popup_data_pane_cp2_ParamLimits

0x264f,	// (0x000545cd) query_popup_pane_cp2_ParamLimits

0x264f,	// (0x000545cd) query_popup_pane_cp2

0xd1d6,	// (0x0005f154) bg_popup_window_pane_cp11

0x4cf8,	// (0x00056c76) heading_pane_cp5

0x273f,	// (0x000546bd) listscroll_popup_info_pane

0xd1d6,	// (0x0005f154) input_focus_pane_cp3

0x266a,	// (0x000545e8) query_popup_pane_t1

0x2678,	// (0x000545f6) list_popup_info_pane_ParamLimits

0x2678,	// (0x000545f6) list_popup_info_pane

0x2687,	// (0x00054605) listscroll_popup_info_pane_g1

0x268f,	// (0x0005460d) scroll_pane_cp7

0x2699,	// (0x00054617) popup_info_list_pane_t1_ParamLimits

0x2699,	// (0x00054617) popup_info_list_pane_t1

0x26b3,	// (0x00054631) popup_info_list_pane_t2_ParamLimits

0x26b3,	// (0x00054631) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0006152d) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0006152d) popup_info_list_pane_t

0xd1d6,	// (0x0005f154) bg_popup_window_pane_cp12

0x60e5,	// (0x00058063) find_popup_pane

0x2255,	// (0x000541d3) bg_popup_window_pane_cp3

0x26cd,	// (0x0005464b) heading_pane_cp3

0x26d9,	// (0x00054657) listscroll_popup_graphic_pane

0xd1d6,	// (0x0005f154) bg_popup_window_pane_cp4

0xb24b,	// (0x0005d1c9) heading_pane_cp4

0x273f,	// (0x000546bd) listscroll_popup_colour_pane

0xb255,	// (0x0005d1d3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb255,	// (0x0005d1d3) cell_large_graphic_colour_none_popup_pane

0xb269,	// (0x0005d1e7) grid_large_graphic_colour_popup_pane_ParamLimits

0xb269,	// (0x0005d1e7) grid_large_graphic_colour_popup_pane

0xb295,	// (0x0005d213) listscroll_popup_colour_pane_g1_ParamLimits

0xb295,	// (0x0005d213) listscroll_popup_colour_pane_g1

0xb2ac,	// (0x0005d22a) listscroll_popup_colour_pane_g2_ParamLimits

0xb2ac,	// (0x0005d22a) listscroll_popup_colour_pane_g2

0xb2c3,	// (0x0005d241) listscroll_popup_colour_pane_g3_ParamLimits

0xb2c3,	// (0x0005d241) listscroll_popup_colour_pane_g3

0xb2d3,	// (0x0005d251) listscroll_popup_colour_pane_g4_ParamLimits

0xb2d3,	// (0x0005d251) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00061532) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00061532) listscroll_popup_colour_pane_g

0x27d9,	// (0x00054757) scroll_pane_cp6_ParamLimits

0x27d9,	// (0x00054757) scroll_pane_cp6

0xb2e7,	// (0x0005d265) cell_large_graphic_colour_popup_pane_ParamLimits

0xb2e7,	// (0x0005d265) cell_large_graphic_colour_popup_pane

0x2810,	// (0x0005478e) cell_large_graphic_colour_none_popup_pane_t1

0xd1d6,	// (0x0005f154) grid_highlight_pane_cp5

0x281f,	// (0x0005479d) cell_large_graphic_colour_popup_pane_g1

0x2827,	// (0x000547a5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0006153b) cell_large_graphic_colour_popup_pane_g

0x282f,	// (0x000547ad) cell_large_graphic_colour_popup_pane_g2_copy1

0x2838,	// (0x000547b6) grid_highlight_pane_cp4

0x2840,	// (0x000547be) bg_popup_window_pane_cp8_ParamLimits

0x2840,	// (0x000547be) bg_popup_window_pane_cp8

0x285b,	// (0x000547d9) popup_snote_single_text_window_g1_ParamLimits

0x285b,	// (0x000547d9) popup_snote_single_text_window_g1

0x286d,	// (0x000547eb) popup_snote_single_text_window_t1_ParamLimits

0x286d,	// (0x000547eb) popup_snote_single_text_window_t1

0x2880,	// (0x000547fe) popup_snote_single_text_window_t2_ParamLimits

0x2880,	// (0x000547fe) popup_snote_single_text_window_t2

0x2893,	// (0x00054811) popup_snote_single_text_window_t3_ParamLimits

0x2893,	// (0x00054811) popup_snote_single_text_window_t3

0x28cc,	// (0x0005484a) popup_snote_single_text_window_t4_ParamLimits

0x28cc,	// (0x0005484a) popup_snote_single_text_window_t4

0x2900,	// (0x0005487e) popup_snote_single_text_window_t5_ParamLimits

0x2900,	// (0x0005487e) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00061540) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00061540) popup_snote_single_text_window_t

0x292f,	// (0x000548ad) bg_popup_window_pane_cp9_ParamLimits

0x292f,	// (0x000548ad) bg_popup_window_pane_cp9

0x285b,	// (0x000547d9) popup_snote_single_graphic_window_g1_ParamLimits

0x285b,	// (0x000547d9) popup_snote_single_graphic_window_g1

0x293d,	// (0x000548bb) popup_snote_single_graphic_window_g2_ParamLimits

0x293d,	// (0x000548bb) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0006154b) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0006154b) popup_snote_single_graphic_window_g

0x2949,	// (0x000548c7) popup_snote_single_graphic_window_t1_ParamLimits

0x2949,	// (0x000548c7) popup_snote_single_graphic_window_t1

0x295c,	// (0x000548da) popup_snote_single_graphic_window_t2_ParamLimits

0x295c,	// (0x000548da) popup_snote_single_graphic_window_t2

0x296f,	// (0x000548ed) popup_snote_single_graphic_window_t3_ParamLimits

0x296f,	// (0x000548ed) popup_snote_single_graphic_window_t3

0x29a8,	// (0x00054926) popup_snote_single_graphic_window_t4_ParamLimits

0x29a8,	// (0x00054926) popup_snote_single_graphic_window_t4

0x29dc,	// (0x0005495a) popup_snote_single_graphic_window_t5_ParamLimits

0x29dc,	// (0x0005495a) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00061550) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00061550) popup_snote_single_graphic_window_t

0x6023,	// (0x00057fa1) grid_graphic_popup_pane_ParamLimits

0x6023,	// (0x00057fa1) grid_graphic_popup_pane

0x6051,	// (0x00057fcf) listscroll_popup_graphic_pane_g1_ParamLimits

0x6051,	// (0x00057fcf) listscroll_popup_graphic_pane_g1

0xd7d9,	// (0x0005f757) listscroll_popup_graphic_pane_g2_ParamLimits

0xd7d9,	// (0x0005f757) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0006193f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0006193f) listscroll_popup_graphic_pane_g

0x6079,	// (0x00057ff7) scroll_pane_cp5

0xd799,	// (0x0005f717) cell_graphic_popup_pane_ParamLimits

0xd799,	// (0x0005f717) cell_graphic_popup_pane

0x5fac,	// (0x00057f2a) cell_graphic_popup_pane_g1

0x5fb4,	// (0x00057f32) cell_graphic_popup_pane_g2

0x282f,	// (0x000547ad) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x00061938) cell_graphic_popup_pane_g

0x5fbd,	// (0x00057f3b) cell_graphic_popup_pane_t2

0x2838,	// (0x000547b6) grid_highlight_pane_cp3

0x2a1d,	// (0x0005499b) list_gen_pane_ParamLimits

0x2a1d,	// (0x0005499b) list_gen_pane

0x2a4f,	// (0x000549cd) scroll_pane

0xd754,	// (0x0005f6d2) bg_list_pane_g1_ParamLimits

0xd754,	// (0x0005f6d2) bg_list_pane_g1

0x5f29,	// (0x00057ea7) bg_list_pane_g2_ParamLimits

0x5f29,	// (0x00057ea7) bg_list_pane_g2

0x5f3c,	// (0x00057eba) bg_list_pane_g3_ParamLimits

0x5f3c,	// (0x00057eba) bg_list_pane_g3

0x5f4e,	// (0x00057ecc) bg_list_pane_g4_ParamLimits

0x5f4e,	// (0x00057ecc) bg_list_pane_g4

0xd76f,	// (0x0005f6ed) bg_list_pane_g5_ParamLimits

0xd76f,	// (0x0005f6ed) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0006192d) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0006192d) bg_list_pane_g

0xd717,	// (0x0005f695) list_double2_graphic_large_graphic_pane_ParamLimits

0xd717,	// (0x0005f695) list_double2_graphic_large_graphic_pane

0xd717,	// (0x0005f695) list_double2_graphic_pane_ParamLimits

0xd717,	// (0x0005f695) list_double2_graphic_pane

0xd717,	// (0x0005f695) list_double2_large_graphic_pane_ParamLimits

0xd717,	// (0x0005f695) list_double2_large_graphic_pane

0xd717,	// (0x0005f695) list_double2_pane_ParamLimits

0xd717,	// (0x0005f695) list_double2_pane

0xd717,	// (0x0005f695) list_double_graphic_heading_pane_ParamLimits

0xd717,	// (0x0005f695) list_double_graphic_heading_pane

0xd717,	// (0x0005f695) list_double_graphic_pane_ParamLimits

0xd717,	// (0x0005f695) list_double_graphic_pane

0xd717,	// (0x0005f695) list_double_heading_pane_ParamLimits

0xd717,	// (0x0005f695) list_double_heading_pane

0xd717,	// (0x0005f695) list_double_large_graphic_pane_ParamLimits

0xd717,	// (0x0005f695) list_double_large_graphic_pane

0xd717,	// (0x0005f695) list_double_number_pane_ParamLimits

0xd717,	// (0x0005f695) list_double_number_pane

0xd717,	// (0x0005f695) list_double_pane_ParamLimits

0xd717,	// (0x0005f695) list_double_pane

0xd717,	// (0x0005f695) list_double_time_pane_ParamLimits

0xd717,	// (0x0005f695) list_double_time_pane

0xd717,	// (0x0005f695) list_setting_number_pane_ParamLimits

0xd717,	// (0x0005f695) list_setting_number_pane

0xd717,	// (0x0005f695) list_setting_pane_ParamLimits

0xd717,	// (0x0005f695) list_setting_pane

0xd72b,	// (0x0005f6a9) list_single_2graphic_pane_ParamLimits

0xd72b,	// (0x0005f6a9) list_single_2graphic_pane

0xd72b,	// (0x0005f6a9) list_single_graphic_heading_pane_ParamLimits

0xd72b,	// (0x0005f6a9) list_single_graphic_heading_pane

0xd72b,	// (0x0005f6a9) list_single_graphic_pane_ParamLimits

0xd72b,	// (0x0005f6a9) list_single_graphic_pane

0xd72b,	// (0x0005f6a9) list_single_heading_pane_ParamLimits

0xd72b,	// (0x0005f6a9) list_single_heading_pane

0xd72b,	// (0x0005f6a9) list_single_large_graphic_pane_ParamLimits

0xd72b,	// (0x0005f6a9) list_single_large_graphic_pane

0xd72b,	// (0x0005f6a9) list_single_number_heading_pane_ParamLimits

0xd72b,	// (0x0005f6a9) list_single_number_heading_pane

0xd72b,	// (0x0005f6a9) list_single_number_pane_ParamLimits

0xd72b,	// (0x0005f6a9) list_single_number_pane

0xd72b,	// (0x0005f6a9) list_single_pane_ParamLimits

0xd72b,	// (0x0005f6a9) list_single_pane

0xd1d6,	// (0x0005f154) list_highlight_pane_cp1

0x3919,	// (0x00055897) list_single_pane_g1_ParamLimits

0x3919,	// (0x00055897) list_single_pane_g1

0x2df5,	// (0x00054d73) list_single_pane_g2_ParamLimits

0x2df5,	// (0x00054d73) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0006156c) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0006156c) list_single_pane_g

0x102d,	// (0x00052fab) list_single_pane_t1_ParamLimits

0x102d,	// (0x00052fab) list_single_pane_t1

0x3919,	// (0x00055897) list_single_number_pane_g1_ParamLimits

0x3919,	// (0x00055897) list_single_number_pane_g1

0x2df5,	// (0x00054d73) list_single_number_pane_g2_ParamLimits

0x2df5,	// (0x00054d73) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0006156c) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0006156c) list_single_number_pane_g

0x0ad3,	// (0x00052a51) list_single_number_pane_t1_ParamLimits

0x0ad3,	// (0x00052a51) list_single_number_pane_t1

0xbd3e,	// (0x0005dcbc) list_single_number_pane_t2_ParamLimits

0xbd3e,	// (0x0005dcbc) list_single_number_pane_t2

0x0001,

0xf970,	// (0x000618ee) list_single_number_pane_t_ParamLimits

0xf970,	// (0x000618ee) list_single_number_pane_t

0xb312,	// (0x0005d290) list_single_graphic_pane_g1_ParamLimits

0xb312,	// (0x0005d290) list_single_graphic_pane_g1

0x3919,	// (0x00055897) list_single_graphic_pane_g2_ParamLimits

0x3919,	// (0x00055897) list_single_graphic_pane_g2

0x2df5,	// (0x00054d73) list_single_graphic_pane_g3_ParamLimits

0x2df5,	// (0x00054d73) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0006155b) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0006155b) list_single_graphic_pane_g

0x1738,	// (0x000536b6) list_single_graphic_pane_t1_ParamLimits

0x1738,	// (0x000536b6) list_single_graphic_pane_t1

0xb31e,	// (0x0005d29c) list_single_heading_pane_g1_ParamLimits

0xb31e,	// (0x0005d29c) list_single_heading_pane_g1

0x2df5,	// (0x00054d73) list_single_heading_pane_g2_ParamLimits

0x2df5,	// (0x00054d73) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00061562) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00061562) list_single_heading_pane_g

0xb331,	// (0x0005d2af) list_single_heading_pane_t1_ParamLimits

0xb331,	// (0x0005d2af) list_single_heading_pane_t1

0xb347,	// (0x0005d2c5) list_single_heading_pane_t2_ParamLimits

0xb347,	// (0x0005d2c5) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00061567) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00061567) list_single_heading_pane_t

0x3919,	// (0x00055897) list_single_number_heading_pane_g1_ParamLimits

0x3919,	// (0x00055897) list_single_number_heading_pane_g1

0x2df5,	// (0x00054d73) list_single_number_heading_pane_g2_ParamLimits

0x2df5,	// (0x00054d73) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0006156c) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0006156c) list_single_number_heading_pane_g

0x1043,	// (0x00052fc1) list_single_number_heading_pane_t1_ParamLimits

0x1043,	// (0x00052fc1) list_single_number_heading_pane_t1

0xb359,	// (0x0005d2d7) list_single_number_heading_pane_t2_ParamLimits

0xb359,	// (0x0005d2d7) list_single_number_heading_pane_t2

0x1007,	// (0x00052f85) list_single_number_heading_pane_t3_ParamLimits

0x1007,	// (0x00052f85) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x00061571) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x00061571) list_single_number_heading_pane_t

0xb36b,	// (0x0005d2e9) list_single_graphic_heading_pane_g1_ParamLimits

0xb36b,	// (0x0005d2e9) list_single_graphic_heading_pane_g1

0xb383,	// (0x0005d301) list_single_graphic_heading_pane_g4_ParamLimits

0xb383,	// (0x0005d301) list_single_graphic_heading_pane_g4

0x2df5,	// (0x00054d73) list_single_graphic_heading_pane_g5_ParamLimits

0x2df5,	// (0x00054d73) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x00061578) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x00061578) list_single_graphic_heading_pane_g

0x1043,	// (0x00052fc1) list_single_graphic_heading_pane_t1_ParamLimits

0x1043,	// (0x00052fc1) list_single_graphic_heading_pane_t1

0xb394,	// (0x0005d312) list_single_graphic_heading_pane_t2_ParamLimits

0xb394,	// (0x0005d312) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0006157f) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0006157f) list_single_graphic_heading_pane_t

0x2e45,	// (0x00054dc3) list_single_large_graphic_pane_g1_ParamLimits

0x2e45,	// (0x00054dc3) list_single_large_graphic_pane_g1

0x3919,	// (0x00055897) list_single_large_graphic_pane_g2_ParamLimits

0x3919,	// (0x00055897) list_single_large_graphic_pane_g2

0x2df5,	// (0x00054d73) list_single_large_graphic_pane_g3_ParamLimits

0x2df5,	// (0x00054d73) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x00061584) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x00061584) list_single_large_graphic_pane_g

0x4ea1,	// (0x00056e1f) wait_border_pane_g2_copy1

0xb3ac,	// (0x0005d32a) list_single_large_graphic_pane_g4_cp2

0x1043,	// (0x00052fc1) list_single_large_graphic_pane_t1_ParamLimits

0x1043,	// (0x00052fc1) list_single_large_graphic_pane_t1

0x2b96,	// (0x00054b14) list_double_pane_g1_ParamLimits

0x2b96,	// (0x00054b14) list_double_pane_g1

0xb3b4,	// (0x0005d332) list_double_pane_g2_ParamLimits

0xb3b4,	// (0x0005d332) list_double_pane_g2

0x0001,

0xf60d,	// (0x0006158b) list_double_pane_g_ParamLimits

0xf60d,	// (0x0006158b) list_double_pane_g

0xb3c0,	// (0x0005d33e) list_double_pane_t1_ParamLimits

0xb3c0,	// (0x0005d33e) list_double_pane_t1

0xb3d6,	// (0x0005d354) list_double_pane_t2_ParamLimits

0xb3d6,	// (0x0005d354) list_double_pane_t2

0x0001,

0xf612,	// (0x00061590) list_double_pane_t_ParamLimits

0xf612,	// (0x00061590) list_double_pane_t

0xb3e8,	// (0x0005d366) list_double2_pane_g1_ParamLimits

0xb3e8,	// (0x0005d366) list_double2_pane_g1

0xb3f9,	// (0x0005d377) list_double2_pane_g2_ParamLimits

0xb3f9,	// (0x0005d377) list_double2_pane_g2

0x0001,

0xf617,	// (0x00061595) list_double2_pane_g_ParamLimits

0xf617,	// (0x00061595) list_double2_pane_g

0xb405,	// (0x0005d383) list_double2_pane_t1_ParamLimits

0xb405,	// (0x0005d383) list_double2_pane_t1

0xb41b,	// (0x0005d399) list_double2_pane_t2_ParamLimits

0xb41b,	// (0x0005d399) list_double2_pane_t2

0x0001,

0xf61c,	// (0x0006159a) list_double2_pane_t_ParamLimits

0xf61c,	// (0x0006159a) list_double2_pane_t

0x2b96,	// (0x00054b14) list_double_number_pane_g1_ParamLimits

0x2b96,	// (0x00054b14) list_double_number_pane_g1

0xb3b4,	// (0x0005d332) list_double_number_pane_g2_ParamLimits

0xb3b4,	// (0x0005d332) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x0006158b) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x0006158b) list_double_number_pane_g

0xb42d,	// (0x0005d3ab) list_double_number_pane_t1_ParamLimits

0xb42d,	// (0x0005d3ab) list_double_number_pane_t1

0xb43f,	// (0x0005d3bd) list_double_number_pane_t2_ParamLimits

0xb43f,	// (0x0005d3bd) list_double_number_pane_t2

0xb455,	// (0x0005d3d3) list_double_number_pane_t3_ParamLimits

0xb455,	// (0x0005d3d3) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0006159f) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0006159f) list_double_number_pane_t

0xb467,	// (0x0005d3e5) list_double_graphic_pane_g1_ParamLimits

0xb467,	// (0x0005d3e5) list_double_graphic_pane_g1

0xb473,	// (0x0005d3f1) list_double_graphic_pane_g2_ParamLimits

0xb473,	// (0x0005d3f1) list_double_graphic_pane_g2

0xb482,	// (0x0005d400) list_double_graphic_pane_g3_ParamLimits

0xb482,	// (0x0005d400) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x000615a6) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x000615a6) list_double_graphic_pane_g

0xb49a,	// (0x0005d418) list_double_graphic_pane_t1_ParamLimits

0xb49a,	// (0x0005d418) list_double_graphic_pane_t1

0xb4b0,	// (0x0005d42e) list_double_graphic_pane_t2_ParamLimits

0xb4b0,	// (0x0005d42e) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x000615af) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x000615af) list_double_graphic_pane_t

0xb4c2,	// (0x0005d440) list_double2_graphic_pane_g1_ParamLimits

0xb4c2,	// (0x0005d440) list_double2_graphic_pane_g1

0xb4ce,	// (0x0005d44c) list_double2_graphic_pane_g2_ParamLimits

0xb4ce,	// (0x0005d44c) list_double2_graphic_pane_g2

0xb4da,	// (0x0005d458) list_double2_graphic_pane_g3_ParamLimits

0xb4da,	// (0x0005d458) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x000615b4) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x000615b4) list_double2_graphic_pane_g

0xb4e6,	// (0x0005d464) list_double2_graphic_pane_t1_ParamLimits

0xb4e6,	// (0x0005d464) list_double2_graphic_pane_t1

0xb4fc,	// (0x0005d47a) list_double2_graphic_pane_t2_ParamLimits

0xb4fc,	// (0x0005d47a) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x000615bb) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x000615bb) list_double2_graphic_pane_t

0xb50e,	// (0x0005d48c) list_double_large_graphic_pane_g1_ParamLimits

0xb50e,	// (0x0005d48c) list_double_large_graphic_pane_g1

0xb539,	// (0x0005d4b7) list_double_large_graphic_pane_g2_ParamLimits

0xb539,	// (0x0005d4b7) list_double_large_graphic_pane_g2

0xb3b4,	// (0x0005d332) list_double_large_graphic_pane_g3_ParamLimits

0xb3b4,	// (0x0005d332) list_double_large_graphic_pane_g3

0xb54f,	// (0x0005d4cd) list_double_large_graphic_pane_g4_ParamLimits

0xb54f,	// (0x0005d4cd) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x000615c0) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x000615c0) list_double_large_graphic_pane_g

0xb562,	// (0x0005d4e0) list_double_large_graphic_pane_t1_ParamLimits

0xb562,	// (0x0005d4e0) list_double_large_graphic_pane_t1

0xb57b,	// (0x0005d4f9) list_double_large_graphic_pane_t2_ParamLimits

0xb57b,	// (0x0005d4f9) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x000615cb) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x000615cb) list_double_large_graphic_pane_t

0xb58d,	// (0x0005d50b) list_double2_large_graphic_pane_g1_ParamLimits

0xb58d,	// (0x0005d50b) list_double2_large_graphic_pane_g1

0xb599,	// (0x0005d517) list_double2_large_graphic_pane_g2_ParamLimits

0xb599,	// (0x0005d517) list_double2_large_graphic_pane_g2

0xb4da,	// (0x0005d458) list_double2_large_graphic_pane_g3_ParamLimits

0xb4da,	// (0x0005d458) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x000615d0) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x000615d0) list_double2_large_graphic_pane_g

0xb5aa,	// (0x0005d528) list_double2_large_graphic_pane_t1_ParamLimits

0xb5aa,	// (0x0005d528) list_double2_large_graphic_pane_t1

0xb5c0,	// (0x0005d53e) list_double2_large_graphic_pane_t2_ParamLimits

0xb5c0,	// (0x0005d53e) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x000615d7) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x000615d7) list_double2_large_graphic_pane_t

0xb5d2,	// (0x0005d550) list_double_heading_pane_g1_ParamLimits

0xb5d2,	// (0x0005d550) list_double_heading_pane_g1

0xb5e3,	// (0x0005d561) list_double_heading_pane_g2_ParamLimits

0xb5e3,	// (0x0005d561) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x000615dc) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x000615dc) list_double_heading_pane_g

0xb5ef,	// (0x0005d56d) list_double_heading_pane_t1_ParamLimits

0xb5ef,	// (0x0005d56d) list_double_heading_pane_t1

0xb41b,	// (0x0005d399) list_double_heading_pane_t2_ParamLimits

0xb41b,	// (0x0005d399) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x000615e1) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x000615e1) list_double_heading_pane_t

0xb605,	// (0x0005d583) list_double_graphic_heading_pane_g1_ParamLimits

0xb605,	// (0x0005d583) list_double_graphic_heading_pane_g1

0xb5d2,	// (0x0005d550) list_double_graphic_heading_pane_g2_ParamLimits

0xb5d2,	// (0x0005d550) list_double_graphic_heading_pane_g2

0xb5e3,	// (0x0005d561) list_double_graphic_heading_pane_g3_ParamLimits

0xb5e3,	// (0x0005d561) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x000615e6) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x000615e6) list_double_graphic_heading_pane_g

0xb611,	// (0x0005d58f) list_double_graphic_heading_pane_t1_ParamLimits

0xb611,	// (0x0005d58f) list_double_graphic_heading_pane_t1

0xb4fc,	// (0x0005d47a) list_double_graphic_heading_pane_t2_ParamLimits

0xb4fc,	// (0x0005d47a) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x000615ed) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x000615ed) list_double_graphic_heading_pane_t

0xb627,	// (0x0005d5a5) list_double_time_pane_g1_ParamLimits

0xb627,	// (0x0005d5a5) list_double_time_pane_g1

0xb638,	// (0x0005d5b6) list_double_time_pane_g2_ParamLimits

0xb638,	// (0x0005d5b6) list_double_time_pane_g2

0x0001,

0xf674,	// (0x000615f2) list_double_time_pane_g_ParamLimits

0xf674,	// (0x000615f2) list_double_time_pane_g

0xb644,	// (0x0005d5c2) list_double_time_pane_t1_ParamLimits

0xb644,	// (0x0005d5c2) list_double_time_pane_t1

0xb65a,	// (0x0005d5d8) list_double_time_pane_t2_ParamLimits

0xb65a,	// (0x0005d5d8) list_double_time_pane_t2

0xb66c,	// (0x0005d5ea) list_double_time_pane_t3_ParamLimits

0xb66c,	// (0x0005d5ea) list_double_time_pane_t3

0xb67e,	// (0x0005d5fc) list_double_time_pane_t4_ParamLimits

0xb67e,	// (0x0005d5fc) list_double_time_pane_t4

0x0003,

0xf679,	// (0x000615f7) list_double_time_pane_t_ParamLimits

0xf679,	// (0x000615f7) list_double_time_pane_t

0xb690,	// (0x0005d60e) list_setting_pane_g1_ParamLimits

0xb690,	// (0x0005d60e) list_setting_pane_g1

0xb3f9,	// (0x0005d377) list_setting_pane_g2_ParamLimits

0xb3f9,	// (0x0005d377) list_setting_pane_g2

0x0001,

0xf682,	// (0x00061600) list_setting_pane_g_ParamLimits

0xf682,	// (0x00061600) list_setting_pane_g

0xb69c,	// (0x0005d61a) list_setting_pane_t1_ParamLimits

0xb69c,	// (0x0005d61a) list_setting_pane_t1

0xb6b6,	// (0x0005d634) list_setting_pane_t2_ParamLimits

0xb6b6,	// (0x0005d634) list_setting_pane_t2

0x0002,

0xf687,	// (0x00061605) list_setting_pane_t_ParamLimits

0xf687,	// (0x00061605) list_setting_pane_t

0xb6f5,	// (0x0005d673) set_value_pane_cp_ParamLimits

0xb6f5,	// (0x0005d673) set_value_pane_cp

0xb703,	// (0x0005d681) list_setting_number_pane_g1_ParamLimits

0xb703,	// (0x0005d681) list_setting_number_pane_g1

0xb70f,	// (0x0005d68d) list_setting_number_pane_g2_ParamLimits

0xb70f,	// (0x0005d68d) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x0006160c) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x0006160c) list_setting_number_pane_g

0xb71b,	// (0x0005d699) list_setting_number_pane_t1_ParamLimits

0xb71b,	// (0x0005d699) list_setting_number_pane_t1

0xb734,	// (0x0005d6b2) list_setting_number_pane_t2_ParamLimits

0xb734,	// (0x0005d6b2) list_setting_number_pane_t2

0xb74e,	// (0x0005d6cc) list_setting_number_pane_t3_ParamLimits

0xb74e,	// (0x0005d6cc) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x00061611) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x00061611) list_setting_number_pane_t

0xb6f5,	// (0x0005d673) set_value_pane_ParamLimits

0xb6f5,	// (0x0005d673) set_value_pane

0x2b23,	// (0x00054aa1) bg_set_opt_pane_ParamLimits

0x2b23,	// (0x00054aa1) bg_set_opt_pane

0x01d6,	// (0x00052154) set_value_pane_t1

0x2b44,	// (0x00054ac2) slider_set_pane_cp3

0x2b4d,	// (0x00054acb) volume_small_pane_cp

0x2b56,	// (0x00054ad4) list_form_gen_pane

0x2b5f,	// (0x00054add) scroll_pane_cp8

0xb791,	// (0x0005d70f) form_field_data_pane_ParamLimits

0xb791,	// (0x0005d70f) form_field_data_pane

0xb7ae,	// (0x0005d72c) form_field_data_wide_pane_ParamLimits

0xb7ae,	// (0x0005d72c) form_field_data_wide_pane

0xb7d2,	// (0x0005d750) form_field_popup_pane_ParamLimits

0xb7d2,	// (0x0005d750) form_field_popup_pane

0x025d,	// (0x000521db) form_field_popup_wide_pane_ParamLimits

0x025d,	// (0x000521db) form_field_popup_wide_pane

0x027e,	// (0x000521fc) form_field_slider_pane_ParamLimits

0x027e,	// (0x000521fc) form_field_slider_pane

0x0291,	// (0x0005220f) form_field_slider_wide_pane_ParamLimits

0x0291,	// (0x0005220f) form_field_slider_wide_pane

0x2b70,	// (0x00054aee) data_form_pane

0xb7fe,	// (0x0005d77c) form_field_data_pane_t1

0x2b7c,	// (0x00054afa) input_focus_pane

0x2b8a,	// (0x00054b08) data_form_wide_pane

0x02d4,	// (0x00052252) form_field_data_wide_pane_t1

0x284d,	// (0x000547cb) input_focus_pane_cp6

0xb818,	// (0x0005d796) form_field_popup_pane_t1

0x2b7c,	// (0x00054afa) input_focus_pane_cp7

0x2bb6,	// (0x00054b34) list_form_pane

0x0318,	// (0x00052296) form_field_popup_wide_pane_t1

0x2b7c,	// (0x00054afa) input_focus_pane_cp8

0x2bc2,	// (0x00054b40) list_form_wide_pane

0xb83a,	// (0x0005d7b8) form_field_slider_pane_t1_ParamLimits

0xb83a,	// (0x0005d7b8) form_field_slider_pane_t1

0xb852,	// (0x0005d7d0) form_field_slider_pane_t2_ParamLimits

0xb852,	// (0x0005d7d0) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x00061621) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x00061621) form_field_slider_pane_t

0x24d1,	// (0x0005444f) input_focus_pane_cp9_ParamLimits

0x24d1,	// (0x0005444f) input_focus_pane_cp9

0xb867,	// (0x0005d7e5) slider_cont_pane_ParamLimits

0xb867,	// (0x0005d7e5) slider_cont_pane

0x2bd1,	// (0x00054b4f) form_field_slider_wide_pane_t1_ParamLimits

0x2bd1,	// (0x00054b4f) form_field_slider_wide_pane_t1

0x0376,	// (0x000522f4) form_field_slider_wide_pane_t2_ParamLimits

0x0376,	// (0x000522f4) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x00061626) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x00061626) form_field_slider_wide_pane_t

0x24d1,	// (0x0005444f) input_focus_pane_cp10_ParamLimits

0x24d1,	// (0x0005444f) input_focus_pane_cp10

0xb87b,	// (0x0005d7f9) slider_cont_pane_cp1_ParamLimits

0xb87b,	// (0x0005d7f9) slider_cont_pane_cp1

0xb88f,	// (0x0005d80d) slider_form_pane_cp

0x2be3,	// (0x00054b61) input_focus_pane_g1

0x2beb,	// (0x00054b69) input_focus_pane_g2

0x2bf3,	// (0x00054b71) input_focus_pane_g3

0x2bfb,	// (0x00054b79) input_focus_pane_g4

0x2c03,	// (0x00054b81) input_focus_pane_g5

0x2c0b,	// (0x00054b89) input_focus_pane_g6

0x2c13,	// (0x00054b91) input_focus_pane_g7

0x2c1b,	// (0x00054b99) input_focus_pane_g8

0x2c23,	// (0x00054ba1) input_focus_pane_g9

0xd1cc,	// (0x0005f14a) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x0006162b) input_focus_pane_g

0x4eaa,	// (0x00056e28) wait_border_pane_g3_copy1

0xb897,	// (0x0005d815) data_form_pane_t1

0xd1cc,	// (0x0005f14a) wait_anim_pane_g1_copy1

0xbd50,	// (0x0005dcce) data_form_wide_pane_t1

0x03c3,	// (0x00052341) list_form_graphic_pane_cp_ParamLimits

0x03c3,	// (0x00052341) list_form_graphic_pane_cp

0x5e2f,	// (0x00057dad) slider_form_pane_g1

0x5e38,	// (0x00057db6) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0006191e) slider_form_pane_g

0xb8b3,	// (0x0005d831) list_form_graphic_pane_ParamLimits

0xb8b3,	// (0x0005d831) list_form_graphic_pane

0x03d5,	// (0x00052353) list_form_graphic_pane_g1

0x03dd,	// (0x0005235b) list_form_graphic_pane_t1_ParamLimits

0x03dd,	// (0x0005235b) list_form_graphic_pane_t1

0x2255,	// (0x000541d3) list_highlight_pane_cp5_ParamLimits

0x2255,	// (0x000541d3) list_highlight_pane_cp5

0xb8c4,	// (0x0005d842) find_pane_g1

0x2c34,	// (0x00054bb2) input_find_pane

0xb8cd,	// (0x0005d84b) input_find_pane_g1_ParamLimits

0xb8cd,	// (0x0005d84b) input_find_pane_g1

0xb8d9,	// (0x0005d857) input_find_pane_t1_ParamLimits

0xb8d9,	// (0x0005d857) input_find_pane_t1

0xb8ee,	// (0x0005d86c) input_find_pane_t2_ParamLimits

0xb8ee,	// (0x0005d86c) input_find_pane_t2

0x0001,

0xf6c2,	// (0x00061640) input_find_pane_t_ParamLimits

0xf6c2,	// (0x00061640) input_find_pane_t

0x2c3d,	// (0x00054bbb) input_focus_pane_cp5_ParamLimits

0x2c3d,	// (0x00054bbb) input_focus_pane_cp5

0xb90f,	// (0x0005d88d) bg_popup_window_pane_cp2_ParamLimits

0xb90f,	// (0x0005d88d) bg_popup_window_pane_cp2

0xb91c,	// (0x0005d89a) listscroll_menu_pane_ParamLimits

0xb91c,	// (0x0005d89a) listscroll_menu_pane

0xb928,	// (0x0005d8a6) popup_submenu_window_ParamLimits

0xb928,	// (0x0005d8a6) popup_submenu_window

0x2ca0,	// (0x00054c1e) find_popup_pane_g1

0x2ca8,	// (0x00054c26) input_popup_find_pane_cp

0x2c3d,	// (0x00054bbb) input_focus_pane_cp4_ParamLimits

0x2c3d,	// (0x00054bbb) input_focus_pane_cp4

0x2cc0,	// (0x00054c3e) input_popup_find_pane_t1_ParamLimits

0x2cc0,	// (0x00054c3e) input_popup_find_pane_t1

0xd1d6,	// (0x0005f154) bg_popup_sub_pane_cp

0x2cee,	// (0x00054c6c) listscroll_popup_sub_pane

0x2cf6,	// (0x00054c74) list_submenu_pane_ParamLimits

0x2cf6,	// (0x00054c74) list_submenu_pane

0x2d07,	// (0x00054c85) scroll_pane_cp4

0x2d0f,	// (0x00054c8d) list_single_popup_submenu_pane_ParamLimits

0x2d0f,	// (0x00054c8d) list_single_popup_submenu_pane

0x2d24,	// (0x00054ca2) list_single_popup_submenu_pane_g1

0x2d2c,	// (0x00054caa) list_single_popup_submenu_pane_t1_ParamLimits

0x2d2c,	// (0x00054caa) list_single_popup_submenu_pane_t1

0x24d1,	// (0x0005444f) bg_active_tab_pane_cp1_ParamLimits

0x24d1,	// (0x0005444f) bg_active_tab_pane_cp1

0xb966,	// (0x0005d8e4) tabs_2_active_pane_g1

0xb96e,	// (0x0005d8ec) tabs_2_active_pane_t1

0x24d1,	// (0x0005444f) bg_passive_tab_pane_cp1_ParamLimits

0x24d1,	// (0x0005444f) bg_passive_tab_pane_cp1

0xb966,	// (0x0005d8e4) tabs_2_passive_pane_g1

0xb96e,	// (0x0005d8ec) tabs_2_passive_pane_t1

0x2255,	// (0x000541d3) bg_active_tab_pane_cp4

0xb980,	// (0x0005d8fe) tabs_2_long_active_pane_t1

0x3d26,	// (0x00055ca4) bg_passive_tab_pane_cp4

0x0b16,	// (0x00052a94) list_single_midp_graphic_pane_g4_ParamLimits

0x2255,	// (0x000541d3) bg_active_tab_pane_cp5

0xc370,	// (0x0005e2ee) tabs_3_long_active_pane_t1

0x3d26,	// (0x00055ca4) bg_passive_tab_pane_cp5

0x0b16,	// (0x00052a94) list_single_midp_graphic_pane_g4

0x2255,	// (0x000541d3) bg_popup_window_pane_cp13_ParamLimits

0x2255,	// (0x000541d3) bg_popup_window_pane_cp13

0x2da3,	// (0x00054d21) listscroll_popup_fast_pane_ParamLimits

0x2da3,	// (0x00054d21) listscroll_popup_fast_pane

0x2db2,	// (0x00054d30) grid_popup_fast_pane_ParamLimits

0x2db2,	// (0x00054d30) grid_popup_fast_pane

0x2dc4,	// (0x00054d42) scroll_pane_cp9_ParamLimits

0x2dc4,	// (0x00054d42) scroll_pane_cp9

0x7793,	// (0x00059711) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7793,	// (0x00059711) list_single_graphic_hl_pane_t1_cp2

0x2fad,	// (0x00054f2b) input_focus_pane_cp20_ParamLimits

0x2fad,	// (0x00054f2b) input_focus_pane_cp20

0x2fbb,	// (0x00054f39) query_popup_data_pane_t1_ParamLimits

0x2fbb,	// (0x00054f39) query_popup_data_pane_t1

0x2fce,	// (0x00054f4c) query_popup_data_pane_t2_ParamLimits

0x2fce,	// (0x00054f4c) query_popup_data_pane_t2

0x3014,	// (0x00054f92) query_popup_data_pane_t3_ParamLimits

0x3014,	// (0x00054f92) query_popup_data_pane_t3

0x3055,	// (0x00054fd3) query_popup_data_pane_t4_ParamLimits

0x3055,	// (0x00054fd3) query_popup_data_pane_t4

0x3091,	// (0x0005500f) query_popup_data_pane_t5_ParamLimits

0x3091,	// (0x0005500f) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x00061645) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x00061645) query_popup_data_pane_t

0x2be3,	// (0x00054b61) bg_set_opt_pane_g1

0x2beb,	// (0x00054b69) bg_set_opt_pane_g2

0x2bf3,	// (0x00054b71) bg_set_opt_pane_g3

0x2bfb,	// (0x00054b79) bg_set_opt_pane_g4

0x2c03,	// (0x00054b81) bg_set_opt_pane_g5

0x2c0b,	// (0x00054b89) bg_set_opt_pane_g6

0x2c13,	// (0x00054b91) bg_set_opt_pane_g7

0x2c1b,	// (0x00054b99) bg_set_opt_pane_g8

0x2c23,	// (0x00054ba1) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x00061650) bg_set_opt_pane_g

0x0739,	// (0x000526b7) control_top_pane_stacon_ParamLimits

0x0739,	// (0x000526b7) control_top_pane_stacon

0x078c,	// (0x0005270a) signal_pane_stacon_ParamLimits

0x078c,	// (0x0005270a) signal_pane_stacon

0x363d,	// (0x000555bb) stacon_top_pane_g1_ParamLimits

0x363d,	// (0x000555bb) stacon_top_pane_g1

0x07b1,	// (0x0005272f) title_pane_stacon_ParamLimits

0x07b1,	// (0x0005272f) title_pane_stacon

0x07db,	// (0x00052759) uni_indicator_pane_stacon_ParamLimits

0x07db,	// (0x00052759) uni_indicator_pane_stacon

0x07f3,	// (0x00052771) battery_pane_stacon_ParamLimits

0x07f3,	// (0x00052771) battery_pane_stacon

0x0837,	// (0x000527b5) control_bottom_pane_stacon_ParamLimits

0x0837,	// (0x000527b5) control_bottom_pane_stacon

0x085a,	// (0x000527d8) navi_pane_stacon_ParamLimits

0x085a,	// (0x000527d8) navi_pane_stacon

0x365f,	// (0x000555dd) stacon_bottom_pane_g1_ParamLimits

0x365f,	// (0x000555dd) stacon_bottom_pane_g1

0x0428,	// (0x000523a6) aid_levels_signal_lsc_ParamLimits

0x0428,	// (0x000523a6) aid_levels_signal_lsc

0x043f,	// (0x000523bd) signal_pane_stacon_g1_ParamLimits

0x043f,	// (0x000523bd) signal_pane_stacon_g1

0x0453,	// (0x000523d1) signal_pane_stacon_g2_ParamLimits

0x0453,	// (0x000523d1) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x00061663) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x00061663) signal_pane_stacon_g

0x0488,	// (0x00052406) title_pane_stacon_t1_ParamLimits

0x0488,	// (0x00052406) title_pane_stacon_t1

0x30d5,	// (0x00055053) uni_indicator_pane_stacon_g1

0x30df,	// (0x0005505d) uni_indicator_pane_stacon_g2

0x30e9,	// (0x00055067) uni_indicator_pane_stacon_g3

0x30f3,	// (0x00055071) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0006166f) uni_indicator_pane_stacon_g

0x04ad,	// (0x0005242b) control_top_pane_stacon_g1

0x04b5,	// (0x00052433) control_top_pane_stacon_t1_ParamLimits

0x04b5,	// (0x00052433) control_top_pane_stacon_t1

0x04ec,	// (0x0005246a) aid_levels_battery_lsc_ParamLimits

0x04ec,	// (0x0005246a) aid_levels_battery_lsc

0x0504,	// (0x00052482) battery_pane_stacon_g1_ParamLimits

0x0504,	// (0x00052482) battery_pane_stacon_g1

0x0517,	// (0x00052495) battery_pane_stacon_g2_ParamLimits

0x0517,	// (0x00052495) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x00061678) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x00061678) battery_pane_stacon_g

0x0555,	// (0x000524d3) navi_icon_pane_stacon

0x0569,	// (0x000524e7) navi_navi_pane_stacon

0x0555,	// (0x000524d3) navi_text_pane_stacon

0x04ad,	// (0x0005242b) control_bottom_pane_stacon_g1

0x057f,	// (0x000524fd) control_bottom_pane_stacon_t1_ParamLimits

0x057f,	// (0x000524fd) control_bottom_pane_stacon_t1

0xc382,	// (0x0005e300) grid_app_pane_ParamLimits

0xc382,	// (0x0005e300) grid_app_pane

0xc3ba,	// (0x0005e338) scroll_pane_cp15_ParamLimits

0xc3ba,	// (0x0005e338) scroll_pane_cp15

0xc3d7,	// (0x0005e355) cell_app_pane_ParamLimits

0xc3d7,	// (0x0005e355) cell_app_pane

0xc418,	// (0x0005e396) cell_app_pane_g1_ParamLimits

0xc418,	// (0x0005e396) cell_app_pane_g1

0x31a0,	// (0x0005511e) cell_app_pane_g2_ParamLimits

0x31a0,	// (0x0005511e) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x0006167d) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x0006167d) cell_app_pane_g

0x31ac,	// (0x0005512a) cell_app_pane_t1_ParamLimits

0x31ac,	// (0x0005512a) cell_app_pane_t1

0x31be,	// (0x0005513c) grid_highlight_pane_ParamLimits

0x31be,	// (0x0005513c) grid_highlight_pane

0x2be3,	// (0x00054b61) cell_highlight_pane_g1

0x2beb,	// (0x00054b69) cell_highlight_pane_g2

0x2bf3,	// (0x00054b71) cell_highlight_pane_g3

0x2bfb,	// (0x00054b79) cell_highlight_pane_g4

0x2c03,	// (0x00054b81) cell_highlight_pane_g5

0x2c0b,	// (0x00054b89) cell_highlight_pane_g6

0x2c13,	// (0x00054b91) cell_highlight_pane_g7

0x2c1b,	// (0x00054b99) cell_highlight_pane_g8

0x2c23,	// (0x00054ba1) cell_highlight_pane_g9

0xd1cc,	// (0x0005f14a) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x0006162b) cell_highlight_pane_g

0x31cf,	// (0x0005514d) bg_scroll_pane

0x05c9,	// (0x00052547) scroll_handle_pane

0x3216,	// (0x00055194) scroll_bg_pane_g1

0x322b,	// (0x000551a9) scroll_bg_pane_g2

0x3243,	// (0x000551c1) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x00061682) scroll_bg_pane_g

0x3258,	// (0x000551d6) scroll_handle_focus_pane_ParamLimits

0x3258,	// (0x000551d6) scroll_handle_focus_pane

0x3216,	// (0x00055194) scroll_handle_pane_g1

0x3265,	// (0x000551e3) scroll_handle_pane_g2

0x3243,	// (0x000551c1) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x00061689) scroll_handle_pane_g

0x2c3d,	// (0x00054bbb) bg_popup_sub_pane_cp21_ParamLimits

0x2c3d,	// (0x00054bbb) bg_popup_sub_pane_cp21

0x3279,	// (0x000551f7) popup_fep_japan_predictive_window_t1_ParamLimits

0x3279,	// (0x000551f7) popup_fep_japan_predictive_window_t1

0x3290,	// (0x0005520e) popup_fep_japan_predictive_window_t2_ParamLimits

0x3290,	// (0x0005520e) popup_fep_japan_predictive_window_t2

0x32c3,	// (0x00055241) popup_fep_japan_predictive_window_t3_ParamLimits

0x32c3,	// (0x00055241) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x00061690) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x00061690) popup_fep_japan_predictive_window_t

0xd1d6,	// (0x0005f154) bg_popup_sub_pane_cp23

0x32fa,	// (0x00055278) listscroll_japin_cand_pane

0x3302,	// (0x00055280) popup_fep_japan_candidate_window_t1

0x3310,	// (0x0005528e) candidate_pane_ParamLimits

0x3310,	// (0x0005528e) candidate_pane

0x3322,	// (0x000552a0) scroll_pane_cp30

0x332c,	// (0x000552aa) list_single_popup_jap_candidate_pane_ParamLimits

0x332c,	// (0x000552aa) list_single_popup_jap_candidate_pane

0xd1d6,	// (0x0005f154) list_highlight_pane_cp30

0x3340,	// (0x000552be) list_single_popup_jap_candidate_pane_t1

0xc43c,	// (0x0005e3ba) level_1_signal

0xc44e,	// (0x0005e3cc) level_2_signal

0xc461,	// (0x0005e3df) level_3_signal

0xc474,	// (0x0005e3f2) level_4_signal

0xc487,	// (0x0005e405) level_5_signal

0xc49a,	// (0x0005e418) level_6_signal

0xc4ad,	// (0x0005e42b) level_7_signal

0xc43c,	// (0x0005e3ba) level_1_battery

0xc44e,	// (0x0005e3cc) level_2_battery

0xc461,	// (0x0005e3df) level_3_battery

0xc474,	// (0x0005e3f2) level_4_battery

0xc487,	// (0x0005e405) level_5_battery

0xc49a,	// (0x0005e418) level_6_battery

0xc4ad,	// (0x0005e42b) level_7_battery

0x33c2,	// (0x00055340) list_menu_pane_ParamLimits

0x33c2,	// (0x00055340) list_menu_pane

0x33d3,	// (0x00055351) scroll_pane_cp25_ParamLimits

0x33d3,	// (0x00055351) scroll_pane_cp25

0x33ec,	// (0x0005536a) list_double2_graphic_pane_cp2_ParamLimits

0x33ec,	// (0x0005536a) list_double2_graphic_pane_cp2

0x33ec,	// (0x0005536a) list_double2_large_graphic_pane_cp2_ParamLimits

0x33ec,	// (0x0005536a) list_double2_large_graphic_pane_cp2

0x33ec,	// (0x0005536a) list_double2_pane_cp2_ParamLimits

0x33ec,	// (0x0005536a) list_double2_pane_cp2

0x33ec,	// (0x0005536a) list_double_graphic_pane_cp2_ParamLimits

0x33ec,	// (0x0005536a) list_double_graphic_pane_cp2

0x33ec,	// (0x0005536a) list_double_large_graphic_pane_cp2_ParamLimits

0x33ec,	// (0x0005536a) list_double_large_graphic_pane_cp2

0x33ec,	// (0x0005536a) list_double_number_pane_cp2_ParamLimits

0x33ec,	// (0x0005536a) list_double_number_pane_cp2

0x33ec,	// (0x0005536a) list_double_pane_cp2_ParamLimits

0x33ec,	// (0x0005536a) list_double_pane_cp2

0xc4c0,	// (0x0005e43e) list_single_2graphic_pane_cp2_ParamLimits

0xc4c0,	// (0x0005e43e) list_single_2graphic_pane_cp2

0xc4c0,	// (0x0005e43e) list_single_graphic_heading_pane_cp2_ParamLimits

0xc4c0,	// (0x0005e43e) list_single_graphic_heading_pane_cp2

0xc4c0,	// (0x0005e43e) list_single_graphic_pane_cp2_ParamLimits

0xc4c0,	// (0x0005e43e) list_single_graphic_pane_cp2

0xc4c0,	// (0x0005e43e) list_single_heading_pane_cp2_ParamLimits

0xc4c0,	// (0x0005e43e) list_single_heading_pane_cp2

0x342f,	// (0x000553ad) list_single_large_graphic_pane_cp2_ParamLimits

0x342f,	// (0x000553ad) list_single_large_graphic_pane_cp2

0xc4c0,	// (0x0005e43e) list_single_number_heading_pane_cp2_ParamLimits

0xc4c0,	// (0x0005e43e) list_single_number_heading_pane_cp2

0xc4c0,	// (0x0005e43e) list_single_number_pane_cp2_ParamLimits

0xc4c0,	// (0x0005e43e) list_single_number_pane_cp2

0xc4c0,	// (0x0005e43e) list_single_pane_cp2_ParamLimits

0xc4c0,	// (0x0005e43e) list_single_pane_cp2

0x3484,	// (0x00055402) bg_popup_sub_pane_cp22

0x067b,	// (0x000525f9) popup_side_volume_key_window_g1

0x06a5,	// (0x00052623) popup_side_volume_key_window_t1

0x06c3,	// (0x00052641) volume_small_pane_cp1

0x24d1,	// (0x0005444f) bg_popup_sub_pane_cp24_ParamLimits

0x24d1,	// (0x0005444f) bg_popup_sub_pane_cp24

0x349a,	// (0x00055418) fep_china_uni_candidate_pane_ParamLimits

0x349a,	// (0x00055418) fep_china_uni_candidate_pane

0x34ae,	// (0x0005542c) fep_china_uni_entry_pane

0x34be,	// (0x0005543c) popup_fep_china_uni_window_g1

0x34da,	// (0x00055458) fep_china_uni_entry_pane_g1

0x34e4,	// (0x00055462) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x000616bd) fep_china_uni_entry_pane_g

0x34ee,	// (0x0005546c) fep_entry_item_pane

0x34f8,	// (0x00055476) fep_candidate_item_pane

0x3500,	// (0x0005547e) fep_china_uni_candidate_pane_g1

0x350a,	// (0x00055488) fep_china_uni_candidate_pane_g2

0x3512,	// (0x00055490) fep_china_uni_candidate_pane_g3

0x351a,	// (0x00055498) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x000616c2) fep_china_uni_candidate_pane_g

0xd1cc,	// (0x0005f14a) fep_entry_item_pane_g1

0x3524,	// (0x000554a2) fep_entry_item_pane_t1_ParamLimits

0x3524,	// (0x000554a2) fep_entry_item_pane_t1

0x353a,	// (0x000554b8) fep_candidate_item_pane_t1_ParamLimits

0x353a,	// (0x000554b8) fep_candidate_item_pane_t1

0x354f,	// (0x000554cd) fep_candidate_item_pane_t2_ParamLimits

0x354f,	// (0x000554cd) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x000616cb) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x000616cb) fep_candidate_item_pane_t

0x2255,	// (0x000541d3) list_highlight_pane_cp31_ParamLimits

0x2255,	// (0x000541d3) list_highlight_pane_cp31

0x3561,	// (0x000554df) level_1_signal_lsc

0x356a,	// (0x000554e8) level_2_signal_lsc

0x3573,	// (0x000554f1) level_3_signal_lsc

0x357c,	// (0x000554fa) level_4_signal_lsc

0x3585,	// (0x00055503) level_5_signal_lsc

0x358e,	// (0x0005550c) level_6_signal_lsc

0x3597,	// (0x00055515) level_7_signal_lsc

0x3597,	// (0x00055515) level_1_battery_lsc

0x35a0,	// (0x0005551e) level_2_battery_lsc

0x35a9,	// (0x00055527) level_3_battery_lsc

0x35b2,	// (0x00055530) level_4_battery_lsc

0x35bb,	// (0x00055539) level_5_battery_lsc

0x35c4,	// (0x00055542) level_6_battery_lsc

0x3561,	// (0x000554df) level_7_battery_lsc

0x35cd,	// (0x0005554b) scroll_handle_focus_pane_g1

0x35d6,	// (0x00055554) scroll_handle_focus_pane_g2

0x35df,	// (0x0005555d) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x000616d0) scroll_handle_focus_pane_g

0xb99c,	// (0x0005d91a) list_single_2graphic_pane_g1_ParamLimits

0xb99c,	// (0x0005d91a) list_single_2graphic_pane_g1

0xb383,	// (0x0005d301) list_single_2graphic_pane_g2_ParamLimits

0xb383,	// (0x0005d301) list_single_2graphic_pane_g2

0x2df5,	// (0x00054d73) list_single_2graphic_pane_g3_ParamLimits

0x2df5,	// (0x00054d73) list_single_2graphic_pane_g3

0xc523,	// (0x0005e4a1) list_single_2graphic_pane_g4_ParamLimits

0xc523,	// (0x0005e4a1) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x000616d7) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x000616d7) list_single_2graphic_pane_g

0xb9a8,	// (0x0005d926) list_single_2graphic_pane_t1_ParamLimits

0xb9a8,	// (0x0005d926) list_single_2graphic_pane_t1

0xc534,	// (0x0005e4b2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc534,	// (0x0005e4b2) list_double2_graphic_large_graphic_pane_g1

0xb599,	// (0x0005d517) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb599,	// (0x0005d517) list_double2_graphic_large_graphic_pane_g2

0xb4da,	// (0x0005d458) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb4da,	// (0x0005d458) list_double2_graphic_large_graphic_pane_g3

0xb9d6,	// (0x0005d954) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb9d6,	// (0x0005d954) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x000616e0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x000616e0) list_double2_graphic_large_graphic_pane_g

0xb9e2,	// (0x0005d960) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb9e2,	// (0x0005d960) list_double2_graphic_large_graphic_pane_t1

0xb9f8,	// (0x0005d976) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb9f8,	// (0x0005d976) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x000616e9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x000616e9) list_double2_graphic_large_graphic_pane_t

0x3721,	// (0x0005569f) popup_fast_swap_window_ParamLimits

0x3721,	// (0x0005569f) popup_fast_swap_window

0x373f,	// (0x000556bd) popup_side_volume_key_window

0x375d,	// (0x000556db) stacon_top_pane

0x3767,	// (0x000556e5) status_pane_ParamLimits

0x3767,	// (0x000556e5) status_pane

0x375d,	// (0x000556db) status_small_pane

0xd1d6,	// (0x0005f154) control_pane

0xd1d6,	// (0x0005f154) stacon_bottom_pane

0x2b5f,	// (0x00054add) scroll_pane_cp121

0x2b56,	// (0x00054ad4) set_content_pane

0xc546,	// (0x0005e4c4) bg_active_tab_pane_g1_cp1

0x35f1,	// (0x0005556f) bg_active_tab_pane_g2_cp1

0xc54f,	// (0x0005e4cd) bg_active_tab_pane_g3_cp1

0xc546,	// (0x0005e4c4) bg_passive_tab_pane_g1_cp1

0x35f1,	// (0x0005556f) bg_passive_tab_pane_g2_cp1

0xc54f,	// (0x0005e4cd) bg_passive_tab_pane_g3_cp1

0xc558,	// (0x0005e4d6) bg_active_tab_pane_g1_cp2

0x35f1,	// (0x0005556f) bg_active_tab_pane_g2_cp2

0xc561,	// (0x0005e4df) bg_active_tab_pane_g3_cp2

0xc558,	// (0x0005e4d6) bg_passive_tab_pane_g1_cp2

0x35f1,	// (0x0005556f) bg_passive_tab_pane_g2_cp2

0xc561,	// (0x0005e4df) bg_passive_tab_pane_g3_cp2

0xc56a,	// (0x0005e4e8) bg_active_tab_pane_g1_cp3

0x35f1,	// (0x0005556f) bg_active_tab_pane_g2_cp3

0xc573,	// (0x0005e4f1) bg_active_tab_pane_g3_cp3

0xc56a,	// (0x0005e4e8) bg_passive_tab_pane_g1_cp3

0x35f1,	// (0x0005556f) bg_passive_tab_pane_g2_cp3

0xc573,	// (0x0005e4f1) bg_passive_tab_pane_g3_cp3

0xc57c,	// (0x0005e4fa) bg_active_tab_pane_g1_cp4

0x35f1,	// (0x0005556f) bg_active_tab_pane_g2_cp4

0xc585,	// (0x0005e503) bg_active_tab_pane_g3_cp4

0xc57c,	// (0x0005e4fa) bg_passive_tab_pane_g1_cp4

0x35f1,	// (0x0005556f) bg_passive_tab_pane_g2_cp4

0xc585,	// (0x0005e503) bg_passive_tab_pane_g3_cp4

0x367b,	// (0x000555f9) bg_active_tab_pane_g1_cp5

0x35f1,	// (0x0005556f) bg_active_tab_pane_g2_cp5

0x3684,	// (0x00055602) bg_active_tab_pane_g3_cp5

0x367b,	// (0x000555f9) bg_passive_tab_pane_g1_cp5

0x35f1,	// (0x0005556f) bg_passive_tab_pane_g2_cp5

0x3684,	// (0x00055602) bg_passive_tab_pane_g3_cp5

0x2d0f,	// (0x00054c8d) list_set_graphic_pane_ParamLimits

0x2d0f,	// (0x00054c8d) list_set_graphic_pane

0xd1d6,	// (0x0005f154) bg_set_opt_pane_cp4

0xc58e,	// (0x0005e50c) list_set_graphic_pane_g1_ParamLimits

0xc58e,	// (0x0005e50c) list_set_graphic_pane_g1

0xc59a,	// (0x0005e518) list_set_graphic_pane_g2_ParamLimits

0xc59a,	// (0x0005e518) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x000616ee) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x000616ee) list_set_graphic_pane_g

0x0009,

0xfae8,	// (0x00061a66) volume_small_pane_cp_g

0x36d2,	// (0x00055650) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x36d2,	// (0x00055650) list_double2_large_graphic_pane_g1_cp2

0x36e0,	// (0x0005565e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x36e0,	// (0x0005565e) list_double2_large_graphic_pane_g2_cp2

0x36f1,	// (0x0005566f) list_double2_large_graphic_pane_g3_cp2

0x36f9,	// (0x00055677) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x36f9,	// (0x00055677) list_double2_large_graphic_pane_t1_cp2

0x370f,	// (0x0005568d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x370f,	// (0x0005568d) list_double2_large_graphic_pane_t2_cp2

0x5994,	// (0x00057912) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5994,	// (0x00057912) list_double_large_graphic_pane_g1_cp2

0x59a7,	// (0x00057925) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x59a7,	// (0x00057925) list_double_large_graphic_pane_g2_cp2

0x3885,	// (0x00055803) list_double_large_graphic_pane_g3_cp2

0x59b8,	// (0x00057936) list_double_large_graphic_pane_g4_cp

0x59c0,	// (0x0005793e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x59c0,	// (0x0005793e) list_double_large_graphic_pane_t1_cp2

0x59d7,	// (0x00057955) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x59d7,	// (0x00057955) list_double_large_graphic_pane_t2_cp2

0x3775,	// (0x000556f3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3775,	// (0x000556f3) list_double2_graphic_pane_g1_cp2

0x3783,	// (0x00055701) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3783,	// (0x00055701) list_double2_graphic_pane_g2_cp2

0x3794,	// (0x00055712) list_double2_graphic_pane_g3_cp2

0x379e,	// (0x0005571c) list_double2_graphic_pane_t1_cp2_ParamLimits

0x379e,	// (0x0005571c) list_double2_graphic_pane_t1_cp2

0x37b4,	// (0x00055732) list_double2_graphic_pane_t2_cp2_ParamLimits

0x37b4,	// (0x00055732) list_double2_graphic_pane_t2_cp2

0x37c6,	// (0x00055744) list_single_number_heading_pane_g1_cp2_ParamLimits

0x37c6,	// (0x00055744) list_single_number_heading_pane_g1_cp2

0x37d2,	// (0x00055750) list_single_number_heading_pane_g2_cp2

0x37da,	// (0x00055758) list_single_number_heading_pane_t1_cp2_ParamLimits

0x37da,	// (0x00055758) list_single_number_heading_pane_t1_cp2

0x37f0,	// (0x0005576e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x37f0,	// (0x0005576e) list_single_number_heading_pane_t2_cp2

0x3804,	// (0x00055782) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3804,	// (0x00055782) list_single_number_heading_pane_t3_cp2

0x37c6,	// (0x00055744) list_single_heading_pane_g1_cp2_ParamLimits

0x37c6,	// (0x00055744) list_single_heading_pane_g1_cp2

0x37d2,	// (0x00055750) list_single_heading_pane_g2_cp2

0x37da,	// (0x00055758) list_single_heading_pane_t1_cp2_ParamLimits

0x37da,	// (0x00055758) list_single_heading_pane_t1_cp2

0x578e,	// (0x0005770c) list_single_heading_pane_t2_cp2_ParamLimits

0x578e,	// (0x0005770c) list_single_heading_pane_t2_cp2

0x56d0,	// (0x0005764e) list_double_graphic_pane_g1_cp2_ParamLimits

0x56d0,	// (0x0005764e) list_double_graphic_pane_g1_cp2

0x56dc,	// (0x0005765a) list_double_graphic_pane_g2_cp2_ParamLimits

0x56dc,	// (0x0005765a) list_double_graphic_pane_g2_cp2

0x56eb,	// (0x00057669) list_double_graphic_pane_g3_cp2

0x56f3,	// (0x00057671) list_double_graphic_pane_t1_cp2_ParamLimits

0x56f3,	// (0x00057671) list_double_graphic_pane_t1_cp2

0x5709,	// (0x00057687) list_double_graphic_pane_t2_cp2_ParamLimits

0x5709,	// (0x00057687) list_double_graphic_pane_t2_cp2

0x3879,	// (0x000557f7) list_double_number_pane_g1_cp2_ParamLimits

0x3879,	// (0x000557f7) list_double_number_pane_g1_cp2

0x3885,	// (0x00055803) list_double_number_pane_g2_cp2

0x5694,	// (0x00057612) list_double_number_pane_t1_cp2_ParamLimits

0x5694,	// (0x00057612) list_double_number_pane_t1_cp2

0x56a8,	// (0x00057626) list_double_number_pane_t2_cp2_ParamLimits

0x56a8,	// (0x00057626) list_double_number_pane_t2_cp2

0x56be,	// (0x0005763c) list_double_number_pane_t3_cp2_ParamLimits

0x56be,	// (0x0005763c) list_double_number_pane_t3_cp2

0x557d,	// (0x000574fb) list_single_graphic_pane_g1_cp2_ParamLimits

0x557d,	// (0x000574fb) list_single_graphic_pane_g1_cp2

0x38df,	// (0x0005585d) list_single_graphic_pane_g2_cp2_ParamLimits

0x38df,	// (0x0005585d) list_single_graphic_pane_g2_cp2

0x38eb,	// (0x00055869) list_single_graphic_pane_g3_cp2

0x5553,	// (0x000574d1) list_single_graphic_pane_t1_cp2_ParamLimits

0x5553,	// (0x000574d1) list_single_graphic_pane_t1_cp2

0x38df,	// (0x0005585d) list_single_number_pane_g1_cp2_ParamLimits

0x38df,	// (0x0005585d) list_single_number_pane_g1_cp2

0x38eb,	// (0x00055869) list_single_number_pane_g2_cp2

0x5553,	// (0x000574d1) list_single_number_pane_t1_cp2_ParamLimits

0x5553,	// (0x000574d1) list_single_number_pane_t1_cp2

0x5569,	// (0x000574e7) list_single_number_pane_t2_cp2_ParamLimits

0x5569,	// (0x000574e7) list_single_number_pane_t2_cp2

0x36e0,	// (0x0005565e) list_double2_pane_g1_cp2_ParamLimits

0x36e0,	// (0x0005565e) list_double2_pane_g1_cp2

0x36f1,	// (0x0005566f) list_double2_pane_g2_cp2

0x3851,	// (0x000557cf) list_double2_pane_t1_cp2_ParamLimits

0x3851,	// (0x000557cf) list_double2_pane_t1_cp2

0x3867,	// (0x000557e5) list_double2_pane_t2_cp2_ParamLimits

0x3867,	// (0x000557e5) list_double2_pane_t2_cp2

0x3879,	// (0x000557f7) list_double_pane_g1_cp2_ParamLimits

0x3879,	// (0x000557f7) list_double_pane_g1_cp2

0x3885,	// (0x00055803) list_double_pane_g2_cp2

0x388d,	// (0x0005580b) list_double_pane_t1_cp2_ParamLimits

0x388d,	// (0x0005580b) list_double_pane_t1_cp2

0x38a3,	// (0x00055821) list_double_pane_t2_cp2_ParamLimits

0x38a3,	// (0x00055821) list_double_pane_t2_cp2

0x38cf,	// (0x0005584d) list_single_pane_cp2_g3

0x38df,	// (0x0005585d) list_single_pane_g1_cp2_ParamLimits

0x38df,	// (0x0005585d) list_single_pane_g1_cp2

0x38eb,	// (0x00055869) list_single_pane_g2_cp2

0x38f3,	// (0x00055871) list_single_pane_t1_cp2_ParamLimits

0x38f3,	// (0x00055871) list_single_pane_t1_cp2

0x390b,	// (0x00055889) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x390b,	// (0x00055889) list_single_large_graphic_pane_g1_cp2

0x3919,	// (0x00055897) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3919,	// (0x00055897) list_single_large_graphic_pane_g2_cp2

0x3925,	// (0x000558a3) list_single_large_graphic_pane_g3_cp2

0x392d,	// (0x000558ab) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x392d,	// (0x000558ab) list_single_large_graphic_pane_g4_cp1

0x3947,	// (0x000558c5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3947,	// (0x000558c5) list_single_large_graphic_pane_t1_cp2

0x551d,	// (0x0005749b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x551d,	// (0x0005749b) list_single_graphic_heading_pane_g1_cp2

0x54ea,	// (0x00057468) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x54ea,	// (0x00057468) list_single_graphic_heading_pane_g4_cp2

0x38eb,	// (0x00055869) list_single_graphic_heading_pane_g5_cp2

0x5529,	// (0x000574a7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5529,	// (0x000574a7) list_single_graphic_heading_pane_t1_cp2

0x553f,	// (0x000574bd) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x553f,	// (0x000574bd) list_single_graphic_heading_pane_t2_cp2

0x54de,	// (0x0005745c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x54de,	// (0x0005745c) list_single_2graphic_pane_g1_cp2

0x54ea,	// (0x00057468) list_single_2graphic_pane_g2_cp2_ParamLimits

0x54ea,	// (0x00057468) list_single_2graphic_pane_g2_cp2

0x38eb,	// (0x00055869) list_single_2graphic_pane_g3_cp2

0x54fb,	// (0x00057479) list_single_2graphic_pane_g4_cp2_ParamLimits

0x54fb,	// (0x00057479) list_single_2graphic_pane_g4_cp2

0x5507,	// (0x00057485) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5507,	// (0x00057485) list_single_2graphic_pane_t1_cp2

0xd1cc,	// (0x0005f14a) list_highlight_pane_g10_cp1

0x50b6,	// (0x00057034) list_highlight_pane_g1_cp1

0x50be,	// (0x0005703c) list_highlight_pane_g2_cp1

0x50c6,	// (0x00057044) list_highlight_pane_g3_cp1

0x50ce,	// (0x0005704c) list_highlight_pane_g4_cp1

0x50d6,	// (0x00057054) list_highlight_pane_g5_cp1

0x50de,	// (0x0005705c) list_highlight_pane_g6_cp1

0x50e6,	// (0x00057064) list_highlight_pane_g7_cp1

0x50ee,	// (0x0005706c) list_highlight_pane_g8_cp1

0x50f6,	// (0x00057074) list_highlight_pane_g9_cp1

0xd370,	// (0x0005f2ee) form_field_slider_pane_t3

0xd37e,	// (0x0005f2fc) form_field_slider_pane_t4

0x4ff2,	// (0x00056f70) slider_form_pane_ParamLimits

0x4ff2,	// (0x00056f70) slider_form_pane

0xd1d6,	// (0x0005f154) control_abbreviations

0xd1d6,	// (0x0005f154) control_conventions

0xd1d6,	// (0x0005f154) control_definitions

0xd1d6,	// (0x0005f154) format_table_attribute

0x57e4,	// (0x00057762) bg_popup_preview_window_pane_g9

0xd1d6,	// (0x0005f154) format_table_data2

0xd1d6,	// (0x0005f154) format_table_data3

0xd1d6,	// (0x0005f154) format_table_data_example

0x0008,

0xd1d6,	// (0x0005f154) intro_purpose

0xf900,	// (0x0006187e) bg_popup_preview_window_pane_g

0xd1d6,	// (0x0005f154) texts_category

0xd1d6,	// (0x0005f154) texts_graphics

0x395d,	// (0x000558db) text_digital

0x396c,	// (0x000558ea) text_primary

0x397b,	// (0x000558f9) text_primary_small

0x398a,	// (0x00055908) text_secondary

0x3999,	// (0x00055917) text_title

0x5f80,	// (0x00057efe) bg_passive_tab_pane_g1_cp3_srt

0x35f1,	// (0x0005556f) bg_passive_tab_pane_g2_cp3_srt

0x5f89,	// (0x00057f07) bg_passive_tab_pane_g3_cp3_srt

0x24d1,	// (0x0005444f) bg_active_tab_pane_cp3_srt_ParamLimits

0x24d1,	// (0x0005444f) bg_active_tab_pane_cp3_srt

0x5f92,	// (0x00057f10) tabs_4_active_pane_srt_g1

0xd783,	// (0x0005f701) tabs_4_active_pane_srt_t1_ParamLimits

0xd783,	// (0x0005f701) tabs_4_active_pane_srt_t1

0x5f80,	// (0x00057efe) bg_active_tab_pane_g1_cp3_copy1

0x35f1,	// (0x0005556f) bg_active_tab_pane_g2_cp3_copy1

0x5f89,	// (0x00057f07) bg_active_tab_pane_g3_cp3_copy1

0x2255,	// (0x000541d3) tabs_2_long_active_pane_srt_ParamLimits

0x2255,	// (0x000541d3) tabs_2_long_active_pane_srt

0x2255,	// (0x000541d3) tabs_2_long_passive_pane_srt_ParamLimits

0x2255,	// (0x000541d3) tabs_2_long_passive_pane_srt

0x3d26,	// (0x00055ca4) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3d26,	// (0x00055ca4) bg_passive_tab_pane_cp4_srt

0x5c34,	// (0x00057bb2) bg_passive_tab_pane_g1_cp4_srt

0x35f1,	// (0x0005556f) bg_passive_tab_pane_g2_cp4_srt

0x5c3d,	// (0x00057bbb) bg_passive_tab_pane_g3_cp4_srt

0x2255,	// (0x000541d3) bg_active_tab_pane_cp4_srt_ParamLimits

0x2255,	// (0x000541d3) bg_active_tab_pane_cp4_srt

0xd579,	// (0x0005f4f7) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd579,	// (0x0005f4f7) tabs_2_long_active_pane_srt_t1

0x5c34,	// (0x00057bb2) bg_active_tab_pane_g1_cp4_srt

0x35f1,	// (0x0005556f) bg_active_tab_pane_g2_cp4_srt

0x5c3d,	// (0x00057bbb) bg_active_tab_pane_g3_cp4_srt

0x24d1,	// (0x0005444f) tabs_3_long_active_pane_srt_ParamLimits

0x24d1,	// (0x0005444f) tabs_3_long_active_pane_srt

0x24d1,	// (0x0005444f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x24d1,	// (0x0005444f) tabs_3_long_passive_pane_cp_srt

0x24d1,	// (0x0005444f) tabs_3_long_passive_pane_srt_ParamLimits

0x24d1,	// (0x0005444f) tabs_3_long_passive_pane_srt

0x3d26,	// (0x00055ca4) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3d26,	// (0x00055ca4) bg_passive_tab_pane_cp5_srt

0x367b,	// (0x000555f9) bg_passive_tab_pane_g1_cp5_srt

0x35f1,	// (0x0005556f) bg_passive_tab_pane_g2_cp5_srt

0x3684,	// (0x00055602) bg_passive_tab_pane_g3_cp5_srt

0x2255,	// (0x000541d3) bg_active_tab_pane_cp5_srt_ParamLimits

0x2255,	// (0x000541d3) bg_active_tab_pane_cp5_srt

0xd563,	// (0x0005f4e1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd563,	// (0x0005f4e1) tabs_3_long_active_pane_srt_t1

0x367b,	// (0x000555f9) bg_active_tab_pane_g1_cp5_srt

0x35f1,	// (0x0005556f) bg_active_tab_pane_g2_cp5_srt

0x3684,	// (0x00055602) bg_active_tab_pane_g3_cp5_srt

0x5c14,	// (0x00057b92) navi_text_pane_srt_t1

0x5c0c,	// (0x00057b8a) navi_icon_pane_srt_g1

0x3b70,	// (0x00055aee) midp_editing_number_pane_srt

0x39a8,	// (0x00055926) midp_ticker_pane_srt

0x3b78,	// (0x00055af6) midp_ticker_pane_srt_g1

0x3b80,	// (0x00055afe) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0006170d) midp_ticker_pane_srt_g

0x3b88,	// (0x00055b06) midp_ticker_pane_srt_t1

0x5bfd,	// (0x00057b7b) midp_editing_number_pane_t1_copy1

0xc5be,	// (0x0005e53c) listscroll_midp_pane

0xc5be,	// (0x0005e53c) midp_form_pane

0x3a1e,	// (0x0005599c) midp_info_popup_window_ParamLimits

0x3a1e,	// (0x0005599c) midp_info_popup_window

0x2c3d,	// (0x00054bbb) bg_popup_sub_pane_cp50_ParamLimits

0x2c3d,	// (0x00054bbb) bg_popup_sub_pane_cp50

0x4cec,	// (0x00056c6a) listscroll_midp_info_pane_ParamLimits

0x4cec,	// (0x00056c6a) listscroll_midp_info_pane

0x4cd4,	// (0x00056c52) listscroll_form_midp_pane_ParamLimits

0x4cd4,	// (0x00056c52) listscroll_form_midp_pane

0x4ce0,	// (0x00056c5e) scroll_bar_cp050

0xd364,	// (0x0005f2e2) list_midp_pane

0x6a0a,	// (0x00058988) signal_pane_g2_cp

0x4bee,	// (0x00056b6c) listscroll_midp_info_pane_t1_ParamLimits

0x4bee,	// (0x00056b6c) listscroll_midp_info_pane_t1

0x4c06,	// (0x00056b84) listscroll_midp_info_pane_t2_ParamLimits

0x4c06,	// (0x00056b84) listscroll_midp_info_pane_t2

0x4c44,	// (0x00056bc2) listscroll_midp_info_pane_t3_ParamLimits

0x4c44,	// (0x00056bc2) listscroll_midp_info_pane_t3

0x4c7e,	// (0x00056bfc) listscroll_midp_info_pane_t4_ParamLimits

0x4c7e,	// (0x00056bfc) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x000617b9) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x000617b9) listscroll_midp_info_pane_t

0x2d07,	// (0x00054c85) scroll_pane_cp21

0x4b88,	// (0x00056b06) form_midp_field_choice_group_pane

0x4b91,	// (0x00056b0f) form_midp_field_text_pane

0x4bd4,	// (0x00056b52) form_midp_field_time_pane

0x4bdc,	// (0x00056b5a) form_midp_gauge_slider_pane

0x4be5,	// (0x00056b63) form_midp_gauge_wait_pane

0xd1d6,	// (0x0005f154) form_midp_image_pane

0xbbbb,	// (0x0005db39) list_single_midp_pane_ParamLimits

0xbbbb,	// (0x0005db39) list_single_midp_pane

0xd33c,	// (0x0005f2ba) form_midp_field_text_pane_t1

0x4960,	// (0x000568de) input_focus_pane_cp050

0x4b77,	// (0x00056af5) list_midp_form_text_pane

0x4b1b,	// (0x00056a99) form_midp_field_choice_group_pane_t1

0x4b29,	// (0x00056aa7) input_focus_pane_cp051

0x4b3d,	// (0x00056abb) list_midp_choice_pane

0xd1d6,	// (0x0005f154) status_idle_pane

0x4aff,	// (0x00056a7d) form_midp_field_time_pane_t1

0xd1cc,	// (0x0005f14a) wait_anim_pane_g2_copy1

0x4b0d,	// (0x00056a8b) form_midp_field_time_pane_t2

0x0001,

0x3ace,	// (0x00055a4c) aid_navinavi_width_2_pane

0xf836,	// (0x000617b4) form_midp_field_time_pane_t

0xd1d6,	// (0x0005f154) input_focus_pane_cp052

0xd1d6,	// (0x0005f154) bg_input_focus_pane_cp040

0x4abf,	// (0x00056a3d) form_midp_gauge_slider_pane_t1

0x4acd,	// (0x00056a4b) form_midp_gauge_slider_pane_t2

0xd320,	// (0x0005f29e) form_midp_gauge_slider_pane_t3

0xd32e,	// (0x0005f2ac) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x000617ab) form_midp_gauge_slider_pane_t

0x4af7,	// (0x00056a75) form_midp_slider_pane

0x2255,	// (0x000541d3) bg_input_focus_pane_cp041_ParamLimits

0x2255,	// (0x000541d3) bg_input_focus_pane_cp041

0x4a8c,	// (0x00056a0a) form_midp_gauge_wait_pane_t1_ParamLimits

0x4a8c,	// (0x00056a0a) form_midp_gauge_wait_pane_t1

0x4a9e,	// (0x00056a1c) form_midp_gauge_wait_pane_t2_ParamLimits

0x4a9e,	// (0x00056a1c) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x000617a6) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x000617a6) form_midp_gauge_wait_pane_t

0x4ab0,	// (0x00056a2e) form_midp_wait_pane_ParamLimits

0x4ab0,	// (0x00056a2e) form_midp_wait_pane

0x4a54,	// (0x000569d2) form_midp_image_pane_g1

0x4a5d,	// (0x000569db) form_midp_image_pane_t1

0x4a6c,	// (0x000569ea) form_midp_image_pane_t2

0x4a7b,	// (0x000569f9) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0006179f) form_midp_image_pane_t

0x4a4b,	// (0x000569c9) list_single_midp_pane_g1

0x0c2c,	// (0x00052baa) list_single_midp_pane_t1

0xd309,	// (0x0005f287) list_midp_form_item_pane_ParamLimits

0xd309,	// (0x0005f287) list_midp_form_item_pane

0x3a76,	// (0x000559f4) list_midp_form_item_pane_t1

0x3a85,	// (0x00055a03) midp_ticker_pane_g1

0x3a91,	// (0x00055a0f) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x000616f3) midp_ticker_pane_g

0xc666,	// (0x0005e5e4) midp_ticker_pane_t1

0xd708,	// (0x0005f686) midp_editing_number_pane_t1

0x5e5a,	// (0x00057dd8) midp_editing_number_pane

0x5e69,	// (0x00057de7) midp_ticker_pane

0x5bed,	// (0x00057b6b) ai_message_heading_pane

0xd1d6,	// (0x0005f154) bg_popup_window_pane_cp14

0x5bf5,	// (0x00057b73) listscroll_ai_message_pane

0x5b73,	// (0x00057af1) ai_message_heading_pane_g1_ParamLimits

0x5b73,	// (0x00057af1) ai_message_heading_pane_g1

0x5b7f,	// (0x00057afd) ai_message_heading_pane_g2_ParamLimits

0x5b7f,	// (0x00057afd) ai_message_heading_pane_g2

0x5b8d,	// (0x00057b0b) ai_message_heading_pane_g3_ParamLimits

0x5b8d,	// (0x00057b0b) ai_message_heading_pane_g3

0x5b99,	// (0x00057b17) ai_message_heading_pane_g4_ParamLimits

0x5b99,	// (0x00057b17) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x000618e0) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x000618e0) ai_message_heading_pane_g

0x5ba5,	// (0x00057b23) ai_message_heading_pane_t1_ParamLimits

0x5ba5,	// (0x00057b23) ai_message_heading_pane_t1

0x5bbf,	// (0x00057b3d) ai_message_heading_pane_t2_ParamLimits

0x5bbf,	// (0x00057b3d) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x000618e9) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x000618e9) ai_message_heading_pane_t

0x5bd3,	// (0x00057b51) bg_popup_heading_pane_cp1_ParamLimits

0x5bd3,	// (0x00057b51) bg_popup_heading_pane_cp1

0x5b61,	// (0x00057adf) list_ai_message_pane_ParamLimits

0x5b61,	// (0x00057adf) list_ai_message_pane

0x2d07,	// (0x00054c85) scroll_pane_cp10

0x5afd,	// (0x00057a7b) list_ai_message_pane_g1

0x5b05,	// (0x00057a83) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x000618bd) list_ai_message_pane_g

0x5b0d,	// (0x00057a8b) list_ai_message_pane_t1_ParamLimits

0x5b0d,	// (0x00057a8b) list_ai_message_pane_t1

0x5b22,	// (0x00057aa0) list_ai_message_pane_t2_ParamLimits

0x5b22,	// (0x00057aa0) list_ai_message_pane_t2

0x5b37,	// (0x00057ab5) list_ai_message_pane_t3_ParamLimits

0x5b37,	// (0x00057ab5) list_ai_message_pane_t3

0x5b4c,	// (0x00057aca) list_ai_message_pane_t4_ParamLimits

0x5b4c,	// (0x00057aca) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x000618c2) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x000618c2) list_ai_message_pane_t

0xd549,	// (0x0005f4c7) cell_ai_soft_ind_pane_ParamLimits

0xd549,	// (0x0005f4c7) cell_ai_soft_ind_pane

0x3aaf,	// (0x00055a2d) cell_ai_soft_ind_pane_g1_ParamLimits

0x3aaf,	// (0x00055a2d) cell_ai_soft_ind_pane_g1

0xd1d6,	// (0x0005f154) grid_highlight_cp1

0x3abc,	// (0x00055a3a) text_secondary_cp56_ParamLimits

0x3abc,	// (0x00055a3a) text_secondary_cp56

0x5abb,	// (0x00057a39) example_general_pane_ParamLimits

0x5abb,	// (0x00057a39) example_general_pane

0x5ac7,	// (0x00057a45) example_parent_pane_g1_ParamLimits

0x5ac7,	// (0x00057a45) example_parent_pane_g1

0x5ad3,	// (0x00057a51) example_parent_pane_t1_ParamLimits

0x5ad3,	// (0x00057a51) example_parent_pane_t1

0xcad8,	// (0x0005ea56) popup_preview_text_window_ParamLimits

0xcad8,	// (0x0005ea56) popup_preview_text_window

0x38d7,	// (0x00055855) list_single_pane_cp2_g4

0x2587,	// (0x00054505) bg_popup_preview_window_pane_ParamLimits

0x2587,	// (0x00054505) bg_popup_preview_window_pane

0x57ee,	// (0x0005776c) popup_preview_text_window_t1_ParamLimits

0x57ee,	// (0x0005776c) popup_preview_text_window_t1

0x580c,	// (0x0005778a) popup_preview_text_window_t2_ParamLimits

0x580c,	// (0x0005778a) popup_preview_text_window_t2

0x5855,	// (0x000577d3) popup_preview_text_window_t3_ParamLimits

0x5855,	// (0x000577d3) popup_preview_text_window_t3

0x589a,	// (0x00057818) popup_preview_text_window_t4_ParamLimits

0x589a,	// (0x00057818) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x00061891) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x00061891) popup_preview_text_window_t

0x5918,	// (0x00057896) scroll_pane_cp11

0x486e,	// (0x000567ec) bg_popup_preview_window_pane_g1

0x57a2,	// (0x00057720) bg_popup_preview_window_pane_g2

0x57ac,	// (0x0005772a) bg_popup_preview_window_pane_g3

0x57b6,	// (0x00057734) bg_popup_preview_window_pane_g4

0x57c0,	// (0x0005773e) bg_popup_preview_window_pane_g5

0x57ca,	// (0x00057748) bg_popup_preview_window_pane_g6

0x57d2,	// (0x00057750) bg_popup_preview_window_pane_g7

0x57da,	// (0x00057758) bg_popup_preview_window_pane_g8

0xee54,	// (0x00060dd2) aid_popup_width_pane

0xca48,	// (0x0005e9c6) popup_midp_note_alarm_window_ParamLimits

0xca48,	// (0x0005e9c6) popup_midp_note_alarm_window

0x2b70,	// (0x00054aee) data_form_pane_ParamLimits

0xb7f4,	// (0x0005d772) form_field_data_pane_g1

0xb7fe,	// (0x0005d77c) form_field_data_pane_t1_ParamLimits

0x2b7c,	// (0x00054afa) input_focus_pane_ParamLimits

0x2b8a,	// (0x00054b08) data_form_wide_pane_ParamLimits

0x02c8,	// (0x00052246) form_field_data_wide_pane_g1

0x02d4,	// (0x00052252) form_field_data_wide_pane_t1_ParamLimits

0x284d,	// (0x000547cb) input_focus_pane_cp6_ParamLimits

0xb958,	// (0x0005d8d6) input_popup_find_pane_g1_ParamLimits

0xb958,	// (0x0005d8d6) input_popup_find_pane_g1

0x0528,	// (0x000524a6) aid_navi_side_left_pane

0x053d,	// (0x000524bb) aid_navi_side_right_pane

0x51b1,	// (0x0005712f) bg_popup_window_pane_cp30_ParamLimits

0x51b1,	// (0x0005712f) bg_popup_window_pane_cp30

0x522b,	// (0x000571a9) popup_midp_note_alarm_window_g1_ParamLimits

0x522b,	// (0x000571a9) popup_midp_note_alarm_window_g1

0x525b,	// (0x000571d9) popup_midp_note_alarm_window_t1_ParamLimits

0x525b,	// (0x000571d9) popup_midp_note_alarm_window_t1

0x52fc,	// (0x0005727a) popup_midp_note_alarm_window_t2_ParamLimits

0x52fc,	// (0x0005727a) popup_midp_note_alarm_window_t2

0x53aa,	// (0x00057328) popup_midp_note_alarm_window_t3_ParamLimits

0x53aa,	// (0x00057328) popup_midp_note_alarm_window_t3

0x53dc,	// (0x0005735a) popup_midp_note_alarm_window_t4_ParamLimits

0x53dc,	// (0x0005735a) popup_midp_note_alarm_window_t4

0x5402,	// (0x00057380) popup_midp_note_alarm_window_t5_ParamLimits

0x5402,	// (0x00057380) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x0006182e) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x0006182e) popup_midp_note_alarm_window_t

0x54ae,	// (0x0005742c) wait_bar_pane_cp1_ParamLimits

0x54ae,	// (0x0005742c) wait_bar_pane_cp1

0xd1d6,	// (0x0005f154) wait_anim_pane_copy1

0xd1d6,	// (0x0005f154) wait_border_pane_copy1

0x4e96,	// (0x00056e14) wait_border_pane_g1_copy1

0x02ee,	// (0x0005226c) form_field_popup_pane_g1

0xb818,	// (0x0005d796) form_field_popup_pane_t1_ParamLimits

0x2b7c,	// (0x00054afa) input_focus_pane_cp7_ParamLimits

0x2bb6,	// (0x00054b34) list_form_pane_ParamLimits

0x0310,	// (0x0005228e) form_field_popup_wide_pane_g1

0x0318,	// (0x00052296) form_field_popup_wide_pane_t1_ParamLimits

0x2b7c,	// (0x00054afa) input_focus_pane_cp8_ParamLimits

0x2bc2,	// (0x00054b40) list_form_wide_pane_ParamLimits

0x600d,	// (0x00057f8b) aid_size_cell_graphic_pane

0xb897,	// (0x0005d815) data_form_pane_t1_ParamLimits

0xbd50,	// (0x0005dcce) data_form_wide_pane_t1_ParamLimits

0xced5,	// (0x0005ee53) bg_status_flat_pane

0xaf87,	// (0x0005cf05) title_pane_t1_ParamLimits

0x221d,	// (0x0005419b) title_pane_t2_ParamLimits

0x2243,	// (0x000541c1) title_pane_t3_ParamLimits

0xf573,	// (0x000614f1) title_pane_t_ParamLimits

0xc43c,	// (0x0005e3ba) level_1_signal_ParamLimits

0xc44e,	// (0x0005e3cc) level_2_signal_ParamLimits

0xc461,	// (0x0005e3df) level_3_signal_ParamLimits

0xc474,	// (0x0005e3f2) level_4_signal_ParamLimits

0xc487,	// (0x0005e405) level_5_signal_ParamLimits

0xc49a,	// (0x0005e418) level_6_signal_ParamLimits

0xc4ad,	// (0x0005e42b) level_7_signal_ParamLimits

0xc43c,	// (0x0005e3ba) level_1_battery_ParamLimits

0xc44e,	// (0x0005e3cc) level_2_battery_ParamLimits

0xc461,	// (0x0005e3df) level_3_battery_ParamLimits

0xc474,	// (0x0005e3f2) level_4_battery_ParamLimits

0xc487,	// (0x0005e405) level_5_battery_ParamLimits

0xc49a,	// (0x0005e418) level_6_battery_ParamLimits

0xc4ad,	// (0x0005e42b) level_7_battery_ParamLimits

0x50b6,	// (0x00057034) bg_status_flat_pane_g1

0x50be,	// (0x0005703c) bg_status_flat_pane_g2

0x50c6,	// (0x00057044) bg_status_flat_pane_g3

0x50ce,	// (0x0005704c) bg_status_flat_pane_g4

0x50d6,	// (0x00057054) bg_status_flat_pane_g5

0x50de,	// (0x0005705c) bg_status_flat_pane_g6

0x50e6,	// (0x00057064) bg_status_flat_pane_g7

0xb01b,	// (0x0005cf99) tabs_3_active_pane_t1_ParamLimits

0xb01b,	// (0x0005cf99) tabs_3_passive_pane_t1_ParamLimits

0xb035,	// (0x0005cfb3) tabs_4_active_pane_t1_ParamLimits

0xb035,	// (0x0005cfb3) tabs_4_1_passive_pane_t1_ParamLimits

0xb96e,	// (0x0005d8ec) tabs_2_active_pane_t1_ParamLimits

0xb96e,	// (0x0005d8ec) tabs_2_passive_pane_t1_ParamLimits

0x2255,	// (0x000541d3) bg_active_tab_pane_cp4_ParamLimits

0xb980,	// (0x0005d8fe) tabs_2_long_active_pane_t1_ParamLimits

0x3d26,	// (0x00055ca4) bg_passive_tab_pane_cp4_ParamLimits

0x0b73,	// (0x00052af1) list_single_midp_graphic_pane_t1_ParamLimits

0x2255,	// (0x000541d3) bg_active_tab_pane_cp5_ParamLimits

0xc370,	// (0x0005e2ee) tabs_3_long_active_pane_t1_ParamLimits

0x3d26,	// (0x00055ca4) bg_passive_tab_pane_cp5_ParamLimits

0x0b73,	// (0x00052af1) list_single_midp_graphic_pane_t1

0xced5,	// (0x0005ee53) bg_status_flat_pane_ParamLimits

0x44e7,	// (0x00056465) indicator_pane_cp2_ParamLimits

0x44e7,	// (0x00056465) indicator_pane_cp2

0xd06a,	// (0x0005efe8) navi_pane_srt_ParamLimits

0xd06a,	// (0x0005efe8) navi_pane_srt

0x464d,	// (0x000565cb) popup_clock_digital_analogue_window_cp1

0x2335,	// (0x000542b3) indicator_pane_t1

0x39a8,	// (0x00055926) copy_highlight_pane

0x39a8,	// (0x00055926) cursor_graphics_pane

0x39a8,	// (0x00055926) graphic_within_text_pane

0x39a8,	// (0x00055926) link_highlight_pane

0x58db,	// (0x00057859) popup_preview_text_window_t5_ParamLimits

0x58db,	// (0x00057859) popup_preview_text_window_t5

0x3ad8,	// (0x00055a56) cursor_digital_pane

0x3ad8,	// (0x00055a56) cursor_primary_pane

0x3ae9,	// (0x00055a67) cursor_primary_small_pane

0x3af1,	// (0x00055a6f) cursor_secondary_pane

0x3af9,	// (0x00055a77) cursor_title_pane

0x3ad8,	// (0x00055a56) link_highlight_digital_pane

0x3ae0,	// (0x00055a5e) link_highlight_primary_pane

0x3ae9,	// (0x00055a67) link_highlight_primary_small_pane

0x3af1,	// (0x00055a6f) link_highlight_secondary_pane

0x3af9,	// (0x00055a77) link_highlight_title_pane

0x3ad8,	// (0x00055a56) copy_highlight_digital_pane

0x3ad8,	// (0x00055a56) copy_highlight_primary_pane

0x3ae9,	// (0x00055a67) copy_highlight_primary_small_pane

0x3af1,	// (0x00055a6f) copy_highlight_secondary_pane

0x3af9,	// (0x00055a77) copy_highlight_title_pane

0x3af1,	// (0x00055a6f) graphic_text_digital_pane

0x5154,	// (0x000570d2) graphic_text_primary_pane

0x515d,	// (0x000570db) graphic_text_primary_small_pane

0x3ae9,	// (0x00055a67) graphic_text_secondary_pane

0x3ad8,	// (0x00055a56) graphic_text_title_pane

0xc678,	// (0x0005e5f6) cursor_primary_pane_g1

0x5146,	// (0x000570c4) cursor_text_primary_t1

0xd3a0,	// (0x0005f31e) cursor_primary_small_pane_g1

0x5138,	// (0x000570b6) cursor_text_primary_small_t1

0xd396,	// (0x0005f314) cursor_primary_small_pane_g1_copy1

0x5120,	// (0x0005709e) cursor_text_primary_small_t1_copy1

0x50fe,	// (0x0005707c) cursor_text_title_t1

0xd38c,	// (0x0005f30a) cursor_title_pane_g1

0xc678,	// (0x0005e5f6) cursor_digital_pane_g1

0x3b0b,	// (0x00055a89) cursor_text_digital_t1

0x3b19,	// (0x00055a97) link_highlight_primary_pane_g1

0x50a7,	// (0x00057025) link_highlight_primary_pane_t1

0x3b19,	// (0x00055a97) link_highlight_primary_small_pane_g1

0x3b21,	// (0x00055a9f) link_highlight_primary_small_pane_t1

0x3b30,	// (0x00055aae) link_highlight_secondary_pane_g1

0x3b38,	// (0x00055ab6) link_highlight_secondary_pane_t1

0x501b,	// (0x00056f99) link_highlight_title_pane_g1

0x5023,	// (0x00056fa1) link_highlight_title_pane_t1

0x5004,	// (0x00056f82) link_highlight_digital_pane_g1

0x500c,	// (0x00056f8a) link_highlight_digital_pane_t1

0x4ecc,	// (0x00056e4a) copy_highlight_primary_pane_g1

0x4ee3,	// (0x00056e61) copy_highlight_primary_pane_t1

0x4ecc,	// (0x00056e4a) copy_highlight_primary_small_pane_g1

0x4ed4,	// (0x00056e52) copy_highlight_primary_small_pane_t1

0x3b47,	// (0x00055ac5) copy_highlight_secondary_pane_g1

0x3b4f,	// (0x00055acd) copy_highlight_secondary_pane_t1

0x4eb5,	// (0x00056e33) copy_highlight_title_pane_g1

0x4ebd,	// (0x00056e3b) copy_highlight_title_pane_t1

0x4ecc,	// (0x00056e4a) copy_highlight_digital_pane_g1

0x61dd,	// (0x0005815b) copy_highlight_digital_pane_t1

0x6131,	// (0x000580af) graphic_text_primary_pane_g1

0x61c1,	// (0x0005813f) graphic_text_primary_pane_t1

0x61cf,	// (0x0005814d) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x0006195d) graphic_text_primary_pane_t

0x619d,	// (0x0005811b) graphic_text_primary_small_pane_g1

0x61a5,	// (0x00058123) graphic_text_primary_small_pane_t1

0x61b3,	// (0x00058131) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x00061958) graphic_text_primary_small_pane_t

0x6179,	// (0x000580f7) graphic_text_secondary_pane_g1

0x6181,	// (0x000580ff) graphic_text_secondary_pane_t1

0x618f,	// (0x0005810d) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x00061953) graphic_text_secondary_pane_t

0x6155,	// (0x000580d3) graphic_text_title_pane_g1

0x615d,	// (0x000580db) graphic_text_title_pane_t1

0x616b,	// (0x000580e9) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x0006194e) graphic_text_title_pane_t

0x6131,	// (0x000580af) graphic_text_digital_pane_g1

0x6139,	// (0x000580b7) graphic_text_digital_pane_t1

0x6147,	// (0x000580c5) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x00061949) graphic_text_digital_pane_t

0x2255,	// (0x000541d3) navi_icon_pane_srt_ParamLimits

0x2255,	// (0x000541d3) navi_icon_pane_srt

0xd1d6,	// (0x0005f154) navi_midp_pane_srt

0xd1d6,	// (0x0005f154) navi_navi_pane_srt

0x2255,	// (0x000541d3) navi_text_pane_srt_ParamLimits

0x2255,	// (0x000541d3) navi_text_pane_srt

0x60fc,	// (0x0005807a) navi_navi_icon_text_pane_srt

0x6104,	// (0x00058082) navi_navi_pane_srt_g1_ParamLimits

0x6104,	// (0x00058082) navi_navi_pane_srt_g1

0x6116,	// (0x00058094) navi_navi_pane_srt_g2_ParamLimits

0x6116,	// (0x00058094) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x00061944) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x00061944) navi_navi_pane_srt_g

0x6128,	// (0x000580a6) navi_navi_tabs_pane_srt

0x60fc,	// (0x0005807a) navi_navi_text_pane_srt

0x60fc,	// (0x0005807a) navi_navi_volume_pane_srt

0x60ed,	// (0x0005806b) navi_navi_text_pane_srt_t1

0x0fb1,	// (0x00052f2f) navi_navi_volume_pane_srt_g1

0x0fb9,	// (0x00052f37) volume_small_pane_srt_ParamLimits

0x0fb9,	// (0x00052f37) volume_small_pane_srt

0x087d,	// (0x000527fb) volume_small_pane_srt_g1_ParamLimits

0x087d,	// (0x000527fb) volume_small_pane_srt_g1

0x088d,	// (0x0005280b) volume_small_pane_srt_g2_ParamLimits

0x088d,	// (0x0005280b) volume_small_pane_srt_g2

0x089e,	// (0x0005281c) volume_small_pane_srt_g3_ParamLimits

0x089e,	// (0x0005281c) volume_small_pane_srt_g3

0x08af,	// (0x0005282d) volume_small_pane_srt_g4_ParamLimits

0x08af,	// (0x0005282d) volume_small_pane_srt_g4

0x08c0,	// (0x0005283e) volume_small_pane_srt_g5_ParamLimits

0x08c0,	// (0x0005283e) volume_small_pane_srt_g5

0x08d1,	// (0x0005284f) volume_small_pane_srt_g6_ParamLimits

0x08d1,	// (0x0005284f) volume_small_pane_srt_g6

0x08e2,	// (0x00052860) volume_small_pane_srt_g7_ParamLimits

0x08e2,	// (0x00052860) volume_small_pane_srt_g7

0x08f3,	// (0x00052871) volume_small_pane_srt_g8_ParamLimits

0x08f3,	// (0x00052871) volume_small_pane_srt_g8

0x0904,	// (0x00052882) volume_small_pane_srt_g9_ParamLimits

0x0904,	// (0x00052882) volume_small_pane_srt_g9

0x0915,	// (0x00052893) volume_small_pane_srt_g10_ParamLimits

0x0915,	// (0x00052893) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x000616f8) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x000616f8) volume_small_pane_srt_g

0x263c,	// (0x000545ba) query_popup_data_pane_cp2

0x60d3,	// (0x00058051) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x60d3,	// (0x00058051) navi_navi_icon_text_pane_srt_t1

0x5154,	// (0x000570d2) navi_tabs_2_long_pane_srt

0x5154,	// (0x000570d2) navi_tabs_2_pane_srt

0x5154,	// (0x000570d2) navi_tabs_3_long_pane_srt

0x5154,	// (0x000570d2) navi_tabs_3_pane_srt

0x5154,	// (0x000570d2) navi_tabs_4_pane_srt

0x0f91,	// (0x00052f0f) tabs_2_active_pane_srt_ParamLimits

0x0f91,	// (0x00052f0f) tabs_2_active_pane_srt

0x0fa1,	// (0x00052f1f) tabs_2_passive_pane_srt_ParamLimits

0x0fa1,	// (0x00052f1f) tabs_2_passive_pane_srt

0x4960,	// (0x000568de) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4960,	// (0x000568de) bg_passive_tab_pane_cp1_srt

0x609f,	// (0x0005801d) bg_passive_tab_pane_g1_cp1_srt

0x35f1,	// (0x0005556f) bg_passive_tab_pane_g2_cp1_srt

0x60a8,	// (0x00058026) bg_passive_tab_pane_g3_cp1_srt

0x24d1,	// (0x0005444f) bg_active_tab_pane_cp1_srt_ParamLimits

0x24d1,	// (0x0005444f) bg_active_tab_pane_cp1_srt

0x60b1,	// (0x0005802f) tabs_2_active_pane_srt_g1

0xd803,	// (0x0005f781) tabs_2_active_pane_srt_t1_ParamLimits

0xd803,	// (0x0005f781) tabs_2_active_pane_srt_t1

0x609f,	// (0x0005801d) bg_active_tab_pane_g1_cp1_srt

0x35f1,	// (0x0005556f) bg_active_tab_pane_g2_cp1_srt

0x60a8,	// (0x00058026) bg_active_tab_pane_g3_cp1_srt

0x0f5e,	// (0x00052edc) tabs_3_active_pane_srt_ParamLimits

0x0f5e,	// (0x00052edc) tabs_3_active_pane_srt

0x0f6f,	// (0x00052eed) tabs_3_passive_pane_cp_srt_ParamLimits

0x0f6f,	// (0x00052eed) tabs_3_passive_pane_cp_srt

0x0f80,	// (0x00052efe) tabs_3_passive_pane_srt_ParamLimits

0x0f80,	// (0x00052efe) tabs_3_passive_pane_srt

0x4960,	// (0x000568de) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4960,	// (0x000568de) bg_passive_tab_pane_cp2_srt

0x3b5e,	// (0x00055adc) bg_passive_tab_pane_g1_cp2_srt

0x35f1,	// (0x0005556f) bg_passive_tab_pane_g2_cp2_srt

0x3b67,	// (0x00055ae5) bg_passive_tab_pane_g3_cp2_srt

0x24d1,	// (0x0005444f) bg_active_tab_pane_cp2_srt_ParamLimits

0x24d1,	// (0x0005444f) bg_active_tab_pane_cp2_srt

0x6085,	// (0x00058003) tabs_3_active_pane_srt_g1

0xd7ed,	// (0x0005f76b) tabs_3_active_pane_srt_t1_ParamLimits

0xd7ed,	// (0x0005f76b) tabs_3_active_pane_srt_t1

0x3b5e,	// (0x00055adc) bg_active_tab_pane_g1_cp2_srt

0x35f1,	// (0x0005556f) bg_active_tab_pane_g2_cp2_srt

0x3b67,	// (0x00055ae5) bg_active_tab_pane_g3_cp2_srt

0x0f16,	// (0x00052e94) tabs_4_active_pane_srt_ParamLimits

0x0f16,	// (0x00052e94) tabs_4_active_pane_srt

0x0f28,	// (0x00052ea6) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0f28,	// (0x00052ea6) tabs_4_passive_pane_cp2_srt

0x3cbc,	// (0x00055c3a) aid_size_cell_toolbar

0x5ca7,	// (0x00057c25) main_idle_act_pane_ParamLimits

0x3ef7,	// (0x00055e75) popup_large_graphic_colour_window_ParamLimits

0xcd9e,	// (0x0005ed1c) popup_toolbar_window_ParamLimits

0xcd9e,	// (0x0005ed1c) popup_toolbar_window

0x5e9f,	// (0x00057e1d) list_single_graphic_2heading_pane_ParamLimits

0x5e9f,	// (0x00057e1d) list_single_graphic_2heading_pane

0x30fd,	// (0x0005507b) aid_size_cell_apps_grid_lsc_pane

0x310f,	// (0x0005508d) aid_size_cell_apps_grid_prt_pane

0x3d26,	// (0x00055ca4) bg_wml_button_pane_cp1_ParamLimits

0x3d26,	// (0x00055ca4) bg_wml_button_pane_cp1

0xd33c,	// (0x0005f2ba) form_midp_field_text_pane_t1_ParamLimits

0x4960,	// (0x000568de) input_focus_pane_cp050_ParamLimits

0x4b77,	// (0x00056af5) list_midp_form_text_pane_ParamLimits

0x4b29,	// (0x00056aa7) input_focus_pane_cp051_ParamLimits

0x4b3d,	// (0x00056abb) list_midp_choice_pane_ParamLimits

0xd2f3,	// (0x0005f271) list_single_2graphic_pane_cp3_ParamLimits

0xd2f3,	// (0x0005f271) list_single_2graphic_pane_cp3

0x6d33,	// (0x00058cb1) list_single_midp_graphic_pane_ParamLimits

0x6d33,	// (0x00058cb1) list_single_midp_graphic_pane

0xee81,	// (0x00060dff) list_single_graphic_2heading_pane_g1_ParamLimits

0xee81,	// (0x00060dff) list_single_graphic_2heading_pane_g1

0xee8d,	// (0x00060e0b) list_single_graphic_2heading_pane_g4_ParamLimits

0xee8d,	// (0x00060e0b) list_single_graphic_2heading_pane_g4

0xee99,	// (0x00060e17) list_single_graphic_2heading_pane_g5_ParamLimits

0xee99,	// (0x00060e17) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0006174b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0006174b) list_single_graphic_2heading_pane_g

0xeea5,	// (0x00060e23) list_single_graphic_2heading_pane_t1_ParamLimits

0xeea5,	// (0x00060e23) list_single_graphic_2heading_pane_t1

0xeeb9,	// (0x00060e37) list_single_graphic_2heading_pane_t2_ParamLimits

0xeeb9,	// (0x00060e37) list_single_graphic_2heading_pane_t2

0xeed5,	// (0x00060e53) list_single_graphic_2heading_pane_t3_ParamLimits

0xeed5,	// (0x00060e53) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x00061752) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x00061752) list_single_graphic_2heading_pane_t

0x47ac,	// (0x0005672a) bg_popup_sub_pane_cp2

0x47d6,	// (0x00056754) grid_toobar_pane

0x0a97,	// (0x00052a15) cell_toolbar_pane_ParamLimits

0x0a97,	// (0x00052a15) cell_toolbar_pane

0x4812,	// (0x00056790) cell_toolbar_pane_g1_ParamLimits

0x4812,	// (0x00056790) cell_toolbar_pane_g1

0x4826,	// (0x000567a4) cell_toolbar_pane_g2_ParamLimits

0x4826,	// (0x000567a4) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x00061760) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x00061760) cell_toolbar_pane_g

0x4848,	// (0x000567c6) grid_highlight_pane_cp2_ParamLimits

0x4848,	// (0x000567c6) grid_highlight_pane_cp2

0x4862,	// (0x000567e0) toolbar_button_pane

0x486e,	// (0x000567ec) toolbar_button_pane_g1

0x4876,	// (0x000567f4) toolbar_button_pane_g2

0x487e,	// (0x000567fc) toolbar_button_pane_g3

0x4886,	// (0x00056804) toolbar_button_pane_g4

0x488e,	// (0x0005680c) toolbar_button_pane_g5

0x4896,	// (0x00056814) toolbar_button_pane_g6

0x489e,	// (0x0005681c) toolbar_button_pane_g7

0x48a6,	// (0x00056824) toolbar_button_pane_g8

0x48ae,	// (0x0005682c) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x00061765) toolbar_button_pane_g

0x0af1,	// (0x00052a6f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0af1,	// (0x00052a6f) list_single_2graphic_pane_g1_cp3

0xbb49,	// (0x0005dac7) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbb49,	// (0x0005dac7) list_single_2graphic_pane_g2_cp3

0x0b0e,	// (0x00052a8c) list_single_2graphic_pane_g3_cp3

0x0b16,	// (0x00052a94) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0b16,	// (0x00052a94) list_single_2graphic_pane_g4_cp3

0x0b22,	// (0x00052aa0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0b22,	// (0x00052aa0) list_single_2graphic_pane_t1_cp3

0x0b67,	// (0x00052ae5) list_single_midp_graphic_pane_g2_ParamLimits

0x0b67,	// (0x00052ae5) list_single_midp_graphic_pane_g2

0x0a7f,	// (0x000529fd) aid_zoom_text_primary

0x0a87,	// (0x00052a05) aid_zoom_text_secondary

0x3c1b,	// (0x00055b99) status_small_pane_g7_ParamLimits

0x3c1b,	// (0x00055b99) status_small_pane_g7

0x3c3e,	// (0x00055bbc) status_small_pane_t1_ParamLimits

0xaf63,	// (0x0005cee1) title_pane_g2

0x0003,

0xf56a,	// (0x000614e8) title_pane_g

0xb1fb,	// (0x0005d179) aid_size_cell_colour_1_pane_ParamLimits

0xb1fb,	// (0x0005d179) aid_size_cell_colour_1_pane

0xb20f,	// (0x0005d18d) aid_size_cell_colour_2_pane_ParamLimits

0xb20f,	// (0x0005d18d) aid_size_cell_colour_2_pane

0xb223,	// (0x0005d1a1) aid_size_cell_colour_3_pane_ParamLimits

0xb223,	// (0x0005d1a1) aid_size_cell_colour_3_pane

0xb237,	// (0x0005d1b5) aid_size_cell_colour_4_pane_ParamLimits

0xb237,	// (0x0005d1b5) aid_size_cell_colour_4_pane

0x0464,	// (0x000523e2) title_pane_stacon_g1_ParamLimits

0x0464,	// (0x000523e2) title_pane_stacon_g1

0x4f3a,	// (0x00056eb8) popup_note_wait_window_g3_ParamLimits

0x4f3a,	// (0x00056eb8) popup_note_wait_window_g3

0x4fb1,	// (0x00056f2f) popup_note_wait_window_t5_ParamLimits

0x4fb1,	// (0x00056f2f) popup_note_wait_window_t5

0xd1d6,	// (0x0005f154) main_feb_china_hwr_fs_writing_pane

0xc739,	// (0x0005e6b7) popup_feb_china_hwr_fs_window_ParamLimits

0xc739,	// (0x0005e6b7) popup_feb_china_hwr_fs_window

0xbb5a,	// (0x0005dad8) aid_size_cell_hwr_fs_ParamLimits

0xbb5a,	// (0x0005dad8) aid_size_cell_hwr_fs

0x4960,	// (0x000568de) bg_popup_sub_pane_cp3_ParamLimits

0x4960,	// (0x000568de) bg_popup_sub_pane_cp3

0xbb6f,	// (0x0005daed) grid_hwr_fs_pane_ParamLimits

0xbb6f,	// (0x0005daed) grid_hwr_fs_pane

0x0bb6,	// (0x00052b34) linegrid_hwr_fs_pane_ParamLimits

0x0bb6,	// (0x00052b34) linegrid_hwr_fs_pane

0xbb87,	// (0x0005db05) cell_hwr_fs_pane_ParamLimits

0xbb87,	// (0x0005db05) cell_hwr_fs_pane

0x496c,	// (0x000568ea) linegrid_hwr_fs_pane_g1_ParamLimits

0x496c,	// (0x000568ea) linegrid_hwr_fs_pane_g1

0xd2c7,	// (0x0005f245) linegrid_hwr_fs_pane_g2_ParamLimits

0xd2c7,	// (0x0005f245) linegrid_hwr_fs_pane_g2

0x498a,	// (0x00056908) linegrid_hwr_fs_pane_g3_ParamLimits

0x498a,	// (0x00056908) linegrid_hwr_fs_pane_g3

0x0bea,	// (0x00052b68) linegrid_hwr_fs_pane_g4_ParamLimits

0x0bea,	// (0x00052b68) linegrid_hwr_fs_pane_g4

0x0c08,	// (0x00052b86) linegrid_hwr_fs_pane_g5_ParamLimits

0x0c08,	// (0x00052b86) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x0006178b) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x0006178b) linegrid_hwr_fs_pane_g

0x4996,	// (0x00056914) cell_hwr_fs_pane_g1_ParamLimits

0x4996,	// (0x00056914) cell_hwr_fs_pane_g1

0x46e3,	// (0x00056661) cell_hwr_fs_pane_g2_ParamLimits

0x46e3,	// (0x00056661) cell_hwr_fs_pane_g2

0xd2d9,	// (0x0005f257) cell_hwr_fs_pane_g3_ParamLimits

0xd2d9,	// (0x0005f257) cell_hwr_fs_pane_g3

0xd2e6,	// (0x0005f264) cell_hwr_fs_pane_g4_ParamLimits

0xd2e6,	// (0x0005f264) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x00061796) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x00061796) cell_hwr_fs_pane_g

0xbbad,	// (0x0005db2b) cell_hwr_fs_pane_t1

0xd1d6,	// (0x0005f154) grid_highlight_pane_cp6

0xd1d6,	// (0x0005f154) main_idle_act2_pane

0x2cee,	// (0x00054c6c) aid_inside_area_popup_secondary

0xd3c0,	// (0x0005f33e) aid_inside_area_window_primary_ParamLimits

0xd3c0,	// (0x0005f33e) aid_inside_area_window_primary

0x61ec,	// (0x0005816a) ai2_news_ticker_pane

0x61f4,	// (0x00058172) aid_size_cell_ai1_link_ParamLimits

0x61f4,	// (0x00058172) aid_size_cell_ai1_link

0x620e,	// (0x0005818c) popup_ai2_data_window_ParamLimits

0x620e,	// (0x0005818c) popup_ai2_data_window

0x622c,	// (0x000581aa) popup_ai2_link_window_ParamLimits

0x622c,	// (0x000581aa) popup_ai2_link_window

0x4960,	// (0x000568de) bg_popup_sub_pane_cp4_ParamLimits

0x4960,	// (0x000568de) bg_popup_sub_pane_cp4

0x6242,	// (0x000581c0) grid_ai2_link_pane_ParamLimits

0x6242,	// (0x000581c0) grid_ai2_link_pane

0x6259,	// (0x000581d7) popup_ai2_link_window_g1_ParamLimits

0x6259,	// (0x000581d7) popup_ai2_link_window_g1

0x6265,	// (0x000581e3) popup_ai2_link_window_g2_ParamLimits

0x6265,	// (0x000581e3) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x00061962) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x00061962) popup_ai2_link_window_g

0x6276,	// (0x000581f4) ai2_mp_button_pane

0x627e,	// (0x000581fc) ai2_mp_volume_pane

0x4b29,	// (0x00056aa7) bg_popup_sub_pane_cp5_ParamLimits

0x4b29,	// (0x00056aa7) bg_popup_sub_pane_cp5

0x6286,	// (0x00058204) heading_ai2_gene_pane_ParamLimits

0x6286,	// (0x00058204) heading_ai2_gene_pane

0x6292,	// (0x00058210) list_ai2_gene_pane_ParamLimits

0x6292,	// (0x00058210) list_ai2_gene_pane

0x62da,	// (0x00058258) cell_ai2_link_pane_ParamLimits

0x62da,	// (0x00058258) cell_ai2_link_pane

0x62f0,	// (0x0005826e) cell_ai2_link_pane_g1

0xd1d6,	// (0x0005f154) grid_highlight_pane_cp7

0x0fce,	// (0x00052f4c) ai2_mp_volume_pane_g1

0x63c3,	// (0x00058341) ai2_mp_volume_pane_g2

0x6338,	// (0x000582b6) list_ai2_gene_pane_t1

0x63cb,	// (0x00058349) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x0006197b) ai2_mp_volume_pane_g

0x0fd6,	// (0x00052f54) volume_small_pane_cp3

0x63d3,	// (0x00058351) aid_size_cell_ai2_button

0x63db,	// (0x00058359) grid_ai2_button_pane

0x63e4,	// (0x00058362) cell_ai2_button_pane_ParamLimits

0x63e4,	// (0x00058362) cell_ai2_button_pane

0xd1cc,	// (0x0005f14a) cell_ai2_button_pane_g1

0xd1d6,	// (0x0005f154) grid_highlight_pane_cp8

0x6383,	// (0x00058301) ai2_gene_pane_t1_ParamLimits

0x6383,	// (0x00058301) ai2_gene_pane_t1

0xc6a9,	// (0x0005e627) aid_height_parent_landscape

0xd590,	// (0x0005f50e) aid_height_set_list

0x5ca7,	// (0x00057c25) aid_size_parent

0x600d,	// (0x00057f8b) aid_size_cell_graphic_pane_ParamLimits

0x62a2,	// (0x00058220) popup_ai2_data_window_g1_ParamLimits

0x62a2,	// (0x00058220) popup_ai2_data_window_g1

0x62ae,	// (0x0005822c) ai2_news_ticker_pane_g1

0x62b6,	// (0x00058234) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x00061967) ai2_news_ticker_pane_g

0x62be,	// (0x0005823c) ai2_news_ticker_pane_t1

0x62cc,	// (0x0005824a) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x0006196c) ai2_news_ticker_pane_t

0x62f9,	// (0x00058277) heading_ai2_gene_pane_g1

0x6301,	// (0x0005827f) heading_ai2_gene_pane_t1_ParamLimits

0x6301,	// (0x0005827f) heading_ai2_gene_pane_t1

0x6316,	// (0x00058294) list_highlight_pane_cp6

0x631e,	// (0x0005829c) ai2_gene_pane_ParamLimits

0x631e,	// (0x0005829c) ai2_gene_pane

0x6346,	// (0x000582c4) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x00061971) list_ai2_gene_pane_t

0x6354,	// (0x000582d2) list_highlight_pane_cp8_ParamLimits

0x6354,	// (0x000582d2) list_highlight_pane_cp8

0x6365,	// (0x000582e3) ai2_gene_pane_g1_ParamLimits

0x6365,	// (0x000582e3) ai2_gene_pane_g1

0x6377,	// (0x000582f5) ai2_gene_pane_g2_ParamLimits

0x6377,	// (0x000582f5) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x00061976) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x00061976) ai2_gene_pane_g

0x2a72,	// (0x000549f0) scroll_pane_cp12

0xbb08,	// (0x0005da86) control_pane_t3_ParamLimits

0xbb08,	// (0x0005da86) control_pane_t3

0x3c2f,	// (0x00055bad) status_small_pane_g8_ParamLimits

0x3c2f,	// (0x00055bad) status_small_pane_g8

0xc7db,	// (0x0005e759) popup_find_window_ParamLimits

0xca88,	// (0x0005ea06) popup_note_image_window_ParamLimits

0x0ac7,	// (0x00052a45) list_double2_graphic_pane_vc_g1_ParamLimits

0x0ac7,	// (0x00052a45) list_double2_graphic_pane_vc_g1

0x3919,	// (0x00055897) list_double2_graphic_pane_vc_g2_ParamLimits

0x3919,	// (0x00055897) list_double2_graphic_pane_vc_g2

0x2df5,	// (0x00054d73) list_double2_graphic_pane_vc_g3_ParamLimits

0x2df5,	// (0x00054d73) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x00061759) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x00061759) list_double2_graphic_pane_vc_g

0x0ad3,	// (0x00052a51) list_double2_graphic_pane_vc_t1_ParamLimits

0x0ad3,	// (0x00052a51) list_double2_graphic_pane_vc_t1

0x3919,	// (0x00055897) list_single_heading_pane_vc_g1_ParamLimits

0x3919,	// (0x00055897) list_single_heading_pane_vc_g1

0x2df5,	// (0x00054d73) list_single_heading_pane_vc_g2_ParamLimits

0x2df5,	// (0x00054d73) list_single_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0006156c) list_single_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0006156c) list_single_heading_pane_vc_g

0x0b3d,	// (0x00052abb) list_single_heading_pane_vc_t1_ParamLimits

0x0b3d,	// (0x00052abb) list_single_heading_pane_vc_t1

0x0b53,	// (0x00052ad1) list_single_heading_pane_vc_t2_ParamLimits

0x0b53,	// (0x00052ad1) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x0006177a) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x0006177a) list_single_heading_pane_vc_t

0x48b6,	// (0x00056834) list_setting_number_pane_vc_g1_ParamLimits

0x48b6,	// (0x00056834) list_setting_number_pane_vc_g1

0x48c2,	// (0x00056840) list_setting_number_pane_vc_g2_ParamLimits

0x48c2,	// (0x00056840) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0006177f) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0006177f) list_setting_number_pane_vc_g

0x48ce,	// (0x0005684c) list_setting_number_pane_vc_t1_ParamLimits

0x48ce,	// (0x0005684c) list_setting_number_pane_vc_t1

0x48e2,	// (0x00056860) list_setting_number_pane_vc_t2_ParamLimits

0x48e2,	// (0x00056860) list_setting_number_pane_vc_t2

0x48fe,	// (0x0005687c) list_setting_number_pane_vc_t3_ParamLimits

0x48fe,	// (0x0005687c) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x00061784) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x00061784) list_setting_number_pane_vc_t

0x4926,	// (0x000568a4) set_value_pane_vc_ParamLimits

0x4926,	// (0x000568a4) set_value_pane_vc

0x5e9f,	// (0x00057e1d) list_double2_graphic_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_double2_graphic_pane_vc

0x5e9f,	// (0x00057e1d) list_double2_large_graphic_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_double2_large_graphic_pane_vc

0x5e9f,	// (0x00057e1d) list_double2_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_double2_pane_vc

0x5e9f,	// (0x00057e1d) list_double_graphic_heading_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_double_graphic_heading_pane_vc

0x5e9f,	// (0x00057e1d) list_double_graphic_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_double_graphic_pane_vc

0x5e9f,	// (0x00057e1d) list_double_heading_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_double_heading_pane_vc

0x5e9f,	// (0x00057e1d) list_double_large_graphic_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_double_large_graphic_pane_vc

0x5e9f,	// (0x00057e1d) list_double_number_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_double_number_pane_vc

0x5e9f,	// (0x00057e1d) list_double_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_double_pane_vc

0x5e9f,	// (0x00057e1d) list_double_time_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_double_time_pane_vc

0x5e9f,	// (0x00057e1d) list_setting_number_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_setting_number_pane_vc

0x5e9f,	// (0x00057e1d) list_setting_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_setting_pane_vc

0x5e9f,	// (0x00057e1d) list_single_graphic_heading_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_single_graphic_heading_pane_vc

0x5e9f,	// (0x00057e1d) list_single_heading_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_single_heading_pane_vc

0x5e9f,	// (0x00057e1d) list_single_number_heading_pane_vc_ParamLimits

0x5e9f,	// (0x00057e1d) list_single_number_heading_pane_vc

0x0ac7,	// (0x00052a45) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0ac7,	// (0x00052a45) list_double_graphic_heading_pane_vc_g1

0x2e2d,	// (0x00054dab) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2e2d,	// (0x00054dab) list_double_graphic_heading_pane_vc_g2

0x2e39,	// (0x00054db7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2e39,	// (0x00054db7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x00061982) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x00061982) list_double_graphic_heading_pane_vc_g

0x0fdf,	// (0x00052f5d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0fdf,	// (0x00052f5d) list_double_graphic_heading_pane_vc_t1

0x0b3d,	// (0x00052abb) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b3d,	// (0x00052abb) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x00061989) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x00061989) list_double_graphic_heading_pane_vc_t

0x48b6,	// (0x00056834) list_setting_pane_vc_g1_ParamLimits

0x48b6,	// (0x00056834) list_setting_pane_vc_g1

0x48c2,	// (0x00056840) list_setting_pane_vc_g2_ParamLimits

0x48c2,	// (0x00056840) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0006177f) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0006177f) list_setting_pane_vc_g

0x6620,	// (0x0005859e) list_setting_pane_vc_t1_ParamLimits

0x6620,	// (0x0005859e) list_setting_pane_vc_t1

0x6634,	// (0x000585b2) list_setting_pane_vc_t2_ParamLimits

0x6634,	// (0x000585b2) list_setting_pane_vc_t2

0x0001,

0xfa4e,	// (0x000619cc) list_setting_pane_vc_t_ParamLimits

0xfa4e,	// (0x000619cc) list_setting_pane_vc_t

0x4926,	// (0x000568a4) set_value_pane_cp_vc_ParamLimits

0x4926,	// (0x000568a4) set_value_pane_cp_vc

0x3919,	// (0x00055897) list_single_number_heading_pane_vc_g1_ParamLimits

0x3919,	// (0x00055897) list_single_number_heading_pane_vc_g1

0x2df5,	// (0x00054d73) list_single_number_heading_pane_vc_g2_ParamLimits

0x2df5,	// (0x00054d73) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0006156c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0006156c) list_single_number_heading_pane_vc_g

0x0b3d,	// (0x00052abb) list_single_number_heading_pane_vc_t1_ParamLimits

0x0b3d,	// (0x00052abb) list_single_number_heading_pane_vc_t1

0x0ff3,	// (0x00052f71) list_single_number_heading_pane_vc_t2_ParamLimits

0x0ff3,	// (0x00052f71) list_single_number_heading_pane_vc_t2

0x1007,	// (0x00052f85) list_single_number_heading_pane_vc_t3_ParamLimits

0x1007,	// (0x00052f85) list_single_number_heading_pane_vc_t3

0x0002,

0xfa53,	// (0x000619d1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa53,	// (0x000619d1) list_single_number_heading_pane_vc_t

0x0ac7,	// (0x00052a45) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0ac7,	// (0x00052a45) list_single_graphic_heading_pane_vc_g1

0x3919,	// (0x00055897) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3919,	// (0x00055897) list_single_graphic_heading_pane_vc_g4

0x2df5,	// (0x00054d73) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2df5,	// (0x00054d73) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x00061759) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00061759) list_single_graphic_heading_pane_vc_g

0x0b3d,	// (0x00052abb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0b3d,	// (0x00052abb) list_single_graphic_heading_pane_vc_t1

0x1019,	// (0x00052f97) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x1019,	// (0x00052f97) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x000619d8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x000619d8) list_single_graphic_heading_pane_vc_t

0x3919,	// (0x00055897) list_double2_pane_vc_g1_ParamLimits

0x3919,	// (0x00055897) list_double2_pane_vc_g1

0x2df5,	// (0x00054d73) list_double2_pane_vc_g2_ParamLimits

0x2df5,	// (0x00054d73) list_double2_pane_vc_g2

0x0001,

0xf5ee,	// (0x0006156c) list_double2_pane_vc_g_ParamLimits

0xf5ee,	// (0x0006156c) list_double2_pane_vc_g

0x102d,	// (0x00052fab) list_double2_pane_vc_t1_ParamLimits

0x102d,	// (0x00052fab) list_double2_pane_vc_t1

0x2e45,	// (0x00054dc3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2e45,	// (0x00054dc3) list_double2_large_graphic_pane_vc_g1

0x3919,	// (0x00055897) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3919,	// (0x00055897) list_double2_large_graphic_pane_vc_g2

0x2df5,	// (0x00054d73) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2df5,	// (0x00054d73) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x00061584) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x00061584) list_double2_large_graphic_pane_vc_g

0x1043,	// (0x00052fc1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x1043,	// (0x00052fc1) list_double2_large_graphic_pane_vc_t1

0x2e51,	// (0x00054dcf) list_double_time_pane_vc_g1_ParamLimits

0x2e51,	// (0x00054dcf) list_double_time_pane_vc_g1

0x2e5d,	// (0x00054ddb) list_double_time_pane_vc_g2_ParamLimits

0x2e5d,	// (0x00054ddb) list_double_time_pane_vc_g2

0x0001,

0xfa5f,	// (0x000619dd) list_double_time_pane_vc_g_ParamLimits

0xfa5f,	// (0x000619dd) list_double_time_pane_vc_g

0x1059,	// (0x00052fd7) list_double_time_pane_vc_t1_ParamLimits

0x1059,	// (0x00052fd7) list_double_time_pane_vc_t1

0x1072,	// (0x00052ff0) list_double_time_pane_vc_t2_ParamLimits

0x1072,	// (0x00052ff0) list_double_time_pane_vc_t2

0x10b2,	// (0x00053030) list_double_time_pane_vc_t3_ParamLimits

0x10b2,	// (0x00053030) list_double_time_pane_vc_t3

0x10ca,	// (0x00053048) list_double_time_pane_vc_t4_ParamLimits

0x10ca,	// (0x00053048) list_double_time_pane_vc_t4

0x0003,

0xfa64,	// (0x000619e2) list_double_time_pane_vc_t_ParamLimits

0xfa64,	// (0x000619e2) list_double_time_pane_vc_t

0x3919,	// (0x00055897) list_double_pane_vc_g1_ParamLimits

0x3919,	// (0x00055897) list_double_pane_vc_g1

0x2df5,	// (0x00054d73) list_double_pane_vc_g2_ParamLimits

0x2df5,	// (0x00054d73) list_double_pane_vc_g2

0x0001,

0xf5ee,	// (0x0006156c) list_double_pane_vc_g_ParamLimits

0xf5ee,	// (0x0006156c) list_double_pane_vc_g

0x10de,	// (0x0005305c) list_double_pane_vc_t1_ParamLimits

0x10de,	// (0x0005305c) list_double_pane_vc_t1

0x10f0,	// (0x0005306e) list_double_pane_vc_t2_ParamLimits

0x10f0,	// (0x0005306e) list_double_pane_vc_t2

0x0001,

0xfa6d,	// (0x000619eb) list_double_pane_vc_t_ParamLimits

0xfa6d,	// (0x000619eb) list_double_pane_vc_t

0x3919,	// (0x00055897) list_double_number_pane_vc_g1_ParamLimits

0x3919,	// (0x00055897) list_double_number_pane_vc_g1

0x2df5,	// (0x00054d73) list_double_number_pane_vc_g2_ParamLimits

0x2df5,	// (0x00054d73) list_double_number_pane_vc_g2

0x0001,

0xf5ee,	// (0x0006156c) list_double_number_pane_vc_g_ParamLimits

0xf5ee,	// (0x0006156c) list_double_number_pane_vc_g

0x1108,	// (0x00053086) list_double_number_pane_vc_t1_ParamLimits

0x1108,	// (0x00053086) list_double_number_pane_vc_t1

0x111c,	// (0x0005309a) list_double_number_pane_vc_t2_ParamLimits

0x111c,	// (0x0005309a) list_double_number_pane_vc_t2

0x10f0,	// (0x0005306e) list_double_number_pane_vc_t3_ParamLimits

0x10f0,	// (0x0005306e) list_double_number_pane_vc_t3

0x0002,

0xfa72,	// (0x000619f0) list_double_number_pane_vc_t_ParamLimits

0xfa72,	// (0x000619f0) list_double_number_pane_vc_t

0x2e69,	// (0x00054de7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2e69,	// (0x00054de7) list_double_large_graphic_pane_vc_g1

0x2e75,	// (0x00054df3) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2e75,	// (0x00054df3) list_double_large_graphic_pane_vc_g2

0x2df5,	// (0x00054d73) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2df5,	// (0x00054d73) list_double_large_graphic_pane_vc_g3

0x112e,	// (0x000530ac) list_double_large_graphic_pane_vc_g4_ParamLimits

0x112e,	// (0x000530ac) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa79,	// (0x000619f7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa79,	// (0x000619f7) list_double_large_graphic_pane_vc_g

0x113a,	// (0x000530b8) list_double_large_graphic_pane_vc_t1_ParamLimits

0x113a,	// (0x000530b8) list_double_large_graphic_pane_vc_t1

0x114c,	// (0x000530ca) list_double_large_graphic_pane_vc_t2_ParamLimits

0x114c,	// (0x000530ca) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa82,	// (0x00061a00) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa82,	// (0x00061a00) list_double_large_graphic_pane_vc_t

0x2e2d,	// (0x00054dab) list_double_heading_pane_vc_g1_ParamLimits

0x2e2d,	// (0x00054dab) list_double_heading_pane_vc_g1

0x2e39,	// (0x00054db7) list_double_heading_pane_vc_g2_ParamLimits

0x2e39,	// (0x00054db7) list_double_heading_pane_vc_g2

0x0001,

0xfa87,	// (0x00061a05) list_double_heading_pane_vc_g_ParamLimits

0xfa87,	// (0x00061a05) list_double_heading_pane_vc_g

0x1165,	// (0x000530e3) list_double_heading_pane_vc_t1_ParamLimits

0x1165,	// (0x000530e3) list_double_heading_pane_vc_t1

0x0b3d,	// (0x00052abb) list_double_heading_pane_vc_t2_ParamLimits

0x0b3d,	// (0x00052abb) list_double_heading_pane_vc_t2

0x0001,

0xfa8c,	// (0x00061a0a) list_double_heading_pane_vc_t_ParamLimits

0xfa8c,	// (0x00061a0a) list_double_heading_pane_vc_t

0x0ac7,	// (0x00052a45) list_double_graphic_pane_vc_g1_ParamLimits

0x0ac7,	// (0x00052a45) list_double_graphic_pane_vc_g1

0x2e84,	// (0x00054e02) list_double_graphic_pane_vc_g2_ParamLimits

0x2e84,	// (0x00054e02) list_double_graphic_pane_vc_g2

0x2e93,	// (0x00054e11) list_double_graphic_pane_vc_g3_ParamLimits

0x2e93,	// (0x00054e11) list_double_graphic_pane_vc_g3

0x0002,

0xfa91,	// (0x00061a0f) list_double_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x00061a0f) list_double_graphic_pane_vc_g

0x1179,	// (0x000530f7) list_double_graphic_pane_vc_t1_ParamLimits

0x1179,	// (0x000530f7) list_double_graphic_pane_vc_t1

0x10f0,	// (0x0005306e) list_double_graphic_pane_vc_t2_ParamLimits

0x10f0,	// (0x0005306e) list_double_graphic_pane_vc_t2

0x0001,

0xfa98,	// (0x00061a16) list_double_graphic_pane_vc_t_ParamLimits

0xfa98,	// (0x00061a16) list_double_graphic_pane_vc_t

0xee60,	// (0x00060dde) aid_size_cell_fastswap

0xadad,	// (0x0005cd2b) aid_size_cell_touch_ParamLimits

0xadad,	// (0x0005cd2b) aid_size_cell_touch

0xf43f,	// (0x000613bd) popup_fast_swap_wide_window_ParamLimits

0xf43f,	// (0x000613bd) popup_fast_swap_wide_window

0xaefc,	// (0x0005ce7a) touch_pane_ParamLimits

0xaefc,	// (0x0005ce7a) touch_pane

0x2b68,	// (0x00054ae6) button_value_adjust_pane_cp2

0x01e4,	// (0x00052162) button_value_adjust_pane_cp4

0x020c,	// (0x0005218a) form_field_data_pane_cp2

0xb7c8,	// (0x0005d746) form_field_data_wide_pane_cp2

0x31cf,	// (0x0005514d) bg_scroll_pane_ParamLimits

0x05c9,	// (0x00052547) scroll_handle_pane_ParamLimits

0x05dd,	// (0x0005255b) scroll_sc2_down_pane_ParamLimits

0x05dd,	// (0x0005255b) scroll_sc2_down_pane

0x3200,	// (0x0005517e) scroll_sc2_up_pane_ParamLimits

0x3200,	// (0x0005517e) scroll_sc2_up_pane

0xd944,	// (0x0005f8c2) grid_wheel_folder_pane_g1_ParamLimits

0xd944,	// (0x0005f8c2) grid_wheel_folder_pane_g1

0x0815,	// (0x00052793) clock_nsta_pane_cp2_ParamLimits

0x0815,	// (0x00052793) clock_nsta_pane_cp2

0xc5be,	// (0x0005e53c) listscroll_midp_pane_ParamLimits

0xc5cf,	// (0x0005e54d) midp_canvas_pane

0x3caa,	// (0x00055c28) nsta_clock_indic_pane

0x3cf8,	// (0x00055c76) listscroll_form_pane_vc

0x3d14,	// (0x00055c92) listscroll_set_pane_vc_ParamLimits

0x3d14,	// (0x00055c92) listscroll_set_pane_vc

0xcefd,	// (0x0005ee7b) clock_nsta_pane

0xcf27,	// (0x0005eea5) indicator_nsta_pane

0x47ac,	// (0x0005672a) bg_popup_sub_pane_cp2_ParamLimits

0x47c0,	// (0x0005673e) find_pane_cp2_ParamLimits

0x47c0,	// (0x0005673e) find_pane_cp2

0x47d6,	// (0x00056754) grid_toobar_pane_ParamLimits

0x4934,	// (0x000568b2) list_form_gen_pane_vc_ParamLimits

0x4934,	// (0x000568b2) list_form_gen_pane_vc

0x494a,	// (0x000568c8) scroll_pane_cp8_vc_ParamLimits

0x494a,	// (0x000568c8) scroll_pane_cp8_vc

0x49c6,	// (0x00056944) data_form_wide_pane_vc_ParamLimits

0x49c6,	// (0x00056944) data_form_wide_pane_vc

0x49d2,	// (0x00056950) form_field_data_wide_pane_vc_g1

0x49da,	// (0x00056958) form_field_data_wide_pane_vc_t1_ParamLimits

0x49da,	// (0x00056958) form_field_data_wide_pane_vc_t1

0x2b7c,	// (0x00054afa) input_focus_pane_cp6_vc_ParamLimits

0x2b7c,	// (0x00054afa) input_focus_pane_cp6_vc

0xd364,	// (0x0005f2e2) list_midp_pane_ParamLimits

0x6079,	// (0x00057ff7) scroll_pane_cp16_ParamLimits

0x6079,	// (0x00057ff7) scroll_pane_cp16

0x4d0e,	// (0x00056c8c) button_value_adjust_pane_ParamLimits

0x4d0e,	// (0x00056c8c) button_value_adjust_pane

0xd5a1,	// (0x0005f51f) button_value_adjust_pane_cp6_ParamLimits

0xd5a1,	// (0x0005f51f) button_value_adjust_pane_cp6

0xd6e3,	// (0x0005f661) settings_code_pane_cp_ParamLimits

0xd6e3,	// (0x0005f661) settings_code_pane_cp

0xd1cc,	// (0x0005f14a) cell_touch_pane_g1

0xd1cc,	// (0x0005f14a) cell_touch_pane_g2

0x0001,

0xf724,	// (0x000616a2) cell_touch_pane_g

0xd819,	// (0x0005f797) cell_touch_pane_cp_ParamLimits

0xd819,	// (0x0005f797) cell_touch_pane_cp

0xd835,	// (0x0005f7b3) cell_touch_pane_ParamLimits

0xd835,	// (0x0005f7b3) cell_touch_pane

0xd1cc,	// (0x0005f14a) scroll_sc2_down_pane_g1

0xd1cc,	// (0x0005f14a) scroll_sc2_up_pane_g1

0xd1d6,	// (0x0005f154) bg_set_opt_pane_cp4_vc

0x6417,	// (0x00058395) list_set_graphic_pane_vc_g1_ParamLimits

0x6417,	// (0x00058395) list_set_graphic_pane_vc_g1

0x6423,	// (0x000583a1) list_set_graphic_pane_vc_g2_ParamLimits

0x6423,	// (0x000583a1) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x0006198e) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x0006198e) list_set_graphic_pane_vc_g

0x642f,	// (0x000583ad) text_primary_small_cp13_vc_ParamLimits

0x642f,	// (0x000583ad) text_primary_small_cp13_vc

0x6447,	// (0x000583c5) list_set_graphic_pane_vc_ParamLimits

0x6447,	// (0x000583c5) list_set_graphic_pane_vc

0xd1d6,	// (0x0005f154) input_focus_pane_cp2_vc

0xd1cc,	// (0x0005f14a) setting_code_pane_vc_g1

0x645b,	// (0x000583d9) setting_code_pane_vc_t1

0x6469,	// (0x000583e7) set_text_pane_vc_t1_ParamLimits

0x6469,	// (0x000583e7) set_text_pane_vc_t1

0xd1d6,	// (0x0005f154) input_focus_pane_cp1_vc

0x6487,	// (0x00058405) list_set_text_pane_vc

0xd1cc,	// (0x0005f14a) setting_text_pane_vc_g1

0xd1d6,	// (0x0005f154) bg_set_opt_pane_cp2_vc

0x6491,	// (0x0005840f) setting_slider_graphic_pane_vc_g1

0x6499,	// (0x00058417) setting_slider_graphic_pane_vc_t1

0x64a7,	// (0x00058425) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x00061993) setting_slider_graphic_pane_vc_t

0x64b5,	// (0x00058433) slider_set_pane_cp_vc

0x64bd,	// (0x0005843b) slider_set_pane_vc_g1

0x64c6,	// (0x00058444) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x00061998) slider_set_pane_vc_g

0x2be3,	// (0x00054b61) set_opt_bg_pane_g1_copy1

0x2beb,	// (0x00054b69) set_opt_bg_pane_g2_copy1

0x64f2,	// (0x00058470) set_opt_bg_pane_g3_copy1

0x2bfb,	// (0x00054b79) set_opt_bg_pane_g4_copy1

0x2c03,	// (0x00054b81) set_opt_bg_pane_g5_copy1

0x2c0b,	// (0x00054b89) set_opt_bg_pane_g6_copy1

0x64fc,	// (0x0005847a) set_opt_bg_pane_g7_copy1

0x6506,	// (0x00058484) set_opt_bg_pane_g8_copy1

0x6510,	// (0x0005848e) set_opt_bg_pane_g9_copy1

0xd1d6,	// (0x0005f154) bg_set_opt_pane_cp_vc

0x651a,	// (0x00058498) setting_slider_pane_vc_t1

0x6499,	// (0x00058417) setting_slider_pane_vc_t2

0x64a7,	// (0x00058425) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x000619a7) setting_slider_pane_vc_t

0x64b5,	// (0x00058433) slider_set_pane_vc

0x0c5a,	// (0x00052bd8) volume_set_pane_vc_g1

0x0c63,	// (0x00052be1) volume_set_pane_vc_g2

0x0c6c,	// (0x00052bea) volume_set_pane_vc_g3

0x0c75,	// (0x00052bf3) volume_set_pane_vc_g4

0x0c7e,	// (0x00052bfc) volume_set_pane_vc_g5

0x0c87,	// (0x00052c05) volume_set_pane_vc_g6

0x0c90,	// (0x00052c0e) volume_set_pane_vc_g7

0x0c99,	// (0x00052c17) volume_set_pane_vc_g8

0x0ca2,	// (0x00052c20) volume_set_pane_vc_g9

0x0cab,	// (0x00052c29) volume_set_pane_vc_g10

0x0009,

0xfa30,	// (0x000619ae) volume_set_pane_vc_g

0x6529,	// (0x000584a7) volume_set_pane_vc

0x6531,	// (0x000584af) button_value_adjust_pane_cp1_vc

0x653b,	// (0x000584b9) list_highlight_pane_cp2_vc

0x6544,	// (0x000584c2) list_set_pane_vc_ParamLimits

0x6544,	// (0x000584c2) list_set_pane_vc

0x65ae,	// (0x0005852c) main_pane_set_vc_t1_ParamLimits

0x65ae,	// (0x0005852c) main_pane_set_vc_t1

0x65c3,	// (0x00058541) main_pane_set_vc_t2_ParamLimits

0x65c3,	// (0x00058541) main_pane_set_vc_t2

0x65d5,	// (0x00058553) main_pane_set_vc_t3_ParamLimits

0x65d5,	// (0x00058553) main_pane_set_vc_t3

0x65e9,	// (0x00058567) main_pane_set_vc_t4_ParamLimits

0x65e9,	// (0x00058567) main_pane_set_vc_t4

0x0003,

0xfa45,	// (0x000619c3) main_pane_set_vc_t_ParamLimits

0xfa45,	// (0x000619c3) main_pane_set_vc_t

0x65fd,	// (0x0005857b) setting_code_pane_vc_ParamLimits

0x65fd,	// (0x0005857b) setting_code_pane_vc

0x660e,	// (0x0005858c) setting_slider_graphic_pane_vc

0x660e,	// (0x0005858c) setting_slider_pane_vc

0x660e,	// (0x0005858c) setting_text_pane_vc

0x660e,	// (0x0005858c) setting_volume_pane_vc

0x6618,	// (0x00058596) scroll_pane_cp121_vc

0x2b56,	// (0x00054ad4) set_content_pane_vc

0x6656,	// (0x000585d4) button_value_adjust_pane_g1

0x665f,	// (0x000585dd) button_value_adjust_pane_g2

0x0001,

0xfa9d,	// (0x00061a1b) button_value_adjust_pane_g

0x6668,	// (0x000585e6) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6668,	// (0x000585e6) form_field_slider_wide_pane_vc_t1

0x667c,	// (0x000585fa) form_field_slider_wide_pane_vc_t2_ParamLimits

0x667c,	// (0x000585fa) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa2,	// (0x00061a20) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x00061a20) form_field_slider_wide_pane_vc_t

0x24d1,	// (0x0005444f) input_focus_pane_cp10_vc_ParamLimits

0x24d1,	// (0x0005444f) input_focus_pane_cp10_vc

0x668e,	// (0x0005860c) slider_cont_pane_cp1_vc_ParamLimits

0x668e,	// (0x0005860c) slider_cont_pane_cp1_vc

0x64bd,	// (0x0005843b) slider_form_pane_g1_cp2

0x64c6,	// (0x00058444) slider_form_pane_g2_cp2

0x66a7,	// (0x00058625) form_field_slider_pane_vc_t3

0x66b5,	// (0x00058633) form_field_slider_pane_vc_t4

0x66c3,	// (0x00058641) slider_form_pane_vc_ParamLimits

0x66c3,	// (0x00058641) slider_form_pane_vc

0x66d0,	// (0x0005864e) form_field_slider_pane_vc_t1_ParamLimits

0x66d0,	// (0x0005864e) form_field_slider_pane_vc_t1

0x667c,	// (0x000585fa) form_field_slider_pane_vc_t2_ParamLimits

0x667c,	// (0x000585fa) form_field_slider_pane_vc_t2

0x0001,

0xfab2,	// (0x00061a30) form_field_slider_pane_vc_t_ParamLimits

0xfab2,	// (0x00061a30) form_field_slider_pane_vc_t

0x24d1,	// (0x0005444f) input_focus_pane_cp9_vc_ParamLimits

0x24d1,	// (0x0005444f) input_focus_pane_cp9_vc

0x66ec,	// (0x0005866a) slider_cont_pane_vc_ParamLimits

0x66ec,	// (0x0005866a) slider_cont_pane_vc

0x66fe,	// (0x0005867c) list_form_graphic_pane_cp_vc_ParamLimits

0x66fe,	// (0x0005867c) list_form_graphic_pane_cp_vc

0x49d2,	// (0x00056950) form_field_popup_wide_pane_vc_g1

0x6713,	// (0x00058691) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6713,	// (0x00058691) form_field_popup_wide_pane_vc_t1

0x2b7c,	// (0x00054afa) input_focus_pane_cp8_vc_ParamLimits

0x2b7c,	// (0x00054afa) input_focus_pane_cp8_vc

0x672a,	// (0x000586a8) list_form_wide_pane_vc_ParamLimits

0x672a,	// (0x000586a8) list_form_wide_pane_vc

0x6736,	// (0x000586b4) list_form_graphic_pane_vc_g1

0x673e,	// (0x000586bc) list_form_graphic_pane_vc_t1_ParamLimits

0x673e,	// (0x000586bc) list_form_graphic_pane_vc_t1

0x2255,	// (0x000541d3) list_highlight_pane_cp5_vc_ParamLimits

0x2255,	// (0x000541d3) list_highlight_pane_cp5_vc

0x675a,	// (0x000586d8) list_form_graphic_pane_vc_ParamLimits

0x675a,	// (0x000586d8) list_form_graphic_pane_vc

0x49d2,	// (0x00056950) form_field_popup_pane_vc_g1

0x6770,	// (0x000586ee) form_field_popup_pane_vc_t1_ParamLimits

0x6770,	// (0x000586ee) form_field_popup_pane_vc_t1

0x2b7c,	// (0x00054afa) input_focus_pane_cp7_vc_ParamLimits

0x2b7c,	// (0x00054afa) input_focus_pane_cp7_vc

0x6787,	// (0x00058705) list_form_pane_vc_ParamLimits

0x6787,	// (0x00058705) list_form_pane_vc

0x6793,	// (0x00058711) data_form_pane_vc_t1_ParamLimits

0x6793,	// (0x00058711) data_form_pane_vc_t1

0x2be3,	// (0x00054b61) input_focus_pane_vc_g1

0x2beb,	// (0x00054b69) input_focus_pane_vc_g2

0x2bf3,	// (0x00054b71) input_focus_pane_vc_g3

0x2bfb,	// (0x00054b79) input_focus_pane_vc_g4

0x2c03,	// (0x00054b81) input_focus_pane_vc_g5

0x2c0b,	// (0x00054b89) input_focus_pane_vc_g6

0x2c13,	// (0x00054b91) input_focus_pane_vc_g7

0x2c1b,	// (0x00054b99) input_focus_pane_vc_g8

0x2c23,	// (0x00054ba1) input_focus_pane_vc_g9

0xd1cc,	// (0x0005f14a) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x0006162b) input_focus_pane_vc_g

0x49c6,	// (0x00056944) data_form_pane_vc_ParamLimits

0x49c6,	// (0x00056944) data_form_pane_vc

0x49d2,	// (0x00056950) form_field_data_pane_vc_g1

0x67b0,	// (0x0005872e) form_field_data_pane_vc_t1_ParamLimits

0x67b0,	// (0x0005872e) form_field_data_pane_vc_t1

0x2b7c,	// (0x00054afa) input_focus_pane_vc_ParamLimits

0x2b7c,	// (0x00054afa) input_focus_pane_vc

0x67ca,	// (0x00058748) button_value_adjust_pane_cp3_vc

0x67d2,	// (0x00058750) button_value_adjust_pane_cp5_vc

0x67da,	// (0x00058758) form_field_data_pane_vc_ParamLimits

0x67da,	// (0x00058758) form_field_data_pane_vc

0x67f5,	// (0x00058773) form_field_data_pane_vc_cp2

0x67fd,	// (0x0005877b) form_field_data_wide_pane_vc_ParamLimits

0x67fd,	// (0x0005877b) form_field_data_wide_pane_vc

0x6817,	// (0x00058795) form_field_data_wide_pane_vc_cp2

0x681f,	// (0x0005879d) form_field_popup_pane_vc_ParamLimits

0x681f,	// (0x0005879d) form_field_popup_pane_vc

0x683a,	// (0x000587b8) form_field_popup_wide_pane_vc_ParamLimits

0x683a,	// (0x000587b8) form_field_popup_wide_pane_vc

0x6854,	// (0x000587d2) form_field_slider_pane_vc_ParamLimits

0x6854,	// (0x000587d2) form_field_slider_pane_vc

0x6867,	// (0x000587e5) form_field_slider_wide_pane_vc_ParamLimits

0x6867,	// (0x000587e5) form_field_slider_wide_pane_vc

0xd853,	// (0x0005f7d1) grid_touch_1_pane_ParamLimits

0xd853,	// (0x0005f7d1) grid_touch_1_pane

0xd867,	// (0x0005f7e5) grid_touch_2_pane_ParamLimits

0xd867,	// (0x0005f7e5) grid_touch_2_pane

0x6980,	// (0x000588fe) touch_pane_g1_ParamLimits

0x6980,	// (0x000588fe) touch_pane_g1

0x68e2,	// (0x00058860) cell_app_pane_cp_wide_ParamLimits

0x68e2,	// (0x00058860) cell_app_pane_cp_wide

0x68f3,	// (0x00058871) grid_popup_fast_wide_pane_ParamLimits

0x68f3,	// (0x00058871) grid_popup_fast_wide_pane

0x6907,	// (0x00058885) scroll_pane_cp19_ParamLimits

0x6907,	// (0x00058885) scroll_pane_cp19

0xd1d6,	// (0x0005f154) bg_popup_window_pane_cp20

0x691b,	// (0x00058899) listscroll_popup_fast_wide_pane

0x2d5b,	// (0x00054cd9) grid_indicator_nsta_pane

0x6923,	// (0x000588a1) clock_nsta_pane_g1

0x692c,	// (0x000588aa) clock_nsta_pane_t1

0xd893,	// (0x0005f811) cell_indicator_nsta_pane_ParamLimits

0xd893,	// (0x0005f811) cell_indicator_nsta_pane

0x6980,	// (0x000588fe) cell_indicator_nsta_pane_g1

0xd8b0,	// (0x0005f82e) cell_indicator_nsta_pane_g2

0x0001,

0xfabc,	// (0x00061a3a) cell_indicator_nsta_pane_g

0x69a3,	// (0x00058921) clock_nsta_pane_cp

0x69ab,	// (0x00058929) indicator_nsta_pane_cp

0x69b3,	// (0x00058931) nsta_clock_indic_pane_g1

0x2321,	// (0x0005429f) grid_indicator_pane

0x32f2,	// (0x00055270) scroll_pane_cp29

0x0761,	// (0x000526df) indicator_nsta_pane_cp2_ParamLimits

0x0761,	// (0x000526df) indicator_nsta_pane_cp2

0x2255,	// (0x000541d3) main_apps_wheel_pane

0x4b91,	// (0x00056b0f) form_midp_field_text_pane_ParamLimits

0x4ce0,	// (0x00056c5e) scroll_bar_cp050_ParamLimits

0x6a1c,	// (0x0005899a) cell_indicator_pane_ParamLimits

0x6a1c,	// (0x0005899a) cell_indicator_pane

0x6a34,	// (0x000589b2) cell_indicator_pane_g1

0xd8c6,	// (0x0005f844) grid_wheel_folder_pane_ParamLimits

0xd8c6,	// (0x0005f844) grid_wheel_folder_pane

0xd8d4,	// (0x0005f852) list_wheel_apps_pane_ParamLimits

0xd8d4,	// (0x0005f852) list_wheel_apps_pane

0xd8e2,	// (0x0005f860) main_apps_wheel_pane_g1_ParamLimits

0xd8e2,	// (0x0005f860) main_apps_wheel_pane_g1

0xd8f2,	// (0x0005f870) main_apps_wheel_pane_g2_ParamLimits

0xd8f2,	// (0x0005f870) main_apps_wheel_pane_g2

0x0001,

0xfad8,	// (0x00061a56) main_apps_wheel_pane_g_ParamLimits

0xfad8,	// (0x00061a56) main_apps_wheel_pane_g

0xd902,	// (0x0005f880) main_apps_wheel_pane_t1_ParamLimits

0xd902,	// (0x0005f880) main_apps_wheel_pane_t1

0xd91a,	// (0x0005f898) list_wheel_apps_pane_g1

0xd922,	// (0x0005f8a0) list_wheel_apps_pane_g2

0xd92a,	// (0x0005f8a8) list_wheel_apps_pane_g3

0xd932,	// (0x0005f8b0) list_wheel_apps_pane_g4

0xd93a,	// (0x0005f8b8) list_wheel_apps_pane_g5

0x0004,

0xfadd,	// (0x00061a5b) list_wheel_apps_pane_g

0x3824,	// (0x000557a2) navi_icon_text_pane

0xcdf6,	// (0x0005ed74) aid_fill_nsta

0xd957,	// (0x0005f8d5) navi_icon_text_pane_g1

0xd963,	// (0x0005f8e1) navi_icon_text_pane_t1

0xc5a6,	// (0x0005e524) list_set_graphic_pane_t1_ParamLimits

0xc5a6,	// (0x0005e524) list_set_graphic_pane_t1

0x5431,	// (0x000573af) popup_midp_note_alarm_window_t6_ParamLimits

0x5431,	// (0x000573af) popup_midp_note_alarm_window_t6

0x5443,	// (0x000573c1) popup_midp_note_alarm_window_t7_ParamLimits

0x5443,	// (0x000573c1) popup_midp_note_alarm_window_t7

0x5455,	// (0x000573d3) popup_midp_note_alarm_window_t8_ParamLimits

0x5455,	// (0x000573d3) popup_midp_note_alarm_window_t8

0x5467,	// (0x000573e5) popup_midp_note_alarm_window_t9_ParamLimits

0x5467,	// (0x000573e5) popup_midp_note_alarm_window_t9

0x5479,	// (0x000573f7) popup_midp_note_alarm_window_t10_ParamLimits

0x5479,	// (0x000573f7) popup_midp_note_alarm_window_t10

0x548b,	// (0x00057409) popup_midp_note_alarm_window_t11_ParamLimits

0x548b,	// (0x00057409) popup_midp_note_alarm_window_t11

0x549d,	// (0x0005741b) scroll_pane_cp17_ParamLimits

0x549d,	// (0x0005741b) scroll_pane_cp17

0x0c5a,	// (0x00052bd8) volume_small_pane_cp_g1

0x118b,	// (0x00053109) volume_small_pane_cp_g2

0x1194,	// (0x00053112) volume_small_pane_cp_g3

0x119d,	// (0x0005311b) volume_small_pane_cp_g4

0x11a6,	// (0x00053124) volume_small_pane_cp_g5

0x11af,	// (0x0005312d) volume_small_pane_cp_g6

0x11b8,	// (0x00053136) volume_small_pane_cp_g7

0x11c1,	// (0x0005313f) volume_small_pane_cp_g8

0x11ca,	// (0x00053148) volume_small_pane_cp_g9

0x11d3,	// (0x00053151) volume_small_pane_cp_g10

0x3a85,	// (0x00055a03) midp_ticker_pane_g1_ParamLimits

0x3a91,	// (0x00055a0f) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x000616f3) midp_ticker_pane_g_ParamLimits

0xc666,	// (0x0005e5e4) midp_ticker_pane_t1_ParamLimits

0xce16,	// (0x0005ed94) aid_fill_nsta_2

0x4ccc,	// (0x00056c4a) list_form2_midp_pane

0x5e5a,	// (0x00057dd8) midp_editing_number_pane_ParamLimits

0x5e69,	// (0x00057de7) midp_ticker_pane_ParamLimits

0x6b2d,	// (0x00058aab) form2_midp_field_pane

0x6b51,	// (0x00058acf) scroll_pane_cp51

0x6b71,	// (0x00058aef) form2_midp_button_pane_ParamLimits

0x6b71,	// (0x00058aef) form2_midp_button_pane

0x6b83,	// (0x00058b01) form2_midp_content_pane_ParamLimits

0x6b83,	// (0x00058b01) form2_midp_content_pane

0x6b9d,	// (0x00058b1b) form2_midp_field_choice_group_pane

0x6ba5,	// (0x00058b23) form2_midp_field_pane_g1

0x6bad,	// (0x00058b2b) form2_midp_field_pane_g2

0x6bb5,	// (0x00058b33) form2_midp_field_pane_g3

0x6bbd,	// (0x00058b3b) form2_midp_field_pane_g4

0x0003,

0xfb02,	// (0x00061a80) form2_midp_field_pane_g

0x6bc5,	// (0x00058b43) form2_midp_gauge_slider_pane

0x6bcd,	// (0x00058b4b) form2_midp_gauge_wait_pane

0x6bd5,	// (0x00058b53) form2_midp_image_pane_ParamLimits

0x6bd5,	// (0x00058b53) form2_midp_image_pane

0x6bf0,	// (0x00058b6e) form2_midp_label_pane_ParamLimits

0x6bf0,	// (0x00058b6e) form2_midp_label_pane

0xd991,	// (0x0005f90f) form2_midp_label_pane_cp_ParamLimits

0xd991,	// (0x0005f90f) form2_midp_label_pane_cp

0x6c30,	// (0x00058bae) form2_midp_string_pane_ParamLimits

0x6c30,	// (0x00058bae) form2_midp_string_pane

0xbd80,	// (0x0005dcfe) form2_midp_text_pane_ParamLimits

0xbd80,	// (0x0005dcfe) form2_midp_text_pane

0x6c42,	// (0x00058bc0) form2_midp_time_pane

0x6c52,	// (0x00058bd0) input_focus_pane_cp51_ParamLimits

0x6c52,	// (0x00058bd0) input_focus_pane_cp51

0x6c6a,	// (0x00058be8) form2_midp_label_pane_t1_ParamLimits

0x6c6a,	// (0x00058be8) form2_midp_label_pane_t1

0xbda3,	// (0x0005dd21) form2_mdip_text_pane_t1_ParamLimits

0xbda3,	// (0x0005dd21) form2_mdip_text_pane_t1

0x121e,	// (0x0005319c) form2_midp_time_pane_t1

0x6cb8,	// (0x00058c36) form2_midp_gauge_slider_pane_t1

0xd9b2,	// (0x0005f930) form2_midp_gauge_slider_pane_t2

0xd9c4,	// (0x0005f942) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0b,	// (0x00061a89) form2_midp_gauge_slider_pane_t

0x6cee,	// (0x00058c6c) form2_midp_slider_pane

0x6cfa,	// (0x00058c78) form2_midp_gauge_wait_pane_t1

0x6d08,	// (0x00058c86) form2_midp_wait_pane_ParamLimits

0x6d08,	// (0x00058c86) form2_midp_wait_pane

0xd2f3,	// (0x0005f271) list_single_2graphic_pane_cp4_ParamLimits

0xd2f3,	// (0x0005f271) list_single_2graphic_pane_cp4

0xd9d6,	// (0x0005f954) list_single_midp_graphic_pane_cp_ParamLimits

0xd9d6,	// (0x0005f954) list_single_midp_graphic_pane_cp

0xd1d6,	// (0x0005f154) list_highlight_pane_cp20

0x6d57,	// (0x00058cd5) list_single_2graphic_pane_g1_cp4

0x62f9,	// (0x00058277) list_single_2graphic_pane_g2_cp4

0x6d5f,	// (0x00058cdd) list_single_2graphic_pane_t1_cp4

0x2255,	// (0x000541d3) list_highlight_pane_cp21

0x6d6e,	// (0x00058cec) list_single_midp_graphic_pane_g4_cp

0x6d7d,	// (0x00058cfb) list_single_midp_graphic_pane_t1_cp

0xd9f7,	// (0x0005f975) form2_mdip_string_pane_t1_ParamLimits

0xd9f7,	// (0x0005f975) form2_mdip_string_pane_t1

0xd1d6,	// (0x0005f154) bg_wml_button_pane_cp2

0xd1cc,	// (0x0005f14a) form2_midp_image_pane_g1

0x2b02,	// (0x00054a80) list_double_large_graphic_pane_g5_ParamLimits

0x2b02,	// (0x00054a80) list_double_large_graphic_pane_g5

0xc5be,	// (0x0005e53c) midp_form_pane_ParamLimits

0x2255,	// (0x000541d3) main_apps_wheel_pane_ParamLimits

0xcb0e,	// (0x0005ea8c) popup_preview_window_ParamLimits

0xcb0e,	// (0x0005ea8c) popup_preview_window

0x42f6,	// (0x00056274) popup_touch_info_window_ParamLimits

0x42f6,	// (0x00056274) popup_touch_info_window

0x4318,	// (0x00056296) popup_touch_menu_window_ParamLimits

0x4318,	// (0x00056296) popup_touch_menu_window

0xd1c2,	// (0x0005f140) bg_popup_sub_pane_cp6

0x6e37,	// (0x00058db5) list_touch_menu_pane

0x6e3f,	// (0x00058dbd) list_single_touch_menu_pane_ParamLimits

0x6e3f,	// (0x00058dbd) list_single_touch_menu_pane

0x6e5a,	// (0x00058dd8) list_single_touch_menu_pane_t1

0x2255,	// (0x000541d3) bg_popup_sub_pane_cp7_ParamLimits

0x2255,	// (0x000541d3) bg_popup_sub_pane_cp7

0x6e68,	// (0x00058de6) heading_sub_pane

0x6e70,	// (0x00058dee) list_touch_info_pane_ParamLimits

0x6e70,	// (0x00058dee) list_touch_info_pane

0x6e7f,	// (0x00058dfd) list_single_touch_info_pane_ParamLimits

0x6e7f,	// (0x00058dfd) list_single_touch_info_pane

0x6e91,	// (0x00058e0f) list_single_touch_info_pane_t1

0x6e9f,	// (0x00058e1d) list_single_touch_info_pane_t2

0x0001,

0xfb19,	// (0x00061a97) list_single_touch_info_pane_t

0x39a8,	// (0x00055926) bg_popup_heading_pane_cp

0x6ead,	// (0x00058e2b) heading_sub_pane_t1

0x4960,	// (0x000568de) bg_popup_preview_window_pane_cp_ParamLimits

0x4960,	// (0x000568de) bg_popup_preview_window_pane_cp

0x6e68,	// (0x00058de6) heading_preview_pane

0x6e70,	// (0x00058dee) list_preview_pane_ParamLimits

0x6e70,	// (0x00058dee) list_preview_pane

0x6ebb,	// (0x00058e39) popup_preview_window_g1

0x6e7f,	// (0x00058dfd) list_single_preview_pane_ParamLimits

0x6e7f,	// (0x00058dfd) list_single_preview_pane

0x6ec3,	// (0x00058e41) list_single_preview_pane_g1

0x6ecb,	// (0x00058e49) list_single_preview_pane_t1

0x6e91,	// (0x00058e0f) list_single_preview_pane_t2

0x0001,

0xfb1e,	// (0x00061a9c) list_single_preview_pane_t

0x6ed9,	// (0x00058e57) bg_popup_heading_pane_cp2_ParamLimits

0x6ed9,	// (0x00058e57) bg_popup_heading_pane_cp2

0x6eef,	// (0x00058e6d) heading_preview_pane_g1

0x6ef7,	// (0x00058e75) heading_preview_pane_t1_ParamLimits

0x6ef7,	// (0x00058e75) heading_preview_pane_t1

0x2344,	// (0x000542c2) soft_indicator_pane_t1_ParamLimits

0x2a4f,	// (0x000549cd) scroll_pane_ParamLimits

0x31ee,	// (0x0005516c) scroll_sc2_left_pane

0x31f7,	// (0x00055175) scroll_sc2_right_pane

0x3216,	// (0x00055194) scroll_bg_pane_g1_ParamLimits

0x322b,	// (0x000551a9) scroll_bg_pane_g2_ParamLimits

0x3243,	// (0x000551c1) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x00061682) scroll_bg_pane_g_ParamLimits

0x3216,	// (0x00055194) scroll_handle_pane_g1_ParamLimits

0x3265,	// (0x000551e3) scroll_handle_pane_g2_ParamLimits

0x3243,	// (0x000551c1) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x00061689) scroll_handle_pane_g_ParamLimits

0x3d4e,	// (0x00055ccc) popup_choice_list_window_ParamLimits

0x3d4e,	// (0x00055ccc) popup_choice_list_window

0x47b8,	// (0x00056736) choice_list_pane

0x483a,	// (0x000567b8) cell_toolbar_pane_t1

0x4862,	// (0x000567e0) toolbar_button_pane_ParamLimits

0x596d,	// (0x000578eb) ai_gene_pane_1_t2_ParamLimits

0x596d,	// (0x000578eb) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x000618a1) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x000618a1) ai_gene_pane_1_t

0x6f14,	// (0x00058e92) scroll_sc2_left_pane_g1

0x6f14,	// (0x00058e92) scroll_sc2_right_pane_g1

0x3d26,	// (0x00055ca4) bg_popup_sub_pane_cp10

0x6f1e,	// (0x00058e9c) list_choice_list_pane

0x6f35,	// (0x00058eb3) list_single_choice_list_pane_ParamLimits

0x6f35,	// (0x00058eb3) list_single_choice_list_pane

0x6f49,	// (0x00058ec7) list_single_choice_list_pane_g1

0x6f51,	// (0x00058ecf) list_single_choice_list_pane_t1_ParamLimits

0x6f51,	// (0x00058ecf) list_single_choice_list_pane_t1

0x6f66,	// (0x00058ee4) choice_list_pane_g1

0x6f6e,	// (0x00058eec) choice_list_pane_t1

0xd1c2,	// (0x0005f140) input_focus_pane_cp11

0x30c8,	// (0x00055046) title_pane_stacon_g2_ParamLimits

0x30c8,	// (0x00055046) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x00061668) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x00061668) title_pane_stacon_g

0x39a8,	// (0x00055926) cursor_press_pane

0xc78f,	// (0x0005e70d) popup_fep_hwr_window_ParamLimits

0xc78f,	// (0x0005e70d) popup_fep_hwr_window

0x3e9a,	// (0x00055e18) popup_fep_vkb_window_ParamLimits

0x3e9a,	// (0x00055e18) popup_fep_vkb_window

0x6f7c,	// (0x00058efa) cursor_press_pane_g1

0x0002,

0xfb47,	// (0x00061ac5) fep_vkb_side_pane_g_ParamLimits

0x126a,	// (0x000531e8) fep_hwr_candidate_pane_ParamLimits

0x126a,	// (0x000531e8) fep_hwr_candidate_pane

0x1294,	// (0x00053212) fep_hwr_side_pane_ParamLimits

0x1294,	// (0x00053212) fep_hwr_side_pane

0x12b6,	// (0x00053234) fep_hwr_top_pane_ParamLimits

0x12b6,	// (0x00053234) fep_hwr_top_pane

0x12ce,	// (0x0005324c) fep_hwr_write_pane_ParamLimits

0x12ce,	// (0x0005324c) fep_hwr_write_pane

0xfb47,	// (0x00061ac5) fep_vkb_side_pane_g

0x6f84,	// (0x00058f02) fep_hwr_top_pane_g1

0x6f96,	// (0x00058f14) fep_hwr_top_pane_g2

0x1308,	// (0x00053286) fep_hwr_top_pane_g3

0x0002,

0xfb23,	// (0x00061aa1) fep_hwr_top_pane_g

0x131d,	// (0x0005329b) fep_hwr_top_text_pane

0x33ba,	// (0x00055338) fep_hwr_top_text_pane_g1

0x6fcc,	// (0x00058f4a) fep_hwr_top_text_pane_t1

0x1427,	// (0x000533a5) fep_hwr_candidate_pane_g1

0x7217,	// (0x00059195) fep_vkb_keypad_pane_g3_ParamLimits

0x7217,	// (0x00059195) fep_vkb_keypad_pane_g3

0x7243,	// (0x000591c1) fep_vkb_keypad_pane_g4_ParamLimits

0x7243,	// (0x000591c1) fep_vkb_keypad_pane_g4

0x72ba,	// (0x00059238) fep_vkb_bottom_pane_g2_ParamLimits

0x72ba,	// (0x00059238) fep_vkb_bottom_pane_g2

0x0001,

0xfb4e,	// (0x00061acc) fep_vkb_bottom_pane_g_ParamLimits

0xfb4e,	// (0x00061acc) fep_vkb_bottom_pane_g

0x6f14,	// (0x00058e92) cell_vkb_side_pane_g2

0x0001,

0xfb58,	// (0x00061ad6) cell_vkb_side_pane_g

0x7345,	// (0x000592c3) cell_vkb_side_pane_t1

0x7353,	// (0x000592d1) cell_vkb_side_pane_t1_copy1

0x6f14,	// (0x00058e92) bg_fep_vkb_candidate_pane_g2

0x7497,	// (0x00059415) cell_vkb_candidate_pane_ParamLimits

0x6fda,	// (0x00058f58) aid_size_cell_vkb_ParamLimits

0x6fda,	// (0x00058f58) aid_size_cell_vkb

0x7497,	// (0x00059415) cell_vkb_candidate_pane

0x144e,	// (0x000533cc) bg_popup_fep_shadow_pane_g1

0xda93,	// (0x0005fa11) fep_vkb_bottom_pane_ParamLimits

0xda93,	// (0x0005fa11) fep_vkb_bottom_pane

0x70a9,	// (0x00059027) fep_vkb_candidate_pane_ParamLimits

0x70a9,	// (0x00059027) fep_vkb_candidate_pane

0xdabf,	// (0x0005fa3d) fep_vkb_keypad_pane_ParamLimits

0xdabf,	// (0x0005fa3d) fep_vkb_keypad_pane

0xdae6,	// (0x0005fa64) fep_vkb_side_pane_ParamLimits

0xdae6,	// (0x0005fa64) fep_vkb_side_pane

0xdb22,	// (0x0005faa0) fep_vkb_top_pane_ParamLimits

0xdb22,	// (0x0005faa0) fep_vkb_top_pane

0x7170,	// (0x000590ee) fep_vkb_top_pane_g1_ParamLimits

0x7170,	// (0x000590ee) fep_vkb_top_pane_g1

0x717f,	// (0x000590fd) fep_vkb_top_pane_g2_ParamLimits

0x717f,	// (0x000590fd) fep_vkb_top_pane_g2

0x718e,	// (0x0005910c) fep_vkb_top_pane_g3_ParamLimits

0x718e,	// (0x0005910c) fep_vkb_top_pane_g3

0x0003,

0xfb3e,	// (0x00061abc) fep_vkb_top_pane_g_ParamLimits

0xfb3e,	// (0x00061abc) fep_vkb_top_pane_g

0x71ac,	// (0x0005912a) fep_vkb_top_text_pane_ParamLimits

0x71ac,	// (0x0005912a) fep_vkb_top_text_pane

0xdb5e,	// (0x0005fadc) fep_vkb_side_pane_g1_ParamLimits

0xdb5e,	// (0x0005fadc) fep_vkb_side_pane_g1

0x7206,	// (0x00059184) grid_vkb_side_pane_ParamLimits

0x7206,	// (0x00059184) grid_vkb_side_pane

0x1456,	// (0x000533d4) bg_popup_fep_shadow_pane_g2

0x145f,	// (0x000533dd) bg_popup_fep_shadow_pane_g3

0x1467,	// (0x000533e5) bg_popup_fep_shadow_pane_g4

0x1470,	// (0x000533ee) bg_popup_fep_shadow_pane_g5

0x147a,	// (0x000533f8) bg_popup_fep_shadow_pane_g6

0x1482,	// (0x00053400) bg_popup_fep_shadow_pane_g7

0x2bfb,	// (0x00054b79) bg_popup_fep_shadow_pane_g8

0x7265,	// (0x000591e3) grid_vkb_keypad_number_pane_ParamLimits

0x7265,	// (0x000591e3) grid_vkb_keypad_number_pane

0x7279,	// (0x000591f7) grid_vkb_keypad_pane_ParamLimits

0x7279,	// (0x000591f7) grid_vkb_keypad_pane

0x729f,	// (0x0005921d) fep_vkb_bottom_pane_g1_ParamLimits

0x729f,	// (0x0005921d) fep_vkb_bottom_pane_g1

0x72c8,	// (0x00059246) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x72c8,	// (0x00059246) grid_vkb_keypad_bottom_left_pane

0x72dd,	// (0x0005925b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x72dd,	// (0x0005925b) grid_vkb_keypad_bottom_right_pane

0x72f2,	// (0x00059270) fep_vkb_top_text_pane_g1

0xdba5,	// (0x0005fb23) fep_vkb_top_text_pane_t1

0xdbb7,	// (0x0005fb35) cell_vkb_side_pane_ParamLimits

0xdbb7,	// (0x0005fb35) cell_vkb_side_pane

0x6f14,	// (0x00058e92) cell_vkb_side_pane_g1

0x7361,	// (0x000592df) cell_vkb_keypad_pane_ParamLimits

0x7361,	// (0x000592df) cell_vkb_keypad_pane

0x73ee,	// (0x0005936c) cell_vkb_keypad_pane_g1

0x0008,

0xfb6b,	// (0x00061ae9) bg_popup_fep_shadow_pane_g

0x1494,	// (0x00053412) cell_hwr_side_pane_g1

0x1494,	// (0x00053412) cell_hwr_side_pane_g2

0x73f8,	// (0x00059376) cell_vkb_keypad_pane_t1

0xdbcd,	// (0x0005fb4b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdbcd,	// (0x0005fb4b) cell_vkb_keypad_bottom_left_pane

0xdbe2,	// (0x0005fb60) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdbe2,	// (0x0005fb60) cell_vkb_keypad_bottom_right_pane

0x6f14,	// (0x00058e92) cell_vkb_keypad_bottom_left_pane_g1

0x6f14,	// (0x00058e92) cell_vkb_keypad_bottom_right_pane_g1

0x745c,	// (0x000593da) cell_vkb_keypad_number_pane_ParamLimits

0x745c,	// (0x000593da) cell_vkb_keypad_number_pane

0x747b,	// (0x000593f9) cell_vkb_keypad_number_pane_g1

0x7485,	// (0x00059403) cell_vkb_keypad_number_pane_g2

0x748e,	// (0x0005940c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5d,	// (0x00061adb) cell_vkb_keypad_number_pane_g

0x73f8,	// (0x00059376) cell_vkb_keypad_number_pane_t1

0x74b8,	// (0x00059436) fep_vkb_candidate_pane_g1

0x0001,

0xfb7e,	// (0x00061afc) cell_hwr_side_pane_g

0x74d1,	// (0x0005944f) cell_hwr_side_pane_t1

0x149e,	// (0x0005341c) cell_hwr_side_pane_t1_copy1

0x14ac,	// (0x0005342a) cell_hwr_candidate_pane_g1

0x14db,	// (0x00053459) cell_hwr_candidate_pane_t1

0x6f14,	// (0x00058e92) cell_vkb_candidate_pane_g2

0x7515,	// (0x00059493) cell_vkb_candidate_pane_t1

0x1231,	// (0x000531af) bg_popup_fep_shadow_pane_ParamLimits

0x1231,	// (0x000531af) bg_popup_fep_shadow_pane

0x12e8,	// (0x00053266) bg_fep_hwr_top_pane_g4

0x6fa8,	// (0x00058f26) bg_hwr_side_pane_g1_ParamLimits

0x6fa8,	// (0x00058f26) bg_hwr_side_pane_g1

0xbdd7,	// (0x0005dd55) cell_hwr_side_pane_ParamLimits

0xbdd7,	// (0x0005dd55) cell_hwr_side_pane

0x1398,	// (0x00053316) fep_hwr_write_pane_g1_ParamLimits

0x1398,	// (0x00053316) fep_hwr_write_pane_g1

0x13a5,	// (0x00053323) fep_hwr_write_pane_g2_ParamLimits

0x13a5,	// (0x00053323) fep_hwr_write_pane_g2

0x13b2,	// (0x00053330) fep_hwr_write_pane_g3_ParamLimits

0x13b2,	// (0x00053330) fep_hwr_write_pane_g3

0xbdf7,	// (0x0005dd75) fep_hwr_write_pane_g4_ParamLimits

0xbdf7,	// (0x0005dd75) fep_hwr_write_pane_g4

0x0005,

0xfb2a,	// (0x00061aa8) fep_hwr_write_pane_g_ParamLimits

0xfb2a,	// (0x00061aa8) fep_hwr_write_pane_g

0x12e8,	// (0x00053266) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x12e8,	// (0x00053266) bg_fep_hwr_candidate_pane_g2

0x13d5,	// (0x00053353) cell_hwr_candidate_pane_ParamLimits

0x13d5,	// (0x00053353) cell_hwr_candidate_pane

0x1427,	// (0x000533a5) fep_hwr_candidate_pane_g1_ParamLimits

0x7008,	// (0x00058f86) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7008,	// (0x00058f86) bg_popup_fep_shadow_pane_cp2

0x719e,	// (0x0005911c) fep_vkb_top_pane_g4_ParamLimits

0x719e,	// (0x0005911c) fep_vkb_top_pane_g4

0x71e4,	// (0x00059162) fep_vkb_side_pane_g2_ParamLimits

0x71e4,	// (0x00059162) fep_vkb_side_pane_g2

0xb6ca,	// (0x0005d648) list_setting_pane_t4_ParamLimits

0xb6ca,	// (0x0005d648) list_setting_pane_t4

0xb766,	// (0x0005d6e4) list_setting_number_pane_t5_ParamLimits

0xb766,	// (0x0005d6e4) list_setting_number_pane_t5

0x33ec,	// (0x0005536a) list_double_heading_pane_cp2_ParamLimits

0x33ec,	// (0x0005536a) list_double_heading_pane_cp2

0x2b96,	// (0x00054b14) list_double_heading_pane_g1_cp2_ParamLimits

0x2b96,	// (0x00054b14) list_double_heading_pane_g1_cp2

0x2ba2,	// (0x00054b20) list_double_heading_pane_g2_cp2_ParamLimits

0x2ba2,	// (0x00054b20) list_double_heading_pane_g2_cp2

0x7523,	// (0x000594a1) list_double_heading_pane_t1_cp2_ParamLimits

0x7523,	// (0x000594a1) list_double_heading_pane_t1_cp2

0x7539,	// (0x000594b7) list_double_heading_pane_t2_cp2_ParamLimits

0x7539,	// (0x000594b7) list_double_heading_pane_t2_cp2

0xd1ba,	// (0x0005f138) aid_value_unit2

0xf463,	// (0x000613e1) popup_preview_fixed_window

0x24df,	// (0x0005445d) bg_popup_preview_window_pane_cp02

0x754b,	// (0x000594c9) list_preview_fixed_pane

0x7591,	// (0x0005950f) list_empty_pane_fp_ParamLimits

0x7591,	// (0x0005950f) list_empty_pane_fp

0x7591,	// (0x0005950f) list_single_cale_day_pane_fp_ParamLimits

0x7591,	// (0x0005950f) list_single_cale_day_pane_fp

0x7591,	// (0x0005950f) list_single_graphic_heading_pane_fp_ParamLimits

0x7591,	// (0x0005950f) list_single_graphic_heading_pane_fp

0x7591,	// (0x0005950f) list_single_graphic_pane_fp_ParamLimits

0x7591,	// (0x0005950f) list_single_graphic_pane_fp

0x7591,	// (0x0005950f) list_single_heading_pane_fp_ParamLimits

0x7591,	// (0x0005950f) list_single_heading_pane_fp

0x7591,	// (0x0005950f) list_single_pane_fp_ParamLimits

0x7591,	// (0x0005950f) list_single_pane_fp

0x75aa,	// (0x00059528) list_single_pane_fp_g1_ParamLimits

0x75aa,	// (0x00059528) list_single_pane_fp_g1

0x2af6,	// (0x00054a74) list_single_pane_fp_g2_ParamLimits

0x2af6,	// (0x00054a74) list_single_pane_fp_g2

0x2e9f,	// (0x00054e1d) list_single_pane_fp_g3_ParamLimits

0x2e9f,	// (0x00054e1d) list_single_pane_fp_g3

0x75b6,	// (0x00059534) list_single_pane_fp_g4_ParamLimits

0x75b6,	// (0x00059534) list_single_pane_fp_g4

0x0003,

0xfb91,	// (0x00061b0f) list_single_pane_fp_g_ParamLimits

0xfb91,	// (0x00061b0f) list_single_pane_fp_g

0x14f9,	// (0x00053477) list_single_pane_fp_t1_ParamLimits

0x14f9,	// (0x00053477) list_single_pane_fp_t1

0x1510,	// (0x0005348e) list_single_graphic_pane_fp_g1_ParamLimits

0x1510,	// (0x0005348e) list_single_graphic_pane_fp_g1

0x75aa,	// (0x00059528) list_single_graphic_pane_fp_g2_ParamLimits

0x75aa,	// (0x00059528) list_single_graphic_pane_fp_g2

0x2af6,	// (0x00054a74) list_single_graphic_pane_fp_g3_ParamLimits

0x2af6,	// (0x00054a74) list_single_graphic_pane_fp_g3

0x2e9f,	// (0x00054e1d) list_single_graphic_pane_fp_g4_ParamLimits

0x2e9f,	// (0x00054e1d) list_single_graphic_pane_fp_g4

0x75b6,	// (0x00059534) list_single_graphic_pane_fp_g5_ParamLimits

0x75b6,	// (0x00059534) list_single_graphic_pane_fp_g5

0x0004,

0xfb9a,	// (0x00061b18) list_single_graphic_pane_fp_g_ParamLimits

0xfb9a,	// (0x00061b18) list_single_graphic_pane_fp_g

0x151c,	// (0x0005349a) list_single_graphic_pane_fp_t1_ParamLimits

0x151c,	// (0x0005349a) list_single_graphic_pane_fp_t1

0x1510,	// (0x0005348e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x1510,	// (0x0005348e) list_single_graphic_heading_pane_fp_g1

0x75aa,	// (0x00059528) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x75aa,	// (0x00059528) list_single_graphic_heading_pane_fp_g2

0x2af6,	// (0x00054a74) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2af6,	// (0x00054a74) list_single_graphic_heading_pane_fp_g3

0x2e9f,	// (0x00054e1d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x2e9f,	// (0x00054e1d) list_single_graphic_heading_pane_fp_g4

0x75b6,	// (0x00059534) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x75b6,	// (0x00059534) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x00061b18) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x00061b18) list_single_graphic_heading_pane_fp_g

0x1532,	// (0x000534b0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1532,	// (0x000534b0) list_single_graphic_heading_pane_fp_t1

0x1548,	// (0x000534c6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1548,	// (0x000534c6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x00061b23) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x00061b23) list_single_graphic_heading_pane_fp_t

0x155a,	// (0x000534d8) list_single_cale_day_pane_fp_g1_ParamLimits

0x155a,	// (0x000534d8) list_single_cale_day_pane_fp_g1

0x75c2,	// (0x00059540) list_single_cale_day_pane_fp_g2_ParamLimits

0x75c2,	// (0x00059540) list_single_cale_day_pane_fp_g2

0x2eb3,	// (0x00054e31) list_single_cale_day_pane_fp_g3_ParamLimits

0x2eb3,	// (0x00054e31) list_single_cale_day_pane_fp_g3

0x2edb,	// (0x00054e59) list_single_cale_day_pane_fp_g4_ParamLimits

0x2edb,	// (0x00054e59) list_single_cale_day_pane_fp_g4

0x2eff,	// (0x00054e7d) list_single_cale_day_pane_fp_g5_ParamLimits

0x2eff,	// (0x00054e7d) list_single_cale_day_pane_fp_g5

0x0004,

0xfbaa,	// (0x00061b28) list_single_cale_day_pane_fp_g_ParamLimits

0xfbaa,	// (0x00061b28) list_single_cale_day_pane_fp_g

0x1592,	// (0x00053510) list_single_cale_day_pane_fp_t1_ParamLimits

0x1592,	// (0x00053510) list_single_cale_day_pane_fp_t1

0x15b8,	// (0x00053536) list_single_cale_day_pane_fp_t2_ParamLimits

0x15b8,	// (0x00053536) list_single_cale_day_pane_fp_t2

0x15d1,	// (0x0005354f) list_single_cale_day_pane_fp_t3_ParamLimits

0x15d1,	// (0x0005354f) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb5,	// (0x00061b33) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb5,	// (0x00061b33) list_single_cale_day_pane_fp_t

0x75aa,	// (0x00059528) list_empty_pane_fp_g1_ParamLimits

0x75aa,	// (0x00059528) list_empty_pane_fp_g1

0x15ea,	// (0x00053568) list_empty_pane_fp_t1

0x15f8,	// (0x00053576) list_empty_pane_fp_t2

0x0001,

0xfbbc,	// (0x00061b3a) list_empty_pane_fp_t

0x75aa,	// (0x00059528) list_single_heading_pane_fp_g1_ParamLimits

0x75aa,	// (0x00059528) list_single_heading_pane_fp_g1

0x2af6,	// (0x00054a74) list_single_heading_pane_fp_g2_ParamLimits

0x2af6,	// (0x00054a74) list_single_heading_pane_fp_g2

0x2e9f,	// (0x00054e1d) list_single_heading_pane_fp_g3_ParamLimits

0x2e9f,	// (0x00054e1d) list_single_heading_pane_fp_g3

0x0002,

0xfbc1,	// (0x00061b3f) list_single_heading_pane_fp_g_ParamLimits

0xfbc1,	// (0x00061b3f) list_single_heading_pane_fp_g

0x1606,	// (0x00053584) list_single_heading_pane_fp_t1_ParamLimits

0x1606,	// (0x00053584) list_single_heading_pane_fp_t1

0x1618,	// (0x00053596) list_single_heading_pane_fp_t2_ParamLimits

0x1618,	// (0x00053596) list_single_heading_pane_fp_t2

0x0001,

0xfbc8,	// (0x00061b46) list_single_heading_pane_fp_t_ParamLimits

0xfbc8,	// (0x00061b46) list_single_heading_pane_fp_t

0x2d9a,	// (0x00054d18) aid_size_cell_fast

0x2451,	// (0x000543cf) soft_indicator_pane_cp1_t1

0x2f9c,	// (0x00054f1a) cell_app_pane_cp2_ParamLimits

0x2f9c,	// (0x00054f1a) cell_app_pane_cp2

0x1253,	// (0x000531d1) fep_hwr_candidate_drop_down_list_pane

0x1441,	// (0x000533bf) fep_hwr_candidate_pane_g3_ParamLimits

0x1441,	// (0x000533bf) fep_hwr_candidate_pane_g3

0xe003,	// (0x0005ff81) fep_hwr_candidate_pane_g4_ParamLimits

0xe003,	// (0x0005ff81) fep_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x00061ab5) fep_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x00061ab5) fep_hwr_candidate_pane_g

0x7098,	// (0x00059016) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7098,	// (0x00059016) fep_vkb_candidate_drop_down_list_pane

0x74c0,	// (0x0005943e) fep_vkb_candidate_pane_g3

0x74c8,	// (0x00059446) fep_vkb_candidate_pane_g4

0x0002,

0xfb64,	// (0x00061ae2) fep_vkb_candidate_pane_g

0x14ac,	// (0x0005342a) cell_hwr_candidate_pane_g1_ParamLimits

0x14ba,	// (0x00053438) cell_hwr_candidate_pane_g3_ParamLimits

0x14ba,	// (0x00053438) cell_hwr_candidate_pane_g3

0x855c,	// (0x0005a4da) cell_hwr_candidate_pane_g4_ParamLimits

0x855c,	// (0x0005a4da) cell_hwr_candidate_pane_g4

0x0002,

0xfb83,	// (0x00061b01) cell_hwr_candidate_pane_g_ParamLimits

0xfb83,	// (0x00061b01) cell_hwr_candidate_pane_g

0x74df,	// (0x0005945d) cell_vkb_candidate_pane_g3_ParamLimits

0x74df,	// (0x0005945d) cell_vkb_candidate_pane_g3

0x74fa,	// (0x00059478) cell_vkb_candidate_pane_g4_ParamLimits

0x74fa,	// (0x00059478) cell_vkb_candidate_pane_g4

0x75ce,	// (0x0005954c) cell_app_pane_cp2_g1_ParamLimits

0x75ce,	// (0x0005954c) cell_app_pane_cp2_g1

0x75ec,	// (0x0005956a) cell_app_pane_cp2_g2_ParamLimits

0x75ec,	// (0x0005956a) cell_app_pane_cp2_g2

0x0001,

0xfbcd,	// (0x00061b4b) cell_app_pane_cp2_g_ParamLimits

0xfbcd,	// (0x00061b4b) cell_app_pane_cp2_g

0x75f8,	// (0x00059576) cell_app_pane_cp2_t1_ParamLimits

0x75f8,	// (0x00059576) cell_app_pane_cp2_t1

0x2b7c,	// (0x00054afa) grid_highlight_pane_cp1_ParamLimits

0x2b7c,	// (0x00054afa) grid_highlight_pane_cp1

0x162e,	// (0x000535ac) cell_hwr_candidate_pane_cp1_ParamLimits

0x162e,	// (0x000535ac) cell_hwr_candidate_pane_cp1

0x14ac,	// (0x0005342a) fep_hwr_candidate_drop_down_list_pane_g1

0x1652,	// (0x000535d0) fep_hwr_candidate_drop_down_list_pane_g2

0x165f,	// (0x000535dd) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd2,	// (0x00061b50) fep_hwr_candidate_drop_down_list_pane_g

0x166c,	// (0x000535ea) fep_hwr_candidate_drop_down_list_scroll_pane

0x1675,	// (0x000535f3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1675,	// (0x000535f3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1682,	// (0x00053600) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1682,	// (0x00053600) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x168f,	// (0x0005360d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x168f,	// (0x0005360d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x169c,	// (0x0005361a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x169c,	// (0x0005361a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x16b7,	// (0x00053635) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x16b7,	// (0x00053635) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x16d2,	// (0x00053650) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x16d2,	// (0x00053650) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x16ed,	// (0x0005366b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x16ed,	// (0x0005366b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1708,	// (0x00053686) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1708,	// (0x00053686) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x00061b57) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x00061b57) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x760a,	// (0x00059588) cell_vkb_candidate_pane_cp1_ParamLimits

0x760a,	// (0x00059588) cell_vkb_candidate_pane_cp1

0x719e,	// (0x0005911c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x719e,	// (0x0005911c) fep_vkb_candidate_drop_down_list_pane_g1

0x7630,	// (0x000595ae) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7630,	// (0x000595ae) fep_vkb_candidate_drop_down_list_pane_g2

0x763d,	// (0x000595bb) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x763d,	// (0x000595bb) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbea,	// (0x00061b68) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbea,	// (0x00061b68) fep_vkb_candidate_drop_down_list_pane_g

0x764a,	// (0x000595c8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x764a,	// (0x000595c8) fep_vkb_candidate_drop_down_list_scroll_pane

0x7657,	// (0x000595d5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7657,	// (0x000595d5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7664,	// (0x000595e2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7664,	// (0x000595e2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7670,	// (0x000595ee) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7670,	// (0x000595ee) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x767c,	// (0x000595fa) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x767c,	// (0x000595fa) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x769d,	// (0x0005961b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x769d,	// (0x0005961b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x76be,	// (0x0005963c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x76be,	// (0x0005963c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x76df,	// (0x0005965d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x76df,	// (0x0005965d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x770e,	// (0x0005968c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x770e,	// (0x0005968c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf1,	// (0x00061b6f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf1,	// (0x00061b6f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xaf52,	// (0x0005ced0) title_pane_g1_ParamLimits

0xaf63,	// (0x0005cee1) title_pane_g2_ParamLimits

0xf56a,	// (0x000614e8) title_pane_g_ParamLimits

0x33aa,	// (0x00055328) aid_call2_pane

0x33b2,	// (0x00055330) aid_call_pane

0x33ba,	// (0x00055338) popup_clock_analogue_window_g1

0x33ba,	// (0x00055338) popup_clock_analogue_window_g2

0x05f2,	// (0x00052570) popup_clock_analogue_window_g3

0x05fb,	// (0x00052579) popup_clock_analogue_window_g4

0xd1cc,	// (0x0005f14a) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x00061697) popup_clock_analogue_window_g

0x0603,	// (0x00052581) popup_clock_analogue_window_t1

0x0611,	// (0x0005258f) clock_digital_number_pane_ParamLimits

0x0611,	// (0x0005258f) clock_digital_number_pane

0x061d,	// (0x0005259b) clock_digital_number_pane_cp02_ParamLimits

0x061d,	// (0x0005259b) clock_digital_number_pane_cp02

0x0629,	// (0x000525a7) clock_digital_number_pane_cp03_ParamLimits

0x0629,	// (0x000525a7) clock_digital_number_pane_cp03

0x0635,	// (0x000525b3) clock_digital_number_pane_cp04_ParamLimits

0x0635,	// (0x000525b3) clock_digital_number_pane_cp04

0x0641,	// (0x000525bf) clock_digital_separator_pane_ParamLimits

0x0641,	// (0x000525bf) clock_digital_separator_pane

0x064d,	// (0x000525cb) popup_clock_digital_window_t1_ParamLimits

0x064d,	// (0x000525cb) popup_clock_digital_window_t1

0xd1cc,	// (0x0005f14a) clock_digital_number_pane_g1

0xd1cc,	// (0x0005f14a) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x000616a2) clock_digital_number_pane_g

0xd1cc,	// (0x0005f14a) clock_digital_separator_pane_g1

0xd1cc,	// (0x0005f14a) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x000616a2) clock_digital_separator_pane_g

0xcdf6,	// (0x0005ed74) aid_fill_nsta_ParamLimits

0xcf27,	// (0x0005eea5) indicator_nsta_pane_ParamLimits

0x4645,	// (0x000565c3) popup_clock_analogue_window

0x4645,	// (0x000565c3) popup_clock_digital_window

0x2d5b,	// (0x00054cd9) grid_indicator_nsta_pane_ParamLimits

0x693a,	// (0x000588b8) clock_nsta_pane_t2

0x0001,

0xfab7,	// (0x00061a35) clock_nsta_pane_t

0x05b6,	// (0x00052534) aid_size_max_handle

0xb993,	// (0x0005d911) aid_size_min_handle

0x39a8,	// (0x00055926) editor_scroll_pane

0x7729,	// (0x000596a7) ex_editor_pane

0x2d07,	// (0x00054c85) scroll_pane_cp13

0x2a7b,	// (0x000549f9) scroll_pane_cp14

0x33e4,	// (0x00055362) scroll_pane_cp36

0xc4c0,	// (0x0005e43e) list_single_graphic_hl_pane_cp2_ParamLimits

0xc4c0,	// (0x0005e43e) list_single_graphic_hl_pane_cp2

0xd740,	// (0x0005f6be) list_single_graphic_hl_pane_ParamLimits

0xd740,	// (0x0005f6be) list_single_graphic_hl_pane

0x1723,	// (0x000536a1) aid_size_min_hl_cp1

0x7731,	// (0x000596af) list_highlight_pane_cp34_ParamLimits

0x7731,	// (0x000596af) list_highlight_pane_cp34

0x7742,	// (0x000596c0) list_single_graphic_hl_pane_g1_ParamLimits

0x7742,	// (0x000596c0) list_single_graphic_hl_pane_g1

0xbe0c,	// (0x0005dd8a) list_single_graphic_hl_pane_g2_ParamLimits

0xbe0c,	// (0x0005dd8a) list_single_graphic_hl_pane_g2

0xbe0c,	// (0x0005dd8a) list_single_graphic_hl_pane_g3_ParamLimits

0xbe0c,	// (0x0005dd8a) list_single_graphic_hl_pane_g3

0x3dda,	// (0x00055d58) list_single_graphic_hl_pane_g4_ParamLimits

0x3dda,	// (0x00055d58) list_single_graphic_hl_pane_g4

0x777f,	// (0x000596fd) list_single_graphic_hl_pane_g5_ParamLimits

0x777f,	// (0x000596fd) list_single_graphic_hl_pane_g5

0x0004,

0xfc02,	// (0x00061b80) list_single_graphic_hl_pane_g_ParamLimits

0xfc02,	// (0x00061b80) list_single_graphic_hl_pane_g

0xeeed,	// (0x00060e6b) list_single_graphic_hl_pane_t1_ParamLimits

0xeeed,	// (0x00060e6b) list_single_graphic_hl_pane_t1

0x774f,	// (0x000596cd) aid_size_min_hl_cp2

0x7758,	// (0x000596d6) list_highlight_pane_cp34_cp2_ParamLimits

0x7758,	// (0x000596d6) list_highlight_pane_cp34_cp2

0x7742,	// (0x000596c0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7742,	// (0x000596c0) list_single_graphic_hl_pane_g1_cp2

0x7765,	// (0x000596e3) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7765,	// (0x000596e3) list_single_graphic_hl_pane_g2_cp2

0x7771,	// (0x000596ef) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7771,	// (0x000596ef) list_single_graphic_hl_pane_g3_cp2

0x3dda,	// (0x00055d58) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3dda,	// (0x00055d58) list_single_graphic_hl_pane_g4_cp2

0x777f,	// (0x000596fd) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x777f,	// (0x000596fd) list_single_graphic_hl_pane_g5_cp2

0xba33,	// (0x0005d9b1) control_pane_g4_ParamLimits

0xba33,	// (0x0005d9b1) control_pane_g4

0x3d26,	// (0x00055ca4) bg_popup_sub_pane_cp10_ParamLimits

0x6f1e,	// (0x00058e9c) list_choice_list_pane_ParamLimits

0x6f2d,	// (0x00058eab) scroll_pane_cp23

0x24df,	// (0x0005445d) bg_popup_preview_window_pane_cp02_ParamLimits

0x754b,	// (0x000594c9) list_preview_fixed_pane_ParamLimits

0x7561,	// (0x000594df) list_preview_fixed_pane_cp_ParamLimits

0x7561,	// (0x000594df) list_preview_fixed_pane_cp

0x756d,	// (0x000594eb) popup_preview_fixed_window_g1_ParamLimits

0x756d,	// (0x000594eb) popup_preview_fixed_window_g1

0x7579,	// (0x000594f7) popup_preview_fixed_window_g2_ParamLimits

0x7579,	// (0x000594f7) popup_preview_fixed_window_g2

0x0002,

0xfb8a,	// (0x00061b08) popup_preview_fixed_window_g_ParamLimits

0xfb8a,	// (0x00061b08) popup_preview_fixed_window_g

0x0528,	// (0x000524a6) aid_navi_side_left_pane_ParamLimits

0x053d,	// (0x000524bb) aid_navi_side_right_pane_ParamLimits

0x0555,	// (0x000524d3) navi_icon_pane_stacon_ParamLimits

0x0569,	// (0x000524e7) navi_navi_pane_stacon_ParamLimits

0x0555,	// (0x000524d3) navi_text_pane_stacon_ParamLimits

0xd1c2,	// (0x0005f140) main_text_info_pane

0x77a9,	// (0x00059727) listscroll_text_info_pane

0x77b1,	// (0x0005972f) list_text_info_pane_ParamLimits

0x77b1,	// (0x0005972f) list_text_info_pane

0x77c0,	// (0x0005973e) scroll_pane_cp24_ParamLimits

0x77c0,	// (0x0005973e) scroll_pane_cp24

0xdbfd,	// (0x0005fb7b) list_text_info_pane_t1_ParamLimits

0xdbfd,	// (0x0005fb7b) list_text_info_pane_t1

0xc6f3,	// (0x0005e671) popup_fast_swap2_window_ParamLimits

0xc6f3,	// (0x0005e671) popup_fast_swap2_window

0x7803,	// (0x00059781) aid_size_cell_fast2

0xd1c2,	// (0x0005f140) bg_popup_window_pane_cp17

0x4cf8,	// (0x00056c76) heading_pane_cp2

0x273f,	// (0x000546bd) listscroll_fast2_pane

0x780d,	// (0x0005978b) grid_fast2_pane

0x7817,	// (0x00059795) listscroll_fast2_pane_g1

0x7821,	// (0x0005979f) listscroll_fast2_pane_g2

0x0001,

0xfc0d,	// (0x00061b8b) listscroll_fast2_pane_g

0x2d07,	// (0x00054c85) scroll_pane_cp26

0x782b,	// (0x000597a9) cell_fast2_pane_ParamLimits

0x782b,	// (0x000597a9) cell_fast2_pane

0x7842,	// (0x000597c0) cell_fast2_pane_g1

0x784b,	// (0x000597c9) cell_fast2_pane_g2

0x7854,	// (0x000597d2) cell_fast2_pane_g3

0x0002,

0xfc12,	// (0x00061b90) cell_fast2_pane_g

0x2838,	// (0x000547b6) grid_highlight_pane_cp9

0x284d,	// (0x000547cb) main_eswt_pane_ParamLimits

0x284d,	// (0x000547cb) main_eswt_pane

0x77d5,	// (0x00059753) list_single_text_info_pane

0x785c,	// (0x000597da) eswt_ctrl_button_pane

0x785c,	// (0x000597da) eswt_ctrl_canvas_pane

0x7864,	// (0x000597e2) eswt_ctrl_combo_pane

0x785c,	// (0x000597da) eswt_ctrl_default_pane

0x785c,	// (0x000597da) eswt_ctrl_label_pane

0x786c,	// (0x000597ea) eswt_ctrl_wait_pane

0x7874,	// (0x000597f2) eswt_shell_pane

0xd1c2,	// (0x0005f140) listscroll_eswt_app_pane

0x7894,	// (0x00059812) popup_eswt_tasktip_window_ParamLimits

0x7894,	// (0x00059812) popup_eswt_tasktip_window

0x4960,	// (0x000568de) bg_popup_window_pane_cp18

0x78a5,	// (0x00059823) eswt_control_pane_g1_ParamLimits

0x78a5,	// (0x00059823) eswt_control_pane_g1

0x78b2,	// (0x00059830) eswt_control_pane_g2_ParamLimits

0x78b2,	// (0x00059830) eswt_control_pane_g2

0x78bf,	// (0x0005983d) eswt_control_pane_g3_ParamLimits

0x78bf,	// (0x0005983d) eswt_control_pane_g3

0x78cc,	// (0x0005984a) eswt_control_pane_g4_ParamLimits

0x78cc,	// (0x0005984a) eswt_control_pane_g4

0x0003,

0xfc19,	// (0x00061b97) eswt_control_pane_g_ParamLimits

0xfc19,	// (0x00061b97) eswt_control_pane_g

0x2b7c,	// (0x00054afa) bg_button_pane_ParamLimits

0x2b7c,	// (0x00054afa) bg_button_pane

0x284d,	// (0x000547cb) common_borders_pane_copy2_ParamLimits

0x284d,	// (0x000547cb) common_borders_pane_copy2

0x78d9,	// (0x00059857) control_button_pane_g1_ParamLimits

0x78d9,	// (0x00059857) control_button_pane_g1

0x78e5,	// (0x00059863) control_button_pane_g2_ParamLimits

0x78e5,	// (0x00059863) control_button_pane_g2

0x78f1,	// (0x0005986f) control_button_pane_g3_ParamLimits

0x78f1,	// (0x0005986f) control_button_pane_g3

0x0002,

0xfc22,	// (0x00061ba0) control_button_pane_g_ParamLimits

0xfc22,	// (0x00061ba0) control_button_pane_g

0x7905,	// (0x00059883) control_button_pane_t1

0x7913,	// (0x00059891) control_button_pane_t2

0x0001,

0xfc29,	// (0x00061ba7) control_button_pane_t

0x486e,	// (0x000567ec) bg_button_pane_g1

0x487e,	// (0x000567fc) bg_button_pane_g2

0x4876,	// (0x000567f4) bg_button_pane_g3

0x488e,	// (0x0005680c) bg_button_pane_g4

0x4886,	// (0x00056804) bg_button_pane_g5

0x4896,	// (0x00056814) bg_button_pane_g6

0x489e,	// (0x0005681c) bg_button_pane_g7

0x48ae,	// (0x0005682c) bg_button_pane_g8

0x48a6,	// (0x00056824) bg_button_pane_g9

0x0008,

0xf877,	// (0x000617f5) bg_button_pane_g

0x6ed9,	// (0x00058e57) common_borders_pane_ParamLimits

0x6ed9,	// (0x00058e57) common_borders_pane

0x78a5,	// (0x00059823) eswt_control_pane_g1_copy1_ParamLimits

0x78a5,	// (0x00059823) eswt_control_pane_g1_copy1

0x78b2,	// (0x00059830) eswt_control_pane_g2_copy1_ParamLimits

0x78b2,	// (0x00059830) eswt_control_pane_g2_copy1

0x78bf,	// (0x0005983d) eswt_control_pane_g3_copy1_ParamLimits

0x78bf,	// (0x0005983d) eswt_control_pane_g3_copy1

0x78cc,	// (0x0005984a) eswt_control_pane_g4_copy1_ParamLimits

0x78cc,	// (0x0005984a) eswt_control_pane_g4_copy1

0x6f14,	// (0x00058e92) bg_eswt_ctrl_canvas_pane_g1

0x6ed9,	// (0x00058e57) common_borders_pane_cp2_ParamLimits

0x6ed9,	// (0x00058e57) common_borders_pane_cp2

0x6ed9,	// (0x00058e57) common_borders_pane_cp3_ParamLimits

0x6ed9,	// (0x00058e57) common_borders_pane_cp3

0x7921,	// (0x0005989f) separator_horizontal_pane

0x7929,	// (0x000598a7) separator_vertical_pane

0x78a5,	// (0x00059823) eswt_control_pane_g1_copy2_ParamLimits

0x78a5,	// (0x00059823) eswt_control_pane_g1_copy2

0x78b2,	// (0x00059830) eswt_control_pane_g2_copy2_ParamLimits

0x78b2,	// (0x00059830) eswt_control_pane_g2_copy2

0x78bf,	// (0x0005983d) eswt_control_pane_g3_copy2_ParamLimits

0x78bf,	// (0x0005983d) eswt_control_pane_g3_copy2

0x78cc,	// (0x0005984a) eswt_control_pane_g4_copy2_ParamLimits

0x78cc,	// (0x0005984a) eswt_control_pane_g4_copy2

0xd1c2,	// (0x0005f140) common_borders_pane_cp4

0x7932,	// (0x000598b0) separator_horizontal_pane_g1

0x793b,	// (0x000598b9) separator_horizontal_pane_g2

0x7944,	// (0x000598c2) separator_horizontal_pane_g3

0x0002,

0xfc2e,	// (0x00061bac) separator_horizontal_pane_g

0x78a5,	// (0x00059823) eswt_control_pane_g1_copy3_ParamLimits

0x78a5,	// (0x00059823) eswt_control_pane_g1_copy3

0x78b2,	// (0x00059830) eswt_control_pane_g2_copy3_ParamLimits

0x78b2,	// (0x00059830) eswt_control_pane_g2_copy3

0x78bf,	// (0x0005983d) eswt_control_pane_g3_copy3_ParamLimits

0x78bf,	// (0x0005983d) eswt_control_pane_g3_copy3

0x78cc,	// (0x0005984a) eswt_control_pane_g4_copy3_ParamLimits

0x78cc,	// (0x0005984a) eswt_control_pane_g4_copy3

0xd1c2,	// (0x0005f140) common_borders_pane_cp5

0x794d,	// (0x000598cb) separator_vertical_pane_g1

0x7956,	// (0x000598d4) separator_vertical_pane_g2

0x795f,	// (0x000598dd) separator_vertical_pane_g3

0x0002,

0xfc35,	// (0x00061bb3) separator_vertical_pane_g

0x78a5,	// (0x00059823) eswt_control_pane_g1_copy4_ParamLimits

0x78a5,	// (0x00059823) eswt_control_pane_g1_copy4

0x78b2,	// (0x00059830) eswt_control_pane_g2_copy4_ParamLimits

0x78b2,	// (0x00059830) eswt_control_pane_g2_copy4

0x78bf,	// (0x0005983d) eswt_control_pane_g3_copy4_ParamLimits

0x78bf,	// (0x0005983d) eswt_control_pane_g3_copy4

0x78cc,	// (0x0005984a) eswt_control_pane_g4_copy4_ParamLimits

0x78cc,	// (0x0005984a) eswt_control_pane_g4_copy4

0xdc1f,	// (0x0005fb9d) eswt_ctrl_combo_button_pane

0xdc27,	// (0x0005fba5) eswt_ctrl_input_pane

0xdc2f,	// (0x0005fbad) popup_choice_list_window_cp70

0xdc37,	// (0x0005fbb5) eswt_ctrl_input_pane_t1

0xd1c2,	// (0x0005f140) input_focus_pane_cp70

0x6ed9,	// (0x00058e57) bg_button_pane_cp70_ParamLimits

0x6ed9,	// (0x00058e57) bg_button_pane_cp70

0xdc45,	// (0x0005fbc3) eswt_ctrl_combo_button_pane_g1

0x7996,	// (0x00059914) wait_bar_pane_cp70

0x4960,	// (0x000568de) bg_popup_window_pane_cp70_ParamLimits

0x4960,	// (0x000568de) bg_popup_window_pane_cp70

0x799e,	// (0x0005991c) popup_eswt_tasktip_window_t1

0x79b4,	// (0x00059932) wait_bar_pane_cp71_ParamLimits

0x79b4,	// (0x00059932) wait_bar_pane_cp71

0x79c0,	// (0x0005993e) grid_eswt_app_pane

0x31ee,	// (0x0005516c) scroll_pane_cp70

0xdc4d,	// (0x0005fbcb) cell_eswt_app_pane_ParamLimits

0xdc4d,	// (0x0005fbcb) cell_eswt_app_pane

0xdc7f,	// (0x0005fbfd) cell_eswt_app_pane_g1_ParamLimits

0xdc7f,	// (0x0005fbfd) cell_eswt_app_pane_g1

0xdcae,	// (0x0005fc2c) cell_eswt_app_pane_g2_ParamLimits

0xdcae,	// (0x0005fc2c) cell_eswt_app_pane_g2

0x0001,

0xfc3c,	// (0x00061bba) cell_eswt_app_pane_g_ParamLimits

0xfc3c,	// (0x00061bba) cell_eswt_app_pane_g

0xdcd7,	// (0x0005fc55) cell_eswt_app_pane_t1_ParamLimits

0xdcd7,	// (0x0005fc55) cell_eswt_app_pane_t1

0x7a85,	// (0x00059a03) grid_highlight_pane_cp70_ParamLimits

0x7a85,	// (0x00059a03) grid_highlight_pane_cp70

0x5df1,	// (0x00057d6f) set_content_pane_g1

0x3c58,	// (0x00055bd6) status_small_volume_pane

0x174e,	// (0x000536cc) status_small_volume_pane_g1

0x1756,	// (0x000536d4) volume_small2_pane

0x175f,	// (0x000536dd) volume_small2_pane_g1

0x1768,	// (0x000536e6) volume_small2_pane_g2

0x1771,	// (0x000536ef) volume_small2_pane_g3

0x177a,	// (0x000536f8) volume_small2_pane_g4

0x1783,	// (0x00053701) volume_small2_pane_g5

0x178c,	// (0x0005370a) volume_small2_pane_g6

0x1795,	// (0x00053713) volume_small2_pane_g7

0x179e,	// (0x0005371c) volume_small2_pane_g8

0x17a7,	// (0x00053725) volume_small2_pane_g9

0x17b0,	// (0x0005372e) volume_small2_pane_g10

0x0009,

0xfc41,	// (0x00061bbf) volume_small2_pane_g

0x72f2,	// (0x00059270) fep_vkb_top_text_pane_g1_ParamLimits

0xdba5,	// (0x0005fb23) fep_vkb_top_text_pane_t1_ParamLimits

0x7585,	// (0x00059503) popup_preview_fixed_window_g3_ParamLimits

0x7585,	// (0x00059503) popup_preview_fixed_window_g3

0xcd89,	// (0x0005ed07) popup_toolbar_trans_pane

0xd590,	// (0x0005f50e) aid_height_set_list_ParamLimits

0x5ca7,	// (0x00057c25) aid_size_parent_ParamLimits

0x3d26,	// (0x00055ca4) list_highlight_pane_cp2_ParamLimits

0x5df1,	// (0x00057d6f) set_content_pane_g1_ParamLimits

0xd131,	// (0x0005f0af) list_single_image_pane_ParamLimits

0xd131,	// (0x0005f0af) list_single_image_pane

0xdd09,	// (0x0005fc87) aid_size_cell_image_ParamLimits

0xdd09,	// (0x0005fc87) aid_size_cell_image

0xdd16,	// (0x0005fc94) grid_single_image_pane_ParamLimits

0xdd16,	// (0x0005fc94) grid_single_image_pane

0x2b96,	// (0x00054b14) list_single_image_pane_g1_ParamLimits

0x2b96,	// (0x00054b14) list_single_image_pane_g1

0x2ba2,	// (0x00054b20) list_single_image_pane_g2_ParamLimits

0x2ba2,	// (0x00054b20) list_single_image_pane_g2

0x0001,

0xfc56,	// (0x00061bd4) list_single_image_pane_g_ParamLimits

0xfc56,	// (0x00061bd4) list_single_image_pane_g

0x7aac,	// (0x00059a2a) list_single_image_pane_t1_ParamLimits

0x7aac,	// (0x00059a2a) list_single_image_pane_t1

0xdd24,	// (0x0005fca2) cell_image_list_pane_ParamLimits

0xdd24,	// (0x0005fca2) cell_image_list_pane

0xdd3e,	// (0x0005fcbc) cell_image_list_pane_g1

0xdd47,	// (0x0005fcc5) cell_image_list_pane_g2

0x0001,

0xfc5b,	// (0x00061bd9) cell_image_list_pane_g

0x7aea,	// (0x00059a68) aid_size_cell_tb_trans_pane

0x2b7c,	// (0x00054afa) bg_tb_trans_pane

0x7afc,	// (0x00059a7a) grid_tb_trans_pane

0x486e,	// (0x000567ec) bg_tb_trans_pane_g1

0x487e,	// (0x000567fc) bg_tb_trans_pane_g2

0x4876,	// (0x000567f4) bg_tb_trans_pane_g3

0x488e,	// (0x0005680c) bg_tb_trans_pane_g4

0x4886,	// (0x00056804) bg_tb_trans_pane_g5

0x48ae,	// (0x0005682c) bg_tb_trans_pane_g6

0x48a6,	// (0x00056824) bg_tb_trans_pane_g7

0x4896,	// (0x00056814) bg_tb_trans_pane_g8

0x489e,	// (0x0005681c) bg_tb_trans_pane_g9

0x0008,

0xfc60,	// (0x00061bde) bg_tb_trans_pane_g

0x7b10,	// (0x00059a8e) cell_toolbar_trans_pane_ParamLimits

0x7b10,	// (0x00059a8e) cell_toolbar_trans_pane

0x6f14,	// (0x00058e92) cell_toolbar_trans_pane_g1

0xd975,	// (0x0005f8f3) list_form2_midp_pane_t1

0xd983,	// (0x0005f901) list_form2_midp_pane_t2

0x0001,

0xfafd,	// (0x00061a7b) list_form2_midp_pane_t

0x6b51,	// (0x00058acf) scroll_pane_cp51_ParamLimits

0x6d18,	// (0x00058c96) form2_midp_wait_pane_g1

0x6d21,	// (0x00058c9f) form2_midp_wait_pane_g2

0x6d2a,	// (0x00058ca8) form2_midp_wait_pane_g3

0x0002,

0xfb12,	// (0x00061a90) form2_midp_wait_pane_g

0x2255,	// (0x000541d3) list_highlight_pane_cp21_ParamLimits

0x6d6e,	// (0x00058cec) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6d7d,	// (0x00058cfb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5e9f,	// (0x00057e1d) list_single_2graphic_im_pane_ParamLimits

0x5e9f,	// (0x00057e1d) list_single_2graphic_im_pane

0xdd50,	// (0x0005fcce) list_single_2graphic_im_pane_g1_ParamLimits

0xdd50,	// (0x0005fcce) list_single_2graphic_im_pane_g1

0xdd61,	// (0x0005fcdf) list_single_2graphic_im_pane_g2_ParamLimits

0xdd61,	// (0x0005fcdf) list_single_2graphic_im_pane_g2

0xdd6d,	// (0x0005fceb) list_single_2graphic_im_pane_g3_ParamLimits

0xdd6d,	// (0x0005fceb) list_single_2graphic_im_pane_g3

0x0003,

0xfc73,	// (0x00061bf1) list_single_2graphic_im_pane_g_ParamLimits

0xfc73,	// (0x00061bf1) list_single_2graphic_im_pane_g

0xdd81,	// (0x0005fcff) list_single_2graphic_im_pane_t1_ParamLimits

0xdd81,	// (0x0005fcff) list_single_2graphic_im_pane_t1

0x7591,	// (0x0005950f) list_single_graphic_2heading_pane_fp_ParamLimits

0x7591,	// (0x0005950f) list_single_graphic_2heading_pane_fp

0x1510,	// (0x0005348e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x1510,	// (0x0005348e) list_single_graphic_2heading_pane_fp_g1

0x75aa,	// (0x00059528) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x75aa,	// (0x00059528) list_single_graphic_2heading_pane_fp_g2

0x2af6,	// (0x00054a74) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2af6,	// (0x00054a74) list_single_graphic_2heading_pane_fp_g3

0x2e9f,	// (0x00054e1d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x2e9f,	// (0x00054e1d) list_single_graphic_2heading_pane_fp_g4

0x75b6,	// (0x00059534) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x75b6,	// (0x00059534) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x00061b18) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x00061b18) list_single_graphic_2heading_pane_fp_g

0x17b9,	// (0x00053737) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x17b9,	// (0x00053737) list_single_graphic_2heading_pane_fp_t1

0x1548,	// (0x000534c6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1548,	// (0x000534c6) list_single_graphic_2heading_pane_fp_t2

0x17cf,	// (0x0005374d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x17cf,	// (0x0005374d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7c,	// (0x00061bfa) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7c,	// (0x00061bfa) list_single_graphic_2heading_pane_fp_t

0x6fb4,	// (0x00058f32) fep_hwr_write_pane_g5_ParamLimits

0x6fb4,	// (0x00058f32) fep_hwr_write_pane_g5

0x6fc0,	// (0x00058f3e) fep_hwr_write_pane_g6_ParamLimits

0x6fc0,	// (0x00058f3e) fep_hwr_write_pane_g6

0x7874,	// (0x000597f2) eswt_shell_pane_ParamLimits

0x4960,	// (0x000568de) bg_popup_window_pane_cp18_ParamLimits

0x5bed,	// (0x00057b6b) heading_pane_cp70

0x799e,	// (0x0005991c) popup_eswt_tasktip_window_t1_ParamLimits

0xce4c,	// (0x0005edca) aid_touch_tab_arrow_left

0xce62,	// (0x0005ede0) aid_touch_tab_arrow_right

0xaf7b,	// (0x0005cef9) title_pane_g3_ParamLimits

0xaf7b,	// (0x0005cef9) title_pane_g3

0x2b3b,	// (0x00054ab9) set_value_pane_g1

0xcd89,	// (0x0005ed07) popup_toolbar_trans_pane_ParamLimits

0x7aea,	// (0x00059a68) aid_size_cell_tb_trans_pane_ParamLimits

0x2b7c,	// (0x00054afa) bg_tb_trans_pane_ParamLimits

0x7afc,	// (0x00059a7a) grid_tb_trans_pane_ParamLimits

0x24df,	// (0x0005445d) cont_note_pane_ParamLimits

0x24df,	// (0x0005445d) cont_note_pane

0x284d,	// (0x000547cb) cont_snote2_single_text_pane_ParamLimits

0x284d,	// (0x000547cb) cont_snote2_single_text_pane

0x284d,	// (0x000547cb) cont_snote2_single_graphic_pane_ParamLimits

0x284d,	// (0x000547cb) cont_snote2_single_graphic_pane

0x4f14,	// (0x00056e92) cont_note_wait_pane_ParamLimits

0x4f14,	// (0x00056e92) cont_note_wait_pane

0x4f14,	// (0x00056e92) cont_note_image_pane_ParamLimits

0x4f14,	// (0x00056e92) cont_note_image_pane

0x7ba4,	// (0x00059b22) popup_note2_window_g1_ParamLimits

0x7ba4,	// (0x00059b22) popup_note2_window_g1

0x7bd5,	// (0x00059b53) popup_note2_window_t1_ParamLimits

0x7bd5,	// (0x00059b53) popup_note2_window_t1

0x7c1a,	// (0x00059b98) popup_note2_window_t2_ParamLimits

0x7c1a,	// (0x00059b98) popup_note2_window_t2

0x7c5f,	// (0x00059bdd) popup_note2_window_t3_ParamLimits

0x7c5f,	// (0x00059bdd) popup_note2_window_t3

0x7ca4,	// (0x00059c22) popup_note2_window_t4_ParamLimits

0x7ca4,	// (0x00059c22) popup_note2_window_t4

0x2563,	// (0x000544e1) popup_note2_window_t5_ParamLimits

0x2563,	// (0x000544e1) popup_note2_window_t5

0x0004,

0xfc88,	// (0x00061c06) popup_note2_window_t_ParamLimits

0xfc88,	// (0x00061c06) popup_note2_window_t

0x7cd3,	// (0x00059c51) popup_note2_image_window_g1_ParamLimits

0x7cd3,	// (0x00059c51) popup_note2_image_window_g1

0x7cdf,	// (0x00059c5d) popup_note2_image_window_g2_ParamLimits

0x7cdf,	// (0x00059c5d) popup_note2_image_window_g2

0x0001,

0xfc93,	// (0x00061c11) popup_note2_image_window_g_ParamLimits

0xfc93,	// (0x00061c11) popup_note2_image_window_g

0x7cf1,	// (0x00059c6f) popup_note2_image_window_t1_ParamLimits

0x7cf1,	// (0x00059c6f) popup_note2_image_window_t1

0x7d09,	// (0x00059c87) popup_note2_image_window_t2_ParamLimits

0x7d09,	// (0x00059c87) popup_note2_image_window_t2

0x7d21,	// (0x00059c9f) popup_note2_image_window_t3_ParamLimits

0x7d21,	// (0x00059c9f) popup_note2_image_window_t3

0x0002,

0xfc98,	// (0x00061c16) popup_note2_image_window_t_ParamLimits

0xfc98,	// (0x00061c16) popup_note2_image_window_t

0x4f22,	// (0x00056ea0) popup_note2_wait_window_g1_ParamLimits

0x4f22,	// (0x00056ea0) popup_note2_wait_window_g1

0x7d3d,	// (0x00059cbb) popup_note2_wait_window_g2_ParamLimits

0x7d3d,	// (0x00059cbb) popup_note2_wait_window_g2

0x4f3a,	// (0x00056eb8) popup_note2_wait_window_g3_ParamLimits

0x4f3a,	// (0x00056eb8) popup_note2_wait_window_g3

0x0002,

0xfc9f,	// (0x00061c1d) popup_note2_wait_window_g_ParamLimits

0xfc9f,	// (0x00061c1d) popup_note2_wait_window_g

0x7d49,	// (0x00059cc7) popup_note2_wait_window_t1_ParamLimits

0x7d49,	// (0x00059cc7) popup_note2_wait_window_t1

0x7d67,	// (0x00059ce5) popup_note2_wait_window_t2_ParamLimits

0x7d67,	// (0x00059ce5) popup_note2_wait_window_t2

0x7d85,	// (0x00059d03) popup_note2_wait_window_t3_ParamLimits

0x7d85,	// (0x00059d03) popup_note2_wait_window_t3

0x7d97,	// (0x00059d15) popup_note2_wait_window_t4_ParamLimits

0x7d97,	// (0x00059d15) popup_note2_wait_window_t4

0x0003,

0xfca6,	// (0x00061c24) popup_note2_wait_window_t_ParamLimits

0xfca6,	// (0x00061c24) popup_note2_wait_window_t

0x7da9,	// (0x00059d27) wait_bar2_pane_ParamLimits

0x7da9,	// (0x00059d27) wait_bar2_pane

0x7dc1,	// (0x00059d3f) popup_snote2_single_text_window_g1_ParamLimits

0x7dc1,	// (0x00059d3f) popup_snote2_single_text_window_g1

0x7de9,	// (0x00059d67) popup_snote2_single_text_window_t1_ParamLimits

0x7de9,	// (0x00059d67) popup_snote2_single_text_window_t1

0x7e35,	// (0x00059db3) popup_snote2_single_text_window_t2_ParamLimits

0x7e35,	// (0x00059db3) popup_snote2_single_text_window_t2

0x7e81,	// (0x00059dff) popup_snote2_single_text_window_t3_ParamLimits

0x7e81,	// (0x00059dff) popup_snote2_single_text_window_t3

0x7ec2,	// (0x00059e40) popup_snote2_single_text_window_t4_ParamLimits

0x7ec2,	// (0x00059e40) popup_snote2_single_text_window_t4

0x7ef8,	// (0x00059e76) popup_snote2_single_text_window_t5_ParamLimits

0x7ef8,	// (0x00059e76) popup_snote2_single_text_window_t5

0x0004,

0xfcaf,	// (0x00061c2d) popup_snote2_single_text_window_t_ParamLimits

0xfcaf,	// (0x00061c2d) popup_snote2_single_text_window_t

0x7f23,	// (0x00059ea1) popup_snote2_single_graphic_window_g1_ParamLimits

0x7f23,	// (0x00059ea1) popup_snote2_single_graphic_window_g1

0x7f4b,	// (0x00059ec9) popup_snote2_single_graphic_window_g2_ParamLimits

0x7f4b,	// (0x00059ec9) popup_snote2_single_graphic_window_g2

0x0001,

0xfcba,	// (0x00061c38) popup_snote2_single_graphic_window_g_ParamLimits

0xfcba,	// (0x00061c38) popup_snote2_single_graphic_window_g

0x7f73,	// (0x00059ef1) popup_snote2_single_graphic_window_t1_ParamLimits

0x7f73,	// (0x00059ef1) popup_snote2_single_graphic_window_t1

0x7fbf,	// (0x00059f3d) popup_snote2_single_graphic_window_t2_ParamLimits

0x7fbf,	// (0x00059f3d) popup_snote2_single_graphic_window_t2

0x7e81,	// (0x00059dff) popup_snote2_single_graphic_window_t3_ParamLimits

0x7e81,	// (0x00059dff) popup_snote2_single_graphic_window_t3

0x7ec2,	// (0x00059e40) popup_snote2_single_graphic_window_t4_ParamLimits

0x7ec2,	// (0x00059e40) popup_snote2_single_graphic_window_t4

0x7ef8,	// (0x00059e76) popup_snote2_single_graphic_window_t5_ParamLimits

0x7ef8,	// (0x00059e76) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbf,	// (0x00061c3d) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbf,	// (0x00061c3d) popup_snote2_single_graphic_window_t

0x69fb,	// (0x00058979) clock_nsta_pane_cp2_t1

0x69fb,	// (0x00058979) clock_nsta_pane_cp2_t2

0x0001,

0xfad3,	// (0x00061a51) clock_nsta_pane_cp2_t

0x02c8,	// (0x00052246) form_field_data_wide_pane_g1_ParamLimits

0x2b96,	// (0x00054b14) form_field_data_wide_pane_g2_ParamLimits

0x2b96,	// (0x00054b14) form_field_data_wide_pane_g2

0x2ba2,	// (0x00054b20) form_field_data_wide_pane_g3_ParamLimits

0x2ba2,	// (0x00054b20) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x0006161a) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x0006161a) form_field_data_wide_pane_g

0xd87d,	// (0x0005f7fb) grid_touch_3_pane_ParamLimits

0xd87d,	// (0x0005f7fb) grid_touch_3_pane

0xddb2,	// (0x0005fd30) cell_touch_3_pane_ParamLimits

0xddb2,	// (0x0005fd30) cell_touch_3_pane

0x6f14,	// (0x00058e92) cell_touch_3_pane_g1

0x6f14,	// (0x00058e92) cell_touch_3_pane_g2

0x0001,

0xfb58,	// (0x00061ad6) cell_touch_3_pane_g

0x2595,	// (0x00054513) cont_query_data_pane

0x259d,	// (0x0005451b) cont_query_data_pane_cp1

0x803e,	// (0x00059fbc) button_value_adjust_pane_cp7

0x8046,	// (0x00059fc4) query_popup_pane_cp3

0x3484,	// (0x00055402) bg_popup_sub_pane_cp22_ParamLimits

0x066c,	// (0x000525ea) navi_navi_volume_pane_cp2

0x0687,	// (0x00052605) popup_side_volume_key_window_g2

0x0696,	// (0x00052614) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x000616ac) popup_side_volume_key_window_g

0x06b3,	// (0x00052631) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x000616b3) popup_side_volume_key_window_t

0x373f,	// (0x000556bd) popup_side_volume_key_window_ParamLimits

0xb48e,	// (0x0005d40c) list_double_graphic_pane_g4_ParamLimits

0xb48e,	// (0x0005d40c) list_double_graphic_pane_g4

0xd11c,	// (0x0005f09a) list_single_2heading_msg_pane_ParamLimits

0xd11c,	// (0x0005f09a) list_single_2heading_msg_pane

0xd142,	// (0x0005f0c0) list_single_2heading_msg_pane_g1_ParamLimits

0xd142,	// (0x0005f0c0) list_single_2heading_msg_pane_g1

0xd14e,	// (0x0005f0cc) list_single_2heading_msg_pane_g2_ParamLimits

0xd14e,	// (0x0005f0cc) list_single_2heading_msg_pane_g2

0xd161,	// (0x0005f0df) list_single_2heading_msg_pane_g3_ParamLimits

0xd161,	// (0x0005f0df) list_single_2heading_msg_pane_g3

0xd16d,	// (0x0005f0eb) list_single_2heading_msg_pane_g4_ParamLimits

0xd16d,	// (0x0005f0eb) list_single_2heading_msg_pane_g4

0x0003,

0xfcca,	// (0x00061c48) list_single_2heading_msg_pane_g_ParamLimits

0xfcca,	// (0x00061c48) list_single_2heading_msg_pane_g

0xbe18,	// (0x0005dd96) list_single_2heading_msg_pane_t1_ParamLimits

0xbe18,	// (0x0005dd96) list_single_2heading_msg_pane_t1

0xbe40,	// (0x0005ddbe) list_single_2heading_msg_pane_t2_ParamLimits

0xbe40,	// (0x0005ddbe) list_single_2heading_msg_pane_t2

0xbeab,	// (0x0005de29) list_single_2heading_msg_pane_t3_ParamLimits

0xbeab,	// (0x0005de29) list_single_2heading_msg_pane_t3

0x187f,	// (0x000537fd) list_single_2heading_msg_pane_t4_ParamLimits

0x187f,	// (0x000537fd) list_single_2heading_msg_pane_t4

0x0003,

0xfcd3,	// (0x00061c51) list_single_2heading_msg_pane_t_ParamLimits

0xfcd3,	// (0x00061c51) list_single_2heading_msg_pane_t

0x21a9,	// (0x00054127) title_pane_g4_ParamLimits

0x21a9,	// (0x00054127) title_pane_g4

0x0478,	// (0x000523f6) title_pane_stacon_g3_ParamLimits

0x0478,	// (0x000523f6) title_pane_stacon_g3

0x7b67,	// (0x00059ae5) list_single_2graphic_im_pane_g4_ParamLimits

0x7b67,	// (0x00059ae5) list_single_2graphic_im_pane_g4

0x598a,	// (0x00057908) popup_side_volume_key_window_cp

0x6200,	// (0x0005817e) main_idle_act2_pane_t1

0x0ae9,	// (0x00052a67) toolbar_button_pane_g10

0xb308,	// (0x0005d286) popup_toolbar_window_cp1

0x69ec,	// (0x0005896a) clock_nsta_pane_cp_t1

0x69ec,	// (0x0005896a) clock_nsta_pane_cp_t2

0x0001,

0xface,	// (0x00061a4c) clock_nsta_pane_cp_t

0x066c,	// (0x000525ea) navi_navi_volume_pane_cp2_ParamLimits

0x067b,	// (0x000525f9) popup_side_volume_key_window_g1_ParamLimits

0x0687,	// (0x00052605) popup_side_volume_key_window_g2_ParamLimits

0x0696,	// (0x00052614) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x000616ac) popup_side_volume_key_window_g_ParamLimits

0x123f,	// (0x000531bd) fep_hwr_aid_pane

0x12e8,	// (0x00053266) bg_fep_hwr_top_pane_g4_ParamLimits

0x6f84,	// (0x00058f02) fep_hwr_top_pane_g1_ParamLimits

0x6f96,	// (0x00058f14) fep_hwr_top_pane_g2_ParamLimits

0x1308,	// (0x00053286) fep_hwr_top_pane_g3_ParamLimits

0xfb23,	// (0x00061aa1) fep_hwr_top_pane_g_ParamLimits

0x131d,	// (0x0005329b) fep_hwr_top_text_pane_ParamLimits

0x573f,	// (0x000576bd) aid_touch_tab_arrow_arrow_2

0x5748,	// (0x000576c6) aid_touch_tab_arrow_left_2

0x1253,	// (0x000531d1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x128a,	// (0x00053208) fep_hwr_prediction_pane

0x70ec,	// (0x0005906a) fep_vkb_prediction_pane

0xdb85,	// (0x0005fb03) fep_vkb_side_pane_g3_ParamLimits

0xdb85,	// (0x0005fb03) fep_vkb_side_pane_g3

0x14ac,	// (0x0005342a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1652,	// (0x000535d0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x165f,	// (0x000535dd) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd2,	// (0x00061b50) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x18a4,	// (0x00053822) fep_hwr_prediction_pane_g1

0x18ae,	// (0x0005382c) fep_hwr_prediction_pane_g2

0x18b6,	// (0x00053834) fep_hwr_prediction_pane_g3

0x18be,	// (0x0005383c) fep_hwr_prediction_pane_g4

0x0003,

0xfcdc,	// (0x00061c5a) fep_hwr_prediction_pane_g

0x806d,	// (0x00059feb) fep_vkb_prediction_pane_g1

0x8077,	// (0x00059ff5) fep_vkb_prediction_pane_g2

0x807f,	// (0x00059ffd) fep_vkb_prediction_pane_g3

0x8087,	// (0x0005a005) fep_vkb_prediction_pane_g4

0x0003,

0xfce5,	// (0x00061c63) fep_vkb_prediction_pane_g

0x0e72,	// (0x00052df0) slider_set_pane_g3

0x0e86,	// (0x00052e04) slider_set_pane_g4

0x0e9e,	// (0x00052e1c) slider_set_pane_g5

0x0e72,	// (0x00052df0) slider_set_pane_g6

0x0eb4,	// (0x00052e32) slider_set_pane_g7

0x5e38,	// (0x00057db6) slider_form_pane_g3

0x5e41,	// (0x00057dbf) slider_form_pane_g4

0x5e49,	// (0x00057dc7) slider_form_pane_g5

0x5e38,	// (0x00057db6) slider_form_pane_g6

0xd6ff,	// (0x0005f67d) slider_form_pane_g7

0x64ce,	// (0x0005844c) slider_set_pane_vc_g3

0x64d7,	// (0x00058455) slider_set_pane_vc_g4

0x64e0,	// (0x0005845e) slider_set_pane_vc_g5

0x64ce,	// (0x0005844c) slider_set_pane_vc_g6

0x64e9,	// (0x00058467) slider_set_pane_vc_g7

0x64ce,	// (0x0005844c) slider_form_pane_vc_g1

0x64d7,	// (0x00058455) slider_form_pane_vc_g2

0x64e0,	// (0x0005845e) slider_form_pane_vc_g3

0x64ce,	// (0x0005844c) slider_form_pane_vc_g4

0x669e,	// (0x0005861c) slider_form_pane_vc_g5

0x0004,

0xfaa7,	// (0x00061a25) slider_form_pane_vc_g

0xd1c2,	// (0x0005f140) main_idle_act3_pane

0x808f,	// (0x0005a00d) ai3_links_pane

0xddfc,	// (0x0005fd7a) popup_ai3_data_window_ParamLimits

0xddfc,	// (0x0005fd7a) popup_ai3_data_window

0xd1c2,	// (0x0005f140) grid_ai3_links_pane

0xde1a,	// (0x0005fd98) cell_ai3_links_pane_ParamLimits

0xde1a,	// (0x0005fd98) cell_ai3_links_pane

0x80d0,	// (0x0005a04e) bg_popup_sub_pane_cp11

0x80dd,	// (0x0005a05b) cell_ai3_links_pane_g1

0xd1c2,	// (0x0005f140) bg_popup_sub_pane_cp12

0x8102,	// (0x0005a080) heading_ai3_data_pane

0x810a,	// (0x0005a088) list_ai3_gene_pane

0x8116,	// (0x0005a094) popup_ai3_data_window_g1

0x811e,	// (0x0005a09c) heading_ai3_data_pane_g1

0x8126,	// (0x0005a0a4) heading_ai3_data_pane_t1

0x8134,	// (0x0005a0b2) list_double_ai3_gene_pane_ParamLimits

0x8134,	// (0x0005a0b2) list_double_ai3_gene_pane

0x8141,	// (0x0005a0bf) list_single_ai3_gene_pane_ParamLimits

0x8141,	// (0x0005a0bf) list_single_ai3_gene_pane

0x6ed9,	// (0x00058e57) list_highlight_pane_cp7_ParamLimits

0x6ed9,	// (0x00058e57) list_highlight_pane_cp7

0x814e,	// (0x0005a0cc) list_single_a13_gene_pane_t1_ParamLimits

0x814e,	// (0x0005a0cc) list_single_a13_gene_pane_t1

0x8165,	// (0x0005a0e3) list_single_ai3_gene_pane_g1

0x816e,	// (0x0005a0ec) list_single_ai3_gene_pane_g2

0x0001,

0xfcee,	// (0x00061c6c) list_single_ai3_gene_pane_g

0x8176,	// (0x0005a0f4) list_double_ai3_gene_pane_g1_ParamLimits

0x8176,	// (0x0005a0f4) list_double_ai3_gene_pane_g1

0x8182,	// (0x0005a100) list_double_ai3_gene_pane_t1_ParamLimits

0x8182,	// (0x0005a100) list_double_ai3_gene_pane_t1

0x819e,	// (0x0005a11c) list_double_ai3_gene_pane_t2_ParamLimits

0x819e,	// (0x0005a11c) list_double_ai3_gene_pane_t2

0x81b3,	// (0x0005a131) list_double_ai3_gene_pane_t3_ParamLimits

0x81b3,	// (0x0005a131) list_double_ai3_gene_pane_t3

0x0002,

0xfcf3,	// (0x00061c71) list_double_ai3_gene_pane_t_ParamLimits

0xfcf3,	// (0x00061c71) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x17e5,	// (0x00053763) aid_size_min_col_2

0xdde6,	// (0x0005fd64) aid_size_min_msg_ParamLimits

0xdde6,	// (0x0005fd64) aid_size_min_msg

0xdb99,	// (0x0005fb17) fep_vkb_top_text_pane_g2_ParamLimits

0xdb99,	// (0x0005fb17) fep_vkb_top_text_pane_g2

0x0001,

0xfb53,	// (0x00061ad1) fep_vkb_top_text_pane_g_ParamLimits

0xfb53,	// (0x00061ad1) fep_vkb_top_text_pane_g

0xd1c2,	// (0x0005f140) main_hc_apps_shell_pane

0x81d0,	// (0x0005a14e) grid_hc_apps_pane_ParamLimits

0x81d0,	// (0x0005a14e) grid_hc_apps_pane

0x81df,	// (0x0005a15d) list_hc_apps_pane

0x81e7,	// (0x0005a165) scroll_pane_cp37_ParamLimits

0x81e7,	// (0x0005a165) scroll_pane_cp37

0xde34,	// (0x0005fdb2) cell_hc_apps_pane_ParamLimits

0xde34,	// (0x0005fdb2) cell_hc_apps_pane

0xdefe,	// (0x0005fe7c) cell_hc_apps_pane_g1_ParamLimits

0xdefe,	// (0x0005fe7c) cell_hc_apps_pane_g1

0x82dc,	// (0x0005a25a) cell_hc_apps_pane_g2_ParamLimits

0x82dc,	// (0x0005a25a) cell_hc_apps_pane_g2

0x82f8,	// (0x0005a276) cell_hc_apps_pane_g3_ParamLimits

0x82f8,	// (0x0005a276) cell_hc_apps_pane_g3

0x0002,

0xfcfa,	// (0x00061c78) cell_hc_apps_pane_g_ParamLimits

0xfcfa,	// (0x00061c78) cell_hc_apps_pane_g

0xdf2b,	// (0x0005fea9) cell_hc_apps_pane_t1_ParamLimits

0xdf2b,	// (0x0005fea9) cell_hc_apps_pane_t1

0x24df,	// (0x0005445d) grid_highlight_pane_cp10_ParamLimits

0x24df,	// (0x0005445d) grid_highlight_pane_cp10

0xdf6b,	// (0x0005fee9) list_single_hc_apps_pane_ParamLimits

0xdf6b,	// (0x0005fee9) list_single_hc_apps_pane

0xdfa5,	// (0x0005ff23) list_single_hc_apps_pane_g1

0xd185,	// (0x0005f103) list_single_hc_apps_pane_g2

0x0001,

0xfd01,	// (0x00061c7f) list_single_hc_apps_pane_g

0xd19e,	// (0x0005f11c) list_single_hc_apps_pane_g2_copy1

0xbf19,	// (0x0005de97) list_single_hc_apps_pane_t1

0x2255,	// (0x000541d3) bg_set_opt_pane_cp_ParamLimits

0xf4e4,	// (0x00061462) setting_slider_pane_t1_ParamLimits

0xf4fa,	// (0x00061478) setting_slider_pane_t2_ParamLimits

0xf514,	// (0x00061492) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x000614f8) setting_slider_pane_t_ParamLimits

0xf52c,	// (0x000614aa) slider_set_pane_ParamLimits

0x098b,	// (0x00052909) control_pane_g5_ParamLimits

0x098b,	// (0x00052909) control_pane_g5

0x5c59,	// (0x00057bd7) slider_set_pane_g1_ParamLimits

0x0e66,	// (0x00052de4) slider_set_pane_g2_ParamLimits

0x0e72,	// (0x00052df0) slider_set_pane_g3_ParamLimits

0x0e86,	// (0x00052e04) slider_set_pane_g4_ParamLimits

0x0e9e,	// (0x00052e1c) slider_set_pane_g5_ParamLimits

0x0e72,	// (0x00052df0) slider_set_pane_g6_ParamLimits

0x0eb4,	// (0x00052e32) slider_set_pane_g7_ParamLimits

0xf975,	// (0x000618f3) slider_set_pane_g_ParamLimits

0x3824,	// (0x000557a2) navi_icon_text_pane_ParamLimits

0xce16,	// (0x0005ed94) aid_fill_nsta_2_ParamLimits

0xce4c,	// (0x0005edca) aid_touch_tab_arrow_left_ParamLimits

0xce62,	// (0x0005ede0) aid_touch_tab_arrow_right_ParamLimits

0xcefd,	// (0x0005ee7b) clock_nsta_pane_ParamLimits

0xd44e,	// (0x0005f3cc) navi_icon_pane_g1_ParamLimits

0xd45a,	// (0x0005f3d8) navi_text_pane_t1_ParamLimits

0xd957,	// (0x0005f8d5) navi_icon_text_pane_g1_ParamLimits

0xd963,	// (0x0005f8e1) navi_icon_text_pane_t1_ParamLimits

0xdfa5,	// (0x0005ff23) list_single_hc_apps_pane_g1_ParamLimits

0xd185,	// (0x0005f103) list_single_hc_apps_pane_g2_ParamLimits

0xfd01,	// (0x00061c7f) list_single_hc_apps_pane_g_ParamLimits

0xd19e,	// (0x0005f11c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbf19,	// (0x0005de97) list_single_hc_apps_pane_t1_ParamLimits

0xaee7,	// (0x0005ce65) popup_toolbar2_fixed_window_ParamLimits

0xaee7,	// (0x0005ce65) popup_toolbar2_fixed_window

0xcd7f,	// (0x0005ecfd) popup_toolbar2_float_window

0xd1c2,	// (0x0005f140) bg_popup_sub_pane_cp27

0x83b2,	// (0x0005a330) grid_toolbar2_float_pane

0xd1c2,	// (0x0005f140) bg_popup_sub_pane_cp26

0x83b2,	// (0x0005a330) grid_toolbar2_fixed_pane

0xdfbe,	// (0x0005ff3c) cell_toolbar2_fixed_pane_ParamLimits

0xdfbe,	// (0x0005ff3c) cell_toolbar2_fixed_pane

0xe010,	// (0x0005ff8e) cell_toolbar2_fixed_pane_g1

0x83d3,	// (0x0005a351) toolbar2_fixed_button_pane

0x486e,	// (0x000567ec) toolbar2_fixed_button_pane_g1

0x487e,	// (0x000567fc) toolbar2_fixed_button_pane_g2

0x4876,	// (0x000567f4) toolbar2_fixed_button_pane_g3

0x488e,	// (0x0005680c) toolbar2_fixed_button_pane_g4

0x4886,	// (0x00056804) toolbar2_fixed_button_pane_g5

0x4896,	// (0x00056814) toolbar2_fixed_button_pane_g6

0x489e,	// (0x0005681c) toolbar2_fixed_button_pane_g7

0x48ae,	// (0x0005682c) toolbar2_fixed_button_pane_g8

0x48a6,	// (0x00056824) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x000617f5) toolbar2_fixed_button_pane_g

0x83db,	// (0x0005a359) cell_toolbar2_float_pane_ParamLimits

0x83db,	// (0x0005a359) cell_toolbar2_float_pane

0x83ec,	// (0x0005a36a) cell_toolbar2_float_pane_g1

0x83d3,	// (0x0005a351) toolbar2_fixed_button_pane_cp

0xda81,	// (0x0005f9ff) fep_vkb_accented_list_pane_ParamLimits

0xda81,	// (0x0005f9ff) fep_vkb_accented_list_pane

0x148c,	// (0x0005340a) bg_popup_fep_shadow_pane_g9

0x39a8,	// (0x00055926) bg_popup_fep_shadow_pane_cp3

0x2cee,	// (0x00054c6c) list_accented_list_pane

0x83f5,	// (0x0005a373) list_single_accented_list_pane_ParamLimits

0x83f5,	// (0x0005a373) list_single_accented_list_pane

0x39a8,	// (0x00055926) list_highlight_pane_cp10

0x8406,	// (0x0005a384) list_single_accented_list_pane_t1

0xcc9b,	// (0x0005ec19) popup_slider_window_ParamLimits

0xcc9b,	// (0x0005ec19) popup_slider_window

0x804e,	// (0x00059fcc) aid_indentation_list_msg

0xe11b,	// (0x00060099) bg_popup_window_pane_cp19

0x8540,	// (0x0005a4be) popup_slider_window_g1

0x857d,	// (0x0005a4fb) popup_slider_window_g2

0x8599,	// (0x0005a517) popup_slider_window_g3

0x0005,

0xfd06,	// (0x00061c84) popup_slider_window_g

0x85f5,	// (0x0005a573) popup_slider_window_t1

0x8669,	// (0x0005a5e7) small_volume_slider_vertical_pane

0x6f14,	// (0x00058e92) small_volume_slider_vertical_pane_g1

0x6f14,	// (0x00058e92) small_volume_slider_vertical_pane_g2

0x8685,	// (0x0005a603) small_volume_slider_vertical_pane_g3

0x0002,

0xfd18,	// (0x00061c96) small_volume_slider_vertical_pane_g

0xae51,	// (0x0005cdcf) area_side_right_pane_ParamLimits

0xae51,	// (0x0005cdcf) area_side_right_pane

0xbf47,	// (0x0005dec5) aid_size_side_button_ParamLimits

0xbf47,	// (0x0005dec5) aid_size_side_button

0xbf60,	// (0x0005dede) grid_sctrl_middle_pane_ParamLimits

0xbf60,	// (0x0005dede) grid_sctrl_middle_pane

0x1928,	// (0x000538a6) sctrl_sk_bottom_pane

0x1939,	// (0x000538b7) sctrl_sk_top_pane

0x194b,	// (0x000538c9) aid_touch_sctrl_top

0x1958,	// (0x000538d6) bg_sctrl_sk_pane_ParamLimits

0x1958,	// (0x000538d6) bg_sctrl_sk_pane

0x1966,	// (0x000538e4) sctrl_sk_top_pane_g1

0x1973,	// (0x000538f1) sctrl_sk_top_pane_t1

0x194b,	// (0x000538c9) aid_touch_sctrl_bottom

0x1958,	// (0x000538d6) bg_sctrl_sk_pane_cp_ParamLimits

0x1958,	// (0x000538d6) bg_sctrl_sk_pane_cp

0x198e,	// (0x0005390c) sctrl_sk_bottom_pane_g1

0x1973,	// (0x000538f1) sctrl_sk_bottom_pane_t1

0xbf7a,	// (0x0005def8) cell_sctrl_middle_pane_ParamLimits

0xbf7a,	// (0x0005def8) cell_sctrl_middle_pane

0xbf8d,	// (0x0005df0b) aid_touch_sctrl_middle_ParamLimits

0xbf8d,	// (0x0005df0b) aid_touch_sctrl_middle

0xbf9a,	// (0x0005df18) bg_sctrl_middle_pane_ParamLimits

0xbf9a,	// (0x0005df18) bg_sctrl_middle_pane

0x2008,	// (0x00053f86) cell_sctrl_middle_pane_g1_ParamLimits

0x2008,	// (0x00053f86) cell_sctrl_middle_pane_g1

0xbfa8,	// (0x0005df26) cell_sctrl_middle_pane_g2_ParamLimits

0xbfa8,	// (0x0005df26) cell_sctrl_middle_pane_g2

0x0001,

0xfd24,	// (0x00061ca2) cell_sctrl_middle_pane_g_ParamLimits

0xfd24,	// (0x00061ca2) cell_sctrl_middle_pane_g

0x486e,	// (0x000567ec) bg_sctrl_middle_pane_g1

0x4876,	// (0x000567f4) bg_sctrl_middle_pane_g2

0x487e,	// (0x000567fc) bg_sctrl_middle_pane_g3

0x4886,	// (0x00056804) bg_sctrl_middle_pane_g4

0x488e,	// (0x0005680c) bg_sctrl_middle_pane_g5

0x4896,	// (0x00056814) bg_sctrl_middle_pane_g6

0x489e,	// (0x0005681c) bg_sctrl_middle_pane_g7

0x48a6,	// (0x00056824) bg_sctrl_middle_pane_g8

0x0007,

0xfd29,	// (0x00061ca7) bg_sctrl_middle_pane_g

0x48ae,	// (0x0005682c) bg_sctrl_middle_pane_g8_copy1

0x486e,	// (0x000567ec) bg_sctrl_sk_pane_g1

0x487e,	// (0x000567fc) bg_sctrl_sk_pane_g2

0x4876,	// (0x000567f4) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x000617f5) bg_sctrl_sk_pane_g

0x2a0b,	// (0x00054989) aid_size_touch_scroll_bar

0x488e,	// (0x0005680c) bg_sctrl_sk_pane_g4

0x4886,	// (0x00056804) bg_sctrl_sk_pane_g5

0x4896,	// (0x00056814) bg_sctrl_sk_pane_g6

0x489e,	// (0x0005681c) bg_sctrl_sk_pane_g7

0x48ae,	// (0x0005682c) bg_sctrl_sk_pane_g8

0x48a6,	// (0x00056824) bg_sctrl_sk_pane_g9

0x3dd0,	// (0x00055d4e) popup_fep_china_hwr2_fs_candidate_window

0xc757,	// (0x0005e6d5) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc757,	// (0x0005e6d5) popup_fep_china_hwr2_fs_control_window

0x14ac,	// (0x0005342a) sctrl_sk_top_pane_g2

0x0001,

0xfd1f,	// (0x00061c9d) sctrl_sk_top_pane_g

0xe1d3,	// (0x00060151) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe1d3,	// (0x00060151) aid_fep_china_hwr2_fs_cell

0xe1e9,	// (0x00060167) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe1e9,	// (0x00060167) bg_popup_fep_shadow_pane_cp4

0xe200,	// (0x0006017e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe200,	// (0x0006017e) bg_popup_fep_shadow_pane_cp5

0xe212,	// (0x00060190) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe212,	// (0x00060190) popup_fep_china_hwr2_fs_control_bar_grid

0xe226,	// (0x000601a4) popup_fep_china_hwr2_fs_control_funtion_grid

0x86e4,	// (0x0005a662) aid_fep_china_hwr2_fs_candi_cell

0xd1c2,	// (0x0005f140) bg_popup_fep_shadow_pane_cp6

0x86ee,	// (0x0005a66c) popup_fep_china_hwr2_fs_candidate_grid

0xe22e,	// (0x000601ac) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe22e,	// (0x000601ac) cell_fep_china_hwr2_fs_funtion_grid

0x6f14,	// (0x00058e92) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8710,	// (0x0005a68e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8710,	// (0x0005a68e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x871e,	// (0x0005a69c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x871e,	// (0x0005a69c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3a,	// (0x00061cb8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3a,	// (0x00061cb8) cell_fep_china_hwr2_fs_funtion_grid_g

0xe246,	// (0x000601c4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe246,	// (0x000601c4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe25b,	// (0x000601d9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe25b,	// (0x000601d9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3f,	// (0x00061cbd) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3f,	// (0x00061cbd) cell_fep_china_hwr2_fs_funtion_grid_t

0x8765,	// (0x0005a6e3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x876d,	// (0x0005a6eb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8775,	// (0x0005a6f3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd44,	// (0x00061cc2) popup_fep_china_hwr2_fs_control_bar_grid_g

0x877d,	// (0x0005a6fb) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x877d,	// (0x0005a6fb) cell_fep_china_hwr2_fs_candidate_grid

0x879c,	// (0x0005a71a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x87a4,	// (0x0005a722) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6f14,	// (0x00058e92) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6f14,	// (0x00058e92) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb58,	// (0x00061ad6) cell_fep_china_hwr2_fs_candidate_grid_g

0x87ac,	// (0x0005a72a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x444b,	// (0x000563c9) clock_nsta_pane_cp_24_ParamLimits

0x444b,	// (0x000563c9) clock_nsta_pane_cp_24

0x44cb,	// (0x00056449) indicator_nsta_pane_cp_24_ParamLimits

0x44cb,	// (0x00056449) indicator_nsta_pane_cp_24

0x5597,	// (0x00057515) heading_pane_g1

0x0001,

0xf8dc,	// (0x0006185a) heading_pane_g

0x6047,	// (0x00057fc5) grid_sct_catagory_button_pane

0x6079,	// (0x00057ff7) scroll_pane_cp5_ParamLimits

0x6b5d,	// (0x00058adb) button_value_adjust_pane_cp5_ParamLimits

0x6b5d,	// (0x00058adb) button_value_adjust_pane_cp5

0x6c42,	// (0x00058bc0) form2_midp_time_pane_ParamLimits

0x87ba,	// (0x0005a738) cell_sct_catagory_button_pane_ParamLimits

0x87ba,	// (0x0005a738) cell_sct_catagory_button_pane

0x6ed9,	// (0x00058e57) bg_button_pane_cp01_ParamLimits

0x6ed9,	// (0x00058e57) bg_button_pane_cp01

0x6f14,	// (0x00058e92) cell_sct_catagory_button_pane_g1

0xcd1c,	// (0x0005ec9a) popup_tb_extension_window

0xe277,	// (0x000601f5) aid_size_cell_ext_ParamLimits

0xe277,	// (0x000601f5) aid_size_cell_ext

0x284d,	// (0x000547cb) bg_tb_trans_pane_cp1_ParamLimits

0x284d,	// (0x000547cb) bg_tb_trans_pane_cp1

0xe29d,	// (0x0006021b) grid_tb_ext_pane_ParamLimits

0xe29d,	// (0x0006021b) grid_tb_ext_pane

0xe2dd,	// (0x0006025b) cell_tb_ext_pane_ParamLimits

0xe2dd,	// (0x0006025b) cell_tb_ext_pane

0xe307,	// (0x00060285) cell_tb_ext_pane_g1_ParamLimits

0xe307,	// (0x00060285) cell_tb_ext_pane_g1

0x8850,	// (0x0005a7ce) cell_tb_ext_pane_t1

0x24df,	// (0x0005445d) list_highlight_pane_cp11_ParamLimits

0x24df,	// (0x0005445d) list_highlight_pane_cp11

0xf46d,	// (0x000613eb) popup_uni_indicator_window_ParamLimits

0xf46d,	// (0x000613eb) popup_uni_indicator_window

0x2b7c,	// (0x00054afa) bg_popup_sub_pane_cp14

0x886b,	// (0x0005a7e9) list_uniindi_pane

0x8877,	// (0x0005a7f5) uniindi_top_pane

0x24df,	// (0x0005445d) bg_uniindi_top_pane

0x8898,	// (0x0005a816) uniindi_top_pane_g1

0x88ae,	// (0x0005a82c) uniindi_top_pane_g2

0x0003,

0xfd4b,	// (0x00061cc9) uniindi_top_pane_g

0x88d8,	// (0x0005a856) uniindi_top_pane_t1

0x8904,	// (0x0005a882) list_single_uniindi_pane_ParamLimits

0x8904,	// (0x0005a882) list_single_uniindi_pane

0x6f14,	// (0x00058e92) bg_uniindi_top_pane_g1

0x8916,	// (0x0005a894) list_single_uniindi_pane_g1

0x8929,	// (0x0005a8a7) list_single_uniindi_pane_t1

0xf354,	// (0x000612d2) control_bg_pane

0x894e,	// (0x0005a8cc) bg_sctrl_sk_pane_cp1

0x8957,	// (0x0005a8d5) bg_sctrl_sk_pane_cp2

0x8960,	// (0x0005a8de) control_bg_pane_g1

0x8969,	// (0x0005a8e7) control_bg_pane_g2

0x0001,

0xfd54,	// (0x00061cd2) control_bg_pane_g

0x6980,	// (0x000588fe) cell_indicator_nsta_pane_g1_ParamLimits

0xd8b0,	// (0x0005f82e) cell_indicator_nsta_pane_g2_ParamLimits

0xfabc,	// (0x00061a3a) cell_indicator_nsta_pane_g_ParamLimits

0x121e,	// (0x0005319c) form2_midp_time_pane_t1_ParamLimits

0x7700,	// (0x0005967e) main_idle_act4_pane_ParamLimits

0x7700,	// (0x0005967e) main_idle_act4_pane

0xcd1c,	// (0x0005ec9a) popup_tb_extension_window_ParamLimits

0xe2c5,	// (0x00060243) tb_ext_find_pane_ParamLimits

0xe2c5,	// (0x00060243) tb_ext_find_pane

0x8972,	// (0x0005a8f0) ai_gene_pane_1_cp1

0x3af1,	// (0x00055a6f) ai_gene_pane_2_cp1

0x897a,	// (0x0005a8f8) list_single_idle_plugin_calendar_pane

0x8983,	// (0x0005a901) list_single_idle_plugin_notification_pane

0x898c,	// (0x0005a90a) list_single_idle_plugin_player_pane

0xe324,	// (0x000602a2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe324,	// (0x000602a2) list_single_idle_plugin_shortcut_pane

0xe34c,	// (0x000602ca) main_idle_act4_pane_t1

0xe364,	// (0x000602e2) main_idle_act4_pane_t2

0x0001,

0xfd59,	// (0x00061cd7) main_idle_act4_pane_t

0xe37c,	// (0x000602fa) middle_sk_idle_act4_pane_ParamLimits

0xe37c,	// (0x000602fa) middle_sk_idle_act4_pane

0xe398,	// (0x00060316) popup_clock_digital_analogue_window_cp2

0xe3bf,	// (0x0006033d) shortcut_wheel_idle_act4_pane_ParamLimits

0xe3bf,	// (0x0006033d) shortcut_wheel_idle_act4_pane

0x6f14,	// (0x00058e92) shortcut_wheel_idle_act4_pane_g1

0x6f14,	// (0x00058e92) shortcut_wheel_idle_act4_pane_g2

0x6f14,	// (0x00058e92) shortcut_wheel_idle_act4_pane_g3

0x6f14,	// (0x00058e92) shortcut_wheel_idle_act4_pane_g4

0x6f14,	// (0x00058e92) shortcut_wheel_idle_act4_pane_g5

0x8a1f,	// (0x0005a99d) shortcut_wheel_idle_act4_pane_g6

0x8a27,	// (0x0005a9a5) shortcut_wheel_idle_act4_pane_g7

0x8a2f,	// (0x0005a9ad) shortcut_wheel_idle_act4_pane_g8

0x8a37,	// (0x0005a9b5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5e,	// (0x00061cdc) shortcut_wheel_idle_act4_pane_g

0xdfdb,	// (0x0005ff59) middle_sk_idle_act4_pane_g1_ParamLimits

0xdfdb,	// (0x0005ff59) middle_sk_idle_act4_pane_g1

0xe43c,	// (0x000603ba) middle_sk_idle_act4_pane_g2_ParamLimits

0xe43c,	// (0x000603ba) middle_sk_idle_act4_pane_g2

0x0001,

0xfd81,	// (0x00061cff) middle_sk_idle_act4_pane_g_ParamLimits

0xfd81,	// (0x00061cff) middle_sk_idle_act4_pane_g

0xe454,	// (0x000603d2) middle_sk_idle_act4_pane_t1_ParamLimits

0xe454,	// (0x000603d2) middle_sk_idle_act4_pane_t1

0xe483,	// (0x00060401) grid_ai_shortcut_pane_ParamLimits

0xe483,	// (0x00060401) grid_ai_shortcut_pane

0xe4a0,	// (0x0006041e) list_highlight_pane_cp16_ParamLimits

0xe4a0,	// (0x0006041e) list_highlight_pane_cp16

0xe4ad,	// (0x0006042b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe4ad,	// (0x0006042b) list_single_idle_plugin_shortcut_pane_g1

0xe4b9,	// (0x00060437) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe4b9,	// (0x00060437) list_single_idle_plugin_shortcut_pane_g2

0xe4d7,	// (0x00060455) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe4d7,	// (0x00060455) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd86,	// (0x00061d04) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd86,	// (0x00061d04) list_single_idle_plugin_shortcut_pane_g

0xe4ec,	// (0x0006046a) cell_ai_shortcut_pane_ParamLimits

0xe4ec,	// (0x0006046a) cell_ai_shortcut_pane

0xe502,	// (0x00060480) cell_ai_shortcut_pane_g1_ParamLimits

0xe502,	// (0x00060480) cell_ai_shortcut_pane_g1

0x8972,	// (0x0005a8f0) ai_gene_pane_1_cp2

0x8b68,	// (0x0005aae6) ai_gene_pane_2_cp2

0x8b70,	// (0x0005aaee) list_highlight_pane_cp15

0x8b79,	// (0x0005aaf7) list_single_idle_plugin_calendar_pane_g1

0x8b70,	// (0x0005aaee) list_highlight_pane_cp17

0x8b81,	// (0x0005aaff) list_single_idle_plugin_calendar_pane_g1_copy1

0x8b89,	// (0x0005ab07) list_single_idle_plugin_player_pane_g1

0x62ae,	// (0x0005822c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8d,	// (0x00061d0b) list_single_idle_plugin_player_pane_g

0x8b91,	// (0x0005ab0f) list_single_idle_plugin_player_pane_t1

0x8b9f,	// (0x0005ab1d) list_single_idle_plugin_player_pane_t2

0x8bad,	// (0x0005ab2b) list_single_idle_plugin_player_pane_t3

0x8bbb,	// (0x0005ab39) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd92,	// (0x00061d10) list_single_idle_plugin_player_pane_t

0x8bc9,	// (0x0005ab47) wait_bar_pane_cp15

0x8bd1,	// (0x0005ab4f) grid_ai_notification_pane

0x62ae,	// (0x0005822c) list_single_idle_plugin_notification_pane_g1

0xe524,	// (0x000604a2) cell_ai_notification_pane_ParamLimits

0xe524,	// (0x000604a2) cell_ai_notification_pane

0x8be7,	// (0x0005ab65) cell_ai_notification_pane_g1

0x8bef,	// (0x0005ab6d) cell_ai_notification_pane_t1

0xe531,	// (0x000604af) tb_ext_find_button_pane

0xe539,	// (0x000604b7) tb_ext_find_pane_g1

0xe541,	// (0x000604bf) tb_ext_find_pane_t1

0x33ba,	// (0x00055338) tb_ext_find_button_pane_g1

0x8c1b,	// (0x0005ab99) tb_ext_find_button_pane_g2

0x0001,

0xfd9b,	// (0x00061d19) tb_ext_find_button_pane_g

0xe34c,	// (0x000602ca) main_idle_act4_pane_t1_ParamLimits

0xe364,	// (0x000602e2) main_idle_act4_pane_t2_ParamLimits

0xfd59,	// (0x00061cd7) main_idle_act4_pane_t_ParamLimits

0xe398,	// (0x00060316) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe3af,	// (0x0006032d) sat_plugin_idle_act4_pane_ParamLimits

0xe3af,	// (0x0006032d) sat_plugin_idle_act4_pane

0xe54f,	// (0x000604cd) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe54f,	// (0x000604cd) sat_plugin_idle_act4_pane_t1

0xe567,	// (0x000604e5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe567,	// (0x000604e5) sat_plugin_idle_act4_pane_t2

0xe57f,	// (0x000604fd) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe57f,	// (0x000604fd) sat_plugin_idle_act4_pane_t3

0xe597,	// (0x00060515) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe597,	// (0x00060515) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda0,	// (0x00061d1e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda0,	// (0x00061d1e) sat_plugin_idle_act4_pane_t

0xf419,	// (0x00061397) popup_battery_window_ParamLimits

0xf419,	// (0x00061397) popup_battery_window

0x24df,	// (0x0005445d) bg_popup_sub_pane_cp25_ParamLimits

0x24df,	// (0x0005445d) bg_popup_sub_pane_cp25

0x8c70,	// (0x0005abee) popup_battery_window_g1_ParamLimits

0x8c70,	// (0x0005abee) popup_battery_window_g1

0x8c7c,	// (0x0005abfa) popup_battery_window_t1_ParamLimits

0x8c7c,	// (0x0005abfa) popup_battery_window_t1

0x8c8e,	// (0x0005ac0c) popup_battery_window_t2_ParamLimits

0x8c8e,	// (0x0005ac0c) popup_battery_window_t2

0x0001,

0xfda9,	// (0x00061d27) popup_battery_window_t_ParamLimits

0xfda9,	// (0x00061d27) popup_battery_window_t

0xc5cf,	// (0x0005e54d) midp_canvas_pane_ParamLimits

0xc62a,	// (0x0005e5a8) midp_keypad_pane_ParamLimits

0xc62a,	// (0x0005e5a8) midp_keypad_pane

0x3d26,	// (0x00055ca4) main_midp_pane_ParamLimits

0x6a0a,	// (0x00058988) signal_pane_g2_cp_ParamLimits

0xe5af,	// (0x0006052d) aid_size_cell_midp_keypad_ParamLimits

0xe5af,	// (0x0006052d) aid_size_cell_midp_keypad

0xe5cd,	// (0x0006054b) midp_keyp_game_grid_pane_ParamLimits

0xe5cd,	// (0x0006054b) midp_keyp_game_grid_pane

0xe5f4,	// (0x00060572) midp_keyp_rocker_pane_ParamLimits

0xe5f4,	// (0x00060572) midp_keyp_rocker_pane

0xe639,	// (0x000605b7) midp_keyp_sk_left_pane_ParamLimits

0xe639,	// (0x000605b7) midp_keyp_sk_left_pane

0xe68d,	// (0x0006060b) midp_keyp_sk_right_pane_ParamLimits

0xe68d,	// (0x0006060b) midp_keyp_sk_right_pane

0xd1c2,	// (0x0005f140) bg_button_pane_cp03

0xe6e1,	// (0x0006065f) midp_keyp_sk_left_pane_g1

0xd1c2,	// (0x0005f140) bg_button_pane_cp04

0xe6e1,	// (0x0006065f) midp_keyp_sk_right_pane_g1

0x6f14,	// (0x00058e92) midp_keyp_rocker_pane_g1

0xe6ea,	// (0x00060668) keyp_game_cell_pane_ParamLimits

0xe6ea,	// (0x00060668) keyp_game_cell_pane

0xd1c2,	// (0x0005f140) bg_button_pane_cp02

0xe710,	// (0x0006068e) keyp_game_cell_pane_g1

0xae93,	// (0x0005ce11) popup_fep_vkb2_window_ParamLimits

0xae93,	// (0x0005ce11) popup_fep_vkb2_window

0xbfb4,	// (0x0005df32) aid_size_cell_vkb2_ParamLimits

0xbfb4,	// (0x0005df32) aid_size_cell_vkb2

0xbfe2,	// (0x0005df60) popup_fep_vkb2_window_g1_ParamLimits

0xbfe2,	// (0x0005df60) popup_fep_vkb2_window_g1

0xc032,	// (0x0005dfb0) vkb2_area_bottom_pane_ParamLimits

0xc032,	// (0x0005dfb0) vkb2_area_bottom_pane

0xc08e,	// (0x0005e00c) vkb2_area_keypad_pane_ParamLimits

0xc08e,	// (0x0005e00c) vkb2_area_keypad_pane

0xc0dc,	// (0x0005e05a) vkb2_area_top_pane_ParamLimits

0xc0dc,	// (0x0005e05a) vkb2_area_top_pane

0xc162,	// (0x0005e0e0) vkb2_top_entry_pane_ParamLimits

0xc162,	// (0x0005e0e0) vkb2_top_entry_pane

0xc18f,	// (0x0005e10d) vkb2_top_grid_left_pane_ParamLimits

0xc18f,	// (0x0005e10d) vkb2_top_grid_left_pane

0xc1af,	// (0x0005e12d) vkb2_top_grid_right_pane_ParamLimits

0xc1af,	// (0x0005e12d) vkb2_top_grid_right_pane

0x1c04,	// (0x00053b82) vkb2_cell_keypad_pane_ParamLimits

0x1c04,	// (0x00053b82) vkb2_cell_keypad_pane

0xc1f5,	// (0x0005e173) vkb2_area_bottom_grid_pane_ParamLimits

0xc1f5,	// (0x0005e173) vkb2_area_bottom_grid_pane

0xc21f,	// (0x0005e19d) vkb2_area_bottom_pane_g1_ParamLimits

0xc21f,	// (0x0005e19d) vkb2_area_bottom_pane_g1

0xc245,	// (0x0005e1c3) vkb2_area_bottom_pane_g2_ParamLimits

0xc245,	// (0x0005e1c3) vkb2_area_bottom_pane_g2

0xc276,	// (0x0005e1f4) vkb2_area_bottom_pane_g3_ParamLimits

0xc276,	// (0x0005e1f4) vkb2_area_bottom_pane_g3

0x0002,

0xfdae,	// (0x00061d2c) vkb2_area_bottom_pane_g_ParamLimits

0xfdae,	// (0x00061d2c) vkb2_area_bottom_pane_g

0x1d93,	// (0x00053d11) vkb2_top_cell_left_pane_ParamLimits

0x1d93,	// (0x00053d11) vkb2_top_cell_left_pane

0xe719,	// (0x00060697) vkb2_top_entry_pane_g1_ParamLimits

0xe719,	// (0x00060697) vkb2_top_entry_pane_g1

0xe727,	// (0x000606a5) vkb2_top_entry_pane_t1_ParamLimits

0xe727,	// (0x000606a5) vkb2_top_entry_pane_t1

0x8e1b,	// (0x0005ad99) vkb2_top_entry_pane_t2_ParamLimits

0x8e1b,	// (0x0005ad99) vkb2_top_entry_pane_t2

0x8e33,	// (0x0005adb1) vkb2_top_entry_pane_t3_ParamLimits

0x8e33,	// (0x0005adb1) vkb2_top_entry_pane_t3

0x0002,

0xfdb5,	// (0x00061d33) vkb2_top_entry_pane_t_ParamLimits

0xfdb5,	// (0x00061d33) vkb2_top_entry_pane_t

0xc2e0,	// (0x0005e25e) vkb2_top_grid_right_pane_g1_ParamLimits

0xc2e0,	// (0x0005e25e) vkb2_top_grid_right_pane_g1

0x1df6,	// (0x00053d74) vkb2_top_grid_right_pane_g2_ParamLimits

0x1df6,	// (0x00053d74) vkb2_top_grid_right_pane_g2

0x1e0e,	// (0x00053d8c) vkb2_top_grid_right_pane_g3_ParamLimits

0x1e0e,	// (0x00053d8c) vkb2_top_grid_right_pane_g3

0xc2f6,	// (0x0005e274) vkb2_top_grid_right_pane_g4_ParamLimits

0xc2f6,	// (0x0005e274) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbc,	// (0x00061d3a) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbc,	// (0x00061d3a) vkb2_top_grid_right_pane_g

0x1e3c,	// (0x00053dba) vkb2_top_cell_left_pane_g1

0x1e53,	// (0x00053dd1) vkb2_cell_keypad_pane_g1_ParamLimits

0x1e53,	// (0x00053dd1) vkb2_cell_keypad_pane_g1

0x8e49,	// (0x0005adc7) vkb2_cell_keypad_pane_t1_ParamLimits

0x8e49,	// (0x0005adc7) vkb2_cell_keypad_pane_t1

0x1e77,	// (0x00053df5) vkb2_cell_bottom_grid_pane_ParamLimits

0x1e77,	// (0x00053df5) vkb2_cell_bottom_grid_pane

0x1eb0,	// (0x00053e2e) vkb2_cell_bottom_grid_pane_g1

0xe3e0,	// (0x0006035e) aid_call2_pane_cp02

0xe3e8,	// (0x00060366) aid_call_pane_cp02

0xe3f0,	// (0x0006036e) clock_digital_number_pane_cp10

0xe3f8,	// (0x00060376) clock_digital_number_pane_cp11

0xe400,	// (0x0006037e) clock_digital_number_pane_cp12

0xe408,	// (0x00060386) clock_digital_number_pane_cp13

0xe410,	// (0x0006038e) clock_digital_separator_pane_cp10

0x33ba,	// (0x00055338) popup_clock_digital_analogue_window_cp2_g1

0x33ba,	// (0x00055338) popup_clock_digital_analogue_window_cp2_g2

0xe418,	// (0x00060396) popup_clock_digital_analogue_window_cp2_g3

0x33ba,	// (0x00055338) popup_clock_digital_analogue_window_cp2_g4

0xe418,	// (0x00060396) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd71,	// (0x00061cef) popup_clock_digital_analogue_window_cp2_g

0xe420,	// (0x0006039e) popup_clock_digital_analogue_window_cp2_t1

0xe42e,	// (0x000603ac) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7c,	// (0x00061cfa) popup_clock_digital_analogue_window_cp2_t

0x6f14,	// (0x00058e92) clock_digital_number_pane_cp10_g1

0x6f14,	// (0x00058e92) clock_digital_number_pane_cp10_g2

0x0001,

0xfb58,	// (0x00061ad6) clock_digital_number_pane_cp10_g

0x6f14,	// (0x00058e92) clock_digital_separator_pane_cp10_g1

0x6f14,	// (0x00058e92) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb58,	// (0x00061ad6) clock_digital_separator_pane_cp10_g

0x88ba,	// (0x0005a838) uniindi_top_pane_g3

0x88cb,	// (0x0005a849) uniindi_top_pane_g4

0x1c74,	// (0x00053bf2) vkb2_row_keypad_pane_ParamLimits

0x1c74,	// (0x00053bf2) vkb2_row_keypad_pane

0x1ecc,	// (0x00053e4a) vkb2_cell_t_keypad_pane_ParamLimits

0x1ecc,	// (0x00053e4a) vkb2_cell_t_keypad_pane

0x1edc,	// (0x00053e5a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1edc,	// (0x00053e5a) vkb2_cell_t_keypad_pane_cp08

0x1ef1,	// (0x00053e6f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1ef1,	// (0x00053e6f) vkb2_cell_t_keypad_pane_cp09

0x1f05,	// (0x00053e83) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1f05,	// (0x00053e83) vkb2_cell_t_keypad_pane_cp01

0x1f16,	// (0x00053e94) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1f16,	// (0x00053e94) vkb2_cell_t_keypad_pane_cp02

0x1f27,	// (0x00053ea5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1f27,	// (0x00053ea5) vkb2_cell_t_keypad_pane_cp03

0x1f38,	// (0x00053eb6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1f38,	// (0x00053eb6) vkb2_cell_t_keypad_pane_cp04

0x1f49,	// (0x00053ec7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1f49,	// (0x00053ec7) vkb2_cell_t_keypad_pane_cp05

0x1f5a,	// (0x00053ed8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1f5a,	// (0x00053ed8) vkb2_cell_t_keypad_pane_cp06

0x1f6d,	// (0x00053eeb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1f6d,	// (0x00053eeb) vkb2_cell_t_keypad_pane_cp07

0x1f82,	// (0x00053f00) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1f82,	// (0x00053f00) vkb2_cell_t_keypad_pane_cp10

0x14ac,	// (0x0005342a) vkb2_cell_t_keypad_pane_g1

0x8e60,	// (0x0005adde) vkb2_cell_t_keypad_pane_t1

0xf354,	// (0x000612d2) popup_grid_graphic2_window

0xe760,	// (0x000606de) aid_size_cell_graphic2_ParamLimits

0xe760,	// (0x000606de) aid_size_cell_graphic2

0x4f14,	// (0x00056e92) bg_popup_window_pane_cp21_ParamLimits

0x4f14,	// (0x00056e92) bg_popup_window_pane_cp21

0xe792,	// (0x00060710) graphic2_pages_pane_ParamLimits

0xe792,	// (0x00060710) graphic2_pages_pane

0xe7ea,	// (0x00060768) grid_graphic2_control_pane_ParamLimits

0xe7ea,	// (0x00060768) grid_graphic2_control_pane

0xe81e,	// (0x0006079c) grid_graphic2_pane_ParamLimits

0xe81e,	// (0x0006079c) grid_graphic2_pane

0xe895,	// (0x00060813) cell_graphic2_pane

0xd1c2,	// (0x0005f140) main_comp_mode_pane

0x810a,	// (0x0005a088) list_ai3_gene_pane_ParamLimits

0xe11b,	// (0x00060099) bg_popup_window_pane_cp19_ParamLimits

0x84de,	// (0x0005a45c) bg_touch_area_indi_pane_ParamLimits

0x84de,	// (0x0005a45c) bg_touch_area_indi_pane

0x84f4,	// (0x0005a472) bg_touch_area_indi_pane_cp01_ParamLimits

0x84f4,	// (0x0005a472) bg_touch_area_indi_pane_cp01

0x850c,	// (0x0005a48a) bg_touch_area_indi_pane_cp02_ParamLimits

0x850c,	// (0x0005a48a) bg_touch_area_indi_pane_cp02

0x8526,	// (0x0005a4a4) bg_touch_area_indi_pane_cp03_ParamLimits

0x8526,	// (0x0005a4a4) bg_touch_area_indi_pane_cp03

0x8540,	// (0x0005a4be) popup_slider_window_g1_ParamLimits

0x857d,	// (0x0005a4fb) popup_slider_window_g2_ParamLimits

0x8599,	// (0x0005a517) popup_slider_window_g3_ParamLimits

0xfd06,	// (0x00061c84) popup_slider_window_g_ParamLimits

0x85f5,	// (0x0005a573) popup_slider_window_t1_ParamLimits

0x8669,	// (0x0005a5e7) small_volume_slider_vertical_pane_ParamLimits

0xe895,	// (0x00060813) cell_graphic2_pane_ParamLimits

0xe8f8,	// (0x00060876) bg_button_pane_cp10_ParamLimits

0xe8f8,	// (0x00060876) bg_button_pane_cp10

0xe90b,	// (0x00060889) bg_button_pane_cp11_ParamLimits

0xe90b,	// (0x00060889) bg_button_pane_cp11

0xe91e,	// (0x0006089c) graphic2_pages_pane_g1_ParamLimits

0xe91e,	// (0x0006089c) graphic2_pages_pane_g1

0xe939,	// (0x000608b7) graphic2_pages_pane_g2_ParamLimits

0xe939,	// (0x000608b7) graphic2_pages_pane_g2

0x0001,

0xfdca,	// (0x00061d48) graphic2_pages_pane_g_ParamLimits

0xfdca,	// (0x00061d48) graphic2_pages_pane_g

0xe951,	// (0x000608cf) graphic2_pages_pane_t1_ParamLimits

0xe951,	// (0x000608cf) graphic2_pages_pane_t1

0xe969,	// (0x000608e7) cell_graphic2_control_pane_ParamLimits

0xe969,	// (0x000608e7) cell_graphic2_control_pane

0xe983,	// (0x00060901) cell_graphic2_pane_g1_ParamLimits

0xe983,	// (0x00060901) cell_graphic2_pane_g1

0xdfe9,	// (0x0005ff67) cell_graphic2_pane_g2_ParamLimits

0xdfe9,	// (0x0005ff67) cell_graphic2_pane_g2

0xe003,	// (0x0005ff81) cell_graphic2_pane_g3_ParamLimits

0xe003,	// (0x0005ff81) cell_graphic2_pane_g3

0xdff6,	// (0x0005ff74) cell_graphic2_pane_g4_ParamLimits

0xdff6,	// (0x0005ff74) cell_graphic2_pane_g4

0xe990,	// (0x0006090e) cell_graphic2_pane_g5_ParamLimits

0xe990,	// (0x0006090e) cell_graphic2_pane_g5

0x0004,

0xfdcf,	// (0x00061d4d) cell_graphic2_pane_g_ParamLimits

0xfdcf,	// (0x00061d4d) cell_graphic2_pane_g

0xe9b0,	// (0x0006092e) cell_graphic2_pane_t1_ParamLimits

0xe9b0,	// (0x0006092e) cell_graphic2_pane_t1

0x558b,	// (0x00057509) grid_highlight_pane_cp11_ParamLimits

0x558b,	// (0x00057509) grid_highlight_pane_cp11

0x2b7c,	// (0x00054afa) bg_button_pane_cp05

0xe9e5,	// (0x00060963) cell_graphic2_control_pane_g1

0x6f14,	// (0x00058e92) bg_touch_area_indi_pane_g1

0x90db,	// (0x0005b059) aid_cmod_rocker_key_size

0x90e5,	// (0x0005b063) aid_cmode_itu_key_size

0x90ef,	// (0x0005b06d) main_cmode_video_pane

0x90f9,	// (0x0005b077) main_comp_mode_itu_pane

0x9105,	// (0x0005b083) main_comp_mode_rocker_pane

0x9111,	// (0x0005b08f) cell_cmode_rocker_pane_ParamLimits

0x9111,	// (0x0005b08f) cell_cmode_rocker_pane

0x9125,	// (0x0005b0a3) cell_cmode_itu_pane_ParamLimits

0x9125,	// (0x0005b0a3) cell_cmode_itu_pane

0x2b7c,	// (0x00054afa) bg_button_pane_cp06_ParamLimits

0x2b7c,	// (0x00054afa) bg_button_pane_cp06

0x719e,	// (0x0005911c) cell_cmode_rocker_pane_g1_ParamLimits

0x719e,	// (0x0005911c) cell_cmode_rocker_pane_g1

0x8710,	// (0x0005a68e) cell_cmode_rocker_pane_g2_ParamLimits

0x8710,	// (0x0005a68e) cell_cmode_rocker_pane_g2

0x0001,

0xfddf,	// (0x00061d5d) cell_cmode_rocker_pane_g_ParamLimits

0xfddf,	// (0x00061d5d) cell_cmode_rocker_pane_g

0xd1c2,	// (0x0005f140) bg_button_pane_cp07

0x913c,	// (0x0005b0ba) cell_cmode_itu_pane_g1

0x9145,	// (0x0005b0c3) cell_cmode_itu_pane_t1

0x9153,	// (0x0005b0d1) cell_cmode_itu_pane_t2

0x0001,

0xfde4,	// (0x00061d62) cell_cmode_itu_pane_t

0x893e,	// (0x0005a8bc) aid_touch_ctrl_left

0x8946,	// (0x0005a8c4) aid_touch_ctrl_right

0xd1c2,	// (0x0005f140) compa_mode_pane

0xe9f2,	// (0x00060970) aid_cmod_rocker_key_size_cp

0xe9fc,	// (0x0006097a) aid_cmode_itu_key_size_cp

0x9175,	// (0x0005b0f3) compa_mode_pane_g1

0x917d,	// (0x0005b0fb) compa_mode_pane_g2

0x9185,	// (0x0005b103) compa_mode_pane_g3

0x0002,

0xfde9,	// (0x00061d67) compa_mode_pane_g

0xea06,	// (0x00060984) main_comp_mode_itu_pane_cp

0xea0e,	// (0x0006098c) main_comp_mode_rocker_pane_cp

0xea16,	// (0x00060994) cell_cmode_itu_pane_cp_ParamLimits

0xea16,	// (0x00060994) cell_cmode_itu_pane_cp

0xea2b,	// (0x000609a9) cell_cmode_rocker_pane_cp_ParamLimits

0xea2b,	// (0x000609a9) cell_cmode_rocker_pane_cp

0x2b7c,	// (0x00054afa) bg_button_pane_cp06_cp_ParamLimits

0x2b7c,	// (0x00054afa) bg_button_pane_cp06_cp

0x719e,	// (0x0005911c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x719e,	// (0x0005911c) cell_cmode_rocker_pane_g1_cp

0x6f14,	// (0x00058e92) cell_cmode_rocker_pane_g2_cp

0xd1c2,	// (0x0005f140) bg_button_pane_cp07_cp

0xea3d,	// (0x000609bb) cell_cmode_itu_pane_g1_cp

0xea46,	// (0x000609c4) cell_cmode_itu_pane_t1_cp

0xea46,	// (0x000609c4) cell_cmode_itu_pane_t2_cp

0xd6f7,	// (0x0005f675) settings_code_pane_cp2

0x2255,	// (0x000541d3) bg_popup_window_pane_cp3_ParamLimits

0x26cd,	// (0x0005464b) heading_pane_cp3_ParamLimits

0x26d9,	// (0x00054657) listscroll_popup_graphic_pane_ParamLimits

0x123f,	// (0x000531bd) fep_hwr_aid_pane_ParamLimits

0x194b,	// (0x000538c9) aid_touch_sctrl_top_ParamLimits

0x1966,	// (0x000538e4) sctrl_sk_top_pane_g1_ParamLimits

0x14ac,	// (0x0005342a) sctrl_sk_top_pane_g2_ParamLimits

0xfd1f,	// (0x00061c9d) sctrl_sk_top_pane_g_ParamLimits

0x1973,	// (0x000538f1) sctrl_sk_top_pane_t1_ParamLimits

0x194b,	// (0x000538c9) aid_touch_sctrl_bottom_ParamLimits

0x1973,	// (0x000538f1) sctrl_sk_bottom_pane_t1_ParamLimits

0x8884,	// (0x0005a802) aid_area_touch_clock

0xc124,	// (0x0005e0a2) aid_vkb2_area_top_pane_cell_ParamLimits

0xc124,	// (0x0005e0a2) aid_vkb2_area_top_pane_cell

0xc1cf,	// (0x0005e14d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc1cf,	// (0x0005e14d) aid_vkb2_area_bottom_pane_cell

0x8ded,	// (0x0005ad6b) popup_char_count_window

0x91db,	// (0x0005b159) popup_char_count_window_g1

0x91e4,	// (0x0005b162) popup_char_count_window_g2

0x91ed,	// (0x0005b16b) popup_char_count_window_g3

0x0002,

0xfdf0,	// (0x00061d6e) popup_char_count_window_g

0x91f6,	// (0x0005b174) popup_char_count_window_t1

0x1a20,	// (0x0005399e) popup_fep_char_preview_window_ParamLimits

0x1a20,	// (0x0005399e) popup_fep_char_preview_window

0xc144,	// (0x0005e0c2) vkb2_top_candi_pane_ParamLimits

0xc144,	// (0x0005e0c2) vkb2_top_candi_pane

0xea54,	// (0x000609d2) cell_vkb2_top_candi_pane_ParamLimits

0xea54,	// (0x000609d2) cell_vkb2_top_candi_pane

0x1f97,	// (0x00053f15) bg_popup_fep_char_preview_window_ParamLimits

0x1f97,	// (0x00053f15) bg_popup_fep_char_preview_window

0x1fa5,	// (0x00053f23) popup_fep_char_preview_window_t1_ParamLimits

0x1fa5,	// (0x00053f23) popup_fep_char_preview_window_t1

0x9255,	// (0x0005b1d3) bg_popup_fep_char_preview_window_g1

0x925d,	// (0x0005b1db) bg_popup_fep_char_preview_window_g2

0x9265,	// (0x0005b1e3) bg_popup_fep_char_preview_window_g3

0x926d,	// (0x0005b1eb) bg_popup_fep_char_preview_window_g4

0x9275,	// (0x0005b1f3) bg_popup_fep_char_preview_window_g5

0x1fdf,	// (0x00053f5d) bg_popup_fep_char_preview_window_g6

0x927d,	// (0x0005b1fb) bg_popup_fep_char_preview_window_g7

0x9285,	// (0x0005b203) bg_popup_fep_char_preview_window_g8

0x928d,	// (0x0005b20b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf7,	// (0x00061d75) bg_popup_fep_char_preview_window_g

0x14ac,	// (0x0005342a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x14ac,	// (0x0005342a) cell_vkb2_top_candi_pane_g1

0x14ba,	// (0x00053438) cell_vkb2_top_candi_pane_g2_ParamLimits

0x14ba,	// (0x00053438) cell_vkb2_top_candi_pane_g2

0x855c,	// (0x0005a4da) cell_vkb2_top_candi_pane_g3_ParamLimits

0x855c,	// (0x0005a4da) cell_vkb2_top_candi_pane_g3

0x1fe7,	// (0x00053f65) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1fe7,	// (0x00053f65) cell_vkb2_top_candi_pane_g4

0x769d,	// (0x0005961b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x769d,	// (0x0005961b) cell_vkb2_top_candi_pane_g5

0x2008,	// (0x00053f86) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2008,	// (0x00053f86) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0a,	// (0x00061d88) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0a,	// (0x00061d88) cell_vkb2_top_candi_pane_g

0x2016,	// (0x00053f94) cell_vkb2_top_candi_pane_t1

0x0e52,	// (0x00052dd0) aid_size_touch_slider_mark_ParamLimits

0x0e52,	// (0x00052dd0) aid_size_touch_slider_mark

0xe7ce,	// (0x0006074c) grid_graphic2_catg_pane_ParamLimits

0xe7ce,	// (0x0006074c) grid_graphic2_catg_pane

0xe864,	// (0x000607e2) popup_grid_graphic2_window_t1_ParamLimits

0xe864,	// (0x000607e2) popup_grid_graphic2_window_t1

0xe87a,	// (0x000607f8) popup_grid_graphic2_window_t2_ParamLimits

0xe87a,	// (0x000607f8) popup_grid_graphic2_window_t2

0x0001,

0xfdc5,	// (0x00061d43) popup_grid_graphic2_window_t_ParamLimits

0xfdc5,	// (0x00061d43) popup_grid_graphic2_window_t

0x2b7c,	// (0x00054afa) bg_button_pane_cp05_ParamLimits

0xe9e5,	// (0x00060963) cell_graphic2_control_pane_g1_ParamLimits

0xeaa8,	// (0x00060a26) cell_graphic2_catg_pane_ParamLimits

0xeaa8,	// (0x00060a26) cell_graphic2_catg_pane

0xd1c2,	// (0x0005f140) bg_button_pane_cp12

0xeaba,	// (0x00060a38) cell_graphic2_catg_pane_g1

0x8850,	// (0x0005a7ce) cell_tb_ext_pane_t1_ParamLimits

0x1db3,	// (0x00053d31) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1db3,	// (0x00053d31) vkb2_top_cell_right_narrow_pane

0x1dcb,	// (0x00053d49) vkb2_top_cell_right_wide_pane_ParamLimits

0x1dcb,	// (0x00053d49) vkb2_top_cell_right_wide_pane

0x1231,	// (0x000531af) bg_vkb2_func_pane_ParamLimits

0x1231,	// (0x000531af) bg_vkb2_func_pane

0x1e3c,	// (0x00053dba) vkb2_top_cell_left_pane_g1_ParamLimits

0x1231,	// (0x000531af) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1231,	// (0x000531af) bg_vkb2_fuc_pane_cp03

0x1eb0,	// (0x00053e2e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4876,	// (0x000567f4) bg_vkb2_func_pane_g1

0x487e,	// (0x000567fc) bg_vkb2_func_pane_g2

0x488e,	// (0x0005680c) bg_vkb2_func_pane_g3

0x4886,	// (0x00056804) bg_vkb2_func_pane_g4

0x4896,	// (0x00056814) bg_vkb2_func_pane_g5

0x489e,	// (0x0005681c) bg_vkb2_func_pane_g6

0x48a6,	// (0x00056824) bg_vkb2_func_pane_g7

0x48ae,	// (0x0005682c) bg_vkb2_func_pane_g8

0x486e,	// (0x000567ec) bg_vkb2_func_pane_g9

0x0008,

0xfe17,	// (0x00061d95) bg_vkb2_func_pane_g

0x1231,	// (0x000531af) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1231,	// (0x000531af) bg_vkb2_fuc_pane_cp01

0x1e3c,	// (0x00053dba) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1e3c,	// (0x00053dba) vkb2_top_cell_right_wide_pane_g1

0x1231,	// (0x000531af) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1231,	// (0x000531af) bg_vkb2_fuc_pane_cp02

0x1eb0,	// (0x00053e2e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1eb0,	// (0x00053e2e) vkb2_top_cell_right_narrow_pane_g1

0xe055,	// (0x0005ffd3) aid_touch_area_decrease_ParamLimits

0xe055,	// (0x0005ffd3) aid_touch_area_decrease

0xe08f,	// (0x0006000d) aid_touch_area_increase_ParamLimits

0xe08f,	// (0x0006000d) aid_touch_area_increase

0xe0b7,	// (0x00060035) aid_touch_area_mute_ParamLimits

0xe0b7,	// (0x00060035) aid_touch_area_mute

0xe0e7,	// (0x00060065) aid_touch_area_slider_ParamLimits

0xe0e7,	// (0x00060065) aid_touch_area_slider

0xe127,	// (0x000600a5) popup_slider_window_g4_ParamLimits

0xe127,	// (0x000600a5) popup_slider_window_g4

0xe14f,	// (0x000600cd) popup_slider_window_g5_ParamLimits

0xe14f,	// (0x000600cd) popup_slider_window_g5

0xe183,	// (0x00060101) popup_slider_window_g6_ParamLimits

0xe183,	// (0x00060101) popup_slider_window_g6

0x8623,	// (0x0005a5a1) popup_slider_window_t2_ParamLimits

0x8623,	// (0x0005a5a1) popup_slider_window_t2

0x0001,

0xfd13,	// (0x00061c91) popup_slider_window_t_ParamLimits

0xfd13,	// (0x00061c91) popup_slider_window_t

0xe19f,	// (0x0006011d) slider_pane_ParamLimits

0xe19f,	// (0x0006011d) slider_pane

0x92b0,	// (0x0005b22e) slider_pane_g1_ParamLimits

0x92b0,	// (0x0005b22e) slider_pane_g1

0x92c4,	// (0x0005b242) slider_pane_g2_ParamLimits

0x92c4,	// (0x0005b242) slider_pane_g2

0x92da,	// (0x0005b258) slider_pane_g3_ParamLimits

0x92da,	// (0x0005b258) slider_pane_g3

0x0003,

0xfe2a,	// (0x00061da8) slider_pane_g_ParamLimits

0xfe2a,	// (0x00061da8) slider_pane_g

0xcd68,	// (0x0005ece6) popup_tb_float_extension_window_ParamLimits

0xcd68,	// (0x0005ece6) popup_tb_float_extension_window

0x9306,	// (0x0005b284) aid_size_cell_tb_float_ext

0xd1c2,	// (0x0005f140) bg_popup_sub_window_cp28

0x9312,	// (0x0005b290) grid_tb_float_ext_pane

0x931e,	// (0x0005b29c) cell_tb_float_ext_pane_ParamLimits

0x931e,	// (0x0005b29c) cell_tb_float_ext_pane

0x933a,	// (0x0005b2b8) cell_tb_float_ext_pane_g1

0x9343,	// (0x0005b2c1) grid_highlight_pane_cp12

0xbdea,	// (0x0005dd68) cell_last_hwr_side_pane_ParamLimits

0xbdea,	// (0x0005dd68) cell_last_hwr_side_pane

0x6f14,	// (0x00058e92) cell_last_hwr_side_pane_g1

0x934c,	// (0x0005b2ca) cell_last_hwr_side_pane_g2

0x0001,

0xfe33,	// (0x00061db1) cell_last_hwr_side_pane_g

0xc2ab,	// (0x0005e229) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc2ab,	// (0x0005e229) vkb2_area_bottom_space_btn_pane

0x14ac,	// (0x0005342a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8e60,	// (0x0005adde) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2016,	// (0x00053f94) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2034,	// (0x00053fb2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2034,	// (0x00053fb2) vkb2_area_bottom_space_btn_pane_g1

0x206e,	// (0x00053fec) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x206e,	// (0x00053fec) vkb2_area_bottom_space_btn_pane_g2

0x20a4,	// (0x00054022) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x20a4,	// (0x00054022) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe38,	// (0x00061db6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe38,	// (0x00061db6) vkb2_area_bottom_space_btn_pane_g

0x12f6,	// (0x00053274) cel_fep_hwr_func_pane_ParamLimits

0x12f6,	// (0x00053274) cel_fep_hwr_func_pane

0xbdbf,	// (0x0005dd3d) cell_hwr_side_button_pane_ParamLimits

0xbdbf,	// (0x0005dd3d) cell_hwr_side_button_pane

0x8884,	// (0x0005a802) aid_area_touch_clock_ParamLimits

0x24df,	// (0x0005445d) bg_uniindi_top_pane_ParamLimits

0x8898,	// (0x0005a816) uniindi_top_pane_g1_ParamLimits

0x88ae,	// (0x0005a82c) uniindi_top_pane_g2_ParamLimits

0x88ba,	// (0x0005a838) uniindi_top_pane_g3_ParamLimits

0x88cb,	// (0x0005a849) uniindi_top_pane_g4_ParamLimits

0xfd4b,	// (0x00061cc9) uniindi_top_pane_g_ParamLimits

0x88d8,	// (0x0005a856) uniindi_top_pane_t1_ParamLimits

0x24df,	// (0x0005445d) bg_vkb2_func_pane_cp01_ParamLimits

0x24df,	// (0x0005445d) bg_vkb2_func_pane_cp01

0x9355,	// (0x0005b2d3) cel_fep_hwr_func_pane_g1_ParamLimits

0x9355,	// (0x0005b2d3) cel_fep_hwr_func_pane_g1

0x24df,	// (0x0005445d) bg_vkb2_func_pane_cp02_ParamLimits

0x24df,	// (0x0005445d) bg_vkb2_func_pane_cp02

0x9355,	// (0x0005b2d3) cell_hwr_side_button_pane_g1_ParamLimits

0x9355,	// (0x0005b2d3) cell_hwr_side_button_pane_g1

0x46ef,	// (0x0005666d) status_pane_g4_ParamLimits

0x46ef,	// (0x0005666d) status_pane_g4

0x4709,	// (0x00056687) status_pane_t1

0x6cb0,	// (0x00058c2e) form2_midp_gauge_slider_cont_pane

0x6cb8,	// (0x00058c36) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd9b2,	// (0x0005f930) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd9c4,	// (0x0005f942) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0b,	// (0x00061a89) form2_midp_gauge_slider_pane_t_ParamLimits

0x6cee,	// (0x00058c6c) form2_midp_slider_pane_ParamLimits

0x19e8,	// (0x00053966) aid_size_cell_func_vkb2_ParamLimits

0x19e8,	// (0x00053966) aid_size_cell_func_vkb2

0x92f2,	// (0x0005b270) slider_pane_g4_ParamLimits

0x92f2,	// (0x0005b270) slider_pane_g4

0xc30c,	// (0x0005e28a) form2_midp_gauge_slider_pane_t2_cp01

0xc31a,	// (0x0005e298) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc31a,	// (0x0005e298) form2_midp_gauge_slider_pane_t3_cp01

0x2119,	// (0x00054097) form2_midp_slider_pane_cp01

0xd1c2,	// (0x0005f140) navi_smil_pane

0x938e,	// (0x0005b30c) navi_smil_pane_g1

0x9396,	// (0x0005b314) navi_smil_pane_t1

0x9363,	// (0x0005b2e1) form2_midp_slider_pane_g1

0x936c,	// (0x0005b2ea) form2_midp_slider_pane_g2

0x9374,	// (0x0005b2f2) form2_midp_slider_pane_g3

0x9363,	// (0x0005b2e1) form2_midp_slider_pane_g4

0xeac3,	// (0x00060a41) form2_midp_slider_pane_g5

0x0004,

0xfe41,	// (0x00061dbf) form2_midp_slider_pane_g

0x20de,	// (0x0005405c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x20de,	// (0x0005405c) vkb2_area_bottom_space_btn_pane_g4

0xcf48,	// (0x0005eec6) lc0_navi_pane_ParamLimits

0xcf48,	// (0x0005eec6) lc0_navi_pane

0xcfb8,	// (0x0005ef36) lc0_stat_indi_pane_ParamLimits

0xcfb8,	// (0x0005ef36) lc0_stat_indi_pane

0xcfcd,	// (0x0005ef4b) ls0_title_pane_ParamLimits

0xcfcd,	// (0x0005ef4b) ls0_title_pane

0x2b7c,	// (0x00054afa) bg_popup_sub_pane_cp14_ParamLimits

0x886b,	// (0x0005a7e9) list_uniindi_pane_ParamLimits

0x8877,	// (0x0005a7f5) uniindi_top_pane_ParamLimits

0x8916,	// (0x0005a894) list_single_uniindi_pane_g1_ParamLimits

0x8929,	// (0x0005a8a7) list_single_uniindi_pane_t1_ParamLimits

0xc337,	// (0x0005e2b5) lc0_stat_clock_pane_ParamLimits

0xc337,	// (0x0005e2b5) lc0_stat_clock_pane

0xeacc,	// (0x00060a4a) lc0_stat_indi_pane_g1_ParamLimits

0xeacc,	// (0x00060a4a) lc0_stat_indi_pane_g1

0xead9,	// (0x00060a57) lc0_stat_indi_pane_g2_ParamLimits

0xead9,	// (0x00060a57) lc0_stat_indi_pane_g2

0x0001,

0xfe4c,	// (0x00061dca) lc0_stat_indi_pane_g_ParamLimits

0xfe4c,	// (0x00061dca) lc0_stat_indi_pane_g

0xc344,	// (0x0005e2c2) lc0_uni_indicator_pane_ParamLimits

0xc344,	// (0x0005e2c2) lc0_uni_indicator_pane

0xeae6,	// (0x00060a64) ls0_title_pane_g1_ParamLimits

0xeae6,	// (0x00060a64) ls0_title_pane_g1

0xeafa,	// (0x00060a78) ls0_title_pane_t1_ParamLimits

0xeafa,	// (0x00060a78) ls0_title_pane_t1

0xc351,	// (0x0005e2cf) lc0_uni_indicator_pane_g1_ParamLimits

0xc351,	// (0x0005e2cf) lc0_uni_indicator_pane_g1

0x9408,	// (0x0005b386) lc0_stat_clock_pane_t1

0xd1c2,	// (0x0005f140) main_ai5_pane

0x9416,	// (0x0005b394) ai5_sk_pane_ParamLimits

0x9416,	// (0x0005b394) ai5_sk_pane

0xeb28,	// (0x00060aa6) cell_ai5_widget_pane_ParamLimits

0xeb28,	// (0x00060aa6) cell_ai5_widget_pane

0x9499,	// (0x0005b417) aid_size_cell_widget_grid

0x94ad,	// (0x0005b42b) bg_ai5_widget_pane_ParamLimits

0x94ad,	// (0x0005b42b) bg_ai5_widget_pane

0xebb5,	// (0x00060b33) cell_ai5_widget_pane_g2

0xebc5,	// (0x00060b43) cell_ai5_widget_pane_g3

0xebe4,	// (0x00060b62) cell_ai5_widget_pane_g4

0xebf0,	// (0x00060b6e) cell_ai5_widget_pane_g5

0xebfc,	// (0x00060b7a) cell_ai5_widget_pane_g6

0xec08,	// (0x00060b86) cell_ai5_widget_pane_g7

0xec50,	// (0x00060bce) cell_ai5_widget_pane_t1_ParamLimits

0xec50,	// (0x00060bce) cell_ai5_widget_pane_t1

0xec6d,	// (0x00060beb) cell_ai5_widget_pane_t2_ParamLimits

0xec6d,	// (0x00060beb) cell_ai5_widget_pane_t2

0xec85,	// (0x00060c03) cell_ai5_widget_pane_t3_ParamLimits

0xec85,	// (0x00060c03) cell_ai5_widget_pane_t3

0xec9d,	// (0x00060c1b) cell_ai5_widget_pane_t4_ParamLimits

0xec9d,	// (0x00060c1b) cell_ai5_widget_pane_t4

0xecb7,	// (0x00060c35) cell_ai5_widget_pane_t5_ParamLimits

0xecb7,	// (0x00060c35) cell_ai5_widget_pane_t5

0x95f8,	// (0x0005b576) cell_ai5_widget_pane_t6_ParamLimits

0x95f8,	// (0x0005b576) cell_ai5_widget_pane_t6

0x960a,	// (0x0005b588) cell_ai5_widget_pane_t7_ParamLimits

0x960a,	// (0x0005b588) cell_ai5_widget_pane_t7

0xecd6,	// (0x00060c54) cell_ai5_widget_pane_t8_ParamLimits

0xecd6,	// (0x00060c54) cell_ai5_widget_pane_t8

0x0009,

0xfe66,	// (0x00061de4) cell_ai5_widget_pane_t_ParamLimits

0xfe66,	// (0x00061de4) cell_ai5_widget_pane_t

0xed22,	// (0x00060ca0) grid_ai5_widget_pane

0x2b7c,	// (0x00054afa) highlight_cell_ai5_widget_pane_ParamLimits

0x2b7c,	// (0x00054afa) highlight_cell_ai5_widget_pane

0xed39,	// (0x00060cb7) ai5_sk_left_pane

0xed43,	// (0x00060cc1) ai5_sk_middle_pane

0xed4d,	// (0x00060ccb) ai5_sk_right_pane

0x96a4,	// (0x0005b622) bg_ai5_widget_pane_g1_ParamLimits

0x96a4,	// (0x0005b622) bg_ai5_widget_pane_g1

0x96b0,	// (0x0005b62e) bg_ai5_widget_pane_g2_ParamLimits

0x96b0,	// (0x0005b62e) bg_ai5_widget_pane_g2

0x96bc,	// (0x0005b63a) bg_ai5_widget_pane_g3_ParamLimits

0x96bc,	// (0x0005b63a) bg_ai5_widget_pane_g3

0x96c8,	// (0x0005b646) bg_ai5_widget_pane_g4_ParamLimits

0x96c8,	// (0x0005b646) bg_ai5_widget_pane_g4

0x96d4,	// (0x0005b652) bg_ai5_widget_pane_g5_ParamLimits

0x96d4,	// (0x0005b652) bg_ai5_widget_pane_g5

0x96e0,	// (0x0005b65e) bg_ai5_widget_pane_g6_ParamLimits

0x96e0,	// (0x0005b65e) bg_ai5_widget_pane_g6

0x96ec,	// (0x0005b66a) bg_ai5_widget_pane_g7_ParamLimits

0x96ec,	// (0x0005b66a) bg_ai5_widget_pane_g7

0x96f8,	// (0x0005b676) bg_ai5_widget_pane_g8_ParamLimits

0x96f8,	// (0x0005b676) bg_ai5_widget_pane_g8

0x9704,	// (0x0005b682) bg_ai5_widget_pane_g9_ParamLimits

0x9704,	// (0x0005b682) bg_ai5_widget_pane_g9

0x0008,

0xfe7b,	// (0x00061df9) bg_ai5_widget_pane_g_ParamLimits

0xfe7b,	// (0x00061df9) bg_ai5_widget_pane_g

0x972b,	// (0x0005b6a9) cell_shortcut_ai5_widget_pane_ParamLimits

0x972b,	// (0x0005b6a9) cell_shortcut_ai5_widget_pane

0x2321,	// (0x0005429f) bg_cell_shortcut_ai5_widget_pane

0x973d,	// (0x0005b6bb) cell_grid_ai5_widget_pane_g1

0x9746,	// (0x0005b6c4) highlight_cell_shortcut_ai5_widget_pane

0x4876,	// (0x000567f4) ai5_sk_left_pane_g1

0x974e,	// (0x0005b6cc) ai5_sk_left_pane_g2

0x9756,	// (0x0005b6d4) ai5_sk_left_pane_g3

0x975e,	// (0x0005b6dc) ai5_sk_left_pane_g4

0x0003,

0xfe8e,	// (0x00061e0c) ai5_sk_left_pane_g

0x9766,	// (0x0005b6e4) ai5_sk_left_pane_t1

0x487e,	// (0x000567fc) ai5_sk_right_pane_g1

0x9774,	// (0x0005b6f2) ai5_sk_right_pane_g2

0x977c,	// (0x0005b6fa) ai5_sk_right_pane_g3

0x9784,	// (0x0005b702) ai5_sk_right_pane_g4

0x0003,

0xfe97,	// (0x00061e15) ai5_sk_right_pane_g

0x978c,	// (0x0005b70a) ai5_sk_right_pane_t1

0x487e,	// (0x000567fc) ai5_sk_middle_pane_g1

0x4876,	// (0x000567f4) ai5_sk_middle_pane_g2

0x4896,	// (0x00056814) ai5_sk_middle_pane_g3

0x977c,	// (0x0005b6fa) ai5_sk_middle_pane_g4

0x9756,	// (0x0005b6d4) ai5_sk_middle_pane_g5

0x979a,	// (0x0005b718) ai5_sk_middle_pane_g6

0xed57,	// (0x00060cd5) ai5_sk_middle_pane_g7

0x0006,

0xfea0,	// (0x00061e1e) ai5_sk_middle_pane_g

0xce32,	// (0x0005edb0) aid_touch_area_size_lc0_ParamLimits

0xce32,	// (0x0005edb0) aid_touch_area_size_lc0

0x14db,	// (0x00053459) cell_hwr_candidate_pane_t1_ParamLimits

0x43a7,	// (0x00056325) aid_touch_navi_pane

0xd0d7,	// (0x0005f055) status_dt_navi_pane_ParamLimits

0xd0d7,	// (0x0005f055) status_dt_navi_pane

0xd0ef,	// (0x0005f06d) status_dt_sta_pane_ParamLimits

0xd0ef,	// (0x0005f06d) status_dt_sta_pane

0xed5f,	// (0x00060cdd) dt_sta_controll_pane

0xed6c,	// (0x00060cea) dt_sta_indi_pane

0xed79,	// (0x00060cf7) dt_sta_title_pane

0x24df,	// (0x0005445d) bg_dt_sta_indi_pane_ParamLimits

0x24df,	// (0x0005445d) bg_dt_sta_indi_pane

0xed8b,	// (0x00060d09) dt_sta_battery_pane

0xed93,	// (0x00060d11) dt_sta_indi_pane_g1

0xed9c,	// (0x00060d1a) dt_sta_indi_pane_g2

0xeda5,	// (0x00060d23) dt_sta_indi_pane_g3

0x0002,

0xfeaf,	// (0x00061e2d) dt_sta_indi_pane_g

0xedae,	// (0x00060d2c) dt_sta_signal_pane

0x2b7c,	// (0x00054afa) bg_dt_sta_title_pane_ParamLimits

0x2b7c,	// (0x00054afa) bg_dt_sta_title_pane

0xedb7,	// (0x00060d35) dt_sta_title_pane_g1

0xedbf,	// (0x00060d3d) dt_sta_title_pane_t1_ParamLimits

0xedbf,	// (0x00060d3d) dt_sta_title_pane_t1

0xd1c2,	// (0x0005f140) bg_dt_sta_control_pane

0xedd4,	// (0x00060d52) dt_sta_controll_pane_g1

0xeddd,	// (0x00060d5b) bg_dt_sta_title_pane_g1

0xede6,	// (0x00060d64) bg_dt_sta_title_pane_g2

0xedef,	// (0x00060d6d) bg_dt_sta_title_pane_g3

0x0002,

0xfeb6,	// (0x00061e34) bg_dt_sta_title_pane_g

0x6f14,	// (0x00058e92) bg_dt_sta_indi_pane_g1

0x9848,	// (0x0005b7c6) dt_sta_signal_pane_g1

0x9850,	// (0x0005b7ce) dt_sta_signal_pane_g2

0x0001,

0xfebd,	// (0x00061e3b) dt_sta_signal_pane_g

0x9858,	// (0x0005b7d6) dt_sta_battery_pane_g1

0x9861,	// (0x0005b7df) dt_sta_battery_pane_t1

0x6f14,	// (0x00058e92) bg_dt_sta_control_pane_g1

0x34a6,	// (0x00055424) fep_china_uni_eep_pane

0x34ae,	// (0x0005542c) fep_china_uni_entry_pane_ParamLimits

0x34be,	// (0x0005543c) popup_fep_china_uni_window_g1_ParamLimits

0x34ce,	// (0x0005544c) popup_fep_china_uni_window_g2_ParamLimits

0x34ce,	// (0x0005544c) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x000616b8) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x000616b8) popup_fep_china_uni_window_g

0x9870,	// (0x0005b7ee) fep_china_uni_eep_pane_g1

0x9878,	// (0x0005b7f6) fep_china_uni_eep_pane_t1

0x9385,	// (0x0005b303) aid_touch_area_size_smil_player

0x44ff,	// (0x0005647d) lc0_clock_pane

0x46fd,	// (0x0005667b) status_pane_g5_ParamLimits

0x46fd,	// (0x0005667b) status_pane_g5

0xc892,	// (0x0005e810) popup_keymap_window

0x46bb,	// (0x00056639) status_icon_pane

0xebc5,	// (0x00060b43) cell_ai5_widget_pane_g3_ParamLimits

0xebe4,	// (0x00060b62) cell_ai5_widget_pane_g4_ParamLimits

0xebf0,	// (0x00060b6e) cell_ai5_widget_pane_g5_ParamLimits

0xec14,	// (0x00060b92) cell_ai5_widget_pane_g8_ParamLimits

0xec14,	// (0x00060b92) cell_ai5_widget_pane_g8

0xec28,	// (0x00060ba6) cell_ai5_widget_pane_g9_ParamLimits

0xec28,	// (0x00060ba6) cell_ai5_widget_pane_g9

0xec3c,	// (0x00060bba) cell_ai5_widget_pane_g10_ParamLimits

0xec3c,	// (0x00060bba) cell_ai5_widget_pane_g10

0x9887,	// (0x0005b805) status_icon_pane_g1

0xd1c2,	// (0x0005f140) bg_popup_sub_pane_cp13

0x988f,	// (0x0005b80d) popup_keymap_window_t1

0xc682,	// (0x0005e600) control_pane_g6_ParamLimits

0xc682,	// (0x0005e600) control_pane_g6

0xc68f,	// (0x0005e60d) control_pane_g7_ParamLimits

0xc68f,	// (0x0005e60d) control_pane_g7

0xc69c,	// (0x0005e61a) control_pane_g8_ParamLimits

0xc69c,	// (0x0005e61a) control_pane_g8

0xed5f,	// (0x00060cdd) dt_sta_controll_pane_ParamLimits

0xed6c,	// (0x00060cea) dt_sta_indi_pane_ParamLimits

0xed79,	// (0x00060cf7) dt_sta_title_pane_ParamLimits

0x2a14,	// (0x00054992) aid_size_touch_scroll_bar_cale

0xf431,	// (0x000613af) popup_discreet_window_ParamLimits

0xf431,	// (0x000613af) popup_discreet_window

0xaedd,	// (0x0005ce5b) popup_sk_window

0x4f14,	// (0x00056e92) bg_popup_sub_pane_cp28_ParamLimits

0x4f14,	// (0x00056e92) bg_popup_sub_pane_cp28

0x989d,	// (0x0005b81b) popup_discreet_window_g1_ParamLimits

0x989d,	// (0x0005b81b) popup_discreet_window_g1

0x98bd,	// (0x0005b83b) popup_discreet_window_t1_ParamLimits

0x98bd,	// (0x0005b83b) popup_discreet_window_t1

0x98db,	// (0x0005b859) popup_discreet_window_t2_ParamLimits

0x98db,	// (0x0005b859) popup_discreet_window_t2

0x0002,

0xfec2,	// (0x00061e40) popup_discreet_window_t_ParamLimits

0xfec2,	// (0x00061e40) popup_discreet_window_t

0x214f,	// (0x000540cd) popup_sk_window_g1

0x2159,	// (0x000540d7) popup_sk_window_g2

0x0001,

0xfec9,	// (0x00061e47) popup_sk_window_g

0x992d,	// (0x0005b8ab) popup_sk_window_t1

0x993b,	// (0x0005b8b9) popup_sk_window_t1_copy1

0xebb5,	// (0x00060b33) cell_ai5_widget_pane_g2_ParamLimits

0xece8,	// (0x00060c66) cell_ai5_widget_pane_t9_ParamLimits

0xece8,	// (0x00060c66) cell_ai5_widget_pane_t9

0xd1c2,	// (0x0005f140) main_fep_fshwr2_pane

0xedf8,	// (0x00060d76) aid_fshwr2_btn_pane

0xee00,	// (0x00060d7e) aid_fshwr2_syb_pane

0xee08,	// (0x00060d86) aid_fshwr2_txt_pane

0xee10,	// (0x00060d8e) fshwr2_func_candi_pane

0xee1a,	// (0x00060d98) fshwr2_hwr_syb_pane

0xee26,	// (0x00060da4) fshwr2_icf_pane

0xd1c2,	// (0x0005f140) fshwr2_icf_bg_pane

0xee30,	// (0x00060dae) fshwr2_icf_pane_t1_ParamLimits

0xee30,	// (0x00060dae) fshwr2_icf_pane_t1

0x6f14,	// (0x00058e92) fshwr2_func_candi_pane_g1

0x99ae,	// (0x0005b92c) fshwr2_func_candi_row_pane_ParamLimits

0x99ae,	// (0x0005b92c) fshwr2_func_candi_row_pane

0xef03,	// (0x00060e81) cell_fshwr2_syb_pane_ParamLimits

0xef03,	// (0x00060e81) cell_fshwr2_syb_pane

0x719e,	// (0x0005911c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x719e,	// (0x0005911c) fshwr2_hwr_syb_pane_g1

0xd1c2,	// (0x0005f140) bg_popup_call_pane_cp01

0x99d9,	// (0x0005b957) fshwr2_func_candi_cell_pane_ParamLimits

0x99d9,	// (0x0005b957) fshwr2_func_candi_cell_pane

0x9a0b,	// (0x0005b989) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9a0b,	// (0x0005b989) fshwr2_func_candi_cell_bg_pane

0x9a25,	// (0x0005b9a3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9a25,	// (0x0005b9a3) fshwr2_func_candi_cell_pane_g1

0x9a45,	// (0x0005b9c3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9a45,	// (0x0005b9c3) fshwr2_func_candi_cell_pane_t1

0xd1c2,	// (0x0005f140) bg_button_pane_cp08

0x39a8,	// (0x00055926) cell_fshwr2_syb_bg_pane

0xef1c,	// (0x00060e9a) cell_fshwr2_syb_bg_pane_g1

0xef24,	// (0x00060ea2) cell_fshwr2_syb_bg_pane_t1

0x2b7c,	// (0x00054afa) main_tmo_pane

0xd4cd,	// (0x0005f44b) uni_indicator_pane_g1_ParamLimits

0xd4e2,	// (0x0005f460) uni_indicator_pane_g2_ParamLimits

0xd4f7,	// (0x0005f475) uni_indicator_pane_g3_ParamLimits

0xd50d,	// (0x0005f48b) uni_indicator_pane_g4_ParamLimits

0xd50d,	// (0x0005f48b) uni_indicator_pane_g4

0xd521,	// (0x0005f49f) uni_indicator_pane_g5_ParamLimits

0xd521,	// (0x0005f49f) uni_indicator_pane_g5

0xd535,	// (0x0005f4b3) uni_indicator_pane_g6_ParamLimits

0xd535,	// (0x0005f4b3) uni_indicator_pane_g6

0xf932,	// (0x000618b0) uni_indicator_pane_g_ParamLimits

0xe025,	// (0x0005ffa3) popup_tmo_note_window_ParamLimits

0xe025,	// (0x0005ffa3) popup_tmo_note_window

0xd1c2,	// (0x0005f140) fshwr2_bg_pane

0x9a36,	// (0x0005b9b4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9a36,	// (0x0005b9b4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfece,	// (0x00061e4c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfece,	// (0x00061e4c) fshwr2_func_candi_cell_pane_g

0x6f14,	// (0x00058e92) bg_popup_window_pane_cp01

0x9a6f,	// (0x0005b9ed) bg_popup_window_pane_g1_cp01

0x9a78,	// (0x0005b9f6) bg_popup_window_pane_cp22_ParamLimits

0x9a78,	// (0x0005b9f6) bg_popup_window_pane_cp22

0x9a86,	// (0x0005ba04) listscroll_tmo_link_pane_ParamLimits

0x9a86,	// (0x0005ba04) listscroll_tmo_link_pane

0x9ac6,	// (0x0005ba44) popup_tmo_note_window_g1_ParamLimits

0x9ac6,	// (0x0005ba44) popup_tmo_note_window_g1

0x9ad3,	// (0x0005ba51) tmo_note_info_pane_ParamLimits

0x9ad3,	// (0x0005ba51) tmo_note_info_pane

0xef33,	// (0x00060eb1) list_tmo_note_info_pane_g1_ParamLimits

0xef33,	// (0x00060eb1) list_tmo_note_info_pane_g1

0x9b04,	// (0x0005ba82) list_tmo_note_info_pane_g2_ParamLimits

0x9b04,	// (0x0005ba82) list_tmo_note_info_pane_g2

0x0001,

0xfed3,	// (0x00061e51) list_tmo_note_info_pane_g_ParamLimits

0xfed3,	// (0x00061e51) list_tmo_note_info_pane_g

0x9b20,	// (0x0005ba9e) list_tmo_note_info_text_pane_ParamLimits

0x9b20,	// (0x0005ba9e) list_tmo_note_info_text_pane

0x9ba5,	// (0x0005bb23) list_tmo_link_pane

0x9bb2,	// (0x0005bb30) scroll_pane_cp20

0x9bbf,	// (0x0005bb3d) list_single_tmo_link_pane_ParamLimits

0x9bbf,	// (0x0005bb3d) list_single_tmo_link_pane

0x9bcf,	// (0x0005bb4d) list_single_tmo_link_pane_t1

0x9bdd,	// (0x0005bb5b) list_tmo_note_info_text_pane_t1_ParamLimits

0x9bdd,	// (0x0005bb5b) list_tmo_note_info_text_pane_t1

0xb903,	// (0x0005d881) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb903,	// (0x0005d881) aid_size_touch_scroll_bar_cp01

0xb832,	// (0x0005d7b0) aid_size_touch_slider_marker

0xaecd,	// (0x0005ce4b) popup_settings_window_ParamLimits

0xaecd,	// (0x0005ce4b) popup_settings_window

0x0a8f,	// (0x00052a0d) popup_candi_list_indi_window

0x43a7,	// (0x00056325) aid_touch_navi_pane_ParamLimits

0x191f,	// (0x0005389d) rs_clock_indi_pane

0x1928,	// (0x000538a6) sctrl_sk_bottom_pane_ParamLimits

0x1939,	// (0x000538b7) sctrl_sk_top_pane_ParamLimits

0x1a3a,	// (0x000539b8) popup_fep_tooltip_window

0x9499,	// (0x0005b417) aid_size_cell_widget_grid_ParamLimits

0xeba9,	// (0x00060b27) cell_ai5_widget_pane_g1_ParamLimits

0xeba9,	// (0x00060b27) cell_ai5_widget_pane_g1

0xebfc,	// (0x00060b7a) cell_ai5_widget_pane_g6_ParamLimits

0xec08,	// (0x00060b86) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe51,	// (0x00061dcf) cell_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x00061dcf) cell_ai5_widget_pane_g

0xed0c,	// (0x00060c8a) cell_ai5_widget_pane_t10_ParamLimits

0xed0c,	// (0x00060c8a) cell_ai5_widget_pane_t10

0xed22,	// (0x00060ca0) grid_ai5_widget_pane_ParamLimits

0x9710,	// (0x0005b68e) cell_contacts_ai5_widget_pane_ParamLimits

0x9710,	// (0x0005b68e) cell_contacts_ai5_widget_pane

0x98f0,	// (0x0005b86e) popup_discreet_window_t3_ParamLimits

0x98f0,	// (0x0005b86e) popup_discreet_window_t3

0x997f,	// (0x0005b8fd) popup_fshwr2_char_preview_window_ParamLimits

0x997f,	// (0x0005b8fd) popup_fshwr2_char_preview_window

0xef4a,	// (0x00060ec8) tmo_note_info_pane_t1

0xef5f,	// (0x00060edd) tmo_note_info_pane_t2

0xef78,	// (0x00060ef6) tmo_note_info_pane_t3

0x9b81,	// (0x0005baff) tmo_note_info_pane_t4

0x9b93,	// (0x0005bb11) tmo_note_info_pane_t5

0x0004,

0xfed8,	// (0x00061e56) tmo_note_info_pane_t

0x9ba5,	// (0x0005bb23) list_tmo_link_pane_ParamLimits

0x9bb2,	// (0x0005bb30) scroll_pane_cp20_ParamLimits

0xd1c2,	// (0x0005f140) bg_popup_fep_char_preview_window_cp01

0x9bf6,	// (0x0005bb74) popup_fshwr2_char_preview_window_t1

0x9c04,	// (0x0005bb82) popup_candi_list_indi_window_g1

0x9c0d,	// (0x0005bb8b) bg_cell_contacts_ai5_widget_pane

0x9c19,	// (0x0005bb97) cell_contacts_ai5_widget_pane_g1

0x9c2d,	// (0x0005bbab) cell_contacts_ai5_widget_pane_g2

0x9c3c,	// (0x0005bbba) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee3,	// (0x00061e61) cell_contacts_ai5_widget_pane_g

0x9c4f,	// (0x0005bbcd) cell_contacts_ai5_widget_pane_t1

0x2b7c,	// (0x00054afa) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff2,	// (0x00060f70) settings_container_pane

0x39a8,	// (0x00055926) listscroll_set_pane_copy1

0x6618,	// (0x00058596) scroll_pane_cp121_copy1

0x9cd5,	// (0x0005bc53) set_content_pane_copy1

0xeffe,	// (0x00060f7c) aid_height_set_list_copy1_ParamLimits

0xeffe,	// (0x00060f7c) aid_height_set_list_copy1

0x5ca7,	// (0x00057c25) aid_size_parent_copy1_ParamLimits

0x5ca7,	// (0x00057c25) aid_size_parent_copy1

0xf00a,	// (0x00060f88) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf00a,	// (0x00060f88) button_value_adjust_pane_cp6_copy1

0x3d26,	// (0x00055ca4) list_highlight_pane_cp2_copy1_ParamLimits

0x3d26,	// (0x00055ca4) list_highlight_pane_cp2_copy1

0xf01e,	// (0x00060f9c) list_set_pane_copy1_ParamLimits

0xf01e,	// (0x00060f9c) list_set_pane_copy1

0xef8d,	// (0x00060f0b) main_pane_set_t1_copy1_ParamLimits

0xef8d,	// (0x00060f0b) main_pane_set_t1_copy1

0xefc7,	// (0x00060f45) main_pane_set_t2_copy1_ParamLimits

0xefc7,	// (0x00060f45) main_pane_set_t2_copy1

0xf0e5,	// (0x00061063) main_pane_set_t3_copy1

0xf0f3,	// (0x00061071) main_pane_set_t4_copy1

0xefe6,	// (0x00060f64) set_content_pane_g1_copy1_ParamLimits

0xefe6,	// (0x00060f64) set_content_pane_g1_copy1

0xf101,	// (0x0006107f) setting_code_pane_copy1

0x9dea,	// (0x0005bd68) setting_slider_graphic_pane_copy1

0x9dea,	// (0x0005bd68) setting_slider_pane_copy1

0x9dea,	// (0x0005bd68) setting_text_pane_copy1

0x9df4,	// (0x0005bd72) setting_volume_pane_copy1

0xf10b,	// (0x00061089) settings_code_pane_cp2_copy1

0xf113,	// (0x00061091) settings_code_pane_cp_copy1_ParamLimits

0xf113,	// (0x00061091) settings_code_pane_cp_copy1

0xf127,	// (0x000610a5) volume_set_pane_copy1

0xf133,	// (0x000610b1) volume_set_pane_g10_copy1

0xf13f,	// (0x000610bd) volume_set_pane_g1_copy1

0xf149,	// (0x000610c7) volume_set_pane_g2_copy1

0xf153,	// (0x000610d1) volume_set_pane_g3_copy1

0xf15d,	// (0x000610db) volume_set_pane_g4_copy1

0xf167,	// (0x000610e5) volume_set_pane_g5_copy1

0xf171,	// (0x000610ef) volume_set_pane_g6_copy1

0xf17b,	// (0x000610f9) volume_set_pane_g7_copy1

0xf185,	// (0x00061103) volume_set_pane_g8_copy1

0xf18f,	// (0x0006110d) volume_set_pane_g9_copy1

0x2255,	// (0x000541d3) bg_set_opt_pane_cp_copy1_ParamLimits

0x2255,	// (0x000541d3) bg_set_opt_pane_cp_copy1

0x9e8b,	// (0x0005be09) setting_slider_pane_t1_copy1_ParamLimits

0x9e8b,	// (0x0005be09) setting_slider_pane_t1_copy1

0xf199,	// (0x00061117) setting_slider_pane_t2_copy1_ParamLimits

0xf199,	// (0x00061117) setting_slider_pane_t2_copy1

0xf1b3,	// (0x00061131) setting_slider_pane_t3_copy1_ParamLimits

0xf1b3,	// (0x00061131) setting_slider_pane_t3_copy1

0xf1cb,	// (0x00061149) slider_set_pane_copy1_ParamLimits

0xf1cb,	// (0x00061149) slider_set_pane_copy1

0x2be3,	// (0x00054b61) set_opt_bg_pane_g1_copy2

0x2beb,	// (0x00054b69) set_opt_bg_pane_g2_copy2

0x9ef1,	// (0x0005be6f) set_opt_bg_pane_g3_copy2

0x2bfb,	// (0x00054b79) set_opt_bg_pane_g4_copy2

0x2c03,	// (0x00054b81) set_opt_bg_pane_g5_copy2

0x2c0b,	// (0x00054b89) set_opt_bg_pane_g6_copy2

0xf1e1,	// (0x0006115f) set_opt_bg_pane_g7_copy2

0x9f05,	// (0x0005be83) set_opt_bg_pane_g8_copy2

0x9f0f,	// (0x0005be8d) set_opt_bg_pane_g9_copy2

0x9f19,	// (0x0005be97) aid_size_touch_slider_mark_copy1_ParamLimits

0x9f19,	// (0x0005be97) aid_size_touch_slider_mark_copy1

0x9f2d,	// (0x0005beab) slider_set_pane_g1_copy1

0x9f36,	// (0x0005beb4) slider_set_pane_g2_copy1

0x687a,	// (0x000587f8) slider_set_pane_g3_copy1_ParamLimits

0x687a,	// (0x000587f8) slider_set_pane_g3_copy1

0x688e,	// (0x0005880c) slider_set_pane_g4_copy1_ParamLimits

0x688e,	// (0x0005880c) slider_set_pane_g4_copy1

0x68a6,	// (0x00058824) slider_set_pane_g5_copy1_ParamLimits

0x68a6,	// (0x00058824) slider_set_pane_g5_copy1

0x687a,	// (0x000587f8) slider_set_pane_g6_copy1_ParamLimits

0x687a,	// (0x000587f8) slider_set_pane_g6_copy1

0xf1eb,	// (0x00061169) slider_set_pane_g7_copy1_ParamLimits

0xf1eb,	// (0x00061169) slider_set_pane_g7_copy1

0xd1d6,	// (0x0005f154) bg_set_opt_pane_cp2_copy1

0x9f54,	// (0x0005bed2) setting_slider_graphic_pane_g1_copy1

0xf201,	// (0x0006117f) setting_slider_graphic_pane_t1_copy1

0xf211,	// (0x0006118f) setting_slider_graphic_pane_t2_copy1

0xf221,	// (0x0006119f) slider_set_pane_cp_copy1

0x9f8d,	// (0x0005bf0b) input_focus_pane_cp1_copy1

0x9f96,	// (0x0005bf14) list_set_text_pane_copy1

0x9f9e,	// (0x0005bf1c) setting_text_pane_g1_copy1

0xee68,	// (0x00060de6) set_text_pane_t1_copy1

0x9f8d,	// (0x0005bf0b) input_focus_pane_cp2_copy1

0x9f9e,	// (0x0005bf1c) setting_code_pane_g1_copy1

0xf229,	// (0x000611a7) setting_code_pane_t1_copy1

0xf237,	// (0x000611b5) list_set_graphic_pane_copy1

0xd1d6,	// (0x0005f154) bg_set_opt_pane_cp4_copy1

0xc58e,	// (0x0005e50c) list_set_graphic_pane_g1_copy1_ParamLimits

0xc58e,	// (0x0005e50c) list_set_graphic_pane_g1_copy1

0xf249,	// (0x000611c7) list_set_graphic_pane_g2_copy1

0xc5a6,	// (0x0005e524) list_set_graphic_pane_t1_copy1_ParamLimits

0xc5a6,	// (0x0005e524) list_set_graphic_pane_t1_copy1

0x6f14,	// (0x00058e92) rs_clock_indi_pane_g1

0x9fcf,	// (0x0005bf4d) rs_clock_indi_pane_t1

0x9fdd,	// (0x0005bf5b) rs_indi_pane

0x9fe5,	// (0x0005bf63) rs_indi_pane_g1

0x9fee,	// (0x0005bf6c) rs_indi_pane_g2

0x9ff7,	// (0x0005bf75) rs_indi_pane_g3

0x0002,

0xfeea,	// (0x00061e68) rs_indi_pane_g

0x39a8,	// (0x00055926) bg_popup_preview_window_pane_cp03

0xa000,	// (0x0005bf7e) popup_fep_tooltip_window_t1

0x7bc8,	// (0x00059b46) popup_note2_window_g2_ParamLimits

0x7bc8,	// (0x00059b46) popup_note2_window_g2

0x0001,

0xfc83,	// (0x00061c01) popup_note2_window_g_ParamLimits

0xfc83,	// (0x00061c01) popup_note2_window_g

0x80d0,	// (0x0005a04e) bg_popup_sub_pane_cp11_ParamLimits

0x80dd,	// (0x0005a05b) cell_ai3_links_pane_g1_ParamLimits

0x80f4,	// (0x0005a072) cell_ai3_links_pane_t1

0xee68,	// (0x00060de6) set_text_pane_t1_copy1_ParamLimits

0x38b5,	// (0x00055833) cell_graphic_popup_pane_cp2_ParamLimits

0x38b5,	// (0x00055833) cell_graphic_popup_pane_cp2

0xa00e,	// (0x0005bf8c) cell_graphic_popup_pane_g1_cp2

0x2827,	// (0x000547a5) cell_graphic_popup_pane_g2_cp2

0xa016,	// (0x0005bf94) cell_graphic_popup_pane_g3_cp2

0xa01e,	// (0x0005bf9c) cell_graphic_popup_pane_t2_cp2

0x2838,	// (0x000547b6) grid_highlight_pane_cp3_cp2

0x30fd,	// (0x0005507b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2b7c,	// (0x00054afa) main_tmo_pane_ParamLimits

0xe019,	// (0x0005ff97) popup_tmo_big_image_note_window

0xeb99,	// (0x00060b17) cell_ai5_widget_list_pane

0xeba1,	// (0x00060b1f) cell_ai5_widget_lrg_icon_pane

0xef4a,	// (0x00060ec8) tmo_note_info_pane_t1_ParamLimits

0xef5f,	// (0x00060edd) tmo_note_info_pane_t2_ParamLimits

0xef78,	// (0x00060ef6) tmo_note_info_pane_t3_ParamLimits

0x9b81,	// (0x0005baff) tmo_note_info_pane_t4_ParamLimits

0x9b93,	// (0x0005bb11) tmo_note_info_pane_t5_ParamLimits

0xfed8,	// (0x00061e56) tmo_note_info_pane_t_ParamLimits

0xeff2,	// (0x00060f70) settings_container_pane_ParamLimits

0x9f85,	// (0x0005bf03) indicator_popup_pane_cp5

0x9f85,	// (0x0005bf03) indicator_popup_pane_cp6

0xf237,	// (0x000611b5) list_set_graphic_pane_copy1_ParamLimits

0xd1c2,	// (0x0005f140) bg_popup_window_pane_cp23

0xa02c,	// (0x0005bfaa) popup_tmo_big_image_note_window_g1

0xa038,	// (0x0005bfb6) popup_tmo_big_image_note_window_t1

0xa048,	// (0x0005bfc6) popup_tmo_big_image_note_window_t2

0xa058,	// (0x0005bfd6) popup_tmo_big_image_note_window_t3

0x0002,

0xfef1,	// (0x00061e6f) popup_tmo_big_image_note_window_t

0xf251,	// (0x000611cf) cell_ai5_widget_lrg_icon_pane_g1

0xf259,	// (0x000611d7) cell_ai5_widget_lrg_icon_pane_t1

0xf267,	// (0x000611e5) cell_ai5_widget_list_row_pane_ParamLimits

0xf267,	// (0x000611e5) cell_ai5_widget_list_row_pane

0xf280,	// (0x000611fe) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf280,	// (0x000611fe) cell_ai5_widget_list_row_pane_g1

0xf28d,	// (0x0006120b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf28d,	// (0x0006120b) cell_ai5_widget_list_row_pane_t1

0xf2a5,	// (0x00061223) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2a5,	// (0x00061223) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef8,	// (0x00061e76) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef8,	// (0x00061e76) cell_ai5_widget_list_row_pane_t

0xf354,	// (0x000612d2) main_fep_vtchi_ss_pane

0xa0ce,	// (0x0005c04c) popup_fep_char_pre_window

0xa0d6,	// (0x0005c054) popup_fep_ituss_window

0xa0f7,	// (0x0005c075) popup_fep_vkbss_window

0xa118,	// (0x0005c096) grid_vkbss_keypad_pane_ParamLimits

0xa118,	// (0x0005c096) grid_vkbss_keypad_pane

0xa128,	// (0x0005c0a6) ituss_keypad_pane

0xa141,	// (0x0005c0bf) aid_vkbss_key_offset_ParamLimits

0xa141,	// (0x0005c0bf) aid_vkbss_key_offset

0xa14d,	// (0x0005c0cb) cell_vkbss_key_pane_ParamLimits

0xa14d,	// (0x0005c0cb) cell_vkbss_key_pane

0xa163,	// (0x0005c0e1) bg_cell_vkbss_key_g1_ParamLimits

0xa163,	// (0x0005c0e1) bg_cell_vkbss_key_g1

0xa16f,	// (0x0005c0ed) cell_vkbss_key_3p_pane_ParamLimits

0xa16f,	// (0x0005c0ed) cell_vkbss_key_3p_pane

0xa189,	// (0x0005c107) cell_vkbss_key_g1_ParamLimits

0xa189,	// (0x0005c107) cell_vkbss_key_g1

0xa1a3,	// (0x0005c121) cell_vkbss_key_t1_ParamLimits

0xa1a3,	// (0x0005c121) cell_vkbss_key_t1

0xa1ce,	// (0x0005c14c) cell_ituss_key_pane_ParamLimits

0xa1ce,	// (0x0005c14c) cell_ituss_key_pane

0xa1de,	// (0x0005c15c) bg_cell_ituss_key_g1_ParamLimits

0xa1de,	// (0x0005c15c) bg_cell_ituss_key_g1

0xa1ea,	// (0x0005c168) cell_ituss_key_pane_g1_ParamLimits

0xa1ea,	// (0x0005c168) cell_ituss_key_pane_g1

0xa1f6,	// (0x0005c174) cell_ituss_key_pane_g2_ParamLimits

0xa1f6,	// (0x0005c174) cell_ituss_key_pane_g2

0x0001,

0xfefd,	// (0x00061e7b) cell_ituss_key_pane_g_ParamLimits

0xfefd,	// (0x00061e7b) cell_ituss_key_pane_g

0xa212,	// (0x0005c190) cell_ituss_key_t1_ParamLimits

0xa212,	// (0x0005c190) cell_ituss_key_t1

0xa240,	// (0x0005c1be) cell_ituss_key_t2_ParamLimits

0xa240,	// (0x0005c1be) cell_ituss_key_t2

0xa271,	// (0x0005c1ef) cell_ituss_key_t3_ParamLimits

0xa271,	// (0x0005c1ef) cell_ituss_key_t3

0xa2a2,	// (0x0005c220) cell_ituss_key_t4_ParamLimits

0xa2a2,	// (0x0005c220) cell_ituss_key_t4

0x0003,

0xff02,	// (0x00061e80) cell_ituss_key_t_ParamLimits

0xff02,	// (0x00061e80) cell_ituss_key_t

0xa2d3,	// (0x0005c251) cell_vkbss_key_3p_pane_g1

0xa2db,	// (0x0005c259) cell_vkbss_key_3p_pane_g2

0xa2e3,	// (0x0005c261) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0b,	// (0x00061e89) cell_vkbss_key_3p_pane_g

0xd1c2,	// (0x0005f140) bg_popup_fep_char_preview_window_cp02

0xa2eb,	// (0x0005c269) popup_fep_char_pre_window_t1

0xeb8f,	// (0x00060b0d) main_ai5_sk_pane

0x9c0d,	// (0x0005bb8b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9c19,	// (0x0005bb97) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9c2d,	// (0x0005bbab) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9c3c,	// (0x0005bbba) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee3,	// (0x00061e61) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9c4f,	// (0x0005bbcd) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2b7c,	// (0x00054afa) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2b7,	// (0x00061235) main_ai5_sk_pane_g1

0x4d4c,	// (0x00056cca) popup_query_code_window_g1

0xa0ec,	// (0x0005c06a) popup_fep_vkb_icf_pane

0xa102,	// (0x0005c080) popup_fep_vtchi_icf_pane

0x2b7c,	// (0x00054afa) bg_icf_pane

0xa312,	// (0x0005c290) list_vkb_icf_pane

0x2b7c,	// (0x00054afa) bg_icf_pane_cp01

0x83d3,	// (0x0005a351) vtchi_icf_list_pane

0xa332,	// (0x0005c2b0) list_vkb_icf_pane_t1_ParamLimits

0xa332,	// (0x0005c2b0) list_vkb_icf_pane_t1

0xa349,	// (0x0005c2c7) vtchi_icf_list_pane_t1_ParamLimits

0xa349,	// (0x0005c2c7) vtchi_icf_list_pane_t1

0xa0d6,	// (0x0005c054) popup_fep_ituss_window_ParamLimits

0xa102,	// (0x0005c080) popup_fep_vtchi_icf_pane_ParamLimits

0xa128,	// (0x0005c0a6) ituss_keypad_pane_ParamLimits

0xa138,	// (0x0005c0b6) ituss_sks_pane

0x2b7c,	// (0x00054afa) bg_icf_pane_ParamLimits

0xa303,	// (0x0005c281) icf_edit_indi_pane_ParamLimits

0xa303,	// (0x0005c281) icf_edit_indi_pane

0xa312,	// (0x0005c290) list_vkb_icf_pane_ParamLimits

0x2b7c,	// (0x00054afa) bg_icf_pane_cp01_ParamLimits

0xa31e,	// (0x0005c29c) icf_edit_indi_pane_cp01_ParamLimits

0xa31e,	// (0x0005c29c) icf_edit_indi_pane_cp01

0xa32a,	// (0x0005c2a8) vtchi_query_pane

0x719e,	// (0x0005911c) icf_edit_indi_pane_g1_ParamLimits

0x719e,	// (0x0005911c) icf_edit_indi_pane_g1

0xa362,	// (0x0005c2e0) icf_edit_indi_pane_g2_ParamLimits

0xa362,	// (0x0005c2e0) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x00061e90) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x00061e90) icf_edit_indi_pane_g

0xa36e,	// (0x0005c2ec) icf_edit_indi_pane_t1

0xa37c,	// (0x0005c2fa) bg_input_focus_pane_cp042

0x2a0b,	// (0x00054989) vtchi_button_pane

0xa385,	// (0x0005c303) vtchi_query_pane_t1

0xa393,	// (0x0005c311) vtchi_query_pane_t2

0xa3a1,	// (0x0005c31f) vtchi_query_pane_t3

0x0002,

0xff17,	// (0x00061e95) vtchi_query_pane_t

0xd1c2,	// (0x0005f140) bg_button_pane_cp13

0xa3af,	// (0x0005c32d) vtchi_button_pane_g1

0x8960,	// (0x0005a8de) ituss_sks_pane_g1

0xa3b7,	// (0x0005c335) ituss_sks_pane_g2

0x0001,

0xff1e,	// (0x00061e9c) ituss_sks_pane_g

0xa3c0,	// (0x0005c33e) ituss_sks_pane_t1

0xa3ce,	// (0x0005c34c) ituss_sks_pane_t2

0x0001,

0xff23,	// (0x00061ea1) ituss_sks_pane_t

0x69bb,	// (0x00058939) indicator_nsta_pane_cp_g1

0x69c4,	// (0x00058942) indicator_nsta_pane_cp_g2

0x69cc,	// (0x0005894a) indicator_nsta_pane_cp_g3

0x69d4,	// (0x00058952) indicator_nsta_pane_cp_g4

0x69dc,	// (0x0005895a) indicator_nsta_pane_cp_g5

0x69e4,	// (0x00058962) indicator_nsta_pane_cp_g6

0x0005,

0xfac1,	// (0x00061a3f) indicator_nsta_pane_cp_g

0xe9c7,	// (0x00060945) cell_graphic2_pane_t2_ParamLimits

0xe9c7,	// (0x00060945) cell_graphic2_pane_t2

0x0001,

0xfdda,	// (0x00061d58) cell_graphic2_pane_t_ParamLimits

0xfdda,	// (0x00061d58) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
