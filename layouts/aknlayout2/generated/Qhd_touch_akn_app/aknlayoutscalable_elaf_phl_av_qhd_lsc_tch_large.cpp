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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003f261 };

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
0xbb2f,	// (0x0004ad90) Screen

0xbb3b,	// (0x0004ad9c) application_window_ParamLimits

0xbb3b,	// (0x0004ad9c) application_window

0x2c01,	// (0x00041e62) screen_g1

0xbb73,	// (0x0004add4) area_bottom_pane_ParamLimits

0xbb73,	// (0x0004add4) area_bottom_pane

0x0fa0,	// (0x00040201) area_top_pane_ParamLimits

0x0fa0,	// (0x00040201) area_top_pane

0x1034,	// (0x00040295) main_pane_ParamLimits

0x1034,	// (0x00040295) main_pane

0x2c0b,	// (0x00041e6c) misc_graphics

0xd36f,	// (0x0004c5d0) battery_pane_ParamLimits

0xd36f,	// (0x0004c5d0) battery_pane

0x5862,	// (0x00044ac3) bg_status_flat_pane_g8

0x586a,	// (0x00044acb) bg_status_flat_pane_g9

0x4c05,	// (0x00043e66) context_pane_ParamLimits

0x4c05,	// (0x00043e66) context_pane

0xd4da,	// (0x0004c73b) navi_pane_ParamLimits

0xd4da,	// (0x0004c73b) navi_pane

0xd551,	// (0x0004c7b2) signal_pane_ParamLimits

0xd551,	// (0x0004c7b2) signal_pane

0x0008,

0xf879,	// (0x0004eada) bg_status_flat_pane_g

0xd5e1,	// (0x0004c842) status_pane_g1_ParamLimits

0xd5e1,	// (0x0004c842) status_pane_g1

0xd5f7,	// (0x0004c858) status_pane_g2_ParamLimits

0xd5f7,	// (0x0004c858) status_pane_g2

0x4e25,	// (0x00044086) status_pane_g3_ParamLimits

0x4e25,	// (0x00044086) status_pane_g3

0x0004,

0xf7b3,	// (0x0004ea14) status_pane_g_ParamLimits

0xf7b3,	// (0x0004ea14) status_pane_g

0xd603,	// (0x0004c864) title_pane_ParamLimits

0xd603,	// (0x0004c864) title_pane

0xd664,	// (0x0004c8c5) uni_indicator_pane_ParamLimits

0xd664,	// (0x0004c8c5) uni_indicator_pane

0x44b2,	// (0x00043713) bg_list_pane_ParamLimits

0x44b2,	// (0x00043713) bg_list_pane

0xcc3d,	// (0x0004be9e) find_pane

0xcc45,	// (0x0004bea6) listscroll_app_pane_ParamLimits

0xcc45,	// (0x0004bea6) listscroll_app_pane

0x44de,	// (0x0004373f) listscroll_form_pane

0xcc51,	// (0x0004beb2) listscroll_gen_pane_ParamLimits

0xcc51,	// (0x0004beb2) listscroll_gen_pane

0x44de,	// (0x0004373f) listscroll_set_pane

0x63ff,	// (0x00045660) main_idle_act_pane

0x419a,	// (0x000433fb) main_idle_trad_pane

0x419a,	// (0x000433fb) main_list_empty_pane

0x44f8,	// (0x00043759) main_midp_pane

0x4504,	// (0x00043765) main_pane_g1_ParamLimits

0x4504,	// (0x00043765) main_pane_g1

0xcc73,	// (0x0004bed4) popup_ai_message_window_ParamLimits

0xcc73,	// (0x0004bed4) popup_ai_message_window

0xcd04,	// (0x0004bf65) popup_fep_china_uni_window_ParamLimits

0xcd04,	// (0x0004bf65) popup_fep_china_uni_window

0x4610,	// (0x00043871) popup_fep_japan_candidate_window_ParamLimits

0x4610,	// (0x00043871) popup_fep_japan_candidate_window

0x4630,	// (0x00043891) popup_fep_japan_predictive_window_ParamLimits

0x4630,	// (0x00043891) popup_fep_japan_predictive_window

0xcd60,	// (0x0004bfc1) popup_find_window

0xcd7d,	// (0x0004bfde) popup_grid_graphic_window_ParamLimits

0xcd7d,	// (0x0004bfde) popup_grid_graphic_window

0x4695,	// (0x000438f6) popup_large_graphic_colour_window

0xce15,	// (0x0004c076) popup_menu_window_ParamLimits

0xce15,	// (0x0004c076) popup_menu_window

0xcfcf,	// (0x0004c230) popup_note_image_window

0xcf95,	// (0x0004c1f6) popup_note_wait_window_ParamLimits

0xcf95,	// (0x0004c1f6) popup_note_wait_window

0xcfe7,	// (0x0004c248) popup_note_window_ParamLimits

0xcfe7,	// (0x0004c248) popup_note_window

0xd08d,	// (0x0004c2ee) popup_query_code_window_ParamLimits

0xd08d,	// (0x0004c2ee) popup_query_code_window

0x48dd,	// (0x00043b3e) popup_query_data_code_window_ParamLimits

0x48dd,	// (0x00043b3e) popup_query_data_code_window

0xd0c7,	// (0x0004c328) popup_query_data_window_ParamLimits

0xd0c7,	// (0x0004c328) popup_query_data_window

0xd13d,	// (0x0004c39e) popup_query_sat_info_window_ParamLimits

0xd13d,	// (0x0004c39e) popup_query_sat_info_window

0xd1d4,	// (0x0004c435) popup_snote_single_graphic_window_ParamLimits

0xd1d4,	// (0x0004c435) popup_snote_single_graphic_window

0xd1d4,	// (0x0004c435) popup_snote_single_text_window_ParamLimits

0xd1d4,	// (0x0004c435) popup_snote_single_text_window

0x4964,	// (0x00043bc5) popup_sub_window_general

0x4ab6,	// (0x00043d17) popup_window_general_ParamLimits

0x4ab6,	// (0x00043d17) popup_window_general

0x4acb,	// (0x00043d2c) power_save_pane

0xbd49,	// (0x0004afaa) control_pane_g1_ParamLimits

0xbd49,	// (0x0004afaa) control_pane_g1

0xbd72,	// (0x0004afd3) control_pane_g2_ParamLimits

0xbd72,	// (0x0004afd3) control_pane_g2

0x4463,	// (0x000436c4) control_pane_g3_ParamLimits

0x4463,	// (0x000436c4) control_pane_g3

0x0007,

0xf79b,	// (0x0004e9fc) control_pane_g_ParamLimits

0xf79b,	// (0x0004e9fc) control_pane_g

0xbdad,	// (0x0004b00e) control_pane_t1_ParamLimits

0xbdad,	// (0x0004b00e) control_pane_t1

0xbe0b,	// (0x0004b06c) control_pane_t2_ParamLimits

0xbe0b,	// (0x0004b06c) control_pane_t2

0x0002,

0xf7ac,	// (0x0004ea0d) control_pane_t_ParamLimits

0xf7ac,	// (0x0004ea0d) control_pane_t

0x4384,	// (0x000435e5) navi_navi_volume_pane_cp1

0x438d,	// (0x000435ee) status_small_icon_pane

0x4395,	// (0x000435f6) status_small_pane_g1_ParamLimits

0x4395,	// (0x000435f6) status_small_pane_g1

0x43c9,	// (0x0004362a) status_small_pane_g2_ParamLimits

0x43c9,	// (0x0004362a) status_small_pane_g2

0x43d5,	// (0x00043636) status_small_pane_g3_ParamLimits

0x43d5,	// (0x00043636) status_small_pane_g3

0x43e1,	// (0x00043642) status_small_pane_g4_ParamLimits

0x43e1,	// (0x00043642) status_small_pane_g4

0x43ed,	// (0x0004364e) status_small_pane_g5_ParamLimits

0x43ed,	// (0x0004364e) status_small_pane_g5

0x43fc,	// (0x0004365d) status_small_pane_g6_ParamLimits

0x43fc,	// (0x0004365d) status_small_pane_g6

0x0007,

0xf78a,	// (0x0004e9eb) status_small_pane_g_ParamLimits

0xf78a,	// (0x0004e9eb) status_small_pane_g

0x442c,	// (0x0004368d) status_small_pane_t1

0x444f,	// (0x000436b0) status_small_wait_pane_ParamLimits

0x444f,	// (0x000436b0) status_small_wait_pane

0xca81,	// (0x0004bce2) aid_levels_signal_ParamLimits

0xca81,	// (0x0004bce2) aid_levels_signal

0xca99,	// (0x0004bcfa) signal_pane_g1_ParamLimits

0xca99,	// (0x0004bcfa) signal_pane_g1

0xcab4,	// (0x0004bd15) signal_pane_g2_ParamLimits

0xcab4,	// (0x0004bd15) signal_pane_g2

0x0001,

0xf71f,	// (0x0004e980) signal_pane_g_ParamLimits

0xf71f,	// (0x0004e980) signal_pane_g

0x3c79,	// (0x00042eda) context_pane_g1

0xbcec,	// (0x0004af4d) title_pane_g1

0xc5a0,	// (0x0004b801) title_pane_t1

0x2cb3,	// (0x00041f14) title_pane_t2

0x2cd9,	// (0x00041f3a) title_pane_t3

0x0002,

0xf573,	// (0x0004e7d4) title_pane_t

0xd68c,	// (0x0004c8ed) aid_levels_battery_ParamLimits

0xd68c,	// (0x0004c8ed) aid_levels_battery

0xd6a8,	// (0x0004c909) battery_pane_g1_ParamLimits

0xd6a8,	// (0x0004c909) battery_pane_g1

0xd6c5,	// (0x0004c926) battery_pane_g2_ParamLimits

0xd6c5,	// (0x0004c926) battery_pane_g2

0x0001,

0xf7be,	// (0x0004ea1f) battery_pane_g_ParamLimits

0xf7be,	// (0x0004ea1f) battery_pane_g

0xd8ca,	// (0x0004cb2b) uni_indicator_pane_g1

0xd8df,	// (0x0004cb40) uni_indicator_pane_g2

0xd8f4,	// (0x0004cb55) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0004eb82) uni_indicator_pane_g

0x4018,	// (0x00043279) navi_icon_pane_ParamLimits

0x4018,	// (0x00043279) navi_icon_pane

0x3f55,	// (0x000431b6) navi_midp_pane

0x4034,	// (0x00043295) navi_navi_pane

0x403e,	// (0x0004329f) navi_text_pane_ParamLimits

0x403e,	// (0x0004329f) navi_text_pane

0x2c01,	// (0x00041e62) status_small_wait_pane_g1

0x3108,	// (0x00042369) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0004eb7d) status_small_wait_pane_g

0x5ec3,	// (0x00045124) navi_navi_icon_text_pane

0x5ecb,	// (0x0004512c) navi_navi_pane_g1_ParamLimits

0x5ecb,	// (0x0004512c) navi_navi_pane_g1

0x5edd,	// (0x0004513e) navi_navi_pane_g2_ParamLimits

0x5edd,	// (0x0004513e) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0004eb4b) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0004eb4b) navi_navi_pane_g

0x5eef,	// (0x00045150) navi_navi_tabs_pane

0x5ef8,	// (0x00045159) navi_navi_text_pane

0x5ec3,	// (0x00045124) navi_navi_volume_pane

0xd88b,	// (0x0004caec) navi_text_pane_t1

0xd87f,	// (0x0004cae0) navi_icon_pane_g1

0x5de0,	// (0x00045041) navi_navi_text_pane_t1

0xc056,	// (0x0004b2b7) navi_navi_volume_pane_g1

0xc05e,	// (0x0004b2bf) volume_small_pane

0xd7db,	// (0x0004ca3c) navi_navi_icon_text_pane_g1

0xd7e3,	// (0x0004ca44) navi_navi_icon_text_pane_t1

0x4034,	// (0x00043295) navi_tabs_2_long_pane

0x4034,	// (0x00043295) navi_tabs_2_pane

0x4034,	// (0x00043295) navi_tabs_3_long_pane

0x4034,	// (0x00043295) navi_tabs_3_pane

0x4034,	// (0x00043295) navi_tabs_4_pane

0xc036,	// (0x0004b297) tabs_2_active_pane_ParamLimits

0xc036,	// (0x0004b297) tabs_2_active_pane

0xc046,	// (0x0004b2a7) tabs_2_passive_pane_ParamLimits

0xc046,	// (0x0004b2a7) tabs_2_passive_pane

0xc004,	// (0x0004b265) tabs_3_active_pane_ParamLimits

0xc004,	// (0x0004b265) tabs_3_active_pane

0xc014,	// (0x0004b275) tabs_3_passive_pane_ParamLimits

0xc014,	// (0x0004b275) tabs_3_passive_pane

0xc025,	// (0x0004b286) tabs_3_passive_pane_cp_ParamLimits

0xc025,	// (0x0004b286) tabs_3_passive_pane_cp

0xbfc0,	// (0x0004b221) tabs_4_active_pane_ParamLimits

0xbfc0,	// (0x0004b221) tabs_4_active_pane

0xbfd1,	// (0x0004b232) tabs_4_passive_pane_ParamLimits

0xbfd1,	// (0x0004b232) tabs_4_passive_pane

0xbfe2,	// (0x0004b243) tabs_4_passive_pane_cp_ParamLimits

0xbfe2,	// (0x0004b243) tabs_4_passive_pane_cp

0xbff3,	// (0x0004b254) tabs_4_passive_pane_cp2_ParamLimits

0xbff3,	// (0x0004b254) tabs_4_passive_pane_cp2

0xbfa0,	// (0x0004b201) tabs_2_long_active_pane_ParamLimits

0xbfa0,	// (0x0004b201) tabs_2_long_active_pane

0xbfb0,	// (0x0004b211) tabs_2_long_passive_pane_ParamLimits

0xbfb0,	// (0x0004b211) tabs_2_long_passive_pane

0xbf6d,	// (0x0004b1ce) tabs_3_long_active_pane_ParamLimits

0xbf6d,	// (0x0004b1ce) tabs_3_long_active_pane

0xbf7e,	// (0x0004b1df) tabs_3_long_passive_pane_ParamLimits

0xbf7e,	// (0x0004b1df) tabs_3_long_passive_pane

0xbf8f,	// (0x0004b1f0) tabs_3_long_passive_pane_cp_ParamLimits

0xbf8f,	// (0x0004b1f0) tabs_3_long_passive_pane_cp

0x1abd,	// (0x00040d1e) volume_small_pane_g1

0xbf1c,	// (0x0004b17d) volume_small_pane_g2

0xbf25,	// (0x0004b186) volume_small_pane_g3

0xbf2e,	// (0x0004b18f) volume_small_pane_g4

0xbf37,	// (0x0004b198) volume_small_pane_g5

0xbf40,	// (0x0004b1a1) volume_small_pane_g6

0xbf49,	// (0x0004b1aa) volume_small_pane_g7

0xbf52,	// (0x0004b1b3) volume_small_pane_g8

0xbf5b,	// (0x0004b1bc) volume_small_pane_g9

0xbf64,	// (0x0004b1c5) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0004eb17) volume_small_pane_g

0x2f66,	// (0x000421c7) bg_active_tab_pane_cp2_ParamLimits

0x2f66,	// (0x000421c7) bg_active_tab_pane_cp2

0xc62c,	// (0x0004b88d) tabs_3_active_pane_g1

0xc634,	// (0x0004b895) tabs_3_active_pane_t1

0x2f66,	// (0x000421c7) bg_passive_tab_pane_cp2_ParamLimits

0x2f66,	// (0x000421c7) bg_passive_tab_pane_cp2

0xc62c,	// (0x0004b88d) tabs_3_passive_pane_g1

0xc634,	// (0x0004b895) tabs_3_passive_pane_t1

0x2f66,	// (0x000421c7) bg_active_tab_pane_cp3_ParamLimits

0x2f66,	// (0x000421c7) bg_active_tab_pane_cp3

0xc646,	// (0x0004b8a7) tabs_4_active_pane_g1

0xc64e,	// (0x0004b8af) tabs_4_active_pane_t1

0x2f66,	// (0x000421c7) bg_passive_tab_pane_cp3_ParamLimits

0x2f66,	// (0x000421c7) bg_passive_tab_pane_cp3

0xc646,	// (0x0004b8a7) tabs_4_1_passive_pane_g1

0xc64e,	// (0x0004b8af) tabs_4_1_passive_pane_t1

0x44f8,	// (0x00043759) list_highlight_pane_cp2

0xd97d,	// (0x0004cbde) list_set_pane_ParamLimits

0xd97d,	// (0x0004cbde) list_set_pane

0xda17,	// (0x0004cc78) main_pane_set_t1_ParamLimits

0xda17,	// (0x0004cc78) main_pane_set_t1

0xda37,	// (0x0004cc98) main_pane_set_t2_ParamLimits

0xda37,	// (0x0004cc98) main_pane_set_t2

0xda4b,	// (0x0004ccac) main_pane_set_t3_ParamLimits

0xda4b,	// (0x0004ccac) main_pane_set_t3

0xda5d,	// (0x0004ccbe) main_pane_set_t4_ParamLimits

0xda5d,	// (0x0004ccbe) main_pane_set_t4

0x0003,

0xf986,	// (0x0004ebe7) main_pane_set_t_ParamLimits

0xf986,	// (0x0004ebe7) main_pane_set_t

0xda6f,	// (0x0004ccd0) setting_code_pane

0xda79,	// (0x0004ccda) setting_slider_graphic_pane

0xda79,	// (0x0004ccda) setting_slider_pane

0xda79,	// (0x0004ccda) setting_text_pane

0xda79,	// (0x0004ccda) setting_volume_pane

0x1279,	// (0x000404da) volume_set_pane

0x2ceb,	// (0x00041f4c) bg_set_opt_pane_cp

0x1281,	// (0x000404e2) setting_slider_pane_t1

0x129a,	// (0x000404fb) setting_slider_pane_t2

0x12b4,	// (0x00040515) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0004e7db) setting_slider_pane_t

0x12cc,	// (0x0004052d) slider_set_pane

0x2c0b,	// (0x00041e6c) bg_set_opt_pane_cp2

0x2d2d,	// (0x00041f8e) setting_slider_graphic_pane_g1

0x12e2,	// (0x00040543) setting_slider_graphic_pane_t1

0x12f2,	// (0x00040553) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0004e7e2) setting_slider_graphic_pane_t

0x1302,	// (0x00040563) slider_set_pane_cp

0x2c0b,	// (0x00041e6c) input_focus_pane_cp1

0x63e6,	// (0x00045647) list_set_text_pane

0x2c01,	// (0x00041e62) setting_text_pane_g1

0x2c0b,	// (0x00041e6c) input_focus_pane_cp2

0x2c01,	// (0x00041e62) setting_code_pane_g1

0x2d36,	// (0x00041f97) setting_code_pane_t1

0x00c9,	// (0x0003f32a) set_text_pane_t1_ParamLimits

0x00c9,	// (0x0003f32a) set_text_pane_t1

0x35be,	// (0x0004281f) set_opt_bg_pane_g1

0x35c6,	// (0x00042827) set_opt_bg_pane_g2

0x63c0,	// (0x00045621) set_opt_bg_pane_g3

0x35d6,	// (0x00042837) set_opt_bg_pane_g4

0x35de,	// (0x0004283f) set_opt_bg_pane_g5

0x35e6,	// (0x00042847) set_opt_bg_pane_g6

0x63ca,	// (0x0004562b) set_opt_bg_pane_g7

0x63d2,	// (0x00045633) set_opt_bg_pane_g8

0x63dc,	// (0x0004563d) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0004ebd4) set_opt_bg_pane_g

0x63b3,	// (0x00045614) slider_set_pane_g1

0x1c85,	// (0x00040ee6) slider_set_pane_g2

0x0006,

0xf964,	// (0x0004ebc5) slider_set_pane_g

0x1c21,	// (0x00040e82) volume_set_pane_g1

0x1c29,	// (0x00040e8a) volume_set_pane_g2

0x1c31,	// (0x00040e92) volume_set_pane_g3

0x1c39,	// (0x00040e9a) volume_set_pane_g4

0x1c41,	// (0x00040ea2) volume_set_pane_g5

0x1c49,	// (0x00040eaa) volume_set_pane_g6

0x1c51,	// (0x00040eb2) volume_set_pane_g7

0x1c59,	// (0x00040eba) volume_set_pane_g8

0x1c61,	// (0x00040ec2) volume_set_pane_g9

0x1c69,	// (0x00040eca) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0004eb9d) volume_set_pane_g

0xc660,	// (0x0004b8c1) indicator_pane_ParamLimits

0xc660,	// (0x0004b8c1) indicator_pane

0xc688,	// (0x0004b8e9) main_idle_pane_g2_ParamLimits

0xc688,	// (0x0004b8e9) main_idle_pane_g2

0xc6c0,	// (0x0004b921) main_pane_idle_g1_ParamLimits

0xc6c0,	// (0x0004b921) main_pane_idle_g1

0x2d85,	// (0x00041fe6) popup_clock_digital_analogue_window_ParamLimits

0x2d85,	// (0x00041fe6) popup_clock_digital_analogue_window

0xc6e7,	// (0x0004b948) soft_indicator_pane_ParamLimits

0xc6e7,	// (0x0004b948) soft_indicator_pane

0xc701,	// (0x0004b962) wallpaper_pane_ParamLimits

0xc701,	// (0x0004b962) wallpaper_pane

0x2c01,	// (0x00041e62) wallpaper_pane_g1

0xc713,	// (0x0004b974) indicator_pane_g1_ParamLimits

0xc713,	// (0x0004b974) indicator_pane_g1

0x679a,	// (0x000459fb) navi_navi_icon_text_pane_srt_g1

0x2dd7,	// (0x00042038) soft_indicator_pane_t1

0x2df1,	// (0x00042052) aid_ps_area_pane

0xc729,	// (0x0004b98a) aid_ps_clock_pane

0x2e10,	// (0x00042071) aid_ps_indicator_pane

0x2e1c,	// (0x0004207d) indicator_ps_pane_ParamLimits

0x2e1c,	// (0x0004207d) indicator_ps_pane

0x2e2b,	// (0x0004208c) power_save_pane_g1_ParamLimits

0x2e2b,	// (0x0004208c) power_save_pane_g1

0x2e37,	// (0x00042098) power_save_pane_g2_ParamLimits

0x2e37,	// (0x00042098) power_save_pane_g2

0x0e94,	// (0x000400f5) aid_navinavi_width_pane

0x2df1,	// (0x00042052) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0004e7e7) power_save_pane_g_ParamLimits

0xf586,	// (0x0004e7e7) power_save_pane_g

0x2e45,	// (0x000420a6) power_save_pane_t1_ParamLimits

0x2e45,	// (0x000420a6) power_save_pane_t1

0xc729,	// (0x0004b98a) aid_ps_clock_pane_ParamLimits

0x2e10,	// (0x00042071) aid_ps_indicator_pane_ParamLimits

0x2e57,	// (0x000420b8) power_save_pane_t4_ParamLimits

0x2e57,	// (0x000420b8) power_save_pane_t4

0x0001,

0xf58b,	// (0x0004e7ec) power_save_pane_t_ParamLimits

0xf58b,	// (0x0004e7ec) power_save_pane_t

0x2e81,	// (0x000420e2) power_save_t3_ParamLimits

0x2e81,	// (0x000420e2) power_save_t3

0x2e6c,	// (0x000420cd) power_save_t2_ParamLimits

0x2e6c,	// (0x000420cd) power_save_t2

0x2e96,	// (0x000420f7) indicator_ps_pane_g1

0xc737,	// (0x0004b998) ai_gene_pane_ParamLimits

0xc737,	// (0x0004b998) ai_gene_pane

0xc74e,	// (0x0004b9af) ai_links_pane_ParamLimits

0xc74e,	// (0x0004b9af) ai_links_pane

0xc766,	// (0x0004b9c7) indicator_pane_cp1_ParamLimits

0xc766,	// (0x0004b9c7) indicator_pane_cp1

0xc775,	// (0x0004b9d6) main_pane_idle_g1_cp_ParamLimits

0xc775,	// (0x0004b9d6) main_pane_idle_g1_cp

0x2ecf,	// (0x00042130) popup_ai_links_title_window

0xc78d,	// (0x0004b9ee) soft_indicator_pane_cp1_ParamLimits

0xc78d,	// (0x0004b9ee) soft_indicator_pane_cp1

0x618c,	// (0x000453ed) ai_links_pane_g1

0x6195,	// (0x000453f6) grid_ai_links_pane

0xd8c1,	// (0x0004cb22) ai_gene_pane_1

0x617a,	// (0x000453db) ai_gene_pane_2

0x6183,	// (0x000453e4) list_highlight_pane_cp4

0xd89d,	// (0x0004cafe) cell_ai_link_pane_ParamLimits

0xd89d,	// (0x0004cafe) cell_ai_link_pane

0x614b,	// (0x000453ac) cell_ai_link_pane_g1

0x3108,	// (0x00042369) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0004eb78) cell_ai_link_pane_g

0x2c0b,	// (0x00041e6c) grid_highlight_cp2

0x2c0b,	// (0x00041e6c) bg_popup_sub_pane_cp1

0x2ef2,	// (0x00042153) popup_ai_links_title_window_t1

0x6099,	// (0x000452fa) ai_gene_pane_1_g1_ParamLimits

0x6099,	// (0x000452fa) ai_gene_pane_1_g1

0x60a5,	// (0x00045306) ai_gene_pane_1_g2_ParamLimits

0x60a5,	// (0x00045306) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0004eb6e) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0004eb6e) ai_gene_pane_1_g

0x60b2,	// (0x00045313) ai_gene_pane_1_t1_ParamLimits

0x60b2,	// (0x00045313) ai_gene_pane_1_t1

0x60e6,	// (0x00045347) grid_ai_soft_ind_pane

0x6084,	// (0x000452e5) ai_gene_pane_2_t1_ParamLimits

0x6084,	// (0x000452e5) ai_gene_pane_2_t1

0xc7a1,	// (0x0004ba02) main_pane_empty_t1_ParamLimits

0xc7a1,	// (0x0004ba02) main_pane_empty_t1

0xc7b9,	// (0x0004ba1a) main_pane_empty_t2_ParamLimits

0xc7b9,	// (0x0004ba1a) main_pane_empty_t2

0xc7ce,	// (0x0004ba2f) main_pane_empty_t3_ParamLimits

0xc7ce,	// (0x0004ba2f) main_pane_empty_t3

0xc7e0,	// (0x0004ba41) main_pane_empty_t4_ParamLimits

0xc7e0,	// (0x0004ba41) main_pane_empty_t4

0xc7f2,	// (0x0004ba53) main_pane_empty_t5_ParamLimits

0xc7f2,	// (0x0004ba53) main_pane_empty_t5

0x0004,

0xf590,	// (0x0004e7f1) main_pane_empty_t_ParamLimits

0xf590,	// (0x0004e7f1) main_pane_empty_t

0x360f,	// (0x00042870) bg_popup_window_pane_ParamLimits

0x360f,	// (0x00042870) bg_popup_window_pane

0x5dee,	// (0x0004504f) find_popup_pane_cp2_ParamLimits

0x5dee,	// (0x0004504f) find_popup_pane_cp2

0x5dfa,	// (0x0004505b) heading_pane_ParamLimits

0x5dfa,	// (0x0004505b) heading_pane

0x2c0b,	// (0x00041e6c) bg_popup_sub_pane

0xd800,	// (0x0004ca61) bg_popup_window_pane_g1_ParamLimits

0xd800,	// (0x0004ca61) bg_popup_window_pane_g1

0xd80f,	// (0x0004ca70) bg_popup_window_pane_g2_ParamLimits

0xd80f,	// (0x0004ca70) bg_popup_window_pane_g2

0xd81b,	// (0x0004ca7c) bg_popup_window_pane_g3_ParamLimits

0xd81b,	// (0x0004ca7c) bg_popup_window_pane_g3

0xd827,	// (0x0004ca88) bg_popup_window_pane_g4_ParamLimits

0xd827,	// (0x0004ca88) bg_popup_window_pane_g4

0xd836,	// (0x0004ca97) bg_popup_window_pane_g5_ParamLimits

0xd836,	// (0x0004ca97) bg_popup_window_pane_g5

0xd846,	// (0x0004caa7) bg_popup_window_pane_g6_ParamLimits

0xd846,	// (0x0004caa7) bg_popup_window_pane_g6

0xd852,	// (0x0004cab3) bg_popup_window_pane_g7_ParamLimits

0xd852,	// (0x0004cab3) bg_popup_window_pane_g7

0xd861,	// (0x0004cac2) bg_popup_window_pane_g8_ParamLimits

0xd861,	// (0x0004cac2) bg_popup_window_pane_g8

0xd870,	// (0x0004cad1) bg_popup_window_pane_g9_ParamLimits

0xd870,	// (0x0004cad1) bg_popup_window_pane_g9

0x5dd4,	// (0x00045035) bg_popup_window_pane_g10_ParamLimits

0x5dd4,	// (0x00045035) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0004eb36) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0004eb36) bg_popup_window_pane_g

0x5cfd,	// (0x00044f5e) bg_popup_heading_pane_ParamLimits

0x5cfd,	// (0x00044f5e) bg_popup_heading_pane

0x1db1,	// (0x00041012) tabs_4_passive_pane_cp_srt_ParamLimits

0x1db1,	// (0x00041012) tabs_4_passive_pane_cp_srt

0x1dc3,	// (0x00041024) tabs_4_passive_pane_srt_ParamLimits

0x5d11,	// (0x00044f72) heading_pane_g2

0x1dc3,	// (0x00041024) tabs_4_passive_pane_srt

0x50a0,	// (0x00044301) bg_passive_tab_pane_cp3_srt_ParamLimits

0x50a0,	// (0x00044301) bg_passive_tab_pane_cp3_srt

0x5d19,	// (0x00044f7a) heading_pane_t1_ParamLimits

0x5d19,	// (0x00044f7a) heading_pane_t1

0x5d30,	// (0x00044f91) heading_pane_t2_ParamLimits

0x5d30,	// (0x00044f91) heading_pane_t2

0x0001,

0xf8d0,	// (0x0004eb31) heading_pane_t_ParamLimits

0xf8d0,	// (0x0004eb31) heading_pane_t

0x582a,	// (0x00044a8b) bg_popup_heading_pane_g1

0x58d9,	// (0x00044b3a) bg_popup_heading_pane_g2

0x58e3,	// (0x00044b44) bg_popup_heading_pane_g3

0x58ed,	// (0x00044b4e) bg_popup_heading_pane_g4

0x58f7,	// (0x00044b58) bg_popup_heading_pane_g5

0x5901,	// (0x00044b62) bg_popup_heading_pane_g6

0x5909,	// (0x00044b6a) bg_popup_heading_pane_g7

0x5911,	// (0x00044b72) bg_popup_heading_pane_g8

0x591b,	// (0x00044b7c) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0004eaed) bg_popup_heading_pane_g

0x4fb0,	// (0x00044211) bg_popup_sub_pane_g1

0x4fb8,	// (0x00044219) bg_popup_sub_pane_g2

0x4fc0,	// (0x00044221) bg_popup_sub_pane_g3

0x4fc8,	// (0x00044229) bg_popup_sub_pane_g4

0x4fd0,	// (0x00044231) bg_popup_sub_pane_g5

0x4fd8,	// (0x00044239) bg_popup_sub_pane_g6

0x4fe0,	// (0x00044241) bg_popup_sub_pane_g7

0x4fe8,	// (0x00044249) bg_popup_sub_pane_g8

0x4ff0,	// (0x00044251) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0004eac7) bg_popup_sub_pane_g

0x2f66,	// (0x000421c7) bg_popup_window_pane_cp5_ParamLimits

0x2f66,	// (0x000421c7) bg_popup_window_pane_cp5

0x2f82,	// (0x000421e3) popup_note_window_g1_ParamLimits

0x2f82,	// (0x000421e3) popup_note_window_g1

0x2f8e,	// (0x000421ef) popup_note_window_t1_ParamLimits

0x2f8e,	// (0x000421ef) popup_note_window_t1

0x2fa4,	// (0x00042205) popup_note_window_t2_ParamLimits

0x2fa4,	// (0x00042205) popup_note_window_t2

0x2fba,	// (0x0004221b) popup_note_window_t3_ParamLimits

0x2fba,	// (0x0004221b) popup_note_window_t3

0x2fd0,	// (0x00042231) popup_note_window_t4_ParamLimits

0x2fd0,	// (0x00042231) popup_note_window_t4

0x2ff8,	// (0x00042259) popup_note_window_t5_ParamLimits

0x2ff8,	// (0x00042259) popup_note_window_t5

0x0004,

0xf59b,	// (0x0004e7fc) popup_note_window_t_ParamLimits

0xf59b,	// (0x0004e7fc) popup_note_window_t

0x301c,	// (0x0004227d) bg_popup_window_pane_cp6_ParamLimits

0x301c,	// (0x0004227d) bg_popup_window_pane_cp6

0x57a6,	// (0x00044a07) popup_note_image_window_g1_ParamLimits

0x57a6,	// (0x00044a07) popup_note_image_window_g1

0x57b2,	// (0x00044a13) popup_note_image_window_g2_ParamLimits

0x57b2,	// (0x00044a13) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0004eabb) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0004eabb) popup_note_image_window_g

0x57cb,	// (0x00044a2c) popup_note_image_window_t1_ParamLimits

0x57cb,	// (0x00044a2c) popup_note_image_window_t1

0x57e4,	// (0x00044a45) popup_note_image_window_t2_ParamLimits

0x57e4,	// (0x00044a45) popup_note_image_window_t2

0x57fd,	// (0x00044a5e) popup_note_image_window_t3_ParamLimits

0x57fd,	// (0x00044a5e) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0004eac0) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0004eac0) popup_note_image_window_t

0x5667,	// (0x000448c8) bg_popup_window_pane_cp7_ParamLimits

0x5667,	// (0x000448c8) bg_popup_window_pane_cp7

0x5697,	// (0x000448f8) popup_note_wait_window_g1_ParamLimits

0x5697,	// (0x000448f8) popup_note_wait_window_g1

0x56a3,	// (0x00044904) popup_note_wait_window_g2_ParamLimits

0x56a3,	// (0x00044904) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0004eaa9) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0004eaa9) popup_note_wait_window_g

0x56bb,	// (0x0004491c) popup_note_wait_window_t1_ParamLimits

0x56bb,	// (0x0004491c) popup_note_wait_window_t1

0x56e2,	// (0x00044943) popup_note_wait_window_t2_ParamLimits

0x56e2,	// (0x00044943) popup_note_wait_window_t2

0x56ff,	// (0x00044960) popup_note_wait_window_t3_ParamLimits

0x56ff,	// (0x00044960) popup_note_wait_window_t3

0x5712,	// (0x00044973) popup_note_wait_window_t4_ParamLimits

0x5712,	// (0x00044973) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0004eab0) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0004eab0) popup_note_wait_window_t

0x5737,	// (0x00044998) wait_bar_pane_ParamLimits

0x5737,	// (0x00044998) wait_bar_pane

0x2c0b,	// (0x00041e6c) wait_anim_pane

0x2c0b,	// (0x00041e6c) wait_border_pane

0x2c01,	// (0x00041e62) wait_anim_pane_g1

0x2c01,	// (0x00041e62) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0004e97b) wait_anim_pane_g

0x560b,	// (0x0004486c) wait_border_pane_g1

0x5616,	// (0x00044877) wait_border_pane_g2

0x561f,	// (0x00044880) wait_border_pane_g3

0x0002,

0xf841,	// (0x0004eaa2) wait_border_pane_g

0x5476,	// (0x000446d7) bg_popup_window_pane_cp16_ParamLimits

0x5476,	// (0x000446d7) bg_popup_window_pane_cp16

0x5576,	// (0x000447d7) indicator_popup_pane_cp4_ParamLimits

0x5576,	// (0x000447d7) indicator_popup_pane_cp4

0x558a,	// (0x000447eb) popup_query_data_window_t1_ParamLimits

0x558a,	// (0x000447eb) popup_query_data_window_t1

0x559c,	// (0x000447fd) popup_query_data_window_t2_ParamLimits

0x559c,	// (0x000447fd) popup_query_data_window_t2

0x55b5,	// (0x00044816) popup_query_data_window_t3_ParamLimits

0x55b5,	// (0x00044816) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0004ea9b) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0004ea9b) popup_query_data_window_t

0x55cf,	// (0x00044830) query_popup_data_pane_ParamLimits

0x55cf,	// (0x00044830) query_popup_data_pane

0x55e3,	// (0x00044844) query_popup_data_pane_cp1_ParamLimits

0x55e3,	// (0x00044844) query_popup_data_pane_cp1

0x5476,	// (0x000446d7) bg_popup_window_pane_cp10_ParamLimits

0x5476,	// (0x000446d7) bg_popup_window_pane_cp10

0x54a8,	// (0x00044709) indicator_popup_pane_ParamLimits

0x54a8,	// (0x00044709) indicator_popup_pane

0x54ca,	// (0x0004472b) popup_query_code_window_t1_ParamLimits

0x54ca,	// (0x0004472b) popup_query_code_window_t1

0x54e4,	// (0x00044745) popup_query_code_window_t2_ParamLimits

0x54e4,	// (0x00044745) popup_query_code_window_t2

0x552d,	// (0x0004478e) popup_query_code_window_t3_ParamLimits

0x552d,	// (0x0004478e) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0004ea94) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0004ea94) popup_query_code_window_t

0x555c,	// (0x000447bd) query_popup_pane_ParamLimits

0x555c,	// (0x000447bd) query_popup_pane

0x301c,	// (0x0004227d) bg_popup_window_pane_cp15_ParamLimits

0x301c,	// (0x0004227d) bg_popup_window_pane_cp15

0x303a,	// (0x0004229b) indicator_popup_pane_cp1_ParamLimits

0x303a,	// (0x0004229b) indicator_popup_pane_cp1

0x304d,	// (0x000422ae) indicator_popup_pane_cp2_ParamLimits

0x304d,	// (0x000422ae) indicator_popup_pane_cp2

0x3060,	// (0x000422c1) popup_query_data_code_window_g1_ParamLimits

0x3060,	// (0x000422c1) popup_query_data_code_window_g1

0x3073,	// (0x000422d4) popup_query_data_code_window_t1_ParamLimits

0x3073,	// (0x000422d4) popup_query_data_code_window_t1

0x3085,	// (0x000422e6) popup_query_data_code_window_t2_ParamLimits

0x3085,	// (0x000422e6) popup_query_data_code_window_t2

0x3097,	// (0x000422f8) popup_query_data_code_window_t3_ParamLimits

0x3097,	// (0x000422f8) popup_query_data_code_window_t3

0x30ad,	// (0x0004230e) popup_query_data_code_window_t4_ParamLimits

0x30ad,	// (0x0004230e) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0004e807) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0004e807) popup_query_data_code_window_t

0x19da,	// (0x00040c3b) list_single_midp_graphic_pane_g3

0x30c5,	// (0x00042326) query_popup_data_pane_cp2_ParamLimits

0x30d8,	// (0x00042339) query_popup_pane_cp2_ParamLimits

0x30d8,	// (0x00042339) query_popup_pane_cp2

0x2c0b,	// (0x00041e6c) bg_popup_window_pane_cp11

0x546e,	// (0x000446cf) heading_pane_cp5

0x31c0,	// (0x00042421) listscroll_popup_info_pane

0x2c0b,	// (0x00041e6c) input_focus_pane_cp3

0x30eb,	// (0x0004234c) query_popup_pane_t1

0x30f9,	// (0x0004235a) list_popup_info_pane_ParamLimits

0x30f9,	// (0x0004235a) list_popup_info_pane

0x3108,	// (0x00042369) listscroll_popup_info_pane_g1

0x3110,	// (0x00042371) scroll_pane_cp7

0x311a,	// (0x0004237b) popup_info_list_pane_t1_ParamLimits

0x311a,	// (0x0004237b) popup_info_list_pane_t1

0x3134,	// (0x00042395) popup_info_list_pane_t2_ParamLimits

0x3134,	// (0x00042395) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0004e810) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0004e810) popup_info_list_pane_t

0x2c0b,	// (0x00041e6c) bg_popup_window_pane_cp12

0x67b4,	// (0x00045a15) find_popup_pane

0x2ceb,	// (0x00041f4c) bg_popup_window_pane_cp3

0x314e,	// (0x000423af) heading_pane_cp3

0x315a,	// (0x000423bb) listscroll_popup_graphic_pane

0x2c0b,	// (0x00041e6c) bg_popup_window_pane_cp4

0xc854,	// (0x0004bab5) heading_pane_cp4

0x31c0,	// (0x00042421) listscroll_popup_colour_pane

0xc85c,	// (0x0004babd) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc85c,	// (0x0004babd) cell_large_graphic_colour_none_popup_pane

0xc870,	// (0x0004bad1) grid_large_graphic_colour_popup_pane_ParamLimits

0xc870,	// (0x0004bad1) grid_large_graphic_colour_popup_pane

0xc894,	// (0x0004baf5) listscroll_popup_colour_pane_g1_ParamLimits

0xc894,	// (0x0004baf5) listscroll_popup_colour_pane_g1

0xc8ab,	// (0x0004bb0c) listscroll_popup_colour_pane_g2_ParamLimits

0xc8ab,	// (0x0004bb0c) listscroll_popup_colour_pane_g2

0xc8c2,	// (0x0004bb23) listscroll_popup_colour_pane_g3_ParamLimits

0xc8c2,	// (0x0004bb23) listscroll_popup_colour_pane_g3

0xc8d2,	// (0x0004bb33) listscroll_popup_colour_pane_g4_ParamLimits

0xc8d2,	// (0x0004bb33) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0004e815) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0004e815) listscroll_popup_colour_pane_g

0x325a,	// (0x000424bb) scroll_pane_cp6_ParamLimits

0x325a,	// (0x000424bb) scroll_pane_cp6

0xc8e2,	// (0x0004bb43) cell_large_graphic_colour_popup_pane_ParamLimits

0xc8e2,	// (0x0004bb43) cell_large_graphic_colour_popup_pane

0x328b,	// (0x000424ec) cell_large_graphic_colour_none_popup_pane_t1

0x2c0b,	// (0x00041e6c) grid_highlight_pane_cp5

0x329a,	// (0x000424fb) cell_large_graphic_colour_popup_pane_g1

0x32a2,	// (0x00042503) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0004e81e) cell_large_graphic_colour_popup_pane_g

0x32aa,	// (0x0004250b) cell_large_graphic_colour_popup_pane_g2_copy1

0x32b3,	// (0x00042514) grid_highlight_pane_cp4

0x32bb,	// (0x0004251c) bg_popup_window_pane_cp8_ParamLimits

0x32bb,	// (0x0004251c) bg_popup_window_pane_cp8

0x32d6,	// (0x00042537) popup_snote_single_text_window_g1_ParamLimits

0x32d6,	// (0x00042537) popup_snote_single_text_window_g1

0x32e8,	// (0x00042549) popup_snote_single_text_window_t1_ParamLimits

0x32e8,	// (0x00042549) popup_snote_single_text_window_t1

0x32fb,	// (0x0004255c) popup_snote_single_text_window_t2_ParamLimits

0x32fb,	// (0x0004255c) popup_snote_single_text_window_t2

0x330e,	// (0x0004256f) popup_snote_single_text_window_t3_ParamLimits

0x330e,	// (0x0004256f) popup_snote_single_text_window_t3

0x3347,	// (0x000425a8) popup_snote_single_text_window_t4_ParamLimits

0x3347,	// (0x000425a8) popup_snote_single_text_window_t4

0x337b,	// (0x000425dc) popup_snote_single_text_window_t5_ParamLimits

0x337b,	// (0x000425dc) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0004e823) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0004e823) popup_snote_single_text_window_t

0x33aa,	// (0x0004260b) bg_popup_window_pane_cp9_ParamLimits

0x33aa,	// (0x0004260b) bg_popup_window_pane_cp9

0x32d6,	// (0x00042537) popup_snote_single_graphic_window_g1_ParamLimits

0x32d6,	// (0x00042537) popup_snote_single_graphic_window_g1

0x33b8,	// (0x00042619) popup_snote_single_graphic_window_g2_ParamLimits

0x33b8,	// (0x00042619) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0004e82e) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0004e82e) popup_snote_single_graphic_window_g

0x33c4,	// (0x00042625) popup_snote_single_graphic_window_t1_ParamLimits

0x33c4,	// (0x00042625) popup_snote_single_graphic_window_t1

0x33d7,	// (0x00042638) popup_snote_single_graphic_window_t2_ParamLimits

0x33d7,	// (0x00042638) popup_snote_single_graphic_window_t2

0x33ea,	// (0x0004264b) popup_snote_single_graphic_window_t3_ParamLimits

0x33ea,	// (0x0004264b) popup_snote_single_graphic_window_t3

0x3423,	// (0x00042684) popup_snote_single_graphic_window_t4_ParamLimits

0x3423,	// (0x00042684) popup_snote_single_graphic_window_t4

0x3457,	// (0x000426b8) popup_snote_single_graphic_window_t5_ParamLimits

0x3457,	// (0x000426b8) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0004e833) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0004e833) popup_snote_single_graphic_window_t

0x66f8,	// (0x00045959) grid_graphic_popup_pane_ParamLimits

0x66f8,	// (0x00045959) grid_graphic_popup_pane

0x6720,	// (0x00045981) listscroll_popup_graphic_pane_g1_ParamLimits

0x6720,	// (0x00045981) listscroll_popup_graphic_pane_g1

0xdb85,	// (0x0004cde6) listscroll_popup_graphic_pane_g2_ParamLimits

0xdb85,	// (0x0004cde6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0004ec11) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0004ec11) listscroll_popup_graphic_pane_g

0x6748,	// (0x000459a9) scroll_pane_cp5

0xdb49,	// (0x0004cdaa) cell_graphic_popup_pane_ParamLimits

0xdb49,	// (0x0004cdaa) cell_graphic_popup_pane

0x6682,	// (0x000458e3) cell_graphic_popup_pane_g1

0x668a,	// (0x000458eb) cell_graphic_popup_pane_g2

0x32aa,	// (0x0004250b) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0004ec0a) cell_graphic_popup_pane_g

0x6693,	// (0x000458f4) cell_graphic_popup_pane_t2

0x32b3,	// (0x00042514) grid_highlight_pane_cp3

0x3498,	// (0x000426f9) list_gen_pane_ParamLimits

0x3498,	// (0x000426f9) list_gen_pane

0x34ca,	// (0x0004272b) scroll_pane

0xdb04,	// (0x0004cd65) bg_list_pane_g1_ParamLimits

0xdb04,	// (0x0004cd65) bg_list_pane_g1

0x65ff,	// (0x00045860) bg_list_pane_g2_ParamLimits

0x65ff,	// (0x00045860) bg_list_pane_g2

0x6612,	// (0x00045873) bg_list_pane_g3_ParamLimits

0x6612,	// (0x00045873) bg_list_pane_g3

0x6624,	// (0x00045885) bg_list_pane_g4_ParamLimits

0x6624,	// (0x00045885) bg_list_pane_g4

0xdb1f,	// (0x0004cd80) bg_list_pane_g5_ParamLimits

0xdb1f,	// (0x0004cd80) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0004ebff) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0004ebff) bg_list_pane_g

0xb9e4,	// (0x0004ac45) list_double2_graphic_large_graphic_pane_ParamLimits

0xb9e4,	// (0x0004ac45) list_double2_graphic_large_graphic_pane

0xb9e4,	// (0x0004ac45) list_double2_graphic_pane_ParamLimits

0xb9e4,	// (0x0004ac45) list_double2_graphic_pane

0xb9e4,	// (0x0004ac45) list_double2_large_graphic_pane_ParamLimits

0xb9e4,	// (0x0004ac45) list_double2_large_graphic_pane

0xb9e4,	// (0x0004ac45) list_double2_pane_ParamLimits

0xb9e4,	// (0x0004ac45) list_double2_pane

0xb9e4,	// (0x0004ac45) list_double_graphic_heading_pane_ParamLimits

0xb9e4,	// (0x0004ac45) list_double_graphic_heading_pane

0xb9e4,	// (0x0004ac45) list_double_graphic_pane_ParamLimits

0xb9e4,	// (0x0004ac45) list_double_graphic_pane

0xb9e4,	// (0x0004ac45) list_double_heading_pane_ParamLimits

0xb9e4,	// (0x0004ac45) list_double_heading_pane

0xb9e4,	// (0x0004ac45) list_double_large_graphic_pane_ParamLimits

0xb9e4,	// (0x0004ac45) list_double_large_graphic_pane

0xb9e4,	// (0x0004ac45) list_double_number_pane_ParamLimits

0xb9e4,	// (0x0004ac45) list_double_number_pane

0xb9e4,	// (0x0004ac45) list_double_pane_ParamLimits

0xb9e4,	// (0x0004ac45) list_double_pane

0xb9e4,	// (0x0004ac45) list_double_time_pane_ParamLimits

0xb9e4,	// (0x0004ac45) list_double_time_pane

0xb9e4,	// (0x0004ac45) list_setting_number_pane_ParamLimits

0xb9e4,	// (0x0004ac45) list_setting_number_pane

0xb9e4,	// (0x0004ac45) list_setting_pane_ParamLimits

0xb9e4,	// (0x0004ac45) list_setting_pane

0xdabb,	// (0x0004cd1c) list_single_2graphic_pane_ParamLimits

0xdabb,	// (0x0004cd1c) list_single_2graphic_pane

0xdabb,	// (0x0004cd1c) list_single_graphic_heading_pane_ParamLimits

0xdabb,	// (0x0004cd1c) list_single_graphic_heading_pane

0xdabb,	// (0x0004cd1c) list_single_graphic_pane_ParamLimits

0xdabb,	// (0x0004cd1c) list_single_graphic_pane

0xdabb,	// (0x0004cd1c) list_single_heading_pane_ParamLimits

0xdabb,	// (0x0004cd1c) list_single_heading_pane

0xdaf2,	// (0x0004cd53) list_single_large_graphic_pane_ParamLimits

0xdaf2,	// (0x0004cd53) list_single_large_graphic_pane

0xdabb,	// (0x0004cd1c) list_single_number_heading_pane_ParamLimits

0xdabb,	// (0x0004cd1c) list_single_number_heading_pane

0xdabb,	// (0x0004cd1c) list_single_number_pane_ParamLimits

0xdabb,	// (0x0004cd1c) list_single_number_pane

0xdabb,	// (0x0004cd1c) list_single_pane_ParamLimits

0xdabb,	// (0x0004cd1c) list_single_pane

0x2c0b,	// (0x00041e6c) list_highlight_pane_cp1

0x541e,	// (0x0004467f) list_single_pane_g1_ParamLimits

0x541e,	// (0x0004467f) list_single_pane_g1

0x19a9,	// (0x00040c0a) list_single_pane_g2_ParamLimits

0x19a9,	// (0x00040c0a) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0004e84f) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0004e84f) list_single_pane_g

0x0a68,	// (0x0003fcc9) list_single_pane_t1_ParamLimits

0x0a68,	// (0x0003fcc9) list_single_pane_t1

0x541e,	// (0x0004467f) list_single_number_pane_g1_ParamLimits

0x541e,	// (0x0004467f) list_single_number_pane_g1

0x19a9,	// (0x00040c0a) list_single_number_pane_g2_ParamLimits

0x19a9,	// (0x00040c0a) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0004e84f) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0004e84f) list_single_number_pane_g

0x08ff,	// (0x0003fb60) list_single_number_pane_t1_ParamLimits

0x08ff,	// (0x0003fb60) list_single_number_pane_t1

0xb9a6,	// (0x0004ac07) list_single_number_pane_t2_ParamLimits

0xb9a6,	// (0x0004ac07) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0004ebc0) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0004ebc0) list_single_number_pane_t

0xb408,	// (0x0004a669) list_single_graphic_pane_g1_ParamLimits

0xb408,	// (0x0004a669) list_single_graphic_pane_g1

0x541e,	// (0x0004467f) list_single_graphic_pane_g2_ParamLimits

0x541e,	// (0x0004467f) list_single_graphic_pane_g2

0x19a9,	// (0x00040c0a) list_single_graphic_pane_g3_ParamLimits

0x19a9,	// (0x00040c0a) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0004e83e) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0004e83e) list_single_graphic_pane_g

0xb414,	// (0x0004a675) list_single_graphic_pane_t1_ParamLimits

0xb414,	// (0x0004a675) list_single_graphic_pane_t1

0xb42a,	// (0x0004a68b) list_single_heading_pane_g1_ParamLimits

0xb42a,	// (0x0004a68b) list_single_heading_pane_g1

0x19a9,	// (0x00040c0a) list_single_heading_pane_g2_ParamLimits

0x19a9,	// (0x00040c0a) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0004e845) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004e845) list_single_heading_pane_g

0xb43d,	// (0x0004a69e) list_single_heading_pane_t1_ParamLimits

0xb43d,	// (0x0004a69e) list_single_heading_pane_t1

0xbcfd,	// (0x0004af5e) list_single_heading_pane_t2_ParamLimits

0xbcfd,	// (0x0004af5e) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0004e84a) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0004e84a) list_single_heading_pane_t

0x541e,	// (0x0004467f) list_single_number_heading_pane_g1_ParamLimits

0x541e,	// (0x0004467f) list_single_number_heading_pane_g1

0x19a9,	// (0x00040c0a) list_single_number_heading_pane_g2_ParamLimits

0x19a9,	// (0x00040c0a) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0004e84f) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0004e84f) list_single_number_heading_pane_g

0xb453,	// (0x0004a6b4) list_single_number_heading_pane_t1_ParamLimits

0xb453,	// (0x0004a6b4) list_single_number_heading_pane_t1

0xb469,	// (0x0004a6ca) list_single_number_heading_pane_t2_ParamLimits

0xb469,	// (0x0004a6ca) list_single_number_heading_pane_t2

0x0a42,	// (0x0003fca3) list_single_number_heading_pane_t3_ParamLimits

0x0a42,	// (0x0003fca3) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0004e854) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0004e854) list_single_number_heading_pane_t

0xb47b,	// (0x0004a6dc) list_single_graphic_heading_pane_g1_ParamLimits

0xb47b,	// (0x0004a6dc) list_single_graphic_heading_pane_g1

0xbd0f,	// (0x0004af70) list_single_graphic_heading_pane_g4_ParamLimits

0xbd0f,	// (0x0004af70) list_single_graphic_heading_pane_g4

0x19a9,	// (0x00040c0a) list_single_graphic_heading_pane_g5_ParamLimits

0x19a9,	// (0x00040c0a) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0004e85b) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0004e85b) list_single_graphic_heading_pane_g

0xb453,	// (0x0004a6b4) list_single_graphic_heading_pane_t1_ParamLimits

0xb453,	// (0x0004a6b4) list_single_graphic_heading_pane_t1

0xb491,	// (0x0004a6f2) list_single_graphic_heading_pane_t2_ParamLimits

0xb491,	// (0x0004a6f2) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0004e862) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0004e862) list_single_graphic_heading_pane_t

0x1e56,	// (0x000410b7) list_single_large_graphic_pane_g1_ParamLimits

0x1e56,	// (0x000410b7) list_single_large_graphic_pane_g1

0x1e62,	// (0x000410c3) list_single_large_graphic_pane_g2_ParamLimits

0x1e62,	// (0x000410c3) list_single_large_graphic_pane_g2

0x1e6e,	// (0x000410cf) list_single_large_graphic_pane_g3_ParamLimits

0x1e6e,	// (0x000410cf) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0004e867) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0004e867) list_single_large_graphic_pane_g

0x5616,	// (0x00044877) wait_border_pane_g2_copy1

0xbd20,	// (0x0004af81) list_single_large_graphic_pane_g4_cp2

0x0a7e,	// (0x0003fcdf) list_single_large_graphic_pane_t1_ParamLimits

0x0a7e,	// (0x0003fcdf) list_single_large_graphic_pane_t1

0x541e,	// (0x0004467f) list_double_pane_g1_ParamLimits

0x541e,	// (0x0004467f) list_double_pane_g1

0x19a9,	// (0x00040c0a) list_double_pane_g2_ParamLimits

0x19a9,	// (0x00040c0a) list_double_pane_g2

0x0001,

0xf5ee,	// (0x0004e84f) list_double_pane_g_ParamLimits

0xf5ee,	// (0x0004e84f) list_double_pane_g

0x0a68,	// (0x0003fcc9) list_double_pane_t1_ParamLimits

0x0a68,	// (0x0003fcc9) list_double_pane_t1

0xb4a7,	// (0x0004a708) list_double_pane_t2_ParamLimits

0xb4a7,	// (0x0004a708) list_double_pane_t2

0x0001,

0xf60d,	// (0x0004e86e) list_double_pane_t_ParamLimits

0xf60d,	// (0x0004e86e) list_double_pane_t

0xb4b9,	// (0x0004a71a) list_double2_pane_g1_ParamLimits

0xb4b9,	// (0x0004a71a) list_double2_pane_g1

0x089f,	// (0x0003fb00) list_double2_pane_g2_ParamLimits

0x089f,	// (0x0003fb00) list_double2_pane_g2

0x0001,

0xf612,	// (0x0004e873) list_double2_pane_g_ParamLimits

0xf612,	// (0x0004e873) list_double2_pane_g

0xb4ca,	// (0x0004a72b) list_double2_pane_t1_ParamLimits

0xb4ca,	// (0x0004a72b) list_double2_pane_t1

0xb4e0,	// (0x0004a741) list_double2_pane_t2_ParamLimits

0xb4e0,	// (0x0004a741) list_double2_pane_t2

0x0001,

0xf617,	// (0x0004e878) list_double2_pane_t_ParamLimits

0xf617,	// (0x0004e878) list_double2_pane_t

0x541e,	// (0x0004467f) list_double_number_pane_g1_ParamLimits

0x541e,	// (0x0004467f) list_double_number_pane_g1

0x19a9,	// (0x00040c0a) list_double_number_pane_g2_ParamLimits

0x19a9,	// (0x00040c0a) list_double_number_pane_g2

0x0001,

0xf5ee,	// (0x0004e84f) list_double_number_pane_g_ParamLimits

0xf5ee,	// (0x0004e84f) list_double_number_pane_g

0xb4f2,	// (0x0004a753) list_double_number_pane_t1_ParamLimits

0xb4f2,	// (0x0004a753) list_double_number_pane_t1

0x08ff,	// (0x0003fb60) list_double_number_pane_t2_ParamLimits

0x08ff,	// (0x0003fb60) list_double_number_pane_t2

0xb504,	// (0x0004a765) list_double_number_pane_t3_ParamLimits

0xb504,	// (0x0004a765) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0004e87d) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0004e87d) list_double_number_pane_t

0x08f3,	// (0x0003fb54) list_double_graphic_pane_g1_ParamLimits

0x08f3,	// (0x0003fb54) list_double_graphic_pane_g1

0x1ead,	// (0x0004110e) list_double_graphic_pane_g2_ParamLimits

0x1ead,	// (0x0004110e) list_double_graphic_pane_g2

0x1ebc,	// (0x0004111d) list_double_graphic_pane_g3_ParamLimits

0x1ebc,	// (0x0004111d) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0004e884) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0004e884) list_double_graphic_pane_g

0xb414,	// (0x0004a675) list_double_graphic_pane_t1_ParamLimits

0xb414,	// (0x0004a675) list_double_graphic_pane_t1

0xb522,	// (0x0004a783) list_double_graphic_pane_t2_ParamLimits

0xb522,	// (0x0004a783) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0004e88d) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0004e88d) list_double_graphic_pane_t

0x08f3,	// (0x0003fb54) list_double2_graphic_pane_g1_ParamLimits

0x08f3,	// (0x0003fb54) list_double2_graphic_pane_g1

0x541e,	// (0x0004467f) list_double2_graphic_pane_g2_ParamLimits

0x541e,	// (0x0004467f) list_double2_graphic_pane_g2

0x19a9,	// (0x00040c0a) list_double2_graphic_pane_g3_ParamLimits

0x19a9,	// (0x00040c0a) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0004e892) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0004e892) list_double2_graphic_pane_g

0x08ff,	// (0x0003fb60) list_double2_graphic_pane_t1_ParamLimits

0x08ff,	// (0x0003fb60) list_double2_graphic_pane_t1

0xb534,	// (0x0004a795) list_double2_graphic_pane_t2_ParamLimits

0xb534,	// (0x0004a795) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0004e899) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0004e899) list_double2_graphic_pane_t

0xb546,	// (0x0004a7a7) list_double_large_graphic_pane_g1_ParamLimits

0xb546,	// (0x0004a7a7) list_double_large_graphic_pane_g1

0xb56c,	// (0x0004a7cd) list_double_large_graphic_pane_g2_ParamLimits

0xb56c,	// (0x0004a7cd) list_double_large_graphic_pane_g2

0x19a9,	// (0x00040c0a) list_double_large_graphic_pane_g3_ParamLimits

0x19a9,	// (0x00040c0a) list_double_large_graphic_pane_g3

0xb582,	// (0x0004a7e3) list_double_large_graphic_pane_g4_ParamLimits

0xb582,	// (0x0004a7e3) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0004e89e) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0004e89e) list_double_large_graphic_pane_g

0xb595,	// (0x0004a7f6) list_double_large_graphic_pane_t1_ParamLimits

0xb595,	// (0x0004a7f6) list_double_large_graphic_pane_t1

0xb5ae,	// (0x0004a80f) list_double_large_graphic_pane_t2_ParamLimits

0xb5ae,	// (0x0004a80f) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0004e8a9) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0004e8a9) list_double_large_graphic_pane_t

0xb5c0,	// (0x0004a821) list_double2_large_graphic_pane_g1_ParamLimits

0xb5c0,	// (0x0004a821) list_double2_large_graphic_pane_g1

0xbd0f,	// (0x0004af70) list_double2_large_graphic_pane_g2_ParamLimits

0xbd0f,	// (0x0004af70) list_double2_large_graphic_pane_g2

0x19a9,	// (0x00040c0a) list_double2_large_graphic_pane_g3_ParamLimits

0x19a9,	// (0x00040c0a) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0004e8ae) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0004e8ae) list_double2_large_graphic_pane_g

0xb453,	// (0x0004a6b4) list_double2_large_graphic_pane_t1_ParamLimits

0xb453,	// (0x0004a6b4) list_double2_large_graphic_pane_t1

0xb5cc,	// (0x0004a82d) list_double2_large_graphic_pane_t2_ParamLimits

0xb5cc,	// (0x0004a82d) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0004e8b5) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0004e8b5) list_double2_large_graphic_pane_t

0xb5de,	// (0x0004a83f) list_double_heading_pane_g1_ParamLimits

0xb5de,	// (0x0004a83f) list_double_heading_pane_g1

0xbd28,	// (0x0004af89) list_double_heading_pane_g2_ParamLimits

0xbd28,	// (0x0004af89) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0004e8ba) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0004e8ba) list_double_heading_pane_g

0xb5ef,	// (0x0004a850) list_double_heading_pane_t1_ParamLimits

0xb5ef,	// (0x0004a850) list_double_heading_pane_t1

0xb605,	// (0x0004a866) list_double_heading_pane_t2_ParamLimits

0xb605,	// (0x0004a866) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0004e8bf) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0004e8bf) list_double_heading_pane_t

0x02aa,	// (0x0003f50b) list_double_graphic_heading_pane_g1_ParamLimits

0x02aa,	// (0x0003f50b) list_double_graphic_heading_pane_g1

0xb5de,	// (0x0004a83f) list_double_graphic_heading_pane_g2_ParamLimits

0xb5de,	// (0x0004a83f) list_double_graphic_heading_pane_g2

0xbd28,	// (0x0004af89) list_double_graphic_heading_pane_g3_ParamLimits

0xbd28,	// (0x0004af89) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0004e8c4) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0004e8c4) list_double_graphic_heading_pane_g

0xb617,	// (0x0004a878) list_double_graphic_heading_pane_t1_ParamLimits

0xb617,	// (0x0004a878) list_double_graphic_heading_pane_t1

0xb62d,	// (0x0004a88e) list_double_graphic_heading_pane_t2_ParamLimits

0xb62d,	// (0x0004a88e) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0004e8cb) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0004e8cb) list_double_graphic_heading_pane_t

0xb4b9,	// (0x0004a71a) list_double_time_pane_g1_ParamLimits

0xb4b9,	// (0x0004a71a) list_double_time_pane_g1

0x089f,	// (0x0003fb00) list_double_time_pane_g2_ParamLimits

0x089f,	// (0x0003fb00) list_double_time_pane_g2

0x0001,

0xf612,	// (0x0004e873) list_double_time_pane_g_ParamLimits

0xf612,	// (0x0004e873) list_double_time_pane_g

0xb63f,	// (0x0004a8a0) list_double_time_pane_t1_ParamLimits

0xb63f,	// (0x0004a8a0) list_double_time_pane_t1

0xb655,	// (0x0004a8b6) list_double_time_pane_t2_ParamLimits

0xb655,	// (0x0004a8b6) list_double_time_pane_t2

0xb667,	// (0x0004a8c8) list_double_time_pane_t3_ParamLimits

0xb667,	// (0x0004a8c8) list_double_time_pane_t3

0xb679,	// (0x0004a8da) list_double_time_pane_t4_ParamLimits

0xb679,	// (0x0004a8da) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x0004e8d0) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x0004e8d0) list_double_time_pane_t

0xb68b,	// (0x0004a8ec) list_setting_pane_g1_ParamLimits

0xb68b,	// (0x0004a8ec) list_setting_pane_g1

0x0422,	// (0x0003f683) list_setting_pane_g2_ParamLimits

0x0422,	// (0x0003f683) list_setting_pane_g2

0x0001,

0xf678,	// (0x0004e8d9) list_setting_pane_g_ParamLimits

0xf678,	// (0x0004e8d9) list_setting_pane_g

0xb697,	// (0x0004a8f8) list_setting_pane_t1_ParamLimits

0xb697,	// (0x0004a8f8) list_setting_pane_t1

0xb6b1,	// (0x0004a912) list_setting_pane_t2_ParamLimits

0xb6b1,	// (0x0004a912) list_setting_pane_t2

0x0002,

0xf67d,	// (0x0004e8de) list_setting_pane_t_ParamLimits

0xf67d,	// (0x0004e8de) list_setting_pane_t

0xb6f0,	// (0x0004a951) set_value_pane_cp_ParamLimits

0xb6f0,	// (0x0004a951) set_value_pane_cp

0xb6fc,	// (0x0004a95d) list_setting_number_pane_g1_ParamLimits

0xb6fc,	// (0x0004a95d) list_setting_number_pane_g1

0xb708,	// (0x0004a969) list_setting_number_pane_g2_ParamLimits

0xb708,	// (0x0004a969) list_setting_number_pane_g2

0x0001,

0xf684,	// (0x0004e8e5) list_setting_number_pane_g_ParamLimits

0xf684,	// (0x0004e8e5) list_setting_number_pane_g

0xb714,	// (0x0004a975) list_setting_number_pane_t1_ParamLimits

0xb714,	// (0x0004a975) list_setting_number_pane_t1

0xb72d,	// (0x0004a98e) list_setting_number_pane_t2_ParamLimits

0xb72d,	// (0x0004a98e) list_setting_number_pane_t2

0xb747,	// (0x0004a9a8) list_setting_number_pane_t3_ParamLimits

0xb747,	// (0x0004a9a8) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0004e8ea) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0004e8ea) list_setting_number_pane_t

0xb6f0,	// (0x0004a951) set_value_pane_ParamLimits

0xb6f0,	// (0x0004a951) set_value_pane

0x34fe,	// (0x0004275f) bg_set_opt_pane_ParamLimits

0x34fe,	// (0x0004275f) bg_set_opt_pane

0x0585,	// (0x0003f7e6) set_value_pane_t1

0x351f,	// (0x00042780) slider_set_pane_cp3

0x3528,	// (0x00042789) volume_small_pane_cp

0x3531,	// (0x00042792) list_form_gen_pane

0x353a,	// (0x0004279b) scroll_pane_cp8

0xb78a,	// (0x0004a9eb) form_field_data_pane_ParamLimits

0xb78a,	// (0x0004a9eb) form_field_data_pane

0xb7a1,	// (0x0004aa02) form_field_data_wide_pane_ParamLimits

0xb7a1,	// (0x0004aa02) form_field_data_wide_pane

0xb7c1,	// (0x0004aa22) form_field_popup_pane_ParamLimits

0xb7c1,	// (0x0004aa22) form_field_popup_pane

0xb7d9,	// (0x0004aa3a) form_field_popup_wide_pane_ParamLimits

0xb7d9,	// (0x0004aa3a) form_field_popup_wide_pane

0x0621,	// (0x0003f882) form_field_slider_pane_ParamLimits

0x0621,	// (0x0003f882) form_field_slider_pane

0x0634,	// (0x0003f895) form_field_slider_wide_pane_ParamLimits

0x0634,	// (0x0003f895) form_field_slider_wide_pane

0x354b,	// (0x000427ac) data_form_pane

0xb7fa,	// (0x0004aa5b) form_field_data_pane_t1

0x3557,	// (0x000427b8) input_focus_pane

0x3565,	// (0x000427c6) data_form_wide_pane

0x0675,	// (0x0003f8d6) form_field_data_wide_pane_t1

0x32c8,	// (0x00042529) input_focus_pane_cp6

0xb814,	// (0x0004aa75) form_field_popup_pane_t1

0x3557,	// (0x000427b8) input_focus_pane_cp7

0x3591,	// (0x000427f2) list_form_pane

0x06b7,	// (0x0003f918) form_field_popup_wide_pane_t1

0x3557,	// (0x000427b8) input_focus_pane_cp8

0x359d,	// (0x000427fe) list_form_wide_pane

0xb836,	// (0x0004aa97) form_field_slider_pane_t1_ParamLimits

0xb836,	// (0x0004aa97) form_field_slider_pane_t1

0xb84e,	// (0x0004aaaf) form_field_slider_pane_t2_ParamLimits

0xb84e,	// (0x0004aaaf) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0004e8fa) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0004e8fa) form_field_slider_pane_t

0x2f66,	// (0x000421c7) input_focus_pane_cp9_ParamLimits

0x2f66,	// (0x000421c7) input_focus_pane_cp9

0xb863,	// (0x0004aac4) slider_cont_pane_ParamLimits

0xb863,	// (0x0004aac4) slider_cont_pane

0x35ac,	// (0x0004280d) form_field_slider_wide_pane_t1_ParamLimits

0x35ac,	// (0x0004280d) form_field_slider_wide_pane_t1

0x0713,	// (0x0003f974) form_field_slider_wide_pane_t2_ParamLimits

0x0713,	// (0x0003f974) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0004e8ff) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0004e8ff) form_field_slider_wide_pane_t

0x2f66,	// (0x000421c7) input_focus_pane_cp10_ParamLimits

0x2f66,	// (0x000421c7) input_focus_pane_cp10

0xb877,	// (0x0004aad8) slider_cont_pane_cp1_ParamLimits

0xb877,	// (0x0004aad8) slider_cont_pane_cp1

0xb88b,	// (0x0004aaec) slider_form_pane_cp

0x35be,	// (0x0004281f) input_focus_pane_g1

0x35c6,	// (0x00042827) input_focus_pane_g2

0x35ce,	// (0x0004282f) input_focus_pane_g3

0x35d6,	// (0x00042837) input_focus_pane_g4

0x35de,	// (0x0004283f) input_focus_pane_g5

0x35e6,	// (0x00042847) input_focus_pane_g6

0x35ee,	// (0x0004284f) input_focus_pane_g7

0x35f6,	// (0x00042857) input_focus_pane_g8

0x35fe,	// (0x0004285f) input_focus_pane_g9

0x2c01,	// (0x00041e62) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0004e904) input_focus_pane_g

0x561f,	// (0x00044880) wait_border_pane_g3_copy1

0xb893,	// (0x0004aaf4) data_form_pane_t1

0x2c01,	// (0x00041e62) wait_anim_pane_g1_copy1

0xb9b8,	// (0x0004ac19) data_form_wide_pane_t1

0xb8ac,	// (0x0004ab0d) list_form_graphic_pane_cp_ParamLimits

0xb8ac,	// (0x0004ab0d) list_form_graphic_pane_cp

0x655b,	// (0x000457bc) slider_form_pane_g1

0x6564,	// (0x000457c5) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0004ebf0) slider_form_pane_g

0xb8bd,	// (0x0004ab1e) list_form_graphic_pane_ParamLimits

0xb8bd,	// (0x0004ab1e) list_form_graphic_pane

0x0791,	// (0x0003f9f2) list_form_graphic_pane_g1

0x0799,	// (0x0003f9fa) list_form_graphic_pane_t1_ParamLimits

0x0799,	// (0x0003f9fa) list_form_graphic_pane_t1

0x2ceb,	// (0x00041f4c) list_highlight_pane_cp5_ParamLimits

0x2ceb,	// (0x00041f4c) list_highlight_pane_cp5

0xb8cf,	// (0x0004ab30) find_pane_g1

0x3606,	// (0x00042867) input_find_pane

0xb8d8,	// (0x0004ab39) input_find_pane_g1_ParamLimits

0xb8d8,	// (0x0004ab39) input_find_pane_g1

0xb8e4,	// (0x0004ab45) input_find_pane_t1_ParamLimits

0xb8e4,	// (0x0004ab45) input_find_pane_t1

0xb8f9,	// (0x0004ab5a) input_find_pane_t2_ParamLimits

0xb8f9,	// (0x0004ab5a) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0004e919) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0004e919) input_find_pane_t

0x360f,	// (0x00042870) input_focus_pane_cp5_ParamLimits

0x360f,	// (0x00042870) input_focus_pane_cp5

0xc917,	// (0x0004bb78) bg_popup_window_pane_cp2_ParamLimits

0xc917,	// (0x0004bb78) bg_popup_window_pane_cp2

0xc924,	// (0x0004bb85) listscroll_menu_pane_ParamLimits

0xc924,	// (0x0004bb85) listscroll_menu_pane

0xc930,	// (0x0004bb91) popup_submenu_window_ParamLimits

0xc930,	// (0x0004bb91) popup_submenu_window

0x366c,	// (0x000428cd) find_popup_pane_g1

0x3674,	// (0x000428d5) input_popup_find_pane_cp

0x360f,	// (0x00042870) input_focus_pane_cp4_ParamLimits

0x360f,	// (0x00042870) input_focus_pane_cp4

0x368a,	// (0x000428eb) input_popup_find_pane_t1_ParamLimits

0x368a,	// (0x000428eb) input_popup_find_pane_t1

0x2c0b,	// (0x00041e6c) bg_popup_sub_pane_cp

0x36b8,	// (0x00042919) listscroll_popup_sub_pane

0x36c0,	// (0x00042921) list_submenu_pane_ParamLimits

0x36c0,	// (0x00042921) list_submenu_pane

0x36d1,	// (0x00042932) scroll_pane_cp4

0x36d9,	// (0x0004293a) list_single_popup_submenu_pane_ParamLimits

0x36d9,	// (0x0004293a) list_single_popup_submenu_pane

0x36ed,	// (0x0004294e) list_single_popup_submenu_pane_g1

0x36f5,	// (0x00042956) list_single_popup_submenu_pane_t1_ParamLimits

0x36f5,	// (0x00042956) list_single_popup_submenu_pane_t1

0x2f66,	// (0x000421c7) bg_active_tab_pane_cp1_ParamLimits

0x2f66,	// (0x000421c7) bg_active_tab_pane_cp1

0xc968,	// (0x0004bbc9) tabs_2_active_pane_g1

0xc970,	// (0x0004bbd1) tabs_2_active_pane_t1

0x2f66,	// (0x000421c7) bg_passive_tab_pane_cp1_ParamLimits

0x2f66,	// (0x000421c7) bg_passive_tab_pane_cp1

0xc968,	// (0x0004bbc9) tabs_2_passive_pane_g1

0xc970,	// (0x0004bbd1) tabs_2_passive_pane_t1

0x2ceb,	// (0x00041f4c) bg_active_tab_pane_cp4

0xc982,	// (0x0004bbe3) tabs_2_long_active_pane_t1

0x44f8,	// (0x00043759) bg_passive_tab_pane_cp4

0x19e2,	// (0x00040c43) list_single_midp_graphic_pane_g4_ParamLimits

0x2ceb,	// (0x00041f4c) bg_active_tab_pane_cp5

0xc995,	// (0x0004bbf6) tabs_3_long_active_pane_t1

0x44f8,	// (0x00043759) bg_passive_tab_pane_cp5

0x19e2,	// (0x00040c43) list_single_midp_graphic_pane_g4

0x2ceb,	// (0x00041f4c) bg_popup_window_pane_cp13_ParamLimits

0x2ceb,	// (0x00041f4c) bg_popup_window_pane_cp13

0x376c,	// (0x000429cd) listscroll_popup_fast_pane_ParamLimits

0x376c,	// (0x000429cd) listscroll_popup_fast_pane

0x377b,	// (0x000429dc) grid_popup_fast_pane_ParamLimits

0x377b,	// (0x000429dc) grid_popup_fast_pane

0x378d,	// (0x000429ee) scroll_pane_cp9_ParamLimits

0x378d,	// (0x000429ee) scroll_pane_cp9

0x7e1a,	// (0x0004707b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7e1a,	// (0x0004707b) list_single_graphic_hl_pane_t1_cp2

0x37b1,	// (0x00042a12) input_focus_pane_cp20_ParamLimits

0x37b1,	// (0x00042a12) input_focus_pane_cp20

0x37bf,	// (0x00042a20) query_popup_data_pane_t1_ParamLimits

0x37bf,	// (0x00042a20) query_popup_data_pane_t1

0x37d2,	// (0x00042a33) query_popup_data_pane_t2_ParamLimits

0x37d2,	// (0x00042a33) query_popup_data_pane_t2

0x3818,	// (0x00042a79) query_popup_data_pane_t3_ParamLimits

0x3818,	// (0x00042a79) query_popup_data_pane_t3

0x3859,	// (0x00042aba) query_popup_data_pane_t4_ParamLimits

0x3859,	// (0x00042aba) query_popup_data_pane_t4

0x3895,	// (0x00042af6) query_popup_data_pane_t5_ParamLimits

0x3895,	// (0x00042af6) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0004e91e) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0004e91e) query_popup_data_pane_t

0x35be,	// (0x0004281f) bg_set_opt_pane_g1

0x35c6,	// (0x00042827) bg_set_opt_pane_g2

0x35ce,	// (0x0004282f) bg_set_opt_pane_g3

0x35d6,	// (0x00042837) bg_set_opt_pane_g4

0x35de,	// (0x0004283f) bg_set_opt_pane_g5

0x35e6,	// (0x00042847) bg_set_opt_pane_g6

0x35ee,	// (0x0004284f) bg_set_opt_pane_g7

0x35f6,	// (0x00042857) bg_set_opt_pane_g8

0x35fe,	// (0x0004285f) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0004e929) bg_set_opt_pane_g

0x1625,	// (0x00040886) control_top_pane_stacon_ParamLimits

0x1625,	// (0x00040886) control_top_pane_stacon

0x1678,	// (0x000408d9) signal_pane_stacon_ParamLimits

0x1678,	// (0x000408d9) signal_pane_stacon

0x3e33,	// (0x00043094) stacon_top_pane_g1_ParamLimits

0x3e33,	// (0x00043094) stacon_top_pane_g1

0x169d,	// (0x000408fe) title_pane_stacon_ParamLimits

0x169d,	// (0x000408fe) title_pane_stacon

0x16c7,	// (0x00040928) uni_indicator_pane_stacon_ParamLimits

0x16c7,	// (0x00040928) uni_indicator_pane_stacon

0x16dc,	// (0x0004093d) battery_pane_stacon_ParamLimits

0x16dc,	// (0x0004093d) battery_pane_stacon

0x1720,	// (0x00040981) control_bottom_pane_stacon_ParamLimits

0x1720,	// (0x00040981) control_bottom_pane_stacon

0x1743,	// (0x000409a4) navi_pane_stacon_ParamLimits

0x1743,	// (0x000409a4) navi_pane_stacon

0x3e55,	// (0x000430b6) stacon_bottom_pane_g1_ParamLimits

0x3e55,	// (0x000430b6) stacon_bottom_pane_g1

0x1386,	// (0x000405e7) aid_levels_signal_lsc_ParamLimits

0x1386,	// (0x000405e7) aid_levels_signal_lsc

0x139d,	// (0x000405fe) signal_pane_stacon_g1_ParamLimits

0x139d,	// (0x000405fe) signal_pane_stacon_g1

0x13b1,	// (0x00040612) signal_pane_stacon_g2_ParamLimits

0x13b1,	// (0x00040612) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0004e93c) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0004e93c) signal_pane_stacon_g

0x13e6,	// (0x00040647) title_pane_stacon_t1_ParamLimits

0x13e6,	// (0x00040647) title_pane_stacon_t1

0x38d9,	// (0x00042b3a) uni_indicator_pane_stacon_g1

0x38e3,	// (0x00042b44) uni_indicator_pane_stacon_g2

0x38ed,	// (0x00042b4e) uni_indicator_pane_stacon_g3

0x38f7,	// (0x00042b58) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0004e948) uni_indicator_pane_stacon_g

0x140b,	// (0x0004066c) control_top_pane_stacon_g1

0x1413,	// (0x00040674) control_top_pane_stacon_t1_ParamLimits

0x1413,	// (0x00040674) control_top_pane_stacon_t1

0x144a,	// (0x000406ab) aid_levels_battery_lsc_ParamLimits

0x144a,	// (0x000406ab) aid_levels_battery_lsc

0x1462,	// (0x000406c3) battery_pane_stacon_g1_ParamLimits

0x1462,	// (0x000406c3) battery_pane_stacon_g1

0x1475,	// (0x000406d6) battery_pane_stacon_g2_ParamLimits

0x1475,	// (0x000406d6) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0004e951) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0004e951) battery_pane_stacon_g

0x14b3,	// (0x00040714) navi_icon_pane_stacon

0x14c7,	// (0x00040728) navi_navi_pane_stacon

0x14b3,	// (0x00040714) navi_text_pane_stacon

0x140b,	// (0x0004066c) control_bottom_pane_stacon_g1

0x14db,	// (0x0004073c) control_bottom_pane_stacon_t1_ParamLimits

0x14db,	// (0x0004073c) control_bottom_pane_stacon_t1

0xc9a7,	// (0x0004bc08) grid_app_pane_ParamLimits

0xc9a7,	// (0x0004bc08) grid_app_pane

0xc9df,	// (0x0004bc40) scroll_pane_cp15_ParamLimits

0xc9df,	// (0x0004bc40) scroll_pane_cp15

0xc9f8,	// (0x0004bc59) cell_app_pane_ParamLimits

0xc9f8,	// (0x0004bc59) cell_app_pane

0xca3d,	// (0x0004bc9e) cell_app_pane_g1_ParamLimits

0xca3d,	// (0x0004bc9e) cell_app_pane_g1

0x399c,	// (0x00042bfd) cell_app_pane_g2_ParamLimits

0x399c,	// (0x00042bfd) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0004e956) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0004e956) cell_app_pane_g

0x39a8,	// (0x00042c09) cell_app_pane_t1_ParamLimits

0x39a8,	// (0x00042c09) cell_app_pane_t1

0x39bf,	// (0x00042c20) grid_highlight_pane_ParamLimits

0x39bf,	// (0x00042c20) grid_highlight_pane

0x35be,	// (0x0004281f) cell_highlight_pane_g1

0x35c6,	// (0x00042827) cell_highlight_pane_g2

0x35ce,	// (0x0004282f) cell_highlight_pane_g3

0x35d6,	// (0x00042837) cell_highlight_pane_g4

0x35de,	// (0x0004283f) cell_highlight_pane_g5

0x35e6,	// (0x00042847) cell_highlight_pane_g6

0x35ee,	// (0x0004284f) cell_highlight_pane_g7

0x35f6,	// (0x00042857) cell_highlight_pane_g8

0x35fe,	// (0x0004285f) cell_highlight_pane_g9

0x2c01,	// (0x00041e62) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0004e904) cell_highlight_pane_g

0x39d0,	// (0x00042c31) bg_scroll_pane

0x1525,	// (0x00040786) scroll_handle_pane

0x3a17,	// (0x00042c78) scroll_bg_pane_g1

0x3a2c,	// (0x00042c8d) scroll_bg_pane_g2

0x3a44,	// (0x00042ca5) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0004e95b) scroll_bg_pane_g

0x3a59,	// (0x00042cba) scroll_handle_focus_pane_ParamLimits

0x3a59,	// (0x00042cba) scroll_handle_focus_pane

0x3a17,	// (0x00042c78) scroll_handle_pane_g1

0x3a66,	// (0x00042cc7) scroll_handle_pane_g2

0x3a44,	// (0x00042ca5) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0004e962) scroll_handle_pane_g

0x360f,	// (0x00042870) bg_popup_sub_pane_cp21_ParamLimits

0x360f,	// (0x00042870) bg_popup_sub_pane_cp21

0x3a7a,	// (0x00042cdb) popup_fep_japan_predictive_window_t1_ParamLimits

0x3a7a,	// (0x00042cdb) popup_fep_japan_predictive_window_t1

0x3a94,	// (0x00042cf5) popup_fep_japan_predictive_window_t2_ParamLimits

0x3a94,	// (0x00042cf5) popup_fep_japan_predictive_window_t2

0x3ac7,	// (0x00042d28) popup_fep_japan_predictive_window_t3_ParamLimits

0x3ac7,	// (0x00042d28) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0004e969) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0004e969) popup_fep_japan_predictive_window_t

0x2c0b,	// (0x00041e6c) bg_popup_sub_pane_cp23

0x3afe,	// (0x00042d5f) listscroll_japin_cand_pane

0x3b06,	// (0x00042d67) popup_fep_japan_candidate_window_t1

0x3b14,	// (0x00042d75) candidate_pane_ParamLimits

0x3b14,	// (0x00042d75) candidate_pane

0x3b26,	// (0x00042d87) scroll_pane_cp30

0x3b2e,	// (0x00042d8f) list_single_popup_jap_candidate_pane_ParamLimits

0x3b2e,	// (0x00042d8f) list_single_popup_jap_candidate_pane

0x2c0b,	// (0x00041e6c) list_highlight_pane_cp30

0x3b43,	// (0x00042da4) list_single_popup_jap_candidate_pane_t1

0x3b52,	// (0x00042db3) level_1_signal

0x3b5f,	// (0x00042dc0) level_2_signal

0x3b6c,	// (0x00042dcd) level_3_signal

0x3b79,	// (0x00042dda) level_4_signal

0x3b86,	// (0x00042de7) level_5_signal

0x3b93,	// (0x00042df4) level_6_signal

0x3ba0,	// (0x00042e01) level_7_signal

0x3b52,	// (0x00042db3) level_1_battery

0x3b5f,	// (0x00042dc0) level_2_battery

0x3b6c,	// (0x00042dcd) level_3_battery

0x3b79,	// (0x00042dda) level_4_battery

0x3b86,	// (0x00042de7) level_5_battery

0x3b93,	// (0x00042df4) level_6_battery

0x3ba0,	// (0x00042e01) level_7_battery

0x3bc5,	// (0x00042e26) list_menu_pane_ParamLimits

0x3bc5,	// (0x00042e26) list_menu_pane

0x3bd6,	// (0x00042e37) scroll_pane_cp25_ParamLimits

0x3bd6,	// (0x00042e37) scroll_pane_cp25

0x3bef,	// (0x00042e50) list_double2_graphic_pane_cp2_ParamLimits

0x3bef,	// (0x00042e50) list_double2_graphic_pane_cp2

0x3bef,	// (0x00042e50) list_double2_large_graphic_pane_cp2_ParamLimits

0x3bef,	// (0x00042e50) list_double2_large_graphic_pane_cp2

0x3bef,	// (0x00042e50) list_double2_pane_cp2_ParamLimits

0x3bef,	// (0x00042e50) list_double2_pane_cp2

0x3bef,	// (0x00042e50) list_double_graphic_pane_cp2_ParamLimits

0x3bef,	// (0x00042e50) list_double_graphic_pane_cp2

0x3bef,	// (0x00042e50) list_double_large_graphic_pane_cp2_ParamLimits

0x3bef,	// (0x00042e50) list_double_large_graphic_pane_cp2

0x3bef,	// (0x00042e50) list_double_number_pane_cp2_ParamLimits

0x3bef,	// (0x00042e50) list_double_number_pane_cp2

0x3bef,	// (0x00042e50) list_double_pane_cp2_ParamLimits

0x3bef,	// (0x00042e50) list_double_pane_cp2

0xca70,	// (0x0004bcd1) list_single_2graphic_pane_cp2_ParamLimits

0xca70,	// (0x0004bcd1) list_single_2graphic_pane_cp2

0xca70,	// (0x0004bcd1) list_single_graphic_heading_pane_cp2_ParamLimits

0xca70,	// (0x0004bcd1) list_single_graphic_heading_pane_cp2

0xca70,	// (0x0004bcd1) list_single_graphic_pane_cp2_ParamLimits

0xca70,	// (0x0004bcd1) list_single_graphic_pane_cp2

0xca70,	// (0x0004bcd1) list_single_heading_pane_cp2_ParamLimits

0xca70,	// (0x0004bcd1) list_single_heading_pane_cp2

0x3c2c,	// (0x00042e8d) list_single_large_graphic_pane_cp2_ParamLimits

0x3c2c,	// (0x00042e8d) list_single_large_graphic_pane_cp2

0xca70,	// (0x0004bcd1) list_single_number_heading_pane_cp2_ParamLimits

0xca70,	// (0x0004bcd1) list_single_number_heading_pane_cp2

0xca70,	// (0x0004bcd1) list_single_number_pane_cp2_ParamLimits

0xca70,	// (0x0004bcd1) list_single_number_pane_cp2

0xca70,	// (0x0004bcd1) list_single_pane_cp2_ParamLimits

0xca70,	// (0x0004bcd1) list_single_pane_cp2

0x3c82,	// (0x00042ee3) bg_popup_sub_pane_cp22

0x15d7,	// (0x00040838) popup_side_volume_key_window_g1

0x1601,	// (0x00040862) popup_side_volume_key_window_t1

0x161d,	// (0x0004087e) volume_small_pane_cp1

0x2f66,	// (0x000421c7) bg_popup_sub_pane_cp24_ParamLimits

0x2f66,	// (0x000421c7) bg_popup_sub_pane_cp24

0x3c98,	// (0x00042ef9) fep_china_uni_candidate_pane_ParamLimits

0x3c98,	// (0x00042ef9) fep_china_uni_candidate_pane

0x3cac,	// (0x00042f0d) fep_china_uni_entry_pane

0x3cbc,	// (0x00042f1d) popup_fep_china_uni_window_g1

0x3cd8,	// (0x00042f39) fep_china_uni_entry_pane_g1

0x3ce0,	// (0x00042f41) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0004e996) fep_china_uni_entry_pane_g

0x3ce8,	// (0x00042f49) fep_entry_item_pane

0x3cf2,	// (0x00042f53) fep_candidate_item_pane

0x3cfa,	// (0x00042f5b) fep_china_uni_candidate_pane_g1

0x3d02,	// (0x00042f63) fep_china_uni_candidate_pane_g2

0x3d0a,	// (0x00042f6b) fep_china_uni_candidate_pane_g3

0x3d12,	// (0x00042f73) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0004e99b) fep_china_uni_candidate_pane_g

0x2c01,	// (0x00041e62) fep_entry_item_pane_g1

0x3d1a,	// (0x00042f7b) fep_entry_item_pane_t1_ParamLimits

0x3d1a,	// (0x00042f7b) fep_entry_item_pane_t1

0x3d30,	// (0x00042f91) fep_candidate_item_pane_t1_ParamLimits

0x3d30,	// (0x00042f91) fep_candidate_item_pane_t1

0x3d45,	// (0x00042fa6) fep_candidate_item_pane_t2_ParamLimits

0x3d45,	// (0x00042fa6) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0004e9a4) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0004e9a4) fep_candidate_item_pane_t

0x2ceb,	// (0x00041f4c) list_highlight_pane_cp31_ParamLimits

0x2ceb,	// (0x00041f4c) list_highlight_pane_cp31

0x3d57,	// (0x00042fb8) level_1_signal_lsc

0x3d60,	// (0x00042fc1) level_2_signal_lsc

0x3d69,	// (0x00042fca) level_3_signal_lsc

0x3d72,	// (0x00042fd3) level_4_signal_lsc

0x3d7b,	// (0x00042fdc) level_5_signal_lsc

0x3d84,	// (0x00042fe5) level_6_signal_lsc

0x3d8d,	// (0x00042fee) level_7_signal_lsc

0x3d8d,	// (0x00042fee) level_1_battery_lsc

0x3d96,	// (0x00042ff7) level_2_battery_lsc

0x3d9f,	// (0x00043000) level_3_battery_lsc

0x3da8,	// (0x00043009) level_4_battery_lsc

0x3db1,	// (0x00043012) level_5_battery_lsc

0x3dba,	// (0x0004301b) level_6_battery_lsc

0x3d57,	// (0x00042fb8) level_7_battery_lsc

0x3dc3,	// (0x00043024) scroll_handle_focus_pane_g1

0x3dcc,	// (0x0004302d) scroll_handle_focus_pane_g2

0x3dd5,	// (0x00043036) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0004e9a9) scroll_handle_focus_pane_g

0xb90e,	// (0x0004ab6f) list_single_2graphic_pane_g1_ParamLimits

0xb90e,	// (0x0004ab6f) list_single_2graphic_pane_g1

0xbd0f,	// (0x0004af70) list_single_2graphic_pane_g2_ParamLimits

0xbd0f,	// (0x0004af70) list_single_2graphic_pane_g2

0x19a9,	// (0x00040c0a) list_single_2graphic_pane_g3_ParamLimits

0x19a9,	// (0x00040c0a) list_single_2graphic_pane_g3

0xbd3d,	// (0x0004af9e) list_single_2graphic_pane_g4_ParamLimits

0xbd3d,	// (0x0004af9e) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0004e9b0) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0004e9b0) list_single_2graphic_pane_g

0xb91a,	// (0x0004ab7b) list_single_2graphic_pane_t1_ParamLimits

0xb91a,	// (0x0004ab7b) list_single_2graphic_pane_t1

0xb948,	// (0x0004aba9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb948,	// (0x0004aba9) list_double2_graphic_large_graphic_pane_g1

0xbd0f,	// (0x0004af70) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbd0f,	// (0x0004af70) list_double2_graphic_large_graphic_pane_g2

0x19a9,	// (0x00040c0a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x19a9,	// (0x00040c0a) list_double2_graphic_large_graphic_pane_g3

0xb95a,	// (0x0004abbb) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb95a,	// (0x0004abbb) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0004e9b9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0004e9b9) list_double2_graphic_large_graphic_pane_g

0xb966,	// (0x0004abc7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb966,	// (0x0004abc7) list_double2_graphic_large_graphic_pane_t1

0xb97c,	// (0x0004abdd) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb97c,	// (0x0004abdd) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0004e9c2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0004e9c2) list_double2_graphic_large_graphic_pane_t

0x3f1d,	// (0x0004317e) popup_fast_swap_window_ParamLimits

0x3f1d,	// (0x0004317e) popup_fast_swap_window

0x3f39,	// (0x0004319a) popup_side_volume_key_window

0x3f55,	// (0x000431b6) stacon_top_pane

0x3f5f,	// (0x000431c0) status_pane_ParamLimits

0x3f5f,	// (0x000431c0) status_pane

0x3f55,	// (0x000431b6) status_small_pane

0x2c0b,	// (0x00041e6c) control_pane

0x2c0b,	// (0x00041e6c) stacon_bottom_pane

0x353a,	// (0x0004279b) scroll_pane_cp121

0x3531,	// (0x00042792) set_content_pane

0x3df9,	// (0x0004305a) bg_active_tab_pane_g1_cp1

0x3de7,	// (0x00043048) bg_active_tab_pane_g2_cp1

0x3e02,	// (0x00043063) bg_active_tab_pane_g3_cp1

0x3df9,	// (0x0004305a) bg_passive_tab_pane_g1_cp1

0x3de7,	// (0x00043048) bg_passive_tab_pane_g2_cp1

0x3e02,	// (0x00043063) bg_passive_tab_pane_g3_cp1

0xcad0,	// (0x0004bd31) bg_active_tab_pane_g1_cp2

0x3de7,	// (0x00043048) bg_active_tab_pane_g2_cp2

0xcad9,	// (0x0004bd3a) bg_active_tab_pane_g3_cp2

0xcad0,	// (0x0004bd31) bg_passive_tab_pane_g1_cp2

0x3de7,	// (0x00043048) bg_passive_tab_pane_g2_cp2

0xcad9,	// (0x0004bd3a) bg_passive_tab_pane_g3_cp2

0xcae2,	// (0x0004bd43) bg_active_tab_pane_g1_cp3

0x3de7,	// (0x00043048) bg_active_tab_pane_g2_cp3

0xcaeb,	// (0x0004bd4c) bg_active_tab_pane_g3_cp3

0xcae2,	// (0x0004bd43) bg_passive_tab_pane_g1_cp3

0x3de7,	// (0x00043048) bg_passive_tab_pane_g2_cp3

0xcaeb,	// (0x0004bd4c) bg_passive_tab_pane_g3_cp3

0xcaf4,	// (0x0004bd55) bg_active_tab_pane_g1_cp4

0x3de7,	// (0x00043048) bg_active_tab_pane_g2_cp4

0xcafd,	// (0x0004bd5e) bg_active_tab_pane_g3_cp4

0xcaf4,	// (0x0004bd55) bg_passive_tab_pane_g1_cp4

0x3de7,	// (0x00043048) bg_passive_tab_pane_g2_cp4

0xcafd,	// (0x0004bd5e) bg_passive_tab_pane_g3_cp4

0x3e71,	// (0x000430d2) bg_active_tab_pane_g1_cp5

0x3de7,	// (0x00043048) bg_active_tab_pane_g2_cp5

0x3e7a,	// (0x000430db) bg_active_tab_pane_g3_cp5

0x3e71,	// (0x000430d2) bg_passive_tab_pane_g1_cp5

0x3de7,	// (0x00043048) bg_passive_tab_pane_g2_cp5

0x3e7a,	// (0x000430db) bg_passive_tab_pane_g3_cp5

0xcb06,	// (0x0004bd67) list_set_graphic_pane_ParamLimits

0xcb06,	// (0x0004bd67) list_set_graphic_pane

0x2c0b,	// (0x00041e6c) bg_set_opt_pane_cp4

0xcb18,	// (0x0004bd79) list_set_graphic_pane_g1_ParamLimits

0xcb18,	// (0x0004bd79) list_set_graphic_pane_g1

0xcb24,	// (0x0004bd85) list_set_graphic_pane_g2_ParamLimits

0xcb24,	// (0x0004bd85) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0004e9c7) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0004e9c7) list_set_graphic_pane_g

0x0009,

0xfacb,	// (0x0004ed2c) volume_small_pane_cp_g

0x3ed0,	// (0x00043131) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3ed0,	// (0x00043131) list_double2_large_graphic_pane_g1_cp2

0x3edc,	// (0x0004313d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3edc,	// (0x0004313d) list_double2_large_graphic_pane_g2_cp2

0x3eed,	// (0x0004314e) list_double2_large_graphic_pane_g3_cp2

0x3ef5,	// (0x00043156) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3ef5,	// (0x00043156) list_double2_large_graphic_pane_t1_cp2

0x3f0b,	// (0x0004316c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3f0b,	// (0x0004316c) list_double2_large_graphic_pane_t2_cp2

0x60f8,	// (0x00045359) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x60f8,	// (0x00045359) list_double_large_graphic_pane_g1_cp2

0x6109,	// (0x0004536a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6109,	// (0x0004536a) list_double_large_graphic_pane_g2_cp2

0x407b,	// (0x000432dc) list_double_large_graphic_pane_g3_cp2

0x611a,	// (0x0004537b) list_double_large_graphic_pane_g4_cp

0x6122,	// (0x00045383) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6122,	// (0x00045383) list_double_large_graphic_pane_t1_cp2

0x6139,	// (0x0004539a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6139,	// (0x0004539a) list_double_large_graphic_pane_t2_cp2

0x3f6d,	// (0x000431ce) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3f6d,	// (0x000431ce) list_double2_graphic_pane_g1_cp2

0x3f7b,	// (0x000431dc) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3f7b,	// (0x000431dc) list_double2_graphic_pane_g2_cp2

0x3f8c,	// (0x000431ed) list_double2_graphic_pane_g3_cp2

0x3f96,	// (0x000431f7) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3f96,	// (0x000431f7) list_double2_graphic_pane_t1_cp2

0x3fac,	// (0x0004320d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3fac,	// (0x0004320d) list_double2_graphic_pane_t2_cp2

0x3fbe,	// (0x0004321f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3fbe,	// (0x0004321f) list_single_number_heading_pane_g1_cp2

0x3fca,	// (0x0004322b) list_single_number_heading_pane_g2_cp2

0x3fd2,	// (0x00043233) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3fd2,	// (0x00043233) list_single_number_heading_pane_t1_cp2

0x3fe8,	// (0x00043249) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3fe8,	// (0x00043249) list_single_number_heading_pane_t2_cp2

0x4006,	// (0x00043267) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4006,	// (0x00043267) list_single_number_heading_pane_t3_cp2

0x3fbe,	// (0x0004321f) list_single_heading_pane_g1_cp2_ParamLimits

0x3fbe,	// (0x0004321f) list_single_heading_pane_g1_cp2

0x3fca,	// (0x0004322b) list_single_heading_pane_g2_cp2

0x3fd2,	// (0x00043233) list_single_heading_pane_t1_cp2_ParamLimits

0x3fd2,	// (0x00043233) list_single_heading_pane_t1_cp2

0x5f00,	// (0x00045161) list_single_heading_pane_t2_cp2_ParamLimits

0x5f00,	// (0x00045161) list_single_heading_pane_t2_cp2

0x5e51,	// (0x000450b2) list_double_graphic_pane_g1_cp2_ParamLimits

0x5e51,	// (0x000450b2) list_double_graphic_pane_g1_cp2

0x5e30,	// (0x00045091) list_double_graphic_pane_g2_cp2_ParamLimits

0x5e30,	// (0x00045091) list_double_graphic_pane_g2_cp2

0x5e5d,	// (0x000450be) list_double_graphic_pane_g3_cp2

0x5e65,	// (0x000450c6) list_double_graphic_pane_t1_cp2_ParamLimits

0x5e65,	// (0x000450c6) list_double_graphic_pane_t1_cp2

0x5e7b,	// (0x000450dc) list_double_graphic_pane_t2_cp2_ParamLimits

0x5e7b,	// (0x000450dc) list_double_graphic_pane_t2_cp2

0x3ffa,	// (0x0004325b) list_double_number_pane_g1_cp2_ParamLimits

0x3ffa,	// (0x0004325b) list_double_number_pane_g1_cp2

0x407b,	// (0x000432dc) list_double_number_pane_g2_cp2

0x5e06,	// (0x00045067) list_double_number_pane_t1_cp2_ParamLimits

0x5e06,	// (0x00045067) list_double_number_pane_t1_cp2

0x5e1a,	// (0x0004507b) list_double_number_pane_t2_cp2_ParamLimits

0x5e1a,	// (0x0004507b) list_double_number_pane_t2_cp2

0x5e3f,	// (0x000450a0) list_double_number_pane_t3_cp2_ParamLimits

0x5e3f,	// (0x000450a0) list_double_number_pane_t3_cp2

0x5cef,	// (0x00044f50) list_single_graphic_pane_g1_cp2_ParamLimits

0x5cef,	// (0x00044f50) list_single_graphic_pane_g1_cp2

0x40d3,	// (0x00043334) list_single_graphic_pane_g2_cp2_ParamLimits

0x40d3,	// (0x00043334) list_single_graphic_pane_g2_cp2

0x40df,	// (0x00043340) list_single_graphic_pane_g3_cp2

0x5cc5,	// (0x00044f26) list_single_graphic_pane_t1_cp2_ParamLimits

0x5cc5,	// (0x00044f26) list_single_graphic_pane_t1_cp2

0x40d3,	// (0x00043334) list_single_number_pane_g1_cp2_ParamLimits

0x40d3,	// (0x00043334) list_single_number_pane_g1_cp2

0x40df,	// (0x00043340) list_single_number_pane_g2_cp2

0x5cc5,	// (0x00044f26) list_single_number_pane_t1_cp2_ParamLimits

0x5cc5,	// (0x00044f26) list_single_number_pane_t1_cp2

0x5cdb,	// (0x00044f3c) list_single_number_pane_t2_cp2_ParamLimits

0x5cdb,	// (0x00044f3c) list_single_number_pane_t2_cp2

0x3edc,	// (0x0004313d) list_double2_pane_g1_cp2_ParamLimits

0x3edc,	// (0x0004313d) list_double2_pane_g1_cp2

0x3eed,	// (0x0004314e) list_double2_pane_g2_cp2

0x4053,	// (0x000432b4) list_double2_pane_t1_cp2_ParamLimits

0x4053,	// (0x000432b4) list_double2_pane_t1_cp2

0x4069,	// (0x000432ca) list_double2_pane_t2_cp2_ParamLimits

0x4069,	// (0x000432ca) list_double2_pane_t2_cp2

0x3ffa,	// (0x0004325b) list_double_pane_g1_cp2_ParamLimits

0x3ffa,	// (0x0004325b) list_double_pane_g1_cp2

0x407b,	// (0x000432dc) list_double_pane_g2_cp2

0x4083,	// (0x000432e4) list_double_pane_t1_cp2_ParamLimits

0x4083,	// (0x000432e4) list_double_pane_t1_cp2

0x4099,	// (0x000432fa) list_double_pane_t2_cp2_ParamLimits

0x4099,	// (0x000432fa) list_double_pane_t2_cp2

0x40c3,	// (0x00043324) list_single_pane_cp2_g3

0x40d3,	// (0x00043334) list_single_pane_g1_cp2_ParamLimits

0x40d3,	// (0x00043334) list_single_pane_g1_cp2

0x40df,	// (0x00043340) list_single_pane_g2_cp2

0x40e7,	// (0x00043348) list_single_pane_t1_cp2_ParamLimits

0x40e7,	// (0x00043348) list_single_pane_t1_cp2

0x40ff,	// (0x00043360) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x40ff,	// (0x00043360) list_single_large_graphic_pane_g1_cp2

0x410b,	// (0x0004336c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x410b,	// (0x0004336c) list_single_large_graphic_pane_g2_cp2

0x4117,	// (0x00043378) list_single_large_graphic_pane_g3_cp2

0x411f,	// (0x00043380) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x411f,	// (0x00043380) list_single_large_graphic_pane_g4_cp1

0x4139,	// (0x0004339a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4139,	// (0x0004339a) list_single_large_graphic_pane_t1_cp2

0x5c91,	// (0x00044ef2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5c91,	// (0x00044ef2) list_single_graphic_heading_pane_g1_cp2

0x5c5e,	// (0x00044ebf) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5c5e,	// (0x00044ebf) list_single_graphic_heading_pane_g4_cp2

0x40df,	// (0x00043340) list_single_graphic_heading_pane_g5_cp2

0x5c9d,	// (0x00044efe) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5c9d,	// (0x00044efe) list_single_graphic_heading_pane_t1_cp2

0x5cb3,	// (0x00044f14) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5cb3,	// (0x00044f14) list_single_graphic_heading_pane_t2_cp2

0x5c52,	// (0x00044eb3) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5c52,	// (0x00044eb3) list_single_2graphic_pane_g1_cp2

0x5c5e,	// (0x00044ebf) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5c5e,	// (0x00044ebf) list_single_2graphic_pane_g2_cp2

0x40df,	// (0x00043340) list_single_2graphic_pane_g3_cp2

0x5c6f,	// (0x00044ed0) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5c6f,	// (0x00044ed0) list_single_2graphic_pane_g4_cp2

0x5c7b,	// (0x00044edc) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5c7b,	// (0x00044edc) list_single_2graphic_pane_t1_cp2

0x2c01,	// (0x00041e62) list_highlight_pane_g10_cp1

0x582a,	// (0x00044a8b) list_highlight_pane_g1_cp1

0x5832,	// (0x00044a93) list_highlight_pane_g2_cp1

0x583a,	// (0x00044a9b) list_highlight_pane_g3_cp1

0x5842,	// (0x00044aa3) list_highlight_pane_g4_cp1

0x584a,	// (0x00044aab) list_highlight_pane_g5_cp1

0x5852,	// (0x00044ab3) list_highlight_pane_g6_cp1

0x585a,	// (0x00044abb) list_highlight_pane_g7_cp1

0x5862,	// (0x00044ac3) list_highlight_pane_g8_cp1

0x586a,	// (0x00044acb) list_highlight_pane_g9_cp1

0xd7a1,	// (0x0004ca02) form_field_slider_pane_t3

0xd7af,	// (0x0004ca10) form_field_slider_pane_t4

0x5766,	// (0x000449c7) slider_form_pane_ParamLimits

0x5766,	// (0x000449c7) slider_form_pane

0x2c0b,	// (0x00041e6c) control_abbreviations

0x2c0b,	// (0x00041e6c) control_conventions

0x2c0b,	// (0x00041e6c) control_definitions

0x2c0b,	// (0x00041e6c) format_table_attribute

0x5f4a,	// (0x000451ab) bg_popup_preview_window_pane_g9

0x2c0b,	// (0x00041e6c) format_table_data2

0x2c0b,	// (0x00041e6c) format_table_data3

0x2c0b,	// (0x00041e6c) format_table_data_example

0x0008,

0x2c0b,	// (0x00041e6c) intro_purpose

0xf8ef,	// (0x0004eb50) bg_popup_preview_window_pane_g

0x2c0b,	// (0x00041e6c) texts_category

0x2c0b,	// (0x00041e6c) texts_graphics

0x414f,	// (0x000433b0) text_digital

0x415e,	// (0x000433bf) text_primary

0x416d,	// (0x000433ce) text_primary_small

0x417c,	// (0x000433dd) text_secondary

0x418b,	// (0x000433ec) text_title

0x6656,	// (0x000458b7) bg_passive_tab_pane_g1_cp3_srt

0x3de7,	// (0x00043048) bg_passive_tab_pane_g2_cp3_srt

0x665f,	// (0x000458c0) bg_passive_tab_pane_g3_cp3_srt

0x2f66,	// (0x000421c7) bg_active_tab_pane_cp3_srt_ParamLimits

0x2f66,	// (0x000421c7) bg_active_tab_pane_cp3_srt

0x6668,	// (0x000458c9) tabs_4_active_pane_srt_g1

0xdb33,	// (0x0004cd94) tabs_4_active_pane_srt_t1_ParamLimits

0xdb33,	// (0x0004cd94) tabs_4_active_pane_srt_t1

0x6656,	// (0x000458b7) bg_active_tab_pane_g1_cp3_copy1

0x3de7,	// (0x00043048) bg_active_tab_pane_g2_cp3_copy1

0x665f,	// (0x000458c0) bg_active_tab_pane_g3_cp3_copy1

0x2ceb,	// (0x00041f4c) tabs_2_long_active_pane_srt_ParamLimits

0x2ceb,	// (0x00041f4c) tabs_2_long_active_pane_srt

0x2ceb,	// (0x00041f4c) tabs_2_long_passive_pane_srt_ParamLimits

0x2ceb,	// (0x00041f4c) tabs_2_long_passive_pane_srt

0x44f8,	// (0x00043759) bg_passive_tab_pane_cp4_srt_ParamLimits

0x44f8,	// (0x00043759) bg_passive_tab_pane_cp4_srt

0x638e,	// (0x000455ef) bg_passive_tab_pane_g1_cp4_srt

0x3de7,	// (0x00043048) bg_passive_tab_pane_g2_cp4_srt

0x6397,	// (0x000455f8) bg_passive_tab_pane_g3_cp4_srt

0x2ceb,	// (0x00041f4c) bg_active_tab_pane_cp4_srt_ParamLimits

0x2ceb,	// (0x00041f4c) bg_active_tab_pane_cp4_srt

0xd941,	// (0x0004cba2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd941,	// (0x0004cba2) tabs_2_long_active_pane_srt_t1

0x638e,	// (0x000455ef) bg_active_tab_pane_g1_cp4_srt

0x3de7,	// (0x00043048) bg_active_tab_pane_g2_cp4_srt

0x6397,	// (0x000455f8) bg_active_tab_pane_g3_cp4_srt

0x2f66,	// (0x000421c7) tabs_3_long_active_pane_srt_ParamLimits

0x2f66,	// (0x000421c7) tabs_3_long_active_pane_srt

0x2f66,	// (0x000421c7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2f66,	// (0x000421c7) tabs_3_long_passive_pane_cp_srt

0x2f66,	// (0x000421c7) tabs_3_long_passive_pane_srt_ParamLimits

0x2f66,	// (0x000421c7) tabs_3_long_passive_pane_srt

0x44f8,	// (0x00043759) bg_passive_tab_pane_cp5_srt_ParamLimits

0x44f8,	// (0x00043759) bg_passive_tab_pane_cp5_srt

0x3e71,	// (0x000430d2) bg_passive_tab_pane_g1_cp5_srt

0x3de7,	// (0x00043048) bg_passive_tab_pane_g2_cp5_srt

0x3e7a,	// (0x000430db) bg_passive_tab_pane_g3_cp5_srt

0x2ceb,	// (0x00041f4c) bg_active_tab_pane_cp5_srt_ParamLimits

0x2ceb,	// (0x00041f4c) bg_active_tab_pane_cp5_srt

0xd92b,	// (0x0004cb8c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd92b,	// (0x0004cb8c) tabs_3_long_active_pane_srt_t1

0x3e71,	// (0x000430d2) bg_active_tab_pane_g1_cp5_srt

0x3de7,	// (0x00043048) bg_active_tab_pane_g2_cp5_srt

0x3e7a,	// (0x000430db) bg_active_tab_pane_g3_cp5_srt

0x636e,	// (0x000455cf) navi_text_pane_srt_t1

0x6366,	// (0x000455c7) navi_icon_pane_srt_g1

0x435e,	// (0x000435bf) midp_editing_number_pane_srt

0x419a,	// (0x000433fb) midp_ticker_pane_srt

0x4366,	// (0x000435c7) midp_ticker_pane_srt_g1

0x436e,	// (0x000435cf) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0004e9e6) midp_ticker_pane_srt_g

0x4376,	// (0x000435d7) midp_ticker_pane_srt_t1

0x6357,	// (0x000455b8) midp_editing_number_pane_t1_copy1

0xcb48,	// (0x0004bda9) listscroll_midp_pane

0xcb48,	// (0x0004bda9) midp_form_pane

0x4210,	// (0x00043471) midp_info_popup_window_ParamLimits

0x4210,	// (0x00043471) midp_info_popup_window

0x360f,	// (0x00042870) bg_popup_sub_pane_cp50_ParamLimits

0x360f,	// (0x00042870) bg_popup_sub_pane_cp50

0x5462,	// (0x000446c3) listscroll_midp_info_pane_ParamLimits

0x5462,	// (0x000446c3) listscroll_midp_info_pane

0x544a,	// (0x000446ab) listscroll_form_midp_pane_ParamLimits

0x544a,	// (0x000446ab) listscroll_form_midp_pane

0x5456,	// (0x000446b7) scroll_bar_cp050

0xd795,	// (0x0004c9f6) list_midp_pane

0x7072,	// (0x000462d3) signal_pane_g2_cp

0x5358,	// (0x000445b9) listscroll_midp_info_pane_t1_ParamLimits

0x5358,	// (0x000445b9) listscroll_midp_info_pane_t1

0x5370,	// (0x000445d1) listscroll_midp_info_pane_t2_ParamLimits

0x5370,	// (0x000445d1) listscroll_midp_info_pane_t2

0x53ae,	// (0x0004460f) listscroll_midp_info_pane_t3_ParamLimits

0x53ae,	// (0x0004460f) listscroll_midp_info_pane_t3

0x53e8,	// (0x00044649) listscroll_midp_info_pane_t4_ParamLimits

0x53e8,	// (0x00044649) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0004ea8b) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0004ea8b) listscroll_midp_info_pane_t

0x36d1,	// (0x00042932) scroll_pane_cp21

0x52f6,	// (0x00044557) form_midp_field_choice_group_pane

0x52ff,	// (0x00044560) form_midp_field_text_pane

0x533e,	// (0x0004459f) form_midp_field_time_pane

0x5346,	// (0x000445a7) form_midp_gauge_slider_pane

0x534f,	// (0x000445b0) form_midp_gauge_wait_pane

0x2c0b,	// (0x00041e6c) form_midp_image_pane

0xb98e,	// (0x0004abef) list_single_midp_pane_ParamLimits

0xb98e,	// (0x0004abef) list_single_midp_pane

0xd773,	// (0x0004c9d4) form_midp_field_text_pane_t1

0x50a0,	// (0x00044301) input_focus_pane_cp050

0x52e5,	// (0x00044546) list_midp_form_text_pane

0x527d,	// (0x000444de) form_midp_field_choice_group_pane_t1

0x528b,	// (0x000444ec) input_focus_pane_cp051

0x529f,	// (0x00044500) list_midp_choice_pane

0x2c0b,	// (0x00041e6c) status_idle_pane

0x5261,	// (0x000444c2) form_midp_field_time_pane_t1

0x2c01,	// (0x00041e62) wait_anim_pane_g2_copy1

0x526f,	// (0x000444d0) form_midp_field_time_pane_t2

0x0001,

0x42be,	// (0x0004351f) aid_navinavi_width_2_pane

0xf825,	// (0x0004ea86) form_midp_field_time_pane_t

0x2c0b,	// (0x00041e6c) input_focus_pane_cp052

0x2c0b,	// (0x00041e6c) bg_input_focus_pane_cp040

0x5221,	// (0x00044482) form_midp_gauge_slider_pane_t1

0x522f,	// (0x00044490) form_midp_gauge_slider_pane_t2

0xd757,	// (0x0004c9b8) form_midp_gauge_slider_pane_t3

0xd765,	// (0x0004c9c6) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0004ea7d) form_midp_gauge_slider_pane_t

0x5259,	// (0x000444ba) form_midp_slider_pane

0x2ceb,	// (0x00041f4c) bg_input_focus_pane_cp041_ParamLimits

0x2ceb,	// (0x00041f4c) bg_input_focus_pane_cp041

0x51ee,	// (0x0004444f) form_midp_gauge_wait_pane_t1_ParamLimits

0x51ee,	// (0x0004444f) form_midp_gauge_wait_pane_t1

0x5200,	// (0x00044461) form_midp_gauge_wait_pane_t2_ParamLimits

0x5200,	// (0x00044461) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0004ea78) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0004ea78) form_midp_gauge_wait_pane_t

0x5212,	// (0x00044473) form_midp_wait_pane_ParamLimits

0x5212,	// (0x00044473) form_midp_wait_pane

0x51b8,	// (0x00044419) form_midp_image_pane_g1

0x51c1,	// (0x00044422) form_midp_image_pane_t1

0x51d0,	// (0x00044431) form_midp_image_pane_t2

0x51df,	// (0x00044440) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0004ea71) form_midp_image_pane_t

0x51af,	// (0x00044410) list_single_midp_pane_g1

0x093f,	// (0x0003fba0) list_single_midp_pane_t1

0xd742,	// (0x0004c9a3) list_midp_form_item_pane_ParamLimits

0xd742,	// (0x0004c9a3) list_midp_form_item_pane

0x4266,	// (0x000434c7) list_midp_form_item_pane_t1

0x4275,	// (0x000434d6) midp_ticker_pane_g1

0x4281,	// (0x000434e2) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0004e9cc) midp_ticker_pane_g

0xcbf0,	// (0x0004be51) midp_ticker_pane_t1

0xdaac,	// (0x0004cd0d) midp_editing_number_pane_t1

0x6586,	// (0x000457e7) midp_editing_number_pane

0x6595,	// (0x000457f6) midp_ticker_pane

0x6347,	// (0x000455a8) ai_message_heading_pane

0x2c0b,	// (0x00041e6c) bg_popup_window_pane_cp14

0x634f,	// (0x000455b0) listscroll_ai_message_pane

0x62d1,	// (0x00045532) ai_message_heading_pane_g1_ParamLimits

0x62d1,	// (0x00045532) ai_message_heading_pane_g1

0x62dd,	// (0x0004553e) ai_message_heading_pane_g2_ParamLimits

0x62dd,	// (0x0004553e) ai_message_heading_pane_g2

0x62e9,	// (0x0004554a) ai_message_heading_pane_g3_ParamLimits

0x62e9,	// (0x0004554a) ai_message_heading_pane_g3

0x62f5,	// (0x00045556) ai_message_heading_pane_g4_ParamLimits

0x62f5,	// (0x00045556) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0004ebb2) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0004ebb2) ai_message_heading_pane_g

0x6301,	// (0x00045562) ai_message_heading_pane_t1_ParamLimits

0x6301,	// (0x00045562) ai_message_heading_pane_t1

0x631b,	// (0x0004557c) ai_message_heading_pane_t2_ParamLimits

0x631b,	// (0x0004557c) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0004ebbb) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0004ebbb) ai_message_heading_pane_t

0x632d,	// (0x0004558e) bg_popup_heading_pane_cp1_ParamLimits

0x632d,	// (0x0004558e) bg_popup_heading_pane_cp1

0x62bf,	// (0x00045520) list_ai_message_pane_ParamLimits

0x62bf,	// (0x00045520) list_ai_message_pane

0x36d1,	// (0x00042932) scroll_pane_cp10

0x625b,	// (0x000454bc) list_ai_message_pane_g1

0x6263,	// (0x000454c4) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0004eb8f) list_ai_message_pane_g

0x626b,	// (0x000454cc) list_ai_message_pane_t1_ParamLimits

0x626b,	// (0x000454cc) list_ai_message_pane_t1

0x6280,	// (0x000454e1) list_ai_message_pane_t2_ParamLimits

0x6280,	// (0x000454e1) list_ai_message_pane_t2

0x6295,	// (0x000454f6) list_ai_message_pane_t3_ParamLimits

0x6295,	// (0x000454f6) list_ai_message_pane_t3

0x62aa,	// (0x0004550b) list_ai_message_pane_t4_ParamLimits

0x62aa,	// (0x0004550b) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0004eb94) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0004eb94) list_ai_message_pane_t

0xd90a,	// (0x0004cb6b) cell_ai_soft_ind_pane_ParamLimits

0xd90a,	// (0x0004cb6b) cell_ai_soft_ind_pane

0x429f,	// (0x00043500) cell_ai_soft_ind_pane_g1_ParamLimits

0x429f,	// (0x00043500) cell_ai_soft_ind_pane_g1

0x2c0b,	// (0x00041e6c) grid_highlight_cp1

0x42ac,	// (0x0004350d) text_secondary_cp56_ParamLimits

0x42ac,	// (0x0004350d) text_secondary_cp56

0x621b,	// (0x0004547c) example_general_pane_ParamLimits

0x621b,	// (0x0004547c) example_general_pane

0x6227,	// (0x00045488) example_parent_pane_g1_ParamLimits

0x6227,	// (0x00045488) example_parent_pane_g1

0x6233,	// (0x00045494) example_parent_pane_t1_ParamLimits

0x6233,	// (0x00045494) example_parent_pane_t1

0xd019,	// (0x0004c27a) popup_preview_text_window_ParamLimits

0xd019,	// (0x0004c27a) popup_preview_text_window

0x40cb,	// (0x0004332c) list_single_pane_cp2_g4

0x301c,	// (0x0004227d) bg_popup_preview_window_pane_ParamLimits

0x301c,	// (0x0004227d) bg_popup_preview_window_pane

0x5f52,	// (0x000451b3) popup_preview_text_window_t1_ParamLimits

0x5f52,	// (0x000451b3) popup_preview_text_window_t1

0x5f70,	// (0x000451d1) popup_preview_text_window_t2_ParamLimits

0x5f70,	// (0x000451d1) popup_preview_text_window_t2

0x5fb9,	// (0x0004521a) popup_preview_text_window_t3_ParamLimits

0x5fb9,	// (0x0004521a) popup_preview_text_window_t3

0x5ffe,	// (0x0004525f) popup_preview_text_window_t4_ParamLimits

0x5ffe,	// (0x0004525f) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0004eb63) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0004eb63) popup_preview_text_window_t

0x607c,	// (0x000452dd) scroll_pane_cp11

0x4fb0,	// (0x00044211) bg_popup_preview_window_pane_g1

0x5f12,	// (0x00045173) bg_popup_preview_window_pane_g2

0x5f1a,	// (0x0004517b) bg_popup_preview_window_pane_g3

0x5f22,	// (0x00045183) bg_popup_preview_window_pane_g4

0x5f2a,	// (0x0004518b) bg_popup_preview_window_pane_g5

0x5f32,	// (0x00045193) bg_popup_preview_window_pane_g6

0x5f3a,	// (0x0004519b) bg_popup_preview_window_pane_g7

0x5f42,	// (0x000451a3) bg_popup_preview_window_pane_g8

0x0ea0,	// (0x00040101) aid_popup_width_pane

0xcf95,	// (0x0004c1f6) popup_midp_note_alarm_window_ParamLimits

0xcf95,	// (0x0004c1f6) popup_midp_note_alarm_window

0x354b,	// (0x000427ac) data_form_pane_ParamLimits

0xb7f0,	// (0x0004aa51) form_field_data_pane_g1

0xb7fa,	// (0x0004aa5b) form_field_data_pane_t1_ParamLimits

0x3557,	// (0x000427b8) input_focus_pane_ParamLimits

0x3565,	// (0x000427c6) data_form_wide_pane_ParamLimits

0x0669,	// (0x0003f8ca) form_field_data_wide_pane_g1

0x0675,	// (0x0003f8d6) form_field_data_wide_pane_t1_ParamLimits

0x32c8,	// (0x00042529) input_focus_pane_cp6_ParamLimits

0xc95a,	// (0x0004bbbb) input_popup_find_pane_g1_ParamLimits

0xc95a,	// (0x0004bbbb) input_popup_find_pane_g1

0x1486,	// (0x000406e7) aid_navi_side_left_pane

0x149b,	// (0x000406fc) aid_navi_side_right_pane

0x5925,	// (0x00044b86) bg_popup_window_pane_cp30_ParamLimits

0x5925,	// (0x00044b86) bg_popup_window_pane_cp30

0x599f,	// (0x00044c00) popup_midp_note_alarm_window_g1_ParamLimits

0x599f,	// (0x00044c00) popup_midp_note_alarm_window_g1

0x59cf,	// (0x00044c30) popup_midp_note_alarm_window_t1_ParamLimits

0x59cf,	// (0x00044c30) popup_midp_note_alarm_window_t1

0x5a70,	// (0x00044cd1) popup_midp_note_alarm_window_t2_ParamLimits

0x5a70,	// (0x00044cd1) popup_midp_note_alarm_window_t2

0x5b1e,	// (0x00044d7f) popup_midp_note_alarm_window_t3_ParamLimits

0x5b1e,	// (0x00044d7f) popup_midp_note_alarm_window_t3

0x5b50,	// (0x00044db1) popup_midp_note_alarm_window_t4_ParamLimits

0x5b50,	// (0x00044db1) popup_midp_note_alarm_window_t4

0x5b76,	// (0x00044dd7) popup_midp_note_alarm_window_t5_ParamLimits

0x5b76,	// (0x00044dd7) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0004eb00) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0004eb00) popup_midp_note_alarm_window_t

0x5c22,	// (0x00044e83) wait_bar_pane_cp1_ParamLimits

0x5c22,	// (0x00044e83) wait_bar_pane_cp1

0x2c0b,	// (0x00041e6c) wait_anim_pane_copy1

0x2c0b,	// (0x00041e6c) wait_border_pane_copy1

0x560b,	// (0x0004486c) wait_border_pane_g1_copy1

0x068f,	// (0x0003f8f0) form_field_popup_pane_g1

0xb814,	// (0x0004aa75) form_field_popup_pane_t1_ParamLimits

0x3557,	// (0x000427b8) input_focus_pane_cp7_ParamLimits

0x3591,	// (0x000427f2) list_form_pane_ParamLimits

0x06af,	// (0x0003f910) form_field_popup_wide_pane_g1

0x06b7,	// (0x0003f918) form_field_popup_wide_pane_t1_ParamLimits

0x3557,	// (0x000427b8) input_focus_pane_cp8_ParamLimits

0x359d,	// (0x000427fe) list_form_wide_pane_ParamLimits

0x66e2,	// (0x00045943) aid_size_cell_graphic_pane

0xb893,	// (0x0004aaf4) data_form_pane_t1_ParamLimits

0xb9b8,	// (0x0004ac19) data_form_wide_pane_t1_ParamLimits

0xd3ce,	// (0x0004c62f) bg_status_flat_pane

0xc5a0,	// (0x0004b801) title_pane_t1_ParamLimits

0x2cb3,	// (0x00041f14) title_pane_t2_ParamLimits

0x2cd9,	// (0x00041f3a) title_pane_t3_ParamLimits

0xf573,	// (0x0004e7d4) title_pane_t_ParamLimits

0x3b52,	// (0x00042db3) level_1_signal_ParamLimits

0x3b5f,	// (0x00042dc0) level_2_signal_ParamLimits

0x3b6c,	// (0x00042dcd) level_3_signal_ParamLimits

0x3b79,	// (0x00042dda) level_4_signal_ParamLimits

0x3b86,	// (0x00042de7) level_5_signal_ParamLimits

0x3b93,	// (0x00042df4) level_6_signal_ParamLimits

0x3ba0,	// (0x00042e01) level_7_signal_ParamLimits

0x3b52,	// (0x00042db3) level_1_battery_ParamLimits

0x3b5f,	// (0x00042dc0) level_2_battery_ParamLimits

0x3b6c,	// (0x00042dcd) level_3_battery_ParamLimits

0x3b79,	// (0x00042dda) level_4_battery_ParamLimits

0x3b86,	// (0x00042de7) level_5_battery_ParamLimits

0x3b93,	// (0x00042df4) level_6_battery_ParamLimits

0x3ba0,	// (0x00042e01) level_7_battery_ParamLimits

0x582a,	// (0x00044a8b) bg_status_flat_pane_g1

0x5832,	// (0x00044a93) bg_status_flat_pane_g2

0x583a,	// (0x00044a9b) bg_status_flat_pane_g3

0x5842,	// (0x00044aa3) bg_status_flat_pane_g4

0x584a,	// (0x00044aab) bg_status_flat_pane_g5

0x5852,	// (0x00044ab3) bg_status_flat_pane_g6

0x585a,	// (0x00044abb) bg_status_flat_pane_g7

0xc634,	// (0x0004b895) tabs_3_active_pane_t1_ParamLimits

0xc634,	// (0x0004b895) tabs_3_passive_pane_t1_ParamLimits

0xc64e,	// (0x0004b8af) tabs_4_active_pane_t1_ParamLimits

0xc64e,	// (0x0004b8af) tabs_4_1_passive_pane_t1_ParamLimits

0xc970,	// (0x0004bbd1) tabs_2_active_pane_t1_ParamLimits

0xc970,	// (0x0004bbd1) tabs_2_passive_pane_t1_ParamLimits

0x2ceb,	// (0x00041f4c) bg_active_tab_pane_cp4_ParamLimits

0xc982,	// (0x0004bbe3) tabs_2_long_active_pane_t1_ParamLimits

0x44f8,	// (0x00043759) bg_passive_tab_pane_cp4_ParamLimits

0x1a0a,	// (0x00040c6b) list_single_midp_graphic_pane_t1_ParamLimits

0x2ceb,	// (0x00041f4c) bg_active_tab_pane_cp5_ParamLimits

0xc995,	// (0x0004bbf6) tabs_3_long_active_pane_t1_ParamLimits

0x44f8,	// (0x00043759) bg_passive_tab_pane_cp5_ParamLimits

0x1a0a,	// (0x00040c6b) list_single_midp_graphic_pane_t1

0xd3ce,	// (0x0004c62f) bg_status_flat_pane_ParamLimits

0x4c47,	// (0x00043ea8) indicator_pane_cp2_ParamLimits

0x4c47,	// (0x00043ea8) indicator_pane_cp2

0xd545,	// (0x0004c7a6) navi_pane_srt_ParamLimits

0xd545,	// (0x0004c7a6) navi_pane_srt

0x4d8f,	// (0x00043ff0) popup_clock_digital_analogue_window_cp1

0x2dc8,	// (0x00042029) indicator_pane_t1

0x419a,	// (0x000433fb) copy_highlight_pane

0x419a,	// (0x000433fb) cursor_graphics_pane

0x419a,	// (0x000433fb) graphic_within_text_pane

0x419a,	// (0x000433fb) link_highlight_pane

0x603f,	// (0x000452a0) popup_preview_text_window_t5_ParamLimits

0x603f,	// (0x000452a0) popup_preview_text_window_t5

0x42c6,	// (0x00043527) cursor_digital_pane

0x42c6,	// (0x00043527) cursor_primary_pane

0x42d7,	// (0x00043538) cursor_primary_small_pane

0x42df,	// (0x00043540) cursor_secondary_pane

0x42e7,	// (0x00043548) cursor_title_pane

0x42c6,	// (0x00043527) link_highlight_digital_pane

0x42ce,	// (0x0004352f) link_highlight_primary_pane

0x42d7,	// (0x00043538) link_highlight_primary_small_pane

0x42df,	// (0x00043540) link_highlight_secondary_pane

0x42e7,	// (0x00043548) link_highlight_title_pane

0x42c6,	// (0x00043527) copy_highlight_digital_pane

0x42c6,	// (0x00043527) copy_highlight_primary_pane

0x42d7,	// (0x00043538) copy_highlight_primary_small_pane

0x42df,	// (0x00043540) copy_highlight_secondary_pane

0x42e7,	// (0x00043548) copy_highlight_title_pane

0x42df,	// (0x00043540) graphic_text_digital_pane

0x58c8,	// (0x00044b29) graphic_text_primary_pane

0x58d1,	// (0x00044b32) graphic_text_primary_small_pane

0x42d7,	// (0x00043538) graphic_text_secondary_pane

0x42c6,	// (0x00043527) graphic_text_title_pane

0xcc02,	// (0x0004be63) cursor_primary_pane_g1

0x58ba,	// (0x00044b1b) cursor_text_primary_t1

0xd7d1,	// (0x0004ca32) cursor_primary_small_pane_g1

0x58ac,	// (0x00044b0d) cursor_text_primary_small_t1

0xd7c7,	// (0x0004ca28) cursor_primary_small_pane_g1_copy1

0x5894,	// (0x00044af5) cursor_text_primary_small_t1_copy1

0x5872,	// (0x00044ad3) cursor_text_title_t1

0xd7bd,	// (0x0004ca1e) cursor_title_pane_g1

0xcc02,	// (0x0004be63) cursor_digital_pane_g1

0x42f9,	// (0x0004355a) cursor_text_digital_t1

0x431e,	// (0x0004357f) link_highlight_primary_pane_g1

0x581b,	// (0x00044a7c) link_highlight_primary_pane_t1

0x4307,	// (0x00043568) link_highlight_primary_small_pane_g1

0x430f,	// (0x00043570) link_highlight_primary_small_pane_t1

0x431e,	// (0x0004357f) link_highlight_secondary_pane_g1

0x4326,	// (0x00043587) link_highlight_secondary_pane_t1

0x578f,	// (0x000449f0) link_highlight_title_pane_g1

0x5797,	// (0x000449f8) link_highlight_title_pane_t1

0x5778,	// (0x000449d9) link_highlight_digital_pane_g1

0x5780,	// (0x000449e1) link_highlight_digital_pane_t1

0x5650,	// (0x000448b1) copy_highlight_primary_pane_g1

0x5658,	// (0x000448b9) copy_highlight_primary_pane_t1

0x562a,	// (0x0004488b) copy_highlight_primary_small_pane_g1

0x5641,	// (0x000448a2) copy_highlight_primary_small_pane_t1

0x4335,	// (0x00043596) copy_highlight_secondary_pane_g1

0x433d,	// (0x0004359e) copy_highlight_secondary_pane_t1

0x562a,	// (0x0004488b) copy_highlight_title_pane_g1

0x5632,	// (0x00044893) copy_highlight_title_pane_t1

0x5650,	// (0x000448b1) copy_highlight_digital_pane_g1

0x68ac,	// (0x00045b0d) copy_highlight_digital_pane_t1

0x6800,	// (0x00045a61) graphic_text_primary_pane_g1

0x6890,	// (0x00045af1) graphic_text_primary_pane_t1

0x689e,	// (0x00045aff) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0004ec2f) graphic_text_primary_pane_t

0x686c,	// (0x00045acd) graphic_text_primary_small_pane_g1

0x6874,	// (0x00045ad5) graphic_text_primary_small_pane_t1

0x6882,	// (0x00045ae3) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0004ec2a) graphic_text_primary_small_pane_t

0x6848,	// (0x00045aa9) graphic_text_secondary_pane_g1

0x6850,	// (0x00045ab1) graphic_text_secondary_pane_t1

0x685e,	// (0x00045abf) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0004ec25) graphic_text_secondary_pane_t

0x6824,	// (0x00045a85) graphic_text_title_pane_g1

0x682c,	// (0x00045a8d) graphic_text_title_pane_t1

0x683a,	// (0x00045a9b) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0004ec20) graphic_text_title_pane_t

0x6800,	// (0x00045a61) graphic_text_digital_pane_g1

0x6808,	// (0x00045a69) graphic_text_digital_pane_t1

0x6816,	// (0x00045a77) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0004ec1b) graphic_text_digital_pane_t

0x2ceb,	// (0x00041f4c) navi_icon_pane_srt_ParamLimits

0x2ceb,	// (0x00041f4c) navi_icon_pane_srt

0x2c0b,	// (0x00041e6c) navi_midp_pane_srt

0x2c0b,	// (0x00041e6c) navi_navi_pane_srt

0x2ceb,	// (0x00041f4c) navi_text_pane_srt_ParamLimits

0x2ceb,	// (0x00041f4c) navi_text_pane_srt

0x67cb,	// (0x00045a2c) navi_navi_icon_text_pane_srt

0x67d3,	// (0x00045a34) navi_navi_pane_srt_g1_ParamLimits

0x67d3,	// (0x00045a34) navi_navi_pane_srt_g1

0x67e5,	// (0x00045a46) navi_navi_pane_srt_g2_ParamLimits

0x67e5,	// (0x00045a46) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0004ec16) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0004ec16) navi_navi_pane_srt_g

0x67f7,	// (0x00045a58) navi_navi_tabs_pane_srt

0x67cb,	// (0x00045a2c) navi_navi_text_pane_srt

0x67cb,	// (0x00045a2c) navi_navi_volume_pane_srt

0x67bc,	// (0x00045a1d) navi_navi_text_pane_srt_t1

0x1e28,	// (0x00041089) navi_navi_volume_pane_srt_g1

0x1e30,	// (0x00041091) volume_small_pane_srt_ParamLimits

0x1e30,	// (0x00041091) volume_small_pane_srt

0x1766,	// (0x000409c7) volume_small_pane_srt_g1_ParamLimits

0x1766,	// (0x000409c7) volume_small_pane_srt_g1

0x1776,	// (0x000409d7) volume_small_pane_srt_g2_ParamLimits

0x1776,	// (0x000409d7) volume_small_pane_srt_g2

0x1787,	// (0x000409e8) volume_small_pane_srt_g3_ParamLimits

0x1787,	// (0x000409e8) volume_small_pane_srt_g3

0x1798,	// (0x000409f9) volume_small_pane_srt_g4_ParamLimits

0x1798,	// (0x000409f9) volume_small_pane_srt_g4

0x17a9,	// (0x00040a0a) volume_small_pane_srt_g5_ParamLimits

0x17a9,	// (0x00040a0a) volume_small_pane_srt_g5

0x17ba,	// (0x00040a1b) volume_small_pane_srt_g6_ParamLimits

0x17ba,	// (0x00040a1b) volume_small_pane_srt_g6

0x17cb,	// (0x00040a2c) volume_small_pane_srt_g7_ParamLimits

0x17cb,	// (0x00040a2c) volume_small_pane_srt_g7

0x17dc,	// (0x00040a3d) volume_small_pane_srt_g8_ParamLimits

0x17dc,	// (0x00040a3d) volume_small_pane_srt_g8

0x17ed,	// (0x00040a4e) volume_small_pane_srt_g9_ParamLimits

0x17ed,	// (0x00040a4e) volume_small_pane_srt_g9

0x17fe,	// (0x00040a5f) volume_small_pane_srt_g10_ParamLimits

0x17fe,	// (0x00040a5f) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0004e9d1) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0004e9d1) volume_small_pane_srt_g

0x30c5,	// (0x00042326) query_popup_data_pane_cp2

0x67a2,	// (0x00045a03) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x67a2,	// (0x00045a03) navi_navi_icon_text_pane_srt_t1

0x58c8,	// (0x00044b29) navi_tabs_2_long_pane_srt

0x58c8,	// (0x00044b29) navi_tabs_2_pane_srt

0x58c8,	// (0x00044b29) navi_tabs_3_long_pane_srt

0x58c8,	// (0x00044b29) navi_tabs_3_pane_srt

0x58c8,	// (0x00044b29) navi_tabs_4_pane_srt

0x1e08,	// (0x00041069) tabs_2_active_pane_srt_ParamLimits

0x1e08,	// (0x00041069) tabs_2_active_pane_srt

0x1e18,	// (0x00041079) tabs_2_passive_pane_srt_ParamLimits

0x1e18,	// (0x00041079) tabs_2_passive_pane_srt

0x50a0,	// (0x00044301) bg_passive_tab_pane_cp1_srt_ParamLimits

0x50a0,	// (0x00044301) bg_passive_tab_pane_cp1_srt

0x676e,	// (0x000459cf) bg_passive_tab_pane_g1_cp1_srt

0x3de7,	// (0x00043048) bg_passive_tab_pane_g2_cp1_srt

0x6777,	// (0x000459d8) bg_passive_tab_pane_g3_cp1_srt

0x2f66,	// (0x000421c7) bg_active_tab_pane_cp1_srt_ParamLimits

0x2f66,	// (0x000421c7) bg_active_tab_pane_cp1_srt

0x6780,	// (0x000459e1) tabs_2_active_pane_srt_g1

0xdbaf,	// (0x0004ce10) tabs_2_active_pane_srt_t1_ParamLimits

0xdbaf,	// (0x0004ce10) tabs_2_active_pane_srt_t1

0x676e,	// (0x000459cf) bg_active_tab_pane_g1_cp1_srt

0x3de7,	// (0x00043048) bg_active_tab_pane_g2_cp1_srt

0x6777,	// (0x000459d8) bg_active_tab_pane_g3_cp1_srt

0x1dd5,	// (0x00041036) tabs_3_active_pane_srt_ParamLimits

0x1dd5,	// (0x00041036) tabs_3_active_pane_srt

0x1de6,	// (0x00041047) tabs_3_passive_pane_cp_srt_ParamLimits

0x1de6,	// (0x00041047) tabs_3_passive_pane_cp_srt

0x1df7,	// (0x00041058) tabs_3_passive_pane_srt_ParamLimits

0x1df7,	// (0x00041058) tabs_3_passive_pane_srt

0x50a0,	// (0x00044301) bg_passive_tab_pane_cp2_srt_ParamLimits

0x50a0,	// (0x00044301) bg_passive_tab_pane_cp2_srt

0x434c,	// (0x000435ad) bg_passive_tab_pane_g1_cp2_srt

0x3de7,	// (0x00043048) bg_passive_tab_pane_g2_cp2_srt

0x4355,	// (0x000435b6) bg_passive_tab_pane_g3_cp2_srt

0x2f66,	// (0x000421c7) bg_active_tab_pane_cp2_srt_ParamLimits

0x2f66,	// (0x000421c7) bg_active_tab_pane_cp2_srt

0x6754,	// (0x000459b5) tabs_3_active_pane_srt_g1

0xdb99,	// (0x0004cdfa) tabs_3_active_pane_srt_t1_ParamLimits

0xdb99,	// (0x0004cdfa) tabs_3_active_pane_srt_t1

0x434c,	// (0x000435ad) bg_active_tab_pane_g1_cp2_srt

0x3de7,	// (0x00043048) bg_active_tab_pane_g2_cp2_srt

0x4355,	// (0x000435b6) bg_active_tab_pane_g3_cp2_srt

0x1d8d,	// (0x00040fee) tabs_4_active_pane_srt_ParamLimits

0x1d8d,	// (0x00040fee) tabs_4_active_pane_srt

0x1d9f,	// (0x00041000) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1d9f,	// (0x00041000) tabs_4_passive_pane_cp2_srt

0x44aa,	// (0x0004370b) aid_size_cell_toolbar

0x63ff,	// (0x00045660) main_idle_act_pane_ParamLimits

0x4695,	// (0x000438f6) popup_large_graphic_colour_window_ParamLimits

0xd299,	// (0x0004c4fa) popup_toolbar_window_ParamLimits

0xd299,	// (0x0004c4fa) popup_toolbar_window

0x65b7,	// (0x00045818) list_single_graphic_2heading_pane_ParamLimits

0x65b7,	// (0x00045818) list_single_graphic_2heading_pane

0x3901,	// (0x00042b62) aid_size_cell_apps_grid_lsc_pane

0x3913,	// (0x00042b74) aid_size_cell_apps_grid_prt_pane

0x44f8,	// (0x00043759) bg_wml_button_pane_cp1_ParamLimits

0x44f8,	// (0x00043759) bg_wml_button_pane_cp1

0xd773,	// (0x0004c9d4) form_midp_field_text_pane_t1_ParamLimits

0x50a0,	// (0x00044301) input_focus_pane_cp050_ParamLimits

0x52e5,	// (0x00044546) list_midp_form_text_pane_ParamLimits

0x528b,	// (0x000444ec) input_focus_pane_cp051_ParamLimits

0x529f,	// (0x00044500) list_midp_choice_pane_ParamLimits

0xd70e,	// (0x0004c96f) list_single_2graphic_pane_cp3_ParamLimits

0xd70e,	// (0x0004c96f) list_single_2graphic_pane_cp3

0xd722,	// (0x0004c983) list_single_midp_graphic_pane_ParamLimits

0xd722,	// (0x0004c983) list_single_midp_graphic_pane

0x0887,	// (0x0003fae8) list_single_graphic_2heading_pane_g1_ParamLimits

0x0887,	// (0x0003fae8) list_single_graphic_2heading_pane_g1

0x0893,	// (0x0003faf4) list_single_graphic_2heading_pane_g4_ParamLimits

0x0893,	// (0x0003faf4) list_single_graphic_2heading_pane_g4

0x089f,	// (0x0003fb00) list_single_graphic_2heading_pane_g5_ParamLimits

0x089f,	// (0x0003fb00) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0004ea24) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0004ea24) list_single_graphic_2heading_pane_g

0x08ab,	// (0x0003fb0c) list_single_graphic_2heading_pane_t1_ParamLimits

0x08ab,	// (0x0003fb0c) list_single_graphic_2heading_pane_t1

0x08bf,	// (0x0003fb20) list_single_graphic_2heading_pane_t2_ParamLimits

0x08bf,	// (0x0003fb20) list_single_graphic_2heading_pane_t2

0x08db,	// (0x0003fb3c) list_single_graphic_2heading_pane_t3_ParamLimits

0x08db,	// (0x0003fb3c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0004ea2b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0004ea2b) list_single_graphic_2heading_pane_t

0x4eee,	// (0x0004414f) bg_popup_sub_pane_cp2

0x4f18,	// (0x00044179) grid_toobar_pane

0x1979,	// (0x00040bda) cell_toolbar_pane_ParamLimits

0x1979,	// (0x00040bda) cell_toolbar_pane

0x4f54,	// (0x000441b5) cell_toolbar_pane_g1_ParamLimits

0x4f54,	// (0x000441b5) cell_toolbar_pane_g1

0x4f68,	// (0x000441c9) cell_toolbar_pane_g2_ParamLimits

0x4f68,	// (0x000441c9) cell_toolbar_pane_g2

0x0001,

0xf7d1,	// (0x0004ea32) cell_toolbar_pane_g_ParamLimits

0xf7d1,	// (0x0004ea32) cell_toolbar_pane_g

0x4f8a,	// (0x000441eb) grid_highlight_pane_cp2_ParamLimits

0x4f8a,	// (0x000441eb) grid_highlight_pane_cp2

0x4fa4,	// (0x00044205) toolbar_button_pane

0x4fb0,	// (0x00044211) toolbar_button_pane_g1

0x4fb8,	// (0x00044219) toolbar_button_pane_g2

0x4fc0,	// (0x00044221) toolbar_button_pane_g3

0x4fc8,	// (0x00044229) toolbar_button_pane_g4

0x4fd0,	// (0x00044231) toolbar_button_pane_g5

0x4fd8,	// (0x00044239) toolbar_button_pane_g6

0x4fe0,	// (0x00044241) toolbar_button_pane_g7

0x4fe8,	// (0x00044249) toolbar_button_pane_g8

0x4ff0,	// (0x00044251) toolbar_button_pane_g9

0x0009,

0xf7d6,	// (0x0004ea37) toolbar_button_pane_g

0x19bd,	// (0x00040c1e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x19bd,	// (0x00040c1e) list_single_2graphic_pane_g1_cp3

0xbeaa,	// (0x0004b10b) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbeaa,	// (0x0004b10b) list_single_2graphic_pane_g2_cp3

0x19da,	// (0x00040c3b) list_single_2graphic_pane_g3_cp3

0x19e2,	// (0x00040c43) list_single_2graphic_pane_g4_cp3_ParamLimits

0x19e2,	// (0x00040c43) list_single_2graphic_pane_g4_cp3

0x19ee,	// (0x00040c4f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x19ee,	// (0x00040c4f) list_single_2graphic_pane_t1_cp3

0x49dd,	// (0x00043c3e) list_single_midp_graphic_pane_g2_ParamLimits

0x49dd,	// (0x00043c3e) list_single_midp_graphic_pane_g2

0x0877,	// (0x0003fad8) aid_zoom_text_primary

0x1955,	// (0x00040bb6) aid_zoom_text_secondary

0x4409,	// (0x0004366a) status_small_pane_g7_ParamLimits

0x4409,	// (0x0004366a) status_small_pane_g7

0x442c,	// (0x0004368d) status_small_pane_t1_ParamLimits

0xc57c,	// (0x0004b7dd) title_pane_g2

0x0003,

0xf56a,	// (0x0004e7cb) title_pane_g

0xc804,	// (0x0004ba65) aid_size_cell_colour_1_pane_ParamLimits

0xc804,	// (0x0004ba65) aid_size_cell_colour_1_pane

0xc818,	// (0x0004ba79) aid_size_cell_colour_2_pane_ParamLimits

0xc818,	// (0x0004ba79) aid_size_cell_colour_2_pane

0xc82c,	// (0x0004ba8d) aid_size_cell_colour_3_pane_ParamLimits

0xc82c,	// (0x0004ba8d) aid_size_cell_colour_3_pane

0xc840,	// (0x0004baa1) aid_size_cell_colour_4_pane_ParamLimits

0xc840,	// (0x0004baa1) aid_size_cell_colour_4_pane

0x13c2,	// (0x00040623) title_pane_stacon_g1_ParamLimits

0x13c2,	// (0x00040623) title_pane_stacon_g1

0x56af,	// (0x00044910) popup_note_wait_window_g3_ParamLimits

0x56af,	// (0x00044910) popup_note_wait_window_g3

0x5725,	// (0x00044986) popup_note_wait_window_t5_ParamLimits

0x5725,	// (0x00044986) popup_note_wait_window_t5

0x2c0b,	// (0x00041e6c) main_feb_china_hwr_fs_writing_pane

0xcccb,	// (0x0004bf2c) popup_feb_china_hwr_fs_window_ParamLimits

0xcccb,	// (0x0004bf2c) popup_feb_china_hwr_fs_window

0xbebb,	// (0x0004b11c) aid_size_cell_hwr_fs_ParamLimits

0xbebb,	// (0x0004b11c) aid_size_cell_hwr_fs

0x50a0,	// (0x00044301) bg_popup_sub_pane_cp3_ParamLimits

0x50a0,	// (0x00044301) bg_popup_sub_pane_cp3

0xbed0,	// (0x0004b131) grid_hwr_fs_pane_ParamLimits

0xbed0,	// (0x0004b131) grid_hwr_fs_pane

0x1a4d,	// (0x00040cae) linegrid_hwr_fs_pane_ParamLimits

0x1a4d,	// (0x00040cae) linegrid_hwr_fs_pane

0xbee8,	// (0x0004b149) cell_hwr_fs_pane_ParamLimits

0xbee8,	// (0x0004b149) cell_hwr_fs_pane

0x50ac,	// (0x0004430d) linegrid_hwr_fs_pane_g1_ParamLimits

0x50ac,	// (0x0004430d) linegrid_hwr_fs_pane_g1

0xd6e2,	// (0x0004c943) linegrid_hwr_fs_pane_g2_ParamLimits

0xd6e2,	// (0x0004c943) linegrid_hwr_fs_pane_g2

0x50ca,	// (0x0004432b) linegrid_hwr_fs_pane_g3_ParamLimits

0x50ca,	// (0x0004432b) linegrid_hwr_fs_pane_g3

0x1a7f,	// (0x00040ce0) linegrid_hwr_fs_pane_g4_ParamLimits

0x1a7f,	// (0x00040ce0) linegrid_hwr_fs_pane_g4

0x1a99,	// (0x00040cfa) linegrid_hwr_fs_pane_g5_ParamLimits

0x1a99,	// (0x00040cfa) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fc,	// (0x0004ea5d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0004ea5d) linegrid_hwr_fs_pane_g

0x50d6,	// (0x00044337) cell_hwr_fs_pane_g1_ParamLimits

0x50d6,	// (0x00044337) cell_hwr_fs_pane_g1

0x4e25,	// (0x00044086) cell_hwr_fs_pane_g2_ParamLimits

0x4e25,	// (0x00044086) cell_hwr_fs_pane_g2

0xd6f4,	// (0x0004c955) cell_hwr_fs_pane_g3_ParamLimits

0xd6f4,	// (0x0004c955) cell_hwr_fs_pane_g3

0xd701,	// (0x0004c962) cell_hwr_fs_pane_g4_ParamLimits

0xd701,	// (0x0004c962) cell_hwr_fs_pane_g4

0x0003,

0xf807,	// (0x0004ea68) cell_hwr_fs_pane_g_ParamLimits

0xf807,	// (0x0004ea68) cell_hwr_fs_pane_g

0xbf0e,	// (0x0004b16f) cell_hwr_fs_pane_t1

0x2c0b,	// (0x00041e6c) grid_highlight_pane_cp6

0x2c0b,	// (0x00041e6c) main_idle_act2_pane

0x36b8,	// (0x00042919) aid_inside_area_popup_secondary

0xd7f1,	// (0x0004ca52) aid_inside_area_window_primary_ParamLimits

0xd7f1,	// (0x0004ca52) aid_inside_area_window_primary

0x68bb,	// (0x00045b1c) ai2_news_ticker_pane

0x68c3,	// (0x00045b24) aid_size_cell_ai1_link_ParamLimits

0x68c3,	// (0x00045b24) aid_size_cell_ai1_link

0xdbc5,	// (0x0004ce26) popup_ai2_data_window_ParamLimits

0xdbc5,	// (0x0004ce26) popup_ai2_data_window

0x68f3,	// (0x00045b54) popup_ai2_link_window_ParamLimits

0x68f3,	// (0x00045b54) popup_ai2_link_window

0x50a0,	// (0x00044301) bg_popup_sub_pane_cp4_ParamLimits

0x50a0,	// (0x00044301) bg_popup_sub_pane_cp4

0x6907,	// (0x00045b68) grid_ai2_link_pane_ParamLimits

0x6907,	// (0x00045b68) grid_ai2_link_pane

0x691e,	// (0x00045b7f) popup_ai2_link_window_g1_ParamLimits

0x691e,	// (0x00045b7f) popup_ai2_link_window_g1

0x692a,	// (0x00045b8b) popup_ai2_link_window_g2_ParamLimits

0x692a,	// (0x00045b8b) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0004ec34) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0004ec34) popup_ai2_link_window_g

0x6939,	// (0x00045b9a) ai2_mp_button_pane

0x6941,	// (0x00045ba2) ai2_mp_volume_pane

0x528b,	// (0x000444ec) bg_popup_sub_pane_cp5_ParamLimits

0x528b,	// (0x000444ec) bg_popup_sub_pane_cp5

0x6949,	// (0x00045baa) heading_ai2_gene_pane_ParamLimits

0x6949,	// (0x00045baa) heading_ai2_gene_pane

0x6955,	// (0x00045bb6) list_ai2_gene_pane_ParamLimits

0x6955,	// (0x00045bb6) list_ai2_gene_pane

0x699d,	// (0x00045bfe) cell_ai2_link_pane_ParamLimits

0x699d,	// (0x00045bfe) cell_ai2_link_pane

0x69b3,	// (0x00045c14) cell_ai2_link_pane_g1

0x2c0b,	// (0x00041e6c) grid_highlight_pane_cp7

0x1e45,	// (0x000410a6) ai2_mp_volume_pane_g1

0x6a83,	// (0x00045ce4) ai2_mp_volume_pane_g2

0xdbef,	// (0x0004ce50) list_ai2_gene_pane_t1

0x6a8b,	// (0x00045cec) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0004ec4d) ai2_mp_volume_pane_g

0x1e4d,	// (0x000410ae) volume_small_pane_cp3

0x6a93,	// (0x00045cf4) aid_size_cell_ai2_button

0x6a9b,	// (0x00045cfc) grid_ai2_button_pane

0x6aa4,	// (0x00045d05) cell_ai2_button_pane_ParamLimits

0x6aa4,	// (0x00045d05) cell_ai2_button_pane

0x2c01,	// (0x00041e62) cell_ai2_button_pane_g1

0x2c0b,	// (0x00041e6c) grid_highlight_pane_cp8

0x6a43,	// (0x00045ca4) ai2_gene_pane_t1_ParamLimits

0x6a43,	// (0x00045ca4) ai2_gene_pane_t1

0xcc33,	// (0x0004be94) aid_height_parent_landscape

0xd958,	// (0x0004cbb9) aid_height_set_list

0x63ff,	// (0x00045660) aid_size_parent

0x66e2,	// (0x00045943) aid_size_cell_graphic_pane_ParamLimits

0x6965,	// (0x00045bc6) popup_ai2_data_window_g1_ParamLimits

0x6965,	// (0x00045bc6) popup_ai2_data_window_g1

0x6971,	// (0x00045bd2) ai2_news_ticker_pane_g1

0x6979,	// (0x00045bda) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0004ec39) ai2_news_ticker_pane_g

0x6981,	// (0x00045be2) ai2_news_ticker_pane_t1

0x698f,	// (0x00045bf0) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0004ec3e) ai2_news_ticker_pane_t

0x69bc,	// (0x00045c1d) heading_ai2_gene_pane_g1

0x69c4,	// (0x00045c25) heading_ai2_gene_pane_t1_ParamLimits

0x69c4,	// (0x00045c25) heading_ai2_gene_pane_t1

0x69d9,	// (0x00045c3a) list_highlight_pane_cp6

0xdbd9,	// (0x0004ce3a) ai2_gene_pane_ParamLimits

0xdbd9,	// (0x0004ce3a) ai2_gene_pane

0xdbfd,	// (0x0004ce5e) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0004ec43) list_ai2_gene_pane_t

0x6a14,	// (0x00045c75) list_highlight_pane_cp8_ParamLimits

0x6a14,	// (0x00045c75) list_highlight_pane_cp8

0x6a25,	// (0x00045c86) ai2_gene_pane_g1_ParamLimits

0x6a25,	// (0x00045c86) ai2_gene_pane_g1

0x6a37,	// (0x00045c98) ai2_gene_pane_g2_ParamLimits

0x6a37,	// (0x00045c98) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0004ec48) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0004ec48) ai2_gene_pane_g

0x34ed,	// (0x0004274e) scroll_pane_cp12

0xbe69,	// (0x0004b0ca) control_pane_t3_ParamLimits

0xbe69,	// (0x0004b0ca) control_pane_t3

0x441d,	// (0x0004367e) status_small_pane_g8_ParamLimits

0x441d,	// (0x0004367e) status_small_pane_g8

0xcd60,	// (0x0004bfc1) popup_find_window_ParamLimits

0xcfcf,	// (0x0004c230) popup_note_image_window_ParamLimits

0x08f3,	// (0x0003fb54) list_double2_graphic_pane_vc_g1_ParamLimits

0x08f3,	// (0x0003fb54) list_double2_graphic_pane_vc_g1

0x541e,	// (0x0004467f) list_double2_graphic_pane_vc_g2_ParamLimits

0x541e,	// (0x0004467f) list_double2_graphic_pane_vc_g2

0x19a9,	// (0x00040c0a) list_double2_graphic_pane_vc_g3_ParamLimits

0x19a9,	// (0x00040c0a) list_double2_graphic_pane_vc_g3

0x0002,

0xf631,	// (0x0004e892) list_double2_graphic_pane_vc_g_ParamLimits

0xf631,	// (0x0004e892) list_double2_graphic_pane_vc_g

0x08ff,	// (0x0003fb60) list_double2_graphic_pane_vc_t1_ParamLimits

0x08ff,	// (0x0003fb60) list_double2_graphic_pane_vc_t1

0x541e,	// (0x0004467f) list_single_heading_pane_vc_g1_ParamLimits

0x541e,	// (0x0004467f) list_single_heading_pane_vc_g1

0x19a9,	// (0x00040c0a) list_single_heading_pane_vc_g2_ParamLimits

0x19a9,	// (0x00040c0a) list_single_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0004e84f) list_single_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0004e84f) list_single_heading_pane_vc_g

0x0915,	// (0x0003fb76) list_single_heading_pane_vc_t1_ParamLimits

0x0915,	// (0x0003fb76) list_single_heading_pane_vc_t1

0x092b,	// (0x0003fb8c) list_single_heading_pane_vc_t2_ParamLimits

0x092b,	// (0x0003fb8c) list_single_heading_pane_vc_t2

0x0001,

0xf7eb,	// (0x0004ea4c) list_single_heading_pane_vc_t_ParamLimits

0xf7eb,	// (0x0004ea4c) list_single_heading_pane_vc_t

0x4ff8,	// (0x00044259) list_setting_number_pane_vc_g1_ParamLimits

0x4ff8,	// (0x00044259) list_setting_number_pane_vc_g1

0x5004,	// (0x00044265) list_setting_number_pane_vc_g2_ParamLimits

0x5004,	// (0x00044265) list_setting_number_pane_vc_g2

0x0001,

0xf7f0,	// (0x0004ea51) list_setting_number_pane_vc_g_ParamLimits

0xf7f0,	// (0x0004ea51) list_setting_number_pane_vc_g

0x5010,	// (0x00044271) list_setting_number_pane_vc_t1_ParamLimits

0x5010,	// (0x00044271) list_setting_number_pane_vc_t1

0x5024,	// (0x00044285) list_setting_number_pane_vc_t2_ParamLimits

0x5024,	// (0x00044285) list_setting_number_pane_vc_t2

0x5040,	// (0x000442a1) list_setting_number_pane_vc_t3_ParamLimits

0x5040,	// (0x000442a1) list_setting_number_pane_vc_t3

0x0002,

0xf7f5,	// (0x0004ea56) list_setting_number_pane_vc_t_ParamLimits

0xf7f5,	// (0x0004ea56) list_setting_number_pane_vc_t

0x5066,	// (0x000442c7) set_value_pane_vc_ParamLimits

0x5066,	// (0x000442c7) set_value_pane_vc

0x65b7,	// (0x00045818) list_double2_graphic_pane_vc_ParamLimits

0x65b7,	// (0x00045818) list_double2_graphic_pane_vc

0x1ce9,	// (0x00040f4a) list_double2_large_graphic_pane_vc_ParamLimits

0x1ce9,	// (0x00040f4a) list_double2_large_graphic_pane_vc

0x65b7,	// (0x00045818) list_double2_pane_vc_ParamLimits

0x65b7,	// (0x00045818) list_double2_pane_vc

0x65b7,	// (0x00045818) list_double_graphic_heading_pane_vc_ParamLimits

0x65b7,	// (0x00045818) list_double_graphic_heading_pane_vc

0x65b7,	// (0x00045818) list_double_graphic_pane_vc_ParamLimits

0x65b7,	// (0x00045818) list_double_graphic_pane_vc

0x65b7,	// (0x00045818) list_double_heading_pane_vc_ParamLimits

0x65b7,	// (0x00045818) list_double_heading_pane_vc

0x1ce9,	// (0x00040f4a) list_double_large_graphic_pane_vc_ParamLimits

0x1ce9,	// (0x00040f4a) list_double_large_graphic_pane_vc

0x65b7,	// (0x00045818) list_double_number_pane_vc_ParamLimits

0x65b7,	// (0x00045818) list_double_number_pane_vc

0x65b7,	// (0x00045818) list_double_pane_vc_ParamLimits

0x65b7,	// (0x00045818) list_double_pane_vc

0x65b7,	// (0x00045818) list_double_time_pane_vc_ParamLimits

0x65b7,	// (0x00045818) list_double_time_pane_vc

0x65b7,	// (0x00045818) list_setting_number_pane_vc_ParamLimits

0x65b7,	// (0x00045818) list_setting_number_pane_vc

0x65b7,	// (0x00045818) list_setting_pane_vc_ParamLimits

0x65b7,	// (0x00045818) list_setting_pane_vc

0x65b7,	// (0x00045818) list_single_graphic_heading_pane_vc_ParamLimits

0x65b7,	// (0x00045818) list_single_graphic_heading_pane_vc

0x65b7,	// (0x00045818) list_single_heading_pane_vc_ParamLimits

0x65b7,	// (0x00045818) list_single_heading_pane_vc

0x65b7,	// (0x00045818) list_single_number_heading_pane_vc_ParamLimits

0x65b7,	// (0x00045818) list_single_number_heading_pane_vc

0x08f3,	// (0x0003fb54) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x08f3,	// (0x0003fb54) list_double_graphic_heading_pane_vc_g1

0x541e,	// (0x0004467f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x541e,	// (0x0004467f) list_double_graphic_heading_pane_vc_g2

0x19a9,	// (0x00040c0a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x19a9,	// (0x00040c0a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf631,	// (0x0004e892) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf631,	// (0x0004e892) list_double_graphic_heading_pane_vc_g

0x0a1a,	// (0x0003fc7b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0a1a,	// (0x0003fc7b) list_double_graphic_heading_pane_vc_t1

0x0915,	// (0x0003fb76) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0915,	// (0x0003fb76) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0004ec54) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0004ec54) list_double_graphic_heading_pane_vc_t

0x4ff8,	// (0x00044259) list_setting_pane_vc_g1_ParamLimits

0x4ff8,	// (0x00044259) list_setting_pane_vc_g1

0x5004,	// (0x00044265) list_setting_pane_vc_g2_ParamLimits

0x5004,	// (0x00044265) list_setting_pane_vc_g2

0x0001,

0xf7f0,	// (0x0004ea51) list_setting_pane_vc_g_ParamLimits

0xf7f0,	// (0x0004ea51) list_setting_pane_vc_g

0x6cdc,	// (0x00045f3d) list_setting_pane_vc_t1_ParamLimits

0x6cdc,	// (0x00045f3d) list_setting_pane_vc_t1

0x6cf0,	// (0x00045f51) list_setting_pane_vc_t2_ParamLimits

0x6cf0,	// (0x00045f51) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x0004ec97) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x0004ec97) list_setting_pane_vc_t

0x5066,	// (0x000442c7) set_value_pane_cp_vc_ParamLimits

0x5066,	// (0x000442c7) set_value_pane_cp_vc

0x541e,	// (0x0004467f) list_single_number_heading_pane_vc_g1_ParamLimits

0x541e,	// (0x0004467f) list_single_number_heading_pane_vc_g1

0x19a9,	// (0x00040c0a) list_single_number_heading_pane_vc_g2_ParamLimits

0x19a9,	// (0x00040c0a) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0004e84f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0004e84f) list_single_number_heading_pane_vc_g

0x0915,	// (0x0003fb76) list_single_number_heading_pane_vc_t1_ParamLimits

0x0915,	// (0x0003fb76) list_single_number_heading_pane_vc_t1

0x0a2e,	// (0x0003fc8f) list_single_number_heading_pane_vc_t2_ParamLimits

0x0a2e,	// (0x0003fc8f) list_single_number_heading_pane_vc_t2

0x0a42,	// (0x0003fca3) list_single_number_heading_pane_vc_t3_ParamLimits

0x0a42,	// (0x0003fca3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x0004ec9c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x0004ec9c) list_single_number_heading_pane_vc_t

0x08f3,	// (0x0003fb54) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x08f3,	// (0x0003fb54) list_single_graphic_heading_pane_vc_g1

0x541e,	// (0x0004467f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x541e,	// (0x0004467f) list_single_graphic_heading_pane_vc_g4

0x19a9,	// (0x00040c0a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x19a9,	// (0x00040c0a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf631,	// (0x0004e892) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf631,	// (0x0004e892) list_single_graphic_heading_pane_vc_g

0x0915,	// (0x0003fb76) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0915,	// (0x0003fb76) list_single_graphic_heading_pane_vc_t1

0x0a54,	// (0x0003fcb5) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0a54,	// (0x0003fcb5) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0004eca3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0004eca3) list_single_graphic_heading_pane_vc_t

0x541e,	// (0x0004467f) list_double2_pane_vc_g1_ParamLimits

0x541e,	// (0x0004467f) list_double2_pane_vc_g1

0x19a9,	// (0x00040c0a) list_double2_pane_vc_g2_ParamLimits

0x19a9,	// (0x00040c0a) list_double2_pane_vc_g2

0x0001,

0xf5ee,	// (0x0004e84f) list_double2_pane_vc_g_ParamLimits

0xf5ee,	// (0x0004e84f) list_double2_pane_vc_g

0x0a68,	// (0x0003fcc9) list_double2_pane_vc_t1_ParamLimits

0x0a68,	// (0x0003fcc9) list_double2_pane_vc_t1

0x1e56,	// (0x000410b7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1e56,	// (0x000410b7) list_double2_large_graphic_pane_vc_g1

0x1e62,	// (0x000410c3) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1e62,	// (0x000410c3) list_double2_large_graphic_pane_vc_g2

0x1e6e,	// (0x000410cf) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1e6e,	// (0x000410cf) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x0004e867) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x0004e867) list_double2_large_graphic_pane_vc_g

0x0a7e,	// (0x0003fcdf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0a7e,	// (0x0003fcdf) list_double2_large_graphic_pane_vc_t1

0x1e7a,	// (0x000410db) list_double_time_pane_vc_g1_ParamLimits

0x1e7a,	// (0x000410db) list_double_time_pane_vc_g1

0x1e86,	// (0x000410e7) list_double_time_pane_vc_g2_ParamLimits

0x1e86,	// (0x000410e7) list_double_time_pane_vc_g2

0x0001,

0xfa47,	// (0x0004eca8) list_double_time_pane_vc_g_ParamLimits

0xfa47,	// (0x0004eca8) list_double_time_pane_vc_g

0x0a94,	// (0x0003fcf5) list_double_time_pane_vc_t1_ParamLimits

0x0a94,	// (0x0003fcf5) list_double_time_pane_vc_t1

0x0aad,	// (0x0003fd0e) list_double_time_pane_vc_t2_ParamLimits

0x0aad,	// (0x0003fd0e) list_double_time_pane_vc_t2

0x0aed,	// (0x0003fd4e) list_double_time_pane_vc_t3_ParamLimits

0x0aed,	// (0x0003fd4e) list_double_time_pane_vc_t3

0x0b05,	// (0x0003fd66) list_double_time_pane_vc_t4_ParamLimits

0x0b05,	// (0x0003fd66) list_double_time_pane_vc_t4

0x0003,

0xfa4c,	// (0x0004ecad) list_double_time_pane_vc_t_ParamLimits

0xfa4c,	// (0x0004ecad) list_double_time_pane_vc_t

0x541e,	// (0x0004467f) list_double_pane_vc_g1_ParamLimits

0x541e,	// (0x0004467f) list_double_pane_vc_g1

0x19a9,	// (0x00040c0a) list_double_pane_vc_g2_ParamLimits

0x19a9,	// (0x00040c0a) list_double_pane_vc_g2

0x0001,

0xf5ee,	// (0x0004e84f) list_double_pane_vc_g_ParamLimits

0xf5ee,	// (0x0004e84f) list_double_pane_vc_g

0x0b19,	// (0x0003fd7a) list_double_pane_vc_t1_ParamLimits

0x0b19,	// (0x0003fd7a) list_double_pane_vc_t1

0x0b2b,	// (0x0003fd8c) list_double_pane_vc_t2_ParamLimits

0x0b2b,	// (0x0003fd8c) list_double_pane_vc_t2

0x0001,

0xfa55,	// (0x0004ecb6) list_double_pane_vc_t_ParamLimits

0xfa55,	// (0x0004ecb6) list_double_pane_vc_t

0x541e,	// (0x0004467f) list_double_number_pane_vc_g1_ParamLimits

0x541e,	// (0x0004467f) list_double_number_pane_vc_g1

0x19a9,	// (0x00040c0a) list_double_number_pane_vc_g2_ParamLimits

0x19a9,	// (0x00040c0a) list_double_number_pane_vc_g2

0x0001,

0xf5ee,	// (0x0004e84f) list_double_number_pane_vc_g_ParamLimits

0xf5ee,	// (0x0004e84f) list_double_number_pane_vc_g

0x0b43,	// (0x0003fda4) list_double_number_pane_vc_t1_ParamLimits

0x0b43,	// (0x0003fda4) list_double_number_pane_vc_t1

0x0b57,	// (0x0003fdb8) list_double_number_pane_vc_t2_ParamLimits

0x0b57,	// (0x0003fdb8) list_double_number_pane_vc_t2

0x0b2b,	// (0x0003fd8c) list_double_number_pane_vc_t3_ParamLimits

0x0b2b,	// (0x0003fd8c) list_double_number_pane_vc_t3

0x0002,

0xfa5a,	// (0x0004ecbb) list_double_number_pane_vc_t_ParamLimits

0xfa5a,	// (0x0004ecbb) list_double_number_pane_vc_t

0x1e92,	// (0x000410f3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x1e92,	// (0x000410f3) list_double_large_graphic_pane_vc_g1

0x1e9e,	// (0x000410ff) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1e9e,	// (0x000410ff) list_double_large_graphic_pane_vc_g2

0x1e6e,	// (0x000410cf) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1e6e,	// (0x000410cf) list_double_large_graphic_pane_vc_g3

0x0b69,	// (0x0003fdca) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0b69,	// (0x0003fdca) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa61,	// (0x0004ecc2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x0004ecc2) list_double_large_graphic_pane_vc_g

0x0b75,	// (0x0003fdd6) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0b75,	// (0x0003fdd6) list_double_large_graphic_pane_vc_t1

0x0b87,	// (0x0003fde8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0b87,	// (0x0003fde8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x0004eccb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x0004eccb) list_double_large_graphic_pane_vc_t

0x541e,	// (0x0004467f) list_double_heading_pane_vc_g1_ParamLimits

0x541e,	// (0x0004467f) list_double_heading_pane_vc_g1

0x19a9,	// (0x00040c0a) list_double_heading_pane_vc_g2_ParamLimits

0x19a9,	// (0x00040c0a) list_double_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0004e84f) list_double_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0004e84f) list_double_heading_pane_vc_g

0x0ba0,	// (0x0003fe01) list_double_heading_pane_vc_t1_ParamLimits

0x0ba0,	// (0x0003fe01) list_double_heading_pane_vc_t1

0x0915,	// (0x0003fb76) list_double_heading_pane_vc_t2_ParamLimits

0x0915,	// (0x0003fb76) list_double_heading_pane_vc_t2

0x0001,

0xfa6f,	// (0x0004ecd0) list_double_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x0004ecd0) list_double_heading_pane_vc_t

0x08f3,	// (0x0003fb54) list_double_graphic_pane_vc_g1_ParamLimits

0x08f3,	// (0x0003fb54) list_double_graphic_pane_vc_g1

0x1ead,	// (0x0004110e) list_double_graphic_pane_vc_g2_ParamLimits

0x1ead,	// (0x0004110e) list_double_graphic_pane_vc_g2

0x1ebc,	// (0x0004111d) list_double_graphic_pane_vc_g3_ParamLimits

0x1ebc,	// (0x0004111d) list_double_graphic_pane_vc_g3

0x0002,

0xfa74,	// (0x0004ecd5) list_double_graphic_pane_vc_g_ParamLimits

0xfa74,	// (0x0004ecd5) list_double_graphic_pane_vc_g

0x0bb4,	// (0x0003fe15) list_double_graphic_pane_vc_t1_ParamLimits

0x0bb4,	// (0x0003fe15) list_double_graphic_pane_vc_t1

0x0b2b,	// (0x0003fd8c) list_double_graphic_pane_vc_t2_ParamLimits

0x0b2b,	// (0x0003fd8c) list_double_graphic_pane_vc_t2

0x0001,

0xfa7b,	// (0x0004ecdc) list_double_graphic_pane_vc_t_ParamLimits

0xfa7b,	// (0x0004ecdc) list_double_graphic_pane_vc_t

0x0eac,	// (0x0004010d) aid_size_cell_fastswap

0xbb4b,	// (0x0004adac) aid_size_cell_touch_ParamLimits

0xbb4b,	// (0x0004adac) aid_size_cell_touch

0x110f,	// (0x00040370) popup_fast_swap_wide_window_ParamLimits

0x110f,	// (0x00040370) popup_fast_swap_wide_window

0xbc96,	// (0x0004aef7) touch_pane_ParamLimits

0xbc96,	// (0x0004aef7) touch_pane

0x3543,	// (0x000427a4) button_value_adjust_pane_cp2

0x0593,	// (0x0003f7f4) button_value_adjust_pane_cp4

0x05b7,	// (0x0003f818) form_field_data_pane_cp2

0xb7b7,	// (0x0004aa18) form_field_data_wide_pane_cp2

0x39d0,	// (0x00042c31) bg_scroll_pane_ParamLimits

0x1525,	// (0x00040786) scroll_handle_pane_ParamLimits

0x1539,	// (0x0004079a) scroll_sc2_down_pane_ParamLimits

0x1539,	// (0x0004079a) scroll_sc2_down_pane

0x3a01,	// (0x00042c62) scroll_sc2_up_pane_ParamLimits

0x3a01,	// (0x00042c62) scroll_sc2_up_pane

0xdd28,	// (0x0004cf89) grid_wheel_folder_pane_g1_ParamLimits

0xdd28,	// (0x0004cf89) grid_wheel_folder_pane_g1

0x16fe,	// (0x0004095f) clock_nsta_pane_cp2_ParamLimits

0x16fe,	// (0x0004095f) clock_nsta_pane_cp2

0xcb48,	// (0x0004bda9) listscroll_midp_pane_ParamLimits

0xcb59,	// (0x0004bdba) midp_canvas_pane

0x4498,	// (0x000436f9) nsta_clock_indic_pane

0x44de,	// (0x0004373f) listscroll_form_pane_vc

0x44e6,	// (0x00043747) listscroll_set_pane_vc_ParamLimits

0x44e6,	// (0x00043747) listscroll_set_pane_vc

0xd3f6,	// (0x0004c657) clock_nsta_pane

0xd420,	// (0x0004c681) indicator_nsta_pane

0x4eee,	// (0x0004414f) bg_popup_sub_pane_cp2_ParamLimits

0x4f02,	// (0x00044163) find_pane_cp2_ParamLimits

0x4f02,	// (0x00044163) find_pane_cp2

0x4f18,	// (0x00044179) grid_toobar_pane_ParamLimits

0x5074,	// (0x000442d5) list_form_gen_pane_vc_ParamLimits

0x5074,	// (0x000442d5) list_form_gen_pane_vc

0x508a,	// (0x000442eb) scroll_pane_cp8_vc_ParamLimits

0x508a,	// (0x000442eb) scroll_pane_cp8_vc

0x5106,	// (0x00044367) data_form_wide_pane_vc_ParamLimits

0x5106,	// (0x00044367) data_form_wide_pane_vc

0x5112,	// (0x00044373) form_field_data_wide_pane_vc_g1

0x511a,	// (0x0004437b) form_field_data_wide_pane_vc_t1_ParamLimits

0x511a,	// (0x0004437b) form_field_data_wide_pane_vc_t1

0x3557,	// (0x000427b8) input_focus_pane_cp6_vc_ParamLimits

0x3557,	// (0x000427b8) input_focus_pane_cp6_vc

0xd795,	// (0x0004c9f6) list_midp_pane_ParamLimits

0x6748,	// (0x000459a9) scroll_pane_cp16_ParamLimits

0x6748,	// (0x000459a9) scroll_pane_cp16

0x5484,	// (0x000446e5) button_value_adjust_pane_ParamLimits

0x5484,	// (0x000446e5) button_value_adjust_pane

0xd969,	// (0x0004cbca) button_value_adjust_pane_cp6_ParamLimits

0xd969,	// (0x0004cbca) button_value_adjust_pane_cp6

0xda83,	// (0x0004cce4) settings_code_pane_cp_ParamLimits

0xda83,	// (0x0004cce4) settings_code_pane_cp

0x2c01,	// (0x00041e62) cell_touch_pane_g1

0x2c01,	// (0x00041e62) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0004e97b) cell_touch_pane_g

0xdc0b,	// (0x0004ce6c) cell_touch_pane_cp_ParamLimits

0xdc0b,	// (0x0004ce6c) cell_touch_pane_cp

0xdc27,	// (0x0004ce88) cell_touch_pane_ParamLimits

0xdc27,	// (0x0004ce88) cell_touch_pane

0x2c01,	// (0x00041e62) scroll_sc2_down_pane_g1

0x2c01,	// (0x00041e62) scroll_sc2_up_pane_g1

0x2c0b,	// (0x00041e6c) bg_set_opt_pane_cp4_vc

0x6ad8,	// (0x00045d39) list_set_graphic_pane_vc_g1_ParamLimits

0x6ad8,	// (0x00045d39) list_set_graphic_pane_vc_g1

0x6ae4,	// (0x00045d45) list_set_graphic_pane_vc_g2_ParamLimits

0x6ae4,	// (0x00045d45) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0004ec59) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0004ec59) list_set_graphic_pane_vc_g

0x6af0,	// (0x00045d51) text_primary_small_cp13_vc_ParamLimits

0x6af0,	// (0x00045d51) text_primary_small_cp13_vc

0x6b08,	// (0x00045d69) list_set_graphic_pane_vc_ParamLimits

0x6b08,	// (0x00045d69) list_set_graphic_pane_vc

0x2c0b,	// (0x00041e6c) input_focus_pane_cp2_vc

0x2c01,	// (0x00041e62) setting_code_pane_vc_g1

0x6b1c,	// (0x00045d7d) setting_code_pane_vc_t1

0x6b2a,	// (0x00045d8b) set_text_pane_vc_t1_ParamLimits

0x6b2a,	// (0x00045d8b) set_text_pane_vc_t1

0x2c0b,	// (0x00041e6c) input_focus_pane_cp1_vc

0x6b45,	// (0x00045da6) list_set_text_pane_vc

0x2c01,	// (0x00041e62) setting_text_pane_vc_g1

0x2c0b,	// (0x00041e6c) bg_set_opt_pane_cp2_vc

0x6b4f,	// (0x00045db0) setting_slider_graphic_pane_vc_g1

0x6b57,	// (0x00045db8) setting_slider_graphic_pane_vc_t1

0x6b65,	// (0x00045dc6) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0004ec5e) setting_slider_graphic_pane_vc_t

0x6b73,	// (0x00045dd4) slider_set_pane_cp_vc

0x6b7b,	// (0x00045ddc) slider_set_pane_vc_g1

0x6b84,	// (0x00045de5) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0004ec63) slider_set_pane_vc_g

0x35be,	// (0x0004281f) set_opt_bg_pane_g1_copy1

0x35c6,	// (0x00042827) set_opt_bg_pane_g2_copy1

0x6bb0,	// (0x00045e11) set_opt_bg_pane_g3_copy1

0x35d6,	// (0x00042837) set_opt_bg_pane_g4_copy1

0x35de,	// (0x0004283f) set_opt_bg_pane_g5_copy1

0x35e6,	// (0x00042847) set_opt_bg_pane_g6_copy1

0x6bba,	// (0x00045e1b) set_opt_bg_pane_g7_copy1

0x6bc2,	// (0x00045e23) set_opt_bg_pane_g8_copy1

0x6bcc,	// (0x00045e2d) set_opt_bg_pane_g9_copy1

0x2c0b,	// (0x00041e6c) bg_set_opt_pane_cp_vc

0x6bd6,	// (0x00045e37) setting_slider_pane_vc_t1

0x6b57,	// (0x00045db8) setting_slider_pane_vc_t2

0x6b65,	// (0x00045dc6) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0004ec72) setting_slider_pane_vc_t

0x6b73,	// (0x00045dd4) slider_set_pane_vc

0x1abd,	// (0x00040d1e) volume_set_pane_vc_g1

0x1ac6,	// (0x00040d27) volume_set_pane_vc_g2

0x1acf,	// (0x00040d30) volume_set_pane_vc_g3

0x1ad8,	// (0x00040d39) volume_set_pane_vc_g4

0x1ae1,	// (0x00040d42) volume_set_pane_vc_g5

0x1aea,	// (0x00040d4b) volume_set_pane_vc_g6

0x1af3,	// (0x00040d54) volume_set_pane_vc_g7

0x1afc,	// (0x00040d5d) volume_set_pane_vc_g8

0x1b05,	// (0x00040d66) volume_set_pane_vc_g9

0x1b0e,	// (0x00040d6f) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x0004ec79) volume_set_pane_vc_g

0x6be5,	// (0x00045e46) volume_set_pane_vc

0x6bed,	// (0x00045e4e) button_value_adjust_pane_cp1_vc

0x6bf7,	// (0x00045e58) list_highlight_pane_cp2_vc

0x6c00,	// (0x00045e61) list_set_pane_vc_ParamLimits

0x6c00,	// (0x00045e61) list_set_pane_vc

0x6c6a,	// (0x00045ecb) main_pane_set_vc_t1_ParamLimits

0x6c6a,	// (0x00045ecb) main_pane_set_vc_t1

0x6c7f,	// (0x00045ee0) main_pane_set_vc_t2_ParamLimits

0x6c7f,	// (0x00045ee0) main_pane_set_vc_t2

0x6c91,	// (0x00045ef2) main_pane_set_vc_t3_ParamLimits

0x6c91,	// (0x00045ef2) main_pane_set_vc_t3

0x6ca5,	// (0x00045f06) main_pane_set_vc_t4_ParamLimits

0x6ca5,	// (0x00045f06) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x0004ec8e) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x0004ec8e) main_pane_set_vc_t

0x6cb9,	// (0x00045f1a) setting_code_pane_vc_ParamLimits

0x6cb9,	// (0x00045f1a) setting_code_pane_vc

0x6cca,	// (0x00045f2b) setting_slider_graphic_pane_vc

0x6cca,	// (0x00045f2b) setting_slider_pane_vc

0x6cca,	// (0x00045f2b) setting_text_pane_vc

0x6cca,	// (0x00045f2b) setting_volume_pane_vc

0x6cd4,	// (0x00045f35) scroll_pane_cp121_vc

0x3531,	// (0x00042792) set_content_pane_vc

0x6d12,	// (0x00045f73) button_value_adjust_pane_g1

0x6d1b,	// (0x00045f7c) button_value_adjust_pane_g2

0x0001,

0xfa80,	// (0x0004ece1) button_value_adjust_pane_g

0x6d24,	// (0x00045f85) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6d24,	// (0x00045f85) form_field_slider_wide_pane_vc_t1

0x6d38,	// (0x00045f99) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6d38,	// (0x00045f99) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa85,	// (0x0004ece6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa85,	// (0x0004ece6) form_field_slider_wide_pane_vc_t

0x2f66,	// (0x000421c7) input_focus_pane_cp10_vc_ParamLimits

0x2f66,	// (0x000421c7) input_focus_pane_cp10_vc

0x6d4a,	// (0x00045fab) slider_cont_pane_cp1_vc_ParamLimits

0x6d4a,	// (0x00045fab) slider_cont_pane_cp1_vc

0x6b7b,	// (0x00045ddc) slider_form_pane_g1_cp2

0x6b84,	// (0x00045de5) slider_form_pane_g2_cp2

0x6d63,	// (0x00045fc4) form_field_slider_pane_vc_t3

0x6d71,	// (0x00045fd2) form_field_slider_pane_vc_t4

0x6d7f,	// (0x00045fe0) slider_form_pane_vc_ParamLimits

0x6d7f,	// (0x00045fe0) slider_form_pane_vc

0x6d8c,	// (0x00045fed) form_field_slider_pane_vc_t1_ParamLimits

0x6d8c,	// (0x00045fed) form_field_slider_pane_vc_t1

0x6d38,	// (0x00045f99) form_field_slider_pane_vc_t2_ParamLimits

0x6d38,	// (0x00045f99) form_field_slider_pane_vc_t2

0x0001,

0xfa95,	// (0x0004ecf6) form_field_slider_pane_vc_t_ParamLimits

0xfa95,	// (0x0004ecf6) form_field_slider_pane_vc_t

0x2f66,	// (0x000421c7) input_focus_pane_cp9_vc_ParamLimits

0x2f66,	// (0x000421c7) input_focus_pane_cp9_vc

0x6da8,	// (0x00046009) slider_cont_pane_vc_ParamLimits

0x6da8,	// (0x00046009) slider_cont_pane_vc

0x6dba,	// (0x0004601b) list_form_graphic_pane_cp_vc_ParamLimits

0x6dba,	// (0x0004601b) list_form_graphic_pane_cp_vc

0x5112,	// (0x00044373) form_field_popup_wide_pane_vc_g1

0x6dcf,	// (0x00046030) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6dcf,	// (0x00046030) form_field_popup_wide_pane_vc_t1

0x3557,	// (0x000427b8) input_focus_pane_cp8_vc_ParamLimits

0x3557,	// (0x000427b8) input_focus_pane_cp8_vc

0x6de6,	// (0x00046047) list_form_wide_pane_vc_ParamLimits

0x6de6,	// (0x00046047) list_form_wide_pane_vc

0x6df2,	// (0x00046053) list_form_graphic_pane_vc_g1

0x6dfa,	// (0x0004605b) list_form_graphic_pane_vc_t1_ParamLimits

0x6dfa,	// (0x0004605b) list_form_graphic_pane_vc_t1

0x2ceb,	// (0x00041f4c) list_highlight_pane_cp5_vc_ParamLimits

0x2ceb,	// (0x00041f4c) list_highlight_pane_cp5_vc

0x6e16,	// (0x00046077) list_form_graphic_pane_vc_ParamLimits

0x6e16,	// (0x00046077) list_form_graphic_pane_vc

0x5112,	// (0x00044373) form_field_popup_pane_vc_g1

0x6e2c,	// (0x0004608d) form_field_popup_pane_vc_t1_ParamLimits

0x6e2c,	// (0x0004608d) form_field_popup_pane_vc_t1

0x3557,	// (0x000427b8) input_focus_pane_cp7_vc_ParamLimits

0x3557,	// (0x000427b8) input_focus_pane_cp7_vc

0x6e43,	// (0x000460a4) list_form_pane_vc_ParamLimits

0x6e43,	// (0x000460a4) list_form_pane_vc

0x6e4f,	// (0x000460b0) data_form_pane_vc_t1_ParamLimits

0x6e4f,	// (0x000460b0) data_form_pane_vc_t1

0x35be,	// (0x0004281f) input_focus_pane_vc_g1

0x35c6,	// (0x00042827) input_focus_pane_vc_g2

0x35ce,	// (0x0004282f) input_focus_pane_vc_g3

0x35d6,	// (0x00042837) input_focus_pane_vc_g4

0x35de,	// (0x0004283f) input_focus_pane_vc_g5

0x35e6,	// (0x00042847) input_focus_pane_vc_g6

0x35ee,	// (0x0004284f) input_focus_pane_vc_g7

0x35f6,	// (0x00042857) input_focus_pane_vc_g8

0x35fe,	// (0x0004285f) input_focus_pane_vc_g9

0x2c01,	// (0x00041e62) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0004e904) input_focus_pane_vc_g

0x5106,	// (0x00044367) data_form_pane_vc_ParamLimits

0x5106,	// (0x00044367) data_form_pane_vc

0x5112,	// (0x00044373) form_field_data_pane_vc_g1

0x6e6a,	// (0x000460cb) form_field_data_pane_vc_t1_ParamLimits

0x6e6a,	// (0x000460cb) form_field_data_pane_vc_t1

0x3557,	// (0x000427b8) input_focus_pane_vc_ParamLimits

0x3557,	// (0x000427b8) input_focus_pane_vc

0x6e84,	// (0x000460e5) button_value_adjust_pane_cp3_vc

0x6e8c,	// (0x000460ed) button_value_adjust_pane_cp5_vc

0x6e94,	// (0x000460f5) form_field_data_pane_vc_ParamLimits

0x6e94,	// (0x000460f5) form_field_data_pane_vc

0x6eab,	// (0x0004610c) form_field_data_pane_vc_cp2

0x6eb3,	// (0x00046114) form_field_data_wide_pane_vc_ParamLimits

0x6eb3,	// (0x00046114) form_field_data_wide_pane_vc

0x6ec9,	// (0x0004612a) form_field_data_wide_pane_vc_cp2

0x6ed1,	// (0x00046132) form_field_popup_pane_vc_ParamLimits

0x6ed1,	// (0x00046132) form_field_popup_pane_vc

0x6ee8,	// (0x00046149) form_field_popup_wide_pane_vc_ParamLimits

0x6ee8,	// (0x00046149) form_field_popup_wide_pane_vc

0x6efe,	// (0x0004615f) form_field_slider_pane_vc_ParamLimits

0x6efe,	// (0x0004615f) form_field_slider_pane_vc

0x6f11,	// (0x00046172) form_field_slider_wide_pane_vc_ParamLimits

0x6f11,	// (0x00046172) form_field_slider_wide_pane_vc

0xdc45,	// (0x0004cea6) grid_touch_1_pane_ParamLimits

0xdc45,	// (0x0004cea6) grid_touch_1_pane

0xdc59,	// (0x0004ceba) grid_touch_2_pane_ParamLimits

0xdc59,	// (0x0004ceba) grid_touch_2_pane

0x6fe6,	// (0x00046247) touch_pane_g1_ParamLimits

0x6fe6,	// (0x00046247) touch_pane_g1

0x6f48,	// (0x000461a9) cell_app_pane_cp_wide_ParamLimits

0x6f48,	// (0x000461a9) cell_app_pane_cp_wide

0x6f59,	// (0x000461ba) grid_popup_fast_wide_pane_ParamLimits

0x6f59,	// (0x000461ba) grid_popup_fast_wide_pane

0x6f6d,	// (0x000461ce) scroll_pane_cp19_ParamLimits

0x6f6d,	// (0x000461ce) scroll_pane_cp19

0x2c0b,	// (0x00041e6c) bg_popup_window_pane_cp20

0x6f81,	// (0x000461e2) listscroll_popup_fast_wide_pane

0x3724,	// (0x00042985) grid_indicator_nsta_pane

0x6f89,	// (0x000461ea) clock_nsta_pane_g1

0x6f92,	// (0x000461f3) clock_nsta_pane_t1

0xdc83,	// (0x0004cee4) cell_indicator_nsta_pane_ParamLimits

0xdc83,	// (0x0004cee4) cell_indicator_nsta_pane

0x6fe6,	// (0x00046247) cell_indicator_nsta_pane_g1

0xdc9c,	// (0x0004cefd) cell_indicator_nsta_pane_g2

0x0001,

0xfa9f,	// (0x0004ed00) cell_indicator_nsta_pane_g

0x700a,	// (0x0004626b) clock_nsta_pane_cp

0x7012,	// (0x00046273) indicator_nsta_pane_cp

0x701b,	// (0x0004627c) nsta_clock_indic_pane_g1

0x2db4,	// (0x00042015) grid_indicator_pane

0x3af6,	// (0x00042d57) scroll_pane_cp29

0x164d,	// (0x000408ae) indicator_nsta_pane_cp2_ParamLimits

0x164d,	// (0x000408ae) indicator_nsta_pane_cp2

0x2ceb,	// (0x00041f4c) main_apps_wheel_pane

0x52ff,	// (0x00044560) form_midp_field_text_pane_ParamLimits

0x5456,	// (0x000446b7) scroll_bar_cp050_ParamLimits

0x7084,	// (0x000462e5) cell_indicator_pane_ParamLimits

0x7084,	// (0x000462e5) cell_indicator_pane

0x709b,	// (0x000462fc) cell_indicator_pane_g1

0xdcb2,	// (0x0004cf13) grid_wheel_folder_pane_ParamLimits

0xdcb2,	// (0x0004cf13) grid_wheel_folder_pane

0xdcc0,	// (0x0004cf21) list_wheel_apps_pane_ParamLimits

0xdcc0,	// (0x0004cf21) list_wheel_apps_pane

0xdcce,	// (0x0004cf2f) main_apps_wheel_pane_g1_ParamLimits

0xdcce,	// (0x0004cf2f) main_apps_wheel_pane_g1

0xdcda,	// (0x0004cf3b) main_apps_wheel_pane_g2_ParamLimits

0xdcda,	// (0x0004cf3b) main_apps_wheel_pane_g2

0x0001,

0xfabb,	// (0x0004ed1c) main_apps_wheel_pane_g_ParamLimits

0xfabb,	// (0x0004ed1c) main_apps_wheel_pane_g

0xdce8,	// (0x0004cf49) main_apps_wheel_pane_t1_ParamLimits

0xdce8,	// (0x0004cf49) main_apps_wheel_pane_t1

0xdcfc,	// (0x0004cf5d) list_wheel_apps_pane_g1

0xdd04,	// (0x0004cf65) list_wheel_apps_pane_g2

0xdd0c,	// (0x0004cf6d) list_wheel_apps_pane_g3

0xdd14,	// (0x0004cf75) list_wheel_apps_pane_g4

0xdd1e,	// (0x0004cf7f) list_wheel_apps_pane_g5

0x0004,

0xfac0,	// (0x0004ed21) list_wheel_apps_pane_g

0x4026,	// (0x00043287) navi_icon_text_pane

0xd2f1,	// (0x0004c552) aid_fill_nsta

0xdd35,	// (0x0004cf96) navi_icon_text_pane_g1

0xdd41,	// (0x0004cfa2) navi_icon_text_pane_t1

0xcb30,	// (0x0004bd91) list_set_graphic_pane_t1_ParamLimits

0xcb30,	// (0x0004bd91) list_set_graphic_pane_t1

0x5ba5,	// (0x00044e06) popup_midp_note_alarm_window_t6_ParamLimits

0x5ba5,	// (0x00044e06) popup_midp_note_alarm_window_t6

0x5bb7,	// (0x00044e18) popup_midp_note_alarm_window_t7_ParamLimits

0x5bb7,	// (0x00044e18) popup_midp_note_alarm_window_t7

0x5bc9,	// (0x00044e2a) popup_midp_note_alarm_window_t8_ParamLimits

0x5bc9,	// (0x00044e2a) popup_midp_note_alarm_window_t8

0x5bdb,	// (0x00044e3c) popup_midp_note_alarm_window_t9_ParamLimits

0x5bdb,	// (0x00044e3c) popup_midp_note_alarm_window_t9

0x5bed,	// (0x00044e4e) popup_midp_note_alarm_window_t10_ParamLimits

0x5bed,	// (0x00044e4e) popup_midp_note_alarm_window_t10

0x5bff,	// (0x00044e60) popup_midp_note_alarm_window_t11_ParamLimits

0x5bff,	// (0x00044e60) popup_midp_note_alarm_window_t11

0x5c11,	// (0x00044e72) scroll_pane_cp17_ParamLimits

0x5c11,	// (0x00044e72) scroll_pane_cp17

0x1abd,	// (0x00040d1e) volume_small_pane_cp_g1

0x1ec8,	// (0x00041129) volume_small_pane_cp_g2

0x1ed1,	// (0x00041132) volume_small_pane_cp_g3

0x1eda,	// (0x0004113b) volume_small_pane_cp_g4

0x1ee3,	// (0x00041144) volume_small_pane_cp_g5

0x1eec,	// (0x0004114d) volume_small_pane_cp_g6

0x1ef5,	// (0x00041156) volume_small_pane_cp_g7

0x1efe,	// (0x0004115f) volume_small_pane_cp_g8

0x1f07,	// (0x00041168) volume_small_pane_cp_g9

0x1f10,	// (0x00041171) volume_small_pane_cp_g10

0x4275,	// (0x000434d6) midp_ticker_pane_g1_ParamLimits

0x4281,	// (0x000434e2) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0004e9cc) midp_ticker_pane_g_ParamLimits

0xcbf0,	// (0x0004be51) midp_ticker_pane_t1_ParamLimits

0xd311,	// (0x0004c572) aid_fill_nsta_2

0x5442,	// (0x000446a3) list_form2_midp_pane

0x6586,	// (0x000457e7) midp_editing_number_pane_ParamLimits

0x6595,	// (0x000457f6) midp_ticker_pane_ParamLimits

0x7182,	// (0x000463e3) form2_midp_field_pane

0x71a6,	// (0x00046407) scroll_pane_cp51

0x71c6,	// (0x00046427) form2_midp_button_pane_ParamLimits

0x71c6,	// (0x00046427) form2_midp_button_pane

0x71d8,	// (0x00046439) form2_midp_content_pane_ParamLimits

0x71d8,	// (0x00046439) form2_midp_content_pane

0x71f2,	// (0x00046453) form2_midp_field_choice_group_pane

0x71fa,	// (0x0004645b) form2_midp_field_pane_g1

0x7202,	// (0x00046463) form2_midp_field_pane_g2

0x720a,	// (0x0004646b) form2_midp_field_pane_g3

0x7212,	// (0x00046473) form2_midp_field_pane_g4

0x0003,

0xfae5,	// (0x0004ed46) form2_midp_field_pane_g

0x721a,	// (0x0004647b) form2_midp_gauge_slider_pane

0x7222,	// (0x00046483) form2_midp_gauge_wait_pane

0x722a,	// (0x0004648b) form2_midp_image_pane_ParamLimits

0x722a,	// (0x0004648b) form2_midp_image_pane

0x7245,	// (0x000464a6) form2_midp_label_pane_ParamLimits

0x7245,	// (0x000464a6) form2_midp_label_pane

0xdd6f,	// (0x0004cfd0) form2_midp_label_pane_cp_ParamLimits

0xdd6f,	// (0x0004cfd0) form2_midp_label_pane_cp

0x727f,	// (0x000464e0) form2_midp_string_pane_ParamLimits

0x727f,	// (0x000464e0) form2_midp_string_pane

0xb9f5,	// (0x0004ac56) form2_midp_text_pane_ParamLimits

0xb9f5,	// (0x0004ac56) form2_midp_text_pane

0x7291,	// (0x000464f2) form2_midp_time_pane

0x72a1,	// (0x00046502) input_focus_pane_cp51_ParamLimits

0x72a1,	// (0x00046502) input_focus_pane_cp51

0x72b9,	// (0x0004651a) form2_midp_label_pane_t1_ParamLimits

0x72b9,	// (0x0004651a) form2_midp_label_pane_t1

0xba14,	// (0x0004ac75) form2_mdip_text_pane_t1_ParamLimits

0xba14,	// (0x0004ac75) form2_mdip_text_pane_t1

0x0c03,	// (0x0003fe64) form2_midp_time_pane_t1

0x7302,	// (0x00046563) form2_midp_gauge_slider_pane_t1

0xdd90,	// (0x0004cff1) form2_midp_gauge_slider_pane_t2

0xdda2,	// (0x0004d003) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaee,	// (0x0004ed4f) form2_midp_gauge_slider_pane_t

0x7338,	// (0x00046599) form2_midp_slider_pane

0x7344,	// (0x000465a5) form2_midp_gauge_wait_pane_t1

0x7352,	// (0x000465b3) form2_midp_wait_pane_ParamLimits

0x7352,	// (0x000465b3) form2_midp_wait_pane

0xddb4,	// (0x0004d015) list_single_2graphic_pane_cp4_ParamLimits

0xddb4,	// (0x0004d015) list_single_2graphic_pane_cp4

0xd722,	// (0x0004c983) list_single_midp_graphic_pane_cp_ParamLimits

0xd722,	// (0x0004c983) list_single_midp_graphic_pane_cp

0x2c0b,	// (0x00041e6c) list_highlight_pane_cp20

0x73ac,	// (0x0004660d) list_single_2graphic_pane_g1_cp4

0x73b4,	// (0x00046615) list_single_2graphic_pane_g2_cp4

0x73bc,	// (0x0004661d) list_single_2graphic_pane_t1_cp4

0x2ceb,	// (0x00041f4c) list_highlight_pane_cp21

0x73cb,	// (0x0004662c) list_single_midp_graphic_pane_g4_cp

0x73da,	// (0x0004663b) list_single_midp_graphic_pane_t1_cp

0xddc9,	// (0x0004d02a) form2_mdip_string_pane_t1_ParamLimits

0xddc9,	// (0x0004d02a) form2_mdip_string_pane_t1

0x2c0b,	// (0x00041e6c) bg_wml_button_pane_cp2

0x2c01,	// (0x00041e62) form2_midp_image_pane_g1

0x1371,	// (0x000405d2) list_double_large_graphic_pane_g5_ParamLimits

0x1371,	// (0x000405d2) list_double_large_graphic_pane_g5

0xcb48,	// (0x0004bda9) midp_form_pane_ParamLimits

0x2ceb,	// (0x00041f4c) main_apps_wheel_pane_ParamLimits

0xd04d,	// (0x0004c2ae) popup_preview_window_ParamLimits

0xd04d,	// (0x0004c2ae) popup_preview_window

0x4a76,	// (0x00043cd7) popup_touch_info_window_ParamLimits

0x4a76,	// (0x00043cd7) popup_touch_info_window

0x4a94,	// (0x00043cf5) popup_touch_menu_window_ParamLimits

0x4a94,	// (0x00043cf5) popup_touch_menu_window

0x2bf7,	// (0x00041e58) bg_popup_sub_pane_cp6

0x74e8,	// (0x00046749) list_touch_menu_pane

0x74f0,	// (0x00046751) list_single_touch_menu_pane_ParamLimits

0x74f0,	// (0x00046751) list_single_touch_menu_pane

0x7507,	// (0x00046768) list_single_touch_menu_pane_t1

0x2ceb,	// (0x00041f4c) bg_popup_sub_pane_cp7_ParamLimits

0x2ceb,	// (0x00041f4c) bg_popup_sub_pane_cp7

0x7515,	// (0x00046776) heading_sub_pane

0x751d,	// (0x0004677e) list_touch_info_pane_ParamLimits

0x751d,	// (0x0004677e) list_touch_info_pane

0x752c,	// (0x0004678d) list_single_touch_info_pane_ParamLimits

0x752c,	// (0x0004678d) list_single_touch_info_pane

0x753e,	// (0x0004679f) list_single_touch_info_pane_t1

0x754c,	// (0x000467ad) list_single_touch_info_pane_t2

0x0001,

0xfafc,	// (0x0004ed5d) list_single_touch_info_pane_t

0x419a,	// (0x000433fb) bg_popup_heading_pane_cp

0x755a,	// (0x000467bb) heading_sub_pane_t1

0x50a0,	// (0x00044301) bg_popup_preview_window_pane_cp_ParamLimits

0x50a0,	// (0x00044301) bg_popup_preview_window_pane_cp

0x7515,	// (0x00046776) heading_preview_pane

0x751d,	// (0x0004677e) list_preview_pane_ParamLimits

0x751d,	// (0x0004677e) list_preview_pane

0x7568,	// (0x000467c9) popup_preview_window_g1

0x752c,	// (0x0004678d) list_single_preview_pane_ParamLimits

0x752c,	// (0x0004678d) list_single_preview_pane

0x7570,	// (0x000467d1) list_single_preview_pane_g1

0x7578,	// (0x000467d9) list_single_preview_pane_t1

0x753e,	// (0x0004679f) list_single_preview_pane_t2

0x0001,

0xfb01,	// (0x0004ed62) list_single_preview_pane_t

0x7586,	// (0x000467e7) bg_popup_heading_pane_cp2_ParamLimits

0x7586,	// (0x000467e7) bg_popup_heading_pane_cp2

0x759c,	// (0x000467fd) heading_preview_pane_g1

0x75a4,	// (0x00046805) heading_preview_pane_t1_ParamLimits

0x75a4,	// (0x00046805) heading_preview_pane_t1

0x2dd7,	// (0x00042038) soft_indicator_pane_t1_ParamLimits

0x34ca,	// (0x0004272b) scroll_pane_ParamLimits

0x39ef,	// (0x00042c50) scroll_sc2_left_pane

0x39f8,	// (0x00042c59) scroll_sc2_right_pane

0x3a17,	// (0x00042c78) scroll_bg_pane_g1_ParamLimits

0x3a2c,	// (0x00042c8d) scroll_bg_pane_g2_ParamLimits

0x3a44,	// (0x00042ca5) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0004e95b) scroll_bg_pane_g_ParamLimits

0x3a17,	// (0x00042c78) scroll_handle_pane_g1_ParamLimits

0x3a66,	// (0x00042cc7) scroll_handle_pane_g2_ParamLimits

0x3a44,	// (0x00042ca5) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0004e962) scroll_handle_pane_g_ParamLimits

0x4520,	// (0x00043781) popup_choice_list_window_ParamLimits

0x4520,	// (0x00043781) popup_choice_list_window

0x4efa,	// (0x0004415b) choice_list_pane

0x4f7c,	// (0x000441dd) cell_toolbar_pane_t1

0x4fa4,	// (0x00044205) toolbar_button_pane_ParamLimits

0x60d1,	// (0x00045332) ai_gene_pane_1_t2_ParamLimits

0x60d1,	// (0x00045332) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0004eb73) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0004eb73) ai_gene_pane_1_t

0x75c1,	// (0x00046822) scroll_sc2_left_pane_g1

0x75c1,	// (0x00046822) scroll_sc2_right_pane_g1

0x44f8,	// (0x00043759) bg_popup_sub_pane_cp10

0x75cb,	// (0x0004682c) list_choice_list_pane

0x75e2,	// (0x00046843) list_single_choice_list_pane_ParamLimits

0x75e2,	// (0x00046843) list_single_choice_list_pane

0x75f6,	// (0x00046857) list_single_choice_list_pane_g1

0x75fe,	// (0x0004685f) list_single_choice_list_pane_t1_ParamLimits

0x75fe,	// (0x0004685f) list_single_choice_list_pane_t1

0x7613,	// (0x00046874) choice_list_pane_g1

0x761b,	// (0x0004687c) choice_list_pane_t1

0x2bf7,	// (0x00041e58) input_focus_pane_cp11

0x38cc,	// (0x00042b2d) title_pane_stacon_g2_ParamLimits

0x38cc,	// (0x00042b2d) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0004e941) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0004e941) title_pane_stacon_g

0x419a,	// (0x000433fb) cursor_press_pane

0xcd18,	// (0x0004bf79) popup_fep_hwr_window_ParamLimits

0xcd18,	// (0x0004bf79) popup_fep_hwr_window

0x4642,	// (0x000438a3) popup_fep_vkb_window_ParamLimits

0x4642,	// (0x000438a3) popup_fep_vkb_window

0x7629,	// (0x0004688a) cursor_press_pane_g1

0x0002,

0xfb2a,	// (0x0004ed8b) fep_vkb_side_pane_g_ParamLimits

0x1f44,	// (0x000411a5) fep_hwr_candidate_pane_ParamLimits

0x1f44,	// (0x000411a5) fep_hwr_candidate_pane

0x1f6e,	// (0x000411cf) fep_hwr_side_pane_ParamLimits

0x1f6e,	// (0x000411cf) fep_hwr_side_pane

0x1f8e,	// (0x000411ef) fep_hwr_top_pane_ParamLimits

0x1f8e,	// (0x000411ef) fep_hwr_top_pane

0x1fa6,	// (0x00041207) fep_hwr_write_pane_ParamLimits

0x1fa6,	// (0x00041207) fep_hwr_write_pane

0xfb2a,	// (0x0004ed8b) fep_vkb_side_pane_g

0x7631,	// (0x00046892) fep_hwr_top_pane_g1

0x7643,	// (0x000468a4) fep_hwr_top_pane_g2

0x1fd2,	// (0x00041233) fep_hwr_top_pane_g3

0x0002,

0xfb06,	// (0x0004ed67) fep_hwr_top_pane_g

0x1fe7,	// (0x00041248) fep_hwr_top_text_pane

0x3bbd,	// (0x00042e1e) fep_hwr_top_text_pane_g1

0x7679,	// (0x000468da) fep_hwr_top_text_pane_t1

0x20dd,	// (0x0004133e) fep_hwr_candidate_pane_g1

0x78cc,	// (0x00046b2d) fep_vkb_keypad_pane_g3_ParamLimits

0x78cc,	// (0x00046b2d) fep_vkb_keypad_pane_g3

0x78f4,	// (0x00046b55) fep_vkb_keypad_pane_g4_ParamLimits

0x78f4,	// (0x00046b55) fep_vkb_keypad_pane_g4

0x7963,	// (0x00046bc4) fep_vkb_bottom_pane_g2_ParamLimits

0x7963,	// (0x00046bc4) fep_vkb_bottom_pane_g2

0x0001,

0xfb31,	// (0x0004ed92) fep_vkb_bottom_pane_g_ParamLimits

0xfb31,	// (0x0004ed92) fep_vkb_bottom_pane_g

0x75c1,	// (0x00046822) cell_vkb_side_pane_g2

0x0001,

0xfb3b,	// (0x0004ed9c) cell_vkb_side_pane_g

0x79ee,	// (0x00046c4f) cell_vkb_side_pane_t1

0x79fc,	// (0x00046c5d) cell_vkb_side_pane_t1_copy1

0x75c1,	// (0x00046822) bg_fep_vkb_candidate_pane_g2

0x7b28,	// (0x00046d89) cell_vkb_candidate_pane_ParamLimits

0x7687,	// (0x000468e8) aid_size_cell_vkb_ParamLimits

0x7687,	// (0x000468e8) aid_size_cell_vkb

0x7b28,	// (0x00046d89) cell_vkb_candidate_pane

0x20f7,	// (0x00041358) bg_popup_fep_shadow_pane_g1

0xde7f,	// (0x0004d0e0) fep_vkb_bottom_pane_ParamLimits

0xde7f,	// (0x0004d0e0) fep_vkb_bottom_pane

0x774b,	// (0x000469ac) fep_vkb_candidate_pane_ParamLimits

0x774b,	// (0x000469ac) fep_vkb_candidate_pane

0xdea4,	// (0x0004d105) fep_vkb_keypad_pane_ParamLimits

0xdea4,	// (0x0004d105) fep_vkb_keypad_pane

0xdee0,	// (0x0004d141) fep_vkb_side_pane_ParamLimits

0xdee0,	// (0x0004d141) fep_vkb_side_pane

0xdf1c,	// (0x0004d17d) fep_vkb_top_pane_ParamLimits

0xdf1c,	// (0x0004d17d) fep_vkb_top_pane

0x7825,	// (0x00046a86) fep_vkb_top_pane_g1_ParamLimits

0x7825,	// (0x00046a86) fep_vkb_top_pane_g1

0x7834,	// (0x00046a95) fep_vkb_top_pane_g2_ParamLimits

0x7834,	// (0x00046a95) fep_vkb_top_pane_g2

0x7843,	// (0x00046aa4) fep_vkb_top_pane_g3_ParamLimits

0x7843,	// (0x00046aa4) fep_vkb_top_pane_g3

0x0003,

0xfb21,	// (0x0004ed82) fep_vkb_top_pane_g_ParamLimits

0xfb21,	// (0x0004ed82) fep_vkb_top_pane_g

0x7861,	// (0x00046ac2) fep_vkb_top_text_pane_ParamLimits

0x7861,	// (0x00046ac2) fep_vkb_top_text_pane

0xdf58,	// (0x0004d1b9) fep_vkb_side_pane_g1_ParamLimits

0xdf58,	// (0x0004d1b9) fep_vkb_side_pane_g1

0x78bb,	// (0x00046b1c) grid_vkb_side_pane_ParamLimits

0x78bb,	// (0x00046b1c) grid_vkb_side_pane

0x20ff,	// (0x00041360) bg_popup_fep_shadow_pane_g2

0x2108,	// (0x00041369) bg_popup_fep_shadow_pane_g3

0x2110,	// (0x00041371) bg_popup_fep_shadow_pane_g4

0x2119,	// (0x0004137a) bg_popup_fep_shadow_pane_g5

0x2123,	// (0x00041384) bg_popup_fep_shadow_pane_g6

0x212b,	// (0x0004138c) bg_popup_fep_shadow_pane_g7

0x35de,	// (0x0004283f) bg_popup_fep_shadow_pane_g8

0x7912,	// (0x00046b73) grid_vkb_keypad_number_pane_ParamLimits

0x7912,	// (0x00046b73) grid_vkb_keypad_number_pane

0x7922,	// (0x00046b83) grid_vkb_keypad_pane_ParamLimits

0x7922,	// (0x00046b83) grid_vkb_keypad_pane

0x7948,	// (0x00046ba9) fep_vkb_bottom_pane_g1_ParamLimits

0x7948,	// (0x00046ba9) fep_vkb_bottom_pane_g1

0x7971,	// (0x00046bd2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7971,	// (0x00046bd2) grid_vkb_keypad_bottom_left_pane

0x7986,	// (0x00046be7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7986,	// (0x00046be7) grid_vkb_keypad_bottom_right_pane

0x799b,	// (0x00046bfc) fep_vkb_top_text_pane_g1

0xdf9f,	// (0x0004d200) fep_vkb_top_text_pane_t1

0xdfb1,	// (0x0004d212) cell_vkb_side_pane_ParamLimits

0xdfb1,	// (0x0004d212) cell_vkb_side_pane

0x75c1,	// (0x00046822) cell_vkb_side_pane_g1

0x7a0a,	// (0x00046c6b) cell_vkb_keypad_pane_ParamLimits

0x7a0a,	// (0x00046c6b) cell_vkb_keypad_pane

0x7a7f,	// (0x00046ce0) cell_vkb_keypad_pane_g1

0x0008,

0xfb4e,	// (0x0004edaf) bg_popup_fep_shadow_pane_g

0x75c1,	// (0x00046822) cell_hwr_side_pane_g1

0x75c1,	// (0x00046822) cell_hwr_side_pane_g2

0x7a89,	// (0x00046cea) cell_vkb_keypad_pane_t1

0xdfc7,	// (0x0004d228) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdfc7,	// (0x0004d228) cell_vkb_keypad_bottom_left_pane

0xdfdc,	// (0x0004d23d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdfdc,	// (0x0004d23d) cell_vkb_keypad_bottom_right_pane

0x75c1,	// (0x00046822) cell_vkb_keypad_bottom_left_pane_g1

0x75c1,	// (0x00046822) cell_vkb_keypad_bottom_right_pane_g1

0x7aed,	// (0x00046d4e) cell_vkb_keypad_number_pane_ParamLimits

0x7aed,	// (0x00046d4e) cell_vkb_keypad_number_pane

0x7b0c,	// (0x00046d6d) cell_vkb_keypad_number_pane_g1

0x7b16,	// (0x00046d77) cell_vkb_keypad_number_pane_g2

0x7b1f,	// (0x00046d80) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb40,	// (0x0004eda1) cell_vkb_keypad_number_pane_g

0x7a89,	// (0x00046cea) cell_vkb_keypad_number_pane_t1

0x7b43,	// (0x00046da4) fep_vkb_candidate_pane_g1

0x0001,

0xfb3b,	// (0x0004ed9c) cell_hwr_side_pane_g

0x7b5c,	// (0x00046dbd) cell_hwr_side_pane_t1

0x213d,	// (0x0004139e) cell_hwr_side_pane_t1_copy1

0x7853,	// (0x00046ab4) cell_hwr_candidate_pane_g1

0x214b,	// (0x000413ac) cell_hwr_candidate_pane_t1

0x75c1,	// (0x00046822) cell_vkb_candidate_pane_g2

0x7ba0,	// (0x00046e01) cell_vkb_candidate_pane_t1

0xcc65,	// (0x0004bec6) bg_popup_fep_shadow_pane_ParamLimits

0xcc65,	// (0x0004bec6) bg_popup_fep_shadow_pane

0xde45,	// (0x0004d0a6) bg_fep_hwr_top_pane_g4

0x7655,	// (0x000468b6) bg_hwr_side_pane_g1_ParamLimits

0x7655,	// (0x000468b6) bg_hwr_side_pane_g1

0xc090,	// (0x0004b2f1) cell_hwr_side_pane_ParamLimits

0xc090,	// (0x0004b2f1) cell_hwr_side_pane

0x205e,	// (0x000412bf) fep_hwr_write_pane_g1_ParamLimits

0x205e,	// (0x000412bf) fep_hwr_write_pane_g1

0x206b,	// (0x000412cc) fep_hwr_write_pane_g2_ParamLimits

0x206b,	// (0x000412cc) fep_hwr_write_pane_g2

0x2078,	// (0x000412d9) fep_hwr_write_pane_g3_ParamLimits

0x2078,	// (0x000412d9) fep_hwr_write_pane_g3

0xc0b0,	// (0x0004b311) fep_hwr_write_pane_g4_ParamLimits

0xc0b0,	// (0x0004b311) fep_hwr_write_pane_g4

0x0005,

0xfb0d,	// (0x0004ed6e) fep_hwr_write_pane_g_ParamLimits

0xfb0d,	// (0x0004ed6e) fep_hwr_write_pane_g

0xde45,	// (0x0004d0a6) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xde45,	// (0x0004d0a6) bg_fep_hwr_candidate_pane_g2

0x209b,	// (0x000412fc) cell_hwr_candidate_pane_ParamLimits

0x209b,	// (0x000412fc) cell_hwr_candidate_pane

0x20dd,	// (0x0004133e) fep_hwr_candidate_pane_g1_ParamLimits

0x76b5,	// (0x00046916) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x76b5,	// (0x00046916) bg_popup_fep_shadow_pane_cp2

0x7853,	// (0x00046ab4) fep_vkb_top_pane_g4_ParamLimits

0x7853,	// (0x00046ab4) fep_vkb_top_pane_g4

0x7899,	// (0x00046afa) fep_vkb_side_pane_g2_ParamLimits

0x7899,	// (0x00046afa) fep_vkb_side_pane_g2

0xb6c5,	// (0x0004a926) list_setting_pane_t4_ParamLimits

0xb6c5,	// (0x0004a926) list_setting_pane_t4

0xb75f,	// (0x0004a9c0) list_setting_number_pane_t5_ParamLimits

0xb75f,	// (0x0004a9c0) list_setting_number_pane_t5

0xca61,	// (0x0004bcc2) list_double_heading_pane_cp2_ParamLimits

0xca61,	// (0x0004bcc2) list_double_heading_pane_cp2

0x3571,	// (0x000427d2) list_double_heading_pane_g1_cp2_ParamLimits

0x3571,	// (0x000427d2) list_double_heading_pane_g1_cp2

0x357d,	// (0x000427de) list_double_heading_pane_g2_cp2_ParamLimits

0x357d,	// (0x000427de) list_double_heading_pane_g2_cp2

0x7bae,	// (0x00046e0f) list_double_heading_pane_t1_cp2_ParamLimits

0x7bae,	// (0x00046e0f) list_double_heading_pane_t1_cp2

0x7bc4,	// (0x00046e25) list_double_heading_pane_t2_cp2_ParamLimits

0x7bc4,	// (0x00046e25) list_double_heading_pane_t2_cp2

0x2bdf,	// (0x00041e40) aid_value_unit2

0x1169,	// (0x000403ca) popup_preview_fixed_window

0x2f74,	// (0x000421d5) bg_popup_preview_window_pane_cp02

0x7bd6,	// (0x00046e37) list_preview_fixed_pane

0x7c5e,	// (0x00046ebf) list_empty_pane_fp_ParamLimits

0x7c5e,	// (0x00046ebf) list_empty_pane_fp

0x7c5e,	// (0x00046ebf) list_single_cale_day_pane_fp_ParamLimits

0x7c5e,	// (0x00046ebf) list_single_cale_day_pane_fp

0x7c5e,	// (0x00046ebf) list_single_graphic_heading_pane_fp_ParamLimits

0x7c5e,	// (0x00046ebf) list_single_graphic_heading_pane_fp

0x7c5e,	// (0x00046ebf) list_single_graphic_pane_fp_ParamLimits

0x7c5e,	// (0x00046ebf) list_single_graphic_pane_fp

0x7c5e,	// (0x00046ebf) list_single_heading_pane_fp_ParamLimits

0x7c5e,	// (0x00046ebf) list_single_heading_pane_fp

0x7c5e,	// (0x00046ebf) list_single_pane_fp_ParamLimits

0x7c5e,	// (0x00046ebf) list_single_pane_fp

0x7c73,	// (0x00046ed4) list_single_pane_fp_g1_ParamLimits

0x7c73,	// (0x00046ed4) list_single_pane_fp_g1

0x49dd,	// (0x00043c3e) list_single_pane_fp_g2_ParamLimits

0x49dd,	// (0x00043c3e) list_single_pane_fp_g2

0x7c7f,	// (0x00046ee0) list_single_pane_fp_g3_ParamLimits

0x7c7f,	// (0x00046ee0) list_single_pane_fp_g3

0x7c93,	// (0x00046ef4) list_single_pane_fp_g4_ParamLimits

0x7c93,	// (0x00046ef4) list_single_pane_fp_g4

0x0003,

0xfb6f,	// (0x0004edd0) list_single_pane_fp_g_ParamLimits

0xfb6f,	// (0x0004edd0) list_single_pane_fp_g

0x0c16,	// (0x0003fe77) list_single_pane_fp_t1_ParamLimits

0x0c16,	// (0x0003fe77) list_single_pane_fp_t1

0x0c2d,	// (0x0003fe8e) list_single_graphic_pane_fp_g1_ParamLimits

0x0c2d,	// (0x0003fe8e) list_single_graphic_pane_fp_g1

0x7c73,	// (0x00046ed4) list_single_graphic_pane_fp_g2_ParamLimits

0x7c73,	// (0x00046ed4) list_single_graphic_pane_fp_g2

0x49dd,	// (0x00043c3e) list_single_graphic_pane_fp_g3_ParamLimits

0x49dd,	// (0x00043c3e) list_single_graphic_pane_fp_g3

0x7c7f,	// (0x00046ee0) list_single_graphic_pane_fp_g4_ParamLimits

0x7c7f,	// (0x00046ee0) list_single_graphic_pane_fp_g4

0x7c93,	// (0x00046ef4) list_single_graphic_pane_fp_g5_ParamLimits

0x7c93,	// (0x00046ef4) list_single_graphic_pane_fp_g5

0x0004,

0xfb78,	// (0x0004edd9) list_single_graphic_pane_fp_g_ParamLimits

0xfb78,	// (0x0004edd9) list_single_graphic_pane_fp_g

0x0c39,	// (0x0003fe9a) list_single_graphic_pane_fp_t1_ParamLimits

0x0c39,	// (0x0003fe9a) list_single_graphic_pane_fp_t1

0x0c2d,	// (0x0003fe8e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0c2d,	// (0x0003fe8e) list_single_graphic_heading_pane_fp_g1

0x7c73,	// (0x00046ed4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7c73,	// (0x00046ed4) list_single_graphic_heading_pane_fp_g2

0x49dd,	// (0x00043c3e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x49dd,	// (0x00043c3e) list_single_graphic_heading_pane_fp_g3

0x7c7f,	// (0x00046ee0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7c7f,	// (0x00046ee0) list_single_graphic_heading_pane_fp_g4

0x7c93,	// (0x00046ef4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7c93,	// (0x00046ef4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb78,	// (0x0004edd9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb78,	// (0x0004edd9) list_single_graphic_heading_pane_fp_g

0x0c4f,	// (0x0003feb0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0c4f,	// (0x0003feb0) list_single_graphic_heading_pane_fp_t1

0x0c65,	// (0x0003fec6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0c65,	// (0x0003fec6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb83,	// (0x0004ede4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb83,	// (0x0004ede4) list_single_graphic_heading_pane_fp_t

0x0c77,	// (0x0003fed8) list_single_cale_day_pane_fp_g1_ParamLimits

0x0c77,	// (0x0003fed8) list_single_cale_day_pane_fp_g1

0x7c9f,	// (0x00046f00) list_single_cale_day_pane_fp_g2_ParamLimits

0x7c9f,	// (0x00046f00) list_single_cale_day_pane_fp_g2

0x2169,	// (0x000413ca) list_single_cale_day_pane_fp_g3_ParamLimits

0x2169,	// (0x000413ca) list_single_cale_day_pane_fp_g3

0x2191,	// (0x000413f2) list_single_cale_day_pane_fp_g4_ParamLimits

0x2191,	// (0x000413f2) list_single_cale_day_pane_fp_g4

0x21b5,	// (0x00041416) list_single_cale_day_pane_fp_g5_ParamLimits

0x21b5,	// (0x00041416) list_single_cale_day_pane_fp_g5

0x0004,

0xfb88,	// (0x0004ede9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb88,	// (0x0004ede9) list_single_cale_day_pane_fp_g

0x0caf,	// (0x0003ff10) list_single_cale_day_pane_fp_t1_ParamLimits

0x0caf,	// (0x0003ff10) list_single_cale_day_pane_fp_t1

0x0cd5,	// (0x0003ff36) list_single_cale_day_pane_fp_t2_ParamLimits

0x0cd5,	// (0x0003ff36) list_single_cale_day_pane_fp_t2

0x0cee,	// (0x0003ff4f) list_single_cale_day_pane_fp_t3_ParamLimits

0x0cee,	// (0x0003ff4f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb93,	// (0x0004edf4) list_single_cale_day_pane_fp_t_ParamLimits

0xfb93,	// (0x0004edf4) list_single_cale_day_pane_fp_t

0x7c73,	// (0x00046ed4) list_empty_pane_fp_g1_ParamLimits

0x7c73,	// (0x00046ed4) list_empty_pane_fp_g1

0x0d07,	// (0x0003ff68) list_empty_pane_fp_t1

0x0d15,	// (0x0003ff76) list_empty_pane_fp_t2

0x0001,

0xfb9a,	// (0x0004edfb) list_empty_pane_fp_t

0x7c73,	// (0x00046ed4) list_single_heading_pane_fp_g1_ParamLimits

0x7c73,	// (0x00046ed4) list_single_heading_pane_fp_g1

0x49dd,	// (0x00043c3e) list_single_heading_pane_fp_g2_ParamLimits

0x49dd,	// (0x00043c3e) list_single_heading_pane_fp_g2

0x7c7f,	// (0x00046ee0) list_single_heading_pane_fp_g3_ParamLimits

0x7c7f,	// (0x00046ee0) list_single_heading_pane_fp_g3

0x0002,

0xfb9f,	// (0x0004ee00) list_single_heading_pane_fp_g_ParamLimits

0xfb9f,	// (0x0004ee00) list_single_heading_pane_fp_g

0x0d23,	// (0x0003ff84) list_single_heading_pane_fp_t1_ParamLimits

0x0d23,	// (0x0003ff84) list_single_heading_pane_fp_t1

0x0d35,	// (0x0003ff96) list_single_heading_pane_fp_t2_ParamLimits

0x0d35,	// (0x0003ff96) list_single_heading_pane_fp_t2

0x0001,

0xfba6,	// (0x0004ee07) list_single_heading_pane_fp_t_ParamLimits

0xfba6,	// (0x0004ee07) list_single_heading_pane_fp_t

0x3763,	// (0x000429c4) aid_size_cell_fast

0x2ee4,	// (0x00042145) soft_indicator_pane_cp1_t1

0x37a0,	// (0x00042a01) cell_app_pane_cp2_ParamLimits

0x37a0,	// (0x00042a01) cell_app_pane_cp2

0x1f2d,	// (0x0004118e) fep_hwr_candidate_drop_down_list_pane

0xde53,	// (0x0004d0b4) fep_hwr_candidate_pane_g3_ParamLimits

0xde53,	// (0x0004d0b4) fep_hwr_candidate_pane_g3

0xde60,	// (0x0004d0c1) fep_hwr_candidate_pane_g4_ParamLimits

0xde60,	// (0x0004d0c1) fep_hwr_candidate_pane_g4

0x0002,

0xfb1a,	// (0x0004ed7b) fep_hwr_candidate_pane_g_ParamLimits

0xfb1a,	// (0x0004ed7b) fep_hwr_candidate_pane_g

0x773a,	// (0x0004699b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x773a,	// (0x0004699b) fep_vkb_candidate_drop_down_list_pane

0x7b4b,	// (0x00046dac) fep_vkb_candidate_pane_g3

0x7b53,	// (0x00046db4) fep_vkb_candidate_pane_g4

0x0002,

0xfb47,	// (0x0004eda8) fep_vkb_candidate_pane_g

0x7853,	// (0x00046ab4) cell_hwr_candidate_pane_g1_ParamLimits

0x7c04,	// (0x00046e65) cell_hwr_candidate_pane_g3_ParamLimits

0x7c04,	// (0x00046e65) cell_hwr_candidate_pane_g3

0x7c25,	// (0x00046e86) cell_hwr_candidate_pane_g4_ParamLimits

0x7c25,	// (0x00046e86) cell_hwr_candidate_pane_g4

0x0002,

0xfb61,	// (0x0004edc2) cell_hwr_candidate_pane_g_ParamLimits

0xfb61,	// (0x0004edc2) cell_hwr_candidate_pane_g

0x7b6a,	// (0x00046dcb) cell_vkb_candidate_pane_g3_ParamLimits

0x7b6a,	// (0x00046dcb) cell_vkb_candidate_pane_g3

0x7b85,	// (0x00046de6) cell_vkb_candidate_pane_g4_ParamLimits

0x7b85,	// (0x00046de6) cell_vkb_candidate_pane_g4

0x7cab,	// (0x00046f0c) cell_app_pane_cp2_g1_ParamLimits

0x7cab,	// (0x00046f0c) cell_app_pane_cp2_g1

0x7cc9,	// (0x00046f2a) cell_app_pane_cp2_g2_ParamLimits

0x7cc9,	// (0x00046f2a) cell_app_pane_cp2_g2

0x0001,

0xfbab,	// (0x0004ee0c) cell_app_pane_cp2_g_ParamLimits

0xfbab,	// (0x0004ee0c) cell_app_pane_cp2_g

0x7cd5,	// (0x00046f36) cell_app_pane_cp2_t1_ParamLimits

0x7cd5,	// (0x00046f36) cell_app_pane_cp2_t1

0x3557,	// (0x000427b8) grid_highlight_pane_cp1_ParamLimits

0x3557,	// (0x000427b8) grid_highlight_pane_cp1

0x21d9,	// (0x0004143a) cell_hwr_candidate_pane_cp1_ParamLimits

0x21d9,	// (0x0004143a) cell_hwr_candidate_pane_cp1

0x7853,	// (0x00046ab4) fep_hwr_candidate_drop_down_list_pane_g1

0x7ce7,	// (0x00046f48) fep_hwr_candidate_drop_down_list_pane_g2

0x7cf4,	// (0x00046f55) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb0,	// (0x0004ee11) fep_hwr_candidate_drop_down_list_pane_g

0x21f8,	// (0x00041459) fep_hwr_candidate_drop_down_list_scroll_pane

0x2201,	// (0x00041462) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2201,	// (0x00041462) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x220e,	// (0x0004146f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x220e,	// (0x0004146f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x221b,	// (0x0004147c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x221b,	// (0x0004147c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7b6a,	// (0x00046dcb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7b6a,	// (0x00046dcb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7b85,	// (0x00046de6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b85,	// (0x00046de6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2228,	// (0x00041489) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2228,	// (0x00041489) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2243,	// (0x000414a4) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2243,	// (0x000414a4) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x225e,	// (0x000414bf) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x225e,	// (0x000414bf) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb7,	// (0x0004ee18) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb7,	// (0x0004ee18) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d01,	// (0x00046f62) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d01,	// (0x00046f62) cell_vkb_candidate_pane_cp1

0x7853,	// (0x00046ab4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7853,	// (0x00046ab4) fep_vkb_candidate_drop_down_list_pane_g1

0x7ce7,	// (0x00046f48) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ce7,	// (0x00046f48) fep_vkb_candidate_drop_down_list_pane_g2

0x7cf4,	// (0x00046f55) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7cf4,	// (0x00046f55) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb0,	// (0x0004ee11) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb0,	// (0x0004ee11) fep_vkb_candidate_drop_down_list_pane_g

0x7d21,	// (0x00046f82) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7d21,	// (0x00046f82) fep_vkb_candidate_drop_down_list_scroll_pane

0x7d2e,	// (0x00046f8f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7d2e,	// (0x00046f8f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7d3b,	// (0x00046f9c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7d3b,	// (0x00046f9c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7d47,	// (0x00046fa8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7d47,	// (0x00046fa8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7c04,	// (0x00046e65) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c04,	// (0x00046e65) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7c25,	// (0x00046e86) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c25,	// (0x00046e86) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7d53,	// (0x00046fb4) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7d53,	// (0x00046fb4) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7d74,	// (0x00046fd5) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7d74,	// (0x00046fd5) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7d95,	// (0x00046ff6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7d95,	// (0x00046ff6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x0004ee29) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x0004ee29) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbcec,	// (0x0004af4d) title_pane_g1_ParamLimits

0xc57c,	// (0x0004b7dd) title_pane_g2_ParamLimits

0xf56a,	// (0x0004e7cb) title_pane_g_ParamLimits

0x3bad,	// (0x00042e0e) aid_call2_pane

0x3bb5,	// (0x00042e16) aid_call_pane

0x3bbd,	// (0x00042e1e) popup_clock_analogue_window_g1

0x3bbd,	// (0x00042e1e) popup_clock_analogue_window_g2

0x154e,	// (0x000407af) popup_clock_analogue_window_g3

0x1557,	// (0x000407b8) popup_clock_analogue_window_g4

0x2c01,	// (0x00041e62) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0004e970) popup_clock_analogue_window_g

0x155f,	// (0x000407c0) popup_clock_analogue_window_t1

0x156d,	// (0x000407ce) clock_digital_number_pane_ParamLimits

0x156d,	// (0x000407ce) clock_digital_number_pane

0x1579,	// (0x000407da) clock_digital_number_pane_cp02_ParamLimits

0x1579,	// (0x000407da) clock_digital_number_pane_cp02

0x1585,	// (0x000407e6) clock_digital_number_pane_cp03_ParamLimits

0x1585,	// (0x000407e6) clock_digital_number_pane_cp03

0x1591,	// (0x000407f2) clock_digital_number_pane_cp04_ParamLimits

0x1591,	// (0x000407f2) clock_digital_number_pane_cp04

0x159d,	// (0x000407fe) clock_digital_separator_pane_ParamLimits

0x159d,	// (0x000407fe) clock_digital_separator_pane

0x15a9,	// (0x0004080a) popup_clock_digital_window_t1_ParamLimits

0x15a9,	// (0x0004080a) popup_clock_digital_window_t1

0x2c01,	// (0x00041e62) clock_digital_number_pane_g1

0x2c01,	// (0x00041e62) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0004e97b) clock_digital_number_pane_g

0x2c01,	// (0x00041e62) clock_digital_separator_pane_g1

0x2c01,	// (0x00041e62) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0004e97b) clock_digital_separator_pane_g

0xd2f1,	// (0x0004c552) aid_fill_nsta_ParamLimits

0xd420,	// (0x0004c681) indicator_nsta_pane_ParamLimits

0x4d87,	// (0x00043fe8) popup_clock_analogue_window

0x4d87,	// (0x00043fe8) popup_clock_digital_window

0x3724,	// (0x00042985) grid_indicator_nsta_pane_ParamLimits

0x6fa0,	// (0x00046201) clock_nsta_pane_t2

0x0001,

0xfa9a,	// (0x0004ecfb) clock_nsta_pane_t

0x1512,	// (0x00040773) aid_size_max_handle

0xbd34,	// (0x0004af95) aid_size_min_handle

0x419a,	// (0x000433fb) editor_scroll_pane

0x7db0,	// (0x00047011) ex_editor_pane

0x36d1,	// (0x00042932) scroll_pane_cp13

0x34f6,	// (0x00042757) scroll_pane_cp14

0x3be7,	// (0x00042e48) scroll_pane_cp36

0xca70,	// (0x0004bcd1) list_single_graphic_hl_pane_cp2_ParamLimits

0xca70,	// (0x0004bcd1) list_single_graphic_hl_pane_cp2

0xc067,	// (0x0004b2c8) list_single_graphic_hl_pane_ParamLimits

0xc067,	// (0x0004b2c8) list_single_graphic_hl_pane

0x0d4b,	// (0x0003ffac) aid_size_min_hl_cp1

0x7db8,	// (0x00047019) list_highlight_pane_cp34_ParamLimits

0x7db8,	// (0x00047019) list_highlight_pane_cp34

0x7dc9,	// (0x0004702a) list_single_graphic_hl_pane_g1_ParamLimits

0x7dc9,	// (0x0004702a) list_single_graphic_hl_pane_g1

0x0d54,	// (0x0003ffb5) list_single_graphic_hl_pane_g2_ParamLimits

0x0d54,	// (0x0003ffb5) list_single_graphic_hl_pane_g2

0x0d54,	// (0x0003ffb5) list_single_graphic_hl_pane_g3_ParamLimits

0x0d54,	// (0x0003ffb5) list_single_graphic_hl_pane_g3

0x410b,	// (0x0004336c) list_single_graphic_hl_pane_g4_ParamLimits

0x410b,	// (0x0004336c) list_single_graphic_hl_pane_g4

0x2279,	// (0x000414da) list_single_graphic_hl_pane_g5_ParamLimits

0x2279,	// (0x000414da) list_single_graphic_hl_pane_g5

0x0004,

0xfbd9,	// (0x0004ee3a) list_single_graphic_hl_pane_g_ParamLimits

0xfbd9,	// (0x0004ee3a) list_single_graphic_hl_pane_g

0x0d60,	// (0x0003ffc1) list_single_graphic_hl_pane_t1_ParamLimits

0x0d60,	// (0x0003ffc1) list_single_graphic_hl_pane_t1

0x7dd6,	// (0x00047037) aid_size_min_hl_cp2

0x7ddf,	// (0x00047040) list_highlight_pane_cp34_cp2_ParamLimits

0x7ddf,	// (0x00047040) list_highlight_pane_cp34_cp2

0x7dc9,	// (0x0004702a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7dc9,	// (0x0004702a) list_single_graphic_hl_pane_g1_cp2

0x7dec,	// (0x0004704d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7dec,	// (0x0004704d) list_single_graphic_hl_pane_g2_cp2

0x7df8,	// (0x00047059) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7df8,	// (0x00047059) list_single_graphic_hl_pane_g3_cp2

0x541e,	// (0x0004467f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x541e,	// (0x0004467f) list_single_graphic_hl_pane_g4_cp2

0x7e06,	// (0x00047067) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7e06,	// (0x00047067) list_single_graphic_hl_pane_g5_cp2

0xbd97,	// (0x0004aff8) control_pane_g4_ParamLimits

0xbd97,	// (0x0004aff8) control_pane_g4

0x44f8,	// (0x00043759) bg_popup_sub_pane_cp10_ParamLimits

0x75cb,	// (0x0004682c) list_choice_list_pane_ParamLimits

0x75da,	// (0x0004683b) scroll_pane_cp23

0x2f74,	// (0x000421d5) bg_popup_preview_window_pane_cp02_ParamLimits

0x7bd6,	// (0x00046e37) list_preview_fixed_pane_ParamLimits

0x7bec,	// (0x00046e4d) list_preview_fixed_pane_cp_ParamLimits

0x7bec,	// (0x00046e4d) list_preview_fixed_pane_cp

0x7bf8,	// (0x00046e59) popup_preview_fixed_window_g1_ParamLimits

0x7bf8,	// (0x00046e59) popup_preview_fixed_window_g1

0x7c46,	// (0x00046ea7) popup_preview_fixed_window_g2_ParamLimits

0x7c46,	// (0x00046ea7) popup_preview_fixed_window_g2

0x0002,

0xfb68,	// (0x0004edc9) popup_preview_fixed_window_g_ParamLimits

0xfb68,	// (0x0004edc9) popup_preview_fixed_window_g

0x1486,	// (0x000406e7) aid_navi_side_left_pane_ParamLimits

0x149b,	// (0x000406fc) aid_navi_side_right_pane_ParamLimits

0x14b3,	// (0x00040714) navi_icon_pane_stacon_ParamLimits

0x14c7,	// (0x00040728) navi_navi_pane_stacon_ParamLimits

0x14b3,	// (0x00040714) navi_text_pane_stacon_ParamLimits

0x2bf7,	// (0x00041e58) main_text_info_pane

0x7e30,	// (0x00047091) listscroll_text_info_pane

0x7e38,	// (0x00047099) list_text_info_pane_ParamLimits

0x7e38,	// (0x00047099) list_text_info_pane

0x7e47,	// (0x000470a8) scroll_pane_cp24_ParamLimits

0x7e47,	// (0x000470a8) scroll_pane_cp24

0xdff7,	// (0x0004d258) list_text_info_pane_t1_ParamLimits

0xdff7,	// (0x0004d258) list_text_info_pane_t1

0xcc8b,	// (0x0004beec) popup_fast_swap2_window_ParamLimits

0xcc8b,	// (0x0004beec) popup_fast_swap2_window

0x7e96,	// (0x000470f7) aid_size_cell_fast2

0x2bf7,	// (0x00041e58) bg_popup_window_pane_cp17

0x546e,	// (0x000446cf) heading_pane_cp2

0x31c0,	// (0x00042421) listscroll_fast2_pane

0x7ea0,	// (0x00047101) grid_fast2_pane

0x7eaa,	// (0x0004710b) listscroll_fast2_pane_g1

0x7eb2,	// (0x00047113) listscroll_fast2_pane_g2

0x0001,

0xfbe4,	// (0x0004ee45) listscroll_fast2_pane_g

0x36d1,	// (0x00042932) scroll_pane_cp26

0x7ebc,	// (0x0004711d) cell_fast2_pane_ParamLimits

0x7ebc,	// (0x0004711d) cell_fast2_pane

0x7ed1,	// (0x00047132) cell_fast2_pane_g1

0x7eda,	// (0x0004713b) cell_fast2_pane_g2

0x7ee3,	// (0x00047144) cell_fast2_pane_g3

0x0002,

0xfbe9,	// (0x0004ee4a) cell_fast2_pane_g

0x32b3,	// (0x00042514) grid_highlight_pane_cp9

0x32c8,	// (0x00042529) main_eswt_pane_ParamLimits

0x32c8,	// (0x00042529) main_eswt_pane

0x7e5c,	// (0x000470bd) list_single_text_info_pane

0x7eeb,	// (0x0004714c) eswt_ctrl_button_pane

0x7eeb,	// (0x0004714c) eswt_ctrl_canvas_pane

0x7ef3,	// (0x00047154) eswt_ctrl_combo_pane

0x7eeb,	// (0x0004714c) eswt_ctrl_default_pane

0x7eeb,	// (0x0004714c) eswt_ctrl_label_pane

0x7efb,	// (0x0004715c) eswt_ctrl_wait_pane

0x7f03,	// (0x00047164) eswt_shell_pane

0x2bf7,	// (0x00041e58) listscroll_eswt_app_pane

0x7f23,	// (0x00047184) popup_eswt_tasktip_window_ParamLimits

0x7f23,	// (0x00047184) popup_eswt_tasktip_window

0x50a0,	// (0x00044301) bg_popup_window_pane_cp18

0x7f34,	// (0x00047195) eswt_control_pane_g1_ParamLimits

0x7f34,	// (0x00047195) eswt_control_pane_g1

0x7f41,	// (0x000471a2) eswt_control_pane_g2_ParamLimits

0x7f41,	// (0x000471a2) eswt_control_pane_g2

0x7f4e,	// (0x000471af) eswt_control_pane_g3_ParamLimits

0x7f4e,	// (0x000471af) eswt_control_pane_g3

0x7f5b,	// (0x000471bc) eswt_control_pane_g4_ParamLimits

0x7f5b,	// (0x000471bc) eswt_control_pane_g4

0x0003,

0xfbf0,	// (0x0004ee51) eswt_control_pane_g_ParamLimits

0xfbf0,	// (0x0004ee51) eswt_control_pane_g

0x3557,	// (0x000427b8) bg_button_pane_ParamLimits

0x3557,	// (0x000427b8) bg_button_pane

0x32c8,	// (0x00042529) common_borders_pane_copy2_ParamLimits

0x32c8,	// (0x00042529) common_borders_pane_copy2

0x7f68,	// (0x000471c9) control_button_pane_g1_ParamLimits

0x7f68,	// (0x000471c9) control_button_pane_g1

0x7f74,	// (0x000471d5) control_button_pane_g2_ParamLimits

0x7f74,	// (0x000471d5) control_button_pane_g2

0x7f80,	// (0x000471e1) control_button_pane_g3_ParamLimits

0x7f80,	// (0x000471e1) control_button_pane_g3

0x0002,

0xfbf9,	// (0x0004ee5a) control_button_pane_g_ParamLimits

0xfbf9,	// (0x0004ee5a) control_button_pane_g

0x7f94,	// (0x000471f5) control_button_pane_t1

0x7fa2,	// (0x00047203) control_button_pane_t2

0x0001,

0xfc00,	// (0x0004ee61) control_button_pane_t

0x4fb0,	// (0x00044211) bg_button_pane_g1

0x4fb8,	// (0x00044219) bg_button_pane_g2

0x4fc0,	// (0x00044221) bg_button_pane_g3

0x4fc8,	// (0x00044229) bg_button_pane_g4

0x4fd0,	// (0x00044231) bg_button_pane_g5

0x4fd8,	// (0x00044239) bg_button_pane_g6

0x4fe0,	// (0x00044241) bg_button_pane_g7

0x4fe8,	// (0x00044249) bg_button_pane_g8

0x4ff0,	// (0x00044251) bg_button_pane_g9

0x0008,

0xf866,	// (0x0004eac7) bg_button_pane_g

0x7586,	// (0x000467e7) common_borders_pane_ParamLimits

0x7586,	// (0x000467e7) common_borders_pane

0x7f34,	// (0x00047195) eswt_control_pane_g1_copy1_ParamLimits

0x7f34,	// (0x00047195) eswt_control_pane_g1_copy1

0x7f41,	// (0x000471a2) eswt_control_pane_g2_copy1_ParamLimits

0x7f41,	// (0x000471a2) eswt_control_pane_g2_copy1

0x7f4e,	// (0x000471af) eswt_control_pane_g3_copy1_ParamLimits

0x7f4e,	// (0x000471af) eswt_control_pane_g3_copy1

0x7f5b,	// (0x000471bc) eswt_control_pane_g4_copy1_ParamLimits

0x7f5b,	// (0x000471bc) eswt_control_pane_g4_copy1

0x75c1,	// (0x00046822) bg_eswt_ctrl_canvas_pane_g1

0x7586,	// (0x000467e7) common_borders_pane_cp2_ParamLimits

0x7586,	// (0x000467e7) common_borders_pane_cp2

0x7586,	// (0x000467e7) common_borders_pane_cp3_ParamLimits

0x7586,	// (0x000467e7) common_borders_pane_cp3

0x7fb0,	// (0x00047211) separator_horizontal_pane

0x7fb8,	// (0x00047219) separator_vertical_pane

0x7f34,	// (0x00047195) eswt_control_pane_g1_copy2_ParamLimits

0x7f34,	// (0x00047195) eswt_control_pane_g1_copy2

0x7f41,	// (0x000471a2) eswt_control_pane_g2_copy2_ParamLimits

0x7f41,	// (0x000471a2) eswt_control_pane_g2_copy2

0x7f4e,	// (0x000471af) eswt_control_pane_g3_copy2_ParamLimits

0x7f4e,	// (0x000471af) eswt_control_pane_g3_copy2

0x7f5b,	// (0x000471bc) eswt_control_pane_g4_copy2_ParamLimits

0x7f5b,	// (0x000471bc) eswt_control_pane_g4_copy2

0x2bf7,	// (0x00041e58) common_borders_pane_cp4

0x7fc1,	// (0x00047222) separator_horizontal_pane_g1

0x7fca,	// (0x0004722b) separator_horizontal_pane_g2

0x7fd3,	// (0x00047234) separator_horizontal_pane_g3

0x0002,

0xfc05,	// (0x0004ee66) separator_horizontal_pane_g

0x7f34,	// (0x00047195) eswt_control_pane_g1_copy3_ParamLimits

0x7f34,	// (0x00047195) eswt_control_pane_g1_copy3

0x7f41,	// (0x000471a2) eswt_control_pane_g2_copy3_ParamLimits

0x7f41,	// (0x000471a2) eswt_control_pane_g2_copy3

0x7f4e,	// (0x000471af) eswt_control_pane_g3_copy3_ParamLimits

0x7f4e,	// (0x000471af) eswt_control_pane_g3_copy3

0x7f5b,	// (0x000471bc) eswt_control_pane_g4_copy3_ParamLimits

0x7f5b,	// (0x000471bc) eswt_control_pane_g4_copy3

0x2bf7,	// (0x00041e58) common_borders_pane_cp5

0x7fdc,	// (0x0004723d) separator_vertical_pane_g1

0x7fe5,	// (0x00047246) separator_vertical_pane_g2

0x7fee,	// (0x0004724f) separator_vertical_pane_g3

0x0002,

0xfc0c,	// (0x0004ee6d) separator_vertical_pane_g

0x7f34,	// (0x00047195) eswt_control_pane_g1_copy4_ParamLimits

0x7f34,	// (0x00047195) eswt_control_pane_g1_copy4

0x7f41,	// (0x000471a2) eswt_control_pane_g2_copy4_ParamLimits

0x7f41,	// (0x000471a2) eswt_control_pane_g2_copy4

0x7f4e,	// (0x000471af) eswt_control_pane_g3_copy4_ParamLimits

0x7f4e,	// (0x000471af) eswt_control_pane_g3_copy4

0x7f5b,	// (0x000471bc) eswt_control_pane_g4_copy4_ParamLimits

0x7f5b,	// (0x000471bc) eswt_control_pane_g4_copy4

0xe012,	// (0x0004d273) eswt_ctrl_combo_button_pane

0xe01a,	// (0x0004d27b) eswt_ctrl_input_pane

0xe022,	// (0x0004d283) popup_choice_list_window_cp70

0xe02a,	// (0x0004d28b) eswt_ctrl_input_pane_t1

0x2bf7,	// (0x00041e58) input_focus_pane_cp70

0x7586,	// (0x000467e7) bg_button_pane_cp70_ParamLimits

0x7586,	// (0x000467e7) bg_button_pane_cp70

0xe038,	// (0x0004d299) eswt_ctrl_combo_button_pane_g1

0x8025,	// (0x00047286) wait_bar_pane_cp70

0x50a0,	// (0x00044301) bg_popup_window_pane_cp70_ParamLimits

0x50a0,	// (0x00044301) bg_popup_window_pane_cp70

0x802d,	// (0x0004728e) popup_eswt_tasktip_window_t1

0x8043,	// (0x000472a4) wait_bar_pane_cp71_ParamLimits

0x8043,	// (0x000472a4) wait_bar_pane_cp71

0x804f,	// (0x000472b0) grid_eswt_app_pane

0x39f8,	// (0x00042c59) scroll_pane_cp70

0xe040,	// (0x0004d2a1) cell_eswt_app_pane_ParamLimits

0xe040,	// (0x0004d2a1) cell_eswt_app_pane

0xe06a,	// (0x0004d2cb) cell_eswt_app_pane_g1_ParamLimits

0xe06a,	// (0x0004d2cb) cell_eswt_app_pane_g1

0xe099,	// (0x0004d2fa) cell_eswt_app_pane_g2_ParamLimits

0xe099,	// (0x0004d2fa) cell_eswt_app_pane_g2

0x0001,

0xfc13,	// (0x0004ee74) cell_eswt_app_pane_g_ParamLimits

0xfc13,	// (0x0004ee74) cell_eswt_app_pane_g

0xe0c2,	// (0x0004d323) cell_eswt_app_pane_t1_ParamLimits

0xe0c2,	// (0x0004d323) cell_eswt_app_pane_t1

0x8112,	// (0x00047373) grid_highlight_pane_cp70_ParamLimits

0x8112,	// (0x00047373) grid_highlight_pane_cp70

0x3ffa,	// (0x0004325b) set_content_pane_g1

0x4446,	// (0x000436a7) status_small_volume_pane

0x228d,	// (0x000414ee) status_small_volume_pane_g1

0x2295,	// (0x000414f6) volume_small2_pane

0x229e,	// (0x000414ff) volume_small2_pane_g1

0x22a7,	// (0x00041508) volume_small2_pane_g2

0x22b0,	// (0x00041511) volume_small2_pane_g3

0x22b9,	// (0x0004151a) volume_small2_pane_g4

0x22c2,	// (0x00041523) volume_small2_pane_g5

0x22cb,	// (0x0004152c) volume_small2_pane_g6

0x22d4,	// (0x00041535) volume_small2_pane_g7

0x22dd,	// (0x0004153e) volume_small2_pane_g8

0x22e6,	// (0x00041547) volume_small2_pane_g9

0x22ef,	// (0x00041550) volume_small2_pane_g10

0x0009,

0xfc18,	// (0x0004ee79) volume_small2_pane_g

0x799b,	// (0x00046bfc) fep_vkb_top_text_pane_g1_ParamLimits

0xdf9f,	// (0x0004d200) fep_vkb_top_text_pane_t1_ParamLimits

0x7c52,	// (0x00046eb3) popup_preview_fixed_window_g3_ParamLimits

0x7c52,	// (0x00046eb3) popup_preview_fixed_window_g3

0xd284,	// (0x0004c4e5) popup_toolbar_trans_pane

0xd958,	// (0x0004cbb9) aid_height_set_list_ParamLimits

0x63ff,	// (0x00045660) aid_size_parent_ParamLimits

0x44f8,	// (0x00043759) list_highlight_pane_cp2_ParamLimits

0x3ffa,	// (0x0004325b) set_content_pane_g1_ParamLimits

0xdae1,	// (0x0004cd42) list_single_image_pane_ParamLimits

0xdae1,	// (0x0004cd42) list_single_image_pane

0x811e,	// (0x0004737f) aid_size_cell_image_ParamLimits

0x811e,	// (0x0004737f) aid_size_cell_image

0xe0f4,	// (0x0004d355) grid_single_image_pane_ParamLimits

0xe0f4,	// (0x0004d355) grid_single_image_pane

0x49dd,	// (0x00043c3e) list_single_image_pane_g1_ParamLimits

0x49dd,	// (0x00043c3e) list_single_image_pane_g1

0x7c7f,	// (0x00046ee0) list_single_image_pane_g2_ParamLimits

0x7c7f,	// (0x00046ee0) list_single_image_pane_g2

0x0001,

0xfc2d,	// (0x0004ee8e) list_single_image_pane_g_ParamLimits

0xfc2d,	// (0x0004ee8e) list_single_image_pane_g

0x49e9,	// (0x00043c4a) list_single_image_pane_t1_ParamLimits

0x49e9,	// (0x00043c4a) list_single_image_pane_t1

0xe102,	// (0x0004d363) cell_image_list_pane_ParamLimits

0xe102,	// (0x0004d363) cell_image_list_pane

0x814c,	// (0x000473ad) cell_image_list_pane_g1

0x8155,	// (0x000473b6) cell_image_list_pane_g2

0x0001,

0xfc32,	// (0x0004ee93) cell_image_list_pane_g

0x815e,	// (0x000473bf) aid_size_cell_tb_trans_pane

0x3557,	// (0x000427b8) bg_tb_trans_pane

0x8170,	// (0x000473d1) grid_tb_trans_pane

0x4fb0,	// (0x00044211) bg_tb_trans_pane_g1

0x4fb8,	// (0x00044219) bg_tb_trans_pane_g2

0x4fc0,	// (0x00044221) bg_tb_trans_pane_g3

0x4fc8,	// (0x00044229) bg_tb_trans_pane_g4

0x4fd0,	// (0x00044231) bg_tb_trans_pane_g5

0x4fe8,	// (0x00044249) bg_tb_trans_pane_g6

0x4ff0,	// (0x00044251) bg_tb_trans_pane_g7

0x4fd8,	// (0x00044239) bg_tb_trans_pane_g8

0x4fe0,	// (0x00044241) bg_tb_trans_pane_g9

0x0008,

0xfc37,	// (0x0004ee98) bg_tb_trans_pane_g

0x8184,	// (0x000473e5) cell_toolbar_trans_pane_ParamLimits

0x8184,	// (0x000473e5) cell_toolbar_trans_pane

0x75c1,	// (0x00046822) cell_toolbar_trans_pane_g1

0xdd53,	// (0x0004cfb4) list_form2_midp_pane_t1

0xdd61,	// (0x0004cfc2) list_form2_midp_pane_t2

0x0001,

0xfae0,	// (0x0004ed41) list_form2_midp_pane_t

0x71a6,	// (0x00046407) scroll_pane_cp51_ParamLimits

0x7362,	// (0x000465c3) form2_midp_wait_pane_g1

0x736b,	// (0x000465cc) form2_midp_wait_pane_g2

0x7374,	// (0x000465d5) form2_midp_wait_pane_g3

0x0002,

0xfaf5,	// (0x0004ed56) form2_midp_wait_pane_g

0x2ceb,	// (0x00041f4c) list_highlight_pane_cp21_ParamLimits

0x73cb,	// (0x0004662c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x73da,	// (0x0004663b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x65b7,	// (0x00045818) list_single_2graphic_im_pane_ParamLimits

0x65b7,	// (0x00045818) list_single_2graphic_im_pane

0xe118,	// (0x0004d379) list_single_2graphic_im_pane_g1_ParamLimits

0xe118,	// (0x0004d379) list_single_2graphic_im_pane_g1

0xe129,	// (0x0004d38a) list_single_2graphic_im_pane_g2_ParamLimits

0xe129,	// (0x0004d38a) list_single_2graphic_im_pane_g2

0xe135,	// (0x0004d396) list_single_2graphic_im_pane_g3_ParamLimits

0xe135,	// (0x0004d396) list_single_2graphic_im_pane_g3

0x0003,

0xfc4a,	// (0x0004eeab) list_single_2graphic_im_pane_g_ParamLimits

0xfc4a,	// (0x0004eeab) list_single_2graphic_im_pane_g

0xe149,	// (0x0004d3aa) list_single_2graphic_im_pane_t1_ParamLimits

0xe149,	// (0x0004d3aa) list_single_2graphic_im_pane_t1

0x7c5e,	// (0x00046ebf) list_single_graphic_2heading_pane_fp_ParamLimits

0x7c5e,	// (0x00046ebf) list_single_graphic_2heading_pane_fp

0x0c2d,	// (0x0003fe8e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0c2d,	// (0x0003fe8e) list_single_graphic_2heading_pane_fp_g1

0x7c73,	// (0x00046ed4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7c73,	// (0x00046ed4) list_single_graphic_2heading_pane_fp_g2

0x49dd,	// (0x00043c3e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x49dd,	// (0x00043c3e) list_single_graphic_2heading_pane_fp_g3

0x7c7f,	// (0x00046ee0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7c7f,	// (0x00046ee0) list_single_graphic_2heading_pane_fp_g4

0x7c93,	// (0x00046ef4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7c93,	// (0x00046ef4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb78,	// (0x0004edd9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb78,	// (0x0004edd9) list_single_graphic_2heading_pane_fp_g

0x0d76,	// (0x0003ffd7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0d76,	// (0x0003ffd7) list_single_graphic_2heading_pane_fp_t1

0x0c65,	// (0x0003fec6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0c65,	// (0x0003fec6) list_single_graphic_2heading_pane_fp_t2

0x0d8c,	// (0x0003ffed) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0d8c,	// (0x0003ffed) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc53,	// (0x0004eeb4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc53,	// (0x0004eeb4) list_single_graphic_2heading_pane_fp_t

0x7661,	// (0x000468c2) fep_hwr_write_pane_g5_ParamLimits

0x7661,	// (0x000468c2) fep_hwr_write_pane_g5

0x766d,	// (0x000468ce) fep_hwr_write_pane_g6_ParamLimits

0x766d,	// (0x000468ce) fep_hwr_write_pane_g6

0x7f03,	// (0x00047164) eswt_shell_pane_ParamLimits

0x50a0,	// (0x00044301) bg_popup_window_pane_cp18_ParamLimits

0x6347,	// (0x000455a8) heading_pane_cp70

0x802d,	// (0x0004728e) popup_eswt_tasktip_window_t1_ParamLimits

0xd345,	// (0x0004c5a6) aid_touch_tab_arrow_left

0xd35b,	// (0x0004c5bc) aid_touch_tab_arrow_right

0xc594,	// (0x0004b7f5) title_pane_g3_ParamLimits

0xc594,	// (0x0004b7f5) title_pane_g3

0x3516,	// (0x00042777) set_value_pane_g1

0xd284,	// (0x0004c4e5) popup_toolbar_trans_pane_ParamLimits

0x815e,	// (0x000473bf) aid_size_cell_tb_trans_pane_ParamLimits

0x3557,	// (0x000427b8) bg_tb_trans_pane_ParamLimits

0x8170,	// (0x000473d1) grid_tb_trans_pane_ParamLimits

0x2f74,	// (0x000421d5) cont_note_pane_ParamLimits

0x2f74,	// (0x000421d5) cont_note_pane

0x32c8,	// (0x00042529) cont_snote2_single_text_pane_ParamLimits

0x32c8,	// (0x00042529) cont_snote2_single_text_pane

0x32c8,	// (0x00042529) cont_snote2_single_graphic_pane_ParamLimits

0x32c8,	// (0x00042529) cont_snote2_single_graphic_pane

0x5689,	// (0x000448ea) cont_note_wait_pane_ParamLimits

0x5689,	// (0x000448ea) cont_note_wait_pane

0x5689,	// (0x000448ea) cont_note_image_pane_ParamLimits

0x5689,	// (0x000448ea) cont_note_image_pane

0x8218,	// (0x00047479) popup_note2_window_g1_ParamLimits

0x8218,	// (0x00047479) popup_note2_window_g1

0x8249,	// (0x000474aa) popup_note2_window_t1_ParamLimits

0x8249,	// (0x000474aa) popup_note2_window_t1

0x828e,	// (0x000474ef) popup_note2_window_t2_ParamLimits

0x828e,	// (0x000474ef) popup_note2_window_t2

0x82d3,	// (0x00047534) popup_note2_window_t3_ParamLimits

0x82d3,	// (0x00047534) popup_note2_window_t3

0x8318,	// (0x00047579) popup_note2_window_t4_ParamLimits

0x8318,	// (0x00047579) popup_note2_window_t4

0x2ff8,	// (0x00042259) popup_note2_window_t5_ParamLimits

0x2ff8,	// (0x00042259) popup_note2_window_t5

0x0004,

0xfc5f,	// (0x0004eec0) popup_note2_window_t_ParamLimits

0xfc5f,	// (0x0004eec0) popup_note2_window_t

0x8347,	// (0x000475a8) popup_note2_image_window_g1_ParamLimits

0x8347,	// (0x000475a8) popup_note2_image_window_g1

0x8353,	// (0x000475b4) popup_note2_image_window_g2_ParamLimits

0x8353,	// (0x000475b4) popup_note2_image_window_g2

0x0001,

0xfc6a,	// (0x0004eecb) popup_note2_image_window_g_ParamLimits

0xfc6a,	// (0x0004eecb) popup_note2_image_window_g

0x8365,	// (0x000475c6) popup_note2_image_window_t1_ParamLimits

0x8365,	// (0x000475c6) popup_note2_image_window_t1

0x837d,	// (0x000475de) popup_note2_image_window_t2_ParamLimits

0x837d,	// (0x000475de) popup_note2_image_window_t2

0x8395,	// (0x000475f6) popup_note2_image_window_t3_ParamLimits

0x8395,	// (0x000475f6) popup_note2_image_window_t3

0x0002,

0xfc6f,	// (0x0004eed0) popup_note2_image_window_t_ParamLimits

0xfc6f,	// (0x0004eed0) popup_note2_image_window_t

0x5697,	// (0x000448f8) popup_note2_wait_window_g1_ParamLimits

0x5697,	// (0x000448f8) popup_note2_wait_window_g1

0x83b1,	// (0x00047612) popup_note2_wait_window_g2_ParamLimits

0x83b1,	// (0x00047612) popup_note2_wait_window_g2

0x56af,	// (0x00044910) popup_note2_wait_window_g3_ParamLimits

0x56af,	// (0x00044910) popup_note2_wait_window_g3

0x0002,

0xfc76,	// (0x0004eed7) popup_note2_wait_window_g_ParamLimits

0xfc76,	// (0x0004eed7) popup_note2_wait_window_g

0x83bd,	// (0x0004761e) popup_note2_wait_window_t1_ParamLimits

0x83bd,	// (0x0004761e) popup_note2_wait_window_t1

0x83db,	// (0x0004763c) popup_note2_wait_window_t2_ParamLimits

0x83db,	// (0x0004763c) popup_note2_wait_window_t2

0x83f9,	// (0x0004765a) popup_note2_wait_window_t3_ParamLimits

0x83f9,	// (0x0004765a) popup_note2_wait_window_t3

0x840b,	// (0x0004766c) popup_note2_wait_window_t4_ParamLimits

0x840b,	// (0x0004766c) popup_note2_wait_window_t4

0x0003,

0xfc7d,	// (0x0004eede) popup_note2_wait_window_t_ParamLimits

0xfc7d,	// (0x0004eede) popup_note2_wait_window_t

0x841d,	// (0x0004767e) wait_bar2_pane_ParamLimits

0x841d,	// (0x0004767e) wait_bar2_pane

0x8435,	// (0x00047696) popup_snote2_single_text_window_g1_ParamLimits

0x8435,	// (0x00047696) popup_snote2_single_text_window_g1

0x845d,	// (0x000476be) popup_snote2_single_text_window_t1_ParamLimits

0x845d,	// (0x000476be) popup_snote2_single_text_window_t1

0x84a9,	// (0x0004770a) popup_snote2_single_text_window_t2_ParamLimits

0x84a9,	// (0x0004770a) popup_snote2_single_text_window_t2

0x84f5,	// (0x00047756) popup_snote2_single_text_window_t3_ParamLimits

0x84f5,	// (0x00047756) popup_snote2_single_text_window_t3

0x8536,	// (0x00047797) popup_snote2_single_text_window_t4_ParamLimits

0x8536,	// (0x00047797) popup_snote2_single_text_window_t4

0x856c,	// (0x000477cd) popup_snote2_single_text_window_t5_ParamLimits

0x856c,	// (0x000477cd) popup_snote2_single_text_window_t5

0x0004,

0xfc86,	// (0x0004eee7) popup_snote2_single_text_window_t_ParamLimits

0xfc86,	// (0x0004eee7) popup_snote2_single_text_window_t

0x8597,	// (0x000477f8) popup_snote2_single_graphic_window_g1_ParamLimits

0x8597,	// (0x000477f8) popup_snote2_single_graphic_window_g1

0x85bf,	// (0x00047820) popup_snote2_single_graphic_window_g2_ParamLimits

0x85bf,	// (0x00047820) popup_snote2_single_graphic_window_g2

0x0001,

0xfc91,	// (0x0004eef2) popup_snote2_single_graphic_window_g_ParamLimits

0xfc91,	// (0x0004eef2) popup_snote2_single_graphic_window_g

0x85e7,	// (0x00047848) popup_snote2_single_graphic_window_t1_ParamLimits

0x85e7,	// (0x00047848) popup_snote2_single_graphic_window_t1

0x8633,	// (0x00047894) popup_snote2_single_graphic_window_t2_ParamLimits

0x8633,	// (0x00047894) popup_snote2_single_graphic_window_t2

0x84f5,	// (0x00047756) popup_snote2_single_graphic_window_t3_ParamLimits

0x84f5,	// (0x00047756) popup_snote2_single_graphic_window_t3

0x8536,	// (0x00047797) popup_snote2_single_graphic_window_t4_ParamLimits

0x8536,	// (0x00047797) popup_snote2_single_graphic_window_t4

0x856c,	// (0x000477cd) popup_snote2_single_graphic_window_t5_ParamLimits

0x856c,	// (0x000477cd) popup_snote2_single_graphic_window_t5

0x0004,

0xfc96,	// (0x0004eef7) popup_snote2_single_graphic_window_t_ParamLimits

0xfc96,	// (0x0004eef7) popup_snote2_single_graphic_window_t

0x7063,	// (0x000462c4) clock_nsta_pane_cp2_t1

0x7063,	// (0x000462c4) clock_nsta_pane_cp2_t2

0x0001,

0xfab6,	// (0x0004ed17) clock_nsta_pane_cp2_t

0x0669,	// (0x0003f8ca) form_field_data_wide_pane_g1_ParamLimits

0x3571,	// (0x000427d2) form_field_data_wide_pane_g2_ParamLimits

0x3571,	// (0x000427d2) form_field_data_wide_pane_g2

0x357d,	// (0x000427de) form_field_data_wide_pane_g3_ParamLimits

0x357d,	// (0x000427de) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0004e8f3) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0004e8f3) form_field_data_wide_pane_g

0xdc6d,	// (0x0004cece) grid_touch_3_pane_ParamLimits

0xdc6d,	// (0x0004cece) grid_touch_3_pane

0xe17a,	// (0x0004d3db) cell_touch_3_pane_ParamLimits

0xe17a,	// (0x0004d3db) cell_touch_3_pane

0x75c1,	// (0x00046822) cell_touch_3_pane_g1

0x75c1,	// (0x00046822) cell_touch_3_pane_g2

0x0001,

0xfb3b,	// (0x0004ed9c) cell_touch_3_pane_g

0x302a,	// (0x0004228b) cont_query_data_pane

0x3032,	// (0x00042293) cont_query_data_pane_cp1

0x86ad,	// (0x0004790e) button_value_adjust_pane_cp7

0x86b5,	// (0x00047916) query_popup_pane_cp3

0x3c82,	// (0x00042ee3) bg_popup_sub_pane_cp22_ParamLimits

0x15c8,	// (0x00040829) navi_navi_volume_pane_cp2

0x15e3,	// (0x00040844) popup_side_volume_key_window_g2

0x15f2,	// (0x00040853) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0004e985) popup_side_volume_key_window_g

0x160f,	// (0x00040870) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0004e98c) popup_side_volume_key_window_t

0x3f39,	// (0x0004319a) popup_side_volume_key_window_ParamLimits

0xb516,	// (0x0004a777) list_double_graphic_pane_g4_ParamLimits

0xb516,	// (0x0004a777) list_double_graphic_pane_g4

0xdace,	// (0x0004cd2f) list_single_2heading_msg_pane_ParamLimits

0xdace,	// (0x0004cd2f) list_single_2heading_msg_pane

0xc0c5,	// (0x0004b326) list_single_2heading_msg_pane_g1_ParamLimits

0xc0c5,	// (0x0004b326) list_single_2heading_msg_pane_g1

0xc0d1,	// (0x0004b332) list_single_2heading_msg_pane_g2_ParamLimits

0xc0d1,	// (0x0004b332) list_single_2heading_msg_pane_g2

0xc0e4,	// (0x0004b345) list_single_2heading_msg_pane_g3_ParamLimits

0xc0e4,	// (0x0004b345) list_single_2heading_msg_pane_g3

0xc0f0,	// (0x0004b351) list_single_2heading_msg_pane_g4_ParamLimits

0xc0f0,	// (0x0004b351) list_single_2heading_msg_pane_g4

0x0003,

0xfca1,	// (0x0004ef02) list_single_2heading_msg_pane_g_ParamLimits

0xfca1,	// (0x0004ef02) list_single_2heading_msg_pane_g

0xba2e,	// (0x0004ac8f) list_single_2heading_msg_pane_t1_ParamLimits

0xba2e,	// (0x0004ac8f) list_single_2heading_msg_pane_t1

0xba56,	// (0x0004acb7) list_single_2heading_msg_pane_t2_ParamLimits

0xba56,	// (0x0004acb7) list_single_2heading_msg_pane_t2

0xbac1,	// (0x0004ad22) list_single_2heading_msg_pane_t3_ParamLimits

0xbac1,	// (0x0004ad22) list_single_2heading_msg_pane_t3

0x0e41,	// (0x000400a2) list_single_2heading_msg_pane_t4_ParamLimits

0x0e41,	// (0x000400a2) list_single_2heading_msg_pane_t4

0x0003,

0xfcaa,	// (0x0004ef0b) list_single_2heading_msg_pane_t_ParamLimits

0xfcaa,	// (0x0004ef0b) list_single_2heading_msg_pane_t

0x2c3f,	// (0x00041ea0) title_pane_g4_ParamLimits

0x2c3f,	// (0x00041ea0) title_pane_g4

0x13d6,	// (0x00040637) title_pane_stacon_g3_ParamLimits

0x13d6,	// (0x00040637) title_pane_stacon_g3

0x81db,	// (0x0004743c) list_single_2graphic_im_pane_g4_ParamLimits

0x81db,	// (0x0004743c) list_single_2graphic_im_pane_g4

0x60ee,	// (0x0004534f) popup_side_volume_key_window_cp

0x68cf,	// (0x00045b30) main_idle_act2_pane_t1

0x19b5,	// (0x00040c16) toolbar_button_pane_g10

0xc901,	// (0x0004bb62) popup_toolbar_window_cp1

0x7054,	// (0x000462b5) clock_nsta_pane_cp_t1

0x7054,	// (0x000462b5) clock_nsta_pane_cp_t2

0x0001,

0xfab1,	// (0x0004ed12) clock_nsta_pane_cp_t

0x15c8,	// (0x00040829) navi_navi_volume_pane_cp2_ParamLimits

0x15d7,	// (0x00040838) popup_side_volume_key_window_g1_ParamLimits

0x15e3,	// (0x00040844) popup_side_volume_key_window_g2_ParamLimits

0x15f2,	// (0x00040853) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0004e985) popup_side_volume_key_window_g_ParamLimits

0x1f19,	// (0x0004117a) fep_hwr_aid_pane

0xde45,	// (0x0004d0a6) bg_fep_hwr_top_pane_g4_ParamLimits

0x7631,	// (0x00046892) fep_hwr_top_pane_g1_ParamLimits

0x7643,	// (0x000468a4) fep_hwr_top_pane_g2_ParamLimits

0x1fd2,	// (0x00041233) fep_hwr_top_pane_g3_ParamLimits

0xfb06,	// (0x0004ed67) fep_hwr_top_pane_g_ParamLimits

0x1fe7,	// (0x00041248) fep_hwr_top_text_pane_ParamLimits

0x5eb1,	// (0x00045112) aid_touch_tab_arrow_arrow_2

0x5eba,	// (0x0004511b) aid_touch_tab_arrow_left_2

0x1f2d,	// (0x0004118e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1f64,	// (0x000411c5) fep_hwr_prediction_pane

0x77a3,	// (0x00046a04) fep_vkb_prediction_pane

0xdf7f,	// (0x0004d1e0) fep_vkb_side_pane_g3_ParamLimits

0xdf7f,	// (0x0004d1e0) fep_vkb_side_pane_g3

0x7853,	// (0x00046ab4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7ce7,	// (0x00046f48) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7cf4,	// (0x00046f55) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb0,	// (0x0004ee11) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x86da,	// (0x0004793b) fep_hwr_prediction_pane_g1

0x2328,	// (0x00041589) fep_hwr_prediction_pane_g2

0x2330,	// (0x00041591) fep_hwr_prediction_pane_g3

0x2338,	// (0x00041599) fep_hwr_prediction_pane_g4

0x0003,

0xfcb3,	// (0x0004ef14) fep_hwr_prediction_pane_g

0x86da,	// (0x0004793b) fep_vkb_prediction_pane_g1

0x86e4,	// (0x00047945) fep_vkb_prediction_pane_g2

0x86ec,	// (0x0004794d) fep_vkb_prediction_pane_g3

0x86f4,	// (0x00047955) fep_vkb_prediction_pane_g4

0x0003,

0xfcbc,	// (0x0004ef1d) fep_vkb_prediction_pane_g

0x1c91,	// (0x00040ef2) slider_set_pane_g3

0x1ca5,	// (0x00040f06) slider_set_pane_g4

0x1cbd,	// (0x00040f1e) slider_set_pane_g5

0x1c91,	// (0x00040ef2) slider_set_pane_g6

0x1cd3,	// (0x00040f34) slider_set_pane_g7

0x6564,	// (0x000457c5) slider_form_pane_g3

0x656d,	// (0x000457ce) slider_form_pane_g4

0x6575,	// (0x000457d6) slider_form_pane_g5

0x6564,	// (0x000457c5) slider_form_pane_g6

0xdaa3,	// (0x0004cd04) slider_form_pane_g7

0x6b8c,	// (0x00045ded) slider_set_pane_vc_g3

0x6b95,	// (0x00045df6) slider_set_pane_vc_g4

0x6b9e,	// (0x00045dff) slider_set_pane_vc_g5

0x6b8c,	// (0x00045ded) slider_set_pane_vc_g6

0x6ba7,	// (0x00045e08) slider_set_pane_vc_g7

0x6b8c,	// (0x00045ded) slider_form_pane_vc_g1

0x6b95,	// (0x00045df6) slider_form_pane_vc_g2

0x6b9e,	// (0x00045dff) slider_form_pane_vc_g3

0x6b8c,	// (0x00045ded) slider_form_pane_vc_g4

0x6d5a,	// (0x00045fbb) slider_form_pane_vc_g5

0x0004,

0xfa8a,	// (0x0004eceb) slider_form_pane_vc_g

0x2bf7,	// (0x00041e58) main_idle_act3_pane

0x86fc,	// (0x0004795d) ai3_links_pane

0xe1c3,	// (0x0004d424) popup_ai3_data_window_ParamLimits

0xe1c3,	// (0x0004d424) popup_ai3_data_window

0x2bf7,	// (0x00041e58) grid_ai3_links_pane

0xe1dd,	// (0x0004d43e) cell_ai3_links_pane_ParamLimits

0xe1dd,	// (0x0004d43e) cell_ai3_links_pane

0x8737,	// (0x00047998) bg_popup_sub_pane_cp11

0x8744,	// (0x000479a5) cell_ai3_links_pane_g1

0x2bf7,	// (0x00041e58) bg_popup_sub_pane_cp12

0x8769,	// (0x000479ca) heading_ai3_data_pane

0x8771,	// (0x000479d2) list_ai3_gene_pane

0x877d,	// (0x000479de) popup_ai3_data_window_g1

0x8785,	// (0x000479e6) heading_ai3_data_pane_g1

0x878d,	// (0x000479ee) heading_ai3_data_pane_t1

0x879b,	// (0x000479fc) list_double_ai3_gene_pane_ParamLimits

0x879b,	// (0x000479fc) list_double_ai3_gene_pane

0x87a8,	// (0x00047a09) list_single_ai3_gene_pane_ParamLimits

0x87a8,	// (0x00047a09) list_single_ai3_gene_pane

0x7586,	// (0x000467e7) list_highlight_pane_cp7_ParamLimits

0x7586,	// (0x000467e7) list_highlight_pane_cp7

0x87b5,	// (0x00047a16) list_single_a13_gene_pane_t1_ParamLimits

0x87b5,	// (0x00047a16) list_single_a13_gene_pane_t1

0x87cc,	// (0x00047a2d) list_single_ai3_gene_pane_g1

0x87d5,	// (0x00047a36) list_single_ai3_gene_pane_g2

0x0001,

0xfcc5,	// (0x0004ef26) list_single_ai3_gene_pane_g

0x87dd,	// (0x00047a3e) list_double_ai3_gene_pane_g1_ParamLimits

0x87dd,	// (0x00047a3e) list_double_ai3_gene_pane_g1

0x87e9,	// (0x00047a4a) list_double_ai3_gene_pane_t1_ParamLimits

0x87e9,	// (0x00047a4a) list_double_ai3_gene_pane_t1

0x8805,	// (0x00047a66) list_double_ai3_gene_pane_t2_ParamLimits

0x8805,	// (0x00047a66) list_double_ai3_gene_pane_t2

0x881b,	// (0x00047a7c) list_double_ai3_gene_pane_t3_ParamLimits

0x881b,	// (0x00047a7c) list_double_ai3_gene_pane_t3

0x0002,

0xfcca,	// (0x0004ef2b) list_double_ai3_gene_pane_t_ParamLimits

0xfcca,	// (0x0004ef2b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0da2,	// (0x00040003) aid_size_min_col_2

0xe1ad,	// (0x0004d40e) aid_size_min_msg_ParamLimits

0xe1ad,	// (0x0004d40e) aid_size_min_msg

0xdf93,	// (0x0004d1f4) fep_vkb_top_text_pane_g2_ParamLimits

0xdf93,	// (0x0004d1f4) fep_vkb_top_text_pane_g2

0x0001,

0xfb36,	// (0x0004ed97) fep_vkb_top_text_pane_g_ParamLimits

0xfb36,	// (0x0004ed97) fep_vkb_top_text_pane_g

0x2bf7,	// (0x00041e58) main_hc_apps_shell_pane

0x8838,	// (0x00047a99) grid_hc_apps_pane_ParamLimits

0x8838,	// (0x00047a99) grid_hc_apps_pane

0x8847,	// (0x00047aa8) list_hc_apps_pane

0x884f,	// (0x00047ab0) scroll_pane_cp37_ParamLimits

0x884f,	// (0x00047ab0) scroll_pane_cp37

0xe1f7,	// (0x0004d458) cell_hc_apps_pane_ParamLimits

0xe1f7,	// (0x0004d458) cell_hc_apps_pane

0xe2b5,	// (0x0004d516) cell_hc_apps_pane_g1_ParamLimits

0xe2b5,	// (0x0004d516) cell_hc_apps_pane_g1

0x893a,	// (0x00047b9b) cell_hc_apps_pane_g2_ParamLimits

0x893a,	// (0x00047b9b) cell_hc_apps_pane_g2

0x8956,	// (0x00047bb7) cell_hc_apps_pane_g3_ParamLimits

0x8956,	// (0x00047bb7) cell_hc_apps_pane_g3

0x0002,

0xfcd1,	// (0x0004ef32) cell_hc_apps_pane_g_ParamLimits

0xfcd1,	// (0x0004ef32) cell_hc_apps_pane_g

0xe2e2,	// (0x0004d543) cell_hc_apps_pane_t1_ParamLimits

0xe2e2,	// (0x0004d543) cell_hc_apps_pane_t1

0x2f74,	// (0x000421d5) grid_highlight_pane_cp10_ParamLimits

0x2f74,	// (0x000421d5) grid_highlight_pane_cp10

0xe320,	// (0x0004d581) list_single_hc_apps_pane_ParamLimits

0xe320,	// (0x0004d581) list_single_hc_apps_pane

0xe34d,	// (0x0004d5ae) list_single_hc_apps_pane_g1

0xc108,	// (0x0004b369) list_single_hc_apps_pane_g2

0x0001,

0xfcd8,	// (0x0004ef39) list_single_hc_apps_pane_g

0xc121,	// (0x0004b382) list_single_hc_apps_pane_g2_copy1

0x0e66,	// (0x000400c7) list_single_hc_apps_pane_t1

0x2ceb,	// (0x00041f4c) bg_set_opt_pane_cp_ParamLimits

0x1281,	// (0x000404e2) setting_slider_pane_t1_ParamLimits

0x129a,	// (0x000404fb) setting_slider_pane_t2_ParamLimits

0x12b4,	// (0x00040515) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0004e7db) setting_slider_pane_t_ParamLimits

0x12cc,	// (0x0004052d) slider_set_pane_ParamLimits

0x186d,	// (0x00040ace) control_pane_g5_ParamLimits

0x186d,	// (0x00040ace) control_pane_g5

0x63b3,	// (0x00045614) slider_set_pane_g1_ParamLimits

0x1c85,	// (0x00040ee6) slider_set_pane_g2_ParamLimits

0x1c91,	// (0x00040ef2) slider_set_pane_g3_ParamLimits

0x1ca5,	// (0x00040f06) slider_set_pane_g4_ParamLimits

0x1cbd,	// (0x00040f1e) slider_set_pane_g5_ParamLimits

0x1c91,	// (0x00040ef2) slider_set_pane_g6_ParamLimits

0x1cd3,	// (0x00040f34) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0004ebc5) slider_set_pane_g_ParamLimits

0x4026,	// (0x00043287) navi_icon_text_pane_ParamLimits

0xd311,	// (0x0004c572) aid_fill_nsta_2_ParamLimits

0xd345,	// (0x0004c5a6) aid_touch_tab_arrow_left_ParamLimits

0xd35b,	// (0x0004c5bc) aid_touch_tab_arrow_right_ParamLimits

0xd3f6,	// (0x0004c657) clock_nsta_pane_ParamLimits

0xd87f,	// (0x0004cae0) navi_icon_pane_g1_ParamLimits

0xd88b,	// (0x0004caec) navi_text_pane_t1_ParamLimits

0xdd35,	// (0x0004cf96) navi_icon_text_pane_g1_ParamLimits

0xdd41,	// (0x0004cfa2) navi_icon_text_pane_t1_ParamLimits

0xe34d,	// (0x0004d5ae) list_single_hc_apps_pane_g1_ParamLimits

0xc108,	// (0x0004b369) list_single_hc_apps_pane_g2_ParamLimits

0xfcd8,	// (0x0004ef39) list_single_hc_apps_pane_g_ParamLimits

0xc121,	// (0x0004b382) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0e66,	// (0x000400c7) list_single_hc_apps_pane_t1_ParamLimits

0xbc81,	// (0x0004aee2) popup_toolbar2_fixed_window_ParamLimits

0xbc81,	// (0x0004aee2) popup_toolbar2_fixed_window

0xd27a,	// (0x0004c4db) popup_toolbar2_float_window

0x2bf7,	// (0x00041e58) bg_popup_sub_pane_cp27

0x8a2d,	// (0x00047c8e) grid_toolbar2_float_pane

0x2bf7,	// (0x00041e58) bg_popup_sub_pane_cp26

0x8a2d,	// (0x00047c8e) grid_toolbar2_fixed_pane

0xe366,	// (0x0004d5c7) cell_toolbar2_fixed_pane_ParamLimits

0xe366,	// (0x0004d5c7) cell_toolbar2_fixed_pane

0xe381,	// (0x0004d5e2) cell_toolbar2_fixed_pane_g1

0x8a4e,	// (0x00047caf) toolbar2_fixed_button_pane

0x4fb0,	// (0x00044211) toolbar2_fixed_button_pane_g1

0x4fb8,	// (0x00044219) toolbar2_fixed_button_pane_g2

0x4fc0,	// (0x00044221) toolbar2_fixed_button_pane_g3

0x4fc8,	// (0x00044229) toolbar2_fixed_button_pane_g4

0x4fd0,	// (0x00044231) toolbar2_fixed_button_pane_g5

0x4fd8,	// (0x00044239) toolbar2_fixed_button_pane_g6

0x4fe0,	// (0x00044241) toolbar2_fixed_button_pane_g7

0x4fe8,	// (0x00044249) toolbar2_fixed_button_pane_g8

0x4ff0,	// (0x00044251) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0004eac7) toolbar2_fixed_button_pane_g

0x8a56,	// (0x00047cb7) cell_toolbar2_float_pane_ParamLimits

0x8a56,	// (0x00047cb7) cell_toolbar2_float_pane

0x8a67,	// (0x00047cc8) cell_toolbar2_float_pane_g1

0x8a4e,	// (0x00047caf) toolbar2_fixed_button_pane_cp

0xde6d,	// (0x0004d0ce) fep_vkb_accented_list_pane_ParamLimits

0xde6d,	// (0x0004d0ce) fep_vkb_accented_list_pane

0x2135,	// (0x00041396) bg_popup_fep_shadow_pane_g9

0x419a,	// (0x000433fb) bg_popup_fep_shadow_pane_cp3

0x36b8,	// (0x00042919) list_accented_list_pane

0x8a70,	// (0x00047cd1) list_single_accented_list_pane_ParamLimits

0x8a70,	// (0x00047cd1) list_single_accented_list_pane

0x419a,	// (0x000433fb) list_highlight_pane_cp10

0x8a81,	// (0x00047ce2) list_single_accented_list_pane_t1

0xd1a4,	// (0x0004c405) popup_slider_window_ParamLimits

0xd1a4,	// (0x0004c405) popup_slider_window

0x86bd,	// (0x0004791e) aid_indentation_list_msg

0xe47a,	// (0x0004d6db) bg_popup_window_pane_cp19

0x8ba5,	// (0x00047e06) popup_slider_window_g1

0x8bc1,	// (0x00047e22) popup_slider_window_g2

0x8bdd,	// (0x00047e3e) popup_slider_window_g3

0x0005,

0xfcdd,	// (0x0004ef3e) popup_slider_window_g

0x8c39,	// (0x00047e9a) popup_slider_window_t1

0x8cad,	// (0x00047f0e) small_volume_slider_vertical_pane

0x75c1,	// (0x00046822) small_volume_slider_vertical_pane_g1

0x75c1,	// (0x00046822) small_volume_slider_vertical_pane_g2

0x8cc9,	// (0x00047f2a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcef,	// (0x0004ef50) small_volume_slider_vertical_pane_g

0xbbef,	// (0x0004ae50) area_side_right_pane_ParamLimits

0xbbef,	// (0x0004ae50) area_side_right_pane

0xc13d,	// (0x0004b39e) aid_size_side_button_ParamLimits

0xc13d,	// (0x0004b39e) aid_size_side_button

0xc156,	// (0x0004b3b7) grid_sctrl_middle_pane_ParamLimits

0xc156,	// (0x0004b3b7) grid_sctrl_middle_pane

0x23a9,	// (0x0004160a) sctrl_sk_bottom_pane

0x23ba,	// (0x0004161b) sctrl_sk_top_pane

0x23cc,	// (0x0004162d) aid_touch_sctrl_top

0x2f74,	// (0x000421d5) bg_sctrl_sk_pane_ParamLimits

0x2f74,	// (0x000421d5) bg_sctrl_sk_pane

0x23d9,	// (0x0004163a) sctrl_sk_top_pane_g1

0x23e6,	// (0x00041647) sctrl_sk_top_pane_t1

0x23cc,	// (0x0004162d) aid_touch_sctrl_bottom

0x2f74,	// (0x000421d5) bg_sctrl_sk_pane_cp_ParamLimits

0x2f74,	// (0x000421d5) bg_sctrl_sk_pane_cp

0x2401,	// (0x00041662) sctrl_sk_bottom_pane_g1

0x23e6,	// (0x00041647) sctrl_sk_bottom_pane_t1

0xc170,	// (0x0004b3d1) cell_sctrl_middle_pane_ParamLimits

0xc170,	// (0x0004b3d1) cell_sctrl_middle_pane

0xc181,	// (0x0004b3e2) aid_touch_sctrl_middle_ParamLimits

0xc181,	// (0x0004b3e2) aid_touch_sctrl_middle

0xc18e,	// (0x0004b3ef) bg_sctrl_middle_pane_ParamLimits

0xc18e,	// (0x0004b3ef) bg_sctrl_middle_pane

0x8d51,	// (0x00047fb2) cell_sctrl_middle_pane_g1_ParamLimits

0x8d51,	// (0x00047fb2) cell_sctrl_middle_pane_g1

0xc19c,	// (0x0004b3fd) cell_sctrl_middle_pane_g2_ParamLimits

0xc19c,	// (0x0004b3fd) cell_sctrl_middle_pane_g2

0x0001,

0xfcfb,	// (0x0004ef5c) cell_sctrl_middle_pane_g_ParamLimits

0xfcfb,	// (0x0004ef5c) cell_sctrl_middle_pane_g

0x4fb0,	// (0x00044211) bg_sctrl_middle_pane_g1

0x4fb8,	// (0x00044219) bg_sctrl_middle_pane_g2

0x4fc0,	// (0x00044221) bg_sctrl_middle_pane_g3

0x4fc8,	// (0x00044229) bg_sctrl_middle_pane_g4

0x4fd0,	// (0x00044231) bg_sctrl_middle_pane_g5

0x4fd8,	// (0x00044239) bg_sctrl_middle_pane_g6

0x4fe0,	// (0x00044241) bg_sctrl_middle_pane_g7

0x4fe8,	// (0x00044249) bg_sctrl_middle_pane_g8

0x0007,

0xfd00,	// (0x0004ef61) bg_sctrl_middle_pane_g

0x4ff0,	// (0x00044251) bg_sctrl_middle_pane_g8_copy1

0x4fb0,	// (0x00044211) bg_sctrl_sk_pane_g1

0x4fb8,	// (0x00044219) bg_sctrl_sk_pane_g2

0x4fc0,	// (0x00044221) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0004eac7) bg_sctrl_sk_pane_g

0x3486,	// (0x000426e7) aid_size_touch_scroll_bar

0x4fc8,	// (0x00044229) bg_sctrl_sk_pane_g4

0x4fd0,	// (0x00044231) bg_sctrl_sk_pane_g5

0x4fd8,	// (0x00044239) bg_sctrl_sk_pane_g6

0x4fe0,	// (0x00044241) bg_sctrl_sk_pane_g7

0x4fe8,	// (0x00044249) bg_sctrl_sk_pane_g8

0x4ff0,	// (0x00044251) bg_sctrl_sk_pane_g9

0x4598,	// (0x000437f9) popup_fep_china_hwr2_fs_candidate_window

0xcce8,	// (0x0004bf49) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcce8,	// (0x0004bf49) popup_fep_china_hwr2_fs_control_window

0x7853,	// (0x00046ab4) sctrl_sk_top_pane_g2

0x0001,

0xfcf6,	// (0x0004ef57) sctrl_sk_top_pane_g

0xe532,	// (0x0004d793) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe532,	// (0x0004d793) aid_fep_china_hwr2_fs_cell

0xe546,	// (0x0004d7a7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe546,	// (0x0004d7a7) bg_popup_fep_shadow_pane_cp4

0xe55d,	// (0x0004d7be) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe55d,	// (0x0004d7be) bg_popup_fep_shadow_pane_cp5

0xe56f,	// (0x0004d7d0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe56f,	// (0x0004d7d0) popup_fep_china_hwr2_fs_control_bar_grid

0xe583,	// (0x0004d7e4) popup_fep_china_hwr2_fs_control_funtion_grid

0x8d25,	// (0x00047f86) aid_fep_china_hwr2_fs_candi_cell

0x2bf7,	// (0x00041e58) bg_popup_fep_shadow_pane_cp6

0x8d2f,	// (0x00047f90) popup_fep_china_hwr2_fs_candidate_grid

0xe58b,	// (0x0004d7ec) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe58b,	// (0x0004d7ec) cell_fep_china_hwr2_fs_funtion_grid

0x75c1,	// (0x00046822) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8d51,	// (0x00047fb2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8d51,	// (0x00047fb2) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8d5f,	// (0x00047fc0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8d5f,	// (0x00047fc0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd11,	// (0x0004ef72) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd11,	// (0x0004ef72) cell_fep_china_hwr2_fs_funtion_grid_g

0xe5a3,	// (0x0004d804) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe5a3,	// (0x0004d804) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe5b8,	// (0x0004d819) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe5b8,	// (0x0004d819) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd16,	// (0x0004ef77) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd16,	// (0x0004ef77) cell_fep_china_hwr2_fs_funtion_grid_t

0x8da6,	// (0x00048007) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8dae,	// (0x0004800f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8db6,	// (0x00048017) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1b,	// (0x0004ef7c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8dbe,	// (0x0004801f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8dbe,	// (0x0004801f) cell_fep_china_hwr2_fs_candidate_grid

0x8dd7,	// (0x00048038) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8ddf,	// (0x00048040) popup_fep_china_hwr2_fs_candidate_grid_g21

0x75c1,	// (0x00046822) cell_fep_china_hwr2_fs_candidate_grid_g1

0x75c1,	// (0x00046822) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3b,	// (0x0004ed9c) cell_fep_china_hwr2_fs_candidate_grid_g

0x8de7,	// (0x00048048) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4bad,	// (0x00043e0e) clock_nsta_pane_cp_24_ParamLimits

0x4bad,	// (0x00043e0e) clock_nsta_pane_cp_24

0x4c2b,	// (0x00043e8c) indicator_nsta_pane_cp_24_ParamLimits

0x4c2b,	// (0x00043e8c) indicator_nsta_pane_cp_24

0x5d09,	// (0x00044f6a) heading_pane_g1

0x0001,

0xf8cb,	// (0x0004eb2c) heading_pane_g

0x6718,	// (0x00045979) grid_sct_catagory_button_pane

0x6748,	// (0x000459a9) scroll_pane_cp5_ParamLimits

0x71b2,	// (0x00046413) button_value_adjust_pane_cp5_ParamLimits

0x71b2,	// (0x00046413) button_value_adjust_pane_cp5

0x7291,	// (0x000464f2) form2_midp_time_pane_ParamLimits

0x8df5,	// (0x00048056) cell_sct_catagory_button_pane_ParamLimits

0x8df5,	// (0x00048056) cell_sct_catagory_button_pane

0x7586,	// (0x000467e7) bg_button_pane_cp01_ParamLimits

0x7586,	// (0x000467e7) bg_button_pane_cp01

0x75c1,	// (0x00046822) cell_sct_catagory_button_pane_g1

0xd21d,	// (0x0004c47e) popup_tb_extension_window

0xe5d4,	// (0x0004d835) aid_size_cell_ext_ParamLimits

0xe5d4,	// (0x0004d835) aid_size_cell_ext

0x32c8,	// (0x00042529) bg_tb_trans_pane_cp1_ParamLimits

0x32c8,	// (0x00042529) bg_tb_trans_pane_cp1

0xe5fa,	// (0x0004d85b) grid_tb_ext_pane_ParamLimits

0xe5fa,	// (0x0004d85b) grid_tb_ext_pane

0xe635,	// (0x0004d896) cell_tb_ext_pane_ParamLimits

0xe635,	// (0x0004d896) cell_tb_ext_pane

0xe65d,	// (0x0004d8be) cell_tb_ext_pane_g1_ParamLimits

0xe65d,	// (0x0004d8be) cell_tb_ext_pane_g1

0x8e89,	// (0x000480ea) cell_tb_ext_pane_t1

0x2f74,	// (0x000421d5) list_highlight_pane_cp11_ParamLimits

0x2f74,	// (0x000421d5) list_highlight_pane_cp11

0x11b4,	// (0x00040415) popup_uni_indicator_window_ParamLimits

0x11b4,	// (0x00040415) popup_uni_indicator_window

0x3557,	// (0x000427b8) bg_popup_sub_pane_cp14

0x8ea4,	// (0x00048105) list_uniindi_pane

0x8eb0,	// (0x00048111) uniindi_top_pane

0x2f74,	// (0x000421d5) bg_uniindi_top_pane

0x8ecf,	// (0x00048130) uniindi_top_pane_g1

0x8ee5,	// (0x00048146) uniindi_top_pane_g2

0x0003,

0xfd22,	// (0x0004ef83) uniindi_top_pane_g

0x8f0f,	// (0x00048170) uniindi_top_pane_t1

0x8f39,	// (0x0004819a) list_single_uniindi_pane_ParamLimits

0x8f39,	// (0x0004819a) list_single_uniindi_pane

0x75c1,	// (0x00046822) bg_uniindi_top_pane_g1

0x8f4c,	// (0x000481ad) list_single_uniindi_pane_g1

0x8f5f,	// (0x000481c0) list_single_uniindi_pane_t1

0x2bf7,	// (0x00041e58) control_bg_pane

0x8f84,	// (0x000481e5) bg_sctrl_sk_pane_cp1

0x8f8d,	// (0x000481ee) bg_sctrl_sk_pane_cp2

0x8f96,	// (0x000481f7) control_bg_pane_g1

0x8f9f,	// (0x00048200) control_bg_pane_g2

0x0001,

0xfd2b,	// (0x0004ef8c) control_bg_pane_g

0x6fe6,	// (0x00046247) cell_indicator_nsta_pane_g1_ParamLimits

0xdc9c,	// (0x0004cefd) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9f,	// (0x0004ed00) cell_indicator_nsta_pane_g_ParamLimits

0x0c03,	// (0x0003fe64) form2_midp_time_pane_t1_ParamLimits

0xcc65,	// (0x0004bec6) main_idle_act4_pane_ParamLimits

0xcc65,	// (0x0004bec6) main_idle_act4_pane

0xd21d,	// (0x0004c47e) popup_tb_extension_window_ParamLimits

0xe61c,	// (0x0004d87d) tb_ext_find_pane_ParamLimits

0xe61c,	// (0x0004d87d) tb_ext_find_pane

0x8fa8,	// (0x00048209) ai_gene_pane_1_cp1

0x42df,	// (0x00043540) ai_gene_pane_2_cp1

0x8fb0,	// (0x00048211) list_single_idle_plugin_calendar_pane

0x8fb9,	// (0x0004821a) list_single_idle_plugin_notification_pane

0x8fc2,	// (0x00048223) list_single_idle_plugin_player_pane

0xe67a,	// (0x0004d8db) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe67a,	// (0x0004d8db) list_single_idle_plugin_shortcut_pane

0xe6a2,	// (0x0004d903) main_idle_act4_pane_t1

0xe6b8,	// (0x0004d919) main_idle_act4_pane_t2

0x0001,

0xfd30,	// (0x0004ef91) main_idle_act4_pane_t

0xe6ce,	// (0x0004d92f) middle_sk_idle_act4_pane_ParamLimits

0xe6ce,	// (0x0004d92f) middle_sk_idle_act4_pane

0xe6ea,	// (0x0004d94b) popup_clock_digital_analogue_window_cp2

0xe712,	// (0x0004d973) shortcut_wheel_idle_act4_pane_ParamLimits

0xe712,	// (0x0004d973) shortcut_wheel_idle_act4_pane

0x75c1,	// (0x00046822) shortcut_wheel_idle_act4_pane_g1

0x75c1,	// (0x00046822) shortcut_wheel_idle_act4_pane_g2

0x75c1,	// (0x00046822) shortcut_wheel_idle_act4_pane_g3

0x75c1,	// (0x00046822) shortcut_wheel_idle_act4_pane_g4

0x75c1,	// (0x00046822) shortcut_wheel_idle_act4_pane_g5

0x9055,	// (0x000482b6) shortcut_wheel_idle_act4_pane_g6

0x905d,	// (0x000482be) shortcut_wheel_idle_act4_pane_g7

0x9065,	// (0x000482c6) shortcut_wheel_idle_act4_pane_g8

0x906d,	// (0x000482ce) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd35,	// (0x0004ef96) shortcut_wheel_idle_act4_pane_g

0xde45,	// (0x0004d0a6) middle_sk_idle_act4_pane_g1_ParamLimits

0xde45,	// (0x0004d0a6) middle_sk_idle_act4_pane_g1

0xe78f,	// (0x0004d9f0) middle_sk_idle_act4_pane_g2_ParamLimits

0xe78f,	// (0x0004d9f0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd58,	// (0x0004efb9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd58,	// (0x0004efb9) middle_sk_idle_act4_pane_g

0xe7a7,	// (0x0004da08) middle_sk_idle_act4_pane_t1_ParamLimits

0xe7a7,	// (0x0004da08) middle_sk_idle_act4_pane_t1

0xe7d6,	// (0x0004da37) grid_ai_shortcut_pane_ParamLimits

0xe7d6,	// (0x0004da37) grid_ai_shortcut_pane

0xe7f3,	// (0x0004da54) list_highlight_pane_cp16_ParamLimits

0xe7f3,	// (0x0004da54) list_highlight_pane_cp16

0xe800,	// (0x0004da61) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe800,	// (0x0004da61) list_single_idle_plugin_shortcut_pane_g1

0xe80c,	// (0x0004da6d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe80c,	// (0x0004da6d) list_single_idle_plugin_shortcut_pane_g2

0xe828,	// (0x0004da89) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe828,	// (0x0004da89) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5d,	// (0x0004efbe) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5d,	// (0x0004efbe) list_single_idle_plugin_shortcut_pane_g

0xe83d,	// (0x0004da9e) cell_ai_shortcut_pane_ParamLimits

0xe83d,	// (0x0004da9e) cell_ai_shortcut_pane

0xe853,	// (0x0004dab4) cell_ai_shortcut_pane_g1_ParamLimits

0xe853,	// (0x0004dab4) cell_ai_shortcut_pane_g1

0x8fa8,	// (0x00048209) ai_gene_pane_1_cp2

0x919d,	// (0x000483fe) ai_gene_pane_2_cp2

0x91a5,	// (0x00048406) list_highlight_pane_cp15

0x91ae,	// (0x0004840f) list_single_idle_plugin_calendar_pane_g1

0x91a5,	// (0x00048406) list_highlight_pane_cp17

0x91b6,	// (0x00048417) list_single_idle_plugin_calendar_pane_g1_copy1

0x91be,	// (0x0004841f) list_single_idle_plugin_player_pane_g1

0x6971,	// (0x00045bd2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd64,	// (0x0004efc5) list_single_idle_plugin_player_pane_g

0x91c6,	// (0x00048427) list_single_idle_plugin_player_pane_t1

0x91d4,	// (0x00048435) list_single_idle_plugin_player_pane_t2

0x91e2,	// (0x00048443) list_single_idle_plugin_player_pane_t3

0x91f0,	// (0x00048451) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd69,	// (0x0004efca) list_single_idle_plugin_player_pane_t

0x91fe,	// (0x0004845f) wait_bar_pane_cp15

0x9206,	// (0x00048467) grid_ai_notification_pane

0x6971,	// (0x00045bd2) list_single_idle_plugin_notification_pane_g1

0xe875,	// (0x0004dad6) cell_ai_notification_pane_ParamLimits

0xe875,	// (0x0004dad6) cell_ai_notification_pane

0x921c,	// (0x0004847d) cell_ai_notification_pane_g1

0x9224,	// (0x00048485) cell_ai_notification_pane_t1

0xe882,	// (0x0004dae3) tb_ext_find_button_pane

0xe88a,	// (0x0004daeb) tb_ext_find_pane_g1

0xe892,	// (0x0004daf3) tb_ext_find_pane_t1

0x3bbd,	// (0x00042e1e) tb_ext_find_button_pane_g1

0x9250,	// (0x000484b1) tb_ext_find_button_pane_g2

0x0001,

0xfd72,	// (0x0004efd3) tb_ext_find_button_pane_g

0xe6a2,	// (0x0004d903) main_idle_act4_pane_t1_ParamLimits

0xe6b8,	// (0x0004d919) main_idle_act4_pane_t2_ParamLimits

0xfd30,	// (0x0004ef91) main_idle_act4_pane_t_ParamLimits

0xe6ea,	// (0x0004d94b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe702,	// (0x0004d963) sat_plugin_idle_act4_pane_ParamLimits

0xe702,	// (0x0004d963) sat_plugin_idle_act4_pane

0xe8a0,	// (0x0004db01) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe8a0,	// (0x0004db01) sat_plugin_idle_act4_pane_t1

0xe8b8,	// (0x0004db19) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe8b8,	// (0x0004db19) sat_plugin_idle_act4_pane_t2

0xe8d0,	// (0x0004db31) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe8d0,	// (0x0004db31) sat_plugin_idle_act4_pane_t3

0xe8e8,	// (0x0004db49) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe8e8,	// (0x0004db49) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd77,	// (0x0004efd8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd77,	// (0x0004efd8) sat_plugin_idle_act4_pane_t

0x10ef,	// (0x00040350) popup_battery_window_ParamLimits

0x10ef,	// (0x00040350) popup_battery_window

0x2f74,	// (0x000421d5) bg_popup_sub_pane_cp25_ParamLimits

0x2f74,	// (0x000421d5) bg_popup_sub_pane_cp25

0x92a5,	// (0x00048506) popup_battery_window_g1_ParamLimits

0x92a5,	// (0x00048506) popup_battery_window_g1

0x92b1,	// (0x00048512) popup_battery_window_t1_ParamLimits

0x92b1,	// (0x00048512) popup_battery_window_t1

0x92c3,	// (0x00048524) popup_battery_window_t2_ParamLimits

0x92c3,	// (0x00048524) popup_battery_window_t2

0x0001,

0xfd80,	// (0x0004efe1) popup_battery_window_t_ParamLimits

0xfd80,	// (0x0004efe1) popup_battery_window_t

0xcb59,	// (0x0004bdba) midp_canvas_pane_ParamLimits

0xcbb4,	// (0x0004be15) midp_keypad_pane_ParamLimits

0xcbb4,	// (0x0004be15) midp_keypad_pane

0x44f8,	// (0x00043759) main_midp_pane_ParamLimits

0x7072,	// (0x000462d3) signal_pane_g2_cp_ParamLimits

0xe900,	// (0x0004db61) aid_size_cell_midp_keypad_ParamLimits

0xe900,	// (0x0004db61) aid_size_cell_midp_keypad

0xe91e,	// (0x0004db7f) midp_keyp_game_grid_pane_ParamLimits

0xe91e,	// (0x0004db7f) midp_keyp_game_grid_pane

0xe945,	// (0x0004dba6) midp_keyp_rocker_pane_ParamLimits

0xe945,	// (0x0004dba6) midp_keyp_rocker_pane

0xe99e,	// (0x0004dbff) midp_keyp_sk_left_pane_ParamLimits

0xe99e,	// (0x0004dbff) midp_keyp_sk_left_pane

0xe9f2,	// (0x0004dc53) midp_keyp_sk_right_pane_ParamLimits

0xe9f2,	// (0x0004dc53) midp_keyp_sk_right_pane

0x2bf7,	// (0x00041e58) bg_button_pane_cp03

0xea46,	// (0x0004dca7) midp_keyp_sk_left_pane_g1

0x2bf7,	// (0x00041e58) bg_button_pane_cp04

0xea46,	// (0x0004dca7) midp_keyp_sk_right_pane_g1

0x75c1,	// (0x00046822) midp_keyp_rocker_pane_g1

0xea4f,	// (0x0004dcb0) keyp_game_cell_pane_ParamLimits

0xea4f,	// (0x0004dcb0) keyp_game_cell_pane

0x2bf7,	// (0x00041e58) bg_button_pane_cp02

0xea73,	// (0x0004dcd4) keyp_game_cell_pane_g1

0xbc31,	// (0x0004ae92) popup_fep_vkb2_window_ParamLimits

0xbc31,	// (0x0004ae92) popup_fep_vkb2_window

0xc1a8,	// (0x0004b409) aid_size_cell_vkb2_ParamLimits

0xc1a8,	// (0x0004b409) aid_size_cell_vkb2

0xc1de,	// (0x0004b43f) popup_fep_vkb2_window_g1_ParamLimits

0xc1de,	// (0x0004b43f) popup_fep_vkb2_window_g1

0xc22e,	// (0x0004b48f) vkb2_area_bottom_pane_ParamLimits

0xc22e,	// (0x0004b48f) vkb2_area_bottom_pane

0xc282,	// (0x0004b4e3) vkb2_area_keypad_pane_ParamLimits

0xc282,	// (0x0004b4e3) vkb2_area_keypad_pane

0xc2ca,	// (0x0004b52b) vkb2_area_top_pane_ParamLimits

0xc2ca,	// (0x0004b52b) vkb2_area_top_pane

0xc350,	// (0x0004b5b1) vkb2_top_entry_pane_ParamLimits

0xc350,	// (0x0004b5b1) vkb2_top_entry_pane

0xc37d,	// (0x0004b5de) vkb2_top_grid_left_pane_ParamLimits

0xc37d,	// (0x0004b5de) vkb2_top_grid_left_pane

0xc39d,	// (0x0004b5fe) vkb2_top_grid_right_pane_ParamLimits

0xc39d,	// (0x0004b5fe) vkb2_top_grid_right_pane

0x265f,	// (0x000418c0) vkb2_cell_keypad_pane_ParamLimits

0x265f,	// (0x000418c0) vkb2_cell_keypad_pane

0xc3e3,	// (0x0004b644) vkb2_area_bottom_grid_pane_ParamLimits

0xc3e3,	// (0x0004b644) vkb2_area_bottom_grid_pane

0xc40d,	// (0x0004b66e) vkb2_area_bottom_pane_g1_ParamLimits

0xc40d,	// (0x0004b66e) vkb2_area_bottom_pane_g1

0xc433,	// (0x0004b694) vkb2_area_bottom_pane_g2_ParamLimits

0xc433,	// (0x0004b694) vkb2_area_bottom_pane_g2

0xc464,	// (0x0004b6c5) vkb2_area_bottom_pane_g3_ParamLimits

0xc464,	// (0x0004b6c5) vkb2_area_bottom_pane_g3

0x0002,

0xfd85,	// (0x0004efe6) vkb2_area_bottom_pane_g_ParamLimits

0xfd85,	// (0x0004efe6) vkb2_area_bottom_pane_g

0x2809,	// (0x00041a6a) vkb2_top_cell_left_pane_ParamLimits

0x2809,	// (0x00041a6a) vkb2_top_cell_left_pane

0xea7c,	// (0x0004dcdd) vkb2_top_entry_pane_g1_ParamLimits

0xea7c,	// (0x0004dcdd) vkb2_top_entry_pane_g1

0xea8a,	// (0x0004dceb) vkb2_top_entry_pane_t1_ParamLimits

0xea8a,	// (0x0004dceb) vkb2_top_entry_pane_t1

0x9474,	// (0x000486d5) vkb2_top_entry_pane_t2_ParamLimits

0x9474,	// (0x000486d5) vkb2_top_entry_pane_t2

0x94a6,	// (0x00048707) vkb2_top_entry_pane_t3_ParamLimits

0x94a6,	// (0x00048707) vkb2_top_entry_pane_t3

0x0002,

0xfd8c,	// (0x0004efed) vkb2_top_entry_pane_t_ParamLimits

0xfd8c,	// (0x0004efed) vkb2_top_entry_pane_t

0xc4ce,	// (0x0004b72f) vkb2_top_grid_right_pane_g1_ParamLimits

0xc4ce,	// (0x0004b72f) vkb2_top_grid_right_pane_g1

0x286c,	// (0x00041acd) vkb2_top_grid_right_pane_g2_ParamLimits

0x286c,	// (0x00041acd) vkb2_top_grid_right_pane_g2

0x2884,	// (0x00041ae5) vkb2_top_grid_right_pane_g3_ParamLimits

0x2884,	// (0x00041ae5) vkb2_top_grid_right_pane_g3

0xc4e4,	// (0x0004b745) vkb2_top_grid_right_pane_g4_ParamLimits

0xc4e4,	// (0x0004b745) vkb2_top_grid_right_pane_g4

0x0003,

0xfd93,	// (0x0004eff4) vkb2_top_grid_right_pane_g_ParamLimits

0xfd93,	// (0x0004eff4) vkb2_top_grid_right_pane_g

0x28b2,	// (0x00041b13) vkb2_top_cell_left_pane_g1

0x28c9,	// (0x00041b2a) vkb2_cell_keypad_pane_g1_ParamLimits

0x28c9,	// (0x00041b2a) vkb2_cell_keypad_pane_g1

0x94ca,	// (0x0004872b) vkb2_cell_keypad_pane_t1_ParamLimits

0x94ca,	// (0x0004872b) vkb2_cell_keypad_pane_t1

0x28d7,	// (0x00041b38) vkb2_cell_bottom_grid_pane_ParamLimits

0x28d7,	// (0x00041b38) vkb2_cell_bottom_grid_pane

0x2910,	// (0x00041b71) vkb2_cell_bottom_grid_pane_g1

0xe733,	// (0x0004d994) aid_call2_pane_cp02

0xe73b,	// (0x0004d99c) aid_call_pane_cp02

0xe743,	// (0x0004d9a4) clock_digital_number_pane_cp10

0xe74b,	// (0x0004d9ac) clock_digital_number_pane_cp11

0xe753,	// (0x0004d9b4) clock_digital_number_pane_cp12

0xe75b,	// (0x0004d9bc) clock_digital_number_pane_cp13

0xe763,	// (0x0004d9c4) clock_digital_separator_pane_cp10

0x3bbd,	// (0x00042e1e) popup_clock_digital_analogue_window_cp2_g1

0x3bbd,	// (0x00042e1e) popup_clock_digital_analogue_window_cp2_g2

0xe76b,	// (0x0004d9cc) popup_clock_digital_analogue_window_cp2_g3

0x3bbd,	// (0x00042e1e) popup_clock_digital_analogue_window_cp2_g4

0xe76b,	// (0x0004d9cc) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd48,	// (0x0004efa9) popup_clock_digital_analogue_window_cp2_g

0xe773,	// (0x0004d9d4) popup_clock_digital_analogue_window_cp2_t1

0xe781,	// (0x0004d9e2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd53,	// (0x0004efb4) popup_clock_digital_analogue_window_cp2_t

0x75c1,	// (0x00046822) clock_digital_number_pane_cp10_g1

0x75c1,	// (0x00046822) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3b,	// (0x0004ed9c) clock_digital_number_pane_cp10_g

0x75c1,	// (0x00046822) clock_digital_separator_pane_cp10_g1

0x75c1,	// (0x00046822) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3b,	// (0x0004ed9c) clock_digital_separator_pane_cp10_g

0x8ef1,	// (0x00048152) uniindi_top_pane_g3

0x8f02,	// (0x00048163) uniindi_top_pane_g4

0x26ea,	// (0x0004194b) vkb2_row_keypad_pane_ParamLimits

0x26ea,	// (0x0004194b) vkb2_row_keypad_pane

0x292c,	// (0x00041b8d) vkb2_cell_t_keypad_pane_ParamLimits

0x292c,	// (0x00041b8d) vkb2_cell_t_keypad_pane

0x293c,	// (0x00041b9d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x293c,	// (0x00041b9d) vkb2_cell_t_keypad_pane_cp08

0x294f,	// (0x00041bb0) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x294f,	// (0x00041bb0) vkb2_cell_t_keypad_pane_cp09

0x2963,	// (0x00041bc4) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2963,	// (0x00041bc4) vkb2_cell_t_keypad_pane_cp01

0x2974,	// (0x00041bd5) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2974,	// (0x00041bd5) vkb2_cell_t_keypad_pane_cp02

0x2985,	// (0x00041be6) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2985,	// (0x00041be6) vkb2_cell_t_keypad_pane_cp03

0x2996,	// (0x00041bf7) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2996,	// (0x00041bf7) vkb2_cell_t_keypad_pane_cp04

0x29a7,	// (0x00041c08) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x29a7,	// (0x00041c08) vkb2_cell_t_keypad_pane_cp05

0x29b8,	// (0x00041c19) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x29b8,	// (0x00041c19) vkb2_cell_t_keypad_pane_cp06

0x29c9,	// (0x00041c2a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x29c9,	// (0x00041c2a) vkb2_cell_t_keypad_pane_cp07

0x29da,	// (0x00041c3b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x29da,	// (0x00041c3b) vkb2_cell_t_keypad_pane_cp10

0x7853,	// (0x00046ab4) vkb2_cell_t_keypad_pane_g1

0x94e1,	// (0x00048742) vkb2_cell_t_keypad_pane_t1

0x2bf7,	// (0x00041e58) popup_grid_graphic2_window

0xeac3,	// (0x0004dd24) aid_size_cell_graphic2_ParamLimits

0xeac3,	// (0x0004dd24) aid_size_cell_graphic2

0xeb01,	// (0x0004dd62) bg_popup_window_pane_cp21_ParamLimits

0xeb01,	// (0x0004dd62) bg_popup_window_pane_cp21

0xeb0f,	// (0x0004dd70) graphic2_pages_pane_ParamLimits

0xeb0f,	// (0x0004dd70) graphic2_pages_pane

0xeb65,	// (0x0004ddc6) grid_graphic2_control_pane_ParamLimits

0xeb65,	// (0x0004ddc6) grid_graphic2_control_pane

0xebad,	// (0x0004de0e) grid_graphic2_pane_ParamLimits

0xebad,	// (0x0004de0e) grid_graphic2_pane

0xec41,	// (0x0004dea2) cell_graphic2_pane

0x2bf7,	// (0x00041e58) main_comp_mode_pane

0x8771,	// (0x000479d2) list_ai3_gene_pane_ParamLimits

0xe47a,	// (0x0004d6db) bg_popup_window_pane_cp19_ParamLimits

0x8b47,	// (0x00047da8) bg_touch_area_indi_pane_ParamLimits

0x8b47,	// (0x00047da8) bg_touch_area_indi_pane

0x8b5d,	// (0x00047dbe) bg_touch_area_indi_pane_cp01_ParamLimits

0x8b5d,	// (0x00047dbe) bg_touch_area_indi_pane_cp01

0x8b73,	// (0x00047dd4) bg_touch_area_indi_pane_cp02_ParamLimits

0x8b73,	// (0x00047dd4) bg_touch_area_indi_pane_cp02

0x8b8b,	// (0x00047dec) bg_touch_area_indi_pane_cp03_ParamLimits

0x8b8b,	// (0x00047dec) bg_touch_area_indi_pane_cp03

0x8ba5,	// (0x00047e06) popup_slider_window_g1_ParamLimits

0x8bc1,	// (0x00047e22) popup_slider_window_g2_ParamLimits

0x8bdd,	// (0x00047e3e) popup_slider_window_g3_ParamLimits

0xfcdd,	// (0x0004ef3e) popup_slider_window_g_ParamLimits

0x8c39,	// (0x00047e9a) popup_slider_window_t1_ParamLimits

0x8cad,	// (0x00047f0e) small_volume_slider_vertical_pane_ParamLimits

0xec41,	// (0x0004dea2) cell_graphic2_pane_ParamLimits

0xec9e,	// (0x0004deff) bg_button_pane_cp10_ParamLimits

0xec9e,	// (0x0004deff) bg_button_pane_cp10

0xecb1,	// (0x0004df12) bg_button_pane_cp11_ParamLimits

0xecb1,	// (0x0004df12) bg_button_pane_cp11

0xecc4,	// (0x0004df25) graphic2_pages_pane_g1_ParamLimits

0xecc4,	// (0x0004df25) graphic2_pages_pane_g1

0xecdf,	// (0x0004df40) graphic2_pages_pane_g2_ParamLimits

0xecdf,	// (0x0004df40) graphic2_pages_pane_g2

0x0001,

0xfda1,	// (0x0004f002) graphic2_pages_pane_g_ParamLimits

0xfda1,	// (0x0004f002) graphic2_pages_pane_g

0xecf7,	// (0x0004df58) graphic2_pages_pane_t1_ParamLimits

0xecf7,	// (0x0004df58) graphic2_pages_pane_t1

0xed0f,	// (0x0004df70) cell_graphic2_control_pane_ParamLimits

0xed0f,	// (0x0004df70) cell_graphic2_control_pane

0xed41,	// (0x0004dfa2) cell_graphic2_pane_g1_ParamLimits

0xed41,	// (0x0004dfa2) cell_graphic2_pane_g1

0xde53,	// (0x0004d0b4) cell_graphic2_pane_g2_ParamLimits

0xde53,	// (0x0004d0b4) cell_graphic2_pane_g2

0xec34,	// (0x0004de95) cell_graphic2_pane_g3_ParamLimits

0xec34,	// (0x0004de95) cell_graphic2_pane_g3

0xde60,	// (0x0004d0c1) cell_graphic2_pane_g4_ParamLimits

0xde60,	// (0x0004d0c1) cell_graphic2_pane_g4

0xed4e,	// (0x0004dfaf) cell_graphic2_pane_g5_ParamLimits

0xed4e,	// (0x0004dfaf) cell_graphic2_pane_g5

0x0004,

0xfda6,	// (0x0004f007) cell_graphic2_pane_g_ParamLimits

0xfda6,	// (0x0004f007) cell_graphic2_pane_g

0xed6e,	// (0x0004dfcf) cell_graphic2_pane_t1_ParamLimits

0xed6e,	// (0x0004dfcf) cell_graphic2_pane_t1

0x5cfd,	// (0x00044f5e) grid_highlight_pane_cp11_ParamLimits

0x5cfd,	// (0x00044f5e) grid_highlight_pane_cp11

0x2f74,	// (0x000421d5) bg_button_pane_cp05

0xeda3,	// (0x0004e004) cell_graphic2_control_pane_g1

0x75c1,	// (0x00046822) bg_touch_area_indi_pane_g1

0x97b1,	// (0x00048a12) aid_cmod_rocker_key_size

0x97bb,	// (0x00048a1c) aid_cmode_itu_key_size

0x97c5,	// (0x00048a26) main_cmode_video_pane

0x97cf,	// (0x00048a30) main_comp_mode_itu_pane

0x97db,	// (0x00048a3c) main_comp_mode_rocker_pane

0x97e7,	// (0x00048a48) cell_cmode_rocker_pane_ParamLimits

0x97e7,	// (0x00048a48) cell_cmode_rocker_pane

0x97f9,	// (0x00048a5a) cell_cmode_itu_pane_ParamLimits

0x97f9,	// (0x00048a5a) cell_cmode_itu_pane

0x3557,	// (0x000427b8) bg_button_pane_cp06_ParamLimits

0x3557,	// (0x000427b8) bg_button_pane_cp06

0x7853,	// (0x00046ab4) cell_cmode_rocker_pane_g1_ParamLimits

0x7853,	// (0x00046ab4) cell_cmode_rocker_pane_g1

0x8d51,	// (0x00047fb2) cell_cmode_rocker_pane_g2_ParamLimits

0x8d51,	// (0x00047fb2) cell_cmode_rocker_pane_g2

0x0001,

0xfdb6,	// (0x0004f017) cell_cmode_rocker_pane_g_ParamLimits

0xfdb6,	// (0x0004f017) cell_cmode_rocker_pane_g

0x2bf7,	// (0x00041e58) bg_button_pane_cp07

0x980e,	// (0x00048a6f) cell_cmode_itu_pane_g1

0x9817,	// (0x00048a78) cell_cmode_itu_pane_t1

0x9825,	// (0x00048a86) cell_cmode_itu_pane_t2

0x0001,

0xfdbb,	// (0x0004f01c) cell_cmode_itu_pane_t

0x8f74,	// (0x000481d5) aid_touch_ctrl_left

0x8f7c,	// (0x000481dd) aid_touch_ctrl_right

0x2bf7,	// (0x00041e58) compa_mode_pane

0xedc9,	// (0x0004e02a) aid_cmod_rocker_key_size_cp

0xedd3,	// (0x0004e034) aid_cmode_itu_key_size_cp

0x9847,	// (0x00048aa8) compa_mode_pane_g1

0x984f,	// (0x00048ab0) compa_mode_pane_g2

0x9857,	// (0x00048ab8) compa_mode_pane_g3

0x0002,

0xfdc0,	// (0x0004f021) compa_mode_pane_g

0xeddd,	// (0x0004e03e) main_comp_mode_itu_pane_cp

0xede5,	// (0x0004e046) main_comp_mode_rocker_pane_cp

0xeded,	// (0x0004e04e) cell_cmode_itu_pane_cp_ParamLimits

0xeded,	// (0x0004e04e) cell_cmode_itu_pane_cp

0xee02,	// (0x0004e063) cell_cmode_rocker_pane_cp_ParamLimits

0xee02,	// (0x0004e063) cell_cmode_rocker_pane_cp

0x3557,	// (0x000427b8) bg_button_pane_cp06_cp_ParamLimits

0x3557,	// (0x000427b8) bg_button_pane_cp06_cp

0x7853,	// (0x00046ab4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7853,	// (0x00046ab4) cell_cmode_rocker_pane_g1_cp

0x75c1,	// (0x00046822) cell_cmode_rocker_pane_g2_cp

0x2bf7,	// (0x00041e58) bg_button_pane_cp07_cp

0xee14,	// (0x0004e075) cell_cmode_itu_pane_g1_cp

0xee1d,	// (0x0004e07e) cell_cmode_itu_pane_t1_cp

0xee1d,	// (0x0004e07e) cell_cmode_itu_pane_t2_cp

0xda99,	// (0x0004ccfa) settings_code_pane_cp2

0x2ceb,	// (0x00041f4c) bg_popup_window_pane_cp3_ParamLimits

0x314e,	// (0x000423af) heading_pane_cp3_ParamLimits

0x315a,	// (0x000423bb) listscroll_popup_graphic_pane_ParamLimits

0x1f19,	// (0x0004117a) fep_hwr_aid_pane_ParamLimits

0x23cc,	// (0x0004162d) aid_touch_sctrl_top_ParamLimits

0x23d9,	// (0x0004163a) sctrl_sk_top_pane_g1_ParamLimits

0x7853,	// (0x00046ab4) sctrl_sk_top_pane_g2_ParamLimits

0xfcf6,	// (0x0004ef57) sctrl_sk_top_pane_g_ParamLimits

0x23e6,	// (0x00041647) sctrl_sk_top_pane_t1_ParamLimits

0x23cc,	// (0x0004162d) aid_touch_sctrl_bottom_ParamLimits

0x23e6,	// (0x00041647) sctrl_sk_bottom_pane_t1_ParamLimits

0x8ebd,	// (0x0004811e) aid_area_touch_clock

0xc312,	// (0x0004b573) aid_vkb2_area_top_pane_cell_ParamLimits

0xc312,	// (0x0004b573) aid_vkb2_area_top_pane_cell

0xc3bd,	// (0x0004b61e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc3bd,	// (0x0004b61e) aid_vkb2_area_bottom_pane_cell

0x942c,	// (0x0004868d) popup_char_count_window

0x98a4,	// (0x00048b05) popup_char_count_window_g1

0x98ad,	// (0x00048b0e) popup_char_count_window_g2

0x98b6,	// (0x00048b17) popup_char_count_window_g3

0x0002,

0xfdc7,	// (0x0004f028) popup_char_count_window_g

0x98bf,	// (0x00048b20) popup_char_count_window_t1

0x2487,	// (0x000416e8) popup_fep_char_preview_window_ParamLimits

0x2487,	// (0x000416e8) popup_fep_char_preview_window

0xc332,	// (0x0004b593) vkb2_top_candi_pane_ParamLimits

0xc332,	// (0x0004b593) vkb2_top_candi_pane

0xee2b,	// (0x0004e08c) cell_vkb2_top_candi_pane_ParamLimits

0xee2b,	// (0x0004e08c) cell_vkb2_top_candi_pane

0x5689,	// (0x000448ea) bg_popup_fep_char_preview_window_ParamLimits

0x5689,	// (0x000448ea) bg_popup_fep_char_preview_window

0x29ef,	// (0x00041c50) popup_fep_char_preview_window_t1_ParamLimits

0x29ef,	// (0x00041c50) popup_fep_char_preview_window_t1

0x991a,	// (0x00048b7b) bg_popup_fep_char_preview_window_g1

0x9922,	// (0x00048b83) bg_popup_fep_char_preview_window_g2

0x992a,	// (0x00048b8b) bg_popup_fep_char_preview_window_g3

0x9932,	// (0x00048b93) bg_popup_fep_char_preview_window_g4

0x993a,	// (0x00048b9b) bg_popup_fep_char_preview_window_g5

0x2a29,	// (0x00041c8a) bg_popup_fep_char_preview_window_g6

0x9942,	// (0x00048ba3) bg_popup_fep_char_preview_window_g7

0x994a,	// (0x00048bab) bg_popup_fep_char_preview_window_g8

0x9952,	// (0x00048bb3) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdce,	// (0x0004f02f) bg_popup_fep_char_preview_window_g

0x7853,	// (0x00046ab4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7853,	// (0x00046ab4) cell_vkb2_top_candi_pane_g1

0x7c04,	// (0x00046e65) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7c04,	// (0x00046e65) cell_vkb2_top_candi_pane_g2

0x7c25,	// (0x00046e86) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7c25,	// (0x00046e86) cell_vkb2_top_candi_pane_g3

0x2a31,	// (0x00041c92) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2a31,	// (0x00041c92) cell_vkb2_top_candi_pane_g4

0x995a,	// (0x00048bbb) cell_vkb2_top_candi_pane_g5_ParamLimits

0x995a,	// (0x00048bbb) cell_vkb2_top_candi_pane_g5

0x8d51,	// (0x00047fb2) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8d51,	// (0x00047fb2) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde1,	// (0x0004f042) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde1,	// (0x0004f042) cell_vkb2_top_candi_pane_g

0x2a52,	// (0x00041cb3) cell_vkb2_top_candi_pane_t1

0x1c71,	// (0x00040ed2) aid_size_touch_slider_mark_ParamLimits

0x1c71,	// (0x00040ed2) aid_size_touch_slider_mark

0xeb4b,	// (0x0004ddac) grid_graphic2_catg_pane_ParamLimits

0xeb4b,	// (0x0004ddac) grid_graphic2_catg_pane

0xec07,	// (0x0004de68) popup_grid_graphic2_window_t1_ParamLimits

0xec07,	// (0x0004de68) popup_grid_graphic2_window_t1

0xec1d,	// (0x0004de7e) popup_grid_graphic2_window_t2_ParamLimits

0xec1d,	// (0x0004de7e) popup_grid_graphic2_window_t2

0x0001,

0xfd9c,	// (0x0004effd) popup_grid_graphic2_window_t_ParamLimits

0xfd9c,	// (0x0004effd) popup_grid_graphic2_window_t

0x2f74,	// (0x000421d5) bg_button_pane_cp05_ParamLimits

0xeda3,	// (0x0004e004) cell_graphic2_control_pane_g1_ParamLimits

0xee91,	// (0x0004e0f2) cell_graphic2_catg_pane_ParamLimits

0xee91,	// (0x0004e0f2) cell_graphic2_catg_pane

0x2bf7,	// (0x00041e58) bg_button_pane_cp12

0xeea3,	// (0x0004e104) cell_graphic2_catg_pane_g1

0x8e89,	// (0x000480ea) cell_tb_ext_pane_t1_ParamLimits

0x2829,	// (0x00041a8a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2829,	// (0x00041a8a) vkb2_top_cell_right_narrow_pane

0x2841,	// (0x00041aa2) vkb2_top_cell_right_wide_pane_ParamLimits

0x2841,	// (0x00041aa2) vkb2_top_cell_right_wide_pane

0xcc65,	// (0x0004bec6) bg_vkb2_func_pane_ParamLimits

0xcc65,	// (0x0004bec6) bg_vkb2_func_pane

0x28b2,	// (0x00041b13) vkb2_top_cell_left_pane_g1_ParamLimits

0xcc65,	// (0x0004bec6) bg_vkb2_fuc_pane_cp03_ParamLimits

0xcc65,	// (0x0004bec6) bg_vkb2_fuc_pane_cp03

0x2910,	// (0x00041b71) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4fb8,	// (0x00044219) bg_vkb2_func_pane_g1

0x4fc0,	// (0x00044221) bg_vkb2_func_pane_g2

0x4fd0,	// (0x00044231) bg_vkb2_func_pane_g3

0x4fc8,	// (0x00044229) bg_vkb2_func_pane_g4

0x4fd8,	// (0x00044239) bg_vkb2_func_pane_g5

0x4fe0,	// (0x00044241) bg_vkb2_func_pane_g6

0x4fe8,	// (0x00044249) bg_vkb2_func_pane_g7

0x4ff0,	// (0x00044251) bg_vkb2_func_pane_g8

0x4fb0,	// (0x00044211) bg_vkb2_func_pane_g9

0x0008,

0xfdee,	// (0x0004f04f) bg_vkb2_func_pane_g

0xcc65,	// (0x0004bec6) bg_vkb2_fuc_pane_cp01_ParamLimits

0xcc65,	// (0x0004bec6) bg_vkb2_fuc_pane_cp01

0x28b2,	// (0x00041b13) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x28b2,	// (0x00041b13) vkb2_top_cell_right_wide_pane_g1

0xcc65,	// (0x0004bec6) bg_vkb2_fuc_pane_cp02_ParamLimits

0xcc65,	// (0x0004bec6) bg_vkb2_fuc_pane_cp02

0x2910,	// (0x00041b71) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2910,	// (0x00041b71) vkb2_top_cell_right_narrow_pane_g1

0xe3ba,	// (0x0004d61b) aid_touch_area_decrease_ParamLimits

0xe3ba,	// (0x0004d61b) aid_touch_area_decrease

0xe3ee,	// (0x0004d64f) aid_touch_area_increase_ParamLimits

0xe3ee,	// (0x0004d64f) aid_touch_area_increase

0xe416,	// (0x0004d677) aid_touch_area_mute_ParamLimits

0xe416,	// (0x0004d677) aid_touch_area_mute

0xe446,	// (0x0004d6a7) aid_touch_area_slider_ParamLimits

0xe446,	// (0x0004d6a7) aid_touch_area_slider

0xe486,	// (0x0004d6e7) popup_slider_window_g4_ParamLimits

0xe486,	// (0x0004d6e7) popup_slider_window_g4

0xe4ae,	// (0x0004d70f) popup_slider_window_g5_ParamLimits

0xe4ae,	// (0x0004d70f) popup_slider_window_g5

0xe4e2,	// (0x0004d743) popup_slider_window_g6_ParamLimits

0xe4e2,	// (0x0004d743) popup_slider_window_g6

0x8c67,	// (0x00047ec8) popup_slider_window_t2_ParamLimits

0x8c67,	// (0x00047ec8) popup_slider_window_t2

0x0001,

0xfcea,	// (0x0004ef4b) popup_slider_window_t_ParamLimits

0xfcea,	// (0x0004ef4b) popup_slider_window_t

0xe4fe,	// (0x0004d75f) slider_pane_ParamLimits

0xe4fe,	// (0x0004d75f) slider_pane

0x9996,	// (0x00048bf7) slider_pane_g1_ParamLimits

0x9996,	// (0x00048bf7) slider_pane_g1

0x99aa,	// (0x00048c0b) slider_pane_g2_ParamLimits

0x99aa,	// (0x00048c0b) slider_pane_g2

0x99c0,	// (0x00048c21) slider_pane_g3_ParamLimits

0x99c0,	// (0x00048c21) slider_pane_g3

0x0003,

0xfe01,	// (0x0004f062) slider_pane_g_ParamLimits

0xfe01,	// (0x0004f062) slider_pane_g

0xd265,	// (0x0004c4c6) popup_tb_float_extension_window_ParamLimits

0xd265,	// (0x0004c4c6) popup_tb_float_extension_window

0x99ec,	// (0x00048c4d) aid_size_cell_tb_float_ext

0x2bf7,	// (0x00041e58) bg_popup_sub_window_cp28

0x99f8,	// (0x00048c59) grid_tb_float_ext_pane

0x9a02,	// (0x00048c63) cell_tb_float_ext_pane_ParamLimits

0x9a02,	// (0x00048c63) cell_tb_float_ext_pane

0x9a1c,	// (0x00048c7d) cell_tb_float_ext_pane_g1

0x9a25,	// (0x00048c86) grid_highlight_pane_cp12

0xc0a3,	// (0x0004b304) cell_last_hwr_side_pane_ParamLimits

0xc0a3,	// (0x0004b304) cell_last_hwr_side_pane

0x75c1,	// (0x00046822) cell_last_hwr_side_pane_g1

0x9a2e,	// (0x00048c8f) cell_last_hwr_side_pane_g2

0x0001,

0xfe0a,	// (0x0004f06b) cell_last_hwr_side_pane_g

0xc499,	// (0x0004b6fa) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc499,	// (0x0004b6fa) vkb2_area_bottom_space_btn_pane

0x7853,	// (0x00046ab4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x94e1,	// (0x00048742) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2a52,	// (0x00041cb3) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2a71,	// (0x00041cd2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2a71,	// (0x00041cd2) vkb2_area_bottom_space_btn_pane_g1

0x2aab,	// (0x00041d0c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2aab,	// (0x00041d0c) vkb2_area_bottom_space_btn_pane_g2

0x2ae1,	// (0x00041d42) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2ae1,	// (0x00041d42) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0f,	// (0x0004f070) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0f,	// (0x0004f070) vkb2_area_bottom_space_btn_pane_g

0x1fc0,	// (0x00041221) cel_fep_hwr_func_pane_ParamLimits

0x1fc0,	// (0x00041221) cel_fep_hwr_func_pane

0xc078,	// (0x0004b2d9) cell_hwr_side_button_pane_ParamLimits

0xc078,	// (0x0004b2d9) cell_hwr_side_button_pane

0x8ebd,	// (0x0004811e) aid_area_touch_clock_ParamLimits

0x2f74,	// (0x000421d5) bg_uniindi_top_pane_ParamLimits

0x8ecf,	// (0x00048130) uniindi_top_pane_g1_ParamLimits

0x8ee5,	// (0x00048146) uniindi_top_pane_g2_ParamLimits

0x8ef1,	// (0x00048152) uniindi_top_pane_g3_ParamLimits

0x8f02,	// (0x00048163) uniindi_top_pane_g4_ParamLimits

0xfd22,	// (0x0004ef83) uniindi_top_pane_g_ParamLimits

0x8f0f,	// (0x00048170) uniindi_top_pane_t1_ParamLimits

0x2f74,	// (0x000421d5) bg_vkb2_func_pane_cp01_ParamLimits

0x2f74,	// (0x000421d5) bg_vkb2_func_pane_cp01

0x9a37,	// (0x00048c98) cel_fep_hwr_func_pane_g1_ParamLimits

0x9a37,	// (0x00048c98) cel_fep_hwr_func_pane_g1

0x2f74,	// (0x000421d5) bg_vkb2_func_pane_cp02_ParamLimits

0x2f74,	// (0x000421d5) bg_vkb2_func_pane_cp02

0x9a37,	// (0x00048c98) cell_hwr_side_button_pane_g1_ParamLimits

0x9a37,	// (0x00048c98) cell_hwr_side_button_pane_g1

0x4e31,	// (0x00044092) status_pane_g4_ParamLimits

0x4e31,	// (0x00044092) status_pane_g4

0x4e4b,	// (0x000440ac) status_pane_t1

0x72fa,	// (0x0004655b) form2_midp_gauge_slider_cont_pane

0x7302,	// (0x00046563) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdd90,	// (0x0004cff1) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdda2,	// (0x0004d003) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaee,	// (0x0004ed4f) form2_midp_gauge_slider_pane_t_ParamLimits

0x7338,	// (0x00046599) form2_midp_slider_pane_ParamLimits

0x2447,	// (0x000416a8) aid_size_cell_func_vkb2_ParamLimits

0x2447,	// (0x000416a8) aid_size_cell_func_vkb2

0x99d8,	// (0x00048c39) slider_pane_g4_ParamLimits

0x99d8,	// (0x00048c39) slider_pane_g4

0xc4fa,	// (0x0004b75b) form2_midp_gauge_slider_pane_t2_cp01

0xc508,	// (0x0004b769) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc508,	// (0x0004b769) form2_midp_gauge_slider_pane_t3_cp01

0x2b56,	// (0x00041db7) form2_midp_slider_pane_cp01

0x2bf7,	// (0x00041e58) navi_smil_pane

0x9a70,	// (0x00048cd1) navi_smil_pane_g1

0x9a78,	// (0x00048cd9) navi_smil_pane_t1

0x9a45,	// (0x00048ca6) form2_midp_slider_pane_g1

0x9a4e,	// (0x00048caf) form2_midp_slider_pane_g2

0x9a56,	// (0x00048cb7) form2_midp_slider_pane_g3

0x9a45,	// (0x00048ca6) form2_midp_slider_pane_g4

0xeeac,	// (0x0004e10d) form2_midp_slider_pane_g5

0x0004,

0xfe18,	// (0x0004f079) form2_midp_slider_pane_g

0x2b1b,	// (0x00041d7c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2b1b,	// (0x00041d7c) vkb2_area_bottom_space_btn_pane_g4

0xd441,	// (0x0004c6a2) lc0_navi_pane_ParamLimits

0xd441,	// (0x0004c6a2) lc0_navi_pane

0xd4ab,	// (0x0004c70c) lc0_stat_indi_pane_ParamLimits

0xd4ab,	// (0x0004c70c) lc0_stat_indi_pane

0xd4c0,	// (0x0004c721) ls0_title_pane_ParamLimits

0xd4c0,	// (0x0004c721) ls0_title_pane

0x3557,	// (0x000427b8) bg_popup_sub_pane_cp14_ParamLimits

0x8ea4,	// (0x00048105) list_uniindi_pane_ParamLimits

0x8eb0,	// (0x00048111) uniindi_top_pane_ParamLimits

0x8f4c,	// (0x000481ad) list_single_uniindi_pane_g1_ParamLimits

0x8f5f,	// (0x000481c0) list_single_uniindi_pane_t1_ParamLimits

0xc525,	// (0x0004b786) lc0_stat_clock_pane_ParamLimits

0xc525,	// (0x0004b786) lc0_stat_clock_pane

0xeeb5,	// (0x0004e116) lc0_stat_indi_pane_g1_ParamLimits

0xeeb5,	// (0x0004e116) lc0_stat_indi_pane_g1

0xeec2,	// (0x0004e123) lc0_stat_indi_pane_g2_ParamLimits

0xeec2,	// (0x0004e123) lc0_stat_indi_pane_g2

0x0001,

0xfe23,	// (0x0004f084) lc0_stat_indi_pane_g_ParamLimits

0xfe23,	// (0x0004f084) lc0_stat_indi_pane_g

0xc532,	// (0x0004b793) lc0_uni_indicator_pane_ParamLimits

0xc532,	// (0x0004b793) lc0_uni_indicator_pane

0x9aa0,	// (0x00048d01) ls0_title_pane_g1_ParamLimits

0x9aa0,	// (0x00048d01) ls0_title_pane_g1

0xeecf,	// (0x0004e130) ls0_title_pane_t1_ParamLimits

0xeecf,	// (0x0004e130) ls0_title_pane_t1

0xc53f,	// (0x0004b7a0) lc0_uni_indicator_pane_g1_ParamLimits

0xc53f,	// (0x0004b7a0) lc0_uni_indicator_pane_g1

0x9aea,	// (0x00048d4b) lc0_stat_clock_pane_t1

0x2bf7,	// (0x00041e58) main_ai5_pane

0x9af8,	// (0x00048d59) ai5_sk_pane_ParamLimits

0x9af8,	// (0x00048d59) ai5_sk_pane

0xeefd,	// (0x0004e15e) cell_ai5_widget_pane_ParamLimits

0xeefd,	// (0x0004e15e) cell_ai5_widget_pane

0x9b87,	// (0x00048de8) aid_size_cell_widget_grid

0x9b9b,	// (0x00048dfc) bg_ai5_widget_pane_ParamLimits

0x9b9b,	// (0x00048dfc) bg_ai5_widget_pane

0xef86,	// (0x0004e1e7) cell_ai5_widget_pane_g2

0xef96,	// (0x0004e1f7) cell_ai5_widget_pane_g3

0xefb5,	// (0x0004e216) cell_ai5_widget_pane_g4

0xefc1,	// (0x0004e222) cell_ai5_widget_pane_g5

0xefcd,	// (0x0004e22e) cell_ai5_widget_pane_g6

0xefd9,	// (0x0004e23a) cell_ai5_widget_pane_g7

0xf021,	// (0x0004e282) cell_ai5_widget_pane_t1_ParamLimits

0xf021,	// (0x0004e282) cell_ai5_widget_pane_t1

0xf03e,	// (0x0004e29f) cell_ai5_widget_pane_t2_ParamLimits

0xf03e,	// (0x0004e29f) cell_ai5_widget_pane_t2

0xf056,	// (0x0004e2b7) cell_ai5_widget_pane_t3_ParamLimits

0xf056,	// (0x0004e2b7) cell_ai5_widget_pane_t3

0xf06e,	// (0x0004e2cf) cell_ai5_widget_pane_t4_ParamLimits

0xf06e,	// (0x0004e2cf) cell_ai5_widget_pane_t4

0xf088,	// (0x0004e2e9) cell_ai5_widget_pane_t5_ParamLimits

0xf088,	// (0x0004e2e9) cell_ai5_widget_pane_t5

0x9ce4,	// (0x00048f45) cell_ai5_widget_pane_t6_ParamLimits

0x9ce4,	// (0x00048f45) cell_ai5_widget_pane_t6

0x9cf6,	// (0x00048f57) cell_ai5_widget_pane_t7_ParamLimits

0x9cf6,	// (0x00048f57) cell_ai5_widget_pane_t7

0xf0a7,	// (0x0004e308) cell_ai5_widget_pane_t8_ParamLimits

0xf0a7,	// (0x0004e308) cell_ai5_widget_pane_t8

0x0009,

0xfe3d,	// (0x0004f09e) cell_ai5_widget_pane_t_ParamLimits

0xfe3d,	// (0x0004f09e) cell_ai5_widget_pane_t

0xf0f3,	// (0x0004e354) grid_ai5_widget_pane

0x3557,	// (0x000427b8) highlight_cell_ai5_widget_pane_ParamLimits

0x3557,	// (0x000427b8) highlight_cell_ai5_widget_pane

0xf10b,	// (0x0004e36c) ai5_sk_left_pane

0xf115,	// (0x0004e376) ai5_sk_middle_pane

0xf11f,	// (0x0004e380) ai5_sk_right_pane

0x9d91,	// (0x00048ff2) bg_ai5_widget_pane_g1_ParamLimits

0x9d91,	// (0x00048ff2) bg_ai5_widget_pane_g1

0x9d9d,	// (0x00048ffe) bg_ai5_widget_pane_g2_ParamLimits

0x9d9d,	// (0x00048ffe) bg_ai5_widget_pane_g2

0x9da9,	// (0x0004900a) bg_ai5_widget_pane_g3_ParamLimits

0x9da9,	// (0x0004900a) bg_ai5_widget_pane_g3

0x9db5,	// (0x00049016) bg_ai5_widget_pane_g4_ParamLimits

0x9db5,	// (0x00049016) bg_ai5_widget_pane_g4

0x9dc1,	// (0x00049022) bg_ai5_widget_pane_g5_ParamLimits

0x9dc1,	// (0x00049022) bg_ai5_widget_pane_g5

0x9dcd,	// (0x0004902e) bg_ai5_widget_pane_g6_ParamLimits

0x9dcd,	// (0x0004902e) bg_ai5_widget_pane_g6

0x9dd9,	// (0x0004903a) bg_ai5_widget_pane_g7_ParamLimits

0x9dd9,	// (0x0004903a) bg_ai5_widget_pane_g7

0x9de5,	// (0x00049046) bg_ai5_widget_pane_g8_ParamLimits

0x9de5,	// (0x00049046) bg_ai5_widget_pane_g8

0x9df1,	// (0x00049052) bg_ai5_widget_pane_g9_ParamLimits

0x9df1,	// (0x00049052) bg_ai5_widget_pane_g9

0x0008,

0xfe52,	// (0x0004f0b3) bg_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x0004f0b3) bg_ai5_widget_pane_g

0x9e24,	// (0x00049085) cell_shortcut_ai5_widget_pane_ParamLimits

0x9e24,	// (0x00049085) cell_shortcut_ai5_widget_pane

0x2db4,	// (0x00042015) bg_cell_shortcut_ai5_widget_pane

0x9e35,	// (0x00049096) cell_grid_ai5_widget_pane_g1

0x9e3e,	// (0x0004909f) highlight_cell_shortcut_ai5_widget_pane

0x4fc0,	// (0x00044221) ai5_sk_left_pane_g1

0x9e46,	// (0x000490a7) ai5_sk_left_pane_g2

0x9e4e,	// (0x000490af) ai5_sk_left_pane_g3

0x9e56,	// (0x000490b7) ai5_sk_left_pane_g4

0x0003,

0xfe65,	// (0x0004f0c6) ai5_sk_left_pane_g

0x9e5e,	// (0x000490bf) ai5_sk_left_pane_t1

0x4fb8,	// (0x00044219) ai5_sk_right_pane_g1

0x9e6c,	// (0x000490cd) ai5_sk_right_pane_g2

0x9e74,	// (0x000490d5) ai5_sk_right_pane_g3

0x9e7c,	// (0x000490dd) ai5_sk_right_pane_g4

0x0003,

0xfe6e,	// (0x0004f0cf) ai5_sk_right_pane_g

0x9e84,	// (0x000490e5) ai5_sk_right_pane_t1

0x4fb8,	// (0x00044219) ai5_sk_middle_pane_g1

0x4fc0,	// (0x00044221) ai5_sk_middle_pane_g2

0x4fd8,	// (0x00044239) ai5_sk_middle_pane_g3

0x9e74,	// (0x000490d5) ai5_sk_middle_pane_g4

0x9e4e,	// (0x000490af) ai5_sk_middle_pane_g5

0x9e92,	// (0x000490f3) ai5_sk_middle_pane_g6

0xf129,	// (0x0004e38a) ai5_sk_middle_pane_g7

0x0006,

0xfe77,	// (0x0004f0d8) ai5_sk_middle_pane_g

0xd32d,	// (0x0004c58e) aid_touch_area_size_lc0_ParamLimits

0xd32d,	// (0x0004c58e) aid_touch_area_size_lc0

0x214b,	// (0x000413ac) cell_hwr_candidate_pane_t1_ParamLimits

0x4b13,	// (0x00043d74) aid_touch_navi_pane

0xd5b2,	// (0x0004c813) status_dt_navi_pane_ParamLimits

0xd5b2,	// (0x0004c813) status_dt_navi_pane

0xd5ca,	// (0x0004c82b) status_dt_sta_pane_ParamLimits

0xd5ca,	// (0x0004c82b) status_dt_sta_pane

0xf131,	// (0x0004e392) dt_sta_controll_pane

0xf13e,	// (0x0004e39f) dt_sta_indi_pane

0xf14b,	// (0x0004e3ac) dt_sta_title_pane

0x2f74,	// (0x000421d5) bg_dt_sta_indi_pane_ParamLimits

0x2f74,	// (0x000421d5) bg_dt_sta_indi_pane

0x9ed3,	// (0x00049134) dt_sta_battery_pane

0xf15d,	// (0x0004e3be) dt_sta_indi_pane_g1

0xf166,	// (0x0004e3c7) dt_sta_indi_pane_g2

0xf16f,	// (0x0004e3d0) dt_sta_indi_pane_g3

0x0002,

0xfe86,	// (0x0004f0e7) dt_sta_indi_pane_g

0xf178,	// (0x0004e3d9) dt_sta_signal_pane

0x3557,	// (0x000427b8) bg_dt_sta_title_pane_ParamLimits

0x3557,	// (0x000427b8) bg_dt_sta_title_pane

0x5e5d,	// (0x000450be) dt_sta_title_pane_g1

0xf181,	// (0x0004e3e2) dt_sta_title_pane_t1_ParamLimits

0xf181,	// (0x0004e3e2) dt_sta_title_pane_t1

0x2bf7,	// (0x00041e58) bg_dt_sta_control_pane

0xf196,	// (0x0004e3f7) dt_sta_controll_pane_g1

0xf19f,	// (0x0004e400) bg_dt_sta_title_pane_g1

0xf1a8,	// (0x0004e409) bg_dt_sta_title_pane_g2

0xf1b1,	// (0x0004e412) bg_dt_sta_title_pane_g3

0x0002,

0xfe8d,	// (0x0004f0ee) bg_dt_sta_title_pane_g

0x75c1,	// (0x00046822) bg_dt_sta_indi_pane_g1

0x9f40,	// (0x000491a1) dt_sta_signal_pane_g1

0x9f48,	// (0x000491a9) dt_sta_signal_pane_g2

0x0001,

0xfe94,	// (0x0004f0f5) dt_sta_signal_pane_g

0x9f50,	// (0x000491b1) dt_sta_battery_pane_g1

0x9f59,	// (0x000491ba) dt_sta_battery_pane_t1

0x75c1,	// (0x00046822) bg_dt_sta_control_pane_g1

0x3ca4,	// (0x00042f05) fep_china_uni_eep_pane

0x3cac,	// (0x00042f0d) fep_china_uni_entry_pane_ParamLimits

0x3cbc,	// (0x00042f1d) popup_fep_china_uni_window_g1_ParamLimits

0x3ccc,	// (0x00042f2d) popup_fep_china_uni_window_g2_ParamLimits

0x3ccc,	// (0x00042f2d) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0004e991) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0004e991) popup_fep_china_uni_window_g

0x9f68,	// (0x000491c9) fep_china_uni_eep_pane_g1

0x9f70,	// (0x000491d1) fep_china_uni_eep_pane_t1

0x9a67,	// (0x00048cc8) aid_touch_area_size_smil_player

0x4c5f,	// (0x00043ec0) lc0_clock_pane

0x4e3f,	// (0x000440a0) status_pane_g5_ParamLimits

0x4e3f,	// (0x000440a0) status_pane_g5

0xce0b,	// (0x0004c06c) popup_keymap_window

0x4dfd,	// (0x0004405e) status_icon_pane

0xef96,	// (0x0004e1f7) cell_ai5_widget_pane_g3_ParamLimits

0xefb5,	// (0x0004e216) cell_ai5_widget_pane_g4_ParamLimits

0xefc1,	// (0x0004e222) cell_ai5_widget_pane_g5_ParamLimits

0xefe5,	// (0x0004e246) cell_ai5_widget_pane_g8_ParamLimits

0xefe5,	// (0x0004e246) cell_ai5_widget_pane_g8

0xeff9,	// (0x0004e25a) cell_ai5_widget_pane_g9_ParamLimits

0xeff9,	// (0x0004e25a) cell_ai5_widget_pane_g9

0xf00d,	// (0x0004e26e) cell_ai5_widget_pane_g10_ParamLimits

0xf00d,	// (0x0004e26e) cell_ai5_widget_pane_g10

0x9f7f,	// (0x000491e0) status_icon_pane_g1

0x2bf7,	// (0x00041e58) bg_popup_sub_pane_cp13

0x9f87,	// (0x000491e8) popup_keymap_window_t1

0xcc0c,	// (0x0004be6d) control_pane_g6_ParamLimits

0xcc0c,	// (0x0004be6d) control_pane_g6

0xcc19,	// (0x0004be7a) control_pane_g7_ParamLimits

0xcc19,	// (0x0004be7a) control_pane_g7

0xcc26,	// (0x0004be87) control_pane_g8_ParamLimits

0xcc26,	// (0x0004be87) control_pane_g8

0xf131,	// (0x0004e392) dt_sta_controll_pane_ParamLimits

0xf13e,	// (0x0004e39f) dt_sta_indi_pane_ParamLimits

0xf14b,	// (0x0004e3ac) dt_sta_title_pane_ParamLimits

0x348f,	// (0x000426f0) aid_size_touch_scroll_bar_cale

0x1103,	// (0x00040364) popup_discreet_window_ParamLimits

0x1103,	// (0x00040364) popup_discreet_window

0xbc77,	// (0x0004aed8) popup_sk_window

0x5689,	// (0x000448ea) bg_popup_sub_pane_cp28_ParamLimits

0x5689,	// (0x000448ea) bg_popup_sub_pane_cp28

0x9f95,	// (0x000491f6) popup_discreet_window_g1_ParamLimits

0x9f95,	// (0x000491f6) popup_discreet_window_g1

0x9fb5,	// (0x00049216) popup_discreet_window_t1_ParamLimits

0x9fb5,	// (0x00049216) popup_discreet_window_t1

0x9fd3,	// (0x00049234) popup_discreet_window_t2_ParamLimits

0x9fd3,	// (0x00049234) popup_discreet_window_t2

0x0002,

0xfe99,	// (0x0004f0fa) popup_discreet_window_t_ParamLimits

0xfe99,	// (0x0004f0fa) popup_discreet_window_t

0x2b8d,	// (0x00041dee) popup_sk_window_g1

0x2b97,	// (0x00041df8) popup_sk_window_g2

0x0001,

0xfea0,	// (0x0004f101) popup_sk_window_g

0xa025,	// (0x00049286) popup_sk_window_t1

0xa033,	// (0x00049294) popup_sk_window_t1_copy1

0xef86,	// (0x0004e1e7) cell_ai5_widget_pane_g2_ParamLimits

0xf0b9,	// (0x0004e31a) cell_ai5_widget_pane_t9_ParamLimits

0xf0b9,	// (0x0004e31a) cell_ai5_widget_pane_t9

0x2bf7,	// (0x00041e58) main_fep_fshwr2_pane

0xf1ba,	// (0x0004e41b) aid_fshwr2_btn_pane

0xf1c2,	// (0x0004e423) aid_fshwr2_syb_pane

0xf1ca,	// (0x0004e42b) aid_fshwr2_txt_pane

0xf1d2,	// (0x0004e433) fshwr2_func_candi_pane

0xf1dc,	// (0x0004e43d) fshwr2_hwr_syb_pane

0xf1ea,	// (0x0004e44b) fshwr2_icf_pane

0x2bf7,	// (0x00041e58) fshwr2_icf_bg_pane

0xf1f4,	// (0x0004e455) fshwr2_icf_pane_t1_ParamLimits

0xf1f4,	// (0x0004e455) fshwr2_icf_pane_t1

0x75c1,	// (0x00046822) fshwr2_func_candi_pane_g1

0xa0a6,	// (0x00049307) fshwr2_func_candi_row_pane_ParamLimits

0xa0a6,	// (0x00049307) fshwr2_func_candi_row_pane

0xf20c,	// (0x0004e46d) cell_fshwr2_syb_pane_ParamLimits

0xf20c,	// (0x0004e46d) cell_fshwr2_syb_pane

0x7853,	// (0x00046ab4) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7853,	// (0x00046ab4) fshwr2_hwr_syb_pane_g1

0x2bf7,	// (0x00041e58) bg_popup_call_pane_cp01

0xa0d1,	// (0x00049332) fshwr2_func_candi_cell_pane_ParamLimits

0xa0d1,	// (0x00049332) fshwr2_func_candi_cell_pane

0xa102,	// (0x00049363) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa102,	// (0x00049363) fshwr2_func_candi_cell_bg_pane

0xa11c,	// (0x0004937d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa11c,	// (0x0004937d) fshwr2_func_candi_cell_pane_g1

0xa144,	// (0x000493a5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa144,	// (0x000493a5) fshwr2_func_candi_cell_pane_t1

0x2bf7,	// (0x00041e58) bg_button_pane_cp08

0x419a,	// (0x000433fb) cell_fshwr2_syb_bg_pane

0xf226,	// (0x0004e487) cell_fshwr2_syb_bg_pane_g1

0xf22e,	// (0x0004e48f) cell_fshwr2_syb_bg_pane_t1

0x3557,	// (0x000427b8) main_tmo_pane

0xd8ca,	// (0x0004cb2b) uni_indicator_pane_g1_ParamLimits

0xd8df,	// (0x0004cb40) uni_indicator_pane_g2_ParamLimits

0xd8f4,	// (0x0004cb55) uni_indicator_pane_g3_ParamLimits

0x61df,	// (0x00045440) uni_indicator_pane_g4_ParamLimits

0x61df,	// (0x00045440) uni_indicator_pane_g4

0x61f3,	// (0x00045454) uni_indicator_pane_g5_ParamLimits

0x61f3,	// (0x00045454) uni_indicator_pane_g5

0x6207,	// (0x00045468) uni_indicator_pane_g6_ParamLimits

0x6207,	// (0x00045468) uni_indicator_pane_g6

0xf921,	// (0x0004eb82) uni_indicator_pane_g_ParamLimits

0xe396,	// (0x0004d5f7) popup_tmo_note_window_ParamLimits

0xe396,	// (0x0004d5f7) popup_tmo_note_window

0x2bf7,	// (0x00041e58) fshwr2_bg_pane

0xa135,	// (0x00049396) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa135,	// (0x00049396) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea5,	// (0x0004f106) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea5,	// (0x0004f106) fshwr2_func_candi_cell_pane_g

0x75c1,	// (0x00046822) bg_popup_window_pane_cp01

0xa16e,	// (0x000493cf) bg_popup_window_pane_g1_cp01

0xa177,	// (0x000493d8) bg_popup_window_pane_cp22_ParamLimits

0xa177,	// (0x000493d8) bg_popup_window_pane_cp22

0xa185,	// (0x000493e6) listscroll_tmo_link_pane_ParamLimits

0xa185,	// (0x000493e6) listscroll_tmo_link_pane

0xa1c5,	// (0x00049426) popup_tmo_note_window_g1_ParamLimits

0xa1c5,	// (0x00049426) popup_tmo_note_window_g1

0xa1d2,	// (0x00049433) tmo_note_info_pane_ParamLimits

0xa1d2,	// (0x00049433) tmo_note_info_pane

0xf23d,	// (0x0004e49e) list_tmo_note_info_pane_g1_ParamLimits

0xf23d,	// (0x0004e49e) list_tmo_note_info_pane_g1

0xa203,	// (0x00049464) list_tmo_note_info_pane_g2_ParamLimits

0xa203,	// (0x00049464) list_tmo_note_info_pane_g2

0x0001,

0xfeaa,	// (0x0004f10b) list_tmo_note_info_pane_g_ParamLimits

0xfeaa,	// (0x0004f10b) list_tmo_note_info_pane_g

0xa21f,	// (0x00049480) list_tmo_note_info_text_pane_ParamLimits

0xa21f,	// (0x00049480) list_tmo_note_info_text_pane

0xa2a0,	// (0x00049501) list_tmo_link_pane

0xa2ad,	// (0x0004950e) scroll_pane_cp20

0xa2ba,	// (0x0004951b) list_single_tmo_link_pane_ParamLimits

0xa2ba,	// (0x0004951b) list_single_tmo_link_pane

0xa2ca,	// (0x0004952b) list_single_tmo_link_pane_t1

0xa2d8,	// (0x00049539) list_tmo_note_info_text_pane_t1_ParamLimits

0xa2d8,	// (0x00049539) list_tmo_note_info_text_pane_t1

0xc90b,	// (0x0004bb6c) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc90b,	// (0x0004bb6c) aid_size_touch_scroll_bar_cp01

0xb82e,	// (0x0004aa8f) aid_size_touch_slider_marker

0xbc67,	// (0x0004aec8) popup_settings_window_ParamLimits

0xbc67,	// (0x0004aec8) popup_settings_window

0x087f,	// (0x0003fae0) popup_candi_list_indi_window

0x4b13,	// (0x00043d74) aid_touch_navi_pane_ParamLimits

0x23a0,	// (0x00041601) rs_clock_indi_pane

0x23a9,	// (0x0004160a) sctrl_sk_bottom_pane_ParamLimits

0x23ba,	// (0x0004161b) sctrl_sk_top_pane_ParamLimits

0x24a1,	// (0x00041702) popup_fep_tooltip_window

0x9b87,	// (0x00048de8) aid_size_cell_widget_grid_ParamLimits

0xef7a,	// (0x0004e1db) cell_ai5_widget_pane_g1_ParamLimits

0xef7a,	// (0x0004e1db) cell_ai5_widget_pane_g1

0xefcd,	// (0x0004e22e) cell_ai5_widget_pane_g6_ParamLimits

0xefd9,	// (0x0004e23a) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe28,	// (0x0004f089) cell_ai5_widget_pane_g_ParamLimits

0xfe28,	// (0x0004f089) cell_ai5_widget_pane_g

0xf0dd,	// (0x0004e33e) cell_ai5_widget_pane_t10_ParamLimits

0xf0dd,	// (0x0004e33e) cell_ai5_widget_pane_t10

0xf0f3,	// (0x0004e354) grid_ai5_widget_pane_ParamLimits

0x9dfd,	// (0x0004905e) cell_contacts_ai5_widget_pane_ParamLimits

0x9dfd,	// (0x0004905e) cell_contacts_ai5_widget_pane

0x9fe8,	// (0x00049249) popup_discreet_window_t3_ParamLimits

0x9fe8,	// (0x00049249) popup_discreet_window_t3

0xa07b,	// (0x000492dc) popup_fshwr2_char_preview_window_ParamLimits

0xa07b,	// (0x000492dc) popup_fshwr2_char_preview_window

0xf254,	// (0x0004e4b5) tmo_note_info_pane_t1

0xf269,	// (0x0004e4ca) tmo_note_info_pane_t2

0xf280,	// (0x0004e4e1) tmo_note_info_pane_t3

0xa27c,	// (0x000494dd) tmo_note_info_pane_t4

0xa28e,	// (0x000494ef) tmo_note_info_pane_t5

0x0004,

0xfeaf,	// (0x0004f110) tmo_note_info_pane_t

0xa2a0,	// (0x00049501) list_tmo_link_pane_ParamLimits

0xa2ad,	// (0x0004950e) scroll_pane_cp20_ParamLimits

0x2bf7,	// (0x00041e58) bg_popup_fep_char_preview_window_cp01

0xa2f1,	// (0x00049552) popup_fshwr2_char_preview_window_t1

0xa2ff,	// (0x00049560) popup_candi_list_indi_window_g1

0xa308,	// (0x00049569) bg_cell_contacts_ai5_widget_pane

0xa314,	// (0x00049575) cell_contacts_ai5_widget_pane_g1

0xa328,	// (0x00049589) cell_contacts_ai5_widget_pane_g2

0xa337,	// (0x00049598) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeba,	// (0x0004f11b) cell_contacts_ai5_widget_pane_g

0xa34a,	// (0x000495ab) cell_contacts_ai5_widget_pane_t1

0x3557,	// (0x000427b8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf2fa,	// (0x0004e55b) settings_container_pane

0x419a,	// (0x000433fb) listscroll_set_pane_copy1

0x6cd4,	// (0x00045f35) scroll_pane_cp121_copy1

0xa3d0,	// (0x00049631) set_content_pane_copy1

0xf306,	// (0x0004e567) aid_height_set_list_copy1_ParamLimits

0xf306,	// (0x0004e567) aid_height_set_list_copy1

0x63ff,	// (0x00045660) aid_size_parent_copy1_ParamLimits

0x63ff,	// (0x00045660) aid_size_parent_copy1

0xf312,	// (0x0004e573) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf312,	// (0x0004e573) button_value_adjust_pane_cp6_copy1

0x44f8,	// (0x00043759) list_highlight_pane_cp2_copy1_ParamLimits

0x44f8,	// (0x00043759) list_highlight_pane_cp2_copy1

0xf326,	// (0x0004e587) list_set_pane_copy1_ParamLimits

0xf326,	// (0x0004e587) list_set_pane_copy1

0xf295,	// (0x0004e4f6) main_pane_set_t1_copy1_ParamLimits

0xf295,	// (0x0004e4f6) main_pane_set_t1_copy1

0xf2cf,	// (0x0004e530) main_pane_set_t2_copy1_ParamLimits

0xf2cf,	// (0x0004e530) main_pane_set_t2_copy1

0xf3d3,	// (0x0004e634) main_pane_set_t3_copy1

0xf3e1,	// (0x0004e642) main_pane_set_t4_copy1

0xf2ee,	// (0x0004e54f) set_content_pane_g1_copy1_ParamLimits

0xf2ee,	// (0x0004e54f) set_content_pane_g1_copy1

0xf3ef,	// (0x0004e650) setting_code_pane_copy1

0xa4cb,	// (0x0004972c) setting_slider_graphic_pane_copy1

0xa4cb,	// (0x0004972c) setting_slider_pane_copy1

0xa4cb,	// (0x0004972c) setting_text_pane_copy1

0xa4d5,	// (0x00049736) setting_volume_pane_copy1

0xf3f9,	// (0x0004e65a) settings_code_pane_cp2_copy1

0xf401,	// (0x0004e662) settings_code_pane_cp_copy1_ParamLimits

0xf401,	// (0x0004e662) settings_code_pane_cp_copy1

0xf415,	// (0x0004e676) volume_set_pane_copy1

0xf41d,	// (0x0004e67e) volume_set_pane_g10_copy1

0xf425,	// (0x0004e686) volume_set_pane_g1_copy1

0xf42d,	// (0x0004e68e) volume_set_pane_g2_copy1

0xf435,	// (0x0004e696) volume_set_pane_g3_copy1

0xf43d,	// (0x0004e69e) volume_set_pane_g4_copy1

0xf445,	// (0x0004e6a6) volume_set_pane_g5_copy1

0xf44d,	// (0x0004e6ae) volume_set_pane_g6_copy1

0xf455,	// (0x0004e6b6) volume_set_pane_g7_copy1

0xf45d,	// (0x0004e6be) volume_set_pane_g8_copy1

0xf465,	// (0x0004e6c6) volume_set_pane_g9_copy1

0x2ceb,	// (0x00041f4c) bg_set_opt_pane_cp_copy1_ParamLimits

0x2ceb,	// (0x00041f4c) bg_set_opt_pane_cp_copy1

0xa552,	// (0x000497b3) setting_slider_pane_t1_copy1_ParamLimits

0xa552,	// (0x000497b3) setting_slider_pane_t1_copy1

0xf46d,	// (0x0004e6ce) setting_slider_pane_t2_copy1_ParamLimits

0xf46d,	// (0x0004e6ce) setting_slider_pane_t2_copy1

0xf487,	// (0x0004e6e8) setting_slider_pane_t3_copy1_ParamLimits

0xf487,	// (0x0004e6e8) setting_slider_pane_t3_copy1

0xf49f,	// (0x0004e700) slider_set_pane_copy1_ParamLimits

0xf49f,	// (0x0004e700) slider_set_pane_copy1

0x35be,	// (0x0004281f) set_opt_bg_pane_g1_copy2

0x35c6,	// (0x00042827) set_opt_bg_pane_g2_copy2

0xa5b8,	// (0x00049819) set_opt_bg_pane_g3_copy2

0x35d6,	// (0x00042837) set_opt_bg_pane_g4_copy2

0x35de,	// (0x0004283f) set_opt_bg_pane_g5_copy2

0x35e6,	// (0x00042847) set_opt_bg_pane_g6_copy2

0xf4b5,	// (0x0004e716) set_opt_bg_pane_g7_copy2

0xa5ca,	// (0x0004982b) set_opt_bg_pane_g8_copy2

0xa5d4,	// (0x00049835) set_opt_bg_pane_g9_copy2

0x2ba1,	// (0x00041e02) aid_size_touch_slider_mark_copy1_ParamLimits

0x2ba1,	// (0x00041e02) aid_size_touch_slider_mark_copy1

0xa5de,	// (0x0004983f) slider_set_pane_g1_copy1

0x2bb5,	// (0x00041e16) slider_set_pane_g2_copy1

0x1c91,	// (0x00040ef2) slider_set_pane_g3_copy1_ParamLimits

0x1c91,	// (0x00040ef2) slider_set_pane_g3_copy1

0x1ca5,	// (0x00040f06) slider_set_pane_g4_copy1_ParamLimits

0x1ca5,	// (0x00040f06) slider_set_pane_g4_copy1

0x1cbd,	// (0x00040f1e) slider_set_pane_g5_copy1_ParamLimits

0x1cbd,	// (0x00040f1e) slider_set_pane_g5_copy1

0x1c91,	// (0x00040ef2) slider_set_pane_g6_copy1_ParamLimits

0x1c91,	// (0x00040ef2) slider_set_pane_g6_copy1

0xc566,	// (0x0004b7c7) slider_set_pane_g7_copy1_ParamLimits

0xc566,	// (0x0004b7c7) slider_set_pane_g7_copy1

0x2c0b,	// (0x00041e6c) bg_set_opt_pane_cp2_copy1

0xa5e7,	// (0x00049848) setting_slider_graphic_pane_g1_copy1

0xf4bd,	// (0x0004e71e) setting_slider_graphic_pane_t1_copy1

0xf4cd,	// (0x0004e72e) setting_slider_graphic_pane_t2_copy1

0xf4dd,	// (0x0004e73e) slider_set_pane_cp_copy1

0xa620,	// (0x00049881) input_focus_pane_cp1_copy1

0xa629,	// (0x0004988a) list_set_text_pane_copy1

0xa631,	// (0x00049892) setting_text_pane_g1_copy1

0x00c9,	// (0x0003f32a) set_text_pane_t1_copy1

0xa620,	// (0x00049881) input_focus_pane_cp2_copy1

0xa631,	// (0x00049892) setting_code_pane_g1_copy1

0xf4e5,	// (0x0004e746) setting_code_pane_t1_copy1

0xcb06,	// (0x0004bd67) list_set_graphic_pane_copy1

0x2c0b,	// (0x00041e6c) bg_set_opt_pane_cp4_copy1

0xcb18,	// (0x0004bd79) list_set_graphic_pane_g1_copy1_ParamLimits

0xcb18,	// (0x0004bd79) list_set_graphic_pane_g1_copy1

0xf4f3,	// (0x0004e754) list_set_graphic_pane_g2_copy1

0xcb30,	// (0x0004bd91) list_set_graphic_pane_t1_copy1_ParamLimits

0xcb30,	// (0x0004bd91) list_set_graphic_pane_t1_copy1

0x75c1,	// (0x00046822) rs_clock_indi_pane_g1

0xa662,	// (0x000498c3) rs_clock_indi_pane_t1

0x9ed3,	// (0x00049134) rs_indi_pane

0xa670,	// (0x000498d1) rs_indi_pane_g1

0xa679,	// (0x000498da) rs_indi_pane_g2

0xa682,	// (0x000498e3) rs_indi_pane_g3

0x0002,

0xfec1,	// (0x0004f122) rs_indi_pane_g

0x419a,	// (0x000433fb) bg_popup_preview_window_pane_cp03

0xa68b,	// (0x000498ec) popup_fep_tooltip_window_t1

0x823c,	// (0x0004749d) popup_note2_window_g2_ParamLimits

0x823c,	// (0x0004749d) popup_note2_window_g2

0x0001,

0xfc5a,	// (0x0004eebb) popup_note2_window_g_ParamLimits

0xfc5a,	// (0x0004eebb) popup_note2_window_g

0x8737,	// (0x00047998) bg_popup_sub_pane_cp11_ParamLimits

0x8744,	// (0x000479a5) cell_ai3_links_pane_g1_ParamLimits

0x875b,	// (0x000479bc) cell_ai3_links_pane_t1

0x00c9,	// (0x0003f32a) set_text_pane_t1_copy1_ParamLimits

0x40ab,	// (0x0004330c) cell_graphic_popup_pane_cp2_ParamLimits

0x40ab,	// (0x0004330c) cell_graphic_popup_pane_cp2

0xa699,	// (0x000498fa) cell_graphic_popup_pane_g1_cp2

0x32a2,	// (0x00042503) cell_graphic_popup_pane_g2_cp2

0xa6a1,	// (0x00049902) cell_graphic_popup_pane_g3_cp2

0xa6a9,	// (0x0004990a) cell_graphic_popup_pane_t2_cp2

0x32b3,	// (0x00042514) grid_highlight_pane_cp3_cp2

0x3901,	// (0x00042b62) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3557,	// (0x000427b8) main_tmo_pane_ParamLimits

0xe38a,	// (0x0004d5eb) popup_tmo_big_image_note_window

0xef6a,	// (0x0004e1cb) cell_ai5_widget_list_pane

0xef72,	// (0x0004e1d3) cell_ai5_widget_lrg_icon_pane

0xf254,	// (0x0004e4b5) tmo_note_info_pane_t1_ParamLimits

0xf269,	// (0x0004e4ca) tmo_note_info_pane_t2_ParamLimits

0xf280,	// (0x0004e4e1) tmo_note_info_pane_t3_ParamLimits

0xa27c,	// (0x000494dd) tmo_note_info_pane_t4_ParamLimits

0xa28e,	// (0x000494ef) tmo_note_info_pane_t5_ParamLimits

0xfeaf,	// (0x0004f110) tmo_note_info_pane_t_ParamLimits

0xf2fa,	// (0x0004e55b) settings_container_pane_ParamLimits

0xa618,	// (0x00049879) indicator_popup_pane_cp5

0xa618,	// (0x00049879) indicator_popup_pane_cp6

0xcb06,	// (0x0004bd67) list_set_graphic_pane_copy1_ParamLimits

0x2bf7,	// (0x00041e58) bg_popup_window_pane_cp23

0xa6b7,	// (0x00049918) popup_tmo_big_image_note_window_g1

0xa6c1,	// (0x00049922) popup_tmo_big_image_note_window_t1

0xa6d1,	// (0x00049932) popup_tmo_big_image_note_window_t2

0xa6e1,	// (0x00049942) popup_tmo_big_image_note_window_t3

0x0002,

0xfec8,	// (0x0004f129) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0004e75c) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0004e764) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0004e772) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0004e772) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0004e78b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0004e78b) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0004e798) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0004e798) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0004e7b0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0004e7b0) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfecf,	// (0x0004f130) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecf,	// (0x0004f130) cell_ai5_widget_list_row_pane_t

0x2bf7,	// (0x00041e58) main_fep_vtchi_ss_pane

0xa757,	// (0x000499b8) popup_fep_char_pre_window

0xa75f,	// (0x000499c0) popup_fep_ituss_window

0xa780,	// (0x000499e1) popup_fep_vkbss_window

0xa79f,	// (0x00049a00) grid_vkbss_keypad_pane_ParamLimits

0xa79f,	// (0x00049a00) grid_vkbss_keypad_pane

0xa7af,	// (0x00049a10) ituss_keypad_pane

0xa7c8,	// (0x00049a29) aid_vkbss_key_offset_ParamLimits

0xa7c8,	// (0x00049a29) aid_vkbss_key_offset

0xa7d4,	// (0x00049a35) cell_vkbss_key_pane_ParamLimits

0xa7d4,	// (0x00049a35) cell_vkbss_key_pane

0xa7ea,	// (0x00049a4b) bg_cell_vkbss_key_g1_ParamLimits

0xa7ea,	// (0x00049a4b) bg_cell_vkbss_key_g1

0xa7f6,	// (0x00049a57) cell_vkbss_key_3p_pane_ParamLimits

0xa7f6,	// (0x00049a57) cell_vkbss_key_3p_pane

0xa810,	// (0x00049a71) cell_vkbss_key_g1_ParamLimits

0xa810,	// (0x00049a71) cell_vkbss_key_g1

0xa82a,	// (0x00049a8b) cell_vkbss_key_t1_ParamLimits

0xa82a,	// (0x00049a8b) cell_vkbss_key_t1

0xa855,	// (0x00049ab6) cell_ituss_key_pane_ParamLimits

0xa855,	// (0x00049ab6) cell_ituss_key_pane

0xa865,	// (0x00049ac6) bg_cell_ituss_key_g1_ParamLimits

0xa865,	// (0x00049ac6) bg_cell_ituss_key_g1

0xa871,	// (0x00049ad2) cell_ituss_key_pane_g1_ParamLimits

0xa871,	// (0x00049ad2) cell_ituss_key_pane_g1

0xa87d,	// (0x00049ade) cell_ituss_key_pane_g2_ParamLimits

0xa87d,	// (0x00049ade) cell_ituss_key_pane_g2

0x0001,

0xfed4,	// (0x0004f135) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x0004f135) cell_ituss_key_pane_g

0xa896,	// (0x00049af7) cell_ituss_key_t1_ParamLimits

0xa896,	// (0x00049af7) cell_ituss_key_t1

0xa8c4,	// (0x00049b25) cell_ituss_key_t2_ParamLimits

0xa8c4,	// (0x00049b25) cell_ituss_key_t2

0xa8f5,	// (0x00049b56) cell_ituss_key_t3_ParamLimits

0xa8f5,	// (0x00049b56) cell_ituss_key_t3

0xa926,	// (0x00049b87) cell_ituss_key_t4_ParamLimits

0xa926,	// (0x00049b87) cell_ituss_key_t4

0x0003,

0xfed9,	// (0x0004f13a) cell_ituss_key_t_ParamLimits

0xfed9,	// (0x0004f13a) cell_ituss_key_t

0xa957,	// (0x00049bb8) cell_vkbss_key_3p_pane_g1

0xa95f,	// (0x00049bc0) cell_vkbss_key_3p_pane_g2

0xa967,	// (0x00049bc8) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x0004f143) cell_vkbss_key_3p_pane_g

0x2bf7,	// (0x00041e58) bg_popup_fep_char_preview_window_cp02

0xa96f,	// (0x00049bd0) popup_fep_char_pre_window_t1

0xef60,	// (0x0004e1c1) main_ai5_sk_pane

0xa308,	// (0x00049569) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa314,	// (0x00049575) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa328,	// (0x00049589) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa337,	// (0x00049598) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeba,	// (0x0004f11b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa34a,	// (0x000495ab) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3557,	// (0x000427b8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0004e7c2) main_ai5_sk_pane_g1

0x54c2,	// (0x00044723) popup_query_code_window_g1

0xa775,	// (0x000499d6) popup_fep_vkb_icf_pane

0xa789,	// (0x000499ea) popup_fep_vtchi_icf_pane

0x3557,	// (0x000427b8) bg_icf_pane

0xa996,	// (0x00049bf7) list_vkb_icf_pane

0x3557,	// (0x000427b8) bg_icf_pane_cp01

0xa9ae,	// (0x00049c0f) vtchi_icf_list_pane

0xa9be,	// (0x00049c1f) list_vkb_icf_pane_t1_ParamLimits

0xa9be,	// (0x00049c1f) list_vkb_icf_pane_t1

0xa9d5,	// (0x00049c36) vtchi_icf_list_pane_t1_ParamLimits

0xa9d5,	// (0x00049c36) vtchi_icf_list_pane_t1

0xa75f,	// (0x000499c0) popup_fep_ituss_window_ParamLimits

0xa789,	// (0x000499ea) popup_fep_vtchi_icf_pane_ParamLimits

0xa7af,	// (0x00049a10) ituss_keypad_pane_ParamLimits

0xa7bf,	// (0x00049a20) ituss_sks_pane

0x3557,	// (0x000427b8) bg_icf_pane_ParamLimits

0xa987,	// (0x00049be8) icf_edit_indi_pane_ParamLimits

0xa987,	// (0x00049be8) icf_edit_indi_pane

0xa996,	// (0x00049bf7) list_vkb_icf_pane_ParamLimits

0x3557,	// (0x000427b8) bg_icf_pane_cp01_ParamLimits

0xa9a2,	// (0x00049c03) icf_edit_indi_pane_cp01_ParamLimits

0xa9a2,	// (0x00049c03) icf_edit_indi_pane_cp01

0xa9b6,	// (0x00049c17) vtchi_query_pane

0x7853,	// (0x00046ab4) icf_edit_indi_pane_g1_ParamLimits

0x7853,	// (0x00046ab4) icf_edit_indi_pane_g1

0xa9f1,	// (0x00049c52) icf_edit_indi_pane_g2_ParamLimits

0xa9f1,	// (0x00049c52) icf_edit_indi_pane_g2

0x0001,

0xfee9,	// (0x0004f14a) icf_edit_indi_pane_g_ParamLimits

0xfee9,	// (0x0004f14a) icf_edit_indi_pane_g

0xa9fd,	// (0x00049c5e) icf_edit_indi_pane_t1

0xaa0b,	// (0x00049c6c) bg_input_focus_pane_cp042

0x3486,	// (0x000426e7) vtchi_button_pane

0xaa14,	// (0x00049c75) vtchi_query_pane_t1

0xaa22,	// (0x00049c83) vtchi_query_pane_t2

0xaa30,	// (0x00049c91) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0004f14f) vtchi_query_pane_t

0x2bf7,	// (0x00041e58) bg_button_pane_cp13

0xaa3e,	// (0x00049c9f) vtchi_button_pane_g1

0x8f96,	// (0x000481f7) ituss_sks_pane_g1

0xaa46,	// (0x00049ca7) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0004f156) ituss_sks_pane_g

0xaa4f,	// (0x00049cb0) ituss_sks_pane_t1

0xaa5d,	// (0x00049cbe) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0004f15b) ituss_sks_pane_t

0x7023,	// (0x00046284) indicator_nsta_pane_cp_g1

0x702c,	// (0x0004628d) indicator_nsta_pane_cp_g2

0x7034,	// (0x00046295) indicator_nsta_pane_cp_g3

0x703c,	// (0x0004629d) indicator_nsta_pane_cp_g4

0x7044,	// (0x000462a5) indicator_nsta_pane_cp_g5

0x704c,	// (0x000462ad) indicator_nsta_pane_cp_g6

0x0005,

0xfaa4,	// (0x0004ed05) indicator_nsta_pane_cp_g

0xed85,	// (0x0004dfe6) cell_graphic2_pane_t2_ParamLimits

0xed85,	// (0x0004dfe6) cell_graphic2_pane_t2

0x0001,

0xfdb1,	// (0x0004f012) cell_graphic2_pane_t_ParamLimits

0xfdb1,	// (0x0004f012) cell_graphic2_pane_t

0xedbb,	// (0x0004e01c) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
