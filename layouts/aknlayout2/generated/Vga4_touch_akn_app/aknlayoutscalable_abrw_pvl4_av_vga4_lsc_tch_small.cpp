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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00037fe2 };

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
0x9171,	// (0x00041153) Screen

0x917d,	// (0x0004115f) application_window_ParamLimits

0x917d,	// (0x0004115f) application_window

0x7bd1,	// (0x0003fbb3) screen_g1

0x91b5,	// (0x00041197) area_bottom_pane_ParamLimits

0x91b5,	// (0x00041197) area_bottom_pane

0xecb1,	// (0x00046c93) area_top_pane_ParamLimits

0xecb1,	// (0x00046c93) area_top_pane

0xed4f,	// (0x00046d31) main_pane_ParamLimits

0xed4f,	// (0x00046d31) main_pane

0x7bdb,	// (0x0003fbbd) misc_graphics

0xabda,	// (0x00042bbc) battery_pane_ParamLimits

0xabda,	// (0x00042bbc) battery_pane

0x2b40,	// (0x0003ab22) bg_status_flat_pane_g8

0x2b48,	// (0x0003ab2a) bg_status_flat_pane_g9

0x1f4a,	// (0x00039f2c) context_pane_ParamLimits

0x1f4a,	// (0x00039f2c) context_pane

0xad51,	// (0x00042d33) navi_pane_ParamLimits

0xad51,	// (0x00042d33) navi_pane

0xaddb,	// (0x00042dbd) signal_pane_ParamLimits

0xaddb,	// (0x00042dbd) signal_pane

0x0008,

0xf874,	// (0x00047856) bg_status_flat_pane_g

0xae6b,	// (0x00042e4d) status_pane_g1_ParamLimits

0xae6b,	// (0x00042e4d) status_pane_g1

0xae81,	// (0x00042e63) status_pane_g2_ParamLimits

0xae81,	// (0x00042e63) status_pane_g2

0x218b,	// (0x0003a16d) status_pane_g3_ParamLimits

0x218b,	// (0x0003a16d) status_pane_g3

0x0004,

0xf7a0,	// (0x00047782) status_pane_g_ParamLimits

0xf7a0,	// (0x00047782) status_pane_g

0xae8d,	// (0x00042e6f) title_pane_ParamLimits

0xae8d,	// (0x00042e6f) title_pane

0xaef0,	// (0x00042ed2) uni_indicator_pane_ParamLimits

0xaef0,	// (0x00042ed2) uni_indicator_pane

0x0090,	// (0x00038072) bg_list_pane_ParamLimits

0x0090,	// (0x00038072) bg_list_pane

0xa3fa,	// (0x000423dc) find_pane

0xa402,	// (0x000423e4) listscroll_app_pane_ParamLimits

0xa402,	// (0x000423e4) listscroll_app_pane

0x00c4,	// (0x000380a6) listscroll_form_pane

0xa412,	// (0x000423f4) listscroll_gen_pane_ParamLimits

0xa412,	// (0x000423f4) listscroll_gen_pane

0x00e0,	// (0x000380c2) listscroll_set_pane

0x36df,	// (0x0003b6c1) main_idle_act_pane

0xc36b,	// (0x0004434d) main_idle_trad_pane

0xc36b,	// (0x0004434d) main_list_empty_pane

0x00fa,	// (0x000380dc) main_midp_pane

0x0106,	// (0x000380e8) main_pane_g1_ParamLimits

0x0106,	// (0x000380e8) main_pane_g1

0xa434,	// (0x00042416) popup_ai_message_window_ParamLimits

0xa434,	// (0x00042416) popup_ai_message_window

0xa4d4,	// (0x000424b6) popup_fep_china_uni_window_ParamLimits

0xa4d4,	// (0x000424b6) popup_fep_china_uni_window

0x0228,	// (0x0003820a) popup_fep_japan_candidate_window_ParamLimits

0x0228,	// (0x0003820a) popup_fep_japan_candidate_window

0x0252,	// (0x00038234) popup_fep_japan_predictive_window_ParamLimits

0x0252,	// (0x00038234) popup_fep_japan_predictive_window

0xa534,	// (0x00042516) popup_find_window

0xa551,	// (0x00042533) popup_grid_graphic_window_ParamLimits

0xa551,	// (0x00042533) popup_grid_graphic_window

0x02c3,	// (0x000382a5) popup_large_graphic_colour_window

0xa5f5,	// (0x000425d7) popup_menu_window_ParamLimits

0xa5f5,	// (0x000425d7) popup_menu_window

0xa7e5,	// (0x000427c7) popup_note_image_window

0xa7a5,	// (0x00042787) popup_note_wait_window_ParamLimits

0xa7a5,	// (0x00042787) popup_note_wait_window

0xa7fd,	// (0x000427df) popup_note_window_ParamLimits

0xa7fd,	// (0x000427df) popup_note_window

0xa8ab,	// (0x0004288d) popup_query_code_window_ParamLimits

0xa8ab,	// (0x0004288d) popup_query_code_window

0x1c0a,	// (0x00039bec) popup_query_data_code_window_ParamLimits

0x1c0a,	// (0x00039bec) popup_query_data_code_window

0xa8eb,	// (0x000428cd) popup_query_data_window_ParamLimits

0xa8eb,	// (0x000428cd) popup_query_data_window

0xa97f,	// (0x00042961) popup_query_sat_info_window_ParamLimits

0xa97f,	// (0x00042961) popup_query_sat_info_window

0xaa2a,	// (0x00042a0c) popup_snote_single_graphic_window_ParamLimits

0xaa2a,	// (0x00042a0c) popup_snote_single_graphic_window

0xaa2a,	// (0x00042a0c) popup_snote_single_text_window_ParamLimits

0xaa2a,	// (0x00042a0c) popup_snote_single_text_window

0x1ca5,	// (0x00039c87) popup_sub_window_general

0x1deb,	// (0x00039dcd) popup_window_general_ParamLimits

0x1deb,	// (0x00039dcd) popup_window_general

0x1e04,	// (0x00039de6) power_save_pane

0xa268,	// (0x0004224a) control_pane_g1_ParamLimits

0xa268,	// (0x0004224a) control_pane_g1

0xa291,	// (0x00042273) control_pane_g2_ParamLimits

0xa291,	// (0x00042273) control_pane_g2

0xf531,	// (0x00047513) control_pane_g3_ParamLimits

0xf531,	// (0x00047513) control_pane_g3

0x0007,

0xf788,	// (0x0004776a) control_pane_g_ParamLimits

0xf788,	// (0x0004776a) control_pane_g

0xa2f3,	// (0x000422d5) control_pane_t1_ParamLimits

0xa2f3,	// (0x000422d5) control_pane_t1

0xa351,	// (0x00042333) control_pane_t2_ParamLimits

0xa351,	// (0x00042333) control_pane_t2

0x0002,

0xf799,	// (0x0004777b) control_pane_t_ParamLimits

0xf799,	// (0x0004777b) control_pane_t

0xa1c1,	// (0x000421a3) navi_navi_volume_pane_cp1

0xa1c9,	// (0x000421ab) status_small_icon_pane

0xf4fd,	// (0x000474df) status_small_pane_g1_ParamLimits

0xf4fd,	// (0x000474df) status_small_pane_g1

0xa1d1,	// (0x000421b3) status_small_pane_g2_ParamLimits

0xa1d1,	// (0x000421b3) status_small_pane_g2

0xa1dd,	// (0x000421bf) status_small_pane_g3_ParamLimits

0xa1dd,	// (0x000421bf) status_small_pane_g3

0xa1e9,	// (0x000421cb) status_small_pane_g4_ParamLimits

0xa1e9,	// (0x000421cb) status_small_pane_g4

0xa1f5,	// (0x000421d7) status_small_pane_g5_ParamLimits

0xa1f5,	// (0x000421d7) status_small_pane_g5

0xa203,	// (0x000421e5) status_small_pane_g6_ParamLimits

0xa203,	// (0x000421e5) status_small_pane_g6

0x0007,

0xf777,	// (0x00047759) status_small_pane_g_ParamLimits

0xf777,	// (0x00047759) status_small_pane_g

0xa232,	// (0x00042214) status_small_pane_t1

0xa254,	// (0x00042236) status_small_wait_pane_ParamLimits

0xa254,	// (0x00042236) status_small_wait_pane

0x9f00,	// (0x00041ee2) aid_levels_signal_ParamLimits

0x9f00,	// (0x00041ee2) aid_levels_signal

0x9f18,	// (0x00041efa) signal_pane_g1_ParamLimits

0x9f18,	// (0x00041efa) signal_pane_g1

0x9f33,	// (0x00041f15) signal_pane_g2_ParamLimits

0x9f33,	// (0x00041f15) signal_pane_g2

0x0003,

0xf708,	// (0x000476ea) signal_pane_g_ParamLimits

0xf708,	// (0x000476ea) signal_pane_g

0xbf53,	// (0x00043f35) context_pane_g1

0x93a1,	// (0x00041383) title_pane_g1

0x93cc,	// (0x000413ae) title_pane_t1

0x7bfd,	// (0x0003fbdf) title_pane_t2

0x7c23,	// (0x0003fc05) title_pane_t3

0x0002,

0xf557,	// (0x00047539) title_pane_t

0xaf18,	// (0x00042efa) aid_levels_battery_ParamLimits

0xaf18,	// (0x00042efa) aid_levels_battery

0xc373,	// (0x00044355) battery_pane_g1_ParamLimits

0xc373,	// (0x00044355) battery_pane_g1

0xc390,	// (0x00044372) battery_pane_g2_ParamLimits

0xc390,	// (0x00044372) battery_pane_g2

0x0001,

0xf7ab,	// (0x0004778d) battery_pane_g_ParamLimits

0xf7ab,	// (0x0004778d) battery_pane_g

0xc646,	// (0x00044628) uni_indicator_pane_g1

0xc65c,	// (0x0004463e) uni_indicator_pane_g2

0xc672,	// (0x00044654) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x000478fe) uni_indicator_pane_g

0xc201,	// (0x000441e3) navi_icon_pane_ParamLimits

0xc201,	// (0x000441e3) navi_icon_pane

0xc185,	// (0x00044167) navi_midp_pane

0xc21d,	// (0x000441ff) navi_navi_pane

0xc227,	// (0x00044209) navi_text_pane_ParamLimits

0xc227,	// (0x00044209) navi_text_pane

0x7bd1,	// (0x0003fbb3) status_small_wait_pane_g1

0x84d6,	// (0x000404b8) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x000478f9) status_small_wait_pane_g

0xc5ad,	// (0x0004458f) navi_navi_icon_text_pane

0xc5b5,	// (0x00044597) navi_navi_pane_g1_ParamLimits

0xc5b5,	// (0x00044597) navi_navi_pane_g1

0xc5c7,	// (0x000445a9) navi_navi_pane_g2_ParamLimits

0xc5c7,	// (0x000445a9) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x000478c7) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x000478c7) navi_navi_pane_g

0x31c9,	// (0x0003b1ab) navi_navi_tabs_pane

0xc5d9,	// (0x000445bb) navi_navi_text_pane

0xc5ad,	// (0x0004458f) navi_navi_volume_pane

0xc59b,	// (0x0004457d) navi_text_pane_t1

0xc58f,	// (0x00044571) navi_icon_pane_g1

0x30c0,	// (0x0003b0a2) navi_navi_text_pane_t1

0xb11c,	// (0x000430fe) navi_navi_volume_pane_g1

0xb124,	// (0x00043106) volume_small_pane

0xc4d7,	// (0x000444b9) navi_navi_icon_text_pane_g1

0xc4df,	// (0x000444c1) navi_navi_icon_text_pane_t1

0xc21d,	// (0x000441ff) navi_tabs_2_long_pane

0xc21d,	// (0x000441ff) navi_tabs_2_pane

0xc21d,	// (0x000441ff) navi_tabs_3_long_pane

0xc21d,	// (0x000441ff) navi_tabs_3_pane

0xc21d,	// (0x000441ff) navi_tabs_4_pane

0xb0fc,	// (0x000430de) tabs_2_active_pane_ParamLimits

0xb0fc,	// (0x000430de) tabs_2_active_pane

0xb10c,	// (0x000430ee) tabs_2_passive_pane_ParamLimits

0xb10c,	// (0x000430ee) tabs_2_passive_pane

0xb0ca,	// (0x000430ac) tabs_3_active_pane_ParamLimits

0xb0ca,	// (0x000430ac) tabs_3_active_pane

0xb0da,	// (0x000430bc) tabs_3_passive_pane_ParamLimits

0xb0da,	// (0x000430bc) tabs_3_passive_pane

0xb0eb,	// (0x000430cd) tabs_3_passive_pane_cp_ParamLimits

0xb0eb,	// (0x000430cd) tabs_3_passive_pane_cp

0xb086,	// (0x00043068) tabs_4_active_pane_ParamLimits

0xb086,	// (0x00043068) tabs_4_active_pane

0xb097,	// (0x00043079) tabs_4_passive_pane_ParamLimits

0xb097,	// (0x00043079) tabs_4_passive_pane

0xb0a8,	// (0x0004308a) tabs_4_passive_pane_cp_ParamLimits

0xb0a8,	// (0x0004308a) tabs_4_passive_pane_cp

0xb0b9,	// (0x0004309b) tabs_4_passive_pane_cp2_ParamLimits

0xb0b9,	// (0x0004309b) tabs_4_passive_pane_cp2

0xb062,	// (0x00043044) tabs_2_long_active_pane_ParamLimits

0xb062,	// (0x00043044) tabs_2_long_active_pane

0xb074,	// (0x00043056) tabs_2_long_passive_pane_ParamLimits

0xb074,	// (0x00043056) tabs_2_long_passive_pane

0xb017,	// (0x00042ff9) tabs_3_long_active_pane_ParamLimits

0xb017,	// (0x00042ff9) tabs_3_long_active_pane

0xb030,	// (0x00043012) tabs_3_long_passive_pane_ParamLimits

0xb030,	// (0x00043012) tabs_3_long_passive_pane

0xb049,	// (0x0004302b) tabs_3_long_passive_pane_cp_ParamLimits

0xb049,	// (0x0004302b) tabs_3_long_passive_pane_cp

0x0609,	// (0x000385eb) volume_small_pane_g1

0xafc6,	// (0x00042fa8) volume_small_pane_g2

0xafcf,	// (0x00042fb1) volume_small_pane_g3

0xafd8,	// (0x00042fba) volume_small_pane_g4

0xafe1,	// (0x00042fc3) volume_small_pane_g5

0xafea,	// (0x00042fcc) volume_small_pane_g6

0xaff3,	// (0x00042fd5) volume_small_pane_g7

0xaffc,	// (0x00042fde) volume_small_pane_g8

0xb005,	// (0x00042fe7) volume_small_pane_g9

0xb00e,	// (0x00042ff0) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00047893) volume_small_pane_g

0x7d68,	// (0x0003fd4a) bg_active_tab_pane_cp2_ParamLimits

0x7d68,	// (0x0003fd4a) bg_active_tab_pane_cp2

0x9458,	// (0x0004143a) tabs_3_active_pane_g1

0x9460,	// (0x00041442) tabs_3_active_pane_t1

0x7d68,	// (0x0003fd4a) bg_passive_tab_pane_cp2_ParamLimits

0x7d68,	// (0x0003fd4a) bg_passive_tab_pane_cp2

0x9458,	// (0x0004143a) tabs_3_passive_pane_g1

0x9460,	// (0x00041442) tabs_3_passive_pane_t1

0x7d68,	// (0x0003fd4a) bg_active_tab_pane_cp3_ParamLimits

0x7d68,	// (0x0003fd4a) bg_active_tab_pane_cp3

0x9472,	// (0x00041454) tabs_4_active_pane_g1

0x947a,	// (0x0004145c) tabs_4_active_pane_t1

0x7d68,	// (0x0003fd4a) bg_passive_tab_pane_cp3_ParamLimits

0x7d68,	// (0x0003fd4a) bg_passive_tab_pane_cp3

0x9472,	// (0x00041454) tabs_4_1_passive_pane_g1

0x947a,	// (0x0004145c) tabs_4_1_passive_pane_t1

0x00fa,	// (0x000380dc) list_highlight_pane_cp2

0xc707,	// (0x000446e9) list_set_pane_ParamLimits

0xc707,	// (0x000446e9) list_set_pane

0xc7cf,	// (0x000447b1) main_pane_set_t1_ParamLimits

0xc7cf,	// (0x000447b1) main_pane_set_t1

0xc7ef,	// (0x000447d1) main_pane_set_t2_ParamLimits

0xc7ef,	// (0x000447d1) main_pane_set_t2

0xc803,	// (0x000447e5) main_pane_set_t3_ParamLimits

0xc803,	// (0x000447e5) main_pane_set_t3

0xc817,	// (0x000447f9) main_pane_set_t4_ParamLimits

0xc817,	// (0x000447f9) main_pane_set_t4

0x0003,

0xf981,	// (0x00047963) main_pane_set_t_ParamLimits

0xf981,	// (0x00047963) main_pane_set_t

0xc82b,	// (0x0004480d) setting_code_pane

0x3833,	// (0x0003b815) setting_slider_graphic_pane

0x3833,	// (0x0003b815) setting_slider_pane

0x3833,	// (0x0003b815) setting_text_pane

0x3833,	// (0x0003b815) setting_volume_pane

0xee5e,	// (0x00046e40) volume_set_pane

0x7c35,	// (0x0003fc17) bg_set_opt_pane_cp

0xee68,	// (0x00046e4a) setting_slider_pane_t1

0xee81,	// (0x00046e63) setting_slider_pane_t2

0xee9b,	// (0x00046e7d) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00047540) setting_slider_pane_t

0xeeb3,	// (0x00046e95) slider_set_pane

0x7bdb,	// (0x0003fbbd) bg_set_opt_pane_cp2

0x7c43,	// (0x0003fc25) setting_slider_graphic_pane_g1

0xeec9,	// (0x00046eab) setting_slider_graphic_pane_t1

0xeed9,	// (0x00046ebb) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00047547) setting_slider_graphic_pane_t

0xeee9,	// (0x00046ecb) slider_set_pane_cp

0x7bdb,	// (0x0003fbbd) input_focus_pane_cp1

0x36c6,	// (0x0003b6a8) list_set_text_pane

0x7bd1,	// (0x0003fbb3) setting_text_pane_g1

0x7bdb,	// (0x0003fbbd) input_focus_pane_cp2

0x7bd1,	// (0x0003fbb3) setting_code_pane_g1

0x7c4c,	// (0x0003fc2e) setting_code_pane_t1

0xda11,	// (0x000459f3) set_text_pane_t1_ParamLimits

0xda11,	// (0x000459f3) set_text_pane_t1

0xba75,	// (0x00043a57) set_opt_bg_pane_g1

0xba7d,	// (0x00043a5f) set_opt_bg_pane_g2

0x369e,	// (0x0003b680) set_opt_bg_pane_g3

0xba8d,	// (0x00043a6f) set_opt_bg_pane_g4

0xba95,	// (0x00043a77) set_opt_bg_pane_g5

0xba9d,	// (0x00043a7f) set_opt_bg_pane_g6

0x36a8,	// (0x0003b68a) set_opt_bg_pane_g7

0x36b2,	// (0x0003b694) set_opt_bg_pane_g8

0x36bc,	// (0x0003b69e) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00047950) set_opt_bg_pane_g

0x3691,	// (0x0003b673) slider_set_pane_g1

0x0815,	// (0x000387f7) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00047941) slider_set_pane_g

0x0775,	// (0x00038757) volume_set_pane_g1

0x077f,	// (0x00038761) volume_set_pane_g2

0x0789,	// (0x0003876b) volume_set_pane_g3

0x0793,	// (0x00038775) volume_set_pane_g4

0x079d,	// (0x0003877f) volume_set_pane_g5

0x07a7,	// (0x00038789) volume_set_pane_g6

0x07b1,	// (0x00038793) volume_set_pane_g7

0x07bb,	// (0x0003879d) volume_set_pane_g8

0x07c5,	// (0x000387a7) volume_set_pane_g9

0x07cf,	// (0x000387b1) volume_set_pane_g10

0x0009,

0xf937,	// (0x00047919) volume_set_pane_g

0x948c,	// (0x0004146e) indicator_pane_ParamLimits

0x948c,	// (0x0004146e) indicator_pane

0x94b8,	// (0x0004149a) main_idle_pane_g2_ParamLimits

0x94b8,	// (0x0004149a) main_idle_pane_g2

0x94f0,	// (0x000414d2) main_pane_idle_g1_ParamLimits

0x94f0,	// (0x000414d2) main_pane_idle_g1

0x7c5a,	// (0x0003fc3c) popup_clock_digital_analogue_window_ParamLimits

0x7c5a,	// (0x0003fc3c) popup_clock_digital_analogue_window

0x951e,	// (0x00041500) soft_indicator_pane_ParamLimits

0x951e,	// (0x00041500) soft_indicator_pane

0x953a,	// (0x0004151c) wallpaper_pane_ParamLimits

0x953a,	// (0x0004151c) wallpaper_pane

0x7bd1,	// (0x0003fbb3) wallpaper_pane_g1

0x954c,	// (0x0004152e) indicator_pane_g1_ParamLimits

0x954c,	// (0x0004152e) indicator_pane_g1

0x3b0f,	// (0x0003baf1) navi_navi_icon_text_pane_srt_g1

0x7c88,	// (0x0003fc6a) soft_indicator_pane_t1

0x7ca2,	// (0x0003fc84) aid_ps_area_pane

0x9565,	// (0x00041547) aid_ps_clock_pane

0x7cb3,	// (0x0003fc95) aid_ps_indicator_pane

0x7cbf,	// (0x0003fca1) indicator_ps_pane_ParamLimits

0x7cbf,	// (0x0003fca1) indicator_ps_pane

0x7cce,	// (0x0003fcb0) power_save_pane_g1_ParamLimits

0x7cce,	// (0x0003fcb0) power_save_pane_g1

0x7cda,	// (0x0003fcbc) power_save_pane_g2_ParamLimits

0x7cda,	// (0x0003fcbc) power_save_pane_g2

0xec91,	// (0x00046c73) aid_navinavi_width_pane

0x7ca2,	// (0x0003fc84) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004754c) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004754c) power_save_pane_g

0x7ce8,	// (0x0003fcca) power_save_pane_t1_ParamLimits

0x7ce8,	// (0x0003fcca) power_save_pane_t1

0x9565,	// (0x00041547) aid_ps_clock_pane_ParamLimits

0x7cb3,	// (0x0003fc95) aid_ps_indicator_pane_ParamLimits

0x7cfa,	// (0x0003fcdc) power_save_pane_t4_ParamLimits

0x7cfa,	// (0x0003fcdc) power_save_pane_t4

0x0001,

0xf56f,	// (0x00047551) power_save_pane_t_ParamLimits

0xf56f,	// (0x00047551) power_save_pane_t

0x7d24,	// (0x0003fd06) power_save_t3_ParamLimits

0x7d24,	// (0x0003fd06) power_save_t3

0x7d0f,	// (0x0003fcf1) power_save_t2_ParamLimits

0x7d0f,	// (0x0003fcf1) power_save_t2

0x7d39,	// (0x0003fd1b) indicator_ps_pane_g1

0x9573,	// (0x00041555) ai_gene_pane_ParamLimits

0x9573,	// (0x00041555) ai_gene_pane

0x958a,	// (0x0004156c) ai_links_pane_ParamLimits

0x958a,	// (0x0004156c) ai_links_pane

0x95a2,	// (0x00041584) indicator_pane_cp1_ParamLimits

0x95a2,	// (0x00041584) indicator_pane_cp1

0x95b1,	// (0x00041593) main_pane_idle_g1_cp_ParamLimits

0x95b1,	// (0x00041593) main_pane_idle_g1_cp

0x7d42,	// (0x0003fd24) popup_ai_links_title_window

0x95c9,	// (0x000415ab) soft_indicator_pane_cp1_ParamLimits

0x95c9,	// (0x000415ab) soft_indicator_pane_cp1

0x3478,	// (0x0003b45a) ai_links_pane_g1

0x3481,	// (0x0003b463) grid_ai_links_pane

0xc63d,	// (0x0004461f) ai_gene_pane_1

0x3466,	// (0x0003b448) ai_gene_pane_2

0x346f,	// (0x0003b451) list_highlight_pane_cp4

0xc619,	// (0x000445fb) cell_ai_link_pane_ParamLimits

0xc619,	// (0x000445fb) cell_ai_link_pane

0x3435,	// (0x0003b417) cell_ai_link_pane_g1

0x84d6,	// (0x000404b8) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x000478f4) cell_ai_link_pane_g

0x7bdb,	// (0x0003fbbd) grid_highlight_cp2

0x7bdb,	// (0x0003fbbd) bg_popup_sub_pane_cp1

0x7d59,	// (0x0003fd3b) popup_ai_links_title_window_t1

0x3381,	// (0x0003b363) ai_gene_pane_1_g1_ParamLimits

0x3381,	// (0x0003b363) ai_gene_pane_1_g1

0x338d,	// (0x0003b36f) ai_gene_pane_1_g2_ParamLimits

0x338d,	// (0x0003b36f) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x000478ea) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x000478ea) ai_gene_pane_1_g

0x339a,	// (0x0003b37c) ai_gene_pane_1_t1_ParamLimits

0x339a,	// (0x0003b37c) ai_gene_pane_1_t1

0x33ce,	// (0x0003b3b0) grid_ai_soft_ind_pane

0x336c,	// (0x0003b34e) ai_gene_pane_2_t1_ParamLimits

0x336c,	// (0x0003b34e) ai_gene_pane_2_t1

0x95dd,	// (0x000415bf) main_pane_empty_t1_ParamLimits

0x95dd,	// (0x000415bf) main_pane_empty_t1

0x95f5,	// (0x000415d7) main_pane_empty_t2_ParamLimits

0x95f5,	// (0x000415d7) main_pane_empty_t2

0x960a,	// (0x000415ec) main_pane_empty_t3_ParamLimits

0x960a,	// (0x000415ec) main_pane_empty_t3

0x961c,	// (0x000415fe) main_pane_empty_t4_ParamLimits

0x961c,	// (0x000415fe) main_pane_empty_t4

0x962e,	// (0x00041610) main_pane_empty_t5_ParamLimits

0x962e,	// (0x00041610) main_pane_empty_t5

0x0004,

0xf574,	// (0x00047556) main_pane_empty_t_ParamLimits

0xf574,	// (0x00047556) main_pane_empty_t

0xbac6,	// (0x00043aa8) bg_popup_window_pane_ParamLimits

0xbac6,	// (0x00043aa8) bg_popup_window_pane

0x30ce,	// (0x0003b0b0) find_popup_pane_cp2_ParamLimits

0x30ce,	// (0x0003b0b0) find_popup_pane_cp2

0x30da,	// (0x0003b0bc) heading_pane_ParamLimits

0x30da,	// (0x0003b0bc) heading_pane

0x7bdb,	// (0x0003fbbd) bg_popup_sub_pane

0xc4fc,	// (0x000444de) bg_popup_window_pane_g1_ParamLimits

0xc4fc,	// (0x000444de) bg_popup_window_pane_g1

0xc50b,	// (0x000444ed) bg_popup_window_pane_g2_ParamLimits

0xc50b,	// (0x000444ed) bg_popup_window_pane_g2

0xc517,	// (0x000444f9) bg_popup_window_pane_g3_ParamLimits

0xc517,	// (0x000444f9) bg_popup_window_pane_g3

0xc523,	// (0x00044505) bg_popup_window_pane_g4_ParamLimits

0xc523,	// (0x00044505) bg_popup_window_pane_g4

0xc532,	// (0x00044514) bg_popup_window_pane_g5_ParamLimits

0xc532,	// (0x00044514) bg_popup_window_pane_g5

0xc542,	// (0x00044524) bg_popup_window_pane_g6_ParamLimits

0xc542,	// (0x00044524) bg_popup_window_pane_g6

0xc54e,	// (0x00044530) bg_popup_window_pane_g7_ParamLimits

0xc54e,	// (0x00044530) bg_popup_window_pane_g7

0xc55d,	// (0x0004453f) bg_popup_window_pane_g8_ParamLimits

0xc55d,	// (0x0004453f) bg_popup_window_pane_g8

0xc56c,	// (0x0004454e) bg_popup_window_pane_g9_ParamLimits

0xc56c,	// (0x0004454e) bg_popup_window_pane_g9

0x30b4,	// (0x0003b096) bg_popup_window_pane_g10_ParamLimits

0x30b4,	// (0x0003b096) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x000478b2) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x000478b2) bg_popup_window_pane_g

0x2fdd,	// (0x0003afbf) bg_popup_heading_pane_ParamLimits

0x2fdd,	// (0x0003afbf) bg_popup_heading_pane

0x0926,	// (0x00038908) tabs_4_passive_pane_cp_srt_ParamLimits

0x0926,	// (0x00038908) tabs_4_passive_pane_cp_srt

0x0938,	// (0x0003891a) tabs_4_passive_pane_srt_ParamLimits

0x2ff1,	// (0x0003afd3) heading_pane_g2

0x0938,	// (0x0003891a) tabs_4_passive_pane_srt

0x238a,	// (0x0003a36c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x238a,	// (0x0003a36c) bg_passive_tab_pane_cp3_srt

0x2ff9,	// (0x0003afdb) heading_pane_t1_ParamLimits

0x2ff9,	// (0x0003afdb) heading_pane_t1

0x3010,	// (0x0003aff2) heading_pane_t2_ParamLimits

0x3010,	// (0x0003aff2) heading_pane_t2

0x0001,

0xf8cb,	// (0x000478ad) heading_pane_t_ParamLimits

0xf8cb,	// (0x000478ad) heading_pane_t

0x2b08,	// (0x0003aaea) bg_popup_heading_pane_g1

0x2bb7,	// (0x0003ab99) bg_popup_heading_pane_g2

0x2bc1,	// (0x0003aba3) bg_popup_heading_pane_g3

0x2bcb,	// (0x0003abad) bg_popup_heading_pane_g4

0x2bd5,	// (0x0003abb7) bg_popup_heading_pane_g5

0x2bdf,	// (0x0003abc1) bg_popup_heading_pane_g6

0x2be7,	// (0x0003abc9) bg_popup_heading_pane_g7

0x2bef,	// (0x0003abd1) bg_popup_heading_pane_g8

0x2bf9,	// (0x0003abdb) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x00047869) bg_popup_heading_pane_g

0x2316,	// (0x0003a2f8) bg_popup_sub_pane_g1

0x2326,	// (0x0003a308) bg_popup_sub_pane_g2

0x231e,	// (0x0003a300) bg_popup_sub_pane_g3

0x2336,	// (0x0003a318) bg_popup_sub_pane_g4

0x232e,	// (0x0003a310) bg_popup_sub_pane_g5

0x233e,	// (0x0003a320) bg_popup_sub_pane_g6

0x2346,	// (0x0003a328) bg_popup_sub_pane_g7

0x2356,	// (0x0003a338) bg_popup_sub_pane_g8

0x234e,	// (0x0003a330) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00047843) bg_popup_sub_pane_g

0x7d68,	// (0x0003fd4a) bg_popup_window_pane_cp5_ParamLimits

0x7d68,	// (0x0003fd4a) bg_popup_window_pane_cp5

0x7d84,	// (0x0003fd66) popup_note_window_g1_ParamLimits

0x7d84,	// (0x0003fd66) popup_note_window_g1

0x7d90,	// (0x0003fd72) popup_note_window_t1_ParamLimits

0x7d90,	// (0x0003fd72) popup_note_window_t1

0x7da6,	// (0x0003fd88) popup_note_window_t2_ParamLimits

0x7da6,	// (0x0003fd88) popup_note_window_t2

0x7dbc,	// (0x0003fd9e) popup_note_window_t3_ParamLimits

0x7dbc,	// (0x0003fd9e) popup_note_window_t3

0x7dd2,	// (0x0003fdb4) popup_note_window_t4_ParamLimits

0x7dd2,	// (0x0003fdb4) popup_note_window_t4

0x7dfa,	// (0x0003fddc) popup_note_window_t5_ParamLimits

0x7dfa,	// (0x0003fddc) popup_note_window_t5

0x0004,

0xf57f,	// (0x00047561) popup_note_window_t_ParamLimits

0xf57f,	// (0x00047561) popup_note_window_t

0x7e1e,	// (0x0003fe00) bg_popup_window_pane_cp6_ParamLimits

0x7e1e,	// (0x0003fe00) bg_popup_window_pane_cp6

0x2a84,	// (0x0003aa66) popup_note_image_window_g1_ParamLimits

0x2a84,	// (0x0003aa66) popup_note_image_window_g1

0x2a90,	// (0x0003aa72) popup_note_image_window_g2_ParamLimits

0x2a90,	// (0x0003aa72) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00047837) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00047837) popup_note_image_window_g

0x2aa9,	// (0x0003aa8b) popup_note_image_window_t1_ParamLimits

0x2aa9,	// (0x0003aa8b) popup_note_image_window_t1

0x2ac2,	// (0x0003aaa4) popup_note_image_window_t2_ParamLimits

0x2ac2,	// (0x0003aaa4) popup_note_image_window_t2

0x2adb,	// (0x0003aabd) popup_note_image_window_t3_ParamLimits

0x2adb,	// (0x0003aabd) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0004783c) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0004783c) popup_note_image_window_t

0x2944,	// (0x0003a926) bg_popup_window_pane_cp7_ParamLimits

0x2944,	// (0x0003a926) bg_popup_window_pane_cp7

0x2974,	// (0x0003a956) popup_note_wait_window_g1_ParamLimits

0x2974,	// (0x0003a956) popup_note_wait_window_g1

0x2980,	// (0x0003a962) popup_note_wait_window_g2_ParamLimits

0x2980,	// (0x0003a962) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00047825) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00047825) popup_note_wait_window_g

0x2998,	// (0x0003a97a) popup_note_wait_window_t1_ParamLimits

0x2998,	// (0x0003a97a) popup_note_wait_window_t1

0x29bf,	// (0x0003a9a1) popup_note_wait_window_t2_ParamLimits

0x29bf,	// (0x0003a9a1) popup_note_wait_window_t2

0x29dd,	// (0x0003a9bf) popup_note_wait_window_t3_ParamLimits

0x29dd,	// (0x0003a9bf) popup_note_wait_window_t3

0x29f0,	// (0x0003a9d2) popup_note_wait_window_t4_ParamLimits

0x29f0,	// (0x0003a9d2) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0004782c) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0004782c) popup_note_wait_window_t

0x2a15,	// (0x0003a9f7) wait_bar_pane_ParamLimits

0x2a15,	// (0x0003a9f7) wait_bar_pane

0x7bdb,	// (0x0003fbbd) wait_anim_pane

0x7bdb,	// (0x0003fbbd) wait_border_pane

0x7bd1,	// (0x0003fbb3) wait_anim_pane_g1

0x7bd1,	// (0x0003fbb3) wait_anim_pane_g2

0x0001,

0xf703,	// (0x000476e5) wait_anim_pane_g

0x28e8,	// (0x0003a8ca) wait_border_pane_g1

0x28f3,	// (0x0003a8d5) wait_border_pane_g2

0x28fc,	// (0x0003a8de) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0004781e) wait_border_pane_g

0x2752,	// (0x0003a734) bg_popup_window_pane_cp16_ParamLimits

0x2752,	// (0x0003a734) bg_popup_window_pane_cp16

0x2852,	// (0x0003a834) indicator_popup_pane_cp4_ParamLimits

0x2852,	// (0x0003a834) indicator_popup_pane_cp4

0x2866,	// (0x0003a848) popup_query_data_window_t1_ParamLimits

0x2866,	// (0x0003a848) popup_query_data_window_t1

0x2878,	// (0x0003a85a) popup_query_data_window_t2_ParamLimits

0x2878,	// (0x0003a85a) popup_query_data_window_t2

0x2891,	// (0x0003a873) popup_query_data_window_t3_ParamLimits

0x2891,	// (0x0003a873) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00047817) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00047817) popup_query_data_window_t

0x28ab,	// (0x0003a88d) query_popup_data_pane_ParamLimits

0x28ab,	// (0x0003a88d) query_popup_data_pane

0x28bf,	// (0x0003a8a1) query_popup_data_pane_cp1_ParamLimits

0x28bf,	// (0x0003a8a1) query_popup_data_pane_cp1

0x2752,	// (0x0003a734) bg_popup_window_pane_cp10_ParamLimits

0x2752,	// (0x0003a734) bg_popup_window_pane_cp10

0x2784,	// (0x0003a766) indicator_popup_pane_ParamLimits

0x2784,	// (0x0003a766) indicator_popup_pane

0x27a6,	// (0x0003a788) popup_query_code_window_t1_ParamLimits

0x27a6,	// (0x0003a788) popup_query_code_window_t1

0x27c0,	// (0x0003a7a2) popup_query_code_window_t2_ParamLimits

0x27c0,	// (0x0003a7a2) popup_query_code_window_t2

0x2809,	// (0x0003a7eb) popup_query_code_window_t3_ParamLimits

0x2809,	// (0x0003a7eb) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x00047810) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x00047810) popup_query_code_window_t

0x2838,	// (0x0003a81a) query_popup_pane_ParamLimits

0x2838,	// (0x0003a81a) query_popup_pane

0x7e1e,	// (0x0003fe00) bg_popup_window_pane_cp15_ParamLimits

0x7e1e,	// (0x0003fe00) bg_popup_window_pane_cp15

0x7e3e,	// (0x0003fe20) indicator_popup_pane_cp1_ParamLimits

0x7e3e,	// (0x0003fe20) indicator_popup_pane_cp1

0x7e51,	// (0x0003fe33) indicator_popup_pane_cp2_ParamLimits

0x7e51,	// (0x0003fe33) indicator_popup_pane_cp2

0x7e6c,	// (0x0003fe4e) popup_query_data_code_window_g1_ParamLimits

0x7e6c,	// (0x0003fe4e) popup_query_data_code_window_g1

0x7e7f,	// (0x0003fe61) popup_query_data_code_window_t1_ParamLimits

0x7e7f,	// (0x0003fe61) popup_query_data_code_window_t1

0x7e91,	// (0x0003fe73) popup_query_data_code_window_t2_ParamLimits

0x7e91,	// (0x0003fe73) popup_query_data_code_window_t2

0x7ea3,	// (0x0003fe85) popup_query_data_code_window_t3_ParamLimits

0x7ea3,	// (0x0003fe85) popup_query_data_code_window_t3

0x8471,	// (0x00040453) popup_query_data_code_window_t4_ParamLimits

0x8471,	// (0x00040453) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004756c) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004756c) popup_query_data_code_window_t

0x04f2,	// (0x000384d4) list_single_midp_graphic_pane_g3

0x848b,	// (0x0004046d) query_popup_data_pane_cp2_ParamLimits

0x849e,	// (0x00040480) query_popup_pane_cp2_ParamLimits

0x849e,	// (0x00040480) query_popup_pane_cp2

0x7bdb,	// (0x0003fbbd) bg_popup_window_pane_cp11

0x274a,	// (0x0003a72c) heading_pane_cp5

0x8534,	// (0x00040516) listscroll_popup_info_pane

0x7bdb,	// (0x0003fbbd) input_focus_pane_cp3

0x84b9,	// (0x0004049b) query_popup_pane_t1

0x84c7,	// (0x000404a9) list_popup_info_pane_ParamLimits

0x84c7,	// (0x000404a9) list_popup_info_pane

0x84d6,	// (0x000404b8) listscroll_popup_info_pane_g1

0x84de,	// (0x000404c0) scroll_pane_cp7

0x84e8,	// (0x000404ca) popup_info_list_pane_t1_ParamLimits

0x84e8,	// (0x000404ca) popup_info_list_pane_t1

0x8502,	// (0x000404e4) popup_info_list_pane_t2_ParamLimits

0x8502,	// (0x000404e4) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00047575) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00047575) popup_info_list_pane_t

0x7bdb,	// (0x0003fbbd) bg_popup_window_pane_cp12

0x3b29,	// (0x0003bb0b) find_popup_pane

0x7c35,	// (0x0003fc17) bg_popup_window_pane_cp3

0x851c,	// (0x000404fe) heading_pane_cp3

0x8528,	// (0x0004050a) listscroll_popup_graphic_pane

0x7bdb,	// (0x0003fbbd) bg_popup_window_pane_cp4

0x9690,	// (0x00041672) heading_pane_cp4

0x8534,	// (0x00040516) listscroll_popup_colour_pane

0x969a,	// (0x0004167c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x969a,	// (0x0004167c) cell_large_graphic_colour_none_popup_pane

0x96ae,	// (0x00041690) grid_large_graphic_colour_popup_pane_ParamLimits

0x96ae,	// (0x00041690) grid_large_graphic_colour_popup_pane

0x96d2,	// (0x000416b4) listscroll_popup_colour_pane_g1_ParamLimits

0x96d2,	// (0x000416b4) listscroll_popup_colour_pane_g1

0x96e9,	// (0x000416cb) listscroll_popup_colour_pane_g2_ParamLimits

0x96e9,	// (0x000416cb) listscroll_popup_colour_pane_g2

0x9700,	// (0x000416e2) listscroll_popup_colour_pane_g3_ParamLimits

0x9700,	// (0x000416e2) listscroll_popup_colour_pane_g3

0x9710,	// (0x000416f2) listscroll_popup_colour_pane_g4_ParamLimits

0x9710,	// (0x000416f2) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004757a) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004757a) listscroll_popup_colour_pane_g

0x853c,	// (0x0004051e) scroll_pane_cp6_ParamLimits

0x853c,	// (0x0004051e) scroll_pane_cp6

0x9720,	// (0x00041702) cell_large_graphic_colour_popup_pane_ParamLimits

0x9720,	// (0x00041702) cell_large_graphic_colour_popup_pane

0x854e,	// (0x00040530) cell_large_graphic_colour_none_popup_pane_t1

0x7bdb,	// (0x0003fbbd) grid_highlight_pane_cp5

0x855d,	// (0x0004053f) cell_large_graphic_colour_popup_pane_g1

0x8565,	// (0x00040547) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00047583) cell_large_graphic_colour_popup_pane_g

0x856d,	// (0x0004054f) cell_large_graphic_colour_popup_pane_g2_copy1

0x8576,	// (0x00040558) grid_highlight_pane_cp4

0x857e,	// (0x00040560) bg_popup_window_pane_cp8_ParamLimits

0x857e,	// (0x00040560) bg_popup_window_pane_cp8

0x8599,	// (0x0004057b) popup_snote_single_text_window_g1_ParamLimits

0x8599,	// (0x0004057b) popup_snote_single_text_window_g1

0x85ab,	// (0x0004058d) popup_snote_single_text_window_t1_ParamLimits

0x85ab,	// (0x0004058d) popup_snote_single_text_window_t1

0x85be,	// (0x000405a0) popup_snote_single_text_window_t2_ParamLimits

0x85be,	// (0x000405a0) popup_snote_single_text_window_t2

0x85d1,	// (0x000405b3) popup_snote_single_text_window_t3_ParamLimits

0x85d1,	// (0x000405b3) popup_snote_single_text_window_t3

0x860a,	// (0x000405ec) popup_snote_single_text_window_t4_ParamLimits

0x860a,	// (0x000405ec) popup_snote_single_text_window_t4

0x863e,	// (0x00040620) popup_snote_single_text_window_t5_ParamLimits

0x863e,	// (0x00040620) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00047588) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00047588) popup_snote_single_text_window_t

0x866d,	// (0x0004064f) bg_popup_window_pane_cp9_ParamLimits

0x866d,	// (0x0004064f) bg_popup_window_pane_cp9

0x8599,	// (0x0004057b) popup_snote_single_graphic_window_g1_ParamLimits

0x8599,	// (0x0004057b) popup_snote_single_graphic_window_g1

0x867b,	// (0x0004065d) popup_snote_single_graphic_window_g2_ParamLimits

0x867b,	// (0x0004065d) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00047593) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00047593) popup_snote_single_graphic_window_g

0x8687,	// (0x00040669) popup_snote_single_graphic_window_t1_ParamLimits

0x8687,	// (0x00040669) popup_snote_single_graphic_window_t1

0x869a,	// (0x0004067c) popup_snote_single_graphic_window_t2_ParamLimits

0x869a,	// (0x0004067c) popup_snote_single_graphic_window_t2

0x86ad,	// (0x0004068f) popup_snote_single_graphic_window_t3_ParamLimits

0x86ad,	// (0x0004068f) popup_snote_single_graphic_window_t3

0x86e6,	// (0x000406c8) popup_snote_single_graphic_window_t4_ParamLimits

0x86e6,	// (0x000406c8) popup_snote_single_graphic_window_t4

0x871a,	// (0x000406fc) popup_snote_single_graphic_window_t5_ParamLimits

0x871a,	// (0x000406fc) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00047598) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00047598) popup_snote_single_graphic_window_t

0x3a67,	// (0x0003ba49) grid_graphic_popup_pane_ParamLimits

0x3a67,	// (0x0003ba49) grid_graphic_popup_pane

0x3a95,	// (0x0003ba77) listscroll_popup_graphic_pane_g1_ParamLimits

0x3a95,	// (0x0003ba77) listscroll_popup_graphic_pane_g1

0xc944,	// (0x00044926) listscroll_popup_graphic_pane_g2_ParamLimits

0xc944,	// (0x00044926) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0004798d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0004798d) listscroll_popup_graphic_pane_g

0x3abd,	// (0x0003ba9f) scroll_pane_cp5

0xc903,	// (0x000448e5) cell_graphic_popup_pane_ParamLimits

0xc903,	// (0x000448e5) cell_graphic_popup_pane

0x39f0,	// (0x0003b9d2) cell_graphic_popup_pane_g1

0x39f8,	// (0x0003b9da) cell_graphic_popup_pane_g2

0x856d,	// (0x0004054f) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00047986) cell_graphic_popup_pane_g

0x3a01,	// (0x0003b9e3) cell_graphic_popup_pane_t2

0x8576,	// (0x00040558) grid_highlight_pane_cp3

0x875b,	// (0x0004073d) list_gen_pane_ParamLimits

0x875b,	// (0x0004073d) list_gen_pane

0x8783,	// (0x00040765) scroll_pane

0xc8ba,	// (0x0004489c) bg_list_pane_g1_ParamLimits

0xc8ba,	// (0x0004489c) bg_list_pane_g1

0x3965,	// (0x0003b947) bg_list_pane_g2_ParamLimits

0x3965,	// (0x0003b947) bg_list_pane_g2

0x397a,	// (0x0003b95c) bg_list_pane_g3_ParamLimits

0x397a,	// (0x0003b95c) bg_list_pane_g3

0x398e,	// (0x0003b970) bg_list_pane_g4_ParamLimits

0x398e,	// (0x0003b970) bg_list_pane_g4

0xc8d7,	// (0x000448b9) bg_list_pane_g5_ParamLimits

0xc8d7,	// (0x000448b9) bg_list_pane_g5

0x0004,

0xf999,	// (0x0004797b) bg_list_pane_g_ParamLimits

0xf999,	// (0x0004797b) bg_list_pane_g

0xc869,	// (0x0004484b) list_double2_graphic_large_graphic_pane_ParamLimits

0xc869,	// (0x0004484b) list_double2_graphic_large_graphic_pane

0xc869,	// (0x0004484b) list_double2_graphic_pane_ParamLimits

0xc869,	// (0x0004484b) list_double2_graphic_pane

0xc869,	// (0x0004484b) list_double2_large_graphic_pane_ParamLimits

0xc869,	// (0x0004484b) list_double2_large_graphic_pane

0xc87d,	// (0x0004485f) list_double2_pane_ParamLimits

0xc87d,	// (0x0004485f) list_double2_pane

0xc869,	// (0x0004484b) list_double_graphic_heading_pane_ParamLimits

0xc869,	// (0x0004484b) list_double_graphic_heading_pane

0xc869,	// (0x0004484b) list_double_graphic_pane_ParamLimits

0xc869,	// (0x0004484b) list_double_graphic_pane

0xc869,	// (0x0004484b) list_double_heading_pane_ParamLimits

0xc869,	// (0x0004484b) list_double_heading_pane

0xc869,	// (0x0004484b) list_double_large_graphic_pane_ParamLimits

0xc869,	// (0x0004484b) list_double_large_graphic_pane

0xc869,	// (0x0004484b) list_double_number_pane_ParamLimits

0xc869,	// (0x0004484b) list_double_number_pane

0xc869,	// (0x0004484b) list_double_pane_ParamLimits

0xc869,	// (0x0004484b) list_double_pane

0xc869,	// (0x0004484b) list_double_time_pane_ParamLimits

0xc869,	// (0x0004484b) list_double_time_pane

0xc869,	// (0x0004484b) list_setting_number_pane_ParamLimits

0xc869,	// (0x0004484b) list_setting_number_pane

0xc869,	// (0x0004484b) list_setting_pane_ParamLimits

0xc869,	// (0x0004484b) list_setting_pane

0xb16b,	// (0x0004314d) list_single_2graphic_pane_ParamLimits

0xb16b,	// (0x0004314d) list_single_2graphic_pane

0xb16b,	// (0x0004314d) list_single_graphic_heading_pane_ParamLimits

0xb16b,	// (0x0004314d) list_single_graphic_heading_pane

0xb16b,	// (0x0004314d) list_single_graphic_pane_ParamLimits

0xb16b,	// (0x0004314d) list_single_graphic_pane

0xb16b,	// (0x0004314d) list_single_heading_pane_ParamLimits

0xb16b,	// (0x0004314d) list_single_heading_pane

0xc87d,	// (0x0004485f) list_single_large_graphic_pane_ParamLimits

0xc87d,	// (0x0004485f) list_single_large_graphic_pane

0xb16b,	// (0x0004314d) list_single_number_heading_pane_ParamLimits

0xb16b,	// (0x0004314d) list_single_number_heading_pane

0xb16b,	// (0x0004314d) list_single_number_pane_ParamLimits

0xb16b,	// (0x0004314d) list_single_number_pane

0xb16b,	// (0x0004314d) list_single_pane_ParamLimits

0xb16b,	// (0x0004314d) list_single_pane

0x7bdb,	// (0x0003fbbd) list_highlight_pane_cp1

0xda2c,	// (0x00045a0e) list_single_pane_g1_ParamLimits

0xda2c,	// (0x00045a0e) list_single_pane_g1

0xda38,	// (0x00045a1a) list_single_pane_g2_ParamLimits

0xda38,	// (0x00045a1a) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000475aa) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000475aa) list_single_pane_g

0xdcb3,	// (0x00045c95) list_single_pane_t1_ParamLimits

0xdcb3,	// (0x00045c95) list_single_pane_t1

0xda2c,	// (0x00045a0e) list_single_number_pane_g1_ParamLimits

0xda2c,	// (0x00045a0e) list_single_number_pane_g1

0xda38,	// (0x00045a1a) list_single_number_pane_g2_ParamLimits

0xda38,	// (0x00045a1a) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000475aa) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000475aa) list_single_number_pane_g

0xdbdc,	// (0x00045bbe) list_single_number_pane_t1_ParamLimits

0xdbdc,	// (0x00045bbe) list_single_number_pane_t1

0xb12d,	// (0x0004310f) list_single_number_pane_t2_ParamLimits

0xb12d,	// (0x0004310f) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0004793c) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0004793c) list_single_number_pane_t

0x974b,	// (0x0004172d) list_single_graphic_pane_g1_ParamLimits

0x974b,	// (0x0004172d) list_single_graphic_pane_g1

0xda2c,	// (0x00045a0e) list_single_graphic_pane_g2_ParamLimits

0xda2c,	// (0x00045a0e) list_single_graphic_pane_g2

0xda38,	// (0x00045a1a) list_single_graphic_pane_g3_ParamLimits

0xda38,	// (0x00045a1a) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000475a3) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000475a3) list_single_graphic_pane_g

0x9757,	// (0x00041739) list_single_graphic_pane_t1_ParamLimits

0x9757,	// (0x00041739) list_single_graphic_pane_t1

0xda2c,	// (0x00045a0e) list_single_heading_pane_g1_ParamLimits

0xda2c,	// (0x00045a0e) list_single_heading_pane_g1

0xda38,	// (0x00045a1a) list_single_heading_pane_g2_ParamLimits

0xda38,	// (0x00045a1a) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000475aa) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000475aa) list_single_heading_pane_g

0x976d,	// (0x0004174f) list_single_heading_pane_t1_ParamLimits

0x976d,	// (0x0004174f) list_single_heading_pane_t1

0x9783,	// (0x00041765) list_single_heading_pane_t2_ParamLimits

0x9783,	// (0x00041765) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000475af) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000475af) list_single_heading_pane_t

0xda2c,	// (0x00045a0e) list_single_number_heading_pane_g1_ParamLimits

0xda2c,	// (0x00045a0e) list_single_number_heading_pane_g1

0xda38,	// (0x00045a1a) list_single_number_heading_pane_g2_ParamLimits

0xda38,	// (0x00045a1a) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000475aa) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000475aa) list_single_number_heading_pane_g

0x976d,	// (0x0004174f) list_single_number_heading_pane_t1_ParamLimits

0x976d,	// (0x0004174f) list_single_number_heading_pane_t1

0x9795,	// (0x00041777) list_single_number_heading_pane_t2_ParamLimits

0x9795,	// (0x00041777) list_single_number_heading_pane_t2

0xda44,	// (0x00045a26) list_single_number_heading_pane_t3_ParamLimits

0xda44,	// (0x00045a26) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x000475b4) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x000475b4) list_single_number_heading_pane_t

0xda56,	// (0x00045a38) list_single_graphic_heading_pane_g1_ParamLimits

0xda56,	// (0x00045a38) list_single_graphic_heading_pane_g1

0x97a7,	// (0x00041789) list_single_graphic_heading_pane_g4_ParamLimits

0x97a7,	// (0x00041789) list_single_graphic_heading_pane_g4

0xda38,	// (0x00045a1a) list_single_graphic_heading_pane_g5_ParamLimits

0xda38,	// (0x00045a1a) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x000475bb) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x000475bb) list_single_graphic_heading_pane_g

0x976d,	// (0x0004174f) list_single_graphic_heading_pane_t1_ParamLimits

0x976d,	// (0x0004174f) list_single_graphic_heading_pane_t1

0x97b8,	// (0x0004179a) list_single_graphic_heading_pane_t2_ParamLimits

0x97b8,	// (0x0004179a) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x000475c2) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x000475c2) list_single_graphic_heading_pane_t

0xda62,	// (0x00045a44) list_single_large_graphic_pane_g1_ParamLimits

0xda62,	// (0x00045a44) list_single_large_graphic_pane_g1

0xda6e,	// (0x00045a50) list_single_large_graphic_pane_g2_ParamLimits

0xda6e,	// (0x00045a50) list_single_large_graphic_pane_g2

0xda7a,	// (0x00045a5c) list_single_large_graphic_pane_g3_ParamLimits

0xda7a,	// (0x00045a5c) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x000475c7) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000475c7) list_single_large_graphic_pane_g

0x28f3,	// (0x0003a8d5) wait_border_pane_g2_copy1

0x97ca,	// (0x000417ac) list_single_large_graphic_pane_g4_cp2

0xda86,	// (0x00045a68) list_single_large_graphic_pane_t1_ParamLimits

0xda86,	// (0x00045a68) list_single_large_graphic_pane_t1

0x97d2,	// (0x000417b4) list_double_pane_g1_ParamLimits

0x97d2,	// (0x000417b4) list_double_pane_g1

0x97de,	// (0x000417c0) list_double_pane_g2_ParamLimits

0x97de,	// (0x000417c0) list_double_pane_g2

0x0001,

0xf5ec,	// (0x000475ce) list_double_pane_g_ParamLimits

0xf5ec,	// (0x000475ce) list_double_pane_g

0x97ea,	// (0x000417cc) list_double_pane_t1_ParamLimits

0x97ea,	// (0x000417cc) list_double_pane_t1

0x9800,	// (0x000417e2) list_double_pane_t2_ParamLimits

0x9800,	// (0x000417e2) list_double_pane_t2

0x0001,

0xf5f1,	// (0x000475d3) list_double_pane_t_ParamLimits

0xf5f1,	// (0x000475d3) list_double_pane_t

0x9812,	// (0x000417f4) list_double2_pane_g1_ParamLimits

0x9812,	// (0x000417f4) list_double2_pane_g1

0x9823,	// (0x00041805) list_double2_pane_g2_ParamLimits

0x9823,	// (0x00041805) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x000475d8) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x000475d8) list_double2_pane_g

0x982f,	// (0x00041811) list_double2_pane_t1_ParamLimits

0x982f,	// (0x00041811) list_double2_pane_t1

0x9845,	// (0x00041827) list_double2_pane_t2_ParamLimits

0x9845,	// (0x00041827) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000475dd) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000475dd) list_double2_pane_t

0x97d2,	// (0x000417b4) list_double_number_pane_g1_ParamLimits

0x97d2,	// (0x000417b4) list_double_number_pane_g1

0x97de,	// (0x000417c0) list_double_number_pane_g2_ParamLimits

0x97de,	// (0x000417c0) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x000475ce) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x000475ce) list_double_number_pane_g

0x9857,	// (0x00041839) list_double_number_pane_t1_ParamLimits

0x9857,	// (0x00041839) list_double_number_pane_t1

0x9869,	// (0x0004184b) list_double_number_pane_t2_ParamLimits

0x9869,	// (0x0004184b) list_double_number_pane_t2

0x987f,	// (0x00041861) list_double_number_pane_t3_ParamLimits

0x987f,	// (0x00041861) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000475e2) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000475e2) list_double_number_pane_t

0x9891,	// (0x00041873) list_double_graphic_pane_g1_ParamLimits

0x9891,	// (0x00041873) list_double_graphic_pane_g1

0x989d,	// (0x0004187f) list_double_graphic_pane_g2_ParamLimits

0x989d,	// (0x0004187f) list_double_graphic_pane_g2

0x98ac,	// (0x0004188e) list_double_graphic_pane_g3_ParamLimits

0x98ac,	// (0x0004188e) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x000475e9) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x000475e9) list_double_graphic_pane_g

0x98c4,	// (0x000418a6) list_double_graphic_pane_t1_ParamLimits

0x98c4,	// (0x000418a6) list_double_graphic_pane_t1

0x98da,	// (0x000418bc) list_double_graphic_pane_t2_ParamLimits

0x98da,	// (0x000418bc) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x000475f2) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x000475f2) list_double_graphic_pane_t

0x98ec,	// (0x000418ce) list_double2_graphic_pane_g1_ParamLimits

0x98ec,	// (0x000418ce) list_double2_graphic_pane_g1

0x98f8,	// (0x000418da) list_double2_graphic_pane_g2_ParamLimits

0x98f8,	// (0x000418da) list_double2_graphic_pane_g2

0x9904,	// (0x000418e6) list_double2_graphic_pane_g3_ParamLimits

0x9904,	// (0x000418e6) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x000475f7) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x000475f7) list_double2_graphic_pane_g

0x9910,	// (0x000418f2) list_double2_graphic_pane_t1_ParamLimits

0x9910,	// (0x000418f2) list_double2_graphic_pane_t1

0x9926,	// (0x00041908) list_double2_graphic_pane_t2_ParamLimits

0x9926,	// (0x00041908) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x000475fe) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x000475fe) list_double2_graphic_pane_t

0x9938,	// (0x0004191a) list_double_large_graphic_pane_g1_ParamLimits

0x9938,	// (0x0004191a) list_double_large_graphic_pane_g1

0x9963,	// (0x00041945) list_double_large_graphic_pane_g2_ParamLimits

0x9963,	// (0x00041945) list_double_large_graphic_pane_g2

0x97de,	// (0x000417c0) list_double_large_graphic_pane_g3_ParamLimits

0x97de,	// (0x000417c0) list_double_large_graphic_pane_g3

0x9974,	// (0x00041956) list_double_large_graphic_pane_g4_ParamLimits

0x9974,	// (0x00041956) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00047603) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00047603) list_double_large_graphic_pane_g

0x9987,	// (0x00041969) list_double_large_graphic_pane_t1_ParamLimits

0x9987,	// (0x00041969) list_double_large_graphic_pane_t1

0x99a0,	// (0x00041982) list_double_large_graphic_pane_t2_ParamLimits

0x99a0,	// (0x00041982) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0004760e) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0004760e) list_double_large_graphic_pane_t

0x99b2,	// (0x00041994) list_double2_large_graphic_pane_g1_ParamLimits

0x99b2,	// (0x00041994) list_double2_large_graphic_pane_g1

0x99be,	// (0x000419a0) list_double2_large_graphic_pane_g2_ParamLimits

0x99be,	// (0x000419a0) list_double2_large_graphic_pane_g2

0x99cf,	// (0x000419b1) list_double2_large_graphic_pane_g3_ParamLimits

0x99cf,	// (0x000419b1) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00047613) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00047613) list_double2_large_graphic_pane_g

0x99db,	// (0x000419bd) list_double2_large_graphic_pane_t1_ParamLimits

0x99db,	// (0x000419bd) list_double2_large_graphic_pane_t1

0x99f1,	// (0x000419d3) list_double2_large_graphic_pane_t2_ParamLimits

0x99f1,	// (0x000419d3) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0004761a) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0004761a) list_double2_large_graphic_pane_t

0x9a03,	// (0x000419e5) list_double_heading_pane_g1_ParamLimits

0x9a03,	// (0x000419e5) list_double_heading_pane_g1

0x9a14,	// (0x000419f6) list_double_heading_pane_g2_ParamLimits

0x9a14,	// (0x000419f6) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0004761f) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0004761f) list_double_heading_pane_g

0x9a20,	// (0x00041a02) list_double_heading_pane_t1_ParamLimits

0x9a20,	// (0x00041a02) list_double_heading_pane_t1

0x9a36,	// (0x00041a18) list_double_heading_pane_t2_ParamLimits

0x9a36,	// (0x00041a18) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00047624) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00047624) list_double_heading_pane_t

0x9a48,	// (0x00041a2a) list_double_graphic_heading_pane_g1_ParamLimits

0x9a48,	// (0x00041a2a) list_double_graphic_heading_pane_g1

0x9a03,	// (0x000419e5) list_double_graphic_heading_pane_g2_ParamLimits

0x9a03,	// (0x000419e5) list_double_graphic_heading_pane_g2

0x9a14,	// (0x000419f6) list_double_graphic_heading_pane_g3_ParamLimits

0x9a14,	// (0x000419f6) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00047629) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00047629) list_double_graphic_heading_pane_g

0x9a54,	// (0x00041a36) list_double_graphic_heading_pane_t1_ParamLimits

0x9a54,	// (0x00041a36) list_double_graphic_heading_pane_t1

0x9926,	// (0x00041908) list_double_graphic_heading_pane_t2_ParamLimits

0x9926,	// (0x00041908) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00047630) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00047630) list_double_graphic_heading_pane_t

0x9963,	// (0x00041945) list_double_time_pane_g1_ParamLimits

0x9963,	// (0x00041945) list_double_time_pane_g1

0x97de,	// (0x000417c0) list_double_time_pane_g2_ParamLimits

0x97de,	// (0x000417c0) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00047635) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00047635) list_double_time_pane_g

0x9a6a,	// (0x00041a4c) list_double_time_pane_t1_ParamLimits

0x9a6a,	// (0x00041a4c) list_double_time_pane_t1

0x9a80,	// (0x00041a62) list_double_time_pane_t2_ParamLimits

0x9a80,	// (0x00041a62) list_double_time_pane_t2

0x9a92,	// (0x00041a74) list_double_time_pane_t3_ParamLimits

0x9a92,	// (0x00041a74) list_double_time_pane_t3

0x9aa4,	// (0x00041a86) list_double_time_pane_t4_ParamLimits

0x9aa4,	// (0x00041a86) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0004763a) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0004763a) list_double_time_pane_t

0x9ab6,	// (0x00041a98) list_setting_pane_g1_ParamLimits

0x9ab6,	// (0x00041a98) list_setting_pane_g1

0x9a14,	// (0x000419f6) list_setting_pane_g2_ParamLimits

0x9a14,	// (0x000419f6) list_setting_pane_g2

0x0001,

0xf661,	// (0x00047643) list_setting_pane_g_ParamLimits

0xf661,	// (0x00047643) list_setting_pane_g

0x9ac2,	// (0x00041aa4) list_setting_pane_t1_ParamLimits

0x9ac2,	// (0x00041aa4) list_setting_pane_t1

0x9ad9,	// (0x00041abb) list_setting_pane_t2_ParamLimits

0x9ad9,	// (0x00041abb) list_setting_pane_t2

0x0002,

0xf666,	// (0x00047648) list_setting_pane_t_ParamLimits

0xf666,	// (0x00047648) list_setting_pane_t

0x9b18,	// (0x00041afa) set_value_pane_cp_ParamLimits

0x9b18,	// (0x00041afa) set_value_pane_cp

0x9b26,	// (0x00041b08) list_setting_number_pane_g1_ParamLimits

0x9b26,	// (0x00041b08) list_setting_number_pane_g1

0x9b32,	// (0x00041b14) list_setting_number_pane_g2_ParamLimits

0x9b32,	// (0x00041b14) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0004764f) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0004764f) list_setting_number_pane_g

0x9b3e,	// (0x00041b20) list_setting_number_pane_t1_ParamLimits

0x9b3e,	// (0x00041b20) list_setting_number_pane_t1

0x9b52,	// (0x00041b34) list_setting_number_pane_t2_ParamLimits

0x9b52,	// (0x00041b34) list_setting_number_pane_t2

0x9b69,	// (0x00041b4b) list_setting_number_pane_t3_ParamLimits

0x9b69,	// (0x00041b4b) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00047654) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00047654) list_setting_number_pane_t

0x9b18,	// (0x00041afa) set_value_pane_ParamLimits

0x9b18,	// (0x00041afa) set_value_pane

0xb9c1,	// (0x000439a3) bg_set_opt_pane_ParamLimits

0xb9c1,	// (0x000439a3) bg_set_opt_pane

0xdab1,	// (0x00045a93) set_value_pane_t1

0xb9e2,	// (0x000439c4) slider_set_pane_cp3

0xb9eb,	// (0x000439cd) volume_small_pane_cp

0xb9f4,	// (0x000439d6) list_form_gen_pane

0xb9fd,	// (0x000439df) scroll_pane_cp8

0x9bac,	// (0x00041b8e) form_field_data_pane_ParamLimits

0x9bac,	// (0x00041b8e) form_field_data_pane

0x9bc7,	// (0x00041ba9) form_field_data_wide_pane_ParamLimits

0x9bc7,	// (0x00041ba9) form_field_data_wide_pane

0xdacf,	// (0x00045ab1) form_field_popup_pane_ParamLimits

0xdacf,	// (0x00045ab1) form_field_popup_pane

0x9be9,	// (0x00041bcb) form_field_popup_wide_pane_ParamLimits

0x9be9,	// (0x00041bcb) form_field_popup_wide_pane

0xdaf1,	// (0x00045ad3) form_field_slider_pane_ParamLimits

0xdaf1,	// (0x00045ad3) form_field_slider_pane

0xdb04,	// (0x00045ae6) form_field_slider_wide_pane_ParamLimits

0xdb04,	// (0x00045ae6) form_field_slider_wide_pane

0xba0e,	// (0x000439f0) data_form_pane

0x9c14,	// (0x00041bf6) form_field_data_pane_t1

0xba1a,	// (0x000439fc) input_focus_pane

0xdb17,	// (0x00045af9) data_form_wide_pane

0xdb34,	// (0x00045b16) form_field_data_wide_pane_t1

0x858b,	// (0x0004056d) input_focus_pane_cp6

0x9c2e,	// (0x00041c10) form_field_popup_pane_t1

0xba1a,	// (0x000439fc) input_focus_pane_cp7

0xba48,	// (0x00043a2a) list_form_pane

0xdb5e,	// (0x00045b40) form_field_popup_wide_pane_t1

0xba1a,	// (0x000439fc) input_focus_pane_cp8

0xba54,	// (0x00043a36) list_form_wide_pane

0x9c50,	// (0x00041c32) form_field_slider_pane_t1_ParamLimits

0x9c50,	// (0x00041c32) form_field_slider_pane_t1

0x9c68,	// (0x00041c4a) form_field_slider_pane_t2_ParamLimits

0x9c68,	// (0x00041c4a) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00047664) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00047664) form_field_slider_pane_t

0x7d68,	// (0x0003fd4a) input_focus_pane_cp9_ParamLimits

0x7d68,	// (0x0003fd4a) input_focus_pane_cp9

0x9c7d,	// (0x00041c5f) slider_cont_pane_ParamLimits

0x9c7d,	// (0x00041c5f) slider_cont_pane

0xba63,	// (0x00043a45) form_field_slider_wide_pane_t1_ParamLimits

0xba63,	// (0x00043a45) form_field_slider_wide_pane_t1

0xdb73,	// (0x00045b55) form_field_slider_wide_pane_t2_ParamLimits

0xdb73,	// (0x00045b55) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00047669) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00047669) form_field_slider_wide_pane_t

0x7d68,	// (0x0003fd4a) input_focus_pane_cp10_ParamLimits

0x7d68,	// (0x0003fd4a) input_focus_pane_cp10

0x9c91,	// (0x00041c73) slider_cont_pane_cp1_ParamLimits

0x9c91,	// (0x00041c73) slider_cont_pane_cp1

0x9ca5,	// (0x00041c87) slider_form_pane_cp

0xba75,	// (0x00043a57) input_focus_pane_g1

0xba7d,	// (0x00043a5f) input_focus_pane_g2

0xba85,	// (0x00043a67) input_focus_pane_g3

0xba8d,	// (0x00043a6f) input_focus_pane_g4

0xba95,	// (0x00043a77) input_focus_pane_g5

0xba9d,	// (0x00043a7f) input_focus_pane_g6

0xbaa5,	// (0x00043a87) input_focus_pane_g7

0xbaad,	// (0x00043a8f) input_focus_pane_g8

0xbab5,	// (0x00043a97) input_focus_pane_g9

0x7bd1,	// (0x0003fbb3) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0004766e) input_focus_pane_g

0x28fc,	// (0x0003a8de) wait_border_pane_g3_copy1

0x9cad,	// (0x00041c8f) data_form_pane_t1

0x7bd1,	// (0x0003fbb3) wait_anim_pane_g1_copy1

0xb13f,	// (0x00043121) data_form_wide_pane_t1

0xdb85,	// (0x00045b67) list_form_graphic_pane_cp_ParamLimits

0xdb85,	// (0x00045b67) list_form_graphic_pane_cp

0x385b,	// (0x0003b83d) slider_form_pane_g1

0x3864,	// (0x0003b846) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0004796c) slider_form_pane_g

0xdb85,	// (0x00045b67) list_form_graphic_pane_ParamLimits

0xdb85,	// (0x00045b67) list_form_graphic_pane

0xdb97,	// (0x00045b79) list_form_graphic_pane_g1

0xdb9f,	// (0x00045b81) list_form_graphic_pane_t1_ParamLimits

0xdb9f,	// (0x00045b81) list_form_graphic_pane_t1

0x7c35,	// (0x0003fc17) list_highlight_pane_cp5_ParamLimits

0x7c35,	// (0x0003fc17) list_highlight_pane_cp5

0x9cc7,	// (0x00041ca9) find_pane_g1

0xbabd,	// (0x00043a9f) input_find_pane

0x9cd0,	// (0x00041cb2) input_find_pane_g1_ParamLimits

0x9cd0,	// (0x00041cb2) input_find_pane_g1

0x9cdc,	// (0x00041cbe) input_find_pane_t1_ParamLimits

0x9cdc,	// (0x00041cbe) input_find_pane_t1

0x9cf1,	// (0x00041cd3) input_find_pane_t2_ParamLimits

0x9cf1,	// (0x00041cd3) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00047683) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00047683) input_find_pane_t

0xbac6,	// (0x00043aa8) input_focus_pane_cp5_ParamLimits

0xbac6,	// (0x00043aa8) input_focus_pane_cp5

0xbad4,	// (0x00043ab6) bg_popup_window_pane_cp2_ParamLimits

0xbad4,	// (0x00043ab6) bg_popup_window_pane_cp2

0xbae1,	// (0x00043ac3) listscroll_menu_pane_ParamLimits

0xbae1,	// (0x00043ac3) listscroll_menu_pane

0x9d12,	// (0x00041cf4) popup_submenu_window_ParamLimits

0x9d12,	// (0x00041cf4) popup_submenu_window

0xbaed,	// (0x00043acf) find_popup_pane_g1

0xbaf5,	// (0x00043ad7) input_popup_find_pane_cp

0xbac6,	// (0x00043aa8) input_focus_pane_cp4_ParamLimits

0xbac6,	// (0x00043aa8) input_focus_pane_cp4

0xbaff,	// (0x00043ae1) input_popup_find_pane_t1_ParamLimits

0xbaff,	// (0x00043ae1) input_popup_find_pane_t1

0x7bdb,	// (0x0003fbbd) bg_popup_sub_pane_cp

0xbb2d,	// (0x00043b0f) listscroll_popup_sub_pane

0xbb35,	// (0x00043b17) list_submenu_pane_ParamLimits

0xbb35,	// (0x00043b17) list_submenu_pane

0xbb46,	// (0x00043b28) scroll_pane_cp4

0xbb4e,	// (0x00043b30) list_single_popup_submenu_pane_ParamLimits

0xbb4e,	// (0x00043b30) list_single_popup_submenu_pane

0xbb63,	// (0x00043b45) list_single_popup_submenu_pane_g1

0xbb6b,	// (0x00043b4d) list_single_popup_submenu_pane_t1_ParamLimits

0xbb6b,	// (0x00043b4d) list_single_popup_submenu_pane_t1

0x7d68,	// (0x0003fd4a) bg_active_tab_pane_cp1_ParamLimits

0x7d68,	// (0x0003fd4a) bg_active_tab_pane_cp1

0x9d50,	// (0x00041d32) tabs_2_active_pane_g1

0x9d58,	// (0x00041d3a) tabs_2_active_pane_t1

0x7d68,	// (0x0003fd4a) bg_passive_tab_pane_cp1_ParamLimits

0x7d68,	// (0x0003fd4a) bg_passive_tab_pane_cp1

0x9d50,	// (0x00041d32) tabs_2_passive_pane_g1

0x9d58,	// (0x00041d3a) tabs_2_passive_pane_t1

0x7c35,	// (0x0003fc17) bg_active_tab_pane_cp4

0x9d6a,	// (0x00041d4c) tabs_2_long_active_pane_t1

0x00fa,	// (0x000380dc) bg_passive_tab_pane_cp4

0x04fa,	// (0x000384dc) list_single_midp_graphic_pane_g4_ParamLimits

0x7c35,	// (0x0003fc17) bg_active_tab_pane_cp5

0x9d7d,	// (0x00041d5f) tabs_3_long_active_pane_t1

0x00fa,	// (0x000380dc) bg_passive_tab_pane_cp5

0x04fa,	// (0x000384dc) list_single_midp_graphic_pane_g4

0x7c35,	// (0x0003fc17) bg_popup_window_pane_cp13_ParamLimits

0x7c35,	// (0x0003fc17) bg_popup_window_pane_cp13

0xbb89,	// (0x00043b6b) listscroll_popup_fast_pane_ParamLimits

0xbb89,	// (0x00043b6b) listscroll_popup_fast_pane

0xbb98,	// (0x00043b7a) grid_popup_fast_pane_ParamLimits

0xbb98,	// (0x00043b7a) grid_popup_fast_pane

0xbbaa,	// (0x00043b8c) scroll_pane_cp9_ParamLimits

0xbbaa,	// (0x00043b8c) scroll_pane_cp9

0x51dc,	// (0x0003d1be) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x51dc,	// (0x0003d1be) list_single_graphic_hl_pane_t1_cp2

0xbbce,	// (0x00043bb0) input_focus_pane_cp20_ParamLimits

0xbbce,	// (0x00043bb0) input_focus_pane_cp20

0xbbdc,	// (0x00043bbe) query_popup_data_pane_t1_ParamLimits

0xbbdc,	// (0x00043bbe) query_popup_data_pane_t1

0xbbef,	// (0x00043bd1) query_popup_data_pane_t2_ParamLimits

0xbbef,	// (0x00043bd1) query_popup_data_pane_t2

0xbc35,	// (0x00043c17) query_popup_data_pane_t3_ParamLimits

0xbc35,	// (0x00043c17) query_popup_data_pane_t3

0xbc76,	// (0x00043c58) query_popup_data_pane_t4_ParamLimits

0xbc76,	// (0x00043c58) query_popup_data_pane_t4

0xbcb2,	// (0x00043c94) query_popup_data_pane_t5_ParamLimits

0xbcb2,	// (0x00043c94) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00047688) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00047688) query_popup_data_pane_t

0xba75,	// (0x00043a57) bg_set_opt_pane_g1

0xba7d,	// (0x00043a5f) bg_set_opt_pane_g2

0xba85,	// (0x00043a67) bg_set_opt_pane_g3

0xba8d,	// (0x00043a6f) bg_set_opt_pane_g4

0xba95,	// (0x00043a77) bg_set_opt_pane_g5

0xba9d,	// (0x00043a7f) bg_set_opt_pane_g6

0xbaa5,	// (0x00043a87) bg_set_opt_pane_g7

0xbaad,	// (0x00043a8f) bg_set_opt_pane_g8

0xbab5,	// (0x00043a97) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00047693) bg_set_opt_pane_g

0xf1f7,	// (0x000471d9) control_top_pane_stacon_ParamLimits

0xf1f7,	// (0x000471d9) control_top_pane_stacon

0xf24a,	// (0x0004722c) signal_pane_stacon_ParamLimits

0xf24a,	// (0x0004722c) signal_pane_stacon

0xc0c9,	// (0x000440ab) stacon_top_pane_g1_ParamLimits

0xc0c9,	// (0x000440ab) stacon_top_pane_g1

0xf26f,	// (0x00047251) title_pane_stacon_ParamLimits

0xf26f,	// (0x00047251) title_pane_stacon

0xf299,	// (0x0004727b) uni_indicator_pane_stacon_ParamLimits

0xf299,	// (0x0004727b) uni_indicator_pane_stacon

0xf2b1,	// (0x00047293) battery_pane_stacon_ParamLimits

0xf2b1,	// (0x00047293) battery_pane_stacon

0xf2f5,	// (0x000472d7) control_bottom_pane_stacon_ParamLimits

0xf2f5,	// (0x000472d7) control_bottom_pane_stacon

0xf318,	// (0x000472fa) navi_pane_stacon_ParamLimits

0xf318,	// (0x000472fa) navi_pane_stacon

0xc0eb,	// (0x000440cd) stacon_bottom_pane_g1_ParamLimits

0xc0eb,	// (0x000440cd) stacon_bottom_pane_g1

0xeef1,	// (0x00046ed3) aid_levels_signal_lsc_ParamLimits

0xeef1,	// (0x00046ed3) aid_levels_signal_lsc

0xef08,	// (0x00046eea) signal_pane_stacon_g1_ParamLimits

0xef08,	// (0x00046eea) signal_pane_stacon_g1

0xef1c,	// (0x00046efe) signal_pane_stacon_g2_ParamLimits

0xef1c,	// (0x00046efe) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x000476a6) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000476a6) signal_pane_stacon_g

0xef51,	// (0x00046f33) title_pane_stacon_t1_ParamLimits

0xef51,	// (0x00046f33) title_pane_stacon_t1

0xbcf6,	// (0x00043cd8) uni_indicator_pane_stacon_g1

0xbd00,	// (0x00043ce2) uni_indicator_pane_stacon_g2

0xbd0a,	// (0x00043cec) uni_indicator_pane_stacon_g3

0xbd14,	// (0x00043cf6) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x000476b2) uni_indicator_pane_stacon_g

0xef76,	// (0x00046f58) control_top_pane_stacon_g1

0xef7e,	// (0x00046f60) control_top_pane_stacon_t1_ParamLimits

0xef7e,	// (0x00046f60) control_top_pane_stacon_t1

0xefb5,	// (0x00046f97) aid_levels_battery_lsc_ParamLimits

0xefb5,	// (0x00046f97) aid_levels_battery_lsc

0xefcd,	// (0x00046faf) battery_pane_stacon_g1_ParamLimits

0xefcd,	// (0x00046faf) battery_pane_stacon_g1

0xefe0,	// (0x00046fc2) battery_pane_stacon_g2_ParamLimits

0xefe0,	// (0x00046fc2) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x000476bb) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x000476bb) battery_pane_stacon_g

0xf01e,	// (0x00047000) navi_icon_pane_stacon

0xf032,	// (0x00047014) navi_navi_pane_stacon

0xf01e,	// (0x00047000) navi_text_pane_stacon

0xef76,	// (0x00046f58) control_bottom_pane_stacon_g1

0xf048,	// (0x0004702a) control_bottom_pane_stacon_t1_ParamLimits

0xf048,	// (0x0004702a) control_bottom_pane_stacon_t1

0x9d8f,	// (0x00041d71) grid_app_pane_ParamLimits

0x9d8f,	// (0x00041d71) grid_app_pane

0x9dc7,	// (0x00041da9) scroll_pane_cp15_ParamLimits

0x9dc7,	// (0x00041da9) scroll_pane_cp15

0x9ddc,	// (0x00041dbe) cell_app_pane_ParamLimits

0x9ddc,	// (0x00041dbe) cell_app_pane

0x9e29,	// (0x00041e0b) cell_app_pane_g1_ParamLimits

0x9e29,	// (0x00041e0b) cell_app_pane_g1

0xbd38,	// (0x00043d1a) cell_app_pane_g2_ParamLimits

0xbd38,	// (0x00043d1a) cell_app_pane_g2

0x0001,

0xf6de,	// (0x000476c0) cell_app_pane_g_ParamLimits

0xf6de,	// (0x000476c0) cell_app_pane_g

0xbd44,	// (0x00043d26) cell_app_pane_t1_ParamLimits

0xbd44,	// (0x00043d26) cell_app_pane_t1

0xbd5b,	// (0x00043d3d) grid_highlight_pane_ParamLimits

0xbd5b,	// (0x00043d3d) grid_highlight_pane

0xba75,	// (0x00043a57) cell_highlight_pane_g1

0xba7d,	// (0x00043a5f) cell_highlight_pane_g2

0xba85,	// (0x00043a67) cell_highlight_pane_g3

0xba8d,	// (0x00043a6f) cell_highlight_pane_g4

0xba95,	// (0x00043a77) cell_highlight_pane_g5

0xba9d,	// (0x00043a7f) cell_highlight_pane_g6

0xbaa5,	// (0x00043a87) cell_highlight_pane_g7

0xbaad,	// (0x00043a8f) cell_highlight_pane_g8

0xbab5,	// (0x00043a97) cell_highlight_pane_g9

0x7bd1,	// (0x0003fbb3) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0004766e) cell_highlight_pane_g

0xbd6c,	// (0x00043d4e) bg_scroll_pane

0xf089,	// (0x0004706b) scroll_handle_pane

0xbdb3,	// (0x00043d95) scroll_bg_pane_g1

0xbdc8,	// (0x00043daa) scroll_bg_pane_g2

0xbde0,	// (0x00043dc2) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x000476c5) scroll_bg_pane_g

0xbdf5,	// (0x00043dd7) scroll_handle_focus_pane_ParamLimits

0xbdf5,	// (0x00043dd7) scroll_handle_focus_pane

0xbdb3,	// (0x00043d95) scroll_handle_pane_g1

0xbe02,	// (0x00043de4) scroll_handle_pane_g2

0xbde0,	// (0x00043dc2) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x000476cc) scroll_handle_pane_g

0xbac6,	// (0x00043aa8) bg_popup_sub_pane_cp21_ParamLimits

0xbac6,	// (0x00043aa8) bg_popup_sub_pane_cp21

0xbe16,	// (0x00043df8) popup_fep_japan_predictive_window_t1_ParamLimits

0xbe16,	// (0x00043df8) popup_fep_japan_predictive_window_t1

0xbe2d,	// (0x00043e0f) popup_fep_japan_predictive_window_t2_ParamLimits

0xbe2d,	// (0x00043e0f) popup_fep_japan_predictive_window_t2

0xbe60,	// (0x00043e42) popup_fep_japan_predictive_window_t3_ParamLimits

0xbe60,	// (0x00043e42) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x000476d3) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x000476d3) popup_fep_japan_predictive_window_t

0x7bdb,	// (0x0003fbbd) bg_popup_sub_pane_cp23

0xbe97,	// (0x00043e79) listscroll_japin_cand_pane

0xbe9f,	// (0x00043e81) popup_fep_japan_candidate_window_t1

0xbead,	// (0x00043e8f) candidate_pane_ParamLimits

0xbead,	// (0x00043e8f) candidate_pane

0xbebf,	// (0x00043ea1) scroll_pane_cp30

0xbec9,	// (0x00043eab) list_single_popup_jap_candidate_pane_ParamLimits

0xbec9,	// (0x00043eab) list_single_popup_jap_candidate_pane

0x7bdb,	// (0x0003fbbd) list_highlight_pane_cp30

0xbedd,	// (0x00043ebf) list_single_popup_jap_candidate_pane_t1

0x9e52,	// (0x00041e34) level_1_signal

0x9e64,	// (0x00041e46) level_2_signal

0x9e77,	// (0x00041e59) level_3_signal

0x9e8a,	// (0x00041e6c) level_4_signal

0x9e9d,	// (0x00041e7f) level_5_signal

0x9eb0,	// (0x00041e92) level_6_signal

0x9ec3,	// (0x00041ea5) level_7_signal

0x9e52,	// (0x00041e34) level_1_battery

0x9e64,	// (0x00041e46) level_2_battery

0x9e77,	// (0x00041e59) level_3_battery

0x9e8a,	// (0x00041e6c) level_4_battery

0x9e9d,	// (0x00041e7f) level_5_battery

0x9eb0,	// (0x00041e92) level_6_battery

0x9ec3,	// (0x00041ea5) level_7_battery

0xbf04,	// (0x00043ee6) list_menu_pane_ParamLimits

0xbf04,	// (0x00043ee6) list_menu_pane

0xbf1a,	// (0x00043efc) scroll_pane_cp25_ParamLimits

0xbf1a,	// (0x00043efc) scroll_pane_cp25

0xbf33,	// (0x00043f15) list_double2_graphic_pane_cp2_ParamLimits

0xbf33,	// (0x00043f15) list_double2_graphic_pane_cp2

0xbf33,	// (0x00043f15) list_double2_large_graphic_pane_cp2_ParamLimits

0xbf33,	// (0x00043f15) list_double2_large_graphic_pane_cp2

0xbf33,	// (0x00043f15) list_double2_pane_cp2_ParamLimits

0xbf33,	// (0x00043f15) list_double2_pane_cp2

0xbf33,	// (0x00043f15) list_double_graphic_pane_cp2_ParamLimits

0xbf33,	// (0x00043f15) list_double_graphic_pane_cp2

0xbf33,	// (0x00043f15) list_double_large_graphic_pane_cp2_ParamLimits

0xbf33,	// (0x00043f15) list_double_large_graphic_pane_cp2

0xbf33,	// (0x00043f15) list_double_number_pane_cp2_ParamLimits

0xbf33,	// (0x00043f15) list_double_number_pane_cp2

0xbf33,	// (0x00043f15) list_double_pane_cp2_ParamLimits

0xbf33,	// (0x00043f15) list_double_pane_cp2

0x9ee9,	// (0x00041ecb) list_single_2graphic_pane_cp2_ParamLimits

0x9ee9,	// (0x00041ecb) list_single_2graphic_pane_cp2

0x9ee9,	// (0x00041ecb) list_single_graphic_heading_pane_cp2_ParamLimits

0x9ee9,	// (0x00041ecb) list_single_graphic_heading_pane_cp2

0x9ee9,	// (0x00041ecb) list_single_graphic_pane_cp2_ParamLimits

0x9ee9,	// (0x00041ecb) list_single_graphic_pane_cp2

0x9ee9,	// (0x00041ecb) list_single_heading_pane_cp2_ParamLimits

0x9ee9,	// (0x00041ecb) list_single_heading_pane_cp2

0xbf43,	// (0x00043f25) list_single_large_graphic_pane_cp2_ParamLimits

0xbf43,	// (0x00043f25) list_single_large_graphic_pane_cp2

0x9ee9,	// (0x00041ecb) list_single_number_heading_pane_cp2_ParamLimits

0x9ee9,	// (0x00041ecb) list_single_number_heading_pane_cp2

0x9ee9,	// (0x00041ecb) list_single_number_pane_cp2_ParamLimits

0x9ee9,	// (0x00041ecb) list_single_number_pane_cp2

0x9ee9,	// (0x00041ecb) list_single_pane_cp2_ParamLimits

0x9ee9,	// (0x00041ecb) list_single_pane_cp2

0xbf5c,	// (0x00043f3e) bg_popup_sub_pane_cp22

0xf1a7,	// (0x00047189) popup_side_volume_key_window_g1

0xf1d1,	// (0x000471b3) popup_side_volume_key_window_t1

0xf1ef,	// (0x000471d1) volume_small_pane_cp1

0x7d68,	// (0x0003fd4a) bg_popup_sub_pane_cp24_ParamLimits

0x7d68,	// (0x0003fd4a) bg_popup_sub_pane_cp24

0xbf72,	// (0x00043f54) fep_china_uni_candidate_pane_ParamLimits

0xbf72,	// (0x00043f54) fep_china_uni_candidate_pane

0xbf86,	// (0x00043f68) fep_china_uni_entry_pane

0xbf96,	// (0x00043f78) popup_fep_china_uni_window_g1

0xbfb2,	// (0x00043f94) fep_china_uni_entry_pane_g1

0xbfbc,	// (0x00043f9e) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00047704) fep_china_uni_entry_pane_g

0xbfc6,	// (0x00043fa8) fep_entry_item_pane

0xbfd0,	// (0x00043fb2) fep_candidate_item_pane

0xbfd8,	// (0x00043fba) fep_china_uni_candidate_pane_g1

0xbfe2,	// (0x00043fc4) fep_china_uni_candidate_pane_g2

0xbfea,	// (0x00043fcc) fep_china_uni_candidate_pane_g3

0xbff2,	// (0x00043fd4) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00047709) fep_china_uni_candidate_pane_g

0x7bd1,	// (0x0003fbb3) fep_entry_item_pane_g1

0xbffc,	// (0x00043fde) fep_entry_item_pane_t1_ParamLimits

0xbffc,	// (0x00043fde) fep_entry_item_pane_t1

0xc012,	// (0x00043ff4) fep_candidate_item_pane_t1_ParamLimits

0xc012,	// (0x00043ff4) fep_candidate_item_pane_t1

0xc027,	// (0x00044009) fep_candidate_item_pane_t2_ParamLimits

0xc027,	// (0x00044009) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00047712) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00047712) fep_candidate_item_pane_t

0x7c35,	// (0x0003fc17) list_highlight_pane_cp31_ParamLimits

0x7c35,	// (0x0003fc17) list_highlight_pane_cp31

0xc039,	// (0x0004401b) level_1_signal_lsc

0xc042,	// (0x00044024) level_2_signal_lsc

0xc04b,	// (0x0004402d) level_3_signal_lsc

0xc054,	// (0x00044036) level_4_signal_lsc

0xc05d,	// (0x0004403f) level_5_signal_lsc

0xc066,	// (0x00044048) level_6_signal_lsc

0xc06f,	// (0x00044051) level_7_signal_lsc

0xc06f,	// (0x00044051) level_1_battery_lsc

0xc078,	// (0x0004405a) level_2_battery_lsc

0xc081,	// (0x00044063) level_3_battery_lsc

0xc08a,	// (0x0004406c) level_4_battery_lsc

0xc093,	// (0x00044075) level_5_battery_lsc

0xc09c,	// (0x0004407e) level_6_battery_lsc

0xc039,	// (0x0004401b) level_7_battery_lsc

0xc0a5,	// (0x00044087) scroll_handle_focus_pane_g1

0xc0ae,	// (0x00044090) scroll_handle_focus_pane_g2

0xc0b7,	// (0x00044099) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00047717) scroll_handle_focus_pane_g

0x9f7b,	// (0x00041f5d) list_single_2graphic_pane_g1_ParamLimits

0x9f7b,	// (0x00041f5d) list_single_2graphic_pane_g1

0x97a7,	// (0x00041789) list_single_2graphic_pane_g2_ParamLimits

0x97a7,	// (0x00041789) list_single_2graphic_pane_g2

0xda38,	// (0x00045a1a) list_single_2graphic_pane_g3_ParamLimits

0xda38,	// (0x00045a1a) list_single_2graphic_pane_g3

0x9f87,	// (0x00041f69) list_single_2graphic_pane_g4_ParamLimits

0x9f87,	// (0x00041f69) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0004771e) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0004771e) list_single_2graphic_pane_g

0x9f93,	// (0x00041f75) list_single_2graphic_pane_t1_ParamLimits

0x9f93,	// (0x00041f75) list_single_2graphic_pane_t1

0x9fc1,	// (0x00041fa3) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9fc1,	// (0x00041fa3) list_double2_graphic_large_graphic_pane_g1

0x99be,	// (0x000419a0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x99be,	// (0x000419a0) list_double2_graphic_large_graphic_pane_g2

0x99cf,	// (0x000419b1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x99cf,	// (0x000419b1) list_double2_graphic_large_graphic_pane_g3

0x9fd3,	// (0x00041fb5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9fd3,	// (0x00041fb5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00047727) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00047727) list_double2_graphic_large_graphic_pane_g

0x9fdf,	// (0x00041fc1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9fdf,	// (0x00041fc1) list_double2_graphic_large_graphic_pane_t1

0x9ff5,	// (0x00041fd7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9ff5,	// (0x00041fd7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00047730) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00047730) list_double2_graphic_large_graphic_pane_t

0xc149,	// (0x0004412b) popup_fast_swap_window_ParamLimits

0xc149,	// (0x0004412b) popup_fast_swap_window

0xc167,	// (0x00044149) popup_side_volume_key_window

0xc185,	// (0x00044167) stacon_top_pane

0xc18f,	// (0x00044171) status_pane_ParamLimits

0xc18f,	// (0x00044171) status_pane

0xa09e,	// (0x00042080) status_small_pane

0x7bdb,	// (0x0003fbbd) control_pane

0x7bdb,	// (0x0003fbbd) stacon_bottom_pane

0xb9fd,	// (0x000439df) scroll_pane_cp121

0xb9f4,	// (0x000439d6) set_content_pane

0xa007,	// (0x00041fe9) bg_active_tab_pane_g1_cp1

0xc0c0,	// (0x000440a2) bg_active_tab_pane_g2_cp1

0xa010,	// (0x00041ff2) bg_active_tab_pane_g3_cp1

0xa007,	// (0x00041fe9) bg_passive_tab_pane_g1_cp1

0xc0c0,	// (0x000440a2) bg_passive_tab_pane_g2_cp1

0xa010,	// (0x00041ff2) bg_passive_tab_pane_g3_cp1

0xa019,	// (0x00041ffb) bg_active_tab_pane_g1_cp2

0xc0c0,	// (0x000440a2) bg_active_tab_pane_g2_cp2

0xa022,	// (0x00042004) bg_active_tab_pane_g3_cp2

0xa019,	// (0x00041ffb) bg_passive_tab_pane_g1_cp2

0xc0c0,	// (0x000440a2) bg_passive_tab_pane_g2_cp2

0xa022,	// (0x00042004) bg_passive_tab_pane_g3_cp2

0xa02b,	// (0x0004200d) bg_active_tab_pane_g1_cp3

0xc0c0,	// (0x000440a2) bg_active_tab_pane_g2_cp3

0xa034,	// (0x00042016) bg_active_tab_pane_g3_cp3

0xa02b,	// (0x0004200d) bg_passive_tab_pane_g1_cp3

0xc0c0,	// (0x000440a2) bg_passive_tab_pane_g2_cp3

0xa034,	// (0x00042016) bg_passive_tab_pane_g3_cp3

0xa03d,	// (0x0004201f) bg_active_tab_pane_g1_cp4

0xc0c0,	// (0x000440a2) bg_active_tab_pane_g2_cp4

0xa046,	// (0x00042028) bg_active_tab_pane_g3_cp4

0xa03d,	// (0x0004201f) bg_passive_tab_pane_g1_cp4

0xc0c0,	// (0x000440a2) bg_passive_tab_pane_g2_cp4

0xa046,	// (0x00042028) bg_passive_tab_pane_g3_cp4

0xc107,	// (0x000440e9) bg_active_tab_pane_g1_cp5

0xc0c0,	// (0x000440a2) bg_active_tab_pane_g2_cp5

0xc110,	// (0x000440f2) bg_active_tab_pane_g3_cp5

0xc107,	// (0x000440e9) bg_passive_tab_pane_g1_cp5

0xc0c0,	// (0x000440a2) bg_passive_tab_pane_g2_cp5

0xc110,	// (0x000440f2) bg_passive_tab_pane_g3_cp5

0x3e7f,	// (0x0003be61) list_set_graphic_pane_ParamLimits

0x3e7f,	// (0x0003be61) list_set_graphic_pane

0x7bdb,	// (0x0003fbbd) bg_set_opt_pane_cp4

0xa04f,	// (0x00042031) list_set_graphic_pane_g1_ParamLimits

0xa04f,	// (0x00042031) list_set_graphic_pane_g1

0xa05b,	// (0x0004203d) list_set_graphic_pane_g2_ParamLimits

0xa05b,	// (0x0004203d) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00047735) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00047735) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x00047aba) volume_small_pane_cp_g

0xa07f,	// (0x00042061) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa07f,	// (0x00042061) list_double2_large_graphic_pane_g1_cp2

0xa08d,	// (0x0004206f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa08d,	// (0x0004206f) list_double2_large_graphic_pane_g2_cp2

0xc119,	// (0x000440fb) list_double2_large_graphic_pane_g3_cp2

0xc121,	// (0x00044103) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc121,	// (0x00044103) list_double2_large_graphic_pane_t1_cp2

0xc137,	// (0x00044119) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc137,	// (0x00044119) list_double2_large_graphic_pane_t2_cp2

0xc5f5,	// (0x000445d7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc5f5,	// (0x000445d7) list_double_large_graphic_pane_g1_cp2

0xc608,	// (0x000445ea) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc608,	// (0x000445ea) list_double_large_graphic_pane_g2_cp2

0xc270,	// (0x00044252) list_double_large_graphic_pane_g3_cp2

0x3404,	// (0x0003b3e6) list_double_large_graphic_pane_g4_cp

0x340c,	// (0x0003b3ee) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x340c,	// (0x0003b3ee) list_double_large_graphic_pane_t1_cp2

0x3423,	// (0x0003b405) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3423,	// (0x0003b405) list_double_large_graphic_pane_t2_cp2

0xa0a9,	// (0x0004208b) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa0a9,	// (0x0004208b) list_double2_graphic_pane_g1_cp2

0xa0b7,	// (0x00042099) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa0b7,	// (0x00042099) list_double2_graphic_pane_g2_cp2

0xa0c8,	// (0x000420aa) list_double2_graphic_pane_g3_cp2

0xc19d,	// (0x0004417f) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc19d,	// (0x0004417f) list_double2_graphic_pane_t1_cp2

0xc1b3,	// (0x00044195) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc1b3,	// (0x00044195) list_double2_graphic_pane_t2_cp2

0xc1c5,	// (0x000441a7) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc1c5,	// (0x000441a7) list_single_number_heading_pane_g1_cp2

0xc1d1,	// (0x000441b3) list_single_number_heading_pane_g2_cp2

0xc1d9,	// (0x000441bb) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc1d9,	// (0x000441bb) list_single_number_heading_pane_t1_cp2

0xa0d2,	// (0x000420b4) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa0d2,	// (0x000420b4) list_single_number_heading_pane_t2_cp2

0xc1ef,	// (0x000441d1) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc1ef,	// (0x000441d1) list_single_number_heading_pane_t3_cp2

0xc1c5,	// (0x000441a7) list_single_heading_pane_g1_cp2_ParamLimits

0xc1c5,	// (0x000441a7) list_single_heading_pane_g1_cp2

0xc1d1,	// (0x000441b3) list_single_heading_pane_g2_cp2

0xc1d9,	// (0x000441bb) list_single_heading_pane_t1_cp2_ParamLimits

0xc1d9,	// (0x000441bb) list_single_heading_pane_t1_cp2

0xc5e1,	// (0x000445c3) list_single_heading_pane_t2_cp2_ParamLimits

0xc5e1,	// (0x000445c3) list_single_heading_pane_t2_cp2

0x3122,	// (0x0003b104) list_double_graphic_pane_g1_cp2_ParamLimits

0x3122,	// (0x0003b104) list_double_graphic_pane_g1_cp2

0x312e,	// (0x0003b110) list_double_graphic_pane_g2_cp2_ParamLimits

0x312e,	// (0x0003b110) list_double_graphic_pane_g2_cp2

0x313d,	// (0x0003b11f) list_double_graphic_pane_g3_cp2

0x3145,	// (0x0003b127) list_double_graphic_pane_t1_cp2_ParamLimits

0x3145,	// (0x0003b127) list_double_graphic_pane_t1_cp2

0x315b,	// (0x0003b13d) list_double_graphic_pane_t2_cp2_ParamLimits

0x315b,	// (0x0003b13d) list_double_graphic_pane_t2_cp2

0xc264,	// (0x00044246) list_double_number_pane_g1_cp2_ParamLimits

0xc264,	// (0x00044246) list_double_number_pane_g1_cp2

0xc270,	// (0x00044252) list_double_number_pane_g2_cp2

0xc57b,	// (0x0004455d) list_double_number_pane_t1_cp2_ParamLimits

0xc57b,	// (0x0004455d) list_double_number_pane_t1_cp2

0x30fa,	// (0x0003b0dc) list_double_number_pane_t2_cp2_ParamLimits

0x30fa,	// (0x0003b0dc) list_double_number_pane_t2_cp2

0x3110,	// (0x0003b0f2) list_double_number_pane_t3_cp2_ParamLimits

0x3110,	// (0x0003b0f2) list_double_number_pane_t3_cp2

0xc4c9,	// (0x000444ab) list_single_graphic_pane_g1_cp2_ParamLimits

0xc4c9,	// (0x000444ab) list_single_graphic_pane_g1_cp2

0xc2b0,	// (0x00044292) list_single_graphic_pane_g2_cp2_ParamLimits

0xc2b0,	// (0x00044292) list_single_graphic_pane_g2_cp2

0xc2bc,	// (0x0004429e) list_single_graphic_pane_g3_cp2

0x2fa5,	// (0x0003af87) list_single_graphic_pane_t1_cp2_ParamLimits

0x2fa5,	// (0x0003af87) list_single_graphic_pane_t1_cp2

0xc2b0,	// (0x00044292) list_single_number_pane_g1_cp2_ParamLimits

0xc2b0,	// (0x00044292) list_single_number_pane_g1_cp2

0xc2bc,	// (0x0004429e) list_single_number_pane_g2_cp2

0x2fa5,	// (0x0003af87) list_single_number_pane_t1_cp2_ParamLimits

0x2fa5,	// (0x0003af87) list_single_number_pane_t1_cp2

0xc4b5,	// (0x00044497) list_single_number_pane_t2_cp2_ParamLimits

0xc4b5,	// (0x00044497) list_single_number_pane_t2_cp2

0xa08d,	// (0x0004206f) list_double2_pane_g1_cp2_ParamLimits

0xa08d,	// (0x0004206f) list_double2_pane_g1_cp2

0xc119,	// (0x000440fb) list_double2_pane_g2_cp2

0xc23c,	// (0x0004421e) list_double2_pane_t1_cp2_ParamLimits

0xc23c,	// (0x0004421e) list_double2_pane_t1_cp2

0xc252,	// (0x00044234) list_double2_pane_t2_cp2_ParamLimits

0xc252,	// (0x00044234) list_double2_pane_t2_cp2

0xc264,	// (0x00044246) list_double_pane_g1_cp2_ParamLimits

0xc264,	// (0x00044246) list_double_pane_g1_cp2

0xc270,	// (0x00044252) list_double_pane_g2_cp2

0xc278,	// (0x0004425a) list_double_pane_t1_cp2_ParamLimits

0xc278,	// (0x0004425a) list_double_pane_t1_cp2

0xc28e,	// (0x00044270) list_double_pane_t2_cp2_ParamLimits

0xc28e,	// (0x00044270) list_double_pane_t2_cp2

0xc2a0,	// (0x00044282) list_single_pane_cp2_g3

0xc2b0,	// (0x00044292) list_single_pane_g1_cp2_ParamLimits

0xc2b0,	// (0x00044292) list_single_pane_g1_cp2

0xc2bc,	// (0x0004429e) list_single_pane_g2_cp2

0xc2c4,	// (0x000442a6) list_single_pane_t1_cp2_ParamLimits

0xc2c4,	// (0x000442a6) list_single_pane_t1_cp2

0xa100,	// (0x000420e2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa100,	// (0x000420e2) list_single_large_graphic_pane_g1_cp2

0xc2dc,	// (0x000442be) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc2dc,	// (0x000442be) list_single_large_graphic_pane_g2_cp2

0xc2e8,	// (0x000442ca) list_single_large_graphic_pane_g3_cp2

0xc2f0,	// (0x000442d2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc2f0,	// (0x000442d2) list_single_large_graphic_pane_g4_cp1

0xc30a,	// (0x000442ec) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc30a,	// (0x000442ec) list_single_large_graphic_pane_t1_cp2

0x2f6f,	// (0x0003af51) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2f6f,	// (0x0003af51) list_single_graphic_heading_pane_g1_cp2

0xc490,	// (0x00044472) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc490,	// (0x00044472) list_single_graphic_heading_pane_g4_cp2

0xc2bc,	// (0x0004429e) list_single_graphic_heading_pane_g5_cp2

0x2f7b,	// (0x0003af5d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2f7b,	// (0x0003af5d) list_single_graphic_heading_pane_t1_cp2

0xc4a1,	// (0x00044483) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc4a1,	// (0x00044483) list_single_graphic_heading_pane_t2_cp2

0x2f30,	// (0x0003af12) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2f30,	// (0x0003af12) list_single_2graphic_pane_g1_cp2

0xc490,	// (0x00044472) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc490,	// (0x00044472) list_single_2graphic_pane_g2_cp2

0xc2bc,	// (0x0004429e) list_single_2graphic_pane_g3_cp2

0x2f4d,	// (0x0003af2f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2f4d,	// (0x0003af2f) list_single_2graphic_pane_g4_cp2

0x2f59,	// (0x0003af3b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2f59,	// (0x0003af3b) list_single_2graphic_pane_t1_cp2

0x7bd1,	// (0x0003fbb3) list_highlight_pane_g10_cp1

0x2b08,	// (0x0003aaea) list_highlight_pane_g1_cp1

0x2b10,	// (0x0003aaf2) list_highlight_pane_g2_cp1

0x2b18,	// (0x0003aafa) list_highlight_pane_g3_cp1

0x2b20,	// (0x0003ab02) list_highlight_pane_g4_cp1

0x2b28,	// (0x0003ab0a) list_highlight_pane_g5_cp1

0x2b30,	// (0x0003ab12) list_highlight_pane_g6_cp1

0x2b38,	// (0x0003ab1a) list_highlight_pane_g7_cp1

0x2b40,	// (0x0003ab22) list_highlight_pane_g8_cp1

0x2b48,	// (0x0003ab2a) list_highlight_pane_g9_cp1

0xc456,	// (0x00044438) form_field_slider_pane_t3

0xc464,	// (0x00044446) form_field_slider_pane_t4

0x2a44,	// (0x0003aa26) slider_form_pane_ParamLimits

0x2a44,	// (0x0003aa26) slider_form_pane

0x7bdb,	// (0x0003fbbd) control_abbreviations

0x7bdb,	// (0x0003fbbd) control_conventions

0x7bdb,	// (0x0003fbbd) control_definitions

0x7bdb,	// (0x0003fbbd) format_table_attribute

0x3230,	// (0x0003b212) bg_popup_preview_window_pane_g9

0x7bdb,	// (0x0003fbbd) format_table_data2

0x7bdb,	// (0x0003fbbd) format_table_data3

0x7bdb,	// (0x0003fbbd) format_table_data_example

0x0008,

0x7bdb,	// (0x0003fbbd) intro_purpose

0xf8ea,	// (0x000478cc) bg_popup_preview_window_pane_g

0x7bdb,	// (0x0003fbbd) texts_category

0x7bdb,	// (0x0003fbbd) texts_graphics

0xc320,	// (0x00044302) text_digital

0xc32f,	// (0x00044311) text_primary

0xc33e,	// (0x00044320) text_primary_small

0xc34d,	// (0x0004432f) text_secondary

0xc35c,	// (0x0004433e) text_title

0x39c4,	// (0x0003b9a6) bg_passive_tab_pane_g1_cp3_srt

0xc0c0,	// (0x000440a2) bg_passive_tab_pane_g2_cp3_srt

0x39cd,	// (0x0003b9af) bg_passive_tab_pane_g3_cp3_srt

0x7d68,	// (0x0003fd4a) bg_active_tab_pane_cp3_srt_ParamLimits

0x7d68,	// (0x0003fd4a) bg_active_tab_pane_cp3_srt

0x39d6,	// (0x0003b9b8) tabs_4_active_pane_srt_g1

0xc8ed,	// (0x000448cf) tabs_4_active_pane_srt_t1_ParamLimits

0xc8ed,	// (0x000448cf) tabs_4_active_pane_srt_t1

0x39c4,	// (0x0003b9a6) bg_active_tab_pane_g1_cp3_copy1

0xc0c0,	// (0x000440a2) bg_active_tab_pane_g2_cp3_copy1

0x39cd,	// (0x0003b9af) bg_active_tab_pane_g3_cp3_copy1

0x7c35,	// (0x0003fc17) tabs_2_long_active_pane_srt_ParamLimits

0x7c35,	// (0x0003fc17) tabs_2_long_active_pane_srt

0x7c35,	// (0x0003fc17) tabs_2_long_passive_pane_srt_ParamLimits

0x7c35,	// (0x0003fc17) tabs_2_long_passive_pane_srt

0x00fa,	// (0x000380dc) bg_passive_tab_pane_cp4_srt_ParamLimits

0x00fa,	// (0x000380dc) bg_passive_tab_pane_cp4_srt

0x366c,	// (0x0003b64e) bg_passive_tab_pane_g1_cp4_srt

0xc0c0,	// (0x000440a2) bg_passive_tab_pane_g2_cp4_srt

0x3675,	// (0x0003b657) bg_passive_tab_pane_g3_cp4_srt

0x7c35,	// (0x0003fc17) bg_active_tab_pane_cp4_srt_ParamLimits

0x7c35,	// (0x0003fc17) bg_active_tab_pane_cp4_srt

0xc6cb,	// (0x000446ad) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc6cb,	// (0x000446ad) tabs_2_long_active_pane_srt_t1

0x366c,	// (0x0003b64e) bg_active_tab_pane_g1_cp4_srt

0xc0c0,	// (0x000440a2) bg_active_tab_pane_g2_cp4_srt

0x3675,	// (0x0003b657) bg_active_tab_pane_g3_cp4_srt

0x7d68,	// (0x0003fd4a) tabs_3_long_active_pane_srt_ParamLimits

0x7d68,	// (0x0003fd4a) tabs_3_long_active_pane_srt

0x7d68,	// (0x0003fd4a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7d68,	// (0x0003fd4a) tabs_3_long_passive_pane_cp_srt

0x7d68,	// (0x0003fd4a) tabs_3_long_passive_pane_srt_ParamLimits

0x7d68,	// (0x0003fd4a) tabs_3_long_passive_pane_srt

0x00fa,	// (0x000380dc) bg_passive_tab_pane_cp5_srt_ParamLimits

0x00fa,	// (0x000380dc) bg_passive_tab_pane_cp5_srt

0xc107,	// (0x000440e9) bg_passive_tab_pane_g1_cp5_srt

0xc0c0,	// (0x000440a2) bg_passive_tab_pane_g2_cp5_srt

0xc110,	// (0x000440f2) bg_passive_tab_pane_g3_cp5_srt

0x7c35,	// (0x0003fc17) bg_active_tab_pane_cp5_srt_ParamLimits

0x7c35,	// (0x0003fc17) bg_active_tab_pane_cp5_srt

0xc6b5,	// (0x00044697) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc6b5,	// (0x00044697) tabs_3_long_active_pane_srt_t1

0xc107,	// (0x000440e9) bg_active_tab_pane_g1_cp5_srt

0xc0c0,	// (0x000440a2) bg_active_tab_pane_g2_cp5_srt

0xc110,	// (0x000440f2) bg_active_tab_pane_g3_cp5_srt

0x364c,	// (0x0003b62e) navi_text_pane_srt_t1

0x3644,	// (0x0003b626) navi_icon_pane_srt_g1

0xf4d7,	// (0x000474b9) midp_editing_number_pane_srt

0xc36b,	// (0x0004434d) midp_ticker_pane_srt

0xf4df,	// (0x000474c1) midp_ticker_pane_srt_g1

0xf4e7,	// (0x000474c9) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00047754) midp_ticker_pane_srt_g

0xf4ef,	// (0x000474d1) midp_ticker_pane_srt_t1

0x3635,	// (0x0003b617) midp_editing_number_pane_t1_copy1

0x00fa,	// (0x000380dc) listscroll_midp_pane

0x00fa,	// (0x000380dc) midp_form_pane

0xf33b,	// (0x0004731d) midp_info_popup_window_ParamLimits

0xf33b,	// (0x0004731d) midp_info_popup_window

0xbac6,	// (0x00043aa8) bg_popup_sub_pane_cp50_ParamLimits

0xbac6,	// (0x00043aa8) bg_popup_sub_pane_cp50

0x273e,	// (0x0003a720) listscroll_midp_info_pane_ParamLimits

0x273e,	// (0x0003a720) listscroll_midp_info_pane

0x2726,	// (0x0003a708) listscroll_form_midp_pane_ParamLimits

0x2726,	// (0x0003a708) listscroll_form_midp_pane

0x2732,	// (0x0003a714) scroll_bar_cp050

0xc44a,	// (0x0004442c) list_midp_pane

0x4459,	// (0x0003c43b) signal_pane_g2_cp

0x2640,	// (0x0003a622) listscroll_midp_info_pane_t1_ParamLimits

0x2640,	// (0x0003a622) listscroll_midp_info_pane_t1

0x2658,	// (0x0003a63a) listscroll_midp_info_pane_t2_ParamLimits

0x2658,	// (0x0003a63a) listscroll_midp_info_pane_t2

0x2696,	// (0x0003a678) listscroll_midp_info_pane_t3_ParamLimits

0x2696,	// (0x0003a678) listscroll_midp_info_pane_t3

0x26d0,	// (0x0003a6b2) listscroll_midp_info_pane_t4_ParamLimits

0x26d0,	// (0x0003a6b2) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00047807) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00047807) listscroll_midp_info_pane_t

0xbb46,	// (0x00043b28) scroll_pane_cp21

0x25da,	// (0x0003a5bc) form_midp_field_choice_group_pane

0x25e3,	// (0x0003a5c5) form_midp_field_text_pane

0x2626,	// (0x0003a608) form_midp_field_time_pane

0x262e,	// (0x0003a610) form_midp_gauge_slider_pane

0x2637,	// (0x0003a619) form_midp_gauge_wait_pane

0x7bdb,	// (0x0003fbbd) form_midp_image_pane

0xafa6,	// (0x00042f88) list_single_midp_pane_ParamLimits

0xafa6,	// (0x00042f88) list_single_midp_pane

0xc422,	// (0x00044404) form_midp_field_text_pane_t1

0x238a,	// (0x0003a36c) input_focus_pane_cp050

0x25c9,	// (0x0003a5ab) list_midp_form_text_pane

0x256d,	// (0x0003a54f) form_midp_field_choice_group_pane_t1

0x257b,	// (0x0003a55d) input_focus_pane_cp051

0x258f,	// (0x0003a571) list_midp_choice_pane

0x7bdb,	// (0x0003fbbd) status_idle_pane

0x2551,	// (0x0003a533) form_midp_field_time_pane_t1

0x7bd1,	// (0x0003fbb3) wait_anim_pane_g2_copy1

0x255f,	// (0x0003a541) form_midp_field_time_pane_t2

0x0001,

0xf396,	// (0x00047378) aid_navinavi_width_2_pane

0xf820,	// (0x00047802) form_midp_field_time_pane_t

0x7bdb,	// (0x0003fbbd) input_focus_pane_cp052

0x7bdb,	// (0x0003fbbd) bg_input_focus_pane_cp040

0x2511,	// (0x0003a4f3) form_midp_gauge_slider_pane_t1

0x251f,	// (0x0003a501) form_midp_gauge_slider_pane_t2

0xc406,	// (0x000443e8) form_midp_gauge_slider_pane_t3

0xc414,	// (0x000443f6) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x000477f9) form_midp_gauge_slider_pane_t

0x2549,	// (0x0003a52b) form_midp_slider_pane

0x7c35,	// (0x0003fc17) bg_input_focus_pane_cp041_ParamLimits

0x7c35,	// (0x0003fc17) bg_input_focus_pane_cp041

0x24de,	// (0x0003a4c0) form_midp_gauge_wait_pane_t1_ParamLimits

0x24de,	// (0x0003a4c0) form_midp_gauge_wait_pane_t1

0x24f0,	// (0x0003a4d2) form_midp_gauge_wait_pane_t2_ParamLimits

0x24f0,	// (0x0003a4d2) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x000477f4) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x000477f4) form_midp_gauge_wait_pane_t

0x2502,	// (0x0003a4e4) form_midp_wait_pane_ParamLimits

0x2502,	// (0x0003a4e4) form_midp_wait_pane

0x24a6,	// (0x0003a488) form_midp_image_pane_g1

0x24af,	// (0x0003a491) form_midp_image_pane_t1

0x24be,	// (0x0003a4a0) form_midp_image_pane_t2

0x24cd,	// (0x0003a4af) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x000477ed) form_midp_image_pane_t

0x249d,	// (0x0003a47f) list_single_midp_pane_g1

0xdca4,	// (0x00045c86) list_single_midp_pane_t1

0xc3ef,	// (0x000443d1) list_midp_form_item_pane_ParamLimits

0xc3ef,	// (0x000443d1) list_midp_form_item_pane

0xf350,	// (0x00047332) list_midp_form_item_pane_t1

0xf35f,	// (0x00047341) midp_ticker_pane_g1

0xf36b,	// (0x0004734d) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0004773a) midp_ticker_pane_g

0xa1a5,	// (0x00042187) midp_ticker_pane_t1

0xc85a,	// (0x0004483c) midp_editing_number_pane_t1

0x3886,	// (0x0003b868) midp_editing_number_pane

0x3895,	// (0x0003b877) midp_ticker_pane

0x3625,	// (0x0003b607) ai_message_heading_pane

0x7bdb,	// (0x0003fbbd) bg_popup_window_pane_cp14

0x362d,	// (0x0003b60f) listscroll_ai_message_pane

0x35ab,	// (0x0003b58d) ai_message_heading_pane_g1_ParamLimits

0x35ab,	// (0x0003b58d) ai_message_heading_pane_g1

0x35b7,	// (0x0003b599) ai_message_heading_pane_g2_ParamLimits

0x35b7,	// (0x0003b599) ai_message_heading_pane_g2

0x35c5,	// (0x0003b5a7) ai_message_heading_pane_g3_ParamLimits

0x35c5,	// (0x0003b5a7) ai_message_heading_pane_g3

0x35d1,	// (0x0003b5b3) ai_message_heading_pane_g4_ParamLimits

0x35d1,	// (0x0003b5b3) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0004792e) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0004792e) ai_message_heading_pane_g

0x35dd,	// (0x0003b5bf) ai_message_heading_pane_t1_ParamLimits

0x35dd,	// (0x0003b5bf) ai_message_heading_pane_t1

0x35f7,	// (0x0003b5d9) ai_message_heading_pane_t2_ParamLimits

0x35f7,	// (0x0003b5d9) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00047937) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00047937) ai_message_heading_pane_t

0x360b,	// (0x0003b5ed) bg_popup_heading_pane_cp1_ParamLimits

0x360b,	// (0x0003b5ed) bg_popup_heading_pane_cp1

0x3599,	// (0x0003b57b) list_ai_message_pane_ParamLimits

0x3599,	// (0x0003b57b) list_ai_message_pane

0xbb46,	// (0x00043b28) scroll_pane_cp10

0x3535,	// (0x0003b517) list_ai_message_pane_g1

0x353d,	// (0x0003b51f) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0004790b) list_ai_message_pane_g

0x3545,	// (0x0003b527) list_ai_message_pane_t1_ParamLimits

0x3545,	// (0x0003b527) list_ai_message_pane_t1

0x355a,	// (0x0003b53c) list_ai_message_pane_t2_ParamLimits

0x355a,	// (0x0003b53c) list_ai_message_pane_t2

0x356f,	// (0x0003b551) list_ai_message_pane_t3_ParamLimits

0x356f,	// (0x0003b551) list_ai_message_pane_t3

0x3584,	// (0x0003b566) list_ai_message_pane_t4_ParamLimits

0x3584,	// (0x0003b566) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00047910) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00047910) list_ai_message_pane_t

0xc69b,	// (0x0004467d) cell_ai_soft_ind_pane_ParamLimits

0xc69b,	// (0x0004467d) cell_ai_soft_ind_pane

0xf377,	// (0x00047359) cell_ai_soft_ind_pane_g1_ParamLimits

0xf377,	// (0x00047359) cell_ai_soft_ind_pane_g1

0x7bdb,	// (0x0003fbbd) grid_highlight_cp1

0xf384,	// (0x00047366) text_secondary_cp56_ParamLimits

0xf384,	// (0x00047366) text_secondary_cp56

0x34f3,	// (0x0003b4d5) example_general_pane_ParamLimits

0x34f3,	// (0x0003b4d5) example_general_pane

0x34ff,	// (0x0003b4e1) example_parent_pane_g1_ParamLimits

0x34ff,	// (0x0003b4e1) example_parent_pane_g1

0x350b,	// (0x0003b4ed) example_parent_pane_t1_ParamLimits

0x350b,	// (0x0003b4ed) example_parent_pane_t1

0xa835,	// (0x00042817) popup_preview_text_window_ParamLimits

0xa835,	// (0x00042817) popup_preview_text_window

0xc2a8,	// (0x0004428a) list_single_pane_cp2_g4

0x7e1e,	// (0x0003fe00) bg_popup_preview_window_pane_ParamLimits

0x7e1e,	// (0x0003fe00) bg_popup_preview_window_pane

0x323a,	// (0x0003b21c) popup_preview_text_window_t1_ParamLimits

0x323a,	// (0x0003b21c) popup_preview_text_window_t1

0x3258,	// (0x0003b23a) popup_preview_text_window_t2_ParamLimits

0x3258,	// (0x0003b23a) popup_preview_text_window_t2

0x32a1,	// (0x0003b283) popup_preview_text_window_t3_ParamLimits

0x32a1,	// (0x0003b283) popup_preview_text_window_t3

0x32e6,	// (0x0003b2c8) popup_preview_text_window_t4_ParamLimits

0x32e6,	// (0x0003b2c8) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x000478df) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x000478df) popup_preview_text_window_t

0x3364,	// (0x0003b346) scroll_pane_cp11

0x2316,	// (0x0003a2f8) bg_popup_preview_window_pane_g1

0x31ee,	// (0x0003b1d0) bg_popup_preview_window_pane_g2

0x31f8,	// (0x0003b1da) bg_popup_preview_window_pane_g3

0x3202,	// (0x0003b1e4) bg_popup_preview_window_pane_g4

0x320c,	// (0x0003b1ee) bg_popup_preview_window_pane_g5

0x3216,	// (0x0003b1f8) bg_popup_preview_window_pane_g6

0x321e,	// (0x0003b200) bg_popup_preview_window_pane_g7

0x3226,	// (0x0003b208) bg_popup_preview_window_pane_g8

0xec9d,	// (0x00046c7f) aid_popup_width_pane

0xa7a5,	// (0x00042787) popup_midp_note_alarm_window_ParamLimits

0xa7a5,	// (0x00042787) popup_midp_note_alarm_window

0xba0e,	// (0x000439f0) data_form_pane_ParamLimits

0x9c0a,	// (0x00041bec) form_field_data_pane_g1

0x9c14,	// (0x00041bf6) form_field_data_pane_t1_ParamLimits

0xba1a,	// (0x000439fc) input_focus_pane_ParamLimits

0xdb17,	// (0x00045af9) data_form_wide_pane_ParamLimits

0xdb28,	// (0x00045b0a) form_field_data_wide_pane_g1

0xdb34,	// (0x00045b16) form_field_data_wide_pane_t1_ParamLimits

0x858b,	// (0x0004056d) input_focus_pane_cp6_ParamLimits

0x9d42,	// (0x00041d24) input_popup_find_pane_g1_ParamLimits

0x9d42,	// (0x00041d24) input_popup_find_pane_g1

0xeff1,	// (0x00046fd3) aid_navi_side_left_pane

0xf006,	// (0x00046fe8) aid_navi_side_right_pane

0x2c03,	// (0x0003abe5) bg_popup_window_pane_cp30_ParamLimits

0x2c03,	// (0x0003abe5) bg_popup_window_pane_cp30

0x2c7d,	// (0x0003ac5f) popup_midp_note_alarm_window_g1_ParamLimits

0x2c7d,	// (0x0003ac5f) popup_midp_note_alarm_window_g1

0x2cad,	// (0x0003ac8f) popup_midp_note_alarm_window_t1_ParamLimits

0x2cad,	// (0x0003ac8f) popup_midp_note_alarm_window_t1

0x2d4e,	// (0x0003ad30) popup_midp_note_alarm_window_t2_ParamLimits

0x2d4e,	// (0x0003ad30) popup_midp_note_alarm_window_t2

0x2dfc,	// (0x0003adde) popup_midp_note_alarm_window_t3_ParamLimits

0x2dfc,	// (0x0003adde) popup_midp_note_alarm_window_t3

0x2e2e,	// (0x0003ae10) popup_midp_note_alarm_window_t4_ParamLimits

0x2e2e,	// (0x0003ae10) popup_midp_note_alarm_window_t4

0x2e54,	// (0x0003ae36) popup_midp_note_alarm_window_t5_ParamLimits

0x2e54,	// (0x0003ae36) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0004787c) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0004787c) popup_midp_note_alarm_window_t

0x2f00,	// (0x0003aee2) wait_bar_pane_cp1_ParamLimits

0x2f00,	// (0x0003aee2) wait_bar_pane_cp1

0x7bdb,	// (0x0003fbbd) wait_anim_pane_copy1

0x7bdb,	// (0x0003fbbd) wait_border_pane_copy1

0x28e8,	// (0x0003a8ca) wait_border_pane_g1_copy1

0xdb4e,	// (0x00045b30) form_field_popup_pane_g1

0x9c2e,	// (0x00041c10) form_field_popup_pane_t1_ParamLimits

0xba1a,	// (0x000439fc) input_focus_pane_cp7_ParamLimits

0xba48,	// (0x00043a2a) list_form_pane_ParamLimits

0xdb56,	// (0x00045b38) form_field_popup_wide_pane_g1

0xdb5e,	// (0x00045b40) form_field_popup_wide_pane_t1_ParamLimits

0xba1a,	// (0x000439fc) input_focus_pane_cp8_ParamLimits

0xba54,	// (0x00043a36) list_form_wide_pane_ParamLimits

0x3a51,	// (0x0003ba33) aid_size_cell_graphic_pane

0x9cad,	// (0x00041c8f) data_form_pane_t1_ParamLimits

0xb13f,	// (0x00043121) data_form_wide_pane_t1_ParamLimits

0xac39,	// (0x00042c1b) bg_status_flat_pane

0x93cc,	// (0x000413ae) title_pane_t1_ParamLimits

0x7bfd,	// (0x0003fbdf) title_pane_t2_ParamLimits

0x7c23,	// (0x0003fc05) title_pane_t3_ParamLimits

0xf557,	// (0x00047539) title_pane_t_ParamLimits

0x9e52,	// (0x00041e34) level_1_signal_ParamLimits

0x9e64,	// (0x00041e46) level_2_signal_ParamLimits

0x9e77,	// (0x00041e59) level_3_signal_ParamLimits

0x9e8a,	// (0x00041e6c) level_4_signal_ParamLimits

0x9e9d,	// (0x00041e7f) level_5_signal_ParamLimits

0x9eb0,	// (0x00041e92) level_6_signal_ParamLimits

0x9ec3,	// (0x00041ea5) level_7_signal_ParamLimits

0x9e52,	// (0x00041e34) level_1_battery_ParamLimits

0x9e64,	// (0x00041e46) level_2_battery_ParamLimits

0x9e77,	// (0x00041e59) level_3_battery_ParamLimits

0x9e8a,	// (0x00041e6c) level_4_battery_ParamLimits

0x9e9d,	// (0x00041e7f) level_5_battery_ParamLimits

0x9eb0,	// (0x00041e92) level_6_battery_ParamLimits

0x9ec3,	// (0x00041ea5) level_7_battery_ParamLimits

0x2b08,	// (0x0003aaea) bg_status_flat_pane_g1

0x2b10,	// (0x0003aaf2) bg_status_flat_pane_g2

0x2b18,	// (0x0003aafa) bg_status_flat_pane_g3

0x2b20,	// (0x0003ab02) bg_status_flat_pane_g4

0x2b28,	// (0x0003ab0a) bg_status_flat_pane_g5

0x2b30,	// (0x0003ab12) bg_status_flat_pane_g6

0x2b38,	// (0x0003ab1a) bg_status_flat_pane_g7

0x9460,	// (0x00041442) tabs_3_active_pane_t1_ParamLimits

0x9460,	// (0x00041442) tabs_3_passive_pane_t1_ParamLimits

0x947a,	// (0x0004145c) tabs_4_active_pane_t1_ParamLimits

0x947a,	// (0x0004145c) tabs_4_1_passive_pane_t1_ParamLimits

0x9d58,	// (0x00041d3a) tabs_2_active_pane_t1_ParamLimits

0x9d58,	// (0x00041d3a) tabs_2_passive_pane_t1_ParamLimits

0x7c35,	// (0x0003fc17) bg_active_tab_pane_cp4_ParamLimits

0x9d6a,	// (0x00041d4c) tabs_2_long_active_pane_t1_ParamLimits

0x00fa,	// (0x000380dc) bg_passive_tab_pane_cp4_ParamLimits

0x052d,	// (0x0003850f) list_single_midp_graphic_pane_t1_ParamLimits

0x7c35,	// (0x0003fc17) bg_active_tab_pane_cp5_ParamLimits

0x9d7d,	// (0x00041d5f) tabs_3_long_active_pane_t1_ParamLimits

0x00fa,	// (0x000380dc) bg_passive_tab_pane_cp5_ParamLimits

0x052d,	// (0x0003850f) list_single_midp_graphic_pane_t1

0xac39,	// (0x00042c1b) bg_status_flat_pane_ParamLimits

0x1f8e,	// (0x00039f70) indicator_pane_cp2_ParamLimits

0x1f8e,	// (0x00039f70) indicator_pane_cp2

0xadcf,	// (0x00042db1) navi_pane_srt_ParamLimits

0xadcf,	// (0x00042db1) navi_pane_srt

0x20f5,	// (0x0003a0d7) popup_clock_digital_analogue_window_cp1

0x7c79,	// (0x0003fc5b) indicator_pane_t1

0xc36b,	// (0x0004434d) copy_highlight_pane

0xc36b,	// (0x0004434d) cursor_graphics_pane

0xc36b,	// (0x0004434d) graphic_within_text_pane

0xc36b,	// (0x0004434d) link_highlight_pane

0x3327,	// (0x0003b309) popup_preview_text_window_t5_ParamLimits

0x3327,	// (0x0003b309) popup_preview_text_window_t5

0xf3a0,	// (0x00047382) cursor_digital_pane

0xf3a0,	// (0x00047382) cursor_primary_pane

0xf3b1,	// (0x00047393) cursor_primary_small_pane

0xf3b9,	// (0x0004739b) cursor_secondary_pane

0xf3c1,	// (0x000473a3) cursor_title_pane

0xf3a0,	// (0x00047382) link_highlight_digital_pane

0xf3a8,	// (0x0004738a) link_highlight_primary_pane

0xf3b1,	// (0x00047393) link_highlight_primary_small_pane

0xf3b9,	// (0x0004739b) link_highlight_secondary_pane

0xf3c1,	// (0x000473a3) link_highlight_title_pane

0xf3a0,	// (0x00047382) copy_highlight_digital_pane

0xf3a0,	// (0x00047382) copy_highlight_primary_pane

0xf3b1,	// (0x00047393) copy_highlight_primary_small_pane

0xf3b9,	// (0x0004739b) copy_highlight_secondary_pane

0xf3c1,	// (0x000473a3) copy_highlight_title_pane

0xf3b9,	// (0x0004739b) graphic_text_digital_pane

0x2ba6,	// (0x0003ab88) graphic_text_primary_pane

0x2baf,	// (0x0003ab91) graphic_text_primary_small_pane

0xf3b1,	// (0x00047393) graphic_text_secondary_pane

0xf3a0,	// (0x00047382) graphic_text_title_pane

0xa1b7,	// (0x00042199) cursor_primary_pane_g1

0x2b98,	// (0x0003ab7a) cursor_text_primary_t1

0xc486,	// (0x00044468) cursor_primary_small_pane_g1

0x2b8a,	// (0x0003ab6c) cursor_text_primary_small_t1

0xc47c,	// (0x0004445e) cursor_primary_small_pane_g1_copy1

0x2b72,	// (0x0003ab54) cursor_text_primary_small_t1_copy1

0x2b50,	// (0x0003ab32) cursor_text_title_t1

0xc472,	// (0x00044454) cursor_title_pane_g1

0xa1b7,	// (0x00042199) cursor_digital_pane_g1

0xf3c9,	// (0x000473ab) cursor_text_digital_t1

0xf3d7,	// (0x000473b9) link_highlight_primary_pane_g1

0x2af9,	// (0x0003aadb) link_highlight_primary_pane_t1

0xf3d7,	// (0x000473b9) link_highlight_primary_small_pane_g1

0xf3df,	// (0x000473c1) link_highlight_primary_small_pane_t1

0xf3ee,	// (0x000473d0) link_highlight_secondary_pane_g1

0xf3f6,	// (0x000473d8) link_highlight_secondary_pane_t1

0x2a6d,	// (0x0003aa4f) link_highlight_title_pane_g1

0x2a75,	// (0x0003aa57) link_highlight_title_pane_t1

0x2a56,	// (0x0003aa38) link_highlight_digital_pane_g1

0x2a5e,	// (0x0003aa40) link_highlight_digital_pane_t1

0x291e,	// (0x0003a900) copy_highlight_primary_pane_g1

0x2935,	// (0x0003a917) copy_highlight_primary_pane_t1

0x291e,	// (0x0003a900) copy_highlight_primary_small_pane_g1

0x2926,	// (0x0003a908) copy_highlight_primary_small_pane_t1

0xf405,	// (0x000473e7) copy_highlight_secondary_pane_g1

0xf40d,	// (0x000473ef) copy_highlight_secondary_pane_t1

0x2907,	// (0x0003a8e9) copy_highlight_title_pane_g1

0x290f,	// (0x0003a8f1) copy_highlight_title_pane_t1

0x291e,	// (0x0003a900) copy_highlight_digital_pane_g1

0x3c21,	// (0x0003bc03) copy_highlight_digital_pane_t1

0x3b75,	// (0x0003bb57) graphic_text_primary_pane_g1

0x3c05,	// (0x0003bbe7) graphic_text_primary_pane_t1

0x3c13,	// (0x0003bbf5) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x000479ab) graphic_text_primary_pane_t

0x3be1,	// (0x0003bbc3) graphic_text_primary_small_pane_g1

0x3be9,	// (0x0003bbcb) graphic_text_primary_small_pane_t1

0x3bf7,	// (0x0003bbd9) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x000479a6) graphic_text_primary_small_pane_t

0x3bbd,	// (0x0003bb9f) graphic_text_secondary_pane_g1

0x3bc5,	// (0x0003bba7) graphic_text_secondary_pane_t1

0x3bd3,	// (0x0003bbb5) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x000479a1) graphic_text_secondary_pane_t

0x3b99,	// (0x0003bb7b) graphic_text_title_pane_g1

0x3ba1,	// (0x0003bb83) graphic_text_title_pane_t1

0x3baf,	// (0x0003bb91) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0004799c) graphic_text_title_pane_t

0x3b75,	// (0x0003bb57) graphic_text_digital_pane_g1

0x3b7d,	// (0x0003bb5f) graphic_text_digital_pane_t1

0x3b8b,	// (0x0003bb6d) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00047997) graphic_text_digital_pane_t

0x7c35,	// (0x0003fc17) navi_icon_pane_srt_ParamLimits

0x7c35,	// (0x0003fc17) navi_icon_pane_srt

0x7bdb,	// (0x0003fbbd) navi_midp_pane_srt

0x7bdb,	// (0x0003fbbd) navi_navi_pane_srt

0x7c35,	// (0x0003fc17) navi_text_pane_srt_ParamLimits

0x7c35,	// (0x0003fc17) navi_text_pane_srt

0x3b40,	// (0x0003bb22) navi_navi_icon_text_pane_srt

0x3b48,	// (0x0003bb2a) navi_navi_pane_srt_g1_ParamLimits

0x3b48,	// (0x0003bb2a) navi_navi_pane_srt_g1

0x3b5a,	// (0x0003bb3c) navi_navi_pane_srt_g2_ParamLimits

0x3b5a,	// (0x0003bb3c) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x00047992) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x00047992) navi_navi_pane_srt_g

0x3b6c,	// (0x0003bb4e) navi_navi_tabs_pane_srt

0x3b40,	// (0x0003bb22) navi_navi_text_pane_srt

0x3b40,	// (0x0003bb22) navi_navi_volume_pane_srt

0x3b31,	// (0x0003bb13) navi_navi_text_pane_srt_t1

0x099d,	// (0x0003897f) navi_navi_volume_pane_srt_g1

0x09a5,	// (0x00038987) volume_small_pane_srt_ParamLimits

0x09a5,	// (0x00038987) volume_small_pane_srt

0xf41c,	// (0x000473fe) volume_small_pane_srt_g1_ParamLimits

0xf41c,	// (0x000473fe) volume_small_pane_srt_g1

0xf42c,	// (0x0004740e) volume_small_pane_srt_g2_ParamLimits

0xf42c,	// (0x0004740e) volume_small_pane_srt_g2

0xf43d,	// (0x0004741f) volume_small_pane_srt_g3_ParamLimits

0xf43d,	// (0x0004741f) volume_small_pane_srt_g3

0xf44e,	// (0x00047430) volume_small_pane_srt_g4_ParamLimits

0xf44e,	// (0x00047430) volume_small_pane_srt_g4

0xf45f,	// (0x00047441) volume_small_pane_srt_g5_ParamLimits

0xf45f,	// (0x00047441) volume_small_pane_srt_g5

0xf470,	// (0x00047452) volume_small_pane_srt_g6_ParamLimits

0xf470,	// (0x00047452) volume_small_pane_srt_g6

0xf481,	// (0x00047463) volume_small_pane_srt_g7_ParamLimits

0xf481,	// (0x00047463) volume_small_pane_srt_g7

0xf492,	// (0x00047474) volume_small_pane_srt_g8_ParamLimits

0xf492,	// (0x00047474) volume_small_pane_srt_g8

0xf4a3,	// (0x00047485) volume_small_pane_srt_g9_ParamLimits

0xf4a3,	// (0x00047485) volume_small_pane_srt_g9

0xf4b4,	// (0x00047496) volume_small_pane_srt_g10_ParamLimits

0xf4b4,	// (0x00047496) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0004773f) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0004773f) volume_small_pane_srt_g

0x848b,	// (0x0004046d) query_popup_data_pane_cp2

0x3b17,	// (0x0003baf9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3b17,	// (0x0003baf9) navi_navi_icon_text_pane_srt_t1

0x2ba6,	// (0x0003ab88) navi_tabs_2_long_pane_srt

0x2ba6,	// (0x0003ab88) navi_tabs_2_pane_srt

0x2ba6,	// (0x0003ab88) navi_tabs_3_long_pane_srt

0x2ba6,	// (0x0003ab88) navi_tabs_3_pane_srt

0x2ba6,	// (0x0003ab88) navi_tabs_4_pane_srt

0x097d,	// (0x0003895f) tabs_2_active_pane_srt_ParamLimits

0x097d,	// (0x0003895f) tabs_2_active_pane_srt

0x098d,	// (0x0003896f) tabs_2_passive_pane_srt_ParamLimits

0x098d,	// (0x0003896f) tabs_2_passive_pane_srt

0x238a,	// (0x0003a36c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x238a,	// (0x0003a36c) bg_passive_tab_pane_cp1_srt

0x3ae3,	// (0x0003bac5) bg_passive_tab_pane_g1_cp1_srt

0xc0c0,	// (0x000440a2) bg_passive_tab_pane_g2_cp1_srt

0x3aec,	// (0x0003bace) bg_passive_tab_pane_g3_cp1_srt

0x7d68,	// (0x0003fd4a) bg_active_tab_pane_cp1_srt_ParamLimits

0x7d68,	// (0x0003fd4a) bg_active_tab_pane_cp1_srt

0x3af5,	// (0x0003bad7) tabs_2_active_pane_srt_g1

0xc96e,	// (0x00044950) tabs_2_active_pane_srt_t1_ParamLimits

0xc96e,	// (0x00044950) tabs_2_active_pane_srt_t1

0x3ae3,	// (0x0003bac5) bg_active_tab_pane_g1_cp1_srt

0xc0c0,	// (0x000440a2) bg_active_tab_pane_g2_cp1_srt

0x3aec,	// (0x0003bace) bg_active_tab_pane_g3_cp1_srt

0x094a,	// (0x0003892c) tabs_3_active_pane_srt_ParamLimits

0x094a,	// (0x0003892c) tabs_3_active_pane_srt

0x095b,	// (0x0003893d) tabs_3_passive_pane_cp_srt_ParamLimits

0x095b,	// (0x0003893d) tabs_3_passive_pane_cp_srt

0x096c,	// (0x0003894e) tabs_3_passive_pane_srt_ParamLimits

0x096c,	// (0x0003894e) tabs_3_passive_pane_srt

0x238a,	// (0x0003a36c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x238a,	// (0x0003a36c) bg_passive_tab_pane_cp2_srt

0xf4c5,	// (0x000474a7) bg_passive_tab_pane_g1_cp2_srt

0xc0c0,	// (0x000440a2) bg_passive_tab_pane_g2_cp2_srt

0xf4ce,	// (0x000474b0) bg_passive_tab_pane_g3_cp2_srt

0x7d68,	// (0x0003fd4a) bg_active_tab_pane_cp2_srt_ParamLimits

0x7d68,	// (0x0003fd4a) bg_active_tab_pane_cp2_srt

0x3ac9,	// (0x0003baab) tabs_3_active_pane_srt_g1

0xc958,	// (0x0004493a) tabs_3_active_pane_srt_t1_ParamLimits

0xc958,	// (0x0004493a) tabs_3_active_pane_srt_t1

0xf4c5,	// (0x000474a7) bg_active_tab_pane_g1_cp2_srt

0xc0c0,	// (0x000440a2) bg_active_tab_pane_g2_cp2_srt

0xf4ce,	// (0x000474b0) bg_active_tab_pane_g3_cp2_srt

0x0902,	// (0x000388e4) tabs_4_active_pane_srt_ParamLimits

0x0902,	// (0x000388e4) tabs_4_active_pane_srt

0x0914,	// (0x000388f6) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0914,	// (0x000388f6) tabs_4_passive_pane_cp2_srt

0x0080,	// (0x00038062) aid_size_cell_toolbar

0x36df,	// (0x0003b6c1) main_idle_act_pane_ParamLimits

0x02c3,	// (0x000382a5) popup_large_graphic_colour_window_ParamLimits

0xaafb,	// (0x00042add) popup_toolbar_window_ParamLimits

0xaafb,	// (0x00042add) popup_toolbar_window

0xdcc9,	// (0x00045cab) list_single_graphic_2heading_pane_ParamLimits

0xdcc9,	// (0x00045cab) list_single_graphic_2heading_pane

0xbd1e,	// (0x00043d00) aid_size_cell_apps_grid_lsc_pane

0xbd30,	// (0x00043d12) aid_size_cell_apps_grid_prt_pane

0x00fa,	// (0x000380dc) bg_wml_button_pane_cp1_ParamLimits

0x00fa,	// (0x000380dc) bg_wml_button_pane_cp1

0xc422,	// (0x00044404) form_midp_field_text_pane_t1_ParamLimits

0x238a,	// (0x0003a36c) input_focus_pane_cp050_ParamLimits

0x25c9,	// (0x0003a5ab) list_midp_form_text_pane_ParamLimits

0x257b,	// (0x0003a55d) input_focus_pane_cp051_ParamLimits

0x258f,	// (0x0003a571) list_midp_choice_pane_ParamLimits

0xc3d9,	// (0x000443bb) list_single_2graphic_pane_cp3_ParamLimits

0xc3d9,	// (0x000443bb) list_single_2graphic_pane_cp3

0x477c,	// (0x0003c75e) list_single_midp_graphic_pane_ParamLimits

0x477c,	// (0x0003c75e) list_single_midp_graphic_pane

0xf0c3,	// (0x000470a5) list_single_graphic_2heading_pane_g1_ParamLimits

0xf0c3,	// (0x000470a5) list_single_graphic_2heading_pane_g1

0xf0cf,	// (0x000470b1) list_single_graphic_2heading_pane_g4_ParamLimits

0xf0cf,	// (0x000470b1) list_single_graphic_2heading_pane_g4

0xf0db,	// (0x000470bd) list_single_graphic_2heading_pane_g5_ParamLimits

0xf0db,	// (0x000470bd) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00047792) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00047792) list_single_graphic_2heading_pane_g

0xf0e7,	// (0x000470c9) list_single_graphic_2heading_pane_t1_ParamLimits

0xf0e7,	// (0x000470c9) list_single_graphic_2heading_pane_t1

0xf0fb,	// (0x000470dd) list_single_graphic_2heading_pane_t2_ParamLimits

0xf0fb,	// (0x000470dd) list_single_graphic_2heading_pane_t2

0xf117,	// (0x000470f9) list_single_graphic_2heading_pane_t3_ParamLimits

0xf117,	// (0x000470f9) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x00047799) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x00047799) list_single_graphic_2heading_pane_t

0x2254,	// (0x0003a236) bg_popup_sub_pane_cp2

0x227e,	// (0x0003a260) grid_toobar_pane

0x049d,	// (0x0003847f) cell_toolbar_pane_ParamLimits

0x049d,	// (0x0003847f) cell_toolbar_pane

0x22ba,	// (0x0003a29c) cell_toolbar_pane_g1_ParamLimits

0x22ba,	// (0x0003a29c) cell_toolbar_pane_g1

0x22ce,	// (0x0003a2b0) cell_toolbar_pane_g2_ParamLimits

0x22ce,	// (0x0003a2b0) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x000477a7) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x000477a7) cell_toolbar_pane_g

0x22f0,	// (0x0003a2d2) grid_highlight_pane_cp2_ParamLimits

0x22f0,	// (0x0003a2d2) grid_highlight_pane_cp2

0x230a,	// (0x0003a2ec) toolbar_button_pane

0x2316,	// (0x0003a2f8) toolbar_button_pane_g1

0x231e,	// (0x0003a300) toolbar_button_pane_g2

0x2326,	// (0x0003a308) toolbar_button_pane_g3

0x232e,	// (0x0003a310) toolbar_button_pane_g4

0x2336,	// (0x0003a318) toolbar_button_pane_g5

0x233e,	// (0x0003a320) toolbar_button_pane_g6

0x2346,	// (0x0003a328) toolbar_button_pane_g7

0x234e,	// (0x0003a330) toolbar_button_pane_g8

0x2356,	// (0x0003a338) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x000477ac) toolbar_button_pane_g

0x04d5,	// (0x000384b7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x04d5,	// (0x000384b7) list_single_2graphic_pane_g1_cp3

0xaf34,	// (0x00042f16) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaf34,	// (0x00042f16) list_single_2graphic_pane_g2_cp3

0x04f2,	// (0x000384d4) list_single_2graphic_pane_g3_cp3

0x04fa,	// (0x000384dc) list_single_2graphic_pane_g4_cp3_ParamLimits

0x04fa,	// (0x000384dc) list_single_2graphic_pane_g4_cp3

0x0506,	// (0x000384e8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0506,	// (0x000384e8) list_single_2graphic_pane_t1_cp3

0x0521,	// (0x00038503) list_single_midp_graphic_pane_g2_ParamLimits

0x0521,	// (0x00038503) list_single_midp_graphic_pane_g2

0x0088,	// (0x0003806a) aid_zoom_text_primary

0xdbb4,	// (0x00045b96) aid_zoom_text_secondary

0xa20f,	// (0x000421f1) status_small_pane_g7_ParamLimits

0xa20f,	// (0x000421f1) status_small_pane_g7

0xa232,	// (0x00042214) status_small_pane_t1_ParamLimits

0x93b4,	// (0x00041396) title_pane_g2

0x0003,

0xf54e,	// (0x00047530) title_pane_g

0x9640,	// (0x00041622) aid_size_cell_colour_1_pane_ParamLimits

0x9640,	// (0x00041622) aid_size_cell_colour_1_pane

0x9654,	// (0x00041636) aid_size_cell_colour_2_pane_ParamLimits

0x9654,	// (0x00041636) aid_size_cell_colour_2_pane

0x9668,	// (0x0004164a) aid_size_cell_colour_3_pane_ParamLimits

0x9668,	// (0x0004164a) aid_size_cell_colour_3_pane

0x967c,	// (0x0004165e) aid_size_cell_colour_4_pane_ParamLimits

0x967c,	// (0x0004165e) aid_size_cell_colour_4_pane

0xef2d,	// (0x00046f0f) title_pane_stacon_g1_ParamLimits

0xef2d,	// (0x00046f0f) title_pane_stacon_g1

0x298c,	// (0x0003a96e) popup_note_wait_window_g3_ParamLimits

0x298c,	// (0x0003a96e) popup_note_wait_window_g3

0x2a03,	// (0x0003a9e5) popup_note_wait_window_t5_ParamLimits

0x2a03,	// (0x0003a9e5) popup_note_wait_window_t5

0x7bdb,	// (0x0003fbbd) main_feb_china_hwr_fs_writing_pane

0xa492,	// (0x00042474) popup_feb_china_hwr_fs_window_ParamLimits

0xa492,	// (0x00042474) popup_feb_china_hwr_fs_window

0xaf45,	// (0x00042f27) aid_size_cell_hwr_fs_ParamLimits

0xaf45,	// (0x00042f27) aid_size_cell_hwr_fs

0x238a,	// (0x0003a36c) bg_popup_sub_pane_cp3_ParamLimits

0x238a,	// (0x0003a36c) bg_popup_sub_pane_cp3

0xaf5a,	// (0x00042f3c) grid_hwr_fs_pane_ParamLimits

0xaf5a,	// (0x00042f3c) grid_hwr_fs_pane

0x0570,	// (0x00038552) linegrid_hwr_fs_pane_ParamLimits

0x0570,	// (0x00038552) linegrid_hwr_fs_pane

0xaf72,	// (0x00042f54) cell_hwr_fs_pane_ParamLimits

0xaf72,	// (0x00042f54) cell_hwr_fs_pane

0x2396,	// (0x0003a378) linegrid_hwr_fs_pane_g1_ParamLimits

0x2396,	// (0x0003a378) linegrid_hwr_fs_pane_g1

0xc3ad,	// (0x0004438f) linegrid_hwr_fs_pane_g2_ParamLimits

0xc3ad,	// (0x0004438f) linegrid_hwr_fs_pane_g2

0x23b4,	// (0x0003a396) linegrid_hwr_fs_pane_g3_ParamLimits

0x23b4,	// (0x0003a396) linegrid_hwr_fs_pane_g3

0x05a4,	// (0x00038586) linegrid_hwr_fs_pane_g4_ParamLimits

0x05a4,	// (0x00038586) linegrid_hwr_fs_pane_g4

0x05c2,	// (0x000385a4) linegrid_hwr_fs_pane_g5_ParamLimits

0x05c2,	// (0x000385a4) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x000477d2) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x000477d2) linegrid_hwr_fs_pane_g

0x23c0,	// (0x0003a3a2) cell_hwr_fs_pane_g1_ParamLimits

0x23c0,	// (0x0003a3a2) cell_hwr_fs_pane_g1

0x218b,	// (0x0003a16d) cell_hwr_fs_pane_g2_ParamLimits

0x218b,	// (0x0003a16d) cell_hwr_fs_pane_g2

0xc3bf,	// (0x000443a1) cell_hwr_fs_pane_g3_ParamLimits

0xc3bf,	// (0x000443a1) cell_hwr_fs_pane_g3

0xc3cc,	// (0x000443ae) cell_hwr_fs_pane_g4_ParamLimits

0xc3cc,	// (0x000443ae) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x000477dd) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x000477dd) cell_hwr_fs_pane_g

0xaf98,	// (0x00042f7a) cell_hwr_fs_pane_t1

0x7bdb,	// (0x0003fbbd) grid_highlight_pane_cp6

0x7bdb,	// (0x0003fbbd) main_idle_act2_pane

0xbb2d,	// (0x00043b0f) aid_inside_area_popup_secondary

0xc4ed,	// (0x000444cf) aid_inside_area_window_primary_ParamLimits

0xc4ed,	// (0x000444cf) aid_inside_area_window_primary

0x3c30,	// (0x0003bc12) ai2_news_ticker_pane

0x3c38,	// (0x0003bc1a) aid_size_cell_ai1_link_ParamLimits

0x3c38,	// (0x0003bc1a) aid_size_cell_ai1_link

0x3c52,	// (0x0003bc34) popup_ai2_data_window_ParamLimits

0x3c52,	// (0x0003bc34) popup_ai2_data_window

0x3c70,	// (0x0003bc52) popup_ai2_link_window_ParamLimits

0x3c70,	// (0x0003bc52) popup_ai2_link_window

0x238a,	// (0x0003a36c) bg_popup_sub_pane_cp4_ParamLimits

0x238a,	// (0x0003a36c) bg_popup_sub_pane_cp4

0x3c86,	// (0x0003bc68) grid_ai2_link_pane_ParamLimits

0x3c86,	// (0x0003bc68) grid_ai2_link_pane

0x3c9d,	// (0x0003bc7f) popup_ai2_link_window_g1_ParamLimits

0x3c9d,	// (0x0003bc7f) popup_ai2_link_window_g1

0x3ca9,	// (0x0003bc8b) popup_ai2_link_window_g2_ParamLimits

0x3ca9,	// (0x0003bc8b) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x000479b0) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x000479b0) popup_ai2_link_window_g

0x3cba,	// (0x0003bc9c) ai2_mp_button_pane

0x3cc2,	// (0x0003bca4) ai2_mp_volume_pane

0x257b,	// (0x0003a55d) bg_popup_sub_pane_cp5_ParamLimits

0x257b,	// (0x0003a55d) bg_popup_sub_pane_cp5

0x3cca,	// (0x0003bcac) heading_ai2_gene_pane_ParamLimits

0x3cca,	// (0x0003bcac) heading_ai2_gene_pane

0x3cd6,	// (0x0003bcb8) list_ai2_gene_pane_ParamLimits

0x3cd6,	// (0x0003bcb8) list_ai2_gene_pane

0x3d1e,	// (0x0003bd00) cell_ai2_link_pane_ParamLimits

0x3d1e,	// (0x0003bd00) cell_ai2_link_pane

0x3d34,	// (0x0003bd16) cell_ai2_link_pane_g1

0x7bdb,	// (0x0003fbbd) grid_highlight_pane_cp7

0x09ba,	// (0x0003899c) ai2_mp_volume_pane_g1

0x3e07,	// (0x0003bde9) ai2_mp_volume_pane_g2

0x3d7c,	// (0x0003bd5e) list_ai2_gene_pane_t1

0x3e0f,	// (0x0003bdf1) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x000479c9) ai2_mp_volume_pane_g

0x09c2,	// (0x000389a4) volume_small_pane_cp3

0x3e17,	// (0x0003bdf9) aid_size_cell_ai2_button

0x3e1f,	// (0x0003be01) grid_ai2_button_pane

0x3e28,	// (0x0003be0a) cell_ai2_button_pane_ParamLimits

0x3e28,	// (0x0003be0a) cell_ai2_button_pane

0x7bd1,	// (0x0003fbb3) cell_ai2_button_pane_g1

0x7bdb,	// (0x0003fbbd) grid_highlight_pane_cp8

0x3dc7,	// (0x0003bda9) ai2_gene_pane_t1_ParamLimits

0x3dc7,	// (0x0003bda9) ai2_gene_pane_t1

0xa3f0,	// (0x000423d2) aid_height_parent_landscape

0xc6e2,	// (0x000446c4) aid_height_set_list

0x36df,	// (0x0003b6c1) aid_size_parent

0x3a51,	// (0x0003ba33) aid_size_cell_graphic_pane_ParamLimits

0x3ce6,	// (0x0003bcc8) popup_ai2_data_window_g1_ParamLimits

0x3ce6,	// (0x0003bcc8) popup_ai2_data_window_g1

0x3cf2,	// (0x0003bcd4) ai2_news_ticker_pane_g1

0x3cfa,	// (0x0003bcdc) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x000479b5) ai2_news_ticker_pane_g

0x3d02,	// (0x0003bce4) ai2_news_ticker_pane_t1

0x3d10,	// (0x0003bcf2) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x000479ba) ai2_news_ticker_pane_t

0x3d3d,	// (0x0003bd1f) heading_ai2_gene_pane_g1

0x3d45,	// (0x0003bd27) heading_ai2_gene_pane_t1_ParamLimits

0x3d45,	// (0x0003bd27) heading_ai2_gene_pane_t1

0x3d5a,	// (0x0003bd3c) list_highlight_pane_cp6

0x3d62,	// (0x0003bd44) ai2_gene_pane_ParamLimits

0x3d62,	// (0x0003bd44) ai2_gene_pane

0x3d8a,	// (0x0003bd6c) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x000479bf) list_ai2_gene_pane_t

0x3d98,	// (0x0003bd7a) list_highlight_pane_cp8_ParamLimits

0x3d98,	// (0x0003bd7a) list_highlight_pane_cp8

0x3da9,	// (0x0003bd8b) ai2_gene_pane_g1_ParamLimits

0x3da9,	// (0x0003bd8b) ai2_gene_pane_g1

0x3dbb,	// (0x0003bd9d) ai2_gene_pane_g2_ParamLimits

0x3dbb,	// (0x0003bd9d) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x000479c4) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x000479c4) ai2_gene_pane_g

0x87a6,	// (0x00040788) scroll_pane_cp12

0xa3af,	// (0x00042391) control_pane_t3_ParamLimits

0xa3af,	// (0x00042391) control_pane_t3

0xa223,	// (0x00042205) status_small_pane_g8_ParamLimits

0xa223,	// (0x00042205) status_small_pane_g8

0xa534,	// (0x00042516) popup_find_window_ParamLimits

0xa7e5,	// (0x000427c7) popup_note_image_window_ParamLimits

0xda56,	// (0x00045a38) list_double2_graphic_pane_vc_g1_ParamLimits

0xda56,	// (0x00045a38) list_double2_graphic_pane_vc_g1

0xdbc4,	// (0x00045ba6) list_double2_graphic_pane_vc_g2_ParamLimits

0xdbc4,	// (0x00045ba6) list_double2_graphic_pane_vc_g2

0xdbd0,	// (0x00045bb2) list_double2_graphic_pane_vc_g3_ParamLimits

0xdbd0,	// (0x00045bb2) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x000477a0) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x000477a0) list_double2_graphic_pane_vc_g

0xdbdc,	// (0x00045bbe) list_double2_graphic_pane_vc_t1_ParamLimits

0xdbdc,	// (0x00045bbe) list_double2_graphic_pane_vc_t1

0xda2c,	// (0x00045a0e) list_single_heading_pane_vc_g1_ParamLimits

0xda2c,	// (0x00045a0e) list_single_heading_pane_vc_g1

0xda38,	// (0x00045a1a) list_single_heading_pane_vc_g2_ParamLimits

0xda38,	// (0x00045a1a) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000475aa) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000475aa) list_single_heading_pane_vc_g

0xdbf2,	// (0x00045bd4) list_single_heading_pane_vc_t1_ParamLimits

0xdbf2,	// (0x00045bd4) list_single_heading_pane_vc_t1

0xdc0a,	// (0x00045bec) list_single_heading_pane_vc_t2_ParamLimits

0xdc0a,	// (0x00045bec) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x000477c1) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x000477c1) list_single_heading_pane_vc_t

0xdc1c,	// (0x00045bfe) list_setting_number_pane_vc_g1_ParamLimits

0xdc1c,	// (0x00045bfe) list_setting_number_pane_vc_g1

0xdc28,	// (0x00045c0a) list_setting_number_pane_vc_g2_ParamLimits

0xdc28,	// (0x00045c0a) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x000477c6) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x000477c6) list_setting_number_pane_vc_g

0xdc34,	// (0x00045c16) list_setting_number_pane_vc_t1_ParamLimits

0xdc34,	// (0x00045c16) list_setting_number_pane_vc_t1

0xdc48,	// (0x00045c2a) list_setting_number_pane_vc_t2_ParamLimits

0xdc48,	// (0x00045c2a) list_setting_number_pane_vc_t2

0xdc64,	// (0x00045c46) list_setting_number_pane_vc_t3_ParamLimits

0xdc64,	// (0x00045c46) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x000477cb) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x000477cb) list_setting_number_pane_vc_t

0xdc92,	// (0x00045c74) set_value_pane_vc_ParamLimits

0xdc92,	// (0x00045c74) set_value_pane_vc

0xdcc9,	// (0x00045cab) list_double2_graphic_pane_vc_ParamLimits

0xdcc9,	// (0x00045cab) list_double2_graphic_pane_vc

0x38b7,	// (0x0003b899) list_double2_large_graphic_pane_vc_ParamLimits

0x38b7,	// (0x0003b899) list_double2_large_graphic_pane_vc

0xdcc9,	// (0x00045cab) list_double2_pane_vc_ParamLimits

0xdcc9,	// (0x00045cab) list_double2_pane_vc

0xdcc9,	// (0x00045cab) list_double_graphic_heading_pane_vc_ParamLimits

0xdcc9,	// (0x00045cab) list_double_graphic_heading_pane_vc

0xdcc9,	// (0x00045cab) list_double_graphic_pane_vc_ParamLimits

0xdcc9,	// (0x00045cab) list_double_graphic_pane_vc

0xdcc9,	// (0x00045cab) list_double_heading_pane_vc_ParamLimits

0xdcc9,	// (0x00045cab) list_double_heading_pane_vc

0x38cb,	// (0x0003b8ad) list_double_large_graphic_pane_vc_ParamLimits

0x38cb,	// (0x0003b8ad) list_double_large_graphic_pane_vc

0xdcc9,	// (0x00045cab) list_double_number_pane_vc_ParamLimits

0xdcc9,	// (0x00045cab) list_double_number_pane_vc

0xdcc9,	// (0x00045cab) list_double_pane_vc_ParamLimits

0xdcc9,	// (0x00045cab) list_double_pane_vc

0xdcc9,	// (0x00045cab) list_double_time_pane_vc_ParamLimits

0xdcc9,	// (0x00045cab) list_double_time_pane_vc

0xdcc9,	// (0x00045cab) list_setting_number_pane_vc_ParamLimits

0xdcc9,	// (0x00045cab) list_setting_number_pane_vc

0xdcc9,	// (0x00045cab) list_setting_pane_vc_ParamLimits

0xdcc9,	// (0x00045cab) list_setting_pane_vc

0xdcc9,	// (0x00045cab) list_single_graphic_heading_pane_vc_ParamLimits

0xdcc9,	// (0x00045cab) list_single_graphic_heading_pane_vc

0xdcc9,	// (0x00045cab) list_single_heading_pane_vc_ParamLimits

0xdcc9,	// (0x00045cab) list_single_heading_pane_vc

0xdcc9,	// (0x00045cab) list_single_number_heading_pane_vc_ParamLimits

0xdcc9,	// (0x00045cab) list_single_number_heading_pane_vc

0xda56,	// (0x00045a38) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xda56,	// (0x00045a38) list_double_graphic_heading_pane_vc_g1

0xda2c,	// (0x00045a0e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xda2c,	// (0x00045a0e) list_double_graphic_heading_pane_vc_g2

0xda38,	// (0x00045a1a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xda38,	// (0x00045a1a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x000479d0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x000479d0) list_double_graphic_heading_pane_vc_g

0xdcde,	// (0x00045cc0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xdcde,	// (0x00045cc0) list_double_graphic_heading_pane_vc_t1

0xdcf4,	// (0x00045cd6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xdcf4,	// (0x00045cd6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x000479d7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x000479d7) list_double_graphic_heading_pane_vc_t

0xdc1c,	// (0x00045bfe) list_setting_pane_vc_g1_ParamLimits

0xdc1c,	// (0x00045bfe) list_setting_pane_vc_g1

0xdc28,	// (0x00045c0a) list_setting_pane_vc_g2_ParamLimits

0xdc28,	// (0x00045c0a) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x000477c6) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x000477c6) list_setting_pane_vc_g

0xdd12,	// (0x00045cf4) list_setting_pane_vc_t1_ParamLimits

0xdd12,	// (0x00045cf4) list_setting_pane_vc_t1

0xdd2e,	// (0x00045d10) list_setting_pane_vc_t2_ParamLimits

0xdd2e,	// (0x00045d10) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x00047a1a) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x00047a1a) list_setting_pane_vc_t

0xdc92,	// (0x00045c74) set_value_pane_cp_vc_ParamLimits

0xdc92,	// (0x00045c74) set_value_pane_cp_vc

0xda2c,	// (0x00045a0e) list_single_number_heading_pane_vc_g1_ParamLimits

0xda2c,	// (0x00045a0e) list_single_number_heading_pane_vc_g1

0xda38,	// (0x00045a1a) list_single_number_heading_pane_vc_g2_ParamLimits

0xda38,	// (0x00045a1a) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000475aa) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000475aa) list_single_number_heading_pane_vc_g

0xdbf2,	// (0x00045bd4) list_single_number_heading_pane_vc_t1_ParamLimits

0xdbf2,	// (0x00045bd4) list_single_number_heading_pane_vc_t1

0xdd4a,	// (0x00045d2c) list_single_number_heading_pane_vc_t2_ParamLimits

0xdd4a,	// (0x00045d2c) list_single_number_heading_pane_vc_t2

0xda44,	// (0x00045a26) list_single_number_heading_pane_vc_t3_ParamLimits

0xda44,	// (0x00045a26) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x00047a1f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x00047a1f) list_single_number_heading_pane_vc_t

0xda56,	// (0x00045a38) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xda56,	// (0x00045a38) list_single_graphic_heading_pane_vc_g1

0xda2c,	// (0x00045a0e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xda2c,	// (0x00045a0e) list_single_graphic_heading_pane_vc_g4

0xda38,	// (0x00045a1a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xda38,	// (0x00045a1a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x000479d0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x000479d0) list_single_graphic_heading_pane_vc_g

0xdbf2,	// (0x00045bd4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdbf2,	// (0x00045bd4) list_single_graphic_heading_pane_vc_t1

0xdd5c,	// (0x00045d3e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xdd5c,	// (0x00045d3e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa44,	// (0x00047a26) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa44,	// (0x00047a26) list_single_graphic_heading_pane_vc_t

0xda2c,	// (0x00045a0e) list_double2_pane_vc_g1_ParamLimits

0xda2c,	// (0x00045a0e) list_double2_pane_vc_g1

0xda38,	// (0x00045a1a) list_double2_pane_vc_g2_ParamLimits

0xda38,	// (0x00045a1a) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x000475aa) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x000475aa) list_double2_pane_vc_g

0xdcb3,	// (0x00045c95) list_double2_pane_vc_t1_ParamLimits

0xdcb3,	// (0x00045c95) list_double2_pane_vc_t1

0xda62,	// (0x00045a44) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xda62,	// (0x00045a44) list_double2_large_graphic_pane_vc_g1

0xda6e,	// (0x00045a50) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xda6e,	// (0x00045a50) list_double2_large_graphic_pane_vc_g2

0xda7a,	// (0x00045a5c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xda7a,	// (0x00045a5c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x000475c7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x000475c7) list_double2_large_graphic_pane_vc_g

0xda86,	// (0x00045a68) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xda86,	// (0x00045a68) list_double2_large_graphic_pane_vc_t1

0xdd6e,	// (0x00045d50) list_double_time_pane_vc_g1_ParamLimits

0xdd6e,	// (0x00045d50) list_double_time_pane_vc_g1

0xdd7a,	// (0x00045d5c) list_double_time_pane_vc_g2_ParamLimits

0xdd7a,	// (0x00045d5c) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x00047a2b) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x00047a2b) list_double_time_pane_vc_g

0xdd86,	// (0x00045d68) list_double_time_pane_vc_t1_ParamLimits

0xdd86,	// (0x00045d68) list_double_time_pane_vc_t1

0xddb0,	// (0x00045d92) list_double_time_pane_vc_t2_ParamLimits

0xddb0,	// (0x00045d92) list_double_time_pane_vc_t2

0xddf9,	// (0x00045ddb) list_double_time_pane_vc_t3_ParamLimits

0xddf9,	// (0x00045ddb) list_double_time_pane_vc_t3

0xde0b,	// (0x00045ded) list_double_time_pane_vc_t4_ParamLimits

0xde0b,	// (0x00045ded) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x00047a30) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x00047a30) list_double_time_pane_vc_t

0xda2c,	// (0x00045a0e) list_double_pane_vc_g1_ParamLimits

0xda2c,	// (0x00045a0e) list_double_pane_vc_g1

0xda38,	// (0x00045a1a) list_double_pane_vc_g2_ParamLimits

0xda38,	// (0x00045a1a) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x000475aa) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x000475aa) list_double_pane_vc_g

0xde30,	// (0x00045e12) list_double_pane_vc_t1_ParamLimits

0xde30,	// (0x00045e12) list_double_pane_vc_t1

0xde44,	// (0x00045e26) list_double_pane_vc_t2_ParamLimits

0xde44,	// (0x00045e26) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x00047a39) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x00047a39) list_double_pane_vc_t

0xda2c,	// (0x00045a0e) list_double_number_pane_vc_g1_ParamLimits

0xda2c,	// (0x00045a0e) list_double_number_pane_vc_g1

0xda38,	// (0x00045a1a) list_double_number_pane_vc_g2_ParamLimits

0xda38,	// (0x00045a1a) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x000475aa) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x000475aa) list_double_number_pane_vc_g

0xde5a,	// (0x00045e3c) list_double_number_pane_vc_t1_ParamLimits

0xde5a,	// (0x00045e3c) list_double_number_pane_vc_t1

0xde6e,	// (0x00045e50) list_double_number_pane_vc_t2_ParamLimits

0xde6e,	// (0x00045e50) list_double_number_pane_vc_t2

0xde82,	// (0x00045e64) list_double_number_pane_vc_t3_ParamLimits

0xde82,	// (0x00045e64) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x00047a3e) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x00047a3e) list_double_number_pane_vc_t

0xde98,	// (0x00045e7a) list_double_large_graphic_pane_vc_g1_ParamLimits

0xde98,	// (0x00045e7a) list_double_large_graphic_pane_vc_g1

0xdec0,	// (0x00045ea2) list_double_large_graphic_pane_vc_g2_ParamLimits

0xdec0,	// (0x00045ea2) list_double_large_graphic_pane_vc_g2

0xded4,	// (0x00045eb6) list_double_large_graphic_pane_vc_g3_ParamLimits

0xded4,	// (0x00045eb6) list_double_large_graphic_pane_vc_g3

0xdee3,	// (0x00045ec5) list_double_large_graphic_pane_vc_g4_ParamLimits

0xdee3,	// (0x00045ec5) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x00047a45) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x00047a45) list_double_large_graphic_pane_vc_g

0xdef3,	// (0x00045ed5) list_double_large_graphic_pane_vc_t1_ParamLimits

0xdef3,	// (0x00045ed5) list_double_large_graphic_pane_vc_t1

0xdf15,	// (0x00045ef7) list_double_large_graphic_pane_vc_t2_ParamLimits

0xdf15,	// (0x00045ef7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x00047a4e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x00047a4e) list_double_large_graphic_pane_vc_t

0xda2c,	// (0x00045a0e) list_double_heading_pane_vc_g1_ParamLimits

0xda2c,	// (0x00045a0e) list_double_heading_pane_vc_g1

0xda38,	// (0x00045a1a) list_double_heading_pane_vc_g2_ParamLimits

0xda38,	// (0x00045a1a) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000475aa) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000475aa) list_double_heading_pane_vc_g

0xdf35,	// (0x00045f17) list_double_heading_pane_vc_t1_ParamLimits

0xdf35,	// (0x00045f17) list_double_heading_pane_vc_t1

0xdbf2,	// (0x00045bd4) list_double_heading_pane_vc_t2_ParamLimits

0xdbf2,	// (0x00045bd4) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x00047a53) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x00047a53) list_double_heading_pane_vc_t

0xdf47,	// (0x00045f29) list_double_graphic_pane_vc_g1_ParamLimits

0xdf47,	// (0x00045f29) list_double_graphic_pane_vc_g1

0xdf5a,	// (0x00045f3c) list_double_graphic_pane_vc_g2_ParamLimits

0xdf5a,	// (0x00045f3c) list_double_graphic_pane_vc_g2

0xda2c,	// (0x00045a0e) list_double_graphic_pane_vc_g3_ParamLimits

0xda2c,	// (0x00045a0e) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x00047a58) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x00047a58) list_double_graphic_pane_vc_g

0xdf77,	// (0x00045f59) list_double_graphic_pane_vc_t1_ParamLimits

0xdf77,	// (0x00045f59) list_double_graphic_pane_vc_t1

0xdfa1,	// (0x00045f83) list_double_graphic_pane_vc_t2_ParamLimits

0xdfa1,	// (0x00045f83) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x00047a61) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x00047a61) list_double_graphic_pane_vc_t

0xeca9,	// (0x00046c8b) aid_size_cell_fastswap

0x918d,	// (0x0004116f) aid_size_cell_touch_ParamLimits

0x918d,	// (0x0004116f) aid_size_cell_touch

0xee30,	// (0x00046e12) popup_fast_swap_wide_window_ParamLimits

0xee30,	// (0x00046e12) popup_fast_swap_wide_window

0x934b,	// (0x0004132d) touch_pane_ParamLimits

0x934b,	// (0x0004132d) touch_pane

0xba06,	// (0x000439e8) button_value_adjust_pane_cp2

0xdabf,	// (0x00045aa1) button_value_adjust_pane_cp4

0xdac7,	// (0x00045aa9) form_field_data_pane_cp2

0x9bdf,	// (0x00041bc1) form_field_data_wide_pane_cp2

0xbd6c,	// (0x00043d4e) bg_scroll_pane_ParamLimits

0xf089,	// (0x0004706b) scroll_handle_pane_ParamLimits

0xf09d,	// (0x0004707f) scroll_sc2_down_pane_ParamLimits

0xf09d,	// (0x0004707f) scroll_sc2_down_pane

0xbd9d,	// (0x00043d7f) scroll_sc2_up_pane_ParamLimits

0xbd9d,	// (0x00043d7f) scroll_sc2_up_pane

0xcac5,	// (0x00044aa7) grid_wheel_folder_pane_g1_ParamLimits

0xcac5,	// (0x00044aa7) grid_wheel_folder_pane_g1

0xf2d3,	// (0x000472b5) clock_nsta_pane_cp2_ParamLimits

0xf2d3,	// (0x000472b5) clock_nsta_pane_cp2

0x00fa,	// (0x000380dc) listscroll_midp_pane_ParamLimits

0xa10e,	// (0x000420f0) midp_canvas_pane

0x006e,	// (0x00038050) nsta_clock_indic_pane

0x00c4,	// (0x000380a6) listscroll_form_pane_vc

0x00e8,	// (0x000380ca) listscroll_set_pane_vc_ParamLimits

0x00e8,	// (0x000380ca) listscroll_set_pane_vc

0xac61,	// (0x00042c43) clock_nsta_pane

0xac8b,	// (0x00042c6d) indicator_nsta_pane

0x2254,	// (0x0003a236) bg_popup_sub_pane_cp2_ParamLimits

0x2268,	// (0x0003a24a) find_pane_cp2_ParamLimits

0x2268,	// (0x0003a24a) find_pane_cp2

0x227e,	// (0x0003a260) grid_toobar_pane_ParamLimits

0x235e,	// (0x0003a340) list_form_gen_pane_vc_ParamLimits

0x235e,	// (0x0003a340) list_form_gen_pane_vc

0x2374,	// (0x0003a356) scroll_pane_cp8_vc_ParamLimits

0x2374,	// (0x0003a356) scroll_pane_cp8_vc

0x23f0,	// (0x0003a3d2) data_form_wide_pane_vc_ParamLimits

0x23f0,	// (0x0003a3d2) data_form_wide_pane_vc

0x23fc,	// (0x0003a3de) form_field_data_wide_pane_vc_g1

0x2404,	// (0x0003a3e6) form_field_data_wide_pane_vc_t1_ParamLimits

0x2404,	// (0x0003a3e6) form_field_data_wide_pane_vc_t1

0xba1a,	// (0x000439fc) input_focus_pane_cp6_vc_ParamLimits

0xba1a,	// (0x000439fc) input_focus_pane_cp6_vc

0xc44a,	// (0x0004442c) list_midp_pane_ParamLimits

0x3abd,	// (0x0003ba9f) scroll_pane_cp16_ParamLimits

0x3abd,	// (0x0003ba9f) scroll_pane_cp16

0x2760,	// (0x0003a742) button_value_adjust_pane_ParamLimits

0x2760,	// (0x0003a742) button_value_adjust_pane

0xc6f3,	// (0x000446d5) button_value_adjust_pane_cp6_ParamLimits

0xc6f3,	// (0x000446d5) button_value_adjust_pane_cp6

0xc835,	// (0x00044817) settings_code_pane_cp_ParamLimits

0xc835,	// (0x00044817) settings_code_pane_cp

0x7bd1,	// (0x0003fbb3) cell_touch_pane_g1

0x7bd1,	// (0x0003fbb3) cell_touch_pane_g2

0x0001,

0xf703,	// (0x000476e5) cell_touch_pane_g

0xc984,	// (0x00044966) cell_touch_pane_cp_ParamLimits

0xc984,	// (0x00044966) cell_touch_pane_cp

0xc9a0,	// (0x00044982) cell_touch_pane_ParamLimits

0xc9a0,	// (0x00044982) cell_touch_pane

0x7bd1,	// (0x0003fbb3) scroll_sc2_down_pane_g1

0x7bd1,	// (0x0003fbb3) scroll_sc2_up_pane_g1

0x7bdb,	// (0x0003fbbd) bg_set_opt_pane_cp4_vc

0x3e5b,	// (0x0003be3d) list_set_graphic_pane_vc_g1_ParamLimits

0x3e5b,	// (0x0003be3d) list_set_graphic_pane_vc_g1

0xc9be,	// (0x000449a0) list_set_graphic_pane_vc_g2_ParamLimits

0xc9be,	// (0x000449a0) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x000479dc) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x000479dc) list_set_graphic_pane_vc_g

0x3e67,	// (0x0003be49) text_primary_small_cp13_vc_ParamLimits

0x3e67,	// (0x0003be49) text_primary_small_cp13_vc

0x3e7f,	// (0x0003be61) list_set_graphic_pane_vc_ParamLimits

0x3e7f,	// (0x0003be61) list_set_graphic_pane_vc

0x7bdb,	// (0x0003fbbd) input_focus_pane_cp2_vc

0x7bd1,	// (0x0003fbb3) setting_code_pane_vc_g1

0x7c4c,	// (0x0003fc2e) setting_code_pane_vc_t1

0x3e94,	// (0x0003be76) set_text_pane_vc_t1_ParamLimits

0x3e94,	// (0x0003be76) set_text_pane_vc_t1

0x7bdb,	// (0x0003fbbd) input_focus_pane_cp1_vc

0x3eb2,	// (0x0003be94) list_set_text_pane_vc

0x7bd1,	// (0x0003fbb3) setting_text_pane_vc_g1

0x7bdb,	// (0x0003fbbd) bg_set_opt_pane_cp2_vc

0x7c43,	// (0x0003fc25) setting_slider_graphic_pane_vc_g1

0x3ebc,	// (0x0003be9e) setting_slider_graphic_pane_vc_t1

0x3ece,	// (0x0003beb0) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x000479e1) setting_slider_graphic_pane_vc_t

0x3ee0,	// (0x0003bec2) slider_set_pane_cp_vc

0x3eea,	// (0x0003becc) slider_set_pane_vc_g1

0x3ef3,	// (0x0003bed5) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x000479e6) slider_set_pane_vc_g

0xba75,	// (0x00043a57) set_opt_bg_pane_g1_copy1

0xba7d,	// (0x00043a5f) set_opt_bg_pane_g2_copy1

0x3f1f,	// (0x0003bf01) set_opt_bg_pane_g3_copy1

0xba8d,	// (0x00043a6f) set_opt_bg_pane_g4_copy1

0xba95,	// (0x00043a77) set_opt_bg_pane_g5_copy1

0xba9d,	// (0x00043a7f) set_opt_bg_pane_g6_copy1

0x3f29,	// (0x0003bf0b) set_opt_bg_pane_g7_copy1

0x3f33,	// (0x0003bf15) set_opt_bg_pane_g8_copy1

0x3f3d,	// (0x0003bf1f) set_opt_bg_pane_g9_copy1

0x7bdb,	// (0x0003fbbd) bg_set_opt_pane_cp_vc

0x3f47,	// (0x0003bf29) setting_slider_pane_vc_t1

0x3f56,	// (0x0003bf38) setting_slider_pane_vc_t2

0x3f68,	// (0x0003bf4a) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x000479f5) setting_slider_pane_vc_t

0x3f7a,	// (0x0003bf5c) slider_set_pane_vc

0x0609,	// (0x000385eb) volume_set_pane_vc_g1

0x0612,	// (0x000385f4) volume_set_pane_vc_g2

0x061b,	// (0x000385fd) volume_set_pane_vc_g3

0x0624,	// (0x00038606) volume_set_pane_vc_g4

0x062d,	// (0x0003860f) volume_set_pane_vc_g5

0x0636,	// (0x00038618) volume_set_pane_vc_g6

0x063f,	// (0x00038621) volume_set_pane_vc_g7

0x0648,	// (0x0003862a) volume_set_pane_vc_g8

0x0651,	// (0x00038633) volume_set_pane_vc_g9

0x065a,	// (0x0003863c) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x000479fc) volume_set_pane_vc_g

0x3f84,	// (0x0003bf66) volume_set_pane_vc

0x3f8e,	// (0x0003bf70) button_value_adjust_pane_cp1_vc

0x3f98,	// (0x0003bf7a) list_highlight_pane_cp2_vc

0x3fa1,	// (0x0003bf83) list_set_pane_vc_ParamLimits

0x3fa1,	// (0x0003bf83) list_set_pane_vc

0x4011,	// (0x0003bff3) main_pane_set_vc_t1_ParamLimits

0x4011,	// (0x0003bff3) main_pane_set_vc_t1

0x4026,	// (0x0003c008) main_pane_set_vc_t2_ParamLimits

0x4026,	// (0x0003c008) main_pane_set_vc_t2

0x4038,	// (0x0003c01a) main_pane_set_vc_t3_ParamLimits

0x4038,	// (0x0003c01a) main_pane_set_vc_t3

0x404c,	// (0x0003c02e) main_pane_set_vc_t4_ParamLimits

0x404c,	// (0x0003c02e) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x00047a11) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x00047a11) main_pane_set_vc_t

0x4060,	// (0x0003c042) setting_code_pane_vc_ParamLimits

0x4060,	// (0x0003c042) setting_code_pane_vc

0x4071,	// (0x0003c053) setting_slider_graphic_pane_vc

0x4071,	// (0x0003c053) setting_slider_pane_vc

0x4071,	// (0x0003c053) setting_text_pane_vc

0x4071,	// (0x0003c053) setting_volume_pane_vc

0x407b,	// (0x0003c05d) scroll_pane_cp121_vc

0xb9f4,	// (0x000439d6) set_content_pane_vc

0x4083,	// (0x0003c065) button_value_adjust_pane_g1

0x408c,	// (0x0003c06e) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x00047a66) button_value_adjust_pane_g

0x4095,	// (0x0003c077) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4095,	// (0x0003c077) form_field_slider_wide_pane_vc_t1

0x40a7,	// (0x0003c089) form_field_slider_wide_pane_vc_t2_ParamLimits

0x40a7,	// (0x0003c089) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x00047a6b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00047a6b) form_field_slider_wide_pane_vc_t

0x7d68,	// (0x0003fd4a) input_focus_pane_cp10_vc_ParamLimits

0x7d68,	// (0x0003fd4a) input_focus_pane_cp10_vc

0x40d3,	// (0x0003c0b5) slider_cont_pane_cp1_vc_ParamLimits

0x40d3,	// (0x0003c0b5) slider_cont_pane_cp1_vc

0x40e5,	// (0x0003c0c7) slider_form_pane_g1_cp2

0x3ef3,	// (0x0003bed5) slider_form_pane_g2_cp2

0x4112,	// (0x0003c0f4) form_field_slider_pane_vc_t3

0x4120,	// (0x0003c102) form_field_slider_pane_vc_t4

0x412e,	// (0x0003c110) slider_form_pane_vc_ParamLimits

0x412e,	// (0x0003c110) slider_form_pane_vc

0x413b,	// (0x0003c11d) form_field_slider_pane_vc_t1_ParamLimits

0x413b,	// (0x0003c11d) form_field_slider_pane_vc_t1

0x40a7,	// (0x0003c089) form_field_slider_pane_vc_t2_ParamLimits

0x40a7,	// (0x0003c089) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x00047a7d) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x00047a7d) form_field_slider_pane_vc_t

0x7d68,	// (0x0003fd4a) input_focus_pane_cp9_vc_ParamLimits

0x7d68,	// (0x0003fd4a) input_focus_pane_cp9_vc

0x4151,	// (0x0003c133) slider_cont_pane_vc_ParamLimits

0x4151,	// (0x0003c133) slider_cont_pane_vc

0x4165,	// (0x0003c147) list_form_graphic_pane_cp_vc_ParamLimits

0x4165,	// (0x0003c147) list_form_graphic_pane_cp_vc

0x23fc,	// (0x0003a3de) form_field_popup_wide_pane_vc_g1

0x417a,	// (0x0003c15c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x417a,	// (0x0003c15c) form_field_popup_wide_pane_vc_t1

0xba1a,	// (0x000439fc) input_focus_pane_cp8_vc_ParamLimits

0xba1a,	// (0x000439fc) input_focus_pane_cp8_vc

0x41bf,	// (0x0003c1a1) list_form_wide_pane_vc_ParamLimits

0x41bf,	// (0x0003c1a1) list_form_wide_pane_vc

0x41cb,	// (0x0003c1ad) list_form_graphic_pane_vc_g1

0x41d3,	// (0x0003c1b5) list_form_graphic_pane_vc_t1_ParamLimits

0x41d3,	// (0x0003c1b5) list_form_graphic_pane_vc_t1

0x7c35,	// (0x0003fc17) list_highlight_pane_cp5_vc_ParamLimits

0x7c35,	// (0x0003fc17) list_highlight_pane_cp5_vc

0x41ef,	// (0x0003c1d1) list_form_graphic_pane_vc_ParamLimits

0x41ef,	// (0x0003c1d1) list_form_graphic_pane_vc

0x23fc,	// (0x0003a3de) form_field_popup_pane_vc_g1

0x4205,	// (0x0003c1e7) form_field_popup_pane_vc_t1_ParamLimits

0x4205,	// (0x0003c1e7) form_field_popup_pane_vc_t1

0xba1a,	// (0x000439fc) input_focus_pane_cp7_vc_ParamLimits

0xba1a,	// (0x000439fc) input_focus_pane_cp7_vc

0x421c,	// (0x0003c1fe) list_form_pane_vc_ParamLimits

0x421c,	// (0x0003c1fe) list_form_pane_vc

0x4228,	// (0x0003c20a) data_form_pane_vc_t1_ParamLimits

0x4228,	// (0x0003c20a) data_form_pane_vc_t1

0xba75,	// (0x00043a57) input_focus_pane_vc_g1

0xba7d,	// (0x00043a5f) input_focus_pane_vc_g2

0xba85,	// (0x00043a67) input_focus_pane_vc_g3

0xba8d,	// (0x00043a6f) input_focus_pane_vc_g4

0xba95,	// (0x00043a77) input_focus_pane_vc_g5

0xba9d,	// (0x00043a7f) input_focus_pane_vc_g6

0xbaa5,	// (0x00043a87) input_focus_pane_vc_g7

0xbaad,	// (0x00043a8f) input_focus_pane_vc_g8

0xbab5,	// (0x00043a97) input_focus_pane_vc_g9

0x7bd1,	// (0x0003fbb3) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0004766e) input_focus_pane_vc_g

0x23f0,	// (0x0003a3d2) data_form_pane_vc_ParamLimits

0x23f0,	// (0x0003a3d2) data_form_pane_vc

0x23fc,	// (0x0003a3de) form_field_data_pane_vc_g1

0x4245,	// (0x0003c227) form_field_data_pane_vc_t1_ParamLimits

0x4245,	// (0x0003c227) form_field_data_pane_vc_t1

0xba1a,	// (0x000439fc) input_focus_pane_vc_ParamLimits

0xba1a,	// (0x000439fc) input_focus_pane_vc

0x425f,	// (0x0003c241) button_value_adjust_pane_cp3_vc

0x4267,	// (0x0003c249) button_value_adjust_pane_cp5_vc

0x426f,	// (0x0003c251) form_field_data_pane_vc_ParamLimits

0x426f,	// (0x0003c251) form_field_data_pane_vc

0x428a,	// (0x0003c26c) form_field_data_pane_vc_cp2

0x4292,	// (0x0003c274) form_field_data_wide_pane_vc_ParamLimits

0x4292,	// (0x0003c274) form_field_data_wide_pane_vc

0x42ac,	// (0x0003c28e) form_field_data_wide_pane_vc_cp2

0x42b4,	// (0x0003c296) form_field_popup_pane_vc_ParamLimits

0x42b4,	// (0x0003c296) form_field_popup_pane_vc

0x42cf,	// (0x0003c2b1) form_field_popup_wide_pane_vc_ParamLimits

0x42cf,	// (0x0003c2b1) form_field_popup_wide_pane_vc

0x42e9,	// (0x0003c2cb) form_field_slider_pane_vc_ParamLimits

0x42e9,	// (0x0003c2cb) form_field_slider_pane_vc

0x42fc,	// (0x0003c2de) form_field_slider_wide_pane_vc_ParamLimits

0x42fc,	// (0x0003c2de) form_field_slider_wide_pane_vc

0xc9ca,	// (0x000449ac) grid_touch_1_pane_ParamLimits

0xc9ca,	// (0x000449ac) grid_touch_1_pane

0xc9de,	// (0x000449c0) grid_touch_2_pane_ParamLimits

0xc9de,	// (0x000449c0) grid_touch_2_pane

0x43cd,	// (0x0003c3af) touch_pane_g1_ParamLimits

0x43cd,	// (0x0003c3af) touch_pane_g1

0x4335,	// (0x0003c317) cell_app_pane_cp_wide_ParamLimits

0x4335,	// (0x0003c317) cell_app_pane_cp_wide

0x4346,	// (0x0003c328) grid_popup_fast_wide_pane_ParamLimits

0x4346,	// (0x0003c328) grid_popup_fast_wide_pane

0x435a,	// (0x0003c33c) scroll_pane_cp19_ParamLimits

0x435a,	// (0x0003c33c) scroll_pane_cp19

0x7bdb,	// (0x0003fbbd) bg_popup_window_pane_cp20

0x436e,	// (0x0003c350) listscroll_popup_fast_wide_pane

0xca0a,	// (0x000449ec) grid_indicator_nsta_pane

0x4376,	// (0x0003c358) clock_nsta_pane_g1

0x437f,	// (0x0003c361) clock_nsta_pane_t1

0xca18,	// (0x000449fa) cell_indicator_nsta_pane_ParamLimits

0xca18,	// (0x000449fa) cell_indicator_nsta_pane

0x43cd,	// (0x0003c3af) cell_indicator_nsta_pane_g1

0xca31,	// (0x00044a13) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x00047a8e) cell_indicator_nsta_pane_g

0x43f1,	// (0x0003c3d3) clock_nsta_pane_cp

0x43f9,	// (0x0003c3db) indicator_nsta_pane_cp

0x4402,	// (0x0003c3e4) nsta_clock_indic_pane_g1

0x7c71,	// (0x0003fc53) grid_indicator_pane

0xbe8f,	// (0x00043e71) scroll_pane_cp29

0xf21f,	// (0x00047201) indicator_nsta_pane_cp2_ParamLimits

0xf21f,	// (0x00047201) indicator_nsta_pane_cp2

0x7c35,	// (0x0003fc17) main_apps_wheel_pane

0x25e3,	// (0x0003a5c5) form_midp_field_text_pane_ParamLimits

0x2732,	// (0x0003a714) scroll_bar_cp050_ParamLimits

0x446b,	// (0x0003c44d) cell_indicator_pane_ParamLimits

0x446b,	// (0x0003c44d) cell_indicator_pane

0x4483,	// (0x0003c465) cell_indicator_pane_g1

0xca47,	// (0x00044a29) grid_wheel_folder_pane_ParamLimits

0xca47,	// (0x00044a29) grid_wheel_folder_pane

0xca55,	// (0x00044a37) list_wheel_apps_pane_ParamLimits

0xca55,	// (0x00044a37) list_wheel_apps_pane

0xca63,	// (0x00044a45) main_apps_wheel_pane_g1_ParamLimits

0xca63,	// (0x00044a45) main_apps_wheel_pane_g1

0xca73,	// (0x00044a55) main_apps_wheel_pane_g2_ParamLimits

0xca73,	// (0x00044a55) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x00047aaa) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x00047aaa) main_apps_wheel_pane_g

0xca83,	// (0x00044a65) main_apps_wheel_pane_t1_ParamLimits

0xca83,	// (0x00044a65) main_apps_wheel_pane_t1

0xca9b,	// (0x00044a7d) list_wheel_apps_pane_g1

0xcaa3,	// (0x00044a85) list_wheel_apps_pane_g2

0xcaab,	// (0x00044a8d) list_wheel_apps_pane_g3

0xcab3,	// (0x00044a95) list_wheel_apps_pane_g4

0xcabb,	// (0x00044a9d) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x00047aaf) list_wheel_apps_pane_g

0xc20f,	// (0x000441f1) navi_icon_text_pane

0xab53,	// (0x00042b35) aid_fill_nsta

0xcad8,	// (0x00044aba) navi_icon_text_pane_g1

0xcae4,	// (0x00044ac6) navi_icon_text_pane_t1

0xa067,	// (0x00042049) list_set_graphic_pane_t1_ParamLimits

0xa067,	// (0x00042049) list_set_graphic_pane_t1

0x2e83,	// (0x0003ae65) popup_midp_note_alarm_window_t6_ParamLimits

0x2e83,	// (0x0003ae65) popup_midp_note_alarm_window_t6

0x2e95,	// (0x0003ae77) popup_midp_note_alarm_window_t7_ParamLimits

0x2e95,	// (0x0003ae77) popup_midp_note_alarm_window_t7

0x2ea7,	// (0x0003ae89) popup_midp_note_alarm_window_t8_ParamLimits

0x2ea7,	// (0x0003ae89) popup_midp_note_alarm_window_t8

0x2eb9,	// (0x0003ae9b) popup_midp_note_alarm_window_t9_ParamLimits

0x2eb9,	// (0x0003ae9b) popup_midp_note_alarm_window_t9

0x2ecb,	// (0x0003aead) popup_midp_note_alarm_window_t10_ParamLimits

0x2ecb,	// (0x0003aead) popup_midp_note_alarm_window_t10

0x2edd,	// (0x0003aebf) popup_midp_note_alarm_window_t11_ParamLimits

0x2edd,	// (0x0003aebf) popup_midp_note_alarm_window_t11

0x2eef,	// (0x0003aed1) scroll_pane_cp17_ParamLimits

0x2eef,	// (0x0003aed1) scroll_pane_cp17

0x0609,	// (0x000385eb) volume_small_pane_cp_g1

0x09cb,	// (0x000389ad) volume_small_pane_cp_g2

0x09d4,	// (0x000389b6) volume_small_pane_cp_g3

0x09dd,	// (0x000389bf) volume_small_pane_cp_g4

0x09e6,	// (0x000389c8) volume_small_pane_cp_g5

0x09ef,	// (0x000389d1) volume_small_pane_cp_g6

0x09f8,	// (0x000389da) volume_small_pane_cp_g7

0x0a01,	// (0x000389e3) volume_small_pane_cp_g8

0x0a0a,	// (0x000389ec) volume_small_pane_cp_g9

0x0a13,	// (0x000389f5) volume_small_pane_cp_g10

0xf35f,	// (0x00047341) midp_ticker_pane_g1_ParamLimits

0xf36b,	// (0x0004734d) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0004773a) midp_ticker_pane_g_ParamLimits

0xa1a5,	// (0x00042187) midp_ticker_pane_t1_ParamLimits

0xab77,	// (0x00042b59) aid_fill_nsta_2

0x271e,	// (0x0003a700) list_form2_midp_pane

0x3886,	// (0x0003b868) midp_editing_number_pane_ParamLimits

0x3895,	// (0x0003b877) midp_ticker_pane_ParamLimits

0x4576,	// (0x0003c558) form2_midp_field_pane

0x459a,	// (0x0003c57c) scroll_pane_cp51

0x45ba,	// (0x0003c59c) form2_midp_button_pane_ParamLimits

0x45ba,	// (0x0003c59c) form2_midp_button_pane

0x45cc,	// (0x0003c5ae) form2_midp_content_pane_ParamLimits

0x45cc,	// (0x0003c5ae) form2_midp_content_pane

0x45e6,	// (0x0003c5c8) form2_midp_field_choice_group_pane

0x45ee,	// (0x0003c5d0) form2_midp_field_pane_g1

0x45f6,	// (0x0003c5d8) form2_midp_field_pane_g2

0x45fe,	// (0x0003c5e0) form2_midp_field_pane_g3

0x4606,	// (0x0003c5e8) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x00047ad4) form2_midp_field_pane_g

0x460e,	// (0x0003c5f0) form2_midp_gauge_slider_pane

0x4616,	// (0x0003c5f8) form2_midp_gauge_wait_pane

0x461e,	// (0x0003c600) form2_midp_image_pane_ParamLimits

0x461e,	// (0x0003c600) form2_midp_image_pane

0x4639,	// (0x0003c61b) form2_midp_label_pane_ParamLimits

0x4639,	// (0x0003c61b) form2_midp_label_pane

0xcb12,	// (0x00044af4) form2_midp_label_pane_cp_ParamLimits

0xcb12,	// (0x00044af4) form2_midp_label_pane_cp

0x4679,	// (0x0003c65b) form2_midp_string_pane_ParamLimits

0x4679,	// (0x0003c65b) form2_midp_string_pane

0xdfbf,	// (0x00045fa1) form2_midp_text_pane_ParamLimits

0xdfbf,	// (0x00045fa1) form2_midp_text_pane

0x468b,	// (0x0003c66d) form2_midp_time_pane

0x469b,	// (0x0003c67d) input_focus_pane_cp51_ParamLimits

0x469b,	// (0x0003c67d) input_focus_pane_cp51

0x46b3,	// (0x0003c695) form2_midp_label_pane_t1_ParamLimits

0x46b3,	// (0x0003c695) form2_midp_label_pane_t1

0xdfe0,	// (0x00045fc2) form2_mdip_text_pane_t1_ParamLimits

0xdfe0,	// (0x00045fc2) form2_mdip_text_pane_t1

0xe004,	// (0x00045fe6) form2_midp_time_pane_t1

0x4701,	// (0x0003c6e3) form2_midp_gauge_slider_pane_t1

0xcb33,	// (0x00044b15) form2_midp_gauge_slider_pane_t2

0xcb45,	// (0x00044b27) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x00047add) form2_midp_gauge_slider_pane_t

0x4737,	// (0x0003c719) form2_midp_slider_pane

0x4743,	// (0x0003c725) form2_midp_gauge_wait_pane_t1

0x4751,	// (0x0003c733) form2_midp_wait_pane_ParamLimits

0x4751,	// (0x0003c733) form2_midp_wait_pane

0x2443,	// (0x0003a425) list_single_2graphic_pane_cp4_ParamLimits

0x2443,	// (0x0003a425) list_single_2graphic_pane_cp4

0x477c,	// (0x0003c75e) list_single_midp_graphic_pane_cp_ParamLimits

0x477c,	// (0x0003c75e) list_single_midp_graphic_pane_cp

0x7bdb,	// (0x0003fbbd) list_highlight_pane_cp20

0x47a0,	// (0x0003c782) list_single_2graphic_pane_g1_cp4

0x3d3d,	// (0x0003bd1f) list_single_2graphic_pane_g2_cp4

0x47a8,	// (0x0003c78a) list_single_2graphic_pane_t1_cp4

0x7c35,	// (0x0003fc17) list_highlight_pane_cp21

0x47b7,	// (0x0003c799) list_single_midp_graphic_pane_g4_cp

0x47c6,	// (0x0003c7a8) list_single_midp_graphic_pane_t1_cp

0xcb57,	// (0x00044b39) form2_mdip_string_pane_t1_ParamLimits

0xcb57,	// (0x00044b39) form2_mdip_string_pane_t1

0x7bdb,	// (0x0003fbbd) bg_wml_button_pane_cp2

0x7bd1,	// (0x0003fbb3) form2_midp_image_pane_g1

0xda9c,	// (0x00045a7e) list_double_large_graphic_pane_g5_ParamLimits

0xda9c,	// (0x00045a7e) list_double_large_graphic_pane_g5

0x00fa,	// (0x000380dc) midp_form_pane_ParamLimits

0x7c35,	// (0x0003fc17) main_apps_wheel_pane_ParamLimits

0xa86b,	// (0x0004284d) popup_preview_window_ParamLimits

0xa86b,	// (0x0004284d) popup_preview_window

0x1d9d,	// (0x00039d7f) popup_touch_info_window_ParamLimits

0x1d9d,	// (0x00039d7f) popup_touch_info_window

0x1dbf,	// (0x00039da1) popup_touch_menu_window_ParamLimits

0x1dbf,	// (0x00039da1) popup_touch_menu_window

0x7bc7,	// (0x0003fba9) bg_popup_sub_pane_cp6

0x4880,	// (0x0003c862) list_touch_menu_pane

0x4888,	// (0x0003c86a) list_single_touch_menu_pane_ParamLimits

0x4888,	// (0x0003c86a) list_single_touch_menu_pane

0x48a0,	// (0x0003c882) list_single_touch_menu_pane_t1

0x7c35,	// (0x0003fc17) bg_popup_sub_pane_cp7_ParamLimits

0x7c35,	// (0x0003fc17) bg_popup_sub_pane_cp7

0x48ae,	// (0x0003c890) heading_sub_pane

0x48b6,	// (0x0003c898) list_touch_info_pane_ParamLimits

0x48b6,	// (0x0003c898) list_touch_info_pane

0x48c5,	// (0x0003c8a7) list_single_touch_info_pane_ParamLimits

0x48c5,	// (0x0003c8a7) list_single_touch_info_pane

0x48d7,	// (0x0003c8b9) list_single_touch_info_pane_t1

0x48e5,	// (0x0003c8c7) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x00047aeb) list_single_touch_info_pane_t

0xc36b,	// (0x0004434d) bg_popup_heading_pane_cp

0x48f3,	// (0x0003c8d5) heading_sub_pane_t1

0x238a,	// (0x0003a36c) bg_popup_preview_window_pane_cp_ParamLimits

0x238a,	// (0x0003a36c) bg_popup_preview_window_pane_cp

0x48ae,	// (0x0003c890) heading_preview_pane

0x48b6,	// (0x0003c898) list_preview_pane_ParamLimits

0x48b6,	// (0x0003c898) list_preview_pane

0x4901,	// (0x0003c8e3) popup_preview_window_g1

0x48c5,	// (0x0003c8a7) list_single_preview_pane_ParamLimits

0x48c5,	// (0x0003c8a7) list_single_preview_pane

0x4909,	// (0x0003c8eb) list_single_preview_pane_g1

0x4911,	// (0x0003c8f3) list_single_preview_pane_t1

0x48d7,	// (0x0003c8b9) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x00047af0) list_single_preview_pane_t

0x491f,	// (0x0003c901) bg_popup_heading_pane_cp2_ParamLimits

0x491f,	// (0x0003c901) bg_popup_heading_pane_cp2

0x4935,	// (0x0003c917) heading_preview_pane_g1

0x493d,	// (0x0003c91f) heading_preview_pane_t1_ParamLimits

0x493d,	// (0x0003c91f) heading_preview_pane_t1

0x7c88,	// (0x0003fc6a) soft_indicator_pane_t1_ParamLimits

0x8783,	// (0x00040765) scroll_pane_ParamLimits

0xbd8b,	// (0x00043d6d) scroll_sc2_left_pane

0xbd94,	// (0x00043d76) scroll_sc2_right_pane

0xbdb3,	// (0x00043d95) scroll_bg_pane_g1_ParamLimits

0xbdc8,	// (0x00043daa) scroll_bg_pane_g2_ParamLimits

0xbde0,	// (0x00043dc2) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x000476c5) scroll_bg_pane_g_ParamLimits

0xbdb3,	// (0x00043d95) scroll_handle_pane_g1_ParamLimits

0xbe02,	// (0x00043de4) scroll_handle_pane_g2_ParamLimits

0xbde0,	// (0x00043dc2) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x000476cc) scroll_handle_pane_g_ParamLimits

0x0122,	// (0x00038104) popup_choice_list_window_ParamLimits

0x0122,	// (0x00038104) popup_choice_list_window

0x2260,	// (0x0003a242) choice_list_pane

0x22e2,	// (0x0003a2c4) cell_toolbar_pane_t1

0x230a,	// (0x0003a2ec) toolbar_button_pane_ParamLimits

0x33b9,	// (0x0003b39b) ai_gene_pane_1_t2_ParamLimits

0x33b9,	// (0x0003b39b) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x000478ef) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x000478ef) ai_gene_pane_1_t

0x495a,	// (0x0003c93c) scroll_sc2_left_pane_g1

0x495a,	// (0x0003c93c) scroll_sc2_right_pane_g1

0x00fa,	// (0x000380dc) bg_popup_sub_pane_cp10

0x4964,	// (0x0003c946) list_choice_list_pane

0x497d,	// (0x0003c95f) list_single_choice_list_pane_ParamLimits

0x497d,	// (0x0003c95f) list_single_choice_list_pane

0x4995,	// (0x0003c977) list_single_choice_list_pane_g1

0xbb6b,	// (0x00043b4d) list_single_choice_list_pane_t1_ParamLimits

0xbb6b,	// (0x00043b4d) list_single_choice_list_pane_t1

0x499d,	// (0x0003c97f) choice_list_pane_g1

0x49a5,	// (0x0003c987) choice_list_pane_t1

0x7bc7,	// (0x0003fba9) input_focus_pane_cp11

0xbce9,	// (0x00043ccb) title_pane_stacon_g2_ParamLimits

0xbce9,	// (0x00043ccb) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x000476ab) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000476ab) title_pane_stacon_g

0xc36b,	// (0x0004434d) cursor_press_pane

0xa4e8,	// (0x000424ca) popup_fep_hwr_window_ParamLimits

0xa4e8,	// (0x000424ca) popup_fep_hwr_window

0x0266,	// (0x00038248) popup_fep_vkb_window_ParamLimits

0x0266,	// (0x00038248) popup_fep_vkb_window

0x49b3,	// (0x0003c995) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x00047b19) fep_vkb_side_pane_g_ParamLimits

0x0a55,	// (0x00038a37) fep_hwr_candidate_pane_ParamLimits

0x0a55,	// (0x00038a37) fep_hwr_candidate_pane

0x0a7f,	// (0x00038a61) fep_hwr_side_pane_ParamLimits

0x0a7f,	// (0x00038a61) fep_hwr_side_pane

0x0aa1,	// (0x00038a83) fep_hwr_top_pane_ParamLimits

0x0aa1,	// (0x00038a83) fep_hwr_top_pane

0x0ab9,	// (0x00038a9b) fep_hwr_write_pane_ParamLimits

0x0ab9,	// (0x00038a9b) fep_hwr_write_pane

0xfb37,	// (0x00047b19) fep_vkb_side_pane_g

0x49bb,	// (0x0003c99d) fep_hwr_top_pane_g1

0x49cd,	// (0x0003c9af) fep_hwr_top_pane_g2

0x0af3,	// (0x00038ad5) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x00047af5) fep_hwr_top_pane_g

0x0b08,	// (0x00038aea) fep_hwr_top_text_pane

0xbefc,	// (0x00043ede) fep_hwr_top_text_pane_g1

0x4a03,	// (0x0003c9e5) fep_hwr_top_text_pane_t1

0x0c12,	// (0x00038bf4) fep_hwr_candidate_pane_g1

0x4c4e,	// (0x0003cc30) fep_vkb_keypad_pane_g3_ParamLimits

0x4c4e,	// (0x0003cc30) fep_vkb_keypad_pane_g3

0x4c7a,	// (0x0003cc5c) fep_vkb_keypad_pane_g4_ParamLimits

0x4c7a,	// (0x0003cc5c) fep_vkb_keypad_pane_g4

0x4cf1,	// (0x0003ccd3) fep_vkb_bottom_pane_g2_ParamLimits

0x4cf1,	// (0x0003ccd3) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x00047b20) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x00047b20) fep_vkb_bottom_pane_g

0x495a,	// (0x0003c93c) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x00047b2a) cell_vkb_side_pane_g

0x4d7c,	// (0x0003cd5e) cell_vkb_side_pane_t1

0x4d8a,	// (0x0003cd6c) cell_vkb_side_pane_t1_copy1

0x495a,	// (0x0003c93c) bg_fep_vkb_candidate_pane_g2

0x4ece,	// (0x0003ceb0) cell_vkb_candidate_pane_ParamLimits

0x4a11,	// (0x0003c9f3) aid_size_cell_vkb_ParamLimits

0x4a11,	// (0x0003c9f3) aid_size_cell_vkb

0x4ece,	// (0x0003ceb0) cell_vkb_candidate_pane

0x0c39,	// (0x00038c1b) bg_popup_fep_shadow_pane_g1

0xcbff,	// (0x00044be1) fep_vkb_bottom_pane_ParamLimits

0xcbff,	// (0x00044be1) fep_vkb_bottom_pane

0x4ae0,	// (0x0003cac2) fep_vkb_candidate_pane_ParamLimits

0x4ae0,	// (0x0003cac2) fep_vkb_candidate_pane

0xcc2b,	// (0x00044c0d) fep_vkb_keypad_pane_ParamLimits

0xcc2b,	// (0x00044c0d) fep_vkb_keypad_pane

0xcc52,	// (0x00044c34) fep_vkb_side_pane_ParamLimits

0xcc52,	// (0x00044c34) fep_vkb_side_pane

0xcc8e,	// (0x00044c70) fep_vkb_top_pane_ParamLimits

0xcc8e,	// (0x00044c70) fep_vkb_top_pane

0x4ba7,	// (0x0003cb89) fep_vkb_top_pane_g1_ParamLimits

0x4ba7,	// (0x0003cb89) fep_vkb_top_pane_g1

0x4bb6,	// (0x0003cb98) fep_vkb_top_pane_g2_ParamLimits

0x4bb6,	// (0x0003cb98) fep_vkb_top_pane_g2

0x4bc5,	// (0x0003cba7) fep_vkb_top_pane_g3_ParamLimits

0x4bc5,	// (0x0003cba7) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x00047b10) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x00047b10) fep_vkb_top_pane_g

0x4be3,	// (0x0003cbc5) fep_vkb_top_text_pane_ParamLimits

0x4be3,	// (0x0003cbc5) fep_vkb_top_text_pane

0xccca,	// (0x00044cac) fep_vkb_side_pane_g1_ParamLimits

0xccca,	// (0x00044cac) fep_vkb_side_pane_g1

0x4c3d,	// (0x0003cc1f) grid_vkb_side_pane_ParamLimits

0x4c3d,	// (0x0003cc1f) grid_vkb_side_pane

0x0c41,	// (0x00038c23) bg_popup_fep_shadow_pane_g2

0x0c4a,	// (0x00038c2c) bg_popup_fep_shadow_pane_g3

0x0c52,	// (0x00038c34) bg_popup_fep_shadow_pane_g4

0x0c5b,	// (0x00038c3d) bg_popup_fep_shadow_pane_g5

0x0c65,	// (0x00038c47) bg_popup_fep_shadow_pane_g6

0x0c6d,	// (0x00038c4f) bg_popup_fep_shadow_pane_g7

0xba8d,	// (0x00043a6f) bg_popup_fep_shadow_pane_g8

0x4c9c,	// (0x0003cc7e) grid_vkb_keypad_number_pane_ParamLimits

0x4c9c,	// (0x0003cc7e) grid_vkb_keypad_number_pane

0x4cb0,	// (0x0003cc92) grid_vkb_keypad_pane_ParamLimits

0x4cb0,	// (0x0003cc92) grid_vkb_keypad_pane

0x4cd6,	// (0x0003ccb8) fep_vkb_bottom_pane_g1_ParamLimits

0x4cd6,	// (0x0003ccb8) fep_vkb_bottom_pane_g1

0x4cff,	// (0x0003cce1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4cff,	// (0x0003cce1) grid_vkb_keypad_bottom_left_pane

0x4d14,	// (0x0003ccf6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4d14,	// (0x0003ccf6) grid_vkb_keypad_bottom_right_pane

0x4d29,	// (0x0003cd0b) fep_vkb_top_text_pane_g1

0xcd11,	// (0x00044cf3) fep_vkb_top_text_pane_t1

0xcd23,	// (0x00044d05) cell_vkb_side_pane_ParamLimits

0xcd23,	// (0x00044d05) cell_vkb_side_pane

0x495a,	// (0x0003c93c) cell_vkb_side_pane_g1

0x4d98,	// (0x0003cd7a) cell_vkb_keypad_pane_ParamLimits

0x4d98,	// (0x0003cd7a) cell_vkb_keypad_pane

0x4e25,	// (0x0003ce07) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x00047b3d) bg_popup_fep_shadow_pane_g

0x0c7f,	// (0x00038c61) cell_hwr_side_pane_g1

0x0c7f,	// (0x00038c61) cell_hwr_side_pane_g2

0x4e2f,	// (0x0003ce11) cell_vkb_keypad_pane_t1

0xcd39,	// (0x00044d1b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcd39,	// (0x00044d1b) cell_vkb_keypad_bottom_left_pane

0xcd4e,	// (0x00044d30) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcd4e,	// (0x00044d30) cell_vkb_keypad_bottom_right_pane

0x495a,	// (0x0003c93c) cell_vkb_keypad_bottom_left_pane_g1

0x495a,	// (0x0003c93c) cell_vkb_keypad_bottom_right_pane_g1

0x4e93,	// (0x0003ce75) cell_vkb_keypad_number_pane_ParamLimits

0x4e93,	// (0x0003ce75) cell_vkb_keypad_number_pane

0x4eb2,	// (0x0003ce94) cell_vkb_keypad_number_pane_g1

0x4ebc,	// (0x0003ce9e) cell_vkb_keypad_number_pane_g2

0x4ec5,	// (0x0003cea7) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x00047b2f) cell_vkb_keypad_number_pane_g

0x4e2f,	// (0x0003ce11) cell_vkb_keypad_number_pane_t1

0x4eef,	// (0x0003ced1) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x00047b50) cell_hwr_side_pane_g

0x4f08,	// (0x0003ceea) cell_hwr_side_pane_t1

0x0c89,	// (0x00038c6b) cell_hwr_side_pane_t1_copy1

0x0c97,	// (0x00038c79) cell_hwr_candidate_pane_g1

0x0cc6,	// (0x00038ca8) cell_hwr_candidate_pane_t1

0x495a,	// (0x0003c93c) cell_vkb_candidate_pane_g2

0x4f4c,	// (0x0003cf2e) cell_vkb_candidate_pane_t1

0x0a1c,	// (0x000389fe) bg_popup_fep_shadow_pane_ParamLimits

0x0a1c,	// (0x000389fe) bg_popup_fep_shadow_pane

0x0ad3,	// (0x00038ab5) bg_fep_hwr_top_pane_g4

0x49df,	// (0x0003c9c1) bg_hwr_side_pane_g1_ParamLimits

0x49df,	// (0x0003c9c1) bg_hwr_side_pane_g1

0xb1af,	// (0x00043191) cell_hwr_side_pane_ParamLimits

0xb1af,	// (0x00043191) cell_hwr_side_pane

0x0b83,	// (0x00038b65) fep_hwr_write_pane_g1_ParamLimits

0x0b83,	// (0x00038b65) fep_hwr_write_pane_g1

0x0b90,	// (0x00038b72) fep_hwr_write_pane_g2_ParamLimits

0x0b90,	// (0x00038b72) fep_hwr_write_pane_g2

0x0b9d,	// (0x00038b7f) fep_hwr_write_pane_g3_ParamLimits

0x0b9d,	// (0x00038b7f) fep_hwr_write_pane_g3

0xb1cf,	// (0x000431b1) fep_hwr_write_pane_g4_ParamLimits

0xb1cf,	// (0x000431b1) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x00047afc) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x00047afc) fep_hwr_write_pane_g

0x0ad3,	// (0x00038ab5) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0ad3,	// (0x00038ab5) bg_fep_hwr_candidate_pane_g2

0x0bc0,	// (0x00038ba2) cell_hwr_candidate_pane_ParamLimits

0x0bc0,	// (0x00038ba2) cell_hwr_candidate_pane

0x0c12,	// (0x00038bf4) fep_hwr_candidate_pane_g1_ParamLimits

0x4a3f,	// (0x0003ca21) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4a3f,	// (0x0003ca21) bg_popup_fep_shadow_pane_cp2

0x4bd5,	// (0x0003cbb7) fep_vkb_top_pane_g4_ParamLimits

0x4bd5,	// (0x0003cbb7) fep_vkb_top_pane_g4

0x4c1b,	// (0x0003cbfd) fep_vkb_side_pane_g2_ParamLimits

0x4c1b,	// (0x0003cbfd) fep_vkb_side_pane_g2

0x9aed,	// (0x00041acf) list_setting_pane_t4_ParamLimits

0x9aed,	// (0x00041acf) list_setting_pane_t4

0x9b81,	// (0x00041b63) list_setting_number_pane_t5_ParamLimits

0x9b81,	// (0x00041b63) list_setting_number_pane_t5

0x9ed6,	// (0x00041eb8) list_double_heading_pane_cp2_ParamLimits

0x9ed6,	// (0x00041eb8) list_double_heading_pane_cp2

0x4f5a,	// (0x0003cf3c) list_double_heading_pane_g1_cp2_ParamLimits

0x4f5a,	// (0x0003cf3c) list_double_heading_pane_g1_cp2

0x4f66,	// (0x0003cf48) list_double_heading_pane_g2_cp2_ParamLimits

0x4f66,	// (0x0003cf48) list_double_heading_pane_g2_cp2

0x4f7a,	// (0x0003cf5c) list_double_heading_pane_t1_cp2_ParamLimits

0x4f7a,	// (0x0003cf5c) list_double_heading_pane_t1_cp2

0x4f90,	// (0x0003cf72) list_double_heading_pane_t2_cp2_ParamLimits

0x4f90,	// (0x0003cf72) list_double_heading_pane_t2_cp2

0x7bbf,	// (0x0003fba1) aid_value_unit2

0xee54,	// (0x00046e36) popup_preview_fixed_window

0x7d76,	// (0x0003fd58) bg_popup_preview_window_pane_cp02

0x4fa2,	// (0x0003cf84) list_preview_fixed_pane

0x4fe8,	// (0x0003cfca) list_empty_pane_fp_ParamLimits

0x4fe8,	// (0x0003cfca) list_empty_pane_fp

0x4fe8,	// (0x0003cfca) list_single_cale_day_pane_fp_ParamLimits

0x4fe8,	// (0x0003cfca) list_single_cale_day_pane_fp

0x4fe8,	// (0x0003cfca) list_single_graphic_heading_pane_fp_ParamLimits

0x4fe8,	// (0x0003cfca) list_single_graphic_heading_pane_fp

0x4fe8,	// (0x0003cfca) list_single_graphic_pane_fp_ParamLimits

0x4fe8,	// (0x0003cfca) list_single_graphic_pane_fp

0x4fe8,	// (0x0003cfca) list_single_heading_pane_fp_ParamLimits

0x4fe8,	// (0x0003cfca) list_single_heading_pane_fp

0x4fe8,	// (0x0003cfca) list_single_pane_fp_ParamLimits

0x4fe8,	// (0x0003cfca) list_single_pane_fp

0x5001,	// (0x0003cfe3) list_single_pane_fp_g1_ParamLimits

0x5001,	// (0x0003cfe3) list_single_pane_fp_g1

0xe024,	// (0x00046006) list_single_pane_fp_g2_ParamLimits

0xe024,	// (0x00046006) list_single_pane_fp_g2

0xe030,	// (0x00046012) list_single_pane_fp_g3_ParamLimits

0xe030,	// (0x00046012) list_single_pane_fp_g3

0x500d,	// (0x0003cfef) list_single_pane_fp_g4_ParamLimits

0x500d,	// (0x0003cfef) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x00047b63) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x00047b63) list_single_pane_fp_g

0xe044,	// (0x00046026) list_single_pane_fp_t1_ParamLimits

0xe044,	// (0x00046026) list_single_pane_fp_t1

0xe05b,	// (0x0004603d) list_single_graphic_pane_fp_g1_ParamLimits

0xe05b,	// (0x0004603d) list_single_graphic_pane_fp_g1

0x5001,	// (0x0003cfe3) list_single_graphic_pane_fp_g2_ParamLimits

0x5001,	// (0x0003cfe3) list_single_graphic_pane_fp_g2

0xe024,	// (0x00046006) list_single_graphic_pane_fp_g3_ParamLimits

0xe024,	// (0x00046006) list_single_graphic_pane_fp_g3

0xe030,	// (0x00046012) list_single_graphic_pane_fp_g4_ParamLimits

0xe030,	// (0x00046012) list_single_graphic_pane_fp_g4

0x500d,	// (0x0003cfef) list_single_graphic_pane_fp_g5_ParamLimits

0x500d,	// (0x0003cfef) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x00047b6c) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x00047b6c) list_single_graphic_pane_fp_g

0xe067,	// (0x00046049) list_single_graphic_pane_fp_t1_ParamLimits

0xe067,	// (0x00046049) list_single_graphic_pane_fp_t1

0xe05b,	// (0x0004603d) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe05b,	// (0x0004603d) list_single_graphic_heading_pane_fp_g1

0x5001,	// (0x0003cfe3) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5001,	// (0x0003cfe3) list_single_graphic_heading_pane_fp_g2

0xe024,	// (0x00046006) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe024,	// (0x00046006) list_single_graphic_heading_pane_fp_g3

0xe030,	// (0x00046012) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe030,	// (0x00046012) list_single_graphic_heading_pane_fp_g4

0x500d,	// (0x0003cfef) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x500d,	// (0x0003cfef) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00047b6c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00047b6c) list_single_graphic_heading_pane_fp_g

0xe07d,	// (0x0004605f) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe07d,	// (0x0004605f) list_single_graphic_heading_pane_fp_t1

0xe093,	// (0x00046075) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe093,	// (0x00046075) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x00047b77) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x00047b77) list_single_graphic_heading_pane_fp_t

0xe0a5,	// (0x00046087) list_single_cale_day_pane_fp_g1_ParamLimits

0xe0a5,	// (0x00046087) list_single_cale_day_pane_fp_g1

0x5019,	// (0x0003cffb) list_single_cale_day_pane_fp_g2_ParamLimits

0x5019,	// (0x0003cffb) list_single_cale_day_pane_fp_g2

0xe0dd,	// (0x000460bf) list_single_cale_day_pane_fp_g3_ParamLimits

0xe0dd,	// (0x000460bf) list_single_cale_day_pane_fp_g3

0xe105,	// (0x000460e7) list_single_cale_day_pane_fp_g4_ParamLimits

0xe105,	// (0x000460e7) list_single_cale_day_pane_fp_g4

0xe129,	// (0x0004610b) list_single_cale_day_pane_fp_g5_ParamLimits

0xe129,	// (0x0004610b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x00047b7c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x00047b7c) list_single_cale_day_pane_fp_g

0xe14d,	// (0x0004612f) list_single_cale_day_pane_fp_t1_ParamLimits

0xe14d,	// (0x0004612f) list_single_cale_day_pane_fp_t1

0xe173,	// (0x00046155) list_single_cale_day_pane_fp_t2_ParamLimits

0xe173,	// (0x00046155) list_single_cale_day_pane_fp_t2

0xe18c,	// (0x0004616e) list_single_cale_day_pane_fp_t3_ParamLimits

0xe18c,	// (0x0004616e) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x00047b87) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x00047b87) list_single_cale_day_pane_fp_t

0x5001,	// (0x0003cfe3) list_empty_pane_fp_g1_ParamLimits

0x5001,	// (0x0003cfe3) list_empty_pane_fp_g1

0xe1a5,	// (0x00046187) list_empty_pane_fp_t1

0xe1b3,	// (0x00046195) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x00047b8e) list_empty_pane_fp_t

0x5001,	// (0x0003cfe3) list_single_heading_pane_fp_g1_ParamLimits

0x5001,	// (0x0003cfe3) list_single_heading_pane_fp_g1

0xe024,	// (0x00046006) list_single_heading_pane_fp_g2_ParamLimits

0xe024,	// (0x00046006) list_single_heading_pane_fp_g2

0xe030,	// (0x00046012) list_single_heading_pane_fp_g3_ParamLimits

0xe030,	// (0x00046012) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x00047b93) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x00047b93) list_single_heading_pane_fp_g

0xe1c1,	// (0x000461a3) list_single_heading_pane_fp_t1_ParamLimits

0xe1c1,	// (0x000461a3) list_single_heading_pane_fp_t1

0xe1d3,	// (0x000461b5) list_single_heading_pane_fp_t2_ParamLimits

0xe1d3,	// (0x000461b5) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x00047b9a) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x00047b9a) list_single_heading_pane_fp_t

0xbb80,	// (0x00043b62) aid_size_cell_fast

0x7d4b,	// (0x0003fd2d) soft_indicator_pane_cp1_t1

0xbbbd,	// (0x00043b9f) cell_app_pane_cp2_ParamLimits

0xbbbd,	// (0x00043b9f) cell_app_pane_cp2

0x0a3e,	// (0x00038a20) fep_hwr_candidate_drop_down_list_pane

0x0c2c,	// (0x00038c0e) fep_hwr_candidate_pane_g3_ParamLimits

0x0c2c,	// (0x00038c0e) fep_hwr_candidate_pane_g3

0xe017,	// (0x00045ff9) fep_hwr_candidate_pane_g4_ParamLimits

0xe017,	// (0x00045ff9) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x00047b09) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x00047b09) fep_hwr_candidate_pane_g

0x4acf,	// (0x0003cab1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4acf,	// (0x0003cab1) fep_vkb_candidate_drop_down_list_pane

0x4ef7,	// (0x0003ced9) fep_vkb_candidate_pane_g3

0x4eff,	// (0x0003cee1) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x00047b36) fep_vkb_candidate_pane_g

0x0c97,	// (0x00038c79) cell_hwr_candidate_pane_g1_ParamLimits

0x0ca5,	// (0x00038c87) cell_hwr_candidate_pane_g3_ParamLimits

0x0ca5,	// (0x00038c87) cell_hwr_candidate_pane_g3

0x5b97,	// (0x0003db79) cell_hwr_candidate_pane_g4_ParamLimits

0x5b97,	// (0x0003db79) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x00047b55) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x00047b55) cell_hwr_candidate_pane_g

0x4f16,	// (0x0003cef8) cell_vkb_candidate_pane_g3_ParamLimits

0x4f16,	// (0x0003cef8) cell_vkb_candidate_pane_g3

0x4f31,	// (0x0003cf13) cell_vkb_candidate_pane_g4_ParamLimits

0x4f31,	// (0x0003cf13) cell_vkb_candidate_pane_g4

0x5025,	// (0x0003d007) cell_app_pane_cp2_g1_ParamLimits

0x5025,	// (0x0003d007) cell_app_pane_cp2_g1

0x5043,	// (0x0003d025) cell_app_pane_cp2_g2_ParamLimits

0x5043,	// (0x0003d025) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x00047b9f) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x00047b9f) cell_app_pane_cp2_g

0x504f,	// (0x0003d031) cell_app_pane_cp2_t1_ParamLimits

0x504f,	// (0x0003d031) cell_app_pane_cp2_t1

0xba1a,	// (0x000439fc) grid_highlight_pane_cp1_ParamLimits

0xba1a,	// (0x000439fc) grid_highlight_pane_cp1

0x0ce4,	// (0x00038cc6) cell_hwr_candidate_pane_cp1_ParamLimits

0x0ce4,	// (0x00038cc6) cell_hwr_candidate_pane_cp1

0x0c97,	// (0x00038c79) fep_hwr_candidate_drop_down_list_pane_g1

0x0d08,	// (0x00038cea) fep_hwr_candidate_drop_down_list_pane_g2

0x0d15,	// (0x00038cf7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00047ba4) fep_hwr_candidate_drop_down_list_pane_g

0x0d22,	// (0x00038d04) fep_hwr_candidate_drop_down_list_scroll_pane

0x0d2b,	// (0x00038d0d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0d2b,	// (0x00038d0d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0d38,	// (0x00038d1a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0d38,	// (0x00038d1a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0d45,	// (0x00038d27) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0d45,	// (0x00038d27) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0d52,	// (0x00038d34) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0d52,	// (0x00038d34) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0d6d,	// (0x00038d4f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0d6d,	// (0x00038d4f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0d88,	// (0x00038d6a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0d88,	// (0x00038d6a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0da3,	// (0x00038d85) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0da3,	// (0x00038d85) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0dbe,	// (0x00038da0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0dbe,	// (0x00038da0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00047bab) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00047bab) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5061,	// (0x0003d043) cell_vkb_candidate_pane_cp1_ParamLimits

0x5061,	// (0x0003d043) cell_vkb_candidate_pane_cp1

0x4bd5,	// (0x0003cbb7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4bd5,	// (0x0003cbb7) fep_vkb_candidate_drop_down_list_pane_g1

0x5087,	// (0x0003d069) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5087,	// (0x0003d069) fep_vkb_candidate_drop_down_list_pane_g2

0x5094,	// (0x0003d076) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5094,	// (0x0003d076) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x00047bbc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x00047bbc) fep_vkb_candidate_drop_down_list_pane_g

0x50a1,	// (0x0003d083) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x50a1,	// (0x0003d083) fep_vkb_candidate_drop_down_list_scroll_pane

0x50ae,	// (0x0003d090) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x50ae,	// (0x0003d090) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x50bb,	// (0x0003d09d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x50bb,	// (0x0003d09d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x50c7,	// (0x0003d0a9) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x50c7,	// (0x0003d0a9) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x50d3,	// (0x0003d0b5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x50d3,	// (0x0003d0b5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x50f4,	// (0x0003d0d6) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x50f4,	// (0x0003d0d6) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5115,	// (0x0003d0f7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5115,	// (0x0003d0f7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5136,	// (0x0003d118) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5136,	// (0x0003d118) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5157,	// (0x0003d139) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5157,	// (0x0003d139) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x00047bc3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x00047bc3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x93a1,	// (0x00041383) title_pane_g1_ParamLimits

0x93b4,	// (0x00041396) title_pane_g2_ParamLimits

0xf54e,	// (0x00047530) title_pane_g_ParamLimits

0xbeec,	// (0x00043ece) aid_call2_pane

0xbef4,	// (0x00043ed6) aid_call_pane

0xbefc,	// (0x00043ede) popup_clock_analogue_window_g1

0xbefc,	// (0x00043ede) popup_clock_analogue_window_g2

0xf0b2,	// (0x00047094) popup_clock_analogue_window_g3

0xf0bb,	// (0x0004709d) popup_clock_analogue_window_g4

0x7bd1,	// (0x0003fbb3) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x000476da) popup_clock_analogue_window_g

0xf12f,	// (0x00047111) popup_clock_analogue_window_t1

0xf13d,	// (0x0004711f) clock_digital_number_pane_ParamLimits

0xf13d,	// (0x0004711f) clock_digital_number_pane

0xf149,	// (0x0004712b) clock_digital_number_pane_cp02_ParamLimits

0xf149,	// (0x0004712b) clock_digital_number_pane_cp02

0xf155,	// (0x00047137) clock_digital_number_pane_cp03_ParamLimits

0xf155,	// (0x00047137) clock_digital_number_pane_cp03

0xf161,	// (0x00047143) clock_digital_number_pane_cp04_ParamLimits

0xf161,	// (0x00047143) clock_digital_number_pane_cp04

0xf16d,	// (0x0004714f) clock_digital_separator_pane_ParamLimits

0xf16d,	// (0x0004714f) clock_digital_separator_pane

0xf179,	// (0x0004715b) popup_clock_digital_window_t1_ParamLimits

0xf179,	// (0x0004715b) popup_clock_digital_window_t1

0x7bd1,	// (0x0003fbb3) clock_digital_number_pane_g1

0x7bd1,	// (0x0003fbb3) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x000476e5) clock_digital_number_pane_g

0x7bd1,	// (0x0003fbb3) clock_digital_separator_pane_g1

0x7bd1,	// (0x0003fbb3) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x000476e5) clock_digital_separator_pane_g

0xab53,	// (0x00042b35) aid_fill_nsta_ParamLimits

0xac8b,	// (0x00042c6d) indicator_nsta_pane_ParamLimits

0x20ed,	// (0x0003a0cf) popup_clock_analogue_window

0x20ed,	// (0x0003a0cf) popup_clock_digital_window

0xca0a,	// (0x000449ec) grid_indicator_nsta_pane_ParamLimits

0x438d,	// (0x0003c36f) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x00047a89) clock_nsta_pane_t

0xf07f,	// (0x00047061) aid_size_max_handle

0x9e49,	// (0x00041e2b) aid_size_min_handle

0xc36b,	// (0x0004434d) editor_scroll_pane

0x5172,	// (0x0003d154) ex_editor_pane

0xbb46,	// (0x00043b28) scroll_pane_cp13

0xb9b9,	// (0x0004399b) scroll_pane_cp14

0xbf2b,	// (0x00043f0d) scroll_pane_cp36

0x9ee9,	// (0x00041ecb) list_single_graphic_hl_pane_cp2_ParamLimits

0x9ee9,	// (0x00041ecb) list_single_graphic_hl_pane_cp2

0xc892,	// (0x00044874) list_single_graphic_hl_pane_ParamLimits

0xc892,	// (0x00044874) list_single_graphic_hl_pane

0xe1e9,	// (0x000461cb) aid_size_min_hl_cp1

0x517a,	// (0x0003d15c) list_highlight_pane_cp34_ParamLimits

0x517a,	// (0x0003d15c) list_highlight_pane_cp34

0x518b,	// (0x0003d16d) list_single_graphic_hl_pane_g1_ParamLimits

0x518b,	// (0x0003d16d) list_single_graphic_hl_pane_g1

0xb1e4,	// (0x000431c6) list_single_graphic_hl_pane_g2_ParamLimits

0xb1e4,	// (0x000431c6) list_single_graphic_hl_pane_g2

0xb1e4,	// (0x000431c6) list_single_graphic_hl_pane_g3_ParamLimits

0xb1e4,	// (0x000431c6) list_single_graphic_hl_pane_g3

0xe1f2,	// (0x000461d4) list_single_graphic_hl_pane_g4_ParamLimits

0xe1f2,	// (0x000461d4) list_single_graphic_hl_pane_g4

0xb1f0,	// (0x000431d2) list_single_graphic_hl_pane_g5_ParamLimits

0xb1f0,	// (0x000431d2) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x00047bd4) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x00047bd4) list_single_graphic_hl_pane_g

0xb204,	// (0x000431e6) list_single_graphic_hl_pane_t1_ParamLimits

0xb204,	// (0x000431e6) list_single_graphic_hl_pane_t1

0x5198,	// (0x0003d17a) aid_size_min_hl_cp2

0x51a1,	// (0x0003d183) list_highlight_pane_cp34_cp2_ParamLimits

0x51a1,	// (0x0003d183) list_highlight_pane_cp34_cp2

0x518b,	// (0x0003d16d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x518b,	// (0x0003d16d) list_single_graphic_hl_pane_g1_cp2

0x51ae,	// (0x0003d190) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x51ae,	// (0x0003d190) list_single_graphic_hl_pane_g2_cp2

0xcd69,	// (0x00044d4b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcd69,	// (0x00044d4b) list_single_graphic_hl_pane_g3_cp2

0xcd77,	// (0x00044d59) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcd77,	// (0x00044d59) list_single_graphic_hl_pane_g4_cp2

0x51c8,	// (0x0003d1aa) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x51c8,	// (0x0003d1aa) list_single_graphic_hl_pane_g5_cp2

0xa2b6,	// (0x00042298) control_pane_g4_ParamLimits

0xa2b6,	// (0x00042298) control_pane_g4

0x00fa,	// (0x000380dc) bg_popup_sub_pane_cp10_ParamLimits

0x4964,	// (0x0003c946) list_choice_list_pane_ParamLimits

0x4973,	// (0x0003c955) scroll_pane_cp23

0x7d76,	// (0x0003fd58) bg_popup_preview_window_pane_cp02_ParamLimits

0x4fa2,	// (0x0003cf84) list_preview_fixed_pane_ParamLimits

0x4fb8,	// (0x0003cf9a) list_preview_fixed_pane_cp_ParamLimits

0x4fb8,	// (0x0003cf9a) list_preview_fixed_pane_cp

0x4fc4,	// (0x0003cfa6) popup_preview_fixed_window_g1_ParamLimits

0x4fc4,	// (0x0003cfa6) popup_preview_fixed_window_g1

0x4fd0,	// (0x0003cfb2) popup_preview_fixed_window_g2_ParamLimits

0x4fd0,	// (0x0003cfb2) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x00047b5c) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x00047b5c) popup_preview_fixed_window_g

0xeff1,	// (0x00046fd3) aid_navi_side_left_pane_ParamLimits

0xf006,	// (0x00046fe8) aid_navi_side_right_pane_ParamLimits

0xf01e,	// (0x00047000) navi_icon_pane_stacon_ParamLimits

0xf032,	// (0x00047014) navi_navi_pane_stacon_ParamLimits

0xf01e,	// (0x00047000) navi_text_pane_stacon_ParamLimits

0x7bc7,	// (0x0003fba9) main_text_info_pane

0x51f2,	// (0x0003d1d4) listscroll_text_info_pane

0x51fa,	// (0x0003d1dc) list_text_info_pane_ParamLimits

0x51fa,	// (0x0003d1dc) list_text_info_pane

0x5209,	// (0x0003d1eb) scroll_pane_cp24_ParamLimits

0x5209,	// (0x0003d1eb) scroll_pane_cp24

0xcd83,	// (0x00044d65) list_text_info_pane_t1_ParamLimits

0xcd83,	// (0x00044d65) list_text_info_pane_t1

0xa44c,	// (0x0004242e) popup_fast_swap2_window_ParamLimits

0xa44c,	// (0x0004242e) popup_fast_swap2_window

0x524c,	// (0x0003d22e) aid_size_cell_fast2

0x7bc7,	// (0x0003fba9) bg_popup_window_pane_cp17

0x274a,	// (0x0003a72c) heading_pane_cp2

0x8534,	// (0x00040516) listscroll_fast2_pane

0x5256,	// (0x0003d238) grid_fast2_pane

0x5260,	// (0x0003d242) listscroll_fast2_pane_g1

0x526a,	// (0x0003d24c) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x00047bdf) listscroll_fast2_pane_g

0xbb46,	// (0x00043b28) scroll_pane_cp26

0x5274,	// (0x0003d256) cell_fast2_pane_ParamLimits

0x5274,	// (0x0003d256) cell_fast2_pane

0x528b,	// (0x0003d26d) cell_fast2_pane_g1

0x5294,	// (0x0003d276) cell_fast2_pane_g2

0x529d,	// (0x0003d27f) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x00047be4) cell_fast2_pane_g

0x8576,	// (0x00040558) grid_highlight_pane_cp9

0x858b,	// (0x0004056d) main_eswt_pane_ParamLimits

0x858b,	// (0x0004056d) main_eswt_pane

0x521e,	// (0x0003d200) list_single_text_info_pane

0x52a5,	// (0x0003d287) eswt_ctrl_button_pane

0x52a5,	// (0x0003d287) eswt_ctrl_canvas_pane

0x52ad,	// (0x0003d28f) eswt_ctrl_combo_pane

0x52a5,	// (0x0003d287) eswt_ctrl_default_pane

0x52a5,	// (0x0003d287) eswt_ctrl_label_pane

0x52b5,	// (0x0003d297) eswt_ctrl_wait_pane

0x52bd,	// (0x0003d29f) eswt_shell_pane

0x7bc7,	// (0x0003fba9) listscroll_eswt_app_pane

0x52dd,	// (0x0003d2bf) popup_eswt_tasktip_window_ParamLimits

0x52dd,	// (0x0003d2bf) popup_eswt_tasktip_window

0x238a,	// (0x0003a36c) bg_popup_window_pane_cp18

0x52ee,	// (0x0003d2d0) eswt_control_pane_g1_ParamLimits

0x52ee,	// (0x0003d2d0) eswt_control_pane_g1

0x52fb,	// (0x0003d2dd) eswt_control_pane_g2_ParamLimits

0x52fb,	// (0x0003d2dd) eswt_control_pane_g2

0x5308,	// (0x0003d2ea) eswt_control_pane_g3_ParamLimits

0x5308,	// (0x0003d2ea) eswt_control_pane_g3

0x5315,	// (0x0003d2f7) eswt_control_pane_g4_ParamLimits

0x5315,	// (0x0003d2f7) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x00047beb) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x00047beb) eswt_control_pane_g

0xba1a,	// (0x000439fc) bg_button_pane_ParamLimits

0xba1a,	// (0x000439fc) bg_button_pane

0x858b,	// (0x0004056d) common_borders_pane_copy2_ParamLimits

0x858b,	// (0x0004056d) common_borders_pane_copy2

0x5322,	// (0x0003d304) control_button_pane_g1_ParamLimits

0x5322,	// (0x0003d304) control_button_pane_g1

0x532e,	// (0x0003d310) control_button_pane_g2_ParamLimits

0x532e,	// (0x0003d310) control_button_pane_g2

0x533a,	// (0x0003d31c) control_button_pane_g3_ParamLimits

0x533a,	// (0x0003d31c) control_button_pane_g3

0x0002,

0xfc12,	// (0x00047bf4) control_button_pane_g_ParamLimits

0xfc12,	// (0x00047bf4) control_button_pane_g

0x534e,	// (0x0003d330) control_button_pane_t1

0x535c,	// (0x0003d33e) control_button_pane_t2

0x0001,

0xfc19,	// (0x00047bfb) control_button_pane_t

0x2316,	// (0x0003a2f8) bg_button_pane_g1

0x2326,	// (0x0003a308) bg_button_pane_g2

0x231e,	// (0x0003a300) bg_button_pane_g3

0x2336,	// (0x0003a318) bg_button_pane_g4

0x232e,	// (0x0003a310) bg_button_pane_g5

0x233e,	// (0x0003a320) bg_button_pane_g6

0x2346,	// (0x0003a328) bg_button_pane_g7

0x2356,	// (0x0003a338) bg_button_pane_g8

0x234e,	// (0x0003a330) bg_button_pane_g9

0x0008,

0xf861,	// (0x00047843) bg_button_pane_g

0x491f,	// (0x0003c901) common_borders_pane_ParamLimits

0x491f,	// (0x0003c901) common_borders_pane

0x52ee,	// (0x0003d2d0) eswt_control_pane_g1_copy1_ParamLimits

0x52ee,	// (0x0003d2d0) eswt_control_pane_g1_copy1

0x52fb,	// (0x0003d2dd) eswt_control_pane_g2_copy1_ParamLimits

0x52fb,	// (0x0003d2dd) eswt_control_pane_g2_copy1

0x5308,	// (0x0003d2ea) eswt_control_pane_g3_copy1_ParamLimits

0x5308,	// (0x0003d2ea) eswt_control_pane_g3_copy1

0x5315,	// (0x0003d2f7) eswt_control_pane_g4_copy1_ParamLimits

0x5315,	// (0x0003d2f7) eswt_control_pane_g4_copy1

0x495a,	// (0x0003c93c) bg_eswt_ctrl_canvas_pane_g1

0x491f,	// (0x0003c901) common_borders_pane_cp2_ParamLimits

0x491f,	// (0x0003c901) common_borders_pane_cp2

0x491f,	// (0x0003c901) common_borders_pane_cp3_ParamLimits

0x491f,	// (0x0003c901) common_borders_pane_cp3

0x536a,	// (0x0003d34c) separator_horizontal_pane

0x5372,	// (0x0003d354) separator_vertical_pane

0x52ee,	// (0x0003d2d0) eswt_control_pane_g1_copy2_ParamLimits

0x52ee,	// (0x0003d2d0) eswt_control_pane_g1_copy2

0x52fb,	// (0x0003d2dd) eswt_control_pane_g2_copy2_ParamLimits

0x52fb,	// (0x0003d2dd) eswt_control_pane_g2_copy2

0x5308,	// (0x0003d2ea) eswt_control_pane_g3_copy2_ParamLimits

0x5308,	// (0x0003d2ea) eswt_control_pane_g3_copy2

0x5315,	// (0x0003d2f7) eswt_control_pane_g4_copy2_ParamLimits

0x5315,	// (0x0003d2f7) eswt_control_pane_g4_copy2

0x7bc7,	// (0x0003fba9) common_borders_pane_cp4

0x537b,	// (0x0003d35d) separator_horizontal_pane_g1

0x5384,	// (0x0003d366) separator_horizontal_pane_g2

0x538d,	// (0x0003d36f) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x00047c00) separator_horizontal_pane_g

0x52ee,	// (0x0003d2d0) eswt_control_pane_g1_copy3_ParamLimits

0x52ee,	// (0x0003d2d0) eswt_control_pane_g1_copy3

0x52fb,	// (0x0003d2dd) eswt_control_pane_g2_copy3_ParamLimits

0x52fb,	// (0x0003d2dd) eswt_control_pane_g2_copy3

0x5308,	// (0x0003d2ea) eswt_control_pane_g3_copy3_ParamLimits

0x5308,	// (0x0003d2ea) eswt_control_pane_g3_copy3

0x5315,	// (0x0003d2f7) eswt_control_pane_g4_copy3_ParamLimits

0x5315,	// (0x0003d2f7) eswt_control_pane_g4_copy3

0x7bc7,	// (0x0003fba9) common_borders_pane_cp5

0x5396,	// (0x0003d378) separator_vertical_pane_g1

0x539f,	// (0x0003d381) separator_vertical_pane_g2

0x53a8,	// (0x0003d38a) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x00047c07) separator_vertical_pane_g

0x52ee,	// (0x0003d2d0) eswt_control_pane_g1_copy4_ParamLimits

0x52ee,	// (0x0003d2d0) eswt_control_pane_g1_copy4

0x52fb,	// (0x0003d2dd) eswt_control_pane_g2_copy4_ParamLimits

0x52fb,	// (0x0003d2dd) eswt_control_pane_g2_copy4

0x5308,	// (0x0003d2ea) eswt_control_pane_g3_copy4_ParamLimits

0x5308,	// (0x0003d2ea) eswt_control_pane_g3_copy4

0x5315,	// (0x0003d2f7) eswt_control_pane_g4_copy4_ParamLimits

0x5315,	// (0x0003d2f7) eswt_control_pane_g4_copy4

0xcda5,	// (0x00044d87) eswt_ctrl_combo_button_pane

0xcdad,	// (0x00044d8f) eswt_ctrl_input_pane

0xcdb5,	// (0x00044d97) popup_choice_list_window_cp70

0xcdbd,	// (0x00044d9f) eswt_ctrl_input_pane_t1

0x7bc7,	// (0x0003fba9) input_focus_pane_cp70

0x491f,	// (0x0003c901) bg_button_pane_cp70_ParamLimits

0x491f,	// (0x0003c901) bg_button_pane_cp70

0xcdcb,	// (0x00044dad) eswt_ctrl_combo_button_pane_g1

0x53df,	// (0x0003d3c1) wait_bar_pane_cp70

0x238a,	// (0x0003a36c) bg_popup_window_pane_cp70_ParamLimits

0x238a,	// (0x0003a36c) bg_popup_window_pane_cp70

0x53e7,	// (0x0003d3c9) popup_eswt_tasktip_window_t1

0x53fd,	// (0x0003d3df) wait_bar_pane_cp71_ParamLimits

0x53fd,	// (0x0003d3df) wait_bar_pane_cp71

0x5409,	// (0x0003d3eb) grid_eswt_app_pane

0xbd8b,	// (0x00043d6d) scroll_pane_cp70

0xcdd3,	// (0x00044db5) cell_eswt_app_pane_ParamLimits

0xcdd3,	// (0x00044db5) cell_eswt_app_pane

0xce05,	// (0x00044de7) cell_eswt_app_pane_g1_ParamLimits

0xce05,	// (0x00044de7) cell_eswt_app_pane_g1

0xce34,	// (0x00044e16) cell_eswt_app_pane_g2_ParamLimits

0xce34,	// (0x00044e16) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x00047c0e) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x00047c0e) cell_eswt_app_pane_g

0xce5d,	// (0x00044e3f) cell_eswt_app_pane_t1_ParamLimits

0xce5d,	// (0x00044e3f) cell_eswt_app_pane_t1

0x54ce,	// (0x0003d4b0) grid_highlight_pane_cp70_ParamLimits

0x54ce,	// (0x0003d4b0) grid_highlight_pane_cp70

0xc264,	// (0x00044246) set_content_pane_g1

0xa24c,	// (0x0004222e) status_small_volume_pane

0x0e0f,	// (0x00038df1) status_small_volume_pane_g1

0x0e17,	// (0x00038df9) volume_small2_pane

0x0e20,	// (0x00038e02) volume_small2_pane_g1

0x0e29,	// (0x00038e0b) volume_small2_pane_g2

0x0e32,	// (0x00038e14) volume_small2_pane_g3

0x0e3b,	// (0x00038e1d) volume_small2_pane_g4

0x0e44,	// (0x00038e26) volume_small2_pane_g5

0x0e4d,	// (0x00038e2f) volume_small2_pane_g6

0x0e56,	// (0x00038e38) volume_small2_pane_g7

0x0e5f,	// (0x00038e41) volume_small2_pane_g8

0x0e68,	// (0x00038e4a) volume_small2_pane_g9

0x0e71,	// (0x00038e53) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x00047c13) volume_small2_pane_g

0x4d29,	// (0x0003cd0b) fep_vkb_top_text_pane_g1_ParamLimits

0xcd11,	// (0x00044cf3) fep_vkb_top_text_pane_t1_ParamLimits

0x4fdc,	// (0x0003cfbe) popup_preview_fixed_window_g3_ParamLimits

0x4fdc,	// (0x0003cfbe) popup_preview_fixed_window_g3

0xaae6,	// (0x00042ac8) popup_toolbar_trans_pane

0xc6e2,	// (0x000446c4) aid_height_set_list_ParamLimits

0x36df,	// (0x0003b6c1) aid_size_parent_ParamLimits

0x00fa,	// (0x000380dc) list_highlight_pane_cp2_ParamLimits

0xc264,	// (0x00044246) set_content_pane_g1_ParamLimits

0xc8a6,	// (0x00044888) list_single_image_pane_ParamLimits

0xc8a6,	// (0x00044888) list_single_image_pane

0xce8f,	// (0x00044e71) aid_size_cell_image_ParamLimits

0xce8f,	// (0x00044e71) aid_size_cell_image

0xce9c,	// (0x00044e7e) grid_single_image_pane_ParamLimits

0xce9c,	// (0x00044e7e) grid_single_image_pane

0xba28,	// (0x00043a0a) list_single_image_pane_g1_ParamLimits

0xba28,	// (0x00043a0a) list_single_image_pane_g1

0xba34,	// (0x00043a16) list_single_image_pane_g2_ParamLimits

0xba34,	// (0x00043a16) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x00047c28) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x00047c28) list_single_image_pane_g

0x54f5,	// (0x0003d4d7) list_single_image_pane_t1_ParamLimits

0x54f5,	// (0x0003d4d7) list_single_image_pane_t1

0xceaa,	// (0x00044e8c) cell_image_list_pane_ParamLimits

0xceaa,	// (0x00044e8c) cell_image_list_pane

0xcebe,	// (0x00044ea0) cell_image_list_pane_g1

0xcec7,	// (0x00044ea9) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x00047c2d) cell_image_list_pane_g

0x5533,	// (0x0003d515) aid_size_cell_tb_trans_pane

0xba1a,	// (0x000439fc) bg_tb_trans_pane

0x5545,	// (0x0003d527) grid_tb_trans_pane

0x2316,	// (0x0003a2f8) bg_tb_trans_pane_g1

0x2326,	// (0x0003a308) bg_tb_trans_pane_g2

0x231e,	// (0x0003a300) bg_tb_trans_pane_g3

0x2336,	// (0x0003a318) bg_tb_trans_pane_g4

0x232e,	// (0x0003a310) bg_tb_trans_pane_g5

0x2356,	// (0x0003a338) bg_tb_trans_pane_g6

0x234e,	// (0x0003a330) bg_tb_trans_pane_g7

0x233e,	// (0x0003a320) bg_tb_trans_pane_g8

0x2346,	// (0x0003a328) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x00047c32) bg_tb_trans_pane_g

0x5559,	// (0x0003d53b) cell_toolbar_trans_pane_ParamLimits

0x5559,	// (0x0003d53b) cell_toolbar_trans_pane

0x495a,	// (0x0003c93c) cell_toolbar_trans_pane_g1

0xcaf6,	// (0x00044ad8) list_form2_midp_pane_t1

0xcb04,	// (0x00044ae6) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x00047acf) list_form2_midp_pane_t

0x459a,	// (0x0003c57c) scroll_pane_cp51_ParamLimits

0x4761,	// (0x0003c743) form2_midp_wait_pane_g1

0x476a,	// (0x0003c74c) form2_midp_wait_pane_g2

0x4773,	// (0x0003c755) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x00047ae4) form2_midp_wait_pane_g

0x7c35,	// (0x0003fc17) list_highlight_pane_cp21_ParamLimits

0x47b7,	// (0x0003c799) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x47c6,	// (0x0003c7a8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xdcc9,	// (0x00045cab) list_single_2graphic_im_pane_ParamLimits

0xdcc9,	// (0x00045cab) list_single_2graphic_im_pane

0xced0,	// (0x00044eb2) list_single_2graphic_im_pane_g1_ParamLimits

0xced0,	// (0x00044eb2) list_single_2graphic_im_pane_g1

0xcee1,	// (0x00044ec3) list_single_2graphic_im_pane_g2_ParamLimits

0xcee1,	// (0x00044ec3) list_single_2graphic_im_pane_g2

0xceed,	// (0x00044ecf) list_single_2graphic_im_pane_g3_ParamLimits

0xceed,	// (0x00044ecf) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x00047c45) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x00047c45) list_single_2graphic_im_pane_g

0xcf01,	// (0x00044ee3) list_single_2graphic_im_pane_t1_ParamLimits

0xcf01,	// (0x00044ee3) list_single_2graphic_im_pane_t1

0x4fe8,	// (0x0003cfca) list_single_graphic_2heading_pane_fp_ParamLimits

0x4fe8,	// (0x0003cfca) list_single_graphic_2heading_pane_fp

0xe05b,	// (0x0004603d) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe05b,	// (0x0004603d) list_single_graphic_2heading_pane_fp_g1

0x5001,	// (0x0003cfe3) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5001,	// (0x0003cfe3) list_single_graphic_2heading_pane_fp_g2

0xe024,	// (0x00046006) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe024,	// (0x00046006) list_single_graphic_2heading_pane_fp_g3

0xe030,	// (0x00046012) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe030,	// (0x00046012) list_single_graphic_2heading_pane_fp_g4

0x500d,	// (0x0003cfef) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x500d,	// (0x0003cfef) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00047b6c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00047b6c) list_single_graphic_2heading_pane_fp_g

0xe1fe,	// (0x000461e0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe1fe,	// (0x000461e0) list_single_graphic_2heading_pane_fp_t1

0xe093,	// (0x00046075) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe093,	// (0x00046075) list_single_graphic_2heading_pane_fp_t2

0xe214,	// (0x000461f6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe214,	// (0x000461f6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x00047c4e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x00047c4e) list_single_graphic_2heading_pane_fp_t

0x49eb,	// (0x0003c9cd) fep_hwr_write_pane_g5_ParamLimits

0x49eb,	// (0x0003c9cd) fep_hwr_write_pane_g5

0x49f7,	// (0x0003c9d9) fep_hwr_write_pane_g6_ParamLimits

0x49f7,	// (0x0003c9d9) fep_hwr_write_pane_g6

0x52bd,	// (0x0003d29f) eswt_shell_pane_ParamLimits

0x238a,	// (0x0003a36c) bg_popup_window_pane_cp18_ParamLimits

0x3625,	// (0x0003b607) heading_pane_cp70

0x53e7,	// (0x0003d3c9) popup_eswt_tasktip_window_t1_ParamLimits

0xabb0,	// (0x00042b92) aid_touch_tab_arrow_left

0xabc6,	// (0x00042ba8) aid_touch_tab_arrow_right

0x7be5,	// (0x0003fbc7) title_pane_g3_ParamLimits

0x7be5,	// (0x0003fbc7) title_pane_g3

0xb9d9,	// (0x000439bb) set_value_pane_g1

0xaae6,	// (0x00042ac8) popup_toolbar_trans_pane_ParamLimits

0x5533,	// (0x0003d515) aid_size_cell_tb_trans_pane_ParamLimits

0xba1a,	// (0x000439fc) bg_tb_trans_pane_ParamLimits

0x5545,	// (0x0003d527) grid_tb_trans_pane_ParamLimits

0x7d76,	// (0x0003fd58) cont_note_pane_ParamLimits

0x7d76,	// (0x0003fd58) cont_note_pane

0x858b,	// (0x0004056d) cont_snote2_single_text_pane_ParamLimits

0x858b,	// (0x0004056d) cont_snote2_single_text_pane

0x858b,	// (0x0004056d) cont_snote2_single_graphic_pane_ParamLimits

0x858b,	// (0x0004056d) cont_snote2_single_graphic_pane

0x2966,	// (0x0003a948) cont_note_wait_pane_ParamLimits

0x2966,	// (0x0003a948) cont_note_wait_pane

0x2966,	// (0x0003a948) cont_note_image_pane_ParamLimits

0x2966,	// (0x0003a948) cont_note_image_pane

0x55ed,	// (0x0003d5cf) popup_note2_window_g1_ParamLimits

0x55ed,	// (0x0003d5cf) popup_note2_window_g1

0x561e,	// (0x0003d600) popup_note2_window_t1_ParamLimits

0x561e,	// (0x0003d600) popup_note2_window_t1

0x5663,	// (0x0003d645) popup_note2_window_t2_ParamLimits

0x5663,	// (0x0003d645) popup_note2_window_t2

0x56a8,	// (0x0003d68a) popup_note2_window_t3_ParamLimits

0x56a8,	// (0x0003d68a) popup_note2_window_t3

0x56ed,	// (0x0003d6cf) popup_note2_window_t4_ParamLimits

0x56ed,	// (0x0003d6cf) popup_note2_window_t4

0x7dfa,	// (0x0003fddc) popup_note2_window_t5_ParamLimits

0x7dfa,	// (0x0003fddc) popup_note2_window_t5

0x0004,

0xfc78,	// (0x00047c5a) popup_note2_window_t_ParamLimits

0xfc78,	// (0x00047c5a) popup_note2_window_t

0x571c,	// (0x0003d6fe) popup_note2_image_window_g1_ParamLimits

0x571c,	// (0x0003d6fe) popup_note2_image_window_g1

0x5728,	// (0x0003d70a) popup_note2_image_window_g2_ParamLimits

0x5728,	// (0x0003d70a) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x00047c65) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x00047c65) popup_note2_image_window_g

0x573a,	// (0x0003d71c) popup_note2_image_window_t1_ParamLimits

0x573a,	// (0x0003d71c) popup_note2_image_window_t1

0x5752,	// (0x0003d734) popup_note2_image_window_t2_ParamLimits

0x5752,	// (0x0003d734) popup_note2_image_window_t2

0x576a,	// (0x0003d74c) popup_note2_image_window_t3_ParamLimits

0x576a,	// (0x0003d74c) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x00047c6a) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x00047c6a) popup_note2_image_window_t

0x2974,	// (0x0003a956) popup_note2_wait_window_g1_ParamLimits

0x2974,	// (0x0003a956) popup_note2_wait_window_g1

0x5786,	// (0x0003d768) popup_note2_wait_window_g2_ParamLimits

0x5786,	// (0x0003d768) popup_note2_wait_window_g2

0x298c,	// (0x0003a96e) popup_note2_wait_window_g3_ParamLimits

0x298c,	// (0x0003a96e) popup_note2_wait_window_g3

0x0002,

0xfc8f,	// (0x00047c71) popup_note2_wait_window_g_ParamLimits

0xfc8f,	// (0x00047c71) popup_note2_wait_window_g

0x5792,	// (0x0003d774) popup_note2_wait_window_t1_ParamLimits

0x5792,	// (0x0003d774) popup_note2_wait_window_t1

0x57b0,	// (0x0003d792) popup_note2_wait_window_t2_ParamLimits

0x57b0,	// (0x0003d792) popup_note2_wait_window_t2

0x57ce,	// (0x0003d7b0) popup_note2_wait_window_t3_ParamLimits

0x57ce,	// (0x0003d7b0) popup_note2_wait_window_t3

0x57e0,	// (0x0003d7c2) popup_note2_wait_window_t4_ParamLimits

0x57e0,	// (0x0003d7c2) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x00047c78) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x00047c78) popup_note2_wait_window_t

0x57f2,	// (0x0003d7d4) wait_bar2_pane_ParamLimits

0x57f2,	// (0x0003d7d4) wait_bar2_pane

0x580a,	// (0x0003d7ec) popup_snote2_single_text_window_g1_ParamLimits

0x580a,	// (0x0003d7ec) popup_snote2_single_text_window_g1

0x5832,	// (0x0003d814) popup_snote2_single_text_window_t1_ParamLimits

0x5832,	// (0x0003d814) popup_snote2_single_text_window_t1

0x587e,	// (0x0003d860) popup_snote2_single_text_window_t2_ParamLimits

0x587e,	// (0x0003d860) popup_snote2_single_text_window_t2

0x58ca,	// (0x0003d8ac) popup_snote2_single_text_window_t3_ParamLimits

0x58ca,	// (0x0003d8ac) popup_snote2_single_text_window_t3

0x590b,	// (0x0003d8ed) popup_snote2_single_text_window_t4_ParamLimits

0x590b,	// (0x0003d8ed) popup_snote2_single_text_window_t4

0x5941,	// (0x0003d923) popup_snote2_single_text_window_t5_ParamLimits

0x5941,	// (0x0003d923) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x00047c81) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x00047c81) popup_snote2_single_text_window_t

0x596c,	// (0x0003d94e) popup_snote2_single_graphic_window_g1_ParamLimits

0x596c,	// (0x0003d94e) popup_snote2_single_graphic_window_g1

0x5994,	// (0x0003d976) popup_snote2_single_graphic_window_g2_ParamLimits

0x5994,	// (0x0003d976) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x00047c8c) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x00047c8c) popup_snote2_single_graphic_window_g

0x59bc,	// (0x0003d99e) popup_snote2_single_graphic_window_t1_ParamLimits

0x59bc,	// (0x0003d99e) popup_snote2_single_graphic_window_t1

0x5a08,	// (0x0003d9ea) popup_snote2_single_graphic_window_t2_ParamLimits

0x5a08,	// (0x0003d9ea) popup_snote2_single_graphic_window_t2

0x58ca,	// (0x0003d8ac) popup_snote2_single_graphic_window_t3_ParamLimits

0x58ca,	// (0x0003d8ac) popup_snote2_single_graphic_window_t3

0x590b,	// (0x0003d8ed) popup_snote2_single_graphic_window_t4_ParamLimits

0x590b,	// (0x0003d8ed) popup_snote2_single_graphic_window_t4

0x5941,	// (0x0003d923) popup_snote2_single_graphic_window_t5_ParamLimits

0x5941,	// (0x0003d923) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x00047c91) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x00047c91) popup_snote2_single_graphic_window_t

0x444a,	// (0x0003c42c) clock_nsta_pane_cp2_t1

0x444a,	// (0x0003c42c) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x00047aa5) clock_nsta_pane_cp2_t

0xdb28,	// (0x00045b0a) form_field_data_wide_pane_g1_ParamLimits

0xba28,	// (0x00043a0a) form_field_data_wide_pane_g2_ParamLimits

0xba28,	// (0x00043a0a) form_field_data_wide_pane_g2

0xba34,	// (0x00043a16) form_field_data_wide_pane_g3_ParamLimits

0xba34,	// (0x00043a16) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0004765d) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0004765d) form_field_data_wide_pane_g

0xc9f4,	// (0x000449d6) grid_touch_3_pane_ParamLimits

0xc9f4,	// (0x000449d6) grid_touch_3_pane

0xcf32,	// (0x00044f14) cell_touch_3_pane_ParamLimits

0xcf32,	// (0x00044f14) cell_touch_3_pane

0x495a,	// (0x0003c93c) cell_touch_3_pane_g1

0x495a,	// (0x0003c93c) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x00047b2a) cell_touch_3_pane_g

0x7e2c,	// (0x0003fe0e) cont_query_data_pane

0x7e34,	// (0x0003fe16) cont_query_data_pane_cp1

0x5a87,	// (0x0003da69) button_value_adjust_pane_cp7

0x5a8f,	// (0x0003da71) query_popup_pane_cp3

0xbf5c,	// (0x00043f3e) bg_popup_sub_pane_cp22_ParamLimits

0xf198,	// (0x0004717a) navi_navi_volume_pane_cp2

0xf1b3,	// (0x00047195) popup_side_volume_key_window_g2

0xf1c2,	// (0x000471a4) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x000476f3) popup_side_volume_key_window_g

0xf1df,	// (0x000471c1) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x000476fa) popup_side_volume_key_window_t

0xc167,	// (0x00044149) popup_side_volume_key_window_ParamLimits

0x98b8,	// (0x0004189a) list_double_graphic_pane_g4_ParamLimits

0x98b8,	// (0x0004189a) list_double_graphic_pane_g4

0xb181,	// (0x00043163) list_single_2heading_msg_pane_ParamLimits

0xb181,	// (0x00043163) list_single_2heading_msg_pane

0xb21a,	// (0x000431fc) list_single_2heading_msg_pane_g1_ParamLimits

0xb21a,	// (0x000431fc) list_single_2heading_msg_pane_g1

0xb226,	// (0x00043208) list_single_2heading_msg_pane_g2_ParamLimits

0xb226,	// (0x00043208) list_single_2heading_msg_pane_g2

0xb239,	// (0x0004321b) list_single_2heading_msg_pane_g3_ParamLimits

0xb239,	// (0x0004321b) list_single_2heading_msg_pane_g3

0xb245,	// (0x00043227) list_single_2heading_msg_pane_g4_ParamLimits

0xb245,	// (0x00043227) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x00047c9c) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x00047c9c) list_single_2heading_msg_pane_g

0xb25d,	// (0x0004323f) list_single_2heading_msg_pane_t1_ParamLimits

0xb25d,	// (0x0004323f) list_single_2heading_msg_pane_t1

0xb285,	// (0x00043267) list_single_2heading_msg_pane_t2_ParamLimits

0xb285,	// (0x00043267) list_single_2heading_msg_pane_t2

0xb2f0,	// (0x000432d2) list_single_2heading_msg_pane_t3_ParamLimits

0xb2f0,	// (0x000432d2) list_single_2heading_msg_pane_t3

0xe234,	// (0x00046216) list_single_2heading_msg_pane_t4_ParamLimits

0xe234,	// (0x00046216) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x00047ca5) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x00047ca5) list_single_2heading_msg_pane_t

0x7bf1,	// (0x0003fbd3) title_pane_g4_ParamLimits

0x7bf1,	// (0x0003fbd3) title_pane_g4

0xef41,	// (0x00046f23) title_pane_stacon_g3_ParamLimits

0xef41,	// (0x00046f23) title_pane_stacon_g3

0x55b0,	// (0x0003d592) list_single_2graphic_im_pane_g4_ParamLimits

0x55b0,	// (0x0003d592) list_single_2graphic_im_pane_g4

0x33d6,	// (0x0003b3b8) popup_side_volume_key_window_cp

0x3c44,	// (0x0003bc26) main_idle_act2_pane_t1

0x04cd,	// (0x000384af) toolbar_button_pane_g10

0x9741,	// (0x00041723) popup_toolbar_window_cp1

0x443b,	// (0x0003c41d) clock_nsta_pane_cp_t1

0x443b,	// (0x0003c41d) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x00047aa0) clock_nsta_pane_cp_t

0xf198,	// (0x0004717a) navi_navi_volume_pane_cp2_ParamLimits

0xf1a7,	// (0x00047189) popup_side_volume_key_window_g1_ParamLimits

0xf1b3,	// (0x00047195) popup_side_volume_key_window_g2_ParamLimits

0xf1c2,	// (0x000471a4) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x000476f3) popup_side_volume_key_window_g_ParamLimits

0x0a2a,	// (0x00038a0c) fep_hwr_aid_pane

0x0ad3,	// (0x00038ab5) bg_fep_hwr_top_pane_g4_ParamLimits

0x49bb,	// (0x0003c99d) fep_hwr_top_pane_g1_ParamLimits

0x49cd,	// (0x0003c9af) fep_hwr_top_pane_g2_ParamLimits

0x0af3,	// (0x00038ad5) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x00047af5) fep_hwr_top_pane_g_ParamLimits

0x0b08,	// (0x00038aea) fep_hwr_top_text_pane_ParamLimits

0x318b,	// (0x0003b16d) aid_touch_tab_arrow_arrow_2

0x3194,	// (0x0003b176) aid_touch_tab_arrow_left_2

0x0a3e,	// (0x00038a20) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0a75,	// (0x00038a57) fep_hwr_prediction_pane

0x4b23,	// (0x0003cb05) fep_vkb_prediction_pane

0xccf1,	// (0x00044cd3) fep_vkb_side_pane_g3_ParamLimits

0xccf1,	// (0x00044cd3) fep_vkb_side_pane_g3

0x0c97,	// (0x00038c79) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0d08,	// (0x00038cea) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0d15,	// (0x00038cf7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x00047ba4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0f3f,	// (0x00038f21) fep_hwr_prediction_pane_g1

0x0f49,	// (0x00038f2b) fep_hwr_prediction_pane_g2

0x0f51,	// (0x00038f33) fep_hwr_prediction_pane_g3

0x0f59,	// (0x00038f3b) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x00047cae) fep_hwr_prediction_pane_g

0x5ab6,	// (0x0003da98) fep_vkb_prediction_pane_g1

0x5ac0,	// (0x0003daa2) fep_vkb_prediction_pane_g2

0x5ac8,	// (0x0003daaa) fep_vkb_prediction_pane_g3

0x5ad0,	// (0x0003dab2) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x00047cb7) fep_vkb_prediction_pane_g

0x0821,	// (0x00038803) slider_set_pane_g3

0x0835,	// (0x00038817) slider_set_pane_g4

0x084d,	// (0x0003882f) slider_set_pane_g5

0x0821,	// (0x00038803) slider_set_pane_g6

0x0863,	// (0x00038845) slider_set_pane_g7

0x3864,	// (0x0003b846) slider_form_pane_g3

0x386d,	// (0x0003b84f) slider_form_pane_g4

0x3875,	// (0x0003b857) slider_form_pane_g5

0x3864,	// (0x0003b846) slider_form_pane_g6

0xc851,	// (0x00044833) slider_form_pane_g7

0x3efb,	// (0x0003bedd) slider_set_pane_vc_g3

0x3f04,	// (0x0003bee6) slider_set_pane_vc_g4

0x3f0d,	// (0x0003beef) slider_set_pane_vc_g5

0x3efb,	// (0x0003bedd) slider_set_pane_vc_g6

0x3f16,	// (0x0003bef8) slider_set_pane_vc_g7

0x40ee,	// (0x0003c0d0) slider_form_pane_vc_g1

0x40f7,	// (0x0003c0d9) slider_form_pane_vc_g2

0x4100,	// (0x0003c0e2) slider_form_pane_vc_g3

0x40ee,	// (0x0003c0d0) slider_form_pane_vc_g4

0x4109,	// (0x0003c0eb) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x00047a72) slider_form_pane_vc_g

0x7bc7,	// (0x0003fba9) main_idle_act3_pane

0x5ad8,	// (0x0003daba) ai3_links_pane

0xcf7c,	// (0x00044f5e) popup_ai3_data_window_ParamLimits

0xcf7c,	// (0x00044f5e) popup_ai3_data_window

0x7bc7,	// (0x0003fba9) grid_ai3_links_pane

0xcf9a,	// (0x00044f7c) cell_ai3_links_pane_ParamLimits

0xcf9a,	// (0x00044f7c) cell_ai3_links_pane

0x5b19,	// (0x0003dafb) bg_popup_sub_pane_cp11

0x5b26,	// (0x0003db08) cell_ai3_links_pane_g1

0x7bc7,	// (0x0003fba9) bg_popup_sub_pane_cp12

0x5b4b,	// (0x0003db2d) heading_ai3_data_pane

0x5b53,	// (0x0003db35) list_ai3_gene_pane

0x5b5f,	// (0x0003db41) popup_ai3_data_window_g1

0x5b67,	// (0x0003db49) heading_ai3_data_pane_g1

0x5b6f,	// (0x0003db51) heading_ai3_data_pane_t1

0x5b7d,	// (0x0003db5f) list_double_ai3_gene_pane_ParamLimits

0x5b7d,	// (0x0003db5f) list_double_ai3_gene_pane

0x5b8a,	// (0x0003db6c) list_single_ai3_gene_pane_ParamLimits

0x5b8a,	// (0x0003db6c) list_single_ai3_gene_pane

0x491f,	// (0x0003c901) list_highlight_pane_cp7_ParamLimits

0x491f,	// (0x0003c901) list_highlight_pane_cp7

0x5bb8,	// (0x0003db9a) list_single_a13_gene_pane_t1_ParamLimits

0x5bb8,	// (0x0003db9a) list_single_a13_gene_pane_t1

0x5bcf,	// (0x0003dbb1) list_single_ai3_gene_pane_g1

0x5bd8,	// (0x0003dbba) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x00047cc0) list_single_ai3_gene_pane_g

0x5be0,	// (0x0003dbc2) list_double_ai3_gene_pane_g1_ParamLimits

0x5be0,	// (0x0003dbc2) list_double_ai3_gene_pane_g1

0x5bec,	// (0x0003dbce) list_double_ai3_gene_pane_t1_ParamLimits

0x5bec,	// (0x0003dbce) list_double_ai3_gene_pane_t1

0x5c08,	// (0x0003dbea) list_double_ai3_gene_pane_t2_ParamLimits

0x5c08,	// (0x0003dbea) list_double_ai3_gene_pane_t2

0x5c1d,	// (0x0003dbff) list_double_ai3_gene_pane_t3_ParamLimits

0x5c1d,	// (0x0003dbff) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x00047cc5) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x00047cc5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe22a,	// (0x0004620c) aid_size_min_col_2

0xcf66,	// (0x00044f48) aid_size_min_msg_ParamLimits

0xcf66,	// (0x00044f48) aid_size_min_msg

0xcd05,	// (0x00044ce7) fep_vkb_top_text_pane_g2_ParamLimits

0xcd05,	// (0x00044ce7) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x00047b25) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x00047b25) fep_vkb_top_text_pane_g

0x7bc7,	// (0x0003fba9) main_hc_apps_shell_pane

0x5c3a,	// (0x0003dc1c) grid_hc_apps_pane_ParamLimits

0x5c3a,	// (0x0003dc1c) grid_hc_apps_pane

0x5c49,	// (0x0003dc2b) list_hc_apps_pane

0x5c51,	// (0x0003dc33) scroll_pane_cp37_ParamLimits

0x5c51,	// (0x0003dc33) scroll_pane_cp37

0xcfb4,	// (0x00044f96) cell_hc_apps_pane_ParamLimits

0xcfb4,	// (0x00044f96) cell_hc_apps_pane

0xd07e,	// (0x00045060) cell_hc_apps_pane_g1_ParamLimits

0xd07e,	// (0x00045060) cell_hc_apps_pane_g1

0x5d46,	// (0x0003dd28) cell_hc_apps_pane_g2_ParamLimits

0x5d46,	// (0x0003dd28) cell_hc_apps_pane_g2

0x5d62,	// (0x0003dd44) cell_hc_apps_pane_g3_ParamLimits

0x5d62,	// (0x0003dd44) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x00047ccc) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x00047ccc) cell_hc_apps_pane_g

0xd0ab,	// (0x0004508d) cell_hc_apps_pane_t1_ParamLimits

0xd0ab,	// (0x0004508d) cell_hc_apps_pane_t1

0x7d76,	// (0x0003fd58) grid_highlight_pane_cp10_ParamLimits

0x7d76,	// (0x0003fd58) grid_highlight_pane_cp10

0xd0eb,	// (0x000450cd) list_single_hc_apps_pane_ParamLimits

0xd0eb,	// (0x000450cd) list_single_hc_apps_pane

0xd125,	// (0x00045107) list_single_hc_apps_pane_g1

0xb35e,	// (0x00043340) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x00047cd3) list_single_hc_apps_pane_g

0xb377,	// (0x00043359) list_single_hc_apps_pane_g2_copy1

0xb393,	// (0x00043375) list_single_hc_apps_pane_t1

0x7c35,	// (0x0003fc17) bg_set_opt_pane_cp_ParamLimits

0xee68,	// (0x00046e4a) setting_slider_pane_t1_ParamLimits

0xee81,	// (0x00046e63) setting_slider_pane_t2_ParamLimits

0xee9b,	// (0x00046e7d) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00047540) setting_slider_pane_t_ParamLimits

0xeeb3,	// (0x00046e95) slider_set_pane_ParamLimits

0xf53f,	// (0x00047521) control_pane_g5_ParamLimits

0xf53f,	// (0x00047521) control_pane_g5

0x3691,	// (0x0003b673) slider_set_pane_g1_ParamLimits

0x0815,	// (0x000387f7) slider_set_pane_g2_ParamLimits

0x0821,	// (0x00038803) slider_set_pane_g3_ParamLimits

0x0835,	// (0x00038817) slider_set_pane_g4_ParamLimits

0x084d,	// (0x0003882f) slider_set_pane_g5_ParamLimits

0x0821,	// (0x00038803) slider_set_pane_g6_ParamLimits

0x0863,	// (0x00038845) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00047941) slider_set_pane_g_ParamLimits

0xc20f,	// (0x000441f1) navi_icon_text_pane_ParamLimits

0xab77,	// (0x00042b59) aid_fill_nsta_2_ParamLimits

0xabb0,	// (0x00042b92) aid_touch_tab_arrow_left_ParamLimits

0xabc6,	// (0x00042ba8) aid_touch_tab_arrow_right_ParamLimits

0xac61,	// (0x00042c43) clock_nsta_pane_ParamLimits

0xc58f,	// (0x00044571) navi_icon_pane_g1_ParamLimits

0xc59b,	// (0x0004457d) navi_text_pane_t1_ParamLimits

0xcad8,	// (0x00044aba) navi_icon_text_pane_g1_ParamLimits

0xcae4,	// (0x00044ac6) navi_icon_text_pane_t1_ParamLimits

0xd125,	// (0x00045107) list_single_hc_apps_pane_g1_ParamLimits

0xb35e,	// (0x00043340) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x00047cd3) list_single_hc_apps_pane_g_ParamLimits

0xb377,	// (0x00043359) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb393,	// (0x00043375) list_single_hc_apps_pane_t1_ParamLimits

0x92c7,	// (0x000412a9) popup_toolbar2_fixed_window_ParamLimits

0x92c7,	// (0x000412a9) popup_toolbar2_fixed_window

0xaadc,	// (0x00042abe) popup_toolbar2_float_window

0x7bc7,	// (0x0003fba9) bg_popup_sub_pane_cp27

0x5e1c,	// (0x0003ddfe) grid_toolbar2_float_pane

0x7bc7,	// (0x0003fba9) bg_popup_sub_pane_cp26

0x5e1c,	// (0x0003ddfe) grid_toolbar2_fixed_pane

0xd13e,	// (0x00045120) cell_toolbar2_fixed_pane_ParamLimits

0xd13e,	// (0x00045120) cell_toolbar2_fixed_pane

0xd15b,	// (0x0004513d) cell_toolbar2_fixed_pane_g1

0x5e3d,	// (0x0003de1f) toolbar2_fixed_button_pane

0x2316,	// (0x0003a2f8) toolbar2_fixed_button_pane_g1

0x2326,	// (0x0003a308) toolbar2_fixed_button_pane_g2

0x231e,	// (0x0003a300) toolbar2_fixed_button_pane_g3

0x2336,	// (0x0003a318) toolbar2_fixed_button_pane_g4

0x232e,	// (0x0003a310) toolbar2_fixed_button_pane_g5

0x233e,	// (0x0003a320) toolbar2_fixed_button_pane_g6

0x2346,	// (0x0003a328) toolbar2_fixed_button_pane_g7

0x2356,	// (0x0003a338) toolbar2_fixed_button_pane_g8

0x234e,	// (0x0003a330) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00047843) toolbar2_fixed_button_pane_g

0x5e45,	// (0x0003de27) cell_toolbar2_float_pane_ParamLimits

0x5e45,	// (0x0003de27) cell_toolbar2_float_pane

0x5e56,	// (0x0003de38) cell_toolbar2_float_pane_g1

0x5e3d,	// (0x0003de1f) toolbar2_fixed_button_pane_cp

0xcbed,	// (0x00044bcf) fep_vkb_accented_list_pane_ParamLimits

0xcbed,	// (0x00044bcf) fep_vkb_accented_list_pane

0x0c77,	// (0x00038c59) bg_popup_fep_shadow_pane_g9

0xc36b,	// (0x0004434d) bg_popup_fep_shadow_pane_cp3

0xbb2d,	// (0x00043b0f) list_accented_list_pane

0x5e5f,	// (0x0003de41) list_single_accented_list_pane_ParamLimits

0x5e5f,	// (0x0003de41) list_single_accented_list_pane

0xc36b,	// (0x0004434d) list_highlight_pane_cp10

0x5e70,	// (0x0003de52) list_single_accented_list_pane_t1

0xa9f8,	// (0x000429da) popup_slider_window_ParamLimits

0xa9f8,	// (0x000429da) popup_slider_window

0x5a97,	// (0x0003da79) aid_indentation_list_msg

0xd266,	// (0x00045248) bg_popup_window_pane_cp19

0x5faa,	// (0x0003df8c) popup_slider_window_g1

0x5fc6,	// (0x0003dfa8) popup_slider_window_g2

0x5fe2,	// (0x0003dfc4) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x00047cd8) popup_slider_window_g

0x603e,	// (0x0003e020) popup_slider_window_t1

0x60b2,	// (0x0003e094) small_volume_slider_vertical_pane

0x495a,	// (0x0003c93c) small_volume_slider_vertical_pane_g1

0x495a,	// (0x0003c93c) small_volume_slider_vertical_pane_g2

0x60ce,	// (0x0003e0b0) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x00047cea) small_volume_slider_vertical_pane_g

0x9231,	// (0x00041213) area_side_right_pane_ParamLimits

0x9231,	// (0x00041213) area_side_right_pane

0xb3c1,	// (0x000433a3) aid_size_side_button_ParamLimits

0xb3c1,	// (0x000433a3) aid_size_side_button

0xb3da,	// (0x000433bc) grid_sctrl_middle_pane_ParamLimits

0xb3da,	// (0x000433bc) grid_sctrl_middle_pane

0x0ff8,	// (0x00038fda) sctrl_sk_bottom_pane

0x1009,	// (0x00038feb) sctrl_sk_top_pane

0x101b,	// (0x00038ffd) aid_touch_sctrl_top

0x1028,	// (0x0003900a) bg_sctrl_sk_pane_ParamLimits

0x1028,	// (0x0003900a) bg_sctrl_sk_pane

0x1036,	// (0x00039018) sctrl_sk_top_pane_g1

0x1043,	// (0x00039025) sctrl_sk_top_pane_t1

0x101b,	// (0x00038ffd) aid_touch_sctrl_bottom

0x1028,	// (0x0003900a) bg_sctrl_sk_pane_cp_ParamLimits

0x1028,	// (0x0003900a) bg_sctrl_sk_pane_cp

0x105e,	// (0x00039040) sctrl_sk_bottom_pane_g1

0x1043,	// (0x00039025) sctrl_sk_bottom_pane_t1

0xb3f4,	// (0x000433d6) cell_sctrl_middle_pane_ParamLimits

0xb3f4,	// (0x000433d6) cell_sctrl_middle_pane

0xb407,	// (0x000433e9) aid_touch_sctrl_middle_ParamLimits

0xb407,	// (0x000433e9) aid_touch_sctrl_middle

0xb414,	// (0x000433f6) bg_sctrl_middle_pane_ParamLimits

0xb414,	// (0x000433f6) bg_sctrl_middle_pane

0x16e1,	// (0x000396c3) cell_sctrl_middle_pane_g1_ParamLimits

0x16e1,	// (0x000396c3) cell_sctrl_middle_pane_g1

0xb422,	// (0x00043404) cell_sctrl_middle_pane_g2_ParamLimits

0xb422,	// (0x00043404) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x00047cf6) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x00047cf6) cell_sctrl_middle_pane_g

0x2316,	// (0x0003a2f8) bg_sctrl_middle_pane_g1

0x231e,	// (0x0003a300) bg_sctrl_middle_pane_g2

0x2326,	// (0x0003a308) bg_sctrl_middle_pane_g3

0x232e,	// (0x0003a310) bg_sctrl_middle_pane_g4

0x2336,	// (0x0003a318) bg_sctrl_middle_pane_g5

0x233e,	// (0x0003a320) bg_sctrl_middle_pane_g6

0x2346,	// (0x0003a328) bg_sctrl_middle_pane_g7

0x234e,	// (0x0003a330) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x00047cfb) bg_sctrl_middle_pane_g

0x2356,	// (0x0003a338) bg_sctrl_middle_pane_g8_copy1

0x2316,	// (0x0003a2f8) bg_sctrl_sk_pane_g1

0x2326,	// (0x0003a308) bg_sctrl_sk_pane_g2

0x231e,	// (0x0003a300) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00047843) bg_sctrl_sk_pane_g

0x8749,	// (0x0004072b) aid_size_touch_scroll_bar

0x2336,	// (0x0003a318) bg_sctrl_sk_pane_g4

0x232e,	// (0x0003a310) bg_sctrl_sk_pane_g5

0x233e,	// (0x0003a320) bg_sctrl_sk_pane_g6

0x2346,	// (0x0003a328) bg_sctrl_sk_pane_g7

0x2356,	// (0x0003a338) bg_sctrl_sk_pane_g8

0x234e,	// (0x0003a330) bg_sctrl_sk_pane_g9

0x01a8,	// (0x0003818a) popup_fep_china_hwr2_fs_candidate_window

0xa4b0,	// (0x00042492) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa4b0,	// (0x00042492) popup_fep_china_hwr2_fs_control_window

0x0c97,	// (0x00038c79) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x00047cf1) sctrl_sk_top_pane_g

0xd31e,	// (0x00045300) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd31e,	// (0x00045300) aid_fep_china_hwr2_fs_cell

0xd334,	// (0x00045316) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd334,	// (0x00045316) bg_popup_fep_shadow_pane_cp4

0xd34b,	// (0x0004532d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd34b,	// (0x0004532d) bg_popup_fep_shadow_pane_cp5

0xd35d,	// (0x0004533f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd35d,	// (0x0004533f) popup_fep_china_hwr2_fs_control_bar_grid

0xd371,	// (0x00045353) popup_fep_china_hwr2_fs_control_funtion_grid

0x612d,	// (0x0003e10f) aid_fep_china_hwr2_fs_candi_cell

0x7bc7,	// (0x0003fba9) bg_popup_fep_shadow_pane_cp6

0x6137,	// (0x0003e119) popup_fep_china_hwr2_fs_candidate_grid

0xd379,	// (0x0004535b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd379,	// (0x0004535b) cell_fep_china_hwr2_fs_funtion_grid

0x495a,	// (0x0003c93c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6159,	// (0x0003e13b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6159,	// (0x0003e13b) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6167,	// (0x0003e149) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6167,	// (0x0003e149) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x00047d0c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x00047d0c) cell_fep_china_hwr2_fs_funtion_grid_g

0xd391,	// (0x00045373) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd391,	// (0x00045373) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd3a6,	// (0x00045388) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd3a6,	// (0x00045388) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x00047d11) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x00047d11) cell_fep_china_hwr2_fs_funtion_grid_t

0x61ae,	// (0x0003e190) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x61b6,	// (0x0003e198) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x61be,	// (0x0003e1a0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x00047d16) popup_fep_china_hwr2_fs_control_bar_grid_g

0x61c6,	// (0x0003e1a8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x61c6,	// (0x0003e1a8) cell_fep_china_hwr2_fs_candidate_grid

0x61e5,	// (0x0003e1c7) popup_fep_china_hwr2_fs_candidate_grid_g20

0x61ed,	// (0x0003e1cf) popup_fep_china_hwr2_fs_candidate_grid_g21

0x495a,	// (0x0003c93c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x495a,	// (0x0003c93c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x00047b2a) cell_fep_china_hwr2_fs_candidate_grid_g

0x61f5,	// (0x0003e1d7) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1ef2,	// (0x00039ed4) clock_nsta_pane_cp_24_ParamLimits

0x1ef2,	// (0x00039ed4) clock_nsta_pane_cp_24

0x1f72,	// (0x00039f54) indicator_nsta_pane_cp_24_ParamLimits

0x1f72,	// (0x00039f54) indicator_nsta_pane_cp_24

0x2fe9,	// (0x0003afcb) heading_pane_g1

0x0001,

0xf8c6,	// (0x000478a8) heading_pane_g

0x3a8b,	// (0x0003ba6d) grid_sct_catagory_button_pane

0x3abd,	// (0x0003ba9f) scroll_pane_cp5_ParamLimits

0x45a6,	// (0x0003c588) button_value_adjust_pane_cp5_ParamLimits

0x45a6,	// (0x0003c588) button_value_adjust_pane_cp5

0x468b,	// (0x0003c66d) form2_midp_time_pane_ParamLimits

0x6203,	// (0x0003e1e5) cell_sct_catagory_button_pane_ParamLimits

0x6203,	// (0x0003e1e5) cell_sct_catagory_button_pane

0x491f,	// (0x0003c901) bg_button_pane_cp01_ParamLimits

0x491f,	// (0x0003c901) bg_button_pane_cp01

0x495a,	// (0x0003c93c) cell_sct_catagory_button_pane_g1

0xaa79,	// (0x00042a5b) popup_tb_extension_window

0xd3c2,	// (0x000453a4) aid_size_cell_ext_ParamLimits

0xd3c2,	// (0x000453a4) aid_size_cell_ext

0x858b,	// (0x0004056d) bg_tb_trans_pane_cp1_ParamLimits

0x858b,	// (0x0004056d) bg_tb_trans_pane_cp1

0xd3e8,	// (0x000453ca) grid_tb_ext_pane_ParamLimits

0xd3e8,	// (0x000453ca) grid_tb_ext_pane

0xd428,	// (0x0004540a) cell_tb_ext_pane_ParamLimits

0xd428,	// (0x0004540a) cell_tb_ext_pane

0xd450,	// (0x00045432) cell_tb_ext_pane_g1_ParamLimits

0xd450,	// (0x00045432) cell_tb_ext_pane_g1

0x6299,	// (0x0003e27b) cell_tb_ext_pane_t1

0x7d76,	// (0x0003fd58) list_highlight_pane_cp11_ParamLimits

0x7d76,	// (0x0003fd58) list_highlight_pane_cp11

0x92dc,	// (0x000412be) popup_uni_indicator_window_ParamLimits

0x92dc,	// (0x000412be) popup_uni_indicator_window

0xba1a,	// (0x000439fc) bg_popup_sub_pane_cp14

0x62b4,	// (0x0003e296) list_uniindi_pane

0x62c0,	// (0x0003e2a2) uniindi_top_pane

0x7d76,	// (0x0003fd58) bg_uniindi_top_pane

0x62e1,	// (0x0003e2c3) uniindi_top_pane_g1

0x62f7,	// (0x0003e2d9) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x00047d1d) uniindi_top_pane_g

0x6321,	// (0x0003e303) uniindi_top_pane_t1

0x634d,	// (0x0003e32f) list_single_uniindi_pane_ParamLimits

0x634d,	// (0x0003e32f) list_single_uniindi_pane

0x495a,	// (0x0003c93c) bg_uniindi_top_pane_g1

0x635f,	// (0x0003e341) list_single_uniindi_pane_g1

0x6372,	// (0x0003e354) list_single_uniindi_pane_t1

0xed45,	// (0x00046d27) control_bg_pane

0x6397,	// (0x0003e379) bg_sctrl_sk_pane_cp1

0x63a0,	// (0x0003e382) bg_sctrl_sk_pane_cp2

0x63a9,	// (0x0003e38b) control_bg_pane_g1

0x63b2,	// (0x0003e394) control_bg_pane_g2

0x0001,

0xfd44,	// (0x00047d26) control_bg_pane_g

0x43cd,	// (0x0003c3af) cell_indicator_nsta_pane_g1_ParamLimits

0xca31,	// (0x00044a13) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x00047a8e) cell_indicator_nsta_pane_g_ParamLimits

0xe004,	// (0x00045fe6) form2_midp_time_pane_t1_ParamLimits

0xa426,	// (0x00042408) main_idle_act4_pane_ParamLimits

0xa426,	// (0x00042408) main_idle_act4_pane

0xaa79,	// (0x00042a5b) popup_tb_extension_window_ParamLimits

0xd410,	// (0x000453f2) tb_ext_find_pane_ParamLimits

0xd410,	// (0x000453f2) tb_ext_find_pane

0x63bb,	// (0x0003e39d) ai_gene_pane_1_cp1

0xf3b9,	// (0x0004739b) ai_gene_pane_2_cp1

0x63c3,	// (0x0003e3a5) list_single_idle_plugin_calendar_pane

0x63cc,	// (0x0003e3ae) list_single_idle_plugin_notification_pane

0x63d5,	// (0x0003e3b7) list_single_idle_plugin_player_pane

0xd46d,	// (0x0004544f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd46d,	// (0x0004544f) list_single_idle_plugin_shortcut_pane

0xd495,	// (0x00045477) main_idle_act4_pane_t1

0xd4ad,	// (0x0004548f) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x00047d2b) main_idle_act4_pane_t

0xd4c5,	// (0x000454a7) middle_sk_idle_act4_pane_ParamLimits

0xd4c5,	// (0x000454a7) middle_sk_idle_act4_pane

0xd4e1,	// (0x000454c3) popup_clock_digital_analogue_window_cp2

0xd508,	// (0x000454ea) shortcut_wheel_idle_act4_pane_ParamLimits

0xd508,	// (0x000454ea) shortcut_wheel_idle_act4_pane

0x495a,	// (0x0003c93c) shortcut_wheel_idle_act4_pane_g1

0x495a,	// (0x0003c93c) shortcut_wheel_idle_act4_pane_g2

0x495a,	// (0x0003c93c) shortcut_wheel_idle_act4_pane_g3

0x495a,	// (0x0003c93c) shortcut_wheel_idle_act4_pane_g4

0x495a,	// (0x0003c93c) shortcut_wheel_idle_act4_pane_g5

0x6468,	// (0x0003e44a) shortcut_wheel_idle_act4_pane_g6

0x6470,	// (0x0003e452) shortcut_wheel_idle_act4_pane_g7

0x6478,	// (0x0003e45a) shortcut_wheel_idle_act4_pane_g8

0x6480,	// (0x0003e462) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x00047d30) shortcut_wheel_idle_act4_pane_g

0xd585,	// (0x00045567) middle_sk_idle_act4_pane_g1_ParamLimits

0xd585,	// (0x00045567) middle_sk_idle_act4_pane_g1

0xd593,	// (0x00045575) middle_sk_idle_act4_pane_g2_ParamLimits

0xd593,	// (0x00045575) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x00047d53) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x00047d53) middle_sk_idle_act4_pane_g

0xd5ab,	// (0x0004558d) middle_sk_idle_act4_pane_t1_ParamLimits

0xd5ab,	// (0x0004558d) middle_sk_idle_act4_pane_t1

0xd5da,	// (0x000455bc) grid_ai_shortcut_pane_ParamLimits

0xd5da,	// (0x000455bc) grid_ai_shortcut_pane

0xd5f7,	// (0x000455d9) list_highlight_pane_cp16_ParamLimits

0xd5f7,	// (0x000455d9) list_highlight_pane_cp16

0xd604,	// (0x000455e6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd604,	// (0x000455e6) list_single_idle_plugin_shortcut_pane_g1

0xd610,	// (0x000455f2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd610,	// (0x000455f2) list_single_idle_plugin_shortcut_pane_g2

0xd62e,	// (0x00045610) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd62e,	// (0x00045610) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x00047d58) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x00047d58) list_single_idle_plugin_shortcut_pane_g

0xd643,	// (0x00045625) cell_ai_shortcut_pane_ParamLimits

0xd643,	// (0x00045625) cell_ai_shortcut_pane

0xd659,	// (0x0004563b) cell_ai_shortcut_pane_g1_ParamLimits

0xd659,	// (0x0004563b) cell_ai_shortcut_pane_g1

0x63bb,	// (0x0003e39d) ai_gene_pane_1_cp2

0x65b1,	// (0x0003e593) ai_gene_pane_2_cp2

0x65b9,	// (0x0003e59b) list_highlight_pane_cp15

0x65c2,	// (0x0003e5a4) list_single_idle_plugin_calendar_pane_g1

0x65b9,	// (0x0003e59b) list_highlight_pane_cp17

0x65ca,	// (0x0003e5ac) list_single_idle_plugin_calendar_pane_g1_copy1

0x65d2,	// (0x0003e5b4) list_single_idle_plugin_player_pane_g1

0x3cf2,	// (0x0003bcd4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x00047d5f) list_single_idle_plugin_player_pane_g

0x65da,	// (0x0003e5bc) list_single_idle_plugin_player_pane_t1

0x65e8,	// (0x0003e5ca) list_single_idle_plugin_player_pane_t2

0x65f6,	// (0x0003e5d8) list_single_idle_plugin_player_pane_t3

0x6604,	// (0x0003e5e6) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x00047d64) list_single_idle_plugin_player_pane_t

0x6612,	// (0x0003e5f4) wait_bar_pane_cp15

0x661a,	// (0x0003e5fc) grid_ai_notification_pane

0x3cf2,	// (0x0003bcd4) list_single_idle_plugin_notification_pane_g1

0xd67b,	// (0x0004565d) cell_ai_notification_pane_ParamLimits

0xd67b,	// (0x0004565d) cell_ai_notification_pane

0x6630,	// (0x0003e612) cell_ai_notification_pane_g1

0x6638,	// (0x0003e61a) cell_ai_notification_pane_t1

0xd688,	// (0x0004566a) tb_ext_find_button_pane

0xd690,	// (0x00045672) tb_ext_find_pane_g1

0xd698,	// (0x0004567a) tb_ext_find_pane_t1

0xbefc,	// (0x00043ede) tb_ext_find_button_pane_g1

0x6664,	// (0x0003e646) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x00047d6d) tb_ext_find_button_pane_g

0xd495,	// (0x00045477) main_idle_act4_pane_t1_ParamLimits

0xd4ad,	// (0x0004548f) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x00047d2b) main_idle_act4_pane_t_ParamLimits

0xd4e1,	// (0x000454c3) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd4f8,	// (0x000454da) sat_plugin_idle_act4_pane_ParamLimits

0xd4f8,	// (0x000454da) sat_plugin_idle_act4_pane

0xd6a6,	// (0x00045688) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd6a6,	// (0x00045688) sat_plugin_idle_act4_pane_t1

0xd6be,	// (0x000456a0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd6be,	// (0x000456a0) sat_plugin_idle_act4_pane_t2

0xd6d6,	// (0x000456b8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd6d6,	// (0x000456b8) sat_plugin_idle_act4_pane_t3

0xd6ee,	// (0x000456d0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd6ee,	// (0x000456d0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x00047d72) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x00047d72) sat_plugin_idle_act4_pane_t

0xee0a,	// (0x00046dec) popup_battery_window_ParamLimits

0xee0a,	// (0x00046dec) popup_battery_window

0x7d76,	// (0x0003fd58) bg_popup_sub_pane_cp25_ParamLimits

0x7d76,	// (0x0003fd58) bg_popup_sub_pane_cp25

0x66b9,	// (0x0003e69b) popup_battery_window_g1_ParamLimits

0x66b9,	// (0x0003e69b) popup_battery_window_g1

0x66c5,	// (0x0003e6a7) popup_battery_window_t1_ParamLimits

0x66c5,	// (0x0003e6a7) popup_battery_window_t1

0x66d7,	// (0x0003e6b9) popup_battery_window_t2_ParamLimits

0x66d7,	// (0x0003e6b9) popup_battery_window_t2

0x0001,

0xfd99,	// (0x00047d7b) popup_battery_window_t_ParamLimits

0xfd99,	// (0x00047d7b) popup_battery_window_t

0xa10e,	// (0x000420f0) midp_canvas_pane_ParamLimits

0xa169,	// (0x0004214b) midp_keypad_pane_ParamLimits

0xa169,	// (0x0004214b) midp_keypad_pane

0x00fa,	// (0x000380dc) main_midp_pane_ParamLimits

0x4459,	// (0x0003c43b) signal_pane_g2_cp_ParamLimits

0xd706,	// (0x000456e8) aid_size_cell_midp_keypad_ParamLimits

0xd706,	// (0x000456e8) aid_size_cell_midp_keypad

0xd724,	// (0x00045706) midp_keyp_game_grid_pane_ParamLimits

0xd724,	// (0x00045706) midp_keyp_game_grid_pane

0xd74b,	// (0x0004572d) midp_keyp_rocker_pane_ParamLimits

0xd74b,	// (0x0004572d) midp_keyp_rocker_pane

0xd78a,	// (0x0004576c) midp_keyp_sk_left_pane_ParamLimits

0xd78a,	// (0x0004576c) midp_keyp_sk_left_pane

0xd7de,	// (0x000457c0) midp_keyp_sk_right_pane_ParamLimits

0xd7de,	// (0x000457c0) midp_keyp_sk_right_pane

0x7bc7,	// (0x0003fba9) bg_button_pane_cp03

0xd832,	// (0x00045814) midp_keyp_sk_left_pane_g1

0x7bc7,	// (0x0003fba9) bg_button_pane_cp04

0xd832,	// (0x00045814) midp_keyp_sk_right_pane_g1

0x495a,	// (0x0003c93c) midp_keyp_rocker_pane_g1

0xd83b,	// (0x0004581d) keyp_game_cell_pane_ParamLimits

0xd83b,	// (0x0004581d) keyp_game_cell_pane

0x7bc7,	// (0x0003fba9) bg_button_pane_cp02

0xd861,	// (0x00045843) keyp_game_cell_pane_g1

0x9273,	// (0x00041255) popup_fep_vkb2_window_ParamLimits

0x9273,	// (0x00041255) popup_fep_vkb2_window

0xb42e,	// (0x00043410) aid_size_cell_vkb2_ParamLimits

0xb42e,	// (0x00043410) aid_size_cell_vkb2

0xb464,	// (0x00043446) popup_fep_vkb2_window_g1_ParamLimits

0xb464,	// (0x00043446) popup_fep_vkb2_window_g1

0xb4b4,	// (0x00043496) vkb2_area_bottom_pane_ParamLimits

0xb4b4,	// (0x00043496) vkb2_area_bottom_pane

0xb510,	// (0x000434f2) vkb2_area_keypad_pane_ParamLimits

0xb510,	// (0x000434f2) vkb2_area_keypad_pane

0xb55e,	// (0x00043540) vkb2_area_top_pane_ParamLimits

0xb55e,	// (0x00043540) vkb2_area_top_pane

0xb5e4,	// (0x000435c6) vkb2_top_entry_pane_ParamLimits

0xb5e4,	// (0x000435c6) vkb2_top_entry_pane

0xb611,	// (0x000435f3) vkb2_top_grid_left_pane_ParamLimits

0xb611,	// (0x000435f3) vkb2_top_grid_left_pane

0xb631,	// (0x00043613) vkb2_top_grid_right_pane_ParamLimits

0xb631,	// (0x00043613) vkb2_top_grid_right_pane

0x12d8,	// (0x000392ba) vkb2_cell_keypad_pane_ParamLimits

0x12d8,	// (0x000392ba) vkb2_cell_keypad_pane

0xb677,	// (0x00043659) vkb2_area_bottom_grid_pane_ParamLimits

0xb677,	// (0x00043659) vkb2_area_bottom_grid_pane

0xb6a1,	// (0x00043683) vkb2_area_bottom_pane_g1_ParamLimits

0xb6a1,	// (0x00043683) vkb2_area_bottom_pane_g1

0xb6c7,	// (0x000436a9) vkb2_area_bottom_pane_g2_ParamLimits

0xb6c7,	// (0x000436a9) vkb2_area_bottom_pane_g2

0xb6f8,	// (0x000436da) vkb2_area_bottom_pane_g3_ParamLimits

0xb6f8,	// (0x000436da) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x00047d80) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x00047d80) vkb2_area_bottom_pane_g

0x1482,	// (0x00039464) vkb2_top_cell_left_pane_ParamLimits

0x1482,	// (0x00039464) vkb2_top_cell_left_pane

0xd86a,	// (0x0004584c) vkb2_top_entry_pane_g1_ParamLimits

0xd86a,	// (0x0004584c) vkb2_top_entry_pane_g1

0xd878,	// (0x0004585a) vkb2_top_entry_pane_t1_ParamLimits

0xd878,	// (0x0004585a) vkb2_top_entry_pane_t1

0x687a,	// (0x0003e85c) vkb2_top_entry_pane_t2_ParamLimits

0x687a,	// (0x0003e85c) vkb2_top_entry_pane_t2

0x68ac,	// (0x0003e88e) vkb2_top_entry_pane_t3_ParamLimits

0x68ac,	// (0x0003e88e) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x00047d87) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x00047d87) vkb2_top_entry_pane_t

0xb762,	// (0x00043744) vkb2_top_grid_right_pane_g1_ParamLimits

0xb762,	// (0x00043744) vkb2_top_grid_right_pane_g1

0x14e5,	// (0x000394c7) vkb2_top_grid_right_pane_g2_ParamLimits

0x14e5,	// (0x000394c7) vkb2_top_grid_right_pane_g2

0x14fd,	// (0x000394df) vkb2_top_grid_right_pane_g3_ParamLimits

0x14fd,	// (0x000394df) vkb2_top_grid_right_pane_g3

0xb778,	// (0x0004375a) vkb2_top_grid_right_pane_g4_ParamLimits

0xb778,	// (0x0004375a) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x00047d8e) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x00047d8e) vkb2_top_grid_right_pane_g

0x152b,	// (0x0003950d) vkb2_top_cell_left_pane_g1

0x1542,	// (0x00039524) vkb2_cell_keypad_pane_g1_ParamLimits

0x1542,	// (0x00039524) vkb2_cell_keypad_pane_g1

0x68d0,	// (0x0003e8b2) vkb2_cell_keypad_pane_t1_ParamLimits

0x68d0,	// (0x0003e8b2) vkb2_cell_keypad_pane_t1

0x1550,	// (0x00039532) vkb2_cell_bottom_grid_pane_ParamLimits

0x1550,	// (0x00039532) vkb2_cell_bottom_grid_pane

0x1589,	// (0x0003956b) vkb2_cell_bottom_grid_pane_g1

0xd529,	// (0x0004550b) aid_call2_pane_cp02

0xd531,	// (0x00045513) aid_call_pane_cp02

0xd539,	// (0x0004551b) clock_digital_number_pane_cp10

0xd541,	// (0x00045523) clock_digital_number_pane_cp11

0xd549,	// (0x0004552b) clock_digital_number_pane_cp12

0xd551,	// (0x00045533) clock_digital_number_pane_cp13

0xd559,	// (0x0004553b) clock_digital_separator_pane_cp10

0xbefc,	// (0x00043ede) popup_clock_digital_analogue_window_cp2_g1

0xbefc,	// (0x00043ede) popup_clock_digital_analogue_window_cp2_g2

0xd561,	// (0x00045543) popup_clock_digital_analogue_window_cp2_g3

0xbefc,	// (0x00043ede) popup_clock_digital_analogue_window_cp2_g4

0xd561,	// (0x00045543) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x00047d43) popup_clock_digital_analogue_window_cp2_g

0xd569,	// (0x0004554b) popup_clock_digital_analogue_window_cp2_t1

0xd577,	// (0x00045559) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x00047d4e) popup_clock_digital_analogue_window_cp2_t

0x495a,	// (0x0003c93c) clock_digital_number_pane_cp10_g1

0x495a,	// (0x0003c93c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x00047b2a) clock_digital_number_pane_cp10_g

0x495a,	// (0x0003c93c) clock_digital_separator_pane_cp10_g1

0x495a,	// (0x0003c93c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x00047b2a) clock_digital_separator_pane_cp10_g

0x6303,	// (0x0003e2e5) uniindi_top_pane_g3

0x6314,	// (0x0003e2f6) uniindi_top_pane_g4

0x1363,	// (0x00039345) vkb2_row_keypad_pane_ParamLimits

0x1363,	// (0x00039345) vkb2_row_keypad_pane

0x15a5,	// (0x00039587) vkb2_cell_t_keypad_pane_ParamLimits

0x15a5,	// (0x00039587) vkb2_cell_t_keypad_pane

0x15b5,	// (0x00039597) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x15b5,	// (0x00039597) vkb2_cell_t_keypad_pane_cp08

0x15ca,	// (0x000395ac) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x15ca,	// (0x000395ac) vkb2_cell_t_keypad_pane_cp09

0x15de,	// (0x000395c0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x15de,	// (0x000395c0) vkb2_cell_t_keypad_pane_cp01

0x15ef,	// (0x000395d1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x15ef,	// (0x000395d1) vkb2_cell_t_keypad_pane_cp02

0x1600,	// (0x000395e2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1600,	// (0x000395e2) vkb2_cell_t_keypad_pane_cp03

0x1611,	// (0x000395f3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1611,	// (0x000395f3) vkb2_cell_t_keypad_pane_cp04

0x1622,	// (0x00039604) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1622,	// (0x00039604) vkb2_cell_t_keypad_pane_cp05

0x1633,	// (0x00039615) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1633,	// (0x00039615) vkb2_cell_t_keypad_pane_cp06

0x1646,	// (0x00039628) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1646,	// (0x00039628) vkb2_cell_t_keypad_pane_cp07

0x165b,	// (0x0003963d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x165b,	// (0x0003963d) vkb2_cell_t_keypad_pane_cp10

0x0c97,	// (0x00038c79) vkb2_cell_t_keypad_pane_g1

0x68e7,	// (0x0003e8c9) vkb2_cell_t_keypad_pane_t1

0xed45,	// (0x00046d27) popup_grid_graphic2_window

0xd8b1,	// (0x00045893) aid_size_cell_graphic2_ParamLimits

0xd8b1,	// (0x00045893) aid_size_cell_graphic2

0xd8ef,	// (0x000458d1) bg_popup_window_pane_cp21_ParamLimits

0xd8ef,	// (0x000458d1) bg_popup_window_pane_cp21

0xd8fd,	// (0x000458df) graphic2_pages_pane_ParamLimits

0xd8fd,	// (0x000458df) graphic2_pages_pane

0xd955,	// (0x00045937) grid_graphic2_control_pane_ParamLimits

0xd955,	// (0x00045937) grid_graphic2_control_pane

0xd99d,	// (0x0004597f) grid_graphic2_pane_ParamLimits

0xd99d,	// (0x0004597f) grid_graphic2_pane

0xe28a,	// (0x0004626c) cell_graphic2_pane

0x7bc7,	// (0x0003fba9) main_comp_mode_pane

0x5b53,	// (0x0003db35) list_ai3_gene_pane_ParamLimits

0xd266,	// (0x00045248) bg_popup_window_pane_cp19_ParamLimits

0x5f48,	// (0x0003df2a) bg_touch_area_indi_pane_ParamLimits

0x5f48,	// (0x0003df2a) bg_touch_area_indi_pane

0x5f5e,	// (0x0003df40) bg_touch_area_indi_pane_cp01_ParamLimits

0x5f5e,	// (0x0003df40) bg_touch_area_indi_pane_cp01

0x5f76,	// (0x0003df58) bg_touch_area_indi_pane_cp02_ParamLimits

0x5f76,	// (0x0003df58) bg_touch_area_indi_pane_cp02

0x5f90,	// (0x0003df72) bg_touch_area_indi_pane_cp03_ParamLimits

0x5f90,	// (0x0003df72) bg_touch_area_indi_pane_cp03

0x5faa,	// (0x0003df8c) popup_slider_window_g1_ParamLimits

0x5fc6,	// (0x0003dfa8) popup_slider_window_g2_ParamLimits

0x5fe2,	// (0x0003dfc4) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x00047cd8) popup_slider_window_g_ParamLimits

0x603e,	// (0x0003e020) popup_slider_window_t1_ParamLimits

0x60b2,	// (0x0003e094) small_volume_slider_vertical_pane_ParamLimits

0xe28a,	// (0x0004626c) cell_graphic2_pane_ParamLimits

0xe2ed,	// (0x000462cf) bg_button_pane_cp10_ParamLimits

0xe2ed,	// (0x000462cf) bg_button_pane_cp10

0xe300,	// (0x000462e2) bg_button_pane_cp11_ParamLimits

0xe300,	// (0x000462e2) bg_button_pane_cp11

0xe313,	// (0x000462f5) graphic2_pages_pane_g1_ParamLimits

0xe313,	// (0x000462f5) graphic2_pages_pane_g1

0xe32e,	// (0x00046310) graphic2_pages_pane_g2_ParamLimits

0xe32e,	// (0x00046310) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x00047d9c) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x00047d9c) graphic2_pages_pane_g

0xe346,	// (0x00046328) graphic2_pages_pane_t1_ParamLimits

0xe346,	// (0x00046328) graphic2_pages_pane_t1

0xe35e,	// (0x00046340) cell_graphic2_control_pane_ParamLimits

0xe35e,	// (0x00046340) cell_graphic2_control_pane

0xe392,	// (0x00046374) cell_graphic2_pane_g1_ParamLimits

0xe392,	// (0x00046374) cell_graphic2_pane_g1

0xd9f7,	// (0x000459d9) cell_graphic2_pane_g2_ParamLimits

0xd9f7,	// (0x000459d9) cell_graphic2_pane_g2

0xe017,	// (0x00045ff9) cell_graphic2_pane_g3_ParamLimits

0xe017,	// (0x00045ff9) cell_graphic2_pane_g3

0xda04,	// (0x000459e6) cell_graphic2_pane_g4_ParamLimits

0xda04,	// (0x000459e6) cell_graphic2_pane_g4

0xe39f,	// (0x00046381) cell_graphic2_pane_g5_ParamLimits

0xe39f,	// (0x00046381) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x00047da1) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x00047da1) cell_graphic2_pane_g

0xe3bf,	// (0x000463a1) cell_graphic2_pane_t1_ParamLimits

0xe3bf,	// (0x000463a1) cell_graphic2_pane_t1

0x2fdd,	// (0x0003afbf) grid_highlight_pane_cp11_ParamLimits

0x2fdd,	// (0x0003afbf) grid_highlight_pane_cp11

0x7d76,	// (0x0003fd58) bg_button_pane_cp05

0xe3f4,	// (0x000463d6) cell_graphic2_control_pane_g1

0x495a,	// (0x0003c93c) bg_touch_area_indi_pane_g1

0x6bc1,	// (0x0003eba3) aid_cmod_rocker_key_size

0x6bcb,	// (0x0003ebad) aid_cmode_itu_key_size

0x6bd5,	// (0x0003ebb7) main_cmode_video_pane

0x6bdf,	// (0x0003ebc1) main_comp_mode_itu_pane

0x6beb,	// (0x0003ebcd) main_comp_mode_rocker_pane

0x6bf7,	// (0x0003ebd9) cell_cmode_rocker_pane_ParamLimits

0x6bf7,	// (0x0003ebd9) cell_cmode_rocker_pane

0x6c0b,	// (0x0003ebed) cell_cmode_itu_pane_ParamLimits

0x6c0b,	// (0x0003ebed) cell_cmode_itu_pane

0xba1a,	// (0x000439fc) bg_button_pane_cp06_ParamLimits

0xba1a,	// (0x000439fc) bg_button_pane_cp06

0x4bd5,	// (0x0003cbb7) cell_cmode_rocker_pane_g1_ParamLimits

0x4bd5,	// (0x0003cbb7) cell_cmode_rocker_pane_g1

0x6159,	// (0x0003e13b) cell_cmode_rocker_pane_g2_ParamLimits

0x6159,	// (0x0003e13b) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x00047db1) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x00047db1) cell_cmode_rocker_pane_g

0x7bc7,	// (0x0003fba9) bg_button_pane_cp07

0x6c22,	// (0x0003ec04) cell_cmode_itu_pane_g1

0x6c2b,	// (0x0003ec0d) cell_cmode_itu_pane_t1

0x6c39,	// (0x0003ec1b) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x00047db6) cell_cmode_itu_pane_t

0x6387,	// (0x0003e369) aid_touch_ctrl_left

0x638f,	// (0x0003e371) aid_touch_ctrl_right

0x7bc7,	// (0x0003fba9) compa_mode_pane

0xe41a,	// (0x000463fc) aid_cmod_rocker_key_size_cp

0xe424,	// (0x00046406) aid_cmode_itu_key_size_cp

0x6c5b,	// (0x0003ec3d) compa_mode_pane_g1

0x6c63,	// (0x0003ec45) compa_mode_pane_g2

0x6c6b,	// (0x0003ec4d) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x00047dbb) compa_mode_pane_g

0xe42e,	// (0x00046410) main_comp_mode_itu_pane_cp

0xe436,	// (0x00046418) main_comp_mode_rocker_pane_cp

0xe43e,	// (0x00046420) cell_cmode_itu_pane_cp_ParamLimits

0xe43e,	// (0x00046420) cell_cmode_itu_pane_cp

0xe453,	// (0x00046435) cell_cmode_rocker_pane_cp_ParamLimits

0xe453,	// (0x00046435) cell_cmode_rocker_pane_cp

0xba1a,	// (0x000439fc) bg_button_pane_cp06_cp_ParamLimits

0xba1a,	// (0x000439fc) bg_button_pane_cp06_cp

0x4bd5,	// (0x0003cbb7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4bd5,	// (0x0003cbb7) cell_cmode_rocker_pane_g1_cp

0x495a,	// (0x0003c93c) cell_cmode_rocker_pane_g2_cp

0x7bc7,	// (0x0003fba9) bg_button_pane_cp07_cp

0xe465,	// (0x00046447) cell_cmode_itu_pane_g1_cp

0xe46e,	// (0x00046450) cell_cmode_itu_pane_t1_cp

0xe46e,	// (0x00046450) cell_cmode_itu_pane_t2_cp

0xc849,	// (0x0004482b) settings_code_pane_cp2

0x7c35,	// (0x0003fc17) bg_popup_window_pane_cp3_ParamLimits

0x851c,	// (0x000404fe) heading_pane_cp3_ParamLimits

0x8528,	// (0x0004050a) listscroll_popup_graphic_pane_ParamLimits

0x0a2a,	// (0x00038a0c) fep_hwr_aid_pane_ParamLimits

0x101b,	// (0x00038ffd) aid_touch_sctrl_top_ParamLimits

0x1036,	// (0x00039018) sctrl_sk_top_pane_g1_ParamLimits

0x0c97,	// (0x00038c79) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x00047cf1) sctrl_sk_top_pane_g_ParamLimits

0x1043,	// (0x00039025) sctrl_sk_top_pane_t1_ParamLimits

0x101b,	// (0x00038ffd) aid_touch_sctrl_bottom_ParamLimits

0x1043,	// (0x00039025) sctrl_sk_bottom_pane_t1_ParamLimits

0x62cd,	// (0x0003e2af) aid_area_touch_clock

0xb5a6,	// (0x00043588) aid_vkb2_area_top_pane_cell_ParamLimits

0xb5a6,	// (0x00043588) aid_vkb2_area_top_pane_cell

0xb651,	// (0x00043633) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb651,	// (0x00043633) aid_vkb2_area_bottom_pane_cell

0x6832,	// (0x0003e814) popup_char_count_window

0x6cc1,	// (0x0003eca3) popup_char_count_window_g1

0x6cca,	// (0x0003ecac) popup_char_count_window_g2

0x6cd3,	// (0x0003ecb5) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x00047dc2) popup_char_count_window_g

0x6cdc,	// (0x0003ecbe) popup_char_count_window_t1

0x10f4,	// (0x000390d6) popup_fep_char_preview_window_ParamLimits

0x10f4,	// (0x000390d6) popup_fep_char_preview_window

0xb5c6,	// (0x000435a8) vkb2_top_candi_pane_ParamLimits

0xb5c6,	// (0x000435a8) vkb2_top_candi_pane

0xe47c,	// (0x0004645e) cell_vkb2_top_candi_pane_ParamLimits

0xe47c,	// (0x0004645e) cell_vkb2_top_candi_pane

0x1670,	// (0x00039652) bg_popup_fep_char_preview_window_ParamLimits

0x1670,	// (0x00039652) bg_popup_fep_char_preview_window

0x167e,	// (0x00039660) popup_fep_char_preview_window_t1_ParamLimits

0x167e,	// (0x00039660) popup_fep_char_preview_window_t1

0x6d3b,	// (0x0003ed1d) bg_popup_fep_char_preview_window_g1

0x6d43,	// (0x0003ed25) bg_popup_fep_char_preview_window_g2

0x6d4b,	// (0x0003ed2d) bg_popup_fep_char_preview_window_g3

0x6d53,	// (0x0003ed35) bg_popup_fep_char_preview_window_g4

0x6d5b,	// (0x0003ed3d) bg_popup_fep_char_preview_window_g5

0x16b8,	// (0x0003969a) bg_popup_fep_char_preview_window_g6

0x6d63,	// (0x0003ed45) bg_popup_fep_char_preview_window_g7

0x6d6b,	// (0x0003ed4d) bg_popup_fep_char_preview_window_g8

0x6d73,	// (0x0003ed55) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x00047dc9) bg_popup_fep_char_preview_window_g

0x0c97,	// (0x00038c79) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0c97,	// (0x00038c79) cell_vkb2_top_candi_pane_g1

0x0ca5,	// (0x00038c87) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0ca5,	// (0x00038c87) cell_vkb2_top_candi_pane_g2

0x5b97,	// (0x0003db79) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5b97,	// (0x0003db79) cell_vkb2_top_candi_pane_g3

0x16c0,	// (0x000396a2) cell_vkb2_top_candi_pane_g4_ParamLimits

0x16c0,	// (0x000396a2) cell_vkb2_top_candi_pane_g4

0x50f4,	// (0x0003d0d6) cell_vkb2_top_candi_pane_g5_ParamLimits

0x50f4,	// (0x0003d0d6) cell_vkb2_top_candi_pane_g5

0x16e1,	// (0x000396c3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x16e1,	// (0x000396c3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x00047ddc) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x00047ddc) cell_vkb2_top_candi_pane_g

0x16ef,	// (0x000396d1) cell_vkb2_top_candi_pane_t1

0x0801,	// (0x000387e3) aid_size_touch_slider_mark_ParamLimits

0x0801,	// (0x000387e3) aid_size_touch_slider_mark

0xd939,	// (0x0004591b) grid_graphic2_catg_pane_ParamLimits

0xd939,	// (0x0004591b) grid_graphic2_catg_pane

0xe259,	// (0x0004623b) popup_grid_graphic2_window_t1_ParamLimits

0xe259,	// (0x0004623b) popup_grid_graphic2_window_t1

0xe26f,	// (0x00046251) popup_grid_graphic2_window_t2_ParamLimits

0xe26f,	// (0x00046251) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x00047d97) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x00047d97) popup_grid_graphic2_window_t

0x7d76,	// (0x0003fd58) bg_button_pane_cp05_ParamLimits

0xe3f4,	// (0x000463d6) cell_graphic2_control_pane_g1_ParamLimits

0xe4e6,	// (0x000464c8) cell_graphic2_catg_pane_ParamLimits

0xe4e6,	// (0x000464c8) cell_graphic2_catg_pane

0x7bc7,	// (0x0003fba9) bg_button_pane_cp12

0xe4f8,	// (0x000464da) cell_graphic2_catg_pane_g1

0x6299,	// (0x0003e27b) cell_tb_ext_pane_t1_ParamLimits

0x14a2,	// (0x00039484) vkb2_top_cell_right_narrow_pane_ParamLimits

0x14a2,	// (0x00039484) vkb2_top_cell_right_narrow_pane

0x14ba,	// (0x0003949c) vkb2_top_cell_right_wide_pane_ParamLimits

0x14ba,	// (0x0003949c) vkb2_top_cell_right_wide_pane

0x0a1c,	// (0x000389fe) bg_vkb2_func_pane_ParamLimits

0x0a1c,	// (0x000389fe) bg_vkb2_func_pane

0x152b,	// (0x0003950d) vkb2_top_cell_left_pane_g1_ParamLimits

0x0a1c,	// (0x000389fe) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0a1c,	// (0x000389fe) bg_vkb2_fuc_pane_cp03

0x1589,	// (0x0003956b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x231e,	// (0x0003a300) bg_vkb2_func_pane_g1

0x2326,	// (0x0003a308) bg_vkb2_func_pane_g2

0x2336,	// (0x0003a318) bg_vkb2_func_pane_g3

0x232e,	// (0x0003a310) bg_vkb2_func_pane_g4

0x233e,	// (0x0003a320) bg_vkb2_func_pane_g5

0x2346,	// (0x0003a328) bg_vkb2_func_pane_g6

0x234e,	// (0x0003a330) bg_vkb2_func_pane_g7

0x2356,	// (0x0003a338) bg_vkb2_func_pane_g8

0x2316,	// (0x0003a2f8) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x00047de9) bg_vkb2_func_pane_g

0x0a1c,	// (0x000389fe) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0a1c,	// (0x000389fe) bg_vkb2_fuc_pane_cp01

0x152b,	// (0x0003950d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x152b,	// (0x0003950d) vkb2_top_cell_right_wide_pane_g1

0x0a1c,	// (0x000389fe) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0a1c,	// (0x000389fe) bg_vkb2_fuc_pane_cp02

0x1589,	// (0x0003956b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1589,	// (0x0003956b) vkb2_top_cell_right_narrow_pane_g1

0xd1a0,	// (0x00045182) aid_touch_area_decrease_ParamLimits

0xd1a0,	// (0x00045182) aid_touch_area_decrease

0xd1da,	// (0x000451bc) aid_touch_area_increase_ParamLimits

0xd1da,	// (0x000451bc) aid_touch_area_increase

0xd202,	// (0x000451e4) aid_touch_area_mute_ParamLimits

0xd202,	// (0x000451e4) aid_touch_area_mute

0xd232,	// (0x00045214) aid_touch_area_slider_ParamLimits

0xd232,	// (0x00045214) aid_touch_area_slider

0xd272,	// (0x00045254) popup_slider_window_g4_ParamLimits

0xd272,	// (0x00045254) popup_slider_window_g4

0xd29a,	// (0x0004527c) popup_slider_window_g5_ParamLimits

0xd29a,	// (0x0004527c) popup_slider_window_g5

0xd2ce,	// (0x000452b0) popup_slider_window_g6_ParamLimits

0xd2ce,	// (0x000452b0) popup_slider_window_g6

0x606c,	// (0x0003e04e) popup_slider_window_t2_ParamLimits

0x606c,	// (0x0003e04e) popup_slider_window_t2

0x0001,

0xfd03,	// (0x00047ce5) popup_slider_window_t_ParamLimits

0xfd03,	// (0x00047ce5) popup_slider_window_t

0xd2ea,	// (0x000452cc) slider_pane_ParamLimits

0xd2ea,	// (0x000452cc) slider_pane

0x6d96,	// (0x0003ed78) slider_pane_g1_ParamLimits

0x6d96,	// (0x0003ed78) slider_pane_g1

0x6daa,	// (0x0003ed8c) slider_pane_g2_ParamLimits

0x6daa,	// (0x0003ed8c) slider_pane_g2

0x6dc0,	// (0x0003eda2) slider_pane_g3_ParamLimits

0x6dc0,	// (0x0003eda2) slider_pane_g3

0x0003,

0xfe1a,	// (0x00047dfc) slider_pane_g_ParamLimits

0xfe1a,	// (0x00047dfc) slider_pane_g

0xaac5,	// (0x00042aa7) popup_tb_float_extension_window_ParamLimits

0xaac5,	// (0x00042aa7) popup_tb_float_extension_window

0x6dec,	// (0x0003edce) aid_size_cell_tb_float_ext

0x7bc7,	// (0x0003fba9) bg_popup_sub_window_cp28

0x6df8,	// (0x0003edda) grid_tb_float_ext_pane

0x6e04,	// (0x0003ede6) cell_tb_float_ext_pane_ParamLimits

0x6e04,	// (0x0003ede6) cell_tb_float_ext_pane

0x6e20,	// (0x0003ee02) cell_tb_float_ext_pane_g1

0x6e29,	// (0x0003ee0b) grid_highlight_pane_cp12

0xb1c2,	// (0x000431a4) cell_last_hwr_side_pane_ParamLimits

0xb1c2,	// (0x000431a4) cell_last_hwr_side_pane

0x495a,	// (0x0003c93c) cell_last_hwr_side_pane_g1

0x6e32,	// (0x0003ee14) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x00047e05) cell_last_hwr_side_pane_g

0xb72d,	// (0x0004370f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb72d,	// (0x0004370f) vkb2_area_bottom_space_btn_pane

0x0c97,	// (0x00038c79) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x68e7,	// (0x0003e8c9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x16ef,	// (0x000396d1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x170d,	// (0x000396ef) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x170d,	// (0x000396ef) vkb2_area_bottom_space_btn_pane_g1

0x1747,	// (0x00039729) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1747,	// (0x00039729) vkb2_area_bottom_space_btn_pane_g2

0x177d,	// (0x0003975f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x177d,	// (0x0003975f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x00047e0a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x00047e0a) vkb2_area_bottom_space_btn_pane_g

0x0ae1,	// (0x00038ac3) cel_fep_hwr_func_pane_ParamLimits

0x0ae1,	// (0x00038ac3) cel_fep_hwr_func_pane

0xb197,	// (0x00043179) cell_hwr_side_button_pane_ParamLimits

0xb197,	// (0x00043179) cell_hwr_side_button_pane

0x62cd,	// (0x0003e2af) aid_area_touch_clock_ParamLimits

0x7d76,	// (0x0003fd58) bg_uniindi_top_pane_ParamLimits

0x62e1,	// (0x0003e2c3) uniindi_top_pane_g1_ParamLimits

0x62f7,	// (0x0003e2d9) uniindi_top_pane_g2_ParamLimits

0x6303,	// (0x0003e2e5) uniindi_top_pane_g3_ParamLimits

0x6314,	// (0x0003e2f6) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x00047d1d) uniindi_top_pane_g_ParamLimits

0x6321,	// (0x0003e303) uniindi_top_pane_t1_ParamLimits

0x7d76,	// (0x0003fd58) bg_vkb2_func_pane_cp01_ParamLimits

0x7d76,	// (0x0003fd58) bg_vkb2_func_pane_cp01

0x6e3b,	// (0x0003ee1d) cel_fep_hwr_func_pane_g1_ParamLimits

0x6e3b,	// (0x0003ee1d) cel_fep_hwr_func_pane_g1

0x7d76,	// (0x0003fd58) bg_vkb2_func_pane_cp02_ParamLimits

0x7d76,	// (0x0003fd58) bg_vkb2_func_pane_cp02

0x6e3b,	// (0x0003ee1d) cell_hwr_side_button_pane_g1_ParamLimits

0x6e3b,	// (0x0003ee1d) cell_hwr_side_button_pane_g1

0x2197,	// (0x0003a179) status_pane_g4_ParamLimits

0x2197,	// (0x0003a179) status_pane_g4

0x21b1,	// (0x0003a193) status_pane_t1

0x46f9,	// (0x0003c6db) form2_midp_gauge_slider_cont_pane

0x4701,	// (0x0003c6e3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb33,	// (0x00044b15) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb45,	// (0x00044b27) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x00047add) form2_midp_gauge_slider_pane_t_ParamLimits

0x4737,	// (0x0003c719) form2_midp_slider_pane_ParamLimits

0x10b4,	// (0x00039096) aid_size_cell_func_vkb2_ParamLimits

0x10b4,	// (0x00039096) aid_size_cell_func_vkb2

0x6dd8,	// (0x0003edba) slider_pane_g4_ParamLimits

0x6dd8,	// (0x0003edba) slider_pane_g4

0xb78e,	// (0x00043770) form2_midp_gauge_slider_pane_t2_cp01

0xb79c,	// (0x0004377e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb79c,	// (0x0004377e) form2_midp_gauge_slider_pane_t3_cp01

0x17f2,	// (0x000397d4) form2_midp_slider_pane_cp01

0x7bc7,	// (0x0003fba9) navi_smil_pane

0x6e74,	// (0x0003ee56) navi_smil_pane_g1

0x6e7c,	// (0x0003ee5e) navi_smil_pane_t1

0x6e49,	// (0x0003ee2b) form2_midp_slider_pane_g1

0x6e52,	// (0x0003ee34) form2_midp_slider_pane_g2

0x6e5a,	// (0x0003ee3c) form2_midp_slider_pane_g3

0x6e49,	// (0x0003ee2b) form2_midp_slider_pane_g4

0xe501,	// (0x000464e3) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x00047e13) form2_midp_slider_pane_g

0x17b7,	// (0x00039799) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x17b7,	// (0x00039799) vkb2_area_bottom_space_btn_pane_g4

0xacac,	// (0x00042c8e) lc0_navi_pane_ParamLimits

0xacac,	// (0x00042c8e) lc0_navi_pane

0xad1c,	// (0x00042cfe) lc0_stat_indi_pane_ParamLimits

0xad1c,	// (0x00042cfe) lc0_stat_indi_pane

0xad31,	// (0x00042d13) ls0_title_pane_ParamLimits

0xad31,	// (0x00042d13) ls0_title_pane

0xba1a,	// (0x000439fc) bg_popup_sub_pane_cp14_ParamLimits

0x62b4,	// (0x0003e296) list_uniindi_pane_ParamLimits

0x62c0,	// (0x0003e2a2) uniindi_top_pane_ParamLimits

0x635f,	// (0x0003e341) list_single_uniindi_pane_g1_ParamLimits

0x6372,	// (0x0003e354) list_single_uniindi_pane_t1_ParamLimits

0xb7b9,	// (0x0004379b) lc0_stat_clock_pane_ParamLimits

0xb7b9,	// (0x0004379b) lc0_stat_clock_pane

0xe50a,	// (0x000464ec) lc0_stat_indi_pane_g1_ParamLimits

0xe50a,	// (0x000464ec) lc0_stat_indi_pane_g1

0xe517,	// (0x000464f9) lc0_stat_indi_pane_g2_ParamLimits

0xe517,	// (0x000464f9) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x00047e1e) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x00047e1e) lc0_stat_indi_pane_g

0xb7c6,	// (0x000437a8) lc0_uni_indicator_pane_ParamLimits

0xb7c6,	// (0x000437a8) lc0_uni_indicator_pane

0xe524,	// (0x00046506) ls0_title_pane_g1_ParamLimits

0xe524,	// (0x00046506) ls0_title_pane_g1

0xe538,	// (0x0004651a) ls0_title_pane_t1_ParamLimits

0xe538,	// (0x0004651a) ls0_title_pane_t1

0xb7d3,	// (0x000437b5) lc0_uni_indicator_pane_g1_ParamLimits

0xb7d3,	// (0x000437b5) lc0_uni_indicator_pane_g1

0x6eee,	// (0x0003eed0) lc0_stat_clock_pane_t1

0x7bc7,	// (0x0003fba9) main_ai5_pane

0x6efc,	// (0x0003eede) ai5_sk_pane_ParamLimits

0x6efc,	// (0x0003eede) ai5_sk_pane

0xe566,	// (0x00046548) cell_ai5_widget_pane_ParamLimits

0xe566,	// (0x00046548) cell_ai5_widget_pane

0x74a5,	// (0x0003f487) aid_size_cell_widget_grid

0x74b3,	// (0x0003f495) bg_ai5_widget_pane_ParamLimits

0x74b3,	// (0x0003f495) bg_ai5_widget_pane

0x7527,	// (0x0003f509) cell_ai5_widget_pane_g2

0x7537,	// (0x0003f519) cell_ai5_widget_pane_g3

0x754e,	// (0x0003f530) cell_ai5_widget_pane_g4

0x755a,	// (0x0003f53c) cell_ai5_widget_pane_g5

0xe8bd,	// (0x0004689f) cell_ai5_widget_pane_g6

0xe8c9,	// (0x000468ab) cell_ai5_widget_pane_g7

0x75ba,	// (0x0003f59c) cell_ai5_widget_pane_t1_ParamLimits

0x75ba,	// (0x0003f59c) cell_ai5_widget_pane_t1

0x75d7,	// (0x0003f5b9) cell_ai5_widget_pane_t2_ParamLimits

0x75d7,	// (0x0003f5b9) cell_ai5_widget_pane_t2

0x75ef,	// (0x0003f5d1) cell_ai5_widget_pane_t3_ParamLimits

0x75ef,	// (0x0003f5d1) cell_ai5_widget_pane_t3

0x7607,	// (0x0003f5e9) cell_ai5_widget_pane_t4_ParamLimits

0x7607,	// (0x0003f5e9) cell_ai5_widget_pane_t4

0x7624,	// (0x0003f606) cell_ai5_widget_pane_t5_ParamLimits

0x7624,	// (0x0003f606) cell_ai5_widget_pane_t5

0x7643,	// (0x0003f625) cell_ai5_widget_pane_t6_ParamLimits

0x7643,	// (0x0003f625) cell_ai5_widget_pane_t6

0x7655,	// (0x0003f637) cell_ai5_widget_pane_t7_ParamLimits

0x7655,	// (0x0003f637) cell_ai5_widget_pane_t7

0x766e,	// (0x0003f650) cell_ai5_widget_pane_t8_ParamLimits

0x766e,	// (0x0003f650) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x00047e38) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x00047e38) cell_ai5_widget_pane_t

0x76c2,	// (0x0003f6a4) grid_ai5_widget_pane

0xba1a,	// (0x000439fc) highlight_cell_ai5_widget_pane_ParamLimits

0xba1a,	// (0x000439fc) highlight_cell_ai5_widget_pane

0xe8d5,	// (0x000468b7) ai5_sk_left_pane

0xe8df,	// (0x000468c1) ai5_sk_middle_pane

0xe8e9,	// (0x000468cb) ai5_sk_right_pane

0x76ee,	// (0x0003f6d0) bg_ai5_widget_pane_g1_ParamLimits

0x76ee,	// (0x0003f6d0) bg_ai5_widget_pane_g1

0x76fa,	// (0x0003f6dc) bg_ai5_widget_pane_g2_ParamLimits

0x76fa,	// (0x0003f6dc) bg_ai5_widget_pane_g2

0x7706,	// (0x0003f6e8) bg_ai5_widget_pane_g3_ParamLimits

0x7706,	// (0x0003f6e8) bg_ai5_widget_pane_g3

0x7712,	// (0x0003f6f4) bg_ai5_widget_pane_g4_ParamLimits

0x7712,	// (0x0003f6f4) bg_ai5_widget_pane_g4

0x771e,	// (0x0003f700) bg_ai5_widget_pane_g5_ParamLimits

0x771e,	// (0x0003f700) bg_ai5_widget_pane_g5

0x772a,	// (0x0003f70c) bg_ai5_widget_pane_g6_ParamLimits

0x772a,	// (0x0003f70c) bg_ai5_widget_pane_g6

0x7736,	// (0x0003f718) bg_ai5_widget_pane_g7_ParamLimits

0x7736,	// (0x0003f718) bg_ai5_widget_pane_g7

0x7742,	// (0x0003f724) bg_ai5_widget_pane_g8_ParamLimits

0x7742,	// (0x0003f724) bg_ai5_widget_pane_g8

0x774e,	// (0x0003f730) bg_ai5_widget_pane_g9_ParamLimits

0x774e,	// (0x0003f730) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x00047e4d) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x00047e4d) bg_ai5_widget_pane_g

0x7786,	// (0x0003f768) cell_shortcut_ai5_widget_pane_ParamLimits

0x7786,	// (0x0003f768) cell_shortcut_ai5_widget_pane

0xc36b,	// (0x0004434d) bg_cell_shortcut_ai5_widget_pane

0x7799,	// (0x0003f77b) cell_grid_ai5_widget_pane_g1

0xc36b,	// (0x0004434d) highlight_cell_shortcut_ai5_widget_pane

0x231e,	// (0x0003a300) ai5_sk_left_pane_g1

0x77a2,	// (0x0003f784) ai5_sk_left_pane_g2

0x77aa,	// (0x0003f78c) ai5_sk_left_pane_g3

0x77b2,	// (0x0003f794) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x00047e60) ai5_sk_left_pane_g

0x77ba,	// (0x0003f79c) ai5_sk_left_pane_t1

0x2326,	// (0x0003a308) ai5_sk_right_pane_g1

0x77c8,	// (0x0003f7aa) ai5_sk_right_pane_g2

0x77d0,	// (0x0003f7b2) ai5_sk_right_pane_g3

0x77d8,	// (0x0003f7ba) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x00047e69) ai5_sk_right_pane_g

0x77e0,	// (0x0003f7c2) ai5_sk_right_pane_t1

0x2326,	// (0x0003a308) ai5_sk_middle_pane_g1

0x231e,	// (0x0003a300) ai5_sk_middle_pane_g2

0x233e,	// (0x0003a320) ai5_sk_middle_pane_g3

0x77d0,	// (0x0003f7b2) ai5_sk_middle_pane_g4

0x77aa,	// (0x0003f78c) ai5_sk_middle_pane_g5

0x77ee,	// (0x0003f7d0) ai5_sk_middle_pane_g6

0xe8f3,	// (0x000468d5) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x00047e72) ai5_sk_middle_pane_g

0xab96,	// (0x00042b78) aid_touch_area_size_lc0_ParamLimits

0xab96,	// (0x00042b78) aid_touch_area_size_lc0

0x0cc6,	// (0x00038ca8) cell_hwr_candidate_pane_t1_ParamLimits

0x1e4e,	// (0x00039e30) aid_touch_navi_pane

0xae3c,	// (0x00042e1e) status_dt_navi_pane_ParamLimits

0xae3c,	// (0x00042e1e) status_dt_navi_pane

0xae54,	// (0x00042e36) status_dt_sta_pane_ParamLimits

0xae54,	// (0x00042e36) status_dt_sta_pane

0xe8fb,	// (0x000468dd) dt_sta_controll_pane

0xe908,	// (0x000468ea) dt_sta_indi_pane

0xe915,	// (0x000468f7) dt_sta_title_pane

0x7d76,	// (0x0003fd58) bg_dt_sta_indi_pane_ParamLimits

0x7d76,	// (0x0003fd58) bg_dt_sta_indi_pane

0xe927,	// (0x00046909) dt_sta_battery_pane

0xe92f,	// (0x00046911) dt_sta_indi_pane_g1

0xe938,	// (0x0004691a) dt_sta_indi_pane_g2

0xe941,	// (0x00046923) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x00047e81) dt_sta_indi_pane_g

0xe94a,	// (0x0004692c) dt_sta_signal_pane

0xba1a,	// (0x000439fc) bg_dt_sta_title_pane_ParamLimits

0xba1a,	// (0x000439fc) bg_dt_sta_title_pane

0xe953,	// (0x00046935) dt_sta_title_pane_g1

0xe95b,	// (0x0004693d) dt_sta_title_pane_t1_ParamLimits

0xe95b,	// (0x0004693d) dt_sta_title_pane_t1

0x7bc7,	// (0x0003fba9) bg_dt_sta_control_pane

0xe970,	// (0x00046952) dt_sta_controll_pane_g1

0xe979,	// (0x0004695b) bg_dt_sta_title_pane_g1

0xe982,	// (0x00046964) bg_dt_sta_title_pane_g2

0xe98b,	// (0x0004696d) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x00047e88) bg_dt_sta_title_pane_g

0x495a,	// (0x0003c93c) bg_dt_sta_indi_pane_g1

0x789c,	// (0x0003f87e) dt_sta_signal_pane_g1

0x78a4,	// (0x0003f886) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x00047e8f) dt_sta_signal_pane_g

0x78ac,	// (0x0003f88e) dt_sta_battery_pane_g1

0x78b5,	// (0x0003f897) dt_sta_battery_pane_t1

0x495a,	// (0x0003c93c) bg_dt_sta_control_pane_g1

0xbf7e,	// (0x00043f60) fep_china_uni_eep_pane

0xbf86,	// (0x00043f68) fep_china_uni_entry_pane_ParamLimits

0xbf96,	// (0x00043f78) popup_fep_china_uni_window_g1_ParamLimits

0xbfa6,	// (0x00043f88) popup_fep_china_uni_window_g2_ParamLimits

0xbfa6,	// (0x00043f88) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x000476ff) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x000476ff) popup_fep_china_uni_window_g

0x78c4,	// (0x0003f8a6) fep_china_uni_eep_pane_g1

0x78cc,	// (0x0003f8ae) fep_china_uni_eep_pane_t1

0x6e6b,	// (0x0003ee4d) aid_touch_area_size_smil_player

0x1fa6,	// (0x00039f88) lc0_clock_pane

0x21a5,	// (0x0003a187) status_pane_g5_ParamLimits

0x21a5,	// (0x0003a187) status_pane_g5

0xa5eb,	// (0x000425cd) popup_keymap_window

0x2163,	// (0x0003a145) status_icon_pane

0x7537,	// (0x0003f519) cell_ai5_widget_pane_g3_ParamLimits

0x754e,	// (0x0003f530) cell_ai5_widget_pane_g4_ParamLimits

0x755a,	// (0x0003f53c) cell_ai5_widget_pane_g5_ParamLimits

0x757e,	// (0x0003f560) cell_ai5_widget_pane_g8_ParamLimits

0x757e,	// (0x0003f560) cell_ai5_widget_pane_g8

0x7592,	// (0x0003f574) cell_ai5_widget_pane_g9_ParamLimits

0x7592,	// (0x0003f574) cell_ai5_widget_pane_g9

0x75a6,	// (0x0003f588) cell_ai5_widget_pane_g10_ParamLimits

0x75a6,	// (0x0003f588) cell_ai5_widget_pane_g10

0x78db,	// (0x0003f8bd) status_icon_pane_g1

0x7bc7,	// (0x0003fba9) bg_popup_sub_pane_cp13

0x78e3,	// (0x0003f8c5) popup_keymap_window_t1

0xa2cc,	// (0x000422ae) control_pane_g6_ParamLimits

0xa2cc,	// (0x000422ae) control_pane_g6

0xa2d9,	// (0x000422bb) control_pane_g7_ParamLimits

0xa2d9,	// (0x000422bb) control_pane_g7

0xa2e6,	// (0x000422c8) control_pane_g8_ParamLimits

0xa2e6,	// (0x000422c8) control_pane_g8

0xe8fb,	// (0x000468dd) dt_sta_controll_pane_ParamLimits

0xe908,	// (0x000468ea) dt_sta_indi_pane_ParamLimits

0xe915,	// (0x000468f7) dt_sta_title_pane_ParamLimits

0x8752,	// (0x00040734) aid_size_touch_scroll_bar_cale

0xee22,	// (0x00046e04) popup_discreet_window_ParamLimits

0xee22,	// (0x00046e04) popup_discreet_window

0x92bd,	// (0x0004129f) popup_sk_window

0x2966,	// (0x0003a948) bg_popup_sub_pane_cp28_ParamLimits

0x2966,	// (0x0003a948) bg_popup_sub_pane_cp28

0x78f1,	// (0x0003f8d3) popup_discreet_window_g1_ParamLimits

0x78f1,	// (0x0003f8d3) popup_discreet_window_g1

0x7911,	// (0x0003f8f3) popup_discreet_window_t1_ParamLimits

0x7911,	// (0x0003f8f3) popup_discreet_window_t1

0x792f,	// (0x0003f911) popup_discreet_window_t2_ParamLimits

0x792f,	// (0x0003f911) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x00047e94) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x00047e94) popup_discreet_window_t

0x1828,	// (0x0003980a) popup_sk_window_g1

0x1832,	// (0x00039814) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x00047e9b) popup_sk_window_g

0x183c,	// (0x0003981e) popup_sk_window_t1

0x184c,	// (0x0003982e) popup_sk_window_t1_copy1

0x7527,	// (0x0003f509) cell_ai5_widget_pane_g2_ParamLimits

0x7680,	// (0x0003f662) cell_ai5_widget_pane_t9_ParamLimits

0x7680,	// (0x0003f662) cell_ai5_widget_pane_t9

0x7bc7,	// (0x0003fba9) main_fep_fshwr2_pane

0xb7f2,	// (0x000437d4) aid_fshwr2_btn_pane

0xb803,	// (0x000437e5) aid_fshwr2_syb_pane

0xb814,	// (0x000437f6) aid_fshwr2_txt_pane

0xb820,	// (0x00043802) fshwr2_func_candi_pane

0xb841,	// (0x00043823) fshwr2_hwr_syb_pane

0xb85e,	// (0x00043840) fshwr2_icf_pane

0xed45,	// (0x00046d27) fshwr2_icf_bg_pane

0x18ce,	// (0x000398b0) fshwr2_icf_pane_t1_ParamLimits

0x18ce,	// (0x000398b0) fshwr2_icf_pane_t1

0xbefc,	// (0x00043ede) fshwr2_func_candi_pane_g1

0xe994,	// (0x00046976) fshwr2_func_candi_row_pane_ParamLimits

0xe994,	// (0x00046976) fshwr2_func_candi_row_pane

0xb88a,	// (0x0004386c) cell_fshwr2_syb_pane_ParamLimits

0xb88a,	// (0x0004386c) cell_fshwr2_syb_pane

0x0c97,	// (0x00038c79) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0c97,	// (0x00038c79) fshwr2_hwr_syb_pane_g1

0xed45,	// (0x00046d27) bg_popup_call_pane_cp01

0xb8a0,	// (0x00043882) fshwr2_func_candi_cell_pane_ParamLimits

0xb8a0,	// (0x00043882) fshwr2_func_candi_cell_pane

0xe9b0,	// (0x00046992) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe9b0,	// (0x00046992) fshwr2_func_candi_cell_bg_pane

0xb8e6,	// (0x000438c8) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb8e6,	// (0x000438c8) fshwr2_func_candi_cell_pane_g1

0xb91d,	// (0x000438ff) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb91d,	// (0x000438ff) fshwr2_func_candi_cell_pane_t1

0xed45,	// (0x00046d27) bg_button_pane_cp08

0x799d,	// (0x0003f97f) cell_fshwr2_syb_bg_pane

0xb938,	// (0x0004391a) cell_fshwr2_syb_bg_pane_g1

0xb940,	// (0x00043922) cell_fshwr2_syb_bg_pane_t1

0xba1a,	// (0x000439fc) main_tmo_pane

0xc646,	// (0x00044628) uni_indicator_pane_g1_ParamLimits

0xc65c,	// (0x0004463e) uni_indicator_pane_g2_ParamLimits

0xc672,	// (0x00044654) uni_indicator_pane_g3_ParamLimits

0xc687,	// (0x00044669) uni_indicator_pane_g4_ParamLimits

0xc687,	// (0x00044669) uni_indicator_pane_g4

0x34df,	// (0x0003b4c1) uni_indicator_pane_g5_ParamLimits

0x34df,	// (0x0003b4c1) uni_indicator_pane_g5

0x34df,	// (0x0003b4c1) uni_indicator_pane_g6_ParamLimits

0x34df,	// (0x0003b4c1) uni_indicator_pane_g6

0xf91c,	// (0x000478fe) uni_indicator_pane_g_ParamLimits

0xd170,	// (0x00045152) popup_tmo_note_window_ParamLimits

0xd170,	// (0x00045152) popup_tmo_note_window

0x1096,	// (0x00039078) fshwr2_bg_pane

0xb90e,	// (0x000438f0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb90e,	// (0x000438f0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x00047ea0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x00047ea0) fshwr2_func_candi_cell_pane_g

0x0c7f,	// (0x00038c61) bg_popup_window_pane_cp01

0x1990,	// (0x00039972) bg_popup_window_pane_g1_cp01

0x79a5,	// (0x0003f987) bg_popup_window_pane_cp22_ParamLimits

0x79a5,	// (0x0003f987) bg_popup_window_pane_cp22

0x79b3,	// (0x0003f995) listscroll_tmo_link_pane_ParamLimits

0x79b3,	// (0x0003f995) listscroll_tmo_link_pane

0x79f3,	// (0x0003f9d5) popup_tmo_note_window_g1_ParamLimits

0x79f3,	// (0x0003f9d5) popup_tmo_note_window_g1

0x7a00,	// (0x0003f9e2) tmo_note_info_pane_ParamLimits

0x7a00,	// (0x0003f9e2) tmo_note_info_pane

0xe9bc,	// (0x0004699e) list_tmo_note_info_pane_g1_ParamLimits

0xe9bc,	// (0x0004699e) list_tmo_note_info_pane_g1

0x7a31,	// (0x0003fa13) list_tmo_note_info_pane_g2_ParamLimits

0x7a31,	// (0x0003fa13) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x00047ea5) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x00047ea5) list_tmo_note_info_pane_g

0x7a4d,	// (0x0003fa2f) list_tmo_note_info_text_pane_ParamLimits

0x7a4d,	// (0x0003fa2f) list_tmo_note_info_text_pane

0x7ad2,	// (0x0003fab4) list_tmo_link_pane

0x7adf,	// (0x0003fac1) scroll_pane_cp20

0x7aec,	// (0x0003face) list_single_tmo_link_pane_ParamLimits

0x7aec,	// (0x0003face) list_single_tmo_link_pane

0x7afc,	// (0x0003fade) list_single_tmo_link_pane_t1

0x7b0a,	// (0x0003faec) list_tmo_note_info_text_pane_t1_ParamLimits

0x7b0a,	// (0x0003faec) list_tmo_note_info_text_pane_t1

0x9d06,	// (0x00041ce8) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9d06,	// (0x00041ce8) aid_size_touch_scroll_bar_cp01

0x9c48,	// (0x00041c2a) aid_size_touch_slider_marker

0x92ad,	// (0x0004128f) popup_settings_window_ParamLimits

0x92ad,	// (0x0004128f) popup_settings_window

0xdbbc,	// (0x00045b9e) popup_candi_list_indi_window

0x1e4e,	// (0x00039e30) aid_touch_navi_pane_ParamLimits

0x0fef,	// (0x00038fd1) rs_clock_indi_pane

0x0ff8,	// (0x00038fda) sctrl_sk_bottom_pane_ParamLimits

0x1009,	// (0x00038feb) sctrl_sk_top_pane_ParamLimits

0x110e,	// (0x000390f0) popup_fep_tooltip_window

0x74a5,	// (0x0003f487) aid_size_cell_widget_grid_ParamLimits

0x7512,	// (0x0003f4f4) cell_ai5_widget_pane_g1_ParamLimits

0x7512,	// (0x0003f4f4) cell_ai5_widget_pane_g1

0xe8bd,	// (0x0004689f) cell_ai5_widget_pane_g6_ParamLimits

0xe8c9,	// (0x000468ab) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x00047e23) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x00047e23) cell_ai5_widget_pane_g

0x76a4,	// (0x0003f686) cell_ai5_widget_pane_t10_ParamLimits

0x76a4,	// (0x0003f686) cell_ai5_widget_pane_t10

0x76c2,	// (0x0003f6a4) grid_ai5_widget_pane_ParamLimits

0x775a,	// (0x0003f73c) cell_contacts_ai5_widget_pane_ParamLimits

0x775a,	// (0x0003f73c) cell_contacts_ai5_widget_pane

0x7944,	// (0x0003f926) popup_discreet_window_t3_ParamLimits

0x7944,	// (0x0003f926) popup_discreet_window_t3

0xb876,	// (0x00043858) popup_fshwr2_char_preview_window_ParamLimits

0xb876,	// (0x00043858) popup_fshwr2_char_preview_window

0xe9d3,	// (0x000469b5) tmo_note_info_pane_t1

0xe9e8,	// (0x000469ca) tmo_note_info_pane_t2

0xea01,	// (0x000469e3) tmo_note_info_pane_t3

0x7aae,	// (0x0003fa90) tmo_note_info_pane_t4

0x7ac0,	// (0x0003faa2) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x00047eaa) tmo_note_info_pane_t

0x7ad2,	// (0x0003fab4) list_tmo_link_pane_ParamLimits

0x7adf,	// (0x0003fac1) scroll_pane_cp20_ParamLimits

0xed45,	// (0x00046d27) bg_popup_fep_char_preview_window_cp01

0x7b23,	// (0x0003fb05) popup_fshwr2_char_preview_window_t1

0x7b31,	// (0x0003fb13) popup_candi_list_indi_window_g1

0x7b3a,	// (0x0003fb1c) bg_cell_contacts_ai5_widget_pane

0x7b46,	// (0x0003fb28) cell_contacts_ai5_widget_pane_g1

0x7b5b,	// (0x0003fb3d) cell_contacts_ai5_widget_pane_g2

0x7b67,	// (0x0003fb49) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x00047eb5) cell_contacts_ai5_widget_pane_g

0x7b73,	// (0x0003fb55) cell_contacts_ai5_widget_pane_t1

0xba1a,	// (0x000439fc) highlight_cell_shortcut_ai5_widget_pane_cp01

0xea7b,	// (0x00046a5d) settings_container_pane

0xc36b,	// (0x0004434d) listscroll_set_pane_copy1

0x407b,	// (0x0003c05d) scroll_pane_cp121_copy1

0x7ef0,	// (0x0003fed2) set_content_pane_copy1

0xea87,	// (0x00046a69) aid_height_set_list_copy1_ParamLimits

0xea87,	// (0x00046a69) aid_height_set_list_copy1

0x36df,	// (0x0003b6c1) aid_size_parent_copy1_ParamLimits

0x36df,	// (0x0003b6c1) aid_size_parent_copy1

0xea93,	// (0x00046a75) button_value_adjust_pane_cp6_copy1_ParamLimits

0xea93,	// (0x00046a75) button_value_adjust_pane_cp6_copy1

0x00fa,	// (0x000380dc) list_highlight_pane_cp2_copy1_ParamLimits

0x00fa,	// (0x000380dc) list_highlight_pane_cp2_copy1

0xeaa7,	// (0x00046a89) list_set_pane_copy1_ParamLimits

0xeaa7,	// (0x00046a89) list_set_pane_copy1

0xea16,	// (0x000469f8) main_pane_set_t1_copy1_ParamLimits

0xea16,	// (0x000469f8) main_pane_set_t1_copy1

0xea50,	// (0x00046a32) main_pane_set_t2_copy1_ParamLimits

0xea50,	// (0x00046a32) main_pane_set_t2_copy1

0xeb6e,	// (0x00046b50) main_pane_set_t3_copy1

0xeb7c,	// (0x00046b5e) main_pane_set_t4_copy1

0xea6f,	// (0x00046a51) set_content_pane_g1_copy1_ParamLimits

0xea6f,	// (0x00046a51) set_content_pane_g1_copy1

0xeb8a,	// (0x00046b6c) setting_code_pane_copy1

0x8003,	// (0x0003ffe5) setting_slider_graphic_pane_copy1

0x8003,	// (0x0003ffe5) setting_slider_pane_copy1

0x8003,	// (0x0003ffe5) setting_text_pane_copy1

0x8003,	// (0x0003ffe5) setting_volume_pane_copy1

0xeb8a,	// (0x00046b6c) settings_code_pane_cp2_copy1

0xeb92,	// (0x00046b74) settings_code_pane_cp_copy1_ParamLimits

0xeb92,	// (0x00046b74) settings_code_pane_cp_copy1

0xb94f,	// (0x00043931) volume_set_pane_copy1

0xeba6,	// (0x00046b88) volume_set_pane_g10_copy1

0xebb2,	// (0x00046b94) volume_set_pane_g1_copy1

0xebbc,	// (0x00046b9e) volume_set_pane_g2_copy1

0xebc6,	// (0x00046ba8) volume_set_pane_g3_copy1

0xebd0,	// (0x00046bb2) volume_set_pane_g4_copy1

0xebda,	// (0x00046bbc) volume_set_pane_g5_copy1

0xebe4,	// (0x00046bc6) volume_set_pane_g6_copy1

0xebee,	// (0x00046bd0) volume_set_pane_g7_copy1

0xebf8,	// (0x00046bda) volume_set_pane_g8_copy1

0xec02,	// (0x00046be4) volume_set_pane_g9_copy1

0x7c35,	// (0x0003fc17) bg_set_opt_pane_cp_copy1_ParamLimits

0x7c35,	// (0x0003fc17) bg_set_opt_pane_cp_copy1

0x19a5,	// (0x00039987) setting_slider_pane_t1_copy1_ParamLimits

0x19a5,	// (0x00039987) setting_slider_pane_t1_copy1

0xb95b,	// (0x0004393d) setting_slider_pane_t2_copy1_ParamLimits

0xb95b,	// (0x0004393d) setting_slider_pane_t2_copy1

0xb975,	// (0x00043957) setting_slider_pane_t3_copy1_ParamLimits

0xb975,	// (0x00043957) setting_slider_pane_t3_copy1

0xb98d,	// (0x0004396f) slider_set_pane_copy1_ParamLimits

0xb98d,	// (0x0004396f) slider_set_pane_copy1

0xba75,	// (0x00043a57) set_opt_bg_pane_g1_copy2

0xba7d,	// (0x00043a5f) set_opt_bg_pane_g2_copy2

0x8085,	// (0x00040067) set_opt_bg_pane_g3_copy2

0xba8d,	// (0x00043a6f) set_opt_bg_pane_g4_copy2

0xba95,	// (0x00043a77) set_opt_bg_pane_g5_copy2

0xba9d,	// (0x00043a7f) set_opt_bg_pane_g6_copy2

0xec0c,	// (0x00046bee) set_opt_bg_pane_g7_copy2

0x8099,	// (0x0004007b) set_opt_bg_pane_g8_copy2

0x80a3,	// (0x00040085) set_opt_bg_pane_g9_copy2

0x1a0b,	// (0x000399ed) aid_size_touch_slider_mark_copy1_ParamLimits

0x1a0b,	// (0x000399ed) aid_size_touch_slider_mark_copy1

0x80ad,	// (0x0004008f) slider_set_pane_g1_copy1

0x1a1f,	// (0x00039a01) slider_set_pane_g2_copy1

0x0821,	// (0x00038803) slider_set_pane_g3_copy1_ParamLimits

0x0821,	// (0x00038803) slider_set_pane_g3_copy1

0x0835,	// (0x00038817) slider_set_pane_g4_copy1_ParamLimits

0x0835,	// (0x00038817) slider_set_pane_g4_copy1

0x084d,	// (0x0003882f) slider_set_pane_g5_copy1_ParamLimits

0x084d,	// (0x0003882f) slider_set_pane_g5_copy1

0x0821,	// (0x00038803) slider_set_pane_g6_copy1_ParamLimits

0x0821,	// (0x00038803) slider_set_pane_g6_copy1

0xb9a3,	// (0x00043985) slider_set_pane_g7_copy1_ParamLimits

0xb9a3,	// (0x00043985) slider_set_pane_g7_copy1

0x7bdb,	// (0x0003fbbd) bg_set_opt_pane_cp2_copy1

0x80b6,	// (0x00040098) setting_slider_graphic_pane_g1_copy1

0xec16,	// (0x00046bf8) setting_slider_graphic_pane_t1_copy1

0xec26,	// (0x00046c08) setting_slider_graphic_pane_t2_copy1

0xec36,	// (0x00046c18) slider_set_pane_cp_copy1

0x80ef,	// (0x000400d1) input_focus_pane_cp1_copy1

0x80f8,	// (0x000400da) list_set_text_pane_copy1

0x8100,	// (0x000400e2) setting_text_pane_g1_copy1

0xec3e,	// (0x00046c20) set_text_pane_t1_copy1

0x80ef,	// (0x000400d1) input_focus_pane_cp2_copy1

0x8100,	// (0x000400e2) setting_code_pane_g1_copy1

0xec58,	// (0x00046c3a) setting_code_pane_t1_copy1

0xec66,	// (0x00046c48) list_set_graphic_pane_copy1

0x7bdb,	// (0x0003fbbd) bg_set_opt_pane_cp4_copy1

0xa04f,	// (0x00042031) list_set_graphic_pane_g1_copy1_ParamLimits

0xa04f,	// (0x00042031) list_set_graphic_pane_g1_copy1

0xec78,	// (0x00046c5a) list_set_graphic_pane_g2_copy1

0xa067,	// (0x00042049) list_set_graphic_pane_t1_copy1_ParamLimits

0xa067,	// (0x00042049) list_set_graphic_pane_t1_copy1

0x495a,	// (0x0003c93c) rs_clock_indi_pane_g1

0x8131,	// (0x00040113) rs_clock_indi_pane_t1

0x813f,	// (0x00040121) rs_indi_pane

0x8147,	// (0x00040129) rs_indi_pane_g1

0x8150,	// (0x00040132) rs_indi_pane_g2

0x8159,	// (0x0004013b) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x00047ebc) rs_indi_pane_g

0xc36b,	// (0x0004434d) bg_popup_preview_window_pane_cp03

0x8162,	// (0x00040144) popup_fep_tooltip_window_t1

0x5611,	// (0x0003d5f3) popup_note2_window_g2_ParamLimits

0x5611,	// (0x0003d5f3) popup_note2_window_g2

0x0001,

0xfc73,	// (0x00047c55) popup_note2_window_g_ParamLimits

0xfc73,	// (0x00047c55) popup_note2_window_g

0x5b19,	// (0x0003dafb) bg_popup_sub_pane_cp11_ParamLimits

0x5b26,	// (0x0003db08) cell_ai3_links_pane_g1_ParamLimits

0x5b3d,	// (0x0003db1f) cell_ai3_links_pane_t1

0xec3e,	// (0x00046c20) set_text_pane_t1_copy1_ParamLimits

0xa0e6,	// (0x000420c8) cell_graphic_popup_pane_cp2_ParamLimits

0xa0e6,	// (0x000420c8) cell_graphic_popup_pane_cp2

0xec80,	// (0x00046c62) cell_graphic_popup_pane_g1_cp2

0x8565,	// (0x00040547) cell_graphic_popup_pane_g2_cp2

0x8178,	// (0x0004015a) cell_graphic_popup_pane_g3_cp2

0x8180,	// (0x00040162) cell_graphic_popup_pane_t2_cp2

0x8576,	// (0x00040558) grid_highlight_pane_cp3_cp2

0xbd1e,	// (0x00043d00) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xba1a,	// (0x000439fc) main_tmo_pane_ParamLimits

0xd164,	// (0x00045146) popup_tmo_big_image_note_window

0x7501,	// (0x0003f4e3) cell_ai5_widget_list_pane

0x7509,	// (0x0003f4eb) cell_ai5_widget_lrg_icon_pane

0xe9d3,	// (0x000469b5) tmo_note_info_pane_t1_ParamLimits

0xe9e8,	// (0x000469ca) tmo_note_info_pane_t2_ParamLimits

0xea01,	// (0x000469e3) tmo_note_info_pane_t3_ParamLimits

0x7aae,	// (0x0003fa90) tmo_note_info_pane_t4_ParamLimits

0x7ac0,	// (0x0003faa2) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x00047eaa) tmo_note_info_pane_t_ParamLimits

0xea7b,	// (0x00046a5d) settings_container_pane_ParamLimits

0x80e7,	// (0x000400c9) indicator_popup_pane_cp5

0x80e7,	// (0x000400c9) indicator_popup_pane_cp6

0xec66,	// (0x00046c48) list_set_graphic_pane_copy1_ParamLimits

0x7bc7,	// (0x0003fba9) bg_popup_window_pane_cp23

0x818e,	// (0x00040170) popup_tmo_big_image_note_window_g1

0x819a,	// (0x0004017c) popup_tmo_big_image_note_window_t1

0x81aa,	// (0x0004018c) popup_tmo_big_image_note_window_t2

0x81ba,	// (0x0004019c) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x00047ec3) popup_tmo_big_image_note_window_t

0x495a,	// (0x0003c93c) cell_ai5_widget_lrg_icon_pane_g1

0x81ca,	// (0x000401ac) cell_ai5_widget_lrg_icon_pane_t1

0x81d8,	// (0x000401ba) cell_ai5_widget_list_row_pane_ParamLimits

0x81d8,	// (0x000401ba) cell_ai5_widget_list_row_pane

0x81f0,	// (0x000401d2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x81f0,	// (0x000401d2) cell_ai5_widget_list_row_pane_g1

0x81fd,	// (0x000401df) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x81fd,	// (0x000401df) cell_ai5_widget_list_row_pane_t1

0x8228,	// (0x0004020a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8228,	// (0x0004020a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee8,	// (0x00047eca) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x00047eca) cell_ai5_widget_list_row_pane_t

0xed45,	// (0x00046d27) main_fep_vtchi_ss_pane

0x826c,	// (0x0004024e) popup_fep_char_pre_window

0x8274,	// (0x00040256) popup_fep_ituss_window

0x8295,	// (0x00040277) popup_fep_vkbss_window

0x82b6,	// (0x00040298) grid_vkbss_keypad_pane_ParamLimits

0x82b6,	// (0x00040298) grid_vkbss_keypad_pane

0x82c6,	// (0x000402a8) ituss_keypad_pane

0x1a49,	// (0x00039a2b) aid_vkbss_key_offset_ParamLimits

0x1a49,	// (0x00039a2b) aid_vkbss_key_offset

0x1a55,	// (0x00039a37) cell_vkbss_key_pane_ParamLimits

0x1a55,	// (0x00039a37) cell_vkbss_key_pane

0x82d5,	// (0x000402b7) bg_cell_vkbss_key_g1_ParamLimits

0x82d5,	// (0x000402b7) bg_cell_vkbss_key_g1

0x82e1,	// (0x000402c3) cell_vkbss_key_3p_pane_ParamLimits

0x82e1,	// (0x000402c3) cell_vkbss_key_3p_pane

0x82fb,	// (0x000402dd) cell_vkbss_key_g1_ParamLimits

0x82fb,	// (0x000402dd) cell_vkbss_key_g1

0x8315,	// (0x000402f7) cell_vkbss_key_t1_ParamLimits

0x8315,	// (0x000402f7) cell_vkbss_key_t1

0x1a6b,	// (0x00039a4d) cell_ituss_key_pane_ParamLimits

0x1a6b,	// (0x00039a4d) cell_ituss_key_pane

0x8340,	// (0x00040322) bg_cell_ituss_key_g1_ParamLimits

0x8340,	// (0x00040322) bg_cell_ituss_key_g1

0x834c,	// (0x0004032e) cell_ituss_key_pane_g1_ParamLimits

0x834c,	// (0x0004032e) cell_ituss_key_pane_g1

0x1a7c,	// (0x00039a5e) cell_ituss_key_pane_g2_ParamLimits

0x1a7c,	// (0x00039a5e) cell_ituss_key_pane_g2

0x0002,

0xfeef,	// (0x00047ed1) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x00047ed1) cell_ituss_key_pane_g

0x1aa8,	// (0x00039a8a) cell_ituss_key_t1_ParamLimits

0x1aa8,	// (0x00039a8a) cell_ituss_key_t1

0x1ae2,	// (0x00039ac4) cell_ituss_key_t2_ParamLimits

0x1ae2,	// (0x00039ac4) cell_ituss_key_t2

0x1b13,	// (0x00039af5) cell_ituss_key_t3_ParamLimits

0x1b13,	// (0x00039af5) cell_ituss_key_t3

0x1ae2,	// (0x00039ac4) cell_ituss_key_t4_ParamLimits

0x1ae2,	// (0x00039ac4) cell_ituss_key_t4

0x0004,

0xfef6,	// (0x00047ed8) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x00047ed8) cell_ituss_key_t

0x8372,	// (0x00040354) cell_vkbss_key_3p_pane_g1

0x837a,	// (0x0004035c) cell_vkbss_key_3p_pane_g2

0x8382,	// (0x00040364) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x00047ee3) cell_vkbss_key_3p_pane_g

0xed45,	// (0x00046d27) bg_popup_fep_char_preview_window_cp02

0x1b56,	// (0x00039b38) popup_fep_char_pre_window_t1

0xe8b3,	// (0x00046895) main_ai5_sk_pane

0x7b3a,	// (0x0003fb1c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7b46,	// (0x0003fb28) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7b5b,	// (0x0003fb3d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7b67,	// (0x0003fb49) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x00047eb5) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7b73,	// (0x0003fb55) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xba1a,	// (0x000439fc) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xec88,	// (0x00046c6a) main_ai5_sk_pane_g1

0x279e,	// (0x0003a780) popup_query_code_window_g1

0x828a,	// (0x0004026c) popup_fep_vkb_icf_pane

0x82a0,	// (0x00040282) popup_fep_vtchi_icf_pane

0x8393,	// (0x00040375) bg_icf_pane

0x839f,	// (0x00040381) list_vkb_icf_pane

0x83ab,	// (0x0004038d) bg_icf_pane_cp01

0x83be,	// (0x000403a0) vtchi_icf_list_pane

0x83cf,	// (0x000403b1) list_vkb_icf_pane_t1_ParamLimits

0x83cf,	// (0x000403b1) list_vkb_icf_pane_t1

0x83e5,	// (0x000403c7) vtchi_icf_list_pane_t1_ParamLimits

0x83e5,	// (0x000403c7) vtchi_icf_list_pane_t1

0x8274,	// (0x00040256) popup_fep_ituss_window_ParamLimits

0x82a0,	// (0x00040282) popup_fep_vtchi_icf_pane_ParamLimits

0x82c6,	// (0x000402a8) ituss_keypad_pane_ParamLimits

0x1a3d,	// (0x00039a1f) ituss_sks_pane

0x8393,	// (0x00040375) bg_icf_pane_ParamLimits

0x8250,	// (0x00040232) icf_edit_indi_pane_ParamLimits

0x8250,	// (0x00040232) icf_edit_indi_pane

0x839f,	// (0x00040381) list_vkb_icf_pane_ParamLimits

0x83ab,	// (0x0004038d) bg_icf_pane_cp01_ParamLimits

0x825f,	// (0x00040241) icf_edit_indi_pane_cp01_ParamLimits

0x825f,	// (0x00040241) icf_edit_indi_pane_cp01

0x83c6,	// (0x000403a8) vtchi_query_pane

0x4bd5,	// (0x0003cbb7) icf_edit_indi_pane_g1_ParamLimits

0x4bd5,	// (0x0003cbb7) icf_edit_indi_pane_g1

0x8454,	// (0x00040436) icf_edit_indi_pane_g2_ParamLimits

0x8454,	// (0x00040436) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00047efb) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00047efb) icf_edit_indi_pane_g

0x8463,	// (0x00040445) icf_edit_indi_pane_t1

0x83fd,	// (0x000403df) bg_input_focus_pane_cp042

0x8749,	// (0x0004072b) vtchi_button_pane

0x8406,	// (0x000403e8) vtchi_query_pane_t1

0x8414,	// (0x000403f6) vtchi_query_pane_t2

0x8422,	// (0x00040404) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00047eea) vtchi_query_pane_t

0xed45,	// (0x00046d27) bg_button_pane_cp13

0x8430,	// (0x00040412) vtchi_button_pane_g1

0x1b65,	// (0x00039b47) ituss_sks_pane_g1

0x1b70,	// (0x00039b52) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00047ef1) ituss_sks_pane_g

0x8438,	// (0x0004041a) ituss_sks_pane_t1

0x8446,	// (0x00040428) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00047ef6) ituss_sks_pane_t

0x440a,	// (0x0003c3ec) indicator_nsta_pane_cp_g1

0x4413,	// (0x0003c3f5) indicator_nsta_pane_cp_g2

0x441b,	// (0x0003c3fd) indicator_nsta_pane_cp_g3

0x4423,	// (0x0003c405) indicator_nsta_pane_cp_g4

0x442b,	// (0x0003c40d) indicator_nsta_pane_cp_g5

0x4433,	// (0x0003c415) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x00047a93) indicator_nsta_pane_cp_g

0xe3d6,	// (0x000463b8) cell_graphic2_pane_t2_ParamLimits

0xe3d6,	// (0x000463b8) cell_graphic2_pane_t2

0x0001,

0xfdca,	// (0x00047dac) cell_graphic2_pane_t_ParamLimits

0xfdca,	// (0x00047dac) cell_graphic2_pane_t

0xe40c,	// (0x000463ee) cell_graphic2_control_pane_t1

0x9f4f,	// (0x00041f31) signal_pane_g3_ParamLimits

0x9f4f,	// (0x00041f31) signal_pane_g3

0x9f63,	// (0x00041f45) signal_pane_g4_ParamLimits

0x9f63,	// (0x00041f45) signal_pane_g4

0x823a,	// (0x0004021c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x823a,	// (0x0004021c) cell_ai5_widget_list_row_pane_t3

0x8360,	// (0x00040342) cell_ituss_key_pane_t1_ParamLimits

0x8360,	// (0x00040342) cell_ituss_key_pane_t1

0x241b,	// (0x0003a3fd) form_field_data_wide_pane_vc_t2_ParamLimits

0x241b,	// (0x0003a3fd) form_field_data_wide_pane_vc_t2

0x242f,	// (0x0003a411) form_field_data_wide_pane_vc_t3_ParamLimits

0x242f,	// (0x0003a411) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x000477e6) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x000477e6) form_field_data_wide_pane_vc_t

0x40bb,	// (0x0003c09d) form_field_slider_wide_pane_vc_t3_ParamLimits

0x40bb,	// (0x0003c09d) form_field_slider_wide_pane_vc_t3

0x4191,	// (0x0003c173) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4191,	// (0x0003c173) form_field_popup_wide_pane_vc_t2

0x41a8,	// (0x0003c18a) form_field_popup_wide_pane_vc_t3_ParamLimits

0x41a8,	// (0x0003c18a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x00047a82) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x00047a82) form_field_popup_wide_pane_vc_t

0xb7f2,	// (0x000437d4) aid_fshwr2_btn_pane_ParamLimits

0xb803,	// (0x000437e5) aid_fshwr2_syb_pane_ParamLimits

0xb814,	// (0x000437f6) aid_fshwr2_txt_pane_ParamLimits

0x1096,	// (0x00039078) fshwr2_bg_pane_ParamLimits

0xb820,	// (0x00043802) fshwr2_func_candi_pane_ParamLimits

0xb841,	// (0x00043823) fshwr2_hwr_syb_pane_ParamLimits

0xb85e,	// (0x00043840) fshwr2_icf_pane_ParamLimits

0xdf6b,	// (0x00045f4d) list_double_graphic_pane_vc_g4_ParamLimits

0xdf6b,	// (0x00045f4d) list_double_graphic_pane_vc_g4

0x1a9c,	// (0x00039a7e) cell_ituss_key_pane_g3_ParamLimits

0x1a9c,	// (0x00039a7e) cell_ituss_key_pane_g3

0x1b44,	// (0x00039b26) cell_ituss_key_t5_ParamLimits

0x1b44,	// (0x00039b26) cell_ituss_key_t5

0x8295,	// (0x00040277) popup_fep_vkbss_window_ParamLimits
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
	0, // AknLayoutScalable_Avkon::Tpopup_fep_vkbss_window_ParamLimits_sig*,
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
