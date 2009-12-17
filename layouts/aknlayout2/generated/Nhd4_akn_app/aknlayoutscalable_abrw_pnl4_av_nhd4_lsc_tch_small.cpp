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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00025455 };

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
0x910b,	// (0x0002e560) Screen

0x9117,	// (0x0002e56c) application_window_ParamLimits

0x9117,	// (0x0002e56c) application_window

0xc2eb,	// (0x00031740) screen_g1

0x87c6,	// (0x0002dc1b) area_bottom_pane_ParamLimits

0x87c6,	// (0x0002dc1b) area_bottom_pane

0x0aa8,	// (0x00025efd) area_top_pane_ParamLimits

0x0aa8,	// (0x00025efd) area_top_pane

0x0b46,	// (0x00025f9b) main_pane_ParamLimits

0x0b46,	// (0x00025f9b) main_pane

0xc2f5,	// (0x0003174a) misc_graphics

0xa4ec,	// (0x0002f941) battery_pane_ParamLimits

0xa4ec,	// (0x0002f941) battery_pane

0xe063,	// (0x000334b8) bg_status_flat_pane_g8

0xe06b,	// (0x000334c0) bg_status_flat_pane_g9

0xd7c9,	// (0x00032c1e) context_pane_ParamLimits

0xd7c9,	// (0x00032c1e) context_pane

0xa657,	// (0x0002faac) navi_pane_ParamLimits

0xa657,	// (0x0002faac) navi_pane

0xa6ce,	// (0x0002fb23) signal_pane_ParamLimits

0xa6ce,	// (0x0002fb23) signal_pane

0x0008,

0x02bd,	// (0x00025712) bg_status_flat_pane_g

0xa75e,	// (0x0002fbb3) status_pane_g1_ParamLimits

0xa75e,	// (0x0002fbb3) status_pane_g1

0xa774,	// (0x0002fbc9) status_pane_g2_ParamLimits

0xa774,	// (0x0002fbc9) status_pane_g2

0xd82e,	// (0x00032c83) status_pane_g3_ParamLimits

0xd82e,	// (0x00032c83) status_pane_g3

0x0004,

0xf730,	// (0x00034b85) status_pane_g_ParamLimits

0xf730,	// (0x00034b85) status_pane_g

0xa780,	// (0x0002fbd5) title_pane_ParamLimits

0xa780,	// (0x0002fbd5) title_pane

0xa7e1,	// (0x0002fc36) uni_indicator_pane_ParamLimits

0xa7e1,	// (0x0002fc36) uni_indicator_pane

0xd5e8,	// (0x00032a3d) bg_list_pane_ParamLimits

0xd5e8,	// (0x00032a3d) bg_list_pane

0x6e9f,	// (0x0002c2f4) find_pane

0x9dda,	// (0x0002f22f) listscroll_app_pane_ParamLimits

0x9dda,	// (0x0002f22f) listscroll_app_pane

0xd614,	// (0x00032a69) listscroll_form_pane

0x6ea7,	// (0x0002c2fc) listscroll_gen_pane_ParamLimits

0x6ea7,	// (0x0002c2fc) listscroll_gen_pane

0xd614,	// (0x00032a69) listscroll_set_pane

0xe844,	// (0x00033c99) main_idle_act_pane

0xd3ce,	// (0x00032823) main_idle_trad_pane

0xd3ce,	// (0x00032823) main_list_empty_pane

0xd608,	// (0x00032a5d) main_midp_pane

0xd62e,	// (0x00032a83) main_pane_g1_ParamLimits

0xd62e,	// (0x00032a83) main_pane_g1

0x9de6,	// (0x0002f23b) popup_ai_message_window_ParamLimits

0x9de6,	// (0x0002f23b) popup_ai_message_window

0x9e77,	// (0x0002f2cc) popup_fep_china_uni_window_ParamLimits

0x9e77,	// (0x0002f2cc) popup_fep_china_uni_window

0xd66e,	// (0x00032ac3) popup_fep_japan_candidate_window_ParamLimits

0xd66e,	// (0x00032ac3) popup_fep_japan_candidate_window

0xd68c,	// (0x00032ae1) popup_fep_japan_predictive_window_ParamLimits

0xd68c,	// (0x00032ae1) popup_fep_japan_predictive_window

0x9ed1,	// (0x0002f326) popup_find_window

0x9eee,	// (0x0002f343) popup_grid_graphic_window_ParamLimits

0x9eee,	// (0x0002f343) popup_grid_graphic_window

0xd6bc,	// (0x00032b11) popup_large_graphic_colour_window

0x9f80,	// (0x0002f3d5) popup_menu_window_ParamLimits

0x9f80,	// (0x0002f3d5) popup_menu_window

0xa14c,	// (0x0002f5a1) popup_note_image_window

0xa112,	// (0x0002f567) popup_note_wait_window_ParamLimits

0xa112,	// (0x0002f567) popup_note_wait_window

0xa164,	// (0x0002f5b9) popup_note_window_ParamLimits

0xa164,	// (0x0002f5b9) popup_note_window

0xa20a,	// (0x0002f65f) popup_query_code_window_ParamLimits

0xa20a,	// (0x0002f65f) popup_query_code_window

0xd6e2,	// (0x00032b37) popup_query_data_code_window_ParamLimits

0xd6e2,	// (0x00032b37) popup_query_data_code_window

0xa244,	// (0x0002f699) popup_query_data_window_ParamLimits

0xa244,	// (0x0002f699) popup_query_data_window

0xa2ba,	// (0x0002f70f) popup_query_sat_info_window_ParamLimits

0xa2ba,	// (0x0002f70f) popup_query_sat_info_window

0xa351,	// (0x0002f7a6) popup_snote_single_graphic_window_ParamLimits

0xa351,	// (0x0002f7a6) popup_snote_single_graphic_window

0xa351,	// (0x0002f7a6) popup_snote_single_text_window_ParamLimits

0xa351,	// (0x0002f7a6) popup_snote_single_text_window

0xd6f9,	// (0x00032b4e) popup_sub_window_general

0xd73f,	// (0x00032b94) popup_window_general_ParamLimits

0xd73f,	// (0x00032b94) popup_window_general

0xd754,	// (0x00032ba9) power_save_pane

0x8979,	// (0x0002ddce) control_pane_g1_ParamLimits

0x8979,	// (0x0002ddce) control_pane_g1

0x180d,	// (0x00026c62) control_pane_g2_ParamLimits

0x180d,	// (0x00026c62) control_pane_g2

0xd5c2,	// (0x00032a17) control_pane_g3_ParamLimits

0xd5c2,	// (0x00032a17) control_pane_g3

0x0007,

0xf718,	// (0x00034b6d) control_pane_g_ParamLimits

0xf718,	// (0x00034b6d) control_pane_g

0x89b0,	// (0x0002de05) control_pane_t1_ParamLimits

0x89b0,	// (0x0002de05) control_pane_t1

0x8a0e,	// (0x0002de63) control_pane_t2_ParamLimits

0x8a0e,	// (0x0002de63) control_pane_t2

0x0002,

0xf729,	// (0x00034b7e) control_pane_t_ParamLimits

0xf729,	// (0x00034b7e) control_pane_t

0xd4e3,	// (0x00032938) navi_navi_volume_pane_cp1

0xd4ec,	// (0x00032941) status_small_icon_pane

0xd4f4,	// (0x00032949) status_small_pane_g1_ParamLimits

0xd4f4,	// (0x00032949) status_small_pane_g1

0xd528,	// (0x0003297d) status_small_pane_g2_ParamLimits

0xd528,	// (0x0003297d) status_small_pane_g2

0xd534,	// (0x00032989) status_small_pane_g3_ParamLimits

0xd534,	// (0x00032989) status_small_pane_g3

0xd540,	// (0x00032995) status_small_pane_g4_ParamLimits

0xd540,	// (0x00032995) status_small_pane_g4

0xd54c,	// (0x000329a1) status_small_pane_g5_ParamLimits

0xd54c,	// (0x000329a1) status_small_pane_g5

0xd55b,	// (0x000329b0) status_small_pane_g6_ParamLimits

0xd55b,	// (0x000329b0) status_small_pane_g6

0x0007,

0x01ce,	// (0x00025623) status_small_pane_g_ParamLimits

0x01ce,	// (0x00025623) status_small_pane_g

0xd58b,	// (0x000329e0) status_small_pane_t1

0xd5ae,	// (0x00032a03) status_small_wait_pane_ParamLimits

0xd5ae,	// (0x00032a03) status_small_wait_pane

0x9c4a,	// (0x0002f09f) aid_levels_signal_ParamLimits

0x9c4a,	// (0x0002f09f) aid_levels_signal

0x9c62,	// (0x0002f0b7) signal_pane_g1_ParamLimits

0x9c62,	// (0x0002f0b7) signal_pane_g1

0x9c7d,	// (0x0002f0d2) signal_pane_g2_ParamLimits

0x9c7d,	// (0x0002f0d2) signal_pane_g2

0x0001,

0xf6db,	// (0x00034b30) signal_pane_g_ParamLimits

0xf6db,	// (0x00034b30) signal_pane_g

0xcf12,	// (0x00032367) context_pane_g1

0x9127,	// (0x0002e57c) title_pane_g1

0x915c,	// (0x0002e5b1) title_pane_t1

0xc30b,	// (0x00031760) title_pane_t2

0xc331,	// (0x00031786) title_pane_t3

0x0002,

0xf59b,	// (0x000349f0) title_pane_t

0xa809,	// (0x0002fc5e) aid_levels_battery_ParamLimits

0xa809,	// (0x0002fc5e) aid_levels_battery

0xa825,	// (0x0002fc7a) battery_pane_g1_ParamLimits

0xa825,	// (0x0002fc7a) battery_pane_g1

0xa842,	// (0x0002fc97) battery_pane_g2_ParamLimits

0xa842,	// (0x0002fc97) battery_pane_g2

0x0001,

0xf73b,	// (0x00034b90) battery_pane_g_ParamLimits

0xf73b,	// (0x00034b90) battery_pane_g

0xaa87,	// (0x0002fedc) uni_indicator_pane_g1

0xaa9c,	// (0x0002fef1) uni_indicator_pane_g2

0xaab1,	// (0x0002ff06) uni_indicator_pane_g3

0x0005,

0xf7ce,	// (0x00034c23) uni_indicator_pane_g

0xd23e,	// (0x00032693) navi_icon_pane_ParamLimits

0xd23e,	// (0x00032693) navi_icon_pane

0xd185,	// (0x000325da) navi_midp_pane

0xd25a,	// (0x000326af) navi_navi_pane

0xd264,	// (0x000326b9) navi_text_pane_ParamLimits

0xd264,	// (0x000326b9) navi_text_pane

0xc2eb,	// (0x00031740) status_small_wait_pane_g1

0xc60c,	// (0x00031a61) status_small_wait_pane_g2

0x0001,

0x0360,	// (0x000257b5) status_small_wait_pane_g

0xaa26,	// (0x0002fe7b) navi_navi_icon_text_pane

0xaa2e,	// (0x0002fe83) navi_navi_pane_g1_ParamLimits

0xaa2e,	// (0x0002fe83) navi_navi_pane_g1

0xaa40,	// (0x0002fe95) navi_navi_pane_g2_ParamLimits

0xaa40,	// (0x0002fe95) navi_navi_pane_g2

0x0001,

0xf7c9,	// (0x00034c1e) navi_navi_pane_g_ParamLimits

0xf7c9,	// (0x00034c1e) navi_navi_pane_g

0xe5e6,	// (0x00033a3b) navi_navi_tabs_pane

0xaa52,	// (0x0002fea7) navi_navi_text_pane

0xaa26,	// (0x0002fe7b) navi_navi_volume_pane

0xaa14,	// (0x0002fe69) navi_text_pane_t1

0xaa08,	// (0x0002fe5d) navi_icon_pane_g1

0xe527,	// (0x0003397c) navi_navi_text_pane_t1

0x8c5d,	// (0x0002e0b2) navi_navi_volume_pane_g1

0x8c65,	// (0x0002e0ba) volume_small_pane

0xa964,	// (0x0002fdb9) navi_navi_icon_text_pane_g1

0xa96c,	// (0x0002fdc1) navi_navi_icon_text_pane_t1

0xd25a,	// (0x000326af) navi_tabs_2_long_pane

0xd25a,	// (0x000326af) navi_tabs_2_pane

0xd25a,	// (0x000326af) navi_tabs_3_long_pane

0xd25a,	// (0x000326af) navi_tabs_3_pane

0xd25a,	// (0x000326af) navi_tabs_4_pane

0x8c3d,	// (0x0002e092) tabs_2_active_pane_ParamLimits

0x8c3d,	// (0x0002e092) tabs_2_active_pane

0x8c4d,	// (0x0002e0a2) tabs_2_passive_pane_ParamLimits

0x8c4d,	// (0x0002e0a2) tabs_2_passive_pane

0x8c0b,	// (0x0002e060) tabs_3_active_pane_ParamLimits

0x8c0b,	// (0x0002e060) tabs_3_active_pane

0x8c1b,	// (0x0002e070) tabs_3_passive_pane_ParamLimits

0x8c1b,	// (0x0002e070) tabs_3_passive_pane

0x8c2c,	// (0x0002e081) tabs_3_passive_pane_cp_ParamLimits

0x8c2c,	// (0x0002e081) tabs_3_passive_pane_cp

0x8bc7,	// (0x0002e01c) tabs_4_active_pane_ParamLimits

0x8bc7,	// (0x0002e01c) tabs_4_active_pane

0x8bd8,	// (0x0002e02d) tabs_4_passive_pane_ParamLimits

0x8bd8,	// (0x0002e02d) tabs_4_passive_pane

0x8be9,	// (0x0002e03e) tabs_4_passive_pane_cp_ParamLimits

0x8be9,	// (0x0002e03e) tabs_4_passive_pane_cp

0x8bfa,	// (0x0002e04f) tabs_4_passive_pane_cp2_ParamLimits

0x8bfa,	// (0x0002e04f) tabs_4_passive_pane_cp2

0x8ba7,	// (0x0002dffc) tabs_2_long_active_pane_ParamLimits

0x8ba7,	// (0x0002dffc) tabs_2_long_active_pane

0x8bb7,	// (0x0002e00c) tabs_2_long_passive_pane_ParamLimits

0x8bb7,	// (0x0002e00c) tabs_2_long_passive_pane

0x8b72,	// (0x0002dfc7) tabs_3_long_active_pane_ParamLimits

0x8b72,	// (0x0002dfc7) tabs_3_long_active_pane

0x8b83,	// (0x0002dfd8) tabs_3_long_passive_pane_ParamLimits

0x8b83,	// (0x0002dfd8) tabs_3_long_passive_pane

0x8b96,	// (0x0002dfeb) tabs_3_long_passive_pane_cp_ParamLimits

0x8b96,	// (0x0002dfeb) tabs_3_long_passive_pane_cp

0x23b2,	// (0x00027807) volume_small_pane_g1

0x8b21,	// (0x0002df76) volume_small_pane_g2

0x8b2a,	// (0x0002df7f) volume_small_pane_g3

0x8b33,	// (0x0002df88) volume_small_pane_g4

0x8b3c,	// (0x0002df91) volume_small_pane_g5

0x8b45,	// (0x0002df9a) volume_small_pane_g6

0x8b4e,	// (0x0002dfa3) volume_small_pane_g7

0x8b57,	// (0x0002dfac) volume_small_pane_g8

0x8b60,	// (0x0002dfb5) volume_small_pane_g9

0x8b69,	// (0x0002dfbe) volume_small_pane_g10

0x0009,

0xf79f,	// (0x00034bf4) volume_small_pane_g

0xc343,	// (0x00031798) bg_active_tab_pane_cp2_ParamLimits

0xc343,	// (0x00031798) bg_active_tab_pane_cp2

0x91e8,	// (0x0002e63d) tabs_3_active_pane_g1

0x91f0,	// (0x0002e645) tabs_3_active_pane_t1

0xc343,	// (0x00031798) bg_passive_tab_pane_cp2_ParamLimits

0xc343,	// (0x00031798) bg_passive_tab_pane_cp2

0x91e8,	// (0x0002e63d) tabs_3_passive_pane_g1

0x91f0,	// (0x0002e645) tabs_3_passive_pane_t1

0xc343,	// (0x00031798) bg_active_tab_pane_cp3_ParamLimits

0xc343,	// (0x00031798) bg_active_tab_pane_cp3

0x9202,	// (0x0002e657) tabs_4_active_pane_g1

0x920a,	// (0x0002e65f) tabs_4_active_pane_t1

0xc343,	// (0x00031798) bg_passive_tab_pane_cp3_ParamLimits

0xc343,	// (0x00031798) bg_passive_tab_pane_cp3

0x9202,	// (0x0002e657) tabs_4_1_passive_pane_g1

0x920a,	// (0x0002e65f) tabs_4_1_passive_pane_t1

0xd608,	// (0x00032a5d) list_highlight_pane_cp2

0xab3e,	// (0x0002ff93) list_set_pane_ParamLimits

0xab3e,	// (0x0002ff93) list_set_pane

0xabd8,	// (0x0003002d) main_pane_set_t1_ParamLimits

0xabd8,	// (0x0003002d) main_pane_set_t1

0xabf8,	// (0x0003004d) main_pane_set_t2_ParamLimits

0xabf8,	// (0x0003004d) main_pane_set_t2

0xac0c,	// (0x00030061) main_pane_set_t3_ParamLimits

0xac0c,	// (0x00030061) main_pane_set_t3

0xac1e,	// (0x00030073) main_pane_set_t4_ParamLimits

0xac1e,	// (0x00030073) main_pane_set_t4

0x0003,

0xf804,	// (0x00034c59) main_pane_set_t_ParamLimits

0xf804,	// (0x00034c59) main_pane_set_t

0xac30,	// (0x00030085) setting_code_pane

0xac38,	// (0x0003008d) setting_slider_graphic_pane

0xac38,	// (0x0003008d) setting_slider_pane

0xac38,	// (0x0003008d) setting_text_pane

0xac38,	// (0x0003008d) setting_volume_pane

0x0e3d,	// (0x00026292) volume_set_pane

0xc351,	// (0x000317a6) bg_set_opt_pane_cp

0x0e45,	// (0x0002629a) setting_slider_pane_t1

0x0e5e,	// (0x000262b3) setting_slider_pane_t2

0x0e77,	// (0x000262cc) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x000349f7) setting_slider_pane_t

0x0e8e,	// (0x000262e3) slider_set_pane

0xc2f5,	// (0x0003174a) bg_set_opt_pane_cp2

0xc35f,	// (0x000317b4) setting_slider_graphic_pane_g1

0x0ea4,	// (0x000262f9) setting_slider_graphic_pane_t1

0x0eb3,	// (0x00026308) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x000349fe) setting_slider_graphic_pane_t

0x0ec2,	// (0x00026317) slider_set_pane_cp

0xc2f5,	// (0x0003174a) input_focus_pane_cp1

0xea4d,	// (0x00033ea2) list_set_text_pane

0xc2eb,	// (0x00031740) setting_text_pane_g1

0xc2f5,	// (0x0003174a) input_focus_pane_cp2

0xc2eb,	// (0x00031740) setting_code_pane_g1

0xc368,	// (0x000317bd) setting_code_pane_t1

0x6752,	// (0x0002bba7) set_text_pane_t1_ParamLimits

0x6752,	// (0x0002bba7) set_text_pane_t1

0xc9ff,	// (0x00031e54) set_opt_bg_pane_g1

0xca07,	// (0x00031e5c) set_opt_bg_pane_g2

0xea2d,	// (0x00033e82) set_opt_bg_pane_g3

0xca17,	// (0x00031e6c) set_opt_bg_pane_g4

0xca1f,	// (0x00031e74) set_opt_bg_pane_g5

0xca27,	// (0x00031e7c) set_opt_bg_pane_g6

0xea35,	// (0x00033e8a) set_opt_bg_pane_g7

0xea3d,	// (0x00033e92) set_opt_bg_pane_g8

0xea45,	// (0x00033e9a) set_opt_bg_pane_g9

0x0008,

0x03b7,	// (0x0002580c) set_opt_bg_pane_g

0xea20,	// (0x00033e75) slider_set_pane_g1

0x2709,	// (0x00027b5e) slider_set_pane_g2

0x0006,

0xf7f5,	// (0x00034c4a) slider_set_pane_g

0x2680,	// (0x00027ad5) volume_set_pane_g1

0x2688,	// (0x00027add) volume_set_pane_g2

0x2690,	// (0x00027ae5) volume_set_pane_g3

0x2698,	// (0x00027aed) volume_set_pane_g4

0x26a0,	// (0x00027af5) volume_set_pane_g5

0x26a8,	// (0x00027afd) volume_set_pane_g6

0x26b0,	// (0x00027b05) volume_set_pane_g7

0x26b8,	// (0x00027b0d) volume_set_pane_g8

0x26c0,	// (0x00027b15) volume_set_pane_g9

0x26c8,	// (0x00027b1d) volume_set_pane_g10

0x0009,

0xf7db,	// (0x00034c30) volume_set_pane_g

0x921c,	// (0x0002e671) indicator_pane_ParamLimits

0x921c,	// (0x0002e671) indicator_pane

0x9244,	// (0x0002e699) main_idle_pane_g2_ParamLimits

0x9244,	// (0x0002e699) main_idle_pane_g2

0x98d7,	// (0x0002ed2c) main_pane_idle_g1_ParamLimits

0x98d7,	// (0x0002ed2c) main_pane_idle_g1

0xc376,	// (0x000317cb) popup_clock_digital_analogue_window_ParamLimits

0xc376,	// (0x000317cb) popup_clock_digital_analogue_window

0x98fe,	// (0x0002ed53) soft_indicator_pane_ParamLimits

0x98fe,	// (0x0002ed53) soft_indicator_pane

0x9918,	// (0x0002ed6d) wallpaper_pane_ParamLimits

0x9918,	// (0x0002ed6d) wallpaper_pane

0xc2eb,	// (0x00031740) wallpaper_pane_g1

0x992a,	// (0x0002ed7f) indicator_pane_g1_ParamLimits

0x992a,	// (0x0002ed7f) indicator_pane_g1

0xeb94,	// (0x00033fe9) navi_navi_icon_text_pane_srt_g1

0xc3a4,	// (0x000317f9) soft_indicator_pane_t1

0xc3be,	// (0x00031813) aid_ps_area_pane

0x9943,	// (0x0002ed98) aid_ps_clock_pane

0xc3cf,	// (0x00031824) aid_ps_indicator_pane

0xc3db,	// (0x00031830) indicator_ps_pane_ParamLimits

0xc3db,	// (0x00031830) indicator_ps_pane

0xc3ea,	// (0x0003183f) power_save_pane_g1_ParamLimits

0xc3ea,	// (0x0003183f) power_save_pane_g1

0xc3f6,	// (0x0003184b) power_save_pane_g2_ParamLimits

0xc3f6,	// (0x0003184b) power_save_pane_g2

0x099c,	// (0x00025df1) aid_navinavi_width_pane

0xc3be,	// (0x00031813) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00034a03) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00034a03) power_save_pane_g

0xc404,	// (0x00031859) power_save_pane_t1_ParamLimits

0xc404,	// (0x00031859) power_save_pane_t1

0x9943,	// (0x0002ed98) aid_ps_clock_pane_ParamLimits

0xc3cf,	// (0x00031824) aid_ps_indicator_pane_ParamLimits

0xc416,	// (0x0003186b) power_save_pane_t4_ParamLimits

0xc416,	// (0x0003186b) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00034a08) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00034a08) power_save_pane_t

0xc440,	// (0x00031895) power_save_t3_ParamLimits

0xc440,	// (0x00031895) power_save_t3

0xc42b,	// (0x00031880) power_save_t2_ParamLimits

0xc42b,	// (0x00031880) power_save_t2

0xc455,	// (0x000318aa) indicator_ps_pane_g1

0x9951,	// (0x0002eda6) ai_gene_pane_ParamLimits

0x9951,	// (0x0002eda6) ai_gene_pane

0x9968,	// (0x0002edbd) ai_links_pane_ParamLimits

0x9968,	// (0x0002edbd) ai_links_pane

0x9980,	// (0x0002edd5) indicator_pane_cp1_ParamLimits

0x9980,	// (0x0002edd5) indicator_pane_cp1

0x998f,	// (0x0002ede4) main_pane_idle_g1_cp_ParamLimits

0x998f,	// (0x0002ede4) main_pane_idle_g1_cp

0xc45e,	// (0x000318b3) popup_ai_links_title_window

0x99a7,	// (0x0002edfc) soft_indicator_pane_cp1_ParamLimits

0x99a7,	// (0x0002edfc) soft_indicator_pane_cp1

0xe874,	// (0x00033cc9) ai_links_pane_g1

0xe87d,	// (0x00033cd2) grid_ai_links_pane

0xaa7e,	// (0x0002fed3) ai_gene_pane_1

0xe862,	// (0x00033cb7) ai_gene_pane_2

0xe86b,	// (0x00033cc0) list_highlight_pane_cp4

0xaa5a,	// (0x0002feaf) cell_ai_link_pane_ParamLimits

0xaa5a,	// (0x0002feaf) cell_ai_link_pane

0xe83c,	// (0x00033c91) cell_ai_link_pane_g1

0xc60c,	// (0x00031a61) cell_ai_link_pane_g2

0x0001,

0x035b,	// (0x000257b0) cell_ai_link_pane_g

0xc2f5,	// (0x0003174a) grid_highlight_cp2

0xc2f5,	// (0x0003174a) bg_popup_sub_pane_cp1

0xc475,	// (0x000318ca) popup_ai_links_title_window_t1

0xe78a,	// (0x00033bdf) ai_gene_pane_1_g1_ParamLimits

0xe78a,	// (0x00033bdf) ai_gene_pane_1_g1

0xe796,	// (0x00033beb) ai_gene_pane_1_g2_ParamLimits

0xe796,	// (0x00033beb) ai_gene_pane_1_g2

0x0001,

0x0351,	// (0x000257a6) ai_gene_pane_1_g_ParamLimits

0x0351,	// (0x000257a6) ai_gene_pane_1_g

0xe7a3,	// (0x00033bf8) ai_gene_pane_1_t1_ParamLimits

0xe7a3,	// (0x00033bf8) ai_gene_pane_1_t1

0xe7d7,	// (0x00033c2c) grid_ai_soft_ind_pane

0xe775,	// (0x00033bca) ai_gene_pane_2_t1_ParamLimits

0xe775,	// (0x00033bca) ai_gene_pane_2_t1

0x99bb,	// (0x0002ee10) main_pane_empty_t1_ParamLimits

0x99bb,	// (0x0002ee10) main_pane_empty_t1

0x99d3,	// (0x0002ee28) main_pane_empty_t2_ParamLimits

0x99d3,	// (0x0002ee28) main_pane_empty_t2

0x99e8,	// (0x0002ee3d) main_pane_empty_t3_ParamLimits

0x99e8,	// (0x0002ee3d) main_pane_empty_t3

0x99fa,	// (0x0002ee4f) main_pane_empty_t4_ParamLimits

0x99fa,	// (0x0002ee4f) main_pane_empty_t4

0x9a0c,	// (0x0002ee61) main_pane_empty_t5_ParamLimits

0x9a0c,	// (0x0002ee61) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00034a0d) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00034a0d) main_pane_empty_t

0xca50,	// (0x00031ea5) bg_popup_window_pane_ParamLimits

0xca50,	// (0x00031ea5) bg_popup_window_pane

0xe535,	// (0x0003398a) find_popup_pane_cp2_ParamLimits

0xe535,	// (0x0003398a) find_popup_pane_cp2

0xe541,	// (0x00033996) heading_pane_ParamLimits

0xe541,	// (0x00033996) heading_pane

0xc2f5,	// (0x0003174a) bg_popup_sub_pane

0xa989,	// (0x0002fdde) bg_popup_window_pane_g1_ParamLimits

0xa989,	// (0x0002fdde) bg_popup_window_pane_g1

0xa998,	// (0x0002fded) bg_popup_window_pane_g2_ParamLimits

0xa998,	// (0x0002fded) bg_popup_window_pane_g2

0xa9a4,	// (0x0002fdf9) bg_popup_window_pane_g3_ParamLimits

0xa9a4,	// (0x0002fdf9) bg_popup_window_pane_g3

0xa9b0,	// (0x0002fe05) bg_popup_window_pane_g4_ParamLimits

0xa9b0,	// (0x0002fe05) bg_popup_window_pane_g4

0xa9bf,	// (0x0002fe14) bg_popup_window_pane_g5_ParamLimits

0xa9bf,	// (0x0002fe14) bg_popup_window_pane_g5

0xa9cf,	// (0x0002fe24) bg_popup_window_pane_g6_ParamLimits

0xa9cf,	// (0x0002fe24) bg_popup_window_pane_g6

0xa9db,	// (0x0002fe30) bg_popup_window_pane_g7_ParamLimits

0xa9db,	// (0x0002fe30) bg_popup_window_pane_g7

0xa9ea,	// (0x0002fe3f) bg_popup_window_pane_g8_ParamLimits

0xa9ea,	// (0x0002fe3f) bg_popup_window_pane_g8

0xa9f9,	// (0x0002fe4e) bg_popup_window_pane_g9_ParamLimits

0xa9f9,	// (0x0002fe4e) bg_popup_window_pane_g9

0xe51b,	// (0x00033970) bg_popup_window_pane_g10_ParamLimits

0xe51b,	// (0x00033970) bg_popup_window_pane_g10

0x0009,

0xf7b4,	// (0x00034c09) bg_popup_window_pane_g_ParamLimits

0xf7b4,	// (0x00034c09) bg_popup_window_pane_g

0xe4d2,	// (0x00033927) bg_popup_heading_pane_ParamLimits

0xe4d2,	// (0x00033927) bg_popup_heading_pane

0x29bf,	// (0x00027e14) tabs_4_passive_pane_cp_srt_ParamLimits

0x29bf,	// (0x00027e14) tabs_4_passive_pane_cp_srt

0x29d1,	// (0x00027e26) tabs_4_passive_pane_srt_ParamLimits

0xe4e6,	// (0x0003393b) heading_pane_g2

0x29d1,	// (0x00027e26) tabs_4_passive_pane_srt

0xda12,	// (0x00032e67) bg_passive_tab_pane_cp3_srt_ParamLimits

0xda12,	// (0x00032e67) bg_passive_tab_pane_cp3_srt

0xe4ee,	// (0x00033943) heading_pane_t1_ParamLimits

0xe4ee,	// (0x00033943) heading_pane_t1

0xe505,	// (0x0003395a) heading_pane_t2_ParamLimits

0xe505,	// (0x0003395a) heading_pane_t2

0x0001,

0x0314,	// (0x00025769) heading_pane_t_ParamLimits

0x0314,	// (0x00025769) heading_pane_t

0xe02b,	// (0x00033480) bg_popup_heading_pane_g1

0xe0bc,	// (0x00033511) bg_popup_heading_pane_g2

0xe0c6,	// (0x0003351b) bg_popup_heading_pane_g3

0xe0d0,	// (0x00033525) bg_popup_heading_pane_g4

0xe0da,	// (0x0003352f) bg_popup_heading_pane_g5

0xe0e4,	// (0x00033539) bg_popup_heading_pane_g6

0xe0ec,	// (0x00033541) bg_popup_heading_pane_g7

0xe0f4,	// (0x00033549) bg_popup_heading_pane_g8

0xe0fe,	// (0x00033553) bg_popup_heading_pane_g9

0x0008,

0x02d0,	// (0x00025725) bg_popup_heading_pane_g

0xd922,	// (0x00032d77) bg_popup_sub_pane_g1

0xd932,	// (0x00032d87) bg_popup_sub_pane_g2

0xd92a,	// (0x00032d7f) bg_popup_sub_pane_g3

0xd942,	// (0x00032d97) bg_popup_sub_pane_g4

0xd93a,	// (0x00032d8f) bg_popup_sub_pane_g5

0xd94a,	// (0x00032d9f) bg_popup_sub_pane_g6

0xd952,	// (0x00032da7) bg_popup_sub_pane_g7

0xd962,	// (0x00032db7) bg_popup_sub_pane_g8

0xd95a,	// (0x00032daf) bg_popup_sub_pane_g9

0x0008,

0xf78c,	// (0x00034be1) bg_popup_sub_pane_g

0xc343,	// (0x00031798) bg_popup_window_pane_cp5_ParamLimits

0xc343,	// (0x00031798) bg_popup_window_pane_cp5

0xc492,	// (0x000318e7) popup_note_window_g1_ParamLimits

0xc492,	// (0x000318e7) popup_note_window_g1

0xc49e,	// (0x000318f3) popup_note_window_t1_ParamLimits

0xc49e,	// (0x000318f3) popup_note_window_t1

0xc4b0,	// (0x00031905) popup_note_window_t2_ParamLimits

0xc4b0,	// (0x00031905) popup_note_window_t2

0xc4c2,	// (0x00031917) popup_note_window_t3_ParamLimits

0xc4c2,	// (0x00031917) popup_note_window_t3

0xc4d4,	// (0x00031929) popup_note_window_t4_ParamLimits

0xc4d4,	// (0x00031929) popup_note_window_t4

0xc4fc,	// (0x00031951) popup_note_window_t5_ParamLimits

0xc4fc,	// (0x00031951) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00034a18) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00034a18) popup_note_window_t

0xc520,	// (0x00031975) bg_popup_window_pane_cp6_ParamLimits

0xc520,	// (0x00031975) bg_popup_window_pane_cp6

0xdf9f,	// (0x000333f4) popup_note_image_window_g1_ParamLimits

0xdf9f,	// (0x000333f4) popup_note_image_window_g1

0xdfab,	// (0x00033400) popup_note_image_window_g2_ParamLimits

0xdfab,	// (0x00033400) popup_note_image_window_g2

0x0001,

0x029e,	// (0x000256f3) popup_note_image_window_g_ParamLimits

0x029e,	// (0x000256f3) popup_note_image_window_g

0xdfc4,	// (0x00033419) popup_note_image_window_t1_ParamLimits

0xdfc4,	// (0x00033419) popup_note_image_window_t1

0xdfdd,	// (0x00033432) popup_note_image_window_t2_ParamLimits

0xdfdd,	// (0x00033432) popup_note_image_window_t2

0xdff6,	// (0x0003344b) popup_note_image_window_t3_ParamLimits

0xdff6,	// (0x0003344b) popup_note_image_window_t3

0x0002,

0x02a3,	// (0x000256f8) popup_note_image_window_t_ParamLimits

0x02a3,	// (0x000256f8) popup_note_image_window_t

0xde7c,	// (0x000332d1) bg_popup_window_pane_cp7_ParamLimits

0xde7c,	// (0x000332d1) bg_popup_window_pane_cp7

0xdeac,	// (0x00033301) popup_note_wait_window_g1_ParamLimits

0xdeac,	// (0x00033301) popup_note_wait_window_g1

0xdeb8,	// (0x0003330d) popup_note_wait_window_g2_ParamLimits

0xdeb8,	// (0x0003330d) popup_note_wait_window_g2

0x0002,

0x028c,	// (0x000256e1) popup_note_wait_window_g_ParamLimits

0x028c,	// (0x000256e1) popup_note_wait_window_g

0xded0,	// (0x00033325) popup_note_wait_window_t1_ParamLimits

0xded0,	// (0x00033325) popup_note_wait_window_t1

0xdef7,	// (0x0003334c) popup_note_wait_window_t2_ParamLimits

0xdef7,	// (0x0003334c) popup_note_wait_window_t2

0xdf14,	// (0x00033369) popup_note_wait_window_t3_ParamLimits

0xdf14,	// (0x00033369) popup_note_wait_window_t3

0xdf27,	// (0x0003337c) popup_note_wait_window_t4_ParamLimits

0xdf27,	// (0x0003337c) popup_note_wait_window_t4

0x0004,

0x0293,	// (0x000256e8) popup_note_wait_window_t_ParamLimits

0x0293,	// (0x000256e8) popup_note_wait_window_t

0xdf4c,	// (0x000333a1) wait_bar_pane_ParamLimits

0xdf4c,	// (0x000333a1) wait_bar_pane

0xc2f5,	// (0x0003174a) wait_anim_pane

0xc2f5,	// (0x0003174a) wait_border_pane

0xc2eb,	// (0x00031740) wait_anim_pane_g1

0xc2eb,	// (0x00031740) wait_anim_pane_g2

0x0001,

0x015e,	// (0x000255b3) wait_anim_pane_g

0xde20,	// (0x00033275) wait_border_pane_g1

0xde2b,	// (0x00033280) wait_border_pane_g2

0xde34,	// (0x00033289) wait_border_pane_g3

0x0002,

0x0285,	// (0x000256da) wait_border_pane_g

0xdd82,	// (0x000331d7) bg_popup_window_pane_cp16_ParamLimits

0xdd82,	// (0x000331d7) bg_popup_window_pane_cp16

0xdd90,	// (0x000331e5) indicator_popup_pane_cp4_ParamLimits

0xdd90,	// (0x000331e5) indicator_popup_pane_cp4

0xdda4,	// (0x000331f9) popup_query_data_window_t1_ParamLimits

0xdda4,	// (0x000331f9) popup_query_data_window_t1

0xddb6,	// (0x0003320b) popup_query_data_window_t2_ParamLimits

0xddb6,	// (0x0003320b) popup_query_data_window_t2

0xddcf,	// (0x00033224) popup_query_data_window_t3_ParamLimits

0xddcf,	// (0x00033224) popup_query_data_window_t3

0x0002,

0x027e,	// (0x000256d3) popup_query_data_window_t_ParamLimits

0x027e,	// (0x000256d3) popup_query_data_window_t

0xdde9,	// (0x0003323e) query_popup_data_pane_ParamLimits

0xdde9,	// (0x0003323e) query_popup_data_pane

0xddfd,	// (0x00033252) query_popup_data_pane_cp1_ParamLimits

0xddfd,	// (0x00033252) query_popup_data_pane_cp1

0xc520,	// (0x00031975) bg_popup_window_pane_cp10_ParamLimits

0xc520,	// (0x00031975) bg_popup_window_pane_cp10

0xdce5,	// (0x0003313a) indicator_popup_pane_ParamLimits

0xdce5,	// (0x0003313a) indicator_popup_pane

0xc577,	// (0x000319cc) popup_query_code_window_t1_ParamLimits

0xc577,	// (0x000319cc) popup_query_code_window_t1

0xdcfd,	// (0x00033152) popup_query_code_window_t2_ParamLimits

0xdcfd,	// (0x00033152) popup_query_code_window_t2

0xdd3b,	// (0x00033190) popup_query_code_window_t3_ParamLimits

0xdd3b,	// (0x00033190) popup_query_code_window_t3

0x0002,

0x0277,	// (0x000256cc) popup_query_code_window_t_ParamLimits

0x0277,	// (0x000256cc) popup_query_code_window_t

0xdd6a,	// (0x000331bf) query_popup_pane_ParamLimits

0xdd6a,	// (0x000331bf) query_popup_pane

0xc520,	// (0x00031975) bg_popup_window_pane_cp15_ParamLimits

0xc520,	// (0x00031975) bg_popup_window_pane_cp15

0xc53e,	// (0x00031993) indicator_popup_pane_cp1_ParamLimits

0xc53e,	// (0x00031993) indicator_popup_pane_cp1

0xc551,	// (0x000319a6) indicator_popup_pane_cp2_ParamLimits

0xc551,	// (0x000319a6) indicator_popup_pane_cp2

0xc564,	// (0x000319b9) popup_query_data_code_window_g1_ParamLimits

0xc564,	// (0x000319b9) popup_query_data_code_window_g1

0xc577,	// (0x000319cc) popup_query_data_code_window_t1_ParamLimits

0xc577,	// (0x000319cc) popup_query_data_code_window_t1

0xc589,	// (0x000319de) popup_query_data_code_window_t2_ParamLimits

0xc589,	// (0x000319de) popup_query_data_code_window_t2

0xc59b,	// (0x000319f0) popup_query_data_code_window_t3_ParamLimits

0xc59b,	// (0x000319f0) popup_query_data_code_window_t3

0xc5b1,	// (0x00031a06) popup_query_data_code_window_t4_ParamLimits

0xc5b1,	// (0x00031a06) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00034a23) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00034a23) popup_query_data_code_window_t

0x2156,	// (0x000275ab) list_single_midp_graphic_pane_g3

0xc5c9,	// (0x00031a1e) query_popup_data_pane_cp2_ParamLimits

0xc5dc,	// (0x00031a31) query_popup_pane_cp2_ParamLimits

0xc5dc,	// (0x00031a31) query_popup_pane_cp2

0xc2f5,	// (0x0003174a) bg_popup_window_pane_cp11

0xdcb9,	// (0x0003310e) heading_pane_cp5

0xc66a,	// (0x00031abf) listscroll_popup_info_pane

0xc2f5,	// (0x0003174a) input_focus_pane_cp3

0xc5ef,	// (0x00031a44) query_popup_pane_t1

0xc5fd,	// (0x00031a52) list_popup_info_pane_ParamLimits

0xc5fd,	// (0x00031a52) list_popup_info_pane

0xc60c,	// (0x00031a61) listscroll_popup_info_pane_g1

0xc614,	// (0x00031a69) scroll_pane_cp7

0xc61e,	// (0x00031a73) popup_info_list_pane_t1_ParamLimits

0xc61e,	// (0x00031a73) popup_info_list_pane_t1

0xc638,	// (0x00031a8d) popup_info_list_pane_t2_ParamLimits

0xc638,	// (0x00031a8d) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00034a2c) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00034a2c) popup_info_list_pane_t

0xc2f5,	// (0x0003174a) bg_popup_window_pane_cp12

0xebae,	// (0x00034003) find_popup_pane

0xc351,	// (0x000317a6) bg_popup_window_pane_cp3

0xc652,	// (0x00031aa7) heading_pane_cp3

0xc65e,	// (0x00031ab3) listscroll_popup_graphic_pane

0xc2f5,	// (0x0003174a) bg_popup_window_pane_cp4

0x9a6e,	// (0x0002eec3) heading_pane_cp4

0xc66a,	// (0x00031abf) listscroll_popup_colour_pane

0xc672,	// (0x00031ac7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc672,	// (0x00031ac7) cell_large_graphic_colour_none_popup_pane

0x9a76,	// (0x0002eecb) grid_large_graphic_colour_popup_pane_ParamLimits

0x9a76,	// (0x0002eecb) grid_large_graphic_colour_popup_pane

0xc686,	// (0x00031adb) listscroll_popup_colour_pane_g1_ParamLimits

0xc686,	// (0x00031adb) listscroll_popup_colour_pane_g1

0xc69d,	// (0x00031af2) listscroll_popup_colour_pane_g2_ParamLimits

0xc69d,	// (0x00031af2) listscroll_popup_colour_pane_g2

0xc6b4,	// (0x00031b09) listscroll_popup_colour_pane_g3_ParamLimits

0xc6b4,	// (0x00031b09) listscroll_popup_colour_pane_g3

0x9a9a,	// (0x0002eeef) listscroll_popup_colour_pane_g4_ParamLimits

0x9a9a,	// (0x0002eeef) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00034a31) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00034a31) listscroll_popup_colour_pane_g

0xc6c4,	// (0x00031b19) scroll_pane_cp6_ParamLimits

0xc6c4,	// (0x00031b19) scroll_pane_cp6

0x9aa9,	// (0x0002eefe) cell_large_graphic_colour_popup_pane_ParamLimits

0x9aa9,	// (0x0002eefe) cell_large_graphic_colour_popup_pane

0xc6d6,	// (0x00031b2b) cell_large_graphic_colour_none_popup_pane_t1

0xc2f5,	// (0x0003174a) grid_highlight_pane_cp5

0xc6e5,	// (0x00031b3a) cell_large_graphic_colour_popup_pane_g1

0xc6ed,	// (0x00031b42) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00034a3a) cell_large_graphic_colour_popup_pane_g

0xc6f5,	// (0x00031b4a) cell_large_graphic_colour_popup_pane_g2_copy1

0xc6fe,	// (0x00031b53) grid_highlight_pane_cp4

0xc706,	// (0x00031b5b) bg_popup_window_pane_cp8_ParamLimits

0xc706,	// (0x00031b5b) bg_popup_window_pane_cp8

0xc721,	// (0x00031b76) popup_snote_single_text_window_g1_ParamLimits

0xc721,	// (0x00031b76) popup_snote_single_text_window_g1

0xc733,	// (0x00031b88) popup_snote_single_text_window_t1_ParamLimits

0xc733,	// (0x00031b88) popup_snote_single_text_window_t1

0xc746,	// (0x00031b9b) popup_snote_single_text_window_t2_ParamLimits

0xc746,	// (0x00031b9b) popup_snote_single_text_window_t2

0xc759,	// (0x00031bae) popup_snote_single_text_window_t3_ParamLimits

0xc759,	// (0x00031bae) popup_snote_single_text_window_t3

0xc792,	// (0x00031be7) popup_snote_single_text_window_t4_ParamLimits

0xc792,	// (0x00031be7) popup_snote_single_text_window_t4

0xc7c6,	// (0x00031c1b) popup_snote_single_text_window_t5_ParamLimits

0xc7c6,	// (0x00031c1b) popup_snote_single_text_window_t5

0x0004,

0x0001,	// (0x00025456) popup_snote_single_text_window_t_ParamLimits

0x0001,	// (0x00025456) popup_snote_single_text_window_t

0xc7f5,	// (0x00031c4a) bg_popup_window_pane_cp9_ParamLimits

0xc7f5,	// (0x00031c4a) bg_popup_window_pane_cp9

0xc721,	// (0x00031b76) popup_snote_single_graphic_window_g1_ParamLimits

0xc721,	// (0x00031b76) popup_snote_single_graphic_window_g1

0xc803,	// (0x00031c58) popup_snote_single_graphic_window_g2_ParamLimits

0xc803,	// (0x00031c58) popup_snote_single_graphic_window_g2

0x0001,

0x000c,	// (0x00025461) popup_snote_single_graphic_window_g_ParamLimits

0x000c,	// (0x00025461) popup_snote_single_graphic_window_g

0xc80f,	// (0x00031c64) popup_snote_single_graphic_window_t1_ParamLimits

0xc80f,	// (0x00031c64) popup_snote_single_graphic_window_t1

0xc822,	// (0x00031c77) popup_snote_single_graphic_window_t2_ParamLimits

0xc822,	// (0x00031c77) popup_snote_single_graphic_window_t2

0xc835,	// (0x00031c8a) popup_snote_single_graphic_window_t3_ParamLimits

0xc835,	// (0x00031c8a) popup_snote_single_graphic_window_t3

0xc86e,	// (0x00031cc3) popup_snote_single_graphic_window_t4_ParamLimits

0xc86e,	// (0x00031cc3) popup_snote_single_graphic_window_t4

0xc8a2,	// (0x00031cf7) popup_snote_single_graphic_window_t5_ParamLimits

0xc8a2,	// (0x00031cf7) popup_snote_single_graphic_window_t5

0x0004,

0x0011,	// (0x00025466) popup_snote_single_graphic_window_t_ParamLimits

0x0011,	// (0x00025466) popup_snote_single_graphic_window_t

0xeb32,	// (0x00033f87) grid_graphic_popup_pane_ParamLimits

0xeb32,	// (0x00033f87) grid_graphic_popup_pane

0xeb5e,	// (0x00033fb3) listscroll_popup_graphic_pane_g1_ParamLimits

0xeb5e,	// (0x00033fb3) listscroll_popup_graphic_pane_g1

0xad49,	// (0x0003019e) listscroll_popup_graphic_pane_g2_ParamLimits

0xad49,	// (0x0003019e) listscroll_popup_graphic_pane_g2

0x0001,

0xf827,	// (0x00034c7c) listscroll_popup_graphic_pane_g_ParamLimits

0xf827,	// (0x00034c7c) listscroll_popup_graphic_pane_g

0xe856,	// (0x00033cab) scroll_pane_cp5

0xad0c,	// (0x00030161) cell_graphic_popup_pane_ParamLimits

0xad0c,	// (0x00030161) cell_graphic_popup_pane

0xeafd,	// (0x00033f52) cell_graphic_popup_pane_g1

0xeb05,	// (0x00033f5a) cell_graphic_popup_pane_g2

0xc6f5,	// (0x00031b4a) cell_graphic_popup_pane_g3

0x0002,

0x03ed,	// (0x00025842) cell_graphic_popup_pane_g

0xeb0e,	// (0x00033f63) cell_graphic_popup_pane_t2

0xc6fe,	// (0x00031b53) grid_highlight_pane_cp3

0xc8e3,	// (0x00031d38) list_gen_pane_ParamLimits

0xc8e3,	// (0x00031d38) list_gen_pane

0xc90b,	// (0x00031d60) scroll_pane

0xacc7,	// (0x0003011c) bg_list_pane_g1_ParamLimits

0xacc7,	// (0x0003011c) bg_list_pane_g1

0xeaac,	// (0x00033f01) bg_list_pane_g2_ParamLimits

0xeaac,	// (0x00033f01) bg_list_pane_g2

0xeabf,	// (0x00033f14) bg_list_pane_g3_ParamLimits

0xeabf,	// (0x00033f14) bg_list_pane_g3

0xead1,	// (0x00033f26) bg_list_pane_g4_ParamLimits

0xead1,	// (0x00033f26) bg_list_pane_g4

0xace2,	// (0x00030137) bg_list_pane_g5_ParamLimits

0xace2,	// (0x00030137) bg_list_pane_g5

0x0004,

0xf81c,	// (0x00034c71) bg_list_pane_g_ParamLimits

0xf81c,	// (0x00034c71) bg_list_pane_g

0xac7a,	// (0x000300cf) list_double2_graphic_large_graphic_pane_ParamLimits

0xac7a,	// (0x000300cf) list_double2_graphic_large_graphic_pane

0xac7a,	// (0x000300cf) list_double2_graphic_pane_ParamLimits

0xac7a,	// (0x000300cf) list_double2_graphic_pane

0xac7a,	// (0x000300cf) list_double2_large_graphic_pane_ParamLimits

0xac7a,	// (0x000300cf) list_double2_large_graphic_pane

0xac8d,	// (0x000300e2) list_double2_pane_ParamLimits

0xac8d,	// (0x000300e2) list_double2_pane

0xac7a,	// (0x000300cf) list_double_graphic_heading_pane_ParamLimits

0xac7a,	// (0x000300cf) list_double_graphic_heading_pane

0xac7a,	// (0x000300cf) list_double_graphic_pane_ParamLimits

0xac7a,	// (0x000300cf) list_double_graphic_pane

0xac7a,	// (0x000300cf) list_double_heading_pane_ParamLimits

0xac7a,	// (0x000300cf) list_double_heading_pane

0xac7a,	// (0x000300cf) list_double_large_graphic_pane_ParamLimits

0xac7a,	// (0x000300cf) list_double_large_graphic_pane

0xac7a,	// (0x000300cf) list_double_number_pane_ParamLimits

0xac7a,	// (0x000300cf) list_double_number_pane

0xac7a,	// (0x000300cf) list_double_pane_ParamLimits

0xac7a,	// (0x000300cf) list_double_pane

0xac7a,	// (0x000300cf) list_double_time_pane_ParamLimits

0xac7a,	// (0x000300cf) list_double_time_pane

0xac7a,	// (0x000300cf) list_setting_number_pane_ParamLimits

0xac7a,	// (0x000300cf) list_setting_number_pane

0xac7a,	// (0x000300cf) list_setting_pane_ParamLimits

0xac7a,	// (0x000300cf) list_setting_pane

0x979d,	// (0x0002ebf2) list_single_2graphic_pane_ParamLimits

0x979d,	// (0x0002ebf2) list_single_2graphic_pane

0x979d,	// (0x0002ebf2) list_single_graphic_heading_pane_ParamLimits

0x979d,	// (0x0002ebf2) list_single_graphic_heading_pane

0x979d,	// (0x0002ebf2) list_single_graphic_pane_ParamLimits

0x979d,	// (0x0002ebf2) list_single_graphic_pane

0x979d,	// (0x0002ebf2) list_single_heading_pane_ParamLimits

0x979d,	// (0x0002ebf2) list_single_heading_pane

0xac8d,	// (0x000300e2) list_single_large_graphic_pane_ParamLimits

0xac8d,	// (0x000300e2) list_single_large_graphic_pane

0x979d,	// (0x0002ebf2) list_single_number_heading_pane_ParamLimits

0x979d,	// (0x0002ebf2) list_single_number_heading_pane

0x979d,	// (0x0002ebf2) list_single_number_pane_ParamLimits

0x979d,	// (0x0002ebf2) list_single_number_pane

0x979d,	// (0x0002ebf2) list_single_pane_ParamLimits

0x979d,	// (0x0002ebf2) list_single_pane

0xc2f5,	// (0x0003174a) list_highlight_pane_cp1

0x6778,	// (0x0002bbcd) list_single_pane_g1_ParamLimits

0x6778,	// (0x0002bbcd) list_single_pane_g1

0x6784,	// (0x0002bbd9) list_single_pane_g2_ParamLimits

0x6784,	// (0x0002bbd9) list_single_pane_g2

0x0001,

0xf5f1,	// (0x00034a46) list_single_pane_g_ParamLimits

0xf5f1,	// (0x00034a46) list_single_pane_g

0x6f8f,	// (0x0002c3e4) list_single_pane_t1_ParamLimits

0x6f8f,	// (0x0002c3e4) list_single_pane_t1

0x6778,	// (0x0002bbcd) list_single_number_pane_g1_ParamLimits

0x6778,	// (0x0002bbcd) list_single_number_pane_g1

0x6784,	// (0x0002bbd9) list_single_number_pane_g2_ParamLimits

0x6784,	// (0x0002bbd9) list_single_number_pane_g2

0x0001,

0xf5f1,	// (0x00034a46) list_single_number_pane_g_ParamLimits

0xf5f1,	// (0x00034a46) list_single_number_pane_g

0x6ec3,	// (0x0002c318) list_single_number_pane_t1_ParamLimits

0x6ec3,	// (0x0002c318) list_single_number_pane_t1

0x6f4f,	// (0x0002c3a4) list_single_number_pane_t2_ParamLimits

0x6f4f,	// (0x0002c3a4) list_single_number_pane_t2

0x0001,

0xf7f0,	// (0x00034c45) list_single_number_pane_t_ParamLimits

0xf7f0,	// (0x00034c45) list_single_number_pane_t

0x676c,	// (0x0002bbc1) list_single_graphic_pane_g1_ParamLimits

0x676c,	// (0x0002bbc1) list_single_graphic_pane_g1

0x6778,	// (0x0002bbcd) list_single_graphic_pane_g2_ParamLimits

0x6778,	// (0x0002bbcd) list_single_graphic_pane_g2

0x6784,	// (0x0002bbd9) list_single_graphic_pane_g3_ParamLimits

0x6784,	// (0x0002bbd9) list_single_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00034a3f) list_single_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00034a3f) list_single_graphic_pane_g

0x6790,	// (0x0002bbe5) list_single_graphic_pane_t1_ParamLimits

0x6790,	// (0x0002bbe5) list_single_graphic_pane_t1

0x6778,	// (0x0002bbcd) list_single_heading_pane_g1_ParamLimits

0x6778,	// (0x0002bbcd) list_single_heading_pane_g1

0x6784,	// (0x0002bbd9) list_single_heading_pane_g2_ParamLimits

0x6784,	// (0x0002bbd9) list_single_heading_pane_g2

0x0001,

0xf5f1,	// (0x00034a46) list_single_heading_pane_g_ParamLimits

0xf5f1,	// (0x00034a46) list_single_heading_pane_g

0x67a6,	// (0x0002bbfb) list_single_heading_pane_t1_ParamLimits

0x67a6,	// (0x0002bbfb) list_single_heading_pane_t1

0x67bc,	// (0x0002bc11) list_single_heading_pane_t2_ParamLimits

0x67bc,	// (0x0002bc11) list_single_heading_pane_t2

0x0001,

0xf5f6,	// (0x00034a4b) list_single_heading_pane_t_ParamLimits

0xf5f6,	// (0x00034a4b) list_single_heading_pane_t

0x6778,	// (0x0002bbcd) list_single_number_heading_pane_g1_ParamLimits

0x6778,	// (0x0002bbcd) list_single_number_heading_pane_g1

0x6784,	// (0x0002bbd9) list_single_number_heading_pane_g2_ParamLimits

0x6784,	// (0x0002bbd9) list_single_number_heading_pane_g2

0x0001,

0xf5f1,	// (0x00034a46) list_single_number_heading_pane_g_ParamLimits

0xf5f1,	// (0x00034a46) list_single_number_heading_pane_g

0x67a6,	// (0x0002bbfb) list_single_number_heading_pane_t1_ParamLimits

0x67a6,	// (0x0002bbfb) list_single_number_heading_pane_t1

0x67ce,	// (0x0002bc23) list_single_number_heading_pane_t2_ParamLimits

0x67ce,	// (0x0002bc23) list_single_number_heading_pane_t2

0x67e0,	// (0x0002bc35) list_single_number_heading_pane_t3_ParamLimits

0x67e0,	// (0x0002bc35) list_single_number_heading_pane_t3

0x0002,

0xf5fb,	// (0x00034a50) list_single_number_heading_pane_t_ParamLimits

0xf5fb,	// (0x00034a50) list_single_number_heading_pane_t

0x67f2,	// (0x0002bc47) list_single_graphic_heading_pane_g1_ParamLimits

0x67f2,	// (0x0002bc47) list_single_graphic_heading_pane_g1

0x893f,	// (0x0002dd94) list_single_graphic_heading_pane_g4_ParamLimits

0x893f,	// (0x0002dd94) list_single_graphic_heading_pane_g4

0x6784,	// (0x0002bbd9) list_single_graphic_heading_pane_g5_ParamLimits

0x6784,	// (0x0002bbd9) list_single_graphic_heading_pane_g5

0x0002,

0xf602,	// (0x00034a57) list_single_graphic_heading_pane_g_ParamLimits

0xf602,	// (0x00034a57) list_single_graphic_heading_pane_g

0x67a6,	// (0x0002bbfb) list_single_graphic_heading_pane_t1_ParamLimits

0x67a6,	// (0x0002bbfb) list_single_graphic_heading_pane_t1

0x680f,	// (0x0002bc64) list_single_graphic_heading_pane_t2_ParamLimits

0x680f,	// (0x0002bc64) list_single_graphic_heading_pane_t2

0x0001,

0xf609,	// (0x00034a5e) list_single_graphic_heading_pane_t_ParamLimits

0xf609,	// (0x00034a5e) list_single_graphic_heading_pane_t

0x70d4,	// (0x0002c529) list_single_large_graphic_pane_g1_ParamLimits

0x70d4,	// (0x0002c529) list_single_large_graphic_pane_g1

0x70e0,	// (0x0002c535) list_single_large_graphic_pane_g2_ParamLimits

0x70e0,	// (0x0002c535) list_single_large_graphic_pane_g2

0x70ec,	// (0x0002c541) list_single_large_graphic_pane_g3_ParamLimits

0x70ec,	// (0x0002c541) list_single_large_graphic_pane_g3

0x0002,

0xf60e,	// (0x00034a63) list_single_large_graphic_pane_g_ParamLimits

0xf60e,	// (0x00034a63) list_single_large_graphic_pane_g

0xde2b,	// (0x00033280) wait_border_pane_g2_copy1

0x8950,	// (0x0002dda5) list_single_large_graphic_pane_g4_cp2

0x70f8,	// (0x0002c54d) list_single_large_graphic_pane_t1_ParamLimits

0x70f8,	// (0x0002c54d) list_single_large_graphic_pane_t1

0x8958,	// (0x0002ddad) list_double_pane_g1_ParamLimits

0x8958,	// (0x0002ddad) list_double_pane_g1

0x8964,	// (0x0002ddb9) list_double_pane_g2_ParamLimits

0x8964,	// (0x0002ddb9) list_double_pane_g2

0x0001,

0xf615,	// (0x00034a6a) list_double_pane_g_ParamLimits

0xf615,	// (0x00034a6a) list_double_pane_g

0x927c,	// (0x0002e6d1) list_double_pane_t1_ParamLimits

0x927c,	// (0x0002e6d1) list_double_pane_t1

0x9292,	// (0x0002e6e7) list_double_pane_t2_ParamLimits

0x9292,	// (0x0002e6e7) list_double_pane_t2

0x0001,

0xf61a,	// (0x00034a6f) list_double_pane_t_ParamLimits

0xf61a,	// (0x00034a6f) list_double_pane_t

0x92a4,	// (0x0002e6f9) list_double2_pane_g1_ParamLimits

0x92a4,	// (0x0002e6f9) list_double2_pane_g1

0x6a48,	// (0x0002be9d) list_double2_pane_g2_ParamLimits

0x6a48,	// (0x0002be9d) list_double2_pane_g2

0x0001,

0xf61f,	// (0x00034a74) list_double2_pane_g_ParamLimits

0xf61f,	// (0x00034a74) list_double2_pane_g

0x92b5,	// (0x0002e70a) list_double2_pane_t1_ParamLimits

0x92b5,	// (0x0002e70a) list_double2_pane_t1

0x92cb,	// (0x0002e720) list_double2_pane_t2_ParamLimits

0x92cb,	// (0x0002e720) list_double2_pane_t2

0x0001,

0xf624,	// (0x00034a79) list_double2_pane_t_ParamLimits

0xf624,	// (0x00034a79) list_double2_pane_t

0x8958,	// (0x0002ddad) list_double_number_pane_g1_ParamLimits

0x8958,	// (0x0002ddad) list_double_number_pane_g1

0x8964,	// (0x0002ddb9) list_double_number_pane_g2_ParamLimits

0x8964,	// (0x0002ddb9) list_double_number_pane_g2

0x0001,

0xf615,	// (0x00034a6a) list_double_number_pane_g_ParamLimits

0xf615,	// (0x00034a6a) list_double_number_pane_g

0x92dd,	// (0x0002e732) list_double_number_pane_t1_ParamLimits

0x92dd,	// (0x0002e732) list_double_number_pane_t1

0x92ef,	// (0x0002e744) list_double_number_pane_t2_ParamLimits

0x92ef,	// (0x0002e744) list_double_number_pane_t2

0x9305,	// (0x0002e75a) list_double_number_pane_t3_ParamLimits

0x9305,	// (0x0002e75a) list_double_number_pane_t3

0x0002,

0xf629,	// (0x00034a7e) list_double_number_pane_t_ParamLimits

0xf629,	// (0x00034a7e) list_double_number_pane_t

0x9317,	// (0x0002e76c) list_double_graphic_pane_g1_ParamLimits

0x9317,	// (0x0002e76c) list_double_graphic_pane_g1

0x9323,	// (0x0002e778) list_double_graphic_pane_g2_ParamLimits

0x9323,	// (0x0002e778) list_double_graphic_pane_g2

0x9332,	// (0x0002e787) list_double_graphic_pane_g3_ParamLimits

0x9332,	// (0x0002e787) list_double_graphic_pane_g3

0x0003,

0xf630,	// (0x00034a85) list_double_graphic_pane_g_ParamLimits

0xf630,	// (0x00034a85) list_double_graphic_pane_g

0x934a,	// (0x0002e79f) list_double_graphic_pane_t1_ParamLimits

0x934a,	// (0x0002e79f) list_double_graphic_pane_t1

0x9360,	// (0x0002e7b5) list_double_graphic_pane_t2_ParamLimits

0x9360,	// (0x0002e7b5) list_double_graphic_pane_t2

0x0001,

0xf639,	// (0x00034a8e) list_double_graphic_pane_t_ParamLimits

0xf639,	// (0x00034a8e) list_double_graphic_pane_t

0x9317,	// (0x0002e76c) list_double2_graphic_pane_g1_ParamLimits

0x9317,	// (0x0002e76c) list_double2_graphic_pane_g1

0x9372,	// (0x0002e7c7) list_double2_graphic_pane_g2_ParamLimits

0x9372,	// (0x0002e7c7) list_double2_graphic_pane_g2

0x937e,	// (0x0002e7d3) list_double2_graphic_pane_g3_ParamLimits

0x937e,	// (0x0002e7d3) list_double2_graphic_pane_g3

0x0002,

0xf63e,	// (0x00034a93) list_double2_graphic_pane_g_ParamLimits

0xf63e,	// (0x00034a93) list_double2_graphic_pane_g

0x92ef,	// (0x0002e744) list_double2_graphic_pane_t1_ParamLimits

0x92ef,	// (0x0002e744) list_double2_graphic_pane_t1

0x938a,	// (0x0002e7df) list_double2_graphic_pane_t2_ParamLimits

0x938a,	// (0x0002e7df) list_double2_graphic_pane_t2

0x0001,

0xf645,	// (0x00034a9a) list_double2_graphic_pane_t_ParamLimits

0xf645,	// (0x00034a9a) list_double2_graphic_pane_t

0x939c,	// (0x0002e7f1) list_double_large_graphic_pane_g1_ParamLimits

0x939c,	// (0x0002e7f1) list_double_large_graphic_pane_g1

0x93c7,	// (0x0002e81c) list_double_large_graphic_pane_g2_ParamLimits

0x93c7,	// (0x0002e81c) list_double_large_graphic_pane_g2

0x8964,	// (0x0002ddb9) list_double_large_graphic_pane_g3_ParamLimits

0x8964,	// (0x0002ddb9) list_double_large_graphic_pane_g3

0x93d8,	// (0x0002e82d) list_double_large_graphic_pane_g4_ParamLimits

0x93d8,	// (0x0002e82d) list_double_large_graphic_pane_g4

0x0004,

0xf64a,	// (0x00034a9f) list_double_large_graphic_pane_g_ParamLimits

0xf64a,	// (0x00034a9f) list_double_large_graphic_pane_g

0x93ea,	// (0x0002e83f) list_double_large_graphic_pane_t1_ParamLimits

0x93ea,	// (0x0002e83f) list_double_large_graphic_pane_t1

0x9403,	// (0x0002e858) list_double_large_graphic_pane_t2_ParamLimits

0x9403,	// (0x0002e858) list_double_large_graphic_pane_t2

0x0001,

0xf655,	// (0x00034aaa) list_double_large_graphic_pane_t_ParamLimits

0xf655,	// (0x00034aaa) list_double_large_graphic_pane_t

0x9415,	// (0x0002e86a) list_double2_large_graphic_pane_g1_ParamLimits

0x9415,	// (0x0002e86a) list_double2_large_graphic_pane_g1

0x93c7,	// (0x0002e81c) list_double2_large_graphic_pane_g2_ParamLimits

0x93c7,	// (0x0002e81c) list_double2_large_graphic_pane_g2

0x8964,	// (0x0002ddb9) list_double2_large_graphic_pane_g3_ParamLimits

0x8964,	// (0x0002ddb9) list_double2_large_graphic_pane_g3

0x0002,

0xf65a,	// (0x00034aaf) list_double2_large_graphic_pane_g_ParamLimits

0xf65a,	// (0x00034aaf) list_double2_large_graphic_pane_g

0x9421,	// (0x0002e876) list_double2_large_graphic_pane_t1_ParamLimits

0x9421,	// (0x0002e876) list_double2_large_graphic_pane_t1

0x9437,	// (0x0002e88c) list_double2_large_graphic_pane_t2_ParamLimits

0x9437,	// (0x0002e88c) list_double2_large_graphic_pane_t2

0x0001,

0xf661,	// (0x00034ab6) list_double2_large_graphic_pane_t_ParamLimits

0xf661,	// (0x00034ab6) list_double2_large_graphic_pane_t

0x9449,	// (0x0002e89e) list_double_heading_pane_g1_ParamLimits

0x9449,	// (0x0002e89e) list_double_heading_pane_g1

0x686f,	// (0x0002bcc4) list_double_heading_pane_g2_ParamLimits

0x686f,	// (0x0002bcc4) list_double_heading_pane_g2

0x0001,

0xf666,	// (0x00034abb) list_double_heading_pane_g_ParamLimits

0xf666,	// (0x00034abb) list_double_heading_pane_g

0x945a,	// (0x0002e8af) list_double_heading_pane_t1_ParamLimits

0x945a,	// (0x0002e8af) list_double_heading_pane_t1

0x9470,	// (0x0002e8c5) list_double_heading_pane_t2_ParamLimits

0x9470,	// (0x0002e8c5) list_double_heading_pane_t2

0x0001,

0xf66b,	// (0x00034ac0) list_double_heading_pane_t_ParamLimits

0xf66b,	// (0x00034ac0) list_double_heading_pane_t

0x6900,	// (0x0002bd55) list_double_graphic_heading_pane_g1_ParamLimits

0x6900,	// (0x0002bd55) list_double_graphic_heading_pane_g1

0x9449,	// (0x0002e89e) list_double_graphic_heading_pane_g2_ParamLimits

0x9449,	// (0x0002e89e) list_double_graphic_heading_pane_g2

0x686f,	// (0x0002bcc4) list_double_graphic_heading_pane_g3_ParamLimits

0x686f,	// (0x0002bcc4) list_double_graphic_heading_pane_g3

0x0002,

0xf670,	// (0x00034ac5) list_double_graphic_heading_pane_g_ParamLimits

0xf670,	// (0x00034ac5) list_double_graphic_heading_pane_g

0x9482,	// (0x0002e8d7) list_double_graphic_heading_pane_t1_ParamLimits

0x9482,	// (0x0002e8d7) list_double_graphic_heading_pane_t1

0x938a,	// (0x0002e7df) list_double_graphic_heading_pane_t2_ParamLimits

0x938a,	// (0x0002e7df) list_double_graphic_heading_pane_t2

0x0001,

0xf677,	// (0x00034acc) list_double_graphic_heading_pane_t_ParamLimits

0xf677,	// (0x00034acc) list_double_graphic_heading_pane_t

0x93c7,	// (0x0002e81c) list_double_time_pane_g1_ParamLimits

0x93c7,	// (0x0002e81c) list_double_time_pane_g1

0x8964,	// (0x0002ddb9) list_double_time_pane_g2_ParamLimits

0x8964,	// (0x0002ddb9) list_double_time_pane_g2

0x0001,

0xf67c,	// (0x00034ad1) list_double_time_pane_g_ParamLimits

0xf67c,	// (0x00034ad1) list_double_time_pane_g

0x9421,	// (0x0002e876) list_double_time_pane_t1_ParamLimits

0x9421,	// (0x0002e876) list_double_time_pane_t1

0x9498,	// (0x0002e8ed) list_double_time_pane_t2_ParamLimits

0x9498,	// (0x0002e8ed) list_double_time_pane_t2

0x94aa,	// (0x0002e8ff) list_double_time_pane_t3_ParamLimits

0x94aa,	// (0x0002e8ff) list_double_time_pane_t3

0x94bc,	// (0x0002e911) list_double_time_pane_t4_ParamLimits

0x94bc,	// (0x0002e911) list_double_time_pane_t4

0x0003,

0xf681,	// (0x00034ad6) list_double_time_pane_t_ParamLimits

0xf681,	// (0x00034ad6) list_double_time_pane_t

0x695b,	// (0x0002bdb0) list_setting_pane_g1_ParamLimits

0x695b,	// (0x0002bdb0) list_setting_pane_g1

0x6967,	// (0x0002bdbc) list_setting_pane_g2_ParamLimits

0x6967,	// (0x0002bdbc) list_setting_pane_g2

0x0001,

0xf68a,	// (0x00034adf) list_setting_pane_g_ParamLimits

0xf68a,	// (0x00034adf) list_setting_pane_g

0x94ce,	// (0x0002e923) list_setting_pane_t1_ParamLimits

0x94ce,	// (0x0002e923) list_setting_pane_t1

0x94e8,	// (0x0002e93d) list_setting_pane_t2_ParamLimits

0x94e8,	// (0x0002e93d) list_setting_pane_t2

0x0002,

0xf68f,	// (0x00034ae4) list_setting_pane_t_ParamLimits

0xf68f,	// (0x00034ae4) list_setting_pane_t

0x9525,	// (0x0002e97a) set_value_pane_cp_ParamLimits

0x9525,	// (0x0002e97a) set_value_pane_cp

0x9531,	// (0x0002e986) list_setting_number_pane_g1_ParamLimits

0x9531,	// (0x0002e986) list_setting_number_pane_g1

0x953d,	// (0x0002e992) list_setting_number_pane_g2_ParamLimits

0x953d,	// (0x0002e992) list_setting_number_pane_g2

0x0001,

0xf696,	// (0x00034aeb) list_setting_number_pane_g_ParamLimits

0xf696,	// (0x00034aeb) list_setting_number_pane_g

0x9549,	// (0x0002e99e) list_setting_number_pane_t1_ParamLimits

0x9549,	// (0x0002e99e) list_setting_number_pane_t1

0x9562,	// (0x0002e9b7) list_setting_number_pane_t2_ParamLimits

0x9562,	// (0x0002e9b7) list_setting_number_pane_t2

0x957c,	// (0x0002e9d1) list_setting_number_pane_t3_ParamLimits

0x957c,	// (0x0002e9d1) list_setting_number_pane_t3

0x0003,

0xf69b,	// (0x00034af0) list_setting_number_pane_t_ParamLimits

0xf69b,	// (0x00034af0) list_setting_number_pane_t

0x9525,	// (0x0002e97a) set_value_pane_ParamLimits

0x9525,	// (0x0002e97a) set_value_pane

0xc93f,	// (0x00031d94) bg_set_opt_pane_ParamLimits

0xc93f,	// (0x00031d94) bg_set_opt_pane

0x6bb4,	// (0x0002c009) set_value_pane_t1

0xc960,	// (0x00031db5) slider_set_pane_cp3

0xc969,	// (0x00031dbe) volume_small_pane_cp

0xc972,	// (0x00031dc7) list_form_gen_pane

0xc97b,	// (0x00031dd0) scroll_pane_cp8

0x95bf,	// (0x0002ea14) form_field_data_pane_ParamLimits

0x95bf,	// (0x0002ea14) form_field_data_pane

0x95d6,	// (0x0002ea2b) form_field_data_wide_pane_ParamLimits

0x95d6,	// (0x0002ea2b) form_field_data_wide_pane

0x95f6,	// (0x0002ea4b) form_field_popup_pane_ParamLimits

0x95f6,	// (0x0002ea4b) form_field_popup_pane

0x9614,	// (0x0002ea69) form_field_popup_wide_pane_ParamLimits

0x9614,	// (0x0002ea69) form_field_popup_wide_pane

0x6c44,	// (0x0002c099) form_field_slider_pane_ParamLimits

0x6c44,	// (0x0002c099) form_field_slider_pane

0x6c57,	// (0x0002c0ac) form_field_slider_wide_pane_ParamLimits

0x6c57,	// (0x0002c0ac) form_field_slider_wide_pane

0xc98c,	// (0x00031de1) data_form_pane

0x9635,	// (0x0002ea8a) form_field_data_pane_t1

0xc998,	// (0x00031ded) input_focus_pane

0xc9a6,	// (0x00031dfb) data_form_wide_pane

0x6c9a,	// (0x0002c0ef) form_field_data_wide_pane_t1

0xc713,	// (0x00031b68) input_focus_pane_cp6

0x964f,	// (0x0002eaa4) form_field_popup_pane_t1

0xc998,	// (0x00031ded) input_focus_pane_cp7

0xc9d2,	// (0x00031e27) list_form_pane

0x6cde,	// (0x0002c133) form_field_popup_wide_pane_t1

0xc998,	// (0x00031ded) input_focus_pane_cp8

0xc9de,	// (0x00031e33) list_form_wide_pane

0x9671,	// (0x0002eac6) form_field_slider_pane_t1_ParamLimits

0x9671,	// (0x0002eac6) form_field_slider_pane_t1

0x9689,	// (0x0002eade) form_field_slider_pane_t2_ParamLimits

0x9689,	// (0x0002eade) form_field_slider_pane_t2

0x0001,

0xf6ab,	// (0x00034b00) form_field_slider_pane_t_ParamLimits

0xf6ab,	// (0x00034b00) form_field_slider_pane_t

0xc343,	// (0x00031798) input_focus_pane_cp9_ParamLimits

0xc343,	// (0x00031798) input_focus_pane_cp9

0x969e,	// (0x0002eaf3) slider_cont_pane_ParamLimits

0x969e,	// (0x0002eaf3) slider_cont_pane

0xc9ed,	// (0x00031e42) form_field_slider_wide_pane_t1_ParamLimits

0xc9ed,	// (0x00031e42) form_field_slider_wide_pane_t1

0x6d35,	// (0x0002c18a) form_field_slider_wide_pane_t2_ParamLimits

0x6d35,	// (0x0002c18a) form_field_slider_wide_pane_t2

0x0001,

0xf6b0,	// (0x00034b05) form_field_slider_wide_pane_t_ParamLimits

0xf6b0,	// (0x00034b05) form_field_slider_wide_pane_t

0xc343,	// (0x00031798) input_focus_pane_cp10_ParamLimits

0xc343,	// (0x00031798) input_focus_pane_cp10

0x96b2,	// (0x0002eb07) slider_cont_pane_cp1_ParamLimits

0x96b2,	// (0x0002eb07) slider_cont_pane_cp1

0x96c6,	// (0x0002eb1b) slider_form_pane_cp

0xc9ff,	// (0x00031e54) input_focus_pane_g1

0xca07,	// (0x00031e5c) input_focus_pane_g2

0xca0f,	// (0x00031e64) input_focus_pane_g3

0xca17,	// (0x00031e6c) input_focus_pane_g4

0xca1f,	// (0x00031e74) input_focus_pane_g5

0xca27,	// (0x00031e7c) input_focus_pane_g6

0xca2f,	// (0x00031e84) input_focus_pane_g7

0xca37,	// (0x00031e8c) input_focus_pane_g8

0xca3f,	// (0x00031e94) input_focus_pane_g9

0xc2eb,	// (0x00031740) input_focus_pane_g10

0x0009,

0x00e7,	// (0x0002553c) input_focus_pane_g

0xde34,	// (0x00033289) wait_border_pane_g3_copy1

0x96ce,	// (0x0002eb23) data_form_pane_t1

0xc2eb,	// (0x00031740) wait_anim_pane_g1_copy1

0x9771,	// (0x0002ebc6) data_form_wide_pane_t1

0x96e8,	// (0x0002eb3d) list_form_graphic_pane_cp_ParamLimits

0x96e8,	// (0x0002eb3d) list_form_graphic_pane_cp

0xea55,	// (0x00033eaa) slider_form_pane_g1

0xea5e,	// (0x00033eb3) slider_form_pane_g2

0x0006,

0xf80d,	// (0x00034c62) slider_form_pane_g

0x96fb,	// (0x0002eb50) list_form_graphic_pane_ParamLimits

0x96fb,	// (0x0002eb50) list_form_graphic_pane

0x6daf,	// (0x0002c204) list_form_graphic_pane_g1

0x6db7,	// (0x0002c20c) list_form_graphic_pane_t1_ParamLimits

0x6db7,	// (0x0002c20c) list_form_graphic_pane_t1

0xc351,	// (0x000317a6) list_highlight_pane_cp5_ParamLimits

0xc351,	// (0x000317a6) list_highlight_pane_cp5

0x6dcc,	// (0x0002c221) find_pane_g1

0xca47,	// (0x00031e9c) input_find_pane

0x6dd5,	// (0x0002c22a) input_find_pane_g1_ParamLimits

0x6dd5,	// (0x0002c22a) input_find_pane_g1

0x6de1,	// (0x0002c236) input_find_pane_t1_ParamLimits

0x6de1,	// (0x0002c236) input_find_pane_t1

0x6df6,	// (0x0002c24b) input_find_pane_t2_ParamLimits

0x6df6,	// (0x0002c24b) input_find_pane_t2

0x0001,

0xf6b5,	// (0x00034b0a) input_find_pane_t_ParamLimits

0xf6b5,	// (0x00034b0a) input_find_pane_t

0xca50,	// (0x00031ea5) input_focus_pane_cp5_ParamLimits

0xca50,	// (0x00031ea5) input_focus_pane_cp5

0x9ade,	// (0x0002ef33) bg_popup_window_pane_cp2_ParamLimits

0x9ade,	// (0x0002ef33) bg_popup_window_pane_cp2

0x9aeb,	// (0x0002ef40) listscroll_menu_pane_ParamLimits

0x9aeb,	// (0x0002ef40) listscroll_menu_pane

0x9af7,	// (0x0002ef4c) popup_submenu_window_ParamLimits

0x9af7,	// (0x0002ef4c) popup_submenu_window

0xca5e,	// (0x00031eb3) find_popup_pane_g1

0xca66,	// (0x00031ebb) input_popup_find_pane_cp

0xca50,	// (0x00031ea5) input_focus_pane_cp4_ParamLimits

0xca50,	// (0x00031ea5) input_focus_pane_cp4

0xca70,	// (0x00031ec5) input_popup_find_pane_t1_ParamLimits

0xca70,	// (0x00031ec5) input_popup_find_pane_t1

0xc2f5,	// (0x0003174a) bg_popup_sub_pane_cp

0xca9e,	// (0x00031ef3) listscroll_popup_sub_pane

0xcaa6,	// (0x00031efb) list_submenu_pane_ParamLimits

0xcaa6,	// (0x00031efb) list_submenu_pane

0xcab7,	// (0x00031f0c) scroll_pane_cp4

0xcabf,	// (0x00031f14) list_single_popup_submenu_pane_ParamLimits

0xcabf,	// (0x00031f14) list_single_popup_submenu_pane

0xcad2,	// (0x00031f27) list_single_popup_submenu_pane_g1

0xcada,	// (0x00031f2f) list_single_popup_submenu_pane_t1_ParamLimits

0xcada,	// (0x00031f2f) list_single_popup_submenu_pane_t1

0xc343,	// (0x00031798) bg_active_tab_pane_cp1_ParamLimits

0xc343,	// (0x00031798) bg_active_tab_pane_cp1

0x9b29,	// (0x0002ef7e) tabs_2_active_pane_g1

0x9b31,	// (0x0002ef86) tabs_2_active_pane_t1

0xc343,	// (0x00031798) bg_passive_tab_pane_cp1_ParamLimits

0xc343,	// (0x00031798) bg_passive_tab_pane_cp1

0x9b29,	// (0x0002ef7e) tabs_2_passive_pane_g1

0x9b31,	// (0x0002ef86) tabs_2_passive_pane_t1

0xc351,	// (0x000317a6) bg_active_tab_pane_cp4

0x9b43,	// (0x0002ef98) tabs_2_long_active_pane_t1

0xd608,	// (0x00032a5d) bg_passive_tab_pane_cp4

0x215e,	// (0x000275b3) list_single_midp_graphic_pane_g4_ParamLimits

0xc351,	// (0x000317a6) bg_active_tab_pane_cp5

0x9b56,	// (0x0002efab) tabs_3_long_active_pane_t1

0xd608,	// (0x00032a5d) bg_passive_tab_pane_cp5

0x215e,	// (0x000275b3) list_single_midp_graphic_pane_g4

0xc351,	// (0x000317a6) bg_popup_window_pane_cp13_ParamLimits

0xc351,	// (0x000317a6) bg_popup_window_pane_cp13

0xcaf8,	// (0x00031f4d) listscroll_popup_fast_pane_ParamLimits

0xcaf8,	// (0x00031f4d) listscroll_popup_fast_pane

0xcb07,	// (0x00031f5c) grid_popup_fast_pane_ParamLimits

0xcb07,	// (0x00031f5c) grid_popup_fast_pane

0xcb19,	// (0x00031f6e) scroll_pane_cp9_ParamLimits

0xcb19,	// (0x00031f6e) scroll_pane_cp9

0x4482,	// (0x000298d7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4482,	// (0x000298d7) list_single_graphic_hl_pane_t1_cp2

0xcb3d,	// (0x00031f92) input_focus_pane_cp20_ParamLimits

0xcb3d,	// (0x00031f92) input_focus_pane_cp20

0xcb4b,	// (0x00031fa0) query_popup_data_pane_t1_ParamLimits

0xcb4b,	// (0x00031fa0) query_popup_data_pane_t1

0xcb5e,	// (0x00031fb3) query_popup_data_pane_t2_ParamLimits

0xcb5e,	// (0x00031fb3) query_popup_data_pane_t2

0xcba4,	// (0x00031ff9) query_popup_data_pane_t3_ParamLimits

0xcba4,	// (0x00031ff9) query_popup_data_pane_t3

0xcbe5,	// (0x0003203a) query_popup_data_pane_t4_ParamLimits

0xcbe5,	// (0x0003203a) query_popup_data_pane_t4

0xcc21,	// (0x00032076) query_popup_data_pane_t5_ParamLimits

0xcc21,	// (0x00032076) query_popup_data_pane_t5

0x0004,

0x0101,	// (0x00025556) query_popup_data_pane_t_ParamLimits

0x0101,	// (0x00025556) query_popup_data_pane_t

0xc9ff,	// (0x00031e54) bg_set_opt_pane_g1

0xca07,	// (0x00031e5c) bg_set_opt_pane_g2

0xca0f,	// (0x00031e64) bg_set_opt_pane_g3

0xca17,	// (0x00031e6c) bg_set_opt_pane_g4

0xca1f,	// (0x00031e74) bg_set_opt_pane_g5

0xca27,	// (0x00031e7c) bg_set_opt_pane_g6

0xca2f,	// (0x00031e84) bg_set_opt_pane_g7

0xca37,	// (0x00031e8c) bg_set_opt_pane_g8

0xca3f,	// (0x00031e94) bg_set_opt_pane_g9

0x0008,

0x010c,	// (0x00025561) bg_set_opt_pane_g

0x150b,	// (0x00026960) control_top_pane_stacon_ParamLimits

0x150b,	// (0x00026960) control_top_pane_stacon

0x155e,	// (0x000269b3) signal_pane_stacon_ParamLimits

0x155e,	// (0x000269b3) signal_pane_stacon

0xd080,	// (0x000324d5) stacon_top_pane_g1_ParamLimits

0xd080,	// (0x000324d5) stacon_top_pane_g1

0x1583,	// (0x000269d8) title_pane_stacon_ParamLimits

0x1583,	// (0x000269d8) title_pane_stacon

0x15ad,	// (0x00026a02) uni_indicator_pane_stacon_ParamLimits

0x15ad,	// (0x00026a02) uni_indicator_pane_stacon

0x15c2,	// (0x00026a17) battery_pane_stacon_ParamLimits

0x15c2,	// (0x00026a17) battery_pane_stacon

0x1606,	// (0x00026a5b) control_bottom_pane_stacon_ParamLimits

0x1606,	// (0x00026a5b) control_bottom_pane_stacon

0x1629,	// (0x00026a7e) navi_pane_stacon_ParamLimits

0x1629,	// (0x00026a7e) navi_pane_stacon

0xd0a2,	// (0x000324f7) stacon_bottom_pane_g1_ParamLimits

0xd0a2,	// (0x000324f7) stacon_bottom_pane_g1

0x1136,	// (0x0002658b) aid_levels_signal_lsc_ParamLimits

0x1136,	// (0x0002658b) aid_levels_signal_lsc

0x114d,	// (0x000265a2) signal_pane_stacon_g1_ParamLimits

0x114d,	// (0x000265a2) signal_pane_stacon_g1

0x1161,	// (0x000265b6) signal_pane_stacon_g2_ParamLimits

0x1161,	// (0x000265b6) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x00034b0f) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x00034b0f) signal_pane_stacon_g

0x1196,	// (0x000265eb) title_pane_stacon_t1_ParamLimits

0x1196,	// (0x000265eb) title_pane_stacon_t1

0xcc65,	// (0x000320ba) uni_indicator_pane_stacon_g1

0xcc6f,	// (0x000320c4) uni_indicator_pane_stacon_g2

0xcc79,	// (0x000320ce) uni_indicator_pane_stacon_g3

0xcc83,	// (0x000320d8) uni_indicator_pane_stacon_g4

0x0003,

0x012b,	// (0x00025580) uni_indicator_pane_stacon_g

0x11bb,	// (0x00026610) control_top_pane_stacon_g1

0x11c3,	// (0x00026618) control_top_pane_stacon_t1_ParamLimits

0x11c3,	// (0x00026618) control_top_pane_stacon_t1

0x11fa,	// (0x0002664f) aid_levels_battery_lsc_ParamLimits

0x11fa,	// (0x0002664f) aid_levels_battery_lsc

0x1212,	// (0x00026667) battery_pane_stacon_g1_ParamLimits

0x1212,	// (0x00026667) battery_pane_stacon_g1

0x1225,	// (0x0002667a) battery_pane_stacon_g2_ParamLimits

0x1225,	// (0x0002667a) battery_pane_stacon_g2

0x0001,

0xf6c6,	// (0x00034b1b) battery_pane_stacon_g_ParamLimits

0xf6c6,	// (0x00034b1b) battery_pane_stacon_g

0x1263,	// (0x000266b8) navi_icon_pane_stacon

0x1277,	// (0x000266cc) navi_navi_pane_stacon

0x1263,	// (0x000266b8) navi_text_pane_stacon

0x11bb,	// (0x00026610) control_bottom_pane_stacon_g1

0x128b,	// (0x000266e0) control_bottom_pane_stacon_t1_ParamLimits

0x128b,	// (0x000266e0) control_bottom_pane_stacon_t1

0x9b68,	// (0x0002efbd) grid_app_pane_ParamLimits

0x9b68,	// (0x0002efbd) grid_app_pane

0x9b9e,	// (0x0002eff3) scroll_pane_cp15_ParamLimits

0x9b9e,	// (0x0002eff3) scroll_pane_cp15

0x9bbb,	// (0x0002f010) cell_app_pane_ParamLimits

0x9bbb,	// (0x0002f010) cell_app_pane

0x9c02,	// (0x0002f057) cell_app_pane_g1_ParamLimits

0x9c02,	// (0x0002f057) cell_app_pane_g1

0xcca7,	// (0x000320fc) cell_app_pane_g2_ParamLimits

0xcca7,	// (0x000320fc) cell_app_pane_g2

0x0001,

0xf6cb,	// (0x00034b20) cell_app_pane_g_ParamLimits

0xf6cb,	// (0x00034b20) cell_app_pane_g

0xccb3,	// (0x00032108) cell_app_pane_t1_ParamLimits

0xccb3,	// (0x00032108) cell_app_pane_t1

0xccc5,	// (0x0003211a) grid_highlight_pane_ParamLimits

0xccc5,	// (0x0003211a) grid_highlight_pane

0xc9ff,	// (0x00031e54) cell_highlight_pane_g1

0xca07,	// (0x00031e5c) cell_highlight_pane_g2

0xca0f,	// (0x00031e64) cell_highlight_pane_g3

0xca17,	// (0x00031e6c) cell_highlight_pane_g4

0xca1f,	// (0x00031e74) cell_highlight_pane_g5

0xca27,	// (0x00031e7c) cell_highlight_pane_g6

0xca2f,	// (0x00031e84) cell_highlight_pane_g7

0xca37,	// (0x00031e8c) cell_highlight_pane_g8

0xca3f,	// (0x00031e94) cell_highlight_pane_g9

0xc2eb,	// (0x00031740) cell_highlight_pane_g10

0x0009,

0x00e7,	// (0x0002553c) cell_highlight_pane_g

0xccd6,	// (0x0003212b) bg_scroll_pane

0x135a,	// (0x000267af) scroll_handle_pane

0xcd1d,	// (0x00032172) scroll_bg_pane_g1

0xcd32,	// (0x00032187) scroll_bg_pane_g2

0xcd4a,	// (0x0003219f) scroll_bg_pane_g3

0x0002,

0x013e,	// (0x00025593) scroll_bg_pane_g

0xcd5f,	// (0x000321b4) scroll_handle_focus_pane_ParamLimits

0xcd5f,	// (0x000321b4) scroll_handle_focus_pane

0xcd1d,	// (0x00032172) scroll_handle_pane_g1

0xcd6c,	// (0x000321c1) scroll_handle_pane_g2

0xcd4a,	// (0x0003219f) scroll_handle_pane_g3

0x0002,

0x0145,	// (0x0002559a) scroll_handle_pane_g

0xca50,	// (0x00031ea5) bg_popup_sub_pane_cp21_ParamLimits

0xca50,	// (0x00031ea5) bg_popup_sub_pane_cp21

0xcd80,	// (0x000321d5) popup_fep_japan_predictive_window_t1_ParamLimits

0xcd80,	// (0x000321d5) popup_fep_japan_predictive_window_t1

0xcd97,	// (0x000321ec) popup_fep_japan_predictive_window_t2_ParamLimits

0xcd97,	// (0x000321ec) popup_fep_japan_predictive_window_t2

0xcdca,	// (0x0003221f) popup_fep_japan_predictive_window_t3_ParamLimits

0xcdca,	// (0x0003221f) popup_fep_japan_predictive_window_t3

0x0002,

0x014c,	// (0x000255a1) popup_fep_japan_predictive_window_t_ParamLimits

0x014c,	// (0x000255a1) popup_fep_japan_predictive_window_t

0xc2f5,	// (0x0003174a) bg_popup_sub_pane_cp23

0xce01,	// (0x00032256) listscroll_japin_cand_pane

0xce09,	// (0x0003225e) popup_fep_japan_candidate_window_t1

0xce17,	// (0x0003226c) candidate_pane_ParamLimits

0xce17,	// (0x0003226c) candidate_pane

0xce29,	// (0x0003227e) scroll_pane_cp30

0xce31,	// (0x00032286) list_single_popup_jap_candidate_pane_ParamLimits

0xce31,	// (0x00032286) list_single_popup_jap_candidate_pane

0xc2f5,	// (0x0003174a) list_highlight_pane_cp30

0xce45,	// (0x0003229a) list_single_popup_jap_candidate_pane_t1

0xce54,	// (0x000322a9) level_1_signal

0xce61,	// (0x000322b6) level_2_signal

0xce6e,	// (0x000322c3) level_3_signal

0xce7b,	// (0x000322d0) level_4_signal

0xce88,	// (0x000322dd) level_5_signal

0xce95,	// (0x000322ea) level_6_signal

0xcea2,	// (0x000322f7) level_7_signal

0xce54,	// (0x000322a9) level_1_battery

0xce61,	// (0x000322b6) level_2_battery

0xce6e,	// (0x000322c3) level_3_battery

0xce7b,	// (0x000322d0) level_4_battery

0xce88,	// (0x000322dd) level_5_battery

0xce95,	// (0x000322ea) level_6_battery

0xcea2,	// (0x000322f7) level_7_battery

0xcec7,	// (0x0003231c) list_menu_pane_ParamLimits

0xcec7,	// (0x0003231c) list_menu_pane

0xced8,	// (0x0003232d) scroll_pane_cp25_ParamLimits

0xced8,	// (0x0003232d) scroll_pane_cp25

0xcef1,	// (0x00032346) list_double2_graphic_pane_cp2_ParamLimits

0xcef1,	// (0x00032346) list_double2_graphic_pane_cp2

0xcef1,	// (0x00032346) list_double2_large_graphic_pane_cp2_ParamLimits

0xcef1,	// (0x00032346) list_double2_large_graphic_pane_cp2

0xcef1,	// (0x00032346) list_double2_pane_cp2_ParamLimits

0xcef1,	// (0x00032346) list_double2_pane_cp2

0xcef1,	// (0x00032346) list_double_graphic_pane_cp2_ParamLimits

0xcef1,	// (0x00032346) list_double_graphic_pane_cp2

0xcef1,	// (0x00032346) list_double_large_graphic_pane_cp2_ParamLimits

0xcef1,	// (0x00032346) list_double_large_graphic_pane_cp2

0xcef1,	// (0x00032346) list_double_number_pane_cp2_ParamLimits

0xcef1,	// (0x00032346) list_double_number_pane_cp2

0xcef1,	// (0x00032346) list_double_pane_cp2_ParamLimits

0xcef1,	// (0x00032346) list_double_pane_cp2

0x9c37,	// (0x0002f08c) list_single_2graphic_pane_cp2_ParamLimits

0x9c37,	// (0x0002f08c) list_single_2graphic_pane_cp2

0x9c37,	// (0x0002f08c) list_single_graphic_heading_pane_cp2_ParamLimits

0x9c37,	// (0x0002f08c) list_single_graphic_heading_pane_cp2

0x9c37,	// (0x0002f08c) list_single_graphic_pane_cp2_ParamLimits

0x9c37,	// (0x0002f08c) list_single_graphic_pane_cp2

0x9c37,	// (0x0002f08c) list_single_heading_pane_cp2_ParamLimits

0x9c37,	// (0x0002f08c) list_single_heading_pane_cp2

0xcf01,	// (0x00032356) list_single_large_graphic_pane_cp2_ParamLimits

0xcf01,	// (0x00032356) list_single_large_graphic_pane_cp2

0x9c37,	// (0x0002f08c) list_single_number_heading_pane_cp2_ParamLimits

0x9c37,	// (0x0002f08c) list_single_number_heading_pane_cp2

0x9c37,	// (0x0002f08c) list_single_number_pane_cp2_ParamLimits

0x9c37,	// (0x0002f08c) list_single_number_pane_cp2

0x9c37,	// (0x0002f08c) list_single_pane_cp2_ParamLimits

0x9c37,	// (0x0002f08c) list_single_pane_cp2

0xcf1b,	// (0x00032370) bg_popup_sub_pane_cp22

0x1471,	// (0x000268c6) popup_side_volume_key_window_g1

0x149b,	// (0x000268f0) popup_side_volume_key_window_t1

0x14b7,	// (0x0002690c) volume_small_pane_cp1

0xc343,	// (0x00031798) bg_popup_sub_pane_cp24_ParamLimits

0xc343,	// (0x00031798) bg_popup_sub_pane_cp24

0xcf31,	// (0x00032386) fep_china_uni_candidate_pane_ParamLimits

0xcf31,	// (0x00032386) fep_china_uni_candidate_pane

0xcf45,	// (0x0003239a) fep_china_uni_entry_pane

0xcf55,	// (0x000323aa) popup_fep_china_uni_window_g1

0xcf71,	// (0x000323c6) fep_china_uni_entry_pane_g1

0xcf79,	// (0x000323ce) fep_china_uni_entry_pane_g2

0x0001,

0x0179,	// (0x000255ce) fep_china_uni_entry_pane_g

0xcf81,	// (0x000323d6) fep_entry_item_pane

0xcf8b,	// (0x000323e0) fep_candidate_item_pane

0xcf93,	// (0x000323e8) fep_china_uni_candidate_pane_g1

0xcf9b,	// (0x000323f0) fep_china_uni_candidate_pane_g2

0xcfa3,	// (0x000323f8) fep_china_uni_candidate_pane_g3

0xcfab,	// (0x00032400) fep_china_uni_candidate_pane_g4

0x0003,

0x017e,	// (0x000255d3) fep_china_uni_candidate_pane_g

0xc2eb,	// (0x00031740) fep_entry_item_pane_g1

0xcfb3,	// (0x00032408) fep_entry_item_pane_t1_ParamLimits

0xcfb3,	// (0x00032408) fep_entry_item_pane_t1

0xcfc9,	// (0x0003241e) fep_candidate_item_pane_t1_ParamLimits

0xcfc9,	// (0x0003241e) fep_candidate_item_pane_t1

0xcfde,	// (0x00032433) fep_candidate_item_pane_t2_ParamLimits

0xcfde,	// (0x00032433) fep_candidate_item_pane_t2

0x0001,

0x0187,	// (0x000255dc) fep_candidate_item_pane_t_ParamLimits

0x0187,	// (0x000255dc) fep_candidate_item_pane_t

0xc351,	// (0x000317a6) list_highlight_pane_cp31_ParamLimits

0xc351,	// (0x000317a6) list_highlight_pane_cp31

0xcff0,	// (0x00032445) level_1_signal_lsc

0xcff9,	// (0x0003244e) level_2_signal_lsc

0xd002,	// (0x00032457) level_3_signal_lsc

0xd00b,	// (0x00032460) level_4_signal_lsc

0xd014,	// (0x00032469) level_5_signal_lsc

0xd01d,	// (0x00032472) level_6_signal_lsc

0xd026,	// (0x0003247b) level_7_signal_lsc

0xd026,	// (0x0003247b) level_1_battery_lsc

0xd02f,	// (0x00032484) level_2_battery_lsc

0xd038,	// (0x0003248d) level_3_battery_lsc

0xd041,	// (0x00032496) level_4_battery_lsc

0xd04a,	// (0x0003249f) level_5_battery_lsc

0xd053,	// (0x000324a8) level_6_battery_lsc

0xcff0,	// (0x00032445) level_7_battery_lsc

0xd05c,	// (0x000324b1) scroll_handle_focus_pane_g1

0xd065,	// (0x000324ba) scroll_handle_focus_pane_g2

0xd06e,	// (0x000324c3) scroll_handle_focus_pane_g3

0x0002,

0x018c,	// (0x000255e1) scroll_handle_focus_pane_g

0x6e0b,	// (0x0002c260) list_single_2graphic_pane_g1_ParamLimits

0x6e0b,	// (0x0002c260) list_single_2graphic_pane_g1

0x893f,	// (0x0002dd94) list_single_2graphic_pane_g2_ParamLimits

0x893f,	// (0x0002dd94) list_single_2graphic_pane_g2

0x6784,	// (0x0002bbd9) list_single_2graphic_pane_g3_ParamLimits

0x6784,	// (0x0002bbd9) list_single_2graphic_pane_g3

0x6e17,	// (0x0002c26c) list_single_2graphic_pane_g4_ParamLimits

0x6e17,	// (0x0002c26c) list_single_2graphic_pane_g4

0x0003,

0xf6ec,	// (0x00034b41) list_single_2graphic_pane_g_ParamLimits

0xf6ec,	// (0x00034b41) list_single_2graphic_pane_g

0x6e23,	// (0x0002c278) list_single_2graphic_pane_t1_ParamLimits

0x6e23,	// (0x0002c278) list_single_2graphic_pane_t1

0x970f,	// (0x0002eb64) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x970f,	// (0x0002eb64) list_double2_graphic_large_graphic_pane_g1

0x93c7,	// (0x0002e81c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x93c7,	// (0x0002e81c) list_double2_graphic_large_graphic_pane_g2

0x8964,	// (0x0002ddb9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8964,	// (0x0002ddb9) list_double2_graphic_large_graphic_pane_g3

0x9721,	// (0x0002eb76) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9721,	// (0x0002eb76) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf6f5,	// (0x00034b4a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf6f5,	// (0x00034b4a) list_double2_graphic_large_graphic_pane_g

0x972d,	// (0x0002eb82) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x972d,	// (0x0002eb82) list_double2_graphic_large_graphic_pane_t1

0x9743,	// (0x0002eb98) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9743,	// (0x0002eb98) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf6fe,	// (0x00034b53) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf6fe,	// (0x00034b53) list_double2_graphic_large_graphic_pane_t

0xd14f,	// (0x000325a4) popup_fast_swap_window_ParamLimits

0xd14f,	// (0x000325a4) popup_fast_swap_window

0xd16b,	// (0x000325c0) popup_side_volume_key_window

0xd185,	// (0x000325da) stacon_top_pane

0xd18f,	// (0x000325e4) status_pane_ParamLimits

0xd18f,	// (0x000325e4) status_pane

0xd185,	// (0x000325da) status_small_pane

0xc2f5,	// (0x0003174a) control_pane

0xc2f5,	// (0x0003174a) stacon_bottom_pane

0xc97b,	// (0x00031dd0) scroll_pane_cp121

0xc972,	// (0x00031dc7) set_content_pane

0x9c99,	// (0x0002f0ee) bg_active_tab_pane_g1_cp1

0xd077,	// (0x000324cc) bg_active_tab_pane_g2_cp1

0x9ca2,	// (0x0002f0f7) bg_active_tab_pane_g3_cp1

0x9c99,	// (0x0002f0ee) bg_passive_tab_pane_g1_cp1

0xd077,	// (0x000324cc) bg_passive_tab_pane_g2_cp1

0x9ca2,	// (0x0002f0f7) bg_passive_tab_pane_g3_cp1

0x9cab,	// (0x0002f100) bg_active_tab_pane_g1_cp2

0xd077,	// (0x000324cc) bg_active_tab_pane_g2_cp2

0x9cb4,	// (0x0002f109) bg_active_tab_pane_g3_cp2

0x9cab,	// (0x0002f100) bg_passive_tab_pane_g1_cp2

0xd077,	// (0x000324cc) bg_passive_tab_pane_g2_cp2

0x9cb4,	// (0x0002f109) bg_passive_tab_pane_g3_cp2

0x9cbd,	// (0x0002f112) bg_active_tab_pane_g1_cp3

0xd077,	// (0x000324cc) bg_active_tab_pane_g2_cp3

0x9cc6,	// (0x0002f11b) bg_active_tab_pane_g3_cp3

0x9cbd,	// (0x0002f112) bg_passive_tab_pane_g1_cp3

0xd077,	// (0x000324cc) bg_passive_tab_pane_g2_cp3

0x9cc6,	// (0x0002f11b) bg_passive_tab_pane_g3_cp3

0x9ccf,	// (0x0002f124) bg_active_tab_pane_g1_cp4

0xd077,	// (0x000324cc) bg_active_tab_pane_g2_cp4

0x9cd8,	// (0x0002f12d) bg_active_tab_pane_g3_cp4

0x9ccf,	// (0x0002f124) bg_passive_tab_pane_g1_cp4

0xd077,	// (0x000324cc) bg_passive_tab_pane_g2_cp4

0x9cd8,	// (0x0002f12d) bg_passive_tab_pane_g3_cp4

0xd0be,	// (0x00032513) bg_active_tab_pane_g1_cp5

0xd077,	// (0x000324cc) bg_active_tab_pane_g2_cp5

0xd0c7,	// (0x0003251c) bg_active_tab_pane_g3_cp5

0xd0be,	// (0x00032513) bg_passive_tab_pane_g1_cp5

0xd077,	// (0x000324cc) bg_passive_tab_pane_g2_cp5

0xd0c7,	// (0x0003251c) bg_passive_tab_pane_g3_cp5

0x64fe,	// (0x0002b953) list_set_graphic_pane_ParamLimits

0x64fe,	// (0x0002b953) list_set_graphic_pane

0xc2f5,	// (0x0003174a) bg_set_opt_pane_cp4

0xd0d0,	// (0x00032525) list_set_graphic_pane_g1_ParamLimits

0xd0d0,	// (0x00032525) list_set_graphic_pane_g1

0xd0dc,	// (0x00032531) list_set_graphic_pane_g2_ParamLimits

0xd0dc,	// (0x00032531) list_set_graphic_pane_g2

0x0001,

0x01aa,	// (0x000255ff) list_set_graphic_pane_g_ParamLimits

0x01aa,	// (0x000255ff) list_set_graphic_pane_g

0x0009,

0xf8ac,	// (0x00034d01) volume_small_pane_cp_g

0xd100,	// (0x00032555) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd100,	// (0x00032555) list_double2_large_graphic_pane_g1_cp2

0xd10e,	// (0x00032563) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd10e,	// (0x00032563) list_double2_large_graphic_pane_g2_cp2

0xd11f,	// (0x00032574) list_double2_large_graphic_pane_g3_cp2

0xd127,	// (0x0003257c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xd127,	// (0x0003257c) list_double2_large_graphic_pane_t1_cp2

0xd13d,	// (0x00032592) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xd13d,	// (0x00032592) list_double2_large_graphic_pane_t2_cp2

0xe7e7,	// (0x00033c3c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe7e7,	// (0x00033c3c) list_double_large_graphic_pane_g1_cp2

0xe7fa,	// (0x00033c4f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe7fa,	// (0x00033c4f) list_double_large_graphic_pane_g2_cp2

0xd2ad,	// (0x00032702) list_double_large_graphic_pane_g3_cp2

0xe80b,	// (0x00033c60) list_double_large_graphic_pane_g4_cp

0xe813,	// (0x00033c68) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe813,	// (0x00033c68) list_double_large_graphic_pane_t1_cp2

0xe82a,	// (0x00033c7f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe82a,	// (0x00033c7f) list_double_large_graphic_pane_t2_cp2

0xd19d,	// (0x000325f2) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd19d,	// (0x000325f2) list_double2_graphic_pane_g1_cp2

0xd1ab,	// (0x00032600) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd1ab,	// (0x00032600) list_double2_graphic_pane_g2_cp2

0xd1bc,	// (0x00032611) list_double2_graphic_pane_g3_cp2

0xd1c6,	// (0x0003261b) list_double2_graphic_pane_t1_cp2_ParamLimits

0xd1c6,	// (0x0003261b) list_double2_graphic_pane_t1_cp2

0xd1dc,	// (0x00032631) list_double2_graphic_pane_t2_cp2_ParamLimits

0xd1dc,	// (0x00032631) list_double2_graphic_pane_t2_cp2

0xd1ee,	// (0x00032643) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd1ee,	// (0x00032643) list_single_number_heading_pane_g1_cp2

0xd1fa,	// (0x0003264f) list_single_number_heading_pane_g2_cp2

0xd202,	// (0x00032657) list_single_number_heading_pane_t1_cp2_ParamLimits

0xd202,	// (0x00032657) list_single_number_heading_pane_t1_cp2

0xd218,	// (0x0003266d) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd218,	// (0x0003266d) list_single_number_heading_pane_t2_cp2

0xd22c,	// (0x00032681) list_single_number_heading_pane_t3_cp2_ParamLimits

0xd22c,	// (0x00032681) list_single_number_heading_pane_t3_cp2

0xd1ee,	// (0x00032643) list_single_heading_pane_g1_cp2_ParamLimits

0xd1ee,	// (0x00032643) list_single_heading_pane_g1_cp2

0xd1fa,	// (0x0003264f) list_single_heading_pane_g2_cp2

0xd202,	// (0x00032657) list_single_heading_pane_t1_cp2_ParamLimits

0xd202,	// (0x00032657) list_single_heading_pane_t1_cp2

0xe5ef,	// (0x00033a44) list_single_heading_pane_t2_cp2_ParamLimits

0xe5ef,	// (0x00033a44) list_single_heading_pane_t2_cp2

0xe589,	// (0x000339de) list_double_graphic_pane_g1_cp2_ParamLimits

0xe589,	// (0x000339de) list_double_graphic_pane_g1_cp2

0xe595,	// (0x000339ea) list_double_graphic_pane_g2_cp2_ParamLimits

0xe595,	// (0x000339ea) list_double_graphic_pane_g2_cp2

0xe5a4,	// (0x000339f9) list_double_graphic_pane_g3_cp2

0xe5ac,	// (0x00033a01) list_double_graphic_pane_t1_cp2_ParamLimits

0xe5ac,	// (0x00033a01) list_double_graphic_pane_t1_cp2

0xe5c2,	// (0x00033a17) list_double_graphic_pane_t2_cp2_ParamLimits

0xe5c2,	// (0x00033a17) list_double_graphic_pane_t2_cp2

0xd2a1,	// (0x000326f6) list_double_number_pane_g1_cp2_ParamLimits

0xd2a1,	// (0x000326f6) list_double_number_pane_g1_cp2

0xd2ad,	// (0x00032702) list_double_number_pane_g2_cp2

0xe54d,	// (0x000339a2) list_double_number_pane_t1_cp2_ParamLimits

0xe54d,	// (0x000339a2) list_double_number_pane_t1_cp2

0xe561,	// (0x000339b6) list_double_number_pane_t2_cp2_ParamLimits

0xe561,	// (0x000339b6) list_double_number_pane_t2_cp2

0xe577,	// (0x000339cc) list_double_number_pane_t3_cp2_ParamLimits

0xe577,	// (0x000339cc) list_double_number_pane_t3_cp2

0xe4c4,	// (0x00033919) list_single_graphic_pane_g1_cp2_ParamLimits

0xe4c4,	// (0x00033919) list_single_graphic_pane_g1_cp2

0xd305,	// (0x0003275a) list_single_graphic_pane_g2_cp2_ParamLimits

0xd305,	// (0x0003275a) list_single_graphic_pane_g2_cp2

0xd311,	// (0x00032766) list_single_graphic_pane_g3_cp2

0xe49a,	// (0x000338ef) list_single_graphic_pane_t1_cp2_ParamLimits

0xe49a,	// (0x000338ef) list_single_graphic_pane_t1_cp2

0xd305,	// (0x0003275a) list_single_number_pane_g1_cp2_ParamLimits

0xd305,	// (0x0003275a) list_single_number_pane_g1_cp2

0xd311,	// (0x00032766) list_single_number_pane_g2_cp2

0xe49a,	// (0x000338ef) list_single_number_pane_t1_cp2_ParamLimits

0xe49a,	// (0x000338ef) list_single_number_pane_t1_cp2

0xe4b0,	// (0x00033905) list_single_number_pane_t2_cp2_ParamLimits

0xe4b0,	// (0x00033905) list_single_number_pane_t2_cp2

0xd10e,	// (0x00032563) list_double2_pane_g1_cp2_ParamLimits

0xd10e,	// (0x00032563) list_double2_pane_g1_cp2

0xd11f,	// (0x00032574) list_double2_pane_g2_cp2

0xd279,	// (0x000326ce) list_double2_pane_t1_cp2_ParamLimits

0xd279,	// (0x000326ce) list_double2_pane_t1_cp2

0xd28f,	// (0x000326e4) list_double2_pane_t2_cp2_ParamLimits

0xd28f,	// (0x000326e4) list_double2_pane_t2_cp2

0xd2a1,	// (0x000326f6) list_double_pane_g1_cp2_ParamLimits

0xd2a1,	// (0x000326f6) list_double_pane_g1_cp2

0xd2ad,	// (0x00032702) list_double_pane_g2_cp2

0xd2b5,	// (0x0003270a) list_double_pane_t1_cp2_ParamLimits

0xd2b5,	// (0x0003270a) list_double_pane_t1_cp2

0xd2cb,	// (0x00032720) list_double_pane_t2_cp2_ParamLimits

0xd2cb,	// (0x00032720) list_double_pane_t2_cp2

0xd2f5,	// (0x0003274a) list_single_pane_cp2_g3

0xd305,	// (0x0003275a) list_single_pane_g1_cp2_ParamLimits

0xd305,	// (0x0003275a) list_single_pane_g1_cp2

0xd311,	// (0x00032766) list_single_pane_g2_cp2

0xd319,	// (0x0003276e) list_single_pane_t1_cp2_ParamLimits

0xd319,	// (0x0003276e) list_single_pane_t1_cp2

0xd331,	// (0x00032786) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd331,	// (0x00032786) list_single_large_graphic_pane_g1_cp2

0xd33f,	// (0x00032794) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xd33f,	// (0x00032794) list_single_large_graphic_pane_g2_cp2

0xd34b,	// (0x000327a0) list_single_large_graphic_pane_g3_cp2

0xd353,	// (0x000327a8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xd353,	// (0x000327a8) list_single_large_graphic_pane_g4_cp1

0xd36d,	// (0x000327c2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xd36d,	// (0x000327c2) list_single_large_graphic_pane_t1_cp2

0xe464,	// (0x000338b9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xe464,	// (0x000338b9) list_single_graphic_heading_pane_g1_cp2

0xe431,	// (0x00033886) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xe431,	// (0x00033886) list_single_graphic_heading_pane_g4_cp2

0xd311,	// (0x00032766) list_single_graphic_heading_pane_g5_cp2

0xe470,	// (0x000338c5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xe470,	// (0x000338c5) list_single_graphic_heading_pane_t1_cp2

0xe486,	// (0x000338db) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xe486,	// (0x000338db) list_single_graphic_heading_pane_t2_cp2

0xe425,	// (0x0003387a) list_single_2graphic_pane_g1_cp2_ParamLimits

0xe425,	// (0x0003387a) list_single_2graphic_pane_g1_cp2

0xe431,	// (0x00033886) list_single_2graphic_pane_g2_cp2_ParamLimits

0xe431,	// (0x00033886) list_single_2graphic_pane_g2_cp2

0xd311,	// (0x00032766) list_single_2graphic_pane_g3_cp2

0xe442,	// (0x00033897) list_single_2graphic_pane_g4_cp2_ParamLimits

0xe442,	// (0x00033897) list_single_2graphic_pane_g4_cp2

0xe44e,	// (0x000338a3) list_single_2graphic_pane_t1_cp2_ParamLimits

0xe44e,	// (0x000338a3) list_single_2graphic_pane_t1_cp2

0xc2eb,	// (0x00031740) list_highlight_pane_g10_cp1

0xe02b,	// (0x00033480) list_highlight_pane_g1_cp1

0xe033,	// (0x00033488) list_highlight_pane_g2_cp1

0xe03b,	// (0x00033490) list_highlight_pane_g3_cp1

0xe043,	// (0x00033498) list_highlight_pane_g4_cp1

0xe04b,	// (0x000334a0) list_highlight_pane_g5_cp1

0xe053,	// (0x000334a8) list_highlight_pane_g6_cp1

0xe05b,	// (0x000334b0) list_highlight_pane_g7_cp1

0xe063,	// (0x000334b8) list_highlight_pane_g8_cp1

0xe06b,	// (0x000334c0) list_highlight_pane_g9_cp1

0xa926,	// (0x0002fd7b) form_field_slider_pane_t3

0xa936,	// (0x0002fd8b) form_field_slider_pane_t4

0xdf5f,	// (0x000333b4) slider_form_pane_ParamLimits

0xdf5f,	// (0x000333b4) slider_form_pane

0xc2f5,	// (0x0003174a) control_abbreviations

0xc2f5,	// (0x0003174a) control_conventions

0xc2f5,	// (0x0003174a) control_definitions

0xc2f5,	// (0x0003174a) format_table_attribute

0xe63b,	// (0x00033a90) bg_popup_preview_window_pane_g9

0xc2f5,	// (0x0003174a) format_table_data2

0xc2f5,	// (0x0003174a) format_table_data3

0xc2f5,	// (0x0003174a) format_table_data_example

0x0008,

0xc2f5,	// (0x0003174a) intro_purpose

0x0333,	// (0x00025788) bg_popup_preview_window_pane_g

0xc2f5,	// (0x0003174a) texts_category

0xc2f5,	// (0x0003174a) texts_graphics

0xd383,	// (0x000327d8) text_digital

0xd392,	// (0x000327e7) text_primary

0xd3a1,	// (0x000327f6) text_primary_small

0xd3b0,	// (0x00032805) text_secondary

0xd3bf,	// (0x00032814) text_title

0xeae3,	// (0x00033f38) bg_passive_tab_pane_g1_cp3_srt

0xd077,	// (0x000324cc) bg_passive_tab_pane_g2_cp3_srt

0xeaec,	// (0x00033f41) bg_passive_tab_pane_g3_cp3_srt

0xc343,	// (0x00031798) bg_active_tab_pane_cp3_srt_ParamLimits

0xc343,	// (0x00031798) bg_active_tab_pane_cp3_srt

0xeaf5,	// (0x00033f4a) tabs_4_active_pane_srt_g1

0xacf6,	// (0x0003014b) tabs_4_active_pane_srt_t1_ParamLimits

0xacf6,	// (0x0003014b) tabs_4_active_pane_srt_t1

0xeae3,	// (0x00033f38) bg_active_tab_pane_g1_cp3_copy1

0xd077,	// (0x000324cc) bg_active_tab_pane_g2_cp3_copy1

0xeaec,	// (0x00033f41) bg_active_tab_pane_g3_cp3_copy1

0xc351,	// (0x000317a6) tabs_2_long_active_pane_srt_ParamLimits

0xc351,	// (0x000317a6) tabs_2_long_active_pane_srt

0xc351,	// (0x000317a6) tabs_2_long_passive_pane_srt_ParamLimits

0xc351,	// (0x000317a6) tabs_2_long_passive_pane_srt

0xd608,	// (0x00032a5d) bg_passive_tab_pane_cp4_srt_ParamLimits

0xd608,	// (0x00032a5d) bg_passive_tab_pane_cp4_srt

0xea0e,	// (0x00033e63) bg_passive_tab_pane_g1_cp4_srt

0xd077,	// (0x000324cc) bg_passive_tab_pane_g2_cp4_srt

0xea17,	// (0x00033e6c) bg_passive_tab_pane_g3_cp4_srt

0xc351,	// (0x000317a6) bg_active_tab_pane_cp4_srt_ParamLimits

0xc351,	// (0x000317a6) bg_active_tab_pane_cp4_srt

0xab02,	// (0x0002ff57) tabs_2_long_active_pane_srt_t1_ParamLimits

0xab02,	// (0x0002ff57) tabs_2_long_active_pane_srt_t1

0xea0e,	// (0x00033e63) bg_active_tab_pane_g1_cp4_srt

0xd077,	// (0x000324cc) bg_active_tab_pane_g2_cp4_srt

0xea17,	// (0x00033e6c) bg_active_tab_pane_g3_cp4_srt

0xc343,	// (0x00031798) tabs_3_long_active_pane_srt_ParamLimits

0xc343,	// (0x00031798) tabs_3_long_active_pane_srt

0xc343,	// (0x00031798) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc343,	// (0x00031798) tabs_3_long_passive_pane_cp_srt

0xc343,	// (0x00031798) tabs_3_long_passive_pane_srt_ParamLimits

0xc343,	// (0x00031798) tabs_3_long_passive_pane_srt

0xd608,	// (0x00032a5d) bg_passive_tab_pane_cp5_srt_ParamLimits

0xd608,	// (0x00032a5d) bg_passive_tab_pane_cp5_srt

0xd0be,	// (0x00032513) bg_passive_tab_pane_g1_cp5_srt

0xd077,	// (0x000324cc) bg_passive_tab_pane_g2_cp5_srt

0xd0c7,	// (0x0003251c) bg_passive_tab_pane_g3_cp5_srt

0xc351,	// (0x000317a6) bg_active_tab_pane_cp5_srt_ParamLimits

0xc351,	// (0x000317a6) bg_active_tab_pane_cp5_srt

0xaaec,	// (0x0002ff41) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaaec,	// (0x0002ff41) tabs_3_long_active_pane_srt_t1

0xd0be,	// (0x00032513) bg_active_tab_pane_g1_cp5_srt

0xd077,	// (0x000324cc) bg_active_tab_pane_g2_cp5_srt

0xd0c7,	// (0x0003251c) bg_active_tab_pane_g3_cp5_srt

0xea00,	// (0x00033e55) navi_text_pane_srt_t1

0xe9f8,	// (0x00033e4d) navi_icon_pane_srt_g1

0xd4bd,	// (0x00032912) midp_editing_number_pane_srt

0xd3ce,	// (0x00032823) midp_ticker_pane_srt

0xd4c5,	// (0x0003291a) midp_ticker_pane_srt_g1

0xd4cd,	// (0x00032922) midp_ticker_pane_srt_g2

0x0001,

0x01c9,	// (0x0002561e) midp_ticker_pane_srt_g

0xd4d5,	// (0x0003292a) midp_ticker_pane_srt_t1

0xe9e9,	// (0x00033e3e) midp_editing_number_pane_t1_copy1

0x9ce1,	// (0x0002f136) listscroll_midp_pane

0x9ce1,	// (0x0002f136) midp_form_pane

0xd3d6,	// (0x0003282b) midp_info_popup_window_ParamLimits

0xd3d6,	// (0x0003282b) midp_info_popup_window

0xca50,	// (0x00031ea5) bg_popup_sub_pane_cp50_ParamLimits

0xca50,	// (0x00031ea5) bg_popup_sub_pane_cp50

0xdcad,	// (0x00033102) listscroll_midp_info_pane_ParamLimits

0xdcad,	// (0x00033102) listscroll_midp_info_pane

0xdc95,	// (0x000330ea) listscroll_form_midp_pane_ParamLimits

0xdc95,	// (0x000330ea) listscroll_form_midp_pane

0xdca1,	// (0x000330f6) scroll_bar_cp050

0xa91a,	// (0x0002fd6f) list_midp_pane

0xf385,	// (0x000347da) signal_pane_g2_cp

0xdbc7,	// (0x0003301c) listscroll_midp_info_pane_t1_ParamLimits

0xdbc7,	// (0x0003301c) listscroll_midp_info_pane_t1

0xdbdf,	// (0x00033034) listscroll_midp_info_pane_t2_ParamLimits

0xdbdf,	// (0x00033034) listscroll_midp_info_pane_t2

0xdc1d,	// (0x00033072) listscroll_midp_info_pane_t3_ParamLimits

0xdc1d,	// (0x00033072) listscroll_midp_info_pane_t3

0xdc57,	// (0x000330ac) listscroll_midp_info_pane_t4_ParamLimits

0xdc57,	// (0x000330ac) listscroll_midp_info_pane_t4

0x0003,

0x026e,	// (0x000256c3) listscroll_midp_info_pane_t_ParamLimits

0x026e,	// (0x000256c3) listscroll_midp_info_pane_t

0xcab7,	// (0x00031f0c) scroll_pane_cp21

0xdb6b,	// (0x00032fc0) form_midp_field_choice_group_pane

0xdb74,	// (0x00032fc9) form_midp_field_text_pane

0xdbad,	// (0x00033002) form_midp_field_time_pane

0xdbb5,	// (0x0003300a) form_midp_gauge_slider_pane

0xdbbe,	// (0x00033013) form_midp_gauge_wait_pane

0xc2f5,	// (0x0003174a) form_midp_image_pane

0x9755,	// (0x0002ebaa) list_single_midp_pane_ParamLimits

0x9755,	// (0x0002ebaa) list_single_midp_pane

0xa8f6,	// (0x0002fd4b) form_midp_field_text_pane_t1

0xda12,	// (0x00032e67) input_focus_pane_cp050

0xdb5a,	// (0x00032faf) list_midp_form_text_pane

0xdb29,	// (0x00032f7e) form_midp_field_choice_group_pane_t1

0xdb37,	// (0x00032f8c) input_focus_pane_cp051

0xdb4b,	// (0x00032fa0) list_midp_choice_pane

0xc2f5,	// (0x0003174a) status_idle_pane

0xdb0d,	// (0x00032f62) form_midp_field_time_pane_t1

0xc2eb,	// (0x00031740) wait_anim_pane_g2_copy1

0xdb1b,	// (0x00032f70) form_midp_field_time_pane_t2

0x0001,

0xd42f,	// (0x00032884) aid_navinavi_width_2_pane

0x0269,	// (0x000256be) form_midp_field_time_pane_t

0xc2f5,	// (0x0003174a) input_focus_pane_cp052

0xc2f5,	// (0x0003174a) bg_input_focus_pane_cp040

0xdae9,	// (0x00032f3e) form_midp_gauge_slider_pane_t1

0xdaf7,	// (0x00032f4c) form_midp_gauge_slider_pane_t2

0xa8da,	// (0x0002fd2f) form_midp_gauge_slider_pane_t3

0xa8e8,	// (0x0002fd3d) form_midp_gauge_slider_pane_t4

0x0003,

0xf783,	// (0x00034bd8) form_midp_gauge_slider_pane_t

0xdb05,	// (0x00032f5a) form_midp_slider_pane

0xc351,	// (0x000317a6) bg_input_focus_pane_cp041_ParamLimits

0xc351,	// (0x000317a6) bg_input_focus_pane_cp041

0xdab6,	// (0x00032f0b) form_midp_gauge_wait_pane_t1_ParamLimits

0xdab6,	// (0x00032f0b) form_midp_gauge_wait_pane_t1

0xdac8,	// (0x00032f1d) form_midp_gauge_wait_pane_t2_ParamLimits

0xdac8,	// (0x00032f1d) form_midp_gauge_wait_pane_t2

0x0001,

0x025b,	// (0x000256b0) form_midp_gauge_wait_pane_t_ParamLimits

0x025b,	// (0x000256b0) form_midp_gauge_wait_pane_t

0xdada,	// (0x00032f2f) form_midp_wait_pane_ParamLimits

0xdada,	// (0x00032f2f) form_midp_wait_pane

0xda80,	// (0x00032ed5) form_midp_image_pane_g1

0xda89,	// (0x00032ede) form_midp_image_pane_t1

0xda98,	// (0x00032eed) form_midp_image_pane_t2

0xdaa7,	// (0x00032efc) form_midp_image_pane_t3

0x0002,

0x0254,	// (0x000256a9) form_midp_image_pane_t

0xda77,	// (0x00032ecc) list_single_midp_pane_g1

0x6f03,	// (0x0002c358) list_single_midp_pane_t1

0xa8c3,	// (0x0002fd18) list_midp_form_item_pane_ParamLimits

0xa8c3,	// (0x0002fd18) list_midp_form_item_pane

0xd3e9,	// (0x0003283e) list_midp_form_item_pane_t1

0xd3f8,	// (0x0003284d) midp_ticker_pane_g1

0xd404,	// (0x00032859) midp_ticker_pane_g2

0x0001,

0x01af,	// (0x00025604) midp_ticker_pane_g

0x9d8d,	// (0x0002f1e2) midp_ticker_pane_t1

0xac6b,	// (0x000300c0) midp_editing_number_pane_t1

0xea77,	// (0x00033ecc) midp_editing_number_pane

0xea86,	// (0x00033edb) midp_ticker_pane

0xe9d9,	// (0x00033e2e) ai_message_heading_pane

0xc2f5,	// (0x0003174a) bg_popup_window_pane_cp14

0xe9e1,	// (0x00033e36) listscroll_ai_message_pane

0xe963,	// (0x00033db8) ai_message_heading_pane_g1_ParamLimits

0xe963,	// (0x00033db8) ai_message_heading_pane_g1

0xe96f,	// (0x00033dc4) ai_message_heading_pane_g2_ParamLimits

0xe96f,	// (0x00033dc4) ai_message_heading_pane_g2

0xe97b,	// (0x00033dd0) ai_message_heading_pane_g3_ParamLimits

0xe97b,	// (0x00033dd0) ai_message_heading_pane_g3

0xe987,	// (0x00033ddc) ai_message_heading_pane_g4_ParamLimits

0xe987,	// (0x00033ddc) ai_message_heading_pane_g4

0x0003,

0x0395,	// (0x000257ea) ai_message_heading_pane_g_ParamLimits

0x0395,	// (0x000257ea) ai_message_heading_pane_g

0xe993,	// (0x00033de8) ai_message_heading_pane_t1_ParamLimits

0xe993,	// (0x00033de8) ai_message_heading_pane_t1

0xe9ad,	// (0x00033e02) ai_message_heading_pane_t2_ParamLimits

0xe9ad,	// (0x00033e02) ai_message_heading_pane_t2

0x0001,

0x039e,	// (0x000257f3) ai_message_heading_pane_t_ParamLimits

0x039e,	// (0x000257f3) ai_message_heading_pane_t

0xe9bf,	// (0x00033e14) bg_popup_heading_pane_cp1_ParamLimits

0xe9bf,	// (0x00033e14) bg_popup_heading_pane_cp1

0xe951,	// (0x00033da6) list_ai_message_pane_ParamLimits

0xe951,	// (0x00033da6) list_ai_message_pane

0xcab7,	// (0x00031f0c) scroll_pane_cp10

0xe8ed,	// (0x00033d42) list_ai_message_pane_g1

0xe8f5,	// (0x00033d4a) list_ai_message_pane_g2

0x0001,

0x0372,	// (0x000257c7) list_ai_message_pane_g

0xe8fd,	// (0x00033d52) list_ai_message_pane_t1_ParamLimits

0xe8fd,	// (0x00033d52) list_ai_message_pane_t1

0xe912,	// (0x00033d67) list_ai_message_pane_t2_ParamLimits

0xe912,	// (0x00033d67) list_ai_message_pane_t2

0xe927,	// (0x00033d7c) list_ai_message_pane_t3_ParamLimits

0xe927,	// (0x00033d7c) list_ai_message_pane_t3

0xe93c,	// (0x00033d91) list_ai_message_pane_t4_ParamLimits

0xe93c,	// (0x00033d91) list_ai_message_pane_t4

0x0003,

0x0377,	// (0x000257cc) list_ai_message_pane_t_ParamLimits

0x0377,	// (0x000257cc) list_ai_message_pane_t

0xaac7,	// (0x0002ff1c) cell_ai_soft_ind_pane_ParamLimits

0xaac7,	// (0x0002ff1c) cell_ai_soft_ind_pane

0xd410,	// (0x00032865) cell_ai_soft_ind_pane_g1_ParamLimits

0xd410,	// (0x00032865) cell_ai_soft_ind_pane_g1

0xc2f5,	// (0x0003174a) grid_highlight_cp1

0xd41d,	// (0x00032872) text_secondary_cp56_ParamLimits

0xd41d,	// (0x00032872) text_secondary_cp56

0xe8c2,	// (0x00033d17) example_general_pane_ParamLimits

0xe8c2,	// (0x00033d17) example_general_pane

0xe8ce,	// (0x00033d23) example_parent_pane_g1_ParamLimits

0xe8ce,	// (0x00033d23) example_parent_pane_g1

0xe8da,	// (0x00033d2f) example_parent_pane_t1_ParamLimits

0xe8da,	// (0x00033d2f) example_parent_pane_t1

0xa196,	// (0x0002f5eb) popup_preview_text_window_ParamLimits

0xa196,	// (0x0002f5eb) popup_preview_text_window

0xd2fd,	// (0x00032752) list_single_pane_cp2_g4

0xc520,	// (0x00031975) bg_popup_preview_window_pane_ParamLimits

0xc520,	// (0x00031975) bg_popup_preview_window_pane

0xe643,	// (0x00033a98) popup_preview_text_window_t1_ParamLimits

0xe643,	// (0x00033a98) popup_preview_text_window_t1

0xe661,	// (0x00033ab6) popup_preview_text_window_t2_ParamLimits

0xe661,	// (0x00033ab6) popup_preview_text_window_t2

0xe6aa,	// (0x00033aff) popup_preview_text_window_t3_ParamLimits

0xe6aa,	// (0x00033aff) popup_preview_text_window_t3

0xe6ef,	// (0x00033b44) popup_preview_text_window_t4_ParamLimits

0xe6ef,	// (0x00033b44) popup_preview_text_window_t4

0x0004,

0x0346,	// (0x0002579b) popup_preview_text_window_t_ParamLimits

0x0346,	// (0x0002579b) popup_preview_text_window_t

0xe76d,	// (0x00033bc2) scroll_pane_cp11

0xd922,	// (0x00032d77) bg_popup_preview_window_pane_g1

0xe603,	// (0x00033a58) bg_popup_preview_window_pane_g2

0xe60b,	// (0x00033a60) bg_popup_preview_window_pane_g3

0xe613,	// (0x00033a68) bg_popup_preview_window_pane_g4

0xe61b,	// (0x00033a70) bg_popup_preview_window_pane_g5

0xe623,	// (0x00033a78) bg_popup_preview_window_pane_g6

0xe62b,	// (0x00033a80) bg_popup_preview_window_pane_g7

0xe633,	// (0x00033a88) bg_popup_preview_window_pane_g8

0x09a8,	// (0x00025dfd) aid_popup_width_pane

0xa112,	// (0x0002f567) popup_midp_note_alarm_window_ParamLimits

0xa112,	// (0x0002f567) popup_midp_note_alarm_window

0xc98c,	// (0x00031de1) data_form_pane_ParamLimits

0x962b,	// (0x0002ea80) form_field_data_pane_g1

0x9635,	// (0x0002ea8a) form_field_data_pane_t1_ParamLimits

0xc998,	// (0x00031ded) input_focus_pane_ParamLimits

0xc9a6,	// (0x00031dfb) data_form_wide_pane_ParamLimits

0x6c8e,	// (0x0002c0e3) form_field_data_wide_pane_g1

0x6c9a,	// (0x0002c0ef) form_field_data_wide_pane_t1_ParamLimits

0xc713,	// (0x00031b68) input_focus_pane_cp6_ParamLimits

0x9b1b,	// (0x0002ef70) input_popup_find_pane_g1_ParamLimits

0x9b1b,	// (0x0002ef70) input_popup_find_pane_g1

0x1236,	// (0x0002668b) aid_navi_side_left_pane

0x124b,	// (0x000266a0) aid_navi_side_right_pane

0xe108,	// (0x0003355d) bg_popup_window_pane_cp30_ParamLimits

0xe108,	// (0x0003355d) bg_popup_window_pane_cp30

0xe182,	// (0x000335d7) popup_midp_note_alarm_window_g1_ParamLimits

0xe182,	// (0x000335d7) popup_midp_note_alarm_window_g1

0xe1b2,	// (0x00033607) popup_midp_note_alarm_window_t1_ParamLimits

0xe1b2,	// (0x00033607) popup_midp_note_alarm_window_t1

0xe253,	// (0x000336a8) popup_midp_note_alarm_window_t2_ParamLimits

0xe253,	// (0x000336a8) popup_midp_note_alarm_window_t2

0xe301,	// (0x00033756) popup_midp_note_alarm_window_t3_ParamLimits

0xe301,	// (0x00033756) popup_midp_note_alarm_window_t3

0xe329,	// (0x0003377e) popup_midp_note_alarm_window_t4_ParamLimits

0xe329,	// (0x0003377e) popup_midp_note_alarm_window_t4

0xe349,	// (0x0003379e) popup_midp_note_alarm_window_t5_ParamLimits

0xe349,	// (0x0003379e) popup_midp_note_alarm_window_t5

0x000a,

0x02e3,	// (0x00025738) popup_midp_note_alarm_window_t_ParamLimits

0x02e3,	// (0x00025738) popup_midp_note_alarm_window_t

0xe3f5,	// (0x0003384a) wait_bar_pane_cp1_ParamLimits

0xe3f5,	// (0x0003384a) wait_bar_pane_cp1

0xc2f5,	// (0x0003174a) wait_anim_pane_copy1

0xc2f5,	// (0x0003174a) wait_border_pane_copy1

0xde20,	// (0x00033275) wait_border_pane_g1_copy1

0x6cb4,	// (0x0002c109) form_field_popup_pane_g1

0x964f,	// (0x0002eaa4) form_field_popup_pane_t1_ParamLimits

0xc998,	// (0x00031ded) input_focus_pane_cp7_ParamLimits

0xc9d2,	// (0x00031e27) list_form_pane_ParamLimits

0x6cd6,	// (0x0002c12b) form_field_popup_wide_pane_g1

0x6cde,	// (0x0002c133) form_field_popup_wide_pane_t1_ParamLimits

0xc998,	// (0x00031ded) input_focus_pane_cp8_ParamLimits

0xc9de,	// (0x00031e33) list_form_wide_pane_ParamLimits

0xeb1c,	// (0x00033f71) aid_size_cell_graphic_pane

0x96ce,	// (0x0002eb23) data_form_pane_t1_ParamLimits

0x9771,	// (0x0002ebc6) data_form_wide_pane_t1_ParamLimits

0xa54b,	// (0x0002f9a0) bg_status_flat_pane

0x915c,	// (0x0002e5b1) title_pane_t1_ParamLimits

0xc30b,	// (0x00031760) title_pane_t2_ParamLimits

0xc331,	// (0x00031786) title_pane_t3_ParamLimits

0xf59b,	// (0x000349f0) title_pane_t_ParamLimits

0xce54,	// (0x000322a9) level_1_signal_ParamLimits

0xce61,	// (0x000322b6) level_2_signal_ParamLimits

0xce6e,	// (0x000322c3) level_3_signal_ParamLimits

0xce7b,	// (0x000322d0) level_4_signal_ParamLimits

0xce88,	// (0x000322dd) level_5_signal_ParamLimits

0xce95,	// (0x000322ea) level_6_signal_ParamLimits

0xcea2,	// (0x000322f7) level_7_signal_ParamLimits

0xce54,	// (0x000322a9) level_1_battery_ParamLimits

0xce61,	// (0x000322b6) level_2_battery_ParamLimits

0xce6e,	// (0x000322c3) level_3_battery_ParamLimits

0xce7b,	// (0x000322d0) level_4_battery_ParamLimits

0xce88,	// (0x000322dd) level_5_battery_ParamLimits

0xce95,	// (0x000322ea) level_6_battery_ParamLimits

0xcea2,	// (0x000322f7) level_7_battery_ParamLimits

0xe02b,	// (0x00033480) bg_status_flat_pane_g1

0xe033,	// (0x00033488) bg_status_flat_pane_g2

0xe03b,	// (0x00033490) bg_status_flat_pane_g3

0xe043,	// (0x00033498) bg_status_flat_pane_g4

0xe04b,	// (0x000334a0) bg_status_flat_pane_g5

0xe053,	// (0x000334a8) bg_status_flat_pane_g6

0xe05b,	// (0x000334b0) bg_status_flat_pane_g7

0x91f0,	// (0x0002e645) tabs_3_active_pane_t1_ParamLimits

0x91f0,	// (0x0002e645) tabs_3_passive_pane_t1_ParamLimits

0x920a,	// (0x0002e65f) tabs_4_active_pane_t1_ParamLimits

0x920a,	// (0x0002e65f) tabs_4_1_passive_pane_t1_ParamLimits

0x9b31,	// (0x0002ef86) tabs_2_active_pane_t1_ParamLimits

0x9b31,	// (0x0002ef86) tabs_2_passive_pane_t1_ParamLimits

0xc351,	// (0x000317a6) bg_active_tab_pane_cp4_ParamLimits

0x9b43,	// (0x0002ef98) tabs_2_long_active_pane_t1_ParamLimits

0xd608,	// (0x00032a5d) bg_passive_tab_pane_cp4_ParamLimits

0x2190,	// (0x000275e5) list_single_midp_graphic_pane_t1_ParamLimits

0xc351,	// (0x000317a6) bg_active_tab_pane_cp5_ParamLimits

0x9b56,	// (0x0002efab) tabs_3_long_active_pane_t1_ParamLimits

0xd608,	// (0x00032a5d) bg_passive_tab_pane_cp5_ParamLimits

0x2190,	// (0x000275e5) list_single_midp_graphic_pane_t1

0xa54b,	// (0x0002f9a0) bg_status_flat_pane_ParamLimits

0xd7f5,	// (0x00032c4a) indicator_pane_cp2_ParamLimits

0xd7f5,	// (0x00032c4a) indicator_pane_cp2

0xa6c2,	// (0x0002fb17) navi_pane_srt_ParamLimits

0xa6c2,	// (0x0002fb17) navi_pane_srt

0xd81d,	// (0x00032c72) popup_clock_digital_analogue_window_cp1

0xc395,	// (0x000317ea) indicator_pane_t1

0xd3ce,	// (0x00032823) copy_highlight_pane

0xd3ce,	// (0x00032823) cursor_graphics_pane

0xd3ce,	// (0x00032823) graphic_within_text_pane

0xd3ce,	// (0x00032823) link_highlight_pane

0xe730,	// (0x00033b85) popup_preview_text_window_t5_ParamLimits

0xe730,	// (0x00033b85) popup_preview_text_window_t5

0xd437,	// (0x0003288c) cursor_digital_pane

0xd437,	// (0x0003288c) cursor_primary_pane

0xd448,	// (0x0003289d) cursor_primary_small_pane

0xd450,	// (0x000328a5) cursor_secondary_pane

0xd458,	// (0x000328ad) cursor_title_pane

0xd437,	// (0x0003288c) link_highlight_digital_pane

0xd43f,	// (0x00032894) link_highlight_primary_pane

0xd448,	// (0x0003289d) link_highlight_primary_small_pane

0xd450,	// (0x000328a5) link_highlight_secondary_pane

0xd458,	// (0x000328ad) link_highlight_title_pane

0xd437,	// (0x0003288c) copy_highlight_digital_pane

0xd437,	// (0x0003288c) copy_highlight_primary_pane

0xd448,	// (0x0003289d) copy_highlight_primary_small_pane

0xd450,	// (0x000328a5) copy_highlight_secondary_pane

0xd458,	// (0x000328ad) copy_highlight_title_pane

0xd450,	// (0x000328a5) graphic_text_digital_pane

0xe0ab,	// (0x00033500) graphic_text_primary_pane

0xe0b4,	// (0x00033509) graphic_text_primary_small_pane

0xd448,	// (0x0003289d) graphic_text_secondary_pane

0xd437,	// (0x0003288c) graphic_text_title_pane

0x9d9f,	// (0x0002f1f4) cursor_primary_pane_g1

0xe09d,	// (0x000334f2) cursor_text_primary_t1

0xa95a,	// (0x0002fdaf) cursor_primary_small_pane_g1

0xe08f,	// (0x000334e4) cursor_text_primary_small_t1

0xa950,	// (0x0002fda5) cursor_primary_small_pane_g1_copy1

0xe081,	// (0x000334d6) cursor_text_primary_small_t1_copy1

0xe073,	// (0x000334c8) cursor_text_title_t1

0xa946,	// (0x0002fd9b) cursor_title_pane_g1

0x9d9f,	// (0x0002f1f4) cursor_digital_pane_g1

0xd460,	// (0x000328b5) cursor_text_digital_t1

0xe014,	// (0x00033469) link_highlight_primary_pane_g1

0xe01c,	// (0x00033471) link_highlight_primary_pane_t1

0xd46e,	// (0x000328c3) link_highlight_primary_small_pane_g1

0xd476,	// (0x000328cb) link_highlight_primary_small_pane_t1

0xd46e,	// (0x000328c3) link_highlight_secondary_pane_g1

0xd485,	// (0x000328da) link_highlight_secondary_pane_t1

0xdf88,	// (0x000333dd) link_highlight_title_pane_g1

0xdf90,	// (0x000333e5) link_highlight_title_pane_t1

0xdf71,	// (0x000333c6) link_highlight_digital_pane_g1

0xdf79,	// (0x000333ce) link_highlight_digital_pane_t1

0xde65,	// (0x000332ba) copy_highlight_primary_pane_g1

0xde6d,	// (0x000332c2) copy_highlight_primary_pane_t1

0xde3f,	// (0x00033294) copy_highlight_primary_small_pane_g1

0xde56,	// (0x000332ab) copy_highlight_primary_small_pane_t1

0xd494,	// (0x000328e9) copy_highlight_secondary_pane_g1

0xd49c,	// (0x000328f1) copy_highlight_secondary_pane_t1

0xde3f,	// (0x00033294) copy_highlight_title_pane_g1

0xde47,	// (0x0003329c) copy_highlight_title_pane_t1

0xde65,	// (0x000332ba) copy_highlight_digital_pane_g1

0xeca6,	// (0x000340fb) copy_highlight_digital_pane_t1

0xebfa,	// (0x0003404f) graphic_text_primary_pane_g1

0xec8a,	// (0x000340df) graphic_text_primary_pane_t1

0xec98,	// (0x000340ed) graphic_text_primary_pane_t2

0x0001,

0x0412,	// (0x00025867) graphic_text_primary_pane_t

0xec66,	// (0x000340bb) graphic_text_primary_small_pane_g1

0xec6e,	// (0x000340c3) graphic_text_primary_small_pane_t1

0xec7c,	// (0x000340d1) graphic_text_primary_small_pane_t2

0x0001,

0x040d,	// (0x00025862) graphic_text_primary_small_pane_t

0xec42,	// (0x00034097) graphic_text_secondary_pane_g1

0xec4a,	// (0x0003409f) graphic_text_secondary_pane_t1

0xec58,	// (0x000340ad) graphic_text_secondary_pane_t2

0x0001,

0x0408,	// (0x0002585d) graphic_text_secondary_pane_t

0xec1e,	// (0x00034073) graphic_text_title_pane_g1

0xec26,	// (0x0003407b) graphic_text_title_pane_t1

0xec34,	// (0x00034089) graphic_text_title_pane_t2

0x0001,

0x0403,	// (0x00025858) graphic_text_title_pane_t

0xebfa,	// (0x0003404f) graphic_text_digital_pane_g1

0xec02,	// (0x00034057) graphic_text_digital_pane_t1

0xec10,	// (0x00034065) graphic_text_digital_pane_t2

0x0001,

0x03fe,	// (0x00025853) graphic_text_digital_pane_t

0xc351,	// (0x000317a6) navi_icon_pane_srt_ParamLimits

0xc351,	// (0x000317a6) navi_icon_pane_srt

0xc2f5,	// (0x0003174a) navi_midp_pane_srt

0xc2f5,	// (0x0003174a) navi_navi_pane_srt

0xc351,	// (0x000317a6) navi_text_pane_srt_ParamLimits

0xc351,	// (0x000317a6) navi_text_pane_srt

0xebc5,	// (0x0003401a) navi_navi_icon_text_pane_srt

0xebcd,	// (0x00034022) navi_navi_pane_srt_g1_ParamLimits

0xebcd,	// (0x00034022) navi_navi_pane_srt_g1

0xebdf,	// (0x00034034) navi_navi_pane_srt_g2_ParamLimits

0xebdf,	// (0x00034034) navi_navi_pane_srt_g2

0x0001,

0x03f9,	// (0x0002584e) navi_navi_pane_srt_g_ParamLimits

0x03f9,	// (0x0002584e) navi_navi_pane_srt_g

0xebf1,	// (0x00034046) navi_navi_tabs_pane_srt

0xebc5,	// (0x0003401a) navi_navi_text_pane_srt

0xebc5,	// (0x0003401a) navi_navi_volume_pane_srt

0xebb6,	// (0x0003400b) navi_navi_text_pane_srt_t1

0x2a5a,	// (0x00027eaf) navi_navi_volume_pane_srt_g1

0x2a62,	// (0x00027eb7) volume_small_pane_srt_ParamLimits

0x2a62,	// (0x00027eb7) volume_small_pane_srt

0x173b,	// (0x00026b90) volume_small_pane_srt_g1_ParamLimits

0x173b,	// (0x00026b90) volume_small_pane_srt_g1

0x174b,	// (0x00026ba0) volume_small_pane_srt_g2_ParamLimits

0x174b,	// (0x00026ba0) volume_small_pane_srt_g2

0x175c,	// (0x00026bb1) volume_small_pane_srt_g3_ParamLimits

0x175c,	// (0x00026bb1) volume_small_pane_srt_g3

0x176d,	// (0x00026bc2) volume_small_pane_srt_g4_ParamLimits

0x176d,	// (0x00026bc2) volume_small_pane_srt_g4

0x177e,	// (0x00026bd3) volume_small_pane_srt_g5_ParamLimits

0x177e,	// (0x00026bd3) volume_small_pane_srt_g5

0x178f,	// (0x00026be4) volume_small_pane_srt_g6_ParamLimits

0x178f,	// (0x00026be4) volume_small_pane_srt_g6

0x17a0,	// (0x00026bf5) volume_small_pane_srt_g7_ParamLimits

0x17a0,	// (0x00026bf5) volume_small_pane_srt_g7

0x17b1,	// (0x00026c06) volume_small_pane_srt_g8_ParamLimits

0x17b1,	// (0x00026c06) volume_small_pane_srt_g8

0x17c2,	// (0x00026c17) volume_small_pane_srt_g9_ParamLimits

0x17c2,	// (0x00026c17) volume_small_pane_srt_g9

0x17d3,	// (0x00026c28) volume_small_pane_srt_g10_ParamLimits

0x17d3,	// (0x00026c28) volume_small_pane_srt_g10

0x0009,

0xf703,	// (0x00034b58) volume_small_pane_srt_g_ParamLimits

0xf703,	// (0x00034b58) volume_small_pane_srt_g

0xc5c9,	// (0x00031a1e) query_popup_data_pane_cp2

0xeb9c,	// (0x00033ff1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xeb9c,	// (0x00033ff1) navi_navi_icon_text_pane_srt_t1

0xe0ab,	// (0x00033500) navi_tabs_2_long_pane_srt

0xe0ab,	// (0x00033500) navi_tabs_2_pane_srt

0xe0ab,	// (0x00033500) navi_tabs_3_long_pane_srt

0xe0ab,	// (0x00033500) navi_tabs_3_pane_srt

0xe0ab,	// (0x00033500) navi_tabs_4_pane_srt

0x2a3a,	// (0x00027e8f) tabs_2_active_pane_srt_ParamLimits

0x2a3a,	// (0x00027e8f) tabs_2_active_pane_srt

0x2a4a,	// (0x00027e9f) tabs_2_passive_pane_srt_ParamLimits

0x2a4a,	// (0x00027e9f) tabs_2_passive_pane_srt

0xda12,	// (0x00032e67) bg_passive_tab_pane_cp1_srt_ParamLimits

0xda12,	// (0x00032e67) bg_passive_tab_pane_cp1_srt

0xeb7a,	// (0x00033fcf) bg_passive_tab_pane_g1_cp1_srt

0xd077,	// (0x000324cc) bg_passive_tab_pane_g2_cp1_srt

0xeb83,	// (0x00033fd8) bg_passive_tab_pane_g3_cp1_srt

0xc343,	// (0x00031798) bg_active_tab_pane_cp1_srt_ParamLimits

0xc343,	// (0x00031798) bg_active_tab_pane_cp1_srt

0xeb8c,	// (0x00033fe1) tabs_2_active_pane_srt_g1

0xad73,	// (0x000301c8) tabs_2_active_pane_srt_t1_ParamLimits

0xad73,	// (0x000301c8) tabs_2_active_pane_srt_t1

0xeb7a,	// (0x00033fcf) bg_active_tab_pane_g1_cp1_srt

0xd077,	// (0x000324cc) bg_active_tab_pane_g2_cp1_srt

0xeb83,	// (0x00033fd8) bg_active_tab_pane_g3_cp1_srt

0x29f5,	// (0x00027e4a) tabs_3_active_pane_srt_ParamLimits

0x29f5,	// (0x00027e4a) tabs_3_active_pane_srt

0x2a06,	// (0x00027e5b) tabs_3_passive_pane_cp_srt_ParamLimits

0x2a06,	// (0x00027e5b) tabs_3_passive_pane_cp_srt

0x2a17,	// (0x00027e6c) tabs_3_passive_pane_srt_ParamLimits

0x2a17,	// (0x00027e6c) tabs_3_passive_pane_srt

0xda12,	// (0x00032e67) bg_passive_tab_pane_cp2_srt_ParamLimits

0xda12,	// (0x00032e67) bg_passive_tab_pane_cp2_srt

0xd4ab,	// (0x00032900) bg_passive_tab_pane_g1_cp2_srt

0xd077,	// (0x000324cc) bg_passive_tab_pane_g2_cp2_srt

0xd4b4,	// (0x00032909) bg_passive_tab_pane_g3_cp2_srt

0xc343,	// (0x00031798) bg_active_tab_pane_cp2_srt_ParamLimits

0xc343,	// (0x00031798) bg_active_tab_pane_cp2_srt

0xeb72,	// (0x00033fc7) tabs_3_active_pane_srt_g1

0xad5d,	// (0x000301b2) tabs_3_active_pane_srt_t1_ParamLimits

0xad5d,	// (0x000301b2) tabs_3_active_pane_srt_t1

0xd4ab,	// (0x00032900) bg_active_tab_pane_g1_cp2_srt

0xd077,	// (0x000324cc) bg_active_tab_pane_g2_cp2_srt

0xd4b4,	// (0x00032909) bg_active_tab_pane_g3_cp2_srt

0x299b,	// (0x00027df0) tabs_4_active_pane_srt_ParamLimits

0x299b,	// (0x00027df0) tabs_4_active_pane_srt

0x29ad,	// (0x00027e02) tabs_4_passive_pane_cp2_srt_ParamLimits

0x29ad,	// (0x00027e02) tabs_4_passive_pane_cp2_srt

0xd5d8,	// (0x00032a2d) aid_size_cell_toolbar

0xe844,	// (0x00033c99) main_idle_act_pane_ParamLimits

0xd6bc,	// (0x00032b11) popup_large_graphic_colour_window_ParamLimits

0xa416,	// (0x0002f86b) popup_toolbar_window_ParamLimits

0xa416,	// (0x0002f86b) popup_toolbar_window

0x6fc7,	// (0x0002c41c) list_single_graphic_2heading_pane_ParamLimits

0x6fc7,	// (0x0002c41c) list_single_graphic_2heading_pane

0xcc8d,	// (0x000320e2) aid_size_cell_apps_grid_lsc_pane

0xcc9f,	// (0x000320f4) aid_size_cell_apps_grid_prt_pane

0xd608,	// (0x00032a5d) bg_wml_button_pane_cp1_ParamLimits

0xd608,	// (0x00032a5d) bg_wml_button_pane_cp1

0xa8f6,	// (0x0002fd4b) form_midp_field_text_pane_t1_ParamLimits

0xda12,	// (0x00032e67) input_focus_pane_cp050_ParamLimits

0xdb5a,	// (0x00032faf) list_midp_form_text_pane_ParamLimits

0xdb37,	// (0x00032f8c) input_focus_pane_cp051_ParamLimits

0xdb4b,	// (0x00032fa0) list_midp_choice_pane_ParamLimits

0xa88b,	// (0x0002fce0) list_single_2graphic_pane_cp3_ParamLimits

0xa88b,	// (0x0002fce0) list_single_2graphic_pane_cp3

0xa8a1,	// (0x0002fcf6) list_single_midp_graphic_pane_ParamLimits

0xa8a1,	// (0x0002fcf6) list_single_midp_graphic_pane

0x0914,	// (0x00025d69) list_single_graphic_2heading_pane_g1_ParamLimits

0x0914,	// (0x00025d69) list_single_graphic_2heading_pane_g1

0x0920,	// (0x00025d75) list_single_graphic_2heading_pane_g4_ParamLimits

0x0920,	// (0x00025d75) list_single_graphic_2heading_pane_g4

0x092c,	// (0x00025d81) list_single_graphic_2heading_pane_g5_ParamLimits

0x092c,	// (0x00025d81) list_single_graphic_2heading_pane_g5

0x0002,

0xf740,	// (0x00034b95) list_single_graphic_2heading_pane_g_ParamLimits

0xf740,	// (0x00034b95) list_single_graphic_2heading_pane_g

0x0938,	// (0x00025d8d) list_single_graphic_2heading_pane_t1_ParamLimits

0x0938,	// (0x00025d8d) list_single_graphic_2heading_pane_t1

0x094c,	// (0x00025da1) list_single_graphic_2heading_pane_t2_ParamLimits

0x094c,	// (0x00025da1) list_single_graphic_2heading_pane_t2

0x0968,	// (0x00025dbd) list_single_graphic_2heading_pane_t3_ParamLimits

0x0968,	// (0x00025dbd) list_single_graphic_2heading_pane_t3

0x0002,

0xf747,	// (0x00034b9c) list_single_graphic_2heading_pane_t_ParamLimits

0xf747,	// (0x00034b9c) list_single_graphic_2heading_pane_t

0xd860,	// (0x00032cb5) bg_popup_sub_pane_cp2

0xd88a,	// (0x00032cdf) grid_toobar_pane

0x2101,	// (0x00027556) cell_toolbar_pane_ParamLimits

0x2101,	// (0x00027556) cell_toolbar_pane

0xd8c6,	// (0x00032d1b) cell_toolbar_pane_g1_ParamLimits

0xd8c6,	// (0x00032d1b) cell_toolbar_pane_g1

0xd8da,	// (0x00032d2f) cell_toolbar_pane_g2_ParamLimits

0xd8da,	// (0x00032d2f) cell_toolbar_pane_g2

0x0001,

0x0215,	// (0x0002566a) cell_toolbar_pane_g_ParamLimits

0x0215,	// (0x0002566a) cell_toolbar_pane_g

0xd8fc,	// (0x00032d51) grid_highlight_pane_cp2_ParamLimits

0xd8fc,	// (0x00032d51) grid_highlight_pane_cp2

0xd916,	// (0x00032d6b) toolbar_button_pane

0xd922,	// (0x00032d77) toolbar_button_pane_g1

0xd92a,	// (0x00032d7f) toolbar_button_pane_g2

0xd932,	// (0x00032d87) toolbar_button_pane_g3

0xd93a,	// (0x00032d8f) toolbar_button_pane_g4

0xd942,	// (0x00032d97) toolbar_button_pane_g5

0xd94a,	// (0x00032d9f) toolbar_button_pane_g6

0xd952,	// (0x00032da7) toolbar_button_pane_g7

0xd95a,	// (0x00032daf) toolbar_button_pane_g8

0xd962,	// (0x00032db7) toolbar_button_pane_g9

0x0009,

0xf755,	// (0x00034baa) toolbar_button_pane_g

0x2139,	// (0x0002758e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x2139,	// (0x0002758e) list_single_2graphic_pane_g1_cp3

0x8aaf,	// (0x0002df04) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8aaf,	// (0x0002df04) list_single_2graphic_pane_g2_cp3

0x2156,	// (0x000275ab) list_single_2graphic_pane_g3_cp3

0x215e,	// (0x000275b3) list_single_2graphic_pane_g4_cp3_ParamLimits

0x215e,	// (0x000275b3) list_single_2graphic_pane_g4_cp3

0x216a,	// (0x000275bf) list_single_2graphic_pane_t1_cp3_ParamLimits

0x216a,	// (0x000275bf) list_single_2graphic_pane_t1_cp3

0x2184,	// (0x000275d9) list_single_midp_graphic_pane_g2_ParamLimits

0x2184,	// (0x000275d9) list_single_midp_graphic_pane_g2

0xd5e0,	// (0x00032a35) aid_zoom_text_primary

0x6e97,	// (0x0002c2ec) aid_zoom_text_secondary

0xd568,	// (0x000329bd) status_small_pane_g7_ParamLimits

0xd568,	// (0x000329bd) status_small_pane_g7

0xd58b,	// (0x000329e0) status_small_pane_t1_ParamLimits

0x9138,	// (0x0002e58d) title_pane_g2

0x0003,

0xf592,	// (0x000349e7) title_pane_g

0x9a1e,	// (0x0002ee73) aid_size_cell_colour_1_pane_ParamLimits

0x9a1e,	// (0x0002ee73) aid_size_cell_colour_1_pane

0x9a32,	// (0x0002ee87) aid_size_cell_colour_2_pane_ParamLimits

0x9a32,	// (0x0002ee87) aid_size_cell_colour_2_pane

0x9a46,	// (0x0002ee9b) aid_size_cell_colour_3_pane_ParamLimits

0x9a46,	// (0x0002ee9b) aid_size_cell_colour_3_pane

0x9a5a,	// (0x0002eeaf) aid_size_cell_colour_4_pane_ParamLimits

0x9a5a,	// (0x0002eeaf) aid_size_cell_colour_4_pane

0x1172,	// (0x000265c7) title_pane_stacon_g1_ParamLimits

0x1172,	// (0x000265c7) title_pane_stacon_g1

0xdec4,	// (0x00033319) popup_note_wait_window_g3_ParamLimits

0xdec4,	// (0x00033319) popup_note_wait_window_g3

0xdf3a,	// (0x0003338f) popup_note_wait_window_t5_ParamLimits

0xdf3a,	// (0x0003338f) popup_note_wait_window_t5

0xc2f5,	// (0x0003174a) main_feb_china_hwr_fs_writing_pane

0x9e3e,	// (0x0002f293) popup_feb_china_hwr_fs_window_ParamLimits

0x9e3e,	// (0x0002f293) popup_feb_china_hwr_fs_window

0x8ac0,	// (0x0002df15) aid_size_cell_hwr_fs_ParamLimits

0x8ac0,	// (0x0002df15) aid_size_cell_hwr_fs

0xda12,	// (0x00032e67) bg_popup_sub_pane_cp3_ParamLimits

0xda12,	// (0x00032e67) bg_popup_sub_pane_cp3

0x8ad5,	// (0x0002df2a) grid_hwr_fs_pane_ParamLimits

0x8ad5,	// (0x0002df2a) grid_hwr_fs_pane

0x21d3,	// (0x00027628) linegrid_hwr_fs_pane_ParamLimits

0x21d3,	// (0x00027628) linegrid_hwr_fs_pane

0x8aed,	// (0x0002df42) cell_hwr_fs_pane_ParamLimits

0x8aed,	// (0x0002df42) cell_hwr_fs_pane

0xda1e,	// (0x00032e73) linegrid_hwr_fs_pane_g1_ParamLimits

0xda1e,	// (0x00032e73) linegrid_hwr_fs_pane_g1

0xa85f,	// (0x0002fcb4) linegrid_hwr_fs_pane_g2_ParamLimits

0xa85f,	// (0x0002fcb4) linegrid_hwr_fs_pane_g2

0xda2a,	// (0x00032e7f) linegrid_hwr_fs_pane_g3_ParamLimits

0xda2a,	// (0x00032e7f) linegrid_hwr_fs_pane_g3

0x2217,	// (0x0002766c) linegrid_hwr_fs_pane_g4_ParamLimits

0x2217,	// (0x0002766c) linegrid_hwr_fs_pane_g4

0x2231,	// (0x00027686) linegrid_hwr_fs_pane_g5_ParamLimits

0x2231,	// (0x00027686) linegrid_hwr_fs_pane_g5

0x0004,

0xf76f,	// (0x00034bc4) linegrid_hwr_fs_pane_g_ParamLimits

0xf76f,	// (0x00034bc4) linegrid_hwr_fs_pane_g

0xda36,	// (0x00032e8b) cell_hwr_fs_pane_g1_ParamLimits

0xda36,	// (0x00032e8b) cell_hwr_fs_pane_g1

0xd82e,	// (0x00032c83) cell_hwr_fs_pane_g2_ParamLimits

0xd82e,	// (0x00032c83) cell_hwr_fs_pane_g2

0xa871,	// (0x0002fcc6) cell_hwr_fs_pane_g3_ParamLimits

0xa871,	// (0x0002fcc6) cell_hwr_fs_pane_g3

0xa87e,	// (0x0002fcd3) cell_hwr_fs_pane_g4_ParamLimits

0xa87e,	// (0x0002fcd3) cell_hwr_fs_pane_g4

0x0003,

0xf77a,	// (0x00034bcf) cell_hwr_fs_pane_g_ParamLimits

0xf77a,	// (0x00034bcf) cell_hwr_fs_pane_g

0x8b13,	// (0x0002df68) cell_hwr_fs_pane_t1

0xc2f5,	// (0x0003174a) grid_highlight_pane_cp6

0xc2f5,	// (0x0003174a) main_idle_act2_pane

0xca9e,	// (0x00031ef3) aid_inside_area_popup_secondary

0xa97a,	// (0x0002fdcf) aid_inside_area_window_primary_ParamLimits

0xa97a,	// (0x0002fdcf) aid_inside_area_window_primary

0xecb5,	// (0x0003410a) ai2_news_ticker_pane

0xecbd,	// (0x00034112) aid_size_cell_ai1_link_ParamLimits

0xecbd,	// (0x00034112) aid_size_cell_ai1_link

0xecd7,	// (0x0003412c) popup_ai2_data_window_ParamLimits

0xecd7,	// (0x0003412c) popup_ai2_data_window

0xeceb,	// (0x00034140) popup_ai2_link_window_ParamLimits

0xeceb,	// (0x00034140) popup_ai2_link_window

0xda12,	// (0x00032e67) bg_popup_sub_pane_cp4_ParamLimits

0xda12,	// (0x00032e67) bg_popup_sub_pane_cp4

0xecff,	// (0x00034154) grid_ai2_link_pane_ParamLimits

0xecff,	// (0x00034154) grid_ai2_link_pane

0xed16,	// (0x0003416b) popup_ai2_link_window_g1_ParamLimits

0xed16,	// (0x0003416b) popup_ai2_link_window_g1

0xed22,	// (0x00034177) popup_ai2_link_window_g2_ParamLimits

0xed22,	// (0x00034177) popup_ai2_link_window_g2

0x0001,

0x0417,	// (0x0002586c) popup_ai2_link_window_g_ParamLimits

0x0417,	// (0x0002586c) popup_ai2_link_window_g

0xed31,	// (0x00034186) ai2_mp_button_pane

0xed39,	// (0x0003418e) ai2_mp_volume_pane

0xdb37,	// (0x00032f8c) bg_popup_sub_pane_cp5_ParamLimits

0xdb37,	// (0x00032f8c) bg_popup_sub_pane_cp5

0xed41,	// (0x00034196) heading_ai2_gene_pane_ParamLimits

0xed41,	// (0x00034196) heading_ai2_gene_pane

0xed4d,	// (0x000341a2) list_ai2_gene_pane_ParamLimits

0xed4d,	// (0x000341a2) list_ai2_gene_pane

0xed95,	// (0x000341ea) cell_ai2_link_pane_ParamLimits

0xed95,	// (0x000341ea) cell_ai2_link_pane

0xedab,	// (0x00034200) cell_ai2_link_pane_g1

0xc2f5,	// (0x0003174a) grid_highlight_pane_cp7

0x2a77,	// (0x00027ecc) ai2_mp_volume_pane_g1

0xee7c,	// (0x000342d1) ai2_mp_volume_pane_g2

0xedf1,	// (0x00034246) list_ai2_gene_pane_t1

0xee84,	// (0x000342d9) ai2_mp_volume_pane_g3

0x0002,

0xf82c,	// (0x00034c81) ai2_mp_volume_pane_g

0x2a7f,	// (0x00027ed4) volume_small_pane_cp3

0xee8c,	// (0x000342e1) aid_size_cell_ai2_button

0xee94,	// (0x000342e9) grid_ai2_button_pane

0xee9d,	// (0x000342f2) cell_ai2_button_pane_ParamLimits

0xee9d,	// (0x000342f2) cell_ai2_button_pane

0xc2eb,	// (0x00031740) cell_ai2_button_pane_g1

0xc2f5,	// (0x0003174a) grid_highlight_pane_cp8

0xee3c,	// (0x00034291) ai2_gene_pane_t1_ParamLimits

0xee3c,	// (0x00034291) ai2_gene_pane_t1

0x9dd0,	// (0x0002f225) aid_height_parent_landscape

0xab19,	// (0x0002ff6e) aid_height_set_list

0xe844,	// (0x00033c99) aid_size_parent

0xeb1c,	// (0x00033f71) aid_size_cell_graphic_pane_ParamLimits

0xed5d,	// (0x000341b2) popup_ai2_data_window_g1_ParamLimits

0xed5d,	// (0x000341b2) popup_ai2_data_window_g1

0xed69,	// (0x000341be) ai2_news_ticker_pane_g1

0xed71,	// (0x000341c6) ai2_news_ticker_pane_g2

0x0001,

0x041c,	// (0x00025871) ai2_news_ticker_pane_g

0xed79,	// (0x000341ce) ai2_news_ticker_pane_t1

0xed87,	// (0x000341dc) ai2_news_ticker_pane_t2

0x0001,

0x0421,	// (0x00025876) ai2_news_ticker_pane_t

0xedb4,	// (0x00034209) heading_ai2_gene_pane_g1

0xedbc,	// (0x00034211) heading_ai2_gene_pane_t1_ParamLimits

0xedbc,	// (0x00034211) heading_ai2_gene_pane_t1

0xedd1,	// (0x00034226) list_highlight_pane_cp6

0xedd9,	// (0x0003422e) ai2_gene_pane_ParamLimits

0xedd9,	// (0x0003422e) ai2_gene_pane

0xedff,	// (0x00034254) list_ai2_gene_pane_t2

0x0001,

0x0426,	// (0x0002587b) list_ai2_gene_pane_t

0xee0d,	// (0x00034262) list_highlight_pane_cp8_ParamLimits

0xee0d,	// (0x00034262) list_highlight_pane_cp8

0xee1e,	// (0x00034273) ai2_gene_pane_g1_ParamLimits

0xee1e,	// (0x00034273) ai2_gene_pane_g1

0xee30,	// (0x00034285) ai2_gene_pane_g2_ParamLimits

0xee30,	// (0x00034285) ai2_gene_pane_g2

0x0001,

0x042b,	// (0x00025880) ai2_gene_pane_g_ParamLimits

0x042b,	// (0x00025880) ai2_gene_pane_g

0xc92e,	// (0x00031d83) scroll_pane_cp12

0x8a6c,	// (0x0002dec1) control_pane_t3_ParamLimits

0x8a6c,	// (0x0002dec1) control_pane_t3

0xd57c,	// (0x000329d1) status_small_pane_g8_ParamLimits

0xd57c,	// (0x000329d1) status_small_pane_g8

0x9ed1,	// (0x0002f326) popup_find_window_ParamLimits

0xa14c,	// (0x0002f5a1) popup_note_image_window_ParamLimits

0x67f2,	// (0x0002bc47) list_double2_graphic_pane_vc_g1_ParamLimits

0x67f2,	// (0x0002bc47) list_double2_graphic_pane_vc_g1

0x6778,	// (0x0002bbcd) list_double2_graphic_pane_vc_g2_ParamLimits

0x6778,	// (0x0002bbcd) list_double2_graphic_pane_vc_g2

0x6784,	// (0x0002bbd9) list_double2_graphic_pane_vc_g3_ParamLimits

0x6784,	// (0x0002bbd9) list_double2_graphic_pane_vc_g3

0x0002,

0xf74e,	// (0x00034ba3) list_double2_graphic_pane_vc_g_ParamLimits

0xf74e,	// (0x00034ba3) list_double2_graphic_pane_vc_g

0x6ec3,	// (0x0002c318) list_double2_graphic_pane_vc_t1_ParamLimits

0x6ec3,	// (0x0002c318) list_double2_graphic_pane_vc_t1

0x6778,	// (0x0002bbcd) list_single_heading_pane_vc_g1_ParamLimits

0x6778,	// (0x0002bbcd) list_single_heading_pane_vc_g1

0x6784,	// (0x0002bbd9) list_single_heading_pane_vc_g2_ParamLimits

0x6784,	// (0x0002bbd9) list_single_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x00034a46) list_single_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x00034a46) list_single_heading_pane_vc_g

0x6ed9,	// (0x0002c32e) list_single_heading_pane_vc_t1_ParamLimits

0x6ed9,	// (0x0002c32e) list_single_heading_pane_vc_t1

0x6eef,	// (0x0002c344) list_single_heading_pane_vc_t2_ParamLimits

0x6eef,	// (0x0002c344) list_single_heading_pane_vc_t2

0x0001,

0xf76a,	// (0x00034bbf) list_single_heading_pane_vc_t_ParamLimits

0xf76a,	// (0x00034bbf) list_single_heading_pane_vc_t

0xd96a,	// (0x00032dbf) list_setting_number_pane_vc_g1_ParamLimits

0xd96a,	// (0x00032dbf) list_setting_number_pane_vc_g1

0xd976,	// (0x00032dcb) list_setting_number_pane_vc_g2_ParamLimits

0xd976,	// (0x00032dcb) list_setting_number_pane_vc_g2

0x0001,

0x0234,	// (0x00025689) list_setting_number_pane_vc_g_ParamLimits

0x0234,	// (0x00025689) list_setting_number_pane_vc_g

0xd982,	// (0x00032dd7) list_setting_number_pane_vc_t1_ParamLimits

0xd982,	// (0x00032dd7) list_setting_number_pane_vc_t1

0xd996,	// (0x00032deb) list_setting_number_pane_vc_t2_ParamLimits

0xd996,	// (0x00032deb) list_setting_number_pane_vc_t2

0xd9b2,	// (0x00032e07) list_setting_number_pane_vc_t3_ParamLimits

0xd9b2,	// (0x00032e07) list_setting_number_pane_vc_t3

0x0002,

0x0239,	// (0x0002568e) list_setting_number_pane_vc_t_ParamLimits

0x0239,	// (0x0002568e) list_setting_number_pane_vc_t

0xd9da,	// (0x00032e2f) set_value_pane_vc_ParamLimits

0xd9da,	// (0x00032e2f) set_value_pane_vc

0x6fc7,	// (0x0002c41c) list_double2_graphic_pane_vc_ParamLimits

0x6fc7,	// (0x0002c41c) list_double2_graphic_pane_vc

0xea99,	// (0x00033eee) list_double2_large_graphic_pane_vc_ParamLimits

0xea99,	// (0x00033eee) list_double2_large_graphic_pane_vc

0x6fc7,	// (0x0002c41c) list_double2_pane_vc_ParamLimits

0x6fc7,	// (0x0002c41c) list_double2_pane_vc

0x6fc7,	// (0x0002c41c) list_double_graphic_heading_pane_vc_ParamLimits

0x6fc7,	// (0x0002c41c) list_double_graphic_heading_pane_vc

0x6fc7,	// (0x0002c41c) list_double_graphic_pane_vc_ParamLimits

0x6fc7,	// (0x0002c41c) list_double_graphic_pane_vc

0x6fc7,	// (0x0002c41c) list_double_heading_pane_vc_ParamLimits

0x6fc7,	// (0x0002c41c) list_double_heading_pane_vc

0xea99,	// (0x00033eee) list_double_large_graphic_pane_vc_ParamLimits

0xea99,	// (0x00033eee) list_double_large_graphic_pane_vc

0x6fc7,	// (0x0002c41c) list_double_number_pane_vc_ParamLimits

0x6fc7,	// (0x0002c41c) list_double_number_pane_vc

0x6fc7,	// (0x0002c41c) list_double_pane_vc_ParamLimits

0x6fc7,	// (0x0002c41c) list_double_pane_vc

0x6fc7,	// (0x0002c41c) list_double_time_pane_vc_ParamLimits

0x6fc7,	// (0x0002c41c) list_double_time_pane_vc

0x6fc7,	// (0x0002c41c) list_setting_number_pane_vc_ParamLimits

0x6fc7,	// (0x0002c41c) list_setting_number_pane_vc

0x6fc7,	// (0x0002c41c) list_setting_pane_vc_ParamLimits

0x6fc7,	// (0x0002c41c) list_setting_pane_vc

0x6fc7,	// (0x0002c41c) list_single_graphic_heading_pane_vc_ParamLimits

0x6fc7,	// (0x0002c41c) list_single_graphic_heading_pane_vc

0x6fc7,	// (0x0002c41c) list_single_heading_pane_vc_ParamLimits

0x6fc7,	// (0x0002c41c) list_single_heading_pane_vc

0x6fc7,	// (0x0002c41c) list_single_number_heading_pane_vc_ParamLimits

0x6fc7,	// (0x0002c41c) list_single_number_heading_pane_vc

0x67f2,	// (0x0002bc47) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x67f2,	// (0x0002bc47) list_double_graphic_heading_pane_vc_g1

0x6778,	// (0x0002bbcd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6778,	// (0x0002bbcd) list_double_graphic_heading_pane_vc_g2

0x6784,	// (0x0002bbd9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6784,	// (0x0002bbd9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf74e,	// (0x00034ba3) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf74e,	// (0x00034ba3) list_double_graphic_heading_pane_vc_g

0x7098,	// (0x0002c4ed) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7098,	// (0x0002c4ed) list_double_graphic_heading_pane_vc_t1

0x6ed9,	// (0x0002c32e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6ed9,	// (0x0002c32e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf833,	// (0x00034c88) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf833,	// (0x00034c88) list_double_graphic_heading_pane_vc_t

0xd96a,	// (0x00032dbf) list_setting_pane_vc_g1_ParamLimits

0xd96a,	// (0x00032dbf) list_setting_pane_vc_g1

0xd976,	// (0x00032dcb) list_setting_pane_vc_g2_ParamLimits

0xd976,	// (0x00032dcb) list_setting_pane_vc_g2

0x0001,

0x0234,	// (0x00025689) list_setting_pane_vc_g_ParamLimits

0x0234,	// (0x00025689) list_setting_pane_vc_g

0xf093,	// (0x000344e8) list_setting_pane_vc_t1_ParamLimits

0xf093,	// (0x000344e8) list_setting_pane_vc_t1

0xf0a7,	// (0x000344fc) list_setting_pane_vc_t2_ParamLimits

0xf0a7,	// (0x000344fc) list_setting_pane_vc_t2

0x0001,

0x047a,	// (0x000258cf) list_setting_pane_vc_t_ParamLimits

0x047a,	// (0x000258cf) list_setting_pane_vc_t

0xd9da,	// (0x00032e2f) set_value_pane_cp_vc_ParamLimits

0xd9da,	// (0x00032e2f) set_value_pane_cp_vc

0x6778,	// (0x0002bbcd) list_single_number_heading_pane_vc_g1_ParamLimits

0x6778,	// (0x0002bbcd) list_single_number_heading_pane_vc_g1

0x6784,	// (0x0002bbd9) list_single_number_heading_pane_vc_g2_ParamLimits

0x6784,	// (0x0002bbd9) list_single_number_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x00034a46) list_single_number_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x00034a46) list_single_number_heading_pane_vc_g

0x6ed9,	// (0x0002c32e) list_single_number_heading_pane_vc_t1_ParamLimits

0x6ed9,	// (0x0002c32e) list_single_number_heading_pane_vc_t1

0x70ac,	// (0x0002c501) list_single_number_heading_pane_vc_t2_ParamLimits

0x70ac,	// (0x0002c501) list_single_number_heading_pane_vc_t2

0x67e0,	// (0x0002bc35) list_single_number_heading_pane_vc_t3_ParamLimits

0x67e0,	// (0x0002bc35) list_single_number_heading_pane_vc_t3

0x0002,

0xf84d,	// (0x00034ca2) list_single_number_heading_pane_vc_t_ParamLimits

0xf84d,	// (0x00034ca2) list_single_number_heading_pane_vc_t

0x67f2,	// (0x0002bc47) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x67f2,	// (0x0002bc47) list_single_graphic_heading_pane_vc_g1

0x6778,	// (0x0002bbcd) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6778,	// (0x0002bbcd) list_single_graphic_heading_pane_vc_g4

0x6784,	// (0x0002bbd9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6784,	// (0x0002bbd9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf74e,	// (0x00034ba3) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf74e,	// (0x00034ba3) list_single_graphic_heading_pane_vc_g

0x6ed9,	// (0x0002c32e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6ed9,	// (0x0002c32e) list_single_graphic_heading_pane_vc_t1

0x70c0,	// (0x0002c515) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x70c0,	// (0x0002c515) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf854,	// (0x00034ca9) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf854,	// (0x00034ca9) list_single_graphic_heading_pane_vc_t

0x6778,	// (0x0002bbcd) list_double2_pane_vc_g1_ParamLimits

0x6778,	// (0x0002bbcd) list_double2_pane_vc_g1

0x6784,	// (0x0002bbd9) list_double2_pane_vc_g2_ParamLimits

0x6784,	// (0x0002bbd9) list_double2_pane_vc_g2

0x0001,

0xf5f1,	// (0x00034a46) list_double2_pane_vc_g_ParamLimits

0xf5f1,	// (0x00034a46) list_double2_pane_vc_g

0x6f8f,	// (0x0002c3e4) list_double2_pane_vc_t1_ParamLimits

0x6f8f,	// (0x0002c3e4) list_double2_pane_vc_t1

0x70d4,	// (0x0002c529) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x70d4,	// (0x0002c529) list_double2_large_graphic_pane_vc_g1

0x70e0,	// (0x0002c535) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x70e0,	// (0x0002c535) list_double2_large_graphic_pane_vc_g2

0x70ec,	// (0x0002c541) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x70ec,	// (0x0002c541) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf60e,	// (0x00034a63) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf60e,	// (0x00034a63) list_double2_large_graphic_pane_vc_g

0x70f8,	// (0x0002c54d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x70f8,	// (0x0002c54d) list_double2_large_graphic_pane_vc_t1

0x710e,	// (0x0002c563) list_double_time_pane_vc_g1_ParamLimits

0x710e,	// (0x0002c563) list_double_time_pane_vc_g1

0x711a,	// (0x0002c56f) list_double_time_pane_vc_g2_ParamLimits

0x711a,	// (0x0002c56f) list_double_time_pane_vc_g2

0x0001,

0xf859,	// (0x00034cae) list_double_time_pane_vc_g_ParamLimits

0xf859,	// (0x00034cae) list_double_time_pane_vc_g

0x7126,	// (0x0002c57b) list_double_time_pane_vc_t1_ParamLimits

0x7126,	// (0x0002c57b) list_double_time_pane_vc_t1

0x713f,	// (0x0002c594) list_double_time_pane_vc_t2_ParamLimits

0x713f,	// (0x0002c594) list_double_time_pane_vc_t2

0x717f,	// (0x0002c5d4) list_double_time_pane_vc_t3_ParamLimits

0x717f,	// (0x0002c5d4) list_double_time_pane_vc_t3

0x7197,	// (0x0002c5ec) list_double_time_pane_vc_t4_ParamLimits

0x7197,	// (0x0002c5ec) list_double_time_pane_vc_t4

0x0003,

0xf85e,	// (0x00034cb3) list_double_time_pane_vc_t_ParamLimits

0xf85e,	// (0x00034cb3) list_double_time_pane_vc_t

0x6778,	// (0x0002bbcd) list_double_pane_vc_g1_ParamLimits

0x6778,	// (0x0002bbcd) list_double_pane_vc_g1

0x6784,	// (0x0002bbd9) list_double_pane_vc_g2_ParamLimits

0x6784,	// (0x0002bbd9) list_double_pane_vc_g2

0x0001,

0xf5f1,	// (0x00034a46) list_double_pane_vc_g_ParamLimits

0xf5f1,	// (0x00034a46) list_double_pane_vc_g

0x71ab,	// (0x0002c600) list_double_pane_vc_t1_ParamLimits

0x71ab,	// (0x0002c600) list_double_pane_vc_t1

0x71bd,	// (0x0002c612) list_double_pane_vc_t2_ParamLimits

0x71bd,	// (0x0002c612) list_double_pane_vc_t2

0x0001,

0xf867,	// (0x00034cbc) list_double_pane_vc_t_ParamLimits

0xf867,	// (0x00034cbc) list_double_pane_vc_t

0x6778,	// (0x0002bbcd) list_double_number_pane_vc_g1_ParamLimits

0x6778,	// (0x0002bbcd) list_double_number_pane_vc_g1

0x6784,	// (0x0002bbd9) list_double_number_pane_vc_g2_ParamLimits

0x6784,	// (0x0002bbd9) list_double_number_pane_vc_g2

0x0001,

0xf5f1,	// (0x00034a46) list_double_number_pane_vc_g_ParamLimits

0xf5f1,	// (0x00034a46) list_double_number_pane_vc_g

0x71d5,	// (0x0002c62a) list_double_number_pane_vc_t1_ParamLimits

0x71d5,	// (0x0002c62a) list_double_number_pane_vc_t1

0x71e9,	// (0x0002c63e) list_double_number_pane_vc_t2_ParamLimits

0x71e9,	// (0x0002c63e) list_double_number_pane_vc_t2

0x71bd,	// (0x0002c612) list_double_number_pane_vc_t3_ParamLimits

0x71bd,	// (0x0002c612) list_double_number_pane_vc_t3

0x0002,

0xf86c,	// (0x00034cc1) list_double_number_pane_vc_t_ParamLimits

0xf86c,	// (0x00034cc1) list_double_number_pane_vc_t

0x71fb,	// (0x0002c650) list_double_large_graphic_pane_vc_g1_ParamLimits

0x71fb,	// (0x0002c650) list_double_large_graphic_pane_vc_g1

0x7207,	// (0x0002c65c) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7207,	// (0x0002c65c) list_double_large_graphic_pane_vc_g2

0x70ec,	// (0x0002c541) list_double_large_graphic_pane_vc_g3_ParamLimits

0x70ec,	// (0x0002c541) list_double_large_graphic_pane_vc_g3

0x7216,	// (0x0002c66b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7216,	// (0x0002c66b) list_double_large_graphic_pane_vc_g4

0x0003,

0xf873,	// (0x00034cc8) list_double_large_graphic_pane_vc_g_ParamLimits

0xf873,	// (0x00034cc8) list_double_large_graphic_pane_vc_g

0x7222,	// (0x0002c677) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7222,	// (0x0002c677) list_double_large_graphic_pane_vc_t1

0x7234,	// (0x0002c689) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7234,	// (0x0002c689) list_double_large_graphic_pane_vc_t2

0x0001,

0xf87c,	// (0x00034cd1) list_double_large_graphic_pane_vc_t_ParamLimits

0xf87c,	// (0x00034cd1) list_double_large_graphic_pane_vc_t

0x6778,	// (0x0002bbcd) list_double_heading_pane_vc_g1_ParamLimits

0x6778,	// (0x0002bbcd) list_double_heading_pane_vc_g1

0x6784,	// (0x0002bbd9) list_double_heading_pane_vc_g2_ParamLimits

0x6784,	// (0x0002bbd9) list_double_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x00034a46) list_double_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x00034a46) list_double_heading_pane_vc_g

0x724d,	// (0x0002c6a2) list_double_heading_pane_vc_t1_ParamLimits

0x724d,	// (0x0002c6a2) list_double_heading_pane_vc_t1

0x6ed9,	// (0x0002c32e) list_double_heading_pane_vc_t2_ParamLimits

0x6ed9,	// (0x0002c32e) list_double_heading_pane_vc_t2

0x0001,

0xf881,	// (0x00034cd6) list_double_heading_pane_vc_t_ParamLimits

0xf881,	// (0x00034cd6) list_double_heading_pane_vc_t

0x7261,	// (0x0002c6b6) list_double_graphic_pane_vc_g1_ParamLimits

0x7261,	// (0x0002c6b6) list_double_graphic_pane_vc_g1

0x7271,	// (0x0002c6c6) list_double_graphic_pane_vc_g2_ParamLimits

0x7271,	// (0x0002c6c6) list_double_graphic_pane_vc_g2

0x7280,	// (0x0002c6d5) list_double_graphic_pane_vc_g3_ParamLimits

0x7280,	// (0x0002c6d5) list_double_graphic_pane_vc_g3

0x0002,

0xf886,	// (0x00034cdb) list_double_graphic_pane_vc_g_ParamLimits

0xf886,	// (0x00034cdb) list_double_graphic_pane_vc_g

0x728c,	// (0x0002c6e1) list_double_graphic_pane_vc_t1_ParamLimits

0x728c,	// (0x0002c6e1) list_double_graphic_pane_vc_t1

0x71bd,	// (0x0002c612) list_double_graphic_pane_vc_t2_ParamLimits

0x71bd,	// (0x0002c612) list_double_graphic_pane_vc_t2

0x0001,

0xf88d,	// (0x00034ce2) list_double_graphic_pane_vc_t_ParamLimits

0xf88d,	// (0x00034ce2) list_double_graphic_pane_vc_t

0x09b4,	// (0x00025e09) aid_size_cell_fastswap

0x879e,	// (0x0002dbf3) aid_size_cell_touch_ParamLimits

0x879e,	// (0x0002dbf3) aid_size_cell_touch

0x0c21,	// (0x00026076) popup_fast_swap_wide_window_ParamLimits

0x0c21,	// (0x00026076) popup_fast_swap_wide_window

0x88e9,	// (0x0002dd3e) touch_pane_ParamLimits

0x88e9,	// (0x0002dd3e) touch_pane

0xc984,	// (0x00031dd9) button_value_adjust_pane_cp2

0x6bc2,	// (0x0002c017) button_value_adjust_pane_cp4

0x6be2,	// (0x0002c037) form_field_data_pane_cp2

0x95ec,	// (0x0002ea41) form_field_data_wide_pane_cp2

0xccd6,	// (0x0003212b) bg_scroll_pane_ParamLimits

0x135a,	// (0x000267af) scroll_handle_pane_ParamLimits

0x136e,	// (0x000267c3) scroll_sc2_down_pane_ParamLimits

0x136e,	// (0x000267c3) scroll_sc2_down_pane

0xcd07,	// (0x0003215c) scroll_sc2_up_pane_ParamLimits

0xcd07,	// (0x0003215c) scroll_sc2_up_pane

0xaeaa,	// (0x000302ff) grid_wheel_folder_pane_g1_ParamLimits

0xaeaa,	// (0x000302ff) grid_wheel_folder_pane_g1

0x15e4,	// (0x00026a39) clock_nsta_pane_cp2_ParamLimits

0x15e4,	// (0x00026a39) clock_nsta_pane_cp2

0x9ce1,	// (0x0002f136) listscroll_midp_pane_ParamLimits

0x9cf2,	// (0x0002f147) midp_canvas_pane

0xd5d0,	// (0x00032a25) nsta_clock_indic_pane

0xd614,	// (0x00032a69) listscroll_form_pane_vc

0xd61c,	// (0x00032a71) listscroll_set_pane_vc_ParamLimits

0xd61c,	// (0x00032a71) listscroll_set_pane_vc

0xa573,	// (0x0002f9c8) clock_nsta_pane

0xa59d,	// (0x0002f9f2) indicator_nsta_pane

0xd860,	// (0x00032cb5) bg_popup_sub_pane_cp2_ParamLimits

0xd874,	// (0x00032cc9) find_pane_cp2_ParamLimits

0xd874,	// (0x00032cc9) find_pane_cp2

0xd88a,	// (0x00032cdf) grid_toobar_pane_ParamLimits

0xd9e6,	// (0x00032e3b) list_form_gen_pane_vc_ParamLimits

0xd9e6,	// (0x00032e3b) list_form_gen_pane_vc

0xd9fc,	// (0x00032e51) scroll_pane_cp8_vc_ParamLimits

0xd9fc,	// (0x00032e51) scroll_pane_cp8_vc

0xda4c,	// (0x00032ea1) data_form_wide_pane_vc_ParamLimits

0xda4c,	// (0x00032ea1) data_form_wide_pane_vc

0xda58,	// (0x00032ead) form_field_data_wide_pane_vc_g1

0xda60,	// (0x00032eb5) form_field_data_wide_pane_vc_t1_ParamLimits

0xda60,	// (0x00032eb5) form_field_data_wide_pane_vc_t1

0xc998,	// (0x00031ded) input_focus_pane_cp6_vc_ParamLimits

0xc998,	// (0x00031ded) input_focus_pane_cp6_vc

0xa91a,	// (0x0002fd6f) list_midp_pane_ParamLimits

0xe856,	// (0x00033cab) scroll_pane_cp16_ParamLimits

0xe856,	// (0x00033cab) scroll_pane_cp16

0xdcc1,	// (0x00033116) button_value_adjust_pane_ParamLimits

0xdcc1,	// (0x00033116) button_value_adjust_pane

0xab2a,	// (0x0002ff7f) button_value_adjust_pane_cp6_ParamLimits

0xab2a,	// (0x0002ff7f) button_value_adjust_pane_cp6

0xac40,	// (0x00030095) settings_code_pane_cp_ParamLimits

0xac40,	// (0x00030095) settings_code_pane_cp

0xc2eb,	// (0x00031740) cell_touch_pane_g1

0xc2eb,	// (0x00031740) cell_touch_pane_g2

0x0001,

0x015e,	// (0x000255b3) cell_touch_pane_g

0xad89,	// (0x000301de) cell_touch_pane_cp_ParamLimits

0xad89,	// (0x000301de) cell_touch_pane_cp

0xada5,	// (0x000301fa) cell_touch_pane_ParamLimits

0xada5,	// (0x000301fa) cell_touch_pane

0xc2eb,	// (0x00031740) scroll_sc2_down_pane_g1

0xc2eb,	// (0x00031740) scroll_sc2_up_pane_g1

0xc2f5,	// (0x0003174a) bg_set_opt_pane_cp4_vc

0xeeaf,	// (0x00034304) list_set_graphic_pane_vc_g1_ParamLimits

0xeeaf,	// (0x00034304) list_set_graphic_pane_vc_g1

0xeebb,	// (0x00034310) list_set_graphic_pane_vc_g2_ParamLimits

0xeebb,	// (0x00034310) list_set_graphic_pane_vc_g2

0x0001,

0x043c,	// (0x00025891) list_set_graphic_pane_vc_g_ParamLimits

0x043c,	// (0x00025891) list_set_graphic_pane_vc_g

0xeec7,	// (0x0003431c) text_primary_small_cp13_vc_ParamLimits

0xeec7,	// (0x0003431c) text_primary_small_cp13_vc

0xeedf,	// (0x00034334) list_set_graphic_pane_vc_ParamLimits

0xeedf,	// (0x00034334) list_set_graphic_pane_vc

0xc2f5,	// (0x0003174a) input_focus_pane_cp2_vc

0xc2eb,	// (0x00031740) setting_code_pane_vc_g1

0xeef3,	// (0x00034348) setting_code_pane_vc_t1

0xef01,	// (0x00034356) set_text_pane_vc_t1_ParamLimits

0xef01,	// (0x00034356) set_text_pane_vc_t1

0xc2f5,	// (0x0003174a) input_focus_pane_cp1_vc

0xef20,	// (0x00034375) list_set_text_pane_vc

0xc2eb,	// (0x00031740) setting_text_pane_vc_g1

0xc2f5,	// (0x0003174a) bg_set_opt_pane_cp2_vc

0xef2a,	// (0x0003437f) setting_slider_graphic_pane_vc_g1

0xef32,	// (0x00034387) setting_slider_graphic_pane_vc_t1

0xef40,	// (0x00034395) setting_slider_graphic_pane_vc_t2

0x0001,

0x0441,	// (0x00025896) setting_slider_graphic_pane_vc_t

0xef4e,	// (0x000343a3) slider_set_pane_cp_vc

0xef56,	// (0x000343ab) slider_set_pane_vc_g1

0xef5f,	// (0x000343b4) slider_set_pane_vc_g2

0x0006,

0x0446,	// (0x0002589b) slider_set_pane_vc_g

0xc9ff,	// (0x00031e54) set_opt_bg_pane_g1_copy1

0xca07,	// (0x00031e5c) set_opt_bg_pane_g2_copy1

0xef8b,	// (0x000343e0) set_opt_bg_pane_g3_copy1

0xca17,	// (0x00031e6c) set_opt_bg_pane_g4_copy1

0xca1f,	// (0x00031e74) set_opt_bg_pane_g5_copy1

0xca27,	// (0x00031e7c) set_opt_bg_pane_g6_copy1

0xef93,	// (0x000343e8) set_opt_bg_pane_g7_copy1

0xef9d,	// (0x000343f2) set_opt_bg_pane_g8_copy1

0xefa5,	// (0x000343fa) set_opt_bg_pane_g9_copy1

0xc2f5,	// (0x0003174a) bg_set_opt_pane_cp_vc

0xefad,	// (0x00034402) setting_slider_pane_vc_t1

0xef32,	// (0x00034387) setting_slider_pane_vc_t2

0xef40,	// (0x00034395) setting_slider_pane_vc_t3

0x0002,

0x0455,	// (0x000258aa) setting_slider_pane_vc_t

0xef4e,	// (0x000343a3) slider_set_pane_vc

0x23b2,	// (0x00027807) volume_set_pane_vc_g1

0x2aaa,	// (0x00027eff) volume_set_pane_vc_g2

0x2ab3,	// (0x00027f08) volume_set_pane_vc_g3

0x2abc,	// (0x00027f11) volume_set_pane_vc_g4

0x2ac5,	// (0x00027f1a) volume_set_pane_vc_g5

0x2ace,	// (0x00027f23) volume_set_pane_vc_g6

0x2ad7,	// (0x00027f2c) volume_set_pane_vc_g7

0x2ae0,	// (0x00027f35) volume_set_pane_vc_g8

0x2ae9,	// (0x00027f3e) volume_set_pane_vc_g9

0x2af2,	// (0x00027f47) volume_set_pane_vc_g10

0x0009,

0xf838,	// (0x00034c8d) volume_set_pane_vc_g

0xefbc,	// (0x00034411) volume_set_pane_vc

0xefc4,	// (0x00034419) button_value_adjust_pane_cp1_vc

0xefce,	// (0x00034423) list_highlight_pane_cp2_vc

0xefd7,	// (0x0003442c) list_set_pane_vc_ParamLimits

0xefd7,	// (0x0003442c) list_set_pane_vc

0xf029,	// (0x0003447e) main_pane_set_vc_t1_ParamLimits

0xf029,	// (0x0003447e) main_pane_set_vc_t1

0xf03e,	// (0x00034493) main_pane_set_vc_t2_ParamLimits

0xf03e,	// (0x00034493) main_pane_set_vc_t2

0xf050,	// (0x000344a5) main_pane_set_vc_t3_ParamLimits

0xf050,	// (0x000344a5) main_pane_set_vc_t3

0xf062,	// (0x000344b7) main_pane_set_vc_t4_ParamLimits

0xf062,	// (0x000344b7) main_pane_set_vc_t4

0x0003,

0x0471,	// (0x000258c6) main_pane_set_vc_t_ParamLimits

0x0471,	// (0x000258c6) main_pane_set_vc_t

0xf074,	// (0x000344c9) setting_code_pane_vc_ParamLimits

0xf074,	// (0x000344c9) setting_code_pane_vc

0xf083,	// (0x000344d8) setting_slider_graphic_pane_vc

0xf083,	// (0x000344d8) setting_slider_pane_vc

0xf083,	// (0x000344d8) setting_text_pane_vc

0xf083,	// (0x000344d8) setting_volume_pane_vc

0xf08b,	// (0x000344e0) scroll_pane_cp121_vc

0xc972,	// (0x00031dc7) set_content_pane_vc

0xf0c9,	// (0x0003451e) button_value_adjust_pane_g1

0xf0d2,	// (0x00034527) button_value_adjust_pane_g2

0x0001,

0x04c4,	// (0x00025919) button_value_adjust_pane_g

0xf0db,	// (0x00034530) form_field_slider_wide_pane_vc_t1_ParamLimits

0xf0db,	// (0x00034530) form_field_slider_wide_pane_vc_t1

0xf0ef,	// (0x00034544) form_field_slider_wide_pane_vc_t2_ParamLimits

0xf0ef,	// (0x00034544) form_field_slider_wide_pane_vc_t2

0x0001,

0x04c9,	// (0x0002591e) form_field_slider_wide_pane_vc_t_ParamLimits

0x04c9,	// (0x0002591e) form_field_slider_wide_pane_vc_t

0xc343,	// (0x00031798) input_focus_pane_cp10_vc_ParamLimits

0xc343,	// (0x00031798) input_focus_pane_cp10_vc

0xf101,	// (0x00034556) slider_cont_pane_cp1_vc_ParamLimits

0xf101,	// (0x00034556) slider_cont_pane_cp1_vc

0xef56,	// (0x000343ab) slider_form_pane_g1_cp2

0xef5f,	// (0x000343b4) slider_form_pane_g2_cp2

0xf11a,	// (0x0003456f) form_field_slider_pane_vc_t3

0xf128,	// (0x0003457d) form_field_slider_pane_vc_t4

0xf136,	// (0x0003458b) slider_form_pane_vc_ParamLimits

0xf136,	// (0x0003458b) slider_form_pane_vc

0xf143,	// (0x00034598) form_field_slider_pane_vc_t1_ParamLimits

0xf143,	// (0x00034598) form_field_slider_pane_vc_t1

0xf0ef,	// (0x00034544) form_field_slider_pane_vc_t2_ParamLimits

0xf0ef,	// (0x00034544) form_field_slider_pane_vc_t2

0x0001,

0x04d9,	// (0x0002592e) form_field_slider_pane_vc_t_ParamLimits

0x04d9,	// (0x0002592e) form_field_slider_pane_vc_t

0xc343,	// (0x00031798) input_focus_pane_cp9_vc_ParamLimits

0xc343,	// (0x00031798) input_focus_pane_cp9_vc

0xf15f,	// (0x000345b4) slider_cont_pane_vc_ParamLimits

0xf15f,	// (0x000345b4) slider_cont_pane_vc

0xf171,	// (0x000345c6) list_form_graphic_pane_cp_vc_ParamLimits

0xf171,	// (0x000345c6) list_form_graphic_pane_cp_vc

0xda58,	// (0x00032ead) form_field_popup_wide_pane_vc_g1

0xf186,	// (0x000345db) form_field_popup_wide_pane_vc_t1_ParamLimits

0xf186,	// (0x000345db) form_field_popup_wide_pane_vc_t1

0xc998,	// (0x00031ded) input_focus_pane_cp8_vc_ParamLimits

0xc998,	// (0x00031ded) input_focus_pane_cp8_vc

0xf19d,	// (0x000345f2) list_form_wide_pane_vc_ParamLimits

0xf19d,	// (0x000345f2) list_form_wide_pane_vc

0xf1a9,	// (0x000345fe) list_form_graphic_pane_vc_g1

0xf1b1,	// (0x00034606) list_form_graphic_pane_vc_t1_ParamLimits

0xf1b1,	// (0x00034606) list_form_graphic_pane_vc_t1

0xc351,	// (0x000317a6) list_highlight_pane_cp5_vc_ParamLimits

0xc351,	// (0x000317a6) list_highlight_pane_cp5_vc

0xf1cd,	// (0x00034622) list_form_graphic_pane_vc_ParamLimits

0xf1cd,	// (0x00034622) list_form_graphic_pane_vc

0xda58,	// (0x00032ead) form_field_popup_pane_vc_g1

0xf1e3,	// (0x00034638) form_field_popup_pane_vc_t1_ParamLimits

0xf1e3,	// (0x00034638) form_field_popup_pane_vc_t1

0xc998,	// (0x00031ded) input_focus_pane_cp7_vc_ParamLimits

0xc998,	// (0x00031ded) input_focus_pane_cp7_vc

0xf1fa,	// (0x0003464f) list_form_pane_vc_ParamLimits

0xf1fa,	// (0x0003464f) list_form_pane_vc

0xf206,	// (0x0003465b) data_form_pane_vc_t1_ParamLimits

0xf206,	// (0x0003465b) data_form_pane_vc_t1

0xc9ff,	// (0x00031e54) input_focus_pane_vc_g1

0xca07,	// (0x00031e5c) input_focus_pane_vc_g2

0xca0f,	// (0x00031e64) input_focus_pane_vc_g3

0xca17,	// (0x00031e6c) input_focus_pane_vc_g4

0xca1f,	// (0x00031e74) input_focus_pane_vc_g5

0xca27,	// (0x00031e7c) input_focus_pane_vc_g6

0xca2f,	// (0x00031e84) input_focus_pane_vc_g7

0xca37,	// (0x00031e8c) input_focus_pane_vc_g8

0xca3f,	// (0x00031e94) input_focus_pane_vc_g9

0xc2eb,	// (0x00031740) input_focus_pane_vc_g10

0x0009,

0x00e7,	// (0x0002553c) input_focus_pane_vc_g

0xda4c,	// (0x00032ea1) data_form_pane_vc_ParamLimits

0xda4c,	// (0x00032ea1) data_form_pane_vc

0xda58,	// (0x00032ead) form_field_data_pane_vc_g1

0xf221,	// (0x00034676) form_field_data_pane_vc_t1_ParamLimits

0xf221,	// (0x00034676) form_field_data_pane_vc_t1

0xc998,	// (0x00031ded) input_focus_pane_vc_ParamLimits

0xc998,	// (0x00031ded) input_focus_pane_vc

0xf23b,	// (0x00034690) button_value_adjust_pane_cp3_vc

0xf243,	// (0x00034698) button_value_adjust_pane_cp5_vc

0xf24b,	// (0x000346a0) form_field_data_pane_vc_ParamLimits

0xf24b,	// (0x000346a0) form_field_data_pane_vc

0xf262,	// (0x000346b7) form_field_data_pane_vc_cp2

0xf26a,	// (0x000346bf) form_field_data_wide_pane_vc_ParamLimits

0xf26a,	// (0x000346bf) form_field_data_wide_pane_vc

0xf280,	// (0x000346d5) form_field_data_wide_pane_vc_cp2

0xf288,	// (0x000346dd) form_field_popup_pane_vc_ParamLimits

0xf288,	// (0x000346dd) form_field_popup_pane_vc

0xf29f,	// (0x000346f4) form_field_popup_wide_pane_vc_ParamLimits

0xf29f,	// (0x000346f4) form_field_popup_wide_pane_vc

0xf2b5,	// (0x0003470a) form_field_slider_pane_vc_ParamLimits

0xf2b5,	// (0x0003470a) form_field_slider_pane_vc

0xf2c8,	// (0x0003471d) form_field_slider_wide_pane_vc_ParamLimits

0xf2c8,	// (0x0003471d) form_field_slider_wide_pane_vc

0xadc3,	// (0x00030218) grid_touch_1_pane_ParamLimits

0xadc3,	// (0x00030218) grid_touch_1_pane

0xadd7,	// (0x0003022c) grid_touch_2_pane_ParamLimits

0xadd7,	// (0x0003022c) grid_touch_2_pane

0xf325,	// (0x0003477a) touch_pane_g1_ParamLimits

0xf325,	// (0x0003477a) touch_pane_g1

0xf2db,	// (0x00034730) cell_app_pane_cp_wide_ParamLimits

0xf2db,	// (0x00034730) cell_app_pane_cp_wide

0xf2ec,	// (0x00034741) grid_popup_fast_wide_pane_ParamLimits

0xf2ec,	// (0x00034741) grid_popup_fast_wide_pane

0xf300,	// (0x00034755) scroll_pane_cp19_ParamLimits

0xf300,	// (0x00034755) scroll_pane_cp19

0xc2f5,	// (0x0003174a) bg_popup_window_pane_cp20

0xf314,	// (0x00034769) listscroll_popup_fast_wide_pane

0xd656,	// (0x00032aab) grid_indicator_nsta_pane

0xf31c,	// (0x00034771) clock_nsta_pane_g1

0xf333,	// (0x00034788) clock_nsta_pane_t1

0xae01,	// (0x00030256) cell_indicator_nsta_pane_ParamLimits

0xae01,	// (0x00030256) cell_indicator_nsta_pane

0xf325,	// (0x0003477a) cell_indicator_nsta_pane_g1

0xae1e,	// (0x00030273) cell_indicator_nsta_pane_g2

0x0001,

0xf897,	// (0x00034cec) cell_indicator_nsta_pane_g

0xf34f,	// (0x000347a4) clock_nsta_pane_cp

0xf357,	// (0x000347ac) indicator_nsta_pane_cp

0xf35f,	// (0x000347b4) nsta_clock_indic_pane_g1

0xc38d,	// (0x000317e2) grid_indicator_pane

0xcdf9,	// (0x0003224e) scroll_pane_cp29

0x1533,	// (0x00026988) indicator_nsta_pane_cp2_ParamLimits

0x1533,	// (0x00026988) indicator_nsta_pane_cp2

0xc351,	// (0x000317a6) main_apps_wheel_pane

0xdb74,	// (0x00032fc9) form_midp_field_text_pane_ParamLimits

0xdca1,	// (0x000330f6) scroll_bar_cp050_ParamLimits

0xf397,	// (0x000347ec) cell_indicator_pane_ParamLimits

0xf397,	// (0x000347ec) cell_indicator_pane

0xf3b4,	// (0x00034809) cell_indicator_pane_g1

0xae34,	// (0x00030289) grid_wheel_folder_pane_ParamLimits

0xae34,	// (0x00030289) grid_wheel_folder_pane

0xae42,	// (0x00030297) list_wheel_apps_pane_ParamLimits

0xae42,	// (0x00030297) list_wheel_apps_pane

0xae50,	// (0x000302a5) main_apps_wheel_pane_g1_ParamLimits

0xae50,	// (0x000302a5) main_apps_wheel_pane_g1

0xae5c,	// (0x000302b1) main_apps_wheel_pane_g2_ParamLimits

0xae5c,	// (0x000302b1) main_apps_wheel_pane_g2

0x0001,

0xf89c,	// (0x00034cf1) main_apps_wheel_pane_g_ParamLimits

0xf89c,	// (0x00034cf1) main_apps_wheel_pane_g

0xae6a,	// (0x000302bf) main_apps_wheel_pane_t1_ParamLimits

0xae6a,	// (0x000302bf) main_apps_wheel_pane_t1

0xae7e,	// (0x000302d3) list_wheel_apps_pane_g1

0xae86,	// (0x000302db) list_wheel_apps_pane_g2

0xae8e,	// (0x000302e3) list_wheel_apps_pane_g3

0xae96,	// (0x000302eb) list_wheel_apps_pane_g4

0xaea0,	// (0x000302f5) list_wheel_apps_pane_g5

0x0004,

0xf8a1,	// (0x00034cf6) list_wheel_apps_pane_g

0xd24c,	// (0x000326a1) navi_icon_text_pane

0xa46e,	// (0x0002f8c3) aid_fill_nsta

0xaeb7,	// (0x0003030c) navi_icon_text_pane_g1

0xaec3,	// (0x00030318) navi_icon_text_pane_t1

0xd0e8,	// (0x0003253d) list_set_graphic_pane_t1_ParamLimits

0xd0e8,	// (0x0003253d) list_set_graphic_pane_t1

0xe378,	// (0x000337cd) popup_midp_note_alarm_window_t6_ParamLimits

0xe378,	// (0x000337cd) popup_midp_note_alarm_window_t6

0xe38a,	// (0x000337df) popup_midp_note_alarm_window_t7_ParamLimits

0xe38a,	// (0x000337df) popup_midp_note_alarm_window_t7

0xe39c,	// (0x000337f1) popup_midp_note_alarm_window_t8_ParamLimits

0xe39c,	// (0x000337f1) popup_midp_note_alarm_window_t8

0xe3ae,	// (0x00033803) popup_midp_note_alarm_window_t9_ParamLimits

0xe3ae,	// (0x00033803) popup_midp_note_alarm_window_t9

0xe3c0,	// (0x00033815) popup_midp_note_alarm_window_t10_ParamLimits

0xe3c0,	// (0x00033815) popup_midp_note_alarm_window_t10

0xe3d2,	// (0x00033827) popup_midp_note_alarm_window_t11_ParamLimits

0xe3d2,	// (0x00033827) popup_midp_note_alarm_window_t11

0xe3e4,	// (0x00033839) scroll_pane_cp17_ParamLimits

0xe3e4,	// (0x00033839) scroll_pane_cp17

0x23b2,	// (0x00027807) volume_small_pane_cp_g1

0x2c4c,	// (0x000280a1) volume_small_pane_cp_g2

0x2c55,	// (0x000280aa) volume_small_pane_cp_g3

0x2c5e,	// (0x000280b3) volume_small_pane_cp_g4

0x2c67,	// (0x000280bc) volume_small_pane_cp_g5

0x2c70,	// (0x000280c5) volume_small_pane_cp_g6

0x2c79,	// (0x000280ce) volume_small_pane_cp_g7

0x2c82,	// (0x000280d7) volume_small_pane_cp_g8

0x2c8b,	// (0x000280e0) volume_small_pane_cp_g9

0x2c94,	// (0x000280e9) volume_small_pane_cp_g10

0xd3f8,	// (0x0003284d) midp_ticker_pane_g1_ParamLimits

0xd404,	// (0x00032859) midp_ticker_pane_g2_ParamLimits

0x01af,	// (0x00025604) midp_ticker_pane_g_ParamLimits

0x9d8d,	// (0x0002f1e2) midp_ticker_pane_t1_ParamLimits

0xa48e,	// (0x0002f8e3) aid_fill_nsta_2

0xdc8d,	// (0x000330e2) list_form2_midp_pane

0xea77,	// (0x00033ecc) midp_editing_number_pane_ParamLimits

0xea86,	// (0x00033edb) midp_ticker_pane_ParamLimits

0xf3be,	// (0x00034813) form2_midp_field_pane

0xf3c6,	// (0x0003481b) scroll_pane_cp51

0xf3e6,	// (0x0003483b) form2_midp_button_pane_ParamLimits

0xf3e6,	// (0x0003483b) form2_midp_button_pane

0xf3f8,	// (0x0003484d) form2_midp_content_pane_ParamLimits

0xf3f8,	// (0x0003484d) form2_midp_content_pane

0xf412,	// (0x00034867) form2_midp_field_choice_group_pane

0xf41a,	// (0x0003486f) form2_midp_field_pane_g1

0xf422,	// (0x00034877) form2_midp_field_pane_g2

0xf42a,	// (0x0003487f) form2_midp_field_pane_g3

0xf432,	// (0x00034887) form2_midp_field_pane_g4

0x0003,

0x051c,	// (0x00025971) form2_midp_field_pane_g

0xf43a,	// (0x0003488f) form2_midp_gauge_slider_pane

0xf442,	// (0x00034897) form2_midp_gauge_wait_pane

0xf44a,	// (0x0003489f) form2_midp_image_pane_ParamLimits

0xf44a,	// (0x0003489f) form2_midp_image_pane

0xf465,	// (0x000348ba) form2_midp_label_pane_ParamLimits

0xf465,	// (0x000348ba) form2_midp_label_pane

0xaef1,	// (0x00030346) form2_midp_label_pane_cp_ParamLimits

0xaef1,	// (0x00030346) form2_midp_label_pane_cp

0xf47e,	// (0x000348d3) form2_midp_string_pane_ParamLimits

0xf47e,	// (0x000348d3) form2_midp_string_pane

0x729e,	// (0x0002c6f3) form2_midp_text_pane_ParamLimits

0x729e,	// (0x0002c6f3) form2_midp_text_pane

0xf490,	// (0x000348e5) form2_midp_time_pane

0xf4a0,	// (0x000348f5) input_focus_pane_cp51_ParamLimits

0xf4a0,	// (0x000348f5) input_focus_pane_cp51

0xf4b8,	// (0x0003490d) form2_midp_label_pane_t1_ParamLimits

0xf4b8,	// (0x0003490d) form2_midp_label_pane_t1

0x72b7,	// (0x0002c70c) form2_mdip_text_pane_t1_ParamLimits

0x72b7,	// (0x0002c70c) form2_mdip_text_pane_t1

0x72d4,	// (0x0002c729) form2_midp_time_pane_t1

0xf500,	// (0x00034955) form2_midp_gauge_slider_pane_t1

0xaf12,	// (0x00030367) form2_midp_gauge_slider_pane_t2

0xaf24,	// (0x00030379) form2_midp_gauge_slider_pane_t3

0x0002,

0xf8c6,	// (0x00034d1b) form2_midp_gauge_slider_pane_t

0xf512,	// (0x00034967) form2_midp_slider_pane

0xf51e,	// (0x00034973) form2_midp_gauge_wait_pane_t1

0xf52c,	// (0x00034981) form2_midp_wait_pane_ParamLimits

0xf52c,	// (0x00034981) form2_midp_wait_pane

0xaf36,	// (0x0003038b) list_single_2graphic_pane_cp4_ParamLimits

0xaf36,	// (0x0003038b) list_single_2graphic_pane_cp4

0xa8a1,	// (0x0002fcf6) list_single_midp_graphic_pane_cp_ParamLimits

0xa8a1,	// (0x0002fcf6) list_single_midp_graphic_pane_cp

0xc2f5,	// (0x0003174a) list_highlight_pane_cp20

0xf557,	// (0x000349ac) list_single_2graphic_pane_g1_cp4

0xedb4,	// (0x00034209) list_single_2graphic_pane_g2_cp4

0xf55f,	// (0x000349b4) list_single_2graphic_pane_t1_cp4

0xc351,	// (0x000317a6) list_highlight_pane_cp21

0xf56e,	// (0x000349c3) list_single_midp_graphic_pane_g4_cp

0xf57d,	// (0x000349d2) list_single_midp_graphic_pane_t1_cp

0xaf4d,	// (0x000303a2) form2_mdip_string_pane_t1_ParamLimits

0xaf4d,	// (0x000303a2) form2_mdip_string_pane_t1

0xc2f5,	// (0x0003174a) bg_wml_button_pane_cp2

0xc2eb,	// (0x00031740) form2_midp_image_pane_g1

0x69c3,	// (0x0002be18) list_double_large_graphic_pane_g5_ParamLimits

0x69c3,	// (0x0002be18) list_double_large_graphic_pane_g5

0x9ce1,	// (0x0002f136) midp_form_pane_ParamLimits

0xc351,	// (0x000317a6) main_apps_wheel_pane_ParamLimits

0xa1ca,	// (0x0002f61f) popup_preview_window_ParamLimits

0xa1ca,	// (0x0002f61f) popup_preview_window

0xd701,	// (0x00032b56) popup_touch_info_window_ParamLimits

0xd701,	// (0x00032b56) popup_touch_info_window

0xd71f,	// (0x00032b74) popup_touch_menu_window_ParamLimits

0xd71f,	// (0x00032b74) popup_touch_menu_window

0xc2e1,	// (0x00031736) bg_popup_sub_pane_cp6

0x2e67,	// (0x000282bc) list_touch_menu_pane

0x2e6f,	// (0x000282c4) list_single_touch_menu_pane_ParamLimits

0x2e6f,	// (0x000282c4) list_single_touch_menu_pane

0x2e84,	// (0x000282d9) list_single_touch_menu_pane_t1

0xc351,	// (0x000317a6) bg_popup_sub_pane_cp7_ParamLimits

0xc351,	// (0x000317a6) bg_popup_sub_pane_cp7

0x2e92,	// (0x000282e7) heading_sub_pane

0x2e9a,	// (0x000282ef) list_touch_info_pane_ParamLimits

0x2e9a,	// (0x000282ef) list_touch_info_pane

0x2ea9,	// (0x000282fe) list_single_touch_info_pane_ParamLimits

0x2ea9,	// (0x000282fe) list_single_touch_info_pane

0x2ebb,	// (0x00028310) list_single_touch_info_pane_t1

0x2ec9,	// (0x0002831e) list_single_touch_info_pane_t2

0x0001,

0xf8cd,	// (0x00034d22) list_single_touch_info_pane_t

0xd3ce,	// (0x00032823) bg_popup_heading_pane_cp

0x2ed7,	// (0x0002832c) heading_sub_pane_t1

0xda12,	// (0x00032e67) bg_popup_preview_window_pane_cp_ParamLimits

0xda12,	// (0x00032e67) bg_popup_preview_window_pane_cp

0x2e92,	// (0x000282e7) heading_preview_pane

0x2e9a,	// (0x000282ef) list_preview_pane_ParamLimits

0x2e9a,	// (0x000282ef) list_preview_pane

0x2ee5,	// (0x0002833a) popup_preview_window_g1

0x2ea9,	// (0x000282fe) list_single_preview_pane_ParamLimits

0x2ea9,	// (0x000282fe) list_single_preview_pane

0x2eed,	// (0x00028342) list_single_preview_pane_g1

0x2ef5,	// (0x0002834a) list_single_preview_pane_t1

0x2ebb,	// (0x00028310) list_single_preview_pane_t2

0x0001,

0xf8d2,	// (0x00034d27) list_single_preview_pane_t

0x2f03,	// (0x00028358) bg_popup_heading_pane_cp2_ParamLimits

0x2f03,	// (0x00028358) bg_popup_heading_pane_cp2

0x2f19,	// (0x0002836e) heading_preview_pane_g1

0x2f21,	// (0x00028376) heading_preview_pane_t1_ParamLimits

0x2f21,	// (0x00028376) heading_preview_pane_t1

0xc3a4,	// (0x000317f9) soft_indicator_pane_t1_ParamLimits

0xc90b,	// (0x00031d60) scroll_pane_ParamLimits

0xccf5,	// (0x0003214a) scroll_sc2_left_pane

0xccfe,	// (0x00032153) scroll_sc2_right_pane

0xcd1d,	// (0x00032172) scroll_bg_pane_g1_ParamLimits

0xcd32,	// (0x00032187) scroll_bg_pane_g2_ParamLimits

0xcd4a,	// (0x0003219f) scroll_bg_pane_g3_ParamLimits

0x013e,	// (0x00025593) scroll_bg_pane_g_ParamLimits

0xcd1d,	// (0x00032172) scroll_handle_pane_g1_ParamLimits

0xcd6c,	// (0x000321c1) scroll_handle_pane_g2_ParamLimits

0xcd4a,	// (0x0003219f) scroll_handle_pane_g3_ParamLimits

0x0145,	// (0x0002559a) scroll_handle_pane_g_ParamLimits

0xd63c,	// (0x00032a91) popup_choice_list_window_ParamLimits

0xd63c,	// (0x00032a91) popup_choice_list_window

0xd86c,	// (0x00032cc1) choice_list_pane

0xd8ee,	// (0x00032d43) cell_toolbar_pane_t1

0xd916,	// (0x00032d6b) toolbar_button_pane_ParamLimits

0xe7c2,	// (0x00033c17) ai_gene_pane_1_t2_ParamLimits

0xe7c2,	// (0x00033c17) ai_gene_pane_1_t2

0x0001,

0x0356,	// (0x000257ab) ai_gene_pane_1_t_ParamLimits

0x0356,	// (0x000257ab) ai_gene_pane_1_t

0x2f3e,	// (0x00028393) scroll_sc2_left_pane_g1

0x2f3e,	// (0x00028393) scroll_sc2_right_pane_g1

0xd608,	// (0x00032a5d) bg_popup_sub_pane_cp10

0x2f48,	// (0x0002839d) list_choice_list_pane

0x2f5f,	// (0x000283b4) list_single_choice_list_pane_ParamLimits

0x2f5f,	// (0x000283b4) list_single_choice_list_pane

0x2f73,	// (0x000283c8) list_single_choice_list_pane_g1

0x2f7b,	// (0x000283d0) list_single_choice_list_pane_t1_ParamLimits

0x2f7b,	// (0x000283d0) list_single_choice_list_pane_t1

0x2f90,	// (0x000283e5) choice_list_pane_g1

0x2f98,	// (0x000283ed) choice_list_pane_t1

0xc2e1,	// (0x00031736) input_focus_pane_cp11

0xcc58,	// (0x000320ad) title_pane_stacon_g2_ParamLimits

0xcc58,	// (0x000320ad) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x00034b14) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00034b14) title_pane_stacon_g

0xd3ce,	// (0x00032823) cursor_press_pane

0x9e89,	// (0x0002f2de) popup_fep_hwr_window_ParamLimits

0x9e89,	// (0x0002f2de) popup_fep_hwr_window

0xd69e,	// (0x00032af3) popup_fep_vkb_window_ParamLimits

0xd69e,	// (0x00032af3) popup_fep_vkb_window

0x2fa6,	// (0x000283fb) cursor_press_pane_g1

0x0002,

0xf8fb,	// (0x00034d50) fep_vkb_side_pane_g_ParamLimits

0x2fe7,	// (0x0002843c) fep_hwr_candidate_pane_ParamLimits

0x2fe7,	// (0x0002843c) fep_hwr_candidate_pane

0x3011,	// (0x00028466) fep_hwr_side_pane_ParamLimits

0x3011,	// (0x00028466) fep_hwr_side_pane

0x3031,	// (0x00028486) fep_hwr_top_pane_ParamLimits

0x3031,	// (0x00028486) fep_hwr_top_pane

0x3049,	// (0x0002849e) fep_hwr_write_pane_ParamLimits

0x3049,	// (0x0002849e) fep_hwr_write_pane

0xf8fb,	// (0x00034d50) fep_vkb_side_pane_g

0x3083,	// (0x000284d8) fep_hwr_top_pane_g1

0x3095,	// (0x000284ea) fep_hwr_top_pane_g2

0x30a7,	// (0x000284fc) fep_hwr_top_pane_g3

0x0002,

0xf8d7,	// (0x00034d2c) fep_hwr_top_pane_g

0x30bc,	// (0x00028511) fep_hwr_top_text_pane

0xcebf,	// (0x00032314) fep_hwr_top_text_pane_g1

0x3194,	// (0x000285e9) fep_hwr_top_text_pane_t1

0x31e4,	// (0x00028639) fep_hwr_candidate_pane_g1

0x3457,	// (0x000288ac) fep_vkb_keypad_pane_g3_ParamLimits

0x3457,	// (0x000288ac) fep_vkb_keypad_pane_g3

0x347f,	// (0x000288d4) fep_vkb_keypad_pane_g4_ParamLimits

0x347f,	// (0x000288d4) fep_vkb_keypad_pane_g4

0x34ee,	// (0x00028943) fep_vkb_bottom_pane_g2_ParamLimits

0x34ee,	// (0x00028943) fep_vkb_bottom_pane_g2

0x0001,

0xf902,	// (0x00034d57) fep_vkb_bottom_pane_g_ParamLimits

0xf902,	// (0x00034d57) fep_vkb_bottom_pane_g

0x2f3e,	// (0x00028393) cell_vkb_side_pane_g2

0x0001,

0xf90c,	// (0x00034d61) cell_vkb_side_pane_g

0x3579,	// (0x000289ce) cell_vkb_side_pane_t1

0x3587,	// (0x000289dc) cell_vkb_side_pane_t1_copy1

0x2f3e,	// (0x00028393) bg_fep_vkb_candidate_pane_g2

0x36b9,	// (0x00028b0e) cell_vkb_candidate_pane_ParamLimits

0x320b,	// (0x00028660) aid_size_cell_vkb_ParamLimits

0x320b,	// (0x00028660) aid_size_cell_vkb

0x36b9,	// (0x00028b0e) cell_vkb_candidate_pane

0x36ef,	// (0x00028b44) bg_popup_fep_shadow_pane_g1

0x3299,	// (0x000286ee) fep_vkb_bottom_pane_ParamLimits

0x3299,	// (0x000286ee) fep_vkb_bottom_pane

0x32d6,	// (0x0002872b) fep_vkb_candidate_pane_ParamLimits

0x32d6,	// (0x0002872b) fep_vkb_candidate_pane

0x32f2,	// (0x00028747) fep_vkb_keypad_pane_ParamLimits

0x32f2,	// (0x00028747) fep_vkb_keypad_pane

0x3338,	// (0x0002878d) fep_vkb_side_pane_ParamLimits

0x3338,	// (0x0002878d) fep_vkb_side_pane

0x3374,	// (0x000287c9) fep_vkb_top_pane_ParamLimits

0x3374,	// (0x000287c9) fep_vkb_top_pane

0x33b0,	// (0x00028805) fep_vkb_top_pane_g1_ParamLimits

0x33b0,	// (0x00028805) fep_vkb_top_pane_g1

0x33bf,	// (0x00028814) fep_vkb_top_pane_g2_ParamLimits

0x33bf,	// (0x00028814) fep_vkb_top_pane_g2

0x33ce,	// (0x00028823) fep_vkb_top_pane_g3_ParamLimits

0x33ce,	// (0x00028823) fep_vkb_top_pane_g3

0x0003,

0xf8f2,	// (0x00034d47) fep_vkb_top_pane_g_ParamLimits

0xf8f2,	// (0x00034d47) fep_vkb_top_pane_g

0x33ec,	// (0x00028841) fep_vkb_top_text_pane_ParamLimits

0x33ec,	// (0x00028841) fep_vkb_top_text_pane

0xafe5,	// (0x0003043a) fep_vkb_side_pane_g1_ParamLimits

0xafe5,	// (0x0003043a) fep_vkb_side_pane_g1

0x3446,	// (0x0002889b) grid_vkb_side_pane_ParamLimits

0x3446,	// (0x0002889b) grid_vkb_side_pane

0x36f7,	// (0x00028b4c) bg_popup_fep_shadow_pane_g2

0x3700,	// (0x00028b55) bg_popup_fep_shadow_pane_g3

0x3708,	// (0x00028b5d) bg_popup_fep_shadow_pane_g4

0x3711,	// (0x00028b66) bg_popup_fep_shadow_pane_g5

0x371b,	// (0x00028b70) bg_popup_fep_shadow_pane_g6

0x3723,	// (0x00028b78) bg_popup_fep_shadow_pane_g7

0xca17,	// (0x00031e6c) bg_popup_fep_shadow_pane_g8

0x349d,	// (0x000288f2) grid_vkb_keypad_number_pane_ParamLimits

0x349d,	// (0x000288f2) grid_vkb_keypad_number_pane

0x34ad,	// (0x00028902) grid_vkb_keypad_pane_ParamLimits

0x34ad,	// (0x00028902) grid_vkb_keypad_pane

0x34d3,	// (0x00028928) fep_vkb_bottom_pane_g1_ParamLimits

0x34d3,	// (0x00028928) fep_vkb_bottom_pane_g1

0x34fc,	// (0x00028951) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x34fc,	// (0x00028951) grid_vkb_keypad_bottom_left_pane

0x3511,	// (0x00028966) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x3511,	// (0x00028966) grid_vkb_keypad_bottom_right_pane

0x3526,	// (0x0002897b) fep_vkb_top_text_pane_g1

0xb02c,	// (0x00030481) fep_vkb_top_text_pane_t1

0xb03e,	// (0x00030493) cell_vkb_side_pane_ParamLimits

0xb03e,	// (0x00030493) cell_vkb_side_pane

0x2f3e,	// (0x00028393) cell_vkb_side_pane_g1

0x3595,	// (0x000289ea) cell_vkb_keypad_pane_ParamLimits

0x3595,	// (0x000289ea) cell_vkb_keypad_pane

0x3610,	// (0x00028a65) cell_vkb_keypad_pane_g1

0x0008,

0xf91f,	// (0x00034d74) bg_popup_fep_shadow_pane_g

0x3735,	// (0x00028b8a) cell_hwr_side_pane_g1

0x3735,	// (0x00028b8a) cell_hwr_side_pane_g2

0x361a,	// (0x00028a6f) cell_vkb_keypad_pane_t1

0xb054,	// (0x000304a9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb054,	// (0x000304a9) cell_vkb_keypad_bottom_left_pane

0xb069,	// (0x000304be) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb069,	// (0x000304be) cell_vkb_keypad_bottom_right_pane

0x2f3e,	// (0x00028393) cell_vkb_keypad_bottom_left_pane_g1

0x2f3e,	// (0x00028393) cell_vkb_keypad_bottom_right_pane_g1

0x367e,	// (0x00028ad3) cell_vkb_keypad_number_pane_ParamLimits

0x367e,	// (0x00028ad3) cell_vkb_keypad_number_pane

0x369d,	// (0x00028af2) cell_vkb_keypad_number_pane_g1

0x36a7,	// (0x00028afc) cell_vkb_keypad_number_pane_g2

0x36b0,	// (0x00028b05) cell_vkb_keypad_number_pane_g3

0x0002,

0xf911,	// (0x00034d66) cell_vkb_keypad_number_pane_g

0x361a,	// (0x00028a6f) cell_vkb_keypad_number_pane_t1

0x36d6,	// (0x00028b2b) fep_vkb_candidate_pane_g1

0x0001,

0xf932,	// (0x00034d87) cell_hwr_side_pane_g

0x373f,	// (0x00028b94) cell_hwr_side_pane_t1

0x374d,	// (0x00028ba2) cell_hwr_side_pane_t1_copy1

0x375b,	// (0x00028bb0) cell_hwr_candidate_pane_g1

0x378a,	// (0x00028bdf) cell_hwr_candidate_pane_t1

0x2f3e,	// (0x00028393) cell_vkb_candidate_pane_g2

0x37de,	// (0x00028c33) cell_vkb_candidate_pane_t1

0x2fae,	// (0x00028403) bg_popup_fep_shadow_pane_ParamLimits

0x2fae,	// (0x00028403) bg_popup_fep_shadow_pane

0x3063,	// (0x000284b8) bg_fep_hwr_top_pane_g4

0x30d1,	// (0x00028526) bg_hwr_side_pane_g1_ParamLimits

0x30d1,	// (0x00028526) bg_hwr_side_pane_g1

0x8c86,	// (0x0002e0db) cell_hwr_side_pane_ParamLimits

0x8c86,	// (0x0002e0db) cell_hwr_side_pane

0x313f,	// (0x00028594) fep_hwr_write_pane_g1_ParamLimits

0x313f,	// (0x00028594) fep_hwr_write_pane_g1

0x314c,	// (0x000285a1) fep_hwr_write_pane_g2_ParamLimits

0x314c,	// (0x000285a1) fep_hwr_write_pane_g2

0x3159,	// (0x000285ae) fep_hwr_write_pane_g3_ParamLimits

0x3159,	// (0x000285ae) fep_hwr_write_pane_g3

0x8ca6,	// (0x0002e0fb) fep_hwr_write_pane_g4_ParamLimits

0x8ca6,	// (0x0002e0fb) fep_hwr_write_pane_g4

0x0005,

0xf8de,	// (0x00034d33) fep_hwr_write_pane_g_ParamLimits

0xf8de,	// (0x00034d33) fep_hwr_write_pane_g

0x3063,	// (0x000284b8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x3063,	// (0x000284b8) bg_fep_hwr_candidate_pane_g2

0x31a2,	// (0x000285f7) cell_hwr_candidate_pane_ParamLimits

0x31a2,	// (0x000285f7) cell_hwr_candidate_pane

0x31e4,	// (0x00028639) fep_hwr_candidate_pane_g1_ParamLimits

0x3239,	// (0x0002868e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3239,	// (0x0002868e) bg_popup_fep_shadow_pane_cp2

0x33de,	// (0x00028833) fep_vkb_top_pane_g4_ParamLimits

0x33de,	// (0x00028833) fep_vkb_top_pane_g4

0x3424,	// (0x00028879) fep_vkb_side_pane_g2_ParamLimits

0x3424,	// (0x00028879) fep_vkb_side_pane_g2

0x94fa,	// (0x0002e94f) list_setting_pane_t4_ParamLimits

0x94fa,	// (0x0002e94f) list_setting_pane_t4

0x9594,	// (0x0002e9e9) list_setting_number_pane_t5_ParamLimits

0x9594,	// (0x0002e9e9) list_setting_number_pane_t5

0x9c26,	// (0x0002f07b) list_double_heading_pane_cp2_ParamLimits

0x9c26,	// (0x0002f07b) list_double_heading_pane_cp2

0xc9b2,	// (0x00031e07) list_double_heading_pane_g1_cp2_ParamLimits

0xc9b2,	// (0x00031e07) list_double_heading_pane_g1_cp2

0xc9be,	// (0x00031e13) list_double_heading_pane_g2_cp2_ParamLimits

0xc9be,	// (0x00031e13) list_double_heading_pane_g2_cp2

0x37ec,	// (0x00028c41) list_double_heading_pane_t1_cp2_ParamLimits

0x37ec,	// (0x00028c41) list_double_heading_pane_t1_cp2

0x3802,	// (0x00028c57) list_double_heading_pane_t2_cp2_ParamLimits

0x3802,	// (0x00028c57) list_double_heading_pane_t2_cp2

0xc2d9,	// (0x0003172e) aid_value_unit2

0x0c6d,	// (0x000260c2) popup_preview_fixed_window

0xc484,	// (0x000318d9) bg_popup_preview_window_pane_cp02

0x3814,	// (0x00028c69) list_preview_fixed_pane

0x385a,	// (0x00028caf) list_empty_pane_fp_ParamLimits

0x385a,	// (0x00028caf) list_empty_pane_fp

0x385a,	// (0x00028caf) list_single_cale_day_pane_fp_ParamLimits

0x385a,	// (0x00028caf) list_single_cale_day_pane_fp

0x385a,	// (0x00028caf) list_single_graphic_heading_pane_fp_ParamLimits

0x385a,	// (0x00028caf) list_single_graphic_heading_pane_fp

0x385a,	// (0x00028caf) list_single_graphic_pane_fp_ParamLimits

0x385a,	// (0x00028caf) list_single_graphic_pane_fp

0x385a,	// (0x00028caf) list_single_heading_pane_fp_ParamLimits

0x385a,	// (0x00028caf) list_single_heading_pane_fp

0x385a,	// (0x00028caf) list_single_pane_fp_ParamLimits

0x385a,	// (0x00028caf) list_single_pane_fp

0x3871,	// (0x00028cc6) list_single_pane_fp_g1_ParamLimits

0x3871,	// (0x00028cc6) list_single_pane_fp_g1

0x695b,	// (0x0002bdb0) list_single_pane_fp_g2_ParamLimits

0x695b,	// (0x0002bdb0) list_single_pane_fp_g2

0x72e7,	// (0x0002c73c) list_single_pane_fp_g3_ParamLimits

0x72e7,	// (0x0002c73c) list_single_pane_fp_g3

0x387d,	// (0x00028cd2) list_single_pane_fp_g4_ParamLimits

0x387d,	// (0x00028cd2) list_single_pane_fp_g4

0x0003,

0xf945,	// (0x00034d9a) list_single_pane_fp_g_ParamLimits

0xf945,	// (0x00034d9a) list_single_pane_fp_g

0x72fb,	// (0x0002c750) list_single_pane_fp_t1_ParamLimits

0x72fb,	// (0x0002c750) list_single_pane_fp_t1

0x7312,	// (0x0002c767) list_single_graphic_pane_fp_g1_ParamLimits

0x7312,	// (0x0002c767) list_single_graphic_pane_fp_g1

0x3871,	// (0x00028cc6) list_single_graphic_pane_fp_g2_ParamLimits

0x3871,	// (0x00028cc6) list_single_graphic_pane_fp_g2

0x695b,	// (0x0002bdb0) list_single_graphic_pane_fp_g3_ParamLimits

0x695b,	// (0x0002bdb0) list_single_graphic_pane_fp_g3

0x72e7,	// (0x0002c73c) list_single_graphic_pane_fp_g4_ParamLimits

0x72e7,	// (0x0002c73c) list_single_graphic_pane_fp_g4

0x387d,	// (0x00028cd2) list_single_graphic_pane_fp_g5_ParamLimits

0x387d,	// (0x00028cd2) list_single_graphic_pane_fp_g5

0x0004,

0xf94e,	// (0x00034da3) list_single_graphic_pane_fp_g_ParamLimits

0xf94e,	// (0x00034da3) list_single_graphic_pane_fp_g

0x731e,	// (0x0002c773) list_single_graphic_pane_fp_t1_ParamLimits

0x731e,	// (0x0002c773) list_single_graphic_pane_fp_t1

0x7312,	// (0x0002c767) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7312,	// (0x0002c767) list_single_graphic_heading_pane_fp_g1

0x3871,	// (0x00028cc6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x3871,	// (0x00028cc6) list_single_graphic_heading_pane_fp_g2

0x695b,	// (0x0002bdb0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x695b,	// (0x0002bdb0) list_single_graphic_heading_pane_fp_g3

0x72e7,	// (0x0002c73c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x72e7,	// (0x0002c73c) list_single_graphic_heading_pane_fp_g4

0x387d,	// (0x00028cd2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x387d,	// (0x00028cd2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xf94e,	// (0x00034da3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xf94e,	// (0x00034da3) list_single_graphic_heading_pane_fp_g

0x7334,	// (0x0002c789) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7334,	// (0x0002c789) list_single_graphic_heading_pane_fp_t1

0x734a,	// (0x0002c79f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x734a,	// (0x0002c79f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xf959,	// (0x00034dae) list_single_graphic_heading_pane_fp_t_ParamLimits

0xf959,	// (0x00034dae) list_single_graphic_heading_pane_fp_t

0x735c,	// (0x0002c7b1) list_single_cale_day_pane_fp_g1_ParamLimits

0x735c,	// (0x0002c7b1) list_single_cale_day_pane_fp_g1

0x3889,	// (0x00028cde) list_single_cale_day_pane_fp_g2_ParamLimits

0x3889,	// (0x00028cde) list_single_cale_day_pane_fp_g2

0x7394,	// (0x0002c7e9) list_single_cale_day_pane_fp_g3_ParamLimits

0x7394,	// (0x0002c7e9) list_single_cale_day_pane_fp_g3

0x73bc,	// (0x0002c811) list_single_cale_day_pane_fp_g4_ParamLimits

0x73bc,	// (0x0002c811) list_single_cale_day_pane_fp_g4

0x73e0,	// (0x0002c835) list_single_cale_day_pane_fp_g5_ParamLimits

0x73e0,	// (0x0002c835) list_single_cale_day_pane_fp_g5

0x0004,

0xf95e,	// (0x00034db3) list_single_cale_day_pane_fp_g_ParamLimits

0xf95e,	// (0x00034db3) list_single_cale_day_pane_fp_g

0x7404,	// (0x0002c859) list_single_cale_day_pane_fp_t1_ParamLimits

0x7404,	// (0x0002c859) list_single_cale_day_pane_fp_t1

0x742a,	// (0x0002c87f) list_single_cale_day_pane_fp_t2_ParamLimits

0x742a,	// (0x0002c87f) list_single_cale_day_pane_fp_t2

0x7443,	// (0x0002c898) list_single_cale_day_pane_fp_t3_ParamLimits

0x7443,	// (0x0002c898) list_single_cale_day_pane_fp_t3

0x0002,

0xf969,	// (0x00034dbe) list_single_cale_day_pane_fp_t_ParamLimits

0xf969,	// (0x00034dbe) list_single_cale_day_pane_fp_t

0x3871,	// (0x00028cc6) list_empty_pane_fp_g1_ParamLimits

0x3871,	// (0x00028cc6) list_empty_pane_fp_g1

0x745c,	// (0x0002c8b1) list_empty_pane_fp_t1

0x746a,	// (0x0002c8bf) list_empty_pane_fp_t2

0x0001,

0xf970,	// (0x00034dc5) list_empty_pane_fp_t

0x3871,	// (0x00028cc6) list_single_heading_pane_fp_g1_ParamLimits

0x3871,	// (0x00028cc6) list_single_heading_pane_fp_g1

0x695b,	// (0x0002bdb0) list_single_heading_pane_fp_g2_ParamLimits

0x695b,	// (0x0002bdb0) list_single_heading_pane_fp_g2

0x72e7,	// (0x0002c73c) list_single_heading_pane_fp_g3_ParamLimits

0x72e7,	// (0x0002c73c) list_single_heading_pane_fp_g3

0x0002,

0xf975,	// (0x00034dca) list_single_heading_pane_fp_g_ParamLimits

0xf975,	// (0x00034dca) list_single_heading_pane_fp_g

0x7478,	// (0x0002c8cd) list_single_heading_pane_fp_t1_ParamLimits

0x7478,	// (0x0002c8cd) list_single_heading_pane_fp_t1

0x748a,	// (0x0002c8df) list_single_heading_pane_fp_t2_ParamLimits

0x748a,	// (0x0002c8df) list_single_heading_pane_fp_t2

0x0001,

0xf97c,	// (0x00034dd1) list_single_heading_pane_fp_t_ParamLimits

0xf97c,	// (0x00034dd1) list_single_heading_pane_fp_t

0xcaef,	// (0x00031f44) aid_size_cell_fast

0xc467,	// (0x000318bc) soft_indicator_pane_cp1_t1

0xcb2c,	// (0x00031f81) cell_app_pane_cp2_ParamLimits

0xcb2c,	// (0x00031f81) cell_app_pane_cp2

0x2fd0,	// (0x00028425) fep_hwr_candidate_drop_down_list_pane

0x31fe,	// (0x00028653) fep_hwr_candidate_pane_g3_ParamLimits

0x31fe,	// (0x00028653) fep_hwr_candidate_pane_g3

0xbceb,	// (0x00031140) fep_hwr_candidate_pane_g4_ParamLimits

0xbceb,	// (0x00031140) fep_hwr_candidate_pane_g4

0x0002,

0xf8eb,	// (0x00034d40) fep_hwr_candidate_pane_g_ParamLimits

0xf8eb,	// (0x00034d40) fep_hwr_candidate_pane_g

0x32c5,	// (0x0002871a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x32c5,	// (0x0002871a) fep_vkb_candidate_drop_down_list_pane

0x36de,	// (0x00028b33) fep_vkb_candidate_pane_g3

0x36e6,	// (0x00028b3b) fep_vkb_candidate_pane_g4

0x0002,

0xf918,	// (0x00034d6d) fep_vkb_candidate_pane_g

0x375b,	// (0x00028bb0) cell_hwr_candidate_pane_g1_ParamLimits

0x3769,	// (0x00028bbe) cell_hwr_candidate_pane_g3_ParamLimits

0x3769,	// (0x00028bbe) cell_hwr_candidate_pane_g3

0x42b0,	// (0x00029705) cell_hwr_candidate_pane_g4_ParamLimits

0x42b0,	// (0x00029705) cell_hwr_candidate_pane_g4

0x0002,

0xf937,	// (0x00034d8c) cell_hwr_candidate_pane_g_ParamLimits

0xf937,	// (0x00034d8c) cell_hwr_candidate_pane_g

0x37a8,	// (0x00028bfd) cell_vkb_candidate_pane_g3_ParamLimits

0x37a8,	// (0x00028bfd) cell_vkb_candidate_pane_g3

0x37c3,	// (0x00028c18) cell_vkb_candidate_pane_g4_ParamLimits

0x37c3,	// (0x00028c18) cell_vkb_candidate_pane_g4

0x42d1,	// (0x00029726) cell_app_pane_cp2_g1_ParamLimits

0x42d1,	// (0x00029726) cell_app_pane_cp2_g1

0x42ef,	// (0x00029744) cell_app_pane_cp2_g2_ParamLimits

0x42ef,	// (0x00029744) cell_app_pane_cp2_g2

0x0001,

0xf981,	// (0x00034dd6) cell_app_pane_cp2_g_ParamLimits

0xf981,	// (0x00034dd6) cell_app_pane_cp2_g

0x42fb,	// (0x00029750) cell_app_pane_cp2_t1_ParamLimits

0x42fb,	// (0x00029750) cell_app_pane_cp2_t1

0xc998,	// (0x00031ded) grid_highlight_pane_cp1_ParamLimits

0xc998,	// (0x00031ded) grid_highlight_pane_cp1

0x3895,	// (0x00028cea) cell_hwr_candidate_pane_cp1_ParamLimits

0x3895,	// (0x00028cea) cell_hwr_candidate_pane_cp1

0x375b,	// (0x00028bb0) fep_hwr_candidate_drop_down_list_pane_g1

0x38b4,	// (0x00028d09) fep_hwr_candidate_drop_down_list_pane_g2

0x38c1,	// (0x00028d16) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xf986,	// (0x00034ddb) fep_hwr_candidate_drop_down_list_pane_g

0x38ce,	// (0x00028d23) fep_hwr_candidate_drop_down_list_scroll_pane

0x38d7,	// (0x00028d2c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x38d7,	// (0x00028d2c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x38e4,	// (0x00028d39) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x38e4,	// (0x00028d39) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x38f1,	// (0x00028d46) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x38f1,	// (0x00028d46) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x38fe,	// (0x00028d53) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x38fe,	// (0x00028d53) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x3919,	// (0x00028d6e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x3919,	// (0x00028d6e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x3934,	// (0x00028d89) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x3934,	// (0x00028d89) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x394f,	// (0x00028da4) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x394f,	// (0x00028da4) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x396a,	// (0x00028dbf) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x396a,	// (0x00028dbf) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xf98d,	// (0x00034de2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xf98d,	// (0x00034de2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x430d,	// (0x00029762) cell_vkb_candidate_pane_cp1_ParamLimits

0x430d,	// (0x00029762) cell_vkb_candidate_pane_cp1

0x33de,	// (0x00028833) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x33de,	// (0x00028833) fep_vkb_candidate_drop_down_list_pane_g1

0x432d,	// (0x00029782) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x432d,	// (0x00029782) fep_vkb_candidate_drop_down_list_pane_g2

0x433a,	// (0x0002978f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x433a,	// (0x0002978f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xf99e,	// (0x00034df3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xf99e,	// (0x00034df3) fep_vkb_candidate_drop_down_list_pane_g

0x4347,	// (0x0002979c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4347,	// (0x0002979c) fep_vkb_candidate_drop_down_list_scroll_pane

0x4354,	// (0x000297a9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4354,	// (0x000297a9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4361,	// (0x000297b6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4361,	// (0x000297b6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x436d,	// (0x000297c2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x436d,	// (0x000297c2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4379,	// (0x000297ce) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4379,	// (0x000297ce) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x439a,	// (0x000297ef) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x439a,	// (0x000297ef) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x43bb,	// (0x00029810) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x43bb,	// (0x00029810) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x43dc,	// (0x00029831) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x43dc,	// (0x00029831) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x43fd,	// (0x00029852) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x43fd,	// (0x00029852) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xf9a5,	// (0x00034dfa) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xf9a5,	// (0x00034dfa) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9127,	// (0x0002e57c) title_pane_g1_ParamLimits

0x9138,	// (0x0002e58d) title_pane_g2_ParamLimits

0xf592,	// (0x000349e7) title_pane_g_ParamLimits

0xceaf,	// (0x00032304) aid_call2_pane

0xceb7,	// (0x0003230c) aid_call_pane

0xcebf,	// (0x00032314) popup_clock_analogue_window_g1

0xcebf,	// (0x00032314) popup_clock_analogue_window_g2

0x1383,	// (0x000267d8) popup_clock_analogue_window_g3

0x138c,	// (0x000267e1) popup_clock_analogue_window_g4

0xc2eb,	// (0x00031740) popup_clock_analogue_window_g5

0x0004,

0xf6d0,	// (0x00034b25) popup_clock_analogue_window_g

0x1394,	// (0x000267e9) popup_clock_analogue_window_t1

0x13cb,	// (0x00026820) clock_digital_number_pane_ParamLimits

0x13cb,	// (0x00026820) clock_digital_number_pane

0x13d7,	// (0x0002682c) clock_digital_number_pane_cp02_ParamLimits

0x13d7,	// (0x0002682c) clock_digital_number_pane_cp02

0x13e3,	// (0x00026838) clock_digital_number_pane_cp03_ParamLimits

0x13e3,	// (0x00026838) clock_digital_number_pane_cp03

0x13ef,	// (0x00026844) clock_digital_number_pane_cp04_ParamLimits

0x13ef,	// (0x00026844) clock_digital_number_pane_cp04

0x13fb,	// (0x00026850) clock_digital_separator_pane_ParamLimits

0x13fb,	// (0x00026850) clock_digital_separator_pane

0x1407,	// (0x0002685c) popup_clock_digital_window_t1_ParamLimits

0x1407,	// (0x0002685c) popup_clock_digital_window_t1

0xc2eb,	// (0x00031740) clock_digital_number_pane_g1

0xc2eb,	// (0x00031740) clock_digital_number_pane_g2

0x0001,

0x015e,	// (0x000255b3) clock_digital_number_pane_g

0xc2eb,	// (0x00031740) clock_digital_separator_pane_g1

0xc2eb,	// (0x00031740) clock_digital_separator_pane_g2

0x0001,

0x015e,	// (0x000255b3) clock_digital_separator_pane_g

0xa46e,	// (0x0002f8c3) aid_fill_nsta_ParamLimits

0xa59d,	// (0x0002f9f2) indicator_nsta_pane_ParamLimits

0xd815,	// (0x00032c6a) popup_clock_analogue_window

0xd815,	// (0x00032c6a) popup_clock_digital_window

0xd656,	// (0x00032aab) grid_indicator_nsta_pane_ParamLimits

0xf341,	// (0x00034796) clock_nsta_pane_t2

0x0001,

0xf892,	// (0x00034ce7) clock_nsta_pane_t

0x1347,	// (0x0002679c) aid_size_max_handle

0x8970,	// (0x0002ddc5) aid_size_min_handle

0xd3ce,	// (0x00032823) editor_scroll_pane

0x4418,	// (0x0002986d) ex_editor_pane

0xcab7,	// (0x00031f0c) scroll_pane_cp13

0xc937,	// (0x00031d8c) scroll_pane_cp14

0xcee9,	// (0x0003233e) scroll_pane_cp36

0x9c37,	// (0x0002f08c) list_single_graphic_hl_pane_cp2_ParamLimits

0x9c37,	// (0x0002f08c) list_single_graphic_hl_pane_cp2

0xaca1,	// (0x000300f6) list_single_graphic_hl_pane_ParamLimits

0xaca1,	// (0x000300f6) list_single_graphic_hl_pane

0x74a0,	// (0x0002c8f5) aid_size_min_hl_cp1

0x4420,	// (0x00029875) list_highlight_pane_cp34_ParamLimits

0x4420,	// (0x00029875) list_highlight_pane_cp34

0x4431,	// (0x00029886) list_single_graphic_hl_pane_g1_ParamLimits

0x4431,	// (0x00029886) list_single_graphic_hl_pane_g1

0x97c7,	// (0x0002ec1c) list_single_graphic_hl_pane_g2_ParamLimits

0x97c7,	// (0x0002ec1c) list_single_graphic_hl_pane_g2

0x97c7,	// (0x0002ec1c) list_single_graphic_hl_pane_g3_ParamLimits

0x97c7,	// (0x0002ec1c) list_single_graphic_hl_pane_g3

0x74b5,	// (0x0002c90a) list_single_graphic_hl_pane_g4_ParamLimits

0x74b5,	// (0x0002c90a) list_single_graphic_hl_pane_g4

0x74c1,	// (0x0002c916) list_single_graphic_hl_pane_g5_ParamLimits

0x74c1,	// (0x0002c916) list_single_graphic_hl_pane_g5

0x0004,

0xf9b6,	// (0x00034e0b) list_single_graphic_hl_pane_g_ParamLimits

0xf9b6,	// (0x00034e0b) list_single_graphic_hl_pane_g

0x74d5,	// (0x0002c92a) list_single_graphic_hl_pane_t1_ParamLimits

0x74d5,	// (0x0002c92a) list_single_graphic_hl_pane_t1

0x443e,	// (0x00029893) aid_size_min_hl_cp2

0x4447,	// (0x0002989c) list_highlight_pane_cp34_cp2_ParamLimits

0x4447,	// (0x0002989c) list_highlight_pane_cp34_cp2

0x4431,	// (0x00029886) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4431,	// (0x00029886) list_single_graphic_hl_pane_g1_cp2

0x4454,	// (0x000298a9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4454,	// (0x000298a9) list_single_graphic_hl_pane_g2_cp2

0x4460,	// (0x000298b5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x4460,	// (0x000298b5) list_single_graphic_hl_pane_g3_cp2

0xd305,	// (0x0003275a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd305,	// (0x0003275a) list_single_graphic_hl_pane_g4_cp2

0x446e,	// (0x000298c3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x446e,	// (0x000298c3) list_single_graphic_hl_pane_g5_cp2

0x89a2,	// (0x0002ddf7) control_pane_g4_ParamLimits

0x89a2,	// (0x0002ddf7) control_pane_g4

0xd608,	// (0x00032a5d) bg_popup_sub_pane_cp10_ParamLimits

0x2f48,	// (0x0002839d) list_choice_list_pane_ParamLimits

0x2f57,	// (0x000283ac) scroll_pane_cp23

0xc484,	// (0x000318d9) bg_popup_preview_window_pane_cp02_ParamLimits

0x3814,	// (0x00028c69) list_preview_fixed_pane_ParamLimits

0x382a,	// (0x00028c7f) list_preview_fixed_pane_cp_ParamLimits

0x382a,	// (0x00028c7f) list_preview_fixed_pane_cp

0x3836,	// (0x00028c8b) popup_preview_fixed_window_g1_ParamLimits

0x3836,	// (0x00028c8b) popup_preview_fixed_window_g1

0x3842,	// (0x00028c97) popup_preview_fixed_window_g2_ParamLimits

0x3842,	// (0x00028c97) popup_preview_fixed_window_g2

0x0002,

0xf93e,	// (0x00034d93) popup_preview_fixed_window_g_ParamLimits

0xf93e,	// (0x00034d93) popup_preview_fixed_window_g

0x1236,	// (0x0002668b) aid_navi_side_left_pane_ParamLimits

0x124b,	// (0x000266a0) aid_navi_side_right_pane_ParamLimits

0x1263,	// (0x000266b8) navi_icon_pane_stacon_ParamLimits

0x1277,	// (0x000266cc) navi_navi_pane_stacon_ParamLimits

0x1263,	// (0x000266b8) navi_text_pane_stacon_ParamLimits

0xc2e1,	// (0x00031736) main_text_info_pane

0x4498,	// (0x000298ed) listscroll_text_info_pane

0x44a0,	// (0x000298f5) list_text_info_pane_ParamLimits

0x44a0,	// (0x000298f5) list_text_info_pane

0x44af,	// (0x00029904) scroll_pane_cp24_ParamLimits

0x44af,	// (0x00029904) scroll_pane_cp24

0xb084,	// (0x000304d9) list_text_info_pane_t1_ParamLimits

0xb084,	// (0x000304d9) list_text_info_pane_t1

0x9dfe,	// (0x0002f253) popup_fast_swap2_window_ParamLimits

0x9dfe,	// (0x0002f253) popup_fast_swap2_window

0x4506,	// (0x0002995b) aid_size_cell_fast2

0xc2e1,	// (0x00031736) bg_popup_window_pane_cp17

0xdcb9,	// (0x0003310e) heading_pane_cp2

0xc66a,	// (0x00031abf) listscroll_fast2_pane

0x4510,	// (0x00029965) grid_fast2_pane

0x451a,	// (0x0002996f) listscroll_fast2_pane_g1

0x4522,	// (0x00029977) listscroll_fast2_pane_g2

0x0001,

0xf9c1,	// (0x00034e16) listscroll_fast2_pane_g

0xcab7,	// (0x00031f0c) scroll_pane_cp26

0x452c,	// (0x00029981) cell_fast2_pane_ParamLimits

0x452c,	// (0x00029981) cell_fast2_pane

0x4541,	// (0x00029996) cell_fast2_pane_g1

0x454a,	// (0x0002999f) cell_fast2_pane_g2

0x4553,	// (0x000299a8) cell_fast2_pane_g3

0x0002,

0xf9c6,	// (0x00034e1b) cell_fast2_pane_g

0xc6fe,	// (0x00031b53) grid_highlight_pane_cp9

0xc713,	// (0x00031b68) main_eswt_pane_ParamLimits

0xc713,	// (0x00031b68) main_eswt_pane

0x44c4,	// (0x00029919) list_single_text_info_pane

0x455b,	// (0x000299b0) eswt_ctrl_button_pane

0x455b,	// (0x000299b0) eswt_ctrl_canvas_pane

0x4563,	// (0x000299b8) eswt_ctrl_combo_pane

0x455b,	// (0x000299b0) eswt_ctrl_default_pane

0x455b,	// (0x000299b0) eswt_ctrl_label_pane

0x456b,	// (0x000299c0) eswt_ctrl_wait_pane

0x4573,	// (0x000299c8) eswt_shell_pane

0xc2e1,	// (0x00031736) listscroll_eswt_app_pane

0x4593,	// (0x000299e8) popup_eswt_tasktip_window_ParamLimits

0x4593,	// (0x000299e8) popup_eswt_tasktip_window

0xda12,	// (0x00032e67) bg_popup_window_pane_cp18

0x45a4,	// (0x000299f9) eswt_control_pane_g1_ParamLimits

0x45a4,	// (0x000299f9) eswt_control_pane_g1

0x45b1,	// (0x00029a06) eswt_control_pane_g2_ParamLimits

0x45b1,	// (0x00029a06) eswt_control_pane_g2

0x45be,	// (0x00029a13) eswt_control_pane_g3_ParamLimits

0x45be,	// (0x00029a13) eswt_control_pane_g3

0x45cb,	// (0x00029a20) eswt_control_pane_g4_ParamLimits

0x45cb,	// (0x00029a20) eswt_control_pane_g4

0x0003,

0xf9cd,	// (0x00034e22) eswt_control_pane_g_ParamLimits

0xf9cd,	// (0x00034e22) eswt_control_pane_g

0xc998,	// (0x00031ded) bg_button_pane_ParamLimits

0xc998,	// (0x00031ded) bg_button_pane

0xc713,	// (0x00031b68) common_borders_pane_copy2_ParamLimits

0xc713,	// (0x00031b68) common_borders_pane_copy2

0x45d8,	// (0x00029a2d) control_button_pane_g1_ParamLimits

0x45d8,	// (0x00029a2d) control_button_pane_g1

0x45e4,	// (0x00029a39) control_button_pane_g2_ParamLimits

0x45e4,	// (0x00029a39) control_button_pane_g2

0x45f0,	// (0x00029a45) control_button_pane_g3_ParamLimits

0x45f0,	// (0x00029a45) control_button_pane_g3

0x0002,

0xf9d6,	// (0x00034e2b) control_button_pane_g_ParamLimits

0xf9d6,	// (0x00034e2b) control_button_pane_g

0x4604,	// (0x00029a59) control_button_pane_t1

0x4612,	// (0x00029a67) control_button_pane_t2

0x0001,

0xf9dd,	// (0x00034e32) control_button_pane_t

0xd922,	// (0x00032d77) bg_button_pane_g1

0xd932,	// (0x00032d87) bg_button_pane_g2

0xd92a,	// (0x00032d7f) bg_button_pane_g3

0xd942,	// (0x00032d97) bg_button_pane_g4

0xd93a,	// (0x00032d8f) bg_button_pane_g5

0xd94a,	// (0x00032d9f) bg_button_pane_g6

0xd952,	// (0x00032da7) bg_button_pane_g7

0xd962,	// (0x00032db7) bg_button_pane_g8

0xd95a,	// (0x00032daf) bg_button_pane_g9

0x0008,

0xf78c,	// (0x00034be1) bg_button_pane_g

0x2f03,	// (0x00028358) common_borders_pane_ParamLimits

0x2f03,	// (0x00028358) common_borders_pane

0x45a4,	// (0x000299f9) eswt_control_pane_g1_copy1_ParamLimits

0x45a4,	// (0x000299f9) eswt_control_pane_g1_copy1

0x45b1,	// (0x00029a06) eswt_control_pane_g2_copy1_ParamLimits

0x45b1,	// (0x00029a06) eswt_control_pane_g2_copy1

0x45be,	// (0x00029a13) eswt_control_pane_g3_copy1_ParamLimits

0x45be,	// (0x00029a13) eswt_control_pane_g3_copy1

0x45cb,	// (0x00029a20) eswt_control_pane_g4_copy1_ParamLimits

0x45cb,	// (0x00029a20) eswt_control_pane_g4_copy1

0x2f3e,	// (0x00028393) bg_eswt_ctrl_canvas_pane_g1

0x2f03,	// (0x00028358) common_borders_pane_cp2_ParamLimits

0x2f03,	// (0x00028358) common_borders_pane_cp2

0x2f03,	// (0x00028358) common_borders_pane_cp3_ParamLimits

0x2f03,	// (0x00028358) common_borders_pane_cp3

0x4620,	// (0x00029a75) separator_horizontal_pane

0x4628,	// (0x00029a7d) separator_vertical_pane

0x45a4,	// (0x000299f9) eswt_control_pane_g1_copy2_ParamLimits

0x45a4,	// (0x000299f9) eswt_control_pane_g1_copy2

0x45b1,	// (0x00029a06) eswt_control_pane_g2_copy2_ParamLimits

0x45b1,	// (0x00029a06) eswt_control_pane_g2_copy2

0x45be,	// (0x00029a13) eswt_control_pane_g3_copy2_ParamLimits

0x45be,	// (0x00029a13) eswt_control_pane_g3_copy2

0x45cb,	// (0x00029a20) eswt_control_pane_g4_copy2_ParamLimits

0x45cb,	// (0x00029a20) eswt_control_pane_g4_copy2

0xc2e1,	// (0x00031736) common_borders_pane_cp4

0x4631,	// (0x00029a86) separator_horizontal_pane_g1

0x463a,	// (0x00029a8f) separator_horizontal_pane_g2

0x4643,	// (0x00029a98) separator_horizontal_pane_g3

0x0002,

0xf9e2,	// (0x00034e37) separator_horizontal_pane_g

0x45a4,	// (0x000299f9) eswt_control_pane_g1_copy3_ParamLimits

0x45a4,	// (0x000299f9) eswt_control_pane_g1_copy3

0x45b1,	// (0x00029a06) eswt_control_pane_g2_copy3_ParamLimits

0x45b1,	// (0x00029a06) eswt_control_pane_g2_copy3

0x45be,	// (0x00029a13) eswt_control_pane_g3_copy3_ParamLimits

0x45be,	// (0x00029a13) eswt_control_pane_g3_copy3

0x45cb,	// (0x00029a20) eswt_control_pane_g4_copy3_ParamLimits

0x45cb,	// (0x00029a20) eswt_control_pane_g4_copy3

0xc2e1,	// (0x00031736) common_borders_pane_cp5

0x464c,	// (0x00029aa1) separator_vertical_pane_g1

0x4655,	// (0x00029aaa) separator_vertical_pane_g2

0x465e,	// (0x00029ab3) separator_vertical_pane_g3

0x0002,

0xf9e9,	// (0x00034e3e) separator_vertical_pane_g

0x45a4,	// (0x000299f9) eswt_control_pane_g1_copy4_ParamLimits

0x45a4,	// (0x000299f9) eswt_control_pane_g1_copy4

0x45b1,	// (0x00029a06) eswt_control_pane_g2_copy4_ParamLimits

0x45b1,	// (0x00029a06) eswt_control_pane_g2_copy4

0x45be,	// (0x00029a13) eswt_control_pane_g3_copy4_ParamLimits

0x45be,	// (0x00029a13) eswt_control_pane_g3_copy4

0x45cb,	// (0x00029a20) eswt_control_pane_g4_copy4_ParamLimits

0x45cb,	// (0x00029a20) eswt_control_pane_g4_copy4

0xb0a2,	// (0x000304f7) eswt_ctrl_combo_button_pane

0xb0aa,	// (0x000304ff) eswt_ctrl_input_pane

0xb0b2,	// (0x00030507) popup_choice_list_window_cp70

0xb0ba,	// (0x0003050f) eswt_ctrl_input_pane_t1

0xc2e1,	// (0x00031736) input_focus_pane_cp70

0x2f03,	// (0x00028358) bg_button_pane_cp70_ParamLimits

0x2f03,	// (0x00028358) bg_button_pane_cp70

0xb0c8,	// (0x0003051d) eswt_ctrl_combo_button_pane_g1

0x4695,	// (0x00029aea) wait_bar_pane_cp70

0xda12,	// (0x00032e67) bg_popup_window_pane_cp70_ParamLimits

0xda12,	// (0x00032e67) bg_popup_window_pane_cp70

0x469d,	// (0x00029af2) popup_eswt_tasktip_window_t1

0x46b3,	// (0x00029b08) wait_bar_pane_cp71_ParamLimits

0x46b3,	// (0x00029b08) wait_bar_pane_cp71

0x46bf,	// (0x00029b14) grid_eswt_app_pane

0xccf5,	// (0x0003214a) scroll_pane_cp70

0xb0d0,	// (0x00030525) cell_eswt_app_pane_ParamLimits

0xb0d0,	// (0x00030525) cell_eswt_app_pane

0xb0fa,	// (0x0003054f) cell_eswt_app_pane_g1_ParamLimits

0xb0fa,	// (0x0003054f) cell_eswt_app_pane_g1

0xb129,	// (0x0003057e) cell_eswt_app_pane_g2_ParamLimits

0xb129,	// (0x0003057e) cell_eswt_app_pane_g2

0x0001,

0xf9f0,	// (0x00034e45) cell_eswt_app_pane_g_ParamLimits

0xf9f0,	// (0x00034e45) cell_eswt_app_pane_g

0xb152,	// (0x000305a7) cell_eswt_app_pane_t1_ParamLimits

0xb152,	// (0x000305a7) cell_eswt_app_pane_t1

0x4786,	// (0x00029bdb) grid_highlight_pane_cp70_ParamLimits

0x4786,	// (0x00029bdb) grid_highlight_pane_cp70

0xd2a1,	// (0x000326f6) set_content_pane_g1

0xd5a5,	// (0x000329fa) status_small_volume_pane

0x3985,	// (0x00028dda) status_small_volume_pane_g1

0x398d,	// (0x00028de2) volume_small2_pane

0x3996,	// (0x00028deb) volume_small2_pane_g1

0x399f,	// (0x00028df4) volume_small2_pane_g2

0x39a8,	// (0x00028dfd) volume_small2_pane_g3

0x39b1,	// (0x00028e06) volume_small2_pane_g4

0x39ba,	// (0x00028e0f) volume_small2_pane_g5

0x39c3,	// (0x00028e18) volume_small2_pane_g6

0x39cc,	// (0x00028e21) volume_small2_pane_g7

0x39d5,	// (0x00028e2a) volume_small2_pane_g8

0x39de,	// (0x00028e33) volume_small2_pane_g9

0x39e7,	// (0x00028e3c) volume_small2_pane_g10

0x0009,

0xf9f5,	// (0x00034e4a) volume_small2_pane_g

0x3526,	// (0x0002897b) fep_vkb_top_text_pane_g1_ParamLimits

0xb02c,	// (0x00030481) fep_vkb_top_text_pane_t1_ParamLimits

0x384e,	// (0x00028ca3) popup_preview_fixed_window_g3_ParamLimits

0x384e,	// (0x00028ca3) popup_preview_fixed_window_g3

0xa401,	// (0x0002f856) popup_toolbar_trans_pane

0xab19,	// (0x0002ff6e) aid_height_set_list_ParamLimits

0xe844,	// (0x00033c99) aid_size_parent_ParamLimits

0xd608,	// (0x00032a5d) list_highlight_pane_cp2_ParamLimits

0xd2a1,	// (0x000326f6) set_content_pane_g1_ParamLimits

0xacb4,	// (0x00030109) list_single_image_pane_ParamLimits

0xacb4,	// (0x00030109) list_single_image_pane

0xb184,	// (0x000305d9) aid_size_cell_image_ParamLimits

0xb184,	// (0x000305d9) aid_size_cell_image

0xb191,	// (0x000305e6) grid_single_image_pane_ParamLimits

0xb191,	// (0x000305e6) grid_single_image_pane

0xc9b2,	// (0x00031e07) list_single_image_pane_g1_ParamLimits

0xc9b2,	// (0x00031e07) list_single_image_pane_g1

0xc9be,	// (0x00031e13) list_single_image_pane_g2_ParamLimits

0xc9be,	// (0x00031e13) list_single_image_pane_g2

0x0001,

0x0664,	// (0x00025ab9) list_single_image_pane_g_ParamLimits

0x0664,	// (0x00025ab9) list_single_image_pane_g

0x47ab,	// (0x00029c00) list_single_image_pane_t1_ParamLimits

0x47ab,	// (0x00029c00) list_single_image_pane_t1

0xb19d,	// (0x000305f2) cell_image_list_pane_ParamLimits

0xb19d,	// (0x000305f2) cell_image_list_pane

0xb1b1,	// (0x00030606) cell_image_list_pane_g1

0xb1ba,	// (0x0003060f) cell_image_list_pane_g2

0x0001,

0xfa0a,	// (0x00034e5f) cell_image_list_pane_g

0x47e7,	// (0x00029c3c) aid_size_cell_tb_trans_pane

0xc998,	// (0x00031ded) bg_tb_trans_pane

0x47f9,	// (0x00029c4e) grid_tb_trans_pane

0xd922,	// (0x00032d77) bg_tb_trans_pane_g1

0xd932,	// (0x00032d87) bg_tb_trans_pane_g2

0xd92a,	// (0x00032d7f) bg_tb_trans_pane_g3

0xd942,	// (0x00032d97) bg_tb_trans_pane_g4

0xd93a,	// (0x00032d8f) bg_tb_trans_pane_g5

0xd962,	// (0x00032db7) bg_tb_trans_pane_g6

0xd95a,	// (0x00032daf) bg_tb_trans_pane_g7

0xd94a,	// (0x00032d9f) bg_tb_trans_pane_g8

0xd952,	// (0x00032da7) bg_tb_trans_pane_g9

0x0008,

0xfa0f,	// (0x00034e64) bg_tb_trans_pane_g

0x480d,	// (0x00029c62) cell_toolbar_trans_pane_ParamLimits

0x480d,	// (0x00029c62) cell_toolbar_trans_pane

0x2f3e,	// (0x00028393) cell_toolbar_trans_pane_g1

0xaed5,	// (0x0003032a) list_form2_midp_pane_t1

0xaee3,	// (0x00030338) list_form2_midp_pane_t2

0x0001,

0xf8c1,	// (0x00034d16) list_form2_midp_pane_t

0xf3c6,	// (0x0003481b) scroll_pane_cp51_ParamLimits

0xf53c,	// (0x00034991) form2_midp_wait_pane_g1

0xf545,	// (0x0003499a) form2_midp_wait_pane_g2

0xf54e,	// (0x000349a3) form2_midp_wait_pane_g3

0x0002,

0x052c,	// (0x00025981) form2_midp_wait_pane_g

0xc351,	// (0x000317a6) list_highlight_pane_cp21_ParamLimits

0xf56e,	// (0x000349c3) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xf57d,	// (0x000349d2) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6fc7,	// (0x0002c41c) list_single_2graphic_im_pane_ParamLimits

0x6fc7,	// (0x0002c41c) list_single_2graphic_im_pane

0xb1c3,	// (0x00030618) list_single_2graphic_im_pane_g1_ParamLimits

0xb1c3,	// (0x00030618) list_single_2graphic_im_pane_g1

0xb1d4,	// (0x00030629) list_single_2graphic_im_pane_g2_ParamLimits

0xb1d4,	// (0x00030629) list_single_2graphic_im_pane_g2

0xb1e0,	// (0x00030635) list_single_2graphic_im_pane_g3_ParamLimits

0xb1e0,	// (0x00030635) list_single_2graphic_im_pane_g3

0x0003,

0xfa22,	// (0x00034e77) list_single_2graphic_im_pane_g_ParamLimits

0xfa22,	// (0x00034e77) list_single_2graphic_im_pane_g

0xb1f4,	// (0x00030649) list_single_2graphic_im_pane_t1_ParamLimits

0xb1f4,	// (0x00030649) list_single_2graphic_im_pane_t1

0x385a,	// (0x00028caf) list_single_graphic_2heading_pane_fp_ParamLimits

0x385a,	// (0x00028caf) list_single_graphic_2heading_pane_fp

0x7312,	// (0x0002c767) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7312,	// (0x0002c767) list_single_graphic_2heading_pane_fp_g1

0x3871,	// (0x00028cc6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x3871,	// (0x00028cc6) list_single_graphic_2heading_pane_fp_g2

0x695b,	// (0x0002bdb0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x695b,	// (0x0002bdb0) list_single_graphic_2heading_pane_fp_g3

0x72e7,	// (0x0002c73c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x72e7,	// (0x0002c73c) list_single_graphic_2heading_pane_fp_g4

0x387d,	// (0x00028cd2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x387d,	// (0x00028cd2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xf94e,	// (0x00034da3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xf94e,	// (0x00034da3) list_single_graphic_2heading_pane_fp_g

0x74eb,	// (0x0002c940) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x74eb,	// (0x0002c940) list_single_graphic_2heading_pane_fp_t1

0x734a,	// (0x0002c79f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x734a,	// (0x0002c79f) list_single_graphic_2heading_pane_fp_t2

0x7501,	// (0x0002c956) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7501,	// (0x0002c956) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfa2b,	// (0x00034e80) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfa2b,	// (0x00034e80) list_single_graphic_2heading_pane_fp_t

0x317c,	// (0x000285d1) fep_hwr_write_pane_g5_ParamLimits

0x317c,	// (0x000285d1) fep_hwr_write_pane_g5

0x3188,	// (0x000285dd) fep_hwr_write_pane_g6_ParamLimits

0x3188,	// (0x000285dd) fep_hwr_write_pane_g6

0x4573,	// (0x000299c8) eswt_shell_pane_ParamLimits

0xda12,	// (0x00032e67) bg_popup_window_pane_cp18_ParamLimits

0xe9d9,	// (0x00033e2e) heading_pane_cp70

0x469d,	// (0x00029af2) popup_eswt_tasktip_window_t1_ParamLimits

0xa4c2,	// (0x0002f917) aid_touch_tab_arrow_left

0xa4d8,	// (0x0002f92d) aid_touch_tab_arrow_right

0x9150,	// (0x0002e5a5) title_pane_g3_ParamLimits

0x9150,	// (0x0002e5a5) title_pane_g3

0xc957,	// (0x00031dac) set_value_pane_g1

0xa401,	// (0x0002f856) popup_toolbar_trans_pane_ParamLimits

0x47e7,	// (0x00029c3c) aid_size_cell_tb_trans_pane_ParamLimits

0xc998,	// (0x00031ded) bg_tb_trans_pane_ParamLimits

0x47f9,	// (0x00029c4e) grid_tb_trans_pane_ParamLimits

0xc484,	// (0x000318d9) cont_note_pane_ParamLimits

0xc484,	// (0x000318d9) cont_note_pane

0xc713,	// (0x00031b68) cont_snote2_single_text_pane_ParamLimits

0xc713,	// (0x00031b68) cont_snote2_single_text_pane

0xc713,	// (0x00031b68) cont_snote2_single_graphic_pane_ParamLimits

0xc713,	// (0x00031b68) cont_snote2_single_graphic_pane

0xde9e,	// (0x000332f3) cont_note_wait_pane_ParamLimits

0xde9e,	// (0x000332f3) cont_note_wait_pane

0xde9e,	// (0x000332f3) cont_note_image_pane_ParamLimits

0xde9e,	// (0x000332f3) cont_note_image_pane

0x48a1,	// (0x00029cf6) popup_note2_window_g1_ParamLimits

0x48a1,	// (0x00029cf6) popup_note2_window_g1

0x48d2,	// (0x00029d27) popup_note2_window_t1_ParamLimits

0x48d2,	// (0x00029d27) popup_note2_window_t1

0x4917,	// (0x00029d6c) popup_note2_window_t2_ParamLimits

0x4917,	// (0x00029d6c) popup_note2_window_t2

0x495c,	// (0x00029db1) popup_note2_window_t3_ParamLimits

0x495c,	// (0x00029db1) popup_note2_window_t3

0x49a1,	// (0x00029df6) popup_note2_window_t4_ParamLimits

0x49a1,	// (0x00029df6) popup_note2_window_t4

0xc4fc,	// (0x00031951) popup_note2_window_t5_ParamLimits

0xc4fc,	// (0x00031951) popup_note2_window_t5

0x0004,

0xfa37,	// (0x00034e8c) popup_note2_window_t_ParamLimits

0xfa37,	// (0x00034e8c) popup_note2_window_t

0x49d0,	// (0x00029e25) popup_note2_image_window_g1_ParamLimits

0x49d0,	// (0x00029e25) popup_note2_image_window_g1

0x49dc,	// (0x00029e31) popup_note2_image_window_g2_ParamLimits

0x49dc,	// (0x00029e31) popup_note2_image_window_g2

0x0001,

0xfa42,	// (0x00034e97) popup_note2_image_window_g_ParamLimits

0xfa42,	// (0x00034e97) popup_note2_image_window_g

0x49ee,	// (0x00029e43) popup_note2_image_window_t1_ParamLimits

0x49ee,	// (0x00029e43) popup_note2_image_window_t1

0x4a06,	// (0x00029e5b) popup_note2_image_window_t2_ParamLimits

0x4a06,	// (0x00029e5b) popup_note2_image_window_t2

0x4a1e,	// (0x00029e73) popup_note2_image_window_t3_ParamLimits

0x4a1e,	// (0x00029e73) popup_note2_image_window_t3

0x0002,

0xfa47,	// (0x00034e9c) popup_note2_image_window_t_ParamLimits

0xfa47,	// (0x00034e9c) popup_note2_image_window_t

0xdeac,	// (0x00033301) popup_note2_wait_window_g1_ParamLimits

0xdeac,	// (0x00033301) popup_note2_wait_window_g1

0xdeb8,	// (0x0003330d) popup_note2_wait_window_g2_ParamLimits

0xdeb8,	// (0x0003330d) popup_note2_wait_window_g2

0xdec4,	// (0x00033319) popup_note2_wait_window_g3_ParamLimits

0xdec4,	// (0x00033319) popup_note2_wait_window_g3

0x0002,

0x028c,	// (0x000256e1) popup_note2_wait_window_g_ParamLimits

0x028c,	// (0x000256e1) popup_note2_wait_window_g

0x4a3a,	// (0x00029e8f) popup_note2_wait_window_t1_ParamLimits

0x4a3a,	// (0x00029e8f) popup_note2_wait_window_t1

0x4a58,	// (0x00029ead) popup_note2_wait_window_t2_ParamLimits

0x4a58,	// (0x00029ead) popup_note2_wait_window_t2

0x4a76,	// (0x00029ecb) popup_note2_wait_window_t3_ParamLimits

0x4a76,	// (0x00029ecb) popup_note2_wait_window_t3

0x4a88,	// (0x00029edd) popup_note2_wait_window_t4_ParamLimits

0x4a88,	// (0x00029edd) popup_note2_wait_window_t4

0x0003,

0xfa4e,	// (0x00034ea3) popup_note2_wait_window_t_ParamLimits

0xfa4e,	// (0x00034ea3) popup_note2_wait_window_t

0x4a9a,	// (0x00029eef) wait_bar2_pane_ParamLimits

0x4a9a,	// (0x00029eef) wait_bar2_pane

0x4ab2,	// (0x00029f07) popup_snote2_single_text_window_g1_ParamLimits

0x4ab2,	// (0x00029f07) popup_snote2_single_text_window_g1

0x4ada,	// (0x00029f2f) popup_snote2_single_text_window_t1_ParamLimits

0x4ada,	// (0x00029f2f) popup_snote2_single_text_window_t1

0x4b26,	// (0x00029f7b) popup_snote2_single_text_window_t2_ParamLimits

0x4b26,	// (0x00029f7b) popup_snote2_single_text_window_t2

0x4b72,	// (0x00029fc7) popup_snote2_single_text_window_t3_ParamLimits

0x4b72,	// (0x00029fc7) popup_snote2_single_text_window_t3

0x4bb3,	// (0x0002a008) popup_snote2_single_text_window_t4_ParamLimits

0x4bb3,	// (0x0002a008) popup_snote2_single_text_window_t4

0x4be9,	// (0x0002a03e) popup_snote2_single_text_window_t5_ParamLimits

0x4be9,	// (0x0002a03e) popup_snote2_single_text_window_t5

0x0004,

0xfa57,	// (0x00034eac) popup_snote2_single_text_window_t_ParamLimits

0xfa57,	// (0x00034eac) popup_snote2_single_text_window_t

0x4c14,	// (0x0002a069) popup_snote2_single_graphic_window_g1_ParamLimits

0x4c14,	// (0x0002a069) popup_snote2_single_graphic_window_g1

0x4c3c,	// (0x0002a091) popup_snote2_single_graphic_window_g2_ParamLimits

0x4c3c,	// (0x0002a091) popup_snote2_single_graphic_window_g2

0x0001,

0xfa62,	// (0x00034eb7) popup_snote2_single_graphic_window_g_ParamLimits

0xfa62,	// (0x00034eb7) popup_snote2_single_graphic_window_g

0x4c64,	// (0x0002a0b9) popup_snote2_single_graphic_window_t1_ParamLimits

0x4c64,	// (0x0002a0b9) popup_snote2_single_graphic_window_t1

0x4cb0,	// (0x0002a105) popup_snote2_single_graphic_window_t2_ParamLimits

0x4cb0,	// (0x0002a105) popup_snote2_single_graphic_window_t2

0x4b72,	// (0x00029fc7) popup_snote2_single_graphic_window_t3_ParamLimits

0x4b72,	// (0x00029fc7) popup_snote2_single_graphic_window_t3

0x4bb3,	// (0x0002a008) popup_snote2_single_graphic_window_t4_ParamLimits

0x4bb3,	// (0x0002a008) popup_snote2_single_graphic_window_t4

0x4be9,	// (0x0002a03e) popup_snote2_single_graphic_window_t5_ParamLimits

0x4be9,	// (0x0002a03e) popup_snote2_single_graphic_window_t5

0x0004,

0xfa67,	// (0x00034ebc) popup_snote2_single_graphic_window_t_ParamLimits

0xfa67,	// (0x00034ebc) popup_snote2_single_graphic_window_t

0xf376,	// (0x000347cb) clock_nsta_pane_cp2_t1

0xf376,	// (0x000347cb) clock_nsta_pane_cp2_t2

0x0001,

0x04ed,	// (0x00025942) clock_nsta_pane_cp2_t

0x6c8e,	// (0x0002c0e3) form_field_data_wide_pane_g1_ParamLimits

0xc9b2,	// (0x00031e07) form_field_data_wide_pane_g2_ParamLimits

0xc9b2,	// (0x00031e07) form_field_data_wide_pane_g2

0xc9be,	// (0x00031e13) form_field_data_wide_pane_g3_ParamLimits

0xc9be,	// (0x00031e13) form_field_data_wide_pane_g3

0x0002,

0xf6a4,	// (0x00034af9) form_field_data_wide_pane_g_ParamLimits

0xf6a4,	// (0x00034af9) form_field_data_wide_pane_g

0xadeb,	// (0x00030240) grid_touch_3_pane_ParamLimits

0xadeb,	// (0x00030240) grid_touch_3_pane

0xb225,	// (0x0003067a) cell_touch_3_pane_ParamLimits

0xb225,	// (0x0003067a) cell_touch_3_pane

0x2f3e,	// (0x00028393) cell_touch_3_pane_g1

0x2f3e,	// (0x00028393) cell_touch_3_pane_g2

0x0001,

0xf90c,	// (0x00034d61) cell_touch_3_pane_g

0xc52e,	// (0x00031983) cont_query_data_pane

0xc536,	// (0x0003198b) cont_query_data_pane_cp1

0x4d2b,	// (0x0002a180) button_value_adjust_pane_cp7

0x4d33,	// (0x0002a188) query_popup_pane_cp3

0xcf1b,	// (0x00032370) bg_popup_sub_pane_cp22_ParamLimits

0x1462,	// (0x000268b7) navi_navi_volume_pane_cp2

0x147d,	// (0x000268d2) popup_side_volume_key_window_g2

0x148c,	// (0x000268e1) popup_side_volume_key_window_g3

0x0002,

0xf6e0,	// (0x00034b35) popup_side_volume_key_window_g

0x14a9,	// (0x000268fe) popup_side_volume_key_window_t2

0x0001,

0xf6e7,	// (0x00034b3c) popup_side_volume_key_window_t

0xd16b,	// (0x000325c0) popup_side_volume_key_window_ParamLimits

0x933e,	// (0x0002e793) list_double_graphic_pane_g4_ParamLimits

0x933e,	// (0x0002e793) list_double_graphic_pane_g4

0x97b2,	// (0x0002ec07) list_single_2heading_msg_pane_ParamLimits

0x97b2,	// (0x0002ec07) list_single_2heading_msg_pane

0x97d3,	// (0x0002ec28) list_single_2heading_msg_pane_g1_ParamLimits

0x97d3,	// (0x0002ec28) list_single_2heading_msg_pane_g1

0x97df,	// (0x0002ec34) list_single_2heading_msg_pane_g2_ParamLimits

0x97df,	// (0x0002ec34) list_single_2heading_msg_pane_g2

0x97f2,	// (0x0002ec47) list_single_2heading_msg_pane_g3_ParamLimits

0x97f2,	// (0x0002ec47) list_single_2heading_msg_pane_g3

0x752d,	// (0x0002c982) list_single_2heading_msg_pane_g4_ParamLimits

0x752d,	// (0x0002c982) list_single_2heading_msg_pane_g4

0x0003,

0xfa72,	// (0x00034ec7) list_single_2heading_msg_pane_g_ParamLimits

0xfa72,	// (0x00034ec7) list_single_2heading_msg_pane_g

0x7545,	// (0x0002c99a) list_single_2heading_msg_pane_t1_ParamLimits

0x7545,	// (0x0002c99a) list_single_2heading_msg_pane_t1

0x97fe,	// (0x0002ec53) list_single_2heading_msg_pane_t2_ParamLimits

0x97fe,	// (0x0002ec53) list_single_2heading_msg_pane_t2

0x9869,	// (0x0002ecbe) list_single_2heading_msg_pane_t3_ParamLimits

0x9869,	// (0x0002ecbe) list_single_2heading_msg_pane_t3

0x75da,	// (0x0002ca2f) list_single_2heading_msg_pane_t4_ParamLimits

0x75da,	// (0x0002ca2f) list_single_2heading_msg_pane_t4

0x0003,

0xfa7b,	// (0x00034ed0) list_single_2heading_msg_pane_t_ParamLimits

0xfa7b,	// (0x00034ed0) list_single_2heading_msg_pane_t

0xc2ff,	// (0x00031754) title_pane_g4_ParamLimits

0xc2ff,	// (0x00031754) title_pane_g4

0x1186,	// (0x000265db) title_pane_stacon_g3_ParamLimits

0x1186,	// (0x000265db) title_pane_stacon_g3

0x4864,	// (0x00029cb9) list_single_2graphic_im_pane_g4_ParamLimits

0x4864,	// (0x00029cb9) list_single_2graphic_im_pane_g4

0xe7df,	// (0x00033c34) popup_side_volume_key_window_cp

0xecc9,	// (0x0003411e) main_idle_act2_pane_t1

0x2131,	// (0x00027586) toolbar_button_pane_g10

0x9ac8,	// (0x0002ef1d) popup_toolbar_window_cp1

0xf367,	// (0x000347bc) clock_nsta_pane_cp_t1

0xf367,	// (0x000347bc) clock_nsta_pane_cp_t2

0x0001,

0x04e8,	// (0x0002593d) clock_nsta_pane_cp_t

0x1462,	// (0x000268b7) navi_navi_volume_pane_cp2_ParamLimits

0x1471,	// (0x000268c6) popup_side_volume_key_window_g1_ParamLimits

0x147d,	// (0x000268d2) popup_side_volume_key_window_g2_ParamLimits

0x148c,	// (0x000268e1) popup_side_volume_key_window_g3_ParamLimits

0xf6e0,	// (0x00034b35) popup_side_volume_key_window_g_ParamLimits

0x2fbc,	// (0x00028411) fep_hwr_aid_pane

0x3063,	// (0x000284b8) bg_fep_hwr_top_pane_g4_ParamLimits

0x3083,	// (0x000284d8) fep_hwr_top_pane_g1_ParamLimits

0x3095,	// (0x000284ea) fep_hwr_top_pane_g2_ParamLimits

0x30a7,	// (0x000284fc) fep_hwr_top_pane_g3_ParamLimits

0xf8d7,	// (0x00034d2c) fep_hwr_top_pane_g_ParamLimits

0x30bc,	// (0x00028511) fep_hwr_top_text_pane_ParamLimits

0xe5d4,	// (0x00033a29) aid_touch_tab_arrow_arrow_2

0xe5dd,	// (0x00033a32) aid_touch_tab_arrow_left_2

0x2fd0,	// (0x00028425) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x3007,	// (0x0002845c) fep_hwr_prediction_pane

0x332e,	// (0x00028783) fep_vkb_prediction_pane

0xb00c,	// (0x00030461) fep_vkb_side_pane_g3_ParamLimits

0xb00c,	// (0x00030461) fep_vkb_side_pane_g3

0x375b,	// (0x00028bb0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x38b4,	// (0x00028d09) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x38c1,	// (0x00028d16) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xf986,	// (0x00034ddb) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x39f0,	// (0x00028e45) fep_hwr_prediction_pane_g1

0x39fa,	// (0x00028e4f) fep_hwr_prediction_pane_g2

0x2fa6,	// (0x000283fb) fep_hwr_prediction_pane_g3

0x3a02,	// (0x00028e57) fep_hwr_prediction_pane_g4

0x0003,

0xfa84,	// (0x00034ed9) fep_hwr_prediction_pane_g

0x4d58,	// (0x0002a1ad) fep_vkb_prediction_pane_g1

0x4d62,	// (0x0002a1b7) fep_vkb_prediction_pane_g2

0x4d6a,	// (0x0002a1bf) fep_vkb_prediction_pane_g3

0x4d72,	// (0x0002a1c7) fep_vkb_prediction_pane_g4

0x0003,

0xfa8d,	// (0x00034ee2) fep_vkb_prediction_pane_g

0x2715,	// (0x00027b6a) slider_set_pane_g3

0x2729,	// (0x00027b7e) slider_set_pane_g4

0x2741,	// (0x00027b96) slider_set_pane_g5

0x2715,	// (0x00027b6a) slider_set_pane_g6

0x2757,	// (0x00027bac) slider_set_pane_g7

0xea5e,	// (0x00033eb3) slider_form_pane_g3

0xea67,	// (0x00033ebc) slider_form_pane_g4

0xea6f,	// (0x00033ec4) slider_form_pane_g5

0xea5e,	// (0x00033eb3) slider_form_pane_g6

0xac60,	// (0x000300b5) slider_form_pane_g7

0xef67,	// (0x000343bc) slider_set_pane_vc_g3

0xef70,	// (0x000343c5) slider_set_pane_vc_g4

0xef79,	// (0x000343ce) slider_set_pane_vc_g5

0xef67,	// (0x000343bc) slider_set_pane_vc_g6

0xef82,	// (0x000343d7) slider_set_pane_vc_g7

0xef67,	// (0x000343bc) slider_form_pane_vc_g1

0xef70,	// (0x000343c5) slider_form_pane_vc_g2

0xef79,	// (0x000343ce) slider_form_pane_vc_g3

0xef67,	// (0x000343bc) slider_form_pane_vc_g4

0xf111,	// (0x00034566) slider_form_pane_vc_g5

0x0004,

0x04ce,	// (0x00025923) slider_form_pane_vc_g

0xc2e1,	// (0x00031736) main_idle_act3_pane

0x4d7a,	// (0x0002a1cf) ai3_links_pane

0xb26e,	// (0x000306c3) popup_ai3_data_window_ParamLimits

0xb26e,	// (0x000306c3) popup_ai3_data_window

0xc2e1,	// (0x00031736) grid_ai3_links_pane

0xb286,	// (0x000306db) cell_ai3_links_pane_ParamLimits

0xb286,	// (0x000306db) cell_ai3_links_pane

0x4db3,	// (0x0002a208) bg_popup_sub_pane_cp11

0x4dc0,	// (0x0002a215) cell_ai3_links_pane_g1

0xc2e1,	// (0x00031736) bg_popup_sub_pane_cp12

0x4de5,	// (0x0002a23a) heading_ai3_data_pane

0x4ded,	// (0x0002a242) list_ai3_gene_pane

0x4df9,	// (0x0002a24e) popup_ai3_data_window_g1

0x4e01,	// (0x0002a256) heading_ai3_data_pane_g1

0x4e09,	// (0x0002a25e) heading_ai3_data_pane_t1

0x4e17,	// (0x0002a26c) list_double_ai3_gene_pane_ParamLimits

0x4e17,	// (0x0002a26c) list_double_ai3_gene_pane

0x4e24,	// (0x0002a279) list_single_ai3_gene_pane_ParamLimits

0x4e24,	// (0x0002a279) list_single_ai3_gene_pane

0x2f03,	// (0x00028358) list_highlight_pane_cp7_ParamLimits

0x2f03,	// (0x00028358) list_highlight_pane_cp7

0x4e31,	// (0x0002a286) list_single_a13_gene_pane_t1_ParamLimits

0x4e31,	// (0x0002a286) list_single_a13_gene_pane_t1

0x4e48,	// (0x0002a29d) list_single_ai3_gene_pane_g1

0x4e51,	// (0x0002a2a6) list_single_ai3_gene_pane_g2

0x0001,

0xfa96,	// (0x00034eeb) list_single_ai3_gene_pane_g

0x4e59,	// (0x0002a2ae) list_double_ai3_gene_pane_g1_ParamLimits

0x4e59,	// (0x0002a2ae) list_double_ai3_gene_pane_g1

0x4e65,	// (0x0002a2ba) list_double_ai3_gene_pane_t1_ParamLimits

0x4e65,	// (0x0002a2ba) list_double_ai3_gene_pane_t1

0x4e81,	// (0x0002a2d6) list_double_ai3_gene_pane_t2_ParamLimits

0x4e81,	// (0x0002a2d6) list_double_ai3_gene_pane_t2

0x4e96,	// (0x0002a2eb) list_double_ai3_gene_pane_t3_ParamLimits

0x4e96,	// (0x0002a2eb) list_double_ai3_gene_pane_t3

0x0002,

0xfa9b,	// (0x00034ef0) list_double_ai3_gene_pane_t_ParamLimits

0xfa9b,	// (0x00034ef0) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7517,	// (0x0002c96c) aid_size_min_col_2

0xb258,	// (0x000306ad) aid_size_min_msg_ParamLimits

0xb258,	// (0x000306ad) aid_size_min_msg

0xb020,	// (0x00030475) fep_vkb_top_text_pane_g2_ParamLimits

0xb020,	// (0x00030475) fep_vkb_top_text_pane_g2

0x0001,

0xf907,	// (0x00034d5c) fep_vkb_top_text_pane_g_ParamLimits

0xf907,	// (0x00034d5c) fep_vkb_top_text_pane_g

0xc2e1,	// (0x00031736) main_hc_apps_shell_pane

0x4eb3,	// (0x0002a308) grid_hc_apps_pane_ParamLimits

0x4eb3,	// (0x0002a308) grid_hc_apps_pane

0x4ec2,	// (0x0002a317) list_hc_apps_pane

0x4eca,	// (0x0002a31f) scroll_pane_cp37_ParamLimits

0x4eca,	// (0x0002a31f) scroll_pane_cp37

0xb2a0,	// (0x000306f5) cell_hc_apps_pane_ParamLimits

0xb2a0,	// (0x000306f5) cell_hc_apps_pane

0xb360,	// (0x000307b5) cell_hc_apps_pane_g1_ParamLimits

0xb360,	// (0x000307b5) cell_hc_apps_pane_g1

0x4fb7,	// (0x0002a40c) cell_hc_apps_pane_g2_ParamLimits

0x4fb7,	// (0x0002a40c) cell_hc_apps_pane_g2

0x4fd3,	// (0x0002a428) cell_hc_apps_pane_g3_ParamLimits

0x4fd3,	// (0x0002a428) cell_hc_apps_pane_g3

0x0002,

0xfaa2,	// (0x00034ef7) cell_hc_apps_pane_g_ParamLimits

0xfaa2,	// (0x00034ef7) cell_hc_apps_pane_g

0xb38d,	// (0x000307e2) cell_hc_apps_pane_t1_ParamLimits

0xb38d,	// (0x000307e2) cell_hc_apps_pane_t1

0xc484,	// (0x000318d9) grid_highlight_pane_cp10_ParamLimits

0xc484,	// (0x000318d9) grid_highlight_pane_cp10

0xb3cb,	// (0x00030820) list_single_hc_apps_pane_ParamLimits

0xb3cb,	// (0x00030820) list_single_hc_apps_pane

0x50a8,	// (0x0002a4fd) list_single_hc_apps_pane_g1

0x75ff,	// (0x0002ca54) list_single_hc_apps_pane_g2

0x0001,

0xfaa9,	// (0x00034efe) list_single_hc_apps_pane_g

0x7618,	// (0x0002ca6d) list_single_hc_apps_pane_g2_copy1

0x7634,	// (0x0002ca89) list_single_hc_apps_pane_t1

0xc351,	// (0x000317a6) bg_set_opt_pane_cp_ParamLimits

0x0e45,	// (0x0002629a) setting_slider_pane_t1_ParamLimits

0x0e5e,	// (0x000262b3) setting_slider_pane_t2_ParamLimits

0x0e77,	// (0x000262cc) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x000349f7) setting_slider_pane_t_ParamLimits

0x0e8e,	// (0x000262e3) slider_set_pane_ParamLimits

0x183c,	// (0x00026c91) control_pane_g5_ParamLimits

0x183c,	// (0x00026c91) control_pane_g5

0xea20,	// (0x00033e75) slider_set_pane_g1_ParamLimits

0x2709,	// (0x00027b5e) slider_set_pane_g2_ParamLimits

0x2715,	// (0x00027b6a) slider_set_pane_g3_ParamLimits

0x2729,	// (0x00027b7e) slider_set_pane_g4_ParamLimits

0x2741,	// (0x00027b96) slider_set_pane_g5_ParamLimits

0x2715,	// (0x00027b6a) slider_set_pane_g6_ParamLimits

0x2757,	// (0x00027bac) slider_set_pane_g7_ParamLimits

0xf7f5,	// (0x00034c4a) slider_set_pane_g_ParamLimits

0xd24c,	// (0x000326a1) navi_icon_text_pane_ParamLimits

0xa48e,	// (0x0002f8e3) aid_fill_nsta_2_ParamLimits

0xa4c2,	// (0x0002f917) aid_touch_tab_arrow_left_ParamLimits

0xa4d8,	// (0x0002f92d) aid_touch_tab_arrow_right_ParamLimits

0xa573,	// (0x0002f9c8) clock_nsta_pane_ParamLimits

0xaa08,	// (0x0002fe5d) navi_icon_pane_g1_ParamLimits

0xaa14,	// (0x0002fe69) navi_text_pane_t1_ParamLimits

0xaeb7,	// (0x0003030c) navi_icon_text_pane_g1_ParamLimits

0xaec3,	// (0x00030318) navi_icon_text_pane_t1_ParamLimits

0x50a8,	// (0x0002a4fd) list_single_hc_apps_pane_g1_ParamLimits

0x75ff,	// (0x0002ca54) list_single_hc_apps_pane_g2_ParamLimits

0xfaa9,	// (0x00034efe) list_single_hc_apps_pane_g_ParamLimits

0x7618,	// (0x0002ca6d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7634,	// (0x0002ca89) list_single_hc_apps_pane_t1_ParamLimits

0x88d4,	// (0x0002dd29) popup_toolbar2_fixed_window_ParamLimits

0x88d4,	// (0x0002dd29) popup_toolbar2_fixed_window

0xa3f7,	// (0x0002f84c) popup_toolbar2_float_window

0xc2e1,	// (0x00031736) bg_popup_sub_pane_cp27

0x50c1,	// (0x0002a516) grid_toolbar2_float_pane

0xc2e1,	// (0x00031736) bg_popup_sub_pane_cp26

0x50c1,	// (0x0002a516) grid_toolbar2_fixed_pane

0xb3fe,	// (0x00030853) cell_toolbar2_fixed_pane_ParamLimits

0xb3fe,	// (0x00030853) cell_toolbar2_fixed_pane

0xb419,	// (0x0003086e) cell_toolbar2_fixed_pane_g1

0x50e3,	// (0x0002a538) toolbar2_fixed_button_pane

0xd922,	// (0x00032d77) toolbar2_fixed_button_pane_g1

0xd932,	// (0x00032d87) toolbar2_fixed_button_pane_g2

0xd92a,	// (0x00032d7f) toolbar2_fixed_button_pane_g3

0xd942,	// (0x00032d97) toolbar2_fixed_button_pane_g4

0xd93a,	// (0x00032d8f) toolbar2_fixed_button_pane_g5

0xd94a,	// (0x00032d9f) toolbar2_fixed_button_pane_g6

0xd952,	// (0x00032da7) toolbar2_fixed_button_pane_g7

0xd962,	// (0x00032db7) toolbar2_fixed_button_pane_g8

0xd95a,	// (0x00032daf) toolbar2_fixed_button_pane_g9

0x0008,

0xf78c,	// (0x00034be1) toolbar2_fixed_button_pane_g

0x50eb,	// (0x0002a540) cell_toolbar2_float_pane_ParamLimits

0x50eb,	// (0x0002a540) cell_toolbar2_float_pane

0x50fc,	// (0x0002a551) cell_toolbar2_float_pane_g1

0x50e3,	// (0x0002a538) toolbar2_fixed_button_pane_cp

0xafd3,	// (0x00030428) fep_vkb_accented_list_pane_ParamLimits

0xafd3,	// (0x00030428) fep_vkb_accented_list_pane

0x372d,	// (0x00028b82) bg_popup_fep_shadow_pane_g9

0xd3ce,	// (0x00032823) bg_popup_fep_shadow_pane_cp3

0xca9e,	// (0x00031ef3) list_accented_list_pane

0x5105,	// (0x0002a55a) list_single_accented_list_pane_ParamLimits

0x5105,	// (0x0002a55a) list_single_accented_list_pane

0xd3ce,	// (0x00032823) list_highlight_pane_cp10

0x5116,	// (0x0002a56b) list_single_accented_list_pane_t1

0xa321,	// (0x0002f776) popup_slider_window_ParamLimits

0xa321,	// (0x0002f776) popup_slider_window

0x4d3b,	// (0x0002a190) aid_indentation_list_msg

0xb512,	// (0x00030967) bg_popup_window_pane_cp19

0x523a,	// (0x0002a68f) popup_slider_window_g1

0x5256,	// (0x0002a6ab) popup_slider_window_g2

0x5272,	// (0x0002a6c7) popup_slider_window_g3

0x0005,

0xfaae,	// (0x00034f03) popup_slider_window_g

0x52ce,	// (0x0002a723) popup_slider_window_t1

0x5342,	// (0x0002a797) small_volume_slider_vertical_pane

0x2f3e,	// (0x00028393) small_volume_slider_vertical_pane_g1

0x2f3e,	// (0x00028393) small_volume_slider_vertical_pane_g2

0x535e,	// (0x0002a7b3) small_volume_slider_vertical_pane_g3

0x0002,

0xfac0,	// (0x00034f15) small_volume_slider_vertical_pane_g

0x8842,	// (0x0002dc97) area_side_right_pane_ParamLimits

0x8842,	// (0x0002dc97) area_side_right_pane

0x8cbb,	// (0x0002e110) aid_size_side_button_ParamLimits

0x8cbb,	// (0x0002e110) aid_size_side_button

0x8cd4,	// (0x0002e129) grid_sctrl_middle_pane_ParamLimits

0x8cd4,	// (0x0002e129) grid_sctrl_middle_pane

0x3a3e,	// (0x00028e93) sctrl_sk_bottom_pane

0x3a4f,	// (0x00028ea4) sctrl_sk_top_pane

0x3a61,	// (0x00028eb6) aid_touch_sctrl_top

0x3a6e,	// (0x00028ec3) bg_sctrl_sk_pane_ParamLimits

0x3a6e,	// (0x00028ec3) bg_sctrl_sk_pane

0x3a7c,	// (0x00028ed1) sctrl_sk_top_pane_g1

0x3a89,	// (0x00028ede) sctrl_sk_top_pane_t1

0x3a61,	// (0x00028eb6) aid_touch_sctrl_bottom

0x3a6e,	// (0x00028ec3) bg_sctrl_sk_pane_cp_ParamLimits

0x3a6e,	// (0x00028ec3) bg_sctrl_sk_pane_cp

0x3aa4,	// (0x00028ef9) sctrl_sk_bottom_pane_g1

0x3a89,	// (0x00028ede) sctrl_sk_bottom_pane_t1

0x8cee,	// (0x0002e143) cell_sctrl_middle_pane_ParamLimits

0x8cee,	// (0x0002e143) cell_sctrl_middle_pane

0x8cff,	// (0x0002e154) aid_touch_sctrl_middle_ParamLimits

0x8cff,	// (0x0002e154) aid_touch_sctrl_middle

0x8d0c,	// (0x0002e161) bg_sctrl_middle_pane_ParamLimits

0x8d0c,	// (0x0002e161) bg_sctrl_middle_pane

0x411f,	// (0x00029574) cell_sctrl_middle_pane_g1_ParamLimits

0x411f,	// (0x00029574) cell_sctrl_middle_pane_g1

0x8d1a,	// (0x0002e16f) cell_sctrl_middle_pane_g2_ParamLimits

0x8d1a,	// (0x0002e16f) cell_sctrl_middle_pane_g2

0x0001,

0xfacc,	// (0x00034f21) cell_sctrl_middle_pane_g_ParamLimits

0xfacc,	// (0x00034f21) cell_sctrl_middle_pane_g

0xd922,	// (0x00032d77) bg_sctrl_middle_pane_g1

0xd92a,	// (0x00032d7f) bg_sctrl_middle_pane_g2

0xd932,	// (0x00032d87) bg_sctrl_middle_pane_g3

0xd93a,	// (0x00032d8f) bg_sctrl_middle_pane_g4

0xd942,	// (0x00032d97) bg_sctrl_middle_pane_g5

0xd94a,	// (0x00032d9f) bg_sctrl_middle_pane_g6

0xd952,	// (0x00032da7) bg_sctrl_middle_pane_g7

0xd95a,	// (0x00032daf) bg_sctrl_middle_pane_g8

0x0007,

0x0730,	// (0x00025b85) bg_sctrl_middle_pane_g

0xd962,	// (0x00032db7) bg_sctrl_middle_pane_g8_copy1

0xd922,	// (0x00032d77) bg_sctrl_sk_pane_g1

0xd932,	// (0x00032d87) bg_sctrl_sk_pane_g2

0xd92a,	// (0x00032d7f) bg_sctrl_sk_pane_g3

0x0008,

0xf78c,	// (0x00034be1) bg_sctrl_sk_pane_g

0xc8d1,	// (0x00031d26) aid_size_touch_scroll_bar

0xd942,	// (0x00032d97) bg_sctrl_sk_pane_g4

0xd93a,	// (0x00032d8f) bg_sctrl_sk_pane_g5

0xd94a,	// (0x00032d9f) bg_sctrl_sk_pane_g6

0xd952,	// (0x00032da7) bg_sctrl_sk_pane_g7

0xd962,	// (0x00032db7) bg_sctrl_sk_pane_g8

0xd95a,	// (0x00032daf) bg_sctrl_sk_pane_g9

0xd664,	// (0x00032ab9) popup_fep_china_hwr2_fs_candidate_window

0x9e5b,	// (0x0002f2b0) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9e5b,	// (0x0002f2b0) popup_fep_china_hwr2_fs_control_window

0x375b,	// (0x00028bb0) sctrl_sk_top_pane_g2

0x0001,

0xfac7,	// (0x00034f1c) sctrl_sk_top_pane_g

0xb5ca,	// (0x00030a1f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xb5ca,	// (0x00030a1f) aid_fep_china_hwr2_fs_cell

0xb5de,	// (0x00030a33) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xb5de,	// (0x00030a33) bg_popup_fep_shadow_pane_cp4

0xb5f5,	// (0x00030a4a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xb5f5,	// (0x00030a4a) bg_popup_fep_shadow_pane_cp5

0xb607,	// (0x00030a5c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xb607,	// (0x00030a5c) popup_fep_china_hwr2_fs_control_bar_grid

0xb61b,	// (0x00030a70) popup_fep_china_hwr2_fs_control_funtion_grid

0x53ba,	// (0x0002a80f) aid_fep_china_hwr2_fs_candi_cell

0xc2e1,	// (0x00031736) bg_popup_fep_shadow_pane_cp6

0x53c4,	// (0x0002a819) popup_fep_china_hwr2_fs_candidate_grid

0xb623,	// (0x00030a78) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xb623,	// (0x00030a78) cell_fep_china_hwr2_fs_funtion_grid

0x2f3e,	// (0x00028393) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x53e6,	// (0x0002a83b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x53e6,	// (0x0002a83b) cell_fep_china_hwr2_fs_funtion_grid_g1

0x53f4,	// (0x0002a849) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x53f4,	// (0x0002a849) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfad1,	// (0x00034f26) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfad1,	// (0x00034f26) cell_fep_china_hwr2_fs_funtion_grid_g

0xb63b,	// (0x00030a90) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xb63b,	// (0x00030a90) cell_fep_china_hwr2_fs_funtion_grid_t1

0xb650,	// (0x00030aa5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xb650,	// (0x00030aa5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfad6,	// (0x00034f2b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfad6,	// (0x00034f2b) cell_fep_china_hwr2_fs_funtion_grid_t

0x543b,	// (0x0002a890) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5443,	// (0x0002a898) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x544b,	// (0x0002a8a0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfadb,	// (0x00034f30) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5453,	// (0x0002a8a8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5453,	// (0x0002a8a8) cell_fep_china_hwr2_fs_candidate_grid

0x546c,	// (0x0002a8c1) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5474,	// (0x0002a8c9) popup_fep_china_hwr2_fs_candidate_grid_g21

0x2f3e,	// (0x00028393) cell_fep_china_hwr2_fs_candidate_grid_g1

0x2f3e,	// (0x00028393) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xf90c,	// (0x00034d61) cell_fep_china_hwr2_fs_candidate_grid_g

0x547c,	// (0x0002a8d1) cell_fep_china_hwr2_fs_candidate_grid_t1

0xd771,	// (0x00032bc6) clock_nsta_pane_cp_24_ParamLimits

0xd771,	// (0x00032bc6) clock_nsta_pane_cp_24

0xd7d9,	// (0x00032c2e) indicator_nsta_pane_cp_24_ParamLimits

0xd7d9,	// (0x00032c2e) indicator_nsta_pane_cp_24

0xe4de,	// (0x00033933) heading_pane_g1

0x0001,

0x030f,	// (0x00025764) heading_pane_g

0xeb54,	// (0x00033fa9) grid_sct_catagory_button_pane

0xe856,	// (0x00033cab) scroll_pane_cp5_ParamLimits

0xf3d2,	// (0x00034827) button_value_adjust_pane_cp5_ParamLimits

0xf3d2,	// (0x00034827) button_value_adjust_pane_cp5

0xf490,	// (0x000348e5) form2_midp_time_pane_ParamLimits

0x548a,	// (0x0002a8df) cell_sct_catagory_button_pane_ParamLimits

0x548a,	// (0x0002a8df) cell_sct_catagory_button_pane

0x2f03,	// (0x00028358) bg_button_pane_cp01_ParamLimits

0x2f03,	// (0x00028358) bg_button_pane_cp01

0x2f3e,	// (0x00028393) cell_sct_catagory_button_pane_g1

0xa39a,	// (0x0002f7ef) popup_tb_extension_window

0xb66c,	// (0x00030ac1) aid_size_cell_ext_ParamLimits

0xb66c,	// (0x00030ac1) aid_size_cell_ext

0xc713,	// (0x00031b68) bg_tb_trans_pane_cp1_ParamLimits

0xc713,	// (0x00031b68) bg_tb_trans_pane_cp1

0xb692,	// (0x00030ae7) grid_tb_ext_pane_ParamLimits

0xb692,	// (0x00030ae7) grid_tb_ext_pane

0xb6d2,	// (0x00030b27) cell_tb_ext_pane_ParamLimits

0xb6d2,	// (0x00030b27) cell_tb_ext_pane

0xb6fa,	// (0x00030b4f) cell_tb_ext_pane_g1_ParamLimits

0xb6fa,	// (0x00030b4f) cell_tb_ext_pane_g1

0x5522,	// (0x0002a977) cell_tb_ext_pane_t1

0xc484,	// (0x000318d9) list_highlight_pane_cp11_ParamLimits

0xc484,	// (0x000318d9) list_highlight_pane_cp11

0x0cb8,	// (0x0002610d) popup_uni_indicator_window_ParamLimits

0x0cb8,	// (0x0002610d) popup_uni_indicator_window

0xc998,	// (0x00031ded) bg_popup_sub_pane_cp14

0x553d,	// (0x0002a992) list_uniindi_pane

0x5549,	// (0x0002a99e) uniindi_top_pane

0xc484,	// (0x000318d9) bg_uniindi_top_pane

0x5568,	// (0x0002a9bd) uniindi_top_pane_g1

0x557e,	// (0x0002a9d3) uniindi_top_pane_g2

0x0003,

0xfae2,	// (0x00034f37) uniindi_top_pane_g

0x55a8,	// (0x0002a9fd) uniindi_top_pane_t1

0x55d2,	// (0x0002aa27) list_single_uniindi_pane_ParamLimits

0x55d2,	// (0x0002aa27) list_single_uniindi_pane

0x2f3e,	// (0x00028393) bg_uniindi_top_pane_g1

0x55e4,	// (0x0002aa39) list_single_uniindi_pane_g1

0x55f7,	// (0x0002aa4c) list_single_uniindi_pane_t1

0x0b3c,	// (0x00025f91) control_bg_pane

0x561c,	// (0x0002aa71) bg_sctrl_sk_pane_cp1

0x5625,	// (0x0002aa7a) bg_sctrl_sk_pane_cp2

0x562e,	// (0x0002aa83) control_bg_pane_g1

0x5637,	// (0x0002aa8c) control_bg_pane_g2

0x0001,

0xfaeb,	// (0x00034f40) control_bg_pane_g

0xf325,	// (0x0003477a) cell_indicator_nsta_pane_g1_ParamLimits

0xae1e,	// (0x00030273) cell_indicator_nsta_pane_g2_ParamLimits

0xf897,	// (0x00034cec) cell_indicator_nsta_pane_g_ParamLimits

0x72d4,	// (0x0002c729) form2_midp_time_pane_t1_ParamLimits

0x40a0,	// (0x000294f5) main_idle_act4_pane_ParamLimits

0x40a0,	// (0x000294f5) main_idle_act4_pane

0xa39a,	// (0x0002f7ef) popup_tb_extension_window_ParamLimits

0xb6b9,	// (0x00030b0e) tb_ext_find_pane_ParamLimits

0xb6b9,	// (0x00030b0e) tb_ext_find_pane

0x5640,	// (0x0002aa95) ai_gene_pane_1_cp1

0xd450,	// (0x000328a5) ai_gene_pane_2_cp1

0x5648,	// (0x0002aa9d) list_single_idle_plugin_calendar_pane

0x5651,	// (0x0002aaa6) list_single_idle_plugin_notification_pane

0x565a,	// (0x0002aaaf) list_single_idle_plugin_player_pane

0xb717,	// (0x00030b6c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xb717,	// (0x00030b6c) list_single_idle_plugin_shortcut_pane

0xb73f,	// (0x00030b94) main_idle_act4_pane_t1

0xb755,	// (0x00030baa) main_idle_act4_pane_t2

0x0001,

0xfaf0,	// (0x00034f45) main_idle_act4_pane_t

0xb76d,	// (0x00030bc2) middle_sk_idle_act4_pane_ParamLimits

0xb76d,	// (0x00030bc2) middle_sk_idle_act4_pane

0xb789,	// (0x00030bde) popup_clock_digital_analogue_window_cp2

0xb7b0,	// (0x00030c05) shortcut_wheel_idle_act4_pane_ParamLimits

0xb7b0,	// (0x00030c05) shortcut_wheel_idle_act4_pane

0x2f3e,	// (0x00028393) shortcut_wheel_idle_act4_pane_g1

0x2f3e,	// (0x00028393) shortcut_wheel_idle_act4_pane_g2

0x2f3e,	// (0x00028393) shortcut_wheel_idle_act4_pane_g3

0x2f3e,	// (0x00028393) shortcut_wheel_idle_act4_pane_g4

0x2f3e,	// (0x00028393) shortcut_wheel_idle_act4_pane_g5

0x56ed,	// (0x0002ab42) shortcut_wheel_idle_act4_pane_g6

0x56f5,	// (0x0002ab4a) shortcut_wheel_idle_act4_pane_g7

0x56fd,	// (0x0002ab52) shortcut_wheel_idle_act4_pane_g8

0x5705,	// (0x0002ab5a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfaf5,	// (0x00034f4a) shortcut_wheel_idle_act4_pane_g

0x8d26,	// (0x0002e17b) middle_sk_idle_act4_pane_g1_ParamLimits

0x8d26,	// (0x0002e17b) middle_sk_idle_act4_pane_g1

0xb82d,	// (0x00030c82) middle_sk_idle_act4_pane_g2_ParamLimits

0xb82d,	// (0x00030c82) middle_sk_idle_act4_pane_g2

0x0001,

0xfb18,	// (0x00034f6d) middle_sk_idle_act4_pane_g_ParamLimits

0xfb18,	// (0x00034f6d) middle_sk_idle_act4_pane_g

0xb845,	// (0x00030c9a) middle_sk_idle_act4_pane_t1_ParamLimits

0xb845,	// (0x00030c9a) middle_sk_idle_act4_pane_t1

0xb874,	// (0x00030cc9) grid_ai_shortcut_pane_ParamLimits

0xb874,	// (0x00030cc9) grid_ai_shortcut_pane

0xb891,	// (0x00030ce6) list_highlight_pane_cp16_ParamLimits

0xb891,	// (0x00030ce6) list_highlight_pane_cp16

0xb89e,	// (0x00030cf3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb89e,	// (0x00030cf3) list_single_idle_plugin_shortcut_pane_g1

0xb8aa,	// (0x00030cff) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb8aa,	// (0x00030cff) list_single_idle_plugin_shortcut_pane_g2

0xb8c6,	// (0x00030d1b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb8c6,	// (0x00030d1b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfb1d,	// (0x00034f72) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfb1d,	// (0x00034f72) list_single_idle_plugin_shortcut_pane_g

0xb8db,	// (0x00030d30) cell_ai_shortcut_pane_ParamLimits

0xb8db,	// (0x00030d30) cell_ai_shortcut_pane

0xb8f1,	// (0x00030d46) cell_ai_shortcut_pane_g1_ParamLimits

0xb8f1,	// (0x00030d46) cell_ai_shortcut_pane_g1

0x5640,	// (0x0002aa95) ai_gene_pane_1_cp2

0x5832,	// (0x0002ac87) ai_gene_pane_2_cp2

0x583a,	// (0x0002ac8f) list_highlight_pane_cp15

0x5843,	// (0x0002ac98) list_single_idle_plugin_calendar_pane_g1

0x583a,	// (0x0002ac8f) list_highlight_pane_cp17

0x584b,	// (0x0002aca0) list_single_idle_plugin_calendar_pane_g1_copy1

0x5853,	// (0x0002aca8) list_single_idle_plugin_player_pane_g1

0xed69,	// (0x000341be) list_single_idle_plugin_player_pane_g2

0x0001,

0xfb24,	// (0x00034f79) list_single_idle_plugin_player_pane_g

0x585b,	// (0x0002acb0) list_single_idle_plugin_player_pane_t1

0x5869,	// (0x0002acbe) list_single_idle_plugin_player_pane_t2

0x5877,	// (0x0002accc) list_single_idle_plugin_player_pane_t3

0x5885,	// (0x0002acda) list_single_idle_plugin_player_pane_t4

0x0003,

0xfb29,	// (0x00034f7e) list_single_idle_plugin_player_pane_t

0x5893,	// (0x0002ace8) wait_bar_pane_cp15

0x589b,	// (0x0002acf0) grid_ai_notification_pane

0xed69,	// (0x000341be) list_single_idle_plugin_notification_pane_g1

0xb913,	// (0x00030d68) cell_ai_notification_pane_ParamLimits

0xb913,	// (0x00030d68) cell_ai_notification_pane

0x58b1,	// (0x0002ad06) cell_ai_notification_pane_g1

0x58b9,	// (0x0002ad0e) cell_ai_notification_pane_t1

0xb920,	// (0x00030d75) tb_ext_find_button_pane

0xb928,	// (0x00030d7d) tb_ext_find_pane_g1

0xb930,	// (0x00030d85) tb_ext_find_pane_t1

0xcebf,	// (0x00032314) tb_ext_find_button_pane_g1

0x58e5,	// (0x0002ad3a) tb_ext_find_button_pane_g2

0x0001,

0xfb32,	// (0x00034f87) tb_ext_find_button_pane_g

0xb73f,	// (0x00030b94) main_idle_act4_pane_t1_ParamLimits

0xb755,	// (0x00030baa) main_idle_act4_pane_t2_ParamLimits

0xfaf0,	// (0x00034f45) main_idle_act4_pane_t_ParamLimits

0xb789,	// (0x00030bde) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb7a0,	// (0x00030bf5) sat_plugin_idle_act4_pane_ParamLimits

0xb7a0,	// (0x00030bf5) sat_plugin_idle_act4_pane

0xb93e,	// (0x00030d93) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb93e,	// (0x00030d93) sat_plugin_idle_act4_pane_t1

0xb956,	// (0x00030dab) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb956,	// (0x00030dab) sat_plugin_idle_act4_pane_t2

0xb96e,	// (0x00030dc3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb96e,	// (0x00030dc3) sat_plugin_idle_act4_pane_t3

0xb986,	// (0x00030ddb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb986,	// (0x00030ddb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfb37,	// (0x00034f8c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfb37,	// (0x00034f8c) sat_plugin_idle_act4_pane_t

0x0c01,	// (0x00026056) popup_battery_window_ParamLimits

0x0c01,	// (0x00026056) popup_battery_window

0xc484,	// (0x000318d9) bg_popup_sub_pane_cp25_ParamLimits

0xc484,	// (0x000318d9) bg_popup_sub_pane_cp25

0x593a,	// (0x0002ad8f) popup_battery_window_g1_ParamLimits

0x593a,	// (0x0002ad8f) popup_battery_window_g1

0x5946,	// (0x0002ad9b) popup_battery_window_t1_ParamLimits

0x5946,	// (0x0002ad9b) popup_battery_window_t1

0x5958,	// (0x0002adad) popup_battery_window_t2_ParamLimits

0x5958,	// (0x0002adad) popup_battery_window_t2

0x0001,

0xfb40,	// (0x00034f95) popup_battery_window_t_ParamLimits

0xfb40,	// (0x00034f95) popup_battery_window_t

0x9cf2,	// (0x0002f147) midp_canvas_pane_ParamLimits

0x9d4f,	// (0x0002f1a4) midp_keypad_pane_ParamLimits

0x9d4f,	// (0x0002f1a4) midp_keypad_pane

0xd608,	// (0x00032a5d) main_midp_pane_ParamLimits

0xf385,	// (0x000347da) signal_pane_g2_cp_ParamLimits

0xb99e,	// (0x00030df3) aid_size_cell_midp_keypad_ParamLimits

0xb99e,	// (0x00030df3) aid_size_cell_midp_keypad

0xb9bc,	// (0x00030e11) midp_keyp_game_grid_pane_ParamLimits

0xb9bc,	// (0x00030e11) midp_keyp_game_grid_pane

0xb9e3,	// (0x00030e38) midp_keyp_rocker_pane_ParamLimits

0xb9e3,	// (0x00030e38) midp_keyp_rocker_pane

0xba3c,	// (0x00030e91) midp_keyp_sk_left_pane_ParamLimits

0xba3c,	// (0x00030e91) midp_keyp_sk_left_pane

0xba90,	// (0x00030ee5) midp_keyp_sk_right_pane_ParamLimits

0xba90,	// (0x00030ee5) midp_keyp_sk_right_pane

0xc2e1,	// (0x00031736) bg_button_pane_cp03

0xbae4,	// (0x00030f39) midp_keyp_sk_left_pane_g1

0xc2e1,	// (0x00031736) bg_button_pane_cp04

0xbae4,	// (0x00030f39) midp_keyp_sk_right_pane_g1

0x2f3e,	// (0x00028393) midp_keyp_rocker_pane_g1

0xbaed,	// (0x00030f42) keyp_game_cell_pane_ParamLimits

0xbaed,	// (0x00030f42) keyp_game_cell_pane

0xc2e1,	// (0x00031736) bg_button_pane_cp02

0xbb11,	// (0x00030f66) keyp_game_cell_pane_g1

0x8884,	// (0x0002dcd9) popup_fep_vkb2_window_ParamLimits

0x8884,	// (0x0002dcd9) popup_fep_vkb2_window

0x8d34,	// (0x0002e189) aid_size_cell_vkb2_ParamLimits

0x8d34,	// (0x0002e189) aid_size_cell_vkb2

0x8d6a,	// (0x0002e1bf) popup_fep_vkb2_window_g1_ParamLimits

0x8d6a,	// (0x0002e1bf) popup_fep_vkb2_window_g1

0x8db1,	// (0x0002e206) vkb2_area_bottom_pane_ParamLimits

0x8db1,	// (0x0002e206) vkb2_area_bottom_pane

0x8e05,	// (0x0002e25a) vkb2_area_keypad_pane_ParamLimits

0x8e05,	// (0x0002e25a) vkb2_area_keypad_pane

0x8e4d,	// (0x0002e2a2) vkb2_area_top_pane_ParamLimits

0x8e4d,	// (0x0002e2a2) vkb2_area_top_pane

0x8ed3,	// (0x0002e328) vkb2_top_entry_pane_ParamLimits

0x8ed3,	// (0x0002e328) vkb2_top_entry_pane

0x8f00,	// (0x0002e355) vkb2_top_grid_left_pane_ParamLimits

0x8f00,	// (0x0002e355) vkb2_top_grid_left_pane

0x8f20,	// (0x0002e375) vkb2_top_grid_right_pane_ParamLimits

0x8f20,	// (0x0002e375) vkb2_top_grid_right_pane

0x3d0c,	// (0x00029161) vkb2_cell_keypad_pane_ParamLimits

0x3d0c,	// (0x00029161) vkb2_cell_keypad_pane

0x8f66,	// (0x0002e3bb) vkb2_area_bottom_grid_pane_ParamLimits

0x8f66,	// (0x0002e3bb) vkb2_area_bottom_grid_pane

0x8f90,	// (0x0002e3e5) vkb2_area_bottom_pane_g1_ParamLimits

0x8f90,	// (0x0002e3e5) vkb2_area_bottom_pane_g1

0x8fb6,	// (0x0002e40b) vkb2_area_bottom_pane_g2_ParamLimits

0x8fb6,	// (0x0002e40b) vkb2_area_bottom_pane_g2

0x8fe7,	// (0x0002e43c) vkb2_area_bottom_pane_g3_ParamLimits

0x8fe7,	// (0x0002e43c) vkb2_area_bottom_pane_g3

0x0002,

0xfb45,	// (0x00034f9a) vkb2_area_bottom_pane_g_ParamLimits

0xfb45,	// (0x00034f9a) vkb2_area_bottom_pane_g

0x3eb6,	// (0x0002930b) vkb2_top_cell_left_pane_ParamLimits

0x3eb6,	// (0x0002930b) vkb2_top_cell_left_pane

0xbb1a,	// (0x00030f6f) vkb2_top_entry_pane_g1_ParamLimits

0xbb1a,	// (0x00030f6f) vkb2_top_entry_pane_g1

0xbb28,	// (0x00030f7d) vkb2_top_entry_pane_t1_ParamLimits

0xbb28,	// (0x00030f7d) vkb2_top_entry_pane_t1

0x5ac9,	// (0x0002af1e) vkb2_top_entry_pane_t2_ParamLimits

0x5ac9,	// (0x0002af1e) vkb2_top_entry_pane_t2

0x5afb,	// (0x0002af50) vkb2_top_entry_pane_t3_ParamLimits

0x5afb,	// (0x0002af50) vkb2_top_entry_pane_t3

0x0002,

0xfb4c,	// (0x00034fa1) vkb2_top_entry_pane_t_ParamLimits

0xfb4c,	// (0x00034fa1) vkb2_top_entry_pane_t

0x9051,	// (0x0002e4a6) vkb2_top_grid_right_pane_g1_ParamLimits

0x9051,	// (0x0002e4a6) vkb2_top_grid_right_pane_g1

0x3f19,	// (0x0002936e) vkb2_top_grid_right_pane_g2_ParamLimits

0x3f19,	// (0x0002936e) vkb2_top_grid_right_pane_g2

0x3f31,	// (0x00029386) vkb2_top_grid_right_pane_g3_ParamLimits

0x3f31,	// (0x00029386) vkb2_top_grid_right_pane_g3

0x9067,	// (0x0002e4bc) vkb2_top_grid_right_pane_g4_ParamLimits

0x9067,	// (0x0002e4bc) vkb2_top_grid_right_pane_g4

0x0003,

0xfb53,	// (0x00034fa8) vkb2_top_grid_right_pane_g_ParamLimits

0xfb53,	// (0x00034fa8) vkb2_top_grid_right_pane_g

0x3f5f,	// (0x000293b4) vkb2_top_cell_left_pane_g1

0x3f76,	// (0x000293cb) vkb2_cell_keypad_pane_g1_ParamLimits

0x3f76,	// (0x000293cb) vkb2_cell_keypad_pane_g1

0x5b11,	// (0x0002af66) vkb2_cell_keypad_pane_t1_ParamLimits

0x5b11,	// (0x0002af66) vkb2_cell_keypad_pane_t1

0x3f84,	// (0x000293d9) vkb2_cell_bottom_grid_pane_ParamLimits

0x3f84,	// (0x000293d9) vkb2_cell_bottom_grid_pane

0x3fbd,	// (0x00029412) vkb2_cell_bottom_grid_pane_g1

0xb7d1,	// (0x00030c26) aid_call2_pane_cp02

0xb7d9,	// (0x00030c2e) aid_call_pane_cp02

0xb7e1,	// (0x00030c36) clock_digital_number_pane_cp10

0xb7e9,	// (0x00030c3e) clock_digital_number_pane_cp11

0xb7f1,	// (0x00030c46) clock_digital_number_pane_cp12

0xb7f9,	// (0x00030c4e) clock_digital_number_pane_cp13

0xb801,	// (0x00030c56) clock_digital_separator_pane_cp10

0xcebf,	// (0x00032314) popup_clock_digital_analogue_window_cp2_g1

0xcebf,	// (0x00032314) popup_clock_digital_analogue_window_cp2_g2

0xb809,	// (0x00030c5e) popup_clock_digital_analogue_window_cp2_g3

0xcebf,	// (0x00032314) popup_clock_digital_analogue_window_cp2_g4

0xb809,	// (0x00030c5e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfb08,	// (0x00034f5d) popup_clock_digital_analogue_window_cp2_g

0xb811,	// (0x00030c66) popup_clock_digital_analogue_window_cp2_t1

0xb81f,	// (0x00030c74) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfb13,	// (0x00034f68) popup_clock_digital_analogue_window_cp2_t

0x2f3e,	// (0x00028393) clock_digital_number_pane_cp10_g1

0x2f3e,	// (0x00028393) clock_digital_number_pane_cp10_g2

0x0001,

0xf90c,	// (0x00034d61) clock_digital_number_pane_cp10_g

0x2f3e,	// (0x00028393) clock_digital_separator_pane_cp10_g1

0x2f3e,	// (0x00028393) clock_digital_separator_pane_cp10_g2

0x0001,

0xf90c,	// (0x00034d61) clock_digital_separator_pane_cp10_g

0x558a,	// (0x0002a9df) uniindi_top_pane_g3

0x559b,	// (0x0002a9f0) uniindi_top_pane_g4

0x3d97,	// (0x000291ec) vkb2_row_keypad_pane_ParamLimits

0x3d97,	// (0x000291ec) vkb2_row_keypad_pane

0x3fdd,	// (0x00029432) vkb2_cell_t_keypad_pane_ParamLimits

0x3fdd,	// (0x00029432) vkb2_cell_t_keypad_pane

0x3fed,	// (0x00029442) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3fed,	// (0x00029442) vkb2_cell_t_keypad_pane_cp08

0x4000,	// (0x00029455) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x4000,	// (0x00029455) vkb2_cell_t_keypad_pane_cp09

0x4014,	// (0x00029469) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x4014,	// (0x00029469) vkb2_cell_t_keypad_pane_cp01

0x4025,	// (0x0002947a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x4025,	// (0x0002947a) vkb2_cell_t_keypad_pane_cp02

0x4036,	// (0x0002948b) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x4036,	// (0x0002948b) vkb2_cell_t_keypad_pane_cp03

0x4047,	// (0x0002949c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x4047,	// (0x0002949c) vkb2_cell_t_keypad_pane_cp04

0x4058,	// (0x000294ad) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x4058,	// (0x000294ad) vkb2_cell_t_keypad_pane_cp05

0x4069,	// (0x000294be) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x4069,	// (0x000294be) vkb2_cell_t_keypad_pane_cp06

0x407a,	// (0x000294cf) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x407a,	// (0x000294cf) vkb2_cell_t_keypad_pane_cp07

0x408b,	// (0x000294e0) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x408b,	// (0x000294e0) vkb2_cell_t_keypad_pane_cp10

0x375b,	// (0x00028bb0) vkb2_cell_t_keypad_pane_g1

0x5b28,	// (0x0002af7d) vkb2_cell_t_keypad_pane_t1

0x0b3c,	// (0x00025f91) popup_grid_graphic2_window

0xbb61,	// (0x00030fb6) aid_size_cell_graphic2_ParamLimits

0xbb61,	// (0x00030fb6) aid_size_cell_graphic2

0xde9e,	// (0x000332f3) bg_popup_window_pane_cp21_ParamLimits

0xde9e,	// (0x000332f3) bg_popup_window_pane_cp21

0xbb93,	// (0x00030fe8) graphic2_pages_pane_ParamLimits

0xbb93,	// (0x00030fe8) graphic2_pages_pane

0xbbe9,	// (0x0003103e) grid_graphic2_control_pane_ParamLimits

0xbbe9,	// (0x0003103e) grid_graphic2_control_pane

0xbc1d,	// (0x00031072) grid_graphic2_pane_ParamLimits

0xbc1d,	// (0x00031072) grid_graphic2_pane

0xbc90,	// (0x000310e5) cell_graphic2_pane

0xc2e1,	// (0x00031736) main_comp_mode_pane

0x4ded,	// (0x0002a242) list_ai3_gene_pane_ParamLimits

0xb512,	// (0x00030967) bg_popup_window_pane_cp19_ParamLimits

0x51dc,	// (0x0002a631) bg_touch_area_indi_pane_ParamLimits

0x51dc,	// (0x0002a631) bg_touch_area_indi_pane

0x51f2,	// (0x0002a647) bg_touch_area_indi_pane_cp01_ParamLimits

0x51f2,	// (0x0002a647) bg_touch_area_indi_pane_cp01

0x5208,	// (0x0002a65d) bg_touch_area_indi_pane_cp02_ParamLimits

0x5208,	// (0x0002a65d) bg_touch_area_indi_pane_cp02

0x5220,	// (0x0002a675) bg_touch_area_indi_pane_cp03_ParamLimits

0x5220,	// (0x0002a675) bg_touch_area_indi_pane_cp03

0x523a,	// (0x0002a68f) popup_slider_window_g1_ParamLimits

0x5256,	// (0x0002a6ab) popup_slider_window_g2_ParamLimits

0x5272,	// (0x0002a6c7) popup_slider_window_g3_ParamLimits

0xfaae,	// (0x00034f03) popup_slider_window_g_ParamLimits

0x52ce,	// (0x0002a723) popup_slider_window_t1_ParamLimits

0x5342,	// (0x0002a797) small_volume_slider_vertical_pane_ParamLimits

0xbc90,	// (0x000310e5) cell_graphic2_pane_ParamLimits

0xbcf8,	// (0x0003114d) bg_button_pane_cp10_ParamLimits

0xbcf8,	// (0x0003114d) bg_button_pane_cp10

0xbd0b,	// (0x00031160) bg_button_pane_cp11_ParamLimits

0xbd0b,	// (0x00031160) bg_button_pane_cp11

0xbd1e,	// (0x00031173) graphic2_pages_pane_g1_ParamLimits

0xbd1e,	// (0x00031173) graphic2_pages_pane_g1

0xbd39,	// (0x0003118e) graphic2_pages_pane_g2_ParamLimits

0xbd39,	// (0x0003118e) graphic2_pages_pane_g2

0x0001,

0xfb61,	// (0x00034fb6) graphic2_pages_pane_g_ParamLimits

0xfb61,	// (0x00034fb6) graphic2_pages_pane_g

0xbd51,	// (0x000311a6) graphic2_pages_pane_t1_ParamLimits

0xbd51,	// (0x000311a6) graphic2_pages_pane_t1

0xbd69,	// (0x000311be) cell_graphic2_control_pane_ParamLimits

0xbd69,	// (0x000311be) cell_graphic2_control_pane

0xbd83,	// (0x000311d8) cell_graphic2_pane_g1_ParamLimits

0xbd83,	// (0x000311d8) cell_graphic2_pane_g1

0x907d,	// (0x0002e4d2) cell_graphic2_pane_g2_ParamLimits

0x907d,	// (0x0002e4d2) cell_graphic2_pane_g2

0xbceb,	// (0x00031140) cell_graphic2_pane_g3_ParamLimits

0xbceb,	// (0x00031140) cell_graphic2_pane_g3

0x908a,	// (0x0002e4df) cell_graphic2_pane_g4_ParamLimits

0x908a,	// (0x0002e4df) cell_graphic2_pane_g4

0xbd90,	// (0x000311e5) cell_graphic2_pane_g5_ParamLimits

0xbd90,	// (0x000311e5) cell_graphic2_pane_g5

0x0004,

0xfb66,	// (0x00034fbb) cell_graphic2_pane_g_ParamLimits

0xfb66,	// (0x00034fbb) cell_graphic2_pane_g

0xbdb0,	// (0x00031205) cell_graphic2_pane_t1_ParamLimits

0xbdb0,	// (0x00031205) cell_graphic2_pane_t1

0xe4d2,	// (0x00033927) grid_highlight_pane_cp11_ParamLimits

0xe4d2,	// (0x00033927) grid_highlight_pane_cp11

0xc998,	// (0x00031ded) bg_button_pane_cp05

0xbdc7,	// (0x0003121c) cell_graphic2_control_pane_g1

0x2f3e,	// (0x00028393) bg_touch_area_indi_pane_g1

0x5b3a,	// (0x0002af8f) aid_cmod_rocker_key_size

0x5b44,	// (0x0002af99) aid_cmode_itu_key_size

0x5b4e,	// (0x0002afa3) main_cmode_video_pane

0x5b58,	// (0x0002afad) main_comp_mode_itu_pane

0x5b64,	// (0x0002afb9) main_comp_mode_rocker_pane

0x5b70,	// (0x0002afc5) cell_cmode_rocker_pane_ParamLimits

0x5b70,	// (0x0002afc5) cell_cmode_rocker_pane

0x5b82,	// (0x0002afd7) cell_cmode_itu_pane_ParamLimits

0x5b82,	// (0x0002afd7) cell_cmode_itu_pane

0xc998,	// (0x00031ded) bg_button_pane_cp06_ParamLimits

0xc998,	// (0x00031ded) bg_button_pane_cp06

0x33de,	// (0x00028833) cell_cmode_rocker_pane_g1_ParamLimits

0x33de,	// (0x00028833) cell_cmode_rocker_pane_g1

0x53e6,	// (0x0002a83b) cell_cmode_rocker_pane_g2_ParamLimits

0x53e6,	// (0x0002a83b) cell_cmode_rocker_pane_g2

0x0001,

0xfb71,	// (0x00034fc6) cell_cmode_rocker_pane_g_ParamLimits

0xfb71,	// (0x00034fc6) cell_cmode_rocker_pane_g

0xc2e1,	// (0x00031736) bg_button_pane_cp07

0x5b97,	// (0x0002afec) cell_cmode_itu_pane_g1

0x5ba0,	// (0x0002aff5) cell_cmode_itu_pane_t1

0x5bae,	// (0x0002b003) cell_cmode_itu_pane_t2

0x0001,

0xfb76,	// (0x00034fcb) cell_cmode_itu_pane_t

0x560c,	// (0x0002aa61) aid_touch_ctrl_left

0x5614,	// (0x0002aa69) aid_touch_ctrl_right

0xc2e1,	// (0x00031736) compa_mode_pane

0xbdd4,	// (0x00031229) aid_cmod_rocker_key_size_cp

0xbdde,	// (0x00031233) aid_cmode_itu_key_size_cp

0x5bbc,	// (0x0002b011) compa_mode_pane_g1

0x5bc4,	// (0x0002b019) compa_mode_pane_g2

0x5bcc,	// (0x0002b021) compa_mode_pane_g3

0x0002,

0xfb7b,	// (0x00034fd0) compa_mode_pane_g

0xbde8,	// (0x0003123d) main_comp_mode_itu_pane_cp

0xbdf0,	// (0x00031245) main_comp_mode_rocker_pane_cp

0xbdf8,	// (0x0003124d) cell_cmode_itu_pane_cp_ParamLimits

0xbdf8,	// (0x0003124d) cell_cmode_itu_pane_cp

0xbe0d,	// (0x00031262) cell_cmode_rocker_pane_cp_ParamLimits

0xbe0d,	// (0x00031262) cell_cmode_rocker_pane_cp

0xc998,	// (0x00031ded) bg_button_pane_cp06_cp_ParamLimits

0xc998,	// (0x00031ded) bg_button_pane_cp06_cp

0x33de,	// (0x00028833) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x33de,	// (0x00028833) cell_cmode_rocker_pane_g1_cp

0x2f3e,	// (0x00028393) cell_cmode_rocker_pane_g2_cp

0xc2e1,	// (0x00031736) bg_button_pane_cp07_cp

0xbe1f,	// (0x00031274) cell_cmode_itu_pane_g1_cp

0xbe28,	// (0x0003127d) cell_cmode_itu_pane_t1_cp

0xbe28,	// (0x0003127d) cell_cmode_itu_pane_t2_cp

0xac56,	// (0x000300ab) settings_code_pane_cp2

0xc351,	// (0x000317a6) bg_popup_window_pane_cp3_ParamLimits

0xc652,	// (0x00031aa7) heading_pane_cp3_ParamLimits

0xc65e,	// (0x00031ab3) listscroll_popup_graphic_pane_ParamLimits

0x2fbc,	// (0x00028411) fep_hwr_aid_pane_ParamLimits

0x3a61,	// (0x00028eb6) aid_touch_sctrl_top_ParamLimits

0x3a7c,	// (0x00028ed1) sctrl_sk_top_pane_g1_ParamLimits

0x375b,	// (0x00028bb0) sctrl_sk_top_pane_g2_ParamLimits

0xfac7,	// (0x00034f1c) sctrl_sk_top_pane_g_ParamLimits

0x3a89,	// (0x00028ede) sctrl_sk_top_pane_t1_ParamLimits

0x3a61,	// (0x00028eb6) aid_touch_sctrl_bottom_ParamLimits

0x3a89,	// (0x00028ede) sctrl_sk_bottom_pane_t1_ParamLimits

0x5556,	// (0x0002a9ab) aid_area_touch_clock

0x8e95,	// (0x0002e2ea) aid_vkb2_area_top_pane_cell_ParamLimits

0x8e95,	// (0x0002e2ea) aid_vkb2_area_top_pane_cell

0x8f40,	// (0x0002e395) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8f40,	// (0x0002e395) aid_vkb2_area_bottom_pane_cell

0x5ac1,	// (0x0002af16) popup_char_count_window

0x5bd4,	// (0x0002b029) popup_char_count_window_g1

0x5bdd,	// (0x0002b032) popup_char_count_window_g2

0x5be6,	// (0x0002b03b) popup_char_count_window_g3

0x0002,

0xfb82,	// (0x00034fd7) popup_char_count_window_g

0x5bef,	// (0x0002b044) popup_char_count_window_t1

0x3b3c,	// (0x00028f91) popup_fep_char_preview_window_ParamLimits

0x3b3c,	// (0x00028f91) popup_fep_char_preview_window

0x8eb5,	// (0x0002e30a) vkb2_top_candi_pane_ParamLimits

0x8eb5,	// (0x0002e30a) vkb2_top_candi_pane

0xbe36,	// (0x0003128b) cell_vkb2_top_candi_pane_ParamLimits

0xbe36,	// (0x0003128b) cell_vkb2_top_candi_pane

0x40ae,	// (0x00029503) bg_popup_fep_char_preview_window_ParamLimits

0x40ae,	// (0x00029503) bg_popup_fep_char_preview_window

0x40bc,	// (0x00029511) popup_fep_char_preview_window_t1_ParamLimits

0x40bc,	// (0x00029511) popup_fep_char_preview_window_t1

0x5bfd,	// (0x0002b052) bg_popup_fep_char_preview_window_g1

0x5c05,	// (0x0002b05a) bg_popup_fep_char_preview_window_g2

0x5c0d,	// (0x0002b062) bg_popup_fep_char_preview_window_g3

0x5c15,	// (0x0002b06a) bg_popup_fep_char_preview_window_g4

0x5c1d,	// (0x0002b072) bg_popup_fep_char_preview_window_g5

0x40f6,	// (0x0002954b) bg_popup_fep_char_preview_window_g6

0x5c25,	// (0x0002b07a) bg_popup_fep_char_preview_window_g7

0x5c2d,	// (0x0002b082) bg_popup_fep_char_preview_window_g8

0x5c35,	// (0x0002b08a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfb89,	// (0x00034fde) bg_popup_fep_char_preview_window_g

0x375b,	// (0x00028bb0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x375b,	// (0x00028bb0) cell_vkb2_top_candi_pane_g1

0x3769,	// (0x00028bbe) cell_vkb2_top_candi_pane_g2_ParamLimits

0x3769,	// (0x00028bbe) cell_vkb2_top_candi_pane_g2

0x42b0,	// (0x00029705) cell_vkb2_top_candi_pane_g3_ParamLimits

0x42b0,	// (0x00029705) cell_vkb2_top_candi_pane_g3

0x40fe,	// (0x00029553) cell_vkb2_top_candi_pane_g4_ParamLimits

0x40fe,	// (0x00029553) cell_vkb2_top_candi_pane_g4

0x439a,	// (0x000297ef) cell_vkb2_top_candi_pane_g5_ParamLimits

0x439a,	// (0x000297ef) cell_vkb2_top_candi_pane_g5

0x411f,	// (0x00029574) cell_vkb2_top_candi_pane_g6_ParamLimits

0x411f,	// (0x00029574) cell_vkb2_top_candi_pane_g6

0x0005,

0xfb9c,	// (0x00034ff1) cell_vkb2_top_candi_pane_g_ParamLimits

0xfb9c,	// (0x00034ff1) cell_vkb2_top_candi_pane_g

0x412d,	// (0x00029582) cell_vkb2_top_candi_pane_t1

0x26f5,	// (0x00027b4a) aid_size_touch_slider_mark_ParamLimits

0x26f5,	// (0x00027b4a) aid_size_touch_slider_mark

0xbbcf,	// (0x00031024) grid_graphic2_catg_pane_ParamLimits

0xbbcf,	// (0x00031024) grid_graphic2_catg_pane

0xbc63,	// (0x000310b8) popup_grid_graphic2_window_t1_ParamLimits

0xbc63,	// (0x000310b8) popup_grid_graphic2_window_t1

0xbc79,	// (0x000310ce) popup_grid_graphic2_window_t2_ParamLimits

0xbc79,	// (0x000310ce) popup_grid_graphic2_window_t2

0x0001,

0xfb5c,	// (0x00034fb1) popup_grid_graphic2_window_t_ParamLimits

0xfb5c,	// (0x00034fb1) popup_grid_graphic2_window_t

0xc998,	// (0x00031ded) bg_button_pane_cp05_ParamLimits

0xbdc7,	// (0x0003121c) cell_graphic2_control_pane_g1_ParamLimits

0xbe9c,	// (0x000312f1) cell_graphic2_catg_pane_ParamLimits

0xbe9c,	// (0x000312f1) cell_graphic2_catg_pane

0xc2e1,	// (0x00031736) bg_button_pane_cp12

0xbeae,	// (0x00031303) cell_graphic2_catg_pane_g1

0x5522,	// (0x0002a977) cell_tb_ext_pane_t1_ParamLimits

0x3ed6,	// (0x0002932b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3ed6,	// (0x0002932b) vkb2_top_cell_right_narrow_pane

0x3eee,	// (0x00029343) vkb2_top_cell_right_wide_pane_ParamLimits

0x3eee,	// (0x00029343) vkb2_top_cell_right_wide_pane

0x2fae,	// (0x00028403) bg_vkb2_func_pane_ParamLimits

0x2fae,	// (0x00028403) bg_vkb2_func_pane

0x3f5f,	// (0x000293b4) vkb2_top_cell_left_pane_g1_ParamLimits

0x2fae,	// (0x00028403) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2fae,	// (0x00028403) bg_vkb2_fuc_pane_cp03

0x3fbd,	// (0x00029412) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd92a,	// (0x00032d7f) bg_vkb2_func_pane_g1

0xd932,	// (0x00032d87) bg_vkb2_func_pane_g2

0xd942,	// (0x00032d97) bg_vkb2_func_pane_g3

0xd93a,	// (0x00032d8f) bg_vkb2_func_pane_g4

0xd94a,	// (0x00032d9f) bg_vkb2_func_pane_g5

0xd952,	// (0x00032da7) bg_vkb2_func_pane_g6

0xd95a,	// (0x00032daf) bg_vkb2_func_pane_g7

0xd962,	// (0x00032db7) bg_vkb2_func_pane_g8

0xd922,	// (0x00032d77) bg_vkb2_func_pane_g9

0x0008,

0x0819,	// (0x00025c6e) bg_vkb2_func_pane_g

0x2fae,	// (0x00028403) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2fae,	// (0x00028403) bg_vkb2_fuc_pane_cp01

0x3f5f,	// (0x000293b4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x3f5f,	// (0x000293b4) vkb2_top_cell_right_wide_pane_g1

0x2fae,	// (0x00028403) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2fae,	// (0x00028403) bg_vkb2_fuc_pane_cp02

0x3fbd,	// (0x00029412) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3fbd,	// (0x00029412) vkb2_top_cell_right_narrow_pane_g1

0xb44c,	// (0x000308a1) aid_touch_area_decrease_ParamLimits

0xb44c,	// (0x000308a1) aid_touch_area_decrease

0xb486,	// (0x000308db) aid_touch_area_increase_ParamLimits

0xb486,	// (0x000308db) aid_touch_area_increase

0xb4ae,	// (0x00030903) aid_touch_area_mute_ParamLimits

0xb4ae,	// (0x00030903) aid_touch_area_mute

0xb4de,	// (0x00030933) aid_touch_area_slider_ParamLimits

0xb4de,	// (0x00030933) aid_touch_area_slider

0xb51e,	// (0x00030973) popup_slider_window_g4_ParamLimits

0xb51e,	// (0x00030973) popup_slider_window_g4

0xb546,	// (0x0003099b) popup_slider_window_g5_ParamLimits

0xb546,	// (0x0003099b) popup_slider_window_g5

0xb57a,	// (0x000309cf) popup_slider_window_g6_ParamLimits

0xb57a,	// (0x000309cf) popup_slider_window_g6

0x52fc,	// (0x0002a751) popup_slider_window_t2_ParamLimits

0x52fc,	// (0x0002a751) popup_slider_window_t2

0x0001,

0xfabb,	// (0x00034f10) popup_slider_window_t_ParamLimits

0xfabb,	// (0x00034f10) popup_slider_window_t

0xb596,	// (0x000309eb) slider_pane_ParamLimits

0xb596,	// (0x000309eb) slider_pane

0x5c3d,	// (0x0002b092) slider_pane_g1_ParamLimits

0x5c3d,	// (0x0002b092) slider_pane_g1

0x5c51,	// (0x0002b0a6) slider_pane_g2_ParamLimits

0x5c51,	// (0x0002b0a6) slider_pane_g2

0x5c67,	// (0x0002b0bc) slider_pane_g3_ParamLimits

0x5c67,	// (0x0002b0bc) slider_pane_g3

0x0003,

0xfba9,	// (0x00034ffe) slider_pane_g_ParamLimits

0xfba9,	// (0x00034ffe) slider_pane_g

0xa3e2,	// (0x0002f837) popup_tb_float_extension_window_ParamLimits

0xa3e2,	// (0x0002f837) popup_tb_float_extension_window

0x5c93,	// (0x0002b0e8) aid_size_cell_tb_float_ext

0xc2e1,	// (0x00031736) bg_popup_sub_window_cp28

0x5c9f,	// (0x0002b0f4) grid_tb_float_ext_pane

0x5ca9,	// (0x0002b0fe) cell_tb_float_ext_pane_ParamLimits

0x5ca9,	// (0x0002b0fe) cell_tb_float_ext_pane

0x5cc3,	// (0x0002b118) cell_tb_float_ext_pane_g1

0x5ccc,	// (0x0002b121) grid_highlight_pane_cp12

0x8c99,	// (0x0002e0ee) cell_last_hwr_side_pane_ParamLimits

0x8c99,	// (0x0002e0ee) cell_last_hwr_side_pane

0x2f3e,	// (0x00028393) cell_last_hwr_side_pane_g1

0x5cd5,	// (0x0002b12a) cell_last_hwr_side_pane_g2

0x0001,

0xfbb2,	// (0x00035007) cell_last_hwr_side_pane_g

0x901c,	// (0x0002e471) vkb2_area_bottom_space_btn_pane_ParamLimits

0x901c,	// (0x0002e471) vkb2_area_bottom_space_btn_pane

0x375b,	// (0x00028bb0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5b28,	// (0x0002af7d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x412d,	// (0x00029582) cell_vkb2_top_candi_pane_t1_ParamLimits

0x414c,	// (0x000295a1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x414c,	// (0x000295a1) vkb2_area_bottom_space_btn_pane_g1

0x4186,	// (0x000295db) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x4186,	// (0x000295db) vkb2_area_bottom_space_btn_pane_g2

0x41bc,	// (0x00029611) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x41bc,	// (0x00029611) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfbb7,	// (0x0003500c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfbb7,	// (0x0003500c) vkb2_area_bottom_space_btn_pane_g

0x3071,	// (0x000284c6) cel_fep_hwr_func_pane_ParamLimits

0x3071,	// (0x000284c6) cel_fep_hwr_func_pane

0x8c6e,	// (0x0002e0c3) cell_hwr_side_button_pane_ParamLimits

0x8c6e,	// (0x0002e0c3) cell_hwr_side_button_pane

0x5556,	// (0x0002a9ab) aid_area_touch_clock_ParamLimits

0xc484,	// (0x000318d9) bg_uniindi_top_pane_ParamLimits

0x5568,	// (0x0002a9bd) uniindi_top_pane_g1_ParamLimits

0x557e,	// (0x0002a9d3) uniindi_top_pane_g2_ParamLimits

0x558a,	// (0x0002a9df) uniindi_top_pane_g3_ParamLimits

0x559b,	// (0x0002a9f0) uniindi_top_pane_g4_ParamLimits

0xfae2,	// (0x00034f37) uniindi_top_pane_g_ParamLimits

0x55a8,	// (0x0002a9fd) uniindi_top_pane_t1_ParamLimits

0xc484,	// (0x000318d9) bg_vkb2_func_pane_cp01_ParamLimits

0xc484,	// (0x000318d9) bg_vkb2_func_pane_cp01

0x5cde,	// (0x0002b133) cel_fep_hwr_func_pane_g1_ParamLimits

0x5cde,	// (0x0002b133) cel_fep_hwr_func_pane_g1

0xc484,	// (0x000318d9) bg_vkb2_func_pane_cp02_ParamLimits

0xc484,	// (0x000318d9) bg_vkb2_func_pane_cp02

0x5cde,	// (0x0002b133) cell_hwr_side_button_pane_g1_ParamLimits

0x5cde,	// (0x0002b133) cell_hwr_side_button_pane_g1

0xd83a,	// (0x00032c8f) status_pane_g4_ParamLimits

0xd83a,	// (0x00032c8f) status_pane_g4

0xd852,	// (0x00032ca7) status_pane_t1

0xf4f8,	// (0x0003494d) form2_midp_gauge_slider_cont_pane

0xf500,	// (0x00034955) form2_midp_gauge_slider_pane_t1_ParamLimits

0xaf12,	// (0x00030367) form2_midp_gauge_slider_pane_t2_ParamLimits

0xaf24,	// (0x00030379) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf8c6,	// (0x00034d1b) form2_midp_gauge_slider_pane_t_ParamLimits

0xf512,	// (0x00034967) form2_midp_slider_pane_ParamLimits

0x3afc,	// (0x00028f51) aid_size_cell_func_vkb2_ParamLimits

0x3afc,	// (0x00028f51) aid_size_cell_func_vkb2

0x5c7f,	// (0x0002b0d4) slider_pane_g4_ParamLimits

0x5c7f,	// (0x0002b0d4) slider_pane_g4

0x9097,	// (0x0002e4ec) form2_midp_gauge_slider_pane_t2_cp01

0x90a5,	// (0x0002e4fa) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x90a5,	// (0x0002e4fa) form2_midp_gauge_slider_pane_t3_cp01

0x4231,	// (0x00029686) form2_midp_slider_pane_cp01

0xc2e1,	// (0x00031736) navi_smil_pane

0x5d0e,	// (0x0002b163) navi_smil_pane_g1

0x5d16,	// (0x0002b16b) navi_smil_pane_t1

0x5cec,	// (0x0002b141) form2_midp_slider_pane_g1

0x5cf5,	// (0x0002b14a) form2_midp_slider_pane_g2

0x5cfd,	// (0x0002b152) form2_midp_slider_pane_g3

0x5cec,	// (0x0002b141) form2_midp_slider_pane_g4

0xbeb7,	// (0x0003130c) form2_midp_slider_pane_g5

0x0004,

0xfbc0,	// (0x00035015) form2_midp_slider_pane_g

0x41f6,	// (0x0002964b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x41f6,	// (0x0002964b) vkb2_area_bottom_space_btn_pane_g4

0xa5be,	// (0x0002fa13) lc0_navi_pane_ParamLimits

0xa5be,	// (0x0002fa13) lc0_navi_pane

0xa628,	// (0x0002fa7d) lc0_stat_indi_pane_ParamLimits

0xa628,	// (0x0002fa7d) lc0_stat_indi_pane

0xa63d,	// (0x0002fa92) ls0_title_pane_ParamLimits

0xa63d,	// (0x0002fa92) ls0_title_pane

0xc998,	// (0x00031ded) bg_popup_sub_pane_cp14_ParamLimits

0x553d,	// (0x0002a992) list_uniindi_pane_ParamLimits

0x5549,	// (0x0002a99e) uniindi_top_pane_ParamLimits

0x55e4,	// (0x0002aa39) list_single_uniindi_pane_g1_ParamLimits

0x55f7,	// (0x0002aa4c) list_single_uniindi_pane_t1_ParamLimits

0x90c2,	// (0x0002e517) lc0_stat_clock_pane_ParamLimits

0x90c2,	// (0x0002e517) lc0_stat_clock_pane

0xbec0,	// (0x00031315) lc0_stat_indi_pane_g1_ParamLimits

0xbec0,	// (0x00031315) lc0_stat_indi_pane_g1

0xbecd,	// (0x00031322) lc0_stat_indi_pane_g2_ParamLimits

0xbecd,	// (0x00031322) lc0_stat_indi_pane_g2

0x0001,

0xfbcb,	// (0x00035020) lc0_stat_indi_pane_g_ParamLimits

0xfbcb,	// (0x00035020) lc0_stat_indi_pane_g

0x90cf,	// (0x0002e524) lc0_uni_indicator_pane_ParamLimits

0x90cf,	// (0x0002e524) lc0_uni_indicator_pane

0xbeda,	// (0x0003132f) ls0_title_pane_g1_ParamLimits

0xbeda,	// (0x0003132f) ls0_title_pane_g1

0xbeee,	// (0x00031343) ls0_title_pane_t1_ParamLimits

0xbeee,	// (0x00031343) ls0_title_pane_t1

0x90dc,	// (0x0002e531) lc0_uni_indicator_pane_g1_ParamLimits

0x90dc,	// (0x0002e531) lc0_uni_indicator_pane_g1

0x5d24,	// (0x0002b179) lc0_stat_clock_pane_t1

0xc2e1,	// (0x00031736) main_ai5_pane

0x5d32,	// (0x0002b187) ai5_sk_pane_ParamLimits

0x5d32,	// (0x0002b187) ai5_sk_pane

0xbf1c,	// (0x00031371) cell_ai5_widget_pane_ParamLimits

0xbf1c,	// (0x00031371) cell_ai5_widget_pane

0x5d3f,	// (0x0002b194) aid_size_cell_widget_grid

0x5d51,	// (0x0002b1a6) bg_ai5_widget_pane_ParamLimits

0x5d51,	// (0x0002b1a6) bg_ai5_widget_pane

0xbfa5,	// (0x000313fa) cell_ai5_widget_pane_g2

0xbfb5,	// (0x0003140a) cell_ai5_widget_pane_g3

0xbfc9,	// (0x0003141e) cell_ai5_widget_pane_g4

0xbfd5,	// (0x0003142a) cell_ai5_widget_pane_g5

0xbfe1,	// (0x00031436) cell_ai5_widget_pane_g6

0xbfed,	// (0x00031442) cell_ai5_widget_pane_g7

0xc035,	// (0x0003148a) cell_ai5_widget_pane_t1_ParamLimits

0xc035,	// (0x0003148a) cell_ai5_widget_pane_t1

0xc052,	// (0x000314a7) cell_ai5_widget_pane_t2_ParamLimits

0xc052,	// (0x000314a7) cell_ai5_widget_pane_t2

0xc06a,	// (0x000314bf) cell_ai5_widget_pane_t3_ParamLimits

0xc06a,	// (0x000314bf) cell_ai5_widget_pane_t3

0xc082,	// (0x000314d7) cell_ai5_widget_pane_t4_ParamLimits

0xc082,	// (0x000314d7) cell_ai5_widget_pane_t4

0xc09c,	// (0x000314f1) cell_ai5_widget_pane_t5_ParamLimits

0xc09c,	// (0x000314f1) cell_ai5_widget_pane_t5

0x5d5d,	// (0x0002b1b2) cell_ai5_widget_pane_t6_ParamLimits

0x5d5d,	// (0x0002b1b2) cell_ai5_widget_pane_t6

0x5d6f,	// (0x0002b1c4) cell_ai5_widget_pane_t7_ParamLimits

0x5d6f,	// (0x0002b1c4) cell_ai5_widget_pane_t7

0xc0bb,	// (0x00031510) cell_ai5_widget_pane_t8_ParamLimits

0xc0bb,	// (0x00031510) cell_ai5_widget_pane_t8

0x0009,

0xfbd0,	// (0x00035025) cell_ai5_widget_pane_t_ParamLimits

0xfbd0,	// (0x00035025) cell_ai5_widget_pane_t

0xc103,	// (0x00031558) grid_ai5_widget_pane

0xc998,	// (0x00031ded) highlight_cell_ai5_widget_pane_ParamLimits

0xc998,	// (0x00031ded) highlight_cell_ai5_widget_pane

0xc119,	// (0x0003156e) ai5_sk_left_pane

0xc123,	// (0x00031578) ai5_sk_middle_pane

0xc12d,	// (0x00031582) ai5_sk_right_pane

0x5d88,	// (0x0002b1dd) bg_ai5_widget_pane_g1_ParamLimits

0x5d88,	// (0x0002b1dd) bg_ai5_widget_pane_g1

0x5d94,	// (0x0002b1e9) bg_ai5_widget_pane_g2_ParamLimits

0x5d94,	// (0x0002b1e9) bg_ai5_widget_pane_g2

0x5da0,	// (0x0002b1f5) bg_ai5_widget_pane_g3_ParamLimits

0x5da0,	// (0x0002b1f5) bg_ai5_widget_pane_g3

0x5dac,	// (0x0002b201) bg_ai5_widget_pane_g4_ParamLimits

0x5dac,	// (0x0002b201) bg_ai5_widget_pane_g4

0x5db8,	// (0x0002b20d) bg_ai5_widget_pane_g5_ParamLimits

0x5db8,	// (0x0002b20d) bg_ai5_widget_pane_g5

0x5dc4,	// (0x0002b219) bg_ai5_widget_pane_g6_ParamLimits

0x5dc4,	// (0x0002b219) bg_ai5_widget_pane_g6

0x5dd0,	// (0x0002b225) bg_ai5_widget_pane_g7_ParamLimits

0x5dd0,	// (0x0002b225) bg_ai5_widget_pane_g7

0x5ddc,	// (0x0002b231) bg_ai5_widget_pane_g8_ParamLimits

0x5ddc,	// (0x0002b231) bg_ai5_widget_pane_g8

0x5de8,	// (0x0002b23d) bg_ai5_widget_pane_g9_ParamLimits

0x5de8,	// (0x0002b23d) bg_ai5_widget_pane_g9

0x0008,

0xfbe5,	// (0x0003503a) bg_ai5_widget_pane_g_ParamLimits

0xfbe5,	// (0x0003503a) bg_ai5_widget_pane_g

0x5e10,	// (0x0002b265) cell_shortcut_ai5_widget_pane_ParamLimits

0x5e10,	// (0x0002b265) cell_shortcut_ai5_widget_pane

0xc38d,	// (0x000317e2) bg_cell_shortcut_ai5_widget_pane

0x5e22,	// (0x0002b277) cell_grid_ai5_widget_pane_g1

0x5e2b,	// (0x0002b280) highlight_cell_shortcut_ai5_widget_pane

0xd92a,	// (0x00032d7f) ai5_sk_left_pane_g1

0x5e33,	// (0x0002b288) ai5_sk_left_pane_g2

0x5e3b,	// (0x0002b290) ai5_sk_left_pane_g3

0x5e43,	// (0x0002b298) ai5_sk_left_pane_g4

0x0003,

0xfbf8,	// (0x0003504d) ai5_sk_left_pane_g

0x5e4b,	// (0x0002b2a0) ai5_sk_left_pane_t1

0xd932,	// (0x00032d87) ai5_sk_right_pane_g1

0x5e59,	// (0x0002b2ae) ai5_sk_right_pane_g2

0x5e61,	// (0x0002b2b6) ai5_sk_right_pane_g3

0x5e69,	// (0x0002b2be) ai5_sk_right_pane_g4

0x0003,

0xfc01,	// (0x00035056) ai5_sk_right_pane_g

0x5e71,	// (0x0002b2c6) ai5_sk_right_pane_t1

0xd932,	// (0x00032d87) ai5_sk_middle_pane_g1

0xd92a,	// (0x00032d7f) ai5_sk_middle_pane_g2

0xd94a,	// (0x00032d9f) ai5_sk_middle_pane_g3

0x5e61,	// (0x0002b2b6) ai5_sk_middle_pane_g4

0x5e3b,	// (0x0002b290) ai5_sk_middle_pane_g5

0x5e7f,	// (0x0002b2d4) ai5_sk_middle_pane_g6

0xc137,	// (0x0003158c) ai5_sk_middle_pane_g7

0x0006,

0xfc0a,	// (0x0003505f) ai5_sk_middle_pane_g

0xa4aa,	// (0x0002f8ff) aid_touch_area_size_lc0_ParamLimits

0xa4aa,	// (0x0002f8ff) aid_touch_area_size_lc0

0x378a,	// (0x00028bdf) cell_hwr_candidate_pane_t1_ParamLimits

0xd75c,	// (0x00032bb1) aid_touch_navi_pane

0xa72f,	// (0x0002fb84) status_dt_navi_pane_ParamLimits

0xa72f,	// (0x0002fb84) status_dt_navi_pane

0xa747,	// (0x0002fb9c) status_dt_sta_pane_ParamLimits

0xa747,	// (0x0002fb9c) status_dt_sta_pane

0xc13f,	// (0x00031594) dt_sta_controll_pane

0xc14c,	// (0x000315a1) dt_sta_indi_pane

0xc159,	// (0x000315ae) dt_sta_title_pane

0xc484,	// (0x000318d9) bg_dt_sta_indi_pane_ParamLimits

0xc484,	// (0x000318d9) bg_dt_sta_indi_pane

0xc16b,	// (0x000315c0) dt_sta_battery_pane

0xc173,	// (0x000315c8) dt_sta_indi_pane_g1

0x5e87,	// (0x0002b2dc) dt_sta_indi_pane_g2

0x5e90,	// (0x0002b2e5) dt_sta_indi_pane_g3

0x0002,

0xfc19,	// (0x0003506e) dt_sta_indi_pane_g

0x5e99,	// (0x0002b2ee) dt_sta_signal_pane

0xc998,	// (0x00031ded) bg_dt_sta_title_pane_ParamLimits

0xc998,	// (0x00031ded) bg_dt_sta_title_pane

0xe5a4,	// (0x000339f9) dt_sta_title_pane_g1

0xc17c,	// (0x000315d1) dt_sta_title_pane_t1_ParamLimits

0xc17c,	// (0x000315d1) dt_sta_title_pane_t1

0xc2e1,	// (0x00031736) bg_dt_sta_control_pane

0xc191,	// (0x000315e6) dt_sta_controll_pane_g1

0x5ea2,	// (0x0002b2f7) bg_dt_sta_title_pane_g1

0x5eab,	// (0x0002b300) bg_dt_sta_title_pane_g2

0x5eb4,	// (0x0002b309) bg_dt_sta_title_pane_g3

0x0002,

0xfc20,	// (0x00035075) bg_dt_sta_title_pane_g

0x2f3e,	// (0x00028393) bg_dt_sta_indi_pane_g1

0x5ebd,	// (0x0002b312) dt_sta_signal_pane_g1

0x5ec5,	// (0x0002b31a) dt_sta_signal_pane_g2

0x0001,

0xfc27,	// (0x0003507c) dt_sta_signal_pane_g

0x5ecd,	// (0x0002b322) dt_sta_battery_pane_g1

0x5ed6,	// (0x0002b32b) dt_sta_battery_pane_t1

0x2f3e,	// (0x00028393) bg_dt_sta_control_pane_g1

0xcf3d,	// (0x00032392) fep_china_uni_eep_pane

0xcf45,	// (0x0003239a) fep_china_uni_entry_pane_ParamLimits

0xcf55,	// (0x000323aa) popup_fep_china_uni_window_g1_ParamLimits

0xcf65,	// (0x000323ba) popup_fep_china_uni_window_g2_ParamLimits

0xcf65,	// (0x000323ba) popup_fep_china_uni_window_g2

0x0001,

0x0174,	// (0x000255c9) popup_fep_china_uni_window_g_ParamLimits

0x0174,	// (0x000255c9) popup_fep_china_uni_window_g

0x5ee5,	// (0x0002b33a) fep_china_uni_eep_pane_g1

0x5eed,	// (0x0002b342) fep_china_uni_eep_pane_t1

0x5d05,	// (0x0002b15a) aid_touch_area_size_smil_player

0xd80d,	// (0x00032c62) lc0_clock_pane

0xd846,	// (0x00032c9b) status_pane_g5_ParamLimits

0xd846,	// (0x00032c9b) status_pane_g5

0x9f76,	// (0x0002f3cb) popup_keymap_window

0xd826,	// (0x00032c7b) status_icon_pane

0xbfb5,	// (0x0003140a) cell_ai5_widget_pane_g3_ParamLimits

0xbfc9,	// (0x0003141e) cell_ai5_widget_pane_g4_ParamLimits

0xbfd5,	// (0x0003142a) cell_ai5_widget_pane_g5_ParamLimits

0xbff9,	// (0x0003144e) cell_ai5_widget_pane_g8_ParamLimits

0xbff9,	// (0x0003144e) cell_ai5_widget_pane_g8

0xc00d,	// (0x00031462) cell_ai5_widget_pane_g9_ParamLimits

0xc00d,	// (0x00031462) cell_ai5_widget_pane_g9

0xc021,	// (0x00031476) cell_ai5_widget_pane_g10_ParamLimits

0xc021,	// (0x00031476) cell_ai5_widget_pane_g10

0x5efc,	// (0x0002b351) status_icon_pane_g1

0xc2e1,	// (0x00031736) bg_popup_sub_pane_cp13

0x5f04,	// (0x0002b359) popup_keymap_window_t1

0x9da9,	// (0x0002f1fe) control_pane_g6_ParamLimits

0x9da9,	// (0x0002f1fe) control_pane_g6

0x9db6,	// (0x0002f20b) control_pane_g7_ParamLimits

0x9db6,	// (0x0002f20b) control_pane_g7

0x9dc3,	// (0x0002f218) control_pane_g8_ParamLimits

0x9dc3,	// (0x0002f218) control_pane_g8

0xc13f,	// (0x00031594) dt_sta_controll_pane_ParamLimits

0xc14c,	// (0x000315a1) dt_sta_indi_pane_ParamLimits

0xc159,	// (0x000315ae) dt_sta_title_pane_ParamLimits

0xc8da,	// (0x00031d2f) aid_size_touch_scroll_bar_cale

0x0c15,	// (0x0002606a) popup_discreet_window_ParamLimits

0x0c15,	// (0x0002606a) popup_discreet_window

0x88ca,	// (0x0002dd1f) popup_sk_window

0xde9e,	// (0x000332f3) bg_popup_sub_pane_cp28_ParamLimits

0xde9e,	// (0x000332f3) bg_popup_sub_pane_cp28

0x5f12,	// (0x0002b367) popup_discreet_window_g1_ParamLimits

0x5f12,	// (0x0002b367) popup_discreet_window_g1

0x5f32,	// (0x0002b387) popup_discreet_window_t1_ParamLimits

0x5f32,	// (0x0002b387) popup_discreet_window_t1

0x5f50,	// (0x0002b3a5) popup_discreet_window_t2_ParamLimits

0x5f50,	// (0x0002b3a5) popup_discreet_window_t2

0x0002,

0xfc2c,	// (0x00035081) popup_discreet_window_t_ParamLimits

0xfc2c,	// (0x00035081) popup_discreet_window_t

0x426a,	// (0x000296bf) popup_sk_window_g1

0x4274,	// (0x000296c9) popup_sk_window_g2

0x0001,

0xfc33,	// (0x00035088) popup_sk_window_g

0x5fa2,	// (0x0002b3f7) popup_sk_window_t1

0x5fb0,	// (0x0002b405) popup_sk_window_t1_copy1

0xbfa5,	// (0x000313fa) cell_ai5_widget_pane_g2_ParamLimits

0xc0cd,	// (0x00031522) cell_ai5_widget_pane_t9_ParamLimits

0xc0cd,	// (0x00031522) cell_ai5_widget_pane_t9

0xc2e1,	// (0x00031736) main_fep_fshwr2_pane

0xc19a,	// (0x000315ef) aid_fshwr2_btn_pane

0xc1a2,	// (0x000315f7) aid_fshwr2_syb_pane

0xc1aa,	// (0x000315ff) aid_fshwr2_txt_pane

0xc1b2,	// (0x00031607) fshwr2_func_candi_pane

0xc1bc,	// (0x00031611) fshwr2_hwr_syb_pane

0xc1ca,	// (0x0003161f) fshwr2_icf_pane

0xc2e1,	// (0x00031736) fshwr2_icf_bg_pane

0xc1d4,	// (0x00031629) fshwr2_icf_pane_t1_ParamLimits

0xc1d4,	// (0x00031629) fshwr2_icf_pane_t1

0x2f3e,	// (0x00028393) fshwr2_func_candi_pane_g1

0x5fd2,	// (0x0002b427) fshwr2_func_candi_row_pane_ParamLimits

0x5fd2,	// (0x0002b427) fshwr2_func_candi_row_pane

0xc1ee,	// (0x00031643) cell_fshwr2_syb_pane_ParamLimits

0xc1ee,	// (0x00031643) cell_fshwr2_syb_pane

0x33de,	// (0x00028833) fshwr2_hwr_syb_pane_g1_ParamLimits

0x33de,	// (0x00028833) fshwr2_hwr_syb_pane_g1

0xc2e1,	// (0x00031736) bg_popup_call_pane_cp01

0x5fe3,	// (0x0002b438) fshwr2_func_candi_cell_pane_ParamLimits

0x5fe3,	// (0x0002b438) fshwr2_func_candi_cell_pane

0x6014,	// (0x0002b469) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6014,	// (0x0002b469) fshwr2_func_candi_cell_bg_pane

0x602e,	// (0x0002b483) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x602e,	// (0x0002b483) fshwr2_func_candi_cell_pane_g1

0x604e,	// (0x0002b4a3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x604e,	// (0x0002b4a3) fshwr2_func_candi_cell_pane_t1

0xc2e1,	// (0x00031736) bg_button_pane_cp08

0xd3ce,	// (0x00032823) cell_fshwr2_syb_bg_pane

0xc208,	// (0x0003165d) cell_fshwr2_syb_bg_pane_g1

0x6061,	// (0x0002b4b6) cell_fshwr2_syb_bg_pane_t1

0xc998,	// (0x00031ded) main_tmo_pane

0xaa87,	// (0x0002fedc) uni_indicator_pane_g1_ParamLimits

0xaa9c,	// (0x0002fef1) uni_indicator_pane_g2_ParamLimits

0xaab1,	// (0x0002ff06) uni_indicator_pane_g3_ParamLimits

0xe886,	// (0x00033cdb) uni_indicator_pane_g4_ParamLimits

0xe886,	// (0x00033cdb) uni_indicator_pane_g4

0xe89a,	// (0x00033cef) uni_indicator_pane_g5_ParamLimits

0xe89a,	// (0x00033cef) uni_indicator_pane_g5

0xe8ae,	// (0x00033d03) uni_indicator_pane_g6_ParamLimits

0xe8ae,	// (0x00033d03) uni_indicator_pane_g6

0xf7ce,	// (0x00034c23) uni_indicator_pane_g_ParamLimits

0xb42e,	// (0x00030883) popup_tmo_note_window_ParamLimits

0xb42e,	// (0x00030883) popup_tmo_note_window

0xc2e1,	// (0x00031736) fshwr2_bg_pane

0x603f,	// (0x0002b494) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x603f,	// (0x0002b494) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfc38,	// (0x0003508d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfc38,	// (0x0003508d) fshwr2_func_candi_cell_pane_g

0x2f3e,	// (0x00028393) bg_popup_window_pane_cp01

0x6070,	// (0x0002b4c5) bg_popup_window_pane_g1_cp01

0x6079,	// (0x0002b4ce) bg_popup_window_pane_cp22_ParamLimits

0x6079,	// (0x0002b4ce) bg_popup_window_pane_cp22

0x6087,	// (0x0002b4dc) listscroll_tmo_link_pane_ParamLimits

0x6087,	// (0x0002b4dc) listscroll_tmo_link_pane

0x60c7,	// (0x0002b51c) popup_tmo_note_window_g1_ParamLimits

0x60c7,	// (0x0002b51c) popup_tmo_note_window_g1

0x60d4,	// (0x0002b529) tmo_note_info_pane_ParamLimits

0x60d4,	// (0x0002b529) tmo_note_info_pane

0xc210,	// (0x00031665) list_tmo_note_info_pane_g1_ParamLimits

0xc210,	// (0x00031665) list_tmo_note_info_pane_g1

0x60ee,	// (0x0002b543) list_tmo_note_info_pane_g2_ParamLimits

0x60ee,	// (0x0002b543) list_tmo_note_info_pane_g2

0x0001,

0xfc3d,	// (0x00035092) list_tmo_note_info_pane_g_ParamLimits

0xfc3d,	// (0x00035092) list_tmo_note_info_pane_g

0x610a,	// (0x0002b55f) list_tmo_note_info_text_pane_ParamLimits

0x610a,	// (0x0002b55f) list_tmo_note_info_text_pane

0x614c,	// (0x0002b5a1) list_tmo_link_pane

0x6159,	// (0x0002b5ae) scroll_pane_cp20

0x6166,	// (0x0002b5bb) list_single_tmo_link_pane_ParamLimits

0x6166,	// (0x0002b5bb) list_single_tmo_link_pane

0x6176,	// (0x0002b5cb) list_single_tmo_link_pane_t1

0x6184,	// (0x0002b5d9) list_tmo_note_info_text_pane_t1_ParamLimits

0x6184,	// (0x0002b5d9) list_tmo_note_info_text_pane_t1

0x9ad2,	// (0x0002ef27) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9ad2,	// (0x0002ef27) aid_size_touch_scroll_bar_cp01

0x9669,	// (0x0002eabe) aid_size_touch_slider_marker

0x88ba,	// (0x0002dd0f) popup_settings_window_ParamLimits

0x88ba,	// (0x0002dd0f) popup_settings_window

0x6ebb,	// (0x0002c310) popup_candi_list_indi_window

0xd75c,	// (0x00032bb1) aid_touch_navi_pane_ParamLimits

0x3a35,	// (0x00028e8a) rs_clock_indi_pane

0x3a3e,	// (0x00028e93) sctrl_sk_bottom_pane_ParamLimits

0x3a4f,	// (0x00028ea4) sctrl_sk_top_pane_ParamLimits

0x3b56,	// (0x00028fab) popup_fep_tooltip_window

0x5d3f,	// (0x0002b194) aid_size_cell_widget_grid_ParamLimits

0xbf99,	// (0x000313ee) cell_ai5_widget_pane_g1_ParamLimits

0xbf99,	// (0x000313ee) cell_ai5_widget_pane_g1

0xbfe1,	// (0x00031436) cell_ai5_widget_pane_g6_ParamLimits

0xbfed,	// (0x00031442) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x0853,	// (0x00025ca8) cell_ai5_widget_pane_g_ParamLimits

0x0853,	// (0x00025ca8) cell_ai5_widget_pane_g

0xc0f1,	// (0x00031546) cell_ai5_widget_pane_t10_ParamLimits

0xc0f1,	// (0x00031546) cell_ai5_widget_pane_t10

0xc103,	// (0x00031558) grid_ai5_widget_pane_ParamLimits

0x5df4,	// (0x0002b249) cell_contacts_ai5_widget_pane_ParamLimits

0x5df4,	// (0x0002b249) cell_contacts_ai5_widget_pane

0x5f65,	// (0x0002b3ba) popup_discreet_window_t3_ParamLimits

0x5f65,	// (0x0002b3ba) popup_discreet_window_t3

0x5fbe,	// (0x0002b413) popup_fshwr2_char_preview_window_ParamLimits

0x5fbe,	// (0x0002b413) popup_fshwr2_char_preview_window

0xc227,	// (0x0003167c) tmo_note_info_pane_t1

0xc23c,	// (0x00031691) tmo_note_info_pane_t2

0xc255,	// (0x000316aa) tmo_note_info_pane_t3

0x6128,	// (0x0002b57d) tmo_note_info_pane_t4

0x613a,	// (0x0002b58f) tmo_note_info_pane_t5

0x0004,

0xfc42,	// (0x00035097) tmo_note_info_pane_t

0x614c,	// (0x0002b5a1) list_tmo_link_pane_ParamLimits

0x6159,	// (0x0002b5ae) scroll_pane_cp20_ParamLimits

0xc2e1,	// (0x00031736) bg_popup_fep_char_preview_window_cp01

0x619d,	// (0x0002b5f2) popup_fshwr2_char_preview_window_t1

0x61ab,	// (0x0002b600) popup_candi_list_indi_window_g1

0x61b4,	// (0x0002b609) bg_cell_contacts_ai5_widget_pane

0x61c0,	// (0x0002b615) cell_contacts_ai5_widget_pane_g1

0x61d4,	// (0x0002b629) cell_contacts_ai5_widget_pane_g2

0x61e3,	// (0x0002b638) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfc4d,	// (0x000350a2) cell_contacts_ai5_widget_pane_g

0x61f6,	// (0x0002b64b) cell_contacts_ai5_widget_pane_t1

0xc998,	// (0x00031ded) highlight_cell_shortcut_ai5_widget_pane_cp01

0x6270,	// (0x0002b6c5) settings_container_pane

0xd3ce,	// (0x00032823) listscroll_set_pane_copy1

0xf08b,	// (0x000344e0) scroll_pane_cp121_copy1

0x627c,	// (0x0002b6d1) set_content_pane_copy1

0x6284,	// (0x0002b6d9) aid_height_set_list_copy1_ParamLimits

0x6284,	// (0x0002b6d9) aid_height_set_list_copy1

0xe844,	// (0x00033c99) aid_size_parent_copy1_ParamLimits

0xe844,	// (0x00033c99) aid_size_parent_copy1

0x6290,	// (0x0002b6e5) button_value_adjust_pane_cp6_copy1_ParamLimits

0x6290,	// (0x0002b6e5) button_value_adjust_pane_cp6_copy1

0xd608,	// (0x00032a5d) list_highlight_pane_cp2_copy1_ParamLimits

0xd608,	// (0x00032a5d) list_highlight_pane_cp2_copy1

0x62a4,	// (0x0002b6f9) list_set_pane_copy1_ParamLimits

0x62a4,	// (0x0002b6f9) list_set_pane_copy1

0x620b,	// (0x0002b660) main_pane_set_t1_copy1_ParamLimits

0x620b,	// (0x0002b660) main_pane_set_t1_copy1

0x6245,	// (0x0002b69a) main_pane_set_t2_copy1_ParamLimits

0x6245,	// (0x0002b69a) main_pane_set_t2_copy1

0x6351,	// (0x0002b7a6) main_pane_set_t3_copy1

0x635f,	// (0x0002b7b4) main_pane_set_t4_copy1

0x6264,	// (0x0002b6b9) set_content_pane_g1_copy1_ParamLimits

0x6264,	// (0x0002b6b9) set_content_pane_g1_copy1

0x636d,	// (0x0002b7c2) setting_code_pane_copy1

0x6377,	// (0x0002b7cc) setting_slider_graphic_pane_copy1

0x6377,	// (0x0002b7cc) setting_slider_pane_copy1

0x6381,	// (0x0002b7d6) setting_text_pane_copy1

0x638b,	// (0x0002b7e0) setting_volume_pane_copy1

0x6394,	// (0x0002b7e9) settings_code_pane_cp2_copy1

0x639c,	// (0x0002b7f1) settings_code_pane_cp_copy1_ParamLimits

0x639c,	// (0x0002b7f1) settings_code_pane_cp_copy1

0x63b0,	// (0x0002b805) volume_set_pane_copy1

0x63b8,	// (0x0002b80d) volume_set_pane_g10_copy1

0x63c0,	// (0x0002b815) volume_set_pane_g1_copy1

0x63c8,	// (0x0002b81d) volume_set_pane_g2_copy1

0x63d0,	// (0x0002b825) volume_set_pane_g3_copy1

0x63d8,	// (0x0002b82d) volume_set_pane_g4_copy1

0x63e0,	// (0x0002b835) volume_set_pane_g5_copy1

0x63e8,	// (0x0002b83d) volume_set_pane_g6_copy1

0x63f0,	// (0x0002b845) volume_set_pane_g7_copy1

0x63f8,	// (0x0002b84d) volume_set_pane_g8_copy1

0x6400,	// (0x0002b855) volume_set_pane_g9_copy1

0xc351,	// (0x000317a6) bg_set_opt_pane_cp_copy1_ParamLimits

0xc351,	// (0x000317a6) bg_set_opt_pane_cp_copy1

0x6408,	// (0x0002b85d) setting_slider_pane_t1_copy1_ParamLimits

0x6408,	// (0x0002b85d) setting_slider_pane_t1_copy1

0x6426,	// (0x0002b87b) setting_slider_pane_t2_copy1_ParamLimits

0x6426,	// (0x0002b87b) setting_slider_pane_t2_copy1

0x6440,	// (0x0002b895) setting_slider_pane_t3_copy1_ParamLimits

0x6440,	// (0x0002b895) setting_slider_pane_t3_copy1

0x6458,	// (0x0002b8ad) slider_set_pane_copy1_ParamLimits

0x6458,	// (0x0002b8ad) slider_set_pane_copy1

0xc9ff,	// (0x00031e54) set_opt_bg_pane_g1_copy2

0xca07,	// (0x00031e5c) set_opt_bg_pane_g2_copy2

0x646e,	// (0x0002b8c3) set_opt_bg_pane_g3_copy2

0xca17,	// (0x00031e6c) set_opt_bg_pane_g4_copy2

0xca1f,	// (0x00031e74) set_opt_bg_pane_g5_copy2

0xca27,	// (0x00031e7c) set_opt_bg_pane_g6_copy2

0x6478,	// (0x0002b8cd) set_opt_bg_pane_g7_copy2

0x6480,	// (0x0002b8d5) set_opt_bg_pane_g8_copy2

0x648a,	// (0x0002b8df) set_opt_bg_pane_g9_copy2

0x427e,	// (0x000296d3) aid_size_touch_slider_mark_copy1_ParamLimits

0x427e,	// (0x000296d3) aid_size_touch_slider_mark_copy1

0x6494,	// (0x0002b8e9) slider_set_pane_g1_copy1

0x4292,	// (0x000296e7) slider_set_pane_g2_copy1

0x2715,	// (0x00027b6a) slider_set_pane_g3_copy1_ParamLimits

0x2715,	// (0x00027b6a) slider_set_pane_g3_copy1

0x2729,	// (0x00027b7e) slider_set_pane_g4_copy1_ParamLimits

0x2729,	// (0x00027b7e) slider_set_pane_g4_copy1

0x2741,	// (0x00027b96) slider_set_pane_g5_copy1_ParamLimits

0x2741,	// (0x00027b96) slider_set_pane_g5_copy1

0x2715,	// (0x00027b6a) slider_set_pane_g6_copy1_ParamLimits

0x2715,	// (0x00027b6a) slider_set_pane_g6_copy1

0x429a,	// (0x000296ef) slider_set_pane_g7_copy1_ParamLimits

0x429a,	// (0x000296ef) slider_set_pane_g7_copy1

0xc2f5,	// (0x0003174a) bg_set_opt_pane_cp2_copy1

0x649d,	// (0x0002b8f2) setting_slider_graphic_pane_g1_copy1

0x64a6,	// (0x0002b8fb) setting_slider_graphic_pane_t1_copy1

0x64b6,	// (0x0002b90b) setting_slider_graphic_pane_t2_copy1

0x64c6,	// (0x0002b91b) slider_set_pane_cp_copy1

0x64d6,	// (0x0002b92b) input_focus_pane_cp1_copy1

0x64df,	// (0x0002b934) list_set_text_pane_copy1

0x64e7,	// (0x0002b93c) setting_text_pane_g1_copy1

0x7662,	// (0x0002cab7) set_text_pane_t1_copy1

0x64d6,	// (0x0002b92b) input_focus_pane_cp2_copy1

0x64e7,	// (0x0002b93c) setting_code_pane_g1_copy1

0x64f0,	// (0x0002b945) setting_code_pane_t1_copy1

0x64fe,	// (0x0002b953) list_set_graphic_pane_copy1

0xc2f5,	// (0x0003174a) bg_set_opt_pane_cp4_copy1

0xd0d0,	// (0x00032525) list_set_graphic_pane_g1_copy1_ParamLimits

0xd0d0,	// (0x00032525) list_set_graphic_pane_g1_copy1

0x6512,	// (0x0002b967) list_set_graphic_pane_g2_copy1

0xd0e8,	// (0x0003253d) list_set_graphic_pane_t1_copy1_ParamLimits

0xd0e8,	// (0x0003253d) list_set_graphic_pane_t1_copy1

0x2f3e,	// (0x00028393) rs_clock_indi_pane_g1

0x651a,	// (0x0002b96f) rs_clock_indi_pane_t1

0x6528,	// (0x0002b97d) rs_indi_pane

0x6530,	// (0x0002b985) rs_indi_pane_g1

0x6539,	// (0x0002b98e) rs_indi_pane_g2

0x6542,	// (0x0002b997) rs_indi_pane_g3

0x0002,

0xfc54,	// (0x000350a9) rs_indi_pane_g

0xd3ce,	// (0x00032823) bg_popup_preview_window_pane_cp03

0x654b,	// (0x0002b9a0) popup_fep_tooltip_window_t1

0x48c5,	// (0x00029d1a) popup_note2_window_g2_ParamLimits

0x48c5,	// (0x00029d1a) popup_note2_window_g2

0x0001,

0xfa32,	// (0x00034e87) popup_note2_window_g_ParamLimits

0xfa32,	// (0x00034e87) popup_note2_window_g

0x4db3,	// (0x0002a208) bg_popup_sub_pane_cp11_ParamLimits

0x4dc0,	// (0x0002a215) cell_ai3_links_pane_g1_ParamLimits

0x4dd7,	// (0x0002a22c) cell_ai3_links_pane_t1

0x7662,	// (0x0002cab7) set_text_pane_t1_copy1_ParamLimits

0xd2dd,	// (0x00032732) cell_graphic_popup_pane_cp2_ParamLimits

0xd2dd,	// (0x00032732) cell_graphic_popup_pane_cp2

0x6559,	// (0x0002b9ae) cell_graphic_popup_pane_g1_cp2

0xc6ed,	// (0x00031b42) cell_graphic_popup_pane_g2_cp2

0x6561,	// (0x0002b9b6) cell_graphic_popup_pane_g3_cp2

0x6569,	// (0x0002b9be) cell_graphic_popup_pane_t2_cp2

0xc6fe,	// (0x00031b53) grid_highlight_pane_cp3_cp2

0xcc8d,	// (0x000320e2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc998,	// (0x00031ded) main_tmo_pane_ParamLimits

0xb422,	// (0x00030877) popup_tmo_big_image_note_window

0xbf89,	// (0x000313de) cell_ai5_widget_list_pane

0xbf91,	// (0x000313e6) cell_ai5_widget_lrg_icon_pane

0xc227,	// (0x0003167c) tmo_note_info_pane_t1_ParamLimits

0xc23c,	// (0x00031691) tmo_note_info_pane_t2_ParamLimits

0xc255,	// (0x000316aa) tmo_note_info_pane_t3_ParamLimits

0x6128,	// (0x0002b57d) tmo_note_info_pane_t4_ParamLimits

0x613a,	// (0x0002b58f) tmo_note_info_pane_t5_ParamLimits

0xfc42,	// (0x00035097) tmo_note_info_pane_t_ParamLimits

0x6270,	// (0x0002b6c5) settings_container_pane_ParamLimits

0x64ce,	// (0x0002b923) indicator_popup_pane_cp5

0x64ce,	// (0x0002b923) indicator_popup_pane_cp6

0x64fe,	// (0x0002b953) list_set_graphic_pane_copy1_ParamLimits

0xc2e1,	// (0x00031736) bg_popup_window_pane_cp23

0x6577,	// (0x0002b9cc) popup_tmo_big_image_note_window_g1

0x6582,	// (0x0002b9d7) popup_tmo_big_image_note_window_t1

0x6592,	// (0x0002b9e7) popup_tmo_big_image_note_window_t2

0x65a2,	// (0x0002b9f7) popup_tmo_big_image_note_window_t3

0x0002,

0xfc5b,	// (0x000350b0) popup_tmo_big_image_note_window_t

0xc26a,	// (0x000316bf) cell_ai5_widget_lrg_icon_pane_g1

0xc272,	// (0x000316c7) cell_ai5_widget_lrg_icon_pane_t1

0xc280,	// (0x000316d5) cell_ai5_widget_list_row_pane_ParamLimits

0xc280,	// (0x000316d5) cell_ai5_widget_list_row_pane

0xc299,	// (0x000316ee) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xc299,	// (0x000316ee) cell_ai5_widget_list_row_pane_g1

0xc2a6,	// (0x000316fb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xc2a6,	// (0x000316fb) cell_ai5_widget_list_row_pane_t1

0xc2be,	// (0x00031713) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xc2be,	// (0x00031713) cell_ai5_widget_list_row_pane_t2

0x0001,

0x08fa,	// (0x00025d4f) cell_ai5_widget_list_row_pane_t_ParamLimits

0x08fa,	// (0x00025d4f) cell_ai5_widget_list_row_pane_t

0x0b3c,	// (0x00025f91) main_fep_vtchi_ss_pane

0x65b2,	// (0x0002ba07) popup_fep_char_pre_window

0x65ba,	// (0x0002ba0f) popup_fep_ituss_window

0x65c5,	// (0x0002ba1a) popup_fep_vkbss_window

0x65ce,	// (0x0002ba23) grid_vkbss_keypad_pane_ParamLimits

0x65ce,	// (0x0002ba23) grid_vkbss_keypad_pane

0x65de,	// (0x0002ba33) ituss_keypad_pane

0x65e6,	// (0x0002ba3b) aid_vkbss_key_offset_ParamLimits

0x65e6,	// (0x0002ba3b) aid_vkbss_key_offset

0x65f5,	// (0x0002ba4a) cell_vkbss_key_pane_ParamLimits

0x65f5,	// (0x0002ba4a) cell_vkbss_key_pane

0x660b,	// (0x0002ba60) bg_cell_vkbss_key_g1_ParamLimits

0x660b,	// (0x0002ba60) bg_cell_vkbss_key_g1

0x6617,	// (0x0002ba6c) cell_vkbss_key_3p_pane_ParamLimits

0x6617,	// (0x0002ba6c) cell_vkbss_key_3p_pane

0x6631,	// (0x0002ba86) cell_vkbss_key_g1_ParamLimits

0x6631,	// (0x0002ba86) cell_vkbss_key_g1

0x664b,	// (0x0002baa0) cell_vkbss_key_t1_ParamLimits

0x664b,	// (0x0002baa0) cell_vkbss_key_t1

0x6676,	// (0x0002bacb) cell_ituss_key_pane_ParamLimits

0x6676,	// (0x0002bacb) cell_ituss_key_pane

0x6685,	// (0x0002bada) bg_cell_ituss_key_g1_ParamLimits

0x6685,	// (0x0002bada) bg_cell_ituss_key_g1

0x6691,	// (0x0002bae6) cell_ituss_key_pane_g1_ParamLimits

0x6691,	// (0x0002bae6) cell_ituss_key_pane_g1

0x669d,	// (0x0002baf2) cell_ituss_key_pane_g2_ParamLimits

0x669d,	// (0x0002baf2) cell_ituss_key_pane_g2

0x0001,

0xfc62,	// (0x000350b7) cell_ituss_key_pane_g_ParamLimits

0xfc62,	// (0x000350b7) cell_ituss_key_pane_g

0x66b0,	// (0x0002bb05) cell_ituss_key_t1_ParamLimits

0x66b0,	// (0x0002bb05) cell_ituss_key_t1

0x66ce,	// (0x0002bb23) cell_ituss_key_t2_ParamLimits

0x66ce,	// (0x0002bb23) cell_ituss_key_t2

0x66ed,	// (0x0002bb42) cell_ituss_key_t3_ParamLimits

0x66ed,	// (0x0002bb42) cell_ituss_key_t3

0x670c,	// (0x0002bb61) cell_ituss_key_t4_ParamLimits

0x670c,	// (0x0002bb61) cell_ituss_key_t4

0x0003,

0xfc67,	// (0x000350bc) cell_ituss_key_t_ParamLimits

0xfc67,	// (0x000350bc) cell_ituss_key_t

0x672b,	// (0x0002bb80) cell_vkbss_key_3p_pane_g1

0x6733,	// (0x0002bb88) cell_vkbss_key_3p_pane_g2

0x673b,	// (0x0002bb90) cell_vkbss_key_3p_pane_g3

0x0002,

0xfc70,	// (0x000350c5) cell_vkbss_key_3p_pane_g

0xc2e1,	// (0x00031736) bg_popup_fep_char_preview_window_cp02

0x6743,	// (0x0002bb98) popup_fep_char_pre_window_t1

0xbf7f,	// (0x000313d4) main_ai5_sk_pane

0x61b4,	// (0x0002b609) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x61c0,	// (0x0002b615) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x61d4,	// (0x0002b629) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x61e3,	// (0x0002b638) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfc4d,	// (0x000350a2) cell_contacts_ai5_widget_pane_g_ParamLimits

0x61f6,	// (0x0002b64b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc998,	// (0x00031ded) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xc2d0,	// (0x00031725) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
