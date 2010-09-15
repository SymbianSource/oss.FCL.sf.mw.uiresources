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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00041199 };

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
0xbcf2,	// (0x0004ce8b) Screen

0xbcfe,	// (0x0004ce97) application_window_ParamLimits

0xbcfe,	// (0x0004ce97) application_window

0xe26d,	// (0x0004f406) screen_g1

0xbd36,	// (0x0004cecf) area_bottom_pane_ParamLimits

0xbd36,	// (0x0004cecf) area_bottom_pane

0x0ca1,	// (0x00041e3a) area_top_pane_ParamLimits

0x0ca1,	// (0x00041e3a) area_top_pane

0x0d35,	// (0x00041ece) main_pane_ParamLimits

0x0d35,	// (0x00041ece) main_pane

0x333d,	// (0x000444d6) misc_graphics

0xd67a,	// (0x0004e813) battery_pane_ParamLimits

0xd67a,	// (0x0004e813) battery_pane

0x5a22,	// (0x00046bbb) bg_status_flat_pane_g8

0x5a2a,	// (0x00046bc3) bg_status_flat_pane_g9

0x4e08,	// (0x00045fa1) context_pane_ParamLimits

0x4e08,	// (0x00045fa1) context_pane

0xd7e5,	// (0x0004e97e) navi_pane_ParamLimits

0xd7e5,	// (0x0004e97e) navi_pane

0xd863,	// (0x0004e9fc) signal_pane_ParamLimits

0xd863,	// (0x0004e9fc) signal_pane

0x0008,

0xf854,	// (0x000509ed) bg_status_flat_pane_g

0xd8f3,	// (0x0004ea8c) status_pane_g1_ParamLimits

0xd8f3,	// (0x0004ea8c) status_pane_g1

0xd909,	// (0x0004eaa2) status_pane_g2_ParamLimits

0xd909,	// (0x0004eaa2) status_pane_g2

0x502f,	// (0x000461c8) status_pane_g3_ParamLimits

0x502f,	// (0x000461c8) status_pane_g3

0x0004,

0xf780,	// (0x00050919) status_pane_g_ParamLimits

0xf780,	// (0x00050919) status_pane_g

0xd915,	// (0x0004eaae) title_pane_ParamLimits

0xd915,	// (0x0004eaae) title_pane

0xd978,	// (0x0004eb11) uni_indicator_pane_ParamLimits

0xd978,	// (0x0004eb11) uni_indicator_pane

0x4c70,	// (0x00045e09) bg_list_pane_ParamLimits

0x4c70,	// (0x00045e09) bg_list_pane

0x16bf,	// (0x00042858) find_pane

0x522e,	// (0x000463c7) listscroll_app_pane_ParamLimits

0x522e,	// (0x000463c7) listscroll_app_pane

0x4c9c,	// (0x00045e35) listscroll_form_pane

0x16c7,	// (0x00042860) listscroll_gen_pane_ParamLimits

0x16c7,	// (0x00042860) listscroll_gen_pane

0x16db,	// (0x00042874) listscroll_set_pane

0x65a3,	// (0x0004773c) main_idle_act_pane

0x496c,	// (0x00045b05) main_idle_trad_pane

0x496c,	// (0x00045b05) main_list_empty_pane

0x4c90,	// (0x00045e29) main_midp_pane

0x4cb6,	// (0x00045e4f) main_pane_g1_ParamLimits

0x4cb6,	// (0x00045e4f) main_pane_g1

0xc45b,	// (0x0004d5f4) popup_ai_message_window_ParamLimits

0xc45b,	// (0x0004d5f4) popup_ai_message_window

0xc4ec,	// (0x0004d685) popup_fep_china_uni_window_ParamLimits

0xc4ec,	// (0x0004d685) popup_fep_china_uni_window

0x17e5,	// (0x0004297e) popup_fep_japan_candidate_window_ParamLimits

0x17e5,	// (0x0004297e) popup_fep_japan_candidate_window

0x1805,	// (0x0004299e) popup_fep_japan_predictive_window_ParamLimits

0x1805,	// (0x0004299e) popup_fep_japan_predictive_window

0xc548,	// (0x0004d6e1) popup_find_window

0xc565,	// (0x0004d6fe) popup_grid_graphic_window_ParamLimits

0xc565,	// (0x0004d6fe) popup_grid_graphic_window

0x186e,	// (0x00042a07) popup_large_graphic_colour_window

0xc609,	// (0x0004d7a2) popup_menu_window_ParamLimits

0xc609,	// (0x0004d7a2) popup_menu_window

0xc7db,	// (0x0004d974) popup_note_image_window

0xc7a1,	// (0x0004d93a) popup_note_wait_window_ParamLimits

0xc7a1,	// (0x0004d93a) popup_note_wait_window

0xc7f3,	// (0x0004d98c) popup_note_window_ParamLimits

0xc7f3,	// (0x0004d98c) popup_note_window

0xc899,	// (0x0004da32) popup_query_code_window_ParamLimits

0xc899,	// (0x0004da32) popup_query_code_window

0x1ab6,	// (0x00042c4f) popup_query_data_code_window_ParamLimits

0x1ab6,	// (0x00042c4f) popup_query_data_code_window

0xc8d3,	// (0x0004da6c) popup_query_data_window_ParamLimits

0xc8d3,	// (0x0004da6c) popup_query_data_window

0xc955,	// (0x0004daee) popup_query_sat_info_window_ParamLimits

0xc955,	// (0x0004daee) popup_query_sat_info_window

0xc9ec,	// (0x0004db85) popup_snote_single_graphic_window_ParamLimits

0xc9ec,	// (0x0004db85) popup_snote_single_graphic_window

0xc9ec,	// (0x0004db85) popup_snote_single_text_window_ParamLimits

0xc9ec,	// (0x0004db85) popup_snote_single_text_window

0x1b3d,	// (0x00042cd6) popup_sub_window_general

0x1c6d,	// (0x00042e06) popup_window_general_ParamLimits

0x1c6d,	// (0x00042e06) popup_window_general

0x4cc4,	// (0x00045e5d) power_save_pane

0xc2dc,	// (0x0004d475) control_pane_g1_ParamLimits

0xc2dc,	// (0x0004d475) control_pane_g1

0xc305,	// (0x0004d49e) control_pane_g2_ParamLimits

0xc305,	// (0x0004d49e) control_pane_g2

0x4c33,	// (0x00045dcc) control_pane_g3_ParamLimits

0x4c33,	// (0x00045dcc) control_pane_g3

0x0007,

0xf768,	// (0x00050901) control_pane_g_ParamLimits

0xf768,	// (0x00050901) control_pane_g

0xc346,	// (0x0004d4df) control_pane_t1_ParamLimits

0xc346,	// (0x0004d4df) control_pane_t1

0xc3ae,	// (0x0004d547) control_pane_t2_ParamLimits

0xc3ae,	// (0x0004d547) control_pane_t2

0x0002,

0xf779,	// (0x00050912) control_pane_t_ParamLimits

0xf779,	// (0x00050912) control_pane_t

0x4b58,	// (0x00045cf1) navi_navi_volume_pane_cp1

0x4b60,	// (0x00045cf9) status_small_icon_pane

0x4b68,	// (0x00045d01) status_small_pane_g1_ParamLimits

0x4b68,	// (0x00045d01) status_small_pane_g1

0x4b9c,	// (0x00045d35) status_small_pane_g2_ParamLimits

0x4b9c,	// (0x00045d35) status_small_pane_g2

0x4ba8,	// (0x00045d41) status_small_pane_g3_ParamLimits

0x4ba8,	// (0x00045d41) status_small_pane_g3

0xd596,	// (0x0004e72f) status_small_pane_g4_ParamLimits

0xd596,	// (0x0004e72f) status_small_pane_g4

0xd5a4,	// (0x0004e73d) status_small_pane_g5_ParamLimits

0xd5a4,	// (0x0004e73d) status_small_pane_g5

0x4bce,	// (0x00045d67) status_small_pane_g6_ParamLimits

0x4bce,	// (0x00045d67) status_small_pane_g6

0x0007,

0xf757,	// (0x000508f0) status_small_pane_g_ParamLimits

0xf757,	// (0x000508f0) status_small_pane_g

0x4bfd,	// (0x00045d96) status_small_pane_t1

0xd5ba,	// (0x0004e753) status_small_wait_pane_ParamLimits

0xd5ba,	// (0x0004e753) status_small_wait_pane

0xd46c,	// (0x0004e605) aid_levels_signal_ParamLimits

0xd46c,	// (0x0004e605) aid_levels_signal

0xd484,	// (0x0004e61d) signal_pane_g1_ParamLimits

0xd484,	// (0x0004e61d) signal_pane_g1

0xd49f,	// (0x0004e638) signal_pane_g2_ParamLimits

0xd49f,	// (0x0004e638) signal_pane_g2

0x0003,

0xf6e8,	// (0x00050881) signal_pane_g_ParamLimits

0xf6e8,	// (0x00050881) signal_pane_g

0x443f,	// (0x000455d8) context_pane_g1

0xbf14,	// (0x0004d0ad) title_pane_g1

0xbf4b,	// (0x0004d0e4) title_pane_t1

0x33e5,	// (0x0004457e) title_pane_t2

0x340b,	// (0x000445a4) title_pane_t3

0x0002,

0xf532,	// (0x000506cb) title_pane_t

0xd9a0,	// (0x0004eb39) aid_levels_battery_ParamLimits

0xd9a0,	// (0x0004eb39) aid_levels_battery

0xd9bc,	// (0x0004eb55) battery_pane_g1_ParamLimits

0xd9bc,	// (0x0004eb55) battery_pane_g1

0xd9d9,	// (0x0004eb72) battery_pane_g2_ParamLimits

0xd9d9,	// (0x0004eb72) battery_pane_g2

0x0001,

0xf78b,	// (0x00050924) battery_pane_g_ParamLimits

0xf78b,	// (0x00050924) battery_pane_g

0xdb9a,	// (0x0004ed33) uni_indicator_pane_g1

0xdbb0,	// (0x0004ed49) uni_indicator_pane_g2

0xdbc6,	// (0x0004ed5f) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x00050a95) uni_indicator_pane_g

0x47e1,	// (0x0004597a) navi_icon_pane_ParamLimits

0x47e1,	// (0x0004597a) navi_icon_pane

0x472a,	// (0x000458c3) navi_midp_pane

0x47fd,	// (0x00045996) navi_navi_pane

0x4807,	// (0x000459a0) navi_text_pane_ParamLimits

0x4807,	// (0x000459a0) navi_text_pane

0xe26d,	// (0x0004f406) status_small_wait_pane_g1

0x3860,	// (0x000449f9) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x00050a90) status_small_wait_pane_g

0x607d,	// (0x00047216) navi_navi_icon_text_pane

0x6085,	// (0x0004721e) navi_navi_pane_g1_ParamLimits

0x6085,	// (0x0004721e) navi_navi_pane_g1

0x6097,	// (0x00047230) navi_navi_pane_g2_ParamLimits

0x6097,	// (0x00047230) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x00050a5e) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x00050a5e) navi_navi_pane_g

0x60a9,	// (0x00047242) navi_navi_tabs_pane

0x60b2,	// (0x0004724b) navi_navi_text_pane

0x607d,	// (0x00047216) navi_navi_volume_pane

0x6059,	// (0x000471f2) navi_text_pane_t1

0x604d,	// (0x000471e6) navi_icon_pane_g1

0x5fa0,	// (0x00047139) navi_navi_text_pane_t1

0x1f25,	// (0x000430be) navi_navi_volume_pane_g1

0x1f2d,	// (0x000430c6) volume_small_pane

0x5f06,	// (0x0004709f) navi_navi_icon_text_pane_g1

0x5f0e,	// (0x000470a7) navi_navi_icon_text_pane_t1

0x47fd,	// (0x00045996) navi_tabs_2_long_pane

0x47fd,	// (0x00045996) navi_tabs_2_pane

0x47fd,	// (0x00045996) navi_tabs_3_long_pane

0x47fd,	// (0x00045996) navi_tabs_3_pane

0x47fd,	// (0x00045996) navi_tabs_4_pane

0x1f05,	// (0x0004309e) tabs_2_active_pane_ParamLimits

0x1f05,	// (0x0004309e) tabs_2_active_pane

0x1f15,	// (0x000430ae) tabs_2_passive_pane_ParamLimits

0x1f15,	// (0x000430ae) tabs_2_passive_pane

0x1ed3,	// (0x0004306c) tabs_3_active_pane_ParamLimits

0x1ed3,	// (0x0004306c) tabs_3_active_pane

0x1ee3,	// (0x0004307c) tabs_3_passive_pane_ParamLimits

0x1ee3,	// (0x0004307c) tabs_3_passive_pane

0x1ef4,	// (0x0004308d) tabs_3_passive_pane_cp_ParamLimits

0x1ef4,	// (0x0004308d) tabs_3_passive_pane_cp

0x1e8f,	// (0x00043028) tabs_4_active_pane_ParamLimits

0x1e8f,	// (0x00043028) tabs_4_active_pane

0x1ea0,	// (0x00043039) tabs_4_passive_pane_ParamLimits

0x1ea0,	// (0x00043039) tabs_4_passive_pane

0x1eb1,	// (0x0004304a) tabs_4_passive_pane_cp_ParamLimits

0x1eb1,	// (0x0004304a) tabs_4_passive_pane_cp

0x1ec2,	// (0x0004305b) tabs_4_passive_pane_cp2_ParamLimits

0x1ec2,	// (0x0004305b) tabs_4_passive_pane_cp2

0x1e6b,	// (0x00043004) tabs_2_long_active_pane_ParamLimits

0x1e6b,	// (0x00043004) tabs_2_long_active_pane

0x1e7d,	// (0x00043016) tabs_2_long_passive_pane_ParamLimits

0x1e7d,	// (0x00043016) tabs_2_long_passive_pane

0x1e2c,	// (0x00042fc5) tabs_3_long_active_pane_ParamLimits

0x1e2c,	// (0x00042fc5) tabs_3_long_active_pane

0x1e3f,	// (0x00042fd8) tabs_3_long_passive_pane_ParamLimits

0x1e3f,	// (0x00042fd8) tabs_3_long_passive_pane

0x1e58,	// (0x00042ff1) tabs_3_long_passive_pane_cp_ParamLimits

0x1e58,	// (0x00042ff1) tabs_3_long_passive_pane_cp

0x1dd2,	// (0x00042f6b) volume_small_pane_g1

0x1ddb,	// (0x00042f74) volume_small_pane_g2

0x1de4,	// (0x00042f7d) volume_small_pane_g3

0x1ded,	// (0x00042f86) volume_small_pane_g4

0x1df6,	// (0x00042f8f) volume_small_pane_g5

0x1dff,	// (0x00042f98) volume_small_pane_g6

0x1e08,	// (0x00042fa1) volume_small_pane_g7

0x1e11,	// (0x00042faa) volume_small_pane_g8

0x1e1a,	// (0x00042fb3) volume_small_pane_g9

0x1e23,	// (0x00042fbc) volume_small_pane_g10

0x0009,

0xf891,	// (0x00050a2a) volume_small_pane_g

0x3698,	// (0x00044831) bg_active_tab_pane_cp2_ParamLimits

0x3698,	// (0x00044831) bg_active_tab_pane_cp2

0x342b,	// (0x000445c4) tabs_3_active_pane_g1

0xbfd7,	// (0x0004d170) tabs_3_active_pane_t1

0x3698,	// (0x00044831) bg_passive_tab_pane_cp2_ParamLimits

0x3698,	// (0x00044831) bg_passive_tab_pane_cp2

0x342b,	// (0x000445c4) tabs_3_passive_pane_g1

0xbfd7,	// (0x0004d170) tabs_3_passive_pane_t1

0x3698,	// (0x00044831) bg_active_tab_pane_cp3_ParamLimits

0x3698,	// (0x00044831) bg_active_tab_pane_cp3

0x3445,	// (0x000445de) tabs_4_active_pane_g1

0xbfe9,	// (0x0004d182) tabs_4_active_pane_t1

0x3698,	// (0x00044831) bg_passive_tab_pane_cp3_ParamLimits

0x3698,	// (0x00044831) bg_passive_tab_pane_cp3

0x3445,	// (0x000445de) tabs_4_1_passive_pane_g1

0xbfe9,	// (0x0004d182) tabs_4_1_passive_pane_t1

0x4c90,	// (0x00045e29) list_highlight_pane_cp2

0xdc4c,	// (0x0004ede5) list_set_pane_ParamLimits

0xdc4c,	// (0x0004ede5) list_set_pane

0xdce6,	// (0x0004ee7f) main_pane_set_t1_ParamLimits

0xdce6,	// (0x0004ee7f) main_pane_set_t1

0xdd06,	// (0x0004ee9f) main_pane_set_t2_ParamLimits

0xdd06,	// (0x0004ee9f) main_pane_set_t2

0xdd1a,	// (0x0004eeb3) main_pane_set_t3_ParamLimits

0xdd1a,	// (0x0004eeb3) main_pane_set_t3

0xdd2c,	// (0x0004eec5) main_pane_set_t4_ParamLimits

0xdd2c,	// (0x0004eec5) main_pane_set_t4

0x0003,

0xf961,	// (0x00050afa) main_pane_set_t_ParamLimits

0xf961,	// (0x00050afa) main_pane_set_t

0xdd3e,	// (0x0004eed7) setting_code_pane

0xdd48,	// (0x0004eee1) setting_slider_graphic_pane

0xdd48,	// (0x0004eee1) setting_slider_pane

0xdd48,	// (0x0004eee1) setting_text_pane

0xdd48,	// (0x0004eee1) setting_volume_pane

0x0f84,	// (0x0004211d) volume_set_pane

0x341d,	// (0x000445b6) bg_set_opt_pane_cp

0x0f8c,	// (0x00042125) setting_slider_pane_t1

0x0fa5,	// (0x0004213e) setting_slider_pane_t2

0x0fbf,	// (0x00042158) setting_slider_pane_t3

0x0002,

0xf539,	// (0x000506d2) setting_slider_pane_t

0x0fd7,	// (0x00042170) slider_set_pane

0x333d,	// (0x000444d6) bg_set_opt_pane_cp2

0x345f,	// (0x000445f8) setting_slider_graphic_pane_g1

0x0fed,	// (0x00042186) setting_slider_graphic_pane_t1

0x0ffd,	// (0x00042196) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x000506d9) setting_slider_graphic_pane_t

0x100d,	// (0x000421a6) slider_set_pane_cp

0x333d,	// (0x000444d6) input_focus_pane_cp1

0x658a,	// (0x00047723) list_set_text_pane

0xe26d,	// (0x0004f406) setting_text_pane_g1

0x333d,	// (0x000444d6) input_focus_pane_cp2

0xe26d,	// (0x0004f406) setting_code_pane_g1

0x3468,	// (0x00044601) setting_code_pane_t1

0xf445,	// (0x000505de) set_text_pane_t1_ParamLimits

0xf445,	// (0x000505de) set_text_pane_t1

0x3d02,	// (0x00044e9b) set_opt_bg_pane_g1

0x3d0a,	// (0x00044ea3) set_opt_bg_pane_g2

0x6564,	// (0x000476fd) set_opt_bg_pane_g3

0x3d1a,	// (0x00044eb3) set_opt_bg_pane_g4

0x3d22,	// (0x00044ebb) set_opt_bg_pane_g5

0x3d2a,	// (0x00044ec3) set_opt_bg_pane_g6

0x656e,	// (0x00047707) set_opt_bg_pane_g7

0x6576,	// (0x0004770f) set_opt_bg_pane_g8

0x6580,	// (0x00047719) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x00050ae7) set_opt_bg_pane_g

0x6557,	// (0x000476f0) slider_set_pane_g1

0x1f9a,	// (0x00043133) slider_set_pane_g2

0x0006,

0xf93f,	// (0x00050ad8) slider_set_pane_g

0x1f36,	// (0x000430cf) volume_set_pane_g1

0x1f3e,	// (0x000430d7) volume_set_pane_g2

0x1f46,	// (0x000430df) volume_set_pane_g3

0x1f4e,	// (0x000430e7) volume_set_pane_g4

0x1f56,	// (0x000430ef) volume_set_pane_g5

0x1f5e,	// (0x000430f7) volume_set_pane_g6

0x1f66,	// (0x000430ff) volume_set_pane_g7

0x1f6e,	// (0x00043107) volume_set_pane_g8

0x1f76,	// (0x0004310f) volume_set_pane_g9

0x1f7e,	// (0x00043117) volume_set_pane_g10

0x0009,

0xf917,	// (0x00050ab0) volume_set_pane_g

0xbffb,	// (0x0004d194) indicator_pane_ParamLimits

0xbffb,	// (0x0004d194) indicator_pane

0xc023,	// (0x0004d1bc) main_idle_pane_g2_ParamLimits

0xc023,	// (0x0004d1bc) main_idle_pane_g2

0xc05b,	// (0x0004d1f4) main_pane_idle_g1_ParamLimits

0xc05b,	// (0x0004d1f4) main_pane_idle_g1

0x34b7,	// (0x00044650) popup_clock_digital_analogue_window_ParamLimits

0x34b7,	// (0x00044650) popup_clock_digital_analogue_window

0xc082,	// (0x0004d21b) soft_indicator_pane_ParamLimits

0xc082,	// (0x0004d21b) soft_indicator_pane

0xc09c,	// (0x0004d235) wallpaper_pane_ParamLimits

0xc09c,	// (0x0004d235) wallpaper_pane

0xe26d,	// (0x0004f406) wallpaper_pane_g1

0xc0ae,	// (0x0004d247) indicator_pane_g1_ParamLimits

0xc0ae,	// (0x0004d247) indicator_pane_g1

0x698f,	// (0x00047b28) navi_navi_icon_text_pane_srt_g1

0x3509,	// (0x000446a2) soft_indicator_pane_t1

0x3523,	// (0x000446bc) aid_ps_area_pane

0xc0c4,	// (0x0004d25d) aid_ps_clock_pane

0x3542,	// (0x000446db) aid_ps_indicator_pane

0x354e,	// (0x000446e7) indicator_ps_pane_ParamLimits

0x354e,	// (0x000446e7) indicator_ps_pane

0x355d,	// (0x000446f6) power_save_pane_g1_ParamLimits

0x355d,	// (0x000446f6) power_save_pane_g1

0x3569,	// (0x00044702) power_save_pane_g2_ParamLimits

0x3569,	// (0x00044702) power_save_pane_g2

0x0b95,	// (0x00041d2e) aid_navinavi_width_pane

0x3523,	// (0x000446bc) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x000506de) power_save_pane_g_ParamLimits

0xf545,	// (0x000506de) power_save_pane_g

0x3577,	// (0x00044710) power_save_pane_t1_ParamLimits

0x3577,	// (0x00044710) power_save_pane_t1

0xc0c4,	// (0x0004d25d) aid_ps_clock_pane_ParamLimits

0x3542,	// (0x000446db) aid_ps_indicator_pane_ParamLimits

0x3589,	// (0x00044722) power_save_pane_t4_ParamLimits

0x3589,	// (0x00044722) power_save_pane_t4

0x0001,

0xf54a,	// (0x000506e3) power_save_pane_t_ParamLimits

0xf54a,	// (0x000506e3) power_save_pane_t

0x35b3,	// (0x0004474c) power_save_t3_ParamLimits

0x35b3,	// (0x0004474c) power_save_t3

0x359e,	// (0x00044737) power_save_t2_ParamLimits

0x359e,	// (0x00044737) power_save_t2

0x35c8,	// (0x00044761) indicator_ps_pane_g1

0xc0d2,	// (0x0004d26b) ai_gene_pane_ParamLimits

0xc0d2,	// (0x0004d26b) ai_gene_pane

0xc0e9,	// (0x0004d282) ai_links_pane_ParamLimits

0xc0e9,	// (0x0004d282) ai_links_pane

0xc101,	// (0x0004d29a) indicator_pane_cp1_ParamLimits

0xc101,	// (0x0004d29a) indicator_pane_cp1

0xc110,	// (0x0004d2a9) main_pane_idle_g1_cp_ParamLimits

0xc110,	// (0x0004d2a9) main_pane_idle_g1_cp

0x3601,	// (0x0004479a) popup_ai_links_title_window

0xc128,	// (0x0004d2c1) soft_indicator_pane_cp1_ParamLimits

0xc128,	// (0x0004d2c1) soft_indicator_pane_cp1

0x6346,	// (0x000474df) ai_links_pane_g1

0x634f,	// (0x000474e8) grid_ai_links_pane

0xdb91,	// (0x0004ed2a) ai_gene_pane_1

0x6334,	// (0x000474cd) ai_gene_pane_2

0x633d,	// (0x000474d6) list_highlight_pane_cp4

0xdb6d,	// (0x0004ed06) cell_ai_link_pane_ParamLimits

0xdb6d,	// (0x0004ed06) cell_ai_link_pane

0x6305,	// (0x0004749e) cell_ai_link_pane_g1

0x3860,	// (0x000449f9) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x00050a8b) cell_ai_link_pane_g

0x333d,	// (0x000444d6) grid_highlight_cp2

0x333d,	// (0x000444d6) bg_popup_sub_pane_cp1

0x3624,	// (0x000447bd) popup_ai_links_title_window_t1

0x6253,	// (0x000473ec) ai_gene_pane_1_g1_ParamLimits

0x6253,	// (0x000473ec) ai_gene_pane_1_g1

0x625f,	// (0x000473f8) ai_gene_pane_1_g2_ParamLimits

0x625f,	// (0x000473f8) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x00050a81) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x00050a81) ai_gene_pane_1_g

0x626c,	// (0x00047405) ai_gene_pane_1_t1_ParamLimits

0x626c,	// (0x00047405) ai_gene_pane_1_t1

0x62a0,	// (0x00047439) grid_ai_soft_ind_pane

0x623e,	// (0x000473d7) ai_gene_pane_2_t1_ParamLimits

0x623e,	// (0x000473d7) ai_gene_pane_2_t1

0xc13c,	// (0x0004d2d5) main_pane_empty_t1_ParamLimits

0xc13c,	// (0x0004d2d5) main_pane_empty_t1

0xc154,	// (0x0004d2ed) main_pane_empty_t2_ParamLimits

0xc154,	// (0x0004d2ed) main_pane_empty_t2

0xc169,	// (0x0004d302) main_pane_empty_t3_ParamLimits

0xc169,	// (0x0004d302) main_pane_empty_t3

0xc17b,	// (0x0004d314) main_pane_empty_t4_ParamLimits

0xc17b,	// (0x0004d314) main_pane_empty_t4

0xc18d,	// (0x0004d326) main_pane_empty_t5_ParamLimits

0xc18d,	// (0x0004d326) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000506e8) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000506e8) main_pane_empty_t

0x3dc9,	// (0x00044f62) bg_popup_window_pane_ParamLimits

0x3dc9,	// (0x00044f62) bg_popup_window_pane

0x5fae,	// (0x00047147) find_popup_pane_cp2_ParamLimits

0x5fae,	// (0x00047147) find_popup_pane_cp2

0x5fba,	// (0x00047153) heading_pane_ParamLimits

0x5fba,	// (0x00047153) heading_pane

0x333d,	// (0x000444d6) bg_popup_sub_pane

0xdaee,	// (0x0004ec87) bg_popup_window_pane_g1_ParamLimits

0xdaee,	// (0x0004ec87) bg_popup_window_pane_g1

0xdafd,	// (0x0004ec96) bg_popup_window_pane_g2_ParamLimits

0xdafd,	// (0x0004ec96) bg_popup_window_pane_g2

0xdb09,	// (0x0004eca2) bg_popup_window_pane_g3_ParamLimits

0xdb09,	// (0x0004eca2) bg_popup_window_pane_g3

0xdb15,	// (0x0004ecae) bg_popup_window_pane_g4_ParamLimits

0xdb15,	// (0x0004ecae) bg_popup_window_pane_g4

0xdb24,	// (0x0004ecbd) bg_popup_window_pane_g5_ParamLimits

0xdb24,	// (0x0004ecbd) bg_popup_window_pane_g5

0xdb34,	// (0x0004eccd) bg_popup_window_pane_g6_ParamLimits

0xdb34,	// (0x0004eccd) bg_popup_window_pane_g6

0xdb40,	// (0x0004ecd9) bg_popup_window_pane_g7_ParamLimits

0xdb40,	// (0x0004ecd9) bg_popup_window_pane_g7

0xdb4f,	// (0x0004ece8) bg_popup_window_pane_g8_ParamLimits

0xdb4f,	// (0x0004ece8) bg_popup_window_pane_g8

0xdb5e,	// (0x0004ecf7) bg_popup_window_pane_g9_ParamLimits

0xdb5e,	// (0x0004ecf7) bg_popup_window_pane_g9

0x5f94,	// (0x0004712d) bg_popup_window_pane_g10_ParamLimits

0x5f94,	// (0x0004712d) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x00050a49) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x00050a49) bg_popup_window_pane_g

0x5ebd,	// (0x00047056) bg_popup_heading_pane_ParamLimits

0x5ebd,	// (0x00047056) bg_popup_heading_pane

0x2099,	// (0x00043232) tabs_4_passive_pane_cp_srt_ParamLimits

0x2099,	// (0x00043232) tabs_4_passive_pane_cp_srt

0x20ab,	// (0x00043244) tabs_4_passive_pane_srt_ParamLimits

0x5ed1,	// (0x0004706a) heading_pane_g2

0x20ab,	// (0x00043244) tabs_4_passive_pane_srt

0x522e,	// (0x000463c7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x522e,	// (0x000463c7) bg_passive_tab_pane_cp3_srt

0x5ed9,	// (0x00047072) heading_pane_t1_ParamLimits

0x5ed9,	// (0x00047072) heading_pane_t1

0x5ef0,	// (0x00047089) heading_pane_t2_ParamLimits

0x5ef0,	// (0x00047089) heading_pane_t2

0x0001,

0xf8ab,	// (0x00050a44) heading_pane_t_ParamLimits

0xf8ab,	// (0x00050a44) heading_pane_t

0x59ea,	// (0x00046b83) bg_popup_heading_pane_g1

0x5a99,	// (0x00046c32) bg_popup_heading_pane_g2

0x5aa3,	// (0x00046c3c) bg_popup_heading_pane_g3

0x5aad,	// (0x00046c46) bg_popup_heading_pane_g4

0x5ab7,	// (0x00046c50) bg_popup_heading_pane_g5

0x5ac1,	// (0x00046c5a) bg_popup_heading_pane_g6

0x5ac9,	// (0x00046c62) bg_popup_heading_pane_g7

0x5ad1,	// (0x00046c6a) bg_popup_heading_pane_g8

0x5adb,	// (0x00046c74) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x00050a00) bg_popup_heading_pane_g

0x51ba,	// (0x00046353) bg_popup_sub_pane_g1

0x51c2,	// (0x0004635b) bg_popup_sub_pane_g2

0x51ca,	// (0x00046363) bg_popup_sub_pane_g3

0x51d2,	// (0x0004636b) bg_popup_sub_pane_g4

0x51da,	// (0x00046373) bg_popup_sub_pane_g5

0x51e2,	// (0x0004637b) bg_popup_sub_pane_g6

0x51ea,	// (0x00046383) bg_popup_sub_pane_g7

0x51f2,	// (0x0004638b) bg_popup_sub_pane_g8

0x51fa,	// (0x00046393) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x000509da) bg_popup_sub_pane_g

0x3698,	// (0x00044831) bg_popup_window_pane_cp5_ParamLimits

0x3698,	// (0x00044831) bg_popup_window_pane_cp5

0x36b4,	// (0x0004484d) popup_note_window_g1_ParamLimits

0x36b4,	// (0x0004484d) popup_note_window_g1

0x36c0,	// (0x00044859) popup_note_window_t1_ParamLimits

0x36c0,	// (0x00044859) popup_note_window_t1

0x36d6,	// (0x0004486f) popup_note_window_t2_ParamLimits

0x36d6,	// (0x0004486f) popup_note_window_t2

0x36ec,	// (0x00044885) popup_note_window_t3_ParamLimits

0x36ec,	// (0x00044885) popup_note_window_t3

0x3702,	// (0x0004489b) popup_note_window_t4_ParamLimits

0x3702,	// (0x0004489b) popup_note_window_t4

0x372a,	// (0x000448c3) popup_note_window_t5_ParamLimits

0x372a,	// (0x000448c3) popup_note_window_t5

0x0004,

0xf55a,	// (0x000506f3) popup_note_window_t_ParamLimits

0xf55a,	// (0x000506f3) popup_note_window_t

0x3774,	// (0x0004490d) bg_popup_window_pane_cp6_ParamLimits

0x3774,	// (0x0004490d) bg_popup_window_pane_cp6

0x5966,	// (0x00046aff) popup_note_image_window_g1_ParamLimits

0x5966,	// (0x00046aff) popup_note_image_window_g1

0x5972,	// (0x00046b0b) popup_note_image_window_g2_ParamLimits

0x5972,	// (0x00046b0b) popup_note_image_window_g2

0x0001,

0xf835,	// (0x000509ce) popup_note_image_window_g_ParamLimits

0xf835,	// (0x000509ce) popup_note_image_window_g

0x598b,	// (0x00046b24) popup_note_image_window_t1_ParamLimits

0x598b,	// (0x00046b24) popup_note_image_window_t1

0x59a4,	// (0x00046b3d) popup_note_image_window_t2_ParamLimits

0x59a4,	// (0x00046b3d) popup_note_image_window_t2

0x59bd,	// (0x00046b56) popup_note_image_window_t3_ParamLimits

0x59bd,	// (0x00046b56) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x000509d3) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x000509d3) popup_note_image_window_t

0x5827,	// (0x000469c0) bg_popup_window_pane_cp7_ParamLimits

0x5827,	// (0x000469c0) bg_popup_window_pane_cp7

0x5857,	// (0x000469f0) popup_note_wait_window_g1_ParamLimits

0x5857,	// (0x000469f0) popup_note_wait_window_g1

0x5863,	// (0x000469fc) popup_note_wait_window_g2_ParamLimits

0x5863,	// (0x000469fc) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x000509bc) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x000509bc) popup_note_wait_window_g

0x587b,	// (0x00046a14) popup_note_wait_window_t1_ParamLimits

0x587b,	// (0x00046a14) popup_note_wait_window_t1

0x58a2,	// (0x00046a3b) popup_note_wait_window_t2_ParamLimits

0x58a2,	// (0x00046a3b) popup_note_wait_window_t2

0x58bf,	// (0x00046a58) popup_note_wait_window_t3_ParamLimits

0x58bf,	// (0x00046a58) popup_note_wait_window_t3

0x58d2,	// (0x00046a6b) popup_note_wait_window_t4_ParamLimits

0x58d2,	// (0x00046a6b) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x000509c3) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x000509c3) popup_note_wait_window_t

0x58f7,	// (0x00046a90) wait_bar_pane_ParamLimits

0x58f7,	// (0x00046a90) wait_bar_pane

0x333d,	// (0x000444d6) wait_anim_pane

0x333d,	// (0x000444d6) wait_border_pane

0xe26d,	// (0x0004f406) wait_anim_pane_g1

0xe26d,	// (0x0004f406) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x0005087c) wait_anim_pane_g

0x57cb,	// (0x00046964) wait_border_pane_g1

0x57d6,	// (0x0004696f) wait_border_pane_g2

0x57df,	// (0x00046978) wait_border_pane_g3

0x0002,

0xf81c,	// (0x000509b5) wait_border_pane_g

0x5636,	// (0x000467cf) bg_popup_window_pane_cp16_ParamLimits

0x5636,	// (0x000467cf) bg_popup_window_pane_cp16

0x5736,	// (0x000468cf) indicator_popup_pane_cp4_ParamLimits

0x5736,	// (0x000468cf) indicator_popup_pane_cp4

0x574a,	// (0x000468e3) popup_query_data_window_t1_ParamLimits

0x574a,	// (0x000468e3) popup_query_data_window_t1

0x575c,	// (0x000468f5) popup_query_data_window_t2_ParamLimits

0x575c,	// (0x000468f5) popup_query_data_window_t2

0x5775,	// (0x0004690e) popup_query_data_window_t3_ParamLimits

0x5775,	// (0x0004690e) popup_query_data_window_t3

0x0002,

0xf815,	// (0x000509ae) popup_query_data_window_t_ParamLimits

0xf815,	// (0x000509ae) popup_query_data_window_t

0x578f,	// (0x00046928) query_popup_data_pane_ParamLimits

0x578f,	// (0x00046928) query_popup_data_pane

0x57a3,	// (0x0004693c) query_popup_data_pane_cp1_ParamLimits

0x57a3,	// (0x0004693c) query_popup_data_pane_cp1

0x5636,	// (0x000467cf) bg_popup_window_pane_cp10_ParamLimits

0x5636,	// (0x000467cf) bg_popup_window_pane_cp10

0x5668,	// (0x00046801) indicator_popup_pane_ParamLimits

0x5668,	// (0x00046801) indicator_popup_pane

0x568a,	// (0x00046823) popup_query_code_window_t1_ParamLimits

0x568a,	// (0x00046823) popup_query_code_window_t1

0x56a4,	// (0x0004683d) popup_query_code_window_t2_ParamLimits

0x56a4,	// (0x0004683d) popup_query_code_window_t2

0x56ed,	// (0x00046886) popup_query_code_window_t3_ParamLimits

0x56ed,	// (0x00046886) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x000509a7) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x000509a7) popup_query_code_window_t

0x571c,	// (0x000468b5) query_popup_pane_ParamLimits

0x571c,	// (0x000468b5) query_popup_pane

0x3774,	// (0x0004490d) bg_popup_window_pane_cp15_ParamLimits

0x3774,	// (0x0004490d) bg_popup_window_pane_cp15

0x3792,	// (0x0004492b) indicator_popup_pane_cp1_ParamLimits

0x3792,	// (0x0004492b) indicator_popup_pane_cp1

0x37a5,	// (0x0004493e) indicator_popup_pane_cp2_ParamLimits

0x37a5,	// (0x0004493e) indicator_popup_pane_cp2

0x37b8,	// (0x00044951) popup_query_data_code_window_g1_ParamLimits

0x37b8,	// (0x00044951) popup_query_data_code_window_g1

0x37cb,	// (0x00044964) popup_query_data_code_window_t1_ParamLimits

0x37cb,	// (0x00044964) popup_query_data_code_window_t1

0x37dd,	// (0x00044976) popup_query_data_code_window_t2_ParamLimits

0x37dd,	// (0x00044976) popup_query_data_code_window_t2

0x37ef,	// (0x00044988) popup_query_data_code_window_t3_ParamLimits

0x37ef,	// (0x00044988) popup_query_data_code_window_t3

0x3805,	// (0x0004499e) popup_query_data_code_window_t4_ParamLimits

0x3805,	// (0x0004499e) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x000506fe) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x000506fe) popup_query_data_code_window_t

0x1cd7,	// (0x00042e70) list_single_midp_graphic_pane_g3

0x381d,	// (0x000449b6) query_popup_data_pane_cp2_ParamLimits

0x3830,	// (0x000449c9) query_popup_pane_cp2_ParamLimits

0x3830,	// (0x000449c9) query_popup_pane_cp2

0x333d,	// (0x000444d6) bg_popup_window_pane_cp11

0x561a,	// (0x000467b3) heading_pane_cp5

0x5622,	// (0x000467bb) listscroll_popup_info_pane

0x333d,	// (0x000444d6) input_focus_pane_cp3

0x3843,	// (0x000449dc) query_popup_pane_t1

0x3851,	// (0x000449ea) list_popup_info_pane_ParamLimits

0x3851,	// (0x000449ea) list_popup_info_pane

0x3860,	// (0x000449f9) listscroll_popup_info_pane_g1

0x3868,	// (0x00044a01) scroll_pane_cp7

0x3872,	// (0x00044a0b) popup_info_list_pane_t1_ParamLimits

0x3872,	// (0x00044a0b) popup_info_list_pane_t1

0x388c,	// (0x00044a25) popup_info_list_pane_t2_ParamLimits

0x388c,	// (0x00044a25) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00050707) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00050707) popup_info_list_pane_t

0x333d,	// (0x000444d6) bg_popup_window_pane_cp12

0x69a9,	// (0x00047b42) find_popup_pane

0x341d,	// (0x000445b6) bg_popup_window_pane_cp3

0x38a6,	// (0x00044a3f) heading_pane_cp3

0x38b5,	// (0x00044a4e) listscroll_popup_graphic_pane

0x333d,	// (0x000444d6) bg_popup_window_pane_cp4

0xc1ef,	// (0x0004d388) heading_pane_cp4

0x391f,	// (0x00044ab8) listscroll_popup_colour_pane

0xc1f9,	// (0x0004d392) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc1f9,	// (0x0004d392) cell_large_graphic_colour_none_popup_pane

0xc20d,	// (0x0004d3a6) grid_large_graphic_colour_popup_pane_ParamLimits

0xc20d,	// (0x0004d3a6) grid_large_graphic_colour_popup_pane

0xc231,	// (0x0004d3ca) listscroll_popup_colour_pane_g1_ParamLimits

0xc231,	// (0x0004d3ca) listscroll_popup_colour_pane_g1

0xc248,	// (0x0004d3e1) listscroll_popup_colour_pane_g2_ParamLimits

0xc248,	// (0x0004d3e1) listscroll_popup_colour_pane_g2

0xc25c,	// (0x0004d3f5) listscroll_popup_colour_pane_g3_ParamLimits

0xc25c,	// (0x0004d3f5) listscroll_popup_colour_pane_g3

0xc26c,	// (0x0004d405) listscroll_popup_colour_pane_g4_ParamLimits

0xc26c,	// (0x0004d405) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0005070c) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0005070c) listscroll_popup_colour_pane_g

0x39ad,	// (0x00044b46) scroll_pane_cp6_ParamLimits

0x39ad,	// (0x00044b46) scroll_pane_cp6

0xc27c,	// (0x0004d415) cell_large_graphic_colour_popup_pane_ParamLimits

0xc27c,	// (0x0004d415) cell_large_graphic_colour_popup_pane

0x39de,	// (0x00044b77) cell_large_graphic_colour_none_popup_pane_t1

0x333d,	// (0x000444d6) grid_highlight_pane_cp5

0x39ed,	// (0x00044b86) cell_large_graphic_colour_popup_pane_g1

0x39f5,	// (0x00044b8e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00050715) cell_large_graphic_colour_popup_pane_g

0x39fd,	// (0x00044b96) cell_large_graphic_colour_popup_pane_g2_copy1

0x3a06,	// (0x00044b9f) grid_highlight_pane_cp4

0x3a0e,	// (0x00044ba7) bg_popup_window_pane_cp8_ParamLimits

0x3a0e,	// (0x00044ba7) bg_popup_window_pane_cp8

0x3a29,	// (0x00044bc2) popup_snote_single_text_window_g1_ParamLimits

0x3a29,	// (0x00044bc2) popup_snote_single_text_window_g1

0x3a3b,	// (0x00044bd4) popup_snote_single_text_window_t1_ParamLimits

0x3a3b,	// (0x00044bd4) popup_snote_single_text_window_t1

0x3a4e,	// (0x00044be7) popup_snote_single_text_window_t2_ParamLimits

0x3a4e,	// (0x00044be7) popup_snote_single_text_window_t2

0x3a61,	// (0x00044bfa) popup_snote_single_text_window_t3_ParamLimits

0x3a61,	// (0x00044bfa) popup_snote_single_text_window_t3

0x3a9a,	// (0x00044c33) popup_snote_single_text_window_t4_ParamLimits

0x3a9a,	// (0x00044c33) popup_snote_single_text_window_t4

0x3ace,	// (0x00044c67) popup_snote_single_text_window_t5_ParamLimits

0x3ace,	// (0x00044c67) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0005071a) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0005071a) popup_snote_single_text_window_t

0x3afd,	// (0x00044c96) bg_popup_window_pane_cp9_ParamLimits

0x3afd,	// (0x00044c96) bg_popup_window_pane_cp9

0x3a29,	// (0x00044bc2) popup_snote_single_graphic_window_g1_ParamLimits

0x3a29,	// (0x00044bc2) popup_snote_single_graphic_window_g1

0x3b0b,	// (0x00044ca4) popup_snote_single_graphic_window_g2_ParamLimits

0x3b0b,	// (0x00044ca4) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00050725) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00050725) popup_snote_single_graphic_window_g

0x3b17,	// (0x00044cb0) popup_snote_single_graphic_window_t1_ParamLimits

0x3b17,	// (0x00044cb0) popup_snote_single_graphic_window_t1

0x3b2a,	// (0x00044cc3) popup_snote_single_graphic_window_t2_ParamLimits

0x3b2a,	// (0x00044cc3) popup_snote_single_graphic_window_t2

0x3b3d,	// (0x00044cd6) popup_snote_single_graphic_window_t3_ParamLimits

0x3b3d,	// (0x00044cd6) popup_snote_single_graphic_window_t3

0x3b76,	// (0x00044d0f) popup_snote_single_graphic_window_t4_ParamLimits

0x3b76,	// (0x00044d0f) popup_snote_single_graphic_window_t4

0x3baa,	// (0x00044d43) popup_snote_single_graphic_window_t5_ParamLimits

0x3baa,	// (0x00044d43) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0005072a) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0005072a) popup_snote_single_graphic_window_t

0x68eb,	// (0x00047a84) grid_graphic_popup_pane_ParamLimits

0x68eb,	// (0x00047a84) grid_graphic_popup_pane

0x6915,	// (0x00047aae) listscroll_popup_graphic_pane_g1_ParamLimits

0x6915,	// (0x00047aae) listscroll_popup_graphic_pane_g1

0xde3e,	// (0x0004efd7) listscroll_popup_graphic_pane_g2_ParamLimits

0xde3e,	// (0x0004efd7) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x00050b24) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x00050b24) listscroll_popup_graphic_pane_g

0x693d,	// (0x00047ad6) scroll_pane_cp5

0xddfb,	// (0x0004ef94) cell_graphic_popup_pane_ParamLimits

0xddfb,	// (0x0004ef94) cell_graphic_popup_pane

0x685d,	// (0x000479f6) cell_graphic_popup_pane_g1

0x6865,	// (0x000479fe) cell_graphic_popup_pane_g2

0x39fd,	// (0x00044b96) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x00050b1d) cell_graphic_popup_pane_g

0x686e,	// (0x00047a07) cell_graphic_popup_pane_t2

0x3a06,	// (0x00044b9f) grid_highlight_pane_cp3

0x3beb,	// (0x00044d84) list_gen_pane_ParamLimits

0x3beb,	// (0x00044d84) list_gen_pane

0x3c1d,	// (0x00044db6) scroll_pane

0xddb2,	// (0x0004ef4b) bg_list_pane_g1_ParamLimits

0xddb2,	// (0x0004ef4b) bg_list_pane_g1

0x67c6,	// (0x0004795f) bg_list_pane_g2_ParamLimits

0x67c6,	// (0x0004795f) bg_list_pane_g2

0x67e7,	// (0x00047980) bg_list_pane_g3_ParamLimits

0x67e7,	// (0x00047980) bg_list_pane_g3

0x67fb,	// (0x00047994) bg_list_pane_g4_ParamLimits

0x67fb,	// (0x00047994) bg_list_pane_g4

0xddcf,	// (0x0004ef68) bg_list_pane_g5_ParamLimits

0xddcf,	// (0x0004ef68) bg_list_pane_g5

0x0004,

0xf979,	// (0x00050b12) bg_list_pane_g_ParamLimits

0xf979,	// (0x00050b12) bg_list_pane_g

0xdd7b,	// (0x0004ef14) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd7b,	// (0x0004ef14) list_double2_graphic_large_graphic_pane

0xdd7b,	// (0x0004ef14) list_double2_graphic_pane_ParamLimits

0xdd7b,	// (0x0004ef14) list_double2_graphic_pane

0xdd7b,	// (0x0004ef14) list_double2_large_graphic_pane_ParamLimits

0xdd7b,	// (0x0004ef14) list_double2_large_graphic_pane

0xdd7b,	// (0x0004ef14) list_double2_pane_ParamLimits

0xdd7b,	// (0x0004ef14) list_double2_pane

0xdd7b,	// (0x0004ef14) list_double_graphic_heading_pane_ParamLimits

0xdd7b,	// (0x0004ef14) list_double_graphic_heading_pane

0xdd7b,	// (0x0004ef14) list_double_graphic_pane_ParamLimits

0xdd7b,	// (0x0004ef14) list_double_graphic_pane

0xdd7b,	// (0x0004ef14) list_double_heading_pane_ParamLimits

0xdd7b,	// (0x0004ef14) list_double_heading_pane

0xdd7b,	// (0x0004ef14) list_double_large_graphic_pane_ParamLimits

0xdd7b,	// (0x0004ef14) list_double_large_graphic_pane

0xdd7b,	// (0x0004ef14) list_double_number_pane_ParamLimits

0xdd7b,	// (0x0004ef14) list_double_number_pane

0xdd7b,	// (0x0004ef14) list_double_pane_ParamLimits

0xdd7b,	// (0x0004ef14) list_double_pane

0xdd7b,	// (0x0004ef14) list_double_time_pane_ParamLimits

0xdd7b,	// (0x0004ef14) list_double_time_pane

0xdd7b,	// (0x0004ef14) list_setting_number_pane_ParamLimits

0xdd7b,	// (0x0004ef14) list_setting_number_pane

0xdd7b,	// (0x0004ef14) list_setting_pane_ParamLimits

0xdd7b,	// (0x0004ef14) list_setting_pane

0xdd8d,	// (0x0004ef26) list_single_2graphic_pane_ParamLimits

0xdd8d,	// (0x0004ef26) list_single_2graphic_pane

0xdd8d,	// (0x0004ef26) list_single_graphic_heading_pane_ParamLimits

0xdd8d,	// (0x0004ef26) list_single_graphic_heading_pane

0xdd8d,	// (0x0004ef26) list_single_graphic_pane_ParamLimits

0xdd8d,	// (0x0004ef26) list_single_graphic_pane

0xdd8d,	// (0x0004ef26) list_single_heading_pane_ParamLimits

0xdd8d,	// (0x0004ef26) list_single_heading_pane

0xdd8d,	// (0x0004ef26) list_single_large_graphic_pane_ParamLimits

0xdd8d,	// (0x0004ef26) list_single_large_graphic_pane

0xdd8d,	// (0x0004ef26) list_single_number_heading_pane_ParamLimits

0xdd8d,	// (0x0004ef26) list_single_number_heading_pane

0xdd8d,	// (0x0004ef26) list_single_number_pane_ParamLimits

0xdd8d,	// (0x0004ef26) list_single_number_pane

0xdd8d,	// (0x0004ef26) list_single_pane_ParamLimits

0xdd8d,	// (0x0004ef26) list_single_pane

0x333d,	// (0x000444d6) list_highlight_pane_cp1

0x44b8,	// (0x00045651) list_single_pane_g1_ParamLimits

0x44b8,	// (0x00045651) list_single_pane_g1

0x1015,	// (0x000421ae) list_single_pane_g2_ParamLimits

0x1015,	// (0x000421ae) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00050746) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00050746) list_single_pane_g

0x05d4,	// (0x0004176d) list_single_pane_t1_ParamLimits

0x05d4,	// (0x0004176d) list_single_pane_t1

0x44b8,	// (0x00045651) list_single_number_pane_g1_ParamLimits

0x44b8,	// (0x00045651) list_single_number_pane_g1

0x1015,	// (0x000421ae) list_single_number_pane_g2_ParamLimits

0x1015,	// (0x000421ae) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00050746) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00050746) list_single_number_pane_g

0x04af,	// (0x00041648) list_single_number_pane_t1_ParamLimits

0x04af,	// (0x00041648) list_single_number_pane_t1

0x0592,	// (0x0004172b) list_single_number_pane_t2_ParamLimits

0x0592,	// (0x0004172b) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x00050ad3) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x00050ad3) list_single_number_pane_t

0xf45e,	// (0x000505f7) list_single_graphic_pane_g1_ParamLimits

0xf45e,	// (0x000505f7) list_single_graphic_pane_g1

0x44b8,	// (0x00045651) list_single_graphic_pane_g2_ParamLimits

0x44b8,	// (0x00045651) list_single_graphic_pane_g2

0x1015,	// (0x000421ae) list_single_graphic_pane_g3_ParamLimits

0x1015,	// (0x000421ae) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00050735) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00050735) list_single_graphic_pane_g

0xf46a,	// (0x00050603) list_single_graphic_pane_t1_ParamLimits

0xf46a,	// (0x00050603) list_single_graphic_pane_t1

0xf480,	// (0x00050619) list_single_heading_pane_g1_ParamLimits

0xf480,	// (0x00050619) list_single_heading_pane_g1

0x1015,	// (0x000421ae) list_single_heading_pane_g2_ParamLimits

0x1015,	// (0x000421ae) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0005073c) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0005073c) list_single_heading_pane_g

0xf493,	// (0x0005062c) list_single_heading_pane_t1_ParamLimits

0xf493,	// (0x0005062c) list_single_heading_pane_t1

0x1021,	// (0x000421ba) list_single_heading_pane_t2_ParamLimits

0x1021,	// (0x000421ba) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00050741) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00050741) list_single_heading_pane_t

0x44b8,	// (0x00045651) list_single_number_heading_pane_g1_ParamLimits

0x44b8,	// (0x00045651) list_single_number_heading_pane_g1

0x1015,	// (0x000421ae) list_single_number_heading_pane_g2_ParamLimits

0x1015,	// (0x000421ae) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00050746) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00050746) list_single_number_heading_pane_g

0xf4a9,	// (0x00050642) list_single_number_heading_pane_t1_ParamLimits

0xf4a9,	// (0x00050642) list_single_number_heading_pane_t1

0xf4bf,	// (0x00050658) list_single_number_heading_pane_t2_ParamLimits

0xf4bf,	// (0x00050658) list_single_number_heading_pane_t2

0xf4d1,	// (0x0005066a) list_single_number_heading_pane_t3_ParamLimits

0xf4d1,	// (0x0005066a) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0005074b) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0005074b) list_single_number_heading_pane_t

0xf4e3,	// (0x0005067c) list_single_graphic_heading_pane_g1_ParamLimits

0xf4e3,	// (0x0005067c) list_single_graphic_heading_pane_g1

0xc2a5,	// (0x0004d43e) list_single_graphic_heading_pane_g4_ParamLimits

0xc2a5,	// (0x0004d43e) list_single_graphic_heading_pane_g4

0x1015,	// (0x000421ae) list_single_graphic_heading_pane_g5_ParamLimits

0x1015,	// (0x000421ae) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00050752) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00050752) list_single_graphic_heading_pane_g

0xf4a9,	// (0x00050642) list_single_graphic_heading_pane_t1_ParamLimits

0xf4a9,	// (0x00050642) list_single_graphic_heading_pane_t1

0x1044,	// (0x000421dd) list_single_graphic_heading_pane_t2_ParamLimits

0x1044,	// (0x000421dd) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00050759) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00050759) list_single_graphic_heading_pane_t

0x213e,	// (0x000432d7) list_single_large_graphic_pane_g1_ParamLimits

0x213e,	// (0x000432d7) list_single_large_graphic_pane_g1

0x44b8,	// (0x00045651) list_single_large_graphic_pane_g2_ParamLimits

0x44b8,	// (0x00045651) list_single_large_graphic_pane_g2

0x1015,	// (0x000421ae) list_single_large_graphic_pane_g3_ParamLimits

0x1015,	// (0x000421ae) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0005075e) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0005075e) list_single_large_graphic_pane_g

0x57d6,	// (0x0004696f) wait_border_pane_g2_copy1

0xc2b6,	// (0x0004d44f) list_single_large_graphic_pane_g4_cp2

0x06bb,	// (0x00041854) list_single_large_graphic_pane_t1_ParamLimits

0x06bb,	// (0x00041854) list_single_large_graphic_pane_t1

0x3c51,	// (0x00044dea) list_double_pane_g1_ParamLimits

0x3c51,	// (0x00044dea) list_double_pane_g1

0x1089,	// (0x00042222) list_double_pane_g2_ParamLimits

0x1089,	// (0x00042222) list_double_pane_g2

0x0001,

0xf5cc,	// (0x00050765) list_double_pane_g_ParamLimits

0xf5cc,	// (0x00050765) list_double_pane_g

0xb6cb,	// (0x0004c864) list_double_pane_t1_ParamLimits

0xb6cb,	// (0x0004c864) list_double_pane_t1

0xb6e1,	// (0x0004c87a) list_double_pane_t2_ParamLimits

0xb6e1,	// (0x0004c87a) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0005076a) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0005076a) list_double_pane_t

0xb6f3,	// (0x0004c88c) list_double2_pane_g1_ParamLimits

0xb6f3,	// (0x0004c88c) list_double2_pane_g1

0x004d,	// (0x000411e6) list_double2_pane_g2_ParamLimits

0x004d,	// (0x000411e6) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0005076f) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0005076f) list_double2_pane_g

0xb704,	// (0x0004c89d) list_double2_pane_t1_ParamLimits

0xb704,	// (0x0004c89d) list_double2_pane_t1

0xb71a,	// (0x0004c8b3) list_double2_pane_t2_ParamLimits

0xb71a,	// (0x0004c8b3) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00050774) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00050774) list_double2_pane_t

0x3c51,	// (0x00044dea) list_double_number_pane_g1_ParamLimits

0x3c51,	// (0x00044dea) list_double_number_pane_g1

0x1089,	// (0x00042222) list_double_number_pane_g2_ParamLimits

0x1089,	// (0x00042222) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x00050765) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x00050765) list_double_number_pane_g

0xb72c,	// (0x0004c8c5) list_double_number_pane_t1_ParamLimits

0xb72c,	// (0x0004c8c5) list_double_number_pane_t1

0xf4ef,	// (0x00050688) list_double_number_pane_t2_ParamLimits

0xf4ef,	// (0x00050688) list_double_number_pane_t2

0xb73e,	// (0x0004c8d7) list_double_number_pane_t3_ParamLimits

0xb73e,	// (0x0004c8d7) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00050779) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00050779) list_double_number_pane_t

0xf505,	// (0x0005069e) list_double_graphic_pane_g1_ParamLimits

0xf505,	// (0x0005069e) list_double_graphic_pane_g1

0xb750,	// (0x0004c8e9) list_double_graphic_pane_g2_ParamLimits

0xb750,	// (0x0004c8e9) list_double_graphic_pane_g2

0xb75f,	// (0x0004c8f8) list_double_graphic_pane_g3_ParamLimits

0xb75f,	// (0x0004c8f8) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00050780) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00050780) list_double_graphic_pane_g

0xb777,	// (0x0004c910) list_double_graphic_pane_t1_ParamLimits

0xb777,	// (0x0004c910) list_double_graphic_pane_t1

0xb78d,	// (0x0004c926) list_double_graphic_pane_t2_ParamLimits

0xb78d,	// (0x0004c926) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00050789) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00050789) list_double_graphic_pane_t

0xb79f,	// (0x0004c938) list_double2_graphic_pane_g1_ParamLimits

0xb79f,	// (0x0004c938) list_double2_graphic_pane_g1

0x67db,	// (0x00047974) list_double2_graphic_pane_g2_ParamLimits

0x67db,	// (0x00047974) list_double2_graphic_pane_g2

0xb7ab,	// (0x0004c944) list_double2_graphic_pane_g3_ParamLimits

0xb7ab,	// (0x0004c944) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0005078e) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0005078e) list_double2_graphic_pane_g

0xb7b7,	// (0x0004c950) list_double2_graphic_pane_t1_ParamLimits

0xb7b7,	// (0x0004c950) list_double2_graphic_pane_t1

0xb7cd,	// (0x0004c966) list_double2_graphic_pane_t2_ParamLimits

0xb7cd,	// (0x0004c966) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00050795) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00050795) list_double2_graphic_pane_t

0xb7df,	// (0x0004c978) list_double_large_graphic_pane_g1_ParamLimits

0xb7df,	// (0x0004c978) list_double_large_graphic_pane_g1

0xb7fe,	// (0x0004c997) list_double_large_graphic_pane_g2_ParamLimits

0xb7fe,	// (0x0004c997) list_double_large_graphic_pane_g2

0x1089,	// (0x00042222) list_double_large_graphic_pane_g3_ParamLimits

0x1089,	// (0x00042222) list_double_large_graphic_pane_g3

0xb814,	// (0x0004c9ad) list_double_large_graphic_pane_g4_ParamLimits

0xb814,	// (0x0004c9ad) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0005079a) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0005079a) list_double_large_graphic_pane_g

0xb827,	// (0x0004c9c0) list_double_large_graphic_pane_t1_ParamLimits

0xb827,	// (0x0004c9c0) list_double_large_graphic_pane_t1

0xb840,	// (0x0004c9d9) list_double_large_graphic_pane_t2_ParamLimits

0xb840,	// (0x0004c9d9) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x000507a5) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x000507a5) list_double_large_graphic_pane_t

0xc2be,	// (0x0004d457) list_double2_large_graphic_pane_g1_ParamLimits

0xc2be,	// (0x0004d457) list_double2_large_graphic_pane_g1

0xb852,	// (0x0004c9eb) list_double2_large_graphic_pane_g2_ParamLimits

0xb852,	// (0x0004c9eb) list_double2_large_graphic_pane_g2

0xb7ab,	// (0x0004c944) list_double2_large_graphic_pane_g3_ParamLimits

0xb7ab,	// (0x0004c944) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x000507aa) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x000507aa) list_double2_large_graphic_pane_g

0xb863,	// (0x0004c9fc) list_double2_large_graphic_pane_t1_ParamLimits

0xb863,	// (0x0004c9fc) list_double2_large_graphic_pane_t1

0xb879,	// (0x0004ca12) list_double2_large_graphic_pane_t2_ParamLimits

0xb879,	// (0x0004ca12) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x000507b1) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x000507b1) list_double2_large_graphic_pane_t

0xb88b,	// (0x0004ca24) list_double_heading_pane_g1_ParamLimits

0xb88b,	// (0x0004ca24) list_double_heading_pane_g1

0xb89c,	// (0x0004ca35) list_double_heading_pane_g2_ParamLimits

0xb89c,	// (0x0004ca35) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x000507b6) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x000507b6) list_double_heading_pane_g

0xb8a8,	// (0x0004ca41) list_double_heading_pane_t1_ParamLimits

0xb8a8,	// (0x0004ca41) list_double_heading_pane_t1

0xb71a,	// (0x0004c8b3) list_double_heading_pane_t2_ParamLimits

0xb71a,	// (0x0004c8b3) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x000507bb) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x000507bb) list_double_heading_pane_t

0xf51d,	// (0x000506b6) list_double_graphic_heading_pane_g1_ParamLimits

0xf51d,	// (0x000506b6) list_double_graphic_heading_pane_g1

0xb88b,	// (0x0004ca24) list_double_graphic_heading_pane_g2_ParamLimits

0xb88b,	// (0x0004ca24) list_double_graphic_heading_pane_g2

0xb89c,	// (0x0004ca35) list_double_graphic_heading_pane_g3_ParamLimits

0xb89c,	// (0x0004ca35) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x000507c0) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x000507c0) list_double_graphic_heading_pane_g

0xb8be,	// (0x0004ca57) list_double_graphic_heading_pane_t1_ParamLimits

0xb8be,	// (0x0004ca57) list_double_graphic_heading_pane_t1

0xb7cd,	// (0x0004c966) list_double_graphic_heading_pane_t2_ParamLimits

0xb7cd,	// (0x0004c966) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x000507c7) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x000507c7) list_double_graphic_heading_pane_t

0xb8d4,	// (0x0004ca6d) list_double_time_pane_g1_ParamLimits

0xb8d4,	// (0x0004ca6d) list_double_time_pane_g1

0xf511,	// (0x000506aa) list_double_time_pane_g2_ParamLimits

0xf511,	// (0x000506aa) list_double_time_pane_g2

0x0001,

0xf633,	// (0x000507cc) list_double_time_pane_g_ParamLimits

0xf633,	// (0x000507cc) list_double_time_pane_g

0xb8e5,	// (0x0004ca7e) list_double_time_pane_t1_ParamLimits

0xb8e5,	// (0x0004ca7e) list_double_time_pane_t1

0xb8fb,	// (0x0004ca94) list_double_time_pane_t2_ParamLimits

0xb8fb,	// (0x0004ca94) list_double_time_pane_t2

0xb90d,	// (0x0004caa6) list_double_time_pane_t3_ParamLimits

0xb90d,	// (0x0004caa6) list_double_time_pane_t3

0xb91f,	// (0x0004cab8) list_double_time_pane_t4_ParamLimits

0xb91f,	// (0x0004cab8) list_double_time_pane_t4

0x0003,

0xf638,	// (0x000507d1) list_double_time_pane_t_ParamLimits

0xf638,	// (0x000507d1) list_double_time_pane_t

0x0041,	// (0x000411da) list_setting_pane_g1_ParamLimits

0x0041,	// (0x000411da) list_setting_pane_g1

0x004d,	// (0x000411e6) list_setting_pane_g2_ParamLimits

0x004d,	// (0x000411e6) list_setting_pane_g2

0x0001,

0xf641,	// (0x000507da) list_setting_pane_g_ParamLimits

0xf641,	// (0x000507da) list_setting_pane_g

0xb931,	// (0x0004caca) list_setting_pane_t1_ParamLimits

0xb931,	// (0x0004caca) list_setting_pane_t1

0xb94b,	// (0x0004cae4) list_setting_pane_t2_ParamLimits

0xb94b,	// (0x0004cae4) list_setting_pane_t2

0x0002,

0xf646,	// (0x000507df) list_setting_pane_t_ParamLimits

0xf646,	// (0x000507df) list_setting_pane_t

0xb98a,	// (0x0004cb23) set_value_pane_cp_ParamLimits

0xb98a,	// (0x0004cb23) set_value_pane_cp

0x00be,	// (0x00041257) list_setting_number_pane_g1_ParamLimits

0x00be,	// (0x00041257) list_setting_number_pane_g1

0x00ca,	// (0x00041263) list_setting_number_pane_g2_ParamLimits

0x00ca,	// (0x00041263) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x000507e6) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x000507e6) list_setting_number_pane_g

0xb996,	// (0x0004cb2f) list_setting_number_pane_t1_ParamLimits

0xb996,	// (0x0004cb2f) list_setting_number_pane_t1

0xb9af,	// (0x0004cb48) list_setting_number_pane_t2_ParamLimits

0xb9af,	// (0x0004cb48) list_setting_number_pane_t2

0xb9c9,	// (0x0004cb62) list_setting_number_pane_t3_ParamLimits

0xb9c9,	// (0x0004cb62) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x000507eb) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x000507eb) list_setting_number_pane_t

0xb98a,	// (0x0004cb23) set_value_pane_ParamLimits

0xb98a,	// (0x0004cb23) set_value_pane

0x3c5d,	// (0x00044df6) bg_set_opt_pane_ParamLimits

0x3c5d,	// (0x00044df6) bg_set_opt_pane

0x014c,	// (0x000412e5) set_value_pane_t1

0x3c7e,	// (0x00044e17) slider_set_pane_cp3

0x3c87,	// (0x00044e20) volume_small_pane_cp

0x3c90,	// (0x00044e29) list_form_gen_pane

0x3c99,	// (0x00044e32) scroll_pane_cp8

0xba0c,	// (0x0004cba5) form_field_data_pane_ParamLimits

0xba0c,	// (0x0004cba5) form_field_data_pane

0xba25,	// (0x0004cbbe) form_field_data_wide_pane_ParamLimits

0xba25,	// (0x0004cbbe) form_field_data_wide_pane

0xba45,	// (0x0004cbde) form_field_popup_pane_ParamLimits

0xba45,	// (0x0004cbde) form_field_popup_pane

0xba5d,	// (0x0004cbf6) form_field_popup_wide_pane_ParamLimits

0xba5d,	// (0x0004cbf6) form_field_popup_wide_pane

0x01e8,	// (0x00041381) form_field_slider_pane_ParamLimits

0x01e8,	// (0x00041381) form_field_slider_pane

0x01fb,	// (0x00041394) form_field_slider_wide_pane_ParamLimits

0x01fb,	// (0x00041394) form_field_slider_wide_pane

0x3caa,	// (0x00044e43) data_form_pane

0xba86,	// (0x0004cc1f) form_field_data_pane_t1

0x3cb6,	// (0x00044e4f) input_focus_pane

0x0230,	// (0x000413c9) data_form_wide_pane

0x024d,	// (0x000413e6) form_field_data_wide_pane_t1

0x3a1b,	// (0x00044bb4) input_focus_pane_cp6

0xbaa0,	// (0x0004cc39) form_field_popup_pane_t1

0x3cb6,	// (0x00044e4f) input_focus_pane_cp7

0x3cd8,	// (0x00044e71) list_form_pane

0x028f,	// (0x00041428) form_field_popup_wide_pane_t1

0x3cb6,	// (0x00044e4f) input_focus_pane_cp8

0x3ce4,	// (0x00044e7d) list_form_wide_pane

0xbac2,	// (0x0004cc5b) form_field_slider_pane_t1_ParamLimits

0xbac2,	// (0x0004cc5b) form_field_slider_pane_t1

0xbada,	// (0x0004cc73) form_field_slider_pane_t2_ParamLimits

0xbada,	// (0x0004cc73) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x000507fb) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x000507fb) form_field_slider_pane_t

0x3698,	// (0x00044831) input_focus_pane_cp9_ParamLimits

0x3698,	// (0x00044831) input_focus_pane_cp9

0xbaef,	// (0x0004cc88) slider_cont_pane_ParamLimits

0xbaef,	// (0x0004cc88) slider_cont_pane

0x3cf0,	// (0x00044e89) form_field_slider_wide_pane_t1_ParamLimits

0x3cf0,	// (0x00044e89) form_field_slider_wide_pane_t1

0x02eb,	// (0x00041484) form_field_slider_wide_pane_t2_ParamLimits

0x02eb,	// (0x00041484) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00050800) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00050800) form_field_slider_wide_pane_t

0x3698,	// (0x00044831) input_focus_pane_cp10_ParamLimits

0x3698,	// (0x00044831) input_focus_pane_cp10

0xbb03,	// (0x0004cc9c) slider_cont_pane_cp1_ParamLimits

0xbb03,	// (0x0004cc9c) slider_cont_pane_cp1

0xbb17,	// (0x0004ccb0) slider_form_pane_cp

0x3d02,	// (0x00044e9b) input_focus_pane_g1

0x3d0a,	// (0x00044ea3) input_focus_pane_g2

0x3d12,	// (0x00044eab) input_focus_pane_g3

0x3d1a,	// (0x00044eb3) input_focus_pane_g4

0x3d22,	// (0x00044ebb) input_focus_pane_g5

0x3d2a,	// (0x00044ec3) input_focus_pane_g6

0x3d32,	// (0x00044ecb) input_focus_pane_g7

0x3d3a,	// (0x00044ed3) input_focus_pane_g8

0x3d42,	// (0x00044edb) input_focus_pane_g9

0xe26d,	// (0x0004f406) input_focus_pane_g10

0x0009,

0xf66c,	// (0x00050805) input_focus_pane_g

0x57df,	// (0x00046978) wait_border_pane_g3_copy1

0xbb1f,	// (0x0004ccb8) data_form_pane_t1

0xe26d,	// (0x0004f406) wait_anim_pane_g1_copy1

0xbb88,	// (0x0004cd21) data_form_wide_pane_t1

0xbb39,	// (0x0004ccd2) list_form_graphic_pane_cp_ParamLimits

0xbb39,	// (0x0004ccd2) list_form_graphic_pane_cp

0x66ff,	// (0x00047898) slider_form_pane_g1

0x6708,	// (0x000478a1) slider_form_pane_g2

0x0006,

0xf96a,	// (0x00050b03) slider_form_pane_g

0xbb39,	// (0x0004ccd2) list_form_graphic_pane_ParamLimits

0xbb39,	// (0x0004ccd2) list_form_graphic_pane

0x0369,	// (0x00041502) list_form_graphic_pane_g1

0x0371,	// (0x0004150a) list_form_graphic_pane_t1_ParamLimits

0x0371,	// (0x0004150a) list_form_graphic_pane_t1

0x341d,	// (0x000445b6) list_highlight_pane_cp5_ParamLimits

0x341d,	// (0x000445b6) list_highlight_pane_cp5

0x0386,	// (0x0004151f) find_pane_g1

0x3d4a,	// (0x00044ee3) input_find_pane

0x038f,	// (0x00041528) input_find_pane_g1_ParamLimits

0x038f,	// (0x00041528) input_find_pane_g1

0x039b,	// (0x00041534) input_find_pane_t1_ParamLimits

0x039b,	// (0x00041534) input_find_pane_t1

0x03b0,	// (0x00041549) input_find_pane_t2_ParamLimits

0x03b0,	// (0x00041549) input_find_pane_t2

0x0001,

0xf681,	// (0x0005081a) input_find_pane_t_ParamLimits

0xf681,	// (0x0005081a) input_find_pane_t

0x3d53,	// (0x00044eec) input_focus_pane_cp5_ParamLimits

0x3d53,	// (0x00044eec) input_focus_pane_cp5

0x3d72,	// (0x00044f0b) bg_popup_window_pane_cp2_ParamLimits

0x3d72,	// (0x00044f0b) bg_popup_window_pane_cp2

0x3d7f,	// (0x00044f18) listscroll_menu_pane_ParamLimits

0x3d7f,	// (0x00044f18) listscroll_menu_pane

0xd30a,	// (0x0004e4a3) popup_submenu_window_ParamLimits

0xd30a,	// (0x0004e4a3) popup_submenu_window

0x3db7,	// (0x00044f50) find_popup_pane_g1

0x3dbf,	// (0x00044f58) input_popup_find_pane_cp

0x3dc9,	// (0x00044f62) input_focus_pane_cp4_ParamLimits

0x3dc9,	// (0x00044f62) input_focus_pane_cp4

0x3de3,	// (0x00044f7c) input_popup_find_pane_t1_ParamLimits

0x3de3,	// (0x00044f7c) input_popup_find_pane_t1

0x333d,	// (0x000444d6) bg_popup_sub_pane_cp

0x3e11,	// (0x00044faa) listscroll_popup_sub_pane

0x3e19,	// (0x00044fb2) list_submenu_pane_ParamLimits

0x3e19,	// (0x00044fb2) list_submenu_pane

0x3e2a,	// (0x00044fc3) scroll_pane_cp4

0x3e32,	// (0x00044fcb) list_single_popup_submenu_pane_ParamLimits

0x3e32,	// (0x00044fcb) list_single_popup_submenu_pane

0x3e46,	// (0x00044fdf) list_single_popup_submenu_pane_g1

0x3e4e,	// (0x00044fe7) list_single_popup_submenu_pane_t1_ParamLimits

0x3e4e,	// (0x00044fe7) list_single_popup_submenu_pane_t1

0x3698,	// (0x00044831) bg_active_tab_pane_cp1_ParamLimits

0x3698,	// (0x00044831) bg_active_tab_pane_cp1

0x3e63,	// (0x00044ffc) tabs_2_active_pane_g1

0xd344,	// (0x0004e4dd) tabs_2_active_pane_t1

0x3698,	// (0x00044831) bg_passive_tab_pane_cp1_ParamLimits

0x3698,	// (0x00044831) bg_passive_tab_pane_cp1

0x3e63,	// (0x00044ffc) tabs_2_passive_pane_g1

0xd344,	// (0x0004e4dd) tabs_2_passive_pane_t1

0x341d,	// (0x000445b6) bg_active_tab_pane_cp4

0xd356,	// (0x0004e4ef) tabs_2_long_active_pane_t1

0x4c90,	// (0x00045e29) bg_passive_tab_pane_cp4

0x1cdf,	// (0x00042e78) list_single_midp_graphic_pane_g4_ParamLimits

0x341d,	// (0x000445b6) bg_active_tab_pane_cp5

0xd369,	// (0x0004e502) tabs_3_long_active_pane_t1

0x4c90,	// (0x00045e29) bg_passive_tab_pane_cp5

0x1cdf,	// (0x00042e78) list_single_midp_graphic_pane_g4

0x341d,	// (0x000445b6) bg_popup_window_pane_cp13_ParamLimits

0x341d,	// (0x000445b6) bg_popup_window_pane_cp13

0x3ec5,	// (0x0004505e) listscroll_popup_fast_pane_ParamLimits

0x3ec5,	// (0x0004505e) listscroll_popup_fast_pane

0x3ed4,	// (0x0004506d) grid_popup_fast_pane_ParamLimits

0x3ed4,	// (0x0004506d) grid_popup_fast_pane

0x3ee6,	// (0x0004507f) scroll_pane_cp9_ParamLimits

0x3ee6,	// (0x0004507f) scroll_pane_cp9

0x8028,	// (0x000491c1) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8028,	// (0x000491c1) list_single_graphic_hl_pane_t1_cp2

0x3f0a,	// (0x000450a3) input_focus_pane_cp20_ParamLimits

0x3f0a,	// (0x000450a3) input_focus_pane_cp20

0x3f18,	// (0x000450b1) query_popup_data_pane_t1_ParamLimits

0x3f18,	// (0x000450b1) query_popup_data_pane_t1

0x3f2b,	// (0x000450c4) query_popup_data_pane_t2_ParamLimits

0x3f2b,	// (0x000450c4) query_popup_data_pane_t2

0x3f71,	// (0x0004510a) query_popup_data_pane_t3_ParamLimits

0x3f71,	// (0x0004510a) query_popup_data_pane_t3

0x3fb2,	// (0x0004514b) query_popup_data_pane_t4_ParamLimits

0x3fb2,	// (0x0004514b) query_popup_data_pane_t4

0x3fee,	// (0x00045187) query_popup_data_pane_t5_ParamLimits

0x3fee,	// (0x00045187) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0005081f) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0005081f) query_popup_data_pane_t

0x3d02,	// (0x00044e9b) bg_set_opt_pane_g1

0x3d0a,	// (0x00044ea3) bg_set_opt_pane_g2

0x3d12,	// (0x00044eab) bg_set_opt_pane_g3

0x3d1a,	// (0x00044eb3) bg_set_opt_pane_g4

0x3d22,	// (0x00044ebb) bg_set_opt_pane_g5

0x3d2a,	// (0x00044ec3) bg_set_opt_pane_g6

0x3d32,	// (0x00044ecb) bg_set_opt_pane_g7

0x3d3a,	// (0x00044ed3) bg_set_opt_pane_g8

0x3d42,	// (0x00044edb) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0005082a) bg_set_opt_pane_g

0x1363,	// (0x000424fc) control_top_pane_stacon_ParamLimits

0x1363,	// (0x000424fc) control_top_pane_stacon

0x13b6,	// (0x0004254f) signal_pane_stacon_ParamLimits

0x13b6,	// (0x0004254f) signal_pane_stacon

0x4605,	// (0x0004579e) stacon_top_pane_g1_ParamLimits

0x4605,	// (0x0004579e) stacon_top_pane_g1

0x13db,	// (0x00042574) title_pane_stacon_ParamLimits

0x13db,	// (0x00042574) title_pane_stacon

0x1405,	// (0x0004259e) uni_indicator_pane_stacon_ParamLimits

0x1405,	// (0x0004259e) uni_indicator_pane_stacon

0x141a,	// (0x000425b3) battery_pane_stacon_ParamLimits

0x141a,	// (0x000425b3) battery_pane_stacon

0x145e,	// (0x000425f7) control_bottom_pane_stacon_ParamLimits

0x145e,	// (0x000425f7) control_bottom_pane_stacon

0x1481,	// (0x0004261a) navi_pane_stacon_ParamLimits

0x1481,	// (0x0004261a) navi_pane_stacon

0x4627,	// (0x000457c0) stacon_bottom_pane_g1_ParamLimits

0x4627,	// (0x000457c0) stacon_bottom_pane_g1

0x10aa,	// (0x00042243) aid_levels_signal_lsc_ParamLimits

0x10aa,	// (0x00042243) aid_levels_signal_lsc

0x10c0,	// (0x00042259) signal_pane_stacon_g1_ParamLimits

0x10c0,	// (0x00042259) signal_pane_stacon_g1

0x10d4,	// (0x0004226d) signal_pane_stacon_g2_ParamLimits

0x10d4,	// (0x0004226d) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x0005083d) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0005083d) signal_pane_stacon_g

0x1109,	// (0x000422a2) title_pane_stacon_t1_ParamLimits

0x1109,	// (0x000422a2) title_pane_stacon_t1

0x4032,	// (0x000451cb) uni_indicator_pane_stacon_g1

0x403c,	// (0x000451d5) uni_indicator_pane_stacon_g2

0x4046,	// (0x000451df) uni_indicator_pane_stacon_g3

0x4050,	// (0x000451e9) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00050849) uni_indicator_pane_stacon_g

0x112e,	// (0x000422c7) control_top_pane_stacon_g1

0x1136,	// (0x000422cf) control_top_pane_stacon_t1_ParamLimits

0x1136,	// (0x000422cf) control_top_pane_stacon_t1

0x116d,	// (0x00042306) aid_levels_battery_lsc_ParamLimits

0x116d,	// (0x00042306) aid_levels_battery_lsc

0x1184,	// (0x0004231d) battery_pane_stacon_g1_ParamLimits

0x1184,	// (0x0004231d) battery_pane_stacon_g1

0x1197,	// (0x00042330) battery_pane_stacon_g2_ParamLimits

0x1197,	// (0x00042330) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x00050852) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x00050852) battery_pane_stacon_g

0x11d5,	// (0x0004236e) navi_icon_pane_stacon

0x11e9,	// (0x00042382) navi_navi_pane_stacon

0x11d5,	// (0x0004236e) navi_text_pane_stacon

0x112e,	// (0x000422c7) control_bottom_pane_stacon_g1

0x11fd,	// (0x00042396) control_bottom_pane_stacon_t1_ParamLimits

0x11fd,	// (0x00042396) control_bottom_pane_stacon_t1

0xd37b,	// (0x0004e514) grid_app_pane_ParamLimits

0xd37b,	// (0x0004e514) grid_app_pane

0xd3b3,	// (0x0004e54c) scroll_pane_cp15_ParamLimits

0xd3b3,	// (0x0004e54c) scroll_pane_cp15

0xd3c8,	// (0x0004e561) cell_app_pane_ParamLimits

0xd3c8,	// (0x0004e561) cell_app_pane

0xd40d,	// (0x0004e5a6) cell_app_pane_g1_ParamLimits

0xd40d,	// (0x0004e5a6) cell_app_pane_g1

0x40f5,	// (0x0004528e) cell_app_pane_g2_ParamLimits

0x40f5,	// (0x0004528e) cell_app_pane_g2

0x0001,

0xf6be,	// (0x00050857) cell_app_pane_g_ParamLimits

0xf6be,	// (0x00050857) cell_app_pane_g

0xd431,	// (0x0004e5ca) cell_app_pane_t1_ParamLimits

0xd431,	// (0x0004e5ca) cell_app_pane_t1

0x4118,	// (0x000452b1) grid_highlight_pane_ParamLimits

0x4118,	// (0x000452b1) grid_highlight_pane

0x3d02,	// (0x00044e9b) cell_highlight_pane_g1

0x3d0a,	// (0x00044ea3) cell_highlight_pane_g2

0x3d12,	// (0x00044eab) cell_highlight_pane_g3

0x3d1a,	// (0x00044eb3) cell_highlight_pane_g4

0x3d22,	// (0x00044ebb) cell_highlight_pane_g5

0x3d2a,	// (0x00044ec3) cell_highlight_pane_g6

0x3d32,	// (0x00044ecb) cell_highlight_pane_g7

0x3d3a,	// (0x00044ed3) cell_highlight_pane_g8

0x3d42,	// (0x00044edb) cell_highlight_pane_g9

0xe26d,	// (0x0004f406) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x00050805) cell_highlight_pane_g

0x4129,	// (0x000452c2) bg_scroll_pane

0x1247,	// (0x000423e0) scroll_handle_pane

0x4170,	// (0x00045309) scroll_bg_pane_g1

0x4185,	// (0x0004531e) scroll_bg_pane_g2

0x419d,	// (0x00045336) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x0005085c) scroll_bg_pane_g

0x41b2,	// (0x0004534b) scroll_handle_focus_pane_ParamLimits

0x41b2,	// (0x0004534b) scroll_handle_focus_pane

0x4170,	// (0x00045309) scroll_handle_pane_g1

0x41bf,	// (0x00045358) scroll_handle_pane_g2

0x419d,	// (0x00045336) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x00050863) scroll_handle_pane_g

0x3dc9,	// (0x00044f62) bg_popup_sub_pane_cp21_ParamLimits

0x3dc9,	// (0x00044f62) bg_popup_sub_pane_cp21

0x41d3,	// (0x0004536c) popup_fep_japan_predictive_window_t1_ParamLimits

0x41d3,	// (0x0004536c) popup_fep_japan_predictive_window_t1

0x41ed,	// (0x00045386) popup_fep_japan_predictive_window_t2_ParamLimits

0x41ed,	// (0x00045386) popup_fep_japan_predictive_window_t2

0x4220,	// (0x000453b9) popup_fep_japan_predictive_window_t3_ParamLimits

0x4220,	// (0x000453b9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0005086a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0005086a) popup_fep_japan_predictive_window_t

0x333d,	// (0x000444d6) bg_popup_sub_pane_cp23

0x4257,	// (0x000453f0) listscroll_japin_cand_pane

0x425f,	// (0x000453f8) popup_fep_japan_candidate_window_t1

0x426d,	// (0x00045406) candidate_pane_ParamLimits

0x426d,	// (0x00045406) candidate_pane

0x427f,	// (0x00045418) scroll_pane_cp30

0x4287,	// (0x00045420) list_single_popup_jap_candidate_pane_ParamLimits

0x4287,	// (0x00045420) list_single_popup_jap_candidate_pane

0x333d,	// (0x000444d6) list_highlight_pane_cp30

0x429c,	// (0x00045435) list_single_popup_jap_candidate_pane_t1

0x42ab,	// (0x00045444) level_1_signal

0x42bd,	// (0x00045456) level_2_signal

0x42d0,	// (0x00045469) level_3_signal

0x42e3,	// (0x0004547c) level_4_signal

0x42f6,	// (0x0004548f) level_5_signal

0x4309,	// (0x000454a2) level_6_signal

0x431c,	// (0x000454b5) level_7_signal

0x42ab,	// (0x00045444) level_1_battery

0x42bd,	// (0x00045456) level_2_battery

0x42d0,	// (0x00045469) level_3_battery

0x42e3,	// (0x0004547c) level_4_battery

0x42f6,	// (0x0004548f) level_5_battery

0x4309,	// (0x000454a2) level_6_battery

0x431c,	// (0x000454b5) level_7_battery

0x4347,	// (0x000454e0) list_menu_pane_ParamLimits

0x4347,	// (0x000454e0) list_menu_pane

0x435d,	// (0x000454f6) scroll_pane_cp25_ParamLimits

0x435d,	// (0x000454f6) scroll_pane_cp25

0x4376,	// (0x0004550f) list_double2_graphic_pane_cp2_ParamLimits

0x4376,	// (0x0004550f) list_double2_graphic_pane_cp2

0x4376,	// (0x0004550f) list_double2_large_graphic_pane_cp2_ParamLimits

0x4376,	// (0x0004550f) list_double2_large_graphic_pane_cp2

0x4376,	// (0x0004550f) list_double2_pane_cp2_ParamLimits

0x4376,	// (0x0004550f) list_double2_pane_cp2

0x4376,	// (0x0004550f) list_double_graphic_pane_cp2_ParamLimits

0x4376,	// (0x0004550f) list_double_graphic_pane_cp2

0x4376,	// (0x0004550f) list_double_large_graphic_pane_cp2_ParamLimits

0x4376,	// (0x0004550f) list_double_large_graphic_pane_cp2

0x4376,	// (0x0004550f) list_double_number_pane_cp2_ParamLimits

0x4376,	// (0x0004550f) list_double_number_pane_cp2

0x4376,	// (0x0004550f) list_double_pane_cp2_ParamLimits

0x4376,	// (0x0004550f) list_double_pane_cp2

0xd448,	// (0x0004e5e1) list_single_2graphic_pane_cp2_ParamLimits

0xd448,	// (0x0004e5e1) list_single_2graphic_pane_cp2

0xd448,	// (0x0004e5e1) list_single_graphic_heading_pane_cp2_ParamLimits

0xd448,	// (0x0004e5e1) list_single_graphic_heading_pane_cp2

0xd448,	// (0x0004e5e1) list_single_graphic_pane_cp2_ParamLimits

0xd448,	// (0x0004e5e1) list_single_graphic_pane_cp2

0xd448,	// (0x0004e5e1) list_single_heading_pane_cp2_ParamLimits

0xd448,	// (0x0004e5e1) list_single_heading_pane_cp2

0x43b3,	// (0x0004554c) list_single_large_graphic_pane_cp2_ParamLimits

0x43b3,	// (0x0004554c) list_single_large_graphic_pane_cp2

0xd448,	// (0x0004e5e1) list_single_number_heading_pane_cp2_ParamLimits

0xd448,	// (0x0004e5e1) list_single_number_heading_pane_cp2

0xd448,	// (0x0004e5e1) list_single_number_pane_cp2_ParamLimits

0xd448,	// (0x0004e5e1) list_single_number_pane_cp2

0xd45a,	// (0x0004e5f3) list_single_pane_cp2_ParamLimits

0xd45a,	// (0x0004e5f3) list_single_pane_cp2

0x4448,	// (0x000455e1) bg_popup_sub_pane_cp22

0x12f9,	// (0x00042492) popup_side_volume_key_window_g1

0x1323,	// (0x000424bc) popup_side_volume_key_window_t1

0x133f,	// (0x000424d8) volume_small_pane_cp1

0x3698,	// (0x00044831) bg_popup_sub_pane_cp24_ParamLimits

0x3698,	// (0x00044831) bg_popup_sub_pane_cp24

0x445e,	// (0x000455f7) fep_china_uni_candidate_pane_ParamLimits

0x445e,	// (0x000455f7) fep_china_uni_candidate_pane

0x4472,	// (0x0004560b) fep_china_uni_entry_pane

0x4482,	// (0x0004561b) popup_fep_china_uni_window_g1

0x449e,	// (0x00045637) fep_china_uni_entry_pane_g1

0x44a6,	// (0x0004563f) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x0005089b) fep_china_uni_entry_pane_g

0x44ae,	// (0x00045647) fep_entry_item_pane

0x44c4,	// (0x0004565d) fep_candidate_item_pane

0x44cc,	// (0x00045665) fep_china_uni_candidate_pane_g1

0x44d4,	// (0x0004566d) fep_china_uni_candidate_pane_g2

0x44dc,	// (0x00045675) fep_china_uni_candidate_pane_g3

0x44e4,	// (0x0004567d) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x000508a0) fep_china_uni_candidate_pane_g

0xe26d,	// (0x0004f406) fep_entry_item_pane_g1

0x44ec,	// (0x00045685) fep_entry_item_pane_t1_ParamLimits

0x44ec,	// (0x00045685) fep_entry_item_pane_t1

0x4502,	// (0x0004569b) fep_candidate_item_pane_t1_ParamLimits

0x4502,	// (0x0004569b) fep_candidate_item_pane_t1

0x4517,	// (0x000456b0) fep_candidate_item_pane_t2_ParamLimits

0x4517,	// (0x000456b0) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x000508a9) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x000508a9) fep_candidate_item_pane_t

0x341d,	// (0x000445b6) list_highlight_pane_cp31_ParamLimits

0x341d,	// (0x000445b6) list_highlight_pane_cp31

0x4529,	// (0x000456c2) level_1_signal_lsc

0x4532,	// (0x000456cb) level_2_signal_lsc

0x453b,	// (0x000456d4) level_3_signal_lsc

0x4544,	// (0x000456dd) level_4_signal_lsc

0x454d,	// (0x000456e6) level_5_signal_lsc

0x4556,	// (0x000456ef) level_6_signal_lsc

0x455f,	// (0x000456f8) level_7_signal_lsc

0x455f,	// (0x000456f8) level_1_battery_lsc

0x4568,	// (0x00045701) level_2_battery_lsc

0x4571,	// (0x0004570a) level_3_battery_lsc

0x457a,	// (0x00045713) level_4_battery_lsc

0x4583,	// (0x0004571c) level_5_battery_lsc

0x458c,	// (0x00045725) level_6_battery_lsc

0x4529,	// (0x000456c2) level_7_battery_lsc

0x4595,	// (0x0004572e) scroll_handle_focus_pane_g1

0x459e,	// (0x00045737) scroll_handle_focus_pane_g2

0x45a7,	// (0x00045740) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x000508ae) scroll_handle_focus_pane_g

0x03c5,	// (0x0004155e) list_single_2graphic_pane_g1_ParamLimits

0x03c5,	// (0x0004155e) list_single_2graphic_pane_g1

0xc2a5,	// (0x0004d43e) list_single_2graphic_pane_g2_ParamLimits

0xc2a5,	// (0x0004d43e) list_single_2graphic_pane_g2

0x1015,	// (0x000421ae) list_single_2graphic_pane_g3_ParamLimits

0x1015,	// (0x000421ae) list_single_2graphic_pane_g3

0x03d1,	// (0x0004156a) list_single_2graphic_pane_g4_ParamLimits

0x03d1,	// (0x0004156a) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x000508b5) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x000508b5) list_single_2graphic_pane_g

0x03dd,	// (0x00041576) list_single_2graphic_pane_t1_ParamLimits

0x03dd,	// (0x00041576) list_single_2graphic_pane_t1

0xc2ca,	// (0x0004d463) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc2ca,	// (0x0004d463) list_double2_graphic_large_graphic_pane_g1

0xb852,	// (0x0004c9eb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb852,	// (0x0004c9eb) list_double2_graphic_large_graphic_pane_g2

0xb7ab,	// (0x0004c944) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb7ab,	// (0x0004c944) list_double2_graphic_large_graphic_pane_g3

0x1cdf,	// (0x00042e78) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x1cdf,	// (0x00042e78) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x000508be) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x000508be) list_double2_graphic_large_graphic_pane_g

0xbb4b,	// (0x0004cce4) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbb4b,	// (0x0004cce4) list_double2_graphic_large_graphic_pane_t1

0xbb61,	// (0x0004ccfa) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbb61,	// (0x0004ccfa) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x000508c7) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x000508c7) list_double2_graphic_large_graphic_pane_t

0x46f2,	// (0x0004588b) popup_fast_swap_window_ParamLimits

0x46f2,	// (0x0004588b) popup_fast_swap_window

0x470e,	// (0x000458a7) popup_side_volume_key_window

0x472a,	// (0x000458c3) stacon_top_pane

0x4734,	// (0x000458cd) status_pane_ParamLimits

0x4734,	// (0x000458cd) status_pane

0xd2f4,	// (0x0004e48d) status_small_pane

0x333d,	// (0x000444d6) control_pane

0x333d,	// (0x000444d6) stacon_bottom_pane

0x3c99,	// (0x00044e32) scroll_pane_cp121

0x3c90,	// (0x00044e29) set_content_pane

0x45b0,	// (0x00045749) bg_active_tab_pane_g1_cp1

0x45b9,	// (0x00045752) bg_active_tab_pane_g2_cp1

0x45c2,	// (0x0004575b) bg_active_tab_pane_g3_cp1

0x45b0,	// (0x00045749) bg_passive_tab_pane_g1_cp1

0x45b9,	// (0x00045752) bg_passive_tab_pane_g2_cp1

0x45c2,	// (0x0004575b) bg_passive_tab_pane_g3_cp1

0x45cb,	// (0x00045764) bg_active_tab_pane_g1_cp2

0x45b9,	// (0x00045752) bg_active_tab_pane_g2_cp2

0x45d4,	// (0x0004576d) bg_active_tab_pane_g3_cp2

0x45cb,	// (0x00045764) bg_passive_tab_pane_g1_cp2

0x45b9,	// (0x00045752) bg_passive_tab_pane_g2_cp2

0x45d4,	// (0x0004576d) bg_passive_tab_pane_g3_cp2

0x45dd,	// (0x00045776) bg_active_tab_pane_g1_cp3

0x45b9,	// (0x00045752) bg_active_tab_pane_g2_cp3

0x45e6,	// (0x0004577f) bg_active_tab_pane_g3_cp3

0x45dd,	// (0x00045776) bg_passive_tab_pane_g1_cp3

0x45b9,	// (0x00045752) bg_passive_tab_pane_g2_cp3

0x45e6,	// (0x0004577f) bg_passive_tab_pane_g3_cp3

0x45ef,	// (0x00045788) bg_active_tab_pane_g1_cp4

0x45b9,	// (0x00045752) bg_active_tab_pane_g2_cp4

0x45fa,	// (0x00045793) bg_active_tab_pane_g3_cp4

0x45ef,	// (0x00045788) bg_passive_tab_pane_g1_cp4

0x45b9,	// (0x00045752) bg_passive_tab_pane_g2_cp4

0x45fa,	// (0x00045793) bg_passive_tab_pane_g3_cp4

0x4643,	// (0x000457dc) bg_active_tab_pane_g1_cp5

0x45b9,	// (0x00045752) bg_active_tab_pane_g2_cp5

0x464c,	// (0x000457e5) bg_active_tab_pane_g3_cp5

0x4643,	// (0x000457dc) bg_passive_tab_pane_g1_cp5

0x45b9,	// (0x00045752) bg_passive_tab_pane_g2_cp5

0x464c,	// (0x000457e5) bg_passive_tab_pane_g3_cp5

0x6cfd,	// (0x00047e96) list_set_graphic_pane_ParamLimits

0x6cfd,	// (0x00047e96) list_set_graphic_pane

0x333d,	// (0x000444d6) bg_set_opt_pane_cp4

0x4675,	// (0x0004580e) list_set_graphic_pane_g1_ParamLimits

0x4675,	// (0x0004580e) list_set_graphic_pane_g1

0x4681,	// (0x0004581a) list_set_graphic_pane_g2_ParamLimits

0x4681,	// (0x0004581a) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x000508cc) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x000508cc) list_set_graphic_pane_g

0x0009,

0xfa9c,	// (0x00050c35) volume_small_pane_cp_g

0x46a5,	// (0x0004583e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x46a5,	// (0x0004583e) list_double2_large_graphic_pane_g1_cp2

0x46b1,	// (0x0004584a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x46b1,	// (0x0004584a) list_double2_large_graphic_pane_g2_cp2

0x46c2,	// (0x0004585b) list_double2_large_graphic_pane_g3_cp2

0x46ca,	// (0x00045863) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x46ca,	// (0x00045863) list_double2_large_graphic_pane_t1_cp2

0x46e0,	// (0x00045879) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x46e0,	// (0x00045879) list_double2_large_graphic_pane_t2_cp2

0x62b2,	// (0x0004744b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x62b2,	// (0x0004744b) list_double_large_graphic_pane_g1_cp2

0x62c3,	// (0x0004745c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x62c3,	// (0x0004745c) list_double_large_graphic_pane_g2_cp2

0x4850,	// (0x000459e9) list_double_large_graphic_pane_g3_cp2

0x62d4,	// (0x0004746d) list_double_large_graphic_pane_g4_cp

0x62dc,	// (0x00047475) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x62dc,	// (0x00047475) list_double_large_graphic_pane_t1_cp2

0x62f3,	// (0x0004748c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x62f3,	// (0x0004748c) list_double_large_graphic_pane_t2_cp2

0x4742,	// (0x000458db) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4742,	// (0x000458db) list_double2_graphic_pane_g1_cp2

0x4750,	// (0x000458e9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4750,	// (0x000458e9) list_double2_graphic_pane_g2_cp2

0x4761,	// (0x000458fa) list_double2_graphic_pane_g3_cp2

0x476b,	// (0x00045904) list_double2_graphic_pane_t1_cp2_ParamLimits

0x476b,	// (0x00045904) list_double2_graphic_pane_t1_cp2

0x4781,	// (0x0004591a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4781,	// (0x0004591a) list_double2_graphic_pane_t2_cp2

0x4793,	// (0x0004592c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4793,	// (0x0004592c) list_single_number_heading_pane_g1_cp2

0x479f,	// (0x00045938) list_single_number_heading_pane_g2_cp2

0x47a7,	// (0x00045940) list_single_number_heading_pane_t1_cp2_ParamLimits

0x47a7,	// (0x00045940) list_single_number_heading_pane_t1_cp2

0x47bd,	// (0x00045956) list_single_number_heading_pane_t2_cp2_ParamLimits

0x47bd,	// (0x00045956) list_single_number_heading_pane_t2_cp2

0x47cf,	// (0x00045968) list_single_number_heading_pane_t3_cp2_ParamLimits

0x47cf,	// (0x00045968) list_single_number_heading_pane_t3_cp2

0x4793,	// (0x0004592c) list_single_heading_pane_g1_cp2_ParamLimits

0x4793,	// (0x0004592c) list_single_heading_pane_g1_cp2

0x479f,	// (0x00045938) list_single_heading_pane_g2_cp2

0x47a7,	// (0x00045940) list_single_heading_pane_t1_cp2_ParamLimits

0x47a7,	// (0x00045940) list_single_heading_pane_t1_cp2

0x60ba,	// (0x00047253) list_single_heading_pane_t2_cp2_ParamLimits

0x60ba,	// (0x00047253) list_single_heading_pane_t2_cp2

0x6002,	// (0x0004719b) list_double_graphic_pane_g1_cp2_ParamLimits

0x6002,	// (0x0004719b) list_double_graphic_pane_g1_cp2

0x600e,	// (0x000471a7) list_double_graphic_pane_g2_cp2_ParamLimits

0x600e,	// (0x000471a7) list_double_graphic_pane_g2_cp2

0x601d,	// (0x000471b6) list_double_graphic_pane_g3_cp2

0x6025,	// (0x000471be) list_double_graphic_pane_t1_cp2_ParamLimits

0x6025,	// (0x000471be) list_double_graphic_pane_t1_cp2

0x603b,	// (0x000471d4) list_double_graphic_pane_t2_cp2_ParamLimits

0x603b,	// (0x000471d4) list_double_graphic_pane_t2_cp2

0x4844,	// (0x000459dd) list_double_number_pane_g1_cp2_ParamLimits

0x4844,	// (0x000459dd) list_double_number_pane_g1_cp2

0x4850,	// (0x000459e9) list_double_number_pane_g2_cp2

0x5fc6,	// (0x0004715f) list_double_number_pane_t1_cp2_ParamLimits

0x5fc6,	// (0x0004715f) list_double_number_pane_t1_cp2

0x5fda,	// (0x00047173) list_double_number_pane_t2_cp2_ParamLimits

0x5fda,	// (0x00047173) list_double_number_pane_t2_cp2

0x5ff0,	// (0x00047189) list_double_number_pane_t3_cp2_ParamLimits

0x5ff0,	// (0x00047189) list_double_number_pane_t3_cp2

0x5eaf,	// (0x00047048) list_single_graphic_pane_g1_cp2_ParamLimits

0x5eaf,	// (0x00047048) list_single_graphic_pane_g1_cp2

0x48b1,	// (0x00045a4a) list_single_graphic_pane_g2_cp2_ParamLimits

0x48b1,	// (0x00045a4a) list_single_graphic_pane_g2_cp2

0x48bd,	// (0x00045a56) list_single_graphic_pane_g3_cp2

0x5e85,	// (0x0004701e) list_single_graphic_pane_t1_cp2_ParamLimits

0x5e85,	// (0x0004701e) list_single_graphic_pane_t1_cp2

0x48b1,	// (0x00045a4a) list_single_number_pane_g1_cp2_ParamLimits

0x48b1,	// (0x00045a4a) list_single_number_pane_g1_cp2

0x48bd,	// (0x00045a56) list_single_number_pane_g2_cp2

0x5e85,	// (0x0004701e) list_single_number_pane_t1_cp2_ParamLimits

0x5e85,	// (0x0004701e) list_single_number_pane_t1_cp2

0x5e9b,	// (0x00047034) list_single_number_pane_t2_cp2_ParamLimits

0x5e9b,	// (0x00047034) list_single_number_pane_t2_cp2

0x46b1,	// (0x0004584a) list_double2_pane_g1_cp2_ParamLimits

0x46b1,	// (0x0004584a) list_double2_pane_g1_cp2

0x46c2,	// (0x0004585b) list_double2_pane_g2_cp2

0x481c,	// (0x000459b5) list_double2_pane_t1_cp2_ParamLimits

0x481c,	// (0x000459b5) list_double2_pane_t1_cp2

0x4832,	// (0x000459cb) list_double2_pane_t2_cp2_ParamLimits

0x4832,	// (0x000459cb) list_double2_pane_t2_cp2

0x4844,	// (0x000459dd) list_double_pane_g1_cp2_ParamLimits

0x4844,	// (0x000459dd) list_double_pane_g1_cp2

0x4850,	// (0x000459e9) list_double_pane_g2_cp2

0x4858,	// (0x000459f1) list_double_pane_t1_cp2_ParamLimits

0x4858,	// (0x000459f1) list_double_pane_t1_cp2

0x486e,	// (0x00045a07) list_double_pane_t2_cp2_ParamLimits

0x486e,	// (0x00045a07) list_double_pane_t2_cp2

0x48a1,	// (0x00045a3a) list_single_pane_cp2_g3

0x48b1,	// (0x00045a4a) list_single_pane_g1_cp2_ParamLimits

0x48b1,	// (0x00045a4a) list_single_pane_g1_cp2

0x48bd,	// (0x00045a56) list_single_pane_g2_cp2

0x48c5,	// (0x00045a5e) list_single_pane_t1_cp2_ParamLimits

0x48c5,	// (0x00045a5e) list_single_pane_t1_cp2

0x48dd,	// (0x00045a76) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x48dd,	// (0x00045a76) list_single_large_graphic_pane_g1_cp2

0x44b8,	// (0x00045651) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x44b8,	// (0x00045651) list_single_large_graphic_pane_g2_cp2

0x48e9,	// (0x00045a82) list_single_large_graphic_pane_g3_cp2

0x48f1,	// (0x00045a8a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x48f1,	// (0x00045a8a) list_single_large_graphic_pane_g4_cp1

0x490b,	// (0x00045aa4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x490b,	// (0x00045aa4) list_single_large_graphic_pane_t1_cp2

0x5e51,	// (0x00046fea) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5e51,	// (0x00046fea) list_single_graphic_heading_pane_g1_cp2

0x5e1e,	// (0x00046fb7) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5e1e,	// (0x00046fb7) list_single_graphic_heading_pane_g4_cp2

0x48bd,	// (0x00045a56) list_single_graphic_heading_pane_g5_cp2

0x5e5d,	// (0x00046ff6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5e5d,	// (0x00046ff6) list_single_graphic_heading_pane_t1_cp2

0x5e73,	// (0x0004700c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5e73,	// (0x0004700c) list_single_graphic_heading_pane_t2_cp2

0x5e12,	// (0x00046fab) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5e12,	// (0x00046fab) list_single_2graphic_pane_g1_cp2

0x5e1e,	// (0x00046fb7) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5e1e,	// (0x00046fb7) list_single_2graphic_pane_g2_cp2

0x48bd,	// (0x00045a56) list_single_2graphic_pane_g3_cp2

0x5e2f,	// (0x00046fc8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5e2f,	// (0x00046fc8) list_single_2graphic_pane_g4_cp2

0x5e3b,	// (0x00046fd4) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5e3b,	// (0x00046fd4) list_single_2graphic_pane_t1_cp2

0xe26d,	// (0x0004f406) list_highlight_pane_g10_cp1

0x59ea,	// (0x00046b83) list_highlight_pane_g1_cp1

0x59f2,	// (0x00046b8b) list_highlight_pane_g2_cp1

0x59fa,	// (0x00046b93) list_highlight_pane_g3_cp1

0x5a02,	// (0x00046b9b) list_highlight_pane_g4_cp1

0x5a0a,	// (0x00046ba3) list_highlight_pane_g5_cp1

0x5a12,	// (0x00046bab) list_highlight_pane_g6_cp1

0x5a1a,	// (0x00046bb3) list_highlight_pane_g7_cp1

0x5a22,	// (0x00046bbb) list_highlight_pane_g8_cp1

0x5a2a,	// (0x00046bc3) list_highlight_pane_g9_cp1

0xdaa5,	// (0x0004ec3e) form_field_slider_pane_t3

0xdab3,	// (0x0004ec4c) form_field_slider_pane_t4

0x5926,	// (0x00046abf) slider_form_pane_ParamLimits

0x5926,	// (0x00046abf) slider_form_pane

0x333d,	// (0x000444d6) control_abbreviations

0x333d,	// (0x000444d6) control_conventions

0x333d,	// (0x000444d6) control_definitions

0x333d,	// (0x000444d6) format_table_attribute

0x6104,	// (0x0004729d) bg_popup_preview_window_pane_g9

0x333d,	// (0x000444d6) format_table_data2

0x333d,	// (0x000444d6) format_table_data3

0x333d,	// (0x000444d6) format_table_data_example

0x0008,

0x333d,	// (0x000444d6) intro_purpose

0xf8ca,	// (0x00050a63) bg_popup_preview_window_pane_g

0x333d,	// (0x000444d6) texts_category

0x333d,	// (0x000444d6) texts_graphics

0x4921,	// (0x00045aba) text_digital

0x4930,	// (0x00045ac9) text_primary

0x493f,	// (0x00045ad8) text_primary_small

0x494e,	// (0x00045ae7) text_secondary

0x495d,	// (0x00045af6) text_title

0x6831,	// (0x000479ca) bg_passive_tab_pane_g1_cp3_srt

0x45b9,	// (0x00045752) bg_passive_tab_pane_g2_cp3_srt

0x683a,	// (0x000479d3) bg_passive_tab_pane_g3_cp3_srt

0x3698,	// (0x00044831) bg_active_tab_pane_cp3_srt_ParamLimits

0x3698,	// (0x00044831) bg_active_tab_pane_cp3_srt

0x6843,	// (0x000479dc) tabs_4_active_pane_srt_g1

0xdde5,	// (0x0004ef7e) tabs_4_active_pane_srt_t1_ParamLimits

0xdde5,	// (0x0004ef7e) tabs_4_active_pane_srt_t1

0x6831,	// (0x000479ca) bg_active_tab_pane_g1_cp3_copy1

0x45b9,	// (0x00045752) bg_active_tab_pane_g2_cp3_copy1

0x683a,	// (0x000479d3) bg_active_tab_pane_g3_cp3_copy1

0x341d,	// (0x000445b6) tabs_2_long_active_pane_srt_ParamLimits

0x341d,	// (0x000445b6) tabs_2_long_active_pane_srt

0x341d,	// (0x000445b6) tabs_2_long_passive_pane_srt_ParamLimits

0x341d,	// (0x000445b6) tabs_2_long_passive_pane_srt

0x4c90,	// (0x00045e29) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4c90,	// (0x00045e29) bg_passive_tab_pane_cp4_srt

0x6532,	// (0x000476cb) bg_passive_tab_pane_g1_cp4_srt

0x45b9,	// (0x00045752) bg_passive_tab_pane_g2_cp4_srt

0x653b,	// (0x000476d4) bg_passive_tab_pane_g3_cp4_srt

0x341d,	// (0x000445b6) bg_active_tab_pane_cp4_srt_ParamLimits

0x341d,	// (0x000445b6) bg_active_tab_pane_cp4_srt

0xdc10,	// (0x0004eda9) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdc10,	// (0x0004eda9) tabs_2_long_active_pane_srt_t1

0x6532,	// (0x000476cb) bg_active_tab_pane_g1_cp4_srt

0x45b9,	// (0x00045752) bg_active_tab_pane_g2_cp4_srt

0x653b,	// (0x000476d4) bg_active_tab_pane_g3_cp4_srt

0x3698,	// (0x00044831) tabs_3_long_active_pane_srt_ParamLimits

0x3698,	// (0x00044831) tabs_3_long_active_pane_srt

0x3698,	// (0x00044831) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3698,	// (0x00044831) tabs_3_long_passive_pane_cp_srt

0x3698,	// (0x00044831) tabs_3_long_passive_pane_srt_ParamLimits

0x3698,	// (0x00044831) tabs_3_long_passive_pane_srt

0x4c90,	// (0x00045e29) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4c90,	// (0x00045e29) bg_passive_tab_pane_cp5_srt

0x4643,	// (0x000457dc) bg_passive_tab_pane_g1_cp5_srt

0x45b9,	// (0x00045752) bg_passive_tab_pane_g2_cp5_srt

0x464c,	// (0x000457e5) bg_passive_tab_pane_g3_cp5_srt

0x341d,	// (0x000445b6) bg_active_tab_pane_cp5_srt_ParamLimits

0x341d,	// (0x000445b6) bg_active_tab_pane_cp5_srt

0xdbfa,	// (0x0004ed93) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdbfa,	// (0x0004ed93) tabs_3_long_active_pane_srt_t1

0x4643,	// (0x000457dc) bg_active_tab_pane_g1_cp5_srt

0x45b9,	// (0x00045752) bg_active_tab_pane_g2_cp5_srt

0x464c,	// (0x000457e5) bg_active_tab_pane_g3_cp5_srt

0x6512,	// (0x000476ab) navi_text_pane_srt_t1

0x650a,	// (0x000476a3) navi_icon_pane_srt_g1

0x4b32,	// (0x00045ccb) midp_editing_number_pane_srt

0x496c,	// (0x00045b05) midp_ticker_pane_srt

0x4b3a,	// (0x00045cd3) midp_ticker_pane_srt_g1

0x4b42,	// (0x00045cdb) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x000508eb) midp_ticker_pane_srt_g

0x4b4a,	// (0x00045ce3) midp_ticker_pane_srt_t1

0x64fb,	// (0x00047694) midp_editing_number_pane_t1_copy1

0xd4e7,	// (0x0004e680) listscroll_midp_pane

0xd4e7,	// (0x0004e680) midp_form_pane

0x49e4,	// (0x00045b7d) midp_info_popup_window_ParamLimits

0x49e4,	// (0x00045b7d) midp_info_popup_window

0x3dc9,	// (0x00044f62) bg_popup_sub_pane_cp50_ParamLimits

0x3dc9,	// (0x00044f62) bg_popup_sub_pane_cp50

0x560e,	// (0x000467a7) listscroll_midp_info_pane_ParamLimits

0x560e,	// (0x000467a7) listscroll_midp_info_pane

0x55ee,	// (0x00046787) listscroll_form_midp_pane_ParamLimits

0x55ee,	// (0x00046787) listscroll_form_midp_pane

0x55fa,	// (0x00046793) scroll_bar_cp050

0x55ee,	// (0x00046787) list_midp_pane

0x72ac,	// (0x00048445) signal_pane_g2_cp

0x5508,	// (0x000466a1) listscroll_midp_info_pane_t1_ParamLimits

0x5508,	// (0x000466a1) listscroll_midp_info_pane_t1

0x5520,	// (0x000466b9) listscroll_midp_info_pane_t2_ParamLimits

0x5520,	// (0x000466b9) listscroll_midp_info_pane_t2

0x555e,	// (0x000466f7) listscroll_midp_info_pane_t3_ParamLimits

0x555e,	// (0x000466f7) listscroll_midp_info_pane_t3

0x5598,	// (0x00046731) listscroll_midp_info_pane_t4_ParamLimits

0x5598,	// (0x00046731) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0005099e) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0005099e) listscroll_midp_info_pane_t

0x3e2a,	// (0x00044fc3) scroll_pane_cp21

0x54a6,	// (0x0004663f) form_midp_field_choice_group_pane

0x54af,	// (0x00046648) form_midp_field_text_pane

0x54ee,	// (0x00046687) form_midp_field_time_pane

0x54f6,	// (0x0004668f) form_midp_gauge_slider_pane

0x54ff,	// (0x00046698) form_midp_gauge_wait_pane

0x333d,	// (0x000444d6) form_midp_image_pane

0xbb73,	// (0x0004cd0c) list_single_midp_pane_ParamLimits

0xbb73,	// (0x0004cd0c) list_single_midp_pane

0xda84,	// (0x0004ec1d) form_midp_field_text_pane_t1

0x522e,	// (0x000463c7) input_focus_pane_cp050

0x5495,	// (0x0004662e) list_midp_form_text_pane

0x542d,	// (0x000465c6) form_midp_field_choice_group_pane_t1

0x543b,	// (0x000465d4) input_focus_pane_cp051

0x544f,	// (0x000465e8) list_midp_choice_pane

0x333d,	// (0x000444d6) status_idle_pane

0x5411,	// (0x000465aa) form_midp_field_time_pane_t1

0xe26d,	// (0x0004f406) wait_anim_pane_g2_copy1

0x541f,	// (0x000465b8) form_midp_field_time_pane_t2

0x0001,

0x4a92,	// (0x00045c2b) aid_navinavi_width_2_pane

0xf800,	// (0x00050999) form_midp_field_time_pane_t

0x333d,	// (0x000444d6) input_focus_pane_cp052

0x333d,	// (0x000444d6) bg_input_focus_pane_cp040

0x53d1,	// (0x0004656a) form_midp_gauge_slider_pane_t1

0x53df,	// (0x00046578) form_midp_gauge_slider_pane_t2

0xda68,	// (0x0004ec01) form_midp_gauge_slider_pane_t3

0xda76,	// (0x0004ec0f) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x00050990) form_midp_gauge_slider_pane_t

0x5409,	// (0x000465a2) form_midp_slider_pane

0x341d,	// (0x000445b6) bg_input_focus_pane_cp041_ParamLimits

0x341d,	// (0x000445b6) bg_input_focus_pane_cp041

0x539e,	// (0x00046537) form_midp_gauge_wait_pane_t1_ParamLimits

0x539e,	// (0x00046537) form_midp_gauge_wait_pane_t1

0x53b0,	// (0x00046549) form_midp_gauge_wait_pane_t2_ParamLimits

0x53b0,	// (0x00046549) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0005098b) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0005098b) form_midp_gauge_wait_pane_t

0x53c2,	// (0x0004655b) form_midp_wait_pane_ParamLimits

0x53c2,	// (0x0004655b) form_midp_wait_pane

0x5368,	// (0x00046501) form_midp_image_pane_g1

0x5371,	// (0x0004650a) form_midp_image_pane_t1

0x5380,	// (0x00046519) form_midp_image_pane_t2

0x538f,	// (0x00046528) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x00050984) form_midp_image_pane_t

0x535f,	// (0x000464f8) list_single_midp_pane_g1

0x0559,	// (0x000416f2) list_single_midp_pane_t1

0xda54,	// (0x0004ebed) list_midp_form_item_pane_ParamLimits

0xda54,	// (0x0004ebed) list_midp_form_item_pane

0x4a3a,	// (0x00045bd3) list_midp_form_item_pane_t1

0x4a49,	// (0x00045be2) midp_ticker_pane_g1

0x4a55,	// (0x00045bee) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x000508d1) midp_ticker_pane_g

0x4a61,	// (0x00045bfa) midp_ticker_pane_t1

0x674c,	// (0x000478e5) midp_editing_number_pane_t1

0x672a,	// (0x000478c3) midp_editing_number_pane

0x6739,	// (0x000478d2) midp_ticker_pane

0x64eb,	// (0x00047684) ai_message_heading_pane

0x333d,	// (0x000444d6) bg_popup_window_pane_cp14

0x64f3,	// (0x0004768c) listscroll_ai_message_pane

0x6475,	// (0x0004760e) ai_message_heading_pane_g1_ParamLimits

0x6475,	// (0x0004760e) ai_message_heading_pane_g1

0x6481,	// (0x0004761a) ai_message_heading_pane_g2_ParamLimits

0x6481,	// (0x0004761a) ai_message_heading_pane_g2

0x648d,	// (0x00047626) ai_message_heading_pane_g3_ParamLimits

0x648d,	// (0x00047626) ai_message_heading_pane_g3

0x6499,	// (0x00047632) ai_message_heading_pane_g4_ParamLimits

0x6499,	// (0x00047632) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x00050ac5) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x00050ac5) ai_message_heading_pane_g

0x64a5,	// (0x0004763e) ai_message_heading_pane_t1_ParamLimits

0x64a5,	// (0x0004763e) ai_message_heading_pane_t1

0x64bf,	// (0x00047658) ai_message_heading_pane_t2_ParamLimits

0x64bf,	// (0x00047658) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x00050ace) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x00050ace) ai_message_heading_pane_t

0x64d1,	// (0x0004766a) bg_popup_heading_pane_cp1_ParamLimits

0x64d1,	// (0x0004766a) bg_popup_heading_pane_cp1

0x6463,	// (0x000475fc) list_ai_message_pane_ParamLimits

0x6463,	// (0x000475fc) list_ai_message_pane

0x3e2a,	// (0x00044fc3) scroll_pane_cp10

0x63ff,	// (0x00047598) list_ai_message_pane_g1

0x6407,	// (0x000475a0) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x00050aa2) list_ai_message_pane_g

0x640f,	// (0x000475a8) list_ai_message_pane_t1_ParamLimits

0x640f,	// (0x000475a8) list_ai_message_pane_t1

0x6424,	// (0x000475bd) list_ai_message_pane_t2_ParamLimits

0x6424,	// (0x000475bd) list_ai_message_pane_t2

0x6439,	// (0x000475d2) list_ai_message_pane_t3_ParamLimits

0x6439,	// (0x000475d2) list_ai_message_pane_t3

0x644e,	// (0x000475e7) list_ai_message_pane_t4_ParamLimits

0x644e,	// (0x000475e7) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x00050aa7) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x00050aa7) list_ai_message_pane_t

0xdbd9,	// (0x0004ed72) cell_ai_soft_ind_pane_ParamLimits

0xdbd9,	// (0x0004ed72) cell_ai_soft_ind_pane

0x4a73,	// (0x00045c0c) cell_ai_soft_ind_pane_g1_ParamLimits

0x4a73,	// (0x00045c0c) cell_ai_soft_ind_pane_g1

0x333d,	// (0x000444d6) grid_highlight_cp1

0x4a80,	// (0x00045c19) text_secondary_cp56_ParamLimits

0x4a80,	// (0x00045c19) text_secondary_cp56

0x63bf,	// (0x00047558) example_general_pane_ParamLimits

0x63bf,	// (0x00047558) example_general_pane

0x63cb,	// (0x00047564) example_parent_pane_g1_ParamLimits

0x63cb,	// (0x00047564) example_parent_pane_g1

0x63d7,	// (0x00047570) example_parent_pane_t1_ParamLimits

0x63d7,	// (0x00047570) example_parent_pane_t1

0xc825,	// (0x0004d9be) popup_preview_text_window_ParamLimits

0xc825,	// (0x0004d9be) popup_preview_text_window

0x48a9,	// (0x00045a42) list_single_pane_cp2_g4

0x3774,	// (0x0004490d) bg_popup_preview_window_pane_ParamLimits

0x3774,	// (0x0004490d) bg_popup_preview_window_pane

0x610c,	// (0x000472a5) popup_preview_text_window_t1_ParamLimits

0x610c,	// (0x000472a5) popup_preview_text_window_t1

0x612a,	// (0x000472c3) popup_preview_text_window_t2_ParamLimits

0x612a,	// (0x000472c3) popup_preview_text_window_t2

0x6173,	// (0x0004730c) popup_preview_text_window_t3_ParamLimits

0x6173,	// (0x0004730c) popup_preview_text_window_t3

0x61b8,	// (0x00047351) popup_preview_text_window_t4_ParamLimits

0x61b8,	// (0x00047351) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x00050a76) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x00050a76) popup_preview_text_window_t

0x6236,	// (0x000473cf) scroll_pane_cp11

0x51ba,	// (0x00046353) bg_popup_preview_window_pane_g1

0x60cc,	// (0x00047265) bg_popup_preview_window_pane_g2

0x60d4,	// (0x0004726d) bg_popup_preview_window_pane_g3

0x60dc,	// (0x00047275) bg_popup_preview_window_pane_g4

0x60e4,	// (0x0004727d) bg_popup_preview_window_pane_g5

0x60ec,	// (0x00047285) bg_popup_preview_window_pane_g6

0x60f4,	// (0x0004728d) bg_popup_preview_window_pane_g7

0x60fc,	// (0x00047295) bg_popup_preview_window_pane_g8

0x0ba1,	// (0x00041d3a) aid_popup_width_pane

0xc7a1,	// (0x0004d93a) popup_midp_note_alarm_window_ParamLimits

0xc7a1,	// (0x0004d93a) popup_midp_note_alarm_window

0x3caa,	// (0x00044e43) data_form_pane_ParamLimits

0xba7c,	// (0x0004cc15) form_field_data_pane_g1

0xba86,	// (0x0004cc1f) form_field_data_pane_t1_ParamLimits

0x3cb6,	// (0x00044e4f) input_focus_pane_ParamLimits

0x0230,	// (0x000413c9) data_form_wide_pane_ParamLimits

0x0241,	// (0x000413da) form_field_data_wide_pane_g1

0x024d,	// (0x000413e6) form_field_data_wide_pane_t1_ParamLimits

0x3a1b,	// (0x00044bb4) input_focus_pane_cp6_ParamLimits

0xd336,	// (0x0004e4cf) input_popup_find_pane_g1_ParamLimits

0xd336,	// (0x0004e4cf) input_popup_find_pane_g1

0x11a8,	// (0x00042341) aid_navi_side_left_pane

0x11bd,	// (0x00042356) aid_navi_side_right_pane

0x5ae5,	// (0x00046c7e) bg_popup_window_pane_cp30_ParamLimits

0x5ae5,	// (0x00046c7e) bg_popup_window_pane_cp30

0x5b5f,	// (0x00046cf8) popup_midp_note_alarm_window_g1_ParamLimits

0x5b5f,	// (0x00046cf8) popup_midp_note_alarm_window_g1

0x5b8f,	// (0x00046d28) popup_midp_note_alarm_window_t1_ParamLimits

0x5b8f,	// (0x00046d28) popup_midp_note_alarm_window_t1

0x5c30,	// (0x00046dc9) popup_midp_note_alarm_window_t2_ParamLimits

0x5c30,	// (0x00046dc9) popup_midp_note_alarm_window_t2

0x5cde,	// (0x00046e77) popup_midp_note_alarm_window_t3_ParamLimits

0x5cde,	// (0x00046e77) popup_midp_note_alarm_window_t3

0x5d10,	// (0x00046ea9) popup_midp_note_alarm_window_t4_ParamLimits

0x5d10,	// (0x00046ea9) popup_midp_note_alarm_window_t4

0x5d36,	// (0x00046ecf) popup_midp_note_alarm_window_t5_ParamLimits

0x5d36,	// (0x00046ecf) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x00050a13) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x00050a13) popup_midp_note_alarm_window_t

0x5de2,	// (0x00046f7b) wait_bar_pane_cp1_ParamLimits

0x5de2,	// (0x00046f7b) wait_bar_pane_cp1

0x333d,	// (0x000444d6) wait_anim_pane_copy1

0x333d,	// (0x000444d6) wait_border_pane_copy1

0x57cb,	// (0x00046964) wait_border_pane_g1_copy1

0x0267,	// (0x00041400) form_field_popup_pane_g1

0xbaa0,	// (0x0004cc39) form_field_popup_pane_t1_ParamLimits

0x3cb6,	// (0x00044e4f) input_focus_pane_cp7_ParamLimits

0x3cd8,	// (0x00044e71) list_form_pane_ParamLimits

0x0287,	// (0x00041420) form_field_popup_wide_pane_g1

0x028f,	// (0x00041428) form_field_popup_wide_pane_t1_ParamLimits

0x3cb6,	// (0x00044e4f) input_focus_pane_cp8_ParamLimits

0x3ce4,	// (0x00044e7d) list_form_wide_pane_ParamLimits

0x68d3,	// (0x00047a6c) aid_size_cell_graphic_pane

0xbb1f,	// (0x0004ccb8) data_form_pane_t1_ParamLimits

0xbb88,	// (0x0004cd21) data_form_wide_pane_t1_ParamLimits

0xd6d9,	// (0x0004e872) bg_status_flat_pane

0xbf4b,	// (0x0004d0e4) title_pane_t1_ParamLimits

0x33e5,	// (0x0004457e) title_pane_t2_ParamLimits

0x340b,	// (0x000445a4) title_pane_t3_ParamLimits

0xf532,	// (0x000506cb) title_pane_t_ParamLimits

0x42ab,	// (0x00045444) level_1_signal_ParamLimits

0x42bd,	// (0x00045456) level_2_signal_ParamLimits

0x42d0,	// (0x00045469) level_3_signal_ParamLimits

0x42e3,	// (0x0004547c) level_4_signal_ParamLimits

0x42f6,	// (0x0004548f) level_5_signal_ParamLimits

0x4309,	// (0x000454a2) level_6_signal_ParamLimits

0x431c,	// (0x000454b5) level_7_signal_ParamLimits

0x42ab,	// (0x00045444) level_1_battery_ParamLimits

0x42bd,	// (0x00045456) level_2_battery_ParamLimits

0x42d0,	// (0x00045469) level_3_battery_ParamLimits

0x42e3,	// (0x0004547c) level_4_battery_ParamLimits

0x42f6,	// (0x0004548f) level_5_battery_ParamLimits

0x4309,	// (0x000454a2) level_6_battery_ParamLimits

0x431c,	// (0x000454b5) level_7_battery_ParamLimits

0x59ea,	// (0x00046b83) bg_status_flat_pane_g1

0x59f2,	// (0x00046b8b) bg_status_flat_pane_g2

0x59fa,	// (0x00046b93) bg_status_flat_pane_g3

0x5a02,	// (0x00046b9b) bg_status_flat_pane_g4

0x5a0a,	// (0x00046ba3) bg_status_flat_pane_g5

0x5a12,	// (0x00046bab) bg_status_flat_pane_g6

0x5a1a,	// (0x00046bb3) bg_status_flat_pane_g7

0xbfd7,	// (0x0004d170) tabs_3_active_pane_t1_ParamLimits

0xbfd7,	// (0x0004d170) tabs_3_passive_pane_t1_ParamLimits

0xbfe9,	// (0x0004d182) tabs_4_active_pane_t1_ParamLimits

0xbfe9,	// (0x0004d182) tabs_4_1_passive_pane_t1_ParamLimits

0xd344,	// (0x0004e4dd) tabs_2_active_pane_t1_ParamLimits

0xd344,	// (0x0004e4dd) tabs_2_passive_pane_t1_ParamLimits

0x341d,	// (0x000445b6) bg_active_tab_pane_cp4_ParamLimits

0xd356,	// (0x0004e4ef) tabs_2_long_active_pane_t1_ParamLimits

0x4c90,	// (0x00045e29) bg_passive_tab_pane_cp4_ParamLimits

0x1d07,	// (0x00042ea0) list_single_midp_graphic_pane_t1_ParamLimits

0x341d,	// (0x000445b6) bg_active_tab_pane_cp5_ParamLimits

0xd369,	// (0x0004e502) tabs_3_long_active_pane_t1_ParamLimits

0x4c90,	// (0x00045e29) bg_passive_tab_pane_cp5_ParamLimits

0x1d07,	// (0x00042ea0) list_single_midp_graphic_pane_t1

0xd6d9,	// (0x0004e872) bg_status_flat_pane_ParamLimits

0x4e4a,	// (0x00045fe3) indicator_pane_cp2_ParamLimits

0x4e4a,	// (0x00045fe3) indicator_pane_cp2

0xd857,	// (0x0004e9f0) navi_pane_srt_ParamLimits

0xd857,	// (0x0004e9f0) navi_pane_srt

0x4f99,	// (0x00046132) popup_clock_digital_analogue_window_cp1

0x34fa,	// (0x00044693) indicator_pane_t1

0x496c,	// (0x00045b05) copy_highlight_pane

0x496c,	// (0x00045b05) cursor_graphics_pane

0x496c,	// (0x00045b05) graphic_within_text_pane

0x496c,	// (0x00045b05) link_highlight_pane

0x61f9,	// (0x00047392) popup_preview_text_window_t5_ParamLimits

0x61f9,	// (0x00047392) popup_preview_text_window_t5

0x4a9a,	// (0x00045c33) cursor_digital_pane

0x4a9a,	// (0x00045c33) cursor_primary_pane

0x4aab,	// (0x00045c44) cursor_primary_small_pane

0x4ab3,	// (0x00045c4c) cursor_secondary_pane

0x4abb,	// (0x00045c54) cursor_title_pane

0x4a9a,	// (0x00045c33) link_highlight_digital_pane

0x4aa2,	// (0x00045c3b) link_highlight_primary_pane

0x4aab,	// (0x00045c44) link_highlight_primary_small_pane

0x4ab3,	// (0x00045c4c) link_highlight_secondary_pane

0x4abb,	// (0x00045c54) link_highlight_title_pane

0x4a9a,	// (0x00045c33) copy_highlight_digital_pane

0x4a9a,	// (0x00045c33) copy_highlight_primary_pane

0x4aab,	// (0x00045c44) copy_highlight_primary_small_pane

0x4ab3,	// (0x00045c4c) copy_highlight_secondary_pane

0x4abb,	// (0x00045c54) copy_highlight_title_pane

0x4ab3,	// (0x00045c4c) graphic_text_digital_pane

0x5a88,	// (0x00046c21) graphic_text_primary_pane

0x5a91,	// (0x00046c2a) graphic_text_primary_small_pane

0x4aab,	// (0x00045c44) graphic_text_secondary_pane

0x4a9a,	// (0x00045c33) graphic_text_title_pane

0xd58c,	// (0x0004e725) cursor_primary_pane_g1

0x5a7a,	// (0x00046c13) cursor_text_primary_t1

0xdad5,	// (0x0004ec6e) cursor_primary_small_pane_g1

0x5a6c,	// (0x00046c05) cursor_text_primary_small_t1

0xdacb,	// (0x0004ec64) cursor_primary_small_pane_g1_copy1

0x5a54,	// (0x00046bed) cursor_text_primary_small_t1_copy1

0x5a32,	// (0x00046bcb) cursor_text_title_t1

0xdac1,	// (0x0004ec5a) cursor_title_pane_g1

0xd58c,	// (0x0004e725) cursor_digital_pane_g1

0x4acd,	// (0x00045c66) cursor_text_digital_t1

0x4af2,	// (0x00045c8b) link_highlight_primary_pane_g1

0x59db,	// (0x00046b74) link_highlight_primary_pane_t1

0x4adb,	// (0x00045c74) link_highlight_primary_small_pane_g1

0x4ae3,	// (0x00045c7c) link_highlight_primary_small_pane_t1

0x4af2,	// (0x00045c8b) link_highlight_secondary_pane_g1

0x4afa,	// (0x00045c93) link_highlight_secondary_pane_t1

0x594f,	// (0x00046ae8) link_highlight_title_pane_g1

0x5957,	// (0x00046af0) link_highlight_title_pane_t1

0x5938,	// (0x00046ad1) link_highlight_digital_pane_g1

0x5940,	// (0x00046ad9) link_highlight_digital_pane_t1

0x5810,	// (0x000469a9) copy_highlight_primary_pane_g1

0x5818,	// (0x000469b1) copy_highlight_primary_pane_t1

0x57ea,	// (0x00046983) copy_highlight_primary_small_pane_g1

0x5801,	// (0x0004699a) copy_highlight_primary_small_pane_t1

0x4b09,	// (0x00045ca2) copy_highlight_secondary_pane_g1

0x4b11,	// (0x00045caa) copy_highlight_secondary_pane_t1

0x57ea,	// (0x00046983) copy_highlight_title_pane_g1

0x57f2,	// (0x0004698b) copy_highlight_title_pane_t1

0x5810,	// (0x000469a9) copy_highlight_digital_pane_g1

0x6aa1,	// (0x00047c3a) copy_highlight_digital_pane_t1

0x69f5,	// (0x00047b8e) graphic_text_primary_pane_g1

0x6a85,	// (0x00047c1e) graphic_text_primary_pane_t1

0x6a93,	// (0x00047c2c) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x00050b42) graphic_text_primary_pane_t

0x6a61,	// (0x00047bfa) graphic_text_primary_small_pane_g1

0x6a69,	// (0x00047c02) graphic_text_primary_small_pane_t1

0x6a77,	// (0x00047c10) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x00050b3d) graphic_text_primary_small_pane_t

0x6a3d,	// (0x00047bd6) graphic_text_secondary_pane_g1

0x6a45,	// (0x00047bde) graphic_text_secondary_pane_t1

0x6a53,	// (0x00047bec) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x00050b38) graphic_text_secondary_pane_t

0x6a19,	// (0x00047bb2) graphic_text_title_pane_g1

0x6a21,	// (0x00047bba) graphic_text_title_pane_t1

0x6a2f,	// (0x00047bc8) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x00050b33) graphic_text_title_pane_t

0x69f5,	// (0x00047b8e) graphic_text_digital_pane_g1

0x69fd,	// (0x00047b96) graphic_text_digital_pane_t1

0x6a0b,	// (0x00047ba4) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x00050b2e) graphic_text_digital_pane_t

0x341d,	// (0x000445b6) navi_icon_pane_srt_ParamLimits

0x341d,	// (0x000445b6) navi_icon_pane_srt

0x333d,	// (0x000444d6) navi_midp_pane_srt

0x333d,	// (0x000444d6) navi_navi_pane_srt

0x341d,	// (0x000445b6) navi_text_pane_srt_ParamLimits

0x341d,	// (0x000445b6) navi_text_pane_srt

0x69c0,	// (0x00047b59) navi_navi_icon_text_pane_srt

0x69c8,	// (0x00047b61) navi_navi_pane_srt_g1_ParamLimits

0x69c8,	// (0x00047b61) navi_navi_pane_srt_g1

0x69da,	// (0x00047b73) navi_navi_pane_srt_g2_ParamLimits

0x69da,	// (0x00047b73) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x00050b29) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x00050b29) navi_navi_pane_srt_g

0x69ec,	// (0x00047b85) navi_navi_tabs_pane_srt

0x69c0,	// (0x00047b59) navi_navi_text_pane_srt

0x69c0,	// (0x00047b59) navi_navi_volume_pane_srt

0x69b1,	// (0x00047b4a) navi_navi_text_pane_srt_t1

0x2110,	// (0x000432a9) navi_navi_volume_pane_srt_g1

0x2118,	// (0x000432b1) volume_small_pane_srt_ParamLimits

0x2118,	// (0x000432b1) volume_small_pane_srt

0x14a4,	// (0x0004263d) volume_small_pane_srt_g1_ParamLimits

0x14a4,	// (0x0004263d) volume_small_pane_srt_g1

0x14b4,	// (0x0004264d) volume_small_pane_srt_g2_ParamLimits

0x14b4,	// (0x0004264d) volume_small_pane_srt_g2

0x14c5,	// (0x0004265e) volume_small_pane_srt_g3_ParamLimits

0x14c5,	// (0x0004265e) volume_small_pane_srt_g3

0x14d6,	// (0x0004266f) volume_small_pane_srt_g4_ParamLimits

0x14d6,	// (0x0004266f) volume_small_pane_srt_g4

0x14e7,	// (0x00042680) volume_small_pane_srt_g5_ParamLimits

0x14e7,	// (0x00042680) volume_small_pane_srt_g5

0x14f8,	// (0x00042691) volume_small_pane_srt_g6_ParamLimits

0x14f8,	// (0x00042691) volume_small_pane_srt_g6

0x1509,	// (0x000426a2) volume_small_pane_srt_g7_ParamLimits

0x1509,	// (0x000426a2) volume_small_pane_srt_g7

0x151a,	// (0x000426b3) volume_small_pane_srt_g8_ParamLimits

0x151a,	// (0x000426b3) volume_small_pane_srt_g8

0x152b,	// (0x000426c4) volume_small_pane_srt_g9_ParamLimits

0x152b,	// (0x000426c4) volume_small_pane_srt_g9

0x153c,	// (0x000426d5) volume_small_pane_srt_g10_ParamLimits

0x153c,	// (0x000426d5) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x000508d6) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x000508d6) volume_small_pane_srt_g

0x381d,	// (0x000449b6) query_popup_data_pane_cp2

0x6997,	// (0x00047b30) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6997,	// (0x00047b30) navi_navi_icon_text_pane_srt_t1

0x5a88,	// (0x00046c21) navi_tabs_2_long_pane_srt

0x5a88,	// (0x00046c21) navi_tabs_2_pane_srt

0x5a88,	// (0x00046c21) navi_tabs_3_long_pane_srt

0x5a88,	// (0x00046c21) navi_tabs_3_pane_srt

0x5a88,	// (0x00046c21) navi_tabs_4_pane_srt

0x20f0,	// (0x00043289) tabs_2_active_pane_srt_ParamLimits

0x20f0,	// (0x00043289) tabs_2_active_pane_srt

0x2100,	// (0x00043299) tabs_2_passive_pane_srt_ParamLimits

0x2100,	// (0x00043299) tabs_2_passive_pane_srt

0x522e,	// (0x000463c7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x522e,	// (0x000463c7) bg_passive_tab_pane_cp1_srt

0x6963,	// (0x00047afc) bg_passive_tab_pane_g1_cp1_srt

0x45b9,	// (0x00045752) bg_passive_tab_pane_g2_cp1_srt

0x696c,	// (0x00047b05) bg_passive_tab_pane_g3_cp1_srt

0x3698,	// (0x00044831) bg_active_tab_pane_cp1_srt_ParamLimits

0x3698,	// (0x00044831) bg_active_tab_pane_cp1_srt

0x6975,	// (0x00047b0e) tabs_2_active_pane_srt_g1

0xde68,	// (0x0004f001) tabs_2_active_pane_srt_t1_ParamLimits

0xde68,	// (0x0004f001) tabs_2_active_pane_srt_t1

0x6963,	// (0x00047afc) bg_active_tab_pane_g1_cp1_srt

0x45b9,	// (0x00045752) bg_active_tab_pane_g2_cp1_srt

0x696c,	// (0x00047b05) bg_active_tab_pane_g3_cp1_srt

0x20bd,	// (0x00043256) tabs_3_active_pane_srt_ParamLimits

0x20bd,	// (0x00043256) tabs_3_active_pane_srt

0x20ce,	// (0x00043267) tabs_3_passive_pane_cp_srt_ParamLimits

0x20ce,	// (0x00043267) tabs_3_passive_pane_cp_srt

0x20df,	// (0x00043278) tabs_3_passive_pane_srt_ParamLimits

0x20df,	// (0x00043278) tabs_3_passive_pane_srt

0x522e,	// (0x000463c7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x522e,	// (0x000463c7) bg_passive_tab_pane_cp2_srt

0x4b20,	// (0x00045cb9) bg_passive_tab_pane_g1_cp2_srt

0x45b9,	// (0x00045752) bg_passive_tab_pane_g2_cp2_srt

0x4b29,	// (0x00045cc2) bg_passive_tab_pane_g3_cp2_srt

0x3698,	// (0x00044831) bg_active_tab_pane_cp2_srt_ParamLimits

0x3698,	// (0x00044831) bg_active_tab_pane_cp2_srt

0x6949,	// (0x00047ae2) tabs_3_active_pane_srt_g1

0xde52,	// (0x0004efeb) tabs_3_active_pane_srt_t1_ParamLimits

0xde52,	// (0x0004efeb) tabs_3_active_pane_srt_t1

0x4b20,	// (0x00045cb9) bg_active_tab_pane_g1_cp2_srt

0x45b9,	// (0x00045752) bg_active_tab_pane_g2_cp2_srt

0x4b29,	// (0x00045cc2) bg_active_tab_pane_g3_cp2_srt

0x2075,	// (0x0004320e) tabs_4_active_pane_srt_ParamLimits

0x2075,	// (0x0004320e) tabs_4_active_pane_srt

0x2087,	// (0x00043220) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2087,	// (0x00043220) tabs_4_passive_pane_cp2_srt

0x16af,	// (0x00042848) aid_size_cell_toolbar

0x65a3,	// (0x0004773c) main_idle_act_pane_ParamLimits

0x186e,	// (0x00042a07) popup_large_graphic_colour_window_ParamLimits

0xcab1,	// (0x0004dc4a) popup_toolbar_window_ParamLimits

0xcab1,	// (0x0004dc4a) popup_toolbar_window

0x675b,	// (0x000478f4) list_single_graphic_2heading_pane_ParamLimits

0x675b,	// (0x000478f4) list_single_graphic_2heading_pane

0x405a,	// (0x000451f3) aid_size_cell_apps_grid_lsc_pane

0x406c,	// (0x00045205) aid_size_cell_apps_grid_prt_pane

0x4c90,	// (0x00045e29) bg_wml_button_pane_cp1_ParamLimits

0x4c90,	// (0x00045e29) bg_wml_button_pane_cp1

0xda84,	// (0x0004ec1d) form_midp_field_text_pane_t1_ParamLimits

0x522e,	// (0x000463c7) input_focus_pane_cp050_ParamLimits

0x5495,	// (0x0004662e) list_midp_form_text_pane_ParamLimits

0x543b,	// (0x000465d4) input_focus_pane_cp051_ParamLimits

0x544f,	// (0x000465e8) list_midp_choice_pane_ParamLimits

0xda22,	// (0x0004ebbb) list_single_2graphic_pane_cp3_ParamLimits

0xda22,	// (0x0004ebbb) list_single_2graphic_pane_cp3

0xda35,	// (0x0004ebce) list_single_midp_graphic_pane_ParamLimits

0xda35,	// (0x0004ebce) list_single_midp_graphic_pane

0x0443,	// (0x000415dc) list_single_graphic_2heading_pane_g1_ParamLimits

0x0443,	// (0x000415dc) list_single_graphic_2heading_pane_g1

0x044f,	// (0x000415e8) list_single_graphic_2heading_pane_g4_ParamLimits

0x044f,	// (0x000415e8) list_single_graphic_2heading_pane_g4

0x045b,	// (0x000415f4) list_single_graphic_2heading_pane_g5_ParamLimits

0x045b,	// (0x000415f4) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00050929) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00050929) list_single_graphic_2heading_pane_g

0x0467,	// (0x00041600) list_single_graphic_2heading_pane_t1_ParamLimits

0x0467,	// (0x00041600) list_single_graphic_2heading_pane_t1

0x047b,	// (0x00041614) list_single_graphic_2heading_pane_t2_ParamLimits

0x047b,	// (0x00041614) list_single_graphic_2heading_pane_t2

0x0497,	// (0x00041630) list_single_graphic_2heading_pane_t3_ParamLimits

0x0497,	// (0x00041630) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00050930) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00050930) list_single_graphic_2heading_pane_t

0x50f8,	// (0x00046291) bg_popup_sub_pane_cp2

0x5122,	// (0x000462bb) grid_toobar_pane

0x1c82,	// (0x00042e1b) cell_toolbar_pane_ParamLimits

0x1c82,	// (0x00042e1b) cell_toolbar_pane

0x515e,	// (0x000462f7) cell_toolbar_pane_g1_ParamLimits

0x515e,	// (0x000462f7) cell_toolbar_pane_g1

0x5172,	// (0x0004630b) cell_toolbar_pane_g2_ParamLimits

0x5172,	// (0x0004630b) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x0005093e) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x0005093e) cell_toolbar_pane_g

0x5194,	// (0x0004632d) grid_highlight_pane_cp2_ParamLimits

0x5194,	// (0x0004632d) grid_highlight_pane_cp2

0x51ae,	// (0x00046347) toolbar_button_pane

0x51ba,	// (0x00046353) toolbar_button_pane_g1

0x51c2,	// (0x0004635b) toolbar_button_pane_g2

0x51ca,	// (0x00046363) toolbar_button_pane_g3

0x51d2,	// (0x0004636b) toolbar_button_pane_g4

0x51da,	// (0x00046373) toolbar_button_pane_g5

0x51e2,	// (0x0004637b) toolbar_button_pane_g6

0x51ea,	// (0x00046383) toolbar_button_pane_g7

0x51f2,	// (0x0004638b) toolbar_button_pane_g8

0x51fa,	// (0x00046393) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x00050943) toolbar_button_pane_g

0x1cba,	// (0x00042e53) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1cba,	// (0x00042e53) list_single_2graphic_pane_g1_cp3

0xcb09,	// (0x0004dca2) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcb09,	// (0x0004dca2) list_single_2graphic_pane_g2_cp3

0x1cd7,	// (0x00042e70) list_single_2graphic_pane_g3_cp3

0x1cdf,	// (0x00042e78) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1cdf,	// (0x00042e78) list_single_2graphic_pane_g4_cp3

0x1ceb,	// (0x00042e84) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1ceb,	// (0x00042e84) list_single_2graphic_pane_t1_cp3

0x67db,	// (0x00047974) list_single_midp_graphic_pane_g2_ParamLimits

0x67db,	// (0x00047974) list_single_midp_graphic_pane_g2

0x0433,	// (0x000415cc) aid_zoom_text_primary

0x16b7,	// (0x00042850) aid_zoom_text_secondary

0x4bda,	// (0x00045d73) status_small_pane_g7_ParamLimits

0x4bda,	// (0x00045d73) status_small_pane_g7

0x4bfd,	// (0x00045d96) status_small_pane_t1_ParamLimits

0xbf27,	// (0x0004d0c0) title_pane_g2

0x0003,

0xf529,	// (0x000506c2) title_pane_g

0xc19f,	// (0x0004d338) aid_size_cell_colour_1_pane_ParamLimits

0xc19f,	// (0x0004d338) aid_size_cell_colour_1_pane

0xc1b3,	// (0x0004d34c) aid_size_cell_colour_2_pane_ParamLimits

0xc1b3,	// (0x0004d34c) aid_size_cell_colour_2_pane

0xc1c7,	// (0x0004d360) aid_size_cell_colour_3_pane_ParamLimits

0xc1c7,	// (0x0004d360) aid_size_cell_colour_3_pane

0xc1db,	// (0x0004d374) aid_size_cell_colour_4_pane_ParamLimits

0xc1db,	// (0x0004d374) aid_size_cell_colour_4_pane

0x10e5,	// (0x0004227e) title_pane_stacon_g1_ParamLimits

0x10e5,	// (0x0004227e) title_pane_stacon_g1

0x586f,	// (0x00046a08) popup_note_wait_window_g3_ParamLimits

0x586f,	// (0x00046a08) popup_note_wait_window_g3

0x58e5,	// (0x00046a7e) popup_note_wait_window_t5_ParamLimits

0x58e5,	// (0x00046a7e) popup_note_wait_window_t5

0x333d,	// (0x000444d6) main_feb_china_hwr_fs_writing_pane

0xc4b3,	// (0x0004d64c) popup_feb_china_hwr_fs_window_ParamLimits

0xc4b3,	// (0x0004d64c) popup_feb_china_hwr_fs_window

0xcb1a,	// (0x0004dcb3) aid_size_cell_hwr_fs_ParamLimits

0xcb1a,	// (0x0004dcb3) aid_size_cell_hwr_fs

0x522e,	// (0x000463c7) bg_popup_sub_pane_cp3_ParamLimits

0x522e,	// (0x000463c7) bg_popup_sub_pane_cp3

0xcb2f,	// (0x0004dcc8) grid_hwr_fs_pane_ParamLimits

0xcb2f,	// (0x0004dcc8) grid_hwr_fs_pane

0x1d62,	// (0x00042efb) linegrid_hwr_fs_pane_ParamLimits

0x1d62,	// (0x00042efb) linegrid_hwr_fs_pane

0xcb47,	// (0x0004dce0) cell_hwr_fs_pane_ParamLimits

0xcb47,	// (0x0004dce0) cell_hwr_fs_pane

0x523a,	// (0x000463d3) linegrid_hwr_fs_pane_g1_ParamLimits

0x523a,	// (0x000463d3) linegrid_hwr_fs_pane_g1

0xd9f6,	// (0x0004eb8f) linegrid_hwr_fs_pane_g2_ParamLimits

0xd9f6,	// (0x0004eb8f) linegrid_hwr_fs_pane_g2

0x5258,	// (0x000463f1) linegrid_hwr_fs_pane_g3_ParamLimits

0x5258,	// (0x000463f1) linegrid_hwr_fs_pane_g3

0x1d94,	// (0x00042f2d) linegrid_hwr_fs_pane_g4_ParamLimits

0x1d94,	// (0x00042f2d) linegrid_hwr_fs_pane_g4

0x1dae,	// (0x00042f47) linegrid_hwr_fs_pane_g5_ParamLimits

0x1dae,	// (0x00042f47) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x00050969) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x00050969) linegrid_hwr_fs_pane_g

0x5264,	// (0x000463fd) cell_hwr_fs_pane_g1_ParamLimits

0x5264,	// (0x000463fd) cell_hwr_fs_pane_g1

0x502f,	// (0x000461c8) cell_hwr_fs_pane_g2_ParamLimits

0x502f,	// (0x000461c8) cell_hwr_fs_pane_g2

0xda08,	// (0x0004eba1) cell_hwr_fs_pane_g3_ParamLimits

0xda08,	// (0x0004eba1) cell_hwr_fs_pane_g3

0xda15,	// (0x0004ebae) cell_hwr_fs_pane_g4_ParamLimits

0xda15,	// (0x0004ebae) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x00050974) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x00050974) cell_hwr_fs_pane_g

0xcb6d,	// (0x0004dd06) cell_hwr_fs_pane_t1

0x333d,	// (0x000444d6) grid_highlight_pane_cp6

0x333d,	// (0x000444d6) main_idle_act2_pane

0x3e11,	// (0x00044faa) aid_inside_area_popup_secondary

0xdadf,	// (0x0004ec78) aid_inside_area_window_primary_ParamLimits

0xdadf,	// (0x0004ec78) aid_inside_area_window_primary

0x6ab0,	// (0x00047c49) ai2_news_ticker_pane

0x6ab8,	// (0x00047c51) aid_size_cell_ai1_link_ParamLimits

0x6ab8,	// (0x00047c51) aid_size_cell_ai1_link

0xde7e,	// (0x0004f017) popup_ai2_data_window_ParamLimits

0xde7e,	// (0x0004f017) popup_ai2_data_window

0x6ae8,	// (0x00047c81) popup_ai2_link_window_ParamLimits

0x6ae8,	// (0x00047c81) popup_ai2_link_window

0x522e,	// (0x000463c7) bg_popup_sub_pane_cp4_ParamLimits

0x522e,	// (0x000463c7) bg_popup_sub_pane_cp4

0x6afc,	// (0x00047c95) grid_ai2_link_pane_ParamLimits

0x6afc,	// (0x00047c95) grid_ai2_link_pane

0x6b13,	// (0x00047cac) popup_ai2_link_window_g1_ParamLimits

0x6b13,	// (0x00047cac) popup_ai2_link_window_g1

0x6b1f,	// (0x00047cb8) popup_ai2_link_window_g2_ParamLimits

0x6b1f,	// (0x00047cb8) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x00050b47) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x00050b47) popup_ai2_link_window_g

0x6b2e,	// (0x00047cc7) ai2_mp_button_pane

0x6b36,	// (0x00047ccf) ai2_mp_volume_pane

0x543b,	// (0x000465d4) bg_popup_sub_pane_cp5_ParamLimits

0x543b,	// (0x000465d4) bg_popup_sub_pane_cp5

0x6b3e,	// (0x00047cd7) heading_ai2_gene_pane_ParamLimits

0x6b3e,	// (0x00047cd7) heading_ai2_gene_pane

0x6b4a,	// (0x00047ce3) list_ai2_gene_pane_ParamLimits

0x6b4a,	// (0x00047ce3) list_ai2_gene_pane

0x6b92,	// (0x00047d2b) cell_ai2_link_pane_ParamLimits

0x6b92,	// (0x00047d2b) cell_ai2_link_pane

0x6ba8,	// (0x00047d41) cell_ai2_link_pane_g1

0x333d,	// (0x000444d6) grid_highlight_pane_cp7

0x212d,	// (0x000432c6) ai2_mp_volume_pane_g1

0x6c78,	// (0x00047e11) ai2_mp_volume_pane_g2

0xdea8,	// (0x0004f041) list_ai2_gene_pane_t1

0x6c80,	// (0x00047e19) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x00050b60) ai2_mp_volume_pane_g

0x2135,	// (0x000432ce) volume_small_pane_cp3

0x6c88,	// (0x00047e21) aid_size_cell_ai2_button

0x6c90,	// (0x00047e29) grid_ai2_button_pane

0x6c99,	// (0x00047e32) cell_ai2_button_pane_ParamLimits

0x6c99,	// (0x00047e32) cell_ai2_button_pane

0xe26d,	// (0x0004f406) cell_ai2_button_pane_g1

0x333d,	// (0x000444d6) grid_highlight_pane_cp8

0x6c38,	// (0x00047dd1) ai2_gene_pane_t1_ParamLimits

0x6c38,	// (0x00047dd1) ai2_gene_pane_t1

0xc451,	// (0x0004d5ea) aid_height_parent_landscape

0xdc27,	// (0x0004edc0) aid_height_set_list

0x65a3,	// (0x0004773c) aid_size_parent

0x68d3,	// (0x00047a6c) aid_size_cell_graphic_pane_ParamLimits

0x6b5a,	// (0x00047cf3) popup_ai2_data_window_g1_ParamLimits

0x6b5a,	// (0x00047cf3) popup_ai2_data_window_g1

0x6b66,	// (0x00047cff) ai2_news_ticker_pane_g1

0x6b6e,	// (0x00047d07) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x00050b4c) ai2_news_ticker_pane_g

0x6b76,	// (0x00047d0f) ai2_news_ticker_pane_t1

0x6b84,	// (0x00047d1d) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x00050b51) ai2_news_ticker_pane_t

0x6bb1,	// (0x00047d4a) heading_ai2_gene_pane_g1

0x6bb9,	// (0x00047d52) heading_ai2_gene_pane_t1_ParamLimits

0x6bb9,	// (0x00047d52) heading_ai2_gene_pane_t1

0x6bce,	// (0x00047d67) list_highlight_pane_cp6

0xde92,	// (0x0004f02b) ai2_gene_pane_ParamLimits

0xde92,	// (0x0004f02b) ai2_gene_pane

0xdeb6,	// (0x0004f04f) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x00050b56) list_ai2_gene_pane_t

0x6c09,	// (0x00047da2) list_highlight_pane_cp8_ParamLimits

0x6c09,	// (0x00047da2) list_highlight_pane_cp8

0x6c1a,	// (0x00047db3) ai2_gene_pane_g1_ParamLimits

0x6c1a,	// (0x00047db3) ai2_gene_pane_g1

0x6c2c,	// (0x00047dc5) ai2_gene_pane_g2_ParamLimits

0x6c2c,	// (0x00047dc5) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x00050b5b) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x00050b5b) ai2_gene_pane_g

0x3c40,	// (0x00044dd9) scroll_pane_cp12

0xc40e,	// (0x0004d5a7) control_pane_t3_ParamLimits

0xc40e,	// (0x0004d5a7) control_pane_t3

0x4bee,	// (0x00045d87) status_small_pane_g8_ParamLimits

0x4bee,	// (0x00045d87) status_small_pane_g8

0xc548,	// (0x0004d6e1) popup_find_window_ParamLimits

0xc7db,	// (0x0004d974) popup_note_image_window_ParamLimits

0xf4e3,	// (0x0005067c) list_double2_graphic_pane_vc_g1_ParamLimits

0xf4e3,	// (0x0005067c) list_double2_graphic_pane_vc_g1

0x44b8,	// (0x00045651) list_double2_graphic_pane_vc_g2_ParamLimits

0x44b8,	// (0x00045651) list_double2_graphic_pane_vc_g2

0x1015,	// (0x000421ae) list_double2_graphic_pane_vc_g3_ParamLimits

0x1015,	// (0x000421ae) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x00050937) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x00050937) list_double2_graphic_pane_vc_g

0x04af,	// (0x00041648) list_double2_graphic_pane_vc_t1_ParamLimits

0x04af,	// (0x00041648) list_double2_graphic_pane_vc_t1

0x44b8,	// (0x00045651) list_single_heading_pane_vc_g1_ParamLimits

0x44b8,	// (0x00045651) list_single_heading_pane_vc_g1

0x1015,	// (0x000421ae) list_single_heading_pane_vc_g2_ParamLimits

0x1015,	// (0x000421ae) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00050746) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00050746) list_single_heading_pane_vc_g

0x04c5,	// (0x0004165e) list_single_heading_pane_vc_t1_ParamLimits

0x04c5,	// (0x0004165e) list_single_heading_pane_vc_t1

0x04db,	// (0x00041674) list_single_heading_pane_vc_t2_ParamLimits

0x04db,	// (0x00041674) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x00050958) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x00050958) list_single_heading_pane_vc_t

0x1d1d,	// (0x00042eb6) list_setting_number_pane_vc_g1_ParamLimits

0x1d1d,	// (0x00042eb6) list_setting_number_pane_vc_g1

0x1d29,	// (0x00042ec2) list_setting_number_pane_vc_g2_ParamLimits

0x1d29,	// (0x00042ec2) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0005095d) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0005095d) list_setting_number_pane_vc_g

0x04ed,	// (0x00041686) list_setting_number_pane_vc_t1_ParamLimits

0x04ed,	// (0x00041686) list_setting_number_pane_vc_t1

0x0501,	// (0x0004169a) list_setting_number_pane_vc_t2_ParamLimits

0x0501,	// (0x0004169a) list_setting_number_pane_vc_t2

0x051d,	// (0x000416b6) list_setting_number_pane_vc_t3_ParamLimits

0x051d,	// (0x000416b6) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x00050962) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x00050962) list_setting_number_pane_vc_t

0x0549,	// (0x000416e2) set_value_pane_vc_ParamLimits

0x0549,	// (0x000416e2) set_value_pane_vc

0x675b,	// (0x000478f4) list_double2_graphic_pane_vc_ParamLimits

0x675b,	// (0x000478f4) list_double2_graphic_pane_vc

0x675b,	// (0x000478f4) list_double2_large_graphic_pane_vc_ParamLimits

0x675b,	// (0x000478f4) list_double2_large_graphic_pane_vc

0x675b,	// (0x000478f4) list_double2_pane_vc_ParamLimits

0x675b,	// (0x000478f4) list_double2_pane_vc

0x675b,	// (0x000478f4) list_double_graphic_heading_pane_vc_ParamLimits

0x675b,	// (0x000478f4) list_double_graphic_heading_pane_vc

0x675b,	// (0x000478f4) list_double_graphic_pane_vc_ParamLimits

0x675b,	// (0x000478f4) list_double_graphic_pane_vc

0x675b,	// (0x000478f4) list_double_heading_pane_vc_ParamLimits

0x675b,	// (0x000478f4) list_double_heading_pane_vc

0x676d,	// (0x00047906) list_double_large_graphic_pane_vc_ParamLimits

0x676d,	// (0x00047906) list_double_large_graphic_pane_vc

0x675b,	// (0x000478f4) list_double_number_pane_vc_ParamLimits

0x675b,	// (0x000478f4) list_double_number_pane_vc

0x675b,	// (0x000478f4) list_double_pane_vc_ParamLimits

0x675b,	// (0x000478f4) list_double_pane_vc

0x675b,	// (0x000478f4) list_double_time_pane_vc_ParamLimits

0x675b,	// (0x000478f4) list_double_time_pane_vc

0x675b,	// (0x000478f4) list_setting_number_pane_vc_ParamLimits

0x675b,	// (0x000478f4) list_setting_number_pane_vc

0x675b,	// (0x000478f4) list_setting_pane_vc_ParamLimits

0x675b,	// (0x000478f4) list_setting_pane_vc

0x675b,	// (0x000478f4) list_single_graphic_heading_pane_vc_ParamLimits

0x675b,	// (0x000478f4) list_single_graphic_heading_pane_vc

0x675b,	// (0x000478f4) list_single_heading_pane_vc_ParamLimits

0x675b,	// (0x000478f4) list_single_heading_pane_vc

0x675b,	// (0x000478f4) list_single_number_heading_pane_vc_ParamLimits

0x675b,	// (0x000478f4) list_single_number_heading_pane_vc

0xf4e3,	// (0x0005067c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xf4e3,	// (0x0005067c) list_double_graphic_heading_pane_vc_g1

0x44b8,	// (0x00045651) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x44b8,	// (0x00045651) list_double_graphic_heading_pane_vc_g2

0x1015,	// (0x000421ae) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1015,	// (0x000421ae) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf79e,	// (0x00050937) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00050937) list_double_graphic_heading_pane_vc_g

0x0621,	// (0x000417ba) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0621,	// (0x000417ba) list_double_graphic_heading_pane_vc_t1

0x063d,	// (0x000417d6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x063d,	// (0x000417d6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x00050b67) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x00050b67) list_double_graphic_heading_pane_vc_t

0x1d1d,	// (0x00042eb6) list_setting_pane_vc_g1_ParamLimits

0x1d1d,	// (0x00042eb6) list_setting_pane_vc_g1

0x1d29,	// (0x00042ec2) list_setting_pane_vc_g2_ParamLimits

0x1d29,	// (0x00042ec2) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0005095d) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0005095d) list_setting_pane_vc_g

0x065b,	// (0x000417f4) list_setting_pane_vc_t1_ParamLimits

0x065b,	// (0x000417f4) list_setting_pane_vc_t1

0x0677,	// (0x00041810) list_setting_pane_vc_t2_ParamLimits

0x0677,	// (0x00041810) list_setting_pane_vc_t2

0x0001,

0xf9fc,	// (0x00050b95) list_setting_pane_vc_t_ParamLimits

0xf9fc,	// (0x00050b95) list_setting_pane_vc_t

0x0549,	// (0x000416e2) set_value_pane_cp_vc_ParamLimits

0x0549,	// (0x000416e2) set_value_pane_cp_vc

0x44b8,	// (0x00045651) list_single_number_heading_pane_vc_g1_ParamLimits

0x44b8,	// (0x00045651) list_single_number_heading_pane_vc_g1

0x1015,	// (0x000421ae) list_single_number_heading_pane_vc_g2_ParamLimits

0x1015,	// (0x000421ae) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00050746) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00050746) list_single_number_heading_pane_vc_g

0xf4a9,	// (0x00050642) list_single_number_heading_pane_vc_t1_ParamLimits

0xf4a9,	// (0x00050642) list_single_number_heading_pane_vc_t1

0x0693,	// (0x0004182c) list_single_number_heading_pane_vc_t2_ParamLimits

0x0693,	// (0x0004182c) list_single_number_heading_pane_vc_t2

0xf4d1,	// (0x0005066a) list_single_number_heading_pane_vc_t3_ParamLimits

0xf4d1,	// (0x0005066a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa01,	// (0x00050b9a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x00050b9a) list_single_number_heading_pane_vc_t

0xf4e3,	// (0x0005067c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xf4e3,	// (0x0005067c) list_single_graphic_heading_pane_vc_g1

0x44b8,	// (0x00045651) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x44b8,	// (0x00045651) list_single_graphic_heading_pane_vc_g4

0x1015,	// (0x000421ae) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1015,	// (0x000421ae) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x00050937) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00050937) list_single_graphic_heading_pane_vc_g

0xf4a9,	// (0x00050642) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xf4a9,	// (0x00050642) list_single_graphic_heading_pane_vc_t1

0x06a9,	// (0x00041842) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x06a9,	// (0x00041842) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa08,	// (0x00050ba1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x00050ba1) list_single_graphic_heading_pane_vc_t

0x44b8,	// (0x00045651) list_double2_pane_vc_g1_ParamLimits

0x44b8,	// (0x00045651) list_double2_pane_vc_g1

0x1015,	// (0x000421ae) list_double2_pane_vc_g2_ParamLimits

0x1015,	// (0x000421ae) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x00050746) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x00050746) list_double2_pane_vc_g

0x05d4,	// (0x0004176d) list_double2_pane_vc_t1_ParamLimits

0x05d4,	// (0x0004176d) list_double2_pane_vc_t1

0x213e,	// (0x000432d7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x213e,	// (0x000432d7) list_double2_large_graphic_pane_vc_g1

0x44b8,	// (0x00045651) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x44b8,	// (0x00045651) list_double2_large_graphic_pane_vc_g2

0x1015,	// (0x000421ae) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1015,	// (0x000421ae) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x0005075e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x0005075e) list_double2_large_graphic_pane_vc_g

0x06bb,	// (0x00041854) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x06bb,	// (0x00041854) list_double2_large_graphic_pane_vc_t1

0x214a,	// (0x000432e3) list_double_time_pane_vc_g1_ParamLimits

0x214a,	// (0x000432e3) list_double_time_pane_vc_g1

0x2156,	// (0x000432ef) list_double_time_pane_vc_g2_ParamLimits

0x2156,	// (0x000432ef) list_double_time_pane_vc_g2

0x0001,

0xfa0d,	// (0x00050ba6) list_double_time_pane_vc_g_ParamLimits

0xfa0d,	// (0x00050ba6) list_double_time_pane_vc_g

0x06d1,	// (0x0004186a) list_double_time_pane_vc_t1_ParamLimits

0x06d1,	// (0x0004186a) list_double_time_pane_vc_t1

0x06f5,	// (0x0004188e) list_double_time_pane_vc_t2_ParamLimits

0x06f5,	// (0x0004188e) list_double_time_pane_vc_t2

0x0744,	// (0x000418dd) list_double_time_pane_vc_t3_ParamLimits

0x0744,	// (0x000418dd) list_double_time_pane_vc_t3

0x0756,	// (0x000418ef) list_double_time_pane_vc_t4_ParamLimits

0x0756,	// (0x000418ef) list_double_time_pane_vc_t4

0x0003,

0xfa12,	// (0x00050bab) list_double_time_pane_vc_t_ParamLimits

0xfa12,	// (0x00050bab) list_double_time_pane_vc_t

0x44b8,	// (0x00045651) list_double_pane_vc_g1_ParamLimits

0x44b8,	// (0x00045651) list_double_pane_vc_g1

0x1015,	// (0x000421ae) list_double_pane_vc_g2_ParamLimits

0x1015,	// (0x000421ae) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x00050746) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x00050746) list_double_pane_vc_g

0x076a,	// (0x00041903) list_double_pane_vc_t1_ParamLimits

0x076a,	// (0x00041903) list_double_pane_vc_t1

0x077e,	// (0x00041917) list_double_pane_vc_t2_ParamLimits

0x077e,	// (0x00041917) list_double_pane_vc_t2

0x0001,

0xfa1b,	// (0x00050bb4) list_double_pane_vc_t_ParamLimits

0xfa1b,	// (0x00050bb4) list_double_pane_vc_t

0x44b8,	// (0x00045651) list_double_number_pane_vc_g1_ParamLimits

0x44b8,	// (0x00045651) list_double_number_pane_vc_g1

0x1015,	// (0x000421ae) list_double_number_pane_vc_g2_ParamLimits

0x1015,	// (0x000421ae) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x00050746) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x00050746) list_double_number_pane_vc_g

0x0796,	// (0x0004192f) list_double_number_pane_vc_t1_ParamLimits

0x0796,	// (0x0004192f) list_double_number_pane_vc_t1

0x07a8,	// (0x00041941) list_double_number_pane_vc_t2_ParamLimits

0x07a8,	// (0x00041941) list_double_number_pane_vc_t2

0x07bc,	// (0x00041955) list_double_number_pane_vc_t3_ParamLimits

0x07bc,	// (0x00041955) list_double_number_pane_vc_t3

0x0002,

0xfa20,	// (0x00050bb9) list_double_number_pane_vc_t_ParamLimits

0xfa20,	// (0x00050bb9) list_double_number_pane_vc_t

0x2162,	// (0x000432fb) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2162,	// (0x000432fb) list_double_large_graphic_pane_vc_g1

0x217e,	// (0x00043317) list_double_large_graphic_pane_vc_g2_ParamLimits

0x217e,	// (0x00043317) list_double_large_graphic_pane_vc_g2

0x2192,	// (0x0004332b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2192,	// (0x0004332b) list_double_large_graphic_pane_vc_g3

0x07d4,	// (0x0004196d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x07d4,	// (0x0004196d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa27,	// (0x00050bc0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa27,	// (0x00050bc0) list_double_large_graphic_pane_vc_g

0x07e3,	// (0x0004197c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x07e3,	// (0x0004197c) list_double_large_graphic_pane_vc_t1

0x07ff,	// (0x00041998) list_double_large_graphic_pane_vc_t2_ParamLimits

0x07ff,	// (0x00041998) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa30,	// (0x00050bc9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa30,	// (0x00050bc9) list_double_large_graphic_pane_vc_t

0x44b8,	// (0x00045651) list_double_heading_pane_vc_g1_ParamLimits

0x44b8,	// (0x00045651) list_double_heading_pane_vc_g1

0x1015,	// (0x000421ae) list_double_heading_pane_vc_g2_ParamLimits

0x1015,	// (0x000421ae) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00050746) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00050746) list_double_heading_pane_vc_g

0x0821,	// (0x000419ba) list_double_heading_pane_vc_t1_ParamLimits

0x0821,	// (0x000419ba) list_double_heading_pane_vc_t1

0x0835,	// (0x000419ce) list_double_heading_pane_vc_t2_ParamLimits

0x0835,	// (0x000419ce) list_double_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x00050bce) list_double_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x00050bce) list_double_heading_pane_vc_t

0x084d,	// (0x000419e6) list_double_graphic_pane_vc_g1_ParamLimits

0x084d,	// (0x000419e6) list_double_graphic_pane_vc_g1

0x21a1,	// (0x0004333a) list_double_graphic_pane_vc_g2_ParamLimits

0x21a1,	// (0x0004333a) list_double_graphic_pane_vc_g2

0x44b8,	// (0x00045651) list_double_graphic_pane_vc_g3_ParamLimits

0x44b8,	// (0x00045651) list_double_graphic_pane_vc_g3

0x0003,

0xfa3a,	// (0x00050bd3) list_double_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x00050bd3) list_double_graphic_pane_vc_g

0x0859,	// (0x000419f2) list_double_graphic_pane_vc_t1_ParamLimits

0x0859,	// (0x000419f2) list_double_graphic_pane_vc_t1

0x0883,	// (0x00041a1c) list_double_graphic_pane_vc_t2_ParamLimits

0x0883,	// (0x00041a1c) list_double_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x00050bdc) list_double_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x00050bdc) list_double_graphic_pane_vc_t

0x0bad,	// (0x00041d46) aid_size_cell_fastswap

0xbd0e,	// (0x0004cea7) aid_size_cell_touch_ParamLimits

0xbd0e,	// (0x0004cea7) aid_size_cell_touch

0x0e10,	// (0x00041fa9) popup_fast_swap_wide_window_ParamLimits

0x0e10,	// (0x00041fa9) popup_fast_swap_wide_window

0xbebe,	// (0x0004d057) touch_pane_ParamLimits

0xbebe,	// (0x0004d057) touch_pane

0x3ca2,	// (0x00044e3b) button_value_adjust_pane_cp2

0x015a,	// (0x000412f3) button_value_adjust_pane_cp4

0x017e,	// (0x00041317) form_field_data_pane_cp2

0xba3b,	// (0x0004cbd4) form_field_data_wide_pane_cp2

0x4129,	// (0x000452c2) bg_scroll_pane_ParamLimits

0x1247,	// (0x000423e0) scroll_handle_pane_ParamLimits

0x125b,	// (0x000423f4) scroll_sc2_down_pane_ParamLimits

0x125b,	// (0x000423f4) scroll_sc2_down_pane

0x415a,	// (0x000452f3) scroll_sc2_up_pane_ParamLimits

0x415a,	// (0x000452f3) scroll_sc2_up_pane

0xdfe6,	// (0x0004f17f) grid_wheel_folder_pane_g1_ParamLimits

0xdfe6,	// (0x0004f17f) grid_wheel_folder_pane_g1

0x143c,	// (0x000425d5) clock_nsta_pane_cp2_ParamLimits

0x143c,	// (0x000425d5) clock_nsta_pane_cp2

0xd4e7,	// (0x0004e680) listscroll_midp_pane_ParamLimits

0xd4f3,	// (0x0004e68c) midp_canvas_pane

0x4c68,	// (0x00045e01) nsta_clock_indic_pane

0x4c9c,	// (0x00045e35) listscroll_form_pane_vc

0x4ca4,	// (0x00045e3d) listscroll_set_pane_vc_ParamLimits

0x4ca4,	// (0x00045e3d) listscroll_set_pane_vc

0xd701,	// (0x0004e89a) clock_nsta_pane

0xd72b,	// (0x0004e8c4) indicator_nsta_pane

0x50f8,	// (0x00046291) bg_popup_sub_pane_cp2_ParamLimits

0x510c,	// (0x000462a5) find_pane_cp2_ParamLimits

0x510c,	// (0x000462a5) find_pane_cp2

0x5122,	// (0x000462bb) grid_toobar_pane_ParamLimits

0x5202,	// (0x0004639b) list_form_gen_pane_vc_ParamLimits

0x5202,	// (0x0004639b) list_form_gen_pane_vc

0x5218,	// (0x000463b1) scroll_pane_cp8_vc_ParamLimits

0x5218,	// (0x000463b1) scroll_pane_cp8_vc

0x5294,	// (0x0004642d) data_form_wide_pane_vc_ParamLimits

0x5294,	// (0x0004642d) data_form_wide_pane_vc

0x52a0,	// (0x00046439) form_field_data_wide_pane_vc_g1

0x52a8,	// (0x00046441) form_field_data_wide_pane_vc_t1_ParamLimits

0x52a8,	// (0x00046441) form_field_data_wide_pane_vc_t1

0x3cb6,	// (0x00044e4f) input_focus_pane_cp6_vc_ParamLimits

0x3cb6,	// (0x00044e4f) input_focus_pane_cp6_vc

0x55ee,	// (0x00046787) list_midp_pane_ParamLimits

0x693d,	// (0x00047ad6) scroll_pane_cp16_ParamLimits

0x693d,	// (0x00047ad6) scroll_pane_cp16

0x5644,	// (0x000467dd) button_value_adjust_pane_ParamLimits

0x5644,	// (0x000467dd) button_value_adjust_pane

0xdc38,	// (0x0004edd1) button_value_adjust_pane_cp6_ParamLimits

0xdc38,	// (0x0004edd1) button_value_adjust_pane_cp6

0xdd52,	// (0x0004eeeb) settings_code_pane_cp_ParamLimits

0xdd52,	// (0x0004eeeb) settings_code_pane_cp

0xe26d,	// (0x0004f406) cell_touch_pane_g1

0xe26d,	// (0x0004f406) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x0005087c) cell_touch_pane_g

0xdec4,	// (0x0004f05d) cell_touch_pane_cp_ParamLimits

0xdec4,	// (0x0004f05d) cell_touch_pane_cp

0xdee0,	// (0x0004f079) cell_touch_pane_ParamLimits

0xdee0,	// (0x0004f079) cell_touch_pane

0xe26d,	// (0x0004f406) scroll_sc2_down_pane_g1

0xe26d,	// (0x0004f406) scroll_sc2_up_pane_g1

0x333d,	// (0x000444d6) bg_set_opt_pane_cp4_vc

0x6ccd,	// (0x00047e66) list_set_graphic_pane_vc_g1_ParamLimits

0x6ccd,	// (0x00047e66) list_set_graphic_pane_vc_g1

0x6cd9,	// (0x00047e72) list_set_graphic_pane_vc_g2_ParamLimits

0x6cd9,	// (0x00047e72) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x00050b6c) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x00050b6c) list_set_graphic_pane_vc_g

0x6ce5,	// (0x00047e7e) text_primary_small_cp13_vc_ParamLimits

0x6ce5,	// (0x00047e7e) text_primary_small_cp13_vc

0x6cfd,	// (0x00047e96) list_set_graphic_pane_vc_ParamLimits

0x6cfd,	// (0x00047e96) list_set_graphic_pane_vc

0x333d,	// (0x000444d6) input_focus_pane_cp2_vc

0xe26d,	// (0x0004f406) setting_code_pane_vc_g1

0x3468,	// (0x00044601) setting_code_pane_vc_t1

0x6d10,	// (0x00047ea9) set_text_pane_vc_t1_ParamLimits

0x6d10,	// (0x00047ea9) set_text_pane_vc_t1

0x333d,	// (0x000444d6) input_focus_pane_cp1_vc

0x6d2c,	// (0x00047ec5) list_set_text_pane_vc

0xe26d,	// (0x0004f406) setting_text_pane_vc_g1

0x333d,	// (0x000444d6) bg_set_opt_pane_cp2_vc

0x345f,	// (0x000445f8) setting_slider_graphic_pane_vc_g1

0x6d36,	// (0x00047ecf) setting_slider_graphic_pane_vc_t1

0x6d46,	// (0x00047edf) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x00050b71) setting_slider_graphic_pane_vc_t

0x6d56,	// (0x00047eef) slider_set_pane_cp_vc

0x6d5e,	// (0x00047ef7) slider_set_pane_vc_g1

0x6d67,	// (0x00047f00) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x00050b76) slider_set_pane_vc_g

0x3d02,	// (0x00044e9b) set_opt_bg_pane_g1_copy1

0x3d0a,	// (0x00044ea3) set_opt_bg_pane_g2_copy1

0x6d93,	// (0x00047f2c) set_opt_bg_pane_g3_copy1

0x3d1a,	// (0x00044eb3) set_opt_bg_pane_g4_copy1

0x3d22,	// (0x00044ebb) set_opt_bg_pane_g5_copy1

0x3d2a,	// (0x00044ec3) set_opt_bg_pane_g6_copy1

0x6d9d,	// (0x00047f36) set_opt_bg_pane_g7_copy1

0x6da7,	// (0x00047f40) set_opt_bg_pane_g8_copy1

0x6db1,	// (0x00047f4a) set_opt_bg_pane_g9_copy1

0x333d,	// (0x000444d6) bg_set_opt_pane_cp_vc

0x6dbb,	// (0x00047f54) setting_slider_pane_vc_t1

0x6dca,	// (0x00047f63) setting_slider_pane_vc_t2

0x6dda,	// (0x00047f73) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x00050b85) setting_slider_pane_vc_t

0x6dea,	// (0x00047f83) slider_set_pane_vc

0x1dd2,	// (0x00042f6b) volume_set_pane_vc_g1

0x1ddb,	// (0x00042f74) volume_set_pane_vc_g2

0x1de4,	// (0x00042f7d) volume_set_pane_vc_g3

0x1ded,	// (0x00042f86) volume_set_pane_vc_g4

0x1df6,	// (0x00042f8f) volume_set_pane_vc_g5

0x1dff,	// (0x00042f98) volume_set_pane_vc_g6

0x1e08,	// (0x00042fa1) volume_set_pane_vc_g7

0x1e11,	// (0x00042faa) volume_set_pane_vc_g8

0x1e1a,	// (0x00042fb3) volume_set_pane_vc_g9

0x1e23,	// (0x00042fbc) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x00050a2a) volume_set_pane_vc_g

0x6df2,	// (0x00047f8b) volume_set_pane_vc

0x6dfa,	// (0x00047f93) button_value_adjust_pane_cp1_vc

0x6e04,	// (0x00047f9d) list_highlight_pane_cp2_vc

0x6e0d,	// (0x00047fa6) list_set_pane_vc_ParamLimits

0x6e0d,	// (0x00047fa6) list_set_pane_vc

0x6e6b,	// (0x00048004) main_pane_set_vc_t1_ParamLimits

0x6e6b,	// (0x00048004) main_pane_set_vc_t1

0x6e80,	// (0x00048019) main_pane_set_vc_t2_ParamLimits

0x6e80,	// (0x00048019) main_pane_set_vc_t2

0x6e92,	// (0x0004802b) main_pane_set_vc_t3_ParamLimits

0x6e92,	// (0x0004802b) main_pane_set_vc_t3

0x6ea6,	// (0x0004803f) main_pane_set_vc_t4_ParamLimits

0x6ea6,	// (0x0004803f) main_pane_set_vc_t4

0x0003,

0xf9f3,	// (0x00050b8c) main_pane_set_vc_t_ParamLimits

0xf9f3,	// (0x00050b8c) main_pane_set_vc_t

0x6eba,	// (0x00048053) setting_code_pane_vc_ParamLimits

0x6eba,	// (0x00048053) setting_code_pane_vc

0x6ecb,	// (0x00048064) setting_slider_graphic_pane_vc

0x6ecb,	// (0x00048064) setting_slider_pane_vc

0x6ecb,	// (0x00048064) setting_text_pane_vc

0x6ecb,	// (0x00048064) setting_volume_pane_vc

0x6ed5,	// (0x0004806e) scroll_pane_cp121_vc

0x3c90,	// (0x00044e29) set_content_pane_vc

0x6edd,	// (0x00048076) button_value_adjust_pane_g1

0x6ee6,	// (0x0004807f) button_value_adjust_pane_g2

0x0001,

0xfa48,	// (0x00050be1) button_value_adjust_pane_g

0x6eef,	// (0x00048088) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6eef,	// (0x00048088) form_field_slider_wide_pane_vc_t1

0x6f03,	// (0x0004809c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6f03,	// (0x0004809c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa4d,	// (0x00050be6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa4d,	// (0x00050be6) form_field_slider_wide_pane_vc_t

0x3698,	// (0x00044831) input_focus_pane_cp10_vc_ParamLimits

0x3698,	// (0x00044831) input_focus_pane_cp10_vc

0x6f31,	// (0x000480ca) slider_cont_pane_cp1_vc_ParamLimits

0x6f31,	// (0x000480ca) slider_cont_pane_cp1_vc

0x6f43,	// (0x000480dc) slider_form_pane_g1_cp2

0x6d67,	// (0x00047f00) slider_form_pane_g2_cp2

0x6f70,	// (0x00048109) form_field_slider_pane_vc_t3

0x6f7e,	// (0x00048117) form_field_slider_pane_vc_t4

0x6f8c,	// (0x00048125) slider_form_pane_vc_ParamLimits

0x6f8c,	// (0x00048125) slider_form_pane_vc

0x6f99,	// (0x00048132) form_field_slider_pane_vc_t1_ParamLimits

0x6f99,	// (0x00048132) form_field_slider_pane_vc_t1

0x6f03,	// (0x0004809c) form_field_slider_pane_vc_t2_ParamLimits

0x6f03,	// (0x0004809c) form_field_slider_pane_vc_t2

0x0001,

0xfa5f,	// (0x00050bf8) form_field_slider_pane_vc_t_ParamLimits

0xfa5f,	// (0x00050bf8) form_field_slider_pane_vc_t

0x3698,	// (0x00044831) input_focus_pane_cp9_vc_ParamLimits

0x3698,	// (0x00044831) input_focus_pane_cp9_vc

0x6fb5,	// (0x0004814e) slider_cont_pane_vc_ParamLimits

0x6fb5,	// (0x0004814e) slider_cont_pane_vc

0x6fc9,	// (0x00048162) list_form_graphic_pane_cp_vc_ParamLimits

0x6fc9,	// (0x00048162) list_form_graphic_pane_cp_vc

0x52a0,	// (0x00046439) form_field_popup_wide_pane_vc_g1

0x6fde,	// (0x00048177) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6fde,	// (0x00048177) form_field_popup_wide_pane_vc_t1

0x3cb6,	// (0x00044e4f) input_focus_pane_cp8_vc_ParamLimits

0x3cb6,	// (0x00044e4f) input_focus_pane_cp8_vc

0x7023,	// (0x000481bc) list_form_wide_pane_vc_ParamLimits

0x7023,	// (0x000481bc) list_form_wide_pane_vc

0x702f,	// (0x000481c8) list_form_graphic_pane_vc_g1

0x7037,	// (0x000481d0) list_form_graphic_pane_vc_t1_ParamLimits

0x7037,	// (0x000481d0) list_form_graphic_pane_vc_t1

0x341d,	// (0x000445b6) list_highlight_pane_cp5_vc_ParamLimits

0x341d,	// (0x000445b6) list_highlight_pane_cp5_vc

0x7053,	// (0x000481ec) list_form_graphic_pane_vc_ParamLimits

0x7053,	// (0x000481ec) list_form_graphic_pane_vc

0x52a0,	// (0x00046439) form_field_popup_pane_vc_g1

0x7069,	// (0x00048202) form_field_popup_pane_vc_t1_ParamLimits

0x7069,	// (0x00048202) form_field_popup_pane_vc_t1

0x3cb6,	// (0x00044e4f) input_focus_pane_cp7_vc_ParamLimits

0x3cb6,	// (0x00044e4f) input_focus_pane_cp7_vc

0x7080,	// (0x00048219) list_form_pane_vc_ParamLimits

0x7080,	// (0x00048219) list_form_pane_vc

0x708c,	// (0x00048225) data_form_pane_vc_t1_ParamLimits

0x708c,	// (0x00048225) data_form_pane_vc_t1

0x3d02,	// (0x00044e9b) input_focus_pane_vc_g1

0x3d0a,	// (0x00044ea3) input_focus_pane_vc_g2

0x3d12,	// (0x00044eab) input_focus_pane_vc_g3

0x3d1a,	// (0x00044eb3) input_focus_pane_vc_g4

0x3d22,	// (0x00044ebb) input_focus_pane_vc_g5

0x3d2a,	// (0x00044ec3) input_focus_pane_vc_g6

0x3d32,	// (0x00044ecb) input_focus_pane_vc_g7

0x3d3a,	// (0x00044ed3) input_focus_pane_vc_g8

0x3d42,	// (0x00044edb) input_focus_pane_vc_g9

0xe26d,	// (0x0004f406) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x00050805) input_focus_pane_vc_g

0x5294,	// (0x0004642d) data_form_pane_vc_ParamLimits

0x5294,	// (0x0004642d) data_form_pane_vc

0x52a0,	// (0x00046439) form_field_data_pane_vc_g1

0x70a7,	// (0x00048240) form_field_data_pane_vc_t1_ParamLimits

0x70a7,	// (0x00048240) form_field_data_pane_vc_t1

0x3cb6,	// (0x00044e4f) input_focus_pane_vc_ParamLimits

0x3cb6,	// (0x00044e4f) input_focus_pane_vc

0x70c1,	// (0x0004825a) button_value_adjust_pane_cp3_vc

0x70c9,	// (0x00048262) button_value_adjust_pane_cp5_vc

0x70d1,	// (0x0004826a) form_field_data_pane_vc_ParamLimits

0x70d1,	// (0x0004826a) form_field_data_pane_vc

0x70e8,	// (0x00048281) form_field_data_pane_vc_cp2

0x70f0,	// (0x00048289) form_field_data_wide_pane_vc_ParamLimits

0x70f0,	// (0x00048289) form_field_data_wide_pane_vc

0x7106,	// (0x0004829f) form_field_data_wide_pane_vc_cp2

0x710e,	// (0x000482a7) form_field_popup_pane_vc_ParamLimits

0x710e,	// (0x000482a7) form_field_popup_pane_vc

0x7125,	// (0x000482be) form_field_popup_wide_pane_vc_ParamLimits

0x7125,	// (0x000482be) form_field_popup_wide_pane_vc

0x713b,	// (0x000482d4) form_field_slider_pane_vc_ParamLimits

0x713b,	// (0x000482d4) form_field_slider_pane_vc

0x714e,	// (0x000482e7) form_field_slider_wide_pane_vc_ParamLimits

0x714e,	// (0x000482e7) form_field_slider_wide_pane_vc

0xdefe,	// (0x0004f097) grid_touch_1_pane_ParamLimits

0xdefe,	// (0x0004f097) grid_touch_1_pane

0xdf12,	// (0x0004f0ab) grid_touch_2_pane_ParamLimits

0xdf12,	// (0x0004f0ab) grid_touch_2_pane

0x7232,	// (0x000483cb) touch_pane_g1_ParamLimits

0x7232,	// (0x000483cb) touch_pane_g1

0x7185,	// (0x0004831e) cell_app_pane_cp_wide_ParamLimits

0x7185,	// (0x0004831e) cell_app_pane_cp_wide

0x7196,	// (0x0004832f) grid_popup_fast_wide_pane_ParamLimits

0x7196,	// (0x0004832f) grid_popup_fast_wide_pane

0x71aa,	// (0x00048343) scroll_pane_cp19_ParamLimits

0x71aa,	// (0x00048343) scroll_pane_cp19

0x333d,	// (0x000444d6) bg_popup_window_pane_cp20

0x71be,	// (0x00048357) listscroll_popup_fast_wide_pane

0xdf3c,	// (0x0004f0d5) grid_indicator_nsta_pane

0x71d8,	// (0x00048371) clock_nsta_pane_g1

0x71e1,	// (0x0004837a) clock_nsta_pane_t1

0xdf48,	// (0x0004f0e1) cell_indicator_nsta_pane_ParamLimits

0xdf48,	// (0x0004f0e1) cell_indicator_nsta_pane

0x7232,	// (0x000483cb) cell_indicator_nsta_pane_g1

0xdf63,	// (0x0004f0fc) cell_indicator_nsta_pane_g2

0x0001,

0xfa70,	// (0x00050c09) cell_indicator_nsta_pane_g

0x7252,	// (0x000483eb) clock_nsta_pane_cp

0x725b,	// (0x000483f4) indicator_nsta_pane_cp

0x7265,	// (0x000483fe) nsta_clock_indic_pane_g1

0x34e6,	// (0x0004467f) grid_indicator_pane

0x424f,	// (0x000453e8) scroll_pane_cp29

0x138b,	// (0x00042524) indicator_nsta_pane_cp2_ParamLimits

0x138b,	// (0x00042524) indicator_nsta_pane_cp2

0x341d,	// (0x000445b6) main_apps_wheel_pane

0x54af,	// (0x00046648) form_midp_field_text_pane_ParamLimits

0x55fa,	// (0x00046793) scroll_bar_cp050_ParamLimits

0x72be,	// (0x00048457) cell_indicator_pane_ParamLimits

0x72be,	// (0x00048457) cell_indicator_pane

0x72d5,	// (0x0004846e) cell_indicator_pane_g1

0xdf70,	// (0x0004f109) grid_wheel_folder_pane_ParamLimits

0xdf70,	// (0x0004f109) grid_wheel_folder_pane

0xdf7e,	// (0x0004f117) list_wheel_apps_pane_ParamLimits

0xdf7e,	// (0x0004f117) list_wheel_apps_pane

0xdf8c,	// (0x0004f125) main_apps_wheel_pane_g1_ParamLimits

0xdf8c,	// (0x0004f125) main_apps_wheel_pane_g1

0xdf98,	// (0x0004f131) main_apps_wheel_pane_g2_ParamLimits

0xdf98,	// (0x0004f131) main_apps_wheel_pane_g2

0x0001,

0xfa8c,	// (0x00050c25) main_apps_wheel_pane_g_ParamLimits

0xfa8c,	// (0x00050c25) main_apps_wheel_pane_g

0xdfa6,	// (0x0004f13f) main_apps_wheel_pane_t1_ParamLimits

0xdfa6,	// (0x0004f13f) main_apps_wheel_pane_t1

0xdfba,	// (0x0004f153) list_wheel_apps_pane_g1

0xdfc2,	// (0x0004f15b) list_wheel_apps_pane_g2

0xdfca,	// (0x0004f163) list_wheel_apps_pane_g3

0xdfd2,	// (0x0004f16b) list_wheel_apps_pane_g4

0xdfdc,	// (0x0004f175) list_wheel_apps_pane_g5

0x0004,

0xfa91,	// (0x00050c2a) list_wheel_apps_pane_g

0x47ef,	// (0x00045988) navi_icon_text_pane

0xd5f5,	// (0x0004e78e) aid_fill_nsta

0x739a,	// (0x00048533) navi_icon_text_pane_g1

0x73a6,	// (0x0004853f) navi_icon_text_pane_t1

0x468d,	// (0x00045826) list_set_graphic_pane_t1_ParamLimits

0x468d,	// (0x00045826) list_set_graphic_pane_t1

0x5d65,	// (0x00046efe) popup_midp_note_alarm_window_t6_ParamLimits

0x5d65,	// (0x00046efe) popup_midp_note_alarm_window_t6

0x5d77,	// (0x00046f10) popup_midp_note_alarm_window_t7_ParamLimits

0x5d77,	// (0x00046f10) popup_midp_note_alarm_window_t7

0x5d89,	// (0x00046f22) popup_midp_note_alarm_window_t8_ParamLimits

0x5d89,	// (0x00046f22) popup_midp_note_alarm_window_t8

0x5d9b,	// (0x00046f34) popup_midp_note_alarm_window_t9_ParamLimits

0x5d9b,	// (0x00046f34) popup_midp_note_alarm_window_t9

0x5dad,	// (0x00046f46) popup_midp_note_alarm_window_t10_ParamLimits

0x5dad,	// (0x00046f46) popup_midp_note_alarm_window_t10

0x5dbf,	// (0x00046f58) popup_midp_note_alarm_window_t11_ParamLimits

0x5dbf,	// (0x00046f58) popup_midp_note_alarm_window_t11

0x5dd1,	// (0x00046f6a) scroll_pane_cp17_ParamLimits

0x5dd1,	// (0x00046f6a) scroll_pane_cp17

0x1dd2,	// (0x00042f6b) volume_small_pane_cp_g1

0x21be,	// (0x00043357) volume_small_pane_cp_g2

0x21c7,	// (0x00043360) volume_small_pane_cp_g3

0x21d0,	// (0x00043369) volume_small_pane_cp_g4

0x21d9,	// (0x00043372) volume_small_pane_cp_g5

0x21e2,	// (0x0004337b) volume_small_pane_cp_g6

0x21eb,	// (0x00043384) volume_small_pane_cp_g7

0x21f4,	// (0x0004338d) volume_small_pane_cp_g8

0x21fd,	// (0x00043396) volume_small_pane_cp_g9

0x2206,	// (0x0004339f) volume_small_pane_cp_g10

0x4a49,	// (0x00045be2) midp_ticker_pane_g1_ParamLimits

0x4a55,	// (0x00045bee) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x000508d1) midp_ticker_pane_g_ParamLimits

0x4a61,	// (0x00045bfa) midp_ticker_pane_t1_ParamLimits

0xd619,	// (0x0004e7b2) aid_fill_nsta_2

0x55e6,	// (0x0004677f) list_form2_midp_pane

0x672a,	// (0x000478c3) midp_editing_number_pane_ParamLimits

0x6739,	// (0x000478d2) midp_ticker_pane_ParamLimits

0x73b8,	// (0x00048551) form2_midp_field_pane

0x73dc,	// (0x00048575) scroll_pane_cp51

0x73fc,	// (0x00048595) form2_midp_button_pane_ParamLimits

0x73fc,	// (0x00048595) form2_midp_button_pane

0x740e,	// (0x000485a7) form2_midp_content_pane_ParamLimits

0x740e,	// (0x000485a7) form2_midp_content_pane

0x7428,	// (0x000485c1) form2_midp_field_choice_group_pane

0x7430,	// (0x000485c9) form2_midp_field_pane_g1

0x7438,	// (0x000485d1) form2_midp_field_pane_g2

0x7440,	// (0x000485d9) form2_midp_field_pane_g3

0x7448,	// (0x000485e1) form2_midp_field_pane_g4

0x0003,

0xfab6,	// (0x00050c4f) form2_midp_field_pane_g

0x7450,	// (0x000485e9) form2_midp_gauge_slider_pane

0x7458,	// (0x000485f1) form2_midp_gauge_wait_pane

0x7460,	// (0x000485f9) form2_midp_image_pane_ParamLimits

0x7460,	// (0x000485f9) form2_midp_image_pane

0x747b,	// (0x00048614) form2_midp_label_pane_ParamLimits

0x747b,	// (0x00048614) form2_midp_label_pane

0xe00f,	// (0x0004f1a8) form2_midp_label_pane_cp_ParamLimits

0xe00f,	// (0x0004f1a8) form2_midp_label_pane_cp

0x74b5,	// (0x0004864e) form2_midp_string_pane_ParamLimits

0x74b5,	// (0x0004864e) form2_midp_string_pane

0xbbc5,	// (0x0004cd5e) form2_midp_text_pane_ParamLimits

0xbbc5,	// (0x0004cd5e) form2_midp_text_pane

0x74c7,	// (0x00048660) form2_midp_time_pane

0x74d7,	// (0x00048670) input_focus_pane_cp51_ParamLimits

0x74d7,	// (0x00048670) input_focus_pane_cp51

0x74ef,	// (0x00048688) form2_midp_label_pane_t1_ParamLimits

0x74ef,	// (0x00048688) form2_midp_label_pane_t1

0xbbde,	// (0x0004cd77) form2_mdip_text_pane_t1_ParamLimits

0xbbde,	// (0x0004cd77) form2_mdip_text_pane_t1

0x08ea,	// (0x00041a83) form2_midp_time_pane_t1

0x7538,	// (0x000486d1) form2_midp_gauge_slider_pane_t1

0xe02e,	// (0x0004f1c7) form2_midp_gauge_slider_pane_t2

0xe040,	// (0x0004f1d9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfabf,	// (0x00050c58) form2_midp_gauge_slider_pane_t

0x756e,	// (0x00048707) form2_midp_slider_pane

0x757a,	// (0x00048713) form2_midp_gauge_wait_pane_t1

0x7588,	// (0x00048721) form2_midp_wait_pane_ParamLimits

0x7588,	// (0x00048721) form2_midp_wait_pane

0xe052,	// (0x0004f1eb) list_single_2graphic_pane_cp4_ParamLimits

0xe052,	// (0x0004f1eb) list_single_2graphic_pane_cp4

0xda35,	// (0x0004ebce) list_single_midp_graphic_pane_cp_ParamLimits

0xda35,	// (0x0004ebce) list_single_midp_graphic_pane_cp

0x333d,	// (0x000444d6) list_highlight_pane_cp20

0x75d7,	// (0x00048770) list_single_2graphic_pane_g1_cp4

0x75df,	// (0x00048778) list_single_2graphic_pane_g2_cp4

0x75e7,	// (0x00048780) list_single_2graphic_pane_t1_cp4

0x341d,	// (0x000445b6) list_highlight_pane_cp21

0x75f6,	// (0x0004878f) list_single_midp_graphic_pane_g4_cp

0x7605,	// (0x0004879e) list_single_midp_graphic_pane_t1_cp

0xe066,	// (0x0004f1ff) form2_mdip_string_pane_t1_ParamLimits

0xe066,	// (0x0004f1ff) form2_mdip_string_pane_t1

0x333d,	// (0x000444d6) bg_wml_button_pane_cp2

0xe26d,	// (0x0004f406) form2_midp_image_pane_g1

0x1095,	// (0x0004222e) list_double_large_graphic_pane_g5_ParamLimits

0x1095,	// (0x0004222e) list_double_large_graphic_pane_g5

0xd4e7,	// (0x0004e680) midp_form_pane_ParamLimits

0x341d,	// (0x000445b6) main_apps_wheel_pane_ParamLimits

0xc859,	// (0x0004d9f2) popup_preview_window_ParamLimits

0xc859,	// (0x0004d9f2) popup_preview_window

0x1c2d,	// (0x00042dc6) popup_touch_info_window_ParamLimits

0x1c2d,	// (0x00042dc6) popup_touch_info_window

0x1c4b,	// (0x00042de4) popup_touch_menu_window_ParamLimits

0x1c4b,	// (0x00042de4) popup_touch_menu_window

0xd2f4,	// (0x0004e48d) bg_popup_sub_pane_cp6

0x7713,	// (0x000488ac) list_touch_menu_pane

0x771b,	// (0x000488b4) list_single_touch_menu_pane_ParamLimits

0x771b,	// (0x000488b4) list_single_touch_menu_pane

0x7731,	// (0x000488ca) list_single_touch_menu_pane_t1

0x341d,	// (0x000445b6) bg_popup_sub_pane_cp7_ParamLimits

0x341d,	// (0x000445b6) bg_popup_sub_pane_cp7

0x773f,	// (0x000488d8) heading_sub_pane

0x7747,	// (0x000488e0) list_touch_info_pane_ParamLimits

0x7747,	// (0x000488e0) list_touch_info_pane

0x7756,	// (0x000488ef) list_single_touch_info_pane_ParamLimits

0x7756,	// (0x000488ef) list_single_touch_info_pane

0x7768,	// (0x00048901) list_single_touch_info_pane_t1

0x7776,	// (0x0004890f) list_single_touch_info_pane_t2

0x0001,

0xfacd,	// (0x00050c66) list_single_touch_info_pane_t

0x496c,	// (0x00045b05) bg_popup_heading_pane_cp

0x7784,	// (0x0004891d) heading_sub_pane_t1

0x522e,	// (0x000463c7) bg_popup_preview_window_pane_cp_ParamLimits

0x522e,	// (0x000463c7) bg_popup_preview_window_pane_cp

0x773f,	// (0x000488d8) heading_preview_pane

0x7747,	// (0x000488e0) list_preview_pane_ParamLimits

0x7747,	// (0x000488e0) list_preview_pane

0x7792,	// (0x0004892b) popup_preview_window_g1

0x7756,	// (0x000488ef) list_single_preview_pane_ParamLimits

0x7756,	// (0x000488ef) list_single_preview_pane

0x779a,	// (0x00048933) list_single_preview_pane_g1

0x77a2,	// (0x0004893b) list_single_preview_pane_t1

0x7768,	// (0x00048901) list_single_preview_pane_t2

0x0001,

0xfad2,	// (0x00050c6b) list_single_preview_pane_t

0x77b0,	// (0x00048949) bg_popup_heading_pane_cp2_ParamLimits

0x77b0,	// (0x00048949) bg_popup_heading_pane_cp2

0x77c6,	// (0x0004895f) heading_preview_pane_g1

0x77ce,	// (0x00048967) heading_preview_pane_t1_ParamLimits

0x77ce,	// (0x00048967) heading_preview_pane_t1

0x3509,	// (0x000446a2) soft_indicator_pane_t1_ParamLimits

0x3c1d,	// (0x00044db6) scroll_pane_ParamLimits

0x4148,	// (0x000452e1) scroll_sc2_left_pane

0x4151,	// (0x000452ea) scroll_sc2_right_pane

0x4170,	// (0x00045309) scroll_bg_pane_g1_ParamLimits

0x4185,	// (0x0004531e) scroll_bg_pane_g2_ParamLimits

0x419d,	// (0x00045336) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x0005085c) scroll_bg_pane_g_ParamLimits

0x4170,	// (0x00045309) scroll_handle_pane_g1_ParamLimits

0x41bf,	// (0x00045358) scroll_handle_pane_g2_ParamLimits

0x419d,	// (0x00045336) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x00050863) scroll_handle_pane_g_ParamLimits

0x16f1,	// (0x0004288a) popup_choice_list_window_ParamLimits

0x16f1,	// (0x0004288a) popup_choice_list_window

0x5104,	// (0x0004629d) choice_list_pane

0x5186,	// (0x0004631f) cell_toolbar_pane_t1

0x51ae,	// (0x00046347) toolbar_button_pane_ParamLimits

0x628b,	// (0x00047424) ai_gene_pane_1_t2_ParamLimits

0x628b,	// (0x00047424) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x00050a86) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x00050a86) ai_gene_pane_1_t

0x77eb,	// (0x00048984) scroll_sc2_left_pane_g1

0x77eb,	// (0x00048984) scroll_sc2_right_pane_g1

0x4c90,	// (0x00045e29) bg_popup_sub_pane_cp10

0x77f5,	// (0x0004898e) list_choice_list_pane

0x780e,	// (0x000489a7) list_single_choice_list_pane_ParamLimits

0x780e,	// (0x000489a7) list_single_choice_list_pane

0x7821,	// (0x000489ba) list_single_choice_list_pane_g1

0x3e4e,	// (0x00044fe7) list_single_choice_list_pane_t1_ParamLimits

0x3e4e,	// (0x00044fe7) list_single_choice_list_pane_t1

0x7829,	// (0x000489c2) choice_list_pane_g1

0x7831,	// (0x000489ca) choice_list_pane_t1

0xd2f4,	// (0x0004e48d) input_focus_pane_cp11

0x4025,	// (0x000451be) title_pane_stacon_g2_ParamLimits

0x4025,	// (0x000451be) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x00050842) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x00050842) title_pane_stacon_g

0x496c,	// (0x00045b05) cursor_press_pane

0xc500,	// (0x0004d699) popup_fep_hwr_window_ParamLimits

0xc500,	// (0x0004d699) popup_fep_hwr_window

0x1817,	// (0x000429b0) popup_fep_vkb_window_ParamLimits

0x1817,	// (0x000429b0) popup_fep_vkb_window

0x783f,	// (0x000489d8) cursor_press_pane_g1

0x0002,

0xfafb,	// (0x00050c94) fep_vkb_side_pane_g_ParamLimits

0x2248,	// (0x000433e1) fep_hwr_candidate_pane_ParamLimits

0x2248,	// (0x000433e1) fep_hwr_candidate_pane

0x2272,	// (0x0004340b) fep_hwr_side_pane_ParamLimits

0x2272,	// (0x0004340b) fep_hwr_side_pane

0x2292,	// (0x0004342b) fep_hwr_top_pane_ParamLimits

0x2292,	// (0x0004342b) fep_hwr_top_pane

0x22aa,	// (0x00043443) fep_hwr_write_pane_ParamLimits

0x22aa,	// (0x00043443) fep_hwr_write_pane

0xfafb,	// (0x00050c94) fep_vkb_side_pane_g

0x7847,	// (0x000489e0) fep_hwr_top_pane_g1

0x7859,	// (0x000489f2) fep_hwr_top_pane_g2

0x22d6,	// (0x0004346f) fep_hwr_top_pane_g3

0x0002,

0xfad7,	// (0x00050c70) fep_hwr_top_pane_g

0x22eb,	// (0x00043484) fep_hwr_top_text_pane

0x433f,	// (0x000454d8) fep_hwr_top_text_pane_g1

0x788f,	// (0x00048a28) fep_hwr_top_text_pane_t1

0x23e1,	// (0x0004357a) fep_hwr_candidate_pane_g1

0x7ae2,	// (0x00048c7b) fep_vkb_keypad_pane_g3_ParamLimits

0x7ae2,	// (0x00048c7b) fep_vkb_keypad_pane_g3

0x7b0a,	// (0x00048ca3) fep_vkb_keypad_pane_g4_ParamLimits

0x7b0a,	// (0x00048ca3) fep_vkb_keypad_pane_g4

0x7b79,	// (0x00048d12) fep_vkb_bottom_pane_g2_ParamLimits

0x7b79,	// (0x00048d12) fep_vkb_bottom_pane_g2

0x0001,

0xfb02,	// (0x00050c9b) fep_vkb_bottom_pane_g_ParamLimits

0xfb02,	// (0x00050c9b) fep_vkb_bottom_pane_g

0x77eb,	// (0x00048984) cell_vkb_side_pane_g2

0x0001,

0xfb0c,	// (0x00050ca5) cell_vkb_side_pane_g

0x7c04,	// (0x00048d9d) cell_vkb_side_pane_t1

0x7c12,	// (0x00048dab) cell_vkb_side_pane_t1_copy1

0x77eb,	// (0x00048984) bg_fep_vkb_candidate_pane_g2

0x7d3e,	// (0x00048ed7) cell_vkb_candidate_pane_ParamLimits

0x789d,	// (0x00048a36) aid_size_cell_vkb_ParamLimits

0x789d,	// (0x00048a36) aid_size_cell_vkb

0x7d3e,	// (0x00048ed7) cell_vkb_candidate_pane

0x23fb,	// (0x00043594) bg_popup_fep_shadow_pane_g1

0xe110,	// (0x0004f2a9) fep_vkb_bottom_pane_ParamLimits

0xe110,	// (0x0004f2a9) fep_vkb_bottom_pane

0x7961,	// (0x00048afa) fep_vkb_candidate_pane_ParamLimits

0x7961,	// (0x00048afa) fep_vkb_candidate_pane

0xe135,	// (0x0004f2ce) fep_vkb_keypad_pane_ParamLimits

0xe135,	// (0x0004f2ce) fep_vkb_keypad_pane

0xe171,	// (0x0004f30a) fep_vkb_side_pane_ParamLimits

0xe171,	// (0x0004f30a) fep_vkb_side_pane

0xe1ad,	// (0x0004f346) fep_vkb_top_pane_ParamLimits

0xe1ad,	// (0x0004f346) fep_vkb_top_pane

0x7a3b,	// (0x00048bd4) fep_vkb_top_pane_g1_ParamLimits

0x7a3b,	// (0x00048bd4) fep_vkb_top_pane_g1

0x7a4a,	// (0x00048be3) fep_vkb_top_pane_g2_ParamLimits

0x7a4a,	// (0x00048be3) fep_vkb_top_pane_g2

0x7a59,	// (0x00048bf2) fep_vkb_top_pane_g3_ParamLimits

0x7a59,	// (0x00048bf2) fep_vkb_top_pane_g3

0x0003,

0xfaf2,	// (0x00050c8b) fep_vkb_top_pane_g_ParamLimits

0xfaf2,	// (0x00050c8b) fep_vkb_top_pane_g

0x7a77,	// (0x00048c10) fep_vkb_top_text_pane_ParamLimits

0x7a77,	// (0x00048c10) fep_vkb_top_text_pane

0xe1e9,	// (0x0004f382) fep_vkb_side_pane_g1_ParamLimits

0xe1e9,	// (0x0004f382) fep_vkb_side_pane_g1

0x7ad1,	// (0x00048c6a) grid_vkb_side_pane_ParamLimits

0x7ad1,	// (0x00048c6a) grid_vkb_side_pane

0x2403,	// (0x0004359c) bg_popup_fep_shadow_pane_g2

0x240c,	// (0x000435a5) bg_popup_fep_shadow_pane_g3

0x2414,	// (0x000435ad) bg_popup_fep_shadow_pane_g4

0x241d,	// (0x000435b6) bg_popup_fep_shadow_pane_g5

0x2427,	// (0x000435c0) bg_popup_fep_shadow_pane_g6

0x242f,	// (0x000435c8) bg_popup_fep_shadow_pane_g7

0x3d22,	// (0x00044ebb) bg_popup_fep_shadow_pane_g8

0x7b28,	// (0x00048cc1) grid_vkb_keypad_number_pane_ParamLimits

0x7b28,	// (0x00048cc1) grid_vkb_keypad_number_pane

0x7b38,	// (0x00048cd1) grid_vkb_keypad_pane_ParamLimits

0x7b38,	// (0x00048cd1) grid_vkb_keypad_pane

0x7b5e,	// (0x00048cf7) fep_vkb_bottom_pane_g1_ParamLimits

0x7b5e,	// (0x00048cf7) fep_vkb_bottom_pane_g1

0x7b87,	// (0x00048d20) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7b87,	// (0x00048d20) grid_vkb_keypad_bottom_left_pane

0x7b9c,	// (0x00048d35) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7b9c,	// (0x00048d35) grid_vkb_keypad_bottom_right_pane

0x7bb1,	// (0x00048d4a) fep_vkb_top_text_pane_g1

0xe230,	// (0x0004f3c9) fep_vkb_top_text_pane_t1

0xe242,	// (0x0004f3db) cell_vkb_side_pane_ParamLimits

0xe242,	// (0x0004f3db) cell_vkb_side_pane

0x77eb,	// (0x00048984) cell_vkb_side_pane_g1

0x7c20,	// (0x00048db9) cell_vkb_keypad_pane_ParamLimits

0x7c20,	// (0x00048db9) cell_vkb_keypad_pane

0x7c95,	// (0x00048e2e) cell_vkb_keypad_pane_g1

0x0008,

0xfb1f,	// (0x00050cb8) bg_popup_fep_shadow_pane_g

0x77eb,	// (0x00048984) cell_hwr_side_pane_g1

0x77eb,	// (0x00048984) cell_hwr_side_pane_g2

0x7c9f,	// (0x00048e38) cell_vkb_keypad_pane_t1

0xe258,	// (0x0004f3f1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe258,	// (0x0004f3f1) cell_vkb_keypad_bottom_left_pane

0xe277,	// (0x0004f410) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe277,	// (0x0004f410) cell_vkb_keypad_bottom_right_pane

0x77eb,	// (0x00048984) cell_vkb_keypad_bottom_left_pane_g1

0x77eb,	// (0x00048984) cell_vkb_keypad_bottom_right_pane_g1

0x7d03,	// (0x00048e9c) cell_vkb_keypad_number_pane_ParamLimits

0x7d03,	// (0x00048e9c) cell_vkb_keypad_number_pane

0x7d22,	// (0x00048ebb) cell_vkb_keypad_number_pane_g1

0x7d2c,	// (0x00048ec5) cell_vkb_keypad_number_pane_g2

0x7d35,	// (0x00048ece) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb11,	// (0x00050caa) cell_vkb_keypad_number_pane_g

0x7c9f,	// (0x00048e38) cell_vkb_keypad_number_pane_t1

0x7d59,	// (0x00048ef2) fep_vkb_candidate_pane_g1

0x0001,

0xfb0c,	// (0x00050ca5) cell_hwr_side_pane_g

0x7d72,	// (0x00048f0b) cell_hwr_side_pane_t1

0x2441,	// (0x000435da) cell_hwr_side_pane_t1_copy1

0x7a69,	// (0x00048c02) cell_hwr_candidate_pane_g1

0x244f,	// (0x000435e8) cell_hwr_candidate_pane_t1

0x77eb,	// (0x00048984) cell_vkb_candidate_pane_g2

0x7df8,	// (0x00048f91) cell_vkb_candidate_pane_t1

0x220f,	// (0x000433a8) bg_popup_fep_shadow_pane_ParamLimits

0x220f,	// (0x000433a8) bg_popup_fep_shadow_pane

0xe0d6,	// (0x0004f26f) bg_fep_hwr_top_pane_g4

0x786b,	// (0x00048a04) bg_hwr_side_pane_g1_ParamLimits

0x786b,	// (0x00048a04) bg_hwr_side_pane_g1

0xcba6,	// (0x0004dd3f) cell_hwr_side_pane_ParamLimits

0xcba6,	// (0x0004dd3f) cell_hwr_side_pane

0x2362,	// (0x000434fb) fep_hwr_write_pane_g1_ParamLimits

0x2362,	// (0x000434fb) fep_hwr_write_pane_g1

0x236f,	// (0x00043508) fep_hwr_write_pane_g2_ParamLimits

0x236f,	// (0x00043508) fep_hwr_write_pane_g2

0x237c,	// (0x00043515) fep_hwr_write_pane_g3_ParamLimits

0x237c,	// (0x00043515) fep_hwr_write_pane_g3

0xcbc6,	// (0x0004dd5f) fep_hwr_write_pane_g4_ParamLimits

0xcbc6,	// (0x0004dd5f) fep_hwr_write_pane_g4

0x0005,

0xfade,	// (0x00050c77) fep_hwr_write_pane_g_ParamLimits

0xfade,	// (0x00050c77) fep_hwr_write_pane_g

0xe0d6,	// (0x0004f26f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe0d6,	// (0x0004f26f) bg_fep_hwr_candidate_pane_g2

0x239f,	// (0x00043538) cell_hwr_candidate_pane_ParamLimits

0x239f,	// (0x00043538) cell_hwr_candidate_pane

0x23e1,	// (0x0004357a) fep_hwr_candidate_pane_g1_ParamLimits

0x78cb,	// (0x00048a64) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x78cb,	// (0x00048a64) bg_popup_fep_shadow_pane_cp2

0x7a69,	// (0x00048c02) fep_vkb_top_pane_g4_ParamLimits

0x7a69,	// (0x00048c02) fep_vkb_top_pane_g4

0x7aaf,	// (0x00048c48) fep_vkb_side_pane_g2_ParamLimits

0x7aaf,	// (0x00048c48) fep_vkb_side_pane_g2

0xb95f,	// (0x0004caf8) list_setting_pane_t4_ParamLimits

0xb95f,	// (0x0004caf8) list_setting_pane_t4

0xb9e1,	// (0x0004cb7a) list_setting_number_pane_t5_ParamLimits

0xb9e1,	// (0x0004cb7a) list_setting_number_pane_t5

0x4376,	// (0x0004550f) list_double_heading_pane_cp2_ParamLimits

0x4376,	// (0x0004550f) list_double_heading_pane_cp2

0x3c51,	// (0x00044dea) list_double_heading_pane_g1_cp2_ParamLimits

0x3c51,	// (0x00044dea) list_double_heading_pane_g1_cp2

0x3cc4,	// (0x00044e5d) list_double_heading_pane_g2_cp2_ParamLimits

0x3cc4,	// (0x00044e5d) list_double_heading_pane_g2_cp2

0x7e06,	// (0x00048f9f) list_double_heading_pane_t1_cp2_ParamLimits

0x7e06,	// (0x00048f9f) list_double_heading_pane_t1_cp2

0x7e1c,	// (0x00048fb5) list_double_heading_pane_t2_cp2_ParamLimits

0x7e1c,	// (0x00048fb5) list_double_heading_pane_t2_cp2

0xd2ec,	// (0x0004e485) aid_value_unit2

0x0e6a,	// (0x00042003) popup_preview_fixed_window

0x36a6,	// (0x0004483f) bg_popup_preview_window_pane_cp02

0x7e2e,	// (0x00048fc7) list_preview_fixed_pane

0x7e74,	// (0x0004900d) list_empty_pane_fp_ParamLimits

0x7e74,	// (0x0004900d) list_empty_pane_fp

0x7e74,	// (0x0004900d) list_single_cale_day_pane_fp_ParamLimits

0x7e74,	// (0x0004900d) list_single_cale_day_pane_fp

0x7e74,	// (0x0004900d) list_single_graphic_heading_pane_fp_ParamLimits

0x7e74,	// (0x0004900d) list_single_graphic_heading_pane_fp

0x7e74,	// (0x0004900d) list_single_graphic_pane_fp_ParamLimits

0x7e74,	// (0x0004900d) list_single_graphic_pane_fp

0x7e74,	// (0x0004900d) list_single_heading_pane_fp_ParamLimits

0x7e74,	// (0x0004900d) list_single_heading_pane_fp

0x7e74,	// (0x0004900d) list_single_pane_fp_ParamLimits

0x7e74,	// (0x0004900d) list_single_pane_fp

0x7e89,	// (0x00049022) list_single_pane_fp_g1_ParamLimits

0x7e89,	// (0x00049022) list_single_pane_fp_g1

0x3c51,	// (0x00044dea) list_single_pane_fp_g2_ParamLimits

0x3c51,	// (0x00044dea) list_single_pane_fp_g2

0x3cc4,	// (0x00044e5d) list_single_pane_fp_g3_ParamLimits

0x3cc4,	// (0x00044e5d) list_single_pane_fp_g3

0x7e95,	// (0x0004902e) list_single_pane_fp_g4_ParamLimits

0x7e95,	// (0x0004902e) list_single_pane_fp_g4

0x0003,

0xfb40,	// (0x00050cd9) list_single_pane_fp_g_ParamLimits

0xfb40,	// (0x00050cd9) list_single_pane_fp_g

0x08fd,	// (0x00041a96) list_single_pane_fp_t1_ParamLimits

0x08fd,	// (0x00041a96) list_single_pane_fp_t1

0x0914,	// (0x00041aad) list_single_graphic_pane_fp_g1_ParamLimits

0x0914,	// (0x00041aad) list_single_graphic_pane_fp_g1

0x7e89,	// (0x00049022) list_single_graphic_pane_fp_g2_ParamLimits

0x7e89,	// (0x00049022) list_single_graphic_pane_fp_g2

0x3c51,	// (0x00044dea) list_single_graphic_pane_fp_g3_ParamLimits

0x3c51,	// (0x00044dea) list_single_graphic_pane_fp_g3

0x3cc4,	// (0x00044e5d) list_single_graphic_pane_fp_g4_ParamLimits

0x3cc4,	// (0x00044e5d) list_single_graphic_pane_fp_g4

0x7e95,	// (0x0004902e) list_single_graphic_pane_fp_g5_ParamLimits

0x7e95,	// (0x0004902e) list_single_graphic_pane_fp_g5

0x0004,

0xfb49,	// (0x00050ce2) list_single_graphic_pane_fp_g_ParamLimits

0xfb49,	// (0x00050ce2) list_single_graphic_pane_fp_g

0x0920,	// (0x00041ab9) list_single_graphic_pane_fp_t1_ParamLimits

0x0920,	// (0x00041ab9) list_single_graphic_pane_fp_t1

0x0914,	// (0x00041aad) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0914,	// (0x00041aad) list_single_graphic_heading_pane_fp_g1

0x7e89,	// (0x00049022) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7e89,	// (0x00049022) list_single_graphic_heading_pane_fp_g2

0x3c51,	// (0x00044dea) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3c51,	// (0x00044dea) list_single_graphic_heading_pane_fp_g3

0x3cc4,	// (0x00044e5d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3cc4,	// (0x00044e5d) list_single_graphic_heading_pane_fp_g4

0x7e95,	// (0x0004902e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7e95,	// (0x0004902e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb49,	// (0x00050ce2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb49,	// (0x00050ce2) list_single_graphic_heading_pane_fp_g

0x0936,	// (0x00041acf) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0936,	// (0x00041acf) list_single_graphic_heading_pane_fp_t1

0x094c,	// (0x00041ae5) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x094c,	// (0x00041ae5) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb54,	// (0x00050ced) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb54,	// (0x00050ced) list_single_graphic_heading_pane_fp_t

0x095e,	// (0x00041af7) list_single_cale_day_pane_fp_g1_ParamLimits

0x095e,	// (0x00041af7) list_single_cale_day_pane_fp_g1

0x7ea1,	// (0x0004903a) list_single_cale_day_pane_fp_g2_ParamLimits

0x7ea1,	// (0x0004903a) list_single_cale_day_pane_fp_g2

0x246d,	// (0x00043606) list_single_cale_day_pane_fp_g3_ParamLimits

0x246d,	// (0x00043606) list_single_cale_day_pane_fp_g3

0x2495,	// (0x0004362e) list_single_cale_day_pane_fp_g4_ParamLimits

0x2495,	// (0x0004362e) list_single_cale_day_pane_fp_g4

0x24b9,	// (0x00043652) list_single_cale_day_pane_fp_g5_ParamLimits

0x24b9,	// (0x00043652) list_single_cale_day_pane_fp_g5

0x0004,

0xfb59,	// (0x00050cf2) list_single_cale_day_pane_fp_g_ParamLimits

0xfb59,	// (0x00050cf2) list_single_cale_day_pane_fp_g

0x0996,	// (0x00041b2f) list_single_cale_day_pane_fp_t1_ParamLimits

0x0996,	// (0x00041b2f) list_single_cale_day_pane_fp_t1

0x09bc,	// (0x00041b55) list_single_cale_day_pane_fp_t2_ParamLimits

0x09bc,	// (0x00041b55) list_single_cale_day_pane_fp_t2

0x09d5,	// (0x00041b6e) list_single_cale_day_pane_fp_t3_ParamLimits

0x09d5,	// (0x00041b6e) list_single_cale_day_pane_fp_t3

0x0002,

0xfb64,	// (0x00050cfd) list_single_cale_day_pane_fp_t_ParamLimits

0xfb64,	// (0x00050cfd) list_single_cale_day_pane_fp_t

0x7e89,	// (0x00049022) list_empty_pane_fp_g1_ParamLimits

0x7e89,	// (0x00049022) list_empty_pane_fp_g1

0x09ee,	// (0x00041b87) list_empty_pane_fp_t1

0x09fc,	// (0x00041b95) list_empty_pane_fp_t2

0x0001,

0xfb6b,	// (0x00050d04) list_empty_pane_fp_t

0x7e89,	// (0x00049022) list_single_heading_pane_fp_g1_ParamLimits

0x7e89,	// (0x00049022) list_single_heading_pane_fp_g1

0x3c51,	// (0x00044dea) list_single_heading_pane_fp_g2_ParamLimits

0x3c51,	// (0x00044dea) list_single_heading_pane_fp_g2

0x3cc4,	// (0x00044e5d) list_single_heading_pane_fp_g3_ParamLimits

0x3cc4,	// (0x00044e5d) list_single_heading_pane_fp_g3

0x0002,

0xfb70,	// (0x00050d09) list_single_heading_pane_fp_g_ParamLimits

0xfb70,	// (0x00050d09) list_single_heading_pane_fp_g

0x0a0a,	// (0x00041ba3) list_single_heading_pane_fp_t1_ParamLimits

0x0a0a,	// (0x00041ba3) list_single_heading_pane_fp_t1

0x0a1c,	// (0x00041bb5) list_single_heading_pane_fp_t2_ParamLimits

0x0a1c,	// (0x00041bb5) list_single_heading_pane_fp_t2

0x0001,

0xfb77,	// (0x00050d10) list_single_heading_pane_fp_t_ParamLimits

0xfb77,	// (0x00050d10) list_single_heading_pane_fp_t

0x3ebc,	// (0x00045055) aid_size_cell_fast

0x3616,	// (0x000447af) soft_indicator_pane_cp1_t1

0x3ef9,	// (0x00045092) cell_app_pane_cp2_ParamLimits

0x3ef9,	// (0x00045092) cell_app_pane_cp2

0x2231,	// (0x000433ca) fep_hwr_candidate_drop_down_list_pane

0xe0e4,	// (0x0004f27d) fep_hwr_candidate_pane_g3_ParamLimits

0xe0e4,	// (0x0004f27d) fep_hwr_candidate_pane_g3

0xe0f1,	// (0x0004f28a) fep_hwr_candidate_pane_g4_ParamLimits

0xe0f1,	// (0x0004f28a) fep_hwr_candidate_pane_g4

0x0002,

0xfaeb,	// (0x00050c84) fep_hwr_candidate_pane_g_ParamLimits

0xfaeb,	// (0x00050c84) fep_hwr_candidate_pane_g

0x7950,	// (0x00048ae9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7950,	// (0x00048ae9) fep_vkb_candidate_drop_down_list_pane

0x7d61,	// (0x00048efa) fep_vkb_candidate_pane_g3

0x7d69,	// (0x00048f02) fep_vkb_candidate_pane_g4

0x0002,

0xfb18,	// (0x00050cb1) fep_vkb_candidate_pane_g

0x7a69,	// (0x00048c02) cell_hwr_candidate_pane_g1_ParamLimits

0x7d80,	// (0x00048f19) cell_hwr_candidate_pane_g3_ParamLimits

0x7d80,	// (0x00048f19) cell_hwr_candidate_pane_g3

0x7da1,	// (0x00048f3a) cell_hwr_candidate_pane_g4_ParamLimits

0x7da1,	// (0x00048f3a) cell_hwr_candidate_pane_g4

0x0002,

0xfb32,	// (0x00050ccb) cell_hwr_candidate_pane_g_ParamLimits

0xfb32,	// (0x00050ccb) cell_hwr_candidate_pane_g

0x7dc2,	// (0x00048f5b) cell_vkb_candidate_pane_g3_ParamLimits

0x7dc2,	// (0x00048f5b) cell_vkb_candidate_pane_g3

0x7ddd,	// (0x00048f76) cell_vkb_candidate_pane_g4_ParamLimits

0x7ddd,	// (0x00048f76) cell_vkb_candidate_pane_g4

0x7ead,	// (0x00049046) cell_app_pane_cp2_g1_ParamLimits

0x7ead,	// (0x00049046) cell_app_pane_cp2_g1

0x7ecb,	// (0x00049064) cell_app_pane_cp2_g2_ParamLimits

0x7ecb,	// (0x00049064) cell_app_pane_cp2_g2

0x0001,

0xfb7c,	// (0x00050d15) cell_app_pane_cp2_g_ParamLimits

0xfb7c,	// (0x00050d15) cell_app_pane_cp2_g

0x7ed7,	// (0x00049070) cell_app_pane_cp2_t1_ParamLimits

0x7ed7,	// (0x00049070) cell_app_pane_cp2_t1

0x3cb6,	// (0x00044e4f) grid_highlight_pane_cp1_ParamLimits

0x3cb6,	// (0x00044e4f) grid_highlight_pane_cp1

0x24dd,	// (0x00043676) cell_hwr_candidate_pane_cp1_ParamLimits

0x24dd,	// (0x00043676) cell_hwr_candidate_pane_cp1

0x7a69,	// (0x00048c02) fep_hwr_candidate_drop_down_list_pane_g1

0x7ee9,	// (0x00049082) fep_hwr_candidate_drop_down_list_pane_g2

0x7ef6,	// (0x0004908f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb81,	// (0x00050d1a) fep_hwr_candidate_drop_down_list_pane_g

0x24fc,	// (0x00043695) fep_hwr_candidate_drop_down_list_scroll_pane

0x2505,	// (0x0004369e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2505,	// (0x0004369e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2512,	// (0x000436ab) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2512,	// (0x000436ab) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x251f,	// (0x000436b8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x251f,	// (0x000436b8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7dc2,	// (0x00048f5b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7dc2,	// (0x00048f5b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7ddd,	// (0x00048f76) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7ddd,	// (0x00048f76) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x252c,	// (0x000436c5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x252c,	// (0x000436c5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2547,	// (0x000436e0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2547,	// (0x000436e0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2562,	// (0x000436fb) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2562,	// (0x000436fb) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb88,	// (0x00050d21) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb88,	// (0x00050d21) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7f03,	// (0x0004909c) cell_vkb_candidate_pane_cp1_ParamLimits

0x7f03,	// (0x0004909c) cell_vkb_candidate_pane_cp1

0x7a69,	// (0x00048c02) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7a69,	// (0x00048c02) fep_vkb_candidate_drop_down_list_pane_g1

0x7ee9,	// (0x00049082) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ee9,	// (0x00049082) fep_vkb_candidate_drop_down_list_pane_g2

0x7ef6,	// (0x0004908f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7ef6,	// (0x0004908f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb81,	// (0x00050d1a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb81,	// (0x00050d1a) fep_vkb_candidate_drop_down_list_pane_g

0x7f23,	// (0x000490bc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7f23,	// (0x000490bc) fep_vkb_candidate_drop_down_list_scroll_pane

0x7f30,	// (0x000490c9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f30,	// (0x000490c9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7f3d,	// (0x000490d6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f3d,	// (0x000490d6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7f49,	// (0x000490e2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f49,	// (0x000490e2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7d80,	// (0x00048f19) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d80,	// (0x00048f19) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7da1,	// (0x00048f3a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7da1,	// (0x00048f3a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7f55,	// (0x000490ee) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f55,	// (0x000490ee) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7f76,	// (0x0004910f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f76,	// (0x0004910f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7f97,	// (0x00049130) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7f97,	// (0x00049130) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb99,	// (0x00050d32) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb99,	// (0x00050d32) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbf14,	// (0x0004d0ad) title_pane_g1_ParamLimits

0xbf27,	// (0x0004d0c0) title_pane_g2_ParamLimits

0xf529,	// (0x000506c2) title_pane_g_ParamLimits

0x432f,	// (0x000454c8) aid_call2_pane

0x4337,	// (0x000454d0) aid_call_pane

0x433f,	// (0x000454d8) popup_clock_analogue_window_g1

0x433f,	// (0x000454d8) popup_clock_analogue_window_g2

0x1270,	// (0x00042409) popup_clock_analogue_window_g3

0x1279,	// (0x00042412) popup_clock_analogue_window_g4

0xe26d,	// (0x0004f406) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00050871) popup_clock_analogue_window_g

0x1281,	// (0x0004241a) popup_clock_analogue_window_t1

0x128f,	// (0x00042428) clock_digital_number_pane_ParamLimits

0x128f,	// (0x00042428) clock_digital_number_pane

0x129b,	// (0x00042434) clock_digital_number_pane_cp02_ParamLimits

0x129b,	// (0x00042434) clock_digital_number_pane_cp02

0x12a7,	// (0x00042440) clock_digital_number_pane_cp03_ParamLimits

0x12a7,	// (0x00042440) clock_digital_number_pane_cp03

0x12b3,	// (0x0004244c) clock_digital_number_pane_cp04_ParamLimits

0x12b3,	// (0x0004244c) clock_digital_number_pane_cp04

0x12bf,	// (0x00042458) clock_digital_separator_pane_ParamLimits

0x12bf,	// (0x00042458) clock_digital_separator_pane

0x12cb,	// (0x00042464) popup_clock_digital_window_t1_ParamLimits

0x12cb,	// (0x00042464) popup_clock_digital_window_t1

0xe26d,	// (0x0004f406) clock_digital_number_pane_g1

0xe26d,	// (0x0004f406) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x0005087c) clock_digital_number_pane_g

0xe26d,	// (0x0004f406) clock_digital_separator_pane_g1

0xe26d,	// (0x0004f406) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x0005087c) clock_digital_separator_pane_g

0xd5f5,	// (0x0004e78e) aid_fill_nsta_ParamLimits

0xd72b,	// (0x0004e8c4) indicator_nsta_pane_ParamLimits

0x4f91,	// (0x0004612a) popup_clock_analogue_window

0x4f91,	// (0x0004612a) popup_clock_digital_window

0xdf3c,	// (0x0004f0d5) grid_indicator_nsta_pane_ParamLimits

0x71ef,	// (0x00048388) clock_nsta_pane_t2

0x0001,

0xfa6b,	// (0x00050c04) clock_nsta_pane_t

0x1234,	// (0x000423cd) aid_size_max_handle

0x123e,	// (0x000423d7) aid_size_min_handle

0x496c,	// (0x00045b05) editor_scroll_pane

0x7fb2,	// (0x0004914b) ex_editor_pane

0x3e2a,	// (0x00044fc3) scroll_pane_cp13

0x3c49,	// (0x00044de2) scroll_pane_cp14

0x436e,	// (0x00045507) scroll_pane_cp36

0xd448,	// (0x0004e5e1) list_single_graphic_hl_pane_cp2_ParamLimits

0xd448,	// (0x0004e5e1) list_single_graphic_hl_pane_cp2

0xdda0,	// (0x0004ef39) list_single_graphic_hl_pane_ParamLimits

0xdda0,	// (0x0004ef39) list_single_graphic_hl_pane

0x0a32,	// (0x00041bcb) aid_size_min_hl_cp1

0x7fba,	// (0x00049153) list_highlight_pane_cp34_ParamLimits

0x7fba,	// (0x00049153) list_highlight_pane_cp34

0x7fcb,	// (0x00049164) list_single_graphic_hl_pane_g1_ParamLimits

0x7fcb,	// (0x00049164) list_single_graphic_hl_pane_g1

0xbbf7,	// (0x0004cd90) list_single_graphic_hl_pane_g2_ParamLimits

0xbbf7,	// (0x0004cd90) list_single_graphic_hl_pane_g2

0xbbf7,	// (0x0004cd90) list_single_graphic_hl_pane_g3_ParamLimits

0xbbf7,	// (0x0004cd90) list_single_graphic_hl_pane_g3

0x4844,	// (0x000459dd) list_single_graphic_hl_pane_g4_ParamLimits

0x4844,	// (0x000459dd) list_single_graphic_hl_pane_g4

0xcbdb,	// (0x0004dd74) list_single_graphic_hl_pane_g5_ParamLimits

0xcbdb,	// (0x0004dd74) list_single_graphic_hl_pane_g5

0x0004,

0xfbaa,	// (0x00050d43) list_single_graphic_hl_pane_g_ParamLimits

0xfbaa,	// (0x00050d43) list_single_graphic_hl_pane_g

0xbc03,	// (0x0004cd9c) list_single_graphic_hl_pane_t1_ParamLimits

0xbc03,	// (0x0004cd9c) list_single_graphic_hl_pane_t1

0x7fd8,	// (0x00049171) aid_size_min_hl_cp2

0x7fe1,	// (0x0004917a) list_highlight_pane_cp34_cp2_ParamLimits

0x7fe1,	// (0x0004917a) list_highlight_pane_cp34_cp2

0x7fcb,	// (0x00049164) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7fcb,	// (0x00049164) list_single_graphic_hl_pane_g1_cp2

0x7fee,	// (0x00049187) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7fee,	// (0x00049187) list_single_graphic_hl_pane_g2_cp2

0x7ffa,	// (0x00049193) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7ffa,	// (0x00049193) list_single_graphic_hl_pane_g3_cp2

0x8008,	// (0x000491a1) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8008,	// (0x000491a1) list_single_graphic_hl_pane_g4_cp2

0x8014,	// (0x000491ad) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8014,	// (0x000491ad) list_single_graphic_hl_pane_g5_cp2

0xc32e,	// (0x0004d4c7) control_pane_g4_ParamLimits

0xc32e,	// (0x0004d4c7) control_pane_g4

0x4c90,	// (0x00045e29) bg_popup_sub_pane_cp10_ParamLimits

0x77f5,	// (0x0004898e) list_choice_list_pane_ParamLimits

0x7804,	// (0x0004899d) scroll_pane_cp23

0x36a6,	// (0x0004483f) bg_popup_preview_window_pane_cp02_ParamLimits

0x7e2e,	// (0x00048fc7) list_preview_fixed_pane_ParamLimits

0x7e44,	// (0x00048fdd) list_preview_fixed_pane_cp_ParamLimits

0x7e44,	// (0x00048fdd) list_preview_fixed_pane_cp

0x7e50,	// (0x00048fe9) popup_preview_fixed_window_g1_ParamLimits

0x7e50,	// (0x00048fe9) popup_preview_fixed_window_g1

0x7e5c,	// (0x00048ff5) popup_preview_fixed_window_g2_ParamLimits

0x7e5c,	// (0x00048ff5) popup_preview_fixed_window_g2

0x0002,

0xfb39,	// (0x00050cd2) popup_preview_fixed_window_g_ParamLimits

0xfb39,	// (0x00050cd2) popup_preview_fixed_window_g

0x11a8,	// (0x00042341) aid_navi_side_left_pane_ParamLimits

0x11bd,	// (0x00042356) aid_navi_side_right_pane_ParamLimits

0x11d5,	// (0x0004236e) navi_icon_pane_stacon_ParamLimits

0x11e9,	// (0x00042382) navi_navi_pane_stacon_ParamLimits

0x11d5,	// (0x0004236e) navi_text_pane_stacon_ParamLimits

0xd2f4,	// (0x0004e48d) main_text_info_pane

0x803e,	// (0x000491d7) listscroll_text_info_pane

0x8046,	// (0x000491df) list_text_info_pane_ParamLimits

0x8046,	// (0x000491df) list_text_info_pane

0x8055,	// (0x000491ee) scroll_pane_cp24_ParamLimits

0x8055,	// (0x000491ee) scroll_pane_cp24

0xe292,	// (0x0004f42b) list_text_info_pane_t1_ParamLimits

0xe292,	// (0x0004f42b) list_text_info_pane_t1

0xc473,	// (0x0004d60c) popup_fast_swap2_window_ParamLimits

0xc473,	// (0x0004d60c) popup_fast_swap2_window

0x80a4,	// (0x0004923d) aid_size_cell_fast2

0xd2f4,	// (0x0004e48d) bg_popup_window_pane_cp17

0x80ae,	// (0x00049247) heading_pane_cp2

0x80b6,	// (0x0004924f) listscroll_fast2_pane

0x80be,	// (0x00049257) grid_fast2_pane

0x80c8,	// (0x00049261) listscroll_fast2_pane_g1

0x80d0,	// (0x00049269) listscroll_fast2_pane_g2

0x0001,

0xfbb5,	// (0x00050d4e) listscroll_fast2_pane_g

0x3e2a,	// (0x00044fc3) scroll_pane_cp26

0x80da,	// (0x00049273) cell_fast2_pane_ParamLimits

0x80da,	// (0x00049273) cell_fast2_pane

0x80ef,	// (0x00049288) cell_fast2_pane_g1

0x80f8,	// (0x00049291) cell_fast2_pane_g2

0x8101,	// (0x0004929a) cell_fast2_pane_g3

0x0002,

0xfbba,	// (0x00050d53) cell_fast2_pane_g

0x3a06,	// (0x00044b9f) grid_highlight_pane_cp9

0x3a1b,	// (0x00044bb4) main_eswt_pane_ParamLimits

0x3a1b,	// (0x00044bb4) main_eswt_pane

0x806a,	// (0x00049203) list_single_text_info_pane

0x8109,	// (0x000492a2) eswt_ctrl_button_pane

0x8109,	// (0x000492a2) eswt_ctrl_canvas_pane

0x8111,	// (0x000492aa) eswt_ctrl_combo_pane

0x8109,	// (0x000492a2) eswt_ctrl_default_pane

0x8109,	// (0x000492a2) eswt_ctrl_label_pane

0x8119,	// (0x000492b2) eswt_ctrl_wait_pane

0x8121,	// (0x000492ba) eswt_shell_pane

0xd2f4,	// (0x0004e48d) listscroll_eswt_app_pane

0x8141,	// (0x000492da) popup_eswt_tasktip_window_ParamLimits

0x8141,	// (0x000492da) popup_eswt_tasktip_window

0x522e,	// (0x000463c7) bg_popup_window_pane_cp18

0x815a,	// (0x000492f3) eswt_control_pane_g1_ParamLimits

0x815a,	// (0x000492f3) eswt_control_pane_g1

0x8167,	// (0x00049300) eswt_control_pane_g2_ParamLimits

0x8167,	// (0x00049300) eswt_control_pane_g2

0x8174,	// (0x0004930d) eswt_control_pane_g3_ParamLimits

0x8174,	// (0x0004930d) eswt_control_pane_g3

0x8181,	// (0x0004931a) eswt_control_pane_g4_ParamLimits

0x8181,	// (0x0004931a) eswt_control_pane_g4

0x0003,

0xfbc1,	// (0x00050d5a) eswt_control_pane_g_ParamLimits

0xfbc1,	// (0x00050d5a) eswt_control_pane_g

0x3cb6,	// (0x00044e4f) bg_button_pane_ParamLimits

0x3cb6,	// (0x00044e4f) bg_button_pane

0x3a1b,	// (0x00044bb4) common_borders_pane_copy2_ParamLimits

0x3a1b,	// (0x00044bb4) common_borders_pane_copy2

0x818e,	// (0x00049327) control_button_pane_g1_ParamLimits

0x818e,	// (0x00049327) control_button_pane_g1

0x819a,	// (0x00049333) control_button_pane_g2_ParamLimits

0x819a,	// (0x00049333) control_button_pane_g2

0x81a6,	// (0x0004933f) control_button_pane_g3_ParamLimits

0x81a6,	// (0x0004933f) control_button_pane_g3

0x0002,

0xfbca,	// (0x00050d63) control_button_pane_g_ParamLimits

0xfbca,	// (0x00050d63) control_button_pane_g

0x81ba,	// (0x00049353) control_button_pane_t1

0x81c8,	// (0x00049361) control_button_pane_t2

0x0001,

0xfbd1,	// (0x00050d6a) control_button_pane_t

0x51ba,	// (0x00046353) bg_button_pane_g1

0x51c2,	// (0x0004635b) bg_button_pane_g2

0x51ca,	// (0x00046363) bg_button_pane_g3

0x51d2,	// (0x0004636b) bg_button_pane_g4

0x51da,	// (0x00046373) bg_button_pane_g5

0x51e2,	// (0x0004637b) bg_button_pane_g6

0x51ea,	// (0x00046383) bg_button_pane_g7

0x51f2,	// (0x0004638b) bg_button_pane_g8

0x51fa,	// (0x00046393) bg_button_pane_g9

0x0008,

0xf841,	// (0x000509da) bg_button_pane_g

0x77b0,	// (0x00048949) common_borders_pane_ParamLimits

0x77b0,	// (0x00048949) common_borders_pane

0x815a,	// (0x000492f3) eswt_control_pane_g1_copy1_ParamLimits

0x815a,	// (0x000492f3) eswt_control_pane_g1_copy1

0x8167,	// (0x00049300) eswt_control_pane_g2_copy1_ParamLimits

0x8167,	// (0x00049300) eswt_control_pane_g2_copy1

0x8174,	// (0x0004930d) eswt_control_pane_g3_copy1_ParamLimits

0x8174,	// (0x0004930d) eswt_control_pane_g3_copy1

0x8181,	// (0x0004931a) eswt_control_pane_g4_copy1_ParamLimits

0x8181,	// (0x0004931a) eswt_control_pane_g4_copy1

0x77eb,	// (0x00048984) bg_eswt_ctrl_canvas_pane_g1

0x77b0,	// (0x00048949) common_borders_pane_cp2_ParamLimits

0x77b0,	// (0x00048949) common_borders_pane_cp2

0x77b0,	// (0x00048949) common_borders_pane_cp3_ParamLimits

0x77b0,	// (0x00048949) common_borders_pane_cp3

0x81d6,	// (0x0004936f) separator_horizontal_pane

0x81de,	// (0x00049377) separator_vertical_pane

0x815a,	// (0x000492f3) eswt_control_pane_g1_copy2_ParamLimits

0x815a,	// (0x000492f3) eswt_control_pane_g1_copy2

0x8167,	// (0x00049300) eswt_control_pane_g2_copy2_ParamLimits

0x8167,	// (0x00049300) eswt_control_pane_g2_copy2

0x8174,	// (0x0004930d) eswt_control_pane_g3_copy2_ParamLimits

0x8174,	// (0x0004930d) eswt_control_pane_g3_copy2

0x8181,	// (0x0004931a) eswt_control_pane_g4_copy2_ParamLimits

0x8181,	// (0x0004931a) eswt_control_pane_g4_copy2

0xd2f4,	// (0x0004e48d) common_borders_pane_cp4

0x81e7,	// (0x00049380) separator_horizontal_pane_g1

0x81f0,	// (0x00049389) separator_horizontal_pane_g2

0x81f9,	// (0x00049392) separator_horizontal_pane_g3

0x0002,

0xfbd6,	// (0x00050d6f) separator_horizontal_pane_g

0x815a,	// (0x000492f3) eswt_control_pane_g1_copy3_ParamLimits

0x815a,	// (0x000492f3) eswt_control_pane_g1_copy3

0x8167,	// (0x00049300) eswt_control_pane_g2_copy3_ParamLimits

0x8167,	// (0x00049300) eswt_control_pane_g2_copy3

0x8174,	// (0x0004930d) eswt_control_pane_g3_copy3_ParamLimits

0x8174,	// (0x0004930d) eswt_control_pane_g3_copy3

0x8181,	// (0x0004931a) eswt_control_pane_g4_copy3_ParamLimits

0x8181,	// (0x0004931a) eswt_control_pane_g4_copy3

0xd2f4,	// (0x0004e48d) common_borders_pane_cp5

0x8202,	// (0x0004939b) separator_vertical_pane_g1

0x820b,	// (0x000493a4) separator_vertical_pane_g2

0x8214,	// (0x000493ad) separator_vertical_pane_g3

0x0002,

0xfbdd,	// (0x00050d76) separator_vertical_pane_g

0x815a,	// (0x000492f3) eswt_control_pane_g1_copy4_ParamLimits

0x815a,	// (0x000492f3) eswt_control_pane_g1_copy4

0x8167,	// (0x00049300) eswt_control_pane_g2_copy4_ParamLimits

0x8167,	// (0x00049300) eswt_control_pane_g2_copy4

0x8174,	// (0x0004930d) eswt_control_pane_g3_copy4_ParamLimits

0x8174,	// (0x0004930d) eswt_control_pane_g3_copy4

0x8181,	// (0x0004931a) eswt_control_pane_g4_copy4_ParamLimits

0x8181,	// (0x0004931a) eswt_control_pane_g4_copy4

0x821d,	// (0x000493b6) eswt_ctrl_combo_button_pane

0x8225,	// (0x000493be) eswt_ctrl_input_pane

0x822d,	// (0x000493c6) popup_choice_list_window_cp70

0x8235,	// (0x000493ce) eswt_ctrl_input_pane_t1

0xd2f4,	// (0x0004e48d) input_focus_pane_cp70

0x77b0,	// (0x00048949) bg_button_pane_cp70_ParamLimits

0x77b0,	// (0x00048949) bg_button_pane_cp70

0x8243,	// (0x000493dc) eswt_ctrl_combo_button_pane_g1

0x824b,	// (0x000493e4) wait_bar_pane_cp70

0x522e,	// (0x000463c7) bg_popup_window_pane_cp70_ParamLimits

0x522e,	// (0x000463c7) bg_popup_window_pane_cp70

0x8253,	// (0x000493ec) popup_eswt_tasktip_window_t1

0x8269,	// (0x00049402) wait_bar_pane_cp71_ParamLimits

0x8269,	// (0x00049402) wait_bar_pane_cp71

0x8275,	// (0x0004940e) grid_eswt_app_pane

0x4151,	// (0x000452ea) scroll_pane_cp70

0xe2ad,	// (0x0004f446) cell_eswt_app_pane_ParamLimits

0xe2ad,	// (0x0004f446) cell_eswt_app_pane

0xe2d7,	// (0x0004f470) cell_eswt_app_pane_g1_ParamLimits

0xe2d7,	// (0x0004f470) cell_eswt_app_pane_g1

0xe306,	// (0x0004f49f) cell_eswt_app_pane_g2_ParamLimits

0xe306,	// (0x0004f49f) cell_eswt_app_pane_g2

0x0001,

0xfbe4,	// (0x00050d7d) cell_eswt_app_pane_g_ParamLimits

0xfbe4,	// (0x00050d7d) cell_eswt_app_pane_g

0xe32f,	// (0x0004f4c8) cell_eswt_app_pane_t1_ParamLimits

0xe32f,	// (0x0004f4c8) cell_eswt_app_pane_t1

0x8338,	// (0x000494d1) grid_highlight_pane_cp70_ParamLimits

0x8338,	// (0x000494d1) grid_highlight_pane_cp70

0x4844,	// (0x000459dd) set_content_pane_g1

0xd5b2,	// (0x0004e74b) status_small_volume_pane

0xcbef,	// (0x0004dd88) status_small_volume_pane_g1

0xcbf7,	// (0x0004dd90) volume_small2_pane

0xcc00,	// (0x0004dd99) volume_small2_pane_g1

0xcc09,	// (0x0004dda2) volume_small2_pane_g2

0xcc12,	// (0x0004ddab) volume_small2_pane_g3

0xcc1b,	// (0x0004ddb4) volume_small2_pane_g4

0xcc24,	// (0x0004ddbd) volume_small2_pane_g5

0xcc2d,	// (0x0004ddc6) volume_small2_pane_g6

0xcc36,	// (0x0004ddcf) volume_small2_pane_g7

0xcc3f,	// (0x0004ddd8) volume_small2_pane_g8

0xcc48,	// (0x0004dde1) volume_small2_pane_g9

0xcc51,	// (0x0004ddea) volume_small2_pane_g10

0x0009,

0xfbe9,	// (0x00050d82) volume_small2_pane_g

0x7bb1,	// (0x00048d4a) fep_vkb_top_text_pane_g1_ParamLimits

0xe230,	// (0x0004f3c9) fep_vkb_top_text_pane_t1_ParamLimits

0x7e68,	// (0x00049001) popup_preview_fixed_window_g3_ParamLimits

0x7e68,	// (0x00049001) popup_preview_fixed_window_g3

0xca9c,	// (0x0004dc35) popup_toolbar_trans_pane

0xdc27,	// (0x0004edc0) aid_height_set_list_ParamLimits

0x65a3,	// (0x0004773c) aid_size_parent_ParamLimits

0x4c90,	// (0x00045e29) list_highlight_pane_cp2_ParamLimits

0x4844,	// (0x000459dd) set_content_pane_g1_ParamLimits

0xbbb4,	// (0x0004cd4d) list_single_image_pane_ParamLimits

0xbbb4,	// (0x0004cd4d) list_single_image_pane

0xe361,	// (0x0004f4fa) aid_size_cell_image_ParamLimits

0xe361,	// (0x0004f4fa) aid_size_cell_image

0xe36e,	// (0x0004f507) grid_single_image_pane_ParamLimits

0xe36e,	// (0x0004f507) grid_single_image_pane

0x67db,	// (0x00047974) list_single_image_pane_g1_ParamLimits

0x67db,	// (0x00047974) list_single_image_pane_g1

0x835d,	// (0x000494f6) list_single_image_pane_g2_ParamLimits

0x835d,	// (0x000494f6) list_single_image_pane_g2

0x0001,

0xfbfe,	// (0x00050d97) list_single_image_pane_g_ParamLimits

0xfbfe,	// (0x00050d97) list_single_image_pane_g

0x8371,	// (0x0004950a) list_single_image_pane_t1_ParamLimits

0x8371,	// (0x0004950a) list_single_image_pane_t1

0xe37a,	// (0x0004f513) cell_image_list_pane_ParamLimits

0xe37a,	// (0x0004f513) cell_image_list_pane

0xe38e,	// (0x0004f527) cell_image_list_pane_g1

0xe397,	// (0x0004f530) cell_image_list_pane_g2

0x0001,

0xfc03,	// (0x00050d9c) cell_image_list_pane_g

0x83ad,	// (0x00049546) aid_size_cell_tb_trans_pane

0x3cb6,	// (0x00044e4f) bg_tb_trans_pane

0x83bf,	// (0x00049558) grid_tb_trans_pane

0x51ba,	// (0x00046353) bg_tb_trans_pane_g1

0x51c2,	// (0x0004635b) bg_tb_trans_pane_g2

0x51ca,	// (0x00046363) bg_tb_trans_pane_g3

0x51d2,	// (0x0004636b) bg_tb_trans_pane_g4

0x51da,	// (0x00046373) bg_tb_trans_pane_g5

0x51f2,	// (0x0004638b) bg_tb_trans_pane_g6

0x51fa,	// (0x00046393) bg_tb_trans_pane_g7

0x51e2,	// (0x0004637b) bg_tb_trans_pane_g8

0x51ea,	// (0x00046383) bg_tb_trans_pane_g9

0x0008,

0xfc08,	// (0x00050da1) bg_tb_trans_pane_g

0x83d3,	// (0x0004956c) cell_toolbar_trans_pane_ParamLimits

0x83d3,	// (0x0004956c) cell_toolbar_trans_pane

0x77eb,	// (0x00048984) cell_toolbar_trans_pane_g1

0xdff3,	// (0x0004f18c) list_form2_midp_pane_t1

0xe001,	// (0x0004f19a) list_form2_midp_pane_t2

0x0001,

0xfab1,	// (0x00050c4a) list_form2_midp_pane_t

0x73dc,	// (0x00048575) scroll_pane_cp51_ParamLimits

0x7598,	// (0x00048731) form2_midp_wait_pane_g1

0x75a1,	// (0x0004873a) form2_midp_wait_pane_g2

0x75aa,	// (0x00048743) form2_midp_wait_pane_g3

0x0002,

0xfac6,	// (0x00050c5f) form2_midp_wait_pane_g

0x341d,	// (0x000445b6) list_highlight_pane_cp21_ParamLimits

0x75f6,	// (0x0004878f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7605,	// (0x0004879e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x675b,	// (0x000478f4) list_single_2graphic_im_pane_ParamLimits

0x675b,	// (0x000478f4) list_single_2graphic_im_pane

0x83f9,	// (0x00049592) list_single_2graphic_im_pane_g1_ParamLimits

0x83f9,	// (0x00049592) list_single_2graphic_im_pane_g1

0x840a,	// (0x000495a3) list_single_2graphic_im_pane_g2_ParamLimits

0x840a,	// (0x000495a3) list_single_2graphic_im_pane_g2

0x8416,	// (0x000495af) list_single_2graphic_im_pane_g3_ParamLimits

0x8416,	// (0x000495af) list_single_2graphic_im_pane_g3

0x0003,

0xfc1b,	// (0x00050db4) list_single_2graphic_im_pane_g_ParamLimits

0xfc1b,	// (0x00050db4) list_single_2graphic_im_pane_g

0x8436,	// (0x000495cf) list_single_2graphic_im_pane_t1_ParamLimits

0x8436,	// (0x000495cf) list_single_2graphic_im_pane_t1

0x7e74,	// (0x0004900d) list_single_graphic_2heading_pane_fp_ParamLimits

0x7e74,	// (0x0004900d) list_single_graphic_2heading_pane_fp

0x0914,	// (0x00041aad) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0914,	// (0x00041aad) list_single_graphic_2heading_pane_fp_g1

0x7e89,	// (0x00049022) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7e89,	// (0x00049022) list_single_graphic_2heading_pane_fp_g2

0x3c51,	// (0x00044dea) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3c51,	// (0x00044dea) list_single_graphic_2heading_pane_fp_g3

0x3cc4,	// (0x00044e5d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3cc4,	// (0x00044e5d) list_single_graphic_2heading_pane_fp_g4

0x7e95,	// (0x0004902e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7e95,	// (0x0004902e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb49,	// (0x00050ce2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb49,	// (0x00050ce2) list_single_graphic_2heading_pane_fp_g

0x0a5d,	// (0x00041bf6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0a5d,	// (0x00041bf6) list_single_graphic_2heading_pane_fp_t1

0x094c,	// (0x00041ae5) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x094c,	// (0x00041ae5) list_single_graphic_2heading_pane_fp_t2

0x0a73,	// (0x00041c0c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0a73,	// (0x00041c0c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc24,	// (0x00050dbd) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc24,	// (0x00050dbd) list_single_graphic_2heading_pane_fp_t

0x7877,	// (0x00048a10) fep_hwr_write_pane_g5_ParamLimits

0x7877,	// (0x00048a10) fep_hwr_write_pane_g5

0x7883,	// (0x00048a1c) fep_hwr_write_pane_g6_ParamLimits

0x7883,	// (0x00048a1c) fep_hwr_write_pane_g6

0x8121,	// (0x000492ba) eswt_shell_pane_ParamLimits

0x522e,	// (0x000463c7) bg_popup_window_pane_cp18_ParamLimits

0x8152,	// (0x000492eb) heading_pane_cp70

0x8253,	// (0x000493ec) popup_eswt_tasktip_window_t1_ParamLimits

0xd650,	// (0x0004e7e9) aid_touch_tab_arrow_left

0xd666,	// (0x0004e7ff) aid_touch_tab_arrow_right

0xbf3f,	// (0x0004d0d8) title_pane_g3_ParamLimits

0xbf3f,	// (0x0004d0d8) title_pane_g3

0x3c75,	// (0x00044e0e) set_value_pane_g1

0xca9c,	// (0x0004dc35) popup_toolbar_trans_pane_ParamLimits

0x83ad,	// (0x00049546) aid_size_cell_tb_trans_pane_ParamLimits

0x3cb6,	// (0x00044e4f) bg_tb_trans_pane_ParamLimits

0x83bf,	// (0x00049558) grid_tb_trans_pane_ParamLimits

0x36a6,	// (0x0004483f) cont_note_pane_ParamLimits

0x36a6,	// (0x0004483f) cont_note_pane

0x3a1b,	// (0x00044bb4) cont_snote2_single_text_pane_ParamLimits

0x3a1b,	// (0x00044bb4) cont_snote2_single_text_pane

0x3a1b,	// (0x00044bb4) cont_snote2_single_graphic_pane_ParamLimits

0x3a1b,	// (0x00044bb4) cont_snote2_single_graphic_pane

0x5849,	// (0x000469e2) cont_note_wait_pane_ParamLimits

0x5849,	// (0x000469e2) cont_note_wait_pane

0x5849,	// (0x000469e2) cont_note_image_pane_ParamLimits

0x5849,	// (0x000469e2) cont_note_image_pane

0x8467,	// (0x00049600) popup_note2_window_g1_ParamLimits

0x8467,	// (0x00049600) popup_note2_window_g1

0x8498,	// (0x00049631) popup_note2_window_t1_ParamLimits

0x8498,	// (0x00049631) popup_note2_window_t1

0x84dd,	// (0x00049676) popup_note2_window_t2_ParamLimits

0x84dd,	// (0x00049676) popup_note2_window_t2

0x8522,	// (0x000496bb) popup_note2_window_t3_ParamLimits

0x8522,	// (0x000496bb) popup_note2_window_t3

0x8567,	// (0x00049700) popup_note2_window_t4_ParamLimits

0x8567,	// (0x00049700) popup_note2_window_t4

0x372a,	// (0x000448c3) popup_note2_window_t5_ParamLimits

0x372a,	// (0x000448c3) popup_note2_window_t5

0x0004,

0xfc30,	// (0x00050dc9) popup_note2_window_t_ParamLimits

0xfc30,	// (0x00050dc9) popup_note2_window_t

0x8596,	// (0x0004972f) popup_note2_image_window_g1_ParamLimits

0x8596,	// (0x0004972f) popup_note2_image_window_g1

0x85a2,	// (0x0004973b) popup_note2_image_window_g2_ParamLimits

0x85a2,	// (0x0004973b) popup_note2_image_window_g2

0x0001,

0xfc3b,	// (0x00050dd4) popup_note2_image_window_g_ParamLimits

0xfc3b,	// (0x00050dd4) popup_note2_image_window_g

0x85b4,	// (0x0004974d) popup_note2_image_window_t1_ParamLimits

0x85b4,	// (0x0004974d) popup_note2_image_window_t1

0x85cc,	// (0x00049765) popup_note2_image_window_t2_ParamLimits

0x85cc,	// (0x00049765) popup_note2_image_window_t2

0x85e4,	// (0x0004977d) popup_note2_image_window_t3_ParamLimits

0x85e4,	// (0x0004977d) popup_note2_image_window_t3

0x0002,

0xfc40,	// (0x00050dd9) popup_note2_image_window_t_ParamLimits

0xfc40,	// (0x00050dd9) popup_note2_image_window_t

0x5857,	// (0x000469f0) popup_note2_wait_window_g1_ParamLimits

0x5857,	// (0x000469f0) popup_note2_wait_window_g1

0x8600,	// (0x00049799) popup_note2_wait_window_g2_ParamLimits

0x8600,	// (0x00049799) popup_note2_wait_window_g2

0x586f,	// (0x00046a08) popup_note2_wait_window_g3_ParamLimits

0x586f,	// (0x00046a08) popup_note2_wait_window_g3

0x0002,

0xfc47,	// (0x00050de0) popup_note2_wait_window_g_ParamLimits

0xfc47,	// (0x00050de0) popup_note2_wait_window_g

0x860c,	// (0x000497a5) popup_note2_wait_window_t1_ParamLimits

0x860c,	// (0x000497a5) popup_note2_wait_window_t1

0x862a,	// (0x000497c3) popup_note2_wait_window_t2_ParamLimits

0x862a,	// (0x000497c3) popup_note2_wait_window_t2

0x8648,	// (0x000497e1) popup_note2_wait_window_t3_ParamLimits

0x8648,	// (0x000497e1) popup_note2_wait_window_t3

0x865a,	// (0x000497f3) popup_note2_wait_window_t4_ParamLimits

0x865a,	// (0x000497f3) popup_note2_wait_window_t4

0x0003,

0xfc4e,	// (0x00050de7) popup_note2_wait_window_t_ParamLimits

0xfc4e,	// (0x00050de7) popup_note2_wait_window_t

0x866c,	// (0x00049805) wait_bar2_pane_ParamLimits

0x866c,	// (0x00049805) wait_bar2_pane

0x8684,	// (0x0004981d) popup_snote2_single_text_window_g1_ParamLimits

0x8684,	// (0x0004981d) popup_snote2_single_text_window_g1

0x86ac,	// (0x00049845) popup_snote2_single_text_window_t1_ParamLimits

0x86ac,	// (0x00049845) popup_snote2_single_text_window_t1

0x86f8,	// (0x00049891) popup_snote2_single_text_window_t2_ParamLimits

0x86f8,	// (0x00049891) popup_snote2_single_text_window_t2

0x8744,	// (0x000498dd) popup_snote2_single_text_window_t3_ParamLimits

0x8744,	// (0x000498dd) popup_snote2_single_text_window_t3

0x8785,	// (0x0004991e) popup_snote2_single_text_window_t4_ParamLimits

0x8785,	// (0x0004991e) popup_snote2_single_text_window_t4

0x87bb,	// (0x00049954) popup_snote2_single_text_window_t5_ParamLimits

0x87bb,	// (0x00049954) popup_snote2_single_text_window_t5

0x0004,

0xfc57,	// (0x00050df0) popup_snote2_single_text_window_t_ParamLimits

0xfc57,	// (0x00050df0) popup_snote2_single_text_window_t

0x87e6,	// (0x0004997f) popup_snote2_single_graphic_window_g1_ParamLimits

0x87e6,	// (0x0004997f) popup_snote2_single_graphic_window_g1

0x880e,	// (0x000499a7) popup_snote2_single_graphic_window_g2_ParamLimits

0x880e,	// (0x000499a7) popup_snote2_single_graphic_window_g2

0x0001,

0xfc62,	// (0x00050dfb) popup_snote2_single_graphic_window_g_ParamLimits

0xfc62,	// (0x00050dfb) popup_snote2_single_graphic_window_g

0x8836,	// (0x000499cf) popup_snote2_single_graphic_window_t1_ParamLimits

0x8836,	// (0x000499cf) popup_snote2_single_graphic_window_t1

0x8882,	// (0x00049a1b) popup_snote2_single_graphic_window_t2_ParamLimits

0x8882,	// (0x00049a1b) popup_snote2_single_graphic_window_t2

0x8744,	// (0x000498dd) popup_snote2_single_graphic_window_t3_ParamLimits

0x8744,	// (0x000498dd) popup_snote2_single_graphic_window_t3

0x8785,	// (0x0004991e) popup_snote2_single_graphic_window_t4_ParamLimits

0x8785,	// (0x0004991e) popup_snote2_single_graphic_window_t4

0x87bb,	// (0x00049954) popup_snote2_single_graphic_window_t5_ParamLimits

0x87bb,	// (0x00049954) popup_snote2_single_graphic_window_t5

0x0004,

0xfc67,	// (0x00050e00) popup_snote2_single_graphic_window_t_ParamLimits

0xfc67,	// (0x00050e00) popup_snote2_single_graphic_window_t

0x729d,	// (0x00048436) clock_nsta_pane_cp2_t1

0x729d,	// (0x00048436) clock_nsta_pane_cp2_t2

0x0001,

0xfa87,	// (0x00050c20) clock_nsta_pane_cp2_t

0x0241,	// (0x000413da) form_field_data_wide_pane_g1_ParamLimits

0x3c51,	// (0x00044dea) form_field_data_wide_pane_g2_ParamLimits

0x3c51,	// (0x00044dea) form_field_data_wide_pane_g2

0x3cc4,	// (0x00044e5d) form_field_data_wide_pane_g3_ParamLimits

0x3cc4,	// (0x00044e5d) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x000507f4) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x000507f4) form_field_data_wide_pane_g

0xdf26,	// (0x0004f0bf) grid_touch_3_pane_ParamLimits

0xdf26,	// (0x0004f0bf) grid_touch_3_pane

0xe3a0,	// (0x0004f539) cell_touch_3_pane_ParamLimits

0xe3a0,	// (0x0004f539) cell_touch_3_pane

0x77eb,	// (0x00048984) cell_touch_3_pane_g1

0x77eb,	// (0x00048984) cell_touch_3_pane_g2

0x0001,

0xfb0c,	// (0x00050ca5) cell_touch_3_pane_g

0x3782,	// (0x0004491b) cont_query_data_pane

0x378a,	// (0x00044923) cont_query_data_pane_cp1

0x88fc,	// (0x00049a95) button_value_adjust_pane_cp7

0x8904,	// (0x00049a9d) query_popup_pane_cp3

0x4448,	// (0x000455e1) bg_popup_sub_pane_cp22_ParamLimits

0x12ea,	// (0x00042483) navi_navi_volume_pane_cp2

0x1305,	// (0x0004249e) popup_side_volume_key_window_g2

0x1314,	// (0x000424ad) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0005088a) popup_side_volume_key_window_g

0x1331,	// (0x000424ca) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00050891) popup_side_volume_key_window_t

0x470e,	// (0x000458a7) popup_side_volume_key_window_ParamLimits

0xb76b,	// (0x0004c904) list_double_graphic_pane_g4_ParamLimits

0xb76b,	// (0x0004c904) list_double_graphic_pane_g4

0xcb7b,	// (0x0004dd14) list_single_2heading_msg_pane_ParamLimits

0xcb7b,	// (0x0004dd14) list_single_2heading_msg_pane

0xcc5a,	// (0x0004ddf3) list_single_2heading_msg_pane_g1_ParamLimits

0xcc5a,	// (0x0004ddf3) list_single_2heading_msg_pane_g1

0xcc66,	// (0x0004ddff) list_single_2heading_msg_pane_g2_ParamLimits

0xcc66,	// (0x0004ddff) list_single_2heading_msg_pane_g2

0xcc79,	// (0x0004de12) list_single_2heading_msg_pane_g3_ParamLimits

0xcc79,	// (0x0004de12) list_single_2heading_msg_pane_g3

0x2620,	// (0x000437b9) list_single_2heading_msg_pane_g4_ParamLimits

0x2620,	// (0x000437b9) list_single_2heading_msg_pane_g4

0x0003,

0xfc72,	// (0x00050e0b) list_single_2heading_msg_pane_g_ParamLimits

0xfc72,	// (0x00050e0b) list_single_2heading_msg_pane_g

0x0a93,	// (0x00041c2c) list_single_2heading_msg_pane_t1_ParamLimits

0x0a93,	// (0x00041c2c) list_single_2heading_msg_pane_t1

0xbc19,	// (0x0004cdb2) list_single_2heading_msg_pane_t2_ParamLimits

0xbc19,	// (0x0004cdb2) list_single_2heading_msg_pane_t2

0xbc84,	// (0x0004ce1d) list_single_2heading_msg_pane_t3_ParamLimits

0xbc84,	// (0x0004ce1d) list_single_2heading_msg_pane_t3

0x0b28,	// (0x00041cc1) list_single_2heading_msg_pane_t4_ParamLimits

0x0b28,	// (0x00041cc1) list_single_2heading_msg_pane_t4

0x0003,

0xfc7b,	// (0x00050e14) list_single_2heading_msg_pane_t_ParamLimits

0xfc7b,	// (0x00050e14) list_single_2heading_msg_pane_t

0x3371,	// (0x0004450a) title_pane_g4_ParamLimits

0x3371,	// (0x0004450a) title_pane_g4

0x10f9,	// (0x00042292) title_pane_stacon_g3_ParamLimits

0x10f9,	// (0x00042292) title_pane_stacon_g3

0x842a,	// (0x000495c3) list_single_2graphic_im_pane_g4_ParamLimits

0x842a,	// (0x000495c3) list_single_2graphic_im_pane_g4

0x62a8,	// (0x00047441) popup_side_volume_key_window_cp

0x6ac4,	// (0x00047c5d) main_idle_act2_pane_t1

0x1cb2,	// (0x00042e4b) toolbar_button_pane_g10

0xc29b,	// (0x0004d434) popup_toolbar_window_cp1

0x728e,	// (0x00048427) clock_nsta_pane_cp_t1

0x728e,	// (0x00048427) clock_nsta_pane_cp_t2

0x0001,

0xfa82,	// (0x00050c1b) clock_nsta_pane_cp_t

0x12ea,	// (0x00042483) navi_navi_volume_pane_cp2_ParamLimits

0x12f9,	// (0x00042492) popup_side_volume_key_window_g1_ParamLimits

0x1305,	// (0x0004249e) popup_side_volume_key_window_g2_ParamLimits

0x1314,	// (0x000424ad) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0005088a) popup_side_volume_key_window_g_ParamLimits

0x221d,	// (0x000433b6) fep_hwr_aid_pane

0xe0d6,	// (0x0004f26f) bg_fep_hwr_top_pane_g4_ParamLimits

0x7847,	// (0x000489e0) fep_hwr_top_pane_g1_ParamLimits

0x7859,	// (0x000489f2) fep_hwr_top_pane_g2_ParamLimits

0x22d6,	// (0x0004346f) fep_hwr_top_pane_g3_ParamLimits

0xfad7,	// (0x00050c70) fep_hwr_top_pane_g_ParamLimits

0x22eb,	// (0x00043484) fep_hwr_top_text_pane_ParamLimits

0x606b,	// (0x00047204) aid_touch_tab_arrow_arrow_2

0x6074,	// (0x0004720d) aid_touch_tab_arrow_left_2

0x2231,	// (0x000433ca) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2268,	// (0x00043401) fep_hwr_prediction_pane

0x79b9,	// (0x00048b52) fep_vkb_prediction_pane

0xe210,	// (0x0004f3a9) fep_vkb_side_pane_g3_ParamLimits

0xe210,	// (0x0004f3a9) fep_vkb_side_pane_g3

0x7a69,	// (0x00048c02) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7ee9,	// (0x00049082) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7ef6,	// (0x0004908f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb81,	// (0x00050d1a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8929,	// (0x00049ac2) fep_hwr_prediction_pane_g1

0x2638,	// (0x000437d1) fep_hwr_prediction_pane_g2

0x2640,	// (0x000437d9) fep_hwr_prediction_pane_g3

0x2648,	// (0x000437e1) fep_hwr_prediction_pane_g4

0x0003,

0xfc84,	// (0x00050e1d) fep_hwr_prediction_pane_g

0x8929,	// (0x00049ac2) fep_vkb_prediction_pane_g1

0x8933,	// (0x00049acc) fep_vkb_prediction_pane_g2

0x893b,	// (0x00049ad4) fep_vkb_prediction_pane_g3

0x8943,	// (0x00049adc) fep_vkb_prediction_pane_g4

0x0003,

0xfc8d,	// (0x00050e26) fep_vkb_prediction_pane_g

0x1fa6,	// (0x0004313f) slider_set_pane_g3

0x1fba,	// (0x00043153) slider_set_pane_g4

0x1fd2,	// (0x0004316b) slider_set_pane_g5

0x1fa6,	// (0x0004313f) slider_set_pane_g6

0x1fe8,	// (0x00043181) slider_set_pane_g7

0x6708,	// (0x000478a1) slider_form_pane_g3

0x6711,	// (0x000478aa) slider_form_pane_g4

0x6719,	// (0x000478b2) slider_form_pane_g5

0x6708,	// (0x000478a1) slider_form_pane_g6

0xdd72,	// (0x0004ef0b) slider_form_pane_g7

0x6d6f,	// (0x00047f08) slider_set_pane_vc_g3

0x6d78,	// (0x00047f11) slider_set_pane_vc_g4

0x6d81,	// (0x00047f1a) slider_set_pane_vc_g5

0x6d6f,	// (0x00047f08) slider_set_pane_vc_g6

0x6d8a,	// (0x00047f23) slider_set_pane_vc_g7

0x6f4c,	// (0x000480e5) slider_form_pane_vc_g1

0x6f55,	// (0x000480ee) slider_form_pane_vc_g2

0x6f5e,	// (0x000480f7) slider_form_pane_vc_g3

0x6f4c,	// (0x000480e5) slider_form_pane_vc_g4

0x6f67,	// (0x00048100) slider_form_pane_vc_g5

0x0004,

0xfa54,	// (0x00050bed) slider_form_pane_vc_g

0xd2f4,	// (0x0004e48d) main_idle_act3_pane

0x894b,	// (0x00049ae4) ai3_links_pane

0xe3e8,	// (0x0004f581) popup_ai3_data_window_ParamLimits

0xe3e8,	// (0x0004f581) popup_ai3_data_window

0xd2f4,	// (0x0004e48d) grid_ai3_links_pane

0xe402,	// (0x0004f59b) cell_ai3_links_pane_ParamLimits

0xe402,	// (0x0004f59b) cell_ai3_links_pane

0x8986,	// (0x00049b1f) bg_popup_sub_pane_cp11

0x8993,	// (0x00049b2c) cell_ai3_links_pane_g1

0xd2f4,	// (0x0004e48d) bg_popup_sub_pane_cp12

0x89b8,	// (0x00049b51) heading_ai3_data_pane

0x89c0,	// (0x00049b59) list_ai3_gene_pane

0x89cc,	// (0x00049b65) popup_ai3_data_window_g1

0x89d4,	// (0x00049b6d) heading_ai3_data_pane_g1

0x89dc,	// (0x00049b75) heading_ai3_data_pane_t1

0x89ea,	// (0x00049b83) list_double_ai3_gene_pane_ParamLimits

0x89ea,	// (0x00049b83) list_double_ai3_gene_pane

0x89f7,	// (0x00049b90) list_single_ai3_gene_pane_ParamLimits

0x89f7,	// (0x00049b90) list_single_ai3_gene_pane

0x77b0,	// (0x00048949) list_highlight_pane_cp7_ParamLimits

0x77b0,	// (0x00048949) list_highlight_pane_cp7

0x8a04,	// (0x00049b9d) list_single_a13_gene_pane_t1_ParamLimits

0x8a04,	// (0x00049b9d) list_single_a13_gene_pane_t1

0x8a1b,	// (0x00049bb4) list_single_ai3_gene_pane_g1

0x8a24,	// (0x00049bbd) list_single_ai3_gene_pane_g2

0x0001,

0xfc96,	// (0x00050e2f) list_single_ai3_gene_pane_g

0x8a2c,	// (0x00049bc5) list_double_ai3_gene_pane_g1_ParamLimits

0x8a2c,	// (0x00049bc5) list_double_ai3_gene_pane_g1

0x8a38,	// (0x00049bd1) list_double_ai3_gene_pane_t1_ParamLimits

0x8a38,	// (0x00049bd1) list_double_ai3_gene_pane_t1

0x8a54,	// (0x00049bed) list_double_ai3_gene_pane_t2_ParamLimits

0x8a54,	// (0x00049bed) list_double_ai3_gene_pane_t2

0x8a6a,	// (0x00049c03) list_double_ai3_gene_pane_t3_ParamLimits

0x8a6a,	// (0x00049c03) list_double_ai3_gene_pane_t3

0x0002,

0xfc9b,	// (0x00050e34) list_double_ai3_gene_pane_t_ParamLimits

0xfc9b,	// (0x00050e34) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0a89,	// (0x00041c22) aid_size_min_col_2

0xe3d2,	// (0x0004f56b) aid_size_min_msg_ParamLimits

0xe3d2,	// (0x0004f56b) aid_size_min_msg

0xe224,	// (0x0004f3bd) fep_vkb_top_text_pane_g2_ParamLimits

0xe224,	// (0x0004f3bd) fep_vkb_top_text_pane_g2

0x0001,

0xfb07,	// (0x00050ca0) fep_vkb_top_text_pane_g_ParamLimits

0xfb07,	// (0x00050ca0) fep_vkb_top_text_pane_g

0xd2f4,	// (0x0004e48d) main_hc_apps_shell_pane

0x8a87,	// (0x00049c20) grid_hc_apps_pane_ParamLimits

0x8a87,	// (0x00049c20) grid_hc_apps_pane

0x8a99,	// (0x00049c32) list_hc_apps_pane

0x8aa1,	// (0x00049c3a) scroll_pane_cp37_ParamLimits

0x8aa1,	// (0x00049c3a) scroll_pane_cp37

0xe41c,	// (0x0004f5b5) cell_hc_apps_pane_ParamLimits

0xe41c,	// (0x0004f5b5) cell_hc_apps_pane

0xe4da,	// (0x0004f673) cell_hc_apps_pane_g1_ParamLimits

0xe4da,	// (0x0004f673) cell_hc_apps_pane_g1

0x8b8b,	// (0x00049d24) cell_hc_apps_pane_g2_ParamLimits

0x8b8b,	// (0x00049d24) cell_hc_apps_pane_g2

0x8ba7,	// (0x00049d40) cell_hc_apps_pane_g3_ParamLimits

0x8ba7,	// (0x00049d40) cell_hc_apps_pane_g3

0x0002,

0xfca2,	// (0x00050e3b) cell_hc_apps_pane_g_ParamLimits

0xfca2,	// (0x00050e3b) cell_hc_apps_pane_g

0xe506,	// (0x0004f69f) cell_hc_apps_pane_t1_ParamLimits

0xe506,	// (0x0004f69f) cell_hc_apps_pane_t1

0x36a6,	// (0x0004483f) grid_highlight_pane_cp10_ParamLimits

0x36a6,	// (0x0004483f) grid_highlight_pane_cp10

0xe544,	// (0x0004f6dd) list_single_hc_apps_pane_ParamLimits

0xe544,	// (0x0004f6dd) list_single_hc_apps_pane

0xe571,	// (0x0004f70a) list_single_hc_apps_pane_g1

0xcc85,	// (0x0004de1e) list_single_hc_apps_pane_g2

0x0001,

0xfca9,	// (0x00050e42) list_single_hc_apps_pane_g

0xcc9e,	// (0x0004de37) list_single_hc_apps_pane_g2_copy1

0x0b4d,	// (0x00041ce6) list_single_hc_apps_pane_t1

0x341d,	// (0x000445b6) bg_set_opt_pane_cp_ParamLimits

0x0f8c,	// (0x00042125) setting_slider_pane_t1_ParamLimits

0x0fa5,	// (0x0004213e) setting_slider_pane_t2_ParamLimits

0x0fbf,	// (0x00042158) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x000506d2) setting_slider_pane_t_ParamLimits

0x0fd7,	// (0x00042170) slider_set_pane_ParamLimits

0x15af,	// (0x00042748) control_pane_g5_ParamLimits

0x15af,	// (0x00042748) control_pane_g5

0x6557,	// (0x000476f0) slider_set_pane_g1_ParamLimits

0x1f9a,	// (0x00043133) slider_set_pane_g2_ParamLimits

0x1fa6,	// (0x0004313f) slider_set_pane_g3_ParamLimits

0x1fba,	// (0x00043153) slider_set_pane_g4_ParamLimits

0x1fd2,	// (0x0004316b) slider_set_pane_g5_ParamLimits

0x1fa6,	// (0x0004313f) slider_set_pane_g6_ParamLimits

0x1fe8,	// (0x00043181) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x00050ad8) slider_set_pane_g_ParamLimits

0x47ef,	// (0x00045988) navi_icon_text_pane_ParamLimits

0xd619,	// (0x0004e7b2) aid_fill_nsta_2_ParamLimits

0xd650,	// (0x0004e7e9) aid_touch_tab_arrow_left_ParamLimits

0xd666,	// (0x0004e7ff) aid_touch_tab_arrow_right_ParamLimits

0xd701,	// (0x0004e89a) clock_nsta_pane_ParamLimits

0x604d,	// (0x000471e6) navi_icon_pane_g1_ParamLimits

0x6059,	// (0x000471f2) navi_text_pane_t1_ParamLimits

0x739a,	// (0x00048533) navi_icon_text_pane_g1_ParamLimits

0x73a6,	// (0x0004853f) navi_icon_text_pane_t1_ParamLimits

0xe571,	// (0x0004f70a) list_single_hc_apps_pane_g1_ParamLimits

0xcc85,	// (0x0004de1e) list_single_hc_apps_pane_g2_ParamLimits

0xfca9,	// (0x00050e42) list_single_hc_apps_pane_g_ParamLimits

0xcc9e,	// (0x0004de37) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0b4d,	// (0x00041ce6) list_single_hc_apps_pane_t1_ParamLimits

0xbe44,	// (0x0004cfdd) popup_toolbar2_fixed_window_ParamLimits

0xbe44,	// (0x0004cfdd) popup_toolbar2_fixed_window

0xca92,	// (0x0004dc2b) popup_toolbar2_float_window

0xd2f4,	// (0x0004e48d) bg_popup_sub_pane_cp27

0x8c7e,	// (0x00049e17) grid_toolbar2_float_pane

0xd2f4,	// (0x0004e48d) bg_popup_sub_pane_cp26

0x8c7e,	// (0x00049e17) grid_toolbar2_fixed_pane

0xe58a,	// (0x0004f723) cell_toolbar2_fixed_pane_ParamLimits

0xe58a,	// (0x0004f723) cell_toolbar2_fixed_pane

0xe5a4,	// (0x0004f73d) cell_toolbar2_fixed_pane_g1

0x8c9f,	// (0x00049e38) toolbar2_fixed_button_pane

0x51ba,	// (0x00046353) toolbar2_fixed_button_pane_g1

0x51c2,	// (0x0004635b) toolbar2_fixed_button_pane_g2

0x51ca,	// (0x00046363) toolbar2_fixed_button_pane_g3

0x51d2,	// (0x0004636b) toolbar2_fixed_button_pane_g4

0x51da,	// (0x00046373) toolbar2_fixed_button_pane_g5

0x51e2,	// (0x0004637b) toolbar2_fixed_button_pane_g6

0x51ea,	// (0x00046383) toolbar2_fixed_button_pane_g7

0x51f2,	// (0x0004638b) toolbar2_fixed_button_pane_g8

0x51fa,	// (0x00046393) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x000509da) toolbar2_fixed_button_pane_g

0x8ca7,	// (0x00049e40) cell_toolbar2_float_pane_ParamLimits

0x8ca7,	// (0x00049e40) cell_toolbar2_float_pane

0x8cb8,	// (0x00049e51) cell_toolbar2_float_pane_g1

0x8c9f,	// (0x00049e38) toolbar2_fixed_button_pane_cp

0xe0fe,	// (0x0004f297) fep_vkb_accented_list_pane_ParamLimits

0xe0fe,	// (0x0004f297) fep_vkb_accented_list_pane

0x2439,	// (0x000435d2) bg_popup_fep_shadow_pane_g9

0x496c,	// (0x00045b05) bg_popup_fep_shadow_pane_cp3

0x3e11,	// (0x00044faa) list_accented_list_pane

0x8cc1,	// (0x00049e5a) list_single_accented_list_pane_ParamLimits

0x8cc1,	// (0x00049e5a) list_single_accented_list_pane

0x496c,	// (0x00045b05) list_highlight_pane_cp10

0x8cd2,	// (0x00049e6b) list_single_accented_list_pane_t1

0xc9bc,	// (0x0004db55) popup_slider_window_ParamLimits

0xc9bc,	// (0x0004db55) popup_slider_window

0x890c,	// (0x00049aa5) aid_indentation_list_msg

0xe69b,	// (0x0004f834) bg_popup_window_pane_cp19

0x8dfe,	// (0x00049f97) popup_slider_window_g1

0x8e1a,	// (0x00049fb3) popup_slider_window_g2

0x8e36,	// (0x00049fcf) popup_slider_window_g3

0x0005,

0xfcae,	// (0x00050e47) popup_slider_window_g

0x8e9c,	// (0x0004a035) popup_slider_window_t1

0x8f10,	// (0x0004a0a9) small_volume_slider_vertical_pane

0x77eb,	// (0x00048984) small_volume_slider_vertical_pane_g1

0x77eb,	// (0x00048984) small_volume_slider_vertical_pane_g2

0x8f2c,	// (0x0004a0c5) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc0,	// (0x00050e59) small_volume_slider_vertical_pane_g

0xbdb2,	// (0x0004cf4b) area_side_right_pane_ParamLimits

0xbdb2,	// (0x0004cf4b) area_side_right_pane

0xccba,	// (0x0004de53) aid_size_side_button_ParamLimits

0xccba,	// (0x0004de53) aid_size_side_button

0xccd3,	// (0x0004de6c) grid_sctrl_middle_pane_ParamLimits

0xccd3,	// (0x0004de6c) grid_sctrl_middle_pane

0x26b8,	// (0x00043851) sctrl_sk_bottom_pane

0x26c9,	// (0x00043862) sctrl_sk_top_pane

0x26db,	// (0x00043874) aid_touch_sctrl_top

0x36a6,	// (0x0004483f) bg_sctrl_sk_pane_ParamLimits

0x36a6,	// (0x0004483f) bg_sctrl_sk_pane

0x26e8,	// (0x00043881) sctrl_sk_top_pane_g1

0x26f5,	// (0x0004388e) sctrl_sk_top_pane_t1

0x26db,	// (0x00043874) aid_touch_sctrl_bottom

0x36a6,	// (0x0004483f) bg_sctrl_sk_pane_cp_ParamLimits

0x36a6,	// (0x0004483f) bg_sctrl_sk_pane_cp

0x2710,	// (0x000438a9) sctrl_sk_bottom_pane_g1

0x26f5,	// (0x0004388e) sctrl_sk_bottom_pane_t1

0xcced,	// (0x0004de86) cell_sctrl_middle_pane_ParamLimits

0xcced,	// (0x0004de86) cell_sctrl_middle_pane

0xccfe,	// (0x0004de97) aid_touch_sctrl_middle_ParamLimits

0xccfe,	// (0x0004de97) aid_touch_sctrl_middle

0xcd0b,	// (0x0004dea4) bg_sctrl_middle_pane_ParamLimits

0xcd0b,	// (0x0004dea4) bg_sctrl_middle_pane

0x8fb4,	// (0x0004a14d) cell_sctrl_middle_pane_g1_ParamLimits

0x8fb4,	// (0x0004a14d) cell_sctrl_middle_pane_g1

0xcd19,	// (0x0004deb2) cell_sctrl_middle_pane_g2_ParamLimits

0xcd19,	// (0x0004deb2) cell_sctrl_middle_pane_g2

0x0001,

0xfccc,	// (0x00050e65) cell_sctrl_middle_pane_g_ParamLimits

0xfccc,	// (0x00050e65) cell_sctrl_middle_pane_g

0x51ba,	// (0x00046353) bg_sctrl_middle_pane_g1

0x51c2,	// (0x0004635b) bg_sctrl_middle_pane_g2

0x51ca,	// (0x00046363) bg_sctrl_middle_pane_g3

0x51d2,	// (0x0004636b) bg_sctrl_middle_pane_g4

0x51da,	// (0x00046373) bg_sctrl_middle_pane_g5

0x51e2,	// (0x0004637b) bg_sctrl_middle_pane_g6

0x51ea,	// (0x00046383) bg_sctrl_middle_pane_g7

0x51f2,	// (0x0004638b) bg_sctrl_middle_pane_g8

0x0007,

0xfcd1,	// (0x00050e6a) bg_sctrl_middle_pane_g

0x51fa,	// (0x00046393) bg_sctrl_middle_pane_g8_copy1

0x51ba,	// (0x00046353) bg_sctrl_sk_pane_g1

0x51c2,	// (0x0004635b) bg_sctrl_sk_pane_g2

0x51ca,	// (0x00046363) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x000509da) bg_sctrl_sk_pane_g

0x3bd9,	// (0x00044d72) aid_size_touch_scroll_bar

0x51d2,	// (0x0004636b) bg_sctrl_sk_pane_g4

0x51da,	// (0x00046373) bg_sctrl_sk_pane_g5

0x51e2,	// (0x0004637b) bg_sctrl_sk_pane_g6

0x51ea,	// (0x00046383) bg_sctrl_sk_pane_g7

0x51f2,	// (0x0004638b) bg_sctrl_sk_pane_g8

0x51fa,	// (0x00046393) bg_sctrl_sk_pane_g9

0x176d,	// (0x00042906) popup_fep_china_hwr2_fs_candidate_window

0xc4d0,	// (0x0004d669) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc4d0,	// (0x0004d669) popup_fep_china_hwr2_fs_control_window

0x7a69,	// (0x00048c02) sctrl_sk_top_pane_g2

0x0001,

0xfcc7,	// (0x00050e60) sctrl_sk_top_pane_g

0xe753,	// (0x0004f8ec) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe753,	// (0x0004f8ec) aid_fep_china_hwr2_fs_cell

0xe767,	// (0x0004f900) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe767,	// (0x0004f900) bg_popup_fep_shadow_pane_cp4

0xe77e,	// (0x0004f917) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe77e,	// (0x0004f917) bg_popup_fep_shadow_pane_cp5

0xe790,	// (0x0004f929) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe790,	// (0x0004f929) popup_fep_china_hwr2_fs_control_bar_grid

0xe7a4,	// (0x0004f93d) popup_fep_china_hwr2_fs_control_funtion_grid

0x8f88,	// (0x0004a121) aid_fep_china_hwr2_fs_candi_cell

0xd2f4,	// (0x0004e48d) bg_popup_fep_shadow_pane_cp6

0x8f92,	// (0x0004a12b) popup_fep_china_hwr2_fs_candidate_grid

0xe7ac,	// (0x0004f945) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe7ac,	// (0x0004f945) cell_fep_china_hwr2_fs_funtion_grid

0x77eb,	// (0x00048984) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8fb4,	// (0x0004a14d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8fb4,	// (0x0004a14d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8fc2,	// (0x0004a15b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8fc2,	// (0x0004a15b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce2,	// (0x00050e7b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce2,	// (0x00050e7b) cell_fep_china_hwr2_fs_funtion_grid_g

0xe7c4,	// (0x0004f95d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe7c4,	// (0x0004f95d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe7d9,	// (0x0004f972) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe7d9,	// (0x0004f972) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce7,	// (0x00050e80) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce7,	// (0x00050e80) cell_fep_china_hwr2_fs_funtion_grid_t

0x9009,	// (0x0004a1a2) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9011,	// (0x0004a1aa) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9019,	// (0x0004a1b2) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcec,	// (0x00050e85) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9021,	// (0x0004a1ba) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9021,	// (0x0004a1ba) cell_fep_china_hwr2_fs_candidate_grid

0x903a,	// (0x0004a1d3) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9042,	// (0x0004a1db) popup_fep_china_hwr2_fs_candidate_grid_g21

0x77eb,	// (0x00048984) cell_fep_china_hwr2_fs_candidate_grid_g1

0x77eb,	// (0x00048984) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0c,	// (0x00050ca5) cell_fep_china_hwr2_fs_candidate_grid_g

0x904a,	// (0x0004a1e3) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4db0,	// (0x00045f49) clock_nsta_pane_cp_24_ParamLimits

0x4db0,	// (0x00045f49) clock_nsta_pane_cp_24

0x4e2e,	// (0x00045fc7) indicator_nsta_pane_cp_24_ParamLimits

0x4e2e,	// (0x00045fc7) indicator_nsta_pane_cp_24

0x5ec9,	// (0x00047062) heading_pane_g1

0x0001,

0xf8a6,	// (0x00050a3f) heading_pane_g

0x690d,	// (0x00047aa6) grid_sct_catagory_button_pane

0x693d,	// (0x00047ad6) scroll_pane_cp5_ParamLimits

0x73e8,	// (0x00048581) button_value_adjust_pane_cp5_ParamLimits

0x73e8,	// (0x00048581) button_value_adjust_pane_cp5

0x74c7,	// (0x00048660) form2_midp_time_pane_ParamLimits

0x9058,	// (0x0004a1f1) cell_sct_catagory_button_pane_ParamLimits

0x9058,	// (0x0004a1f1) cell_sct_catagory_button_pane

0x77b0,	// (0x00048949) bg_button_pane_cp01_ParamLimits

0x77b0,	// (0x00048949) bg_button_pane_cp01

0x77eb,	// (0x00048984) cell_sct_catagory_button_pane_g1

0xca35,	// (0x0004dbce) popup_tb_extension_window

0xe7f5,	// (0x0004f98e) aid_size_cell_ext_ParamLimits

0xe7f5,	// (0x0004f98e) aid_size_cell_ext

0x3a1b,	// (0x00044bb4) bg_tb_trans_pane_cp1_ParamLimits

0x3a1b,	// (0x00044bb4) bg_tb_trans_pane_cp1

0xe81b,	// (0x0004f9b4) grid_tb_ext_pane_ParamLimits

0xe81b,	// (0x0004f9b4) grid_tb_ext_pane

0xe856,	// (0x0004f9ef) cell_tb_ext_pane_ParamLimits

0xe856,	// (0x0004f9ef) cell_tb_ext_pane

0xe87e,	// (0x0004fa17) cell_tb_ext_pane_g1_ParamLimits

0xe87e,	// (0x0004fa17) cell_tb_ext_pane_g1

0x90ec,	// (0x0004a285) cell_tb_ext_pane_t1

0x36a6,	// (0x0004483f) list_highlight_pane_cp11_ParamLimits

0x36a6,	// (0x0004483f) list_highlight_pane_cp11

0xbe59,	// (0x0004cff2) popup_uni_indicator_window_ParamLimits

0xbe59,	// (0x0004cff2) popup_uni_indicator_window

0x3cb6,	// (0x00044e4f) bg_popup_sub_pane_cp14

0x9107,	// (0x0004a2a0) list_uniindi_pane

0x9113,	// (0x0004a2ac) uniindi_top_pane

0x36a6,	// (0x0004483f) bg_uniindi_top_pane

0x9132,	// (0x0004a2cb) uniindi_top_pane_g1

0x9148,	// (0x0004a2e1) uniindi_top_pane_g2

0x0003,

0xfcf3,	// (0x00050e8c) uniindi_top_pane_g

0x9172,	// (0x0004a30b) uniindi_top_pane_t1

0x919c,	// (0x0004a335) list_single_uniindi_pane_ParamLimits

0x919c,	// (0x0004a335) list_single_uniindi_pane

0x77eb,	// (0x00048984) bg_uniindi_top_pane_g1

0x91af,	// (0x0004a348) list_single_uniindi_pane_g1

0x91c2,	// (0x0004a35b) list_single_uniindi_pane_t1

0xd2f4,	// (0x0004e48d) control_bg_pane

0x91e7,	// (0x0004a380) bg_sctrl_sk_pane_cp1

0x91f0,	// (0x0004a389) bg_sctrl_sk_pane_cp2

0x91f9,	// (0x0004a392) control_bg_pane_g1

0x9202,	// (0x0004a39b) control_bg_pane_g2

0x0001,

0xfcfc,	// (0x00050e95) control_bg_pane_g

0x7232,	// (0x000483cb) cell_indicator_nsta_pane_g1_ParamLimits

0xdf63,	// (0x0004f0fc) cell_indicator_nsta_pane_g2_ParamLimits

0xfa70,	// (0x00050c09) cell_indicator_nsta_pane_g_ParamLimits

0x08ea,	// (0x00041a83) form2_midp_time_pane_t1_ParamLimits

0x220f,	// (0x000433a8) main_idle_act4_pane_ParamLimits

0x220f,	// (0x000433a8) main_idle_act4_pane

0xca35,	// (0x0004dbce) popup_tb_extension_window_ParamLimits

0xe83d,	// (0x0004f9d6) tb_ext_find_pane_ParamLimits

0xe83d,	// (0x0004f9d6) tb_ext_find_pane

0x920b,	// (0x0004a3a4) ai_gene_pane_1_cp1

0x4ab3,	// (0x00045c4c) ai_gene_pane_2_cp1

0x9213,	// (0x0004a3ac) list_single_idle_plugin_calendar_pane

0x921c,	// (0x0004a3b5) list_single_idle_plugin_notification_pane

0x9225,	// (0x0004a3be) list_single_idle_plugin_player_pane

0xe89b,	// (0x0004fa34) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe89b,	// (0x0004fa34) list_single_idle_plugin_shortcut_pane

0xe8c3,	// (0x0004fa5c) main_idle_act4_pane_t1

0xe8d9,	// (0x0004fa72) main_idle_act4_pane_t2

0x0001,

0xfd01,	// (0x00050e9a) main_idle_act4_pane_t

0xe8ef,	// (0x0004fa88) middle_sk_idle_act4_pane_ParamLimits

0xe8ef,	// (0x0004fa88) middle_sk_idle_act4_pane

0xe90b,	// (0x0004faa4) popup_clock_digital_analogue_window_cp2

0xe933,	// (0x0004facc) shortcut_wheel_idle_act4_pane_ParamLimits

0xe933,	// (0x0004facc) shortcut_wheel_idle_act4_pane

0x77eb,	// (0x00048984) shortcut_wheel_idle_act4_pane_g1

0x77eb,	// (0x00048984) shortcut_wheel_idle_act4_pane_g2

0x77eb,	// (0x00048984) shortcut_wheel_idle_act4_pane_g3

0x77eb,	// (0x00048984) shortcut_wheel_idle_act4_pane_g4

0x77eb,	// (0x00048984) shortcut_wheel_idle_act4_pane_g5

0x92b8,	// (0x0004a451) shortcut_wheel_idle_act4_pane_g6

0x92c0,	// (0x0004a459) shortcut_wheel_idle_act4_pane_g7

0x92c8,	// (0x0004a461) shortcut_wheel_idle_act4_pane_g8

0x92d0,	// (0x0004a469) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd06,	// (0x00050e9f) shortcut_wheel_idle_act4_pane_g

0xe0d6,	// (0x0004f26f) middle_sk_idle_act4_pane_g1_ParamLimits

0xe0d6,	// (0x0004f26f) middle_sk_idle_act4_pane_g1

0xe9b0,	// (0x0004fb49) middle_sk_idle_act4_pane_g2_ParamLimits

0xe9b0,	// (0x0004fb49) middle_sk_idle_act4_pane_g2

0x0001,

0xfd29,	// (0x00050ec2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd29,	// (0x00050ec2) middle_sk_idle_act4_pane_g

0xe9c8,	// (0x0004fb61) middle_sk_idle_act4_pane_t1_ParamLimits

0xe9c8,	// (0x0004fb61) middle_sk_idle_act4_pane_t1

0xe9f7,	// (0x0004fb90) grid_ai_shortcut_pane_ParamLimits

0xe9f7,	// (0x0004fb90) grid_ai_shortcut_pane

0xea14,	// (0x0004fbad) list_highlight_pane_cp16_ParamLimits

0xea14,	// (0x0004fbad) list_highlight_pane_cp16

0xea21,	// (0x0004fbba) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea21,	// (0x0004fbba) list_single_idle_plugin_shortcut_pane_g1

0xea2d,	// (0x0004fbc6) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea2d,	// (0x0004fbc6) list_single_idle_plugin_shortcut_pane_g2

0xea49,	// (0x0004fbe2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xea49,	// (0x0004fbe2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd2e,	// (0x00050ec7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd2e,	// (0x00050ec7) list_single_idle_plugin_shortcut_pane_g

0xea5e,	// (0x0004fbf7) cell_ai_shortcut_pane_ParamLimits

0xea5e,	// (0x0004fbf7) cell_ai_shortcut_pane

0xea74,	// (0x0004fc0d) cell_ai_shortcut_pane_g1_ParamLimits

0xea74,	// (0x0004fc0d) cell_ai_shortcut_pane_g1

0x920b,	// (0x0004a3a4) ai_gene_pane_1_cp2

0x9400,	// (0x0004a599) ai_gene_pane_2_cp2

0x9408,	// (0x0004a5a1) list_highlight_pane_cp15

0x9411,	// (0x0004a5aa) list_single_idle_plugin_calendar_pane_g1

0x9408,	// (0x0004a5a1) list_highlight_pane_cp17

0x9419,	// (0x0004a5b2) list_single_idle_plugin_calendar_pane_g1_copy1

0x9421,	// (0x0004a5ba) list_single_idle_plugin_player_pane_g1

0x6b66,	// (0x00047cff) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd35,	// (0x00050ece) list_single_idle_plugin_player_pane_g

0x9429,	// (0x0004a5c2) list_single_idle_plugin_player_pane_t1

0x9437,	// (0x0004a5d0) list_single_idle_plugin_player_pane_t2

0x9445,	// (0x0004a5de) list_single_idle_plugin_player_pane_t3

0x9453,	// (0x0004a5ec) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd3a,	// (0x00050ed3) list_single_idle_plugin_player_pane_t

0x9461,	// (0x0004a5fa) wait_bar_pane_cp15

0x9469,	// (0x0004a602) grid_ai_notification_pane

0x6b66,	// (0x00047cff) list_single_idle_plugin_notification_pane_g1

0xea96,	// (0x0004fc2f) cell_ai_notification_pane_ParamLimits

0xea96,	// (0x0004fc2f) cell_ai_notification_pane

0x947f,	// (0x0004a618) cell_ai_notification_pane_g1

0x9487,	// (0x0004a620) cell_ai_notification_pane_t1

0xeaa3,	// (0x0004fc3c) tb_ext_find_button_pane

0xeaab,	// (0x0004fc44) tb_ext_find_pane_g1

0xeab3,	// (0x0004fc4c) tb_ext_find_pane_t1

0x433f,	// (0x000454d8) tb_ext_find_button_pane_g1

0x94b3,	// (0x0004a64c) tb_ext_find_button_pane_g2

0x0001,

0xfd43,	// (0x00050edc) tb_ext_find_button_pane_g

0xe8c3,	// (0x0004fa5c) main_idle_act4_pane_t1_ParamLimits

0xe8d9,	// (0x0004fa72) main_idle_act4_pane_t2_ParamLimits

0xfd01,	// (0x00050e9a) main_idle_act4_pane_t_ParamLimits

0xe90b,	// (0x0004faa4) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe923,	// (0x0004fabc) sat_plugin_idle_act4_pane_ParamLimits

0xe923,	// (0x0004fabc) sat_plugin_idle_act4_pane

0xeac1,	// (0x0004fc5a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeac1,	// (0x0004fc5a) sat_plugin_idle_act4_pane_t1

0xead9,	// (0x0004fc72) sat_plugin_idle_act4_pane_t2_ParamLimits

0xead9,	// (0x0004fc72) sat_plugin_idle_act4_pane_t2

0xeaf1,	// (0x0004fc8a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeaf1,	// (0x0004fc8a) sat_plugin_idle_act4_pane_t3

0xeb09,	// (0x0004fca2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb09,	// (0x0004fca2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd48,	// (0x00050ee1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd48,	// (0x00050ee1) sat_plugin_idle_act4_pane_t

0x0df0,	// (0x00041f89) popup_battery_window_ParamLimits

0x0df0,	// (0x00041f89) popup_battery_window

0x36a6,	// (0x0004483f) bg_popup_sub_pane_cp25_ParamLimits

0x36a6,	// (0x0004483f) bg_popup_sub_pane_cp25

0x9508,	// (0x0004a6a1) popup_battery_window_g1_ParamLimits

0x9508,	// (0x0004a6a1) popup_battery_window_g1

0x9514,	// (0x0004a6ad) popup_battery_window_t1_ParamLimits

0x9514,	// (0x0004a6ad) popup_battery_window_t1

0x9526,	// (0x0004a6bf) popup_battery_window_t2_ParamLimits

0x9526,	// (0x0004a6bf) popup_battery_window_t2

0x0001,

0xfd51,	// (0x00050eea) popup_battery_window_t_ParamLimits

0xfd51,	// (0x00050eea) popup_battery_window_t

0xd4f3,	// (0x0004e68c) midp_canvas_pane_ParamLimits

0xd550,	// (0x0004e6e9) midp_keypad_pane_ParamLimits

0xd550,	// (0x0004e6e9) midp_keypad_pane

0x4c90,	// (0x00045e29) main_midp_pane_ParamLimits

0x72ac,	// (0x00048445) signal_pane_g2_cp_ParamLimits

0xeb21,	// (0x0004fcba) aid_size_cell_midp_keypad_ParamLimits

0xeb21,	// (0x0004fcba) aid_size_cell_midp_keypad

0xeb3f,	// (0x0004fcd8) midp_keyp_game_grid_pane_ParamLimits

0xeb3f,	// (0x0004fcd8) midp_keyp_game_grid_pane

0xeb66,	// (0x0004fcff) midp_keyp_rocker_pane_ParamLimits

0xeb66,	// (0x0004fcff) midp_keyp_rocker_pane

0xebb7,	// (0x0004fd50) midp_keyp_sk_left_pane_ParamLimits

0xebb7,	// (0x0004fd50) midp_keyp_sk_left_pane

0xec0b,	// (0x0004fda4) midp_keyp_sk_right_pane_ParamLimits

0xec0b,	// (0x0004fda4) midp_keyp_sk_right_pane

0xd2f4,	// (0x0004e48d) bg_button_pane_cp03

0xec5f,	// (0x0004fdf8) midp_keyp_sk_left_pane_g1

0xd2f4,	// (0x0004e48d) bg_button_pane_cp04

0xec5f,	// (0x0004fdf8) midp_keyp_sk_right_pane_g1

0x77eb,	// (0x00048984) midp_keyp_rocker_pane_g1

0xec68,	// (0x0004fe01) keyp_game_cell_pane_ParamLimits

0xec68,	// (0x0004fe01) keyp_game_cell_pane

0xd2f4,	// (0x0004e48d) bg_button_pane_cp02

0xec8c,	// (0x0004fe25) keyp_game_cell_pane_g1

0xbdf4,	// (0x0004cf8d) popup_fep_vkb2_window_ParamLimits

0xbdf4,	// (0x0004cf8d) popup_fep_vkb2_window

0xcd25,	// (0x0004debe) aid_size_cell_vkb2_ParamLimits

0xcd25,	// (0x0004debe) aid_size_cell_vkb2

0xcd51,	// (0x0004deea) popup_fep_vkb2_window_g1_ParamLimits

0xcd51,	// (0x0004deea) popup_fep_vkb2_window_g1

0xcda1,	// (0x0004df3a) vkb2_area_bottom_pane_ParamLimits

0xcda1,	// (0x0004df3a) vkb2_area_bottom_pane

0xcdf5,	// (0x0004df8e) vkb2_area_keypad_pane_ParamLimits

0xcdf5,	// (0x0004df8e) vkb2_area_keypad_pane

0xce3d,	// (0x0004dfd6) vkb2_area_top_pane_ParamLimits

0xce3d,	// (0x0004dfd6) vkb2_area_top_pane

0xcec9,	// (0x0004e062) vkb2_top_entry_pane_ParamLimits

0xcec9,	// (0x0004e062) vkb2_top_entry_pane

0xcef6,	// (0x0004e08f) vkb2_top_grid_left_pane_ParamLimits

0xcef6,	// (0x0004e08f) vkb2_top_grid_left_pane

0xcf17,	// (0x0004e0b0) vkb2_top_grid_right_pane_ParamLimits

0xcf17,	// (0x0004e0b0) vkb2_top_grid_right_pane

0x296d,	// (0x00043b06) vkb2_cell_keypad_pane_ParamLimits

0x296d,	// (0x00043b06) vkb2_cell_keypad_pane

0xcf5f,	// (0x0004e0f8) vkb2_area_bottom_grid_pane_ParamLimits

0xcf5f,	// (0x0004e0f8) vkb2_area_bottom_grid_pane

0xcf89,	// (0x0004e122) vkb2_area_bottom_pane_g1_ParamLimits

0xcf89,	// (0x0004e122) vkb2_area_bottom_pane_g1

0xcfaf,	// (0x0004e148) vkb2_area_bottom_pane_g2_ParamLimits

0xcfaf,	// (0x0004e148) vkb2_area_bottom_pane_g2

0xcfe0,	// (0x0004e179) vkb2_area_bottom_pane_g3_ParamLimits

0xcfe0,	// (0x0004e179) vkb2_area_bottom_pane_g3

0x0002,

0xfd56,	// (0x00050eef) vkb2_area_bottom_pane_g_ParamLimits

0xfd56,	// (0x00050eef) vkb2_area_bottom_pane_g

0x2b17,	// (0x00043cb0) vkb2_top_cell_left_pane_ParamLimits

0x2b17,	// (0x00043cb0) vkb2_top_cell_left_pane

0xec95,	// (0x0004fe2e) vkb2_top_entry_pane_g1_ParamLimits

0xec95,	// (0x0004fe2e) vkb2_top_entry_pane_g1

0xeca3,	// (0x0004fe3c) vkb2_top_entry_pane_t1_ParamLimits

0xeca3,	// (0x0004fe3c) vkb2_top_entry_pane_t1

0x96d7,	// (0x0004a870) vkb2_top_entry_pane_t2_ParamLimits

0x96d7,	// (0x0004a870) vkb2_top_entry_pane_t2

0x9709,	// (0x0004a8a2) vkb2_top_entry_pane_t3_ParamLimits

0x9709,	// (0x0004a8a2) vkb2_top_entry_pane_t3

0x0002,

0xfd5d,	// (0x00050ef6) vkb2_top_entry_pane_t_ParamLimits

0xfd5d,	// (0x00050ef6) vkb2_top_entry_pane_t

0xd04a,	// (0x0004e1e3) vkb2_top_grid_right_pane_g1_ParamLimits

0xd04a,	// (0x0004e1e3) vkb2_top_grid_right_pane_g1

0x2b7a,	// (0x00043d13) vkb2_top_grid_right_pane_g2_ParamLimits

0x2b7a,	// (0x00043d13) vkb2_top_grid_right_pane_g2

0x2b92,	// (0x00043d2b) vkb2_top_grid_right_pane_g3_ParamLimits

0x2b92,	// (0x00043d2b) vkb2_top_grid_right_pane_g3

0xd060,	// (0x0004e1f9) vkb2_top_grid_right_pane_g4_ParamLimits

0xd060,	// (0x0004e1f9) vkb2_top_grid_right_pane_g4

0x0003,

0xfd64,	// (0x00050efd) vkb2_top_grid_right_pane_g_ParamLimits

0xfd64,	// (0x00050efd) vkb2_top_grid_right_pane_g

0x2bc0,	// (0x00043d59) vkb2_top_cell_left_pane_g1

0x2bd7,	// (0x00043d70) vkb2_cell_keypad_pane_g1_ParamLimits

0x2bd7,	// (0x00043d70) vkb2_cell_keypad_pane_g1

0x972d,	// (0x0004a8c6) vkb2_cell_keypad_pane_t1_ParamLimits

0x972d,	// (0x0004a8c6) vkb2_cell_keypad_pane_t1

0x2be5,	// (0x00043d7e) vkb2_cell_bottom_grid_pane_ParamLimits

0x2be5,	// (0x00043d7e) vkb2_cell_bottom_grid_pane

0x2c1e,	// (0x00043db7) vkb2_cell_bottom_grid_pane_g1

0xe954,	// (0x0004faed) aid_call2_pane_cp02

0xe95c,	// (0x0004faf5) aid_call_pane_cp02

0xe964,	// (0x0004fafd) clock_digital_number_pane_cp10

0xe96c,	// (0x0004fb05) clock_digital_number_pane_cp11

0xe974,	// (0x0004fb0d) clock_digital_number_pane_cp12

0xe97c,	// (0x0004fb15) clock_digital_number_pane_cp13

0xe984,	// (0x0004fb1d) clock_digital_separator_pane_cp10

0x433f,	// (0x000454d8) popup_clock_digital_analogue_window_cp2_g1

0x433f,	// (0x000454d8) popup_clock_digital_analogue_window_cp2_g2

0xe98c,	// (0x0004fb25) popup_clock_digital_analogue_window_cp2_g3

0x433f,	// (0x000454d8) popup_clock_digital_analogue_window_cp2_g4

0xe98c,	// (0x0004fb25) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd19,	// (0x00050eb2) popup_clock_digital_analogue_window_cp2_g

0xe994,	// (0x0004fb2d) popup_clock_digital_analogue_window_cp2_t1

0xe9a2,	// (0x0004fb3b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd24,	// (0x00050ebd) popup_clock_digital_analogue_window_cp2_t

0x77eb,	// (0x00048984) clock_digital_number_pane_cp10_g1

0x77eb,	// (0x00048984) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0c,	// (0x00050ca5) clock_digital_number_pane_cp10_g

0x77eb,	// (0x00048984) clock_digital_separator_pane_cp10_g1

0x77eb,	// (0x00048984) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0c,	// (0x00050ca5) clock_digital_separator_pane_cp10_g

0x9154,	// (0x0004a2ed) uniindi_top_pane_g3

0x9165,	// (0x0004a2fe) uniindi_top_pane_g4

0x29f8,	// (0x00043b91) vkb2_row_keypad_pane_ParamLimits

0x29f8,	// (0x00043b91) vkb2_row_keypad_pane

0x2c3e,	// (0x00043dd7) vkb2_cell_t_keypad_pane_ParamLimits

0x2c3e,	// (0x00043dd7) vkb2_cell_t_keypad_pane

0x2c4e,	// (0x00043de7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2c4e,	// (0x00043de7) vkb2_cell_t_keypad_pane_cp08

0x2c61,	// (0x00043dfa) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2c61,	// (0x00043dfa) vkb2_cell_t_keypad_pane_cp09

0x2c75,	// (0x00043e0e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2c75,	// (0x00043e0e) vkb2_cell_t_keypad_pane_cp01

0x2c86,	// (0x00043e1f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2c86,	// (0x00043e1f) vkb2_cell_t_keypad_pane_cp02

0x2c97,	// (0x00043e30) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2c97,	// (0x00043e30) vkb2_cell_t_keypad_pane_cp03

0x2ca8,	// (0x00043e41) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2ca8,	// (0x00043e41) vkb2_cell_t_keypad_pane_cp04

0x2cb9,	// (0x00043e52) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2cb9,	// (0x00043e52) vkb2_cell_t_keypad_pane_cp05

0x2cca,	// (0x00043e63) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2cca,	// (0x00043e63) vkb2_cell_t_keypad_pane_cp06

0x2cdb,	// (0x00043e74) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2cdb,	// (0x00043e74) vkb2_cell_t_keypad_pane_cp07

0x2cec,	// (0x00043e85) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2cec,	// (0x00043e85) vkb2_cell_t_keypad_pane_cp10

0x7a69,	// (0x00048c02) vkb2_cell_t_keypad_pane_g1

0x9744,	// (0x0004a8dd) vkb2_cell_t_keypad_pane_t1

0xd2f4,	// (0x0004e48d) popup_grid_graphic2_window

0xecdc,	// (0x0004fe75) aid_size_cell_graphic2_ParamLimits

0xecdc,	// (0x0004fe75) aid_size_cell_graphic2

0xed1a,	// (0x0004feb3) bg_popup_window_pane_cp21_ParamLimits

0xed1a,	// (0x0004feb3) bg_popup_window_pane_cp21

0xed28,	// (0x0004fec1) graphic2_pages_pane_ParamLimits

0xed28,	// (0x0004fec1) graphic2_pages_pane

0xed7e,	// (0x0004ff17) grid_graphic2_control_pane_ParamLimits

0xed7e,	// (0x0004ff17) grid_graphic2_control_pane

0xedc6,	// (0x0004ff5f) grid_graphic2_pane_ParamLimits

0xedc6,	// (0x0004ff5f) grid_graphic2_pane

0xee4d,	// (0x0004ffe6) cell_graphic2_pane

0xd2f4,	// (0x0004e48d) main_comp_mode_pane

0x89c0,	// (0x00049b59) list_ai3_gene_pane_ParamLimits

0xe69b,	// (0x0004f834) bg_popup_window_pane_cp19_ParamLimits

0x8da2,	// (0x00049f3b) bg_touch_area_indi_pane_ParamLimits

0x8da2,	// (0x00049f3b) bg_touch_area_indi_pane

0x8db8,	// (0x00049f51) bg_touch_area_indi_pane_cp01_ParamLimits

0x8db8,	// (0x00049f51) bg_touch_area_indi_pane_cp01

0x8dce,	// (0x00049f67) bg_touch_area_indi_pane_cp02_ParamLimits

0x8dce,	// (0x00049f67) bg_touch_area_indi_pane_cp02

0x8de4,	// (0x00049f7d) bg_touch_area_indi_pane_cp03_ParamLimits

0x8de4,	// (0x00049f7d) bg_touch_area_indi_pane_cp03

0x8dfe,	// (0x00049f97) popup_slider_window_g1_ParamLimits

0x8e1a,	// (0x00049fb3) popup_slider_window_g2_ParamLimits

0x8e36,	// (0x00049fcf) popup_slider_window_g3_ParamLimits

0xfcae,	// (0x00050e47) popup_slider_window_g_ParamLimits

0x8e9c,	// (0x0004a035) popup_slider_window_t1_ParamLimits

0x8f10,	// (0x0004a0a9) small_volume_slider_vertical_pane_ParamLimits

0xee4d,	// (0x0004ffe6) cell_graphic2_pane_ParamLimits

0xeea8,	// (0x00050041) bg_button_pane_cp10_ParamLimits

0xeea8,	// (0x00050041) bg_button_pane_cp10

0xeebb,	// (0x00050054) bg_button_pane_cp11_ParamLimits

0xeebb,	// (0x00050054) bg_button_pane_cp11

0xeece,	// (0x00050067) graphic2_pages_pane_g1_ParamLimits

0xeece,	// (0x00050067) graphic2_pages_pane_g1

0xeee9,	// (0x00050082) graphic2_pages_pane_g2_ParamLimits

0xeee9,	// (0x00050082) graphic2_pages_pane_g2

0x0001,

0xfd72,	// (0x00050f0b) graphic2_pages_pane_g_ParamLimits

0xfd72,	// (0x00050f0b) graphic2_pages_pane_g

0xef01,	// (0x0005009a) graphic2_pages_pane_t1_ParamLimits

0xef01,	// (0x0005009a) graphic2_pages_pane_t1

0xef19,	// (0x000500b2) cell_graphic2_control_pane_ParamLimits

0xef19,	// (0x000500b2) cell_graphic2_control_pane

0xef4b,	// (0x000500e4) cell_graphic2_pane_g1_ParamLimits

0xef4b,	// (0x000500e4) cell_graphic2_pane_g1

0xe0e4,	// (0x0004f27d) cell_graphic2_pane_g2_ParamLimits

0xe0e4,	// (0x0004f27d) cell_graphic2_pane_g2

0xef58,	// (0x000500f1) cell_graphic2_pane_g3_ParamLimits

0xef58,	// (0x000500f1) cell_graphic2_pane_g3

0xe0f1,	// (0x0004f28a) cell_graphic2_pane_g4_ParamLimits

0xe0f1,	// (0x0004f28a) cell_graphic2_pane_g4

0xef65,	// (0x000500fe) cell_graphic2_pane_g5_ParamLimits

0xef65,	// (0x000500fe) cell_graphic2_pane_g5

0x0004,

0xfd77,	// (0x00050f10) cell_graphic2_pane_g_ParamLimits

0xfd77,	// (0x00050f10) cell_graphic2_pane_g

0xef82,	// (0x0005011b) cell_graphic2_pane_t1_ParamLimits

0xef82,	// (0x0005011b) cell_graphic2_pane_t1

0x5ebd,	// (0x00047056) grid_highlight_pane_cp11_ParamLimits

0x5ebd,	// (0x00047056) grid_highlight_pane_cp11

0x36a6,	// (0x0004483f) bg_button_pane_cp05

0xefcc,	// (0x00050165) cell_graphic2_control_pane_g1

0x77eb,	// (0x00048984) bg_touch_area_indi_pane_g1

0x9a1d,	// (0x0004abb6) aid_cmod_rocker_key_size

0x9a27,	// (0x0004abc0) aid_cmode_itu_key_size

0x9a31,	// (0x0004abca) main_cmode_video_pane

0x9a3b,	// (0x0004abd4) main_comp_mode_itu_pane

0x9a47,	// (0x0004abe0) main_comp_mode_rocker_pane

0x9a53,	// (0x0004abec) cell_cmode_rocker_pane_ParamLimits

0x9a53,	// (0x0004abec) cell_cmode_rocker_pane

0x9a65,	// (0x0004abfe) cell_cmode_itu_pane_ParamLimits

0x9a65,	// (0x0004abfe) cell_cmode_itu_pane

0x3cb6,	// (0x00044e4f) bg_button_pane_cp06_ParamLimits

0x3cb6,	// (0x00044e4f) bg_button_pane_cp06

0x7a69,	// (0x00048c02) cell_cmode_rocker_pane_g1_ParamLimits

0x7a69,	// (0x00048c02) cell_cmode_rocker_pane_g1

0x8fb4,	// (0x0004a14d) cell_cmode_rocker_pane_g2_ParamLimits

0x8fb4,	// (0x0004a14d) cell_cmode_rocker_pane_g2

0x0001,

0xfd87,	// (0x00050f20) cell_cmode_rocker_pane_g_ParamLimits

0xfd87,	// (0x00050f20) cell_cmode_rocker_pane_g

0xd2f4,	// (0x0004e48d) bg_button_pane_cp07

0x9a7a,	// (0x0004ac13) cell_cmode_itu_pane_g1

0x9a83,	// (0x0004ac1c) cell_cmode_itu_pane_t1

0x9a91,	// (0x0004ac2a) cell_cmode_itu_pane_t2

0x0001,

0xfd8c,	// (0x00050f25) cell_cmode_itu_pane_t

0x91d7,	// (0x0004a370) aid_touch_ctrl_left

0x91df,	// (0x0004a378) aid_touch_ctrl_right

0xd2f4,	// (0x0004e48d) compa_mode_pane

0xeff0,	// (0x00050189) aid_cmod_rocker_key_size_cp

0xeffa,	// (0x00050193) aid_cmode_itu_key_size_cp

0x9ab3,	// (0x0004ac4c) compa_mode_pane_g1

0x9abb,	// (0x0004ac54) compa_mode_pane_g2

0x9ac3,	// (0x0004ac5c) compa_mode_pane_g3

0x0002,

0xfd91,	// (0x00050f2a) compa_mode_pane_g

0xf004,	// (0x0005019d) main_comp_mode_itu_pane_cp

0xf00c,	// (0x000501a5) main_comp_mode_rocker_pane_cp

0xf014,	// (0x000501ad) cell_cmode_itu_pane_cp_ParamLimits

0xf014,	// (0x000501ad) cell_cmode_itu_pane_cp

0xf029,	// (0x000501c2) cell_cmode_rocker_pane_cp_ParamLimits

0xf029,	// (0x000501c2) cell_cmode_rocker_pane_cp

0x3cb6,	// (0x00044e4f) bg_button_pane_cp06_cp_ParamLimits

0x3cb6,	// (0x00044e4f) bg_button_pane_cp06_cp

0x7a69,	// (0x00048c02) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7a69,	// (0x00048c02) cell_cmode_rocker_pane_g1_cp

0x77eb,	// (0x00048984) cell_cmode_rocker_pane_g2_cp

0xd2f4,	// (0x0004e48d) bg_button_pane_cp07_cp

0xf03b,	// (0x000501d4) cell_cmode_itu_pane_g1_cp

0xf044,	// (0x000501dd) cell_cmode_itu_pane_t1_cp

0xf044,	// (0x000501dd) cell_cmode_itu_pane_t2_cp

0xdd68,	// (0x0004ef01) settings_code_pane_cp2

0x341d,	// (0x000445b6) bg_popup_window_pane_cp3_ParamLimits

0x38a6,	// (0x00044a3f) heading_pane_cp3_ParamLimits

0x38b5,	// (0x00044a4e) listscroll_popup_graphic_pane_ParamLimits

0x221d,	// (0x000433b6) fep_hwr_aid_pane_ParamLimits

0x26db,	// (0x00043874) aid_touch_sctrl_top_ParamLimits

0x26e8,	// (0x00043881) sctrl_sk_top_pane_g1_ParamLimits

0x7a69,	// (0x00048c02) sctrl_sk_top_pane_g2_ParamLimits

0xfcc7,	// (0x00050e60) sctrl_sk_top_pane_g_ParamLimits

0x26f5,	// (0x0004388e) sctrl_sk_top_pane_t1_ParamLimits

0x26db,	// (0x00043874) aid_touch_sctrl_bottom_ParamLimits

0x26f5,	// (0x0004388e) sctrl_sk_bottom_pane_t1_ParamLimits

0x9120,	// (0x0004a2b9) aid_area_touch_clock

0xce89,	// (0x0004e022) aid_vkb2_area_top_pane_cell_ParamLimits

0xce89,	// (0x0004e022) aid_vkb2_area_top_pane_cell

0xcf38,	// (0x0004e0d1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcf38,	// (0x0004e0d1) aid_vkb2_area_bottom_pane_cell

0x968f,	// (0x0004a828) popup_char_count_window

0x9b10,	// (0x0004aca9) popup_char_count_window_g1

0x9b19,	// (0x0004acb2) popup_char_count_window_g2

0x9b22,	// (0x0004acbb) popup_char_count_window_g3

0x0002,

0xfd98,	// (0x00050f31) popup_char_count_window_g

0x9b2b,	// (0x0004acc4) popup_char_count_window_t1

0x278e,	// (0x00043927) popup_fep_char_preview_window_ParamLimits

0x278e,	// (0x00043927) popup_fep_char_preview_window

0xcea9,	// (0x0004e042) vkb2_top_candi_pane_ParamLimits

0xcea9,	// (0x0004e042) vkb2_top_candi_pane

0xf052,	// (0x000501eb) cell_vkb2_top_candi_pane_ParamLimits

0xf052,	// (0x000501eb) cell_vkb2_top_candi_pane

0x5849,	// (0x000469e2) bg_popup_fep_char_preview_window_ParamLimits

0x5849,	// (0x000469e2) bg_popup_fep_char_preview_window

0x2d01,	// (0x00043e9a) popup_fep_char_preview_window_t1_ParamLimits

0x2d01,	// (0x00043e9a) popup_fep_char_preview_window_t1

0x9b83,	// (0x0004ad1c) bg_popup_fep_char_preview_window_g1

0x9b8b,	// (0x0004ad24) bg_popup_fep_char_preview_window_g2

0x9b93,	// (0x0004ad2c) bg_popup_fep_char_preview_window_g3

0x9b9b,	// (0x0004ad34) bg_popup_fep_char_preview_window_g4

0x9ba3,	// (0x0004ad3c) bg_popup_fep_char_preview_window_g5

0x9bab,	// (0x0004ad44) bg_popup_fep_char_preview_window_g6

0x9bb3,	// (0x0004ad4c) bg_popup_fep_char_preview_window_g7

0x9bbb,	// (0x0004ad54) bg_popup_fep_char_preview_window_g8

0x9bc3,	// (0x0004ad5c) bg_popup_fep_char_preview_window_g9

0x0009,

0xfd9f,	// (0x00050f38) bg_popup_fep_char_preview_window_g

0x7a69,	// (0x00048c02) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7a69,	// (0x00048c02) cell_vkb2_top_candi_pane_g1

0x7d80,	// (0x00048f19) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7d80,	// (0x00048f19) cell_vkb2_top_candi_pane_g2

0x7da1,	// (0x00048f3a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7da1,	// (0x00048f3a) cell_vkb2_top_candi_pane_g3

0x2d43,	// (0x00043edc) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2d43,	// (0x00043edc) cell_vkb2_top_candi_pane_g4

0x9bcb,	// (0x0004ad64) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9bcb,	// (0x0004ad64) cell_vkb2_top_candi_pane_g5

0x8fb4,	// (0x0004a14d) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8fb4,	// (0x0004a14d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb4,	// (0x00050f4d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb4,	// (0x00050f4d) cell_vkb2_top_candi_pane_g

0x2d64,	// (0x00043efd) cell_vkb2_top_candi_pane_t1

0x1f86,	// (0x0004311f) aid_size_touch_slider_mark_ParamLimits

0x1f86,	// (0x0004311f) aid_size_touch_slider_mark

0xed64,	// (0x0004fefd) grid_graphic2_catg_pane_ParamLimits

0xed64,	// (0x0004fefd) grid_graphic2_catg_pane

0xee20,	// (0x0004ffb9) popup_grid_graphic2_window_t1_ParamLimits

0xee20,	// (0x0004ffb9) popup_grid_graphic2_window_t1

0xee36,	// (0x0004ffcf) popup_grid_graphic2_window_t2_ParamLimits

0xee36,	// (0x0004ffcf) popup_grid_graphic2_window_t2

0x0001,

0xfd6d,	// (0x00050f06) popup_grid_graphic2_window_t_ParamLimits

0xfd6d,	// (0x00050f06) popup_grid_graphic2_window_t

0x36a6,	// (0x0004483f) bg_button_pane_cp05_ParamLimits

0xefcc,	// (0x00050165) cell_graphic2_control_pane_g1_ParamLimits

0xf0b2,	// (0x0005024b) cell_graphic2_catg_pane_ParamLimits

0xf0b2,	// (0x0005024b) cell_graphic2_catg_pane

0xd2f4,	// (0x0004e48d) bg_button_pane_cp12

0xf0c4,	// (0x0005025d) cell_graphic2_catg_pane_g1

0x90ec,	// (0x0004a285) cell_tb_ext_pane_t1_ParamLimits

0x2b37,	// (0x00043cd0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2b37,	// (0x00043cd0) vkb2_top_cell_right_narrow_pane

0x2b4f,	// (0x00043ce8) vkb2_top_cell_right_wide_pane_ParamLimits

0x2b4f,	// (0x00043ce8) vkb2_top_cell_right_wide_pane

0x220f,	// (0x000433a8) bg_vkb2_func_pane_ParamLimits

0x220f,	// (0x000433a8) bg_vkb2_func_pane

0x2bc0,	// (0x00043d59) vkb2_top_cell_left_pane_g1_ParamLimits

0x220f,	// (0x000433a8) bg_vkb2_fuc_pane_cp03_ParamLimits

0x220f,	// (0x000433a8) bg_vkb2_fuc_pane_cp03

0x2c1e,	// (0x00043db7) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x51c2,	// (0x0004635b) bg_vkb2_func_pane_g1

0x51ca,	// (0x00046363) bg_vkb2_func_pane_g2

0x51da,	// (0x00046373) bg_vkb2_func_pane_g3

0x51d2,	// (0x0004636b) bg_vkb2_func_pane_g4

0x51e2,	// (0x0004637b) bg_vkb2_func_pane_g5

0x51ea,	// (0x00046383) bg_vkb2_func_pane_g6

0x51f2,	// (0x0004638b) bg_vkb2_func_pane_g7

0x51fa,	// (0x00046393) bg_vkb2_func_pane_g8

0x51ba,	// (0x00046353) bg_vkb2_func_pane_g9

0x0008,

0xfdc1,	// (0x00050f5a) bg_vkb2_func_pane_g

0x220f,	// (0x000433a8) bg_vkb2_fuc_pane_cp01_ParamLimits

0x220f,	// (0x000433a8) bg_vkb2_fuc_pane_cp01

0x2bc0,	// (0x00043d59) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2bc0,	// (0x00043d59) vkb2_top_cell_right_wide_pane_g1

0x220f,	// (0x000433a8) bg_vkb2_fuc_pane_cp02_ParamLimits

0x220f,	// (0x000433a8) bg_vkb2_fuc_pane_cp02

0x2d83,	// (0x00043f1c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2d83,	// (0x00043f1c) vkb2_top_cell_right_narrow_pane_g1

0xe5dd,	// (0x0004f776) aid_touch_area_decrease_ParamLimits

0xe5dd,	// (0x0004f776) aid_touch_area_decrease

0xe617,	// (0x0004f7b0) aid_touch_area_increase_ParamLimits

0xe617,	// (0x0004f7b0) aid_touch_area_increase

0xe63f,	// (0x0004f7d8) aid_touch_area_mute_ParamLimits

0xe63f,	// (0x0004f7d8) aid_touch_area_mute

0xe667,	// (0x0004f800) aid_touch_area_slider_ParamLimits

0xe667,	// (0x0004f800) aid_touch_area_slider

0xe6a7,	// (0x0004f840) popup_slider_window_g4_ParamLimits

0xe6a7,	// (0x0004f840) popup_slider_window_g4

0xe6cf,	// (0x0004f868) popup_slider_window_g5_ParamLimits

0xe6cf,	// (0x0004f868) popup_slider_window_g5

0xe703,	// (0x0004f89c) popup_slider_window_g6_ParamLimits

0xe703,	// (0x0004f89c) popup_slider_window_g6

0x8eca,	// (0x0004a063) popup_slider_window_t2_ParamLimits

0x8eca,	// (0x0004a063) popup_slider_window_t2

0x0001,

0xfcbb,	// (0x00050e54) popup_slider_window_t_ParamLimits

0xfcbb,	// (0x00050e54) popup_slider_window_t

0xe71f,	// (0x0004f8b8) slider_pane_ParamLimits

0xe71f,	// (0x0004f8b8) slider_pane

0x9c07,	// (0x0004ada0) slider_pane_g1_ParamLimits

0x9c07,	// (0x0004ada0) slider_pane_g1

0x9c1b,	// (0x0004adb4) slider_pane_g2_ParamLimits

0x9c1b,	// (0x0004adb4) slider_pane_g2

0x9c31,	// (0x0004adca) slider_pane_g3_ParamLimits

0x9c31,	// (0x0004adca) slider_pane_g3

0x0003,

0xfdd4,	// (0x00050f6d) slider_pane_g_ParamLimits

0xfdd4,	// (0x00050f6d) slider_pane_g

0xca7d,	// (0x0004dc16) popup_tb_float_extension_window_ParamLimits

0xca7d,	// (0x0004dc16) popup_tb_float_extension_window

0x9c5d,	// (0x0004adf6) aid_size_cell_tb_float_ext

0xd2f4,	// (0x0004e48d) bg_popup_sub_window_cp28

0x9c69,	// (0x0004ae02) grid_tb_float_ext_pane

0x9c73,	// (0x0004ae0c) cell_tb_float_ext_pane_ParamLimits

0x9c73,	// (0x0004ae0c) cell_tb_float_ext_pane

0x9c8d,	// (0x0004ae26) cell_tb_float_ext_pane_g1

0x9c96,	// (0x0004ae2f) grid_highlight_pane_cp12

0xcbb9,	// (0x0004dd52) cell_last_hwr_side_pane_ParamLimits

0xcbb9,	// (0x0004dd52) cell_last_hwr_side_pane

0x77eb,	// (0x00048984) cell_last_hwr_side_pane_g1

0x9c9f,	// (0x0004ae38) cell_last_hwr_side_pane_g2

0x0001,

0xfddd,	// (0x00050f76) cell_last_hwr_side_pane_g

0xd015,	// (0x0004e1ae) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd015,	// (0x0004e1ae) vkb2_area_bottom_space_btn_pane

0x7a69,	// (0x00048c02) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9744,	// (0x0004a8dd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2d64,	// (0x00043efd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2da3,	// (0x00043f3c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2da3,	// (0x00043f3c) vkb2_area_bottom_space_btn_pane_g1

0x2ddd,	// (0x00043f76) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2ddd,	// (0x00043f76) vkb2_area_bottom_space_btn_pane_g2

0x2e13,	// (0x00043fac) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2e13,	// (0x00043fac) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde2,	// (0x00050f7b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde2,	// (0x00050f7b) vkb2_area_bottom_space_btn_pane_g

0x22c4,	// (0x0004345d) cel_fep_hwr_func_pane_ParamLimits

0x22c4,	// (0x0004345d) cel_fep_hwr_func_pane

0xcb8e,	// (0x0004dd27) cell_hwr_side_button_pane_ParamLimits

0xcb8e,	// (0x0004dd27) cell_hwr_side_button_pane

0x9120,	// (0x0004a2b9) aid_area_touch_clock_ParamLimits

0x36a6,	// (0x0004483f) bg_uniindi_top_pane_ParamLimits

0x9132,	// (0x0004a2cb) uniindi_top_pane_g1_ParamLimits

0x9148,	// (0x0004a2e1) uniindi_top_pane_g2_ParamLimits

0x9154,	// (0x0004a2ed) uniindi_top_pane_g3_ParamLimits

0x9165,	// (0x0004a2fe) uniindi_top_pane_g4_ParamLimits

0xfcf3,	// (0x00050e8c) uniindi_top_pane_g_ParamLimits

0x9172,	// (0x0004a30b) uniindi_top_pane_t1_ParamLimits

0x36a6,	// (0x0004483f) bg_vkb2_func_pane_cp01_ParamLimits

0x36a6,	// (0x0004483f) bg_vkb2_func_pane_cp01

0x9ca8,	// (0x0004ae41) cel_fep_hwr_func_pane_g1_ParamLimits

0x9ca8,	// (0x0004ae41) cel_fep_hwr_func_pane_g1

0x36a6,	// (0x0004483f) bg_vkb2_func_pane_cp02_ParamLimits

0x36a6,	// (0x0004483f) bg_vkb2_func_pane_cp02

0x9ca8,	// (0x0004ae41) cell_hwr_side_button_pane_g1_ParamLimits

0x9ca8,	// (0x0004ae41) cell_hwr_side_button_pane_g1

0x503b,	// (0x000461d4) status_pane_g4_ParamLimits

0x503b,	// (0x000461d4) status_pane_g4

0x5055,	// (0x000461ee) status_pane_t1

0x7530,	// (0x000486c9) form2_midp_gauge_slider_cont_pane

0x7538,	// (0x000486d1) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe02e,	// (0x0004f1c7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe040,	// (0x0004f1d9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfabf,	// (0x00050c58) form2_midp_gauge_slider_pane_t_ParamLimits

0x756e,	// (0x00048707) form2_midp_slider_pane_ParamLimits

0x2756,	// (0x000438ef) aid_size_cell_func_vkb2_ParamLimits

0x2756,	// (0x000438ef) aid_size_cell_func_vkb2

0x9c49,	// (0x0004ade2) slider_pane_g4_ParamLimits

0x9c49,	// (0x0004ade2) slider_pane_g4

0xd07e,	// (0x0004e217) form2_midp_gauge_slider_pane_t2_cp01

0xd08c,	// (0x0004e225) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd08c,	// (0x0004e225) form2_midp_gauge_slider_pane_t3_cp01

0x2e88,	// (0x00044021) form2_midp_slider_pane_cp01

0xd2f4,	// (0x0004e48d) navi_smil_pane

0x9ce1,	// (0x0004ae7a) navi_smil_pane_g1

0x9ce9,	// (0x0004ae82) navi_smil_pane_t1

0x9cb6,	// (0x0004ae4f) form2_midp_slider_pane_g1

0x9cbf,	// (0x0004ae58) form2_midp_slider_pane_g2

0x9cc7,	// (0x0004ae60) form2_midp_slider_pane_g3

0x9cb6,	// (0x0004ae4f) form2_midp_slider_pane_g4

0xf0cd,	// (0x00050266) form2_midp_slider_pane_g5

0x0004,

0xfdeb,	// (0x00050f84) form2_midp_slider_pane_g

0x2e4d,	// (0x00043fe6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2e4d,	// (0x00043fe6) vkb2_area_bottom_space_btn_pane_g4

0xd74c,	// (0x0004e8e5) lc0_navi_pane_ParamLimits

0xd74c,	// (0x0004e8e5) lc0_navi_pane

0xd7b6,	// (0x0004e94f) lc0_stat_indi_pane_ParamLimits

0xd7b6,	// (0x0004e94f) lc0_stat_indi_pane

0xd7cb,	// (0x0004e964) ls0_title_pane_ParamLimits

0xd7cb,	// (0x0004e964) ls0_title_pane

0x3cb6,	// (0x00044e4f) bg_popup_sub_pane_cp14_ParamLimits

0x9107,	// (0x0004a2a0) list_uniindi_pane_ParamLimits

0x9113,	// (0x0004a2ac) uniindi_top_pane_ParamLimits

0x91af,	// (0x0004a348) list_single_uniindi_pane_g1_ParamLimits

0x91c2,	// (0x0004a35b) list_single_uniindi_pane_t1_ParamLimits

0xd0a9,	// (0x0004e242) lc0_stat_clock_pane_ParamLimits

0xd0a9,	// (0x0004e242) lc0_stat_clock_pane

0xf0d8,	// (0x00050271) lc0_stat_indi_pane_g1_ParamLimits

0xf0d8,	// (0x00050271) lc0_stat_indi_pane_g1

0xf0e5,	// (0x0005027e) lc0_stat_indi_pane_g2_ParamLimits

0xf0e5,	// (0x0005027e) lc0_stat_indi_pane_g2

0x0001,

0xfdf6,	// (0x00050f8f) lc0_stat_indi_pane_g_ParamLimits

0xfdf6,	// (0x00050f8f) lc0_stat_indi_pane_g

0xd0b6,	// (0x0004e24f) lc0_uni_indicator_pane_ParamLimits

0xd0b6,	// (0x0004e24f) lc0_uni_indicator_pane

0xf0f2,	// (0x0005028b) ls0_title_pane_g1_ParamLimits

0xf0f2,	// (0x0005028b) ls0_title_pane_g1

0xf106,	// (0x0005029f) ls0_title_pane_t1_ParamLimits

0xf106,	// (0x0005029f) ls0_title_pane_t1

0xd0c3,	// (0x0004e25c) lc0_uni_indicator_pane_g1_ParamLimits

0xd0c3,	// (0x0004e25c) lc0_uni_indicator_pane_g1

0x9d5b,	// (0x0004aef4) lc0_stat_clock_pane_t1

0xd2f4,	// (0x0004e48d) main_ai5_pane

0x9d69,	// (0x0004af02) ai5_sk_pane_ParamLimits

0x9d69,	// (0x0004af02) ai5_sk_pane

0xf134,	// (0x000502cd) cell_ai5_widget_pane_ParamLimits

0xf134,	// (0x000502cd) cell_ai5_widget_pane

0x9e3f,	// (0x0004afd8) aid_size_cell_widget_grid

0x9e4d,	// (0x0004afe6) bg_ai5_widget_pane_ParamLimits

0x9e4d,	// (0x0004afe6) bg_ai5_widget_pane

0x9ec9,	// (0x0004b062) cell_ai5_widget_pane_g2

0x9edd,	// (0x0004b076) cell_ai5_widget_pane_g3

0x9ef7,	// (0x0004b090) cell_ai5_widget_pane_g4

0x9f07,	// (0x0004b0a0) cell_ai5_widget_pane_g5

0x9f17,	// (0x0004b0b0) cell_ai5_widget_pane_g6

0x9f23,	// (0x0004b0bc) cell_ai5_widget_pane_g7

0x9f8f,	// (0x0004b128) cell_ai5_widget_pane_t1_ParamLimits

0x9f8f,	// (0x0004b128) cell_ai5_widget_pane_t1

0x9fac,	// (0x0004b145) cell_ai5_widget_pane_t2_ParamLimits

0x9fac,	// (0x0004b145) cell_ai5_widget_pane_t2

0x9fc4,	// (0x0004b15d) cell_ai5_widget_pane_t3_ParamLimits

0x9fc4,	// (0x0004b15d) cell_ai5_widget_pane_t3

0x9fdc,	// (0x0004b175) cell_ai5_widget_pane_t4_ParamLimits

0x9fdc,	// (0x0004b175) cell_ai5_widget_pane_t4

0xa002,	// (0x0004b19b) cell_ai5_widget_pane_t5_ParamLimits

0xa002,	// (0x0004b19b) cell_ai5_widget_pane_t5

0xa021,	// (0x0004b1ba) cell_ai5_widget_pane_t6_ParamLimits

0xa021,	// (0x0004b1ba) cell_ai5_widget_pane_t6

0xa033,	// (0x0004b1cc) cell_ai5_widget_pane_t7_ParamLimits

0xa033,	// (0x0004b1cc) cell_ai5_widget_pane_t7

0xa052,	// (0x0004b1eb) cell_ai5_widget_pane_t8_ParamLimits

0xa052,	// (0x0004b1eb) cell_ai5_widget_pane_t8

0x000b,

0xfe16,	// (0x00050faf) cell_ai5_widget_pane_t_ParamLimits

0xfe16,	// (0x00050faf) cell_ai5_widget_pane_t

0xa0d6,	// (0x0004b26f) grid_ai5_widget_pane

0x3cb6,	// (0x00044e4f) highlight_cell_ai5_widget_pane_ParamLimits

0x3cb6,	// (0x00044e4f) highlight_cell_ai5_widget_pane

0xf1a0,	// (0x00050339) ai5_sk_left_pane

0xf1aa,	// (0x00050343) ai5_sk_middle_pane

0xf1b4,	// (0x0005034d) ai5_sk_right_pane

0xa102,	// (0x0004b29b) bg_ai5_widget_pane_g1_ParamLimits

0xa102,	// (0x0004b29b) bg_ai5_widget_pane_g1

0xa10e,	// (0x0004b2a7) bg_ai5_widget_pane_g2_ParamLimits

0xa10e,	// (0x0004b2a7) bg_ai5_widget_pane_g2

0xa11a,	// (0x0004b2b3) bg_ai5_widget_pane_g3_ParamLimits

0xa11a,	// (0x0004b2b3) bg_ai5_widget_pane_g3

0xa126,	// (0x0004b2bf) bg_ai5_widget_pane_g4_ParamLimits

0xa126,	// (0x0004b2bf) bg_ai5_widget_pane_g4

0xa132,	// (0x0004b2cb) bg_ai5_widget_pane_g5_ParamLimits

0xa132,	// (0x0004b2cb) bg_ai5_widget_pane_g5

0xa13e,	// (0x0004b2d7) bg_ai5_widget_pane_g6_ParamLimits

0xa13e,	// (0x0004b2d7) bg_ai5_widget_pane_g6

0xa14a,	// (0x0004b2e3) bg_ai5_widget_pane_g7_ParamLimits

0xa14a,	// (0x0004b2e3) bg_ai5_widget_pane_g7

0xa156,	// (0x0004b2ef) bg_ai5_widget_pane_g8_ParamLimits

0xa156,	// (0x0004b2ef) bg_ai5_widget_pane_g8

0xa162,	// (0x0004b2fb) bg_ai5_widget_pane_g9_ParamLimits

0xa162,	// (0x0004b2fb) bg_ai5_widget_pane_g9

0x0008,

0xfe2f,	// (0x00050fc8) bg_ai5_widget_pane_g_ParamLimits

0xfe2f,	// (0x00050fc8) bg_ai5_widget_pane_g

0xa194,	// (0x0004b32d) cell_shortcut_ai5_widget_pane_ParamLimits

0xa194,	// (0x0004b32d) cell_shortcut_ai5_widget_pane

0x496c,	// (0x00045b05) bg_cell_shortcut_ai5_widget_pane

0xa1a5,	// (0x0004b33e) cell_grid_ai5_widget_pane_g1

0x496c,	// (0x00045b05) highlight_cell_shortcut_ai5_widget_pane

0x51ca,	// (0x00046363) ai5_sk_left_pane_g1

0xa1ae,	// (0x0004b347) ai5_sk_left_pane_g2

0xa1b6,	// (0x0004b34f) ai5_sk_left_pane_g3

0xa1be,	// (0x0004b357) ai5_sk_left_pane_g4

0x0003,

0xfe42,	// (0x00050fdb) ai5_sk_left_pane_g

0xa1c6,	// (0x0004b35f) ai5_sk_left_pane_t1

0x51c2,	// (0x0004635b) ai5_sk_right_pane_g1

0xa1d4,	// (0x0004b36d) ai5_sk_right_pane_g2

0xa1dc,	// (0x0004b375) ai5_sk_right_pane_g3

0xa1e4,	// (0x0004b37d) ai5_sk_right_pane_g4

0x0003,

0xfe4b,	// (0x00050fe4) ai5_sk_right_pane_g

0xa1ec,	// (0x0004b385) ai5_sk_right_pane_t1

0x51c2,	// (0x0004635b) ai5_sk_middle_pane_g1

0x51ca,	// (0x00046363) ai5_sk_middle_pane_g2

0x51e2,	// (0x0004637b) ai5_sk_middle_pane_g3

0xa1dc,	// (0x0004b375) ai5_sk_middle_pane_g4

0xa1b6,	// (0x0004b34f) ai5_sk_middle_pane_g5

0xa1fa,	// (0x0004b393) ai5_sk_middle_pane_g6

0xf1be,	// (0x00050357) ai5_sk_middle_pane_g7

0x0006,

0xfe54,	// (0x00050fed) ai5_sk_middle_pane_g

0xd638,	// (0x0004e7d1) aid_touch_area_size_lc0_ParamLimits

0xd638,	// (0x0004e7d1) aid_touch_area_size_lc0

0x244f,	// (0x000435e8) cell_hwr_candidate_pane_t1_ParamLimits

0x4d0c,	// (0x00045ea5) aid_touch_navi_pane

0xd8c4,	// (0x0004ea5d) status_dt_navi_pane_ParamLimits

0xd8c4,	// (0x0004ea5d) status_dt_navi_pane

0xd8dc,	// (0x0004ea75) status_dt_sta_pane_ParamLimits

0xd8dc,	// (0x0004ea75) status_dt_sta_pane

0xf1c6,	// (0x0005035f) dt_sta_controll_pane

0xf1d3,	// (0x0005036c) dt_sta_indi_pane

0xf1e0,	// (0x00050379) dt_sta_title_pane

0x36a6,	// (0x0004483f) bg_dt_sta_indi_pane_ParamLimits

0x36a6,	// (0x0004483f) bg_dt_sta_indi_pane

0xf1f2,	// (0x0005038b) dt_sta_battery_pane

0xf1fa,	// (0x00050393) dt_sta_indi_pane_g1

0xa24c,	// (0x0004b3e5) dt_sta_indi_pane_g2

0xa255,	// (0x0004b3ee) dt_sta_indi_pane_g3

0x0002,

0xfe63,	// (0x00050ffc) dt_sta_indi_pane_g

0xa25e,	// (0x0004b3f7) dt_sta_signal_pane

0x3cb6,	// (0x00044e4f) bg_dt_sta_title_pane_ParamLimits

0x3cb6,	// (0x00044e4f) bg_dt_sta_title_pane

0xa267,	// (0x0004b400) dt_sta_title_pane_g1

0xa26f,	// (0x0004b408) dt_sta_title_pane_t1_ParamLimits

0xa26f,	// (0x0004b408) dt_sta_title_pane_t1

0xd2f4,	// (0x0004e48d) bg_dt_sta_control_pane

0xf203,	// (0x0005039c) dt_sta_controll_pane_g1

0xa28d,	// (0x0004b426) bg_dt_sta_title_pane_g1

0xa296,	// (0x0004b42f) bg_dt_sta_title_pane_g2

0xa29f,	// (0x0004b438) bg_dt_sta_title_pane_g3

0x0002,

0xfe6a,	// (0x00051003) bg_dt_sta_title_pane_g

0x77eb,	// (0x00048984) bg_dt_sta_indi_pane_g1

0xa2a8,	// (0x0004b441) dt_sta_signal_pane_g1

0xa2b0,	// (0x0004b449) dt_sta_signal_pane_g2

0x0001,

0xfe71,	// (0x0005100a) dt_sta_signal_pane_g

0xa2b8,	// (0x0004b451) dt_sta_battery_pane_g1

0xa2c1,	// (0x0004b45a) dt_sta_battery_pane_t1

0x77eb,	// (0x00048984) bg_dt_sta_control_pane_g1

0x446a,	// (0x00045603) fep_china_uni_eep_pane

0x4472,	// (0x0004560b) fep_china_uni_entry_pane_ParamLimits

0x4482,	// (0x0004561b) popup_fep_china_uni_window_g1_ParamLimits

0x4492,	// (0x0004562b) popup_fep_china_uni_window_g2_ParamLimits

0x4492,	// (0x0004562b) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x00050896) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x00050896) popup_fep_china_uni_window_g

0xa2d0,	// (0x0004b469) fep_china_uni_eep_pane_g1

0xa2d8,	// (0x0004b471) fep_china_uni_eep_pane_t1

0x9cd8,	// (0x0004ae71) aid_touch_area_size_smil_player

0x4e62,	// (0x00045ffb) lc0_clock_pane

0x5049,	// (0x000461e2) status_pane_g5_ParamLimits

0x5049,	// (0x000461e2) status_pane_g5

0xc5ff,	// (0x0004d798) popup_keymap_window

0x5007,	// (0x000461a0) status_icon_pane

0x9edd,	// (0x0004b076) cell_ai5_widget_pane_g3_ParamLimits

0x9ef7,	// (0x0004b090) cell_ai5_widget_pane_g4_ParamLimits

0x9f07,	// (0x0004b0a0) cell_ai5_widget_pane_g5_ParamLimits

0x9f2f,	// (0x0004b0c8) cell_ai5_widget_pane_g8_ParamLimits

0x9f2f,	// (0x0004b0c8) cell_ai5_widget_pane_g8

0x9f43,	// (0x0004b0dc) cell_ai5_widget_pane_g9_ParamLimits

0x9f43,	// (0x0004b0dc) cell_ai5_widget_pane_g9

0x9f57,	// (0x0004b0f0) cell_ai5_widget_pane_g10_ParamLimits

0x9f57,	// (0x0004b0f0) cell_ai5_widget_pane_g10

0xa2e7,	// (0x0004b480) status_icon_pane_g1

0xd2f4,	// (0x0004e48d) bg_popup_sub_pane_cp13

0xa2ef,	// (0x0004b488) popup_keymap_window_t1

0xd5ce,	// (0x0004e767) control_pane_g6_ParamLimits

0xd5ce,	// (0x0004e767) control_pane_g6

0xd5db,	// (0x0004e774) control_pane_g7_ParamLimits

0xd5db,	// (0x0004e774) control_pane_g7

0xd5e8,	// (0x0004e781) control_pane_g8_ParamLimits

0xd5e8,	// (0x0004e781) control_pane_g8

0xf1c6,	// (0x0005035f) dt_sta_controll_pane_ParamLimits

0xf1d3,	// (0x0005036c) dt_sta_indi_pane_ParamLimits

0xf1e0,	// (0x00050379) dt_sta_title_pane_ParamLimits

0x3be2,	// (0x00044d7b) aid_size_touch_scroll_bar_cale

0x0e04,	// (0x00041f9d) popup_discreet_window_ParamLimits

0x0e04,	// (0x00041f9d) popup_discreet_window

0xbe3a,	// (0x0004cfd3) popup_sk_window

0x5849,	// (0x000469e2) bg_popup_sub_pane_cp28_ParamLimits

0x5849,	// (0x000469e2) bg_popup_sub_pane_cp28

0xa2fd,	// (0x0004b496) popup_discreet_window_g1_ParamLimits

0xa2fd,	// (0x0004b496) popup_discreet_window_g1

0xa31d,	// (0x0004b4b6) popup_discreet_window_t1_ParamLimits

0xa31d,	// (0x0004b4b6) popup_discreet_window_t1

0xa33b,	// (0x0004b4d4) popup_discreet_window_t2_ParamLimits

0xa33b,	// (0x0004b4d4) popup_discreet_window_t2

0x0002,

0xfe76,	// (0x0005100f) popup_discreet_window_t_ParamLimits

0xfe76,	// (0x0005100f) popup_discreet_window_t

0x2ebf,	// (0x00044058) popup_sk_window_g1

0x2ec9,	// (0x00044062) popup_sk_window_g2

0x0001,

0xfe7d,	// (0x00051016) popup_sk_window_g

0x2ed1,	// (0x0004406a) popup_sk_window_t1

0x2edf,	// (0x00044078) popup_sk_window_t1_copy1

0x9ec9,	// (0x0004b062) cell_ai5_widget_pane_g2_ParamLimits

0xa064,	// (0x0004b1fd) cell_ai5_widget_pane_t9_ParamLimits

0xa064,	// (0x0004b1fd) cell_ai5_widget_pane_t9

0xd2f4,	// (0x0004e48d) main_fep_fshwr2_pane

0xd0ea,	// (0x0004e283) aid_fshwr2_btn_pane

0xd0fa,	// (0x0004e293) aid_fshwr2_syb_pane

0xd10e,	// (0x0004e2a7) aid_fshwr2_txt_pane

0xd11e,	// (0x0004e2b7) fshwr2_func_candi_pane

0xd13e,	// (0x0004e2d7) fshwr2_hwr_syb_pane

0xd160,	// (0x0004e2f9) fshwr2_icf_pane

0xd2f4,	// (0x0004e48d) fshwr2_icf_bg_pane

0xd190,	// (0x0004e329) fshwr2_icf_pane_t1_ParamLimits

0xd190,	// (0x0004e329) fshwr2_icf_pane_t1

0x433f,	// (0x000454d8) fshwr2_func_candi_pane_g1

0xf20c,	// (0x000503a5) fshwr2_func_candi_row_pane_ParamLimits

0xf20c,	// (0x000503a5) fshwr2_func_candi_row_pane

0xd1a9,	// (0x0004e342) cell_fshwr2_syb_pane_ParamLimits

0xd1a9,	// (0x0004e342) cell_fshwr2_syb_pane

0x9ca8,	// (0x0004ae41) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9ca8,	// (0x0004ae41) fshwr2_hwr_syb_pane_g1

0xd2f4,	// (0x0004e48d) bg_popup_call_pane_cp01

0xd1cf,	// (0x0004e368) fshwr2_func_candi_cell_pane_ParamLimits

0xd1cf,	// (0x0004e368) fshwr2_func_candi_cell_pane

0x562a,	// (0x000467c3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x562a,	// (0x000467c3) fshwr2_func_candi_cell_bg_pane

0xd21a,	// (0x0004e3b3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd21a,	// (0x0004e3b3) fshwr2_func_candi_cell_pane_g1

0xd251,	// (0x0004e3ea) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd251,	// (0x0004e3ea) fshwr2_func_candi_cell_pane_t1

0xd2f4,	// (0x0004e48d) bg_button_pane_cp08

0x4c90,	// (0x00045e29) cell_fshwr2_syb_bg_pane

0xd26c,	// (0x0004e405) cell_fshwr2_syb_bg_pane_g1

0xd27f,	// (0x0004e418) cell_fshwr2_syb_bg_pane_t1

0x3cb6,	// (0x00044e4f) main_tmo_pane

0xdb9a,	// (0x0004ed33) uni_indicator_pane_g1_ParamLimits

0xdbb0,	// (0x0004ed49) uni_indicator_pane_g2_ParamLimits

0xdbc6,	// (0x0004ed5f) uni_indicator_pane_g3_ParamLimits

0x6397,	// (0x00047530) uni_indicator_pane_g4_ParamLimits

0x6397,	// (0x00047530) uni_indicator_pane_g4

0x63ab,	// (0x00047544) uni_indicator_pane_g5_ParamLimits

0x63ab,	// (0x00047544) uni_indicator_pane_g5

0x63ab,	// (0x00047544) uni_indicator_pane_g6_ParamLimits

0x63ab,	// (0x00047544) uni_indicator_pane_g6

0xf8fc,	// (0x00050a95) uni_indicator_pane_g_ParamLimits

0xe5b9,	// (0x0004f752) popup_tmo_note_window_ParamLimits

0xe5b9,	// (0x0004f752) popup_tmo_note_window

0x3cb6,	// (0x00044e4f) fshwr2_bg_pane

0xd242,	// (0x0004e3db) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd242,	// (0x0004e3db) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe82,	// (0x0005101b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe82,	// (0x0005101b) fshwr2_func_candi_cell_pane_g

0x77eb,	// (0x00048984) bg_popup_window_pane_cp01

0x307b,	// (0x00044214) bg_popup_window_pane_g1_cp01

0xa3b4,	// (0x0004b54d) bg_popup_window_pane_cp22_ParamLimits

0xa3b4,	// (0x0004b54d) bg_popup_window_pane_cp22

0xa3c2,	// (0x0004b55b) listscroll_tmo_link_pane_ParamLimits

0xa3c2,	// (0x0004b55b) listscroll_tmo_link_pane

0xa402,	// (0x0004b59b) popup_tmo_note_window_g1_ParamLimits

0xa402,	// (0x0004b59b) popup_tmo_note_window_g1

0xa40f,	// (0x0004b5a8) tmo_note_info_pane_ParamLimits

0xa40f,	// (0x0004b5a8) tmo_note_info_pane

0xf22f,	// (0x000503c8) list_tmo_note_info_pane_g1_ParamLimits

0xf22f,	// (0x000503c8) list_tmo_note_info_pane_g1

0xa440,	// (0x0004b5d9) list_tmo_note_info_pane_g2_ParamLimits

0xa440,	// (0x0004b5d9) list_tmo_note_info_pane_g2

0x0001,

0xfe87,	// (0x00051020) list_tmo_note_info_pane_g_ParamLimits

0xfe87,	// (0x00051020) list_tmo_note_info_pane_g

0xa45c,	// (0x0004b5f5) list_tmo_note_info_text_pane_ParamLimits

0xa45c,	// (0x0004b5f5) list_tmo_note_info_text_pane

0xa4dd,	// (0x0004b676) list_tmo_link_pane

0xa4ea,	// (0x0004b683) scroll_pane_cp20

0xa4f7,	// (0x0004b690) list_single_tmo_link_pane_ParamLimits

0xa4f7,	// (0x0004b690) list_single_tmo_link_pane

0xa507,	// (0x0004b6a0) list_single_tmo_link_pane_t1

0xa515,	// (0x0004b6ae) list_tmo_note_info_text_pane_t1_ParamLimits

0xa515,	// (0x0004b6ae) list_tmo_note_info_text_pane_t1

0xd2fe,	// (0x0004e497) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd2fe,	// (0x0004e497) aid_size_touch_scroll_bar_cp01

0xbaba,	// (0x0004cc53) aid_size_touch_slider_marker

0xbe2a,	// (0x0004cfc3) popup_settings_window_ParamLimits

0xbe2a,	// (0x0004cfc3) popup_settings_window

0x043b,	// (0x000415d4) popup_candi_list_indi_window

0x4d0c,	// (0x00045ea5) aid_touch_navi_pane_ParamLimits

0x26af,	// (0x00043848) rs_clock_indi_pane

0x26b8,	// (0x00043851) sctrl_sk_bottom_pane_ParamLimits

0x26c9,	// (0x00043862) sctrl_sk_top_pane_ParamLimits

0x27a8,	// (0x00043941) popup_fep_tooltip_window

0x9e3f,	// (0x0004afd8) aid_size_cell_widget_grid_ParamLimits

0x9eb4,	// (0x0004b04d) cell_ai5_widget_pane_g1_ParamLimits

0x9eb4,	// (0x0004b04d) cell_ai5_widget_pane_g1

0x9f17,	// (0x0004b0b0) cell_ai5_widget_pane_g6_ParamLimits

0x9f23,	// (0x0004b0bc) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdfb,	// (0x00050f94) cell_ai5_widget_pane_g_ParamLimits

0xfdfb,	// (0x00050f94) cell_ai5_widget_pane_g

0xa093,	// (0x0004b22c) cell_ai5_widget_pane_t10_ParamLimits

0xa093,	// (0x0004b22c) cell_ai5_widget_pane_t10

0xa0d6,	// (0x0004b26f) grid_ai5_widget_pane_ParamLimits

0xa16e,	// (0x0004b307) cell_contacts_ai5_widget_pane_ParamLimits

0xa16e,	// (0x0004b307) cell_contacts_ai5_widget_pane

0xa350,	// (0x0004b4e9) popup_discreet_window_t3_ParamLimits

0xa350,	// (0x0004b4e9) popup_discreet_window_t3

0xd17c,	// (0x0004e315) popup_fshwr2_char_preview_window_ParamLimits

0xd17c,	// (0x0004e315) popup_fshwr2_char_preview_window

0xf246,	// (0x000503df) tmo_note_info_pane_t1

0xf25b,	// (0x000503f4) tmo_note_info_pane_t2

0xf272,	// (0x0005040b) tmo_note_info_pane_t3

0xa4b9,	// (0x0004b652) tmo_note_info_pane_t4

0xa4cb,	// (0x0004b664) tmo_note_info_pane_t5

0x0004,

0xfe8c,	// (0x00051025) tmo_note_info_pane_t

0xa4dd,	// (0x0004b676) list_tmo_link_pane_ParamLimits

0xa4ea,	// (0x0004b683) scroll_pane_cp20_ParamLimits

0xd2f4,	// (0x0004e48d) bg_popup_fep_char_preview_window_cp01

0xf287,	// (0x00050420) popup_fshwr2_char_preview_window_t1

0xa53c,	// (0x0004b6d5) popup_candi_list_indi_window_g1

0xa545,	// (0x0004b6de) bg_cell_contacts_ai5_widget_pane

0xa551,	// (0x0004b6ea) cell_contacts_ai5_widget_pane_g1

0x7ecb,	// (0x00049064) cell_contacts_ai5_widget_pane_g2

0xa566,	// (0x0004b6ff) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe97,	// (0x00051030) cell_contacts_ai5_widget_pane_g

0xa572,	// (0x0004b70b) cell_contacts_ai5_widget_pane_t1

0x3cb6,	// (0x00044e4f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa5e9,	// (0x0004b782) settings_container_pane

0x496c,	// (0x00045b05) listscroll_set_pane_copy1

0x6ed5,	// (0x0004806e) scroll_pane_cp121_copy1

0x55e6,	// (0x0004677f) set_content_pane_copy1

0xa5f5,	// (0x0004b78e) aid_height_set_list_copy1_ParamLimits

0xa5f5,	// (0x0004b78e) aid_height_set_list_copy1

0x65a3,	// (0x0004773c) aid_size_parent_copy1_ParamLimits

0x65a3,	// (0x0004773c) aid_size_parent_copy1

0xa601,	// (0x0004b79a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa601,	// (0x0004b79a) button_value_adjust_pane_cp6_copy1

0x4c90,	// (0x00045e29) list_highlight_pane_cp2_copy1_ParamLimits

0x4c90,	// (0x00045e29) list_highlight_pane_cp2_copy1

0xa615,	// (0x0004b7ae) list_set_pane_copy1_ParamLimits

0xa615,	// (0x0004b7ae) list_set_pane_copy1

0xa584,	// (0x0004b71d) main_pane_set_t1_copy1_ParamLimits

0xa584,	// (0x0004b71d) main_pane_set_t1_copy1

0xa5be,	// (0x0004b757) main_pane_set_t2_copy1_ParamLimits

0xa5be,	// (0x0004b757) main_pane_set_t2_copy1

0xa6c2,	// (0x0004b85b) main_pane_set_t3_copy1

0xa6d0,	// (0x0004b869) main_pane_set_t4_copy1

0xa5dd,	// (0x0004b776) set_content_pane_g1_copy1_ParamLimits

0xa5dd,	// (0x0004b776) set_content_pane_g1_copy1

0xa6de,	// (0x0004b877) setting_code_pane_copy1

0xa6e6,	// (0x0004b87f) setting_slider_graphic_pane_copy1

0xa6e6,	// (0x0004b87f) setting_slider_pane_copy1

0xa6ee,	// (0x0004b887) setting_text_pane_copy1

0xa6ee,	// (0x0004b887) setting_volume_pane_copy1

0xa6de,	// (0x0004b877) settings_code_pane_cp2_copy1

0xa6f6,	// (0x0004b88f) settings_code_pane_cp_copy1_ParamLimits

0xa6f6,	// (0x0004b88f) settings_code_pane_cp_copy1

0x3084,	// (0x0004421d) volume_set_pane_copy1

0xa70a,	// (0x0004b8a3) volume_set_pane_g10_copy1

0xa712,	// (0x0004b8ab) volume_set_pane_g1_copy1

0xa71a,	// (0x0004b8b3) volume_set_pane_g2_copy1

0xa722,	// (0x0004b8bb) volume_set_pane_g3_copy1

0xa72a,	// (0x0004b8c3) volume_set_pane_g4_copy1

0xa732,	// (0x0004b8cb) volume_set_pane_g5_copy1

0xa73a,	// (0x0004b8d3) volume_set_pane_g6_copy1

0xa742,	// (0x0004b8db) volume_set_pane_g7_copy1

0xa74a,	// (0x0004b8e3) volume_set_pane_g8_copy1

0xa752,	// (0x0004b8eb) volume_set_pane_g9_copy1

0x341d,	// (0x000445b6) bg_set_opt_pane_cp_copy1_ParamLimits

0x341d,	// (0x000445b6) bg_set_opt_pane_cp_copy1

0x308c,	// (0x00044225) setting_slider_pane_t1_copy1_ParamLimits

0x308c,	// (0x00044225) setting_slider_pane_t1_copy1

0x30ab,	// (0x00044244) setting_slider_pane_t2_copy1_ParamLimits

0x30ab,	// (0x00044244) setting_slider_pane_t2_copy1

0x30c5,	// (0x0004425e) setting_slider_pane_t3_copy1_ParamLimits

0x30c5,	// (0x0004425e) setting_slider_pane_t3_copy1

0x30dd,	// (0x00044276) slider_set_pane_copy1_ParamLimits

0x30dd,	// (0x00044276) slider_set_pane_copy1

0x3d02,	// (0x00044e9b) set_opt_bg_pane_g1_copy2

0x3d0a,	// (0x00044ea3) set_opt_bg_pane_g2_copy2

0xa75a,	// (0x0004b8f3) set_opt_bg_pane_g3_copy2

0x3d1a,	// (0x00044eb3) set_opt_bg_pane_g4_copy2

0x3d22,	// (0x00044ebb) set_opt_bg_pane_g5_copy2

0x3d2a,	// (0x00044ec3) set_opt_bg_pane_g6_copy2

0xa764,	// (0x0004b8fd) set_opt_bg_pane_g7_copy2

0xa76c,	// (0x0004b905) set_opt_bg_pane_g8_copy2

0xa776,	// (0x0004b90f) set_opt_bg_pane_g9_copy2

0x30f3,	// (0x0004428c) aid_size_touch_slider_mark_copy1_ParamLimits

0x30f3,	// (0x0004428c) aid_size_touch_slider_mark_copy1

0xa780,	// (0x0004b919) slider_set_pane_g1_copy1

0x3107,	// (0x000442a0) slider_set_pane_g2_copy1

0x1fa6,	// (0x0004313f) slider_set_pane_g3_copy1_ParamLimits

0x1fa6,	// (0x0004313f) slider_set_pane_g3_copy1

0x1fba,	// (0x00043153) slider_set_pane_g4_copy1_ParamLimits

0x1fba,	// (0x00043153) slider_set_pane_g4_copy1

0x1fd2,	// (0x0004316b) slider_set_pane_g5_copy1_ParamLimits

0x1fd2,	// (0x0004316b) slider_set_pane_g5_copy1

0x1fa6,	// (0x0004313f) slider_set_pane_g6_copy1_ParamLimits

0x1fa6,	// (0x0004313f) slider_set_pane_g6_copy1

0x310f,	// (0x000442a8) slider_set_pane_g7_copy1_ParamLimits

0x310f,	// (0x000442a8) slider_set_pane_g7_copy1

0x333d,	// (0x000444d6) bg_set_opt_pane_cp2_copy1

0xa789,	// (0x0004b922) setting_slider_graphic_pane_g1_copy1

0xa792,	// (0x0004b92b) setting_slider_graphic_pane_t1_copy1

0xa7a2,	// (0x0004b93b) setting_slider_graphic_pane_t2_copy1

0xa7b2,	// (0x0004b94b) slider_set_pane_cp_copy1

0xa7c2,	// (0x0004b95b) input_focus_pane_cp1_copy1

0xa7cb,	// (0x0004b964) list_set_text_pane_copy1

0xa7d3,	// (0x0004b96c) setting_text_pane_g1_copy1

0x0b7b,	// (0x00041d14) set_text_pane_t1_copy1

0xa7c2,	// (0x0004b95b) input_focus_pane_cp2_copy1

0xa7d3,	// (0x0004b96c) setting_code_pane_g1_copy1

0xa7dc,	// (0x0004b975) setting_code_pane_t1_copy1

0x6cfd,	// (0x00047e96) list_set_graphic_pane_copy1

0x333d,	// (0x000444d6) bg_set_opt_pane_cp4_copy1

0x4675,	// (0x0004580e) list_set_graphic_pane_g1_copy1_ParamLimits

0x4675,	// (0x0004580e) list_set_graphic_pane_g1_copy1

0xa7ea,	// (0x0004b983) list_set_graphic_pane_g2_copy1

0x468d,	// (0x00045826) list_set_graphic_pane_t1_copy1_ParamLimits

0x468d,	// (0x00045826) list_set_graphic_pane_t1_copy1

0x77eb,	// (0x00048984) rs_clock_indi_pane_g1

0xa7f2,	// (0x0004b98b) rs_clock_indi_pane_t1

0xa800,	// (0x0004b999) rs_indi_pane

0xa808,	// (0x0004b9a1) rs_indi_pane_g1

0xa811,	// (0x0004b9aa) rs_indi_pane_g2

0xa81a,	// (0x0004b9b3) rs_indi_pane_g3

0x0002,

0xfe9e,	// (0x00051037) rs_indi_pane_g

0x496c,	// (0x00045b05) bg_popup_preview_window_pane_cp03

0xa823,	// (0x0004b9bc) popup_fep_tooltip_window_t1

0x848b,	// (0x00049624) popup_note2_window_g2_ParamLimits

0x848b,	// (0x00049624) popup_note2_window_g2

0x0001,

0xfc2b,	// (0x00050dc4) popup_note2_window_g_ParamLimits

0xfc2b,	// (0x00050dc4) popup_note2_window_g

0x8986,	// (0x00049b1f) bg_popup_sub_pane_cp11_ParamLimits

0x8993,	// (0x00049b2c) cell_ai3_links_pane_g1_ParamLimits

0x89aa,	// (0x00049b43) cell_ai3_links_pane_t1

0x0b7b,	// (0x00041d14) set_text_pane_t1_copy1_ParamLimits

0x4880,	// (0x00045a19) cell_graphic_popup_pane_cp2_ParamLimits

0x4880,	// (0x00045a19) cell_graphic_popup_pane_cp2

0xa831,	// (0x0004b9ca) cell_graphic_popup_pane_g1_cp2

0x39f5,	// (0x00044b8e) cell_graphic_popup_pane_g2_cp2

0xa839,	// (0x0004b9d2) cell_graphic_popup_pane_g3_cp2

0xa841,	// (0x0004b9da) cell_graphic_popup_pane_t2_cp2

0x3a06,	// (0x00044b9f) grid_highlight_pane_cp3_cp2

0x405a,	// (0x000451f3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3cb6,	// (0x00044e4f) main_tmo_pane_ParamLimits

0xe5ad,	// (0x0004f746) popup_tmo_big_image_note_window

0x9ea3,	// (0x0004b03c) cell_ai5_widget_list_pane

0x9eab,	// (0x0004b044) cell_ai5_widget_lrg_icon_pane

0xf246,	// (0x000503df) tmo_note_info_pane_t1_ParamLimits

0xf25b,	// (0x000503f4) tmo_note_info_pane_t2_ParamLimits

0xf272,	// (0x0005040b) tmo_note_info_pane_t3_ParamLimits

0xa4b9,	// (0x0004b652) tmo_note_info_pane_t4_ParamLimits

0xa4cb,	// (0x0004b664) tmo_note_info_pane_t5_ParamLimits

0xfe8c,	// (0x00051025) tmo_note_info_pane_t_ParamLimits

0xa5e9,	// (0x0004b782) settings_container_pane_ParamLimits

0xa7ba,	// (0x0004b953) indicator_popup_pane_cp5

0xa7ba,	// (0x0004b953) indicator_popup_pane_cp6

0x6cfd,	// (0x00047e96) list_set_graphic_pane_copy1_ParamLimits

0xd2f4,	// (0x0004e48d) bg_popup_window_pane_cp23

0xa84f,	// (0x0004b9e8) popup_tmo_big_image_note_window_g1

0xa859,	// (0x0004b9f2) popup_tmo_big_image_note_window_t1

0xa869,	// (0x0004ba02) popup_tmo_big_image_note_window_t2

0xa879,	// (0x0004ba12) popup_tmo_big_image_note_window_t3

0x0002,

0xfea5,	// (0x0005103e) popup_tmo_big_image_note_window_t

0x77eb,	// (0x00048984) cell_ai5_widget_lrg_icon_pane_g1

0xa889,	// (0x0004ba22) cell_ai5_widget_lrg_icon_pane_t1

0xa897,	// (0x0004ba30) cell_ai5_widget_list_row_pane_ParamLimits

0xa897,	// (0x0004ba30) cell_ai5_widget_list_row_pane

0xa8ae,	// (0x0004ba47) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa8ae,	// (0x0004ba47) cell_ai5_widget_list_row_pane_g1

0xa8bb,	// (0x0004ba54) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa8bb,	// (0x0004ba54) cell_ai5_widget_list_row_pane_t1

0xa8ec,	// (0x0004ba85) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa8ec,	// (0x0004ba85) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeac,	// (0x00051045) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeac,	// (0x00051045) cell_ai5_widget_list_row_pane_t

0xd2f4,	// (0x0004e48d) main_fep_vtchi_ss_pane

0xa93c,	// (0x0004bad5) popup_fep_char_pre_window

0xa944,	// (0x0004badd) popup_fep_ituss_window

0xf2bf,	// (0x00050458) popup_fep_vkbss_window

0x4c90,	// (0x00045e29) grid_vkbss_keypad_pane_ParamLimits

0x4c90,	// (0x00045e29) grid_vkbss_keypad_pane

0xa9b0,	// (0x0004bb49) ituss_keypad_pane

0x312f,	// (0x000442c8) aid_vkbss_key_offset_ParamLimits

0x312f,	// (0x000442c8) aid_vkbss_key_offset

0xd295,	// (0x0004e42e) cell_vkbss_key_pane_ParamLimits

0xd295,	// (0x0004e42e) cell_vkbss_key_pane

0xa9bc,	// (0x0004bb55) bg_cell_vkbss_key_g1_ParamLimits

0xa9bc,	// (0x0004bb55) bg_cell_vkbss_key_g1

0xf2cc,	// (0x00050465) cell_vkbss_key_3p_pane_ParamLimits

0xf2cc,	// (0x00050465) cell_vkbss_key_3p_pane

0xf302,	// (0x0005049b) cell_vkbss_key_g1_ParamLimits

0xf302,	// (0x0005049b) cell_vkbss_key_g1

0xf338,	// (0x000504d1) cell_vkbss_key_t1_ParamLimits

0xf338,	// (0x000504d1) cell_vkbss_key_t1

0x3199,	// (0x00044332) cell_ituss_key_pane_ParamLimits

0x3199,	// (0x00044332) cell_ituss_key_pane

0xaa90,	// (0x0004bc29) bg_cell_ituss_key_g1_ParamLimits

0xaa90,	// (0x0004bc29) bg_cell_ituss_key_g1

0xaa9c,	// (0x0004bc35) cell_ituss_key_pane_g1_ParamLimits

0xaa9c,	// (0x0004bc35) cell_ituss_key_pane_g1

0x31aa,	// (0x00044343) cell_ituss_key_pane_g2_ParamLimits

0x31aa,	// (0x00044343) cell_ituss_key_pane_g2

0x0005,

0xfeb3,	// (0x0005104c) cell_ituss_key_pane_g_ParamLimits

0xfeb3,	// (0x0005104c) cell_ituss_key_pane_g

0x322e,	// (0x000443c7) cell_ituss_key_t1_ParamLimits

0x322e,	// (0x000443c7) cell_ituss_key_t1

0x3268,	// (0x00044401) cell_ituss_key_t2_ParamLimits

0x3268,	// (0x00044401) cell_ituss_key_t2

0x329a,	// (0x00044433) cell_ituss_key_t3_ParamLimits

0x329a,	// (0x00044433) cell_ituss_key_t3

0x32cb,	// (0x00044464) cell_ituss_key_t4_ParamLimits

0x32cb,	// (0x00044464) cell_ituss_key_t4

0x0004,

0xfec0,	// (0x00051059) cell_ituss_key_t_ParamLimits

0xfec0,	// (0x00051059) cell_ituss_key_t

0xf394,	// (0x0005052d) cell_vkbss_key_3p_pane_g1

0xf39c,	// (0x00050535) cell_vkbss_key_3p_pane_g2

0xf3a4,	// (0x0005053d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfecb,	// (0x00051064) cell_vkbss_key_3p_pane_g

0x496c,	// (0x00045b05) bg_popup_fep_char_preview_window_cp02

0xaada,	// (0x0004bc73) popup_fep_char_pre_window_t1

0xf196,	// (0x0005032f) main_ai5_sk_pane

0xa545,	// (0x0004b6de) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa551,	// (0x0004b6ea) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7ecb,	// (0x00049064) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa566,	// (0x0004b6ff) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe97,	// (0x00051030) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa572,	// (0x0004b70b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3cb6,	// (0x00044e4f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf3ac,	// (0x00050545) main_ai5_sk_pane_g1

0x5682,	// (0x0004681b) popup_query_code_window_g1

0xf2b0,	// (0x00050449) popup_fep_vkb_icf_pane

0xa987,	// (0x0004bb20) popup_fep_vtchi_icf_pane

0xaaf1,	// (0x0004bc8a) bg_icf_pane

0xaaf1,	// (0x0004bc8a) list_vkb_icf_pane

0xaafd,	// (0x0004bc96) bg_icf_pane_cp01

0xab10,	// (0x0004bca9) vtchi_icf_list_pane

0xf401,	// (0x0005059a) list_vkb_icf_pane_t1_ParamLimits

0xf401,	// (0x0005059a) list_vkb_icf_pane_t1

0xab8e,	// (0x0004bd27) vtchi_icf_list_pane_t1_ParamLimits

0xab8e,	// (0x0004bd27) vtchi_icf_list_pane_t1

0xa944,	// (0x0004badd) popup_fep_ituss_window_ParamLimits

0xa987,	// (0x0004bb20) popup_fep_vtchi_icf_pane_ParamLimits

0xa9b0,	// (0x0004bb49) ituss_keypad_pane_ParamLimits

0x3125,	// (0x000442be) ituss_sks_pane

0xaaf1,	// (0x0004bc8a) bg_icf_pane_ParamLimits

0xf295,	// (0x0005042e) icf_edit_indi_pane_ParamLimits

0xf295,	// (0x0005042e) icf_edit_indi_pane

0xaaf1,	// (0x0004bc8a) list_vkb_icf_pane_ParamLimits

0xaafd,	// (0x0004bc96) bg_icf_pane_cp01_ParamLimits

0xa92f,	// (0x0004bac8) icf_edit_indi_pane_cp01_ParamLimits

0xa92f,	// (0x0004bac8) icf_edit_indi_pane_cp01

0xab10,	// (0x0004bca9) vtchi_query_pane

0x9ca8,	// (0x0004ae41) icf_edit_indi_pane_g1_ParamLimits

0x9ca8,	// (0x0004ae41) icf_edit_indi_pane_g1

0xf418,	// (0x000505b1) icf_edit_indi_pane_g2_ParamLimits

0xf418,	// (0x000505b1) icf_edit_indi_pane_g2

0x0001,

0xfef6,	// (0x0005108f) icf_edit_indi_pane_g_ParamLimits

0xfef6,	// (0x0005108f) icf_edit_indi_pane_g

0xf42c,	// (0x000505c5) icf_edit_indi_pane_t1

0xabac,	// (0x0004bd45) bg_input_focus_pane_cp042

0x3bd9,	// (0x00044d72) vtchi_button_pane

0xabb5,	// (0x0004bd4e) vtchi_query_pane_t1

0xabc3,	// (0x0004bd5c) vtchi_query_pane_t2

0xabd1,	// (0x0004bd6a) vtchi_query_pane_t3

0x0002,

0xfee5,	// (0x0005107e) vtchi_query_pane_t

0xd2f4,	// (0x0004e48d) bg_button_pane_cp13

0xabdf,	// (0x0004bd78) vtchi_button_pane_g1

0x330e,	// (0x000444a7) ituss_sks_pane_g1

0x3319,	// (0x000444b2) ituss_sks_pane_g2

0x0001,

0xfeec,	// (0x00051085) ituss_sks_pane_g

0xabe7,	// (0x0004bd80) ituss_sks_pane_t1

0xabf5,	// (0x0004bd8e) ituss_sks_pane_t2

0x0001,

0xfef1,	// (0x0005108a) ituss_sks_pane_t

0x726d,	// (0x00048406) indicator_nsta_pane_cp_g1

0x7276,	// (0x0004840f) indicator_nsta_pane_cp_g2

0x727e,	// (0x00048417) indicator_nsta_pane_cp_g3

0x7286,	// (0x0004841f) indicator_nsta_pane_cp_g4

0x7276,	// (0x0004840f) indicator_nsta_pane_cp_g5

0x727e,	// (0x00048417) indicator_nsta_pane_cp_g6

0x0005,

0xfa75,	// (0x00050c0e) indicator_nsta_pane_cp_g

0xefad,	// (0x00050146) cell_graphic2_pane_t2_ParamLimits

0xefad,	// (0x00050146) cell_graphic2_pane_t2

0x0001,

0xfd82,	// (0x00050f1b) cell_graphic2_pane_t_ParamLimits

0xfd82,	// (0x00050f1b) cell_graphic2_pane_t

0xefe2,	// (0x0005017b) cell_graphic2_control_pane_t1

0xd4bb,	// (0x0004e654) signal_pane_g3_ParamLimits

0xd4bb,	// (0x0004e654) signal_pane_g3

0xd4cf,	// (0x0004e668) signal_pane_g4_ParamLimits

0xd4cf,	// (0x0004e668) signal_pane_g4

0xa8fe,	// (0x0004ba97) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa8fe,	// (0x0004ba97) cell_ai5_widget_list_row_pane_t3

0xaab0,	// (0x0004bc49) cell_ituss_key_pane_t1_ParamLimits

0xaab0,	// (0x0004bc49) cell_ituss_key_pane_t1

0x52bf,	// (0x00046458) form_field_data_wide_pane_vc_t2_ParamLimits

0x52bf,	// (0x00046458) form_field_data_wide_pane_vc_t2

0x52d3,	// (0x0004646c) form_field_data_wide_pane_vc_t3_ParamLimits

0x52d3,	// (0x0004646c) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0005097d) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0005097d) form_field_data_wide_pane_vc_t

0x6f17,	// (0x000480b0) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6f17,	// (0x000480b0) form_field_slider_wide_pane_vc_t3

0x6ff5,	// (0x0004818e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6ff5,	// (0x0004818e) form_field_popup_wide_pane_vc_t2

0x700c,	// (0x000481a5) form_field_popup_wide_pane_vc_t3_ParamLimits

0x700c,	// (0x000481a5) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa64,	// (0x00050bfd) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x00050bfd) form_field_popup_wide_pane_vc_t

0xd0ea,	// (0x0004e283) aid_fshwr2_btn_pane_ParamLimits

0xd0fa,	// (0x0004e293) aid_fshwr2_syb_pane_ParamLimits

0xd10e,	// (0x0004e2a7) aid_fshwr2_txt_pane_ParamLimits

0x3cb6,	// (0x00044e4f) fshwr2_bg_pane_ParamLimits

0xd11e,	// (0x0004e2b7) fshwr2_func_candi_pane_ParamLimits

0xd13e,	// (0x0004e2d7) fshwr2_hwr_syb_pane_ParamLimits

0xd160,	// (0x0004e2f9) fshwr2_icf_pane_ParamLimits

0x21b2,	// (0x0004334b) list_double_graphic_pane_vc_g4_ParamLimits

0x21b2,	// (0x0004334b) list_double_graphic_pane_vc_g4

0x31ca,	// (0x00044363) cell_ituss_key_pane_g3_ParamLimits

0x31ca,	// (0x00044363) cell_ituss_key_pane_g3

0x32fc,	// (0x00044495) cell_ituss_key_t5_ParamLimits

0x32fc,	// (0x00044495) cell_ituss_key_t5

0xf2bf,	// (0x00050458) popup_fep_vkbss_window_ParamLimits

0x9e36,	// (0x0004afcf) aid_cell_ai5_quarter

0xf42c,	// (0x000505c5) icf_edit_indi_pane_t1_ParamLimits

0x374e,	// (0x000448e7) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x374e,	// (0x000448e7) aid_tch_indicator_popup_pane_cp2

0x3761,	// (0x000448fa) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3761,	// (0x000448fa) aid_tch_query_popup_data_pane_cp2

0x562a,	// (0x000467c3) aid_tch_query_popup_pane_ParamLimits

0x562a,	// (0x000467c3) aid_tch_query_popup_pane

0x562a,	// (0x000467c3) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x562a,	// (0x000467c3) aid_tch_query_popup_data_pane_cp1

0x4c90,	// (0x00045e29) cell_fshwr2_syb_bg_pane_ParamLimits

0xd26c,	// (0x0004e405) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd27f,	// (0x0004e418) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf2b0,	// (0x00050449) popup_fep_vkb_icf_pane_ParamLimits

0xd076,	// (0x0004e20f) bg_popup_fep_char_preview_window_g10

0x9f6b,	// (0x0004b104) cell_ai5_widget_pane_g11_ParamLimits

0x9f6b,	// (0x0004b104) cell_ai5_widget_pane_g11

0x9f77,	// (0x0004b110) cell_ai5_widget_pane_g12_ParamLimits

0x9f77,	// (0x0004b110) cell_ai5_widget_pane_g12

0x9f83,	// (0x0004b11c) cell_ai5_widget_pane_g13_ParamLimits

0x9f83,	// (0x0004b11c) cell_ai5_widget_pane_g13

0xa0b2,	// (0x0004b24b) cell_ai5_widget_pane_t11_ParamLimits

0xa0b2,	// (0x0004b24b) cell_ai5_widget_pane_t11

0xa0c4,	// (0x0004b25d) cell_ai5_widget_pane_t12_ParamLimits

0xa0c4,	// (0x0004b25d) cell_ai5_widget_pane_t12

0x31d6,	// (0x0004436f) cell_ituss_key_pane_g4_ParamLimits

0x31d6,	// (0x0004436f) cell_ituss_key_pane_g4

0x31f2,	// (0x0004438b) cell_ituss_key_pane_g5_ParamLimits

0x31f2,	// (0x0004438b) cell_ituss_key_pane_g5

0x320e,	// (0x000443a7) cell_ituss_key_pane_g6_ParamLimits

0x320e,	// (0x000443a7) cell_ituss_key_pane_g6

0x51ba,	// (0x00046353) bg_icf_pane_g1

0xf3b5,	// (0x0005054e) bg_icf_pane_g2

0xf3bf,	// (0x00050558) bg_icf_pane_g3

0xf3c7,	// (0x00050560) bg_icf_pane_g4

0xf3d1,	// (0x0005056a) bg_icf_pane_g5

0xf3db,	// (0x00050574) bg_icf_pane_g6

0xf3e5,	// (0x0005057e) bg_icf_pane_g7

0xf3ed,	// (0x00050586) bg_icf_pane_g8

0xf3f7,	// (0x00050590) bg_icf_pane_g9

0x0008,

0xfed2,	// (0x0005106b) bg_icf_pane_g

0xa99d,	// (0x0004bb36) popup_hyb_candi_window_ParamLimits

0xa99d,	// (0x0004bb36) popup_hyb_candi_window

0x522e,	// (0x000463c7) bg_popup_sub_pane_cp01_ParamLimits

0x522e,	// (0x000463c7) bg_popup_sub_pane_cp01

0xac30,	// (0x0004bdc9) entry_hyb_candi_pane_ParamLimits

0xac30,	// (0x0004bdc9) entry_hyb_candi_pane

0xac3f,	// (0x0004bdd8) grid_hyb_candi_pane_ParamLimits

0xac3f,	// (0x0004bdd8) grid_hyb_candi_pane

0xac54,	// (0x0004bded) grid_hyb_phrase_pane_ParamLimits

0xac54,	// (0x0004bded) grid_hyb_phrase_pane

0xac63,	// (0x0004bdfc) cell_hyb_candi_pane_ParamLimits

0xac63,	// (0x0004bdfc) cell_hyb_candi_pane

0xac86,	// (0x0004be1f) cell_hyb_candi_scroll_pane

0x433f,	// (0x000454d8) cell_hyb_candi_pane_g1

0xac8f,	// (0x0004be28) cell_hyb_candi_pane_t1

0xac9d,	// (0x0004be36) cell_hyb_phrase_pane

0x433f,	// (0x000454d8) cell_hyb_phrase_pane_g1

0xaca6,	// (0x0004be3f) cell_hyb_phrase_pane_t1

0xacb4,	// (0x0004be4d) entry_hyb_candi_pane_t1

0x496c,	// (0x00045b05) input_focus_pane_cp06

0xacc2,	// (0x0004be5b) cell_hyb_candi_scroll_pane_g1

0xacca,	// (0x0004be63) cell_hyb_candi_scroll_pane_g1_aid

0xacd2,	// (0x0004be6b) cell_hyb_candi_scroll_pane_g2

0xacda,	// (0x0004be73) cell_hyb_candi_scroll_pane_g2_aid

0xace2,	// (0x0004be7b) cell_hyb_candi_scroll_pane_g3

0xacea,	// (0x0004be83) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
