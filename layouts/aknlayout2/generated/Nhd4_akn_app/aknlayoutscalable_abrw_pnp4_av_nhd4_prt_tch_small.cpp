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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001dce6 };

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
0x80ef,	// (0x00025dd5) Screen

0x80fb,	// (0x00025de1) application_window_ParamLimits

0x80fb,	// (0x00025de1) application_window

0x4471,	// (0x00022157) screen_g1

0x8157,	// (0x00025e3d) area_bottom_pane_ParamLimits

0x8157,	// (0x00025e3d) area_bottom_pane

0x8217,	// (0x00025efd) area_top_pane_ParamLimits

0x8217,	// (0x00025efd) area_top_pane

0x82b5,	// (0x00025f9b) main_pane_ParamLimits

0x82b5,	// (0x00025f9b) main_pane

0x447b,	// (0x00022161) misc_graphics

0x95b6,	// (0x0002729c) battery_pane_ParamLimits

0x95b6,	// (0x0002729c) battery_pane

0x61e9,	// (0x00023ecf) bg_status_flat_pane_g8

0x61f1,	// (0x00023ed7) bg_status_flat_pane_g9

0x594f,	// (0x00023635) context_pane_ParamLimits

0x594f,	// (0x00023635) context_pane

0x96ea,	// (0x000273d0) navi_pane_ParamLimits

0x96ea,	// (0x000273d0) navi_pane

0x9756,	// (0x0002743c) signal_pane_ParamLimits

0x9756,	// (0x0002743c) signal_pane

0x0008,

0xf8a8,	// (0x0002d58e) bg_status_flat_pane_g

0x97bb,	// (0x000274a1) status_pane_g1_ParamLimits

0x97bb,	// (0x000274a1) status_pane_g1

0x97cf,	// (0x000274b5) status_pane_g2_ParamLimits

0x97cf,	// (0x000274b5) status_pane_g2

0x59b4,	// (0x0002369a) status_pane_g3_ParamLimits

0x59b4,	// (0x0002369a) status_pane_g3

0x0004,

0xf7db,	// (0x0002d4c1) status_pane_g_ParamLimits

0xf7db,	// (0x0002d4c1) status_pane_g

0x97db,	// (0x000274c1) title_pane_ParamLimits

0x97db,	// (0x000274c1) title_pane

0x9818,	// (0x000274fe) uni_indicator_pane_ParamLimits

0x9818,	// (0x000274fe) uni_indicator_pane

0x576e,	// (0x00023454) bg_list_pane_ParamLimits

0x576e,	// (0x00023454) bg_list_pane

0xe60e,	// (0x0002c2f4) find_pane

0x90ce,	// (0x00026db4) listscroll_app_pane_ParamLimits

0x90ce,	// (0x00026db4) listscroll_app_pane

0x578e,	// (0x00023474) listscroll_form_pane

0xe616,	// (0x0002c2fc) listscroll_gen_pane_ParamLimits

0xe616,	// (0x0002c2fc) listscroll_gen_pane

0x578e,	// (0x00023474) listscroll_set_pane

0x8887,	// (0x0002656d) main_idle_act_pane

0x5554,	// (0x0002323a) main_idle_trad_pane

0x5554,	// (0x0002323a) main_list_empty_pane

0x57b6,	// (0x0002349c) main_midp_pane

0x57c2,	// (0x000234a8) main_pane_g1_ParamLimits

0x57c2,	// (0x000234a8) main_pane_g1

0x90da,	// (0x00026dc0) popup_ai_message_window_ParamLimits

0x90da,	// (0x00026dc0) popup_ai_message_window

0x9158,	// (0x00026e3e) popup_fep_china_uni_window_ParamLimits

0x9158,	// (0x00026e3e) popup_fep_china_uni_window

0x57f4,	// (0x000234da) popup_fep_japan_candidate_window_ParamLimits

0x57f4,	// (0x000234da) popup_fep_japan_candidate_window

0x5812,	// (0x000234f8) popup_fep_japan_predictive_window_ParamLimits

0x5812,	// (0x000234f8) popup_fep_japan_predictive_window

0x91b2,	// (0x00026e98) popup_find_window

0x91bf,	// (0x00026ea5) popup_grid_graphic_window_ParamLimits

0x91bf,	// (0x00026ea5) popup_grid_graphic_window

0x5842,	// (0x00023528) popup_large_graphic_colour_window

0x91e5,	// (0x00026ecb) popup_menu_window_ParamLimits

0x91e5,	// (0x00026ecb) popup_menu_window

0x939f,	// (0x00027085) popup_note_image_window

0x938b,	// (0x00027071) popup_note_wait_window_ParamLimits

0x938b,	// (0x00027071) popup_note_wait_window

0x938b,	// (0x00027071) popup_note_window_ParamLimits

0x938b,	// (0x00027071) popup_note_window

0x93f5,	// (0x000270db) popup_query_code_window_ParamLimits

0x93f5,	// (0x000270db) popup_query_code_window

0x5868,	// (0x0002354e) popup_query_data_code_window_ParamLimits

0x5868,	// (0x0002354e) popup_query_data_code_window

0x9409,	// (0x000270ef) popup_query_data_window_ParamLimits

0x9409,	// (0x000270ef) popup_query_data_window

0x9421,	// (0x00027107) popup_query_sat_info_window_ParamLimits

0x9421,	// (0x00027107) popup_query_sat_info_window

0x945a,	// (0x00027140) popup_snote_single_graphic_window_ParamLimits

0x945a,	// (0x00027140) popup_snote_single_graphic_window

0x945a,	// (0x00027140) popup_snote_single_text_window_ParamLimits

0x945a,	// (0x00027140) popup_snote_single_text_window

0x587f,	// (0x00023565) popup_sub_window_general

0x58c5,	// (0x000235ab) popup_window_general_ParamLimits

0x58c5,	// (0x000235ab) popup_window_general

0x58da,	// (0x000235c0) power_save_pane

0x8f53,	// (0x00026c39) control_pane_g1_ParamLimits

0x8f53,	// (0x00026c39) control_pane_g1

0x8f7c,	// (0x00026c62) control_pane_g2_ParamLimits

0x8f7c,	// (0x00026c62) control_pane_g2

0x5748,	// (0x0002342e) control_pane_g3_ParamLimits

0x5748,	// (0x0002342e) control_pane_g3

0x0007,

0xf7c3,	// (0x0002d4a9) control_pane_g_ParamLimits

0xf7c3,	// (0x0002d4a9) control_pane_g

0x8fdf,	// (0x00026cc5) control_pane_t1_ParamLimits

0x8fdf,	// (0x00026cc5) control_pane_t1

0x9031,	// (0x00026d17) control_pane_t2_ParamLimits

0x9031,	// (0x00026d17) control_pane_t2

0x0002,

0xf7d4,	// (0x0002d4ba) control_pane_t_ParamLimits

0xf7d4,	// (0x0002d4ba) control_pane_t

0x5669,	// (0x0002334f) navi_navi_volume_pane_cp1

0x5672,	// (0x00023358) status_small_icon_pane

0x567a,	// (0x00023360) status_small_pane_g1_ParamLimits

0x567a,	// (0x00023360) status_small_pane_g1

0x56ae,	// (0x00023394) status_small_pane_g2_ParamLimits

0x56ae,	// (0x00023394) status_small_pane_g2

0x56ba,	// (0x000233a0) status_small_pane_g3_ParamLimits

0x56ba,	// (0x000233a0) status_small_pane_g3

0x56c6,	// (0x000233ac) status_small_pane_g4_ParamLimits

0x56c6,	// (0x000233ac) status_small_pane_g4

0x56d2,	// (0x000233b8) status_small_pane_g5_ParamLimits

0x56d2,	// (0x000233b8) status_small_pane_g5

0x56e1,	// (0x000233c7) status_small_pane_g6_ParamLimits

0x56e1,	// (0x000233c7) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0002d498) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0002d498) status_small_pane_g

0x5711,	// (0x000233f7) status_small_pane_t1

0x5734,	// (0x0002341a) status_small_wait_pane_ParamLimits

0x5734,	// (0x0002341a) status_small_wait_pane

0x8b95,	// (0x0002687b) aid_levels_signal_ParamLimits

0x8b95,	// (0x0002687b) aid_levels_signal

0x8ba7,	// (0x0002688d) signal_pane_g1_ParamLimits

0x8ba7,	// (0x0002688d) signal_pane_g1

0x8bbc,	// (0x000268a2) signal_pane_g2_ParamLimits

0x8bbc,	// (0x000268a2) signal_pane_g2

0x0001,

0xf747,	// (0x0002d42d) signal_pane_g_ParamLimits

0xf747,	// (0x0002d42d) signal_pane_g

0x5098,	// (0x00022d7e) context_pane_g1

0x84e6,	// (0x000261cc) title_pane_g1

0x8510,	// (0x000261f6) title_pane_t1

0x4491,	// (0x00022177) title_pane_t2

0x44b7,	// (0x0002219d) title_pane_t3

0x0002,

0xf59b,	// (0x0002d281) title_pane_t

0x9830,	// (0x00027516) aid_levels_battery_ParamLimits

0x9830,	// (0x00027516) aid_levels_battery

0x9844,	// (0x0002752a) battery_pane_g1_ParamLimits

0x9844,	// (0x0002752a) battery_pane_g1

0x985a,	// (0x00027540) battery_pane_g2_ParamLimits

0x985a,	// (0x00027540) battery_pane_g2

0x0001,

0xf7e6,	// (0x0002d4cc) battery_pane_g_ParamLimits

0xf7e6,	// (0x0002d4cc) battery_pane_g

0x9d98,	// (0x00027a7e) uni_indicator_pane_g1

0x9dad,	// (0x00027a93) uni_indicator_pane_g2

0x9dc3,	// (0x00027aa9) uni_indicator_pane_g3

0x0005,

0xf950,	// (0x0002d636) uni_indicator_pane_g

0x53c4,	// (0x000230aa) navi_icon_pane_ParamLimits

0x53c4,	// (0x000230aa) navi_icon_pane

0x530b,	// (0x00022ff1) navi_midp_pane

0x53e0,	// (0x000230c6) navi_navi_pane

0x53ea,	// (0x000230d0) navi_text_pane_ParamLimits

0x53ea,	// (0x000230d0) navi_text_pane

0x4471,	// (0x00022157) status_small_wait_pane_g1

0x4792,	// (0x00022478) status_small_wait_pane_g2

0x0001,

0xf94b,	// (0x0002d631) status_small_wait_pane_g

0x9d3d,	// (0x00027a23) navi_navi_icon_text_pane

0x9d45,	// (0x00027a2b) navi_navi_pane_g1_ParamLimits

0x9d45,	// (0x00027a2b) navi_navi_pane_g1

0x9d57,	// (0x00027a3d) navi_navi_pane_g2_ParamLimits

0x9d57,	// (0x00027a3d) navi_navi_pane_g2

0x0001,

0xf919,	// (0x0002d5ff) navi_navi_pane_g_ParamLimits

0xf919,	// (0x0002d5ff) navi_navi_pane_g

0x676c,	// (0x00024452) navi_navi_tabs_pane

0x9d69,	// (0x00027a4f) navi_navi_text_pane

0x9d3d,	// (0x00027a23) navi_navi_volume_pane

0x9d28,	// (0x00027a0e) navi_text_pane_t1

0x9d19,	// (0x000279ff) navi_icon_pane_g1

0x66ad,	// (0x00024393) navi_navi_text_pane_t1

0x9d08,	// (0x000279ee) navi_navi_volume_pane_g1

0x9d10,	// (0x000279f6) volume_small_pane

0x9c7a,	// (0x00027960) navi_navi_icon_text_pane_g1

0x9c82,	// (0x00027968) navi_navi_icon_text_pane_t1

0x53e0,	// (0x000230c6) navi_tabs_2_long_pane

0x53e0,	// (0x000230c6) navi_tabs_2_pane

0x53e0,	// (0x000230c6) navi_tabs_3_long_pane

0x53e0,	// (0x000230c6) navi_tabs_3_pane

0x53e0,	// (0x000230c6) navi_tabs_4_pane

0x9c5a,	// (0x00027940) tabs_2_active_pane_ParamLimits

0x9c5a,	// (0x00027940) tabs_2_active_pane

0x9c6a,	// (0x00027950) tabs_2_passive_pane_ParamLimits

0x9c6a,	// (0x00027950) tabs_2_passive_pane

0x9c28,	// (0x0002790e) tabs_3_active_pane_ParamLimits

0x9c28,	// (0x0002790e) tabs_3_active_pane

0x9c38,	// (0x0002791e) tabs_3_passive_pane_ParamLimits

0x9c38,	// (0x0002791e) tabs_3_passive_pane

0x9c49,	// (0x0002792f) tabs_3_passive_pane_cp_ParamLimits

0x9c49,	// (0x0002792f) tabs_3_passive_pane_cp

0x9be4,	// (0x000278ca) tabs_4_active_pane_ParamLimits

0x9be4,	// (0x000278ca) tabs_4_active_pane

0x9bf5,	// (0x000278db) tabs_4_passive_pane_ParamLimits

0x9bf5,	// (0x000278db) tabs_4_passive_pane

0x9c06,	// (0x000278ec) tabs_4_passive_pane_cp_ParamLimits

0x9c06,	// (0x000278ec) tabs_4_passive_pane_cp

0x9c17,	// (0x000278fd) tabs_4_passive_pane_cp2_ParamLimits

0x9c17,	// (0x000278fd) tabs_4_passive_pane_cp2

0x9bc0,	// (0x000278a6) tabs_2_long_active_pane_ParamLimits

0x9bc0,	// (0x000278a6) tabs_2_long_active_pane

0x9bd2,	// (0x000278b8) tabs_2_long_passive_pane_ParamLimits

0x9bd2,	// (0x000278b8) tabs_2_long_passive_pane

0x9b7b,	// (0x00027861) tabs_3_long_active_pane_ParamLimits

0x9b7b,	// (0x00027861) tabs_3_long_active_pane

0x9b94,	// (0x0002787a) tabs_3_long_passive_pane_ParamLimits

0x9b94,	// (0x0002787a) tabs_3_long_passive_pane

0x9ba7,	// (0x0002788d) tabs_3_long_passive_pane_cp_ParamLimits

0x9ba7,	// (0x0002788d) tabs_3_long_passive_pane_cp

0x9b21,	// (0x00027807) volume_small_pane_g1

0x9b2a,	// (0x00027810) volume_small_pane_g2

0x9b33,	// (0x00027819) volume_small_pane_g3

0x9b3c,	// (0x00027822) volume_small_pane_g4

0x9b45,	// (0x0002782b) volume_small_pane_g5

0x9b4e,	// (0x00027834) volume_small_pane_g6

0x9b57,	// (0x0002783d) volume_small_pane_g7

0x9b60,	// (0x00027846) volume_small_pane_g8

0x9b69,	// (0x0002784f) volume_small_pane_g9

0x9b72,	// (0x00027858) volume_small_pane_g10

0x0009,

0xf8e5,	// (0x0002d5cb) volume_small_pane_g

0x44d7,	// (0x000221bd) bg_active_tab_pane_cp2_ParamLimits

0x44d7,	// (0x000221bd) bg_active_tab_pane_cp2

0x8578,	// (0x0002625e) tabs_3_active_pane_g1

0x8580,	// (0x00026266) tabs_3_active_pane_t1

0x44d7,	// (0x000221bd) bg_passive_tab_pane_cp2_ParamLimits

0x44d7,	// (0x000221bd) bg_passive_tab_pane_cp2

0x8578,	// (0x0002625e) tabs_3_passive_pane_g1

0x8580,	// (0x00026266) tabs_3_passive_pane_t1

0x44d7,	// (0x000221bd) bg_active_tab_pane_cp3_ParamLimits

0x44d7,	// (0x000221bd) bg_active_tab_pane_cp3

0x8592,	// (0x00026278) tabs_4_active_pane_g1

0x859a,	// (0x00026280) tabs_4_active_pane_t1

0x44d7,	// (0x000221bd) bg_passive_tab_pane_cp3_ParamLimits

0x44d7,	// (0x000221bd) bg_passive_tab_pane_cp3

0x8592,	// (0x00026278) tabs_4_1_passive_pane_g1

0x859a,	// (0x00026280) tabs_4_1_passive_pane_t1

0x57b6,	// (0x0002349c) list_highlight_pane_cp2

0x9f03,	// (0x00027be9) list_set_pane_ParamLimits

0x9f03,	// (0x00027be9) list_set_pane

0x9fa5,	// (0x00027c8b) main_pane_set_t1_ParamLimits

0x9fa5,	// (0x00027c8b) main_pane_set_t1

0x9fc5,	// (0x00027cab) main_pane_set_t2_ParamLimits

0x9fc5,	// (0x00027cab) main_pane_set_t2

0x9fd9,	// (0x00027cbf) main_pane_set_t3_ParamLimits

0x9fd9,	// (0x00027cbf) main_pane_set_t3

0x9feb,	// (0x00027cd1) main_pane_set_t4_ParamLimits

0x9feb,	// (0x00027cd1) main_pane_set_t4

0x0003,

0xf9b5,	// (0x0002d69b) main_pane_set_t_ParamLimits

0xf9b5,	// (0x0002d69b) main_pane_set_t

0x9ffd,	// (0x00027ce3) setting_code_pane

0xa007,	// (0x00027ced) setting_slider_graphic_pane

0xa007,	// (0x00027ced) setting_slider_pane

0xa007,	// (0x00027ced) setting_text_pane

0xa007,	// (0x00027ced) setting_volume_pane

0x85ac,	// (0x00026292) volume_set_pane

0x44d7,	// (0x000221bd) bg_set_opt_pane_cp

0x85b4,	// (0x0002629a) setting_slider_pane_t1

0x85cd,	// (0x000262b3) setting_slider_pane_t2

0x85e6,	// (0x000262cc) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0002d288) setting_slider_pane_t

0x85fd,	// (0x000262e3) slider_set_pane

0x447b,	// (0x00022161) bg_set_opt_pane_cp2

0x44e5,	// (0x000221cb) setting_slider_graphic_pane_g1

0x8613,	// (0x000262f9) setting_slider_graphic_pane_t1

0x8622,	// (0x00026308) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0002d28f) setting_slider_graphic_pane_t

0x8631,	// (0x00026317) slider_set_pane_cp

0x447b,	// (0x00022161) input_focus_pane_cp1

0x6bd3,	// (0x000248b9) list_set_text_pane

0x4471,	// (0x00022157) setting_text_pane_g1

0x447b,	// (0x00022161) input_focus_pane_cp2

0x4471,	// (0x00022157) setting_code_pane_g1

0x44ee,	// (0x000221d4) setting_code_pane_t1

0xdec1,	// (0x0002bba7) set_text_pane_t1_ParamLimits

0xdec1,	// (0x0002bba7) set_text_pane_t1

0x4b85,	// (0x0002286b) set_opt_bg_pane_g1

0x4b8d,	// (0x00022873) set_opt_bg_pane_g2

0x6bb3,	// (0x00024899) set_opt_bg_pane_g3

0x4b9d,	// (0x00022883) set_opt_bg_pane_g4

0x4ba5,	// (0x0002288b) set_opt_bg_pane_g5

0x4bad,	// (0x00022893) set_opt_bg_pane_g6

0x6bbb,	// (0x000248a1) set_opt_bg_pane_g7

0x6bc3,	// (0x000248a9) set_opt_bg_pane_g8

0x6bcb,	// (0x000248b1) set_opt_bg_pane_g9

0x0008,

0xf9a2,	// (0x0002d688) set_opt_bg_pane_g

0x6ba6,	// (0x0002488c) slider_set_pane_g1

0x9e78,	// (0x00027b5e) slider_set_pane_g2

0x0006,

0xf993,	// (0x0002d679) slider_set_pane_g

0x9def,	// (0x00027ad5) volume_set_pane_g1

0x9df7,	// (0x00027add) volume_set_pane_g2

0x9dff,	// (0x00027ae5) volume_set_pane_g3

0x9e07,	// (0x00027aed) volume_set_pane_g4

0x9e0f,	// (0x00027af5) volume_set_pane_g5

0x9e17,	// (0x00027afd) volume_set_pane_g6

0x9e1f,	// (0x00027b05) volume_set_pane_g7

0x9e27,	// (0x00027b0d) volume_set_pane_g8

0x9e2f,	// (0x00027b15) volume_set_pane_g9

0x9e37,	// (0x00027b1d) volume_set_pane_g10

0x0009,

0xf96b,	// (0x0002d651) volume_set_pane_g

0x8639,	// (0x0002631f) indicator_pane_ParamLimits

0x8639,	// (0x0002631f) indicator_pane

0x8645,	// (0x0002632b) main_idle_pane_g2_ParamLimits

0x8645,	// (0x0002632b) main_idle_pane_g2

0x866d,	// (0x00026353) main_pane_idle_g1_ParamLimits

0x866d,	// (0x00026353) main_pane_idle_g1

0x44fc,	// (0x000221e2) popup_clock_digital_analogue_window_ParamLimits

0x44fc,	// (0x000221e2) popup_clock_digital_analogue_window

0x867a,	// (0x00026360) soft_indicator_pane_ParamLimits

0x867a,	// (0x00026360) soft_indicator_pane

0x8686,	// (0x0002636c) wallpaper_pane_ParamLimits

0x8686,	// (0x0002636c) wallpaper_pane

0x4471,	// (0x00022157) wallpaper_pane_g1

0x8692,	// (0x00026378) indicator_pane_g1_ParamLimits

0x8692,	// (0x00026378) indicator_pane_g1

0x6d1a,	// (0x00024a00) navi_navi_icon_text_pane_srt_g1

0x452a,	// (0x00022210) soft_indicator_pane_t1

0x4544,	// (0x0002222a) aid_ps_area_pane

0x869e,	// (0x00026384) aid_ps_clock_pane

0x4555,	// (0x0002223b) aid_ps_indicator_pane

0x4561,	// (0x00022247) indicator_ps_pane_ParamLimits

0x4561,	// (0x00022247) indicator_ps_pane

0x4570,	// (0x00022256) power_save_pane_g1_ParamLimits

0x4570,	// (0x00022256) power_save_pane_g1

0x457c,	// (0x00022262) power_save_pane_g2_ParamLimits

0x457c,	// (0x00022262) power_save_pane_g2

0x810b,	// (0x00025df1) aid_navinavi_width_pane

0x4544,	// (0x0002222a) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0002d294) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0002d294) power_save_pane_g

0x458a,	// (0x00022270) power_save_pane_t1_ParamLimits

0x458a,	// (0x00022270) power_save_pane_t1

0x869e,	// (0x00026384) aid_ps_clock_pane_ParamLimits

0x4555,	// (0x0002223b) aid_ps_indicator_pane_ParamLimits

0x459c,	// (0x00022282) power_save_pane_t4_ParamLimits

0x459c,	// (0x00022282) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0002d299) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0002d299) power_save_pane_t

0x45c6,	// (0x000222ac) power_save_t3_ParamLimits

0x45c6,	// (0x000222ac) power_save_t3

0x45b1,	// (0x00022297) power_save_t2_ParamLimits

0x45b1,	// (0x00022297) power_save_t2

0x45db,	// (0x000222c1) indicator_ps_pane_g1

0x86ac,	// (0x00026392) ai_gene_pane_ParamLimits

0x86ac,	// (0x00026392) ai_gene_pane

0x86b8,	// (0x0002639e) ai_links_pane_ParamLimits

0x86b8,	// (0x0002639e) ai_links_pane

0x86c4,	// (0x000263aa) indicator_pane_cp1_ParamLimits

0x86c4,	// (0x000263aa) indicator_pane_cp1

0x86d0,	// (0x000263b6) main_pane_idle_g1_cp_ParamLimits

0x86d0,	// (0x000263b6) main_pane_idle_g1_cp

0x45e4,	// (0x000222ca) popup_ai_links_title_window

0x86dc,	// (0x000263c2) soft_indicator_pane_cp1_ParamLimits

0x86dc,	// (0x000263c2) soft_indicator_pane_cp1

0x69dc,	// (0x000246c2) ai_links_pane_g1

0x69e5,	// (0x000246cb) grid_ai_links_pane

0x9d8d,	// (0x00027a73) ai_gene_pane_1

0x69ca,	// (0x000246b0) ai_gene_pane_2

0x69d3,	// (0x000246b9) list_highlight_pane_cp4

0x9d71,	// (0x00027a57) cell_ai_link_pane_ParamLimits

0x9d71,	// (0x00027a57) cell_ai_link_pane

0x69c2,	// (0x000246a8) cell_ai_link_pane_g1

0x4792,	// (0x00022478) cell_ai_link_pane_g2

0x0001,

0xf946,	// (0x0002d62c) cell_ai_link_pane_g

0x447b,	// (0x00022161) grid_highlight_cp2

0x447b,	// (0x00022161) bg_popup_sub_pane_cp1

0x45fb,	// (0x000222e1) popup_ai_links_title_window_t1

0x6910,	// (0x000245f6) ai_gene_pane_1_g1_ParamLimits

0x6910,	// (0x000245f6) ai_gene_pane_1_g1

0x691c,	// (0x00024602) ai_gene_pane_1_g2_ParamLimits

0x691c,	// (0x00024602) ai_gene_pane_1_g2

0x0001,

0xf93c,	// (0x0002d622) ai_gene_pane_1_g_ParamLimits

0xf93c,	// (0x0002d622) ai_gene_pane_1_g

0x6929,	// (0x0002460f) ai_gene_pane_1_t1_ParamLimits

0x6929,	// (0x0002460f) ai_gene_pane_1_t1

0x695d,	// (0x00024643) grid_ai_soft_ind_pane

0x68fb,	// (0x000245e1) ai_gene_pane_2_t1_ParamLimits

0x68fb,	// (0x000245e1) ai_gene_pane_2_t1

0x86e8,	// (0x000263ce) main_pane_empty_t1_ParamLimits

0x86e8,	// (0x000263ce) main_pane_empty_t1

0x8700,	// (0x000263e6) main_pane_empty_t2_ParamLimits

0x8700,	// (0x000263e6) main_pane_empty_t2

0x8715,	// (0x000263fb) main_pane_empty_t3_ParamLimits

0x8715,	// (0x000263fb) main_pane_empty_t3

0x8727,	// (0x0002640d) main_pane_empty_t4_ParamLimits

0x8727,	// (0x0002640d) main_pane_empty_t4

0x8739,	// (0x0002641f) main_pane_empty_t5_ParamLimits

0x8739,	// (0x0002641f) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0002d29e) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0002d29e) main_pane_empty_t

0x4bd6,	// (0x000228bc) bg_popup_window_pane_ParamLimits

0x4bd6,	// (0x000228bc) bg_popup_window_pane

0x66bb,	// (0x000243a1) find_popup_pane_cp2_ParamLimits

0x66bb,	// (0x000243a1) find_popup_pane_cp2

0x66c7,	// (0x000243ad) heading_pane_ParamLimits

0x66c7,	// (0x000243ad) heading_pane

0x447b,	// (0x00022161) bg_popup_sub_pane

0x9c9c,	// (0x00027982) bg_popup_window_pane_g1_ParamLimits

0x9c9c,	// (0x00027982) bg_popup_window_pane_g1

0x9ca8,	// (0x0002798e) bg_popup_window_pane_g2_ParamLimits

0x9ca8,	// (0x0002798e) bg_popup_window_pane_g2

0x9cb4,	// (0x0002799a) bg_popup_window_pane_g3_ParamLimits

0x9cb4,	// (0x0002799a) bg_popup_window_pane_g3

0x9cc0,	// (0x000279a6) bg_popup_window_pane_g4_ParamLimits

0x9cc0,	// (0x000279a6) bg_popup_window_pane_g4

0x9ccc,	// (0x000279b2) bg_popup_window_pane_g5_ParamLimits

0x9ccc,	// (0x000279b2) bg_popup_window_pane_g5

0x9cd8,	// (0x000279be) bg_popup_window_pane_g6_ParamLimits

0x9cd8,	// (0x000279be) bg_popup_window_pane_g6

0x9ce4,	// (0x000279ca) bg_popup_window_pane_g7_ParamLimits

0x9ce4,	// (0x000279ca) bg_popup_window_pane_g7

0x9cf0,	// (0x000279d6) bg_popup_window_pane_g8_ParamLimits

0x9cf0,	// (0x000279d6) bg_popup_window_pane_g8

0x9cfc,	// (0x000279e2) bg_popup_window_pane_g9_ParamLimits

0x9cfc,	// (0x000279e2) bg_popup_window_pane_g9

0x66a1,	// (0x00024387) bg_popup_window_pane_g10_ParamLimits

0x66a1,	// (0x00024387) bg_popup_window_pane_g10

0x0009,

0xf904,	// (0x0002d5ea) bg_popup_window_pane_g_ParamLimits

0xf904,	// (0x0002d5ea) bg_popup_window_pane_g

0x6658,	// (0x0002433e) bg_popup_heading_pane_ParamLimits

0x6658,	// (0x0002433e) bg_popup_heading_pane

0xa12e,	// (0x00027e14) tabs_4_passive_pane_cp_srt_ParamLimits

0xa12e,	// (0x00027e14) tabs_4_passive_pane_cp_srt

0xa140,	// (0x00027e26) tabs_4_passive_pane_srt_ParamLimits

0x666c,	// (0x00024352) heading_pane_g2

0xa140,	// (0x00027e26) tabs_4_passive_pane_srt

0x57b6,	// (0x0002349c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x57b6,	// (0x0002349c) bg_passive_tab_pane_cp3_srt

0x6674,	// (0x0002435a) heading_pane_t1_ParamLimits

0x6674,	// (0x0002435a) heading_pane_t1

0x668b,	// (0x00024371) heading_pane_t2_ParamLimits

0x668b,	// (0x00024371) heading_pane_t2

0x0001,

0xf8ff,	// (0x0002d5e5) heading_pane_t_ParamLimits

0xf8ff,	// (0x0002d5e5) heading_pane_t

0x61b1,	// (0x00023e97) bg_popup_heading_pane_g1

0x6242,	// (0x00023f28) bg_popup_heading_pane_g2

0x624c,	// (0x00023f32) bg_popup_heading_pane_g3

0x6256,	// (0x00023f3c) bg_popup_heading_pane_g4

0x6260,	// (0x00023f46) bg_popup_heading_pane_g5

0x626a,	// (0x00023f50) bg_popup_heading_pane_g6

0x6272,	// (0x00023f58) bg_popup_heading_pane_g7

0x627a,	// (0x00023f60) bg_popup_heading_pane_g8

0x6284,	// (0x00023f6a) bg_popup_heading_pane_g9

0x0008,

0xf8bb,	// (0x0002d5a1) bg_popup_heading_pane_g

0x5aa8,	// (0x0002378e) bg_popup_sub_pane_g1

0x5ab0,	// (0x00023796) bg_popup_sub_pane_g2

0x5ab8,	// (0x0002379e) bg_popup_sub_pane_g3

0x5ac0,	// (0x000237a6) bg_popup_sub_pane_g4

0x5ac8,	// (0x000237ae) bg_popup_sub_pane_g5

0x5ad0,	// (0x000237b6) bg_popup_sub_pane_g6

0x5ad8,	// (0x000237be) bg_popup_sub_pane_g7

0x5ae0,	// (0x000237c6) bg_popup_sub_pane_g8

0x5ae8,	// (0x000237ce) bg_popup_sub_pane_g9

0x0008,

0xf895,	// (0x0002d57b) bg_popup_sub_pane_g

0x44c9,	// (0x000221af) bg_popup_window_pane_cp5_ParamLimits

0x44c9,	// (0x000221af) bg_popup_window_pane_cp5

0x4618,	// (0x000222fe) popup_note_window_g1_ParamLimits

0x4618,	// (0x000222fe) popup_note_window_g1

0x4624,	// (0x0002230a) popup_note_window_t1_ParamLimits

0x4624,	// (0x0002230a) popup_note_window_t1

0x4636,	// (0x0002231c) popup_note_window_t2_ParamLimits

0x4636,	// (0x0002231c) popup_note_window_t2

0x4648,	// (0x0002232e) popup_note_window_t3_ParamLimits

0x4648,	// (0x0002232e) popup_note_window_t3

0x465a,	// (0x00022340) popup_note_window_t4_ParamLimits

0x465a,	// (0x00022340) popup_note_window_t4

0x4682,	// (0x00022368) popup_note_window_t5_ParamLimits

0x4682,	// (0x00022368) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0002d2a9) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0002d2a9) popup_note_window_t

0x46a6,	// (0x0002238c) bg_popup_window_pane_cp6_ParamLimits

0x46a6,	// (0x0002238c) bg_popup_window_pane_cp6

0x6125,	// (0x00023e0b) popup_note_image_window_g1_ParamLimits

0x6125,	// (0x00023e0b) popup_note_image_window_g1

0x6131,	// (0x00023e17) popup_note_image_window_g2_ParamLimits

0x6131,	// (0x00023e17) popup_note_image_window_g2

0x0001,

0xf889,	// (0x0002d56f) popup_note_image_window_g_ParamLimits

0xf889,	// (0x0002d56f) popup_note_image_window_g

0x614a,	// (0x00023e30) popup_note_image_window_t1_ParamLimits

0x614a,	// (0x00023e30) popup_note_image_window_t1

0x6163,	// (0x00023e49) popup_note_image_window_t2_ParamLimits

0x6163,	// (0x00023e49) popup_note_image_window_t2

0x617c,	// (0x00023e62) popup_note_image_window_t3_ParamLimits

0x617c,	// (0x00023e62) popup_note_image_window_t3

0x0002,

0xf88e,	// (0x0002d574) popup_note_image_window_t_ParamLimits

0xf88e,	// (0x0002d574) popup_note_image_window_t

0x6002,	// (0x00023ce8) bg_popup_window_pane_cp7_ParamLimits

0x6002,	// (0x00023ce8) bg_popup_window_pane_cp7

0x6032,	// (0x00023d18) popup_note_wait_window_g1_ParamLimits

0x6032,	// (0x00023d18) popup_note_wait_window_g1

0x603e,	// (0x00023d24) popup_note_wait_window_g2_ParamLimits

0x603e,	// (0x00023d24) popup_note_wait_window_g2

0x0002,

0xf877,	// (0x0002d55d) popup_note_wait_window_g_ParamLimits

0xf877,	// (0x0002d55d) popup_note_wait_window_g

0x6056,	// (0x00023d3c) popup_note_wait_window_t1_ParamLimits

0x6056,	// (0x00023d3c) popup_note_wait_window_t1

0x607d,	// (0x00023d63) popup_note_wait_window_t2_ParamLimits

0x607d,	// (0x00023d63) popup_note_wait_window_t2

0x609a,	// (0x00023d80) popup_note_wait_window_t3_ParamLimits

0x609a,	// (0x00023d80) popup_note_wait_window_t3

0x60ad,	// (0x00023d93) popup_note_wait_window_t4_ParamLimits

0x60ad,	// (0x00023d93) popup_note_wait_window_t4

0x0004,

0xf87e,	// (0x0002d564) popup_note_wait_window_t_ParamLimits

0xf87e,	// (0x0002d564) popup_note_wait_window_t

0x60d2,	// (0x00023db8) wait_bar_pane_ParamLimits

0x60d2,	// (0x00023db8) wait_bar_pane

0x447b,	// (0x00022161) wait_anim_pane

0x447b,	// (0x00022161) wait_border_pane

0x4471,	// (0x00022157) wait_anim_pane_g1

0x4471,	// (0x00022157) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0002d428) wait_anim_pane_g

0x5fa6,	// (0x00023c8c) wait_border_pane_g1

0x5fb1,	// (0x00023c97) wait_border_pane_g2

0x5fba,	// (0x00023ca0) wait_border_pane_g3

0x0002,

0xf870,	// (0x0002d556) wait_border_pane_g

0x5f08,	// (0x00023bee) bg_popup_window_pane_cp16_ParamLimits

0x5f08,	// (0x00023bee) bg_popup_window_pane_cp16

0x5f16,	// (0x00023bfc) indicator_popup_pane_cp4_ParamLimits

0x5f16,	// (0x00023bfc) indicator_popup_pane_cp4

0x5f2a,	// (0x00023c10) popup_query_data_window_t1_ParamLimits

0x5f2a,	// (0x00023c10) popup_query_data_window_t1

0x5f3c,	// (0x00023c22) popup_query_data_window_t2_ParamLimits

0x5f3c,	// (0x00023c22) popup_query_data_window_t2

0x5f55,	// (0x00023c3b) popup_query_data_window_t3_ParamLimits

0x5f55,	// (0x00023c3b) popup_query_data_window_t3

0x0002,

0xf869,	// (0x0002d54f) popup_query_data_window_t_ParamLimits

0xf869,	// (0x0002d54f) popup_query_data_window_t

0x5f6f,	// (0x00023c55) query_popup_data_pane_ParamLimits

0x5f6f,	// (0x00023c55) query_popup_data_pane

0x5f83,	// (0x00023c69) query_popup_data_pane_cp1_ParamLimits

0x5f83,	// (0x00023c69) query_popup_data_pane_cp1

0x46a6,	// (0x0002238c) bg_popup_window_pane_cp10_ParamLimits

0x46a6,	// (0x0002238c) bg_popup_window_pane_cp10

0x5e6b,	// (0x00023b51) indicator_popup_pane_ParamLimits

0x5e6b,	// (0x00023b51) indicator_popup_pane

0x46fd,	// (0x000223e3) popup_query_code_window_t1_ParamLimits

0x46fd,	// (0x000223e3) popup_query_code_window_t1

0x5e83,	// (0x00023b69) popup_query_code_window_t2_ParamLimits

0x5e83,	// (0x00023b69) popup_query_code_window_t2

0x5ec1,	// (0x00023ba7) popup_query_code_window_t3_ParamLimits

0x5ec1,	// (0x00023ba7) popup_query_code_window_t3

0x0002,

0xf862,	// (0x0002d548) popup_query_code_window_t_ParamLimits

0xf862,	// (0x0002d548) popup_query_code_window_t

0x5ef0,	// (0x00023bd6) query_popup_pane_ParamLimits

0x5ef0,	// (0x00023bd6) query_popup_pane

0x46a6,	// (0x0002238c) bg_popup_window_pane_cp15_ParamLimits

0x46a6,	// (0x0002238c) bg_popup_window_pane_cp15

0x46c4,	// (0x000223aa) indicator_popup_pane_cp1_ParamLimits

0x46c4,	// (0x000223aa) indicator_popup_pane_cp1

0x46d7,	// (0x000223bd) indicator_popup_pane_cp2_ParamLimits

0x46d7,	// (0x000223bd) indicator_popup_pane_cp2

0x46ea,	// (0x000223d0) popup_query_data_code_window_g1_ParamLimits

0x46ea,	// (0x000223d0) popup_query_data_code_window_g1

0x46fd,	// (0x000223e3) popup_query_data_code_window_t1_ParamLimits

0x46fd,	// (0x000223e3) popup_query_data_code_window_t1

0x470f,	// (0x000223f5) popup_query_data_code_window_t2_ParamLimits

0x470f,	// (0x000223f5) popup_query_data_code_window_t2

0x4721,	// (0x00022407) popup_query_data_code_window_t3_ParamLimits

0x4721,	// (0x00022407) popup_query_data_code_window_t3

0x4737,	// (0x0002241d) popup_query_data_code_window_t4_ParamLimits

0x4737,	// (0x0002241d) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0002d2b4) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0002d2b4) popup_query_data_code_window_t

0x98c5,	// (0x000275ab) list_single_midp_graphic_pane_g3

0x474f,	// (0x00022435) query_popup_data_pane_cp2_ParamLimits

0x4762,	// (0x00022448) query_popup_pane_cp2_ParamLimits

0x4762,	// (0x00022448) query_popup_pane_cp2

0x447b,	// (0x00022161) bg_popup_window_pane_cp11

0x5e3f,	// (0x00023b25) heading_pane_cp5

0x47f0,	// (0x000224d6) listscroll_popup_info_pane

0x447b,	// (0x00022161) input_focus_pane_cp3

0x4775,	// (0x0002245b) query_popup_pane_t1

0x4783,	// (0x00022469) list_popup_info_pane_ParamLimits

0x4783,	// (0x00022469) list_popup_info_pane

0x4792,	// (0x00022478) listscroll_popup_info_pane_g1

0x479a,	// (0x00022480) scroll_pane_cp7

0x47a4,	// (0x0002248a) popup_info_list_pane_t1_ParamLimits

0x47a4,	// (0x0002248a) popup_info_list_pane_t1

0x47be,	// (0x000224a4) popup_info_list_pane_t2_ParamLimits

0x47be,	// (0x000224a4) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0002d2bd) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0002d2bd) popup_info_list_pane_t

0x447b,	// (0x00022161) bg_popup_window_pane_cp12

0x6d34,	// (0x00024a1a) find_popup_pane

0x44d7,	// (0x000221bd) bg_popup_window_pane_cp3

0x47d8,	// (0x000224be) heading_pane_cp3

0x47e4,	// (0x000224ca) listscroll_popup_graphic_pane

0x447b,	// (0x00022161) bg_popup_window_pane_cp4

0x879d,	// (0x00026483) heading_pane_cp4

0x47f0,	// (0x000224d6) listscroll_popup_colour_pane

0x47f8,	// (0x000224de) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x47f8,	// (0x000224de) cell_large_graphic_colour_none_popup_pane

0x87a7,	// (0x0002648d) grid_large_graphic_colour_popup_pane_ParamLimits

0x87a7,	// (0x0002648d) grid_large_graphic_colour_popup_pane

0x480c,	// (0x000224f2) listscroll_popup_colour_pane_g1_ParamLimits

0x480c,	// (0x000224f2) listscroll_popup_colour_pane_g1

0x4823,	// (0x00022509) listscroll_popup_colour_pane_g2_ParamLimits

0x4823,	// (0x00022509) listscroll_popup_colour_pane_g2

0x483a,	// (0x00022520) listscroll_popup_colour_pane_g3_ParamLimits

0x483a,	// (0x00022520) listscroll_popup_colour_pane_g3

0x87cb,	// (0x000264b1) listscroll_popup_colour_pane_g4_ParamLimits

0x87cb,	// (0x000264b1) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0002d2c2) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0002d2c2) listscroll_popup_colour_pane_g

0x484a,	// (0x00022530) scroll_pane_cp6_ParamLimits

0x484a,	// (0x00022530) scroll_pane_cp6

0x87da,	// (0x000264c0) cell_large_graphic_colour_popup_pane_ParamLimits

0x87da,	// (0x000264c0) cell_large_graphic_colour_popup_pane

0x485c,	// (0x00022542) cell_large_graphic_colour_none_popup_pane_t1

0x447b,	// (0x00022161) grid_highlight_pane_cp5

0x486b,	// (0x00022551) cell_large_graphic_colour_popup_pane_g1

0x4873,	// (0x00022559) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0002d2cb) cell_large_graphic_colour_popup_pane_g

0x487b,	// (0x00022561) cell_large_graphic_colour_popup_pane_g2_copy1

0x4884,	// (0x0002256a) grid_highlight_pane_cp4

0x488c,	// (0x00022572) bg_popup_window_pane_cp8_ParamLimits

0x488c,	// (0x00022572) bg_popup_window_pane_cp8

0x48a7,	// (0x0002258d) popup_snote_single_text_window_g1_ParamLimits

0x48a7,	// (0x0002258d) popup_snote_single_text_window_g1

0x48b9,	// (0x0002259f) popup_snote_single_text_window_t1_ParamLimits

0x48b9,	// (0x0002259f) popup_snote_single_text_window_t1

0x48cc,	// (0x000225b2) popup_snote_single_text_window_t2_ParamLimits

0x48cc,	// (0x000225b2) popup_snote_single_text_window_t2

0x48df,	// (0x000225c5) popup_snote_single_text_window_t3_ParamLimits

0x48df,	// (0x000225c5) popup_snote_single_text_window_t3

0x4918,	// (0x000225fe) popup_snote_single_text_window_t4_ParamLimits

0x4918,	// (0x000225fe) popup_snote_single_text_window_t4

0x494c,	// (0x00022632) popup_snote_single_text_window_t5_ParamLimits

0x494c,	// (0x00022632) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0002d2d0) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0002d2d0) popup_snote_single_text_window_t

0x497b,	// (0x00022661) bg_popup_window_pane_cp9_ParamLimits

0x497b,	// (0x00022661) bg_popup_window_pane_cp9

0x48a7,	// (0x0002258d) popup_snote_single_graphic_window_g1_ParamLimits

0x48a7,	// (0x0002258d) popup_snote_single_graphic_window_g1

0x4989,	// (0x0002266f) popup_snote_single_graphic_window_g2_ParamLimits

0x4989,	// (0x0002266f) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0002d2db) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0002d2db) popup_snote_single_graphic_window_g

0x4995,	// (0x0002267b) popup_snote_single_graphic_window_t1_ParamLimits

0x4995,	// (0x0002267b) popup_snote_single_graphic_window_t1

0x49a8,	// (0x0002268e) popup_snote_single_graphic_window_t2_ParamLimits

0x49a8,	// (0x0002268e) popup_snote_single_graphic_window_t2

0x49bb,	// (0x000226a1) popup_snote_single_graphic_window_t3_ParamLimits

0x49bb,	// (0x000226a1) popup_snote_single_graphic_window_t3

0x49f4,	// (0x000226da) popup_snote_single_graphic_window_t4_ParamLimits

0x49f4,	// (0x000226da) popup_snote_single_graphic_window_t4

0x4a28,	// (0x0002270e) popup_snote_single_graphic_window_t5_ParamLimits

0x4a28,	// (0x0002270e) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0002d2e0) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0002d2e0) popup_snote_single_graphic_window_t

0x6cb8,	// (0x0002499e) grid_graphic_popup_pane_ParamLimits

0x6cb8,	// (0x0002499e) grid_graphic_popup_pane

0x6ce4,	// (0x000249ca) listscroll_popup_graphic_pane_g1_ParamLimits

0x6ce4,	// (0x000249ca) listscroll_popup_graphic_pane_g1

0xa0f6,	// (0x00027ddc) listscroll_popup_graphic_pane_g2_ParamLimits

0xa0f6,	// (0x00027ddc) listscroll_popup_graphic_pane_g2

0x0001,

0xf9df,	// (0x0002d6c5) listscroll_popup_graphic_pane_g_ParamLimits

0xf9df,	// (0x0002d6c5) listscroll_popup_graphic_pane_g

0x6a14,	// (0x000246fa) scroll_pane_cp5

0xa0b7,	// (0x00027d9d) cell_graphic_popup_pane_ParamLimits

0xa0b7,	// (0x00027d9d) cell_graphic_popup_pane

0x6c83,	// (0x00024969) cell_graphic_popup_pane_g1

0x6c8b,	// (0x00024971) cell_graphic_popup_pane_g2

0x487b,	// (0x00022561) cell_graphic_popup_pane_g3

0x0002,

0xf9d8,	// (0x0002d6be) cell_graphic_popup_pane_g

0x6c94,	// (0x0002497a) cell_graphic_popup_pane_t2

0x4884,	// (0x0002256a) grid_highlight_pane_cp3

0x4a69,	// (0x0002274f) list_gen_pane_ParamLimits

0x4a69,	// (0x0002274f) list_gen_pane

0x4a91,	// (0x00022777) scroll_pane

0xa06a,	// (0x00027d50) bg_list_pane_g1_ParamLimits

0xa06a,	// (0x00027d50) bg_list_pane_g1

0x6c32,	// (0x00024918) bg_list_pane_g2_ParamLimits

0x6c32,	// (0x00024918) bg_list_pane_g2

0x6c45,	// (0x0002492b) bg_list_pane_g3_ParamLimits

0x6c45,	// (0x0002492b) bg_list_pane_g3

0x6c57,	// (0x0002493d) bg_list_pane_g4_ParamLimits

0x6c57,	// (0x0002493d) bg_list_pane_g4

0xa085,	// (0x00027d6b) bg_list_pane_g5_ParamLimits

0xa085,	// (0x00027d6b) bg_list_pane_g5

0x0004,

0xf9cd,	// (0x0002d6b3) bg_list_pane_g_ParamLimits

0xf9cd,	// (0x0002d6b3) bg_list_pane_g

0xe714,	// (0x0002c3fa) list_double2_graphic_large_graphic_pane_ParamLimits

0xe714,	// (0x0002c3fa) list_double2_graphic_large_graphic_pane

0xe714,	// (0x0002c3fa) list_double2_graphic_pane_ParamLimits

0xe714,	// (0x0002c3fa) list_double2_graphic_pane

0xe714,	// (0x0002c3fa) list_double2_large_graphic_pane_ParamLimits

0xe714,	// (0x0002c3fa) list_double2_large_graphic_pane

0xe714,	// (0x0002c3fa) list_double2_pane_ParamLimits

0xe714,	// (0x0002c3fa) list_double2_pane

0xe714,	// (0x0002c3fa) list_double_graphic_heading_pane_ParamLimits

0xe714,	// (0x0002c3fa) list_double_graphic_heading_pane

0xe714,	// (0x0002c3fa) list_double_graphic_pane_ParamLimits

0xe714,	// (0x0002c3fa) list_double_graphic_pane

0xe714,	// (0x0002c3fa) list_double_heading_pane_ParamLimits

0xe714,	// (0x0002c3fa) list_double_heading_pane

0xe714,	// (0x0002c3fa) list_double_large_graphic_pane_ParamLimits

0xe714,	// (0x0002c3fa) list_double_large_graphic_pane

0xe714,	// (0x0002c3fa) list_double_number_pane_ParamLimits

0xe714,	// (0x0002c3fa) list_double_number_pane

0xe714,	// (0x0002c3fa) list_double_pane_ParamLimits

0xe714,	// (0x0002c3fa) list_double_pane

0xe714,	// (0x0002c3fa) list_double_time_pane_ParamLimits

0xe714,	// (0x0002c3fa) list_double_time_pane

0xe714,	// (0x0002c3fa) list_setting_number_pane_ParamLimits

0xe714,	// (0x0002c3fa) list_setting_number_pane

0xe714,	// (0x0002c3fa) list_setting_pane_ParamLimits

0xe714,	// (0x0002c3fa) list_setting_pane

0xe770,	// (0x0002c456) list_single_2graphic_pane_ParamLimits

0xe770,	// (0x0002c456) list_single_2graphic_pane

0xe770,	// (0x0002c456) list_single_graphic_heading_pane_ParamLimits

0xe770,	// (0x0002c456) list_single_graphic_heading_pane

0xe770,	// (0x0002c456) list_single_graphic_pane_ParamLimits

0xe770,	// (0x0002c456) list_single_graphic_pane

0xe770,	// (0x0002c456) list_single_heading_pane_ParamLimits

0xe770,	// (0x0002c456) list_single_heading_pane

0xe7de,	// (0x0002c4c4) list_single_large_graphic_pane_ParamLimits

0xe7de,	// (0x0002c4c4) list_single_large_graphic_pane

0xe770,	// (0x0002c456) list_single_number_heading_pane_ParamLimits

0xe770,	// (0x0002c456) list_single_number_heading_pane

0xe770,	// (0x0002c456) list_single_number_pane_ParamLimits

0xe770,	// (0x0002c456) list_single_number_pane

0xe770,	// (0x0002c456) list_single_pane_ParamLimits

0xe770,	// (0x0002c456) list_single_pane

0x447b,	// (0x00022161) list_highlight_pane_cp1

0xdee7,	// (0x0002bbcd) list_single_pane_g1_ParamLimits

0xdee7,	// (0x0002bbcd) list_single_pane_g1

0xdef3,	// (0x0002bbd9) list_single_pane_g2_ParamLimits

0xdef3,	// (0x0002bbd9) list_single_pane_g2

0x0001,

0xf60c,	// (0x0002d2f2) list_single_pane_g_ParamLimits

0xf60c,	// (0x0002d2f2) list_single_pane_g

0xe6fe,	// (0x0002c3e4) list_single_pane_t1_ParamLimits

0xe6fe,	// (0x0002c3e4) list_single_pane_t1

0xdee7,	// (0x0002bbcd) list_single_number_pane_g1_ParamLimits

0xdee7,	// (0x0002bbcd) list_single_number_pane_g1

0xdef3,	// (0x0002bbd9) list_single_number_pane_g2_ParamLimits

0xdef3,	// (0x0002bbd9) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0002d2f2) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0002d2f2) list_single_number_pane_g

0xe632,	// (0x0002c318) list_single_number_pane_t1_ParamLimits

0xe632,	// (0x0002c318) list_single_number_pane_t1

0xe6be,	// (0x0002c3a4) list_single_number_pane_t2_ParamLimits

0xe6be,	// (0x0002c3a4) list_single_number_pane_t2

0x0001,

0xf98e,	// (0x0002d674) list_single_number_pane_t_ParamLimits

0xf98e,	// (0x0002d674) list_single_number_pane_t

0xdedb,	// (0x0002bbc1) list_single_graphic_pane_g1_ParamLimits

0xdedb,	// (0x0002bbc1) list_single_graphic_pane_g1

0xdee7,	// (0x0002bbcd) list_single_graphic_pane_g2_ParamLimits

0xdee7,	// (0x0002bbcd) list_single_graphic_pane_g2

0xdef3,	// (0x0002bbd9) list_single_graphic_pane_g3_ParamLimits

0xdef3,	// (0x0002bbd9) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002d2eb) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002d2eb) list_single_graphic_pane_g

0xdeff,	// (0x0002bbe5) list_single_graphic_pane_t1_ParamLimits

0xdeff,	// (0x0002bbe5) list_single_graphic_pane_t1

0xdee7,	// (0x0002bbcd) list_single_heading_pane_g1_ParamLimits

0xdee7,	// (0x0002bbcd) list_single_heading_pane_g1

0xdef3,	// (0x0002bbd9) list_single_heading_pane_g2_ParamLimits

0xdef3,	// (0x0002bbd9) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0002d2f2) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0002d2f2) list_single_heading_pane_g

0xdf15,	// (0x0002bbfb) list_single_heading_pane_t1_ParamLimits

0xdf15,	// (0x0002bbfb) list_single_heading_pane_t1

0xdf2b,	// (0x0002bc11) list_single_heading_pane_t2_ParamLimits

0xdf2b,	// (0x0002bc11) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0002d2f7) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0002d2f7) list_single_heading_pane_t

0xdee7,	// (0x0002bbcd) list_single_number_heading_pane_g1_ParamLimits

0xdee7,	// (0x0002bbcd) list_single_number_heading_pane_g1

0xdef3,	// (0x0002bbd9) list_single_number_heading_pane_g2_ParamLimits

0xdef3,	// (0x0002bbd9) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0002d2f2) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0002d2f2) list_single_number_heading_pane_g

0xdf15,	// (0x0002bbfb) list_single_number_heading_pane_t1_ParamLimits

0xdf15,	// (0x0002bbfb) list_single_number_heading_pane_t1

0xdf3d,	// (0x0002bc23) list_single_number_heading_pane_t2_ParamLimits

0xdf3d,	// (0x0002bc23) list_single_number_heading_pane_t2

0xdf4f,	// (0x0002bc35) list_single_number_heading_pane_t3_ParamLimits

0xdf4f,	// (0x0002bc35) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0002d2fc) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0002d2fc) list_single_number_heading_pane_t

0xdf61,	// (0x0002bc47) list_single_graphic_heading_pane_g1_ParamLimits

0xdf61,	// (0x0002bc47) list_single_graphic_heading_pane_g1

0xdf6d,	// (0x0002bc53) list_single_graphic_heading_pane_g4_ParamLimits

0xdf6d,	// (0x0002bc53) list_single_graphic_heading_pane_g4

0xdef3,	// (0x0002bbd9) list_single_graphic_heading_pane_g5_ParamLimits

0xdef3,	// (0x0002bbd9) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0002d303) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0002d303) list_single_graphic_heading_pane_g

0xdf15,	// (0x0002bbfb) list_single_graphic_heading_pane_t1_ParamLimits

0xdf15,	// (0x0002bbfb) list_single_graphic_heading_pane_t1

0xdf7e,	// (0x0002bc64) list_single_graphic_heading_pane_t2_ParamLimits

0xdf7e,	// (0x0002bc64) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0002d30a) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0002d30a) list_single_graphic_heading_pane_t

0xdf90,	// (0x0002bc76) list_single_large_graphic_pane_g1_ParamLimits

0xdf90,	// (0x0002bc76) list_single_large_graphic_pane_g1

0xdf9c,	// (0x0002bc82) list_single_large_graphic_pane_g2_ParamLimits

0xdf9c,	// (0x0002bc82) list_single_large_graphic_pane_g2

0xdfa8,	// (0x0002bc8e) list_single_large_graphic_pane_g3_ParamLimits

0xdfa8,	// (0x0002bc8e) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0002d30f) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0002d30f) list_single_large_graphic_pane_g

0x5fb1,	// (0x00023c97) wait_border_pane_g2_copy1

0xdfb4,	// (0x0002bc9a) list_single_large_graphic_pane_g4_cp2

0xdfbc,	// (0x0002bca2) list_single_large_graphic_pane_t1_ParamLimits

0xdfbc,	// (0x0002bca2) list_single_large_graphic_pane_t1

0xdfd2,	// (0x0002bcb8) list_double_pane_g1_ParamLimits

0xdfd2,	// (0x0002bcb8) list_double_pane_g1

0xdfde,	// (0x0002bcc4) list_double_pane_g2_ParamLimits

0xdfde,	// (0x0002bcc4) list_double_pane_g2

0x0001,

0xf630,	// (0x0002d316) list_double_pane_g_ParamLimits

0xf630,	// (0x0002d316) list_double_pane_g

0xdfea,	// (0x0002bcd0) list_double_pane_t1_ParamLimits

0xdfea,	// (0x0002bcd0) list_double_pane_t1

0xe000,	// (0x0002bce6) list_double_pane_t2_ParamLimits

0xe000,	// (0x0002bce6) list_double_pane_t2

0x0001,

0xf635,	// (0x0002d31b) list_double_pane_t_ParamLimits

0xf635,	// (0x0002d31b) list_double_pane_t

0xe012,	// (0x0002bcf8) list_double2_pane_g1_ParamLimits

0xe012,	// (0x0002bcf8) list_double2_pane_g1

0xdfde,	// (0x0002bcc4) list_double2_pane_g2_ParamLimits

0xdfde,	// (0x0002bcc4) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0002d320) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0002d320) list_double2_pane_g

0xdfea,	// (0x0002bcd0) list_double2_pane_t1_ParamLimits

0xdfea,	// (0x0002bcd0) list_double2_pane_t1

0xe023,	// (0x0002bd09) list_double2_pane_t2_ParamLimits

0xe023,	// (0x0002bd09) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0002d325) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0002d325) list_double2_pane_t

0xdfd2,	// (0x0002bcb8) list_double_number_pane_g1_ParamLimits

0xdfd2,	// (0x0002bcb8) list_double_number_pane_g1

0xdfde,	// (0x0002bcc4) list_double_number_pane_g2_ParamLimits

0xdfde,	// (0x0002bcc4) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0002d316) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0002d316) list_double_number_pane_g

0xe035,	// (0x0002bd1b) list_double_number_pane_t1_ParamLimits

0xe035,	// (0x0002bd1b) list_double_number_pane_t1

0xe047,	// (0x0002bd2d) list_double_number_pane_t2_ParamLimits

0xe047,	// (0x0002bd2d) list_double_number_pane_t2

0xe05d,	// (0x0002bd43) list_double_number_pane_t3_ParamLimits

0xe05d,	// (0x0002bd43) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0002d32a) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0002d32a) list_double_number_pane_t

0xe06f,	// (0x0002bd55) list_double_graphic_pane_g1_ParamLimits

0xe06f,	// (0x0002bd55) list_double_graphic_pane_g1

0xe07b,	// (0x0002bd61) list_double_graphic_pane_g2_ParamLimits

0xe07b,	// (0x0002bd61) list_double_graphic_pane_g2

0xe08a,	// (0x0002bd70) list_double_graphic_pane_g3_ParamLimits

0xe08a,	// (0x0002bd70) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0002d331) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0002d331) list_double_graphic_pane_g

0xe0a2,	// (0x0002bd88) list_double_graphic_pane_t1_ParamLimits

0xe0a2,	// (0x0002bd88) list_double_graphic_pane_t1

0xe0b8,	// (0x0002bd9e) list_double_graphic_pane_t2_ParamLimits

0xe0b8,	// (0x0002bd9e) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0002d33a) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0002d33a) list_double_graphic_pane_t

0xe06f,	// (0x0002bd55) list_double2_graphic_pane_g1_ParamLimits

0xe06f,	// (0x0002bd55) list_double2_graphic_pane_g1

0xe0ca,	// (0x0002bdb0) list_double2_graphic_pane_g2_ParamLimits

0xe0ca,	// (0x0002bdb0) list_double2_graphic_pane_g2

0xe0d6,	// (0x0002bdbc) list_double2_graphic_pane_g3_ParamLimits

0xe0d6,	// (0x0002bdbc) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0002d33f) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0002d33f) list_double2_graphic_pane_g

0xe047,	// (0x0002bd2d) list_double2_graphic_pane_t1_ParamLimits

0xe047,	// (0x0002bd2d) list_double2_graphic_pane_t1

0xe0e2,	// (0x0002bdc8) list_double2_graphic_pane_t2_ParamLimits

0xe0e2,	// (0x0002bdc8) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0002d346) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0002d346) list_double2_graphic_pane_t

0xe0f4,	// (0x0002bdda) list_double_large_graphic_pane_g1_ParamLimits

0xe0f4,	// (0x0002bdda) list_double_large_graphic_pane_g1

0xe012,	// (0x0002bcf8) list_double_large_graphic_pane_g2_ParamLimits

0xe012,	// (0x0002bcf8) list_double_large_graphic_pane_g2

0xdfde,	// (0x0002bcc4) list_double_large_graphic_pane_g3_ParamLimits

0xdfde,	// (0x0002bcc4) list_double_large_graphic_pane_g3

0xe11f,	// (0x0002be05) list_double_large_graphic_pane_g4_ParamLimits

0xe11f,	// (0x0002be05) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0002d34b) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0002d34b) list_double_large_graphic_pane_g

0xe147,	// (0x0002be2d) list_double_large_graphic_pane_t1_ParamLimits

0xe147,	// (0x0002be2d) list_double_large_graphic_pane_t1

0xe160,	// (0x0002be46) list_double_large_graphic_pane_t2_ParamLimits

0xe160,	// (0x0002be46) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0002d356) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0002d356) list_double_large_graphic_pane_t

0xe172,	// (0x0002be58) list_double2_large_graphic_pane_g1_ParamLimits

0xe172,	// (0x0002be58) list_double2_large_graphic_pane_g1

0xe012,	// (0x0002bcf8) list_double2_large_graphic_pane_g2_ParamLimits

0xe012,	// (0x0002bcf8) list_double2_large_graphic_pane_g2

0xdfde,	// (0x0002bcc4) list_double2_large_graphic_pane_g3_ParamLimits

0xdfde,	// (0x0002bcc4) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0002d35b) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0002d35b) list_double2_large_graphic_pane_g

0xe17e,	// (0x0002be64) list_double2_large_graphic_pane_t1_ParamLimits

0xe17e,	// (0x0002be64) list_double2_large_graphic_pane_t1

0xe194,	// (0x0002be7a) list_double2_large_graphic_pane_t2_ParamLimits

0xe194,	// (0x0002be7a) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0002d362) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0002d362) list_double2_large_graphic_pane_t

0xe1a6,	// (0x0002be8c) list_double_heading_pane_g1_ParamLimits

0xe1a6,	// (0x0002be8c) list_double_heading_pane_g1

0xe1b7,	// (0x0002be9d) list_double_heading_pane_g2_ParamLimits

0xe1b7,	// (0x0002be9d) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0002d367) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0002d367) list_double_heading_pane_g

0xe1c3,	// (0x0002bea9) list_double_heading_pane_t1_ParamLimits

0xe1c3,	// (0x0002bea9) list_double_heading_pane_t1

0xe023,	// (0x0002bd09) list_double_heading_pane_t2_ParamLimits

0xe023,	// (0x0002bd09) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0002d36c) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0002d36c) list_double_heading_pane_t

0xe06f,	// (0x0002bd55) list_double_graphic_heading_pane_g1_ParamLimits

0xe06f,	// (0x0002bd55) list_double_graphic_heading_pane_g1

0xe1a6,	// (0x0002be8c) list_double_graphic_heading_pane_g2_ParamLimits

0xe1a6,	// (0x0002be8c) list_double_graphic_heading_pane_g2

0xe1b7,	// (0x0002be9d) list_double_graphic_heading_pane_g3_ParamLimits

0xe1b7,	// (0x0002be9d) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0002d371) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0002d371) list_double_graphic_heading_pane_g

0xe1d9,	// (0x0002bebf) list_double_graphic_heading_pane_t1_ParamLimits

0xe1d9,	// (0x0002bebf) list_double_graphic_heading_pane_t1

0xe0e2,	// (0x0002bdc8) list_double_graphic_heading_pane_t2_ParamLimits

0xe0e2,	// (0x0002bdc8) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0002d378) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0002d378) list_double_graphic_heading_pane_t

0xe012,	// (0x0002bcf8) list_double_time_pane_g1_ParamLimits

0xe012,	// (0x0002bcf8) list_double_time_pane_g1

0xdfde,	// (0x0002bcc4) list_double_time_pane_g2_ParamLimits

0xdfde,	// (0x0002bcc4) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x0002d320) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x0002d320) list_double_time_pane_g

0xe17e,	// (0x0002be64) list_double_time_pane_t1_ParamLimits

0xe17e,	// (0x0002be64) list_double_time_pane_t1

0xe1ef,	// (0x0002bed5) list_double_time_pane_t2_ParamLimits

0xe1ef,	// (0x0002bed5) list_double_time_pane_t2

0xe201,	// (0x0002bee7) list_double_time_pane_t3_ParamLimits

0xe201,	// (0x0002bee7) list_double_time_pane_t3

0xe213,	// (0x0002bef9) list_double_time_pane_t4_ParamLimits

0xe213,	// (0x0002bef9) list_double_time_pane_t4

0x0003,

0xf697,	// (0x0002d37d) list_double_time_pane_t_ParamLimits

0xf697,	// (0x0002d37d) list_double_time_pane_t

0xe225,	// (0x0002bf0b) list_setting_pane_g1_ParamLimits

0xe225,	// (0x0002bf0b) list_setting_pane_g1

0xe231,	// (0x0002bf17) list_setting_pane_g2_ParamLimits

0xe231,	// (0x0002bf17) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x0002d386) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x0002d386) list_setting_pane_g

0xe23d,	// (0x0002bf23) list_setting_pane_t1_ParamLimits

0xe23d,	// (0x0002bf23) list_setting_pane_t1

0xe254,	// (0x0002bf3a) list_setting_pane_t2_ParamLimits

0xe254,	// (0x0002bf3a) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x0002d38b) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x0002d38b) list_setting_pane_t

0xe291,	// (0x0002bf77) set_value_pane_cp_ParamLimits

0xe291,	// (0x0002bf77) set_value_pane_cp

0xe29d,	// (0x0002bf83) list_setting_number_pane_g1_ParamLimits

0xe29d,	// (0x0002bf83) list_setting_number_pane_g1

0xe2a9,	// (0x0002bf8f) list_setting_number_pane_g2_ParamLimits

0xe2a9,	// (0x0002bf8f) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x0002d392) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x0002d392) list_setting_number_pane_g

0xe2b5,	// (0x0002bf9b) list_setting_number_pane_t1_ParamLimits

0xe2b5,	// (0x0002bf9b) list_setting_number_pane_t1

0xe2c9,	// (0x0002bfaf) list_setting_number_pane_t2_ParamLimits

0xe2c9,	// (0x0002bfaf) list_setting_number_pane_t2

0xe2e0,	// (0x0002bfc6) list_setting_number_pane_t3_ParamLimits

0xe2e0,	// (0x0002bfc6) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0002d397) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0002d397) list_setting_number_pane_t

0xe291,	// (0x0002bf77) set_value_pane_ParamLimits

0xe291,	// (0x0002bf77) set_value_pane

0x4ac5,	// (0x000227ab) bg_set_opt_pane_ParamLimits

0x4ac5,	// (0x000227ab) bg_set_opt_pane

0xe323,	// (0x0002c009) set_value_pane_t1

0x4ae6,	// (0x000227cc) slider_set_pane_cp3

0x4aef,	// (0x000227d5) volume_small_pane_cp

0x4af8,	// (0x000227de) list_form_gen_pane

0x4b01,	// (0x000227e7) scroll_pane_cp8

0xe339,	// (0x0002c01f) form_field_data_pane_ParamLimits

0xe339,	// (0x0002c01f) form_field_data_pane

0xe359,	// (0x0002c03f) form_field_data_wide_pane_ParamLimits

0xe359,	// (0x0002c03f) form_field_data_wide_pane

0xe37a,	// (0x0002c060) form_field_popup_pane_ParamLimits

0xe37a,	// (0x0002c060) form_field_popup_pane

0xe398,	// (0x0002c07e) form_field_popup_wide_pane_ParamLimits

0xe398,	// (0x0002c07e) form_field_popup_wide_pane

0xe3b3,	// (0x0002c099) form_field_slider_pane_ParamLimits

0xe3b3,	// (0x0002c099) form_field_slider_pane

0xe3c6,	// (0x0002c0ac) form_field_slider_wide_pane_ParamLimits

0xe3c6,	// (0x0002c0ac) form_field_slider_wide_pane

0x4b12,	// (0x000227f8) data_form_pane

0xe3e3,	// (0x0002c0c9) form_field_data_pane_t1

0x4b1e,	// (0x00022804) input_focus_pane

0x4b2c,	// (0x00022812) data_form_wide_pane

0xe409,	// (0x0002c0ef) form_field_data_wide_pane_t1

0x4899,	// (0x0002257f) input_focus_pane_cp6

0xe42b,	// (0x0002c111) form_field_popup_pane_t1

0x4b1e,	// (0x00022804) input_focus_pane_cp7

0x4b58,	// (0x0002283e) list_form_pane

0xe44d,	// (0x0002c133) form_field_popup_wide_pane_t1

0x4b1e,	// (0x00022804) input_focus_pane_cp8

0x4b64,	// (0x0002284a) list_form_wide_pane

0xe46a,	// (0x0002c150) form_field_slider_pane_t1_ParamLimits

0xe46a,	// (0x0002c150) form_field_slider_pane_t1

0xe47e,	// (0x0002c164) form_field_slider_pane_t2_ParamLimits

0xe47e,	// (0x0002c164) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0002d3a7) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0002d3a7) form_field_slider_pane_t

0x44c9,	// (0x000221af) input_focus_pane_cp9_ParamLimits

0x44c9,	// (0x000221af) input_focus_pane_cp9

0xe490,	// (0x0002c176) slider_cont_pane_ParamLimits

0xe490,	// (0x0002c176) slider_cont_pane

0x4b73,	// (0x00022859) form_field_slider_wide_pane_t1_ParamLimits

0x4b73,	// (0x00022859) form_field_slider_wide_pane_t1

0xe4a4,	// (0x0002c18a) form_field_slider_wide_pane_t2_ParamLimits

0xe4a4,	// (0x0002c18a) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0002d3ac) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0002d3ac) form_field_slider_wide_pane_t

0x44c9,	// (0x000221af) input_focus_pane_cp10_ParamLimits

0x44c9,	// (0x000221af) input_focus_pane_cp10

0xe4b6,	// (0x0002c19c) slider_cont_pane_cp1_ParamLimits

0xe4b6,	// (0x0002c19c) slider_cont_pane_cp1

0xe4ca,	// (0x0002c1b0) slider_form_pane_cp

0x4b85,	// (0x0002286b) input_focus_pane_g1

0x4b8d,	// (0x00022873) input_focus_pane_g2

0x4b95,	// (0x0002287b) input_focus_pane_g3

0x4b9d,	// (0x00022883) input_focus_pane_g4

0x4ba5,	// (0x0002288b) input_focus_pane_g5

0x4bad,	// (0x00022893) input_focus_pane_g6

0x4bb5,	// (0x0002289b) input_focus_pane_g7

0x4bbd,	// (0x000228a3) input_focus_pane_g8

0x4bc5,	// (0x000228ab) input_focus_pane_g9

0x4471,	// (0x00022157) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0002d3b1) input_focus_pane_g

0x5fba,	// (0x00023ca0) wait_border_pane_g3_copy1

0xe4d2,	// (0x0002c1b8) data_form_pane_t1

0x4471,	// (0x00022157) wait_anim_pane_g1_copy1

0xe6d0,	// (0x0002c3b6) data_form_wide_pane_t1

0xe4ed,	// (0x0002c1d3) list_form_graphic_pane_cp_ParamLimits

0xe4ed,	// (0x0002c1d3) list_form_graphic_pane_cp

0x6bdb,	// (0x000248c1) slider_form_pane_g1

0x6be4,	// (0x000248ca) slider_form_pane_g2

0x0006,

0xf9be,	// (0x0002d6a4) slider_form_pane_g

0xe504,	// (0x0002c1ea) list_form_graphic_pane_ParamLimits

0xe504,	// (0x0002c1ea) list_form_graphic_pane

0xe51e,	// (0x0002c204) list_form_graphic_pane_g1

0xe526,	// (0x0002c20c) list_form_graphic_pane_t1_ParamLimits

0xe526,	// (0x0002c20c) list_form_graphic_pane_t1

0x44d7,	// (0x000221bd) list_highlight_pane_cp5_ParamLimits

0x44d7,	// (0x000221bd) list_highlight_pane_cp5

0xe53b,	// (0x0002c221) find_pane_g1

0x4bcd,	// (0x000228b3) input_find_pane

0xe544,	// (0x0002c22a) input_find_pane_g1_ParamLimits

0xe544,	// (0x0002c22a) input_find_pane_g1

0xe550,	// (0x0002c236) input_find_pane_t1_ParamLimits

0xe550,	// (0x0002c236) input_find_pane_t1

0xe565,	// (0x0002c24b) input_find_pane_t2_ParamLimits

0xe565,	// (0x0002c24b) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0002d3c6) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0002d3c6) input_find_pane_t

0x4bd6,	// (0x000228bc) input_focus_pane_cp5_ParamLimits

0x4bd6,	// (0x000228bc) input_focus_pane_cp5

0x880f,	// (0x000264f5) bg_popup_window_pane_cp2_ParamLimits

0x880f,	// (0x000264f5) bg_popup_window_pane_cp2

0x881c,	// (0x00026502) listscroll_menu_pane_ParamLimits

0x881c,	// (0x00026502) listscroll_menu_pane

0x8828,	// (0x0002650e) popup_submenu_window_ParamLimits

0x8828,	// (0x0002650e) popup_submenu_window

0x4be4,	// (0x000228ca) find_popup_pane_g1

0x4bec,	// (0x000228d2) input_popup_find_pane_cp

0x4bd6,	// (0x000228bc) input_focus_pane_cp4_ParamLimits

0x4bd6,	// (0x000228bc) input_focus_pane_cp4

0x4bf6,	// (0x000228dc) input_popup_find_pane_t1_ParamLimits

0x4bf6,	// (0x000228dc) input_popup_find_pane_t1

0x447b,	// (0x00022161) bg_popup_sub_pane_cp

0x4c24,	// (0x0002290a) listscroll_popup_sub_pane

0x4c2c,	// (0x00022912) list_submenu_pane_ParamLimits

0x4c2c,	// (0x00022912) list_submenu_pane

0x4c3d,	// (0x00022923) scroll_pane_cp4

0x4c45,	// (0x0002292b) list_single_popup_submenu_pane_ParamLimits

0x4c45,	// (0x0002292b) list_single_popup_submenu_pane

0x4c58,	// (0x0002293e) list_single_popup_submenu_pane_g1

0x4c60,	// (0x00022946) list_single_popup_submenu_pane_t1_ParamLimits

0x4c60,	// (0x00022946) list_single_popup_submenu_pane_t1

0x44d7,	// (0x000221bd) bg_active_tab_pane_cp1_ParamLimits

0x44d7,	// (0x000221bd) bg_active_tab_pane_cp1

0x885a,	// (0x00026540) tabs_2_active_pane_g1

0x8862,	// (0x00026548) tabs_2_active_pane_t1

0x44d7,	// (0x000221bd) bg_passive_tab_pane_cp1_ParamLimits

0x44d7,	// (0x000221bd) bg_passive_tab_pane_cp1

0x885a,	// (0x00026540) tabs_2_passive_pane_g1

0x8862,	// (0x00026548) tabs_2_passive_pane_t1

0x57a8,	// (0x0002348e) bg_active_tab_pane_cp4

0x8874,	// (0x0002655a) tabs_2_long_active_pane_t1

0x8887,	// (0x0002656d) bg_passive_tab_pane_cp4

0x98cd,	// (0x000275b3) list_single_midp_graphic_pane_g4_ParamLimits

0x57a8,	// (0x0002348e) bg_active_tab_pane_cp5

0x8893,	// (0x00026579) tabs_3_long_active_pane_t1

0x8887,	// (0x0002656d) bg_passive_tab_pane_cp5

0x98cd,	// (0x000275b3) list_single_midp_graphic_pane_g4

0x44d7,	// (0x000221bd) bg_popup_window_pane_cp13_ParamLimits

0x44d7,	// (0x000221bd) bg_popup_window_pane_cp13

0x4c7e,	// (0x00022964) listscroll_popup_fast_pane_ParamLimits

0x4c7e,	// (0x00022964) listscroll_popup_fast_pane

0x4c8d,	// (0x00022973) grid_popup_fast_pane_ParamLimits

0x4c8d,	// (0x00022973) grid_popup_fast_pane

0x4c9f,	// (0x00022985) scroll_pane_cp9_ParamLimits

0x4c9f,	// (0x00022985) scroll_pane_cp9

0xbbf1,	// (0x000298d7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbbf1,	// (0x000298d7) list_single_graphic_hl_pane_t1_cp2

0x4cc3,	// (0x000229a9) input_focus_pane_cp20_ParamLimits

0x4cc3,	// (0x000229a9) input_focus_pane_cp20

0x4cd1,	// (0x000229b7) query_popup_data_pane_t1_ParamLimits

0x4cd1,	// (0x000229b7) query_popup_data_pane_t1

0x4ce4,	// (0x000229ca) query_popup_data_pane_t2_ParamLimits

0x4ce4,	// (0x000229ca) query_popup_data_pane_t2

0x4d2a,	// (0x00022a10) query_popup_data_pane_t3_ParamLimits

0x4d2a,	// (0x00022a10) query_popup_data_pane_t3

0x4d6b,	// (0x00022a51) query_popup_data_pane_t4_ParamLimits

0x4d6b,	// (0x00022a51) query_popup_data_pane_t4

0x4da7,	// (0x00022a8d) query_popup_data_pane_t5_ParamLimits

0x4da7,	// (0x00022a8d) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0002d3cb) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0002d3cb) query_popup_data_pane_t

0x4b85,	// (0x0002286b) bg_set_opt_pane_g1

0x4b8d,	// (0x00022873) bg_set_opt_pane_g2

0x4b95,	// (0x0002287b) bg_set_opt_pane_g3

0x4b9d,	// (0x00022883) bg_set_opt_pane_g4

0x4ba5,	// (0x0002288b) bg_set_opt_pane_g5

0x4bad,	// (0x00022893) bg_set_opt_pane_g6

0x4bb5,	// (0x0002289b) bg_set_opt_pane_g7

0x4bbd,	// (0x000228a3) bg_set_opt_pane_g8

0x4bc5,	// (0x000228ab) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0002d3d6) bg_set_opt_pane_g

0x8c7a,	// (0x00026960) control_top_pane_stacon_ParamLimits

0x8c7a,	// (0x00026960) control_top_pane_stacon

0x8ccd,	// (0x000269b3) signal_pane_stacon_ParamLimits

0x8ccd,	// (0x000269b3) signal_pane_stacon

0x5206,	// (0x00022eec) stacon_top_pane_g1_ParamLimits

0x5206,	// (0x00022eec) stacon_top_pane_g1

0x8cf2,	// (0x000269d8) title_pane_stacon_ParamLimits

0x8cf2,	// (0x000269d8) title_pane_stacon

0x8d1c,	// (0x00026a02) uni_indicator_pane_stacon_ParamLimits

0x8d1c,	// (0x00026a02) uni_indicator_pane_stacon

0x8d31,	// (0x00026a17) battery_pane_stacon_ParamLimits

0x8d31,	// (0x00026a17) battery_pane_stacon

0x8d75,	// (0x00026a5b) control_bottom_pane_stacon_ParamLimits

0x8d75,	// (0x00026a5b) control_bottom_pane_stacon

0x8d98,	// (0x00026a7e) navi_pane_stacon_ParamLimits

0x8d98,	// (0x00026a7e) navi_pane_stacon

0x5228,	// (0x00022f0e) stacon_bottom_pane_g1_ParamLimits

0x5228,	// (0x00022f0e) stacon_bottom_pane_g1

0x88a5,	// (0x0002658b) aid_levels_signal_lsc_ParamLimits

0x88a5,	// (0x0002658b) aid_levels_signal_lsc

0x88bc,	// (0x000265a2) signal_pane_stacon_g1_ParamLimits

0x88bc,	// (0x000265a2) signal_pane_stacon_g1

0x88d0,	// (0x000265b6) signal_pane_stacon_g2_ParamLimits

0x88d0,	// (0x000265b6) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0002d3e9) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0002d3e9) signal_pane_stacon_g

0x8905,	// (0x000265eb) title_pane_stacon_t1_ParamLimits

0x8905,	// (0x000265eb) title_pane_stacon_t1

0x4dff,	// (0x00022ae5) uni_indicator_pane_stacon_g1

0x4e09,	// (0x00022aef) uni_indicator_pane_stacon_g2

0x4deb,	// (0x00022ad1) uni_indicator_pane_stacon_g3

0x4df5,	// (0x00022adb) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0002d3f5) uni_indicator_pane_stacon_g

0x892a,	// (0x00026610) control_top_pane_stacon_g1

0x8932,	// (0x00026618) control_top_pane_stacon_t1_ParamLimits

0x8932,	// (0x00026618) control_top_pane_stacon_t1

0x8969,	// (0x0002664f) aid_levels_battery_lsc_ParamLimits

0x8969,	// (0x0002664f) aid_levels_battery_lsc

0x8981,	// (0x00026667) battery_pane_stacon_g1_ParamLimits

0x8981,	// (0x00026667) battery_pane_stacon_g1

0x8994,	// (0x0002667a) battery_pane_stacon_g2_ParamLimits

0x8994,	// (0x0002667a) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0002d3fe) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0002d3fe) battery_pane_stacon_g

0x89d2,	// (0x000266b8) navi_icon_pane_stacon

0x89e6,	// (0x000266cc) navi_navi_pane_stacon

0x89d2,	// (0x000266b8) navi_text_pane_stacon

0x892a,	// (0x00026610) control_bottom_pane_stacon_g1

0x89fa,	// (0x000266e0) control_bottom_pane_stacon_t1_ParamLimits

0x89fa,	// (0x000266e0) control_bottom_pane_stacon_t1

0x8a31,	// (0x00026717) grid_app_pane_ParamLimits

0x8a31,	// (0x00026717) grid_app_pane

0x8a53,	// (0x00026739) scroll_pane_cp15_ParamLimits

0x8a53,	// (0x00026739) scroll_pane_cp15

0x8a68,	// (0x0002674e) cell_app_pane_ParamLimits

0x8a68,	// (0x0002674e) cell_app_pane

0x8a92,	// (0x00026778) cell_app_pane_g1_ParamLimits

0x8a92,	// (0x00026778) cell_app_pane_g1

0x4e2d,	// (0x00022b13) cell_app_pane_g2_ParamLimits

0x4e2d,	// (0x00022b13) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0002d403) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0002d403) cell_app_pane_g

0x4e39,	// (0x00022b1f) cell_app_pane_t1_ParamLimits

0x4e39,	// (0x00022b1f) cell_app_pane_t1

0x4e4b,	// (0x00022b31) grid_highlight_pane_ParamLimits

0x4e4b,	// (0x00022b31) grid_highlight_pane

0x4b85,	// (0x0002286b) cell_highlight_pane_g1

0x4b8d,	// (0x00022873) cell_highlight_pane_g2

0x4b95,	// (0x0002287b) cell_highlight_pane_g3

0x4b9d,	// (0x00022883) cell_highlight_pane_g4

0x4ba5,	// (0x0002288b) cell_highlight_pane_g5

0x4bad,	// (0x00022893) cell_highlight_pane_g6

0x4bb5,	// (0x0002289b) cell_highlight_pane_g7

0x4bbd,	// (0x000228a3) cell_highlight_pane_g8

0x4bc5,	// (0x000228ab) cell_highlight_pane_g9

0x4471,	// (0x00022157) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0002d3b1) cell_highlight_pane_g

0x4e5c,	// (0x00022b42) bg_scroll_pane

0x8ac9,	// (0x000267af) scroll_handle_pane

0x4ea3,	// (0x00022b89) scroll_bg_pane_g1

0x4eb8,	// (0x00022b9e) scroll_bg_pane_g2

0x4ed0,	// (0x00022bb6) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0002d408) scroll_bg_pane_g

0x4ee5,	// (0x00022bcb) scroll_handle_focus_pane_ParamLimits

0x4ee5,	// (0x00022bcb) scroll_handle_focus_pane

0x4ea3,	// (0x00022b89) scroll_handle_pane_g1

0x4ef2,	// (0x00022bd8) scroll_handle_pane_g2

0x4ed0,	// (0x00022bb6) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0002d40f) scroll_handle_pane_g

0x4bd6,	// (0x000228bc) bg_popup_sub_pane_cp21_ParamLimits

0x4bd6,	// (0x000228bc) bg_popup_sub_pane_cp21

0x4f06,	// (0x00022bec) popup_fep_japan_predictive_window_t1_ParamLimits

0x4f06,	// (0x00022bec) popup_fep_japan_predictive_window_t1

0x4f1d,	// (0x00022c03) popup_fep_japan_predictive_window_t2_ParamLimits

0x4f1d,	// (0x00022c03) popup_fep_japan_predictive_window_t2

0x4f50,	// (0x00022c36) popup_fep_japan_predictive_window_t3_ParamLimits

0x4f50,	// (0x00022c36) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0002d416) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0002d416) popup_fep_japan_predictive_window_t

0x447b,	// (0x00022161) bg_popup_sub_pane_cp23

0x4f87,	// (0x00022c6d) listscroll_japin_cand_pane

0x4f8f,	// (0x00022c75) popup_fep_japan_candidate_window_t1

0x4f9d,	// (0x00022c83) candidate_pane_ParamLimits

0x4f9d,	// (0x00022c83) candidate_pane

0x4faf,	// (0x00022c95) scroll_pane_cp30

0x4fb7,	// (0x00022c9d) list_single_popup_jap_candidate_pane_ParamLimits

0x4fb7,	// (0x00022c9d) list_single_popup_jap_candidate_pane

0x447b,	// (0x00022161) list_highlight_pane_cp30

0x4fcb,	// (0x00022cb1) list_single_popup_jap_candidate_pane_t1

0x4fda,	// (0x00022cc0) level_1_signal

0x4fe7,	// (0x00022ccd) level_2_signal

0x4ff4,	// (0x00022cda) level_3_signal

0x5001,	// (0x00022ce7) level_4_signal

0x500e,	// (0x00022cf4) level_5_signal

0x501b,	// (0x00022d01) level_6_signal

0x5028,	// (0x00022d0e) level_7_signal

0x4fda,	// (0x00022cc0) level_1_battery

0x4fe7,	// (0x00022ccd) level_2_battery

0x4ff4,	// (0x00022cda) level_3_battery

0x5001,	// (0x00022ce7) level_4_battery

0x500e,	// (0x00022cf4) level_5_battery

0x501b,	// (0x00022d01) level_6_battery

0x5028,	// (0x00022d0e) level_7_battery

0x504d,	// (0x00022d33) list_menu_pane_ParamLimits

0x504d,	// (0x00022d33) list_menu_pane

0x505e,	// (0x00022d44) scroll_pane_cp25_ParamLimits

0x505e,	// (0x00022d44) scroll_pane_cp25

0x5077,	// (0x00022d5d) list_double2_graphic_pane_cp2_ParamLimits

0x5077,	// (0x00022d5d) list_double2_graphic_pane_cp2

0x5077,	// (0x00022d5d) list_double2_large_graphic_pane_cp2_ParamLimits

0x5077,	// (0x00022d5d) list_double2_large_graphic_pane_cp2

0x5077,	// (0x00022d5d) list_double2_pane_cp2_ParamLimits

0x5077,	// (0x00022d5d) list_double2_pane_cp2

0x5077,	// (0x00022d5d) list_double_graphic_pane_cp2_ParamLimits

0x5077,	// (0x00022d5d) list_double_graphic_pane_cp2

0x5077,	// (0x00022d5d) list_double_large_graphic_pane_cp2_ParamLimits

0x5077,	// (0x00022d5d) list_double_large_graphic_pane_cp2

0x5077,	// (0x00022d5d) list_double_number_pane_cp2_ParamLimits

0x5077,	// (0x00022d5d) list_double_number_pane_cp2

0x5077,	// (0x00022d5d) list_double_pane_cp2_ParamLimits

0x5077,	// (0x00022d5d) list_double_pane_cp2

0x8b23,	// (0x00026809) list_single_2graphic_pane_cp2_ParamLimits

0x8b23,	// (0x00026809) list_single_2graphic_pane_cp2

0x8b23,	// (0x00026809) list_single_graphic_heading_pane_cp2_ParamLimits

0x8b23,	// (0x00026809) list_single_graphic_heading_pane_cp2

0x8b23,	// (0x00026809) list_single_graphic_pane_cp2_ParamLimits

0x8b23,	// (0x00026809) list_single_graphic_pane_cp2

0x8b23,	// (0x00026809) list_single_heading_pane_cp2_ParamLimits

0x8b23,	// (0x00026809) list_single_heading_pane_cp2

0x5087,	// (0x00022d6d) list_single_large_graphic_pane_cp2_ParamLimits

0x5087,	// (0x00022d6d) list_single_large_graphic_pane_cp2

0x8b23,	// (0x00026809) list_single_number_heading_pane_cp2_ParamLimits

0x8b23,	// (0x00026809) list_single_number_heading_pane_cp2

0x8b23,	// (0x00026809) list_single_number_pane_cp2_ParamLimits

0x8b23,	// (0x00026809) list_single_number_pane_cp2

0x8b23,	// (0x00026809) list_single_pane_cp2_ParamLimits

0x8b23,	// (0x00026809) list_single_pane_cp2

0x50a1,	// (0x00022d87) bg_popup_sub_pane_cp22

0x8be0,	// (0x000268c6) popup_side_volume_key_window_g1

0x8c0a,	// (0x000268f0) popup_side_volume_key_window_t1

0x8c26,	// (0x0002690c) volume_small_pane_cp1

0x44c9,	// (0x000221af) bg_popup_sub_pane_cp24_ParamLimits

0x44c9,	// (0x000221af) bg_popup_sub_pane_cp24

0x50b7,	// (0x00022d9d) fep_china_uni_candidate_pane_ParamLimits

0x50b7,	// (0x00022d9d) fep_china_uni_candidate_pane

0x50cb,	// (0x00022db1) fep_china_uni_entry_pane

0x50db,	// (0x00022dc1) popup_fep_china_uni_window_g1

0x50f7,	// (0x00022ddd) fep_china_uni_entry_pane_g1

0x50ff,	// (0x00022de5) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0002d443) fep_china_uni_entry_pane_g

0x5107,	// (0x00022ded) fep_entry_item_pane

0x5111,	// (0x00022df7) fep_candidate_item_pane

0x5119,	// (0x00022dff) fep_china_uni_candidate_pane_g1

0x5121,	// (0x00022e07) fep_china_uni_candidate_pane_g2

0x5129,	// (0x00022e0f) fep_china_uni_candidate_pane_g3

0x5131,	// (0x00022e17) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0002d448) fep_china_uni_candidate_pane_g

0x4471,	// (0x00022157) fep_entry_item_pane_g1

0x5139,	// (0x00022e1f) fep_entry_item_pane_t1_ParamLimits

0x5139,	// (0x00022e1f) fep_entry_item_pane_t1

0x514f,	// (0x00022e35) fep_candidate_item_pane_t1_ParamLimits

0x514f,	// (0x00022e35) fep_candidate_item_pane_t1

0x5164,	// (0x00022e4a) fep_candidate_item_pane_t2_ParamLimits

0x5164,	// (0x00022e4a) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0002d451) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0002d451) fep_candidate_item_pane_t

0x44d7,	// (0x000221bd) list_highlight_pane_cp31_ParamLimits

0x44d7,	// (0x000221bd) list_highlight_pane_cp31

0x5176,	// (0x00022e5c) level_1_signal_lsc

0x517f,	// (0x00022e65) level_2_signal_lsc

0x5188,	// (0x00022e6e) level_3_signal_lsc

0x5191,	// (0x00022e77) level_4_signal_lsc

0x519a,	// (0x00022e80) level_5_signal_lsc

0x51a3,	// (0x00022e89) level_6_signal_lsc

0x51ac,	// (0x00022e92) level_7_signal_lsc

0x51ac,	// (0x00022e92) level_1_battery_lsc

0x51b5,	// (0x00022e9b) level_2_battery_lsc

0x51be,	// (0x00022ea4) level_3_battery_lsc

0x51c7,	// (0x00022ead) level_4_battery_lsc

0x51d0,	// (0x00022eb6) level_5_battery_lsc

0x51d9,	// (0x00022ebf) level_6_battery_lsc

0x5176,	// (0x00022e5c) level_7_battery_lsc

0x51e2,	// (0x00022ec8) scroll_handle_focus_pane_g1

0x51eb,	// (0x00022ed1) scroll_handle_focus_pane_g2

0x51f4,	// (0x00022eda) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0002d456) scroll_handle_focus_pane_g

0xe57a,	// (0x0002c260) list_single_2graphic_pane_g1_ParamLimits

0xe57a,	// (0x0002c260) list_single_2graphic_pane_g1

0xdf6d,	// (0x0002bc53) list_single_2graphic_pane_g2_ParamLimits

0xdf6d,	// (0x0002bc53) list_single_2graphic_pane_g2

0xdef3,	// (0x0002bbd9) list_single_2graphic_pane_g3_ParamLimits

0xdef3,	// (0x0002bbd9) list_single_2graphic_pane_g3

0xe586,	// (0x0002c26c) list_single_2graphic_pane_g4_ParamLimits

0xe586,	// (0x0002c26c) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0002d45d) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0002d45d) list_single_2graphic_pane_g

0xe592,	// (0x0002c278) list_single_2graphic_pane_t1_ParamLimits

0xe592,	// (0x0002c278) list_single_2graphic_pane_t1

0xe5c0,	// (0x0002c2a6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xe5c0,	// (0x0002c2a6) list_double2_graphic_large_graphic_pane_g1

0xe012,	// (0x0002bcf8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xe012,	// (0x0002bcf8) list_double2_graphic_large_graphic_pane_g2

0xdfde,	// (0x0002bcc4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xdfde,	// (0x0002bcc4) list_double2_graphic_large_graphic_pane_g3

0xe5d2,	// (0x0002c2b8) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xe5d2,	// (0x0002c2b8) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0002d466) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0002d466) list_double2_graphic_large_graphic_pane_g

0xe5de,	// (0x0002c2c4) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe5de,	// (0x0002c2c4) list_double2_graphic_large_graphic_pane_t1

0xe5f4,	// (0x0002c2da) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xe5f4,	// (0x0002c2da) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0002d46f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0002d46f) list_double2_graphic_large_graphic_pane_t

0x52d5,	// (0x00022fbb) popup_fast_swap_window_ParamLimits

0x52d5,	// (0x00022fbb) popup_fast_swap_window

0x52f1,	// (0x00022fd7) popup_side_volume_key_window

0x530b,	// (0x00022ff1) stacon_top_pane

0x5315,	// (0x00022ffb) status_pane_ParamLimits

0x5315,	// (0x00022ffb) status_pane

0x530b,	// (0x00022ff1) status_small_pane

0x447b,	// (0x00022161) control_pane

0x447b,	// (0x00022161) stacon_bottom_pane

0x4b01,	// (0x000227e7) scroll_pane_cp121

0x4af8,	// (0x000227de) set_content_pane

0x8c2e,	// (0x00026914) bg_active_tab_pane_g1_cp1

0x51fd,	// (0x00022ee3) bg_active_tab_pane_g2_cp1

0x8c37,	// (0x0002691d) bg_active_tab_pane_g3_cp1

0x8c2e,	// (0x00026914) bg_passive_tab_pane_g1_cp1

0x51fd,	// (0x00022ee3) bg_passive_tab_pane_g2_cp1

0x8c37,	// (0x0002691d) bg_passive_tab_pane_g3_cp1

0x8c40,	// (0x00026926) bg_active_tab_pane_g1_cp2

0x51fd,	// (0x00022ee3) bg_active_tab_pane_g2_cp2

0x8c49,	// (0x0002692f) bg_active_tab_pane_g3_cp2

0x8c40,	// (0x00026926) bg_passive_tab_pane_g1_cp2

0x51fd,	// (0x00022ee3) bg_passive_tab_pane_g2_cp2

0x8c49,	// (0x0002692f) bg_passive_tab_pane_g3_cp2

0x8c52,	// (0x00026938) bg_active_tab_pane_g1_cp3

0x51fd,	// (0x00022ee3) bg_active_tab_pane_g2_cp3

0x8c5b,	// (0x00026941) bg_active_tab_pane_g3_cp3

0x8c52,	// (0x00026938) bg_passive_tab_pane_g1_cp3

0x51fd,	// (0x00022ee3) bg_passive_tab_pane_g2_cp3

0x8c5b,	// (0x00026941) bg_passive_tab_pane_g3_cp3

0x8c64,	// (0x0002694a) bg_active_tab_pane_g1_cp4

0x51fd,	// (0x00022ee3) bg_active_tab_pane_g2_cp4

0x8c6f,	// (0x00026955) bg_active_tab_pane_g3_cp4

0x8c64,	// (0x0002694a) bg_passive_tab_pane_g1_cp4

0x51fd,	// (0x00022ee3) bg_passive_tab_pane_g2_cp4

0x8c6f,	// (0x00026955) bg_passive_tab_pane_g3_cp4

0x524d,	// (0x00022f33) bg_active_tab_pane_g1_cp5

0x51fd,	// (0x00022ee3) bg_active_tab_pane_g2_cp5

0x5244,	// (0x00022f2a) bg_active_tab_pane_g3_cp5

0x524d,	// (0x00022f33) bg_passive_tab_pane_g1_cp5

0x51fd,	// (0x00022ee3) bg_passive_tab_pane_g2_cp5

0x5244,	// (0x00022f2a) bg_passive_tab_pane_g3_cp5

0x8dbb,	// (0x00026aa1) list_set_graphic_pane_ParamLimits

0x8dbb,	// (0x00026aa1) list_set_graphic_pane

0x447b,	// (0x00022161) bg_set_opt_pane_cp4

0x5256,	// (0x00022f3c) list_set_graphic_pane_g1_ParamLimits

0x5256,	// (0x00022f3c) list_set_graphic_pane_g1

0x5262,	// (0x00022f48) list_set_graphic_pane_g2_ParamLimits

0x5262,	// (0x00022f48) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0002d474) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0002d474) list_set_graphic_pane_g

0x0009,

0xfaf4,	// (0x0002d7da) volume_small_pane_cp_g

0x5286,	// (0x00022f6c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5286,	// (0x00022f6c) list_double2_large_graphic_pane_g1_cp2

0x5294,	// (0x00022f7a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x5294,	// (0x00022f7a) list_double2_large_graphic_pane_g2_cp2

0x52a5,	// (0x00022f8b) list_double2_large_graphic_pane_g3_cp2

0x52ad,	// (0x00022f93) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x52ad,	// (0x00022f93) list_double2_large_graphic_pane_t1_cp2

0x52c3,	// (0x00022fa9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x52c3,	// (0x00022fa9) list_double2_large_graphic_pane_t2_cp2

0x696d,	// (0x00024653) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x696d,	// (0x00024653) list_double_large_graphic_pane_g1_cp2

0x6980,	// (0x00024666) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6980,	// (0x00024666) list_double_large_graphic_pane_g2_cp2

0x5433,	// (0x00023119) list_double_large_graphic_pane_g3_cp2

0x6991,	// (0x00024677) list_double_large_graphic_pane_g4_cp

0x6999,	// (0x0002467f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6999,	// (0x0002467f) list_double_large_graphic_pane_t1_cp2

0x69b0,	// (0x00024696) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x69b0,	// (0x00024696) list_double_large_graphic_pane_t2_cp2

0x5323,	// (0x00023009) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5323,	// (0x00023009) list_double2_graphic_pane_g1_cp2

0x5331,	// (0x00023017) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5331,	// (0x00023017) list_double2_graphic_pane_g2_cp2

0x5342,	// (0x00023028) list_double2_graphic_pane_g3_cp2

0x534c,	// (0x00023032) list_double2_graphic_pane_t1_cp2_ParamLimits

0x534c,	// (0x00023032) list_double2_graphic_pane_t1_cp2

0x5362,	// (0x00023048) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5362,	// (0x00023048) list_double2_graphic_pane_t2_cp2

0x5374,	// (0x0002305a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5374,	// (0x0002305a) list_single_number_heading_pane_g1_cp2

0x5380,	// (0x00023066) list_single_number_heading_pane_g2_cp2

0x5388,	// (0x0002306e) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5388,	// (0x0002306e) list_single_number_heading_pane_t1_cp2

0x539e,	// (0x00023084) list_single_number_heading_pane_t2_cp2_ParamLimits

0x539e,	// (0x00023084) list_single_number_heading_pane_t2_cp2

0x53b2,	// (0x00023098) list_single_number_heading_pane_t3_cp2_ParamLimits

0x53b2,	// (0x00023098) list_single_number_heading_pane_t3_cp2

0x5374,	// (0x0002305a) list_single_heading_pane_g1_cp2_ParamLimits

0x5374,	// (0x0002305a) list_single_heading_pane_g1_cp2

0x5380,	// (0x00023066) list_single_heading_pane_g2_cp2

0x5388,	// (0x0002306e) list_single_heading_pane_t1_cp2_ParamLimits

0x5388,	// (0x0002306e) list_single_heading_pane_t1_cp2

0x6775,	// (0x0002445b) list_single_heading_pane_t2_cp2_ParamLimits

0x6775,	// (0x0002445b) list_single_heading_pane_t2_cp2

0x670f,	// (0x000243f5) list_double_graphic_pane_g1_cp2_ParamLimits

0x670f,	// (0x000243f5) list_double_graphic_pane_g1_cp2

0x671b,	// (0x00024401) list_double_graphic_pane_g2_cp2_ParamLimits

0x671b,	// (0x00024401) list_double_graphic_pane_g2_cp2

0x672a,	// (0x00024410) list_double_graphic_pane_g3_cp2

0x6732,	// (0x00024418) list_double_graphic_pane_t1_cp2_ParamLimits

0x6732,	// (0x00024418) list_double_graphic_pane_t1_cp2

0x6748,	// (0x0002442e) list_double_graphic_pane_t2_cp2_ParamLimits

0x6748,	// (0x0002442e) list_double_graphic_pane_t2_cp2

0x5427,	// (0x0002310d) list_double_number_pane_g1_cp2_ParamLimits

0x5427,	// (0x0002310d) list_double_number_pane_g1_cp2

0x5433,	// (0x00023119) list_double_number_pane_g2_cp2

0x66d3,	// (0x000243b9) list_double_number_pane_t1_cp2_ParamLimits

0x66d3,	// (0x000243b9) list_double_number_pane_t1_cp2

0x66e7,	// (0x000243cd) list_double_number_pane_t2_cp2_ParamLimits

0x66e7,	// (0x000243cd) list_double_number_pane_t2_cp2

0x66fd,	// (0x000243e3) list_double_number_pane_t3_cp2_ParamLimits

0x66fd,	// (0x000243e3) list_double_number_pane_t3_cp2

0x664a,	// (0x00024330) list_single_graphic_pane_g1_cp2_ParamLimits

0x664a,	// (0x00024330) list_single_graphic_pane_g1_cp2

0x548b,	// (0x00023171) list_single_graphic_pane_g2_cp2_ParamLimits

0x548b,	// (0x00023171) list_single_graphic_pane_g2_cp2

0x5497,	// (0x0002317d) list_single_graphic_pane_g3_cp2

0x6620,	// (0x00024306) list_single_graphic_pane_t1_cp2_ParamLimits

0x6620,	// (0x00024306) list_single_graphic_pane_t1_cp2

0x548b,	// (0x00023171) list_single_number_pane_g1_cp2_ParamLimits

0x548b,	// (0x00023171) list_single_number_pane_g1_cp2

0x5497,	// (0x0002317d) list_single_number_pane_g2_cp2

0x6620,	// (0x00024306) list_single_number_pane_t1_cp2_ParamLimits

0x6620,	// (0x00024306) list_single_number_pane_t1_cp2

0x6636,	// (0x0002431c) list_single_number_pane_t2_cp2_ParamLimits

0x6636,	// (0x0002431c) list_single_number_pane_t2_cp2

0x5294,	// (0x00022f7a) list_double2_pane_g1_cp2_ParamLimits

0x5294,	// (0x00022f7a) list_double2_pane_g1_cp2

0x52a5,	// (0x00022f8b) list_double2_pane_g2_cp2

0x53ff,	// (0x000230e5) list_double2_pane_t1_cp2_ParamLimits

0x53ff,	// (0x000230e5) list_double2_pane_t1_cp2

0x5415,	// (0x000230fb) list_double2_pane_t2_cp2_ParamLimits

0x5415,	// (0x000230fb) list_double2_pane_t2_cp2

0x5427,	// (0x0002310d) list_double_pane_g1_cp2_ParamLimits

0x5427,	// (0x0002310d) list_double_pane_g1_cp2

0x5433,	// (0x00023119) list_double_pane_g2_cp2

0x543b,	// (0x00023121) list_double_pane_t1_cp2_ParamLimits

0x543b,	// (0x00023121) list_double_pane_t1_cp2

0x5451,	// (0x00023137) list_double_pane_t2_cp2_ParamLimits

0x5451,	// (0x00023137) list_double_pane_t2_cp2

0x547b,	// (0x00023161) list_single_pane_cp2_g3

0x548b,	// (0x00023171) list_single_pane_g1_cp2_ParamLimits

0x548b,	// (0x00023171) list_single_pane_g1_cp2

0x5497,	// (0x0002317d) list_single_pane_g2_cp2

0x549f,	// (0x00023185) list_single_pane_t1_cp2_ParamLimits

0x549f,	// (0x00023185) list_single_pane_t1_cp2

0x54b7,	// (0x0002319d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x54b7,	// (0x0002319d) list_single_large_graphic_pane_g1_cp2

0x54c5,	// (0x000231ab) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x54c5,	// (0x000231ab) list_single_large_graphic_pane_g2_cp2

0x54d1,	// (0x000231b7) list_single_large_graphic_pane_g3_cp2

0x54d9,	// (0x000231bf) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x54d9,	// (0x000231bf) list_single_large_graphic_pane_g4_cp1

0x54f3,	// (0x000231d9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x54f3,	// (0x000231d9) list_single_large_graphic_pane_t1_cp2

0x65ea,	// (0x000242d0) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x65ea,	// (0x000242d0) list_single_graphic_heading_pane_g1_cp2

0x65b7,	// (0x0002429d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x65b7,	// (0x0002429d) list_single_graphic_heading_pane_g4_cp2

0x5497,	// (0x0002317d) list_single_graphic_heading_pane_g5_cp2

0x65f6,	// (0x000242dc) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x65f6,	// (0x000242dc) list_single_graphic_heading_pane_t1_cp2

0x660c,	// (0x000242f2) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x660c,	// (0x000242f2) list_single_graphic_heading_pane_t2_cp2

0x65ab,	// (0x00024291) list_single_2graphic_pane_g1_cp2_ParamLimits

0x65ab,	// (0x00024291) list_single_2graphic_pane_g1_cp2

0x65b7,	// (0x0002429d) list_single_2graphic_pane_g2_cp2_ParamLimits

0x65b7,	// (0x0002429d) list_single_2graphic_pane_g2_cp2

0x5497,	// (0x0002317d) list_single_2graphic_pane_g3_cp2

0x65c8,	// (0x000242ae) list_single_2graphic_pane_g4_cp2_ParamLimits

0x65c8,	// (0x000242ae) list_single_2graphic_pane_g4_cp2

0x65d4,	// (0x000242ba) list_single_2graphic_pane_t1_cp2_ParamLimits

0x65d4,	// (0x000242ba) list_single_2graphic_pane_t1_cp2

0x4471,	// (0x00022157) list_highlight_pane_g10_cp1

0x61b1,	// (0x00023e97) list_highlight_pane_g1_cp1

0x61b9,	// (0x00023e9f) list_highlight_pane_g2_cp1

0x61c1,	// (0x00023ea7) list_highlight_pane_g3_cp1

0x61c9,	// (0x00023eaf) list_highlight_pane_g4_cp1

0x61d1,	// (0x00023eb7) list_highlight_pane_g5_cp1

0x61d9,	// (0x00023ebf) list_highlight_pane_g6_cp1

0x61e1,	// (0x00023ec7) list_highlight_pane_g7_cp1

0x61e9,	// (0x00023ecf) list_highlight_pane_g8_cp1

0x61f1,	// (0x00023ed7) list_highlight_pane_g9_cp1

0x9ae7,	// (0x000277cd) form_field_slider_pane_t3

0x9af5,	// (0x000277db) form_field_slider_pane_t4

0x60e5,	// (0x00023dcb) slider_form_pane_ParamLimits

0x60e5,	// (0x00023dcb) slider_form_pane

0x447b,	// (0x00022161) control_abbreviations

0x447b,	// (0x00022161) control_conventions

0x447b,	// (0x00022161) control_definitions

0x447b,	// (0x00022161) format_table_attribute

0x67c1,	// (0x000244a7) bg_popup_preview_window_pane_g9

0x447b,	// (0x00022161) format_table_data2

0x447b,	// (0x00022161) format_table_data3

0x447b,	// (0x00022161) format_table_data_example

0x0008,

0x447b,	// (0x00022161) intro_purpose

0xf91e,	// (0x0002d604) bg_popup_preview_window_pane_g

0x447b,	// (0x00022161) texts_category

0x447b,	// (0x00022161) texts_graphics

0x5509,	// (0x000231ef) text_digital

0x5518,	// (0x000231fe) text_primary

0x5527,	// (0x0002320d) text_primary_small

0x5536,	// (0x0002321c) text_secondary

0x5545,	// (0x0002322b) text_title

0x6c72,	// (0x00024958) bg_passive_tab_pane_g1_cp3_srt

0x51fd,	// (0x00022ee3) bg_passive_tab_pane_g2_cp3_srt

0x6c69,	// (0x0002494f) bg_passive_tab_pane_g3_cp3_srt

0x44d7,	// (0x000221bd) bg_active_tab_pane_cp3_srt_ParamLimits

0x44d7,	// (0x000221bd) bg_active_tab_pane_cp3_srt

0x6c7b,	// (0x00024961) tabs_4_active_pane_srt_g1

0xa0a5,	// (0x00027d8b) tabs_4_active_pane_srt_t1_ParamLimits

0xa0a5,	// (0x00027d8b) tabs_4_active_pane_srt_t1

0x6c72,	// (0x00024958) bg_active_tab_pane_g1_cp3_copy1

0x51fd,	// (0x00022ee3) bg_active_tab_pane_g2_cp3_copy1

0x6c69,	// (0x0002494f) bg_active_tab_pane_g3_cp3_copy1

0x44d7,	// (0x000221bd) tabs_2_long_active_pane_srt_ParamLimits

0x44d7,	// (0x000221bd) tabs_2_long_active_pane_srt

0x44d7,	// (0x000221bd) tabs_2_long_passive_pane_srt_ParamLimits

0x44d7,	// (0x000221bd) tabs_2_long_passive_pane_srt

0x8887,	// (0x0002656d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8887,	// (0x0002656d) bg_passive_tab_pane_cp4_srt

0x6b9d,	// (0x00024883) bg_passive_tab_pane_g1_cp4_srt

0x51fd,	// (0x00022ee3) bg_passive_tab_pane_g2_cp4_srt

0x6b94,	// (0x0002487a) bg_passive_tab_pane_g3_cp4_srt

0x57a8,	// (0x0002348e) bg_active_tab_pane_cp4_srt_ParamLimits

0x57a8,	// (0x0002348e) bg_active_tab_pane_cp4_srt

0x9e51,	// (0x00027b37) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9e51,	// (0x00027b37) tabs_2_long_active_pane_srt_t1

0x6b9d,	// (0x00024883) bg_active_tab_pane_g1_cp4_srt

0x51fd,	// (0x00022ee3) bg_active_tab_pane_g2_cp4_srt

0x6b94,	// (0x0002487a) bg_active_tab_pane_g3_cp4_srt

0x44c9,	// (0x000221af) tabs_3_long_active_pane_srt_ParamLimits

0x44c9,	// (0x000221af) tabs_3_long_active_pane_srt

0x44c9,	// (0x000221af) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x44c9,	// (0x000221af) tabs_3_long_passive_pane_cp_srt

0x44c9,	// (0x000221af) tabs_3_long_passive_pane_srt_ParamLimits

0x44c9,	// (0x000221af) tabs_3_long_passive_pane_srt

0x8887,	// (0x0002656d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8887,	// (0x0002656d) bg_passive_tab_pane_cp5_srt

0x524d,	// (0x00022f33) bg_passive_tab_pane_g1_cp5_srt

0x51fd,	// (0x00022ee3) bg_passive_tab_pane_g2_cp5_srt

0x5244,	// (0x00022f2a) bg_passive_tab_pane_g3_cp5_srt

0x57a8,	// (0x0002348e) bg_active_tab_pane_cp5_srt_ParamLimits

0x57a8,	// (0x0002348e) bg_active_tab_pane_cp5_srt

0x9e3f,	// (0x00027b25) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9e3f,	// (0x00027b25) tabs_3_long_active_pane_srt_t1

0x524d,	// (0x00022f33) bg_active_tab_pane_g1_cp5_srt

0x51fd,	// (0x00022ee3) bg_active_tab_pane_g2_cp5_srt

0x5244,	// (0x00022f2a) bg_active_tab_pane_g3_cp5_srt

0x6b86,	// (0x0002486c) navi_text_pane_srt_t1

0x6b7e,	// (0x00024864) navi_icon_pane_srt_g1

0x5643,	// (0x00023329) midp_editing_number_pane_srt

0x5554,	// (0x0002323a) midp_ticker_pane_srt

0x564b,	// (0x00023331) midp_ticker_pane_srt_g1

0x5653,	// (0x00023339) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0002d493) midp_ticker_pane_srt_g

0x565b,	// (0x00023341) midp_ticker_pane_srt_t1

0x6b6f,	// (0x00024855) midp_editing_number_pane_t1_copy1

0x8dd9,	// (0x00026abf) listscroll_midp_pane

0x8dd9,	// (0x00026abf) midp_form_pane

0x555c,	// (0x00023242) midp_info_popup_window_ParamLimits

0x555c,	// (0x00023242) midp_info_popup_window

0x4bd6,	// (0x000228bc) bg_popup_sub_pane_cp50_ParamLimits

0x4bd6,	// (0x000228bc) bg_popup_sub_pane_cp50

0x5e33,	// (0x00023b19) listscroll_midp_info_pane_ParamLimits

0x5e33,	// (0x00023b19) listscroll_midp_info_pane

0x5e1b,	// (0x00023b01) listscroll_form_midp_pane_ParamLimits

0x5e1b,	// (0x00023b01) listscroll_form_midp_pane

0x5e27,	// (0x00023b0d) scroll_bar_cp050

0x9acf,	// (0x000277b5) list_midp_pane

0x750b,	// (0x000251f1) signal_pane_g2_cp

0x5d4d,	// (0x00023a33) listscroll_midp_info_pane_t1_ParamLimits

0x5d4d,	// (0x00023a33) listscroll_midp_info_pane_t1

0x5d65,	// (0x00023a4b) listscroll_midp_info_pane_t2_ParamLimits

0x5d65,	// (0x00023a4b) listscroll_midp_info_pane_t2

0x5da3,	// (0x00023a89) listscroll_midp_info_pane_t3_ParamLimits

0x5da3,	// (0x00023a89) listscroll_midp_info_pane_t3

0x5ddd,	// (0x00023ac3) listscroll_midp_info_pane_t4_ParamLimits

0x5ddd,	// (0x00023ac3) listscroll_midp_info_pane_t4

0x0003,

0xf859,	// (0x0002d53f) listscroll_midp_info_pane_t_ParamLimits

0xf859,	// (0x0002d53f) listscroll_midp_info_pane_t

0x4c3d,	// (0x00022923) scroll_pane_cp21

0x5cf1,	// (0x000239d7) form_midp_field_choice_group_pane

0x5cfa,	// (0x000239e0) form_midp_field_text_pane

0x5d33,	// (0x00023a19) form_midp_field_time_pane

0x5d3b,	// (0x00023a21) form_midp_gauge_slider_pane

0x5d44,	// (0x00023a2a) form_midp_gauge_wait_pane

0x447b,	// (0x00022161) form_midp_image_pane

0xe681,	// (0x0002c367) list_single_midp_pane_ParamLimits

0xe681,	// (0x0002c367) list_single_midp_pane

0x9a90,	// (0x00027776) form_midp_field_text_pane_t1

0x5b98,	// (0x0002387e) input_focus_pane_cp050

0x5ce0,	// (0x000239c6) list_midp_form_text_pane

0x5caf,	// (0x00023995) form_midp_field_choice_group_pane_t1

0x5cbd,	// (0x000239a3) input_focus_pane_cp051

0x5cd1,	// (0x000239b7) list_midp_choice_pane

0x447b,	// (0x00022161) status_idle_pane

0x5c93,	// (0x00023979) form_midp_field_time_pane_t1

0x4471,	// (0x00022157) wait_anim_pane_g2_copy1

0x5ca1,	// (0x00023987) form_midp_field_time_pane_t2

0x0001,

0x55b5,	// (0x0002329b) aid_navinavi_width_2_pane

0xf854,	// (0x0002d53a) form_midp_field_time_pane_t

0x447b,	// (0x00022161) input_focus_pane_cp052

0x447b,	// (0x00022161) bg_input_focus_pane_cp040

0x5c6f,	// (0x00023955) form_midp_gauge_slider_pane_t1

0x5c7d,	// (0x00023963) form_midp_gauge_slider_pane_t2

0x9a74,	// (0x0002775a) form_midp_gauge_slider_pane_t3

0x9a82,	// (0x00027768) form_midp_gauge_slider_pane_t4

0x0003,

0xf84b,	// (0x0002d531) form_midp_gauge_slider_pane_t

0x5c8b,	// (0x00023971) form_midp_slider_pane

0x44d7,	// (0x000221bd) bg_input_focus_pane_cp041_ParamLimits

0x44d7,	// (0x000221bd) bg_input_focus_pane_cp041

0x5c3c,	// (0x00023922) form_midp_gauge_wait_pane_t1_ParamLimits

0x5c3c,	// (0x00023922) form_midp_gauge_wait_pane_t1

0x5c4e,	// (0x00023934) form_midp_gauge_wait_pane_t2_ParamLimits

0x5c4e,	// (0x00023934) form_midp_gauge_wait_pane_t2

0x0001,

0xf846,	// (0x0002d52c) form_midp_gauge_wait_pane_t_ParamLimits

0xf846,	// (0x0002d52c) form_midp_gauge_wait_pane_t

0x5c60,	// (0x00023946) form_midp_wait_pane_ParamLimits

0x5c60,	// (0x00023946) form_midp_wait_pane

0x5c06,	// (0x000238ec) form_midp_image_pane_g1

0x5c0f,	// (0x000238f5) form_midp_image_pane_t1

0x5c1e,	// (0x00023904) form_midp_image_pane_t2

0x5c2d,	// (0x00023913) form_midp_image_pane_t3

0x0002,

0xf83f,	// (0x0002d525) form_midp_image_pane_t

0x5bfd,	// (0x000238e3) list_single_midp_pane_g1

0xe672,	// (0x0002c358) list_single_midp_pane_t1

0x9a44,	// (0x0002772a) list_midp_form_item_pane_ParamLimits

0x9a44,	// (0x0002772a) list_midp_form_item_pane

0x556f,	// (0x00023255) list_midp_form_item_pane_t1

0x557e,	// (0x00023264) midp_ticker_pane_g1

0x558a,	// (0x00023270) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0002d479) midp_ticker_pane_g

0x8e8e,	// (0x00026b74) midp_ticker_pane_t1

0xa038,	// (0x00027d1e) midp_editing_number_pane_t1

0x6bfd,	// (0x000248e3) midp_editing_number_pane

0x6c0c,	// (0x000248f2) midp_ticker_pane

0x6b5f,	// (0x00024845) ai_message_heading_pane

0x447b,	// (0x00022161) bg_popup_window_pane_cp14

0x6b67,	// (0x0002484d) listscroll_ai_message_pane

0x6ae9,	// (0x000247cf) ai_message_heading_pane_g1_ParamLimits

0x6ae9,	// (0x000247cf) ai_message_heading_pane_g1

0x6af5,	// (0x000247db) ai_message_heading_pane_g2_ParamLimits

0x6af5,	// (0x000247db) ai_message_heading_pane_g2

0x6b01,	// (0x000247e7) ai_message_heading_pane_g3_ParamLimits

0x6b01,	// (0x000247e7) ai_message_heading_pane_g3

0x6b0d,	// (0x000247f3) ai_message_heading_pane_g4_ParamLimits

0x6b0d,	// (0x000247f3) ai_message_heading_pane_g4

0x0003,

0xf980,	// (0x0002d666) ai_message_heading_pane_g_ParamLimits

0xf980,	// (0x0002d666) ai_message_heading_pane_g

0x6b19,	// (0x000247ff) ai_message_heading_pane_t1_ParamLimits

0x6b19,	// (0x000247ff) ai_message_heading_pane_t1

0x6b33,	// (0x00024819) ai_message_heading_pane_t2_ParamLimits

0x6b33,	// (0x00024819) ai_message_heading_pane_t2

0x0001,

0xf989,	// (0x0002d66f) ai_message_heading_pane_t_ParamLimits

0xf989,	// (0x0002d66f) ai_message_heading_pane_t

0x6b45,	// (0x0002482b) bg_popup_heading_pane_cp1_ParamLimits

0x6b45,	// (0x0002482b) bg_popup_heading_pane_cp1

0x6ad7,	// (0x000247bd) list_ai_message_pane_ParamLimits

0x6ad7,	// (0x000247bd) list_ai_message_pane

0x4c3d,	// (0x00022923) scroll_pane_cp10

0x6a73,	// (0x00024759) list_ai_message_pane_g1

0x6a7b,	// (0x00024761) list_ai_message_pane_g2

0x0001,

0xf95d,	// (0x0002d643) list_ai_message_pane_g

0x6a83,	// (0x00024769) list_ai_message_pane_t1_ParamLimits

0x6a83,	// (0x00024769) list_ai_message_pane_t1

0x6a98,	// (0x0002477e) list_ai_message_pane_t2_ParamLimits

0x6a98,	// (0x0002477e) list_ai_message_pane_t2

0x6aad,	// (0x00024793) list_ai_message_pane_t3_ParamLimits

0x6aad,	// (0x00024793) list_ai_message_pane_t3

0x6ac2,	// (0x000247a8) list_ai_message_pane_t4_ParamLimits

0x6ac2,	// (0x000247a8) list_ai_message_pane_t4

0x0003,

0xf962,	// (0x0002d648) list_ai_message_pane_t_ParamLimits

0xf962,	// (0x0002d648) list_ai_message_pane_t

0x9dd9,	// (0x00027abf) cell_ai_soft_ind_pane_ParamLimits

0x9dd9,	// (0x00027abf) cell_ai_soft_ind_pane

0x5596,	// (0x0002327c) cell_ai_soft_ind_pane_g1_ParamLimits

0x5596,	// (0x0002327c) cell_ai_soft_ind_pane_g1

0x447b,	// (0x00022161) grid_highlight_cp1

0x55a3,	// (0x00023289) text_secondary_cp56_ParamLimits

0x55a3,	// (0x00023289) text_secondary_cp56

0x6a48,	// (0x0002472e) example_general_pane_ParamLimits

0x6a48,	// (0x0002472e) example_general_pane

0x6a54,	// (0x0002473a) example_parent_pane_g1_ParamLimits

0x6a54,	// (0x0002473a) example_parent_pane_g1

0x6a60,	// (0x00024746) example_parent_pane_t1_ParamLimits

0x6a60,	// (0x00024746) example_parent_pane_t1

0x93ad,	// (0x00027093) popup_preview_text_window_ParamLimits

0x93ad,	// (0x00027093) popup_preview_text_window

0x5483,	// (0x00023169) list_single_pane_cp2_g4

0x46a6,	// (0x0002238c) bg_popup_preview_window_pane_ParamLimits

0x46a6,	// (0x0002238c) bg_popup_preview_window_pane

0x67c9,	// (0x000244af) popup_preview_text_window_t1_ParamLimits

0x67c9,	// (0x000244af) popup_preview_text_window_t1

0x67e7,	// (0x000244cd) popup_preview_text_window_t2_ParamLimits

0x67e7,	// (0x000244cd) popup_preview_text_window_t2

0x6830,	// (0x00024516) popup_preview_text_window_t3_ParamLimits

0x6830,	// (0x00024516) popup_preview_text_window_t3

0x6875,	// (0x0002455b) popup_preview_text_window_t4_ParamLimits

0x6875,	// (0x0002455b) popup_preview_text_window_t4

0x0004,

0xf931,	// (0x0002d617) popup_preview_text_window_t_ParamLimits

0xf931,	// (0x0002d617) popup_preview_text_window_t

0x68f3,	// (0x000245d9) scroll_pane_cp11

0x5aa8,	// (0x0002378e) bg_popup_preview_window_pane_g1

0x6789,	// (0x0002446f) bg_popup_preview_window_pane_g2

0x6791,	// (0x00024477) bg_popup_preview_window_pane_g3

0x6799,	// (0x0002447f) bg_popup_preview_window_pane_g4

0x67a1,	// (0x00024487) bg_popup_preview_window_pane_g5

0x67a9,	// (0x0002448f) bg_popup_preview_window_pane_g6

0x67b1,	// (0x00024497) bg_popup_preview_window_pane_g7

0x67b9,	// (0x0002449f) bg_popup_preview_window_pane_g8

0x8117,	// (0x00025dfd) aid_popup_width_pane

0x938b,	// (0x00027071) popup_midp_note_alarm_window_ParamLimits

0x938b,	// (0x00027071) popup_midp_note_alarm_window

0x4b12,	// (0x000227f8) data_form_pane_ParamLimits

0xe3d9,	// (0x0002c0bf) form_field_data_pane_g1

0xe3e3,	// (0x0002c0c9) form_field_data_pane_t1_ParamLimits

0x4b1e,	// (0x00022804) input_focus_pane_ParamLimits

0x4b2c,	// (0x00022812) data_form_wide_pane_ParamLimits

0xe3fd,	// (0x0002c0e3) form_field_data_wide_pane_g1

0xe409,	// (0x0002c0ef) form_field_data_wide_pane_t1_ParamLimits

0x4899,	// (0x0002257f) input_focus_pane_cp6_ParamLimits

0x884c,	// (0x00026532) input_popup_find_pane_g1_ParamLimits

0x884c,	// (0x00026532) input_popup_find_pane_g1

0x89a5,	// (0x0002668b) aid_navi_side_left_pane

0x89ba,	// (0x000266a0) aid_navi_side_right_pane

0x628e,	// (0x00023f74) bg_popup_window_pane_cp30_ParamLimits

0x628e,	// (0x00023f74) bg_popup_window_pane_cp30

0x6308,	// (0x00023fee) popup_midp_note_alarm_window_g1_ParamLimits

0x6308,	// (0x00023fee) popup_midp_note_alarm_window_g1

0x6338,	// (0x0002401e) popup_midp_note_alarm_window_t1_ParamLimits

0x6338,	// (0x0002401e) popup_midp_note_alarm_window_t1

0x63d9,	// (0x000240bf) popup_midp_note_alarm_window_t2_ParamLimits

0x63d9,	// (0x000240bf) popup_midp_note_alarm_window_t2

0x6487,	// (0x0002416d) popup_midp_note_alarm_window_t3_ParamLimits

0x6487,	// (0x0002416d) popup_midp_note_alarm_window_t3

0x64af,	// (0x00024195) popup_midp_note_alarm_window_t4_ParamLimits

0x64af,	// (0x00024195) popup_midp_note_alarm_window_t4

0x64cf,	// (0x000241b5) popup_midp_note_alarm_window_t5_ParamLimits

0x64cf,	// (0x000241b5) popup_midp_note_alarm_window_t5

0x000a,

0xf8ce,	// (0x0002d5b4) popup_midp_note_alarm_window_t_ParamLimits

0xf8ce,	// (0x0002d5b4) popup_midp_note_alarm_window_t

0x657b,	// (0x00024261) wait_bar_pane_cp1_ParamLimits

0x657b,	// (0x00024261) wait_bar_pane_cp1

0x447b,	// (0x00022161) wait_anim_pane_copy1

0x447b,	// (0x00022161) wait_border_pane_copy1

0x5fa6,	// (0x00023c8c) wait_border_pane_g1_copy1

0xe423,	// (0x0002c109) form_field_popup_pane_g1

0xe42b,	// (0x0002c111) form_field_popup_pane_t1_ParamLimits

0x4b1e,	// (0x00022804) input_focus_pane_cp7_ParamLimits

0x4b58,	// (0x0002283e) list_form_pane_ParamLimits

0xe445,	// (0x0002c12b) form_field_popup_wide_pane_g1

0xe44d,	// (0x0002c133) form_field_popup_wide_pane_t1_ParamLimits

0x4b1e,	// (0x00022804) input_focus_pane_cp8_ParamLimits

0x4b64,	// (0x0002284a) list_form_wide_pane_ParamLimits

0x6ca2,	// (0x00024988) aid_size_cell_graphic_pane

0xe4d2,	// (0x0002c1b8) data_form_pane_t1_ParamLimits

0xe6d0,	// (0x0002c3b6) data_form_wide_pane_t1_ParamLimits

0x95f7,	// (0x000272dd) bg_status_flat_pane

0x8510,	// (0x000261f6) title_pane_t1_ParamLimits

0x4491,	// (0x00022177) title_pane_t2_ParamLimits

0x44b7,	// (0x0002219d) title_pane_t3_ParamLimits

0xf59b,	// (0x0002d281) title_pane_t_ParamLimits

0x4fda,	// (0x00022cc0) level_1_signal_ParamLimits

0x4fe7,	// (0x00022ccd) level_2_signal_ParamLimits

0x4ff4,	// (0x00022cda) level_3_signal_ParamLimits

0x5001,	// (0x00022ce7) level_4_signal_ParamLimits

0x500e,	// (0x00022cf4) level_5_signal_ParamLimits

0x501b,	// (0x00022d01) level_6_signal_ParamLimits

0x5028,	// (0x00022d0e) level_7_signal_ParamLimits

0x4fda,	// (0x00022cc0) level_1_battery_ParamLimits

0x4fe7,	// (0x00022ccd) level_2_battery_ParamLimits

0x4ff4,	// (0x00022cda) level_3_battery_ParamLimits

0x5001,	// (0x00022ce7) level_4_battery_ParamLimits

0x500e,	// (0x00022cf4) level_5_battery_ParamLimits

0x501b,	// (0x00022d01) level_6_battery_ParamLimits

0x5028,	// (0x00022d0e) level_7_battery_ParamLimits

0x61b1,	// (0x00023e97) bg_status_flat_pane_g1

0x61b9,	// (0x00023e9f) bg_status_flat_pane_g2

0x61c1,	// (0x00023ea7) bg_status_flat_pane_g3

0x61c9,	// (0x00023eaf) bg_status_flat_pane_g4

0x61d1,	// (0x00023eb7) bg_status_flat_pane_g5

0x61d9,	// (0x00023ebf) bg_status_flat_pane_g6

0x61e1,	// (0x00023ec7) bg_status_flat_pane_g7

0x8580,	// (0x00026266) tabs_3_active_pane_t1_ParamLimits

0x8580,	// (0x00026266) tabs_3_passive_pane_t1_ParamLimits

0x859a,	// (0x00026280) tabs_4_active_pane_t1_ParamLimits

0x859a,	// (0x00026280) tabs_4_1_passive_pane_t1_ParamLimits

0x8862,	// (0x00026548) tabs_2_active_pane_t1_ParamLimits

0x8862,	// (0x00026548) tabs_2_passive_pane_t1_ParamLimits

0x57a8,	// (0x0002348e) bg_active_tab_pane_cp4_ParamLimits

0x8874,	// (0x0002655a) tabs_2_long_active_pane_t1_ParamLimits

0x8887,	// (0x0002656d) bg_passive_tab_pane_cp4_ParamLimits

0x98ff,	// (0x000275e5) list_single_midp_graphic_pane_t1_ParamLimits

0x57a8,	// (0x0002348e) bg_active_tab_pane_cp5_ParamLimits

0x8893,	// (0x00026579) tabs_3_long_active_pane_t1_ParamLimits

0x8887,	// (0x0002656d) bg_passive_tab_pane_cp5_ParamLimits

0x98ff,	// (0x000275e5) list_single_midp_graphic_pane_t1

0x95f7,	// (0x000272dd) bg_status_flat_pane_ParamLimits

0x597b,	// (0x00023661) indicator_pane_cp2_ParamLimits

0x597b,	// (0x00023661) indicator_pane_cp2

0x973a,	// (0x00027420) navi_pane_srt_ParamLimits

0x973a,	// (0x00027420) navi_pane_srt

0x59a3,	// (0x00023689) popup_clock_digital_analogue_window_cp1

0x451b,	// (0x00022201) indicator_pane_t1

0x5554,	// (0x0002323a) copy_highlight_pane

0x5554,	// (0x0002323a) cursor_graphics_pane

0x5554,	// (0x0002323a) graphic_within_text_pane

0x5554,	// (0x0002323a) link_highlight_pane

0x68b6,	// (0x0002459c) popup_preview_text_window_t5_ParamLimits

0x68b6,	// (0x0002459c) popup_preview_text_window_t5

0x55bd,	// (0x000232a3) cursor_digital_pane

0x55bd,	// (0x000232a3) cursor_primary_pane

0x55ce,	// (0x000232b4) cursor_primary_small_pane

0x55d6,	// (0x000232bc) cursor_secondary_pane

0x55de,	// (0x000232c4) cursor_title_pane

0x55bd,	// (0x000232a3) link_highlight_digital_pane

0x55c5,	// (0x000232ab) link_highlight_primary_pane

0x55ce,	// (0x000232b4) link_highlight_primary_small_pane

0x55d6,	// (0x000232bc) link_highlight_secondary_pane

0x55de,	// (0x000232c4) link_highlight_title_pane

0x55bd,	// (0x000232a3) copy_highlight_digital_pane

0x55bd,	// (0x000232a3) copy_highlight_primary_pane

0x55ce,	// (0x000232b4) copy_highlight_primary_small_pane

0x55d6,	// (0x000232bc) copy_highlight_secondary_pane

0x55de,	// (0x000232c4) copy_highlight_title_pane

0x55d6,	// (0x000232bc) graphic_text_digital_pane

0x6231,	// (0x00023f17) graphic_text_primary_pane

0x623a,	// (0x00023f20) graphic_text_primary_small_pane

0x55ce,	// (0x000232b4) graphic_text_secondary_pane

0x55bd,	// (0x000232a3) graphic_text_title_pane

0x8ea0,	// (0x00026b86) cursor_primary_pane_g1

0x6223,	// (0x00023f09) cursor_text_primary_t1

0x9b17,	// (0x000277fd) cursor_primary_small_pane_g1

0x6215,	// (0x00023efb) cursor_text_primary_small_t1

0x9b0d,	// (0x000277f3) cursor_primary_small_pane_g1_copy1

0x6207,	// (0x00023eed) cursor_text_primary_small_t1_copy1

0x61f9,	// (0x00023edf) cursor_text_title_t1

0x9b03,	// (0x000277e9) cursor_title_pane_g1

0x8ea0,	// (0x00026b86) cursor_digital_pane_g1

0x55e6,	// (0x000232cc) cursor_text_digital_t1

0x619a,	// (0x00023e80) link_highlight_primary_pane_g1

0x61a2,	// (0x00023e88) link_highlight_primary_pane_t1

0x55f4,	// (0x000232da) link_highlight_primary_small_pane_g1

0x55fc,	// (0x000232e2) link_highlight_primary_small_pane_t1

0x55f4,	// (0x000232da) link_highlight_secondary_pane_g1

0x560b,	// (0x000232f1) link_highlight_secondary_pane_t1

0x610e,	// (0x00023df4) link_highlight_title_pane_g1

0x6116,	// (0x00023dfc) link_highlight_title_pane_t1

0x60f7,	// (0x00023ddd) link_highlight_digital_pane_g1

0x60ff,	// (0x00023de5) link_highlight_digital_pane_t1

0x5feb,	// (0x00023cd1) copy_highlight_primary_pane_g1

0x5ff3,	// (0x00023cd9) copy_highlight_primary_pane_t1

0x5fc5,	// (0x00023cab) copy_highlight_primary_small_pane_g1

0x5fdc,	// (0x00023cc2) copy_highlight_primary_small_pane_t1

0x561a,	// (0x00023300) copy_highlight_secondary_pane_g1

0x5622,	// (0x00023308) copy_highlight_secondary_pane_t1

0x5fc5,	// (0x00023cab) copy_highlight_title_pane_g1

0x5fcd,	// (0x00023cb3) copy_highlight_title_pane_t1

0x5feb,	// (0x00023cd1) copy_highlight_digital_pane_g1

0x6e2c,	// (0x00024b12) copy_highlight_digital_pane_t1

0x6d80,	// (0x00024a66) graphic_text_primary_pane_g1

0x6e10,	// (0x00024af6) graphic_text_primary_pane_t1

0x6e1e,	// (0x00024b04) graphic_text_primary_pane_t2

0x0001,

0xf9fd,	// (0x0002d6e3) graphic_text_primary_pane_t

0x6dec,	// (0x00024ad2) graphic_text_primary_small_pane_g1

0x6df4,	// (0x00024ada) graphic_text_primary_small_pane_t1

0x6e02,	// (0x00024ae8) graphic_text_primary_small_pane_t2

0x0001,

0xf9f8,	// (0x0002d6de) graphic_text_primary_small_pane_t

0x6dc8,	// (0x00024aae) graphic_text_secondary_pane_g1

0x6dd0,	// (0x00024ab6) graphic_text_secondary_pane_t1

0x6dde,	// (0x00024ac4) graphic_text_secondary_pane_t2

0x0001,

0xf9f3,	// (0x0002d6d9) graphic_text_secondary_pane_t

0x6da4,	// (0x00024a8a) graphic_text_title_pane_g1

0x6dac,	// (0x00024a92) graphic_text_title_pane_t1

0x6dba,	// (0x00024aa0) graphic_text_title_pane_t2

0x0001,

0xf9ee,	// (0x0002d6d4) graphic_text_title_pane_t

0x6d80,	// (0x00024a66) graphic_text_digital_pane_g1

0x6d88,	// (0x00024a6e) graphic_text_digital_pane_t1

0x6d96,	// (0x00024a7c) graphic_text_digital_pane_t2

0x0001,

0xf9e9,	// (0x0002d6cf) graphic_text_digital_pane_t

0x44d7,	// (0x000221bd) navi_icon_pane_srt_ParamLimits

0x44d7,	// (0x000221bd) navi_icon_pane_srt

0x447b,	// (0x00022161) navi_midp_pane_srt

0x447b,	// (0x00022161) navi_navi_pane_srt

0x44d7,	// (0x000221bd) navi_text_pane_srt_ParamLimits

0x44d7,	// (0x000221bd) navi_text_pane_srt

0x6d4b,	// (0x00024a31) navi_navi_icon_text_pane_srt

0x6d65,	// (0x00024a4b) navi_navi_pane_srt_g1_ParamLimits

0x6d65,	// (0x00024a4b) navi_navi_pane_srt_g1

0x6d53,	// (0x00024a39) navi_navi_pane_srt_g2_ParamLimits

0x6d53,	// (0x00024a39) navi_navi_pane_srt_g2

0x0001,

0xf9e4,	// (0x0002d6ca) navi_navi_pane_srt_g_ParamLimits

0xf9e4,	// (0x0002d6ca) navi_navi_pane_srt_g

0x6d77,	// (0x00024a5d) navi_navi_tabs_pane_srt

0x6d4b,	// (0x00024a31) navi_navi_text_pane_srt

0x6d4b,	// (0x00024a31) navi_navi_volume_pane_srt

0x6d3c,	// (0x00024a22) navi_navi_text_pane_srt_t1

0xa1c9,	// (0x00027eaf) navi_navi_volume_pane_srt_g1

0xa1d1,	// (0x00027eb7) volume_small_pane_srt_ParamLimits

0xa1d1,	// (0x00027eb7) volume_small_pane_srt

0x8eaa,	// (0x00026b90) volume_small_pane_srt_g1_ParamLimits

0x8eaa,	// (0x00026b90) volume_small_pane_srt_g1

0x8eba,	// (0x00026ba0) volume_small_pane_srt_g2_ParamLimits

0x8eba,	// (0x00026ba0) volume_small_pane_srt_g2

0x8ecb,	// (0x00026bb1) volume_small_pane_srt_g3_ParamLimits

0x8ecb,	// (0x00026bb1) volume_small_pane_srt_g3

0x8edc,	// (0x00026bc2) volume_small_pane_srt_g4_ParamLimits

0x8edc,	// (0x00026bc2) volume_small_pane_srt_g4

0x8eed,	// (0x00026bd3) volume_small_pane_srt_g5_ParamLimits

0x8eed,	// (0x00026bd3) volume_small_pane_srt_g5

0x8efe,	// (0x00026be4) volume_small_pane_srt_g6_ParamLimits

0x8efe,	// (0x00026be4) volume_small_pane_srt_g6

0x8f0f,	// (0x00026bf5) volume_small_pane_srt_g7_ParamLimits

0x8f0f,	// (0x00026bf5) volume_small_pane_srt_g7

0x8f20,	// (0x00026c06) volume_small_pane_srt_g8_ParamLimits

0x8f20,	// (0x00026c06) volume_small_pane_srt_g8

0x8f31,	// (0x00026c17) volume_small_pane_srt_g9_ParamLimits

0x8f31,	// (0x00026c17) volume_small_pane_srt_g9

0x8f42,	// (0x00026c28) volume_small_pane_srt_g10_ParamLimits

0x8f42,	// (0x00026c28) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0002d47e) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0002d47e) volume_small_pane_srt_g

0x474f,	// (0x00022435) query_popup_data_pane_cp2

0x6d22,	// (0x00024a08) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6d22,	// (0x00024a08) navi_navi_icon_text_pane_srt_t1

0x6231,	// (0x00023f17) navi_tabs_2_long_pane_srt

0x6231,	// (0x00023f17) navi_tabs_2_pane_srt

0x6231,	// (0x00023f17) navi_tabs_3_long_pane_srt

0x6231,	// (0x00023f17) navi_tabs_3_pane_srt

0x6231,	// (0x00023f17) navi_tabs_4_pane_srt

0xa1a9,	// (0x00027e8f) tabs_2_active_pane_srt_ParamLimits

0xa1a9,	// (0x00027e8f) tabs_2_active_pane_srt

0xa1b9,	// (0x00027e9f) tabs_2_passive_pane_srt_ParamLimits

0xa1b9,	// (0x00027e9f) tabs_2_passive_pane_srt

0x57b6,	// (0x0002349c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x57b6,	// (0x0002349c) bg_passive_tab_pane_cp1_srt

0x6d09,	// (0x000249ef) bg_passive_tab_pane_g1_cp1_srt

0x51fd,	// (0x00022ee3) bg_passive_tab_pane_g2_cp1_srt

0x6d00,	// (0x000249e6) bg_passive_tab_pane_g3_cp1_srt

0x44d7,	// (0x000221bd) bg_active_tab_pane_cp1_srt_ParamLimits

0x44d7,	// (0x000221bd) bg_active_tab_pane_cp1_srt

0x6d12,	// (0x000249f8) tabs_2_active_pane_srt_g1

0xa197,	// (0x00027e7d) tabs_2_active_pane_srt_t1_ParamLimits

0xa197,	// (0x00027e7d) tabs_2_active_pane_srt_t1

0x6d09,	// (0x000249ef) bg_active_tab_pane_g1_cp1_srt

0x51fd,	// (0x00022ee3) bg_active_tab_pane_g2_cp1_srt

0x6d00,	// (0x000249e6) bg_active_tab_pane_g3_cp1_srt

0xa164,	// (0x00027e4a) tabs_3_active_pane_srt_ParamLimits

0xa164,	// (0x00027e4a) tabs_3_active_pane_srt

0xa175,	// (0x00027e5b) tabs_3_passive_pane_cp_srt_ParamLimits

0xa175,	// (0x00027e5b) tabs_3_passive_pane_cp_srt

0xa186,	// (0x00027e6c) tabs_3_passive_pane_srt_ParamLimits

0xa186,	// (0x00027e6c) tabs_3_passive_pane_srt

0x57b6,	// (0x0002349c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x57b6,	// (0x0002349c) bg_passive_tab_pane_cp2_srt

0x563a,	// (0x00023320) bg_passive_tab_pane_g1_cp2_srt

0x51fd,	// (0x00022ee3) bg_passive_tab_pane_g2_cp2_srt

0x5631,	// (0x00023317) bg_passive_tab_pane_g3_cp2_srt

0x44d7,	// (0x000221bd) bg_active_tab_pane_cp2_srt_ParamLimits

0x44d7,	// (0x000221bd) bg_active_tab_pane_cp2_srt

0x6cf8,	// (0x000249de) tabs_3_active_pane_srt_g1

0xa152,	// (0x00027e38) tabs_3_active_pane_srt_t1_ParamLimits

0xa152,	// (0x00027e38) tabs_3_active_pane_srt_t1

0x563a,	// (0x00023320) bg_active_tab_pane_g1_cp2_srt

0x51fd,	// (0x00022ee3) bg_active_tab_pane_g2_cp2_srt

0x5631,	// (0x00023317) bg_active_tab_pane_g3_cp2_srt

0xa10a,	// (0x00027df0) tabs_4_active_pane_srt_ParamLimits

0xa10a,	// (0x00027df0) tabs_4_active_pane_srt

0xa11c,	// (0x00027e02) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa11c,	// (0x00027e02) tabs_4_passive_pane_cp2_srt

0x575e,	// (0x00023444) aid_size_cell_toolbar

0x8887,	// (0x0002656d) main_idle_act_pane_ParamLimits

0x5842,	// (0x00023528) popup_large_graphic_colour_window_ParamLimits

0x94ff,	// (0x000271e5) popup_toolbar_window_ParamLimits

0x94ff,	// (0x000271e5) popup_toolbar_window

0xe736,	// (0x0002c41c) list_single_graphic_2heading_pane_ParamLimits

0xe736,	// (0x0002c41c) list_single_graphic_2heading_pane

0x4e13,	// (0x00022af9) aid_size_cell_apps_grid_lsc_pane

0x4e25,	// (0x00022b0b) aid_size_cell_apps_grid_prt_pane

0x57b6,	// (0x0002349c) bg_wml_button_pane_cp1_ParamLimits

0x57b6,	// (0x0002349c) bg_wml_button_pane_cp1

0x9a90,	// (0x00027776) form_midp_field_text_pane_t1_ParamLimits

0x5b98,	// (0x0002387e) input_focus_pane_cp050_ParamLimits

0x5ce0,	// (0x000239c6) list_midp_form_text_pane_ParamLimits

0x5cbd,	// (0x000239a3) input_focus_pane_cp051_ParamLimits

0x5cd1,	// (0x000239b7) list_midp_choice_pane_ParamLimits

0x99de,	// (0x000276c4) list_single_2graphic_pane_cp3_ParamLimits

0x99de,	// (0x000276c4) list_single_2graphic_pane_cp3

0x9a0a,	// (0x000276f0) list_single_midp_graphic_pane_ParamLimits

0x9a0a,	// (0x000276f0) list_single_midp_graphic_pane

0x8083,	// (0x00025d69) list_single_graphic_2heading_pane_g1_ParamLimits

0x8083,	// (0x00025d69) list_single_graphic_2heading_pane_g1

0x808f,	// (0x00025d75) list_single_graphic_2heading_pane_g4_ParamLimits

0x808f,	// (0x00025d75) list_single_graphic_2heading_pane_g4

0x809b,	// (0x00025d81) list_single_graphic_2heading_pane_g5_ParamLimits

0x809b,	// (0x00025d81) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0002d4d1) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0002d4d1) list_single_graphic_2heading_pane_g

0x80a7,	// (0x00025d8d) list_single_graphic_2heading_pane_t1_ParamLimits

0x80a7,	// (0x00025d8d) list_single_graphic_2heading_pane_t1

0x80bb,	// (0x00025da1) list_single_graphic_2heading_pane_t2_ParamLimits

0x80bb,	// (0x00025da1) list_single_graphic_2heading_pane_t2

0x80d7,	// (0x00025dbd) list_single_graphic_2heading_pane_t3_ParamLimits

0x80d7,	// (0x00025dbd) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0002d4d8) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0002d4d8) list_single_graphic_2heading_pane_t

0x59e6,	// (0x000236cc) bg_popup_sub_pane_cp2

0x5a10,	// (0x000236f6) grid_toobar_pane

0x9870,	// (0x00027556) cell_toolbar_pane_ParamLimits

0x9870,	// (0x00027556) cell_toolbar_pane

0x5a4c,	// (0x00023732) cell_toolbar_pane_g1_ParamLimits

0x5a4c,	// (0x00023732) cell_toolbar_pane_g1

0x5a60,	// (0x00023746) cell_toolbar_pane_g2_ParamLimits

0x5a60,	// (0x00023746) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0002d4e6) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0002d4e6) cell_toolbar_pane_g

0x5a82,	// (0x00023768) grid_highlight_pane_cp2_ParamLimits

0x5a82,	// (0x00023768) grid_highlight_pane_cp2

0x5a9c,	// (0x00023782) toolbar_button_pane

0x5aa8,	// (0x0002378e) toolbar_button_pane_g1

0x5ab8,	// (0x0002379e) toolbar_button_pane_g2

0x5ab0,	// (0x00023796) toolbar_button_pane_g3

0x5ac8,	// (0x000237ae) toolbar_button_pane_g4

0x5ac0,	// (0x000237a6) toolbar_button_pane_g5

0x5ad0,	// (0x000237b6) toolbar_button_pane_g6

0x5ad8,	// (0x000237be) toolbar_button_pane_g7

0x5ae8,	// (0x000237ce) toolbar_button_pane_g8

0x5ae0,	// (0x000237c6) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0002d4eb) toolbar_button_pane_g

0x98a8,	// (0x0002758e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x98a8,	// (0x0002758e) list_single_2graphic_pane_g1_cp3

0x98b4,	// (0x0002759a) list_single_2graphic_pane_g2_cp3_ParamLimits

0x98b4,	// (0x0002759a) list_single_2graphic_pane_g2_cp3

0x98c5,	// (0x000275ab) list_single_2graphic_pane_g3_cp3

0x98cd,	// (0x000275b3) list_single_2graphic_pane_g4_cp3_ParamLimits

0x98cd,	// (0x000275b3) list_single_2graphic_pane_g4_cp3

0x98d9,	// (0x000275bf) list_single_2graphic_pane_t1_cp3_ParamLimits

0x98d9,	// (0x000275bf) list_single_2graphic_pane_t1_cp3

0x98f3,	// (0x000275d9) list_single_midp_graphic_pane_g2_ParamLimits

0x98f3,	// (0x000275d9) list_single_midp_graphic_pane_g2

0x5766,	// (0x0002344c) aid_zoom_text_primary

0xe606,	// (0x0002c2ec) aid_zoom_text_secondary

0x56ee,	// (0x000233d4) status_small_pane_g7_ParamLimits

0x56ee,	// (0x000233d4) status_small_pane_g7

0x5711,	// (0x000233f7) status_small_pane_t1_ParamLimits

0x84f3,	// (0x000261d9) title_pane_g2

0x0003,

0xf592,	// (0x0002d278) title_pane_g

0x874d,	// (0x00026433) aid_size_cell_colour_1_pane_ParamLimits

0x874d,	// (0x00026433) aid_size_cell_colour_1_pane

0x8761,	// (0x00026447) aid_size_cell_colour_2_pane_ParamLimits

0x8761,	// (0x00026447) aid_size_cell_colour_2_pane

0x8775,	// (0x0002645b) aid_size_cell_colour_3_pane_ParamLimits

0x8775,	// (0x0002645b) aid_size_cell_colour_3_pane

0x8789,	// (0x0002646f) aid_size_cell_colour_4_pane_ParamLimits

0x8789,	// (0x0002646f) aid_size_cell_colour_4_pane

0x88e1,	// (0x000265c7) title_pane_stacon_g1_ParamLimits

0x88e1,	// (0x000265c7) title_pane_stacon_g1

0x604a,	// (0x00023d30) popup_note_wait_window_g3_ParamLimits

0x604a,	// (0x00023d30) popup_note_wait_window_g3

0x60c0,	// (0x00023da6) popup_note_wait_window_t5_ParamLimits

0x60c0,	// (0x00023da6) popup_note_wait_window_t5

0x447b,	// (0x00022161) main_feb_china_hwr_fs_writing_pane

0x9128,	// (0x00026e0e) popup_feb_china_hwr_fs_window_ParamLimits

0x9128,	// (0x00026e0e) popup_feb_china_hwr_fs_window

0x9915,	// (0x000275fb) aid_size_cell_hwr_fs_ParamLimits

0x9915,	// (0x000275fb) aid_size_cell_hwr_fs

0x5b98,	// (0x0002387e) bg_popup_sub_pane_cp3_ParamLimits

0x5b98,	// (0x0002387e) bg_popup_sub_pane_cp3

0x992a,	// (0x00027610) grid_hwr_fs_pane_ParamLimits

0x992a,	// (0x00027610) grid_hwr_fs_pane

0x9942,	// (0x00027628) linegrid_hwr_fs_pane_ParamLimits

0x9942,	// (0x00027628) linegrid_hwr_fs_pane

0x9952,	// (0x00027638) cell_hwr_fs_pane_ParamLimits

0x9952,	// (0x00027638) cell_hwr_fs_pane

0x5ba4,	// (0x0002388a) linegrid_hwr_fs_pane_g1_ParamLimits

0x5ba4,	// (0x0002388a) linegrid_hwr_fs_pane_g1

0x9974,	// (0x0002765a) linegrid_hwr_fs_pane_g2_ParamLimits

0x9974,	// (0x0002765a) linegrid_hwr_fs_pane_g2

0x5bb0,	// (0x00023896) linegrid_hwr_fs_pane_g3_ParamLimits

0x5bb0,	// (0x00023896) linegrid_hwr_fs_pane_g3

0x9986,	// (0x0002766c) linegrid_hwr_fs_pane_g4_ParamLimits

0x9986,	// (0x0002766c) linegrid_hwr_fs_pane_g4

0x99a0,	// (0x00027686) linegrid_hwr_fs_pane_g5_ParamLimits

0x99a0,	// (0x00027686) linegrid_hwr_fs_pane_g5

0x0004,

0xf82b,	// (0x0002d511) linegrid_hwr_fs_pane_g_ParamLimits

0xf82b,	// (0x0002d511) linegrid_hwr_fs_pane_g

0x5bbc,	// (0x000238a2) cell_hwr_fs_pane_g1_ParamLimits

0x5bbc,	// (0x000238a2) cell_hwr_fs_pane_g1

0x59b4,	// (0x0002369a) cell_hwr_fs_pane_g2_ParamLimits

0x59b4,	// (0x0002369a) cell_hwr_fs_pane_g2

0x99b6,	// (0x0002769c) cell_hwr_fs_pane_g3_ParamLimits

0x99b6,	// (0x0002769c) cell_hwr_fs_pane_g3

0x99c3,	// (0x000276a9) cell_hwr_fs_pane_g4_ParamLimits

0x99c3,	// (0x000276a9) cell_hwr_fs_pane_g4

0x0003,

0xf836,	// (0x0002d51c) cell_hwr_fs_pane_g_ParamLimits

0xf836,	// (0x0002d51c) cell_hwr_fs_pane_g

0x99d0,	// (0x000276b6) cell_hwr_fs_pane_t1

0x447b,	// (0x00022161) grid_highlight_pane_cp6

0x447b,	// (0x00022161) main_idle_act2_pane

0x4c24,	// (0x0002290a) aid_inside_area_popup_secondary

0x9c90,	// (0x00027976) aid_inside_area_window_primary_ParamLimits

0x9c90,	// (0x00027976) aid_inside_area_window_primary

0x6e3b,	// (0x00024b21) ai2_news_ticker_pane

0x6e43,	// (0x00024b29) aid_size_cell_ai1_link_ParamLimits

0x6e43,	// (0x00024b29) aid_size_cell_ai1_link

0x6e5d,	// (0x00024b43) popup_ai2_data_window_ParamLimits

0x6e5d,	// (0x00024b43) popup_ai2_data_window

0x6e71,	// (0x00024b57) popup_ai2_link_window_ParamLimits

0x6e71,	// (0x00024b57) popup_ai2_link_window

0x5b98,	// (0x0002387e) bg_popup_sub_pane_cp4_ParamLimits

0x5b98,	// (0x0002387e) bg_popup_sub_pane_cp4

0x6e85,	// (0x00024b6b) grid_ai2_link_pane_ParamLimits

0x6e85,	// (0x00024b6b) grid_ai2_link_pane

0x6e9c,	// (0x00024b82) popup_ai2_link_window_g1_ParamLimits

0x6e9c,	// (0x00024b82) popup_ai2_link_window_g1

0x6ea8,	// (0x00024b8e) popup_ai2_link_window_g2_ParamLimits

0x6ea8,	// (0x00024b8e) popup_ai2_link_window_g2

0x0001,

0xfa02,	// (0x0002d6e8) popup_ai2_link_window_g_ParamLimits

0xfa02,	// (0x0002d6e8) popup_ai2_link_window_g

0x6eb7,	// (0x00024b9d) ai2_mp_button_pane

0x6ebf,	// (0x00024ba5) ai2_mp_volume_pane

0x5cbd,	// (0x000239a3) bg_popup_sub_pane_cp5_ParamLimits

0x5cbd,	// (0x000239a3) bg_popup_sub_pane_cp5

0x6ec7,	// (0x00024bad) heading_ai2_gene_pane_ParamLimits

0x6ec7,	// (0x00024bad) heading_ai2_gene_pane

0x6ed3,	// (0x00024bb9) list_ai2_gene_pane_ParamLimits

0x6ed3,	// (0x00024bb9) list_ai2_gene_pane

0x6f1b,	// (0x00024c01) cell_ai2_link_pane_ParamLimits

0x6f1b,	// (0x00024c01) cell_ai2_link_pane

0x6f31,	// (0x00024c17) cell_ai2_link_pane_g1

0x447b,	// (0x00022161) grid_highlight_pane_cp7

0xa1e6,	// (0x00027ecc) ai2_mp_volume_pane_g1

0x700a,	// (0x00024cf0) ai2_mp_volume_pane_g2

0x6f77,	// (0x00024c5d) list_ai2_gene_pane_t1

0x7002,	// (0x00024ce8) ai2_mp_volume_pane_g3

0x0002,

0xfa1b,	// (0x0002d701) ai2_mp_volume_pane_g

0xa1ee,	// (0x00027ed4) volume_small_pane_cp3

0x7012,	// (0x00024cf8) aid_size_cell_ai2_button

0x701a,	// (0x00024d00) grid_ai2_button_pane

0x7023,	// (0x00024d09) cell_ai2_button_pane_ParamLimits

0x7023,	// (0x00024d09) cell_ai2_button_pane

0x4471,	// (0x00022157) cell_ai2_button_pane_g1

0x447b,	// (0x00022161) grid_highlight_pane_cp8

0x6fc2,	// (0x00024ca8) ai2_gene_pane_t1_ParamLimits

0x6fc2,	// (0x00024ca8) ai2_gene_pane_t1

0x90c4,	// (0x00026daa) aid_height_parent_landscape

0x9edc,	// (0x00027bc2) aid_height_set_list

0x6a02,	// (0x000246e8) aid_size_parent

0x6ca2,	// (0x00024988) aid_size_cell_graphic_pane_ParamLimits

0x6ee3,	// (0x00024bc9) popup_ai2_data_window_g1_ParamLimits

0x6ee3,	// (0x00024bc9) popup_ai2_data_window_g1

0x6eef,	// (0x00024bd5) ai2_news_ticker_pane_g1

0x6ef7,	// (0x00024bdd) ai2_news_ticker_pane_g2

0x0001,

0xfa07,	// (0x0002d6ed) ai2_news_ticker_pane_g

0x6eff,	// (0x00024be5) ai2_news_ticker_pane_t1

0x6f0d,	// (0x00024bf3) ai2_news_ticker_pane_t2

0x0001,

0xfa0c,	// (0x0002d6f2) ai2_news_ticker_pane_t

0x6f3a,	// (0x00024c20) heading_ai2_gene_pane_g1

0x6f42,	// (0x00024c28) heading_ai2_gene_pane_t1_ParamLimits

0x6f42,	// (0x00024c28) heading_ai2_gene_pane_t1

0x6f57,	// (0x00024c3d) list_highlight_pane_cp6

0x6f5f,	// (0x00024c45) ai2_gene_pane_ParamLimits

0x6f5f,	// (0x00024c45) ai2_gene_pane

0x6f85,	// (0x00024c6b) list_ai2_gene_pane_t2

0x0001,

0xfa11,	// (0x0002d6f7) list_ai2_gene_pane_t

0x6f93,	// (0x00024c79) list_highlight_pane_cp8_ParamLimits

0x6f93,	// (0x00024c79) list_highlight_pane_cp8

0x6fa4,	// (0x00024c8a) ai2_gene_pane_g1_ParamLimits

0x6fa4,	// (0x00024c8a) ai2_gene_pane_g1

0x6fb6,	// (0x00024c9c) ai2_gene_pane_g2_ParamLimits

0x6fb6,	// (0x00024c9c) ai2_gene_pane_g2

0x0001,

0xfa16,	// (0x0002d6fc) ai2_gene_pane_g_ParamLimits

0xfa16,	// (0x0002d6fc) ai2_gene_pane_g

0x4ab4,	// (0x0002279a) scroll_pane_cp12

0x9083,	// (0x00026d69) control_pane_t3_ParamLimits

0x9083,	// (0x00026d69) control_pane_t3

0x5702,	// (0x000233e8) status_small_pane_g8_ParamLimits

0x5702,	// (0x000233e8) status_small_pane_g8

0x91b2,	// (0x00026e98) popup_find_window_ParamLimits

0x939f,	// (0x00027085) popup_note_image_window_ParamLimits

0xdf61,	// (0x0002bc47) list_double2_graphic_pane_vc_g1_ParamLimits

0xdf61,	// (0x0002bc47) list_double2_graphic_pane_vc_g1

0xdee7,	// (0x0002bbcd) list_double2_graphic_pane_vc_g2_ParamLimits

0xdee7,	// (0x0002bbcd) list_double2_graphic_pane_vc_g2

0xdef3,	// (0x0002bbd9) list_double2_graphic_pane_vc_g3_ParamLimits

0xdef3,	// (0x0002bbd9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0002d4df) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0002d4df) list_double2_graphic_pane_vc_g

0xe632,	// (0x0002c318) list_double2_graphic_pane_vc_t1_ParamLimits

0xe632,	// (0x0002c318) list_double2_graphic_pane_vc_t1

0xdee7,	// (0x0002bbcd) list_single_heading_pane_vc_g1_ParamLimits

0xdee7,	// (0x0002bbcd) list_single_heading_pane_vc_g1

0xdef3,	// (0x0002bbd9) list_single_heading_pane_vc_g2_ParamLimits

0xdef3,	// (0x0002bbd9) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002d2f2) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002d2f2) list_single_heading_pane_vc_g

0xe648,	// (0x0002c32e) list_single_heading_pane_vc_t1_ParamLimits

0xe648,	// (0x0002c32e) list_single_heading_pane_vc_t1

0xe65e,	// (0x0002c344) list_single_heading_pane_vc_t2_ParamLimits

0xe65e,	// (0x0002c344) list_single_heading_pane_vc_t2

0x0001,

0xf81a,	// (0x0002d500) list_single_heading_pane_vc_t_ParamLimits

0xf81a,	// (0x0002d500) list_single_heading_pane_vc_t

0x5af0,	// (0x000237d6) list_setting_number_pane_vc_g1_ParamLimits

0x5af0,	// (0x000237d6) list_setting_number_pane_vc_g1

0x5afc,	// (0x000237e2) list_setting_number_pane_vc_g2_ParamLimits

0x5afc,	// (0x000237e2) list_setting_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0002d505) list_setting_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0002d505) list_setting_number_pane_vc_g

0x5b08,	// (0x000237ee) list_setting_number_pane_vc_t1_ParamLimits

0x5b08,	// (0x000237ee) list_setting_number_pane_vc_t1

0x5b1c,	// (0x00023802) list_setting_number_pane_vc_t2_ParamLimits

0x5b1c,	// (0x00023802) list_setting_number_pane_vc_t2

0x5b38,	// (0x0002381e) list_setting_number_pane_vc_t3_ParamLimits

0x5b38,	// (0x0002381e) list_setting_number_pane_vc_t3

0x0002,

0xf824,	// (0x0002d50a) list_setting_number_pane_vc_t_ParamLimits

0xf824,	// (0x0002d50a) list_setting_number_pane_vc_t

0x5b60,	// (0x00023846) set_value_pane_vc_ParamLimits

0x5b60,	// (0x00023846) set_value_pane_vc

0xe736,	// (0x0002c41c) list_double2_graphic_pane_vc_ParamLimits

0xe736,	// (0x0002c41c) list_double2_graphic_pane_vc

0x6c1f,	// (0x00024905) list_double2_large_graphic_pane_vc_ParamLimits

0x6c1f,	// (0x00024905) list_double2_large_graphic_pane_vc

0xe736,	// (0x0002c41c) list_double2_pane_vc_ParamLimits

0xe736,	// (0x0002c41c) list_double2_pane_vc

0xe736,	// (0x0002c41c) list_double_graphic_heading_pane_vc_ParamLimits

0xe736,	// (0x0002c41c) list_double_graphic_heading_pane_vc

0xe736,	// (0x0002c41c) list_double_graphic_pane_vc_ParamLimits

0xe736,	// (0x0002c41c) list_double_graphic_pane_vc

0xe736,	// (0x0002c41c) list_double_heading_pane_vc_ParamLimits

0xe736,	// (0x0002c41c) list_double_heading_pane_vc

0x6c1f,	// (0x00024905) list_double_large_graphic_pane_vc_ParamLimits

0x6c1f,	// (0x00024905) list_double_large_graphic_pane_vc

0xe736,	// (0x0002c41c) list_double_number_pane_vc_ParamLimits

0xe736,	// (0x0002c41c) list_double_number_pane_vc

0xe736,	// (0x0002c41c) list_double_pane_vc_ParamLimits

0xe736,	// (0x0002c41c) list_double_pane_vc

0xe736,	// (0x0002c41c) list_double_time_pane_vc_ParamLimits

0xe736,	// (0x0002c41c) list_double_time_pane_vc

0xe736,	// (0x0002c41c) list_setting_number_pane_vc_ParamLimits

0xe736,	// (0x0002c41c) list_setting_number_pane_vc

0xe736,	// (0x0002c41c) list_setting_pane_vc_ParamLimits

0xe736,	// (0x0002c41c) list_setting_pane_vc

0xe736,	// (0x0002c41c) list_single_graphic_heading_pane_vc_ParamLimits

0xe736,	// (0x0002c41c) list_single_graphic_heading_pane_vc

0xe736,	// (0x0002c41c) list_single_heading_pane_vc_ParamLimits

0xe736,	// (0x0002c41c) list_single_heading_pane_vc

0xe74a,	// (0x0002c430) list_single_number_heading_pane_vc_ParamLimits

0xe74a,	// (0x0002c430) list_single_number_heading_pane_vc

0xdf61,	// (0x0002bc47) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xdf61,	// (0x0002bc47) list_double_graphic_heading_pane_vc_g1

0xdee7,	// (0x0002bbcd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xdee7,	// (0x0002bbcd) list_double_graphic_heading_pane_vc_g2

0xdef3,	// (0x0002bbd9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xdef3,	// (0x0002bbd9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7f9,	// (0x0002d4df) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0002d4df) list_double_graphic_heading_pane_vc_g

0xe807,	// (0x0002c4ed) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe807,	// (0x0002c4ed) list_double_graphic_heading_pane_vc_t1

0xe648,	// (0x0002c32e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe648,	// (0x0002c32e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa22,	// (0x0002d708) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa22,	// (0x0002d708) list_double_graphic_heading_pane_vc_t

0x5af0,	// (0x000237d6) list_setting_pane_vc_g1_ParamLimits

0x5af0,	// (0x000237d6) list_setting_pane_vc_g1

0x5afc,	// (0x000237e2) list_setting_pane_vc_g2_ParamLimits

0x5afc,	// (0x000237e2) list_setting_pane_vc_g2

0x0001,

0xf81f,	// (0x0002d505) list_setting_pane_vc_g_ParamLimits

0xf81f,	// (0x0002d505) list_setting_pane_vc_g

0x7219,	// (0x00024eff) list_setting_pane_vc_t1_ParamLimits

0x7219,	// (0x00024eff) list_setting_pane_vc_t1

0x722d,	// (0x00024f13) list_setting_pane_vc_t2_ParamLimits

0x722d,	// (0x00024f13) list_setting_pane_vc_t2

0x0001,

0xfa65,	// (0x0002d74b) list_setting_pane_vc_t_ParamLimits

0xfa65,	// (0x0002d74b) list_setting_pane_vc_t

0x5b60,	// (0x00023846) set_value_pane_cp_vc_ParamLimits

0x5b60,	// (0x00023846) set_value_pane_cp_vc

0xdee7,	// (0x0002bbcd) list_single_number_heading_pane_vc_g1_ParamLimits

0xdee7,	// (0x0002bbcd) list_single_number_heading_pane_vc_g1

0xdef3,	// (0x0002bbd9) list_single_number_heading_pane_vc_g2_ParamLimits

0xdef3,	// (0x0002bbd9) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002d2f2) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002d2f2) list_single_number_heading_pane_vc_g

0xe648,	// (0x0002c32e) list_single_number_heading_pane_vc_t1_ParamLimits

0xe648,	// (0x0002c32e) list_single_number_heading_pane_vc_t1

0xe81b,	// (0x0002c501) list_single_number_heading_pane_vc_t2_ParamLimits

0xe81b,	// (0x0002c501) list_single_number_heading_pane_vc_t2

0xdf4f,	// (0x0002bc35) list_single_number_heading_pane_vc_t3_ParamLimits

0xdf4f,	// (0x0002bc35) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6a,	// (0x0002d750) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0002d750) list_single_number_heading_pane_vc_t

0xdf61,	// (0x0002bc47) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xdf61,	// (0x0002bc47) list_single_graphic_heading_pane_vc_g1

0xdee7,	// (0x0002bbcd) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdee7,	// (0x0002bbcd) list_single_graphic_heading_pane_vc_g4

0xdef3,	// (0x0002bbd9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xdef3,	// (0x0002bbd9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x0002d4df) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0002d4df) list_single_graphic_heading_pane_vc_g

0xe648,	// (0x0002c32e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe648,	// (0x0002c32e) list_single_graphic_heading_pane_vc_t1

0xe82f,	// (0x0002c515) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe82f,	// (0x0002c515) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0002d757) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0002d757) list_single_graphic_heading_pane_vc_t

0xdee7,	// (0x0002bbcd) list_double2_pane_vc_g1_ParamLimits

0xdee7,	// (0x0002bbcd) list_double2_pane_vc_g1

0xdef3,	// (0x0002bbd9) list_double2_pane_vc_g2_ParamLimits

0xdef3,	// (0x0002bbd9) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0002d2f2) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0002d2f2) list_double2_pane_vc_g

0xe6fe,	// (0x0002c3e4) list_double2_pane_vc_t1_ParamLimits

0xe6fe,	// (0x0002c3e4) list_double2_pane_vc_t1

0xe843,	// (0x0002c529) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe843,	// (0x0002c529) list_double2_large_graphic_pane_vc_g1

0xe84f,	// (0x0002c535) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe84f,	// (0x0002c535) list_double2_large_graphic_pane_vc_g2

0xe85b,	// (0x0002c541) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe85b,	// (0x0002c541) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa76,	// (0x0002d75c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0002d75c) list_double2_large_graphic_pane_vc_g

0xe867,	// (0x0002c54d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe867,	// (0x0002c54d) list_double2_large_graphic_pane_vc_t1

0xe87d,	// (0x0002c563) list_double_time_pane_vc_g1_ParamLimits

0xe87d,	// (0x0002c563) list_double_time_pane_vc_g1

0xe889,	// (0x0002c56f) list_double_time_pane_vc_g2_ParamLimits

0xe889,	// (0x0002c56f) list_double_time_pane_vc_g2

0x0001,

0xfa7d,	// (0x0002d763) list_double_time_pane_vc_g_ParamLimits

0xfa7d,	// (0x0002d763) list_double_time_pane_vc_g

0xe895,	// (0x0002c57b) list_double_time_pane_vc_t1_ParamLimits

0xe895,	// (0x0002c57b) list_double_time_pane_vc_t1

0xe8ae,	// (0x0002c594) list_double_time_pane_vc_t2_ParamLimits

0xe8ae,	// (0x0002c594) list_double_time_pane_vc_t2

0xe8ee,	// (0x0002c5d4) list_double_time_pane_vc_t3_ParamLimits

0xe8ee,	// (0x0002c5d4) list_double_time_pane_vc_t3

0xe906,	// (0x0002c5ec) list_double_time_pane_vc_t4_ParamLimits

0xe906,	// (0x0002c5ec) list_double_time_pane_vc_t4

0x0003,

0xfa82,	// (0x0002d768) list_double_time_pane_vc_t_ParamLimits

0xfa82,	// (0x0002d768) list_double_time_pane_vc_t

0xdee7,	// (0x0002bbcd) list_double_pane_vc_g1_ParamLimits

0xdee7,	// (0x0002bbcd) list_double_pane_vc_g1

0xdef3,	// (0x0002bbd9) list_double_pane_vc_g2_ParamLimits

0xdef3,	// (0x0002bbd9) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0002d2f2) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0002d2f2) list_double_pane_vc_g

0xe91a,	// (0x0002c600) list_double_pane_vc_t1_ParamLimits

0xe91a,	// (0x0002c600) list_double_pane_vc_t1

0xe92c,	// (0x0002c612) list_double_pane_vc_t2_ParamLimits

0xe92c,	// (0x0002c612) list_double_pane_vc_t2

0x0001,

0xfa8b,	// (0x0002d771) list_double_pane_vc_t_ParamLimits

0xfa8b,	// (0x0002d771) list_double_pane_vc_t

0xdee7,	// (0x0002bbcd) list_double_number_pane_vc_g1_ParamLimits

0xdee7,	// (0x0002bbcd) list_double_number_pane_vc_g1

0xdef3,	// (0x0002bbd9) list_double_number_pane_vc_g2_ParamLimits

0xdef3,	// (0x0002bbd9) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0002d2f2) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0002d2f2) list_double_number_pane_vc_g

0xe944,	// (0x0002c62a) list_double_number_pane_vc_t1_ParamLimits

0xe944,	// (0x0002c62a) list_double_number_pane_vc_t1

0xe958,	// (0x0002c63e) list_double_number_pane_vc_t2_ParamLimits

0xe958,	// (0x0002c63e) list_double_number_pane_vc_t2

0xe92c,	// (0x0002c612) list_double_number_pane_vc_t3_ParamLimits

0xe92c,	// (0x0002c612) list_double_number_pane_vc_t3

0x0002,

0xfa90,	// (0x0002d776) list_double_number_pane_vc_t_ParamLimits

0xfa90,	// (0x0002d776) list_double_number_pane_vc_t

0xe96a,	// (0x0002c650) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe96a,	// (0x0002c650) list_double_large_graphic_pane_vc_g1

0xe976,	// (0x0002c65c) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe976,	// (0x0002c65c) list_double_large_graphic_pane_vc_g2

0xe85b,	// (0x0002c541) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe85b,	// (0x0002c541) list_double_large_graphic_pane_vc_g3

0xe985,	// (0x0002c66b) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe985,	// (0x0002c66b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa97,	// (0x0002d77d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa97,	// (0x0002d77d) list_double_large_graphic_pane_vc_g

0xe991,	// (0x0002c677) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe991,	// (0x0002c677) list_double_large_graphic_pane_vc_t1

0xe9a3,	// (0x0002c689) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe9a3,	// (0x0002c689) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa0,	// (0x0002d786) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa0,	// (0x0002d786) list_double_large_graphic_pane_vc_t

0xdee7,	// (0x0002bbcd) list_double_heading_pane_vc_g1_ParamLimits

0xdee7,	// (0x0002bbcd) list_double_heading_pane_vc_g1

0xdef3,	// (0x0002bbd9) list_double_heading_pane_vc_g2_ParamLimits

0xdef3,	// (0x0002bbd9) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002d2f2) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002d2f2) list_double_heading_pane_vc_g

0xe9bc,	// (0x0002c6a2) list_double_heading_pane_vc_t1_ParamLimits

0xe9bc,	// (0x0002c6a2) list_double_heading_pane_vc_t1

0xe648,	// (0x0002c32e) list_double_heading_pane_vc_t2_ParamLimits

0xe648,	// (0x0002c32e) list_double_heading_pane_vc_t2

0x0001,

0xfaa5,	// (0x0002d78b) list_double_heading_pane_vc_t_ParamLimits

0xfaa5,	// (0x0002d78b) list_double_heading_pane_vc_t

0xe9d0,	// (0x0002c6b6) list_double_graphic_pane_vc_g1_ParamLimits

0xe9d0,	// (0x0002c6b6) list_double_graphic_pane_vc_g1

0xe9e0,	// (0x0002c6c6) list_double_graphic_pane_vc_g2_ParamLimits

0xe9e0,	// (0x0002c6c6) list_double_graphic_pane_vc_g2

0xe9ef,	// (0x0002c6d5) list_double_graphic_pane_vc_g3_ParamLimits

0xe9ef,	// (0x0002c6d5) list_double_graphic_pane_vc_g3

0x0002,

0xfaaa,	// (0x0002d790) list_double_graphic_pane_vc_g_ParamLimits

0xfaaa,	// (0x0002d790) list_double_graphic_pane_vc_g

0xe9fb,	// (0x0002c6e1) list_double_graphic_pane_vc_t1_ParamLimits

0xe9fb,	// (0x0002c6e1) list_double_graphic_pane_vc_t1

0xe92c,	// (0x0002c612) list_double_graphic_pane_vc_t2_ParamLimits

0xe92c,	// (0x0002c612) list_double_graphic_pane_vc_t2

0x0001,

0xfab1,	// (0x0002d797) list_double_graphic_pane_vc_t_ParamLimits

0xfab1,	// (0x0002d797) list_double_graphic_pane_vc_t

0x8123,	// (0x00025e09) aid_size_cell_fastswap

0x812b,	// (0x00025e11) aid_size_cell_touch_ParamLimits

0x812b,	// (0x00025e11) aid_size_cell_touch

0x8390,	// (0x00026076) popup_fast_swap_wide_window_ParamLimits

0x8390,	// (0x00026076) popup_fast_swap_wide_window

0x8486,	// (0x0002616c) touch_pane_ParamLimits

0x8486,	// (0x0002616c) touch_pane

0x4b0a,	// (0x000227f0) button_value_adjust_pane_cp2

0xe331,	// (0x0002c017) button_value_adjust_pane_cp4

0xe351,	// (0x0002c037) form_field_data_pane_cp2

0xe370,	// (0x0002c056) form_field_data_wide_pane_cp2

0x4e5c,	// (0x00022b42) bg_scroll_pane_ParamLimits

0x8ac9,	// (0x000267af) scroll_handle_pane_ParamLimits

0x8add,	// (0x000267c3) scroll_sc2_down_pane_ParamLimits

0x8add,	// (0x000267c3) scroll_sc2_down_pane

0x4e8d,	// (0x00022b73) scroll_sc2_up_pane_ParamLimits

0x4e8d,	// (0x00022b73) scroll_sc2_up_pane

0xa37e,	// (0x00028064) grid_wheel_folder_pane_g1_ParamLimits

0xa37e,	// (0x00028064) grid_wheel_folder_pane_g1

0x8d53,	// (0x00026a39) clock_nsta_pane_cp2_ParamLimits

0x8d53,	// (0x00026a39) clock_nsta_pane_cp2

0x8dd9,	// (0x00026abf) listscroll_midp_pane_ParamLimits

0x8de5,	// (0x00026acb) midp_canvas_pane

0x5756,	// (0x0002343c) nsta_clock_indic_pane

0x578e,	// (0x00023474) listscroll_form_pane_vc

0x5796,	// (0x0002347c) listscroll_set_pane_vc_ParamLimits

0x5796,	// (0x0002347c) listscroll_set_pane_vc

0x9613,	// (0x000272f9) clock_nsta_pane

0x9620,	// (0x00027306) indicator_nsta_pane

0x59e6,	// (0x000236cc) bg_popup_sub_pane_cp2_ParamLimits

0x59fa,	// (0x000236e0) find_pane_cp2_ParamLimits

0x59fa,	// (0x000236e0) find_pane_cp2

0x5a10,	// (0x000236f6) grid_toobar_pane_ParamLimits

0x5b6c,	// (0x00023852) list_form_gen_pane_vc_ParamLimits

0x5b6c,	// (0x00023852) list_form_gen_pane_vc

0x5b82,	// (0x00023868) scroll_pane_cp8_vc_ParamLimits

0x5b82,	// (0x00023868) scroll_pane_cp8_vc

0x5bd2,	// (0x000238b8) data_form_wide_pane_vc_ParamLimits

0x5bd2,	// (0x000238b8) data_form_wide_pane_vc

0x5bde,	// (0x000238c4) form_field_data_wide_pane_vc_g1

0x5be6,	// (0x000238cc) form_field_data_wide_pane_vc_t1_ParamLimits

0x5be6,	// (0x000238cc) form_field_data_wide_pane_vc_t1

0x4b1e,	// (0x00022804) input_focus_pane_cp6_vc_ParamLimits

0x4b1e,	// (0x00022804) input_focus_pane_cp6_vc

0x9acf,	// (0x000277b5) list_midp_pane_ParamLimits

0x9adb,	// (0x000277c1) scroll_pane_cp16_ParamLimits

0x9adb,	// (0x000277c1) scroll_pane_cp16

0x5e47,	// (0x00023b2d) button_value_adjust_pane_ParamLimits

0x5e47,	// (0x00023b2d) button_value_adjust_pane

0x9eed,	// (0x00027bd3) button_value_adjust_pane_cp6_ParamLimits

0x9eed,	// (0x00027bd3) button_value_adjust_pane_cp6

0xa00f,	// (0x00027cf5) settings_code_pane_cp_ParamLimits

0xa00f,	// (0x00027cf5) settings_code_pane_cp

0x4471,	// (0x00022157) cell_touch_pane_g1

0x4471,	// (0x00022157) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0002d428) cell_touch_pane_g

0xa1f7,	// (0x00027edd) cell_touch_pane_cp_ParamLimits

0xa1f7,	// (0x00027edd) cell_touch_pane_cp

0xa207,	// (0x00027eed) cell_touch_pane_ParamLimits

0xa207,	// (0x00027eed) cell_touch_pane

0x4471,	// (0x00022157) scroll_sc2_down_pane_g1

0x4471,	// (0x00022157) scroll_sc2_up_pane_g1

0x447b,	// (0x00022161) bg_set_opt_pane_cp4_vc

0x7035,	// (0x00024d1b) list_set_graphic_pane_vc_g1_ParamLimits

0x7035,	// (0x00024d1b) list_set_graphic_pane_vc_g1

0x7041,	// (0x00024d27) list_set_graphic_pane_vc_g2_ParamLimits

0x7041,	// (0x00024d27) list_set_graphic_pane_vc_g2

0x0001,

0xfa27,	// (0x0002d70d) list_set_graphic_pane_vc_g_ParamLimits

0xfa27,	// (0x0002d70d) list_set_graphic_pane_vc_g

0x704d,	// (0x00024d33) text_primary_small_cp13_vc_ParamLimits

0x704d,	// (0x00024d33) text_primary_small_cp13_vc

0x7065,	// (0x00024d4b) list_set_graphic_pane_vc_ParamLimits

0x7065,	// (0x00024d4b) list_set_graphic_pane_vc

0x447b,	// (0x00022161) input_focus_pane_cp2_vc

0x4471,	// (0x00022157) setting_code_pane_vc_g1

0x7079,	// (0x00024d5f) setting_code_pane_vc_t1

0x7087,	// (0x00024d6d) set_text_pane_vc_t1_ParamLimits

0x7087,	// (0x00024d6d) set_text_pane_vc_t1

0x447b,	// (0x00022161) input_focus_pane_cp1_vc

0x70a6,	// (0x00024d8c) list_set_text_pane_vc

0x4471,	// (0x00022157) setting_text_pane_vc_g1

0x447b,	// (0x00022161) bg_set_opt_pane_cp2_vc

0x70b0,	// (0x00024d96) setting_slider_graphic_pane_vc_g1

0x70b8,	// (0x00024d9e) setting_slider_graphic_pane_vc_t1

0x70c6,	// (0x00024dac) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa2c,	// (0x0002d712) setting_slider_graphic_pane_vc_t

0x70d4,	// (0x00024dba) slider_set_pane_cp_vc

0x70dc,	// (0x00024dc2) slider_set_pane_vc_g1

0x70e5,	// (0x00024dcb) slider_set_pane_vc_g2

0x0006,

0xfa31,	// (0x0002d717) slider_set_pane_vc_g

0x4b85,	// (0x0002286b) set_opt_bg_pane_g1_copy1

0x4b8d,	// (0x00022873) set_opt_bg_pane_g2_copy1

0x7111,	// (0x00024df7) set_opt_bg_pane_g3_copy1

0x4b9d,	// (0x00022883) set_opt_bg_pane_g4_copy1

0x4ba5,	// (0x0002288b) set_opt_bg_pane_g5_copy1

0x4bad,	// (0x00022893) set_opt_bg_pane_g6_copy1

0x7119,	// (0x00024dff) set_opt_bg_pane_g7_copy1

0x7123,	// (0x00024e09) set_opt_bg_pane_g8_copy1

0x712b,	// (0x00024e11) set_opt_bg_pane_g9_copy1

0x447b,	// (0x00022161) bg_set_opt_pane_cp_vc

0x7133,	// (0x00024e19) setting_slider_pane_vc_t1

0x70b8,	// (0x00024d9e) setting_slider_pane_vc_t2

0x70c6,	// (0x00024dac) setting_slider_pane_vc_t3

0x0002,

0xfa40,	// (0x0002d726) setting_slider_pane_vc_t

0x70d4,	// (0x00024dba) slider_set_pane_vc

0x9b21,	// (0x00027807) volume_set_pane_vc_g1

0xa219,	// (0x00027eff) volume_set_pane_vc_g2

0xa222,	// (0x00027f08) volume_set_pane_vc_g3

0xa22b,	// (0x00027f11) volume_set_pane_vc_g4

0xa234,	// (0x00027f1a) volume_set_pane_vc_g5

0xa23d,	// (0x00027f23) volume_set_pane_vc_g6

0xa246,	// (0x00027f2c) volume_set_pane_vc_g7

0xa24f,	// (0x00027f35) volume_set_pane_vc_g8

0xa258,	// (0x00027f3e) volume_set_pane_vc_g9

0xa261,	// (0x00027f47) volume_set_pane_vc_g10

0x0009,

0xfa47,	// (0x0002d72d) volume_set_pane_vc_g

0x7142,	// (0x00024e28) volume_set_pane_vc

0x714a,	// (0x00024e30) button_value_adjust_pane_cp1_vc

0x7154,	// (0x00024e3a) list_highlight_pane_cp2_vc

0x715d,	// (0x00024e43) list_set_pane_vc_ParamLimits

0x715d,	// (0x00024e43) list_set_pane_vc

0x71af,	// (0x00024e95) main_pane_set_vc_t1_ParamLimits

0x71af,	// (0x00024e95) main_pane_set_vc_t1

0x71c4,	// (0x00024eaa) main_pane_set_vc_t2_ParamLimits

0x71c4,	// (0x00024eaa) main_pane_set_vc_t2

0x71d6,	// (0x00024ebc) main_pane_set_vc_t3_ParamLimits

0x71d6,	// (0x00024ebc) main_pane_set_vc_t3

0x71e8,	// (0x00024ece) main_pane_set_vc_t4_ParamLimits

0x71e8,	// (0x00024ece) main_pane_set_vc_t4

0x0003,

0xfa5c,	// (0x0002d742) main_pane_set_vc_t_ParamLimits

0xfa5c,	// (0x0002d742) main_pane_set_vc_t

0x71fa,	// (0x00024ee0) setting_code_pane_vc_ParamLimits

0x71fa,	// (0x00024ee0) setting_code_pane_vc

0x7209,	// (0x00024eef) setting_slider_graphic_pane_vc

0x7209,	// (0x00024eef) setting_slider_pane_vc

0x7209,	// (0x00024eef) setting_text_pane_vc

0x7209,	// (0x00024eef) setting_volume_pane_vc

0x7211,	// (0x00024ef7) scroll_pane_cp121_vc

0x4af8,	// (0x000227de) set_content_pane_vc

0x724f,	// (0x00024f35) button_value_adjust_pane_g1

0x7258,	// (0x00024f3e) button_value_adjust_pane_g2

0x0001,

0xfab6,	// (0x0002d79c) button_value_adjust_pane_g

0x7261,	// (0x00024f47) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7261,	// (0x00024f47) form_field_slider_wide_pane_vc_t1

0x7275,	// (0x00024f5b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7275,	// (0x00024f5b) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabb,	// (0x0002d7a1) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabb,	// (0x0002d7a1) form_field_slider_wide_pane_vc_t

0x44c9,	// (0x000221af) input_focus_pane_cp10_vc_ParamLimits

0x44c9,	// (0x000221af) input_focus_pane_cp10_vc

0x7287,	// (0x00024f6d) slider_cont_pane_cp1_vc_ParamLimits

0x7287,	// (0x00024f6d) slider_cont_pane_cp1_vc

0x70dc,	// (0x00024dc2) slider_form_pane_g1_cp2

0x70e5,	// (0x00024dcb) slider_form_pane_g2_cp2

0x72a0,	// (0x00024f86) form_field_slider_pane_vc_t3

0x72ae,	// (0x00024f94) form_field_slider_pane_vc_t4

0x72bc,	// (0x00024fa2) slider_form_pane_vc_ParamLimits

0x72bc,	// (0x00024fa2) slider_form_pane_vc

0x72c9,	// (0x00024faf) form_field_slider_pane_vc_t1_ParamLimits

0x72c9,	// (0x00024faf) form_field_slider_pane_vc_t1

0x7275,	// (0x00024f5b) form_field_slider_pane_vc_t2_ParamLimits

0x7275,	// (0x00024f5b) form_field_slider_pane_vc_t2

0x0001,

0xfacb,	// (0x0002d7b1) form_field_slider_pane_vc_t_ParamLimits

0xfacb,	// (0x0002d7b1) form_field_slider_pane_vc_t

0x44c9,	// (0x000221af) input_focus_pane_cp9_vc_ParamLimits

0x44c9,	// (0x000221af) input_focus_pane_cp9_vc

0x72e5,	// (0x00024fcb) slider_cont_pane_vc_ParamLimits

0x72e5,	// (0x00024fcb) slider_cont_pane_vc

0x72f7,	// (0x00024fdd) list_form_graphic_pane_cp_vc_ParamLimits

0x72f7,	// (0x00024fdd) list_form_graphic_pane_cp_vc

0x5bde,	// (0x000238c4) form_field_popup_wide_pane_vc_g1

0x730c,	// (0x00024ff2) form_field_popup_wide_pane_vc_t1_ParamLimits

0x730c,	// (0x00024ff2) form_field_popup_wide_pane_vc_t1

0x4b1e,	// (0x00022804) input_focus_pane_cp8_vc_ParamLimits

0x4b1e,	// (0x00022804) input_focus_pane_cp8_vc

0x7323,	// (0x00025009) list_form_wide_pane_vc_ParamLimits

0x7323,	// (0x00025009) list_form_wide_pane_vc

0x732f,	// (0x00025015) list_form_graphic_pane_vc_g1

0x7337,	// (0x0002501d) list_form_graphic_pane_vc_t1_ParamLimits

0x7337,	// (0x0002501d) list_form_graphic_pane_vc_t1

0x44d7,	// (0x000221bd) list_highlight_pane_cp5_vc_ParamLimits

0x44d7,	// (0x000221bd) list_highlight_pane_cp5_vc

0x7353,	// (0x00025039) list_form_graphic_pane_vc_ParamLimits

0x7353,	// (0x00025039) list_form_graphic_pane_vc

0x5bde,	// (0x000238c4) form_field_popup_pane_vc_g1

0x7369,	// (0x0002504f) form_field_popup_pane_vc_t1_ParamLimits

0x7369,	// (0x0002504f) form_field_popup_pane_vc_t1

0x4b1e,	// (0x00022804) input_focus_pane_cp7_vc_ParamLimits

0x4b1e,	// (0x00022804) input_focus_pane_cp7_vc

0x7380,	// (0x00025066) list_form_pane_vc_ParamLimits

0x7380,	// (0x00025066) list_form_pane_vc

0x738c,	// (0x00025072) data_form_pane_vc_t1_ParamLimits

0x738c,	// (0x00025072) data_form_pane_vc_t1

0x4b85,	// (0x0002286b) input_focus_pane_vc_g1

0x4b8d,	// (0x00022873) input_focus_pane_vc_g2

0x4b95,	// (0x0002287b) input_focus_pane_vc_g3

0x4b9d,	// (0x00022883) input_focus_pane_vc_g4

0x4ba5,	// (0x0002288b) input_focus_pane_vc_g5

0x4bad,	// (0x00022893) input_focus_pane_vc_g6

0x4bb5,	// (0x0002289b) input_focus_pane_vc_g7

0x4bbd,	// (0x000228a3) input_focus_pane_vc_g8

0x4bc5,	// (0x000228ab) input_focus_pane_vc_g9

0x4471,	// (0x00022157) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0002d3b1) input_focus_pane_vc_g

0x5bd2,	// (0x000238b8) data_form_pane_vc_ParamLimits

0x5bd2,	// (0x000238b8) data_form_pane_vc

0x5bde,	// (0x000238c4) form_field_data_pane_vc_g1

0x73a7,	// (0x0002508d) form_field_data_pane_vc_t1_ParamLimits

0x73a7,	// (0x0002508d) form_field_data_pane_vc_t1

0x4b1e,	// (0x00022804) input_focus_pane_vc_ParamLimits

0x4b1e,	// (0x00022804) input_focus_pane_vc

0x73c1,	// (0x000250a7) button_value_adjust_pane_cp3_vc

0x73c9,	// (0x000250af) button_value_adjust_pane_cp5_vc

0x73d1,	// (0x000250b7) form_field_data_pane_vc_ParamLimits

0x73d1,	// (0x000250b7) form_field_data_pane_vc

0x73e8,	// (0x000250ce) form_field_data_pane_vc_cp2

0x73f0,	// (0x000250d6) form_field_data_wide_pane_vc_ParamLimits

0x73f0,	// (0x000250d6) form_field_data_wide_pane_vc

0x7406,	// (0x000250ec) form_field_data_wide_pane_vc_cp2

0x740e,	// (0x000250f4) form_field_popup_pane_vc_ParamLimits

0x740e,	// (0x000250f4) form_field_popup_pane_vc

0x7425,	// (0x0002510b) form_field_popup_wide_pane_vc_ParamLimits

0x7425,	// (0x0002510b) form_field_popup_wide_pane_vc

0x743b,	// (0x00025121) form_field_slider_pane_vc_ParamLimits

0x743b,	// (0x00025121) form_field_slider_pane_vc

0x744e,	// (0x00025134) form_field_slider_wide_pane_vc_ParamLimits

0x744e,	// (0x00025134) form_field_slider_wide_pane_vc

0xa26a,	// (0x00027f50) grid_touch_1_pane_ParamLimits

0xa26a,	// (0x00027f50) grid_touch_1_pane

0xa276,	// (0x00027f5c) grid_touch_2_pane_ParamLimits

0xa276,	// (0x00027f5c) grid_touch_2_pane

0x5748,	// (0x0002342e) touch_pane_g1_ParamLimits

0x5748,	// (0x0002342e) touch_pane_g1

0x7461,	// (0x00025147) cell_app_pane_cp_wide_ParamLimits

0x7461,	// (0x00025147) cell_app_pane_cp_wide

0x7472,	// (0x00025158) grid_popup_fast_wide_pane_ParamLimits

0x7472,	// (0x00025158) grid_popup_fast_wide_pane

0x7486,	// (0x0002516c) scroll_pane_cp19_ParamLimits

0x7486,	// (0x0002516c) scroll_pane_cp19

0x447b,	// (0x00022161) bg_popup_window_pane_cp20

0x749a,	// (0x00025180) listscroll_popup_fast_wide_pane

0x44d7,	// (0x000221bd) grid_indicator_nsta_pane

0x74a2,	// (0x00025188) clock_nsta_pane_g1

0x74ab,	// (0x00025191) clock_nsta_pane_t1

0xa28e,	// (0x00027f74) cell_indicator_nsta_pane_ParamLimits

0xa28e,	// (0x00027f74) cell_indicator_nsta_pane

0x74c7,	// (0x000251ad) cell_indicator_nsta_pane_g1

0xa2c6,	// (0x00027fac) cell_indicator_nsta_pane_g2

0x0001,

0xfad5,	// (0x0002d7bb) cell_indicator_nsta_pane_g

0x74d5,	// (0x000251bb) clock_nsta_pane_cp

0x74dd,	// (0x000251c3) indicator_nsta_pane_cp

0x74e5,	// (0x000251cb) nsta_clock_indic_pane_g1

0x4513,	// (0x000221f9) grid_indicator_pane

0x4f7f,	// (0x00022c65) scroll_pane_cp29

0x8ca2,	// (0x00026988) indicator_nsta_pane_cp2_ParamLimits

0x8ca2,	// (0x00026988) indicator_nsta_pane_cp2

0x44d7,	// (0x000221bd) main_apps_wheel_pane

0x5cfa,	// (0x000239e0) form_midp_field_text_pane_ParamLimits

0x5e27,	// (0x00023b0d) scroll_bar_cp050_ParamLimits

0x751d,	// (0x00025203) cell_indicator_pane_ParamLimits

0x751d,	// (0x00025203) cell_indicator_pane

0x753a,	// (0x00025220) cell_indicator_pane_g1

0xa2dc,	// (0x00027fc2) grid_wheel_folder_pane_ParamLimits

0xa2dc,	// (0x00027fc2) grid_wheel_folder_pane

0xa2f2,	// (0x00027fd8) list_wheel_apps_pane_ParamLimits

0xa2f2,	// (0x00027fd8) list_wheel_apps_pane

0xa303,	// (0x00027fe9) main_apps_wheel_pane_g1_ParamLimits

0xa303,	// (0x00027fe9) main_apps_wheel_pane_g1

0xa317,	// (0x00027ffd) main_apps_wheel_pane_g2_ParamLimits

0xa317,	// (0x00027ffd) main_apps_wheel_pane_g2

0x0001,

0xfae4,	// (0x0002d7ca) main_apps_wheel_pane_g_ParamLimits

0xfae4,	// (0x0002d7ca) main_apps_wheel_pane_g

0xa32f,	// (0x00028015) main_apps_wheel_pane_t1_ParamLimits

0xa32f,	// (0x00028015) main_apps_wheel_pane_t1

0xa352,	// (0x00028038) list_wheel_apps_pane_g1

0xa35a,	// (0x00028040) list_wheel_apps_pane_g2

0xa362,	// (0x00028048) list_wheel_apps_pane_g3

0xa36a,	// (0x00028050) list_wheel_apps_pane_g4

0xa374,	// (0x0002805a) list_wheel_apps_pane_g5

0x0004,

0xfae9,	// (0x0002d7cf) list_wheel_apps_pane_g

0x53d2,	// (0x000230b8) navi_icon_text_pane

0x9557,	// (0x0002723d) aid_fill_nsta

0xa397,	// (0x0002807d) navi_icon_text_pane_g1

0xa3a6,	// (0x0002808c) navi_icon_text_pane_t1

0x526e,	// (0x00022f54) list_set_graphic_pane_t1_ParamLimits

0x526e,	// (0x00022f54) list_set_graphic_pane_t1

0x64fe,	// (0x000241e4) popup_midp_note_alarm_window_t6_ParamLimits

0x64fe,	// (0x000241e4) popup_midp_note_alarm_window_t6

0x6510,	// (0x000241f6) popup_midp_note_alarm_window_t7_ParamLimits

0x6510,	// (0x000241f6) popup_midp_note_alarm_window_t7

0x6522,	// (0x00024208) popup_midp_note_alarm_window_t8_ParamLimits

0x6522,	// (0x00024208) popup_midp_note_alarm_window_t8

0x6534,	// (0x0002421a) popup_midp_note_alarm_window_t9_ParamLimits

0x6534,	// (0x0002421a) popup_midp_note_alarm_window_t9

0x6546,	// (0x0002422c) popup_midp_note_alarm_window_t10_ParamLimits

0x6546,	// (0x0002422c) popup_midp_note_alarm_window_t10

0x6558,	// (0x0002423e) popup_midp_note_alarm_window_t11_ParamLimits

0x6558,	// (0x0002423e) popup_midp_note_alarm_window_t11

0x656a,	// (0x00024250) scroll_pane_cp17_ParamLimits

0x656a,	// (0x00024250) scroll_pane_cp17

0x9b21,	// (0x00027807) volume_small_pane_cp_g1

0xa3bb,	// (0x000280a1) volume_small_pane_cp_g2

0xa3c4,	// (0x000280aa) volume_small_pane_cp_g3

0xa3cd,	// (0x000280b3) volume_small_pane_cp_g4

0xa3d6,	// (0x000280bc) volume_small_pane_cp_g5

0xa3df,	// (0x000280c5) volume_small_pane_cp_g6

0xa3e8,	// (0x000280ce) volume_small_pane_cp_g7

0xa3f1,	// (0x000280d7) volume_small_pane_cp_g8

0xa3fa,	// (0x000280e0) volume_small_pane_cp_g9

0xa403,	// (0x000280e9) volume_small_pane_cp_g10

0x557e,	// (0x00023264) midp_ticker_pane_g1_ParamLimits

0x558a,	// (0x00023270) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0002d479) midp_ticker_pane_g_ParamLimits

0x8e8e,	// (0x00026b74) midp_ticker_pane_t1_ParamLimits

0x956d,	// (0x00027253) aid_fill_nsta_2

0x5e13,	// (0x00023af9) list_form2_midp_pane

0x6bfd,	// (0x000248e3) midp_editing_number_pane_ParamLimits

0x6c0c,	// (0x000248f2) midp_ticker_pane_ParamLimits

0x7544,	// (0x0002522a) form2_midp_field_pane

0x754c,	// (0x00025232) scroll_pane_cp51

0x756c,	// (0x00025252) form2_midp_button_pane_ParamLimits

0x756c,	// (0x00025252) form2_midp_button_pane

0x757e,	// (0x00025264) form2_midp_content_pane_ParamLimits

0x757e,	// (0x00025264) form2_midp_content_pane

0x7598,	// (0x0002527e) form2_midp_field_choice_group_pane

0x75a0,	// (0x00025286) form2_midp_field_pane_g1

0x75a8,	// (0x0002528e) form2_midp_field_pane_g2

0x75b0,	// (0x00025296) form2_midp_field_pane_g3

0x75b8,	// (0x0002529e) form2_midp_field_pane_g4

0x0003,

0xfb0e,	// (0x0002d7f4) form2_midp_field_pane_g

0x75c0,	// (0x000252a6) form2_midp_gauge_slider_pane

0x75c8,	// (0x000252ae) form2_midp_gauge_wait_pane

0x75d0,	// (0x000252b6) form2_midp_image_pane_ParamLimits

0x75d0,	// (0x000252b6) form2_midp_image_pane

0x75eb,	// (0x000252d1) form2_midp_label_pane_ParamLimits

0x75eb,	// (0x000252d1) form2_midp_label_pane

0xa428,	// (0x0002810e) form2_midp_label_pane_cp_ParamLimits

0xa428,	// (0x0002810e) form2_midp_label_pane_cp

0x7604,	// (0x000252ea) form2_midp_string_pane_ParamLimits

0x7604,	// (0x000252ea) form2_midp_string_pane

0xea0d,	// (0x0002c6f3) form2_midp_text_pane_ParamLimits

0xea0d,	// (0x0002c6f3) form2_midp_text_pane

0x7616,	// (0x000252fc) form2_midp_time_pane

0x7626,	// (0x0002530c) input_focus_pane_cp51_ParamLimits

0x7626,	// (0x0002530c) input_focus_pane_cp51

0x763e,	// (0x00025324) form2_midp_label_pane_t1_ParamLimits

0x763e,	// (0x00025324) form2_midp_label_pane_t1

0xea26,	// (0x0002c70c) form2_mdip_text_pane_t1_ParamLimits

0xea26,	// (0x0002c70c) form2_mdip_text_pane_t1

0xea43,	// (0x0002c729) form2_midp_time_pane_t1

0x7686,	// (0x0002536c) form2_midp_gauge_slider_pane_t1

0xa449,	// (0x0002812f) form2_midp_gauge_slider_pane_t2

0xa45b,	// (0x00028141) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb17,	// (0x0002d7fd) form2_midp_gauge_slider_pane_t

0x7698,	// (0x0002537e) form2_midp_slider_pane

0x76a4,	// (0x0002538a) form2_midp_gauge_wait_pane_t1

0x76b2,	// (0x00025398) form2_midp_wait_pane_ParamLimits

0x76b2,	// (0x00025398) form2_midp_wait_pane

0xa46d,	// (0x00028153) list_single_2graphic_pane_cp4_ParamLimits

0xa46d,	// (0x00028153) list_single_2graphic_pane_cp4

0x9a0a,	// (0x000276f0) list_single_midp_graphic_pane_cp_ParamLimits

0x9a0a,	// (0x000276f0) list_single_midp_graphic_pane_cp

0x447b,	// (0x00022161) list_highlight_pane_cp20

0x76dd,	// (0x000253c3) list_single_2graphic_pane_g1_cp4

0x6f3a,	// (0x00024c20) list_single_2graphic_pane_g2_cp4

0x76e5,	// (0x000253cb) list_single_2graphic_pane_t1_cp4

0x44d7,	// (0x000221bd) list_highlight_pane_cp21

0x76f4,	// (0x000253da) list_single_midp_graphic_pane_g4_cp

0x7703,	// (0x000253e9) list_single_midp_graphic_pane_t1_cp

0xa49c,	// (0x00028182) form2_mdip_string_pane_t1_ParamLimits

0xa49c,	// (0x00028182) form2_mdip_string_pane_t1

0x447b,	// (0x00022161) bg_wml_button_pane_cp2

0x4471,	// (0x00022157) form2_midp_image_pane_g1

0xe132,	// (0x0002be18) list_double_large_graphic_pane_g5_ParamLimits

0xe132,	// (0x0002be18) list_double_large_graphic_pane_g5

0x8dd9,	// (0x00026abf) midp_form_pane_ParamLimits

0x44d7,	// (0x000221bd) main_apps_wheel_pane_ParamLimits

0x93c5,	// (0x000270ab) popup_preview_window_ParamLimits

0x93c5,	// (0x000270ab) popup_preview_window

0x5887,	// (0x0002356d) popup_touch_info_window_ParamLimits

0x5887,	// (0x0002356d) popup_touch_info_window

0x58a5,	// (0x0002358b) popup_touch_menu_window_ParamLimits

0x58a5,	// (0x0002358b) popup_touch_menu_window

0x4467,	// (0x0002214d) bg_popup_sub_pane_cp6

0xa5d6,	// (0x000282bc) list_touch_menu_pane

0xa5de,	// (0x000282c4) list_single_touch_menu_pane_ParamLimits

0xa5de,	// (0x000282c4) list_single_touch_menu_pane

0xa5f3,	// (0x000282d9) list_single_touch_menu_pane_t1

0x44d7,	// (0x000221bd) bg_popup_sub_pane_cp7_ParamLimits

0x44d7,	// (0x000221bd) bg_popup_sub_pane_cp7

0xa601,	// (0x000282e7) heading_sub_pane

0xa609,	// (0x000282ef) list_touch_info_pane_ParamLimits

0xa609,	// (0x000282ef) list_touch_info_pane

0xa618,	// (0x000282fe) list_single_touch_info_pane_ParamLimits

0xa618,	// (0x000282fe) list_single_touch_info_pane

0xa62a,	// (0x00028310) list_single_touch_info_pane_t1

0xa638,	// (0x0002831e) list_single_touch_info_pane_t2

0x0001,

0xfb25,	// (0x0002d80b) list_single_touch_info_pane_t

0x5554,	// (0x0002323a) bg_popup_heading_pane_cp

0xa646,	// (0x0002832c) heading_sub_pane_t1

0x5b98,	// (0x0002387e) bg_popup_preview_window_pane_cp_ParamLimits

0x5b98,	// (0x0002387e) bg_popup_preview_window_pane_cp

0xa601,	// (0x000282e7) heading_preview_pane

0xa609,	// (0x000282ef) list_preview_pane_ParamLimits

0xa609,	// (0x000282ef) list_preview_pane

0xa654,	// (0x0002833a) popup_preview_window_g1

0xa618,	// (0x000282fe) list_single_preview_pane_ParamLimits

0xa618,	// (0x000282fe) list_single_preview_pane

0xa65c,	// (0x00028342) list_single_preview_pane_g1

0xa664,	// (0x0002834a) list_single_preview_pane_t1

0xa62a,	// (0x00028310) list_single_preview_pane_t2

0x0001,

0xfb2a,	// (0x0002d810) list_single_preview_pane_t

0xa672,	// (0x00028358) bg_popup_heading_pane_cp2_ParamLimits

0xa672,	// (0x00028358) bg_popup_heading_pane_cp2

0xa688,	// (0x0002836e) heading_preview_pane_g1

0xa690,	// (0x00028376) heading_preview_pane_t1_ParamLimits

0xa690,	// (0x00028376) heading_preview_pane_t1

0x452a,	// (0x00022210) soft_indicator_pane_t1_ParamLimits

0x4a91,	// (0x00022777) scroll_pane_ParamLimits

0x4e84,	// (0x00022b6a) scroll_sc2_left_pane

0x4e7b,	// (0x00022b61) scroll_sc2_right_pane

0x4ea3,	// (0x00022b89) scroll_bg_pane_g1_ParamLimits

0x4eb8,	// (0x00022b9e) scroll_bg_pane_g2_ParamLimits

0x4ed0,	// (0x00022bb6) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0002d408) scroll_bg_pane_g_ParamLimits

0x4ea3,	// (0x00022b89) scroll_handle_pane_g1_ParamLimits

0x4ef2,	// (0x00022bd8) scroll_handle_pane_g2_ParamLimits

0x4ed0,	// (0x00022bb6) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0002d40f) scroll_handle_pane_g_ParamLimits

0x57d0,	// (0x000234b6) popup_choice_list_window_ParamLimits

0x57d0,	// (0x000234b6) popup_choice_list_window

0x59f2,	// (0x000236d8) choice_list_pane

0x5a74,	// (0x0002375a) cell_toolbar_pane_t1

0x5a9c,	// (0x00023782) toolbar_button_pane_ParamLimits

0x6948,	// (0x0002462e) ai_gene_pane_1_t2_ParamLimits

0x6948,	// (0x0002462e) ai_gene_pane_1_t2

0x0001,

0xf941,	// (0x0002d627) ai_gene_pane_1_t_ParamLimits

0xf941,	// (0x0002d627) ai_gene_pane_1_t

0xa6ad,	// (0x00028393) scroll_sc2_left_pane_g1

0xa6ad,	// (0x00028393) scroll_sc2_right_pane_g1

0x57b6,	// (0x0002349c) bg_popup_sub_pane_cp10

0xa6b7,	// (0x0002839d) list_choice_list_pane

0xa6ce,	// (0x000283b4) list_single_choice_list_pane_ParamLimits

0xa6ce,	// (0x000283b4) list_single_choice_list_pane

0xa6e2,	// (0x000283c8) list_single_choice_list_pane_g1

0xa6ea,	// (0x000283d0) list_single_choice_list_pane_t1_ParamLimits

0xa6ea,	// (0x000283d0) list_single_choice_list_pane_t1

0xa6ff,	// (0x000283e5) choice_list_pane_g1

0xa707,	// (0x000283ed) choice_list_pane_t1

0x4467,	// (0x0002214d) input_focus_pane_cp11

0x4dde,	// (0x00022ac4) title_pane_stacon_g2_ParamLimits

0x4dde,	// (0x00022ac4) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0002d3ee) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0002d3ee) title_pane_stacon_g

0x5554,	// (0x0002323a) cursor_press_pane

0x916a,	// (0x00026e50) popup_fep_hwr_window_ParamLimits

0x916a,	// (0x00026e50) popup_fep_hwr_window

0x5824,	// (0x0002350a) popup_fep_vkb_window_ParamLimits

0x5824,	// (0x0002350a) popup_fep_vkb_window

0xa715,	// (0x000283fb) cursor_press_pane_g1

0x0002,

0xfb53,	// (0x0002d839) fep_vkb_side_pane_g_ParamLimits

0xa756,	// (0x0002843c) fep_hwr_candidate_pane_ParamLimits

0xa756,	// (0x0002843c) fep_hwr_candidate_pane

0xa780,	// (0x00028466) fep_hwr_side_pane_ParamLimits

0xa780,	// (0x00028466) fep_hwr_side_pane

0xa7a0,	// (0x00028486) fep_hwr_top_pane_ParamLimits

0xa7a0,	// (0x00028486) fep_hwr_top_pane

0xa7b8,	// (0x0002849e) fep_hwr_write_pane_ParamLimits

0xa7b8,	// (0x0002849e) fep_hwr_write_pane

0xfb53,	// (0x0002d839) fep_vkb_side_pane_g

0xa7f2,	// (0x000284d8) fep_hwr_top_pane_g1

0xa804,	// (0x000284ea) fep_hwr_top_pane_g2

0xa816,	// (0x000284fc) fep_hwr_top_pane_g3

0x0002,

0xfb2f,	// (0x0002d815) fep_hwr_top_pane_g

0xa82b,	// (0x00028511) fep_hwr_top_text_pane

0x5045,	// (0x00022d2b) fep_hwr_top_text_pane_g1

0xa903,	// (0x000285e9) fep_hwr_top_text_pane_t1

0xa953,	// (0x00028639) fep_hwr_candidate_pane_g1

0xabc6,	// (0x000288ac) fep_vkb_keypad_pane_g3_ParamLimits

0xabc6,	// (0x000288ac) fep_vkb_keypad_pane_g3

0xabee,	// (0x000288d4) fep_vkb_keypad_pane_g4_ParamLimits

0xabee,	// (0x000288d4) fep_vkb_keypad_pane_g4

0xac5d,	// (0x00028943) fep_vkb_bottom_pane_g2_ParamLimits

0xac5d,	// (0x00028943) fep_vkb_bottom_pane_g2

0x0001,

0xfb5a,	// (0x0002d840) fep_vkb_bottom_pane_g_ParamLimits

0xfb5a,	// (0x0002d840) fep_vkb_bottom_pane_g

0xa6ad,	// (0x00028393) cell_vkb_side_pane_g2

0x0001,

0xfb64,	// (0x0002d84a) cell_vkb_side_pane_g

0xace8,	// (0x000289ce) cell_vkb_side_pane_t1

0xacf6,	// (0x000289dc) cell_vkb_side_pane_t1_copy1

0xa6ad,	// (0x00028393) bg_fep_vkb_candidate_pane_g2

0xae28,	// (0x00028b0e) cell_vkb_candidate_pane_ParamLimits

0xa97a,	// (0x00028660) aid_size_cell_vkb_ParamLimits

0xa97a,	// (0x00028660) aid_size_cell_vkb

0xae28,	// (0x00028b0e) cell_vkb_candidate_pane

0xae5e,	// (0x00028b44) bg_popup_fep_shadow_pane_g1

0xaa08,	// (0x000286ee) fep_vkb_bottom_pane_ParamLimits

0xaa08,	// (0x000286ee) fep_vkb_bottom_pane

0xaa45,	// (0x0002872b) fep_vkb_candidate_pane_ParamLimits

0xaa45,	// (0x0002872b) fep_vkb_candidate_pane

0xaa61,	// (0x00028747) fep_vkb_keypad_pane_ParamLimits

0xaa61,	// (0x00028747) fep_vkb_keypad_pane

0xaaa7,	// (0x0002878d) fep_vkb_side_pane_ParamLimits

0xaaa7,	// (0x0002878d) fep_vkb_side_pane

0xaae3,	// (0x000287c9) fep_vkb_top_pane_ParamLimits

0xaae3,	// (0x000287c9) fep_vkb_top_pane

0xab1f,	// (0x00028805) fep_vkb_top_pane_g1_ParamLimits

0xab1f,	// (0x00028805) fep_vkb_top_pane_g1

0xab2e,	// (0x00028814) fep_vkb_top_pane_g2_ParamLimits

0xab2e,	// (0x00028814) fep_vkb_top_pane_g2

0xab3d,	// (0x00028823) fep_vkb_top_pane_g3_ParamLimits

0xab3d,	// (0x00028823) fep_vkb_top_pane_g3

0x0003,

0xfb4a,	// (0x0002d830) fep_vkb_top_pane_g_ParamLimits

0xfb4a,	// (0x0002d830) fep_vkb_top_pane_g

0xab5b,	// (0x00028841) fep_vkb_top_text_pane_ParamLimits

0xab5b,	// (0x00028841) fep_vkb_top_text_pane

0xab6c,	// (0x00028852) fep_vkb_side_pane_g1_ParamLimits

0xab6c,	// (0x00028852) fep_vkb_side_pane_g1

0xabb5,	// (0x0002889b) grid_vkb_side_pane_ParamLimits

0xabb5,	// (0x0002889b) grid_vkb_side_pane

0xae66,	// (0x00028b4c) bg_popup_fep_shadow_pane_g2

0xae6f,	// (0x00028b55) bg_popup_fep_shadow_pane_g3

0xae77,	// (0x00028b5d) bg_popup_fep_shadow_pane_g4

0xae80,	// (0x00028b66) bg_popup_fep_shadow_pane_g5

0xae8a,	// (0x00028b70) bg_popup_fep_shadow_pane_g6

0xae92,	// (0x00028b78) bg_popup_fep_shadow_pane_g7

0x4b9d,	// (0x00022883) bg_popup_fep_shadow_pane_g8

0xac0c,	// (0x000288f2) grid_vkb_keypad_number_pane_ParamLimits

0xac0c,	// (0x000288f2) grid_vkb_keypad_number_pane

0xac1c,	// (0x00028902) grid_vkb_keypad_pane_ParamLimits

0xac1c,	// (0x00028902) grid_vkb_keypad_pane

0xac42,	// (0x00028928) fep_vkb_bottom_pane_g1_ParamLimits

0xac42,	// (0x00028928) fep_vkb_bottom_pane_g1

0xac6b,	// (0x00028951) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xac6b,	// (0x00028951) grid_vkb_keypad_bottom_left_pane

0xac80,	// (0x00028966) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xac80,	// (0x00028966) grid_vkb_keypad_bottom_right_pane

0xac95,	// (0x0002897b) fep_vkb_top_text_pane_g1

0xacb0,	// (0x00028996) fep_vkb_top_text_pane_t1

0xacc5,	// (0x000289ab) cell_vkb_side_pane_ParamLimits

0xacc5,	// (0x000289ab) cell_vkb_side_pane

0xa6ad,	// (0x00028393) cell_vkb_side_pane_g1

0xad04,	// (0x000289ea) cell_vkb_keypad_pane_ParamLimits

0xad04,	// (0x000289ea) cell_vkb_keypad_pane

0xad7f,	// (0x00028a65) cell_vkb_keypad_pane_g1

0x0008,

0xfb77,	// (0x0002d85d) bg_popup_fep_shadow_pane_g

0xaea4,	// (0x00028b8a) cell_hwr_side_pane_g1

0xaea4,	// (0x00028b8a) cell_hwr_side_pane_g2

0xad89,	// (0x00028a6f) cell_vkb_keypad_pane_t1

0xad97,	// (0x00028a7d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xad97,	// (0x00028a7d) cell_vkb_keypad_bottom_left_pane

0xadb4,	// (0x00028a9a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xadb4,	// (0x00028a9a) cell_vkb_keypad_bottom_right_pane

0xa6ad,	// (0x00028393) cell_vkb_keypad_bottom_left_pane_g1

0xa6ad,	// (0x00028393) cell_vkb_keypad_bottom_right_pane_g1

0xaded,	// (0x00028ad3) cell_vkb_keypad_number_pane_ParamLimits

0xaded,	// (0x00028ad3) cell_vkb_keypad_number_pane

0xae0c,	// (0x00028af2) cell_vkb_keypad_number_pane_g1

0xae16,	// (0x00028afc) cell_vkb_keypad_number_pane_g2

0xae1f,	// (0x00028b05) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb69,	// (0x0002d84f) cell_vkb_keypad_number_pane_g

0xad89,	// (0x00028a6f) cell_vkb_keypad_number_pane_t1

0xae45,	// (0x00028b2b) fep_vkb_candidate_pane_g1

0x0001,

0xfb8a,	// (0x0002d870) cell_hwr_side_pane_g

0xaeae,	// (0x00028b94) cell_hwr_side_pane_t1

0xaebc,	// (0x00028ba2) cell_hwr_side_pane_t1_copy1

0xaeca,	// (0x00028bb0) cell_hwr_candidate_pane_g1

0xaef9,	// (0x00028bdf) cell_hwr_candidate_pane_t1

0xa6ad,	// (0x00028393) cell_vkb_candidate_pane_g2

0xaf4d,	// (0x00028c33) cell_vkb_candidate_pane_t1

0xa71d,	// (0x00028403) bg_popup_fep_shadow_pane_ParamLimits

0xa71d,	// (0x00028403) bg_popup_fep_shadow_pane

0xa7d2,	// (0x000284b8) bg_fep_hwr_top_pane_g4

0xa840,	// (0x00028526) bg_hwr_side_pane_g1_ParamLimits

0xa840,	// (0x00028526) bg_hwr_side_pane_g1

0xa873,	// (0x00028559) cell_hwr_side_pane_ParamLimits

0xa873,	// (0x00028559) cell_hwr_side_pane

0xa8ae,	// (0x00028594) fep_hwr_write_pane_g1_ParamLimits

0xa8ae,	// (0x00028594) fep_hwr_write_pane_g1

0xa8bb,	// (0x000285a1) fep_hwr_write_pane_g2_ParamLimits

0xa8bb,	// (0x000285a1) fep_hwr_write_pane_g2

0xa8c8,	// (0x000285ae) fep_hwr_write_pane_g3_ParamLimits

0xa8c8,	// (0x000285ae) fep_hwr_write_pane_g3

0xa8d6,	// (0x000285bc) fep_hwr_write_pane_g4_ParamLimits

0xa8d6,	// (0x000285bc) fep_hwr_write_pane_g4

0x0005,

0xfb36,	// (0x0002d81c) fep_hwr_write_pane_g_ParamLimits

0xfb36,	// (0x0002d81c) fep_hwr_write_pane_g

0xa7d2,	// (0x000284b8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa7d2,	// (0x000284b8) bg_fep_hwr_candidate_pane_g2

0xa911,	// (0x000285f7) cell_hwr_candidate_pane_ParamLimits

0xa911,	// (0x000285f7) cell_hwr_candidate_pane

0xa953,	// (0x00028639) fep_hwr_candidate_pane_g1_ParamLimits

0xa9a8,	// (0x0002868e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xa9a8,	// (0x0002868e) bg_popup_fep_shadow_pane_cp2

0xab4d,	// (0x00028833) fep_vkb_top_pane_g4_ParamLimits

0xab4d,	// (0x00028833) fep_vkb_top_pane_g4

0xab93,	// (0x00028879) fep_vkb_side_pane_g2_ParamLimits

0xab93,	// (0x00028879) fep_vkb_side_pane_g2

0xe266,	// (0x0002bf4c) list_setting_pane_t4_ParamLimits

0xe266,	// (0x0002bf4c) list_setting_pane_t4

0xe2f8,	// (0x0002bfde) list_setting_number_pane_t5_ParamLimits

0xe2f8,	// (0x0002bfde) list_setting_number_pane_t5

0x8b11,	// (0x000267f7) list_double_heading_pane_cp2_ParamLimits

0x8b11,	// (0x000267f7) list_double_heading_pane_cp2

0x4b38,	// (0x0002281e) list_double_heading_pane_g1_cp2_ParamLimits

0x4b38,	// (0x0002281e) list_double_heading_pane_g1_cp2

0x4b44,	// (0x0002282a) list_double_heading_pane_g2_cp2_ParamLimits

0x4b44,	// (0x0002282a) list_double_heading_pane_g2_cp2

0xaf5b,	// (0x00028c41) list_double_heading_pane_t1_cp2_ParamLimits

0xaf5b,	// (0x00028c41) list_double_heading_pane_t1_cp2

0xaf71,	// (0x00028c57) list_double_heading_pane_t2_cp2_ParamLimits

0xaf71,	// (0x00028c57) list_double_heading_pane_t2_cp2

0x445f,	// (0x00022145) aid_value_unit2

0x83dc,	// (0x000260c2) popup_preview_fixed_window

0x460a,	// (0x000222f0) bg_popup_preview_window_pane_cp02

0xaf83,	// (0x00028c69) list_preview_fixed_pane

0xafc9,	// (0x00028caf) list_empty_pane_fp_ParamLimits

0xafc9,	// (0x00028caf) list_empty_pane_fp

0xafc9,	// (0x00028caf) list_single_cale_day_pane_fp_ParamLimits

0xafc9,	// (0x00028caf) list_single_cale_day_pane_fp

0xafc9,	// (0x00028caf) list_single_graphic_heading_pane_fp_ParamLimits

0xafc9,	// (0x00028caf) list_single_graphic_heading_pane_fp

0xafc9,	// (0x00028caf) list_single_graphic_pane_fp_ParamLimits

0xafc9,	// (0x00028caf) list_single_graphic_pane_fp

0xafc9,	// (0x00028caf) list_single_heading_pane_fp_ParamLimits

0xafc9,	// (0x00028caf) list_single_heading_pane_fp

0xafc9,	// (0x00028caf) list_single_pane_fp_ParamLimits

0xafc9,	// (0x00028caf) list_single_pane_fp

0xafe0,	// (0x00028cc6) list_single_pane_fp_g1_ParamLimits

0xafe0,	// (0x00028cc6) list_single_pane_fp_g1

0xe0ca,	// (0x0002bdb0) list_single_pane_fp_g2_ParamLimits

0xe0ca,	// (0x0002bdb0) list_single_pane_fp_g2

0xea56,	// (0x0002c73c) list_single_pane_fp_g3_ParamLimits

0xea56,	// (0x0002c73c) list_single_pane_fp_g3

0xafec,	// (0x00028cd2) list_single_pane_fp_g4_ParamLimits

0xafec,	// (0x00028cd2) list_single_pane_fp_g4

0x0003,

0xfb9d,	// (0x0002d883) list_single_pane_fp_g_ParamLimits

0xfb9d,	// (0x0002d883) list_single_pane_fp_g

0xea6a,	// (0x0002c750) list_single_pane_fp_t1_ParamLimits

0xea6a,	// (0x0002c750) list_single_pane_fp_t1

0xea81,	// (0x0002c767) list_single_graphic_pane_fp_g1_ParamLimits

0xea81,	// (0x0002c767) list_single_graphic_pane_fp_g1

0xafe0,	// (0x00028cc6) list_single_graphic_pane_fp_g2_ParamLimits

0xafe0,	// (0x00028cc6) list_single_graphic_pane_fp_g2

0xe0ca,	// (0x0002bdb0) list_single_graphic_pane_fp_g3_ParamLimits

0xe0ca,	// (0x0002bdb0) list_single_graphic_pane_fp_g3

0xea56,	// (0x0002c73c) list_single_graphic_pane_fp_g4_ParamLimits

0xea56,	// (0x0002c73c) list_single_graphic_pane_fp_g4

0xafec,	// (0x00028cd2) list_single_graphic_pane_fp_g5_ParamLimits

0xafec,	// (0x00028cd2) list_single_graphic_pane_fp_g5

0x0004,

0xfba6,	// (0x0002d88c) list_single_graphic_pane_fp_g_ParamLimits

0xfba6,	// (0x0002d88c) list_single_graphic_pane_fp_g

0xea8d,	// (0x0002c773) list_single_graphic_pane_fp_t1_ParamLimits

0xea8d,	// (0x0002c773) list_single_graphic_pane_fp_t1

0xea81,	// (0x0002c767) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xea81,	// (0x0002c767) list_single_graphic_heading_pane_fp_g1

0xafe0,	// (0x00028cc6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xafe0,	// (0x00028cc6) list_single_graphic_heading_pane_fp_g2

0xe0ca,	// (0x0002bdb0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe0ca,	// (0x0002bdb0) list_single_graphic_heading_pane_fp_g3

0xea56,	// (0x0002c73c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xea56,	// (0x0002c73c) list_single_graphic_heading_pane_fp_g4

0xafec,	// (0x00028cd2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xafec,	// (0x00028cd2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba6,	// (0x0002d88c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0002d88c) list_single_graphic_heading_pane_fp_g

0xeaa3,	// (0x0002c789) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xeaa3,	// (0x0002c789) list_single_graphic_heading_pane_fp_t1

0xeab9,	// (0x0002c79f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xeab9,	// (0x0002c79f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x0002d897) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x0002d897) list_single_graphic_heading_pane_fp_t

0xeacb,	// (0x0002c7b1) list_single_cale_day_pane_fp_g1_ParamLimits

0xeacb,	// (0x0002c7b1) list_single_cale_day_pane_fp_g1

0xaff8,	// (0x00028cde) list_single_cale_day_pane_fp_g2_ParamLimits

0xaff8,	// (0x00028cde) list_single_cale_day_pane_fp_g2

0xeb03,	// (0x0002c7e9) list_single_cale_day_pane_fp_g3_ParamLimits

0xeb03,	// (0x0002c7e9) list_single_cale_day_pane_fp_g3

0xeb2b,	// (0x0002c811) list_single_cale_day_pane_fp_g4_ParamLimits

0xeb2b,	// (0x0002c811) list_single_cale_day_pane_fp_g4

0xeb4f,	// (0x0002c835) list_single_cale_day_pane_fp_g5_ParamLimits

0xeb4f,	// (0x0002c835) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb6,	// (0x0002d89c) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb6,	// (0x0002d89c) list_single_cale_day_pane_fp_g

0xeb73,	// (0x0002c859) list_single_cale_day_pane_fp_t1_ParamLimits

0xeb73,	// (0x0002c859) list_single_cale_day_pane_fp_t1

0xeb99,	// (0x0002c87f) list_single_cale_day_pane_fp_t2_ParamLimits

0xeb99,	// (0x0002c87f) list_single_cale_day_pane_fp_t2

0xebb2,	// (0x0002c898) list_single_cale_day_pane_fp_t3_ParamLimits

0xebb2,	// (0x0002c898) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc1,	// (0x0002d8a7) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc1,	// (0x0002d8a7) list_single_cale_day_pane_fp_t

0xafe0,	// (0x00028cc6) list_empty_pane_fp_g1_ParamLimits

0xafe0,	// (0x00028cc6) list_empty_pane_fp_g1

0xebcb,	// (0x0002c8b1) list_empty_pane_fp_t1

0xebd9,	// (0x0002c8bf) list_empty_pane_fp_t2

0x0001,

0xfbc8,	// (0x0002d8ae) list_empty_pane_fp_t

0xafe0,	// (0x00028cc6) list_single_heading_pane_fp_g1_ParamLimits

0xafe0,	// (0x00028cc6) list_single_heading_pane_fp_g1

0xe0ca,	// (0x0002bdb0) list_single_heading_pane_fp_g2_ParamLimits

0xe0ca,	// (0x0002bdb0) list_single_heading_pane_fp_g2

0xea56,	// (0x0002c73c) list_single_heading_pane_fp_g3_ParamLimits

0xea56,	// (0x0002c73c) list_single_heading_pane_fp_g3

0x0002,

0xfbcd,	// (0x0002d8b3) list_single_heading_pane_fp_g_ParamLimits

0xfbcd,	// (0x0002d8b3) list_single_heading_pane_fp_g

0xebe7,	// (0x0002c8cd) list_single_heading_pane_fp_t1_ParamLimits

0xebe7,	// (0x0002c8cd) list_single_heading_pane_fp_t1

0xebf9,	// (0x0002c8df) list_single_heading_pane_fp_t2_ParamLimits

0xebf9,	// (0x0002c8df) list_single_heading_pane_fp_t2

0x0001,

0xfbd4,	// (0x0002d8ba) list_single_heading_pane_fp_t_ParamLimits

0xfbd4,	// (0x0002d8ba) list_single_heading_pane_fp_t

0x4c75,	// (0x0002295b) aid_size_cell_fast

0x45ed,	// (0x000222d3) soft_indicator_pane_cp1_t1

0x4cb2,	// (0x00022998) cell_app_pane_cp2_ParamLimits

0x4cb2,	// (0x00022998) cell_app_pane_cp2

0xa73f,	// (0x00028425) fep_hwr_candidate_drop_down_list_pane

0xa96d,	// (0x00028653) fep_hwr_candidate_pane_g3_ParamLimits

0xa96d,	// (0x00028653) fep_hwr_candidate_pane_g3

0x3e95,	// (0x00021b7b) fep_hwr_candidate_pane_g4_ParamLimits

0x3e95,	// (0x00021b7b) fep_hwr_candidate_pane_g4

0x0002,

0xfb43,	// (0x0002d829) fep_hwr_candidate_pane_g_ParamLimits

0xfb43,	// (0x0002d829) fep_hwr_candidate_pane_g

0xaa34,	// (0x0002871a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xaa34,	// (0x0002871a) fep_vkb_candidate_drop_down_list_pane

0xae4d,	// (0x00028b33) fep_vkb_candidate_pane_g3

0xae55,	// (0x00028b3b) fep_vkb_candidate_pane_g4

0x0002,

0xfb70,	// (0x0002d856) fep_vkb_candidate_pane_g

0xaeca,	// (0x00028bb0) cell_hwr_candidate_pane_g1_ParamLimits

0xaed8,	// (0x00028bbe) cell_hwr_candidate_pane_g3_ParamLimits

0xaed8,	// (0x00028bbe) cell_hwr_candidate_pane_g3

0xba1f,	// (0x00029705) cell_hwr_candidate_pane_g4_ParamLimits

0xba1f,	// (0x00029705) cell_hwr_candidate_pane_g4

0x0002,

0xfb8f,	// (0x0002d875) cell_hwr_candidate_pane_g_ParamLimits

0xfb8f,	// (0x0002d875) cell_hwr_candidate_pane_g

0xaf17,	// (0x00028bfd) cell_vkb_candidate_pane_g3_ParamLimits

0xaf17,	// (0x00028bfd) cell_vkb_candidate_pane_g3

0xaf32,	// (0x00028c18) cell_vkb_candidate_pane_g4_ParamLimits

0xaf32,	// (0x00028c18) cell_vkb_candidate_pane_g4

0xba40,	// (0x00029726) cell_app_pane_cp2_g1_ParamLimits

0xba40,	// (0x00029726) cell_app_pane_cp2_g1

0xba5e,	// (0x00029744) cell_app_pane_cp2_g2_ParamLimits

0xba5e,	// (0x00029744) cell_app_pane_cp2_g2

0x0001,

0xfbd9,	// (0x0002d8bf) cell_app_pane_cp2_g_ParamLimits

0xfbd9,	// (0x0002d8bf) cell_app_pane_cp2_g

0xba6a,	// (0x00029750) cell_app_pane_cp2_t1_ParamLimits

0xba6a,	// (0x00029750) cell_app_pane_cp2_t1

0x4b1e,	// (0x00022804) grid_highlight_pane_cp1_ParamLimits

0x4b1e,	// (0x00022804) grid_highlight_pane_cp1

0xb004,	// (0x00028cea) cell_hwr_candidate_pane_cp1_ParamLimits

0xb004,	// (0x00028cea) cell_hwr_candidate_pane_cp1

0xaeca,	// (0x00028bb0) fep_hwr_candidate_drop_down_list_pane_g1

0xb023,	// (0x00028d09) fep_hwr_candidate_drop_down_list_pane_g2

0xb030,	// (0x00028d16) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0002d8c4) fep_hwr_candidate_drop_down_list_pane_g

0xb03d,	// (0x00028d23) fep_hwr_candidate_drop_down_list_scroll_pane

0xb046,	// (0x00028d2c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb046,	// (0x00028d2c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xb053,	// (0x00028d39) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb053,	// (0x00028d39) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xb060,	// (0x00028d46) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb060,	// (0x00028d46) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xb06d,	// (0x00028d53) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb06d,	// (0x00028d53) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xb088,	// (0x00028d6e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb088,	// (0x00028d6e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xb0a3,	// (0x00028d89) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb0a3,	// (0x00028d89) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xb0be,	// (0x00028da4) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb0be,	// (0x00028da4) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xb0d9,	// (0x00028dbf) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb0d9,	// (0x00028dbf) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0002d8cb) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0002d8cb) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xba7c,	// (0x00029762) cell_vkb_candidate_pane_cp1_ParamLimits

0xba7c,	// (0x00029762) cell_vkb_candidate_pane_cp1

0xab4d,	// (0x00028833) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xab4d,	// (0x00028833) fep_vkb_candidate_drop_down_list_pane_g1

0xba9c,	// (0x00029782) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xba9c,	// (0x00029782) fep_vkb_candidate_drop_down_list_pane_g2

0xbaa9,	// (0x0002978f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbaa9,	// (0x0002978f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf6,	// (0x0002d8dc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf6,	// (0x0002d8dc) fep_vkb_candidate_drop_down_list_pane_g

0xbab6,	// (0x0002979c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbab6,	// (0x0002979c) fep_vkb_candidate_drop_down_list_scroll_pane

0xbac3,	// (0x000297a9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbac3,	// (0x000297a9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbad0,	// (0x000297b6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbad0,	// (0x000297b6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbadc,	// (0x000297c2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbadc,	// (0x000297c2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbae8,	// (0x000297ce) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbae8,	// (0x000297ce) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbb09,	// (0x000297ef) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbb09,	// (0x000297ef) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbb2a,	// (0x00029810) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbb2a,	// (0x00029810) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbb4b,	// (0x00029831) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbb4b,	// (0x00029831) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbb6c,	// (0x00029852) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbb6c,	// (0x00029852) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbfd,	// (0x0002d8e3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbfd,	// (0x0002d8e3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x84e6,	// (0x000261cc) title_pane_g1_ParamLimits

0x84f3,	// (0x000261d9) title_pane_g2_ParamLimits

0xf592,	// (0x0002d278) title_pane_g_ParamLimits

0x503d,	// (0x00022d23) aid_call2_pane

0x5035,	// (0x00022d1b) aid_call_pane

0x5045,	// (0x00022d2b) popup_clock_analogue_window_g1

0x5045,	// (0x00022d2b) popup_clock_analogue_window_g2

0x8af2,	// (0x000267d8) popup_clock_analogue_window_g3

0x8afb,	// (0x000267e1) popup_clock_analogue_window_g4

0x4471,	// (0x00022157) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0002d41d) popup_clock_analogue_window_g

0x8b03,	// (0x000267e9) popup_clock_analogue_window_t1

0x8b3a,	// (0x00026820) clock_digital_number_pane_ParamLimits

0x8b3a,	// (0x00026820) clock_digital_number_pane

0x8b46,	// (0x0002682c) clock_digital_number_pane_cp02_ParamLimits

0x8b46,	// (0x0002682c) clock_digital_number_pane_cp02

0x8b52,	// (0x00026838) clock_digital_number_pane_cp03_ParamLimits

0x8b52,	// (0x00026838) clock_digital_number_pane_cp03

0x8b5e,	// (0x00026844) clock_digital_number_pane_cp04_ParamLimits

0x8b5e,	// (0x00026844) clock_digital_number_pane_cp04

0x8b6a,	// (0x00026850) clock_digital_separator_pane_ParamLimits

0x8b6a,	// (0x00026850) clock_digital_separator_pane

0x8b76,	// (0x0002685c) popup_clock_digital_window_t1_ParamLimits

0x8b76,	// (0x0002685c) popup_clock_digital_window_t1

0x4471,	// (0x00022157) clock_digital_number_pane_g1

0x4471,	// (0x00022157) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0002d428) clock_digital_number_pane_g

0x4471,	// (0x00022157) clock_digital_separator_pane_g1

0x4471,	// (0x00022157) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0002d428) clock_digital_separator_pane_g

0x9557,	// (0x0002723d) aid_fill_nsta_ParamLimits

0x9620,	// (0x00027306) indicator_nsta_pane_ParamLimits

0x599b,	// (0x00023681) popup_clock_analogue_window

0x599b,	// (0x00023681) popup_clock_digital_window

0x44d7,	// (0x000221bd) grid_indicator_nsta_pane_ParamLimits

0x74b9,	// (0x0002519f) clock_nsta_pane_t2

0x0001,

0xfad0,	// (0x0002d7b6) clock_nsta_pane_t

0x8ab6,	// (0x0002679c) aid_size_max_handle

0x8ac0,	// (0x000267a6) aid_size_min_handle

0x5554,	// (0x0002323a) editor_scroll_pane

0xbb87,	// (0x0002986d) ex_editor_pane

0x4c3d,	// (0x00022923) scroll_pane_cp13

0x4abd,	// (0x000227a3) scroll_pane_cp14

0x506f,	// (0x00022d55) scroll_pane_cp36

0x8b23,	// (0x00026809) list_single_graphic_hl_pane_cp2_ParamLimits

0x8b23,	// (0x00026809) list_single_graphic_hl_pane_cp2

0xa047,	// (0x00027d2d) list_single_graphic_hl_pane_ParamLimits

0xa047,	// (0x00027d2d) list_single_graphic_hl_pane

0xec0f,	// (0x0002c8f5) aid_size_min_hl_cp1

0xbb8f,	// (0x00029875) list_highlight_pane_cp34_ParamLimits

0xbb8f,	// (0x00029875) list_highlight_pane_cp34

0xbba0,	// (0x00029886) list_single_graphic_hl_pane_g1_ParamLimits

0xbba0,	// (0x00029886) list_single_graphic_hl_pane_g1

0xec18,	// (0x0002c8fe) list_single_graphic_hl_pane_g2_ParamLimits

0xec18,	// (0x0002c8fe) list_single_graphic_hl_pane_g2

0xec18,	// (0x0002c8fe) list_single_graphic_hl_pane_g3_ParamLimits

0xec18,	// (0x0002c8fe) list_single_graphic_hl_pane_g3

0xec24,	// (0x0002c90a) list_single_graphic_hl_pane_g4_ParamLimits

0xec24,	// (0x0002c90a) list_single_graphic_hl_pane_g4

0xec30,	// (0x0002c916) list_single_graphic_hl_pane_g5_ParamLimits

0xec30,	// (0x0002c916) list_single_graphic_hl_pane_g5

0x0004,

0xfc0e,	// (0x0002d8f4) list_single_graphic_hl_pane_g_ParamLimits

0xfc0e,	// (0x0002d8f4) list_single_graphic_hl_pane_g

0xec44,	// (0x0002c92a) list_single_graphic_hl_pane_t1_ParamLimits

0xec44,	// (0x0002c92a) list_single_graphic_hl_pane_t1

0xbbad,	// (0x00029893) aid_size_min_hl_cp2

0xbbb6,	// (0x0002989c) list_highlight_pane_cp34_cp2_ParamLimits

0xbbb6,	// (0x0002989c) list_highlight_pane_cp34_cp2

0xbba0,	// (0x00029886) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbba0,	// (0x00029886) list_single_graphic_hl_pane_g1_cp2

0xbbc3,	// (0x000298a9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbbc3,	// (0x000298a9) list_single_graphic_hl_pane_g2_cp2

0xbbcf,	// (0x000298b5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbbcf,	// (0x000298b5) list_single_graphic_hl_pane_g3_cp2

0x548b,	// (0x00023171) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x548b,	// (0x00023171) list_single_graphic_hl_pane_g4_cp2

0xbbdd,	// (0x000298c3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbbdd,	// (0x000298c3) list_single_graphic_hl_pane_g5_cp2

0x8f9f,	// (0x00026c85) control_pane_g4_ParamLimits

0x8f9f,	// (0x00026c85) control_pane_g4

0x57b6,	// (0x0002349c) bg_popup_sub_pane_cp10_ParamLimits

0xa6b7,	// (0x0002839d) list_choice_list_pane_ParamLimits

0xa6c6,	// (0x000283ac) scroll_pane_cp23

0x460a,	// (0x000222f0) bg_popup_preview_window_pane_cp02_ParamLimits

0xaf83,	// (0x00028c69) list_preview_fixed_pane_ParamLimits

0xaf99,	// (0x00028c7f) list_preview_fixed_pane_cp_ParamLimits

0xaf99,	// (0x00028c7f) list_preview_fixed_pane_cp

0xafa5,	// (0x00028c8b) popup_preview_fixed_window_g1_ParamLimits

0xafa5,	// (0x00028c8b) popup_preview_fixed_window_g1

0xafb1,	// (0x00028c97) popup_preview_fixed_window_g2_ParamLimits

0xafb1,	// (0x00028c97) popup_preview_fixed_window_g2

0x0002,

0xfb96,	// (0x0002d87c) popup_preview_fixed_window_g_ParamLimits

0xfb96,	// (0x0002d87c) popup_preview_fixed_window_g

0x89a5,	// (0x0002668b) aid_navi_side_left_pane_ParamLimits

0x89ba,	// (0x000266a0) aid_navi_side_right_pane_ParamLimits

0x89d2,	// (0x000266b8) navi_icon_pane_stacon_ParamLimits

0x89e6,	// (0x000266cc) navi_navi_pane_stacon_ParamLimits

0x89d2,	// (0x000266b8) navi_text_pane_stacon_ParamLimits

0x4467,	// (0x0002214d) main_text_info_pane

0xbc07,	// (0x000298ed) listscroll_text_info_pane

0xbc0f,	// (0x000298f5) list_text_info_pane_ParamLimits

0xbc0f,	// (0x000298f5) list_text_info_pane

0xbc1e,	// (0x00029904) scroll_pane_cp24_ParamLimits

0xbc1e,	// (0x00029904) scroll_pane_cp24

0xbc3c,	// (0x00029922) list_text_info_pane_t1_ParamLimits

0xbc3c,	// (0x00029922) list_text_info_pane_t1

0x90e8,	// (0x00026dce) popup_fast_swap2_window_ParamLimits

0x90e8,	// (0x00026dce) popup_fast_swap2_window

0xbc75,	// (0x0002995b) aid_size_cell_fast2

0x4467,	// (0x0002214d) bg_popup_window_pane_cp17

0x5e3f,	// (0x00023b25) heading_pane_cp2

0x47f0,	// (0x000224d6) listscroll_fast2_pane

0xbc7f,	// (0x00029965) grid_fast2_pane

0xbc89,	// (0x0002996f) listscroll_fast2_pane_g1

0xbc91,	// (0x00029977) listscroll_fast2_pane_g2

0x0001,

0xfc19,	// (0x0002d8ff) listscroll_fast2_pane_g

0x4c3d,	// (0x00022923) scroll_pane_cp26

0xbc9b,	// (0x00029981) cell_fast2_pane_ParamLimits

0xbc9b,	// (0x00029981) cell_fast2_pane

0xbcb0,	// (0x00029996) cell_fast2_pane_g1

0xbcb9,	// (0x0002999f) cell_fast2_pane_g2

0xbcc2,	// (0x000299a8) cell_fast2_pane_g3

0x0002,

0xfc1e,	// (0x0002d904) cell_fast2_pane_g

0x4884,	// (0x0002256a) grid_highlight_pane_cp9

0x4899,	// (0x0002257f) main_eswt_pane_ParamLimits

0x4899,	// (0x0002257f) main_eswt_pane

0xbc33,	// (0x00029919) list_single_text_info_pane

0xbcca,	// (0x000299b0) eswt_ctrl_button_pane

0xbcca,	// (0x000299b0) eswt_ctrl_canvas_pane

0xbcd2,	// (0x000299b8) eswt_ctrl_combo_pane

0xbcca,	// (0x000299b0) eswt_ctrl_default_pane

0xbcca,	// (0x000299b0) eswt_ctrl_label_pane

0xbcda,	// (0x000299c0) eswt_ctrl_wait_pane

0xbce2,	// (0x000299c8) eswt_shell_pane

0x4467,	// (0x0002214d) listscroll_eswt_app_pane

0xbd02,	// (0x000299e8) popup_eswt_tasktip_window_ParamLimits

0xbd02,	// (0x000299e8) popup_eswt_tasktip_window

0x5b98,	// (0x0002387e) bg_popup_window_pane_cp18

0xbd13,	// (0x000299f9) eswt_control_pane_g1_ParamLimits

0xbd13,	// (0x000299f9) eswt_control_pane_g1

0xbd20,	// (0x00029a06) eswt_control_pane_g2_ParamLimits

0xbd20,	// (0x00029a06) eswt_control_pane_g2

0xbd2d,	// (0x00029a13) eswt_control_pane_g3_ParamLimits

0xbd2d,	// (0x00029a13) eswt_control_pane_g3

0xbd3a,	// (0x00029a20) eswt_control_pane_g4_ParamLimits

0xbd3a,	// (0x00029a20) eswt_control_pane_g4

0x0003,

0xfc25,	// (0x0002d90b) eswt_control_pane_g_ParamLimits

0xfc25,	// (0x0002d90b) eswt_control_pane_g

0x4b1e,	// (0x00022804) bg_button_pane_ParamLimits

0x4b1e,	// (0x00022804) bg_button_pane

0x4899,	// (0x0002257f) common_borders_pane_copy2_ParamLimits

0x4899,	// (0x0002257f) common_borders_pane_copy2

0xbd47,	// (0x00029a2d) control_button_pane_g1_ParamLimits

0xbd47,	// (0x00029a2d) control_button_pane_g1

0xbd53,	// (0x00029a39) control_button_pane_g2_ParamLimits

0xbd53,	// (0x00029a39) control_button_pane_g2

0xbd5f,	// (0x00029a45) control_button_pane_g3_ParamLimits

0xbd5f,	// (0x00029a45) control_button_pane_g3

0x0002,

0xfc2e,	// (0x0002d914) control_button_pane_g_ParamLimits

0xfc2e,	// (0x0002d914) control_button_pane_g

0xbd73,	// (0x00029a59) control_button_pane_t1

0xbd81,	// (0x00029a67) control_button_pane_t2

0x0001,

0xfc35,	// (0x0002d91b) control_button_pane_t

0x5aa8,	// (0x0002378e) bg_button_pane_g1

0x5ab0,	// (0x00023796) bg_button_pane_g2

0x5ab8,	// (0x0002379e) bg_button_pane_g3

0x5ac0,	// (0x000237a6) bg_button_pane_g4

0x5ac8,	// (0x000237ae) bg_button_pane_g5

0x5ad0,	// (0x000237b6) bg_button_pane_g6

0x5ad8,	// (0x000237be) bg_button_pane_g7

0x5ae0,	// (0x000237c6) bg_button_pane_g8

0x5ae8,	// (0x000237ce) bg_button_pane_g9

0x0008,

0xf895,	// (0x0002d57b) bg_button_pane_g

0xa672,	// (0x00028358) common_borders_pane_ParamLimits

0xa672,	// (0x00028358) common_borders_pane

0xbd13,	// (0x000299f9) eswt_control_pane_g1_copy1_ParamLimits

0xbd13,	// (0x000299f9) eswt_control_pane_g1_copy1

0xbd20,	// (0x00029a06) eswt_control_pane_g2_copy1_ParamLimits

0xbd20,	// (0x00029a06) eswt_control_pane_g2_copy1

0xbd2d,	// (0x00029a13) eswt_control_pane_g3_copy1_ParamLimits

0xbd2d,	// (0x00029a13) eswt_control_pane_g3_copy1

0xbd3a,	// (0x00029a20) eswt_control_pane_g4_copy1_ParamLimits

0xbd3a,	// (0x00029a20) eswt_control_pane_g4_copy1

0xa6ad,	// (0x00028393) bg_eswt_ctrl_canvas_pane_g1

0xa672,	// (0x00028358) common_borders_pane_cp2_ParamLimits

0xa672,	// (0x00028358) common_borders_pane_cp2

0xa672,	// (0x00028358) common_borders_pane_cp3_ParamLimits

0xa672,	// (0x00028358) common_borders_pane_cp3

0xbd8f,	// (0x00029a75) separator_horizontal_pane

0xbd97,	// (0x00029a7d) separator_vertical_pane

0xbd13,	// (0x000299f9) eswt_control_pane_g1_copy2_ParamLimits

0xbd13,	// (0x000299f9) eswt_control_pane_g1_copy2

0xbd20,	// (0x00029a06) eswt_control_pane_g2_copy2_ParamLimits

0xbd20,	// (0x00029a06) eswt_control_pane_g2_copy2

0xbd2d,	// (0x00029a13) eswt_control_pane_g3_copy2_ParamLimits

0xbd2d,	// (0x00029a13) eswt_control_pane_g3_copy2

0xbd3a,	// (0x00029a20) eswt_control_pane_g4_copy2_ParamLimits

0xbd3a,	// (0x00029a20) eswt_control_pane_g4_copy2

0x4467,	// (0x0002214d) common_borders_pane_cp4

0xbda0,	// (0x00029a86) separator_horizontal_pane_g1

0xbda9,	// (0x00029a8f) separator_horizontal_pane_g2

0xbdb2,	// (0x00029a98) separator_horizontal_pane_g3

0x0002,

0xfc3a,	// (0x0002d920) separator_horizontal_pane_g

0xbd13,	// (0x000299f9) eswt_control_pane_g1_copy3_ParamLimits

0xbd13,	// (0x000299f9) eswt_control_pane_g1_copy3

0xbd20,	// (0x00029a06) eswt_control_pane_g2_copy3_ParamLimits

0xbd20,	// (0x00029a06) eswt_control_pane_g2_copy3

0xbd2d,	// (0x00029a13) eswt_control_pane_g3_copy3_ParamLimits

0xbd2d,	// (0x00029a13) eswt_control_pane_g3_copy3

0xbd3a,	// (0x00029a20) eswt_control_pane_g4_copy3_ParamLimits

0xbd3a,	// (0x00029a20) eswt_control_pane_g4_copy3

0x4467,	// (0x0002214d) common_borders_pane_cp5

0xbdbb,	// (0x00029aa1) separator_vertical_pane_g1

0xbdc4,	// (0x00029aaa) separator_vertical_pane_g2

0xbdcd,	// (0x00029ab3) separator_vertical_pane_g3

0x0002,

0xfc41,	// (0x0002d927) separator_vertical_pane_g

0xbd13,	// (0x000299f9) eswt_control_pane_g1_copy4_ParamLimits

0xbd13,	// (0x000299f9) eswt_control_pane_g1_copy4

0xbd20,	// (0x00029a06) eswt_control_pane_g2_copy4_ParamLimits

0xbd20,	// (0x00029a06) eswt_control_pane_g2_copy4

0xbd2d,	// (0x00029a13) eswt_control_pane_g3_copy4_ParamLimits

0xbd2d,	// (0x00029a13) eswt_control_pane_g3_copy4

0xbd3a,	// (0x00029a20) eswt_control_pane_g4_copy4_ParamLimits

0xbd3a,	// (0x00029a20) eswt_control_pane_g4_copy4

0xbdd6,	// (0x00029abc) eswt_ctrl_combo_button_pane

0xbdde,	// (0x00029ac4) eswt_ctrl_input_pane

0xbde6,	// (0x00029acc) popup_choice_list_window_cp70

0xbdee,	// (0x00029ad4) eswt_ctrl_input_pane_t1

0x4467,	// (0x0002214d) input_focus_pane_cp70

0xa672,	// (0x00028358) bg_button_pane_cp70_ParamLimits

0xa672,	// (0x00028358) bg_button_pane_cp70

0xbdfc,	// (0x00029ae2) eswt_ctrl_combo_button_pane_g1

0xbe04,	// (0x00029aea) wait_bar_pane_cp70

0x5b98,	// (0x0002387e) bg_popup_window_pane_cp70_ParamLimits

0x5b98,	// (0x0002387e) bg_popup_window_pane_cp70

0xbe0c,	// (0x00029af2) popup_eswt_tasktip_window_t1

0xbe22,	// (0x00029b08) wait_bar_pane_cp71_ParamLimits

0xbe22,	// (0x00029b08) wait_bar_pane_cp71

0xbe2e,	// (0x00029b14) grid_eswt_app_pane

0x4e84,	// (0x00022b6a) scroll_pane_cp70

0xbe37,	// (0x00029b1d) cell_eswt_app_pane_ParamLimits

0xbe37,	// (0x00029b1d) cell_eswt_app_pane

0xbe6b,	// (0x00029b51) cell_eswt_app_pane_g1_ParamLimits

0xbe6b,	// (0x00029b51) cell_eswt_app_pane_g1

0xbe9a,	// (0x00029b80) cell_eswt_app_pane_g2_ParamLimits

0xbe9a,	// (0x00029b80) cell_eswt_app_pane_g2

0x0001,

0xfc48,	// (0x0002d92e) cell_eswt_app_pane_g_ParamLimits

0xfc48,	// (0x0002d92e) cell_eswt_app_pane_g

0xbec3,	// (0x00029ba9) cell_eswt_app_pane_t1_ParamLimits

0xbec3,	// (0x00029ba9) cell_eswt_app_pane_t1

0xbef5,	// (0x00029bdb) grid_highlight_pane_cp70_ParamLimits

0xbef5,	// (0x00029bdb) grid_highlight_pane_cp70

0x5427,	// (0x0002310d) set_content_pane_g1

0x572b,	// (0x00023411) status_small_volume_pane

0xb0f4,	// (0x00028dda) status_small_volume_pane_g1

0xb0fc,	// (0x00028de2) volume_small2_pane

0xb105,	// (0x00028deb) volume_small2_pane_g1

0xb10e,	// (0x00028df4) volume_small2_pane_g2

0xb117,	// (0x00028dfd) volume_small2_pane_g3

0xb120,	// (0x00028e06) volume_small2_pane_g4

0xb129,	// (0x00028e0f) volume_small2_pane_g5

0xb132,	// (0x00028e18) volume_small2_pane_g6

0xb13b,	// (0x00028e21) volume_small2_pane_g7

0xb144,	// (0x00028e2a) volume_small2_pane_g8

0xb14d,	// (0x00028e33) volume_small2_pane_g9

0xb156,	// (0x00028e3c) volume_small2_pane_g10

0x0009,

0xfc4d,	// (0x0002d933) volume_small2_pane_g

0xac95,	// (0x0002897b) fep_vkb_top_text_pane_g1_ParamLimits

0xacb0,	// (0x00028996) fep_vkb_top_text_pane_t1_ParamLimits

0xafbd,	// (0x00028ca3) popup_preview_fixed_window_g3_ParamLimits

0xafbd,	// (0x00028ca3) popup_preview_fixed_window_g3

0x94ea,	// (0x000271d0) popup_toolbar_trans_pane

0x9edc,	// (0x00027bc2) aid_height_set_list_ParamLimits

0x6a02,	// (0x000246e8) aid_size_parent_ParamLimits

0x57b6,	// (0x0002349c) list_highlight_pane_cp2_ParamLimits

0x5427,	// (0x0002310d) set_content_pane_g1_ParamLimits

0xe7be,	// (0x0002c4a4) list_single_image_pane_ParamLimits

0xe7be,	// (0x0002c4a4) list_single_image_pane

0xbf01,	// (0x00029be7) aid_size_cell_image_ParamLimits

0xbf01,	// (0x00029be7) aid_size_cell_image

0xbf0e,	// (0x00029bf4) grid_single_image_pane_ParamLimits

0xbf0e,	// (0x00029bf4) grid_single_image_pane

0x4b38,	// (0x0002281e) list_single_image_pane_g1_ParamLimits

0x4b38,	// (0x0002281e) list_single_image_pane_g1

0x4b44,	// (0x0002282a) list_single_image_pane_g2_ParamLimits

0x4b44,	// (0x0002282a) list_single_image_pane_g2

0x0001,

0xfc62,	// (0x0002d948) list_single_image_pane_g_ParamLimits

0xfc62,	// (0x0002d948) list_single_image_pane_g

0xbf1a,	// (0x00029c00) list_single_image_pane_t1_ParamLimits

0xbf1a,	// (0x00029c00) list_single_image_pane_t1

0xbf30,	// (0x00029c16) cell_image_list_pane_ParamLimits

0xbf30,	// (0x00029c16) cell_image_list_pane

0xbf44,	// (0x00029c2a) cell_image_list_pane_g1

0xbf4d,	// (0x00029c33) cell_image_list_pane_g2

0x0001,

0xfc67,	// (0x0002d94d) cell_image_list_pane_g

0xbf56,	// (0x00029c3c) aid_size_cell_tb_trans_pane

0x4b1e,	// (0x00022804) bg_tb_trans_pane

0xbf68,	// (0x00029c4e) grid_tb_trans_pane

0x5aa8,	// (0x0002378e) bg_tb_trans_pane_g1

0x5ab0,	// (0x00023796) bg_tb_trans_pane_g2

0x5ab8,	// (0x0002379e) bg_tb_trans_pane_g3

0x5ac0,	// (0x000237a6) bg_tb_trans_pane_g4

0x5ac8,	// (0x000237ae) bg_tb_trans_pane_g5

0x5ae0,	// (0x000237c6) bg_tb_trans_pane_g6

0x5ae8,	// (0x000237ce) bg_tb_trans_pane_g7

0x5ad0,	// (0x000237b6) bg_tb_trans_pane_g8

0x5ad8,	// (0x000237be) bg_tb_trans_pane_g9

0x0008,

0xfc6c,	// (0x0002d952) bg_tb_trans_pane_g

0xbf7c,	// (0x00029c62) cell_toolbar_trans_pane_ParamLimits

0xbf7c,	// (0x00029c62) cell_toolbar_trans_pane

0xa6ad,	// (0x00028393) cell_toolbar_trans_pane_g1

0xa40c,	// (0x000280f2) list_form2_midp_pane_t1

0xa41a,	// (0x00028100) list_form2_midp_pane_t2

0x0001,

0xfb09,	// (0x0002d7ef) list_form2_midp_pane_t

0x754c,	// (0x00025232) scroll_pane_cp51_ParamLimits

0x76c2,	// (0x000253a8) form2_midp_wait_pane_g1

0x76cb,	// (0x000253b1) form2_midp_wait_pane_g2

0x76d4,	// (0x000253ba) form2_midp_wait_pane_g3

0x0002,

0xfb1e,	// (0x0002d804) form2_midp_wait_pane_g

0x44d7,	// (0x000221bd) list_highlight_pane_cp21_ParamLimits

0x76f4,	// (0x000253da) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7703,	// (0x000253e9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe74a,	// (0x0002c430) list_single_2graphic_im_pane_ParamLimits

0xe74a,	// (0x0002c430) list_single_2graphic_im_pane

0xbfa2,	// (0x00029c88) list_single_2graphic_im_pane_g1_ParamLimits

0xbfa2,	// (0x00029c88) list_single_2graphic_im_pane_g1

0xbfb3,	// (0x00029c99) list_single_2graphic_im_pane_g2_ParamLimits

0xbfb3,	// (0x00029c99) list_single_2graphic_im_pane_g2

0xbfbf,	// (0x00029ca5) list_single_2graphic_im_pane_g3_ParamLimits

0xbfbf,	// (0x00029ca5) list_single_2graphic_im_pane_g3

0x0003,

0xfc7f,	// (0x0002d965) list_single_2graphic_im_pane_g_ParamLimits

0xfc7f,	// (0x0002d965) list_single_2graphic_im_pane_g

0xbfdf,	// (0x00029cc5) list_single_2graphic_im_pane_t1_ParamLimits

0xbfdf,	// (0x00029cc5) list_single_2graphic_im_pane_t1

0xafc9,	// (0x00028caf) list_single_graphic_2heading_pane_fp_ParamLimits

0xafc9,	// (0x00028caf) list_single_graphic_2heading_pane_fp

0xea81,	// (0x0002c767) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xea81,	// (0x0002c767) list_single_graphic_2heading_pane_fp_g1

0xafe0,	// (0x00028cc6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xafe0,	// (0x00028cc6) list_single_graphic_2heading_pane_fp_g2

0xe0ca,	// (0x0002bdb0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe0ca,	// (0x0002bdb0) list_single_graphic_2heading_pane_fp_g3

0xea56,	// (0x0002c73c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xea56,	// (0x0002c73c) list_single_graphic_2heading_pane_fp_g4

0xafec,	// (0x00028cd2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xafec,	// (0x00028cd2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba6,	// (0x0002d88c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0002d88c) list_single_graphic_2heading_pane_fp_g

0xec5a,	// (0x0002c940) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xec5a,	// (0x0002c940) list_single_graphic_2heading_pane_fp_t1

0xeab9,	// (0x0002c79f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xeab9,	// (0x0002c79f) list_single_graphic_2heading_pane_fp_t2

0xec70,	// (0x0002c956) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xec70,	// (0x0002c956) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc88,	// (0x0002d96e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc88,	// (0x0002d96e) list_single_graphic_2heading_pane_fp_t

0xa8eb,	// (0x000285d1) fep_hwr_write_pane_g5_ParamLimits

0xa8eb,	// (0x000285d1) fep_hwr_write_pane_g5

0xa8f7,	// (0x000285dd) fep_hwr_write_pane_g6_ParamLimits

0xa8f7,	// (0x000285dd) fep_hwr_write_pane_g6

0xbce2,	// (0x000299c8) eswt_shell_pane_ParamLimits

0x5b98,	// (0x0002387e) bg_popup_window_pane_cp18_ParamLimits

0x6b5f,	// (0x00024845) heading_pane_cp70

0xbe0c,	// (0x00029af2) popup_eswt_tasktip_window_t1_ParamLimits

0x9597,	// (0x0002727d) aid_touch_tab_arrow_left

0x95a6,	// (0x0002728c) aid_touch_tab_arrow_right

0x8504,	// (0x000261ea) title_pane_g3_ParamLimits

0x8504,	// (0x000261ea) title_pane_g3

0x4add,	// (0x000227c3) set_value_pane_g1

0x94ea,	// (0x000271d0) popup_toolbar_trans_pane_ParamLimits

0xbf56,	// (0x00029c3c) aid_size_cell_tb_trans_pane_ParamLimits

0x4b1e,	// (0x00022804) bg_tb_trans_pane_ParamLimits

0xbf68,	// (0x00029c4e) grid_tb_trans_pane_ParamLimits

0x460a,	// (0x000222f0) cont_note_pane_ParamLimits

0x460a,	// (0x000222f0) cont_note_pane

0x4899,	// (0x0002257f) cont_snote2_single_text_pane_ParamLimits

0x4899,	// (0x0002257f) cont_snote2_single_text_pane

0x4899,	// (0x0002257f) cont_snote2_single_graphic_pane_ParamLimits

0x4899,	// (0x0002257f) cont_snote2_single_graphic_pane

0x6024,	// (0x00023d0a) cont_note_wait_pane_ParamLimits

0x6024,	// (0x00023d0a) cont_note_wait_pane

0x6024,	// (0x00023d0a) cont_note_image_pane_ParamLimits

0x6024,	// (0x00023d0a) cont_note_image_pane

0xc010,	// (0x00029cf6) popup_note2_window_g1_ParamLimits

0xc010,	// (0x00029cf6) popup_note2_window_g1

0xc041,	// (0x00029d27) popup_note2_window_t1_ParamLimits

0xc041,	// (0x00029d27) popup_note2_window_t1

0xc086,	// (0x00029d6c) popup_note2_window_t2_ParamLimits

0xc086,	// (0x00029d6c) popup_note2_window_t2

0xc0cb,	// (0x00029db1) popup_note2_window_t3_ParamLimits

0xc0cb,	// (0x00029db1) popup_note2_window_t3

0xc110,	// (0x00029df6) popup_note2_window_t4_ParamLimits

0xc110,	// (0x00029df6) popup_note2_window_t4

0x4682,	// (0x00022368) popup_note2_window_t5_ParamLimits

0x4682,	// (0x00022368) popup_note2_window_t5

0x0004,

0xfc94,	// (0x0002d97a) popup_note2_window_t_ParamLimits

0xfc94,	// (0x0002d97a) popup_note2_window_t

0xc13f,	// (0x00029e25) popup_note2_image_window_g1_ParamLimits

0xc13f,	// (0x00029e25) popup_note2_image_window_g1

0xc14b,	// (0x00029e31) popup_note2_image_window_g2_ParamLimits

0xc14b,	// (0x00029e31) popup_note2_image_window_g2

0x0001,

0xfc9f,	// (0x0002d985) popup_note2_image_window_g_ParamLimits

0xfc9f,	// (0x0002d985) popup_note2_image_window_g

0xc15d,	// (0x00029e43) popup_note2_image_window_t1_ParamLimits

0xc15d,	// (0x00029e43) popup_note2_image_window_t1

0xc175,	// (0x00029e5b) popup_note2_image_window_t2_ParamLimits

0xc175,	// (0x00029e5b) popup_note2_image_window_t2

0xc18d,	// (0x00029e73) popup_note2_image_window_t3_ParamLimits

0xc18d,	// (0x00029e73) popup_note2_image_window_t3

0x0002,

0xfca4,	// (0x0002d98a) popup_note2_image_window_t_ParamLimits

0xfca4,	// (0x0002d98a) popup_note2_image_window_t

0x6032,	// (0x00023d18) popup_note2_wait_window_g1_ParamLimits

0x6032,	// (0x00023d18) popup_note2_wait_window_g1

0x603e,	// (0x00023d24) popup_note2_wait_window_g2_ParamLimits

0x603e,	// (0x00023d24) popup_note2_wait_window_g2

0x604a,	// (0x00023d30) popup_note2_wait_window_g3_ParamLimits

0x604a,	// (0x00023d30) popup_note2_wait_window_g3

0x0002,

0xf877,	// (0x0002d55d) popup_note2_wait_window_g_ParamLimits

0xf877,	// (0x0002d55d) popup_note2_wait_window_g

0xc1a9,	// (0x00029e8f) popup_note2_wait_window_t1_ParamLimits

0xc1a9,	// (0x00029e8f) popup_note2_wait_window_t1

0xc1c7,	// (0x00029ead) popup_note2_wait_window_t2_ParamLimits

0xc1c7,	// (0x00029ead) popup_note2_wait_window_t2

0xc1e5,	// (0x00029ecb) popup_note2_wait_window_t3_ParamLimits

0xc1e5,	// (0x00029ecb) popup_note2_wait_window_t3

0xc1f7,	// (0x00029edd) popup_note2_wait_window_t4_ParamLimits

0xc1f7,	// (0x00029edd) popup_note2_wait_window_t4

0x0003,

0xfcab,	// (0x0002d991) popup_note2_wait_window_t_ParamLimits

0xfcab,	// (0x0002d991) popup_note2_wait_window_t

0xc209,	// (0x00029eef) wait_bar2_pane_ParamLimits

0xc209,	// (0x00029eef) wait_bar2_pane

0xc221,	// (0x00029f07) popup_snote2_single_text_window_g1_ParamLimits

0xc221,	// (0x00029f07) popup_snote2_single_text_window_g1

0xc249,	// (0x00029f2f) popup_snote2_single_text_window_t1_ParamLimits

0xc249,	// (0x00029f2f) popup_snote2_single_text_window_t1

0xc295,	// (0x00029f7b) popup_snote2_single_text_window_t2_ParamLimits

0xc295,	// (0x00029f7b) popup_snote2_single_text_window_t2

0xc2e1,	// (0x00029fc7) popup_snote2_single_text_window_t3_ParamLimits

0xc2e1,	// (0x00029fc7) popup_snote2_single_text_window_t3

0xc322,	// (0x0002a008) popup_snote2_single_text_window_t4_ParamLimits

0xc322,	// (0x0002a008) popup_snote2_single_text_window_t4

0xc358,	// (0x0002a03e) popup_snote2_single_text_window_t5_ParamLimits

0xc358,	// (0x0002a03e) popup_snote2_single_text_window_t5

0x0004,

0xfcb4,	// (0x0002d99a) popup_snote2_single_text_window_t_ParamLimits

0xfcb4,	// (0x0002d99a) popup_snote2_single_text_window_t

0xc383,	// (0x0002a069) popup_snote2_single_graphic_window_g1_ParamLimits

0xc383,	// (0x0002a069) popup_snote2_single_graphic_window_g1

0xc3ab,	// (0x0002a091) popup_snote2_single_graphic_window_g2_ParamLimits

0xc3ab,	// (0x0002a091) popup_snote2_single_graphic_window_g2

0x0001,

0xfcbf,	// (0x0002d9a5) popup_snote2_single_graphic_window_g_ParamLimits

0xfcbf,	// (0x0002d9a5) popup_snote2_single_graphic_window_g

0xc3d3,	// (0x0002a0b9) popup_snote2_single_graphic_window_t1_ParamLimits

0xc3d3,	// (0x0002a0b9) popup_snote2_single_graphic_window_t1

0xc41f,	// (0x0002a105) popup_snote2_single_graphic_window_t2_ParamLimits

0xc41f,	// (0x0002a105) popup_snote2_single_graphic_window_t2

0xc2e1,	// (0x00029fc7) popup_snote2_single_graphic_window_t3_ParamLimits

0xc2e1,	// (0x00029fc7) popup_snote2_single_graphic_window_t3

0xc322,	// (0x0002a008) popup_snote2_single_graphic_window_t4_ParamLimits

0xc322,	// (0x0002a008) popup_snote2_single_graphic_window_t4

0xc358,	// (0x0002a03e) popup_snote2_single_graphic_window_t5_ParamLimits

0xc358,	// (0x0002a03e) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc4,	// (0x0002d9aa) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc4,	// (0x0002d9aa) popup_snote2_single_graphic_window_t

0x74fc,	// (0x000251e2) clock_nsta_pane_cp2_t1

0x74fc,	// (0x000251e2) clock_nsta_pane_cp2_t2

0x0001,

0xfadf,	// (0x0002d7c5) clock_nsta_pane_cp2_t

0xe3fd,	// (0x0002c0e3) form_field_data_wide_pane_g1_ParamLimits

0x4b38,	// (0x0002281e) form_field_data_wide_pane_g2_ParamLimits

0x4b38,	// (0x0002281e) form_field_data_wide_pane_g2

0x4b44,	// (0x0002282a) form_field_data_wide_pane_g3_ParamLimits

0x4b44,	// (0x0002282a) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0002d3a0) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0002d3a0) form_field_data_wide_pane_g

0xa282,	// (0x00027f68) grid_touch_3_pane_ParamLimits

0xa282,	// (0x00027f68) grid_touch_3_pane

0xc46b,	// (0x0002a151) cell_touch_3_pane_ParamLimits

0xc46b,	// (0x0002a151) cell_touch_3_pane

0xa6ad,	// (0x00028393) cell_touch_3_pane_g1

0xa6ad,	// (0x00028393) cell_touch_3_pane_g2

0x0001,

0xfb64,	// (0x0002d84a) cell_touch_3_pane_g

0x46b4,	// (0x0002239a) cont_query_data_pane

0x46bc,	// (0x000223a2) cont_query_data_pane_cp1

0xc49a,	// (0x0002a180) button_value_adjust_pane_cp7

0xc4a2,	// (0x0002a188) query_popup_pane_cp3

0x50a1,	// (0x00022d87) bg_popup_sub_pane_cp22_ParamLimits

0x8bd1,	// (0x000268b7) navi_navi_volume_pane_cp2

0x8bec,	// (0x000268d2) popup_side_volume_key_window_g2

0x8bfb,	// (0x000268e1) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0002d432) popup_side_volume_key_window_g

0x8c18,	// (0x000268fe) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0002d439) popup_side_volume_key_window_t

0x52f1,	// (0x00022fd7) popup_side_volume_key_window_ParamLimits

0xe096,	// (0x0002bd7c) list_double_graphic_pane_g4_ParamLimits

0xe096,	// (0x0002bd7c) list_double_graphic_pane_g4

0xe797,	// (0x0002c47d) list_single_2heading_msg_pane_ParamLimits

0xe797,	// (0x0002c47d) list_single_2heading_msg_pane

0xec90,	// (0x0002c976) list_single_2heading_msg_pane_g1_ParamLimits

0xec90,	// (0x0002c976) list_single_2heading_msg_pane_g1

0xdee7,	// (0x0002bbcd) list_single_2heading_msg_pane_g2_ParamLimits

0xdee7,	// (0x0002bbcd) list_single_2heading_msg_pane_g2

0xe87d,	// (0x0002c563) list_single_2heading_msg_pane_g3_ParamLimits

0xe87d,	// (0x0002c563) list_single_2heading_msg_pane_g3

0xec9c,	// (0x0002c982) list_single_2heading_msg_pane_g4_ParamLimits

0xec9c,	// (0x0002c982) list_single_2heading_msg_pane_g4

0x0003,

0xfccf,	// (0x0002d9b5) list_single_2heading_msg_pane_g_ParamLimits

0xfccf,	// (0x0002d9b5) list_single_2heading_msg_pane_g

0xecb4,	// (0x0002c99a) list_single_2heading_msg_pane_t1_ParamLimits

0xecb4,	// (0x0002c99a) list_single_2heading_msg_pane_t1

0xecdc,	// (0x0002c9c2) list_single_2heading_msg_pane_t2_ParamLimits

0xecdc,	// (0x0002c9c2) list_single_2heading_msg_pane_t2

0xed10,	// (0x0002c9f6) list_single_2heading_msg_pane_t3_ParamLimits

0xed10,	// (0x0002c9f6) list_single_2heading_msg_pane_t3

0xed49,	// (0x0002ca2f) list_single_2heading_msg_pane_t4_ParamLimits

0xed49,	// (0x0002ca2f) list_single_2heading_msg_pane_t4

0x0003,

0xfcd8,	// (0x0002d9be) list_single_2heading_msg_pane_t_ParamLimits

0xfcd8,	// (0x0002d9be) list_single_2heading_msg_pane_t

0x4485,	// (0x0002216b) title_pane_g4_ParamLimits

0x4485,	// (0x0002216b) title_pane_g4

0x88f5,	// (0x000265db) title_pane_stacon_g3_ParamLimits

0x88f5,	// (0x000265db) title_pane_stacon_g3

0xbfd3,	// (0x00029cb9) list_single_2graphic_im_pane_g4_ParamLimits

0xbfd3,	// (0x00029cb9) list_single_2graphic_im_pane_g4

0x6965,	// (0x0002464b) popup_side_volume_key_window_cp

0x6e4f,	// (0x00024b35) main_idle_act2_pane_t1

0x98a0,	// (0x00027586) toolbar_button_pane_g10

0x87f9,	// (0x000264df) popup_toolbar_window_cp1

0x74ed,	// (0x000251d3) clock_nsta_pane_cp_t1

0x74ed,	// (0x000251d3) clock_nsta_pane_cp_t2

0x0001,

0xfada,	// (0x0002d7c0) clock_nsta_pane_cp_t

0x8bd1,	// (0x000268b7) navi_navi_volume_pane_cp2_ParamLimits

0x8be0,	// (0x000268c6) popup_side_volume_key_window_g1_ParamLimits

0x8bec,	// (0x000268d2) popup_side_volume_key_window_g2_ParamLimits

0x8bfb,	// (0x000268e1) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0002d432) popup_side_volume_key_window_g_ParamLimits

0xa72b,	// (0x00028411) fep_hwr_aid_pane

0xa7d2,	// (0x000284b8) bg_fep_hwr_top_pane_g4_ParamLimits

0xa7f2,	// (0x000284d8) fep_hwr_top_pane_g1_ParamLimits

0xa804,	// (0x000284ea) fep_hwr_top_pane_g2_ParamLimits

0xa816,	// (0x000284fc) fep_hwr_top_pane_g3_ParamLimits

0xfb2f,	// (0x0002d815) fep_hwr_top_pane_g_ParamLimits

0xa82b,	// (0x00028511) fep_hwr_top_text_pane_ParamLimits

0x6763,	// (0x00024449) aid_touch_tab_arrow_arrow_2

0x675a,	// (0x00024440) aid_touch_tab_arrow_left_2

0xa73f,	// (0x00028425) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xa776,	// (0x0002845c) fep_hwr_prediction_pane

0xaa9d,	// (0x00028783) fep_vkb_prediction_pane

0xaba1,	// (0x00028887) fep_vkb_side_pane_g3_ParamLimits

0xaba1,	// (0x00028887) fep_vkb_side_pane_g3

0xaeca,	// (0x00028bb0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xb023,	// (0x00028d09) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xb030,	// (0x00028d16) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbde,	// (0x0002d8c4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xb15f,	// (0x00028e45) fep_hwr_prediction_pane_g1

0xb169,	// (0x00028e4f) fep_hwr_prediction_pane_g2

0xa715,	// (0x000283fb) fep_hwr_prediction_pane_g3

0xb171,	// (0x00028e57) fep_hwr_prediction_pane_g4

0x0003,

0xfce1,	// (0x0002d9c7) fep_hwr_prediction_pane_g

0xc4c7,	// (0x0002a1ad) fep_vkb_prediction_pane_g1

0xc4d1,	// (0x0002a1b7) fep_vkb_prediction_pane_g2

0xc4d9,	// (0x0002a1bf) fep_vkb_prediction_pane_g3

0xc4e1,	// (0x0002a1c7) fep_vkb_prediction_pane_g4

0x0003,

0xfcea,	// (0x0002d9d0) fep_vkb_prediction_pane_g

0x9e84,	// (0x00027b6a) slider_set_pane_g3

0x9e98,	// (0x00027b7e) slider_set_pane_g4

0x9eb0,	// (0x00027b96) slider_set_pane_g5

0x9e84,	// (0x00027b6a) slider_set_pane_g6

0x9ec6,	// (0x00027bac) slider_set_pane_g7

0x6be4,	// (0x000248ca) slider_form_pane_g3

0x6bed,	// (0x000248d3) slider_form_pane_g4

0x6bf5,	// (0x000248db) slider_form_pane_g5

0x6be4,	// (0x000248ca) slider_form_pane_g6

0xa02f,	// (0x00027d15) slider_form_pane_g7

0x70ed,	// (0x00024dd3) slider_set_pane_vc_g3

0x70f6,	// (0x00024ddc) slider_set_pane_vc_g4

0x70ff,	// (0x00024de5) slider_set_pane_vc_g5

0x70ed,	// (0x00024dd3) slider_set_pane_vc_g6

0x7108,	// (0x00024dee) slider_set_pane_vc_g7

0x70ed,	// (0x00024dd3) slider_form_pane_vc_g1

0x70f6,	// (0x00024ddc) slider_form_pane_vc_g2

0x70ff,	// (0x00024de5) slider_form_pane_vc_g3

0x70ed,	// (0x00024dd3) slider_form_pane_vc_g4

0x7297,	// (0x00024f7d) slider_form_pane_vc_g5

0x0004,

0xfac0,	// (0x0002d7a6) slider_form_pane_vc_g

0x4467,	// (0x0002214d) main_idle_act3_pane

0xc4e9,	// (0x0002a1cf) ai3_links_pane

0xc4f2,	// (0x0002a1d8) popup_ai3_data_window_ParamLimits

0xc4f2,	// (0x0002a1d8) popup_ai3_data_window

0x4467,	// (0x0002214d) grid_ai3_links_pane

0xc50a,	// (0x0002a1f0) cell_ai3_links_pane_ParamLimits

0xc50a,	// (0x0002a1f0) cell_ai3_links_pane

0xc522,	// (0x0002a208) bg_popup_sub_pane_cp11

0xc52f,	// (0x0002a215) cell_ai3_links_pane_g1

0x4467,	// (0x0002214d) bg_popup_sub_pane_cp12

0xc554,	// (0x0002a23a) heading_ai3_data_pane

0xc55c,	// (0x0002a242) list_ai3_gene_pane

0xc568,	// (0x0002a24e) popup_ai3_data_window_g1

0xc570,	// (0x0002a256) heading_ai3_data_pane_g1

0xc578,	// (0x0002a25e) heading_ai3_data_pane_t1

0xc586,	// (0x0002a26c) list_double_ai3_gene_pane_ParamLimits

0xc586,	// (0x0002a26c) list_double_ai3_gene_pane

0xc593,	// (0x0002a279) list_single_ai3_gene_pane_ParamLimits

0xc593,	// (0x0002a279) list_single_ai3_gene_pane

0xa672,	// (0x00028358) list_highlight_pane_cp7_ParamLimits

0xa672,	// (0x00028358) list_highlight_pane_cp7

0xc5a0,	// (0x0002a286) list_single_a13_gene_pane_t1_ParamLimits

0xc5a0,	// (0x0002a286) list_single_a13_gene_pane_t1

0xc5b7,	// (0x0002a29d) list_single_ai3_gene_pane_g1

0xc5c0,	// (0x0002a2a6) list_single_ai3_gene_pane_g2

0x0001,

0xfcf3,	// (0x0002d9d9) list_single_ai3_gene_pane_g

0xc5c8,	// (0x0002a2ae) list_double_ai3_gene_pane_g1_ParamLimits

0xc5c8,	// (0x0002a2ae) list_double_ai3_gene_pane_g1

0xc5d4,	// (0x0002a2ba) list_double_ai3_gene_pane_t1_ParamLimits

0xc5d4,	// (0x0002a2ba) list_double_ai3_gene_pane_t1

0xc5f0,	// (0x0002a2d6) list_double_ai3_gene_pane_t2_ParamLimits

0xc5f0,	// (0x0002a2d6) list_double_ai3_gene_pane_t2

0xc605,	// (0x0002a2eb) list_double_ai3_gene_pane_t3_ParamLimits

0xc605,	// (0x0002a2eb) list_double_ai3_gene_pane_t3

0x0002,

0xfcf8,	// (0x0002d9de) list_double_ai3_gene_pane_t_ParamLimits

0xfcf8,	// (0x0002d9de) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xec86,	// (0x0002c96c) aid_size_min_col_2

0xc4b3,	// (0x0002a199) aid_size_min_msg_ParamLimits

0xc4b3,	// (0x0002a199) aid_size_min_msg

0xaca1,	// (0x00028987) fep_vkb_top_text_pane_g2_ParamLimits

0xaca1,	// (0x00028987) fep_vkb_top_text_pane_g2

0x0001,

0xfb5f,	// (0x0002d845) fep_vkb_top_text_pane_g_ParamLimits

0xfb5f,	// (0x0002d845) fep_vkb_top_text_pane_g

0x4467,	// (0x0002214d) main_hc_apps_shell_pane

0xc622,	// (0x0002a308) grid_hc_apps_pane_ParamLimits

0xc622,	// (0x0002a308) grid_hc_apps_pane

0xc631,	// (0x0002a317) list_hc_apps_pane

0xc639,	// (0x0002a31f) scroll_pane_cp37_ParamLimits

0xc639,	// (0x0002a31f) scroll_pane_cp37

0xc645,	// (0x0002a32b) cell_hc_apps_pane_ParamLimits

0xc645,	// (0x0002a32b) cell_hc_apps_pane

0xc6f5,	// (0x0002a3db) cell_hc_apps_pane_g1_ParamLimits

0xc6f5,	// (0x0002a3db) cell_hc_apps_pane_g1

0xc726,	// (0x0002a40c) cell_hc_apps_pane_g2_ParamLimits

0xc726,	// (0x0002a40c) cell_hc_apps_pane_g2

0xc742,	// (0x0002a428) cell_hc_apps_pane_g3_ParamLimits

0xc742,	// (0x0002a428) cell_hc_apps_pane_g3

0x0002,

0xfcff,	// (0x0002d9e5) cell_hc_apps_pane_g_ParamLimits

0xfcff,	// (0x0002d9e5) cell_hc_apps_pane_g

0xc764,	// (0x0002a44a) cell_hc_apps_pane_t1_ParamLimits

0xc764,	// (0x0002a44a) cell_hc_apps_pane_t1

0x460a,	// (0x000222f0) grid_highlight_pane_cp10_ParamLimits

0x460a,	// (0x000222f0) grid_highlight_pane_cp10

0xc7a4,	// (0x0002a48a) list_single_hc_apps_pane_ParamLimits

0xc7a4,	// (0x0002a48a) list_single_hc_apps_pane

0xc817,	// (0x0002a4fd) list_single_hc_apps_pane_g1

0xed6e,	// (0x0002ca54) list_single_hc_apps_pane_g2

0x0001,

0xfd06,	// (0x0002d9ec) list_single_hc_apps_pane_g

0xed87,	// (0x0002ca6d) list_single_hc_apps_pane_g2_copy1

0xeda3,	// (0x0002ca89) list_single_hc_apps_pane_t1

0x44d7,	// (0x000221bd) bg_set_opt_pane_cp_ParamLimits

0x85b4,	// (0x0002629a) setting_slider_pane_t1_ParamLimits

0x85cd,	// (0x000262b3) setting_slider_pane_t2_ParamLimits

0x85e6,	// (0x000262cc) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0002d288) setting_slider_pane_t_ParamLimits

0x85fd,	// (0x000262e3) slider_set_pane_ParamLimits

0x8fab,	// (0x00026c91) control_pane_g5_ParamLimits

0x8fab,	// (0x00026c91) control_pane_g5

0x6ba6,	// (0x0002488c) slider_set_pane_g1_ParamLimits

0x9e78,	// (0x00027b5e) slider_set_pane_g2_ParamLimits

0x9e84,	// (0x00027b6a) slider_set_pane_g3_ParamLimits

0x9e98,	// (0x00027b7e) slider_set_pane_g4_ParamLimits

0x9eb0,	// (0x00027b96) slider_set_pane_g5_ParamLimits

0x9e84,	// (0x00027b6a) slider_set_pane_g6_ParamLimits

0x9ec6,	// (0x00027bac) slider_set_pane_g7_ParamLimits

0xf993,	// (0x0002d679) slider_set_pane_g_ParamLimits

0x53d2,	// (0x000230b8) navi_icon_text_pane_ParamLimits

0x956d,	// (0x00027253) aid_fill_nsta_2_ParamLimits

0x9597,	// (0x0002727d) aid_touch_tab_arrow_left_ParamLimits

0x95a6,	// (0x0002728c) aid_touch_tab_arrow_right_ParamLimits

0x9613,	// (0x000272f9) clock_nsta_pane_ParamLimits

0x9d19,	// (0x000279ff) navi_icon_pane_g1_ParamLimits

0x9d28,	// (0x00027a0e) navi_text_pane_t1_ParamLimits

0xa397,	// (0x0002807d) navi_icon_text_pane_g1_ParamLimits

0xa3a6,	// (0x0002808c) navi_icon_text_pane_t1_ParamLimits

0xc817,	// (0x0002a4fd) list_single_hc_apps_pane_g1_ParamLimits

0xed6e,	// (0x0002ca54) list_single_hc_apps_pane_g2_ParamLimits

0xfd06,	// (0x0002d9ec) list_single_hc_apps_pane_g_ParamLimits

0xed87,	// (0x0002ca6d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xeda3,	// (0x0002ca89) list_single_hc_apps_pane_t1_ParamLimits

0x8408,	// (0x000260ee) popup_toolbar2_fixed_window_ParamLimits

0x8408,	// (0x000260ee) popup_toolbar2_fixed_window

0x94e0,	// (0x000271c6) popup_toolbar2_float_window

0x4467,	// (0x0002214d) bg_popup_sub_pane_cp27

0xc830,	// (0x0002a516) grid_toolbar2_float_pane

0x4467,	// (0x0002214d) bg_popup_sub_pane_cp26

0xc830,	// (0x0002a516) grid_toolbar2_fixed_pane

0xc838,	// (0x0002a51e) cell_toolbar2_fixed_pane_ParamLimits

0xc838,	// (0x0002a51e) cell_toolbar2_fixed_pane

0xc849,	// (0x0002a52f) cell_toolbar2_fixed_pane_g1

0xc852,	// (0x0002a538) toolbar2_fixed_button_pane

0x5aa8,	// (0x0002378e) toolbar2_fixed_button_pane_g1

0x5ab0,	// (0x00023796) toolbar2_fixed_button_pane_g2

0x5ab8,	// (0x0002379e) toolbar2_fixed_button_pane_g3

0x5ac0,	// (0x000237a6) toolbar2_fixed_button_pane_g4

0x5ac8,	// (0x000237ae) toolbar2_fixed_button_pane_g5

0x5ad0,	// (0x000237b6) toolbar2_fixed_button_pane_g6

0x5ad8,	// (0x000237be) toolbar2_fixed_button_pane_g7

0x5ae0,	// (0x000237c6) toolbar2_fixed_button_pane_g8

0x5ae8,	// (0x000237ce) toolbar2_fixed_button_pane_g9

0x0008,

0xf895,	// (0x0002d57b) toolbar2_fixed_button_pane_g

0xc85a,	// (0x0002a540) cell_toolbar2_float_pane_ParamLimits

0xc85a,	// (0x0002a540) cell_toolbar2_float_pane

0xc86b,	// (0x0002a551) cell_toolbar2_float_pane_g1

0xc852,	// (0x0002a538) toolbar2_fixed_button_pane_cp

0xa9f6,	// (0x000286dc) fep_vkb_accented_list_pane_ParamLimits

0xa9f6,	// (0x000286dc) fep_vkb_accented_list_pane

0xae9c,	// (0x00028b82) bg_popup_fep_shadow_pane_g9

0x5554,	// (0x0002323a) bg_popup_fep_shadow_pane_cp3

0x4c24,	// (0x0002290a) list_accented_list_pane

0xc874,	// (0x0002a55a) list_single_accented_list_pane_ParamLimits

0xc874,	// (0x0002a55a) list_single_accented_list_pane

0x5554,	// (0x0002323a) list_highlight_pane_cp10

0xc885,	// (0x0002a56b) list_single_accented_list_pane_t1

0x9438,	// (0x0002711e) popup_slider_window_ParamLimits

0x9438,	// (0x0002711e) popup_slider_window

0xc4aa,	// (0x0002a190) aid_indentation_list_msg

0xc93f,	// (0x0002a625) bg_popup_window_pane_cp19

0xc9a9,	// (0x0002a68f) popup_slider_window_g1

0xc9c5,	// (0x0002a6ab) popup_slider_window_g2

0xc9e1,	// (0x0002a6c7) popup_slider_window_g3

0x0005,

0xfd0b,	// (0x0002d9f1) popup_slider_window_g

0xca3d,	// (0x0002a723) popup_slider_window_t1

0xcab1,	// (0x0002a797) small_volume_slider_vertical_pane

0xa6ad,	// (0x00028393) small_volume_slider_vertical_pane_g1

0xa6ad,	// (0x00028393) small_volume_slider_vertical_pane_g2

0xcacd,	// (0x0002a7b3) small_volume_slider_vertical_pane_g3

0x0002,

0xfd1d,	// (0x0002da03) small_volume_slider_vertical_pane_g

0x81ce,	// (0x00025eb4) area_side_right_pane_ParamLimits

0x81ce,	// (0x00025eb4) area_side_right_pane

0xb179,	// (0x00028e5f) aid_size_side_button_ParamLimits

0xb179,	// (0x00028e5f) aid_size_side_button

0xb18d,	// (0x00028e73) grid_sctrl_middle_pane_ParamLimits

0xb18d,	// (0x00028e73) grid_sctrl_middle_pane

0xb1ad,	// (0x00028e93) sctrl_sk_bottom_pane

0xb1be,	// (0x00028ea4) sctrl_sk_top_pane

0xb1d0,	// (0x00028eb6) aid_touch_sctrl_top

0xb1dd,	// (0x00028ec3) bg_sctrl_sk_pane_ParamLimits

0xb1dd,	// (0x00028ec3) bg_sctrl_sk_pane

0xb1eb,	// (0x00028ed1) sctrl_sk_top_pane_g1

0xb1f8,	// (0x00028ede) sctrl_sk_top_pane_t1

0xb1d0,	// (0x00028eb6) aid_touch_sctrl_bottom

0xb1dd,	// (0x00028ec3) bg_sctrl_sk_pane_cp_ParamLimits

0xb1dd,	// (0x00028ec3) bg_sctrl_sk_pane_cp

0xb213,	// (0x00028ef9) sctrl_sk_bottom_pane_g1

0xb1f8,	// (0x00028ede) sctrl_sk_bottom_pane_t1

0xb21c,	// (0x00028f02) cell_sctrl_middle_pane_ParamLimits

0xb21c,	// (0x00028f02) cell_sctrl_middle_pane

0xb237,	// (0x00028f1d) aid_touch_sctrl_middle_ParamLimits

0xb237,	// (0x00028f1d) aid_touch_sctrl_middle

0xb249,	// (0x00028f2f) bg_sctrl_middle_pane_ParamLimits

0xb249,	// (0x00028f2f) bg_sctrl_middle_pane

0xaeca,	// (0x00028bb0) cell_sctrl_middle_pane_g1_ParamLimits

0xaeca,	// (0x00028bb0) cell_sctrl_middle_pane_g1

0xb257,	// (0x00028f3d) cell_sctrl_middle_pane_g2_ParamLimits

0xb257,	// (0x00028f3d) cell_sctrl_middle_pane_g2

0x0001,

0xfd29,	// (0x0002da0f) cell_sctrl_middle_pane_g_ParamLimits

0xfd29,	// (0x0002da0f) cell_sctrl_middle_pane_g

0x5aa8,	// (0x0002378e) bg_sctrl_middle_pane_g1

0x5ab8,	// (0x0002379e) bg_sctrl_middle_pane_g2

0x5ab0,	// (0x00023796) bg_sctrl_middle_pane_g3

0x5ac8,	// (0x000237ae) bg_sctrl_middle_pane_g4

0x5ac0,	// (0x000237a6) bg_sctrl_middle_pane_g5

0x5ad0,	// (0x000237b6) bg_sctrl_middle_pane_g6

0x5ad8,	// (0x000237be) bg_sctrl_middle_pane_g7

0x5ae8,	// (0x000237ce) bg_sctrl_middle_pane_g8

0x0007,

0xfd2e,	// (0x0002da14) bg_sctrl_middle_pane_g

0x5ae0,	// (0x000237c6) bg_sctrl_middle_pane_g8_copy1

0x5aa8,	// (0x0002378e) bg_sctrl_sk_pane_g1

0x5ab0,	// (0x00023796) bg_sctrl_sk_pane_g2

0x5ab8,	// (0x0002379e) bg_sctrl_sk_pane_g3

0x0008,

0xf895,	// (0x0002d57b) bg_sctrl_sk_pane_g

0x4a57,	// (0x0002273d) aid_size_touch_scroll_bar

0x5ac0,	// (0x000237a6) bg_sctrl_sk_pane_g4

0x5ac8,	// (0x000237ae) bg_sctrl_sk_pane_g5

0x5ad0,	// (0x000237b6) bg_sctrl_sk_pane_g6

0x5ad8,	// (0x000237be) bg_sctrl_sk_pane_g7

0x5ae0,	// (0x000237c6) bg_sctrl_sk_pane_g8

0x5ae8,	// (0x000237ce) bg_sctrl_sk_pane_g9

0x57ea,	// (0x000234d0) popup_fep_china_hwr2_fs_candidate_window

0x9146,	// (0x00026e2c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9146,	// (0x00026e2c) popup_fep_china_hwr2_fs_control_window

0xaeca,	// (0x00028bb0) sctrl_sk_top_pane_g2

0x0001,

0xfd24,	// (0x0002da0a) sctrl_sk_top_pane_g

0xcad6,	// (0x0002a7bc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcad6,	// (0x0002a7bc) aid_fep_china_hwr2_fs_cell

0xcae8,	// (0x0002a7ce) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcae8,	// (0x0002a7ce) bg_popup_fep_shadow_pane_cp4

0xcaff,	// (0x0002a7e5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcaff,	// (0x0002a7e5) bg_popup_fep_shadow_pane_cp5

0xcb11,	// (0x0002a7f7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcb11,	// (0x0002a7f7) popup_fep_china_hwr2_fs_control_bar_grid

0xcb21,	// (0x0002a807) popup_fep_china_hwr2_fs_control_funtion_grid

0xcb29,	// (0x0002a80f) aid_fep_china_hwr2_fs_candi_cell

0x4467,	// (0x0002214d) bg_popup_fep_shadow_pane_cp6

0xcb33,	// (0x0002a819) popup_fep_china_hwr2_fs_candidate_grid

0xcb3d,	// (0x0002a823) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcb3d,	// (0x0002a823) cell_fep_china_hwr2_fs_funtion_grid

0xa6ad,	// (0x00028393) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcb55,	// (0x0002a83b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcb55,	// (0x0002a83b) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcb63,	// (0x0002a849) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcb63,	// (0x0002a849) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3f,	// (0x0002da25) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3f,	// (0x0002da25) cell_fep_china_hwr2_fs_funtion_grid_g

0xcb79,	// (0x0002a85f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcb79,	// (0x0002a85f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcb8e,	// (0x0002a874) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcb8e,	// (0x0002a874) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd44,	// (0x0002da2a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd44,	// (0x0002da2a) cell_fep_china_hwr2_fs_funtion_grid_t

0xcbaa,	// (0x0002a890) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcbb2,	// (0x0002a898) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcbba,	// (0x0002a8a0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd49,	// (0x0002da2f) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcbc2,	// (0x0002a8a8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcbc2,	// (0x0002a8a8) cell_fep_china_hwr2_fs_candidate_grid

0xcbdb,	// (0x0002a8c1) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcbe3,	// (0x0002a8c9) popup_fep_china_hwr2_fs_candidate_grid_g21

0xa6ad,	// (0x00028393) cell_fep_china_hwr2_fs_candidate_grid_g1

0xa6ad,	// (0x00028393) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb64,	// (0x0002d84a) cell_fep_china_hwr2_fs_candidate_grid_g

0xcbeb,	// (0x0002a8d1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x58f7,	// (0x000235dd) clock_nsta_pane_cp_24_ParamLimits

0x58f7,	// (0x000235dd) clock_nsta_pane_cp_24

0x595f,	// (0x00023645) indicator_nsta_pane_cp_24_ParamLimits

0x595f,	// (0x00023645) indicator_nsta_pane_cp_24

0x6664,	// (0x0002434a) heading_pane_g1

0x0001,

0xf8fa,	// (0x0002d5e0) heading_pane_g

0x6cda,	// (0x000249c0) grid_sct_catagory_button_pane

0x6a14,	// (0x000246fa) scroll_pane_cp5_ParamLimits

0x7558,	// (0x0002523e) button_value_adjust_pane_cp5_ParamLimits

0x7558,	// (0x0002523e) button_value_adjust_pane_cp5

0x7616,	// (0x000252fc) form2_midp_time_pane_ParamLimits

0xcbf9,	// (0x0002a8df) cell_sct_catagory_button_pane_ParamLimits

0xcbf9,	// (0x0002a8df) cell_sct_catagory_button_pane

0xa672,	// (0x00028358) bg_button_pane_cp01_ParamLimits

0xa672,	// (0x00028358) bg_button_pane_cp01

0xa6ad,	// (0x00028393) cell_sct_catagory_button_pane_g1

0x946f,	// (0x00027155) popup_tb_extension_window

0xcc0b,	// (0x0002a8f1) aid_size_cell_ext_ParamLimits

0xcc0b,	// (0x0002a8f1) aid_size_cell_ext

0x460a,	// (0x000222f0) bg_tb_trans_pane_cp1_ParamLimits

0x460a,	// (0x000222f0) bg_tb_trans_pane_cp1

0xcc2b,	// (0x0002a911) grid_tb_ext_pane_ParamLimits

0xcc2b,	// (0x0002a911) grid_tb_ext_pane

0xcc5d,	// (0x0002a943) cell_tb_ext_pane_ParamLimits

0xcc5d,	// (0x0002a943) cell_tb_ext_pane

0xcc74,	// (0x0002a95a) cell_tb_ext_pane_g1_ParamLimits

0xcc74,	// (0x0002a95a) cell_tb_ext_pane_g1

0xcc91,	// (0x0002a977) cell_tb_ext_pane_t1

0x460a,	// (0x000222f0) list_highlight_pane_cp11_ParamLimits

0x460a,	// (0x000222f0) list_highlight_pane_cp11

0x8427,	// (0x0002610d) popup_uni_indicator_window_ParamLimits

0x8427,	// (0x0002610d) popup_uni_indicator_window

0x4b1e,	// (0x00022804) bg_popup_sub_pane_cp14

0xccac,	// (0x0002a992) list_uniindi_pane

0xccb8,	// (0x0002a99e) uniindi_top_pane

0x460a,	// (0x000222f0) bg_uniindi_top_pane

0xccd7,	// (0x0002a9bd) uniindi_top_pane_g1

0xcced,	// (0x0002a9d3) uniindi_top_pane_g2

0x0003,

0xfd50,	// (0x0002da36) uniindi_top_pane_g

0xcd17,	// (0x0002a9fd) uniindi_top_pane_t1

0xcd41,	// (0x0002aa27) list_single_uniindi_pane_ParamLimits

0xcd41,	// (0x0002aa27) list_single_uniindi_pane

0xa6ad,	// (0x00028393) bg_uniindi_top_pane_g1

0xcd53,	// (0x0002aa39) list_single_uniindi_pane_g1

0xcd66,	// (0x0002aa4c) list_single_uniindi_pane_t1

0x82ab,	// (0x00025f91) control_bg_pane

0xcd8b,	// (0x0002aa71) bg_sctrl_sk_pane_cp1

0xcd94,	// (0x0002aa7a) bg_sctrl_sk_pane_cp2

0xcd9d,	// (0x0002aa83) control_bg_pane_g1

0xcda6,	// (0x0002aa8c) control_bg_pane_g2

0x0001,

0xfd59,	// (0x0002da3f) control_bg_pane_g

0x74c7,	// (0x000251ad) cell_indicator_nsta_pane_g1_ParamLimits

0xa2c6,	// (0x00027fac) cell_indicator_nsta_pane_g2_ParamLimits

0xfad5,	// (0x0002d7bb) cell_indicator_nsta_pane_g_ParamLimits

0xea43,	// (0x0002c729) form2_midp_time_pane_t1_ParamLimits

0x4899,	// (0x0002257f) main_idle_act4_pane_ParamLimits

0x4899,	// (0x0002257f) main_idle_act4_pane

0x946f,	// (0x00027155) popup_tb_extension_window_ParamLimits

0xcc4d,	// (0x0002a933) tb_ext_find_pane_ParamLimits

0xcc4d,	// (0x0002a933) tb_ext_find_pane

0xcdaf,	// (0x0002aa95) ai_gene_pane_1_cp1

0x55d6,	// (0x000232bc) ai_gene_pane_2_cp1

0xcdb7,	// (0x0002aa9d) list_single_idle_plugin_calendar_pane

0xcdc0,	// (0x0002aaa6) list_single_idle_plugin_notification_pane

0xcdc9,	// (0x0002aaaf) list_single_idle_plugin_player_pane

0xcdd2,	// (0x0002aab8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcdd2,	// (0x0002aab8) list_single_idle_plugin_shortcut_pane

0xcdf4,	// (0x0002aada) main_idle_act4_pane_t1

0xce06,	// (0x0002aaec) main_idle_act4_pane_t2

0x0001,

0xfd5e,	// (0x0002da44) main_idle_act4_pane_t

0xce18,	// (0x0002aafe) middle_sk_idle_act4_pane_ParamLimits

0xce18,	// (0x0002aafe) middle_sk_idle_act4_pane

0xce2e,	// (0x0002ab14) popup_clock_digital_analogue_window_cp2

0xce48,	// (0x0002ab2e) shortcut_wheel_idle_act4_pane_ParamLimits

0xce48,	// (0x0002ab2e) shortcut_wheel_idle_act4_pane

0xa6ad,	// (0x00028393) shortcut_wheel_idle_act4_pane_g1

0xa6ad,	// (0x00028393) shortcut_wheel_idle_act4_pane_g2

0xa6ad,	// (0x00028393) shortcut_wheel_idle_act4_pane_g3

0xa6ad,	// (0x00028393) shortcut_wheel_idle_act4_pane_g4

0xa6ad,	// (0x00028393) shortcut_wheel_idle_act4_pane_g5

0xce5c,	// (0x0002ab42) shortcut_wheel_idle_act4_pane_g6

0xce64,	// (0x0002ab4a) shortcut_wheel_idle_act4_pane_g7

0xce6c,	// (0x0002ab52) shortcut_wheel_idle_act4_pane_g8

0xce74,	// (0x0002ab5a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd63,	// (0x0002da49) shortcut_wheel_idle_act4_pane_g

0xab4d,	// (0x00028833) middle_sk_idle_act4_pane_g1_ParamLimits

0xab4d,	// (0x00028833) middle_sk_idle_act4_pane_g1

0xced8,	// (0x0002abbe) middle_sk_idle_act4_pane_g2_ParamLimits

0xced8,	// (0x0002abbe) middle_sk_idle_act4_pane_g2

0x0001,

0xfd86,	// (0x0002da6c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd86,	// (0x0002da6c) middle_sk_idle_act4_pane_g

0xcee4,	// (0x0002abca) middle_sk_idle_act4_pane_t1_ParamLimits

0xcee4,	// (0x0002abca) middle_sk_idle_act4_pane_t1

0xcf01,	// (0x0002abe7) grid_ai_shortcut_pane_ParamLimits

0xcf01,	// (0x0002abe7) grid_ai_shortcut_pane

0xcf1a,	// (0x0002ac00) list_highlight_pane_cp16_ParamLimits

0xcf1a,	// (0x0002ac00) list_highlight_pane_cp16

0xcf27,	// (0x0002ac0d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcf27,	// (0x0002ac0d) list_single_idle_plugin_shortcut_pane_g1

0xcf33,	// (0x0002ac19) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcf33,	// (0x0002ac19) list_single_idle_plugin_shortcut_pane_g2

0xcf4b,	// (0x0002ac31) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcf4b,	// (0x0002ac31) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd8b,	// (0x0002da71) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd8b,	// (0x0002da71) list_single_idle_plugin_shortcut_pane_g

0xcf5e,	// (0x0002ac44) cell_ai_shortcut_pane_ParamLimits

0xcf5e,	// (0x0002ac44) cell_ai_shortcut_pane

0xcf7f,	// (0x0002ac65) cell_ai_shortcut_pane_g1_ParamLimits

0xcf7f,	// (0x0002ac65) cell_ai_shortcut_pane_g1

0xcdaf,	// (0x0002aa95) ai_gene_pane_1_cp2

0xcfa1,	// (0x0002ac87) ai_gene_pane_2_cp2

0xcfa9,	// (0x0002ac8f) list_highlight_pane_cp15

0xcfb2,	// (0x0002ac98) list_single_idle_plugin_calendar_pane_g1

0xcfa9,	// (0x0002ac8f) list_highlight_pane_cp17

0xcfba,	// (0x0002aca0) list_single_idle_plugin_calendar_pane_g1_copy1

0xcfc2,	// (0x0002aca8) list_single_idle_plugin_player_pane_g1

0x6eef,	// (0x00024bd5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd92,	// (0x0002da78) list_single_idle_plugin_player_pane_g

0xcfca,	// (0x0002acb0) list_single_idle_plugin_player_pane_t1

0xcfd8,	// (0x0002acbe) list_single_idle_plugin_player_pane_t2

0xcfe6,	// (0x0002accc) list_single_idle_plugin_player_pane_t3

0xcff4,	// (0x0002acda) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd97,	// (0x0002da7d) list_single_idle_plugin_player_pane_t

0xd002,	// (0x0002ace8) wait_bar_pane_cp15

0xd00a,	// (0x0002acf0) grid_ai_notification_pane

0x6eef,	// (0x00024bd5) list_single_idle_plugin_notification_pane_g1

0xd013,	// (0x0002acf9) cell_ai_notification_pane_ParamLimits

0xd013,	// (0x0002acf9) cell_ai_notification_pane

0xd020,	// (0x0002ad06) cell_ai_notification_pane_g1

0xd028,	// (0x0002ad0e) cell_ai_notification_pane_t1

0xd036,	// (0x0002ad1c) tb_ext_find_button_pane

0xd03e,	// (0x0002ad24) tb_ext_find_pane_g1

0xd046,	// (0x0002ad2c) tb_ext_find_pane_t1

0x5045,	// (0x00022d2b) tb_ext_find_button_pane_g1

0xd054,	// (0x0002ad3a) tb_ext_find_button_pane_g2

0x0001,

0xfda0,	// (0x0002da86) tb_ext_find_button_pane_g

0xcdf4,	// (0x0002aada) main_idle_act4_pane_t1_ParamLimits

0xce06,	// (0x0002aaec) main_idle_act4_pane_t2_ParamLimits

0xfd5e,	// (0x0002da44) main_idle_act4_pane_t_ParamLimits

0xce2e,	// (0x0002ab14) popup_clock_digital_analogue_window_cp2_ParamLimits

0xce3c,	// (0x0002ab22) sat_plugin_idle_act4_pane_ParamLimits

0xce3c,	// (0x0002ab22) sat_plugin_idle_act4_pane

0xd05d,	// (0x0002ad43) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd05d,	// (0x0002ad43) sat_plugin_idle_act4_pane_t1

0xd070,	// (0x0002ad56) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd070,	// (0x0002ad56) sat_plugin_idle_act4_pane_t2

0xd083,	// (0x0002ad69) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd083,	// (0x0002ad69) sat_plugin_idle_act4_pane_t3

0xd096,	// (0x0002ad7c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd096,	// (0x0002ad7c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda5,	// (0x0002da8b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda5,	// (0x0002da8b) sat_plugin_idle_act4_pane_t

0x8370,	// (0x00026056) popup_battery_window_ParamLimits

0x8370,	// (0x00026056) popup_battery_window

0x460a,	// (0x000222f0) bg_popup_sub_pane_cp25_ParamLimits

0x460a,	// (0x000222f0) bg_popup_sub_pane_cp25

0xd0a9,	// (0x0002ad8f) popup_battery_window_g1_ParamLimits

0xd0a9,	// (0x0002ad8f) popup_battery_window_g1

0xd0b5,	// (0x0002ad9b) popup_battery_window_t1_ParamLimits

0xd0b5,	// (0x0002ad9b) popup_battery_window_t1

0xd0c7,	// (0x0002adad) popup_battery_window_t2_ParamLimits

0xd0c7,	// (0x0002adad) popup_battery_window_t2

0x0001,

0xfdae,	// (0x0002da94) popup_battery_window_t_ParamLimits

0xfdae,	// (0x0002da94) popup_battery_window_t

0x8de5,	// (0x00026acb) midp_canvas_pane_ParamLimits

0x8e49,	// (0x00026b2f) midp_keypad_pane_ParamLimits

0x8e49,	// (0x00026b2f) midp_keypad_pane

0x57b6,	// (0x0002349c) main_midp_pane_ParamLimits

0x750b,	// (0x000251f1) signal_pane_g2_cp_ParamLimits

0xd0e4,	// (0x0002adca) aid_size_cell_midp_keypad_ParamLimits

0xd0e4,	// (0x0002adca) aid_size_cell_midp_keypad

0xd0fe,	// (0x0002ade4) midp_keyp_game_grid_pane_ParamLimits

0xd0fe,	// (0x0002ade4) midp_keyp_game_grid_pane

0xd11e,	// (0x0002ae04) midp_keyp_rocker_pane_ParamLimits

0xd11e,	// (0x0002ae04) midp_keyp_rocker_pane

0xd157,	// (0x0002ae3d) midp_keyp_sk_left_pane_ParamLimits

0xd157,	// (0x0002ae3d) midp_keyp_sk_left_pane

0xd1b1,	// (0x0002ae97) midp_keyp_sk_right_pane_ParamLimits

0xd1b1,	// (0x0002ae97) midp_keyp_sk_right_pane

0x4467,	// (0x0002214d) bg_button_pane_cp03

0xd20b,	// (0x0002aef1) midp_keyp_sk_left_pane_g1

0x4467,	// (0x0002214d) bg_button_pane_cp04

0xd20b,	// (0x0002aef1) midp_keyp_sk_right_pane_g1

0xa6ad,	// (0x00028393) midp_keyp_rocker_pane_g1

0xd214,	// (0x0002aefa) keyp_game_cell_pane_ParamLimits

0xd214,	// (0x0002aefa) keyp_game_cell_pane

0x4467,	// (0x0002214d) bg_button_pane_cp02

0xd227,	// (0x0002af0d) keyp_game_cell_pane_g1

0x83a6,	// (0x0002608c) popup_fep_vkb2_window_ParamLimits

0x83a6,	// (0x0002608c) popup_fep_vkb2_window

0xb279,	// (0x00028f5f) aid_size_cell_vkb2_ParamLimits

0xb279,	// (0x00028f5f) aid_size_cell_vkb2

0xb2cd,	// (0x00028fb3) popup_fep_vkb2_window_g1_ParamLimits

0xb2cd,	// (0x00028fb3) popup_fep_vkb2_window_g1

0xb30d,	// (0x00028ff3) vkb2_area_bottom_pane_ParamLimits

0xb30d,	// (0x00028ff3) vkb2_area_bottom_pane

0xb359,	// (0x0002903f) vkb2_area_keypad_pane_ParamLimits

0xb359,	// (0x0002903f) vkb2_area_keypad_pane

0xb39b,	// (0x00029081) vkb2_area_top_pane_ParamLimits

0xb39b,	// (0x00029081) vkb2_area_top_pane

0xb415,	// (0x000290fb) vkb2_top_entry_pane_ParamLimits

0xb415,	// (0x000290fb) vkb2_top_entry_pane

0xb43f,	// (0x00029125) vkb2_top_grid_left_pane_ParamLimits

0xb43f,	// (0x00029125) vkb2_top_grid_left_pane

0xb45d,	// (0x00029143) vkb2_top_grid_right_pane_ParamLimits

0xb45d,	// (0x00029143) vkb2_top_grid_right_pane

0xb47b,	// (0x00029161) vkb2_cell_keypad_pane_ParamLimits

0xb47b,	// (0x00029161) vkb2_cell_keypad_pane

0xb54c,	// (0x00029232) vkb2_area_bottom_grid_pane_ParamLimits

0xb54c,	// (0x00029232) vkb2_area_bottom_grid_pane

0xb572,	// (0x00029258) vkb2_area_bottom_pane_g1_ParamLimits

0xb572,	// (0x00029258) vkb2_area_bottom_pane_g1

0xb596,	// (0x0002927c) vkb2_area_bottom_pane_g2_ParamLimits

0xb596,	// (0x0002927c) vkb2_area_bottom_pane_g2

0xb5c4,	// (0x000292aa) vkb2_area_bottom_pane_g3_ParamLimits

0xb5c4,	// (0x000292aa) vkb2_area_bottom_pane_g3

0x0002,

0xfdb3,	// (0x0002da99) vkb2_area_bottom_pane_g_ParamLimits

0xfdb3,	// (0x0002da99) vkb2_area_bottom_pane_g

0xb625,	// (0x0002930b) vkb2_top_cell_left_pane_ParamLimits

0xb625,	// (0x0002930b) vkb2_top_cell_left_pane

0xedef,	// (0x0002cad5) vkb2_top_entry_pane_g1_ParamLimits

0xedef,	// (0x0002cad5) vkb2_top_entry_pane_g1

0xedfd,	// (0x0002cae3) vkb2_top_entry_pane_t1_ParamLimits

0xedfd,	// (0x0002cae3) vkb2_top_entry_pane_t1

0xd238,	// (0x0002af1e) vkb2_top_entry_pane_t2_ParamLimits

0xd238,	// (0x0002af1e) vkb2_top_entry_pane_t2

0xd26a,	// (0x0002af50) vkb2_top_entry_pane_t3_ParamLimits

0xd26a,	// (0x0002af50) vkb2_top_entry_pane_t3

0x0002,

0xfdba,	// (0x0002daa0) vkb2_top_entry_pane_t_ParamLimits

0xfdba,	// (0x0002daa0) vkb2_top_entry_pane_t

0xb672,	// (0x00029358) vkb2_top_grid_right_pane_g1_ParamLimits

0xb672,	// (0x00029358) vkb2_top_grid_right_pane_g1

0xb688,	// (0x0002936e) vkb2_top_grid_right_pane_g2_ParamLimits

0xb688,	// (0x0002936e) vkb2_top_grid_right_pane_g2

0xb6a0,	// (0x00029386) vkb2_top_grid_right_pane_g3_ParamLimits

0xb6a0,	// (0x00029386) vkb2_top_grid_right_pane_g3

0xb6b8,	// (0x0002939e) vkb2_top_grid_right_pane_g4_ParamLimits

0xb6b8,	// (0x0002939e) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc1,	// (0x0002daa7) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc1,	// (0x0002daa7) vkb2_top_grid_right_pane_g

0xb6ce,	// (0x000293b4) vkb2_top_cell_left_pane_g1

0xb6e5,	// (0x000293cb) vkb2_cell_keypad_pane_g1_ParamLimits

0xb6e5,	// (0x000293cb) vkb2_cell_keypad_pane_g1

0xd280,	// (0x0002af66) vkb2_cell_keypad_pane_t1_ParamLimits

0xd280,	// (0x0002af66) vkb2_cell_keypad_pane_t1

0xb6f3,	// (0x000293d9) vkb2_cell_bottom_grid_pane_ParamLimits

0xb6f3,	// (0x000293d9) vkb2_cell_bottom_grid_pane

0xb72c,	// (0x00029412) vkb2_cell_bottom_grid_pane_g1

0xce7c,	// (0x0002ab62) aid_call2_pane_cp02

0xce84,	// (0x0002ab6a) aid_call_pane_cp02

0xce8c,	// (0x0002ab72) clock_digital_number_pane_cp10

0xce94,	// (0x0002ab7a) clock_digital_number_pane_cp11

0xce9c,	// (0x0002ab82) clock_digital_number_pane_cp12

0xcea4,	// (0x0002ab8a) clock_digital_number_pane_cp13

0xceac,	// (0x0002ab92) clock_digital_separator_pane_cp10

0x5045,	// (0x00022d2b) popup_clock_digital_analogue_window_cp2_g1

0x5045,	// (0x00022d2b) popup_clock_digital_analogue_window_cp2_g2

0xceb4,	// (0x0002ab9a) popup_clock_digital_analogue_window_cp2_g3

0x5045,	// (0x00022d2b) popup_clock_digital_analogue_window_cp2_g4

0xceb4,	// (0x0002ab9a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd76,	// (0x0002da5c) popup_clock_digital_analogue_window_cp2_g

0xcebc,	// (0x0002aba2) popup_clock_digital_analogue_window_cp2_t1

0xceca,	// (0x0002abb0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd81,	// (0x0002da67) popup_clock_digital_analogue_window_cp2_t

0xa6ad,	// (0x00028393) clock_digital_number_pane_cp10_g1

0xa6ad,	// (0x00028393) clock_digital_number_pane_cp10_g2

0x0001,

0xfb64,	// (0x0002d84a) clock_digital_number_pane_cp10_g

0xa6ad,	// (0x00028393) clock_digital_separator_pane_cp10_g1

0xa6ad,	// (0x00028393) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb64,	// (0x0002d84a) clock_digital_separator_pane_cp10_g

0xccf9,	// (0x0002a9df) uniindi_top_pane_g3

0xcd0a,	// (0x0002a9f0) uniindi_top_pane_g4

0xb506,	// (0x000291ec) vkb2_row_keypad_pane_ParamLimits

0xb506,	// (0x000291ec) vkb2_row_keypad_pane

0xb74c,	// (0x00029432) vkb2_cell_t_keypad_pane_ParamLimits

0xb74c,	// (0x00029432) vkb2_cell_t_keypad_pane

0xb75c,	// (0x00029442) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xb75c,	// (0x00029442) vkb2_cell_t_keypad_pane_cp08

0xb76f,	// (0x00029455) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xb76f,	// (0x00029455) vkb2_cell_t_keypad_pane_cp09

0xb783,	// (0x00029469) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xb783,	// (0x00029469) vkb2_cell_t_keypad_pane_cp01

0xb794,	// (0x0002947a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xb794,	// (0x0002947a) vkb2_cell_t_keypad_pane_cp02

0xb7a5,	// (0x0002948b) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xb7a5,	// (0x0002948b) vkb2_cell_t_keypad_pane_cp03

0xb7b6,	// (0x0002949c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xb7b6,	// (0x0002949c) vkb2_cell_t_keypad_pane_cp04

0xb7c7,	// (0x000294ad) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xb7c7,	// (0x000294ad) vkb2_cell_t_keypad_pane_cp05

0xb7d8,	// (0x000294be) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xb7d8,	// (0x000294be) vkb2_cell_t_keypad_pane_cp06

0xb7e9,	// (0x000294cf) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xb7e9,	// (0x000294cf) vkb2_cell_t_keypad_pane_cp07

0xb7fa,	// (0x000294e0) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xb7fa,	// (0x000294e0) vkb2_cell_t_keypad_pane_cp10

0xaeca,	// (0x00028bb0) vkb2_cell_t_keypad_pane_g1

0xd297,	// (0x0002af7d) vkb2_cell_t_keypad_pane_t1

0x82ab,	// (0x00025f91) popup_grid_graphic2_window

0xee2f,	// (0x0002cb15) aid_size_cell_graphic2_ParamLimits

0xee2f,	// (0x0002cb15) aid_size_cell_graphic2

0xb80f,	// (0x000294f5) bg_popup_window_pane_cp21_ParamLimits

0xb80f,	// (0x000294f5) bg_popup_window_pane_cp21

0xee5b,	// (0x0002cb41) graphic2_pages_pane_ParamLimits

0xee5b,	// (0x0002cb41) graphic2_pages_pane

0xeea1,	// (0x0002cb87) grid_graphic2_control_pane_ParamLimits

0xeea1,	// (0x0002cb87) grid_graphic2_control_pane

0xeecf,	// (0x0002cbb5) grid_graphic2_pane_ParamLimits

0xeecf,	// (0x0002cbb5) grid_graphic2_pane

0xef2f,	// (0x0002cc15) cell_graphic2_pane

0x4467,	// (0x0002214d) main_comp_mode_pane

0xc55c,	// (0x0002a242) list_ai3_gene_pane_ParamLimits

0xc93f,	// (0x0002a625) bg_popup_window_pane_cp19_ParamLimits

0xc94b,	// (0x0002a631) bg_touch_area_indi_pane_ParamLimits

0xc94b,	// (0x0002a631) bg_touch_area_indi_pane

0xc961,	// (0x0002a647) bg_touch_area_indi_pane_cp01_ParamLimits

0xc961,	// (0x0002a647) bg_touch_area_indi_pane_cp01

0xc977,	// (0x0002a65d) bg_touch_area_indi_pane_cp02_ParamLimits

0xc977,	// (0x0002a65d) bg_touch_area_indi_pane_cp02

0xc98f,	// (0x0002a675) bg_touch_area_indi_pane_cp03_ParamLimits

0xc98f,	// (0x0002a675) bg_touch_area_indi_pane_cp03

0xc9a9,	// (0x0002a68f) popup_slider_window_g1_ParamLimits

0xc9c5,	// (0x0002a6ab) popup_slider_window_g2_ParamLimits

0xc9e1,	// (0x0002a6c7) popup_slider_window_g3_ParamLimits

0xfd0b,	// (0x0002d9f1) popup_slider_window_g_ParamLimits

0xca3d,	// (0x0002a723) popup_slider_window_t1_ParamLimits

0xcab1,	// (0x0002a797) small_volume_slider_vertical_pane_ParamLimits

0xef2f,	// (0x0002cc15) cell_graphic2_pane_ParamLimits

0xef7e,	// (0x0002cc64) bg_button_pane_cp10_ParamLimits

0xef7e,	// (0x0002cc64) bg_button_pane_cp10

0xef91,	// (0x0002cc77) bg_button_pane_cp11_ParamLimits

0xef91,	// (0x0002cc77) bg_button_pane_cp11

0xefa4,	// (0x0002cc8a) graphic2_pages_pane_g1_ParamLimits

0xefa4,	// (0x0002cc8a) graphic2_pages_pane_g1

0xefbf,	// (0x0002cca5) graphic2_pages_pane_g2_ParamLimits

0xefbf,	// (0x0002cca5) graphic2_pages_pane_g2

0x0001,

0xfdcf,	// (0x0002dab5) graphic2_pages_pane_g_ParamLimits

0xfdcf,	// (0x0002dab5) graphic2_pages_pane_g

0xefd7,	// (0x0002ccbd) graphic2_pages_pane_t1_ParamLimits

0xefd7,	// (0x0002ccbd) graphic2_pages_pane_t1

0xefed,	// (0x0002ccd3) cell_graphic2_control_pane_ParamLimits

0xefed,	// (0x0002ccd3) cell_graphic2_control_pane

0xf007,	// (0x0002cced) cell_graphic2_pane_g1_ParamLimits

0xf007,	// (0x0002cced) cell_graphic2_pane_g1

0xf014,	// (0x0002ccfa) cell_graphic2_pane_g2_ParamLimits

0xf014,	// (0x0002ccfa) cell_graphic2_pane_g2

0xf021,	// (0x0002cd07) cell_graphic2_pane_g3_ParamLimits

0xf021,	// (0x0002cd07) cell_graphic2_pane_g3

0xf02e,	// (0x0002cd14) cell_graphic2_pane_g4_ParamLimits

0xf02e,	// (0x0002cd14) cell_graphic2_pane_g4

0xf03b,	// (0x0002cd21) cell_graphic2_pane_g5_ParamLimits

0xf03b,	// (0x0002cd21) cell_graphic2_pane_g5

0x0004,

0xfdd4,	// (0x0002daba) cell_graphic2_pane_g_ParamLimits

0xfdd4,	// (0x0002daba) cell_graphic2_pane_g

0xf056,	// (0x0002cd3c) cell_graphic2_pane_t1_ParamLimits

0xf056,	// (0x0002cd3c) cell_graphic2_pane_t1

0x5b98,	// (0x0002387e) grid_highlight_pane_cp11_ParamLimits

0x5b98,	// (0x0002387e) grid_highlight_pane_cp11

0x4b1e,	// (0x00022804) bg_button_pane_cp05

0xf06c,	// (0x0002cd52) cell_graphic2_control_pane_g1

0xa6ad,	// (0x00028393) bg_touch_area_indi_pane_g1

0xd2a9,	// (0x0002af8f) aid_cmod_rocker_key_size

0xd2b3,	// (0x0002af99) aid_cmode_itu_key_size

0xd2bd,	// (0x0002afa3) main_cmode_video_pane

0xd2c7,	// (0x0002afad) main_comp_mode_itu_pane

0xd2d3,	// (0x0002afb9) main_comp_mode_rocker_pane

0xd2df,	// (0x0002afc5) cell_cmode_rocker_pane_ParamLimits

0xd2df,	// (0x0002afc5) cell_cmode_rocker_pane

0xd2f1,	// (0x0002afd7) cell_cmode_itu_pane_ParamLimits

0xd2f1,	// (0x0002afd7) cell_cmode_itu_pane

0x4b1e,	// (0x00022804) bg_button_pane_cp06_ParamLimits

0x4b1e,	// (0x00022804) bg_button_pane_cp06

0xab4d,	// (0x00028833) cell_cmode_rocker_pane_g1_ParamLimits

0xab4d,	// (0x00028833) cell_cmode_rocker_pane_g1

0xcb55,	// (0x0002a83b) cell_cmode_rocker_pane_g2_ParamLimits

0xcb55,	// (0x0002a83b) cell_cmode_rocker_pane_g2

0x0001,

0xfddf,	// (0x0002dac5) cell_cmode_rocker_pane_g_ParamLimits

0xfddf,	// (0x0002dac5) cell_cmode_rocker_pane_g

0x4467,	// (0x0002214d) bg_button_pane_cp07

0xd306,	// (0x0002afec) cell_cmode_itu_pane_g1

0xd30f,	// (0x0002aff5) cell_cmode_itu_pane_t1

0xd31d,	// (0x0002b003) cell_cmode_itu_pane_t2

0x0001,

0xfde4,	// (0x0002daca) cell_cmode_itu_pane_t

0xcd7b,	// (0x0002aa61) aid_touch_ctrl_left

0xcd83,	// (0x0002aa69) aid_touch_ctrl_right

0x4467,	// (0x0002214d) compa_mode_pane

0xf079,	// (0x0002cd5f) aid_cmod_rocker_key_size_cp

0xf083,	// (0x0002cd69) aid_cmode_itu_key_size_cp

0xd32b,	// (0x0002b011) compa_mode_pane_g1

0xd333,	// (0x0002b019) compa_mode_pane_g2

0xd33b,	// (0x0002b021) compa_mode_pane_g3

0x0002,

0xfde9,	// (0x0002dacf) compa_mode_pane_g

0xf08d,	// (0x0002cd73) main_comp_mode_itu_pane_cp

0xf095,	// (0x0002cd7b) main_comp_mode_rocker_pane_cp

0xf09d,	// (0x0002cd83) cell_cmode_itu_pane_cp_ParamLimits

0xf09d,	// (0x0002cd83) cell_cmode_itu_pane_cp

0xf0b2,	// (0x0002cd98) cell_cmode_rocker_pane_cp_ParamLimits

0xf0b2,	// (0x0002cd98) cell_cmode_rocker_pane_cp

0x4b1e,	// (0x00022804) bg_button_pane_cp06_cp_ParamLimits

0x4b1e,	// (0x00022804) bg_button_pane_cp06_cp

0xab4d,	// (0x00028833) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xab4d,	// (0x00028833) cell_cmode_rocker_pane_g1_cp

0xa6ad,	// (0x00028393) cell_cmode_rocker_pane_g2_cp

0x4467,	// (0x0002214d) bg_button_pane_cp07_cp

0xf0c4,	// (0x0002cdaa) cell_cmode_itu_pane_g1_cp

0xf0cd,	// (0x0002cdb3) cell_cmode_itu_pane_t1_cp

0xf0cd,	// (0x0002cdb3) cell_cmode_itu_pane_t2_cp

0xa025,	// (0x00027d0b) settings_code_pane_cp2

0x44d7,	// (0x000221bd) bg_popup_window_pane_cp3_ParamLimits

0x47d8,	// (0x000224be) heading_pane_cp3_ParamLimits

0x47e4,	// (0x000224ca) listscroll_popup_graphic_pane_ParamLimits

0xa72b,	// (0x00028411) fep_hwr_aid_pane_ParamLimits

0xb1d0,	// (0x00028eb6) aid_touch_sctrl_top_ParamLimits

0xb1eb,	// (0x00028ed1) sctrl_sk_top_pane_g1_ParamLimits

0xaeca,	// (0x00028bb0) sctrl_sk_top_pane_g2_ParamLimits

0xfd24,	// (0x0002da0a) sctrl_sk_top_pane_g_ParamLimits

0xb1f8,	// (0x00028ede) sctrl_sk_top_pane_t1_ParamLimits

0xb1d0,	// (0x00028eb6) aid_touch_sctrl_bottom_ParamLimits

0xb1f8,	// (0x00028ede) sctrl_sk_bottom_pane_t1_ParamLimits

0xccc5,	// (0x0002a9ab) aid_area_touch_clock

0xb3dd,	// (0x000290c3) aid_vkb2_area_top_pane_cell_ParamLimits

0xb3dd,	// (0x000290c3) aid_vkb2_area_top_pane_cell

0xb528,	// (0x0002920e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb528,	// (0x0002920e) aid_vkb2_area_bottom_pane_cell

0xd230,	// (0x0002af16) popup_char_count_window

0xd343,	// (0x0002b029) popup_char_count_window_g1

0xd34c,	// (0x0002b032) popup_char_count_window_g2

0xd355,	// (0x0002b03b) popup_char_count_window_g3

0x0002,

0xfdf0,	// (0x0002dad6) popup_char_count_window_g

0xd35e,	// (0x0002b044) popup_char_count_window_t1

0xb2ab,	// (0x00028f91) popup_fep_char_preview_window_ParamLimits

0xb2ab,	// (0x00028f91) popup_fep_char_preview_window

0xb3fb,	// (0x000290e1) vkb2_top_candi_pane_ParamLimits

0xb3fb,	// (0x000290e1) vkb2_top_candi_pane

0xf0db,	// (0x0002cdc1) cell_vkb2_top_candi_pane_ParamLimits

0xf0db,	// (0x0002cdc1) cell_vkb2_top_candi_pane

0xb81d,	// (0x00029503) bg_popup_fep_char_preview_window_ParamLimits

0xb81d,	// (0x00029503) bg_popup_fep_char_preview_window

0xb82b,	// (0x00029511) popup_fep_char_preview_window_t1_ParamLimits

0xb82b,	// (0x00029511) popup_fep_char_preview_window_t1

0xd36c,	// (0x0002b052) bg_popup_fep_char_preview_window_g1

0xd374,	// (0x0002b05a) bg_popup_fep_char_preview_window_g2

0xd37c,	// (0x0002b062) bg_popup_fep_char_preview_window_g3

0xd384,	// (0x0002b06a) bg_popup_fep_char_preview_window_g4

0xd38c,	// (0x0002b072) bg_popup_fep_char_preview_window_g5

0xb865,	// (0x0002954b) bg_popup_fep_char_preview_window_g6

0xd394,	// (0x0002b07a) bg_popup_fep_char_preview_window_g7

0xd39c,	// (0x0002b082) bg_popup_fep_char_preview_window_g8

0xd3a4,	// (0x0002b08a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf7,	// (0x0002dadd) bg_popup_fep_char_preview_window_g

0xaeca,	// (0x00028bb0) cell_vkb2_top_candi_pane_g1_ParamLimits

0xaeca,	// (0x00028bb0) cell_vkb2_top_candi_pane_g1

0xaed8,	// (0x00028bbe) cell_vkb2_top_candi_pane_g2_ParamLimits

0xaed8,	// (0x00028bbe) cell_vkb2_top_candi_pane_g2

0xba1f,	// (0x00029705) cell_vkb2_top_candi_pane_g3_ParamLimits

0xba1f,	// (0x00029705) cell_vkb2_top_candi_pane_g3

0xb86d,	// (0x00029553) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb86d,	// (0x00029553) cell_vkb2_top_candi_pane_g4

0xbb09,	// (0x000297ef) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbb09,	// (0x000297ef) cell_vkb2_top_candi_pane_g5

0xb88e,	// (0x00029574) cell_vkb2_top_candi_pane_g6_ParamLimits

0xb88e,	// (0x00029574) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0a,	// (0x0002daf0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0a,	// (0x0002daf0) cell_vkb2_top_candi_pane_g

0xb89c,	// (0x00029582) cell_vkb2_top_candi_pane_t1

0x9e64,	// (0x00027b4a) aid_size_touch_slider_mark_ParamLimits

0x9e64,	// (0x00027b4a) aid_size_touch_slider_mark

0xee91,	// (0x0002cb77) grid_graphic2_catg_pane_ParamLimits

0xee91,	// (0x0002cb77) grid_graphic2_catg_pane

0xef0b,	// (0x0002cbf1) popup_grid_graphic2_window_t1_ParamLimits

0xef0b,	// (0x0002cbf1) popup_grid_graphic2_window_t1

0xef1d,	// (0x0002cc03) popup_grid_graphic2_window_t2_ParamLimits

0xef1d,	// (0x0002cc03) popup_grid_graphic2_window_t2

0x0001,

0xfdca,	// (0x0002dab0) popup_grid_graphic2_window_t_ParamLimits

0xfdca,	// (0x0002dab0) popup_grid_graphic2_window_t

0x4b1e,	// (0x00022804) bg_button_pane_cp05_ParamLimits

0xf06c,	// (0x0002cd52) cell_graphic2_control_pane_g1_ParamLimits

0xf128,	// (0x0002ce0e) cell_graphic2_catg_pane_ParamLimits

0xf128,	// (0x0002ce0e) cell_graphic2_catg_pane

0x4467,	// (0x0002214d) bg_button_pane_cp12

0xf13a,	// (0x0002ce20) cell_graphic2_catg_pane_g1

0xcc91,	// (0x0002a977) cell_tb_ext_pane_t1_ParamLimits

0xb645,	// (0x0002932b) vkb2_top_cell_right_narrow_pane_ParamLimits

0xb645,	// (0x0002932b) vkb2_top_cell_right_narrow_pane

0xb65d,	// (0x00029343) vkb2_top_cell_right_wide_pane_ParamLimits

0xb65d,	// (0x00029343) vkb2_top_cell_right_wide_pane

0xa71d,	// (0x00028403) bg_vkb2_func_pane_ParamLimits

0xa71d,	// (0x00028403) bg_vkb2_func_pane

0xb6ce,	// (0x000293b4) vkb2_top_cell_left_pane_g1_ParamLimits

0xa71d,	// (0x00028403) bg_vkb2_fuc_pane_cp03_ParamLimits

0xa71d,	// (0x00028403) bg_vkb2_fuc_pane_cp03

0xb72c,	// (0x00029412) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5ab8,	// (0x0002379e) bg_vkb2_func_pane_g1

0x5ab0,	// (0x00023796) bg_vkb2_func_pane_g2

0x5ac0,	// (0x000237a6) bg_vkb2_func_pane_g3

0x5ac8,	// (0x000237ae) bg_vkb2_func_pane_g4

0x5ad0,	// (0x000237b6) bg_vkb2_func_pane_g5

0x5ad8,	// (0x000237be) bg_vkb2_func_pane_g6

0x5ae8,	// (0x000237ce) bg_vkb2_func_pane_g7

0x5ae0,	// (0x000237c6) bg_vkb2_func_pane_g8

0x5aa8,	// (0x0002378e) bg_vkb2_func_pane_g9

0x0008,

0xfe17,	// (0x0002dafd) bg_vkb2_func_pane_g

0xa71d,	// (0x00028403) bg_vkb2_fuc_pane_cp01_ParamLimits

0xa71d,	// (0x00028403) bg_vkb2_fuc_pane_cp01

0xb6ce,	// (0x000293b4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xb6ce,	// (0x000293b4) vkb2_top_cell_right_wide_pane_g1

0xa71d,	// (0x00028403) bg_vkb2_fuc_pane_cp02_ParamLimits

0xa71d,	// (0x00028403) bg_vkb2_fuc_pane_cp02

0xb72c,	// (0x00029412) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xb72c,	// (0x00029412) vkb2_top_cell_right_narrow_pane_g1

0xc8bd,	// (0x0002a5a3) aid_touch_area_decrease_ParamLimits

0xc8bd,	// (0x0002a5a3) aid_touch_area_decrease

0xc8e1,	// (0x0002a5c7) aid_touch_area_increase_ParamLimits

0xc8e1,	// (0x0002a5c7) aid_touch_area_increase

0xc8ed,	// (0x0002a5d3) aid_touch_area_mute_ParamLimits

0xc8ed,	// (0x0002a5d3) aid_touch_area_mute

0xc911,	// (0x0002a5f7) aid_touch_area_slider_ParamLimits

0xc911,	// (0x0002a5f7) aid_touch_area_slider

0xc9fd,	// (0x0002a6e3) popup_slider_window_g4_ParamLimits

0xc9fd,	// (0x0002a6e3) popup_slider_window_g4

0xca09,	// (0x0002a6ef) popup_slider_window_g5_ParamLimits

0xca09,	// (0x0002a6ef) popup_slider_window_g5

0xca2b,	// (0x0002a711) popup_slider_window_g6_ParamLimits

0xca2b,	// (0x0002a711) popup_slider_window_g6

0xca6b,	// (0x0002a751) popup_slider_window_t2_ParamLimits

0xca6b,	// (0x0002a751) popup_slider_window_t2

0x0001,

0xfd18,	// (0x0002d9fe) popup_slider_window_t_ParamLimits

0xfd18,	// (0x0002d9fe) popup_slider_window_t

0xca83,	// (0x0002a769) slider_pane_ParamLimits

0xca83,	// (0x0002a769) slider_pane

0xd3ac,	// (0x0002b092) slider_pane_g1_ParamLimits

0xd3ac,	// (0x0002b092) slider_pane_g1

0xd3c0,	// (0x0002b0a6) slider_pane_g2_ParamLimits

0xd3c0,	// (0x0002b0a6) slider_pane_g2

0xd3d6,	// (0x0002b0bc) slider_pane_g3_ParamLimits

0xd3d6,	// (0x0002b0bc) slider_pane_g3

0x0003,

0xfe2a,	// (0x0002db10) slider_pane_g_ParamLimits

0xfe2a,	// (0x0002db10) slider_pane_g

0x94cb,	// (0x000271b1) popup_tb_float_extension_window_ParamLimits

0x94cb,	// (0x000271b1) popup_tb_float_extension_window

0xd402,	// (0x0002b0e8) aid_size_cell_tb_float_ext

0x4467,	// (0x0002214d) bg_popup_sub_window_cp28

0xd40e,	// (0x0002b0f4) grid_tb_float_ext_pane

0xd418,	// (0x0002b0fe) cell_tb_float_ext_pane_ParamLimits

0xd418,	// (0x0002b0fe) cell_tb_float_ext_pane

0xd432,	// (0x0002b118) cell_tb_float_ext_pane_g1

0xd43b,	// (0x0002b121) grid_highlight_pane_cp12

0xa89c,	// (0x00028582) cell_last_hwr_side_pane_ParamLimits

0xa89c,	// (0x00028582) cell_last_hwr_side_pane

0xa6ad,	// (0x00028393) cell_last_hwr_side_pane_g1

0xd444,	// (0x0002b12a) cell_last_hwr_side_pane_g2

0x0001,

0xfe33,	// (0x0002db19) cell_last_hwr_side_pane_g

0xb5f4,	// (0x000292da) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb5f4,	// (0x000292da) vkb2_area_bottom_space_btn_pane

0xaeca,	// (0x00028bb0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd297,	// (0x0002af7d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb89c,	// (0x00029582) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb8bb,	// (0x000295a1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb8bb,	// (0x000295a1) vkb2_area_bottom_space_btn_pane_g1

0xb8f5,	// (0x000295db) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb8f5,	// (0x000295db) vkb2_area_bottom_space_btn_pane_g2

0xb92b,	// (0x00029611) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb92b,	// (0x00029611) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe38,	// (0x0002db1e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe38,	// (0x0002db1e) vkb2_area_bottom_space_btn_pane_g

0xa7e0,	// (0x000284c6) cel_fep_hwr_func_pane_ParamLimits

0xa7e0,	// (0x000284c6) cel_fep_hwr_func_pane

0xa84c,	// (0x00028532) cell_hwr_side_button_pane_ParamLimits

0xa84c,	// (0x00028532) cell_hwr_side_button_pane

0xccc5,	// (0x0002a9ab) aid_area_touch_clock_ParamLimits

0x460a,	// (0x000222f0) bg_uniindi_top_pane_ParamLimits

0xccd7,	// (0x0002a9bd) uniindi_top_pane_g1_ParamLimits

0xcced,	// (0x0002a9d3) uniindi_top_pane_g2_ParamLimits

0xccf9,	// (0x0002a9df) uniindi_top_pane_g3_ParamLimits

0xcd0a,	// (0x0002a9f0) uniindi_top_pane_g4_ParamLimits

0xfd50,	// (0x0002da36) uniindi_top_pane_g_ParamLimits

0xcd17,	// (0x0002a9fd) uniindi_top_pane_t1_ParamLimits

0x460a,	// (0x000222f0) bg_vkb2_func_pane_cp01_ParamLimits

0x460a,	// (0x000222f0) bg_vkb2_func_pane_cp01

0xd44d,	// (0x0002b133) cel_fep_hwr_func_pane_g1_ParamLimits

0xd44d,	// (0x0002b133) cel_fep_hwr_func_pane_g1

0x460a,	// (0x000222f0) bg_vkb2_func_pane_cp02_ParamLimits

0x460a,	// (0x000222f0) bg_vkb2_func_pane_cp02

0xd44d,	// (0x0002b133) cell_hwr_side_button_pane_g1_ParamLimits

0xd44d,	// (0x0002b133) cell_hwr_side_button_pane_g1

0x59c0,	// (0x000236a6) status_pane_g4_ParamLimits

0x59c0,	// (0x000236a6) status_pane_g4

0x59d8,	// (0x000236be) status_pane_t1

0x767e,	// (0x00025364) form2_midp_gauge_slider_cont_pane

0x7686,	// (0x0002536c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa449,	// (0x0002812f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa45b,	// (0x00028141) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb17,	// (0x0002d7fd) form2_midp_gauge_slider_pane_t_ParamLimits

0x7698,	// (0x0002537e) form2_midp_slider_pane_ParamLimits

0xb26b,	// (0x00028f51) aid_size_cell_func_vkb2_ParamLimits

0xb26b,	// (0x00028f51) aid_size_cell_func_vkb2

0xd3ee,	// (0x0002b0d4) slider_pane_g4_ParamLimits

0xd3ee,	// (0x0002b0d4) slider_pane_g4

0xb975,	// (0x0002965b) form2_midp_gauge_slider_pane_t2_cp01

0xb983,	// (0x00029669) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb983,	// (0x00029669) form2_midp_gauge_slider_pane_t3_cp01

0xb9a0,	// (0x00029686) form2_midp_slider_pane_cp01

0x4467,	// (0x0002214d) navi_smil_pane

0xd47d,	// (0x0002b163) navi_smil_pane_g1

0xd485,	// (0x0002b16b) navi_smil_pane_t1

0xd45b,	// (0x0002b141) form2_midp_slider_pane_g1

0xd464,	// (0x0002b14a) form2_midp_slider_pane_g2

0xd46c,	// (0x0002b152) form2_midp_slider_pane_g3

0xd45b,	// (0x0002b141) form2_midp_slider_pane_g4

0xf143,	// (0x0002ce29) form2_midp_slider_pane_g5

0x0004,

0xfe41,	// (0x0002db27) form2_midp_slider_pane_g

0xb965,	// (0x0002964b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb965,	// (0x0002964b) vkb2_area_bottom_space_btn_pane_g4

0x9636,	// (0x0002731c) lc0_navi_pane_ParamLimits

0x9636,	// (0x0002731c) lc0_navi_pane

0x96ac,	// (0x00027392) lc0_stat_indi_pane_ParamLimits

0x96ac,	// (0x00027392) lc0_stat_indi_pane

0x96c3,	// (0x000273a9) ls0_title_pane_ParamLimits

0x96c3,	// (0x000273a9) ls0_title_pane

0x4b1e,	// (0x00022804) bg_popup_sub_pane_cp14_ParamLimits

0xccac,	// (0x0002a992) list_uniindi_pane_ParamLimits

0xccb8,	// (0x0002a99e) uniindi_top_pane_ParamLimits

0xcd53,	// (0x0002aa39) list_single_uniindi_pane_g1_ParamLimits

0xcd66,	// (0x0002aa4c) list_single_uniindi_pane_t1_ParamLimits

0xb9a9,	// (0x0002968f) lc0_stat_clock_pane_ParamLimits

0xb9a9,	// (0x0002968f) lc0_stat_clock_pane

0xf14c,	// (0x0002ce32) lc0_stat_indi_pane_g1_ParamLimits

0xf14c,	// (0x0002ce32) lc0_stat_indi_pane_g1

0xf159,	// (0x0002ce3f) lc0_stat_indi_pane_g2_ParamLimits

0xf159,	// (0x0002ce3f) lc0_stat_indi_pane_g2

0x0001,

0xfe4c,	// (0x0002db32) lc0_stat_indi_pane_g_ParamLimits

0xfe4c,	// (0x0002db32) lc0_stat_indi_pane_g

0xb9b6,	// (0x0002969c) lc0_uni_indicator_pane_ParamLimits

0xb9b6,	// (0x0002969c) lc0_uni_indicator_pane

0xf166,	// (0x0002ce4c) ls0_title_pane_g1_ParamLimits

0xf166,	// (0x0002ce4c) ls0_title_pane_g1

0xf17a,	// (0x0002ce60) ls0_title_pane_t1_ParamLimits

0xf17a,	// (0x0002ce60) ls0_title_pane_t1

0xb9c3,	// (0x000296a9) lc0_uni_indicator_pane_g1_ParamLimits

0xb9c3,	// (0x000296a9) lc0_uni_indicator_pane_g1

0xd493,	// (0x0002b179) lc0_stat_clock_pane_t1

0x4467,	// (0x0002214d) main_ai5_pane

0xd4a1,	// (0x0002b187) ai5_sk_pane_ParamLimits

0xd4a1,	// (0x0002b187) ai5_sk_pane

0xf1b0,	// (0x0002ce96) cell_ai5_widget_pane_ParamLimits

0xf1b0,	// (0x0002ce96) cell_ai5_widget_pane

0xd4ae,	// (0x0002b194) aid_size_cell_widget_grid

0xd4c0,	// (0x0002b1a6) bg_ai5_widget_pane_ParamLimits

0xd4c0,	// (0x0002b1a6) bg_ai5_widget_pane

0xf25a,	// (0x0002cf40) cell_ai5_widget_pane_g2

0xf26a,	// (0x0002cf50) cell_ai5_widget_pane_g3

0xf27e,	// (0x0002cf64) cell_ai5_widget_pane_g4

0xf28a,	// (0x0002cf70) cell_ai5_widget_pane_g5

0xf296,	// (0x0002cf7c) cell_ai5_widget_pane_g6

0xf2a2,	// (0x0002cf88) cell_ai5_widget_pane_g7

0xf2ea,	// (0x0002cfd0) cell_ai5_widget_pane_t1_ParamLimits

0xf2ea,	// (0x0002cfd0) cell_ai5_widget_pane_t1

0xf307,	// (0x0002cfed) cell_ai5_widget_pane_t2_ParamLimits

0xf307,	// (0x0002cfed) cell_ai5_widget_pane_t2

0xf31f,	// (0x0002d005) cell_ai5_widget_pane_t3_ParamLimits

0xf31f,	// (0x0002d005) cell_ai5_widget_pane_t3

0xf337,	// (0x0002d01d) cell_ai5_widget_pane_t4_ParamLimits

0xf337,	// (0x0002d01d) cell_ai5_widget_pane_t4

0xf351,	// (0x0002d037) cell_ai5_widget_pane_t5_ParamLimits

0xf351,	// (0x0002d037) cell_ai5_widget_pane_t5

0xd4cc,	// (0x0002b1b2) cell_ai5_widget_pane_t6_ParamLimits

0xd4cc,	// (0x0002b1b2) cell_ai5_widget_pane_t6

0xd4de,	// (0x0002b1c4) cell_ai5_widget_pane_t7_ParamLimits

0xd4de,	// (0x0002b1c4) cell_ai5_widget_pane_t7

0xf370,	// (0x0002d056) cell_ai5_widget_pane_t8_ParamLimits

0xf370,	// (0x0002d056) cell_ai5_widget_pane_t8

0x0009,

0xfe66,	// (0x0002db4c) cell_ai5_widget_pane_t_ParamLimits

0xfe66,	// (0x0002db4c) cell_ai5_widget_pane_t

0xf3b8,	// (0x0002d09e) grid_ai5_widget_pane

0x4b1e,	// (0x00022804) highlight_cell_ai5_widget_pane_ParamLimits

0x4b1e,	// (0x00022804) highlight_cell_ai5_widget_pane

0xf3ce,	// (0x0002d0b4) ai5_sk_left_pane

0xf3d8,	// (0x0002d0be) ai5_sk_middle_pane

0xf3e2,	// (0x0002d0c8) ai5_sk_right_pane

0xd4f7,	// (0x0002b1dd) bg_ai5_widget_pane_g1_ParamLimits

0xd4f7,	// (0x0002b1dd) bg_ai5_widget_pane_g1

0xd503,	// (0x0002b1e9) bg_ai5_widget_pane_g2_ParamLimits

0xd503,	// (0x0002b1e9) bg_ai5_widget_pane_g2

0xd50f,	// (0x0002b1f5) bg_ai5_widget_pane_g3_ParamLimits

0xd50f,	// (0x0002b1f5) bg_ai5_widget_pane_g3

0xd51b,	// (0x0002b201) bg_ai5_widget_pane_g4_ParamLimits

0xd51b,	// (0x0002b201) bg_ai5_widget_pane_g4

0xd527,	// (0x0002b20d) bg_ai5_widget_pane_g5_ParamLimits

0xd527,	// (0x0002b20d) bg_ai5_widget_pane_g5

0xd533,	// (0x0002b219) bg_ai5_widget_pane_g6_ParamLimits

0xd533,	// (0x0002b219) bg_ai5_widget_pane_g6

0xd53f,	// (0x0002b225) bg_ai5_widget_pane_g7_ParamLimits

0xd53f,	// (0x0002b225) bg_ai5_widget_pane_g7

0xd54b,	// (0x0002b231) bg_ai5_widget_pane_g8_ParamLimits

0xd54b,	// (0x0002b231) bg_ai5_widget_pane_g8

0xd557,	// (0x0002b23d) bg_ai5_widget_pane_g9_ParamLimits

0xd557,	// (0x0002b23d) bg_ai5_widget_pane_g9

0x0008,

0xfe7b,	// (0x0002db61) bg_ai5_widget_pane_g_ParamLimits

0xfe7b,	// (0x0002db61) bg_ai5_widget_pane_g

0xd57f,	// (0x0002b265) cell_shortcut_ai5_widget_pane_ParamLimits

0xd57f,	// (0x0002b265) cell_shortcut_ai5_widget_pane

0x4513,	// (0x000221f9) bg_cell_shortcut_ai5_widget_pane

0xd591,	// (0x0002b277) cell_grid_ai5_widget_pane_g1

0xd59a,	// (0x0002b280) highlight_cell_shortcut_ai5_widget_pane

0x5ab8,	// (0x0002379e) ai5_sk_left_pane_g1

0xd5a2,	// (0x0002b288) ai5_sk_left_pane_g2

0xd5aa,	// (0x0002b290) ai5_sk_left_pane_g3

0xd5b2,	// (0x0002b298) ai5_sk_left_pane_g4

0x0003,

0xfe8e,	// (0x0002db74) ai5_sk_left_pane_g

0xd5ba,	// (0x0002b2a0) ai5_sk_left_pane_t1

0x5ab0,	// (0x00023796) ai5_sk_right_pane_g1

0xd5c8,	// (0x0002b2ae) ai5_sk_right_pane_g2

0xd5d0,	// (0x0002b2b6) ai5_sk_right_pane_g3

0xd5d8,	// (0x0002b2be) ai5_sk_right_pane_g4

0x0003,

0xfe97,	// (0x0002db7d) ai5_sk_right_pane_g

0xd5e0,	// (0x0002b2c6) ai5_sk_right_pane_t1

0x5ab0,	// (0x00023796) ai5_sk_middle_pane_g1

0x5ab8,	// (0x0002379e) ai5_sk_middle_pane_g2

0x5ad0,	// (0x000237b6) ai5_sk_middle_pane_g3

0xd5d0,	// (0x0002b2b6) ai5_sk_middle_pane_g4

0xd5aa,	// (0x0002b290) ai5_sk_middle_pane_g5

0xd5ee,	// (0x0002b2d4) ai5_sk_middle_pane_g6

0xf3ec,	// (0x0002d0d2) ai5_sk_middle_pane_g7

0x0006,

0xfea0,	// (0x0002db86) ai5_sk_middle_pane_g

0x957b,	// (0x00027261) aid_touch_area_size_lc0_ParamLimits

0x957b,	// (0x00027261) aid_touch_area_size_lc0

0xaef9,	// (0x00028bdf) cell_hwr_candidate_pane_t1_ParamLimits

0x58e2,	// (0x000235c8) aid_touch_navi_pane

0x9799,	// (0x0002747f) status_dt_navi_pane_ParamLimits

0x9799,	// (0x0002747f) status_dt_navi_pane

0x97a6,	// (0x0002748c) status_dt_sta_pane_ParamLimits

0x97a6,	// (0x0002748c) status_dt_sta_pane

0xf3f4,	// (0x0002d0da) dt_sta_controll_pane

0xf401,	// (0x0002d0e7) dt_sta_indi_pane

0xf412,	// (0x0002d0f8) dt_sta_title_pane

0x460a,	// (0x000222f0) bg_dt_sta_indi_pane_ParamLimits

0x460a,	// (0x000222f0) bg_dt_sta_indi_pane

0xf425,	// (0x0002d10b) dt_sta_battery_pane

0xf42d,	// (0x0002d113) dt_sta_indi_pane_g1

0xd5f6,	// (0x0002b2dc) dt_sta_indi_pane_g2

0xd5ff,	// (0x0002b2e5) dt_sta_indi_pane_g3

0x0002,

0xfeaf,	// (0x0002db95) dt_sta_indi_pane_g

0xd608,	// (0x0002b2ee) dt_sta_signal_pane

0x4b1e,	// (0x00022804) bg_dt_sta_title_pane_ParamLimits

0x4b1e,	// (0x00022804) bg_dt_sta_title_pane

0x672a,	// (0x00024410) dt_sta_title_pane_g1

0xf436,	// (0x0002d11c) dt_sta_title_pane_t1_ParamLimits

0xf436,	// (0x0002d11c) dt_sta_title_pane_t1

0x4467,	// (0x0002214d) bg_dt_sta_control_pane

0xf44b,	// (0x0002d131) dt_sta_controll_pane_g1

0xd611,	// (0x0002b2f7) bg_dt_sta_title_pane_g1

0xd61a,	// (0x0002b300) bg_dt_sta_title_pane_g2

0xd623,	// (0x0002b309) bg_dt_sta_title_pane_g3

0x0002,

0xfeb6,	// (0x0002db9c) bg_dt_sta_title_pane_g

0xa6ad,	// (0x00028393) bg_dt_sta_indi_pane_g1

0xd62c,	// (0x0002b312) dt_sta_signal_pane_g1

0xd634,	// (0x0002b31a) dt_sta_signal_pane_g2

0x0001,

0xfebd,	// (0x0002dba3) dt_sta_signal_pane_g

0xd63c,	// (0x0002b322) dt_sta_battery_pane_g1

0xd645,	// (0x0002b32b) dt_sta_battery_pane_t1

0xa6ad,	// (0x00028393) bg_dt_sta_control_pane_g1

0x50c3,	// (0x00022da9) fep_china_uni_eep_pane

0x50cb,	// (0x00022db1) fep_china_uni_entry_pane_ParamLimits

0x50db,	// (0x00022dc1) popup_fep_china_uni_window_g1_ParamLimits

0x50eb,	// (0x00022dd1) popup_fep_china_uni_window_g2_ParamLimits

0x50eb,	// (0x00022dd1) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0002d43e) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0002d43e) popup_fep_china_uni_window_g

0xd654,	// (0x0002b33a) fep_china_uni_eep_pane_g1

0xd65c,	// (0x0002b342) fep_china_uni_eep_pane_t1

0xd474,	// (0x0002b15a) aid_touch_area_size_smil_player

0x5993,	// (0x00023679) lc0_clock_pane

0x59cc,	// (0x000236b2) status_pane_g5_ParamLimits

0x59cc,	// (0x000236b2) status_pane_g5

0x91dd,	// (0x00026ec3) popup_keymap_window

0x59ac,	// (0x00023692) status_icon_pane

0xf26a,	// (0x0002cf50) cell_ai5_widget_pane_g3_ParamLimits

0xf27e,	// (0x0002cf64) cell_ai5_widget_pane_g4_ParamLimits

0xf28a,	// (0x0002cf70) cell_ai5_widget_pane_g5_ParamLimits

0xf2ae,	// (0x0002cf94) cell_ai5_widget_pane_g8_ParamLimits

0xf2ae,	// (0x0002cf94) cell_ai5_widget_pane_g8

0xf2c2,	// (0x0002cfa8) cell_ai5_widget_pane_g9_ParamLimits

0xf2c2,	// (0x0002cfa8) cell_ai5_widget_pane_g9

0xf2d6,	// (0x0002cfbc) cell_ai5_widget_pane_g10_ParamLimits

0xf2d6,	// (0x0002cfbc) cell_ai5_widget_pane_g10

0xd66b,	// (0x0002b351) status_icon_pane_g1

0x4467,	// (0x0002214d) bg_popup_sub_pane_cp13

0xd673,	// (0x0002b359) popup_keymap_window_t1

0x8fb8,	// (0x00026c9e) control_pane_g6_ParamLimits

0x8fb8,	// (0x00026c9e) control_pane_g6

0x8fc5,	// (0x00026cab) control_pane_g7_ParamLimits

0x8fc5,	// (0x00026cab) control_pane_g7

0x8fd2,	// (0x00026cb8) control_pane_g8_ParamLimits

0x8fd2,	// (0x00026cb8) control_pane_g8

0xf3f4,	// (0x0002d0da) dt_sta_controll_pane_ParamLimits

0xf401,	// (0x0002d0e7) dt_sta_indi_pane_ParamLimits

0xf412,	// (0x0002d0f8) dt_sta_title_pane_ParamLimits

0x4a60,	// (0x00022746) aid_size_touch_scroll_bar_cale

0x8384,	// (0x0002606a) popup_discreet_window_ParamLimits

0x8384,	// (0x0002606a) popup_discreet_window

0x83fe,	// (0x000260e4) popup_sk_window

0x6024,	// (0x00023d0a) bg_popup_sub_pane_cp28_ParamLimits

0x6024,	// (0x00023d0a) bg_popup_sub_pane_cp28

0xd681,	// (0x0002b367) popup_discreet_window_g1_ParamLimits

0xd681,	// (0x0002b367) popup_discreet_window_g1

0xd6a1,	// (0x0002b387) popup_discreet_window_t1_ParamLimits

0xd6a1,	// (0x0002b387) popup_discreet_window_t1

0xd6bf,	// (0x0002b3a5) popup_discreet_window_t2_ParamLimits

0xd6bf,	// (0x0002b3a5) popup_discreet_window_t2

0x0002,

0xfec2,	// (0x0002dba8) popup_discreet_window_t_ParamLimits

0xfec2,	// (0x0002dba8) popup_discreet_window_t

0xb9d9,	// (0x000296bf) popup_sk_window_g1

0xb9e3,	// (0x000296c9) popup_sk_window_g2

0x0001,

0xfec9,	// (0x0002dbaf) popup_sk_window_g

0xd711,	// (0x0002b3f7) popup_sk_window_t1

0xd71f,	// (0x0002b405) popup_sk_window_t1_copy1

0xf25a,	// (0x0002cf40) cell_ai5_widget_pane_g2_ParamLimits

0xf382,	// (0x0002d068) cell_ai5_widget_pane_t9_ParamLimits

0xf382,	// (0x0002d068) cell_ai5_widget_pane_t9

0x4467,	// (0x0002214d) main_fep_fshwr2_pane

0xf454,	// (0x0002d13a) aid_fshwr2_btn_pane

0xf45c,	// (0x0002d142) aid_fshwr2_syb_pane

0xf464,	// (0x0002d14a) aid_fshwr2_txt_pane

0xf46c,	// (0x0002d152) fshwr2_func_candi_pane

0xf478,	// (0x0002d15e) fshwr2_hwr_syb_pane

0xf484,	// (0x0002d16a) fshwr2_icf_pane

0x4467,	// (0x0002214d) fshwr2_icf_bg_pane

0xf48e,	// (0x0002d174) fshwr2_icf_pane_t1_ParamLimits

0xf48e,	// (0x0002d174) fshwr2_icf_pane_t1

0xa6ad,	// (0x00028393) fshwr2_func_candi_pane_g1

0xd741,	// (0x0002b427) fshwr2_func_candi_row_pane_ParamLimits

0xd741,	// (0x0002b427) fshwr2_func_candi_row_pane

0xf4a5,	// (0x0002d18b) cell_fshwr2_syb_pane_ParamLimits

0xf4a5,	// (0x0002d18b) cell_fshwr2_syb_pane

0xab4d,	// (0x00028833) fshwr2_hwr_syb_pane_g1_ParamLimits

0xab4d,	// (0x00028833) fshwr2_hwr_syb_pane_g1

0x4467,	// (0x0002214d) bg_popup_call_pane_cp01

0xd752,	// (0x0002b438) fshwr2_func_candi_cell_pane_ParamLimits

0xd752,	// (0x0002b438) fshwr2_func_candi_cell_pane

0xd783,	// (0x0002b469) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xd783,	// (0x0002b469) fshwr2_func_candi_cell_bg_pane

0xd79d,	// (0x0002b483) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd79d,	// (0x0002b483) fshwr2_func_candi_cell_pane_g1

0xd7bd,	// (0x0002b4a3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd7bd,	// (0x0002b4a3) fshwr2_func_candi_cell_pane_t1

0x4467,	// (0x0002214d) bg_button_pane_cp08

0x5554,	// (0x0002323a) cell_fshwr2_syb_bg_pane

0xf4c1,	// (0x0002d1a7) cell_fshwr2_syb_bg_pane_g1

0xd7d0,	// (0x0002b4b6) cell_fshwr2_syb_bg_pane_t1

0x4b1e,	// (0x00022804) main_tmo_pane

0x9d98,	// (0x00027a7e) uni_indicator_pane_g1_ParamLimits

0x9dad,	// (0x00027a93) uni_indicator_pane_g2_ParamLimits

0x9dc3,	// (0x00027aa9) uni_indicator_pane_g3_ParamLimits

0x69ee,	// (0x000246d4) uni_indicator_pane_g4_ParamLimits

0x69ee,	// (0x000246d4) uni_indicator_pane_g4

0x6a20,	// (0x00024706) uni_indicator_pane_g5_ParamLimits

0x6a20,	// (0x00024706) uni_indicator_pane_g5

0x6a34,	// (0x0002471a) uni_indicator_pane_g6_ParamLimits

0x6a34,	// (0x0002471a) uni_indicator_pane_g6

0xf950,	// (0x0002d636) uni_indicator_pane_g_ParamLimits

0xc89f,	// (0x0002a585) popup_tmo_note_window_ParamLimits

0xc89f,	// (0x0002a585) popup_tmo_note_window

0x4467,	// (0x0002214d) fshwr2_bg_pane

0xd7ae,	// (0x0002b494) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd7ae,	// (0x0002b494) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfece,	// (0x0002dbb4) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfece,	// (0x0002dbb4) fshwr2_func_candi_cell_pane_g

0xa6ad,	// (0x00028393) bg_popup_window_pane_cp01

0xd7df,	// (0x0002b4c5) bg_popup_window_pane_g1_cp01

0xd7e8,	// (0x0002b4ce) bg_popup_window_pane_cp22_ParamLimits

0xd7e8,	// (0x0002b4ce) bg_popup_window_pane_cp22

0xd7f6,	// (0x0002b4dc) listscroll_tmo_link_pane_ParamLimits

0xd7f6,	// (0x0002b4dc) listscroll_tmo_link_pane

0xd836,	// (0x0002b51c) popup_tmo_note_window_g1_ParamLimits

0xd836,	// (0x0002b51c) popup_tmo_note_window_g1

0xd843,	// (0x0002b529) tmo_note_info_pane_ParamLimits

0xd843,	// (0x0002b529) tmo_note_info_pane

0xf4c9,	// (0x0002d1af) list_tmo_note_info_pane_g1_ParamLimits

0xf4c9,	// (0x0002d1af) list_tmo_note_info_pane_g1

0xd85d,	// (0x0002b543) list_tmo_note_info_pane_g2_ParamLimits

0xd85d,	// (0x0002b543) list_tmo_note_info_pane_g2

0x0001,

0xfed3,	// (0x0002dbb9) list_tmo_note_info_pane_g_ParamLimits

0xfed3,	// (0x0002dbb9) list_tmo_note_info_pane_g

0xd879,	// (0x0002b55f) list_tmo_note_info_text_pane_ParamLimits

0xd879,	// (0x0002b55f) list_tmo_note_info_text_pane

0xd8bb,	// (0x0002b5a1) list_tmo_link_pane

0xd8c8,	// (0x0002b5ae) scroll_pane_cp20

0xd8d5,	// (0x0002b5bb) list_single_tmo_link_pane_ParamLimits

0xd8d5,	// (0x0002b5bb) list_single_tmo_link_pane

0xd8e5,	// (0x0002b5cb) list_single_tmo_link_pane_t1

0xd8f3,	// (0x0002b5d9) list_tmo_note_info_text_pane_t1_ParamLimits

0xd8f3,	// (0x0002b5d9) list_tmo_note_info_text_pane_t1

0x8803,	// (0x000264e9) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8803,	// (0x000264e9) aid_size_touch_scroll_bar_cp01

0xe462,	// (0x0002c148) aid_size_touch_slider_marker

0x83e6,	// (0x000260cc) popup_settings_window_ParamLimits

0x83e6,	// (0x000260cc) popup_settings_window

0xe62a,	// (0x0002c310) popup_candi_list_indi_window

0x58e2,	// (0x000235c8) aid_touch_navi_pane_ParamLimits

0xb1a4,	// (0x00028e8a) rs_clock_indi_pane

0xb1ad,	// (0x00028e93) sctrl_sk_bottom_pane_ParamLimits

0xb1be,	// (0x00028ea4) sctrl_sk_top_pane_ParamLimits

0xb2c5,	// (0x00028fab) popup_fep_tooltip_window

0xd4ae,	// (0x0002b194) aid_size_cell_widget_grid_ParamLimits

0xf24e,	// (0x0002cf34) cell_ai5_widget_pane_g1_ParamLimits

0xf24e,	// (0x0002cf34) cell_ai5_widget_pane_g1

0xf296,	// (0x0002cf7c) cell_ai5_widget_pane_g6_ParamLimits

0xf2a2,	// (0x0002cf88) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe51,	// (0x0002db37) cell_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x0002db37) cell_ai5_widget_pane_g

0xf3a6,	// (0x0002d08c) cell_ai5_widget_pane_t10_ParamLimits

0xf3a6,	// (0x0002d08c) cell_ai5_widget_pane_t10

0xf3b8,	// (0x0002d09e) grid_ai5_widget_pane_ParamLimits

0xd563,	// (0x0002b249) cell_contacts_ai5_widget_pane_ParamLimits

0xd563,	// (0x0002b249) cell_contacts_ai5_widget_pane

0xd6d4,	// (0x0002b3ba) popup_discreet_window_t3_ParamLimits

0xd6d4,	// (0x0002b3ba) popup_discreet_window_t3

0xd72d,	// (0x0002b413) popup_fshwr2_char_preview_window_ParamLimits

0xd72d,	// (0x0002b413) popup_fshwr2_char_preview_window

0xf4e0,	// (0x0002d1c6) tmo_note_info_pane_t1

0xf4f5,	// (0x0002d1db) tmo_note_info_pane_t2

0xf50e,	// (0x0002d1f4) tmo_note_info_pane_t3

0xd897,	// (0x0002b57d) tmo_note_info_pane_t4

0xd8a9,	// (0x0002b58f) tmo_note_info_pane_t5

0x0004,

0xfed8,	// (0x0002dbbe) tmo_note_info_pane_t

0xd8bb,	// (0x0002b5a1) list_tmo_link_pane_ParamLimits

0xd8c8,	// (0x0002b5ae) scroll_pane_cp20_ParamLimits

0x4467,	// (0x0002214d) bg_popup_fep_char_preview_window_cp01

0xd90c,	// (0x0002b5f2) popup_fshwr2_char_preview_window_t1

0xd91a,	// (0x0002b600) popup_candi_list_indi_window_g1

0xd923,	// (0x0002b609) bg_cell_contacts_ai5_widget_pane

0xd92f,	// (0x0002b615) cell_contacts_ai5_widget_pane_g1

0xd943,	// (0x0002b629) cell_contacts_ai5_widget_pane_g2

0xd952,	// (0x0002b638) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee3,	// (0x0002dbc9) cell_contacts_ai5_widget_pane_g

0xd965,	// (0x0002b64b) cell_contacts_ai5_widget_pane_t1

0x4b1e,	// (0x00022804) highlight_cell_shortcut_ai5_widget_pane_cp01

0xd9df,	// (0x0002b6c5) settings_container_pane

0x5554,	// (0x0002323a) listscroll_set_pane_copy1

0x7211,	// (0x00024ef7) scroll_pane_cp121_copy1

0xd9eb,	// (0x0002b6d1) set_content_pane_copy1

0xd9f3,	// (0x0002b6d9) aid_height_set_list_copy1_ParamLimits

0xd9f3,	// (0x0002b6d9) aid_height_set_list_copy1

0x6a02,	// (0x000246e8) aid_size_parent_copy1_ParamLimits

0x6a02,	// (0x000246e8) aid_size_parent_copy1

0xd9ff,	// (0x0002b6e5) button_value_adjust_pane_cp6_copy1_ParamLimits

0xd9ff,	// (0x0002b6e5) button_value_adjust_pane_cp6_copy1

0x57b6,	// (0x0002349c) list_highlight_pane_cp2_copy1_ParamLimits

0x57b6,	// (0x0002349c) list_highlight_pane_cp2_copy1

0xda13,	// (0x0002b6f9) list_set_pane_copy1_ParamLimits

0xda13,	// (0x0002b6f9) list_set_pane_copy1

0xd97a,	// (0x0002b660) main_pane_set_t1_copy1_ParamLimits

0xd97a,	// (0x0002b660) main_pane_set_t1_copy1

0xd9b4,	// (0x0002b69a) main_pane_set_t2_copy1_ParamLimits

0xd9b4,	// (0x0002b69a) main_pane_set_t2_copy1

0xdac0,	// (0x0002b7a6) main_pane_set_t3_copy1

0xdace,	// (0x0002b7b4) main_pane_set_t4_copy1

0xd9d3,	// (0x0002b6b9) set_content_pane_g1_copy1_ParamLimits

0xd9d3,	// (0x0002b6b9) set_content_pane_g1_copy1

0xdadc,	// (0x0002b7c2) setting_code_pane_copy1

0xdae6,	// (0x0002b7cc) setting_slider_graphic_pane_copy1

0xdae6,	// (0x0002b7cc) setting_slider_pane_copy1

0xdaf0,	// (0x0002b7d6) setting_text_pane_copy1

0xdafa,	// (0x0002b7e0) setting_volume_pane_copy1

0xdb03,	// (0x0002b7e9) settings_code_pane_cp2_copy1

0xdb0b,	// (0x0002b7f1) settings_code_pane_cp_copy1_ParamLimits

0xdb0b,	// (0x0002b7f1) settings_code_pane_cp_copy1

0xdb1f,	// (0x0002b805) volume_set_pane_copy1

0xdb27,	// (0x0002b80d) volume_set_pane_g10_copy1

0xdb2f,	// (0x0002b815) volume_set_pane_g1_copy1

0xdb37,	// (0x0002b81d) volume_set_pane_g2_copy1

0xdb3f,	// (0x0002b825) volume_set_pane_g3_copy1

0xdb47,	// (0x0002b82d) volume_set_pane_g4_copy1

0xdb4f,	// (0x0002b835) volume_set_pane_g5_copy1

0xdb57,	// (0x0002b83d) volume_set_pane_g6_copy1

0xdb5f,	// (0x0002b845) volume_set_pane_g7_copy1

0xdb67,	// (0x0002b84d) volume_set_pane_g8_copy1

0xdb6f,	// (0x0002b855) volume_set_pane_g9_copy1

0x44d7,	// (0x000221bd) bg_set_opt_pane_cp_copy1_ParamLimits

0x44d7,	// (0x000221bd) bg_set_opt_pane_cp_copy1

0xdb77,	// (0x0002b85d) setting_slider_pane_t1_copy1_ParamLimits

0xdb77,	// (0x0002b85d) setting_slider_pane_t1_copy1

0xdb95,	// (0x0002b87b) setting_slider_pane_t2_copy1_ParamLimits

0xdb95,	// (0x0002b87b) setting_slider_pane_t2_copy1

0xdbaf,	// (0x0002b895) setting_slider_pane_t3_copy1_ParamLimits

0xdbaf,	// (0x0002b895) setting_slider_pane_t3_copy1

0xdbc7,	// (0x0002b8ad) slider_set_pane_copy1_ParamLimits

0xdbc7,	// (0x0002b8ad) slider_set_pane_copy1

0x4b85,	// (0x0002286b) set_opt_bg_pane_g1_copy2

0x4b8d,	// (0x00022873) set_opt_bg_pane_g2_copy2

0xdbdd,	// (0x0002b8c3) set_opt_bg_pane_g3_copy2

0x4b9d,	// (0x00022883) set_opt_bg_pane_g4_copy2

0x4ba5,	// (0x0002288b) set_opt_bg_pane_g5_copy2

0x4bad,	// (0x00022893) set_opt_bg_pane_g6_copy2

0xdbe7,	// (0x0002b8cd) set_opt_bg_pane_g7_copy2

0xdbef,	// (0x0002b8d5) set_opt_bg_pane_g8_copy2

0xdbf9,	// (0x0002b8df) set_opt_bg_pane_g9_copy2

0xb9ed,	// (0x000296d3) aid_size_touch_slider_mark_copy1_ParamLimits

0xb9ed,	// (0x000296d3) aid_size_touch_slider_mark_copy1

0xdc03,	// (0x0002b8e9) slider_set_pane_g1_copy1

0xba01,	// (0x000296e7) slider_set_pane_g2_copy1

0x9e84,	// (0x00027b6a) slider_set_pane_g3_copy1_ParamLimits

0x9e84,	// (0x00027b6a) slider_set_pane_g3_copy1

0x9e98,	// (0x00027b7e) slider_set_pane_g4_copy1_ParamLimits

0x9e98,	// (0x00027b7e) slider_set_pane_g4_copy1

0x9eb0,	// (0x00027b96) slider_set_pane_g5_copy1_ParamLimits

0x9eb0,	// (0x00027b96) slider_set_pane_g5_copy1

0x9e84,	// (0x00027b6a) slider_set_pane_g6_copy1_ParamLimits

0x9e84,	// (0x00027b6a) slider_set_pane_g6_copy1

0xba09,	// (0x000296ef) slider_set_pane_g7_copy1_ParamLimits

0xba09,	// (0x000296ef) slider_set_pane_g7_copy1

0x447b,	// (0x00022161) bg_set_opt_pane_cp2_copy1

0xdc0c,	// (0x0002b8f2) setting_slider_graphic_pane_g1_copy1

0xdc15,	// (0x0002b8fb) setting_slider_graphic_pane_t1_copy1

0xdc25,	// (0x0002b90b) setting_slider_graphic_pane_t2_copy1

0xdc35,	// (0x0002b91b) slider_set_pane_cp_copy1

0xdc45,	// (0x0002b92b) input_focus_pane_cp1_copy1

0xdc4e,	// (0x0002b934) list_set_text_pane_copy1

0xdc56,	// (0x0002b93c) setting_text_pane_g1_copy1

0xedd1,	// (0x0002cab7) set_text_pane_t1_copy1

0xdc45,	// (0x0002b92b) input_focus_pane_cp2_copy1

0xdc56,	// (0x0002b93c) setting_code_pane_g1_copy1

0xdc5f,	// (0x0002b945) setting_code_pane_t1_copy1

0xdc6d,	// (0x0002b953) list_set_graphic_pane_copy1

0x447b,	// (0x00022161) bg_set_opt_pane_cp4_copy1

0x5256,	// (0x00022f3c) list_set_graphic_pane_g1_copy1_ParamLimits

0x5256,	// (0x00022f3c) list_set_graphic_pane_g1_copy1

0xdc81,	// (0x0002b967) list_set_graphic_pane_g2_copy1

0x526e,	// (0x00022f54) list_set_graphic_pane_t1_copy1_ParamLimits

0x526e,	// (0x00022f54) list_set_graphic_pane_t1_copy1

0xa6ad,	// (0x00028393) rs_clock_indi_pane_g1

0xdc89,	// (0x0002b96f) rs_clock_indi_pane_t1

0xdc97,	// (0x0002b97d) rs_indi_pane

0xdc9f,	// (0x0002b985) rs_indi_pane_g1

0xdca8,	// (0x0002b98e) rs_indi_pane_g2

0xdcb1,	// (0x0002b997) rs_indi_pane_g3

0x0002,

0xfeea,	// (0x0002dbd0) rs_indi_pane_g

0x5554,	// (0x0002323a) bg_popup_preview_window_pane_cp03

0xdcba,	// (0x0002b9a0) popup_fep_tooltip_window_t1

0xc034,	// (0x00029d1a) popup_note2_window_g2_ParamLimits

0xc034,	// (0x00029d1a) popup_note2_window_g2

0x0001,

0xfc8f,	// (0x0002d975) popup_note2_window_g_ParamLimits

0xfc8f,	// (0x0002d975) popup_note2_window_g

0xc522,	// (0x0002a208) bg_popup_sub_pane_cp11_ParamLimits

0xc52f,	// (0x0002a215) cell_ai3_links_pane_g1_ParamLimits

0xc546,	// (0x0002a22c) cell_ai3_links_pane_t1

0xedd1,	// (0x0002cab7) set_text_pane_t1_copy1_ParamLimits

0x5463,	// (0x00023149) cell_graphic_popup_pane_cp2_ParamLimits

0x5463,	// (0x00023149) cell_graphic_popup_pane_cp2

0xdcc8,	// (0x0002b9ae) cell_graphic_popup_pane_g1_cp2

0x4873,	// (0x00022559) cell_graphic_popup_pane_g2_cp2

0xdcd0,	// (0x0002b9b6) cell_graphic_popup_pane_g3_cp2

0xdcd8,	// (0x0002b9be) cell_graphic_popup_pane_t2_cp2

0x4884,	// (0x0002256a) grid_highlight_pane_cp3_cp2

0x4e13,	// (0x00022af9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4b1e,	// (0x00022804) main_tmo_pane_ParamLimits

0xc893,	// (0x0002a579) popup_tmo_big_image_note_window

0xf23e,	// (0x0002cf24) cell_ai5_widget_list_pane

0xf246,	// (0x0002cf2c) cell_ai5_widget_lrg_icon_pane

0xf4e0,	// (0x0002d1c6) tmo_note_info_pane_t1_ParamLimits

0xf4f5,	// (0x0002d1db) tmo_note_info_pane_t2_ParamLimits

0xf50e,	// (0x0002d1f4) tmo_note_info_pane_t3_ParamLimits

0xd897,	// (0x0002b57d) tmo_note_info_pane_t4_ParamLimits

0xd8a9,	// (0x0002b58f) tmo_note_info_pane_t5_ParamLimits

0xfed8,	// (0x0002dbbe) tmo_note_info_pane_t_ParamLimits

0xd9df,	// (0x0002b6c5) settings_container_pane_ParamLimits

0xdc3d,	// (0x0002b923) indicator_popup_pane_cp5

0xdc3d,	// (0x0002b923) indicator_popup_pane_cp6

0xdc6d,	// (0x0002b953) list_set_graphic_pane_copy1_ParamLimits

0x4467,	// (0x0002214d) bg_popup_window_pane_cp23

0xdce6,	// (0x0002b9cc) popup_tmo_big_image_note_window_g1

0xdcf1,	// (0x0002b9d7) popup_tmo_big_image_note_window_t1

0xdd01,	// (0x0002b9e7) popup_tmo_big_image_note_window_t2

0xdd11,	// (0x0002b9f7) popup_tmo_big_image_note_window_t3

0x0002,

0xfef1,	// (0x0002dbd7) popup_tmo_big_image_note_window_t

0xf523,	// (0x0002d209) cell_ai5_widget_lrg_icon_pane_g1

0xf52b,	// (0x0002d211) cell_ai5_widget_lrg_icon_pane_t1

0xf539,	// (0x0002d21f) cell_ai5_widget_list_row_pane_ParamLimits

0xf539,	// (0x0002d21f) cell_ai5_widget_list_row_pane

0xf552,	// (0x0002d238) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf552,	// (0x0002d238) cell_ai5_widget_list_row_pane_g1

0xf55f,	// (0x0002d245) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf55f,	// (0x0002d245) cell_ai5_widget_list_row_pane_t1

0xf577,	// (0x0002d25d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf577,	// (0x0002d25d) cell_ai5_widget_list_row_pane_t2

0x0001,

0x0932,	// (0x0001e618) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0932,	// (0x0001e618) cell_ai5_widget_list_row_pane_t

0x82ab,	// (0x00025f91) main_fep_vtchi_ss_pane

0xdd21,	// (0x0002ba07) popup_fep_char_pre_window

0xdd29,	// (0x0002ba0f) popup_fep_ituss_window

0xdd34,	// (0x0002ba1a) popup_fep_vkbss_window

0xdd3d,	// (0x0002ba23) grid_vkbss_keypad_pane_ParamLimits

0xdd3d,	// (0x0002ba23) grid_vkbss_keypad_pane

0xdd4d,	// (0x0002ba33) ituss_keypad_pane

0xdd55,	// (0x0002ba3b) aid_vkbss_key_offset_ParamLimits

0xdd55,	// (0x0002ba3b) aid_vkbss_key_offset

0xdd64,	// (0x0002ba4a) cell_vkbss_key_pane_ParamLimits

0xdd64,	// (0x0002ba4a) cell_vkbss_key_pane

0xdd7a,	// (0x0002ba60) bg_cell_vkbss_key_g1_ParamLimits

0xdd7a,	// (0x0002ba60) bg_cell_vkbss_key_g1

0xdd86,	// (0x0002ba6c) cell_vkbss_key_3p_pane_ParamLimits

0xdd86,	// (0x0002ba6c) cell_vkbss_key_3p_pane

0xdda0,	// (0x0002ba86) cell_vkbss_key_g1_ParamLimits

0xdda0,	// (0x0002ba86) cell_vkbss_key_g1

0xddba,	// (0x0002baa0) cell_vkbss_key_t1_ParamLimits

0xddba,	// (0x0002baa0) cell_vkbss_key_t1

0xdde5,	// (0x0002bacb) cell_ituss_key_pane_ParamLimits

0xdde5,	// (0x0002bacb) cell_ituss_key_pane

0xddf4,	// (0x0002bada) bg_cell_ituss_key_g1_ParamLimits

0xddf4,	// (0x0002bada) bg_cell_ituss_key_g1

0xde00,	// (0x0002bae6) cell_ituss_key_pane_g1_ParamLimits

0xde00,	// (0x0002bae6) cell_ituss_key_pane_g1

0xde0c,	// (0x0002baf2) cell_ituss_key_pane_g2_ParamLimits

0xde0c,	// (0x0002baf2) cell_ituss_key_pane_g2

0x0001,

0xfef8,	// (0x0002dbde) cell_ituss_key_pane_g_ParamLimits

0xfef8,	// (0x0002dbde) cell_ituss_key_pane_g

0xde1f,	// (0x0002bb05) cell_ituss_key_t1_ParamLimits

0xde1f,	// (0x0002bb05) cell_ituss_key_t1

0xde3d,	// (0x0002bb23) cell_ituss_key_t2_ParamLimits

0xde3d,	// (0x0002bb23) cell_ituss_key_t2

0xde5c,	// (0x0002bb42) cell_ituss_key_t3_ParamLimits

0xde5c,	// (0x0002bb42) cell_ituss_key_t3

0xde7b,	// (0x0002bb61) cell_ituss_key_t4_ParamLimits

0xde7b,	// (0x0002bb61) cell_ituss_key_t4

0x0003,

0xfefd,	// (0x0002dbe3) cell_ituss_key_t_ParamLimits

0xfefd,	// (0x0002dbe3) cell_ituss_key_t

0xde9a,	// (0x0002bb80) cell_vkbss_key_3p_pane_g1

0xdea2,	// (0x0002bb88) cell_vkbss_key_3p_pane_g2

0xdeaa,	// (0x0002bb90) cell_vkbss_key_3p_pane_g3

0x0002,

0xff06,	// (0x0002dbec) cell_vkbss_key_3p_pane_g

0x4467,	// (0x0002214d) bg_popup_fep_char_preview_window_cp02

0xdeb2,	// (0x0002bb98) popup_fep_char_pre_window_t1

0xf234,	// (0x0002cf1a) main_ai5_sk_pane

0xd923,	// (0x0002b609) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xd92f,	// (0x0002b615) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xd943,	// (0x0002b629) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xd952,	// (0x0002b638) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee3,	// (0x0002dbc9) cell_contacts_ai5_widget_pane_g_ParamLimits

0xd965,	// (0x0002b64b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4b1e,	// (0x00022804) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0002d26f) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
