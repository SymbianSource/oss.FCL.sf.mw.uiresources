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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00035c45 };

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
0x95b6,	// (0x0003f1fb) Screen

0x95c2,	// (0x0003f207) application_window_ParamLimits

0x95c2,	// (0x0003f207) application_window

0xb946,	// (0x0004158b) screen_g1

0x95fa,	// (0x0003f23f) area_bottom_pane_ParamLimits

0x95fa,	// (0x0003f23f) area_bottom_pane

0xeafc,	// (0x00044741) area_top_pane_ParamLimits

0xeafc,	// (0x00044741) area_top_pane

0xeb9a,	// (0x000447df) main_pane_ParamLimits

0xeb9a,	// (0x000447df) main_pane

0xb950,	// (0x00041595) misc_graphics

0xc115,	// (0x00041d5a) battery_pane_ParamLimits

0xc115,	// (0x00041d5a) battery_pane

0x3894,	// (0x000394d9) bg_status_flat_pane_g8

0x389c,	// (0x000394e1) bg_status_flat_pane_g9

0x2c94,	// (0x000388d9) context_pane_ParamLimits

0x2c94,	// (0x000388d9) context_pane

0xc28c,	// (0x00041ed1) navi_pane_ParamLimits

0xc28c,	// (0x00041ed1) navi_pane

0xc316,	// (0x00041f5b) signal_pane_ParamLimits

0xc316,	// (0x00041f5b) signal_pane

0x0008,

0xf84f,	// (0x00045494) bg_status_flat_pane_g

0xc3a6,	// (0x00041feb) status_pane_g1_ParamLimits

0xc3a6,	// (0x00041feb) status_pane_g1

0xc3bc,	// (0x00042001) status_pane_g2_ParamLimits

0xc3bc,	// (0x00042001) status_pane_g2

0x2ecd,	// (0x00038b12) status_pane_g3_ParamLimits

0x2ecd,	// (0x00038b12) status_pane_g3

0x0004,

0xf77b,	// (0x000453c0) status_pane_g_ParamLimits

0xf77b,	// (0x000453c0) status_pane_g

0xc3c8,	// (0x0004200d) title_pane_ParamLimits

0xc3c8,	// (0x0004200d) title_pane

0xc42f,	// (0x00042074) uni_indicator_pane_ParamLimits

0xc42f,	// (0x00042074) uni_indicator_pane

0x2afe,	// (0x00038743) bg_list_pane_ParamLimits

0x2afe,	// (0x00038743) bg_list_pane

0xa781,	// (0x000403c6) find_pane

0x30c8,	// (0x00038d0d) listscroll_app_pane_ParamLimits

0x30c8,	// (0x00038d0d) listscroll_app_pane

0x2b2a,	// (0x0003876f) listscroll_form_pane

0xa789,	// (0x000403ce) listscroll_gen_pane_ParamLimits

0xa789,	// (0x000403ce) listscroll_gen_pane

0x03d8,	// (0x0003601d) listscroll_set_pane

0x4431,	// (0x0003a076) main_idle_act_pane

0x27f7,	// (0x0003843c) main_idle_trad_pane

0x27f7,	// (0x0003843c) main_list_empty_pane

0x2b1e,	// (0x00038763) main_midp_pane

0x2b44,	// (0x00038789) main_pane_g1_ParamLimits

0x2b44,	// (0x00038789) main_pane_g1

0xa79d,	// (0x000403e2) popup_ai_message_window_ParamLimits

0xa79d,	// (0x000403e2) popup_ai_message_window

0xa83d,	// (0x00040482) popup_fep_china_uni_window_ParamLimits

0xa83d,	// (0x00040482) popup_fep_china_uni_window

0x0502,	// (0x00036147) popup_fep_japan_candidate_window_ParamLimits

0x0502,	// (0x00036147) popup_fep_japan_candidate_window

0x052c,	// (0x00036171) popup_fep_japan_predictive_window_ParamLimits

0x052c,	// (0x00036171) popup_fep_japan_predictive_window

0xa89d,	// (0x000404e2) popup_find_window

0xa8ba,	// (0x000404ff) popup_grid_graphic_window_ParamLimits

0xa8ba,	// (0x000404ff) popup_grid_graphic_window

0x059f,	// (0x000361e4) popup_large_graphic_colour_window

0xa964,	// (0x000405a9) popup_menu_window_ParamLimits

0xa964,	// (0x000405a9) popup_menu_window

0xab54,	// (0x00040799) popup_note_image_window

0xab14,	// (0x00040759) popup_note_wait_window_ParamLimits

0xab14,	// (0x00040759) popup_note_wait_window

0xab6c,	// (0x000407b1) popup_note_window_ParamLimits

0xab6c,	// (0x000407b1) popup_note_window

0xac1a,	// (0x0004085f) popup_query_code_window_ParamLimits

0xac1a,	// (0x0004085f) popup_query_code_window

0x080b,	// (0x00036450) popup_query_data_code_window_ParamLimits

0x080b,	// (0x00036450) popup_query_data_code_window

0xac5a,	// (0x0004089f) popup_query_data_window_ParamLimits

0xac5a,	// (0x0004089f) popup_query_data_window

0xacee,	// (0x00040933) popup_query_sat_info_window_ParamLimits

0xacee,	// (0x00040933) popup_query_sat_info_window

0xad97,	// (0x000409dc) popup_snote_single_graphic_window_ParamLimits

0xad97,	// (0x000409dc) popup_snote_single_graphic_window

0xad97,	// (0x000409dc) popup_snote_single_text_window_ParamLimits

0xad97,	// (0x000409dc) popup_snote_single_text_window

0x08a6,	// (0x000364eb) popup_sub_window_general

0x09ec,	// (0x00036631) popup_window_general_ParamLimits

0x09ec,	// (0x00036631) popup_window_general

0x2b52,	// (0x00038797) power_save_pane

0xa5e1,	// (0x00040226) control_pane_g1_ParamLimits

0xa5e1,	// (0x00040226) control_pane_g1

0xa60a,	// (0x0004024f) control_pane_g2_ParamLimits

0xa60a,	// (0x0004024f) control_pane_g2

0x2ac1,	// (0x00038706) control_pane_g3_ParamLimits

0x2ac1,	// (0x00038706) control_pane_g3

0x0007,

0xf763,	// (0x000453a8) control_pane_g_ParamLimits

0xf763,	// (0x000453a8) control_pane_g

0xa670,	// (0x000402b5) control_pane_t1_ParamLimits

0xa670,	// (0x000402b5) control_pane_t1

0xa6d6,	// (0x0004031b) control_pane_t2_ParamLimits

0xa6d6,	// (0x0004031b) control_pane_t2

0x0002,

0xf774,	// (0x000453b9) control_pane_t_ParamLimits

0xf774,	// (0x000453b9) control_pane_t

0xa53a,	// (0x0004017f) navi_navi_volume_pane_cp1

0xa542,	// (0x00040187) status_small_icon_pane

0x29f6,	// (0x0003863b) status_small_pane_g1_ParamLimits

0x29f6,	// (0x0003863b) status_small_pane_g1

0xa54a,	// (0x0004018f) status_small_pane_g2_ParamLimits

0xa54a,	// (0x0004018f) status_small_pane_g2

0xa556,	// (0x0004019b) status_small_pane_g3_ParamLimits

0xa556,	// (0x0004019b) status_small_pane_g3

0xa562,	// (0x000401a7) status_small_pane_g4_ParamLimits

0xa562,	// (0x000401a7) status_small_pane_g4

0xa56e,	// (0x000401b3) status_small_pane_g5_ParamLimits

0xa56e,	// (0x000401b3) status_small_pane_g5

0xa57c,	// (0x000401c1) status_small_pane_g6_ParamLimits

0xa57c,	// (0x000401c1) status_small_pane_g6

0x0007,

0xf752,	// (0x00045397) status_small_pane_g_ParamLimits

0xf752,	// (0x00045397) status_small_pane_g

0xa5ab,	// (0x000401f0) status_small_pane_t1

0xa5cd,	// (0x00040212) status_small_wait_pane_ParamLimits

0xa5cd,	// (0x00040212) status_small_wait_pane

0xa2f9,	// (0x0003ff3e) aid_levels_signal_ParamLimits

0xa2f9,	// (0x0003ff3e) aid_levels_signal

0xa311,	// (0x0003ff56) signal_pane_g1_ParamLimits

0xa311,	// (0x0003ff56) signal_pane_g1

0xa32c,	// (0x0003ff71) signal_pane_g2_ParamLimits

0xa32c,	// (0x0003ff71) signal_pane_g2

0x0003,

0xf6e3,	// (0x00045328) signal_pane_g_ParamLimits

0xf6e3,	// (0x00045328) signal_pane_g

0x22be,	// (0x00037f03) context_pane_g1

0x97e6,	// (0x0003f42b) title_pane_g1

0x9829,	// (0x0003f46e) title_pane_t1

0xb966,	// (0x000415ab) title_pane_t2

0xb98c,	// (0x000415d1) title_pane_t3

0x0002,

0xf532,	// (0x00045177) title_pane_t

0xc457,	// (0x0004209c) aid_levels_battery_ParamLimits

0xc457,	// (0x0004209c) aid_levels_battery

0xc473,	// (0x000420b8) battery_pane_g1_ParamLimits

0xc473,	// (0x000420b8) battery_pane_g1

0xc490,	// (0x000420d5) battery_pane_g2_ParamLimits

0xc490,	// (0x000420d5) battery_pane_g2

0x0001,

0xf786,	// (0x000453cb) battery_pane_g_ParamLimits

0xf786,	// (0x000453cb) battery_pane_g

0xc691,	// (0x000422d6) uni_indicator_pane_g1

0xc6a7,	// (0x000422ec) uni_indicator_pane_g2

0xc6bd,	// (0x00042302) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x0004553c) uni_indicator_pane_g

0x2665,	// (0x000382aa) navi_icon_pane_ParamLimits

0x2665,	// (0x000382aa) navi_icon_pane

0x25a1,	// (0x000381e6) navi_midp_pane

0x2681,	// (0x000382c6) navi_navi_pane

0x268b,	// (0x000382d0) navi_text_pane_ParamLimits

0x268b,	// (0x000382d0) navi_text_pane

0xb946,	// (0x0004158b) status_small_wait_pane_g1

0xbcad,	// (0x000418f2) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x00045537) status_small_wait_pane_g

0xc630,	// (0x00042275) navi_navi_icon_text_pane

0xc638,	// (0x0004227d) navi_navi_pane_g1_ParamLimits

0xc638,	// (0x0004227d) navi_navi_pane_g1

0xc64a,	// (0x0004228f) navi_navi_pane_g2_ParamLimits

0xc64a,	// (0x0004228f) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x00045505) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x00045505) navi_navi_pane_g

0x3f1d,	// (0x00039b62) navi_navi_tabs_pane

0xc65c,	// (0x000422a1) navi_navi_text_pane

0xc630,	// (0x00042275) navi_navi_volume_pane

0xc61e,	// (0x00042263) navi_text_pane_t1

0xc612,	// (0x00042257) navi_icon_pane_g1

0x3e14,	// (0x00039a59) navi_navi_text_pane_t1

0xb0a5,	// (0x00040cea) navi_navi_volume_pane_g1

0xb0ad,	// (0x00040cf2) volume_small_pane

0xc56e,	// (0x000421b3) navi_navi_icon_text_pane_g1

0xc576,	// (0x000421bb) navi_navi_icon_text_pane_t1

0x2681,	// (0x000382c6) navi_tabs_2_long_pane

0x2681,	// (0x000382c6) navi_tabs_2_pane

0x2681,	// (0x000382c6) navi_tabs_3_long_pane

0x2681,	// (0x000382c6) navi_tabs_3_pane

0x2681,	// (0x000382c6) navi_tabs_4_pane

0xb085,	// (0x00040cca) tabs_2_active_pane_ParamLimits

0xb085,	// (0x00040cca) tabs_2_active_pane

0xb095,	// (0x00040cda) tabs_2_passive_pane_ParamLimits

0xb095,	// (0x00040cda) tabs_2_passive_pane

0xb053,	// (0x00040c98) tabs_3_active_pane_ParamLimits

0xb053,	// (0x00040c98) tabs_3_active_pane

0xb063,	// (0x00040ca8) tabs_3_passive_pane_ParamLimits

0xb063,	// (0x00040ca8) tabs_3_passive_pane

0xb074,	// (0x00040cb9) tabs_3_passive_pane_cp_ParamLimits

0xb074,	// (0x00040cb9) tabs_3_passive_pane_cp

0xb00f,	// (0x00040c54) tabs_4_active_pane_ParamLimits

0xb00f,	// (0x00040c54) tabs_4_active_pane

0xb020,	// (0x00040c65) tabs_4_passive_pane_ParamLimits

0xb020,	// (0x00040c65) tabs_4_passive_pane

0xb031,	// (0x00040c76) tabs_4_passive_pane_cp_ParamLimits

0xb031,	// (0x00040c76) tabs_4_passive_pane_cp

0xb042,	// (0x00040c87) tabs_4_passive_pane_cp2_ParamLimits

0xb042,	// (0x00040c87) tabs_4_passive_pane_cp2

0xafeb,	// (0x00040c30) tabs_2_long_active_pane_ParamLimits

0xafeb,	// (0x00040c30) tabs_2_long_active_pane

0xaffd,	// (0x00040c42) tabs_2_long_passive_pane_ParamLimits

0xaffd,	// (0x00040c42) tabs_2_long_passive_pane

0xafa0,	// (0x00040be5) tabs_3_long_active_pane_ParamLimits

0xafa0,	// (0x00040be5) tabs_3_long_active_pane

0xafb9,	// (0x00040bfe) tabs_3_long_passive_pane_ParamLimits

0xafb9,	// (0x00040bfe) tabs_3_long_passive_pane

0xafd2,	// (0x00040c17) tabs_3_long_passive_pane_cp_ParamLimits

0xafd2,	// (0x00040c17) tabs_3_long_passive_pane_cp

0x0b6e,	// (0x000367b3) volume_small_pane_g1

0xaf4f,	// (0x00040b94) volume_small_pane_g2

0xaf58,	// (0x00040b9d) volume_small_pane_g3

0xaf61,	// (0x00040ba6) volume_small_pane_g4

0xaf6a,	// (0x00040baf) volume_small_pane_g5

0xaf73,	// (0x00040bb8) volume_small_pane_g6

0xaf7c,	// (0x00040bc1) volume_small_pane_g7

0xaf85,	// (0x00040bca) volume_small_pane_g8

0xaf8e,	// (0x00040bd3) volume_small_pane_g9

0xaf97,	// (0x00040bdc) volume_small_pane_g10

0x0009,

0xf88c,	// (0x000454d1) volume_small_pane_g

0xb99e,	// (0x000415e3) bg_active_tab_pane_cp2_ParamLimits

0xb99e,	// (0x000415e3) bg_active_tab_pane_cp2

0x98b5,	// (0x0003f4fa) tabs_3_active_pane_g1

0x98bd,	// (0x0003f502) tabs_3_active_pane_t1

0xb99e,	// (0x000415e3) bg_passive_tab_pane_cp2_ParamLimits

0xb99e,	// (0x000415e3) bg_passive_tab_pane_cp2

0x98b5,	// (0x0003f4fa) tabs_3_passive_pane_g1

0x98bd,	// (0x0003f502) tabs_3_passive_pane_t1

0xb99e,	// (0x000415e3) bg_active_tab_pane_cp3_ParamLimits

0xb99e,	// (0x000415e3) bg_active_tab_pane_cp3

0x98cf,	// (0x0003f514) tabs_4_active_pane_g1

0x98d7,	// (0x0003f51c) tabs_4_active_pane_t1

0xb99e,	// (0x000415e3) bg_passive_tab_pane_cp3_ParamLimits

0xb99e,	// (0x000415e3) bg_passive_tab_pane_cp3

0x98cf,	// (0x0003f514) tabs_4_1_passive_pane_g1

0x98d7,	// (0x0003f51c) tabs_4_1_passive_pane_t1

0x2b1e,	// (0x00038763) list_highlight_pane_cp2

0xc750,	// (0x00042395) list_set_pane_ParamLimits

0xc750,	// (0x00042395) list_set_pane

0xc812,	// (0x00042457) main_pane_set_t1_ParamLimits

0xc812,	// (0x00042457) main_pane_set_t1

0xc832,	// (0x00042477) main_pane_set_t2_ParamLimits

0xc832,	// (0x00042477) main_pane_set_t2

0xc846,	// (0x0004248b) main_pane_set_t3_ParamLimits

0xc846,	// (0x0004248b) main_pane_set_t3

0xc85a,	// (0x0004249f) main_pane_set_t4_ParamLimits

0xc85a,	// (0x0004249f) main_pane_set_t4

0x0003,

0xf95c,	// (0x000455a1) main_pane_set_t_ParamLimits

0xf95c,	// (0x000455a1) main_pane_set_t

0xc86e,	// (0x000424b3) setting_code_pane

0x457f,	// (0x0003a1c4) setting_slider_graphic_pane

0x457f,	// (0x0003a1c4) setting_slider_pane

0x457f,	// (0x0003a1c4) setting_text_pane

0x457f,	// (0x0003a1c4) setting_volume_pane

0xeca9,	// (0x000448ee) volume_set_pane

0xb9ac,	// (0x000415f1) bg_set_opt_pane_cp

0xecb3,	// (0x000448f8) setting_slider_pane_t1

0xeccc,	// (0x00044911) setting_slider_pane_t2

0xece6,	// (0x0004492b) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0004517e) setting_slider_pane_t

0xecfe,	// (0x00044943) slider_set_pane

0xb950,	// (0x00041595) bg_set_opt_pane_cp2

0xb9ba,	// (0x000415ff) setting_slider_graphic_pane_g1

0xed14,	// (0x00044959) setting_slider_graphic_pane_t1

0xed24,	// (0x00044969) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00045185) setting_slider_graphic_pane_t

0xed34,	// (0x00044979) slider_set_pane_cp

0xb950,	// (0x00041595) input_focus_pane_cp1

0x4418,	// (0x0003a05d) list_set_text_pane

0xb946,	// (0x0004158b) setting_text_pane_g1

0xb950,	// (0x00041595) input_focus_pane_cp2

0xb946,	// (0x0004158b) setting_code_pane_g1

0xb9c3,	// (0x00041608) setting_code_pane_t1

0xd24c,	// (0x00042e91) set_text_pane_t1_ParamLimits

0xd24c,	// (0x00042e91) set_text_pane_t1

0xc046,	// (0x00041c8b) set_opt_bg_pane_g1

0xc04e,	// (0x00041c93) set_opt_bg_pane_g2

0x43f0,	// (0x0003a035) set_opt_bg_pane_g3

0xc05e,	// (0x00041ca3) set_opt_bg_pane_g4

0xc066,	// (0x00041cab) set_opt_bg_pane_g5

0xc06e,	// (0x00041cb3) set_opt_bg_pane_g6

0x43fa,	// (0x0003a03f) set_opt_bg_pane_g7

0x4404,	// (0x0003a049) set_opt_bg_pane_g8

0x440e,	// (0x0003a053) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0004558e) set_opt_bg_pane_g

0x43e3,	// (0x0003a028) slider_set_pane_g1

0x0d7a,	// (0x000369bf) slider_set_pane_g2

0x0006,

0xf93a,	// (0x0004557f) slider_set_pane_g

0x0cda,	// (0x0003691f) volume_set_pane_g1

0x0ce4,	// (0x00036929) volume_set_pane_g2

0x0cee,	// (0x00036933) volume_set_pane_g3

0x0cf8,	// (0x0003693d) volume_set_pane_g4

0x0d02,	// (0x00036947) volume_set_pane_g5

0x0d0c,	// (0x00036951) volume_set_pane_g6

0x0d16,	// (0x0003695b) volume_set_pane_g7

0x0d20,	// (0x00036965) volume_set_pane_g8

0x0d2a,	// (0x0003696f) volume_set_pane_g9

0x0d34,	// (0x00036979) volume_set_pane_g10

0x0009,

0xf912,	// (0x00045557) volume_set_pane_g

0x98e9,	// (0x0003f52e) indicator_pane_ParamLimits

0x98e9,	// (0x0003f52e) indicator_pane

0x9915,	// (0x0003f55a) main_idle_pane_g2_ParamLimits

0x9915,	// (0x0003f55a) main_idle_pane_g2

0x994d,	// (0x0003f592) main_pane_idle_g1_ParamLimits

0x994d,	// (0x0003f592) main_pane_idle_g1

0xb9d1,	// (0x00041616) popup_clock_digital_analogue_window_ParamLimits

0xb9d1,	// (0x00041616) popup_clock_digital_analogue_window

0x9977,	// (0x0003f5bc) soft_indicator_pane_ParamLimits

0x9977,	// (0x0003f5bc) soft_indicator_pane

0x9993,	// (0x0003f5d8) wallpaper_pane_ParamLimits

0x9993,	// (0x0003f5d8) wallpaper_pane

0xb946,	// (0x0004158b) wallpaper_pane_g1

0x99a5,	// (0x0003f5ea) indicator_pane_g1_ParamLimits

0x99a5,	// (0x0003f5ea) indicator_pane_g1

0x4823,	// (0x0003a468) navi_navi_icon_text_pane_srt_g1

0xb9ff,	// (0x00041644) soft_indicator_pane_t1

0xba19,	// (0x0004165e) aid_ps_area_pane

0x99be,	// (0x0003f603) aid_ps_clock_pane

0xba2a,	// (0x0004166f) aid_ps_indicator_pane

0xba36,	// (0x0004167b) indicator_ps_pane_ParamLimits

0xba36,	// (0x0004167b) indicator_ps_pane

0xba45,	// (0x0004168a) power_save_pane_g1_ParamLimits

0xba45,	// (0x0004168a) power_save_pane_g1

0xba51,	// (0x00041696) power_save_pane_g2_ParamLimits

0xba51,	// (0x00041696) power_save_pane_g2

0xeadc,	// (0x00044721) aid_navinavi_width_pane

0xba19,	// (0x0004165e) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0004518a) power_save_pane_g_ParamLimits

0xf545,	// (0x0004518a) power_save_pane_g

0xba5f,	// (0x000416a4) power_save_pane_t1_ParamLimits

0xba5f,	// (0x000416a4) power_save_pane_t1

0x99be,	// (0x0003f603) aid_ps_clock_pane_ParamLimits

0xba2a,	// (0x0004166f) aid_ps_indicator_pane_ParamLimits

0xba71,	// (0x000416b6) power_save_pane_t4_ParamLimits

0xba71,	// (0x000416b6) power_save_pane_t4

0x0001,

0xf54a,	// (0x0004518f) power_save_pane_t_ParamLimits

0xf54a,	// (0x0004518f) power_save_pane_t

0xba9b,	// (0x000416e0) power_save_t3_ParamLimits

0xba9b,	// (0x000416e0) power_save_t3

0xba86,	// (0x000416cb) power_save_t2_ParamLimits

0xba86,	// (0x000416cb) power_save_t2

0xbab0,	// (0x000416f5) indicator_ps_pane_g1

0x99cc,	// (0x0003f611) ai_gene_pane_ParamLimits

0x99cc,	// (0x0003f611) ai_gene_pane

0x99e3,	// (0x0003f628) ai_links_pane_ParamLimits

0x99e3,	// (0x0003f628) ai_links_pane

0x99fb,	// (0x0003f640) indicator_pane_cp1_ParamLimits

0x99fb,	// (0x0003f640) indicator_pane_cp1

0x9a0a,	// (0x0003f64f) main_pane_idle_g1_cp_ParamLimits

0x9a0a,	// (0x0003f64f) main_pane_idle_g1_cp

0xbab9,	// (0x000416fe) popup_ai_links_title_window

0x9a22,	// (0x0003f667) soft_indicator_pane_cp1_ParamLimits

0x9a22,	// (0x0003f667) soft_indicator_pane_cp1

0x41cc,	// (0x00039e11) ai_links_pane_g1

0x41d5,	// (0x00039e1a) grid_ai_links_pane

0xc688,	// (0x000422cd) ai_gene_pane_1

0x41ba,	// (0x00039dff) ai_gene_pane_2

0x41c3,	// (0x00039e08) list_highlight_pane_cp4

0xc664,	// (0x000422a9) cell_ai_link_pane_ParamLimits

0xc664,	// (0x000422a9) cell_ai_link_pane

0x4189,	// (0x00039dce) cell_ai_link_pane_g1

0xbcad,	// (0x000418f2) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x00045532) cell_ai_link_pane_g

0xb950,	// (0x00041595) grid_highlight_cp2

0xb950,	// (0x00041595) bg_popup_sub_pane_cp1

0xbad0,	// (0x00041715) popup_ai_links_title_window_t1

0x40d5,	// (0x00039d1a) ai_gene_pane_1_g1_ParamLimits

0x40d5,	// (0x00039d1a) ai_gene_pane_1_g1

0x40e1,	// (0x00039d26) ai_gene_pane_1_g2_ParamLimits

0x40e1,	// (0x00039d26) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x00045528) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x00045528) ai_gene_pane_1_g

0x40ee,	// (0x00039d33) ai_gene_pane_1_t1_ParamLimits

0x40ee,	// (0x00039d33) ai_gene_pane_1_t1

0x4122,	// (0x00039d67) grid_ai_soft_ind_pane

0x40c0,	// (0x00039d05) ai_gene_pane_2_t1_ParamLimits

0x40c0,	// (0x00039d05) ai_gene_pane_2_t1

0x9a36,	// (0x0003f67b) main_pane_empty_t1_ParamLimits

0x9a36,	// (0x0003f67b) main_pane_empty_t1

0x9a4e,	// (0x0003f693) main_pane_empty_t2_ParamLimits

0x9a4e,	// (0x0003f693) main_pane_empty_t2

0x9a63,	// (0x0003f6a8) main_pane_empty_t3_ParamLimits

0x9a63,	// (0x0003f6a8) main_pane_empty_t3

0x9a75,	// (0x0003f6ba) main_pane_empty_t4_ParamLimits

0x9a75,	// (0x0003f6ba) main_pane_empty_t4

0x9a87,	// (0x0003f6cc) main_pane_empty_t5_ParamLimits

0x9a87,	// (0x0003f6cc) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00045194) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00045194) main_pane_empty_t

0xeeab,	// (0x00044af0) bg_popup_window_pane_ParamLimits

0xeeab,	// (0x00044af0) bg_popup_window_pane

0x3e22,	// (0x00039a67) find_popup_pane_cp2_ParamLimits

0x3e22,	// (0x00039a67) find_popup_pane_cp2

0x3e2e,	// (0x00039a73) heading_pane_ParamLimits

0x3e2e,	// (0x00039a73) heading_pane

0xb950,	// (0x00041595) bg_popup_sub_pane

0xc593,	// (0x000421d8) bg_popup_window_pane_g1_ParamLimits

0xc593,	// (0x000421d8) bg_popup_window_pane_g1

0xc5a2,	// (0x000421e7) bg_popup_window_pane_g2_ParamLimits

0xc5a2,	// (0x000421e7) bg_popup_window_pane_g2

0xc5ae,	// (0x000421f3) bg_popup_window_pane_g3_ParamLimits

0xc5ae,	// (0x000421f3) bg_popup_window_pane_g3

0xc5ba,	// (0x000421ff) bg_popup_window_pane_g4_ParamLimits

0xc5ba,	// (0x000421ff) bg_popup_window_pane_g4

0xc5c9,	// (0x0004220e) bg_popup_window_pane_g5_ParamLimits

0xc5c9,	// (0x0004220e) bg_popup_window_pane_g5

0xc5d9,	// (0x0004221e) bg_popup_window_pane_g6_ParamLimits

0xc5d9,	// (0x0004221e) bg_popup_window_pane_g6

0xc5e5,	// (0x0004222a) bg_popup_window_pane_g7_ParamLimits

0xc5e5,	// (0x0004222a) bg_popup_window_pane_g7

0xc5f4,	// (0x00042239) bg_popup_window_pane_g8_ParamLimits

0xc5f4,	// (0x00042239) bg_popup_window_pane_g8

0xc603,	// (0x00042248) bg_popup_window_pane_g9_ParamLimits

0xc603,	// (0x00042248) bg_popup_window_pane_g9

0x3e08,	// (0x00039a4d) bg_popup_window_pane_g10_ParamLimits

0x3e08,	// (0x00039a4d) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x000454f0) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x000454f0) bg_popup_window_pane_g

0x3d31,	// (0x00039976) bg_popup_heading_pane_ParamLimits

0x3d31,	// (0x00039976) bg_popup_heading_pane

0x0ea5,	// (0x00036aea) tabs_4_passive_pane_cp_srt_ParamLimits

0x0ea5,	// (0x00036aea) tabs_4_passive_pane_cp_srt

0x0eb7,	// (0x00036afc) tabs_4_passive_pane_srt_ParamLimits

0x3d45,	// (0x0003998a) heading_pane_g2

0x0eb7,	// (0x00036afc) tabs_4_passive_pane_srt

0x30c8,	// (0x00038d0d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x30c8,	// (0x00038d0d) bg_passive_tab_pane_cp3_srt

0x3d4d,	// (0x00039992) heading_pane_t1_ParamLimits

0x3d4d,	// (0x00039992) heading_pane_t1

0x3d64,	// (0x000399a9) heading_pane_t2_ParamLimits

0x3d64,	// (0x000399a9) heading_pane_t2

0x0001,

0xf8a6,	// (0x000454eb) heading_pane_t_ParamLimits

0xf8a6,	// (0x000454eb) heading_pane_t

0x385c,	// (0x000394a1) bg_popup_heading_pane_g1

0x390b,	// (0x00039550) bg_popup_heading_pane_g2

0x3915,	// (0x0003955a) bg_popup_heading_pane_g3

0x391f,	// (0x00039564) bg_popup_heading_pane_g4

0x3929,	// (0x0003956e) bg_popup_heading_pane_g5

0x3933,	// (0x00039578) bg_popup_heading_pane_g6

0x393b,	// (0x00039580) bg_popup_heading_pane_g7

0x3943,	// (0x00039588) bg_popup_heading_pane_g8

0x394d,	// (0x00039592) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x000454a7) bg_popup_heading_pane_g

0x3054,	// (0x00038c99) bg_popup_sub_pane_g1

0x3064,	// (0x00038ca9) bg_popup_sub_pane_g2

0x305c,	// (0x00038ca1) bg_popup_sub_pane_g3

0x3074,	// (0x00038cb9) bg_popup_sub_pane_g4

0x306c,	// (0x00038cb1) bg_popup_sub_pane_g5

0x307c,	// (0x00038cc1) bg_popup_sub_pane_g6

0x3084,	// (0x00038cc9) bg_popup_sub_pane_g7

0x3094,	// (0x00038cd9) bg_popup_sub_pane_g8

0x308c,	// (0x00038cd1) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00045481) bg_popup_sub_pane_g

0xb99e,	// (0x000415e3) bg_popup_window_pane_cp5_ParamLimits

0xb99e,	// (0x000415e3) bg_popup_window_pane_cp5

0xbaed,	// (0x00041732) popup_note_window_g1_ParamLimits

0xbaed,	// (0x00041732) popup_note_window_g1

0xbaf9,	// (0x0004173e) popup_note_window_t1_ParamLimits

0xbaf9,	// (0x0004173e) popup_note_window_t1

0xbb0f,	// (0x00041754) popup_note_window_t2_ParamLimits

0xbb0f,	// (0x00041754) popup_note_window_t2

0xbb25,	// (0x0004176a) popup_note_window_t3_ParamLimits

0xbb25,	// (0x0004176a) popup_note_window_t3

0xbb3b,	// (0x00041780) popup_note_window_t4_ParamLimits

0xbb3b,	// (0x00041780) popup_note_window_t4

0xbb63,	// (0x000417a8) popup_note_window_t5_ParamLimits

0xbb63,	// (0x000417a8) popup_note_window_t5

0x0004,

0xf55a,	// (0x0004519f) popup_note_window_t_ParamLimits

0xf55a,	// (0x0004519f) popup_note_window_t

0xbbad,	// (0x000417f2) bg_popup_window_pane_cp6_ParamLimits

0xbbad,	// (0x000417f2) bg_popup_window_pane_cp6

0x37d8,	// (0x0003941d) popup_note_image_window_g1_ParamLimits

0x37d8,	// (0x0003941d) popup_note_image_window_g1

0x37e4,	// (0x00039429) popup_note_image_window_g2_ParamLimits

0x37e4,	// (0x00039429) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00045475) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00045475) popup_note_image_window_g

0x37fd,	// (0x00039442) popup_note_image_window_t1_ParamLimits

0x37fd,	// (0x00039442) popup_note_image_window_t1

0x3816,	// (0x0003945b) popup_note_image_window_t2_ParamLimits

0x3816,	// (0x0003945b) popup_note_image_window_t2

0x382f,	// (0x00039474) popup_note_image_window_t3_ParamLimits

0x382f,	// (0x00039474) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0004547a) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0004547a) popup_note_image_window_t

0x3698,	// (0x000392dd) bg_popup_window_pane_cp7_ParamLimits

0x3698,	// (0x000392dd) bg_popup_window_pane_cp7

0x36c8,	// (0x0003930d) popup_note_wait_window_g1_ParamLimits

0x36c8,	// (0x0003930d) popup_note_wait_window_g1

0x36d4,	// (0x00039319) popup_note_wait_window_g2_ParamLimits

0x36d4,	// (0x00039319) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00045463) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00045463) popup_note_wait_window_g

0x36ec,	// (0x00039331) popup_note_wait_window_t1_ParamLimits

0x36ec,	// (0x00039331) popup_note_wait_window_t1

0x3713,	// (0x00039358) popup_note_wait_window_t2_ParamLimits

0x3713,	// (0x00039358) popup_note_wait_window_t2

0x3731,	// (0x00039376) popup_note_wait_window_t3_ParamLimits

0x3731,	// (0x00039376) popup_note_wait_window_t3

0x3744,	// (0x00039389) popup_note_wait_window_t4_ParamLimits

0x3744,	// (0x00039389) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0004546a) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0004546a) popup_note_wait_window_t

0x3769,	// (0x000393ae) wait_bar_pane_ParamLimits

0x3769,	// (0x000393ae) wait_bar_pane

0xb950,	// (0x00041595) wait_anim_pane

0xb950,	// (0x00041595) wait_border_pane

0xb946,	// (0x0004158b) wait_anim_pane_g1

0xb946,	// (0x0004158b) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x00045323) wait_anim_pane_g

0x363c,	// (0x00039281) wait_border_pane_g1

0x3647,	// (0x0003928c) wait_border_pane_g2

0x3650,	// (0x00039295) wait_border_pane_g3

0x0002,

0xf817,	// (0x0004545c) wait_border_pane_g

0x34a6,	// (0x000390eb) bg_popup_window_pane_cp16_ParamLimits

0x34a6,	// (0x000390eb) bg_popup_window_pane_cp16

0x35a6,	// (0x000391eb) indicator_popup_pane_cp4_ParamLimits

0x35a6,	// (0x000391eb) indicator_popup_pane_cp4

0x35ba,	// (0x000391ff) popup_query_data_window_t1_ParamLimits

0x35ba,	// (0x000391ff) popup_query_data_window_t1

0x35cc,	// (0x00039211) popup_query_data_window_t2_ParamLimits

0x35cc,	// (0x00039211) popup_query_data_window_t2

0x35e5,	// (0x0003922a) popup_query_data_window_t3_ParamLimits

0x35e5,	// (0x0003922a) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00045455) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00045455) popup_query_data_window_t

0x35ff,	// (0x00039244) query_popup_data_pane_ParamLimits

0x35ff,	// (0x00039244) query_popup_data_pane

0x3613,	// (0x00039258) query_popup_data_pane_cp1_ParamLimits

0x3613,	// (0x00039258) query_popup_data_pane_cp1

0x34a6,	// (0x000390eb) bg_popup_window_pane_cp10_ParamLimits

0x34a6,	// (0x000390eb) bg_popup_window_pane_cp10

0x34d8,	// (0x0003911d) indicator_popup_pane_ParamLimits

0x34d8,	// (0x0003911d) indicator_popup_pane

0x34fa,	// (0x0003913f) popup_query_code_window_t1_ParamLimits

0x34fa,	// (0x0003913f) popup_query_code_window_t1

0x3514,	// (0x00039159) popup_query_code_window_t2_ParamLimits

0x3514,	// (0x00039159) popup_query_code_window_t2

0x355d,	// (0x000391a2) popup_query_code_window_t3_ParamLimits

0x355d,	// (0x000391a2) popup_query_code_window_t3

0x0002,

0xf809,	// (0x0004544e) popup_query_code_window_t_ParamLimits

0xf809,	// (0x0004544e) popup_query_code_window_t

0x358c,	// (0x000391d1) query_popup_pane_ParamLimits

0x358c,	// (0x000391d1) query_popup_pane

0xbbad,	// (0x000417f2) bg_popup_window_pane_cp15_ParamLimits

0xbbad,	// (0x000417f2) bg_popup_window_pane_cp15

0xbbcd,	// (0x00041812) indicator_popup_pane_cp1_ParamLimits

0xbbcd,	// (0x00041812) indicator_popup_pane_cp1

0xbbe0,	// (0x00041825) indicator_popup_pane_cp2_ParamLimits

0xbbe0,	// (0x00041825) indicator_popup_pane_cp2

0xbbfb,	// (0x00041840) popup_query_data_code_window_g1_ParamLimits

0xbbfb,	// (0x00041840) popup_query_data_code_window_g1

0xbc0e,	// (0x00041853) popup_query_data_code_window_t1_ParamLimits

0xbc0e,	// (0x00041853) popup_query_data_code_window_t1

0xbc20,	// (0x00041865) popup_query_data_code_window_t2_ParamLimits

0xbc20,	// (0x00041865) popup_query_data_code_window_t2

0xbc32,	// (0x00041877) popup_query_data_code_window_t3_ParamLimits

0xbc32,	// (0x00041877) popup_query_data_code_window_t3

0xbc48,	// (0x0004188d) popup_query_data_code_window_t4_ParamLimits

0xbc48,	// (0x0004188d) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x000451aa) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x000451aa) popup_query_data_code_window_t

0x0a5a,	// (0x0003669f) list_single_midp_graphic_pane_g3

0xbc62,	// (0x000418a7) query_popup_data_pane_cp2_ParamLimits

0xbc75,	// (0x000418ba) query_popup_pane_cp2_ParamLimits

0xbc75,	// (0x000418ba) query_popup_pane_cp2

0xb950,	// (0x00041595) bg_popup_window_pane_cp11

0x348a,	// (0x000390cf) heading_pane_cp5

0x3492,	// (0x000390d7) listscroll_popup_info_pane

0xb950,	// (0x00041595) input_focus_pane_cp3

0xbc90,	// (0x000418d5) query_popup_pane_t1

0xbc9e,	// (0x000418e3) list_popup_info_pane_ParamLimits

0xbc9e,	// (0x000418e3) list_popup_info_pane

0xbcad,	// (0x000418f2) listscroll_popup_info_pane_g1

0xbcb5,	// (0x000418fa) scroll_pane_cp7

0xbcbf,	// (0x00041904) popup_info_list_pane_t1_ParamLimits

0xbcbf,	// (0x00041904) popup_info_list_pane_t1

0xbcd9,	// (0x0004191e) popup_info_list_pane_t2_ParamLimits

0xbcd9,	// (0x0004191e) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x000451b3) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x000451b3) popup_info_list_pane_t

0xb950,	// (0x00041595) bg_popup_window_pane_cp12

0x483d,	// (0x0003a482) find_popup_pane

0xb9ac,	// (0x000415f1) bg_popup_window_pane_cp3

0xbcf3,	// (0x00041938) heading_pane_cp3

0xbd02,	// (0x00041947) listscroll_popup_graphic_pane

0xb950,	// (0x00041595) bg_popup_window_pane_cp4

0x9ae9,	// (0x0003f72e) heading_pane_cp4

0xbd12,	// (0x00041957) listscroll_popup_colour_pane

0x9af3,	// (0x0003f738) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9af3,	// (0x0003f738) cell_large_graphic_colour_none_popup_pane

0x9b07,	// (0x0003f74c) grid_large_graphic_colour_popup_pane_ParamLimits

0x9b07,	// (0x0003f74c) grid_large_graphic_colour_popup_pane

0x9b2b,	// (0x0003f770) listscroll_popup_colour_pane_g1_ParamLimits

0x9b2b,	// (0x0003f770) listscroll_popup_colour_pane_g1

0x9b42,	// (0x0003f787) listscroll_popup_colour_pane_g2_ParamLimits

0x9b42,	// (0x0003f787) listscroll_popup_colour_pane_g2

0x9b59,	// (0x0003f79e) listscroll_popup_colour_pane_g3_ParamLimits

0x9b59,	// (0x0003f79e) listscroll_popup_colour_pane_g3

0x9b69,	// (0x0003f7ae) listscroll_popup_colour_pane_g4_ParamLimits

0x9b69,	// (0x0003f7ae) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x000451b8) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x000451b8) listscroll_popup_colour_pane_g

0xbd1a,	// (0x0004195f) scroll_pane_cp6_ParamLimits

0xbd1a,	// (0x0004195f) scroll_pane_cp6

0x9b79,	// (0x0003f7be) cell_large_graphic_colour_popup_pane_ParamLimits

0x9b79,	// (0x0003f7be) cell_large_graphic_colour_popup_pane

0xbd2c,	// (0x00041971) cell_large_graphic_colour_none_popup_pane_t1

0xb950,	// (0x00041595) grid_highlight_pane_cp5

0xbd3b,	// (0x00041980) cell_large_graphic_colour_popup_pane_g1

0xbd43,	// (0x00041988) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x000451c1) cell_large_graphic_colour_popup_pane_g

0xbd4b,	// (0x00041990) cell_large_graphic_colour_popup_pane_g2_copy1

0xbd54,	// (0x00041999) grid_highlight_pane_cp4

0xbd5c,	// (0x000419a1) bg_popup_window_pane_cp8_ParamLimits

0xbd5c,	// (0x000419a1) bg_popup_window_pane_cp8

0xbd77,	// (0x000419bc) popup_snote_single_text_window_g1_ParamLimits

0xbd77,	// (0x000419bc) popup_snote_single_text_window_g1

0xbd89,	// (0x000419ce) popup_snote_single_text_window_t1_ParamLimits

0xbd89,	// (0x000419ce) popup_snote_single_text_window_t1

0xbd9c,	// (0x000419e1) popup_snote_single_text_window_t2_ParamLimits

0xbd9c,	// (0x000419e1) popup_snote_single_text_window_t2

0xbdaf,	// (0x000419f4) popup_snote_single_text_window_t3_ParamLimits

0xbdaf,	// (0x000419f4) popup_snote_single_text_window_t3

0xbde8,	// (0x00041a2d) popup_snote_single_text_window_t4_ParamLimits

0xbde8,	// (0x00041a2d) popup_snote_single_text_window_t4

0xbe1c,	// (0x00041a61) popup_snote_single_text_window_t5_ParamLimits

0xbe1c,	// (0x00041a61) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x000451c6) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x000451c6) popup_snote_single_text_window_t

0xbe4b,	// (0x00041a90) bg_popup_window_pane_cp9_ParamLimits

0xbe4b,	// (0x00041a90) bg_popup_window_pane_cp9

0xbd77,	// (0x000419bc) popup_snote_single_graphic_window_g1_ParamLimits

0xbd77,	// (0x000419bc) popup_snote_single_graphic_window_g1

0xbe59,	// (0x00041a9e) popup_snote_single_graphic_window_g2_ParamLimits

0xbe59,	// (0x00041a9e) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000451d1) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000451d1) popup_snote_single_graphic_window_g

0xbe65,	// (0x00041aaa) popup_snote_single_graphic_window_t1_ParamLimits

0xbe65,	// (0x00041aaa) popup_snote_single_graphic_window_t1

0xbe78,	// (0x00041abd) popup_snote_single_graphic_window_t2_ParamLimits

0xbe78,	// (0x00041abd) popup_snote_single_graphic_window_t2

0xbe8b,	// (0x00041ad0) popup_snote_single_graphic_window_t3_ParamLimits

0xbe8b,	// (0x00041ad0) popup_snote_single_graphic_window_t3

0xbec4,	// (0x00041b09) popup_snote_single_graphic_window_t4_ParamLimits

0xbec4,	// (0x00041b09) popup_snote_single_graphic_window_t4

0xbef8,	// (0x00041b3d) popup_snote_single_graphic_window_t5_ParamLimits

0xbef8,	// (0x00041b3d) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000451d6) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000451d6) popup_snote_single_graphic_window_t

0x477b,	// (0x0003a3c0) grid_graphic_popup_pane_ParamLimits

0x477b,	// (0x0003a3c0) grid_graphic_popup_pane

0x47a9,	// (0x0003a3ee) listscroll_popup_graphic_pane_g1_ParamLimits

0x47a9,	// (0x0003a3ee) listscroll_popup_graphic_pane_g1

0xc9aa,	// (0x000425ef) listscroll_popup_graphic_pane_g2_ParamLimits

0xc9aa,	// (0x000425ef) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x000455cb) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x000455cb) listscroll_popup_graphic_pane_g

0x47d1,	// (0x0003a416) scroll_pane_cp5

0xc962,	// (0x000425a7) cell_graphic_popup_pane_ParamLimits

0xc962,	// (0x000425a7) cell_graphic_popup_pane

0x46f4,	// (0x0003a339) cell_graphic_popup_pane_g1

0x46fc,	// (0x0003a341) cell_graphic_popup_pane_g2

0xbd4b,	// (0x00041990) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x000455c4) cell_graphic_popup_pane_g

0x4705,	// (0x0003a34a) cell_graphic_popup_pane_t2

0xbd54,	// (0x00041999) grid_highlight_pane_cp3

0xbf39,	// (0x00041b7e) list_gen_pane_ParamLimits

0xbf39,	// (0x00041b7e) list_gen_pane

0xbf61,	// (0x00041ba6) scroll_pane

0xc919,	// (0x0004255e) bg_list_pane_g1_ParamLimits

0xc919,	// (0x0004255e) bg_list_pane_g1

0x4669,	// (0x0003a2ae) bg_list_pane_g2_ParamLimits

0x4669,	// (0x0003a2ae) bg_list_pane_g2

0x467e,	// (0x0003a2c3) bg_list_pane_g3_ParamLimits

0x467e,	// (0x0003a2c3) bg_list_pane_g3

0x4692,	// (0x0003a2d7) bg_list_pane_g4_ParamLimits

0x4692,	// (0x0003a2d7) bg_list_pane_g4

0xc936,	// (0x0004257b) bg_list_pane_g5_ParamLimits

0xc936,	// (0x0004257b) bg_list_pane_g5

0x0004,

0xf974,	// (0x000455b9) bg_list_pane_g_ParamLimits

0xf974,	// (0x000455b9) bg_list_pane_g

0xc8ac,	// (0x000424f1) list_double2_graphic_large_graphic_pane_ParamLimits

0xc8ac,	// (0x000424f1) list_double2_graphic_large_graphic_pane

0xc8ac,	// (0x000424f1) list_double2_graphic_pane_ParamLimits

0xc8ac,	// (0x000424f1) list_double2_graphic_pane

0xc8ac,	// (0x000424f1) list_double2_large_graphic_pane_ParamLimits

0xc8ac,	// (0x000424f1) list_double2_large_graphic_pane

0xc8ac,	// (0x000424f1) list_double2_pane_ParamLimits

0xc8ac,	// (0x000424f1) list_double2_pane

0xc8ac,	// (0x000424f1) list_double_graphic_heading_pane_ParamLimits

0xc8ac,	// (0x000424f1) list_double_graphic_heading_pane

0xc8ac,	// (0x000424f1) list_double_graphic_pane_ParamLimits

0xc8ac,	// (0x000424f1) list_double_graphic_pane

0xc8ac,	// (0x000424f1) list_double_heading_pane_ParamLimits

0xc8ac,	// (0x000424f1) list_double_heading_pane

0xc8ac,	// (0x000424f1) list_double_large_graphic_pane_ParamLimits

0xc8ac,	// (0x000424f1) list_double_large_graphic_pane

0xc8ac,	// (0x000424f1) list_double_number_pane_ParamLimits

0xc8ac,	// (0x000424f1) list_double_number_pane

0xc8ac,	// (0x000424f1) list_double_pane_ParamLimits

0xc8ac,	// (0x000424f1) list_double_pane

0xc8ac,	// (0x000424f1) list_double_time_pane_ParamLimits

0xc8ac,	// (0x000424f1) list_double_time_pane

0xc8ac,	// (0x000424f1) list_setting_number_pane_ParamLimits

0xc8ac,	// (0x000424f1) list_setting_number_pane

0xc8ac,	// (0x000424f1) list_setting_pane_ParamLimits

0xc8ac,	// (0x000424f1) list_setting_pane

0xc8c1,	// (0x00042506) list_single_2graphic_pane_ParamLimits

0xc8c1,	// (0x00042506) list_single_2graphic_pane

0xc8c1,	// (0x00042506) list_single_graphic_heading_pane_ParamLimits

0xc8c1,	// (0x00042506) list_single_graphic_heading_pane

0xc8c1,	// (0x00042506) list_single_graphic_pane_ParamLimits

0xc8c1,	// (0x00042506) list_single_graphic_pane

0xc8c1,	// (0x00042506) list_single_heading_pane_ParamLimits

0xc8c1,	// (0x00042506) list_single_heading_pane

0xc8c1,	// (0x00042506) list_single_large_graphic_pane_ParamLimits

0xc8c1,	// (0x00042506) list_single_large_graphic_pane

0xc8c1,	// (0x00042506) list_single_number_heading_pane_ParamLimits

0xc8c1,	// (0x00042506) list_single_number_heading_pane

0xc8c1,	// (0x00042506) list_single_number_pane_ParamLimits

0xc8c1,	// (0x00042506) list_single_number_pane

0xc8c1,	// (0x00042506) list_single_pane_ParamLimits

0xc8c1,	// (0x00042506) list_single_pane

0xb950,	// (0x00041595) list_highlight_pane_cp1

0xd267,	// (0x00042eac) list_single_pane_g1_ParamLimits

0xd267,	// (0x00042eac) list_single_pane_g1

0xd273,	// (0x00042eb8) list_single_pane_g2_ParamLimits

0xd273,	// (0x00042eb8) list_single_pane_g2

0x0001,

0xf5a3,	// (0x000451e8) list_single_pane_g_ParamLimits

0xf5a3,	// (0x000451e8) list_single_pane_g

0xd4f6,	// (0x0004313b) list_single_pane_t1_ParamLimits

0xd4f6,	// (0x0004313b) list_single_pane_t1

0xd267,	// (0x00042eac) list_single_number_pane_g1_ParamLimits

0xd267,	// (0x00042eac) list_single_number_pane_g1

0xd273,	// (0x00042eb8) list_single_number_pane_g2_ParamLimits

0xd273,	// (0x00042eb8) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x000451e8) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x000451e8) list_single_number_pane_g

0xd421,	// (0x00043066) list_single_number_pane_t1_ParamLimits

0xd421,	// (0x00043066) list_single_number_pane_t1

0xb0b6,	// (0x00040cfb) list_single_number_pane_t2_ParamLimits

0xb0b6,	// (0x00040cfb) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0004557a) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0004557a) list_single_number_pane_t

0x9ba4,	// (0x0003f7e9) list_single_graphic_pane_g1_ParamLimits

0x9ba4,	// (0x0003f7e9) list_single_graphic_pane_g1

0xd267,	// (0x00042eac) list_single_graphic_pane_g2_ParamLimits

0xd267,	// (0x00042eac) list_single_graphic_pane_g2

0xd273,	// (0x00042eb8) list_single_graphic_pane_g3_ParamLimits

0xd273,	// (0x00042eb8) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000451e1) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000451e1) list_single_graphic_pane_g

0x9bb0,	// (0x0003f7f5) list_single_graphic_pane_t1_ParamLimits

0x9bb0,	// (0x0003f7f5) list_single_graphic_pane_t1

0xd267,	// (0x00042eac) list_single_heading_pane_g1_ParamLimits

0xd267,	// (0x00042eac) list_single_heading_pane_g1

0xd273,	// (0x00042eb8) list_single_heading_pane_g2_ParamLimits

0xd273,	// (0x00042eb8) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000451e8) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000451e8) list_single_heading_pane_g

0x9bc6,	// (0x0003f80b) list_single_heading_pane_t1_ParamLimits

0x9bc6,	// (0x0003f80b) list_single_heading_pane_t1

0x9bdc,	// (0x0003f821) list_single_heading_pane_t2_ParamLimits

0x9bdc,	// (0x0003f821) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x000451ed) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x000451ed) list_single_heading_pane_t

0xd267,	// (0x00042eac) list_single_number_heading_pane_g1_ParamLimits

0xd267,	// (0x00042eac) list_single_number_heading_pane_g1

0xd273,	// (0x00042eb8) list_single_number_heading_pane_g2_ParamLimits

0xd273,	// (0x00042eb8) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x000451e8) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x000451e8) list_single_number_heading_pane_g

0x9bc6,	// (0x0003f80b) list_single_number_heading_pane_t1_ParamLimits

0x9bc6,	// (0x0003f80b) list_single_number_heading_pane_t1

0xd27f,	// (0x00042ec4) list_single_number_heading_pane_t2_ParamLimits

0xd27f,	// (0x00042ec4) list_single_number_heading_pane_t2

0xd291,	// (0x00042ed6) list_single_number_heading_pane_t3_ParamLimits

0xd291,	// (0x00042ed6) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x000451f2) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x000451f2) list_single_number_heading_pane_t

0xd2a3,	// (0x00042ee8) list_single_graphic_heading_pane_g1_ParamLimits

0xd2a3,	// (0x00042ee8) list_single_graphic_heading_pane_g1

0x9bee,	// (0x0003f833) list_single_graphic_heading_pane_g4_ParamLimits

0x9bee,	// (0x0003f833) list_single_graphic_heading_pane_g4

0xd273,	// (0x00042eb8) list_single_graphic_heading_pane_g5_ParamLimits

0xd273,	// (0x00042eb8) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x000451f9) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x000451f9) list_single_graphic_heading_pane_g

0x9bc6,	// (0x0003f80b) list_single_graphic_heading_pane_t1_ParamLimits

0x9bc6,	// (0x0003f80b) list_single_graphic_heading_pane_t1

0x9bff,	// (0x0003f844) list_single_graphic_heading_pane_t2_ParamLimits

0x9bff,	// (0x0003f844) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00045200) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00045200) list_single_graphic_heading_pane_t

0xd2af,	// (0x00042ef4) list_single_large_graphic_pane_g1_ParamLimits

0xd2af,	// (0x00042ef4) list_single_large_graphic_pane_g1

0xd267,	// (0x00042eac) list_single_large_graphic_pane_g2_ParamLimits

0xd267,	// (0x00042eac) list_single_large_graphic_pane_g2

0xd273,	// (0x00042eb8) list_single_large_graphic_pane_g3_ParamLimits

0xd273,	// (0x00042eb8) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00045205) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00045205) list_single_large_graphic_pane_g

0x3647,	// (0x0003928c) wait_border_pane_g2_copy1

0x9c11,	// (0x0003f856) list_single_large_graphic_pane_g4_cp2

0xd2bb,	// (0x00042f00) list_single_large_graphic_pane_t1_ParamLimits

0xd2bb,	// (0x00042f00) list_single_large_graphic_pane_t1

0xd2d1,	// (0x00042f16) list_double_pane_g1_ParamLimits

0xd2d1,	// (0x00042f16) list_double_pane_g1

0xd2dd,	// (0x00042f22) list_double_pane_g2_ParamLimits

0xd2dd,	// (0x00042f22) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0004520c) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0004520c) list_double_pane_g

0x9c19,	// (0x0003f85e) list_double_pane_t1_ParamLimits

0x9c19,	// (0x0003f85e) list_double_pane_t1

0x9c2f,	// (0x0003f874) list_double_pane_t2_ParamLimits

0x9c2f,	// (0x0003f874) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00045211) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00045211) list_double_pane_t

0x9c41,	// (0x0003f886) list_double2_pane_g1_ParamLimits

0x9c41,	// (0x0003f886) list_double2_pane_g1

0x9c52,	// (0x0003f897) list_double2_pane_g2_ParamLimits

0x9c52,	// (0x0003f897) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00045216) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00045216) list_double2_pane_g

0x9c5e,	// (0x0003f8a3) list_double2_pane_t1_ParamLimits

0x9c5e,	// (0x0003f8a3) list_double2_pane_t1

0x9c74,	// (0x0003f8b9) list_double2_pane_t2_ParamLimits

0x9c74,	// (0x0003f8b9) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0004521b) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0004521b) list_double2_pane_t

0xd2d1,	// (0x00042f16) list_double_number_pane_g1_ParamLimits

0xd2d1,	// (0x00042f16) list_double_number_pane_g1

0xd2dd,	// (0x00042f22) list_double_number_pane_g2_ParamLimits

0xd2dd,	// (0x00042f22) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0004520c) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0004520c) list_double_number_pane_g

0x9c86,	// (0x0003f8cb) list_double_number_pane_t1_ParamLimits

0x9c86,	// (0x0003f8cb) list_double_number_pane_t1

0x9c98,	// (0x0003f8dd) list_double_number_pane_t2_ParamLimits

0x9c98,	// (0x0003f8dd) list_double_number_pane_t2

0x9cae,	// (0x0003f8f3) list_double_number_pane_t3_ParamLimits

0x9cae,	// (0x0003f8f3) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00045220) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00045220) list_double_number_pane_t

0x9cc0,	// (0x0003f905) list_double_graphic_pane_g1_ParamLimits

0x9cc0,	// (0x0003f905) list_double_graphic_pane_g1

0x9ccc,	// (0x0003f911) list_double_graphic_pane_g2_ParamLimits

0x9ccc,	// (0x0003f911) list_double_graphic_pane_g2

0x9cdb,	// (0x0003f920) list_double_graphic_pane_g3_ParamLimits

0x9cdb,	// (0x0003f920) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00045227) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00045227) list_double_graphic_pane_g

0x9cf3,	// (0x0003f938) list_double_graphic_pane_t1_ParamLimits

0x9cf3,	// (0x0003f938) list_double_graphic_pane_t1

0x9d09,	// (0x0003f94e) list_double_graphic_pane_t2_ParamLimits

0x9d09,	// (0x0003f94e) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00045230) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00045230) list_double_graphic_pane_t

0x9d1b,	// (0x0003f960) list_double2_graphic_pane_g1_ParamLimits

0x9d1b,	// (0x0003f960) list_double2_graphic_pane_g1

0x9d27,	// (0x0003f96c) list_double2_graphic_pane_g2_ParamLimits

0x9d27,	// (0x0003f96c) list_double2_graphic_pane_g2

0x9d33,	// (0x0003f978) list_double2_graphic_pane_g3_ParamLimits

0x9d33,	// (0x0003f978) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00045235) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00045235) list_double2_graphic_pane_g

0x9d3f,	// (0x0003f984) list_double2_graphic_pane_t1_ParamLimits

0x9d3f,	// (0x0003f984) list_double2_graphic_pane_t1

0x9d55,	// (0x0003f99a) list_double2_graphic_pane_t2_ParamLimits

0x9d55,	// (0x0003f99a) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0004523c) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0004523c) list_double2_graphic_pane_t

0x9d67,	// (0x0003f9ac) list_double_large_graphic_pane_g1_ParamLimits

0x9d67,	// (0x0003f9ac) list_double_large_graphic_pane_g1

0x9d86,	// (0x0003f9cb) list_double_large_graphic_pane_g2_ParamLimits

0x9d86,	// (0x0003f9cb) list_double_large_graphic_pane_g2

0xd2dd,	// (0x00042f22) list_double_large_graphic_pane_g3_ParamLimits

0xd2dd,	// (0x00042f22) list_double_large_graphic_pane_g3

0x9d97,	// (0x0003f9dc) list_double_large_graphic_pane_g4_ParamLimits

0x9d97,	// (0x0003f9dc) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00045241) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00045241) list_double_large_graphic_pane_g

0x9daa,	// (0x0003f9ef) list_double_large_graphic_pane_t1_ParamLimits

0x9daa,	// (0x0003f9ef) list_double_large_graphic_pane_t1

0x9dc3,	// (0x0003fa08) list_double_large_graphic_pane_t2_ParamLimits

0x9dc3,	// (0x0003fa08) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0004524c) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0004524c) list_double_large_graphic_pane_t

0x9dd5,	// (0x0003fa1a) list_double2_large_graphic_pane_g1_ParamLimits

0x9dd5,	// (0x0003fa1a) list_double2_large_graphic_pane_g1

0x9c41,	// (0x0003f886) list_double2_large_graphic_pane_g2_ParamLimits

0x9c41,	// (0x0003f886) list_double2_large_graphic_pane_g2

0x9c52,	// (0x0003f897) list_double2_large_graphic_pane_g3_ParamLimits

0x9c52,	// (0x0003f897) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00045251) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00045251) list_double2_large_graphic_pane_g

0x9de1,	// (0x0003fa26) list_double2_large_graphic_pane_t1_ParamLimits

0x9de1,	// (0x0003fa26) list_double2_large_graphic_pane_t1

0x9df7,	// (0x0003fa3c) list_double2_large_graphic_pane_t2_ParamLimits

0x9df7,	// (0x0003fa3c) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00045258) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00045258) list_double2_large_graphic_pane_t

0x9e09,	// (0x0003fa4e) list_double_heading_pane_g1_ParamLimits

0x9e09,	// (0x0003fa4e) list_double_heading_pane_g1

0x9e1a,	// (0x0003fa5f) list_double_heading_pane_g2_ParamLimits

0x9e1a,	// (0x0003fa5f) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0004525d) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0004525d) list_double_heading_pane_g

0x9e26,	// (0x0003fa6b) list_double_heading_pane_t1_ParamLimits

0x9e26,	// (0x0003fa6b) list_double_heading_pane_t1

0x9c74,	// (0x0003f8b9) list_double_heading_pane_t2_ParamLimits

0x9c74,	// (0x0003f8b9) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00045262) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00045262) list_double_heading_pane_t

0x9e3c,	// (0x0003fa81) list_double_graphic_heading_pane_g1_ParamLimits

0x9e3c,	// (0x0003fa81) list_double_graphic_heading_pane_g1

0x9e09,	// (0x0003fa4e) list_double_graphic_heading_pane_g2_ParamLimits

0x9e09,	// (0x0003fa4e) list_double_graphic_heading_pane_g2

0x9e1a,	// (0x0003fa5f) list_double_graphic_heading_pane_g3_ParamLimits

0x9e1a,	// (0x0003fa5f) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00045267) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00045267) list_double_graphic_heading_pane_g

0x9e48,	// (0x0003fa8d) list_double_graphic_heading_pane_t1_ParamLimits

0x9e48,	// (0x0003fa8d) list_double_graphic_heading_pane_t1

0x9d55,	// (0x0003f99a) list_double_graphic_heading_pane_t2_ParamLimits

0x9d55,	// (0x0003f99a) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0004526e) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0004526e) list_double_graphic_heading_pane_t

0x9d86,	// (0x0003f9cb) list_double_time_pane_g1_ParamLimits

0x9d86,	// (0x0003f9cb) list_double_time_pane_g1

0xd2dd,	// (0x00042f22) list_double_time_pane_g2_ParamLimits

0xd2dd,	// (0x00042f22) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00045273) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00045273) list_double_time_pane_g

0x9e5e,	// (0x0003faa3) list_double_time_pane_t1_ParamLimits

0x9e5e,	// (0x0003faa3) list_double_time_pane_t1

0x9e74,	// (0x0003fab9) list_double_time_pane_t2_ParamLimits

0x9e74,	// (0x0003fab9) list_double_time_pane_t2

0x9e86,	// (0x0003facb) list_double_time_pane_t3_ParamLimits

0x9e86,	// (0x0003facb) list_double_time_pane_t3

0x9e98,	// (0x0003fadd) list_double_time_pane_t4_ParamLimits

0x9e98,	// (0x0003fadd) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00045278) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00045278) list_double_time_pane_t

0x9eaa,	// (0x0003faef) list_setting_pane_g1_ParamLimits

0x9eaa,	// (0x0003faef) list_setting_pane_g1

0x9e1a,	// (0x0003fa5f) list_setting_pane_g2_ParamLimits

0x9e1a,	// (0x0003fa5f) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00045281) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00045281) list_setting_pane_g

0x9eb6,	// (0x0003fafb) list_setting_pane_t1_ParamLimits

0x9eb6,	// (0x0003fafb) list_setting_pane_t1

0x9ecd,	// (0x0003fb12) list_setting_pane_t2_ParamLimits

0x9ecd,	// (0x0003fb12) list_setting_pane_t2

0x0002,

0xf641,	// (0x00045286) list_setting_pane_t_ParamLimits

0xf641,	// (0x00045286) list_setting_pane_t

0x9f0c,	// (0x0003fb51) set_value_pane_cp_ParamLimits

0x9f0c,	// (0x0003fb51) set_value_pane_cp

0x9f1a,	// (0x0003fb5f) list_setting_number_pane_g1_ParamLimits

0x9f1a,	// (0x0003fb5f) list_setting_number_pane_g1

0x9f26,	// (0x0003fb6b) list_setting_number_pane_g2_ParamLimits

0x9f26,	// (0x0003fb6b) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0004528d) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0004528d) list_setting_number_pane_g

0x9f32,	// (0x0003fb77) list_setting_number_pane_t1_ParamLimits

0x9f32,	// (0x0003fb77) list_setting_number_pane_t1

0x9f46,	// (0x0003fb8b) list_setting_number_pane_t2_ParamLimits

0x9f46,	// (0x0003fb8b) list_setting_number_pane_t2

0x9f5d,	// (0x0003fba2) list_setting_number_pane_t3_ParamLimits

0x9f5d,	// (0x0003fba2) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x00045292) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x00045292) list_setting_number_pane_t

0x9f0c,	// (0x0003fb51) set_value_pane_ParamLimits

0x9f0c,	// (0x0003fb51) set_value_pane

0xbf95,	// (0x00041bda) bg_set_opt_pane_ParamLimits

0xbf95,	// (0x00041bda) bg_set_opt_pane

0xd2fe,	// (0x00042f43) set_value_pane_t1

0xbfb6,	// (0x00041bfb) slider_set_pane_cp3

0xbfbf,	// (0x00041c04) volume_small_pane_cp

0xbfc8,	// (0x00041c0d) list_form_gen_pane

0xbfd1,	// (0x00041c16) scroll_pane_cp8

0x9fa0,	// (0x0003fbe5) form_field_data_pane_ParamLimits

0x9fa0,	// (0x0003fbe5) form_field_data_pane

0x9fbb,	// (0x0003fc00) form_field_data_wide_pane_ParamLimits

0x9fbb,	// (0x0003fc00) form_field_data_wide_pane

0xd31c,	// (0x00042f61) form_field_popup_pane_ParamLimits

0xd31c,	// (0x00042f61) form_field_popup_pane

0x9fdd,	// (0x0003fc22) form_field_popup_wide_pane_ParamLimits

0x9fdd,	// (0x0003fc22) form_field_popup_wide_pane

0xd33e,	// (0x00042f83) form_field_slider_pane_ParamLimits

0xd33e,	// (0x00042f83) form_field_slider_pane

0xd351,	// (0x00042f96) form_field_slider_wide_pane_ParamLimits

0xd351,	// (0x00042f96) form_field_slider_wide_pane

0xbfe2,	// (0x00041c27) data_form_pane

0xa008,	// (0x0003fc4d) form_field_data_pane_t1

0xbfee,	// (0x00041c33) input_focus_pane

0xd364,	// (0x00042fa9) data_form_wide_pane

0xd381,	// (0x00042fc6) form_field_data_wide_pane_t1

0xbd69,	// (0x000419ae) input_focus_pane_cp6

0xa022,	// (0x0003fc67) form_field_popup_pane_t1

0xbfee,	// (0x00041c33) input_focus_pane_cp7

0xc01c,	// (0x00041c61) list_form_pane

0xd3ab,	// (0x00042ff0) form_field_popup_wide_pane_t1

0xbfee,	// (0x00041c33) input_focus_pane_cp8

0xc028,	// (0x00041c6d) list_form_wide_pane

0xa044,	// (0x0003fc89) form_field_slider_pane_t1_ParamLimits

0xa044,	// (0x0003fc89) form_field_slider_pane_t1

0xa05c,	// (0x0003fca1) form_field_slider_pane_t2_ParamLimits

0xa05c,	// (0x0003fca1) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x000452a2) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x000452a2) form_field_slider_pane_t

0xb99e,	// (0x000415e3) input_focus_pane_cp9_ParamLimits

0xb99e,	// (0x000415e3) input_focus_pane_cp9

0xa071,	// (0x0003fcb6) slider_cont_pane_ParamLimits

0xa071,	// (0x0003fcb6) slider_cont_pane

0xc034,	// (0x00041c79) form_field_slider_wide_pane_t1_ParamLimits

0xc034,	// (0x00041c79) form_field_slider_wide_pane_t1

0xd3c0,	// (0x00043005) form_field_slider_wide_pane_t2_ParamLimits

0xd3c0,	// (0x00043005) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x000452a7) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x000452a7) form_field_slider_wide_pane_t

0xb99e,	// (0x000415e3) input_focus_pane_cp10_ParamLimits

0xb99e,	// (0x000415e3) input_focus_pane_cp10

0xa085,	// (0x0003fcca) slider_cont_pane_cp1_ParamLimits

0xa085,	// (0x0003fcca) slider_cont_pane_cp1

0xa099,	// (0x0003fcde) slider_form_pane_cp

0xc046,	// (0x00041c8b) input_focus_pane_g1

0xc04e,	// (0x00041c93) input_focus_pane_g2

0xc056,	// (0x00041c9b) input_focus_pane_g3

0xc05e,	// (0x00041ca3) input_focus_pane_g4

0xc066,	// (0x00041cab) input_focus_pane_g5

0xc06e,	// (0x00041cb3) input_focus_pane_g6

0xc076,	// (0x00041cbb) input_focus_pane_g7

0xc07e,	// (0x00041cc3) input_focus_pane_g8

0xc086,	// (0x00041ccb) input_focus_pane_g9

0xb946,	// (0x0004158b) input_focus_pane_g10

0x0009,

0xf667,	// (0x000452ac) input_focus_pane_g

0x3650,	// (0x00039295) wait_border_pane_g3_copy1

0xa0a1,	// (0x0003fce6) data_form_pane_t1

0xb946,	// (0x0004158b) wait_anim_pane_g1_copy1

0xb0c8,	// (0x00040d0d) data_form_wide_pane_t1

0xd3d2,	// (0x00043017) list_form_graphic_pane_cp_ParamLimits

0xd3d2,	// (0x00043017) list_form_graphic_pane_cp

0x45a7,	// (0x0003a1ec) slider_form_pane_g1

0x45b0,	// (0x0003a1f5) slider_form_pane_g2

0x0006,

0xf965,	// (0x000455aa) slider_form_pane_g

0xd3d2,	// (0x00043017) list_form_graphic_pane_ParamLimits

0xd3d2,	// (0x00043017) list_form_graphic_pane

0xd3e4,	// (0x00043029) list_form_graphic_pane_g1

0xd3ec,	// (0x00043031) list_form_graphic_pane_t1_ParamLimits

0xd3ec,	// (0x00043031) list_form_graphic_pane_t1

0xb9ac,	// (0x000415f1) list_highlight_pane_cp5_ParamLimits

0xb9ac,	// (0x000415f1) list_highlight_pane_cp5

0xa0bb,	// (0x0003fd00) find_pane_g1

0xee64,	// (0x00044aa9) input_find_pane

0xa0c4,	// (0x0003fd09) input_find_pane_g1_ParamLimits

0xa0c4,	// (0x0003fd09) input_find_pane_g1

0xa0d0,	// (0x0003fd15) input_find_pane_t1_ParamLimits

0xa0d0,	// (0x0003fd15) input_find_pane_t1

0xa0e5,	// (0x0003fd2a) input_find_pane_t2_ParamLimits

0xa0e5,	// (0x0003fd2a) input_find_pane_t2

0x0001,

0xf67c,	// (0x000452c1) input_find_pane_t_ParamLimits

0xf67c,	// (0x000452c1) input_find_pane_t

0xee6d,	// (0x00044ab2) input_focus_pane_cp5_ParamLimits

0xee6d,	// (0x00044ab2) input_focus_pane_cp5

0xee80,	// (0x00044ac5) bg_popup_window_pane_cp2_ParamLimits

0xee80,	// (0x00044ac5) bg_popup_window_pane_cp2

0xee8d,	// (0x00044ad2) listscroll_menu_pane_ParamLimits

0xee8d,	// (0x00044ad2) listscroll_menu_pane

0xa106,	// (0x0003fd4b) popup_submenu_window_ParamLimits

0xa106,	// (0x0003fd4b) popup_submenu_window

0xee99,	// (0x00044ade) find_popup_pane_g1

0xeea1,	// (0x00044ae6) input_popup_find_pane_cp

0xeeab,	// (0x00044af0) input_focus_pane_cp4_ParamLimits

0xeeab,	// (0x00044af0) input_focus_pane_cp4

0xeeb9,	// (0x00044afe) input_popup_find_pane_t1_ParamLimits

0xeeb9,	// (0x00044afe) input_popup_find_pane_t1

0xb950,	// (0x00041595) bg_popup_sub_pane_cp

0xeee7,	// (0x00044b2c) listscroll_popup_sub_pane

0xeeef,	// (0x00044b34) list_submenu_pane_ParamLimits

0xeeef,	// (0x00044b34) list_submenu_pane

0xef00,	// (0x00044b45) scroll_pane_cp4

0xef08,	// (0x00044b4d) list_single_popup_submenu_pane_ParamLimits

0xef08,	// (0x00044b4d) list_single_popup_submenu_pane

0xef1d,	// (0x00044b62) list_single_popup_submenu_pane_g1

0xef25,	// (0x00044b6a) list_single_popup_submenu_pane_t1_ParamLimits

0xef25,	// (0x00044b6a) list_single_popup_submenu_pane_t1

0xb99e,	// (0x000415e3) bg_active_tab_pane_cp1_ParamLimits

0xb99e,	// (0x000415e3) bg_active_tab_pane_cp1

0xa144,	// (0x0003fd89) tabs_2_active_pane_g1

0xa14c,	// (0x0003fd91) tabs_2_active_pane_t1

0xb99e,	// (0x000415e3) bg_passive_tab_pane_cp1_ParamLimits

0xb99e,	// (0x000415e3) bg_passive_tab_pane_cp1

0xa144,	// (0x0003fd89) tabs_2_passive_pane_g1

0xa14c,	// (0x0003fd91) tabs_2_passive_pane_t1

0xb9ac,	// (0x000415f1) bg_active_tab_pane_cp4

0xa15e,	// (0x0003fda3) tabs_2_long_active_pane_t1

0x2b1e,	// (0x00038763) bg_passive_tab_pane_cp4

0x0a62,	// (0x000366a7) list_single_midp_graphic_pane_g4_ParamLimits

0xb9ac,	// (0x000415f1) bg_active_tab_pane_cp5

0xa171,	// (0x0003fdb6) tabs_3_long_active_pane_t1

0x2b1e,	// (0x00038763) bg_passive_tab_pane_cp5

0x0a62,	// (0x000366a7) list_single_midp_graphic_pane_g4

0xb9ac,	// (0x000415f1) bg_popup_window_pane_cp13_ParamLimits

0xb9ac,	// (0x000415f1) bg_popup_window_pane_cp13

0xef43,	// (0x00044b88) listscroll_popup_fast_pane_ParamLimits

0xef43,	// (0x00044b88) listscroll_popup_fast_pane

0xef52,	// (0x00044b97) grid_popup_fast_pane_ParamLimits

0xef52,	// (0x00044b97) grid_popup_fast_pane

0xef64,	// (0x00044ba9) scroll_pane_cp9_ParamLimits

0xef64,	// (0x00044ba9) scroll_pane_cp9

0x5ef7,	// (0x0003bb3c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5ef7,	// (0x0003bb3c) list_single_graphic_hl_pane_t1_cp2

0xef88,	// (0x00044bcd) input_focus_pane_cp20_ParamLimits

0xef88,	// (0x00044bcd) input_focus_pane_cp20

0xef96,	// (0x00044bdb) query_popup_data_pane_t1_ParamLimits

0xef96,	// (0x00044bdb) query_popup_data_pane_t1

0xefa9,	// (0x00044bee) query_popup_data_pane_t2_ParamLimits

0xefa9,	// (0x00044bee) query_popup_data_pane_t2

0xefef,	// (0x00044c34) query_popup_data_pane_t3_ParamLimits

0xefef,	// (0x00044c34) query_popup_data_pane_t3

0xf030,	// (0x00044c75) query_popup_data_pane_t4_ParamLimits

0xf030,	// (0x00044c75) query_popup_data_pane_t4

0xf06c,	// (0x00044cb1) query_popup_data_pane_t5_ParamLimits

0xf06c,	// (0x00044cb1) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x000452c6) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x000452c6) query_popup_data_pane_t

0xc046,	// (0x00041c8b) bg_set_opt_pane_g1

0xc04e,	// (0x00041c93) bg_set_opt_pane_g2

0xc056,	// (0x00041c9b) bg_set_opt_pane_g3

0xc05e,	// (0x00041ca3) bg_set_opt_pane_g4

0xc066,	// (0x00041cab) bg_set_opt_pane_g5

0xc06e,	// (0x00041cb3) bg_set_opt_pane_g6

0xc076,	// (0x00041cbb) bg_set_opt_pane_g7

0xc07e,	// (0x00041cc3) bg_set_opt_pane_g8

0xc086,	// (0x00041ccb) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x000452d1) bg_set_opt_pane_g

0x0068,	// (0x00035cad) control_top_pane_stacon_ParamLimits

0x0068,	// (0x00035cad) control_top_pane_stacon

0x00bb,	// (0x00035d00) signal_pane_stacon_ParamLimits

0x00bb,	// (0x00035d00) signal_pane_stacon

0x2480,	// (0x000380c5) stacon_top_pane_g1_ParamLimits

0x2480,	// (0x000380c5) stacon_top_pane_g1

0x00e0,	// (0x00035d25) title_pane_stacon_ParamLimits

0x00e0,	// (0x00035d25) title_pane_stacon

0x010a,	// (0x00035d4f) uni_indicator_pane_stacon_ParamLimits

0x010a,	// (0x00035d4f) uni_indicator_pane_stacon

0x011f,	// (0x00035d64) battery_pane_stacon_ParamLimits

0x011f,	// (0x00035d64) battery_pane_stacon

0x0163,	// (0x00035da8) control_bottom_pane_stacon_ParamLimits

0x0163,	// (0x00035da8) control_bottom_pane_stacon

0x0186,	// (0x00035dcb) navi_pane_stacon_ParamLimits

0x0186,	// (0x00035dcb) navi_pane_stacon

0x24a2,	// (0x000380e7) stacon_bottom_pane_g1_ParamLimits

0x24a2,	// (0x000380e7) stacon_bottom_pane_g1

0xf0a3,	// (0x00044ce8) aid_levels_signal_lsc_ParamLimits

0xf0a3,	// (0x00044ce8) aid_levels_signal_lsc

0xf0ba,	// (0x00044cff) signal_pane_stacon_g1_ParamLimits

0xf0ba,	// (0x00044cff) signal_pane_stacon_g1

0xf0ce,	// (0x00044d13) signal_pane_stacon_g2_ParamLimits

0xf0ce,	// (0x00044d13) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x000452e4) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x000452e4) signal_pane_stacon_g

0xf110,	// (0x00044d55) title_pane_stacon_t1_ParamLimits

0xf110,	// (0x00044d55) title_pane_stacon_t1

0xf135,	// (0x00044d7a) uni_indicator_pane_stacon_g1

0xf13f,	// (0x00044d84) uni_indicator_pane_stacon_g2

0xf149,	// (0x00044d8e) uni_indicator_pane_stacon_g3

0xf153,	// (0x00044d98) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x000452f0) uni_indicator_pane_stacon_g

0xf15d,	// (0x00044da2) control_top_pane_stacon_g1

0xf165,	// (0x00044daa) control_top_pane_stacon_t1_ParamLimits

0xf165,	// (0x00044daa) control_top_pane_stacon_t1

0xf19c,	// (0x00044de1) aid_levels_battery_lsc_ParamLimits

0xf19c,	// (0x00044de1) aid_levels_battery_lsc

0xf1b4,	// (0x00044df9) battery_pane_stacon_g1_ParamLimits

0xf1b4,	// (0x00044df9) battery_pane_stacon_g1

0xf1c7,	// (0x00044e0c) battery_pane_stacon_g2_ParamLimits

0xf1c7,	// (0x00044e0c) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x000452f9) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x000452f9) battery_pane_stacon_g

0xf205,	// (0x00044e4a) navi_icon_pane_stacon

0xf219,	// (0x00044e5e) navi_navi_pane_stacon

0xf205,	// (0x00044e4a) navi_text_pane_stacon

0xf15d,	// (0x00044da2) control_bottom_pane_stacon_g1

0xf22f,	// (0x00044e74) control_bottom_pane_stacon_t1_ParamLimits

0xf22f,	// (0x00044e74) control_bottom_pane_stacon_t1

0xa183,	// (0x0003fdc8) grid_app_pane_ParamLimits

0xa183,	// (0x0003fdc8) grid_app_pane

0xa1bb,	// (0x0003fe00) scroll_pane_cp15_ParamLimits

0xa1bb,	// (0x0003fe00) scroll_pane_cp15

0xa1d0,	// (0x0003fe15) cell_app_pane_ParamLimits

0xa1d0,	// (0x0003fe15) cell_app_pane

0xa21d,	// (0x0003fe62) cell_app_pane_g1_ParamLimits

0xa21d,	// (0x0003fe62) cell_app_pane_g1

0xf280,	// (0x00044ec5) cell_app_pane_g2_ParamLimits

0xf280,	// (0x00044ec5) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x000452fe) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x000452fe) cell_app_pane_g

0xa241,	// (0x0003fe86) cell_app_pane_t1_ParamLimits

0xa241,	// (0x0003fe86) cell_app_pane_t1

0xf28c,	// (0x00044ed1) grid_highlight_pane_ParamLimits

0xf28c,	// (0x00044ed1) grid_highlight_pane

0xc046,	// (0x00041c8b) cell_highlight_pane_g1

0xc04e,	// (0x00041c93) cell_highlight_pane_g2

0xc056,	// (0x00041c9b) cell_highlight_pane_g3

0xc05e,	// (0x00041ca3) cell_highlight_pane_g4

0xc066,	// (0x00041cab) cell_highlight_pane_g5

0xc06e,	// (0x00041cb3) cell_highlight_pane_g6

0xc076,	// (0x00041cbb) cell_highlight_pane_g7

0xc07e,	// (0x00041cc3) cell_highlight_pane_g8

0xc086,	// (0x00041ccb) cell_highlight_pane_g9

0xb946,	// (0x0004158b) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x000452ac) cell_highlight_pane_g

0xf2a7,	// (0x00044eec) bg_scroll_pane

0xf2c6,	// (0x00044f0b) scroll_handle_pane

0xf317,	// (0x00044f5c) scroll_bg_pane_g1

0xf32c,	// (0x00044f71) scroll_bg_pane_g2

0xf344,	// (0x00044f89) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x00045303) scroll_bg_pane_g

0xf359,	// (0x00044f9e) scroll_handle_focus_pane_ParamLimits

0xf359,	// (0x00044f9e) scroll_handle_focus_pane

0xf317,	// (0x00044f5c) scroll_handle_pane_g1

0xf366,	// (0x00044fab) scroll_handle_pane_g2

0xf344,	// (0x00044f89) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0004530a) scroll_handle_pane_g

0xeeab,	// (0x00044af0) bg_popup_sub_pane_cp21_ParamLimits

0xeeab,	// (0x00044af0) bg_popup_sub_pane_cp21

0xf37a,	// (0x00044fbf) popup_fep_japan_predictive_window_t1_ParamLimits

0xf37a,	// (0x00044fbf) popup_fep_japan_predictive_window_t1

0xf391,	// (0x00044fd6) popup_fep_japan_predictive_window_t2_ParamLimits

0xf391,	// (0x00044fd6) popup_fep_japan_predictive_window_t2

0xf3c4,	// (0x00045009) popup_fep_japan_predictive_window_t3_ParamLimits

0xf3c4,	// (0x00045009) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x00045311) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x00045311) popup_fep_japan_predictive_window_t

0xb950,	// (0x00041595) bg_popup_sub_pane_cp23

0xf3fb,	// (0x00045040) listscroll_japin_cand_pane

0xf403,	// (0x00045048) popup_fep_japan_candidate_window_t1

0xf411,	// (0x00045056) candidate_pane_ParamLimits

0xf411,	// (0x00045056) candidate_pane

0xf423,	// (0x00045068) scroll_pane_cp30

0xf42d,	// (0x00045072) list_single_popup_jap_candidate_pane_ParamLimits

0xf42d,	// (0x00045072) list_single_popup_jap_candidate_pane

0xb950,	// (0x00041595) list_highlight_pane_cp30

0xf441,	// (0x00045086) list_single_popup_jap_candidate_pane_t1

0xa261,	// (0x0003fea6) level_1_signal

0xa273,	// (0x0003feb8) level_2_signal

0xa286,	// (0x0003fecb) level_3_signal

0xa299,	// (0x0003fede) level_4_signal

0xa2ac,	// (0x0003fef1) level_5_signal

0xa2bf,	// (0x0003ff04) level_6_signal

0xa2d2,	// (0x0003ff17) level_7_signal

0xa261,	// (0x0003fea6) level_1_battery

0xa273,	// (0x0003feb8) level_2_battery

0xa286,	// (0x0003fecb) level_3_battery

0xa299,	// (0x0003fede) level_4_battery

0xa2ac,	// (0x0003fef1) level_5_battery

0xa2bf,	// (0x0003ff04) level_6_battery

0xa2d2,	// (0x0003ff17) level_7_battery

0x21e7,	// (0x00037e2c) list_menu_pane_ParamLimits

0x21e7,	// (0x00037e2c) list_menu_pane

0x21fd,	// (0x00037e42) scroll_pane_cp25_ParamLimits

0x21fd,	// (0x00037e42) scroll_pane_cp25

0x2216,	// (0x00037e5b) list_double2_graphic_pane_cp2_ParamLimits

0x2216,	// (0x00037e5b) list_double2_graphic_pane_cp2

0x2216,	// (0x00037e5b) list_double2_large_graphic_pane_cp2_ParamLimits

0x2216,	// (0x00037e5b) list_double2_large_graphic_pane_cp2

0x2216,	// (0x00037e5b) list_double2_pane_cp2_ParamLimits

0x2216,	// (0x00037e5b) list_double2_pane_cp2

0x2216,	// (0x00037e5b) list_double_graphic_pane_cp2_ParamLimits

0x2216,	// (0x00037e5b) list_double_graphic_pane_cp2

0x2216,	// (0x00037e5b) list_double_large_graphic_pane_cp2_ParamLimits

0x2216,	// (0x00037e5b) list_double_large_graphic_pane_cp2

0x2216,	// (0x00037e5b) list_double_number_pane_cp2_ParamLimits

0x2216,	// (0x00037e5b) list_double_number_pane_cp2

0x2216,	// (0x00037e5b) list_double_pane_cp2_ParamLimits

0x2216,	// (0x00037e5b) list_double_pane_cp2

0xa2e5,	// (0x0003ff2a) list_single_2graphic_pane_cp2_ParamLimits

0xa2e5,	// (0x0003ff2a) list_single_2graphic_pane_cp2

0xa2e5,	// (0x0003ff2a) list_single_graphic_heading_pane_cp2_ParamLimits

0xa2e5,	// (0x0003ff2a) list_single_graphic_heading_pane_cp2

0xa2e5,	// (0x0003ff2a) list_single_graphic_pane_cp2_ParamLimits

0xa2e5,	// (0x0003ff2a) list_single_graphic_pane_cp2

0xa2e5,	// (0x0003ff2a) list_single_heading_pane_cp2_ParamLimits

0xa2e5,	// (0x0003ff2a) list_single_heading_pane_cp2

0x2259,	// (0x00037e9e) list_single_large_graphic_pane_cp2_ParamLimits

0x2259,	// (0x00037e9e) list_single_large_graphic_pane_cp2

0xa2e5,	// (0x0003ff2a) list_single_number_heading_pane_cp2_ParamLimits

0xa2e5,	// (0x0003ff2a) list_single_number_heading_pane_cp2

0xa2e5,	// (0x0003ff2a) list_single_number_pane_cp2_ParamLimits

0xa2e5,	// (0x0003ff2a) list_single_number_pane_cp2

0xa2e5,	// (0x0003ff2a) list_single_pane_cp2_ParamLimits

0xa2e5,	// (0x0003ff2a) list_single_pane_cp2

0x22c7,	// (0x00037f0c) bg_popup_sub_pane_cp22

0xf4d9,	// (0x0004511e) popup_side_volume_key_window_g1

0xf503,	// (0x00045148) popup_side_volume_key_window_t1

0xf521,	// (0x00045166) volume_small_pane_cp1

0xb99e,	// (0x000415e3) bg_popup_sub_pane_cp24_ParamLimits

0xb99e,	// (0x000415e3) bg_popup_sub_pane_cp24

0x22dd,	// (0x00037f22) fep_china_uni_candidate_pane_ParamLimits

0x22dd,	// (0x00037f22) fep_china_uni_candidate_pane

0x22f1,	// (0x00037f36) fep_china_uni_entry_pane

0x2301,	// (0x00037f46) popup_fep_china_uni_window_g1

0x231d,	// (0x00037f62) fep_china_uni_entry_pane_g1

0x2327,	// (0x00037f6c) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x00045342) fep_china_uni_entry_pane_g

0x2331,	// (0x00037f76) fep_entry_item_pane

0x233b,	// (0x00037f80) fep_candidate_item_pane

0x2343,	// (0x00037f88) fep_china_uni_candidate_pane_g1

0x234d,	// (0x00037f92) fep_china_uni_candidate_pane_g2

0x2355,	// (0x00037f9a) fep_china_uni_candidate_pane_g3

0x235d,	// (0x00037fa2) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x00045347) fep_china_uni_candidate_pane_g

0xb946,	// (0x0004158b) fep_entry_item_pane_g1

0x2367,	// (0x00037fac) fep_entry_item_pane_t1_ParamLimits

0x2367,	// (0x00037fac) fep_entry_item_pane_t1

0x237d,	// (0x00037fc2) fep_candidate_item_pane_t1_ParamLimits

0x237d,	// (0x00037fc2) fep_candidate_item_pane_t1

0x2392,	// (0x00037fd7) fep_candidate_item_pane_t2_ParamLimits

0x2392,	// (0x00037fd7) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x00045350) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x00045350) fep_candidate_item_pane_t

0xb9ac,	// (0x000415f1) list_highlight_pane_cp31_ParamLimits

0xb9ac,	// (0x000415f1) list_highlight_pane_cp31

0x23a4,	// (0x00037fe9) level_1_signal_lsc

0x23ad,	// (0x00037ff2) level_2_signal_lsc

0x23b6,	// (0x00037ffb) level_3_signal_lsc

0x23bf,	// (0x00038004) level_4_signal_lsc

0x23c8,	// (0x0003800d) level_5_signal_lsc

0x23d1,	// (0x00038016) level_6_signal_lsc

0x23da,	// (0x0003801f) level_7_signal_lsc

0x23da,	// (0x0003801f) level_1_battery_lsc

0x23e3,	// (0x00038028) level_2_battery_lsc

0x23ec,	// (0x00038031) level_3_battery_lsc

0x23f5,	// (0x0003803a) level_4_battery_lsc

0x23fe,	// (0x00038043) level_5_battery_lsc

0x2407,	// (0x0003804c) level_6_battery_lsc

0x23a4,	// (0x00037fe9) level_7_battery_lsc

0x2410,	// (0x00038055) scroll_handle_focus_pane_g1

0x2419,	// (0x0003805e) scroll_handle_focus_pane_g2

0x2422,	// (0x00038067) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x00045355) scroll_handle_focus_pane_g

0xa374,	// (0x0003ffb9) list_single_2graphic_pane_g1_ParamLimits

0xa374,	// (0x0003ffb9) list_single_2graphic_pane_g1

0x9bee,	// (0x0003f833) list_single_2graphic_pane_g2_ParamLimits

0x9bee,	// (0x0003f833) list_single_2graphic_pane_g2

0xd273,	// (0x00042eb8) list_single_2graphic_pane_g3_ParamLimits

0xd273,	// (0x00042eb8) list_single_2graphic_pane_g3

0xa380,	// (0x0003ffc5) list_single_2graphic_pane_g4_ParamLimits

0xa380,	// (0x0003ffc5) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0004535c) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0004535c) list_single_2graphic_pane_g

0xa38c,	// (0x0003ffd1) list_single_2graphic_pane_t1_ParamLimits

0xa38c,	// (0x0003ffd1) list_single_2graphic_pane_t1

0xa3ba,	// (0x0003ffff) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa3ba,	// (0x0003ffff) list_double2_graphic_large_graphic_pane_g1

0x9c41,	// (0x0003f886) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9c41,	// (0x0003f886) list_double2_graphic_large_graphic_pane_g2

0x9c52,	// (0x0003f897) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9c52,	// (0x0003f897) list_double2_graphic_large_graphic_pane_g3

0xa3cc,	// (0x00040011) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa3cc,	// (0x00040011) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x00045365) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x00045365) list_double2_graphic_large_graphic_pane_g

0xa3d8,	// (0x0004001d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa3d8,	// (0x0004001d) list_double2_graphic_large_graphic_pane_t1

0xa3ee,	// (0x00040033) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa3ee,	// (0x00040033) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0004536e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0004536e) list_double2_graphic_large_graphic_pane_t

0x2565,	// (0x000381aa) popup_fast_swap_window_ParamLimits

0x2565,	// (0x000381aa) popup_fast_swap_window

0x2583,	// (0x000381c8) popup_side_volume_key_window

0x25a1,	// (0x000381e6) stacon_top_pane

0x25ab,	// (0x000381f0) status_pane_ParamLimits

0x25ab,	// (0x000381f0) status_pane

0xa448,	// (0x0004008d) status_small_pane

0xb950,	// (0x00041595) control_pane

0xb950,	// (0x00041595) stacon_bottom_pane

0xbfd1,	// (0x00041c16) scroll_pane_cp121

0xbfc8,	// (0x00041c0d) set_content_pane

0xa400,	// (0x00040045) bg_active_tab_pane_g1_cp1

0x2434,	// (0x00038079) bg_active_tab_pane_g2_cp1

0xa409,	// (0x0004004e) bg_active_tab_pane_g3_cp1

0xa400,	// (0x00040045) bg_passive_tab_pane_g1_cp1

0x2434,	// (0x00038079) bg_passive_tab_pane_g2_cp1

0xa409,	// (0x0004004e) bg_passive_tab_pane_g3_cp1

0xa412,	// (0x00040057) bg_active_tab_pane_g1_cp2

0x2434,	// (0x00038079) bg_active_tab_pane_g2_cp2

0xa41b,	// (0x00040060) bg_active_tab_pane_g3_cp2

0xa412,	// (0x00040057) bg_passive_tab_pane_g1_cp2

0x2434,	// (0x00038079) bg_passive_tab_pane_g2_cp2

0xa41b,	// (0x00040060) bg_passive_tab_pane_g3_cp2

0xa424,	// (0x00040069) bg_active_tab_pane_g1_cp3

0x2434,	// (0x00038079) bg_active_tab_pane_g2_cp3

0xa42d,	// (0x00040072) bg_active_tab_pane_g3_cp3

0xa424,	// (0x00040069) bg_passive_tab_pane_g1_cp3

0x2434,	// (0x00038079) bg_passive_tab_pane_g2_cp3

0xa42d,	// (0x00040072) bg_passive_tab_pane_g3_cp3

0xa436,	// (0x0004007b) bg_active_tab_pane_g1_cp4

0x2434,	// (0x00038079) bg_active_tab_pane_g2_cp4

0xa43f,	// (0x00040084) bg_active_tab_pane_g3_cp4

0xa436,	// (0x0004007b) bg_passive_tab_pane_g1_cp4

0x2434,	// (0x00038079) bg_passive_tab_pane_g2_cp4

0xa43f,	// (0x00040084) bg_passive_tab_pane_g3_cp4

0x24be,	// (0x00038103) bg_active_tab_pane_g1_cp5

0x2434,	// (0x00038079) bg_active_tab_pane_g2_cp5

0x24c7,	// (0x0003810c) bg_active_tab_pane_g3_cp5

0x24be,	// (0x00038103) bg_passive_tab_pane_g1_cp5

0x2434,	// (0x00038079) bg_passive_tab_pane_g2_cp5

0x24c7,	// (0x0003810c) bg_passive_tab_pane_g3_cp5

0x4b9f,	// (0x0003a7e4) list_set_graphic_pane_ParamLimits

0x4b9f,	// (0x0003a7e4) list_set_graphic_pane

0xb950,	// (0x00041595) bg_set_opt_pane_cp4

0x24e6,	// (0x0003812b) list_set_graphic_pane_g1_ParamLimits

0x24e6,	// (0x0003812b) list_set_graphic_pane_g1

0x24f2,	// (0x00038137) list_set_graphic_pane_g2_ParamLimits

0x24f2,	// (0x00038137) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x00045373) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x00045373) list_set_graphic_pane_g

0x0009,

0xfab3,	// (0x000456f8) volume_small_pane_cp_g

0x2516,	// (0x0003815b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2516,	// (0x0003815b) list_double2_large_graphic_pane_g1_cp2

0x2524,	// (0x00038169) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2524,	// (0x00038169) list_double2_large_graphic_pane_g2_cp2

0x2535,	// (0x0003817a) list_double2_large_graphic_pane_g3_cp2

0x253d,	// (0x00038182) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x253d,	// (0x00038182) list_double2_large_graphic_pane_t1_cp2

0x2553,	// (0x00038198) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2553,	// (0x00038198) list_double2_large_graphic_pane_t2_cp2

0x4134,	// (0x00039d79) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4134,	// (0x00039d79) list_double_large_graphic_pane_g1_cp2

0x4147,	// (0x00039d8c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4147,	// (0x00039d8c) list_double_large_graphic_pane_g2_cp2

0x26d4,	// (0x00038319) list_double_large_graphic_pane_g3_cp2

0x4158,	// (0x00039d9d) list_double_large_graphic_pane_g4_cp

0x4160,	// (0x00039da5) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4160,	// (0x00039da5) list_double_large_graphic_pane_t1_cp2

0x4177,	// (0x00039dbc) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4177,	// (0x00039dbc) list_double_large_graphic_pane_t2_cp2

0x25c4,	// (0x00038209) list_double2_graphic_pane_g1_cp2_ParamLimits

0x25c4,	// (0x00038209) list_double2_graphic_pane_g1_cp2

0x25d2,	// (0x00038217) list_double2_graphic_pane_g2_cp2_ParamLimits

0x25d2,	// (0x00038217) list_double2_graphic_pane_g2_cp2

0x25e3,	// (0x00038228) list_double2_graphic_pane_g3_cp2

0x25ed,	// (0x00038232) list_double2_graphic_pane_t1_cp2_ParamLimits

0x25ed,	// (0x00038232) list_double2_graphic_pane_t1_cp2

0x2603,	// (0x00038248) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2603,	// (0x00038248) list_double2_graphic_pane_t2_cp2

0x2615,	// (0x0003825a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2615,	// (0x0003825a) list_single_number_heading_pane_g1_cp2

0x2621,	// (0x00038266) list_single_number_heading_pane_g2_cp2

0x2629,	// (0x0003826e) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2629,	// (0x0003826e) list_single_number_heading_pane_t1_cp2

0x263f,	// (0x00038284) list_single_number_heading_pane_t2_cp2_ParamLimits

0x263f,	// (0x00038284) list_single_number_heading_pane_t2_cp2

0x2653,	// (0x00038298) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2653,	// (0x00038298) list_single_number_heading_pane_t3_cp2

0x2615,	// (0x0003825a) list_single_heading_pane_g1_cp2_ParamLimits

0x2615,	// (0x0003825a) list_single_heading_pane_g1_cp2

0x2621,	// (0x00038266) list_single_heading_pane_g2_cp2

0x2629,	// (0x0003826e) list_single_heading_pane_t1_cp2_ParamLimits

0x2629,	// (0x0003826e) list_single_heading_pane_t1_cp2

0x3f2e,	// (0x00039b73) list_single_heading_pane_t2_cp2_ParamLimits

0x3f2e,	// (0x00039b73) list_single_heading_pane_t2_cp2

0x3e76,	// (0x00039abb) list_double_graphic_pane_g1_cp2_ParamLimits

0x3e76,	// (0x00039abb) list_double_graphic_pane_g1_cp2

0x3e82,	// (0x00039ac7) list_double_graphic_pane_g2_cp2_ParamLimits

0x3e82,	// (0x00039ac7) list_double_graphic_pane_g2_cp2

0x3e91,	// (0x00039ad6) list_double_graphic_pane_g3_cp2

0x3e99,	// (0x00039ade) list_double_graphic_pane_t1_cp2_ParamLimits

0x3e99,	// (0x00039ade) list_double_graphic_pane_t1_cp2

0x3eaf,	// (0x00039af4) list_double_graphic_pane_t2_cp2_ParamLimits

0x3eaf,	// (0x00039af4) list_double_graphic_pane_t2_cp2

0x26c8,	// (0x0003830d) list_double_number_pane_g1_cp2_ParamLimits

0x26c8,	// (0x0003830d) list_double_number_pane_g1_cp2

0x26d4,	// (0x00038319) list_double_number_pane_g2_cp2

0x3e3a,	// (0x00039a7f) list_double_number_pane_t1_cp2_ParamLimits

0x3e3a,	// (0x00039a7f) list_double_number_pane_t1_cp2

0x3e4e,	// (0x00039a93) list_double_number_pane_t2_cp2_ParamLimits

0x3e4e,	// (0x00039a93) list_double_number_pane_t2_cp2

0x3e64,	// (0x00039aa9) list_double_number_pane_t3_cp2_ParamLimits

0x3e64,	// (0x00039aa9) list_double_number_pane_t3_cp2

0x3d23,	// (0x00039968) list_single_graphic_pane_g1_cp2_ParamLimits

0x3d23,	// (0x00039968) list_single_graphic_pane_g1_cp2

0x272e,	// (0x00038373) list_single_graphic_pane_g2_cp2_ParamLimits

0x272e,	// (0x00038373) list_single_graphic_pane_g2_cp2

0x273a,	// (0x0003837f) list_single_graphic_pane_g3_cp2

0x3cf9,	// (0x0003993e) list_single_graphic_pane_t1_cp2_ParamLimits

0x3cf9,	// (0x0003993e) list_single_graphic_pane_t1_cp2

0x272e,	// (0x00038373) list_single_number_pane_g1_cp2_ParamLimits

0x272e,	// (0x00038373) list_single_number_pane_g1_cp2

0x273a,	// (0x0003837f) list_single_number_pane_g2_cp2

0x3cf9,	// (0x0003993e) list_single_number_pane_t1_cp2_ParamLimits

0x3cf9,	// (0x0003993e) list_single_number_pane_t1_cp2

0x3d0f,	// (0x00039954) list_single_number_pane_t2_cp2_ParamLimits

0x3d0f,	// (0x00039954) list_single_number_pane_t2_cp2

0x2524,	// (0x00038169) list_double2_pane_g1_cp2_ParamLimits

0x2524,	// (0x00038169) list_double2_pane_g1_cp2

0x2535,	// (0x0003817a) list_double2_pane_g2_cp2

0x26a0,	// (0x000382e5) list_double2_pane_t1_cp2_ParamLimits

0x26a0,	// (0x000382e5) list_double2_pane_t1_cp2

0x26b6,	// (0x000382fb) list_double2_pane_t2_cp2_ParamLimits

0x26b6,	// (0x000382fb) list_double2_pane_t2_cp2

0x26c8,	// (0x0003830d) list_double_pane_g1_cp2_ParamLimits

0x26c8,	// (0x0003830d) list_double_pane_g1_cp2

0x26d4,	// (0x00038319) list_double_pane_g2_cp2

0x26dc,	// (0x00038321) list_double_pane_t1_cp2_ParamLimits

0x26dc,	// (0x00038321) list_double_pane_t1_cp2

0x26f2,	// (0x00038337) list_double_pane_t2_cp2_ParamLimits

0x26f2,	// (0x00038337) list_double_pane_t2_cp2

0x271e,	// (0x00038363) list_single_pane_cp2_g3

0x272e,	// (0x00038373) list_single_pane_g1_cp2_ParamLimits

0x272e,	// (0x00038373) list_single_pane_g1_cp2

0x273a,	// (0x0003837f) list_single_pane_g2_cp2

0x2742,	// (0x00038387) list_single_pane_t1_cp2_ParamLimits

0x2742,	// (0x00038387) list_single_pane_t1_cp2

0x275a,	// (0x0003839f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x275a,	// (0x0003839f) list_single_large_graphic_pane_g1_cp2

0x2768,	// (0x000383ad) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2768,	// (0x000383ad) list_single_large_graphic_pane_g2_cp2

0x2774,	// (0x000383b9) list_single_large_graphic_pane_g3_cp2

0x277c,	// (0x000383c1) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x277c,	// (0x000383c1) list_single_large_graphic_pane_g4_cp1

0x2796,	// (0x000383db) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2796,	// (0x000383db) list_single_large_graphic_pane_t1_cp2

0x3cc3,	// (0x00039908) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3cc3,	// (0x00039908) list_single_graphic_heading_pane_g1_cp2

0x3c90,	// (0x000398d5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3c90,	// (0x000398d5) list_single_graphic_heading_pane_g4_cp2

0x273a,	// (0x0003837f) list_single_graphic_heading_pane_g5_cp2

0x3ccf,	// (0x00039914) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3ccf,	// (0x00039914) list_single_graphic_heading_pane_t1_cp2

0x3ce5,	// (0x0003992a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3ce5,	// (0x0003992a) list_single_graphic_heading_pane_t2_cp2

0x3c84,	// (0x000398c9) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3c84,	// (0x000398c9) list_single_2graphic_pane_g1_cp2

0x3c90,	// (0x000398d5) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3c90,	// (0x000398d5) list_single_2graphic_pane_g2_cp2

0x273a,	// (0x0003837f) list_single_2graphic_pane_g3_cp2

0x3ca1,	// (0x000398e6) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3ca1,	// (0x000398e6) list_single_2graphic_pane_g4_cp2

0x3cad,	// (0x000398f2) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3cad,	// (0x000398f2) list_single_2graphic_pane_t1_cp2

0xb946,	// (0x0004158b) list_highlight_pane_g10_cp1

0x385c,	// (0x000394a1) list_highlight_pane_g1_cp1

0x3864,	// (0x000394a9) list_highlight_pane_g2_cp1

0x386c,	// (0x000394b1) list_highlight_pane_g3_cp1

0x3874,	// (0x000394b9) list_highlight_pane_g4_cp1

0x387c,	// (0x000394c1) list_highlight_pane_g5_cp1

0x3884,	// (0x000394c9) list_highlight_pane_g6_cp1

0x388c,	// (0x000394d1) list_highlight_pane_g7_cp1

0x3894,	// (0x000394d9) list_highlight_pane_g8_cp1

0x389c,	// (0x000394e1) list_highlight_pane_g9_cp1

0xc534,	// (0x00042179) form_field_slider_pane_t3

0xc542,	// (0x00042187) form_field_slider_pane_t4

0x3798,	// (0x000393dd) slider_form_pane_ParamLimits

0x3798,	// (0x000393dd) slider_form_pane

0xb950,	// (0x00041595) control_abbreviations

0xb950,	// (0x00041595) control_conventions

0xb950,	// (0x00041595) control_definitions

0xb950,	// (0x00041595) format_table_attribute

0x3f84,	// (0x00039bc9) bg_popup_preview_window_pane_g9

0xb950,	// (0x00041595) format_table_data2

0xb950,	// (0x00041595) format_table_data3

0xb950,	// (0x00041595) format_table_data_example

0x0008,

0xb950,	// (0x00041595) intro_purpose

0xf8c5,	// (0x0004550a) bg_popup_preview_window_pane_g

0xb950,	// (0x00041595) texts_category

0xb950,	// (0x00041595) texts_graphics

0x27ac,	// (0x000383f1) text_digital

0x27bb,	// (0x00038400) text_primary

0x27ca,	// (0x0003840f) text_primary_small

0x27d9,	// (0x0003841e) text_secondary

0x27e8,	// (0x0003842d) text_title

0x46c8,	// (0x0003a30d) bg_passive_tab_pane_g1_cp3_srt

0x2434,	// (0x00038079) bg_passive_tab_pane_g2_cp3_srt

0x46d1,	// (0x0003a316) bg_passive_tab_pane_g3_cp3_srt

0xb99e,	// (0x000415e3) bg_active_tab_pane_cp3_srt_ParamLimits

0xb99e,	// (0x000415e3) bg_active_tab_pane_cp3_srt

0x46da,	// (0x0003a31f) tabs_4_active_pane_srt_g1

0xc94c,	// (0x00042591) tabs_4_active_pane_srt_t1_ParamLimits

0xc94c,	// (0x00042591) tabs_4_active_pane_srt_t1

0x46c8,	// (0x0003a30d) bg_active_tab_pane_g1_cp3_copy1

0x2434,	// (0x00038079) bg_active_tab_pane_g2_cp3_copy1

0x46d1,	// (0x0003a316) bg_active_tab_pane_g3_cp3_copy1

0xb9ac,	// (0x000415f1) tabs_2_long_active_pane_srt_ParamLimits

0xb9ac,	// (0x000415f1) tabs_2_long_active_pane_srt

0xb9ac,	// (0x000415f1) tabs_2_long_passive_pane_srt_ParamLimits

0xb9ac,	// (0x000415f1) tabs_2_long_passive_pane_srt

0x2b1e,	// (0x00038763) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b1e,	// (0x00038763) bg_passive_tab_pane_cp4_srt

0x43be,	// (0x0003a003) bg_passive_tab_pane_g1_cp4_srt

0x2434,	// (0x00038079) bg_passive_tab_pane_g2_cp4_srt

0x43c7,	// (0x0003a00c) bg_passive_tab_pane_g3_cp4_srt

0xb9ac,	// (0x000415f1) bg_active_tab_pane_cp4_srt_ParamLimits

0xb9ac,	// (0x000415f1) bg_active_tab_pane_cp4_srt

0xc714,	// (0x00042359) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc714,	// (0x00042359) tabs_2_long_active_pane_srt_t1

0x43be,	// (0x0003a003) bg_active_tab_pane_g1_cp4_srt

0x2434,	// (0x00038079) bg_active_tab_pane_g2_cp4_srt

0x43c7,	// (0x0003a00c) bg_active_tab_pane_g3_cp4_srt

0xb99e,	// (0x000415e3) tabs_3_long_active_pane_srt_ParamLimits

0xb99e,	// (0x000415e3) tabs_3_long_active_pane_srt

0xb99e,	// (0x000415e3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb99e,	// (0x000415e3) tabs_3_long_passive_pane_cp_srt

0xb99e,	// (0x000415e3) tabs_3_long_passive_pane_srt_ParamLimits

0xb99e,	// (0x000415e3) tabs_3_long_passive_pane_srt

0x2b1e,	// (0x00038763) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b1e,	// (0x00038763) bg_passive_tab_pane_cp5_srt

0x24be,	// (0x00038103) bg_passive_tab_pane_g1_cp5_srt

0x2434,	// (0x00038079) bg_passive_tab_pane_g2_cp5_srt

0x24c7,	// (0x0003810c) bg_passive_tab_pane_g3_cp5_srt

0xb9ac,	// (0x000415f1) bg_active_tab_pane_cp5_srt_ParamLimits

0xb9ac,	// (0x000415f1) bg_active_tab_pane_cp5_srt

0xc6fe,	// (0x00042343) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc6fe,	// (0x00042343) tabs_3_long_active_pane_srt_t1

0x24be,	// (0x00038103) bg_active_tab_pane_g1_cp5_srt

0x2434,	// (0x00038079) bg_active_tab_pane_g2_cp5_srt

0x24c7,	// (0x0003810c) bg_active_tab_pane_g3_cp5_srt

0x439e,	// (0x00039fe3) navi_text_pane_srt_t1

0x4396,	// (0x00039fdb) navi_icon_pane_srt_g1

0x29c0,	// (0x00038605) midp_editing_number_pane_srt

0x27f7,	// (0x0003843c) midp_ticker_pane_srt

0x29c8,	// (0x0003860d) midp_ticker_pane_srt_g1

0x29d0,	// (0x00038615) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x00045392) midp_ticker_pane_srt_g

0x29d8,	// (0x0003861d) midp_ticker_pane_srt_t1

0x4387,	// (0x00039fcc) midp_editing_number_pane_t1_copy1

0xa47a,	// (0x000400bf) listscroll_midp_pane

0xa47a,	// (0x000400bf) midp_form_pane

0x286e,	// (0x000384b3) midp_info_popup_window_ParamLimits

0x286e,	// (0x000384b3) midp_info_popup_window

0xeeab,	// (0x00044af0) bg_popup_sub_pane_cp50_ParamLimits

0xeeab,	// (0x00044af0) bg_popup_sub_pane_cp50

0x347e,	// (0x000390c3) listscroll_midp_info_pane_ParamLimits

0x347e,	// (0x000390c3) listscroll_midp_info_pane

0x345e,	// (0x000390a3) listscroll_form_midp_pane_ParamLimits

0x345e,	// (0x000390a3) listscroll_form_midp_pane

0x346a,	// (0x000390af) scroll_bar_cp050

0x345e,	// (0x000390a3) list_midp_pane

0x517c,	// (0x0003adc1) signal_pane_g2_cp

0x3378,	// (0x00038fbd) listscroll_midp_info_pane_t1_ParamLimits

0x3378,	// (0x00038fbd) listscroll_midp_info_pane_t1

0x3390,	// (0x00038fd5) listscroll_midp_info_pane_t2_ParamLimits

0x3390,	// (0x00038fd5) listscroll_midp_info_pane_t2

0x33ce,	// (0x00039013) listscroll_midp_info_pane_t3_ParamLimits

0x33ce,	// (0x00039013) listscroll_midp_info_pane_t3

0x3408,	// (0x0003904d) listscroll_midp_info_pane_t4_ParamLimits

0x3408,	// (0x0003904d) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x00045445) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x00045445) listscroll_midp_info_pane_t

0xef00,	// (0x00044b45) scroll_pane_cp21

0x3312,	// (0x00038f57) form_midp_field_choice_group_pane

0x331b,	// (0x00038f60) form_midp_field_text_pane

0x335e,	// (0x00038fa3) form_midp_field_time_pane

0x3366,	// (0x00038fab) form_midp_gauge_slider_pane

0x336f,	// (0x00038fb4) form_midp_gauge_wait_pane

0xb950,	// (0x00041595) form_midp_image_pane

0xaf32,	// (0x00040b77) list_single_midp_pane_ParamLimits

0xaf32,	// (0x00040b77) list_single_midp_pane

0xc50c,	// (0x00042151) form_midp_field_text_pane_t1

0x30c8,	// (0x00038d0d) input_focus_pane_cp050

0x3301,	// (0x00038f46) list_midp_form_text_pane

0x32a5,	// (0x00038eea) form_midp_field_choice_group_pane_t1

0x32b3,	// (0x00038ef8) input_focus_pane_cp051

0x32c7,	// (0x00038f0c) list_midp_choice_pane

0xb950,	// (0x00041595) status_idle_pane

0x3289,	// (0x00038ece) form_midp_field_time_pane_t1

0xb946,	// (0x0004158b) wait_anim_pane_g2_copy1

0x3297,	// (0x00038edc) form_midp_field_time_pane_t2

0x0001,

0x291e,	// (0x00038563) aid_navinavi_width_2_pane

0xf7fb,	// (0x00045440) form_midp_field_time_pane_t

0xb950,	// (0x00041595) input_focus_pane_cp052

0xb950,	// (0x00041595) bg_input_focus_pane_cp040

0x3249,	// (0x00038e8e) form_midp_gauge_slider_pane_t1

0x3257,	// (0x00038e9c) form_midp_gauge_slider_pane_t2

0xc4f0,	// (0x00042135) form_midp_gauge_slider_pane_t3

0xc4fe,	// (0x00042143) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x00045437) form_midp_gauge_slider_pane_t

0x3281,	// (0x00038ec6) form_midp_slider_pane

0xb9ac,	// (0x000415f1) bg_input_focus_pane_cp041_ParamLimits

0xb9ac,	// (0x000415f1) bg_input_focus_pane_cp041

0x3216,	// (0x00038e5b) form_midp_gauge_wait_pane_t1_ParamLimits

0x3216,	// (0x00038e5b) form_midp_gauge_wait_pane_t1

0x3228,	// (0x00038e6d) form_midp_gauge_wait_pane_t2_ParamLimits

0x3228,	// (0x00038e6d) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x00045432) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x00045432) form_midp_gauge_wait_pane_t

0x323a,	// (0x00038e7f) form_midp_wait_pane_ParamLimits

0x323a,	// (0x00038e7f) form_midp_wait_pane

0x31de,	// (0x00038e23) form_midp_image_pane_g1

0x31e7,	// (0x00038e2c) form_midp_image_pane_t1

0x31f6,	// (0x00038e3b) form_midp_image_pane_t2

0x3205,	// (0x00038e4a) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x0004542b) form_midp_image_pane_t

0x31d5,	// (0x00038e1a) list_single_midp_pane_g1

0xd4e7,	// (0x0004312c) list_single_midp_pane_t1

0xc4d9,	// (0x0004211e) list_midp_form_item_pane_ParamLimits

0xc4d9,	// (0x0004211e) list_midp_form_item_pane

0x28c6,	// (0x0003850b) list_midp_form_item_pane_t1

0x28d5,	// (0x0003851a) midp_ticker_pane_g1

0x28e1,	// (0x00038526) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x00045378) midp_ticker_pane_g

0xa51e,	// (0x00040163) midp_ticker_pane_t1

0xc89d,	// (0x000424e2) midp_editing_number_pane_t1

0x45d2,	// (0x0003a217) midp_editing_number_pane

0x45e1,	// (0x0003a226) midp_ticker_pane

0x4377,	// (0x00039fbc) ai_message_heading_pane

0xb950,	// (0x00041595) bg_popup_window_pane_cp14

0x437f,	// (0x00039fc4) listscroll_ai_message_pane

0x42fd,	// (0x00039f42) ai_message_heading_pane_g1_ParamLimits

0x42fd,	// (0x00039f42) ai_message_heading_pane_g1

0x4309,	// (0x00039f4e) ai_message_heading_pane_g2_ParamLimits

0x4309,	// (0x00039f4e) ai_message_heading_pane_g2

0x4317,	// (0x00039f5c) ai_message_heading_pane_g3_ParamLimits

0x4317,	// (0x00039f5c) ai_message_heading_pane_g3

0x4323,	// (0x00039f68) ai_message_heading_pane_g4_ParamLimits

0x4323,	// (0x00039f68) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0004556c) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0004556c) ai_message_heading_pane_g

0x432f,	// (0x00039f74) ai_message_heading_pane_t1_ParamLimits

0x432f,	// (0x00039f74) ai_message_heading_pane_t1

0x4349,	// (0x00039f8e) ai_message_heading_pane_t2_ParamLimits

0x4349,	// (0x00039f8e) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00045575) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00045575) ai_message_heading_pane_t

0x435d,	// (0x00039fa2) bg_popup_heading_pane_cp1_ParamLimits

0x435d,	// (0x00039fa2) bg_popup_heading_pane_cp1

0x42eb,	// (0x00039f30) list_ai_message_pane_ParamLimits

0x42eb,	// (0x00039f30) list_ai_message_pane

0xef00,	// (0x00044b45) scroll_pane_cp10

0x4287,	// (0x00039ecc) list_ai_message_pane_g1

0x428f,	// (0x00039ed4) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x00045549) list_ai_message_pane_g

0x4297,	// (0x00039edc) list_ai_message_pane_t1_ParamLimits

0x4297,	// (0x00039edc) list_ai_message_pane_t1

0x42ac,	// (0x00039ef1) list_ai_message_pane_t2_ParamLimits

0x42ac,	// (0x00039ef1) list_ai_message_pane_t2

0x42c1,	// (0x00039f06) list_ai_message_pane_t3_ParamLimits

0x42c1,	// (0x00039f06) list_ai_message_pane_t3

0x42d6,	// (0x00039f1b) list_ai_message_pane_t4_ParamLimits

0x42d6,	// (0x00039f1b) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x0004554e) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x0004554e) list_ai_message_pane_t

0xc6e4,	// (0x00042329) cell_ai_soft_ind_pane_ParamLimits

0xc6e4,	// (0x00042329) cell_ai_soft_ind_pane

0x28ff,	// (0x00038544) cell_ai_soft_ind_pane_g1_ParamLimits

0x28ff,	// (0x00038544) cell_ai_soft_ind_pane_g1

0xb950,	// (0x00041595) grid_highlight_cp1

0x290c,	// (0x00038551) text_secondary_cp56_ParamLimits

0x290c,	// (0x00038551) text_secondary_cp56

0x4245,	// (0x00039e8a) example_general_pane_ParamLimits

0x4245,	// (0x00039e8a) example_general_pane

0x4251,	// (0x00039e96) example_parent_pane_g1_ParamLimits

0x4251,	// (0x00039e96) example_parent_pane_g1

0x425d,	// (0x00039ea2) example_parent_pane_t1_ParamLimits

0x425d,	// (0x00039ea2) example_parent_pane_t1

0xaba4,	// (0x000407e9) popup_preview_text_window_ParamLimits

0xaba4,	// (0x000407e9) popup_preview_text_window

0x2726,	// (0x0003836b) list_single_pane_cp2_g4

0xbbad,	// (0x000417f2) bg_popup_preview_window_pane_ParamLimits

0xbbad,	// (0x000417f2) bg_popup_preview_window_pane

0x3f8e,	// (0x00039bd3) popup_preview_text_window_t1_ParamLimits

0x3f8e,	// (0x00039bd3) popup_preview_text_window_t1

0x3fac,	// (0x00039bf1) popup_preview_text_window_t2_ParamLimits

0x3fac,	// (0x00039bf1) popup_preview_text_window_t2

0x3ff5,	// (0x00039c3a) popup_preview_text_window_t3_ParamLimits

0x3ff5,	// (0x00039c3a) popup_preview_text_window_t3

0x403a,	// (0x00039c7f) popup_preview_text_window_t4_ParamLimits

0x403a,	// (0x00039c7f) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x0004551d) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x0004551d) popup_preview_text_window_t

0x40b8,	// (0x00039cfd) scroll_pane_cp11

0x3054,	// (0x00038c99) bg_popup_preview_window_pane_g1

0x3f42,	// (0x00039b87) bg_popup_preview_window_pane_g2

0x3f4c,	// (0x00039b91) bg_popup_preview_window_pane_g3

0x3f56,	// (0x00039b9b) bg_popup_preview_window_pane_g4

0x3f60,	// (0x00039ba5) bg_popup_preview_window_pane_g5

0x3f6a,	// (0x00039baf) bg_popup_preview_window_pane_g6

0x3f72,	// (0x00039bb7) bg_popup_preview_window_pane_g7

0x3f7a,	// (0x00039bbf) bg_popup_preview_window_pane_g8

0xeae8,	// (0x0004472d) aid_popup_width_pane

0xab14,	// (0x00040759) popup_midp_note_alarm_window_ParamLimits

0xab14,	// (0x00040759) popup_midp_note_alarm_window

0xbfe2,	// (0x00041c27) data_form_pane_ParamLimits

0x9ffe,	// (0x0003fc43) form_field_data_pane_g1

0xa008,	// (0x0003fc4d) form_field_data_pane_t1_ParamLimits

0xbfee,	// (0x00041c33) input_focus_pane_ParamLimits

0xd364,	// (0x00042fa9) data_form_wide_pane_ParamLimits

0xd375,	// (0x00042fba) form_field_data_wide_pane_g1

0xd381,	// (0x00042fc6) form_field_data_wide_pane_t1_ParamLimits

0xbd69,	// (0x000419ae) input_focus_pane_cp6_ParamLimits

0xa136,	// (0x0003fd7b) input_popup_find_pane_g1_ParamLimits

0xa136,	// (0x0003fd7b) input_popup_find_pane_g1

0xf1d8,	// (0x00044e1d) aid_navi_side_left_pane

0xf1ed,	// (0x00044e32) aid_navi_side_right_pane

0x3957,	// (0x0003959c) bg_popup_window_pane_cp30_ParamLimits

0x3957,	// (0x0003959c) bg_popup_window_pane_cp30

0x39d1,	// (0x00039616) popup_midp_note_alarm_window_g1_ParamLimits

0x39d1,	// (0x00039616) popup_midp_note_alarm_window_g1

0x3a01,	// (0x00039646) popup_midp_note_alarm_window_t1_ParamLimits

0x3a01,	// (0x00039646) popup_midp_note_alarm_window_t1

0x3aa2,	// (0x000396e7) popup_midp_note_alarm_window_t2_ParamLimits

0x3aa2,	// (0x000396e7) popup_midp_note_alarm_window_t2

0x3b50,	// (0x00039795) popup_midp_note_alarm_window_t3_ParamLimits

0x3b50,	// (0x00039795) popup_midp_note_alarm_window_t3

0x3b82,	// (0x000397c7) popup_midp_note_alarm_window_t4_ParamLimits

0x3b82,	// (0x000397c7) popup_midp_note_alarm_window_t4

0x3ba8,	// (0x000397ed) popup_midp_note_alarm_window_t5_ParamLimits

0x3ba8,	// (0x000397ed) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x000454ba) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x000454ba) popup_midp_note_alarm_window_t

0x3c54,	// (0x00039899) wait_bar_pane_cp1_ParamLimits

0x3c54,	// (0x00039899) wait_bar_pane_cp1

0xb950,	// (0x00041595) wait_anim_pane_copy1

0xb950,	// (0x00041595) wait_border_pane_copy1

0x363c,	// (0x00039281) wait_border_pane_g1_copy1

0xd39b,	// (0x00042fe0) form_field_popup_pane_g1

0xa022,	// (0x0003fc67) form_field_popup_pane_t1_ParamLimits

0xbfee,	// (0x00041c33) input_focus_pane_cp7_ParamLimits

0xc01c,	// (0x00041c61) list_form_pane_ParamLimits

0xd3a3,	// (0x00042fe8) form_field_popup_wide_pane_g1

0xd3ab,	// (0x00042ff0) form_field_popup_wide_pane_t1_ParamLimits

0xbfee,	// (0x00041c33) input_focus_pane_cp8_ParamLimits

0xc028,	// (0x00041c6d) list_form_wide_pane_ParamLimits

0x4763,	// (0x0003a3a8) aid_size_cell_graphic_pane

0xa0a1,	// (0x0003fce6) data_form_pane_t1_ParamLimits

0xb0c8,	// (0x00040d0d) data_form_wide_pane_t1_ParamLimits

0xc174,	// (0x00041db9) bg_status_flat_pane

0x9829,	// (0x0003f46e) title_pane_t1_ParamLimits

0xb966,	// (0x000415ab) title_pane_t2_ParamLimits

0xb98c,	// (0x000415d1) title_pane_t3_ParamLimits

0xf532,	// (0x00045177) title_pane_t_ParamLimits

0xa261,	// (0x0003fea6) level_1_signal_ParamLimits

0xa273,	// (0x0003feb8) level_2_signal_ParamLimits

0xa286,	// (0x0003fecb) level_3_signal_ParamLimits

0xa299,	// (0x0003fede) level_4_signal_ParamLimits

0xa2ac,	// (0x0003fef1) level_5_signal_ParamLimits

0xa2bf,	// (0x0003ff04) level_6_signal_ParamLimits

0xa2d2,	// (0x0003ff17) level_7_signal_ParamLimits

0xa261,	// (0x0003fea6) level_1_battery_ParamLimits

0xa273,	// (0x0003feb8) level_2_battery_ParamLimits

0xa286,	// (0x0003fecb) level_3_battery_ParamLimits

0xa299,	// (0x0003fede) level_4_battery_ParamLimits

0xa2ac,	// (0x0003fef1) level_5_battery_ParamLimits

0xa2bf,	// (0x0003ff04) level_6_battery_ParamLimits

0xa2d2,	// (0x0003ff17) level_7_battery_ParamLimits

0x385c,	// (0x000394a1) bg_status_flat_pane_g1

0x3864,	// (0x000394a9) bg_status_flat_pane_g2

0x386c,	// (0x000394b1) bg_status_flat_pane_g3

0x3874,	// (0x000394b9) bg_status_flat_pane_g4

0x387c,	// (0x000394c1) bg_status_flat_pane_g5

0x3884,	// (0x000394c9) bg_status_flat_pane_g6

0x388c,	// (0x000394d1) bg_status_flat_pane_g7

0x98bd,	// (0x0003f502) tabs_3_active_pane_t1_ParamLimits

0x98bd,	// (0x0003f502) tabs_3_passive_pane_t1_ParamLimits

0x98d7,	// (0x0003f51c) tabs_4_active_pane_t1_ParamLimits

0x98d7,	// (0x0003f51c) tabs_4_1_passive_pane_t1_ParamLimits

0xa14c,	// (0x0003fd91) tabs_2_active_pane_t1_ParamLimits

0xa14c,	// (0x0003fd91) tabs_2_passive_pane_t1_ParamLimits

0xb9ac,	// (0x000415f1) bg_active_tab_pane_cp4_ParamLimits

0xa15e,	// (0x0003fda3) tabs_2_long_active_pane_t1_ParamLimits

0x2b1e,	// (0x00038763) bg_passive_tab_pane_cp4_ParamLimits

0x0a95,	// (0x000366da) list_single_midp_graphic_pane_t1_ParamLimits

0xb9ac,	// (0x000415f1) bg_active_tab_pane_cp5_ParamLimits

0xa171,	// (0x0003fdb6) tabs_3_long_active_pane_t1_ParamLimits

0x2b1e,	// (0x00038763) bg_passive_tab_pane_cp5_ParamLimits

0x0a95,	// (0x000366da) list_single_midp_graphic_pane_t1

0xc174,	// (0x00041db9) bg_status_flat_pane_ParamLimits

0x2cd8,	// (0x0003891d) indicator_pane_cp2_ParamLimits

0x2cd8,	// (0x0003891d) indicator_pane_cp2

0xc30a,	// (0x00041f4f) navi_pane_srt_ParamLimits

0xc30a,	// (0x00041f4f) navi_pane_srt

0x2e3f,	// (0x00038a84) popup_clock_digital_analogue_window_cp1

0xb9f0,	// (0x00041635) indicator_pane_t1

0x27f7,	// (0x0003843c) copy_highlight_pane

0x27f7,	// (0x0003843c) cursor_graphics_pane

0x27f7,	// (0x0003843c) graphic_within_text_pane

0x27f7,	// (0x0003843c) link_highlight_pane

0x407b,	// (0x00039cc0) popup_preview_text_window_t5_ParamLimits

0x407b,	// (0x00039cc0) popup_preview_text_window_t5

0x2928,	// (0x0003856d) cursor_digital_pane

0x2928,	// (0x0003856d) cursor_primary_pane

0x2939,	// (0x0003857e) cursor_primary_small_pane

0x2941,	// (0x00038586) cursor_secondary_pane

0x2949,	// (0x0003858e) cursor_title_pane

0x2928,	// (0x0003856d) link_highlight_digital_pane

0x2930,	// (0x00038575) link_highlight_primary_pane

0x2939,	// (0x0003857e) link_highlight_primary_small_pane

0x2941,	// (0x00038586) link_highlight_secondary_pane

0x2949,	// (0x0003858e) link_highlight_title_pane

0x2928,	// (0x0003856d) copy_highlight_digital_pane

0x2928,	// (0x0003856d) copy_highlight_primary_pane

0x2939,	// (0x0003857e) copy_highlight_primary_small_pane

0x2941,	// (0x00038586) copy_highlight_secondary_pane

0x2949,	// (0x0003858e) copy_highlight_title_pane

0x2941,	// (0x00038586) graphic_text_digital_pane

0x38fa,	// (0x0003953f) graphic_text_primary_pane

0x3903,	// (0x00039548) graphic_text_primary_small_pane

0x2939,	// (0x0003857e) graphic_text_secondary_pane

0x2928,	// (0x0003856d) graphic_text_title_pane

0xa530,	// (0x00040175) cursor_primary_pane_g1

0x38ec,	// (0x00039531) cursor_text_primary_t1

0xc564,	// (0x000421a9) cursor_primary_small_pane_g1

0x38de,	// (0x00039523) cursor_text_primary_small_t1

0xc55a,	// (0x0004219f) cursor_primary_small_pane_g1_copy1

0x38c6,	// (0x0003950b) cursor_text_primary_small_t1_copy1

0x38a4,	// (0x000394e9) cursor_text_title_t1

0xc550,	// (0x00042195) cursor_title_pane_g1

0xa530,	// (0x00040175) cursor_digital_pane_g1

0x295b,	// (0x000385a0) cursor_text_digital_t1

0x2969,	// (0x000385ae) link_highlight_primary_pane_g1

0x384d,	// (0x00039492) link_highlight_primary_pane_t1

0x2969,	// (0x000385ae) link_highlight_primary_small_pane_g1

0x2971,	// (0x000385b6) link_highlight_primary_small_pane_t1

0x2980,	// (0x000385c5) link_highlight_secondary_pane_g1

0x2988,	// (0x000385cd) link_highlight_secondary_pane_t1

0x37c1,	// (0x00039406) link_highlight_title_pane_g1

0x37c9,	// (0x0003940e) link_highlight_title_pane_t1

0x37aa,	// (0x000393ef) link_highlight_digital_pane_g1

0x37b2,	// (0x000393f7) link_highlight_digital_pane_t1

0x3672,	// (0x000392b7) copy_highlight_primary_pane_g1

0x3689,	// (0x000392ce) copy_highlight_primary_pane_t1

0x3672,	// (0x000392b7) copy_highlight_primary_small_pane_g1

0x367a,	// (0x000392bf) copy_highlight_primary_small_pane_t1

0x2997,	// (0x000385dc) copy_highlight_secondary_pane_g1

0x299f,	// (0x000385e4) copy_highlight_secondary_pane_t1

0x365b,	// (0x000392a0) copy_highlight_title_pane_g1

0x3663,	// (0x000392a8) copy_highlight_title_pane_t1

0x3672,	// (0x000392b7) copy_highlight_digital_pane_g1

0x4935,	// (0x0003a57a) copy_highlight_digital_pane_t1

0x4889,	// (0x0003a4ce) graphic_text_primary_pane_g1

0x4919,	// (0x0003a55e) graphic_text_primary_pane_t1

0x4927,	// (0x0003a56c) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x000455e9) graphic_text_primary_pane_t

0x48f5,	// (0x0003a53a) graphic_text_primary_small_pane_g1

0x48fd,	// (0x0003a542) graphic_text_primary_small_pane_t1

0x490b,	// (0x0003a550) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x000455e4) graphic_text_primary_small_pane_t

0x48d1,	// (0x0003a516) graphic_text_secondary_pane_g1

0x48d9,	// (0x0003a51e) graphic_text_secondary_pane_t1

0x48e7,	// (0x0003a52c) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x000455df) graphic_text_secondary_pane_t

0x48ad,	// (0x0003a4f2) graphic_text_title_pane_g1

0x48b5,	// (0x0003a4fa) graphic_text_title_pane_t1

0x48c3,	// (0x0003a508) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x000455da) graphic_text_title_pane_t

0x4889,	// (0x0003a4ce) graphic_text_digital_pane_g1

0x4891,	// (0x0003a4d6) graphic_text_digital_pane_t1

0x489f,	// (0x0003a4e4) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x000455d5) graphic_text_digital_pane_t

0xb9ac,	// (0x000415f1) navi_icon_pane_srt_ParamLimits

0xb9ac,	// (0x000415f1) navi_icon_pane_srt

0xb950,	// (0x00041595) navi_midp_pane_srt

0xb950,	// (0x00041595) navi_navi_pane_srt

0xb9ac,	// (0x000415f1) navi_text_pane_srt_ParamLimits

0xb9ac,	// (0x000415f1) navi_text_pane_srt

0x4854,	// (0x0003a499) navi_navi_icon_text_pane_srt

0x485c,	// (0x0003a4a1) navi_navi_pane_srt_g1_ParamLimits

0x485c,	// (0x0003a4a1) navi_navi_pane_srt_g1

0x486e,	// (0x0003a4b3) navi_navi_pane_srt_g2_ParamLimits

0x486e,	// (0x0003a4b3) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x000455d0) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x000455d0) navi_navi_pane_srt_g

0x4880,	// (0x0003a4c5) navi_navi_tabs_pane_srt

0x4854,	// (0x0003a499) navi_navi_text_pane_srt

0x4854,	// (0x0003a499) navi_navi_volume_pane_srt

0x4845,	// (0x0003a48a) navi_navi_text_pane_srt_t1

0x0f1c,	// (0x00036b61) navi_navi_volume_pane_srt_g1

0x0f24,	// (0x00036b69) volume_small_pane_srt_ParamLimits

0x0f24,	// (0x00036b69) volume_small_pane_srt

0x01a9,	// (0x00035dee) volume_small_pane_srt_g1_ParamLimits

0x01a9,	// (0x00035dee) volume_small_pane_srt_g1

0x01b9,	// (0x00035dfe) volume_small_pane_srt_g2_ParamLimits

0x01b9,	// (0x00035dfe) volume_small_pane_srt_g2

0x01ca,	// (0x00035e0f) volume_small_pane_srt_g3_ParamLimits

0x01ca,	// (0x00035e0f) volume_small_pane_srt_g3

0x01db,	// (0x00035e20) volume_small_pane_srt_g4_ParamLimits

0x01db,	// (0x00035e20) volume_small_pane_srt_g4

0x01ec,	// (0x00035e31) volume_small_pane_srt_g5_ParamLimits

0x01ec,	// (0x00035e31) volume_small_pane_srt_g5

0x01fd,	// (0x00035e42) volume_small_pane_srt_g6_ParamLimits

0x01fd,	// (0x00035e42) volume_small_pane_srt_g6

0x020e,	// (0x00035e53) volume_small_pane_srt_g7_ParamLimits

0x020e,	// (0x00035e53) volume_small_pane_srt_g7

0x021f,	// (0x00035e64) volume_small_pane_srt_g8_ParamLimits

0x021f,	// (0x00035e64) volume_small_pane_srt_g8

0x0230,	// (0x00035e75) volume_small_pane_srt_g9_ParamLimits

0x0230,	// (0x00035e75) volume_small_pane_srt_g9

0x0241,	// (0x00035e86) volume_small_pane_srt_g10_ParamLimits

0x0241,	// (0x00035e86) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0004537d) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0004537d) volume_small_pane_srt_g

0xbc62,	// (0x000418a7) query_popup_data_pane_cp2

0x482b,	// (0x0003a470) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x482b,	// (0x0003a470) navi_navi_icon_text_pane_srt_t1

0x38fa,	// (0x0003953f) navi_tabs_2_long_pane_srt

0x38fa,	// (0x0003953f) navi_tabs_2_pane_srt

0x38fa,	// (0x0003953f) navi_tabs_3_long_pane_srt

0x38fa,	// (0x0003953f) navi_tabs_3_pane_srt

0x38fa,	// (0x0003953f) navi_tabs_4_pane_srt

0x0efc,	// (0x00036b41) tabs_2_active_pane_srt_ParamLimits

0x0efc,	// (0x00036b41) tabs_2_active_pane_srt

0x0f0c,	// (0x00036b51) tabs_2_passive_pane_srt_ParamLimits

0x0f0c,	// (0x00036b51) tabs_2_passive_pane_srt

0x30c8,	// (0x00038d0d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x30c8,	// (0x00038d0d) bg_passive_tab_pane_cp1_srt

0x47f7,	// (0x0003a43c) bg_passive_tab_pane_g1_cp1_srt

0x2434,	// (0x00038079) bg_passive_tab_pane_g2_cp1_srt

0x4800,	// (0x0003a445) bg_passive_tab_pane_g3_cp1_srt

0xb99e,	// (0x000415e3) bg_active_tab_pane_cp1_srt_ParamLimits

0xb99e,	// (0x000415e3) bg_active_tab_pane_cp1_srt

0x4809,	// (0x0003a44e) tabs_2_active_pane_srt_g1

0xc9d4,	// (0x00042619) tabs_2_active_pane_srt_t1_ParamLimits

0xc9d4,	// (0x00042619) tabs_2_active_pane_srt_t1

0x47f7,	// (0x0003a43c) bg_active_tab_pane_g1_cp1_srt

0x2434,	// (0x00038079) bg_active_tab_pane_g2_cp1_srt

0x4800,	// (0x0003a445) bg_active_tab_pane_g3_cp1_srt

0x0ec9,	// (0x00036b0e) tabs_3_active_pane_srt_ParamLimits

0x0ec9,	// (0x00036b0e) tabs_3_active_pane_srt

0x0eda,	// (0x00036b1f) tabs_3_passive_pane_cp_srt_ParamLimits

0x0eda,	// (0x00036b1f) tabs_3_passive_pane_cp_srt

0x0eeb,	// (0x00036b30) tabs_3_passive_pane_srt_ParamLimits

0x0eeb,	// (0x00036b30) tabs_3_passive_pane_srt

0x30c8,	// (0x00038d0d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x30c8,	// (0x00038d0d) bg_passive_tab_pane_cp2_srt

0x29ae,	// (0x000385f3) bg_passive_tab_pane_g1_cp2_srt

0x2434,	// (0x00038079) bg_passive_tab_pane_g2_cp2_srt

0x29b7,	// (0x000385fc) bg_passive_tab_pane_g3_cp2_srt

0xb99e,	// (0x000415e3) bg_active_tab_pane_cp2_srt_ParamLimits

0xb99e,	// (0x000415e3) bg_active_tab_pane_cp2_srt

0x47dd,	// (0x0003a422) tabs_3_active_pane_srt_g1

0xc9be,	// (0x00042603) tabs_3_active_pane_srt_t1_ParamLimits

0xc9be,	// (0x00042603) tabs_3_active_pane_srt_t1

0x29ae,	// (0x000385f3) bg_active_tab_pane_g1_cp2_srt

0x2434,	// (0x00038079) bg_active_tab_pane_g2_cp2_srt

0x29b7,	// (0x000385fc) bg_active_tab_pane_g3_cp2_srt

0x0e81,	// (0x00036ac6) tabs_4_active_pane_srt_ParamLimits

0x0e81,	// (0x00036ac6) tabs_4_active_pane_srt

0x0e93,	// (0x00036ad8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0e93,	// (0x00036ad8) tabs_4_passive_pane_cp2_srt

0x03c0,	// (0x00036005) aid_size_cell_toolbar

0x4431,	// (0x0003a076) main_idle_act_pane_ParamLimits

0x059f,	// (0x000361e4) popup_large_graphic_colour_window_ParamLimits

0xae68,	// (0x00040aad) popup_toolbar_window_ParamLimits

0xae68,	// (0x00040aad) popup_toolbar_window

0x461a,	// (0x0003a25f) list_single_graphic_2heading_pane_ParamLimits

0x461a,	// (0x0003a25f) list_single_graphic_2heading_pane

0xf266,	// (0x00044eab) aid_size_cell_apps_grid_lsc_pane

0xf278,	// (0x00044ebd) aid_size_cell_apps_grid_prt_pane

0x2b1e,	// (0x00038763) bg_wml_button_pane_cp1_ParamLimits

0x2b1e,	// (0x00038763) bg_wml_button_pane_cp1

0xc50c,	// (0x00042151) form_midp_field_text_pane_t1_ParamLimits

0x30c8,	// (0x00038d0d) input_focus_pane_cp050_ParamLimits

0x3301,	// (0x00038f46) list_midp_form_text_pane_ParamLimits

0x32b3,	// (0x00038ef8) input_focus_pane_cp051_ParamLimits

0x32c7,	// (0x00038f0c) list_midp_choice_pane_ParamLimits

0x3181,	// (0x00038dc6) list_single_2graphic_pane_cp3_ParamLimits

0x3181,	// (0x00038dc6) list_single_2graphic_pane_cp3

0x3197,	// (0x00038ddc) list_single_midp_graphic_pane_ParamLimits

0x3197,	// (0x00038ddc) list_single_midp_graphic_pane

0xed44,	// (0x00044989) list_single_graphic_2heading_pane_g1_ParamLimits

0xed44,	// (0x00044989) list_single_graphic_2heading_pane_g1

0xed50,	// (0x00044995) list_single_graphic_2heading_pane_g4_ParamLimits

0xed50,	// (0x00044995) list_single_graphic_2heading_pane_g4

0xed5c,	// (0x000449a1) list_single_graphic_2heading_pane_g5_ParamLimits

0xed5c,	// (0x000449a1) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x000453d0) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x000453d0) list_single_graphic_2heading_pane_g

0xed68,	// (0x000449ad) list_single_graphic_2heading_pane_t1_ParamLimits

0xed68,	// (0x000449ad) list_single_graphic_2heading_pane_t1

0xed7c,	// (0x000449c1) list_single_graphic_2heading_pane_t2_ParamLimits

0xed7c,	// (0x000449c1) list_single_graphic_2heading_pane_t2

0xed98,	// (0x000449dd) list_single_graphic_2heading_pane_t3_ParamLimits

0xed98,	// (0x000449dd) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x000453d7) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x000453d7) list_single_graphic_2heading_pane_t

0x2f92,	// (0x00038bd7) bg_popup_sub_pane_cp2

0x2fbc,	// (0x00038c01) grid_toobar_pane

0x0a05,	// (0x0003664a) cell_toolbar_pane_ParamLimits

0x0a05,	// (0x0003664a) cell_toolbar_pane

0x2ff8,	// (0x00038c3d) cell_toolbar_pane_g1_ParamLimits

0x2ff8,	// (0x00038c3d) cell_toolbar_pane_g1

0x300c,	// (0x00038c51) cell_toolbar_pane_g2_ParamLimits

0x300c,	// (0x00038c51) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x000453e5) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x000453e5) cell_toolbar_pane_g

0x302e,	// (0x00038c73) grid_highlight_pane_cp2_ParamLimits

0x302e,	// (0x00038c73) grid_highlight_pane_cp2

0x3048,	// (0x00038c8d) toolbar_button_pane

0x3054,	// (0x00038c99) toolbar_button_pane_g1

0x305c,	// (0x00038ca1) toolbar_button_pane_g2

0x3064,	// (0x00038ca9) toolbar_button_pane_g3

0x306c,	// (0x00038cb1) toolbar_button_pane_g4

0x3074,	// (0x00038cb9) toolbar_button_pane_g5

0x307c,	// (0x00038cc1) toolbar_button_pane_g6

0x3084,	// (0x00038cc9) toolbar_button_pane_g7

0x308c,	// (0x00038cd1) toolbar_button_pane_g8

0x3094,	// (0x00038cd9) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x000453ea) toolbar_button_pane_g

0x0a3d,	// (0x00036682) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0a3d,	// (0x00036682) list_single_2graphic_pane_g1_cp3

0xaec0,	// (0x00040b05) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaec0,	// (0x00040b05) list_single_2graphic_pane_g2_cp3

0x0a5a,	// (0x0003669f) list_single_2graphic_pane_g3_cp3

0x0a62,	// (0x000366a7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0a62,	// (0x000366a7) list_single_2graphic_pane_g4_cp3

0x0a6e,	// (0x000366b3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0a6e,	// (0x000366b3) list_single_2graphic_pane_t1_cp3

0x0a89,	// (0x000366ce) list_single_midp_graphic_pane_g2_ParamLimits

0x0a89,	// (0x000366ce) list_single_midp_graphic_pane_g2

0x03c8,	// (0x0003600d) aid_zoom_text_primary

0xed3c,	// (0x00044981) aid_zoom_text_secondary

0xa588,	// (0x000401cd) status_small_pane_g7_ParamLimits

0xa588,	// (0x000401cd) status_small_pane_g7

0xa5ab,	// (0x000401f0) status_small_pane_t1_ParamLimits

0x97f9,	// (0x0003f43e) title_pane_g2

0x0003,

0xf529,	// (0x0004516e) title_pane_g

0x9a99,	// (0x0003f6de) aid_size_cell_colour_1_pane_ParamLimits

0x9a99,	// (0x0003f6de) aid_size_cell_colour_1_pane

0x9aad,	// (0x0003f6f2) aid_size_cell_colour_2_pane_ParamLimits

0x9aad,	// (0x0003f6f2) aid_size_cell_colour_2_pane

0x9ac1,	// (0x0003f706) aid_size_cell_colour_3_pane_ParamLimits

0x9ac1,	// (0x0003f706) aid_size_cell_colour_3_pane

0x9ad5,	// (0x0003f71a) aid_size_cell_colour_4_pane_ParamLimits

0x9ad5,	// (0x0003f71a) aid_size_cell_colour_4_pane

0xf0df,	// (0x00044d24) title_pane_stacon_g1_ParamLimits

0xf0df,	// (0x00044d24) title_pane_stacon_g1

0x36e0,	// (0x00039325) popup_note_wait_window_g3_ParamLimits

0x36e0,	// (0x00039325) popup_note_wait_window_g3

0x3757,	// (0x0003939c) popup_note_wait_window_t5_ParamLimits

0x3757,	// (0x0003939c) popup_note_wait_window_t5

0xb950,	// (0x00041595) main_feb_china_hwr_fs_writing_pane

0xa7fb,	// (0x00040440) popup_feb_china_hwr_fs_window_ParamLimits

0xa7fb,	// (0x00040440) popup_feb_china_hwr_fs_window

0xaed1,	// (0x00040b16) aid_size_cell_hwr_fs_ParamLimits

0xaed1,	// (0x00040b16) aid_size_cell_hwr_fs

0x30c8,	// (0x00038d0d) bg_popup_sub_pane_cp3_ParamLimits

0x30c8,	// (0x00038d0d) bg_popup_sub_pane_cp3

0xaee6,	// (0x00040b2b) grid_hwr_fs_pane_ParamLimits

0xaee6,	// (0x00040b2b) grid_hwr_fs_pane

0x0ad8,	// (0x0003671d) linegrid_hwr_fs_pane_ParamLimits

0x0ad8,	// (0x0003671d) linegrid_hwr_fs_pane

0xaefe,	// (0x00040b43) cell_hwr_fs_pane_ParamLimits

0xaefe,	// (0x00040b43) cell_hwr_fs_pane

0x30d4,	// (0x00038d19) linegrid_hwr_fs_pane_g1_ParamLimits

0x30d4,	// (0x00038d19) linegrid_hwr_fs_pane_g1

0xc4ad,	// (0x000420f2) linegrid_hwr_fs_pane_g2_ParamLimits

0xc4ad,	// (0x000420f2) linegrid_hwr_fs_pane_g2

0x30f2,	// (0x00038d37) linegrid_hwr_fs_pane_g3_ParamLimits

0x30f2,	// (0x00038d37) linegrid_hwr_fs_pane_g3

0x0b0c,	// (0x00036751) linegrid_hwr_fs_pane_g4_ParamLimits

0x0b0c,	// (0x00036751) linegrid_hwr_fs_pane_g4

0x0b2a,	// (0x0003676f) linegrid_hwr_fs_pane_g5_ParamLimits

0x0b2a,	// (0x0003676f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x00045410) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x00045410) linegrid_hwr_fs_pane_g

0x30fe,	// (0x00038d43) cell_hwr_fs_pane_g1_ParamLimits

0x30fe,	// (0x00038d43) cell_hwr_fs_pane_g1

0x2ecd,	// (0x00038b12) cell_hwr_fs_pane_g2_ParamLimits

0x2ecd,	// (0x00038b12) cell_hwr_fs_pane_g2

0xc4bf,	// (0x00042104) cell_hwr_fs_pane_g3_ParamLimits

0xc4bf,	// (0x00042104) cell_hwr_fs_pane_g3

0xc4cc,	// (0x00042111) cell_hwr_fs_pane_g4_ParamLimits

0xc4cc,	// (0x00042111) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x0004541b) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x0004541b) cell_hwr_fs_pane_g

0xaf24,	// (0x00040b69) cell_hwr_fs_pane_t1

0xb950,	// (0x00041595) grid_highlight_pane_cp6

0xb950,	// (0x00041595) main_idle_act2_pane

0xeee7,	// (0x00044b2c) aid_inside_area_popup_secondary

0xc584,	// (0x000421c9) aid_inside_area_window_primary_ParamLimits

0xc584,	// (0x000421c9) aid_inside_area_window_primary

0x4944,	// (0x0003a589) ai2_news_ticker_pane

0x494c,	// (0x0003a591) aid_size_cell_ai1_link_ParamLimits

0x494c,	// (0x0003a591) aid_size_cell_ai1_link

0x4966,	// (0x0003a5ab) popup_ai2_data_window_ParamLimits

0x4966,	// (0x0003a5ab) popup_ai2_data_window

0x4984,	// (0x0003a5c9) popup_ai2_link_window_ParamLimits

0x4984,	// (0x0003a5c9) popup_ai2_link_window

0x30c8,	// (0x00038d0d) bg_popup_sub_pane_cp4_ParamLimits

0x30c8,	// (0x00038d0d) bg_popup_sub_pane_cp4

0x499a,	// (0x0003a5df) grid_ai2_link_pane_ParamLimits

0x499a,	// (0x0003a5df) grid_ai2_link_pane

0x49b1,	// (0x0003a5f6) popup_ai2_link_window_g1_ParamLimits

0x49b1,	// (0x0003a5f6) popup_ai2_link_window_g1

0x49bd,	// (0x0003a602) popup_ai2_link_window_g2_ParamLimits

0x49bd,	// (0x0003a602) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x000455ee) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x000455ee) popup_ai2_link_window_g

0x49ce,	// (0x0003a613) ai2_mp_button_pane

0x49d6,	// (0x0003a61b) ai2_mp_volume_pane

0x32b3,	// (0x00038ef8) bg_popup_sub_pane_cp5_ParamLimits

0x32b3,	// (0x00038ef8) bg_popup_sub_pane_cp5

0x49de,	// (0x0003a623) heading_ai2_gene_pane_ParamLimits

0x49de,	// (0x0003a623) heading_ai2_gene_pane

0x49ea,	// (0x0003a62f) list_ai2_gene_pane_ParamLimits

0x49ea,	// (0x0003a62f) list_ai2_gene_pane

0x4a32,	// (0x0003a677) cell_ai2_link_pane_ParamLimits

0x4a32,	// (0x0003a677) cell_ai2_link_pane

0x4a48,	// (0x0003a68d) cell_ai2_link_pane_g1

0xb950,	// (0x00041595) grid_highlight_pane_cp7

0x0f39,	// (0x00036b7e) ai2_mp_volume_pane_g1

0x4b1b,	// (0x0003a760) ai2_mp_volume_pane_g2

0x4a90,	// (0x0003a6d5) list_ai2_gene_pane_t1

0x4b23,	// (0x0003a768) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x00045607) ai2_mp_volume_pane_g

0x0f41,	// (0x00036b86) volume_small_pane_cp3

0x4b2b,	// (0x0003a770) aid_size_cell_ai2_button

0x4b33,	// (0x0003a778) grid_ai2_button_pane

0x4b3c,	// (0x0003a781) cell_ai2_button_pane_ParamLimits

0x4b3c,	// (0x0003a781) cell_ai2_button_pane

0xb946,	// (0x0004158b) cell_ai2_button_pane_g1

0xb950,	// (0x00041595) grid_highlight_pane_cp8

0x4adb,	// (0x0003a720) ai2_gene_pane_t1_ParamLimits

0x4adb,	// (0x0003a720) ai2_gene_pane_t1

0xa777,	// (0x000403bc) aid_height_parent_landscape

0xc72b,	// (0x00042370) aid_height_set_list

0x4431,	// (0x0003a076) aid_size_parent

0x4763,	// (0x0003a3a8) aid_size_cell_graphic_pane_ParamLimits

0x49fa,	// (0x0003a63f) popup_ai2_data_window_g1_ParamLimits

0x49fa,	// (0x0003a63f) popup_ai2_data_window_g1

0x4a06,	// (0x0003a64b) ai2_news_ticker_pane_g1

0x4a0e,	// (0x0003a653) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x000455f3) ai2_news_ticker_pane_g

0x4a16,	// (0x0003a65b) ai2_news_ticker_pane_t1

0x4a24,	// (0x0003a669) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x000455f8) ai2_news_ticker_pane_t

0x4a51,	// (0x0003a696) heading_ai2_gene_pane_g1

0x4a59,	// (0x0003a69e) heading_ai2_gene_pane_t1_ParamLimits

0x4a59,	// (0x0003a69e) heading_ai2_gene_pane_t1

0x4a6e,	// (0x0003a6b3) list_highlight_pane_cp6

0x4a76,	// (0x0003a6bb) ai2_gene_pane_ParamLimits

0x4a76,	// (0x0003a6bb) ai2_gene_pane

0x4a9e,	// (0x0003a6e3) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x000455fd) list_ai2_gene_pane_t

0x4aac,	// (0x0003a6f1) list_highlight_pane_cp8_ParamLimits

0x4aac,	// (0x0003a6f1) list_highlight_pane_cp8

0x4abd,	// (0x0003a702) ai2_gene_pane_g1_ParamLimits

0x4abd,	// (0x0003a702) ai2_gene_pane_g1

0x4acf,	// (0x0003a714) ai2_gene_pane_g2_ParamLimits

0x4acf,	// (0x0003a714) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x00045602) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x00045602) ai2_gene_pane_g

0xbf84,	// (0x00041bc9) scroll_pane_cp12

0xa734,	// (0x00040379) control_pane_t3_ParamLimits

0xa734,	// (0x00040379) control_pane_t3

0xa59c,	// (0x000401e1) status_small_pane_g8_ParamLimits

0xa59c,	// (0x000401e1) status_small_pane_g8

0xa89d,	// (0x000404e2) popup_find_window_ParamLimits

0xab54,	// (0x00040799) popup_note_image_window_ParamLimits

0xd2a3,	// (0x00042ee8) list_double2_graphic_pane_vc_g1_ParamLimits

0xd2a3,	// (0x00042ee8) list_double2_graphic_pane_vc_g1

0xd409,	// (0x0004304e) list_double2_graphic_pane_vc_g2_ParamLimits

0xd409,	// (0x0004304e) list_double2_graphic_pane_vc_g2

0xd415,	// (0x0004305a) list_double2_graphic_pane_vc_g3_ParamLimits

0xd415,	// (0x0004305a) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x000453de) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x000453de) list_double2_graphic_pane_vc_g

0xd421,	// (0x00043066) list_double2_graphic_pane_vc_t1_ParamLimits

0xd421,	// (0x00043066) list_double2_graphic_pane_vc_t1

0xd267,	// (0x00042eac) list_single_heading_pane_vc_g1_ParamLimits

0xd267,	// (0x00042eac) list_single_heading_pane_vc_g1

0xd273,	// (0x00042eb8) list_single_heading_pane_vc_g2_ParamLimits

0xd273,	// (0x00042eb8) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x000451e8) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x000451e8) list_single_heading_pane_vc_g

0xd437,	// (0x0004307c) list_single_heading_pane_vc_t1_ParamLimits

0xd437,	// (0x0004307c) list_single_heading_pane_vc_t1

0xd44d,	// (0x00043092) list_single_heading_pane_vc_t2_ParamLimits

0xd44d,	// (0x00043092) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x000453ff) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x000453ff) list_single_heading_pane_vc_t

0xd45f,	// (0x000430a4) list_setting_number_pane_vc_g1_ParamLimits

0xd45f,	// (0x000430a4) list_setting_number_pane_vc_g1

0xd46b,	// (0x000430b0) list_setting_number_pane_vc_g2_ParamLimits

0xd46b,	// (0x000430b0) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00045404) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00045404) list_setting_number_pane_vc_g

0xd477,	// (0x000430bc) list_setting_number_pane_vc_t1_ParamLimits

0xd477,	// (0x000430bc) list_setting_number_pane_vc_t1

0xd48b,	// (0x000430d0) list_setting_number_pane_vc_t2_ParamLimits

0xd48b,	// (0x000430d0) list_setting_number_pane_vc_t2

0xd4a7,	// (0x000430ec) list_setting_number_pane_vc_t3_ParamLimits

0xd4a7,	// (0x000430ec) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x00045409) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x00045409) list_setting_number_pane_vc_t

0xd4d5,	// (0x0004311a) set_value_pane_vc_ParamLimits

0xd4d5,	// (0x0004311a) set_value_pane_vc

0x461a,	// (0x0003a25f) list_double2_graphic_pane_vc_ParamLimits

0x461a,	// (0x0003a25f) list_double2_graphic_pane_vc

0x461a,	// (0x0003a25f) list_double2_large_graphic_pane_vc_ParamLimits

0x461a,	// (0x0003a25f) list_double2_large_graphic_pane_vc

0x461a,	// (0x0003a25f) list_double2_pane_vc_ParamLimits

0x461a,	// (0x0003a25f) list_double2_pane_vc

0x461a,	// (0x0003a25f) list_double_graphic_heading_pane_vc_ParamLimits

0x461a,	// (0x0003a25f) list_double_graphic_heading_pane_vc

0x461a,	// (0x0003a25f) list_double_graphic_pane_vc_ParamLimits

0x461a,	// (0x0003a25f) list_double_graphic_pane_vc

0x461a,	// (0x0003a25f) list_double_heading_pane_vc_ParamLimits

0x461a,	// (0x0003a25f) list_double_heading_pane_vc

0xd50c,	// (0x00043151) list_double_large_graphic_pane_vc_ParamLimits

0xd50c,	// (0x00043151) list_double_large_graphic_pane_vc

0x461a,	// (0x0003a25f) list_double_number_pane_vc_ParamLimits

0x461a,	// (0x0003a25f) list_double_number_pane_vc

0x461a,	// (0x0003a25f) list_double_pane_vc_ParamLimits

0x461a,	// (0x0003a25f) list_double_pane_vc

0x461a,	// (0x0003a25f) list_double_time_pane_vc_ParamLimits

0x461a,	// (0x0003a25f) list_double_time_pane_vc

0x461a,	// (0x0003a25f) list_setting_number_pane_vc_ParamLimits

0x461a,	// (0x0003a25f) list_setting_number_pane_vc

0x461a,	// (0x0003a25f) list_setting_pane_vc_ParamLimits

0x461a,	// (0x0003a25f) list_setting_pane_vc

0x461a,	// (0x0003a25f) list_single_graphic_heading_pane_vc_ParamLimits

0x461a,	// (0x0003a25f) list_single_graphic_heading_pane_vc

0x461a,	// (0x0003a25f) list_single_heading_pane_vc_ParamLimits

0x461a,	// (0x0003a25f) list_single_heading_pane_vc

0x461a,	// (0x0003a25f) list_single_number_heading_pane_vc_ParamLimits

0x461a,	// (0x0003a25f) list_single_number_heading_pane_vc

0xd2a3,	// (0x00042ee8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd2a3,	// (0x00042ee8) list_double_graphic_heading_pane_vc_g1

0xd267,	// (0x00042eac) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd267,	// (0x00042eac) list_double_graphic_heading_pane_vc_g2

0xd273,	// (0x00042eb8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd273,	// (0x00042eb8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x0004560e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x0004560e) list_double_graphic_heading_pane_vc_g

0xd531,	// (0x00043176) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd531,	// (0x00043176) list_double_graphic_heading_pane_vc_t1

0xd547,	// (0x0004318c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd547,	// (0x0004318c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x00045615) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x00045615) list_double_graphic_heading_pane_vc_t

0xd45f,	// (0x000430a4) list_setting_pane_vc_g1_ParamLimits

0xd45f,	// (0x000430a4) list_setting_pane_vc_g1

0xd46b,	// (0x000430b0) list_setting_pane_vc_g2_ParamLimits

0xd46b,	// (0x000430b0) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x00045404) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x00045404) list_setting_pane_vc_g

0xd565,	// (0x000431aa) list_setting_pane_vc_t1_ParamLimits

0xd565,	// (0x000431aa) list_setting_pane_vc_t1

0xd581,	// (0x000431c6) list_setting_pane_vc_t2_ParamLimits

0xd581,	// (0x000431c6) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x00045658) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x00045658) list_setting_pane_vc_t

0xd4d5,	// (0x0004311a) set_value_pane_cp_vc_ParamLimits

0xd4d5,	// (0x0004311a) set_value_pane_cp_vc

0xd267,	// (0x00042eac) list_single_number_heading_pane_vc_g1_ParamLimits

0xd267,	// (0x00042eac) list_single_number_heading_pane_vc_g1

0xd273,	// (0x00042eb8) list_single_number_heading_pane_vc_g2_ParamLimits

0xd273,	// (0x00042eb8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x000451e8) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x000451e8) list_single_number_heading_pane_vc_g

0xd59d,	// (0x000431e2) list_single_number_heading_pane_vc_t1_ParamLimits

0xd59d,	// (0x000431e2) list_single_number_heading_pane_vc_t1

0xd27f,	// (0x00042ec4) list_single_number_heading_pane_vc_t2_ParamLimits

0xd27f,	// (0x00042ec4) list_single_number_heading_pane_vc_t2

0xd291,	// (0x00042ed6) list_single_number_heading_pane_vc_t3_ParamLimits

0xd291,	// (0x00042ed6) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x0004565d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x0004565d) list_single_number_heading_pane_vc_t

0xd2a3,	// (0x00042ee8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd2a3,	// (0x00042ee8) list_single_graphic_heading_pane_vc_g1

0xd267,	// (0x00042eac) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd267,	// (0x00042eac) list_single_graphic_heading_pane_vc_g4

0xd273,	// (0x00042eb8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd273,	// (0x00042eb8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9c9,	// (0x0004560e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x0004560e) list_single_graphic_heading_pane_vc_g

0xd59d,	// (0x000431e2) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd59d,	// (0x000431e2) list_single_graphic_heading_pane_vc_t1

0xd5b3,	// (0x000431f8) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd5b3,	// (0x000431f8) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1f,	// (0x00045664) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x00045664) list_single_graphic_heading_pane_vc_t

0xd267,	// (0x00042eac) list_double2_pane_vc_g1_ParamLimits

0xd267,	// (0x00042eac) list_double2_pane_vc_g1

0xd273,	// (0x00042eb8) list_double2_pane_vc_g2_ParamLimits

0xd273,	// (0x00042eb8) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x000451e8) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x000451e8) list_double2_pane_vc_g

0xd4f6,	// (0x0004313b) list_double2_pane_vc_t1_ParamLimits

0xd4f6,	// (0x0004313b) list_double2_pane_vc_t1

0xd2af,	// (0x00042ef4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd2af,	// (0x00042ef4) list_double2_large_graphic_pane_vc_g1

0xd267,	// (0x00042eac) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd267,	// (0x00042eac) list_double2_large_graphic_pane_vc_g2

0xd273,	// (0x00042eb8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd273,	// (0x00042eb8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00045205) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00045205) list_double2_large_graphic_pane_vc_g

0xd2bb,	// (0x00042f00) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd2bb,	// (0x00042f00) list_double2_large_graphic_pane_vc_t1

0xd5c5,	// (0x0004320a) list_double_time_pane_vc_g1_ParamLimits

0xd5c5,	// (0x0004320a) list_double_time_pane_vc_g1

0xd5d1,	// (0x00043216) list_double_time_pane_vc_g2_ParamLimits

0xd5d1,	// (0x00043216) list_double_time_pane_vc_g2

0x0001,

0xfa24,	// (0x00045669) list_double_time_pane_vc_g_ParamLimits

0xfa24,	// (0x00045669) list_double_time_pane_vc_g

0xd5dd,	// (0x00043222) list_double_time_pane_vc_t1_ParamLimits

0xd5dd,	// (0x00043222) list_double_time_pane_vc_t1

0xd607,	// (0x0004324c) list_double_time_pane_vc_t2_ParamLimits

0xd607,	// (0x0004324c) list_double_time_pane_vc_t2

0xd650,	// (0x00043295) list_double_time_pane_vc_t3_ParamLimits

0xd650,	// (0x00043295) list_double_time_pane_vc_t3

0xd662,	// (0x000432a7) list_double_time_pane_vc_t4_ParamLimits

0xd662,	// (0x000432a7) list_double_time_pane_vc_t4

0x0003,

0xfa29,	// (0x0004566e) list_double_time_pane_vc_t_ParamLimits

0xfa29,	// (0x0004566e) list_double_time_pane_vc_t

0xd267,	// (0x00042eac) list_double_pane_vc_g1_ParamLimits

0xd267,	// (0x00042eac) list_double_pane_vc_g1

0xd273,	// (0x00042eb8) list_double_pane_vc_g2_ParamLimits

0xd273,	// (0x00042eb8) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x000451e8) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x000451e8) list_double_pane_vc_g

0xd676,	// (0x000432bb) list_double_pane_vc_t1_ParamLimits

0xd676,	// (0x000432bb) list_double_pane_vc_t1

0xd68a,	// (0x000432cf) list_double_pane_vc_t2_ParamLimits

0xd68a,	// (0x000432cf) list_double_pane_vc_t2

0x0001,

0xfa32,	// (0x00045677) list_double_pane_vc_t_ParamLimits

0xfa32,	// (0x00045677) list_double_pane_vc_t

0xd267,	// (0x00042eac) list_double_number_pane_vc_g1_ParamLimits

0xd267,	// (0x00042eac) list_double_number_pane_vc_g1

0xd273,	// (0x00042eb8) list_double_number_pane_vc_g2_ParamLimits

0xd273,	// (0x00042eb8) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x000451e8) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x000451e8) list_double_number_pane_vc_g

0xd6a0,	// (0x000432e5) list_double_number_pane_vc_t1_ParamLimits

0xd6a0,	// (0x000432e5) list_double_number_pane_vc_t1

0xd6b2,	// (0x000432f7) list_double_number_pane_vc_t2_ParamLimits

0xd6b2,	// (0x000432f7) list_double_number_pane_vc_t2

0xd68a,	// (0x000432cf) list_double_number_pane_vc_t3_ParamLimits

0xd68a,	// (0x000432cf) list_double_number_pane_vc_t3

0x0002,

0xfa37,	// (0x0004567c) list_double_number_pane_vc_t_ParamLimits

0xfa37,	// (0x0004567c) list_double_number_pane_vc_t

0xd6c6,	// (0x0004330b) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd6c6,	// (0x0004330b) list_double_large_graphic_pane_vc_g1

0xd6e2,	// (0x00043327) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd6e2,	// (0x00043327) list_double_large_graphic_pane_vc_g2

0xd6f6,	// (0x0004333b) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd6f6,	// (0x0004333b) list_double_large_graphic_pane_vc_g3

0xd705,	// (0x0004334a) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd705,	// (0x0004334a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3e,	// (0x00045683) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00045683) list_double_large_graphic_pane_vc_g

0xd714,	// (0x00043359) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd714,	// (0x00043359) list_double_large_graphic_pane_vc_t1

0xd730,	// (0x00043375) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd730,	// (0x00043375) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa47,	// (0x0004568c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa47,	// (0x0004568c) list_double_large_graphic_pane_vc_t

0xd267,	// (0x00042eac) list_double_heading_pane_vc_g1_ParamLimits

0xd267,	// (0x00042eac) list_double_heading_pane_vc_g1

0xd273,	// (0x00042eb8) list_double_heading_pane_vc_g2_ParamLimits

0xd273,	// (0x00042eb8) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x000451e8) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x000451e8) list_double_heading_pane_vc_g

0xd750,	// (0x00043395) list_double_heading_pane_vc_t1_ParamLimits

0xd750,	// (0x00043395) list_double_heading_pane_vc_t1

0xd762,	// (0x000433a7) list_double_heading_pane_vc_t2_ParamLimits

0xd762,	// (0x000433a7) list_double_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x00045691) list_double_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x00045691) list_double_heading_pane_vc_t

0xd77a,	// (0x000433bf) list_double_graphic_pane_vc_g1_ParamLimits

0xd77a,	// (0x000433bf) list_double_graphic_pane_vc_g1

0xd78d,	// (0x000433d2) list_double_graphic_pane_vc_g2_ParamLimits

0xd78d,	// (0x000433d2) list_double_graphic_pane_vc_g2

0xd267,	// (0x00042eac) list_double_graphic_pane_vc_g3_ParamLimits

0xd267,	// (0x00042eac) list_double_graphic_pane_vc_g3

0x0003,

0xfa51,	// (0x00045696) list_double_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x00045696) list_double_graphic_pane_vc_g

0xd7aa,	// (0x000433ef) list_double_graphic_pane_vc_t1_ParamLimits

0xd7aa,	// (0x000433ef) list_double_graphic_pane_vc_t1

0xd7d4,	// (0x00043419) list_double_graphic_pane_vc_t2_ParamLimits

0xd7d4,	// (0x00043419) list_double_graphic_pane_vc_t2

0x0001,

0xfa5a,	// (0x0004569f) list_double_graphic_pane_vc_t_ParamLimits

0xfa5a,	// (0x0004569f) list_double_graphic_pane_vc_t

0xeaf4,	// (0x00044739) aid_size_cell_fastswap

0x95d2,	// (0x0003f217) aid_size_cell_touch_ParamLimits

0x95d2,	// (0x0003f217) aid_size_cell_touch

0xec7b,	// (0x000448c0) popup_fast_swap_wide_window_ParamLimits

0xec7b,	// (0x000448c0) popup_fast_swap_wide_window

0x9790,	// (0x0003f3d5) touch_pane_ParamLimits

0x9790,	// (0x0003f3d5) touch_pane

0xbfda,	// (0x00041c1f) button_value_adjust_pane_cp2

0xd30c,	// (0x00042f51) button_value_adjust_pane_cp4

0xd314,	// (0x00042f59) form_field_data_pane_cp2

0x9fd3,	// (0x0003fc18) form_field_data_wide_pane_cp2

0xf2a7,	// (0x00044eec) bg_scroll_pane_ParamLimits

0xf2c6,	// (0x00044f0b) scroll_handle_pane_ParamLimits

0xf2da,	// (0x00044f1f) scroll_sc2_down_pane_ParamLimits

0xf2da,	// (0x00044f1f) scroll_sc2_down_pane

0xf301,	// (0x00044f46) scroll_sc2_up_pane_ParamLimits

0xf301,	// (0x00044f46) scroll_sc2_up_pane

0xcb16,	// (0x0004275b) grid_wheel_folder_pane_g1_ParamLimits

0xcb16,	// (0x0004275b) grid_wheel_folder_pane_g1

0x0141,	// (0x00035d86) clock_nsta_pane_cp2_ParamLimits

0x0141,	// (0x00035d86) clock_nsta_pane_cp2

0xa47a,	// (0x000400bf) listscroll_midp_pane_ParamLimits

0xa486,	// (0x000400cb) midp_canvas_pane

0x2af6,	// (0x0003873b) nsta_clock_indic_pane

0x2b2a,	// (0x0003876f) listscroll_form_pane_vc

0x2b32,	// (0x00038777) listscroll_set_pane_vc_ParamLimits

0x2b32,	// (0x00038777) listscroll_set_pane_vc

0xc19c,	// (0x00041de1) clock_nsta_pane

0xc1c6,	// (0x00041e0b) indicator_nsta_pane

0x2f92,	// (0x00038bd7) bg_popup_sub_pane_cp2_ParamLimits

0x2fa6,	// (0x00038beb) find_pane_cp2_ParamLimits

0x2fa6,	// (0x00038beb) find_pane_cp2

0x2fbc,	// (0x00038c01) grid_toobar_pane_ParamLimits

0x309c,	// (0x00038ce1) list_form_gen_pane_vc_ParamLimits

0x309c,	// (0x00038ce1) list_form_gen_pane_vc

0x30b2,	// (0x00038cf7) scroll_pane_cp8_vc_ParamLimits

0x30b2,	// (0x00038cf7) scroll_pane_cp8_vc

0x312e,	// (0x00038d73) data_form_wide_pane_vc_ParamLimits

0x312e,	// (0x00038d73) data_form_wide_pane_vc

0x313a,	// (0x00038d7f) form_field_data_wide_pane_vc_g1

0x3142,	// (0x00038d87) form_field_data_wide_pane_vc_t1_ParamLimits

0x3142,	// (0x00038d87) form_field_data_wide_pane_vc_t1

0xbfee,	// (0x00041c33) input_focus_pane_cp6_vc_ParamLimits

0xbfee,	// (0x00041c33) input_focus_pane_cp6_vc

0x345e,	// (0x000390a3) list_midp_pane_ParamLimits

0x47d1,	// (0x0003a416) scroll_pane_cp16_ParamLimits

0x47d1,	// (0x0003a416) scroll_pane_cp16

0x34b4,	// (0x000390f9) button_value_adjust_pane_ParamLimits

0x34b4,	// (0x000390f9) button_value_adjust_pane

0xc73c,	// (0x00042381) button_value_adjust_pane_cp6_ParamLimits

0xc73c,	// (0x00042381) button_value_adjust_pane_cp6

0xc878,	// (0x000424bd) settings_code_pane_cp_ParamLimits

0xc878,	// (0x000424bd) settings_code_pane_cp

0xb946,	// (0x0004158b) cell_touch_pane_g1

0xb946,	// (0x0004158b) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x00045323) cell_touch_pane_g

0xc9ea,	// (0x0004262f) cell_touch_pane_cp_ParamLimits

0xc9ea,	// (0x0004262f) cell_touch_pane_cp

0xca06,	// (0x0004264b) cell_touch_pane_ParamLimits

0xca06,	// (0x0004264b) cell_touch_pane

0xb946,	// (0x0004158b) scroll_sc2_down_pane_g1

0xb946,	// (0x0004158b) scroll_sc2_up_pane_g1

0xb950,	// (0x00041595) bg_set_opt_pane_cp4_vc

0x4b6f,	// (0x0003a7b4) list_set_graphic_pane_vc_g1_ParamLimits

0x4b6f,	// (0x0003a7b4) list_set_graphic_pane_vc_g1

0x4b7b,	// (0x0003a7c0) list_set_graphic_pane_vc_g2_ParamLimits

0x4b7b,	// (0x0003a7c0) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x0004561a) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x0004561a) list_set_graphic_pane_vc_g

0x4b87,	// (0x0003a7cc) text_primary_small_cp13_vc_ParamLimits

0x4b87,	// (0x0003a7cc) text_primary_small_cp13_vc

0x4b9f,	// (0x0003a7e4) list_set_graphic_pane_vc_ParamLimits

0x4b9f,	// (0x0003a7e4) list_set_graphic_pane_vc

0xb950,	// (0x00041595) input_focus_pane_cp2_vc

0xb946,	// (0x0004158b) setting_code_pane_vc_g1

0xb9c3,	// (0x00041608) setting_code_pane_vc_t1

0x4bb2,	// (0x0003a7f7) set_text_pane_vc_t1_ParamLimits

0x4bb2,	// (0x0003a7f7) set_text_pane_vc_t1

0xb950,	// (0x00041595) input_focus_pane_cp1_vc

0x4bd3,	// (0x0003a818) list_set_text_pane_vc

0xb946,	// (0x0004158b) setting_text_pane_vc_g1

0xb950,	// (0x00041595) bg_set_opt_pane_cp2_vc

0xb9ba,	// (0x000415ff) setting_slider_graphic_pane_vc_g1

0x4bdd,	// (0x0003a822) setting_slider_graphic_pane_vc_t1

0x4bef,	// (0x0003a834) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x0004561f) setting_slider_graphic_pane_vc_t

0x4c01,	// (0x0003a846) slider_set_pane_cp_vc

0x4c0b,	// (0x0003a850) slider_set_pane_vc_g1

0x4c14,	// (0x0003a859) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x00045624) slider_set_pane_vc_g

0xc046,	// (0x00041c8b) set_opt_bg_pane_g1_copy1

0xc04e,	// (0x00041c93) set_opt_bg_pane_g2_copy1

0x4c40,	// (0x0003a885) set_opt_bg_pane_g3_copy1

0xc05e,	// (0x00041ca3) set_opt_bg_pane_g4_copy1

0xc066,	// (0x00041cab) set_opt_bg_pane_g5_copy1

0xc06e,	// (0x00041cb3) set_opt_bg_pane_g6_copy1

0x4c4a,	// (0x0003a88f) set_opt_bg_pane_g7_copy1

0x4c54,	// (0x0003a899) set_opt_bg_pane_g8_copy1

0x4c5e,	// (0x0003a8a3) set_opt_bg_pane_g9_copy1

0xb950,	// (0x00041595) bg_set_opt_pane_cp_vc

0x4c68,	// (0x0003a8ad) setting_slider_pane_vc_t1

0x4c77,	// (0x0003a8bc) setting_slider_pane_vc_t2

0x4c89,	// (0x0003a8ce) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x00045633) setting_slider_pane_vc_t

0x4c9b,	// (0x0003a8e0) slider_set_pane_vc

0x0b6e,	// (0x000367b3) volume_set_pane_vc_g1

0x0b77,	// (0x000367bc) volume_set_pane_vc_g2

0x0b80,	// (0x000367c5) volume_set_pane_vc_g3

0x0b89,	// (0x000367ce) volume_set_pane_vc_g4

0x0b92,	// (0x000367d7) volume_set_pane_vc_g5

0x0b9b,	// (0x000367e0) volume_set_pane_vc_g6

0x0ba4,	// (0x000367e9) volume_set_pane_vc_g7

0x0bad,	// (0x000367f2) volume_set_pane_vc_g8

0x0bb6,	// (0x000367fb) volume_set_pane_vc_g9

0x0bbf,	// (0x00036804) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x0004563a) volume_set_pane_vc_g

0x4ca5,	// (0x0003a8ea) volume_set_pane_vc

0x4caf,	// (0x0003a8f4) button_value_adjust_pane_cp1_vc

0x4cb9,	// (0x0003a8fe) list_highlight_pane_cp2_vc

0x4cc2,	// (0x0003a907) list_set_pane_vc_ParamLimits

0x4cc2,	// (0x0003a907) list_set_pane_vc

0x4d30,	// (0x0003a975) main_pane_set_vc_t1_ParamLimits

0x4d30,	// (0x0003a975) main_pane_set_vc_t1

0x4d45,	// (0x0003a98a) main_pane_set_vc_t2_ParamLimits

0x4d45,	// (0x0003a98a) main_pane_set_vc_t2

0x4d57,	// (0x0003a99c) main_pane_set_vc_t3_ParamLimits

0x4d57,	// (0x0003a99c) main_pane_set_vc_t3

0x4d6b,	// (0x0003a9b0) main_pane_set_vc_t4_ParamLimits

0x4d6b,	// (0x0003a9b0) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x0004564f) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x0004564f) main_pane_set_vc_t

0x4d7f,	// (0x0003a9c4) setting_code_pane_vc_ParamLimits

0x4d7f,	// (0x0003a9c4) setting_code_pane_vc

0x4d90,	// (0x0003a9d5) setting_slider_graphic_pane_vc

0x4d90,	// (0x0003a9d5) setting_slider_pane_vc

0x4d90,	// (0x0003a9d5) setting_text_pane_vc

0x4d90,	// (0x0003a9d5) setting_volume_pane_vc

0x4d9a,	// (0x0003a9df) scroll_pane_cp121_vc

0xbfc8,	// (0x00041c0d) set_content_pane_vc

0x4da2,	// (0x0003a9e7) button_value_adjust_pane_g1

0x4dab,	// (0x0003a9f0) button_value_adjust_pane_g2

0x0001,

0xfa5f,	// (0x000456a4) button_value_adjust_pane_g

0x4db4,	// (0x0003a9f9) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4db4,	// (0x0003a9f9) form_field_slider_wide_pane_vc_t1

0x4dc6,	// (0x0003aa0b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4dc6,	// (0x0003aa0b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa64,	// (0x000456a9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x000456a9) form_field_slider_wide_pane_vc_t

0xb99e,	// (0x000415e3) input_focus_pane_cp10_vc_ParamLimits

0xb99e,	// (0x000415e3) input_focus_pane_cp10_vc

0x4df2,	// (0x0003aa37) slider_cont_pane_cp1_vc_ParamLimits

0x4df2,	// (0x0003aa37) slider_cont_pane_cp1_vc

0x4e04,	// (0x0003aa49) slider_form_pane_g1_cp2

0x4c14,	// (0x0003a859) slider_form_pane_g2_cp2

0x4e31,	// (0x0003aa76) form_field_slider_pane_vc_t3

0x4e3f,	// (0x0003aa84) form_field_slider_pane_vc_t4

0x4e4d,	// (0x0003aa92) slider_form_pane_vc_ParamLimits

0x4e4d,	// (0x0003aa92) slider_form_pane_vc

0x4e5a,	// (0x0003aa9f) form_field_slider_pane_vc_t1_ParamLimits

0x4e5a,	// (0x0003aa9f) form_field_slider_pane_vc_t1

0x4dc6,	// (0x0003aa0b) form_field_slider_pane_vc_t2_ParamLimits

0x4dc6,	// (0x0003aa0b) form_field_slider_pane_vc_t2

0x0001,

0xfa76,	// (0x000456bb) form_field_slider_pane_vc_t_ParamLimits

0xfa76,	// (0x000456bb) form_field_slider_pane_vc_t

0xb99e,	// (0x000415e3) input_focus_pane_cp9_vc_ParamLimits

0xb99e,	// (0x000415e3) input_focus_pane_cp9_vc

0x4e70,	// (0x0003aab5) slider_cont_pane_vc_ParamLimits

0x4e70,	// (0x0003aab5) slider_cont_pane_vc

0x4e84,	// (0x0003aac9) list_form_graphic_pane_cp_vc_ParamLimits

0x4e84,	// (0x0003aac9) list_form_graphic_pane_cp_vc

0x313a,	// (0x00038d7f) form_field_popup_wide_pane_vc_g1

0x4e99,	// (0x0003aade) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4e99,	// (0x0003aade) form_field_popup_wide_pane_vc_t1

0xbfee,	// (0x00041c33) input_focus_pane_cp8_vc_ParamLimits

0xbfee,	// (0x00041c33) input_focus_pane_cp8_vc

0x4ede,	// (0x0003ab23) list_form_wide_pane_vc_ParamLimits

0x4ede,	// (0x0003ab23) list_form_wide_pane_vc

0x4eea,	// (0x0003ab2f) list_form_graphic_pane_vc_g1

0x4ef2,	// (0x0003ab37) list_form_graphic_pane_vc_t1_ParamLimits

0x4ef2,	// (0x0003ab37) list_form_graphic_pane_vc_t1

0xb9ac,	// (0x000415f1) list_highlight_pane_cp5_vc_ParamLimits

0xb9ac,	// (0x000415f1) list_highlight_pane_cp5_vc

0x4f0e,	// (0x0003ab53) list_form_graphic_pane_vc_ParamLimits

0x4f0e,	// (0x0003ab53) list_form_graphic_pane_vc

0x313a,	// (0x00038d7f) form_field_popup_pane_vc_g1

0x4f24,	// (0x0003ab69) form_field_popup_pane_vc_t1_ParamLimits

0x4f24,	// (0x0003ab69) form_field_popup_pane_vc_t1

0xbfee,	// (0x00041c33) input_focus_pane_cp7_vc_ParamLimits

0xbfee,	// (0x00041c33) input_focus_pane_cp7_vc

0x4f3b,	// (0x0003ab80) list_form_pane_vc_ParamLimits

0x4f3b,	// (0x0003ab80) list_form_pane_vc

0x4f47,	// (0x0003ab8c) data_form_pane_vc_t1_ParamLimits

0x4f47,	// (0x0003ab8c) data_form_pane_vc_t1

0xc046,	// (0x00041c8b) input_focus_pane_vc_g1

0xc04e,	// (0x00041c93) input_focus_pane_vc_g2

0xc056,	// (0x00041c9b) input_focus_pane_vc_g3

0xc05e,	// (0x00041ca3) input_focus_pane_vc_g4

0xc066,	// (0x00041cab) input_focus_pane_vc_g5

0xc06e,	// (0x00041cb3) input_focus_pane_vc_g6

0xc076,	// (0x00041cbb) input_focus_pane_vc_g7

0xc07e,	// (0x00041cc3) input_focus_pane_vc_g8

0xc086,	// (0x00041ccb) input_focus_pane_vc_g9

0xb946,	// (0x0004158b) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x000452ac) input_focus_pane_vc_g

0x312e,	// (0x00038d73) data_form_pane_vc_ParamLimits

0x312e,	// (0x00038d73) data_form_pane_vc

0x313a,	// (0x00038d7f) form_field_data_pane_vc_g1

0x4f64,	// (0x0003aba9) form_field_data_pane_vc_t1_ParamLimits

0x4f64,	// (0x0003aba9) form_field_data_pane_vc_t1

0xbfee,	// (0x00041c33) input_focus_pane_vc_ParamLimits

0xbfee,	// (0x00041c33) input_focus_pane_vc

0x4f7e,	// (0x0003abc3) button_value_adjust_pane_cp3_vc

0x4f86,	// (0x0003abcb) button_value_adjust_pane_cp5_vc

0x4f8e,	// (0x0003abd3) form_field_data_pane_vc_ParamLimits

0x4f8e,	// (0x0003abd3) form_field_data_pane_vc

0x4fa9,	// (0x0003abee) form_field_data_pane_vc_cp2

0x4fb1,	// (0x0003abf6) form_field_data_wide_pane_vc_ParamLimits

0x4fb1,	// (0x0003abf6) form_field_data_wide_pane_vc

0x4fcb,	// (0x0003ac10) form_field_data_wide_pane_vc_cp2

0x4fd3,	// (0x0003ac18) form_field_popup_pane_vc_ParamLimits

0x4fd3,	// (0x0003ac18) form_field_popup_pane_vc

0x4fee,	// (0x0003ac33) form_field_popup_wide_pane_vc_ParamLimits

0x4fee,	// (0x0003ac33) form_field_popup_wide_pane_vc

0x5008,	// (0x0003ac4d) form_field_slider_pane_vc_ParamLimits

0x5008,	// (0x0003ac4d) form_field_slider_pane_vc

0x501b,	// (0x0003ac60) form_field_slider_wide_pane_vc_ParamLimits

0x501b,	// (0x0003ac60) form_field_slider_wide_pane_vc

0xca24,	// (0x00042669) grid_touch_1_pane_ParamLimits

0xca24,	// (0x00042669) grid_touch_1_pane

0xca38,	// (0x0004267d) grid_touch_2_pane_ParamLimits

0xca38,	// (0x0004267d) grid_touch_2_pane

0x5101,	// (0x0003ad46) touch_pane_g1_ParamLimits

0x5101,	// (0x0003ad46) touch_pane_g1

0x5054,	// (0x0003ac99) cell_app_pane_cp_wide_ParamLimits

0x5054,	// (0x0003ac99) cell_app_pane_cp_wide

0x5065,	// (0x0003acaa) grid_popup_fast_wide_pane_ParamLimits

0x5065,	// (0x0003acaa) grid_popup_fast_wide_pane

0x5079,	// (0x0003acbe) scroll_pane_cp19_ParamLimits

0x5079,	// (0x0003acbe) scroll_pane_cp19

0xb950,	// (0x00041595) bg_popup_window_pane_cp20

0x508d,	// (0x0003acd2) listscroll_popup_fast_wide_pane

0xca64,	// (0x000426a9) grid_indicator_nsta_pane

0x50a7,	// (0x0003acec) clock_nsta_pane_g1

0x50b0,	// (0x0003acf5) clock_nsta_pane_t1

0xca70,	// (0x000426b5) cell_indicator_nsta_pane_ParamLimits

0xca70,	// (0x000426b5) cell_indicator_nsta_pane

0x5101,	// (0x0003ad46) cell_indicator_nsta_pane_g1

0xca8b,	// (0x000426d0) cell_indicator_nsta_pane_g2

0x0001,

0xfa87,	// (0x000456cc) cell_indicator_nsta_pane_g

0x5122,	// (0x0003ad67) clock_nsta_pane_cp

0x512b,	// (0x0003ad70) indicator_nsta_pane_cp

0x5135,	// (0x0003ad7a) nsta_clock_indic_pane_g1

0xb9e8,	// (0x0004162d) grid_indicator_pane

0xf3f3,	// (0x00045038) scroll_pane_cp29

0x0090,	// (0x00035cd5) indicator_nsta_pane_cp2_ParamLimits

0x0090,	// (0x00035cd5) indicator_nsta_pane_cp2

0xb9ac,	// (0x000415f1) main_apps_wheel_pane

0x331b,	// (0x00038f60) form_midp_field_text_pane_ParamLimits

0x346a,	// (0x000390af) scroll_bar_cp050_ParamLimits

0x518e,	// (0x0003add3) cell_indicator_pane_ParamLimits

0x518e,	// (0x0003add3) cell_indicator_pane

0x51a6,	// (0x0003adeb) cell_indicator_pane_g1

0xca98,	// (0x000426dd) grid_wheel_folder_pane_ParamLimits

0xca98,	// (0x000426dd) grid_wheel_folder_pane

0xcaa6,	// (0x000426eb) list_wheel_apps_pane_ParamLimits

0xcaa6,	// (0x000426eb) list_wheel_apps_pane

0xcab4,	// (0x000426f9) main_apps_wheel_pane_g1_ParamLimits

0xcab4,	// (0x000426f9) main_apps_wheel_pane_g1

0xcac4,	// (0x00042709) main_apps_wheel_pane_g2_ParamLimits

0xcac4,	// (0x00042709) main_apps_wheel_pane_g2

0x0001,

0xfaa3,	// (0x000456e8) main_apps_wheel_pane_g_ParamLimits

0xfaa3,	// (0x000456e8) main_apps_wheel_pane_g

0xcad4,	// (0x00042719) main_apps_wheel_pane_t1_ParamLimits

0xcad4,	// (0x00042719) main_apps_wheel_pane_t1

0xcaec,	// (0x00042731) list_wheel_apps_pane_g1

0xcaf4,	// (0x00042739) list_wheel_apps_pane_g2

0xcafc,	// (0x00042741) list_wheel_apps_pane_g3

0xcb04,	// (0x00042749) list_wheel_apps_pane_g4

0xcb0c,	// (0x00042751) list_wheel_apps_pane_g5

0x0004,

0xfaa8,	// (0x000456ed) list_wheel_apps_pane_g

0x2673,	// (0x000382b8) navi_icon_text_pane

0xc08e,	// (0x00041cd3) aid_fill_nsta

0xcb29,	// (0x0004276e) navi_icon_text_pane_g1

0xcb35,	// (0x0004277a) navi_icon_text_pane_t1

0x24fe,	// (0x00038143) list_set_graphic_pane_t1_ParamLimits

0x24fe,	// (0x00038143) list_set_graphic_pane_t1

0x3bd7,	// (0x0003981c) popup_midp_note_alarm_window_t6_ParamLimits

0x3bd7,	// (0x0003981c) popup_midp_note_alarm_window_t6

0x3be9,	// (0x0003982e) popup_midp_note_alarm_window_t7_ParamLimits

0x3be9,	// (0x0003982e) popup_midp_note_alarm_window_t7

0x3bfb,	// (0x00039840) popup_midp_note_alarm_window_t8_ParamLimits

0x3bfb,	// (0x00039840) popup_midp_note_alarm_window_t8

0x3c0d,	// (0x00039852) popup_midp_note_alarm_window_t9_ParamLimits

0x3c0d,	// (0x00039852) popup_midp_note_alarm_window_t9

0x3c1f,	// (0x00039864) popup_midp_note_alarm_window_t10_ParamLimits

0x3c1f,	// (0x00039864) popup_midp_note_alarm_window_t10

0x3c31,	// (0x00039876) popup_midp_note_alarm_window_t11_ParamLimits

0x3c31,	// (0x00039876) popup_midp_note_alarm_window_t11

0x3c43,	// (0x00039888) scroll_pane_cp17_ParamLimits

0x3c43,	// (0x00039888) scroll_pane_cp17

0x0b6e,	// (0x000367b3) volume_small_pane_cp_g1

0x0f4a,	// (0x00036b8f) volume_small_pane_cp_g2

0x0f53,	// (0x00036b98) volume_small_pane_cp_g3

0x0f5c,	// (0x00036ba1) volume_small_pane_cp_g4

0x0f65,	// (0x00036baa) volume_small_pane_cp_g5

0x0f6e,	// (0x00036bb3) volume_small_pane_cp_g6

0x0f77,	// (0x00036bbc) volume_small_pane_cp_g7

0x0f80,	// (0x00036bc5) volume_small_pane_cp_g8

0x0f89,	// (0x00036bce) volume_small_pane_cp_g9

0x0f92,	// (0x00036bd7) volume_small_pane_cp_g10

0x28d5,	// (0x0003851a) midp_ticker_pane_g1_ParamLimits

0x28e1,	// (0x00038526) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x00045378) midp_ticker_pane_g_ParamLimits

0xa51e,	// (0x00040163) midp_ticker_pane_t1_ParamLimits

0xc0b2,	// (0x00041cf7) aid_fill_nsta_2

0x3456,	// (0x0003909b) list_form2_midp_pane

0x45d2,	// (0x0003a217) midp_editing_number_pane_ParamLimits

0x45e1,	// (0x0003a226) midp_ticker_pane_ParamLimits

0x5299,	// (0x0003aede) form2_midp_field_pane

0x52bd,	// (0x0003af02) scroll_pane_cp51

0x52dd,	// (0x0003af22) form2_midp_button_pane_ParamLimits

0x52dd,	// (0x0003af22) form2_midp_button_pane

0x52ef,	// (0x0003af34) form2_midp_content_pane_ParamLimits

0x52ef,	// (0x0003af34) form2_midp_content_pane

0x5309,	// (0x0003af4e) form2_midp_field_choice_group_pane

0x5311,	// (0x0003af56) form2_midp_field_pane_g1

0x5319,	// (0x0003af5e) form2_midp_field_pane_g2

0x5321,	// (0x0003af66) form2_midp_field_pane_g3

0x5329,	// (0x0003af6e) form2_midp_field_pane_g4

0x0003,

0xfacd,	// (0x00045712) form2_midp_field_pane_g

0x5331,	// (0x0003af76) form2_midp_gauge_slider_pane

0x5339,	// (0x0003af7e) form2_midp_gauge_wait_pane

0x5341,	// (0x0003af86) form2_midp_image_pane_ParamLimits

0x5341,	// (0x0003af86) form2_midp_image_pane

0x535c,	// (0x0003afa1) form2_midp_label_pane_ParamLimits

0x535c,	// (0x0003afa1) form2_midp_label_pane

0xcb63,	// (0x000427a8) form2_midp_label_pane_cp_ParamLimits

0xcb63,	// (0x000427a8) form2_midp_label_pane_cp

0x53a8,	// (0x0003afed) form2_midp_string_pane_ParamLimits

0x53a8,	// (0x0003afed) form2_midp_string_pane

0xd7f2,	// (0x00043437) form2_midp_text_pane_ParamLimits

0xd7f2,	// (0x00043437) form2_midp_text_pane

0x53ba,	// (0x0003afff) form2_midp_time_pane

0x53ca,	// (0x0003b00f) input_focus_pane_cp51_ParamLimits

0x53ca,	// (0x0003b00f) input_focus_pane_cp51

0x53e2,	// (0x0003b027) form2_midp_label_pane_t1_ParamLimits

0x53e2,	// (0x0003b027) form2_midp_label_pane_t1

0xd813,	// (0x00043458) form2_mdip_text_pane_t1_ParamLimits

0xd813,	// (0x00043458) form2_mdip_text_pane_t1

0xd837,	// (0x0004347c) form2_midp_time_pane_t1

0x5430,	// (0x0003b075) form2_midp_gauge_slider_pane_t1

0xcb84,	// (0x000427c9) form2_midp_gauge_slider_pane_t2

0xcb96,	// (0x000427db) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad6,	// (0x0004571b) form2_midp_gauge_slider_pane_t

0x5466,	// (0x0003b0ab) form2_midp_slider_pane

0x5472,	// (0x0003b0b7) form2_midp_gauge_wait_pane_t1

0x5480,	// (0x0003b0c5) form2_midp_wait_pane_ParamLimits

0x5480,	// (0x0003b0c5) form2_midp_wait_pane

0x3181,	// (0x00038dc6) list_single_2graphic_pane_cp4_ParamLimits

0x3181,	// (0x00038dc6) list_single_2graphic_pane_cp4

0xcba8,	// (0x000427ed) list_single_midp_graphic_pane_cp_ParamLimits

0xcba8,	// (0x000427ed) list_single_midp_graphic_pane_cp

0xb950,	// (0x00041595) list_highlight_pane_cp20

0x54c4,	// (0x0003b109) list_single_2graphic_pane_g1_cp4

0x4a51,	// (0x0003a696) list_single_2graphic_pane_g2_cp4

0x54cc,	// (0x0003b111) list_single_2graphic_pane_t1_cp4

0xb9ac,	// (0x000415f1) list_highlight_pane_cp21

0x54db,	// (0x0003b120) list_single_midp_graphic_pane_g4_cp

0x54ea,	// (0x0003b12f) list_single_midp_graphic_pane_t1_cp

0xcbc9,	// (0x0004280e) form2_mdip_string_pane_t1_ParamLimits

0xcbc9,	// (0x0004280e) form2_mdip_string_pane_t1

0xb950,	// (0x00041595) bg_wml_button_pane_cp2

0xb946,	// (0x0004158b) form2_midp_image_pane_g1

0xd2e9,	// (0x00042f2e) list_double_large_graphic_pane_g5_ParamLimits

0xd2e9,	// (0x00042f2e) list_double_large_graphic_pane_g5

0xa47a,	// (0x000400bf) midp_form_pane_ParamLimits

0xb9ac,	// (0x000415f1) main_apps_wheel_pane_ParamLimits

0xabda,	// (0x0004081f) popup_preview_window_ParamLimits

0xabda,	// (0x0004081f) popup_preview_window

0x099e,	// (0x000365e3) popup_touch_info_window_ParamLimits

0x099e,	// (0x000365e3) popup_touch_info_window

0x09c0,	// (0x00036605) popup_touch_menu_window_ParamLimits

0x09c0,	// (0x00036605) popup_touch_menu_window

0xb93c,	// (0x00041581) bg_popup_sub_pane_cp6

0x559b,	// (0x0003b1e0) list_touch_menu_pane

0x55a3,	// (0x0003b1e8) list_single_touch_menu_pane_ParamLimits

0x55a3,	// (0x0003b1e8) list_single_touch_menu_pane

0x55bb,	// (0x0003b200) list_single_touch_menu_pane_t1

0xb9ac,	// (0x000415f1) bg_popup_sub_pane_cp7_ParamLimits

0xb9ac,	// (0x000415f1) bg_popup_sub_pane_cp7

0x55c9,	// (0x0003b20e) heading_sub_pane

0x55d1,	// (0x0003b216) list_touch_info_pane_ParamLimits

0x55d1,	// (0x0003b216) list_touch_info_pane

0x55e0,	// (0x0003b225) list_single_touch_info_pane_ParamLimits

0x55e0,	// (0x0003b225) list_single_touch_info_pane

0x55f2,	// (0x0003b237) list_single_touch_info_pane_t1

0x5600,	// (0x0003b245) list_single_touch_info_pane_t2

0x0001,

0xfae4,	// (0x00045729) list_single_touch_info_pane_t

0x27f7,	// (0x0003843c) bg_popup_heading_pane_cp

0x560e,	// (0x0003b253) heading_sub_pane_t1

0x30c8,	// (0x00038d0d) bg_popup_preview_window_pane_cp_ParamLimits

0x30c8,	// (0x00038d0d) bg_popup_preview_window_pane_cp

0x55c9,	// (0x0003b20e) heading_preview_pane

0x55d1,	// (0x0003b216) list_preview_pane_ParamLimits

0x55d1,	// (0x0003b216) list_preview_pane

0x561c,	// (0x0003b261) popup_preview_window_g1

0x55e0,	// (0x0003b225) list_single_preview_pane_ParamLimits

0x55e0,	// (0x0003b225) list_single_preview_pane

0x5624,	// (0x0003b269) list_single_preview_pane_g1

0x562c,	// (0x0003b271) list_single_preview_pane_t1

0x55f2,	// (0x0003b237) list_single_preview_pane_t2

0x0001,

0xfae9,	// (0x0004572e) list_single_preview_pane_t

0x563a,	// (0x0003b27f) bg_popup_heading_pane_cp2_ParamLimits

0x563a,	// (0x0003b27f) bg_popup_heading_pane_cp2

0x5650,	// (0x0003b295) heading_preview_pane_g1

0x5658,	// (0x0003b29d) heading_preview_pane_t1_ParamLimits

0x5658,	// (0x0003b29d) heading_preview_pane_t1

0xb9ff,	// (0x00041644) soft_indicator_pane_t1_ParamLimits

0xbf61,	// (0x00041ba6) scroll_pane_ParamLimits

0xf2ef,	// (0x00044f34) scroll_sc2_left_pane

0xf2f8,	// (0x00044f3d) scroll_sc2_right_pane

0xf317,	// (0x00044f5c) scroll_bg_pane_g1_ParamLimits

0xf32c,	// (0x00044f71) scroll_bg_pane_g2_ParamLimits

0xf344,	// (0x00044f89) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x00045303) scroll_bg_pane_g_ParamLimits

0xf317,	// (0x00044f5c) scroll_handle_pane_g1_ParamLimits

0xf366,	// (0x00044fab) scroll_handle_pane_g2_ParamLimits

0xf344,	// (0x00044f89) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0004530a) scroll_handle_pane_g_ParamLimits

0x03fc,	// (0x00036041) popup_choice_list_window_ParamLimits

0x03fc,	// (0x00036041) popup_choice_list_window

0x2f9e,	// (0x00038be3) choice_list_pane

0x3020,	// (0x00038c65) cell_toolbar_pane_t1

0x3048,	// (0x00038c8d) toolbar_button_pane_ParamLimits

0x410d,	// (0x00039d52) ai_gene_pane_1_t2_ParamLimits

0x410d,	// (0x00039d52) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x0004552d) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x0004552d) ai_gene_pane_1_t

0x5675,	// (0x0003b2ba) scroll_sc2_left_pane_g1

0x5675,	// (0x0003b2ba) scroll_sc2_right_pane_g1

0x2b1e,	// (0x00038763) bg_popup_sub_pane_cp10

0x567f,	// (0x0003b2c4) list_choice_list_pane

0x5698,	// (0x0003b2dd) list_single_choice_list_pane_ParamLimits

0x5698,	// (0x0003b2dd) list_single_choice_list_pane

0x56b0,	// (0x0003b2f5) list_single_choice_list_pane_g1

0xef25,	// (0x00044b6a) list_single_choice_list_pane_t1_ParamLimits

0xef25,	// (0x00044b6a) list_single_choice_list_pane_t1

0x56b8,	// (0x0003b2fd) choice_list_pane_g1

0x56c0,	// (0x0003b305) choice_list_pane_t1

0xb93c,	// (0x00041581) input_focus_pane_cp11

0xf0f3,	// (0x00044d38) title_pane_stacon_g2_ParamLimits

0xf0f3,	// (0x00044d38) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x000452e9) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x000452e9) title_pane_stacon_g

0x27f7,	// (0x0003843c) cursor_press_pane

0xa851,	// (0x00040496) popup_fep_hwr_window_ParamLimits

0xa851,	// (0x00040496) popup_fep_hwr_window

0x0540,	// (0x00036185) popup_fep_vkb_window_ParamLimits

0x0540,	// (0x00036185) popup_fep_vkb_window

0x56ce,	// (0x0003b313) cursor_press_pane_g1

0x0002,

0xfb12,	// (0x00045757) fep_vkb_side_pane_g_ParamLimits

0x0fd4,	// (0x00036c19) fep_hwr_candidate_pane_ParamLimits

0x0fd4,	// (0x00036c19) fep_hwr_candidate_pane

0x0ffe,	// (0x00036c43) fep_hwr_side_pane_ParamLimits

0x0ffe,	// (0x00036c43) fep_hwr_side_pane

0x1020,	// (0x00036c65) fep_hwr_top_pane_ParamLimits

0x1020,	// (0x00036c65) fep_hwr_top_pane

0x1038,	// (0x00036c7d) fep_hwr_write_pane_ParamLimits

0x1038,	// (0x00036c7d) fep_hwr_write_pane

0xfb12,	// (0x00045757) fep_vkb_side_pane_g

0x56d6,	// (0x0003b31b) fep_hwr_top_pane_g1

0x56e8,	// (0x0003b32d) fep_hwr_top_pane_g2

0x1072,	// (0x00036cb7) fep_hwr_top_pane_g3

0x0002,

0xfaee,	// (0x00045733) fep_hwr_top_pane_g

0x1087,	// (0x00036ccc) fep_hwr_top_text_pane

0x21df,	// (0x00037e24) fep_hwr_top_text_pane_g1

0x571e,	// (0x0003b363) fep_hwr_top_text_pane_t1

0x1191,	// (0x00036dd6) fep_hwr_candidate_pane_g1

0x5969,	// (0x0003b5ae) fep_vkb_keypad_pane_g3_ParamLimits

0x5969,	// (0x0003b5ae) fep_vkb_keypad_pane_g3

0x5995,	// (0x0003b5da) fep_vkb_keypad_pane_g4_ParamLimits

0x5995,	// (0x0003b5da) fep_vkb_keypad_pane_g4

0x5a0c,	// (0x0003b651) fep_vkb_bottom_pane_g2_ParamLimits

0x5a0c,	// (0x0003b651) fep_vkb_bottom_pane_g2

0x0001,

0xfb19,	// (0x0004575e) fep_vkb_bottom_pane_g_ParamLimits

0xfb19,	// (0x0004575e) fep_vkb_bottom_pane_g

0x5675,	// (0x0003b2ba) cell_vkb_side_pane_g2

0x0001,

0xfb23,	// (0x00045768) cell_vkb_side_pane_g

0x5a97,	// (0x0003b6dc) cell_vkb_side_pane_t1

0x5aa5,	// (0x0003b6ea) cell_vkb_side_pane_t1_copy1

0x5675,	// (0x0003b2ba) bg_fep_vkb_candidate_pane_g2

0x5be9,	// (0x0003b82e) cell_vkb_candidate_pane_ParamLimits

0x572c,	// (0x0003b371) aid_size_cell_vkb_ParamLimits

0x572c,	// (0x0003b371) aid_size_cell_vkb

0x5be9,	// (0x0003b82e) cell_vkb_candidate_pane

0x11b8,	// (0x00036dfd) bg_popup_fep_shadow_pane_g1

0xcc65,	// (0x000428aa) fep_vkb_bottom_pane_ParamLimits

0xcc65,	// (0x000428aa) fep_vkb_bottom_pane

0x57fb,	// (0x0003b440) fep_vkb_candidate_pane_ParamLimits

0x57fb,	// (0x0003b440) fep_vkb_candidate_pane

0xcc91,	// (0x000428d6) fep_vkb_keypad_pane_ParamLimits

0xcc91,	// (0x000428d6) fep_vkb_keypad_pane

0xccb8,	// (0x000428fd) fep_vkb_side_pane_ParamLimits

0xccb8,	// (0x000428fd) fep_vkb_side_pane

0xccf4,	// (0x00042939) fep_vkb_top_pane_ParamLimits

0xccf4,	// (0x00042939) fep_vkb_top_pane

0x58c2,	// (0x0003b507) fep_vkb_top_pane_g1_ParamLimits

0x58c2,	// (0x0003b507) fep_vkb_top_pane_g1

0x58d1,	// (0x0003b516) fep_vkb_top_pane_g2_ParamLimits

0x58d1,	// (0x0003b516) fep_vkb_top_pane_g2

0x58e0,	// (0x0003b525) fep_vkb_top_pane_g3_ParamLimits

0x58e0,	// (0x0003b525) fep_vkb_top_pane_g3

0x0003,

0xfb09,	// (0x0004574e) fep_vkb_top_pane_g_ParamLimits

0xfb09,	// (0x0004574e) fep_vkb_top_pane_g

0x58fe,	// (0x0003b543) fep_vkb_top_text_pane_ParamLimits

0x58fe,	// (0x0003b543) fep_vkb_top_text_pane

0xcd30,	// (0x00042975) fep_vkb_side_pane_g1_ParamLimits

0xcd30,	// (0x00042975) fep_vkb_side_pane_g1

0x5958,	// (0x0003b59d) grid_vkb_side_pane_ParamLimits

0x5958,	// (0x0003b59d) grid_vkb_side_pane

0x11c0,	// (0x00036e05) bg_popup_fep_shadow_pane_g2

0x11c9,	// (0x00036e0e) bg_popup_fep_shadow_pane_g3

0x11d1,	// (0x00036e16) bg_popup_fep_shadow_pane_g4

0x11da,	// (0x00036e1f) bg_popup_fep_shadow_pane_g5

0x11e4,	// (0x00036e29) bg_popup_fep_shadow_pane_g6

0x11ec,	// (0x00036e31) bg_popup_fep_shadow_pane_g7

0xc05e,	// (0x00041ca3) bg_popup_fep_shadow_pane_g8

0x59b7,	// (0x0003b5fc) grid_vkb_keypad_number_pane_ParamLimits

0x59b7,	// (0x0003b5fc) grid_vkb_keypad_number_pane

0x59cb,	// (0x0003b610) grid_vkb_keypad_pane_ParamLimits

0x59cb,	// (0x0003b610) grid_vkb_keypad_pane

0x59f1,	// (0x0003b636) fep_vkb_bottom_pane_g1_ParamLimits

0x59f1,	// (0x0003b636) fep_vkb_bottom_pane_g1

0x5a1a,	// (0x0003b65f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5a1a,	// (0x0003b65f) grid_vkb_keypad_bottom_left_pane

0x5a2f,	// (0x0003b674) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5a2f,	// (0x0003b674) grid_vkb_keypad_bottom_right_pane

0x5a44,	// (0x0003b689) fep_vkb_top_text_pane_g1

0xcd77,	// (0x000429bc) fep_vkb_top_text_pane_t1

0xcd89,	// (0x000429ce) cell_vkb_side_pane_ParamLimits

0xcd89,	// (0x000429ce) cell_vkb_side_pane

0x5675,	// (0x0003b2ba) cell_vkb_side_pane_g1

0x5ab3,	// (0x0003b6f8) cell_vkb_keypad_pane_ParamLimits

0x5ab3,	// (0x0003b6f8) cell_vkb_keypad_pane

0x5b40,	// (0x0003b785) cell_vkb_keypad_pane_g1

0x0008,

0xfb36,	// (0x0004577b) bg_popup_fep_shadow_pane_g

0x11fe,	// (0x00036e43) cell_hwr_side_pane_g1

0x11fe,	// (0x00036e43) cell_hwr_side_pane_g2

0x5b4a,	// (0x0003b78f) cell_vkb_keypad_pane_t1

0xcd9f,	// (0x000429e4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcd9f,	// (0x000429e4) cell_vkb_keypad_bottom_left_pane

0xcdb4,	// (0x000429f9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcdb4,	// (0x000429f9) cell_vkb_keypad_bottom_right_pane

0x5675,	// (0x0003b2ba) cell_vkb_keypad_bottom_left_pane_g1

0x5675,	// (0x0003b2ba) cell_vkb_keypad_bottom_right_pane_g1

0x5bae,	// (0x0003b7f3) cell_vkb_keypad_number_pane_ParamLimits

0x5bae,	// (0x0003b7f3) cell_vkb_keypad_number_pane

0x5bcd,	// (0x0003b812) cell_vkb_keypad_number_pane_g1

0x5bd7,	// (0x0003b81c) cell_vkb_keypad_number_pane_g2

0x5be0,	// (0x0003b825) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb28,	// (0x0004576d) cell_vkb_keypad_number_pane_g

0x5b4a,	// (0x0003b78f) cell_vkb_keypad_number_pane_t1

0x5c0a,	// (0x0003b84f) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x0004578e) cell_hwr_side_pane_g

0x5c23,	// (0x0003b868) cell_hwr_side_pane_t1

0x1208,	// (0x00036e4d) cell_hwr_side_pane_t1_copy1

0x1216,	// (0x00036e5b) cell_hwr_candidate_pane_g1

0x1245,	// (0x00036e8a) cell_hwr_candidate_pane_t1

0x5675,	// (0x0003b2ba) cell_vkb_candidate_pane_g2

0x5c67,	// (0x0003b8ac) cell_vkb_candidate_pane_t1

0x0f9b,	// (0x00036be0) bg_popup_fep_shadow_pane_ParamLimits

0x0f9b,	// (0x00036be0) bg_popup_fep_shadow_pane

0x1052,	// (0x00036c97) bg_fep_hwr_top_pane_g4

0x56fa,	// (0x0003b33f) bg_hwr_side_pane_g1_ParamLimits

0x56fa,	// (0x0003b33f) bg_hwr_side_pane_g1

0xb10c,	// (0x00040d51) cell_hwr_side_pane_ParamLimits

0xb10c,	// (0x00040d51) cell_hwr_side_pane

0x1102,	// (0x00036d47) fep_hwr_write_pane_g1_ParamLimits

0x1102,	// (0x00036d47) fep_hwr_write_pane_g1

0x110f,	// (0x00036d54) fep_hwr_write_pane_g2_ParamLimits

0x110f,	// (0x00036d54) fep_hwr_write_pane_g2

0x111c,	// (0x00036d61) fep_hwr_write_pane_g3_ParamLimits

0x111c,	// (0x00036d61) fep_hwr_write_pane_g3

0xb12c,	// (0x00040d71) fep_hwr_write_pane_g4_ParamLimits

0xb12c,	// (0x00040d71) fep_hwr_write_pane_g4

0x0005,

0xfaf5,	// (0x0004573a) fep_hwr_write_pane_g_ParamLimits

0xfaf5,	// (0x0004573a) fep_hwr_write_pane_g

0x1052,	// (0x00036c97) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1052,	// (0x00036c97) bg_fep_hwr_candidate_pane_g2

0x113f,	// (0x00036d84) cell_hwr_candidate_pane_ParamLimits

0x113f,	// (0x00036d84) cell_hwr_candidate_pane

0x1191,	// (0x00036dd6) fep_hwr_candidate_pane_g1_ParamLimits

0x575a,	// (0x0003b39f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x575a,	// (0x0003b39f) bg_popup_fep_shadow_pane_cp2

0x58f0,	// (0x0003b535) fep_vkb_top_pane_g4_ParamLimits

0x58f0,	// (0x0003b535) fep_vkb_top_pane_g4

0x5936,	// (0x0003b57b) fep_vkb_side_pane_g2_ParamLimits

0x5936,	// (0x0003b57b) fep_vkb_side_pane_g2

0x9ee1,	// (0x0003fb26) list_setting_pane_t4_ParamLimits

0x9ee1,	// (0x0003fb26) list_setting_pane_t4

0x9f75,	// (0x0003fbba) list_setting_number_pane_t5_ParamLimits

0x9f75,	// (0x0003fbba) list_setting_number_pane_t5

0x2216,	// (0x00037e5b) list_double_heading_pane_cp2_ParamLimits

0x2216,	// (0x00037e5b) list_double_heading_pane_cp2

0x5c75,	// (0x0003b8ba) list_double_heading_pane_g1_cp2_ParamLimits

0x5c75,	// (0x0003b8ba) list_double_heading_pane_g1_cp2

0x5c81,	// (0x0003b8c6) list_double_heading_pane_g2_cp2_ParamLimits

0x5c81,	// (0x0003b8c6) list_double_heading_pane_g2_cp2

0x5c95,	// (0x0003b8da) list_double_heading_pane_t1_cp2_ParamLimits

0x5c95,	// (0x0003b8da) list_double_heading_pane_t1_cp2

0x5cab,	// (0x0003b8f0) list_double_heading_pane_t2_cp2_ParamLimits

0x5cab,	// (0x0003b8f0) list_double_heading_pane_t2_cp2

0xb934,	// (0x00041579) aid_value_unit2

0xec9f,	// (0x000448e4) popup_preview_fixed_window

0xbadf,	// (0x00041724) bg_popup_preview_window_pane_cp02

0x5cbd,	// (0x0003b902) list_preview_fixed_pane

0x5d03,	// (0x0003b948) list_empty_pane_fp_ParamLimits

0x5d03,	// (0x0003b948) list_empty_pane_fp

0x5d03,	// (0x0003b948) list_single_cale_day_pane_fp_ParamLimits

0x5d03,	// (0x0003b948) list_single_cale_day_pane_fp

0x5d03,	// (0x0003b948) list_single_graphic_heading_pane_fp_ParamLimits

0x5d03,	// (0x0003b948) list_single_graphic_heading_pane_fp

0x5d03,	// (0x0003b948) list_single_graphic_pane_fp_ParamLimits

0x5d03,	// (0x0003b948) list_single_graphic_pane_fp

0x5d03,	// (0x0003b948) list_single_heading_pane_fp_ParamLimits

0x5d03,	// (0x0003b948) list_single_heading_pane_fp

0x5d03,	// (0x0003b948) list_single_pane_fp_ParamLimits

0x5d03,	// (0x0003b948) list_single_pane_fp

0x5d1c,	// (0x0003b961) list_single_pane_fp_g1_ParamLimits

0x5d1c,	// (0x0003b961) list_single_pane_fp_g1

0xd857,	// (0x0004349c) list_single_pane_fp_g2_ParamLimits

0xd857,	// (0x0004349c) list_single_pane_fp_g2

0xd863,	// (0x000434a8) list_single_pane_fp_g3_ParamLimits

0xd863,	// (0x000434a8) list_single_pane_fp_g3

0x5d28,	// (0x0003b96d) list_single_pane_fp_g4_ParamLimits

0x5d28,	// (0x0003b96d) list_single_pane_fp_g4

0x0003,

0xfb5c,	// (0x000457a1) list_single_pane_fp_g_ParamLimits

0xfb5c,	// (0x000457a1) list_single_pane_fp_g

0xd877,	// (0x000434bc) list_single_pane_fp_t1_ParamLimits

0xd877,	// (0x000434bc) list_single_pane_fp_t1

0xd88e,	// (0x000434d3) list_single_graphic_pane_fp_g1_ParamLimits

0xd88e,	// (0x000434d3) list_single_graphic_pane_fp_g1

0x5d1c,	// (0x0003b961) list_single_graphic_pane_fp_g2_ParamLimits

0x5d1c,	// (0x0003b961) list_single_graphic_pane_fp_g2

0xd857,	// (0x0004349c) list_single_graphic_pane_fp_g3_ParamLimits

0xd857,	// (0x0004349c) list_single_graphic_pane_fp_g3

0xd863,	// (0x000434a8) list_single_graphic_pane_fp_g4_ParamLimits

0xd863,	// (0x000434a8) list_single_graphic_pane_fp_g4

0x5d28,	// (0x0003b96d) list_single_graphic_pane_fp_g5_ParamLimits

0x5d28,	// (0x0003b96d) list_single_graphic_pane_fp_g5

0x0004,

0xfb65,	// (0x000457aa) list_single_graphic_pane_fp_g_ParamLimits

0xfb65,	// (0x000457aa) list_single_graphic_pane_fp_g

0xd89a,	// (0x000434df) list_single_graphic_pane_fp_t1_ParamLimits

0xd89a,	// (0x000434df) list_single_graphic_pane_fp_t1

0xd88e,	// (0x000434d3) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd88e,	// (0x000434d3) list_single_graphic_heading_pane_fp_g1

0x5d1c,	// (0x0003b961) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5d1c,	// (0x0003b961) list_single_graphic_heading_pane_fp_g2

0xd857,	// (0x0004349c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd857,	// (0x0004349c) list_single_graphic_heading_pane_fp_g3

0xd863,	// (0x000434a8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd863,	// (0x000434a8) list_single_graphic_heading_pane_fp_g4

0x5d28,	// (0x0003b96d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5d28,	// (0x0003b96d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb65,	// (0x000457aa) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb65,	// (0x000457aa) list_single_graphic_heading_pane_fp_g

0xd8b0,	// (0x000434f5) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd8b0,	// (0x000434f5) list_single_graphic_heading_pane_fp_t1

0xd8c6,	// (0x0004350b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd8c6,	// (0x0004350b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb70,	// (0x000457b5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb70,	// (0x000457b5) list_single_graphic_heading_pane_fp_t

0xd8d8,	// (0x0004351d) list_single_cale_day_pane_fp_g1_ParamLimits

0xd8d8,	// (0x0004351d) list_single_cale_day_pane_fp_g1

0x5d34,	// (0x0003b979) list_single_cale_day_pane_fp_g2_ParamLimits

0x5d34,	// (0x0003b979) list_single_cale_day_pane_fp_g2

0xd910,	// (0x00043555) list_single_cale_day_pane_fp_g3_ParamLimits

0xd910,	// (0x00043555) list_single_cale_day_pane_fp_g3

0xd938,	// (0x0004357d) list_single_cale_day_pane_fp_g4_ParamLimits

0xd938,	// (0x0004357d) list_single_cale_day_pane_fp_g4

0xd95c,	// (0x000435a1) list_single_cale_day_pane_fp_g5_ParamLimits

0xd95c,	// (0x000435a1) list_single_cale_day_pane_fp_g5

0x0004,

0xfb75,	// (0x000457ba) list_single_cale_day_pane_fp_g_ParamLimits

0xfb75,	// (0x000457ba) list_single_cale_day_pane_fp_g

0xd980,	// (0x000435c5) list_single_cale_day_pane_fp_t1_ParamLimits

0xd980,	// (0x000435c5) list_single_cale_day_pane_fp_t1

0xd9a6,	// (0x000435eb) list_single_cale_day_pane_fp_t2_ParamLimits

0xd9a6,	// (0x000435eb) list_single_cale_day_pane_fp_t2

0xd9bf,	// (0x00043604) list_single_cale_day_pane_fp_t3_ParamLimits

0xd9bf,	// (0x00043604) list_single_cale_day_pane_fp_t3

0x0002,

0xfb80,	// (0x000457c5) list_single_cale_day_pane_fp_t_ParamLimits

0xfb80,	// (0x000457c5) list_single_cale_day_pane_fp_t

0x5d1c,	// (0x0003b961) list_empty_pane_fp_g1_ParamLimits

0x5d1c,	// (0x0003b961) list_empty_pane_fp_g1

0xd9d8,	// (0x0004361d) list_empty_pane_fp_t1

0xedb0,	// (0x000449f5) list_empty_pane_fp_t2

0x0001,

0xfb87,	// (0x000457cc) list_empty_pane_fp_t

0x5d1c,	// (0x0003b961) list_single_heading_pane_fp_g1_ParamLimits

0x5d1c,	// (0x0003b961) list_single_heading_pane_fp_g1

0xd857,	// (0x0004349c) list_single_heading_pane_fp_g2_ParamLimits

0xd857,	// (0x0004349c) list_single_heading_pane_fp_g2

0xd863,	// (0x000434a8) list_single_heading_pane_fp_g3_ParamLimits

0xd863,	// (0x000434a8) list_single_heading_pane_fp_g3

0x0002,

0xfb8c,	// (0x000457d1) list_single_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x000457d1) list_single_heading_pane_fp_g

0xedbe,	// (0x00044a03) list_single_heading_pane_fp_t1_ParamLimits

0xedbe,	// (0x00044a03) list_single_heading_pane_fp_t1

0xedd0,	// (0x00044a15) list_single_heading_pane_fp_t2_ParamLimits

0xedd0,	// (0x00044a15) list_single_heading_pane_fp_t2

0x0001,

0xfb93,	// (0x000457d8) list_single_heading_pane_fp_t_ParamLimits

0xfb93,	// (0x000457d8) list_single_heading_pane_fp_t

0xef3a,	// (0x00044b7f) aid_size_cell_fast

0xbac2,	// (0x00041707) soft_indicator_pane_cp1_t1

0xef77,	// (0x00044bbc) cell_app_pane_cp2_ParamLimits

0xef77,	// (0x00044bbc) cell_app_pane_cp2

0x0fbd,	// (0x00036c02) fep_hwr_candidate_drop_down_list_pane

0x11ab,	// (0x00036df0) fep_hwr_candidate_pane_g3_ParamLimits

0x11ab,	// (0x00036df0) fep_hwr_candidate_pane_g3

0xd84a,	// (0x0004348f) fep_hwr_candidate_pane_g4_ParamLimits

0xd84a,	// (0x0004348f) fep_hwr_candidate_pane_g4

0x0002,

0xfb02,	// (0x00045747) fep_hwr_candidate_pane_g_ParamLimits

0xfb02,	// (0x00045747) fep_hwr_candidate_pane_g

0x57ea,	// (0x0003b42f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x57ea,	// (0x0003b42f) fep_vkb_candidate_drop_down_list_pane

0x5c12,	// (0x0003b857) fep_vkb_candidate_pane_g3

0x5c1a,	// (0x0003b85f) fep_vkb_candidate_pane_g4

0x0002,

0xfb2f,	// (0x00045774) fep_vkb_candidate_pane_g

0x1216,	// (0x00036e5b) cell_hwr_candidate_pane_g1_ParamLimits

0x1224,	// (0x00036e69) cell_hwr_candidate_pane_g3_ParamLimits

0x1224,	// (0x00036e69) cell_hwr_candidate_pane_g3

0x6c70,	// (0x0003c8b5) cell_hwr_candidate_pane_g4_ParamLimits

0x6c70,	// (0x0003c8b5) cell_hwr_candidate_pane_g4

0x0002,

0xfb4e,	// (0x00045793) cell_hwr_candidate_pane_g_ParamLimits

0xfb4e,	// (0x00045793) cell_hwr_candidate_pane_g

0x5c31,	// (0x0003b876) cell_vkb_candidate_pane_g3_ParamLimits

0x5c31,	// (0x0003b876) cell_vkb_candidate_pane_g3

0x5c4c,	// (0x0003b891) cell_vkb_candidate_pane_g4_ParamLimits

0x5c4c,	// (0x0003b891) cell_vkb_candidate_pane_g4

0x5d40,	// (0x0003b985) cell_app_pane_cp2_g1_ParamLimits

0x5d40,	// (0x0003b985) cell_app_pane_cp2_g1

0x5d5e,	// (0x0003b9a3) cell_app_pane_cp2_g2_ParamLimits

0x5d5e,	// (0x0003b9a3) cell_app_pane_cp2_g2

0x0001,

0xfb98,	// (0x000457dd) cell_app_pane_cp2_g_ParamLimits

0xfb98,	// (0x000457dd) cell_app_pane_cp2_g

0x5d6a,	// (0x0003b9af) cell_app_pane_cp2_t1_ParamLimits

0x5d6a,	// (0x0003b9af) cell_app_pane_cp2_t1

0xbfee,	// (0x00041c33) grid_highlight_pane_cp1_ParamLimits

0xbfee,	// (0x00041c33) grid_highlight_pane_cp1

0x1263,	// (0x00036ea8) cell_hwr_candidate_pane_cp1_ParamLimits

0x1263,	// (0x00036ea8) cell_hwr_candidate_pane_cp1

0x1216,	// (0x00036e5b) fep_hwr_candidate_drop_down_list_pane_g1

0x1287,	// (0x00036ecc) fep_hwr_candidate_drop_down_list_pane_g2

0x1294,	// (0x00036ed9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x000457e2) fep_hwr_candidate_drop_down_list_pane_g

0x12a1,	// (0x00036ee6) fep_hwr_candidate_drop_down_list_scroll_pane

0x12aa,	// (0x00036eef) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x12aa,	// (0x00036eef) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x12b7,	// (0x00036efc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x12b7,	// (0x00036efc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x12c4,	// (0x00036f09) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x12c4,	// (0x00036f09) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x12d1,	// (0x00036f16) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x12d1,	// (0x00036f16) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x12ec,	// (0x00036f31) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x12ec,	// (0x00036f31) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1307,	// (0x00036f4c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1307,	// (0x00036f4c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1322,	// (0x00036f67) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1322,	// (0x00036f67) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x133d,	// (0x00036f82) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x133d,	// (0x00036f82) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba4,	// (0x000457e9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba4,	// (0x000457e9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5d7c,	// (0x0003b9c1) cell_vkb_candidate_pane_cp1_ParamLimits

0x5d7c,	// (0x0003b9c1) cell_vkb_candidate_pane_cp1

0x58f0,	// (0x0003b535) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x58f0,	// (0x0003b535) fep_vkb_candidate_drop_down_list_pane_g1

0x5da2,	// (0x0003b9e7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5da2,	// (0x0003b9e7) fep_vkb_candidate_drop_down_list_pane_g2

0x5daf,	// (0x0003b9f4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5daf,	// (0x0003b9f4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x000457fa) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb5,	// (0x000457fa) fep_vkb_candidate_drop_down_list_pane_g

0x5dbc,	// (0x0003ba01) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5dbc,	// (0x0003ba01) fep_vkb_candidate_drop_down_list_scroll_pane

0x5dc9,	// (0x0003ba0e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5dc9,	// (0x0003ba0e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5dd6,	// (0x0003ba1b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5dd6,	// (0x0003ba1b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5de2,	// (0x0003ba27) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5de2,	// (0x0003ba27) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5dee,	// (0x0003ba33) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5dee,	// (0x0003ba33) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5e0f,	// (0x0003ba54) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5e0f,	// (0x0003ba54) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5e30,	// (0x0003ba75) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5e30,	// (0x0003ba75) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5e51,	// (0x0003ba96) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5e51,	// (0x0003ba96) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5e72,	// (0x0003bab7) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5e72,	// (0x0003bab7) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x00045801) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x00045801) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x97e6,	// (0x0003f42b) title_pane_g1_ParamLimits

0x97f9,	// (0x0003f43e) title_pane_g2_ParamLimits

0xf529,	// (0x0004516e) title_pane_g_ParamLimits

0x21cf,	// (0x00037e14) aid_call2_pane

0x21d7,	// (0x00037e1c) aid_call_pane

0x21df,	// (0x00037e24) popup_clock_analogue_window_g1

0x21df,	// (0x00037e24) popup_clock_analogue_window_g2

0xf450,	// (0x00045095) popup_clock_analogue_window_g3

0xf459,	// (0x0004509e) popup_clock_analogue_window_g4

0xb946,	// (0x0004158b) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x00045318) popup_clock_analogue_window_g

0xf461,	// (0x000450a6) popup_clock_analogue_window_t1

0xf46f,	// (0x000450b4) clock_digital_number_pane_ParamLimits

0xf46f,	// (0x000450b4) clock_digital_number_pane

0xf47b,	// (0x000450c0) clock_digital_number_pane_cp02_ParamLimits

0xf47b,	// (0x000450c0) clock_digital_number_pane_cp02

0xf487,	// (0x000450cc) clock_digital_number_pane_cp03_ParamLimits

0xf487,	// (0x000450cc) clock_digital_number_pane_cp03

0xf493,	// (0x000450d8) clock_digital_number_pane_cp04_ParamLimits

0xf493,	// (0x000450d8) clock_digital_number_pane_cp04

0xf49f,	// (0x000450e4) clock_digital_separator_pane_ParamLimits

0xf49f,	// (0x000450e4) clock_digital_separator_pane

0xf4ab,	// (0x000450f0) popup_clock_digital_window_t1_ParamLimits

0xf4ab,	// (0x000450f0) popup_clock_digital_window_t1

0xb946,	// (0x0004158b) clock_digital_number_pane_g1

0xb946,	// (0x0004158b) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x00045323) clock_digital_number_pane_g

0xb946,	// (0x0004158b) clock_digital_separator_pane_g1

0xb946,	// (0x0004158b) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x00045323) clock_digital_separator_pane_g

0xc08e,	// (0x00041cd3) aid_fill_nsta_ParamLimits

0xc1c6,	// (0x00041e0b) indicator_nsta_pane_ParamLimits

0x2e37,	// (0x00038a7c) popup_clock_analogue_window

0x2e37,	// (0x00038a7c) popup_clock_digital_window

0xca64,	// (0x000426a9) grid_indicator_nsta_pane_ParamLimits

0x50be,	// (0x0003ad03) clock_nsta_pane_t2

0x0001,

0xfa82,	// (0x000456c7) clock_nsta_pane_t

0xf29d,	// (0x00044ee2) aid_size_max_handle

0xa258,	// (0x0003fe9d) aid_size_min_handle

0x27f7,	// (0x0003843c) editor_scroll_pane

0x5e8d,	// (0x0003bad2) ex_editor_pane

0xef00,	// (0x00044b45) scroll_pane_cp13

0xbf8d,	// (0x00041bd2) scroll_pane_cp14

0x220e,	// (0x00037e53) scroll_pane_cp36

0xa2e5,	// (0x0003ff2a) list_single_graphic_hl_pane_cp2_ParamLimits

0xa2e5,	// (0x0003ff2a) list_single_graphic_hl_pane_cp2

0xc8f1,	// (0x00042536) list_single_graphic_hl_pane_ParamLimits

0xc8f1,	// (0x00042536) list_single_graphic_hl_pane

0xede6,	// (0x00044a2b) aid_size_min_hl_cp1

0x5e95,	// (0x0003bada) list_highlight_pane_cp34_ParamLimits

0x5e95,	// (0x0003bada) list_highlight_pane_cp34

0x5ea6,	// (0x0003baeb) list_single_graphic_hl_pane_g1_ParamLimits

0x5ea6,	// (0x0003baeb) list_single_graphic_hl_pane_g1

0xb141,	// (0x00040d86) list_single_graphic_hl_pane_g2_ParamLimits

0xb141,	// (0x00040d86) list_single_graphic_hl_pane_g2

0xb141,	// (0x00040d86) list_single_graphic_hl_pane_g3_ParamLimits

0xb141,	// (0x00040d86) list_single_graphic_hl_pane_g3

0xd9e6,	// (0x0004362b) list_single_graphic_hl_pane_g4_ParamLimits

0xd9e6,	// (0x0004362b) list_single_graphic_hl_pane_g4

0xb14d,	// (0x00040d92) list_single_graphic_hl_pane_g5_ParamLimits

0xb14d,	// (0x00040d92) list_single_graphic_hl_pane_g5

0x0004,

0xfbcd,	// (0x00045812) list_single_graphic_hl_pane_g_ParamLimits

0xfbcd,	// (0x00045812) list_single_graphic_hl_pane_g

0xb161,	// (0x00040da6) list_single_graphic_hl_pane_t1_ParamLimits

0xb161,	// (0x00040da6) list_single_graphic_hl_pane_t1

0x5eb3,	// (0x0003baf8) aid_size_min_hl_cp2

0x5ebc,	// (0x0003bb01) list_highlight_pane_cp34_cp2_ParamLimits

0x5ebc,	// (0x0003bb01) list_highlight_pane_cp34_cp2

0x5ea6,	// (0x0003baeb) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5ea6,	// (0x0003baeb) list_single_graphic_hl_pane_g1_cp2

0x5ec9,	// (0x0003bb0e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5ec9,	// (0x0003bb0e) list_single_graphic_hl_pane_g2_cp2

0x5ed5,	// (0x0003bb1a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5ed5,	// (0x0003bb1a) list_single_graphic_hl_pane_g3_cp2

0x537b,	// (0x0003afc0) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x537b,	// (0x0003afc0) list_single_graphic_hl_pane_g4_cp2

0x5ee3,	// (0x0003bb28) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5ee3,	// (0x0003bb28) list_single_graphic_hl_pane_g5_cp2

0xa633,	// (0x00040278) control_pane_g4_ParamLimits

0xa633,	// (0x00040278) control_pane_g4

0x2b1e,	// (0x00038763) bg_popup_sub_pane_cp10_ParamLimits

0x567f,	// (0x0003b2c4) list_choice_list_pane_ParamLimits

0x568e,	// (0x0003b2d3) scroll_pane_cp23

0xbadf,	// (0x00041724) bg_popup_preview_window_pane_cp02_ParamLimits

0x5cbd,	// (0x0003b902) list_preview_fixed_pane_ParamLimits

0x5cd3,	// (0x0003b918) list_preview_fixed_pane_cp_ParamLimits

0x5cd3,	// (0x0003b918) list_preview_fixed_pane_cp

0x5cdf,	// (0x0003b924) popup_preview_fixed_window_g1_ParamLimits

0x5cdf,	// (0x0003b924) popup_preview_fixed_window_g1

0x5ceb,	// (0x0003b930) popup_preview_fixed_window_g2_ParamLimits

0x5ceb,	// (0x0003b930) popup_preview_fixed_window_g2

0x0002,

0xfb55,	// (0x0004579a) popup_preview_fixed_window_g_ParamLimits

0xfb55,	// (0x0004579a) popup_preview_fixed_window_g

0xf1d8,	// (0x00044e1d) aid_navi_side_left_pane_ParamLimits

0xf1ed,	// (0x00044e32) aid_navi_side_right_pane_ParamLimits

0xf205,	// (0x00044e4a) navi_icon_pane_stacon_ParamLimits

0xf219,	// (0x00044e5e) navi_navi_pane_stacon_ParamLimits

0xf205,	// (0x00044e4a) navi_text_pane_stacon_ParamLimits

0xeb90,	// (0x000447d5) main_text_info_pane

0x5f0d,	// (0x0003bb52) listscroll_text_info_pane

0x5f15,	// (0x0003bb5a) list_text_info_pane_ParamLimits

0x5f15,	// (0x0003bb5a) list_text_info_pane

0x5f24,	// (0x0003bb69) scroll_pane_cp24_ParamLimits

0x5f24,	// (0x0003bb69) scroll_pane_cp24

0xcdcf,	// (0x00042a14) list_text_info_pane_t1_ParamLimits

0xcdcf,	// (0x00042a14) list_text_info_pane_t1

0xa7b5,	// (0x000403fa) popup_fast_swap2_window_ParamLimits

0xa7b5,	// (0x000403fa) popup_fast_swap2_window

0x5f67,	// (0x0003bbac) aid_size_cell_fast2

0xb93c,	// (0x00041581) bg_popup_window_pane_cp17

0x348a,	// (0x000390cf) heading_pane_cp2

0x3492,	// (0x000390d7) listscroll_fast2_pane

0x5f71,	// (0x0003bbb6) grid_fast2_pane

0x5f7b,	// (0x0003bbc0) listscroll_fast2_pane_g1

0x5f85,	// (0x0003bbca) listscroll_fast2_pane_g2

0x0001,

0xfbd8,	// (0x0004581d) listscroll_fast2_pane_g

0xef00,	// (0x00044b45) scroll_pane_cp26

0x5f8f,	// (0x0003bbd4) cell_fast2_pane_ParamLimits

0x5f8f,	// (0x0003bbd4) cell_fast2_pane

0x5fa6,	// (0x0003bbeb) cell_fast2_pane_g1

0x5faf,	// (0x0003bbf4) cell_fast2_pane_g2

0x5fb8,	// (0x0003bbfd) cell_fast2_pane_g3

0x0002,

0xfbdd,	// (0x00045822) cell_fast2_pane_g

0xbd54,	// (0x00041999) grid_highlight_pane_cp9

0x03e0,	// (0x00036025) main_eswt_pane_ParamLimits

0x03e0,	// (0x00036025) main_eswt_pane

0x5f39,	// (0x0003bb7e) list_single_text_info_pane

0x5fc0,	// (0x0003bc05) eswt_ctrl_button_pane

0x5fc0,	// (0x0003bc05) eswt_ctrl_canvas_pane

0x5fc8,	// (0x0003bc0d) eswt_ctrl_combo_pane

0x5fc0,	// (0x0003bc05) eswt_ctrl_default_pane

0x5fc0,	// (0x0003bc05) eswt_ctrl_label_pane

0x5fd0,	// (0x0003bc15) eswt_ctrl_wait_pane

0x5fd8,	// (0x0003bc1d) eswt_shell_pane

0xb93c,	// (0x00041581) listscroll_eswt_app_pane

0x5ff8,	// (0x0003bc3d) popup_eswt_tasktip_window_ParamLimits

0x5ff8,	// (0x0003bc3d) popup_eswt_tasktip_window

0x30c8,	// (0x00038d0d) bg_popup_window_pane_cp18

0x6009,	// (0x0003bc4e) eswt_control_pane_g1_ParamLimits

0x6009,	// (0x0003bc4e) eswt_control_pane_g1

0x6016,	// (0x0003bc5b) eswt_control_pane_g2_ParamLimits

0x6016,	// (0x0003bc5b) eswt_control_pane_g2

0x6023,	// (0x0003bc68) eswt_control_pane_g3_ParamLimits

0x6023,	// (0x0003bc68) eswt_control_pane_g3

0x6030,	// (0x0003bc75) eswt_control_pane_g4_ParamLimits

0x6030,	// (0x0003bc75) eswt_control_pane_g4

0x0003,

0xfbe4,	// (0x00045829) eswt_control_pane_g_ParamLimits

0xfbe4,	// (0x00045829) eswt_control_pane_g

0xbfee,	// (0x00041c33) bg_button_pane_ParamLimits

0xbfee,	// (0x00041c33) bg_button_pane

0xbd69,	// (0x000419ae) common_borders_pane_copy2_ParamLimits

0xbd69,	// (0x000419ae) common_borders_pane_copy2

0x603d,	// (0x0003bc82) control_button_pane_g1_ParamLimits

0x603d,	// (0x0003bc82) control_button_pane_g1

0x6049,	// (0x0003bc8e) control_button_pane_g2_ParamLimits

0x6049,	// (0x0003bc8e) control_button_pane_g2

0x6055,	// (0x0003bc9a) control_button_pane_g3_ParamLimits

0x6055,	// (0x0003bc9a) control_button_pane_g3

0x0002,

0xfbed,	// (0x00045832) control_button_pane_g_ParamLimits

0xfbed,	// (0x00045832) control_button_pane_g

0x6069,	// (0x0003bcae) control_button_pane_t1

0x6077,	// (0x0003bcbc) control_button_pane_t2

0x0001,

0xfbf4,	// (0x00045839) control_button_pane_t

0x3054,	// (0x00038c99) bg_button_pane_g1

0x3064,	// (0x00038ca9) bg_button_pane_g2

0x305c,	// (0x00038ca1) bg_button_pane_g3

0x3074,	// (0x00038cb9) bg_button_pane_g4

0x306c,	// (0x00038cb1) bg_button_pane_g5

0x307c,	// (0x00038cc1) bg_button_pane_g6

0x3084,	// (0x00038cc9) bg_button_pane_g7

0x3094,	// (0x00038cd9) bg_button_pane_g8

0x308c,	// (0x00038cd1) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00045481) bg_button_pane_g

0x563a,	// (0x0003b27f) common_borders_pane_ParamLimits

0x563a,	// (0x0003b27f) common_borders_pane

0x6009,	// (0x0003bc4e) eswt_control_pane_g1_copy1_ParamLimits

0x6009,	// (0x0003bc4e) eswt_control_pane_g1_copy1

0x6016,	// (0x0003bc5b) eswt_control_pane_g2_copy1_ParamLimits

0x6016,	// (0x0003bc5b) eswt_control_pane_g2_copy1

0x6023,	// (0x0003bc68) eswt_control_pane_g3_copy1_ParamLimits

0x6023,	// (0x0003bc68) eswt_control_pane_g3_copy1

0x6030,	// (0x0003bc75) eswt_control_pane_g4_copy1_ParamLimits

0x6030,	// (0x0003bc75) eswt_control_pane_g4_copy1

0x5675,	// (0x0003b2ba) bg_eswt_ctrl_canvas_pane_g1

0x563a,	// (0x0003b27f) common_borders_pane_cp2_ParamLimits

0x563a,	// (0x0003b27f) common_borders_pane_cp2

0x563a,	// (0x0003b27f) common_borders_pane_cp3_ParamLimits

0x563a,	// (0x0003b27f) common_borders_pane_cp3

0x6085,	// (0x0003bcca) separator_horizontal_pane

0x608d,	// (0x0003bcd2) separator_vertical_pane

0x6009,	// (0x0003bc4e) eswt_control_pane_g1_copy2_ParamLimits

0x6009,	// (0x0003bc4e) eswt_control_pane_g1_copy2

0x6016,	// (0x0003bc5b) eswt_control_pane_g2_copy2_ParamLimits

0x6016,	// (0x0003bc5b) eswt_control_pane_g2_copy2

0x6023,	// (0x0003bc68) eswt_control_pane_g3_copy2_ParamLimits

0x6023,	// (0x0003bc68) eswt_control_pane_g3_copy2

0x6030,	// (0x0003bc75) eswt_control_pane_g4_copy2_ParamLimits

0x6030,	// (0x0003bc75) eswt_control_pane_g4_copy2

0xb93c,	// (0x00041581) common_borders_pane_cp4

0x6096,	// (0x0003bcdb) separator_horizontal_pane_g1

0x609f,	// (0x0003bce4) separator_horizontal_pane_g2

0x60a8,	// (0x0003bced) separator_horizontal_pane_g3

0x0002,

0xfbf9,	// (0x0004583e) separator_horizontal_pane_g

0x6009,	// (0x0003bc4e) eswt_control_pane_g1_copy3_ParamLimits

0x6009,	// (0x0003bc4e) eswt_control_pane_g1_copy3

0x6016,	// (0x0003bc5b) eswt_control_pane_g2_copy3_ParamLimits

0x6016,	// (0x0003bc5b) eswt_control_pane_g2_copy3

0x6023,	// (0x0003bc68) eswt_control_pane_g3_copy3_ParamLimits

0x6023,	// (0x0003bc68) eswt_control_pane_g3_copy3

0x6030,	// (0x0003bc75) eswt_control_pane_g4_copy3_ParamLimits

0x6030,	// (0x0003bc75) eswt_control_pane_g4_copy3

0xb93c,	// (0x00041581) common_borders_pane_cp5

0x60b1,	// (0x0003bcf6) separator_vertical_pane_g1

0x60ba,	// (0x0003bcff) separator_vertical_pane_g2

0x60c3,	// (0x0003bd08) separator_vertical_pane_g3

0x0002,

0xfc00,	// (0x00045845) separator_vertical_pane_g

0x6009,	// (0x0003bc4e) eswt_control_pane_g1_copy4_ParamLimits

0x6009,	// (0x0003bc4e) eswt_control_pane_g1_copy4

0x6016,	// (0x0003bc5b) eswt_control_pane_g2_copy4_ParamLimits

0x6016,	// (0x0003bc5b) eswt_control_pane_g2_copy4

0x6023,	// (0x0003bc68) eswt_control_pane_g3_copy4_ParamLimits

0x6023,	// (0x0003bc68) eswt_control_pane_g3_copy4

0x6030,	// (0x0003bc75) eswt_control_pane_g4_copy4_ParamLimits

0x6030,	// (0x0003bc75) eswt_control_pane_g4_copy4

0xcdf1,	// (0x00042a36) eswt_ctrl_combo_button_pane

0xcdf9,	// (0x00042a3e) eswt_ctrl_input_pane

0xce01,	// (0x00042a46) popup_choice_list_window_cp70

0xce09,	// (0x00042a4e) eswt_ctrl_input_pane_t1

0xb93c,	// (0x00041581) input_focus_pane_cp70

0x563a,	// (0x0003b27f) bg_button_pane_cp70_ParamLimits

0x563a,	// (0x0003b27f) bg_button_pane_cp70

0xce17,	// (0x00042a5c) eswt_ctrl_combo_button_pane_g1

0x60fa,	// (0x0003bd3f) wait_bar_pane_cp70

0x30c8,	// (0x00038d0d) bg_popup_window_pane_cp70_ParamLimits

0x30c8,	// (0x00038d0d) bg_popup_window_pane_cp70

0x6102,	// (0x0003bd47) popup_eswt_tasktip_window_t1

0x6118,	// (0x0003bd5d) wait_bar_pane_cp71_ParamLimits

0x6118,	// (0x0003bd5d) wait_bar_pane_cp71

0x6124,	// (0x0003bd69) grid_eswt_app_pane

0xf2ef,	// (0x00044f34) scroll_pane_cp70

0xce1f,	// (0x00042a64) cell_eswt_app_pane_ParamLimits

0xce1f,	// (0x00042a64) cell_eswt_app_pane

0xce51,	// (0x00042a96) cell_eswt_app_pane_g1_ParamLimits

0xce51,	// (0x00042a96) cell_eswt_app_pane_g1

0xce80,	// (0x00042ac5) cell_eswt_app_pane_g2_ParamLimits

0xce80,	// (0x00042ac5) cell_eswt_app_pane_g2

0x0001,

0xfc07,	// (0x0004584c) cell_eswt_app_pane_g_ParamLimits

0xfc07,	// (0x0004584c) cell_eswt_app_pane_g

0xcea9,	// (0x00042aee) cell_eswt_app_pane_t1_ParamLimits

0xcea9,	// (0x00042aee) cell_eswt_app_pane_t1

0x61e9,	// (0x0003be2e) grid_highlight_pane_cp70_ParamLimits

0x61e9,	// (0x0003be2e) grid_highlight_pane_cp70

0x26c8,	// (0x0003830d) set_content_pane_g1

0xa5c5,	// (0x0004020a) status_small_volume_pane

0x138e,	// (0x00036fd3) status_small_volume_pane_g1

0x1396,	// (0x00036fdb) volume_small2_pane

0x139f,	// (0x00036fe4) volume_small2_pane_g1

0x13a8,	// (0x00036fed) volume_small2_pane_g2

0x13b1,	// (0x00036ff6) volume_small2_pane_g3

0x13ba,	// (0x00036fff) volume_small2_pane_g4

0x13c3,	// (0x00037008) volume_small2_pane_g5

0x13cc,	// (0x00037011) volume_small2_pane_g6

0x13d5,	// (0x0003701a) volume_small2_pane_g7

0x13de,	// (0x00037023) volume_small2_pane_g8

0x13e7,	// (0x0003702c) volume_small2_pane_g9

0x13f0,	// (0x00037035) volume_small2_pane_g10

0x0009,

0xfc0c,	// (0x00045851) volume_small2_pane_g

0x5a44,	// (0x0003b689) fep_vkb_top_text_pane_g1_ParamLimits

0xcd77,	// (0x000429bc) fep_vkb_top_text_pane_t1_ParamLimits

0x5cf7,	// (0x0003b93c) popup_preview_fixed_window_g3_ParamLimits

0x5cf7,	// (0x0003b93c) popup_preview_fixed_window_g3

0xae53,	// (0x00040a98) popup_toolbar_trans_pane

0xc72b,	// (0x00042370) aid_height_set_list_ParamLimits

0x4431,	// (0x0003a076) aid_size_parent_ParamLimits

0x2b1e,	// (0x00038763) list_highlight_pane_cp2_ParamLimits

0x26c8,	// (0x0003830d) set_content_pane_g1_ParamLimits

0xc905,	// (0x0004254a) list_single_image_pane_ParamLimits

0xc905,	// (0x0004254a) list_single_image_pane

0xcedb,	// (0x00042b20) aid_size_cell_image_ParamLimits

0xcedb,	// (0x00042b20) aid_size_cell_image

0xcee8,	// (0x00042b2d) grid_single_image_pane_ParamLimits

0xcee8,	// (0x00042b2d) grid_single_image_pane

0xbffc,	// (0x00041c41) list_single_image_pane_g1_ParamLimits

0xbffc,	// (0x00041c41) list_single_image_pane_g1

0xc008,	// (0x00041c4d) list_single_image_pane_g2_ParamLimits

0xc008,	// (0x00041c4d) list_single_image_pane_g2

0x0001,

0xfc21,	// (0x00045866) list_single_image_pane_g_ParamLimits

0xfc21,	// (0x00045866) list_single_image_pane_g

0x6210,	// (0x0003be55) list_single_image_pane_t1_ParamLimits

0x6210,	// (0x0003be55) list_single_image_pane_t1

0xcef6,	// (0x00042b3b) cell_image_list_pane_ParamLimits

0xcef6,	// (0x00042b3b) cell_image_list_pane

0xcf0c,	// (0x00042b51) cell_image_list_pane_g1

0xcf15,	// (0x00042b5a) cell_image_list_pane_g2

0x0001,

0xfc26,	// (0x0004586b) cell_image_list_pane_g

0x6250,	// (0x0003be95) aid_size_cell_tb_trans_pane

0xbfee,	// (0x00041c33) bg_tb_trans_pane

0x6262,	// (0x0003bea7) grid_tb_trans_pane

0x3054,	// (0x00038c99) bg_tb_trans_pane_g1

0x3064,	// (0x00038ca9) bg_tb_trans_pane_g2

0x305c,	// (0x00038ca1) bg_tb_trans_pane_g3

0x3074,	// (0x00038cb9) bg_tb_trans_pane_g4

0x306c,	// (0x00038cb1) bg_tb_trans_pane_g5

0x3094,	// (0x00038cd9) bg_tb_trans_pane_g6

0x308c,	// (0x00038cd1) bg_tb_trans_pane_g7

0x307c,	// (0x00038cc1) bg_tb_trans_pane_g8

0x3084,	// (0x00038cc9) bg_tb_trans_pane_g9

0x0008,

0xfc2b,	// (0x00045870) bg_tb_trans_pane_g

0x6276,	// (0x0003bebb) cell_toolbar_trans_pane_ParamLimits

0x6276,	// (0x0003bebb) cell_toolbar_trans_pane

0x5675,	// (0x0003b2ba) cell_toolbar_trans_pane_g1

0xcb47,	// (0x0004278c) list_form2_midp_pane_t1

0xcb55,	// (0x0004279a) list_form2_midp_pane_t2

0x0001,

0xfac8,	// (0x0004570d) list_form2_midp_pane_t

0x52bd,	// (0x0003af02) scroll_pane_cp51_ParamLimits

0x5490,	// (0x0003b0d5) form2_midp_wait_pane_g1

0x5499,	// (0x0003b0de) form2_midp_wait_pane_g2

0x54a2,	// (0x0003b0e7) form2_midp_wait_pane_g3

0x0002,

0xfadd,	// (0x00045722) form2_midp_wait_pane_g

0xb9ac,	// (0x000415f1) list_highlight_pane_cp21_ParamLimits

0x54db,	// (0x0003b120) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x54ea,	// (0x0003b12f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x461a,	// (0x0003a25f) list_single_2graphic_im_pane_ParamLimits

0x461a,	// (0x0003a25f) list_single_2graphic_im_pane

0xcf1e,	// (0x00042b63) list_single_2graphic_im_pane_g1_ParamLimits

0xcf1e,	// (0x00042b63) list_single_2graphic_im_pane_g1

0xcf2f,	// (0x00042b74) list_single_2graphic_im_pane_g2_ParamLimits

0xcf2f,	// (0x00042b74) list_single_2graphic_im_pane_g2

0xcf3b,	// (0x00042b80) list_single_2graphic_im_pane_g3_ParamLimits

0xcf3b,	// (0x00042b80) list_single_2graphic_im_pane_g3

0x0003,

0xfc3e,	// (0x00045883) list_single_2graphic_im_pane_g_ParamLimits

0xfc3e,	// (0x00045883) list_single_2graphic_im_pane_g

0xcf4f,	// (0x00042b94) list_single_2graphic_im_pane_t1_ParamLimits

0xcf4f,	// (0x00042b94) list_single_2graphic_im_pane_t1

0x5d03,	// (0x0003b948) list_single_graphic_2heading_pane_fp_ParamLimits

0x5d03,	// (0x0003b948) list_single_graphic_2heading_pane_fp

0xd88e,	// (0x000434d3) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd88e,	// (0x000434d3) list_single_graphic_2heading_pane_fp_g1

0x5d1c,	// (0x0003b961) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5d1c,	// (0x0003b961) list_single_graphic_2heading_pane_fp_g2

0xd857,	// (0x0004349c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd857,	// (0x0004349c) list_single_graphic_2heading_pane_fp_g3

0xd863,	// (0x000434a8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd863,	// (0x000434a8) list_single_graphic_2heading_pane_fp_g4

0x5d28,	// (0x0003b96d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5d28,	// (0x0003b96d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb65,	// (0x000457aa) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb65,	// (0x000457aa) list_single_graphic_2heading_pane_fp_g

0xedef,	// (0x00044a34) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xedef,	// (0x00044a34) list_single_graphic_2heading_pane_fp_t1

0xd8c6,	// (0x0004350b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd8c6,	// (0x0004350b) list_single_graphic_2heading_pane_fp_t2

0xee05,	// (0x00044a4a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xee05,	// (0x00044a4a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc47,	// (0x0004588c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc47,	// (0x0004588c) list_single_graphic_2heading_pane_fp_t

0x5706,	// (0x0003b34b) fep_hwr_write_pane_g5_ParamLimits

0x5706,	// (0x0003b34b) fep_hwr_write_pane_g5

0x5712,	// (0x0003b357) fep_hwr_write_pane_g6_ParamLimits

0x5712,	// (0x0003b357) fep_hwr_write_pane_g6

0x5fd8,	// (0x0003bc1d) eswt_shell_pane_ParamLimits

0x30c8,	// (0x00038d0d) bg_popup_window_pane_cp18_ParamLimits

0x4377,	// (0x00039fbc) heading_pane_cp70

0x6102,	// (0x0003bd47) popup_eswt_tasktip_window_t1_ParamLimits

0xc0eb,	// (0x00041d30) aid_touch_tab_arrow_left

0xc101,	// (0x00041d46) aid_touch_tab_arrow_right

0x981d,	// (0x0003f462) title_pane_g3_ParamLimits

0x981d,	// (0x0003f462) title_pane_g3

0xbfad,	// (0x00041bf2) set_value_pane_g1

0xae53,	// (0x00040a98) popup_toolbar_trans_pane_ParamLimits

0x6250,	// (0x0003be95) aid_size_cell_tb_trans_pane_ParamLimits

0xbfee,	// (0x00041c33) bg_tb_trans_pane_ParamLimits

0x6262,	// (0x0003bea7) grid_tb_trans_pane_ParamLimits

0xbadf,	// (0x00041724) cont_note_pane_ParamLimits

0xbadf,	// (0x00041724) cont_note_pane

0xbd69,	// (0x000419ae) cont_snote2_single_text_pane_ParamLimits

0xbd69,	// (0x000419ae) cont_snote2_single_text_pane

0xbd69,	// (0x000419ae) cont_snote2_single_graphic_pane_ParamLimits

0xbd69,	// (0x000419ae) cont_snote2_single_graphic_pane

0x36ba,	// (0x000392ff) cont_note_wait_pane_ParamLimits

0x36ba,	// (0x000392ff) cont_note_wait_pane

0x36ba,	// (0x000392ff) cont_note_image_pane_ParamLimits

0x36ba,	// (0x000392ff) cont_note_image_pane

0x630a,	// (0x0003bf4f) popup_note2_window_g1_ParamLimits

0x630a,	// (0x0003bf4f) popup_note2_window_g1

0x633b,	// (0x0003bf80) popup_note2_window_t1_ParamLimits

0x633b,	// (0x0003bf80) popup_note2_window_t1

0x6380,	// (0x0003bfc5) popup_note2_window_t2_ParamLimits

0x6380,	// (0x0003bfc5) popup_note2_window_t2

0x63c5,	// (0x0003c00a) popup_note2_window_t3_ParamLimits

0x63c5,	// (0x0003c00a) popup_note2_window_t3

0x640a,	// (0x0003c04f) popup_note2_window_t4_ParamLimits

0x640a,	// (0x0003c04f) popup_note2_window_t4

0xbb63,	// (0x000417a8) popup_note2_window_t5_ParamLimits

0xbb63,	// (0x000417a8) popup_note2_window_t5

0x0004,

0xfc53,	// (0x00045898) popup_note2_window_t_ParamLimits

0xfc53,	// (0x00045898) popup_note2_window_t

0x6439,	// (0x0003c07e) popup_note2_image_window_g1_ParamLimits

0x6439,	// (0x0003c07e) popup_note2_image_window_g1

0x6445,	// (0x0003c08a) popup_note2_image_window_g2_ParamLimits

0x6445,	// (0x0003c08a) popup_note2_image_window_g2

0x0001,

0xfc5e,	// (0x000458a3) popup_note2_image_window_g_ParamLimits

0xfc5e,	// (0x000458a3) popup_note2_image_window_g

0x6457,	// (0x0003c09c) popup_note2_image_window_t1_ParamLimits

0x6457,	// (0x0003c09c) popup_note2_image_window_t1

0x646f,	// (0x0003c0b4) popup_note2_image_window_t2_ParamLimits

0x646f,	// (0x0003c0b4) popup_note2_image_window_t2

0x6487,	// (0x0003c0cc) popup_note2_image_window_t3_ParamLimits

0x6487,	// (0x0003c0cc) popup_note2_image_window_t3

0x0002,

0xfc63,	// (0x000458a8) popup_note2_image_window_t_ParamLimits

0xfc63,	// (0x000458a8) popup_note2_image_window_t

0x36c8,	// (0x0003930d) popup_note2_wait_window_g1_ParamLimits

0x36c8,	// (0x0003930d) popup_note2_wait_window_g1

0x64a3,	// (0x0003c0e8) popup_note2_wait_window_g2_ParamLimits

0x64a3,	// (0x0003c0e8) popup_note2_wait_window_g2

0x36e0,	// (0x00039325) popup_note2_wait_window_g3_ParamLimits

0x36e0,	// (0x00039325) popup_note2_wait_window_g3

0x0002,

0xfc6a,	// (0x000458af) popup_note2_wait_window_g_ParamLimits

0xfc6a,	// (0x000458af) popup_note2_wait_window_g

0x64af,	// (0x0003c0f4) popup_note2_wait_window_t1_ParamLimits

0x64af,	// (0x0003c0f4) popup_note2_wait_window_t1

0x64cd,	// (0x0003c112) popup_note2_wait_window_t2_ParamLimits

0x64cd,	// (0x0003c112) popup_note2_wait_window_t2

0x64eb,	// (0x0003c130) popup_note2_wait_window_t3_ParamLimits

0x64eb,	// (0x0003c130) popup_note2_wait_window_t3

0x64fd,	// (0x0003c142) popup_note2_wait_window_t4_ParamLimits

0x64fd,	// (0x0003c142) popup_note2_wait_window_t4

0x0003,

0xfc71,	// (0x000458b6) popup_note2_wait_window_t_ParamLimits

0xfc71,	// (0x000458b6) popup_note2_wait_window_t

0x650f,	// (0x0003c154) wait_bar2_pane_ParamLimits

0x650f,	// (0x0003c154) wait_bar2_pane

0x6527,	// (0x0003c16c) popup_snote2_single_text_window_g1_ParamLimits

0x6527,	// (0x0003c16c) popup_snote2_single_text_window_g1

0x654f,	// (0x0003c194) popup_snote2_single_text_window_t1_ParamLimits

0x654f,	// (0x0003c194) popup_snote2_single_text_window_t1

0x659b,	// (0x0003c1e0) popup_snote2_single_text_window_t2_ParamLimits

0x659b,	// (0x0003c1e0) popup_snote2_single_text_window_t2

0x65e7,	// (0x0003c22c) popup_snote2_single_text_window_t3_ParamLimits

0x65e7,	// (0x0003c22c) popup_snote2_single_text_window_t3

0x6628,	// (0x0003c26d) popup_snote2_single_text_window_t4_ParamLimits

0x6628,	// (0x0003c26d) popup_snote2_single_text_window_t4

0x665e,	// (0x0003c2a3) popup_snote2_single_text_window_t5_ParamLimits

0x665e,	// (0x0003c2a3) popup_snote2_single_text_window_t5

0x0004,

0xfc7a,	// (0x000458bf) popup_snote2_single_text_window_t_ParamLimits

0xfc7a,	// (0x000458bf) popup_snote2_single_text_window_t

0x6689,	// (0x0003c2ce) popup_snote2_single_graphic_window_g1_ParamLimits

0x6689,	// (0x0003c2ce) popup_snote2_single_graphic_window_g1

0x66b1,	// (0x0003c2f6) popup_snote2_single_graphic_window_g2_ParamLimits

0x66b1,	// (0x0003c2f6) popup_snote2_single_graphic_window_g2

0x0001,

0xfc85,	// (0x000458ca) popup_snote2_single_graphic_window_g_ParamLimits

0xfc85,	// (0x000458ca) popup_snote2_single_graphic_window_g

0x66d9,	// (0x0003c31e) popup_snote2_single_graphic_window_t1_ParamLimits

0x66d9,	// (0x0003c31e) popup_snote2_single_graphic_window_t1

0x6725,	// (0x0003c36a) popup_snote2_single_graphic_window_t2_ParamLimits

0x6725,	// (0x0003c36a) popup_snote2_single_graphic_window_t2

0x65e7,	// (0x0003c22c) popup_snote2_single_graphic_window_t3_ParamLimits

0x65e7,	// (0x0003c22c) popup_snote2_single_graphic_window_t3

0x6628,	// (0x0003c26d) popup_snote2_single_graphic_window_t4_ParamLimits

0x6628,	// (0x0003c26d) popup_snote2_single_graphic_window_t4

0x665e,	// (0x0003c2a3) popup_snote2_single_graphic_window_t5_ParamLimits

0x665e,	// (0x0003c2a3) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8a,	// (0x000458cf) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8a,	// (0x000458cf) popup_snote2_single_graphic_window_t

0x516d,	// (0x0003adb2) clock_nsta_pane_cp2_t1

0x516d,	// (0x0003adb2) clock_nsta_pane_cp2_t2

0x0001,

0xfa9e,	// (0x000456e3) clock_nsta_pane_cp2_t

0xd375,	// (0x00042fba) form_field_data_wide_pane_g1_ParamLimits

0xbffc,	// (0x00041c41) form_field_data_wide_pane_g2_ParamLimits

0xbffc,	// (0x00041c41) form_field_data_wide_pane_g2

0xc008,	// (0x00041c4d) form_field_data_wide_pane_g3_ParamLimits

0xc008,	// (0x00041c4d) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0004529b) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0004529b) form_field_data_wide_pane_g

0xca4e,	// (0x00042693) grid_touch_3_pane_ParamLimits

0xca4e,	// (0x00042693) grid_touch_3_pane

0xcf80,	// (0x00042bc5) cell_touch_3_pane_ParamLimits

0xcf80,	// (0x00042bc5) cell_touch_3_pane

0x5675,	// (0x0003b2ba) cell_touch_3_pane_g1

0x5675,	// (0x0003b2ba) cell_touch_3_pane_g2

0x0001,

0xfb23,	// (0x00045768) cell_touch_3_pane_g

0xbbbb,	// (0x00041800) cont_query_data_pane

0xbbc3,	// (0x00041808) cont_query_data_pane_cp1

0x67a4,	// (0x0003c3e9) button_value_adjust_pane_cp7

0x67ac,	// (0x0003c3f1) query_popup_pane_cp3

0x22c7,	// (0x00037f0c) bg_popup_sub_pane_cp22_ParamLimits

0xf4ca,	// (0x0004510f) navi_navi_volume_pane_cp2

0xf4e5,	// (0x0004512a) popup_side_volume_key_window_g2

0xf4f4,	// (0x00045139) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x00045331) popup_side_volume_key_window_g

0xf511,	// (0x00045156) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x00045338) popup_side_volume_key_window_t

0x2583,	// (0x000381c8) popup_side_volume_key_window_ParamLimits

0x9ce7,	// (0x0003f92c) list_double_graphic_pane_g4_ParamLimits

0x9ce7,	// (0x0003f92c) list_double_graphic_pane_g4

0xc8d9,	// (0x0004251e) list_single_2heading_msg_pane_ParamLimits

0xc8d9,	// (0x0004251e) list_single_2heading_msg_pane

0xb177,	// (0x00040dbc) list_single_2heading_msg_pane_g1_ParamLimits

0xb177,	// (0x00040dbc) list_single_2heading_msg_pane_g1

0xb183,	// (0x00040dc8) list_single_2heading_msg_pane_g2_ParamLimits

0xb183,	// (0x00040dc8) list_single_2heading_msg_pane_g2

0xb196,	// (0x00040ddb) list_single_2heading_msg_pane_g3_ParamLimits

0xb196,	// (0x00040ddb) list_single_2heading_msg_pane_g3

0xb1a2,	// (0x00040de7) list_single_2heading_msg_pane_g4_ParamLimits

0xb1a2,	// (0x00040de7) list_single_2heading_msg_pane_g4

0x0003,

0xfc95,	// (0x000458da) list_single_2heading_msg_pane_g_ParamLimits

0xfc95,	// (0x000458da) list_single_2heading_msg_pane_g

0xb1ba,	// (0x00040dff) list_single_2heading_msg_pane_t1_ParamLimits

0xb1ba,	// (0x00040dff) list_single_2heading_msg_pane_t1

0xb1e2,	// (0x00040e27) list_single_2heading_msg_pane_t2_ParamLimits

0xb1e2,	// (0x00040e27) list_single_2heading_msg_pane_t2

0xb24d,	// (0x00040e92) list_single_2heading_msg_pane_t3_ParamLimits

0xb24d,	// (0x00040e92) list_single_2heading_msg_pane_t3

0xee25,	// (0x00044a6a) list_single_2heading_msg_pane_t4_ParamLimits

0xee25,	// (0x00044a6a) list_single_2heading_msg_pane_t4

0x0003,

0xfc9e,	// (0x000458e3) list_single_2heading_msg_pane_t_ParamLimits

0xfc9e,	// (0x000458e3) list_single_2heading_msg_pane_t

0xb95a,	// (0x0004159f) title_pane_g4_ParamLimits

0xb95a,	// (0x0004159f) title_pane_g4

0xf100,	// (0x00044d45) title_pane_stacon_g3_ParamLimits

0xf100,	// (0x00044d45) title_pane_stacon_g3

0x62cd,	// (0x0003bf12) list_single_2graphic_im_pane_g4_ParamLimits

0x62cd,	// (0x0003bf12) list_single_2graphic_im_pane_g4

0x412a,	// (0x00039d6f) popup_side_volume_key_window_cp

0x4958,	// (0x0003a59d) main_idle_act2_pane_t1

0x0a35,	// (0x0003667a) toolbar_button_pane_g10

0x9b9a,	// (0x0003f7df) popup_toolbar_window_cp1

0x515e,	// (0x0003ada3) clock_nsta_pane_cp_t1

0x515e,	// (0x0003ada3) clock_nsta_pane_cp_t2

0x0001,

0xfa99,	// (0x000456de) clock_nsta_pane_cp_t

0xf4ca,	// (0x0004510f) navi_navi_volume_pane_cp2_ParamLimits

0xf4d9,	// (0x0004511e) popup_side_volume_key_window_g1_ParamLimits

0xf4e5,	// (0x0004512a) popup_side_volume_key_window_g2_ParamLimits

0xf4f4,	// (0x00045139) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x00045331) popup_side_volume_key_window_g_ParamLimits

0x0fa9,	// (0x00036bee) fep_hwr_aid_pane

0x1052,	// (0x00036c97) bg_fep_hwr_top_pane_g4_ParamLimits

0x56d6,	// (0x0003b31b) fep_hwr_top_pane_g1_ParamLimits

0x56e8,	// (0x0003b32d) fep_hwr_top_pane_g2_ParamLimits

0x1072,	// (0x00036cb7) fep_hwr_top_pane_g3_ParamLimits

0xfaee,	// (0x00045733) fep_hwr_top_pane_g_ParamLimits

0x1087,	// (0x00036ccc) fep_hwr_top_text_pane_ParamLimits

0x3edf,	// (0x00039b24) aid_touch_tab_arrow_arrow_2

0x3ee8,	// (0x00039b2d) aid_touch_tab_arrow_left_2

0x0fbd,	// (0x00036c02) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0ff4,	// (0x00036c39) fep_hwr_prediction_pane

0x583e,	// (0x0003b483) fep_vkb_prediction_pane

0xcd57,	// (0x0004299c) fep_vkb_side_pane_g3_ParamLimits

0xcd57,	// (0x0004299c) fep_vkb_side_pane_g3

0x1216,	// (0x00036e5b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1287,	// (0x00036ecc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1294,	// (0x00036ed9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9d,	// (0x000457e2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x14be,	// (0x00037103) fep_hwr_prediction_pane_g1

0x14c8,	// (0x0003710d) fep_hwr_prediction_pane_g2

0x14d0,	// (0x00037115) fep_hwr_prediction_pane_g3

0x14d8,	// (0x0003711d) fep_hwr_prediction_pane_g4

0x0003,

0xfca7,	// (0x000458ec) fep_hwr_prediction_pane_g

0x67d3,	// (0x0003c418) fep_vkb_prediction_pane_g1

0x67dd,	// (0x0003c422) fep_vkb_prediction_pane_g2

0x67e5,	// (0x0003c42a) fep_vkb_prediction_pane_g3

0x67ed,	// (0x0003c432) fep_vkb_prediction_pane_g4

0x0003,

0xfcb0,	// (0x000458f5) fep_vkb_prediction_pane_g

0x0d86,	// (0x000369cb) slider_set_pane_g3

0x0d9a,	// (0x000369df) slider_set_pane_g4

0x0db2,	// (0x000369f7) slider_set_pane_g5

0x0d86,	// (0x000369cb) slider_set_pane_g6

0x0dc8,	// (0x00036a0d) slider_set_pane_g7

0x45b0,	// (0x0003a1f5) slider_form_pane_g3

0x45b9,	// (0x0003a1fe) slider_form_pane_g4

0x45c1,	// (0x0003a206) slider_form_pane_g5

0x45b0,	// (0x0003a1f5) slider_form_pane_g6

0xc894,	// (0x000424d9) slider_form_pane_g7

0x4c1c,	// (0x0003a861) slider_set_pane_vc_g3

0x4c25,	// (0x0003a86a) slider_set_pane_vc_g4

0x4c2e,	// (0x0003a873) slider_set_pane_vc_g5

0x4c1c,	// (0x0003a861) slider_set_pane_vc_g6

0x4c37,	// (0x0003a87c) slider_set_pane_vc_g7

0x4e0d,	// (0x0003aa52) slider_form_pane_vc_g1

0x4e16,	// (0x0003aa5b) slider_form_pane_vc_g2

0x4e1f,	// (0x0003aa64) slider_form_pane_vc_g3

0x4e0d,	// (0x0003aa52) slider_form_pane_vc_g4

0x4e28,	// (0x0003aa6d) slider_form_pane_vc_g5

0x0004,

0xfa6b,	// (0x000456b0) slider_form_pane_vc_g

0xeb90,	// (0x000447d5) main_idle_act3_pane

0x67f5,	// (0x0003c43a) ai3_links_pane

0xcfcc,	// (0x00042c11) popup_ai3_data_window_ParamLimits

0xcfcc,	// (0x00042c11) popup_ai3_data_window

0xb93c,	// (0x00041581) grid_ai3_links_pane

0xcfea,	// (0x00042c2f) cell_ai3_links_pane_ParamLimits

0xcfea,	// (0x00042c2f) cell_ai3_links_pane

0x6836,	// (0x0003c47b) bg_popup_sub_pane_cp11

0x6843,	// (0x0003c488) cell_ai3_links_pane_g1

0xb93c,	// (0x00041581) bg_popup_sub_pane_cp12

0x6868,	// (0x0003c4ad) heading_ai3_data_pane

0x6870,	// (0x0003c4b5) list_ai3_gene_pane

0x687c,	// (0x0003c4c1) popup_ai3_data_window_g1

0x6884,	// (0x0003c4c9) heading_ai3_data_pane_g1

0x688c,	// (0x0003c4d1) heading_ai3_data_pane_t1

0x689a,	// (0x0003c4df) list_double_ai3_gene_pane_ParamLimits

0x689a,	// (0x0003c4df) list_double_ai3_gene_pane

0x68a7,	// (0x0003c4ec) list_single_ai3_gene_pane_ParamLimits

0x68a7,	// (0x0003c4ec) list_single_ai3_gene_pane

0x563a,	// (0x0003b27f) list_highlight_pane_cp7_ParamLimits

0x563a,	// (0x0003b27f) list_highlight_pane_cp7

0x68b4,	// (0x0003c4f9) list_single_a13_gene_pane_t1_ParamLimits

0x68b4,	// (0x0003c4f9) list_single_a13_gene_pane_t1

0x68cb,	// (0x0003c510) list_single_ai3_gene_pane_g1

0x68d4,	// (0x0003c519) list_single_ai3_gene_pane_g2

0x0001,

0xfcb9,	// (0x000458fe) list_single_ai3_gene_pane_g

0x68dc,	// (0x0003c521) list_double_ai3_gene_pane_g1_ParamLimits

0x68dc,	// (0x0003c521) list_double_ai3_gene_pane_g1

0x68e8,	// (0x0003c52d) list_double_ai3_gene_pane_t1_ParamLimits

0x68e8,	// (0x0003c52d) list_double_ai3_gene_pane_t1

0x6904,	// (0x0003c549) list_double_ai3_gene_pane_t2_ParamLimits

0x6904,	// (0x0003c549) list_double_ai3_gene_pane_t2

0x6919,	// (0x0003c55e) list_double_ai3_gene_pane_t3_ParamLimits

0x6919,	// (0x0003c55e) list_double_ai3_gene_pane_t3

0x0002,

0xfcbe,	// (0x00045903) list_double_ai3_gene_pane_t_ParamLimits

0xfcbe,	// (0x00045903) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xee1b,	// (0x00044a60) aid_size_min_col_2

0xcfb6,	// (0x00042bfb) aid_size_min_msg_ParamLimits

0xcfb6,	// (0x00042bfb) aid_size_min_msg

0xcd6b,	// (0x000429b0) fep_vkb_top_text_pane_g2_ParamLimits

0xcd6b,	// (0x000429b0) fep_vkb_top_text_pane_g2

0x0001,

0xfb1e,	// (0x00045763) fep_vkb_top_text_pane_g_ParamLimits

0xfb1e,	// (0x00045763) fep_vkb_top_text_pane_g

0xeb90,	// (0x000447d5) main_hc_apps_shell_pane

0x6936,	// (0x0003c57b) grid_hc_apps_pane_ParamLimits

0x6936,	// (0x0003c57b) grid_hc_apps_pane

0x6948,	// (0x0003c58d) list_hc_apps_pane

0x6950,	// (0x0003c595) scroll_pane_cp37_ParamLimits

0x6950,	// (0x0003c595) scroll_pane_cp37

0xd004,	// (0x00042c49) cell_hc_apps_pane_ParamLimits

0xd004,	// (0x00042c49) cell_hc_apps_pane

0xd0cc,	// (0x00042d11) cell_hc_apps_pane_g1_ParamLimits

0xd0cc,	// (0x00042d11) cell_hc_apps_pane_g1

0x6a3e,	// (0x0003c683) cell_hc_apps_pane_g2_ParamLimits

0x6a3e,	// (0x0003c683) cell_hc_apps_pane_g2

0x6a5a,	// (0x0003c69f) cell_hc_apps_pane_g3_ParamLimits

0x6a5a,	// (0x0003c69f) cell_hc_apps_pane_g3

0x0002,

0xfcc5,	// (0x0004590a) cell_hc_apps_pane_g_ParamLimits

0xfcc5,	// (0x0004590a) cell_hc_apps_pane_g

0xd0f8,	// (0x00042d3d) cell_hc_apps_pane_t1_ParamLimits

0xd0f8,	// (0x00042d3d) cell_hc_apps_pane_t1

0xbadf,	// (0x00041724) grid_highlight_pane_cp10_ParamLimits

0xbadf,	// (0x00041724) grid_highlight_pane_cp10

0xd138,	// (0x00042d7d) list_single_hc_apps_pane_ParamLimits

0xd138,	// (0x00042d7d) list_single_hc_apps_pane

0xd172,	// (0x00042db7) list_single_hc_apps_pane_g1

0xb2bb,	// (0x00040f00) list_single_hc_apps_pane_g2

0x0001,

0xfccc,	// (0x00045911) list_single_hc_apps_pane_g

0xb2d4,	// (0x00040f19) list_single_hc_apps_pane_g2_copy1

0xb2f0,	// (0x00040f35) list_single_hc_apps_pane_t1

0xb9ac,	// (0x000415f1) bg_set_opt_pane_cp_ParamLimits

0xecb3,	// (0x000448f8) setting_slider_pane_t1_ParamLimits

0xeccc,	// (0x00044911) setting_slider_pane_t2_ParamLimits

0xece6,	// (0x0004492b) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0004517e) setting_slider_pane_t_ParamLimits

0xecfe,	// (0x00044943) slider_set_pane_ParamLimits

0x02b8,	// (0x00035efd) control_pane_g5_ParamLimits

0x02b8,	// (0x00035efd) control_pane_g5

0x43e3,	// (0x0003a028) slider_set_pane_g1_ParamLimits

0x0d7a,	// (0x000369bf) slider_set_pane_g2_ParamLimits

0x0d86,	// (0x000369cb) slider_set_pane_g3_ParamLimits

0x0d9a,	// (0x000369df) slider_set_pane_g4_ParamLimits

0x0db2,	// (0x000369f7) slider_set_pane_g5_ParamLimits

0x0d86,	// (0x000369cb) slider_set_pane_g6_ParamLimits

0x0dc8,	// (0x00036a0d) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x0004557f) slider_set_pane_g_ParamLimits

0x2673,	// (0x000382b8) navi_icon_text_pane_ParamLimits

0xc0b2,	// (0x00041cf7) aid_fill_nsta_2_ParamLimits

0xc0eb,	// (0x00041d30) aid_touch_tab_arrow_left_ParamLimits

0xc101,	// (0x00041d46) aid_touch_tab_arrow_right_ParamLimits

0xc19c,	// (0x00041de1) clock_nsta_pane_ParamLimits

0xc612,	// (0x00042257) navi_icon_pane_g1_ParamLimits

0xc61e,	// (0x00042263) navi_text_pane_t1_ParamLimits

0xcb29,	// (0x0004276e) navi_icon_text_pane_g1_ParamLimits

0xcb35,	// (0x0004277a) navi_icon_text_pane_t1_ParamLimits

0xd172,	// (0x00042db7) list_single_hc_apps_pane_g1_ParamLimits

0xb2bb,	// (0x00040f00) list_single_hc_apps_pane_g2_ParamLimits

0xfccc,	// (0x00045911) list_single_hc_apps_pane_g_ParamLimits

0xb2d4,	// (0x00040f19) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb2f0,	// (0x00040f35) list_single_hc_apps_pane_t1_ParamLimits

0x970c,	// (0x0003f351) popup_toolbar2_fixed_window_ParamLimits

0x970c,	// (0x0003f351) popup_toolbar2_fixed_window

0xae49,	// (0x00040a8e) popup_toolbar2_float_window

0xb93c,	// (0x00041581) bg_popup_sub_pane_cp27

0x6b14,	// (0x0003c759) grid_toolbar2_float_pane

0xb93c,	// (0x00041581) bg_popup_sub_pane_cp26

0x6b14,	// (0x0003c759) grid_toolbar2_fixed_pane

0xd18b,	// (0x00042dd0) cell_toolbar2_fixed_pane_ParamLimits

0xd18b,	// (0x00042dd0) cell_toolbar2_fixed_pane

0xd1a5,	// (0x00042dea) cell_toolbar2_fixed_pane_g1

0x6b35,	// (0x0003c77a) toolbar2_fixed_button_pane

0x3054,	// (0x00038c99) toolbar2_fixed_button_pane_g1

0x3064,	// (0x00038ca9) toolbar2_fixed_button_pane_g2

0x305c,	// (0x00038ca1) toolbar2_fixed_button_pane_g3

0x3074,	// (0x00038cb9) toolbar2_fixed_button_pane_g4

0x306c,	// (0x00038cb1) toolbar2_fixed_button_pane_g5

0x307c,	// (0x00038cc1) toolbar2_fixed_button_pane_g6

0x3084,	// (0x00038cc9) toolbar2_fixed_button_pane_g7

0x3094,	// (0x00038cd9) toolbar2_fixed_button_pane_g8

0x308c,	// (0x00038cd1) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00045481) toolbar2_fixed_button_pane_g

0x6b3d,	// (0x0003c782) cell_toolbar2_float_pane_ParamLimits

0x6b3d,	// (0x0003c782) cell_toolbar2_float_pane

0x6b4e,	// (0x0003c793) cell_toolbar2_float_pane_g1

0x6b35,	// (0x0003c77a) toolbar2_fixed_button_pane_cp

0xcc53,	// (0x00042898) fep_vkb_accented_list_pane_ParamLimits

0xcc53,	// (0x00042898) fep_vkb_accented_list_pane

0x11f6,	// (0x00036e3b) bg_popup_fep_shadow_pane_g9

0x27f7,	// (0x0003843c) bg_popup_fep_shadow_pane_cp3

0xeee7,	// (0x00044b2c) list_accented_list_pane

0x6b57,	// (0x0003c79c) list_single_accented_list_pane_ParamLimits

0x6b57,	// (0x0003c79c) list_single_accented_list_pane

0x27f7,	// (0x0003843c) list_highlight_pane_cp10

0x6b68,	// (0x0003c7ad) list_single_accented_list_pane_t1

0xad67,	// (0x000409ac) popup_slider_window_ParamLimits

0xad67,	// (0x000409ac) popup_slider_window

0x67b4,	// (0x0003c3f9) aid_indentation_list_msg

0xda76,	// (0x000436bb) bg_popup_window_pane_cp19

0x6cc5,	// (0x0003c90a) popup_slider_window_g1

0x6ce1,	// (0x0003c926) popup_slider_window_g2

0x6cfd,	// (0x0003c942) popup_slider_window_g3

0x0005,

0xfcd1,	// (0x00045916) popup_slider_window_g

0x6d63,	// (0x0003c9a8) popup_slider_window_t1

0x6dd7,	// (0x0003ca1c) small_volume_slider_vertical_pane

0x5675,	// (0x0003b2ba) small_volume_slider_vertical_pane_g1

0x5675,	// (0x0003b2ba) small_volume_slider_vertical_pane_g2

0x6df3,	// (0x0003ca38) small_volume_slider_vertical_pane_g3

0x0002,

0xfce3,	// (0x00045928) small_volume_slider_vertical_pane_g

0x9676,	// (0x0003f2bb) area_side_right_pane_ParamLimits

0x9676,	// (0x0003f2bb) area_side_right_pane

0xb31e,	// (0x00040f63) aid_size_side_button_ParamLimits

0xb31e,	// (0x00040f63) aid_size_side_button

0xb337,	// (0x00040f7c) grid_sctrl_middle_pane_ParamLimits

0xb337,	// (0x00040f7c) grid_sctrl_middle_pane

0x1576,	// (0x000371bb) sctrl_sk_bottom_pane

0x1587,	// (0x000371cc) sctrl_sk_top_pane

0x1599,	// (0x000371de) aid_touch_sctrl_top

0x15a6,	// (0x000371eb) bg_sctrl_sk_pane_ParamLimits

0x15a6,	// (0x000371eb) bg_sctrl_sk_pane

0x15b4,	// (0x000371f9) sctrl_sk_top_pane_g1

0x15c1,	// (0x00037206) sctrl_sk_top_pane_t1

0x1599,	// (0x000371de) aid_touch_sctrl_bottom

0x15a6,	// (0x000371eb) bg_sctrl_sk_pane_cp_ParamLimits

0x15a6,	// (0x000371eb) bg_sctrl_sk_pane_cp

0x15dc,	// (0x00037221) sctrl_sk_bottom_pane_g1

0x15c1,	// (0x00037206) sctrl_sk_bottom_pane_t1

0xb351,	// (0x00040f96) cell_sctrl_middle_pane_ParamLimits

0xb351,	// (0x00040f96) cell_sctrl_middle_pane

0xb364,	// (0x00040fa9) aid_touch_sctrl_middle_ParamLimits

0xb364,	// (0x00040fa9) aid_touch_sctrl_middle

0xb371,	// (0x00040fb6) bg_sctrl_middle_pane_ParamLimits

0xb371,	// (0x00040fb6) bg_sctrl_middle_pane

0x1c5f,	// (0x000378a4) cell_sctrl_middle_pane_g1_ParamLimits

0x1c5f,	// (0x000378a4) cell_sctrl_middle_pane_g1

0xb37f,	// (0x00040fc4) cell_sctrl_middle_pane_g2_ParamLimits

0xb37f,	// (0x00040fc4) cell_sctrl_middle_pane_g2

0x0001,

0xfcef,	// (0x00045934) cell_sctrl_middle_pane_g_ParamLimits

0xfcef,	// (0x00045934) cell_sctrl_middle_pane_g

0x3054,	// (0x00038c99) bg_sctrl_middle_pane_g1

0x305c,	// (0x00038ca1) bg_sctrl_middle_pane_g2

0x3064,	// (0x00038ca9) bg_sctrl_middle_pane_g3

0x306c,	// (0x00038cb1) bg_sctrl_middle_pane_g4

0x3074,	// (0x00038cb9) bg_sctrl_middle_pane_g5

0x307c,	// (0x00038cc1) bg_sctrl_middle_pane_g6

0x3084,	// (0x00038cc9) bg_sctrl_middle_pane_g7

0x308c,	// (0x00038cd1) bg_sctrl_middle_pane_g8

0x0007,

0xfcf4,	// (0x00045939) bg_sctrl_middle_pane_g

0x3094,	// (0x00038cd9) bg_sctrl_middle_pane_g8_copy1

0x3054,	// (0x00038c99) bg_sctrl_sk_pane_g1

0x3064,	// (0x00038ca9) bg_sctrl_sk_pane_g2

0x305c,	// (0x00038ca1) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00045481) bg_sctrl_sk_pane_g

0xbf27,	// (0x00041b6c) aid_size_touch_scroll_bar

0x3074,	// (0x00038cb9) bg_sctrl_sk_pane_g4

0x306c,	// (0x00038cb1) bg_sctrl_sk_pane_g5

0x307c,	// (0x00038cc1) bg_sctrl_sk_pane_g6

0x3084,	// (0x00038cc9) bg_sctrl_sk_pane_g7

0x3094,	// (0x00038cd9) bg_sctrl_sk_pane_g8

0x308c,	// (0x00038cd1) bg_sctrl_sk_pane_g9

0x0482,	// (0x000360c7) popup_fep_china_hwr2_fs_candidate_window

0xa819,	// (0x0004045e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa819,	// (0x0004045e) popup_fep_china_hwr2_fs_control_window

0x1216,	// (0x00036e5b) sctrl_sk_top_pane_g2

0x0001,

0xfcea,	// (0x0004592f) sctrl_sk_top_pane_g

0xdb2e,	// (0x00043773) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdb2e,	// (0x00043773) aid_fep_china_hwr2_fs_cell

0xdb44,	// (0x00043789) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdb44,	// (0x00043789) bg_popup_fep_shadow_pane_cp4

0xdb5b,	// (0x000437a0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdb5b,	// (0x000437a0) bg_popup_fep_shadow_pane_cp5

0xdb6d,	// (0x000437b2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdb6d,	// (0x000437b2) popup_fep_china_hwr2_fs_control_bar_grid

0xdb81,	// (0x000437c6) popup_fep_china_hwr2_fs_control_funtion_grid

0x6e52,	// (0x0003ca97) aid_fep_china_hwr2_fs_candi_cell

0xb93c,	// (0x00041581) bg_popup_fep_shadow_pane_cp6

0x6e5c,	// (0x0003caa1) popup_fep_china_hwr2_fs_candidate_grid

0xdb89,	// (0x000437ce) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdb89,	// (0x000437ce) cell_fep_china_hwr2_fs_funtion_grid

0x5675,	// (0x0003b2ba) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6e7e,	// (0x0003cac3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6e7e,	// (0x0003cac3) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6e8c,	// (0x0003cad1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6e8c,	// (0x0003cad1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd05,	// (0x0004594a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd05,	// (0x0004594a) cell_fep_china_hwr2_fs_funtion_grid_g

0xdba1,	// (0x000437e6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdba1,	// (0x000437e6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdbb6,	// (0x000437fb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdbb6,	// (0x000437fb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0a,	// (0x0004594f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0a,	// (0x0004594f) cell_fep_china_hwr2_fs_funtion_grid_t

0x6ed3,	// (0x0003cb18) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6edb,	// (0x0003cb20) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6ee3,	// (0x0003cb28) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0f,	// (0x00045954) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6eeb,	// (0x0003cb30) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6eeb,	// (0x0003cb30) cell_fep_china_hwr2_fs_candidate_grid

0x6f0a,	// (0x0003cb4f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6f12,	// (0x0003cb57) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5675,	// (0x0003b2ba) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5675,	// (0x0003b2ba) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb23,	// (0x00045768) cell_fep_china_hwr2_fs_candidate_grid_g

0x6f1a,	// (0x0003cb5f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2c3c,	// (0x00038881) clock_nsta_pane_cp_24_ParamLimits

0x2c3c,	// (0x00038881) clock_nsta_pane_cp_24

0x2cbc,	// (0x00038901) indicator_nsta_pane_cp_24_ParamLimits

0x2cbc,	// (0x00038901) indicator_nsta_pane_cp_24

0x3d3d,	// (0x00039982) heading_pane_g1

0x0001,

0xf8a1,	// (0x000454e6) heading_pane_g

0x479f,	// (0x0003a3e4) grid_sct_catagory_button_pane

0x47d1,	// (0x0003a416) scroll_pane_cp5_ParamLimits

0x52c9,	// (0x0003af0e) button_value_adjust_pane_cp5_ParamLimits

0x52c9,	// (0x0003af0e) button_value_adjust_pane_cp5

0x53ba,	// (0x0003afff) form2_midp_time_pane_ParamLimits

0x6f28,	// (0x0003cb6d) cell_sct_catagory_button_pane_ParamLimits

0x6f28,	// (0x0003cb6d) cell_sct_catagory_button_pane

0x563a,	// (0x0003b27f) bg_button_pane_cp01_ParamLimits

0x563a,	// (0x0003b27f) bg_button_pane_cp01

0x5675,	// (0x0003b2ba) cell_sct_catagory_button_pane_g1

0xade6,	// (0x00040a2b) popup_tb_extension_window

0xdbd2,	// (0x00043817) aid_size_cell_ext_ParamLimits

0xdbd2,	// (0x00043817) aid_size_cell_ext

0xbd69,	// (0x000419ae) bg_tb_trans_pane_cp1_ParamLimits

0xbd69,	// (0x000419ae) bg_tb_trans_pane_cp1

0xdbf8,	// (0x0004383d) grid_tb_ext_pane_ParamLimits

0xdbf8,	// (0x0004383d) grid_tb_ext_pane

0xdc35,	// (0x0004387a) cell_tb_ext_pane_ParamLimits

0xdc35,	// (0x0004387a) cell_tb_ext_pane

0xdc5d,	// (0x000438a2) cell_tb_ext_pane_g1_ParamLimits

0xdc5d,	// (0x000438a2) cell_tb_ext_pane_g1

0x6fbc,	// (0x0003cc01) cell_tb_ext_pane_t1

0xbadf,	// (0x00041724) list_highlight_pane_cp11_ParamLimits

0xbadf,	// (0x00041724) list_highlight_pane_cp11

0x9721,	// (0x0003f366) popup_uni_indicator_window_ParamLimits

0x9721,	// (0x0003f366) popup_uni_indicator_window

0xbfee,	// (0x00041c33) bg_popup_sub_pane_cp14

0x6fd7,	// (0x0003cc1c) list_uniindi_pane

0x6fe3,	// (0x0003cc28) uniindi_top_pane

0xbadf,	// (0x00041724) bg_uniindi_top_pane

0x7004,	// (0x0003cc49) uniindi_top_pane_g1

0x701a,	// (0x0003cc5f) uniindi_top_pane_g2

0x0003,

0xfd16,	// (0x0004595b) uniindi_top_pane_g

0x7044,	// (0x0003cc89) uniindi_top_pane_t1

0x7070,	// (0x0003ccb5) list_single_uniindi_pane_ParamLimits

0x7070,	// (0x0003ccb5) list_single_uniindi_pane

0x5675,	// (0x0003b2ba) bg_uniindi_top_pane_g1

0x7083,	// (0x0003ccc8) list_single_uniindi_pane_g1

0x7096,	// (0x0003ccdb) list_single_uniindi_pane_t1

0xeb90,	// (0x000447d5) control_bg_pane

0x70bb,	// (0x0003cd00) bg_sctrl_sk_pane_cp1

0x70c4,	// (0x0003cd09) bg_sctrl_sk_pane_cp2

0x70cd,	// (0x0003cd12) control_bg_pane_g1

0x70d6,	// (0x0003cd1b) control_bg_pane_g2

0x0001,

0xfd1f,	// (0x00045964) control_bg_pane_g

0x5101,	// (0x0003ad46) cell_indicator_nsta_pane_g1_ParamLimits

0xca8b,	// (0x000426d0) cell_indicator_nsta_pane_g2_ParamLimits

0xfa87,	// (0x000456cc) cell_indicator_nsta_pane_g_ParamLimits

0xd837,	// (0x0004347c) form2_midp_time_pane_t1_ParamLimits

0x0f9b,	// (0x00036be0) main_idle_act4_pane_ParamLimits

0x0f9b,	// (0x00036be0) main_idle_act4_pane

0xade6,	// (0x00040a2b) popup_tb_extension_window_ParamLimits

0xdc1d,	// (0x00043862) tb_ext_find_pane_ParamLimits

0xdc1d,	// (0x00043862) tb_ext_find_pane

0x70df,	// (0x0003cd24) ai_gene_pane_1_cp1

0x2941,	// (0x00038586) ai_gene_pane_2_cp1

0x70e7,	// (0x0003cd2c) list_single_idle_plugin_calendar_pane

0x70f0,	// (0x0003cd35) list_single_idle_plugin_notification_pane

0x70f9,	// (0x0003cd3e) list_single_idle_plugin_player_pane

0xdc7a,	// (0x000438bf) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc7a,	// (0x000438bf) list_single_idle_plugin_shortcut_pane

0xdca2,	// (0x000438e7) main_idle_act4_pane_t1

0xdcba,	// (0x000438ff) main_idle_act4_pane_t2

0x0001,

0xfd24,	// (0x00045969) main_idle_act4_pane_t

0xdcd2,	// (0x00043917) middle_sk_idle_act4_pane_ParamLimits

0xdcd2,	// (0x00043917) middle_sk_idle_act4_pane

0xdcee,	// (0x00043933) popup_clock_digital_analogue_window_cp2

0xdd15,	// (0x0004395a) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd15,	// (0x0004395a) shortcut_wheel_idle_act4_pane

0x5675,	// (0x0003b2ba) shortcut_wheel_idle_act4_pane_g1

0x5675,	// (0x0003b2ba) shortcut_wheel_idle_act4_pane_g2

0x5675,	// (0x0003b2ba) shortcut_wheel_idle_act4_pane_g3

0x5675,	// (0x0003b2ba) shortcut_wheel_idle_act4_pane_g4

0x5675,	// (0x0003b2ba) shortcut_wheel_idle_act4_pane_g5

0x718c,	// (0x0003cdd1) shortcut_wheel_idle_act4_pane_g6

0x7194,	// (0x0003cdd9) shortcut_wheel_idle_act4_pane_g7

0x719c,	// (0x0003cde1) shortcut_wheel_idle_act4_pane_g8

0x71a4,	// (0x0003cde9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd29,	// (0x0004596e) shortcut_wheel_idle_act4_pane_g

0xd224,	// (0x00042e69) middle_sk_idle_act4_pane_g1_ParamLimits

0xd224,	// (0x00042e69) middle_sk_idle_act4_pane_g1

0xdd92,	// (0x000439d7) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd92,	// (0x000439d7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4c,	// (0x00045991) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4c,	// (0x00045991) middle_sk_idle_act4_pane_g

0xddaa,	// (0x000439ef) middle_sk_idle_act4_pane_t1_ParamLimits

0xddaa,	// (0x000439ef) middle_sk_idle_act4_pane_t1

0xddd9,	// (0x00043a1e) grid_ai_shortcut_pane_ParamLimits

0xddd9,	// (0x00043a1e) grid_ai_shortcut_pane

0xddf6,	// (0x00043a3b) list_highlight_pane_cp16_ParamLimits

0xddf6,	// (0x00043a3b) list_highlight_pane_cp16

0xde03,	// (0x00043a48) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde03,	// (0x00043a48) list_single_idle_plugin_shortcut_pane_g1

0xde0f,	// (0x00043a54) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde0f,	// (0x00043a54) list_single_idle_plugin_shortcut_pane_g2

0xde2d,	// (0x00043a72) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde2d,	// (0x00043a72) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd51,	// (0x00045996) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd51,	// (0x00045996) list_single_idle_plugin_shortcut_pane_g

0xde42,	// (0x00043a87) cell_ai_shortcut_pane_ParamLimits

0xde42,	// (0x00043a87) cell_ai_shortcut_pane

0xde58,	// (0x00043a9d) cell_ai_shortcut_pane_g1_ParamLimits

0xde58,	// (0x00043a9d) cell_ai_shortcut_pane_g1

0x70df,	// (0x0003cd24) ai_gene_pane_1_cp2

0x72d5,	// (0x0003cf1a) ai_gene_pane_2_cp2

0x72dd,	// (0x0003cf22) list_highlight_pane_cp15

0x72e6,	// (0x0003cf2b) list_single_idle_plugin_calendar_pane_g1

0x72dd,	// (0x0003cf22) list_highlight_pane_cp17

0x72ee,	// (0x0003cf33) list_single_idle_plugin_calendar_pane_g1_copy1

0x72f6,	// (0x0003cf3b) list_single_idle_plugin_player_pane_g1

0x4a06,	// (0x0003a64b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd58,	// (0x0004599d) list_single_idle_plugin_player_pane_g

0x72fe,	// (0x0003cf43) list_single_idle_plugin_player_pane_t1

0x730c,	// (0x0003cf51) list_single_idle_plugin_player_pane_t2

0x731a,	// (0x0003cf5f) list_single_idle_plugin_player_pane_t3

0x7328,	// (0x0003cf6d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5d,	// (0x000459a2) list_single_idle_plugin_player_pane_t

0x7336,	// (0x0003cf7b) wait_bar_pane_cp15

0x733e,	// (0x0003cf83) grid_ai_notification_pane

0x4a06,	// (0x0003a64b) list_single_idle_plugin_notification_pane_g1

0xde7a,	// (0x00043abf) cell_ai_notification_pane_ParamLimits

0xde7a,	// (0x00043abf) cell_ai_notification_pane

0x7354,	// (0x0003cf99) cell_ai_notification_pane_g1

0x735c,	// (0x0003cfa1) cell_ai_notification_pane_t1

0xde87,	// (0x00043acc) tb_ext_find_button_pane

0xde8f,	// (0x00043ad4) tb_ext_find_pane_g1

0xde97,	// (0x00043adc) tb_ext_find_pane_t1

0x21df,	// (0x00037e24) tb_ext_find_button_pane_g1

0x7388,	// (0x0003cfcd) tb_ext_find_button_pane_g2

0x0001,

0xfd66,	// (0x000459ab) tb_ext_find_button_pane_g

0xdca2,	// (0x000438e7) main_idle_act4_pane_t1_ParamLimits

0xdcba,	// (0x000438ff) main_idle_act4_pane_t2_ParamLimits

0xfd24,	// (0x00045969) main_idle_act4_pane_t_ParamLimits

0xdcee,	// (0x00043933) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd05,	// (0x0004394a) sat_plugin_idle_act4_pane_ParamLimits

0xdd05,	// (0x0004394a) sat_plugin_idle_act4_pane

0xdea5,	// (0x00043aea) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdea5,	// (0x00043aea) sat_plugin_idle_act4_pane_t1

0xdebd,	// (0x00043b02) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdebd,	// (0x00043b02) sat_plugin_idle_act4_pane_t2

0xded5,	// (0x00043b1a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xded5,	// (0x00043b1a) sat_plugin_idle_act4_pane_t3

0xdeed,	// (0x00043b32) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdeed,	// (0x00043b32) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6b,	// (0x000459b0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6b,	// (0x000459b0) sat_plugin_idle_act4_pane_t

0xec55,	// (0x0004489a) popup_battery_window_ParamLimits

0xec55,	// (0x0004489a) popup_battery_window

0xbadf,	// (0x00041724) bg_popup_sub_pane_cp25_ParamLimits

0xbadf,	// (0x00041724) bg_popup_sub_pane_cp25

0x73dd,	// (0x0003d022) popup_battery_window_g1_ParamLimits

0x73dd,	// (0x0003d022) popup_battery_window_g1

0x73e9,	// (0x0003d02e) popup_battery_window_t1_ParamLimits

0x73e9,	// (0x0003d02e) popup_battery_window_t1

0x73fb,	// (0x0003d040) popup_battery_window_t2_ParamLimits

0x73fb,	// (0x0003d040) popup_battery_window_t2

0x0001,

0xfd74,	// (0x000459b9) popup_battery_window_t_ParamLimits

0xfd74,	// (0x000459b9) popup_battery_window_t

0xa486,	// (0x000400cb) midp_canvas_pane_ParamLimits

0xa4e2,	// (0x00040127) midp_keypad_pane_ParamLimits

0xa4e2,	// (0x00040127) midp_keypad_pane

0x2b1e,	// (0x00038763) main_midp_pane_ParamLimits

0x517c,	// (0x0003adc1) signal_pane_g2_cp_ParamLimits

0xdf05,	// (0x00043b4a) aid_size_cell_midp_keypad_ParamLimits

0xdf05,	// (0x00043b4a) aid_size_cell_midp_keypad

0xdf23,	// (0x00043b68) midp_keyp_game_grid_pane_ParamLimits

0xdf23,	// (0x00043b68) midp_keyp_game_grid_pane

0xdf4a,	// (0x00043b8f) midp_keyp_rocker_pane_ParamLimits

0xdf4a,	// (0x00043b8f) midp_keyp_rocker_pane

0xdf99,	// (0x00043bde) midp_keyp_sk_left_pane_ParamLimits

0xdf99,	// (0x00043bde) midp_keyp_sk_left_pane

0xdfef,	// (0x00043c34) midp_keyp_sk_right_pane_ParamLimits

0xdfef,	// (0x00043c34) midp_keyp_sk_right_pane

0xb93c,	// (0x00041581) bg_button_pane_cp03

0xe045,	// (0x00043c8a) midp_keyp_sk_left_pane_g1

0xb93c,	// (0x00041581) bg_button_pane_cp04

0xe045,	// (0x00043c8a) midp_keyp_sk_right_pane_g1

0x5675,	// (0x0003b2ba) midp_keyp_rocker_pane_g1

0xe04d,	// (0x00043c92) keyp_game_cell_pane_ParamLimits

0xe04d,	// (0x00043c92) keyp_game_cell_pane

0xb93c,	// (0x00041581) bg_button_pane_cp02

0xe073,	// (0x00043cb8) keyp_game_cell_pane_g1

0x96b8,	// (0x0003f2fd) popup_fep_vkb2_window_ParamLimits

0x96b8,	// (0x0003f2fd) popup_fep_vkb2_window

0xb38b,	// (0x00040fd0) aid_size_cell_vkb2_ParamLimits

0xb38b,	// (0x00040fd0) aid_size_cell_vkb2

0xb3c1,	// (0x00041006) popup_fep_vkb2_window_g1_ParamLimits

0xb3c1,	// (0x00041006) popup_fep_vkb2_window_g1

0xb411,	// (0x00041056) vkb2_area_bottom_pane_ParamLimits

0xb411,	// (0x00041056) vkb2_area_bottom_pane

0xb46d,	// (0x000410b2) vkb2_area_keypad_pane_ParamLimits

0xb46d,	// (0x000410b2) vkb2_area_keypad_pane

0xb4bb,	// (0x00041100) vkb2_area_top_pane_ParamLimits

0xb4bb,	// (0x00041100) vkb2_area_top_pane

0xb541,	// (0x00041186) vkb2_top_entry_pane_ParamLimits

0xb541,	// (0x00041186) vkb2_top_entry_pane

0xb56e,	// (0x000411b3) vkb2_top_grid_left_pane_ParamLimits

0xb56e,	// (0x000411b3) vkb2_top_grid_left_pane

0xb58e,	// (0x000411d3) vkb2_top_grid_right_pane_ParamLimits

0xb58e,	// (0x000411d3) vkb2_top_grid_right_pane

0x1856,	// (0x0003749b) vkb2_cell_keypad_pane_ParamLimits

0x1856,	// (0x0003749b) vkb2_cell_keypad_pane

0xb5d4,	// (0x00041219) vkb2_area_bottom_grid_pane_ParamLimits

0xb5d4,	// (0x00041219) vkb2_area_bottom_grid_pane

0xb5fe,	// (0x00041243) vkb2_area_bottom_pane_g1_ParamLimits

0xb5fe,	// (0x00041243) vkb2_area_bottom_pane_g1

0xb624,	// (0x00041269) vkb2_area_bottom_pane_g2_ParamLimits

0xb624,	// (0x00041269) vkb2_area_bottom_pane_g2

0xb655,	// (0x0004129a) vkb2_area_bottom_pane_g3_ParamLimits

0xb655,	// (0x0004129a) vkb2_area_bottom_pane_g3

0x0002,

0xfd79,	// (0x000459be) vkb2_area_bottom_pane_g_ParamLimits

0xfd79,	// (0x000459be) vkb2_area_bottom_pane_g

0x1a00,	// (0x00037645) vkb2_top_cell_left_pane_ParamLimits

0x1a00,	// (0x00037645) vkb2_top_cell_left_pane

0xe07c,	// (0x00043cc1) vkb2_top_entry_pane_g1_ParamLimits

0xe07c,	// (0x00043cc1) vkb2_top_entry_pane_g1

0xe08a,	// (0x00043ccf) vkb2_top_entry_pane_t1_ParamLimits

0xe08a,	// (0x00043ccf) vkb2_top_entry_pane_t1

0x75a5,	// (0x0003d1ea) vkb2_top_entry_pane_t2_ParamLimits

0x75a5,	// (0x0003d1ea) vkb2_top_entry_pane_t2

0x75d7,	// (0x0003d21c) vkb2_top_entry_pane_t3_ParamLimits

0x75d7,	// (0x0003d21c) vkb2_top_entry_pane_t3

0x0002,

0xfd80,	// (0x000459c5) vkb2_top_entry_pane_t_ParamLimits

0xfd80,	// (0x000459c5) vkb2_top_entry_pane_t

0xb6bf,	// (0x00041304) vkb2_top_grid_right_pane_g1_ParamLimits

0xb6bf,	// (0x00041304) vkb2_top_grid_right_pane_g1

0x1a63,	// (0x000376a8) vkb2_top_grid_right_pane_g2_ParamLimits

0x1a63,	// (0x000376a8) vkb2_top_grid_right_pane_g2

0x1a7b,	// (0x000376c0) vkb2_top_grid_right_pane_g3_ParamLimits

0x1a7b,	// (0x000376c0) vkb2_top_grid_right_pane_g3

0xb6d5,	// (0x0004131a) vkb2_top_grid_right_pane_g4_ParamLimits

0xb6d5,	// (0x0004131a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd87,	// (0x000459cc) vkb2_top_grid_right_pane_g_ParamLimits

0xfd87,	// (0x000459cc) vkb2_top_grid_right_pane_g

0x1aa9,	// (0x000376ee) vkb2_top_cell_left_pane_g1

0x1ac0,	// (0x00037705) vkb2_cell_keypad_pane_g1_ParamLimits

0x1ac0,	// (0x00037705) vkb2_cell_keypad_pane_g1

0x75fb,	// (0x0003d240) vkb2_cell_keypad_pane_t1_ParamLimits

0x75fb,	// (0x0003d240) vkb2_cell_keypad_pane_t1

0x1ace,	// (0x00037713) vkb2_cell_bottom_grid_pane_ParamLimits

0x1ace,	// (0x00037713) vkb2_cell_bottom_grid_pane

0x1b07,	// (0x0003774c) vkb2_cell_bottom_grid_pane_g1

0xdd36,	// (0x0004397b) aid_call2_pane_cp02

0xdd3e,	// (0x00043983) aid_call_pane_cp02

0xdd46,	// (0x0004398b) clock_digital_number_pane_cp10

0xdd4e,	// (0x00043993) clock_digital_number_pane_cp11

0xdd56,	// (0x0004399b) clock_digital_number_pane_cp12

0xdd5e,	// (0x000439a3) clock_digital_number_pane_cp13

0xdd66,	// (0x000439ab) clock_digital_separator_pane_cp10

0x21df,	// (0x00037e24) popup_clock_digital_analogue_window_cp2_g1

0x21df,	// (0x00037e24) popup_clock_digital_analogue_window_cp2_g2

0xdd6e,	// (0x000439b3) popup_clock_digital_analogue_window_cp2_g3

0x21df,	// (0x00037e24) popup_clock_digital_analogue_window_cp2_g4

0xdd6e,	// (0x000439b3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3c,	// (0x00045981) popup_clock_digital_analogue_window_cp2_g

0xdd76,	// (0x000439bb) popup_clock_digital_analogue_window_cp2_t1

0xdd84,	// (0x000439c9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd47,	// (0x0004598c) popup_clock_digital_analogue_window_cp2_t

0x5675,	// (0x0003b2ba) clock_digital_number_pane_cp10_g1

0x5675,	// (0x0003b2ba) clock_digital_number_pane_cp10_g2

0x0001,

0xfb23,	// (0x00045768) clock_digital_number_pane_cp10_g

0x5675,	// (0x0003b2ba) clock_digital_separator_pane_cp10_g1

0x5675,	// (0x0003b2ba) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb23,	// (0x00045768) clock_digital_separator_pane_cp10_g

0x7026,	// (0x0003cc6b) uniindi_top_pane_g3

0x7037,	// (0x0003cc7c) uniindi_top_pane_g4

0x18e1,	// (0x00037526) vkb2_row_keypad_pane_ParamLimits

0x18e1,	// (0x00037526) vkb2_row_keypad_pane

0x1b23,	// (0x00037768) vkb2_cell_t_keypad_pane_ParamLimits

0x1b23,	// (0x00037768) vkb2_cell_t_keypad_pane

0x1b33,	// (0x00037778) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1b33,	// (0x00037778) vkb2_cell_t_keypad_pane_cp08

0x1b48,	// (0x0003778d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1b48,	// (0x0003778d) vkb2_cell_t_keypad_pane_cp09

0x1b5c,	// (0x000377a1) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1b5c,	// (0x000377a1) vkb2_cell_t_keypad_pane_cp01

0x1b6d,	// (0x000377b2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1b6d,	// (0x000377b2) vkb2_cell_t_keypad_pane_cp02

0x1b7e,	// (0x000377c3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1b7e,	// (0x000377c3) vkb2_cell_t_keypad_pane_cp03

0x1b8f,	// (0x000377d4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1b8f,	// (0x000377d4) vkb2_cell_t_keypad_pane_cp04

0x1ba0,	// (0x000377e5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1ba0,	// (0x000377e5) vkb2_cell_t_keypad_pane_cp05

0x1bb1,	// (0x000377f6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1bb1,	// (0x000377f6) vkb2_cell_t_keypad_pane_cp06

0x1bc4,	// (0x00037809) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1bc4,	// (0x00037809) vkb2_cell_t_keypad_pane_cp07

0x1bd9,	// (0x0003781e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1bd9,	// (0x0003781e) vkb2_cell_t_keypad_pane_cp10

0x1216,	// (0x00036e5b) vkb2_cell_t_keypad_pane_g1

0x7612,	// (0x0003d257) vkb2_cell_t_keypad_pane_t1

0xeb90,	// (0x000447d5) popup_grid_graphic2_window

0xe0c3,	// (0x00043d08) aid_size_cell_graphic2_ParamLimits

0xe0c3,	// (0x00043d08) aid_size_cell_graphic2

0xe101,	// (0x00043d46) bg_popup_window_pane_cp21_ParamLimits

0xe101,	// (0x00043d46) bg_popup_window_pane_cp21

0xe10f,	// (0x00043d54) graphic2_pages_pane_ParamLimits

0xe10f,	// (0x00043d54) graphic2_pages_pane

0xe167,	// (0x00043dac) grid_graphic2_control_pane_ParamLimits

0xe167,	// (0x00043dac) grid_graphic2_control_pane

0xe1af,	// (0x00043df4) grid_graphic2_pane_ParamLimits

0xe1af,	// (0x00043df4) grid_graphic2_pane

0xe23a,	// (0x00043e7f) cell_graphic2_pane

0xeb90,	// (0x000447d5) main_comp_mode_pane

0x6870,	// (0x0003c4b5) list_ai3_gene_pane_ParamLimits

0xda76,	// (0x000436bb) bg_popup_window_pane_cp19_ParamLimits

0x6c44,	// (0x0003c889) bg_touch_area_indi_pane_ParamLimits

0x6c44,	// (0x0003c889) bg_touch_area_indi_pane

0x6c5a,	// (0x0003c89f) bg_touch_area_indi_pane_cp01_ParamLimits

0x6c5a,	// (0x0003c89f) bg_touch_area_indi_pane_cp01

0x6c91,	// (0x0003c8d6) bg_touch_area_indi_pane_cp02_ParamLimits

0x6c91,	// (0x0003c8d6) bg_touch_area_indi_pane_cp02

0x6cab,	// (0x0003c8f0) bg_touch_area_indi_pane_cp03_ParamLimits

0x6cab,	// (0x0003c8f0) bg_touch_area_indi_pane_cp03

0x6cc5,	// (0x0003c90a) popup_slider_window_g1_ParamLimits

0x6ce1,	// (0x0003c926) popup_slider_window_g2_ParamLimits

0x6cfd,	// (0x0003c942) popup_slider_window_g3_ParamLimits

0xfcd1,	// (0x00045916) popup_slider_window_g_ParamLimits

0x6d63,	// (0x0003c9a8) popup_slider_window_t1_ParamLimits

0x6dd7,	// (0x0003ca1c) small_volume_slider_vertical_pane_ParamLimits

0xe23a,	// (0x00043e7f) cell_graphic2_pane_ParamLimits

0xe29c,	// (0x00043ee1) bg_button_pane_cp10_ParamLimits

0xe29c,	// (0x00043ee1) bg_button_pane_cp10

0xe2af,	// (0x00043ef4) bg_button_pane_cp11_ParamLimits

0xe2af,	// (0x00043ef4) bg_button_pane_cp11

0xe2c2,	// (0x00043f07) graphic2_pages_pane_g1_ParamLimits

0xe2c2,	// (0x00043f07) graphic2_pages_pane_g1

0xe2dd,	// (0x00043f22) graphic2_pages_pane_g2_ParamLimits

0xe2dd,	// (0x00043f22) graphic2_pages_pane_g2

0x0001,

0xfd95,	// (0x000459da) graphic2_pages_pane_g_ParamLimits

0xfd95,	// (0x000459da) graphic2_pages_pane_g

0xe2f5,	// (0x00043f3a) graphic2_pages_pane_t1_ParamLimits

0xe2f5,	// (0x00043f3a) graphic2_pages_pane_t1

0xe30d,	// (0x00043f52) cell_graphic2_control_pane_ParamLimits

0xe30d,	// (0x00043f52) cell_graphic2_control_pane

0xe33b,	// (0x00043f80) cell_graphic2_pane_g1_ParamLimits

0xe33b,	// (0x00043f80) cell_graphic2_pane_g1

0xd232,	// (0x00042e77) cell_graphic2_pane_g2_ParamLimits

0xd232,	// (0x00042e77) cell_graphic2_pane_g2

0xd84a,	// (0x0004348f) cell_graphic2_pane_g3_ParamLimits

0xd84a,	// (0x0004348f) cell_graphic2_pane_g3

0xd23f,	// (0x00042e84) cell_graphic2_pane_g4_ParamLimits

0xd23f,	// (0x00042e84) cell_graphic2_pane_g4

0xe348,	// (0x00043f8d) cell_graphic2_pane_g5_ParamLimits

0xe348,	// (0x00043f8d) cell_graphic2_pane_g5

0x0004,

0xfd9a,	// (0x000459df) cell_graphic2_pane_g_ParamLimits

0xfd9a,	// (0x000459df) cell_graphic2_pane_g

0xe364,	// (0x00043fa9) cell_graphic2_pane_t1_ParamLimits

0xe364,	// (0x00043fa9) cell_graphic2_pane_t1

0x3d31,	// (0x00039976) grid_highlight_pane_cp11_ParamLimits

0x3d31,	// (0x00039976) grid_highlight_pane_cp11

0xbadf,	// (0x00041724) bg_button_pane_cp05

0xe3ad,	// (0x00043ff2) cell_graphic2_control_pane_g1

0x5675,	// (0x0003b2ba) bg_touch_area_indi_pane_g1

0x78f5,	// (0x0003d53a) aid_cmod_rocker_key_size

0x78ff,	// (0x0003d544) aid_cmode_itu_key_size

0x7909,	// (0x0003d54e) main_cmode_video_pane

0x7913,	// (0x0003d558) main_comp_mode_itu_pane

0x791f,	// (0x0003d564) main_comp_mode_rocker_pane

0x792b,	// (0x0003d570) cell_cmode_rocker_pane_ParamLimits

0x792b,	// (0x0003d570) cell_cmode_rocker_pane

0x793f,	// (0x0003d584) cell_cmode_itu_pane_ParamLimits

0x793f,	// (0x0003d584) cell_cmode_itu_pane

0xbfee,	// (0x00041c33) bg_button_pane_cp06_ParamLimits

0xbfee,	// (0x00041c33) bg_button_pane_cp06

0x58f0,	// (0x0003b535) cell_cmode_rocker_pane_g1_ParamLimits

0x58f0,	// (0x0003b535) cell_cmode_rocker_pane_g1

0x6e7e,	// (0x0003cac3) cell_cmode_rocker_pane_g2_ParamLimits

0x6e7e,	// (0x0003cac3) cell_cmode_rocker_pane_g2

0x0001,

0xfdaa,	// (0x000459ef) cell_cmode_rocker_pane_g_ParamLimits

0xfdaa,	// (0x000459ef) cell_cmode_rocker_pane_g

0xb93c,	// (0x00041581) bg_button_pane_cp07

0x7956,	// (0x0003d59b) cell_cmode_itu_pane_g1

0x795f,	// (0x0003d5a4) cell_cmode_itu_pane_t1

0x796d,	// (0x0003d5b2) cell_cmode_itu_pane_t2

0x0001,

0xfdaf,	// (0x000459f4) cell_cmode_itu_pane_t

0x70ab,	// (0x0003ccf0) aid_touch_ctrl_left

0x70b3,	// (0x0003ccf8) aid_touch_ctrl_right

0xb93c,	// (0x00041581) compa_mode_pane

0xe3d5,	// (0x0004401a) aid_cmod_rocker_key_size_cp

0xe3df,	// (0x00044024) aid_cmode_itu_key_size_cp

0x798f,	// (0x0003d5d4) compa_mode_pane_g1

0x7997,	// (0x0003d5dc) compa_mode_pane_g2

0x799f,	// (0x0003d5e4) compa_mode_pane_g3

0x0002,

0xfdb4,	// (0x000459f9) compa_mode_pane_g

0xe3e9,	// (0x0004402e) main_comp_mode_itu_pane_cp

0xe3f1,	// (0x00044036) main_comp_mode_rocker_pane_cp

0xe3f9,	// (0x0004403e) cell_cmode_itu_pane_cp_ParamLimits

0xe3f9,	// (0x0004403e) cell_cmode_itu_pane_cp

0xe40e,	// (0x00044053) cell_cmode_rocker_pane_cp_ParamLimits

0xe40e,	// (0x00044053) cell_cmode_rocker_pane_cp

0xbfee,	// (0x00041c33) bg_button_pane_cp06_cp_ParamLimits

0xbfee,	// (0x00041c33) bg_button_pane_cp06_cp

0x58f0,	// (0x0003b535) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x58f0,	// (0x0003b535) cell_cmode_rocker_pane_g1_cp

0x5675,	// (0x0003b2ba) cell_cmode_rocker_pane_g2_cp

0xb93c,	// (0x00041581) bg_button_pane_cp07_cp

0xe420,	// (0x00044065) cell_cmode_itu_pane_g1_cp

0xe429,	// (0x0004406e) cell_cmode_itu_pane_t1_cp

0xe429,	// (0x0004406e) cell_cmode_itu_pane_t2_cp

0xc88c,	// (0x000424d1) settings_code_pane_cp2

0xb9ac,	// (0x000415f1) bg_popup_window_pane_cp3_ParamLimits

0xbcf3,	// (0x00041938) heading_pane_cp3_ParamLimits

0xbd02,	// (0x00041947) listscroll_popup_graphic_pane_ParamLimits

0x0fa9,	// (0x00036bee) fep_hwr_aid_pane_ParamLimits

0x1599,	// (0x000371de) aid_touch_sctrl_top_ParamLimits

0x15b4,	// (0x000371f9) sctrl_sk_top_pane_g1_ParamLimits

0x1216,	// (0x00036e5b) sctrl_sk_top_pane_g2_ParamLimits

0xfcea,	// (0x0004592f) sctrl_sk_top_pane_g_ParamLimits

0x15c1,	// (0x00037206) sctrl_sk_top_pane_t1_ParamLimits

0x1599,	// (0x000371de) aid_touch_sctrl_bottom_ParamLimits

0x15c1,	// (0x00037206) sctrl_sk_bottom_pane_t1_ParamLimits

0x6ff0,	// (0x0003cc35) aid_area_touch_clock

0xb503,	// (0x00041148) aid_vkb2_area_top_pane_cell_ParamLimits

0xb503,	// (0x00041148) aid_vkb2_area_top_pane_cell

0xb5ae,	// (0x000411f3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb5ae,	// (0x000411f3) aid_vkb2_area_bottom_pane_cell

0x755d,	// (0x0003d1a2) popup_char_count_window

0x79f5,	// (0x0003d63a) popup_char_count_window_g1

0x79fe,	// (0x0003d643) popup_char_count_window_g2

0x7a07,	// (0x0003d64c) popup_char_count_window_g3

0x0002,

0xfdbb,	// (0x00045a00) popup_char_count_window_g

0x7a10,	// (0x0003d655) popup_char_count_window_t1

0x1672,	// (0x000372b7) popup_fep_char_preview_window_ParamLimits

0x1672,	// (0x000372b7) popup_fep_char_preview_window

0xb523,	// (0x00041168) vkb2_top_candi_pane_ParamLimits

0xb523,	// (0x00041168) vkb2_top_candi_pane

0xe437,	// (0x0004407c) cell_vkb2_top_candi_pane_ParamLimits

0xe437,	// (0x0004407c) cell_vkb2_top_candi_pane

0x1bee,	// (0x00037833) bg_popup_fep_char_preview_window_ParamLimits

0x1bee,	// (0x00037833) bg_popup_fep_char_preview_window

0x1bfc,	// (0x00037841) popup_fep_char_preview_window_t1_ParamLimits

0x1bfc,	// (0x00037841) popup_fep_char_preview_window_t1

0x7a6f,	// (0x0003d6b4) bg_popup_fep_char_preview_window_g1

0x7a77,	// (0x0003d6bc) bg_popup_fep_char_preview_window_g2

0x7a7f,	// (0x0003d6c4) bg_popup_fep_char_preview_window_g3

0x7a87,	// (0x0003d6cc) bg_popup_fep_char_preview_window_g4

0x7a8f,	// (0x0003d6d4) bg_popup_fep_char_preview_window_g5

0x7a97,	// (0x0003d6dc) bg_popup_fep_char_preview_window_g6

0x7a9f,	// (0x0003d6e4) bg_popup_fep_char_preview_window_g7

0x7aa7,	// (0x0003d6ec) bg_popup_fep_char_preview_window_g8

0x7aaf,	// (0x0003d6f4) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc2,	// (0x00045a07) bg_popup_fep_char_preview_window_g

0x1216,	// (0x00036e5b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1216,	// (0x00036e5b) cell_vkb2_top_candi_pane_g1

0x1224,	// (0x00036e69) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1224,	// (0x00036e69) cell_vkb2_top_candi_pane_g2

0x6c70,	// (0x0003c8b5) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6c70,	// (0x0003c8b5) cell_vkb2_top_candi_pane_g3

0x1c3e,	// (0x00037883) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1c3e,	// (0x00037883) cell_vkb2_top_candi_pane_g4

0x5e0f,	// (0x0003ba54) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5e0f,	// (0x0003ba54) cell_vkb2_top_candi_pane_g5

0x1c5f,	// (0x000378a4) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1c5f,	// (0x000378a4) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x00045a1c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x00045a1c) cell_vkb2_top_candi_pane_g

0x1c6d,	// (0x000378b2) cell_vkb2_top_candi_pane_t1

0x0d66,	// (0x000369ab) aid_size_touch_slider_mark_ParamLimits

0x0d66,	// (0x000369ab) aid_size_touch_slider_mark

0xe14b,	// (0x00043d90) grid_graphic2_catg_pane_ParamLimits

0xe14b,	// (0x00043d90) grid_graphic2_catg_pane

0xe209,	// (0x00043e4e) popup_grid_graphic2_window_t1_ParamLimits

0xe209,	// (0x00043e4e) popup_grid_graphic2_window_t1

0xe21f,	// (0x00043e64) popup_grid_graphic2_window_t2_ParamLimits

0xe21f,	// (0x00043e64) popup_grid_graphic2_window_t2

0x0001,

0xfd90,	// (0x000459d5) popup_grid_graphic2_window_t_ParamLimits

0xfd90,	// (0x000459d5) popup_grid_graphic2_window_t

0xbadf,	// (0x00041724) bg_button_pane_cp05_ParamLimits

0xe3ad,	// (0x00043ff2) cell_graphic2_control_pane_g1_ParamLimits

0xe4a1,	// (0x000440e6) cell_graphic2_catg_pane_ParamLimits

0xe4a1,	// (0x000440e6) cell_graphic2_catg_pane

0xb93c,	// (0x00041581) bg_button_pane_cp12

0xe4b3,	// (0x000440f8) cell_graphic2_catg_pane_g1

0x6fbc,	// (0x0003cc01) cell_tb_ext_pane_t1_ParamLimits

0x1a20,	// (0x00037665) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1a20,	// (0x00037665) vkb2_top_cell_right_narrow_pane

0x1a38,	// (0x0003767d) vkb2_top_cell_right_wide_pane_ParamLimits

0x1a38,	// (0x0003767d) vkb2_top_cell_right_wide_pane

0x0f9b,	// (0x00036be0) bg_vkb2_func_pane_ParamLimits

0x0f9b,	// (0x00036be0) bg_vkb2_func_pane

0x1aa9,	// (0x000376ee) vkb2_top_cell_left_pane_g1_ParamLimits

0x0f9b,	// (0x00036be0) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0f9b,	// (0x00036be0) bg_vkb2_fuc_pane_cp03

0x1b07,	// (0x0003774c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x305c,	// (0x00038ca1) bg_vkb2_func_pane_g1

0x3064,	// (0x00038ca9) bg_vkb2_func_pane_g2

0x3074,	// (0x00038cb9) bg_vkb2_func_pane_g3

0x306c,	// (0x00038cb1) bg_vkb2_func_pane_g4

0x307c,	// (0x00038cc1) bg_vkb2_func_pane_g5

0x3084,	// (0x00038cc9) bg_vkb2_func_pane_g6

0x308c,	// (0x00038cd1) bg_vkb2_func_pane_g7

0x3094,	// (0x00038cd9) bg_vkb2_func_pane_g8

0x3054,	// (0x00038c99) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x00045a29) bg_vkb2_func_pane_g

0x0f9b,	// (0x00036be0) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0f9b,	// (0x00036be0) bg_vkb2_fuc_pane_cp01

0x1aa9,	// (0x000376ee) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1aa9,	// (0x000376ee) vkb2_top_cell_right_wide_pane_g1

0x0f9b,	// (0x00036be0) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0f9b,	// (0x00036be0) bg_vkb2_fuc_pane_cp02

0x1b07,	// (0x0003774c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1b07,	// (0x0003774c) vkb2_top_cell_right_narrow_pane_g1

0xd1ea,	// (0x00042e2f) aid_touch_area_decrease_ParamLimits

0xd1ea,	// (0x00042e2f) aid_touch_area_decrease

0xd9f2,	// (0x00043637) aid_touch_area_increase_ParamLimits

0xd9f2,	// (0x00043637) aid_touch_area_increase

0xda1a,	// (0x0004365f) aid_touch_area_mute_ParamLimits

0xda1a,	// (0x0004365f) aid_touch_area_mute

0xda42,	// (0x00043687) aid_touch_area_slider_ParamLimits

0xda42,	// (0x00043687) aid_touch_area_slider

0xda82,	// (0x000436c7) popup_slider_window_g4_ParamLimits

0xda82,	// (0x000436c7) popup_slider_window_g4

0xdaaa,	// (0x000436ef) popup_slider_window_g5_ParamLimits

0xdaaa,	// (0x000436ef) popup_slider_window_g5

0xdade,	// (0x00043723) popup_slider_window_g6_ParamLimits

0xdade,	// (0x00043723) popup_slider_window_g6

0x6d91,	// (0x0003c9d6) popup_slider_window_t2_ParamLimits

0x6d91,	// (0x0003c9d6) popup_slider_window_t2

0x0001,

0xfcde,	// (0x00045923) popup_slider_window_t_ParamLimits

0xfcde,	// (0x00045923) popup_slider_window_t

0xdafa,	// (0x0004373f) slider_pane_ParamLimits

0xdafa,	// (0x0004373f) slider_pane

0x7ad2,	// (0x0003d717) slider_pane_g1_ParamLimits

0x7ad2,	// (0x0003d717) slider_pane_g1

0x7ae6,	// (0x0003d72b) slider_pane_g2_ParamLimits

0x7ae6,	// (0x0003d72b) slider_pane_g2

0x7afc,	// (0x0003d741) slider_pane_g3_ParamLimits

0x7afc,	// (0x0003d741) slider_pane_g3

0x0003,

0xfdf7,	// (0x00045a3c) slider_pane_g_ParamLimits

0xfdf7,	// (0x00045a3c) slider_pane_g

0xae32,	// (0x00040a77) popup_tb_float_extension_window_ParamLimits

0xae32,	// (0x00040a77) popup_tb_float_extension_window

0x7b28,	// (0x0003d76d) aid_size_cell_tb_float_ext

0xb93c,	// (0x00041581) bg_popup_sub_window_cp28

0x7b34,	// (0x0003d779) grid_tb_float_ext_pane

0x7b40,	// (0x0003d785) cell_tb_float_ext_pane_ParamLimits

0x7b40,	// (0x0003d785) cell_tb_float_ext_pane

0x7b5c,	// (0x0003d7a1) cell_tb_float_ext_pane_g1

0x7b65,	// (0x0003d7aa) grid_highlight_pane_cp12

0xb11f,	// (0x00040d64) cell_last_hwr_side_pane_ParamLimits

0xb11f,	// (0x00040d64) cell_last_hwr_side_pane

0x5675,	// (0x0003b2ba) cell_last_hwr_side_pane_g1

0x7b6e,	// (0x0003d7b3) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x00045a45) cell_last_hwr_side_pane_g

0xb68a,	// (0x000412cf) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb68a,	// (0x000412cf) vkb2_area_bottom_space_btn_pane

0x1216,	// (0x00036e5b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7612,	// (0x0003d257) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1c6d,	// (0x000378b2) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1c8b,	// (0x000378d0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1c8b,	// (0x000378d0) vkb2_area_bottom_space_btn_pane_g1

0x1cc5,	// (0x0003790a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1cc5,	// (0x0003790a) vkb2_area_bottom_space_btn_pane_g2

0x1cfb,	// (0x00037940) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1cfb,	// (0x00037940) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x00045a4a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x00045a4a) vkb2_area_bottom_space_btn_pane_g

0x1060,	// (0x00036ca5) cel_fep_hwr_func_pane_ParamLimits

0x1060,	// (0x00036ca5) cel_fep_hwr_func_pane

0xb0f4,	// (0x00040d39) cell_hwr_side_button_pane_ParamLimits

0xb0f4,	// (0x00040d39) cell_hwr_side_button_pane

0x6ff0,	// (0x0003cc35) aid_area_touch_clock_ParamLimits

0xbadf,	// (0x00041724) bg_uniindi_top_pane_ParamLimits

0x7004,	// (0x0003cc49) uniindi_top_pane_g1_ParamLimits

0x701a,	// (0x0003cc5f) uniindi_top_pane_g2_ParamLimits

0x7026,	// (0x0003cc6b) uniindi_top_pane_g3_ParamLimits

0x7037,	// (0x0003cc7c) uniindi_top_pane_g4_ParamLimits

0xfd16,	// (0x0004595b) uniindi_top_pane_g_ParamLimits

0x7044,	// (0x0003cc89) uniindi_top_pane_t1_ParamLimits

0xbadf,	// (0x00041724) bg_vkb2_func_pane_cp01_ParamLimits

0xbadf,	// (0x00041724) bg_vkb2_func_pane_cp01

0x7b77,	// (0x0003d7bc) cel_fep_hwr_func_pane_g1_ParamLimits

0x7b77,	// (0x0003d7bc) cel_fep_hwr_func_pane_g1

0xbadf,	// (0x00041724) bg_vkb2_func_pane_cp02_ParamLimits

0xbadf,	// (0x00041724) bg_vkb2_func_pane_cp02

0x7b77,	// (0x0003d7bc) cell_hwr_side_button_pane_g1_ParamLimits

0x7b77,	// (0x0003d7bc) cell_hwr_side_button_pane_g1

0x2ed9,	// (0x00038b1e) status_pane_g4_ParamLimits

0x2ed9,	// (0x00038b1e) status_pane_g4

0x2ef3,	// (0x00038b38) status_pane_t1

0x5428,	// (0x0003b06d) form2_midp_gauge_slider_cont_pane

0x5430,	// (0x0003b075) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb84,	// (0x000427c9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb96,	// (0x000427db) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad6,	// (0x0004571b) form2_midp_gauge_slider_pane_t_ParamLimits

0x5466,	// (0x0003b0ab) form2_midp_slider_pane_ParamLimits

0x1632,	// (0x00037277) aid_size_cell_func_vkb2_ParamLimits

0x1632,	// (0x00037277) aid_size_cell_func_vkb2

0x7b14,	// (0x0003d759) slider_pane_g4_ParamLimits

0x7b14,	// (0x0003d759) slider_pane_g4

0xb6f3,	// (0x00041338) form2_midp_gauge_slider_pane_t2_cp01

0xb701,	// (0x00041346) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb701,	// (0x00041346) form2_midp_gauge_slider_pane_t3_cp01

0x1d70,	// (0x000379b5) form2_midp_slider_pane_cp01

0xb93c,	// (0x00041581) navi_smil_pane

0x7bb0,	// (0x0003d7f5) navi_smil_pane_g1

0x7bb8,	// (0x0003d7fd) navi_smil_pane_t1

0x7b85,	// (0x0003d7ca) form2_midp_slider_pane_g1

0x7b8e,	// (0x0003d7d3) form2_midp_slider_pane_g2

0x7b96,	// (0x0003d7db) form2_midp_slider_pane_g3

0x7b85,	// (0x0003d7ca) form2_midp_slider_pane_g4

0xe4bc,	// (0x00044101) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x00045a53) form2_midp_slider_pane_g

0x1d35,	// (0x0003797a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1d35,	// (0x0003797a) vkb2_area_bottom_space_btn_pane_g4

0xc1e7,	// (0x00041e2c) lc0_navi_pane_ParamLimits

0xc1e7,	// (0x00041e2c) lc0_navi_pane

0xc257,	// (0x00041e9c) lc0_stat_indi_pane_ParamLimits

0xc257,	// (0x00041e9c) lc0_stat_indi_pane

0xc26c,	// (0x00041eb1) ls0_title_pane_ParamLimits

0xc26c,	// (0x00041eb1) ls0_title_pane

0xbfee,	// (0x00041c33) bg_popup_sub_pane_cp14_ParamLimits

0x6fd7,	// (0x0003cc1c) list_uniindi_pane_ParamLimits

0x6fe3,	// (0x0003cc28) uniindi_top_pane_ParamLimits

0x7083,	// (0x0003ccc8) list_single_uniindi_pane_g1_ParamLimits

0x7096,	// (0x0003ccdb) list_single_uniindi_pane_t1_ParamLimits

0xb71e,	// (0x00041363) lc0_stat_clock_pane_ParamLimits

0xb71e,	// (0x00041363) lc0_stat_clock_pane

0xe4c5,	// (0x0004410a) lc0_stat_indi_pane_g1_ParamLimits

0xe4c5,	// (0x0004410a) lc0_stat_indi_pane_g1

0xe4d2,	// (0x00044117) lc0_stat_indi_pane_g2_ParamLimits

0xe4d2,	// (0x00044117) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x00045a5e) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x00045a5e) lc0_stat_indi_pane_g

0xb72b,	// (0x00041370) lc0_uni_indicator_pane_ParamLimits

0xb72b,	// (0x00041370) lc0_uni_indicator_pane

0xe4df,	// (0x00044124) ls0_title_pane_g1_ParamLimits

0xe4df,	// (0x00044124) ls0_title_pane_g1

0xe4f3,	// (0x00044138) ls0_title_pane_t1_ParamLimits

0xe4f3,	// (0x00044138) ls0_title_pane_t1

0xb738,	// (0x0004137d) lc0_uni_indicator_pane_g1_ParamLimits

0xb738,	// (0x0004137d) lc0_uni_indicator_pane_g1

0x7c2a,	// (0x0003d86f) lc0_stat_clock_pane_t1

0xeb90,	// (0x000447d5) main_ai5_pane

0x7c38,	// (0x0003d87d) ai5_sk_pane_ParamLimits

0x7c38,	// (0x0003d87d) ai5_sk_pane

0xe521,	// (0x00044166) cell_ai5_widget_pane_ParamLimits

0xe521,	// (0x00044166) cell_ai5_widget_pane

0xe590,	// (0x000441d5) aid_size_cell_widget_grid

0x7cf6,	// (0x0003d93b) bg_ai5_widget_pane_ParamLimits

0x7cf6,	// (0x0003d93b) bg_ai5_widget_pane

0xe5c4,	// (0x00044209) cell_ai5_widget_pane_g2

0xe5d8,	// (0x0004421d) cell_ai5_widget_pane_g3

0xe5f2,	// (0x00044237) cell_ai5_widget_pane_g4

0xe602,	// (0x00044247) cell_ai5_widget_pane_g5

0xe612,	// (0x00044257) cell_ai5_widget_pane_g6

0xe61e,	// (0x00044263) cell_ai5_widget_pane_g7

0xe642,	// (0x00044287) cell_ai5_widget_pane_t1_ParamLimits

0xe642,	// (0x00044287) cell_ai5_widget_pane_t1

0x7e55,	// (0x0003da9a) cell_ai5_widget_pane_t2_ParamLimits

0x7e55,	// (0x0003da9a) cell_ai5_widget_pane_t2

0x7e6d,	// (0x0003dab2) cell_ai5_widget_pane_t3_ParamLimits

0x7e6d,	// (0x0003dab2) cell_ai5_widget_pane_t3

0xe65f,	// (0x000442a4) cell_ai5_widget_pane_t4_ParamLimits

0xe65f,	// (0x000442a4) cell_ai5_widget_pane_t4

0xe685,	// (0x000442ca) cell_ai5_widget_pane_t5_ParamLimits

0xe685,	// (0x000442ca) cell_ai5_widget_pane_t5

0x7ecb,	// (0x0003db10) cell_ai5_widget_pane_t6_ParamLimits

0x7ecb,	// (0x0003db10) cell_ai5_widget_pane_t6

0x7edd,	// (0x0003db22) cell_ai5_widget_pane_t7_ParamLimits

0x7edd,	// (0x0003db22) cell_ai5_widget_pane_t7

0x7efc,	// (0x0003db41) cell_ai5_widget_pane_t8_ParamLimits

0x7efc,	// (0x0003db41) cell_ai5_widget_pane_t8

0x000b,

0xfe39,	// (0x00045a7e) cell_ai5_widget_pane_t_ParamLimits

0xfe39,	// (0x00045a7e) cell_ai5_widget_pane_t

0xe717,	// (0x0004435c) grid_ai5_widget_pane

0xbfee,	// (0x00041c33) highlight_cell_ai5_widget_pane_ParamLimits

0xbfee,	// (0x00041c33) highlight_cell_ai5_widget_pane

0xe725,	// (0x0004436a) ai5_sk_left_pane

0xe72f,	// (0x00044374) ai5_sk_middle_pane

0xe739,	// (0x0004437e) ai5_sk_right_pane

0x7fac,	// (0x0003dbf1) bg_ai5_widget_pane_g1_ParamLimits

0x7fac,	// (0x0003dbf1) bg_ai5_widget_pane_g1

0x7fb8,	// (0x0003dbfd) bg_ai5_widget_pane_g2_ParamLimits

0x7fb8,	// (0x0003dbfd) bg_ai5_widget_pane_g2

0x7fc4,	// (0x0003dc09) bg_ai5_widget_pane_g3_ParamLimits

0x7fc4,	// (0x0003dc09) bg_ai5_widget_pane_g3

0x7fd0,	// (0x0003dc15) bg_ai5_widget_pane_g4_ParamLimits

0x7fd0,	// (0x0003dc15) bg_ai5_widget_pane_g4

0x7fdc,	// (0x0003dc21) bg_ai5_widget_pane_g5_ParamLimits

0x7fdc,	// (0x0003dc21) bg_ai5_widget_pane_g5

0x7fe8,	// (0x0003dc2d) bg_ai5_widget_pane_g6_ParamLimits

0x7fe8,	// (0x0003dc2d) bg_ai5_widget_pane_g6

0x7ff4,	// (0x0003dc39) bg_ai5_widget_pane_g7_ParamLimits

0x7ff4,	// (0x0003dc39) bg_ai5_widget_pane_g7

0x8000,	// (0x0003dc45) bg_ai5_widget_pane_g8_ParamLimits

0x8000,	// (0x0003dc45) bg_ai5_widget_pane_g8

0x800c,	// (0x0003dc51) bg_ai5_widget_pane_g9_ParamLimits

0x800c,	// (0x0003dc51) bg_ai5_widget_pane_g9

0x0008,

0xfe52,	// (0x00045a97) bg_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x00045a97) bg_ai5_widget_pane_g

0xe76f,	// (0x000443b4) cell_shortcut_ai5_widget_pane_ParamLimits

0xe76f,	// (0x000443b4) cell_shortcut_ai5_widget_pane

0x27f7,	// (0x0003843c) bg_cell_shortcut_ai5_widget_pane

0x8057,	// (0x0003dc9c) cell_grid_ai5_widget_pane_g1

0x27f7,	// (0x0003843c) highlight_cell_shortcut_ai5_widget_pane

0x305c,	// (0x00038ca1) ai5_sk_left_pane_g1

0x8060,	// (0x0003dca5) ai5_sk_left_pane_g2

0x8068,	// (0x0003dcad) ai5_sk_left_pane_g3

0x8070,	// (0x0003dcb5) ai5_sk_left_pane_g4

0x0003,

0xfe65,	// (0x00045aaa) ai5_sk_left_pane_g

0x8078,	// (0x0003dcbd) ai5_sk_left_pane_t1

0x3064,	// (0x00038ca9) ai5_sk_right_pane_g1

0x8086,	// (0x0003dccb) ai5_sk_right_pane_g2

0x808e,	// (0x0003dcd3) ai5_sk_right_pane_g3

0x8096,	// (0x0003dcdb) ai5_sk_right_pane_g4

0x0003,

0xfe6e,	// (0x00045ab3) ai5_sk_right_pane_g

0x809e,	// (0x0003dce3) ai5_sk_right_pane_t1

0x3064,	// (0x00038ca9) ai5_sk_middle_pane_g1

0x305c,	// (0x00038ca1) ai5_sk_middle_pane_g2

0x307c,	// (0x00038cc1) ai5_sk_middle_pane_g3

0x808e,	// (0x0003dcd3) ai5_sk_middle_pane_g4

0x8068,	// (0x0003dcad) ai5_sk_middle_pane_g5

0x80ac,	// (0x0003dcf1) ai5_sk_middle_pane_g6

0xe782,	// (0x000443c7) ai5_sk_middle_pane_g7

0x0006,

0xfe77,	// (0x00045abc) ai5_sk_middle_pane_g

0xc0d1,	// (0x00041d16) aid_touch_area_size_lc0_ParamLimits

0xc0d1,	// (0x00041d16) aid_touch_area_size_lc0

0x1245,	// (0x00036e8a) cell_hwr_candidate_pane_t1_ParamLimits

0x2b9c,	// (0x000387e1) aid_touch_navi_pane

0xc377,	// (0x00041fbc) status_dt_navi_pane_ParamLimits

0xc377,	// (0x00041fbc) status_dt_navi_pane

0xc38f,	// (0x00041fd4) status_dt_sta_pane_ParamLimits

0xc38f,	// (0x00041fd4) status_dt_sta_pane

0xe78a,	// (0x000443cf) dt_sta_controll_pane

0xe797,	// (0x000443dc) dt_sta_indi_pane

0xe7a4,	// (0x000443e9) dt_sta_title_pane

0xbadf,	// (0x00041724) bg_dt_sta_indi_pane_ParamLimits

0xbadf,	// (0x00041724) bg_dt_sta_indi_pane

0xe7b6,	// (0x000443fb) dt_sta_battery_pane

0xe7be,	// (0x00044403) dt_sta_indi_pane_g1

0xe7c7,	// (0x0004440c) dt_sta_indi_pane_g2

0xe7d0,	// (0x00044415) dt_sta_indi_pane_g3

0x0002,

0xfe86,	// (0x00045acb) dt_sta_indi_pane_g

0xe7d9,	// (0x0004441e) dt_sta_signal_pane

0xbfee,	// (0x00041c33) bg_dt_sta_title_pane_ParamLimits

0xbfee,	// (0x00041c33) bg_dt_sta_title_pane

0xe7e2,	// (0x00044427) dt_sta_title_pane_g1

0xe7ea,	// (0x0004442f) dt_sta_title_pane_t1_ParamLimits

0xe7ea,	// (0x0004442f) dt_sta_title_pane_t1

0xb93c,	// (0x00041581) bg_dt_sta_control_pane

0xe7ff,	// (0x00044444) dt_sta_controll_pane_g1

0xe808,	// (0x0004444d) bg_dt_sta_title_pane_g1

0xe811,	// (0x00044456) bg_dt_sta_title_pane_g2

0xe81a,	// (0x0004445f) bg_dt_sta_title_pane_g3

0x0002,

0xfe8d,	// (0x00045ad2) bg_dt_sta_title_pane_g

0x5675,	// (0x0003b2ba) bg_dt_sta_indi_pane_g1

0x815a,	// (0x0003dd9f) dt_sta_signal_pane_g1

0x8162,	// (0x0003dda7) dt_sta_signal_pane_g2

0x0001,

0xfe94,	// (0x00045ad9) dt_sta_signal_pane_g

0x816a,	// (0x0003ddaf) dt_sta_battery_pane_g1

0x8173,	// (0x0003ddb8) dt_sta_battery_pane_t1

0x5675,	// (0x0003b2ba) bg_dt_sta_control_pane_g1

0x22e9,	// (0x00037f2e) fep_china_uni_eep_pane

0x22f1,	// (0x00037f36) fep_china_uni_entry_pane_ParamLimits

0x2301,	// (0x00037f46) popup_fep_china_uni_window_g1_ParamLimits

0x2311,	// (0x00037f56) popup_fep_china_uni_window_g2_ParamLimits

0x2311,	// (0x00037f56) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0004533d) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0004533d) popup_fep_china_uni_window_g

0x8182,	// (0x0003ddc7) fep_china_uni_eep_pane_g1

0x818a,	// (0x0003ddcf) fep_china_uni_eep_pane_t1

0x7ba7,	// (0x0003d7ec) aid_touch_area_size_smil_player

0x2cf0,	// (0x00038935) lc0_clock_pane

0x2ee7,	// (0x00038b2c) status_pane_g5_ParamLimits

0x2ee7,	// (0x00038b2c) status_pane_g5

0xa95a,	// (0x0004059f) popup_keymap_window

0x2ead,	// (0x00038af2) status_icon_pane

0xe5d8,	// (0x0004421d) cell_ai5_widget_pane_g3_ParamLimits

0xe5f2,	// (0x00044237) cell_ai5_widget_pane_g4_ParamLimits

0xe602,	// (0x00044247) cell_ai5_widget_pane_g5_ParamLimits

0x7dd8,	// (0x0003da1d) cell_ai5_widget_pane_g8_ParamLimits

0x7dd8,	// (0x0003da1d) cell_ai5_widget_pane_g8

0x7dec,	// (0x0003da31) cell_ai5_widget_pane_g9_ParamLimits

0x7dec,	// (0x0003da31) cell_ai5_widget_pane_g9

0x7e00,	// (0x0003da45) cell_ai5_widget_pane_g10_ParamLimits

0x7e00,	// (0x0003da45) cell_ai5_widget_pane_g10

0x8199,	// (0x0003ddde) status_icon_pane_g1

0xb93c,	// (0x00041581) bg_popup_sub_pane_cp13

0x81a1,	// (0x0003dde6) popup_keymap_window_t1

0xa649,	// (0x0004028e) control_pane_g6_ParamLimits

0xa649,	// (0x0004028e) control_pane_g6

0xa656,	// (0x0004029b) control_pane_g7_ParamLimits

0xa656,	// (0x0004029b) control_pane_g7

0xa663,	// (0x000402a8) control_pane_g8_ParamLimits

0xa663,	// (0x000402a8) control_pane_g8

0xe78a,	// (0x000443cf) dt_sta_controll_pane_ParamLimits

0xe797,	// (0x000443dc) dt_sta_indi_pane_ParamLimits

0xe7a4,	// (0x000443e9) dt_sta_title_pane_ParamLimits

0xbf30,	// (0x00041b75) aid_size_touch_scroll_bar_cale

0xec6d,	// (0x000448b2) popup_discreet_window_ParamLimits

0xec6d,	// (0x000448b2) popup_discreet_window

0x9702,	// (0x0003f347) popup_sk_window

0x36ba,	// (0x000392ff) bg_popup_sub_pane_cp28_ParamLimits

0x36ba,	// (0x000392ff) bg_popup_sub_pane_cp28

0x81af,	// (0x0003ddf4) popup_discreet_window_g1_ParamLimits

0x81af,	// (0x0003ddf4) popup_discreet_window_g1

0x81cf,	// (0x0003de14) popup_discreet_window_t1_ParamLimits

0x81cf,	// (0x0003de14) popup_discreet_window_t1

0x81ed,	// (0x0003de32) popup_discreet_window_t2_ParamLimits

0x81ed,	// (0x0003de32) popup_discreet_window_t2

0x0002,

0xfe99,	// (0x00045ade) popup_discreet_window_t_ParamLimits

0xfe99,	// (0x00045ade) popup_discreet_window_t

0x1da6,	// (0x000379eb) popup_sk_window_g1

0x1db0,	// (0x000379f5) popup_sk_window_g2

0x0001,

0xfea0,	// (0x00045ae5) popup_sk_window_g

0x1db8,	// (0x000379fd) popup_sk_window_t1

0x1dc6,	// (0x00037a0b) popup_sk_window_t1_copy1

0xe5c4,	// (0x00044209) cell_ai5_widget_pane_g2_ParamLimits

0xe6a5,	// (0x000442ea) cell_ai5_widget_pane_t9_ParamLimits

0xe6a5,	// (0x000442ea) cell_ai5_widget_pane_t9

0xb93c,	// (0x00041581) main_fep_fshwr2_pane

0xb757,	// (0x0004139c) aid_fshwr2_btn_pane

0xb76b,	// (0x000413b0) aid_fshwr2_syb_pane

0xb77f,	// (0x000413c4) aid_fshwr2_txt_pane

0xb78f,	// (0x000413d4) fshwr2_func_candi_pane

0xb7b1,	// (0x000413f6) fshwr2_hwr_syb_pane

0xb7d5,	// (0x0004141a) fshwr2_icf_pane

0xeb90,	// (0x000447d5) fshwr2_icf_bg_pane

0x1e60,	// (0x00037aa5) fshwr2_icf_pane_t1_ParamLimits

0x1e60,	// (0x00037aa5) fshwr2_icf_pane_t1

0x21df,	// (0x00037e24) fshwr2_func_candi_pane_g1

0xe823,	// (0x00044468) fshwr2_func_candi_row_pane_ParamLimits

0xe823,	// (0x00044468) fshwr2_func_candi_row_pane

0xb805,	// (0x0004144a) cell_fshwr2_syb_pane_ParamLimits

0xb805,	// (0x0004144a) cell_fshwr2_syb_pane

0x1e99,	// (0x00037ade) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1e99,	// (0x00037ade) fshwr2_hwr_syb_pane_g1

0xeb90,	// (0x000447d5) bg_popup_call_pane_cp01

0xb82d,	// (0x00041472) fshwr2_func_candi_cell_pane_ParamLimits

0xb82d,	// (0x00041472) fshwr2_func_candi_cell_pane

0x349a,	// (0x000390df) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x349a,	// (0x000390df) fshwr2_func_candi_cell_bg_pane

0xb878,	// (0x000414bd) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb878,	// (0x000414bd) fshwr2_func_candi_cell_pane_g1

0xb8af,	// (0x000414f4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb8af,	// (0x000414f4) fshwr2_func_candi_cell_pane_t1

0xeb90,	// (0x000447d5) bg_button_pane_cp08

0x2b1e,	// (0x00038763) cell_fshwr2_syb_bg_pane

0xb8ca,	// (0x0004150f) cell_fshwr2_syb_bg_pane_g1

0xb8de,	// (0x00041523) cell_fshwr2_syb_bg_pane_t1

0xbfee,	// (0x00041c33) main_tmo_pane

0xc691,	// (0x000422d6) uni_indicator_pane_g1_ParamLimits

0xc6a7,	// (0x000422ec) uni_indicator_pane_g2_ParamLimits

0xc6bd,	// (0x00042302) uni_indicator_pane_g3_ParamLimits

0xc6d0,	// (0x00042315) uni_indicator_pane_g4_ParamLimits

0xc6d0,	// (0x00042315) uni_indicator_pane_g4

0x4231,	// (0x00039e76) uni_indicator_pane_g5_ParamLimits

0x4231,	// (0x00039e76) uni_indicator_pane_g5

0x4231,	// (0x00039e76) uni_indicator_pane_g6_ParamLimits

0x4231,	// (0x00039e76) uni_indicator_pane_g6

0xf8f7,	// (0x0004553c) uni_indicator_pane_g_ParamLimits

0xd1ba,	// (0x00042dff) popup_tmo_note_window_ParamLimits

0xd1ba,	// (0x00042dff) popup_tmo_note_window

0x1614,	// (0x00037259) fshwr2_bg_pane

0xb8a0,	// (0x000414e5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb8a0,	// (0x000414e5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea5,	// (0x00045aea) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea5,	// (0x00045aea) fshwr2_func_candi_cell_pane_g

0x11fe,	// (0x00036e43) bg_popup_window_pane_cp01

0x1f52,	// (0x00037b97) bg_popup_window_pane_g1_cp01

0x8262,	// (0x0003dea7) bg_popup_window_pane_cp22_ParamLimits

0x8262,	// (0x0003dea7) bg_popup_window_pane_cp22

0x8270,	// (0x0003deb5) listscroll_tmo_link_pane_ParamLimits

0x8270,	// (0x0003deb5) listscroll_tmo_link_pane

0x82b0,	// (0x0003def5) popup_tmo_note_window_g1_ParamLimits

0x82b0,	// (0x0003def5) popup_tmo_note_window_g1

0x82bd,	// (0x0003df02) tmo_note_info_pane_ParamLimits

0x82bd,	// (0x0003df02) tmo_note_info_pane

0xe84a,	// (0x0004448f) list_tmo_note_info_pane_g1_ParamLimits

0xe84a,	// (0x0004448f) list_tmo_note_info_pane_g1

0x82ee,	// (0x0003df33) list_tmo_note_info_pane_g2_ParamLimits

0x82ee,	// (0x0003df33) list_tmo_note_info_pane_g2

0x0001,

0xfeaa,	// (0x00045aef) list_tmo_note_info_pane_g_ParamLimits

0xfeaa,	// (0x00045aef) list_tmo_note_info_pane_g

0x830a,	// (0x0003df4f) list_tmo_note_info_text_pane_ParamLimits

0x830a,	// (0x0003df4f) list_tmo_note_info_text_pane

0x838f,	// (0x0003dfd4) list_tmo_link_pane

0x839c,	// (0x0003dfe1) scroll_pane_cp20

0x83a9,	// (0x0003dfee) list_single_tmo_link_pane_ParamLimits

0x83a9,	// (0x0003dfee) list_single_tmo_link_pane

0x83b9,	// (0x0003dffe) list_single_tmo_link_pane_t1

0x83c7,	// (0x0003e00c) list_tmo_note_info_text_pane_t1_ParamLimits

0x83c7,	// (0x0003e00c) list_tmo_note_info_text_pane_t1

0xa0fa,	// (0x0003fd3f) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa0fa,	// (0x0003fd3f) aid_size_touch_scroll_bar_cp01

0xa03c,	// (0x0003fc81) aid_size_touch_slider_marker

0x96f2,	// (0x0003f337) popup_settings_window_ParamLimits

0x96f2,	// (0x0003f337) popup_settings_window

0xd401,	// (0x00043046) popup_candi_list_indi_window

0x2b9c,	// (0x000387e1) aid_touch_navi_pane_ParamLimits

0x156d,	// (0x000371b2) rs_clock_indi_pane

0x1576,	// (0x000371bb) sctrl_sk_bottom_pane_ParamLimits

0x1587,	// (0x000371cc) sctrl_sk_top_pane_ParamLimits

0x168c,	// (0x000372d1) popup_fep_tooltip_window

0xe590,	// (0x000441d5) aid_size_cell_widget_grid_ParamLimits

0xe5af,	// (0x000441f4) cell_ai5_widget_pane_g1_ParamLimits

0xe5af,	// (0x000441f4) cell_ai5_widget_pane_g1

0xe612,	// (0x00044257) cell_ai5_widget_pane_g6_ParamLimits

0xe61e,	// (0x00044263) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1e,	// (0x00045a63) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x00045a63) cell_ai5_widget_pane_g

0xe6d4,	// (0x00044319) cell_ai5_widget_pane_t10_ParamLimits

0xe6d4,	// (0x00044319) cell_ai5_widget_pane_t10

0xe717,	// (0x0004435c) grid_ai5_widget_pane_ParamLimits

0xe743,	// (0x00044388) cell_contacts_ai5_widget_pane_ParamLimits

0xe743,	// (0x00044388) cell_contacts_ai5_widget_pane

0x8202,	// (0x0003de47) popup_discreet_window_t3_ParamLimits

0x8202,	// (0x0003de47) popup_discreet_window_t3

0xb7f1,	// (0x00041436) popup_fshwr2_char_preview_window_ParamLimits

0xb7f1,	// (0x00041436) popup_fshwr2_char_preview_window

0xe861,	// (0x000444a6) tmo_note_info_pane_t1

0xe876,	// (0x000444bb) tmo_note_info_pane_t2

0xe88f,	// (0x000444d4) tmo_note_info_pane_t3

0x836b,	// (0x0003dfb0) tmo_note_info_pane_t4

0x837d,	// (0x0003dfc2) tmo_note_info_pane_t5

0x0004,

0xfeaf,	// (0x00045af4) tmo_note_info_pane_t

0x838f,	// (0x0003dfd4) list_tmo_link_pane_ParamLimits

0x839c,	// (0x0003dfe1) scroll_pane_cp20_ParamLimits

0xeb90,	// (0x000447d5) bg_popup_fep_char_preview_window_cp01

0x83e0,	// (0x0003e025) popup_fshwr2_char_preview_window_t1

0x83ee,	// (0x0003e033) popup_candi_list_indi_window_g1

0x83f7,	// (0x0003e03c) bg_cell_contacts_ai5_widget_pane

0x8403,	// (0x0003e048) cell_contacts_ai5_widget_pane_g1

0x8418,	// (0x0003e05d) cell_contacts_ai5_widget_pane_g2

0x8424,	// (0x0003e069) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeba,	// (0x00045aff) cell_contacts_ai5_widget_pane_g

0x8430,	// (0x0003e075) cell_contacts_ai5_widget_pane_t1

0xbfee,	// (0x00041c33) highlight_cell_shortcut_ai5_widget_pane_cp01

0x84a7,	// (0x0003e0ec) settings_container_pane

0x27f7,	// (0x0003843c) listscroll_set_pane_copy1

0x4d9a,	// (0x0003a9df) scroll_pane_cp121_copy1

0x84b3,	// (0x0003e0f8) set_content_pane_copy1

0x84bb,	// (0x0003e100) aid_height_set_list_copy1_ParamLimits

0x84bb,	// (0x0003e100) aid_height_set_list_copy1

0x4431,	// (0x0003a076) aid_size_parent_copy1_ParamLimits

0x4431,	// (0x0003a076) aid_size_parent_copy1

0x84c7,	// (0x0003e10c) button_value_adjust_pane_cp6_copy1_ParamLimits

0x84c7,	// (0x0003e10c) button_value_adjust_pane_cp6_copy1

0x2b1e,	// (0x00038763) list_highlight_pane_cp2_copy1_ParamLimits

0x2b1e,	// (0x00038763) list_highlight_pane_cp2_copy1

0x84db,	// (0x0003e120) list_set_pane_copy1_ParamLimits

0x84db,	// (0x0003e120) list_set_pane_copy1

0x8442,	// (0x0003e087) main_pane_set_t1_copy1_ParamLimits

0x8442,	// (0x0003e087) main_pane_set_t1_copy1

0x847c,	// (0x0003e0c1) main_pane_set_t2_copy1_ParamLimits

0x847c,	// (0x0003e0c1) main_pane_set_t2_copy1

0x859c,	// (0x0003e1e1) main_pane_set_t3_copy1

0x85aa,	// (0x0003e1ef) main_pane_set_t4_copy1

0x849b,	// (0x0003e0e0) set_content_pane_g1_copy1_ParamLimits

0x849b,	// (0x0003e0e0) set_content_pane_g1_copy1

0x85b8,	// (0x0003e1fd) setting_code_pane_copy1

0x85c0,	// (0x0003e205) setting_slider_graphic_pane_copy1

0x85c0,	// (0x0003e205) setting_slider_pane_copy1

0x85c8,	// (0x0003e20d) setting_text_pane_copy1

0x85c8,	// (0x0003e20d) setting_volume_pane_copy1

0x85b8,	// (0x0003e1fd) settings_code_pane_cp2_copy1

0x85d0,	// (0x0003e215) settings_code_pane_cp_copy1_ParamLimits

0x85d0,	// (0x0003e215) settings_code_pane_cp_copy1

0x1f5b,	// (0x00037ba0) volume_set_pane_copy1

0x85e4,	// (0x0003e229) volume_set_pane_g10_copy1

0x85f0,	// (0x0003e235) volume_set_pane_g1_copy1

0x85fa,	// (0x0003e23f) volume_set_pane_g2_copy1

0x8604,	// (0x0003e249) volume_set_pane_g3_copy1

0x860e,	// (0x0003e253) volume_set_pane_g4_copy1

0x8618,	// (0x0003e25d) volume_set_pane_g5_copy1

0x8622,	// (0x0003e267) volume_set_pane_g6_copy1

0x862c,	// (0x0003e271) volume_set_pane_g7_copy1

0x8636,	// (0x0003e27b) volume_set_pane_g8_copy1

0x8640,	// (0x0003e285) volume_set_pane_g9_copy1

0xb9ac,	// (0x000415f1) bg_set_opt_pane_cp_copy1_ParamLimits

0xb9ac,	// (0x000415f1) bg_set_opt_pane_cp_copy1

0x1f67,	// (0x00037bac) setting_slider_pane_t1_copy1_ParamLimits

0x1f67,	// (0x00037bac) setting_slider_pane_t1_copy1

0x1f86,	// (0x00037bcb) setting_slider_pane_t2_copy1_ParamLimits

0x1f86,	// (0x00037bcb) setting_slider_pane_t2_copy1

0x1fa0,	// (0x00037be5) setting_slider_pane_t3_copy1_ParamLimits

0x1fa0,	// (0x00037be5) setting_slider_pane_t3_copy1

0x1fb8,	// (0x00037bfd) slider_set_pane_copy1_ParamLimits

0x1fb8,	// (0x00037bfd) slider_set_pane_copy1

0xc046,	// (0x00041c8b) set_opt_bg_pane_g1_copy2

0xc04e,	// (0x00041c93) set_opt_bg_pane_g2_copy2

0x864c,	// (0x0003e291) set_opt_bg_pane_g3_copy2

0xc05e,	// (0x00041ca3) set_opt_bg_pane_g4_copy2

0xc066,	// (0x00041cab) set_opt_bg_pane_g5_copy2

0xc06e,	// (0x00041cb3) set_opt_bg_pane_g6_copy2

0x8656,	// (0x0003e29b) set_opt_bg_pane_g7_copy2

0x8660,	// (0x0003e2a5) set_opt_bg_pane_g8_copy2

0x866a,	// (0x0003e2af) set_opt_bg_pane_g9_copy2

0x1fce,	// (0x00037c13) aid_size_touch_slider_mark_copy1_ParamLimits

0x1fce,	// (0x00037c13) aid_size_touch_slider_mark_copy1

0x8674,	// (0x0003e2b9) slider_set_pane_g1_copy1

0x1fe2,	// (0x00037c27) slider_set_pane_g2_copy1

0x0d86,	// (0x000369cb) slider_set_pane_g3_copy1_ParamLimits

0x0d86,	// (0x000369cb) slider_set_pane_g3_copy1

0x0d9a,	// (0x000369df) slider_set_pane_g4_copy1_ParamLimits

0x0d9a,	// (0x000369df) slider_set_pane_g4_copy1

0x0db2,	// (0x000369f7) slider_set_pane_g5_copy1_ParamLimits

0x0db2,	// (0x000369f7) slider_set_pane_g5_copy1

0x0d86,	// (0x000369cb) slider_set_pane_g6_copy1_ParamLimits

0x0d86,	// (0x000369cb) slider_set_pane_g6_copy1

0x1fea,	// (0x00037c2f) slider_set_pane_g7_copy1_ParamLimits

0x1fea,	// (0x00037c2f) slider_set_pane_g7_copy1

0xb950,	// (0x00041595) bg_set_opt_pane_cp2_copy1

0x867d,	// (0x0003e2c2) setting_slider_graphic_pane_g1_copy1

0x8686,	// (0x0003e2cb) setting_slider_graphic_pane_t1_copy1

0x8696,	// (0x0003e2db) setting_slider_graphic_pane_t2_copy1

0x86a6,	// (0x0003e2eb) slider_set_pane_cp_copy1

0x86b6,	// (0x0003e2fb) input_focus_pane_cp1_copy1

0x86bf,	// (0x0003e304) list_set_text_pane_copy1

0x86c7,	// (0x0003e30c) setting_text_pane_g1_copy1

0xee4a,	// (0x00044a8f) set_text_pane_t1_copy1

0x86b6,	// (0x0003e2fb) input_focus_pane_cp2_copy1

0x86c7,	// (0x0003e30c) setting_code_pane_g1_copy1

0x86d0,	// (0x0003e315) setting_code_pane_t1_copy1

0x4b9f,	// (0x0003a7e4) list_set_graphic_pane_copy1

0xb950,	// (0x00041595) bg_set_opt_pane_cp4_copy1

0x24e6,	// (0x0003812b) list_set_graphic_pane_g1_copy1_ParamLimits

0x24e6,	// (0x0003812b) list_set_graphic_pane_g1_copy1

0x86de,	// (0x0003e323) list_set_graphic_pane_g2_copy1

0x24fe,	// (0x00038143) list_set_graphic_pane_t1_copy1_ParamLimits

0x24fe,	// (0x00038143) list_set_graphic_pane_t1_copy1

0x5675,	// (0x0003b2ba) rs_clock_indi_pane_g1

0x86e6,	// (0x0003e32b) rs_clock_indi_pane_t1

0x86f4,	// (0x0003e339) rs_indi_pane

0x86fc,	// (0x0003e341) rs_indi_pane_g1

0x8705,	// (0x0003e34a) rs_indi_pane_g2

0x870e,	// (0x0003e353) rs_indi_pane_g3

0x0002,

0xfec1,	// (0x00045b06) rs_indi_pane_g

0x27f7,	// (0x0003843c) bg_popup_preview_window_pane_cp03

0x8717,	// (0x0003e35c) popup_fep_tooltip_window_t1

0x632e,	// (0x0003bf73) popup_note2_window_g2_ParamLimits

0x632e,	// (0x0003bf73) popup_note2_window_g2

0x0001,

0xfc4e,	// (0x00045893) popup_note2_window_g_ParamLimits

0xfc4e,	// (0x00045893) popup_note2_window_g

0x6836,	// (0x0003c47b) bg_popup_sub_pane_cp11_ParamLimits

0x6843,	// (0x0003c488) cell_ai3_links_pane_g1_ParamLimits

0x685a,	// (0x0003c49f) cell_ai3_links_pane_t1

0xee4a,	// (0x00044a8f) set_text_pane_t1_copy1_ParamLimits

0xa453,	// (0x00040098) cell_graphic_popup_pane_cp2_ParamLimits

0xa453,	// (0x00040098) cell_graphic_popup_pane_cp2

0x8725,	// (0x0003e36a) cell_graphic_popup_pane_g1_cp2

0xbd43,	// (0x00041988) cell_graphic_popup_pane_g2_cp2

0x872d,	// (0x0003e372) cell_graphic_popup_pane_g3_cp2

0x8735,	// (0x0003e37a) cell_graphic_popup_pane_t2_cp2

0xbd54,	// (0x00041999) grid_highlight_pane_cp3_cp2

0xf266,	// (0x00044eab) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbfee,	// (0x00041c33) main_tmo_pane_ParamLimits

0xd1ae,	// (0x00042df3) popup_tmo_big_image_note_window

0xe59e,	// (0x000441e3) cell_ai5_widget_list_pane

0xe5a6,	// (0x000441eb) cell_ai5_widget_lrg_icon_pane

0xe861,	// (0x000444a6) tmo_note_info_pane_t1_ParamLimits

0xe876,	// (0x000444bb) tmo_note_info_pane_t2_ParamLimits

0xe88f,	// (0x000444d4) tmo_note_info_pane_t3_ParamLimits

0x836b,	// (0x0003dfb0) tmo_note_info_pane_t4_ParamLimits

0x837d,	// (0x0003dfc2) tmo_note_info_pane_t5_ParamLimits

0xfeaf,	// (0x00045af4) tmo_note_info_pane_t_ParamLimits

0x84a7,	// (0x0003e0ec) settings_container_pane_ParamLimits

0x86ae,	// (0x0003e2f3) indicator_popup_pane_cp5

0x86ae,	// (0x0003e2f3) indicator_popup_pane_cp6

0x4b9f,	// (0x0003a7e4) list_set_graphic_pane_copy1_ParamLimits

0xb93c,	// (0x00041581) bg_popup_window_pane_cp23

0x8743,	// (0x0003e388) popup_tmo_big_image_note_window_g1

0x874f,	// (0x0003e394) popup_tmo_big_image_note_window_t1

0x875f,	// (0x0003e3a4) popup_tmo_big_image_note_window_t2

0x876f,	// (0x0003e3b4) popup_tmo_big_image_note_window_t3

0x0002,

0xfec8,	// (0x00045b0d) popup_tmo_big_image_note_window_t

0x5675,	// (0x0003b2ba) cell_ai5_widget_lrg_icon_pane_g1

0xe8a4,	// (0x000444e9) cell_ai5_widget_lrg_icon_pane_t1

0xe8b2,	// (0x000444f7) cell_ai5_widget_list_row_pane_ParamLimits

0xe8b2,	// (0x000444f7) cell_ai5_widget_list_row_pane

0xe8ca,	// (0x0004450f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe8ca,	// (0x0004450f) cell_ai5_widget_list_row_pane_g1

0xe8d7,	// (0x0004451c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe8d7,	// (0x0004451c) cell_ai5_widget_list_row_pane_t1

0xe902,	// (0x00044547) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe902,	// (0x00044547) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecf,	// (0x00045b14) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecf,	// (0x00045b14) cell_ai5_widget_list_row_pane_t

0xeb90,	// (0x000447d5) main_fep_vtchi_ss_pane

0x882d,	// (0x0003e472) popup_fep_char_pre_window

0x8835,	// (0x0003e47a) popup_fep_ituss_window

0xe954,	// (0x00044599) popup_fep_vkbss_window

0x2b1e,	// (0x00038763) grid_vkbss_keypad_pane_ParamLimits

0x2b1e,	// (0x00038763) grid_vkbss_keypad_pane

0x88a3,	// (0x0003e4e8) ituss_keypad_pane

0x200c,	// (0x00037c51) aid_vkbss_key_offset_ParamLimits

0x200c,	// (0x00037c51) aid_vkbss_key_offset

0xb8f4,	// (0x00041539) cell_vkbss_key_pane_ParamLimits

0xb8f4,	// (0x00041539) cell_vkbss_key_pane

0x88af,	// (0x0003e4f4) bg_cell_vkbss_key_g1_ParamLimits

0x88af,	// (0x0003e4f4) bg_cell_vkbss_key_g1

0xe963,	// (0x000445a8) cell_vkbss_key_3p_pane_ParamLimits

0xe963,	// (0x000445a8) cell_vkbss_key_3p_pane

0xe999,	// (0x000445de) cell_vkbss_key_g1_ParamLimits

0xe999,	// (0x000445de) cell_vkbss_key_g1

0xe9cf,	// (0x00044614) cell_vkbss_key_t1_ParamLimits

0xe9cf,	// (0x00044614) cell_vkbss_key_t1

0x2052,	// (0x00037c97) cell_ituss_key_pane_ParamLimits

0x2052,	// (0x00037c97) cell_ituss_key_pane

0x8983,	// (0x0003e5c8) bg_cell_ituss_key_g1_ParamLimits

0x8983,	// (0x0003e5c8) bg_cell_ituss_key_g1

0x898f,	// (0x0003e5d4) cell_ituss_key_pane_g1_ParamLimits

0x898f,	// (0x0003e5d4) cell_ituss_key_pane_g1

0x2063,	// (0x00037ca8) cell_ituss_key_pane_g2_ParamLimits

0x2063,	// (0x00037ca8) cell_ituss_key_pane_g2

0x0005,

0xfed6,	// (0x00045b1b) cell_ituss_key_pane_g_ParamLimits

0xfed6,	// (0x00045b1b) cell_ituss_key_pane_g

0x20e7,	// (0x00037d2c) cell_ituss_key_t1_ParamLimits

0x20e7,	// (0x00037d2c) cell_ituss_key_t1

0x2121,	// (0x00037d66) cell_ituss_key_t2_ParamLimits

0x2121,	// (0x00037d66) cell_ituss_key_t2

0x2152,	// (0x00037d97) cell_ituss_key_t3_ParamLimits

0x2152,	// (0x00037d97) cell_ituss_key_t3

0x2121,	// (0x00037d66) cell_ituss_key_t4_ParamLimits

0x2121,	// (0x00037d66) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x00045b28) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x00045b28) cell_ituss_key_t

0xea2b,	// (0x00044670) cell_vkbss_key_3p_pane_g1

0xea33,	// (0x00044678) cell_vkbss_key_3p_pane_g2

0xea3b,	// (0x00044680) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x00045b33) cell_vkbss_key_3p_pane_g

0x27f7,	// (0x0003843c) bg_popup_fep_char_preview_window_cp02

0x89cd,	// (0x0003e612) popup_fep_char_pre_window_t1

0xe57d,	// (0x000441c2) main_ai5_sk_pane

0x83f7,	// (0x0003e03c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8403,	// (0x0003e048) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8418,	// (0x0003e05d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8424,	// (0x0003e069) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeba,	// (0x00045aff) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8430,	// (0x0003e075) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbfee,	// (0x00041c33) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xea43,	// (0x00044688) main_ai5_sk_pane_g1

0x34f2,	// (0x00039137) popup_query_code_window_g1

0xe945,	// (0x0004458a) popup_fep_vkb_icf_pane

0x887a,	// (0x0003e4bf) popup_fep_vtchi_icf_pane

0x2b1e,	// (0x00038763) bg_icf_pane

0x2b1e,	// (0x00038763) list_vkb_icf_pane

0x89e4,	// (0x0003e629) bg_icf_pane_cp01

0x89f7,	// (0x0003e63c) vtchi_icf_list_pane

0xea98,	// (0x000446dd) list_vkb_icf_pane_t1_ParamLimits

0xea98,	// (0x000446dd) list_vkb_icf_pane_t1

0x8a7b,	// (0x0003e6c0) vtchi_icf_list_pane_t1_ParamLimits

0x8a7b,	// (0x0003e6c0) vtchi_icf_list_pane_t1

0x8835,	// (0x0003e47a) popup_fep_ituss_window_ParamLimits

0x887a,	// (0x0003e4bf) popup_fep_vtchi_icf_pane_ParamLimits

0x88a3,	// (0x0003e4e8) ituss_keypad_pane_ParamLimits

0x2000,	// (0x00037c45) ituss_sks_pane

0x2b1e,	// (0x00038763) bg_icf_pane_ParamLimits

0xe92a,	// (0x0004456f) icf_edit_indi_pane_ParamLimits

0xe92a,	// (0x0004456f) icf_edit_indi_pane

0x2b1e,	// (0x00038763) list_vkb_icf_pane_ParamLimits

0x89e4,	// (0x0003e629) bg_icf_pane_cp01_ParamLimits

0x8820,	// (0x0003e465) icf_edit_indi_pane_cp01_ParamLimits

0x8820,	// (0x0003e465) icf_edit_indi_pane_cp01

0x89ff,	// (0x0003e644) vtchi_query_pane

0x7b77,	// (0x0003d7bc) icf_edit_indi_pane_g1_ParamLimits

0x7b77,	// (0x0003d7bc) icf_edit_indi_pane_g1

0xeaaf,	// (0x000446f4) icf_edit_indi_pane_g2_ParamLimits

0xeaaf,	// (0x000446f4) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00045b5e) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00045b5e) icf_edit_indi_pane_g

0xeac3,	// (0x00044708) icf_edit_indi_pane_t1

0x8a94,	// (0x0003e6d9) bg_input_focus_pane_cp042

0xbf27,	// (0x00041b6c) vtchi_button_pane

0x8a9d,	// (0x0003e6e2) vtchi_query_pane_t1

0x8aab,	// (0x0003e6f0) vtchi_query_pane_t2

0x8ab9,	// (0x0003e6fe) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00045b4d) vtchi_query_pane_t

0xeb90,	// (0x000447d5) bg_button_pane_cp13

0x8ac7,	// (0x0003e70c) vtchi_button_pane_g1

0x2195,	// (0x00037dda) ituss_sks_pane_g1

0x21a0,	// (0x00037de5) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00045b54) ituss_sks_pane_g

0x8acf,	// (0x0003e714) ituss_sks_pane_t1

0x8add,	// (0x0003e722) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00045b59) ituss_sks_pane_t

0x513d,	// (0x0003ad82) indicator_nsta_pane_cp_g1

0x5146,	// (0x0003ad8b) indicator_nsta_pane_cp_g2

0x514e,	// (0x0003ad93) indicator_nsta_pane_cp_g3

0x5156,	// (0x0003ad9b) indicator_nsta_pane_cp_g4

0x5146,	// (0x0003ad8b) indicator_nsta_pane_cp_g5

0x514e,	// (0x0003ad93) indicator_nsta_pane_cp_g6

0x0005,

0xfa8c,	// (0x000456d1) indicator_nsta_pane_cp_g

0xe38f,	// (0x00043fd4) cell_graphic2_pane_t2_ParamLimits

0xe38f,	// (0x00043fd4) cell_graphic2_pane_t2

0x0001,

0xfda5,	// (0x000459ea) cell_graphic2_pane_t_ParamLimits

0xfda5,	// (0x000459ea) cell_graphic2_pane_t

0xe3c7,	// (0x0004400c) cell_graphic2_control_pane_t1

0xa348,	// (0x0003ff8d) signal_pane_g3_ParamLimits

0xa348,	// (0x0003ff8d) signal_pane_g3

0xa35c,	// (0x0003ffa1) signal_pane_g4_ParamLimits

0xa35c,	// (0x0003ffa1) signal_pane_g4

0xe914,	// (0x00044559) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe914,	// (0x00044559) cell_ai5_widget_list_row_pane_t3

0x89a3,	// (0x0003e5e8) cell_ituss_key_pane_t1_ParamLimits

0x89a3,	// (0x0003e5e8) cell_ituss_key_pane_t1

0x3159,	// (0x00038d9e) form_field_data_wide_pane_vc_t2_ParamLimits

0x3159,	// (0x00038d9e) form_field_data_wide_pane_vc_t2

0x316d,	// (0x00038db2) form_field_data_wide_pane_vc_t3_ParamLimits

0x316d,	// (0x00038db2) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x00045424) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x00045424) form_field_data_wide_pane_vc_t

0x4dda,	// (0x0003aa1f) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4dda,	// (0x0003aa1f) form_field_slider_wide_pane_vc_t3

0x4eb0,	// (0x0003aaf5) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4eb0,	// (0x0003aaf5) form_field_popup_wide_pane_vc_t2

0x4ec7,	// (0x0003ab0c) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4ec7,	// (0x0003ab0c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7b,	// (0x000456c0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x000456c0) form_field_popup_wide_pane_vc_t

0xb757,	// (0x0004139c) aid_fshwr2_btn_pane_ParamLimits

0xb76b,	// (0x000413b0) aid_fshwr2_syb_pane_ParamLimits

0xb77f,	// (0x000413c4) aid_fshwr2_txt_pane_ParamLimits

0x1614,	// (0x00037259) fshwr2_bg_pane_ParamLimits

0xb78f,	// (0x000413d4) fshwr2_func_candi_pane_ParamLimits

0xb7b1,	// (0x000413f6) fshwr2_hwr_syb_pane_ParamLimits

0xb7d5,	// (0x0004141a) fshwr2_icf_pane_ParamLimits

0xd79e,	// (0x000433e3) list_double_graphic_pane_vc_g4_ParamLimits

0xd79e,	// (0x000433e3) list_double_graphic_pane_vc_g4

0x2083,	// (0x00037cc8) cell_ituss_key_pane_g3_ParamLimits

0x2083,	// (0x00037cc8) cell_ituss_key_pane_g3

0x2183,	// (0x00037dc8) cell_ituss_key_t5_ParamLimits

0x2183,	// (0x00037dc8) cell_ituss_key_t5

0xe954,	// (0x00044599) popup_fep_vkbss_window_ParamLimits

0xe587,	// (0x000441cc) aid_cell_ai5_quarter

0xeac3,	// (0x00044708) icf_edit_indi_pane_t1_ParamLimits

0xbb87,	// (0x000417cc) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xbb87,	// (0x000417cc) aid_tch_indicator_popup_pane_cp2

0xbb9a,	// (0x000417df) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xbb9a,	// (0x000417df) aid_tch_query_popup_data_pane_cp2

0x349a,	// (0x000390df) aid_tch_query_popup_pane_ParamLimits

0x349a,	// (0x000390df) aid_tch_query_popup_pane

0x349a,	// (0x000390df) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x349a,	// (0x000390df) aid_tch_query_popup_data_pane_cp1

0x2b1e,	// (0x00038763) cell_fshwr2_syb_bg_pane_ParamLimits

0xb8ca,	// (0x0004150f) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xb8de,	// (0x00041523) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe945,	// (0x0004458a) popup_fep_vkb_icf_pane_ParamLimits

0xb6eb,	// (0x00041330) bg_popup_fep_char_preview_window_g10

0xe62a,	// (0x0004426f) cell_ai5_widget_pane_g11_ParamLimits

0xe62a,	// (0x0004426f) cell_ai5_widget_pane_g11

0x7e20,	// (0x0003da65) cell_ai5_widget_pane_g12_ParamLimits

0x7e20,	// (0x0003da65) cell_ai5_widget_pane_g12

0xe636,	// (0x0004427b) cell_ai5_widget_pane_g13_ParamLimits

0xe636,	// (0x0004427b) cell_ai5_widget_pane_g13

0xe6f3,	// (0x00044338) cell_ai5_widget_pane_t11_ParamLimits

0xe6f3,	// (0x00044338) cell_ai5_widget_pane_t11

0xe705,	// (0x0004434a) cell_ai5_widget_pane_t12_ParamLimits

0xe705,	// (0x0004434a) cell_ai5_widget_pane_t12

0x208f,	// (0x00037cd4) cell_ituss_key_pane_g4_ParamLimits

0x208f,	// (0x00037cd4) cell_ituss_key_pane_g4

0x20ab,	// (0x00037cf0) cell_ituss_key_pane_g5_ParamLimits

0x20ab,	// (0x00037cf0) cell_ituss_key_pane_g5

0x20c7,	// (0x00037d0c) cell_ituss_key_pane_g6_ParamLimits

0x20c7,	// (0x00037d0c) cell_ituss_key_pane_g6

0x3054,	// (0x00038c99) bg_icf_pane_g1

0xea4c,	// (0x00044691) bg_icf_pane_g2

0xea56,	// (0x0004469b) bg_icf_pane_g3

0xea5e,	// (0x000446a3) bg_icf_pane_g4

0xea68,	// (0x000446ad) bg_icf_pane_g5

0xea72,	// (0x000446b7) bg_icf_pane_g6

0xea7c,	// (0x000446c1) bg_icf_pane_g7

0xea84,	// (0x000446c9) bg_icf_pane_g8

0xea8e,	// (0x000446d3) bg_icf_pane_g9

0x0008,

0xfef5,	// (0x00045b3a) bg_icf_pane_g

0x8890,	// (0x0003e4d5) popup_hyb_candi_window_ParamLimits

0x8890,	// (0x0003e4d5) popup_hyb_candi_window

0x30c8,	// (0x00038d0d) bg_popup_sub_pane_cp01_ParamLimits

0x30c8,	// (0x00038d0d) bg_popup_sub_pane_cp01

0x8b18,	// (0x0003e75d) entry_hyb_candi_pane_ParamLimits

0x8b18,	// (0x0003e75d) entry_hyb_candi_pane

0x8b27,	// (0x0003e76c) grid_hyb_candi_pane_ParamLimits

0x8b27,	// (0x0003e76c) grid_hyb_candi_pane

0x8b3c,	// (0x0003e781) grid_hyb_phrase_pane_ParamLimits

0x8b3c,	// (0x0003e781) grid_hyb_phrase_pane

0x8b4b,	// (0x0003e790) cell_hyb_candi_pane_ParamLimits

0x8b4b,	// (0x0003e790) cell_hyb_candi_pane

0xbf30,	// (0x00041b75) cell_hyb_candi_scroll_pane

0x21df,	// (0x00037e24) cell_hyb_candi_pane_g1

0x8b67,	// (0x0003e7ac) cell_hyb_candi_pane_t1

0x8b75,	// (0x0003e7ba) cell_hyb_phrase_pane

0x21df,	// (0x00037e24) cell_hyb_phrase_pane_g1

0x8b7e,	// (0x0003e7c3) cell_hyb_phrase_pane_t1

0x8b8c,	// (0x0003e7d1) entry_hyb_candi_pane_t1

0x27f7,	// (0x0003843c) input_focus_pane_cp06

0x8b9a,	// (0x0003e7df) cell_hyb_candi_scroll_pane_g1

0x8ba2,	// (0x0003e7e7) cell_hyb_candi_scroll_pane_g1_aid

0x8baa,	// (0x0003e7ef) cell_hyb_candi_scroll_pane_g2

0x8bb2,	// (0x0003e7f7) cell_hyb_candi_scroll_pane_g2_aid

0x8bba,	// (0x0003e7ff) cell_hyb_candi_scroll_pane_g3

0x8bc2,	// (0x0003e807) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
