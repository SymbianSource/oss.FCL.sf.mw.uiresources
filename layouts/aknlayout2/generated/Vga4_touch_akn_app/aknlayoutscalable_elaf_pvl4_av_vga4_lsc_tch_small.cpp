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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00024b06 };

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
0xa3e4,	// (0x0002eeea) Screen

0xa3f0,	// (0x0002eef6) application_window_ParamLimits

0xa3f0,	// (0x0002eef6) application_window

0xce4f,	// (0x00031955) screen_g1

0xa428,	// (0x0002ef2e) area_bottom_pane_ParamLimits

0xa428,	// (0x0002ef2e) area_bottom_pane

0xf2d9,	// (0x00033ddf) area_top_pane_ParamLimits

0xf2d9,	// (0x00033ddf) area_top_pane

0xf36d,	// (0x00033e73) main_pane_ParamLimits

0xf36d,	// (0x00033e73) main_pane

0xce59,	// (0x0003195f) misc_graphics

0xb784,	// (0x0003028a) battery_pane_ParamLimits

0xb784,	// (0x0003028a) battery_pane

0x3eb3,	// (0x000289b9) bg_status_flat_pane_g8

0x3ebb,	// (0x000289c1) bg_status_flat_pane_g9

0x32b3,	// (0x00027db9) context_pane_ParamLimits

0x32b3,	// (0x00027db9) context_pane

0xb8fb,	// (0x00030401) navi_pane_ParamLimits

0xb8fb,	// (0x00030401) navi_pane

0xb985,	// (0x0003048b) signal_pane_ParamLimits

0xb985,	// (0x0003048b) signal_pane

0x0008,

0xf84f,	// (0x00034355) bg_status_flat_pane_g

0xba15,	// (0x0003051b) status_pane_g1_ParamLimits

0xba15,	// (0x0003051b) status_pane_g1

0xba2b,	// (0x00030531) status_pane_g2_ParamLimits

0xba2b,	// (0x00030531) status_pane_g2

0x34ec,	// (0x00027ff2) status_pane_g3_ParamLimits

0x34ec,	// (0x00027ff2) status_pane_g3

0x0004,

0xf77b,	// (0x00034281) status_pane_g_ParamLimits

0xf77b,	// (0x00034281) status_pane_g

0xba37,	// (0x0003053d) title_pane_ParamLimits

0xba37,	// (0x0003053d) title_pane

0xba9e,	// (0x000305a4) uni_indicator_pane_ParamLimits

0xba9e,	// (0x000305a4) uni_indicator_pane

0x311d,	// (0x00027c23) bg_list_pane_ParamLimits

0x311d,	// (0x00027c23) bg_list_pane

0xafbe,	// (0x0002fac4) find_pane

0x36e7,	// (0x000281ed) listscroll_app_pane_ParamLimits

0x36e7,	// (0x000281ed) listscroll_app_pane

0x3149,	// (0x00027c4f) listscroll_form_pane

0xafc6,	// (0x0002facc) listscroll_gen_pane_ParamLimits

0xafc6,	// (0x0002facc) listscroll_gen_pane

0x10b4,	// (0x00025bba) listscroll_set_pane

0x4a50,	// (0x00029556) main_idle_act_pane

0x2e16,	// (0x0002791c) main_idle_trad_pane

0x2e16,	// (0x0002791c) main_list_empty_pane

0x313d,	// (0x00027c43) main_midp_pane

0x3163,	// (0x00027c69) main_pane_g1_ParamLimits

0x3163,	// (0x00027c69) main_pane_g1

0xafda,	// (0x0002fae0) popup_ai_message_window_ParamLimits

0xafda,	// (0x0002fae0) popup_ai_message_window

0xb07a,	// (0x0002fb80) popup_fep_china_uni_window_ParamLimits

0xb07a,	// (0x0002fb80) popup_fep_china_uni_window

0x11d0,	// (0x00025cd6) popup_fep_japan_candidate_window_ParamLimits

0x11d0,	// (0x00025cd6) popup_fep_japan_candidate_window

0x11fa,	// (0x00025d00) popup_fep_japan_predictive_window_ParamLimits

0x11fa,	// (0x00025d00) popup_fep_japan_predictive_window

0xb0da,	// (0x0002fbe0) popup_find_window

0xb0f7,	// (0x0002fbfd) popup_grid_graphic_window_ParamLimits

0xb0f7,	// (0x0002fbfd) popup_grid_graphic_window

0x126d,	// (0x00025d73) popup_large_graphic_colour_window

0xb1a1,	// (0x0002fca7) popup_menu_window_ParamLimits

0xb1a1,	// (0x0002fca7) popup_menu_window

0xb391,	// (0x0002fe97) popup_note_image_window

0xb351,	// (0x0002fe57) popup_note_wait_window_ParamLimits

0xb351,	// (0x0002fe57) popup_note_wait_window

0xb3a9,	// (0x0002feaf) popup_note_window_ParamLimits

0xb3a9,	// (0x0002feaf) popup_note_window

0xb457,	// (0x0002ff5d) popup_query_code_window_ParamLimits

0xb457,	// (0x0002ff5d) popup_query_code_window

0x14d9,	// (0x00025fdf) popup_query_data_code_window_ParamLimits

0x14d9,	// (0x00025fdf) popup_query_data_code_window

0xb497,	// (0x0002ff9d) popup_query_data_window_ParamLimits

0xb497,	// (0x0002ff9d) popup_query_data_window

0xb52b,	// (0x00030031) popup_query_sat_info_window_ParamLimits

0xb52b,	// (0x00030031) popup_query_sat_info_window

0xb5d4,	// (0x000300da) popup_snote_single_graphic_window_ParamLimits

0xb5d4,	// (0x000300da) popup_snote_single_graphic_window

0xb5d4,	// (0x000300da) popup_snote_single_text_window_ParamLimits

0xb5d4,	// (0x000300da) popup_snote_single_text_window

0x1574,	// (0x0002607a) popup_sub_window_general

0x16ba,	// (0x000261c0) popup_window_general_ParamLimits

0x16ba,	// (0x000261c0) popup_window_general

0x3171,	// (0x00027c77) power_save_pane

0xae1a,	// (0x0002f920) control_pane_g1_ParamLimits

0xae1a,	// (0x0002f920) control_pane_g1

0xae43,	// (0x0002f949) control_pane_g2_ParamLimits

0xae43,	// (0x0002f949) control_pane_g2

0x30e0,	// (0x00027be6) control_pane_g3_ParamLimits

0x30e0,	// (0x00027be6) control_pane_g3

0x0007,

0xf763,	// (0x00034269) control_pane_g_ParamLimits

0xf763,	// (0x00034269) control_pane_g

0xaea9,	// (0x0002f9af) control_pane_t1_ParamLimits

0xaea9,	// (0x0002f9af) control_pane_t1

0xaf11,	// (0x0002fa17) control_pane_t2_ParamLimits

0xaf11,	// (0x0002fa17) control_pane_t2

0x0002,

0xf774,	// (0x0003427a) control_pane_t_ParamLimits

0xf774,	// (0x0003427a) control_pane_t

0xad73,	// (0x0002f879) navi_navi_volume_pane_cp1

0xad7b,	// (0x0002f881) status_small_icon_pane

0x3015,	// (0x00027b1b) status_small_pane_g1_ParamLimits

0x3015,	// (0x00027b1b) status_small_pane_g1

0xad83,	// (0x0002f889) status_small_pane_g2_ParamLimits

0xad83,	// (0x0002f889) status_small_pane_g2

0xad8f,	// (0x0002f895) status_small_pane_g3_ParamLimits

0xad8f,	// (0x0002f895) status_small_pane_g3

0xad9b,	// (0x0002f8a1) status_small_pane_g4_ParamLimits

0xad9b,	// (0x0002f8a1) status_small_pane_g4

0xada7,	// (0x0002f8ad) status_small_pane_g5_ParamLimits

0xada7,	// (0x0002f8ad) status_small_pane_g5

0xadb5,	// (0x0002f8bb) status_small_pane_g6_ParamLimits

0xadb5,	// (0x0002f8bb) status_small_pane_g6

0x0007,

0xf752,	// (0x00034258) status_small_pane_g_ParamLimits

0xf752,	// (0x00034258) status_small_pane_g

0xade4,	// (0x0002f8ea) status_small_pane_t1

0xae06,	// (0x0002f90c) status_small_wait_pane_ParamLimits

0xae06,	// (0x0002f90c) status_small_wait_pane

0xabe5,	// (0x0002f6eb) aid_levels_signal_ParamLimits

0xabe5,	// (0x0002f6eb) aid_levels_signal

0xabfd,	// (0x0002f703) signal_pane_g1_ParamLimits

0xabfd,	// (0x0002f703) signal_pane_g1

0xac18,	// (0x0002f71e) signal_pane_g2_ParamLimits

0xac18,	// (0x0002f71e) signal_pane_g2

0x0003,

0xf6e3,	// (0x000341e9) signal_pane_g_ParamLimits

0xf6e3,	// (0x000341e9) signal_pane_g

0x0a06,	// (0x0002550c) context_pane_g1

0xa614,	// (0x0002f11a) title_pane_g1

0xa657,	// (0x0002f15d) title_pane_t1

0xce6f,	// (0x00031975) title_pane_t2

0xce95,	// (0x0003199b) title_pane_t3

0x0002,

0xf532,	// (0x00034038) title_pane_t

0xbac6,	// (0x000305cc) aid_levels_battery_ParamLimits

0xbac6,	// (0x000305cc) aid_levels_battery

0xbae2,	// (0x000305e8) battery_pane_g1_ParamLimits

0xbae2,	// (0x000305e8) battery_pane_g1

0xbaff,	// (0x00030605) battery_pane_g2_ParamLimits

0xbaff,	// (0x00030605) battery_pane_g2

0x0001,

0xf786,	// (0x0003428c) battery_pane_g_ParamLimits

0xf786,	// (0x0003428c) battery_pane_g

0xbed9,	// (0x000309df) uni_indicator_pane_g1

0xbeef,	// (0x000309f5) uni_indicator_pane_g2

0xbf05,	// (0x00030a0b) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x000343fd) uni_indicator_pane_g

0x2c79,	// (0x0002777f) navi_icon_pane_ParamLimits

0x2c79,	// (0x0002777f) navi_icon_pane

0x2bb5,	// (0x000276bb) navi_midp_pane

0x2c95,	// (0x0002779b) navi_navi_pane

0x2c9f,	// (0x000277a5) navi_text_pane_ParamLimits

0x2c9f,	// (0x000277a5) navi_text_pane

0xce4f,	// (0x00031955) status_small_wait_pane_g1

0xd1b6,	// (0x00031cbc) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x000343f8) status_small_wait_pane_g

0xbe78,	// (0x0003097e) navi_navi_icon_text_pane

0xbe80,	// (0x00030986) navi_navi_pane_g1_ParamLimits

0xbe80,	// (0x00030986) navi_navi_pane_g1

0xbe92,	// (0x00030998) navi_navi_pane_g2_ParamLimits

0xbe92,	// (0x00030998) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x000343c6) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x000343c6) navi_navi_pane_g

0x453c,	// (0x00029042) navi_navi_tabs_pane

0xbea4,	// (0x000309aa) navi_navi_text_pane

0xbe78,	// (0x0003097e) navi_navi_volume_pane

0xbe66,	// (0x0003096c) navi_text_pane_t1

0xbe5a,	// (0x00030960) navi_icon_pane_g1

0x4433,	// (0x00028f39) navi_navi_text_pane_t1

0xbe49,	// (0x0003094f) navi_navi_volume_pane_g1

0xbe51,	// (0x00030957) volume_small_pane

0xbda5,	// (0x000308ab) navi_navi_icon_text_pane_g1

0xbdad,	// (0x000308b3) navi_navi_icon_text_pane_t1

0x2c95,	// (0x0002779b) navi_tabs_2_long_pane

0x2c95,	// (0x0002779b) navi_tabs_2_pane

0x2c95,	// (0x0002779b) navi_tabs_3_long_pane

0x2c95,	// (0x0002779b) navi_tabs_3_pane

0x2c95,	// (0x0002779b) navi_tabs_4_pane

0xbd85,	// (0x0003088b) tabs_2_active_pane_ParamLimits

0xbd85,	// (0x0003088b) tabs_2_active_pane

0xbd95,	// (0x0003089b) tabs_2_passive_pane_ParamLimits

0xbd95,	// (0x0003089b) tabs_2_passive_pane

0xbd53,	// (0x00030859) tabs_3_active_pane_ParamLimits

0xbd53,	// (0x00030859) tabs_3_active_pane

0xbd63,	// (0x00030869) tabs_3_passive_pane_ParamLimits

0xbd63,	// (0x00030869) tabs_3_passive_pane

0xbd74,	// (0x0003087a) tabs_3_passive_pane_cp_ParamLimits

0xbd74,	// (0x0003087a) tabs_3_passive_pane_cp

0xbd0f,	// (0x00030815) tabs_4_active_pane_ParamLimits

0xbd0f,	// (0x00030815) tabs_4_active_pane

0xbd20,	// (0x00030826) tabs_4_passive_pane_ParamLimits

0xbd20,	// (0x00030826) tabs_4_passive_pane

0xbd31,	// (0x00030837) tabs_4_passive_pane_cp_ParamLimits

0xbd31,	// (0x00030837) tabs_4_passive_pane_cp

0xbd42,	// (0x00030848) tabs_4_passive_pane_cp2_ParamLimits

0xbd42,	// (0x00030848) tabs_4_passive_pane_cp2

0xbceb,	// (0x000307f1) tabs_2_long_active_pane_ParamLimits

0xbceb,	// (0x000307f1) tabs_2_long_active_pane

0xbcfd,	// (0x00030803) tabs_2_long_passive_pane_ParamLimits

0xbcfd,	// (0x00030803) tabs_2_long_passive_pane

0xbca0,	// (0x000307a6) tabs_3_long_active_pane_ParamLimits

0xbca0,	// (0x000307a6) tabs_3_long_active_pane

0xbcb9,	// (0x000307bf) tabs_3_long_passive_pane_ParamLimits

0xbcb9,	// (0x000307bf) tabs_3_long_passive_pane

0xbcd2,	// (0x000307d8) tabs_3_long_passive_pane_cp_ParamLimits

0xbcd2,	// (0x000307d8) tabs_3_long_passive_pane_cp

0x1808,	// (0x0002630e) volume_small_pane_g1

0xbc4f,	// (0x00030755) volume_small_pane_g2

0xbc58,	// (0x0003075e) volume_small_pane_g3

0xbc61,	// (0x00030767) volume_small_pane_g4

0xbc6a,	// (0x00030770) volume_small_pane_g5

0xbc73,	// (0x00030779) volume_small_pane_g6

0xbc7c,	// (0x00030782) volume_small_pane_g7

0xbc85,	// (0x0003078b) volume_small_pane_g8

0xbc8e,	// (0x00030794) volume_small_pane_g9

0xbc97,	// (0x0003079d) volume_small_pane_g10

0x0009,

0xf88c,	// (0x00034392) volume_small_pane_g

0xcea7,	// (0x000319ad) bg_active_tab_pane_cp2_ParamLimits

0xcea7,	// (0x000319ad) bg_active_tab_pane_cp2

0xa6e3,	// (0x0002f1e9) tabs_3_active_pane_g1

0xa6eb,	// (0x0002f1f1) tabs_3_active_pane_t1

0xcea7,	// (0x000319ad) bg_passive_tab_pane_cp2_ParamLimits

0xcea7,	// (0x000319ad) bg_passive_tab_pane_cp2

0xa6e3,	// (0x0002f1e9) tabs_3_passive_pane_g1

0xa6eb,	// (0x0002f1f1) tabs_3_passive_pane_t1

0xcea7,	// (0x000319ad) bg_active_tab_pane_cp3_ParamLimits

0xcea7,	// (0x000319ad) bg_active_tab_pane_cp3

0xa6fd,	// (0x0002f203) tabs_4_active_pane_g1

0xa705,	// (0x0002f20b) tabs_4_active_pane_t1

0xcea7,	// (0x000319ad) bg_passive_tab_pane_cp3_ParamLimits

0xcea7,	// (0x000319ad) bg_passive_tab_pane_cp3

0xa6fd,	// (0x0002f203) tabs_4_1_passive_pane_g1

0xa705,	// (0x0002f20b) tabs_4_1_passive_pane_t1

0x313d,	// (0x00027c43) list_highlight_pane_cp2

0xbf98,	// (0x00030a9e) list_set_pane_ParamLimits

0xbf98,	// (0x00030a9e) list_set_pane

0xc05a,	// (0x00030b60) main_pane_set_t1_ParamLimits

0xc05a,	// (0x00030b60) main_pane_set_t1

0xc07a,	// (0x00030b80) main_pane_set_t2_ParamLimits

0xc07a,	// (0x00030b80) main_pane_set_t2

0xc08e,	// (0x00030b94) main_pane_set_t3_ParamLimits

0xc08e,	// (0x00030b94) main_pane_set_t3

0xc0a2,	// (0x00030ba8) main_pane_set_t4_ParamLimits

0xc0a2,	// (0x00030ba8) main_pane_set_t4

0x0003,

0xf95c,	// (0x00034462) main_pane_set_t_ParamLimits

0xf95c,	// (0x00034462) main_pane_set_t

0xc0b6,	// (0x00030bbc) setting_code_pane

0x4b9e,	// (0x000296a4) setting_slider_graphic_pane

0x4b9e,	// (0x000296a4) setting_slider_pane

0x4b9e,	// (0x000296a4) setting_text_pane

0x4b9e,	// (0x000296a4) setting_volume_pane

0xf496,	// (0x00033f9c) volume_set_pane

0xceb5,	// (0x000319bb) bg_set_opt_pane_cp

0xf4a0,	// (0x00033fa6) setting_slider_pane_t1

0xf4b9,	// (0x00033fbf) setting_slider_pane_t2

0xf4d3,	// (0x00033fd9) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0003403f) setting_slider_pane_t

0xf4eb,	// (0x00033ff1) slider_set_pane

0xce59,	// (0x0003195f) bg_set_opt_pane_cp2

0xcec3,	// (0x000319c9) setting_slider_graphic_pane_g1

0xf501,	// (0x00034007) setting_slider_graphic_pane_t1

0xf511,	// (0x00034017) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00034046) setting_slider_graphic_pane_t

0xf521,	// (0x00034027) slider_set_pane_cp

0xce59,	// (0x0003195f) input_focus_pane_cp1

0x4a37,	// (0x0002953d) list_set_text_pane

0xce4f,	// (0x00031955) setting_text_pane_g1

0xce59,	// (0x0003195f) input_focus_pane_cp2

0xce4f,	// (0x00031955) setting_code_pane_g1

0xcecc,	// (0x000319d2) setting_code_pane_t1

0xea2a,	// (0x00033530) set_text_pane_t1_ParamLimits

0xea2a,	// (0x00033530) set_text_pane_t1

0xd54f,	// (0x00032055) set_opt_bg_pane_g1

0xd557,	// (0x0003205d) set_opt_bg_pane_g2

0x4a0f,	// (0x00029515) set_opt_bg_pane_g3

0xd567,	// (0x0003206d) set_opt_bg_pane_g4

0xd56f,	// (0x00032075) set_opt_bg_pane_g5

0xd577,	// (0x0003207d) set_opt_bg_pane_g6

0x4a19,	// (0x0002951f) set_opt_bg_pane_g7

0x4a23,	// (0x00029529) set_opt_bg_pane_g8

0x4a2d,	// (0x00029533) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0003444f) set_opt_bg_pane_g

0x4a02,	// (0x00029508) slider_set_pane_g1

0x19ec,	// (0x000264f2) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00034440) slider_set_pane_g

0x1974,	// (0x0002647a) volume_set_pane_g1

0x197e,	// (0x00026484) volume_set_pane_g2

0x1988,	// (0x0002648e) volume_set_pane_g3

0x1992,	// (0x00026498) volume_set_pane_g4

0x199c,	// (0x000264a2) volume_set_pane_g5

0x19a6,	// (0x000264ac) volume_set_pane_g6

0x19b0,	// (0x000264b6) volume_set_pane_g7

0x19ba,	// (0x000264c0) volume_set_pane_g8

0x19c4,	// (0x000264ca) volume_set_pane_g9

0x19ce,	// (0x000264d4) volume_set_pane_g10

0x0009,

0xf912,	// (0x00034418) volume_set_pane_g

0xa717,	// (0x0002f21d) indicator_pane_ParamLimits

0xa717,	// (0x0002f21d) indicator_pane

0xa743,	// (0x0002f249) main_idle_pane_g2_ParamLimits

0xa743,	// (0x0002f249) main_idle_pane_g2

0xa77b,	// (0x0002f281) main_pane_idle_g1_ParamLimits

0xa77b,	// (0x0002f281) main_pane_idle_g1

0xceda,	// (0x000319e0) popup_clock_digital_analogue_window_ParamLimits

0xceda,	// (0x000319e0) popup_clock_digital_analogue_window

0xa7a5,	// (0x0002f2ab) soft_indicator_pane_ParamLimits

0xa7a5,	// (0x0002f2ab) soft_indicator_pane

0xa7c1,	// (0x0002f2c7) wallpaper_pane_ParamLimits

0xa7c1,	// (0x0002f2c7) wallpaper_pane

0xce4f,	// (0x00031955) wallpaper_pane_g1

0xa7d3,	// (0x0002f2d9) indicator_pane_g1_ParamLimits

0xa7d3,	// (0x0002f2d9) indicator_pane_g1

0x4e42,	// (0x00029948) navi_navi_icon_text_pane_srt_g1

0xcf08,	// (0x00031a0e) soft_indicator_pane_t1

0xcf22,	// (0x00031a28) aid_ps_area_pane

0xa7ec,	// (0x0002f2f2) aid_ps_clock_pane

0xcf33,	// (0x00031a39) aid_ps_indicator_pane

0xcf3f,	// (0x00031a45) indicator_ps_pane_ParamLimits

0xcf3f,	// (0x00031a45) indicator_ps_pane

0xcf4e,	// (0x00031a54) power_save_pane_g1_ParamLimits

0xcf4e,	// (0x00031a54) power_save_pane_g1

0xcf5a,	// (0x00031a60) power_save_pane_g2_ParamLimits

0xcf5a,	// (0x00031a60) power_save_pane_g2

0xf2b9,	// (0x00033dbf) aid_navinavi_width_pane

0xcf22,	// (0x00031a28) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0003404b) power_save_pane_g_ParamLimits

0xf545,	// (0x0003404b) power_save_pane_g

0xcf68,	// (0x00031a6e) power_save_pane_t1_ParamLimits

0xcf68,	// (0x00031a6e) power_save_pane_t1

0xa7ec,	// (0x0002f2f2) aid_ps_clock_pane_ParamLimits

0xcf33,	// (0x00031a39) aid_ps_indicator_pane_ParamLimits

0xcf7a,	// (0x00031a80) power_save_pane_t4_ParamLimits

0xcf7a,	// (0x00031a80) power_save_pane_t4

0x0001,

0xf54a,	// (0x00034050) power_save_pane_t_ParamLimits

0xf54a,	// (0x00034050) power_save_pane_t

0xcfa4,	// (0x00031aaa) power_save_t3_ParamLimits

0xcfa4,	// (0x00031aaa) power_save_t3

0xcf8f,	// (0x00031a95) power_save_t2_ParamLimits

0xcf8f,	// (0x00031a95) power_save_t2

0xcfb9,	// (0x00031abf) indicator_ps_pane_g1

0xa7fa,	// (0x0002f300) ai_gene_pane_ParamLimits

0xa7fa,	// (0x0002f300) ai_gene_pane

0xa811,	// (0x0002f317) ai_links_pane_ParamLimits

0xa811,	// (0x0002f317) ai_links_pane

0xa829,	// (0x0002f32f) indicator_pane_cp1_ParamLimits

0xa829,	// (0x0002f32f) indicator_pane_cp1

0xa838,	// (0x0002f33e) main_pane_idle_g1_cp_ParamLimits

0xa838,	// (0x0002f33e) main_pane_idle_g1_cp

0xcfc2,	// (0x00031ac8) popup_ai_links_title_window

0xa850,	// (0x0002f356) soft_indicator_pane_cp1_ParamLimits

0xa850,	// (0x0002f356) soft_indicator_pane_cp1

0x47eb,	// (0x000292f1) ai_links_pane_g1

0x47f4,	// (0x000292fa) grid_ai_links_pane

0xbed0,	// (0x000309d6) ai_gene_pane_1

0x47d9,	// (0x000292df) ai_gene_pane_2

0x47e2,	// (0x000292e8) list_highlight_pane_cp4

0xbeac,	// (0x000309b2) cell_ai_link_pane_ParamLimits

0xbeac,	// (0x000309b2) cell_ai_link_pane

0x47a8,	// (0x000292ae) cell_ai_link_pane_g1

0xd1b6,	// (0x00031cbc) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x000343f3) cell_ai_link_pane_g

0xce59,	// (0x0003195f) grid_highlight_cp2

0xce59,	// (0x0003195f) bg_popup_sub_pane_cp1

0xcfd9,	// (0x00031adf) popup_ai_links_title_window_t1

0x46f4,	// (0x000291fa) ai_gene_pane_1_g1_ParamLimits

0x46f4,	// (0x000291fa) ai_gene_pane_1_g1

0x4700,	// (0x00029206) ai_gene_pane_1_g2_ParamLimits

0x4700,	// (0x00029206) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x000343e9) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x000343e9) ai_gene_pane_1_g

0x470d,	// (0x00029213) ai_gene_pane_1_t1_ParamLimits

0x470d,	// (0x00029213) ai_gene_pane_1_t1

0x4741,	// (0x00029247) grid_ai_soft_ind_pane

0x46df,	// (0x000291e5) ai_gene_pane_2_t1_ParamLimits

0x46df,	// (0x000291e5) ai_gene_pane_2_t1

0xa864,	// (0x0002f36a) main_pane_empty_t1_ParamLimits

0xa864,	// (0x0002f36a) main_pane_empty_t1

0xa87c,	// (0x0002f382) main_pane_empty_t2_ParamLimits

0xa87c,	// (0x0002f382) main_pane_empty_t2

0xa891,	// (0x0002f397) main_pane_empty_t3_ParamLimits

0xa891,	// (0x0002f397) main_pane_empty_t3

0xa8a3,	// (0x0002f3a9) main_pane_empty_t4_ParamLimits

0xa8a3,	// (0x0002f3a9) main_pane_empty_t4

0xa8b5,	// (0x0002f3bb) main_pane_empty_t5_ParamLimits

0xa8b5,	// (0x0002f3bb) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00034055) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00034055) main_pane_empty_t

0xd5de,	// (0x000320e4) bg_popup_window_pane_ParamLimits

0xd5de,	// (0x000320e4) bg_popup_window_pane

0x4441,	// (0x00028f47) find_popup_pane_cp2_ParamLimits

0x4441,	// (0x00028f47) find_popup_pane_cp2

0x444d,	// (0x00028f53) heading_pane_ParamLimits

0x444d,	// (0x00028f53) heading_pane

0xce59,	// (0x0003195f) bg_popup_sub_pane

0xbdca,	// (0x000308d0) bg_popup_window_pane_g1_ParamLimits

0xbdca,	// (0x000308d0) bg_popup_window_pane_g1

0xbdd9,	// (0x000308df) bg_popup_window_pane_g2_ParamLimits

0xbdd9,	// (0x000308df) bg_popup_window_pane_g2

0xbde5,	// (0x000308eb) bg_popup_window_pane_g3_ParamLimits

0xbde5,	// (0x000308eb) bg_popup_window_pane_g3

0xbdf1,	// (0x000308f7) bg_popup_window_pane_g4_ParamLimits

0xbdf1,	// (0x000308f7) bg_popup_window_pane_g4

0xbe00,	// (0x00030906) bg_popup_window_pane_g5_ParamLimits

0xbe00,	// (0x00030906) bg_popup_window_pane_g5

0xbe10,	// (0x00030916) bg_popup_window_pane_g6_ParamLimits

0xbe10,	// (0x00030916) bg_popup_window_pane_g6

0xbe1c,	// (0x00030922) bg_popup_window_pane_g7_ParamLimits

0xbe1c,	// (0x00030922) bg_popup_window_pane_g7

0xbe2b,	// (0x00030931) bg_popup_window_pane_g8_ParamLimits

0xbe2b,	// (0x00030931) bg_popup_window_pane_g8

0xbe3a,	// (0x00030940) bg_popup_window_pane_g9_ParamLimits

0xbe3a,	// (0x00030940) bg_popup_window_pane_g9

0x4427,	// (0x00028f2d) bg_popup_window_pane_g10_ParamLimits

0x4427,	// (0x00028f2d) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x000343b1) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x000343b1) bg_popup_window_pane_g

0x4350,	// (0x00028e56) bg_popup_heading_pane_ParamLimits

0x4350,	// (0x00028e56) bg_popup_heading_pane

0x1a74,	// (0x0002657a) tabs_4_passive_pane_cp_srt_ParamLimits

0x1a74,	// (0x0002657a) tabs_4_passive_pane_cp_srt

0x1a86,	// (0x0002658c) tabs_4_passive_pane_srt_ParamLimits

0x4364,	// (0x00028e6a) heading_pane_g2

0x1a86,	// (0x0002658c) tabs_4_passive_pane_srt

0x36e7,	// (0x000281ed) bg_passive_tab_pane_cp3_srt_ParamLimits

0x36e7,	// (0x000281ed) bg_passive_tab_pane_cp3_srt

0x436c,	// (0x00028e72) heading_pane_t1_ParamLimits

0x436c,	// (0x00028e72) heading_pane_t1

0x4383,	// (0x00028e89) heading_pane_t2_ParamLimits

0x4383,	// (0x00028e89) heading_pane_t2

0x0001,

0xf8a6,	// (0x000343ac) heading_pane_t_ParamLimits

0xf8a6,	// (0x000343ac) heading_pane_t

0x3e7b,	// (0x00028981) bg_popup_heading_pane_g1

0x3f2a,	// (0x00028a30) bg_popup_heading_pane_g2

0x3f34,	// (0x00028a3a) bg_popup_heading_pane_g3

0x3f3e,	// (0x00028a44) bg_popup_heading_pane_g4

0x3f48,	// (0x00028a4e) bg_popup_heading_pane_g5

0x3f52,	// (0x00028a58) bg_popup_heading_pane_g6

0x3f5a,	// (0x00028a60) bg_popup_heading_pane_g7

0x3f62,	// (0x00028a68) bg_popup_heading_pane_g8

0x3f6c,	// (0x00028a72) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00034368) bg_popup_heading_pane_g

0x3673,	// (0x00028179) bg_popup_sub_pane_g1

0x367b,	// (0x00028181) bg_popup_sub_pane_g2

0x3683,	// (0x00028189) bg_popup_sub_pane_g3

0x368b,	// (0x00028191) bg_popup_sub_pane_g4

0x3693,	// (0x00028199) bg_popup_sub_pane_g5

0x369b,	// (0x000281a1) bg_popup_sub_pane_g6

0x36a3,	// (0x000281a9) bg_popup_sub_pane_g7

0x36ab,	// (0x000281b1) bg_popup_sub_pane_g8

0x36b3,	// (0x000281b9) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00034342) bg_popup_sub_pane_g

0xcea7,	// (0x000319ad) bg_popup_window_pane_cp5_ParamLimits

0xcea7,	// (0x000319ad) bg_popup_window_pane_cp5

0xcff6,	// (0x00031afc) popup_note_window_g1_ParamLimits

0xcff6,	// (0x00031afc) popup_note_window_g1

0xd002,	// (0x00031b08) popup_note_window_t1_ParamLimits

0xd002,	// (0x00031b08) popup_note_window_t1

0xd018,	// (0x00031b1e) popup_note_window_t2_ParamLimits

0xd018,	// (0x00031b1e) popup_note_window_t2

0xd02e,	// (0x00031b34) popup_note_window_t3_ParamLimits

0xd02e,	// (0x00031b34) popup_note_window_t3

0xd044,	// (0x00031b4a) popup_note_window_t4_ParamLimits

0xd044,	// (0x00031b4a) popup_note_window_t4

0xd06c,	// (0x00031b72) popup_note_window_t5_ParamLimits

0xd06c,	// (0x00031b72) popup_note_window_t5

0x0004,

0xf55a,	// (0x00034060) popup_note_window_t_ParamLimits

0xf55a,	// (0x00034060) popup_note_window_t

0xd0b6,	// (0x00031bbc) bg_popup_window_pane_cp6_ParamLimits

0xd0b6,	// (0x00031bbc) bg_popup_window_pane_cp6

0x3df7,	// (0x000288fd) popup_note_image_window_g1_ParamLimits

0x3df7,	// (0x000288fd) popup_note_image_window_g1

0x3e03,	// (0x00028909) popup_note_image_window_g2_ParamLimits

0x3e03,	// (0x00028909) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00034336) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00034336) popup_note_image_window_g

0x3e1c,	// (0x00028922) popup_note_image_window_t1_ParamLimits

0x3e1c,	// (0x00028922) popup_note_image_window_t1

0x3e35,	// (0x0002893b) popup_note_image_window_t2_ParamLimits

0x3e35,	// (0x0002893b) popup_note_image_window_t2

0x3e4e,	// (0x00028954) popup_note_image_window_t3_ParamLimits

0x3e4e,	// (0x00028954) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0003433b) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0003433b) popup_note_image_window_t

0x3cb7,	// (0x000287bd) bg_popup_window_pane_cp7_ParamLimits

0x3cb7,	// (0x000287bd) bg_popup_window_pane_cp7

0x3ce7,	// (0x000287ed) popup_note_wait_window_g1_ParamLimits

0x3ce7,	// (0x000287ed) popup_note_wait_window_g1

0x3cf3,	// (0x000287f9) popup_note_wait_window_g2_ParamLimits

0x3cf3,	// (0x000287f9) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00034324) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00034324) popup_note_wait_window_g

0x3d0b,	// (0x00028811) popup_note_wait_window_t1_ParamLimits

0x3d0b,	// (0x00028811) popup_note_wait_window_t1

0x3d32,	// (0x00028838) popup_note_wait_window_t2_ParamLimits

0x3d32,	// (0x00028838) popup_note_wait_window_t2

0x3d50,	// (0x00028856) popup_note_wait_window_t3_ParamLimits

0x3d50,	// (0x00028856) popup_note_wait_window_t3

0x3d63,	// (0x00028869) popup_note_wait_window_t4_ParamLimits

0x3d63,	// (0x00028869) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0003432b) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0003432b) popup_note_wait_window_t

0x3d88,	// (0x0002888e) wait_bar_pane_ParamLimits

0x3d88,	// (0x0002888e) wait_bar_pane

0xce59,	// (0x0003195f) wait_anim_pane

0xce59,	// (0x0003195f) wait_border_pane

0xce4f,	// (0x00031955) wait_anim_pane_g1

0xce4f,	// (0x00031955) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x000341e4) wait_anim_pane_g

0x3c5b,	// (0x00028761) wait_border_pane_g1

0x3c66,	// (0x0002876c) wait_border_pane_g2

0x3c6f,	// (0x00028775) wait_border_pane_g3

0x0002,

0xf817,	// (0x0003431d) wait_border_pane_g

0x3ac5,	// (0x000285cb) bg_popup_window_pane_cp16_ParamLimits

0x3ac5,	// (0x000285cb) bg_popup_window_pane_cp16

0x3bc5,	// (0x000286cb) indicator_popup_pane_cp4_ParamLimits

0x3bc5,	// (0x000286cb) indicator_popup_pane_cp4

0x3bd9,	// (0x000286df) popup_query_data_window_t1_ParamLimits

0x3bd9,	// (0x000286df) popup_query_data_window_t1

0x3beb,	// (0x000286f1) popup_query_data_window_t2_ParamLimits

0x3beb,	// (0x000286f1) popup_query_data_window_t2

0x3c04,	// (0x0002870a) popup_query_data_window_t3_ParamLimits

0x3c04,	// (0x0002870a) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00034316) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00034316) popup_query_data_window_t

0x3c1e,	// (0x00028724) query_popup_data_pane_ParamLimits

0x3c1e,	// (0x00028724) query_popup_data_pane

0x3c32,	// (0x00028738) query_popup_data_pane_cp1_ParamLimits

0x3c32,	// (0x00028738) query_popup_data_pane_cp1

0x3ac5,	// (0x000285cb) bg_popup_window_pane_cp10_ParamLimits

0x3ac5,	// (0x000285cb) bg_popup_window_pane_cp10

0x3af7,	// (0x000285fd) indicator_popup_pane_ParamLimits

0x3af7,	// (0x000285fd) indicator_popup_pane

0x3b19,	// (0x0002861f) popup_query_code_window_t1_ParamLimits

0x3b19,	// (0x0002861f) popup_query_code_window_t1

0x3b33,	// (0x00028639) popup_query_code_window_t2_ParamLimits

0x3b33,	// (0x00028639) popup_query_code_window_t2

0x3b7c,	// (0x00028682) popup_query_code_window_t3_ParamLimits

0x3b7c,	// (0x00028682) popup_query_code_window_t3

0x0002,

0xf809,	// (0x0003430f) popup_query_code_window_t_ParamLimits

0xf809,	// (0x0003430f) popup_query_code_window_t

0x3bab,	// (0x000286b1) query_popup_pane_ParamLimits

0x3bab,	// (0x000286b1) query_popup_pane

0xd0b6,	// (0x00031bbc) bg_popup_window_pane_cp15_ParamLimits

0xd0b6,	// (0x00031bbc) bg_popup_window_pane_cp15

0xd0d6,	// (0x00031bdc) indicator_popup_pane_cp1_ParamLimits

0xd0d6,	// (0x00031bdc) indicator_popup_pane_cp1

0xd0e9,	// (0x00031bef) indicator_popup_pane_cp2_ParamLimits

0xd0e9,	// (0x00031bef) indicator_popup_pane_cp2

0xd104,	// (0x00031c0a) popup_query_data_code_window_g1_ParamLimits

0xd104,	// (0x00031c0a) popup_query_data_code_window_g1

0xd117,	// (0x00031c1d) popup_query_data_code_window_t1_ParamLimits

0xd117,	// (0x00031c1d) popup_query_data_code_window_t1

0xd129,	// (0x00031c2f) popup_query_data_code_window_t2_ParamLimits

0xd129,	// (0x00031c2f) popup_query_data_code_window_t2

0xd13b,	// (0x00031c41) popup_query_data_code_window_t3_ParamLimits

0xd13b,	// (0x00031c41) popup_query_data_code_window_t3

0xd151,	// (0x00031c57) popup_query_data_code_window_t4_ParamLimits

0xd151,	// (0x00031c57) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0003406b) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0003406b) popup_query_data_code_window_t

0x2c35,	// (0x0002773b) list_single_midp_graphic_pane_g3

0xd16b,	// (0x00031c71) query_popup_data_pane_cp2_ParamLimits

0xd17e,	// (0x00031c84) query_popup_pane_cp2_ParamLimits

0xd17e,	// (0x00031c84) query_popup_pane_cp2

0xce59,	// (0x0003195f) bg_popup_window_pane_cp11

0x3aa9,	// (0x000285af) heading_pane_cp5

0x3ab1,	// (0x000285b7) listscroll_popup_info_pane

0xce59,	// (0x0003195f) input_focus_pane_cp3

0xd199,	// (0x00031c9f) query_popup_pane_t1

0xd1a7,	// (0x00031cad) list_popup_info_pane_ParamLimits

0xd1a7,	// (0x00031cad) list_popup_info_pane

0xd1b6,	// (0x00031cbc) listscroll_popup_info_pane_g1

0xd1be,	// (0x00031cc4) scroll_pane_cp7

0xd1c8,	// (0x00031cce) popup_info_list_pane_t1_ParamLimits

0xd1c8,	// (0x00031cce) popup_info_list_pane_t1

0xd1e2,	// (0x00031ce8) popup_info_list_pane_t2_ParamLimits

0xd1e2,	// (0x00031ce8) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00034074) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00034074) popup_info_list_pane_t

0xce59,	// (0x0003195f) bg_popup_window_pane_cp12

0x4e5c,	// (0x00029962) find_popup_pane

0xceb5,	// (0x000319bb) bg_popup_window_pane_cp3

0xd1fc,	// (0x00031d02) heading_pane_cp3

0xd20b,	// (0x00031d11) listscroll_popup_graphic_pane

0xce59,	// (0x0003195f) bg_popup_window_pane_cp4

0xa917,	// (0x0002f41d) heading_pane_cp4

0xd21b,	// (0x00031d21) listscroll_popup_colour_pane

0xa921,	// (0x0002f427) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa921,	// (0x0002f427) cell_large_graphic_colour_none_popup_pane

0xa935,	// (0x0002f43b) grid_large_graphic_colour_popup_pane_ParamLimits

0xa935,	// (0x0002f43b) grid_large_graphic_colour_popup_pane

0xa959,	// (0x0002f45f) listscroll_popup_colour_pane_g1_ParamLimits

0xa959,	// (0x0002f45f) listscroll_popup_colour_pane_g1

0xa970,	// (0x0002f476) listscroll_popup_colour_pane_g2_ParamLimits

0xa970,	// (0x0002f476) listscroll_popup_colour_pane_g2

0xa987,	// (0x0002f48d) listscroll_popup_colour_pane_g3_ParamLimits

0xa987,	// (0x0002f48d) listscroll_popup_colour_pane_g3

0xa997,	// (0x0002f49d) listscroll_popup_colour_pane_g4_ParamLimits

0xa997,	// (0x0002f49d) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00034079) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00034079) listscroll_popup_colour_pane_g

0xd223,	// (0x00031d29) scroll_pane_cp6_ParamLimits

0xd223,	// (0x00031d29) scroll_pane_cp6

0xa9a7,	// (0x0002f4ad) cell_large_graphic_colour_popup_pane_ParamLimits

0xa9a7,	// (0x0002f4ad) cell_large_graphic_colour_popup_pane

0xd235,	// (0x00031d3b) cell_large_graphic_colour_none_popup_pane_t1

0xce59,	// (0x0003195f) grid_highlight_pane_cp5

0xd244,	// (0x00031d4a) cell_large_graphic_colour_popup_pane_g1

0xd24c,	// (0x00031d52) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00034082) cell_large_graphic_colour_popup_pane_g

0xd254,	// (0x00031d5a) cell_large_graphic_colour_popup_pane_g2_copy1

0xd25d,	// (0x00031d63) grid_highlight_pane_cp4

0xd265,	// (0x00031d6b) bg_popup_window_pane_cp8_ParamLimits

0xd265,	// (0x00031d6b) bg_popup_window_pane_cp8

0xd280,	// (0x00031d86) popup_snote_single_text_window_g1_ParamLimits

0xd280,	// (0x00031d86) popup_snote_single_text_window_g1

0xd292,	// (0x00031d98) popup_snote_single_text_window_t1_ParamLimits

0xd292,	// (0x00031d98) popup_snote_single_text_window_t1

0xd2a5,	// (0x00031dab) popup_snote_single_text_window_t2_ParamLimits

0xd2a5,	// (0x00031dab) popup_snote_single_text_window_t2

0xd2b8,	// (0x00031dbe) popup_snote_single_text_window_t3_ParamLimits

0xd2b8,	// (0x00031dbe) popup_snote_single_text_window_t3

0xd2f1,	// (0x00031df7) popup_snote_single_text_window_t4_ParamLimits

0xd2f1,	// (0x00031df7) popup_snote_single_text_window_t4

0xd325,	// (0x00031e2b) popup_snote_single_text_window_t5_ParamLimits

0xd325,	// (0x00031e2b) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00034087) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00034087) popup_snote_single_text_window_t

0xd354,	// (0x00031e5a) bg_popup_window_pane_cp9_ParamLimits

0xd354,	// (0x00031e5a) bg_popup_window_pane_cp9

0xd280,	// (0x00031d86) popup_snote_single_graphic_window_g1_ParamLimits

0xd280,	// (0x00031d86) popup_snote_single_graphic_window_g1

0xd362,	// (0x00031e68) popup_snote_single_graphic_window_g2_ParamLimits

0xd362,	// (0x00031e68) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00034092) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00034092) popup_snote_single_graphic_window_g

0xd36e,	// (0x00031e74) popup_snote_single_graphic_window_t1_ParamLimits

0xd36e,	// (0x00031e74) popup_snote_single_graphic_window_t1

0xd381,	// (0x00031e87) popup_snote_single_graphic_window_t2_ParamLimits

0xd381,	// (0x00031e87) popup_snote_single_graphic_window_t2

0xd394,	// (0x00031e9a) popup_snote_single_graphic_window_t3_ParamLimits

0xd394,	// (0x00031e9a) popup_snote_single_graphic_window_t3

0xd3cd,	// (0x00031ed3) popup_snote_single_graphic_window_t4_ParamLimits

0xd3cd,	// (0x00031ed3) popup_snote_single_graphic_window_t4

0xd401,	// (0x00031f07) popup_snote_single_graphic_window_t5_ParamLimits

0xd401,	// (0x00031f07) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00034097) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00034097) popup_snote_single_graphic_window_t

0x4d9a,	// (0x000298a0) grid_graphic_popup_pane_ParamLimits

0x4d9a,	// (0x000298a0) grid_graphic_popup_pane

0x4dc8,	// (0x000298ce) listscroll_popup_graphic_pane_g1_ParamLimits

0x4dc8,	// (0x000298ce) listscroll_popup_graphic_pane_g1

0xc1f2,	// (0x00030cf8) listscroll_popup_graphic_pane_g2_ParamLimits

0xc1f2,	// (0x00030cf8) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x0003448c) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x0003448c) listscroll_popup_graphic_pane_g

0x4df0,	// (0x000298f6) scroll_pane_cp5

0xc1aa,	// (0x00030cb0) cell_graphic_popup_pane_ParamLimits

0xc1aa,	// (0x00030cb0) cell_graphic_popup_pane

0x4d13,	// (0x00029819) cell_graphic_popup_pane_g1

0x4d1b,	// (0x00029821) cell_graphic_popup_pane_g2

0xd254,	// (0x00031d5a) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00034485) cell_graphic_popup_pane_g

0x4d24,	// (0x0002982a) cell_graphic_popup_pane_t2

0xd25d,	// (0x00031d63) grid_highlight_pane_cp3

0xd442,	// (0x00031f48) list_gen_pane_ParamLimits

0xd442,	// (0x00031f48) list_gen_pane

0xd46a,	// (0x00031f70) scroll_pane

0xc161,	// (0x00030c67) bg_list_pane_g1_ParamLimits

0xc161,	// (0x00030c67) bg_list_pane_g1

0x4c88,	// (0x0002978e) bg_list_pane_g2_ParamLimits

0x4c88,	// (0x0002978e) bg_list_pane_g2

0x4c9d,	// (0x000297a3) bg_list_pane_g3_ParamLimits

0x4c9d,	// (0x000297a3) bg_list_pane_g3

0x4cb1,	// (0x000297b7) bg_list_pane_g4_ParamLimits

0x4cb1,	// (0x000297b7) bg_list_pane_g4

0xc17e,	// (0x00030c84) bg_list_pane_g5_ParamLimits

0xc17e,	// (0x00030c84) bg_list_pane_g5

0x0004,

0xf974,	// (0x0003447a) bg_list_pane_g_ParamLimits

0xf974,	// (0x0003447a) bg_list_pane_g

0xc0f4,	// (0x00030bfa) list_double2_graphic_large_graphic_pane_ParamLimits

0xc0f4,	// (0x00030bfa) list_double2_graphic_large_graphic_pane

0xc0f4,	// (0x00030bfa) list_double2_graphic_pane_ParamLimits

0xc0f4,	// (0x00030bfa) list_double2_graphic_pane

0xc0f4,	// (0x00030bfa) list_double2_large_graphic_pane_ParamLimits

0xc0f4,	// (0x00030bfa) list_double2_large_graphic_pane

0xc0f4,	// (0x00030bfa) list_double2_pane_ParamLimits

0xc0f4,	// (0x00030bfa) list_double2_pane

0xc0f4,	// (0x00030bfa) list_double_graphic_heading_pane_ParamLimits

0xc0f4,	// (0x00030bfa) list_double_graphic_heading_pane

0xc0f4,	// (0x00030bfa) list_double_graphic_pane_ParamLimits

0xc0f4,	// (0x00030bfa) list_double_graphic_pane

0xc0f4,	// (0x00030bfa) list_double_heading_pane_ParamLimits

0xc0f4,	// (0x00030bfa) list_double_heading_pane

0xc0f4,	// (0x00030bfa) list_double_large_graphic_pane_ParamLimits

0xc0f4,	// (0x00030bfa) list_double_large_graphic_pane

0xc0f4,	// (0x00030bfa) list_double_number_pane_ParamLimits

0xc0f4,	// (0x00030bfa) list_double_number_pane

0xc0f4,	// (0x00030bfa) list_double_pane_ParamLimits

0xc0f4,	// (0x00030bfa) list_double_pane

0xc0f4,	// (0x00030bfa) list_double_time_pane_ParamLimits

0xc0f4,	// (0x00030bfa) list_double_time_pane

0xc0f4,	// (0x00030bfa) list_setting_number_pane_ParamLimits

0xc0f4,	// (0x00030bfa) list_setting_number_pane

0xc0f4,	// (0x00030bfa) list_setting_pane_ParamLimits

0xc0f4,	// (0x00030bfa) list_setting_pane

0xc109,	// (0x00030c0f) list_single_2graphic_pane_ParamLimits

0xc109,	// (0x00030c0f) list_single_2graphic_pane

0xc109,	// (0x00030c0f) list_single_graphic_heading_pane_ParamLimits

0xc109,	// (0x00030c0f) list_single_graphic_heading_pane

0xc109,	// (0x00030c0f) list_single_graphic_pane_ParamLimits

0xc109,	// (0x00030c0f) list_single_graphic_pane

0xc109,	// (0x00030c0f) list_single_heading_pane_ParamLimits

0xc109,	// (0x00030c0f) list_single_heading_pane

0xc109,	// (0x00030c0f) list_single_large_graphic_pane_ParamLimits

0xc109,	// (0x00030c0f) list_single_large_graphic_pane

0xc109,	// (0x00030c0f) list_single_number_heading_pane_ParamLimits

0xc109,	// (0x00030c0f) list_single_number_heading_pane

0xc109,	// (0x00030c0f) list_single_number_pane_ParamLimits

0xc109,	// (0x00030c0f) list_single_number_pane

0xc109,	// (0x00030c0f) list_single_pane_ParamLimits

0xc109,	// (0x00030c0f) list_single_pane

0xce59,	// (0x0003195f) list_highlight_pane_cp1

0xea45,	// (0x0003354b) list_single_pane_g1_ParamLimits

0xea45,	// (0x0003354b) list_single_pane_g1

0xea51,	// (0x00033557) list_single_pane_g2_ParamLimits

0xea51,	// (0x00033557) list_single_pane_g2

0x0001,

0xf5a3,	// (0x000340a9) list_single_pane_g_ParamLimits

0xf5a3,	// (0x000340a9) list_single_pane_g

0xed30,	// (0x00033836) list_single_pane_t1_ParamLimits

0xed30,	// (0x00033836) list_single_pane_t1

0xea45,	// (0x0003354b) list_single_number_pane_g1_ParamLimits

0xea45,	// (0x0003354b) list_single_number_pane_g1

0xea51,	// (0x00033557) list_single_number_pane_g2_ParamLimits

0xea51,	// (0x00033557) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x000340a9) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x000340a9) list_single_number_pane_g

0xec5b,	// (0x00033761) list_single_number_pane_t1_ParamLimits

0xec5b,	// (0x00033761) list_single_number_pane_t1

0xa1c9,	// (0x0002eccf) list_single_number_pane_t2_ParamLimits

0xa1c9,	// (0x0002eccf) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0003443b) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0003443b) list_single_number_pane_t

0x9bca,	// (0x0002e6d0) list_single_graphic_pane_g1_ParamLimits

0x9bca,	// (0x0002e6d0) list_single_graphic_pane_g1

0xea45,	// (0x0003354b) list_single_graphic_pane_g2_ParamLimits

0xea45,	// (0x0003354b) list_single_graphic_pane_g2

0xea51,	// (0x00033557) list_single_graphic_pane_g3_ParamLimits

0xea51,	// (0x00033557) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000340a2) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000340a2) list_single_graphic_pane_g

0x9bd6,	// (0x0002e6dc) list_single_graphic_pane_t1_ParamLimits

0x9bd6,	// (0x0002e6dc) list_single_graphic_pane_t1

0xea45,	// (0x0003354b) list_single_heading_pane_g1_ParamLimits

0xea45,	// (0x0003354b) list_single_heading_pane_g1

0xea51,	// (0x00033557) list_single_heading_pane_g2_ParamLimits

0xea51,	// (0x00033557) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000340a9) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000340a9) list_single_heading_pane_g

0x9bec,	// (0x0002e6f2) list_single_heading_pane_t1_ParamLimits

0x9bec,	// (0x0002e6f2) list_single_heading_pane_t1

0x9c02,	// (0x0002e708) list_single_heading_pane_t2_ParamLimits

0x9c02,	// (0x0002e708) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x000340ae) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x000340ae) list_single_heading_pane_t

0xea45,	// (0x0003354b) list_single_number_heading_pane_g1_ParamLimits

0xea45,	// (0x0003354b) list_single_number_heading_pane_g1

0xea51,	// (0x00033557) list_single_number_heading_pane_g2_ParamLimits

0xea51,	// (0x00033557) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x000340a9) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x000340a9) list_single_number_heading_pane_g

0x9bec,	// (0x0002e6f2) list_single_number_heading_pane_t1_ParamLimits

0x9bec,	// (0x0002e6f2) list_single_number_heading_pane_t1

0xea5d,	// (0x00033563) list_single_number_heading_pane_t2_ParamLimits

0xea5d,	// (0x00033563) list_single_number_heading_pane_t2

0xea6f,	// (0x00033575) list_single_number_heading_pane_t3_ParamLimits

0xea6f,	// (0x00033575) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x000340b3) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x000340b3) list_single_number_heading_pane_t

0xea81,	// (0x00033587) list_single_graphic_heading_pane_g1_ParamLimits

0xea81,	// (0x00033587) list_single_graphic_heading_pane_g1

0x9c14,	// (0x0002e71a) list_single_graphic_heading_pane_g4_ParamLimits

0x9c14,	// (0x0002e71a) list_single_graphic_heading_pane_g4

0xea51,	// (0x00033557) list_single_graphic_heading_pane_g5_ParamLimits

0xea51,	// (0x00033557) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x000340ba) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x000340ba) list_single_graphic_heading_pane_g

0x9bec,	// (0x0002e6f2) list_single_graphic_heading_pane_t1_ParamLimits

0x9bec,	// (0x0002e6f2) list_single_graphic_heading_pane_t1

0x9c25,	// (0x0002e72b) list_single_graphic_heading_pane_t2_ParamLimits

0x9c25,	// (0x0002e72b) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x000340c1) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x000340c1) list_single_graphic_heading_pane_t

0xea8d,	// (0x00033593) list_single_large_graphic_pane_g1_ParamLimits

0xea8d,	// (0x00033593) list_single_large_graphic_pane_g1

0xea45,	// (0x0003354b) list_single_large_graphic_pane_g2_ParamLimits

0xea45,	// (0x0003354b) list_single_large_graphic_pane_g2

0xea51,	// (0x00033557) list_single_large_graphic_pane_g3_ParamLimits

0xea51,	// (0x00033557) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x000340c6) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x000340c6) list_single_large_graphic_pane_g

0x3c66,	// (0x0002876c) wait_border_pane_g2_copy1

0x9c37,	// (0x0002e73d) list_single_large_graphic_pane_g4_cp2

0xea99,	// (0x0003359f) list_single_large_graphic_pane_t1_ParamLimits

0xea99,	// (0x0003359f) list_single_large_graphic_pane_t1

0xeaaf,	// (0x000335b5) list_double_pane_g1_ParamLimits

0xeaaf,	// (0x000335b5) list_double_pane_g1

0xeabb,	// (0x000335c1) list_double_pane_g2_ParamLimits

0xeabb,	// (0x000335c1) list_double_pane_g2

0x0001,

0xf5c7,	// (0x000340cd) list_double_pane_g_ParamLimits

0xf5c7,	// (0x000340cd) list_double_pane_g

0x9c3f,	// (0x0002e745) list_double_pane_t1_ParamLimits

0x9c3f,	// (0x0002e745) list_double_pane_t1

0x9c55,	// (0x0002e75b) list_double_pane_t2_ParamLimits

0x9c55,	// (0x0002e75b) list_double_pane_t2

0x0001,

0xf5cc,	// (0x000340d2) list_double_pane_t_ParamLimits

0xf5cc,	// (0x000340d2) list_double_pane_t

0x9c67,	// (0x0002e76d) list_double2_pane_g1_ParamLimits

0x9c67,	// (0x0002e76d) list_double2_pane_g1

0x9c78,	// (0x0002e77e) list_double2_pane_g2_ParamLimits

0x9c78,	// (0x0002e77e) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x000340d7) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x000340d7) list_double2_pane_g

0x9c84,	// (0x0002e78a) list_double2_pane_t1_ParamLimits

0x9c84,	// (0x0002e78a) list_double2_pane_t1

0x9c9a,	// (0x0002e7a0) list_double2_pane_t2_ParamLimits

0x9c9a,	// (0x0002e7a0) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x000340dc) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x000340dc) list_double2_pane_t

0xeaaf,	// (0x000335b5) list_double_number_pane_g1_ParamLimits

0xeaaf,	// (0x000335b5) list_double_number_pane_g1

0xeabb,	// (0x000335c1) list_double_number_pane_g2_ParamLimits

0xeabb,	// (0x000335c1) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x000340cd) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x000340cd) list_double_number_pane_g

0x9cac,	// (0x0002e7b2) list_double_number_pane_t1_ParamLimits

0x9cac,	// (0x0002e7b2) list_double_number_pane_t1

0x9cbe,	// (0x0002e7c4) list_double_number_pane_t2_ParamLimits

0x9cbe,	// (0x0002e7c4) list_double_number_pane_t2

0x9cd4,	// (0x0002e7da) list_double_number_pane_t3_ParamLimits

0x9cd4,	// (0x0002e7da) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x000340e1) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x000340e1) list_double_number_pane_t

0x9ce6,	// (0x0002e7ec) list_double_graphic_pane_g1_ParamLimits

0x9ce6,	// (0x0002e7ec) list_double_graphic_pane_g1

0x9cf2,	// (0x0002e7f8) list_double_graphic_pane_g2_ParamLimits

0x9cf2,	// (0x0002e7f8) list_double_graphic_pane_g2

0x9d01,	// (0x0002e807) list_double_graphic_pane_g3_ParamLimits

0x9d01,	// (0x0002e807) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x000340e8) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x000340e8) list_double_graphic_pane_g

0x9d19,	// (0x0002e81f) list_double_graphic_pane_t1_ParamLimits

0x9d19,	// (0x0002e81f) list_double_graphic_pane_t1

0x9d2f,	// (0x0002e835) list_double_graphic_pane_t2_ParamLimits

0x9d2f,	// (0x0002e835) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x000340f1) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x000340f1) list_double_graphic_pane_t

0x9d41,	// (0x0002e847) list_double2_graphic_pane_g1_ParamLimits

0x9d41,	// (0x0002e847) list_double2_graphic_pane_g1

0x9d4d,	// (0x0002e853) list_double2_graphic_pane_g2_ParamLimits

0x9d4d,	// (0x0002e853) list_double2_graphic_pane_g2

0x9d59,	// (0x0002e85f) list_double2_graphic_pane_g3_ParamLimits

0x9d59,	// (0x0002e85f) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000340f6) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000340f6) list_double2_graphic_pane_g

0x9d65,	// (0x0002e86b) list_double2_graphic_pane_t1_ParamLimits

0x9d65,	// (0x0002e86b) list_double2_graphic_pane_t1

0x9d7b,	// (0x0002e881) list_double2_graphic_pane_t2_ParamLimits

0x9d7b,	// (0x0002e881) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000340fd) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000340fd) list_double2_graphic_pane_t

0x9d8d,	// (0x0002e893) list_double_large_graphic_pane_g1_ParamLimits

0x9d8d,	// (0x0002e893) list_double_large_graphic_pane_g1

0x9dac,	// (0x0002e8b2) list_double_large_graphic_pane_g2_ParamLimits

0x9dac,	// (0x0002e8b2) list_double_large_graphic_pane_g2

0xeabb,	// (0x000335c1) list_double_large_graphic_pane_g3_ParamLimits

0xeabb,	// (0x000335c1) list_double_large_graphic_pane_g3

0x9dbd,	// (0x0002e8c3) list_double_large_graphic_pane_g4_ParamLimits

0x9dbd,	// (0x0002e8c3) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00034102) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00034102) list_double_large_graphic_pane_g

0x9dd0,	// (0x0002e8d6) list_double_large_graphic_pane_t1_ParamLimits

0x9dd0,	// (0x0002e8d6) list_double_large_graphic_pane_t1

0x9de9,	// (0x0002e8ef) list_double_large_graphic_pane_t2_ParamLimits

0x9de9,	// (0x0002e8ef) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0003410d) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0003410d) list_double_large_graphic_pane_t

0x9dfb,	// (0x0002e901) list_double2_large_graphic_pane_g1_ParamLimits

0x9dfb,	// (0x0002e901) list_double2_large_graphic_pane_g1

0x9c67,	// (0x0002e76d) list_double2_large_graphic_pane_g2_ParamLimits

0x9c67,	// (0x0002e76d) list_double2_large_graphic_pane_g2

0x9c78,	// (0x0002e77e) list_double2_large_graphic_pane_g3_ParamLimits

0x9c78,	// (0x0002e77e) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00034112) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00034112) list_double2_large_graphic_pane_g

0x9e07,	// (0x0002e90d) list_double2_large_graphic_pane_t1_ParamLimits

0x9e07,	// (0x0002e90d) list_double2_large_graphic_pane_t1

0x9e1d,	// (0x0002e923) list_double2_large_graphic_pane_t2_ParamLimits

0x9e1d,	// (0x0002e923) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00034119) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00034119) list_double2_large_graphic_pane_t

0x9e2f,	// (0x0002e935) list_double_heading_pane_g1_ParamLimits

0x9e2f,	// (0x0002e935) list_double_heading_pane_g1

0x9e40,	// (0x0002e946) list_double_heading_pane_g2_ParamLimits

0x9e40,	// (0x0002e946) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0003411e) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0003411e) list_double_heading_pane_g

0x9e4c,	// (0x0002e952) list_double_heading_pane_t1_ParamLimits

0x9e4c,	// (0x0002e952) list_double_heading_pane_t1

0x9c9a,	// (0x0002e7a0) list_double_heading_pane_t2_ParamLimits

0x9c9a,	// (0x0002e7a0) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00034123) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00034123) list_double_heading_pane_t

0x9e62,	// (0x0002e968) list_double_graphic_heading_pane_g1_ParamLimits

0x9e62,	// (0x0002e968) list_double_graphic_heading_pane_g1

0x9e2f,	// (0x0002e935) list_double_graphic_heading_pane_g2_ParamLimits

0x9e2f,	// (0x0002e935) list_double_graphic_heading_pane_g2

0x9e40,	// (0x0002e946) list_double_graphic_heading_pane_g3_ParamLimits

0x9e40,	// (0x0002e946) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00034128) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00034128) list_double_graphic_heading_pane_g

0x9e6e,	// (0x0002e974) list_double_graphic_heading_pane_t1_ParamLimits

0x9e6e,	// (0x0002e974) list_double_graphic_heading_pane_t1

0x9d7b,	// (0x0002e881) list_double_graphic_heading_pane_t2_ParamLimits

0x9d7b,	// (0x0002e881) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003412f) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003412f) list_double_graphic_heading_pane_t

0x9dac,	// (0x0002e8b2) list_double_time_pane_g1_ParamLimits

0x9dac,	// (0x0002e8b2) list_double_time_pane_g1

0xeabb,	// (0x000335c1) list_double_time_pane_g2_ParamLimits

0xeabb,	// (0x000335c1) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00034134) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00034134) list_double_time_pane_g

0x9e84,	// (0x0002e98a) list_double_time_pane_t1_ParamLimits

0x9e84,	// (0x0002e98a) list_double_time_pane_t1

0x9e9a,	// (0x0002e9a0) list_double_time_pane_t2_ParamLimits

0x9e9a,	// (0x0002e9a0) list_double_time_pane_t2

0x9eac,	// (0x0002e9b2) list_double_time_pane_t3_ParamLimits

0x9eac,	// (0x0002e9b2) list_double_time_pane_t3

0x9ebe,	// (0x0002e9c4) list_double_time_pane_t4_ParamLimits

0x9ebe,	// (0x0002e9c4) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00034139) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00034139) list_double_time_pane_t

0x9ed0,	// (0x0002e9d6) list_setting_pane_g1_ParamLimits

0x9ed0,	// (0x0002e9d6) list_setting_pane_g1

0x9e40,	// (0x0002e946) list_setting_pane_g2_ParamLimits

0x9e40,	// (0x0002e946) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00034142) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00034142) list_setting_pane_g

0x9edc,	// (0x0002e9e2) list_setting_pane_t1_ParamLimits

0x9edc,	// (0x0002e9e2) list_setting_pane_t1

0x9ef3,	// (0x0002e9f9) list_setting_pane_t2_ParamLimits

0x9ef3,	// (0x0002e9f9) list_setting_pane_t2

0x0002,

0xf641,	// (0x00034147) list_setting_pane_t_ParamLimits

0xf641,	// (0x00034147) list_setting_pane_t

0x9f32,	// (0x0002ea38) set_value_pane_cp_ParamLimits

0x9f32,	// (0x0002ea38) set_value_pane_cp

0x9f40,	// (0x0002ea46) list_setting_number_pane_g1_ParamLimits

0x9f40,	// (0x0002ea46) list_setting_number_pane_g1

0x9f4c,	// (0x0002ea52) list_setting_number_pane_g2_ParamLimits

0x9f4c,	// (0x0002ea52) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0003414e) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0003414e) list_setting_number_pane_g

0x9f58,	// (0x0002ea5e) list_setting_number_pane_t1_ParamLimits

0x9f58,	// (0x0002ea5e) list_setting_number_pane_t1

0x9f6c,	// (0x0002ea72) list_setting_number_pane_t2_ParamLimits

0x9f6c,	// (0x0002ea72) list_setting_number_pane_t2

0x9f83,	// (0x0002ea89) list_setting_number_pane_t3_ParamLimits

0x9f83,	// (0x0002ea89) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x00034153) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x00034153) list_setting_number_pane_t

0x9f32,	// (0x0002ea38) set_value_pane_ParamLimits

0x9f32,	// (0x0002ea38) set_value_pane

0xd49e,	// (0x00031fa4) bg_set_opt_pane_ParamLimits

0xd49e,	// (0x00031fa4) bg_set_opt_pane

0xeadc,	// (0x000335e2) set_value_pane_t1

0xd4bf,	// (0x00031fc5) slider_set_pane_cp3

0xd4c8,	// (0x00031fce) volume_small_pane_cp

0xd4d1,	// (0x00031fd7) list_form_gen_pane

0xd4da,	// (0x00031fe0) scroll_pane_cp8

0x9fc6,	// (0x0002eacc) form_field_data_pane_ParamLimits

0x9fc6,	// (0x0002eacc) form_field_data_pane

0x9fe1,	// (0x0002eae7) form_field_data_wide_pane_ParamLimits

0x9fe1,	// (0x0002eae7) form_field_data_wide_pane

0xeafa,	// (0x00033600) form_field_popup_pane_ParamLimits

0xeafa,	// (0x00033600) form_field_popup_pane

0xa003,	// (0x0002eb09) form_field_popup_wide_pane_ParamLimits

0xa003,	// (0x0002eb09) form_field_popup_wide_pane

0xeb1c,	// (0x00033622) form_field_slider_pane_ParamLimits

0xeb1c,	// (0x00033622) form_field_slider_pane

0xeb2f,	// (0x00033635) form_field_slider_wide_pane_ParamLimits

0xeb2f,	// (0x00033635) form_field_slider_wide_pane

0xd4eb,	// (0x00031ff1) data_form_pane

0xa02e,	// (0x0002eb34) form_field_data_pane_t1

0xd4f7,	// (0x00031ffd) input_focus_pane

0xeb42,	// (0x00033648) data_form_wide_pane

0xeb5f,	// (0x00033665) form_field_data_wide_pane_t1

0xd272,	// (0x00031d78) input_focus_pane_cp6

0xa048,	// (0x0002eb4e) form_field_popup_pane_t1

0xd4f7,	// (0x00031ffd) input_focus_pane_cp7

0xd525,	// (0x0003202b) list_form_pane

0xeb89,	// (0x0003368f) form_field_popup_wide_pane_t1

0xd4f7,	// (0x00031ffd) input_focus_pane_cp8

0xd531,	// (0x00032037) list_form_wide_pane

0xa06a,	// (0x0002eb70) form_field_slider_pane_t1_ParamLimits

0xa06a,	// (0x0002eb70) form_field_slider_pane_t1

0xa082,	// (0x0002eb88) form_field_slider_pane_t2_ParamLimits

0xa082,	// (0x0002eb88) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x00034163) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x00034163) form_field_slider_pane_t

0xcea7,	// (0x000319ad) input_focus_pane_cp9_ParamLimits

0xcea7,	// (0x000319ad) input_focus_pane_cp9

0xa097,	// (0x0002eb9d) slider_cont_pane_ParamLimits

0xa097,	// (0x0002eb9d) slider_cont_pane

0xd53d,	// (0x00032043) form_field_slider_wide_pane_t1_ParamLimits

0xd53d,	// (0x00032043) form_field_slider_wide_pane_t1

0xeb9e,	// (0x000336a4) form_field_slider_wide_pane_t2_ParamLimits

0xeb9e,	// (0x000336a4) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x00034168) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x00034168) form_field_slider_wide_pane_t

0xcea7,	// (0x000319ad) input_focus_pane_cp10_ParamLimits

0xcea7,	// (0x000319ad) input_focus_pane_cp10

0xa0ab,	// (0x0002ebb1) slider_cont_pane_cp1_ParamLimits

0xa0ab,	// (0x0002ebb1) slider_cont_pane_cp1

0xa0bf,	// (0x0002ebc5) slider_form_pane_cp

0xd54f,	// (0x00032055) input_focus_pane_g1

0xd557,	// (0x0003205d) input_focus_pane_g2

0xd55f,	// (0x00032065) input_focus_pane_g3

0xd567,	// (0x0003206d) input_focus_pane_g4

0xd56f,	// (0x00032075) input_focus_pane_g5

0xd577,	// (0x0003207d) input_focus_pane_g6

0xd57f,	// (0x00032085) input_focus_pane_g7

0xd587,	// (0x0003208d) input_focus_pane_g8

0xd58f,	// (0x00032095) input_focus_pane_g9

0xce4f,	// (0x00031955) input_focus_pane_g10

0x0009,

0xf667,	// (0x0003416d) input_focus_pane_g

0x3c6f,	// (0x00028775) wait_border_pane_g3_copy1

0xa0c7,	// (0x0002ebcd) data_form_pane_t1

0xce4f,	// (0x00031955) wait_anim_pane_g1_copy1

0xa1db,	// (0x0002ece1) data_form_wide_pane_t1

0xebb0,	// (0x000336b6) list_form_graphic_pane_cp_ParamLimits

0xebb0,	// (0x000336b6) list_form_graphic_pane_cp

0x4bc6,	// (0x000296cc) slider_form_pane_g1

0x4bcf,	// (0x000296d5) slider_form_pane_g2

0x0006,

0xf965,	// (0x0003446b) slider_form_pane_g

0xebb0,	// (0x000336b6) list_form_graphic_pane_ParamLimits

0xebb0,	// (0x000336b6) list_form_graphic_pane

0xebc2,	// (0x000336c8) list_form_graphic_pane_g1

0xebca,	// (0x000336d0) list_form_graphic_pane_t1_ParamLimits

0xebca,	// (0x000336d0) list_form_graphic_pane_t1

0xceb5,	// (0x000319bb) list_highlight_pane_cp5_ParamLimits

0xceb5,	// (0x000319bb) list_highlight_pane_cp5

0xa0e1,	// (0x0002ebe7) find_pane_g1

0xd597,	// (0x0003209d) input_find_pane

0xa0ea,	// (0x0002ebf0) input_find_pane_g1_ParamLimits

0xa0ea,	// (0x0002ebf0) input_find_pane_g1

0xa0f6,	// (0x0002ebfc) input_find_pane_t1_ParamLimits

0xa0f6,	// (0x0002ebfc) input_find_pane_t1

0xa10b,	// (0x0002ec11) input_find_pane_t2_ParamLimits

0xa10b,	// (0x0002ec11) input_find_pane_t2

0x0001,

0xf67c,	// (0x00034182) input_find_pane_t_ParamLimits

0xf67c,	// (0x00034182) input_find_pane_t

0xd5a0,	// (0x000320a6) input_focus_pane_cp5_ParamLimits

0xd5a0,	// (0x000320a6) input_focus_pane_cp5

0xd5b3,	// (0x000320b9) bg_popup_window_pane_cp2_ParamLimits

0xd5b3,	// (0x000320b9) bg_popup_window_pane_cp2

0xd5c0,	// (0x000320c6) listscroll_menu_pane_ParamLimits

0xd5c0,	// (0x000320c6) listscroll_menu_pane

0xa9de,	// (0x0002f4e4) popup_submenu_window_ParamLimits

0xa9de,	// (0x0002f4e4) popup_submenu_window

0xd5cc,	// (0x000320d2) find_popup_pane_g1

0xd5d4,	// (0x000320da) input_popup_find_pane_cp

0xd5de,	// (0x000320e4) input_focus_pane_cp4_ParamLimits

0xd5de,	// (0x000320e4) input_focus_pane_cp4

0xd5ec,	// (0x000320f2) input_popup_find_pane_t1_ParamLimits

0xd5ec,	// (0x000320f2) input_popup_find_pane_t1

0xce59,	// (0x0003195f) bg_popup_sub_pane_cp

0xd61a,	// (0x00032120) listscroll_popup_sub_pane

0xd622,	// (0x00032128) list_submenu_pane_ParamLimits

0xd622,	// (0x00032128) list_submenu_pane

0xd633,	// (0x00032139) scroll_pane_cp4

0xd63b,	// (0x00032141) list_single_popup_submenu_pane_ParamLimits

0xd63b,	// (0x00032141) list_single_popup_submenu_pane

0xd650,	// (0x00032156) list_single_popup_submenu_pane_g1

0xd658,	// (0x0003215e) list_single_popup_submenu_pane_t1_ParamLimits

0xd658,	// (0x0003215e) list_single_popup_submenu_pane_t1

0xcea7,	// (0x000319ad) bg_active_tab_pane_cp1_ParamLimits

0xcea7,	// (0x000319ad) bg_active_tab_pane_cp1

0xaa1c,	// (0x0002f522) tabs_2_active_pane_g1

0xaa24,	// (0x0002f52a) tabs_2_active_pane_t1

0xcea7,	// (0x000319ad) bg_passive_tab_pane_cp1_ParamLimits

0xcea7,	// (0x000319ad) bg_passive_tab_pane_cp1

0xaa1c,	// (0x0002f522) tabs_2_passive_pane_g1

0xaa24,	// (0x0002f52a) tabs_2_passive_pane_t1

0xceb5,	// (0x000319bb) bg_active_tab_pane_cp4

0xaa36,	// (0x0002f53c) tabs_2_long_active_pane_t1

0x313d,	// (0x00027c43) bg_passive_tab_pane_cp4

0x1728,	// (0x0002622e) list_single_midp_graphic_pane_g4_ParamLimits

0xceb5,	// (0x000319bb) bg_active_tab_pane_cp5

0xaa49,	// (0x0002f54f) tabs_3_long_active_pane_t1

0x313d,	// (0x00027c43) bg_passive_tab_pane_cp5

0x1728,	// (0x0002622e) list_single_midp_graphic_pane_g4

0xceb5,	// (0x000319bb) bg_popup_window_pane_cp13_ParamLimits

0xceb5,	// (0x000319bb) bg_popup_window_pane_cp13

0x0273,	// (0x00024d79) listscroll_popup_fast_pane_ParamLimits

0x0273,	// (0x00024d79) listscroll_popup_fast_pane

0x0282,	// (0x00024d88) grid_popup_fast_pane_ParamLimits

0x0282,	// (0x00024d88) grid_popup_fast_pane

0x0294,	// (0x00024d9a) scroll_pane_cp9_ParamLimits

0x0294,	// (0x00024d9a) scroll_pane_cp9

0x6516,	// (0x0002b01c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6516,	// (0x0002b01c) list_single_graphic_hl_pane_t1_cp2

0x02b8,	// (0x00024dbe) input_focus_pane_cp20_ParamLimits

0x02b8,	// (0x00024dbe) input_focus_pane_cp20

0x02c6,	// (0x00024dcc) query_popup_data_pane_t1_ParamLimits

0x02c6,	// (0x00024dcc) query_popup_data_pane_t1

0x02d9,	// (0x00024ddf) query_popup_data_pane_t2_ParamLimits

0x02d9,	// (0x00024ddf) query_popup_data_pane_t2

0x031f,	// (0x00024e25) query_popup_data_pane_t3_ParamLimits

0x031f,	// (0x00024e25) query_popup_data_pane_t3

0x0360,	// (0x00024e66) query_popup_data_pane_t4_ParamLimits

0x0360,	// (0x00024e66) query_popup_data_pane_t4

0x039c,	// (0x00024ea2) query_popup_data_pane_t5_ParamLimits

0x039c,	// (0x00024ea2) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x00034187) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x00034187) query_popup_data_pane_t

0xd54f,	// (0x00032055) bg_set_opt_pane_g1

0xd557,	// (0x0003205d) bg_set_opt_pane_g2

0xd55f,	// (0x00032065) bg_set_opt_pane_g3

0xd567,	// (0x0003206d) bg_set_opt_pane_g4

0xd56f,	// (0x00032075) bg_set_opt_pane_g5

0xd577,	// (0x0003207d) bg_set_opt_pane_g6

0xd57f,	// (0x00032085) bg_set_opt_pane_g7

0xd587,	// (0x0003208d) bg_set_opt_pane_g8

0xd58f,	// (0x00032095) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x00034192) bg_set_opt_pane_g

0x0c27,	// (0x0002572d) control_top_pane_stacon_ParamLimits

0x0c27,	// (0x0002572d) control_top_pane_stacon

0x0c7a,	// (0x00025780) signal_pane_stacon_ParamLimits

0x0c7a,	// (0x00025780) signal_pane_stacon

0x0c9f,	// (0x000257a5) stacon_top_pane_g1_ParamLimits

0x0c9f,	// (0x000257a5) stacon_top_pane_g1

0x0cc1,	// (0x000257c7) title_pane_stacon_ParamLimits

0x0cc1,	// (0x000257c7) title_pane_stacon

0x0ceb,	// (0x000257f1) uni_indicator_pane_stacon_ParamLimits

0x0ceb,	// (0x000257f1) uni_indicator_pane_stacon

0x0d00,	// (0x00025806) battery_pane_stacon_ParamLimits

0x0d00,	// (0x00025806) battery_pane_stacon

0x0d44,	// (0x0002584a) control_bottom_pane_stacon_ParamLimits

0x0d44,	// (0x0002584a) control_bottom_pane_stacon

0x0d67,	// (0x0002586d) navi_pane_stacon_ParamLimits

0x0d67,	// (0x0002586d) navi_pane_stacon

0x0d8a,	// (0x00025890) stacon_bottom_pane_g1_ParamLimits

0x0d8a,	// (0x00025890) stacon_bottom_pane_g1

0x03d3,	// (0x00024ed9) aid_levels_signal_lsc_ParamLimits

0x03d3,	// (0x00024ed9) aid_levels_signal_lsc

0x03ea,	// (0x00024ef0) signal_pane_stacon_g1_ParamLimits

0x03ea,	// (0x00024ef0) signal_pane_stacon_g1

0x03fe,	// (0x00024f04) signal_pane_stacon_g2_ParamLimits

0x03fe,	// (0x00024f04) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x000341a5) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x000341a5) signal_pane_stacon_g

0x0440,	// (0x00024f46) title_pane_stacon_t1_ParamLimits

0x0440,	// (0x00024f46) title_pane_stacon_t1

0x0465,	// (0x00024f6b) uni_indicator_pane_stacon_g1

0x046f,	// (0x00024f75) uni_indicator_pane_stacon_g2

0x0479,	// (0x00024f7f) uni_indicator_pane_stacon_g3

0x0483,	// (0x00024f89) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x000341b1) uni_indicator_pane_stacon_g

0x048d,	// (0x00024f93) control_top_pane_stacon_g1

0x0495,	// (0x00024f9b) control_top_pane_stacon_t1_ParamLimits

0x0495,	// (0x00024f9b) control_top_pane_stacon_t1

0x04cc,	// (0x00024fd2) aid_levels_battery_lsc_ParamLimits

0x04cc,	// (0x00024fd2) aid_levels_battery_lsc

0x04e4,	// (0x00024fea) battery_pane_stacon_g1_ParamLimits

0x04e4,	// (0x00024fea) battery_pane_stacon_g1

0x04f7,	// (0x00024ffd) battery_pane_stacon_g2_ParamLimits

0x04f7,	// (0x00024ffd) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x000341ba) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x000341ba) battery_pane_stacon_g

0x0535,	// (0x0002503b) navi_icon_pane_stacon

0x0549,	// (0x0002504f) navi_navi_pane_stacon

0x0535,	// (0x0002503b) navi_text_pane_stacon

0x048d,	// (0x00024f93) control_bottom_pane_stacon_g1

0x055f,	// (0x00025065) control_bottom_pane_stacon_t1_ParamLimits

0x055f,	// (0x00025065) control_bottom_pane_stacon_t1

0xaa5b,	// (0x0002f561) grid_app_pane_ParamLimits

0xaa5b,	// (0x0002f561) grid_app_pane

0xaa93,	// (0x0002f599) scroll_pane_cp15_ParamLimits

0xaa93,	// (0x0002f599) scroll_pane_cp15

0xaaa8,	// (0x0002f5ae) cell_app_pane_ParamLimits

0xaaa8,	// (0x0002f5ae) cell_app_pane

0xaaf5,	// (0x0002f5fb) cell_app_pane_g1_ParamLimits

0xaaf5,	// (0x0002f5fb) cell_app_pane_g1

0x0635,	// (0x0002513b) cell_app_pane_g2_ParamLimits

0x0635,	// (0x0002513b) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x000341bf) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x000341bf) cell_app_pane_g

0xab19,	// (0x0002f61f) cell_app_pane_t1_ParamLimits

0xab19,	// (0x0002f61f) cell_app_pane_t1

0x0658,	// (0x0002515e) grid_highlight_pane_ParamLimits

0x0658,	// (0x0002515e) grid_highlight_pane

0xd54f,	// (0x00032055) cell_highlight_pane_g1

0xd557,	// (0x0003205d) cell_highlight_pane_g2

0xd55f,	// (0x00032065) cell_highlight_pane_g3

0xd567,	// (0x0003206d) cell_highlight_pane_g4

0xd56f,	// (0x00032075) cell_highlight_pane_g5

0xd577,	// (0x0003207d) cell_highlight_pane_g6

0xd57f,	// (0x00032085) cell_highlight_pane_g7

0xd587,	// (0x0003208d) cell_highlight_pane_g8

0xd58f,	// (0x00032095) cell_highlight_pane_g9

0xce4f,	// (0x00031955) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0003416d) cell_highlight_pane_g

0x067c,	// (0x00025182) bg_scroll_pane

0x069b,	// (0x000251a1) scroll_handle_pane

0x06ec,	// (0x000251f2) scroll_bg_pane_g1

0x0701,	// (0x00025207) scroll_bg_pane_g2

0x0719,	// (0x0002521f) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x000341c4) scroll_bg_pane_g

0x072e,	// (0x00025234) scroll_handle_focus_pane_ParamLimits

0x072e,	// (0x00025234) scroll_handle_focus_pane

0x06ec,	// (0x000251f2) scroll_handle_pane_g1

0x073b,	// (0x00025241) scroll_handle_pane_g2

0x0719,	// (0x0002521f) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x000341cb) scroll_handle_pane_g

0xd5de,	// (0x000320e4) bg_popup_sub_pane_cp21_ParamLimits

0xd5de,	// (0x000320e4) bg_popup_sub_pane_cp21

0x074f,	// (0x00025255) popup_fep_japan_predictive_window_t1_ParamLimits

0x074f,	// (0x00025255) popup_fep_japan_predictive_window_t1

0x0766,	// (0x0002526c) popup_fep_japan_predictive_window_t2_ParamLimits

0x0766,	// (0x0002526c) popup_fep_japan_predictive_window_t2

0x0799,	// (0x0002529f) popup_fep_japan_predictive_window_t3_ParamLimits

0x0799,	// (0x0002529f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x000341d2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x000341d2) popup_fep_japan_predictive_window_t

0xce59,	// (0x0003195f) bg_popup_sub_pane_cp23

0x07d0,	// (0x000252d6) listscroll_japin_cand_pane

0x07d8,	// (0x000252de) popup_fep_japan_candidate_window_t1

0x07e6,	// (0x000252ec) candidate_pane_ParamLimits

0x07e6,	// (0x000252ec) candidate_pane

0x07f8,	// (0x000252fe) scroll_pane_cp30

0x0802,	// (0x00025308) list_single_popup_jap_candidate_pane_ParamLimits

0x0802,	// (0x00025308) list_single_popup_jap_candidate_pane

0xce59,	// (0x0003195f) list_highlight_pane_cp30

0x0816,	// (0x0002531c) list_single_popup_jap_candidate_pane_t1

0xab39,	// (0x0002f63f) level_1_signal

0xab4b,	// (0x0002f651) level_2_signal

0xab5e,	// (0x0002f664) level_3_signal

0xab71,	// (0x0002f677) level_4_signal

0xab84,	// (0x0002f68a) level_5_signal

0xab97,	// (0x0002f69d) level_6_signal

0xabaa,	// (0x0002f6b0) level_7_signal

0xab39,	// (0x0002f63f) level_1_battery

0xab4b,	// (0x0002f651) level_2_battery

0xab5e,	// (0x0002f664) level_3_battery

0xab71,	// (0x0002f677) level_4_battery

0xab84,	// (0x0002f68a) level_5_battery

0xab97,	// (0x0002f69d) level_6_battery

0xabaa,	// (0x0002f6b0) level_7_battery

0x08b7,	// (0x000253bd) list_menu_pane_ParamLimits

0x08b7,	// (0x000253bd) list_menu_pane

0x08cd,	// (0x000253d3) scroll_pane_cp25_ParamLimits

0x08cd,	// (0x000253d3) scroll_pane_cp25

0x08e6,	// (0x000253ec) list_double2_graphic_pane_cp2_ParamLimits

0x08e6,	// (0x000253ec) list_double2_graphic_pane_cp2

0x08e6,	// (0x000253ec) list_double2_large_graphic_pane_cp2_ParamLimits

0x08e6,	// (0x000253ec) list_double2_large_graphic_pane_cp2

0x08e6,	// (0x000253ec) list_double2_pane_cp2_ParamLimits

0x08e6,	// (0x000253ec) list_double2_pane_cp2

0x08e6,	// (0x000253ec) list_double_graphic_pane_cp2_ParamLimits

0x08e6,	// (0x000253ec) list_double_graphic_pane_cp2

0x08e6,	// (0x000253ec) list_double_large_graphic_pane_cp2_ParamLimits

0x08e6,	// (0x000253ec) list_double_large_graphic_pane_cp2

0x08e6,	// (0x000253ec) list_double_number_pane_cp2_ParamLimits

0x08e6,	// (0x000253ec) list_double_number_pane_cp2

0x08e6,	// (0x000253ec) list_double_pane_cp2_ParamLimits

0x08e6,	// (0x000253ec) list_double_pane_cp2

0xabbd,	// (0x0002f6c3) list_single_2graphic_pane_cp2_ParamLimits

0xabbd,	// (0x0002f6c3) list_single_2graphic_pane_cp2

0xabbd,	// (0x0002f6c3) list_single_graphic_heading_pane_cp2_ParamLimits

0xabbd,	// (0x0002f6c3) list_single_graphic_heading_pane_cp2

0xabbd,	// (0x0002f6c3) list_single_graphic_pane_cp2_ParamLimits

0xabbd,	// (0x0002f6c3) list_single_graphic_pane_cp2

0xabbd,	// (0x0002f6c3) list_single_heading_pane_cp2_ParamLimits

0xabbd,	// (0x0002f6c3) list_single_heading_pane_cp2

0x0929,	// (0x0002542f) list_single_large_graphic_pane_cp2_ParamLimits

0x0929,	// (0x0002542f) list_single_large_graphic_pane_cp2

0xabbd,	// (0x0002f6c3) list_single_number_heading_pane_cp2_ParamLimits

0xabbd,	// (0x0002f6c3) list_single_number_heading_pane_cp2

0xabbd,	// (0x0002f6c3) list_single_number_pane_cp2_ParamLimits

0xabbd,	// (0x0002f6c3) list_single_number_pane_cp2

0xabd1,	// (0x0002f6d7) list_single_pane_cp2_ParamLimits

0xabd1,	// (0x0002f6d7) list_single_pane_cp2

0x0a0f,	// (0x00025515) bg_popup_sub_pane_cp22

0x0a34,	// (0x0002553a) popup_side_volume_key_window_g1

0x0a5e,	// (0x00025564) popup_side_volume_key_window_t1

0x0a7c,	// (0x00025582) volume_small_pane_cp1

0xcea7,	// (0x000319ad) bg_popup_sub_pane_cp24_ParamLimits

0xcea7,	// (0x000319ad) bg_popup_sub_pane_cp24

0x0a84,	// (0x0002558a) fep_china_uni_candidate_pane_ParamLimits

0x0a84,	// (0x0002558a) fep_china_uni_candidate_pane

0x0a98,	// (0x0002559e) fep_china_uni_entry_pane

0x0aa8,	// (0x000255ae) popup_fep_china_uni_window_g1

0x0ac4,	// (0x000255ca) fep_china_uni_entry_pane_g1

0x0ace,	// (0x000255d4) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x00034203) fep_china_uni_entry_pane_g

0x0ad8,	// (0x000255de) fep_entry_item_pane

0x0ae2,	// (0x000255e8) fep_candidate_item_pane

0x0aea,	// (0x000255f0) fep_china_uni_candidate_pane_g1

0x0af4,	// (0x000255fa) fep_china_uni_candidate_pane_g2

0x0afc,	// (0x00025602) fep_china_uni_candidate_pane_g3

0x0b04,	// (0x0002560a) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x00034208) fep_china_uni_candidate_pane_g

0xce4f,	// (0x00031955) fep_entry_item_pane_g1

0x0b0e,	// (0x00025614) fep_entry_item_pane_t1_ParamLimits

0x0b0e,	// (0x00025614) fep_entry_item_pane_t1

0x0b24,	// (0x0002562a) fep_candidate_item_pane_t1_ParamLimits

0x0b24,	// (0x0002562a) fep_candidate_item_pane_t1

0x0b39,	// (0x0002563f) fep_candidate_item_pane_t2_ParamLimits

0x0b39,	// (0x0002563f) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x00034211) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x00034211) fep_candidate_item_pane_t

0xceb5,	// (0x000319bb) list_highlight_pane_cp31_ParamLimits

0xceb5,	// (0x000319bb) list_highlight_pane_cp31

0x0b4b,	// (0x00025651) level_1_signal_lsc

0x0b54,	// (0x0002565a) level_2_signal_lsc

0x0b5d,	// (0x00025663) level_3_signal_lsc

0x0b66,	// (0x0002566c) level_4_signal_lsc

0x0b6f,	// (0x00025675) level_5_signal_lsc

0x0b78,	// (0x0002567e) level_6_signal_lsc

0x0b81,	// (0x00025687) level_7_signal_lsc

0x0b81,	// (0x00025687) level_1_battery_lsc

0x0b8a,	// (0x00025690) level_2_battery_lsc

0x0b93,	// (0x00025699) level_3_battery_lsc

0x0b9c,	// (0x000256a2) level_4_battery_lsc

0x0ba5,	// (0x000256ab) level_5_battery_lsc

0x0bae,	// (0x000256b4) level_6_battery_lsc

0x0b4b,	// (0x00025651) level_7_battery_lsc

0x0bb7,	// (0x000256bd) scroll_handle_focus_pane_g1

0x0bc0,	// (0x000256c6) scroll_handle_focus_pane_g2

0x0bc9,	// (0x000256cf) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x00034216) scroll_handle_focus_pane_g

0xa120,	// (0x0002ec26) list_single_2graphic_pane_g1_ParamLimits

0xa120,	// (0x0002ec26) list_single_2graphic_pane_g1

0x9c14,	// (0x0002e71a) list_single_2graphic_pane_g2_ParamLimits

0x9c14,	// (0x0002e71a) list_single_2graphic_pane_g2

0xea51,	// (0x00033557) list_single_2graphic_pane_g3_ParamLimits

0xea51,	// (0x00033557) list_single_2graphic_pane_g3

0xa12c,	// (0x0002ec32) list_single_2graphic_pane_g4_ParamLimits

0xa12c,	// (0x0002ec32) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0003421d) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0003421d) list_single_2graphic_pane_g

0xa138,	// (0x0002ec3e) list_single_2graphic_pane_t1_ParamLimits

0xa138,	// (0x0002ec3e) list_single_2graphic_pane_t1

0xa166,	// (0x0002ec6c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa166,	// (0x0002ec6c) list_double2_graphic_large_graphic_pane_g1

0x9c67,	// (0x0002e76d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9c67,	// (0x0002e76d) list_double2_graphic_large_graphic_pane_g2

0x9c78,	// (0x0002e77e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9c78,	// (0x0002e77e) list_double2_graphic_large_graphic_pane_g3

0xa178,	// (0x0002ec7e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa178,	// (0x0002ec7e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x00034226) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x00034226) list_double2_graphic_large_graphic_pane_g

0xa184,	// (0x0002ec8a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa184,	// (0x0002ec8a) list_double2_graphic_large_graphic_pane_t1

0xa19a,	// (0x0002eca0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa19a,	// (0x0002eca0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0003422f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0003422f) list_double2_graphic_large_graphic_pane_t

0x0e4d,	// (0x00025953) popup_fast_swap_window_ParamLimits

0x0e4d,	// (0x00025953) popup_fast_swap_window

0x0e6b,	// (0x00025971) popup_side_volume_key_window

0x2bb5,	// (0x000276bb) stacon_top_pane

0x2bbf,	// (0x000276c5) status_pane_ParamLimits

0x2bbf,	// (0x000276c5) status_pane

0xaca8,	// (0x0002f7ae) status_small_pane

0xce59,	// (0x0003195f) control_pane

0xce59,	// (0x0003195f) stacon_bottom_pane

0xd4da,	// (0x00031fe0) scroll_pane_cp121

0xd4d1,	// (0x00031fd7) set_content_pane

0xac60,	// (0x0002f766) bg_active_tab_pane_g1_cp1

0x0bdb,	// (0x000256e1) bg_active_tab_pane_g2_cp1

0xac69,	// (0x0002f76f) bg_active_tab_pane_g3_cp1

0xac60,	// (0x0002f766) bg_passive_tab_pane_g1_cp1

0x0bdb,	// (0x000256e1) bg_passive_tab_pane_g2_cp1

0xac69,	// (0x0002f76f) bg_passive_tab_pane_g3_cp1

0xac72,	// (0x0002f778) bg_active_tab_pane_g1_cp2

0x0bdb,	// (0x000256e1) bg_active_tab_pane_g2_cp2

0xac7b,	// (0x0002f781) bg_active_tab_pane_g3_cp2

0xac72,	// (0x0002f778) bg_passive_tab_pane_g1_cp2

0x0bdb,	// (0x000256e1) bg_passive_tab_pane_g2_cp2

0xac7b,	// (0x0002f781) bg_passive_tab_pane_g3_cp2

0xac84,	// (0x0002f78a) bg_active_tab_pane_g1_cp3

0x0bdb,	// (0x000256e1) bg_active_tab_pane_g2_cp3

0xac8d,	// (0x0002f793) bg_active_tab_pane_g3_cp3

0xac84,	// (0x0002f78a) bg_passive_tab_pane_g1_cp3

0x0bdb,	// (0x000256e1) bg_passive_tab_pane_g2_cp3

0xac8d,	// (0x0002f793) bg_passive_tab_pane_g3_cp3

0xac96,	// (0x0002f79c) bg_active_tab_pane_g1_cp4

0x0bdb,	// (0x000256e1) bg_active_tab_pane_g2_cp4

0xac9f,	// (0x0002f7a5) bg_active_tab_pane_g3_cp4

0xac96,	// (0x0002f79c) bg_passive_tab_pane_g1_cp4

0x0bdb,	// (0x000256e1) bg_passive_tab_pane_g2_cp4

0xac9f,	// (0x0002f7a5) bg_passive_tab_pane_g3_cp4

0x0da6,	// (0x000258ac) bg_active_tab_pane_g1_cp5

0x0bdb,	// (0x000256e1) bg_active_tab_pane_g2_cp5

0x0daf,	// (0x000258b5) bg_active_tab_pane_g3_cp5

0x0da6,	// (0x000258ac) bg_passive_tab_pane_g1_cp5

0x0bdb,	// (0x000256e1) bg_passive_tab_pane_g2_cp5

0x0daf,	// (0x000258b5) bg_passive_tab_pane_g3_cp5

0x51be,	// (0x00029cc4) list_set_graphic_pane_ParamLimits

0x51be,	// (0x00029cc4) list_set_graphic_pane

0xce59,	// (0x0003195f) bg_set_opt_pane_cp4

0x0dce,	// (0x000258d4) list_set_graphic_pane_g1_ParamLimits

0x0dce,	// (0x000258d4) list_set_graphic_pane_g1

0x0dda,	// (0x000258e0) list_set_graphic_pane_g2_ParamLimits

0x0dda,	// (0x000258e0) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x00034234) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x00034234) list_set_graphic_pane_g

0x0009,

0xfab3,	// (0x000345b9) volume_small_pane_cp_g

0x0dfe,	// (0x00025904) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x0dfe,	// (0x00025904) list_double2_large_graphic_pane_g1_cp2

0x0e0c,	// (0x00025912) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x0e0c,	// (0x00025912) list_double2_large_graphic_pane_g2_cp2

0x0e1d,	// (0x00025923) list_double2_large_graphic_pane_g3_cp2

0x0e25,	// (0x0002592b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0e25,	// (0x0002592b) list_double2_large_graphic_pane_t1_cp2

0x0e3b,	// (0x00025941) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0e3b,	// (0x00025941) list_double2_large_graphic_pane_t2_cp2

0x4753,	// (0x00029259) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4753,	// (0x00029259) list_double_large_graphic_pane_g1_cp2

0x4766,	// (0x0002926c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4766,	// (0x0002926c) list_double_large_graphic_pane_g2_cp2

0x2ce8,	// (0x000277ee) list_double_large_graphic_pane_g3_cp2

0x4777,	// (0x0002927d) list_double_large_graphic_pane_g4_cp

0x477f,	// (0x00029285) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x477f,	// (0x00029285) list_double_large_graphic_pane_t1_cp2

0x4796,	// (0x0002929c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4796,	// (0x0002929c) list_double_large_graphic_pane_t2_cp2

0x2bd8,	// (0x000276de) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2bd8,	// (0x000276de) list_double2_graphic_pane_g1_cp2

0x2be6,	// (0x000276ec) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2be6,	// (0x000276ec) list_double2_graphic_pane_g2_cp2

0x2bf7,	// (0x000276fd) list_double2_graphic_pane_g3_cp2

0x2c01,	// (0x00027707) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2c01,	// (0x00027707) list_double2_graphic_pane_t1_cp2

0x2c17,	// (0x0002771d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2c17,	// (0x0002771d) list_double2_graphic_pane_t2_cp2

0x2c29,	// (0x0002772f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2c29,	// (0x0002772f) list_single_number_heading_pane_g1_cp2

0x2c35,	// (0x0002773b) list_single_number_heading_pane_g2_cp2

0x2c3d,	// (0x00027743) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2c3d,	// (0x00027743) list_single_number_heading_pane_t1_cp2

0x2c53,	// (0x00027759) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2c53,	// (0x00027759) list_single_number_heading_pane_t2_cp2

0x2c67,	// (0x0002776d) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2c67,	// (0x0002776d) list_single_number_heading_pane_t3_cp2

0x2c29,	// (0x0002772f) list_single_heading_pane_g1_cp2_ParamLimits

0x2c29,	// (0x0002772f) list_single_heading_pane_g1_cp2

0x2c35,	// (0x0002773b) list_single_heading_pane_g2_cp2

0x2c3d,	// (0x00027743) list_single_heading_pane_t1_cp2_ParamLimits

0x2c3d,	// (0x00027743) list_single_heading_pane_t1_cp2

0x454d,	// (0x00029053) list_single_heading_pane_t2_cp2_ParamLimits

0x454d,	// (0x00029053) list_single_heading_pane_t2_cp2

0x4495,	// (0x00028f9b) list_double_graphic_pane_g1_cp2_ParamLimits

0x4495,	// (0x00028f9b) list_double_graphic_pane_g1_cp2

0x44a1,	// (0x00028fa7) list_double_graphic_pane_g2_cp2_ParamLimits

0x44a1,	// (0x00028fa7) list_double_graphic_pane_g2_cp2

0x44b0,	// (0x00028fb6) list_double_graphic_pane_g3_cp2

0x44b8,	// (0x00028fbe) list_double_graphic_pane_t1_cp2_ParamLimits

0x44b8,	// (0x00028fbe) list_double_graphic_pane_t1_cp2

0x44ce,	// (0x00028fd4) list_double_graphic_pane_t2_cp2_ParamLimits

0x44ce,	// (0x00028fd4) list_double_graphic_pane_t2_cp2

0x2cdc,	// (0x000277e2) list_double_number_pane_g1_cp2_ParamLimits

0x2cdc,	// (0x000277e2) list_double_number_pane_g1_cp2

0x2ce8,	// (0x000277ee) list_double_number_pane_g2_cp2

0x4459,	// (0x00028f5f) list_double_number_pane_t1_cp2_ParamLimits

0x4459,	// (0x00028f5f) list_double_number_pane_t1_cp2

0x446d,	// (0x00028f73) list_double_number_pane_t2_cp2_ParamLimits

0x446d,	// (0x00028f73) list_double_number_pane_t2_cp2

0x4483,	// (0x00028f89) list_double_number_pane_t3_cp2_ParamLimits

0x4483,	// (0x00028f89) list_double_number_pane_t3_cp2

0x4342,	// (0x00028e48) list_single_graphic_pane_g1_cp2_ParamLimits

0x4342,	// (0x00028e48) list_single_graphic_pane_g1_cp2

0x2d4d,	// (0x00027853) list_single_graphic_pane_g2_cp2_ParamLimits

0x2d4d,	// (0x00027853) list_single_graphic_pane_g2_cp2

0x2d59,	// (0x0002785f) list_single_graphic_pane_g3_cp2

0x4318,	// (0x00028e1e) list_single_graphic_pane_t1_cp2_ParamLimits

0x4318,	// (0x00028e1e) list_single_graphic_pane_t1_cp2

0x2d4d,	// (0x00027853) list_single_number_pane_g1_cp2_ParamLimits

0x2d4d,	// (0x00027853) list_single_number_pane_g1_cp2

0x2d59,	// (0x0002785f) list_single_number_pane_g2_cp2

0x4318,	// (0x00028e1e) list_single_number_pane_t1_cp2_ParamLimits

0x4318,	// (0x00028e1e) list_single_number_pane_t1_cp2

0x432e,	// (0x00028e34) list_single_number_pane_t2_cp2_ParamLimits

0x432e,	// (0x00028e34) list_single_number_pane_t2_cp2

0x0e0c,	// (0x00025912) list_double2_pane_g1_cp2_ParamLimits

0x0e0c,	// (0x00025912) list_double2_pane_g1_cp2

0x0e1d,	// (0x00025923) list_double2_pane_g2_cp2

0x2cb4,	// (0x000277ba) list_double2_pane_t1_cp2_ParamLimits

0x2cb4,	// (0x000277ba) list_double2_pane_t1_cp2

0x2cca,	// (0x000277d0) list_double2_pane_t2_cp2_ParamLimits

0x2cca,	// (0x000277d0) list_double2_pane_t2_cp2

0x2cdc,	// (0x000277e2) list_double_pane_g1_cp2_ParamLimits

0x2cdc,	// (0x000277e2) list_double_pane_g1_cp2

0x2ce8,	// (0x000277ee) list_double_pane_g2_cp2

0x2cf0,	// (0x000277f6) list_double_pane_t1_cp2_ParamLimits

0x2cf0,	// (0x000277f6) list_double_pane_t1_cp2

0x2d06,	// (0x0002780c) list_double_pane_t2_cp2_ParamLimits

0x2d06,	// (0x0002780c) list_double_pane_t2_cp2

0x2d3d,	// (0x00027843) list_single_pane_cp2_g3

0x2d4d,	// (0x00027853) list_single_pane_g1_cp2_ParamLimits

0x2d4d,	// (0x00027853) list_single_pane_g1_cp2

0x2d59,	// (0x0002785f) list_single_pane_g2_cp2

0x2d61,	// (0x00027867) list_single_pane_t1_cp2_ParamLimits

0x2d61,	// (0x00027867) list_single_pane_t1_cp2

0x2d79,	// (0x0002787f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2d79,	// (0x0002787f) list_single_large_graphic_pane_g1_cp2

0x2d87,	// (0x0002788d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2d87,	// (0x0002788d) list_single_large_graphic_pane_g2_cp2

0x2d93,	// (0x00027899) list_single_large_graphic_pane_g3_cp2

0x2d9b,	// (0x000278a1) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2d9b,	// (0x000278a1) list_single_large_graphic_pane_g4_cp1

0x2db5,	// (0x000278bb) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2db5,	// (0x000278bb) list_single_large_graphic_pane_t1_cp2

0x42e2,	// (0x00028de8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x42e2,	// (0x00028de8) list_single_graphic_heading_pane_g1_cp2

0x42af,	// (0x00028db5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x42af,	// (0x00028db5) list_single_graphic_heading_pane_g4_cp2

0x2d59,	// (0x0002785f) list_single_graphic_heading_pane_g5_cp2

0x42ee,	// (0x00028df4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x42ee,	// (0x00028df4) list_single_graphic_heading_pane_t1_cp2

0x4304,	// (0x00028e0a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4304,	// (0x00028e0a) list_single_graphic_heading_pane_t2_cp2

0x42a3,	// (0x00028da9) list_single_2graphic_pane_g1_cp2_ParamLimits

0x42a3,	// (0x00028da9) list_single_2graphic_pane_g1_cp2

0x42af,	// (0x00028db5) list_single_2graphic_pane_g2_cp2_ParamLimits

0x42af,	// (0x00028db5) list_single_2graphic_pane_g2_cp2

0x2d59,	// (0x0002785f) list_single_2graphic_pane_g3_cp2

0x42c0,	// (0x00028dc6) list_single_2graphic_pane_g4_cp2_ParamLimits

0x42c0,	// (0x00028dc6) list_single_2graphic_pane_g4_cp2

0x42cc,	// (0x00028dd2) list_single_2graphic_pane_t1_cp2_ParamLimits

0x42cc,	// (0x00028dd2) list_single_2graphic_pane_t1_cp2

0xce4f,	// (0x00031955) list_highlight_pane_g10_cp1

0x3e7b,	// (0x00028981) list_highlight_pane_g1_cp1

0x3e83,	// (0x00028989) list_highlight_pane_g2_cp1

0x3e8b,	// (0x00028991) list_highlight_pane_g3_cp1

0x3e93,	// (0x00028999) list_highlight_pane_g4_cp1

0x3e9b,	// (0x000289a1) list_highlight_pane_g5_cp1

0x3ea3,	// (0x000289a9) list_highlight_pane_g6_cp1

0x3eab,	// (0x000289b1) list_highlight_pane_g7_cp1

0x3eb3,	// (0x000289b9) list_highlight_pane_g8_cp1

0x3ebb,	// (0x000289c1) list_highlight_pane_g9_cp1

0xbc15,	// (0x0003071b) form_field_slider_pane_t3

0xbc23,	// (0x00030729) form_field_slider_pane_t4

0x3db7,	// (0x000288bd) slider_form_pane_ParamLimits

0x3db7,	// (0x000288bd) slider_form_pane

0xce59,	// (0x0003195f) control_abbreviations

0xce59,	// (0x0003195f) control_conventions

0xce59,	// (0x0003195f) control_definitions

0xce59,	// (0x0003195f) format_table_attribute

0x45a3,	// (0x000290a9) bg_popup_preview_window_pane_g9

0xce59,	// (0x0003195f) format_table_data2

0xce59,	// (0x0003195f) format_table_data3

0xce59,	// (0x0003195f) format_table_data_example

0x0008,

0xce59,	// (0x0003195f) intro_purpose

0xf8c5,	// (0x000343cb) bg_popup_preview_window_pane_g

0xce59,	// (0x0003195f) texts_category

0xce59,	// (0x0003195f) texts_graphics

0x2dcb,	// (0x000278d1) text_digital

0x2dda,	// (0x000278e0) text_primary

0x2de9,	// (0x000278ef) text_primary_small

0x2df8,	// (0x000278fe) text_secondary

0x2e07,	// (0x0002790d) text_title

0x4ce7,	// (0x000297ed) bg_passive_tab_pane_g1_cp3_srt

0x0bdb,	// (0x000256e1) bg_passive_tab_pane_g2_cp3_srt

0x4cf0,	// (0x000297f6) bg_passive_tab_pane_g3_cp3_srt

0xcea7,	// (0x000319ad) bg_active_tab_pane_cp3_srt_ParamLimits

0xcea7,	// (0x000319ad) bg_active_tab_pane_cp3_srt

0x4cf9,	// (0x000297ff) tabs_4_active_pane_srt_g1

0xc194,	// (0x00030c9a) tabs_4_active_pane_srt_t1_ParamLimits

0xc194,	// (0x00030c9a) tabs_4_active_pane_srt_t1

0x4ce7,	// (0x000297ed) bg_active_tab_pane_g1_cp3_copy1

0x0bdb,	// (0x000256e1) bg_active_tab_pane_g2_cp3_copy1

0x4cf0,	// (0x000297f6) bg_active_tab_pane_g3_cp3_copy1

0xceb5,	// (0x000319bb) tabs_2_long_active_pane_srt_ParamLimits

0xceb5,	// (0x000319bb) tabs_2_long_active_pane_srt

0xceb5,	// (0x000319bb) tabs_2_long_passive_pane_srt_ParamLimits

0xceb5,	// (0x000319bb) tabs_2_long_passive_pane_srt

0x313d,	// (0x00027c43) bg_passive_tab_pane_cp4_srt_ParamLimits

0x313d,	// (0x00027c43) bg_passive_tab_pane_cp4_srt

0x49dd,	// (0x000294e3) bg_passive_tab_pane_g1_cp4_srt

0x0bdb,	// (0x000256e1) bg_passive_tab_pane_g2_cp4_srt

0x49e6,	// (0x000294ec) bg_passive_tab_pane_g3_cp4_srt

0xceb5,	// (0x000319bb) bg_active_tab_pane_cp4_srt_ParamLimits

0xceb5,	// (0x000319bb) bg_active_tab_pane_cp4_srt

0xbf5c,	// (0x00030a62) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbf5c,	// (0x00030a62) tabs_2_long_active_pane_srt_t1

0x49dd,	// (0x000294e3) bg_active_tab_pane_g1_cp4_srt

0x0bdb,	// (0x000256e1) bg_active_tab_pane_g2_cp4_srt

0x49e6,	// (0x000294ec) bg_active_tab_pane_g3_cp4_srt

0xcea7,	// (0x000319ad) tabs_3_long_active_pane_srt_ParamLimits

0xcea7,	// (0x000319ad) tabs_3_long_active_pane_srt

0xcea7,	// (0x000319ad) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xcea7,	// (0x000319ad) tabs_3_long_passive_pane_cp_srt

0xcea7,	// (0x000319ad) tabs_3_long_passive_pane_srt_ParamLimits

0xcea7,	// (0x000319ad) tabs_3_long_passive_pane_srt

0x313d,	// (0x00027c43) bg_passive_tab_pane_cp5_srt_ParamLimits

0x313d,	// (0x00027c43) bg_passive_tab_pane_cp5_srt

0x0da6,	// (0x000258ac) bg_passive_tab_pane_g1_cp5_srt

0x0bdb,	// (0x000256e1) bg_passive_tab_pane_g2_cp5_srt

0x0daf,	// (0x000258b5) bg_passive_tab_pane_g3_cp5_srt

0xceb5,	// (0x000319bb) bg_active_tab_pane_cp5_srt_ParamLimits

0xceb5,	// (0x000319bb) bg_active_tab_pane_cp5_srt

0xbf46,	// (0x00030a4c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbf46,	// (0x00030a4c) tabs_3_long_active_pane_srt_t1

0x0da6,	// (0x000258ac) bg_active_tab_pane_g1_cp5_srt

0x0bdb,	// (0x000256e1) bg_active_tab_pane_g2_cp5_srt

0x0daf,	// (0x000258b5) bg_active_tab_pane_g3_cp5_srt

0x49bd,	// (0x000294c3) navi_text_pane_srt_t1

0x49b5,	// (0x000294bb) navi_icon_pane_srt_g1

0x2fdf,	// (0x00027ae5) midp_editing_number_pane_srt

0x2e16,	// (0x0002791c) midp_ticker_pane_srt

0x2fe7,	// (0x00027aed) midp_ticker_pane_srt_g1

0x2fef,	// (0x00027af5) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x00034253) midp_ticker_pane_srt_g

0x2ff7,	// (0x00027afd) midp_ticker_pane_srt_t1

0x49a6,	// (0x000294ac) midp_editing_number_pane_t1_copy1

0xacb3,	// (0x0002f7b9) listscroll_midp_pane

0xacb3,	// (0x0002f7b9) midp_form_pane

0x2e8d,	// (0x00027993) midp_info_popup_window_ParamLimits

0x2e8d,	// (0x00027993) midp_info_popup_window

0xd5de,	// (0x000320e4) bg_popup_sub_pane_cp50_ParamLimits

0xd5de,	// (0x000320e4) bg_popup_sub_pane_cp50

0x3a9d,	// (0x000285a3) listscroll_midp_info_pane_ParamLimits

0x3a9d,	// (0x000285a3) listscroll_midp_info_pane

0x3a7d,	// (0x00028583) listscroll_form_midp_pane_ParamLimits

0x3a7d,	// (0x00028583) listscroll_form_midp_pane

0x3a89,	// (0x0002858f) scroll_bar_cp050

0x3a7d,	// (0x00028583) list_midp_pane

0x579b,	// (0x0002a2a1) signal_pane_g2_cp

0x3997,	// (0x0002849d) listscroll_midp_info_pane_t1_ParamLimits

0x3997,	// (0x0002849d) listscroll_midp_info_pane_t1

0x39af,	// (0x000284b5) listscroll_midp_info_pane_t2_ParamLimits

0x39af,	// (0x000284b5) listscroll_midp_info_pane_t2

0x39ed,	// (0x000284f3) listscroll_midp_info_pane_t3_ParamLimits

0x39ed,	// (0x000284f3) listscroll_midp_info_pane_t3

0x3a27,	// (0x0002852d) listscroll_midp_info_pane_t4_ParamLimits

0x3a27,	// (0x0002852d) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x00034306) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x00034306) listscroll_midp_info_pane_t

0xd633,	// (0x00032139) scroll_pane_cp21

0x3931,	// (0x00028437) form_midp_field_choice_group_pane

0x393a,	// (0x00028440) form_midp_field_text_pane

0x397d,	// (0x00028483) form_midp_field_time_pane

0x3985,	// (0x0002848b) form_midp_gauge_slider_pane

0x398e,	// (0x00028494) form_midp_gauge_wait_pane

0xce59,	// (0x0003195f) form_midp_image_pane

0xa1ac,	// (0x0002ecb2) list_single_midp_pane_ParamLimits

0xa1ac,	// (0x0002ecb2) list_single_midp_pane

0xbbed,	// (0x000306f3) form_midp_field_text_pane_t1

0x36e7,	// (0x000281ed) input_focus_pane_cp050

0x3920,	// (0x00028426) list_midp_form_text_pane

0x38c4,	// (0x000283ca) form_midp_field_choice_group_pane_t1

0x38d2,	// (0x000283d8) input_focus_pane_cp051

0x38e6,	// (0x000283ec) list_midp_choice_pane

0xce59,	// (0x0003195f) status_idle_pane

0x38a8,	// (0x000283ae) form_midp_field_time_pane_t1

0xce4f,	// (0x00031955) wait_anim_pane_g2_copy1

0x38b6,	// (0x000283bc) form_midp_field_time_pane_t2

0x0001,

0x2f3d,	// (0x00027a43) aid_navinavi_width_2_pane

0xf7fb,	// (0x00034301) form_midp_field_time_pane_t

0xce59,	// (0x0003195f) input_focus_pane_cp052

0xce59,	// (0x0003195f) bg_input_focus_pane_cp040

0x3868,	// (0x0002836e) form_midp_gauge_slider_pane_t1

0x3876,	// (0x0002837c) form_midp_gauge_slider_pane_t2

0xbbd1,	// (0x000306d7) form_midp_gauge_slider_pane_t3

0xbbdf,	// (0x000306e5) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x000342f8) form_midp_gauge_slider_pane_t

0x38a0,	// (0x000283a6) form_midp_slider_pane

0xceb5,	// (0x000319bb) bg_input_focus_pane_cp041_ParamLimits

0xceb5,	// (0x000319bb) bg_input_focus_pane_cp041

0x3835,	// (0x0002833b) form_midp_gauge_wait_pane_t1_ParamLimits

0x3835,	// (0x0002833b) form_midp_gauge_wait_pane_t1

0x3847,	// (0x0002834d) form_midp_gauge_wait_pane_t2_ParamLimits

0x3847,	// (0x0002834d) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x000342f3) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x000342f3) form_midp_gauge_wait_pane_t

0x3859,	// (0x0002835f) form_midp_wait_pane_ParamLimits

0x3859,	// (0x0002835f) form_midp_wait_pane

0x37fd,	// (0x00028303) form_midp_image_pane_g1

0x3806,	// (0x0002830c) form_midp_image_pane_t1

0x3815,	// (0x0002831b) form_midp_image_pane_t2

0x3824,	// (0x0002832a) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x000342ec) form_midp_image_pane_t

0x37f4,	// (0x000282fa) list_single_midp_pane_g1

0xed21,	// (0x00033827) list_single_midp_pane_t1

0xbbba,	// (0x000306c0) list_midp_form_item_pane_ParamLimits

0xbbba,	// (0x000306c0) list_midp_form_item_pane

0x2ee5,	// (0x000279eb) list_midp_form_item_pane_t1

0x2ef4,	// (0x000279fa) midp_ticker_pane_g1

0x2f00,	// (0x00027a06) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x00034239) midp_ticker_pane_g

0xad57,	// (0x0002f85d) midp_ticker_pane_t1

0xc0e5,	// (0x00030beb) midp_editing_number_pane_t1

0x4bf1,	// (0x000296f7) midp_editing_number_pane

0x4c00,	// (0x00029706) midp_ticker_pane

0x4996,	// (0x0002949c) ai_message_heading_pane

0xce59,	// (0x0003195f) bg_popup_window_pane_cp14

0x499e,	// (0x000294a4) listscroll_ai_message_pane

0x491c,	// (0x00029422) ai_message_heading_pane_g1_ParamLimits

0x491c,	// (0x00029422) ai_message_heading_pane_g1

0x4928,	// (0x0002942e) ai_message_heading_pane_g2_ParamLimits

0x4928,	// (0x0002942e) ai_message_heading_pane_g2

0x4936,	// (0x0002943c) ai_message_heading_pane_g3_ParamLimits

0x4936,	// (0x0002943c) ai_message_heading_pane_g3

0x4942,	// (0x00029448) ai_message_heading_pane_g4_ParamLimits

0x4942,	// (0x00029448) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0003442d) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0003442d) ai_message_heading_pane_g

0x494e,	// (0x00029454) ai_message_heading_pane_t1_ParamLimits

0x494e,	// (0x00029454) ai_message_heading_pane_t1

0x4968,	// (0x0002946e) ai_message_heading_pane_t2_ParamLimits

0x4968,	// (0x0002946e) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00034436) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00034436) ai_message_heading_pane_t

0x497c,	// (0x00029482) bg_popup_heading_pane_cp1_ParamLimits

0x497c,	// (0x00029482) bg_popup_heading_pane_cp1

0x490a,	// (0x00029410) list_ai_message_pane_ParamLimits

0x490a,	// (0x00029410) list_ai_message_pane

0xd633,	// (0x00032139) scroll_pane_cp10

0x48a6,	// (0x000293ac) list_ai_message_pane_g1

0x48ae,	// (0x000293b4) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0003440a) list_ai_message_pane_g

0x48b6,	// (0x000293bc) list_ai_message_pane_t1_ParamLimits

0x48b6,	// (0x000293bc) list_ai_message_pane_t1

0x48cb,	// (0x000293d1) list_ai_message_pane_t2_ParamLimits

0x48cb,	// (0x000293d1) list_ai_message_pane_t2

0x48e0,	// (0x000293e6) list_ai_message_pane_t3_ParamLimits

0x48e0,	// (0x000293e6) list_ai_message_pane_t3

0x48f5,	// (0x000293fb) list_ai_message_pane_t4_ParamLimits

0x48f5,	// (0x000293fb) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x0003440f) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x0003440f) list_ai_message_pane_t

0xbf2c,	// (0x00030a32) cell_ai_soft_ind_pane_ParamLimits

0xbf2c,	// (0x00030a32) cell_ai_soft_ind_pane

0x2f1e,	// (0x00027a24) cell_ai_soft_ind_pane_g1_ParamLimits

0x2f1e,	// (0x00027a24) cell_ai_soft_ind_pane_g1

0xce59,	// (0x0003195f) grid_highlight_cp1

0x2f2b,	// (0x00027a31) text_secondary_cp56_ParamLimits

0x2f2b,	// (0x00027a31) text_secondary_cp56

0x4864,	// (0x0002936a) example_general_pane_ParamLimits

0x4864,	// (0x0002936a) example_general_pane

0x4870,	// (0x00029376) example_parent_pane_g1_ParamLimits

0x4870,	// (0x00029376) example_parent_pane_g1

0x487c,	// (0x00029382) example_parent_pane_t1_ParamLimits

0x487c,	// (0x00029382) example_parent_pane_t1

0xb3e1,	// (0x0002fee7) popup_preview_text_window_ParamLimits

0xb3e1,	// (0x0002fee7) popup_preview_text_window

0x2d45,	// (0x0002784b) list_single_pane_cp2_g4

0xd0b6,	// (0x00031bbc) bg_popup_preview_window_pane_ParamLimits

0xd0b6,	// (0x00031bbc) bg_popup_preview_window_pane

0x45ad,	// (0x000290b3) popup_preview_text_window_t1_ParamLimits

0x45ad,	// (0x000290b3) popup_preview_text_window_t1

0x45cb,	// (0x000290d1) popup_preview_text_window_t2_ParamLimits

0x45cb,	// (0x000290d1) popup_preview_text_window_t2

0x4614,	// (0x0002911a) popup_preview_text_window_t3_ParamLimits

0x4614,	// (0x0002911a) popup_preview_text_window_t3

0x4659,	// (0x0002915f) popup_preview_text_window_t4_ParamLimits

0x4659,	// (0x0002915f) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x000343de) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x000343de) popup_preview_text_window_t

0x46d7,	// (0x000291dd) scroll_pane_cp11

0x3673,	// (0x00028179) bg_popup_preview_window_pane_g1

0x4561,	// (0x00029067) bg_popup_preview_window_pane_g2

0x456b,	// (0x00029071) bg_popup_preview_window_pane_g3

0x4575,	// (0x0002907b) bg_popup_preview_window_pane_g4

0x457f,	// (0x00029085) bg_popup_preview_window_pane_g5

0x4589,	// (0x0002908f) bg_popup_preview_window_pane_g6

0x4591,	// (0x00029097) bg_popup_preview_window_pane_g7

0x4599,	// (0x0002909f) bg_popup_preview_window_pane_g8

0xf2c5,	// (0x00033dcb) aid_popup_width_pane

0xb351,	// (0x0002fe57) popup_midp_note_alarm_window_ParamLimits

0xb351,	// (0x0002fe57) popup_midp_note_alarm_window

0xd4eb,	// (0x00031ff1) data_form_pane_ParamLimits

0xa024,	// (0x0002eb2a) form_field_data_pane_g1

0xa02e,	// (0x0002eb34) form_field_data_pane_t1_ParamLimits

0xd4f7,	// (0x00031ffd) input_focus_pane_ParamLimits

0xeb42,	// (0x00033648) data_form_wide_pane_ParamLimits

0xeb53,	// (0x00033659) form_field_data_wide_pane_g1

0xeb5f,	// (0x00033665) form_field_data_wide_pane_t1_ParamLimits

0xd272,	// (0x00031d78) input_focus_pane_cp6_ParamLimits

0xaa0e,	// (0x0002f514) input_popup_find_pane_g1_ParamLimits

0xaa0e,	// (0x0002f514) input_popup_find_pane_g1

0x0508,	// (0x0002500e) aid_navi_side_left_pane

0x051d,	// (0x00025023) aid_navi_side_right_pane

0x3f76,	// (0x00028a7c) bg_popup_window_pane_cp30_ParamLimits

0x3f76,	// (0x00028a7c) bg_popup_window_pane_cp30

0x3ff0,	// (0x00028af6) popup_midp_note_alarm_window_g1_ParamLimits

0x3ff0,	// (0x00028af6) popup_midp_note_alarm_window_g1

0x4020,	// (0x00028b26) popup_midp_note_alarm_window_t1_ParamLimits

0x4020,	// (0x00028b26) popup_midp_note_alarm_window_t1

0x40c1,	// (0x00028bc7) popup_midp_note_alarm_window_t2_ParamLimits

0x40c1,	// (0x00028bc7) popup_midp_note_alarm_window_t2

0x416f,	// (0x00028c75) popup_midp_note_alarm_window_t3_ParamLimits

0x416f,	// (0x00028c75) popup_midp_note_alarm_window_t3

0x41a1,	// (0x00028ca7) popup_midp_note_alarm_window_t4_ParamLimits

0x41a1,	// (0x00028ca7) popup_midp_note_alarm_window_t4

0x41c7,	// (0x00028ccd) popup_midp_note_alarm_window_t5_ParamLimits

0x41c7,	// (0x00028ccd) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x0003437b) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x0003437b) popup_midp_note_alarm_window_t

0x4273,	// (0x00028d79) wait_bar_pane_cp1_ParamLimits

0x4273,	// (0x00028d79) wait_bar_pane_cp1

0xce59,	// (0x0003195f) wait_anim_pane_copy1

0xce59,	// (0x0003195f) wait_border_pane_copy1

0x3c5b,	// (0x00028761) wait_border_pane_g1_copy1

0xeb79,	// (0x0003367f) form_field_popup_pane_g1

0xa048,	// (0x0002eb4e) form_field_popup_pane_t1_ParamLimits

0xd4f7,	// (0x00031ffd) input_focus_pane_cp7_ParamLimits

0xd525,	// (0x0003202b) list_form_pane_ParamLimits

0xeb81,	// (0x00033687) form_field_popup_wide_pane_g1

0xeb89,	// (0x0003368f) form_field_popup_wide_pane_t1_ParamLimits

0xd4f7,	// (0x00031ffd) input_focus_pane_cp8_ParamLimits

0xd531,	// (0x00032037) list_form_wide_pane_ParamLimits

0x4d82,	// (0x00029888) aid_size_cell_graphic_pane

0xa0c7,	// (0x0002ebcd) data_form_pane_t1_ParamLimits

0xa1db,	// (0x0002ece1) data_form_wide_pane_t1_ParamLimits

0xb7e3,	// (0x000302e9) bg_status_flat_pane

0xa657,	// (0x0002f15d) title_pane_t1_ParamLimits

0xce6f,	// (0x00031975) title_pane_t2_ParamLimits

0xce95,	// (0x0003199b) title_pane_t3_ParamLimits

0xf532,	// (0x00034038) title_pane_t_ParamLimits

0xab39,	// (0x0002f63f) level_1_signal_ParamLimits

0xab4b,	// (0x0002f651) level_2_signal_ParamLimits

0xab5e,	// (0x0002f664) level_3_signal_ParamLimits

0xab71,	// (0x0002f677) level_4_signal_ParamLimits

0xab84,	// (0x0002f68a) level_5_signal_ParamLimits

0xab97,	// (0x0002f69d) level_6_signal_ParamLimits

0xabaa,	// (0x0002f6b0) level_7_signal_ParamLimits

0xab39,	// (0x0002f63f) level_1_battery_ParamLimits

0xab4b,	// (0x0002f651) level_2_battery_ParamLimits

0xab5e,	// (0x0002f664) level_3_battery_ParamLimits

0xab71,	// (0x0002f677) level_4_battery_ParamLimits

0xab84,	// (0x0002f68a) level_5_battery_ParamLimits

0xab97,	// (0x0002f69d) level_6_battery_ParamLimits

0xabaa,	// (0x0002f6b0) level_7_battery_ParamLimits

0x3e7b,	// (0x00028981) bg_status_flat_pane_g1

0x3e83,	// (0x00028989) bg_status_flat_pane_g2

0x3e8b,	// (0x00028991) bg_status_flat_pane_g3

0x3e93,	// (0x00028999) bg_status_flat_pane_g4

0x3e9b,	// (0x000289a1) bg_status_flat_pane_g5

0x3ea3,	// (0x000289a9) bg_status_flat_pane_g6

0x3eab,	// (0x000289b1) bg_status_flat_pane_g7

0xa6eb,	// (0x0002f1f1) tabs_3_active_pane_t1_ParamLimits

0xa6eb,	// (0x0002f1f1) tabs_3_passive_pane_t1_ParamLimits

0xa705,	// (0x0002f20b) tabs_4_active_pane_t1_ParamLimits

0xa705,	// (0x0002f20b) tabs_4_1_passive_pane_t1_ParamLimits

0xaa24,	// (0x0002f52a) tabs_2_active_pane_t1_ParamLimits

0xaa24,	// (0x0002f52a) tabs_2_passive_pane_t1_ParamLimits

0xceb5,	// (0x000319bb) bg_active_tab_pane_cp4_ParamLimits

0xaa36,	// (0x0002f53c) tabs_2_long_active_pane_t1_ParamLimits

0x313d,	// (0x00027c43) bg_passive_tab_pane_cp4_ParamLimits

0x174f,	// (0x00026255) list_single_midp_graphic_pane_t1_ParamLimits

0xceb5,	// (0x000319bb) bg_active_tab_pane_cp5_ParamLimits

0xaa49,	// (0x0002f54f) tabs_3_long_active_pane_t1_ParamLimits

0x313d,	// (0x00027c43) bg_passive_tab_pane_cp5_ParamLimits

0x174f,	// (0x00026255) list_single_midp_graphic_pane_t1

0xb7e3,	// (0x000302e9) bg_status_flat_pane_ParamLimits

0x32f7,	// (0x00027dfd) indicator_pane_cp2_ParamLimits

0x32f7,	// (0x00027dfd) indicator_pane_cp2

0xb979,	// (0x0003047f) navi_pane_srt_ParamLimits

0xb979,	// (0x0003047f) navi_pane_srt

0x345e,	// (0x00027f64) popup_clock_digital_analogue_window_cp1

0xcef9,	// (0x000319ff) indicator_pane_t1

0x2e16,	// (0x0002791c) copy_highlight_pane

0x2e16,	// (0x0002791c) cursor_graphics_pane

0x2e16,	// (0x0002791c) graphic_within_text_pane

0x2e16,	// (0x0002791c) link_highlight_pane

0x469a,	// (0x000291a0) popup_preview_text_window_t5_ParamLimits

0x469a,	// (0x000291a0) popup_preview_text_window_t5

0x2f47,	// (0x00027a4d) cursor_digital_pane

0x2f47,	// (0x00027a4d) cursor_primary_pane

0x2f58,	// (0x00027a5e) cursor_primary_small_pane

0x2f60,	// (0x00027a66) cursor_secondary_pane

0x2f68,	// (0x00027a6e) cursor_title_pane

0x2f47,	// (0x00027a4d) link_highlight_digital_pane

0x2f4f,	// (0x00027a55) link_highlight_primary_pane

0x2f58,	// (0x00027a5e) link_highlight_primary_small_pane

0x2f60,	// (0x00027a66) link_highlight_secondary_pane

0x2f68,	// (0x00027a6e) link_highlight_title_pane

0x2f47,	// (0x00027a4d) copy_highlight_digital_pane

0x2f47,	// (0x00027a4d) copy_highlight_primary_pane

0x2f58,	// (0x00027a5e) copy_highlight_primary_small_pane

0x2f60,	// (0x00027a66) copy_highlight_secondary_pane

0x2f68,	// (0x00027a6e) copy_highlight_title_pane

0x2f60,	// (0x00027a66) graphic_text_digital_pane

0x3f19,	// (0x00028a1f) graphic_text_primary_pane

0x3f22,	// (0x00028a28) graphic_text_primary_small_pane

0x2f58,	// (0x00027a5e) graphic_text_secondary_pane

0x2f47,	// (0x00027a4d) graphic_text_title_pane

0xad69,	// (0x0002f86f) cursor_primary_pane_g1

0x3f0b,	// (0x00028a11) cursor_text_primary_t1

0xbc45,	// (0x0003074b) cursor_primary_small_pane_g1

0x3efd,	// (0x00028a03) cursor_text_primary_small_t1

0xbc3b,	// (0x00030741) cursor_primary_small_pane_g1_copy1

0x3ee5,	// (0x000289eb) cursor_text_primary_small_t1_copy1

0x3ec3,	// (0x000289c9) cursor_text_title_t1

0xbc31,	// (0x00030737) cursor_title_pane_g1

0xad69,	// (0x0002f86f) cursor_digital_pane_g1

0x2f7a,	// (0x00027a80) cursor_text_digital_t1

0x2f88,	// (0x00027a8e) link_highlight_primary_pane_g1

0x3e6c,	// (0x00028972) link_highlight_primary_pane_t1

0x2f88,	// (0x00027a8e) link_highlight_primary_small_pane_g1

0x2f90,	// (0x00027a96) link_highlight_primary_small_pane_t1

0x2f9f,	// (0x00027aa5) link_highlight_secondary_pane_g1

0x2fa7,	// (0x00027aad) link_highlight_secondary_pane_t1

0x3de0,	// (0x000288e6) link_highlight_title_pane_g1

0x3de8,	// (0x000288ee) link_highlight_title_pane_t1

0x3dc9,	// (0x000288cf) link_highlight_digital_pane_g1

0x3dd1,	// (0x000288d7) link_highlight_digital_pane_t1

0x3c91,	// (0x00028797) copy_highlight_primary_pane_g1

0x3ca8,	// (0x000287ae) copy_highlight_primary_pane_t1

0x3c91,	// (0x00028797) copy_highlight_primary_small_pane_g1

0x3c99,	// (0x0002879f) copy_highlight_primary_small_pane_t1

0x2fb6,	// (0x00027abc) copy_highlight_secondary_pane_g1

0x2fbe,	// (0x00027ac4) copy_highlight_secondary_pane_t1

0x3c7a,	// (0x00028780) copy_highlight_title_pane_g1

0x3c82,	// (0x00028788) copy_highlight_title_pane_t1

0x3c91,	// (0x00028797) copy_highlight_digital_pane_g1

0x4f54,	// (0x00029a5a) copy_highlight_digital_pane_t1

0x4ea8,	// (0x000299ae) graphic_text_primary_pane_g1

0x4f38,	// (0x00029a3e) graphic_text_primary_pane_t1

0x4f46,	// (0x00029a4c) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x000344aa) graphic_text_primary_pane_t

0x4f14,	// (0x00029a1a) graphic_text_primary_small_pane_g1

0x4f1c,	// (0x00029a22) graphic_text_primary_small_pane_t1

0x4f2a,	// (0x00029a30) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x000344a5) graphic_text_primary_small_pane_t

0x4ef0,	// (0x000299f6) graphic_text_secondary_pane_g1

0x4ef8,	// (0x000299fe) graphic_text_secondary_pane_t1

0x4f06,	// (0x00029a0c) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x000344a0) graphic_text_secondary_pane_t

0x4ecc,	// (0x000299d2) graphic_text_title_pane_g1

0x4ed4,	// (0x000299da) graphic_text_title_pane_t1

0x4ee2,	// (0x000299e8) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x0003449b) graphic_text_title_pane_t

0x4ea8,	// (0x000299ae) graphic_text_digital_pane_g1

0x4eb0,	// (0x000299b6) graphic_text_digital_pane_t1

0x4ebe,	// (0x000299c4) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00034496) graphic_text_digital_pane_t

0xceb5,	// (0x000319bb) navi_icon_pane_srt_ParamLimits

0xceb5,	// (0x000319bb) navi_icon_pane_srt

0xce59,	// (0x0003195f) navi_midp_pane_srt

0xce59,	// (0x0003195f) navi_navi_pane_srt

0xceb5,	// (0x000319bb) navi_text_pane_srt_ParamLimits

0xceb5,	// (0x000319bb) navi_text_pane_srt

0x4e73,	// (0x00029979) navi_navi_icon_text_pane_srt

0x4e7b,	// (0x00029981) navi_navi_pane_srt_g1_ParamLimits

0x4e7b,	// (0x00029981) navi_navi_pane_srt_g1

0x4e8d,	// (0x00029993) navi_navi_pane_srt_g2_ParamLimits

0x4e8d,	// (0x00029993) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x00034491) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x00034491) navi_navi_pane_srt_g

0x4e9f,	// (0x000299a5) navi_navi_tabs_pane_srt

0x4e73,	// (0x00029979) navi_navi_text_pane_srt

0x4e73,	// (0x00029979) navi_navi_volume_pane_srt

0x4e64,	// (0x0002996a) navi_navi_text_pane_srt_t1

0x1aeb,	// (0x000265f1) navi_navi_volume_pane_srt_g1

0x1af3,	// (0x000265f9) volume_small_pane_srt_ParamLimits

0x1af3,	// (0x000265f9) volume_small_pane_srt

0x0e89,	// (0x0002598f) volume_small_pane_srt_g1_ParamLimits

0x0e89,	// (0x0002598f) volume_small_pane_srt_g1

0x0e99,	// (0x0002599f) volume_small_pane_srt_g2_ParamLimits

0x0e99,	// (0x0002599f) volume_small_pane_srt_g2

0x0eaa,	// (0x000259b0) volume_small_pane_srt_g3_ParamLimits

0x0eaa,	// (0x000259b0) volume_small_pane_srt_g3

0x0ebb,	// (0x000259c1) volume_small_pane_srt_g4_ParamLimits

0x0ebb,	// (0x000259c1) volume_small_pane_srt_g4

0x0ecc,	// (0x000259d2) volume_small_pane_srt_g5_ParamLimits

0x0ecc,	// (0x000259d2) volume_small_pane_srt_g5

0x0edd,	// (0x000259e3) volume_small_pane_srt_g6_ParamLimits

0x0edd,	// (0x000259e3) volume_small_pane_srt_g6

0x0eee,	// (0x000259f4) volume_small_pane_srt_g7_ParamLimits

0x0eee,	// (0x000259f4) volume_small_pane_srt_g7

0x0eff,	// (0x00025a05) volume_small_pane_srt_g8_ParamLimits

0x0eff,	// (0x00025a05) volume_small_pane_srt_g8

0x0f10,	// (0x00025a16) volume_small_pane_srt_g9_ParamLimits

0x0f10,	// (0x00025a16) volume_small_pane_srt_g9

0x0f21,	// (0x00025a27) volume_small_pane_srt_g10_ParamLimits

0x0f21,	// (0x00025a27) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0003423e) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0003423e) volume_small_pane_srt_g

0xd16b,	// (0x00031c71) query_popup_data_pane_cp2

0x4e4a,	// (0x00029950) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4e4a,	// (0x00029950) navi_navi_icon_text_pane_srt_t1

0x3f19,	// (0x00028a1f) navi_tabs_2_long_pane_srt

0x3f19,	// (0x00028a1f) navi_tabs_2_pane_srt

0x3f19,	// (0x00028a1f) navi_tabs_3_long_pane_srt

0x3f19,	// (0x00028a1f) navi_tabs_3_pane_srt

0x3f19,	// (0x00028a1f) navi_tabs_4_pane_srt

0x1acb,	// (0x000265d1) tabs_2_active_pane_srt_ParamLimits

0x1acb,	// (0x000265d1) tabs_2_active_pane_srt

0x1adb,	// (0x000265e1) tabs_2_passive_pane_srt_ParamLimits

0x1adb,	// (0x000265e1) tabs_2_passive_pane_srt

0x36e7,	// (0x000281ed) bg_passive_tab_pane_cp1_srt_ParamLimits

0x36e7,	// (0x000281ed) bg_passive_tab_pane_cp1_srt

0x4e16,	// (0x0002991c) bg_passive_tab_pane_g1_cp1_srt

0x0bdb,	// (0x000256e1) bg_passive_tab_pane_g2_cp1_srt

0x4e1f,	// (0x00029925) bg_passive_tab_pane_g3_cp1_srt

0xcea7,	// (0x000319ad) bg_active_tab_pane_cp1_srt_ParamLimits

0xcea7,	// (0x000319ad) bg_active_tab_pane_cp1_srt

0x4e28,	// (0x0002992e) tabs_2_active_pane_srt_g1

0xc21c,	// (0x00030d22) tabs_2_active_pane_srt_t1_ParamLimits

0xc21c,	// (0x00030d22) tabs_2_active_pane_srt_t1

0x4e16,	// (0x0002991c) bg_active_tab_pane_g1_cp1_srt

0x0bdb,	// (0x000256e1) bg_active_tab_pane_g2_cp1_srt

0x4e1f,	// (0x00029925) bg_active_tab_pane_g3_cp1_srt

0x1a98,	// (0x0002659e) tabs_3_active_pane_srt_ParamLimits

0x1a98,	// (0x0002659e) tabs_3_active_pane_srt

0x1aa9,	// (0x000265af) tabs_3_passive_pane_cp_srt_ParamLimits

0x1aa9,	// (0x000265af) tabs_3_passive_pane_cp_srt

0x1aba,	// (0x000265c0) tabs_3_passive_pane_srt_ParamLimits

0x1aba,	// (0x000265c0) tabs_3_passive_pane_srt

0x36e7,	// (0x000281ed) bg_passive_tab_pane_cp2_srt_ParamLimits

0x36e7,	// (0x000281ed) bg_passive_tab_pane_cp2_srt

0x2fcd,	// (0x00027ad3) bg_passive_tab_pane_g1_cp2_srt

0x0bdb,	// (0x000256e1) bg_passive_tab_pane_g2_cp2_srt

0x2fd6,	// (0x00027adc) bg_passive_tab_pane_g3_cp2_srt

0xcea7,	// (0x000319ad) bg_active_tab_pane_cp2_srt_ParamLimits

0xcea7,	// (0x000319ad) bg_active_tab_pane_cp2_srt

0x4dfc,	// (0x00029902) tabs_3_active_pane_srt_g1

0xc206,	// (0x00030d0c) tabs_3_active_pane_srt_t1_ParamLimits

0xc206,	// (0x00030d0c) tabs_3_active_pane_srt_t1

0x2fcd,	// (0x00027ad3) bg_active_tab_pane_g1_cp2_srt

0x0bdb,	// (0x000256e1) bg_active_tab_pane_g2_cp2_srt

0x2fd6,	// (0x00027adc) bg_active_tab_pane_g3_cp2_srt

0x1a50,	// (0x00026556) tabs_4_active_pane_srt_ParamLimits

0x1a50,	// (0x00026556) tabs_4_active_pane_srt

0x1a62,	// (0x00026568) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1a62,	// (0x00026568) tabs_4_passive_pane_cp2_srt

0x10a4,	// (0x00025baa) aid_size_cell_toolbar

0x4a50,	// (0x00029556) main_idle_act_pane_ParamLimits

0x126d,	// (0x00025d73) popup_large_graphic_colour_window_ParamLimits

0xb6a5,	// (0x000301ab) popup_toolbar_window_ParamLimits

0xb6a5,	// (0x000301ab) popup_toolbar_window

0x4c39,	// (0x0002973f) list_single_graphic_2heading_pane_ParamLimits

0x4c39,	// (0x0002973f) list_single_graphic_2heading_pane

0x0596,	// (0x0002509c) aid_size_cell_apps_grid_lsc_pane

0x05a8,	// (0x000250ae) aid_size_cell_apps_grid_prt_pane

0x313d,	// (0x00027c43) bg_wml_button_pane_cp1_ParamLimits

0x313d,	// (0x00027c43) bg_wml_button_pane_cp1

0xbbed,	// (0x000306f3) form_midp_field_text_pane_t1_ParamLimits

0x36e7,	// (0x000281ed) input_focus_pane_cp050_ParamLimits

0x3920,	// (0x00028426) list_midp_form_text_pane_ParamLimits

0x38d2,	// (0x000283d8) input_focus_pane_cp051_ParamLimits

0x38e6,	// (0x000283ec) list_midp_choice_pane_ParamLimits

0x37a0,	// (0x000282a6) list_single_2graphic_pane_cp3_ParamLimits

0x37a0,	// (0x000282a6) list_single_2graphic_pane_cp3

0x37b6,	// (0x000282bc) list_single_midp_graphic_pane_ParamLimits

0x37b6,	// (0x000282bc) list_single_midp_graphic_pane

0xebef,	// (0x000336f5) list_single_graphic_2heading_pane_g1_ParamLimits

0xebef,	// (0x000336f5) list_single_graphic_2heading_pane_g1

0xea45,	// (0x0003354b) list_single_graphic_2heading_pane_g4_ParamLimits

0xea45,	// (0x0003354b) list_single_graphic_2heading_pane_g4

0xea51,	// (0x00033557) list_single_graphic_2heading_pane_g5_ParamLimits

0xea51,	// (0x00033557) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x00034291) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x00034291) list_single_graphic_2heading_pane_g

0xebfb,	// (0x00033701) list_single_graphic_2heading_pane_t1_ParamLimits

0xebfb,	// (0x00033701) list_single_graphic_2heading_pane_t1

0xec0f,	// (0x00033715) list_single_graphic_2heading_pane_t2_ParamLimits

0xec0f,	// (0x00033715) list_single_graphic_2heading_pane_t2

0xec2b,	// (0x00033731) list_single_graphic_2heading_pane_t3_ParamLimits

0xec2b,	// (0x00033731) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x00034298) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x00034298) list_single_graphic_2heading_pane_t

0x35b1,	// (0x000280b7) bg_popup_sub_pane_cp2

0x35db,	// (0x000280e1) grid_toobar_pane

0x16d3,	// (0x000261d9) cell_toolbar_pane_ParamLimits

0x16d3,	// (0x000261d9) cell_toolbar_pane

0x3617,	// (0x0002811d) cell_toolbar_pane_g1_ParamLimits

0x3617,	// (0x0002811d) cell_toolbar_pane_g1

0x362b,	// (0x00028131) cell_toolbar_pane_g2_ParamLimits

0x362b,	// (0x00028131) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x000342a6) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x000342a6) cell_toolbar_pane_g

0x364d,	// (0x00028153) grid_highlight_pane_cp2_ParamLimits

0x364d,	// (0x00028153) grid_highlight_pane_cp2

0x3667,	// (0x0002816d) toolbar_button_pane

0x3673,	// (0x00028179) toolbar_button_pane_g1

0x367b,	// (0x00028181) toolbar_button_pane_g2

0x3683,	// (0x00028189) toolbar_button_pane_g3

0x368b,	// (0x00028191) toolbar_button_pane_g4

0x3693,	// (0x00028199) toolbar_button_pane_g5

0x369b,	// (0x000281a1) toolbar_button_pane_g6

0x36a3,	// (0x000281a9) toolbar_button_pane_g7

0x36ab,	// (0x000281b1) toolbar_button_pane_g8

0x36b3,	// (0x000281b9) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x000342ab) toolbar_button_pane_g

0x170b,	// (0x00026211) list_single_2graphic_pane_g1_cp3_ParamLimits

0x170b,	// (0x00026211) list_single_2graphic_pane_g1_cp3

0xbb1c,	// (0x00030622) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbb1c,	// (0x00030622) list_single_2graphic_pane_g2_cp3

0x2c35,	// (0x0002773b) list_single_2graphic_pane_g3_cp3

0x1728,	// (0x0002622e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1728,	// (0x0002622e) list_single_2graphic_pane_g4_cp3

0x1734,	// (0x0002623a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1734,	// (0x0002623a) list_single_2graphic_pane_t1_cp3

0x2c29,	// (0x0002772f) list_single_midp_graphic_pane_g2_ParamLimits

0x2c29,	// (0x0002772f) list_single_midp_graphic_pane_g2

0x10ac,	// (0x00025bb2) aid_zoom_text_primary

0xebdf,	// (0x000336e5) aid_zoom_text_secondary

0xadc1,	// (0x0002f8c7) status_small_pane_g7_ParamLimits

0xadc1,	// (0x0002f8c7) status_small_pane_g7

0xade4,	// (0x0002f8ea) status_small_pane_t1_ParamLimits

0xa627,	// (0x0002f12d) title_pane_g2

0x0003,

0xf529,	// (0x0003402f) title_pane_g

0xa8c7,	// (0x0002f3cd) aid_size_cell_colour_1_pane_ParamLimits

0xa8c7,	// (0x0002f3cd) aid_size_cell_colour_1_pane

0xa8db,	// (0x0002f3e1) aid_size_cell_colour_2_pane_ParamLimits

0xa8db,	// (0x0002f3e1) aid_size_cell_colour_2_pane

0xa8ef,	// (0x0002f3f5) aid_size_cell_colour_3_pane_ParamLimits

0xa8ef,	// (0x0002f3f5) aid_size_cell_colour_3_pane

0xa903,	// (0x0002f409) aid_size_cell_colour_4_pane_ParamLimits

0xa903,	// (0x0002f409) aid_size_cell_colour_4_pane

0x040f,	// (0x00024f15) title_pane_stacon_g1_ParamLimits

0x040f,	// (0x00024f15) title_pane_stacon_g1

0x3cff,	// (0x00028805) popup_note_wait_window_g3_ParamLimits

0x3cff,	// (0x00028805) popup_note_wait_window_g3

0x3d76,	// (0x0002887c) popup_note_wait_window_t5_ParamLimits

0x3d76,	// (0x0002887c) popup_note_wait_window_t5

0xce59,	// (0x0003195f) main_feb_china_hwr_fs_writing_pane

0xb038,	// (0x0002fb3e) popup_feb_china_hwr_fs_window_ParamLimits

0xb038,	// (0x0002fb3e) popup_feb_china_hwr_fs_window

0xbb2d,	// (0x00030633) aid_size_cell_hwr_fs_ParamLimits

0xbb2d,	// (0x00030633) aid_size_cell_hwr_fs

0x36e7,	// (0x000281ed) bg_popup_sub_pane_cp3_ParamLimits

0x36e7,	// (0x000281ed) bg_popup_sub_pane_cp3

0xbb42,	// (0x00030648) grid_hwr_fs_pane_ParamLimits

0xbb42,	// (0x00030648) grid_hwr_fs_pane

0x1792,	// (0x00026298) linegrid_hwr_fs_pane_ParamLimits

0x1792,	// (0x00026298) linegrid_hwr_fs_pane

0xbb5a,	// (0x00030660) cell_hwr_fs_pane_ParamLimits

0xbb5a,	// (0x00030660) cell_hwr_fs_pane

0x36f3,	// (0x000281f9) linegrid_hwr_fs_pane_g1_ParamLimits

0x36f3,	// (0x000281f9) linegrid_hwr_fs_pane_g1

0xbb80,	// (0x00030686) linegrid_hwr_fs_pane_g2_ParamLimits

0xbb80,	// (0x00030686) linegrid_hwr_fs_pane_g2

0x3711,	// (0x00028217) linegrid_hwr_fs_pane_g3_ParamLimits

0x3711,	// (0x00028217) linegrid_hwr_fs_pane_g3

0x17c6,	// (0x000262cc) linegrid_hwr_fs_pane_g4_ParamLimits

0x17c6,	// (0x000262cc) linegrid_hwr_fs_pane_g4

0x17e4,	// (0x000262ea) linegrid_hwr_fs_pane_g5_ParamLimits

0x17e4,	// (0x000262ea) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x000342d1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x000342d1) linegrid_hwr_fs_pane_g

0x371d,	// (0x00028223) cell_hwr_fs_pane_g1_ParamLimits

0x371d,	// (0x00028223) cell_hwr_fs_pane_g1

0x34ec,	// (0x00027ff2) cell_hwr_fs_pane_g2_ParamLimits

0x34ec,	// (0x00027ff2) cell_hwr_fs_pane_g2

0xbb92,	// (0x00030698) cell_hwr_fs_pane_g3_ParamLimits

0xbb92,	// (0x00030698) cell_hwr_fs_pane_g3

0xbb9f,	// (0x000306a5) cell_hwr_fs_pane_g4_ParamLimits

0xbb9f,	// (0x000306a5) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x000342dc) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x000342dc) cell_hwr_fs_pane_g

0xbbac,	// (0x000306b2) cell_hwr_fs_pane_t1

0xce59,	// (0x0003195f) grid_highlight_pane_cp6

0xce59,	// (0x0003195f) main_idle_act2_pane

0xd61a,	// (0x00032120) aid_inside_area_popup_secondary

0xbdbb,	// (0x000308c1) aid_inside_area_window_primary_ParamLimits

0xbdbb,	// (0x000308c1) aid_inside_area_window_primary

0x4f63,	// (0x00029a69) ai2_news_ticker_pane

0x4f6b,	// (0x00029a71) aid_size_cell_ai1_link_ParamLimits

0x4f6b,	// (0x00029a71) aid_size_cell_ai1_link

0x4f85,	// (0x00029a8b) popup_ai2_data_window_ParamLimits

0x4f85,	// (0x00029a8b) popup_ai2_data_window

0x4fa3,	// (0x00029aa9) popup_ai2_link_window_ParamLimits

0x4fa3,	// (0x00029aa9) popup_ai2_link_window

0x36e7,	// (0x000281ed) bg_popup_sub_pane_cp4_ParamLimits

0x36e7,	// (0x000281ed) bg_popup_sub_pane_cp4

0x4fb9,	// (0x00029abf) grid_ai2_link_pane_ParamLimits

0x4fb9,	// (0x00029abf) grid_ai2_link_pane

0x4fd0,	// (0x00029ad6) popup_ai2_link_window_g1_ParamLimits

0x4fd0,	// (0x00029ad6) popup_ai2_link_window_g1

0x4fdc,	// (0x00029ae2) popup_ai2_link_window_g2_ParamLimits

0x4fdc,	// (0x00029ae2) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x000344af) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x000344af) popup_ai2_link_window_g

0x4fed,	// (0x00029af3) ai2_mp_button_pane

0x4ff5,	// (0x00029afb) ai2_mp_volume_pane

0x38d2,	// (0x000283d8) bg_popup_sub_pane_cp5_ParamLimits

0x38d2,	// (0x000283d8) bg_popup_sub_pane_cp5

0x4ffd,	// (0x00029b03) heading_ai2_gene_pane_ParamLimits

0x4ffd,	// (0x00029b03) heading_ai2_gene_pane

0x5009,	// (0x00029b0f) list_ai2_gene_pane_ParamLimits

0x5009,	// (0x00029b0f) list_ai2_gene_pane

0x5051,	// (0x00029b57) cell_ai2_link_pane_ParamLimits

0x5051,	// (0x00029b57) cell_ai2_link_pane

0x5067,	// (0x00029b6d) cell_ai2_link_pane_g1

0xce59,	// (0x0003195f) grid_highlight_pane_cp7

0x1b08,	// (0x0002660e) ai2_mp_volume_pane_g1

0x513a,	// (0x00029c40) ai2_mp_volume_pane_g2

0x50af,	// (0x00029bb5) list_ai2_gene_pane_t1

0x5142,	// (0x00029c48) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x000344c8) ai2_mp_volume_pane_g

0x1b10,	// (0x00026616) volume_small_pane_cp3

0x514a,	// (0x00029c50) aid_size_cell_ai2_button

0x5152,	// (0x00029c58) grid_ai2_button_pane

0x515b,	// (0x00029c61) cell_ai2_button_pane_ParamLimits

0x515b,	// (0x00029c61) cell_ai2_button_pane

0xce4f,	// (0x00031955) cell_ai2_button_pane_g1

0xce59,	// (0x0003195f) grid_highlight_pane_cp8

0x50fa,	// (0x00029c00) ai2_gene_pane_t1_ParamLimits

0x50fa,	// (0x00029c00) ai2_gene_pane_t1

0xafb4,	// (0x0002faba) aid_height_parent_landscape

0xbf73,	// (0x00030a79) aid_height_set_list

0x4a50,	// (0x00029556) aid_size_parent

0x4d82,	// (0x00029888) aid_size_cell_graphic_pane_ParamLimits

0x5019,	// (0x00029b1f) popup_ai2_data_window_g1_ParamLimits

0x5019,	// (0x00029b1f) popup_ai2_data_window_g1

0x5025,	// (0x00029b2b) ai2_news_ticker_pane_g1

0x502d,	// (0x00029b33) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x000344b4) ai2_news_ticker_pane_g

0x5035,	// (0x00029b3b) ai2_news_ticker_pane_t1

0x5043,	// (0x00029b49) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x000344b9) ai2_news_ticker_pane_t

0x5070,	// (0x00029b76) heading_ai2_gene_pane_g1

0x5078,	// (0x00029b7e) heading_ai2_gene_pane_t1_ParamLimits

0x5078,	// (0x00029b7e) heading_ai2_gene_pane_t1

0x508d,	// (0x00029b93) list_highlight_pane_cp6

0x5095,	// (0x00029b9b) ai2_gene_pane_ParamLimits

0x5095,	// (0x00029b9b) ai2_gene_pane

0x50bd,	// (0x00029bc3) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x000344be) list_ai2_gene_pane_t

0x50cb,	// (0x00029bd1) list_highlight_pane_cp8_ParamLimits

0x50cb,	// (0x00029bd1) list_highlight_pane_cp8

0x50dc,	// (0x00029be2) ai2_gene_pane_g1_ParamLimits

0x50dc,	// (0x00029be2) ai2_gene_pane_g1

0x50ee,	// (0x00029bf4) ai2_gene_pane_g2_ParamLimits

0x50ee,	// (0x00029bf4) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x000344c3) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x000344c3) ai2_gene_pane_g

0xd48d,	// (0x00031f93) scroll_pane_cp12

0xaf71,	// (0x0002fa77) control_pane_t3_ParamLimits

0xaf71,	// (0x0002fa77) control_pane_t3

0xadd5,	// (0x0002f8db) status_small_pane_g8_ParamLimits

0xadd5,	// (0x0002f8db) status_small_pane_g8

0xb0da,	// (0x0002fbe0) popup_find_window_ParamLimits

0xb391,	// (0x0002fe97) popup_note_image_window_ParamLimits

0xea81,	// (0x00033587) list_double2_graphic_pane_vc_g1_ParamLimits

0xea81,	// (0x00033587) list_double2_graphic_pane_vc_g1

0xec43,	// (0x00033749) list_double2_graphic_pane_vc_g2_ParamLimits

0xec43,	// (0x00033749) list_double2_graphic_pane_vc_g2

0xec4f,	// (0x00033755) list_double2_graphic_pane_vc_g3_ParamLimits

0xec4f,	// (0x00033755) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0003429f) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0003429f) list_double2_graphic_pane_vc_g

0xec5b,	// (0x00033761) list_double2_graphic_pane_vc_t1_ParamLimits

0xec5b,	// (0x00033761) list_double2_graphic_pane_vc_t1

0xea45,	// (0x0003354b) list_single_heading_pane_vc_g1_ParamLimits

0xea45,	// (0x0003354b) list_single_heading_pane_vc_g1

0xea51,	// (0x00033557) list_single_heading_pane_vc_g2_ParamLimits

0xea51,	// (0x00033557) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x000340a9) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x000340a9) list_single_heading_pane_vc_g

0xec71,	// (0x00033777) list_single_heading_pane_vc_t1_ParamLimits

0xec71,	// (0x00033777) list_single_heading_pane_vc_t1

0xec87,	// (0x0003378d) list_single_heading_pane_vc_t2_ParamLimits

0xec87,	// (0x0003378d) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x000342c0) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x000342c0) list_single_heading_pane_vc_t

0xec99,	// (0x0003379f) list_setting_number_pane_vc_g1_ParamLimits

0xec99,	// (0x0003379f) list_setting_number_pane_vc_g1

0xeca5,	// (0x000337ab) list_setting_number_pane_vc_g2_ParamLimits

0xeca5,	// (0x000337ab) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x000342c5) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x000342c5) list_setting_number_pane_vc_g

0xecb1,	// (0x000337b7) list_setting_number_pane_vc_t1_ParamLimits

0xecb1,	// (0x000337b7) list_setting_number_pane_vc_t1

0xecc5,	// (0x000337cb) list_setting_number_pane_vc_t2_ParamLimits

0xecc5,	// (0x000337cb) list_setting_number_pane_vc_t2

0xece1,	// (0x000337e7) list_setting_number_pane_vc_t3_ParamLimits

0xece1,	// (0x000337e7) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x000342ca) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x000342ca) list_setting_number_pane_vc_t

0xed0f,	// (0x00033815) set_value_pane_vc_ParamLimits

0xed0f,	// (0x00033815) set_value_pane_vc

0x4c39,	// (0x0002973f) list_double2_graphic_pane_vc_ParamLimits

0x4c39,	// (0x0002973f) list_double2_graphic_pane_vc

0x4c39,	// (0x0002973f) list_double2_large_graphic_pane_vc_ParamLimits

0x4c39,	// (0x0002973f) list_double2_large_graphic_pane_vc

0x4c39,	// (0x0002973f) list_double2_pane_vc_ParamLimits

0x4c39,	// (0x0002973f) list_double2_pane_vc

0x4c39,	// (0x0002973f) list_double_graphic_heading_pane_vc_ParamLimits

0x4c39,	// (0x0002973f) list_double_graphic_heading_pane_vc

0x4c39,	// (0x0002973f) list_double_graphic_pane_vc_ParamLimits

0x4c39,	// (0x0002973f) list_double_graphic_pane_vc

0x4c39,	// (0x0002973f) list_double_heading_pane_vc_ParamLimits

0x4c39,	// (0x0002973f) list_double_heading_pane_vc

0xed46,	// (0x0003384c) list_double_large_graphic_pane_vc_ParamLimits

0xed46,	// (0x0003384c) list_double_large_graphic_pane_vc

0x4c39,	// (0x0002973f) list_double_number_pane_vc_ParamLimits

0x4c39,	// (0x0002973f) list_double_number_pane_vc

0x4c39,	// (0x0002973f) list_double_pane_vc_ParamLimits

0x4c39,	// (0x0002973f) list_double_pane_vc

0x4c39,	// (0x0002973f) list_double_time_pane_vc_ParamLimits

0x4c39,	// (0x0002973f) list_double_time_pane_vc

0x4c39,	// (0x0002973f) list_setting_number_pane_vc_ParamLimits

0x4c39,	// (0x0002973f) list_setting_number_pane_vc

0x4c39,	// (0x0002973f) list_setting_pane_vc_ParamLimits

0x4c39,	// (0x0002973f) list_setting_pane_vc

0x4c39,	// (0x0002973f) list_single_graphic_heading_pane_vc_ParamLimits

0x4c39,	// (0x0002973f) list_single_graphic_heading_pane_vc

0x4c39,	// (0x0002973f) list_single_heading_pane_vc_ParamLimits

0x4c39,	// (0x0002973f) list_single_heading_pane_vc

0x4c39,	// (0x0002973f) list_single_number_heading_pane_vc_ParamLimits

0x4c39,	// (0x0002973f) list_single_number_heading_pane_vc

0xea81,	// (0x00033587) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xea81,	// (0x00033587) list_double_graphic_heading_pane_vc_g1

0xea45,	// (0x0003354b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xea45,	// (0x0003354b) list_double_graphic_heading_pane_vc_g2

0xea51,	// (0x00033557) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xea51,	// (0x00033557) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x000344cf) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x000344cf) list_double_graphic_heading_pane_vc_g

0xed6b,	// (0x00033871) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xed6b,	// (0x00033871) list_double_graphic_heading_pane_vc_t1

0xed81,	// (0x00033887) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xed81,	// (0x00033887) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x000344d6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x000344d6) list_double_graphic_heading_pane_vc_t

0xec99,	// (0x0003379f) list_setting_pane_vc_g1_ParamLimits

0xec99,	// (0x0003379f) list_setting_pane_vc_g1

0xeca5,	// (0x000337ab) list_setting_pane_vc_g2_ParamLimits

0xeca5,	// (0x000337ab) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x000342c5) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x000342c5) list_setting_pane_vc_g

0xed9f,	// (0x000338a5) list_setting_pane_vc_t1_ParamLimits

0xed9f,	// (0x000338a5) list_setting_pane_vc_t1

0xedbb,	// (0x000338c1) list_setting_pane_vc_t2_ParamLimits

0xedbb,	// (0x000338c1) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x00034519) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x00034519) list_setting_pane_vc_t

0xed0f,	// (0x00033815) set_value_pane_cp_vc_ParamLimits

0xed0f,	// (0x00033815) set_value_pane_cp_vc

0xea45,	// (0x0003354b) list_single_number_heading_pane_vc_g1_ParamLimits

0xea45,	// (0x0003354b) list_single_number_heading_pane_vc_g1

0xea51,	// (0x00033557) list_single_number_heading_pane_vc_g2_ParamLimits

0xea51,	// (0x00033557) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x000340a9) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x000340a9) list_single_number_heading_pane_vc_g

0xedd7,	// (0x000338dd) list_single_number_heading_pane_vc_t1_ParamLimits

0xedd7,	// (0x000338dd) list_single_number_heading_pane_vc_t1

0xea5d,	// (0x00033563) list_single_number_heading_pane_vc_t2_ParamLimits

0xea5d,	// (0x00033563) list_single_number_heading_pane_vc_t2

0xea6f,	// (0x00033575) list_single_number_heading_pane_vc_t3_ParamLimits

0xea6f,	// (0x00033575) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x0003451e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x0003451e) list_single_number_heading_pane_vc_t

0xea81,	// (0x00033587) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xea81,	// (0x00033587) list_single_graphic_heading_pane_vc_g1

0xea45,	// (0x0003354b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xea45,	// (0x0003354b) list_single_graphic_heading_pane_vc_g4

0xea51,	// (0x00033557) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xea51,	// (0x00033557) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9c9,	// (0x000344cf) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x000344cf) list_single_graphic_heading_pane_vc_g

0xedd7,	// (0x000338dd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xedd7,	// (0x000338dd) list_single_graphic_heading_pane_vc_t1

0xeded,	// (0x000338f3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeded,	// (0x000338f3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1f,	// (0x00034525) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x00034525) list_single_graphic_heading_pane_vc_t

0xea45,	// (0x0003354b) list_double2_pane_vc_g1_ParamLimits

0xea45,	// (0x0003354b) list_double2_pane_vc_g1

0xea51,	// (0x00033557) list_double2_pane_vc_g2_ParamLimits

0xea51,	// (0x00033557) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x000340a9) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x000340a9) list_double2_pane_vc_g

0xed30,	// (0x00033836) list_double2_pane_vc_t1_ParamLimits

0xed30,	// (0x00033836) list_double2_pane_vc_t1

0xea8d,	// (0x00033593) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xea8d,	// (0x00033593) list_double2_large_graphic_pane_vc_g1

0xea45,	// (0x0003354b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xea45,	// (0x0003354b) list_double2_large_graphic_pane_vc_g2

0xea51,	// (0x00033557) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xea51,	// (0x00033557) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x000340c6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x000340c6) list_double2_large_graphic_pane_vc_g

0xea99,	// (0x0003359f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xea99,	// (0x0003359f) list_double2_large_graphic_pane_vc_t1

0xedff,	// (0x00033905) list_double_time_pane_vc_g1_ParamLimits

0xedff,	// (0x00033905) list_double_time_pane_vc_g1

0xee0b,	// (0x00033911) list_double_time_pane_vc_g2_ParamLimits

0xee0b,	// (0x00033911) list_double_time_pane_vc_g2

0x0001,

0xfa24,	// (0x0003452a) list_double_time_pane_vc_g_ParamLimits

0xfa24,	// (0x0003452a) list_double_time_pane_vc_g

0xee17,	// (0x0003391d) list_double_time_pane_vc_t1_ParamLimits

0xee17,	// (0x0003391d) list_double_time_pane_vc_t1

0xee41,	// (0x00033947) list_double_time_pane_vc_t2_ParamLimits

0xee41,	// (0x00033947) list_double_time_pane_vc_t2

0xee8a,	// (0x00033990) list_double_time_pane_vc_t3_ParamLimits

0xee8a,	// (0x00033990) list_double_time_pane_vc_t3

0xee9c,	// (0x000339a2) list_double_time_pane_vc_t4_ParamLimits

0xee9c,	// (0x000339a2) list_double_time_pane_vc_t4

0x0003,

0xfa29,	// (0x0003452f) list_double_time_pane_vc_t_ParamLimits

0xfa29,	// (0x0003452f) list_double_time_pane_vc_t

0xea45,	// (0x0003354b) list_double_pane_vc_g1_ParamLimits

0xea45,	// (0x0003354b) list_double_pane_vc_g1

0xea51,	// (0x00033557) list_double_pane_vc_g2_ParamLimits

0xea51,	// (0x00033557) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x000340a9) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x000340a9) list_double_pane_vc_g

0xeeb0,	// (0x000339b6) list_double_pane_vc_t1_ParamLimits

0xeeb0,	// (0x000339b6) list_double_pane_vc_t1

0xeec4,	// (0x000339ca) list_double_pane_vc_t2_ParamLimits

0xeec4,	// (0x000339ca) list_double_pane_vc_t2

0x0001,

0xfa32,	// (0x00034538) list_double_pane_vc_t_ParamLimits

0xfa32,	// (0x00034538) list_double_pane_vc_t

0xea45,	// (0x0003354b) list_double_number_pane_vc_g1_ParamLimits

0xea45,	// (0x0003354b) list_double_number_pane_vc_g1

0xea51,	// (0x00033557) list_double_number_pane_vc_g2_ParamLimits

0xea51,	// (0x00033557) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x000340a9) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x000340a9) list_double_number_pane_vc_g

0xeeda,	// (0x000339e0) list_double_number_pane_vc_t1_ParamLimits

0xeeda,	// (0x000339e0) list_double_number_pane_vc_t1

0xeeec,	// (0x000339f2) list_double_number_pane_vc_t2_ParamLimits

0xeeec,	// (0x000339f2) list_double_number_pane_vc_t2

0xeec4,	// (0x000339ca) list_double_number_pane_vc_t3_ParamLimits

0xeec4,	// (0x000339ca) list_double_number_pane_vc_t3

0x0002,

0xfa37,	// (0x0003453d) list_double_number_pane_vc_t_ParamLimits

0xfa37,	// (0x0003453d) list_double_number_pane_vc_t

0xef18,	// (0x00033a1e) list_double_large_graphic_pane_vc_g1_ParamLimits

0xef18,	// (0x00033a1e) list_double_large_graphic_pane_vc_g1

0xef34,	// (0x00033a3a) list_double_large_graphic_pane_vc_g2_ParamLimits

0xef34,	// (0x00033a3a) list_double_large_graphic_pane_vc_g2

0xef48,	// (0x00033a4e) list_double_large_graphic_pane_vc_g3_ParamLimits

0xef48,	// (0x00033a4e) list_double_large_graphic_pane_vc_g3

0xef57,	// (0x00033a5d) list_double_large_graphic_pane_vc_g4_ParamLimits

0xef57,	// (0x00033a5d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3e,	// (0x00034544) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00034544) list_double_large_graphic_pane_vc_g

0xef66,	// (0x00033a6c) list_double_large_graphic_pane_vc_t1_ParamLimits

0xef66,	// (0x00033a6c) list_double_large_graphic_pane_vc_t1

0xef82,	// (0x00033a88) list_double_large_graphic_pane_vc_t2_ParamLimits

0xef82,	// (0x00033a88) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa47,	// (0x0003454d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa47,	// (0x0003454d) list_double_large_graphic_pane_vc_t

0xea45,	// (0x0003354b) list_double_heading_pane_vc_g1_ParamLimits

0xea45,	// (0x0003354b) list_double_heading_pane_vc_g1

0xea51,	// (0x00033557) list_double_heading_pane_vc_g2_ParamLimits

0xea51,	// (0x00033557) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x000340a9) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x000340a9) list_double_heading_pane_vc_g

0xefa2,	// (0x00033aa8) list_double_heading_pane_vc_t1_ParamLimits

0xefa2,	// (0x00033aa8) list_double_heading_pane_vc_t1

0xefb4,	// (0x00033aba) list_double_heading_pane_vc_t2_ParamLimits

0xefb4,	// (0x00033aba) list_double_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x00034552) list_double_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x00034552) list_double_heading_pane_vc_t

0xefcc,	// (0x00033ad2) list_double_graphic_pane_vc_g1_ParamLimits

0xefcc,	// (0x00033ad2) list_double_graphic_pane_vc_g1

0xefdf,	// (0x00033ae5) list_double_graphic_pane_vc_g2_ParamLimits

0xefdf,	// (0x00033ae5) list_double_graphic_pane_vc_g2

0xea45,	// (0x0003354b) list_double_graphic_pane_vc_g3_ParamLimits

0xea45,	// (0x0003354b) list_double_graphic_pane_vc_g3

0x0003,

0xfa51,	// (0x00034557) list_double_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x00034557) list_double_graphic_pane_vc_g

0xeffc,	// (0x00033b02) list_double_graphic_pane_vc_t1_ParamLimits

0xeffc,	// (0x00033b02) list_double_graphic_pane_vc_t1

0xf026,	// (0x00033b2c) list_double_graphic_pane_vc_t2_ParamLimits

0xf026,	// (0x00033b2c) list_double_graphic_pane_vc_t2

0x0001,

0xfa5a,	// (0x00034560) list_double_graphic_pane_vc_t_ParamLimits

0xfa5a,	// (0x00034560) list_double_graphic_pane_vc_t

0xf2d1,	// (0x00033dd7) aid_size_cell_fastswap

0xa400,	// (0x0002ef06) aid_size_cell_touch_ParamLimits

0xa400,	// (0x0002ef06) aid_size_cell_touch

0xf44e,	// (0x00033f54) popup_fast_swap_wide_window_ParamLimits

0xf44e,	// (0x00033f54) popup_fast_swap_wide_window

0xa5be,	// (0x0002f0c4) touch_pane_ParamLimits

0xa5be,	// (0x0002f0c4) touch_pane

0xd4e3,	// (0x00031fe9) button_value_adjust_pane_cp2

0xeaea,	// (0x000335f0) button_value_adjust_pane_cp4

0xeaf2,	// (0x000335f8) form_field_data_pane_cp2

0x9ff9,	// (0x0002eaff) form_field_data_wide_pane_cp2

0x067c,	// (0x00025182) bg_scroll_pane_ParamLimits

0x069b,	// (0x000251a1) scroll_handle_pane_ParamLimits

0x06af,	// (0x000251b5) scroll_sc2_down_pane_ParamLimits

0x06af,	// (0x000251b5) scroll_sc2_down_pane

0x06d6,	// (0x000251dc) scroll_sc2_up_pane_ParamLimits

0x06d6,	// (0x000251dc) scroll_sc2_up_pane

0xc35e,	// (0x00030e64) grid_wheel_folder_pane_g1_ParamLimits

0xc35e,	// (0x00030e64) grid_wheel_folder_pane_g1

0x0d22,	// (0x00025828) clock_nsta_pane_cp2_ParamLimits

0x0d22,	// (0x00025828) clock_nsta_pane_cp2

0xacb3,	// (0x0002f7b9) listscroll_midp_pane_ParamLimits

0xacbf,	// (0x0002f7c5) midp_canvas_pane

0x3115,	// (0x00027c1b) nsta_clock_indic_pane

0x3149,	// (0x00027c4f) listscroll_form_pane_vc

0x3151,	// (0x00027c57) listscroll_set_pane_vc_ParamLimits

0x3151,	// (0x00027c57) listscroll_set_pane_vc

0xb80b,	// (0x00030311) clock_nsta_pane

0xb835,	// (0x0003033b) indicator_nsta_pane

0x35b1,	// (0x000280b7) bg_popup_sub_pane_cp2_ParamLimits

0x35c5,	// (0x000280cb) find_pane_cp2_ParamLimits

0x35c5,	// (0x000280cb) find_pane_cp2

0x35db,	// (0x000280e1) grid_toobar_pane_ParamLimits

0x36bb,	// (0x000281c1) list_form_gen_pane_vc_ParamLimits

0x36bb,	// (0x000281c1) list_form_gen_pane_vc

0x36d1,	// (0x000281d7) scroll_pane_cp8_vc_ParamLimits

0x36d1,	// (0x000281d7) scroll_pane_cp8_vc

0x374d,	// (0x00028253) data_form_wide_pane_vc_ParamLimits

0x374d,	// (0x00028253) data_form_wide_pane_vc

0x3759,	// (0x0002825f) form_field_data_wide_pane_vc_g1

0x3761,	// (0x00028267) form_field_data_wide_pane_vc_t1_ParamLimits

0x3761,	// (0x00028267) form_field_data_wide_pane_vc_t1

0xd4f7,	// (0x00031ffd) input_focus_pane_cp6_vc_ParamLimits

0xd4f7,	// (0x00031ffd) input_focus_pane_cp6_vc

0x3a7d,	// (0x00028583) list_midp_pane_ParamLimits

0x4df0,	// (0x000298f6) scroll_pane_cp16_ParamLimits

0x4df0,	// (0x000298f6) scroll_pane_cp16

0x3ad3,	// (0x000285d9) button_value_adjust_pane_ParamLimits

0x3ad3,	// (0x000285d9) button_value_adjust_pane

0xbf84,	// (0x00030a8a) button_value_adjust_pane_cp6_ParamLimits

0xbf84,	// (0x00030a8a) button_value_adjust_pane_cp6

0xc0c0,	// (0x00030bc6) settings_code_pane_cp_ParamLimits

0xc0c0,	// (0x00030bc6) settings_code_pane_cp

0xce4f,	// (0x00031955) cell_touch_pane_g1

0xce4f,	// (0x00031955) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x000341e4) cell_touch_pane_g

0xc232,	// (0x00030d38) cell_touch_pane_cp_ParamLimits

0xc232,	// (0x00030d38) cell_touch_pane_cp

0xc24e,	// (0x00030d54) cell_touch_pane_ParamLimits

0xc24e,	// (0x00030d54) cell_touch_pane

0xce4f,	// (0x00031955) scroll_sc2_down_pane_g1

0xce4f,	// (0x00031955) scroll_sc2_up_pane_g1

0xce59,	// (0x0003195f) bg_set_opt_pane_cp4_vc

0x518e,	// (0x00029c94) list_set_graphic_pane_vc_g1_ParamLimits

0x518e,	// (0x00029c94) list_set_graphic_pane_vc_g1

0x519a,	// (0x00029ca0) list_set_graphic_pane_vc_g2_ParamLimits

0x519a,	// (0x00029ca0) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x000344db) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x000344db) list_set_graphic_pane_vc_g

0x51a6,	// (0x00029cac) text_primary_small_cp13_vc_ParamLimits

0x51a6,	// (0x00029cac) text_primary_small_cp13_vc

0x51be,	// (0x00029cc4) list_set_graphic_pane_vc_ParamLimits

0x51be,	// (0x00029cc4) list_set_graphic_pane_vc

0xce59,	// (0x0003195f) input_focus_pane_cp2_vc

0xce4f,	// (0x00031955) setting_code_pane_vc_g1

0xcecc,	// (0x000319d2) setting_code_pane_vc_t1

0x51d1,	// (0x00029cd7) set_text_pane_vc_t1_ParamLimits

0x51d1,	// (0x00029cd7) set_text_pane_vc_t1

0xce59,	// (0x0003195f) input_focus_pane_cp1_vc

0x51f2,	// (0x00029cf8) list_set_text_pane_vc

0xce4f,	// (0x00031955) setting_text_pane_vc_g1

0xce59,	// (0x0003195f) bg_set_opt_pane_cp2_vc

0xcec3,	// (0x000319c9) setting_slider_graphic_pane_vc_g1

0x51fc,	// (0x00029d02) setting_slider_graphic_pane_vc_t1

0x520e,	// (0x00029d14) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x000344e0) setting_slider_graphic_pane_vc_t

0x5220,	// (0x00029d26) slider_set_pane_cp_vc

0x522a,	// (0x00029d30) slider_set_pane_vc_g1

0x5233,	// (0x00029d39) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x000344e5) slider_set_pane_vc_g

0xd54f,	// (0x00032055) set_opt_bg_pane_g1_copy1

0xd557,	// (0x0003205d) set_opt_bg_pane_g2_copy1

0x525f,	// (0x00029d65) set_opt_bg_pane_g3_copy1

0xd567,	// (0x0003206d) set_opt_bg_pane_g4_copy1

0xd56f,	// (0x00032075) set_opt_bg_pane_g5_copy1

0xd577,	// (0x0003207d) set_opt_bg_pane_g6_copy1

0x5269,	// (0x00029d6f) set_opt_bg_pane_g7_copy1

0x5273,	// (0x00029d79) set_opt_bg_pane_g8_copy1

0x527d,	// (0x00029d83) set_opt_bg_pane_g9_copy1

0xce59,	// (0x0003195f) bg_set_opt_pane_cp_vc

0x5287,	// (0x00029d8d) setting_slider_pane_vc_t1

0x5296,	// (0x00029d9c) setting_slider_pane_vc_t2

0x52a8,	// (0x00029dae) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x000344f4) setting_slider_pane_vc_t

0x52ba,	// (0x00029dc0) slider_set_pane_vc

0x1808,	// (0x0002630e) volume_set_pane_vc_g1

0x1811,	// (0x00026317) volume_set_pane_vc_g2

0x181a,	// (0x00026320) volume_set_pane_vc_g3

0x1823,	// (0x00026329) volume_set_pane_vc_g4

0x182c,	// (0x00026332) volume_set_pane_vc_g5

0x1835,	// (0x0002633b) volume_set_pane_vc_g6

0x183e,	// (0x00026344) volume_set_pane_vc_g7

0x1847,	// (0x0002634d) volume_set_pane_vc_g8

0x1850,	// (0x00026356) volume_set_pane_vc_g9

0x1859,	// (0x0002635f) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x000344fb) volume_set_pane_vc_g

0x52c4,	// (0x00029dca) volume_set_pane_vc

0x52ce,	// (0x00029dd4) button_value_adjust_pane_cp1_vc

0x52d8,	// (0x00029dde) list_highlight_pane_cp2_vc

0x52e1,	// (0x00029de7) list_set_pane_vc_ParamLimits

0x52e1,	// (0x00029de7) list_set_pane_vc

0x534f,	// (0x00029e55) main_pane_set_vc_t1_ParamLimits

0x534f,	// (0x00029e55) main_pane_set_vc_t1

0x5364,	// (0x00029e6a) main_pane_set_vc_t2_ParamLimits

0x5364,	// (0x00029e6a) main_pane_set_vc_t2

0x5376,	// (0x00029e7c) main_pane_set_vc_t3_ParamLimits

0x5376,	// (0x00029e7c) main_pane_set_vc_t3

0x538a,	// (0x00029e90) main_pane_set_vc_t4_ParamLimits

0x538a,	// (0x00029e90) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x00034510) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x00034510) main_pane_set_vc_t

0x539e,	// (0x00029ea4) setting_code_pane_vc_ParamLimits

0x539e,	// (0x00029ea4) setting_code_pane_vc

0x53af,	// (0x00029eb5) setting_slider_graphic_pane_vc

0x53af,	// (0x00029eb5) setting_slider_pane_vc

0x53af,	// (0x00029eb5) setting_text_pane_vc

0x53af,	// (0x00029eb5) setting_volume_pane_vc

0x53b9,	// (0x00029ebf) scroll_pane_cp121_vc

0xd4d1,	// (0x00031fd7) set_content_pane_vc

0x53c1,	// (0x00029ec7) button_value_adjust_pane_g1

0x53ca,	// (0x00029ed0) button_value_adjust_pane_g2

0x0001,

0xfa5f,	// (0x00034565) button_value_adjust_pane_g

0x53d3,	// (0x00029ed9) form_field_slider_wide_pane_vc_t1_ParamLimits

0x53d3,	// (0x00029ed9) form_field_slider_wide_pane_vc_t1

0x53e5,	// (0x00029eeb) form_field_slider_wide_pane_vc_t2_ParamLimits

0x53e5,	// (0x00029eeb) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa64,	// (0x0003456a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x0003456a) form_field_slider_wide_pane_vc_t

0xcea7,	// (0x000319ad) input_focus_pane_cp10_vc_ParamLimits

0xcea7,	// (0x000319ad) input_focus_pane_cp10_vc

0x5411,	// (0x00029f17) slider_cont_pane_cp1_vc_ParamLimits

0x5411,	// (0x00029f17) slider_cont_pane_cp1_vc

0x5423,	// (0x00029f29) slider_form_pane_g1_cp2

0x5233,	// (0x00029d39) slider_form_pane_g2_cp2

0x5450,	// (0x00029f56) form_field_slider_pane_vc_t3

0x545e,	// (0x00029f64) form_field_slider_pane_vc_t4

0x546c,	// (0x00029f72) slider_form_pane_vc_ParamLimits

0x546c,	// (0x00029f72) slider_form_pane_vc

0x5479,	// (0x00029f7f) form_field_slider_pane_vc_t1_ParamLimits

0x5479,	// (0x00029f7f) form_field_slider_pane_vc_t1

0x53e5,	// (0x00029eeb) form_field_slider_pane_vc_t2_ParamLimits

0x53e5,	// (0x00029eeb) form_field_slider_pane_vc_t2

0x0001,

0xfa76,	// (0x0003457c) form_field_slider_pane_vc_t_ParamLimits

0xfa76,	// (0x0003457c) form_field_slider_pane_vc_t

0xcea7,	// (0x000319ad) input_focus_pane_cp9_vc_ParamLimits

0xcea7,	// (0x000319ad) input_focus_pane_cp9_vc

0x548f,	// (0x00029f95) slider_cont_pane_vc_ParamLimits

0x548f,	// (0x00029f95) slider_cont_pane_vc

0x54a3,	// (0x00029fa9) list_form_graphic_pane_cp_vc_ParamLimits

0x54a3,	// (0x00029fa9) list_form_graphic_pane_cp_vc

0x3759,	// (0x0002825f) form_field_popup_wide_pane_vc_g1

0x54b8,	// (0x00029fbe) form_field_popup_wide_pane_vc_t1_ParamLimits

0x54b8,	// (0x00029fbe) form_field_popup_wide_pane_vc_t1

0xd4f7,	// (0x00031ffd) input_focus_pane_cp8_vc_ParamLimits

0xd4f7,	// (0x00031ffd) input_focus_pane_cp8_vc

0x54fd,	// (0x0002a003) list_form_wide_pane_vc_ParamLimits

0x54fd,	// (0x0002a003) list_form_wide_pane_vc

0x5509,	// (0x0002a00f) list_form_graphic_pane_vc_g1

0x5511,	// (0x0002a017) list_form_graphic_pane_vc_t1_ParamLimits

0x5511,	// (0x0002a017) list_form_graphic_pane_vc_t1

0xceb5,	// (0x000319bb) list_highlight_pane_cp5_vc_ParamLimits

0xceb5,	// (0x000319bb) list_highlight_pane_cp5_vc

0x552d,	// (0x0002a033) list_form_graphic_pane_vc_ParamLimits

0x552d,	// (0x0002a033) list_form_graphic_pane_vc

0x3759,	// (0x0002825f) form_field_popup_pane_vc_g1

0x5543,	// (0x0002a049) form_field_popup_pane_vc_t1_ParamLimits

0x5543,	// (0x0002a049) form_field_popup_pane_vc_t1

0xd4f7,	// (0x00031ffd) input_focus_pane_cp7_vc_ParamLimits

0xd4f7,	// (0x00031ffd) input_focus_pane_cp7_vc

0x555a,	// (0x0002a060) list_form_pane_vc_ParamLimits

0x555a,	// (0x0002a060) list_form_pane_vc

0x5566,	// (0x0002a06c) data_form_pane_vc_t1_ParamLimits

0x5566,	// (0x0002a06c) data_form_pane_vc_t1

0xd54f,	// (0x00032055) input_focus_pane_vc_g1

0xd557,	// (0x0003205d) input_focus_pane_vc_g2

0xd55f,	// (0x00032065) input_focus_pane_vc_g3

0xd567,	// (0x0003206d) input_focus_pane_vc_g4

0xd56f,	// (0x00032075) input_focus_pane_vc_g5

0xd577,	// (0x0003207d) input_focus_pane_vc_g6

0xd57f,	// (0x00032085) input_focus_pane_vc_g7

0xd587,	// (0x0003208d) input_focus_pane_vc_g8

0xd58f,	// (0x00032095) input_focus_pane_vc_g9

0xce4f,	// (0x00031955) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0003416d) input_focus_pane_vc_g

0x374d,	// (0x00028253) data_form_pane_vc_ParamLimits

0x374d,	// (0x00028253) data_form_pane_vc

0x3759,	// (0x0002825f) form_field_data_pane_vc_g1

0x5583,	// (0x0002a089) form_field_data_pane_vc_t1_ParamLimits

0x5583,	// (0x0002a089) form_field_data_pane_vc_t1

0xd4f7,	// (0x00031ffd) input_focus_pane_vc_ParamLimits

0xd4f7,	// (0x00031ffd) input_focus_pane_vc

0x559d,	// (0x0002a0a3) button_value_adjust_pane_cp3_vc

0x55a5,	// (0x0002a0ab) button_value_adjust_pane_cp5_vc

0x55ad,	// (0x0002a0b3) form_field_data_pane_vc_ParamLimits

0x55ad,	// (0x0002a0b3) form_field_data_pane_vc

0x55c8,	// (0x0002a0ce) form_field_data_pane_vc_cp2

0x55d0,	// (0x0002a0d6) form_field_data_wide_pane_vc_ParamLimits

0x55d0,	// (0x0002a0d6) form_field_data_wide_pane_vc

0x55ea,	// (0x0002a0f0) form_field_data_wide_pane_vc_cp2

0x55f2,	// (0x0002a0f8) form_field_popup_pane_vc_ParamLimits

0x55f2,	// (0x0002a0f8) form_field_popup_pane_vc

0x560d,	// (0x0002a113) form_field_popup_wide_pane_vc_ParamLimits

0x560d,	// (0x0002a113) form_field_popup_wide_pane_vc

0x5627,	// (0x0002a12d) form_field_slider_pane_vc_ParamLimits

0x5627,	// (0x0002a12d) form_field_slider_pane_vc

0x563a,	// (0x0002a140) form_field_slider_wide_pane_vc_ParamLimits

0x563a,	// (0x0002a140) form_field_slider_wide_pane_vc

0xc26c,	// (0x00030d72) grid_touch_1_pane_ParamLimits

0xc26c,	// (0x00030d72) grid_touch_1_pane

0xc280,	// (0x00030d86) grid_touch_2_pane_ParamLimits

0xc280,	// (0x00030d86) grid_touch_2_pane

0x5720,	// (0x0002a226) touch_pane_g1_ParamLimits

0x5720,	// (0x0002a226) touch_pane_g1

0x5673,	// (0x0002a179) cell_app_pane_cp_wide_ParamLimits

0x5673,	// (0x0002a179) cell_app_pane_cp_wide

0x5684,	// (0x0002a18a) grid_popup_fast_wide_pane_ParamLimits

0x5684,	// (0x0002a18a) grid_popup_fast_wide_pane

0x5698,	// (0x0002a19e) scroll_pane_cp19_ParamLimits

0x5698,	// (0x0002a19e) scroll_pane_cp19

0xce59,	// (0x0003195f) bg_popup_window_pane_cp20

0x56ac,	// (0x0002a1b2) listscroll_popup_fast_wide_pane

0xc2ac,	// (0x00030db2) grid_indicator_nsta_pane

0x56c6,	// (0x0002a1cc) clock_nsta_pane_g1

0x56cf,	// (0x0002a1d5) clock_nsta_pane_t1

0xc2b8,	// (0x00030dbe) cell_indicator_nsta_pane_ParamLimits

0xc2b8,	// (0x00030dbe) cell_indicator_nsta_pane

0x5720,	// (0x0002a226) cell_indicator_nsta_pane_g1

0xc2d3,	// (0x00030dd9) cell_indicator_nsta_pane_g2

0x0001,

0xfa87,	// (0x0003458d) cell_indicator_nsta_pane_g

0x5741,	// (0x0002a247) clock_nsta_pane_cp

0x574a,	// (0x0002a250) indicator_nsta_pane_cp

0x5754,	// (0x0002a25a) nsta_clock_indic_pane_g1

0xcef1,	// (0x000319f7) grid_indicator_pane

0x07c8,	// (0x000252ce) scroll_pane_cp29

0x0c4f,	// (0x00025755) indicator_nsta_pane_cp2_ParamLimits

0x0c4f,	// (0x00025755) indicator_nsta_pane_cp2

0xceb5,	// (0x000319bb) main_apps_wheel_pane

0x393a,	// (0x00028440) form_midp_field_text_pane_ParamLimits

0x3a89,	// (0x0002858f) scroll_bar_cp050_ParamLimits

0x57ad,	// (0x0002a2b3) cell_indicator_pane_ParamLimits

0x57ad,	// (0x0002a2b3) cell_indicator_pane

0x57c5,	// (0x0002a2cb) cell_indicator_pane_g1

0xc2e0,	// (0x00030de6) grid_wheel_folder_pane_ParamLimits

0xc2e0,	// (0x00030de6) grid_wheel_folder_pane

0xc2ee,	// (0x00030df4) list_wheel_apps_pane_ParamLimits

0xc2ee,	// (0x00030df4) list_wheel_apps_pane

0xc2fc,	// (0x00030e02) main_apps_wheel_pane_g1_ParamLimits

0xc2fc,	// (0x00030e02) main_apps_wheel_pane_g1

0xc30c,	// (0x00030e12) main_apps_wheel_pane_g2_ParamLimits

0xc30c,	// (0x00030e12) main_apps_wheel_pane_g2

0x0001,

0xfaa3,	// (0x000345a9) main_apps_wheel_pane_g_ParamLimits

0xfaa3,	// (0x000345a9) main_apps_wheel_pane_g

0xc31c,	// (0x00030e22) main_apps_wheel_pane_t1_ParamLimits

0xc31c,	// (0x00030e22) main_apps_wheel_pane_t1

0xc334,	// (0x00030e3a) list_wheel_apps_pane_g1

0xc33c,	// (0x00030e42) list_wheel_apps_pane_g2

0xc344,	// (0x00030e4a) list_wheel_apps_pane_g3

0xc34c,	// (0x00030e52) list_wheel_apps_pane_g4

0xc354,	// (0x00030e5a) list_wheel_apps_pane_g5

0x0004,

0xfaa8,	// (0x000345ae) list_wheel_apps_pane_g

0x2c87,	// (0x0002778d) navi_icon_text_pane

0xb6fd,	// (0x00030203) aid_fill_nsta

0xc371,	// (0x00030e77) navi_icon_text_pane_g1

0xc37d,	// (0x00030e83) navi_icon_text_pane_t1

0x0de6,	// (0x000258ec) list_set_graphic_pane_t1_ParamLimits

0x0de6,	// (0x000258ec) list_set_graphic_pane_t1

0x41f6,	// (0x00028cfc) popup_midp_note_alarm_window_t6_ParamLimits

0x41f6,	// (0x00028cfc) popup_midp_note_alarm_window_t6

0x4208,	// (0x00028d0e) popup_midp_note_alarm_window_t7_ParamLimits

0x4208,	// (0x00028d0e) popup_midp_note_alarm_window_t7

0x421a,	// (0x00028d20) popup_midp_note_alarm_window_t8_ParamLimits

0x421a,	// (0x00028d20) popup_midp_note_alarm_window_t8

0x422c,	// (0x00028d32) popup_midp_note_alarm_window_t9_ParamLimits

0x422c,	// (0x00028d32) popup_midp_note_alarm_window_t9

0x423e,	// (0x00028d44) popup_midp_note_alarm_window_t10_ParamLimits

0x423e,	// (0x00028d44) popup_midp_note_alarm_window_t10

0x4250,	// (0x00028d56) popup_midp_note_alarm_window_t11_ParamLimits

0x4250,	// (0x00028d56) popup_midp_note_alarm_window_t11

0x4262,	// (0x00028d68) scroll_pane_cp17_ParamLimits

0x4262,	// (0x00028d68) scroll_pane_cp17

0x1808,	// (0x0002630e) volume_small_pane_cp_g1

0x1b19,	// (0x0002661f) volume_small_pane_cp_g2

0x1b22,	// (0x00026628) volume_small_pane_cp_g3

0x1b2b,	// (0x00026631) volume_small_pane_cp_g4

0x1b34,	// (0x0002663a) volume_small_pane_cp_g5

0x1b3d,	// (0x00026643) volume_small_pane_cp_g6

0x1b46,	// (0x0002664c) volume_small_pane_cp_g7

0x1b4f,	// (0x00026655) volume_small_pane_cp_g8

0x1b58,	// (0x0002665e) volume_small_pane_cp_g9

0x1b61,	// (0x00026667) volume_small_pane_cp_g10

0x2ef4,	// (0x000279fa) midp_ticker_pane_g1_ParamLimits

0x2f00,	// (0x00027a06) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x00034239) midp_ticker_pane_g_ParamLimits

0xad57,	// (0x0002f85d) midp_ticker_pane_t1_ParamLimits

0xb721,	// (0x00030227) aid_fill_nsta_2

0x3a75,	// (0x0002857b) list_form2_midp_pane

0x4bf1,	// (0x000296f7) midp_editing_number_pane_ParamLimits

0x4c00,	// (0x00029706) midp_ticker_pane_ParamLimits

0x58c4,	// (0x0002a3ca) form2_midp_field_pane

0x58e8,	// (0x0002a3ee) scroll_pane_cp51

0x5908,	// (0x0002a40e) form2_midp_button_pane_ParamLimits

0x5908,	// (0x0002a40e) form2_midp_button_pane

0x591a,	// (0x0002a420) form2_midp_content_pane_ParamLimits

0x591a,	// (0x0002a420) form2_midp_content_pane

0x5934,	// (0x0002a43a) form2_midp_field_choice_group_pane

0x593c,	// (0x0002a442) form2_midp_field_pane_g1

0x5944,	// (0x0002a44a) form2_midp_field_pane_g2

0x594c,	// (0x0002a452) form2_midp_field_pane_g3

0x5954,	// (0x0002a45a) form2_midp_field_pane_g4

0x0003,

0xfacd,	// (0x000345d3) form2_midp_field_pane_g

0x595c,	// (0x0002a462) form2_midp_gauge_slider_pane

0x5964,	// (0x0002a46a) form2_midp_gauge_wait_pane

0x596c,	// (0x0002a472) form2_midp_image_pane_ParamLimits

0x596c,	// (0x0002a472) form2_midp_image_pane

0x5987,	// (0x0002a48d) form2_midp_label_pane_ParamLimits

0x5987,	// (0x0002a48d) form2_midp_label_pane

0xc3ab,	// (0x00030eb1) form2_midp_label_pane_cp_ParamLimits

0xc3ab,	// (0x00030eb1) form2_midp_label_pane_cp

0x59c7,	// (0x0002a4cd) form2_midp_string_pane_ParamLimits

0x59c7,	// (0x0002a4cd) form2_midp_string_pane

0xf044,	// (0x00033b4a) form2_midp_text_pane_ParamLimits

0xf044,	// (0x00033b4a) form2_midp_text_pane

0x59d9,	// (0x0002a4df) form2_midp_time_pane

0x59e9,	// (0x0002a4ef) input_focus_pane_cp51_ParamLimits

0x59e9,	// (0x0002a4ef) input_focus_pane_cp51

0x5a01,	// (0x0002a507) form2_midp_label_pane_t1_ParamLimits

0x5a01,	// (0x0002a507) form2_midp_label_pane_t1

0xf065,	// (0x00033b6b) form2_mdip_text_pane_t1_ParamLimits

0xf065,	// (0x00033b6b) form2_mdip_text_pane_t1

0xf089,	// (0x00033b8f) form2_midp_time_pane_t1

0x5a4f,	// (0x0002a555) form2_midp_gauge_slider_pane_t1

0xc3cc,	// (0x00030ed2) form2_midp_gauge_slider_pane_t2

0xc3de,	// (0x00030ee4) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad6,	// (0x000345dc) form2_midp_gauge_slider_pane_t

0x5a85,	// (0x0002a58b) form2_midp_slider_pane

0x5a91,	// (0x0002a597) form2_midp_gauge_wait_pane_t1

0x5a9f,	// (0x0002a5a5) form2_midp_wait_pane_ParamLimits

0x5a9f,	// (0x0002a5a5) form2_midp_wait_pane

0x37a0,	// (0x000282a6) list_single_2graphic_pane_cp4_ParamLimits

0x37a0,	// (0x000282a6) list_single_2graphic_pane_cp4

0xc3f0,	// (0x00030ef6) list_single_midp_graphic_pane_cp_ParamLimits

0xc3f0,	// (0x00030ef6) list_single_midp_graphic_pane_cp

0xce59,	// (0x0003195f) list_highlight_pane_cp20

0x5ae3,	// (0x0002a5e9) list_single_2graphic_pane_g1_cp4

0x5070,	// (0x00029b76) list_single_2graphic_pane_g2_cp4

0x5aeb,	// (0x0002a5f1) list_single_2graphic_pane_t1_cp4

0xceb5,	// (0x000319bb) list_highlight_pane_cp21

0x5afa,	// (0x0002a600) list_single_midp_graphic_pane_g4_cp

0x5b09,	// (0x0002a60f) list_single_midp_graphic_pane_t1_cp

0xc411,	// (0x00030f17) form2_mdip_string_pane_t1_ParamLimits

0xc411,	// (0x00030f17) form2_mdip_string_pane_t1

0xce59,	// (0x0003195f) bg_wml_button_pane_cp2

0xce4f,	// (0x00031955) form2_midp_image_pane_g1

0xeac7,	// (0x000335cd) list_double_large_graphic_pane_g5_ParamLimits

0xeac7,	// (0x000335cd) list_double_large_graphic_pane_g5

0xacb3,	// (0x0002f7b9) midp_form_pane_ParamLimits

0xceb5,	// (0x000319bb) main_apps_wheel_pane_ParamLimits

0xb417,	// (0x0002ff1d) popup_preview_window_ParamLimits

0xb417,	// (0x0002ff1d) popup_preview_window

0x166c,	// (0x00026172) popup_touch_info_window_ParamLimits

0x166c,	// (0x00026172) popup_touch_info_window

0x168e,	// (0x00026194) popup_touch_menu_window_ParamLimits

0x168e,	// (0x00026194) popup_touch_menu_window

0xce45,	// (0x0003194b) bg_popup_sub_pane_cp6

0x5bba,	// (0x0002a6c0) list_touch_menu_pane

0x5bc2,	// (0x0002a6c8) list_single_touch_menu_pane_ParamLimits

0x5bc2,	// (0x0002a6c8) list_single_touch_menu_pane

0x5bda,	// (0x0002a6e0) list_single_touch_menu_pane_t1

0xceb5,	// (0x000319bb) bg_popup_sub_pane_cp7_ParamLimits

0xceb5,	// (0x000319bb) bg_popup_sub_pane_cp7

0x5be8,	// (0x0002a6ee) heading_sub_pane

0x5bf0,	// (0x0002a6f6) list_touch_info_pane_ParamLimits

0x5bf0,	// (0x0002a6f6) list_touch_info_pane

0x5bff,	// (0x0002a705) list_single_touch_info_pane_ParamLimits

0x5bff,	// (0x0002a705) list_single_touch_info_pane

0x5c11,	// (0x0002a717) list_single_touch_info_pane_t1

0x5c1f,	// (0x0002a725) list_single_touch_info_pane_t2

0x0001,

0xfae4,	// (0x000345ea) list_single_touch_info_pane_t

0x2e16,	// (0x0002791c) bg_popup_heading_pane_cp

0x5c2d,	// (0x0002a733) heading_sub_pane_t1

0x36e7,	// (0x000281ed) bg_popup_preview_window_pane_cp_ParamLimits

0x36e7,	// (0x000281ed) bg_popup_preview_window_pane_cp

0x5be8,	// (0x0002a6ee) heading_preview_pane

0x5bf0,	// (0x0002a6f6) list_preview_pane_ParamLimits

0x5bf0,	// (0x0002a6f6) list_preview_pane

0x5c3b,	// (0x0002a741) popup_preview_window_g1

0x5bff,	// (0x0002a705) list_single_preview_pane_ParamLimits

0x5bff,	// (0x0002a705) list_single_preview_pane

0x5c43,	// (0x0002a749) list_single_preview_pane_g1

0x5c4b,	// (0x0002a751) list_single_preview_pane_t1

0x5c11,	// (0x0002a717) list_single_preview_pane_t2

0x0001,

0xfae9,	// (0x000345ef) list_single_preview_pane_t

0x5c59,	// (0x0002a75f) bg_popup_heading_pane_cp2_ParamLimits

0x5c59,	// (0x0002a75f) bg_popup_heading_pane_cp2

0x5c6f,	// (0x0002a775) heading_preview_pane_g1

0x5c77,	// (0x0002a77d) heading_preview_pane_t1_ParamLimits

0x5c77,	// (0x0002a77d) heading_preview_pane_t1

0xcf08,	// (0x00031a0e) soft_indicator_pane_t1_ParamLimits

0xd46a,	// (0x00031f70) scroll_pane_ParamLimits

0x06c4,	// (0x000251ca) scroll_sc2_left_pane

0x06cd,	// (0x000251d3) scroll_sc2_right_pane

0x06ec,	// (0x000251f2) scroll_bg_pane_g1_ParamLimits

0x0701,	// (0x00025207) scroll_bg_pane_g2_ParamLimits

0x0719,	// (0x0002521f) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x000341c4) scroll_bg_pane_g_ParamLimits

0x06ec,	// (0x000251f2) scroll_handle_pane_g1_ParamLimits

0x073b,	// (0x00025241) scroll_handle_pane_g2_ParamLimits

0x0719,	// (0x0002521f) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x000341cb) scroll_handle_pane_g_ParamLimits

0x10ca,	// (0x00025bd0) popup_choice_list_window_ParamLimits

0x10ca,	// (0x00025bd0) popup_choice_list_window

0x35bd,	// (0x000280c3) choice_list_pane

0x363f,	// (0x00028145) cell_toolbar_pane_t1

0x3667,	// (0x0002816d) toolbar_button_pane_ParamLimits

0x472c,	// (0x00029232) ai_gene_pane_1_t2_ParamLimits

0x472c,	// (0x00029232) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x000343ee) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x000343ee) ai_gene_pane_1_t

0x5c94,	// (0x0002a79a) scroll_sc2_left_pane_g1

0x5c94,	// (0x0002a79a) scroll_sc2_right_pane_g1

0x313d,	// (0x00027c43) bg_popup_sub_pane_cp10

0x5c9e,	// (0x0002a7a4) list_choice_list_pane

0x5cb7,	// (0x0002a7bd) list_single_choice_list_pane_ParamLimits

0x5cb7,	// (0x0002a7bd) list_single_choice_list_pane

0x5ccf,	// (0x0002a7d5) list_single_choice_list_pane_g1

0xd658,	// (0x0003215e) list_single_choice_list_pane_t1_ParamLimits

0xd658,	// (0x0003215e) list_single_choice_list_pane_t1

0x5cd7,	// (0x0002a7dd) choice_list_pane_g1

0x5cdf,	// (0x0002a7e5) choice_list_pane_t1

0xce45,	// (0x0003194b) input_focus_pane_cp11

0x0423,	// (0x00024f29) title_pane_stacon_g2_ParamLimits

0x0423,	// (0x00024f29) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x000341aa) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x000341aa) title_pane_stacon_g

0x2e16,	// (0x0002791c) cursor_press_pane

0xb08e,	// (0x0002fb94) popup_fep_hwr_window_ParamLimits

0xb08e,	// (0x0002fb94) popup_fep_hwr_window

0x120e,	// (0x00025d14) popup_fep_vkb_window_ParamLimits

0x120e,	// (0x00025d14) popup_fep_vkb_window

0x5ced,	// (0x0002a7f3) cursor_press_pane_g1

0x0002,

0xfb12,	// (0x00034618) fep_vkb_side_pane_g_ParamLimits

0x1ba3,	// (0x000266a9) fep_hwr_candidate_pane_ParamLimits

0x1ba3,	// (0x000266a9) fep_hwr_candidate_pane

0x1bcd,	// (0x000266d3) fep_hwr_side_pane_ParamLimits

0x1bcd,	// (0x000266d3) fep_hwr_side_pane

0x1bef,	// (0x000266f5) fep_hwr_top_pane_ParamLimits

0x1bef,	// (0x000266f5) fep_hwr_top_pane

0x1c07,	// (0x0002670d) fep_hwr_write_pane_ParamLimits

0x1c07,	// (0x0002670d) fep_hwr_write_pane

0xfb12,	// (0x00034618) fep_vkb_side_pane_g

0x5cf5,	// (0x0002a7fb) fep_hwr_top_pane_g1

0x5d07,	// (0x0002a80d) fep_hwr_top_pane_g2

0x1c33,	// (0x00026739) fep_hwr_top_pane_g3

0x0002,

0xfaee,	// (0x000345f4) fep_hwr_top_pane_g

0x1c48,	// (0x0002674e) fep_hwr_top_text_pane

0x0890,	// (0x00025396) fep_hwr_top_text_pane_g1

0x5d3d,	// (0x0002a843) fep_hwr_top_text_pane_t1

0x1d52,	// (0x00026858) fep_hwr_candidate_pane_g1

0x5f88,	// (0x0002aa8e) fep_vkb_keypad_pane_g3_ParamLimits

0x5f88,	// (0x0002aa8e) fep_vkb_keypad_pane_g3

0x5fb4,	// (0x0002aaba) fep_vkb_keypad_pane_g4_ParamLimits

0x5fb4,	// (0x0002aaba) fep_vkb_keypad_pane_g4

0x602b,	// (0x0002ab31) fep_vkb_bottom_pane_g2_ParamLimits

0x602b,	// (0x0002ab31) fep_vkb_bottom_pane_g2

0x0001,

0xfb19,	// (0x0003461f) fep_vkb_bottom_pane_g_ParamLimits

0xfb19,	// (0x0003461f) fep_vkb_bottom_pane_g

0x5c94,	// (0x0002a79a) cell_vkb_side_pane_g2

0x0001,

0xfb23,	// (0x00034629) cell_vkb_side_pane_g

0x60b6,	// (0x0002abbc) cell_vkb_side_pane_t1

0x60c4,	// (0x0002abca) cell_vkb_side_pane_t1_copy1

0x5c94,	// (0x0002a79a) bg_fep_vkb_candidate_pane_g2

0x6208,	// (0x0002ad0e) cell_vkb_candidate_pane_ParamLimits

0x5d4b,	// (0x0002a851) aid_size_cell_vkb_ParamLimits

0x5d4b,	// (0x0002a851) aid_size_cell_vkb

0x6208,	// (0x0002ad0e) cell_vkb_candidate_pane

0x1d6c,	// (0x00026872) bg_popup_fep_shadow_pane_g1

0xc4fa,	// (0x00031000) fep_vkb_bottom_pane_ParamLimits

0xc4fa,	// (0x00031000) fep_vkb_bottom_pane

0x5e1a,	// (0x0002a920) fep_vkb_candidate_pane_ParamLimits

0x5e1a,	// (0x0002a920) fep_vkb_candidate_pane

0xc526,	// (0x0003102c) fep_vkb_keypad_pane_ParamLimits

0xc526,	// (0x0003102c) fep_vkb_keypad_pane

0xc54d,	// (0x00031053) fep_vkb_side_pane_ParamLimits

0xc54d,	// (0x00031053) fep_vkb_side_pane

0xc589,	// (0x0003108f) fep_vkb_top_pane_ParamLimits

0xc589,	// (0x0003108f) fep_vkb_top_pane

0x5ee1,	// (0x0002a9e7) fep_vkb_top_pane_g1_ParamLimits

0x5ee1,	// (0x0002a9e7) fep_vkb_top_pane_g1

0x5ef0,	// (0x0002a9f6) fep_vkb_top_pane_g2_ParamLimits

0x5ef0,	// (0x0002a9f6) fep_vkb_top_pane_g2

0x5eff,	// (0x0002aa05) fep_vkb_top_pane_g3_ParamLimits

0x5eff,	// (0x0002aa05) fep_vkb_top_pane_g3

0x0003,

0xfb09,	// (0x0003460f) fep_vkb_top_pane_g_ParamLimits

0xfb09,	// (0x0003460f) fep_vkb_top_pane_g

0x5f1d,	// (0x0002aa23) fep_vkb_top_text_pane_ParamLimits

0x5f1d,	// (0x0002aa23) fep_vkb_top_text_pane

0xc5c5,	// (0x000310cb) fep_vkb_side_pane_g1_ParamLimits

0xc5c5,	// (0x000310cb) fep_vkb_side_pane_g1

0x5f77,	// (0x0002aa7d) grid_vkb_side_pane_ParamLimits

0x5f77,	// (0x0002aa7d) grid_vkb_side_pane

0x1d74,	// (0x0002687a) bg_popup_fep_shadow_pane_g2

0x1d7d,	// (0x00026883) bg_popup_fep_shadow_pane_g3

0x1d85,	// (0x0002688b) bg_popup_fep_shadow_pane_g4

0x1d8e,	// (0x00026894) bg_popup_fep_shadow_pane_g5

0x1d98,	// (0x0002689e) bg_popup_fep_shadow_pane_g6

0x1da0,	// (0x000268a6) bg_popup_fep_shadow_pane_g7

0xd56f,	// (0x00032075) bg_popup_fep_shadow_pane_g8

0x5fd6,	// (0x0002aadc) grid_vkb_keypad_number_pane_ParamLimits

0x5fd6,	// (0x0002aadc) grid_vkb_keypad_number_pane

0x5fea,	// (0x0002aaf0) grid_vkb_keypad_pane_ParamLimits

0x5fea,	// (0x0002aaf0) grid_vkb_keypad_pane

0x6010,	// (0x0002ab16) fep_vkb_bottom_pane_g1_ParamLimits

0x6010,	// (0x0002ab16) fep_vkb_bottom_pane_g1

0x6039,	// (0x0002ab3f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6039,	// (0x0002ab3f) grid_vkb_keypad_bottom_left_pane

0x604e,	// (0x0002ab54) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x604e,	// (0x0002ab54) grid_vkb_keypad_bottom_right_pane

0x6063,	// (0x0002ab69) fep_vkb_top_text_pane_g1

0xc60c,	// (0x00031112) fep_vkb_top_text_pane_t1

0xc61e,	// (0x00031124) cell_vkb_side_pane_ParamLimits

0xc61e,	// (0x00031124) cell_vkb_side_pane

0x5c94,	// (0x0002a79a) cell_vkb_side_pane_g1

0x60d2,	// (0x0002abd8) cell_vkb_keypad_pane_ParamLimits

0x60d2,	// (0x0002abd8) cell_vkb_keypad_pane

0x615f,	// (0x0002ac65) cell_vkb_keypad_pane_g1

0x0008,

0xfb36,	// (0x0003463c) bg_popup_fep_shadow_pane_g

0x5c94,	// (0x0002a79a) cell_hwr_side_pane_g1

0x5c94,	// (0x0002a79a) cell_hwr_side_pane_g2

0x6169,	// (0x0002ac6f) cell_vkb_keypad_pane_t1

0xc634,	// (0x0003113a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc634,	// (0x0003113a) cell_vkb_keypad_bottom_left_pane

0xc649,	// (0x0003114f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc649,	// (0x0003114f) cell_vkb_keypad_bottom_right_pane

0x5c94,	// (0x0002a79a) cell_vkb_keypad_bottom_left_pane_g1

0x5c94,	// (0x0002a79a) cell_vkb_keypad_bottom_right_pane_g1

0x61cd,	// (0x0002acd3) cell_vkb_keypad_number_pane_ParamLimits

0x61cd,	// (0x0002acd3) cell_vkb_keypad_number_pane

0x61ec,	// (0x0002acf2) cell_vkb_keypad_number_pane_g1

0x61f6,	// (0x0002acfc) cell_vkb_keypad_number_pane_g2

0x61ff,	// (0x0002ad05) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb28,	// (0x0003462e) cell_vkb_keypad_number_pane_g

0x6169,	// (0x0002ac6f) cell_vkb_keypad_number_pane_t1

0x6229,	// (0x0002ad2f) fep_vkb_candidate_pane_g1

0x0001,

0xfb23,	// (0x00034629) cell_hwr_side_pane_g

0x6242,	// (0x0002ad48) cell_hwr_side_pane_t1

0x1db2,	// (0x000268b8) cell_hwr_side_pane_t1_copy1

0x5f0f,	// (0x0002aa15) cell_hwr_candidate_pane_g1

0x1dc0,	// (0x000268c6) cell_hwr_candidate_pane_t1

0x5c94,	// (0x0002a79a) cell_vkb_candidate_pane_g2

0x62c8,	// (0x0002adce) cell_vkb_candidate_pane_t1

0x1b6a,	// (0x00026670) bg_popup_fep_shadow_pane_ParamLimits

0x1b6a,	// (0x00026670) bg_popup_fep_shadow_pane

0xd66d,	// (0x00032173) bg_fep_hwr_top_pane_g4

0x5d19,	// (0x0002a81f) bg_hwr_side_pane_g1_ParamLimits

0x5d19,	// (0x0002a81f) bg_hwr_side_pane_g1

0xc4b3,	// (0x00030fb9) cell_hwr_side_pane_ParamLimits

0xc4b3,	// (0x00030fb9) cell_hwr_side_pane

0x1cc3,	// (0x000267c9) fep_hwr_write_pane_g1_ParamLimits

0x1cc3,	// (0x000267c9) fep_hwr_write_pane_g1

0x1cd0,	// (0x000267d6) fep_hwr_write_pane_g2_ParamLimits

0x1cd0,	// (0x000267d6) fep_hwr_write_pane_g2

0x1cdd,	// (0x000267e3) fep_hwr_write_pane_g3_ParamLimits

0x1cdd,	// (0x000267e3) fep_hwr_write_pane_g3

0xc4d3,	// (0x00030fd9) fep_hwr_write_pane_g4_ParamLimits

0xc4d3,	// (0x00030fd9) fep_hwr_write_pane_g4

0x0005,

0xfaf5,	// (0x000345fb) fep_hwr_write_pane_g_ParamLimits

0xfaf5,	// (0x000345fb) fep_hwr_write_pane_g

0xd66d,	// (0x00032173) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd66d,	// (0x00032173) bg_fep_hwr_candidate_pane_g2

0x1d00,	// (0x00026806) cell_hwr_candidate_pane_ParamLimits

0x1d00,	// (0x00026806) cell_hwr_candidate_pane

0x1d52,	// (0x00026858) fep_hwr_candidate_pane_g1_ParamLimits

0x5d79,	// (0x0002a87f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5d79,	// (0x0002a87f) bg_popup_fep_shadow_pane_cp2

0x5f0f,	// (0x0002aa15) fep_vkb_top_pane_g4_ParamLimits

0x5f0f,	// (0x0002aa15) fep_vkb_top_pane_g4

0x5f55,	// (0x0002aa5b) fep_vkb_side_pane_g2_ParamLimits

0x5f55,	// (0x0002aa5b) fep_vkb_side_pane_g2

0x9f07,	// (0x0002ea0d) list_setting_pane_t4_ParamLimits

0x9f07,	// (0x0002ea0d) list_setting_pane_t4

0x9f9b,	// (0x0002eaa1) list_setting_number_pane_t5_ParamLimits

0x9f9b,	// (0x0002eaa1) list_setting_number_pane_t5

0x08e6,	// (0x000253ec) list_double_heading_pane_cp2_ParamLimits

0x08e6,	// (0x000253ec) list_double_heading_pane_cp2

0x62d6,	// (0x0002addc) list_double_heading_pane_g1_cp2_ParamLimits

0x62d6,	// (0x0002addc) list_double_heading_pane_g1_cp2

0x62e2,	// (0x0002ade8) list_double_heading_pane_g2_cp2_ParamLimits

0x62e2,	// (0x0002ade8) list_double_heading_pane_g2_cp2

0x62f6,	// (0x0002adfc) list_double_heading_pane_t1_cp2_ParamLimits

0x62f6,	// (0x0002adfc) list_double_heading_pane_t1_cp2

0x630c,	// (0x0002ae12) list_double_heading_pane_t2_cp2_ParamLimits

0x630c,	// (0x0002ae12) list_double_heading_pane_t2_cp2

0xce3d,	// (0x00031943) aid_value_unit2

0xf472,	// (0x00033f78) popup_preview_fixed_window

0xcfe8,	// (0x00031aee) bg_popup_preview_window_pane_cp02

0x631e,	// (0x0002ae24) list_preview_fixed_pane

0x6364,	// (0x0002ae6a) list_empty_pane_fp_ParamLimits

0x6364,	// (0x0002ae6a) list_empty_pane_fp

0x6364,	// (0x0002ae6a) list_single_cale_day_pane_fp_ParamLimits

0x6364,	// (0x0002ae6a) list_single_cale_day_pane_fp

0x6364,	// (0x0002ae6a) list_single_graphic_heading_pane_fp_ParamLimits

0x6364,	// (0x0002ae6a) list_single_graphic_heading_pane_fp

0x6364,	// (0x0002ae6a) list_single_graphic_pane_fp_ParamLimits

0x6364,	// (0x0002ae6a) list_single_graphic_pane_fp

0x6364,	// (0x0002ae6a) list_single_heading_pane_fp_ParamLimits

0x6364,	// (0x0002ae6a) list_single_heading_pane_fp

0x6364,	// (0x0002ae6a) list_single_pane_fp_ParamLimits

0x6364,	// (0x0002ae6a) list_single_pane_fp

0x637d,	// (0x0002ae83) list_single_pane_fp_g1_ParamLimits

0x637d,	// (0x0002ae83) list_single_pane_fp_g1

0xef00,	// (0x00033a06) list_single_pane_fp_g2_ParamLimits

0xef00,	// (0x00033a06) list_single_pane_fp_g2

0xf09c,	// (0x00033ba2) list_single_pane_fp_g3_ParamLimits

0xf09c,	// (0x00033ba2) list_single_pane_fp_g3

0x6389,	// (0x0002ae8f) list_single_pane_fp_g4_ParamLimits

0x6389,	// (0x0002ae8f) list_single_pane_fp_g4

0x0003,

0xfb57,	// (0x0003465d) list_single_pane_fp_g_ParamLimits

0xfb57,	// (0x0003465d) list_single_pane_fp_g

0xf0b0,	// (0x00033bb6) list_single_pane_fp_t1_ParamLimits

0xf0b0,	// (0x00033bb6) list_single_pane_fp_t1

0xf0c7,	// (0x00033bcd) list_single_graphic_pane_fp_g1_ParamLimits

0xf0c7,	// (0x00033bcd) list_single_graphic_pane_fp_g1

0x637d,	// (0x0002ae83) list_single_graphic_pane_fp_g2_ParamLimits

0x637d,	// (0x0002ae83) list_single_graphic_pane_fp_g2

0xef00,	// (0x00033a06) list_single_graphic_pane_fp_g3_ParamLimits

0xef00,	// (0x00033a06) list_single_graphic_pane_fp_g3

0xf09c,	// (0x00033ba2) list_single_graphic_pane_fp_g4_ParamLimits

0xf09c,	// (0x00033ba2) list_single_graphic_pane_fp_g4

0x6389,	// (0x0002ae8f) list_single_graphic_pane_fp_g5_ParamLimits

0x6389,	// (0x0002ae8f) list_single_graphic_pane_fp_g5

0x0004,

0xfb60,	// (0x00034666) list_single_graphic_pane_fp_g_ParamLimits

0xfb60,	// (0x00034666) list_single_graphic_pane_fp_g

0xf0d3,	// (0x00033bd9) list_single_graphic_pane_fp_t1_ParamLimits

0xf0d3,	// (0x00033bd9) list_single_graphic_pane_fp_t1

0xf0c7,	// (0x00033bcd) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf0c7,	// (0x00033bcd) list_single_graphic_heading_pane_fp_g1

0x637d,	// (0x0002ae83) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x637d,	// (0x0002ae83) list_single_graphic_heading_pane_fp_g2

0xef00,	// (0x00033a06) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xef00,	// (0x00033a06) list_single_graphic_heading_pane_fp_g3

0xf09c,	// (0x00033ba2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf09c,	// (0x00033ba2) list_single_graphic_heading_pane_fp_g4

0x6389,	// (0x0002ae8f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6389,	// (0x0002ae8f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb60,	// (0x00034666) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb60,	// (0x00034666) list_single_graphic_heading_pane_fp_g

0xf0e9,	// (0x00033bef) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf0e9,	// (0x00033bef) list_single_graphic_heading_pane_fp_t1

0xf0ff,	// (0x00033c05) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf0ff,	// (0x00033c05) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6b,	// (0x00034671) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6b,	// (0x00034671) list_single_graphic_heading_pane_fp_t

0xf111,	// (0x00033c17) list_single_cale_day_pane_fp_g1_ParamLimits

0xf111,	// (0x00033c17) list_single_cale_day_pane_fp_g1

0x6395,	// (0x0002ae9b) list_single_cale_day_pane_fp_g2_ParamLimits

0x6395,	// (0x0002ae9b) list_single_cale_day_pane_fp_g2

0xf149,	// (0x00033c4f) list_single_cale_day_pane_fp_g3_ParamLimits

0xf149,	// (0x00033c4f) list_single_cale_day_pane_fp_g3

0xf171,	// (0x00033c77) list_single_cale_day_pane_fp_g4_ParamLimits

0xf171,	// (0x00033c77) list_single_cale_day_pane_fp_g4

0xf195,	// (0x00033c9b) list_single_cale_day_pane_fp_g5_ParamLimits

0xf195,	// (0x00033c9b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb70,	// (0x00034676) list_single_cale_day_pane_fp_g_ParamLimits

0xfb70,	// (0x00034676) list_single_cale_day_pane_fp_g

0xf1b9,	// (0x00033cbf) list_single_cale_day_pane_fp_t1_ParamLimits

0xf1b9,	// (0x00033cbf) list_single_cale_day_pane_fp_t1

0xf1df,	// (0x00033ce5) list_single_cale_day_pane_fp_t2_ParamLimits

0xf1df,	// (0x00033ce5) list_single_cale_day_pane_fp_t2

0xf1f8,	// (0x00033cfe) list_single_cale_day_pane_fp_t3_ParamLimits

0xf1f8,	// (0x00033cfe) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7b,	// (0x00034681) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7b,	// (0x00034681) list_single_cale_day_pane_fp_t

0x637d,	// (0x0002ae83) list_empty_pane_fp_g1_ParamLimits

0x637d,	// (0x0002ae83) list_empty_pane_fp_g1

0xf211,	// (0x00033d17) list_empty_pane_fp_t1

0xf21f,	// (0x00033d25) list_empty_pane_fp_t2

0x0001,

0xfb82,	// (0x00034688) list_empty_pane_fp_t

0x637d,	// (0x0002ae83) list_single_heading_pane_fp_g1_ParamLimits

0x637d,	// (0x0002ae83) list_single_heading_pane_fp_g1

0xef00,	// (0x00033a06) list_single_heading_pane_fp_g2_ParamLimits

0xef00,	// (0x00033a06) list_single_heading_pane_fp_g2

0xf09c,	// (0x00033ba2) list_single_heading_pane_fp_g3_ParamLimits

0xf09c,	// (0x00033ba2) list_single_heading_pane_fp_g3

0x0002,

0xfb87,	// (0x0003468d) list_single_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0003468d) list_single_heading_pane_fp_g

0xf22d,	// (0x00033d33) list_single_heading_pane_fp_t1_ParamLimits

0xf22d,	// (0x00033d33) list_single_heading_pane_fp_t1

0xf23f,	// (0x00033d45) list_single_heading_pane_fp_t2_ParamLimits

0xf23f,	// (0x00033d45) list_single_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x00034694) list_single_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x00034694) list_single_heading_pane_fp_t

0x026a,	// (0x00024d70) aid_size_cell_fast

0xcfcb,	// (0x00031ad1) soft_indicator_pane_cp1_t1

0x02a7,	// (0x00024dad) cell_app_pane_cp2_ParamLimits

0x02a7,	// (0x00024dad) cell_app_pane_cp2

0x1b8c,	// (0x00026692) fep_hwr_candidate_drop_down_list_pane

0xd67b,	// (0x00032181) fep_hwr_candidate_pane_g3_ParamLimits

0xd67b,	// (0x00032181) fep_hwr_candidate_pane_g3

0xd688,	// (0x0003218e) fep_hwr_candidate_pane_g4_ParamLimits

0xd688,	// (0x0003218e) fep_hwr_candidate_pane_g4

0x0002,

0xfb02,	// (0x00034608) fep_hwr_candidate_pane_g_ParamLimits

0xfb02,	// (0x00034608) fep_hwr_candidate_pane_g

0x5e09,	// (0x0002a90f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5e09,	// (0x0002a90f) fep_vkb_candidate_drop_down_list_pane

0x6231,	// (0x0002ad37) fep_vkb_candidate_pane_g3

0x6239,	// (0x0002ad3f) fep_vkb_candidate_pane_g4

0x0002,

0xfb2f,	// (0x00034635) fep_vkb_candidate_pane_g

0x5f0f,	// (0x0002aa15) cell_hwr_candidate_pane_g1_ParamLimits

0x6250,	// (0x0002ad56) cell_hwr_candidate_pane_g3_ParamLimits

0x6250,	// (0x0002ad56) cell_hwr_candidate_pane_g3

0x6271,	// (0x0002ad77) cell_hwr_candidate_pane_g4_ParamLimits

0x6271,	// (0x0002ad77) cell_hwr_candidate_pane_g4

0x0002,

0xfb49,	// (0x0003464f) cell_hwr_candidate_pane_g_ParamLimits

0xfb49,	// (0x0003464f) cell_hwr_candidate_pane_g

0x6292,	// (0x0002ad98) cell_vkb_candidate_pane_g3_ParamLimits

0x6292,	// (0x0002ad98) cell_vkb_candidate_pane_g3

0x62ad,	// (0x0002adb3) cell_vkb_candidate_pane_g4_ParamLimits

0x62ad,	// (0x0002adb3) cell_vkb_candidate_pane_g4

0x63a1,	// (0x0002aea7) cell_app_pane_cp2_g1_ParamLimits

0x63a1,	// (0x0002aea7) cell_app_pane_cp2_g1

0x63bf,	// (0x0002aec5) cell_app_pane_cp2_g2_ParamLimits

0x63bf,	// (0x0002aec5) cell_app_pane_cp2_g2

0x0001,

0xfb93,	// (0x00034699) cell_app_pane_cp2_g_ParamLimits

0xfb93,	// (0x00034699) cell_app_pane_cp2_g

0x63cb,	// (0x0002aed1) cell_app_pane_cp2_t1_ParamLimits

0x63cb,	// (0x0002aed1) cell_app_pane_cp2_t1

0xd4f7,	// (0x00031ffd) grid_highlight_pane_cp1_ParamLimits

0xd4f7,	// (0x00031ffd) grid_highlight_pane_cp1

0x1dde,	// (0x000268e4) cell_hwr_candidate_pane_cp1_ParamLimits

0x1dde,	// (0x000268e4) cell_hwr_candidate_pane_cp1

0x5f0f,	// (0x0002aa15) fep_hwr_candidate_drop_down_list_pane_g1

0x63dd,	// (0x0002aee3) fep_hwr_candidate_drop_down_list_pane_g2

0x63ea,	// (0x0002aef0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb98,	// (0x0003469e) fep_hwr_candidate_drop_down_list_pane_g

0x1e02,	// (0x00026908) fep_hwr_candidate_drop_down_list_scroll_pane

0x1e0b,	// (0x00026911) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1e0b,	// (0x00026911) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1e18,	// (0x0002691e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1e18,	// (0x0002691e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1e25,	// (0x0002692b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1e25,	// (0x0002692b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6292,	// (0x0002ad98) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6292,	// (0x0002ad98) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x62ad,	// (0x0002adb3) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x62ad,	// (0x0002adb3) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1e32,	// (0x00026938) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1e32,	// (0x00026938) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1e4d,	// (0x00026953) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1e4d,	// (0x00026953) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1e68,	// (0x0002696e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1e68,	// (0x0002696e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9f,	// (0x000346a5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9f,	// (0x000346a5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x63f7,	// (0x0002aefd) cell_vkb_candidate_pane_cp1_ParamLimits

0x63f7,	// (0x0002aefd) cell_vkb_candidate_pane_cp1

0x5f0f,	// (0x0002aa15) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5f0f,	// (0x0002aa15) fep_vkb_candidate_drop_down_list_pane_g1

0x63dd,	// (0x0002aee3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x63dd,	// (0x0002aee3) fep_vkb_candidate_drop_down_list_pane_g2

0x63ea,	// (0x0002aef0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x63ea,	// (0x0002aef0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb98,	// (0x0003469e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb98,	// (0x0003469e) fep_vkb_candidate_drop_down_list_pane_g

0x641d,	// (0x0002af23) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x641d,	// (0x0002af23) fep_vkb_candidate_drop_down_list_scroll_pane

0x642a,	// (0x0002af30) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x642a,	// (0x0002af30) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6437,	// (0x0002af3d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6437,	// (0x0002af3d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6443,	// (0x0002af49) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6443,	// (0x0002af49) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6250,	// (0x0002ad56) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6250,	// (0x0002ad56) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6271,	// (0x0002ad77) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6271,	// (0x0002ad77) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x644f,	// (0x0002af55) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x644f,	// (0x0002af55) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6470,	// (0x0002af76) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6470,	// (0x0002af76) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6491,	// (0x0002af97) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6491,	// (0x0002af97) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb0,	// (0x000346b6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb0,	// (0x000346b6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa614,	// (0x0002f11a) title_pane_g1_ParamLimits

0xa627,	// (0x0002f12d) title_pane_g2_ParamLimits

0xf529,	// (0x0003402f) title_pane_g_ParamLimits

0x0880,	// (0x00025386) aid_call2_pane

0x0888,	// (0x0002538e) aid_call_pane

0x0890,	// (0x00025396) popup_clock_analogue_window_g1

0x0890,	// (0x00025396) popup_clock_analogue_window_g2

0x0898,	// (0x0002539e) popup_clock_analogue_window_g3

0x08a1,	// (0x000253a7) popup_clock_analogue_window_g4

0xce4f,	// (0x00031955) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x000341d9) popup_clock_analogue_window_g

0x08a9,	// (0x000253af) popup_clock_analogue_window_t1

0x0956,	// (0x0002545c) clock_digital_number_pane_ParamLimits

0x0956,	// (0x0002545c) clock_digital_number_pane

0x0962,	// (0x00025468) clock_digital_number_pane_cp02_ParamLimits

0x0962,	// (0x00025468) clock_digital_number_pane_cp02

0x096e,	// (0x00025474) clock_digital_number_pane_cp03_ParamLimits

0x096e,	// (0x00025474) clock_digital_number_pane_cp03

0x097a,	// (0x00025480) clock_digital_number_pane_cp04_ParamLimits

0x097a,	// (0x00025480) clock_digital_number_pane_cp04

0x0986,	// (0x0002548c) clock_digital_separator_pane_ParamLimits

0x0986,	// (0x0002548c) clock_digital_separator_pane

0x0992,	// (0x00025498) popup_clock_digital_window_t1_ParamLimits

0x0992,	// (0x00025498) popup_clock_digital_window_t1

0xce4f,	// (0x00031955) clock_digital_number_pane_g1

0xce4f,	// (0x00031955) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x000341e4) clock_digital_number_pane_g

0xce4f,	// (0x00031955) clock_digital_separator_pane_g1

0xce4f,	// (0x00031955) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x000341e4) clock_digital_separator_pane_g

0xb6fd,	// (0x00030203) aid_fill_nsta_ParamLimits

0xb835,	// (0x0003033b) indicator_nsta_pane_ParamLimits

0x3456,	// (0x00027f5c) popup_clock_analogue_window

0x3456,	// (0x00027f5c) popup_clock_digital_window

0xc2ac,	// (0x00030db2) grid_indicator_nsta_pane_ParamLimits

0x56dd,	// (0x0002a1e3) clock_nsta_pane_t2

0x0001,

0xfa82,	// (0x00034588) clock_nsta_pane_t

0x0669,	// (0x0002516f) aid_size_max_handle

0xab30,	// (0x0002f636) aid_size_min_handle

0x2e16,	// (0x0002791c) editor_scroll_pane

0x64ac,	// (0x0002afb2) ex_editor_pane

0xd633,	// (0x00032139) scroll_pane_cp13

0xd496,	// (0x00031f9c) scroll_pane_cp14

0x08de,	// (0x000253e4) scroll_pane_cp36

0xabbd,	// (0x0002f6c3) list_single_graphic_hl_pane_cp2_ParamLimits

0xabbd,	// (0x0002f6c3) list_single_graphic_hl_pane_cp2

0xc139,	// (0x00030c3f) list_single_graphic_hl_pane_ParamLimits

0xc139,	// (0x00030c3f) list_single_graphic_hl_pane

0xf255,	// (0x00033d5b) aid_size_min_hl_cp1

0x64b4,	// (0x0002afba) list_highlight_pane_cp34_ParamLimits

0x64b4,	// (0x0002afba) list_highlight_pane_cp34

0x64c5,	// (0x0002afcb) list_single_graphic_hl_pane_g1_ParamLimits

0x64c5,	// (0x0002afcb) list_single_graphic_hl_pane_g1

0xa207,	// (0x0002ed0d) list_single_graphic_hl_pane_g2_ParamLimits

0xa207,	// (0x0002ed0d) list_single_graphic_hl_pane_g2

0xa207,	// (0x0002ed0d) list_single_graphic_hl_pane_g3_ParamLimits

0xa207,	// (0x0002ed0d) list_single_graphic_hl_pane_g3

0xef0c,	// (0x00033a12) list_single_graphic_hl_pane_g4_ParamLimits

0xef0c,	// (0x00033a12) list_single_graphic_hl_pane_g4

0xa213,	// (0x0002ed19) list_single_graphic_hl_pane_g5_ParamLimits

0xa213,	// (0x0002ed19) list_single_graphic_hl_pane_g5

0x0004,

0xfbc1,	// (0x000346c7) list_single_graphic_hl_pane_g_ParamLimits

0xfbc1,	// (0x000346c7) list_single_graphic_hl_pane_g

0xa227,	// (0x0002ed2d) list_single_graphic_hl_pane_t1_ParamLimits

0xa227,	// (0x0002ed2d) list_single_graphic_hl_pane_t1

0x64d2,	// (0x0002afd8) aid_size_min_hl_cp2

0x64db,	// (0x0002afe1) list_highlight_pane_cp34_cp2_ParamLimits

0x64db,	// (0x0002afe1) list_highlight_pane_cp34_cp2

0x64c5,	// (0x0002afcb) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x64c5,	// (0x0002afcb) list_single_graphic_hl_pane_g1_cp2

0x64e8,	// (0x0002afee) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x64e8,	// (0x0002afee) list_single_graphic_hl_pane_g2_cp2

0x64f4,	// (0x0002affa) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x64f4,	// (0x0002affa) list_single_graphic_hl_pane_g3_cp2

0x5812,	// (0x0002a318) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5812,	// (0x0002a318) list_single_graphic_hl_pane_g4_cp2

0x6502,	// (0x0002b008) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6502,	// (0x0002b008) list_single_graphic_hl_pane_g5_cp2

0xae6c,	// (0x0002f972) control_pane_g4_ParamLimits

0xae6c,	// (0x0002f972) control_pane_g4

0x313d,	// (0x00027c43) bg_popup_sub_pane_cp10_ParamLimits

0x5c9e,	// (0x0002a7a4) list_choice_list_pane_ParamLimits

0x5cad,	// (0x0002a7b3) scroll_pane_cp23

0xcfe8,	// (0x00031aee) bg_popup_preview_window_pane_cp02_ParamLimits

0x631e,	// (0x0002ae24) list_preview_fixed_pane_ParamLimits

0x6334,	// (0x0002ae3a) list_preview_fixed_pane_cp_ParamLimits

0x6334,	// (0x0002ae3a) list_preview_fixed_pane_cp

0x6340,	// (0x0002ae46) popup_preview_fixed_window_g1_ParamLimits

0x6340,	// (0x0002ae46) popup_preview_fixed_window_g1

0x634c,	// (0x0002ae52) popup_preview_fixed_window_g2_ParamLimits

0x634c,	// (0x0002ae52) popup_preview_fixed_window_g2

0x0002,

0xfb50,	// (0x00034656) popup_preview_fixed_window_g_ParamLimits

0xfb50,	// (0x00034656) popup_preview_fixed_window_g

0x0508,	// (0x0002500e) aid_navi_side_left_pane_ParamLimits

0x051d,	// (0x00025023) aid_navi_side_right_pane_ParamLimits

0x0535,	// (0x0002503b) navi_icon_pane_stacon_ParamLimits

0x0549,	// (0x0002504f) navi_navi_pane_stacon_ParamLimits

0x0535,	// (0x0002503b) navi_text_pane_stacon_ParamLimits

0xce45,	// (0x0003194b) main_text_info_pane

0x652c,	// (0x0002b032) listscroll_text_info_pane

0x6534,	// (0x0002b03a) list_text_info_pane_ParamLimits

0x6534,	// (0x0002b03a) list_text_info_pane

0x6543,	// (0x0002b049) scroll_pane_cp24_ParamLimits

0x6543,	// (0x0002b049) scroll_pane_cp24

0xc664,	// (0x0003116a) list_text_info_pane_t1_ParamLimits

0xc664,	// (0x0003116a) list_text_info_pane_t1

0xaff2,	// (0x0002faf8) popup_fast_swap2_window_ParamLimits

0xaff2,	// (0x0002faf8) popup_fast_swap2_window

0x6586,	// (0x0002b08c) aid_size_cell_fast2

0xce45,	// (0x0003194b) bg_popup_window_pane_cp17

0x3aa9,	// (0x000285af) heading_pane_cp2

0x3ab1,	// (0x000285b7) listscroll_fast2_pane

0x6590,	// (0x0002b096) grid_fast2_pane

0x659a,	// (0x0002b0a0) listscroll_fast2_pane_g1

0x65a4,	// (0x0002b0aa) listscroll_fast2_pane_g2

0x0001,

0xfbcc,	// (0x000346d2) listscroll_fast2_pane_g

0xd633,	// (0x00032139) scroll_pane_cp26

0x65ae,	// (0x0002b0b4) cell_fast2_pane_ParamLimits

0x65ae,	// (0x0002b0b4) cell_fast2_pane

0x65c5,	// (0x0002b0cb) cell_fast2_pane_g1

0x65ce,	// (0x0002b0d4) cell_fast2_pane_g2

0x65d7,	// (0x0002b0dd) cell_fast2_pane_g3

0x0002,

0xfbd1,	// (0x000346d7) cell_fast2_pane_g

0xd25d,	// (0x00031d63) grid_highlight_pane_cp9

0xd272,	// (0x00031d78) main_eswt_pane_ParamLimits

0xd272,	// (0x00031d78) main_eswt_pane

0x6558,	// (0x0002b05e) list_single_text_info_pane

0x65df,	// (0x0002b0e5) eswt_ctrl_button_pane

0x65df,	// (0x0002b0e5) eswt_ctrl_canvas_pane

0x65e7,	// (0x0002b0ed) eswt_ctrl_combo_pane

0x65df,	// (0x0002b0e5) eswt_ctrl_default_pane

0x65df,	// (0x0002b0e5) eswt_ctrl_label_pane

0x65ef,	// (0x0002b0f5) eswt_ctrl_wait_pane

0x65f7,	// (0x0002b0fd) eswt_shell_pane

0xce45,	// (0x0003194b) listscroll_eswt_app_pane

0x6617,	// (0x0002b11d) popup_eswt_tasktip_window_ParamLimits

0x6617,	// (0x0002b11d) popup_eswt_tasktip_window

0x36e7,	// (0x000281ed) bg_popup_window_pane_cp18

0x6628,	// (0x0002b12e) eswt_control_pane_g1_ParamLimits

0x6628,	// (0x0002b12e) eswt_control_pane_g1

0x6635,	// (0x0002b13b) eswt_control_pane_g2_ParamLimits

0x6635,	// (0x0002b13b) eswt_control_pane_g2

0x6642,	// (0x0002b148) eswt_control_pane_g3_ParamLimits

0x6642,	// (0x0002b148) eswt_control_pane_g3

0x664f,	// (0x0002b155) eswt_control_pane_g4_ParamLimits

0x664f,	// (0x0002b155) eswt_control_pane_g4

0x0003,

0xfbd8,	// (0x000346de) eswt_control_pane_g_ParamLimits

0xfbd8,	// (0x000346de) eswt_control_pane_g

0xd4f7,	// (0x00031ffd) bg_button_pane_ParamLimits

0xd4f7,	// (0x00031ffd) bg_button_pane

0xd272,	// (0x00031d78) common_borders_pane_copy2_ParamLimits

0xd272,	// (0x00031d78) common_borders_pane_copy2

0x665c,	// (0x0002b162) control_button_pane_g1_ParamLimits

0x665c,	// (0x0002b162) control_button_pane_g1

0x6668,	// (0x0002b16e) control_button_pane_g2_ParamLimits

0x6668,	// (0x0002b16e) control_button_pane_g2

0x6674,	// (0x0002b17a) control_button_pane_g3_ParamLimits

0x6674,	// (0x0002b17a) control_button_pane_g3

0x0002,

0xfbe1,	// (0x000346e7) control_button_pane_g_ParamLimits

0xfbe1,	// (0x000346e7) control_button_pane_g

0x6688,	// (0x0002b18e) control_button_pane_t1

0x6696,	// (0x0002b19c) control_button_pane_t2

0x0001,

0xfbe8,	// (0x000346ee) control_button_pane_t

0x3673,	// (0x00028179) bg_button_pane_g1

0x367b,	// (0x00028181) bg_button_pane_g2

0x3683,	// (0x00028189) bg_button_pane_g3

0x368b,	// (0x00028191) bg_button_pane_g4

0x3693,	// (0x00028199) bg_button_pane_g5

0x369b,	// (0x000281a1) bg_button_pane_g6

0x36a3,	// (0x000281a9) bg_button_pane_g7

0x36ab,	// (0x000281b1) bg_button_pane_g8

0x36b3,	// (0x000281b9) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00034342) bg_button_pane_g

0x5c59,	// (0x0002a75f) common_borders_pane_ParamLimits

0x5c59,	// (0x0002a75f) common_borders_pane

0x6628,	// (0x0002b12e) eswt_control_pane_g1_copy1_ParamLimits

0x6628,	// (0x0002b12e) eswt_control_pane_g1_copy1

0x6635,	// (0x0002b13b) eswt_control_pane_g2_copy1_ParamLimits

0x6635,	// (0x0002b13b) eswt_control_pane_g2_copy1

0x6642,	// (0x0002b148) eswt_control_pane_g3_copy1_ParamLimits

0x6642,	// (0x0002b148) eswt_control_pane_g3_copy1

0x664f,	// (0x0002b155) eswt_control_pane_g4_copy1_ParamLimits

0x664f,	// (0x0002b155) eswt_control_pane_g4_copy1

0x5c94,	// (0x0002a79a) bg_eswt_ctrl_canvas_pane_g1

0x5c59,	// (0x0002a75f) common_borders_pane_cp2_ParamLimits

0x5c59,	// (0x0002a75f) common_borders_pane_cp2

0x5c59,	// (0x0002a75f) common_borders_pane_cp3_ParamLimits

0x5c59,	// (0x0002a75f) common_borders_pane_cp3

0x66a4,	// (0x0002b1aa) separator_horizontal_pane

0x66ac,	// (0x0002b1b2) separator_vertical_pane

0x6628,	// (0x0002b12e) eswt_control_pane_g1_copy2_ParamLimits

0x6628,	// (0x0002b12e) eswt_control_pane_g1_copy2

0x6635,	// (0x0002b13b) eswt_control_pane_g2_copy2_ParamLimits

0x6635,	// (0x0002b13b) eswt_control_pane_g2_copy2

0x6642,	// (0x0002b148) eswt_control_pane_g3_copy2_ParamLimits

0x6642,	// (0x0002b148) eswt_control_pane_g3_copy2

0x664f,	// (0x0002b155) eswt_control_pane_g4_copy2_ParamLimits

0x664f,	// (0x0002b155) eswt_control_pane_g4_copy2

0xce45,	// (0x0003194b) common_borders_pane_cp4

0x66b5,	// (0x0002b1bb) separator_horizontal_pane_g1

0x66be,	// (0x0002b1c4) separator_horizontal_pane_g2

0x66c7,	// (0x0002b1cd) separator_horizontal_pane_g3

0x0002,

0xfbed,	// (0x000346f3) separator_horizontal_pane_g

0x6628,	// (0x0002b12e) eswt_control_pane_g1_copy3_ParamLimits

0x6628,	// (0x0002b12e) eswt_control_pane_g1_copy3

0x6635,	// (0x0002b13b) eswt_control_pane_g2_copy3_ParamLimits

0x6635,	// (0x0002b13b) eswt_control_pane_g2_copy3

0x6642,	// (0x0002b148) eswt_control_pane_g3_copy3_ParamLimits

0x6642,	// (0x0002b148) eswt_control_pane_g3_copy3

0x664f,	// (0x0002b155) eswt_control_pane_g4_copy3_ParamLimits

0x664f,	// (0x0002b155) eswt_control_pane_g4_copy3

0xce45,	// (0x0003194b) common_borders_pane_cp5

0x66d0,	// (0x0002b1d6) separator_vertical_pane_g1

0x66d9,	// (0x0002b1df) separator_vertical_pane_g2

0x66e2,	// (0x0002b1e8) separator_vertical_pane_g3

0x0002,

0xfbf4,	// (0x000346fa) separator_vertical_pane_g

0x6628,	// (0x0002b12e) eswt_control_pane_g1_copy4_ParamLimits

0x6628,	// (0x0002b12e) eswt_control_pane_g1_copy4

0x6635,	// (0x0002b13b) eswt_control_pane_g2_copy4_ParamLimits

0x6635,	// (0x0002b13b) eswt_control_pane_g2_copy4

0x6642,	// (0x0002b148) eswt_control_pane_g3_copy4_ParamLimits

0x6642,	// (0x0002b148) eswt_control_pane_g3_copy4

0x664f,	// (0x0002b155) eswt_control_pane_g4_copy4_ParamLimits

0x664f,	// (0x0002b155) eswt_control_pane_g4_copy4

0xc686,	// (0x0003118c) eswt_ctrl_combo_button_pane

0xc68e,	// (0x00031194) eswt_ctrl_input_pane

0xc696,	// (0x0003119c) popup_choice_list_window_cp70

0xc69e,	// (0x000311a4) eswt_ctrl_input_pane_t1

0xce45,	// (0x0003194b) input_focus_pane_cp70

0x5c59,	// (0x0002a75f) bg_button_pane_cp70_ParamLimits

0x5c59,	// (0x0002a75f) bg_button_pane_cp70

0xc6ac,	// (0x000311b2) eswt_ctrl_combo_button_pane_g1

0x6719,	// (0x0002b21f) wait_bar_pane_cp70

0x36e7,	// (0x000281ed) bg_popup_window_pane_cp70_ParamLimits

0x36e7,	// (0x000281ed) bg_popup_window_pane_cp70

0x6721,	// (0x0002b227) popup_eswt_tasktip_window_t1

0x6737,	// (0x0002b23d) wait_bar_pane_cp71_ParamLimits

0x6737,	// (0x0002b23d) wait_bar_pane_cp71

0x6743,	// (0x0002b249) grid_eswt_app_pane

0x06cd,	// (0x000251d3) scroll_pane_cp70

0xc6b4,	// (0x000311ba) cell_eswt_app_pane_ParamLimits

0xc6b4,	// (0x000311ba) cell_eswt_app_pane

0xc6e6,	// (0x000311ec) cell_eswt_app_pane_g1_ParamLimits

0xc6e6,	// (0x000311ec) cell_eswt_app_pane_g1

0xc715,	// (0x0003121b) cell_eswt_app_pane_g2_ParamLimits

0xc715,	// (0x0003121b) cell_eswt_app_pane_g2

0x0001,

0xfbfb,	// (0x00034701) cell_eswt_app_pane_g_ParamLimits

0xfbfb,	// (0x00034701) cell_eswt_app_pane_g

0xc73e,	// (0x00031244) cell_eswt_app_pane_t1_ParamLimits

0xc73e,	// (0x00031244) cell_eswt_app_pane_t1

0x6808,	// (0x0002b30e) grid_highlight_pane_cp70_ParamLimits

0x6808,	// (0x0002b30e) grid_highlight_pane_cp70

0x2cdc,	// (0x000277e2) set_content_pane_g1

0xadfe,	// (0x0002f904) status_small_volume_pane

0x1e83,	// (0x00026989) status_small_volume_pane_g1

0x1e8b,	// (0x00026991) volume_small2_pane

0x1e94,	// (0x0002699a) volume_small2_pane_g1

0x1e9d,	// (0x000269a3) volume_small2_pane_g2

0x1ea6,	// (0x000269ac) volume_small2_pane_g3

0x1eaf,	// (0x000269b5) volume_small2_pane_g4

0x1eb8,	// (0x000269be) volume_small2_pane_g5

0x1ec1,	// (0x000269c7) volume_small2_pane_g6

0x1eca,	// (0x000269d0) volume_small2_pane_g7

0x1ed3,	// (0x000269d9) volume_small2_pane_g8

0x1edc,	// (0x000269e2) volume_small2_pane_g9

0x1ee5,	// (0x000269eb) volume_small2_pane_g10

0x0009,

0xfc00,	// (0x00034706) volume_small2_pane_g

0x6063,	// (0x0002ab69) fep_vkb_top_text_pane_g1_ParamLimits

0xc60c,	// (0x00031112) fep_vkb_top_text_pane_t1_ParamLimits

0x6358,	// (0x0002ae5e) popup_preview_fixed_window_g3_ParamLimits

0x6358,	// (0x0002ae5e) popup_preview_fixed_window_g3

0xb690,	// (0x00030196) popup_toolbar_trans_pane

0xbf73,	// (0x00030a79) aid_height_set_list_ParamLimits

0x4a50,	// (0x00029556) aid_size_parent_ParamLimits

0x313d,	// (0x00027c43) list_highlight_pane_cp2_ParamLimits

0x2cdc,	// (0x000277e2) set_content_pane_g1_ParamLimits

0xc14d,	// (0x00030c53) list_single_image_pane_ParamLimits

0xc14d,	// (0x00030c53) list_single_image_pane

0xc770,	// (0x00031276) aid_size_cell_image_ParamLimits

0xc770,	// (0x00031276) aid_size_cell_image

0xc77d,	// (0x00031283) grid_single_image_pane_ParamLimits

0xc77d,	// (0x00031283) grid_single_image_pane

0xd505,	// (0x0003200b) list_single_image_pane_g1_ParamLimits

0xd505,	// (0x0003200b) list_single_image_pane_g1

0xd511,	// (0x00032017) list_single_image_pane_g2_ParamLimits

0xd511,	// (0x00032017) list_single_image_pane_g2

0x0001,

0xfc15,	// (0x0003471b) list_single_image_pane_g_ParamLimits

0xfc15,	// (0x0003471b) list_single_image_pane_g

0x682f,	// (0x0002b335) list_single_image_pane_t1_ParamLimits

0x682f,	// (0x0002b335) list_single_image_pane_t1

0xc78b,	// (0x00031291) cell_image_list_pane_ParamLimits

0xc78b,	// (0x00031291) cell_image_list_pane

0xc7a1,	// (0x000312a7) cell_image_list_pane_g1

0xc7aa,	// (0x000312b0) cell_image_list_pane_g2

0x0001,

0xfc1a,	// (0x00034720) cell_image_list_pane_g

0x686f,	// (0x0002b375) aid_size_cell_tb_trans_pane

0xd4f7,	// (0x00031ffd) bg_tb_trans_pane

0x6881,	// (0x0002b387) grid_tb_trans_pane

0x3673,	// (0x00028179) bg_tb_trans_pane_g1

0x367b,	// (0x00028181) bg_tb_trans_pane_g2

0x3683,	// (0x00028189) bg_tb_trans_pane_g3

0x368b,	// (0x00028191) bg_tb_trans_pane_g4

0x3693,	// (0x00028199) bg_tb_trans_pane_g5

0x36ab,	// (0x000281b1) bg_tb_trans_pane_g6

0x36b3,	// (0x000281b9) bg_tb_trans_pane_g7

0x369b,	// (0x000281a1) bg_tb_trans_pane_g8

0x36a3,	// (0x000281a9) bg_tb_trans_pane_g9

0x0008,

0xfc1f,	// (0x00034725) bg_tb_trans_pane_g

0x6895,	// (0x0002b39b) cell_toolbar_trans_pane_ParamLimits

0x6895,	// (0x0002b39b) cell_toolbar_trans_pane

0x5c94,	// (0x0002a79a) cell_toolbar_trans_pane_g1

0xc38f,	// (0x00030e95) list_form2_midp_pane_t1

0xc39d,	// (0x00030ea3) list_form2_midp_pane_t2

0x0001,

0xfac8,	// (0x000345ce) list_form2_midp_pane_t

0x58e8,	// (0x0002a3ee) scroll_pane_cp51_ParamLimits

0x5aaf,	// (0x0002a5b5) form2_midp_wait_pane_g1

0x5ab8,	// (0x0002a5be) form2_midp_wait_pane_g2

0x5ac1,	// (0x0002a5c7) form2_midp_wait_pane_g3

0x0002,

0xfadd,	// (0x000345e3) form2_midp_wait_pane_g

0xceb5,	// (0x000319bb) list_highlight_pane_cp21_ParamLimits

0x5afa,	// (0x0002a600) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5b09,	// (0x0002a60f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4c39,	// (0x0002973f) list_single_2graphic_im_pane_ParamLimits

0x4c39,	// (0x0002973f) list_single_2graphic_im_pane

0xc7b3,	// (0x000312b9) list_single_2graphic_im_pane_g1_ParamLimits

0xc7b3,	// (0x000312b9) list_single_2graphic_im_pane_g1

0xc7c4,	// (0x000312ca) list_single_2graphic_im_pane_g2_ParamLimits

0xc7c4,	// (0x000312ca) list_single_2graphic_im_pane_g2

0xc7d0,	// (0x000312d6) list_single_2graphic_im_pane_g3_ParamLimits

0xc7d0,	// (0x000312d6) list_single_2graphic_im_pane_g3

0x0003,

0xfc32,	// (0x00034738) list_single_2graphic_im_pane_g_ParamLimits

0xfc32,	// (0x00034738) list_single_2graphic_im_pane_g

0xc7e4,	// (0x000312ea) list_single_2graphic_im_pane_t1_ParamLimits

0xc7e4,	// (0x000312ea) list_single_2graphic_im_pane_t1

0x6364,	// (0x0002ae6a) list_single_graphic_2heading_pane_fp_ParamLimits

0x6364,	// (0x0002ae6a) list_single_graphic_2heading_pane_fp

0xf0c7,	// (0x00033bcd) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf0c7,	// (0x00033bcd) list_single_graphic_2heading_pane_fp_g1

0x637d,	// (0x0002ae83) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x637d,	// (0x0002ae83) list_single_graphic_2heading_pane_fp_g2

0xef00,	// (0x00033a06) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xef00,	// (0x00033a06) list_single_graphic_2heading_pane_fp_g3

0xf09c,	// (0x00033ba2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf09c,	// (0x00033ba2) list_single_graphic_2heading_pane_fp_g4

0x6389,	// (0x0002ae8f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6389,	// (0x0002ae8f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb60,	// (0x00034666) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb60,	// (0x00034666) list_single_graphic_2heading_pane_fp_g

0xf25e,	// (0x00033d64) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf25e,	// (0x00033d64) list_single_graphic_2heading_pane_fp_t1

0xf0ff,	// (0x00033c05) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf0ff,	// (0x00033c05) list_single_graphic_2heading_pane_fp_t2

0xf274,	// (0x00033d7a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf274,	// (0x00033d7a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3b,	// (0x00034741) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3b,	// (0x00034741) list_single_graphic_2heading_pane_fp_t

0x5d25,	// (0x0002a82b) fep_hwr_write_pane_g5_ParamLimits

0x5d25,	// (0x0002a82b) fep_hwr_write_pane_g5

0x5d31,	// (0x0002a837) fep_hwr_write_pane_g6_ParamLimits

0x5d31,	// (0x0002a837) fep_hwr_write_pane_g6

0x65f7,	// (0x0002b0fd) eswt_shell_pane_ParamLimits

0x36e7,	// (0x000281ed) bg_popup_window_pane_cp18_ParamLimits

0x4996,	// (0x0002949c) heading_pane_cp70

0x6721,	// (0x0002b227) popup_eswt_tasktip_window_t1_ParamLimits

0xb75a,	// (0x00030260) aid_touch_tab_arrow_left

0xb770,	// (0x00030276) aid_touch_tab_arrow_right

0xa64b,	// (0x0002f151) title_pane_g3_ParamLimits

0xa64b,	// (0x0002f151) title_pane_g3

0xd4b6,	// (0x00031fbc) set_value_pane_g1

0xb690,	// (0x00030196) popup_toolbar_trans_pane_ParamLimits

0x686f,	// (0x0002b375) aid_size_cell_tb_trans_pane_ParamLimits

0xd4f7,	// (0x00031ffd) bg_tb_trans_pane_ParamLimits

0x6881,	// (0x0002b387) grid_tb_trans_pane_ParamLimits

0xcfe8,	// (0x00031aee) cont_note_pane_ParamLimits

0xcfe8,	// (0x00031aee) cont_note_pane

0xd272,	// (0x00031d78) cont_snote2_single_text_pane_ParamLimits

0xd272,	// (0x00031d78) cont_snote2_single_text_pane

0xd272,	// (0x00031d78) cont_snote2_single_graphic_pane_ParamLimits

0xd272,	// (0x00031d78) cont_snote2_single_graphic_pane

0x3cd9,	// (0x000287df) cont_note_wait_pane_ParamLimits

0x3cd9,	// (0x000287df) cont_note_wait_pane

0x3cd9,	// (0x000287df) cont_note_image_pane_ParamLimits

0x3cd9,	// (0x000287df) cont_note_image_pane

0x6929,	// (0x0002b42f) popup_note2_window_g1_ParamLimits

0x6929,	// (0x0002b42f) popup_note2_window_g1

0x695a,	// (0x0002b460) popup_note2_window_t1_ParamLimits

0x695a,	// (0x0002b460) popup_note2_window_t1

0x699f,	// (0x0002b4a5) popup_note2_window_t2_ParamLimits

0x699f,	// (0x0002b4a5) popup_note2_window_t2

0x69e4,	// (0x0002b4ea) popup_note2_window_t3_ParamLimits

0x69e4,	// (0x0002b4ea) popup_note2_window_t3

0x6a29,	// (0x0002b52f) popup_note2_window_t4_ParamLimits

0x6a29,	// (0x0002b52f) popup_note2_window_t4

0xd06c,	// (0x00031b72) popup_note2_window_t5_ParamLimits

0xd06c,	// (0x00031b72) popup_note2_window_t5

0x0004,

0xfc47,	// (0x0003474d) popup_note2_window_t_ParamLimits

0xfc47,	// (0x0003474d) popup_note2_window_t

0x6a58,	// (0x0002b55e) popup_note2_image_window_g1_ParamLimits

0x6a58,	// (0x0002b55e) popup_note2_image_window_g1

0x6a64,	// (0x0002b56a) popup_note2_image_window_g2_ParamLimits

0x6a64,	// (0x0002b56a) popup_note2_image_window_g2

0x0001,

0xfc52,	// (0x00034758) popup_note2_image_window_g_ParamLimits

0xfc52,	// (0x00034758) popup_note2_image_window_g

0x6a76,	// (0x0002b57c) popup_note2_image_window_t1_ParamLimits

0x6a76,	// (0x0002b57c) popup_note2_image_window_t1

0x6a8e,	// (0x0002b594) popup_note2_image_window_t2_ParamLimits

0x6a8e,	// (0x0002b594) popup_note2_image_window_t2

0x6aa6,	// (0x0002b5ac) popup_note2_image_window_t3_ParamLimits

0x6aa6,	// (0x0002b5ac) popup_note2_image_window_t3

0x0002,

0xfc57,	// (0x0003475d) popup_note2_image_window_t_ParamLimits

0xfc57,	// (0x0003475d) popup_note2_image_window_t

0x3ce7,	// (0x000287ed) popup_note2_wait_window_g1_ParamLimits

0x3ce7,	// (0x000287ed) popup_note2_wait_window_g1

0x6ac2,	// (0x0002b5c8) popup_note2_wait_window_g2_ParamLimits

0x6ac2,	// (0x0002b5c8) popup_note2_wait_window_g2

0x3cff,	// (0x00028805) popup_note2_wait_window_g3_ParamLimits

0x3cff,	// (0x00028805) popup_note2_wait_window_g3

0x0002,

0xfc5e,	// (0x00034764) popup_note2_wait_window_g_ParamLimits

0xfc5e,	// (0x00034764) popup_note2_wait_window_g

0x6ace,	// (0x0002b5d4) popup_note2_wait_window_t1_ParamLimits

0x6ace,	// (0x0002b5d4) popup_note2_wait_window_t1

0x6aec,	// (0x0002b5f2) popup_note2_wait_window_t2_ParamLimits

0x6aec,	// (0x0002b5f2) popup_note2_wait_window_t2

0x6b0a,	// (0x0002b610) popup_note2_wait_window_t3_ParamLimits

0x6b0a,	// (0x0002b610) popup_note2_wait_window_t3

0x6b1c,	// (0x0002b622) popup_note2_wait_window_t4_ParamLimits

0x6b1c,	// (0x0002b622) popup_note2_wait_window_t4

0x0003,

0xfc65,	// (0x0003476b) popup_note2_wait_window_t_ParamLimits

0xfc65,	// (0x0003476b) popup_note2_wait_window_t

0x6b2e,	// (0x0002b634) wait_bar2_pane_ParamLimits

0x6b2e,	// (0x0002b634) wait_bar2_pane

0x6b46,	// (0x0002b64c) popup_snote2_single_text_window_g1_ParamLimits

0x6b46,	// (0x0002b64c) popup_snote2_single_text_window_g1

0x6b6e,	// (0x0002b674) popup_snote2_single_text_window_t1_ParamLimits

0x6b6e,	// (0x0002b674) popup_snote2_single_text_window_t1

0x6bba,	// (0x0002b6c0) popup_snote2_single_text_window_t2_ParamLimits

0x6bba,	// (0x0002b6c0) popup_snote2_single_text_window_t2

0x6c06,	// (0x0002b70c) popup_snote2_single_text_window_t3_ParamLimits

0x6c06,	// (0x0002b70c) popup_snote2_single_text_window_t3

0x6c47,	// (0x0002b74d) popup_snote2_single_text_window_t4_ParamLimits

0x6c47,	// (0x0002b74d) popup_snote2_single_text_window_t4

0x6c7d,	// (0x0002b783) popup_snote2_single_text_window_t5_ParamLimits

0x6c7d,	// (0x0002b783) popup_snote2_single_text_window_t5

0x0004,

0xfc6e,	// (0x00034774) popup_snote2_single_text_window_t_ParamLimits

0xfc6e,	// (0x00034774) popup_snote2_single_text_window_t

0x6ca8,	// (0x0002b7ae) popup_snote2_single_graphic_window_g1_ParamLimits

0x6ca8,	// (0x0002b7ae) popup_snote2_single_graphic_window_g1

0x6cd0,	// (0x0002b7d6) popup_snote2_single_graphic_window_g2_ParamLimits

0x6cd0,	// (0x0002b7d6) popup_snote2_single_graphic_window_g2

0x0001,

0xfc79,	// (0x0003477f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc79,	// (0x0003477f) popup_snote2_single_graphic_window_g

0x6cf8,	// (0x0002b7fe) popup_snote2_single_graphic_window_t1_ParamLimits

0x6cf8,	// (0x0002b7fe) popup_snote2_single_graphic_window_t1

0x6d44,	// (0x0002b84a) popup_snote2_single_graphic_window_t2_ParamLimits

0x6d44,	// (0x0002b84a) popup_snote2_single_graphic_window_t2

0x6c06,	// (0x0002b70c) popup_snote2_single_graphic_window_t3_ParamLimits

0x6c06,	// (0x0002b70c) popup_snote2_single_graphic_window_t3

0x6c47,	// (0x0002b74d) popup_snote2_single_graphic_window_t4_ParamLimits

0x6c47,	// (0x0002b74d) popup_snote2_single_graphic_window_t4

0x6c7d,	// (0x0002b783) popup_snote2_single_graphic_window_t5_ParamLimits

0x6c7d,	// (0x0002b783) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7e,	// (0x00034784) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7e,	// (0x00034784) popup_snote2_single_graphic_window_t

0x578c,	// (0x0002a292) clock_nsta_pane_cp2_t1

0x578c,	// (0x0002a292) clock_nsta_pane_cp2_t2

0x0001,

0xfa9e,	// (0x000345a4) clock_nsta_pane_cp2_t

0xeb53,	// (0x00033659) form_field_data_wide_pane_g1_ParamLimits

0xd505,	// (0x0003200b) form_field_data_wide_pane_g2_ParamLimits

0xd505,	// (0x0003200b) form_field_data_wide_pane_g2

0xd511,	// (0x00032017) form_field_data_wide_pane_g3_ParamLimits

0xd511,	// (0x00032017) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0003415c) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0003415c) form_field_data_wide_pane_g

0xc296,	// (0x00030d9c) grid_touch_3_pane_ParamLimits

0xc296,	// (0x00030d9c) grid_touch_3_pane

0xd695,	// (0x0003219b) cell_touch_3_pane_ParamLimits

0xd695,	// (0x0003219b) cell_touch_3_pane

0x5c94,	// (0x0002a79a) cell_touch_3_pane_g1

0x5c94,	// (0x0002a79a) cell_touch_3_pane_g2

0x0001,

0xfb23,	// (0x00034629) cell_touch_3_pane_g

0xd0c4,	// (0x00031bca) cont_query_data_pane

0xd0cc,	// (0x00031bd2) cont_query_data_pane_cp1

0x6dc3,	// (0x0002b8c9) button_value_adjust_pane_cp7

0x6dcb,	// (0x0002b8d1) query_popup_pane_cp3

0x0a0f,	// (0x00025515) bg_popup_sub_pane_cp22_ParamLimits

0x0a25,	// (0x0002552b) navi_navi_volume_pane_cp2

0x0a40,	// (0x00025546) popup_side_volume_key_window_g2

0x0a4f,	// (0x00025555) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x000341f2) popup_side_volume_key_window_g

0x0a6c,	// (0x00025572) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x000341f9) popup_side_volume_key_window_t

0x0e6b,	// (0x00025971) popup_side_volume_key_window_ParamLimits

0x9d0d,	// (0x0002e813) list_double_graphic_pane_g4_ParamLimits

0x9d0d,	// (0x0002e813) list_double_graphic_pane_g4

0xc121,	// (0x00030c27) list_single_2heading_msg_pane_ParamLimits

0xc121,	// (0x00030c27) list_single_2heading_msg_pane

0xa23d,	// (0x0002ed43) list_single_2heading_msg_pane_g1_ParamLimits

0xa23d,	// (0x0002ed43) list_single_2heading_msg_pane_g1

0xa249,	// (0x0002ed4f) list_single_2heading_msg_pane_g2_ParamLimits

0xa249,	// (0x0002ed4f) list_single_2heading_msg_pane_g2

0xa25c,	// (0x0002ed62) list_single_2heading_msg_pane_g3_ParamLimits

0xa25c,	// (0x0002ed62) list_single_2heading_msg_pane_g3

0xa268,	// (0x0002ed6e) list_single_2heading_msg_pane_g4_ParamLimits

0xa268,	// (0x0002ed6e) list_single_2heading_msg_pane_g4

0x0003,

0xfc89,	// (0x0003478f) list_single_2heading_msg_pane_g_ParamLimits

0xfc89,	// (0x0003478f) list_single_2heading_msg_pane_g

0xa280,	// (0x0002ed86) list_single_2heading_msg_pane_t1_ParamLimits

0xa280,	// (0x0002ed86) list_single_2heading_msg_pane_t1

0xa2a8,	// (0x0002edae) list_single_2heading_msg_pane_t2_ParamLimits

0xa2a8,	// (0x0002edae) list_single_2heading_msg_pane_t2

0xa313,	// (0x0002ee19) list_single_2heading_msg_pane_t3_ParamLimits

0xa313,	// (0x0002ee19) list_single_2heading_msg_pane_t3

0xf294,	// (0x00033d9a) list_single_2heading_msg_pane_t4_ParamLimits

0xf294,	// (0x00033d9a) list_single_2heading_msg_pane_t4

0x0003,

0xfc92,	// (0x00034798) list_single_2heading_msg_pane_t_ParamLimits

0xfc92,	// (0x00034798) list_single_2heading_msg_pane_t

0xce63,	// (0x00031969) title_pane_g4_ParamLimits

0xce63,	// (0x00031969) title_pane_g4

0x0430,	// (0x00024f36) title_pane_stacon_g3_ParamLimits

0x0430,	// (0x00024f36) title_pane_stacon_g3

0x68ec,	// (0x0002b3f2) list_single_2graphic_im_pane_g4_ParamLimits

0x68ec,	// (0x0002b3f2) list_single_2graphic_im_pane_g4

0x4749,	// (0x0002924f) popup_side_volume_key_window_cp

0x4f77,	// (0x00029a7d) main_idle_act2_pane_t1

0x1703,	// (0x00026209) toolbar_button_pane_g10

0xa9c8,	// (0x0002f4ce) popup_toolbar_window_cp1

0x577d,	// (0x0002a283) clock_nsta_pane_cp_t1

0x577d,	// (0x0002a283) clock_nsta_pane_cp_t2

0x0001,

0xfa99,	// (0x0003459f) clock_nsta_pane_cp_t

0x0a25,	// (0x0002552b) navi_navi_volume_pane_cp2_ParamLimits

0x0a34,	// (0x0002553a) popup_side_volume_key_window_g1_ParamLimits

0x0a40,	// (0x00025546) popup_side_volume_key_window_g2_ParamLimits

0x0a4f,	// (0x00025555) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x000341f2) popup_side_volume_key_window_g_ParamLimits

0x1b78,	// (0x0002667e) fep_hwr_aid_pane

0xd66d,	// (0x00032173) bg_fep_hwr_top_pane_g4_ParamLimits

0x5cf5,	// (0x0002a7fb) fep_hwr_top_pane_g1_ParamLimits

0x5d07,	// (0x0002a80d) fep_hwr_top_pane_g2_ParamLimits

0x1c33,	// (0x00026739) fep_hwr_top_pane_g3_ParamLimits

0xfaee,	// (0x000345f4) fep_hwr_top_pane_g_ParamLimits

0x1c48,	// (0x0002674e) fep_hwr_top_text_pane_ParamLimits

0x44fe,	// (0x00029004) aid_touch_tab_arrow_arrow_2

0x4507,	// (0x0002900d) aid_touch_tab_arrow_left_2

0x1b8c,	// (0x00026692) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1bc3,	// (0x000266c9) fep_hwr_prediction_pane

0x5e5d,	// (0x0002a963) fep_vkb_prediction_pane

0xc5ec,	// (0x000310f2) fep_vkb_side_pane_g3_ParamLimits

0xc5ec,	// (0x000310f2) fep_vkb_side_pane_g3

0x5f0f,	// (0x0002aa15) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x63dd,	// (0x0002aee3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x63ea,	// (0x0002aef0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb98,	// (0x0003469e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6df2,	// (0x0002b8f8) fep_hwr_prediction_pane_g1

0x1eee,	// (0x000269f4) fep_hwr_prediction_pane_g2

0x1ef6,	// (0x000269fc) fep_hwr_prediction_pane_g3

0x1efe,	// (0x00026a04) fep_hwr_prediction_pane_g4

0x0003,

0xfc9b,	// (0x000347a1) fep_hwr_prediction_pane_g

0x6df2,	// (0x0002b8f8) fep_vkb_prediction_pane_g1

0x6dfc,	// (0x0002b902) fep_vkb_prediction_pane_g2

0x6e04,	// (0x0002b90a) fep_vkb_prediction_pane_g3

0x6e0c,	// (0x0002b912) fep_vkb_prediction_pane_g4

0x0003,

0xfca4,	// (0x000347aa) fep_vkb_prediction_pane_g

0x19f8,	// (0x000264fe) slider_set_pane_g3

0x1a0c,	// (0x00026512) slider_set_pane_g4

0x1a24,	// (0x0002652a) slider_set_pane_g5

0x19f8,	// (0x000264fe) slider_set_pane_g6

0x1a3a,	// (0x00026540) slider_set_pane_g7

0x4bcf,	// (0x000296d5) slider_form_pane_g3

0x4bd8,	// (0x000296de) slider_form_pane_g4

0x4be0,	// (0x000296e6) slider_form_pane_g5

0x4bcf,	// (0x000296d5) slider_form_pane_g6

0xc0dc,	// (0x00030be2) slider_form_pane_g7

0x523b,	// (0x00029d41) slider_set_pane_vc_g3

0x5244,	// (0x00029d4a) slider_set_pane_vc_g4

0x524d,	// (0x00029d53) slider_set_pane_vc_g5

0x523b,	// (0x00029d41) slider_set_pane_vc_g6

0x5256,	// (0x00029d5c) slider_set_pane_vc_g7

0x542c,	// (0x00029f32) slider_form_pane_vc_g1

0x5435,	// (0x00029f3b) slider_form_pane_vc_g2

0x543e,	// (0x00029f44) slider_form_pane_vc_g3

0x542c,	// (0x00029f32) slider_form_pane_vc_g4

0x5447,	// (0x00029f4d) slider_form_pane_vc_g5

0x0004,

0xfa6b,	// (0x00034571) slider_form_pane_vc_g

0xce45,	// (0x0003194b) main_idle_act3_pane

0x6e14,	// (0x0002b91a) ai3_links_pane

0xd6e1,	// (0x000321e7) popup_ai3_data_window_ParamLimits

0xd6e1,	// (0x000321e7) popup_ai3_data_window

0xce45,	// (0x0003194b) grid_ai3_links_pane

0xd6ff,	// (0x00032205) cell_ai3_links_pane_ParamLimits

0xd6ff,	// (0x00032205) cell_ai3_links_pane

0x6e55,	// (0x0002b95b) bg_popup_sub_pane_cp11

0x6e62,	// (0x0002b968) cell_ai3_links_pane_g1

0xce45,	// (0x0003194b) bg_popup_sub_pane_cp12

0x6e87,	// (0x0002b98d) heading_ai3_data_pane

0x6e8f,	// (0x0002b995) list_ai3_gene_pane

0x6e9b,	// (0x0002b9a1) popup_ai3_data_window_g1

0x6ea3,	// (0x0002b9a9) heading_ai3_data_pane_g1

0x6eab,	// (0x0002b9b1) heading_ai3_data_pane_t1

0x6eb9,	// (0x0002b9bf) list_double_ai3_gene_pane_ParamLimits

0x6eb9,	// (0x0002b9bf) list_double_ai3_gene_pane

0x6ec6,	// (0x0002b9cc) list_single_ai3_gene_pane_ParamLimits

0x6ec6,	// (0x0002b9cc) list_single_ai3_gene_pane

0x5c59,	// (0x0002a75f) list_highlight_pane_cp7_ParamLimits

0x5c59,	// (0x0002a75f) list_highlight_pane_cp7

0x6ed3,	// (0x0002b9d9) list_single_a13_gene_pane_t1_ParamLimits

0x6ed3,	// (0x0002b9d9) list_single_a13_gene_pane_t1

0x6eea,	// (0x0002b9f0) list_single_ai3_gene_pane_g1

0x6ef3,	// (0x0002b9f9) list_single_ai3_gene_pane_g2

0x0001,

0xfcad,	// (0x000347b3) list_single_ai3_gene_pane_g

0x6efb,	// (0x0002ba01) list_double_ai3_gene_pane_g1_ParamLimits

0x6efb,	// (0x0002ba01) list_double_ai3_gene_pane_g1

0x6f07,	// (0x0002ba0d) list_double_ai3_gene_pane_t1_ParamLimits

0x6f07,	// (0x0002ba0d) list_double_ai3_gene_pane_t1

0x6f23,	// (0x0002ba29) list_double_ai3_gene_pane_t2_ParamLimits

0x6f23,	// (0x0002ba29) list_double_ai3_gene_pane_t2

0x6f38,	// (0x0002ba3e) list_double_ai3_gene_pane_t3_ParamLimits

0x6f38,	// (0x0002ba3e) list_double_ai3_gene_pane_t3

0x0002,

0xfcb2,	// (0x000347b8) list_double_ai3_gene_pane_t_ParamLimits

0xfcb2,	// (0x000347b8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf28a,	// (0x00033d90) aid_size_min_col_2

0xd6cb,	// (0x000321d1) aid_size_min_msg_ParamLimits

0xd6cb,	// (0x000321d1) aid_size_min_msg

0xc600,	// (0x00031106) fep_vkb_top_text_pane_g2_ParamLimits

0xc600,	// (0x00031106) fep_vkb_top_text_pane_g2

0x0001,

0xfb1e,	// (0x00034624) fep_vkb_top_text_pane_g_ParamLimits

0xfb1e,	// (0x00034624) fep_vkb_top_text_pane_g

0xce45,	// (0x0003194b) main_hc_apps_shell_pane

0x6f55,	// (0x0002ba5b) grid_hc_apps_pane_ParamLimits

0x6f55,	// (0x0002ba5b) grid_hc_apps_pane

0x6f67,	// (0x0002ba6d) list_hc_apps_pane

0x6f6f,	// (0x0002ba75) scroll_pane_cp37_ParamLimits

0x6f6f,	// (0x0002ba75) scroll_pane_cp37

0xd719,	// (0x0003221f) cell_hc_apps_pane_ParamLimits

0xd719,	// (0x0003221f) cell_hc_apps_pane

0xd7e1,	// (0x000322e7) cell_hc_apps_pane_g1_ParamLimits

0xd7e1,	// (0x000322e7) cell_hc_apps_pane_g1

0x705d,	// (0x0002bb63) cell_hc_apps_pane_g2_ParamLimits

0x705d,	// (0x0002bb63) cell_hc_apps_pane_g2

0x7079,	// (0x0002bb7f) cell_hc_apps_pane_g3_ParamLimits

0x7079,	// (0x0002bb7f) cell_hc_apps_pane_g3

0x0002,

0xfcb9,	// (0x000347bf) cell_hc_apps_pane_g_ParamLimits

0xfcb9,	// (0x000347bf) cell_hc_apps_pane_g

0xd80d,	// (0x00032313) cell_hc_apps_pane_t1_ParamLimits

0xd80d,	// (0x00032313) cell_hc_apps_pane_t1

0xcfe8,	// (0x00031aee) grid_highlight_pane_cp10_ParamLimits

0xcfe8,	// (0x00031aee) grid_highlight_pane_cp10

0xd84d,	// (0x00032353) list_single_hc_apps_pane_ParamLimits

0xd84d,	// (0x00032353) list_single_hc_apps_pane

0xd887,	// (0x0003238d) list_single_hc_apps_pane_g1

0xa381,	// (0x0002ee87) list_single_hc_apps_pane_g2

0x0001,

0xfcc0,	// (0x000347c6) list_single_hc_apps_pane_g

0xa39a,	// (0x0002eea0) list_single_hc_apps_pane_g2_copy1

0xa3b6,	// (0x0002eebc) list_single_hc_apps_pane_t1

0xceb5,	// (0x000319bb) bg_set_opt_pane_cp_ParamLimits

0xf4a0,	// (0x00033fa6) setting_slider_pane_t1_ParamLimits

0xf4b9,	// (0x00033fbf) setting_slider_pane_t2_ParamLimits

0xf4d3,	// (0x00033fd9) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0003403f) setting_slider_pane_t_ParamLimits

0xf4eb,	// (0x00033ff1) slider_set_pane_ParamLimits

0x0f98,	// (0x00025a9e) control_pane_g5_ParamLimits

0x0f98,	// (0x00025a9e) control_pane_g5

0x4a02,	// (0x00029508) slider_set_pane_g1_ParamLimits

0x19ec,	// (0x000264f2) slider_set_pane_g2_ParamLimits

0x19f8,	// (0x000264fe) slider_set_pane_g3_ParamLimits

0x1a0c,	// (0x00026512) slider_set_pane_g4_ParamLimits

0x1a24,	// (0x0002652a) slider_set_pane_g5_ParamLimits

0x19f8,	// (0x000264fe) slider_set_pane_g6_ParamLimits

0x1a3a,	// (0x00026540) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00034440) slider_set_pane_g_ParamLimits

0x2c87,	// (0x0002778d) navi_icon_text_pane_ParamLimits

0xb721,	// (0x00030227) aid_fill_nsta_2_ParamLimits

0xb75a,	// (0x00030260) aid_touch_tab_arrow_left_ParamLimits

0xb770,	// (0x00030276) aid_touch_tab_arrow_right_ParamLimits

0xb80b,	// (0x00030311) clock_nsta_pane_ParamLimits

0xbe5a,	// (0x00030960) navi_icon_pane_g1_ParamLimits

0xbe66,	// (0x0003096c) navi_text_pane_t1_ParamLimits

0xc371,	// (0x00030e77) navi_icon_text_pane_g1_ParamLimits

0xc37d,	// (0x00030e83) navi_icon_text_pane_t1_ParamLimits

0xd887,	// (0x0003238d) list_single_hc_apps_pane_g1_ParamLimits

0xa381,	// (0x0002ee87) list_single_hc_apps_pane_g2_ParamLimits

0xfcc0,	// (0x000347c6) list_single_hc_apps_pane_g_ParamLimits

0xa39a,	// (0x0002eea0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xa3b6,	// (0x0002eebc) list_single_hc_apps_pane_t1_ParamLimits

0xa53a,	// (0x0002f040) popup_toolbar2_fixed_window_ParamLimits

0xa53a,	// (0x0002f040) popup_toolbar2_fixed_window

0xb686,	// (0x0003018c) popup_toolbar2_float_window

0xce45,	// (0x0003194b) bg_popup_sub_pane_cp27

0x7133,	// (0x0002bc39) grid_toolbar2_float_pane

0xce45,	// (0x0003194b) bg_popup_sub_pane_cp26

0x7133,	// (0x0002bc39) grid_toolbar2_fixed_pane

0xd8a0,	// (0x000323a6) cell_toolbar2_fixed_pane_ParamLimits

0xd8a0,	// (0x000323a6) cell_toolbar2_fixed_pane

0xd8ba,	// (0x000323c0) cell_toolbar2_fixed_pane_g1

0x7154,	// (0x0002bc5a) toolbar2_fixed_button_pane

0x3673,	// (0x00028179) toolbar2_fixed_button_pane_g1

0x367b,	// (0x00028181) toolbar2_fixed_button_pane_g2

0x3683,	// (0x00028189) toolbar2_fixed_button_pane_g3

0x368b,	// (0x00028191) toolbar2_fixed_button_pane_g4

0x3693,	// (0x00028199) toolbar2_fixed_button_pane_g5

0x369b,	// (0x000281a1) toolbar2_fixed_button_pane_g6

0x36a3,	// (0x000281a9) toolbar2_fixed_button_pane_g7

0x36ab,	// (0x000281b1) toolbar2_fixed_button_pane_g8

0x36b3,	// (0x000281b9) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00034342) toolbar2_fixed_button_pane_g

0x715c,	// (0x0002bc62) cell_toolbar2_float_pane_ParamLimits

0x715c,	// (0x0002bc62) cell_toolbar2_float_pane

0x716d,	// (0x0002bc73) cell_toolbar2_float_pane_g1

0x7154,	// (0x0002bc5a) toolbar2_fixed_button_pane_cp

0xc4e8,	// (0x00030fee) fep_vkb_accented_list_pane_ParamLimits

0xc4e8,	// (0x00030fee) fep_vkb_accented_list_pane

0x1daa,	// (0x000268b0) bg_popup_fep_shadow_pane_g9

0x2e16,	// (0x0002791c) bg_popup_fep_shadow_pane_cp3

0xd61a,	// (0x00032120) list_accented_list_pane

0x7176,	// (0x0002bc7c) list_single_accented_list_pane_ParamLimits

0x7176,	// (0x0002bc7c) list_single_accented_list_pane

0x2e16,	// (0x0002791c) list_highlight_pane_cp10

0x7187,	// (0x0002bc8d) list_single_accented_list_pane_t1

0xb5a4,	// (0x000300aa) popup_slider_window_ParamLimits

0xb5a4,	// (0x000300aa) popup_slider_window

0x6dd3,	// (0x0002b8d9) aid_indentation_list_msg

0xd9bd,	// (0x000324c3) bg_popup_window_pane_cp19

0x72c3,	// (0x0002bdc9) popup_slider_window_g1

0x72df,	// (0x0002bde5) popup_slider_window_g2

0x72fb,	// (0x0002be01) popup_slider_window_g3

0x0005,

0xfcc5,	// (0x000347cb) popup_slider_window_g

0x7361,	// (0x0002be67) popup_slider_window_t1

0x73d5,	// (0x0002bedb) small_volume_slider_vertical_pane

0x5c94,	// (0x0002a79a) small_volume_slider_vertical_pane_g1

0x5c94,	// (0x0002a79a) small_volume_slider_vertical_pane_g2

0x73f1,	// (0x0002bef7) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd7,	// (0x000347dd) small_volume_slider_vertical_pane_g

0xa4a4,	// (0x0002efaa) area_side_right_pane_ParamLimits

0xa4a4,	// (0x0002efaa) area_side_right_pane

0xc815,	// (0x0003131b) aid_size_side_button_ParamLimits

0xc815,	// (0x0003131b) aid_size_side_button

0xc82e,	// (0x00031334) grid_sctrl_middle_pane_ParamLimits

0xc82e,	// (0x00031334) grid_sctrl_middle_pane

0x1f39,	// (0x00026a3f) sctrl_sk_bottom_pane

0x1f4a,	// (0x00026a50) sctrl_sk_top_pane

0x1f5c,	// (0x00026a62) aid_touch_sctrl_top

0xcfe8,	// (0x00031aee) bg_sctrl_sk_pane_ParamLimits

0xcfe8,	// (0x00031aee) bg_sctrl_sk_pane

0x1f69,	// (0x00026a6f) sctrl_sk_top_pane_g1

0x1f76,	// (0x00026a7c) sctrl_sk_top_pane_t1

0x1f5c,	// (0x00026a62) aid_touch_sctrl_bottom

0xcfe8,	// (0x00031aee) bg_sctrl_sk_pane_cp_ParamLimits

0xcfe8,	// (0x00031aee) bg_sctrl_sk_pane_cp

0x1f91,	// (0x00026a97) sctrl_sk_bottom_pane_g1

0x1f76,	// (0x00026a7c) sctrl_sk_bottom_pane_t1

0xc848,	// (0x0003134e) cell_sctrl_middle_pane_ParamLimits

0xc848,	// (0x0003134e) cell_sctrl_middle_pane

0xc85b,	// (0x00031361) aid_touch_sctrl_middle_ParamLimits

0xc85b,	// (0x00031361) aid_touch_sctrl_middle

0xc868,	// (0x0003136e) bg_sctrl_middle_pane_ParamLimits

0xc868,	// (0x0003136e) bg_sctrl_middle_pane

0x747c,	// (0x0002bf82) cell_sctrl_middle_pane_g1_ParamLimits

0x747c,	// (0x0002bf82) cell_sctrl_middle_pane_g1

0xc876,	// (0x0003137c) cell_sctrl_middle_pane_g2_ParamLimits

0xc876,	// (0x0003137c) cell_sctrl_middle_pane_g2

0x0001,

0xfce3,	// (0x000347e9) cell_sctrl_middle_pane_g_ParamLimits

0xfce3,	// (0x000347e9) cell_sctrl_middle_pane_g

0x3673,	// (0x00028179) bg_sctrl_middle_pane_g1

0x367b,	// (0x00028181) bg_sctrl_middle_pane_g2

0x3683,	// (0x00028189) bg_sctrl_middle_pane_g3

0x368b,	// (0x00028191) bg_sctrl_middle_pane_g4

0x3693,	// (0x00028199) bg_sctrl_middle_pane_g5

0x369b,	// (0x000281a1) bg_sctrl_middle_pane_g6

0x36a3,	// (0x000281a9) bg_sctrl_middle_pane_g7

0x36ab,	// (0x000281b1) bg_sctrl_middle_pane_g8

0x0007,

0xfce8,	// (0x000347ee) bg_sctrl_middle_pane_g

0x36b3,	// (0x000281b9) bg_sctrl_middle_pane_g8_copy1

0x3673,	// (0x00028179) bg_sctrl_sk_pane_g1

0x367b,	// (0x00028181) bg_sctrl_sk_pane_g2

0x3683,	// (0x00028189) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00034342) bg_sctrl_sk_pane_g

0xd430,	// (0x00031f36) aid_size_touch_scroll_bar

0x368b,	// (0x00028191) bg_sctrl_sk_pane_g4

0x3693,	// (0x00028199) bg_sctrl_sk_pane_g5

0x369b,	// (0x000281a1) bg_sctrl_sk_pane_g6

0x36a3,	// (0x000281a9) bg_sctrl_sk_pane_g7

0x36ab,	// (0x000281b1) bg_sctrl_sk_pane_g8

0x36b3,	// (0x000281b9) bg_sctrl_sk_pane_g9

0x1150,	// (0x00025c56) popup_fep_china_hwr2_fs_candidate_window

0xb056,	// (0x0002fb5c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb056,	// (0x0002fb5c) popup_fep_china_hwr2_fs_control_window

0x5f0f,	// (0x0002aa15) sctrl_sk_top_pane_g2

0x0001,

0xfcde,	// (0x000347e4) sctrl_sk_top_pane_g

0xda75,	// (0x0003257b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda75,	// (0x0003257b) aid_fep_china_hwr2_fs_cell

0xda8b,	// (0x00032591) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda8b,	// (0x00032591) bg_popup_fep_shadow_pane_cp4

0xdaa2,	// (0x000325a8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdaa2,	// (0x000325a8) bg_popup_fep_shadow_pane_cp5

0xdab4,	// (0x000325ba) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdab4,	// (0x000325ba) popup_fep_china_hwr2_fs_control_bar_grid

0xdac8,	// (0x000325ce) popup_fep_china_hwr2_fs_control_funtion_grid

0x7450,	// (0x0002bf56) aid_fep_china_hwr2_fs_candi_cell

0xce45,	// (0x0003194b) bg_popup_fep_shadow_pane_cp6

0x745a,	// (0x0002bf60) popup_fep_china_hwr2_fs_candidate_grid

0xdad0,	// (0x000325d6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdad0,	// (0x000325d6) cell_fep_china_hwr2_fs_funtion_grid

0x5c94,	// (0x0002a79a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x747c,	// (0x0002bf82) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x747c,	// (0x0002bf82) cell_fep_china_hwr2_fs_funtion_grid_g1

0x748a,	// (0x0002bf90) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x748a,	// (0x0002bf90) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf9,	// (0x000347ff) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf9,	// (0x000347ff) cell_fep_china_hwr2_fs_funtion_grid_g

0xdae8,	// (0x000325ee) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdae8,	// (0x000325ee) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdafd,	// (0x00032603) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdafd,	// (0x00032603) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfe,	// (0x00034804) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfe,	// (0x00034804) cell_fep_china_hwr2_fs_funtion_grid_t

0x74d1,	// (0x0002bfd7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x74d9,	// (0x0002bfdf) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x74e1,	// (0x0002bfe7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd03,	// (0x00034809) popup_fep_china_hwr2_fs_control_bar_grid_g

0x74e9,	// (0x0002bfef) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x74e9,	// (0x0002bfef) cell_fep_china_hwr2_fs_candidate_grid

0x7508,	// (0x0002c00e) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7510,	// (0x0002c016) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5c94,	// (0x0002a79a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5c94,	// (0x0002a79a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb23,	// (0x00034629) cell_fep_china_hwr2_fs_candidate_grid_g

0x7518,	// (0x0002c01e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x325b,	// (0x00027d61) clock_nsta_pane_cp_24_ParamLimits

0x325b,	// (0x00027d61) clock_nsta_pane_cp_24

0x32db,	// (0x00027de1) indicator_nsta_pane_cp_24_ParamLimits

0x32db,	// (0x00027de1) indicator_nsta_pane_cp_24

0x435c,	// (0x00028e62) heading_pane_g1

0x0001,

0xf8a1,	// (0x000343a7) heading_pane_g

0x4dbe,	// (0x000298c4) grid_sct_catagory_button_pane

0x4df0,	// (0x000298f6) scroll_pane_cp5_ParamLimits

0x58f4,	// (0x0002a3fa) button_value_adjust_pane_cp5_ParamLimits

0x58f4,	// (0x0002a3fa) button_value_adjust_pane_cp5

0x59d9,	// (0x0002a4df) form2_midp_time_pane_ParamLimits

0x7526,	// (0x0002c02c) cell_sct_catagory_button_pane_ParamLimits

0x7526,	// (0x0002c02c) cell_sct_catagory_button_pane

0x5c59,	// (0x0002a75f) bg_button_pane_cp01_ParamLimits

0x5c59,	// (0x0002a75f) bg_button_pane_cp01

0x5c94,	// (0x0002a79a) cell_sct_catagory_button_pane_g1

0xb623,	// (0x00030129) popup_tb_extension_window

0xdb19,	// (0x0003261f) aid_size_cell_ext_ParamLimits

0xdb19,	// (0x0003261f) aid_size_cell_ext

0xd272,	// (0x00031d78) bg_tb_trans_pane_cp1_ParamLimits

0xd272,	// (0x00031d78) bg_tb_trans_pane_cp1

0xdb3f,	// (0x00032645) grid_tb_ext_pane_ParamLimits

0xdb3f,	// (0x00032645) grid_tb_ext_pane

0xdb7c,	// (0x00032682) cell_tb_ext_pane_ParamLimits

0xdb7c,	// (0x00032682) cell_tb_ext_pane

0xdba4,	// (0x000326aa) cell_tb_ext_pane_g1_ParamLimits

0xdba4,	// (0x000326aa) cell_tb_ext_pane_g1

0x75ba,	// (0x0002c0c0) cell_tb_ext_pane_t1

0xcfe8,	// (0x00031aee) list_highlight_pane_cp11_ParamLimits

0xcfe8,	// (0x00031aee) list_highlight_pane_cp11

0xa54f,	// (0x0002f055) popup_uni_indicator_window_ParamLimits

0xa54f,	// (0x0002f055) popup_uni_indicator_window

0xd4f7,	// (0x00031ffd) bg_popup_sub_pane_cp14

0x75d5,	// (0x0002c0db) list_uniindi_pane

0x75e1,	// (0x0002c0e7) uniindi_top_pane

0xcfe8,	// (0x00031aee) bg_uniindi_top_pane

0x7602,	// (0x0002c108) uniindi_top_pane_g1

0x7618,	// (0x0002c11e) uniindi_top_pane_g2

0x0003,

0xfd0a,	// (0x00034810) uniindi_top_pane_g

0x7642,	// (0x0002c148) uniindi_top_pane_t1

0x766e,	// (0x0002c174) list_single_uniindi_pane_ParamLimits

0x766e,	// (0x0002c174) list_single_uniindi_pane

0x5c94,	// (0x0002a79a) bg_uniindi_top_pane_g1

0x7681,	// (0x0002c187) list_single_uniindi_pane_g1

0x7694,	// (0x0002c19a) list_single_uniindi_pane_t1

0xce45,	// (0x0003194b) control_bg_pane

0x76b9,	// (0x0002c1bf) bg_sctrl_sk_pane_cp1

0x76c2,	// (0x0002c1c8) bg_sctrl_sk_pane_cp2

0x76cb,	// (0x0002c1d1) control_bg_pane_g1

0x76d4,	// (0x0002c1da) control_bg_pane_g2

0x0001,

0xfd13,	// (0x00034819) control_bg_pane_g

0x5720,	// (0x0002a226) cell_indicator_nsta_pane_g1_ParamLimits

0xc2d3,	// (0x00030dd9) cell_indicator_nsta_pane_g2_ParamLimits

0xfa87,	// (0x0003458d) cell_indicator_nsta_pane_g_ParamLimits

0xf089,	// (0x00033b8f) form2_midp_time_pane_t1_ParamLimits

0x1b6a,	// (0x00026670) main_idle_act4_pane_ParamLimits

0x1b6a,	// (0x00026670) main_idle_act4_pane

0xb623,	// (0x00030129) popup_tb_extension_window_ParamLimits

0xdb64,	// (0x0003266a) tb_ext_find_pane_ParamLimits

0xdb64,	// (0x0003266a) tb_ext_find_pane

0x76dd,	// (0x0002c1e3) ai_gene_pane_1_cp1

0x2f60,	// (0x00027a66) ai_gene_pane_2_cp1

0x76e5,	// (0x0002c1eb) list_single_idle_plugin_calendar_pane

0x76ee,	// (0x0002c1f4) list_single_idle_plugin_notification_pane

0x76f7,	// (0x0002c1fd) list_single_idle_plugin_player_pane

0xdbc1,	// (0x000326c7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdbc1,	// (0x000326c7) list_single_idle_plugin_shortcut_pane

0xdbe9,	// (0x000326ef) main_idle_act4_pane_t1

0xdc01,	// (0x00032707) main_idle_act4_pane_t2

0x0001,

0xfd18,	// (0x0003481e) main_idle_act4_pane_t

0xdc19,	// (0x0003271f) middle_sk_idle_act4_pane_ParamLimits

0xdc19,	// (0x0003271f) middle_sk_idle_act4_pane

0xdc35,	// (0x0003273b) popup_clock_digital_analogue_window_cp2

0xdc5c,	// (0x00032762) shortcut_wheel_idle_act4_pane_ParamLimits

0xdc5c,	// (0x00032762) shortcut_wheel_idle_act4_pane

0x5c94,	// (0x0002a79a) shortcut_wheel_idle_act4_pane_g1

0x5c94,	// (0x0002a79a) shortcut_wheel_idle_act4_pane_g2

0x5c94,	// (0x0002a79a) shortcut_wheel_idle_act4_pane_g3

0x5c94,	// (0x0002a79a) shortcut_wheel_idle_act4_pane_g4

0x5c94,	// (0x0002a79a) shortcut_wheel_idle_act4_pane_g5

0x778a,	// (0x0002c290) shortcut_wheel_idle_act4_pane_g6

0x7792,	// (0x0002c298) shortcut_wheel_idle_act4_pane_g7

0x779a,	// (0x0002c2a0) shortcut_wheel_idle_act4_pane_g8

0x77a2,	// (0x0002c2a8) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1d,	// (0x00034823) shortcut_wheel_idle_act4_pane_g

0xd66d,	// (0x00032173) middle_sk_idle_act4_pane_g1_ParamLimits

0xd66d,	// (0x00032173) middle_sk_idle_act4_pane_g1

0xdcd9,	// (0x000327df) middle_sk_idle_act4_pane_g2_ParamLimits

0xdcd9,	// (0x000327df) middle_sk_idle_act4_pane_g2

0x0001,

0xfd40,	// (0x00034846) middle_sk_idle_act4_pane_g_ParamLimits

0xfd40,	// (0x00034846) middle_sk_idle_act4_pane_g

0xdcf1,	// (0x000327f7) middle_sk_idle_act4_pane_t1_ParamLimits

0xdcf1,	// (0x000327f7) middle_sk_idle_act4_pane_t1

0xdd20,	// (0x00032826) grid_ai_shortcut_pane_ParamLimits

0xdd20,	// (0x00032826) grid_ai_shortcut_pane

0xdd3d,	// (0x00032843) list_highlight_pane_cp16_ParamLimits

0xdd3d,	// (0x00032843) list_highlight_pane_cp16

0xdd4a,	// (0x00032850) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdd4a,	// (0x00032850) list_single_idle_plugin_shortcut_pane_g1

0xdd56,	// (0x0003285c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdd56,	// (0x0003285c) list_single_idle_plugin_shortcut_pane_g2

0xdd74,	// (0x0003287a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdd74,	// (0x0003287a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd45,	// (0x0003484b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd45,	// (0x0003484b) list_single_idle_plugin_shortcut_pane_g

0xdd89,	// (0x0003288f) cell_ai_shortcut_pane_ParamLimits

0xdd89,	// (0x0003288f) cell_ai_shortcut_pane

0xdd9f,	// (0x000328a5) cell_ai_shortcut_pane_g1_ParamLimits

0xdd9f,	// (0x000328a5) cell_ai_shortcut_pane_g1

0x76dd,	// (0x0002c1e3) ai_gene_pane_1_cp2

0x78d3,	// (0x0002c3d9) ai_gene_pane_2_cp2

0x78db,	// (0x0002c3e1) list_highlight_pane_cp15

0x78e4,	// (0x0002c3ea) list_single_idle_plugin_calendar_pane_g1

0x78db,	// (0x0002c3e1) list_highlight_pane_cp17

0x78ec,	// (0x0002c3f2) list_single_idle_plugin_calendar_pane_g1_copy1

0x78f4,	// (0x0002c3fa) list_single_idle_plugin_player_pane_g1

0x5025,	// (0x00029b2b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4c,	// (0x00034852) list_single_idle_plugin_player_pane_g

0x78fc,	// (0x0002c402) list_single_idle_plugin_player_pane_t1

0x790a,	// (0x0002c410) list_single_idle_plugin_player_pane_t2

0x7918,	// (0x0002c41e) list_single_idle_plugin_player_pane_t3

0x7926,	// (0x0002c42c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd51,	// (0x00034857) list_single_idle_plugin_player_pane_t

0x7934,	// (0x0002c43a) wait_bar_pane_cp15

0x793c,	// (0x0002c442) grid_ai_notification_pane

0x5025,	// (0x00029b2b) list_single_idle_plugin_notification_pane_g1

0xddc1,	// (0x000328c7) cell_ai_notification_pane_ParamLimits

0xddc1,	// (0x000328c7) cell_ai_notification_pane

0x7952,	// (0x0002c458) cell_ai_notification_pane_g1

0x795a,	// (0x0002c460) cell_ai_notification_pane_t1

0xddce,	// (0x000328d4) tb_ext_find_button_pane

0xddd6,	// (0x000328dc) tb_ext_find_pane_g1

0xddde,	// (0x000328e4) tb_ext_find_pane_t1

0x0890,	// (0x00025396) tb_ext_find_button_pane_g1

0x7986,	// (0x0002c48c) tb_ext_find_button_pane_g2

0x0001,

0xfd5a,	// (0x00034860) tb_ext_find_button_pane_g

0xdbe9,	// (0x000326ef) main_idle_act4_pane_t1_ParamLimits

0xdc01,	// (0x00032707) main_idle_act4_pane_t2_ParamLimits

0xfd18,	// (0x0003481e) main_idle_act4_pane_t_ParamLimits

0xdc35,	// (0x0003273b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdc4c,	// (0x00032752) sat_plugin_idle_act4_pane_ParamLimits

0xdc4c,	// (0x00032752) sat_plugin_idle_act4_pane

0xddec,	// (0x000328f2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddec,	// (0x000328f2) sat_plugin_idle_act4_pane_t1

0xde04,	// (0x0003290a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xde04,	// (0x0003290a) sat_plugin_idle_act4_pane_t2

0xde1c,	// (0x00032922) sat_plugin_idle_act4_pane_t3_ParamLimits

0xde1c,	// (0x00032922) sat_plugin_idle_act4_pane_t3

0xde34,	// (0x0003293a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde34,	// (0x0003293a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5f,	// (0x00034865) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5f,	// (0x00034865) sat_plugin_idle_act4_pane_t

0xf428,	// (0x00033f2e) popup_battery_window_ParamLimits

0xf428,	// (0x00033f2e) popup_battery_window

0xcfe8,	// (0x00031aee) bg_popup_sub_pane_cp25_ParamLimits

0xcfe8,	// (0x00031aee) bg_popup_sub_pane_cp25

0x79db,	// (0x0002c4e1) popup_battery_window_g1_ParamLimits

0x79db,	// (0x0002c4e1) popup_battery_window_g1

0x79e7,	// (0x0002c4ed) popup_battery_window_t1_ParamLimits

0x79e7,	// (0x0002c4ed) popup_battery_window_t1

0x79f9,	// (0x0002c4ff) popup_battery_window_t2_ParamLimits

0x79f9,	// (0x0002c4ff) popup_battery_window_t2

0x0001,

0xfd68,	// (0x0003486e) popup_battery_window_t_ParamLimits

0xfd68,	// (0x0003486e) popup_battery_window_t

0xacbf,	// (0x0002f7c5) midp_canvas_pane_ParamLimits

0xad1b,	// (0x0002f821) midp_keypad_pane_ParamLimits

0xad1b,	// (0x0002f821) midp_keypad_pane

0x313d,	// (0x00027c43) main_midp_pane_ParamLimits

0x579b,	// (0x0002a2a1) signal_pane_g2_cp_ParamLimits

0xde4c,	// (0x00032952) aid_size_cell_midp_keypad_ParamLimits

0xde4c,	// (0x00032952) aid_size_cell_midp_keypad

0xde6a,	// (0x00032970) midp_keyp_game_grid_pane_ParamLimits

0xde6a,	// (0x00032970) midp_keyp_game_grid_pane

0xde91,	// (0x00032997) midp_keyp_rocker_pane_ParamLimits

0xde91,	// (0x00032997) midp_keyp_rocker_pane

0xdee0,	// (0x000329e6) midp_keyp_sk_left_pane_ParamLimits

0xdee0,	// (0x000329e6) midp_keyp_sk_left_pane

0xdf36,	// (0x00032a3c) midp_keyp_sk_right_pane_ParamLimits

0xdf36,	// (0x00032a3c) midp_keyp_sk_right_pane

0xce45,	// (0x0003194b) bg_button_pane_cp03

0xdf8c,	// (0x00032a92) midp_keyp_sk_left_pane_g1

0xce45,	// (0x0003194b) bg_button_pane_cp04

0xdf8c,	// (0x00032a92) midp_keyp_sk_right_pane_g1

0x5c94,	// (0x0002a79a) midp_keyp_rocker_pane_g1

0xdf94,	// (0x00032a9a) keyp_game_cell_pane_ParamLimits

0xdf94,	// (0x00032a9a) keyp_game_cell_pane

0xce45,	// (0x0003194b) bg_button_pane_cp02

0xdfba,	// (0x00032ac0) keyp_game_cell_pane_g1

0xa4e6,	// (0x0002efec) popup_fep_vkb2_window_ParamLimits

0xa4e6,	// (0x0002efec) popup_fep_vkb2_window

0xc882,	// (0x00031388) aid_size_cell_vkb2_ParamLimits

0xc882,	// (0x00031388) aid_size_cell_vkb2

0xc8ae,	// (0x000313b4) popup_fep_vkb2_window_g1_ParamLimits

0xc8ae,	// (0x000313b4) popup_fep_vkb2_window_g1

0xc8fe,	// (0x00031404) vkb2_area_bottom_pane_ParamLimits

0xc8fe,	// (0x00031404) vkb2_area_bottom_pane

0xc95a,	// (0x00031460) vkb2_area_keypad_pane_ParamLimits

0xc95a,	// (0x00031460) vkb2_area_keypad_pane

0xc9a8,	// (0x000314ae) vkb2_area_top_pane_ParamLimits

0xc9a8,	// (0x000314ae) vkb2_area_top_pane

0xca35,	// (0x0003153b) vkb2_top_entry_pane_ParamLimits

0xca35,	// (0x0003153b) vkb2_top_entry_pane

0xca62,	// (0x00031568) vkb2_top_grid_left_pane_ParamLimits

0xca62,	// (0x00031568) vkb2_top_grid_left_pane

0xca83,	// (0x00031589) vkb2_top_grid_right_pane_ParamLimits

0xca83,	// (0x00031589) vkb2_top_grid_right_pane

0x21fd,	// (0x00026d03) vkb2_cell_keypad_pane_ParamLimits

0x21fd,	// (0x00026d03) vkb2_cell_keypad_pane

0xcacb,	// (0x000315d1) vkb2_area_bottom_grid_pane_ParamLimits

0xcacb,	// (0x000315d1) vkb2_area_bottom_grid_pane

0xcaf5,	// (0x000315fb) vkb2_area_bottom_pane_g1_ParamLimits

0xcaf5,	// (0x000315fb) vkb2_area_bottom_pane_g1

0xcb1b,	// (0x00031621) vkb2_area_bottom_pane_g2_ParamLimits

0xcb1b,	// (0x00031621) vkb2_area_bottom_pane_g2

0xcb4c,	// (0x00031652) vkb2_area_bottom_pane_g3_ParamLimits

0xcb4c,	// (0x00031652) vkb2_area_bottom_pane_g3

0x0002,

0xfd6d,	// (0x00034873) vkb2_area_bottom_pane_g_ParamLimits

0xfd6d,	// (0x00034873) vkb2_area_bottom_pane_g

0x23a7,	// (0x00026ead) vkb2_top_cell_left_pane_ParamLimits

0x23a7,	// (0x00026ead) vkb2_top_cell_left_pane

0xdfc3,	// (0x00032ac9) vkb2_top_entry_pane_g1_ParamLimits

0xdfc3,	// (0x00032ac9) vkb2_top_entry_pane_g1

0xdfd1,	// (0x00032ad7) vkb2_top_entry_pane_t1_ParamLimits

0xdfd1,	// (0x00032ad7) vkb2_top_entry_pane_t1

0x7ba3,	// (0x0002c6a9) vkb2_top_entry_pane_t2_ParamLimits

0x7ba3,	// (0x0002c6a9) vkb2_top_entry_pane_t2

0x7bd5,	// (0x0002c6db) vkb2_top_entry_pane_t3_ParamLimits

0x7bd5,	// (0x0002c6db) vkb2_top_entry_pane_t3

0x0002,

0xfd74,	// (0x0003487a) vkb2_top_entry_pane_t_ParamLimits

0xfd74,	// (0x0003487a) vkb2_top_entry_pane_t

0xcbb6,	// (0x000316bc) vkb2_top_grid_right_pane_g1_ParamLimits

0xcbb6,	// (0x000316bc) vkb2_top_grid_right_pane_g1

0x240a,	// (0x00026f10) vkb2_top_grid_right_pane_g2_ParamLimits

0x240a,	// (0x00026f10) vkb2_top_grid_right_pane_g2

0x2422,	// (0x00026f28) vkb2_top_grid_right_pane_g3_ParamLimits

0x2422,	// (0x00026f28) vkb2_top_grid_right_pane_g3

0xcbcc,	// (0x000316d2) vkb2_top_grid_right_pane_g4_ParamLimits

0xcbcc,	// (0x000316d2) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7b,	// (0x00034881) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7b,	// (0x00034881) vkb2_top_grid_right_pane_g

0x2450,	// (0x00026f56) vkb2_top_cell_left_pane_g1

0x2467,	// (0x00026f6d) vkb2_cell_keypad_pane_g1_ParamLimits

0x2467,	// (0x00026f6d) vkb2_cell_keypad_pane_g1

0x7bf9,	// (0x0002c6ff) vkb2_cell_keypad_pane_t1_ParamLimits

0x7bf9,	// (0x0002c6ff) vkb2_cell_keypad_pane_t1

0x2475,	// (0x00026f7b) vkb2_cell_bottom_grid_pane_ParamLimits

0x2475,	// (0x00026f7b) vkb2_cell_bottom_grid_pane

0x24ae,	// (0x00026fb4) vkb2_cell_bottom_grid_pane_g1

0xdc7d,	// (0x00032783) aid_call2_pane_cp02

0xdc85,	// (0x0003278b) aid_call_pane_cp02

0xdc8d,	// (0x00032793) clock_digital_number_pane_cp10

0xdc95,	// (0x0003279b) clock_digital_number_pane_cp11

0xdc9d,	// (0x000327a3) clock_digital_number_pane_cp12

0xdca5,	// (0x000327ab) clock_digital_number_pane_cp13

0xdcad,	// (0x000327b3) clock_digital_separator_pane_cp10

0x0890,	// (0x00025396) popup_clock_digital_analogue_window_cp2_g1

0x0890,	// (0x00025396) popup_clock_digital_analogue_window_cp2_g2

0xdcb5,	// (0x000327bb) popup_clock_digital_analogue_window_cp2_g3

0x0890,	// (0x00025396) popup_clock_digital_analogue_window_cp2_g4

0xdcb5,	// (0x000327bb) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd30,	// (0x00034836) popup_clock_digital_analogue_window_cp2_g

0xdcbd,	// (0x000327c3) popup_clock_digital_analogue_window_cp2_t1

0xdccb,	// (0x000327d1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3b,	// (0x00034841) popup_clock_digital_analogue_window_cp2_t

0x5c94,	// (0x0002a79a) clock_digital_number_pane_cp10_g1

0x5c94,	// (0x0002a79a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb23,	// (0x00034629) clock_digital_number_pane_cp10_g

0x5c94,	// (0x0002a79a) clock_digital_separator_pane_cp10_g1

0x5c94,	// (0x0002a79a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb23,	// (0x00034629) clock_digital_separator_pane_cp10_g

0x7624,	// (0x0002c12a) uniindi_top_pane_g3

0x7635,	// (0x0002c13b) uniindi_top_pane_g4

0x2288,	// (0x00026d8e) vkb2_row_keypad_pane_ParamLimits

0x2288,	// (0x00026d8e) vkb2_row_keypad_pane

0x24ca,	// (0x00026fd0) vkb2_cell_t_keypad_pane_ParamLimits

0x24ca,	// (0x00026fd0) vkb2_cell_t_keypad_pane

0x24da,	// (0x00026fe0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x24da,	// (0x00026fe0) vkb2_cell_t_keypad_pane_cp08

0x24ef,	// (0x00026ff5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x24ef,	// (0x00026ff5) vkb2_cell_t_keypad_pane_cp09

0x2503,	// (0x00027009) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2503,	// (0x00027009) vkb2_cell_t_keypad_pane_cp01

0x2514,	// (0x0002701a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2514,	// (0x0002701a) vkb2_cell_t_keypad_pane_cp02

0x2525,	// (0x0002702b) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2525,	// (0x0002702b) vkb2_cell_t_keypad_pane_cp03

0x2536,	// (0x0002703c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2536,	// (0x0002703c) vkb2_cell_t_keypad_pane_cp04

0x2547,	// (0x0002704d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2547,	// (0x0002704d) vkb2_cell_t_keypad_pane_cp05

0x2558,	// (0x0002705e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2558,	// (0x0002705e) vkb2_cell_t_keypad_pane_cp06

0x256b,	// (0x00027071) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x256b,	// (0x00027071) vkb2_cell_t_keypad_pane_cp07

0x2580,	// (0x00027086) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2580,	// (0x00027086) vkb2_cell_t_keypad_pane_cp10

0x5f0f,	// (0x0002aa15) vkb2_cell_t_keypad_pane_g1

0x7c10,	// (0x0002c716) vkb2_cell_t_keypad_pane_t1

0xce45,	// (0x0003194b) popup_grid_graphic2_window

0xe00a,	// (0x00032b10) aid_size_cell_graphic2_ParamLimits

0xe00a,	// (0x00032b10) aid_size_cell_graphic2

0xe048,	// (0x00032b4e) bg_popup_window_pane_cp21_ParamLimits

0xe048,	// (0x00032b4e) bg_popup_window_pane_cp21

0xe056,	// (0x00032b5c) graphic2_pages_pane_ParamLimits

0xe056,	// (0x00032b5c) graphic2_pages_pane

0xe0ae,	// (0x00032bb4) grid_graphic2_control_pane_ParamLimits

0xe0ae,	// (0x00032bb4) grid_graphic2_control_pane

0xe0f6,	// (0x00032bfc) grid_graphic2_pane_ParamLimits

0xe0f6,	// (0x00032bfc) grid_graphic2_pane

0xe181,	// (0x00032c87) cell_graphic2_pane

0xce45,	// (0x0003194b) main_comp_mode_pane

0x6e8f,	// (0x0002b995) list_ai3_gene_pane_ParamLimits

0xd9bd,	// (0x000324c3) bg_popup_window_pane_cp19_ParamLimits

0x7263,	// (0x0002bd69) bg_touch_area_indi_pane_ParamLimits

0x7263,	// (0x0002bd69) bg_touch_area_indi_pane

0x7279,	// (0x0002bd7f) bg_touch_area_indi_pane_cp01_ParamLimits

0x7279,	// (0x0002bd7f) bg_touch_area_indi_pane_cp01

0x728f,	// (0x0002bd95) bg_touch_area_indi_pane_cp02_ParamLimits

0x728f,	// (0x0002bd95) bg_touch_area_indi_pane_cp02

0x72a9,	// (0x0002bdaf) bg_touch_area_indi_pane_cp03_ParamLimits

0x72a9,	// (0x0002bdaf) bg_touch_area_indi_pane_cp03

0x72c3,	// (0x0002bdc9) popup_slider_window_g1_ParamLimits

0x72df,	// (0x0002bde5) popup_slider_window_g2_ParamLimits

0x72fb,	// (0x0002be01) popup_slider_window_g3_ParamLimits

0xfcc5,	// (0x000347cb) popup_slider_window_g_ParamLimits

0x7361,	// (0x0002be67) popup_slider_window_t1_ParamLimits

0x73d5,	// (0x0002bedb) small_volume_slider_vertical_pane_ParamLimits

0xe181,	// (0x00032c87) cell_graphic2_pane_ParamLimits

0xe1e3,	// (0x00032ce9) bg_button_pane_cp10_ParamLimits

0xe1e3,	// (0x00032ce9) bg_button_pane_cp10

0xe1f6,	// (0x00032cfc) bg_button_pane_cp11_ParamLimits

0xe1f6,	// (0x00032cfc) bg_button_pane_cp11

0xe209,	// (0x00032d0f) graphic2_pages_pane_g1_ParamLimits

0xe209,	// (0x00032d0f) graphic2_pages_pane_g1

0xe224,	// (0x00032d2a) graphic2_pages_pane_g2_ParamLimits

0xe224,	// (0x00032d2a) graphic2_pages_pane_g2

0x0001,

0xfd89,	// (0x0003488f) graphic2_pages_pane_g_ParamLimits

0xfd89,	// (0x0003488f) graphic2_pages_pane_g

0xe23c,	// (0x00032d42) graphic2_pages_pane_t1_ParamLimits

0xe23c,	// (0x00032d42) graphic2_pages_pane_t1

0xe254,	// (0x00032d5a) cell_graphic2_control_pane_ParamLimits

0xe254,	// (0x00032d5a) cell_graphic2_control_pane

0xe282,	// (0x00032d88) cell_graphic2_pane_g1_ParamLimits

0xe282,	// (0x00032d88) cell_graphic2_pane_g1

0xd67b,	// (0x00032181) cell_graphic2_pane_g2_ParamLimits

0xd67b,	// (0x00032181) cell_graphic2_pane_g2

0xe28f,	// (0x00032d95) cell_graphic2_pane_g3_ParamLimits

0xe28f,	// (0x00032d95) cell_graphic2_pane_g3

0xd688,	// (0x0003218e) cell_graphic2_pane_g4_ParamLimits

0xd688,	// (0x0003218e) cell_graphic2_pane_g4

0xe29c,	// (0x00032da2) cell_graphic2_pane_g5_ParamLimits

0xe29c,	// (0x00032da2) cell_graphic2_pane_g5

0x0004,

0xfd8e,	// (0x00034894) cell_graphic2_pane_g_ParamLimits

0xfd8e,	// (0x00034894) cell_graphic2_pane_g

0xe2b8,	// (0x00032dbe) cell_graphic2_pane_t1_ParamLimits

0xe2b8,	// (0x00032dbe) cell_graphic2_pane_t1

0x4350,	// (0x00028e56) grid_highlight_pane_cp11_ParamLimits

0x4350,	// (0x00028e56) grid_highlight_pane_cp11

0xcfe8,	// (0x00031aee) bg_button_pane_cp05

0xe301,	// (0x00032e07) cell_graphic2_control_pane_g1

0x5c94,	// (0x0002a79a) bg_touch_area_indi_pane_g1

0x7ef3,	// (0x0002c9f9) aid_cmod_rocker_key_size

0x7efd,	// (0x0002ca03) aid_cmode_itu_key_size

0x7f07,	// (0x0002ca0d) main_cmode_video_pane

0x7f11,	// (0x0002ca17) main_comp_mode_itu_pane

0x7f1d,	// (0x0002ca23) main_comp_mode_rocker_pane

0x7f29,	// (0x0002ca2f) cell_cmode_rocker_pane_ParamLimits

0x7f29,	// (0x0002ca2f) cell_cmode_rocker_pane

0x7f3d,	// (0x0002ca43) cell_cmode_itu_pane_ParamLimits

0x7f3d,	// (0x0002ca43) cell_cmode_itu_pane

0xd4f7,	// (0x00031ffd) bg_button_pane_cp06_ParamLimits

0xd4f7,	// (0x00031ffd) bg_button_pane_cp06

0x5f0f,	// (0x0002aa15) cell_cmode_rocker_pane_g1_ParamLimits

0x5f0f,	// (0x0002aa15) cell_cmode_rocker_pane_g1

0x747c,	// (0x0002bf82) cell_cmode_rocker_pane_g2_ParamLimits

0x747c,	// (0x0002bf82) cell_cmode_rocker_pane_g2

0x0001,

0xfd9e,	// (0x000348a4) cell_cmode_rocker_pane_g_ParamLimits

0xfd9e,	// (0x000348a4) cell_cmode_rocker_pane_g

0xce45,	// (0x0003194b) bg_button_pane_cp07

0x7f54,	// (0x0002ca5a) cell_cmode_itu_pane_g1

0x7f5d,	// (0x0002ca63) cell_cmode_itu_pane_t1

0x7f6b,	// (0x0002ca71) cell_cmode_itu_pane_t2

0x0001,

0xfda3,	// (0x000348a9) cell_cmode_itu_pane_t

0x76a9,	// (0x0002c1af) aid_touch_ctrl_left

0x76b1,	// (0x0002c1b7) aid_touch_ctrl_right

0xce45,	// (0x0003194b) compa_mode_pane

0xe329,	// (0x00032e2f) aid_cmod_rocker_key_size_cp

0xe333,	// (0x00032e39) aid_cmode_itu_key_size_cp

0x7f8d,	// (0x0002ca93) compa_mode_pane_g1

0x7f95,	// (0x0002ca9b) compa_mode_pane_g2

0x7f9d,	// (0x0002caa3) compa_mode_pane_g3

0x0002,

0xfda8,	// (0x000348ae) compa_mode_pane_g

0xe33d,	// (0x00032e43) main_comp_mode_itu_pane_cp

0xe345,	// (0x00032e4b) main_comp_mode_rocker_pane_cp

0xe34d,	// (0x00032e53) cell_cmode_itu_pane_cp_ParamLimits

0xe34d,	// (0x00032e53) cell_cmode_itu_pane_cp

0xe362,	// (0x00032e68) cell_cmode_rocker_pane_cp_ParamLimits

0xe362,	// (0x00032e68) cell_cmode_rocker_pane_cp

0xd4f7,	// (0x00031ffd) bg_button_pane_cp06_cp_ParamLimits

0xd4f7,	// (0x00031ffd) bg_button_pane_cp06_cp

0x5f0f,	// (0x0002aa15) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5f0f,	// (0x0002aa15) cell_cmode_rocker_pane_g1_cp

0x5c94,	// (0x0002a79a) cell_cmode_rocker_pane_g2_cp

0xce45,	// (0x0003194b) bg_button_pane_cp07_cp

0xe374,	// (0x00032e7a) cell_cmode_itu_pane_g1_cp

0xe37d,	// (0x00032e83) cell_cmode_itu_pane_t1_cp

0xe37d,	// (0x00032e83) cell_cmode_itu_pane_t2_cp

0xc0d4,	// (0x00030bda) settings_code_pane_cp2

0xceb5,	// (0x000319bb) bg_popup_window_pane_cp3_ParamLimits

0xd1fc,	// (0x00031d02) heading_pane_cp3_ParamLimits

0xd20b,	// (0x00031d11) listscroll_popup_graphic_pane_ParamLimits

0x1b78,	// (0x0002667e) fep_hwr_aid_pane_ParamLimits

0x1f5c,	// (0x00026a62) aid_touch_sctrl_top_ParamLimits

0x1f69,	// (0x00026a6f) sctrl_sk_top_pane_g1_ParamLimits

0x5f0f,	// (0x0002aa15) sctrl_sk_top_pane_g2_ParamLimits

0xfcde,	// (0x000347e4) sctrl_sk_top_pane_g_ParamLimits

0x1f76,	// (0x00026a7c) sctrl_sk_top_pane_t1_ParamLimits

0x1f5c,	// (0x00026a62) aid_touch_sctrl_bottom_ParamLimits

0x1f76,	// (0x00026a7c) sctrl_sk_bottom_pane_t1_ParamLimits

0x75ee,	// (0x0002c0f4) aid_area_touch_clock

0xc9f4,	// (0x000314fa) aid_vkb2_area_top_pane_cell_ParamLimits

0xc9f4,	// (0x000314fa) aid_vkb2_area_top_pane_cell

0xcaa4,	// (0x000315aa) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcaa4,	// (0x000315aa) aid_vkb2_area_bottom_pane_cell

0x7b5b,	// (0x0002c661) popup_char_count_window

0x7ff3,	// (0x0002caf9) popup_char_count_window_g1

0x7ffc,	// (0x0002cb02) popup_char_count_window_g2

0x8005,	// (0x0002cb0b) popup_char_count_window_g3

0x0002,

0xfdaf,	// (0x000348b5) popup_char_count_window_g

0x800e,	// (0x0002cb14) popup_char_count_window_t1

0x2011,	// (0x00026b17) popup_fep_char_preview_window_ParamLimits

0x2011,	// (0x00026b17) popup_fep_char_preview_window

0xca14,	// (0x0003151a) vkb2_top_candi_pane_ParamLimits

0xca14,	// (0x0003151a) vkb2_top_candi_pane

0xe38b,	// (0x00032e91) cell_vkb2_top_candi_pane_ParamLimits

0xe38b,	// (0x00032e91) cell_vkb2_top_candi_pane

0x3cd9,	// (0x000287df) bg_popup_fep_char_preview_window_ParamLimits

0x3cd9,	// (0x000287df) bg_popup_fep_char_preview_window

0x2595,	// (0x0002709b) popup_fep_char_preview_window_t1_ParamLimits

0x2595,	// (0x0002709b) popup_fep_char_preview_window_t1

0x806a,	// (0x0002cb70) bg_popup_fep_char_preview_window_g1

0x8072,	// (0x0002cb78) bg_popup_fep_char_preview_window_g2

0x807a,	// (0x0002cb80) bg_popup_fep_char_preview_window_g3

0x80b3,	// (0x0002cbb9) bg_popup_fep_char_preview_window_g4

0x80bb,	// (0x0002cbc1) bg_popup_fep_char_preview_window_g5

0x80c3,	// (0x0002cbc9) bg_popup_fep_char_preview_window_g6

0x8082,	// (0x0002cb88) bg_popup_fep_char_preview_window_g7

0x808a,	// (0x0002cb90) bg_popup_fep_char_preview_window_g8

0x80cb,	// (0x0002cbd1) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb6,	// (0x000348bc) bg_popup_fep_char_preview_window_g

0x5f0f,	// (0x0002aa15) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5f0f,	// (0x0002aa15) cell_vkb2_top_candi_pane_g1

0x6250,	// (0x0002ad56) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6250,	// (0x0002ad56) cell_vkb2_top_candi_pane_g2

0x6271,	// (0x0002ad77) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6271,	// (0x0002ad77) cell_vkb2_top_candi_pane_g3

0x25d7,	// (0x000270dd) cell_vkb2_top_candi_pane_g4_ParamLimits

0x25d7,	// (0x000270dd) cell_vkb2_top_candi_pane_g4

0x8092,	// (0x0002cb98) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8092,	// (0x0002cb98) cell_vkb2_top_candi_pane_g5

0x747c,	// (0x0002bf82) cell_vkb2_top_candi_pane_g6_ParamLimits

0x747c,	// (0x0002bf82) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcb,	// (0x000348d1) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcb,	// (0x000348d1) cell_vkb2_top_candi_pane_g

0x25f8,	// (0x000270fe) cell_vkb2_top_candi_pane_t1

0x19d8,	// (0x000264de) aid_size_touch_slider_mark_ParamLimits

0x19d8,	// (0x000264de) aid_size_touch_slider_mark

0xe092,	// (0x00032b98) grid_graphic2_catg_pane_ParamLimits

0xe092,	// (0x00032b98) grid_graphic2_catg_pane

0xe150,	// (0x00032c56) popup_grid_graphic2_window_t1_ParamLimits

0xe150,	// (0x00032c56) popup_grid_graphic2_window_t1

0xe166,	// (0x00032c6c) popup_grid_graphic2_window_t2_ParamLimits

0xe166,	// (0x00032c6c) popup_grid_graphic2_window_t2

0x0001,

0xfd84,	// (0x0003488a) popup_grid_graphic2_window_t_ParamLimits

0xfd84,	// (0x0003488a) popup_grid_graphic2_window_t

0xcfe8,	// (0x00031aee) bg_button_pane_cp05_ParamLimits

0xe301,	// (0x00032e07) cell_graphic2_control_pane_g1_ParamLimits

0xe3ef,	// (0x00032ef5) cell_graphic2_catg_pane_ParamLimits

0xe3ef,	// (0x00032ef5) cell_graphic2_catg_pane

0xce45,	// (0x0003194b) bg_button_pane_cp12

0xe401,	// (0x00032f07) cell_graphic2_catg_pane_g1

0x75ba,	// (0x0002c0c0) cell_tb_ext_pane_t1_ParamLimits

0x23c7,	// (0x00026ecd) vkb2_top_cell_right_narrow_pane_ParamLimits

0x23c7,	// (0x00026ecd) vkb2_top_cell_right_narrow_pane

0x23df,	// (0x00026ee5) vkb2_top_cell_right_wide_pane_ParamLimits

0x23df,	// (0x00026ee5) vkb2_top_cell_right_wide_pane

0x1b6a,	// (0x00026670) bg_vkb2_func_pane_ParamLimits

0x1b6a,	// (0x00026670) bg_vkb2_func_pane

0x2450,	// (0x00026f56) vkb2_top_cell_left_pane_g1_ParamLimits

0x1b6a,	// (0x00026670) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1b6a,	// (0x00026670) bg_vkb2_fuc_pane_cp03

0x24ae,	// (0x00026fb4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x367b,	// (0x00028181) bg_vkb2_func_pane_g1

0x3683,	// (0x00028189) bg_vkb2_func_pane_g2

0x3693,	// (0x00028199) bg_vkb2_func_pane_g3

0x368b,	// (0x00028191) bg_vkb2_func_pane_g4

0x369b,	// (0x000281a1) bg_vkb2_func_pane_g5

0x36a3,	// (0x000281a9) bg_vkb2_func_pane_g6

0x36ab,	// (0x000281b1) bg_vkb2_func_pane_g7

0x36b3,	// (0x000281b9) bg_vkb2_func_pane_g8

0x3673,	// (0x00028179) bg_vkb2_func_pane_g9

0x0008,

0xfdd8,	// (0x000348de) bg_vkb2_func_pane_g

0x1b6a,	// (0x00026670) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1b6a,	// (0x00026670) bg_vkb2_fuc_pane_cp01

0x2450,	// (0x00026f56) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2450,	// (0x00026f56) vkb2_top_cell_right_wide_pane_g1

0x1b6a,	// (0x00026670) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1b6a,	// (0x00026670) bg_vkb2_fuc_pane_cp02

0x2616,	// (0x0002711c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2616,	// (0x0002711c) vkb2_top_cell_right_narrow_pane_g1

0xd8ff,	// (0x00032405) aid_touch_area_decrease_ParamLimits

0xd8ff,	// (0x00032405) aid_touch_area_decrease

0xd939,	// (0x0003243f) aid_touch_area_increase_ParamLimits

0xd939,	// (0x0003243f) aid_touch_area_increase

0xd961,	// (0x00032467) aid_touch_area_mute_ParamLimits

0xd961,	// (0x00032467) aid_touch_area_mute

0xd989,	// (0x0003248f) aid_touch_area_slider_ParamLimits

0xd989,	// (0x0003248f) aid_touch_area_slider

0xd9c9,	// (0x000324cf) popup_slider_window_g4_ParamLimits

0xd9c9,	// (0x000324cf) popup_slider_window_g4

0xd9f1,	// (0x000324f7) popup_slider_window_g5_ParamLimits

0xd9f1,	// (0x000324f7) popup_slider_window_g5

0xda25,	// (0x0003252b) popup_slider_window_g6_ParamLimits

0xda25,	// (0x0003252b) popup_slider_window_g6

0x738f,	// (0x0002be95) popup_slider_window_t2_ParamLimits

0x738f,	// (0x0002be95) popup_slider_window_t2

0x0001,

0xfcd2,	// (0x000347d8) popup_slider_window_t_ParamLimits

0xfcd2,	// (0x000347d8) popup_slider_window_t

0xda41,	// (0x00032547) slider_pane_ParamLimits

0xda41,	// (0x00032547) slider_pane

0x80ee,	// (0x0002cbf4) slider_pane_g1_ParamLimits

0x80ee,	// (0x0002cbf4) slider_pane_g1

0x8102,	// (0x0002cc08) slider_pane_g2_ParamLimits

0x8102,	// (0x0002cc08) slider_pane_g2

0x8118,	// (0x0002cc1e) slider_pane_g3_ParamLimits

0x8118,	// (0x0002cc1e) slider_pane_g3

0x0003,

0xfdeb,	// (0x000348f1) slider_pane_g_ParamLimits

0xfdeb,	// (0x000348f1) slider_pane_g

0xb66f,	// (0x00030175) popup_tb_float_extension_window_ParamLimits

0xb66f,	// (0x00030175) popup_tb_float_extension_window

0x8144,	// (0x0002cc4a) aid_size_cell_tb_float_ext

0xce45,	// (0x0003194b) bg_popup_sub_window_cp28

0x8150,	// (0x0002cc56) grid_tb_float_ext_pane

0x815c,	// (0x0002cc62) cell_tb_float_ext_pane_ParamLimits

0x815c,	// (0x0002cc62) cell_tb_float_ext_pane

0x8178,	// (0x0002cc7e) cell_tb_float_ext_pane_g1

0x8181,	// (0x0002cc87) grid_highlight_pane_cp12

0xc4c6,	// (0x00030fcc) cell_last_hwr_side_pane_ParamLimits

0xc4c6,	// (0x00030fcc) cell_last_hwr_side_pane

0x5c94,	// (0x0002a79a) cell_last_hwr_side_pane_g1

0x818a,	// (0x0002cc90) cell_last_hwr_side_pane_g2

0x0001,

0xfdf4,	// (0x000348fa) cell_last_hwr_side_pane_g

0xcb81,	// (0x00031687) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcb81,	// (0x00031687) vkb2_area_bottom_space_btn_pane

0x5f0f,	// (0x0002aa15) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7c10,	// (0x0002c716) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x25f8,	// (0x000270fe) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2632,	// (0x00027138) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2632,	// (0x00027138) vkb2_area_bottom_space_btn_pane_g1

0x266c,	// (0x00027172) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x266c,	// (0x00027172) vkb2_area_bottom_space_btn_pane_g2

0x26a2,	// (0x000271a8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x26a2,	// (0x000271a8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf9,	// (0x000348ff) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf9,	// (0x000348ff) vkb2_area_bottom_space_btn_pane_g

0x1c21,	// (0x00026727) cel_fep_hwr_func_pane_ParamLimits

0x1c21,	// (0x00026727) cel_fep_hwr_func_pane

0xc49b,	// (0x00030fa1) cell_hwr_side_button_pane_ParamLimits

0xc49b,	// (0x00030fa1) cell_hwr_side_button_pane

0x75ee,	// (0x0002c0f4) aid_area_touch_clock_ParamLimits

0xcfe8,	// (0x00031aee) bg_uniindi_top_pane_ParamLimits

0x7602,	// (0x0002c108) uniindi_top_pane_g1_ParamLimits

0x7618,	// (0x0002c11e) uniindi_top_pane_g2_ParamLimits

0x7624,	// (0x0002c12a) uniindi_top_pane_g3_ParamLimits

0x7635,	// (0x0002c13b) uniindi_top_pane_g4_ParamLimits

0xfd0a,	// (0x00034810) uniindi_top_pane_g_ParamLimits

0x7642,	// (0x0002c148) uniindi_top_pane_t1_ParamLimits

0xcfe8,	// (0x00031aee) bg_vkb2_func_pane_cp01_ParamLimits

0xcfe8,	// (0x00031aee) bg_vkb2_func_pane_cp01

0x8193,	// (0x0002cc99) cel_fep_hwr_func_pane_g1_ParamLimits

0x8193,	// (0x0002cc99) cel_fep_hwr_func_pane_g1

0xcfe8,	// (0x00031aee) bg_vkb2_func_pane_cp02_ParamLimits

0xcfe8,	// (0x00031aee) bg_vkb2_func_pane_cp02

0x8193,	// (0x0002cc99) cell_hwr_side_button_pane_g1_ParamLimits

0x8193,	// (0x0002cc99) cell_hwr_side_button_pane_g1

0x34f8,	// (0x00027ffe) status_pane_g4_ParamLimits

0x34f8,	// (0x00027ffe) status_pane_g4

0x3512,	// (0x00028018) status_pane_t1

0x5a47,	// (0x0002a54d) form2_midp_gauge_slider_cont_pane

0x5a4f,	// (0x0002a555) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc3cc,	// (0x00030ed2) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc3de,	// (0x00030ee4) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad6,	// (0x000345dc) form2_midp_gauge_slider_pane_t_ParamLimits

0x5a85,	// (0x0002a58b) form2_midp_slider_pane_ParamLimits

0x1fd9,	// (0x00026adf) aid_size_cell_func_vkb2_ParamLimits

0x1fd9,	// (0x00026adf) aid_size_cell_func_vkb2

0x8130,	// (0x0002cc36) slider_pane_g4_ParamLimits

0x8130,	// (0x0002cc36) slider_pane_g4

0xcbea,	// (0x000316f0) form2_midp_gauge_slider_pane_t2_cp01

0xcbf8,	// (0x000316fe) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcbf8,	// (0x000316fe) form2_midp_gauge_slider_pane_t3_cp01

0x2717,	// (0x0002721d) form2_midp_slider_pane_cp01

0xce45,	// (0x0003194b) navi_smil_pane

0x81cc,	// (0x0002ccd2) navi_smil_pane_g1

0x81d4,	// (0x0002ccda) navi_smil_pane_t1

0x81a1,	// (0x0002cca7) form2_midp_slider_pane_g1

0x81aa,	// (0x0002ccb0) form2_midp_slider_pane_g2

0x81b2,	// (0x0002ccb8) form2_midp_slider_pane_g3

0x81a1,	// (0x0002cca7) form2_midp_slider_pane_g4

0xe40a,	// (0x00032f10) form2_midp_slider_pane_g5

0x0004,

0xfe02,	// (0x00034908) form2_midp_slider_pane_g

0x26dc,	// (0x000271e2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x26dc,	// (0x000271e2) vkb2_area_bottom_space_btn_pane_g4

0xb856,	// (0x0003035c) lc0_navi_pane_ParamLimits

0xb856,	// (0x0003035c) lc0_navi_pane

0xb8c6,	// (0x000303cc) lc0_stat_indi_pane_ParamLimits

0xb8c6,	// (0x000303cc) lc0_stat_indi_pane

0xb8db,	// (0x000303e1) ls0_title_pane_ParamLimits

0xb8db,	// (0x000303e1) ls0_title_pane

0xd4f7,	// (0x00031ffd) bg_popup_sub_pane_cp14_ParamLimits

0x75d5,	// (0x0002c0db) list_uniindi_pane_ParamLimits

0x75e1,	// (0x0002c0e7) uniindi_top_pane_ParamLimits

0x7681,	// (0x0002c187) list_single_uniindi_pane_g1_ParamLimits

0x7694,	// (0x0002c19a) list_single_uniindi_pane_t1_ParamLimits

0xcc15,	// (0x0003171b) lc0_stat_clock_pane_ParamLimits

0xcc15,	// (0x0003171b) lc0_stat_clock_pane

0xe413,	// (0x00032f19) lc0_stat_indi_pane_g1_ParamLimits

0xe413,	// (0x00032f19) lc0_stat_indi_pane_g1

0xe420,	// (0x00032f26) lc0_stat_indi_pane_g2_ParamLimits

0xe420,	// (0x00032f26) lc0_stat_indi_pane_g2

0x0001,

0xfe0d,	// (0x00034913) lc0_stat_indi_pane_g_ParamLimits

0xfe0d,	// (0x00034913) lc0_stat_indi_pane_g

0xcc22,	// (0x00031728) lc0_uni_indicator_pane_ParamLimits

0xcc22,	// (0x00031728) lc0_uni_indicator_pane

0xe42d,	// (0x00032f33) ls0_title_pane_g1_ParamLimits

0xe42d,	// (0x00032f33) ls0_title_pane_g1

0xe441,	// (0x00032f47) ls0_title_pane_t1_ParamLimits

0xe441,	// (0x00032f47) ls0_title_pane_t1

0xcc2f,	// (0x00031735) lc0_uni_indicator_pane_g1_ParamLimits

0xcc2f,	// (0x00031735) lc0_uni_indicator_pane_g1

0x8246,	// (0x0002cd4c) lc0_stat_clock_pane_t1

0xce45,	// (0x0003194b) main_ai5_pane

0x8254,	// (0x0002cd5a) ai5_sk_pane_ParamLimits

0x8254,	// (0x0002cd5a) ai5_sk_pane

0xe46f,	// (0x00032f75) cell_ai5_widget_pane_ParamLimits

0xe46f,	// (0x00032f75) cell_ai5_widget_pane

0xe4de,	// (0x00032fe4) aid_size_cell_widget_grid

0x8312,	// (0x0002ce18) bg_ai5_widget_pane_ParamLimits

0x8312,	// (0x0002ce18) bg_ai5_widget_pane

0xe512,	// (0x00033018) cell_ai5_widget_pane_g2

0xe526,	// (0x0003302c) cell_ai5_widget_pane_g3

0xe540,	// (0x00033046) cell_ai5_widget_pane_g4

0xe550,	// (0x00033056) cell_ai5_widget_pane_g5

0xe560,	// (0x00033066) cell_ai5_widget_pane_g6

0xe56c,	// (0x00033072) cell_ai5_widget_pane_g7

0xe590,	// (0x00033096) cell_ai5_widget_pane_t1_ParamLimits

0xe590,	// (0x00033096) cell_ai5_widget_pane_t1

0x8471,	// (0x0002cf77) cell_ai5_widget_pane_t2_ParamLimits

0x8471,	// (0x0002cf77) cell_ai5_widget_pane_t2

0x8489,	// (0x0002cf8f) cell_ai5_widget_pane_t3_ParamLimits

0x8489,	// (0x0002cf8f) cell_ai5_widget_pane_t3

0xe5ad,	// (0x000330b3) cell_ai5_widget_pane_t4_ParamLimits

0xe5ad,	// (0x000330b3) cell_ai5_widget_pane_t4

0xe5d3,	// (0x000330d9) cell_ai5_widget_pane_t5_ParamLimits

0xe5d3,	// (0x000330d9) cell_ai5_widget_pane_t5

0x84e7,	// (0x0002cfed) cell_ai5_widget_pane_t6_ParamLimits

0x84e7,	// (0x0002cfed) cell_ai5_widget_pane_t6

0x84f9,	// (0x0002cfff) cell_ai5_widget_pane_t7_ParamLimits

0x84f9,	// (0x0002cfff) cell_ai5_widget_pane_t7

0x8518,	// (0x0002d01e) cell_ai5_widget_pane_t8_ParamLimits

0x8518,	// (0x0002d01e) cell_ai5_widget_pane_t8

0x000b,

0xfe2d,	// (0x00034933) cell_ai5_widget_pane_t_ParamLimits

0xfe2d,	// (0x00034933) cell_ai5_widget_pane_t

0xe665,	// (0x0003316b) grid_ai5_widget_pane

0xd4f7,	// (0x00031ffd) highlight_cell_ai5_widget_pane_ParamLimits

0xd4f7,	// (0x00031ffd) highlight_cell_ai5_widget_pane

0xe673,	// (0x00033179) ai5_sk_left_pane

0xe67d,	// (0x00033183) ai5_sk_middle_pane

0xe687,	// (0x0003318d) ai5_sk_right_pane

0x85c8,	// (0x0002d0ce) bg_ai5_widget_pane_g1_ParamLimits

0x85c8,	// (0x0002d0ce) bg_ai5_widget_pane_g1

0x85d4,	// (0x0002d0da) bg_ai5_widget_pane_g2_ParamLimits

0x85d4,	// (0x0002d0da) bg_ai5_widget_pane_g2

0x85e0,	// (0x0002d0e6) bg_ai5_widget_pane_g3_ParamLimits

0x85e0,	// (0x0002d0e6) bg_ai5_widget_pane_g3

0x85ec,	// (0x0002d0f2) bg_ai5_widget_pane_g4_ParamLimits

0x85ec,	// (0x0002d0f2) bg_ai5_widget_pane_g4

0x85f8,	// (0x0002d0fe) bg_ai5_widget_pane_g5_ParamLimits

0x85f8,	// (0x0002d0fe) bg_ai5_widget_pane_g5

0x8604,	// (0x0002d10a) bg_ai5_widget_pane_g6_ParamLimits

0x8604,	// (0x0002d10a) bg_ai5_widget_pane_g6

0x8610,	// (0x0002d116) bg_ai5_widget_pane_g7_ParamLimits

0x8610,	// (0x0002d116) bg_ai5_widget_pane_g7

0x861c,	// (0x0002d122) bg_ai5_widget_pane_g8_ParamLimits

0x861c,	// (0x0002d122) bg_ai5_widget_pane_g8

0x8628,	// (0x0002d12e) bg_ai5_widget_pane_g9_ParamLimits

0x8628,	// (0x0002d12e) bg_ai5_widget_pane_g9

0x0008,

0xfe46,	// (0x0003494c) bg_ai5_widget_pane_g_ParamLimits

0xfe46,	// (0x0003494c) bg_ai5_widget_pane_g

0xe6bd,	// (0x000331c3) cell_shortcut_ai5_widget_pane_ParamLimits

0xe6bd,	// (0x000331c3) cell_shortcut_ai5_widget_pane

0x2e16,	// (0x0002791c) bg_cell_shortcut_ai5_widget_pane

0x8673,	// (0x0002d179) cell_grid_ai5_widget_pane_g1

0x2e16,	// (0x0002791c) highlight_cell_shortcut_ai5_widget_pane

0x3683,	// (0x00028189) ai5_sk_left_pane_g1

0x867c,	// (0x0002d182) ai5_sk_left_pane_g2

0x8684,	// (0x0002d18a) ai5_sk_left_pane_g3

0x868c,	// (0x0002d192) ai5_sk_left_pane_g4

0x0003,

0xfe59,	// (0x0003495f) ai5_sk_left_pane_g

0x8694,	// (0x0002d19a) ai5_sk_left_pane_t1

0x367b,	// (0x00028181) ai5_sk_right_pane_g1

0x86a2,	// (0x0002d1a8) ai5_sk_right_pane_g2

0x86aa,	// (0x0002d1b0) ai5_sk_right_pane_g3

0x86b2,	// (0x0002d1b8) ai5_sk_right_pane_g4

0x0003,

0xfe62,	// (0x00034968) ai5_sk_right_pane_g

0x86ba,	// (0x0002d1c0) ai5_sk_right_pane_t1

0x367b,	// (0x00028181) ai5_sk_middle_pane_g1

0x3683,	// (0x00028189) ai5_sk_middle_pane_g2

0x369b,	// (0x000281a1) ai5_sk_middle_pane_g3

0x86aa,	// (0x0002d1b0) ai5_sk_middle_pane_g4

0x8684,	// (0x0002d18a) ai5_sk_middle_pane_g5

0x86c8,	// (0x0002d1ce) ai5_sk_middle_pane_g6

0xe6d0,	// (0x000331d6) ai5_sk_middle_pane_g7

0x0006,

0xfe6b,	// (0x00034971) ai5_sk_middle_pane_g

0xb740,	// (0x00030246) aid_touch_area_size_lc0_ParamLimits

0xb740,	// (0x00030246) aid_touch_area_size_lc0

0x1dc0,	// (0x000268c6) cell_hwr_candidate_pane_t1_ParamLimits

0x31bb,	// (0x00027cc1) aid_touch_navi_pane

0xb9e6,	// (0x000304ec) status_dt_navi_pane_ParamLimits

0xb9e6,	// (0x000304ec) status_dt_navi_pane

0xb9fe,	// (0x00030504) status_dt_sta_pane_ParamLimits

0xb9fe,	// (0x00030504) status_dt_sta_pane

0xe6d8,	// (0x000331de) dt_sta_controll_pane

0xe6e5,	// (0x000331eb) dt_sta_indi_pane

0xe6f2,	// (0x000331f8) dt_sta_title_pane

0xcfe8,	// (0x00031aee) bg_dt_sta_indi_pane_ParamLimits

0xcfe8,	// (0x00031aee) bg_dt_sta_indi_pane

0xe704,	// (0x0003320a) dt_sta_battery_pane

0xe70c,	// (0x00033212) dt_sta_indi_pane_g1

0xe715,	// (0x0003321b) dt_sta_indi_pane_g2

0xe71e,	// (0x00033224) dt_sta_indi_pane_g3

0x0002,

0xfe7a,	// (0x00034980) dt_sta_indi_pane_g

0xe727,	// (0x0003322d) dt_sta_signal_pane

0xd4f7,	// (0x00031ffd) bg_dt_sta_title_pane_ParamLimits

0xd4f7,	// (0x00031ffd) bg_dt_sta_title_pane

0xe730,	// (0x00033236) dt_sta_title_pane_g1

0xe738,	// (0x0003323e) dt_sta_title_pane_t1_ParamLimits

0xe738,	// (0x0003323e) dt_sta_title_pane_t1

0xce45,	// (0x0003194b) bg_dt_sta_control_pane

0xe74d,	// (0x00033253) dt_sta_controll_pane_g1

0xe756,	// (0x0003325c) bg_dt_sta_title_pane_g1

0xe75f,	// (0x00033265) bg_dt_sta_title_pane_g2

0xe768,	// (0x0003326e) bg_dt_sta_title_pane_g3

0x0002,

0xfe81,	// (0x00034987) bg_dt_sta_title_pane_g

0x5c94,	// (0x0002a79a) bg_dt_sta_indi_pane_g1

0x8776,	// (0x0002d27c) dt_sta_signal_pane_g1

0x877e,	// (0x0002d284) dt_sta_signal_pane_g2

0x0001,

0xfe88,	// (0x0003498e) dt_sta_signal_pane_g

0x8786,	// (0x0002d28c) dt_sta_battery_pane_g1

0x878f,	// (0x0002d295) dt_sta_battery_pane_t1

0x5c94,	// (0x0002a79a) bg_dt_sta_control_pane_g1

0x0a90,	// (0x00025596) fep_china_uni_eep_pane

0x0a98,	// (0x0002559e) fep_china_uni_entry_pane_ParamLimits

0x0aa8,	// (0x000255ae) popup_fep_china_uni_window_g1_ParamLimits

0x0ab8,	// (0x000255be) popup_fep_china_uni_window_g2_ParamLimits

0x0ab8,	// (0x000255be) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x000341fe) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x000341fe) popup_fep_china_uni_window_g

0x879e,	// (0x0002d2a4) fep_china_uni_eep_pane_g1

0x87a6,	// (0x0002d2ac) fep_china_uni_eep_pane_t1

0x81c3,	// (0x0002ccc9) aid_touch_area_size_smil_player

0x330f,	// (0x00027e15) lc0_clock_pane

0x3506,	// (0x0002800c) status_pane_g5_ParamLimits

0x3506,	// (0x0002800c) status_pane_g5

0xb197,	// (0x0002fc9d) popup_keymap_window

0x34cc,	// (0x00027fd2) status_icon_pane

0xe526,	// (0x0003302c) cell_ai5_widget_pane_g3_ParamLimits

0xe540,	// (0x00033046) cell_ai5_widget_pane_g4_ParamLimits

0xe550,	// (0x00033056) cell_ai5_widget_pane_g5_ParamLimits

0x83f4,	// (0x0002cefa) cell_ai5_widget_pane_g8_ParamLimits

0x83f4,	// (0x0002cefa) cell_ai5_widget_pane_g8

0x8408,	// (0x0002cf0e) cell_ai5_widget_pane_g9_ParamLimits

0x8408,	// (0x0002cf0e) cell_ai5_widget_pane_g9

0x841c,	// (0x0002cf22) cell_ai5_widget_pane_g10_ParamLimits

0x841c,	// (0x0002cf22) cell_ai5_widget_pane_g10

0x87b5,	// (0x0002d2bb) status_icon_pane_g1

0xce45,	// (0x0003194b) bg_popup_sub_pane_cp13

0x87bd,	// (0x0002d2c3) popup_keymap_window_t1

0xae82,	// (0x0002f988) control_pane_g6_ParamLimits

0xae82,	// (0x0002f988) control_pane_g6

0xae8f,	// (0x0002f995) control_pane_g7_ParamLimits

0xae8f,	// (0x0002f995) control_pane_g7

0xae9c,	// (0x0002f9a2) control_pane_g8_ParamLimits

0xae9c,	// (0x0002f9a2) control_pane_g8

0xe6d8,	// (0x000331de) dt_sta_controll_pane_ParamLimits

0xe6e5,	// (0x000331eb) dt_sta_indi_pane_ParamLimits

0xe6f2,	// (0x000331f8) dt_sta_title_pane_ParamLimits

0xd439,	// (0x00031f3f) aid_size_touch_scroll_bar_cale

0xf440,	// (0x00033f46) popup_discreet_window_ParamLimits

0xf440,	// (0x00033f46) popup_discreet_window

0xa530,	// (0x0002f036) popup_sk_window

0x3cd9,	// (0x000287df) bg_popup_sub_pane_cp28_ParamLimits

0x3cd9,	// (0x000287df) bg_popup_sub_pane_cp28

0x87cb,	// (0x0002d2d1) popup_discreet_window_g1_ParamLimits

0x87cb,	// (0x0002d2d1) popup_discreet_window_g1

0x87eb,	// (0x0002d2f1) popup_discreet_window_t1_ParamLimits

0x87eb,	// (0x0002d2f1) popup_discreet_window_t1

0x8809,	// (0x0002d30f) popup_discreet_window_t2_ParamLimits

0x8809,	// (0x0002d30f) popup_discreet_window_t2

0x0002,

0xfe8d,	// (0x00034993) popup_discreet_window_t_ParamLimits

0xfe8d,	// (0x00034993) popup_discreet_window_t

0x274d,	// (0x00027253) popup_sk_window_g1

0x2757,	// (0x0002725d) popup_sk_window_g2

0x0001,

0xfe94,	// (0x0003499a) popup_sk_window_g

0x275f,	// (0x00027265) popup_sk_window_t1

0x276d,	// (0x00027273) popup_sk_window_t1_copy1

0xe512,	// (0x00033018) cell_ai5_widget_pane_g2_ParamLimits

0xe5f3,	// (0x000330f9) cell_ai5_widget_pane_t9_ParamLimits

0xe5f3,	// (0x000330f9) cell_ai5_widget_pane_t9

0xce45,	// (0x0003194b) main_fep_fshwr2_pane

0xcc4e,	// (0x00031754) aid_fshwr2_btn_pane

0xcc62,	// (0x00031768) aid_fshwr2_syb_pane

0xcc76,	// (0x0003177c) aid_fshwr2_txt_pane

0xcc86,	// (0x0003178c) fshwr2_func_candi_pane

0xcca8,	// (0x000317ae) fshwr2_hwr_syb_pane

0xcccc,	// (0x000317d2) fshwr2_icf_pane

0xce45,	// (0x0003194b) fshwr2_icf_bg_pane

0x2819,	// (0x0002731f) fshwr2_icf_pane_t1_ParamLimits

0x2819,	// (0x0002731f) fshwr2_icf_pane_t1

0x0890,	// (0x00025396) fshwr2_func_candi_pane_g1

0xe771,	// (0x00033277) fshwr2_func_candi_row_pane_ParamLimits

0xe771,	// (0x00033277) fshwr2_func_candi_row_pane

0xccfc,	// (0x00031802) cell_fshwr2_syb_pane_ParamLimits

0xccfc,	// (0x00031802) cell_fshwr2_syb_pane

0x8193,	// (0x0002cc99) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8193,	// (0x0002cc99) fshwr2_hwr_syb_pane_g1

0xce45,	// (0x0003194b) bg_popup_call_pane_cp01

0xcd24,	// (0x0003182a) fshwr2_func_candi_cell_pane_ParamLimits

0xcd24,	// (0x0003182a) fshwr2_func_candi_cell_pane

0x3ab9,	// (0x000285bf) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3ab9,	// (0x000285bf) fshwr2_func_candi_cell_bg_pane

0xcd6f,	// (0x00031875) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcd6f,	// (0x00031875) fshwr2_func_candi_cell_pane_g1

0xcda6,	// (0x000318ac) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcda6,	// (0x000318ac) fshwr2_func_candi_cell_pane_t1

0xce45,	// (0x0003194b) bg_button_pane_cp08

0x313d,	// (0x00027c43) cell_fshwr2_syb_bg_pane

0xcdc1,	// (0x000318c7) cell_fshwr2_syb_bg_pane_g1

0xcdd5,	// (0x000318db) cell_fshwr2_syb_bg_pane_t1

0xd4f7,	// (0x00031ffd) main_tmo_pane

0xbed9,	// (0x000309df) uni_indicator_pane_g1_ParamLimits

0xbeef,	// (0x000309f5) uni_indicator_pane_g2_ParamLimits

0xbf05,	// (0x00030a0b) uni_indicator_pane_g3_ParamLimits

0xbf18,	// (0x00030a1e) uni_indicator_pane_g4_ParamLimits

0xbf18,	// (0x00030a1e) uni_indicator_pane_g4

0x4850,	// (0x00029356) uni_indicator_pane_g5_ParamLimits

0x4850,	// (0x00029356) uni_indicator_pane_g5

0x4850,	// (0x00029356) uni_indicator_pane_g6_ParamLimits

0x4850,	// (0x00029356) uni_indicator_pane_g6

0xf8f7,	// (0x000343fd) uni_indicator_pane_g_ParamLimits

0xd8cf,	// (0x000323d5) popup_tmo_note_window_ParamLimits

0xd8cf,	// (0x000323d5) popup_tmo_note_window

0xd4f7,	// (0x00031ffd) fshwr2_bg_pane

0xcd97,	// (0x0003189d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcd97,	// (0x0003189d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe99,	// (0x0003499f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe99,	// (0x0003499f) fshwr2_func_candi_cell_pane_g

0x5c94,	// (0x0002a79a) bg_popup_window_pane_cp01

0x290b,	// (0x00027411) bg_popup_window_pane_g1_cp01

0x887e,	// (0x0002d384) bg_popup_window_pane_cp22_ParamLimits

0x887e,	// (0x0002d384) bg_popup_window_pane_cp22

0x888c,	// (0x0002d392) listscroll_tmo_link_pane_ParamLimits

0x888c,	// (0x0002d392) listscroll_tmo_link_pane

0x88cc,	// (0x0002d3d2) popup_tmo_note_window_g1_ParamLimits

0x88cc,	// (0x0002d3d2) popup_tmo_note_window_g1

0x88d9,	// (0x0002d3df) tmo_note_info_pane_ParamLimits

0x88d9,	// (0x0002d3df) tmo_note_info_pane

0xe798,	// (0x0003329e) list_tmo_note_info_pane_g1_ParamLimits

0xe798,	// (0x0003329e) list_tmo_note_info_pane_g1

0x890a,	// (0x0002d410) list_tmo_note_info_pane_g2_ParamLimits

0x890a,	// (0x0002d410) list_tmo_note_info_pane_g2

0x0001,

0xfe9e,	// (0x000349a4) list_tmo_note_info_pane_g_ParamLimits

0xfe9e,	// (0x000349a4) list_tmo_note_info_pane_g

0x8926,	// (0x0002d42c) list_tmo_note_info_text_pane_ParamLimits

0x8926,	// (0x0002d42c) list_tmo_note_info_text_pane

0x89ab,	// (0x0002d4b1) list_tmo_link_pane

0x89b8,	// (0x0002d4be) scroll_pane_cp20

0x89c5,	// (0x0002d4cb) list_single_tmo_link_pane_ParamLimits

0x89c5,	// (0x0002d4cb) list_single_tmo_link_pane

0x89d5,	// (0x0002d4db) list_single_tmo_link_pane_t1

0x89e3,	// (0x0002d4e9) list_tmo_note_info_text_pane_t1_ParamLimits

0x89e3,	// (0x0002d4e9) list_tmo_note_info_text_pane_t1

0xa9d2,	// (0x0002f4d8) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa9d2,	// (0x0002f4d8) aid_size_touch_scroll_bar_cp01

0xa062,	// (0x0002eb68) aid_size_touch_slider_marker

0xa520,	// (0x0002f026) popup_settings_window_ParamLimits

0xa520,	// (0x0002f026) popup_settings_window

0xebe7,	// (0x000336ed) popup_candi_list_indi_window

0x31bb,	// (0x00027cc1) aid_touch_navi_pane_ParamLimits

0x1f30,	// (0x00026a36) rs_clock_indi_pane

0x1f39,	// (0x00026a3f) sctrl_sk_bottom_pane_ParamLimits

0x1f4a,	// (0x00026a50) sctrl_sk_top_pane_ParamLimits

0x202b,	// (0x00026b31) popup_fep_tooltip_window

0xe4de,	// (0x00032fe4) aid_size_cell_widget_grid_ParamLimits

0xe4fd,	// (0x00033003) cell_ai5_widget_pane_g1_ParamLimits

0xe4fd,	// (0x00033003) cell_ai5_widget_pane_g1

0xe560,	// (0x00033066) cell_ai5_widget_pane_g6_ParamLimits

0xe56c,	// (0x00033072) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe12,	// (0x00034918) cell_ai5_widget_pane_g_ParamLimits

0xfe12,	// (0x00034918) cell_ai5_widget_pane_g

0xe622,	// (0x00033128) cell_ai5_widget_pane_t10_ParamLimits

0xe622,	// (0x00033128) cell_ai5_widget_pane_t10

0xe665,	// (0x0003316b) grid_ai5_widget_pane_ParamLimits

0xe691,	// (0x00033197) cell_contacts_ai5_widget_pane_ParamLimits

0xe691,	// (0x00033197) cell_contacts_ai5_widget_pane

0x881e,	// (0x0002d324) popup_discreet_window_t3_ParamLimits

0x881e,	// (0x0002d324) popup_discreet_window_t3

0xcce8,	// (0x000317ee) popup_fshwr2_char_preview_window_ParamLimits

0xcce8,	// (0x000317ee) popup_fshwr2_char_preview_window

0xe7af,	// (0x000332b5) tmo_note_info_pane_t1

0xe7c4,	// (0x000332ca) tmo_note_info_pane_t2

0xe7dd,	// (0x000332e3) tmo_note_info_pane_t3

0x8987,	// (0x0002d48d) tmo_note_info_pane_t4

0x8999,	// (0x0002d49f) tmo_note_info_pane_t5

0x0004,

0xfea3,	// (0x000349a9) tmo_note_info_pane_t

0x89ab,	// (0x0002d4b1) list_tmo_link_pane_ParamLimits

0x89b8,	// (0x0002d4be) scroll_pane_cp20_ParamLimits

0xce45,	// (0x0003194b) bg_popup_fep_char_preview_window_cp01

0x89fc,	// (0x0002d502) popup_fshwr2_char_preview_window_t1

0x8a0a,	// (0x0002d510) popup_candi_list_indi_window_g1

0x8a13,	// (0x0002d519) bg_cell_contacts_ai5_widget_pane

0x8a1f,	// (0x0002d525) cell_contacts_ai5_widget_pane_g1

0x8a34,	// (0x0002d53a) cell_contacts_ai5_widget_pane_g2

0x8a40,	// (0x0002d546) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeae,	// (0x000349b4) cell_contacts_ai5_widget_pane_g

0x8a4c,	// (0x0002d552) cell_contacts_ai5_widget_pane_t1

0xd4f7,	// (0x00031ffd) highlight_cell_shortcut_ai5_widget_pane_cp01

0x8ac3,	// (0x0002d5c9) settings_container_pane

0x2e16,	// (0x0002791c) listscroll_set_pane_copy1

0x53b9,	// (0x00029ebf) scroll_pane_cp121_copy1

0x8acf,	// (0x0002d5d5) set_content_pane_copy1

0x8ad7,	// (0x0002d5dd) aid_height_set_list_copy1_ParamLimits

0x8ad7,	// (0x0002d5dd) aid_height_set_list_copy1

0x4a50,	// (0x00029556) aid_size_parent_copy1_ParamLimits

0x4a50,	// (0x00029556) aid_size_parent_copy1

0x8ae3,	// (0x0002d5e9) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8ae3,	// (0x0002d5e9) button_value_adjust_pane_cp6_copy1

0x313d,	// (0x00027c43) list_highlight_pane_cp2_copy1_ParamLimits

0x313d,	// (0x00027c43) list_highlight_pane_cp2_copy1

0x8af7,	// (0x0002d5fd) list_set_pane_copy1_ParamLimits

0x8af7,	// (0x0002d5fd) list_set_pane_copy1

0x8a5e,	// (0x0002d564) main_pane_set_t1_copy1_ParamLimits

0x8a5e,	// (0x0002d564) main_pane_set_t1_copy1

0x8a98,	// (0x0002d59e) main_pane_set_t2_copy1_ParamLimits

0x8a98,	// (0x0002d59e) main_pane_set_t2_copy1

0x8bb8,	// (0x0002d6be) main_pane_set_t3_copy1

0x8bc6,	// (0x0002d6cc) main_pane_set_t4_copy1

0x8ab7,	// (0x0002d5bd) set_content_pane_g1_copy1_ParamLimits

0x8ab7,	// (0x0002d5bd) set_content_pane_g1_copy1

0x8bd4,	// (0x0002d6da) setting_code_pane_copy1

0x8bdc,	// (0x0002d6e2) setting_slider_graphic_pane_copy1

0x8bdc,	// (0x0002d6e2) setting_slider_pane_copy1

0x8be4,	// (0x0002d6ea) setting_text_pane_copy1

0x8be4,	// (0x0002d6ea) setting_volume_pane_copy1

0x8bd4,	// (0x0002d6da) settings_code_pane_cp2_copy1

0x8bec,	// (0x0002d6f2) settings_code_pane_cp_copy1_ParamLimits

0x8bec,	// (0x0002d6f2) settings_code_pane_cp_copy1

0x2914,	// (0x0002741a) volume_set_pane_copy1

0x8c00,	// (0x0002d706) volume_set_pane_g10_copy1

0x8c0c,	// (0x0002d712) volume_set_pane_g1_copy1

0x8c16,	// (0x0002d71c) volume_set_pane_g2_copy1

0x8c20,	// (0x0002d726) volume_set_pane_g3_copy1

0x8c2a,	// (0x0002d730) volume_set_pane_g4_copy1

0x8c34,	// (0x0002d73a) volume_set_pane_g5_copy1

0x8c3e,	// (0x0002d744) volume_set_pane_g6_copy1

0x8c48,	// (0x0002d74e) volume_set_pane_g7_copy1

0x8c52,	// (0x0002d758) volume_set_pane_g8_copy1

0x8c5c,	// (0x0002d762) volume_set_pane_g9_copy1

0xceb5,	// (0x000319bb) bg_set_opt_pane_cp_copy1_ParamLimits

0xceb5,	// (0x000319bb) bg_set_opt_pane_cp_copy1

0x2920,	// (0x00027426) setting_slider_pane_t1_copy1_ParamLimits

0x2920,	// (0x00027426) setting_slider_pane_t1_copy1

0x293f,	// (0x00027445) setting_slider_pane_t2_copy1_ParamLimits

0x293f,	// (0x00027445) setting_slider_pane_t2_copy1

0x2959,	// (0x0002745f) setting_slider_pane_t3_copy1_ParamLimits

0x2959,	// (0x0002745f) setting_slider_pane_t3_copy1

0x2971,	// (0x00027477) slider_set_pane_copy1_ParamLimits

0x2971,	// (0x00027477) slider_set_pane_copy1

0xd54f,	// (0x00032055) set_opt_bg_pane_g1_copy2

0xd557,	// (0x0003205d) set_opt_bg_pane_g2_copy2

0x8c68,	// (0x0002d76e) set_opt_bg_pane_g3_copy2

0xd567,	// (0x0003206d) set_opt_bg_pane_g4_copy2

0xd56f,	// (0x00032075) set_opt_bg_pane_g5_copy2

0xd577,	// (0x0003207d) set_opt_bg_pane_g6_copy2

0x8c72,	// (0x0002d778) set_opt_bg_pane_g7_copy2

0x8c7c,	// (0x0002d782) set_opt_bg_pane_g8_copy2

0x8c86,	// (0x0002d78c) set_opt_bg_pane_g9_copy2

0x2987,	// (0x0002748d) aid_size_touch_slider_mark_copy1_ParamLimits

0x2987,	// (0x0002748d) aid_size_touch_slider_mark_copy1

0x8c90,	// (0x0002d796) slider_set_pane_g1_copy1

0x299b,	// (0x000274a1) slider_set_pane_g2_copy1

0x19f8,	// (0x000264fe) slider_set_pane_g3_copy1_ParamLimits

0x19f8,	// (0x000264fe) slider_set_pane_g3_copy1

0x1a0c,	// (0x00026512) slider_set_pane_g4_copy1_ParamLimits

0x1a0c,	// (0x00026512) slider_set_pane_g4_copy1

0x1a24,	// (0x0002652a) slider_set_pane_g5_copy1_ParamLimits

0x1a24,	// (0x0002652a) slider_set_pane_g5_copy1

0x19f8,	// (0x000264fe) slider_set_pane_g6_copy1_ParamLimits

0x19f8,	// (0x000264fe) slider_set_pane_g6_copy1

0x29a3,	// (0x000274a9) slider_set_pane_g7_copy1_ParamLimits

0x29a3,	// (0x000274a9) slider_set_pane_g7_copy1

0xce59,	// (0x0003195f) bg_set_opt_pane_cp2_copy1

0x8c99,	// (0x0002d79f) setting_slider_graphic_pane_g1_copy1

0x8ca2,	// (0x0002d7a8) setting_slider_graphic_pane_t1_copy1

0x8cb2,	// (0x0002d7b8) setting_slider_graphic_pane_t2_copy1

0x8cc2,	// (0x0002d7c8) slider_set_pane_cp_copy1

0x8cd2,	// (0x0002d7d8) input_focus_pane_cp1_copy1

0x8cdb,	// (0x0002d7e1) list_set_text_pane_copy1

0x8ce3,	// (0x0002d7e9) setting_text_pane_g1_copy1

0xf47c,	// (0x00033f82) set_text_pane_t1_copy1

0x8cd2,	// (0x0002d7d8) input_focus_pane_cp2_copy1

0x8ce3,	// (0x0002d7e9) setting_code_pane_g1_copy1

0x8cec,	// (0x0002d7f2) setting_code_pane_t1_copy1

0x51be,	// (0x00029cc4) list_set_graphic_pane_copy1

0xce59,	// (0x0003195f) bg_set_opt_pane_cp4_copy1

0x0dce,	// (0x000258d4) list_set_graphic_pane_g1_copy1_ParamLimits

0x0dce,	// (0x000258d4) list_set_graphic_pane_g1_copy1

0x8cfa,	// (0x0002d800) list_set_graphic_pane_g2_copy1

0x0de6,	// (0x000258ec) list_set_graphic_pane_t1_copy1_ParamLimits

0x0de6,	// (0x000258ec) list_set_graphic_pane_t1_copy1

0x5c94,	// (0x0002a79a) rs_clock_indi_pane_g1

0x8d02,	// (0x0002d808) rs_clock_indi_pane_t1

0x8d10,	// (0x0002d816) rs_indi_pane

0x8d18,	// (0x0002d81e) rs_indi_pane_g1

0x8d21,	// (0x0002d827) rs_indi_pane_g2

0x8d2a,	// (0x0002d830) rs_indi_pane_g3

0x0002,

0xfeb5,	// (0x000349bb) rs_indi_pane_g

0x2e16,	// (0x0002791c) bg_popup_preview_window_pane_cp03

0x8d33,	// (0x0002d839) popup_fep_tooltip_window_t1

0x694d,	// (0x0002b453) popup_note2_window_g2_ParamLimits

0x694d,	// (0x0002b453) popup_note2_window_g2

0x0001,

0xfc42,	// (0x00034748) popup_note2_window_g_ParamLimits

0xfc42,	// (0x00034748) popup_note2_window_g

0x6e55,	// (0x0002b95b) bg_popup_sub_pane_cp11_ParamLimits

0x6e62,	// (0x0002b968) cell_ai3_links_pane_g1_ParamLimits

0x6e79,	// (0x0002b97f) cell_ai3_links_pane_t1

0xf47c,	// (0x00033f82) set_text_pane_t1_copy1_ParamLimits

0x2d18,	// (0x0002781e) cell_graphic_popup_pane_cp2_ParamLimits

0x2d18,	// (0x0002781e) cell_graphic_popup_pane_cp2

0x8d41,	// (0x0002d847) cell_graphic_popup_pane_g1_cp2

0xd24c,	// (0x00031d52) cell_graphic_popup_pane_g2_cp2

0x8d49,	// (0x0002d84f) cell_graphic_popup_pane_g3_cp2

0x8d51,	// (0x0002d857) cell_graphic_popup_pane_t2_cp2

0xd25d,	// (0x00031d63) grid_highlight_pane_cp3_cp2

0x0596,	// (0x0002509c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xd4f7,	// (0x00031ffd) main_tmo_pane_ParamLimits

0xd8c3,	// (0x000323c9) popup_tmo_big_image_note_window

0xe4ec,	// (0x00032ff2) cell_ai5_widget_list_pane

0xe4f4,	// (0x00032ffa) cell_ai5_widget_lrg_icon_pane

0xe7af,	// (0x000332b5) tmo_note_info_pane_t1_ParamLimits

0xe7c4,	// (0x000332ca) tmo_note_info_pane_t2_ParamLimits

0xe7dd,	// (0x000332e3) tmo_note_info_pane_t3_ParamLimits

0x8987,	// (0x0002d48d) tmo_note_info_pane_t4_ParamLimits

0x8999,	// (0x0002d49f) tmo_note_info_pane_t5_ParamLimits

0xfea3,	// (0x000349a9) tmo_note_info_pane_t_ParamLimits

0x8ac3,	// (0x0002d5c9) settings_container_pane_ParamLimits

0x8cca,	// (0x0002d7d0) indicator_popup_pane_cp5

0x8cca,	// (0x0002d7d0) indicator_popup_pane_cp6

0x51be,	// (0x00029cc4) list_set_graphic_pane_copy1_ParamLimits

0xce45,	// (0x0003194b) bg_popup_window_pane_cp23

0x8d5f,	// (0x0002d865) popup_tmo_big_image_note_window_g1

0x8d6b,	// (0x0002d871) popup_tmo_big_image_note_window_t1

0x8d7b,	// (0x0002d881) popup_tmo_big_image_note_window_t2

0x8d8b,	// (0x0002d891) popup_tmo_big_image_note_window_t3

0x0002,

0xfebc,	// (0x000349c2) popup_tmo_big_image_note_window_t

0x5c94,	// (0x0002a79a) cell_ai5_widget_lrg_icon_pane_g1

0xe7f2,	// (0x000332f8) cell_ai5_widget_lrg_icon_pane_t1

0xe800,	// (0x00033306) cell_ai5_widget_list_row_pane_ParamLimits

0xe800,	// (0x00033306) cell_ai5_widget_list_row_pane

0xe818,	// (0x0003331e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe818,	// (0x0003331e) cell_ai5_widget_list_row_pane_g1

0xe825,	// (0x0003332b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe825,	// (0x0003332b) cell_ai5_widget_list_row_pane_t1

0xe850,	// (0x00033356) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe850,	// (0x00033356) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec3,	// (0x000349c9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec3,	// (0x000349c9) cell_ai5_widget_list_row_pane_t

0xce45,	// (0x0003194b) main_fep_vtchi_ss_pane

0x8e49,	// (0x0002d94f) popup_fep_char_pre_window

0x8e51,	// (0x0002d957) popup_fep_ituss_window

0xe8a2,	// (0x000333a8) popup_fep_vkbss_window

0x313d,	// (0x00027c43) grid_vkbss_keypad_pane_ParamLimits

0x313d,	// (0x00027c43) grid_vkbss_keypad_pane

0x8ebf,	// (0x0002d9c5) ituss_keypad_pane

0x29c3,	// (0x000274c9) aid_vkbss_key_offset_ParamLimits

0x29c3,	// (0x000274c9) aid_vkbss_key_offset

0xcdeb,	// (0x000318f1) cell_vkbss_key_pane_ParamLimits

0xcdeb,	// (0x000318f1) cell_vkbss_key_pane

0x8ecb,	// (0x0002d9d1) bg_cell_vkbss_key_g1_ParamLimits

0x8ecb,	// (0x0002d9d1) bg_cell_vkbss_key_g1

0xe8b1,	// (0x000333b7) cell_vkbss_key_3p_pane_ParamLimits

0xe8b1,	// (0x000333b7) cell_vkbss_key_3p_pane

0xe8e7,	// (0x000333ed) cell_vkbss_key_g1_ParamLimits

0xe8e7,	// (0x000333ed) cell_vkbss_key_g1

0xe91d,	// (0x00033423) cell_vkbss_key_t1_ParamLimits

0xe91d,	// (0x00033423) cell_vkbss_key_t1

0x2a2d,	// (0x00027533) cell_ituss_key_pane_ParamLimits

0x2a2d,	// (0x00027533) cell_ituss_key_pane

0x8f9f,	// (0x0002daa5) bg_cell_ituss_key_g1_ParamLimits

0x8f9f,	// (0x0002daa5) bg_cell_ituss_key_g1

0x8fab,	// (0x0002dab1) cell_ituss_key_pane_g1_ParamLimits

0x8fab,	// (0x0002dab1) cell_ituss_key_pane_g1

0x2a3e,	// (0x00027544) cell_ituss_key_pane_g2_ParamLimits

0x2a3e,	// (0x00027544) cell_ituss_key_pane_g2

0x0005,

0xfeca,	// (0x000349d0) cell_ituss_key_pane_g_ParamLimits

0xfeca,	// (0x000349d0) cell_ituss_key_pane_g

0x2ac2,	// (0x000275c8) cell_ituss_key_t1_ParamLimits

0x2ac2,	// (0x000275c8) cell_ituss_key_t1

0x2afc,	// (0x00027602) cell_ituss_key_t2_ParamLimits

0x2afc,	// (0x00027602) cell_ituss_key_t2

0x2b2e,	// (0x00027634) cell_ituss_key_t3_ParamLimits

0x2b2e,	// (0x00027634) cell_ituss_key_t3

0x2b5f,	// (0x00027665) cell_ituss_key_t4_ParamLimits

0x2b5f,	// (0x00027665) cell_ituss_key_t4

0x0004,

0xfed7,	// (0x000349dd) cell_ituss_key_t_ParamLimits

0xfed7,	// (0x000349dd) cell_ituss_key_t

0xe979,	// (0x0003347f) cell_vkbss_key_3p_pane_g1

0xe981,	// (0x00033487) cell_vkbss_key_3p_pane_g2

0xe989,	// (0x0003348f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x000349e8) cell_vkbss_key_3p_pane_g

0x2e16,	// (0x0002791c) bg_popup_fep_char_preview_window_cp02

0x8fe9,	// (0x0002daef) popup_fep_char_pre_window_t1

0xe4cb,	// (0x00032fd1) main_ai5_sk_pane

0x8a13,	// (0x0002d519) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8a1f,	// (0x0002d525) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8a34,	// (0x0002d53a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8a40,	// (0x0002d546) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeae,	// (0x000349b4) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8a4c,	// (0x0002d552) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xd4f7,	// (0x00031ffd) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe991,	// (0x00033497) main_ai5_sk_pane_g1

0x3b11,	// (0x00028617) popup_query_code_window_g1

0xe893,	// (0x00033399) popup_fep_vkb_icf_pane

0x8e96,	// (0x0002d99c) popup_fep_vtchi_icf_pane

0x9000,	// (0x0002db06) bg_icf_pane

0x9000,	// (0x0002db06) list_vkb_icf_pane

0x900c,	// (0x0002db12) bg_icf_pane_cp01

0x901f,	// (0x0002db25) vtchi_icf_list_pane

0xe9e6,	// (0x000334ec) list_vkb_icf_pane_t1_ParamLimits

0xe9e6,	// (0x000334ec) list_vkb_icf_pane_t1

0x909b,	// (0x0002dba1) vtchi_icf_list_pane_t1_ParamLimits

0x909b,	// (0x0002dba1) vtchi_icf_list_pane_t1

0x8e51,	// (0x0002d957) popup_fep_ituss_window_ParamLimits

0x8e96,	// (0x0002d99c) popup_fep_vtchi_icf_pane_ParamLimits

0x8ebf,	// (0x0002d9c5) ituss_keypad_pane_ParamLimits

0x29b9,	// (0x000274bf) ituss_sks_pane

0x9000,	// (0x0002db06) bg_icf_pane_ParamLimits

0xe878,	// (0x0003337e) icf_edit_indi_pane_ParamLimits

0xe878,	// (0x0003337e) icf_edit_indi_pane

0x9000,	// (0x0002db06) list_vkb_icf_pane_ParamLimits

0x900c,	// (0x0002db12) bg_icf_pane_cp01_ParamLimits

0x8e3c,	// (0x0002d942) icf_edit_indi_pane_cp01_ParamLimits

0x8e3c,	// (0x0002d942) icf_edit_indi_pane_cp01

0x901f,	// (0x0002db25) vtchi_query_pane

0x8193,	// (0x0002cc99) icf_edit_indi_pane_g1_ParamLimits

0x8193,	// (0x0002cc99) icf_edit_indi_pane_g1

0xe9fd,	// (0x00033503) icf_edit_indi_pane_g2_ParamLimits

0xe9fd,	// (0x00033503) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x00034a13) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x00034a13) icf_edit_indi_pane_g

0xea11,	// (0x00033517) icf_edit_indi_pane_t1

0x90b4,	// (0x0002dbba) bg_input_focus_pane_cp042

0xd430,	// (0x00031f36) vtchi_button_pane

0x90bd,	// (0x0002dbc3) vtchi_query_pane_t1

0x90cb,	// (0x0002dbd1) vtchi_query_pane_t2

0x90d9,	// (0x0002dbdf) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x00034a02) vtchi_query_pane_t

0xce45,	// (0x0003194b) bg_button_pane_cp13

0x90e7,	// (0x0002dbed) vtchi_button_pane_g1

0x2ba2,	// (0x000276a8) ituss_sks_pane_g1

0x2bad,	// (0x000276b3) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x00034a09) ituss_sks_pane_g

0x90ef,	// (0x0002dbf5) ituss_sks_pane_t1

0x90fd,	// (0x0002dc03) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x00034a0e) ituss_sks_pane_t

0x575c,	// (0x0002a262) indicator_nsta_pane_cp_g1

0x5765,	// (0x0002a26b) indicator_nsta_pane_cp_g2

0x576d,	// (0x0002a273) indicator_nsta_pane_cp_g3

0x5775,	// (0x0002a27b) indicator_nsta_pane_cp_g4

0x5765,	// (0x0002a26b) indicator_nsta_pane_cp_g5

0x576d,	// (0x0002a273) indicator_nsta_pane_cp_g6

0x0005,

0xfa8c,	// (0x00034592) indicator_nsta_pane_cp_g

0xe2e3,	// (0x00032de9) cell_graphic2_pane_t2_ParamLimits

0xe2e3,	// (0x00032de9) cell_graphic2_pane_t2

0x0001,

0xfd99,	// (0x0003489f) cell_graphic2_pane_t_ParamLimits

0xfd99,	// (0x0003489f) cell_graphic2_pane_t

0xe31b,	// (0x00032e21) cell_graphic2_control_pane_t1

0xac34,	// (0x0002f73a) signal_pane_g3_ParamLimits

0xac34,	// (0x0002f73a) signal_pane_g3

0xac48,	// (0x0002f74e) signal_pane_g4_ParamLimits

0xac48,	// (0x0002f74e) signal_pane_g4

0xe862,	// (0x00033368) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe862,	// (0x00033368) cell_ai5_widget_list_row_pane_t3

0x8fbf,	// (0x0002dac5) cell_ituss_key_pane_t1_ParamLimits

0x8fbf,	// (0x0002dac5) cell_ituss_key_pane_t1

0x3778,	// (0x0002827e) form_field_data_wide_pane_vc_t2_ParamLimits

0x3778,	// (0x0002827e) form_field_data_wide_pane_vc_t2

0x378c,	// (0x00028292) form_field_data_wide_pane_vc_t3_ParamLimits

0x378c,	// (0x00028292) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x000342e5) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x000342e5) form_field_data_wide_pane_vc_t

0x53f9,	// (0x00029eff) form_field_slider_wide_pane_vc_t3_ParamLimits

0x53f9,	// (0x00029eff) form_field_slider_wide_pane_vc_t3

0x54cf,	// (0x00029fd5) form_field_popup_wide_pane_vc_t2_ParamLimits

0x54cf,	// (0x00029fd5) form_field_popup_wide_pane_vc_t2

0x54e6,	// (0x00029fec) form_field_popup_wide_pane_vc_t3_ParamLimits

0x54e6,	// (0x00029fec) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7b,	// (0x00034581) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x00034581) form_field_popup_wide_pane_vc_t

0xcc4e,	// (0x00031754) aid_fshwr2_btn_pane_ParamLimits

0xcc62,	// (0x00031768) aid_fshwr2_syb_pane_ParamLimits

0xcc76,	// (0x0003177c) aid_fshwr2_txt_pane_ParamLimits

0xd4f7,	// (0x00031ffd) fshwr2_bg_pane_ParamLimits

0xcc86,	// (0x0003178c) fshwr2_func_candi_pane_ParamLimits

0xcca8,	// (0x000317ae) fshwr2_hwr_syb_pane_ParamLimits

0xcccc,	// (0x000317d2) fshwr2_icf_pane_ParamLimits

0xeff0,	// (0x00033af6) list_double_graphic_pane_vc_g4_ParamLimits

0xeff0,	// (0x00033af6) list_double_graphic_pane_vc_g4

0x2a5e,	// (0x00027564) cell_ituss_key_pane_g3_ParamLimits

0x2a5e,	// (0x00027564) cell_ituss_key_pane_g3

0x2b90,	// (0x00027696) cell_ituss_key_t5_ParamLimits

0x2b90,	// (0x00027696) cell_ituss_key_t5

0xe8a2,	// (0x000333a8) popup_fep_vkbss_window_ParamLimits

0xe4d5,	// (0x00032fdb) aid_cell_ai5_quarter

0xea11,	// (0x00033517) icf_edit_indi_pane_t1_ParamLimits

0xd090,	// (0x00031b96) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xd090,	// (0x00031b96) aid_tch_indicator_popup_pane_cp2

0xd0a3,	// (0x00031ba9) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xd0a3,	// (0x00031ba9) aid_tch_query_popup_data_pane_cp2

0x3ab9,	// (0x000285bf) aid_tch_query_popup_pane_ParamLimits

0x3ab9,	// (0x000285bf) aid_tch_query_popup_pane

0x3ab9,	// (0x000285bf) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3ab9,	// (0x000285bf) aid_tch_query_popup_data_pane_cp1

0x313d,	// (0x00027c43) cell_fshwr2_syb_bg_pane_ParamLimits

0xcdc1,	// (0x000318c7) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xcdd5,	// (0x000318db) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe893,	// (0x00033399) popup_fep_vkb_icf_pane_ParamLimits

0xcbe2,	// (0x000316e8) bg_popup_fep_char_preview_window_g10

0xe578,	// (0x0003307e) cell_ai5_widget_pane_g11_ParamLimits

0xe578,	// (0x0003307e) cell_ai5_widget_pane_g11

0x843c,	// (0x0002cf42) cell_ai5_widget_pane_g12_ParamLimits

0x843c,	// (0x0002cf42) cell_ai5_widget_pane_g12

0xe584,	// (0x0003308a) cell_ai5_widget_pane_g13_ParamLimits

0xe584,	// (0x0003308a) cell_ai5_widget_pane_g13

0xe641,	// (0x00033147) cell_ai5_widget_pane_t11_ParamLimits

0xe641,	// (0x00033147) cell_ai5_widget_pane_t11

0xe653,	// (0x00033159) cell_ai5_widget_pane_t12_ParamLimits

0xe653,	// (0x00033159) cell_ai5_widget_pane_t12

0x2a6a,	// (0x00027570) cell_ituss_key_pane_g4_ParamLimits

0x2a6a,	// (0x00027570) cell_ituss_key_pane_g4

0x2a86,	// (0x0002758c) cell_ituss_key_pane_g5_ParamLimits

0x2a86,	// (0x0002758c) cell_ituss_key_pane_g5

0x2aa2,	// (0x000275a8) cell_ituss_key_pane_g6_ParamLimits

0x2aa2,	// (0x000275a8) cell_ituss_key_pane_g6

0x3673,	// (0x00028179) bg_icf_pane_g1

0xe99a,	// (0x000334a0) bg_icf_pane_g2

0xe9a4,	// (0x000334aa) bg_icf_pane_g3

0xe9ac,	// (0x000334b2) bg_icf_pane_g4

0xe9b6,	// (0x000334bc) bg_icf_pane_g5

0xe9c0,	// (0x000334c6) bg_icf_pane_g6

0xe9ca,	// (0x000334d0) bg_icf_pane_g7

0xe9d2,	// (0x000334d8) bg_icf_pane_g8

0xe9dc,	// (0x000334e2) bg_icf_pane_g9

0x0008,

0xfee9,	// (0x000349ef) bg_icf_pane_g

0x8eac,	// (0x0002d9b2) popup_hyb_candi_window_ParamLimits

0x8eac,	// (0x0002d9b2) popup_hyb_candi_window

0x36e7,	// (0x000281ed) bg_popup_sub_pane_cp01_ParamLimits

0x36e7,	// (0x000281ed) bg_popup_sub_pane_cp01

0x9138,	// (0x0002dc3e) entry_hyb_candi_pane_ParamLimits

0x9138,	// (0x0002dc3e) entry_hyb_candi_pane

0x9147,	// (0x0002dc4d) grid_hyb_candi_pane_ParamLimits

0x9147,	// (0x0002dc4d) grid_hyb_candi_pane

0x915c,	// (0x0002dc62) grid_hyb_phrase_pane_ParamLimits

0x915c,	// (0x0002dc62) grid_hyb_phrase_pane

0x916b,	// (0x0002dc71) cell_hyb_candi_pane_ParamLimits

0x916b,	// (0x0002dc71) cell_hyb_candi_pane

0xd439,	// (0x00031f3f) cell_hyb_candi_scroll_pane

0x0890,	// (0x00025396) cell_hyb_candi_pane_g1

0x9187,	// (0x0002dc8d) cell_hyb_candi_pane_t1

0x9195,	// (0x0002dc9b) cell_hyb_phrase_pane

0x0890,	// (0x00025396) cell_hyb_phrase_pane_g1

0x919e,	// (0x0002dca4) cell_hyb_phrase_pane_t1

0x91ac,	// (0x0002dcb2) entry_hyb_candi_pane_t1

0x2e16,	// (0x0002791c) input_focus_pane_cp06

0x91ba,	// (0x0002dcc0) cell_hyb_candi_scroll_pane_g1

0x91c2,	// (0x0002dcc8) cell_hyb_candi_scroll_pane_g1_aid

0x91ca,	// (0x0002dcd0) cell_hyb_candi_scroll_pane_g2

0x91d2,	// (0x0002dcd8) cell_hyb_candi_scroll_pane_g2_aid

0x91da,	// (0x0002dce0) cell_hyb_candi_scroll_pane_g3

0x91e2,	// (0x0002dce8) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
