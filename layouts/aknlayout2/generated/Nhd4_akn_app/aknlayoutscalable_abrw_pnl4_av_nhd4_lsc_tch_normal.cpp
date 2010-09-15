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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00015576 };

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
0x962d,	// (0x0001eba3) Screen

0x9639,	// (0x0001ebaf) application_window_ParamLimits

0x9639,	// (0x0001ebaf) application_window

0xc3f4,	// (0x0002196a) screen_g1

0x7f74,	// (0x0001d4ea) area_bottom_pane_ParamLimits

0x7f74,	// (0x0001d4ea) area_bottom_pane

0x8032,	// (0x0001d5a8) area_top_pane_ParamLimits

0x8032,	// (0x0001d5a8) area_top_pane

0x80c6,	// (0x0001d63c) main_pane_ParamLimits

0x80c6,	// (0x0001d63c) main_pane

0xc3fe,	// (0x00021974) misc_graphics

0xa7b5,	// (0x0001fd2b) battery_pane_ParamLimits

0xa7b5,	// (0x0001fd2b) battery_pane

0x1ac0,	// (0x00017036) bg_status_flat_pane_g8

0x1ac8,	// (0x0001703e) bg_status_flat_pane_g9

0x0d97,	// (0x0001630d) context_pane_ParamLimits

0x0d97,	// (0x0001630d) context_pane

0xa920,	// (0x0001fe96) navi_pane_ParamLimits

0xa920,	// (0x0001fe96) navi_pane

0xa99e,	// (0x0001ff14) signal_pane_ParamLimits

0xa99e,	// (0x0001ff14) signal_pane

0x0008,

0xf834,	// (0x00024daa) bg_status_flat_pane_g

0xaa2e,	// (0x0001ffa4) status_pane_g1_ParamLimits

0xaa2e,	// (0x0001ffa4) status_pane_g1

0xaa44,	// (0x0001ffba) status_pane_g2_ParamLimits

0xaa44,	// (0x0001ffba) status_pane_g2

0x0fbe,	// (0x00016534) status_pane_g3_ParamLimits

0x0fbe,	// (0x00016534) status_pane_g3

0x0004,

0xf767,	// (0x00024cdd) status_pane_g_ParamLimits

0xf767,	// (0x00024cdd) status_pane_g

0xaa50,	// (0x0001ffc6) title_pane_ParamLimits

0xaa50,	// (0x0001ffc6) title_pane

0xaab3,	// (0x00020029) uni_indicator_pane_ParamLimits

0xaab3,	// (0x00020029) uni_indicator_pane

0xd312,	// (0x00022888) bg_list_pane_ParamLimits

0xd312,	// (0x00022888) bg_list_pane

0xa728,	// (0x0001fc9e) find_pane

0x1294,	// (0x0001680a) listscroll_app_pane_ParamLimits

0x1294,	// (0x0001680a) listscroll_app_pane

0xd332,	// (0x000228a8) listscroll_form_pane

0x8531,	// (0x0001daa7) listscroll_gen_pane_ParamLimits

0x8531,	// (0x0001daa7) listscroll_gen_pane

0xe778,	// (0x00023cee) listscroll_set_pane

0x2636,	// (0x00017bac) main_idle_act_pane

0xd1a6,	// (0x0002271c) main_idle_trad_pane

0xd1a6,	// (0x0002271c) main_list_empty_pane

0xca44,	// (0x00021fba) main_midp_pane

0xd34c,	// (0x000228c2) main_pane_g1_ParamLimits

0xd34c,	// (0x000228c2) main_pane_g1

0x8545,	// (0x0001dabb) popup_ai_message_window_ParamLimits

0x8545,	// (0x0001dabb) popup_ai_message_window

0x85f6,	// (0x0001db6c) popup_fep_china_uni_window_ParamLimits

0x85f6,	// (0x0001db6c) popup_fep_china_uni_window

0x8650,	// (0x0001dbc6) popup_fep_japan_candidate_window_ParamLimits

0x8650,	// (0x0001dbc6) popup_fep_japan_candidate_window

0x866e,	// (0x0001dbe4) popup_fep_japan_predictive_window_ParamLimits

0x866e,	// (0x0001dbe4) popup_fep_japan_predictive_window

0x8680,	// (0x0001dbf6) popup_find_window

0x869d,	// (0x0001dc13) popup_grid_graphic_window_ParamLimits

0x869d,	// (0x0001dc13) popup_grid_graphic_window

0xe7c4,	// (0x00023d3a) popup_large_graphic_colour_window

0x873b,	// (0x0001dcb1) popup_menu_window_ParamLimits

0x873b,	// (0x0001dcb1) popup_menu_window

0x890d,	// (0x0001de83) popup_note_image_window

0x88d3,	// (0x0001de49) popup_note_wait_window_ParamLimits

0x88d3,	// (0x0001de49) popup_note_wait_window

0x8925,	// (0x0001de9b) popup_note_window_ParamLimits

0x8925,	// (0x0001de9b) popup_note_window

0x89d4,	// (0x0001df4a) popup_query_code_window_ParamLimits

0x89d4,	// (0x0001df4a) popup_query_code_window

0x8a0e,	// (0x0001df84) popup_query_data_code_window_ParamLimits

0x8a0e,	// (0x0001df84) popup_query_data_code_window

0x8a2b,	// (0x0001dfa1) popup_query_data_window_ParamLimits

0x8a2b,	// (0x0001dfa1) popup_query_data_window

0x8aad,	// (0x0001e023) popup_query_sat_info_window_ParamLimits

0x8aad,	// (0x0001e023) popup_query_sat_info_window

0x8b44,	// (0x0001e0ba) popup_snote_single_graphic_window_ParamLimits

0x8b44,	// (0x0001e0ba) popup_snote_single_graphic_window

0x8b44,	// (0x0001e0ba) popup_snote_single_text_window_ParamLimits

0x8b44,	// (0x0001e0ba) popup_snote_single_text_window

0xe7ea,	// (0x00023d60) popup_sub_window_general

0x8ca1,	// (0x0001e217) popup_window_general_ParamLimits

0x8ca1,	// (0x0001e217) popup_window_general

0x0c53,	// (0x000161c9) power_save_pane

0x83b2,	// (0x0001d928) control_pane_g1_ParamLimits

0x83b2,	// (0x0001d928) control_pane_g1

0x83db,	// (0x0001d951) control_pane_g2_ParamLimits

0x83db,	// (0x0001d951) control_pane_g2

0xd2fc,	// (0x00022872) control_pane_g3_ParamLimits

0xd2fc,	// (0x00022872) control_pane_g3

0x0007,

0xf74f,	// (0x00024cc5) control_pane_g_ParamLimits

0xf74f,	// (0x00024cc5) control_pane_g

0x841c,	// (0x0001d992) control_pane_t1_ParamLimits

0x841c,	// (0x0001d992) control_pane_t1

0x8484,	// (0x0001d9fa) control_pane_t2_ParamLimits

0x8484,	// (0x0001d9fa) control_pane_t2

0x0002,

0xf760,	// (0x00024cd6) control_pane_t_ParamLimits

0xf760,	// (0x00024cd6) control_pane_t

0xa678,	// (0x0001fbee) navi_navi_volume_pane_cp1

0xa680,	// (0x0001fbf6) status_small_icon_pane

0xd2a8,	// (0x0002281e) status_small_pane_g1_ParamLimits

0xd2a8,	// (0x0002281e) status_small_pane_g1

0xa688,	// (0x0001fbfe) status_small_pane_g2_ParamLimits

0xa688,	// (0x0001fbfe) status_small_pane_g2

0xd2dc,	// (0x00022852) status_small_pane_g3_ParamLimits

0xd2dc,	// (0x00022852) status_small_pane_g3

0xa694,	// (0x0001fc0a) status_small_pane_g4_ParamLimits

0xa694,	// (0x0001fc0a) status_small_pane_g4

0xa6a2,	// (0x0001fc18) status_small_pane_g5_ParamLimits

0xa6a2,	// (0x0001fc18) status_small_pane_g5

0xa6b0,	// (0x0001fc26) status_small_pane_g6_ParamLimits

0xa6b0,	// (0x0001fc26) status_small_pane_g6

0x0007,

0xf73e,	// (0x00024cb4) status_small_pane_g_ParamLimits

0xf73e,	// (0x00024cb4) status_small_pane_g

0xa6cb,	// (0x0001fc41) status_small_pane_t1

0xa6ed,	// (0x0001fc63) status_small_wait_pane_ParamLimits

0xa6ed,	// (0x0001fc63) status_small_wait_pane

0xa3a2,	// (0x0001f918) aid_levels_signal_ParamLimits

0xa3a2,	// (0x0001f918) aid_levels_signal

0xa3ba,	// (0x0001f930) signal_pane_g1_ParamLimits

0xa3ba,	// (0x0001f930) signal_pane_g1

0xa3d5,	// (0x0001f94b) signal_pane_g2_ParamLimits

0xa3d5,	// (0x0001f94b) signal_pane_g2

0x0003,

0xf6cf,	// (0x00024c45) signal_pane_g_ParamLimits

0xf6cf,	// (0x00024c45) signal_pane_g

0xcdac,	// (0x00022322) context_pane_g1

0x9649,	// (0x0001ebbf) title_pane_g1

0x9680,	// (0x0001ebf6) title_pane_t1

0xc414,	// (0x0002198a) title_pane_t2

0xc43a,	// (0x000219b0) title_pane_t3

0x0002,

0xf532,	// (0x00024aa8) title_pane_t

0xaadb,	// (0x00020051) aid_levels_battery_ParamLimits

0xaadb,	// (0x00020051) aid_levels_battery

0xaaf7,	// (0x0002006d) battery_pane_g1_ParamLimits

0xaaf7,	// (0x0002006d) battery_pane_g1

0xab14,	// (0x0002008a) battery_pane_g2_ParamLimits

0xab14,	// (0x0002008a) battery_pane_g2

0x0001,

0xf772,	// (0x00024ce8) battery_pane_g_ParamLimits

0xf772,	// (0x00024ce8) battery_pane_g

0xb0f1,	// (0x00020667) uni_indicator_pane_g1

0xb107,	// (0x0002067d) uni_indicator_pane_g2

0xb11d,	// (0x00020693) uni_indicator_pane_g3

0x0005,

0xf8dc,	// (0x00024e52) uni_indicator_pane_g

0xd049,	// (0x000225bf) navi_icon_pane_ParamLimits

0xd049,	// (0x000225bf) navi_icon_pane

0xcf9e,	// (0x00022514) navi_midp_pane

0xd065,	// (0x000225db) navi_navi_pane

0xd06f,	// (0x000225e5) navi_text_pane_ParamLimits

0xd06f,	// (0x000225e5) navi_text_pane

0xc3f4,	// (0x0002196a) status_small_wait_pane_g1

0xc6a5,	// (0x00021c1b) status_small_wait_pane_g2

0x0001,

0xf8d7,	// (0x00024e4d) status_small_wait_pane_g

0xb04a,	// (0x000205c0) navi_navi_icon_text_pane

0x2113,	// (0x00017689) navi_navi_pane_g1_ParamLimits

0x2113,	// (0x00017689) navi_navi_pane_g1

0x2125,	// (0x0001769b) navi_navi_pane_g2_ParamLimits

0x2125,	// (0x0001769b) navi_navi_pane_g2

0x0001,

0xf8a5,	// (0x00024e1b) navi_navi_pane_g_ParamLimits

0xf8a5,	// (0x00024e1b) navi_navi_pane_g

0x2137,	// (0x000176ad) navi_navi_tabs_pane

0x2140,	// (0x000176b6) navi_navi_text_pane

0xb04a,	// (0x000205c0) navi_navi_volume_pane

0x20e7,	// (0x0001765d) navi_text_pane_t1

0x20db,	// (0x00017651) navi_icon_pane_g1

0x202e,	// (0x000175a4) navi_navi_text_pane_t1

0x8d5e,	// (0x0001e2d4) navi_navi_volume_pane_g1

0xea55,	// (0x00023fcb) volume_small_pane

0x1f94,	// (0x0001750a) navi_navi_icon_text_pane_g1

0xafa2,	// (0x00020518) navi_navi_icon_text_pane_t1

0xd065,	// (0x000225db) navi_tabs_2_long_pane

0xd065,	// (0x000225db) navi_tabs_2_pane

0xd065,	// (0x000225db) navi_tabs_3_long_pane

0xd065,	// (0x000225db) navi_tabs_3_pane

0xd065,	// (0x000225db) navi_tabs_4_pane

0xea35,	// (0x00023fab) tabs_2_active_pane_ParamLimits

0xea35,	// (0x00023fab) tabs_2_active_pane

0xea45,	// (0x00023fbb) tabs_2_passive_pane_ParamLimits

0xea45,	// (0x00023fbb) tabs_2_passive_pane

0xea03,	// (0x00023f79) tabs_3_active_pane_ParamLimits

0xea03,	// (0x00023f79) tabs_3_active_pane

0xea13,	// (0x00023f89) tabs_3_passive_pane_ParamLimits

0xea13,	// (0x00023f89) tabs_3_passive_pane

0xea24,	// (0x00023f9a) tabs_3_passive_pane_cp_ParamLimits

0xea24,	// (0x00023f9a) tabs_3_passive_pane_cp

0xe9bf,	// (0x00023f35) tabs_4_active_pane_ParamLimits

0xe9bf,	// (0x00023f35) tabs_4_active_pane

0xe9d0,	// (0x00023f46) tabs_4_passive_pane_ParamLimits

0xe9d0,	// (0x00023f46) tabs_4_passive_pane

0xe9e1,	// (0x00023f57) tabs_4_passive_pane_cp_ParamLimits

0xe9e1,	// (0x00023f57) tabs_4_passive_pane_cp

0xe9f2,	// (0x00023f68) tabs_4_passive_pane_cp2_ParamLimits

0xe9f2,	// (0x00023f68) tabs_4_passive_pane_cp2

0xe99b,	// (0x00023f11) tabs_2_long_active_pane_ParamLimits

0xe99b,	// (0x00023f11) tabs_2_long_active_pane

0xe9ad,	// (0x00023f23) tabs_2_long_passive_pane_ParamLimits

0xe9ad,	// (0x00023f23) tabs_2_long_passive_pane

0xe956,	// (0x00023ecc) tabs_3_long_active_pane_ParamLimits

0xe956,	// (0x00023ecc) tabs_3_long_active_pane

0xe96f,	// (0x00023ee5) tabs_3_long_passive_pane_ParamLimits

0xe96f,	// (0x00023ee5) tabs_3_long_passive_pane

0xe982,	// (0x00023ef8) tabs_3_long_passive_pane_cp_ParamLimits

0xe982,	// (0x00023ef8) tabs_3_long_passive_pane_cp

0xe8fc,	// (0x00023e72) volume_small_pane_g1

0xe905,	// (0x00023e7b) volume_small_pane_g2

0xe90e,	// (0x00023e84) volume_small_pane_g3

0xe917,	// (0x00023e8d) volume_small_pane_g4

0xe920,	// (0x00023e96) volume_small_pane_g5

0xe929,	// (0x00023e9f) volume_small_pane_g6

0xe932,	// (0x00023ea8) volume_small_pane_g7

0xe93b,	// (0x00023eb1) volume_small_pane_g8

0xe944,	// (0x00023eba) volume_small_pane_g9

0xe94d,	// (0x00023ec3) volume_small_pane_g10

0x0009,

0xf871,	// (0x00024de7) volume_small_pane_g

0xc44c,	// (0x000219c2) bg_active_tab_pane_cp2_ParamLimits

0xc44c,	// (0x000219c2) bg_active_tab_pane_cp2

0x970c,	// (0x0001ec82) tabs_3_active_pane_g1

0x9714,	// (0x0001ec8a) tabs_3_active_pane_t1

0xc44c,	// (0x000219c2) bg_passive_tab_pane_cp2_ParamLimits

0xc44c,	// (0x000219c2) bg_passive_tab_pane_cp2

0x970c,	// (0x0001ec82) tabs_3_passive_pane_g1

0x9714,	// (0x0001ec8a) tabs_3_passive_pane_t1

0xc44c,	// (0x000219c2) bg_active_tab_pane_cp3_ParamLimits

0xc44c,	// (0x000219c2) bg_active_tab_pane_cp3

0x9726,	// (0x0001ec9c) tabs_4_active_pane_g1

0x972e,	// (0x0001eca4) tabs_4_active_pane_t1

0xc44c,	// (0x000219c2) bg_passive_tab_pane_cp3_ParamLimits

0xc44c,	// (0x000219c2) bg_passive_tab_pane_cp3

0x9726,	// (0x0001ec9c) tabs_4_1_passive_pane_g1

0x972e,	// (0x0001eca4) tabs_4_1_passive_pane_t1

0xca44,	// (0x00021fba) list_highlight_pane_cp2

0xb23d,	// (0x000207b3) list_set_pane_ParamLimits

0xb23d,	// (0x000207b3) list_set_pane

0xb2d7,	// (0x0002084d) main_pane_set_t1_ParamLimits

0xb2d7,	// (0x0002084d) main_pane_set_t1

0xb2f7,	// (0x0002086d) main_pane_set_t2_ParamLimits

0xb2f7,	// (0x0002086d) main_pane_set_t2

0xb30b,	// (0x00020881) main_pane_set_t3_ParamLimits

0xb30b,	// (0x00020881) main_pane_set_t3

0xb31d,	// (0x00020893) main_pane_set_t4_ParamLimits

0xb31d,	// (0x00020893) main_pane_set_t4

0x0003,

0xf941,	// (0x00024eb7) main_pane_set_t_ParamLimits

0xf941,	// (0x00024eb7) main_pane_set_t

0xb32f,	// (0x000208a5) setting_code_pane

0xb339,	// (0x000208af) setting_slider_graphic_pane

0xb339,	// (0x000208af) setting_slider_pane

0xb339,	// (0x000208af) setting_text_pane

0xb339,	// (0x000208af) setting_volume_pane

0x82c1,	// (0x0001d837) volume_set_pane

0xc45a,	// (0x000219d0) bg_set_opt_pane_cp

0x82c9,	// (0x0001d83f) setting_slider_pane_t1

0x82e2,	// (0x0001d858) setting_slider_pane_t2

0x82fc,	// (0x0001d872) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00024aaf) setting_slider_pane_t

0x8314,	// (0x0001d88a) slider_set_pane

0xc3fe,	// (0x00021974) bg_set_opt_pane_cp2

0xc468,	// (0x000219de) setting_slider_graphic_pane_g1

0x832a,	// (0x0001d8a0) setting_slider_graphic_pane_t1

0x833a,	// (0x0001d8b0) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00024ab6) setting_slider_graphic_pane_t

0x834a,	// (0x0001d8c0) slider_set_pane_cp

0xc3fe,	// (0x00021974) input_focus_pane_cp1

0x261d,	// (0x00017b93) list_set_text_pane

0xc3f4,	// (0x0002196a) setting_text_pane_g1

0xc3fe,	// (0x00021974) input_focus_pane_cp2

0xc3f4,	// (0x0002196a) setting_code_pane_g1

0xc471,	// (0x000219e7) setting_code_pane_t1

0xc47f,	// (0x000219f5) set_text_pane_t1_ParamLimits

0xc47f,	// (0x000219f5) set_text_pane_t1

0xc95a,	// (0x00021ed0) set_opt_bg_pane_g1

0xc962,	// (0x00021ed8) set_opt_bg_pane_g2

0xb1f2,	// (0x00020768) set_opt_bg_pane_g3

0xc972,	// (0x00021ee8) set_opt_bg_pane_g4

0xc97a,	// (0x00021ef0) set_opt_bg_pane_g5

0xc982,	// (0x00021ef8) set_opt_bg_pane_g6

0xb1fc,	// (0x00020772) set_opt_bg_pane_g7

0xb204,	// (0x0002077a) set_opt_bg_pane_g8

0xb20e,	// (0x00020784) set_opt_bg_pane_g9

0x0008,

0xf92e,	// (0x00024ea4) set_opt_bg_pane_g

0xb1e5,	// (0x0002075b) slider_set_pane_g1

0xea5e,	// (0x00023fd4) slider_set_pane_g2

0x0006,

0xf91f,	// (0x00024e95) slider_set_pane_g

0x8d66,	// (0x0001e2dc) volume_set_pane_g1

0x8d6e,	// (0x0001e2e4) volume_set_pane_g2

0x8d76,	// (0x0001e2ec) volume_set_pane_g3

0x8d7e,	// (0x0001e2f4) volume_set_pane_g4

0x8d86,	// (0x0001e2fc) volume_set_pane_g5

0x8d8e,	// (0x0001e304) volume_set_pane_g6

0x8d96,	// (0x0001e30c) volume_set_pane_g7

0x8d9e,	// (0x0001e314) volume_set_pane_g8

0x8da6,	// (0x0001e31c) volume_set_pane_g9

0x8dae,	// (0x0001e324) volume_set_pane_g10

0x0009,

0xf8f7,	// (0x00024e6d) volume_set_pane_g

0x9740,	// (0x0001ecb6) indicator_pane_ParamLimits

0x9740,	// (0x0001ecb6) indicator_pane

0x9768,	// (0x0001ecde) main_idle_pane_g2_ParamLimits

0x9768,	// (0x0001ecde) main_idle_pane_g2

0x97a0,	// (0x0001ed16) main_pane_idle_g1_ParamLimits

0x97a0,	// (0x0001ed16) main_pane_idle_g1

0xc499,	// (0x00021a0f) popup_clock_digital_analogue_window_ParamLimits

0xc499,	// (0x00021a0f) popup_clock_digital_analogue_window

0x97c7,	// (0x0001ed3d) soft_indicator_pane_ParamLimits

0x97c7,	// (0x0001ed3d) soft_indicator_pane

0x97eb,	// (0x0001ed61) wallpaper_pane_ParamLimits

0x97eb,	// (0x0001ed61) wallpaper_pane

0xc3f4,	// (0x0002196a) wallpaper_pane_g1

0x97fd,	// (0x0001ed73) indicator_pane_g1_ParamLimits

0x97fd,	// (0x0001ed73) indicator_pane_g1

0x2b0e,	// (0x00018084) navi_navi_icon_text_pane_srt_g1

0xc4c7,	// (0x00021a3d) soft_indicator_pane_t1

0xc4e1,	// (0x00021a57) aid_ps_area_pane

0x9813,	// (0x0001ed89) aid_ps_clock_pane

0xc4f2,	// (0x00021a68) aid_ps_indicator_pane

0xc4fe,	// (0x00021a74) indicator_ps_pane_ParamLimits

0xc4fe,	// (0x00021a74) indicator_ps_pane

0xc50d,	// (0x00021a83) power_save_pane_g1_ParamLimits

0xc50d,	// (0x00021a83) power_save_pane_g1

0xc519,	// (0x00021a8f) power_save_pane_g2_ParamLimits

0xc519,	// (0x00021a8f) power_save_pane_g2

0xe2e0,	// (0x00023856) aid_navinavi_width_pane

0xc4e1,	// (0x00021a57) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00024abb) power_save_pane_g_ParamLimits

0xf545,	// (0x00024abb) power_save_pane_g

0xc527,	// (0x00021a9d) power_save_pane_t1_ParamLimits

0xc527,	// (0x00021a9d) power_save_pane_t1

0x9813,	// (0x0001ed89) aid_ps_clock_pane_ParamLimits

0xc4f2,	// (0x00021a68) aid_ps_indicator_pane_ParamLimits

0xc539,	// (0x00021aaf) power_save_pane_t4_ParamLimits

0xc539,	// (0x00021aaf) power_save_pane_t4

0x0001,

0xf54a,	// (0x00024ac0) power_save_pane_t_ParamLimits

0xf54a,	// (0x00024ac0) power_save_pane_t

0xc563,	// (0x00021ad9) power_save_t3_ParamLimits

0xc563,	// (0x00021ad9) power_save_t3

0xc54e,	// (0x00021ac4) power_save_t2_ParamLimits

0xc54e,	// (0x00021ac4) power_save_t2

0xc578,	// (0x00021aee) indicator_ps_pane_g1

0x9821,	// (0x0001ed97) ai_gene_pane_ParamLimits

0x9821,	// (0x0001ed97) ai_gene_pane

0x9838,	// (0x0001edae) ai_links_pane_ParamLimits

0x9838,	// (0x0001edae) ai_links_pane

0x9850,	// (0x0001edc6) indicator_pane_cp1_ParamLimits

0x9850,	// (0x0001edc6) indicator_pane_cp1

0x985f,	// (0x0001edd5) main_pane_idle_g1_cp_ParamLimits

0x985f,	// (0x0001edd5) main_pane_idle_g1_cp

0x9877,	// (0x0001eded) popup_ai_links_title_window

0x9880,	// (0x0001edf6) soft_indicator_pane_cp1_ParamLimits

0x9880,	// (0x0001edf6) soft_indicator_pane_cp1

0x23d2,	// (0x00017948) ai_links_pane_g1

0x23db,	// (0x00017951) grid_ai_links_pane

0xb0e8,	// (0x0002065e) ai_gene_pane_1

0x23c0,	// (0x00017936) ai_gene_pane_2

0x23c9,	// (0x0001793f) list_highlight_pane_cp4

0xb0c4,	// (0x0002063a) cell_ai_link_pane_ParamLimits

0xb0c4,	// (0x0002063a) cell_ai_link_pane

0x2391,	// (0x00017907) cell_ai_link_pane_g1

0xc6a5,	// (0x00021c1b) cell_ai_link_pane_g2

0x0001,

0xf8d2,	// (0x00024e48) cell_ai_link_pane_g

0xc3fe,	// (0x00021974) grid_highlight_cp2

0xc3fe,	// (0x00021974) bg_popup_sub_pane_cp1

0xc58f,	// (0x00021b05) popup_ai_links_title_window_t1

0x22e1,	// (0x00017857) ai_gene_pane_1_g1_ParamLimits

0x22e1,	// (0x00017857) ai_gene_pane_1_g1

0x22ed,	// (0x00017863) ai_gene_pane_1_g2_ParamLimits

0x22ed,	// (0x00017863) ai_gene_pane_1_g2

0x0001,

0xf8c8,	// (0x00024e3e) ai_gene_pane_1_g_ParamLimits

0xf8c8,	// (0x00024e3e) ai_gene_pane_1_g

0x22fa,	// (0x00017870) ai_gene_pane_1_t1_ParamLimits

0x22fa,	// (0x00017870) ai_gene_pane_1_t1

0x232e,	// (0x000178a4) grid_ai_soft_ind_pane

0x22cc,	// (0x00017842) ai_gene_pane_2_t1_ParamLimits

0x22cc,	// (0x00017842) ai_gene_pane_2_t1

0x9894,	// (0x0001ee0a) main_pane_empty_t1_ParamLimits

0x9894,	// (0x0001ee0a) main_pane_empty_t1

0x98ac,	// (0x0001ee22) main_pane_empty_t2_ParamLimits

0x98ac,	// (0x0001ee22) main_pane_empty_t2

0x98c1,	// (0x0001ee37) main_pane_empty_t3_ParamLimits

0x98c1,	// (0x0001ee37) main_pane_empty_t3

0x98d3,	// (0x0001ee49) main_pane_empty_t4_ParamLimits

0x98d3,	// (0x0001ee49) main_pane_empty_t4

0x98e5,	// (0x0001ee5b) main_pane_empty_t5_ParamLimits

0x98e5,	// (0x0001ee5b) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00024ac5) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00024ac5) main_pane_empty_t

0xc9df,	// (0x00021f55) bg_popup_window_pane_ParamLimits

0xc9df,	// (0x00021f55) bg_popup_window_pane

0xb03e,	// (0x000205b4) find_popup_pane_cp2_ParamLimits

0xb03e,	// (0x000205b4) find_popup_pane_cp2

0x2048,	// (0x000175be) heading_pane_ParamLimits

0x2048,	// (0x000175be) heading_pane

0xc3fe,	// (0x00021974) bg_popup_sub_pane

0xafbf,	// (0x00020535) bg_popup_window_pane_g1_ParamLimits

0xafbf,	// (0x00020535) bg_popup_window_pane_g1

0xafce,	// (0x00020544) bg_popup_window_pane_g2_ParamLimits

0xafce,	// (0x00020544) bg_popup_window_pane_g2

0xafda,	// (0x00020550) bg_popup_window_pane_g3_ParamLimits

0xafda,	// (0x00020550) bg_popup_window_pane_g3

0xafe6,	// (0x0002055c) bg_popup_window_pane_g4_ParamLimits

0xafe6,	// (0x0002055c) bg_popup_window_pane_g4

0xaff5,	// (0x0002056b) bg_popup_window_pane_g5_ParamLimits

0xaff5,	// (0x0002056b) bg_popup_window_pane_g5

0xb005,	// (0x0002057b) bg_popup_window_pane_g6_ParamLimits

0xb005,	// (0x0002057b) bg_popup_window_pane_g6

0xb011,	// (0x00020587) bg_popup_window_pane_g7_ParamLimits

0xb011,	// (0x00020587) bg_popup_window_pane_g7

0xb020,	// (0x00020596) bg_popup_window_pane_g8_ParamLimits

0xb020,	// (0x00020596) bg_popup_window_pane_g8

0xb02f,	// (0x000205a5) bg_popup_window_pane_g9_ParamLimits

0xb02f,	// (0x000205a5) bg_popup_window_pane_g9

0x2022,	// (0x00017598) bg_popup_window_pane_g10_ParamLimits

0x2022,	// (0x00017598) bg_popup_window_pane_g10

0x0009,

0xf890,	// (0x00024e06) bg_popup_window_pane_g_ParamLimits

0xf890,	// (0x00024e06) bg_popup_window_pane_g

0x1f4b,	// (0x000174c1) bg_popup_heading_pane_ParamLimits

0x1f4b,	// (0x000174c1) bg_popup_heading_pane

0xea8e,	// (0x00024004) tabs_4_passive_pane_cp_srt_ParamLimits

0xea8e,	// (0x00024004) tabs_4_passive_pane_cp_srt

0xeaa0,	// (0x00024016) tabs_4_passive_pane_srt_ParamLimits

0x1f5f,	// (0x000174d5) heading_pane_g2

0xeaa0,	// (0x00024016) tabs_4_passive_pane_srt

0x1294,	// (0x0001680a) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1294,	// (0x0001680a) bg_passive_tab_pane_cp3_srt

0x1f67,	// (0x000174dd) heading_pane_t1_ParamLimits

0x1f67,	// (0x000174dd) heading_pane_t1

0x1f7e,	// (0x000174f4) heading_pane_t2_ParamLimits

0x1f7e,	// (0x000174f4) heading_pane_t2

0x0001,

0xf88b,	// (0x00024e01) heading_pane_t_ParamLimits

0xf88b,	// (0x00024e01) heading_pane_t

0x1a88,	// (0x00016ffe) bg_popup_heading_pane_g1

0x1b37,	// (0x000170ad) bg_popup_heading_pane_g2

0x1b41,	// (0x000170b7) bg_popup_heading_pane_g3

0x1b4b,	// (0x000170c1) bg_popup_heading_pane_g4

0x1b55,	// (0x000170cb) bg_popup_heading_pane_g5

0x1b5f,	// (0x000170d5) bg_popup_heading_pane_g6

0x1b67,	// (0x000170dd) bg_popup_heading_pane_g7

0x1b6f,	// (0x000170e5) bg_popup_heading_pane_g8

0x1b79,	// (0x000170ef) bg_popup_heading_pane_g9

0x0008,

0xf847,	// (0x00024dbd) bg_popup_heading_pane_g

0x1174,	// (0x000166ea) bg_popup_sub_pane_g1

0x1184,	// (0x000166fa) bg_popup_sub_pane_g2

0x117c,	// (0x000166f2) bg_popup_sub_pane_g3

0x1194,	// (0x0001670a) bg_popup_sub_pane_g4

0x118c,	// (0x00016702) bg_popup_sub_pane_g5

0x119c,	// (0x00016712) bg_popup_sub_pane_g6

0x11a4,	// (0x0001671a) bg_popup_sub_pane_g7

0x11b4,	// (0x0001672a) bg_popup_sub_pane_g8

0x11ac,	// (0x00016722) bg_popup_sub_pane_g9

0x0008,

0xf821,	// (0x00024d97) bg_popup_sub_pane_g

0xc44c,	// (0x000219c2) bg_popup_window_pane_cp5_ParamLimits

0xc44c,	// (0x000219c2) bg_popup_window_pane_cp5

0xc5ac,	// (0x00021b22) popup_note_window_g1_ParamLimits

0xc5ac,	// (0x00021b22) popup_note_window_g1

0xc5b8,	// (0x00021b2e) popup_note_window_t1_ParamLimits

0xc5b8,	// (0x00021b2e) popup_note_window_t1

0xc5ce,	// (0x00021b44) popup_note_window_t2_ParamLimits

0xc5ce,	// (0x00021b44) popup_note_window_t2

0xc5e4,	// (0x00021b5a) popup_note_window_t3_ParamLimits

0xc5e4,	// (0x00021b5a) popup_note_window_t3

0xc5fa,	// (0x00021b70) popup_note_window_t4_ParamLimits

0xc5fa,	// (0x00021b70) popup_note_window_t4

0xc622,	// (0x00021b98) popup_note_window_t5_ParamLimits

0xc622,	// (0x00021b98) popup_note_window_t5

0x0004,

0xf55a,	// (0x00024ad0) popup_note_window_t_ParamLimits

0xf55a,	// (0x00024ad0) popup_note_window_t

0xc646,	// (0x00021bbc) bg_popup_window_pane_cp6_ParamLimits

0xc646,	// (0x00021bbc) bg_popup_window_pane_cp6

0x1a04,	// (0x00016f7a) popup_note_image_window_g1_ParamLimits

0x1a04,	// (0x00016f7a) popup_note_image_window_g1

0xae64,	// (0x000203da) popup_note_image_window_g2_ParamLimits

0xae64,	// (0x000203da) popup_note_image_window_g2

0x0001,

0xf815,	// (0x00024d8b) popup_note_image_window_g_ParamLimits

0xf815,	// (0x00024d8b) popup_note_image_window_g

0x1a29,	// (0x00016f9f) popup_note_image_window_t1_ParamLimits

0x1a29,	// (0x00016f9f) popup_note_image_window_t1

0x1a42,	// (0x00016fb8) popup_note_image_window_t2_ParamLimits

0x1a42,	// (0x00016fb8) popup_note_image_window_t2

0x1a5b,	// (0x00016fd1) popup_note_image_window_t3_ParamLimits

0x1a5b,	// (0x00016fd1) popup_note_image_window_t3

0x0002,

0xf81a,	// (0x00024d90) popup_note_image_window_t_ParamLimits

0xf81a,	// (0x00024d90) popup_note_image_window_t

0x18cd,	// (0x00016e43) bg_popup_window_pane_cp7_ParamLimits

0x18cd,	// (0x00016e43) bg_popup_window_pane_cp7

0x18fd,	// (0x00016e73) popup_note_wait_window_g1_ParamLimits

0x18fd,	// (0x00016e73) popup_note_wait_window_g1

0x1909,	// (0x00016e7f) popup_note_wait_window_g2_ParamLimits

0x1909,	// (0x00016e7f) popup_note_wait_window_g2

0x0002,

0xf803,	// (0x00024d79) popup_note_wait_window_g_ParamLimits

0xf803,	// (0x00024d79) popup_note_wait_window_g

0x1921,	// (0x00016e97) popup_note_wait_window_t1_ParamLimits

0x1921,	// (0x00016e97) popup_note_wait_window_t1

0xae05,	// (0x0002037b) popup_note_wait_window_t2_ParamLimits

0xae05,	// (0x0002037b) popup_note_wait_window_t2

0xae22,	// (0x00020398) popup_note_wait_window_t3_ParamLimits

0xae22,	// (0x00020398) popup_note_wait_window_t3

0xae35,	// (0x000203ab) popup_note_wait_window_t4_ParamLimits

0xae35,	// (0x000203ab) popup_note_wait_window_t4

0x0004,

0xf80a,	// (0x00024d80) popup_note_wait_window_t_ParamLimits

0xf80a,	// (0x00024d80) popup_note_wait_window_t

0x199d,	// (0x00016f13) wait_bar_pane_ParamLimits

0x199d,	// (0x00016f13) wait_bar_pane

0xc3fe,	// (0x00021974) wait_anim_pane

0xc3fe,	// (0x00021974) wait_border_pane

0xc3f4,	// (0x0002196a) wait_anim_pane_g1

0xc3f4,	// (0x0002196a) wait_anim_pane_g2

0x0001,

0xf6ca,	// (0x00024c40) wait_anim_pane_g

0x1879,	// (0x00016def) wait_border_pane_g1

0x1884,	// (0x00016dfa) wait_border_pane_g2

0x188d,	// (0x00016e03) wait_border_pane_g3

0x0002,

0xf7fc,	// (0x00024d72) wait_border_pane_g

0x16e4,	// (0x00016c5a) bg_popup_window_pane_cp16_ParamLimits

0x16e4,	// (0x00016c5a) bg_popup_window_pane_cp16

0xadb5,	// (0x0002032b) indicator_popup_pane_cp4_ParamLimits

0xadb5,	// (0x0002032b) indicator_popup_pane_cp4

0x17f8,	// (0x00016d6e) popup_query_data_window_t1_ParamLimits

0x17f8,	// (0x00016d6e) popup_query_data_window_t1

0x180a,	// (0x00016d80) popup_query_data_window_t2_ParamLimits

0x180a,	// (0x00016d80) popup_query_data_window_t2

0x1823,	// (0x00016d99) popup_query_data_window_t3_ParamLimits

0x1823,	// (0x00016d99) popup_query_data_window_t3

0x0002,

0xf7f5,	// (0x00024d6b) popup_query_data_window_t_ParamLimits

0xf7f5,	// (0x00024d6b) popup_query_data_window_t

0xadc9,	// (0x0002033f) query_popup_data_pane_ParamLimits

0xadc9,	// (0x0002033f) query_popup_data_pane

0xaddd,	// (0x00020353) query_popup_data_pane_cp1_ParamLimits

0xaddd,	// (0x00020353) query_popup_data_pane_cp1

0x16e4,	// (0x00016c5a) bg_popup_window_pane_cp10_ParamLimits

0x16e4,	// (0x00016c5a) bg_popup_window_pane_cp10

0xad30,	// (0x000202a6) indicator_popup_pane_ParamLimits

0xad30,	// (0x000202a6) indicator_popup_pane

0xad52,	// (0x000202c8) popup_query_code_window_t1_ParamLimits

0xad52,	// (0x000202c8) popup_query_code_window_t1

0xad6c,	// (0x000202e2) popup_query_code_window_t2_ParamLimits

0xad6c,	// (0x000202e2) popup_query_code_window_t2

0x179b,	// (0x00016d11) popup_query_code_window_t3_ParamLimits

0x179b,	// (0x00016d11) popup_query_code_window_t3

0x0002,

0xf7ee,	// (0x00024d64) popup_query_code_window_t_ParamLimits

0xf7ee,	// (0x00024d64) popup_query_code_window_t

0x17ca,	// (0x00016d40) query_popup_pane_ParamLimits

0x17ca,	// (0x00016d40) query_popup_pane

0xc646,	// (0x00021bbc) bg_popup_window_pane_cp15_ParamLimits

0xc646,	// (0x00021bbc) bg_popup_window_pane_cp15

0x991d,	// (0x0001ee93) indicator_popup_pane_cp1_ParamLimits

0x991d,	// (0x0001ee93) indicator_popup_pane_cp1

0x9930,	// (0x0001eea6) indicator_popup_pane_cp2_ParamLimits

0x9930,	// (0x0001eea6) indicator_popup_pane_cp2

0x9943,	// (0x0001eeb9) popup_query_data_code_window_g1_ParamLimits

0x9943,	// (0x0001eeb9) popup_query_data_code_window_g1

0xc664,	// (0x00021bda) popup_query_data_code_window_t1_ParamLimits

0xc664,	// (0x00021bda) popup_query_data_code_window_t1

0xc676,	// (0x00021bec) popup_query_data_code_window_t2_ParamLimits

0xc676,	// (0x00021bec) popup_query_data_code_window_t2

0x9956,	// (0x0001eecc) popup_query_data_code_window_t3_ParamLimits

0x9956,	// (0x0001eecc) popup_query_data_code_window_t3

0x996c,	// (0x0001eee2) popup_query_data_code_window_t4_ParamLimits

0x996c,	// (0x0001eee2) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00024adb) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00024adb) popup_query_data_code_window_t

0xe8a0,	// (0x00023e16) list_single_midp_graphic_pane_g3

0x9984,	// (0x0001eefa) query_popup_data_pane_cp2_ParamLimits

0x9997,	// (0x0001ef0d) query_popup_pane_cp2_ParamLimits

0x9997,	// (0x0001ef0d) query_popup_pane_cp2

0xc3fe,	// (0x00021974) bg_popup_window_pane_cp11

0x16c8,	// (0x00016c3e) heading_pane_cp5

0x16d0,	// (0x00016c46) listscroll_popup_info_pane

0xc3fe,	// (0x00021974) input_focus_pane_cp3

0xc688,	// (0x00021bfe) query_popup_pane_t1

0xc696,	// (0x00021c0c) list_popup_info_pane_ParamLimits

0xc696,	// (0x00021c0c) list_popup_info_pane

0xc6a5,	// (0x00021c1b) listscroll_popup_info_pane_g1

0xc6ad,	// (0x00021c23) scroll_pane_cp7

0x99aa,	// (0x0001ef20) popup_info_list_pane_t1_ParamLimits

0x99aa,	// (0x0001ef20) popup_info_list_pane_t1

0x99c4,	// (0x0001ef3a) popup_info_list_pane_t2_ParamLimits

0x99c4,	// (0x0001ef3a) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00024ae4) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00024ae4) popup_info_list_pane_t

0xc3fe,	// (0x00021974) bg_popup_window_pane_cp12

0xb51e,	// (0x00020a94) find_popup_pane

0xc45a,	// (0x000219d0) bg_popup_window_pane_cp3

0xc6b7,	// (0x00021c2d) heading_pane_cp3

0xc6c6,	// (0x00021c3c) listscroll_popup_graphic_pane

0xc3fe,	// (0x00021974) bg_popup_window_pane_cp4

0x9a2e,	// (0x0001efa4) heading_pane_cp4

0xc6d6,	// (0x00021c4c) listscroll_popup_colour_pane

0x9a38,	// (0x0001efae) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9a38,	// (0x0001efae) cell_large_graphic_colour_none_popup_pane

0x9a4c,	// (0x0001efc2) grid_large_graphic_colour_popup_pane_ParamLimits

0x9a4c,	// (0x0001efc2) grid_large_graphic_colour_popup_pane

0x9a70,	// (0x0001efe6) listscroll_popup_colour_pane_g1_ParamLimits

0x9a70,	// (0x0001efe6) listscroll_popup_colour_pane_g1

0x9a87,	// (0x0001effd) listscroll_popup_colour_pane_g2_ParamLimits

0x9a87,	// (0x0001effd) listscroll_popup_colour_pane_g2

0x9a9b,	// (0x0001f011) listscroll_popup_colour_pane_g3_ParamLimits

0x9a9b,	// (0x0001f011) listscroll_popup_colour_pane_g3

0x9aab,	// (0x0001f021) listscroll_popup_colour_pane_g4_ParamLimits

0x9aab,	// (0x0001f021) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00024ae9) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00024ae9) listscroll_popup_colour_pane_g

0xc6de,	// (0x00021c54) scroll_pane_cp6_ParamLimits

0xc6de,	// (0x00021c54) scroll_pane_cp6

0x9abb,	// (0x0001f031) cell_large_graphic_colour_popup_pane_ParamLimits

0x9abb,	// (0x0001f031) cell_large_graphic_colour_popup_pane

0x9ada,	// (0x0001f050) cell_large_graphic_colour_none_popup_pane_t1

0xc3fe,	// (0x00021974) grid_highlight_pane_cp5

0xc6f0,	// (0x00021c66) cell_large_graphic_colour_popup_pane_g1

0xc6f8,	// (0x00021c6e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00024af2) cell_large_graphic_colour_popup_pane_g

0xc700,	// (0x00021c76) cell_large_graphic_colour_popup_pane_g2_copy1

0xc709,	// (0x00021c7f) grid_highlight_pane_cp4

0xc711,	// (0x00021c87) bg_popup_window_pane_cp8_ParamLimits

0xc711,	// (0x00021c87) bg_popup_window_pane_cp8

0x9ae9,	// (0x0001f05f) popup_snote_single_text_window_g1_ParamLimits

0x9ae9,	// (0x0001f05f) popup_snote_single_text_window_g1

0x9afb,	// (0x0001f071) popup_snote_single_text_window_t1_ParamLimits

0x9afb,	// (0x0001f071) popup_snote_single_text_window_t1

0x9b0e,	// (0x0001f084) popup_snote_single_text_window_t2_ParamLimits

0x9b0e,	// (0x0001f084) popup_snote_single_text_window_t2

0x9b21,	// (0x0001f097) popup_snote_single_text_window_t3_ParamLimits

0x9b21,	// (0x0001f097) popup_snote_single_text_window_t3

0x9b5a,	// (0x0001f0d0) popup_snote_single_text_window_t4_ParamLimits

0x9b5a,	// (0x0001f0d0) popup_snote_single_text_window_t4

0x9b8e,	// (0x0001f104) popup_snote_single_text_window_t5_ParamLimits

0x9b8e,	// (0x0001f104) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00024af7) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00024af7) popup_snote_single_text_window_t

0xc72c,	// (0x00021ca2) bg_popup_window_pane_cp9_ParamLimits

0xc72c,	// (0x00021ca2) bg_popup_window_pane_cp9

0x9ae9,	// (0x0001f05f) popup_snote_single_graphic_window_g1_ParamLimits

0x9ae9,	// (0x0001f05f) popup_snote_single_graphic_window_g1

0xc73a,	// (0x00021cb0) popup_snote_single_graphic_window_g2_ParamLimits

0xc73a,	// (0x00021cb0) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00024b02) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00024b02) popup_snote_single_graphic_window_g

0xc746,	// (0x00021cbc) popup_snote_single_graphic_window_t1_ParamLimits

0xc746,	// (0x00021cbc) popup_snote_single_graphic_window_t1

0xc759,	// (0x00021ccf) popup_snote_single_graphic_window_t2_ParamLimits

0xc759,	// (0x00021ccf) popup_snote_single_graphic_window_t2

0x9b21,	// (0x0001f097) popup_snote_single_graphic_window_t3_ParamLimits

0x9b21,	// (0x0001f097) popup_snote_single_graphic_window_t3

0x9b5a,	// (0x0001f0d0) popup_snote_single_graphic_window_t4_ParamLimits

0x9b5a,	// (0x0001f0d0) popup_snote_single_graphic_window_t4

0x9bbd,	// (0x0001f133) popup_snote_single_graphic_window_t5_ParamLimits

0x9bbd,	// (0x0001f133) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00024b07) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00024b07) popup_snote_single_graphic_window_t

0x2a6a,	// (0x00017fe0) grid_graphic_popup_pane_ParamLimits

0x2a6a,	// (0x00017fe0) grid_graphic_popup_pane

0x2a94,	// (0x0001800a) listscroll_popup_graphic_pane_g1_ParamLimits

0x2a94,	// (0x0001800a) listscroll_popup_graphic_pane_g1

0xb4bc,	// (0x00020a32) listscroll_popup_graphic_pane_g2_ParamLimits

0xb4bc,	// (0x00020a32) listscroll_popup_graphic_pane_g2

0x0001,

0xf96b,	// (0x00024ee1) listscroll_popup_graphic_pane_g_ParamLimits

0xf96b,	// (0x00024ee1) listscroll_popup_graphic_pane_g

0x2abc,	// (0x00018032) scroll_pane_cp5

0xb47b,	// (0x000209f1) cell_graphic_popup_pane_ParamLimits

0xb47b,	// (0x000209f1) cell_graphic_popup_pane

0x29e1,	// (0x00017f57) cell_graphic_popup_pane_g1

0x29e9,	// (0x00017f5f) cell_graphic_popup_pane_g2

0xc700,	// (0x00021c76) cell_graphic_popup_pane_g3

0x0002,

0xf964,	// (0x00024eda) cell_graphic_popup_pane_g

0x29f2,	// (0x00017f68) cell_graphic_popup_pane_t2

0xc709,	// (0x00021c7f) grid_highlight_pane_cp3

0xc77e,	// (0x00021cf4) list_gen_pane_ParamLimits

0xc77e,	// (0x00021cf4) list_gen_pane

0xc7a6,	// (0x00021d1c) scroll_pane

0xb3e5,	// (0x0002095b) bg_list_pane_g1_ParamLimits

0xb3e5,	// (0x0002095b) bg_list_pane_g1

0xb400,	// (0x00020976) bg_list_pane_g2_ParamLimits

0xb400,	// (0x00020976) bg_list_pane_g2

0xb413,	// (0x00020989) bg_list_pane_g3_ParamLimits

0xb413,	// (0x00020989) bg_list_pane_g3

0xb425,	// (0x0002099b) bg_list_pane_g4_ParamLimits

0xb425,	// (0x0002099b) bg_list_pane_g4

0xb437,	// (0x000209ad) bg_list_pane_g5_ParamLimits

0xb437,	// (0x000209ad) bg_list_pane_g5

0x0004,

0xf959,	// (0x00024ecf) bg_list_pane_g_ParamLimits

0xf959,	// (0x00024ecf) bg_list_pane_g

0xb388,	// (0x000208fe) list_double2_graphic_large_graphic_pane_ParamLimits

0xb388,	// (0x000208fe) list_double2_graphic_large_graphic_pane

0xb388,	// (0x000208fe) list_double2_graphic_pane_ParamLimits

0xb388,	// (0x000208fe) list_double2_graphic_pane

0xb388,	// (0x000208fe) list_double2_large_graphic_pane_ParamLimits

0xb388,	// (0x000208fe) list_double2_large_graphic_pane

0xb39b,	// (0x00020911) list_double2_pane_ParamLimits

0xb39b,	// (0x00020911) list_double2_pane

0xb388,	// (0x000208fe) list_double_graphic_heading_pane_ParamLimits

0xb388,	// (0x000208fe) list_double_graphic_heading_pane

0xb388,	// (0x000208fe) list_double_graphic_pane_ParamLimits

0xb388,	// (0x000208fe) list_double_graphic_pane

0xb388,	// (0x000208fe) list_double_heading_pane_ParamLimits

0xb388,	// (0x000208fe) list_double_heading_pane

0xb388,	// (0x000208fe) list_double_large_graphic_pane_ParamLimits

0xb388,	// (0x000208fe) list_double_large_graphic_pane

0xb388,	// (0x000208fe) list_double_number_pane_ParamLimits

0xb388,	// (0x000208fe) list_double_number_pane

0xb388,	// (0x000208fe) list_double_pane_ParamLimits

0xb388,	// (0x000208fe) list_double_pane

0xb388,	// (0x000208fe) list_double_time_pane_ParamLimits

0xb388,	// (0x000208fe) list_double_time_pane

0xb388,	// (0x000208fe) list_setting_number_pane_ParamLimits

0xb388,	// (0x000208fe) list_setting_number_pane

0xb388,	// (0x000208fe) list_setting_pane_ParamLimits

0xb388,	// (0x000208fe) list_setting_pane

0xa182,	// (0x0001f6f8) list_single_2graphic_pane_ParamLimits

0xa182,	// (0x0001f6f8) list_single_2graphic_pane

0xa182,	// (0x0001f6f8) list_single_graphic_heading_pane_ParamLimits

0xa182,	// (0x0001f6f8) list_single_graphic_heading_pane

0xa182,	// (0x0001f6f8) list_single_graphic_pane_ParamLimits

0xa182,	// (0x0001f6f8) list_single_graphic_pane

0xa182,	// (0x0001f6f8) list_single_heading_pane_ParamLimits

0xa182,	// (0x0001f6f8) list_single_heading_pane

0xb388,	// (0x000208fe) list_single_large_graphic_pane_ParamLimits

0xb388,	// (0x000208fe) list_single_large_graphic_pane

0xa182,	// (0x0001f6f8) list_single_number_heading_pane_ParamLimits

0xa182,	// (0x0001f6f8) list_single_number_heading_pane

0xa182,	// (0x0001f6f8) list_single_number_pane_ParamLimits

0xa182,	// (0x0001f6f8) list_single_number_pane

0xa182,	// (0x0001f6f8) list_single_pane_ParamLimits

0xa182,	// (0x0001f6f8) list_single_pane

0xc3fe,	// (0x00021974) list_highlight_pane_cp1

0xc7da,	// (0x00021d50) list_single_pane_g1_ParamLimits

0xc7da,	// (0x00021d50) list_single_pane_g1

0x10f6,	// (0x0001666c) list_single_pane_g2_ParamLimits

0x10f6,	// (0x0001666c) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00024b19) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00024b19) list_single_pane_g

0x470a,	// (0x00019c80) list_single_pane_t1_ParamLimits

0x470a,	// (0x00019c80) list_single_pane_t1

0xc7da,	// (0x00021d50) list_single_number_pane_g1_ParamLimits

0xc7da,	// (0x00021d50) list_single_number_pane_g1

0x10f6,	// (0x0001666c) list_single_number_pane_g2_ParamLimits

0x10f6,	// (0x0001666c) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00024b19) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00024b19) list_single_number_pane_g

0x1102,	// (0x00016678) list_single_number_pane_t1_ParamLimits

0x1102,	// (0x00016678) list_single_number_pane_t1

0xb194,	// (0x0002070a) list_single_number_pane_t2_ParamLimits

0xb194,	// (0x0002070a) list_single_number_pane_t2

0x0001,

0xf91a,	// (0x00024e90) list_single_number_pane_t_ParamLimits

0xf91a,	// (0x00024e90) list_single_number_pane_t

0x10ea,	// (0x00016660) list_single_graphic_pane_g1_ParamLimits

0x10ea,	// (0x00016660) list_single_graphic_pane_g1

0xc7da,	// (0x00021d50) list_single_graphic_pane_g2_ParamLimits

0xc7da,	// (0x00021d50) list_single_graphic_pane_g2

0x10f6,	// (0x0001666c) list_single_graphic_pane_g3_ParamLimits

0x10f6,	// (0x0001666c) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00024b12) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00024b12) list_single_graphic_pane_g

0x1102,	// (0x00016678) list_single_graphic_pane_t1_ParamLimits

0x1102,	// (0x00016678) list_single_graphic_pane_t1

0xc7da,	// (0x00021d50) list_single_heading_pane_g1_ParamLimits

0xc7da,	// (0x00021d50) list_single_heading_pane_g1

0x10f6,	// (0x0001666c) list_single_heading_pane_g2_ParamLimits

0x10f6,	// (0x0001666c) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00024b19) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00024b19) list_single_heading_pane_g

0x30bf,	// (0x00018635) list_single_heading_pane_t1_ParamLimits

0x30bf,	// (0x00018635) list_single_heading_pane_t1

0x9bf6,	// (0x0001f16c) list_single_heading_pane_t2_ParamLimits

0x9bf6,	// (0x0001f16c) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00024b1e) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00024b1e) list_single_heading_pane_t

0xc7da,	// (0x00021d50) list_single_number_heading_pane_g1_ParamLimits

0xc7da,	// (0x00021d50) list_single_number_heading_pane_g1

0x10f6,	// (0x0001666c) list_single_number_heading_pane_g2_ParamLimits

0x10f6,	// (0x0001666c) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00024b19) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00024b19) list_single_number_heading_pane_g

0x30bf,	// (0x00018635) list_single_number_heading_pane_t1_ParamLimits

0x30bf,	// (0x00018635) list_single_number_heading_pane_t1

0x9c08,	// (0x0001f17e) list_single_number_heading_pane_t2_ParamLimits

0x9c08,	// (0x0001f17e) list_single_number_heading_pane_t2

0x9c1a,	// (0x0001f190) list_single_number_heading_pane_t3_ParamLimits

0x9c1a,	// (0x0001f190) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00024b23) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00024b23) list_single_number_heading_pane_t

0x9c2c,	// (0x0001f1a2) list_single_graphic_heading_pane_g1_ParamLimits

0x9c2c,	// (0x0001f1a2) list_single_graphic_heading_pane_g1

0x9c38,	// (0x0001f1ae) list_single_graphic_heading_pane_g4_ParamLimits

0x9c38,	// (0x0001f1ae) list_single_graphic_heading_pane_g4

0x10f6,	// (0x0001666c) list_single_graphic_heading_pane_g5_ParamLimits

0x10f6,	// (0x0001666c) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00024b2a) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00024b2a) list_single_graphic_heading_pane_g

0x30bf,	// (0x00018635) list_single_graphic_heading_pane_t1_ParamLimits

0x30bf,	// (0x00018635) list_single_graphic_heading_pane_t1

0x9c49,	// (0x0001f1bf) list_single_graphic_heading_pane_t2_ParamLimits

0x9c49,	// (0x0001f1bf) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00024b31) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00024b31) list_single_graphic_heading_pane_t

0x3133,	// (0x000186a9) list_single_large_graphic_pane_g1_ParamLimits

0x3133,	// (0x000186a9) list_single_large_graphic_pane_g1

0x313f,	// (0x000186b5) list_single_large_graphic_pane_g2_ParamLimits

0x313f,	// (0x000186b5) list_single_large_graphic_pane_g2

0x314b,	// (0x000186c1) list_single_large_graphic_pane_g3_ParamLimits

0x314b,	// (0x000186c1) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00024b36) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00024b36) list_single_large_graphic_pane_g

0x1884,	// (0x00016dfa) wait_border_pane_g2_copy1

0x9c5b,	// (0x0001f1d1) list_single_large_graphic_pane_g4_cp2

0x3157,	// (0x000186cd) list_single_large_graphic_pane_t1_ParamLimits

0x3157,	// (0x000186cd) list_single_large_graphic_pane_t1

0xc7e6,	// (0x00021d5c) list_double_pane_g1_ParamLimits

0xc7e6,	// (0x00021d5c) list_double_pane_g1

0xc7f2,	// (0x00021d68) list_double_pane_g2_ParamLimits

0xc7f2,	// (0x00021d68) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00024b3d) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00024b3d) list_double_pane_g

0x9c63,	// (0x0001f1d9) list_double_pane_t1_ParamLimits

0x9c63,	// (0x0001f1d9) list_double_pane_t1

0x9c79,	// (0x0001f1ef) list_double_pane_t2_ParamLimits

0x9c79,	// (0x0001f1ef) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00024b42) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00024b42) list_double_pane_t

0x9c8b,	// (0x0001f201) list_double2_pane_g1_ParamLimits

0x9c8b,	// (0x0001f201) list_double2_pane_g1

0x9c9c,	// (0x0001f212) list_double2_pane_g2_ParamLimits

0x9c9c,	// (0x0001f212) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00024b47) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00024b47) list_double2_pane_g

0x9ca8,	// (0x0001f21e) list_double2_pane_t1_ParamLimits

0x9ca8,	// (0x0001f21e) list_double2_pane_t1

0x9cbe,	// (0x0001f234) list_double2_pane_t2_ParamLimits

0x9cbe,	// (0x0001f234) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00024b4c) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00024b4c) list_double2_pane_t

0xc7e6,	// (0x00021d5c) list_double_number_pane_g1_ParamLimits

0xc7e6,	// (0x00021d5c) list_double_number_pane_g1

0xc7f2,	// (0x00021d68) list_double_number_pane_g2_ParamLimits

0xc7f2,	// (0x00021d68) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00024b3d) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00024b3d) list_double_number_pane_g

0x9cd0,	// (0x0001f246) list_double_number_pane_t1_ParamLimits

0x9cd0,	// (0x0001f246) list_double_number_pane_t1

0x9ce2,	// (0x0001f258) list_double_number_pane_t2_ParamLimits

0x9ce2,	// (0x0001f258) list_double_number_pane_t2

0x9cf8,	// (0x0001f26e) list_double_number_pane_t3_ParamLimits

0x9cf8,	// (0x0001f26e) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00024b51) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00024b51) list_double_number_pane_t

0x9d0a,	// (0x0001f280) list_double_graphic_pane_g1_ParamLimits

0x9d0a,	// (0x0001f280) list_double_graphic_pane_g1

0x9d16,	// (0x0001f28c) list_double_graphic_pane_g2_ParamLimits

0x9d16,	// (0x0001f28c) list_double_graphic_pane_g2

0x9d25,	// (0x0001f29b) list_double_graphic_pane_g3_ParamLimits

0x9d25,	// (0x0001f29b) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00024b58) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00024b58) list_double_graphic_pane_g

0x9c63,	// (0x0001f1d9) list_double_graphic_pane_t1_ParamLimits

0x9c63,	// (0x0001f1d9) list_double_graphic_pane_t1

0x9c79,	// (0x0001f1ef) list_double_graphic_pane_t2_ParamLimits

0x9c79,	// (0x0001f1ef) list_double_graphic_pane_t2

0x0001,

0xf5cc,	// (0x00024b42) list_double_graphic_pane_t_ParamLimits

0xf5cc,	// (0x00024b42) list_double_graphic_pane_t

0x9d3d,	// (0x0001f2b3) list_double2_graphic_pane_g1_ParamLimits

0x9d3d,	// (0x0001f2b3) list_double2_graphic_pane_g1

0x9d49,	// (0x0001f2bf) list_double2_graphic_pane_g2_ParamLimits

0x9d49,	// (0x0001f2bf) list_double2_graphic_pane_g2

0x9d55,	// (0x0001f2cb) list_double2_graphic_pane_g3_ParamLimits

0x9d55,	// (0x0001f2cb) list_double2_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00024b61) list_double2_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00024b61) list_double2_graphic_pane_g

0x9d61,	// (0x0001f2d7) list_double2_graphic_pane_t1_ParamLimits

0x9d61,	// (0x0001f2d7) list_double2_graphic_pane_t1

0x9d77,	// (0x0001f2ed) list_double2_graphic_pane_t2_ParamLimits

0x9d77,	// (0x0001f2ed) list_double2_graphic_pane_t2

0x0001,

0xf5f2,	// (0x00024b68) list_double2_graphic_pane_t_ParamLimits

0xf5f2,	// (0x00024b68) list_double2_graphic_pane_t

0x9d89,	// (0x0001f2ff) list_double_large_graphic_pane_g1_ParamLimits

0x9d89,	// (0x0001f2ff) list_double_large_graphic_pane_g1

0x9da8,	// (0x0001f31e) list_double_large_graphic_pane_g2_ParamLimits

0x9da8,	// (0x0001f31e) list_double_large_graphic_pane_g2

0xc7f2,	// (0x00021d68) list_double_large_graphic_pane_g3_ParamLimits

0xc7f2,	// (0x00021d68) list_double_large_graphic_pane_g3

0x9db9,	// (0x0001f32f) list_double_large_graphic_pane_g4_ParamLimits

0x9db9,	// (0x0001f32f) list_double_large_graphic_pane_g4

0x0004,

0xf5f7,	// (0x00024b6d) list_double_large_graphic_pane_g_ParamLimits

0xf5f7,	// (0x00024b6d) list_double_large_graphic_pane_g

0x9dcb,	// (0x0001f341) list_double_large_graphic_pane_t1_ParamLimits

0x9dcb,	// (0x0001f341) list_double_large_graphic_pane_t1

0x9de4,	// (0x0001f35a) list_double_large_graphic_pane_t2_ParamLimits

0x9de4,	// (0x0001f35a) list_double_large_graphic_pane_t2

0x0001,

0xf602,	// (0x00024b78) list_double_large_graphic_pane_t_ParamLimits

0xf602,	// (0x00024b78) list_double_large_graphic_pane_t

0x9df6,	// (0x0001f36c) list_double2_large_graphic_pane_g1_ParamLimits

0x9df6,	// (0x0001f36c) list_double2_large_graphic_pane_g1

0x9e02,	// (0x0001f378) list_double2_large_graphic_pane_g2_ParamLimits

0x9e02,	// (0x0001f378) list_double2_large_graphic_pane_g2

0x9d55,	// (0x0001f2cb) list_double2_large_graphic_pane_g3_ParamLimits

0x9d55,	// (0x0001f2cb) list_double2_large_graphic_pane_g3

0x0002,

0xf607,	// (0x00024b7d) list_double2_large_graphic_pane_g_ParamLimits

0xf607,	// (0x00024b7d) list_double2_large_graphic_pane_g

0x9d61,	// (0x0001f2d7) list_double2_large_graphic_pane_t1_ParamLimits

0x9d61,	// (0x0001f2d7) list_double2_large_graphic_pane_t1

0x9d77,	// (0x0001f2ed) list_double2_large_graphic_pane_t2_ParamLimits

0x9d77,	// (0x0001f2ed) list_double2_large_graphic_pane_t2

0x0001,

0xf5f2,	// (0x00024b68) list_double2_large_graphic_pane_t_ParamLimits

0xf5f2,	// (0x00024b68) list_double2_large_graphic_pane_t

0x9e13,	// (0x0001f389) list_double_heading_pane_g1_ParamLimits

0x9e13,	// (0x0001f389) list_double_heading_pane_g1

0x9e24,	// (0x0001f39a) list_double_heading_pane_g2_ParamLimits

0x9e24,	// (0x0001f39a) list_double_heading_pane_g2

0x0001,

0xf60e,	// (0x00024b84) list_double_heading_pane_g_ParamLimits

0xf60e,	// (0x00024b84) list_double_heading_pane_g

0x9e30,	// (0x0001f3a6) list_double_heading_pane_t1_ParamLimits

0x9e30,	// (0x0001f3a6) list_double_heading_pane_t1

0x9d77,	// (0x0001f2ed) list_double_heading_pane_t2_ParamLimits

0x9d77,	// (0x0001f2ed) list_double_heading_pane_t2

0x0001,

0xf613,	// (0x00024b89) list_double_heading_pane_t_ParamLimits

0xf613,	// (0x00024b89) list_double_heading_pane_t

0x9e46,	// (0x0001f3bc) list_double_graphic_heading_pane_g1_ParamLimits

0x9e46,	// (0x0001f3bc) list_double_graphic_heading_pane_g1

0x9e13,	// (0x0001f389) list_double_graphic_heading_pane_g2_ParamLimits

0x9e13,	// (0x0001f389) list_double_graphic_heading_pane_g2

0x9e24,	// (0x0001f39a) list_double_graphic_heading_pane_g3_ParamLimits

0x9e24,	// (0x0001f39a) list_double_graphic_heading_pane_g3

0x0002,

0xf618,	// (0x00024b8e) list_double_graphic_heading_pane_g_ParamLimits

0xf618,	// (0x00024b8e) list_double_graphic_heading_pane_g

0x9e30,	// (0x0001f3a6) list_double_graphic_heading_pane_t1_ParamLimits

0x9e30,	// (0x0001f3a6) list_double_graphic_heading_pane_t1

0x9d77,	// (0x0001f2ed) list_double_graphic_heading_pane_t2_ParamLimits

0x9d77,	// (0x0001f2ed) list_double_graphic_heading_pane_t2

0x0001,

0xf613,	// (0x00024b89) list_double_graphic_heading_pane_t_ParamLimits

0xf613,	// (0x00024b89) list_double_graphic_heading_pane_t

0x9da8,	// (0x0001f31e) list_double_time_pane_g1_ParamLimits

0x9da8,	// (0x0001f31e) list_double_time_pane_g1

0xc7f2,	// (0x00021d68) list_double_time_pane_g2_ParamLimits

0xc7f2,	// (0x00021d68) list_double_time_pane_g2

0x0001,

0xf61f,	// (0x00024b95) list_double_time_pane_g_ParamLimits

0xf61f,	// (0x00024b95) list_double_time_pane_g

0x9e52,	// (0x0001f3c8) list_double_time_pane_t1_ParamLimits

0x9e52,	// (0x0001f3c8) list_double_time_pane_t1

0x9e68,	// (0x0001f3de) list_double_time_pane_t2_ParamLimits

0x9e68,	// (0x0001f3de) list_double_time_pane_t2

0x9e7a,	// (0x0001f3f0) list_double_time_pane_t3_ParamLimits

0x9e7a,	// (0x0001f3f0) list_double_time_pane_t3

0x9e8c,	// (0x0001f402) list_double_time_pane_t4_ParamLimits

0x9e8c,	// (0x0001f402) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00024b9a) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00024b9a) list_double_time_pane_t

0x9d49,	// (0x0001f2bf) list_setting_pane_g1_ParamLimits

0x9d49,	// (0x0001f2bf) list_setting_pane_g1

0x9d55,	// (0x0001f2cb) list_setting_pane_g2_ParamLimits

0x9d55,	// (0x0001f2cb) list_setting_pane_g2

0x0001,

0xf62d,	// (0x00024ba3) list_setting_pane_g_ParamLimits

0xf62d,	// (0x00024ba3) list_setting_pane_g

0x9e9e,	// (0x0001f414) list_setting_pane_t1_ParamLimits

0x9e9e,	// (0x0001f414) list_setting_pane_t1

0x9eb5,	// (0x0001f42b) list_setting_pane_t2_ParamLimits

0x9eb5,	// (0x0001f42b) list_setting_pane_t2

0x0002,

0xf632,	// (0x00024ba8) list_setting_pane_t_ParamLimits

0xf632,	// (0x00024ba8) list_setting_pane_t

0x9ef4,	// (0x0001f46a) set_value_pane_cp_ParamLimits

0x9ef4,	// (0x0001f46a) set_value_pane_cp

0x9d49,	// (0x0001f2bf) list_setting_number_pane_g1_ParamLimits

0x9d49,	// (0x0001f2bf) list_setting_number_pane_g1

0x9d55,	// (0x0001f2cb) list_setting_number_pane_g2_ParamLimits

0x9d55,	// (0x0001f2cb) list_setting_number_pane_g2

0x0001,

0xf62d,	// (0x00024ba3) list_setting_number_pane_g_ParamLimits

0xf62d,	// (0x00024ba3) list_setting_number_pane_g

0x9f00,	// (0x0001f476) list_setting_number_pane_t1_ParamLimits

0x9f00,	// (0x0001f476) list_setting_number_pane_t1

0x9f14,	// (0x0001f48a) list_setting_number_pane_t2_ParamLimits

0x9f14,	// (0x0001f48a) list_setting_number_pane_t2

0x9f2b,	// (0x0001f4a1) list_setting_number_pane_t3_ParamLimits

0x9f2b,	// (0x0001f4a1) list_setting_number_pane_t3

0x0003,

0xf639,	// (0x00024baf) list_setting_number_pane_t_ParamLimits

0xf639,	// (0x00024baf) list_setting_number_pane_t

0x9ef4,	// (0x0001f46a) set_value_pane_ParamLimits

0x9ef4,	// (0x0001f46a) set_value_pane

0xc813,	// (0x00021d89) bg_set_opt_pane_ParamLimits

0xc813,	// (0x00021d89) bg_set_opt_pane

0xc834,	// (0x00021daa) set_value_pane_t1

0xc842,	// (0x00021db8) slider_set_pane_cp3

0x9f6e,	// (0x0001f4e4) volume_small_pane_cp

0xc84b,	// (0x00021dc1) list_form_gen_pane

0xc854,	// (0x00021dca) scroll_pane_cp8

0x9f77,	// (0x0001f4ed) form_field_data_pane_ParamLimits

0x9f77,	// (0x0001f4ed) form_field_data_pane

0x9f8e,	// (0x0001f504) form_field_data_wide_pane_ParamLimits

0x9f8e,	// (0x0001f504) form_field_data_wide_pane

0x9fae,	// (0x0001f524) form_field_popup_pane_ParamLimits

0x9fae,	// (0x0001f524) form_field_popup_pane

0x9fce,	// (0x0001f544) form_field_popup_wide_pane_ParamLimits

0x9fce,	// (0x0001f544) form_field_popup_wide_pane

0xc875,	// (0x00021deb) form_field_slider_pane_ParamLimits

0xc875,	// (0x00021deb) form_field_slider_pane

0x9fe5,	// (0x0001f55b) form_field_slider_wide_pane_ParamLimits

0x9fe5,	// (0x0001f55b) form_field_slider_wide_pane

0xc888,	// (0x00021dfe) data_form_pane

0xa002,	// (0x0001f578) form_field_data_pane_t1

0xc894,	// (0x00021e0a) input_focus_pane

0xc8a2,	// (0x00021e18) data_form_wide_pane

0xc8df,	// (0x00021e55) form_field_data_wide_pane_t1

0xc71e,	// (0x00021c94) input_focus_pane_cp6

0xa01c,	// (0x0001f592) form_field_popup_pane_t1

0xc894,	// (0x00021e0a) input_focus_pane_cp7

0xc901,	// (0x00021e77) list_form_pane

0xc915,	// (0x00021e8b) form_field_popup_wide_pane_t1

0xc894,	// (0x00021e0a) input_focus_pane_cp8

0xc92a,	// (0x00021ea0) list_form_wide_pane

0xa03e,	// (0x0001f5b4) form_field_slider_pane_t1_ParamLimits

0xa03e,	// (0x0001f5b4) form_field_slider_pane_t1

0xa056,	// (0x0001f5cc) form_field_slider_pane_t2_ParamLimits

0xa056,	// (0x0001f5cc) form_field_slider_pane_t2

0x0001,

0xf649,	// (0x00024bbf) form_field_slider_pane_t_ParamLimits

0xf649,	// (0x00024bbf) form_field_slider_pane_t

0xc44c,	// (0x000219c2) input_focus_pane_cp9_ParamLimits

0xc44c,	// (0x000219c2) input_focus_pane_cp9

0xa06b,	// (0x0001f5e1) slider_cont_pane_ParamLimits

0xa06b,	// (0x0001f5e1) slider_cont_pane

0xc936,	// (0x00021eac) form_field_slider_wide_pane_t1_ParamLimits

0xc936,	// (0x00021eac) form_field_slider_wide_pane_t1

0xc948,	// (0x00021ebe) form_field_slider_wide_pane_t2_ParamLimits

0xc948,	// (0x00021ebe) form_field_slider_wide_pane_t2

0x0001,

0xf64e,	// (0x00024bc4) form_field_slider_wide_pane_t_ParamLimits

0xf64e,	// (0x00024bc4) form_field_slider_wide_pane_t

0xc44c,	// (0x000219c2) input_focus_pane_cp10_ParamLimits

0xc44c,	// (0x000219c2) input_focus_pane_cp10

0xa07f,	// (0x0001f5f5) slider_cont_pane_cp1_ParamLimits

0xa07f,	// (0x0001f5f5) slider_cont_pane_cp1

0xa093,	// (0x0001f609) slider_form_pane_cp

0xc95a,	// (0x00021ed0) input_focus_pane_g1

0xc962,	// (0x00021ed8) input_focus_pane_g2

0xc96a,	// (0x00021ee0) input_focus_pane_g3

0xc972,	// (0x00021ee8) input_focus_pane_g4

0xc97a,	// (0x00021ef0) input_focus_pane_g5

0xc982,	// (0x00021ef8) input_focus_pane_g6

0xc98a,	// (0x00021f00) input_focus_pane_g7

0xc992,	// (0x00021f08) input_focus_pane_g8

0xc99a,	// (0x00021f10) input_focus_pane_g9

0xc3f4,	// (0x0002196a) input_focus_pane_g10

0x0009,

0xf653,	// (0x00024bc9) input_focus_pane_g

0x188d,	// (0x00016e03) wait_border_pane_g3_copy1

0xa09b,	// (0x0001f611) data_form_pane_t1

0xc3f4,	// (0x0002196a) wait_anim_pane_g1_copy1

0xb36c,	// (0x000208e2) data_form_wide_pane_t1

0xa0b5,	// (0x0001f62b) list_form_graphic_pane_cp_ParamLimits

0xa0b5,	// (0x0001f62b) list_form_graphic_pane_cp

0x278e,	// (0x00017d04) slider_form_pane_g1

0x2797,	// (0x00017d0d) slider_form_pane_g2

0x0006,

0xf94a,	// (0x00024ec0) slider_form_pane_g

0xa0c7,	// (0x0001f63d) list_form_graphic_pane_ParamLimits

0xa0c7,	// (0x0001f63d) list_form_graphic_pane

0xa0da,	// (0x0001f650) list_form_graphic_pane_g1

0xa0e2,	// (0x0001f658) list_form_graphic_pane_t1_ParamLimits

0xa0e2,	// (0x0001f658) list_form_graphic_pane_t1

0xc45a,	// (0x000219d0) list_highlight_pane_cp5_ParamLimits

0xc45a,	// (0x000219d0) list_highlight_pane_cp5

0xa0f7,	// (0x0001f66d) find_pane_g1

0xc9a2,	// (0x00021f18) input_find_pane

0xa100,	// (0x0001f676) input_find_pane_g1_ParamLimits

0xa100,	// (0x0001f676) input_find_pane_g1

0xa10c,	// (0x0001f682) input_find_pane_t1_ParamLimits

0xa10c,	// (0x0001f682) input_find_pane_t1

0xa121,	// (0x0001f697) input_find_pane_t2_ParamLimits

0xa121,	// (0x0001f697) input_find_pane_t2

0x0001,

0xf668,	// (0x00024bde) input_find_pane_t_ParamLimits

0xf668,	// (0x00024bde) input_find_pane_t

0xc9ab,	// (0x00021f21) input_focus_pane_cp5_ParamLimits

0xc9ab,	// (0x00021f21) input_focus_pane_cp5

0xc9be,	// (0x00021f34) bg_popup_window_pane_cp2_ParamLimits

0xc9be,	// (0x00021f34) bg_popup_window_pane_cp2

0xc9cb,	// (0x00021f41) listscroll_menu_pane_ParamLimits

0xc9cb,	// (0x00021f41) listscroll_menu_pane

0xa142,	// (0x0001f6b8) popup_submenu_window_ParamLimits

0xa142,	// (0x0001f6b8) popup_submenu_window

0xc9d7,	// (0x00021f4d) find_popup_pane_g1

0xa16a,	// (0x0001f6e0) input_popup_find_pane_cp

0xc9df,	// (0x00021f55) input_focus_pane_cp4_ParamLimits

0xc9df,	// (0x00021f55) input_focus_pane_cp4

0xc9ed,	// (0x00021f63) input_popup_find_pane_t1_ParamLimits

0xc9ed,	// (0x00021f63) input_popup_find_pane_t1

0xc3fe,	// (0x00021974) bg_popup_sub_pane_cp

0xca1b,	// (0x00021f91) listscroll_popup_sub_pane

0xca23,	// (0x00021f99) list_submenu_pane_ParamLimits

0xca23,	// (0x00021f99) list_submenu_pane

0xca34,	// (0x00021faa) scroll_pane_cp4

0xa182,	// (0x0001f6f8) list_single_popup_submenu_pane_ParamLimits

0xa182,	// (0x0001f6f8) list_single_popup_submenu_pane

0xa196,	// (0x0001f70c) list_single_popup_submenu_pane_g1

0xa19e,	// (0x0001f714) list_single_popup_submenu_pane_t1_ParamLimits

0xa19e,	// (0x0001f714) list_single_popup_submenu_pane_t1

0xc44c,	// (0x000219c2) bg_active_tab_pane_cp1_ParamLimits

0xc44c,	// (0x000219c2) bg_active_tab_pane_cp1

0xca3c,	// (0x00021fb2) tabs_2_active_pane_g1

0xa1b3,	// (0x0001f729) tabs_2_active_pane_t1

0xc44c,	// (0x000219c2) bg_passive_tab_pane_cp1_ParamLimits

0xc44c,	// (0x000219c2) bg_passive_tab_pane_cp1

0xca3c,	// (0x00021fb2) tabs_2_passive_pane_g1

0xa1b3,	// (0x0001f729) tabs_2_passive_pane_t1

0xc45a,	// (0x000219d0) bg_active_tab_pane_cp4

0xa1c5,	// (0x0001f73b) tabs_2_long_active_pane_t1

0xca44,	// (0x00021fba) bg_passive_tab_pane_cp4

0xe8a8,	// (0x00023e1e) list_single_midp_graphic_pane_g4_ParamLimits

0xc45a,	// (0x000219d0) bg_active_tab_pane_cp5

0xa1d8,	// (0x0001f74e) tabs_3_long_active_pane_t1

0xca44,	// (0x00021fba) bg_passive_tab_pane_cp5

0xe8a8,	// (0x00023e1e) list_single_midp_graphic_pane_g4

0xc45a,	// (0x000219d0) bg_popup_window_pane_cp13_ParamLimits

0xc45a,	// (0x000219d0) bg_popup_window_pane_cp13

0xca50,	// (0x00021fc6) listscroll_popup_fast_pane_ParamLimits

0xca50,	// (0x00021fc6) listscroll_popup_fast_pane

0xca5c,	// (0x00021fd2) grid_popup_fast_pane_ParamLimits

0xca5c,	// (0x00021fd2) grid_popup_fast_pane

0xca6e,	// (0x00021fe4) scroll_pane_cp9_ParamLimits

0xca6e,	// (0x00021fe4) scroll_pane_cp9

0x470a,	// (0x00019c80) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x470a,	// (0x00019c80) list_single_graphic_hl_pane_t1_cp2

0xca81,	// (0x00021ff7) input_focus_pane_cp20_ParamLimits

0xca81,	// (0x00021ff7) input_focus_pane_cp20

0xca8f,	// (0x00022005) query_popup_data_pane_t1_ParamLimits

0xca8f,	// (0x00022005) query_popup_data_pane_t1

0xcaa2,	// (0x00022018) query_popup_data_pane_t2_ParamLimits

0xcaa2,	// (0x00022018) query_popup_data_pane_t2

0xcae8,	// (0x0002205e) query_popup_data_pane_t3_ParamLimits

0xcae8,	// (0x0002205e) query_popup_data_pane_t3

0xcb29,	// (0x0002209f) query_popup_data_pane_t4_ParamLimits

0xcb29,	// (0x0002209f) query_popup_data_pane_t4

0xcb65,	// (0x000220db) query_popup_data_pane_t5_ParamLimits

0xcb65,	// (0x000220db) query_popup_data_pane_t5

0x0004,

0xf66d,	// (0x00024be3) query_popup_data_pane_t_ParamLimits

0xf66d,	// (0x00024be3) query_popup_data_pane_t

0xc95a,	// (0x00021ed0) bg_set_opt_pane_g1

0xc962,	// (0x00021ed8) bg_set_opt_pane_g2

0xc96a,	// (0x00021ee0) bg_set_opt_pane_g3

0xc972,	// (0x00021ee8) bg_set_opt_pane_g4

0xc97a,	// (0x00021ef0) bg_set_opt_pane_g5

0xc982,	// (0x00021ef8) bg_set_opt_pane_g6

0xc98a,	// (0x00021f00) bg_set_opt_pane_g7

0xc992,	// (0x00021f08) bg_set_opt_pane_g8

0xc99a,	// (0x00021f10) bg_set_opt_pane_g9

0x0008,

0xf678,	// (0x00024bee) bg_set_opt_pane_g

0xe567,	// (0x00023add) control_top_pane_stacon_ParamLimits

0xe567,	// (0x00023add) control_top_pane_stacon

0xe5ba,	// (0x00023b30) signal_pane_stacon_ParamLimits

0xe5ba,	// (0x00023b30) signal_pane_stacon

0xcef1,	// (0x00022467) stacon_top_pane_g1_ParamLimits

0xcef1,	// (0x00022467) stacon_top_pane_g1

0xe5df,	// (0x00023b55) title_pane_stacon_ParamLimits

0xe5df,	// (0x00023b55) title_pane_stacon

0xe609,	// (0x00023b7f) uni_indicator_pane_stacon_ParamLimits

0xe609,	// (0x00023b7f) uni_indicator_pane_stacon

0xe61e,	// (0x00023b94) battery_pane_stacon_ParamLimits

0xe61e,	// (0x00023b94) battery_pane_stacon

0xe662,	// (0x00023bd8) control_bottom_pane_stacon_ParamLimits

0xe662,	// (0x00023bd8) control_bottom_pane_stacon

0xe685,	// (0x00023bfb) navi_pane_stacon_ParamLimits

0xe685,	// (0x00023bfb) navi_pane_stacon

0xcf13,	// (0x00022489) stacon_bottom_pane_g1_ParamLimits

0xcf13,	// (0x00022489) stacon_bottom_pane_g1

0xe32a,	// (0x000238a0) aid_levels_signal_lsc_ParamLimits

0xe32a,	// (0x000238a0) aid_levels_signal_lsc

0xe340,	// (0x000238b6) signal_pane_stacon_g1_ParamLimits

0xe340,	// (0x000238b6) signal_pane_stacon_g1

0xe354,	// (0x000238ca) signal_pane_stacon_g2_ParamLimits

0xe354,	// (0x000238ca) signal_pane_stacon_g2

0x0001,

0xf68b,	// (0x00024c01) signal_pane_stacon_g_ParamLimits

0xf68b,	// (0x00024c01) signal_pane_stacon_g

0xe389,	// (0x000238ff) title_pane_stacon_t1_ParamLimits

0xe389,	// (0x000238ff) title_pane_stacon_t1

0xcba9,	// (0x0002211f) uni_indicator_pane_stacon_g1

0xcbb3,	// (0x00022129) uni_indicator_pane_stacon_g2

0xcbbd,	// (0x00022133) uni_indicator_pane_stacon_g3

0xcbc7,	// (0x0002213d) uni_indicator_pane_stacon_g4

0x0003,

0xf697,	// (0x00024c0d) uni_indicator_pane_stacon_g

0xe3ae,	// (0x00023924) control_top_pane_stacon_g1

0xe3b6,	// (0x0002392c) control_top_pane_stacon_t1_ParamLimits

0xe3b6,	// (0x0002392c) control_top_pane_stacon_t1

0xe3ed,	// (0x00023963) aid_levels_battery_lsc_ParamLimits

0xe3ed,	// (0x00023963) aid_levels_battery_lsc

0xe404,	// (0x0002397a) battery_pane_stacon_g1_ParamLimits

0xe404,	// (0x0002397a) battery_pane_stacon_g1

0xe417,	// (0x0002398d) battery_pane_stacon_g2_ParamLimits

0xe417,	// (0x0002398d) battery_pane_stacon_g2

0x0001,

0xf6a0,	// (0x00024c16) battery_pane_stacon_g_ParamLimits

0xf6a0,	// (0x00024c16) battery_pane_stacon_g

0xe455,	// (0x000239cb) navi_icon_pane_stacon

0xe469,	// (0x000239df) navi_navi_pane_stacon

0xe455,	// (0x000239cb) navi_text_pane_stacon

0xe3ae,	// (0x00023924) control_bottom_pane_stacon_g1

0xe47d,	// (0x000239f3) control_bottom_pane_stacon_t1_ParamLimits

0xe47d,	// (0x000239f3) control_bottom_pane_stacon_t1

0xa204,	// (0x0001f77a) grid_app_pane_ParamLimits

0xa204,	// (0x0001f77a) grid_app_pane

0xa23c,	// (0x0001f7b2) scroll_pane_cp15_ParamLimits

0xa23c,	// (0x0001f7b2) scroll_pane_cp15

0xa251,	// (0x0001f7c7) cell_app_pane_ParamLimits

0xa251,	// (0x0001f7c7) cell_app_pane

0xa296,	// (0x0001f80c) cell_app_pane_g1_ParamLimits

0xa296,	// (0x0001f80c) cell_app_pane_g1

0xcbeb,	// (0x00022161) cell_app_pane_g2_ParamLimits

0xcbeb,	// (0x00022161) cell_app_pane_g2

0x0001,

0xf6a5,	// (0x00024c1b) cell_app_pane_g_ParamLimits

0xf6a5,	// (0x00024c1b) cell_app_pane_g

0xa2ba,	// (0x0001f830) cell_app_pane_t1_ParamLimits

0xa2ba,	// (0x0001f830) cell_app_pane_t1

0xcbf7,	// (0x0002216d) grid_highlight_pane_ParamLimits

0xcbf7,	// (0x0002216d) grid_highlight_pane

0xc95a,	// (0x00021ed0) cell_highlight_pane_g1

0xc962,	// (0x00021ed8) cell_highlight_pane_g2

0xc96a,	// (0x00021ee0) cell_highlight_pane_g3

0xc972,	// (0x00021ee8) cell_highlight_pane_g4

0xc97a,	// (0x00021ef0) cell_highlight_pane_g5

0xc982,	// (0x00021ef8) cell_highlight_pane_g6

0xc98a,	// (0x00021f00) cell_highlight_pane_g7

0xc992,	// (0x00021f08) cell_highlight_pane_g8

0xc99a,	// (0x00021f10) cell_highlight_pane_g9

0xc3f4,	// (0x0002196a) cell_highlight_pane_g10

0x0009,

0xf653,	// (0x00024bc9) cell_highlight_pane_g

0xcc08,	// (0x0002217e) bg_scroll_pane

0x835b,	// (0x0001d8d1) scroll_handle_pane

0xcc4f,	// (0x000221c5) scroll_bg_pane_g1

0xcc64,	// (0x000221da) scroll_bg_pane_g2

0xcc7c,	// (0x000221f2) scroll_bg_pane_g3

0x0002,

0xf6aa,	// (0x00024c20) scroll_bg_pane_g

0xa2d1,	// (0x0001f847) scroll_handle_focus_pane_ParamLimits

0xa2d1,	// (0x0001f847) scroll_handle_focus_pane

0xcc4f,	// (0x000221c5) scroll_handle_pane_g1

0xcc91,	// (0x00022207) scroll_handle_pane_g2

0xcc7c,	// (0x000221f2) scroll_handle_pane_g3

0x0002,

0xf6b1,	// (0x00024c27) scroll_handle_pane_g

0xc9df,	// (0x00021f55) bg_popup_sub_pane_cp21_ParamLimits

0xc9df,	// (0x00021f55) bg_popup_sub_pane_cp21

0xa2de,	// (0x0001f854) popup_fep_japan_predictive_window_t1_ParamLimits

0xa2de,	// (0x0001f854) popup_fep_japan_predictive_window_t1

0xa2f5,	// (0x0001f86b) popup_fep_japan_predictive_window_t2_ParamLimits

0xa2f5,	// (0x0001f86b) popup_fep_japan_predictive_window_t2

0xa328,	// (0x0001f89e) popup_fep_japan_predictive_window_t3_ParamLimits

0xa328,	// (0x0001f89e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6b8,	// (0x00024c2e) popup_fep_japan_predictive_window_t_ParamLimits

0xf6b8,	// (0x00024c2e) popup_fep_japan_predictive_window_t

0xc3fe,	// (0x00021974) bg_popup_sub_pane_cp23

0xa35f,	// (0x0001f8d5) listscroll_japin_cand_pane

0xcca5,	// (0x0002221b) popup_fep_japan_candidate_window_t1

0xccb3,	// (0x00022229) candidate_pane_ParamLimits

0xccb3,	// (0x00022229) candidate_pane

0xa367,	// (0x0001f8dd) scroll_pane_cp30

0xccc5,	// (0x0002223b) list_single_popup_jap_candidate_pane_ParamLimits

0xccc5,	// (0x0002223b) list_single_popup_jap_candidate_pane

0xc3fe,	// (0x00021974) list_highlight_pane_cp30

0xccda,	// (0x00022250) list_single_popup_jap_candidate_pane_t1

0xcce9,	// (0x0002225f) level_1_signal

0xccf6,	// (0x0002226c) level_2_signal

0xcd03,	// (0x00022279) level_3_signal

0xcd10,	// (0x00022286) level_4_signal

0xcd1d,	// (0x00022293) level_5_signal

0xcd2a,	// (0x000222a0) level_6_signal

0xcd37,	// (0x000222ad) level_7_signal

0xcce9,	// (0x0002225f) level_1_battery

0xccf6,	// (0x0002226c) level_2_battery

0xcd03,	// (0x00022279) level_3_battery

0xcd10,	// (0x00022286) level_4_battery

0xcd1d,	// (0x00022293) level_5_battery

0xcd2a,	// (0x000222a0) level_6_battery

0xcd37,	// (0x000222ad) level_7_battery

0xcd5c,	// (0x000222d2) list_menu_pane_ParamLimits

0xcd5c,	// (0x000222d2) list_menu_pane

0xcd72,	// (0x000222e8) scroll_pane_cp25_ParamLimits

0xcd72,	// (0x000222e8) scroll_pane_cp25

0xa36f,	// (0x0001f8e5) list_double2_graphic_pane_cp2_ParamLimits

0xa36f,	// (0x0001f8e5) list_double2_graphic_pane_cp2

0xa36f,	// (0x0001f8e5) list_double2_large_graphic_pane_cp2_ParamLimits

0xa36f,	// (0x0001f8e5) list_double2_large_graphic_pane_cp2

0xa36f,	// (0x0001f8e5) list_double2_pane_cp2_ParamLimits

0xa36f,	// (0x0001f8e5) list_double2_pane_cp2

0xa36f,	// (0x0001f8e5) list_double_graphic_pane_cp2_ParamLimits

0xa36f,	// (0x0001f8e5) list_double_graphic_pane_cp2

0xa36f,	// (0x0001f8e5) list_double_large_graphic_pane_cp2_ParamLimits

0xa36f,	// (0x0001f8e5) list_double_large_graphic_pane_cp2

0xa36f,	// (0x0001f8e5) list_double_number_pane_cp2_ParamLimits

0xa36f,	// (0x0001f8e5) list_double_number_pane_cp2

0xa36f,	// (0x0001f8e5) list_double_pane_cp2_ParamLimits

0xa36f,	// (0x0001f8e5) list_double_pane_cp2

0xa37e,	// (0x0001f8f4) list_single_2graphic_pane_cp2_ParamLimits

0xa37e,	// (0x0001f8f4) list_single_2graphic_pane_cp2

0xa37e,	// (0x0001f8f4) list_single_graphic_heading_pane_cp2_ParamLimits

0xa37e,	// (0x0001f8f4) list_single_graphic_heading_pane_cp2

0xa37e,	// (0x0001f8f4) list_single_graphic_pane_cp2_ParamLimits

0xa37e,	// (0x0001f8f4) list_single_graphic_pane_cp2

0xa37e,	// (0x0001f8f4) list_single_heading_pane_cp2_ParamLimits

0xa37e,	// (0x0001f8f4) list_single_heading_pane_cp2

0xcd9b,	// (0x00022311) list_single_large_graphic_pane_cp2_ParamLimits

0xcd9b,	// (0x00022311) list_single_large_graphic_pane_cp2

0xa37e,	// (0x0001f8f4) list_single_number_heading_pane_cp2_ParamLimits

0xa37e,	// (0x0001f8f4) list_single_number_heading_pane_cp2

0xa37e,	// (0x0001f8f4) list_single_number_pane_cp2_ParamLimits

0xa37e,	// (0x0001f8f4) list_single_number_pane_cp2

0xa390,	// (0x0001f906) list_single_pane_cp2_ParamLimits

0xa390,	// (0x0001f906) list_single_pane_cp2

0xcdb5,	// (0x0002232b) bg_popup_sub_pane_cp22

0xe54d,	// (0x00023ac3) popup_side_volume_key_window_g1

0xe559,	// (0x00023acf) popup_side_volume_key_window_t1

0x83aa,	// (0x0001d920) volume_small_pane_cp1

0xc44c,	// (0x000219c2) bg_popup_sub_pane_cp24_ParamLimits

0xc44c,	// (0x000219c2) bg_popup_sub_pane_cp24

0xcdcb,	// (0x00022341) fep_china_uni_candidate_pane_ParamLimits

0xcdcb,	// (0x00022341) fep_china_uni_candidate_pane

0xcddf,	// (0x00022355) fep_china_uni_entry_pane

0xcdef,	// (0x00022365) popup_fep_china_uni_window_g1

0xa41d,	// (0x0001f993) fep_china_uni_entry_pane_g1

0xa425,	// (0x0001f99b) fep_china_uni_entry_pane_g2

0x0001,

0xf6e9,	// (0x00024c5f) fep_china_uni_entry_pane_g

0xce0b,	// (0x00022381) fep_entry_item_pane

0xce15,	// (0x0002238b) fep_candidate_item_pane

0xa42d,	// (0x0001f9a3) fep_china_uni_candidate_pane_g1

0xce1d,	// (0x00022393) fep_china_uni_candidate_pane_g2

0xce25,	// (0x0002239b) fep_china_uni_candidate_pane_g3

0xa435,	// (0x0001f9ab) fep_china_uni_candidate_pane_g4

0x0003,

0xf6ee,	// (0x00024c64) fep_china_uni_candidate_pane_g

0xc3f4,	// (0x0002196a) fep_entry_item_pane_g1

0xce2d,	// (0x000223a3) fep_entry_item_pane_t1_ParamLimits

0xce2d,	// (0x000223a3) fep_entry_item_pane_t1

0xce43,	// (0x000223b9) fep_candidate_item_pane_t1_ParamLimits

0xce43,	// (0x000223b9) fep_candidate_item_pane_t1

0xce58,	// (0x000223ce) fep_candidate_item_pane_t2_ParamLimits

0xce58,	// (0x000223ce) fep_candidate_item_pane_t2

0x0001,

0xf6f7,	// (0x00024c6d) fep_candidate_item_pane_t_ParamLimits

0xf6f7,	// (0x00024c6d) fep_candidate_item_pane_t

0xc45a,	// (0x000219d0) list_highlight_pane_cp31_ParamLimits

0xc45a,	// (0x000219d0) list_highlight_pane_cp31

0xce6a,	// (0x000223e0) level_1_signal_lsc

0xce73,	// (0x000223e9) level_2_signal_lsc

0xce7c,	// (0x000223f2) level_3_signal_lsc

0xce85,	// (0x000223fb) level_4_signal_lsc

0xce8e,	// (0x00022404) level_5_signal_lsc

0xce97,	// (0x0002240d) level_6_signal_lsc

0xcea0,	// (0x00022416) level_7_signal_lsc

0xcea0,	// (0x00022416) level_1_battery_lsc

0xcea9,	// (0x0002241f) level_2_battery_lsc

0xceb2,	// (0x00022428) level_3_battery_lsc

0xcebb,	// (0x00022431) level_4_battery_lsc

0xcec4,	// (0x0002243a) level_5_battery_lsc

0xcecd,	// (0x00022443) level_6_battery_lsc

0xce6a,	// (0x000223e0) level_7_battery_lsc

0xced6,	// (0x0002244c) scroll_handle_focus_pane_g1

0xcedf,	// (0x00022455) scroll_handle_focus_pane_g2

0xcee8,	// (0x0002245e) scroll_handle_focus_pane_g3

0x0002,

0xf6fc,	// (0x00024c72) scroll_handle_focus_pane_g

0xa43d,	// (0x0001f9b3) list_single_2graphic_pane_g1_ParamLimits

0xa43d,	// (0x0001f9b3) list_single_2graphic_pane_g1

0x9c38,	// (0x0001f1ae) list_single_2graphic_pane_g2_ParamLimits

0x9c38,	// (0x0001f1ae) list_single_2graphic_pane_g2

0x10f6,	// (0x0001666c) list_single_2graphic_pane_g3_ParamLimits

0x10f6,	// (0x0001666c) list_single_2graphic_pane_g3

0xa449,	// (0x0001f9bf) list_single_2graphic_pane_g4_ParamLimits

0xa449,	// (0x0001f9bf) list_single_2graphic_pane_g4

0x0003,

0xf703,	// (0x00024c79) list_single_2graphic_pane_g_ParamLimits

0xf703,	// (0x00024c79) list_single_2graphic_pane_g

0xa455,	// (0x0001f9cb) list_single_2graphic_pane_t1_ParamLimits

0xa455,	// (0x0001f9cb) list_single_2graphic_pane_t1

0xa483,	// (0x0001f9f9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa483,	// (0x0001f9f9) list_double2_graphic_large_graphic_pane_g1

0x9e02,	// (0x0001f378) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9e02,	// (0x0001f378) list_double2_graphic_large_graphic_pane_g2

0x9d55,	// (0x0001f2cb) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9d55,	// (0x0001f2cb) list_double2_graphic_large_graphic_pane_g3

0xa495,	// (0x0001fa0b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa495,	// (0x0001fa0b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70c,	// (0x00024c82) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70c,	// (0x00024c82) list_double2_graphic_large_graphic_pane_g

0xa4a1,	// (0x0001fa17) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa4a1,	// (0x0001fa17) list_double2_graphic_large_graphic_pane_t1

0xa4b7,	// (0x0001fa2d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa4b7,	// (0x0001fa2d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf715,	// (0x00024c8b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf715,	// (0x00024c8b) list_double2_graphic_large_graphic_pane_t

0xa53c,	// (0x0001fab2) popup_fast_swap_window_ParamLimits

0xa53c,	// (0x0001fab2) popup_fast_swap_window

0xa558,	// (0x0001face) popup_side_volume_key_window

0xcf9e,	// (0x00022514) stacon_top_pane

0xcfa8,	// (0x0002251e) status_pane_ParamLimits

0xcfa8,	// (0x0002251e) status_pane

0xc3ea,	// (0x00021960) status_small_pane

0xc3fe,	// (0x00021974) control_pane

0xc3fe,	// (0x00021974) stacon_bottom_pane

0xc854,	// (0x00021dca) scroll_pane_cp121

0xc84b,	// (0x00021dc1) set_content_pane

0xa4c9,	// (0x0001fa3f) bg_active_tab_pane_g1_cp1

0xa4d2,	// (0x0001fa48) bg_active_tab_pane_g2_cp1

0xa4db,	// (0x0001fa51) bg_active_tab_pane_g3_cp1

0xa4c9,	// (0x0001fa3f) bg_passive_tab_pane_g1_cp1

0xa4d2,	// (0x0001fa48) bg_passive_tab_pane_g2_cp1

0xa4db,	// (0x0001fa51) bg_passive_tab_pane_g3_cp1

0xa4e4,	// (0x0001fa5a) bg_active_tab_pane_g1_cp2

0xa4d2,	// (0x0001fa48) bg_active_tab_pane_g2_cp2

0xa4ed,	// (0x0001fa63) bg_active_tab_pane_g3_cp2

0xa4e4,	// (0x0001fa5a) bg_passive_tab_pane_g1_cp2

0xa4d2,	// (0x0001fa48) bg_passive_tab_pane_g2_cp2

0xa4ed,	// (0x0001fa63) bg_passive_tab_pane_g3_cp2

0xa4f6,	// (0x0001fa6c) bg_active_tab_pane_g1_cp3

0xa4d2,	// (0x0001fa48) bg_active_tab_pane_g2_cp3

0xa4ff,	// (0x0001fa75) bg_active_tab_pane_g3_cp3

0xa4f6,	// (0x0001fa6c) bg_passive_tab_pane_g1_cp3

0xa4d2,	// (0x0001fa48) bg_passive_tab_pane_g2_cp3

0xa4ff,	// (0x0001fa75) bg_passive_tab_pane_g3_cp3

0xa508,	// (0x0001fa7e) bg_active_tab_pane_g1_cp4

0xa4d2,	// (0x0001fa48) bg_active_tab_pane_g2_cp4

0xa513,	// (0x0001fa89) bg_active_tab_pane_g3_cp4

0xa508,	// (0x0001fa7e) bg_passive_tab_pane_g1_cp4

0xa4d2,	// (0x0001fa48) bg_passive_tab_pane_g2_cp4

0xa513,	// (0x0001fa89) bg_passive_tab_pane_g3_cp4

0xa51e,	// (0x0001fa94) bg_active_tab_pane_g1_cp5

0xa4d2,	// (0x0001fa48) bg_active_tab_pane_g2_cp5

0xa527,	// (0x0001fa9d) bg_active_tab_pane_g3_cp5

0xa51e,	// (0x0001fa94) bg_passive_tab_pane_g1_cp5

0xa4d2,	// (0x0001fa48) bg_passive_tab_pane_g2_cp5

0xa527,	// (0x0001fa9d) bg_passive_tab_pane_g3_cp5

0x2eb4,	// (0x0001842a) list_set_graphic_pane_ParamLimits

0x2eb4,	// (0x0001842a) list_set_graphic_pane

0xc3fe,	// (0x00021974) bg_set_opt_pane_cp4

0xcf2f,	// (0x000224a5) list_set_graphic_pane_g1_ParamLimits

0xcf2f,	// (0x000224a5) list_set_graphic_pane_g1

0xcf3b,	// (0x000224b1) list_set_graphic_pane_g2_ParamLimits

0xcf3b,	// (0x000224b1) list_set_graphic_pane_g2

0x0001,

0xf71a,	// (0x00024c90) list_set_graphic_pane_g_ParamLimits

0xf71a,	// (0x00024c90) list_set_graphic_pane_g

0x0009,

0xfa9f,	// (0x00025015) volume_small_pane_cp_g

0xa530,	// (0x0001faa6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa530,	// (0x0001faa6) list_double2_large_graphic_pane_g1_cp2

0xcf5d,	// (0x000224d3) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xcf5d,	// (0x000224d3) list_double2_large_graphic_pane_g2_cp2

0xcf6e,	// (0x000224e4) list_double2_large_graphic_pane_g3_cp2

0xcf76,	// (0x000224ec) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xcf76,	// (0x000224ec) list_double2_large_graphic_pane_t1_cp2

0xcf8c,	// (0x00022502) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xcf8c,	// (0x00022502) list_double2_large_graphic_pane_t2_cp2

0xb0b3,	// (0x00020629) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb0b3,	// (0x00020629) list_double_large_graphic_pane_g1_cp2

0x234f,	// (0x000178c5) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x234f,	// (0x000178c5) list_double_large_graphic_pane_g2_cp2

0xd0b8,	// (0x0002262e) list_double_large_graphic_pane_g3_cp2

0x2360,	// (0x000178d6) list_double_large_graphic_pane_g4_cp

0x2368,	// (0x000178de) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2368,	// (0x000178de) list_double_large_graphic_pane_t1_cp2

0x237f,	// (0x000178f5) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x237f,	// (0x000178f5) list_double_large_graphic_pane_t2_cp2

0xcfb6,	// (0x0002252c) list_double2_graphic_pane_g1_cp2_ParamLimits

0xcfb6,	// (0x0002252c) list_double2_graphic_pane_g1_cp2

0xcfc4,	// (0x0002253a) list_double2_graphic_pane_g2_cp2_ParamLimits

0xcfc4,	// (0x0002253a) list_double2_graphic_pane_g2_cp2

0xcfd5,	// (0x0002254b) list_double2_graphic_pane_g3_cp2

0xcfdf,	// (0x00022555) list_double2_graphic_pane_t1_cp2_ParamLimits

0xcfdf,	// (0x00022555) list_double2_graphic_pane_t1_cp2

0xcff5,	// (0x0002256b) list_double2_graphic_pane_t2_cp2_ParamLimits

0xcff5,	// (0x0002256b) list_double2_graphic_pane_t2_cp2

0xc7e6,	// (0x00021d5c) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc7e6,	// (0x00021d5c) list_single_number_heading_pane_g1_cp2

0xd007,	// (0x0002257d) list_single_number_heading_pane_g2_cp2

0xd00f,	// (0x00022585) list_single_number_heading_pane_t1_cp2_ParamLimits

0xd00f,	// (0x00022585) list_single_number_heading_pane_t1_cp2

0xd025,	// (0x0002259b) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd025,	// (0x0002259b) list_single_number_heading_pane_t2_cp2

0xd037,	// (0x000225ad) list_single_number_heading_pane_t3_cp2_ParamLimits

0xd037,	// (0x000225ad) list_single_number_heading_pane_t3_cp2

0xc7e6,	// (0x00021d5c) list_single_heading_pane_g1_cp2_ParamLimits

0xc7e6,	// (0x00021d5c) list_single_heading_pane_g1_cp2

0xd007,	// (0x0002257d) list_single_heading_pane_g2_cp2

0xd00f,	// (0x00022585) list_single_heading_pane_t1_cp2_ParamLimits

0xd00f,	// (0x00022585) list_single_heading_pane_t1_cp2

0x2148,	// (0x000176be) list_single_heading_pane_t2_cp2_ParamLimits

0x2148,	// (0x000176be) list_single_heading_pane_t2_cp2

0x2090,	// (0x00017606) list_double_graphic_pane_g1_cp2_ParamLimits

0x2090,	// (0x00017606) list_double_graphic_pane_g1_cp2

0x209c,	// (0x00017612) list_double_graphic_pane_g2_cp2_ParamLimits

0x209c,	// (0x00017612) list_double_graphic_pane_g2_cp2

0x20ab,	// (0x00017621) list_double_graphic_pane_g3_cp2

0x20b3,	// (0x00017629) list_double_graphic_pane_t1_cp2_ParamLimits

0x20b3,	// (0x00017629) list_double_graphic_pane_t1_cp2

0x20c9,	// (0x0001763f) list_double_graphic_pane_t2_cp2_ParamLimits

0x20c9,	// (0x0001763f) list_double_graphic_pane_t2_cp2

0xd0ac,	// (0x00022622) list_double_number_pane_g1_cp2_ParamLimits

0xd0ac,	// (0x00022622) list_double_number_pane_g1_cp2

0xd0b8,	// (0x0002262e) list_double_number_pane_g2_cp2

0x2054,	// (0x000175ca) list_double_number_pane_t1_cp2_ParamLimits

0x2054,	// (0x000175ca) list_double_number_pane_t1_cp2

0x2068,	// (0x000175de) list_double_number_pane_t2_cp2_ParamLimits

0x2068,	// (0x000175de) list_double_number_pane_t2_cp2

0x207e,	// (0x000175f4) list_double_number_pane_t3_cp2_ParamLimits

0x207e,	// (0x000175f4) list_double_number_pane_t3_cp2

0x1f3d,	// (0x000174b3) list_single_graphic_pane_g1_cp2_ParamLimits

0x1f3d,	// (0x000174b3) list_single_graphic_pane_g1_cp2

0xc7da,	// (0x00021d50) list_single_graphic_pane_g2_cp2_ParamLimits

0xc7da,	// (0x00021d50) list_single_graphic_pane_g2_cp2

0xd111,	// (0x00022687) list_single_graphic_pane_g3_cp2

0x1f13,	// (0x00017489) list_single_graphic_pane_t1_cp2_ParamLimits

0x1f13,	// (0x00017489) list_single_graphic_pane_t1_cp2

0xc7da,	// (0x00021d50) list_single_number_pane_g1_cp2_ParamLimits

0xc7da,	// (0x00021d50) list_single_number_pane_g1_cp2

0xd111,	// (0x00022687) list_single_number_pane_g2_cp2

0x1f13,	// (0x00017489) list_single_number_pane_t1_cp2_ParamLimits

0x1f13,	// (0x00017489) list_single_number_pane_t1_cp2

0x1f29,	// (0x0001749f) list_single_number_pane_t2_cp2_ParamLimits

0x1f29,	// (0x0001749f) list_single_number_pane_t2_cp2

0xcf5d,	// (0x000224d3) list_double2_pane_g1_cp2_ParamLimits

0xcf5d,	// (0x000224d3) list_double2_pane_g1_cp2

0xcf6e,	// (0x000224e4) list_double2_pane_g2_cp2

0xd084,	// (0x000225fa) list_double2_pane_t1_cp2_ParamLimits

0xd084,	// (0x000225fa) list_double2_pane_t1_cp2

0xd09a,	// (0x00022610) list_double2_pane_t2_cp2_ParamLimits

0xd09a,	// (0x00022610) list_double2_pane_t2_cp2

0xd0ac,	// (0x00022622) list_double_pane_g1_cp2_ParamLimits

0xd0ac,	// (0x00022622) list_double_pane_g1_cp2

0xd0b8,	// (0x0002262e) list_double_pane_g2_cp2

0xd0c0,	// (0x00022636) list_double_pane_t1_cp2_ParamLimits

0xd0c0,	// (0x00022636) list_double_pane_t1_cp2

0xd0d6,	// (0x0002264c) list_double_pane_t2_cp2_ParamLimits

0xd0d6,	// (0x0002264c) list_double_pane_t2_cp2

0xa572,	// (0x0001fae8) list_single_pane_cp2_g3

0xc7da,	// (0x00021d50) list_single_pane_g1_cp2_ParamLimits

0xc7da,	// (0x00021d50) list_single_pane_g1_cp2

0xd111,	// (0x00022687) list_single_pane_g2_cp2

0xd119,	// (0x0002268f) list_single_pane_t1_cp2_ParamLimits

0xd119,	// (0x0002268f) list_single_pane_t1_cp2

0xa57a,	// (0x0001faf0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa57a,	// (0x0001faf0) list_single_large_graphic_pane_g1_cp2

0xd131,	// (0x000226a7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xd131,	// (0x000226a7) list_single_large_graphic_pane_g2_cp2

0xd13d,	// (0x000226b3) list_single_large_graphic_pane_g3_cp2

0xa586,	// (0x0001fafc) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa586,	// (0x0001fafc) list_single_large_graphic_pane_g4_cp1

0xd145,	// (0x000226bb) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xd145,	// (0x000226bb) list_single_large_graphic_pane_t1_cp2

0x1edf,	// (0x00017455) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x1edf,	// (0x00017455) list_single_graphic_heading_pane_g1_cp2

0x1eac,	// (0x00017422) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x1eac,	// (0x00017422) list_single_graphic_heading_pane_g4_cp2

0xd111,	// (0x00022687) list_single_graphic_heading_pane_g5_cp2

0x1eeb,	// (0x00017461) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x1eeb,	// (0x00017461) list_single_graphic_heading_pane_t1_cp2

0x1f01,	// (0x00017477) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x1f01,	// (0x00017477) list_single_graphic_heading_pane_t2_cp2

0x1ea0,	// (0x00017416) list_single_2graphic_pane_g1_cp2_ParamLimits

0x1ea0,	// (0x00017416) list_single_2graphic_pane_g1_cp2

0x1eac,	// (0x00017422) list_single_2graphic_pane_g2_cp2_ParamLimits

0x1eac,	// (0x00017422) list_single_2graphic_pane_g2_cp2

0xd111,	// (0x00022687) list_single_2graphic_pane_g3_cp2

0x1ebd,	// (0x00017433) list_single_2graphic_pane_g4_cp2_ParamLimits

0x1ebd,	// (0x00017433) list_single_2graphic_pane_g4_cp2

0x1ec9,	// (0x0001743f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x1ec9,	// (0x0001743f) list_single_2graphic_pane_t1_cp2

0xc3f4,	// (0x0002196a) list_highlight_pane_g10_cp1

0x1a88,	// (0x00016ffe) list_highlight_pane_g1_cp1

0x1a90,	// (0x00017006) list_highlight_pane_g2_cp1

0x1a98,	// (0x0001700e) list_highlight_pane_g3_cp1

0x1aa0,	// (0x00017016) list_highlight_pane_g4_cp1

0x1aa8,	// (0x0001701e) list_highlight_pane_g5_cp1

0x1ab0,	// (0x00017026) list_highlight_pane_g6_cp1

0x1ab8,	// (0x0001702e) list_highlight_pane_g7_cp1

0x1ac0,	// (0x00017036) list_highlight_pane_g8_cp1

0x1ac8,	// (0x0001703e) list_highlight_pane_g9_cp1

0xae48,	// (0x000203be) form_field_slider_pane_t3

0xae56,	// (0x000203cc) form_field_slider_pane_t4

0x19cc,	// (0x00016f42) slider_form_pane_ParamLimits

0x19cc,	// (0x00016f42) slider_form_pane

0xc3fe,	// (0x00021974) control_abbreviations

0xc3fe,	// (0x00021974) control_conventions

0xc3fe,	// (0x00021974) control_definitions

0xc3fe,	// (0x00021974) format_table_attribute

0xb08a,	// (0x00020600) bg_popup_preview_window_pane_g9

0xc3fe,	// (0x00021974) format_table_data2

0xc3fe,	// (0x00021974) format_table_data3

0xc3fe,	// (0x00021974) format_table_data_example

0x0008,

0xc3fe,	// (0x00021974) intro_purpose

0xf8aa,	// (0x00024e20) bg_popup_preview_window_pane_g

0xc3fe,	// (0x00021974) texts_category

0xc3fe,	// (0x00021974) texts_graphics

0xd15b,	// (0x000226d1) text_digital

0xd16a,	// (0x000226e0) text_primary

0xd179,	// (0x000226ef) text_primary_small

0xd188,	// (0x000226fe) text_secondary

0xd197,	// (0x0002270d) text_title

0xb44b,	// (0x000209c1) bg_passive_tab_pane_g1_cp3_srt

0xa4d2,	// (0x0001fa48) bg_passive_tab_pane_g2_cp3_srt

0xb454,	// (0x000209ca) bg_passive_tab_pane_g3_cp3_srt

0xc44c,	// (0x000219c2) bg_active_tab_pane_cp3_srt_ParamLimits

0xc44c,	// (0x000219c2) bg_active_tab_pane_cp3_srt

0xb45d,	// (0x000209d3) tabs_4_active_pane_srt_g1

0xb465,	// (0x000209db) tabs_4_active_pane_srt_t1_ParamLimits

0xb465,	// (0x000209db) tabs_4_active_pane_srt_t1

0xb44b,	// (0x000209c1) bg_active_tab_pane_g1_cp3_copy1

0xa4d2,	// (0x0001fa48) bg_active_tab_pane_g2_cp3_copy1

0xb454,	// (0x000209ca) bg_active_tab_pane_g3_cp3_copy1

0xc45a,	// (0x000219d0) tabs_2_long_active_pane_srt_ParamLimits

0xc45a,	// (0x000219d0) tabs_2_long_active_pane_srt

0xc45a,	// (0x000219d0) tabs_2_long_passive_pane_srt_ParamLimits

0xc45a,	// (0x000219d0) tabs_2_long_passive_pane_srt

0xca44,	// (0x00021fba) bg_passive_tab_pane_cp4_srt_ParamLimits

0xca44,	// (0x00021fba) bg_passive_tab_pane_cp4_srt

0xb1bc,	// (0x00020732) bg_passive_tab_pane_g1_cp4_srt

0xa4d2,	// (0x0001fa48) bg_passive_tab_pane_g2_cp4_srt

0xb1c5,	// (0x0002073b) bg_passive_tab_pane_g3_cp4_srt

0xc45a,	// (0x000219d0) bg_active_tab_pane_cp4_srt_ParamLimits

0xc45a,	// (0x000219d0) bg_active_tab_pane_cp4_srt

0xb1ce,	// (0x00020744) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb1ce,	// (0x00020744) tabs_2_long_active_pane_srt_t1

0xb1bc,	// (0x00020732) bg_active_tab_pane_g1_cp4_srt

0xa4d2,	// (0x0001fa48) bg_active_tab_pane_g2_cp4_srt

0xb1c5,	// (0x0002073b) bg_active_tab_pane_g3_cp4_srt

0xc44c,	// (0x000219c2) tabs_3_long_active_pane_srt_ParamLimits

0xc44c,	// (0x000219c2) tabs_3_long_active_pane_srt

0xc44c,	// (0x000219c2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc44c,	// (0x000219c2) tabs_3_long_passive_pane_cp_srt

0xc44c,	// (0x000219c2) tabs_3_long_passive_pane_srt_ParamLimits

0xc44c,	// (0x000219c2) tabs_3_long_passive_pane_srt

0xca44,	// (0x00021fba) bg_passive_tab_pane_cp5_srt_ParamLimits

0xca44,	// (0x00021fba) bg_passive_tab_pane_cp5_srt

0xa51e,	// (0x0001fa94) bg_passive_tab_pane_g1_cp5_srt

0xa4d2,	// (0x0001fa48) bg_passive_tab_pane_g2_cp5_srt

0xa527,	// (0x0001fa9d) bg_passive_tab_pane_g3_cp5_srt

0xc45a,	// (0x000219d0) bg_active_tab_pane_cp5_srt_ParamLimits

0xc45a,	// (0x000219d0) bg_active_tab_pane_cp5_srt

0xb1a6,	// (0x0002071c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb1a6,	// (0x0002071c) tabs_3_long_active_pane_srt_t1

0xa51e,	// (0x0001fa94) bg_active_tab_pane_g1_cp5_srt

0xa4d2,	// (0x0001fa48) bg_active_tab_pane_g2_cp5_srt

0xa527,	// (0x0001fa9d) bg_active_tab_pane_g3_cp5_srt

0x25a5,	// (0x00017b1b) navi_text_pane_srt_t1

0x259d,	// (0x00017b13) navi_icon_pane_srt_g1

0xd282,	// (0x000227f8) midp_editing_number_pane_srt

0xd1a6,	// (0x0002271c) midp_ticker_pane_srt

0xd28a,	// (0x00022800) midp_ticker_pane_srt_g1

0xd292,	// (0x00022808) midp_ticker_pane_srt_g2

0x0001,

0xf739,	// (0x00024caf) midp_ticker_pane_srt_g

0xd29a,	// (0x00022810) midp_ticker_pane_srt_t1

0x258e,	// (0x00017b04) midp_editing_number_pane_t1_copy1

0xa5a0,	// (0x0001fb16) listscroll_midp_pane

0xa5a0,	// (0x0001fb16) midp_form_pane

0xa60b,	// (0x0001fb81) midp_info_popup_window_ParamLimits

0xa60b,	// (0x0001fb81) midp_info_popup_window

0xc9df,	// (0x00021f55) bg_popup_sub_pane_cp50_ParamLimits

0xc9df,	// (0x00021f55) bg_popup_sub_pane_cp50

0x16bc,	// (0x00016c32) listscroll_midp_info_pane_ParamLimits

0x16bc,	// (0x00016c32) listscroll_midp_info_pane

0x169c,	// (0x00016c12) listscroll_form_midp_pane_ParamLimits

0x169c,	// (0x00016c12) listscroll_form_midp_pane

0x16a8,	// (0x00016c1e) scroll_bar_cp050

0x169c,	// (0x00016c12) list_midp_pane

0xb5ef,	// (0x00020b65) signal_pane_g2_cp

0x15b6,	// (0x00016b2c) listscroll_midp_info_pane_t1_ParamLimits

0x15b6,	// (0x00016b2c) listscroll_midp_info_pane_t1

0xac82,	// (0x000201f8) listscroll_midp_info_pane_t2_ParamLimits

0xac82,	// (0x000201f8) listscroll_midp_info_pane_t2

0xacc0,	// (0x00020236) listscroll_midp_info_pane_t3_ParamLimits

0xacc0,	// (0x00020236) listscroll_midp_info_pane_t3

0xacfa,	// (0x00020270) listscroll_midp_info_pane_t4_ParamLimits

0xacfa,	// (0x00020270) listscroll_midp_info_pane_t4

0x0003,

0xf7e5,	// (0x00024d5b) listscroll_midp_info_pane_t_ParamLimits

0xf7e5,	// (0x00024d5b) listscroll_midp_info_pane_t

0xca34,	// (0x00021faa) scroll_pane_cp21

0x1556,	// (0x00016acc) form_midp_field_choice_group_pane

0xac45,	// (0x000201bb) form_midp_field_text_pane

0x159c,	// (0x00016b12) form_midp_field_time_pane

0x15a4,	// (0x00016b1a) form_midp_gauge_slider_pane

0x15ad,	// (0x00016b23) form_midp_gauge_wait_pane

0xc3fe,	// (0x00021974) form_midp_image_pane

0xac2e,	// (0x000201a4) list_single_midp_pane_ParamLimits

0xac2e,	// (0x000201a4) list_single_midp_pane

0xac0c,	// (0x00020182) form_midp_field_text_pane_t1

0x1294,	// (0x0001680a) input_focus_pane_cp050

0x1513,	// (0x00016a89) list_midp_form_text_pane

0x14a8,	// (0x00016a1e) form_midp_field_choice_group_pane_t1

0x14b6,	// (0x00016a2c) input_focus_pane_cp051

0x14ca,	// (0x00016a40) list_midp_choice_pane

0xc3fe,	// (0x00021974) status_idle_pane

0x148c,	// (0x00016a02) form_midp_field_time_pane_t1

0xc3f4,	// (0x0002196a) wait_anim_pane_g2_copy1

0x149a,	// (0x00016a10) form_midp_field_time_pane_t2

0x0001,

0xd206,	// (0x0002277c) aid_navinavi_width_2_pane

0xf7e0,	// (0x00024d56) form_midp_field_time_pane_t

0xc3fe,	// (0x00021974) input_focus_pane_cp052

0xc3fe,	// (0x00021974) bg_input_focus_pane_cp040

0x144c,	// (0x000169c2) form_midp_gauge_slider_pane_t1

0x145a,	// (0x000169d0) form_midp_gauge_slider_pane_t2

0xabf0,	// (0x00020166) form_midp_gauge_slider_pane_t3

0xabfe,	// (0x00020174) form_midp_gauge_slider_pane_t4

0x0003,

0xf7d7,	// (0x00024d4d) form_midp_gauge_slider_pane_t

0x1484,	// (0x000169fa) form_midp_slider_pane

0xc45a,	// (0x000219d0) bg_input_focus_pane_cp041_ParamLimits

0xc45a,	// (0x000219d0) bg_input_focus_pane_cp041

0x1419,	// (0x0001698f) form_midp_gauge_wait_pane_t1_ParamLimits

0x1419,	// (0x0001698f) form_midp_gauge_wait_pane_t1

0x142b,	// (0x000169a1) form_midp_gauge_wait_pane_t2_ParamLimits

0x142b,	// (0x000169a1) form_midp_gauge_wait_pane_t2

0x0001,

0xf7d2,	// (0x00024d48) form_midp_gauge_wait_pane_t_ParamLimits

0xf7d2,	// (0x00024d48) form_midp_gauge_wait_pane_t

0x143d,	// (0x000169b3) form_midp_wait_pane_ParamLimits

0x143d,	// (0x000169b3) form_midp_wait_pane

0xabba,	// (0x00020130) form_midp_image_pane_g1

0xabc3,	// (0x00020139) form_midp_image_pane_t1

0xabd2,	// (0x00020148) form_midp_image_pane_t2

0xabe1,	// (0x00020157) form_midp_image_pane_t3

0x0002,

0xf7cb,	// (0x00024d41) form_midp_image_pane_t

0x13cb,	// (0x00016941) list_single_midp_pane_g1

0x13d4,	// (0x0001694a) list_single_midp_pane_t1

0xaba5,	// (0x0002011b) list_midp_form_item_pane_ParamLimits

0xaba5,	// (0x0002011b) list_midp_form_item_pane

0xd1ae,	// (0x00022724) list_midp_form_item_pane_t1

0xd1bd,	// (0x00022733) midp_ticker_pane_g1

0xd1c9,	// (0x0002273f) midp_ticker_pane_g2

0x0001,

0xf71f,	// (0x00024c95) midp_ticker_pane_g

0xd1d5,	// (0x0002274b) midp_ticker_pane_t1

0x280e,	// (0x00017d84) midp_editing_number_pane_t1

0x27ec,	// (0x00017d62) midp_editing_number_pane

0x27fb,	// (0x00017d71) midp_ticker_pane

0x256c,	// (0x00017ae2) ai_message_heading_pane

0xc3fe,	// (0x00021974) bg_popup_window_pane_cp14

0x2574,	// (0x00017aea) listscroll_ai_message_pane

0x24f6,	// (0x00017a6c) ai_message_heading_pane_g1_ParamLimits

0x24f6,	// (0x00017a6c) ai_message_heading_pane_g1

0xb15c,	// (0x000206d2) ai_message_heading_pane_g2_ParamLimits

0xb15c,	// (0x000206d2) ai_message_heading_pane_g2

0x250e,	// (0x00017a84) ai_message_heading_pane_g3_ParamLimits

0x250e,	// (0x00017a84) ai_message_heading_pane_g3

0x251a,	// (0x00017a90) ai_message_heading_pane_g4_ParamLimits

0x251a,	// (0x00017a90) ai_message_heading_pane_g4

0x0003,

0xf90c,	// (0x00024e82) ai_message_heading_pane_g_ParamLimits

0xf90c,	// (0x00024e82) ai_message_heading_pane_g

0xb168,	// (0x000206de) ai_message_heading_pane_t1_ParamLimits

0xb168,	// (0x000206de) ai_message_heading_pane_t1

0xb182,	// (0x000206f8) ai_message_heading_pane_t2_ParamLimits

0xb182,	// (0x000206f8) ai_message_heading_pane_t2

0x0001,

0xf915,	// (0x00024e8b) ai_message_heading_pane_t_ParamLimits

0xf915,	// (0x00024e8b) ai_message_heading_pane_t

0x2552,	// (0x00017ac8) bg_popup_heading_pane_cp1_ParamLimits

0x2552,	// (0x00017ac8) bg_popup_heading_pane_cp1

0x24e4,	// (0x00017a5a) list_ai_message_pane_ParamLimits

0x24e4,	// (0x00017a5a) list_ai_message_pane

0xca34,	// (0x00021faa) scroll_pane_cp10

0xb154,	// (0x000206ca) list_ai_message_pane_g1

0x2488,	// (0x000179fe) list_ai_message_pane_g2

0x0001,

0xf8e9,	// (0x00024e5f) list_ai_message_pane_g

0x2490,	// (0x00017a06) list_ai_message_pane_t1_ParamLimits

0x2490,	// (0x00017a06) list_ai_message_pane_t1

0x24a5,	// (0x00017a1b) list_ai_message_pane_t2_ParamLimits

0x24a5,	// (0x00017a1b) list_ai_message_pane_t2

0x24ba,	// (0x00017a30) list_ai_message_pane_t3_ParamLimits

0x24ba,	// (0x00017a30) list_ai_message_pane_t3

0x24cf,	// (0x00017a45) list_ai_message_pane_t4_ParamLimits

0x24cf,	// (0x00017a45) list_ai_message_pane_t4

0x0003,

0xf8ee,	// (0x00024e64) list_ai_message_pane_t_ParamLimits

0xf8ee,	// (0x00024e64) list_ai_message_pane_t

0xb130,	// (0x000206a6) cell_ai_soft_ind_pane_ParamLimits

0xb130,	// (0x000206a6) cell_ai_soft_ind_pane

0xd1e7,	// (0x0002275d) cell_ai_soft_ind_pane_g1_ParamLimits

0xd1e7,	// (0x0002275d) cell_ai_soft_ind_pane_g1

0xc3fe,	// (0x00021974) grid_highlight_cp1

0xd1f4,	// (0x0002276a) text_secondary_cp56_ParamLimits

0xd1f4,	// (0x0002276a) text_secondary_cp56

0x2440,	// (0x000179b6) example_general_pane_ParamLimits

0x2440,	// (0x000179b6) example_general_pane

0x244c,	// (0x000179c2) example_parent_pane_g1_ParamLimits

0x244c,	// (0x000179c2) example_parent_pane_g1

0x2458,	// (0x000179ce) example_parent_pane_t1_ParamLimits

0x2458,	// (0x000179ce) example_parent_pane_t1

0x8957,	// (0x0001decd) popup_preview_text_window_ParamLimits

0x8957,	// (0x0001decd) popup_preview_text_window

0xd109,	// (0x0002267f) list_single_pane_cp2_g4

0xc646,	// (0x00021bbc) bg_popup_preview_window_pane_ParamLimits

0xc646,	// (0x00021bbc) bg_popup_preview_window_pane

0xb092,	// (0x00020608) popup_preview_text_window_t1_ParamLimits

0xb092,	// (0x00020608) popup_preview_text_window_t1

0x21b8,	// (0x0001772e) popup_preview_text_window_t2_ParamLimits

0x21b8,	// (0x0001772e) popup_preview_text_window_t2

0x2201,	// (0x00017777) popup_preview_text_window_t3_ParamLimits

0x2201,	// (0x00017777) popup_preview_text_window_t3

0x2246,	// (0x000177bc) popup_preview_text_window_t4_ParamLimits

0x2246,	// (0x000177bc) popup_preview_text_window_t4

0x0004,

0xf8bd,	// (0x00024e33) popup_preview_text_window_t_ParamLimits

0xf8bd,	// (0x00024e33) popup_preview_text_window_t

0x22c4,	// (0x0001783a) scroll_pane_cp11

0x1174,	// (0x000166ea) bg_popup_preview_window_pane_g1

0xb052,	// (0x000205c8) bg_popup_preview_window_pane_g2

0xb05a,	// (0x000205d0) bg_popup_preview_window_pane_g3

0xb062,	// (0x000205d8) bg_popup_preview_window_pane_g4

0xb06a,	// (0x000205e0) bg_popup_preview_window_pane_g5

0xb072,	// (0x000205e8) bg_popup_preview_window_pane_g6

0xb07a,	// (0x000205f0) bg_popup_preview_window_pane_g7

0xb082,	// (0x000205f8) bg_popup_preview_window_pane_g8

0xe2ec,	// (0x00023862) aid_popup_width_pane

0x88d3,	// (0x0001de49) popup_midp_note_alarm_window_ParamLimits

0x88d3,	// (0x0001de49) popup_midp_note_alarm_window

0xc888,	// (0x00021dfe) data_form_pane_ParamLimits

0x9ff8,	// (0x0001f56e) form_field_data_pane_g1

0xa002,	// (0x0001f578) form_field_data_pane_t1_ParamLimits

0xc894,	// (0x00021e0a) input_focus_pane_ParamLimits

0xc8a2,	// (0x00021e18) data_form_wide_pane_ParamLimits

0xc8b3,	// (0x00021e29) form_field_data_wide_pane_g1

0xc8df,	// (0x00021e55) form_field_data_wide_pane_t1_ParamLimits

0xc71e,	// (0x00021c94) input_focus_pane_cp6_ParamLimits

0xa174,	// (0x0001f6ea) input_popup_find_pane_g1_ParamLimits

0xa174,	// (0x0001f6ea) input_popup_find_pane_g1

0xe428,	// (0x0002399e) aid_navi_side_left_pane

0xe43d,	// (0x000239b3) aid_navi_side_right_pane

0x1b83,	// (0x000170f9) bg_popup_window_pane_cp30_ParamLimits

0x1b83,	// (0x000170f9) bg_popup_window_pane_cp30

0x1bfd,	// (0x00017173) popup_midp_note_alarm_window_g1_ParamLimits

0x1bfd,	// (0x00017173) popup_midp_note_alarm_window_g1

0x1c2d,	// (0x000171a3) popup_midp_note_alarm_window_t1_ParamLimits

0x1c2d,	// (0x000171a3) popup_midp_note_alarm_window_t1

0xae9b,	// (0x00020411) popup_midp_note_alarm_window_t2_ParamLimits

0xae9b,	// (0x00020411) popup_midp_note_alarm_window_t2

0xaf49,	// (0x000204bf) popup_midp_note_alarm_window_t3_ParamLimits

0xaf49,	// (0x000204bf) popup_midp_note_alarm_window_t3

0xaf71,	// (0x000204e7) popup_midp_note_alarm_window_t4_ParamLimits

0xaf71,	// (0x000204e7) popup_midp_note_alarm_window_t4

0x1dc4,	// (0x0001733a) popup_midp_note_alarm_window_t5_ParamLimits

0x1dc4,	// (0x0001733a) popup_midp_note_alarm_window_t5

0x000a,

0xf85a,	// (0x00024dd0) popup_midp_note_alarm_window_t_ParamLimits

0xf85a,	// (0x00024dd0) popup_midp_note_alarm_window_t

0x1e70,	// (0x000173e6) wait_bar_pane_cp1_ParamLimits

0x1e70,	// (0x000173e6) wait_bar_pane_cp1

0xc3fe,	// (0x00021974) wait_anim_pane_copy1

0xc3fe,	// (0x00021974) wait_border_pane_copy1

0x1879,	// (0x00016def) wait_border_pane_g1_copy1

0xc8f9,	// (0x00021e6f) form_field_popup_pane_g1

0xa01c,	// (0x0001f592) form_field_popup_pane_t1_ParamLimits

0xc894,	// (0x00021e0a) input_focus_pane_cp7_ParamLimits

0xc901,	// (0x00021e77) list_form_pane_ParamLimits

0xc90d,	// (0x00021e83) form_field_popup_wide_pane_g1

0xc915,	// (0x00021e8b) form_field_popup_wide_pane_t1_ParamLimits

0xc894,	// (0x00021e0a) input_focus_pane_cp8_ParamLimits

0xc92a,	// (0x00021ea0) list_form_wide_pane_ParamLimits

0x2a52,	// (0x00017fc8) aid_size_cell_graphic_pane

0xa09b,	// (0x0001f611) data_form_pane_t1_ParamLimits

0xb36c,	// (0x000208e2) data_form_wide_pane_t1_ParamLimits

0xa814,	// (0x0001fd8a) bg_status_flat_pane

0x9680,	// (0x0001ebf6) title_pane_t1_ParamLimits

0xc414,	// (0x0002198a) title_pane_t2_ParamLimits

0xc43a,	// (0x000219b0) title_pane_t3_ParamLimits

0xf532,	// (0x00024aa8) title_pane_t_ParamLimits

0xcce9,	// (0x0002225f) level_1_signal_ParamLimits

0xccf6,	// (0x0002226c) level_2_signal_ParamLimits

0xcd03,	// (0x00022279) level_3_signal_ParamLimits

0xcd10,	// (0x00022286) level_4_signal_ParamLimits

0xcd1d,	// (0x00022293) level_5_signal_ParamLimits

0xcd2a,	// (0x000222a0) level_6_signal_ParamLimits

0xcd37,	// (0x000222ad) level_7_signal_ParamLimits

0xcce9,	// (0x0002225f) level_1_battery_ParamLimits

0xccf6,	// (0x0002226c) level_2_battery_ParamLimits

0xcd03,	// (0x00022279) level_3_battery_ParamLimits

0xcd10,	// (0x00022286) level_4_battery_ParamLimits

0xcd1d,	// (0x00022293) level_5_battery_ParamLimits

0xcd2a,	// (0x000222a0) level_6_battery_ParamLimits

0xcd37,	// (0x000222ad) level_7_battery_ParamLimits

0x1a88,	// (0x00016ffe) bg_status_flat_pane_g1

0x1a90,	// (0x00017006) bg_status_flat_pane_g2

0x1a98,	// (0x0001700e) bg_status_flat_pane_g3

0x1aa0,	// (0x00017016) bg_status_flat_pane_g4

0x1aa8,	// (0x0001701e) bg_status_flat_pane_g5

0x1ab0,	// (0x00017026) bg_status_flat_pane_g6

0x1ab8,	// (0x0001702e) bg_status_flat_pane_g7

0x9714,	// (0x0001ec8a) tabs_3_active_pane_t1_ParamLimits

0x9714,	// (0x0001ec8a) tabs_3_passive_pane_t1_ParamLimits

0x972e,	// (0x0001eca4) tabs_4_active_pane_t1_ParamLimits

0x972e,	// (0x0001eca4) tabs_4_1_passive_pane_t1_ParamLimits

0xa1b3,	// (0x0001f729) tabs_2_active_pane_t1_ParamLimits

0xa1b3,	// (0x0001f729) tabs_2_passive_pane_t1_ParamLimits

0xc45a,	// (0x000219d0) bg_active_tab_pane_cp4_ParamLimits

0xa1c5,	// (0x0001f73b) tabs_2_long_active_pane_t1_ParamLimits

0xca44,	// (0x00021fba) bg_passive_tab_pane_cp4_ParamLimits

0xe8c0,	// (0x00023e36) list_single_midp_graphic_pane_t1_ParamLimits

0xc45a,	// (0x000219d0) bg_active_tab_pane_cp5_ParamLimits

0xa1d8,	// (0x0001f74e) tabs_3_long_active_pane_t1_ParamLimits

0xca44,	// (0x00021fba) bg_passive_tab_pane_cp5_ParamLimits

0xe8c0,	// (0x00023e36) list_single_midp_graphic_pane_t1

0xa814,	// (0x0001fd8a) bg_status_flat_pane_ParamLimits

0x0dd9,	// (0x0001634f) indicator_pane_cp2_ParamLimits

0x0dd9,	// (0x0001634f) indicator_pane_cp2

0xa992,	// (0x0001ff08) navi_pane_srt_ParamLimits

0xa992,	// (0x0001ff08) navi_pane_srt

0x0f28,	// (0x0001649e) popup_clock_digital_analogue_window_cp1

0xc4b8,	// (0x00021a2e) indicator_pane_t1

0xd1a6,	// (0x0002271c) copy_highlight_pane

0xd1a6,	// (0x0002271c) cursor_graphics_pane

0xd1a6,	// (0x0002271c) graphic_within_text_pane

0xd1a6,	// (0x0002271c) link_highlight_pane

0x2287,	// (0x000177fd) popup_preview_text_window_t5_ParamLimits

0x2287,	// (0x000177fd) popup_preview_text_window_t5

0xd20e,	// (0x00022784) cursor_digital_pane

0xd20e,	// (0x00022784) cursor_primary_pane

0xd21f,	// (0x00022795) cursor_primary_small_pane

0xd227,	// (0x0002279d) cursor_secondary_pane

0xd22f,	// (0x000227a5) cursor_title_pane

0xd20e,	// (0x00022784) link_highlight_digital_pane

0xd216,	// (0x0002278c) link_highlight_primary_pane

0xd21f,	// (0x00022795) link_highlight_primary_small_pane

0xd227,	// (0x0002279d) link_highlight_secondary_pane

0xd22f,	// (0x000227a5) link_highlight_title_pane

0xd20e,	// (0x00022784) copy_highlight_digital_pane

0xd20e,	// (0x00022784) copy_highlight_primary_pane

0xd21f,	// (0x00022795) copy_highlight_primary_small_pane

0xd227,	// (0x0002279d) copy_highlight_secondary_pane

0xd22f,	// (0x000227a5) copy_highlight_title_pane

0xd227,	// (0x0002279d) graphic_text_digital_pane

0x1b26,	// (0x0001709c) graphic_text_primary_pane

0x1b2f,	// (0x000170a5) graphic_text_primary_small_pane

0xd21f,	// (0x00022795) graphic_text_secondary_pane

0xd20e,	// (0x00022784) graphic_text_title_pane

0xa65c,	// (0x0001fbd2) cursor_primary_pane_g1

0x1b18,	// (0x0001708e) cursor_text_primary_t1

0xae91,	// (0x00020407) cursor_primary_small_pane_g1

0x1b0a,	// (0x00017080) cursor_text_primary_small_t1

0xae87,	// (0x000203fd) cursor_primary_small_pane_g1_copy1

0x1af2,	// (0x00017068) cursor_text_primary_small_t1_copy1

0x1ad0,	// (0x00017046) cursor_text_title_t1

0xae7d,	// (0x000203f3) cursor_title_pane_g1

0xa65c,	// (0x0001fbd2) cursor_digital_pane_g1

0xd237,	// (0x000227ad) cursor_text_digital_t1

0xd245,	// (0x000227bb) link_highlight_primary_pane_g1

0x1a79,	// (0x00016fef) link_highlight_primary_pane_t1

0xd245,	// (0x000227bb) link_highlight_primary_small_pane_g1

0xd24d,	// (0x000227c3) link_highlight_primary_small_pane_t1

0xd245,	// (0x000227bb) link_highlight_secondary_pane_g1

0xd25c,	// (0x000227d2) link_highlight_secondary_pane_t1

0x19de,	// (0x00016f54) link_highlight_title_pane_g1

0x19f5,	// (0x00016f6b) link_highlight_title_pane_t1

0x19de,	// (0x00016f54) link_highlight_digital_pane_g1

0x19e6,	// (0x00016f5c) link_highlight_digital_pane_t1

0x1898,	// (0x00016e0e) copy_highlight_primary_pane_g1

0x18be,	// (0x00016e34) copy_highlight_primary_pane_t1

0x1898,	// (0x00016e0e) copy_highlight_primary_small_pane_g1

0x18af,	// (0x00016e25) copy_highlight_primary_small_pane_t1

0xd26b,	// (0x000227e1) copy_highlight_secondary_pane_g1

0xd273,	// (0x000227e9) copy_highlight_secondary_pane_t1

0x1898,	// (0x00016e0e) copy_highlight_title_pane_g1

0x18a0,	// (0x00016e16) copy_highlight_title_pane_t1

0x1898,	// (0x00016e0e) copy_highlight_digital_pane_g1

0x2c20,	// (0x00018196) copy_highlight_digital_pane_t1

0x2b74,	// (0x000180ea) graphic_text_primary_pane_g1

0x2c04,	// (0x0001817a) graphic_text_primary_pane_t1

0x2c12,	// (0x00018188) graphic_text_primary_pane_t2

0x0001,

0xf989,	// (0x00024eff) graphic_text_primary_pane_t

0x2be0,	// (0x00018156) graphic_text_primary_small_pane_g1

0x2be8,	// (0x0001815e) graphic_text_primary_small_pane_t1

0x2bf6,	// (0x0001816c) graphic_text_primary_small_pane_t2

0x0001,

0xf984,	// (0x00024efa) graphic_text_primary_small_pane_t

0x2bbc,	// (0x00018132) graphic_text_secondary_pane_g1

0x2bc4,	// (0x0001813a) graphic_text_secondary_pane_t1

0x2bd2,	// (0x00018148) graphic_text_secondary_pane_t2

0x0001,

0xf97f,	// (0x00024ef5) graphic_text_secondary_pane_t

0x2b98,	// (0x0001810e) graphic_text_title_pane_g1

0x2ba0,	// (0x00018116) graphic_text_title_pane_t1

0x2bae,	// (0x00018124) graphic_text_title_pane_t2

0x0001,

0xf97a,	// (0x00024ef0) graphic_text_title_pane_t

0x2b74,	// (0x000180ea) graphic_text_digital_pane_g1

0x2b7c,	// (0x000180f2) graphic_text_digital_pane_t1

0x2b8a,	// (0x00018100) graphic_text_digital_pane_t2

0x0001,

0xf975,	// (0x00024eeb) graphic_text_digital_pane_t

0xc45a,	// (0x000219d0) navi_icon_pane_srt_ParamLimits

0xc45a,	// (0x000219d0) navi_icon_pane_srt

0xc3fe,	// (0x00021974) navi_midp_pane_srt

0xc3fe,	// (0x00021974) navi_navi_pane_srt

0xc45a,	// (0x000219d0) navi_text_pane_srt_ParamLimits

0xc45a,	// (0x000219d0) navi_text_pane_srt

0x2b3f,	// (0x000180b5) navi_navi_icon_text_pane_srt

0x2b47,	// (0x000180bd) navi_navi_pane_srt_g1_ParamLimits

0x2b47,	// (0x000180bd) navi_navi_pane_srt_g1

0x2b59,	// (0x000180cf) navi_navi_pane_srt_g2_ParamLimits

0x2b59,	// (0x000180cf) navi_navi_pane_srt_g2

0x0001,

0xf970,	// (0x00024ee6) navi_navi_pane_srt_g_ParamLimits

0xf970,	// (0x00024ee6) navi_navi_pane_srt_g

0x2b6b,	// (0x000180e1) navi_navi_tabs_pane_srt

0x2b3f,	// (0x000180b5) navi_navi_text_pane_srt

0x2b3f,	// (0x000180b5) navi_navi_volume_pane_srt

0x2b30,	// (0x000180a6) navi_navi_text_pane_srt_t1

0xeab2,	// (0x00024028) navi_navi_volume_pane_srt_g1

0xeaba,	// (0x00024030) volume_small_pane_srt_ParamLimits

0xeaba,	// (0x00024030) volume_small_pane_srt

0xe6a8,	// (0x00023c1e) volume_small_pane_srt_g1_ParamLimits

0xe6a8,	// (0x00023c1e) volume_small_pane_srt_g1

0xe6b8,	// (0x00023c2e) volume_small_pane_srt_g2_ParamLimits

0xe6b8,	// (0x00023c2e) volume_small_pane_srt_g2

0xe6c9,	// (0x00023c3f) volume_small_pane_srt_g3_ParamLimits

0xe6c9,	// (0x00023c3f) volume_small_pane_srt_g3

0xe6da,	// (0x00023c50) volume_small_pane_srt_g4_ParamLimits

0xe6da,	// (0x00023c50) volume_small_pane_srt_g4

0xe6eb,	// (0x00023c61) volume_small_pane_srt_g5_ParamLimits

0xe6eb,	// (0x00023c61) volume_small_pane_srt_g5

0xe6fc,	// (0x00023c72) volume_small_pane_srt_g6_ParamLimits

0xe6fc,	// (0x00023c72) volume_small_pane_srt_g6

0xe70d,	// (0x00023c83) volume_small_pane_srt_g7_ParamLimits

0xe70d,	// (0x00023c83) volume_small_pane_srt_g7

0xe71e,	// (0x00023c94) volume_small_pane_srt_g8_ParamLimits

0xe71e,	// (0x00023c94) volume_small_pane_srt_g8

0xe72f,	// (0x00023ca5) volume_small_pane_srt_g9_ParamLimits

0xe72f,	// (0x00023ca5) volume_small_pane_srt_g9

0xe740,	// (0x00023cb6) volume_small_pane_srt_g10_ParamLimits

0xe740,	// (0x00023cb6) volume_small_pane_srt_g10

0x0009,

0xf724,	// (0x00024c9a) volume_small_pane_srt_g_ParamLimits

0xf724,	// (0x00024c9a) volume_small_pane_srt_g

0x9984,	// (0x0001eefa) query_popup_data_pane_cp2

0x2b16,	// (0x0001808c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2b16,	// (0x0001808c) navi_navi_icon_text_pane_srt_t1

0x1b26,	// (0x0001709c) navi_tabs_2_long_pane_srt

0x1b26,	// (0x0001709c) navi_tabs_2_pane_srt

0x1b26,	// (0x0001709c) navi_tabs_3_long_pane_srt

0x1b26,	// (0x0001709c) navi_tabs_3_pane_srt

0x1b26,	// (0x0001709c) navi_tabs_4_pane_srt

0x8e55,	// (0x0001e3cb) tabs_2_active_pane_srt_ParamLimits

0x8e55,	// (0x0001e3cb) tabs_2_active_pane_srt

0x8e65,	// (0x0001e3db) tabs_2_passive_pane_srt_ParamLimits

0x8e65,	// (0x0001e3db) tabs_2_passive_pane_srt

0x1294,	// (0x0001680a) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1294,	// (0x0001680a) bg_passive_tab_pane_cp1_srt

0xb4ee,	// (0x00020a64) bg_passive_tab_pane_g1_cp1_srt

0xa4d2,	// (0x0001fa48) bg_passive_tab_pane_g2_cp1_srt

0xb4f7,	// (0x00020a6d) bg_passive_tab_pane_g3_cp1_srt

0xc44c,	// (0x000219c2) bg_active_tab_pane_cp1_srt_ParamLimits

0xc44c,	// (0x000219c2) bg_active_tab_pane_cp1_srt

0xb500,	// (0x00020a76) tabs_2_active_pane_srt_g1

0xb508,	// (0x00020a7e) tabs_2_active_pane_srt_t1_ParamLimits

0xb508,	// (0x00020a7e) tabs_2_active_pane_srt_t1

0xb4ee,	// (0x00020a64) bg_active_tab_pane_g1_cp1_srt

0xa4d2,	// (0x0001fa48) bg_active_tab_pane_g2_cp1_srt

0xb4f7,	// (0x00020a6d) bg_active_tab_pane_g3_cp1_srt

0x8e22,	// (0x0001e398) tabs_3_active_pane_srt_ParamLimits

0x8e22,	// (0x0001e398) tabs_3_active_pane_srt

0x8e33,	// (0x0001e3a9) tabs_3_passive_pane_cp_srt_ParamLimits

0x8e33,	// (0x0001e3a9) tabs_3_passive_pane_cp_srt

0x8e44,	// (0x0001e3ba) tabs_3_passive_pane_srt_ParamLimits

0x8e44,	// (0x0001e3ba) tabs_3_passive_pane_srt

0x1294,	// (0x0001680a) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1294,	// (0x0001680a) bg_passive_tab_pane_cp2_srt

0xa666,	// (0x0001fbdc) bg_passive_tab_pane_g1_cp2_srt

0xa4d2,	// (0x0001fa48) bg_passive_tab_pane_g2_cp2_srt

0xa66f,	// (0x0001fbe5) bg_passive_tab_pane_g3_cp2_srt

0xc44c,	// (0x000219c2) bg_active_tab_pane_cp2_srt_ParamLimits

0xc44c,	// (0x000219c2) bg_active_tab_pane_cp2_srt

0xb4d0,	// (0x00020a46) tabs_3_active_pane_srt_g1

0xb4d8,	// (0x00020a4e) tabs_3_active_pane_srt_t1_ParamLimits

0xb4d8,	// (0x00020a4e) tabs_3_active_pane_srt_t1

0xa666,	// (0x0001fbdc) bg_active_tab_pane_g1_cp2_srt

0xa4d2,	// (0x0001fa48) bg_active_tab_pane_g2_cp2_srt

0xa66f,	// (0x0001fbe5) bg_active_tab_pane_g3_cp2_srt

0xea6a,	// (0x00023fe0) tabs_4_active_pane_srt_ParamLimits

0xea6a,	// (0x00023fe0) tabs_4_active_pane_srt

0xea7c,	// (0x00023ff2) tabs_4_passive_pane_cp2_srt_ParamLimits

0xea7c,	// (0x00023ff2) tabs_4_passive_pane_cp2_srt

0xe760,	// (0x00023cd6) aid_size_cell_toolbar

0x2636,	// (0x00017bac) main_idle_act_pane_ParamLimits

0xe7c4,	// (0x00023d3a) popup_large_graphic_colour_window_ParamLimits

0x8c09,	// (0x0001e17f) popup_toolbar_window_ParamLimits

0x8c09,	// (0x0001e17f) popup_toolbar_window

0x2839,	// (0x00017daf) list_single_graphic_2heading_pane_ParamLimits

0x2839,	// (0x00017daf) list_single_graphic_2heading_pane

0xcbd1,	// (0x00022147) aid_size_cell_apps_grid_lsc_pane

0xcbe3,	// (0x00022159) aid_size_cell_apps_grid_prt_pane

0xca44,	// (0x00021fba) bg_wml_button_pane_cp1_ParamLimits

0xca44,	// (0x00021fba) bg_wml_button_pane_cp1

0xac0c,	// (0x00020182) form_midp_field_text_pane_t1_ParamLimits

0x1294,	// (0x0001680a) input_focus_pane_cp050_ParamLimits

0x1513,	// (0x00016a89) list_midp_form_text_pane_ParamLimits

0x14b6,	// (0x00016a2c) input_focus_pane_cp051_ParamLimits

0x14ca,	// (0x00016a40) list_midp_choice_pane_ParamLimits

0xab71,	// (0x000200e7) list_single_2graphic_pane_cp3_ParamLimits

0xab71,	// (0x000200e7) list_single_2graphic_pane_cp3

0xab85,	// (0x000200fb) list_single_midp_graphic_pane_ParamLimits

0xab85,	// (0x000200fb) list_single_midp_graphic_pane

0xe7f2,	// (0x00023d68) list_single_graphic_2heading_pane_g1_ParamLimits

0xe7f2,	// (0x00023d68) list_single_graphic_2heading_pane_g1

0xe7fe,	// (0x00023d74) list_single_graphic_2heading_pane_g4_ParamLimits

0xe7fe,	// (0x00023d74) list_single_graphic_2heading_pane_g4

0xe80a,	// (0x00023d80) list_single_graphic_2heading_pane_g5_ParamLimits

0xe80a,	// (0x00023d80) list_single_graphic_2heading_pane_g5

0x0002,

0xf777,	// (0x00024ced) list_single_graphic_2heading_pane_g_ParamLimits

0xf777,	// (0x00024ced) list_single_graphic_2heading_pane_g

0xe816,	// (0x00023d8c) list_single_graphic_2heading_pane_t1_ParamLimits

0xe816,	// (0x00023d8c) list_single_graphic_2heading_pane_t1

0xe82a,	// (0x00023da0) list_single_graphic_2heading_pane_t2_ParamLimits

0xe82a,	// (0x00023da0) list_single_graphic_2heading_pane_t2

0xe844,	// (0x00023dba) list_single_graphic_2heading_pane_t3_ParamLimits

0xe844,	// (0x00023dba) list_single_graphic_2heading_pane_t3

0x0002,

0xf77e,	// (0x00024cf4) list_single_graphic_2heading_pane_t_ParamLimits

0xf77e,	// (0x00024cf4) list_single_graphic_2heading_pane_t

0x1084,	// (0x000165fa) bg_popup_sub_pane_cp2

0x10ae,	// (0x00016624) grid_toobar_pane

0xe85c,	// (0x00023dd2) cell_toolbar_pane_ParamLimits

0xe85c,	// (0x00023dd2) cell_toolbar_pane

0x1118,	// (0x0001668e) cell_toolbar_pane_g1_ParamLimits

0x1118,	// (0x0001668e) cell_toolbar_pane_g1

0xab31,	// (0x000200a7) cell_toolbar_pane_g2_ParamLimits

0xab31,	// (0x000200a7) cell_toolbar_pane_g2

0x0001,

0xf785,	// (0x00024cfb) cell_toolbar_pane_g_ParamLimits

0xf785,	// (0x00024cfb) cell_toolbar_pane_g

0x114e,	// (0x000166c4) grid_highlight_pane_cp2_ParamLimits

0x114e,	// (0x000166c4) grid_highlight_pane_cp2

0x1168,	// (0x000166de) toolbar_button_pane

0x1174,	// (0x000166ea) toolbar_button_pane_g1

0x117c,	// (0x000166f2) toolbar_button_pane_g2

0x1184,	// (0x000166fa) toolbar_button_pane_g3

0x118c,	// (0x00016702) toolbar_button_pane_g4

0x1194,	// (0x0001670a) toolbar_button_pane_g5

0x119c,	// (0x00016712) toolbar_button_pane_g6

0x11a4,	// (0x0001671a) toolbar_button_pane_g7

0x11ac,	// (0x00016722) toolbar_button_pane_g8

0x11b4,	// (0x0001672a) toolbar_button_pane_g9

0x0009,

0xf78a,	// (0x00024d00) toolbar_button_pane_g

0xe894,	// (0x00023e0a) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe894,	// (0x00023e0a) list_single_2graphic_pane_g1_cp3

0x8cb6,	// (0x0001e22c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8cb6,	// (0x0001e22c) list_single_2graphic_pane_g2_cp3

0xe8a0,	// (0x00023e16) list_single_2graphic_pane_g3_cp3

0xe8a8,	// (0x00023e1e) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe8a8,	// (0x00023e1e) list_single_2graphic_pane_g4_cp3

0x8cc7,	// (0x0001e23d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8cc7,	// (0x0001e23d) list_single_2graphic_pane_t1_cp3

0xe8b4,	// (0x00023e2a) list_single_midp_graphic_pane_g2_ParamLimits

0xe8b4,	// (0x00023e2a) list_single_midp_graphic_pane_g2

0xe768,	// (0x00023cde) aid_zoom_text_primary

0xe770,	// (0x00023ce6) aid_zoom_text_secondary

0xd2e8,	// (0x0002285e) status_small_pane_g7_ParamLimits

0xd2e8,	// (0x0002285e) status_small_pane_g7

0xa6cb,	// (0x0001fc41) status_small_pane_t1_ParamLimits

0x965c,	// (0x0001ebd2) title_pane_g2

0x0003,

0xf529,	// (0x00024a9f) title_pane_g

0x99de,	// (0x0001ef54) aid_size_cell_colour_1_pane_ParamLimits

0x99de,	// (0x0001ef54) aid_size_cell_colour_1_pane

0x99f2,	// (0x0001ef68) aid_size_cell_colour_2_pane_ParamLimits

0x99f2,	// (0x0001ef68) aid_size_cell_colour_2_pane

0x9a06,	// (0x0001ef7c) aid_size_cell_colour_3_pane_ParamLimits

0x9a06,	// (0x0001ef7c) aid_size_cell_colour_3_pane

0x9a1a,	// (0x0001ef90) aid_size_cell_colour_4_pane_ParamLimits

0x9a1a,	// (0x0001ef90) aid_size_cell_colour_4_pane

0xe365,	// (0x000238db) title_pane_stacon_g1_ParamLimits

0xe365,	// (0x000238db) title_pane_stacon_g1

0x1915,	// (0x00016e8b) popup_note_wait_window_g3_ParamLimits

0x1915,	// (0x00016e8b) popup_note_wait_window_g3

0x198b,	// (0x00016f01) popup_note_wait_window_t5_ParamLimits

0x198b,	// (0x00016f01) popup_note_wait_window_t5

0xc3fe,	// (0x00021974) main_feb_china_hwr_fs_writing_pane

0x85bd,	// (0x0001db33) popup_feb_china_hwr_fs_window_ParamLimits

0x85bd,	// (0x0001db33) popup_feb_china_hwr_fs_window

0x8ce3,	// (0x0001e259) aid_size_cell_hwr_fs_ParamLimits

0x8ce3,	// (0x0001e259) aid_size_cell_hwr_fs

0x1294,	// (0x0001680a) bg_popup_sub_pane_cp3_ParamLimits

0x1294,	// (0x0001680a) bg_popup_sub_pane_cp3

0x8cf8,	// (0x0001e26e) grid_hwr_fs_pane_ParamLimits

0x8cf8,	// (0x0001e26e) grid_hwr_fs_pane

0xe8d6,	// (0x00023e4c) linegrid_hwr_fs_pane_ParamLimits

0xe8d6,	// (0x00023e4c) linegrid_hwr_fs_pane

0x8d10,	// (0x0001e286) cell_hwr_fs_pane_ParamLimits

0x8d10,	// (0x0001e286) cell_hwr_fs_pane

0x12a0,	// (0x00016816) linegrid_hwr_fs_pane_g1_ParamLimits

0x12a0,	// (0x00016816) linegrid_hwr_fs_pane_g1

0xab45,	// (0x000200bb) linegrid_hwr_fs_pane_g2_ParamLimits

0xab45,	// (0x000200bb) linegrid_hwr_fs_pane_g2

0x12be,	// (0x00016834) linegrid_hwr_fs_pane_g3_ParamLimits

0x12be,	// (0x00016834) linegrid_hwr_fs_pane_g3

0x8d36,	// (0x0001e2ac) linegrid_hwr_fs_pane_g4_ParamLimits

0x8d36,	// (0x0001e2ac) linegrid_hwr_fs_pane_g4

0xe8e6,	// (0x00023e5c) linegrid_hwr_fs_pane_g5_ParamLimits

0xe8e6,	// (0x00023e5c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7b0,	// (0x00024d26) linegrid_hwr_fs_pane_g_ParamLimits

0xf7b0,	// (0x00024d26) linegrid_hwr_fs_pane_g

0x12ca,	// (0x00016840) cell_hwr_fs_pane_g1_ParamLimits

0x12ca,	// (0x00016840) cell_hwr_fs_pane_g1

0x0fbe,	// (0x00016534) cell_hwr_fs_pane_g2_ParamLimits

0x0fbe,	// (0x00016534) cell_hwr_fs_pane_g2

0xab57,	// (0x000200cd) cell_hwr_fs_pane_g3_ParamLimits

0xab57,	// (0x000200cd) cell_hwr_fs_pane_g3

0xab64,	// (0x000200da) cell_hwr_fs_pane_g4_ParamLimits

0xab64,	// (0x000200da) cell_hwr_fs_pane_g4

0x0003,

0xf7bb,	// (0x00024d31) cell_hwr_fs_pane_g_ParamLimits

0xf7bb,	// (0x00024d31) cell_hwr_fs_pane_g

0x8d50,	// (0x0001e2c6) cell_hwr_fs_pane_t1

0xc3fe,	// (0x00021974) grid_highlight_pane_cp6

0xc3fe,	// (0x00021974) main_idle_act2_pane

0xca1b,	// (0x00021f91) aid_inside_area_popup_secondary

0xafb0,	// (0x00020526) aid_inside_area_window_primary_ParamLimits

0xafb0,	// (0x00020526) aid_inside_area_window_primary

0xb526,	// (0x00020a9c) ai2_news_ticker_pane

0x2c37,	// (0x000181ad) aid_size_cell_ai1_link_ParamLimits

0x2c37,	// (0x000181ad) aid_size_cell_ai1_link

0xb52e,	// (0x00020aa4) popup_ai2_data_window_ParamLimits

0xb52e,	// (0x00020aa4) popup_ai2_data_window

0x2c67,	// (0x000181dd) popup_ai2_link_window_ParamLimits

0x2c67,	// (0x000181dd) popup_ai2_link_window

0x1294,	// (0x0001680a) bg_popup_sub_pane_cp4_ParamLimits

0x1294,	// (0x0001680a) bg_popup_sub_pane_cp4

0x2c7b,	// (0x000181f1) grid_ai2_link_pane_ParamLimits

0x2c7b,	// (0x000181f1) grid_ai2_link_pane

0x2c92,	// (0x00018208) popup_ai2_link_window_g1_ParamLimits

0x2c92,	// (0x00018208) popup_ai2_link_window_g1

0x2c9e,	// (0x00018214) popup_ai2_link_window_g2_ParamLimits

0x2c9e,	// (0x00018214) popup_ai2_link_window_g2

0x0001,

0xf98e,	// (0x00024f04) popup_ai2_link_window_g_ParamLimits

0xf98e,	// (0x00024f04) popup_ai2_link_window_g

0x2cad,	// (0x00018223) ai2_mp_button_pane

0x2cb5,	// (0x0001822b) ai2_mp_volume_pane

0x14b6,	// (0x00016a2c) bg_popup_sub_pane_cp5_ParamLimits

0x14b6,	// (0x00016a2c) bg_popup_sub_pane_cp5

0x2cbd,	// (0x00018233) heading_ai2_gene_pane_ParamLimits

0x2cbd,	// (0x00018233) heading_ai2_gene_pane

0x2cc9,	// (0x0001823f) list_ai2_gene_pane_ParamLimits

0x2cc9,	// (0x0001823f) list_ai2_gene_pane

0x2d11,	// (0x00018287) cell_ai2_link_pane_ParamLimits

0x2d11,	// (0x00018287) cell_ai2_link_pane

0x2d27,	// (0x0001829d) cell_ai2_link_pane_g1

0xc3fe,	// (0x00021974) grid_highlight_pane_cp7

0xeacf,	// (0x00024045) ai2_mp_volume_pane_g1

0x2df7,	// (0x0001836d) ai2_mp_volume_pane_g2

0x2d6c,	// (0x000182e2) list_ai2_gene_pane_t1

0x2dff,	// (0x00018375) ai2_mp_volume_pane_g3

0x0002,

0xf9a7,	// (0x00024f1d) ai2_mp_volume_pane_g

0x8e75,	// (0x0001e3eb) volume_small_pane_cp3

0x2e07,	// (0x0001837d) aid_size_cell_ai2_button

0x2e0f,	// (0x00018385) grid_ai2_button_pane

0x2e18,	// (0x0001838e) cell_ai2_button_pane_ParamLimits

0x2e18,	// (0x0001838e) cell_ai2_button_pane

0xc3f4,	// (0x0002196a) cell_ai2_button_pane_g1

0xc3fe,	// (0x00021974) grid_highlight_pane_cp8

0x2db7,	// (0x0001832d) ai2_gene_pane_t1_ParamLimits

0x2db7,	// (0x0001832d) ai2_gene_pane_t1

0x8527,	// (0x0001da9d) aid_height_parent_landscape

0xb218,	// (0x0002078e) aid_height_set_list

0x2636,	// (0x00017bac) aid_size_parent

0x2a52,	// (0x00017fc8) aid_size_cell_graphic_pane_ParamLimits

0x2cd9,	// (0x0001824f) popup_ai2_data_window_g1_ParamLimits

0x2cd9,	// (0x0001824f) popup_ai2_data_window_g1

0x2ce5,	// (0x0001825b) ai2_news_ticker_pane_g1

0x2ced,	// (0x00018263) ai2_news_ticker_pane_g2

0x0001,

0xf993,	// (0x00024f09) ai2_news_ticker_pane_g

0x2cf5,	// (0x0001826b) ai2_news_ticker_pane_t1

0x2d03,	// (0x00018279) ai2_news_ticker_pane_t2

0x0001,

0xf998,	// (0x00024f0e) ai2_news_ticker_pane_t

0x2d30,	// (0x000182a6) heading_ai2_gene_pane_g1

0x2d38,	// (0x000182ae) heading_ai2_gene_pane_t1_ParamLimits

0x2d38,	// (0x000182ae) heading_ai2_gene_pane_t1

0x2d4d,	// (0x000182c3) list_highlight_pane_cp6

0x2d55,	// (0x000182cb) ai2_gene_pane_ParamLimits

0x2d55,	// (0x000182cb) ai2_gene_pane

0x2d7a,	// (0x000182f0) list_ai2_gene_pane_t2

0x0001,

0xf99d,	// (0x00024f13) list_ai2_gene_pane_t

0x2d88,	// (0x000182fe) list_highlight_pane_cp8_ParamLimits

0x2d88,	// (0x000182fe) list_highlight_pane_cp8

0x2d99,	// (0x0001830f) ai2_gene_pane_g1_ParamLimits

0x2d99,	// (0x0001830f) ai2_gene_pane_g1

0x2dab,	// (0x00018321) ai2_gene_pane_g2_ParamLimits

0x2dab,	// (0x00018321) ai2_gene_pane_g2

0x0001,

0xf9a2,	// (0x00024f18) ai2_gene_pane_g_ParamLimits

0xf9a2,	// (0x00024f18) ai2_gene_pane_g

0xc7c9,	// (0x00021d3f) scroll_pane_cp12

0x84e4,	// (0x0001da5a) control_pane_t3_ParamLimits

0x84e4,	// (0x0001da5a) control_pane_t3

0xa6bc,	// (0x0001fc32) status_small_pane_g8_ParamLimits

0xa6bc,	// (0x0001fc32) status_small_pane_g8

0x8680,	// (0x0001dbf6) popup_find_window_ParamLimits

0x890d,	// (0x0001de83) popup_note_image_window_ParamLimits

0x10ea,	// (0x00016660) list_double2_graphic_pane_vc_g1_ParamLimits

0x10ea,	// (0x00016660) list_double2_graphic_pane_vc_g1

0xc7da,	// (0x00021d50) list_double2_graphic_pane_vc_g2_ParamLimits

0xc7da,	// (0x00021d50) list_double2_graphic_pane_vc_g2

0x10f6,	// (0x0001666c) list_double2_graphic_pane_vc_g3_ParamLimits

0x10f6,	// (0x0001666c) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x00024b12) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x00024b12) list_double2_graphic_pane_vc_g

0x1102,	// (0x00016678) list_double2_graphic_pane_vc_t1_ParamLimits

0x1102,	// (0x00016678) list_double2_graphic_pane_vc_t1

0xc7da,	// (0x00021d50) list_single_heading_pane_vc_g1_ParamLimits

0xc7da,	// (0x00021d50) list_single_heading_pane_vc_g1

0x10f6,	// (0x0001666c) list_single_heading_pane_vc_g2_ParamLimits

0x10f6,	// (0x0001666c) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b19) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b19) list_single_heading_pane_vc_g

0x11bc,	// (0x00016732) list_single_heading_pane_vc_t1_ParamLimits

0x11bc,	// (0x00016732) list_single_heading_pane_vc_t1

0x11d2,	// (0x00016748) list_single_heading_pane_vc_t2_ParamLimits

0x11d2,	// (0x00016748) list_single_heading_pane_vc_t2

0x0001,

0xf79f,	// (0x00024d15) list_single_heading_pane_vc_t_ParamLimits

0xf79f,	// (0x00024d15) list_single_heading_pane_vc_t

0x11e4,	// (0x0001675a) list_setting_number_pane_vc_g1_ParamLimits

0x11e4,	// (0x0001675a) list_setting_number_pane_vc_g1

0x11f0,	// (0x00016766) list_setting_number_pane_vc_g2_ParamLimits

0x11f0,	// (0x00016766) list_setting_number_pane_vc_g2

0x0001,

0xf7a4,	// (0x00024d1a) list_setting_number_pane_vc_g_ParamLimits

0xf7a4,	// (0x00024d1a) list_setting_number_pane_vc_g

0x11fc,	// (0x00016772) list_setting_number_pane_vc_t1_ParamLimits

0x11fc,	// (0x00016772) list_setting_number_pane_vc_t1

0x1210,	// (0x00016786) list_setting_number_pane_vc_t2_ParamLimits

0x1210,	// (0x00016786) list_setting_number_pane_vc_t2

0x122c,	// (0x000167a2) list_setting_number_pane_vc_t3_ParamLimits

0x122c,	// (0x000167a2) list_setting_number_pane_vc_t3

0x0002,

0xf7a9,	// (0x00024d1f) list_setting_number_pane_vc_t_ParamLimits

0xf7a9,	// (0x00024d1f) list_setting_number_pane_vc_t

0x1258,	// (0x000167ce) set_value_pane_vc_ParamLimits

0x1258,	// (0x000167ce) set_value_pane_vc

0x2839,	// (0x00017daf) list_double2_graphic_pane_vc_ParamLimits

0x2839,	// (0x00017daf) list_double2_graphic_pane_vc

0x284c,	// (0x00017dc2) list_double2_large_graphic_pane_vc_ParamLimits

0x284c,	// (0x00017dc2) list_double2_large_graphic_pane_vc

0x2839,	// (0x00017daf) list_double2_pane_vc_ParamLimits

0x2839,	// (0x00017daf) list_double2_pane_vc

0x2839,	// (0x00017daf) list_double_graphic_heading_pane_vc_ParamLimits

0x2839,	// (0x00017daf) list_double_graphic_heading_pane_vc

0x2839,	// (0x00017daf) list_double_graphic_pane_vc_ParamLimits

0x2839,	// (0x00017daf) list_double_graphic_pane_vc

0x2839,	// (0x00017daf) list_double_heading_pane_vc_ParamLimits

0x2839,	// (0x00017daf) list_double_heading_pane_vc

0x285e,	// (0x00017dd4) list_double_large_graphic_pane_vc_ParamLimits

0x285e,	// (0x00017dd4) list_double_large_graphic_pane_vc

0x2839,	// (0x00017daf) list_double_number_pane_vc_ParamLimits

0x2839,	// (0x00017daf) list_double_number_pane_vc

0x2839,	// (0x00017daf) list_double_pane_vc_ParamLimits

0x2839,	// (0x00017daf) list_double_pane_vc

0x2839,	// (0x00017daf) list_double_time_pane_vc_ParamLimits

0x2839,	// (0x00017daf) list_double_time_pane_vc

0x2839,	// (0x00017daf) list_setting_number_pane_vc_ParamLimits

0x2839,	// (0x00017daf) list_setting_number_pane_vc

0x2839,	// (0x00017daf) list_setting_pane_vc_ParamLimits

0x2839,	// (0x00017daf) list_setting_pane_vc

0x2839,	// (0x00017daf) list_single_graphic_heading_pane_vc_ParamLimits

0x2839,	// (0x00017daf) list_single_graphic_heading_pane_vc

0x2839,	// (0x00017daf) list_single_heading_pane_vc_ParamLimits

0x2839,	// (0x00017daf) list_single_heading_pane_vc

0x2839,	// (0x00017daf) list_single_number_heading_pane_vc_ParamLimits

0x2839,	// (0x00017daf) list_single_number_heading_pane_vc

0x2e4c,	// (0x000183c2) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2e4c,	// (0x000183c2) list_double_graphic_heading_pane_vc_g1

0xc7da,	// (0x00021d50) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc7da,	// (0x00021d50) list_double_graphic_heading_pane_vc_g2

0x10f6,	// (0x0001666c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x10f6,	// (0x0001666c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ae,	// (0x00024f24) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ae,	// (0x00024f24) list_double_graphic_heading_pane_vc_g

0x2e58,	// (0x000183ce) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2e58,	// (0x000183ce) list_double_graphic_heading_pane_vc_t1

0x2e6c,	// (0x000183e2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2e6c,	// (0x000183e2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9b5,	// (0x00024f2b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9b5,	// (0x00024f2b) list_double_graphic_heading_pane_vc_t

0x11e4,	// (0x0001675a) list_setting_pane_vc_g1_ParamLimits

0x11e4,	// (0x0001675a) list_setting_pane_vc_g1

0x11f0,	// (0x00016766) list_setting_pane_vc_g2_ParamLimits

0x11f0,	// (0x00016766) list_setting_pane_vc_g2

0x0001,

0xf7a4,	// (0x00024d1a) list_setting_pane_vc_g_ParamLimits

0xf7a4,	// (0x00024d1a) list_setting_pane_vc_g

0x3089,	// (0x000185ff) list_setting_pane_vc_t1_ParamLimits

0x3089,	// (0x000185ff) list_setting_pane_vc_t1

0x30a5,	// (0x0001861b) list_setting_pane_vc_t2_ParamLimits

0x30a5,	// (0x0001861b) list_setting_pane_vc_t2

0x0001,

0xf9f8,	// (0x00024f6e) list_setting_pane_vc_t_ParamLimits

0xf9f8,	// (0x00024f6e) list_setting_pane_vc_t

0x1258,	// (0x000167ce) set_value_pane_cp_vc_ParamLimits

0x1258,	// (0x000167ce) set_value_pane_cp_vc

0xc7da,	// (0x00021d50) list_single_number_heading_pane_vc_g1_ParamLimits

0xc7da,	// (0x00021d50) list_single_number_heading_pane_vc_g1

0x10f6,	// (0x0001666c) list_single_number_heading_pane_vc_g2_ParamLimits

0x10f6,	// (0x0001666c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b19) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b19) list_single_number_heading_pane_vc_g

0x30bf,	// (0x00018635) list_single_number_heading_pane_vc_t1_ParamLimits

0x30bf,	// (0x00018635) list_single_number_heading_pane_vc_t1

0x30d5,	// (0x0001864b) list_single_number_heading_pane_vc_t2_ParamLimits

0x30d5,	// (0x0001864b) list_single_number_heading_pane_vc_t2

0x30eb,	// (0x00018661) list_single_number_heading_pane_vc_t3_ParamLimits

0x30eb,	// (0x00018661) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fd,	// (0x00024f73) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fd,	// (0x00024f73) list_single_number_heading_pane_vc_t

0x30fd,	// (0x00018673) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x30fd,	// (0x00018673) list_single_graphic_heading_pane_vc_g1

0xc7da,	// (0x00021d50) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc7da,	// (0x00021d50) list_single_graphic_heading_pane_vc_g4

0x10f6,	// (0x0001666c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x10f6,	// (0x0001666c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa04,	// (0x00024f7a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x00024f7a) list_single_graphic_heading_pane_vc_g

0x30bf,	// (0x00018635) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x30bf,	// (0x00018635) list_single_graphic_heading_pane_vc_t1

0x3109,	// (0x0001867f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3109,	// (0x0001867f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x00024f81) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x00024f81) list_single_graphic_heading_pane_vc_t

0xc7da,	// (0x00021d50) list_double2_pane_vc_g1_ParamLimits

0xc7da,	// (0x00021d50) list_double2_pane_vc_g1

0x10f6,	// (0x0001666c) list_double2_pane_vc_g2_ParamLimits

0x10f6,	// (0x0001666c) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b19) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b19) list_double2_pane_vc_g

0x311b,	// (0x00018691) list_double2_pane_vc_t1_ParamLimits

0x311b,	// (0x00018691) list_double2_pane_vc_t1

0x3133,	// (0x000186a9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3133,	// (0x000186a9) list_double2_large_graphic_pane_vc_g1

0x313f,	// (0x000186b5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x313f,	// (0x000186b5) list_double2_large_graphic_pane_vc_g2

0x314b,	// (0x000186c1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x314b,	// (0x000186c1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00024b36) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00024b36) list_double2_large_graphic_pane_vc_g

0x3157,	// (0x000186cd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3157,	// (0x000186cd) list_double2_large_graphic_pane_vc_t1

0x316d,	// (0x000186e3) list_double_time_pane_vc_g1_ParamLimits

0x316d,	// (0x000186e3) list_double_time_pane_vc_g1

0x3179,	// (0x000186ef) list_double_time_pane_vc_g2_ParamLimits

0x3179,	// (0x000186ef) list_double_time_pane_vc_g2

0x0001,

0xfa10,	// (0x00024f86) list_double_time_pane_vc_g_ParamLimits

0xfa10,	// (0x00024f86) list_double_time_pane_vc_g

0x3185,	// (0x000186fb) list_double_time_pane_vc_t1_ParamLimits

0x3185,	// (0x000186fb) list_double_time_pane_vc_t1

0x31a9,	// (0x0001871f) list_double_time_pane_vc_t2_ParamLimits

0x31a9,	// (0x0001871f) list_double_time_pane_vc_t2

0x31d8,	// (0x0001874e) list_double_time_pane_vc_t3_ParamLimits

0x31d8,	// (0x0001874e) list_double_time_pane_vc_t3

0x31ea,	// (0x00018760) list_double_time_pane_vc_t4_ParamLimits

0x31ea,	// (0x00018760) list_double_time_pane_vc_t4

0x0003,

0xfa15,	// (0x00024f8b) list_double_time_pane_vc_t_ParamLimits

0xfa15,	// (0x00024f8b) list_double_time_pane_vc_t

0xc7da,	// (0x00021d50) list_double_pane_vc_g1_ParamLimits

0xc7da,	// (0x00021d50) list_double_pane_vc_g1

0x10f6,	// (0x0001666c) list_double_pane_vc_g2_ParamLimits

0x10f6,	// (0x0001666c) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b19) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b19) list_double_pane_vc_g

0x31fe,	// (0x00018774) list_double_pane_vc_t1_ParamLimits

0x31fe,	// (0x00018774) list_double_pane_vc_t1

0x3212,	// (0x00018788) list_double_pane_vc_t2_ParamLimits

0x3212,	// (0x00018788) list_double_pane_vc_t2

0x0001,

0xfa1e,	// (0x00024f94) list_double_pane_vc_t_ParamLimits

0xfa1e,	// (0x00024f94) list_double_pane_vc_t

0xc7da,	// (0x00021d50) list_double_number_pane_vc_g1_ParamLimits

0xc7da,	// (0x00021d50) list_double_number_pane_vc_g1

0x10f6,	// (0x0001666c) list_double_number_pane_vc_g2_ParamLimits

0x10f6,	// (0x0001666c) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b19) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b19) list_double_number_pane_vc_g

0x322a,	// (0x000187a0) list_double_number_pane_vc_t1_ParamLimits

0x322a,	// (0x000187a0) list_double_number_pane_vc_t1

0x31fe,	// (0x00018774) list_double_number_pane_vc_t2_ParamLimits

0x31fe,	// (0x00018774) list_double_number_pane_vc_t2

0x323c,	// (0x000187b2) list_double_number_pane_vc_t3_ParamLimits

0x323c,	// (0x000187b2) list_double_number_pane_vc_t3

0x0002,

0xfa23,	// (0x00024f99) list_double_number_pane_vc_t_ParamLimits

0xfa23,	// (0x00024f99) list_double_number_pane_vc_t

0x3254,	// (0x000187ca) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3254,	// (0x000187ca) list_double_large_graphic_pane_vc_g1

0x3270,	// (0x000187e6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3270,	// (0x000187e6) list_double_large_graphic_pane_vc_g2

0x3284,	// (0x000187fa) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3284,	// (0x000187fa) list_double_large_graphic_pane_vc_g3

0x3293,	// (0x00018809) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3293,	// (0x00018809) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2a,	// (0x00024fa0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2a,	// (0x00024fa0) list_double_large_graphic_pane_vc_g

0x32a2,	// (0x00018818) list_double_large_graphic_pane_vc_t1_ParamLimits

0x32a2,	// (0x00018818) list_double_large_graphic_pane_vc_t1

0x32be,	// (0x00018834) list_double_large_graphic_pane_vc_t2_ParamLimits

0x32be,	// (0x00018834) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x00024fa9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa33,	// (0x00024fa9) list_double_large_graphic_pane_vc_t

0xc7da,	// (0x00021d50) list_double_heading_pane_vc_g1_ParamLimits

0xc7da,	// (0x00021d50) list_double_heading_pane_vc_g1

0x10f6,	// (0x0001666c) list_double_heading_pane_vc_g2_ParamLimits

0x10f6,	// (0x0001666c) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b19) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b19) list_double_heading_pane_vc_g

0x32e0,	// (0x00018856) list_double_heading_pane_vc_t1_ParamLimits

0x32e0,	// (0x00018856) list_double_heading_pane_vc_t1

0x32f4,	// (0x0001886a) list_double_heading_pane_vc_t2_ParamLimits

0x32f4,	// (0x0001886a) list_double_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x00024fae) list_double_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00024fae) list_double_heading_pane_vc_t

0x330c,	// (0x00018882) list_double_graphic_pane_vc_g1_ParamLimits

0x330c,	// (0x00018882) list_double_graphic_pane_vc_g1

0x331f,	// (0x00018895) list_double_graphic_pane_vc_g2_ParamLimits

0x331f,	// (0x00018895) list_double_graphic_pane_vc_g2

0xc7da,	// (0x00021d50) list_double_graphic_pane_vc_g3_ParamLimits

0xc7da,	// (0x00021d50) list_double_graphic_pane_vc_g3

0x0003,

0xfa3d,	// (0x00024fb3) list_double_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x00024fb3) list_double_graphic_pane_vc_g

0x333c,	// (0x000188b2) list_double_graphic_pane_vc_t1_ParamLimits

0x333c,	// (0x000188b2) list_double_graphic_pane_vc_t1

0x335b,	// (0x000188d1) list_double_graphic_pane_vc_t2_ParamLimits

0x335b,	// (0x000188d1) list_double_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x00024fbc) list_double_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x00024fbc) list_double_graphic_pane_vc_t

0xe2f8,	// (0x0002386e) aid_size_cell_fastswap

0x7f4c,	// (0x0001d4c2) aid_size_cell_touch_ParamLimits

0x7f4c,	// (0x0001d4c2) aid_size_cell_touch

0xe30a,	// (0x00023880) popup_fast_swap_wide_window_ParamLimits

0xe30a,	// (0x00023880) popup_fast_swap_wide_window

0x826b,	// (0x0001d7e1) touch_pane_ParamLimits

0x826b,	// (0x0001d7e1) touch_pane

0xc85d,	// (0x00021dd3) button_value_adjust_pane_cp2

0xc865,	// (0x00021ddb) button_value_adjust_pane_cp4

0xc86d,	// (0x00021de3) form_field_data_pane_cp2

0x9fa4,	// (0x0001f51a) form_field_data_wide_pane_cp2

0xcc08,	// (0x0002217e) bg_scroll_pane_ParamLimits

0x835b,	// (0x0001d8d1) scroll_handle_pane_ParamLimits

0xe4be,	// (0x00023a34) scroll_sc2_down_pane_ParamLimits

0xe4be,	// (0x00023a34) scroll_sc2_down_pane

0xcc39,	// (0x000221af) scroll_sc2_up_pane_ParamLimits

0xcc39,	// (0x000221af) scroll_sc2_up_pane

0xb677,	// (0x00020bed) grid_wheel_folder_pane_g1_ParamLimits

0xb677,	// (0x00020bed) grid_wheel_folder_pane_g1

0xe640,	// (0x00023bb6) clock_nsta_pane_cp2_ParamLimits

0xe640,	// (0x00023bb6) clock_nsta_pane_cp2

0xa5a0,	// (0x0001fb16) listscroll_midp_pane_ParamLimits

0xa5ac,	// (0x0001fb22) midp_canvas_pane

0xd30a,	// (0x00022880) nsta_clock_indic_pane

0xd332,	// (0x000228a8) listscroll_form_pane_vc

0xd33a,	// (0x000228b0) listscroll_set_pane_vc_ParamLimits

0xd33a,	// (0x000228b0) listscroll_set_pane_vc

0xa83c,	// (0x0001fdb2) clock_nsta_pane

0xa866,	// (0x0001fddc) indicator_nsta_pane

0x1084,	// (0x000165fa) bg_popup_sub_pane_cp2_ParamLimits

0x1098,	// (0x0001660e) find_pane_cp2_ParamLimits

0x1098,	// (0x0001660e) find_pane_cp2

0x10ae,	// (0x00016624) grid_toobar_pane_ParamLimits

0x1268,	// (0x000167de) list_form_gen_pane_vc_ParamLimits

0x1268,	// (0x000167de) list_form_gen_pane_vc

0x127e,	// (0x000167f4) scroll_pane_cp8_vc_ParamLimits

0x127e,	// (0x000167f4) scroll_pane_cp8_vc

0x12fa,	// (0x00016870) data_form_wide_pane_vc_ParamLimits

0x12fa,	// (0x00016870) data_form_wide_pane_vc

0x1306,	// (0x0001687c) form_field_data_wide_pane_vc_g1

0x130e,	// (0x00016884) form_field_data_wide_pane_vc_t1_ParamLimits

0x130e,	// (0x00016884) form_field_data_wide_pane_vc_t1

0xc894,	// (0x00021e0a) input_focus_pane_cp6_vc_ParamLimits

0xc894,	// (0x00021e0a) input_focus_pane_cp6_vc

0x169c,	// (0x00016c12) list_midp_pane_ParamLimits

0x2abc,	// (0x00018032) scroll_pane_cp16_ParamLimits

0x2abc,	// (0x00018032) scroll_pane_cp16

0x16f2,	// (0x00016c68) button_value_adjust_pane_ParamLimits

0x16f2,	// (0x00016c68) button_value_adjust_pane

0xb229,	// (0x0002079f) button_value_adjust_pane_cp6_ParamLimits

0xb229,	// (0x0002079f) button_value_adjust_pane_cp6

0xb343,	// (0x000208b9) settings_code_pane_cp_ParamLimits

0xb343,	// (0x000208b9) settings_code_pane_cp

0xc3f4,	// (0x0002196a) cell_touch_pane_g1

0xc3f4,	// (0x0002196a) cell_touch_pane_g2

0x0001,

0xf6ca,	// (0x00024c40) cell_touch_pane_g

0xb544,	// (0x00020aba) cell_touch_pane_cp_ParamLimits

0xb544,	// (0x00020aba) cell_touch_pane_cp

0xb560,	// (0x00020ad6) cell_touch_pane_ParamLimits

0xb560,	// (0x00020ad6) cell_touch_pane

0xc3f4,	// (0x0002196a) scroll_sc2_down_pane_g1

0xc3f4,	// (0x0002196a) scroll_sc2_up_pane_g1

0xc3fe,	// (0x00021974) bg_set_opt_pane_cp4_vc

0x2e84,	// (0x000183fa) list_set_graphic_pane_vc_g1_ParamLimits

0x2e84,	// (0x000183fa) list_set_graphic_pane_vc_g1

0x2e90,	// (0x00018406) list_set_graphic_pane_vc_g2_ParamLimits

0x2e90,	// (0x00018406) list_set_graphic_pane_vc_g2

0x0001,

0xf9ba,	// (0x00024f30) list_set_graphic_pane_vc_g_ParamLimits

0xf9ba,	// (0x00024f30) list_set_graphic_pane_vc_g

0x2e9c,	// (0x00018412) text_primary_small_cp13_vc_ParamLimits

0x2e9c,	// (0x00018412) text_primary_small_cp13_vc

0x2eb4,	// (0x0001842a) list_set_graphic_pane_vc_ParamLimits

0x2eb4,	// (0x0001842a) list_set_graphic_pane_vc

0xc3fe,	// (0x00021974) input_focus_pane_cp2_vc

0xc3f4,	// (0x0002196a) setting_code_pane_vc_g1

0xc471,	// (0x000219e7) setting_code_pane_vc_t1

0x2ec7,	// (0x0001843d) set_text_pane_vc_t1_ParamLimits

0x2ec7,	// (0x0001843d) set_text_pane_vc_t1

0xc3fe,	// (0x00021974) input_focus_pane_cp1_vc

0x2ee4,	// (0x0001845a) list_set_text_pane_vc

0xc3f4,	// (0x0002196a) setting_text_pane_vc_g1

0xc3fe,	// (0x00021974) bg_set_opt_pane_cp2_vc

0xc468,	// (0x000219de) setting_slider_graphic_pane_vc_g1

0x2eee,	// (0x00018464) setting_slider_graphic_pane_vc_t1

0x2efe,	// (0x00018474) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9bf,	// (0x00024f35) setting_slider_graphic_pane_vc_t

0x2f0e,	// (0x00018484) slider_set_pane_cp_vc

0x2f16,	// (0x0001848c) slider_set_pane_vc_g1

0x2f1f,	// (0x00018495) slider_set_pane_vc_g2

0x0006,

0xf9c4,	// (0x00024f3a) slider_set_pane_vc_g

0xc95a,	// (0x00021ed0) set_opt_bg_pane_g1_copy1

0xc962,	// (0x00021ed8) set_opt_bg_pane_g2_copy1

0x2f4b,	// (0x000184c1) set_opt_bg_pane_g3_copy1

0xc972,	// (0x00021ee8) set_opt_bg_pane_g4_copy1

0xc97a,	// (0x00021ef0) set_opt_bg_pane_g5_copy1

0xc982,	// (0x00021ef8) set_opt_bg_pane_g6_copy1

0x2f53,	// (0x000184c9) set_opt_bg_pane_g7_copy1

0x2f5d,	// (0x000184d3) set_opt_bg_pane_g8_copy1

0x2f65,	// (0x000184db) set_opt_bg_pane_g9_copy1

0xc3fe,	// (0x00021974) bg_set_opt_pane_cp_vc

0x2f6d,	// (0x000184e3) setting_slider_pane_vc_t1

0x2f7c,	// (0x000184f2) setting_slider_pane_vc_t2

0x2f8c,	// (0x00018502) setting_slider_pane_vc_t3

0x0002,

0xf9d3,	// (0x00024f49) setting_slider_pane_vc_t

0x2f9c,	// (0x00018512) slider_set_pane_vc

0xe8fc,	// (0x00023e72) volume_set_pane_vc_g1

0xead7,	// (0x0002404d) volume_set_pane_vc_g2

0xeae0,	// (0x00024056) volume_set_pane_vc_g3

0xeae9,	// (0x0002405f) volume_set_pane_vc_g4

0xeaf2,	// (0x00024068) volume_set_pane_vc_g5

0xeafb,	// (0x00024071) volume_set_pane_vc_g6

0xeb04,	// (0x0002407a) volume_set_pane_vc_g7

0xeb0d,	// (0x00024083) volume_set_pane_vc_g8

0xeb16,	// (0x0002408c) volume_set_pane_vc_g9

0xeb1f,	// (0x00024095) volume_set_pane_vc_g10

0x0009,

0xf9da,	// (0x00024f50) volume_set_pane_vc_g

0x2fa4,	// (0x0001851a) volume_set_pane_vc

0x2fae,	// (0x00018524) button_value_adjust_pane_cp1_vc

0x2fb8,	// (0x0001852e) list_highlight_pane_cp2_vc

0x2fc1,	// (0x00018537) list_set_pane_vc_ParamLimits

0x2fc1,	// (0x00018537) list_set_pane_vc

0x301f,	// (0x00018595) main_pane_set_vc_t1_ParamLimits

0x301f,	// (0x00018595) main_pane_set_vc_t1

0x3034,	// (0x000185aa) main_pane_set_vc_t2_ParamLimits

0x3034,	// (0x000185aa) main_pane_set_vc_t2

0x3046,	// (0x000185bc) main_pane_set_vc_t3_ParamLimits

0x3046,	// (0x000185bc) main_pane_set_vc_t3

0x3058,	// (0x000185ce) main_pane_set_vc_t4_ParamLimits

0x3058,	// (0x000185ce) main_pane_set_vc_t4

0x0003,

0xf9ef,	// (0x00024f65) main_pane_set_vc_t_ParamLimits

0xf9ef,	// (0x00024f65) main_pane_set_vc_t

0x306a,	// (0x000185e0) setting_code_pane_vc_ParamLimits

0x306a,	// (0x000185e0) setting_code_pane_vc

0x3079,	// (0x000185ef) setting_slider_graphic_pane_vc

0x3079,	// (0x000185ef) setting_slider_pane_vc

0x3079,	// (0x000185ef) setting_text_pane_vc

0x3079,	// (0x000185ef) setting_volume_pane_vc

0x3081,	// (0x000185f7) scroll_pane_cp121_vc

0xc84b,	// (0x00021dc1) set_content_pane_vc

0x3385,	// (0x000188fb) button_value_adjust_pane_g1

0x338e,	// (0x00018904) button_value_adjust_pane_g2

0x0001,

0xfa4b,	// (0x00024fc1) button_value_adjust_pane_g

0x3397,	// (0x0001890d) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3397,	// (0x0001890d) form_field_slider_wide_pane_vc_t1

0x33ab,	// (0x00018921) form_field_slider_wide_pane_vc_t2_ParamLimits

0x33ab,	// (0x00018921) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa50,	// (0x00024fc6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa50,	// (0x00024fc6) form_field_slider_wide_pane_vc_t

0xc44c,	// (0x000219c2) input_focus_pane_cp10_vc_ParamLimits

0xc44c,	// (0x000219c2) input_focus_pane_cp10_vc

0x33d9,	// (0x0001894f) slider_cont_pane_cp1_vc_ParamLimits

0x33d9,	// (0x0001894f) slider_cont_pane_cp1_vc

0x33eb,	// (0x00018961) slider_form_pane_g1_cp2

0x2f1f,	// (0x00018495) slider_form_pane_g2_cp2

0x3418,	// (0x0001898e) form_field_slider_pane_vc_t3

0x3426,	// (0x0001899c) form_field_slider_pane_vc_t4

0x3434,	// (0x000189aa) slider_form_pane_vc_ParamLimits

0x3434,	// (0x000189aa) slider_form_pane_vc

0x3441,	// (0x000189b7) form_field_slider_pane_vc_t1_ParamLimits

0x3441,	// (0x000189b7) form_field_slider_pane_vc_t1

0x33ab,	// (0x00018921) form_field_slider_pane_vc_t2_ParamLimits

0x33ab,	// (0x00018921) form_field_slider_pane_vc_t2

0x0001,

0xfa62,	// (0x00024fd8) form_field_slider_pane_vc_t_ParamLimits

0xfa62,	// (0x00024fd8) form_field_slider_pane_vc_t

0xc44c,	// (0x000219c2) input_focus_pane_cp9_vc_ParamLimits

0xc44c,	// (0x000219c2) input_focus_pane_cp9_vc

0x345d,	// (0x000189d3) slider_cont_pane_vc_ParamLimits

0x345d,	// (0x000189d3) slider_cont_pane_vc

0x3471,	// (0x000189e7) list_form_graphic_pane_cp_vc_ParamLimits

0x3471,	// (0x000189e7) list_form_graphic_pane_cp_vc

0x1306,	// (0x0001687c) form_field_popup_wide_pane_vc_g1

0x3486,	// (0x000189fc) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3486,	// (0x000189fc) form_field_popup_wide_pane_vc_t1

0xc894,	// (0x00021e0a) input_focus_pane_cp8_vc_ParamLimits

0xc894,	// (0x00021e0a) input_focus_pane_cp8_vc

0x34cb,	// (0x00018a41) list_form_wide_pane_vc_ParamLimits

0x34cb,	// (0x00018a41) list_form_wide_pane_vc

0x34d7,	// (0x00018a4d) list_form_graphic_pane_vc_g1

0x34df,	// (0x00018a55) list_form_graphic_pane_vc_t1_ParamLimits

0x34df,	// (0x00018a55) list_form_graphic_pane_vc_t1

0xc45a,	// (0x000219d0) list_highlight_pane_cp5_vc_ParamLimits

0xc45a,	// (0x000219d0) list_highlight_pane_cp5_vc

0x34fb,	// (0x00018a71) list_form_graphic_pane_vc_ParamLimits

0x34fb,	// (0x00018a71) list_form_graphic_pane_vc

0x1306,	// (0x0001687c) form_field_popup_pane_vc_g1

0x3511,	// (0x00018a87) form_field_popup_pane_vc_t1_ParamLimits

0x3511,	// (0x00018a87) form_field_popup_pane_vc_t1

0xc894,	// (0x00021e0a) input_focus_pane_cp7_vc_ParamLimits

0xc894,	// (0x00021e0a) input_focus_pane_cp7_vc

0x3528,	// (0x00018a9e) list_form_pane_vc_ParamLimits

0x3528,	// (0x00018a9e) list_form_pane_vc

0x3534,	// (0x00018aaa) data_form_pane_vc_t1_ParamLimits

0x3534,	// (0x00018aaa) data_form_pane_vc_t1

0xc95a,	// (0x00021ed0) input_focus_pane_vc_g1

0xc962,	// (0x00021ed8) input_focus_pane_vc_g2

0xc96a,	// (0x00021ee0) input_focus_pane_vc_g3

0xc972,	// (0x00021ee8) input_focus_pane_vc_g4

0xc97a,	// (0x00021ef0) input_focus_pane_vc_g5

0xc982,	// (0x00021ef8) input_focus_pane_vc_g6

0xc98a,	// (0x00021f00) input_focus_pane_vc_g7

0xc992,	// (0x00021f08) input_focus_pane_vc_g8

0xc99a,	// (0x00021f10) input_focus_pane_vc_g9

0xc3f4,	// (0x0002196a) input_focus_pane_vc_g10

0x0009,

0xf653,	// (0x00024bc9) input_focus_pane_vc_g

0x12fa,	// (0x00016870) data_form_pane_vc_ParamLimits

0x12fa,	// (0x00016870) data_form_pane_vc

0x1306,	// (0x0001687c) form_field_data_pane_vc_g1

0x354f,	// (0x00018ac5) form_field_data_pane_vc_t1_ParamLimits

0x354f,	// (0x00018ac5) form_field_data_pane_vc_t1

0xc894,	// (0x00021e0a) input_focus_pane_vc_ParamLimits

0xc894,	// (0x00021e0a) input_focus_pane_vc

0x3569,	// (0x00018adf) button_value_adjust_pane_cp3_vc

0x3571,	// (0x00018ae7) button_value_adjust_pane_cp5_vc

0x3579,	// (0x00018aef) form_field_data_pane_vc_ParamLimits

0x3579,	// (0x00018aef) form_field_data_pane_vc

0x3590,	// (0x00018b06) form_field_data_pane_vc_cp2

0x3598,	// (0x00018b0e) form_field_data_wide_pane_vc_ParamLimits

0x3598,	// (0x00018b0e) form_field_data_wide_pane_vc

0x35ae,	// (0x00018b24) form_field_data_wide_pane_vc_cp2

0x35b6,	// (0x00018b2c) form_field_popup_pane_vc_ParamLimits

0x35b6,	// (0x00018b2c) form_field_popup_pane_vc

0x35cd,	// (0x00018b43) form_field_popup_wide_pane_vc_ParamLimits

0x35cd,	// (0x00018b43) form_field_popup_wide_pane_vc

0x35e3,	// (0x00018b59) form_field_slider_pane_vc_ParamLimits

0x35e3,	// (0x00018b59) form_field_slider_pane_vc

0x35f6,	// (0x00018b6c) form_field_slider_wide_pane_vc_ParamLimits

0x35f6,	// (0x00018b6c) form_field_slider_wide_pane_vc

0xb57d,	// (0x00020af3) grid_touch_1_pane_ParamLimits

0xb57d,	// (0x00020af3) grid_touch_1_pane

0xb591,	// (0x00020b07) grid_touch_2_pane_ParamLimits

0xb591,	// (0x00020b07) grid_touch_2_pane

0x36da,	// (0x00018c50) touch_pane_g1_ParamLimits

0x36da,	// (0x00018c50) touch_pane_g1

0x362d,	// (0x00018ba3) cell_app_pane_cp_wide_ParamLimits

0x362d,	// (0x00018ba3) cell_app_pane_cp_wide

0x363e,	// (0x00018bb4) grid_popup_fast_wide_pane_ParamLimits

0x363e,	// (0x00018bb4) grid_popup_fast_wide_pane

0x3652,	// (0x00018bc8) scroll_pane_cp19_ParamLimits

0x3652,	// (0x00018bc8) scroll_pane_cp19

0xc3fe,	// (0x00021974) bg_popup_window_pane_cp20

0x3666,	// (0x00018bdc) listscroll_popup_fast_wide_pane

0xb5bb,	// (0x00020b31) grid_indicator_nsta_pane

0x3680,	// (0x00018bf6) clock_nsta_pane_g1

0x3689,	// (0x00018bff) clock_nsta_pane_t1

0xb5c7,	// (0x00020b3d) cell_indicator_nsta_pane_ParamLimits

0xb5c7,	// (0x00020b3d) cell_indicator_nsta_pane

0x36da,	// (0x00018c50) cell_indicator_nsta_pane_g1

0xb5e2,	// (0x00020b58) cell_indicator_nsta_pane_g2

0x0001,

0xfa73,	// (0x00024fe9) cell_indicator_nsta_pane_g

0x36fa,	// (0x00018c70) clock_nsta_pane_cp

0x3703,	// (0x00018c79) indicator_nsta_pane_cp

0x370d,	// (0x00018c83) nsta_clock_indic_pane_g1

0xc4b0,	// (0x00021a26) grid_indicator_pane

0xa357,	// (0x0001f8cd) scroll_pane_cp29

0xe58f,	// (0x00023b05) indicator_nsta_pane_cp2_ParamLimits

0xe58f,	// (0x00023b05) indicator_nsta_pane_cp2

0xc45a,	// (0x000219d0) main_apps_wheel_pane

0xac45,	// (0x000201bb) form_midp_field_text_pane_ParamLimits

0x16a8,	// (0x00016c1e) scroll_bar_cp050_ParamLimits

0x3766,	// (0x00018cdc) cell_indicator_pane_ParamLimits

0x3766,	// (0x00018cdc) cell_indicator_pane

0x377f,	// (0x00018cf5) cell_indicator_pane_g1

0xb601,	// (0x00020b77) grid_wheel_folder_pane_ParamLimits

0xb601,	// (0x00020b77) grid_wheel_folder_pane

0xb60f,	// (0x00020b85) list_wheel_apps_pane_ParamLimits

0xb60f,	// (0x00020b85) list_wheel_apps_pane

0xb61d,	// (0x00020b93) main_apps_wheel_pane_g1_ParamLimits

0xb61d,	// (0x00020b93) main_apps_wheel_pane_g1

0xb629,	// (0x00020b9f) main_apps_wheel_pane_g2_ParamLimits

0xb629,	// (0x00020b9f) main_apps_wheel_pane_g2

0x0001,

0xfa8f,	// (0x00025005) main_apps_wheel_pane_g_ParamLimits

0xfa8f,	// (0x00025005) main_apps_wheel_pane_g

0xb637,	// (0x00020bad) main_apps_wheel_pane_t1_ParamLimits

0xb637,	// (0x00020bad) main_apps_wheel_pane_t1

0xb64b,	// (0x00020bc1) list_wheel_apps_pane_g1

0xb653,	// (0x00020bc9) list_wheel_apps_pane_g2

0xb65b,	// (0x00020bd1) list_wheel_apps_pane_g3

0xb663,	// (0x00020bd9) list_wheel_apps_pane_g4

0xb66d,	// (0x00020be3) list_wheel_apps_pane_g5

0x0004,

0xfa94,	// (0x0002500a) list_wheel_apps_pane_g

0xd057,	// (0x000225cd) navi_icon_text_pane

0xa730,	// (0x0001fca6) aid_fill_nsta

0x3846,	// (0x00018dbc) navi_icon_text_pane_g1

0x3852,	// (0x00018dc8) navi_icon_text_pane_t1

0xcf47,	// (0x000224bd) list_set_graphic_pane_t1_ParamLimits

0xcf47,	// (0x000224bd) list_set_graphic_pane_t1

0x1df3,	// (0x00017369) popup_midp_note_alarm_window_t6_ParamLimits

0x1df3,	// (0x00017369) popup_midp_note_alarm_window_t6

0x1e05,	// (0x0001737b) popup_midp_note_alarm_window_t7_ParamLimits

0x1e05,	// (0x0001737b) popup_midp_note_alarm_window_t7

0x1e17,	// (0x0001738d) popup_midp_note_alarm_window_t8_ParamLimits

0x1e17,	// (0x0001738d) popup_midp_note_alarm_window_t8

0x1e29,	// (0x0001739f) popup_midp_note_alarm_window_t9_ParamLimits

0x1e29,	// (0x0001739f) popup_midp_note_alarm_window_t9

0x1e3b,	// (0x000173b1) popup_midp_note_alarm_window_t10_ParamLimits

0x1e3b,	// (0x000173b1) popup_midp_note_alarm_window_t10

0x1e4d,	// (0x000173c3) popup_midp_note_alarm_window_t11_ParamLimits

0x1e4d,	// (0x000173c3) popup_midp_note_alarm_window_t11

0xaf91,	// (0x00020507) scroll_pane_cp17_ParamLimits

0xaf91,	// (0x00020507) scroll_pane_cp17

0xe8fc,	// (0x00023e72) volume_small_pane_cp_g1

0xeb28,	// (0x0002409e) volume_small_pane_cp_g2

0xeb31,	// (0x000240a7) volume_small_pane_cp_g3

0xeb3a,	// (0x000240b0) volume_small_pane_cp_g4

0xeb43,	// (0x000240b9) volume_small_pane_cp_g5

0xeaf2,	// (0x00024068) volume_small_pane_cp_g6

0xeb4c,	// (0x000240c2) volume_small_pane_cp_g7

0xeb55,	// (0x000240cb) volume_small_pane_cp_g8

0xeb5e,	// (0x000240d4) volume_small_pane_cp_g9

0xeb67,	// (0x000240dd) volume_small_pane_cp_g10

0xd1bd,	// (0x00022733) midp_ticker_pane_g1_ParamLimits

0xd1c9,	// (0x0002273f) midp_ticker_pane_g2_ParamLimits

0xf71f,	// (0x00024c95) midp_ticker_pane_g_ParamLimits

0xd1d5,	// (0x0002274b) midp_ticker_pane_t1_ParamLimits

0xa754,	// (0x0001fcca) aid_fill_nsta_2

0x1694,	// (0x00016c0a) list_form2_midp_pane

0x27ec,	// (0x00017d62) midp_editing_number_pane_ParamLimits

0x27fb,	// (0x00017d71) midp_ticker_pane_ParamLimits

0x3864,	// (0x00018dda) form2_midp_field_pane

0x3888,	// (0x00018dfe) scroll_pane_cp51

0x38a8,	// (0x00018e1e) form2_midp_button_pane_ParamLimits

0x38a8,	// (0x00018e1e) form2_midp_button_pane

0x38ba,	// (0x00018e30) form2_midp_content_pane_ParamLimits

0x38ba,	// (0x00018e30) form2_midp_content_pane

0x38d4,	// (0x00018e4a) form2_midp_field_choice_group_pane

0x38dc,	// (0x00018e52) form2_midp_field_pane_g1

0x38e4,	// (0x00018e5a) form2_midp_field_pane_g2

0x38ec,	// (0x00018e62) form2_midp_field_pane_g3

0x38f4,	// (0x00018e6a) form2_midp_field_pane_g4

0x0003,

0xfab9,	// (0x0002502f) form2_midp_field_pane_g

0x38fc,	// (0x00018e72) form2_midp_gauge_slider_pane

0x3904,	// (0x00018e7a) form2_midp_gauge_wait_pane

0x390c,	// (0x00018e82) form2_midp_image_pane_ParamLimits

0x390c,	// (0x00018e82) form2_midp_image_pane

0xb6a0,	// (0x00020c16) form2_midp_label_pane_ParamLimits

0xb6a0,	// (0x00020c16) form2_midp_label_pane

0xb6b9,	// (0x00020c2f) form2_midp_label_pane_cp_ParamLimits

0xb6b9,	// (0x00020c2f) form2_midp_label_pane_cp

0x3961,	// (0x00018ed7) form2_midp_string_pane_ParamLimits

0x3961,	// (0x00018ed7) form2_midp_string_pane

0xb6d8,	// (0x00020c4e) form2_midp_text_pane_ParamLimits

0xb6d8,	// (0x00020c4e) form2_midp_text_pane

0x398e,	// (0x00018f04) form2_midp_time_pane

0x399e,	// (0x00018f14) input_focus_pane_cp51_ParamLimits

0x399e,	// (0x00018f14) input_focus_pane_cp51

0xb6f1,	// (0x00020c67) form2_midp_label_pane_t1_ParamLimits

0xb6f1,	// (0x00020c67) form2_midp_label_pane_t1

0xb731,	// (0x00020ca7) form2_mdip_text_pane_t1_ParamLimits

0xb731,	// (0x00020ca7) form2_mdip_text_pane_t1

0x3a16,	// (0x00018f8c) form2_midp_time_pane_t1

0x3a31,	// (0x00018fa7) form2_midp_gauge_slider_pane_t1

0xb74d,	// (0x00020cc3) form2_midp_gauge_slider_pane_t2

0xb75f,	// (0x00020cd5) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac2,	// (0x00025038) form2_midp_gauge_slider_pane_t

0x3a67,	// (0x00018fdd) form2_midp_slider_pane

0x3a73,	// (0x00018fe9) form2_midp_gauge_wait_pane_t1

0x3a81,	// (0x00018ff7) form2_midp_wait_pane_ParamLimits

0x3a81,	// (0x00018ff7) form2_midp_wait_pane

0xb771,	// (0x00020ce7) list_single_2graphic_pane_cp4_ParamLimits

0xb771,	// (0x00020ce7) list_single_2graphic_pane_cp4

0xab85,	// (0x000200fb) list_single_midp_graphic_pane_cp_ParamLimits

0xab85,	// (0x000200fb) list_single_midp_graphic_pane_cp

0xc3fe,	// (0x00021974) list_highlight_pane_cp20

0x3ad4,	// (0x0001904a) list_single_2graphic_pane_g1_cp4

0x2d30,	// (0x000182a6) list_single_2graphic_pane_g2_cp4

0x3adc,	// (0x00019052) list_single_2graphic_pane_t1_cp4

0xc45a,	// (0x000219d0) list_highlight_pane_cp21

0x3aeb,	// (0x00019061) list_single_midp_graphic_pane_g4_cp

0x3afa,	// (0x00019070) list_single_midp_graphic_pane_t1_cp

0xb786,	// (0x00020cfc) form2_mdip_string_pane_t1_ParamLimits

0xb786,	// (0x00020cfc) form2_mdip_string_pane_t1

0xc3fe,	// (0x00021974) bg_wml_button_pane_cp2

0xc3f4,	// (0x0002196a) form2_midp_image_pane_g1

0xc7fe,	// (0x00021d74) list_double_large_graphic_pane_g5_ParamLimits

0xc7fe,	// (0x00021d74) list_double_large_graphic_pane_g5

0xa5a0,	// (0x0001fb16) midp_form_pane_ParamLimits

0xc45a,	// (0x000219d0) main_apps_wheel_pane_ParamLimits

0x8994,	// (0x0001df0a) popup_preview_window_ParamLimits

0x8994,	// (0x0001df0a) popup_preview_window

0x8c61,	// (0x0001e1d7) popup_touch_info_window_ParamLimits

0x8c61,	// (0x0001e1d7) popup_touch_info_window

0x8c7f,	// (0x0001e1f5) popup_touch_menu_window_ParamLimits

0x8c7f,	// (0x0001e1f5) popup_touch_menu_window

0xc3ea,	// (0x00021960) bg_popup_sub_pane_cp6

0x3c16,	// (0x0001918c) list_touch_menu_pane

0xb7fc,	// (0x00020d72) list_single_touch_menu_pane_ParamLimits

0xb7fc,	// (0x00020d72) list_single_touch_menu_pane

0xb810,	// (0x00020d86) list_single_touch_menu_pane_t1

0xc45a,	// (0x000219d0) bg_popup_sub_pane_cp7_ParamLimits

0xc45a,	// (0x000219d0) bg_popup_sub_pane_cp7

0x3c42,	// (0x000191b8) heading_sub_pane

0x3c4a,	// (0x000191c0) list_touch_info_pane_ParamLimits

0x3c4a,	// (0x000191c0) list_touch_info_pane

0x3c59,	// (0x000191cf) list_single_touch_info_pane_ParamLimits

0x3c59,	// (0x000191cf) list_single_touch_info_pane

0x3c6b,	// (0x000191e1) list_single_touch_info_pane_t1

0x3c79,	// (0x000191ef) list_single_touch_info_pane_t2

0x0001,

0xfad0,	// (0x00025046) list_single_touch_info_pane_t

0xd1a6,	// (0x0002271c) bg_popup_heading_pane_cp

0x3c87,	// (0x000191fd) heading_sub_pane_t1

0x1294,	// (0x0001680a) bg_popup_preview_window_pane_cp_ParamLimits

0x1294,	// (0x0001680a) bg_popup_preview_window_pane_cp

0x3c42,	// (0x000191b8) heading_preview_pane

0x3c4a,	// (0x000191c0) list_preview_pane_ParamLimits

0x3c4a,	// (0x000191c0) list_preview_pane

0x3c95,	// (0x0001920b) popup_preview_window_g1

0x3c59,	// (0x000191cf) list_single_preview_pane_ParamLimits

0x3c59,	// (0x000191cf) list_single_preview_pane

0x3c9d,	// (0x00019213) list_single_preview_pane_g1

0x3ca5,	// (0x0001921b) list_single_preview_pane_t1

0x3c6b,	// (0x000191e1) list_single_preview_pane_t2

0x0001,

0xfad5,	// (0x0002504b) list_single_preview_pane_t

0x3cb3,	// (0x00019229) bg_popup_heading_pane_cp2_ParamLimits

0x3cb3,	// (0x00019229) bg_popup_heading_pane_cp2

0x3cc9,	// (0x0001923f) heading_preview_pane_g1

0x3cd1,	// (0x00019247) heading_preview_pane_t1_ParamLimits

0x3cd1,	// (0x00019247) heading_preview_pane_t1

0xc4c7,	// (0x00021a3d) soft_indicator_pane_t1_ParamLimits

0xc7a6,	// (0x00021d1c) scroll_pane_ParamLimits

0xcc27,	// (0x0002219d) scroll_sc2_left_pane

0xcc30,	// (0x000221a6) scroll_sc2_right_pane

0xcc4f,	// (0x000221c5) scroll_bg_pane_g1_ParamLimits

0xcc64,	// (0x000221da) scroll_bg_pane_g2_ParamLimits

0xcc7c,	// (0x000221f2) scroll_bg_pane_g3_ParamLimits

0xf6aa,	// (0x00024c20) scroll_bg_pane_g_ParamLimits

0xcc4f,	// (0x000221c5) scroll_handle_pane_g1_ParamLimits

0xcc91,	// (0x00022207) scroll_handle_pane_g2_ParamLimits

0xcc7c,	// (0x000221f2) scroll_handle_pane_g3_ParamLimits

0xf6b1,	// (0x00024c27) scroll_handle_pane_g_ParamLimits

0x8561,	// (0x0001dad7) popup_choice_list_window_ParamLimits

0x8561,	// (0x0001dad7) popup_choice_list_window

0x1090,	// (0x00016606) choice_list_pane

0x1140,	// (0x000166b6) cell_toolbar_pane_t1

0x1168,	// (0x000166de) toolbar_button_pane_ParamLimits

0x2319,	// (0x0001788f) ai_gene_pane_1_t2_ParamLimits

0x2319,	// (0x0001788f) ai_gene_pane_1_t2

0x0001,

0xf8cd,	// (0x00024e43) ai_gene_pane_1_t_ParamLimits

0xf8cd,	// (0x00024e43) ai_gene_pane_1_t

0x3cee,	// (0x00019264) scroll_sc2_left_pane_g1

0x3cee,	// (0x00019264) scroll_sc2_right_pane_g1

0xca44,	// (0x00021fba) bg_popup_sub_pane_cp10

0x3cf8,	// (0x0001926e) list_choice_list_pane

0xb3ad,	// (0x00020923) list_single_choice_list_pane_ParamLimits

0xb3ad,	// (0x00020923) list_single_choice_list_pane

0xd362,	// (0x000228d8) list_single_choice_list_pane_g1

0xa19e,	// (0x0001f714) list_single_choice_list_pane_t1_ParamLimits

0xa19e,	// (0x0001f714) list_single_choice_list_pane_t1

0x3d2c,	// (0x000192a2) choice_list_pane_g1

0xb81e,	// (0x00020d94) choice_list_pane_t1

0xc3ea,	// (0x00021960) input_focus_pane_cp11

0xcb9c,	// (0x00022112) title_pane_stacon_g2_ParamLimits

0xcb9c,	// (0x00022112) title_pane_stacon_g2

0x0002,

0xf690,	// (0x00024c06) title_pane_stacon_g_ParamLimits

0xf690,	// (0x00024c06) title_pane_stacon_g

0xd1a6,	// (0x0002271c) cursor_press_pane

0x8608,	// (0x0001db7e) popup_fep_hwr_window_ParamLimits

0x8608,	// (0x0001db7e) popup_fep_hwr_window

0xe7a6,	// (0x00023d1c) popup_fep_vkb_window_ParamLimits

0xe7a6,	// (0x00023d1c) popup_fep_vkb_window

0xb82c,	// (0x00020da2) cursor_press_pane_g1

0x0002,

0xfafe,	// (0x00025074) fep_vkb_side_pane_g_ParamLimits

0xeb9b,	// (0x00024111) fep_hwr_candidate_pane_ParamLimits

0xeb9b,	// (0x00024111) fep_hwr_candidate_pane

0xebc5,	// (0x0002413b) fep_hwr_side_pane_ParamLimits

0xebc5,	// (0x0002413b) fep_hwr_side_pane

0xebe5,	// (0x0002415b) fep_hwr_top_pane_ParamLimits

0xebe5,	// (0x0002415b) fep_hwr_top_pane

0xebfd,	// (0x00024173) fep_hwr_write_pane_ParamLimits

0xebfd,	// (0x00024173) fep_hwr_write_pane

0xfafe,	// (0x00025074) fep_vkb_side_pane_g

0x3d4a,	// (0x000192c0) fep_hwr_top_pane_g1

0x3d5c,	// (0x000192d2) fep_hwr_top_pane_g2

0xec37,	// (0x000241ad) fep_hwr_top_pane_g3

0x0002,

0xfada,	// (0x00025050) fep_hwr_top_pane_g

0xec4c,	// (0x000241c2) fep_hwr_top_text_pane

0xcd54,	// (0x000222ca) fep_hwr_top_text_pane_g1

0x3d92,	// (0x00019308) fep_hwr_top_text_pane_t1

0xeccb,	// (0x00024241) fep_hwr_candidate_pane_g1

0x3fd7,	// (0x0001954d) fep_vkb_keypad_pane_g3_ParamLimits

0x3fd7,	// (0x0001954d) fep_vkb_keypad_pane_g3

0x3fff,	// (0x00019575) fep_vkb_keypad_pane_g4_ParamLimits

0x3fff,	// (0x00019575) fep_vkb_keypad_pane_g4

0x406e,	// (0x000195e4) fep_vkb_bottom_pane_g2_ParamLimits

0x406e,	// (0x000195e4) fep_vkb_bottom_pane_g2

0x0001,

0xfb05,	// (0x0002507b) fep_vkb_bottom_pane_g_ParamLimits

0xfb05,	// (0x0002507b) fep_vkb_bottom_pane_g

0x3cee,	// (0x00019264) cell_vkb_side_pane_g2

0x0001,

0xfb0f,	// (0x00025085) cell_vkb_side_pane_g

0x40f9,	// (0x0001966f) cell_vkb_side_pane_t1

0x4107,	// (0x0001967d) cell_vkb_side_pane_t1_copy1

0x3cee,	// (0x00019264) bg_fep_vkb_candidate_pane_g2

0x4233,	// (0x000197a9) cell_vkb_candidate_pane_ParamLimits

0x3da0,	// (0x00019316) aid_size_cell_vkb_ParamLimits

0x3da0,	// (0x00019316) aid_size_cell_vkb

0x4233,	// (0x000197a9) cell_vkb_candidate_pane

0xecf2,	// (0x00024268) bg_popup_fep_shadow_pane_g1

0xb846,	// (0x00020dbc) fep_vkb_bottom_pane_ParamLimits

0xb846,	// (0x00020dbc) fep_vkb_bottom_pane

0x3e64,	// (0x000193da) fep_vkb_candidate_pane_ParamLimits

0x3e64,	// (0x000193da) fep_vkb_candidate_pane

0xb86b,	// (0x00020de1) fep_vkb_keypad_pane_ParamLimits

0xb86b,	// (0x00020de1) fep_vkb_keypad_pane

0xb8a0,	// (0x00020e16) fep_vkb_side_pane_ParamLimits

0xb8a0,	// (0x00020e16) fep_vkb_side_pane

0xb8dc,	// (0x00020e52) fep_vkb_top_pane_ParamLimits

0xb8dc,	// (0x00020e52) fep_vkb_top_pane

0x3f30,	// (0x000194a6) fep_vkb_top_pane_g1_ParamLimits

0x3f30,	// (0x000194a6) fep_vkb_top_pane_g1

0x3f3f,	// (0x000194b5) fep_vkb_top_pane_g2_ParamLimits

0x3f3f,	// (0x000194b5) fep_vkb_top_pane_g2

0x3f4e,	// (0x000194c4) fep_vkb_top_pane_g3_ParamLimits

0x3f4e,	// (0x000194c4) fep_vkb_top_pane_g3

0x0003,

0xfaf5,	// (0x0002506b) fep_vkb_top_pane_g_ParamLimits

0xfaf5,	// (0x0002506b) fep_vkb_top_pane_g

0x3f6c,	// (0x000194e2) fep_vkb_top_text_pane_ParamLimits

0x3f6c,	// (0x000194e2) fep_vkb_top_text_pane

0xb911,	// (0x00020e87) fep_vkb_side_pane_g1_ParamLimits

0xb911,	// (0x00020e87) fep_vkb_side_pane_g1

0x3fc6,	// (0x0001953c) grid_vkb_side_pane_ParamLimits

0x3fc6,	// (0x0001953c) grid_vkb_side_pane

0xecfa,	// (0x00024270) bg_popup_fep_shadow_pane_g2

0xed03,	// (0x00024279) bg_popup_fep_shadow_pane_g3

0xed0b,	// (0x00024281) bg_popup_fep_shadow_pane_g4

0xed14,	// (0x0002428a) bg_popup_fep_shadow_pane_g5

0xed1e,	// (0x00024294) bg_popup_fep_shadow_pane_g6

0xed26,	// (0x0002429c) bg_popup_fep_shadow_pane_g7

0xc972,	// (0x00021ee8) bg_popup_fep_shadow_pane_g8

0x401d,	// (0x00019593) grid_vkb_keypad_number_pane_ParamLimits

0x401d,	// (0x00019593) grid_vkb_keypad_number_pane

0x402d,	// (0x000195a3) grid_vkb_keypad_pane_ParamLimits

0x402d,	// (0x000195a3) grid_vkb_keypad_pane

0x4053,	// (0x000195c9) fep_vkb_bottom_pane_g1_ParamLimits

0x4053,	// (0x000195c9) fep_vkb_bottom_pane_g1

0x407c,	// (0x000195f2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x407c,	// (0x000195f2) grid_vkb_keypad_bottom_left_pane

0x4091,	// (0x00019607) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4091,	// (0x00019607) grid_vkb_keypad_bottom_right_pane

0x40a6,	// (0x0001961c) fep_vkb_top_text_pane_g1

0xb958,	// (0x00020ece) fep_vkb_top_text_pane_t1

0xb96a,	// (0x00020ee0) cell_vkb_side_pane_ParamLimits

0xb96a,	// (0x00020ee0) cell_vkb_side_pane

0x3cee,	// (0x00019264) cell_vkb_side_pane_g1

0x4115,	// (0x0001968b) cell_vkb_keypad_pane_ParamLimits

0x4115,	// (0x0001968b) cell_vkb_keypad_pane

0x418a,	// (0x00019700) cell_vkb_keypad_pane_g1

0x0008,

0xfb22,	// (0x00025098) bg_popup_fep_shadow_pane_g

0xed38,	// (0x000242ae) cell_hwr_side_pane_g1

0xed38,	// (0x000242ae) cell_hwr_side_pane_g2

0x4194,	// (0x0001970a) cell_vkb_keypad_pane_t1

0xb980,	// (0x00020ef6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb980,	// (0x00020ef6) cell_vkb_keypad_bottom_left_pane

0xb995,	// (0x00020f0b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb995,	// (0x00020f0b) cell_vkb_keypad_bottom_right_pane

0x3cee,	// (0x00019264) cell_vkb_keypad_bottom_left_pane_g1

0x3cee,	// (0x00019264) cell_vkb_keypad_bottom_right_pane_g1

0x41f8,	// (0x0001976e) cell_vkb_keypad_number_pane_ParamLimits

0x41f8,	// (0x0001976e) cell_vkb_keypad_number_pane

0x4217,	// (0x0001978d) cell_vkb_keypad_number_pane_g1

0x4221,	// (0x00019797) cell_vkb_keypad_number_pane_g2

0x422a,	// (0x000197a0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb14,	// (0x0002508a) cell_vkb_keypad_number_pane_g

0x4194,	// (0x0001970a) cell_vkb_keypad_number_pane_t1

0x424e,	// (0x000197c4) fep_vkb_candidate_pane_g1

0x0001,

0xfb35,	// (0x000250ab) cell_hwr_side_pane_g

0x4267,	// (0x000197dd) cell_hwr_side_pane_t1

0xed42,	// (0x000242b8) cell_hwr_side_pane_t1_copy1

0xed50,	// (0x000242c6) cell_hwr_candidate_pane_g1

0xed7f,	// (0x000242f5) cell_hwr_candidate_pane_t1

0x3cee,	// (0x00019264) cell_vkb_candidate_pane_g2

0x42ab,	// (0x00019821) cell_vkb_candidate_pane_t1

0xe78e,	// (0x00023d04) bg_popup_fep_shadow_pane_ParamLimits

0xe78e,	// (0x00023d04) bg_popup_fep_shadow_pane

0xec17,	// (0x0002418d) bg_fep_hwr_top_pane_g4

0x3d6e,	// (0x000192e4) bg_hwr_side_pane_g1_ParamLimits

0x3d6e,	// (0x000192e4) bg_hwr_side_pane_g1

0x8e96,	// (0x0001e40c) cell_hwr_side_pane_ParamLimits

0x8e96,	// (0x0001e40c) cell_hwr_side_pane

0xec61,	// (0x000241d7) fep_hwr_write_pane_g1_ParamLimits

0xec61,	// (0x000241d7) fep_hwr_write_pane_g1

0xec6e,	// (0x000241e4) fep_hwr_write_pane_g2_ParamLimits

0xec6e,	// (0x000241e4) fep_hwr_write_pane_g2

0xec7b,	// (0x000241f1) fep_hwr_write_pane_g3_ParamLimits

0xec7b,	// (0x000241f1) fep_hwr_write_pane_g3

0x8eb6,	// (0x0001e42c) fep_hwr_write_pane_g4_ParamLimits

0x8eb6,	// (0x0001e42c) fep_hwr_write_pane_g4

0x0005,

0xfae1,	// (0x00025057) fep_hwr_write_pane_g_ParamLimits

0xfae1,	// (0x00025057) fep_hwr_write_pane_g

0xec17,	// (0x0002418d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xec17,	// (0x0002418d) bg_fep_hwr_candidate_pane_g2

0xec89,	// (0x000241ff) cell_hwr_candidate_pane_ParamLimits

0xec89,	// (0x000241ff) cell_hwr_candidate_pane

0xeccb,	// (0x00024241) fep_hwr_candidate_pane_g1_ParamLimits

0x3dce,	// (0x00019344) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3dce,	// (0x00019344) bg_popup_fep_shadow_pane_cp2

0x3f5e,	// (0x000194d4) fep_vkb_top_pane_g4_ParamLimits

0x3f5e,	// (0x000194d4) fep_vkb_top_pane_g4

0x3fa4,	// (0x0001951a) fep_vkb_side_pane_g2_ParamLimits

0x3fa4,	// (0x0001951a) fep_vkb_side_pane_g2

0x9ec9,	// (0x0001f43f) list_setting_pane_t4_ParamLimits

0x9ec9,	// (0x0001f43f) list_setting_pane_t4

0x9f43,	// (0x0001f4b9) list_setting_number_pane_t5_ParamLimits

0x9f43,	// (0x0001f4b9) list_setting_number_pane_t5

0xcd8b,	// (0x00022301) list_double_heading_pane_cp2_ParamLimits

0xcd8b,	// (0x00022301) list_double_heading_pane_cp2

0xd377,	// (0x000228ed) list_double_heading_pane_g1_cp2_ParamLimits

0xd377,	// (0x000228ed) list_double_heading_pane_g1_cp2

0x42b9,	// (0x0001982f) list_double_heading_pane_g2_cp2_ParamLimits

0x42b9,	// (0x0001982f) list_double_heading_pane_g2_cp2

0x42cd,	// (0x00019843) list_double_heading_pane_t1_cp2_ParamLimits

0x42cd,	// (0x00019843) list_double_heading_pane_t1_cp2

0x42e3,	// (0x00019859) list_double_heading_pane_t2_cp2_ParamLimits

0x42e3,	// (0x00019859) list_double_heading_pane_t2_cp2

0xc3e2,	// (0x00021958) aid_value_unit2

0xe320,	// (0x00023896) popup_preview_fixed_window

0xc59e,	// (0x00021b14) bg_popup_preview_window_pane_cp02

0x42f5,	// (0x0001986b) list_preview_fixed_pane

0x433b,	// (0x000198b1) list_empty_pane_fp_ParamLimits

0x433b,	// (0x000198b1) list_empty_pane_fp

0x433b,	// (0x000198b1) list_single_cale_day_pane_fp_ParamLimits

0x433b,	// (0x000198b1) list_single_cale_day_pane_fp

0x433b,	// (0x000198b1) list_single_graphic_heading_pane_fp_ParamLimits

0x433b,	// (0x000198b1) list_single_graphic_heading_pane_fp

0x433b,	// (0x000198b1) list_single_graphic_pane_fp_ParamLimits

0x433b,	// (0x000198b1) list_single_graphic_pane_fp

0x433b,	// (0x000198b1) list_single_heading_pane_fp_ParamLimits

0x433b,	// (0x000198b1) list_single_heading_pane_fp

0x433b,	// (0x000198b1) list_single_pane_fp_ParamLimits

0x433b,	// (0x000198b1) list_single_pane_fp

0x4351,	// (0x000198c7) list_single_pane_fp_g1_ParamLimits

0x4351,	// (0x000198c7) list_single_pane_fp_g1

0xd383,	// (0x000228f9) list_single_pane_fp_g2_ParamLimits

0xd383,	// (0x000228f9) list_single_pane_fp_g2

0x435d,	// (0x000198d3) list_single_pane_fp_g3_ParamLimits

0x435d,	// (0x000198d3) list_single_pane_fp_g3

0x4371,	// (0x000198e7) list_single_pane_fp_g4_ParamLimits

0x4371,	// (0x000198e7) list_single_pane_fp_g4

0x0003,

0xfb48,	// (0x000250be) list_single_pane_fp_g_ParamLimits

0xfb48,	// (0x000250be) list_single_pane_fp_g

0x437d,	// (0x000198f3) list_single_pane_fp_t1_ParamLimits

0x437d,	// (0x000198f3) list_single_pane_fp_t1

0x4394,	// (0x0001990a) list_single_graphic_pane_fp_g1_ParamLimits

0x4394,	// (0x0001990a) list_single_graphic_pane_fp_g1

0x4351,	// (0x000198c7) list_single_graphic_pane_fp_g2_ParamLimits

0x4351,	// (0x000198c7) list_single_graphic_pane_fp_g2

0xd383,	// (0x000228f9) list_single_graphic_pane_fp_g3_ParamLimits

0xd383,	// (0x000228f9) list_single_graphic_pane_fp_g3

0x435d,	// (0x000198d3) list_single_graphic_pane_fp_g4_ParamLimits

0x435d,	// (0x000198d3) list_single_graphic_pane_fp_g4

0x4371,	// (0x000198e7) list_single_graphic_pane_fp_g5_ParamLimits

0x4371,	// (0x000198e7) list_single_graphic_pane_fp_g5

0x0004,

0xfb51,	// (0x000250c7) list_single_graphic_pane_fp_g_ParamLimits

0xfb51,	// (0x000250c7) list_single_graphic_pane_fp_g

0x43a0,	// (0x00019916) list_single_graphic_pane_fp_t1_ParamLimits

0x43a0,	// (0x00019916) list_single_graphic_pane_fp_t1

0x4394,	// (0x0001990a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4394,	// (0x0001990a) list_single_graphic_heading_pane_fp_g1

0x4351,	// (0x000198c7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4351,	// (0x000198c7) list_single_graphic_heading_pane_fp_g2

0xd383,	// (0x000228f9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd383,	// (0x000228f9) list_single_graphic_heading_pane_fp_g3

0x435d,	// (0x000198d3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x435d,	// (0x000198d3) list_single_graphic_heading_pane_fp_g4

0x4371,	// (0x000198e7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4371,	// (0x000198e7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb51,	// (0x000250c7) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb51,	// (0x000250c7) list_single_graphic_heading_pane_fp_g

0x43b6,	// (0x0001992c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x43b6,	// (0x0001992c) list_single_graphic_heading_pane_fp_t1

0x43cc,	// (0x00019942) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x43cc,	// (0x00019942) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5c,	// (0x000250d2) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5c,	// (0x000250d2) list_single_graphic_heading_pane_fp_t

0x43de,	// (0x00019954) list_single_cale_day_pane_fp_g1_ParamLimits

0x43de,	// (0x00019954) list_single_cale_day_pane_fp_g1

0x4416,	// (0x0001998c) list_single_cale_day_pane_fp_g2_ParamLimits

0x4416,	// (0x0001998c) list_single_cale_day_pane_fp_g2

0x4422,	// (0x00019998) list_single_cale_day_pane_fp_g3_ParamLimits

0x4422,	// (0x00019998) list_single_cale_day_pane_fp_g3

0x444a,	// (0x000199c0) list_single_cale_day_pane_fp_g4_ParamLimits

0x444a,	// (0x000199c0) list_single_cale_day_pane_fp_g4

0x446e,	// (0x000199e4) list_single_cale_day_pane_fp_g5_ParamLimits

0x446e,	// (0x000199e4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb61,	// (0x000250d7) list_single_cale_day_pane_fp_g_ParamLimits

0xfb61,	// (0x000250d7) list_single_cale_day_pane_fp_g

0x4492,	// (0x00019a08) list_single_cale_day_pane_fp_t1_ParamLimits

0x4492,	// (0x00019a08) list_single_cale_day_pane_fp_t1

0x44b8,	// (0x00019a2e) list_single_cale_day_pane_fp_t2_ParamLimits

0x44b8,	// (0x00019a2e) list_single_cale_day_pane_fp_t2

0x44d1,	// (0x00019a47) list_single_cale_day_pane_fp_t3_ParamLimits

0x44d1,	// (0x00019a47) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6c,	// (0x000250e2) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6c,	// (0x000250e2) list_single_cale_day_pane_fp_t

0x4351,	// (0x000198c7) list_empty_pane_fp_g1_ParamLimits

0x4351,	// (0x000198c7) list_empty_pane_fp_g1

0x44ea,	// (0x00019a60) list_empty_pane_fp_t1

0x44f8,	// (0x00019a6e) list_empty_pane_fp_t2

0x0001,

0xfb73,	// (0x000250e9) list_empty_pane_fp_t

0x4351,	// (0x000198c7) list_single_heading_pane_fp_g1_ParamLimits

0x4351,	// (0x000198c7) list_single_heading_pane_fp_g1

0xd383,	// (0x000228f9) list_single_heading_pane_fp_g2_ParamLimits

0xd383,	// (0x000228f9) list_single_heading_pane_fp_g2

0x435d,	// (0x000198d3) list_single_heading_pane_fp_g3_ParamLimits

0x435d,	// (0x000198d3) list_single_heading_pane_fp_g3

0x0002,

0xfb78,	// (0x000250ee) list_single_heading_pane_fp_g_ParamLimits

0xfb78,	// (0x000250ee) list_single_heading_pane_fp_g

0x4506,	// (0x00019a7c) list_single_heading_pane_fp_t1_ParamLimits

0x4506,	// (0x00019a7c) list_single_heading_pane_fp_t1

0x4518,	// (0x00019a8e) list_single_heading_pane_fp_t2_ParamLimits

0x4518,	// (0x00019a8e) list_single_heading_pane_fp_t2

0x0001,

0xfb7f,	// (0x000250f5) list_single_heading_pane_fp_t_ParamLimits

0xfb7f,	// (0x000250f5) list_single_heading_pane_fp_t

0xa1ea,	// (0x0001f760) aid_size_cell_fast

0xc581,	// (0x00021af7) soft_indicator_pane_cp1_t1

0xa1f3,	// (0x0001f769) cell_app_pane_cp2_ParamLimits

0xa1f3,	// (0x0001f769) cell_app_pane_cp2

0xeb84,	// (0x000240fa) fep_hwr_candidate_drop_down_list_pane

0xece5,	// (0x0002425b) fep_hwr_candidate_pane_g3_ParamLimits

0xece5,	// (0x0002425b) fep_hwr_candidate_pane_g3

0xd36a,	// (0x000228e0) fep_hwr_candidate_pane_g4_ParamLimits

0xd36a,	// (0x000228e0) fep_hwr_candidate_pane_g4

0x0002,

0xfaee,	// (0x00025064) fep_hwr_candidate_pane_g_ParamLimits

0xfaee,	// (0x00025064) fep_hwr_candidate_pane_g

0x3e53,	// (0x000193c9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x3e53,	// (0x000193c9) fep_vkb_candidate_drop_down_list_pane

0x4256,	// (0x000197cc) fep_vkb_candidate_pane_g3

0x425e,	// (0x000197d4) fep_vkb_candidate_pane_g4

0x0002,

0xfb1b,	// (0x00025091) fep_vkb_candidate_pane_g

0xed50,	// (0x000242c6) cell_hwr_candidate_pane_g1_ParamLimits

0xed5e,	// (0x000242d4) cell_hwr_candidate_pane_g3_ParamLimits

0xed5e,	// (0x000242d4) cell_hwr_candidate_pane_g3

0x5fc5,	// (0x0001b53b) cell_hwr_candidate_pane_g4_ParamLimits

0x5fc5,	// (0x0001b53b) cell_hwr_candidate_pane_g4

0x0002,

0xfb3a,	// (0x000250b0) cell_hwr_candidate_pane_g_ParamLimits

0xfb3a,	// (0x000250b0) cell_hwr_candidate_pane_g

0x4275,	// (0x000197eb) cell_vkb_candidate_pane_g3_ParamLimits

0x4275,	// (0x000197eb) cell_vkb_candidate_pane_g3

0x4290,	// (0x00019806) cell_vkb_candidate_pane_g4_ParamLimits

0x4290,	// (0x00019806) cell_vkb_candidate_pane_g4

0xb9b0,	// (0x00020f26) cell_app_pane_cp2_g1_ParamLimits

0xb9b0,	// (0x00020f26) cell_app_pane_cp2_g1

0x454c,	// (0x00019ac2) cell_app_pane_cp2_g2_ParamLimits

0x454c,	// (0x00019ac2) cell_app_pane_cp2_g2

0x0001,

0xfb84,	// (0x000250fa) cell_app_pane_cp2_g_ParamLimits

0xfb84,	// (0x000250fa) cell_app_pane_cp2_g

0x4558,	// (0x00019ace) cell_app_pane_cp2_t1_ParamLimits

0x4558,	// (0x00019ace) cell_app_pane_cp2_t1

0xc894,	// (0x00021e0a) grid_highlight_pane_cp1_ParamLimits

0xc894,	// (0x00021e0a) grid_highlight_pane_cp1

0xed9d,	// (0x00024313) cell_hwr_candidate_pane_cp1_ParamLimits

0xed9d,	// (0x00024313) cell_hwr_candidate_pane_cp1

0xed50,	// (0x000242c6) fep_hwr_candidate_drop_down_list_pane_g1

0xedbc,	// (0x00024332) fep_hwr_candidate_drop_down_list_pane_g2

0xedc9,	// (0x0002433f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb89,	// (0x000250ff) fep_hwr_candidate_drop_down_list_pane_g

0xedd6,	// (0x0002434c) fep_hwr_candidate_drop_down_list_scroll_pane

0xeddf,	// (0x00024355) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xeddf,	// (0x00024355) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xedec,	// (0x00024362) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xedec,	// (0x00024362) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xedf9,	// (0x0002436f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xedf9,	// (0x0002436f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xee06,	// (0x0002437c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xee06,	// (0x0002437c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xee21,	// (0x00024397) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xee21,	// (0x00024397) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xee3c,	// (0x000243b2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xee3c,	// (0x000243b2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xee57,	// (0x000243cd) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xee57,	// (0x000243cd) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xee72,	// (0x000243e8) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xee72,	// (0x000243e8) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb90,	// (0x00025106) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb90,	// (0x00025106) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x456a,	// (0x00019ae0) cell_vkb_candidate_pane_cp1_ParamLimits

0x456a,	// (0x00019ae0) cell_vkb_candidate_pane_cp1

0x3f5e,	// (0x000194d4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x3f5e,	// (0x000194d4) fep_vkb_candidate_drop_down_list_pane_g1

0x458a,	// (0x00019b00) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x458a,	// (0x00019b00) fep_vkb_candidate_drop_down_list_pane_g2

0x4597,	// (0x00019b0d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4597,	// (0x00019b0d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba1,	// (0x00025117) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba1,	// (0x00025117) fep_vkb_candidate_drop_down_list_pane_g

0x45a4,	// (0x00019b1a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x45a4,	// (0x00019b1a) fep_vkb_candidate_drop_down_list_scroll_pane

0x45b1,	// (0x00019b27) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x45b1,	// (0x00019b27) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x45be,	// (0x00019b34) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x45be,	// (0x00019b34) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x45ca,	// (0x00019b40) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x45ca,	// (0x00019b40) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x45d6,	// (0x00019b4c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x45d6,	// (0x00019b4c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x45f7,	// (0x00019b6d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x45f7,	// (0x00019b6d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4618,	// (0x00019b8e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4618,	// (0x00019b8e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4639,	// (0x00019baf) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4639,	// (0x00019baf) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x465a,	// (0x00019bd0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x465a,	// (0x00019bd0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba8,	// (0x0002511e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba8,	// (0x0002511e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9649,	// (0x0001ebbf) title_pane_g1_ParamLimits

0x965c,	// (0x0001ebd2) title_pane_g2_ParamLimits

0xf529,	// (0x00024a9f) title_pane_g_ParamLimits

0xcd44,	// (0x000222ba) aid_call2_pane

0xcd4c,	// (0x000222c2) aid_call_pane

0xcd54,	// (0x000222ca) popup_clock_analogue_window_g1

0xcd54,	// (0x000222ca) popup_clock_analogue_window_g2

0xe4d3,	// (0x00023a49) popup_clock_analogue_window_g3

0xe4dc,	// (0x00023a52) popup_clock_analogue_window_g4

0xc3f4,	// (0x0002196a) popup_clock_analogue_window_g5

0x0004,

0xf6bf,	// (0x00024c35) popup_clock_analogue_window_g

0xe4e4,	// (0x00023a5a) popup_clock_analogue_window_t1

0xe4f2,	// (0x00023a68) clock_digital_number_pane_ParamLimits

0xe4f2,	// (0x00023a68) clock_digital_number_pane

0xe4fe,	// (0x00023a74) clock_digital_number_pane_cp02_ParamLimits

0xe4fe,	// (0x00023a74) clock_digital_number_pane_cp02

0xe50a,	// (0x00023a80) clock_digital_number_pane_cp03_ParamLimits

0xe50a,	// (0x00023a80) clock_digital_number_pane_cp03

0xe516,	// (0x00023a8c) clock_digital_number_pane_cp04_ParamLimits

0xe516,	// (0x00023a8c) clock_digital_number_pane_cp04

0xe522,	// (0x00023a98) clock_digital_separator_pane_ParamLimits

0xe522,	// (0x00023a98) clock_digital_separator_pane

0xe52e,	// (0x00023aa4) popup_clock_digital_window_t1_ParamLimits

0xe52e,	// (0x00023aa4) popup_clock_digital_window_t1

0xc3f4,	// (0x0002196a) clock_digital_number_pane_g1

0xc3f4,	// (0x0002196a) clock_digital_number_pane_g2

0x0001,

0xf6ca,	// (0x00024c40) clock_digital_number_pane_g

0xc3f4,	// (0x0002196a) clock_digital_separator_pane_g1

0xc3f4,	// (0x0002196a) clock_digital_separator_pane_g2

0x0001,

0xf6ca,	// (0x00024c40) clock_digital_separator_pane_g

0xa730,	// (0x0001fca6) aid_fill_nsta_ParamLimits

0xa866,	// (0x0001fddc) indicator_nsta_pane_ParamLimits

0x0f20,	// (0x00016496) popup_clock_analogue_window

0x0f20,	// (0x00016496) popup_clock_digital_window

0xb5bb,	// (0x00020b31) grid_indicator_nsta_pane_ParamLimits

0x3697,	// (0x00018c0d) clock_nsta_pane_t2

0x0001,

0xfa6e,	// (0x00024fe4) clock_nsta_pane_t

0xe4b4,	// (0x00023a2a) aid_size_max_handle

0x8352,	// (0x0001d8c8) aid_size_min_handle

0xd1a6,	// (0x0002271c) editor_scroll_pane

0x4675,	// (0x00019beb) ex_editor_pane

0xca34,	// (0x00021faa) scroll_pane_cp13

0xc7d2,	// (0x00021d48) scroll_pane_cp14

0xcd83,	// (0x000222f9) scroll_pane_cp36

0xa37e,	// (0x0001f8f4) list_single_graphic_hl_pane_cp2_ParamLimits

0xa37e,	// (0x0001f8f4) list_single_graphic_hl_pane_cp2

0xb3c1,	// (0x00020937) list_single_graphic_hl_pane_ParamLimits

0xb3c1,	// (0x00020937) list_single_graphic_hl_pane

0x6676,	// (0x0001bbec) aid_size_min_hl_cp1

0x4686,	// (0x00019bfc) list_highlight_pane_cp34_ParamLimits

0x4686,	// (0x00019bfc) list_highlight_pane_cp34

0x4697,	// (0x00019c0d) list_single_graphic_hl_pane_g1_ParamLimits

0x4697,	// (0x00019c0d) list_single_graphic_hl_pane_g1

0xb9ce,	// (0x00020f44) list_single_graphic_hl_pane_g2_ParamLimits

0xb9ce,	// (0x00020f44) list_single_graphic_hl_pane_g2

0xb9ce,	// (0x00020f44) list_single_graphic_hl_pane_g3_ParamLimits

0xb9ce,	// (0x00020f44) list_single_graphic_hl_pane_g3

0xd131,	// (0x000226a7) list_single_graphic_hl_pane_g4_ParamLimits

0xd131,	// (0x000226a7) list_single_graphic_hl_pane_g4

0xb9da,	// (0x00020f50) list_single_graphic_hl_pane_g5_ParamLimits

0xb9da,	// (0x00020f50) list_single_graphic_hl_pane_g5

0x0004,

0xfbb9,	// (0x0002512f) list_single_graphic_hl_pane_g_ParamLimits

0xfbb9,	// (0x0002512f) list_single_graphic_hl_pane_g

0xb9ee,	// (0x00020f64) list_single_graphic_hl_pane_t1_ParamLimits

0xb9ee,	// (0x00020f64) list_single_graphic_hl_pane_t1

0x46da,	// (0x00019c50) aid_size_min_hl_cp2

0x46e3,	// (0x00019c59) list_highlight_pane_cp34_cp2_ParamLimits

0x46e3,	// (0x00019c59) list_highlight_pane_cp34_cp2

0x4697,	// (0x00019c0d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4697,	// (0x00019c0d) list_single_graphic_hl_pane_g1_cp2

0x46f0,	// (0x00019c66) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x46f0,	// (0x00019c66) list_single_graphic_hl_pane_g2_cp2

0xba04,	// (0x00020f7a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xba04,	// (0x00020f7a) list_single_graphic_hl_pane_g3_cp2

0xc7da,	// (0x00021d50) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc7da,	// (0x00021d50) list_single_graphic_hl_pane_g4_cp2

0x46b0,	// (0x00019c26) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x46b0,	// (0x00019c26) list_single_graphic_hl_pane_g5_cp2

0x8404,	// (0x0001d97a) control_pane_g4_ParamLimits

0x8404,	// (0x0001d97a) control_pane_g4

0xca44,	// (0x00021fba) bg_popup_sub_pane_cp10_ParamLimits

0x3cf8,	// (0x0001926e) list_choice_list_pane_ParamLimits

0x3d07,	// (0x0001927d) scroll_pane_cp23

0xc59e,	// (0x00021b14) bg_popup_preview_window_pane_cp02_ParamLimits

0x42f5,	// (0x0001986b) list_preview_fixed_pane_ParamLimits

0x430b,	// (0x00019881) list_preview_fixed_pane_cp_ParamLimits

0x430b,	// (0x00019881) list_preview_fixed_pane_cp

0x4317,	// (0x0001988d) popup_preview_fixed_window_g1_ParamLimits

0x4317,	// (0x0001988d) popup_preview_fixed_window_g1

0x4323,	// (0x00019899) popup_preview_fixed_window_g2_ParamLimits

0x4323,	// (0x00019899) popup_preview_fixed_window_g2

0x0002,

0xfb41,	// (0x000250b7) popup_preview_fixed_window_g_ParamLimits

0xfb41,	// (0x000250b7) popup_preview_fixed_window_g

0xe428,	// (0x0002399e) aid_navi_side_left_pane_ParamLimits

0xe43d,	// (0x000239b3) aid_navi_side_right_pane_ParamLimits

0xe455,	// (0x000239cb) navi_icon_pane_stacon_ParamLimits

0xe469,	// (0x000239df) navi_navi_pane_stacon_ParamLimits

0xe455,	// (0x000239cb) navi_text_pane_stacon_ParamLimits

0xe300,	// (0x00023876) main_text_info_pane

0x4720,	// (0x00019c96) listscroll_text_info_pane

0x4728,	// (0x00019c9e) list_text_info_pane_ParamLimits

0x4728,	// (0x00019c9e) list_text_info_pane

0x4737,	// (0x00019cad) scroll_pane_cp24_ParamLimits

0x4737,	// (0x00019cad) scroll_pane_cp24

0xba12,	// (0x00020f88) list_text_info_pane_t1_ParamLimits

0xba12,	// (0x00020f88) list_text_info_pane_t1

0x857d,	// (0x0001daf3) popup_fast_swap2_window_ParamLimits

0x857d,	// (0x0001daf3) popup_fast_swap2_window

0x4789,	// (0x00019cff) aid_size_cell_fast2

0xc3ea,	// (0x00021960) bg_popup_window_pane_cp17

0x4793,	// (0x00019d09) heading_pane_cp2

0x479b,	// (0x00019d11) listscroll_fast2_pane

0x47a3,	// (0x00019d19) grid_fast2_pane

0x47ad,	// (0x00019d23) listscroll_fast2_pane_g1

0x47b5,	// (0x00019d2b) listscroll_fast2_pane_g2

0x0001,

0xfbc4,	// (0x0002513a) listscroll_fast2_pane_g

0xca34,	// (0x00021faa) scroll_pane_cp26

0x47bf,	// (0x00019d35) cell_fast2_pane_ParamLimits

0x47bf,	// (0x00019d35) cell_fast2_pane

0x47d4,	// (0x00019d4a) cell_fast2_pane_g1

0x47dd,	// (0x00019d53) cell_fast2_pane_g2

0x47e6,	// (0x00019d5c) cell_fast2_pane_g3

0x0002,

0xfbc9,	// (0x0002513f) cell_fast2_pane_g

0xc709,	// (0x00021c7f) grid_highlight_pane_cp9

0xe780,	// (0x00023cf6) main_eswt_pane_ParamLimits

0xe780,	// (0x00023cf6) main_eswt_pane

0x474c,	// (0x00019cc2) list_single_text_info_pane

0x47ee,	// (0x00019d64) eswt_ctrl_button_pane

0x47ee,	// (0x00019d64) eswt_ctrl_canvas_pane

0xba2e,	// (0x00020fa4) eswt_ctrl_combo_pane

0x47ee,	// (0x00019d64) eswt_ctrl_default_pane

0x47ee,	// (0x00019d64) eswt_ctrl_label_pane

0x47fe,	// (0x00019d74) eswt_ctrl_wait_pane

0xba36,	// (0x00020fac) eswt_shell_pane

0xc3ea,	// (0x00021960) listscroll_eswt_app_pane

0x4826,	// (0x00019d9c) popup_eswt_tasktip_window_ParamLimits

0x4826,	// (0x00019d9c) popup_eswt_tasktip_window

0x1294,	// (0x0001680a) bg_popup_window_pane_cp18

0x483f,	// (0x00019db5) eswt_control_pane_g1_ParamLimits

0x483f,	// (0x00019db5) eswt_control_pane_g1

0x484c,	// (0x00019dc2) eswt_control_pane_g2_ParamLimits

0x484c,	// (0x00019dc2) eswt_control_pane_g2

0x4859,	// (0x00019dcf) eswt_control_pane_g3_ParamLimits

0x4859,	// (0x00019dcf) eswt_control_pane_g3

0x4866,	// (0x00019ddc) eswt_control_pane_g4_ParamLimits

0x4866,	// (0x00019ddc) eswt_control_pane_g4

0x0003,

0xfbd0,	// (0x00025146) eswt_control_pane_g_ParamLimits

0xfbd0,	// (0x00025146) eswt_control_pane_g

0xc894,	// (0x00021e0a) bg_button_pane_ParamLimits

0xc894,	// (0x00021e0a) bg_button_pane

0xc71e,	// (0x00021c94) common_borders_pane_copy2_ParamLimits

0xc71e,	// (0x00021c94) common_borders_pane_copy2

0x4873,	// (0x00019de9) control_button_pane_g1_ParamLimits

0x4873,	// (0x00019de9) control_button_pane_g1

0x487f,	// (0x00019df5) control_button_pane_g2_ParamLimits

0x487f,	// (0x00019df5) control_button_pane_g2

0x488b,	// (0x00019e01) control_button_pane_g3_ParamLimits

0x488b,	// (0x00019e01) control_button_pane_g3

0x0002,

0xfbd9,	// (0x0002514f) control_button_pane_g_ParamLimits

0xfbd9,	// (0x0002514f) control_button_pane_g

0x489f,	// (0x00019e15) control_button_pane_t1

0x48ad,	// (0x00019e23) control_button_pane_t2

0x0001,

0xfbe0,	// (0x00025156) control_button_pane_t

0x1174,	// (0x000166ea) bg_button_pane_g1

0x1184,	// (0x000166fa) bg_button_pane_g2

0x117c,	// (0x000166f2) bg_button_pane_g3

0x1194,	// (0x0001670a) bg_button_pane_g4

0x118c,	// (0x00016702) bg_button_pane_g5

0x119c,	// (0x00016712) bg_button_pane_g6

0x11a4,	// (0x0001671a) bg_button_pane_g7

0x11b4,	// (0x0001672a) bg_button_pane_g8

0x11ac,	// (0x00016722) bg_button_pane_g9

0x0008,

0xf821,	// (0x00024d97) bg_button_pane_g

0x3cb3,	// (0x00019229) common_borders_pane_ParamLimits

0x3cb3,	// (0x00019229) common_borders_pane

0x483f,	// (0x00019db5) eswt_control_pane_g1_copy1_ParamLimits

0x483f,	// (0x00019db5) eswt_control_pane_g1_copy1

0x484c,	// (0x00019dc2) eswt_control_pane_g2_copy1_ParamLimits

0x484c,	// (0x00019dc2) eswt_control_pane_g2_copy1

0x4859,	// (0x00019dcf) eswt_control_pane_g3_copy1_ParamLimits

0x4859,	// (0x00019dcf) eswt_control_pane_g3_copy1

0x4866,	// (0x00019ddc) eswt_control_pane_g4_copy1_ParamLimits

0x4866,	// (0x00019ddc) eswt_control_pane_g4_copy1

0x3cee,	// (0x00019264) bg_eswt_ctrl_canvas_pane_g1

0x3cb3,	// (0x00019229) common_borders_pane_cp2_ParamLimits

0x3cb3,	// (0x00019229) common_borders_pane_cp2

0x3cb3,	// (0x00019229) common_borders_pane_cp3_ParamLimits

0x3cb3,	// (0x00019229) common_borders_pane_cp3

0x48bb,	// (0x00019e31) separator_horizontal_pane

0x48c3,	// (0x00019e39) separator_vertical_pane

0x483f,	// (0x00019db5) eswt_control_pane_g1_copy2_ParamLimits

0x483f,	// (0x00019db5) eswt_control_pane_g1_copy2

0x484c,	// (0x00019dc2) eswt_control_pane_g2_copy2_ParamLimits

0x484c,	// (0x00019dc2) eswt_control_pane_g2_copy2

0x4859,	// (0x00019dcf) eswt_control_pane_g3_copy2_ParamLimits

0x4859,	// (0x00019dcf) eswt_control_pane_g3_copy2

0x4866,	// (0x00019ddc) eswt_control_pane_g4_copy2_ParamLimits

0x4866,	// (0x00019ddc) eswt_control_pane_g4_copy2

0xc3ea,	// (0x00021960) common_borders_pane_cp4

0x48cc,	// (0x00019e42) separator_horizontal_pane_g1

0x48d5,	// (0x00019e4b) separator_horizontal_pane_g2

0x48de,	// (0x00019e54) separator_horizontal_pane_g3

0x0002,

0xfbe5,	// (0x0002515b) separator_horizontal_pane_g

0x483f,	// (0x00019db5) eswt_control_pane_g1_copy3_ParamLimits

0x483f,	// (0x00019db5) eswt_control_pane_g1_copy3

0x484c,	// (0x00019dc2) eswt_control_pane_g2_copy3_ParamLimits

0x484c,	// (0x00019dc2) eswt_control_pane_g2_copy3

0x4859,	// (0x00019dcf) eswt_control_pane_g3_copy3_ParamLimits

0x4859,	// (0x00019dcf) eswt_control_pane_g3_copy3

0x4866,	// (0x00019ddc) eswt_control_pane_g4_copy3_ParamLimits

0x4866,	// (0x00019ddc) eswt_control_pane_g4_copy3

0xc3ea,	// (0x00021960) common_borders_pane_cp5

0x48e7,	// (0x00019e5d) separator_vertical_pane_g1

0x48f0,	// (0x00019e66) separator_vertical_pane_g2

0x48f9,	// (0x00019e6f) separator_vertical_pane_g3

0x0002,

0xfbec,	// (0x00025162) separator_vertical_pane_g

0x483f,	// (0x00019db5) eswt_control_pane_g1_copy4_ParamLimits

0x483f,	// (0x00019db5) eswt_control_pane_g1_copy4

0x484c,	// (0x00019dc2) eswt_control_pane_g2_copy4_ParamLimits

0x484c,	// (0x00019dc2) eswt_control_pane_g2_copy4

0x4859,	// (0x00019dcf) eswt_control_pane_g3_copy4_ParamLimits

0x4859,	// (0x00019dcf) eswt_control_pane_g3_copy4

0x4866,	// (0x00019ddc) eswt_control_pane_g4_copy4_ParamLimits

0x4866,	// (0x00019ddc) eswt_control_pane_g4_copy4

0xba56,	// (0x00020fcc) eswt_ctrl_combo_button_pane

0xba5e,	// (0x00020fd4) eswt_ctrl_input_pane

0xba66,	// (0x00020fdc) popup_choice_list_window_cp70

0xba6e,	// (0x00020fe4) eswt_ctrl_input_pane_t1

0xc3ea,	// (0x00021960) input_focus_pane_cp70

0x3cb3,	// (0x00019229) bg_button_pane_cp70_ParamLimits

0x3cb3,	// (0x00019229) bg_button_pane_cp70

0xba7c,	// (0x00020ff2) eswt_ctrl_combo_button_pane_g1

0x4930,	// (0x00019ea6) wait_bar_pane_cp70

0x1294,	// (0x0001680a) bg_popup_window_pane_cp70_ParamLimits

0x1294,	// (0x0001680a) bg_popup_window_pane_cp70

0x4938,	// (0x00019eae) popup_eswt_tasktip_window_t1

0x494e,	// (0x00019ec4) wait_bar_pane_cp71_ParamLimits

0x494e,	// (0x00019ec4) wait_bar_pane_cp71

0x495a,	// (0x00019ed0) grid_eswt_app_pane

0xcc27,	// (0x0002219d) scroll_pane_cp70

0xba84,	// (0x00020ffa) cell_eswt_app_pane_ParamLimits

0xba84,	// (0x00020ffa) cell_eswt_app_pane

0xbaae,	// (0x00021024) cell_eswt_app_pane_g1_ParamLimits

0xbaae,	// (0x00021024) cell_eswt_app_pane_g1

0xbadd,	// (0x00021053) cell_eswt_app_pane_g2_ParamLimits

0xbadd,	// (0x00021053) cell_eswt_app_pane_g2

0x0001,

0xfbf3,	// (0x00025169) cell_eswt_app_pane_g_ParamLimits

0xfbf3,	// (0x00025169) cell_eswt_app_pane_g

0xbb01,	// (0x00021077) cell_eswt_app_pane_t1_ParamLimits

0xbb01,	// (0x00021077) cell_eswt_app_pane_t1

0x4a18,	// (0x00019f8e) grid_highlight_pane_cp70_ParamLimits

0x4a18,	// (0x00019f8e) grid_highlight_pane_cp70

0xd0ac,	// (0x00022622) set_content_pane_g1

0xa6e5,	// (0x0001fc5b) status_small_volume_pane

0x8ecb,	// (0x0001e441) status_small_volume_pane_g1

0x8ed3,	// (0x0001e449) volume_small2_pane

0x8edc,	// (0x0001e452) volume_small2_pane_g1

0x8ee5,	// (0x0001e45b) volume_small2_pane_g2

0x8eee,	// (0x0001e464) volume_small2_pane_g3

0x8ef7,	// (0x0001e46d) volume_small2_pane_g4

0x8f00,	// (0x0001e476) volume_small2_pane_g5

0x8f09,	// (0x0001e47f) volume_small2_pane_g6

0x8f12,	// (0x0001e488) volume_small2_pane_g7

0x8f1b,	// (0x0001e491) volume_small2_pane_g8

0x8f24,	// (0x0001e49a) volume_small2_pane_g9

0x8f2d,	// (0x0001e4a3) volume_small2_pane_g10

0x0009,

0xfbf8,	// (0x0002516e) volume_small2_pane_g

0x40a6,	// (0x0001961c) fep_vkb_top_text_pane_g1_ParamLimits

0xb958,	// (0x00020ece) fep_vkb_top_text_pane_t1_ParamLimits

0x432f,	// (0x000198a5) popup_preview_fixed_window_g3_ParamLimits

0x432f,	// (0x000198a5) popup_preview_fixed_window_g3

0x8bf4,	// (0x0001e16a) popup_toolbar_trans_pane

0xb218,	// (0x0002078e) aid_height_set_list_ParamLimits

0x2636,	// (0x00017bac) aid_size_parent_ParamLimits

0xca44,	// (0x00021fba) list_highlight_pane_cp2_ParamLimits

0xd0ac,	// (0x00022622) set_content_pane_g1_ParamLimits

0xb3d3,	// (0x00020949) list_single_image_pane_ParamLimits

0xb3d3,	// (0x00020949) list_single_image_pane

0xbb33,	// (0x000210a9) aid_size_cell_image_ParamLimits

0xbb33,	// (0x000210a9) aid_size_cell_image

0xbb40,	// (0x000210b6) grid_single_image_pane_ParamLimits

0xbb40,	// (0x000210b6) grid_single_image_pane

0xd383,	// (0x000228f9) list_single_image_pane_g1_ParamLimits

0xd383,	// (0x000228f9) list_single_image_pane_g1

0x435d,	// (0x000198d3) list_single_image_pane_g2_ParamLimits

0x435d,	// (0x000198d3) list_single_image_pane_g2

0x0001,

0xfc0d,	// (0x00025183) list_single_image_pane_g_ParamLimits

0xfc0d,	// (0x00025183) list_single_image_pane_g

0x4a3d,	// (0x00019fb3) list_single_image_pane_t1_ParamLimits

0x4a3d,	// (0x00019fb3) list_single_image_pane_t1

0xbb4c,	// (0x000210c2) cell_image_list_pane_ParamLimits

0xbb4c,	// (0x000210c2) cell_image_list_pane

0xbb60,	// (0x000210d6) cell_image_list_pane_g1

0xbb69,	// (0x000210df) cell_image_list_pane_g2

0x0001,

0xfc12,	// (0x00025188) cell_image_list_pane_g

0xbb72,	// (0x000210e8) aid_size_cell_tb_trans_pane

0xc894,	// (0x00021e0a) bg_tb_trans_pane

0xbb84,	// (0x000210fa) grid_tb_trans_pane

0x1174,	// (0x000166ea) bg_tb_trans_pane_g1

0x1184,	// (0x000166fa) bg_tb_trans_pane_g2

0x117c,	// (0x000166f2) bg_tb_trans_pane_g3

0x1194,	// (0x0001670a) bg_tb_trans_pane_g4

0x118c,	// (0x00016702) bg_tb_trans_pane_g5

0x11b4,	// (0x0001672a) bg_tb_trans_pane_g6

0x11ac,	// (0x00016722) bg_tb_trans_pane_g7

0x119c,	// (0x00016712) bg_tb_trans_pane_g8

0x11a4,	// (0x0001671a) bg_tb_trans_pane_g9

0x0008,

0xfc17,	// (0x0002518d) bg_tb_trans_pane_g

0xbb98,	// (0x0002110e) cell_toolbar_trans_pane_ParamLimits

0xbb98,	// (0x0002110e) cell_toolbar_trans_pane

0x3cee,	// (0x00019264) cell_toolbar_trans_pane_g1

0xb684,	// (0x00020bfa) list_form2_midp_pane_t1

0xb692,	// (0x00020c08) list_form2_midp_pane_t2

0x0001,

0xfab4,	// (0x0002502a) list_form2_midp_pane_t

0x3888,	// (0x00018dfe) scroll_pane_cp51_ParamLimits

0x3a91,	// (0x00019007) form2_midp_wait_pane_g1

0x3a9a,	// (0x00019010) form2_midp_wait_pane_g2

0x3aa3,	// (0x00019019) form2_midp_wait_pane_g3

0x0002,

0xfac9,	// (0x0002503f) form2_midp_wait_pane_g

0xc45a,	// (0x000219d0) list_highlight_pane_cp21_ParamLimits

0x3aeb,	// (0x00019061) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x3afa,	// (0x00019070) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x2839,	// (0x00017daf) list_single_2graphic_im_pane_ParamLimits

0x2839,	// (0x00017daf) list_single_2graphic_im_pane

0xbbbe,	// (0x00021134) list_single_2graphic_im_pane_g1_ParamLimits

0xbbbe,	// (0x00021134) list_single_2graphic_im_pane_g1

0xbbcf,	// (0x00021145) list_single_2graphic_im_pane_g2_ParamLimits

0xbbcf,	// (0x00021145) list_single_2graphic_im_pane_g2

0xbbdb,	// (0x00021151) list_single_2graphic_im_pane_g3_ParamLimits

0xbbdb,	// (0x00021151) list_single_2graphic_im_pane_g3

0x0003,

0xfc2a,	// (0x000251a0) list_single_2graphic_im_pane_g_ParamLimits

0xfc2a,	// (0x000251a0) list_single_2graphic_im_pane_g

0xbbef,	// (0x00021165) list_single_2graphic_im_pane_t1_ParamLimits

0xbbef,	// (0x00021165) list_single_2graphic_im_pane_t1

0x433b,	// (0x000198b1) list_single_graphic_2heading_pane_fp_ParamLimits

0x433b,	// (0x000198b1) list_single_graphic_2heading_pane_fp

0x4394,	// (0x0001990a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4394,	// (0x0001990a) list_single_graphic_2heading_pane_fp_g1

0x4351,	// (0x000198c7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4351,	// (0x000198c7) list_single_graphic_2heading_pane_fp_g2

0xd383,	// (0x000228f9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd383,	// (0x000228f9) list_single_graphic_2heading_pane_fp_g3

0x435d,	// (0x000198d3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x435d,	// (0x000198d3) list_single_graphic_2heading_pane_fp_g4

0x4371,	// (0x000198e7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4371,	// (0x000198e7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb51,	// (0x000250c7) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb51,	// (0x000250c7) list_single_graphic_2heading_pane_fp_g

0x4b33,	// (0x0001a0a9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4b33,	// (0x0001a0a9) list_single_graphic_2heading_pane_fp_t1

0x43cc,	// (0x00019942) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x43cc,	// (0x00019942) list_single_graphic_2heading_pane_fp_t2

0x4b49,	// (0x0001a0bf) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4b49,	// (0x0001a0bf) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc33,	// (0x000251a9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc33,	// (0x000251a9) list_single_graphic_2heading_pane_fp_t

0x3d7a,	// (0x000192f0) fep_hwr_write_pane_g5_ParamLimits

0x3d7a,	// (0x000192f0) fep_hwr_write_pane_g5

0x3d86,	// (0x000192fc) fep_hwr_write_pane_g6_ParamLimits

0x3d86,	// (0x000192fc) fep_hwr_write_pane_g6

0xba36,	// (0x00020fac) eswt_shell_pane_ParamLimits

0x1294,	// (0x0001680a) bg_popup_window_pane_cp18_ParamLimits

0x4837,	// (0x00019dad) heading_pane_cp70

0x4938,	// (0x00019eae) popup_eswt_tasktip_window_t1_ParamLimits

0xa78b,	// (0x0001fd01) aid_touch_tab_arrow_left

0xa7a1,	// (0x0001fd17) aid_touch_tab_arrow_right

0x9674,	// (0x0001ebea) title_pane_g3_ParamLimits

0x9674,	// (0x0001ebea) title_pane_g3

0xc82b,	// (0x00021da1) set_value_pane_g1

0x8bf4,	// (0x0001e16a) popup_toolbar_trans_pane_ParamLimits

0xbb72,	// (0x000210e8) aid_size_cell_tb_trans_pane_ParamLimits

0xc894,	// (0x00021e0a) bg_tb_trans_pane_ParamLimits

0xbb84,	// (0x000210fa) grid_tb_trans_pane_ParamLimits

0xc59e,	// (0x00021b14) cont_note_pane_ParamLimits

0xc59e,	// (0x00021b14) cont_note_pane

0xc71e,	// (0x00021c94) cont_snote2_single_text_pane_ParamLimits

0xc71e,	// (0x00021c94) cont_snote2_single_text_pane

0xc71e,	// (0x00021c94) cont_snote2_single_graphic_pane_ParamLimits

0xc71e,	// (0x00021c94) cont_snote2_single_graphic_pane

0x18ef,	// (0x00016e65) cont_note_wait_pane_ParamLimits

0x18ef,	// (0x00016e65) cont_note_wait_pane

0x18ef,	// (0x00016e65) cont_note_image_pane_ParamLimits

0x18ef,	// (0x00016e65) cont_note_image_pane

0x4b5f,	// (0x0001a0d5) popup_note2_window_g1_ParamLimits

0x4b5f,	// (0x0001a0d5) popup_note2_window_g1

0xbc2d,	// (0x000211a3) popup_note2_window_t1_ParamLimits

0xbc2d,	// (0x000211a3) popup_note2_window_t1

0xbc72,	// (0x000211e8) popup_note2_window_t2_ParamLimits

0xbc72,	// (0x000211e8) popup_note2_window_t2

0xbcb7,	// (0x0002122d) popup_note2_window_t3_ParamLimits

0xbcb7,	// (0x0002122d) popup_note2_window_t3

0x4c5f,	// (0x0001a1d5) popup_note2_window_t4_ParamLimits

0x4c5f,	// (0x0001a1d5) popup_note2_window_t4

0xc622,	// (0x00021b98) popup_note2_window_t5_ParamLimits

0xc622,	// (0x00021b98) popup_note2_window_t5

0x0004,

0xfc3f,	// (0x000251b5) popup_note2_window_t_ParamLimits

0xfc3f,	// (0x000251b5) popup_note2_window_t

0x4c8e,	// (0x0001a204) popup_note2_image_window_g1_ParamLimits

0x4c8e,	// (0x0001a204) popup_note2_image_window_g1

0xbcfc,	// (0x00021272) popup_note2_image_window_g2_ParamLimits

0xbcfc,	// (0x00021272) popup_note2_image_window_g2

0x0001,

0xfc4a,	// (0x000251c0) popup_note2_image_window_g_ParamLimits

0xfc4a,	// (0x000251c0) popup_note2_image_window_g

0x4cac,	// (0x0001a222) popup_note2_image_window_t1_ParamLimits

0x4cac,	// (0x0001a222) popup_note2_image_window_t1

0x4cc4,	// (0x0001a23a) popup_note2_image_window_t2_ParamLimits

0x4cc4,	// (0x0001a23a) popup_note2_image_window_t2

0x4cdc,	// (0x0001a252) popup_note2_image_window_t3_ParamLimits

0x4cdc,	// (0x0001a252) popup_note2_image_window_t3

0x0002,

0xfc4f,	// (0x000251c5) popup_note2_image_window_t_ParamLimits

0xfc4f,	// (0x000251c5) popup_note2_image_window_t

0x18fd,	// (0x00016e73) popup_note2_wait_window_g1_ParamLimits

0x18fd,	// (0x00016e73) popup_note2_wait_window_g1

0x1909,	// (0x00016e7f) popup_note2_wait_window_g2_ParamLimits

0x1909,	// (0x00016e7f) popup_note2_wait_window_g2

0x1915,	// (0x00016e8b) popup_note2_wait_window_g3_ParamLimits

0x1915,	// (0x00016e8b) popup_note2_wait_window_g3

0x0002,

0xf803,	// (0x00024d79) popup_note2_wait_window_g_ParamLimits

0xf803,	// (0x00024d79) popup_note2_wait_window_g

0x4cf8,	// (0x0001a26e) popup_note2_wait_window_t1_ParamLimits

0x4cf8,	// (0x0001a26e) popup_note2_wait_window_t1

0x4d16,	// (0x0001a28c) popup_note2_wait_window_t2_ParamLimits

0x4d16,	// (0x0001a28c) popup_note2_wait_window_t2

0x4d34,	// (0x0001a2aa) popup_note2_wait_window_t3_ParamLimits

0x4d34,	// (0x0001a2aa) popup_note2_wait_window_t3

0x4d46,	// (0x0001a2bc) popup_note2_wait_window_t4_ParamLimits

0x4d46,	// (0x0001a2bc) popup_note2_wait_window_t4

0x0003,

0xfc56,	// (0x000251cc) popup_note2_wait_window_t_ParamLimits

0xfc56,	// (0x000251cc) popup_note2_wait_window_t

0x4d58,	// (0x0001a2ce) wait_bar2_pane_ParamLimits

0x4d58,	// (0x0001a2ce) wait_bar2_pane

0x4d70,	// (0x0001a2e6) popup_snote2_single_text_window_g1_ParamLimits

0x4d70,	// (0x0001a2e6) popup_snote2_single_text_window_g1

0x4d98,	// (0x0001a30e) popup_snote2_single_text_window_t1_ParamLimits

0x4d98,	// (0x0001a30e) popup_snote2_single_text_window_t1

0x4de4,	// (0x0001a35a) popup_snote2_single_text_window_t2_ParamLimits

0x4de4,	// (0x0001a35a) popup_snote2_single_text_window_t2

0x4e30,	// (0x0001a3a6) popup_snote2_single_text_window_t3_ParamLimits

0x4e30,	// (0x0001a3a6) popup_snote2_single_text_window_t3

0x4e71,	// (0x0001a3e7) popup_snote2_single_text_window_t4_ParamLimits

0x4e71,	// (0x0001a3e7) popup_snote2_single_text_window_t4

0x4ea7,	// (0x0001a41d) popup_snote2_single_text_window_t5_ParamLimits

0x4ea7,	// (0x0001a41d) popup_snote2_single_text_window_t5

0x0004,

0xfc5f,	// (0x000251d5) popup_snote2_single_text_window_t_ParamLimits

0xfc5f,	// (0x000251d5) popup_snote2_single_text_window_t

0xbd0e,	// (0x00021284) popup_snote2_single_graphic_window_g1_ParamLimits

0xbd0e,	// (0x00021284) popup_snote2_single_graphic_window_g1

0x4efa,	// (0x0001a470) popup_snote2_single_graphic_window_g2_ParamLimits

0x4efa,	// (0x0001a470) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6a,	// (0x000251e0) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6a,	// (0x000251e0) popup_snote2_single_graphic_window_g

0x4f22,	// (0x0001a498) popup_snote2_single_graphic_window_t1_ParamLimits

0x4f22,	// (0x0001a498) popup_snote2_single_graphic_window_t1

0x4f6e,	// (0x0001a4e4) popup_snote2_single_graphic_window_t2_ParamLimits

0x4f6e,	// (0x0001a4e4) popup_snote2_single_graphic_window_t2

0x4e30,	// (0x0001a3a6) popup_snote2_single_graphic_window_t3_ParamLimits

0x4e30,	// (0x0001a3a6) popup_snote2_single_graphic_window_t3

0x4e71,	// (0x0001a3e7) popup_snote2_single_graphic_window_t4_ParamLimits

0x4e71,	// (0x0001a3e7) popup_snote2_single_graphic_window_t4

0x4ea7,	// (0x0001a41d) popup_snote2_single_graphic_window_t5_ParamLimits

0x4ea7,	// (0x0001a41d) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6f,	// (0x000251e5) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6f,	// (0x000251e5) popup_snote2_single_graphic_window_t

0x3745,	// (0x00018cbb) clock_nsta_pane_cp2_t1

0x3745,	// (0x00018cbb) clock_nsta_pane_cp2_t2

0x0001,

0xfa8a,	// (0x00025000) clock_nsta_pane_cp2_t

0xc8b3,	// (0x00021e29) form_field_data_wide_pane_g1_ParamLimits

0xc8bf,	// (0x00021e35) form_field_data_wide_pane_g2_ParamLimits

0xc8bf,	// (0x00021e35) form_field_data_wide_pane_g2

0xc8cb,	// (0x00021e41) form_field_data_wide_pane_g3_ParamLimits

0xc8cb,	// (0x00021e41) form_field_data_wide_pane_g3

0x0002,

0xf642,	// (0x00024bb8) form_field_data_wide_pane_g_ParamLimits

0xf642,	// (0x00024bb8) form_field_data_wide_pane_g

0xb5a5,	// (0x00020b1b) grid_touch_3_pane_ParamLimits

0xb5a5,	// (0x00020b1b) grid_touch_3_pane

0xbd36,	// (0x000212ac) cell_touch_3_pane_ParamLimits

0xbd36,	// (0x000212ac) cell_touch_3_pane

0x3cee,	// (0x00019264) cell_touch_3_pane_g1

0x3cee,	// (0x00019264) cell_touch_3_pane_g2

0x0001,

0xfb0f,	// (0x00025085) cell_touch_3_pane_g

0xc654,	// (0x00021bca) cont_query_data_pane

0xc65c,	// (0x00021bd2) cont_query_data_pane_cp1

0x4fe8,	// (0x0001a55e) button_value_adjust_pane_cp7

0x4ff0,	// (0x0001a566) query_popup_pane_cp3

0xcdb5,	// (0x0002232b) bg_popup_sub_pane_cp22_ParamLimits

0x836f,	// (0x0001d8e5) navi_navi_volume_pane_cp2

0x837e,	// (0x0001d8f4) popup_side_volume_key_window_g2

0x838d,	// (0x0001d903) popup_side_volume_key_window_g3

0x0002,

0xf6d8,	// (0x00024c4e) popup_side_volume_key_window_g

0x839c,	// (0x0001d912) popup_side_volume_key_window_t2

0x0001,

0xf6df,	// (0x00024c55) popup_side_volume_key_window_t

0xa558,	// (0x0001face) popup_side_volume_key_window_ParamLimits

0x9d31,	// (0x0001f2a7) list_double_graphic_pane_g4_ParamLimits

0x9d31,	// (0x0001f2a7) list_double_graphic_pane_g4

0xb3ad,	// (0x00020923) list_single_2heading_msg_pane_ParamLimits

0xb3ad,	// (0x00020923) list_single_2heading_msg_pane

0xbd7f,	// (0x000212f5) list_single_2heading_msg_pane_g1_ParamLimits

0xbd7f,	// (0x000212f5) list_single_2heading_msg_pane_g1

0xbd8b,	// (0x00021301) list_single_2heading_msg_pane_g2_ParamLimits

0xbd8b,	// (0x00021301) list_single_2heading_msg_pane_g2

0xbd9e,	// (0x00021314) list_single_2heading_msg_pane_g3_ParamLimits

0xbd9e,	// (0x00021314) list_single_2heading_msg_pane_g3

0xbdaa,	// (0x00021320) list_single_2heading_msg_pane_g4_ParamLimits

0xbdaa,	// (0x00021320) list_single_2heading_msg_pane_g4

0x0003,

0xfc7a,	// (0x000251f0) list_single_2heading_msg_pane_g_ParamLimits

0xfc7a,	// (0x000251f0) list_single_2heading_msg_pane_g

0xbdc2,	// (0x00021338) list_single_2heading_msg_pane_t1_ParamLimits

0xbdc2,	// (0x00021338) list_single_2heading_msg_pane_t1

0xbdea,	// (0x00021360) list_single_2heading_msg_pane_t2_ParamLimits

0xbdea,	// (0x00021360) list_single_2heading_msg_pane_t2

0xbe55,	// (0x000213cb) list_single_2heading_msg_pane_t3_ParamLimits

0xbe55,	// (0x000213cb) list_single_2heading_msg_pane_t3

0x50df,	// (0x0001a655) list_single_2heading_msg_pane_t4_ParamLimits

0x50df,	// (0x0001a655) list_single_2heading_msg_pane_t4

0x0003,

0xfc83,	// (0x000251f9) list_single_2heading_msg_pane_t_ParamLimits

0xfc83,	// (0x000251f9) list_single_2heading_msg_pane_t

0xc408,	// (0x0002197e) title_pane_g4_ParamLimits

0xc408,	// (0x0002197e) title_pane_g4

0xe379,	// (0x000238ef) title_pane_stacon_g3_ParamLimits

0xe379,	// (0x000238ef) title_pane_stacon_g3

0x4af6,	// (0x0001a06c) list_single_2graphic_im_pane_g4_ParamLimits

0x4af6,	// (0x0001a06c) list_single_2graphic_im_pane_g4

0xb0ab,	// (0x00020621) popup_side_volume_key_window_cp

0x2c43,	// (0x000181b9) main_idle_act2_pane_t1

0xe88c,	// (0x00023e02) toolbar_button_pane_g10

0x9bec,	// (0x0001f162) popup_toolbar_window_cp1

0x3736,	// (0x00018cac) clock_nsta_pane_cp_t1

0x3736,	// (0x00018cac) clock_nsta_pane_cp_t2

0x0001,

0xfa85,	// (0x00024ffb) clock_nsta_pane_cp_t

0x836f,	// (0x0001d8e5) navi_navi_volume_pane_cp2_ParamLimits

0xe54d,	// (0x00023ac3) popup_side_volume_key_window_g1_ParamLimits

0x837e,	// (0x0001d8f4) popup_side_volume_key_window_g2_ParamLimits

0x838d,	// (0x0001d903) popup_side_volume_key_window_g3_ParamLimits

0xf6d8,	// (0x00024c4e) popup_side_volume_key_window_g_ParamLimits

0xeb70,	// (0x000240e6) fep_hwr_aid_pane

0xec17,	// (0x0002418d) bg_fep_hwr_top_pane_g4_ParamLimits

0x3d4a,	// (0x000192c0) fep_hwr_top_pane_g1_ParamLimits

0x3d5c,	// (0x000192d2) fep_hwr_top_pane_g2_ParamLimits

0xec37,	// (0x000241ad) fep_hwr_top_pane_g3_ParamLimits

0xfada,	// (0x00025050) fep_hwr_top_pane_g_ParamLimits

0xec4c,	// (0x000241c2) fep_hwr_top_text_pane_ParamLimits

0x20f9,	// (0x0001766f) aid_touch_tab_arrow_arrow_2

0x2102,	// (0x00017678) aid_touch_tab_arrow_left_2

0xeb84,	// (0x000240fa) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xebbb,	// (0x00024131) fep_hwr_prediction_pane

0x3eb5,	// (0x0001942b) fep_vkb_prediction_pane

0xb938,	// (0x00020eae) fep_vkb_side_pane_g3_ParamLimits

0xb938,	// (0x00020eae) fep_vkb_side_pane_g3

0xed50,	// (0x000242c6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xedbc,	// (0x00024332) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xedc9,	// (0x0002433f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb89,	// (0x000250ff) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xee8d,	// (0x00024403) fep_hwr_prediction_pane_g1

0xee97,	// (0x0002440d) fep_hwr_prediction_pane_g2

0xee9f,	// (0x00024415) fep_hwr_prediction_pane_g3

0xeea7,	// (0x0002441d) fep_hwr_prediction_pane_g4

0x0003,

0xfc8c,	// (0x00025202) fep_hwr_prediction_pane_g

0x5104,	// (0x0001a67a) fep_vkb_prediction_pane_g1

0x510e,	// (0x0001a684) fep_vkb_prediction_pane_g2

0x5116,	// (0x0001a68c) fep_vkb_prediction_pane_g3

0x511e,	// (0x0001a694) fep_vkb_prediction_pane_g4

0x0003,

0xfc95,	// (0x0002520b) fep_vkb_prediction_pane_g

0x8dca,	// (0x0001e340) slider_set_pane_g3

0x8dde,	// (0x0001e354) slider_set_pane_g4

0x8df6,	// (0x0001e36c) slider_set_pane_g5

0x8dca,	// (0x0001e340) slider_set_pane_g6

0x8e0c,	// (0x0001e382) slider_set_pane_g7

0x2797,	// (0x00017d0d) slider_form_pane_g3

0x27a0,	// (0x00017d16) slider_form_pane_g4

0x27a8,	// (0x00017d1e) slider_form_pane_g5

0x2797,	// (0x00017d0d) slider_form_pane_g6

0xb363,	// (0x000208d9) slider_form_pane_g7

0x2f27,	// (0x0001849d) slider_set_pane_vc_g3

0x2f30,	// (0x000184a6) slider_set_pane_vc_g4

0x2f39,	// (0x000184af) slider_set_pane_vc_g5

0x2f27,	// (0x0001849d) slider_set_pane_vc_g6

0x2f42,	// (0x000184b8) slider_set_pane_vc_g7

0x33f4,	// (0x0001896a) slider_form_pane_vc_g1

0x33fd,	// (0x00018973) slider_form_pane_vc_g2

0x3406,	// (0x0001897c) slider_form_pane_vc_g3

0x33f4,	// (0x0001896a) slider_form_pane_vc_g4

0x340f,	// (0x00018985) slider_form_pane_vc_g5

0x0004,

0xfa57,	// (0x00024fcd) slider_form_pane_vc_g

0xe300,	// (0x00023876) main_idle_act3_pane

0x5126,	// (0x0001a69c) ai3_links_pane

0xbec3,	// (0x00021439) popup_ai3_data_window_ParamLimits

0xbec3,	// (0x00021439) popup_ai3_data_window

0xc3ea,	// (0x00021960) grid_ai3_links_pane

0xbedb,	// (0x00021451) cell_ai3_links_pane_ParamLimits

0xbedb,	// (0x00021451) cell_ai3_links_pane

0x515f,	// (0x0001a6d5) bg_popup_sub_pane_cp11

0x516c,	// (0x0001a6e2) cell_ai3_links_pane_g1

0xc3ea,	// (0x00021960) bg_popup_sub_pane_cp12

0x5191,	// (0x0001a707) heading_ai3_data_pane

0x5199,	// (0x0001a70f) list_ai3_gene_pane

0x51a5,	// (0x0001a71b) popup_ai3_data_window_g1

0x51ad,	// (0x0001a723) heading_ai3_data_pane_g1

0x51b5,	// (0x0001a72b) heading_ai3_data_pane_t1

0xbef5,	// (0x0002146b) list_double_ai3_gene_pane_ParamLimits

0xbef5,	// (0x0002146b) list_double_ai3_gene_pane

0x51d0,	// (0x0001a746) list_single_ai3_gene_pane_ParamLimits

0x51d0,	// (0x0001a746) list_single_ai3_gene_pane

0x3cb3,	// (0x00019229) list_highlight_pane_cp7_ParamLimits

0x3cb3,	// (0x00019229) list_highlight_pane_cp7

0x51dd,	// (0x0001a753) list_single_a13_gene_pane_t1_ParamLimits

0x51dd,	// (0x0001a753) list_single_a13_gene_pane_t1

0x51f4,	// (0x0001a76a) list_single_ai3_gene_pane_g1

0x51fd,	// (0x0001a773) list_single_ai3_gene_pane_g2

0x0001,

0xfc9e,	// (0x00025214) list_single_ai3_gene_pane_g

0x5205,	// (0x0001a77b) list_double_ai3_gene_pane_g1_ParamLimits

0x5205,	// (0x0001a77b) list_double_ai3_gene_pane_g1

0xbf02,	// (0x00021478) list_double_ai3_gene_pane_t1_ParamLimits

0xbf02,	// (0x00021478) list_double_ai3_gene_pane_t1

0x522d,	// (0x0001a7a3) list_double_ai3_gene_pane_t2_ParamLimits

0x522d,	// (0x0001a7a3) list_double_ai3_gene_pane_t2

0x5242,	// (0x0001a7b8) list_double_ai3_gene_pane_t3_ParamLimits

0x5242,	// (0x0001a7b8) list_double_ai3_gene_pane_t3

0x0002,

0xfca3,	// (0x00025219) list_double_ai3_gene_pane_t_ParamLimits

0xfca3,	// (0x00025219) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5001,	// (0x0001a577) aid_size_min_col_2

0xbd69,	// (0x000212df) aid_size_min_msg_ParamLimits

0xbd69,	// (0x000212df) aid_size_min_msg

0xb94c,	// (0x00020ec2) fep_vkb_top_text_pane_g2_ParamLimits

0xb94c,	// (0x00020ec2) fep_vkb_top_text_pane_g2

0x0001,

0xfb0a,	// (0x00025080) fep_vkb_top_text_pane_g_ParamLimits

0xfb0a,	// (0x00025080) fep_vkb_top_text_pane_g

0xe300,	// (0x00023876) main_hc_apps_shell_pane

0x525f,	// (0x0001a7d5) grid_hc_apps_pane_ParamLimits

0x525f,	// (0x0001a7d5) grid_hc_apps_pane

0x5271,	// (0x0001a7e7) list_hc_apps_pane

0x5279,	// (0x0001a7ef) scroll_pane_cp37_ParamLimits

0x5279,	// (0x0001a7ef) scroll_pane_cp37

0xbf1e,	// (0x00021494) cell_hc_apps_pane_ParamLimits

0xbf1e,	// (0x00021494) cell_hc_apps_pane

0xbfdc,	// (0x00021552) cell_hc_apps_pane_g1_ParamLimits

0xbfdc,	// (0x00021552) cell_hc_apps_pane_g1

0x5363,	// (0x0001a8d9) cell_hc_apps_pane_g2_ParamLimits

0x5363,	// (0x0001a8d9) cell_hc_apps_pane_g2

0x537f,	// (0x0001a8f5) cell_hc_apps_pane_g3_ParamLimits

0x537f,	// (0x0001a8f5) cell_hc_apps_pane_g3

0x0002,

0xfcaa,	// (0x00025220) cell_hc_apps_pane_g_ParamLimits

0xfcaa,	// (0x00025220) cell_hc_apps_pane_g

0xc008,	// (0x0002157e) cell_hc_apps_pane_t1_ParamLimits

0xc008,	// (0x0002157e) cell_hc_apps_pane_t1

0xc59e,	// (0x00021b14) grid_highlight_pane_cp10_ParamLimits

0xc59e,	// (0x00021b14) grid_highlight_pane_cp10

0xc046,	// (0x000215bc) list_single_hc_apps_pane_ParamLimits

0xc046,	// (0x000215bc) list_single_hc_apps_pane

0xc076,	// (0x000215ec) list_single_hc_apps_pane_g1

0xc08f,	// (0x00021605) list_single_hc_apps_pane_g2

0x0001,

0xfcb1,	// (0x00025227) list_single_hc_apps_pane_g

0xc0a8,	// (0x0002161e) list_single_hc_apps_pane_g2_copy1

0xc0c4,	// (0x0002163a) list_single_hc_apps_pane_t1

0xc45a,	// (0x000219d0) bg_set_opt_pane_cp_ParamLimits

0x82c9,	// (0x0001d83f) setting_slider_pane_t1_ParamLimits

0x82e2,	// (0x0001d858) setting_slider_pane_t2_ParamLimits

0x82fc,	// (0x0001d872) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00024aaf) setting_slider_pane_t_ParamLimits

0x8314,	// (0x0001d88a) slider_set_pane_ParamLimits

0xe751,	// (0x00023cc7) control_pane_g5_ParamLimits

0xe751,	// (0x00023cc7) control_pane_g5

0xb1e5,	// (0x0002075b) slider_set_pane_g1_ParamLimits

0xea5e,	// (0x00023fd4) slider_set_pane_g2_ParamLimits

0x8dca,	// (0x0001e340) slider_set_pane_g3_ParamLimits

0x8dde,	// (0x0001e354) slider_set_pane_g4_ParamLimits

0x8df6,	// (0x0001e36c) slider_set_pane_g5_ParamLimits

0x8dca,	// (0x0001e340) slider_set_pane_g6_ParamLimits

0x8e0c,	// (0x0001e382) slider_set_pane_g7_ParamLimits

0xf91f,	// (0x00024e95) slider_set_pane_g_ParamLimits

0xd057,	// (0x000225cd) navi_icon_text_pane_ParamLimits

0xa754,	// (0x0001fcca) aid_fill_nsta_2_ParamLimits

0xa78b,	// (0x0001fd01) aid_touch_tab_arrow_left_ParamLimits

0xa7a1,	// (0x0001fd17) aid_touch_tab_arrow_right_ParamLimits

0xa83c,	// (0x0001fdb2) clock_nsta_pane_ParamLimits

0x20db,	// (0x00017651) navi_icon_pane_g1_ParamLimits

0x20e7,	// (0x0001765d) navi_text_pane_t1_ParamLimits

0x3846,	// (0x00018dbc) navi_icon_text_pane_g1_ParamLimits

0x3852,	// (0x00018dc8) navi_icon_text_pane_t1_ParamLimits

0xc076,	// (0x000215ec) list_single_hc_apps_pane_g1_ParamLimits

0xc08f,	// (0x00021605) list_single_hc_apps_pane_g2_ParamLimits

0xfcb1,	// (0x00025227) list_single_hc_apps_pane_g_ParamLimits

0xc0a8,	// (0x0002161e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc0c4,	// (0x0002163a) list_single_hc_apps_pane_t1_ParamLimits

0x81f1,	// (0x0001d767) popup_toolbar2_fixed_window_ParamLimits

0x81f1,	// (0x0001d767) popup_toolbar2_fixed_window

0x8bea,	// (0x0001e160) popup_toolbar2_float_window

0xc3ea,	// (0x00021960) bg_popup_sub_pane_cp27

0x54c0,	// (0x0001aa36) grid_toolbar2_float_pane

0xc3ea,	// (0x00021960) bg_popup_sub_pane_cp26

0x54c0,	// (0x0001aa36) grid_toolbar2_fixed_pane

0xc0f2,	// (0x00021668) cell_toolbar2_fixed_pane_ParamLimits

0xc0f2,	// (0x00021668) cell_toolbar2_fixed_pane

0xc10c,	// (0x00021682) cell_toolbar2_fixed_pane_g1

0x10c6,	// (0x0001663c) toolbar2_fixed_button_pane

0x1174,	// (0x000166ea) toolbar2_fixed_button_pane_g1

0x1184,	// (0x000166fa) toolbar2_fixed_button_pane_g2

0x117c,	// (0x000166f2) toolbar2_fixed_button_pane_g3

0x1194,	// (0x0001670a) toolbar2_fixed_button_pane_g4

0x118c,	// (0x00016702) toolbar2_fixed_button_pane_g5

0x119c,	// (0x00016712) toolbar2_fixed_button_pane_g6

0x11a4,	// (0x0001671a) toolbar2_fixed_button_pane_g7

0x11b4,	// (0x0001672a) toolbar2_fixed_button_pane_g8

0x11ac,	// (0x00016722) toolbar2_fixed_button_pane_g9

0x0008,

0xf821,	// (0x00024d97) toolbar2_fixed_button_pane_g

0x54e1,	// (0x0001aa57) cell_toolbar2_float_pane_ParamLimits

0x54e1,	// (0x0001aa57) cell_toolbar2_float_pane

0x54f2,	// (0x0001aa68) cell_toolbar2_float_pane_g1

0x10c6,	// (0x0001663c) toolbar2_fixed_button_pane_cp

0xb834,	// (0x00020daa) fep_vkb_accented_list_pane_ParamLimits

0xb834,	// (0x00020daa) fep_vkb_accented_list_pane

0xed30,	// (0x000242a6) bg_popup_fep_shadow_pane_g9

0xd1a6,	// (0x0002271c) bg_popup_fep_shadow_pane_cp3

0xca1b,	// (0x00021f91) list_accented_list_pane

0x54fb,	// (0x0001aa71) list_single_accented_list_pane_ParamLimits

0x54fb,	// (0x0001aa71) list_single_accented_list_pane

0xd1a6,	// (0x0002271c) list_highlight_pane_cp10

0x550c,	// (0x0001aa82) list_single_accented_list_pane_t1

0x8b14,	// (0x0001e08a) popup_slider_window_ParamLimits

0x8b14,	// (0x0001e08a) popup_slider_window

0x4ff8,	// (0x0001a56e) aid_indentation_list_msg

0xc1fd,	// (0x00021773) bg_popup_window_pane_cp19

0x5632,	// (0x0001aba8) popup_slider_window_g1

0x564e,	// (0x0001abc4) popup_slider_window_g2

0x566a,	// (0x0001abe0) popup_slider_window_g3

0x0005,

0xfcb6,	// (0x0002522c) popup_slider_window_g

0x56d0,	// (0x0001ac46) popup_slider_window_t1

0x5744,	// (0x0001acba) small_volume_slider_vertical_pane

0x3cee,	// (0x00019264) small_volume_slider_vertical_pane_g1

0x3cee,	// (0x00019264) small_volume_slider_vertical_pane_g2

0x5760,	// (0x0001acd6) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc8,	// (0x0002523e) small_volume_slider_vertical_pane_g

0x7ff0,	// (0x0001d566) area_side_right_pane_ParamLimits

0x7ff0,	// (0x0001d566) area_side_right_pane

0x8f36,	// (0x0001e4ac) aid_size_side_button_ParamLimits

0x8f36,	// (0x0001e4ac) aid_size_side_button

0x8f4f,	// (0x0001e4c5) grid_sctrl_middle_pane_ParamLimits

0x8f4f,	// (0x0001e4c5) grid_sctrl_middle_pane

0xeeb8,	// (0x0002442e) sctrl_sk_bottom_pane

0xeec9,	// (0x0002443f) sctrl_sk_top_pane

0xeedb,	// (0x00024451) aid_touch_sctrl_top

0xeee8,	// (0x0002445e) bg_sctrl_sk_pane_ParamLimits

0xeee8,	// (0x0002445e) bg_sctrl_sk_pane

0xeef6,	// (0x0002446c) sctrl_sk_top_pane_g1

0xef03,	// (0x00024479) sctrl_sk_top_pane_t1

0xeedb,	// (0x00024451) aid_touch_sctrl_bottom

0xeee8,	// (0x0002445e) bg_sctrl_sk_pane_cp_ParamLimits

0xeee8,	// (0x0002445e) bg_sctrl_sk_pane_cp

0xef1e,	// (0x00024494) sctrl_sk_bottom_pane_g1

0xef03,	// (0x00024479) sctrl_sk_bottom_pane_t1

0x8f69,	// (0x0001e4df) cell_sctrl_middle_pane_ParamLimits

0x8f69,	// (0x0001e4df) cell_sctrl_middle_pane

0x8f7a,	// (0x0001e4f0) aid_touch_sctrl_middle_ParamLimits

0x8f7a,	// (0x0001e4f0) aid_touch_sctrl_middle

0x8f87,	// (0x0001e4fd) bg_sctrl_middle_pane_ParamLimits

0x8f87,	// (0x0001e4fd) bg_sctrl_middle_pane

0xef27,	// (0x0002449d) cell_sctrl_middle_pane_g1_ParamLimits

0xef27,	// (0x0002449d) cell_sctrl_middle_pane_g1

0x8f95,	// (0x0001e50b) cell_sctrl_middle_pane_g2_ParamLimits

0x8f95,	// (0x0001e50b) cell_sctrl_middle_pane_g2

0x0001,

0xfcd4,	// (0x0002524a) cell_sctrl_middle_pane_g_ParamLimits

0xfcd4,	// (0x0002524a) cell_sctrl_middle_pane_g

0x1174,	// (0x000166ea) bg_sctrl_middle_pane_g1

0x117c,	// (0x000166f2) bg_sctrl_middle_pane_g2

0x1184,	// (0x000166fa) bg_sctrl_middle_pane_g3

0x118c,	// (0x00016702) bg_sctrl_middle_pane_g4

0x1194,	// (0x0001670a) bg_sctrl_middle_pane_g5

0x119c,	// (0x00016712) bg_sctrl_middle_pane_g6

0x11a4,	// (0x0001671a) bg_sctrl_middle_pane_g7

0x11ac,	// (0x00016722) bg_sctrl_middle_pane_g8

0x0007,

0xfcd9,	// (0x0002524f) bg_sctrl_middle_pane_g

0x11b4,	// (0x0001672a) bg_sctrl_middle_pane_g8_copy1

0x1174,	// (0x000166ea) bg_sctrl_sk_pane_g1

0x1184,	// (0x000166fa) bg_sctrl_sk_pane_g2

0x117c,	// (0x000166f2) bg_sctrl_sk_pane_g3

0x0008,

0xf821,	// (0x00024d97) bg_sctrl_sk_pane_g

0xc76c,	// (0x00021ce2) aid_size_touch_scroll_bar

0x1194,	// (0x0001670a) bg_sctrl_sk_pane_g4

0x118c,	// (0x00016702) bg_sctrl_sk_pane_g5

0x119c,	// (0x00016712) bg_sctrl_sk_pane_g6

0x11a4,	// (0x0001671a) bg_sctrl_sk_pane_g7

0x11b4,	// (0x0001672a) bg_sctrl_sk_pane_g8

0x11ac,	// (0x00016722) bg_sctrl_sk_pane_g9

0xe79c,	// (0x00023d12) popup_fep_china_hwr2_fs_candidate_window

0x85da,	// (0x0001db50) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x85da,	// (0x0001db50) popup_fep_china_hwr2_fs_control_window

0xed50,	// (0x000242c6) sctrl_sk_top_pane_g2

0x0001,

0xfccf,	// (0x00025245) sctrl_sk_top_pane_g

0xc293,	// (0x00021809) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc293,	// (0x00021809) aid_fep_china_hwr2_fs_cell

0xc2a7,	// (0x0002181d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc2a7,	// (0x0002181d) bg_popup_fep_shadow_pane_cp4

0xc2be,	// (0x00021834) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc2be,	// (0x00021834) bg_popup_fep_shadow_pane_cp5

0xc2d0,	// (0x00021846) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc2d0,	// (0x00021846) popup_fep_china_hwr2_fs_control_bar_grid

0xd38f,	// (0x00022905) popup_fep_china_hwr2_fs_control_funtion_grid

0x57bc,	// (0x0001ad32) aid_fep_china_hwr2_fs_candi_cell

0xc3ea,	// (0x00021960) bg_popup_fep_shadow_pane_cp6

0x57c6,	// (0x0001ad3c) popup_fep_china_hwr2_fs_candidate_grid

0xc2e4,	// (0x0002185a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc2e4,	// (0x0002185a) cell_fep_china_hwr2_fs_funtion_grid

0x3cee,	// (0x00019264) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x57e8,	// (0x0001ad5e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x57e8,	// (0x0001ad5e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x57f6,	// (0x0001ad6c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x57f6,	// (0x0001ad6c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcea,	// (0x00025260) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcea,	// (0x00025260) cell_fep_china_hwr2_fs_funtion_grid_g

0xc2fc,	// (0x00021872) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc2fc,	// (0x00021872) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc311,	// (0x00021887) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc311,	// (0x00021887) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcef,	// (0x00025265) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcef,	// (0x00025265) cell_fep_china_hwr2_fs_funtion_grid_t

0x583d,	// (0x0001adb3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5845,	// (0x0001adbb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x584d,	// (0x0001adc3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf4,	// (0x0002526a) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5855,	// (0x0001adcb) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5855,	// (0x0001adcb) cell_fep_china_hwr2_fs_candidate_grid

0x586e,	// (0x0001ade4) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5876,	// (0x0001adec) popup_fep_china_hwr2_fs_candidate_grid_g21

0x3cee,	// (0x00019264) cell_fep_china_hwr2_fs_candidate_grid_g1

0x3cee,	// (0x00019264) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0f,	// (0x00025085) cell_fep_china_hwr2_fs_candidate_grid_g

0x587e,	// (0x0001adf4) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0d3f,	// (0x000162b5) clock_nsta_pane_cp_24_ParamLimits

0x0d3f,	// (0x000162b5) clock_nsta_pane_cp_24

0x0dbd,	// (0x00016333) indicator_nsta_pane_cp_24_ParamLimits

0x0dbd,	// (0x00016333) indicator_nsta_pane_cp_24

0x1f57,	// (0x000174cd) heading_pane_g1

0x0001,

0xf886,	// (0x00024dfc) heading_pane_g

0x2a8c,	// (0x00018002) grid_sct_catagory_button_pane

0x2abc,	// (0x00018032) scroll_pane_cp5_ParamLimits

0x3894,	// (0x00018e0a) button_value_adjust_pane_cp5_ParamLimits

0x3894,	// (0x00018e0a) button_value_adjust_pane_cp5

0x398e,	// (0x00018f04) form2_midp_time_pane_ParamLimits

0x588c,	// (0x0001ae02) cell_sct_catagory_button_pane_ParamLimits

0x588c,	// (0x0001ae02) cell_sct_catagory_button_pane

0x3cb3,	// (0x00019229) bg_button_pane_cp01_ParamLimits

0x3cb3,	// (0x00019229) bg_button_pane_cp01

0x3cee,	// (0x00019264) cell_sct_catagory_button_pane_g1

0x8b8d,	// (0x0001e103) popup_tb_extension_window

0xc32d,	// (0x000218a3) aid_size_cell_ext_ParamLimits

0xc32d,	// (0x000218a3) aid_size_cell_ext

0xc71e,	// (0x00021c94) bg_tb_trans_pane_cp1_ParamLimits

0xc71e,	// (0x00021c94) bg_tb_trans_pane_cp1

0xc353,	// (0x000218c9) grid_tb_ext_pane_ParamLimits

0xc353,	// (0x000218c9) grid_tb_ext_pane

0xc392,	// (0x00021908) cell_tb_ext_pane_ParamLimits

0xc392,	// (0x00021908) cell_tb_ext_pane

0xd397,	// (0x0002290d) cell_tb_ext_pane_g1_ParamLimits

0xd397,	// (0x0002290d) cell_tb_ext_pane_g1

0x5922,	// (0x0001ae98) cell_tb_ext_pane_t1

0xc59e,	// (0x00021b14) list_highlight_pane_cp11_ParamLimits

0xc59e,	// (0x00021b14) list_highlight_pane_cp11

0x8206,	// (0x0001d77c) popup_uni_indicator_window_ParamLimits

0x8206,	// (0x0001d77c) popup_uni_indicator_window

0xc894,	// (0x00021e0a) bg_popup_sub_pane_cp14

0xd3b4,	// (0x0002292a) list_uniindi_pane

0xd3c0,	// (0x00022936) uniindi_top_pane

0xc59e,	// (0x00021b14) bg_uniindi_top_pane

0xd3df,	// (0x00022955) uniindi_top_pane_g1

0xd3f5,	// (0x0002296b) uniindi_top_pane_g2

0x0003,

0xfcfb,	// (0x00025271) uniindi_top_pane_g

0xd412,	// (0x00022988) uniindi_top_pane_t1

0x59d3,	// (0x0001af49) list_single_uniindi_pane_ParamLimits

0x59d3,	// (0x0001af49) list_single_uniindi_pane

0x3cee,	// (0x00019264) bg_uniindi_top_pane_g1

0x59e6,	// (0x0001af5c) list_single_uniindi_pane_g1

0x59f9,	// (0x0001af6f) list_single_uniindi_pane_t1

0xe300,	// (0x00023876) control_bg_pane

0x5a1e,	// (0x0001af94) bg_sctrl_sk_pane_cp1

0x5a27,	// (0x0001af9d) bg_sctrl_sk_pane_cp2

0x5a30,	// (0x0001afa6) control_bg_pane_g1

0x5a39,	// (0x0001afaf) control_bg_pane_g2

0x0001,

0xfd04,	// (0x0002527a) control_bg_pane_g

0x36da,	// (0x00018c50) cell_indicator_nsta_pane_g1_ParamLimits

0xb5e2,	// (0x00020b58) cell_indicator_nsta_pane_g2_ParamLimits

0xfa73,	// (0x00024fe9) cell_indicator_nsta_pane_g_ParamLimits

0x3a16,	// (0x00018f8c) form2_midp_time_pane_t1_ParamLimits

0xe78e,	// (0x00023d04) main_idle_act4_pane_ParamLimits

0xe78e,	// (0x00023d04) main_idle_act4_pane

0x8b8d,	// (0x0001e103) popup_tb_extension_window_ParamLimits

0xc378,	// (0x000218ee) tb_ext_find_pane_ParamLimits

0xc378,	// (0x000218ee) tb_ext_find_pane

0x5a42,	// (0x0001afb8) ai_gene_pane_1_cp1

0xd227,	// (0x0002279d) ai_gene_pane_2_cp1

0xd43c,	// (0x000229b2) list_single_idle_plugin_calendar_pane

0x5a53,	// (0x0001afc9) list_single_idle_plugin_notification_pane

0x5a5c,	// (0x0001afd2) list_single_idle_plugin_player_pane

0xd445,	// (0x000229bb) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd445,	// (0x000229bb) list_single_idle_plugin_shortcut_pane

0xd46d,	// (0x000229e3) main_idle_act4_pane_t1

0xd484,	// (0x000229fa) main_idle_act4_pane_t2

0x0001,

0xfd09,	// (0x0002527f) main_idle_act4_pane_t

0xd49b,	// (0x00022a11) middle_sk_idle_act4_pane_ParamLimits

0xd49b,	// (0x00022a11) middle_sk_idle_act4_pane

0xd4b7,	// (0x00022a2d) popup_clock_digital_analogue_window_cp2

0xd4e3,	// (0x00022a59) shortcut_wheel_idle_act4_pane_ParamLimits

0xd4e3,	// (0x00022a59) shortcut_wheel_idle_act4_pane

0x3cee,	// (0x00019264) shortcut_wheel_idle_act4_pane_g1

0x3cee,	// (0x00019264) shortcut_wheel_idle_act4_pane_g2

0x3cee,	// (0x00019264) shortcut_wheel_idle_act4_pane_g3

0x3cee,	// (0x00019264) shortcut_wheel_idle_act4_pane_g4

0x3cee,	// (0x00019264) shortcut_wheel_idle_act4_pane_g5

0x5aef,	// (0x0001b065) shortcut_wheel_idle_act4_pane_g6

0x5af7,	// (0x0001b06d) shortcut_wheel_idle_act4_pane_g7

0x5aff,	// (0x0001b075) shortcut_wheel_idle_act4_pane_g8

0x5b07,	// (0x0001b07d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0e,	// (0x00025284) shortcut_wheel_idle_act4_pane_g

0xc3ba,	// (0x00021930) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3ba,	// (0x00021930) middle_sk_idle_act4_pane_g1

0xd560,	// (0x00022ad6) middle_sk_idle_act4_pane_g2_ParamLimits

0xd560,	// (0x00022ad6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd31,	// (0x000252a7) middle_sk_idle_act4_pane_g_ParamLimits

0xfd31,	// (0x000252a7) middle_sk_idle_act4_pane_g

0xd578,	// (0x00022aee) middle_sk_idle_act4_pane_t1_ParamLimits

0xd578,	// (0x00022aee) middle_sk_idle_act4_pane_t1

0xd5a7,	// (0x00022b1d) grid_ai_shortcut_pane_ParamLimits

0xd5a7,	// (0x00022b1d) grid_ai_shortcut_pane

0xd5c4,	// (0x00022b3a) list_highlight_pane_cp16_ParamLimits

0xd5c4,	// (0x00022b3a) list_highlight_pane_cp16

0xd5d1,	// (0x00022b47) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd5d1,	// (0x00022b47) list_single_idle_plugin_shortcut_pane_g1

0xd5dd,	// (0x00022b53) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd5dd,	// (0x00022b53) list_single_idle_plugin_shortcut_pane_g2

0xd5f9,	// (0x00022b6f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd5f9,	// (0x00022b6f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd36,	// (0x000252ac) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd36,	// (0x000252ac) list_single_idle_plugin_shortcut_pane_g

0xd60e,	// (0x00022b84) cell_ai_shortcut_pane_ParamLimits

0xd60e,	// (0x00022b84) cell_ai_shortcut_pane

0xd624,	// (0x00022b9a) cell_ai_shortcut_pane_g1_ParamLimits

0xd624,	// (0x00022b9a) cell_ai_shortcut_pane_g1

0x5a42,	// (0x0001afb8) ai_gene_pane_1_cp2

0x5c37,	// (0x0001b1ad) ai_gene_pane_2_cp2

0x5c3f,	// (0x0001b1b5) list_highlight_pane_cp15

0xd646,	// (0x00022bbc) list_single_idle_plugin_calendar_pane_g1

0x5c3f,	// (0x0001b1b5) list_highlight_pane_cp17

0x5c50,	// (0x0001b1c6) list_single_idle_plugin_calendar_pane_g1_copy1

0x5c58,	// (0x0001b1ce) list_single_idle_plugin_player_pane_g1

0x2ce5,	// (0x0001825b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3d,	// (0x000252b3) list_single_idle_plugin_player_pane_g

0x5c60,	// (0x0001b1d6) list_single_idle_plugin_player_pane_t1

0x5c6e,	// (0x0001b1e4) list_single_idle_plugin_player_pane_t2

0x5c7c,	// (0x0001b1f2) list_single_idle_plugin_player_pane_t3

0x5c8a,	// (0x0001b200) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd42,	// (0x000252b8) list_single_idle_plugin_player_pane_t

0x5c98,	// (0x0001b20e) wait_bar_pane_cp15

0x5ca0,	// (0x0001b216) grid_ai_notification_pane

0x2ce5,	// (0x0001825b) list_single_idle_plugin_notification_pane_g1

0xd64e,	// (0x00022bc4) cell_ai_notification_pane_ParamLimits

0xd64e,	// (0x00022bc4) cell_ai_notification_pane

0x5cb6,	// (0x0001b22c) cell_ai_notification_pane_g1

0x5cbe,	// (0x0001b234) cell_ai_notification_pane_t1

0xd65b,	// (0x00022bd1) tb_ext_find_button_pane

0xd663,	// (0x00022bd9) tb_ext_find_pane_g1

0xd66b,	// (0x00022be1) tb_ext_find_pane_t1

0xcd54,	// (0x000222ca) tb_ext_find_button_pane_g1

0xd679,	// (0x00022bef) tb_ext_find_button_pane_g2

0x0001,

0xfd4b,	// (0x000252c1) tb_ext_find_button_pane_g

0xd46d,	// (0x000229e3) main_idle_act4_pane_t1_ParamLimits

0xd484,	// (0x000229fa) main_idle_act4_pane_t2_ParamLimits

0xfd09,	// (0x0002527f) main_idle_act4_pane_t_ParamLimits

0xd4b7,	// (0x00022a2d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd4cf,	// (0x00022a45) sat_plugin_idle_act4_pane_ParamLimits

0xd4cf,	// (0x00022a45) sat_plugin_idle_act4_pane

0xd682,	// (0x00022bf8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd682,	// (0x00022bf8) sat_plugin_idle_act4_pane_t1

0xd69a,	// (0x00022c10) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd69a,	// (0x00022c10) sat_plugin_idle_act4_pane_t2

0xd6b2,	// (0x00022c28) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd6b2,	// (0x00022c28) sat_plugin_idle_act4_pane_t3

0xd6ca,	// (0x00022c40) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd6ca,	// (0x00022c40) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd50,	// (0x000252c6) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd50,	// (0x000252c6) sat_plugin_idle_act4_pane_t

0x8181,	// (0x0001d6f7) popup_battery_window_ParamLimits

0x8181,	// (0x0001d6f7) popup_battery_window

0xc59e,	// (0x00021b14) bg_popup_sub_pane_cp25_ParamLimits

0xc59e,	// (0x00021b14) bg_popup_sub_pane_cp25

0x5d3f,	// (0x0001b2b5) popup_battery_window_g1_ParamLimits

0x5d3f,	// (0x0001b2b5) popup_battery_window_g1

0x5d4b,	// (0x0001b2c1) popup_battery_window_t1_ParamLimits

0x5d4b,	// (0x0001b2c1) popup_battery_window_t1

0x5d5d,	// (0x0001b2d3) popup_battery_window_t2_ParamLimits

0x5d5d,	// (0x0001b2d3) popup_battery_window_t2

0x0001,

0xfd59,	// (0x000252cf) popup_battery_window_t_ParamLimits

0xfd59,	// (0x000252cf) popup_battery_window_t

0xa5ac,	// (0x0001fb22) midp_canvas_pane_ParamLimits

0xa61e,	// (0x0001fb94) midp_keypad_pane_ParamLimits

0xa61e,	// (0x0001fb94) midp_keypad_pane

0xca44,	// (0x00021fba) main_midp_pane_ParamLimits

0xb5ef,	// (0x00020b65) signal_pane_g2_cp_ParamLimits

0xd6e2,	// (0x00022c58) aid_size_cell_midp_keypad_ParamLimits

0xd6e2,	// (0x00022c58) aid_size_cell_midp_keypad

0xd700,	// (0x00022c76) midp_keyp_game_grid_pane_ParamLimits

0xd700,	// (0x00022c76) midp_keyp_game_grid_pane

0xd727,	// (0x00022c9d) midp_keyp_rocker_pane_ParamLimits

0xd727,	// (0x00022c9d) midp_keyp_rocker_pane

0xd778,	// (0x00022cee) midp_keyp_sk_left_pane_ParamLimits

0xd778,	// (0x00022cee) midp_keyp_sk_left_pane

0xd7cc,	// (0x00022d42) midp_keyp_sk_right_pane_ParamLimits

0xd7cc,	// (0x00022d42) midp_keyp_sk_right_pane

0xc3ea,	// (0x00021960) bg_button_pane_cp03

0xd820,	// (0x00022d96) midp_keyp_sk_left_pane_g1

0xc3ea,	// (0x00021960) bg_button_pane_cp04

0xd820,	// (0x00022d96) midp_keyp_sk_right_pane_g1

0x3cee,	// (0x00019264) midp_keyp_rocker_pane_g1

0xd829,	// (0x00022d9f) keyp_game_cell_pane_ParamLimits

0xd829,	// (0x00022d9f) keyp_game_cell_pane

0xc3ea,	// (0x00021960) bg_button_pane_cp02

0xd84d,	// (0x00022dc3) keyp_game_cell_pane_g1

0x81a1,	// (0x0001d717) popup_fep_vkb2_window_ParamLimits

0x81a1,	// (0x0001d717) popup_fep_vkb2_window

0x8fa1,	// (0x0001e517) aid_size_cell_vkb2_ParamLimits

0x8fa1,	// (0x0001e517) aid_size_cell_vkb2

0x8fd5,	// (0x0001e54b) popup_fep_vkb2_window_g1_ParamLimits

0x8fd5,	// (0x0001e54b) popup_fep_vkb2_window_g1

0x9025,	// (0x0001e59b) vkb2_area_bottom_pane_ParamLimits

0x9025,	// (0x0001e59b) vkb2_area_bottom_pane

0x9079,	// (0x0001e5ef) vkb2_area_keypad_pane_ParamLimits

0x9079,	// (0x0001e5ef) vkb2_area_keypad_pane

0x90c1,	// (0x0001e637) vkb2_area_top_pane_ParamLimits

0x90c1,	// (0x0001e637) vkb2_area_top_pane

0x914d,	// (0x0001e6c3) vkb2_top_entry_pane_ParamLimits

0x914d,	// (0x0001e6c3) vkb2_top_entry_pane

0x917a,	// (0x0001e6f0) vkb2_top_grid_left_pane_ParamLimits

0x917a,	// (0x0001e6f0) vkb2_top_grid_left_pane

0x919b,	// (0x0001e711) vkb2_top_grid_right_pane_ParamLimits

0x919b,	// (0x0001e711) vkb2_top_grid_right_pane

0xef5d,	// (0x000244d3) vkb2_cell_keypad_pane_ParamLimits

0xef5d,	// (0x000244d3) vkb2_cell_keypad_pane

0x91e3,	// (0x0001e759) vkb2_area_bottom_grid_pane_ParamLimits

0x91e3,	// (0x0001e759) vkb2_area_bottom_grid_pane

0x920d,	// (0x0001e783) vkb2_area_bottom_pane_g1_ParamLimits

0x920d,	// (0x0001e783) vkb2_area_bottom_pane_g1

0x9233,	// (0x0001e7a9) vkb2_area_bottom_pane_g2_ParamLimits

0x9233,	// (0x0001e7a9) vkb2_area_bottom_pane_g2

0x9264,	// (0x0001e7da) vkb2_area_bottom_pane_g3_ParamLimits

0x9264,	// (0x0001e7da) vkb2_area_bottom_pane_g3

0x0002,

0xfd5e,	// (0x000252d4) vkb2_area_bottom_pane_g_ParamLimits

0xfd5e,	// (0x000252d4) vkb2_area_bottom_pane_g

0xf00a,	// (0x00024580) vkb2_top_cell_left_pane_ParamLimits

0xf00a,	// (0x00024580) vkb2_top_cell_left_pane

0xd856,	// (0x00022dcc) vkb2_top_entry_pane_g1_ParamLimits

0xd856,	// (0x00022dcc) vkb2_top_entry_pane_g1

0xd864,	// (0x00022dda) vkb2_top_entry_pane_t1_ParamLimits

0xd864,	// (0x00022dda) vkb2_top_entry_pane_t1

0x5f0e,	// (0x0001b484) vkb2_top_entry_pane_t2_ParamLimits

0x5f0e,	// (0x0001b484) vkb2_top_entry_pane_t2

0x5f40,	// (0x0001b4b6) vkb2_top_entry_pane_t3_ParamLimits

0x5f40,	// (0x0001b4b6) vkb2_top_entry_pane_t3

0x0002,

0xfd65,	// (0x000252db) vkb2_top_entry_pane_t_ParamLimits

0xfd65,	// (0x000252db) vkb2_top_entry_pane_t

0x92ce,	// (0x0001e844) vkb2_top_grid_right_pane_g1_ParamLimits

0x92ce,	// (0x0001e844) vkb2_top_grid_right_pane_g1

0xf057,	// (0x000245cd) vkb2_top_grid_right_pane_g2_ParamLimits

0xf057,	// (0x000245cd) vkb2_top_grid_right_pane_g2

0xf06f,	// (0x000245e5) vkb2_top_grid_right_pane_g3_ParamLimits

0xf06f,	// (0x000245e5) vkb2_top_grid_right_pane_g3

0x92e4,	// (0x0001e85a) vkb2_top_grid_right_pane_g4_ParamLimits

0x92e4,	// (0x0001e85a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6c,	// (0x000252e2) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6c,	// (0x000252e2) vkb2_top_grid_right_pane_g

0xf087,	// (0x000245fd) vkb2_top_cell_left_pane_g1

0xf09e,	// (0x00024614) vkb2_cell_keypad_pane_g1_ParamLimits

0xf09e,	// (0x00024614) vkb2_cell_keypad_pane_g1

0x5f64,	// (0x0001b4da) vkb2_cell_keypad_pane_t1_ParamLimits

0x5f64,	// (0x0001b4da) vkb2_cell_keypad_pane_t1

0xf0ac,	// (0x00024622) vkb2_cell_bottom_grid_pane_ParamLimits

0xf0ac,	// (0x00024622) vkb2_cell_bottom_grid_pane

0xf0e5,	// (0x0002465b) vkb2_cell_bottom_grid_pane_g1

0xd504,	// (0x00022a7a) aid_call2_pane_cp02

0xd50c,	// (0x00022a82) aid_call_pane_cp02

0xd514,	// (0x00022a8a) clock_digital_number_pane_cp10

0xd51c,	// (0x00022a92) clock_digital_number_pane_cp11

0xd524,	// (0x00022a9a) clock_digital_number_pane_cp12

0xd52c,	// (0x00022aa2) clock_digital_number_pane_cp13

0xd534,	// (0x00022aaa) clock_digital_separator_pane_cp10

0xcd54,	// (0x000222ca) popup_clock_digital_analogue_window_cp2_g1

0xcd54,	// (0x000222ca) popup_clock_digital_analogue_window_cp2_g2

0xd53c,	// (0x00022ab2) popup_clock_digital_analogue_window_cp2_g3

0xcd54,	// (0x000222ca) popup_clock_digital_analogue_window_cp2_g4

0xd53c,	// (0x00022ab2) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd21,	// (0x00025297) popup_clock_digital_analogue_window_cp2_g

0xd544,	// (0x00022aba) popup_clock_digital_analogue_window_cp2_t1

0xd552,	// (0x00022ac8) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2c,	// (0x000252a2) popup_clock_digital_analogue_window_cp2_t

0x3cee,	// (0x00019264) clock_digital_number_pane_cp10_g1

0x3cee,	// (0x00019264) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0f,	// (0x00025085) clock_digital_number_pane_cp10_g

0x3cee,	// (0x00019264) clock_digital_separator_pane_cp10_g1

0x3cee,	// (0x00019264) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0f,	// (0x00025085) clock_digital_separator_pane_cp10_g

0xd401,	// (0x00022977) uniindi_top_pane_g3

0x599c,	// (0x0001af12) uniindi_top_pane_g4

0xefe8,	// (0x0002455e) vkb2_row_keypad_pane_ParamLimits

0xefe8,	// (0x0002455e) vkb2_row_keypad_pane

0xf105,	// (0x0002467b) vkb2_cell_t_keypad_pane_ParamLimits

0xf105,	// (0x0002467b) vkb2_cell_t_keypad_pane

0xf115,	// (0x0002468b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf115,	// (0x0002468b) vkb2_cell_t_keypad_pane_cp08

0xf128,	// (0x0002469e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf128,	// (0x0002469e) vkb2_cell_t_keypad_pane_cp09

0xf13c,	// (0x000246b2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf13c,	// (0x000246b2) vkb2_cell_t_keypad_pane_cp01

0xf14d,	// (0x000246c3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf14d,	// (0x000246c3) vkb2_cell_t_keypad_pane_cp02

0xf15e,	// (0x000246d4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf15e,	// (0x000246d4) vkb2_cell_t_keypad_pane_cp03

0xf16f,	// (0x000246e5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf16f,	// (0x000246e5) vkb2_cell_t_keypad_pane_cp04

0xf180,	// (0x000246f6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf180,	// (0x000246f6) vkb2_cell_t_keypad_pane_cp05

0xf191,	// (0x00024707) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf191,	// (0x00024707) vkb2_cell_t_keypad_pane_cp06

0xf1a2,	// (0x00024718) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf1a2,	// (0x00024718) vkb2_cell_t_keypad_pane_cp07

0xf1b3,	// (0x00024729) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf1b3,	// (0x00024729) vkb2_cell_t_keypad_pane_cp10

0xed50,	// (0x000242c6) vkb2_cell_t_keypad_pane_g1

0x5f7b,	// (0x0001b4f1) vkb2_cell_t_keypad_pane_t1

0xe300,	// (0x00023876) popup_grid_graphic2_window

0xd89d,	// (0x00022e13) aid_size_cell_graphic2_ParamLimits

0xd89d,	// (0x00022e13) aid_size_cell_graphic2

0xd8db,	// (0x00022e51) bg_popup_window_pane_cp21_ParamLimits

0xd8db,	// (0x00022e51) bg_popup_window_pane_cp21

0xd8e9,	// (0x00022e5f) graphic2_pages_pane_ParamLimits

0xd8e9,	// (0x00022e5f) graphic2_pages_pane

0xd93f,	// (0x00022eb5) grid_graphic2_control_pane_ParamLimits

0xd93f,	// (0x00022eb5) grid_graphic2_control_pane

0xd987,	// (0x00022efd) grid_graphic2_pane_ParamLimits

0xd987,	// (0x00022efd) grid_graphic2_pane

0xda0e,	// (0x00022f84) cell_graphic2_pane

0xe300,	// (0x00023876) main_comp_mode_pane

0x5199,	// (0x0001a70f) list_ai3_gene_pane_ParamLimits

0xc1fd,	// (0x00021773) bg_popup_window_pane_cp19_ParamLimits

0x55d6,	// (0x0001ab4c) bg_touch_area_indi_pane_ParamLimits

0x55d6,	// (0x0001ab4c) bg_touch_area_indi_pane

0x55ec,	// (0x0001ab62) bg_touch_area_indi_pane_cp01_ParamLimits

0x55ec,	// (0x0001ab62) bg_touch_area_indi_pane_cp01

0x5602,	// (0x0001ab78) bg_touch_area_indi_pane_cp02_ParamLimits

0x5602,	// (0x0001ab78) bg_touch_area_indi_pane_cp02

0x5618,	// (0x0001ab8e) bg_touch_area_indi_pane_cp03_ParamLimits

0x5618,	// (0x0001ab8e) bg_touch_area_indi_pane_cp03

0x5632,	// (0x0001aba8) popup_slider_window_g1_ParamLimits

0x564e,	// (0x0001abc4) popup_slider_window_g2_ParamLimits

0x566a,	// (0x0001abe0) popup_slider_window_g3_ParamLimits

0xfcb6,	// (0x0002522c) popup_slider_window_g_ParamLimits

0x56d0,	// (0x0001ac46) popup_slider_window_t1_ParamLimits

0x5744,	// (0x0001acba) small_volume_slider_vertical_pane_ParamLimits

0xda0e,	// (0x00022f84) cell_graphic2_pane_ParamLimits

0xda69,	// (0x00022fdf) bg_button_pane_cp10_ParamLimits

0xda69,	// (0x00022fdf) bg_button_pane_cp10

0xda7c,	// (0x00022ff2) bg_button_pane_cp11_ParamLimits

0xda7c,	// (0x00022ff2) bg_button_pane_cp11

0xda8f,	// (0x00023005) graphic2_pages_pane_g1_ParamLimits

0xda8f,	// (0x00023005) graphic2_pages_pane_g1

0xdaaa,	// (0x00023020) graphic2_pages_pane_g2_ParamLimits

0xdaaa,	// (0x00023020) graphic2_pages_pane_g2

0x0001,

0xfd7a,	// (0x000252f0) graphic2_pages_pane_g_ParamLimits

0xfd7a,	// (0x000252f0) graphic2_pages_pane_g

0xdac2,	// (0x00023038) graphic2_pages_pane_t1_ParamLimits

0xdac2,	// (0x00023038) graphic2_pages_pane_t1

0xdada,	// (0x00023050) cell_graphic2_control_pane_ParamLimits

0xdada,	// (0x00023050) cell_graphic2_control_pane

0xdb0c,	// (0x00023082) cell_graphic2_pane_g1_ParamLimits

0xdb0c,	// (0x00023082) cell_graphic2_pane_g1

0xc3c8,	// (0x0002193e) cell_graphic2_pane_g2_ParamLimits

0xc3c8,	// (0x0002193e) cell_graphic2_pane_g2

0xd36a,	// (0x000228e0) cell_graphic2_pane_g3_ParamLimits

0xd36a,	// (0x000228e0) cell_graphic2_pane_g3

0xc3d5,	// (0x0002194b) cell_graphic2_pane_g4_ParamLimits

0xc3d5,	// (0x0002194b) cell_graphic2_pane_g4

0xdb19,	// (0x0002308f) cell_graphic2_pane_g5_ParamLimits

0xdb19,	// (0x0002308f) cell_graphic2_pane_g5

0x0004,

0xfd7f,	// (0x000252f5) cell_graphic2_pane_g_ParamLimits

0xfd7f,	// (0x000252f5) cell_graphic2_pane_g

0xdb36,	// (0x000230ac) cell_graphic2_pane_t1_ParamLimits

0xdb36,	// (0x000230ac) cell_graphic2_pane_t1

0x1f4b,	// (0x000174c1) grid_highlight_pane_cp11_ParamLimits

0x1f4b,	// (0x000174c1) grid_highlight_pane_cp11

0xc59e,	// (0x00021b14) bg_button_pane_cp05

0xdb80,	// (0x000230f6) cell_graphic2_control_pane_g1

0x3cee,	// (0x00019264) bg_touch_area_indi_pane_g1

0x6275,	// (0x0001b7eb) aid_cmod_rocker_key_size

0x627f,	// (0x0001b7f5) aid_cmode_itu_key_size

0x6289,	// (0x0001b7ff) main_cmode_video_pane

0x6293,	// (0x0001b809) main_comp_mode_itu_pane

0x629f,	// (0x0001b815) main_comp_mode_rocker_pane

0x62ab,	// (0x0001b821) cell_cmode_rocker_pane_ParamLimits

0x62ab,	// (0x0001b821) cell_cmode_rocker_pane

0x62bd,	// (0x0001b833) cell_cmode_itu_pane_ParamLimits

0x62bd,	// (0x0001b833) cell_cmode_itu_pane

0xc894,	// (0x00021e0a) bg_button_pane_cp06_ParamLimits

0xc894,	// (0x00021e0a) bg_button_pane_cp06

0x3f5e,	// (0x000194d4) cell_cmode_rocker_pane_g1_ParamLimits

0x3f5e,	// (0x000194d4) cell_cmode_rocker_pane_g1

0x57e8,	// (0x0001ad5e) cell_cmode_rocker_pane_g2_ParamLimits

0x57e8,	// (0x0001ad5e) cell_cmode_rocker_pane_g2

0x0001,

0xfd8f,	// (0x00025305) cell_cmode_rocker_pane_g_ParamLimits

0xfd8f,	// (0x00025305) cell_cmode_rocker_pane_g

0xc3ea,	// (0x00021960) bg_button_pane_cp07

0x62d2,	// (0x0001b848) cell_cmode_itu_pane_g1

0x62db,	// (0x0001b851) cell_cmode_itu_pane_t1

0x62e9,	// (0x0001b85f) cell_cmode_itu_pane_t2

0x0001,

0xfd94,	// (0x0002530a) cell_cmode_itu_pane_t

0x5a0e,	// (0x0001af84) aid_touch_ctrl_left

0x5a16,	// (0x0001af8c) aid_touch_ctrl_right

0xc3ea,	// (0x00021960) compa_mode_pane

0xdba6,	// (0x0002311c) aid_cmod_rocker_key_size_cp

0xdbb0,	// (0x00023126) aid_cmode_itu_key_size_cp

0x630b,	// (0x0001b881) compa_mode_pane_g1

0x6313,	// (0x0001b889) compa_mode_pane_g2

0x631b,	// (0x0001b891) compa_mode_pane_g3

0x0002,

0xfd99,	// (0x0002530f) compa_mode_pane_g

0xdbba,	// (0x00023130) main_comp_mode_itu_pane_cp

0xdbc2,	// (0x00023138) main_comp_mode_rocker_pane_cp

0xdbca,	// (0x00023140) cell_cmode_itu_pane_cp_ParamLimits

0xdbca,	// (0x00023140) cell_cmode_itu_pane_cp

0xdbdf,	// (0x00023155) cell_cmode_rocker_pane_cp_ParamLimits

0xdbdf,	// (0x00023155) cell_cmode_rocker_pane_cp

0xc894,	// (0x00021e0a) bg_button_pane_cp06_cp_ParamLimits

0xc894,	// (0x00021e0a) bg_button_pane_cp06_cp

0x3f5e,	// (0x000194d4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x3f5e,	// (0x000194d4) cell_cmode_rocker_pane_g1_cp

0x3cee,	// (0x00019264) cell_cmode_rocker_pane_g2_cp

0xc3ea,	// (0x00021960) bg_button_pane_cp07_cp

0xdbf1,	// (0x00023167) cell_cmode_itu_pane_g1_cp

0xdbfa,	// (0x00023170) cell_cmode_itu_pane_t1_cp

0xdbfa,	// (0x00023170) cell_cmode_itu_pane_t2_cp

0xb359,	// (0x000208cf) settings_code_pane_cp2

0xc45a,	// (0x000219d0) bg_popup_window_pane_cp3_ParamLimits

0xc6b7,	// (0x00021c2d) heading_pane_cp3_ParamLimits

0xc6c6,	// (0x00021c3c) listscroll_popup_graphic_pane_ParamLimits

0xeb70,	// (0x000240e6) fep_hwr_aid_pane_ParamLimits

0xeedb,	// (0x00024451) aid_touch_sctrl_top_ParamLimits

0xeef6,	// (0x0002446c) sctrl_sk_top_pane_g1_ParamLimits

0xed50,	// (0x000242c6) sctrl_sk_top_pane_g2_ParamLimits

0xfccf,	// (0x00025245) sctrl_sk_top_pane_g_ParamLimits

0xef03,	// (0x00024479) sctrl_sk_top_pane_t1_ParamLimits

0xeedb,	// (0x00024451) aid_touch_sctrl_bottom_ParamLimits

0xef03,	// (0x00024479) sctrl_sk_bottom_pane_t1_ParamLimits

0xd3cd,	// (0x00022943) aid_area_touch_clock

0x910d,	// (0x0001e683) aid_vkb2_area_top_pane_cell_ParamLimits

0x910d,	// (0x0001e683) aid_vkb2_area_top_pane_cell

0x91bc,	// (0x0001e732) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x91bc,	// (0x0001e732) aid_vkb2_area_bottom_pane_cell

0x5ec6,	// (0x0001b43c) popup_char_count_window

0x6371,	// (0x0001b8e7) popup_char_count_window_g1

0x637a,	// (0x0001b8f0) popup_char_count_window_g2

0x6383,	// (0x0001b8f9) popup_char_count_window_g3

0x0002,

0xfda0,	// (0x00025316) popup_char_count_window_g

0x638c,	// (0x0001b902) popup_char_count_window_t1

0xef43,	// (0x000244b9) popup_fep_char_preview_window_ParamLimits

0xef43,	// (0x000244b9) popup_fep_char_preview_window

0x912d,	// (0x0001e6a3) vkb2_top_candi_pane_ParamLimits

0x912d,	// (0x0001e6a3) vkb2_top_candi_pane

0xdc08,	// (0x0002317e) cell_vkb2_top_candi_pane_ParamLimits

0xdc08,	// (0x0002317e) cell_vkb2_top_candi_pane

0xf1c8,	// (0x0002473e) bg_popup_fep_char_preview_window_ParamLimits

0xf1c8,	// (0x0002473e) bg_popup_fep_char_preview_window

0xf1d6,	// (0x0002474c) popup_fep_char_preview_window_t1_ParamLimits

0xf1d6,	// (0x0002474c) popup_fep_char_preview_window_t1

0x63e4,	// (0x0001b95a) bg_popup_fep_char_preview_window_g1

0x63ec,	// (0x0001b962) bg_popup_fep_char_preview_window_g2

0x63f4,	// (0x0001b96a) bg_popup_fep_char_preview_window_g3

0x63fc,	// (0x0001b972) bg_popup_fep_char_preview_window_g4

0x6404,	// (0x0001b97a) bg_popup_fep_char_preview_window_g5

0x640c,	// (0x0001b982) bg_popup_fep_char_preview_window_g6

0x6414,	// (0x0001b98a) bg_popup_fep_char_preview_window_g7

0x641c,	// (0x0001b992) bg_popup_fep_char_preview_window_g8

0x6424,	// (0x0001b99a) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda7,	// (0x0002531d) bg_popup_fep_char_preview_window_g

0xed50,	// (0x000242c6) cell_vkb2_top_candi_pane_g1_ParamLimits

0xed50,	// (0x000242c6) cell_vkb2_top_candi_pane_g1

0xed5e,	// (0x000242d4) cell_vkb2_top_candi_pane_g2_ParamLimits

0xed5e,	// (0x000242d4) cell_vkb2_top_candi_pane_g2

0x5fc5,	// (0x0001b53b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5fc5,	// (0x0001b53b) cell_vkb2_top_candi_pane_g3

0xf210,	// (0x00024786) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf210,	// (0x00024786) cell_vkb2_top_candi_pane_g4

0x45f7,	// (0x00019b6d) cell_vkb2_top_candi_pane_g5_ParamLimits

0x45f7,	// (0x00019b6d) cell_vkb2_top_candi_pane_g5

0xef27,	// (0x0002449d) cell_vkb2_top_candi_pane_g6_ParamLimits

0xef27,	// (0x0002449d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbc,	// (0x00025332) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbc,	// (0x00025332) cell_vkb2_top_candi_pane_g

0xf231,	// (0x000247a7) cell_vkb2_top_candi_pane_t1

0x8db6,	// (0x0001e32c) aid_size_touch_slider_mark_ParamLimits

0x8db6,	// (0x0001e32c) aid_size_touch_slider_mark

0xd925,	// (0x00022e9b) grid_graphic2_catg_pane_ParamLimits

0xd925,	// (0x00022e9b) grid_graphic2_catg_pane

0xd9e1,	// (0x00022f57) popup_grid_graphic2_window_t1_ParamLimits

0xd9e1,	// (0x00022f57) popup_grid_graphic2_window_t1

0xd9f7,	// (0x00022f6d) popup_grid_graphic2_window_t2_ParamLimits

0xd9f7,	// (0x00022f6d) popup_grid_graphic2_window_t2

0x0001,

0xfd75,	// (0x000252eb) popup_grid_graphic2_window_t_ParamLimits

0xfd75,	// (0x000252eb) popup_grid_graphic2_window_t

0xc59e,	// (0x00021b14) bg_button_pane_cp05_ParamLimits

0xdb80,	// (0x000230f6) cell_graphic2_control_pane_g1_ParamLimits

0xdc68,	// (0x000231de) cell_graphic2_catg_pane_ParamLimits

0xdc68,	// (0x000231de) cell_graphic2_catg_pane

0xc3ea,	// (0x00021960) bg_button_pane_cp12

0xdc7a,	// (0x000231f0) cell_graphic2_catg_pane_g1

0x5922,	// (0x0001ae98) cell_tb_ext_pane_t1_ParamLimits

0xf02a,	// (0x000245a0) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf02a,	// (0x000245a0) vkb2_top_cell_right_narrow_pane

0xf042,	// (0x000245b8) vkb2_top_cell_right_wide_pane_ParamLimits

0xf042,	// (0x000245b8) vkb2_top_cell_right_wide_pane

0xe78e,	// (0x00023d04) bg_vkb2_func_pane_ParamLimits

0xe78e,	// (0x00023d04) bg_vkb2_func_pane

0xf087,	// (0x000245fd) vkb2_top_cell_left_pane_g1_ParamLimits

0xe78e,	// (0x00023d04) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe78e,	// (0x00023d04) bg_vkb2_fuc_pane_cp03

0xf0e5,	// (0x0002465b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x117c,	// (0x000166f2) bg_vkb2_func_pane_g1

0x1184,	// (0x000166fa) bg_vkb2_func_pane_g2

0x1194,	// (0x0001670a) bg_vkb2_func_pane_g3

0x118c,	// (0x00016702) bg_vkb2_func_pane_g4

0x119c,	// (0x00016712) bg_vkb2_func_pane_g5

0x11a4,	// (0x0001671a) bg_vkb2_func_pane_g6

0x11ac,	// (0x00016722) bg_vkb2_func_pane_g7

0x11b4,	// (0x0001672a) bg_vkb2_func_pane_g8

0x1174,	// (0x000166ea) bg_vkb2_func_pane_g9

0x0008,

0xfdc9,	// (0x0002533f) bg_vkb2_func_pane_g

0xe78e,	// (0x00023d04) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe78e,	// (0x00023d04) bg_vkb2_fuc_pane_cp01

0xf087,	// (0x000245fd) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf087,	// (0x000245fd) vkb2_top_cell_right_wide_pane_g1

0xe78e,	// (0x00023d04) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe78e,	// (0x00023d04) bg_vkb2_fuc_pane_cp02

0xf250,	// (0x000247c6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf250,	// (0x000247c6) vkb2_top_cell_right_narrow_pane_g1

0xc13f,	// (0x000216b5) aid_touch_area_decrease_ParamLimits

0xc13f,	// (0x000216b5) aid_touch_area_decrease

0xc179,	// (0x000216ef) aid_touch_area_increase_ParamLimits

0xc179,	// (0x000216ef) aid_touch_area_increase

0xc1a1,	// (0x00021717) aid_touch_area_mute_ParamLimits

0xc1a1,	// (0x00021717) aid_touch_area_mute

0xc1c9,	// (0x0002173f) aid_touch_area_slider_ParamLimits

0xc1c9,	// (0x0002173f) aid_touch_area_slider

0xc209,	// (0x0002177f) popup_slider_window_g4_ParamLimits

0xc209,	// (0x0002177f) popup_slider_window_g4

0xc223,	// (0x00021799) popup_slider_window_g5_ParamLimits

0xc223,	// (0x00021799) popup_slider_window_g5

0xc249,	// (0x000217bf) popup_slider_window_g6_ParamLimits

0xc249,	// (0x000217bf) popup_slider_window_g6

0x56fe,	// (0x0001ac74) popup_slider_window_t2_ParamLimits

0x56fe,	// (0x0001ac74) popup_slider_window_t2

0x0001,

0xfcc3,	// (0x00025239) popup_slider_window_t_ParamLimits

0xfcc3,	// (0x00025239) popup_slider_window_t

0xc25f,	// (0x000217d5) slider_pane_ParamLimits

0xc25f,	// (0x000217d5) slider_pane

0x6447,	// (0x0001b9bd) slider_pane_g1_ParamLimits

0x6447,	// (0x0001b9bd) slider_pane_g1

0x645b,	// (0x0001b9d1) slider_pane_g2_ParamLimits

0x645b,	// (0x0001b9d1) slider_pane_g2

0x6471,	// (0x0001b9e7) slider_pane_g3_ParamLimits

0x6471,	// (0x0001b9e7) slider_pane_g3

0x0003,

0xfddc,	// (0x00025352) slider_pane_g_ParamLimits

0xfddc,	// (0x00025352) slider_pane_g

0x8bd5,	// (0x0001e14b) popup_tb_float_extension_window_ParamLimits

0x8bd5,	// (0x0001e14b) popup_tb_float_extension_window

0x649d,	// (0x0001ba13) aid_size_cell_tb_float_ext

0xc3ea,	// (0x00021960) bg_popup_sub_window_cp28

0xdc83,	// (0x000231f9) grid_tb_float_ext_pane

0xdc8d,	// (0x00023203) cell_tb_float_ext_pane_ParamLimits

0xdc8d,	// (0x00023203) cell_tb_float_ext_pane

0xdca7,	// (0x0002321d) cell_tb_float_ext_pane_g1

0xdcb0,	// (0x00023226) grid_highlight_pane_cp12

0x8ea9,	// (0x0001e41f) cell_last_hwr_side_pane_ParamLimits

0x8ea9,	// (0x0001e41f) cell_last_hwr_side_pane

0x3cee,	// (0x00019264) cell_last_hwr_side_pane_g1

0x64df,	// (0x0001ba55) cell_last_hwr_side_pane_g2

0x0001,

0xfde5,	// (0x0002535b) cell_last_hwr_side_pane_g

0x9299,	// (0x0001e80f) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9299,	// (0x0001e80f) vkb2_area_bottom_space_btn_pane

0xed50,	// (0x000242c6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5f7b,	// (0x0001b4f1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf231,	// (0x000247a7) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf270,	// (0x000247e6) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf270,	// (0x000247e6) vkb2_area_bottom_space_btn_pane_g1

0xf2aa,	// (0x00024820) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf2aa,	// (0x00024820) vkb2_area_bottom_space_btn_pane_g2

0xf2e0,	// (0x00024856) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf2e0,	// (0x00024856) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdea,	// (0x00025360) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdea,	// (0x00025360) vkb2_area_bottom_space_btn_pane_g

0xec25,	// (0x0002419b) cel_fep_hwr_func_pane_ParamLimits

0xec25,	// (0x0002419b) cel_fep_hwr_func_pane

0x8e7e,	// (0x0001e3f4) cell_hwr_side_button_pane_ParamLimits

0x8e7e,	// (0x0001e3f4) cell_hwr_side_button_pane

0xd3cd,	// (0x00022943) aid_area_touch_clock_ParamLimits

0xc59e,	// (0x00021b14) bg_uniindi_top_pane_ParamLimits

0xd3df,	// (0x00022955) uniindi_top_pane_g1_ParamLimits

0xd3f5,	// (0x0002296b) uniindi_top_pane_g2_ParamLimits

0xd401,	// (0x00022977) uniindi_top_pane_g3_ParamLimits

0x599c,	// (0x0001af12) uniindi_top_pane_g4_ParamLimits

0xfcfb,	// (0x00025271) uniindi_top_pane_g_ParamLimits

0xd412,	// (0x00022988) uniindi_top_pane_t1_ParamLimits

0xc59e,	// (0x00021b14) bg_vkb2_func_pane_cp01_ParamLimits

0xc59e,	// (0x00021b14) bg_vkb2_func_pane_cp01

0x64e8,	// (0x0001ba5e) cel_fep_hwr_func_pane_g1_ParamLimits

0x64e8,	// (0x0001ba5e) cel_fep_hwr_func_pane_g1

0xc59e,	// (0x00021b14) bg_vkb2_func_pane_cp02_ParamLimits

0xc59e,	// (0x00021b14) bg_vkb2_func_pane_cp02

0x64e8,	// (0x0001ba5e) cell_hwr_side_button_pane_g1_ParamLimits

0x64e8,	// (0x0001ba5e) cell_hwr_side_button_pane_g1

0x0fca,	// (0x00016540) status_pane_g4_ParamLimits

0x0fca,	// (0x00016540) status_pane_g4

0x0fe4,	// (0x0001655a) status_pane_t1

0x3a29,	// (0x00018f9f) form2_midp_gauge_slider_cont_pane

0x3a31,	// (0x00018fa7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb74d,	// (0x00020cc3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb75f,	// (0x00020cd5) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac2,	// (0x00025038) form2_midp_gauge_slider_pane_t_ParamLimits

0x3a67,	// (0x00018fdd) form2_midp_slider_pane_ParamLimits

0xef35,	// (0x000244ab) aid_size_cell_func_vkb2_ParamLimits

0xef35,	// (0x000244ab) aid_size_cell_func_vkb2

0x6489,	// (0x0001b9ff) slider_pane_g4_ParamLimits

0x6489,	// (0x0001b9ff) slider_pane_g4

0x9302,	// (0x0001e878) form2_midp_gauge_slider_pane_t2_cp01

0x9310,	// (0x0001e886) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9310,	// (0x0001e886) form2_midp_gauge_slider_pane_t3_cp01

0xf32a,	// (0x000248a0) form2_midp_slider_pane_cp01

0xc3ea,	// (0x00021960) navi_smil_pane

0x6521,	// (0x0001ba97) navi_smil_pane_g1

0x6529,	// (0x0001ba9f) navi_smil_pane_t1

0x64f6,	// (0x0001ba6c) form2_midp_slider_pane_g1

0x64ff,	// (0x0001ba75) form2_midp_slider_pane_g2

0x6507,	// (0x0001ba7d) form2_midp_slider_pane_g3

0x64f6,	// (0x0001ba6c) form2_midp_slider_pane_g4

0xdcb9,	// (0x0002322f) form2_midp_slider_pane_g5

0x0004,

0xfdf3,	// (0x00025369) form2_midp_slider_pane_g

0xf31a,	// (0x00024890) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf31a,	// (0x00024890) vkb2_area_bottom_space_btn_pane_g4

0xa887,	// (0x0001fdfd) lc0_navi_pane_ParamLimits

0xa887,	// (0x0001fdfd) lc0_navi_pane

0xa8f1,	// (0x0001fe67) lc0_stat_indi_pane_ParamLimits

0xa8f1,	// (0x0001fe67) lc0_stat_indi_pane

0xa906,	// (0x0001fe7c) ls0_title_pane_ParamLimits

0xa906,	// (0x0001fe7c) ls0_title_pane

0xc894,	// (0x00021e0a) bg_popup_sub_pane_cp14_ParamLimits

0xd3b4,	// (0x0002292a) list_uniindi_pane_ParamLimits

0xd3c0,	// (0x00022936) uniindi_top_pane_ParamLimits

0x59e6,	// (0x0001af5c) list_single_uniindi_pane_g1_ParamLimits

0x59f9,	// (0x0001af6f) list_single_uniindi_pane_t1_ParamLimits

0x932d,	// (0x0001e8a3) lc0_stat_clock_pane_ParamLimits

0x932d,	// (0x0001e8a3) lc0_stat_clock_pane

0xdcc4,	// (0x0002323a) lc0_stat_indi_pane_g1_ParamLimits

0xdcc4,	// (0x0002323a) lc0_stat_indi_pane_g1

0xdcd1,	// (0x00023247) lc0_stat_indi_pane_g2_ParamLimits

0xdcd1,	// (0x00023247) lc0_stat_indi_pane_g2

0x0001,

0xfdfe,	// (0x00025374) lc0_stat_indi_pane_g_ParamLimits

0xfdfe,	// (0x00025374) lc0_stat_indi_pane_g

0x933d,	// (0x0001e8b3) lc0_uni_indicator_pane_ParamLimits

0x933d,	// (0x0001e8b3) lc0_uni_indicator_pane

0xdcde,	// (0x00023254) ls0_title_pane_g1_ParamLimits

0xdcde,	// (0x00023254) ls0_title_pane_g1

0xdcf2,	// (0x00023268) ls0_title_pane_t1_ParamLimits

0xdcf2,	// (0x00023268) ls0_title_pane_t1

0x934d,	// (0x0001e8c3) lc0_uni_indicator_pane_g1_ParamLimits

0x934d,	// (0x0001e8c3) lc0_uni_indicator_pane_g1

0x659b,	// (0x0001bb11) lc0_stat_clock_pane_t1

0xe300,	// (0x00023876) main_ai5_pane

0x65a9,	// (0x0001bb1f) ai5_sk_pane_ParamLimits

0x65a9,	// (0x0001bb1f) ai5_sk_pane

0xdd20,	// (0x00023296) cell_ai5_widget_pane_ParamLimits

0xdd20,	// (0x00023296) cell_ai5_widget_pane

0x667f,	// (0x0001bbf5) aid_size_cell_widget_grid

0x668d,	// (0x0001bc03) bg_ai5_widget_pane_ParamLimits

0x668d,	// (0x0001bc03) bg_ai5_widget_pane

0x6709,	// (0x0001bc7f) cell_ai5_widget_pane_g2

0x671d,	// (0x0001bc93) cell_ai5_widget_pane_g3

0x6737,	// (0x0001bcad) cell_ai5_widget_pane_g4

0x6747,	// (0x0001bcbd) cell_ai5_widget_pane_g5

0x6757,	// (0x0001bccd) cell_ai5_widget_pane_g6

0x6763,	// (0x0001bcd9) cell_ai5_widget_pane_g7

0x67cf,	// (0x0001bd45) cell_ai5_widget_pane_t1_ParamLimits

0x67cf,	// (0x0001bd45) cell_ai5_widget_pane_t1

0x67ec,	// (0x0001bd62) cell_ai5_widget_pane_t2_ParamLimits

0x67ec,	// (0x0001bd62) cell_ai5_widget_pane_t2

0x6804,	// (0x0001bd7a) cell_ai5_widget_pane_t3_ParamLimits

0x6804,	// (0x0001bd7a) cell_ai5_widget_pane_t3

0x681c,	// (0x0001bd92) cell_ai5_widget_pane_t4_ParamLimits

0x681c,	// (0x0001bd92) cell_ai5_widget_pane_t4

0xdd8c,	// (0x00023302) cell_ai5_widget_pane_t5_ParamLimits

0xdd8c,	// (0x00023302) cell_ai5_widget_pane_t5

0x6861,	// (0x0001bdd7) cell_ai5_widget_pane_t6_ParamLimits

0x6861,	// (0x0001bdd7) cell_ai5_widget_pane_t6

0x6873,	// (0x0001bde9) cell_ai5_widget_pane_t7_ParamLimits

0x6873,	// (0x0001bde9) cell_ai5_widget_pane_t7

0x6892,	// (0x0001be08) cell_ai5_widget_pane_t8_ParamLimits

0x6892,	// (0x0001be08) cell_ai5_widget_pane_t8

0x000b,

0xfe1e,	// (0x00025394) cell_ai5_widget_pane_t_ParamLimits

0xfe1e,	// (0x00025394) cell_ai5_widget_pane_t

0x6916,	// (0x0001be8c) grid_ai5_widget_pane

0xc894,	// (0x00021e0a) highlight_cell_ai5_widget_pane_ParamLimits

0xc894,	// (0x00021e0a) highlight_cell_ai5_widget_pane

0xddac,	// (0x00023322) ai5_sk_left_pane

0xddb6,	// (0x0002332c) ai5_sk_middle_pane

0xddc0,	// (0x00023336) ai5_sk_right_pane

0x6942,	// (0x0001beb8) bg_ai5_widget_pane_g1_ParamLimits

0x6942,	// (0x0001beb8) bg_ai5_widget_pane_g1

0x694e,	// (0x0001bec4) bg_ai5_widget_pane_g2_ParamLimits

0x694e,	// (0x0001bec4) bg_ai5_widget_pane_g2

0x695a,	// (0x0001bed0) bg_ai5_widget_pane_g3_ParamLimits

0x695a,	// (0x0001bed0) bg_ai5_widget_pane_g3

0x6966,	// (0x0001bedc) bg_ai5_widget_pane_g4_ParamLimits

0x6966,	// (0x0001bedc) bg_ai5_widget_pane_g4

0x6972,	// (0x0001bee8) bg_ai5_widget_pane_g5_ParamLimits

0x6972,	// (0x0001bee8) bg_ai5_widget_pane_g5

0x697e,	// (0x0001bef4) bg_ai5_widget_pane_g6_ParamLimits

0x697e,	// (0x0001bef4) bg_ai5_widget_pane_g6

0x698a,	// (0x0001bf00) bg_ai5_widget_pane_g7_ParamLimits

0x698a,	// (0x0001bf00) bg_ai5_widget_pane_g7

0x6996,	// (0x0001bf0c) bg_ai5_widget_pane_g8_ParamLimits

0x6996,	// (0x0001bf0c) bg_ai5_widget_pane_g8

0x69a2,	// (0x0001bf18) bg_ai5_widget_pane_g9_ParamLimits

0x69a2,	// (0x0001bf18) bg_ai5_widget_pane_g9

0x0008,

0xfe37,	// (0x000253ad) bg_ai5_widget_pane_g_ParamLimits

0xfe37,	// (0x000253ad) bg_ai5_widget_pane_g

0x69d4,	// (0x0001bf4a) cell_shortcut_ai5_widget_pane_ParamLimits

0x69d4,	// (0x0001bf4a) cell_shortcut_ai5_widget_pane

0xd1a6,	// (0x0002271c) bg_cell_shortcut_ai5_widget_pane

0x69e5,	// (0x0001bf5b) cell_grid_ai5_widget_pane_g1

0xd1a6,	// (0x0002271c) highlight_cell_shortcut_ai5_widget_pane

0x117c,	// (0x000166f2) ai5_sk_left_pane_g1

0x69ee,	// (0x0001bf64) ai5_sk_left_pane_g2

0x69f6,	// (0x0001bf6c) ai5_sk_left_pane_g3

0x69fe,	// (0x0001bf74) ai5_sk_left_pane_g4

0x0003,

0xfe4a,	// (0x000253c0) ai5_sk_left_pane_g

0x6a06,	// (0x0001bf7c) ai5_sk_left_pane_t1

0x1184,	// (0x000166fa) ai5_sk_right_pane_g1

0x6a14,	// (0x0001bf8a) ai5_sk_right_pane_g2

0x6a1c,	// (0x0001bf92) ai5_sk_right_pane_g3

0x6a24,	// (0x0001bf9a) ai5_sk_right_pane_g4

0x0003,

0xfe53,	// (0x000253c9) ai5_sk_right_pane_g

0x6a2c,	// (0x0001bfa2) ai5_sk_right_pane_t1

0x1184,	// (0x000166fa) ai5_sk_middle_pane_g1

0x117c,	// (0x000166f2) ai5_sk_middle_pane_g2

0x119c,	// (0x00016712) ai5_sk_middle_pane_g3

0x6a1c,	// (0x0001bf92) ai5_sk_middle_pane_g4

0x69f6,	// (0x0001bf6c) ai5_sk_middle_pane_g5

0x6a3a,	// (0x0001bfb0) ai5_sk_middle_pane_g6

0xddca,	// (0x00023340) ai5_sk_middle_pane_g7

0x0006,

0xfe5c,	// (0x000253d2) ai5_sk_middle_pane_g

0xa773,	// (0x0001fce9) aid_touch_area_size_lc0_ParamLimits

0xa773,	// (0x0001fce9) aid_touch_area_size_lc0

0xed7f,	// (0x000242f5) cell_hwr_candidate_pane_t1_ParamLimits

0x0c9b,	// (0x00016211) aid_touch_navi_pane

0xa9ff,	// (0x0001ff75) status_dt_navi_pane_ParamLimits

0xa9ff,	// (0x0001ff75) status_dt_navi_pane

0xaa17,	// (0x0001ff8d) status_dt_sta_pane_ParamLimits

0xaa17,	// (0x0001ff8d) status_dt_sta_pane

0xddd2,	// (0x00023348) dt_sta_controll_pane

0xdddf,	// (0x00023355) dt_sta_indi_pane

0xddec,	// (0x00023362) dt_sta_title_pane

0xc59e,	// (0x00021b14) bg_dt_sta_indi_pane_ParamLimits

0xc59e,	// (0x00021b14) bg_dt_sta_indi_pane

0xddfe,	// (0x00023374) dt_sta_battery_pane

0xde06,	// (0x0002337c) dt_sta_indi_pane_g1

0x6a8c,	// (0x0001c002) dt_sta_indi_pane_g2

0x6a95,	// (0x0001c00b) dt_sta_indi_pane_g3

0x0002,

0xfe6b,	// (0x000253e1) dt_sta_indi_pane_g

0x6a9e,	// (0x0001c014) dt_sta_signal_pane

0xc894,	// (0x00021e0a) bg_dt_sta_title_pane_ParamLimits

0xc894,	// (0x00021e0a) bg_dt_sta_title_pane

0x20ab,	// (0x00017621) dt_sta_title_pane_g1

0xde0f,	// (0x00023385) dt_sta_title_pane_t1_ParamLimits

0xde0f,	// (0x00023385) dt_sta_title_pane_t1

0xc3ea,	// (0x00021960) bg_dt_sta_control_pane

0xde24,	// (0x0002339a) dt_sta_controll_pane_g1

0xde2d,	// (0x000233a3) bg_dt_sta_title_pane_g1

0xde36,	// (0x000233ac) bg_dt_sta_title_pane_g2

0xde3f,	// (0x000233b5) bg_dt_sta_title_pane_g3

0x0002,

0xfe72,	// (0x000253e8) bg_dt_sta_title_pane_g

0x3cee,	// (0x00019264) bg_dt_sta_indi_pane_g1

0x6ae0,	// (0x0001c056) dt_sta_signal_pane_g1

0x6ae8,	// (0x0001c05e) dt_sta_signal_pane_g2

0x0001,

0xfe79,	// (0x000253ef) dt_sta_signal_pane_g

0x6af0,	// (0x0001c066) dt_sta_battery_pane_g1

0x6af9,	// (0x0001c06f) dt_sta_battery_pane_t1

0x3cee,	// (0x00019264) bg_dt_sta_control_pane_g1

0xcdd7,	// (0x0002234d) fep_china_uni_eep_pane

0xcddf,	// (0x00022355) fep_china_uni_entry_pane_ParamLimits

0xcdef,	// (0x00022365) popup_fep_china_uni_window_g1_ParamLimits

0xcdff,	// (0x00022375) popup_fep_china_uni_window_g2_ParamLimits

0xcdff,	// (0x00022375) popup_fep_china_uni_window_g2

0x0001,

0xf6e4,	// (0x00024c5a) popup_fep_china_uni_window_g_ParamLimits

0xf6e4,	// (0x00024c5a) popup_fep_china_uni_window_g

0x6b08,	// (0x0001c07e) fep_china_uni_eep_pane_g1

0x6b10,	// (0x0001c086) fep_china_uni_eep_pane_t1

0x6518,	// (0x0001ba8e) aid_touch_area_size_smil_player

0x0df1,	// (0x00016367) lc0_clock_pane

0x0fd8,	// (0x0001654e) status_pane_g5_ParamLimits

0x0fd8,	// (0x0001654e) status_pane_g5

0x8731,	// (0x0001dca7) popup_keymap_window

0x0f96,	// (0x0001650c) status_icon_pane

0x671d,	// (0x0001bc93) cell_ai5_widget_pane_g3_ParamLimits

0x6737,	// (0x0001bcad) cell_ai5_widget_pane_g4_ParamLimits

0x6747,	// (0x0001bcbd) cell_ai5_widget_pane_g5_ParamLimits

0x676f,	// (0x0001bce5) cell_ai5_widget_pane_g8_ParamLimits

0x676f,	// (0x0001bce5) cell_ai5_widget_pane_g8

0x6783,	// (0x0001bcf9) cell_ai5_widget_pane_g9_ParamLimits

0x6783,	// (0x0001bcf9) cell_ai5_widget_pane_g9

0x6797,	// (0x0001bd0d) cell_ai5_widget_pane_g10_ParamLimits

0x6797,	// (0x0001bd0d) cell_ai5_widget_pane_g10

0x6b1f,	// (0x0001c095) status_icon_pane_g1

0xc3ea,	// (0x00021960) bg_popup_sub_pane_cp13

0x6b27,	// (0x0001c09d) popup_keymap_window_t1

0xa701,	// (0x0001fc77) control_pane_g6_ParamLimits

0xa701,	// (0x0001fc77) control_pane_g6

0xa70e,	// (0x0001fc84) control_pane_g7_ParamLimits

0xa70e,	// (0x0001fc84) control_pane_g7

0xa71b,	// (0x0001fc91) control_pane_g8_ParamLimits

0xa71b,	// (0x0001fc91) control_pane_g8

0xddd2,	// (0x00023348) dt_sta_controll_pane_ParamLimits

0xdddf,	// (0x00023355) dt_sta_indi_pane_ParamLimits

0xddec,	// (0x00023362) dt_sta_title_pane_ParamLimits

0xc775,	// (0x00021ceb) aid_size_touch_scroll_bar_cale

0x8195,	// (0x0001d70b) popup_discreet_window_ParamLimits

0x8195,	// (0x0001d70b) popup_discreet_window

0x81e7,	// (0x0001d75d) popup_sk_window

0x18ef,	// (0x00016e65) bg_popup_sub_pane_cp28_ParamLimits

0x18ef,	// (0x00016e65) bg_popup_sub_pane_cp28

0x6b35,	// (0x0001c0ab) popup_discreet_window_g1_ParamLimits

0x6b35,	// (0x0001c0ab) popup_discreet_window_g1

0xde48,	// (0x000233be) popup_discreet_window_t1_ParamLimits

0xde48,	// (0x000233be) popup_discreet_window_t1

0x6b73,	// (0x0001c0e9) popup_discreet_window_t2_ParamLimits

0x6b73,	// (0x0001c0e9) popup_discreet_window_t2

0x0002,

0xfe7e,	// (0x000253f4) popup_discreet_window_t_ParamLimits

0xfe7e,	// (0x000253f4) popup_discreet_window_t

0xf333,	// (0x000248a9) popup_sk_window_g1

0xf33d,	// (0x000248b3) popup_sk_window_g2

0x0001,

0xfe85,	// (0x000253fb) popup_sk_window_g

0x9378,	// (0x0001e8ee) popup_sk_window_t1

0x9386,	// (0x0001e8fc) popup_sk_window_t1_copy1

0x6709,	// (0x0001bc7f) cell_ai5_widget_pane_g2_ParamLimits

0x68a4,	// (0x0001be1a) cell_ai5_widget_pane_t9_ParamLimits

0x68a4,	// (0x0001be1a) cell_ai5_widget_pane_t9

0xc3ea,	// (0x00021960) main_fep_fshwr2_pane

0x9394,	// (0x0001e90a) aid_fshwr2_btn_pane

0x93a8,	// (0x0001e91e) aid_fshwr2_syb_pane

0x93bc,	// (0x0001e932) aid_fshwr2_txt_pane

0x93cc,	// (0x0001e942) fshwr2_func_candi_pane

0x93ec,	// (0x0001e962) fshwr2_hwr_syb_pane

0x940e,	// (0x0001e984) fshwr2_icf_pane

0xe300,	// (0x00023876) fshwr2_icf_bg_pane

0xf353,	// (0x000248c9) fshwr2_icf_pane_t1_ParamLimits

0xf353,	// (0x000248c9) fshwr2_icf_pane_t1

0xcd54,	// (0x000222ca) fshwr2_func_candi_pane_g1

0xde66,	// (0x000233dc) fshwr2_func_candi_row_pane_ParamLimits

0xde66,	// (0x000233dc) fshwr2_func_candi_row_pane

0x943e,	// (0x0001e9b4) cell_fshwr2_syb_pane_ParamLimits

0x943e,	// (0x0001e9b4) cell_fshwr2_syb_pane

0xf36c,	// (0x000248e2) fshwr2_hwr_syb_pane_g1_ParamLimits

0xf36c,	// (0x000248e2) fshwr2_hwr_syb_pane_g1

0xe300,	// (0x00023876) bg_popup_call_pane_cp01

0x9464,	// (0x0001e9da) fshwr2_func_candi_cell_pane_ParamLimits

0x9464,	// (0x0001e9da) fshwr2_func_candi_cell_pane

0x16d8,	// (0x00016c4e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x16d8,	// (0x00016c4e) fshwr2_func_candi_cell_bg_pane

0x94af,	// (0x0001ea25) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x94af,	// (0x0001ea25) fshwr2_func_candi_cell_pane_g1

0x94e6,	// (0x0001ea5c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x94e6,	// (0x0001ea5c) fshwr2_func_candi_cell_pane_t1

0xe300,	// (0x00023876) bg_button_pane_cp08

0xca44,	// (0x00021fba) cell_fshwr2_syb_bg_pane

0x9501,	// (0x0001ea77) cell_fshwr2_syb_bg_pane_g1

0x9514,	// (0x0001ea8a) cell_fshwr2_syb_bg_pane_t1

0xc894,	// (0x00021e0a) main_tmo_pane

0xb0f1,	// (0x00020667) uni_indicator_pane_g1_ParamLimits

0xb107,	// (0x0002067d) uni_indicator_pane_g2_ParamLimits

0xb11d,	// (0x00020693) uni_indicator_pane_g3_ParamLimits

0x2418,	// (0x0001798e) uni_indicator_pane_g4_ParamLimits

0x2418,	// (0x0001798e) uni_indicator_pane_g4

0x242c,	// (0x000179a2) uni_indicator_pane_g5_ParamLimits

0x242c,	// (0x000179a2) uni_indicator_pane_g5

0x242c,	// (0x000179a2) uni_indicator_pane_g6_ParamLimits

0x242c,	// (0x000179a2) uni_indicator_pane_g6

0xf8dc,	// (0x00024e52) uni_indicator_pane_g_ParamLimits

0xc121,	// (0x00021697) popup_tmo_note_window_ParamLimits

0xc121,	// (0x00021697) popup_tmo_note_window

0xf345,	// (0x000248bb) fshwr2_bg_pane

0x94d7,	// (0x0001ea4d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x94d7,	// (0x0001ea4d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8a,	// (0x00025400) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8a,	// (0x00025400) fshwr2_func_candi_cell_pane_g

0xed38,	// (0x000242ae) bg_popup_window_pane_cp01

0xf37a,	// (0x000248f0) bg_popup_window_pane_g1_cp01

0x6bec,	// (0x0001c162) bg_popup_window_pane_cp22_ParamLimits

0x6bec,	// (0x0001c162) bg_popup_window_pane_cp22

0xde89,	// (0x000233ff) listscroll_tmo_link_pane_ParamLimits

0xde89,	// (0x000233ff) listscroll_tmo_link_pane

0x6c3a,	// (0x0001c1b0) popup_tmo_note_window_g1_ParamLimits

0x6c3a,	// (0x0001c1b0) popup_tmo_note_window_g1

0xdec9,	// (0x0002343f) tmo_note_info_pane_ParamLimits

0xdec9,	// (0x0002343f) tmo_note_info_pane

0xdee3,	// (0x00023459) list_tmo_note_info_pane_g1_ParamLimits

0xdee3,	// (0x00023459) list_tmo_note_info_pane_g1

0x6c78,	// (0x0001c1ee) list_tmo_note_info_pane_g2_ParamLimits

0x6c78,	// (0x0001c1ee) list_tmo_note_info_pane_g2

0x0001,

0xfe8f,	// (0x00025405) list_tmo_note_info_pane_g_ParamLimits

0xfe8f,	// (0x00025405) list_tmo_note_info_pane_g

0x6c94,	// (0x0001c20a) list_tmo_note_info_text_pane_ParamLimits

0x6c94,	// (0x0001c20a) list_tmo_note_info_text_pane

0x6d15,	// (0x0001c28b) list_tmo_link_pane

0x6d22,	// (0x0001c298) scroll_pane_cp20

0x6d2f,	// (0x0001c2a5) list_single_tmo_link_pane_ParamLimits

0x6d2f,	// (0x0001c2a5) list_single_tmo_link_pane

0x6d3f,	// (0x0001c2b5) list_single_tmo_link_pane_t1

0x6d4d,	// (0x0001c2c3) list_tmo_note_info_text_pane_t1_ParamLimits

0x6d4d,	// (0x0001c2c3) list_tmo_note_info_text_pane_t1

0xa136,	// (0x0001f6ac) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa136,	// (0x0001f6ac) aid_size_touch_scroll_bar_cp01

0xa036,	// (0x0001f5ac) aid_size_touch_slider_marker

0x81d7,	// (0x0001d74d) popup_settings_window_ParamLimits

0x81d7,	// (0x0001d74d) popup_settings_window

0xd35a,	// (0x000228d0) popup_candi_list_indi_window

0x0c9b,	// (0x00016211) aid_touch_navi_pane_ParamLimits

0xeeaf,	// (0x00024425) rs_clock_indi_pane

0xeeb8,	// (0x0002442e) sctrl_sk_bottom_pane_ParamLimits

0xeec9,	// (0x0002443f) sctrl_sk_top_pane_ParamLimits

0x8fcd,	// (0x0001e543) popup_fep_tooltip_window

0x667f,	// (0x0001bbf5) aid_size_cell_widget_grid_ParamLimits

0x66f4,	// (0x0001bc6a) cell_ai5_widget_pane_g1_ParamLimits

0x66f4,	// (0x0001bc6a) cell_ai5_widget_pane_g1

0x6757,	// (0x0001bccd) cell_ai5_widget_pane_g6_ParamLimits

0x6763,	// (0x0001bcd9) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe03,	// (0x00025379) cell_ai5_widget_pane_g_ParamLimits

0xfe03,	// (0x00025379) cell_ai5_widget_pane_g

0x68d3,	// (0x0001be49) cell_ai5_widget_pane_t10_ParamLimits

0x68d3,	// (0x0001be49) cell_ai5_widget_pane_t10

0x6916,	// (0x0001be8c) grid_ai5_widget_pane_ParamLimits

0x69ae,	// (0x0001bf24) cell_contacts_ai5_widget_pane_ParamLimits

0x69ae,	// (0x0001bf24) cell_contacts_ai5_widget_pane

0x6b88,	// (0x0001c0fe) popup_discreet_window_t3_ParamLimits

0x6b88,	// (0x0001c0fe) popup_discreet_window_t3

0x942a,	// (0x0001e9a0) popup_fshwr2_char_preview_window_ParamLimits

0x942a,	// (0x0001e9a0) popup_fshwr2_char_preview_window

0xdefa,	// (0x00023470) tmo_note_info_pane_t1

0xdf0f,	// (0x00023485) tmo_note_info_pane_t2

0xdf26,	// (0x0002349c) tmo_note_info_pane_t3

0x6cf1,	// (0x0001c267) tmo_note_info_pane_t4

0x6d03,	// (0x0001c279) tmo_note_info_pane_t5

0x0004,

0xfe94,	// (0x0002540a) tmo_note_info_pane_t

0x6d15,	// (0x0001c28b) list_tmo_link_pane_ParamLimits

0x6d22,	// (0x0001c298) scroll_pane_cp20_ParamLimits

0xe300,	// (0x00023876) bg_popup_fep_char_preview_window_cp01

0xdf3b,	// (0x000234b1) popup_fshwr2_char_preview_window_t1

0x6d74,	// (0x0001c2ea) popup_candi_list_indi_window_g1

0x6d7d,	// (0x0001c2f3) bg_cell_contacts_ai5_widget_pane

0x6d89,	// (0x0001c2ff) cell_contacts_ai5_widget_pane_g1

0x454c,	// (0x00019ac2) cell_contacts_ai5_widget_pane_g2

0x6d9e,	// (0x0001c314) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9f,	// (0x00025415) cell_contacts_ai5_widget_pane_g

0x6daa,	// (0x0001c320) cell_contacts_ai5_widget_pane_t1

0xc894,	// (0x00021e0a) highlight_cell_shortcut_ai5_widget_pane_cp01

0x6e21,	// (0x0001c397) settings_container_pane

0xd1a6,	// (0x0002271c) listscroll_set_pane_copy1

0x3081,	// (0x000185f7) scroll_pane_cp121_copy1

0x1694,	// (0x00016c0a) set_content_pane_copy1

0xdf49,	// (0x000234bf) aid_height_set_list_copy1_ParamLimits

0xdf49,	// (0x000234bf) aid_height_set_list_copy1

0x2636,	// (0x00017bac) aid_size_parent_copy1_ParamLimits

0x2636,	// (0x00017bac) aid_size_parent_copy1

0xdf55,	// (0x000234cb) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdf55,	// (0x000234cb) button_value_adjust_pane_cp6_copy1

0xca44,	// (0x00021fba) list_highlight_pane_cp2_copy1_ParamLimits

0xca44,	// (0x00021fba) list_highlight_pane_cp2_copy1

0xdf69,	// (0x000234df) list_set_pane_copy1_ParamLimits

0xdf69,	// (0x000234df) list_set_pane_copy1

0x6dbc,	// (0x0001c332) main_pane_set_t1_copy1_ParamLimits

0x6dbc,	// (0x0001c332) main_pane_set_t1_copy1

0x6df6,	// (0x0001c36c) main_pane_set_t2_copy1_ParamLimits

0x6df6,	// (0x0001c36c) main_pane_set_t2_copy1

0xe016,	// (0x0002358c) main_pane_set_t3_copy1

0xe024,	// (0x0002359a) main_pane_set_t4_copy1

0x6e15,	// (0x0001c38b) set_content_pane_g1_copy1_ParamLimits

0x6e15,	// (0x0001c38b) set_content_pane_g1_copy1

0xe032,	// (0x000235a8) setting_code_pane_copy1

0x6f1e,	// (0x0001c494) setting_slider_graphic_pane_copy1

0x6f1e,	// (0x0001c494) setting_slider_pane_copy1

0x6f26,	// (0x0001c49c) setting_text_pane_copy1

0x6f26,	// (0x0001c49c) setting_volume_pane_copy1

0xe032,	// (0x000235a8) settings_code_pane_cp2_copy1

0xe03a,	// (0x000235b0) settings_code_pane_cp_copy1_ParamLimits

0xe03a,	// (0x000235b0) settings_code_pane_cp_copy1

0x952a,	// (0x0001eaa0) volume_set_pane_copy1

0xe04e,	// (0x000235c4) volume_set_pane_g10_copy1

0xe056,	// (0x000235cc) volume_set_pane_g1_copy1

0xe05e,	// (0x000235d4) volume_set_pane_g2_copy1

0xe066,	// (0x000235dc) volume_set_pane_g3_copy1

0xe06e,	// (0x000235e4) volume_set_pane_g4_copy1

0xe076,	// (0x000235ec) volume_set_pane_g5_copy1

0xe07e,	// (0x000235f4) volume_set_pane_g6_copy1

0xe086,	// (0x000235fc) volume_set_pane_g7_copy1

0xe08e,	// (0x00023604) volume_set_pane_g8_copy1

0xe096,	// (0x0002360c) volume_set_pane_g9_copy1

0xc45a,	// (0x000219d0) bg_set_opt_pane_cp_copy1_ParamLimits

0xc45a,	// (0x000219d0) bg_set_opt_pane_cp_copy1

0x9532,	// (0x0001eaa8) setting_slider_pane_t1_copy1_ParamLimits

0x9532,	// (0x0001eaa8) setting_slider_pane_t1_copy1

0x9551,	// (0x0001eac7) setting_slider_pane_t2_copy1_ParamLimits

0x9551,	// (0x0001eac7) setting_slider_pane_t2_copy1

0x956b,	// (0x0001eae1) setting_slider_pane_t3_copy1_ParamLimits

0x956b,	// (0x0001eae1) setting_slider_pane_t3_copy1

0x9583,	// (0x0001eaf9) slider_set_pane_copy1_ParamLimits

0x9583,	// (0x0001eaf9) slider_set_pane_copy1

0xc95a,	// (0x00021ed0) set_opt_bg_pane_g1_copy2

0xc962,	// (0x00021ed8) set_opt_bg_pane_g2_copy2

0x6f92,	// (0x0001c508) set_opt_bg_pane_g3_copy2

0xc972,	// (0x00021ee8) set_opt_bg_pane_g4_copy2

0xc97a,	// (0x00021ef0) set_opt_bg_pane_g5_copy2

0xc982,	// (0x00021ef8) set_opt_bg_pane_g6_copy2

0xe09e,	// (0x00023614) set_opt_bg_pane_g7_copy2

0x6fa4,	// (0x0001c51a) set_opt_bg_pane_g8_copy2

0x6fae,	// (0x0001c524) set_opt_bg_pane_g9_copy2

0x9599,	// (0x0001eb0f) aid_size_touch_slider_mark_copy1_ParamLimits

0x9599,	// (0x0001eb0f) aid_size_touch_slider_mark_copy1

0xe0a6,	// (0x0002361c) slider_set_pane_g1_copy1

0xf383,	// (0x000248f9) slider_set_pane_g2_copy1

0x8dca,	// (0x0001e340) slider_set_pane_g3_copy1_ParamLimits

0x8dca,	// (0x0001e340) slider_set_pane_g3_copy1

0x8dde,	// (0x0001e354) slider_set_pane_g4_copy1_ParamLimits

0x8dde,	// (0x0001e354) slider_set_pane_g4_copy1

0x8df6,	// (0x0001e36c) slider_set_pane_g5_copy1_ParamLimits

0x8df6,	// (0x0001e36c) slider_set_pane_g5_copy1

0x8dca,	// (0x0001e340) slider_set_pane_g6_copy1_ParamLimits

0x8dca,	// (0x0001e340) slider_set_pane_g6_copy1

0x95ad,	// (0x0001eb23) slider_set_pane_g7_copy1_ParamLimits

0x95ad,	// (0x0001eb23) slider_set_pane_g7_copy1

0xc3fe,	// (0x00021974) bg_set_opt_pane_cp2_copy1

0xe0af,	// (0x00023625) setting_slider_graphic_pane_g1_copy1

0xe0b8,	// (0x0002362e) setting_slider_graphic_pane_t1_copy1

0xe0c8,	// (0x0002363e) setting_slider_graphic_pane_t2_copy1

0xe0d8,	// (0x0002364e) slider_set_pane_cp_copy1

0x6ffa,	// (0x0001c570) input_focus_pane_cp1_copy1

0x7003,	// (0x0001c579) list_set_text_pane_copy1

0x700b,	// (0x0001c581) setting_text_pane_g1_copy1

0x7014,	// (0x0001c58a) set_text_pane_t1_copy1

0x6ffa,	// (0x0001c570) input_focus_pane_cp2_copy1

0x700b,	// (0x0001c581) setting_code_pane_g1_copy1

0x702f,	// (0x0001c5a5) setting_code_pane_t1_copy1

0x703d,	// (0x0001c5b3) list_set_graphic_pane_copy1

0xc3fe,	// (0x00021974) bg_set_opt_pane_cp4_copy1

0xcf2f,	// (0x000224a5) list_set_graphic_pane_g1_copy1_ParamLimits

0xcf2f,	// (0x000224a5) list_set_graphic_pane_g1_copy1

0x7051,	// (0x0001c5c7) list_set_graphic_pane_g2_copy1

0xcf47,	// (0x000224bd) list_set_graphic_pane_t1_copy1_ParamLimits

0xcf47,	// (0x000224bd) list_set_graphic_pane_t1_copy1

0x3cee,	// (0x00019264) rs_clock_indi_pane_g1

0x7059,	// (0x0001c5cf) rs_clock_indi_pane_t1

0x7067,	// (0x0001c5dd) rs_indi_pane

0x706f,	// (0x0001c5e5) rs_indi_pane_g1

0x7078,	// (0x0001c5ee) rs_indi_pane_g2

0x6d74,	// (0x0001c2ea) rs_indi_pane_g3

0x0002,

0xfea6,	// (0x0002541c) rs_indi_pane_g

0xd1a6,	// (0x0002271c) bg_popup_preview_window_pane_cp03

0x7081,	// (0x0001c5f7) popup_fep_tooltip_window_t1

0xbc20,	// (0x00021196) popup_note2_window_g2_ParamLimits

0xbc20,	// (0x00021196) popup_note2_window_g2

0x0001,

0xfc3a,	// (0x000251b0) popup_note2_window_g_ParamLimits

0xfc3a,	// (0x000251b0) popup_note2_window_g

0x515f,	// (0x0001a6d5) bg_popup_sub_pane_cp11_ParamLimits

0x516c,	// (0x0001a6e2) cell_ai3_links_pane_g1_ParamLimits

0x5183,	// (0x0001a6f9) cell_ai3_links_pane_t1

0x7014,	// (0x0001c58a) set_text_pane_t1_copy1_ParamLimits

0xd0e8,	// (0x0002265e) cell_graphic_popup_pane_cp2_ParamLimits

0xd0e8,	// (0x0002265e) cell_graphic_popup_pane_cp2

0xe0e8,	// (0x0002365e) cell_graphic_popup_pane_g1_cp2

0xc6f8,	// (0x00021c6e) cell_graphic_popup_pane_g2_cp2

0x7097,	// (0x0001c60d) cell_graphic_popup_pane_g3_cp2

0xe0f0,	// (0x00023666) cell_graphic_popup_pane_t2_cp2

0xc709,	// (0x00021c7f) grid_highlight_pane_cp3_cp2

0xcbd1,	// (0x00022147) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc894,	// (0x00021e0a) main_tmo_pane_ParamLimits

0xc115,	// (0x0002168b) popup_tmo_big_image_note_window

0x66e3,	// (0x0001bc59) cell_ai5_widget_list_pane

0x66eb,	// (0x0001bc61) cell_ai5_widget_lrg_icon_pane

0xdefa,	// (0x00023470) tmo_note_info_pane_t1_ParamLimits

0xdf0f,	// (0x00023485) tmo_note_info_pane_t2_ParamLimits

0xdf26,	// (0x0002349c) tmo_note_info_pane_t3_ParamLimits

0x6cf1,	// (0x0001c267) tmo_note_info_pane_t4_ParamLimits

0x6d03,	// (0x0001c279) tmo_note_info_pane_t5_ParamLimits

0xfe94,	// (0x0002540a) tmo_note_info_pane_t_ParamLimits

0x6e21,	// (0x0001c397) settings_container_pane_ParamLimits

0xe0e0,	// (0x00023656) indicator_popup_pane_cp5

0xe0e0,	// (0x00023656) indicator_popup_pane_cp6

0x703d,	// (0x0001c5b3) list_set_graphic_pane_copy1_ParamLimits

0xc3ea,	// (0x00021960) bg_popup_window_pane_cp23

0x70ad,	// (0x0001c623) popup_tmo_big_image_note_window_g1

0x70b6,	// (0x0001c62c) popup_tmo_big_image_note_window_t1

0x70c6,	// (0x0001c63c) popup_tmo_big_image_note_window_t2

0x70d6,	// (0x0001c64c) popup_tmo_big_image_note_window_t3

0x0002,

0xfead,	// (0x00025423) popup_tmo_big_image_note_window_t

0x3cee,	// (0x00019264) cell_ai5_widget_lrg_icon_pane_g1

0x70e6,	// (0x0001c65c) cell_ai5_widget_lrg_icon_pane_t1

0x70f4,	// (0x0001c66a) cell_ai5_widget_list_row_pane_ParamLimits

0x70f4,	// (0x0001c66a) cell_ai5_widget_list_row_pane

0x710b,	// (0x0001c681) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x710b,	// (0x0001c681) cell_ai5_widget_list_row_pane_g1

0xe0fe,	// (0x00023674) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe0fe,	// (0x00023674) cell_ai5_widget_list_row_pane_t1

0x7143,	// (0x0001c6b9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7143,	// (0x0001c6b9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb4,	// (0x0002542a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb4,	// (0x0002542a) cell_ai5_widget_list_row_pane_t

0xe300,	// (0x00023876) main_fep_vtchi_ss_pane

0x7193,	// (0x0001c709) popup_fep_char_pre_window

0x719b,	// (0x0001c711) popup_fep_ituss_window

0xe159,	// (0x000236cf) popup_fep_vkbss_window

0xca44,	// (0x00021fba) grid_vkbss_keypad_pane_ParamLimits

0xca44,	// (0x00021fba) grid_vkbss_keypad_pane

0x7207,	// (0x0001c77d) ituss_keypad_pane

0xf395,	// (0x0002490b) aid_vkbss_key_offset_ParamLimits

0xf395,	// (0x0002490b) aid_vkbss_key_offset

0x95c3,	// (0x0001eb39) cell_vkbss_key_pane_ParamLimits

0x95c3,	// (0x0001eb39) cell_vkbss_key_pane

0x7217,	// (0x0001c78d) bg_cell_vkbss_key_g1_ParamLimits

0x7217,	// (0x0001c78d) bg_cell_vkbss_key_g1

0xe166,	// (0x000236dc) cell_vkbss_key_3p_pane_ParamLimits

0xe166,	// (0x000236dc) cell_vkbss_key_3p_pane

0xe19c,	// (0x00023712) cell_vkbss_key_g1_ParamLimits

0xe19c,	// (0x00023712) cell_vkbss_key_g1

0xe1d2,	// (0x00023748) cell_vkbss_key_t1_ParamLimits

0xe1d2,	// (0x00023748) cell_vkbss_key_t1

0xf3a1,	// (0x00024917) cell_ituss_key_pane_ParamLimits

0xf3a1,	// (0x00024917) cell_ituss_key_pane

0x72eb,	// (0x0001c861) bg_cell_ituss_key_g1_ParamLimits

0x72eb,	// (0x0001c861) bg_cell_ituss_key_g1

0x72f7,	// (0x0001c86d) cell_ituss_key_pane_g1_ParamLimits

0x72f7,	// (0x0001c86d) cell_ituss_key_pane_g1

0xf3b2,	// (0x00024928) cell_ituss_key_pane_g2_ParamLimits

0xf3b2,	// (0x00024928) cell_ituss_key_pane_g2

0x0005,

0xfebb,	// (0x00025431) cell_ituss_key_pane_g_ParamLimits

0xfebb,	// (0x00025431) cell_ituss_key_pane_g

0xf436,	// (0x000249ac) cell_ituss_key_t1_ParamLimits

0xf436,	// (0x000249ac) cell_ituss_key_t1

0xf470,	// (0x000249e6) cell_ituss_key_t2_ParamLimits

0xf470,	// (0x000249e6) cell_ituss_key_t2

0xf4a2,	// (0x00024a18) cell_ituss_key_t3_ParamLimits

0xf4a2,	// (0x00024a18) cell_ituss_key_t3

0xf4d3,	// (0x00024a49) cell_ituss_key_t4_ParamLimits

0xf4d3,	// (0x00024a49) cell_ituss_key_t4

0x0004,

0xfec8,	// (0x0002543e) cell_ituss_key_t_ParamLimits

0xfec8,	// (0x0002543e) cell_ituss_key_t

0xe22e,	// (0x000237a4) cell_vkbss_key_3p_pane_g1

0xe236,	// (0x000237ac) cell_vkbss_key_3p_pane_g2

0xe23e,	// (0x000237b4) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed3,	// (0x00025449) cell_vkbss_key_3p_pane_g

0xd1a6,	// (0x0002271c) bg_popup_fep_char_preview_window_cp02

0x7335,	// (0x0001c8ab) popup_fep_char_pre_window_t1

0xdd82,	// (0x000232f8) main_ai5_sk_pane

0x6d7d,	// (0x0001c2f3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6d89,	// (0x0001c2ff) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x454c,	// (0x00019ac2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6d9e,	// (0x0001c314) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9f,	// (0x00025415) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6daa,	// (0x0001c320) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc894,	// (0x00021e0a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe246,	// (0x000237bc) main_ai5_sk_pane_g1

0xad4a,	// (0x000202c0) popup_query_code_window_g1

0xe14a,	// (0x000236c0) popup_fep_vkb_icf_pane

0x71de,	// (0x0001c754) popup_fep_vtchi_icf_pane

0x734c,	// (0x0001c8c2) bg_icf_pane

0x734c,	// (0x0001c8c2) list_vkb_icf_pane

0x7358,	// (0x0001c8ce) bg_icf_pane_cp01

0x736b,	// (0x0001c8e1) vtchi_icf_list_pane

0xe29b,	// (0x00023811) list_vkb_icf_pane_t1_ParamLimits

0xe29b,	// (0x00023811) list_vkb_icf_pane_t1

0x73f0,	// (0x0001c966) vtchi_icf_list_pane_t1_ParamLimits

0x73f0,	// (0x0001c966) vtchi_icf_list_pane_t1

0x719b,	// (0x0001c711) popup_fep_ituss_window_ParamLimits

0x71de,	// (0x0001c754) popup_fep_vtchi_icf_pane_ParamLimits

0x7207,	// (0x0001c77d) ituss_keypad_pane_ParamLimits

0xf38b,	// (0x00024901) ituss_sks_pane

0x734c,	// (0x0001c8c2) bg_icf_pane_ParamLimits

0xe12f,	// (0x000236a5) icf_edit_indi_pane_ParamLimits

0xe12f,	// (0x000236a5) icf_edit_indi_pane

0x734c,	// (0x0001c8c2) list_vkb_icf_pane_ParamLimits

0x7358,	// (0x0001c8ce) bg_icf_pane_cp01_ParamLimits

0x7186,	// (0x0001c6fc) icf_edit_indi_pane_cp01_ParamLimits

0x7186,	// (0x0001c6fc) icf_edit_indi_pane_cp01

0x736b,	// (0x0001c8e1) vtchi_query_pane

0x64e8,	// (0x0001ba5e) icf_edit_indi_pane_g1_ParamLimits

0x64e8,	// (0x0001ba5e) icf_edit_indi_pane_g1

0xe2b3,	// (0x00023829) icf_edit_indi_pane_g2_ParamLimits

0xe2b3,	// (0x00023829) icf_edit_indi_pane_g2

0x0001,

0xfefe,	// (0x00025474) icf_edit_indi_pane_g_ParamLimits

0xfefe,	// (0x00025474) icf_edit_indi_pane_g

0xe2c7,	// (0x0002383d) icf_edit_indi_pane_t1

0x7414,	// (0x0001c98a) bg_input_focus_pane_cp042

0xc76c,	// (0x00021ce2) vtchi_button_pane

0x741d,	// (0x0001c993) vtchi_query_pane_t1

0x742b,	// (0x0001c9a1) vtchi_query_pane_t2

0x7439,	// (0x0001c9af) vtchi_query_pane_t3

0x0002,

0xfeed,	// (0x00025463) vtchi_query_pane_t

0xe300,	// (0x00023876) bg_button_pane_cp13

0x7447,	// (0x0001c9bd) vtchi_button_pane_g1

0xf516,	// (0x00024a8c) ituss_sks_pane_g1

0xf521,	// (0x00024a97) ituss_sks_pane_g2

0x0001,

0xfef4,	// (0x0002546a) ituss_sks_pane_g

0x744f,	// (0x0001c9c5) ituss_sks_pane_t1

0x745d,	// (0x0001c9d3) ituss_sks_pane_t2

0x0001,

0xfef9,	// (0x0002546f) ituss_sks_pane_t

0x3715,	// (0x00018c8b) indicator_nsta_pane_cp_g1

0x371e,	// (0x00018c94) indicator_nsta_pane_cp_g2

0x3726,	// (0x00018c9c) indicator_nsta_pane_cp_g3

0x372e,	// (0x00018ca4) indicator_nsta_pane_cp_g4

0x371e,	// (0x00018c94) indicator_nsta_pane_cp_g5

0x3726,	// (0x00018c9c) indicator_nsta_pane_cp_g6

0x0005,

0xfa78,	// (0x00024fee) indicator_nsta_pane_cp_g

0xdb61,	// (0x000230d7) cell_graphic2_pane_t2_ParamLimits

0xdb61,	// (0x000230d7) cell_graphic2_pane_t2

0x0001,

0xfd8a,	// (0x00025300) cell_graphic2_pane_t_ParamLimits

0xfd8a,	// (0x00025300) cell_graphic2_pane_t

0xdb98,	// (0x0002310e) cell_graphic2_control_pane_t1

0xa3f1,	// (0x0001f967) signal_pane_g3_ParamLimits

0xa3f1,	// (0x0001f967) signal_pane_g3

0xa405,	// (0x0001f97b) signal_pane_g4_ParamLimits

0xa405,	// (0x0001f97b) signal_pane_g4

0x7155,	// (0x0001c6cb) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7155,	// (0x0001c6cb) cell_ai5_widget_list_row_pane_t3

0x730b,	// (0x0001c881) cell_ituss_key_pane_t1_ParamLimits

0x730b,	// (0x0001c881) cell_ituss_key_pane_t1

0x1322,	// (0x00016898) form_field_data_wide_pane_vc_t2_ParamLimits

0x1322,	// (0x00016898) form_field_data_wide_pane_vc_t2

0x1336,	// (0x000168ac) form_field_data_wide_pane_vc_t3_ParamLimits

0x1336,	// (0x000168ac) form_field_data_wide_pane_vc_t3

0x0002,

0xf7c4,	// (0x00024d3a) form_field_data_wide_pane_vc_t_ParamLimits

0xf7c4,	// (0x00024d3a) form_field_data_wide_pane_vc_t

0x33bf,	// (0x00018935) form_field_slider_wide_pane_vc_t3_ParamLimits

0x33bf,	// (0x00018935) form_field_slider_wide_pane_vc_t3

0x349d,	// (0x00018a13) form_field_popup_wide_pane_vc_t2_ParamLimits

0x349d,	// (0x00018a13) form_field_popup_wide_pane_vc_t2

0x34b4,	// (0x00018a2a) form_field_popup_wide_pane_vc_t3_ParamLimits

0x34b4,	// (0x00018a2a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa67,	// (0x00024fdd) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa67,	// (0x00024fdd) form_field_popup_wide_pane_vc_t

0x9394,	// (0x0001e90a) aid_fshwr2_btn_pane_ParamLimits

0x93a8,	// (0x0001e91e) aid_fshwr2_syb_pane_ParamLimits

0x93bc,	// (0x0001e932) aid_fshwr2_txt_pane_ParamLimits

0xf345,	// (0x000248bb) fshwr2_bg_pane_ParamLimits

0x93cc,	// (0x0001e942) fshwr2_func_candi_pane_ParamLimits

0x93ec,	// (0x0001e962) fshwr2_hwr_syb_pane_ParamLimits

0x940e,	// (0x0001e984) fshwr2_icf_pane_ParamLimits

0x3330,	// (0x000188a6) list_double_graphic_pane_vc_g4_ParamLimits

0x3330,	// (0x000188a6) list_double_graphic_pane_vc_g4

0xf3d2,	// (0x00024948) cell_ituss_key_pane_g3_ParamLimits

0xf3d2,	// (0x00024948) cell_ituss_key_pane_g3

0xf504,	// (0x00024a7a) cell_ituss_key_t5_ParamLimits

0xf504,	// (0x00024a7a) cell_ituss_key_t5

0xe159,	// (0x000236cf) popup_fep_vkbss_window_ParamLimits

0x6676,	// (0x0001bbec) aid_cell_ai5_quarter

0xe2c7,	// (0x0002383d) icf_edit_indi_pane_t1_ParamLimits

0x98f7,	// (0x0001ee6d) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x98f7,	// (0x0001ee6d) aid_tch_indicator_popup_pane_cp2

0x990a,	// (0x0001ee80) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x990a,	// (0x0001ee80) aid_tch_query_popup_data_pane_cp2

0x16d8,	// (0x00016c4e) aid_tch_query_popup_pane_ParamLimits

0x16d8,	// (0x00016c4e) aid_tch_query_popup_pane

0x16d8,	// (0x00016c4e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x16d8,	// (0x00016c4e) aid_tch_query_popup_data_pane_cp1

0xca44,	// (0x00021fba) cell_fshwr2_syb_bg_pane_ParamLimits

0x9501,	// (0x0001ea77) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9514,	// (0x0001ea8a) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe14a,	// (0x000236c0) popup_fep_vkb_icf_pane_ParamLimits

0x92fa,	// (0x0001e870) bg_popup_fep_char_preview_window_g10

0x67ab,	// (0x0001bd21) cell_ai5_widget_pane_g11_ParamLimits

0x67ab,	// (0x0001bd21) cell_ai5_widget_pane_g11

0x67b7,	// (0x0001bd2d) cell_ai5_widget_pane_g12_ParamLimits

0x67b7,	// (0x0001bd2d) cell_ai5_widget_pane_g12

0x67c3,	// (0x0001bd39) cell_ai5_widget_pane_g13_ParamLimits

0x67c3,	// (0x0001bd39) cell_ai5_widget_pane_g13

0x68f2,	// (0x0001be68) cell_ai5_widget_pane_t11_ParamLimits

0x68f2,	// (0x0001be68) cell_ai5_widget_pane_t11

0x6904,	// (0x0001be7a) cell_ai5_widget_pane_t12_ParamLimits

0x6904,	// (0x0001be7a) cell_ai5_widget_pane_t12

0xf3de,	// (0x00024954) cell_ituss_key_pane_g4_ParamLimits

0xf3de,	// (0x00024954) cell_ituss_key_pane_g4

0xf3fa,	// (0x00024970) cell_ituss_key_pane_g5_ParamLimits

0xf3fa,	// (0x00024970) cell_ituss_key_pane_g5

0xf416,	// (0x0002498c) cell_ituss_key_pane_g6_ParamLimits

0xf416,	// (0x0002498c) cell_ituss_key_pane_g6

0x1174,	// (0x000166ea) bg_icf_pane_g1

0xe24f,	// (0x000237c5) bg_icf_pane_g2

0xe259,	// (0x000237cf) bg_icf_pane_g3

0xe261,	// (0x000237d7) bg_icf_pane_g4

0xe26b,	// (0x000237e1) bg_icf_pane_g5

0xe275,	// (0x000237eb) bg_icf_pane_g6

0xe27f,	// (0x000237f5) bg_icf_pane_g7

0xe287,	// (0x000237fd) bg_icf_pane_g8

0xe291,	// (0x00023807) bg_icf_pane_g9

0x0008,

0xfeda,	// (0x00025450) bg_icf_pane_g

0x71f4,	// (0x0001c76a) popup_hyb_candi_window_ParamLimits

0x71f4,	// (0x0001c76a) popup_hyb_candi_window

0x1294,	// (0x0001680a) bg_popup_sub_pane_cp01_ParamLimits

0x1294,	// (0x0001680a) bg_popup_sub_pane_cp01

0x7498,	// (0x0001ca0e) entry_hyb_candi_pane_ParamLimits

0x7498,	// (0x0001ca0e) entry_hyb_candi_pane

0x74a7,	// (0x0001ca1d) grid_hyb_candi_pane_ParamLimits

0x74a7,	// (0x0001ca1d) grid_hyb_candi_pane

0x74bc,	// (0x0001ca32) grid_hyb_phrase_pane_ParamLimits

0x74bc,	// (0x0001ca32) grid_hyb_phrase_pane

0x74cb,	// (0x0001ca41) cell_hyb_candi_pane_ParamLimits

0x74cb,	// (0x0001ca41) cell_hyb_candi_pane

0x74ee,	// (0x0001ca64) cell_hyb_candi_scroll_pane

0xcd54,	// (0x000222ca) cell_hyb_candi_pane_g1

0x74f7,	// (0x0001ca6d) cell_hyb_candi_pane_t1

0x7505,	// (0x0001ca7b) cell_hyb_phrase_pane

0xcd54,	// (0x000222ca) cell_hyb_phrase_pane_g1

0x750e,	// (0x0001ca84) cell_hyb_phrase_pane_t1

0x751c,	// (0x0001ca92) entry_hyb_candi_pane_t1

0xd1a6,	// (0x0002271c) input_focus_pane_cp06

0x752a,	// (0x0001caa0) cell_hyb_candi_scroll_pane_g1

0x7532,	// (0x0001caa8) cell_hyb_candi_scroll_pane_g1_aid

0x753a,	// (0x0001cab0) cell_hyb_candi_scroll_pane_g2

0x7542,	// (0x0001cab8) cell_hyb_candi_scroll_pane_g2_aid

0x754a,	// (0x0001cac0) cell_hyb_candi_scroll_pane_g3

0x7552,	// (0x0001cac8) cell_hyb_candi_scroll_pane_g4
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
