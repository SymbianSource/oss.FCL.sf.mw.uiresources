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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000310fe };

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
0x537e,	// (0x0003647c) Screen

0x538a,	// (0x00036488) application_window_ParamLimits

0x538a,	// (0x00036488) application_window

0xe4df,	// (0x0003f5dd) screen_g1

0x53e6,	// (0x000364e4) area_bottom_pane_ParamLimits

0x53e6,	// (0x000364e4) area_bottom_pane

0x54a6,	// (0x000365a4) area_top_pane_ParamLimits

0x54a6,	// (0x000365a4) area_top_pane

0x5544,	// (0x00036642) main_pane_ParamLimits

0x5544,	// (0x00036642) main_pane

0xe4e9,	// (0x0003f5e7) misc_graphics

0x8c19,	// (0x00039d17) battery_pane_ParamLimits

0x8c19,	// (0x00039d17) battery_pane

0x98d7,	// (0x0003a9d5) bg_status_flat_pane_g8

0x98df,	// (0x0003a9dd) bg_status_flat_pane_g9

0x8ce1,	// (0x00039ddf) context_pane_ParamLimits

0x8ce1,	// (0x00039ddf) context_pane

0x8e05,	// (0x00039f03) navi_pane_ParamLimits

0x8e05,	// (0x00039f03) navi_pane

0x8e95,	// (0x00039f93) signal_pane_ParamLimits

0x8e95,	// (0x00039f93) signal_pane

0x0008,

0xf874,	// (0x00040972) bg_status_flat_pane_g

0x8f02,	// (0x0003a000) status_pane_g1_ParamLimits

0x8f02,	// (0x0003a000) status_pane_g1

0x8f16,	// (0x0003a014) status_pane_g2_ParamLimits

0x8f16,	// (0x0003a014) status_pane_g2

0x8f22,	// (0x0003a020) status_pane_g3_ParamLimits

0x8f22,	// (0x0003a020) status_pane_g3

0x0004,

0xf79b,	// (0x00040899) status_pane_g_ParamLimits

0xf79b,	// (0x00040899) status_pane_g

0x8f56,	// (0x0003a054) title_pane_ParamLimits

0x8f56,	// (0x0003a054) title_pane

0x8f93,	// (0x0003a091) uni_indicator_pane_ParamLimits

0x8f93,	// (0x0003a091) uni_indicator_pane

0x6e3d,	// (0x00037f3b) bg_list_pane_ParamLimits

0x6e3d,	// (0x00037f3b) bg_list_pane

0x6e5d,	// (0x00037f5b) find_pane

0x6e65,	// (0x00037f63) listscroll_app_pane_ParamLimits

0x6e65,	// (0x00037f63) listscroll_app_pane

0x6e71,	// (0x00037f6f) listscroll_form_pane

0x6e79,	// (0x00037f77) listscroll_gen_pane_ParamLimits

0x6e79,	// (0x00037f77) listscroll_gen_pane

0x6e8d,	// (0x00037f8b) listscroll_set_pane

0x6147,	// (0x00037245) main_idle_act_pane

0x6936,	// (0x00037a34) main_idle_trad_pane

0x6936,	// (0x00037a34) main_list_empty_pane

0x6ea7,	// (0x00037fa5) main_midp_pane

0x6eb3,	// (0x00037fb1) main_pane_g1_ParamLimits

0x6eb3,	// (0x00037fb1) main_pane_g1

0x6ec1,	// (0x00037fbf) popup_ai_message_window_ParamLimits

0x6ec1,	// (0x00037fbf) popup_ai_message_window

0x6f75,	// (0x00038073) popup_fep_china_uni_window_ParamLimits

0x6f75,	// (0x00038073) popup_fep_china_uni_window

0x869a,	// (0x00039798) popup_fep_japan_candidate_window_ParamLimits

0x869a,	// (0x00039798) popup_fep_japan_candidate_window

0x86c4,	// (0x000397c2) popup_fep_japan_predictive_window_ParamLimits

0x86c4,	// (0x000397c2) popup_fep_japan_predictive_window

0x86fa,	// (0x000397f8) popup_find_window

0x8707,	// (0x00039805) popup_grid_graphic_window_ParamLimits

0x8707,	// (0x00039805) popup_grid_graphic_window

0x8735,	// (0x00039833) popup_large_graphic_colour_window

0x875b,	// (0x00039859) popup_menu_window_ParamLimits

0x875b,	// (0x00039859) popup_menu_window

0x8925,	// (0x00039a23) popup_note_image_window

0x890f,	// (0x00039a0d) popup_note_wait_window_ParamLimits

0x890f,	// (0x00039a0d) popup_note_wait_window

0x890f,	// (0x00039a0d) popup_note_window_ParamLimits

0x890f,	// (0x00039a0d) popup_note_window

0x898b,	// (0x00039a89) popup_query_code_window_ParamLimits

0x898b,	// (0x00039a89) popup_query_code_window

0x89a1,	// (0x00039a9f) popup_query_data_code_window_ParamLimits

0x89a1,	// (0x00039a9f) popup_query_data_code_window

0x89c4,	// (0x00039ac2) popup_query_data_window_ParamLimits

0x89c4,	// (0x00039ac2) popup_query_data_window

0x89e6,	// (0x00039ae4) popup_query_sat_info_window_ParamLimits

0x89e6,	// (0x00039ae4) popup_query_sat_info_window

0x8a25,	// (0x00039b23) popup_snote_single_graphic_window_ParamLimits

0x8a25,	// (0x00039b23) popup_snote_single_graphic_window

0x8a25,	// (0x00039b23) popup_snote_single_text_window_ParamLimits

0x8a25,	// (0x00039b23) popup_snote_single_text_window

0x8a3c,	// (0x00039b3a) popup_sub_window_general

0x8b82,	// (0x00039c80) popup_window_general_ParamLimits

0x8b82,	// (0x00039c80) popup_window_general

0x8b9b,	// (0x00039c99) power_save_pane

0x6c9c,	// (0x00037d9a) control_pane_g1_ParamLimits

0x6c9c,	// (0x00037d9a) control_pane_g1

0x6cc5,	// (0x00037dc3) control_pane_g2_ParamLimits

0x6cc5,	// (0x00037dc3) control_pane_g2

0x6cea,	// (0x00037de8) control_pane_g3_ParamLimits

0x6cea,	// (0x00037de8) control_pane_g3

0x0007,

0xf783,	// (0x00040881) control_pane_g_ParamLimits

0xf783,	// (0x00040881) control_pane_g

0x6d42,	// (0x00037e40) control_pane_t1_ParamLimits

0x6d42,	// (0x00037e40) control_pane_t1

0x6d8e,	// (0x00037e8c) control_pane_t2_ParamLimits

0x6d8e,	// (0x00037e8c) control_pane_t2

0x0002,

0xf794,	// (0x00040892) control_pane_t_ParamLimits

0xf794,	// (0x00040892) control_pane_t

0x6bc1,	// (0x00037cbf) navi_navi_volume_pane_cp1

0x6bc9,	// (0x00037cc7) status_small_icon_pane

0x6bd1,	// (0x00037ccf) status_small_pane_g1_ParamLimits

0x6bd1,	// (0x00037ccf) status_small_pane_g1

0x6c05,	// (0x00037d03) status_small_pane_g2_ParamLimits

0x6c05,	// (0x00037d03) status_small_pane_g2

0x6c11,	// (0x00037d0f) status_small_pane_g3_ParamLimits

0x6c11,	// (0x00037d0f) status_small_pane_g3

0x6c1d,	// (0x00037d1b) status_small_pane_g4_ParamLimits

0x6c1d,	// (0x00037d1b) status_small_pane_g4

0x6c29,	// (0x00037d27) status_small_pane_g5_ParamLimits

0x6c29,	// (0x00037d27) status_small_pane_g5

0x6c37,	// (0x00037d35) status_small_pane_g6_ParamLimits

0x6c37,	// (0x00037d35) status_small_pane_g6

0x0007,

0xf772,	// (0x00040870) status_small_pane_g_ParamLimits

0xf772,	// (0x00040870) status_small_pane_g

0x6c66,	// (0x00037d64) status_small_pane_t1

0x6c88,	// (0x00037d86) status_small_wait_pane_ParamLimits

0x6c88,	// (0x00037d86) status_small_wait_pane

0x64ba,	// (0x000375b8) aid_levels_signal_ParamLimits

0x64ba,	// (0x000375b8) aid_levels_signal

0x64cc,	// (0x000375ca) signal_pane_g1_ParamLimits

0x64cc,	// (0x000375ca) signal_pane_g1

0x64e1,	// (0x000375df) signal_pane_g2_ParamLimits

0x64e1,	// (0x000375df) signal_pane_g2

0x0003,

0xf703,	// (0x00040801) signal_pane_g_ParamLimits

0xf703,	// (0x00040801) signal_pane_g

0x234e,	// (0x0003344c) context_pane_g1

0x57a3,	// (0x000368a1) title_pane_g1

0x57c1,	// (0x000368bf) title_pane_t1

0xef4c,	// (0x0004004a) title_pane_t2

0xef72,	// (0x00040070) title_pane_t3

0x0002,

0xf557,	// (0x00040655) title_pane_t

0x8fab,	// (0x0003a0a9) aid_levels_battery_ParamLimits

0x8fab,	// (0x0003a0a9) aid_levels_battery

0x8fbf,	// (0x0003a0bd) battery_pane_g1_ParamLimits

0x8fbf,	// (0x0003a0bd) battery_pane_g1

0x8fd5,	// (0x0003a0d3) battery_pane_g2_ParamLimits

0x8fd5,	// (0x0003a0d3) battery_pane_g2

0x0001,

0xf7a6,	// (0x000408a4) battery_pane_g_ParamLimits

0xf7a6,	// (0x000408a4) battery_pane_g

0xa221,	// (0x0003b31f) uni_indicator_pane_g1

0xa237,	// (0x0003b335) uni_indicator_pane_g2

0xa24d,	// (0x0003b34b) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x00040a1a) uni_indicator_pane_g

0x25fc,	// (0x000336fa) navi_icon_pane_ParamLimits

0x25fc,	// (0x000336fa) navi_icon_pane

0x2580,	// (0x0003367e) navi_midp_pane

0x2618,	// (0x00033716) navi_navi_pane

0x2622,	// (0x00033720) navi_text_pane_ParamLimits

0x2622,	// (0x00033720) navi_text_pane

0xe4df,	// (0x0003f5dd) status_small_wait_pane_g1

0xf26d,	// (0x0004036b) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x00040a15) status_small_wait_pane_g

0x9f34,	// (0x0003b032) navi_navi_icon_text_pane

0x9f3c,	// (0x0003b03a) navi_navi_pane_g1_ParamLimits

0x9f3c,	// (0x0003b03a) navi_navi_pane_g1

0x9f4e,	// (0x0003b04c) navi_navi_pane_g2_ParamLimits

0x9f4e,	// (0x0003b04c) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x000409e3) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x000409e3) navi_navi_pane_g

0x9f60,	// (0x0003b05e) navi_navi_tabs_pane

0x9f69,	// (0x0003b067) navi_navi_text_pane

0x9f34,	// (0x0003b032) navi_navi_volume_pane

0x9f10,	// (0x0003b00e) navi_text_pane_t1

0x9f04,	// (0x0003b002) navi_icon_pane_g1

0x9e57,	// (0x0003af55) navi_navi_text_pane_t1

0x729c,	// (0x0003839a) navi_navi_volume_pane_g1

0x72a4,	// (0x000383a2) volume_small_pane

0x9dbd,	// (0x0003aebb) navi_navi_icon_text_pane_g1

0x9dc5,	// (0x0003aec3) navi_navi_icon_text_pane_t1

0x2618,	// (0x00033716) navi_tabs_2_long_pane

0x2618,	// (0x00033716) navi_tabs_2_pane

0x2618,	// (0x00033716) navi_tabs_3_long_pane

0x2618,	// (0x00033716) navi_tabs_3_pane

0x2618,	// (0x00033716) navi_tabs_4_pane

0x727c,	// (0x0003837a) tabs_2_active_pane_ParamLimits

0x727c,	// (0x0003837a) tabs_2_active_pane

0x728c,	// (0x0003838a) tabs_2_passive_pane_ParamLimits

0x728c,	// (0x0003838a) tabs_2_passive_pane

0x724a,	// (0x00038348) tabs_3_active_pane_ParamLimits

0x724a,	// (0x00038348) tabs_3_active_pane

0x725a,	// (0x00038358) tabs_3_passive_pane_ParamLimits

0x725a,	// (0x00038358) tabs_3_passive_pane

0x726b,	// (0x00038369) tabs_3_passive_pane_cp_ParamLimits

0x726b,	// (0x00038369) tabs_3_passive_pane_cp

0x71fe,	// (0x000382fc) tabs_4_active_pane_ParamLimits

0x71fe,	// (0x000382fc) tabs_4_active_pane

0x7211,	// (0x0003830f) tabs_4_passive_pane_ParamLimits

0x7211,	// (0x0003830f) tabs_4_passive_pane

0x7222,	// (0x00038320) tabs_4_passive_pane_cp_ParamLimits

0x7222,	// (0x00038320) tabs_4_passive_pane_cp

0x7233,	// (0x00038331) tabs_4_passive_pane_cp2_ParamLimits

0x7233,	// (0x00038331) tabs_4_passive_pane_cp2

0x71da,	// (0x000382d8) tabs_2_long_active_pane_ParamLimits

0x71da,	// (0x000382d8) tabs_2_long_active_pane

0x71ec,	// (0x000382ea) tabs_2_long_passive_pane_ParamLimits

0x71ec,	// (0x000382ea) tabs_2_long_passive_pane

0x719b,	// (0x00038299) tabs_3_long_active_pane_ParamLimits

0x719b,	// (0x00038299) tabs_3_long_active_pane

0x71ae,	// (0x000382ac) tabs_3_long_passive_pane_ParamLimits

0x71ae,	// (0x000382ac) tabs_3_long_passive_pane

0x71c7,	// (0x000382c5) tabs_3_long_passive_pane_cp_ParamLimits

0x71c7,	// (0x000382c5) tabs_3_long_passive_pane_cp

0x7141,	// (0x0003823f) volume_small_pane_g1

0x714a,	// (0x00038248) volume_small_pane_g2

0x7153,	// (0x00038251) volume_small_pane_g3

0x715c,	// (0x0003825a) volume_small_pane_g4

0x7165,	// (0x00038263) volume_small_pane_g5

0x716e,	// (0x0003826c) volume_small_pane_g6

0x7177,	// (0x00038275) volume_small_pane_g7

0x7180,	// (0x0003827e) volume_small_pane_g8

0x7189,	// (0x00038287) volume_small_pane_g9

0x7192,	// (0x00038290) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x000409af) volume_small_pane_g

0xef84,	// (0x00040082) bg_active_tab_pane_cp2_ParamLimits

0xef84,	// (0x00040082) bg_active_tab_pane_cp2

0x5829,	// (0x00036927) tabs_3_active_pane_g1

0x5831,	// (0x0003692f) tabs_3_active_pane_t1

0xef84,	// (0x00040082) bg_passive_tab_pane_cp2_ParamLimits

0xef84,	// (0x00040082) bg_passive_tab_pane_cp2

0x5829,	// (0x00036927) tabs_3_passive_pane_g1

0x5831,	// (0x0003692f) tabs_3_passive_pane_t1

0xef84,	// (0x00040082) bg_active_tab_pane_cp3_ParamLimits

0xef84,	// (0x00040082) bg_active_tab_pane_cp3

0x5843,	// (0x00036941) tabs_4_active_pane_g1

0x584b,	// (0x00036949) tabs_4_active_pane_t1

0xef84,	// (0x00040082) bg_passive_tab_pane_cp3_ParamLimits

0xef84,	// (0x00040082) bg_passive_tab_pane_cp3

0x5843,	// (0x00036941) tabs_4_1_passive_pane_g1

0x584b,	// (0x00036949) tabs_4_1_passive_pane_t1

0x6ea7,	// (0x00037fa5) list_highlight_pane_cp2

0xa49c,	// (0x0003b59a) list_set_pane_ParamLimits

0xa49c,	// (0x0003b59a) list_set_pane

0xa564,	// (0x0003b662) main_pane_set_t1_ParamLimits

0xa564,	// (0x0003b662) main_pane_set_t1

0xa584,	// (0x0003b682) main_pane_set_t2_ParamLimits

0xa584,	// (0x0003b682) main_pane_set_t2

0xa598,	// (0x0003b696) main_pane_set_t3_ParamLimits

0xa598,	// (0x0003b696) main_pane_set_t3

0xa5ac,	// (0x0003b6aa) main_pane_set_t4_ParamLimits

0xa5ac,	// (0x0003b6aa) main_pane_set_t4

0x0003,

0xf981,	// (0x00040a7f) main_pane_set_t_ParamLimits

0xf981,	// (0x00040a7f) main_pane_set_t

0xa5c0,	// (0x0003b6be) setting_code_pane

0xa5ca,	// (0x0003b6c8) setting_slider_graphic_pane

0xa5ca,	// (0x0003b6c8) setting_slider_pane

0xa5ca,	// (0x0003b6c8) setting_text_pane

0xa5ca,	// (0x0003b6c8) setting_volume_pane

0x585d,	// (0x0003695b) volume_set_pane

0xef84,	// (0x00040082) bg_set_opt_pane_cp

0x5867,	// (0x00036965) setting_slider_pane_t1

0x5880,	// (0x0003697e) setting_slider_pane_t2

0x589a,	// (0x00036998) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004065c) setting_slider_pane_t

0x58b2,	// (0x000369b0) slider_set_pane

0xe4e9,	// (0x0003f5e7) bg_set_opt_pane_cp2

0xef92,	// (0x00040090) setting_slider_graphic_pane_g1

0x58c8,	// (0x000369c6) setting_slider_graphic_pane_t1

0x58d8,	// (0x000369d6) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00040663) setting_slider_graphic_pane_t

0x58e8,	// (0x000369e6) slider_set_pane_cp

0xe4e9,	// (0x0003f5e7) input_focus_pane_cp1

0xa45d,	// (0x0003b55b) list_set_text_pane

0xe4df,	// (0x0003f5dd) setting_text_pane_g1

0xe4e9,	// (0x0003f5e7) input_focus_pane_cp2

0xe4df,	// (0x0003f5dd) setting_code_pane_g1

0xef9b,	// (0x00040099) setting_code_pane_t1

0x3c14,	// (0x00034d12) set_text_pane_t1_ParamLimits

0x3c14,	// (0x00034d12) set_text_pane_t1

0x1e70,	// (0x00032f6e) set_opt_bg_pane_g1

0x1e78,	// (0x00032f76) set_opt_bg_pane_g2

0xa435,	// (0x0003b533) set_opt_bg_pane_g3

0x1e88,	// (0x00032f86) set_opt_bg_pane_g4

0x1e90,	// (0x00032f8e) set_opt_bg_pane_g5

0x1e98,	// (0x00032f96) set_opt_bg_pane_g6

0xa43f,	// (0x0003b53d) set_opt_bg_pane_g7

0xa449,	// (0x0003b547) set_opt_bg_pane_g8

0xa453,	// (0x0003b551) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00040a6c) set_opt_bg_pane_g

0xa428,	// (0x0003b526) slider_set_pane_g1

0x734d,	// (0x0003844b) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00040a5d) slider_set_pane_g

0x72ad,	// (0x000383ab) volume_set_pane_g1

0x72b7,	// (0x000383b5) volume_set_pane_g2

0x72c1,	// (0x000383bf) volume_set_pane_g3

0x72cb,	// (0x000383c9) volume_set_pane_g4

0x72d5,	// (0x000383d3) volume_set_pane_g5

0x72df,	// (0x000383dd) volume_set_pane_g6

0x72e9,	// (0x000383e7) volume_set_pane_g7

0x72f3,	// (0x000383f1) volume_set_pane_g8

0x72fd,	// (0x000383fb) volume_set_pane_g9

0x7307,	// (0x00038405) volume_set_pane_g10

0x0009,

0xf937,	// (0x00040a35) volume_set_pane_g

0x58f0,	// (0x000369ee) indicator_pane_ParamLimits

0x58f0,	// (0x000369ee) indicator_pane

0x58fc,	// (0x000369fa) main_idle_pane_g2_ParamLimits

0x58fc,	// (0x000369fa) main_idle_pane_g2

0x5924,	// (0x00036a22) main_pane_idle_g1_ParamLimits

0x5924,	// (0x00036a22) main_pane_idle_g1

0xefa9,	// (0x000400a7) popup_clock_digital_analogue_window_ParamLimits

0xefa9,	// (0x000400a7) popup_clock_digital_analogue_window

0x5932,	// (0x00036a30) soft_indicator_pane_ParamLimits

0x5932,	// (0x00036a30) soft_indicator_pane

0x5940,	// (0x00036a3e) wallpaper_pane_ParamLimits

0x5940,	// (0x00036a3e) wallpaper_pane

0xe4df,	// (0x0003f5dd) wallpaper_pane_g1

0x594c,	// (0x00036a4a) indicator_pane_g1_ParamLimits

0x594c,	// (0x00036a4a) indicator_pane_g1

0xa8a6,	// (0x0003b9a4) navi_navi_icon_text_pane_srt_g1

0xefd7,	// (0x000400d5) soft_indicator_pane_t1

0xeff1,	// (0x000400ef) aid_ps_area_pane

0x5958,	// (0x00036a56) aid_ps_clock_pane

0xf002,	// (0x00040100) aid_ps_indicator_pane

0xf00e,	// (0x0004010c) indicator_ps_pane_ParamLimits

0xf00e,	// (0x0004010c) indicator_ps_pane

0xf01d,	// (0x0004011b) power_save_pane_g1_ParamLimits

0xf01d,	// (0x0004011b) power_save_pane_g1

0xf029,	// (0x00040127) power_save_pane_g2_ParamLimits

0xf029,	// (0x00040127) power_save_pane_g2

0x539a,	// (0x00036498) aid_navinavi_width_pane

0xeff1,	// (0x000400ef) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00040668) power_save_pane_g_ParamLimits

0xf56a,	// (0x00040668) power_save_pane_g

0xf037,	// (0x00040135) power_save_pane_t1_ParamLimits

0xf037,	// (0x00040135) power_save_pane_t1

0x5958,	// (0x00036a56) aid_ps_clock_pane_ParamLimits

0xf002,	// (0x00040100) aid_ps_indicator_pane_ParamLimits

0xf049,	// (0x00040147) power_save_pane_t4_ParamLimits

0xf049,	// (0x00040147) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004066d) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004066d) power_save_pane_t

0xf073,	// (0x00040171) power_save_t3_ParamLimits

0xf073,	// (0x00040171) power_save_t3

0xf05e,	// (0x0004015c) power_save_t2_ParamLimits

0xf05e,	// (0x0004015c) power_save_t2

0xf088,	// (0x00040186) indicator_ps_pane_g1

0x5966,	// (0x00036a64) ai_gene_pane_ParamLimits

0x5966,	// (0x00036a64) ai_gene_pane

0x5972,	// (0x00036a70) ai_links_pane_ParamLimits

0x5972,	// (0x00036a70) ai_links_pane

0x597e,	// (0x00036a7c) indicator_pane_cp1_ParamLimits

0x597e,	// (0x00036a7c) indicator_pane_cp1

0x598a,	// (0x00036a88) main_pane_idle_g1_cp_ParamLimits

0x598a,	// (0x00036a88) main_pane_idle_g1_cp

0xf091,	// (0x0004018f) popup_ai_links_title_window

0x5996,	// (0x00036a94) soft_indicator_pane_cp1_ParamLimits

0x5996,	// (0x00036a94) soft_indicator_pane_cp1

0xa20f,	// (0x0003b30d) ai_links_pane_g1

0xa218,	// (0x0003b316) grid_ai_links_pane

0xa1f4,	// (0x0003b2f2) ai_gene_pane_1

0xa1fd,	// (0x0003b2fb) ai_gene_pane_2

0xa206,	// (0x0003b304) list_highlight_pane_cp4

0xa1d4,	// (0x0003b2d2) cell_ai_link_pane_ParamLimits

0xa1d4,	// (0x0003b2d2) cell_ai_link_pane

0xa1cc,	// (0x0003b2ca) cell_ai_link_pane_g1

0xf26d,	// (0x0004036b) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x00040a10) cell_ai_link_pane_g

0xe4e9,	// (0x0003f5e7) grid_highlight_cp2

0xe4e9,	// (0x0003f5e7) bg_popup_sub_pane_cp1

0xf0a8,	// (0x000401a6) popup_ai_links_title_window_t1

0xa118,	// (0x0003b216) ai_gene_pane_1_g1_ParamLimits

0xa118,	// (0x0003b216) ai_gene_pane_1_g1

0xa124,	// (0x0003b222) ai_gene_pane_1_g2_ParamLimits

0xa124,	// (0x0003b222) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x00040a06) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x00040a06) ai_gene_pane_1_g

0xa131,	// (0x0003b22f) ai_gene_pane_1_t1_ParamLimits

0xa131,	// (0x0003b22f) ai_gene_pane_1_t1

0xa165,	// (0x0003b263) grid_ai_soft_ind_pane

0xa103,	// (0x0003b201) ai_gene_pane_2_t1_ParamLimits

0xa103,	// (0x0003b201) ai_gene_pane_2_t1

0x59a2,	// (0x00036aa0) main_pane_empty_t1_ParamLimits

0x59a2,	// (0x00036aa0) main_pane_empty_t1

0x59ba,	// (0x00036ab8) main_pane_empty_t2_ParamLimits

0x59ba,	// (0x00036ab8) main_pane_empty_t2

0x59cf,	// (0x00036acd) main_pane_empty_t3_ParamLimits

0x59cf,	// (0x00036acd) main_pane_empty_t3

0x59e1,	// (0x00036adf) main_pane_empty_t4_ParamLimits

0x59e1,	// (0x00036adf) main_pane_empty_t4

0x59f3,	// (0x00036af1) main_pane_empty_t5_ParamLimits

0x59f3,	// (0x00036af1) main_pane_empty_t5

0x0004,

0xf574,	// (0x00040672) main_pane_empty_t_ParamLimits

0xf574,	// (0x00040672) main_pane_empty_t

0x1ec1,	// (0x00032fbf) bg_popup_window_pane_ParamLimits

0x1ec1,	// (0x00032fbf) bg_popup_window_pane

0x9e65,	// (0x0003af63) find_popup_pane_cp2_ParamLimits

0x9e65,	// (0x0003af63) find_popup_pane_cp2

0x9e71,	// (0x0003af6f) heading_pane_ParamLimits

0x9e71,	// (0x0003af6f) heading_pane

0xe4e9,	// (0x0003f5e7) bg_popup_sub_pane

0x9ddf,	// (0x0003aedd) bg_popup_window_pane_g1_ParamLimits

0x9ddf,	// (0x0003aedd) bg_popup_window_pane_g1

0x9deb,	// (0x0003aee9) bg_popup_window_pane_g2_ParamLimits

0x9deb,	// (0x0003aee9) bg_popup_window_pane_g2

0x9df7,	// (0x0003aef5) bg_popup_window_pane_g3_ParamLimits

0x9df7,	// (0x0003aef5) bg_popup_window_pane_g3

0x9e03,	// (0x0003af01) bg_popup_window_pane_g4_ParamLimits

0x9e03,	// (0x0003af01) bg_popup_window_pane_g4

0x9e0f,	// (0x0003af0d) bg_popup_window_pane_g5_ParamLimits

0x9e0f,	// (0x0003af0d) bg_popup_window_pane_g5

0x9e1b,	// (0x0003af19) bg_popup_window_pane_g6_ParamLimits

0x9e1b,	// (0x0003af19) bg_popup_window_pane_g6

0x9e27,	// (0x0003af25) bg_popup_window_pane_g7_ParamLimits

0x9e27,	// (0x0003af25) bg_popup_window_pane_g7

0x9e33,	// (0x0003af31) bg_popup_window_pane_g8_ParamLimits

0x9e33,	// (0x0003af31) bg_popup_window_pane_g8

0x9e3f,	// (0x0003af3d) bg_popup_window_pane_g9_ParamLimits

0x9e3f,	// (0x0003af3d) bg_popup_window_pane_g9

0x9e4b,	// (0x0003af49) bg_popup_window_pane_g10_ParamLimits

0x9e4b,	// (0x0003af49) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x000409ce) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x000409ce) bg_popup_window_pane_g

0x9d74,	// (0x0003ae72) bg_popup_heading_pane_ParamLimits

0x9d74,	// (0x0003ae72) bg_popup_heading_pane

0x745e,	// (0x0003855c) tabs_4_passive_pane_cp_srt_ParamLimits

0x745e,	// (0x0003855c) tabs_4_passive_pane_cp_srt

0x7470,	// (0x0003856e) tabs_4_passive_pane_srt_ParamLimits

0x9d88,	// (0x0003ae86) heading_pane_g2

0x7470,	// (0x0003856e) tabs_4_passive_pane_srt

0x6ea7,	// (0x00037fa5) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6ea7,	// (0x00037fa5) bg_passive_tab_pane_cp3_srt

0x9d90,	// (0x0003ae8e) heading_pane_t1_ParamLimits

0x9d90,	// (0x0003ae8e) heading_pane_t1

0x9da7,	// (0x0003aea5) heading_pane_t2_ParamLimits

0x9da7,	// (0x0003aea5) heading_pane_t2

0x0001,

0xf8cb,	// (0x000409c9) heading_pane_t_ParamLimits

0xf8cb,	// (0x000409c9) heading_pane_t

0x989f,	// (0x0003a99d) bg_popup_heading_pane_g1

0x994e,	// (0x0003aa4c) bg_popup_heading_pane_g2

0x9958,	// (0x0003aa56) bg_popup_heading_pane_g3

0x9962,	// (0x0003aa60) bg_popup_heading_pane_g4

0x996c,	// (0x0003aa6a) bg_popup_heading_pane_g5

0x9976,	// (0x0003aa74) bg_popup_heading_pane_g6

0x997e,	// (0x0003aa7c) bg_popup_heading_pane_g7

0x9986,	// (0x0003aa84) bg_popup_heading_pane_g8

0x9990,	// (0x0003aa8e) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x00040985) bg_popup_heading_pane_g

0x90ad,	// (0x0003a1ab) bg_popup_sub_pane_g1

0x90bd,	// (0x0003a1bb) bg_popup_sub_pane_g2

0x90b5,	// (0x0003a1b3) bg_popup_sub_pane_g3

0x90cd,	// (0x0003a1cb) bg_popup_sub_pane_g4

0x90c5,	// (0x0003a1c3) bg_popup_sub_pane_g5

0x90d5,	// (0x0003a1d3) bg_popup_sub_pane_g6

0x90dd,	// (0x0003a1db) bg_popup_sub_pane_g7

0x90ed,	// (0x0003a1eb) bg_popup_sub_pane_g8

0x90e5,	// (0x0003a1e3) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0004095f) bg_popup_sub_pane_g

0xf0b7,	// (0x000401b5) bg_popup_window_pane_cp5_ParamLimits

0xf0b7,	// (0x000401b5) bg_popup_window_pane_cp5

0xf0d3,	// (0x000401d1) popup_note_window_g1_ParamLimits

0xf0d3,	// (0x000401d1) popup_note_window_g1

0xf0df,	// (0x000401dd) popup_note_window_t1_ParamLimits

0xf0df,	// (0x000401dd) popup_note_window_t1

0xf0f5,	// (0x000401f3) popup_note_window_t2_ParamLimits

0xf0f5,	// (0x000401f3) popup_note_window_t2

0xf10b,	// (0x00040209) popup_note_window_t3_ParamLimits

0xf10b,	// (0x00040209) popup_note_window_t3

0xf121,	// (0x0004021f) popup_note_window_t4_ParamLimits

0xf121,	// (0x0004021f) popup_note_window_t4

0xf149,	// (0x00040247) popup_note_window_t5_ParamLimits

0xf149,	// (0x00040247) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004067d) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004067d) popup_note_window_t

0xf16d,	// (0x0004026b) bg_popup_window_pane_cp6_ParamLimits

0xf16d,	// (0x0004026b) bg_popup_window_pane_cp6

0x981b,	// (0x0003a919) popup_note_image_window_g1_ParamLimits

0x981b,	// (0x0003a919) popup_note_image_window_g1

0x9827,	// (0x0003a925) popup_note_image_window_g2_ParamLimits

0x9827,	// (0x0003a925) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00040953) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00040953) popup_note_image_window_g

0x9840,	// (0x0003a93e) popup_note_image_window_t1_ParamLimits

0x9840,	// (0x0003a93e) popup_note_image_window_t1

0x9859,	// (0x0003a957) popup_note_image_window_t2_ParamLimits

0x9859,	// (0x0003a957) popup_note_image_window_t2

0x9872,	// (0x0003a970) popup_note_image_window_t3_ParamLimits

0x9872,	// (0x0003a970) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x00040958) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x00040958) popup_note_image_window_t

0x96db,	// (0x0003a7d9) bg_popup_window_pane_cp7_ParamLimits

0x96db,	// (0x0003a7d9) bg_popup_window_pane_cp7

0x970b,	// (0x0003a809) popup_note_wait_window_g1_ParamLimits

0x970b,	// (0x0003a809) popup_note_wait_window_g1

0x9717,	// (0x0003a815) popup_note_wait_window_g2_ParamLimits

0x9717,	// (0x0003a815) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00040941) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00040941) popup_note_wait_window_g

0x972f,	// (0x0003a82d) popup_note_wait_window_t1_ParamLimits

0x972f,	// (0x0003a82d) popup_note_wait_window_t1

0x9756,	// (0x0003a854) popup_note_wait_window_t2_ParamLimits

0x9756,	// (0x0003a854) popup_note_wait_window_t2

0x9774,	// (0x0003a872) popup_note_wait_window_t3_ParamLimits

0x9774,	// (0x0003a872) popup_note_wait_window_t3

0x9787,	// (0x0003a885) popup_note_wait_window_t4_ParamLimits

0x9787,	// (0x0003a885) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x00040948) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x00040948) popup_note_wait_window_t

0x97ac,	// (0x0003a8aa) wait_bar_pane_ParamLimits

0x97ac,	// (0x0003a8aa) wait_bar_pane

0xe4e9,	// (0x0003f5e7) wait_anim_pane

0xe4e9,	// (0x0003f5e7) wait_border_pane

0xe4df,	// (0x0003f5dd) wait_anim_pane_g1

0xe4df,	// (0x0003f5dd) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x000407fc) wait_anim_pane_g

0x967f,	// (0x0003a77d) wait_border_pane_g1

0x968a,	// (0x0003a788) wait_border_pane_g2

0x9693,	// (0x0003a791) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0004093a) wait_border_pane_g

0x94e9,	// (0x0003a5e7) bg_popup_window_pane_cp16_ParamLimits

0x94e9,	// (0x0003a5e7) bg_popup_window_pane_cp16

0x95e9,	// (0x0003a6e7) indicator_popup_pane_cp4_ParamLimits

0x95e9,	// (0x0003a6e7) indicator_popup_pane_cp4

0x95fd,	// (0x0003a6fb) popup_query_data_window_t1_ParamLimits

0x95fd,	// (0x0003a6fb) popup_query_data_window_t1

0x960f,	// (0x0003a70d) popup_query_data_window_t2_ParamLimits

0x960f,	// (0x0003a70d) popup_query_data_window_t2

0x9628,	// (0x0003a726) popup_query_data_window_t3_ParamLimits

0x9628,	// (0x0003a726) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00040933) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00040933) popup_query_data_window_t

0x9642,	// (0x0003a740) query_popup_data_pane_ParamLimits

0x9642,	// (0x0003a740) query_popup_data_pane

0x9656,	// (0x0003a754) query_popup_data_pane_cp1_ParamLimits

0x9656,	// (0x0003a754) query_popup_data_pane_cp1

0x94e9,	// (0x0003a5e7) bg_popup_window_pane_cp10_ParamLimits

0x94e9,	// (0x0003a5e7) bg_popup_window_pane_cp10

0x951b,	// (0x0003a619) indicator_popup_pane_ParamLimits

0x951b,	// (0x0003a619) indicator_popup_pane

0x953d,	// (0x0003a63b) popup_query_code_window_t1_ParamLimits

0x953d,	// (0x0003a63b) popup_query_code_window_t1

0x9557,	// (0x0003a655) popup_query_code_window_t2_ParamLimits

0x9557,	// (0x0003a655) popup_query_code_window_t2

0x95a0,	// (0x0003a69e) popup_query_code_window_t3_ParamLimits

0x95a0,	// (0x0003a69e) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0004092c) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0004092c) popup_query_code_window_t

0x95cf,	// (0x0003a6cd) query_popup_pane_ParamLimits

0x95cf,	// (0x0003a6cd) query_popup_pane

0xf16d,	// (0x0004026b) bg_popup_window_pane_cp15_ParamLimits

0xf16d,	// (0x0004026b) bg_popup_window_pane_cp15

0xf18d,	// (0x0004028b) indicator_popup_pane_cp1_ParamLimits

0xf18d,	// (0x0004028b) indicator_popup_pane_cp1

0xf1a0,	// (0x0004029e) indicator_popup_pane_cp2_ParamLimits

0xf1a0,	// (0x0004029e) indicator_popup_pane_cp2

0xf1bb,	// (0x000402b9) popup_query_data_code_window_g1_ParamLimits

0xf1bb,	// (0x000402b9) popup_query_data_code_window_g1

0xf1ce,	// (0x000402cc) popup_query_data_code_window_t1_ParamLimits

0xf1ce,	// (0x000402cc) popup_query_data_code_window_t1

0xf1e0,	// (0x000402de) popup_query_data_code_window_t2_ParamLimits

0xf1e0,	// (0x000402de) popup_query_data_code_window_t2

0xf1f2,	// (0x000402f0) popup_query_data_code_window_t3_ParamLimits

0xf1f2,	// (0x000402f0) popup_query_data_code_window_t3

0xf208,	// (0x00040306) popup_query_data_code_window_t4_ParamLimits

0xf208,	// (0x00040306) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00040688) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00040688) popup_query_data_code_window_t

0x702a,	// (0x00038128) list_single_midp_graphic_pane_g3

0xf222,	// (0x00040320) query_popup_data_pane_cp2_ParamLimits

0xf235,	// (0x00040333) query_popup_pane_cp2_ParamLimits

0xf235,	// (0x00040333) query_popup_pane_cp2

0xe4e9,	// (0x0003f5e7) bg_popup_window_pane_cp11

0x94e1,	// (0x0003a5df) heading_pane_cp5

0xf2cb,	// (0x000403c9) listscroll_popup_info_pane

0xe4e9,	// (0x0003f5e7) input_focus_pane_cp3

0xf250,	// (0x0004034e) query_popup_pane_t1

0xf25e,	// (0x0004035c) list_popup_info_pane_ParamLimits

0xf25e,	// (0x0004035c) list_popup_info_pane

0xf26d,	// (0x0004036b) listscroll_popup_info_pane_g1

0xf275,	// (0x00040373) scroll_pane_cp7

0xf27f,	// (0x0004037d) popup_info_list_pane_t1_ParamLimits

0xf27f,	// (0x0004037d) popup_info_list_pane_t1

0xf299,	// (0x00040397) popup_info_list_pane_t2_ParamLimits

0xf299,	// (0x00040397) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00040691) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00040691) popup_info_list_pane_t

0xe4e9,	// (0x0003f5e7) bg_popup_window_pane_cp12

0xa8c0,	// (0x0003b9be) find_popup_pane

0xef84,	// (0x00040082) bg_popup_window_pane_cp3

0xf2b3,	// (0x000403b1) heading_pane_cp3

0xf2bf,	// (0x000403bd) listscroll_popup_graphic_pane

0xe4e9,	// (0x0003f5e7) bg_popup_window_pane_cp4

0x5a55,	// (0x00036b53) heading_pane_cp4

0xf2cb,	// (0x000403c9) listscroll_popup_colour_pane

0x5a5f,	// (0x00036b5d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5a5f,	// (0x00036b5d) cell_large_graphic_colour_none_popup_pane

0x5a73,	// (0x00036b71) grid_large_graphic_colour_popup_pane_ParamLimits

0x5a73,	// (0x00036b71) grid_large_graphic_colour_popup_pane

0x5a9f,	// (0x00036b9d) listscroll_popup_colour_pane_g1_ParamLimits

0x5a9f,	// (0x00036b9d) listscroll_popup_colour_pane_g1

0x5ab6,	// (0x00036bb4) listscroll_popup_colour_pane_g2_ParamLimits

0x5ab6,	// (0x00036bb4) listscroll_popup_colour_pane_g2

0x5acd,	// (0x00036bcb) listscroll_popup_colour_pane_g3_ParamLimits

0x5acd,	// (0x00036bcb) listscroll_popup_colour_pane_g3

0x5add,	// (0x00036bdb) listscroll_popup_colour_pane_g4_ParamLimits

0x5add,	// (0x00036bdb) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00040696) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00040696) listscroll_popup_colour_pane_g

0xf2d3,	// (0x000403d1) scroll_pane_cp6_ParamLimits

0xf2d3,	// (0x000403d1) scroll_pane_cp6

0x5af1,	// (0x00036bef) cell_large_graphic_colour_popup_pane_ParamLimits

0x5af1,	// (0x00036bef) cell_large_graphic_colour_popup_pane

0xf2e5,	// (0x000403e3) cell_large_graphic_colour_none_popup_pane_t1

0xe4e9,	// (0x0003f5e7) grid_highlight_pane_cp5

0xf2f4,	// (0x000403f2) cell_large_graphic_colour_popup_pane_g1

0xf2fc,	// (0x000403fa) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004069f) cell_large_graphic_colour_popup_pane_g

0xf304,	// (0x00040402) cell_large_graphic_colour_popup_pane_g2_copy1

0xf30d,	// (0x0004040b) grid_highlight_pane_cp4

0xf315,	// (0x00040413) bg_popup_window_pane_cp8_ParamLimits

0xf315,	// (0x00040413) bg_popup_window_pane_cp8

0xf330,	// (0x0004042e) popup_snote_single_text_window_g1_ParamLimits

0xf330,	// (0x0004042e) popup_snote_single_text_window_g1

0xf342,	// (0x00040440) popup_snote_single_text_window_t1_ParamLimits

0xf342,	// (0x00040440) popup_snote_single_text_window_t1

0xf355,	// (0x00040453) popup_snote_single_text_window_t2_ParamLimits

0xf355,	// (0x00040453) popup_snote_single_text_window_t2

0xf368,	// (0x00040466) popup_snote_single_text_window_t3_ParamLimits

0xf368,	// (0x00040466) popup_snote_single_text_window_t3

0xf3a1,	// (0x0004049f) popup_snote_single_text_window_t4_ParamLimits

0xf3a1,	// (0x0004049f) popup_snote_single_text_window_t4

0xf3d5,	// (0x000404d3) popup_snote_single_text_window_t5_ParamLimits

0xf3d5,	// (0x000404d3) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000406a4) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000406a4) popup_snote_single_text_window_t

0xf404,	// (0x00040502) bg_popup_window_pane_cp9_ParamLimits

0xf404,	// (0x00040502) bg_popup_window_pane_cp9

0xf330,	// (0x0004042e) popup_snote_single_graphic_window_g1_ParamLimits

0xf330,	// (0x0004042e) popup_snote_single_graphic_window_g1

0xf412,	// (0x00040510) popup_snote_single_graphic_window_g2_ParamLimits

0xf412,	// (0x00040510) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000406af) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000406af) popup_snote_single_graphic_window_g

0xf41e,	// (0x0004051c) popup_snote_single_graphic_window_t1_ParamLimits

0xf41e,	// (0x0004051c) popup_snote_single_graphic_window_t1

0xf431,	// (0x0004052f) popup_snote_single_graphic_window_t2_ParamLimits

0xf431,	// (0x0004052f) popup_snote_single_graphic_window_t2

0xf444,	// (0x00040542) popup_snote_single_graphic_window_t3_ParamLimits

0xf444,	// (0x00040542) popup_snote_single_graphic_window_t3

0xf47d,	// (0x0004057b) popup_snote_single_graphic_window_t4_ParamLimits

0xf47d,	// (0x0004057b) popup_snote_single_graphic_window_t4

0xf4b1,	// (0x000405af) popup_snote_single_graphic_window_t5_ParamLimits

0xf4b1,	// (0x000405af) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000406b4) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000406b4) popup_snote_single_graphic_window_t

0xa7fe,	// (0x0003b8fc) grid_graphic_popup_pane_ParamLimits

0xa7fe,	// (0x0003b8fc) grid_graphic_popup_pane

0xa82c,	// (0x0003b92a) listscroll_popup_graphic_pane_g1_ParamLimits

0xa82c,	// (0x0003b92a) listscroll_popup_graphic_pane_g1

0xa840,	// (0x0003b93e) listscroll_popup_graphic_pane_g2_ParamLimits

0xa840,	// (0x0003b93e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x00040aa9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x00040aa9) listscroll_popup_graphic_pane_g

0xa854,	// (0x0003b952) scroll_pane_cp5

0xa7a6,	// (0x0003b8a4) cell_graphic_popup_pane_ParamLimits

0xa7a6,	// (0x0003b8a4) cell_graphic_popup_pane

0xa787,	// (0x0003b885) cell_graphic_popup_pane_g1

0xa78f,	// (0x0003b88d) cell_graphic_popup_pane_g2

0xf304,	// (0x00040402) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00040aa2) cell_graphic_popup_pane_g

0xa798,	// (0x0003b896) cell_graphic_popup_pane_t2

0xf30d,	// (0x0004040b) grid_highlight_pane_cp3

0xf4f2,	// (0x000405f0) list_gen_pane_ParamLimits

0xf4f2,	// (0x000405f0) list_gen_pane

0xf51a,	// (0x00040618) scroll_pane

0xa6df,	// (0x0003b7dd) bg_list_pane_g1_ParamLimits

0xa6df,	// (0x0003b7dd) bg_list_pane_g1

0xa6fc,	// (0x0003b7fa) bg_list_pane_g2_ParamLimits

0xa6fc,	// (0x0003b7fa) bg_list_pane_g2

0xa711,	// (0x0003b80f) bg_list_pane_g3_ParamLimits

0xa711,	// (0x0003b80f) bg_list_pane_g3

0xa725,	// (0x0003b823) bg_list_pane_g4_ParamLimits

0xa725,	// (0x0003b823) bg_list_pane_g4

0xa739,	// (0x0003b837) bg_list_pane_g5_ParamLimits

0xa739,	// (0x0003b837) bg_list_pane_g5

0x0004,

0xf999,	// (0x00040a97) bg_list_pane_g_ParamLimits

0xf999,	// (0x00040a97) bg_list_pane_g

0x73f5,	// (0x000384f3) list_double2_graphic_large_graphic_pane_ParamLimits

0x73f5,	// (0x000384f3) list_double2_graphic_large_graphic_pane

0x73f5,	// (0x000384f3) list_double2_graphic_pane_ParamLimits

0x73f5,	// (0x000384f3) list_double2_graphic_pane

0x73f5,	// (0x000384f3) list_double2_large_graphic_pane_ParamLimits

0x73f5,	// (0x000384f3) list_double2_large_graphic_pane

0x73f5,	// (0x000384f3) list_double2_pane_ParamLimits

0x73f5,	// (0x000384f3) list_double2_pane

0x73f5,	// (0x000384f3) list_double_graphic_heading_pane_ParamLimits

0x73f5,	// (0x000384f3) list_double_graphic_heading_pane

0x73f5,	// (0x000384f3) list_double_graphic_pane_ParamLimits

0x73f5,	// (0x000384f3) list_double_graphic_pane

0x73f5,	// (0x000384f3) list_double_heading_pane_ParamLimits

0x73f5,	// (0x000384f3) list_double_heading_pane

0x73f5,	// (0x000384f3) list_double_large_graphic_pane_ParamLimits

0x73f5,	// (0x000384f3) list_double_large_graphic_pane

0x73f5,	// (0x000384f3) list_double_number_pane_ParamLimits

0x73f5,	// (0x000384f3) list_double_number_pane

0x73f5,	// (0x000384f3) list_double_pane_ParamLimits

0x73f5,	// (0x000384f3) list_double_pane

0x73f5,	// (0x000384f3) list_double_time_pane_ParamLimits

0x73f5,	// (0x000384f3) list_double_time_pane

0x73f5,	// (0x000384f3) list_setting_number_pane_ParamLimits

0x73f5,	// (0x000384f3) list_setting_number_pane

0x73f5,	// (0x000384f3) list_setting_pane_ParamLimits

0x73f5,	// (0x000384f3) list_setting_pane

0xa69b,	// (0x0003b799) list_single_2graphic_pane_ParamLimits

0xa69b,	// (0x0003b799) list_single_2graphic_pane

0xa69b,	// (0x0003b799) list_single_graphic_heading_pane_ParamLimits

0xa69b,	// (0x0003b799) list_single_graphic_heading_pane

0xa69b,	// (0x0003b799) list_single_graphic_pane_ParamLimits

0xa69b,	// (0x0003b799) list_single_graphic_pane

0xa69b,	// (0x0003b799) list_single_heading_pane_ParamLimits

0xa69b,	// (0x0003b799) list_single_heading_pane

0x741f,	// (0x0003851d) list_single_large_graphic_pane_ParamLimits

0x741f,	// (0x0003851d) list_single_large_graphic_pane

0xa69b,	// (0x0003b799) list_single_number_heading_pane_ParamLimits

0xa69b,	// (0x0003b799) list_single_number_heading_pane

0xa69b,	// (0x0003b799) list_single_number_pane_ParamLimits

0xa69b,	// (0x0003b799) list_single_number_pane

0xa69b,	// (0x0003b799) list_single_pane_ParamLimits

0xa69b,	// (0x0003b799) list_single_pane

0xe4e9,	// (0x0003f5e7) list_highlight_pane_cp1

0x443c,	// (0x0003553a) list_single_pane_g1_ParamLimits

0x443c,	// (0x0003553a) list_single_pane_g1

0x5b2c,	// (0x00036c2a) list_single_pane_g2_ParamLimits

0x5b2c,	// (0x00036c2a) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000406c6) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000406c6) list_single_pane_g

0x73df,	// (0x000384dd) list_single_pane_t1_ParamLimits

0x73df,	// (0x000384dd) list_single_pane_t1

0x443c,	// (0x0003553a) list_single_number_pane_g1_ParamLimits

0x443c,	// (0x0003553a) list_single_number_pane_g1

0x5b2c,	// (0x00036c2a) list_single_number_pane_g2_ParamLimits

0x5b2c,	// (0x00036c2a) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000406c6) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000406c6) list_single_number_pane_g

0x7311,	// (0x0003840f) list_single_number_pane_t1_ParamLimits

0x7311,	// (0x0003840f) list_single_number_pane_t1

0x7327,	// (0x00038425) list_single_number_pane_t2_ParamLimits

0x7327,	// (0x00038425) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x00040a58) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x00040a58) list_single_number_pane_t

0x5b20,	// (0x00036c1e) list_single_graphic_pane_g1_ParamLimits

0x5b20,	// (0x00036c1e) list_single_graphic_pane_g1

0x443c,	// (0x0003553a) list_single_graphic_pane_g2_ParamLimits

0x443c,	// (0x0003553a) list_single_graphic_pane_g2

0x5b2c,	// (0x00036c2a) list_single_graphic_pane_g3_ParamLimits

0x5b2c,	// (0x00036c2a) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000406bf) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000406bf) list_single_graphic_pane_g

0x5b38,	// (0x00036c36) list_single_graphic_pane_t1_ParamLimits

0x5b38,	// (0x00036c36) list_single_graphic_pane_t1

0x443c,	// (0x0003553a) list_single_heading_pane_g1_ParamLimits

0x443c,	// (0x0003553a) list_single_heading_pane_g1

0x5b2c,	// (0x00036c2a) list_single_heading_pane_g2_ParamLimits

0x5b2c,	// (0x00036c2a) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000406c6) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000406c6) list_single_heading_pane_g

0x5b4e,	// (0x00036c4c) list_single_heading_pane_t1_ParamLimits

0x5b4e,	// (0x00036c4c) list_single_heading_pane_t1

0x5b64,	// (0x00036c62) list_single_heading_pane_t2_ParamLimits

0x5b64,	// (0x00036c62) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000406cb) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000406cb) list_single_heading_pane_t

0x443c,	// (0x0003553a) list_single_number_heading_pane_g1_ParamLimits

0x443c,	// (0x0003553a) list_single_number_heading_pane_g1

0x5b2c,	// (0x00036c2a) list_single_number_heading_pane_g2_ParamLimits

0x5b2c,	// (0x00036c2a) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000406c6) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000406c6) list_single_number_heading_pane_g

0x5b4e,	// (0x00036c4c) list_single_number_heading_pane_t1_ParamLimits

0x5b4e,	// (0x00036c4c) list_single_number_heading_pane_t1

0x5b76,	// (0x00036c74) list_single_number_heading_pane_t2_ParamLimits

0x5b76,	// (0x00036c74) list_single_number_heading_pane_t2

0x5b88,	// (0x00036c86) list_single_number_heading_pane_t3_ParamLimits

0x5b88,	// (0x00036c86) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x000406d0) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x000406d0) list_single_number_heading_pane_t

0x5b9a,	// (0x00036c98) list_single_graphic_heading_pane_g1_ParamLimits

0x5b9a,	// (0x00036c98) list_single_graphic_heading_pane_g1

0x5ba6,	// (0x00036ca4) list_single_graphic_heading_pane_g4_ParamLimits

0x5ba6,	// (0x00036ca4) list_single_graphic_heading_pane_g4

0x5b2c,	// (0x00036c2a) list_single_graphic_heading_pane_g5_ParamLimits

0x5b2c,	// (0x00036c2a) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x000406d7) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x000406d7) list_single_graphic_heading_pane_g

0x5b4e,	// (0x00036c4c) list_single_graphic_heading_pane_t1_ParamLimits

0x5b4e,	// (0x00036c4c) list_single_graphic_heading_pane_t1

0x5bb7,	// (0x00036cb5) list_single_graphic_heading_pane_t2_ParamLimits

0x5bb7,	// (0x00036cb5) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x000406de) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x000406de) list_single_graphic_heading_pane_t

0x5bc9,	// (0x00036cc7) list_single_large_graphic_pane_g1_ParamLimits

0x5bc9,	// (0x00036cc7) list_single_large_graphic_pane_g1

0x443c,	// (0x0003553a) list_single_large_graphic_pane_g2_ParamLimits

0x443c,	// (0x0003553a) list_single_large_graphic_pane_g2

0x5b2c,	// (0x00036c2a) list_single_large_graphic_pane_g3_ParamLimits

0x5b2c,	// (0x00036c2a) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x000406e3) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000406e3) list_single_large_graphic_pane_g

0x968a,	// (0x0003a788) wait_border_pane_g2_copy1

0x5bd5,	// (0x00036cd3) list_single_large_graphic_pane_g4_cp2

0x5b4e,	// (0x00036c4c) list_single_large_graphic_pane_t1_ParamLimits

0x5b4e,	// (0x00036c4c) list_single_large_graphic_pane_t1

0x5bdd,	// (0x00036cdb) list_double_pane_g1_ParamLimits

0x5bdd,	// (0x00036cdb) list_double_pane_g1

0x5be9,	// (0x00036ce7) list_double_pane_g2_ParamLimits

0x5be9,	// (0x00036ce7) list_double_pane_g2

0x0001,

0xf5ec,	// (0x000406ea) list_double_pane_g_ParamLimits

0xf5ec,	// (0x000406ea) list_double_pane_g

0x5bf5,	// (0x00036cf3) list_double_pane_t1_ParamLimits

0x5bf5,	// (0x00036cf3) list_double_pane_t1

0x5c0b,	// (0x00036d09) list_double_pane_t2_ParamLimits

0x5c0b,	// (0x00036d09) list_double_pane_t2

0x0001,

0xf5f1,	// (0x000406ef) list_double_pane_t_ParamLimits

0xf5f1,	// (0x000406ef) list_double_pane_t

0x5c1d,	// (0x00036d1b) list_double2_pane_g1_ParamLimits

0x5c1d,	// (0x00036d1b) list_double2_pane_g1

0x5be9,	// (0x00036ce7) list_double2_pane_g2_ParamLimits

0x5be9,	// (0x00036ce7) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x000406f4) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x000406f4) list_double2_pane_g

0x5bf5,	// (0x00036cf3) list_double2_pane_t1_ParamLimits

0x5bf5,	// (0x00036cf3) list_double2_pane_t1

0x5c2e,	// (0x00036d2c) list_double2_pane_t2_ParamLimits

0x5c2e,	// (0x00036d2c) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000406f9) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000406f9) list_double2_pane_t

0x5bdd,	// (0x00036cdb) list_double_number_pane_g1_ParamLimits

0x5bdd,	// (0x00036cdb) list_double_number_pane_g1

0x5be9,	// (0x00036ce7) list_double_number_pane_g2_ParamLimits

0x5be9,	// (0x00036ce7) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x000406ea) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x000406ea) list_double_number_pane_g

0x5c40,	// (0x00036d3e) list_double_number_pane_t1_ParamLimits

0x5c40,	// (0x00036d3e) list_double_number_pane_t1

0x5c52,	// (0x00036d50) list_double_number_pane_t2_ParamLimits

0x5c52,	// (0x00036d50) list_double_number_pane_t2

0x5c68,	// (0x00036d66) list_double_number_pane_t3_ParamLimits

0x5c68,	// (0x00036d66) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000406fe) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000406fe) list_double_number_pane_t

0x5c7a,	// (0x00036d78) list_double_graphic_pane_g1_ParamLimits

0x5c7a,	// (0x00036d78) list_double_graphic_pane_g1

0x5c86,	// (0x00036d84) list_double_graphic_pane_g2_ParamLimits

0x5c86,	// (0x00036d84) list_double_graphic_pane_g2

0x5c95,	// (0x00036d93) list_double_graphic_pane_g3_ParamLimits

0x5c95,	// (0x00036d93) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00040705) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00040705) list_double_graphic_pane_g

0x5cad,	// (0x00036dab) list_double_graphic_pane_t1_ParamLimits

0x5cad,	// (0x00036dab) list_double_graphic_pane_t1

0x5cc3,	// (0x00036dc1) list_double_graphic_pane_t2_ParamLimits

0x5cc3,	// (0x00036dc1) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0004070e) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0004070e) list_double_graphic_pane_t

0x5c7a,	// (0x00036d78) list_double2_graphic_pane_g1_ParamLimits

0x5c7a,	// (0x00036d78) list_double2_graphic_pane_g1

0x5cd5,	// (0x00036dd3) list_double2_graphic_pane_g2_ParamLimits

0x5cd5,	// (0x00036dd3) list_double2_graphic_pane_g2

0x5ce1,	// (0x00036ddf) list_double2_graphic_pane_g3_ParamLimits

0x5ce1,	// (0x00036ddf) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00040713) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00040713) list_double2_graphic_pane_g

0x5c52,	// (0x00036d50) list_double2_graphic_pane_t1_ParamLimits

0x5c52,	// (0x00036d50) list_double2_graphic_pane_t1

0x5ced,	// (0x00036deb) list_double2_graphic_pane_t2_ParamLimits

0x5ced,	// (0x00036deb) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0004071a) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0004071a) list_double2_graphic_pane_t

0x5cff,	// (0x00036dfd) list_double_large_graphic_pane_g1_ParamLimits

0x5cff,	// (0x00036dfd) list_double_large_graphic_pane_g1

0x5c1d,	// (0x00036d1b) list_double_large_graphic_pane_g2_ParamLimits

0x5c1d,	// (0x00036d1b) list_double_large_graphic_pane_g2

0x5be9,	// (0x00036ce7) list_double_large_graphic_pane_g3_ParamLimits

0x5be9,	// (0x00036ce7) list_double_large_graphic_pane_g3

0x5d2a,	// (0x00036e28) list_double_large_graphic_pane_g4_ParamLimits

0x5d2a,	// (0x00036e28) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0004071f) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0004071f) list_double_large_graphic_pane_g

0x5d3d,	// (0x00036e3b) list_double_large_graphic_pane_t1_ParamLimits

0x5d3d,	// (0x00036e3b) list_double_large_graphic_pane_t1

0x5d56,	// (0x00036e54) list_double_large_graphic_pane_t2_ParamLimits

0x5d56,	// (0x00036e54) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0004072a) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0004072a) list_double_large_graphic_pane_t

0x5d68,	// (0x00036e66) list_double2_large_graphic_pane_g1_ParamLimits

0x5d68,	// (0x00036e66) list_double2_large_graphic_pane_g1

0x5c1d,	// (0x00036d1b) list_double2_large_graphic_pane_g2_ParamLimits

0x5c1d,	// (0x00036d1b) list_double2_large_graphic_pane_g2

0x5be9,	// (0x00036ce7) list_double2_large_graphic_pane_g3_ParamLimits

0x5be9,	// (0x00036ce7) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0004072f) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0004072f) list_double2_large_graphic_pane_g

0x5d74,	// (0x00036e72) list_double2_large_graphic_pane_t1_ParamLimits

0x5d74,	// (0x00036e72) list_double2_large_graphic_pane_t1

0x5d8a,	// (0x00036e88) list_double2_large_graphic_pane_t2_ParamLimits

0x5d8a,	// (0x00036e88) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00040736) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00040736) list_double2_large_graphic_pane_t

0x5d9c,	// (0x00036e9a) list_double_heading_pane_g1_ParamLimits

0x5d9c,	// (0x00036e9a) list_double_heading_pane_g1

0x5dad,	// (0x00036eab) list_double_heading_pane_g2_ParamLimits

0x5dad,	// (0x00036eab) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0004073b) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0004073b) list_double_heading_pane_g

0x5db9,	// (0x00036eb7) list_double_heading_pane_t1_ParamLimits

0x5db9,	// (0x00036eb7) list_double_heading_pane_t1

0x5dcf,	// (0x00036ecd) list_double_heading_pane_t2_ParamLimits

0x5dcf,	// (0x00036ecd) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00040740) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00040740) list_double_heading_pane_t

0x5de1,	// (0x00036edf) list_double_graphic_heading_pane_g1_ParamLimits

0x5de1,	// (0x00036edf) list_double_graphic_heading_pane_g1

0x5d9c,	// (0x00036e9a) list_double_graphic_heading_pane_g2_ParamLimits

0x5d9c,	// (0x00036e9a) list_double_graphic_heading_pane_g2

0x5dad,	// (0x00036eab) list_double_graphic_heading_pane_g3_ParamLimits

0x5dad,	// (0x00036eab) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00040745) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00040745) list_double_graphic_heading_pane_g

0x5ded,	// (0x00036eeb) list_double_graphic_heading_pane_t1_ParamLimits

0x5ded,	// (0x00036eeb) list_double_graphic_heading_pane_t1

0x5e03,	// (0x00036f01) list_double_graphic_heading_pane_t2_ParamLimits

0x5e03,	// (0x00036f01) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0004074c) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0004074c) list_double_graphic_heading_pane_t

0x5c1d,	// (0x00036d1b) list_double_time_pane_g1_ParamLimits

0x5c1d,	// (0x00036d1b) list_double_time_pane_g1

0x5be9,	// (0x00036ce7) list_double_time_pane_g2_ParamLimits

0x5be9,	// (0x00036ce7) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x000406f4) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x000406f4) list_double_time_pane_g

0x5d74,	// (0x00036e72) list_double_time_pane_t1_ParamLimits

0x5d74,	// (0x00036e72) list_double_time_pane_t1

0x5e15,	// (0x00036f13) list_double_time_pane_t2_ParamLimits

0x5e15,	// (0x00036f13) list_double_time_pane_t2

0x5e27,	// (0x00036f25) list_double_time_pane_t3_ParamLimits

0x5e27,	// (0x00036f25) list_double_time_pane_t3

0x5e39,	// (0x00036f37) list_double_time_pane_t4_ParamLimits

0x5e39,	// (0x00036f37) list_double_time_pane_t4

0x0003,

0xf653,	// (0x00040751) list_double_time_pane_t_ParamLimits

0xf653,	// (0x00040751) list_double_time_pane_t

0x5e4b,	// (0x00036f49) list_setting_pane_g1_ParamLimits

0x5e4b,	// (0x00036f49) list_setting_pane_g1

0x5e57,	// (0x00036f55) list_setting_pane_g2_ParamLimits

0x5e57,	// (0x00036f55) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0004075a) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0004075a) list_setting_pane_g

0x5e63,	// (0x00036f61) list_setting_pane_t1_ParamLimits

0x5e63,	// (0x00036f61) list_setting_pane_t1

0x5e7d,	// (0x00036f7b) list_setting_pane_t2_ParamLimits

0x5e7d,	// (0x00036f7b) list_setting_pane_t2

0x0002,

0xf661,	// (0x0004075f) list_setting_pane_t_ParamLimits

0xf661,	// (0x0004075f) list_setting_pane_t

0x5ebc,	// (0x00036fba) set_value_pane_cp_ParamLimits

0x5ebc,	// (0x00036fba) set_value_pane_cp

0x5eca,	// (0x00036fc8) list_setting_number_pane_g1_ParamLimits

0x5eca,	// (0x00036fc8) list_setting_number_pane_g1

0x5ed6,	// (0x00036fd4) list_setting_number_pane_g2_ParamLimits

0x5ed6,	// (0x00036fd4) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x00040766) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x00040766) list_setting_number_pane_g

0x5ee2,	// (0x00036fe0) list_setting_number_pane_t1_ParamLimits

0x5ee2,	// (0x00036fe0) list_setting_number_pane_t1

0x5efb,	// (0x00036ff9) list_setting_number_pane_t2_ParamLimits

0x5efb,	// (0x00036ff9) list_setting_number_pane_t2

0x5f15,	// (0x00037013) list_setting_number_pane_t3_ParamLimits

0x5f15,	// (0x00037013) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0004076b) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0004076b) list_setting_number_pane_t

0x5ebc,	// (0x00036fba) set_value_pane_ParamLimits

0x5ebc,	// (0x00036fba) set_value_pane

0x1dbc,	// (0x00032eba) bg_set_opt_pane_ParamLimits

0x1dbc,	// (0x00032eba) bg_set_opt_pane

0x3cb4,	// (0x00034db2) set_value_pane_t1

0x1ddd,	// (0x00032edb) slider_set_pane_cp3

0x1de6,	// (0x00032ee4) volume_small_pane_cp

0x1def,	// (0x00032eed) list_form_gen_pane

0x1df8,	// (0x00032ef6) scroll_pane_cp8

0x5f58,	// (0x00037056) form_field_data_pane_ParamLimits

0x5f58,	// (0x00037056) form_field_data_pane

0x5f76,	// (0x00037074) form_field_data_wide_pane_ParamLimits

0x5f76,	// (0x00037074) form_field_data_wide_pane

0x3cd2,	// (0x00034dd0) form_field_popup_pane_ParamLimits

0x3cd2,	// (0x00034dd0) form_field_popup_pane

0x5f9b,	// (0x00037099) form_field_popup_wide_pane_ParamLimits

0x5f9b,	// (0x00037099) form_field_popup_wide_pane

0x3cf4,	// (0x00034df2) form_field_slider_pane_ParamLimits

0x3cf4,	// (0x00034df2) form_field_slider_pane

0x3d07,	// (0x00034e05) form_field_slider_wide_pane_ParamLimits

0x3d07,	// (0x00034e05) form_field_slider_wide_pane

0x1e09,	// (0x00032f07) data_form_pane

0x5fc6,	// (0x000370c4) form_field_data_pane_t1

0x1e15,	// (0x00032f13) input_focus_pane

0x3d1a,	// (0x00034e18) data_form_wide_pane

0x3d37,	// (0x00034e35) form_field_data_wide_pane_t1

0xf322,	// (0x00040420) input_focus_pane_cp6

0x5fe0,	// (0x000370de) form_field_popup_pane_t1

0x1e15,	// (0x00032f13) input_focus_pane_cp7

0x1e43,	// (0x00032f41) list_form_pane

0x3d61,	// (0x00034e5f) form_field_popup_wide_pane_t1

0x1e15,	// (0x00032f13) input_focus_pane_cp8

0x1e4f,	// (0x00032f4d) list_form_wide_pane

0x6002,	// (0x00037100) form_field_slider_pane_t1_ParamLimits

0x6002,	// (0x00037100) form_field_slider_pane_t1

0x601a,	// (0x00037118) form_field_slider_pane_t2_ParamLimits

0x601a,	// (0x00037118) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0004077b) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0004077b) form_field_slider_pane_t

0xf0b7,	// (0x000401b5) input_focus_pane_cp9_ParamLimits

0xf0b7,	// (0x000401b5) input_focus_pane_cp9

0x602f,	// (0x0003712d) slider_cont_pane_ParamLimits

0x602f,	// (0x0003712d) slider_cont_pane

0x1e5e,	// (0x00032f5c) form_field_slider_wide_pane_t1_ParamLimits

0x1e5e,	// (0x00032f5c) form_field_slider_wide_pane_t1

0x3d76,	// (0x00034e74) form_field_slider_wide_pane_t2_ParamLimits

0x3d76,	// (0x00034e74) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00040780) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00040780) form_field_slider_wide_pane_t

0xf0b7,	// (0x000401b5) input_focus_pane_cp10_ParamLimits

0xf0b7,	// (0x000401b5) input_focus_pane_cp10

0x6043,	// (0x00037141) slider_cont_pane_cp1_ParamLimits

0x6043,	// (0x00037141) slider_cont_pane_cp1

0x6057,	// (0x00037155) slider_form_pane_cp

0x1e70,	// (0x00032f6e) input_focus_pane_g1

0x1e78,	// (0x00032f76) input_focus_pane_g2

0x1e80,	// (0x00032f7e) input_focus_pane_g3

0x1e88,	// (0x00032f86) input_focus_pane_g4

0x1e90,	// (0x00032f8e) input_focus_pane_g5

0x1e98,	// (0x00032f96) input_focus_pane_g6

0x1ea0,	// (0x00032f9e) input_focus_pane_g7

0x1ea8,	// (0x00032fa6) input_focus_pane_g8

0x1eb0,	// (0x00032fae) input_focus_pane_g9

0xe4df,	// (0x0003f5dd) input_focus_pane_g10

0x0009,

0xf687,	// (0x00040785) input_focus_pane_g

0x9693,	// (0x0003a791) wait_border_pane_g3_copy1

0x605f,	// (0x0003715d) data_form_pane_t1

0xe4df,	// (0x0003f5dd) wait_anim_pane_g1_copy1

0x73b1,	// (0x000384af) data_form_wide_pane_t1

0x607c,	// (0x0003717a) list_form_graphic_pane_cp_ParamLimits

0x607c,	// (0x0003717a) list_form_graphic_pane_cp

0xa5f2,	// (0x0003b6f0) slider_form_pane_g1

0xa5fb,	// (0x0003b6f9) slider_form_pane_g2

0x0006,

0xf98a,	// (0x00040a88) slider_form_pane_g

0x3d88,	// (0x00034e86) list_form_graphic_pane_ParamLimits

0x3d88,	// (0x00034e86) list_form_graphic_pane

0x3d9a,	// (0x00034e98) list_form_graphic_pane_g1

0x3da2,	// (0x00034ea0) list_form_graphic_pane_t1_ParamLimits

0x3da2,	// (0x00034ea0) list_form_graphic_pane_t1

0xef84,	// (0x00040082) list_highlight_pane_cp5_ParamLimits

0xef84,	// (0x00040082) list_highlight_pane_cp5

0x6091,	// (0x0003718f) find_pane_g1

0x1eb8,	// (0x00032fb6) input_find_pane

0x609a,	// (0x00037198) input_find_pane_g1_ParamLimits

0x609a,	// (0x00037198) input_find_pane_g1

0x60a6,	// (0x000371a4) input_find_pane_t1_ParamLimits

0x60a6,	// (0x000371a4) input_find_pane_t1

0x60bb,	// (0x000371b9) input_find_pane_t2_ParamLimits

0x60bb,	// (0x000371b9) input_find_pane_t2

0x0001,

0xf69c,	// (0x0004079a) input_find_pane_t_ParamLimits

0xf69c,	// (0x0004079a) input_find_pane_t

0x1ec1,	// (0x00032fbf) input_focus_pane_cp5_ParamLimits

0x1ec1,	// (0x00032fbf) input_focus_pane_cp5

0x1ecf,	// (0x00032fcd) bg_popup_window_pane_cp2_ParamLimits

0x1ecf,	// (0x00032fcd) bg_popup_window_pane_cp2

0x1edc,	// (0x00032fda) listscroll_menu_pane_ParamLimits

0x1edc,	// (0x00032fda) listscroll_menu_pane

0x60dc,	// (0x000371da) popup_submenu_window_ParamLimits

0x60dc,	// (0x000371da) popup_submenu_window

0x1ee8,	// (0x00032fe6) find_popup_pane_g1

0x1ef0,	// (0x00032fee) input_popup_find_pane_cp

0x1ec1,	// (0x00032fbf) input_focus_pane_cp4_ParamLimits

0x1ec1,	// (0x00032fbf) input_focus_pane_cp4

0x1efa,	// (0x00032ff8) input_popup_find_pane_t1_ParamLimits

0x1efa,	// (0x00032ff8) input_popup_find_pane_t1

0xe4e9,	// (0x0003f5e7) bg_popup_sub_pane_cp

0x1f28,	// (0x00033026) listscroll_popup_sub_pane

0x1f30,	// (0x0003302e) list_submenu_pane_ParamLimits

0x1f30,	// (0x0003302e) list_submenu_pane

0x1f41,	// (0x0003303f) scroll_pane_cp4

0x1f49,	// (0x00033047) list_single_popup_submenu_pane_ParamLimits

0x1f49,	// (0x00033047) list_single_popup_submenu_pane

0x1f5e,	// (0x0003305c) list_single_popup_submenu_pane_g1

0x1f66,	// (0x00033064) list_single_popup_submenu_pane_t1_ParamLimits

0x1f66,	// (0x00033064) list_single_popup_submenu_pane_t1

0xef84,	// (0x00040082) bg_active_tab_pane_cp1_ParamLimits

0xef84,	// (0x00040082) bg_active_tab_pane_cp1

0x611a,	// (0x00037218) tabs_2_active_pane_g1

0x6122,	// (0x00037220) tabs_2_active_pane_t1

0xef84,	// (0x00040082) bg_passive_tab_pane_cp1_ParamLimits

0xef84,	// (0x00040082) bg_passive_tab_pane_cp1

0x611a,	// (0x00037218) tabs_2_passive_pane_g1

0x6122,	// (0x00037220) tabs_2_passive_pane_t1

0x26a7,	// (0x000337a5) bg_active_tab_pane_cp4

0x6134,	// (0x00037232) tabs_2_long_active_pane_t1

0x6147,	// (0x00037245) bg_passive_tab_pane_cp4

0x7032,	// (0x00038130) list_single_midp_graphic_pane_g4_ParamLimits

0x26a7,	// (0x000337a5) bg_active_tab_pane_cp5

0x6153,	// (0x00037251) tabs_3_long_active_pane_t1

0x6147,	// (0x00037245) bg_passive_tab_pane_cp5

0x7032,	// (0x00038130) list_single_midp_graphic_pane_g4

0xef84,	// (0x00040082) bg_popup_window_pane_cp13_ParamLimits

0xef84,	// (0x00040082) bg_popup_window_pane_cp13

0x1f84,	// (0x00033082) listscroll_popup_fast_pane_ParamLimits

0x1f84,	// (0x00033082) listscroll_popup_fast_pane

0x1f93,	// (0x00033091) grid_popup_fast_pane_ParamLimits

0x1f93,	// (0x00033091) grid_popup_fast_pane

0x1fa5,	// (0x000330a3) scroll_pane_cp9_ParamLimits

0x1fa5,	// (0x000330a3) scroll_pane_cp9

0xbf73,	// (0x0003d071) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbf73,	// (0x0003d071) list_single_graphic_hl_pane_t1_cp2

0x1fc9,	// (0x000330c7) input_focus_pane_cp20_ParamLimits

0x1fc9,	// (0x000330c7) input_focus_pane_cp20

0x1fd7,	// (0x000330d5) query_popup_data_pane_t1_ParamLimits

0x1fd7,	// (0x000330d5) query_popup_data_pane_t1

0x1fea,	// (0x000330e8) query_popup_data_pane_t2_ParamLimits

0x1fea,	// (0x000330e8) query_popup_data_pane_t2

0x2030,	// (0x0003312e) query_popup_data_pane_t3_ParamLimits

0x2030,	// (0x0003312e) query_popup_data_pane_t3

0x2071,	// (0x0003316f) query_popup_data_pane_t4_ParamLimits

0x2071,	// (0x0003316f) query_popup_data_pane_t4

0x20ad,	// (0x000331ab) query_popup_data_pane_t5_ParamLimits

0x20ad,	// (0x000331ab) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0004079f) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0004079f) query_popup_data_pane_t

0x1e70,	// (0x00032f6e) bg_set_opt_pane_g1

0x1e78,	// (0x00032f76) bg_set_opt_pane_g2

0x1e80,	// (0x00032f7e) bg_set_opt_pane_g3

0x1e88,	// (0x00032f86) bg_set_opt_pane_g4

0x1e90,	// (0x00032f8e) bg_set_opt_pane_g5

0x1e98,	// (0x00032f96) bg_set_opt_pane_g6

0x1ea0,	// (0x00032f9e) bg_set_opt_pane_g7

0x1ea8,	// (0x00032fa6) bg_set_opt_pane_g8

0x1eb0,	// (0x00032fae) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x000407aa) bg_set_opt_pane_g

0x6653,	// (0x00037751) control_top_pane_stacon_ParamLimits

0x6653,	// (0x00037751) control_top_pane_stacon

0x66a6,	// (0x000377a4) signal_pane_stacon_ParamLimits

0x66a6,	// (0x000377a4) signal_pane_stacon

0x24c4,	// (0x000335c2) stacon_top_pane_g1_ParamLimits

0x24c4,	// (0x000335c2) stacon_top_pane_g1

0x66cb,	// (0x000377c9) title_pane_stacon_ParamLimits

0x66cb,	// (0x000377c9) title_pane_stacon

0x66f5,	// (0x000377f3) uni_indicator_pane_stacon_ParamLimits

0x66f5,	// (0x000377f3) uni_indicator_pane_stacon

0x670d,	// (0x0003780b) battery_pane_stacon_ParamLimits

0x670d,	// (0x0003780b) battery_pane_stacon

0x6751,	// (0x0003784f) control_bottom_pane_stacon_ParamLimits

0x6751,	// (0x0003784f) control_bottom_pane_stacon

0x6774,	// (0x00037872) navi_pane_stacon_ParamLimits

0x6774,	// (0x00037872) navi_pane_stacon

0x24e6,	// (0x000335e4) stacon_bottom_pane_g1_ParamLimits

0x24e6,	// (0x000335e4) stacon_bottom_pane_g1

0x6165,	// (0x00037263) aid_levels_signal_lsc_ParamLimits

0x6165,	// (0x00037263) aid_levels_signal_lsc

0x617c,	// (0x0003727a) signal_pane_stacon_g1_ParamLimits

0x617c,	// (0x0003727a) signal_pane_stacon_g1

0x6190,	// (0x0003728e) signal_pane_stacon_g2_ParamLimits

0x6190,	// (0x0003728e) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x000407bd) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x000407bd) signal_pane_stacon_g

0x61c5,	// (0x000372c3) title_pane_stacon_t1_ParamLimits

0x61c5,	// (0x000372c3) title_pane_stacon_t1

0x2105,	// (0x00033203) uni_indicator_pane_stacon_g1

0x210f,	// (0x0003320d) uni_indicator_pane_stacon_g2

0x20f1,	// (0x000331ef) uni_indicator_pane_stacon_g3

0x20fb,	// (0x000331f9) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x000407c9) uni_indicator_pane_stacon_g

0x61ea,	// (0x000372e8) control_top_pane_stacon_g1

0x61f2,	// (0x000372f0) control_top_pane_stacon_t1_ParamLimits

0x61f2,	// (0x000372f0) control_top_pane_stacon_t1

0x6229,	// (0x00037327) aid_levels_battery_lsc_ParamLimits

0x6229,	// (0x00037327) aid_levels_battery_lsc

0x6241,	// (0x0003733f) battery_pane_stacon_g1_ParamLimits

0x6241,	// (0x0003733f) battery_pane_stacon_g1

0x6254,	// (0x00037352) battery_pane_stacon_g2_ParamLimits

0x6254,	// (0x00037352) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x000407d2) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x000407d2) battery_pane_stacon_g

0x6292,	// (0x00037390) navi_icon_pane_stacon

0x62a6,	// (0x000373a4) navi_navi_pane_stacon

0x6292,	// (0x00037390) navi_text_pane_stacon

0x61ea,	// (0x000372e8) control_bottom_pane_stacon_g1

0x62bc,	// (0x000373ba) control_bottom_pane_stacon_t1_ParamLimits

0x62bc,	// (0x000373ba) control_bottom_pane_stacon_t1

0x62f3,	// (0x000373f1) grid_app_pane_ParamLimits

0x62f3,	// (0x000373f1) grid_app_pane

0x6317,	// (0x00037415) scroll_pane_cp15_ParamLimits

0x6317,	// (0x00037415) scroll_pane_cp15

0x632a,	// (0x00037428) cell_app_pane_ParamLimits

0x632a,	// (0x00037428) cell_app_pane

0x6356,	// (0x00037454) cell_app_pane_g1_ParamLimits

0x6356,	// (0x00037454) cell_app_pane_g1

0x2133,	// (0x00033231) cell_app_pane_g2_ParamLimits

0x2133,	// (0x00033231) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x000407d7) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x000407d7) cell_app_pane_g

0x213f,	// (0x0003323d) cell_app_pane_t1_ParamLimits

0x213f,	// (0x0003323d) cell_app_pane_t1

0x2156,	// (0x00033254) grid_highlight_pane_ParamLimits

0x2156,	// (0x00033254) grid_highlight_pane

0x1e70,	// (0x00032f6e) cell_highlight_pane_g1

0x1e78,	// (0x00032f76) cell_highlight_pane_g2

0x1e80,	// (0x00032f7e) cell_highlight_pane_g3

0x1e88,	// (0x00032f86) cell_highlight_pane_g4

0x1e90,	// (0x00032f8e) cell_highlight_pane_g5

0x1e98,	// (0x00032f96) cell_highlight_pane_g6

0x1ea0,	// (0x00032f9e) cell_highlight_pane_g7

0x1ea8,	// (0x00032fa6) cell_highlight_pane_g8

0x1eb0,	// (0x00032fae) cell_highlight_pane_g9

0xe4df,	// (0x0003f5dd) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00040785) cell_highlight_pane_g

0x2167,	// (0x00033265) bg_scroll_pane

0x6389,	// (0x00037487) scroll_handle_pane

0x21ae,	// (0x000332ac) scroll_bg_pane_g1

0x21c3,	// (0x000332c1) scroll_bg_pane_g2

0x21db,	// (0x000332d9) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x000407dc) scroll_bg_pane_g

0x21f0,	// (0x000332ee) scroll_handle_focus_pane_ParamLimits

0x21f0,	// (0x000332ee) scroll_handle_focus_pane

0x21ae,	// (0x000332ac) scroll_handle_pane_g1

0x21fd,	// (0x000332fb) scroll_handle_pane_g2

0x21db,	// (0x000332d9) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x000407e3) scroll_handle_pane_g

0x1ec1,	// (0x00032fbf) bg_popup_sub_pane_cp21_ParamLimits

0x1ec1,	// (0x00032fbf) bg_popup_sub_pane_cp21

0x2211,	// (0x0003330f) popup_fep_japan_predictive_window_t1_ParamLimits

0x2211,	// (0x0003330f) popup_fep_japan_predictive_window_t1

0x2228,	// (0x00033326) popup_fep_japan_predictive_window_t2_ParamLimits

0x2228,	// (0x00033326) popup_fep_japan_predictive_window_t2

0x225b,	// (0x00033359) popup_fep_japan_predictive_window_t3_ParamLimits

0x225b,	// (0x00033359) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x000407ea) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x000407ea) popup_fep_japan_predictive_window_t

0xe4e9,	// (0x0003f5e7) bg_popup_sub_pane_cp23

0x2292,	// (0x00033390) listscroll_japin_cand_pane

0x229a,	// (0x00033398) popup_fep_japan_candidate_window_t1

0x22a8,	// (0x000333a6) candidate_pane_ParamLimits

0x22a8,	// (0x000333a6) candidate_pane

0x22ba,	// (0x000333b8) scroll_pane_cp30

0x22c4,	// (0x000333c2) list_single_popup_jap_candidate_pane_ParamLimits

0x22c4,	// (0x000333c2) list_single_popup_jap_candidate_pane

0xe4e9,	// (0x0003f5e7) list_highlight_pane_cp30

0x22d8,	// (0x000333d6) list_single_popup_jap_candidate_pane_t1

0x63b2,	// (0x000374b0) level_1_signal

0x63bf,	// (0x000374bd) level_2_signal

0x63cc,	// (0x000374ca) level_3_signal

0x63d9,	// (0x000374d7) level_4_signal

0x63e6,	// (0x000374e4) level_5_signal

0x63f3,	// (0x000374f1) level_6_signal

0x6400,	// (0x000374fe) level_7_signal

0x63b2,	// (0x000374b0) level_1_battery

0x63bf,	// (0x000374bd) level_2_battery

0x63cc,	// (0x000374ca) level_3_battery

0x63d9,	// (0x000374d7) level_4_battery

0x63e6,	// (0x000374e4) level_5_battery

0x63f3,	// (0x000374f1) level_6_battery

0x6400,	// (0x000374fe) level_7_battery

0x22ff,	// (0x000333fd) list_menu_pane_ParamLimits

0x22ff,	// (0x000333fd) list_menu_pane

0x2315,	// (0x00033413) scroll_pane_cp25_ParamLimits

0x2315,	// (0x00033413) scroll_pane_cp25

0x232e,	// (0x0003342c) list_double2_graphic_pane_cp2_ParamLimits

0x232e,	// (0x0003342c) list_double2_graphic_pane_cp2

0x232e,	// (0x0003342c) list_double2_large_graphic_pane_cp2_ParamLimits

0x232e,	// (0x0003342c) list_double2_large_graphic_pane_cp2

0x232e,	// (0x0003342c) list_double2_pane_cp2_ParamLimits

0x232e,	// (0x0003342c) list_double2_pane_cp2

0x232e,	// (0x0003342c) list_double_graphic_pane_cp2_ParamLimits

0x232e,	// (0x0003342c) list_double_graphic_pane_cp2

0x232e,	// (0x0003342c) list_double_large_graphic_pane_cp2_ParamLimits

0x232e,	// (0x0003342c) list_double_large_graphic_pane_cp2

0x232e,	// (0x0003342c) list_double_number_pane_cp2_ParamLimits

0x232e,	// (0x0003342c) list_double_number_pane_cp2

0x232e,	// (0x0003342c) list_double_pane_cp2_ParamLimits

0x232e,	// (0x0003342c) list_double_pane_cp2

0x6442,	// (0x00037540) list_single_2graphic_pane_cp2_ParamLimits

0x6442,	// (0x00037540) list_single_2graphic_pane_cp2

0x6442,	// (0x00037540) list_single_graphic_heading_pane_cp2_ParamLimits

0x6442,	// (0x00037540) list_single_graphic_heading_pane_cp2

0x6442,	// (0x00037540) list_single_graphic_pane_cp2_ParamLimits

0x6442,	// (0x00037540) list_single_graphic_pane_cp2

0x6442,	// (0x00037540) list_single_heading_pane_cp2_ParamLimits

0x6442,	// (0x00037540) list_single_heading_pane_cp2

0x233e,	// (0x0003343c) list_single_large_graphic_pane_cp2_ParamLimits

0x233e,	// (0x0003343c) list_single_large_graphic_pane_cp2

0x6442,	// (0x00037540) list_single_number_heading_pane_cp2_ParamLimits

0x6442,	// (0x00037540) list_single_number_heading_pane_cp2

0x6442,	// (0x00037540) list_single_number_pane_cp2_ParamLimits

0x6442,	// (0x00037540) list_single_number_pane_cp2

0x6442,	// (0x00037540) list_single_pane_cp2_ParamLimits

0x6442,	// (0x00037540) list_single_pane_cp2

0x2357,	// (0x00033455) bg_popup_sub_pane_cp22

0x652b,	// (0x00037629) popup_side_volume_key_window_g1

0x6555,	// (0x00037653) popup_side_volume_key_window_t1

0x6573,	// (0x00037671) volume_small_pane_cp1

0xf0b7,	// (0x000401b5) bg_popup_sub_pane_cp24_ParamLimits

0xf0b7,	// (0x000401b5) bg_popup_sub_pane_cp24

0x236d,	// (0x0003346b) fep_china_uni_candidate_pane_ParamLimits

0x236d,	// (0x0003346b) fep_china_uni_candidate_pane

0x2381,	// (0x0003347f) fep_china_uni_entry_pane

0x2391,	// (0x0003348f) popup_fep_china_uni_window_g1

0x23ad,	// (0x000334ab) fep_china_uni_entry_pane_g1

0x23b7,	// (0x000334b5) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0004081b) fep_china_uni_entry_pane_g

0x23c1,	// (0x000334bf) fep_entry_item_pane

0x23cb,	// (0x000334c9) fep_candidate_item_pane

0x23d3,	// (0x000334d1) fep_china_uni_candidate_pane_g1

0x23dd,	// (0x000334db) fep_china_uni_candidate_pane_g2

0x23e5,	// (0x000334e3) fep_china_uni_candidate_pane_g3

0x23ed,	// (0x000334eb) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00040820) fep_china_uni_candidate_pane_g

0xe4df,	// (0x0003f5dd) fep_entry_item_pane_g1

0x23f7,	// (0x000334f5) fep_entry_item_pane_t1_ParamLimits

0x23f7,	// (0x000334f5) fep_entry_item_pane_t1

0x240d,	// (0x0003350b) fep_candidate_item_pane_t1_ParamLimits

0x240d,	// (0x0003350b) fep_candidate_item_pane_t1

0x2422,	// (0x00033520) fep_candidate_item_pane_t2_ParamLimits

0x2422,	// (0x00033520) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00040829) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00040829) fep_candidate_item_pane_t

0xef84,	// (0x00040082) list_highlight_pane_cp31_ParamLimits

0xef84,	// (0x00040082) list_highlight_pane_cp31

0x2434,	// (0x00033532) level_1_signal_lsc

0x243d,	// (0x0003353b) level_2_signal_lsc

0x2446,	// (0x00033544) level_3_signal_lsc

0x244f,	// (0x0003354d) level_4_signal_lsc

0x2458,	// (0x00033556) level_5_signal_lsc

0x2461,	// (0x0003355f) level_6_signal_lsc

0x246a,	// (0x00033568) level_7_signal_lsc

0x246a,	// (0x00033568) level_1_battery_lsc

0x2473,	// (0x00033571) level_2_battery_lsc

0x247c,	// (0x0003357a) level_3_battery_lsc

0x2485,	// (0x00033583) level_4_battery_lsc

0x248e,	// (0x0003358c) level_5_battery_lsc

0x2497,	// (0x00033595) level_6_battery_lsc

0x2434,	// (0x00033532) level_7_battery_lsc

0x24a0,	// (0x0003359e) scroll_handle_focus_pane_g1

0x24a9,	// (0x000335a7) scroll_handle_focus_pane_g2

0x24b2,	// (0x000335b0) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0004082e) scroll_handle_focus_pane_g

0x657b,	// (0x00037679) list_single_2graphic_pane_g1_ParamLimits

0x657b,	// (0x00037679) list_single_2graphic_pane_g1

0x5ba6,	// (0x00036ca4) list_single_2graphic_pane_g2_ParamLimits

0x5ba6,	// (0x00036ca4) list_single_2graphic_pane_g2

0x5b2c,	// (0x00036c2a) list_single_2graphic_pane_g3_ParamLimits

0x5b2c,	// (0x00036c2a) list_single_2graphic_pane_g3

0x6587,	// (0x00037685) list_single_2graphic_pane_g4_ParamLimits

0x6587,	// (0x00037685) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00040835) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00040835) list_single_2graphic_pane_g

0x6593,	// (0x00037691) list_single_2graphic_pane_t1_ParamLimits

0x6593,	// (0x00037691) list_single_2graphic_pane_t1

0x65c1,	// (0x000376bf) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x65c1,	// (0x000376bf) list_double2_graphic_large_graphic_pane_g1

0x5c1d,	// (0x00036d1b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5c1d,	// (0x00036d1b) list_double2_graphic_large_graphic_pane_g2

0x5be9,	// (0x00036ce7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5be9,	// (0x00036ce7) list_double2_graphic_large_graphic_pane_g3

0x65d3,	// (0x000376d1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x65d3,	// (0x000376d1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0004083e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0004083e) list_double2_graphic_large_graphic_pane_g

0x65df,	// (0x000376dd) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x65df,	// (0x000376dd) list_double2_graphic_large_graphic_pane_t1

0x65f5,	// (0x000376f3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x65f5,	// (0x000376f3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00040847) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00040847) list_double2_graphic_large_graphic_pane_t

0x2544,	// (0x00033642) popup_fast_swap_window_ParamLimits

0x2544,	// (0x00033642) popup_fast_swap_window

0x2562,	// (0x00033660) popup_side_volume_key_window

0x2580,	// (0x0003367e) stacon_top_pane

0x258a,	// (0x00033688) status_pane_ParamLimits

0x258a,	// (0x00033688) status_pane

0x67fb,	// (0x000378f9) status_small_pane

0xe4e9,	// (0x0003f5e7) control_pane

0xe4e9,	// (0x0003f5e7) stacon_bottom_pane

0x1df8,	// (0x00032ef6) scroll_pane_cp121

0x1def,	// (0x00032eed) set_content_pane

0x6607,	// (0x00037705) bg_active_tab_pane_g1_cp1

0x24bb,	// (0x000335b9) bg_active_tab_pane_g2_cp1

0x6610,	// (0x0003770e) bg_active_tab_pane_g3_cp1

0x6607,	// (0x00037705) bg_passive_tab_pane_g1_cp1

0x24bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp1

0x6610,	// (0x0003770e) bg_passive_tab_pane_g3_cp1

0x6619,	// (0x00037717) bg_active_tab_pane_g1_cp2

0x24bb,	// (0x000335b9) bg_active_tab_pane_g2_cp2

0x6622,	// (0x00037720) bg_active_tab_pane_g3_cp2

0x6619,	// (0x00037717) bg_passive_tab_pane_g1_cp2

0x24bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp2

0x6622,	// (0x00037720) bg_passive_tab_pane_g3_cp2

0x662b,	// (0x00037729) bg_active_tab_pane_g1_cp3

0x24bb,	// (0x000335b9) bg_active_tab_pane_g2_cp3

0x6634,	// (0x00037732) bg_active_tab_pane_g3_cp3

0x662b,	// (0x00037729) bg_passive_tab_pane_g1_cp3

0x24bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp3

0x6634,	// (0x00037732) bg_passive_tab_pane_g3_cp3

0x663d,	// (0x0003773b) bg_active_tab_pane_g1_cp4

0x24bb,	// (0x000335b9) bg_active_tab_pane_g2_cp4

0x6648,	// (0x00037746) bg_active_tab_pane_g3_cp4

0x663d,	// (0x0003773b) bg_passive_tab_pane_g1_cp4

0x24bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp4

0x6648,	// (0x00037746) bg_passive_tab_pane_g3_cp4

0x250b,	// (0x00033609) bg_active_tab_pane_g1_cp5

0x24bb,	// (0x000335b9) bg_active_tab_pane_g2_cp5

0x2502,	// (0x00033600) bg_active_tab_pane_g3_cp5

0x250b,	// (0x00033609) bg_passive_tab_pane_g1_cp5

0x24bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp5

0x2502,	// (0x00033600) bg_passive_tab_pane_g3_cp5

0x6797,	// (0x00037895) list_set_graphic_pane_ParamLimits

0x6797,	// (0x00037895) list_set_graphic_pane

0xe4e9,	// (0x0003f5e7) bg_set_opt_pane_cp4

0x67ac,	// (0x000378aa) list_set_graphic_pane_g1_ParamLimits

0x67ac,	// (0x000378aa) list_set_graphic_pane_g1

0x67b8,	// (0x000378b6) list_set_graphic_pane_g2_ParamLimits

0x67b8,	// (0x000378b6) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0004084c) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0004084c) list_set_graphic_pane_g

0x0009,

0xfaca,	// (0x00040bc8) volume_small_pane_cp_g

0x67dc,	// (0x000378da) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x67dc,	// (0x000378da) list_double2_large_graphic_pane_g1_cp2

0x67ea,	// (0x000378e8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x67ea,	// (0x000378e8) list_double2_large_graphic_pane_g2_cp2

0x2514,	// (0x00033612) list_double2_large_graphic_pane_g3_cp2

0x251c,	// (0x0003361a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x251c,	// (0x0003361a) list_double2_large_graphic_pane_t1_cp2

0x2532,	// (0x00033630) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2532,	// (0x00033630) list_double2_large_graphic_pane_t2_cp2

0xa177,	// (0x0003b275) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa177,	// (0x0003b275) list_double_large_graphic_pane_g1_cp2

0xa18a,	// (0x0003b288) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa18a,	// (0x0003b288) list_double_large_graphic_pane_g2_cp2

0x266b,	// (0x00033769) list_double_large_graphic_pane_g3_cp2

0xa19b,	// (0x0003b299) list_double_large_graphic_pane_g4_cp

0xa1a3,	// (0x0003b2a1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa1a3,	// (0x0003b2a1) list_double_large_graphic_pane_t1_cp2

0xa1ba,	// (0x0003b2b8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa1ba,	// (0x0003b2b8) list_double_large_graphic_pane_t2_cp2

0x6806,	// (0x00037904) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6806,	// (0x00037904) list_double2_graphic_pane_g1_cp2

0x6814,	// (0x00037912) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6814,	// (0x00037912) list_double2_graphic_pane_g2_cp2

0x6825,	// (0x00037923) list_double2_graphic_pane_g3_cp2

0x2598,	// (0x00033696) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2598,	// (0x00033696) list_double2_graphic_pane_t1_cp2

0x25ae,	// (0x000336ac) list_double2_graphic_pane_t2_cp2_ParamLimits

0x25ae,	// (0x000336ac) list_double2_graphic_pane_t2_cp2

0x25c0,	// (0x000336be) list_single_number_heading_pane_g1_cp2_ParamLimits

0x25c0,	// (0x000336be) list_single_number_heading_pane_g1_cp2

0x25cc,	// (0x000336ca) list_single_number_heading_pane_g2_cp2

0x25d4,	// (0x000336d2) list_single_number_heading_pane_t1_cp2_ParamLimits

0x25d4,	// (0x000336d2) list_single_number_heading_pane_t1_cp2

0x682f,	// (0x0003792d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x682f,	// (0x0003792d) list_single_number_heading_pane_t2_cp2

0x25ea,	// (0x000336e8) list_single_number_heading_pane_t3_cp2_ParamLimits

0x25ea,	// (0x000336e8) list_single_number_heading_pane_t3_cp2

0x25c0,	// (0x000336be) list_single_heading_pane_g1_cp2_ParamLimits

0x25c0,	// (0x000336be) list_single_heading_pane_g1_cp2

0x25cc,	// (0x000336ca) list_single_heading_pane_g2_cp2

0x25d4,	// (0x000336d2) list_single_heading_pane_t1_cp2_ParamLimits

0x25d4,	// (0x000336d2) list_single_heading_pane_t1_cp2

0x9f71,	// (0x0003b06f) list_single_heading_pane_t2_cp2_ParamLimits

0x9f71,	// (0x0003b06f) list_single_heading_pane_t2_cp2

0x9eb9,	// (0x0003afb7) list_double_graphic_pane_g1_cp2_ParamLimits

0x9eb9,	// (0x0003afb7) list_double_graphic_pane_g1_cp2

0x9ec5,	// (0x0003afc3) list_double_graphic_pane_g2_cp2_ParamLimits

0x9ec5,	// (0x0003afc3) list_double_graphic_pane_g2_cp2

0x9ed4,	// (0x0003afd2) list_double_graphic_pane_g3_cp2

0x9edc,	// (0x0003afda) list_double_graphic_pane_t1_cp2_ParamLimits

0x9edc,	// (0x0003afda) list_double_graphic_pane_t1_cp2

0x9ef2,	// (0x0003aff0) list_double_graphic_pane_t2_cp2_ParamLimits

0x9ef2,	// (0x0003aff0) list_double_graphic_pane_t2_cp2

0x265f,	// (0x0003375d) list_double_number_pane_g1_cp2_ParamLimits

0x265f,	// (0x0003375d) list_double_number_pane_g1_cp2

0x266b,	// (0x00033769) list_double_number_pane_g2_cp2

0x9e7d,	// (0x0003af7b) list_double_number_pane_t1_cp2_ParamLimits

0x9e7d,	// (0x0003af7b) list_double_number_pane_t1_cp2

0x9e91,	// (0x0003af8f) list_double_number_pane_t2_cp2_ParamLimits

0x9e91,	// (0x0003af8f) list_double_number_pane_t2_cp2

0x9ea7,	// (0x0003afa5) list_double_number_pane_t3_cp2_ParamLimits

0x9ea7,	// (0x0003afa5) list_double_number_pane_t3_cp2

0x9d66,	// (0x0003ae64) list_single_graphic_pane_g1_cp2_ParamLimits

0x9d66,	// (0x0003ae64) list_single_graphic_pane_g1_cp2

0x686d,	// (0x0003796b) list_single_graphic_pane_g2_cp2_ParamLimits

0x686d,	// (0x0003796b) list_single_graphic_pane_g2_cp2

0x6879,	// (0x00037977) list_single_graphic_pane_g3_cp2

0x9d3c,	// (0x0003ae3a) list_single_graphic_pane_t1_cp2_ParamLimits

0x9d3c,	// (0x0003ae3a) list_single_graphic_pane_t1_cp2

0x686d,	// (0x0003796b) list_single_number_pane_g1_cp2_ParamLimits

0x686d,	// (0x0003796b) list_single_number_pane_g1_cp2

0x6879,	// (0x00037977) list_single_number_pane_g2_cp2

0x9d3c,	// (0x0003ae3a) list_single_number_pane_t1_cp2_ParamLimits

0x9d3c,	// (0x0003ae3a) list_single_number_pane_t1_cp2

0x9d52,	// (0x0003ae50) list_single_number_pane_t2_cp2_ParamLimits

0x9d52,	// (0x0003ae50) list_single_number_pane_t2_cp2

0x67ea,	// (0x000378e8) list_double2_pane_g1_cp2_ParamLimits

0x67ea,	// (0x000378e8) list_double2_pane_g1_cp2

0x2514,	// (0x00033612) list_double2_pane_g2_cp2

0x2637,	// (0x00033735) list_double2_pane_t1_cp2_ParamLimits

0x2637,	// (0x00033735) list_double2_pane_t1_cp2

0x264d,	// (0x0003374b) list_double2_pane_t2_cp2_ParamLimits

0x264d,	// (0x0003374b) list_double2_pane_t2_cp2

0x265f,	// (0x0003375d) list_double_pane_g1_cp2_ParamLimits

0x265f,	// (0x0003375d) list_double_pane_g1_cp2

0x266b,	// (0x00033769) list_double_pane_g2_cp2

0x2673,	// (0x00033771) list_double_pane_t1_cp2_ParamLimits

0x2673,	// (0x00033771) list_double_pane_t1_cp2

0x2689,	// (0x00033787) list_double_pane_t2_cp2_ParamLimits

0x2689,	// (0x00033787) list_double_pane_t2_cp2

0x685d,	// (0x0003795b) list_single_pane_cp2_g3

0x686d,	// (0x0003796b) list_single_pane_g1_cp2_ParamLimits

0x686d,	// (0x0003796b) list_single_pane_g1_cp2

0x6879,	// (0x00037977) list_single_pane_g2_cp2

0x6881,	// (0x0003797f) list_single_pane_t1_cp2_ParamLimits

0x6881,	// (0x0003797f) list_single_pane_t1_cp2

0x6899,	// (0x00037997) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6899,	// (0x00037997) list_single_large_graphic_pane_g1_cp2

0x68a7,	// (0x000379a5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x68a7,	// (0x000379a5) list_single_large_graphic_pane_g2_cp2

0x68b3,	// (0x000379b1) list_single_large_graphic_pane_g3_cp2

0x68bb,	// (0x000379b9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x68bb,	// (0x000379b9) list_single_large_graphic_pane_g4_cp1

0x68d5,	// (0x000379d3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x68d5,	// (0x000379d3) list_single_large_graphic_pane_t1_cp2

0x9d06,	// (0x0003ae04) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9d06,	// (0x0003ae04) list_single_graphic_heading_pane_g1_cp2

0x9cd3,	// (0x0003add1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9cd3,	// (0x0003add1) list_single_graphic_heading_pane_g4_cp2

0x6879,	// (0x00037977) list_single_graphic_heading_pane_g5_cp2

0x9d12,	// (0x0003ae10) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9d12,	// (0x0003ae10) list_single_graphic_heading_pane_t1_cp2

0x9d28,	// (0x0003ae26) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9d28,	// (0x0003ae26) list_single_graphic_heading_pane_t2_cp2

0x9cc7,	// (0x0003adc5) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9cc7,	// (0x0003adc5) list_single_2graphic_pane_g1_cp2

0x9cd3,	// (0x0003add1) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9cd3,	// (0x0003add1) list_single_2graphic_pane_g2_cp2

0x6879,	// (0x00037977) list_single_2graphic_pane_g3_cp2

0x9ce4,	// (0x0003ade2) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9ce4,	// (0x0003ade2) list_single_2graphic_pane_g4_cp2

0x9cf0,	// (0x0003adee) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9cf0,	// (0x0003adee) list_single_2graphic_pane_t1_cp2

0xe4df,	// (0x0003f5dd) list_highlight_pane_g10_cp1

0x989f,	// (0x0003a99d) list_highlight_pane_g1_cp1

0x98a7,	// (0x0003a9a5) list_highlight_pane_g2_cp1

0x98af,	// (0x0003a9ad) list_highlight_pane_g3_cp1

0x98b7,	// (0x0003a9b5) list_highlight_pane_g4_cp1

0x98bf,	// (0x0003a9bd) list_highlight_pane_g5_cp1

0x98c7,	// (0x0003a9c5) list_highlight_pane_g6_cp1

0x98cf,	// (0x0003a9cd) list_highlight_pane_g7_cp1

0x98d7,	// (0x0003a9d5) list_highlight_pane_g8_cp1

0x98df,	// (0x0003a9dd) list_highlight_pane_g9_cp1

0x97bf,	// (0x0003a8bd) form_field_slider_pane_t3

0x97cd,	// (0x0003a8cb) form_field_slider_pane_t4

0x97db,	// (0x0003a8d9) slider_form_pane_ParamLimits

0x97db,	// (0x0003a8d9) slider_form_pane

0xe4e9,	// (0x0003f5e7) control_abbreviations

0xe4e9,	// (0x0003f5e7) control_conventions

0xe4e9,	// (0x0003f5e7) control_definitions

0xe4e9,	// (0x0003f5e7) format_table_attribute

0x9fc7,	// (0x0003b0c5) bg_popup_preview_window_pane_g9

0xe4e9,	// (0x0003f5e7) format_table_data2

0xe4e9,	// (0x0003f5e7) format_table_data3

0xe4e9,	// (0x0003f5e7) format_table_data_example

0x0008,

0xe4e9,	// (0x0003f5e7) intro_purpose

0xf8ea,	// (0x000409e8) bg_popup_preview_window_pane_g

0xe4e9,	// (0x0003f5e7) texts_category

0xe4e9,	// (0x0003f5e7) texts_graphics

0x68eb,	// (0x000379e9) text_digital

0x68fa,	// (0x000379f8) text_primary

0x6909,	// (0x00037a07) text_primary_small

0x6918,	// (0x00037a16) text_secondary

0x6927,	// (0x00037a25) text_title

0xa75b,	// (0x0003b859) bg_passive_tab_pane_g1_cp3_srt

0x24bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp3_srt

0xa764,	// (0x0003b862) bg_passive_tab_pane_g3_cp3_srt

0xef84,	// (0x00040082) bg_active_tab_pane_cp3_srt_ParamLimits

0xef84,	// (0x00040082) bg_active_tab_pane_cp3_srt

0xa76d,	// (0x0003b86b) tabs_4_active_pane_srt_g1

0xa775,	// (0x0003b873) tabs_4_active_pane_srt_t1_ParamLimits

0xa775,	// (0x0003b873) tabs_4_active_pane_srt_t1

0xa75b,	// (0x0003b859) bg_active_tab_pane_g1_cp3_copy1

0x24bb,	// (0x000335b9) bg_active_tab_pane_g2_cp3_copy1

0xa764,	// (0x0003b862) bg_active_tab_pane_g3_cp3_copy1

0xef84,	// (0x00040082) tabs_2_long_active_pane_srt_ParamLimits

0xef84,	// (0x00040082) tabs_2_long_active_pane_srt

0xef84,	// (0x00040082) tabs_2_long_passive_pane_srt_ParamLimits

0xef84,	// (0x00040082) tabs_2_long_passive_pane_srt

0x6147,	// (0x00037245) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6147,	// (0x00037245) bg_passive_tab_pane_cp4_srt

0xa403,	// (0x0003b501) bg_passive_tab_pane_g1_cp4_srt

0x24bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp4_srt

0xa40c,	// (0x0003b50a) bg_passive_tab_pane_g3_cp4_srt

0x26a7,	// (0x000337a5) bg_active_tab_pane_cp4_srt_ParamLimits

0x26a7,	// (0x000337a5) bg_active_tab_pane_cp4_srt

0xa415,	// (0x0003b513) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa415,	// (0x0003b513) tabs_2_long_active_pane_srt_t1

0xa403,	// (0x0003b501) bg_active_tab_pane_g1_cp4_srt

0x24bb,	// (0x000335b9) bg_active_tab_pane_g2_cp4_srt

0xa40c,	// (0x0003b50a) bg_active_tab_pane_g3_cp4_srt

0xf0b7,	// (0x000401b5) tabs_3_long_active_pane_srt_ParamLimits

0xf0b7,	// (0x000401b5) tabs_3_long_active_pane_srt

0xf0b7,	// (0x000401b5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xf0b7,	// (0x000401b5) tabs_3_long_passive_pane_cp_srt

0xf0b7,	// (0x000401b5) tabs_3_long_passive_pane_srt_ParamLimits

0xf0b7,	// (0x000401b5) tabs_3_long_passive_pane_srt

0x6147,	// (0x00037245) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6147,	// (0x00037245) bg_passive_tab_pane_cp5_srt

0x250b,	// (0x00033609) bg_passive_tab_pane_g1_cp5_srt

0x24bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp5_srt

0x2502,	// (0x00033600) bg_passive_tab_pane_g3_cp5_srt

0x26a7,	// (0x000337a5) bg_active_tab_pane_cp5_srt_ParamLimits

0x26a7,	// (0x000337a5) bg_active_tab_pane_cp5_srt

0xa3f1,	// (0x0003b4ef) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa3f1,	// (0x0003b4ef) tabs_3_long_active_pane_srt_t1

0x250b,	// (0x00033609) bg_active_tab_pane_g1_cp5_srt

0x24bb,	// (0x000335b9) bg_active_tab_pane_g2_cp5_srt

0x2502,	// (0x00033600) bg_active_tab_pane_g3_cp5_srt

0xa3e3,	// (0x0003b4e1) navi_text_pane_srt_t1

0xa3db,	// (0x0003b4d9) navi_icon_pane_srt_g1

0x6b9b,	// (0x00037c99) midp_editing_number_pane_srt

0x6936,	// (0x00037a34) midp_ticker_pane_srt

0x6ba3,	// (0x00037ca1) midp_ticker_pane_srt_g1

0x6bab,	// (0x00037ca9) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0004086b) midp_ticker_pane_srt_g

0x6bb3,	// (0x00037cb1) midp_ticker_pane_srt_t1

0xa3cc,	// (0x0003b4ca) midp_editing_number_pane_t1_copy1

0x6147,	// (0x00037245) listscroll_midp_pane

0x6147,	// (0x00037245) midp_form_pane

0x69a0,	// (0x00037a9e) midp_info_popup_window_ParamLimits

0x69a0,	// (0x00037a9e) midp_info_popup_window

0x1ec1,	// (0x00032fbf) bg_popup_sub_pane_cp50_ParamLimits

0x1ec1,	// (0x00032fbf) bg_popup_sub_pane_cp50

0x94d5,	// (0x0003a5d3) listscroll_midp_info_pane_ParamLimits

0x94d5,	// (0x0003a5d3) listscroll_midp_info_pane

0x94bd,	// (0x0003a5bb) listscroll_form_midp_pane_ParamLimits

0x94bd,	// (0x0003a5bb) listscroll_form_midp_pane

0x94c9,	// (0x0003a5c7) scroll_bar_cp050

0x949d,	// (0x0003a59b) list_midp_pane

0xb1f0,	// (0x0003c2ee) signal_pane_g2_cp

0x93d7,	// (0x0003a4d5) listscroll_midp_info_pane_t1_ParamLimits

0x93d7,	// (0x0003a4d5) listscroll_midp_info_pane_t1

0x93ef,	// (0x0003a4ed) listscroll_midp_info_pane_t2_ParamLimits

0x93ef,	// (0x0003a4ed) listscroll_midp_info_pane_t2

0x942d,	// (0x0003a52b) listscroll_midp_info_pane_t3_ParamLimits

0x942d,	// (0x0003a52b) listscroll_midp_info_pane_t3

0x9467,	// (0x0003a565) listscroll_midp_info_pane_t4_ParamLimits

0x9467,	// (0x0003a565) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00040923) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00040923) listscroll_midp_info_pane_t

0x1f41,	// (0x0003303f) scroll_pane_cp21

0x9371,	// (0x0003a46f) form_midp_field_choice_group_pane

0x937a,	// (0x0003a478) form_midp_field_text_pane

0x93bd,	// (0x0003a4bb) form_midp_field_time_pane

0x93c5,	// (0x0003a4c3) form_midp_gauge_slider_pane

0x93ce,	// (0x0003a4cc) form_midp_gauge_wait_pane

0xe4e9,	// (0x0003f5e7) form_midp_image_pane

0x711e,	// (0x0003821c) list_single_midp_pane_ParamLimits

0x711e,	// (0x0003821c) list_single_midp_pane

0x9335,	// (0x0003a433) form_midp_field_text_pane_t1

0x9121,	// (0x0003a21f) input_focus_pane_cp050

0x9360,	// (0x0003a45e) list_midp_form_text_pane

0x9304,	// (0x0003a402) form_midp_field_choice_group_pane_t1

0x9312,	// (0x0003a410) input_focus_pane_cp051

0x9326,	// (0x0003a424) list_midp_choice_pane

0xe4e9,	// (0x0003f5e7) status_idle_pane

0x92e8,	// (0x0003a3e6) form_midp_field_time_pane_t1

0xe4df,	// (0x0003f5dd) wait_anim_pane_g2_copy1

0x92f6,	// (0x0003a3f4) form_midp_field_time_pane_t2

0x0001,

0x6a50,	// (0x00037b4e) aid_navinavi_width_2_pane

0xf820,	// (0x0004091e) form_midp_field_time_pane_t

0xe4e9,	// (0x0003f5e7) input_focus_pane_cp052

0xe4e9,	// (0x0003f5e7) bg_input_focus_pane_cp040

0x92a8,	// (0x0003a3a6) form_midp_gauge_slider_pane_t1

0x92b6,	// (0x0003a3b4) form_midp_gauge_slider_pane_t2

0x92c4,	// (0x0003a3c2) form_midp_gauge_slider_pane_t3

0x92d2,	// (0x0003a3d0) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00040915) form_midp_gauge_slider_pane_t

0x92e0,	// (0x0003a3de) form_midp_slider_pane

0xef84,	// (0x00040082) bg_input_focus_pane_cp041_ParamLimits

0xef84,	// (0x00040082) bg_input_focus_pane_cp041

0x9275,	// (0x0003a373) form_midp_gauge_wait_pane_t1_ParamLimits

0x9275,	// (0x0003a373) form_midp_gauge_wait_pane_t1

0x9287,	// (0x0003a385) form_midp_gauge_wait_pane_t2_ParamLimits

0x9287,	// (0x0003a385) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x00040910) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x00040910) form_midp_gauge_wait_pane_t

0x9299,	// (0x0003a397) form_midp_wait_pane_ParamLimits

0x9299,	// (0x0003a397) form_midp_wait_pane

0x923d,	// (0x0003a33b) form_midp_image_pane_g1

0x9246,	// (0x0003a344) form_midp_image_pane_t1

0x9255,	// (0x0003a353) form_midp_image_pane_t2

0x9264,	// (0x0003a362) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x00040909) form_midp_image_pane_t

0x9234,	// (0x0003a332) list_single_midp_pane_g1

0x3efb,	// (0x00034ff9) list_single_midp_pane_t1

0x921a,	// (0x0003a318) list_midp_form_item_pane_ParamLimits

0x921a,	// (0x0003a318) list_midp_form_item_pane

0x69f8,	// (0x00037af6) list_midp_form_item_pane_t1

0x6a07,	// (0x00037b05) midp_ticker_pane_g1

0x6a13,	// (0x00037b11) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00040851) midp_ticker_pane_g

0x6a1f,	// (0x00037b1d) midp_ticker_pane_t1

0xa63f,	// (0x0003b73d) midp_editing_number_pane_t1

0xa61d,	// (0x0003b71b) midp_editing_number_pane

0xa62c,	// (0x0003b72a) midp_ticker_pane

0xa3bc,	// (0x0003b4ba) ai_message_heading_pane

0xe4e9,	// (0x0003f5e7) bg_popup_window_pane_cp14

0xa3c4,	// (0x0003b4c2) listscroll_ai_message_pane

0xa342,	// (0x0003b440) ai_message_heading_pane_g1_ParamLimits

0xa342,	// (0x0003b440) ai_message_heading_pane_g1

0xa34e,	// (0x0003b44c) ai_message_heading_pane_g2_ParamLimits

0xa34e,	// (0x0003b44c) ai_message_heading_pane_g2

0xa35c,	// (0x0003b45a) ai_message_heading_pane_g3_ParamLimits

0xa35c,	// (0x0003b45a) ai_message_heading_pane_g3

0xa368,	// (0x0003b466) ai_message_heading_pane_g4_ParamLimits

0xa368,	// (0x0003b466) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x00040a4a) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x00040a4a) ai_message_heading_pane_g

0xa374,	// (0x0003b472) ai_message_heading_pane_t1_ParamLimits

0xa374,	// (0x0003b472) ai_message_heading_pane_t1

0xa38e,	// (0x0003b48c) ai_message_heading_pane_t2_ParamLimits

0xa38e,	// (0x0003b48c) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00040a53) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00040a53) ai_message_heading_pane_t

0xa3a2,	// (0x0003b4a0) bg_popup_heading_pane_cp1_ParamLimits

0xa3a2,	// (0x0003b4a0) bg_popup_heading_pane_cp1

0xa330,	// (0x0003b42e) list_ai_message_pane_ParamLimits

0xa330,	// (0x0003b42e) list_ai_message_pane

0x1f41,	// (0x0003303f) scroll_pane_cp10

0xa2cc,	// (0x0003b3ca) list_ai_message_pane_g1

0xa2d4,	// (0x0003b3d2) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x00040a27) list_ai_message_pane_g

0xa2dc,	// (0x0003b3da) list_ai_message_pane_t1_ParamLimits

0xa2dc,	// (0x0003b3da) list_ai_message_pane_t1

0xa2f1,	// (0x0003b3ef) list_ai_message_pane_t2_ParamLimits

0xa2f1,	// (0x0003b3ef) list_ai_message_pane_t2

0xa306,	// (0x0003b404) list_ai_message_pane_t3_ParamLimits

0xa306,	// (0x0003b404) list_ai_message_pane_t3

0xa31b,	// (0x0003b419) list_ai_message_pane_t4_ParamLimits

0xa31b,	// (0x0003b419) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00040a2c) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00040a2c) list_ai_message_pane_t

0xa2b5,	// (0x0003b3b3) cell_ai_soft_ind_pane_ParamLimits

0xa2b5,	// (0x0003b3b3) cell_ai_soft_ind_pane

0x6a31,	// (0x00037b2f) cell_ai_soft_ind_pane_g1_ParamLimits

0x6a31,	// (0x00037b2f) cell_ai_soft_ind_pane_g1

0xe4e9,	// (0x0003f5e7) grid_highlight_cp1

0x6a3e,	// (0x00037b3c) text_secondary_cp56_ParamLimits

0x6a3e,	// (0x00037b3c) text_secondary_cp56

0xa28a,	// (0x0003b388) example_general_pane_ParamLimits

0xa28a,	// (0x0003b388) example_general_pane

0xa296,	// (0x0003b394) example_parent_pane_g1_ParamLimits

0xa296,	// (0x0003b394) example_parent_pane_g1

0xa2a2,	// (0x0003b3a0) example_parent_pane_t1_ParamLimits

0xa2a2,	// (0x0003b3a0) example_parent_pane_t1

0x8933,	// (0x00039a31) popup_preview_text_window_ParamLimits

0x8933,	// (0x00039a31) popup_preview_text_window

0x6865,	// (0x00037963) list_single_pane_cp2_g4

0xf16d,	// (0x0004026b) bg_popup_preview_window_pane_ParamLimits

0xf16d,	// (0x0004026b) bg_popup_preview_window_pane

0x9fd1,	// (0x0003b0cf) popup_preview_text_window_t1_ParamLimits

0x9fd1,	// (0x0003b0cf) popup_preview_text_window_t1

0x9fef,	// (0x0003b0ed) popup_preview_text_window_t2_ParamLimits

0x9fef,	// (0x0003b0ed) popup_preview_text_window_t2

0xa038,	// (0x0003b136) popup_preview_text_window_t3_ParamLimits

0xa038,	// (0x0003b136) popup_preview_text_window_t3

0xa07d,	// (0x0003b17b) popup_preview_text_window_t4_ParamLimits

0xa07d,	// (0x0003b17b) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x000409fb) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x000409fb) popup_preview_text_window_t

0xa0fb,	// (0x0003b1f9) scroll_pane_cp11

0x90ad,	// (0x0003a1ab) bg_popup_preview_window_pane_g1

0x9f85,	// (0x0003b083) bg_popup_preview_window_pane_g2

0x9f8f,	// (0x0003b08d) bg_popup_preview_window_pane_g3

0x9f99,	// (0x0003b097) bg_popup_preview_window_pane_g4

0x9fa3,	// (0x0003b0a1) bg_popup_preview_window_pane_g5

0x9fad,	// (0x0003b0ab) bg_popup_preview_window_pane_g6

0x9fb5,	// (0x0003b0b3) bg_popup_preview_window_pane_g7

0x9fbd,	// (0x0003b0bb) bg_popup_preview_window_pane_g8

0x53a6,	// (0x000364a4) aid_popup_width_pane

0x890f,	// (0x00039a0d) popup_midp_note_alarm_window_ParamLimits

0x890f,	// (0x00039a0d) popup_midp_note_alarm_window

0x1e09,	// (0x00032f07) data_form_pane_ParamLimits

0x5fbc,	// (0x000370ba) form_field_data_pane_g1

0x5fc6,	// (0x000370c4) form_field_data_pane_t1_ParamLimits

0x1e15,	// (0x00032f13) input_focus_pane_ParamLimits

0x3d1a,	// (0x00034e18) data_form_wide_pane_ParamLimits

0x3d2b,	// (0x00034e29) form_field_data_wide_pane_g1

0x3d37,	// (0x00034e35) form_field_data_wide_pane_t1_ParamLimits

0xf322,	// (0x00040420) input_focus_pane_cp6_ParamLimits

0x610c,	// (0x0003720a) input_popup_find_pane_g1_ParamLimits

0x610c,	// (0x0003720a) input_popup_find_pane_g1

0x6265,	// (0x00037363) aid_navi_side_left_pane

0x627a,	// (0x00037378) aid_navi_side_right_pane

0x999a,	// (0x0003aa98) bg_popup_window_pane_cp30_ParamLimits

0x999a,	// (0x0003aa98) bg_popup_window_pane_cp30

0x9a14,	// (0x0003ab12) popup_midp_note_alarm_window_g1_ParamLimits

0x9a14,	// (0x0003ab12) popup_midp_note_alarm_window_g1

0x9a44,	// (0x0003ab42) popup_midp_note_alarm_window_t1_ParamLimits

0x9a44,	// (0x0003ab42) popup_midp_note_alarm_window_t1

0x9ae5,	// (0x0003abe3) popup_midp_note_alarm_window_t2_ParamLimits

0x9ae5,	// (0x0003abe3) popup_midp_note_alarm_window_t2

0x9b93,	// (0x0003ac91) popup_midp_note_alarm_window_t3_ParamLimits

0x9b93,	// (0x0003ac91) popup_midp_note_alarm_window_t3

0x9bc5,	// (0x0003acc3) popup_midp_note_alarm_window_t4_ParamLimits

0x9bc5,	// (0x0003acc3) popup_midp_note_alarm_window_t4

0x9beb,	// (0x0003ace9) popup_midp_note_alarm_window_t5_ParamLimits

0x9beb,	// (0x0003ace9) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00040998) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00040998) popup_midp_note_alarm_window_t

0x9c97,	// (0x0003ad95) wait_bar_pane_cp1_ParamLimits

0x9c97,	// (0x0003ad95) wait_bar_pane_cp1

0xe4e9,	// (0x0003f5e7) wait_anim_pane_copy1

0xe4e9,	// (0x0003f5e7) wait_border_pane_copy1

0x967f,	// (0x0003a77d) wait_border_pane_g1_copy1

0x3d51,	// (0x00034e4f) form_field_popup_pane_g1

0x5fe0,	// (0x000370de) form_field_popup_pane_t1_ParamLimits

0x1e15,	// (0x00032f13) input_focus_pane_cp7_ParamLimits

0x1e43,	// (0x00032f41) list_form_pane_ParamLimits

0x3d59,	// (0x00034e57) form_field_popup_wide_pane_g1

0x3d61,	// (0x00034e5f) form_field_popup_wide_pane_t1_ParamLimits

0x1e15,	// (0x00032f13) input_focus_pane_cp8_ParamLimits

0x1e4f,	// (0x00032f4d) list_form_wide_pane_ParamLimits

0xa7e8,	// (0x0003b8e6) aid_size_cell_graphic_pane

0x605f,	// (0x0003715d) data_form_pane_t1_ParamLimits

0x73b1,	// (0x000384af) data_form_wide_pane_t1_ParamLimits

0x8c5a,	// (0x00039d58) bg_status_flat_pane

0x57c1,	// (0x000368bf) title_pane_t1_ParamLimits

0xef4c,	// (0x0004004a) title_pane_t2_ParamLimits

0xef72,	// (0x00040070) title_pane_t3_ParamLimits

0xf557,	// (0x00040655) title_pane_t_ParamLimits

0x63b2,	// (0x000374b0) level_1_signal_ParamLimits

0x63bf,	// (0x000374bd) level_2_signal_ParamLimits

0x63cc,	// (0x000374ca) level_3_signal_ParamLimits

0x63d9,	// (0x000374d7) level_4_signal_ParamLimits

0x63e6,	// (0x000374e4) level_5_signal_ParamLimits

0x63f3,	// (0x000374f1) level_6_signal_ParamLimits

0x6400,	// (0x000374fe) level_7_signal_ParamLimits

0x63b2,	// (0x000374b0) level_1_battery_ParamLimits

0x63bf,	// (0x000374bd) level_2_battery_ParamLimits

0x63cc,	// (0x000374ca) level_3_battery_ParamLimits

0x63d9,	// (0x000374d7) level_4_battery_ParamLimits

0x63e6,	// (0x000374e4) level_5_battery_ParamLimits

0x63f3,	// (0x000374f1) level_6_battery_ParamLimits

0x6400,	// (0x000374fe) level_7_battery_ParamLimits

0x989f,	// (0x0003a99d) bg_status_flat_pane_g1

0x98a7,	// (0x0003a9a5) bg_status_flat_pane_g2

0x98af,	// (0x0003a9ad) bg_status_flat_pane_g3

0x98b7,	// (0x0003a9b5) bg_status_flat_pane_g4

0x98bf,	// (0x0003a9bd) bg_status_flat_pane_g5

0x98c7,	// (0x0003a9c5) bg_status_flat_pane_g6

0x98cf,	// (0x0003a9cd) bg_status_flat_pane_g7

0x5831,	// (0x0003692f) tabs_3_active_pane_t1_ParamLimits

0x5831,	// (0x0003692f) tabs_3_passive_pane_t1_ParamLimits

0x584b,	// (0x00036949) tabs_4_active_pane_t1_ParamLimits

0x584b,	// (0x00036949) tabs_4_1_passive_pane_t1_ParamLimits

0x6122,	// (0x00037220) tabs_2_active_pane_t1_ParamLimits

0x6122,	// (0x00037220) tabs_2_passive_pane_t1_ParamLimits

0x26a7,	// (0x000337a5) bg_active_tab_pane_cp4_ParamLimits

0x6134,	// (0x00037232) tabs_2_long_active_pane_t1_ParamLimits

0x6147,	// (0x00037245) bg_passive_tab_pane_cp4_ParamLimits

0x7065,	// (0x00038163) list_single_midp_graphic_pane_t1_ParamLimits

0x26a7,	// (0x000337a5) bg_active_tab_pane_cp5_ParamLimits

0x6153,	// (0x00037251) tabs_3_long_active_pane_t1_ParamLimits

0x6147,	// (0x00037245) bg_passive_tab_pane_cp5_ParamLimits

0x7065,	// (0x00038163) list_single_midp_graphic_pane_t1

0x8c5a,	// (0x00039d58) bg_status_flat_pane_ParamLimits

0x8d25,	// (0x00039e23) indicator_pane_cp2_ParamLimits

0x8d25,	// (0x00039e23) indicator_pane_cp2

0x8e68,	// (0x00039f66) navi_pane_srt_ParamLimits

0x8e68,	// (0x00039f66) navi_pane_srt

0x8e8c,	// (0x00039f8a) popup_clock_digital_analogue_window_cp1

0xefc8,	// (0x000400c6) indicator_pane_t1

0x6936,	// (0x00037a34) copy_highlight_pane

0x6936,	// (0x00037a34) cursor_graphics_pane

0x6936,	// (0x00037a34) graphic_within_text_pane

0x6936,	// (0x00037a34) link_highlight_pane

0xa0be,	// (0x0003b1bc) popup_preview_text_window_t5_ParamLimits

0xa0be,	// (0x0003b1bc) popup_preview_text_window_t5

0x6a5a,	// (0x00037b58) cursor_digital_pane

0x6a5a,	// (0x00037b58) cursor_primary_pane

0x6a6b,	// (0x00037b69) cursor_primary_small_pane

0x6a73,	// (0x00037b71) cursor_secondary_pane

0x6a7b,	// (0x00037b79) cursor_title_pane

0x6a5a,	// (0x00037b58) link_highlight_digital_pane

0x6a62,	// (0x00037b60) link_highlight_primary_pane

0x6a6b,	// (0x00037b69) link_highlight_primary_small_pane

0x6a73,	// (0x00037b71) link_highlight_secondary_pane

0x6a7b,	// (0x00037b79) link_highlight_title_pane

0x6a5a,	// (0x00037b58) copy_highlight_digital_pane

0x6a5a,	// (0x00037b58) copy_highlight_primary_pane

0x6a6b,	// (0x00037b69) copy_highlight_primary_small_pane

0x6a73,	// (0x00037b71) copy_highlight_secondary_pane

0x6a7b,	// (0x00037b79) copy_highlight_title_pane

0x6a73,	// (0x00037b71) graphic_text_digital_pane

0x993d,	// (0x0003aa3b) graphic_text_primary_pane

0x9946,	// (0x0003aa44) graphic_text_primary_small_pane

0x6a6b,	// (0x00037b69) graphic_text_secondary_pane

0x6a5a,	// (0x00037b58) graphic_text_title_pane

0x6a83,	// (0x00037b81) cursor_primary_pane_g1

0x992f,	// (0x0003aa2d) cursor_text_primary_t1

0x9917,	// (0x0003aa15) cursor_primary_small_pane_g1

0x9921,	// (0x0003aa1f) cursor_text_primary_small_t1

0x98ff,	// (0x0003a9fd) cursor_primary_small_pane_g1_copy1

0x9909,	// (0x0003aa07) cursor_text_primary_small_t1_copy1

0x98e7,	// (0x0003a9e5) cursor_text_title_t1

0x98f5,	// (0x0003a9f3) cursor_title_pane_g1

0x6a83,	// (0x00037b81) cursor_digital_pane_g1

0x6a8d,	// (0x00037b8b) cursor_text_digital_t1

0x6a9b,	// (0x00037b99) link_highlight_primary_pane_g1

0x9890,	// (0x0003a98e) link_highlight_primary_pane_t1

0x6a9b,	// (0x00037b99) link_highlight_primary_small_pane_g1

0x6aa3,	// (0x00037ba1) link_highlight_primary_small_pane_t1

0x6ab2,	// (0x00037bb0) link_highlight_secondary_pane_g1

0x6aba,	// (0x00037bb8) link_highlight_secondary_pane_t1

0x9804,	// (0x0003a902) link_highlight_title_pane_g1

0x980c,	// (0x0003a90a) link_highlight_title_pane_t1

0x97ed,	// (0x0003a8eb) link_highlight_digital_pane_g1

0x97f5,	// (0x0003a8f3) link_highlight_digital_pane_t1

0x96b5,	// (0x0003a7b3) copy_highlight_primary_pane_g1

0x96cc,	// (0x0003a7ca) copy_highlight_primary_pane_t1

0x96b5,	// (0x0003a7b3) copy_highlight_primary_small_pane_g1

0x96bd,	// (0x0003a7bb) copy_highlight_primary_small_pane_t1

0x6ac9,	// (0x00037bc7) copy_highlight_secondary_pane_g1

0x6ad1,	// (0x00037bcf) copy_highlight_secondary_pane_t1

0x969e,	// (0x0003a79c) copy_highlight_title_pane_g1

0x96a6,	// (0x0003a7a4) copy_highlight_title_pane_t1

0x96b5,	// (0x0003a7b3) copy_highlight_digital_pane_g1

0xa9b8,	// (0x0003bab6) copy_highlight_digital_pane_t1

0xa90c,	// (0x0003ba0a) graphic_text_primary_pane_g1

0xa99c,	// (0x0003ba9a) graphic_text_primary_pane_t1

0xa9aa,	// (0x0003baa8) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x00040ac7) graphic_text_primary_pane_t

0xa978,	// (0x0003ba76) graphic_text_primary_small_pane_g1

0xa980,	// (0x0003ba7e) graphic_text_primary_small_pane_t1

0xa98e,	// (0x0003ba8c) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00040ac2) graphic_text_primary_small_pane_t

0xa954,	// (0x0003ba52) graphic_text_secondary_pane_g1

0xa95c,	// (0x0003ba5a) graphic_text_secondary_pane_t1

0xa96a,	// (0x0003ba68) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00040abd) graphic_text_secondary_pane_t

0xa930,	// (0x0003ba2e) graphic_text_title_pane_g1

0xa938,	// (0x0003ba36) graphic_text_title_pane_t1

0xa946,	// (0x0003ba44) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x00040ab8) graphic_text_title_pane_t

0xa90c,	// (0x0003ba0a) graphic_text_digital_pane_g1

0xa914,	// (0x0003ba12) graphic_text_digital_pane_t1

0xa922,	// (0x0003ba20) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00040ab3) graphic_text_digital_pane_t

0xef84,	// (0x00040082) navi_icon_pane_srt_ParamLimits

0xef84,	// (0x00040082) navi_icon_pane_srt

0xe4e9,	// (0x0003f5e7) navi_midp_pane_srt

0xe4e9,	// (0x0003f5e7) navi_navi_pane_srt

0xef84,	// (0x00040082) navi_text_pane_srt_ParamLimits

0xef84,	// (0x00040082) navi_text_pane_srt

0xa8d7,	// (0x0003b9d5) navi_navi_icon_text_pane_srt

0xa8df,	// (0x0003b9dd) navi_navi_pane_srt_g1_ParamLimits

0xa8df,	// (0x0003b9dd) navi_navi_pane_srt_g1

0xa8f1,	// (0x0003b9ef) navi_navi_pane_srt_g2_ParamLimits

0xa8f1,	// (0x0003b9ef) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x00040aae) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x00040aae) navi_navi_pane_srt_g

0xa903,	// (0x0003ba01) navi_navi_tabs_pane_srt

0xa8d7,	// (0x0003b9d5) navi_navi_text_pane_srt

0xa8d7,	// (0x0003b9d5) navi_navi_volume_pane_srt

0xa8c8,	// (0x0003b9c6) navi_navi_text_pane_srt_t1

0x74d5,	// (0x000385d3) navi_navi_volume_pane_srt_g1

0x74dd,	// (0x000385db) volume_small_pane_srt_ParamLimits

0x74dd,	// (0x000385db) volume_small_pane_srt

0x6ae0,	// (0x00037bde) volume_small_pane_srt_g1_ParamLimits

0x6ae0,	// (0x00037bde) volume_small_pane_srt_g1

0x6af0,	// (0x00037bee) volume_small_pane_srt_g2_ParamLimits

0x6af0,	// (0x00037bee) volume_small_pane_srt_g2

0x6b01,	// (0x00037bff) volume_small_pane_srt_g3_ParamLimits

0x6b01,	// (0x00037bff) volume_small_pane_srt_g3

0x6b12,	// (0x00037c10) volume_small_pane_srt_g4_ParamLimits

0x6b12,	// (0x00037c10) volume_small_pane_srt_g4

0x6b23,	// (0x00037c21) volume_small_pane_srt_g5_ParamLimits

0x6b23,	// (0x00037c21) volume_small_pane_srt_g5

0x6b34,	// (0x00037c32) volume_small_pane_srt_g6_ParamLimits

0x6b34,	// (0x00037c32) volume_small_pane_srt_g6

0x6b45,	// (0x00037c43) volume_small_pane_srt_g7_ParamLimits

0x6b45,	// (0x00037c43) volume_small_pane_srt_g7

0x6b56,	// (0x00037c54) volume_small_pane_srt_g8_ParamLimits

0x6b56,	// (0x00037c54) volume_small_pane_srt_g8

0x6b67,	// (0x00037c65) volume_small_pane_srt_g9_ParamLimits

0x6b67,	// (0x00037c65) volume_small_pane_srt_g9

0x6b78,	// (0x00037c76) volume_small_pane_srt_g10_ParamLimits

0x6b78,	// (0x00037c76) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00040856) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00040856) volume_small_pane_srt_g

0xf222,	// (0x00040320) query_popup_data_pane_cp2

0xa8ae,	// (0x0003b9ac) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa8ae,	// (0x0003b9ac) navi_navi_icon_text_pane_srt_t1

0x993d,	// (0x0003aa3b) navi_tabs_2_long_pane_srt

0x993d,	// (0x0003aa3b) navi_tabs_2_pane_srt

0x993d,	// (0x0003aa3b) navi_tabs_3_long_pane_srt

0x993d,	// (0x0003aa3b) navi_tabs_3_pane_srt

0x993d,	// (0x0003aa3b) navi_tabs_4_pane_srt

0x74b5,	// (0x000385b3) tabs_2_active_pane_srt_ParamLimits

0x74b5,	// (0x000385b3) tabs_2_active_pane_srt

0x74c5,	// (0x000385c3) tabs_2_passive_pane_srt_ParamLimits

0x74c5,	// (0x000385c3) tabs_2_passive_pane_srt

0x6ea7,	// (0x00037fa5) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6ea7,	// (0x00037fa5) bg_passive_tab_pane_cp1_srt

0xa87a,	// (0x0003b978) bg_passive_tab_pane_g1_cp1_srt

0x24bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp1_srt

0xa883,	// (0x0003b981) bg_passive_tab_pane_g3_cp1_srt

0xef84,	// (0x00040082) bg_active_tab_pane_cp1_srt_ParamLimits

0xef84,	// (0x00040082) bg_active_tab_pane_cp1_srt

0xa88c,	// (0x0003b98a) tabs_2_active_pane_srt_g1

0xa894,	// (0x0003b992) tabs_2_active_pane_srt_t1_ParamLimits

0xa894,	// (0x0003b992) tabs_2_active_pane_srt_t1

0xa87a,	// (0x0003b978) bg_active_tab_pane_g1_cp1_srt

0x24bb,	// (0x000335b9) bg_active_tab_pane_g2_cp1_srt

0xa883,	// (0x0003b981) bg_active_tab_pane_g3_cp1_srt

0x7482,	// (0x00038580) tabs_3_active_pane_srt_ParamLimits

0x7482,	// (0x00038580) tabs_3_active_pane_srt

0x7493,	// (0x00038591) tabs_3_passive_pane_cp_srt_ParamLimits

0x7493,	// (0x00038591) tabs_3_passive_pane_cp_srt

0x74a4,	// (0x000385a2) tabs_3_passive_pane_srt_ParamLimits

0x74a4,	// (0x000385a2) tabs_3_passive_pane_srt

0x6ea7,	// (0x00037fa5) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6ea7,	// (0x00037fa5) bg_passive_tab_pane_cp2_srt

0x6b89,	// (0x00037c87) bg_passive_tab_pane_g1_cp2_srt

0x24bb,	// (0x000335b9) bg_passive_tab_pane_g2_cp2_srt

0x6b92,	// (0x00037c90) bg_passive_tab_pane_g3_cp2_srt

0xef84,	// (0x00040082) bg_active_tab_pane_cp2_srt_ParamLimits

0xef84,	// (0x00040082) bg_active_tab_pane_cp2_srt

0xa860,	// (0x0003b95e) tabs_3_active_pane_srt_g1

0xa868,	// (0x0003b966) tabs_3_active_pane_srt_t1_ParamLimits

0xa868,	// (0x0003b966) tabs_3_active_pane_srt_t1

0x6b89,	// (0x00037c87) bg_active_tab_pane_g1_cp2_srt

0x24bb,	// (0x000335b9) bg_active_tab_pane_g2_cp2_srt

0x6b92,	// (0x00037c90) bg_active_tab_pane_g3_cp2_srt

0x743a,	// (0x00038538) tabs_4_active_pane_srt_ParamLimits

0x743a,	// (0x00038538) tabs_4_active_pane_srt

0x744c,	// (0x0003854a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x744c,	// (0x0003854a) tabs_4_passive_pane_cp2_srt

0x6e2d,	// (0x00037f2b) aid_size_cell_toolbar

0x6147,	// (0x00037245) main_idle_act_pane_ParamLimits

0x8735,	// (0x00039833) popup_large_graphic_colour_window_ParamLimits

0x8adc,	// (0x00039bda) popup_toolbar_window_ParamLimits

0x8adc,	// (0x00039bda) popup_toolbar_window

0x3f20,	// (0x0003501e) list_single_graphic_2heading_pane_ParamLimits

0x3f20,	// (0x0003501e) list_single_graphic_2heading_pane

0x2119,	// (0x00033217) aid_size_cell_apps_grid_lsc_pane

0x212b,	// (0x00033229) aid_size_cell_apps_grid_prt_pane

0x6ea7,	// (0x00037fa5) bg_wml_button_pane_cp1_ParamLimits

0x6ea7,	// (0x00037fa5) bg_wml_button_pane_cp1

0x9335,	// (0x0003a433) form_midp_field_text_pane_t1_ParamLimits

0x9121,	// (0x0003a21f) input_focus_pane_cp050_ParamLimits

0x9360,	// (0x0003a45e) list_midp_form_text_pane_ParamLimits

0x9312,	// (0x0003a410) input_focus_pane_cp051_ParamLimits

0x9326,	// (0x0003a424) list_midp_choice_pane_ParamLimits

0x91da,	// (0x0003a2d8) list_single_2graphic_pane_cp3_ParamLimits

0x91da,	// (0x0003a2d8) list_single_2graphic_pane_cp3

0x91f3,	// (0x0003a2f1) list_single_midp_graphic_pane_ParamLimits

0x91f3,	// (0x0003a2f1) list_single_midp_graphic_pane

0x5312,	// (0x00036410) list_single_graphic_2heading_pane_g1_ParamLimits

0x5312,	// (0x00036410) list_single_graphic_2heading_pane_g1

0x531e,	// (0x0003641c) list_single_graphic_2heading_pane_g4_ParamLimits

0x531e,	// (0x0003641c) list_single_graphic_2heading_pane_g4

0x532a,	// (0x00036428) list_single_graphic_2heading_pane_g5_ParamLimits

0x532a,	// (0x00036428) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x000408a9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x000408a9) list_single_graphic_2heading_pane_g

0x5336,	// (0x00036434) list_single_graphic_2heading_pane_t1_ParamLimits

0x5336,	// (0x00036434) list_single_graphic_2heading_pane_t1

0x534a,	// (0x00036448) list_single_graphic_2heading_pane_t2_ParamLimits

0x534a,	// (0x00036448) list_single_graphic_2heading_pane_t2

0x5366,	// (0x00036464) list_single_graphic_2heading_pane_t3_ParamLimits

0x5366,	// (0x00036464) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x000408b0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x000408b0) list_single_graphic_2heading_pane_t

0x8feb,	// (0x0003a0e9) bg_popup_sub_pane_cp2

0x9015,	// (0x0003a113) grid_toobar_pane

0x6fd5,	// (0x000380d3) cell_toolbar_pane_ParamLimits

0x6fd5,	// (0x000380d3) cell_toolbar_pane

0x9051,	// (0x0003a14f) cell_toolbar_pane_g1_ParamLimits

0x9051,	// (0x0003a14f) cell_toolbar_pane_g1

0x9065,	// (0x0003a163) cell_toolbar_pane_g2_ParamLimits

0x9065,	// (0x0003a163) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x000408be) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x000408be) cell_toolbar_pane_g

0x9087,	// (0x0003a185) grid_highlight_pane_cp2_ParamLimits

0x9087,	// (0x0003a185) grid_highlight_pane_cp2

0x90a1,	// (0x0003a19f) toolbar_button_pane

0x90ad,	// (0x0003a1ab) toolbar_button_pane_g1

0x90b5,	// (0x0003a1b3) toolbar_button_pane_g2

0x90bd,	// (0x0003a1bb) toolbar_button_pane_g3

0x90c5,	// (0x0003a1c3) toolbar_button_pane_g4

0x90cd,	// (0x0003a1cb) toolbar_button_pane_g5

0x90d5,	// (0x0003a1d3) toolbar_button_pane_g6

0x90dd,	// (0x0003a1db) toolbar_button_pane_g7

0x90e5,	// (0x0003a1e3) toolbar_button_pane_g8

0x90ed,	// (0x0003a1eb) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x000408c3) toolbar_button_pane_g

0x700d,	// (0x0003810b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x700d,	// (0x0003810b) list_single_2graphic_pane_g1_cp3

0x7019,	// (0x00038117) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7019,	// (0x00038117) list_single_2graphic_pane_g2_cp3

0x702a,	// (0x00038128) list_single_2graphic_pane_g3_cp3

0x7032,	// (0x00038130) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7032,	// (0x00038130) list_single_2graphic_pane_g4_cp3

0x703e,	// (0x0003813c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x703e,	// (0x0003813c) list_single_2graphic_pane_t1_cp3

0x7059,	// (0x00038157) list_single_midp_graphic_pane_g2_ParamLimits

0x7059,	// (0x00038157) list_single_midp_graphic_pane_g2

0x6e35,	// (0x00037f33) aid_zoom_text_primary

0x3db7,	// (0x00034eb5) aid_zoom_text_secondary

0x6c43,	// (0x00037d41) status_small_pane_g7_ParamLimits

0x6c43,	// (0x00037d41) status_small_pane_g7

0x6c66,	// (0x00037d64) status_small_pane_t1_ParamLimits

0x57b0,	// (0x000368ae) title_pane_g2

0x0003,

0xf54e,	// (0x0004064c) title_pane_g

0x5a05,	// (0x00036b03) aid_size_cell_colour_1_pane_ParamLimits

0x5a05,	// (0x00036b03) aid_size_cell_colour_1_pane

0x5a19,	// (0x00036b17) aid_size_cell_colour_2_pane_ParamLimits

0x5a19,	// (0x00036b17) aid_size_cell_colour_2_pane

0x5a2d,	// (0x00036b2b) aid_size_cell_colour_3_pane_ParamLimits

0x5a2d,	// (0x00036b2b) aid_size_cell_colour_3_pane

0x5a41,	// (0x00036b3f) aid_size_cell_colour_4_pane_ParamLimits

0x5a41,	// (0x00036b3f) aid_size_cell_colour_4_pane

0x61a1,	// (0x0003729f) title_pane_stacon_g1_ParamLimits

0x61a1,	// (0x0003729f) title_pane_stacon_g1

0x9723,	// (0x0003a821) popup_note_wait_window_g3_ParamLimits

0x9723,	// (0x0003a821) popup_note_wait_window_g3

0x979a,	// (0x0003a898) popup_note_wait_window_t5_ParamLimits

0x979a,	// (0x0003a898) popup_note_wait_window_t5

0xe4e9,	// (0x0003f5e7) main_feb_china_hwr_fs_writing_pane

0x6f37,	// (0x00038035) popup_feb_china_hwr_fs_window_ParamLimits

0x6f37,	// (0x00038035) popup_feb_china_hwr_fs_window

0x707b,	// (0x00038179) aid_size_cell_hwr_fs_ParamLimits

0x707b,	// (0x00038179) aid_size_cell_hwr_fs

0x9121,	// (0x0003a21f) bg_popup_sub_pane_cp3_ParamLimits

0x9121,	// (0x0003a21f) bg_popup_sub_pane_cp3

0x7090,	// (0x0003818e) grid_hwr_fs_pane_ParamLimits

0x7090,	// (0x0003818e) grid_hwr_fs_pane

0x70a8,	// (0x000381a6) linegrid_hwr_fs_pane_ParamLimits

0x70a8,	// (0x000381a6) linegrid_hwr_fs_pane

0x70b8,	// (0x000381b6) cell_hwr_fs_pane_ParamLimits

0x70b8,	// (0x000381b6) cell_hwr_fs_pane

0x912d,	// (0x0003a22b) linegrid_hwr_fs_pane_g1_ParamLimits

0x912d,	// (0x0003a22b) linegrid_hwr_fs_pane_g1

0x9139,	// (0x0003a237) linegrid_hwr_fs_pane_g2_ParamLimits

0x9139,	// (0x0003a237) linegrid_hwr_fs_pane_g2

0x914b,	// (0x0003a249) linegrid_hwr_fs_pane_g3_ParamLimits

0x914b,	// (0x0003a249) linegrid_hwr_fs_pane_g3

0x70dc,	// (0x000381da) linegrid_hwr_fs_pane_g4_ParamLimits

0x70dc,	// (0x000381da) linegrid_hwr_fs_pane_g4

0x70fa,	// (0x000381f8) linegrid_hwr_fs_pane_g5_ParamLimits

0x70fa,	// (0x000381f8) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x000408ee) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x000408ee) linegrid_hwr_fs_pane_g

0x9157,	// (0x0003a255) cell_hwr_fs_pane_g1_ParamLimits

0x9157,	// (0x0003a255) cell_hwr_fs_pane_g1

0x8f22,	// (0x0003a020) cell_hwr_fs_pane_g2_ParamLimits

0x8f22,	// (0x0003a020) cell_hwr_fs_pane_g2

0x916d,	// (0x0003a26b) cell_hwr_fs_pane_g3_ParamLimits

0x916d,	// (0x0003a26b) cell_hwr_fs_pane_g3

0x917a,	// (0x0003a278) cell_hwr_fs_pane_g4_ParamLimits

0x917a,	// (0x0003a278) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x000408f9) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x000408f9) cell_hwr_fs_pane_g

0x7110,	// (0x0003820e) cell_hwr_fs_pane_t1

0xe4e9,	// (0x0003f5e7) grid_highlight_pane_cp6

0xe4e9,	// (0x0003f5e7) main_idle_act2_pane

0x1f28,	// (0x00033026) aid_inside_area_popup_secondary

0x9dd3,	// (0x0003aed1) aid_inside_area_window_primary_ParamLimits

0x9dd3,	// (0x0003aed1) aid_inside_area_window_primary

0xa9c7,	// (0x0003bac5) ai2_news_ticker_pane

0xa9cf,	// (0x0003bacd) aid_size_cell_ai1_link_ParamLimits

0xa9cf,	// (0x0003bacd) aid_size_cell_ai1_link

0xa9e9,	// (0x0003bae7) popup_ai2_data_window_ParamLimits

0xa9e9,	// (0x0003bae7) popup_ai2_data_window

0xaa07,	// (0x0003bb05) popup_ai2_link_window_ParamLimits

0xaa07,	// (0x0003bb05) popup_ai2_link_window

0x9121,	// (0x0003a21f) bg_popup_sub_pane_cp4_ParamLimits

0x9121,	// (0x0003a21f) bg_popup_sub_pane_cp4

0xaa1d,	// (0x0003bb1b) grid_ai2_link_pane_ParamLimits

0xaa1d,	// (0x0003bb1b) grid_ai2_link_pane

0xaa34,	// (0x0003bb32) popup_ai2_link_window_g1_ParamLimits

0xaa34,	// (0x0003bb32) popup_ai2_link_window_g1

0xaa40,	// (0x0003bb3e) popup_ai2_link_window_g2_ParamLimits

0xaa40,	// (0x0003bb3e) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00040acc) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00040acc) popup_ai2_link_window_g

0xaa51,	// (0x0003bb4f) ai2_mp_button_pane

0xaa59,	// (0x0003bb57) ai2_mp_volume_pane

0x9312,	// (0x0003a410) bg_popup_sub_pane_cp5_ParamLimits

0x9312,	// (0x0003a410) bg_popup_sub_pane_cp5

0xaa61,	// (0x0003bb5f) heading_ai2_gene_pane_ParamLimits

0xaa61,	// (0x0003bb5f) heading_ai2_gene_pane

0xaa6d,	// (0x0003bb6b) list_ai2_gene_pane_ParamLimits

0xaa6d,	// (0x0003bb6b) list_ai2_gene_pane

0xaab5,	// (0x0003bbb3) cell_ai2_link_pane_ParamLimits

0xaab5,	// (0x0003bbb3) cell_ai2_link_pane

0xaacb,	// (0x0003bbc9) cell_ai2_link_pane_g1

0xe4e9,	// (0x0003f5e7) grid_highlight_pane_cp7

0x74f2,	// (0x000385f0) ai2_mp_volume_pane_g1

0xab9e,	// (0x0003bc9c) ai2_mp_volume_pane_g2

0xab13,	// (0x0003bc11) list_ai2_gene_pane_t1

0xaba6,	// (0x0003bca4) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x00040ae5) ai2_mp_volume_pane_g

0x74fa,	// (0x000385f8) volume_small_pane_cp3

0xabae,	// (0x0003bcac) aid_size_cell_ai2_button

0xabb6,	// (0x0003bcb4) grid_ai2_button_pane

0xabbf,	// (0x0003bcbd) cell_ai2_button_pane_ParamLimits

0xabbf,	// (0x0003bcbd) cell_ai2_button_pane

0xe4df,	// (0x0003f5dd) cell_ai2_button_pane_g1

0xe4e9,	// (0x0003f5e7) grid_highlight_pane_cp8

0xab5e,	// (0x0003bc5c) ai2_gene_pane_t1_ParamLimits

0xab5e,	// (0x0003bc5c) ai2_gene_pane_t1

0x6e23,	// (0x00037f21) aid_height_parent_landscape

0xa465,	// (0x0003b563) aid_height_set_list

0xa476,	// (0x0003b574) aid_size_parent

0xa7e8,	// (0x0003b8e6) aid_size_cell_graphic_pane_ParamLimits

0xaa7d,	// (0x0003bb7b) popup_ai2_data_window_g1_ParamLimits

0xaa7d,	// (0x0003bb7b) popup_ai2_data_window_g1

0xaa89,	// (0x0003bb87) ai2_news_ticker_pane_g1

0xaa91,	// (0x0003bb8f) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00040ad1) ai2_news_ticker_pane_g

0xaa99,	// (0x0003bb97) ai2_news_ticker_pane_t1

0xaaa7,	// (0x0003bba5) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x00040ad6) ai2_news_ticker_pane_t

0xaad4,	// (0x0003bbd2) heading_ai2_gene_pane_g1

0xaadc,	// (0x0003bbda) heading_ai2_gene_pane_t1_ParamLimits

0xaadc,	// (0x0003bbda) heading_ai2_gene_pane_t1

0xaaf1,	// (0x0003bbef) list_highlight_pane_cp6

0xaaf9,	// (0x0003bbf7) ai2_gene_pane_ParamLimits

0xaaf9,	// (0x0003bbf7) ai2_gene_pane

0xab21,	// (0x0003bc1f) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00040adb) list_ai2_gene_pane_t

0xab2f,	// (0x0003bc2d) list_highlight_pane_cp8_ParamLimits

0xab2f,	// (0x0003bc2d) list_highlight_pane_cp8

0xab40,	// (0x0003bc3e) ai2_gene_pane_g1_ParamLimits

0xab40,	// (0x0003bc3e) ai2_gene_pane_g1

0xab52,	// (0x0003bc50) ai2_gene_pane_g2_ParamLimits

0xab52,	// (0x0003bc50) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00040ae0) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00040ae0) ai2_gene_pane_g

0xf53d,	// (0x0004063b) scroll_pane_cp12

0x6dda,	// (0x00037ed8) control_pane_t3_ParamLimits

0x6dda,	// (0x00037ed8) control_pane_t3

0x6c57,	// (0x00037d55) status_small_pane_g8_ParamLimits

0x6c57,	// (0x00037d55) status_small_pane_g8

0x86fa,	// (0x000397f8) popup_find_window_ParamLimits

0x8925,	// (0x00039a23) popup_note_image_window_ParamLimits

0x3c59,	// (0x00034d57) list_double2_graphic_pane_vc_g1_ParamLimits

0x3c59,	// (0x00034d57) list_double2_graphic_pane_vc_g1

0x3e1b,	// (0x00034f19) list_double2_graphic_pane_vc_g2_ParamLimits

0x3e1b,	// (0x00034f19) list_double2_graphic_pane_vc_g2

0x3e27,	// (0x00034f25) list_double2_graphic_pane_vc_g3_ParamLimits

0x3e27,	// (0x00034f25) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x000408b7) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x000408b7) list_double2_graphic_pane_vc_g

0x3e33,	// (0x00034f31) list_double2_graphic_pane_vc_t1_ParamLimits

0x3e33,	// (0x00034f31) list_double2_graphic_pane_vc_t1

0x3c2f,	// (0x00034d2d) list_single_heading_pane_vc_g1_ParamLimits

0x3c2f,	// (0x00034d2d) list_single_heading_pane_vc_g1

0x3c3b,	// (0x00034d39) list_single_heading_pane_vc_g2_ParamLimits

0x3c3b,	// (0x00034d39) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x000408d8) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x000408d8) list_single_heading_pane_vc_g

0x3e49,	// (0x00034f47) list_single_heading_pane_vc_t1_ParamLimits

0x3e49,	// (0x00034f47) list_single_heading_pane_vc_t1

0x3e61,	// (0x00034f5f) list_single_heading_pane_vc_t2_ParamLimits

0x3e61,	// (0x00034f5f) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x000408dd) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x000408dd) list_single_heading_pane_vc_t

0x3e73,	// (0x00034f71) list_setting_number_pane_vc_g1_ParamLimits

0x3e73,	// (0x00034f71) list_setting_number_pane_vc_g1

0x3e7f,	// (0x00034f7d) list_setting_number_pane_vc_g2_ParamLimits

0x3e7f,	// (0x00034f7d) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x000408e2) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x000408e2) list_setting_number_pane_vc_g

0x3e8b,	// (0x00034f89) list_setting_number_pane_vc_t1_ParamLimits

0x3e8b,	// (0x00034f89) list_setting_number_pane_vc_t1

0x3e9f,	// (0x00034f9d) list_setting_number_pane_vc_t2_ParamLimits

0x3e9f,	// (0x00034f9d) list_setting_number_pane_vc_t2

0x3ebb,	// (0x00034fb9) list_setting_number_pane_vc_t3_ParamLimits

0x3ebb,	// (0x00034fb9) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x000408e7) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x000408e7) list_setting_number_pane_vc_t

0x3ee9,	// (0x00034fe7) set_value_pane_vc_ParamLimits

0x3ee9,	// (0x00034fe7) set_value_pane_vc

0x3f20,	// (0x0003501e) list_double2_graphic_pane_vc_ParamLimits

0x3f20,	// (0x0003501e) list_double2_graphic_pane_vc

0xa64e,	// (0x0003b74c) list_double2_large_graphic_pane_vc_ParamLimits

0xa64e,	// (0x0003b74c) list_double2_large_graphic_pane_vc

0x3f20,	// (0x0003501e) list_double2_pane_vc_ParamLimits

0x3f20,	// (0x0003501e) list_double2_pane_vc

0x3f20,	// (0x0003501e) list_double_graphic_heading_pane_vc_ParamLimits

0x3f20,	// (0x0003501e) list_double_graphic_heading_pane_vc

0x3f20,	// (0x0003501e) list_double_graphic_pane_vc_ParamLimits

0x3f20,	// (0x0003501e) list_double_graphic_pane_vc

0x3f20,	// (0x0003501e) list_double_heading_pane_vc_ParamLimits

0x3f20,	// (0x0003501e) list_double_heading_pane_vc

0xa662,	// (0x0003b760) list_double_large_graphic_pane_vc_ParamLimits

0xa662,	// (0x0003b760) list_double_large_graphic_pane_vc

0x3f20,	// (0x0003501e) list_double_number_pane_vc_ParamLimits

0x3f20,	// (0x0003501e) list_double_number_pane_vc

0x3f20,	// (0x0003501e) list_double_pane_vc_ParamLimits

0x3f20,	// (0x0003501e) list_double_pane_vc

0x3f20,	// (0x0003501e) list_double_time_pane_vc_ParamLimits

0x3f20,	// (0x0003501e) list_double_time_pane_vc

0x3f20,	// (0x0003501e) list_setting_number_pane_vc_ParamLimits

0x3f20,	// (0x0003501e) list_setting_number_pane_vc

0x3f20,	// (0x0003501e) list_setting_pane_vc_ParamLimits

0x3f20,	// (0x0003501e) list_setting_pane_vc

0x3f20,	// (0x0003501e) list_single_graphic_heading_pane_vc_ParamLimits

0x3f20,	// (0x0003501e) list_single_graphic_heading_pane_vc

0x3f20,	// (0x0003501e) list_single_heading_pane_vc_ParamLimits

0x3f20,	// (0x0003501e) list_single_heading_pane_vc

0xa684,	// (0x0003b782) list_single_number_heading_pane_vc_ParamLimits

0xa684,	// (0x0003b782) list_single_number_heading_pane_vc

0x3c59,	// (0x00034d57) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3c59,	// (0x00034d57) list_double_graphic_heading_pane_vc_g1

0x3c2f,	// (0x00034d2d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3c2f,	// (0x00034d2d) list_double_graphic_heading_pane_vc_g2

0x3c3b,	// (0x00034d39) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3c3b,	// (0x00034d39) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x00040aec) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00040aec) list_double_graphic_heading_pane_vc_g

0x3f35,	// (0x00035033) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3f35,	// (0x00035033) list_double_graphic_heading_pane_vc_t1

0x3f4b,	// (0x00035049) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3f4b,	// (0x00035049) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x00040af3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x00040af3) list_double_graphic_heading_pane_vc_t

0x3e73,	// (0x00034f71) list_setting_pane_vc_g1_ParamLimits

0x3e73,	// (0x00034f71) list_setting_pane_vc_g1

0x3e7f,	// (0x00034f7d) list_setting_pane_vc_g2_ParamLimits

0x3e7f,	// (0x00034f7d) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x000408e2) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x000408e2) list_setting_pane_vc_g

0x3f69,	// (0x00035067) list_setting_pane_vc_t1_ParamLimits

0x3f69,	// (0x00035067) list_setting_pane_vc_t1

0x3f85,	// (0x00035083) list_setting_pane_vc_t2_ParamLimits

0x3f85,	// (0x00035083) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x00040b21) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x00040b21) list_setting_pane_vc_t

0x3ee9,	// (0x00034fe7) set_value_pane_cp_vc_ParamLimits

0x3ee9,	// (0x00034fe7) set_value_pane_cp_vc

0x3c2f,	// (0x00034d2d) list_single_number_heading_pane_vc_g1_ParamLimits

0x3c2f,	// (0x00034d2d) list_single_number_heading_pane_vc_g1

0x3c3b,	// (0x00034d39) list_single_number_heading_pane_vc_g2_ParamLimits

0x3c3b,	// (0x00034d39) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x000408d8) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x000408d8) list_single_number_heading_pane_vc_g

0x3e49,	// (0x00034f47) list_single_number_heading_pane_vc_t1_ParamLimits

0x3e49,	// (0x00034f47) list_single_number_heading_pane_vc_t1

0x3fa1,	// (0x0003509f) list_single_number_heading_pane_vc_t2_ParamLimits

0x3fa1,	// (0x0003509f) list_single_number_heading_pane_vc_t2

0x3c47,	// (0x00034d45) list_single_number_heading_pane_vc_t3_ParamLimits

0x3c47,	// (0x00034d45) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x00040b26) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x00040b26) list_single_number_heading_pane_vc_t

0x3c59,	// (0x00034d57) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3c59,	// (0x00034d57) list_single_graphic_heading_pane_vc_g1

0x3c2f,	// (0x00034d2d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3c2f,	// (0x00034d2d) list_single_graphic_heading_pane_vc_g4

0x3c3b,	// (0x00034d39) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3c3b,	// (0x00034d39) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x00040aec) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00040aec) list_single_graphic_heading_pane_vc_g

0x3e49,	// (0x00034f47) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3e49,	// (0x00034f47) list_single_graphic_heading_pane_vc_t1

0x3fb3,	// (0x000350b1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3fb3,	// (0x000350b1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x00040b2d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x00040b2d) list_single_graphic_heading_pane_vc_t

0x3c2f,	// (0x00034d2d) list_double2_pane_vc_g1_ParamLimits

0x3c2f,	// (0x00034d2d) list_double2_pane_vc_g1

0x3c3b,	// (0x00034d39) list_double2_pane_vc_g2_ParamLimits

0x3c3b,	// (0x00034d39) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x000408d8) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x000408d8) list_double2_pane_vc_g

0x3f0a,	// (0x00035008) list_double2_pane_vc_t1_ParamLimits

0x3f0a,	// (0x00035008) list_double2_pane_vc_t1

0x3c65,	// (0x00034d63) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3c65,	// (0x00034d63) list_double2_large_graphic_pane_vc_g1

0x3c71,	// (0x00034d6f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3c71,	// (0x00034d6f) list_double2_large_graphic_pane_vc_g2

0x3c7d,	// (0x00034d7b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3c7d,	// (0x00034d7b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x00040b32) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x00040b32) list_double2_large_graphic_pane_vc_g

0x3c89,	// (0x00034d87) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3c89,	// (0x00034d87) list_double2_large_graphic_pane_vc_t1

0x3fc5,	// (0x000350c3) list_double_time_pane_vc_g1_ParamLimits

0x3fc5,	// (0x000350c3) list_double_time_pane_vc_g1

0x3fd1,	// (0x000350cf) list_double_time_pane_vc_g2_ParamLimits

0x3fd1,	// (0x000350cf) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x00040b39) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x00040b39) list_double_time_pane_vc_g

0x3fdd,	// (0x000350db) list_double_time_pane_vc_t1_ParamLimits

0x3fdd,	// (0x000350db) list_double_time_pane_vc_t1

0x4007,	// (0x00035105) list_double_time_pane_vc_t2_ParamLimits

0x4007,	// (0x00035105) list_double_time_pane_vc_t2

0x4050,	// (0x0003514e) list_double_time_pane_vc_t3_ParamLimits

0x4050,	// (0x0003514e) list_double_time_pane_vc_t3

0x4062,	// (0x00035160) list_double_time_pane_vc_t4_ParamLimits

0x4062,	// (0x00035160) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x00040b3e) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x00040b3e) list_double_time_pane_vc_t

0x3c2f,	// (0x00034d2d) list_double_pane_vc_g1_ParamLimits

0x3c2f,	// (0x00034d2d) list_double_pane_vc_g1

0x3c3b,	// (0x00034d39) list_double_pane_vc_g2_ParamLimits

0x3c3b,	// (0x00034d39) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x000408d8) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x000408d8) list_double_pane_vc_g

0x4087,	// (0x00035185) list_double_pane_vc_t1_ParamLimits

0x4087,	// (0x00035185) list_double_pane_vc_t1

0x409b,	// (0x00035199) list_double_pane_vc_t2_ParamLimits

0x409b,	// (0x00035199) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x00040b47) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x00040b47) list_double_pane_vc_t

0x3c2f,	// (0x00034d2d) list_double_number_pane_vc_g1_ParamLimits

0x3c2f,	// (0x00034d2d) list_double_number_pane_vc_g1

0x3c3b,	// (0x00034d39) list_double_number_pane_vc_g2_ParamLimits

0x3c3b,	// (0x00034d39) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x000408d8) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x000408d8) list_double_number_pane_vc_g

0x40b1,	// (0x000351af) list_double_number_pane_vc_t1_ParamLimits

0x40b1,	// (0x000351af) list_double_number_pane_vc_t1

0x40c5,	// (0x000351c3) list_double_number_pane_vc_t2_ParamLimits

0x40c5,	// (0x000351c3) list_double_number_pane_vc_t2

0x40d9,	// (0x000351d7) list_double_number_pane_vc_t3_ParamLimits

0x40d9,	// (0x000351d7) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x00040b4c) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x00040b4c) list_double_number_pane_vc_t

0x40ef,	// (0x000351ed) list_double_large_graphic_pane_vc_g1_ParamLimits

0x40ef,	// (0x000351ed) list_double_large_graphic_pane_vc_g1

0x4117,	// (0x00035215) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4117,	// (0x00035215) list_double_large_graphic_pane_vc_g2

0x412b,	// (0x00035229) list_double_large_graphic_pane_vc_g3_ParamLimits

0x412b,	// (0x00035229) list_double_large_graphic_pane_vc_g3

0x413a,	// (0x00035238) list_double_large_graphic_pane_vc_g4_ParamLimits

0x413a,	// (0x00035238) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x00040b53) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x00040b53) list_double_large_graphic_pane_vc_g

0x414a,	// (0x00035248) list_double_large_graphic_pane_vc_t1_ParamLimits

0x414a,	// (0x00035248) list_double_large_graphic_pane_vc_t1

0x416c,	// (0x0003526a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x416c,	// (0x0003526a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x00040b5c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x00040b5c) list_double_large_graphic_pane_vc_t

0x3c2f,	// (0x00034d2d) list_double_heading_pane_vc_g1_ParamLimits

0x3c2f,	// (0x00034d2d) list_double_heading_pane_vc_g1

0x3c3b,	// (0x00034d39) list_double_heading_pane_vc_g2_ParamLimits

0x3c3b,	// (0x00034d39) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x000408d8) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x000408d8) list_double_heading_pane_vc_g

0x418c,	// (0x0003528a) list_double_heading_pane_vc_t1_ParamLimits

0x418c,	// (0x0003528a) list_double_heading_pane_vc_t1

0x3e49,	// (0x00034f47) list_double_heading_pane_vc_t2_ParamLimits

0x3e49,	// (0x00034f47) list_double_heading_pane_vc_t2

0x0001,

0xfa63,	// (0x00040b61) list_double_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x00040b61) list_double_heading_pane_vc_t

0x419e,	// (0x0003529c) list_double_graphic_pane_vc_g1_ParamLimits

0x419e,	// (0x0003529c) list_double_graphic_pane_vc_g1

0x41b1,	// (0x000352af) list_double_graphic_pane_vc_g2_ParamLimits

0x41b1,	// (0x000352af) list_double_graphic_pane_vc_g2

0x3c2f,	// (0x00034d2d) list_double_graphic_pane_vc_g3_ParamLimits

0x3c2f,	// (0x00034d2d) list_double_graphic_pane_vc_g3

0x0003,

0xfa68,	// (0x00040b66) list_double_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00040b66) list_double_graphic_pane_vc_g

0x41ce,	// (0x000352cc) list_double_graphic_pane_vc_t1_ParamLimits

0x41ce,	// (0x000352cc) list_double_graphic_pane_vc_t1

0x41f8,	// (0x000352f6) list_double_graphic_pane_vc_t2_ParamLimits

0x41f8,	// (0x000352f6) list_double_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x00040b6f) list_double_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x00040b6f) list_double_graphic_pane_vc_t

0x53b2,	// (0x000364b0) aid_size_cell_fastswap

0x53ba,	// (0x000364b8) aid_size_cell_touch_ParamLimits

0x53ba,	// (0x000364b8) aid_size_cell_touch

0x5625,	// (0x00036723) popup_fast_swap_wide_window_ParamLimits

0x5625,	// (0x00036723) popup_fast_swap_wide_window

0x5743,	// (0x00036841) touch_pane_ParamLimits

0x5743,	// (0x00036841) touch_pane

0x1e01,	// (0x00032eff) button_value_adjust_pane_cp2

0x3cc2,	// (0x00034dc0) button_value_adjust_pane_cp4

0x3cca,	// (0x00034dc8) form_field_data_pane_cp2

0x5f91,	// (0x0003708f) form_field_data_wide_pane_cp2

0x2167,	// (0x00033265) bg_scroll_pane_ParamLimits

0x6389,	// (0x00037487) scroll_handle_pane_ParamLimits

0x639d,	// (0x0003749b) scroll_sc2_down_pane_ParamLimits

0x639d,	// (0x0003749b) scroll_sc2_down_pane

0x2198,	// (0x00033296) scroll_sc2_up_pane_ParamLimits

0x2198,	// (0x00033296) scroll_sc2_up_pane

0xb2d8,	// (0x0003c3d6) grid_wheel_folder_pane_g1_ParamLimits

0xb2d8,	// (0x0003c3d6) grid_wheel_folder_pane_g1

0x672f,	// (0x0003782d) clock_nsta_pane_cp2_ParamLimits

0x672f,	// (0x0003782d) clock_nsta_pane_cp2

0x6147,	// (0x00037245) listscroll_midp_pane_ParamLimits

0x693e,	// (0x00037a3c) midp_canvas_pane

0x6e1b,	// (0x00037f19) nsta_clock_indic_pane

0x6e71,	// (0x00037f6f) listscroll_form_pane_vc

0x6e95,	// (0x00037f93) listscroll_set_pane_vc_ParamLimits

0x6e95,	// (0x00037f93) listscroll_set_pane_vc

0x8c76,	// (0x00039d74) clock_nsta_pane

0x8cf3,	// (0x00039df1) indicator_nsta_pane

0x8feb,	// (0x0003a0e9) bg_popup_sub_pane_cp2_ParamLimits

0x8fff,	// (0x0003a0fd) find_pane_cp2_ParamLimits

0x8fff,	// (0x0003a0fd) find_pane_cp2

0x9015,	// (0x0003a113) grid_toobar_pane_ParamLimits

0x90f5,	// (0x0003a1f3) list_form_gen_pane_vc_ParamLimits

0x90f5,	// (0x0003a1f3) list_form_gen_pane_vc

0x910b,	// (0x0003a209) scroll_pane_cp8_vc_ParamLimits

0x910b,	// (0x0003a209) scroll_pane_cp8_vc

0x9187,	// (0x0003a285) data_form_wide_pane_vc_ParamLimits

0x9187,	// (0x0003a285) data_form_wide_pane_vc

0x9193,	// (0x0003a291) form_field_data_wide_pane_vc_g1

0x919b,	// (0x0003a299) form_field_data_wide_pane_vc_t1_ParamLimits

0x919b,	// (0x0003a299) form_field_data_wide_pane_vc_t1

0x1e15,	// (0x00032f13) input_focus_pane_cp6_vc_ParamLimits

0x1e15,	// (0x00032f13) input_focus_pane_cp6_vc

0x949d,	// (0x0003a59b) list_midp_pane_ParamLimits

0x94a9,	// (0x0003a5a7) scroll_pane_cp16_ParamLimits

0x94a9,	// (0x0003a5a7) scroll_pane_cp16

0x94f7,	// (0x0003a5f5) button_value_adjust_pane_ParamLimits

0x94f7,	// (0x0003a5f5) button_value_adjust_pane

0xa488,	// (0x0003b586) button_value_adjust_pane_cp6_ParamLimits

0xa488,	// (0x0003b586) button_value_adjust_pane_cp6

0xa5d6,	// (0x0003b6d4) settings_code_pane_cp_ParamLimits

0xa5d6,	// (0x0003b6d4) settings_code_pane_cp

0xe4df,	// (0x0003f5dd) cell_touch_pane_g1

0xe4df,	// (0x0003f5dd) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x000407fc) cell_touch_pane_g

0xabd1,	// (0x0003bccf) cell_touch_pane_cp_ParamLimits

0xabd1,	// (0x0003bccf) cell_touch_pane_cp

0xabe1,	// (0x0003bcdf) cell_touch_pane_ParamLimits

0xabe1,	// (0x0003bcdf) cell_touch_pane

0xe4df,	// (0x0003f5dd) scroll_sc2_down_pane_g1

0xe4df,	// (0x0003f5dd) scroll_sc2_up_pane_g1

0xe4e9,	// (0x0003f5e7) bg_set_opt_pane_cp4_vc

0xabf2,	// (0x0003bcf0) list_set_graphic_pane_vc_g1_ParamLimits

0xabf2,	// (0x0003bcf0) list_set_graphic_pane_vc_g1

0x269b,	// (0x00033799) list_set_graphic_pane_vc_g2_ParamLimits

0x269b,	// (0x00033799) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x00040af8) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x00040af8) list_set_graphic_pane_vc_g

0xabfe,	// (0x0003bcfc) text_primary_small_cp13_vc_ParamLimits

0xabfe,	// (0x0003bcfc) text_primary_small_cp13_vc

0xac16,	// (0x0003bd14) list_set_graphic_pane_vc_ParamLimits

0xac16,	// (0x0003bd14) list_set_graphic_pane_vc

0xe4e9,	// (0x0003f5e7) input_focus_pane_cp2_vc

0xe4df,	// (0x0003f5dd) setting_code_pane_vc_g1

0xef9b,	// (0x00040099) setting_code_pane_vc_t1

0xac2b,	// (0x0003bd29) set_text_pane_vc_t1_ParamLimits

0xac2b,	// (0x0003bd29) set_text_pane_vc_t1

0xe4e9,	// (0x0003f5e7) input_focus_pane_cp1_vc

0xac49,	// (0x0003bd47) list_set_text_pane_vc

0xe4df,	// (0x0003f5dd) setting_text_pane_vc_g1

0xe4e9,	// (0x0003f5e7) bg_set_opt_pane_cp2_vc

0xef92,	// (0x00040090) setting_slider_graphic_pane_vc_g1

0xac53,	// (0x0003bd51) setting_slider_graphic_pane_vc_t1

0xac65,	// (0x0003bd63) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x00040afd) setting_slider_graphic_pane_vc_t

0xac77,	// (0x0003bd75) slider_set_pane_cp_vc

0xac81,	// (0x0003bd7f) slider_set_pane_vc_g1

0xac8a,	// (0x0003bd88) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x00040b02) slider_set_pane_vc_g

0x1e70,	// (0x00032f6e) set_opt_bg_pane_g1_copy1

0x1e78,	// (0x00032f76) set_opt_bg_pane_g2_copy1

0xacb6,	// (0x0003bdb4) set_opt_bg_pane_g3_copy1

0x1e88,	// (0x00032f86) set_opt_bg_pane_g4_copy1

0x1e90,	// (0x00032f8e) set_opt_bg_pane_g5_copy1

0x1e98,	// (0x00032f96) set_opt_bg_pane_g6_copy1

0xacc0,	// (0x0003bdbe) set_opt_bg_pane_g7_copy1

0xacca,	// (0x0003bdc8) set_opt_bg_pane_g8_copy1

0xacd4,	// (0x0003bdd2) set_opt_bg_pane_g9_copy1

0xe4e9,	// (0x0003f5e7) bg_set_opt_pane_cp_vc

0xacde,	// (0x0003bddc) setting_slider_pane_vc_t1

0xaced,	// (0x0003bdeb) setting_slider_pane_vc_t2

0xacff,	// (0x0003bdfd) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x00040b11) setting_slider_pane_vc_t

0xad11,	// (0x0003be0f) slider_set_pane_vc

0x7141,	// (0x0003823f) volume_set_pane_vc_g1

0x714a,	// (0x00038248) volume_set_pane_vc_g2

0x7153,	// (0x00038251) volume_set_pane_vc_g3

0x715c,	// (0x0003825a) volume_set_pane_vc_g4

0x7165,	// (0x00038263) volume_set_pane_vc_g5

0x716e,	// (0x0003826c) volume_set_pane_vc_g6

0x7177,	// (0x00038275) volume_set_pane_vc_g7

0x7180,	// (0x0003827e) volume_set_pane_vc_g8

0x7189,	// (0x00038287) volume_set_pane_vc_g9

0x7192,	// (0x00038290) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x000409af) volume_set_pane_vc_g

0xad1b,	// (0x0003be19) volume_set_pane_vc

0xad25,	// (0x0003be23) button_value_adjust_pane_cp1_vc

0xad2f,	// (0x0003be2d) list_highlight_pane_cp2_vc

0xad38,	// (0x0003be36) list_set_pane_vc_ParamLimits

0xad38,	// (0x0003be36) list_set_pane_vc

0xada8,	// (0x0003bea6) main_pane_set_vc_t1_ParamLimits

0xada8,	// (0x0003bea6) main_pane_set_vc_t1

0xadbd,	// (0x0003bebb) main_pane_set_vc_t2_ParamLimits

0xadbd,	// (0x0003bebb) main_pane_set_vc_t2

0xadcf,	// (0x0003becd) main_pane_set_vc_t3_ParamLimits

0xadcf,	// (0x0003becd) main_pane_set_vc_t3

0xade3,	// (0x0003bee1) main_pane_set_vc_t4_ParamLimits

0xade3,	// (0x0003bee1) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x00040b18) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x00040b18) main_pane_set_vc_t

0xadf7,	// (0x0003bef5) setting_code_pane_vc_ParamLimits

0xadf7,	// (0x0003bef5) setting_code_pane_vc

0xae08,	// (0x0003bf06) setting_slider_graphic_pane_vc

0xae08,	// (0x0003bf06) setting_slider_pane_vc

0xae08,	// (0x0003bf06) setting_text_pane_vc

0xae08,	// (0x0003bf06) setting_volume_pane_vc

0xae12,	// (0x0003bf10) scroll_pane_cp121_vc

0x1def,	// (0x00032eed) set_content_pane_vc

0xae1a,	// (0x0003bf18) button_value_adjust_pane_g1

0xae23,	// (0x0003bf21) button_value_adjust_pane_g2

0x0001,

0xfa76,	// (0x00040b74) button_value_adjust_pane_g

0xae2c,	// (0x0003bf2a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xae2c,	// (0x0003bf2a) form_field_slider_wide_pane_vc_t1

0xae3e,	// (0x0003bf3c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xae3e,	// (0x0003bf3c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7b,	// (0x00040b79) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x00040b79) form_field_slider_wide_pane_vc_t

0xf0b7,	// (0x000401b5) input_focus_pane_cp10_vc_ParamLimits

0xf0b7,	// (0x000401b5) input_focus_pane_cp10_vc

0xae6a,	// (0x0003bf68) slider_cont_pane_cp1_vc_ParamLimits

0xae6a,	// (0x0003bf68) slider_cont_pane_cp1_vc

0xae7c,	// (0x0003bf7a) slider_form_pane_g1_cp2

0xac8a,	// (0x0003bd88) slider_form_pane_g2_cp2

0xaea9,	// (0x0003bfa7) form_field_slider_pane_vc_t3

0xaeb7,	// (0x0003bfb5) form_field_slider_pane_vc_t4

0xaec5,	// (0x0003bfc3) slider_form_pane_vc_ParamLimits

0xaec5,	// (0x0003bfc3) slider_form_pane_vc

0xaed2,	// (0x0003bfd0) form_field_slider_pane_vc_t1_ParamLimits

0xaed2,	// (0x0003bfd0) form_field_slider_pane_vc_t1

0xae3e,	// (0x0003bf3c) form_field_slider_pane_vc_t2_ParamLimits

0xae3e,	// (0x0003bf3c) form_field_slider_pane_vc_t2

0x0001,

0xfa8d,	// (0x00040b8b) form_field_slider_pane_vc_t_ParamLimits

0xfa8d,	// (0x00040b8b) form_field_slider_pane_vc_t

0xf0b7,	// (0x000401b5) input_focus_pane_cp9_vc_ParamLimits

0xf0b7,	// (0x000401b5) input_focus_pane_cp9_vc

0xaee8,	// (0x0003bfe6) slider_cont_pane_vc_ParamLimits

0xaee8,	// (0x0003bfe6) slider_cont_pane_vc

0xaefc,	// (0x0003bffa) list_form_graphic_pane_cp_vc_ParamLimits

0xaefc,	// (0x0003bffa) list_form_graphic_pane_cp_vc

0x9193,	// (0x0003a291) form_field_popup_wide_pane_vc_g1

0xaf11,	// (0x0003c00f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaf11,	// (0x0003c00f) form_field_popup_wide_pane_vc_t1

0x1e15,	// (0x00032f13) input_focus_pane_cp8_vc_ParamLimits

0x1e15,	// (0x00032f13) input_focus_pane_cp8_vc

0xaf56,	// (0x0003c054) list_form_wide_pane_vc_ParamLimits

0xaf56,	// (0x0003c054) list_form_wide_pane_vc

0xaf62,	// (0x0003c060) list_form_graphic_pane_vc_g1

0xaf6a,	// (0x0003c068) list_form_graphic_pane_vc_t1_ParamLimits

0xaf6a,	// (0x0003c068) list_form_graphic_pane_vc_t1

0xef84,	// (0x00040082) list_highlight_pane_cp5_vc_ParamLimits

0xef84,	// (0x00040082) list_highlight_pane_cp5_vc

0xaf86,	// (0x0003c084) list_form_graphic_pane_vc_ParamLimits

0xaf86,	// (0x0003c084) list_form_graphic_pane_vc

0x9193,	// (0x0003a291) form_field_popup_pane_vc_g1

0xaf9c,	// (0x0003c09a) form_field_popup_pane_vc_t1_ParamLimits

0xaf9c,	// (0x0003c09a) form_field_popup_pane_vc_t1

0x1e15,	// (0x00032f13) input_focus_pane_cp7_vc_ParamLimits

0x1e15,	// (0x00032f13) input_focus_pane_cp7_vc

0xafb3,	// (0x0003c0b1) list_form_pane_vc_ParamLimits

0xafb3,	// (0x0003c0b1) list_form_pane_vc

0xafbf,	// (0x0003c0bd) data_form_pane_vc_t1_ParamLimits

0xafbf,	// (0x0003c0bd) data_form_pane_vc_t1

0x1e70,	// (0x00032f6e) input_focus_pane_vc_g1

0x1e78,	// (0x00032f76) input_focus_pane_vc_g2

0x1e80,	// (0x00032f7e) input_focus_pane_vc_g3

0x1e88,	// (0x00032f86) input_focus_pane_vc_g4

0x1e90,	// (0x00032f8e) input_focus_pane_vc_g5

0x1e98,	// (0x00032f96) input_focus_pane_vc_g6

0x1ea0,	// (0x00032f9e) input_focus_pane_vc_g7

0x1ea8,	// (0x00032fa6) input_focus_pane_vc_g8

0x1eb0,	// (0x00032fae) input_focus_pane_vc_g9

0xe4df,	// (0x0003f5dd) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00040785) input_focus_pane_vc_g

0x9187,	// (0x0003a285) data_form_pane_vc_ParamLimits

0x9187,	// (0x0003a285) data_form_pane_vc

0x9193,	// (0x0003a291) form_field_data_pane_vc_g1

0xafdc,	// (0x0003c0da) form_field_data_pane_vc_t1_ParamLimits

0xafdc,	// (0x0003c0da) form_field_data_pane_vc_t1

0x1e15,	// (0x00032f13) input_focus_pane_vc_ParamLimits

0x1e15,	// (0x00032f13) input_focus_pane_vc

0xaff6,	// (0x0003c0f4) button_value_adjust_pane_cp3_vc

0xaffe,	// (0x0003c0fc) button_value_adjust_pane_cp5_vc

0xb006,	// (0x0003c104) form_field_data_pane_vc_ParamLimits

0xb006,	// (0x0003c104) form_field_data_pane_vc

0xb021,	// (0x0003c11f) form_field_data_pane_vc_cp2

0xb029,	// (0x0003c127) form_field_data_wide_pane_vc_ParamLimits

0xb029,	// (0x0003c127) form_field_data_wide_pane_vc

0xb043,	// (0x0003c141) form_field_data_wide_pane_vc_cp2

0xb04b,	// (0x0003c149) form_field_popup_pane_vc_ParamLimits

0xb04b,	// (0x0003c149) form_field_popup_pane_vc

0xb066,	// (0x0003c164) form_field_popup_wide_pane_vc_ParamLimits

0xb066,	// (0x0003c164) form_field_popup_wide_pane_vc

0xb080,	// (0x0003c17e) form_field_slider_pane_vc_ParamLimits

0xb080,	// (0x0003c17e) form_field_slider_pane_vc

0xb093,	// (0x0003c191) form_field_slider_wide_pane_vc_ParamLimits

0xb093,	// (0x0003c191) form_field_slider_wide_pane_vc

0xb0a6,	// (0x0003c1a4) grid_touch_1_pane_ParamLimits

0xb0a6,	// (0x0003c1a4) grid_touch_1_pane

0xb0b2,	// (0x0003c1b0) grid_touch_2_pane_ParamLimits

0xb0b2,	// (0x0003c1b0) grid_touch_2_pane

0x6cea,	// (0x00037de8) touch_pane_g1_ParamLimits

0x6cea,	// (0x00037de8) touch_pane_g1

0xb0cc,	// (0x0003c1ca) cell_app_pane_cp_wide_ParamLimits

0xb0cc,	// (0x0003c1ca) cell_app_pane_cp_wide

0xb0dd,	// (0x0003c1db) grid_popup_fast_wide_pane_ParamLimits

0xb0dd,	// (0x0003c1db) grid_popup_fast_wide_pane

0xb0f1,	// (0x0003c1ef) scroll_pane_cp19_ParamLimits

0xb0f1,	// (0x0003c1ef) scroll_pane_cp19

0xe4e9,	// (0x0003f5e7) bg_popup_window_pane_cp20

0xb105,	// (0x0003c203) listscroll_popup_fast_wide_pane

0xef84,	// (0x00040082) grid_indicator_nsta_pane

0xb10d,	// (0x0003c20b) clock_nsta_pane_g1

0xb116,	// (0x0003c214) clock_nsta_pane_t1

0xb132,	// (0x0003c230) cell_indicator_nsta_pane_ParamLimits

0xb132,	// (0x0003c230) cell_indicator_nsta_pane

0xb164,	// (0x0003c262) cell_indicator_nsta_pane_g1

0xb172,	// (0x0003c270) cell_indicator_nsta_pane_g2

0x0001,

0xfa9e,	// (0x00040b9c) cell_indicator_nsta_pane_g

0xb188,	// (0x0003c286) clock_nsta_pane_cp

0xb190,	// (0x0003c28e) indicator_nsta_pane_cp

0xb199,	// (0x0003c297) nsta_clock_indic_pane_g1

0xefc0,	// (0x000400be) grid_indicator_pane

0x228a,	// (0x00033388) scroll_pane_cp29

0x667b,	// (0x00037779) indicator_nsta_pane_cp2_ParamLimits

0x667b,	// (0x00037779) indicator_nsta_pane_cp2

0xef84,	// (0x00040082) main_apps_wheel_pane

0x937a,	// (0x0003a478) form_midp_field_text_pane_ParamLimits

0x94c9,	// (0x0003a5c7) scroll_bar_cp050_ParamLimits

0xb202,	// (0x0003c300) cell_indicator_pane_ParamLimits

0xb202,	// (0x0003c300) cell_indicator_pane

0xb21a,	// (0x0003c318) cell_indicator_pane_g1

0xb224,	// (0x0003c322) grid_wheel_folder_pane_ParamLimits

0xb224,	// (0x0003c322) grid_wheel_folder_pane

0xb238,	// (0x0003c336) list_wheel_apps_pane_ParamLimits

0xb238,	// (0x0003c336) list_wheel_apps_pane

0xb24b,	// (0x0003c349) main_apps_wheel_pane_g1_ParamLimits

0xb24b,	// (0x0003c349) main_apps_wheel_pane_g1

0xb267,	// (0x0003c365) main_apps_wheel_pane_g2_ParamLimits

0xb267,	// (0x0003c365) main_apps_wheel_pane_g2

0x0001,

0xfaba,	// (0x00040bb8) main_apps_wheel_pane_g_ParamLimits

0xfaba,	// (0x00040bb8) main_apps_wheel_pane_g

0xb283,	// (0x0003c381) main_apps_wheel_pane_t1_ParamLimits

0xb283,	// (0x0003c381) main_apps_wheel_pane_t1

0xb2ac,	// (0x0003c3aa) list_wheel_apps_pane_g1

0xb2b4,	// (0x0003c3b2) list_wheel_apps_pane_g2

0xb2bc,	// (0x0003c3ba) list_wheel_apps_pane_g3

0xb2c4,	// (0x0003c3c2) list_wheel_apps_pane_g4

0xb2ce,	// (0x0003c3cc) list_wheel_apps_pane_g5

0x0004,

0xfabf,	// (0x00040bbd) list_wheel_apps_pane_g

0x260a,	// (0x00033708) navi_icon_text_pane

0x8ba3,	// (0x00039ca1) aid_fill_nsta

0xb2ef,	// (0x0003c3ed) navi_icon_text_pane_g1

0xb2fb,	// (0x0003c3f9) navi_icon_text_pane_t1

0x67c4,	// (0x000378c2) list_set_graphic_pane_t1_ParamLimits

0x67c4,	// (0x000378c2) list_set_graphic_pane_t1

0x9c1a,	// (0x0003ad18) popup_midp_note_alarm_window_t6_ParamLimits

0x9c1a,	// (0x0003ad18) popup_midp_note_alarm_window_t6

0x9c2c,	// (0x0003ad2a) popup_midp_note_alarm_window_t7_ParamLimits

0x9c2c,	// (0x0003ad2a) popup_midp_note_alarm_window_t7

0x9c3e,	// (0x0003ad3c) popup_midp_note_alarm_window_t8_ParamLimits

0x9c3e,	// (0x0003ad3c) popup_midp_note_alarm_window_t8

0x9c50,	// (0x0003ad4e) popup_midp_note_alarm_window_t9_ParamLimits

0x9c50,	// (0x0003ad4e) popup_midp_note_alarm_window_t9

0x9c62,	// (0x0003ad60) popup_midp_note_alarm_window_t10_ParamLimits

0x9c62,	// (0x0003ad60) popup_midp_note_alarm_window_t10

0x9c74,	// (0x0003ad72) popup_midp_note_alarm_window_t11_ParamLimits

0x9c74,	// (0x0003ad72) popup_midp_note_alarm_window_t11

0x9c86,	// (0x0003ad84) scroll_pane_cp17_ParamLimits

0x9c86,	// (0x0003ad84) scroll_pane_cp17

0x7141,	// (0x0003823f) volume_small_pane_cp_g1

0x7503,	// (0x00038601) volume_small_pane_cp_g2

0x750c,	// (0x0003860a) volume_small_pane_cp_g3

0x7515,	// (0x00038613) volume_small_pane_cp_g4

0x751e,	// (0x0003861c) volume_small_pane_cp_g5

0x7527,	// (0x00038625) volume_small_pane_cp_g6

0x7530,	// (0x0003862e) volume_small_pane_cp_g7

0x7539,	// (0x00038637) volume_small_pane_cp_g8

0x7542,	// (0x00038640) volume_small_pane_cp_g9

0x754b,	// (0x00038649) volume_small_pane_cp_g10

0x6a07,	// (0x00037b05) midp_ticker_pane_g1_ParamLimits

0x6a13,	// (0x00037b11) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00040851) midp_ticker_pane_g_ParamLimits

0x6a1f,	// (0x00037b1d) midp_ticker_pane_t1_ParamLimits

0x8bb9,	// (0x00039cb7) aid_fill_nsta_2

0x94b5,	// (0x0003a5b3) list_form2_midp_pane

0xa61d,	// (0x0003b71b) midp_editing_number_pane_ParamLimits

0xa62c,	// (0x0003b72a) midp_ticker_pane_ParamLimits

0xb30d,	// (0x0003c40b) form2_midp_field_pane

0xb331,	// (0x0003c42f) scroll_pane_cp51

0xb351,	// (0x0003c44f) form2_midp_button_pane_ParamLimits

0xb351,	// (0x0003c44f) form2_midp_button_pane

0xb363,	// (0x0003c461) form2_midp_content_pane_ParamLimits

0xb363,	// (0x0003c461) form2_midp_content_pane

0xb37d,	// (0x0003c47b) form2_midp_field_choice_group_pane

0xb385,	// (0x0003c483) form2_midp_field_pane_g1

0xb38d,	// (0x0003c48b) form2_midp_field_pane_g2

0xb395,	// (0x0003c493) form2_midp_field_pane_g3

0xb39d,	// (0x0003c49b) form2_midp_field_pane_g4

0x0003,

0xfae4,	// (0x00040be2) form2_midp_field_pane_g

0xb3a5,	// (0x0003c4a3) form2_midp_gauge_slider_pane

0xb3ad,	// (0x0003c4ab) form2_midp_gauge_wait_pane

0xb3b5,	// (0x0003c4b3) form2_midp_image_pane_ParamLimits

0xb3b5,	// (0x0003c4b3) form2_midp_image_pane

0xb3d0,	// (0x0003c4ce) form2_midp_label_pane_ParamLimits

0xb3d0,	// (0x0003c4ce) form2_midp_label_pane

0xb3ef,	// (0x0003c4ed) form2_midp_label_pane_cp_ParamLimits

0xb3ef,	// (0x0003c4ed) form2_midp_label_pane_cp

0xb410,	// (0x0003c50e) form2_midp_string_pane_ParamLimits

0xb410,	// (0x0003c50e) form2_midp_string_pane

0x4216,	// (0x00035314) form2_midp_text_pane_ParamLimits

0x4216,	// (0x00035314) form2_midp_text_pane

0xb422,	// (0x0003c520) form2_midp_time_pane

0xb432,	// (0x0003c530) input_focus_pane_cp51_ParamLimits

0xb432,	// (0x0003c530) input_focus_pane_cp51

0xb44a,	// (0x0003c548) form2_midp_label_pane_t1_ParamLimits

0xb44a,	// (0x0003c548) form2_midp_label_pane_t1

0x4237,	// (0x00035335) form2_mdip_text_pane_t1_ParamLimits

0x4237,	// (0x00035335) form2_mdip_text_pane_t1

0x425b,	// (0x00035359) form2_midp_time_pane_t1

0xb498,	// (0x0003c596) form2_midp_gauge_slider_pane_t1

0xb4aa,	// (0x0003c5a8) form2_midp_gauge_slider_pane_t2

0xb4bc,	// (0x0003c5ba) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaed,	// (0x00040beb) form2_midp_gauge_slider_pane_t

0xb4ce,	// (0x0003c5cc) form2_midp_slider_pane

0xb4da,	// (0x0003c5d8) form2_midp_gauge_wait_pane_t1

0xb4e8,	// (0x0003c5e6) form2_midp_wait_pane_ParamLimits

0xb4e8,	// (0x0003c5e6) form2_midp_wait_pane

0x91da,	// (0x0003a2d8) list_single_2graphic_pane_cp4_ParamLimits

0x91da,	// (0x0003a2d8) list_single_2graphic_pane_cp4

0xb513,	// (0x0003c611) list_single_midp_graphic_pane_cp_ParamLimits

0xb513,	// (0x0003c611) list_single_midp_graphic_pane_cp

0xe4e9,	// (0x0003f5e7) list_highlight_pane_cp20

0xb537,	// (0x0003c635) list_single_2graphic_pane_g1_cp4

0xaad4,	// (0x0003bbd2) list_single_2graphic_pane_g2_cp4

0xb53f,	// (0x0003c63d) list_single_2graphic_pane_t1_cp4

0xef84,	// (0x00040082) list_highlight_pane_cp21

0xb54e,	// (0x0003c64c) list_single_midp_graphic_pane_g4_cp

0xb55d,	// (0x0003c65b) list_single_midp_graphic_pane_t1_cp

0xb572,	// (0x0003c670) form2_mdip_string_pane_t1_ParamLimits

0xb572,	// (0x0003c670) form2_mdip_string_pane_t1

0xe4e9,	// (0x0003f5e7) bg_wml_button_pane_cp2

0xe4df,	// (0x0003f5dd) form2_midp_image_pane_g1

0x3c9f,	// (0x00034d9d) list_double_large_graphic_pane_g5_ParamLimits

0x3c9f,	// (0x00034d9d) list_double_large_graphic_pane_g5

0x6147,	// (0x00037245) midp_form_pane_ParamLimits

0xef84,	// (0x00040082) main_apps_wheel_pane_ParamLimits

0x894d,	// (0x00039a4b) popup_preview_window_ParamLimits

0x894d,	// (0x00039a4b) popup_preview_window

0x8b34,	// (0x00039c32) popup_touch_info_window_ParamLimits

0x8b34,	// (0x00039c32) popup_touch_info_window

0x8b56,	// (0x00039c54) popup_touch_menu_window_ParamLimits

0x8b56,	// (0x00039c54) popup_touch_menu_window

0xe4d5,	// (0x0003f5d3) bg_popup_sub_pane_cp6

0xb617,	// (0x0003c715) list_touch_menu_pane

0xb61f,	// (0x0003c71d) list_single_touch_menu_pane_ParamLimits

0xb61f,	// (0x0003c71d) list_single_touch_menu_pane

0xb637,	// (0x0003c735) list_single_touch_menu_pane_t1

0xef84,	// (0x00040082) bg_popup_sub_pane_cp7_ParamLimits

0xef84,	// (0x00040082) bg_popup_sub_pane_cp7

0xb645,	// (0x0003c743) heading_sub_pane

0xb64d,	// (0x0003c74b) list_touch_info_pane_ParamLimits

0xb64d,	// (0x0003c74b) list_touch_info_pane

0xb65c,	// (0x0003c75a) list_single_touch_info_pane_ParamLimits

0xb65c,	// (0x0003c75a) list_single_touch_info_pane

0xb66e,	// (0x0003c76c) list_single_touch_info_pane_t1

0xb67c,	// (0x0003c77a) list_single_touch_info_pane_t2

0x0001,

0xfafb,	// (0x00040bf9) list_single_touch_info_pane_t

0x6936,	// (0x00037a34) bg_popup_heading_pane_cp

0xb68a,	// (0x0003c788) heading_sub_pane_t1

0x9121,	// (0x0003a21f) bg_popup_preview_window_pane_cp_ParamLimits

0x9121,	// (0x0003a21f) bg_popup_preview_window_pane_cp

0xb645,	// (0x0003c743) heading_preview_pane

0xb64d,	// (0x0003c74b) list_preview_pane_ParamLimits

0xb64d,	// (0x0003c74b) list_preview_pane

0xb698,	// (0x0003c796) popup_preview_window_g1

0xb65c,	// (0x0003c75a) list_single_preview_pane_ParamLimits

0xb65c,	// (0x0003c75a) list_single_preview_pane

0xb6a0,	// (0x0003c79e) list_single_preview_pane_g1

0xb6a8,	// (0x0003c7a6) list_single_preview_pane_t1

0xb66e,	// (0x0003c76c) list_single_preview_pane_t2

0x0001,

0xfb00,	// (0x00040bfe) list_single_preview_pane_t

0xb6b6,	// (0x0003c7b4) bg_popup_heading_pane_cp2_ParamLimits

0xb6b6,	// (0x0003c7b4) bg_popup_heading_pane_cp2

0xb6cc,	// (0x0003c7ca) heading_preview_pane_g1

0xb6d4,	// (0x0003c7d2) heading_preview_pane_t1_ParamLimits

0xb6d4,	// (0x0003c7d2) heading_preview_pane_t1

0xefd7,	// (0x000400d5) soft_indicator_pane_t1_ParamLimits

0xf51a,	// (0x00040618) scroll_pane_ParamLimits

0x218f,	// (0x0003328d) scroll_sc2_left_pane

0x2186,	// (0x00033284) scroll_sc2_right_pane

0x21ae,	// (0x000332ac) scroll_bg_pane_g1_ParamLimits

0x21c3,	// (0x000332c1) scroll_bg_pane_g2_ParamLimits

0x21db,	// (0x000332d9) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x000407dc) scroll_bg_pane_g_ParamLimits

0x21ae,	// (0x000332ac) scroll_handle_pane_g1_ParamLimits

0x21fd,	// (0x000332fb) scroll_handle_pane_g2_ParamLimits

0x21db,	// (0x000332d9) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x000407e3) scroll_handle_pane_g_ParamLimits

0x6ecf,	// (0x00037fcd) popup_choice_list_window_ParamLimits

0x6ecf,	// (0x00037fcd) popup_choice_list_window

0x8ff7,	// (0x0003a0f5) choice_list_pane

0x9079,	// (0x0003a177) cell_toolbar_pane_t1

0x90a1,	// (0x0003a19f) toolbar_button_pane_ParamLimits

0xa150,	// (0x0003b24e) ai_gene_pane_1_t2_ParamLimits

0xa150,	// (0x0003b24e) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00040a0b) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00040a0b) ai_gene_pane_1_t

0xb6f1,	// (0x0003c7ef) scroll_sc2_left_pane_g1

0xb6f1,	// (0x0003c7ef) scroll_sc2_right_pane_g1

0x6ea7,	// (0x00037fa5) bg_popup_sub_pane_cp10

0xb6fb,	// (0x0003c7f9) list_choice_list_pane

0xb714,	// (0x0003c812) list_single_choice_list_pane_ParamLimits

0xb714,	// (0x0003c812) list_single_choice_list_pane

0xb72c,	// (0x0003c82a) list_single_choice_list_pane_g1

0x1f66,	// (0x00033064) list_single_choice_list_pane_t1_ParamLimits

0x1f66,	// (0x00033064) list_single_choice_list_pane_t1

0xb734,	// (0x0003c832) choice_list_pane_g1

0xb73c,	// (0x0003c83a) choice_list_pane_t1

0xe4d5,	// (0x0003f5d3) input_focus_pane_cp11

0x20e4,	// (0x000331e2) title_pane_stacon_g2_ParamLimits

0x20e4,	// (0x000331e2) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x000407c2) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000407c2) title_pane_stacon_g

0x6936,	// (0x00037a34) cursor_press_pane

0x6f89,	// (0x00038087) popup_fep_hwr_window_ParamLimits

0x6f89,	// (0x00038087) popup_fep_hwr_window

0x86d8,	// (0x000397d6) popup_fep_vkb_window_ParamLimits

0x86d8,	// (0x000397d6) popup_fep_vkb_window

0xb74a,	// (0x0003c848) cursor_press_pane_g1

0x0002,

0xfb29,	// (0x00040c27) fep_vkb_side_pane_g_ParamLimits

0x758d,	// (0x0003868b) fep_hwr_candidate_pane_ParamLimits

0x758d,	// (0x0003868b) fep_hwr_candidate_pane

0x75b7,	// (0x000386b5) fep_hwr_side_pane_ParamLimits

0x75b7,	// (0x000386b5) fep_hwr_side_pane

0x75d9,	// (0x000386d7) fep_hwr_top_pane_ParamLimits

0x75d9,	// (0x000386d7) fep_hwr_top_pane

0x75f1,	// (0x000386ef) fep_hwr_write_pane_ParamLimits

0x75f1,	// (0x000386ef) fep_hwr_write_pane

0xfb29,	// (0x00040c27) fep_vkb_side_pane_g

0xb752,	// (0x0003c850) fep_hwr_top_pane_g1

0xb764,	// (0x0003c862) fep_hwr_top_pane_g2

0x762b,	// (0x00038729) fep_hwr_top_pane_g3

0x0002,

0xfb05,	// (0x00040c03) fep_hwr_top_pane_g

0x7640,	// (0x0003873e) fep_hwr_top_text_pane

0x22f7,	// (0x000333f5) fep_hwr_top_text_pane_g1

0xb79a,	// (0x0003c898) fep_hwr_top_text_pane_t1

0x774a,	// (0x00038848) fep_hwr_candidate_pane_g1

0xb9e5,	// (0x0003cae3) fep_vkb_keypad_pane_g3_ParamLimits

0xb9e5,	// (0x0003cae3) fep_vkb_keypad_pane_g3

0xba11,	// (0x0003cb0f) fep_vkb_keypad_pane_g4_ParamLimits

0xba11,	// (0x0003cb0f) fep_vkb_keypad_pane_g4

0xba88,	// (0x0003cb86) fep_vkb_bottom_pane_g2_ParamLimits

0xba88,	// (0x0003cb86) fep_vkb_bottom_pane_g2

0x0001,

0xfb30,	// (0x00040c2e) fep_vkb_bottom_pane_g_ParamLimits

0xfb30,	// (0x00040c2e) fep_vkb_bottom_pane_g

0xb6f1,	// (0x0003c7ef) cell_vkb_side_pane_g2

0x0001,

0xfb3a,	// (0x00040c38) cell_vkb_side_pane_g

0xbb13,	// (0x0003cc11) cell_vkb_side_pane_t1

0xbb21,	// (0x0003cc1f) cell_vkb_side_pane_t1_copy1

0xb6f1,	// (0x0003c7ef) bg_fep_vkb_candidate_pane_g2

0xbc65,	// (0x0003cd63) cell_vkb_candidate_pane_ParamLimits

0xb7a8,	// (0x0003c8a6) aid_size_cell_vkb_ParamLimits

0xb7a8,	// (0x0003c8a6) aid_size_cell_vkb

0xbc65,	// (0x0003cd63) cell_vkb_candidate_pane

0x7771,	// (0x0003886f) bg_popup_fep_shadow_pane_g1

0xb83a,	// (0x0003c938) fep_vkb_bottom_pane_ParamLimits

0xb83a,	// (0x0003c938) fep_vkb_bottom_pane

0xb877,	// (0x0003c975) fep_vkb_candidate_pane_ParamLimits

0xb877,	// (0x0003c975) fep_vkb_candidate_pane

0xb893,	// (0x0003c991) fep_vkb_keypad_pane_ParamLimits

0xb893,	// (0x0003c991) fep_vkb_keypad_pane

0xb8c6,	// (0x0003c9c4) fep_vkb_side_pane_ParamLimits

0xb8c6,	// (0x0003c9c4) fep_vkb_side_pane

0xb902,	// (0x0003ca00) fep_vkb_top_pane_ParamLimits

0xb902,	// (0x0003ca00) fep_vkb_top_pane

0xb93e,	// (0x0003ca3c) fep_vkb_top_pane_g1_ParamLimits

0xb93e,	// (0x0003ca3c) fep_vkb_top_pane_g1

0xb94d,	// (0x0003ca4b) fep_vkb_top_pane_g2_ParamLimits

0xb94d,	// (0x0003ca4b) fep_vkb_top_pane_g2

0xb95c,	// (0x0003ca5a) fep_vkb_top_pane_g3_ParamLimits

0xb95c,	// (0x0003ca5a) fep_vkb_top_pane_g3

0x0003,

0xfb20,	// (0x00040c1e) fep_vkb_top_pane_g_ParamLimits

0xfb20,	// (0x00040c1e) fep_vkb_top_pane_g

0xb97a,	// (0x0003ca78) fep_vkb_top_text_pane_ParamLimits

0xb97a,	// (0x0003ca78) fep_vkb_top_text_pane

0xb98b,	// (0x0003ca89) fep_vkb_side_pane_g1_ParamLimits

0xb98b,	// (0x0003ca89) fep_vkb_side_pane_g1

0xb9d4,	// (0x0003cad2) grid_vkb_side_pane_ParamLimits

0xb9d4,	// (0x0003cad2) grid_vkb_side_pane

0x7779,	// (0x00038877) bg_popup_fep_shadow_pane_g2

0x7782,	// (0x00038880) bg_popup_fep_shadow_pane_g3

0x778a,	// (0x00038888) bg_popup_fep_shadow_pane_g4

0x7793,	// (0x00038891) bg_popup_fep_shadow_pane_g5

0x779d,	// (0x0003889b) bg_popup_fep_shadow_pane_g6

0x77a5,	// (0x000388a3) bg_popup_fep_shadow_pane_g7

0x1e88,	// (0x00032f86) bg_popup_fep_shadow_pane_g8

0xba33,	// (0x0003cb31) grid_vkb_keypad_number_pane_ParamLimits

0xba33,	// (0x0003cb31) grid_vkb_keypad_number_pane

0xba47,	// (0x0003cb45) grid_vkb_keypad_pane_ParamLimits

0xba47,	// (0x0003cb45) grid_vkb_keypad_pane

0xba6d,	// (0x0003cb6b) fep_vkb_bottom_pane_g1_ParamLimits

0xba6d,	// (0x0003cb6b) fep_vkb_bottom_pane_g1

0xba96,	// (0x0003cb94) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xba96,	// (0x0003cb94) grid_vkb_keypad_bottom_left_pane

0xbaab,	// (0x0003cba9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbaab,	// (0x0003cba9) grid_vkb_keypad_bottom_right_pane

0xbac0,	// (0x0003cbbe) fep_vkb_top_text_pane_g1

0xbadb,	// (0x0003cbd9) fep_vkb_top_text_pane_t1

0xbaf0,	// (0x0003cbee) cell_vkb_side_pane_ParamLimits

0xbaf0,	// (0x0003cbee) cell_vkb_side_pane

0xb6f1,	// (0x0003c7ef) cell_vkb_side_pane_g1

0xbb2f,	// (0x0003cc2d) cell_vkb_keypad_pane_ParamLimits

0xbb2f,	// (0x0003cc2d) cell_vkb_keypad_pane

0xbbbc,	// (0x0003ccba) cell_vkb_keypad_pane_g1

0x0008,

0xfb4d,	// (0x00040c4b) bg_popup_fep_shadow_pane_g

0x77b7,	// (0x000388b5) cell_hwr_side_pane_g1

0x77b7,	// (0x000388b5) cell_hwr_side_pane_g2

0xbbc6,	// (0x0003ccc4) cell_vkb_keypad_pane_t1

0xbbd4,	// (0x0003ccd2) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbbd4,	// (0x0003ccd2) cell_vkb_keypad_bottom_left_pane

0xbbf1,	// (0x0003ccef) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbbf1,	// (0x0003ccef) cell_vkb_keypad_bottom_right_pane

0xb6f1,	// (0x0003c7ef) cell_vkb_keypad_bottom_left_pane_g1

0xb6f1,	// (0x0003c7ef) cell_vkb_keypad_bottom_right_pane_g1

0xbc2a,	// (0x0003cd28) cell_vkb_keypad_number_pane_ParamLimits

0xbc2a,	// (0x0003cd28) cell_vkb_keypad_number_pane

0xbc49,	// (0x0003cd47) cell_vkb_keypad_number_pane_g1

0xbc53,	// (0x0003cd51) cell_vkb_keypad_number_pane_g2

0xbc5c,	// (0x0003cd5a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3f,	// (0x00040c3d) cell_vkb_keypad_number_pane_g

0xbbc6,	// (0x0003ccc4) cell_vkb_keypad_number_pane_t1

0xbc86,	// (0x0003cd84) fep_vkb_candidate_pane_g1

0x0001,

0xfb60,	// (0x00040c5e) cell_hwr_side_pane_g

0xbc9f,	// (0x0003cd9d) cell_hwr_side_pane_t1

0x77c1,	// (0x000388bf) cell_hwr_side_pane_t1_copy1

0x77cf,	// (0x000388cd) cell_hwr_candidate_pane_g1

0x77fe,	// (0x000388fc) cell_hwr_candidate_pane_t1

0xb6f1,	// (0x0003c7ef) cell_vkb_candidate_pane_g2

0xbce3,	// (0x0003cde1) cell_vkb_candidate_pane_t1

0x7554,	// (0x00038652) bg_popup_fep_shadow_pane_ParamLimits

0x7554,	// (0x00038652) bg_popup_fep_shadow_pane

0x760b,	// (0x00038709) bg_fep_hwr_top_pane_g4

0xb776,	// (0x0003c874) bg_hwr_side_pane_g1_ParamLimits

0xb776,	// (0x0003c874) bg_hwr_side_pane_g1

0x767e,	// (0x0003877c) cell_hwr_side_pane_ParamLimits

0x767e,	// (0x0003877c) cell_hwr_side_pane

0x76bb,	// (0x000387b9) fep_hwr_write_pane_g1_ParamLimits

0x76bb,	// (0x000387b9) fep_hwr_write_pane_g1

0x76c8,	// (0x000387c6) fep_hwr_write_pane_g2_ParamLimits

0x76c8,	// (0x000387c6) fep_hwr_write_pane_g2

0x76d5,	// (0x000387d3) fep_hwr_write_pane_g3_ParamLimits

0x76d5,	// (0x000387d3) fep_hwr_write_pane_g3

0x76e3,	// (0x000387e1) fep_hwr_write_pane_g4_ParamLimits

0x76e3,	// (0x000387e1) fep_hwr_write_pane_g4

0x0005,

0xfb0c,	// (0x00040c0a) fep_hwr_write_pane_g_ParamLimits

0xfb0c,	// (0x00040c0a) fep_hwr_write_pane_g

0x760b,	// (0x00038709) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x760b,	// (0x00038709) bg_fep_hwr_candidate_pane_g2

0x76f8,	// (0x000387f6) cell_hwr_candidate_pane_ParamLimits

0x76f8,	// (0x000387f6) cell_hwr_candidate_pane

0x774a,	// (0x00038848) fep_hwr_candidate_pane_g1_ParamLimits

0xb7d6,	// (0x0003c8d4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb7d6,	// (0x0003c8d4) bg_popup_fep_shadow_pane_cp2

0xb96c,	// (0x0003ca6a) fep_vkb_top_pane_g4_ParamLimits

0xb96c,	// (0x0003ca6a) fep_vkb_top_pane_g4

0xb9b2,	// (0x0003cab0) fep_vkb_side_pane_g2_ParamLimits

0xb9b2,	// (0x0003cab0) fep_vkb_side_pane_g2

0x5e91,	// (0x00036f8f) list_setting_pane_t4_ParamLimits

0x5e91,	// (0x00036f8f) list_setting_pane_t4

0x5f2d,	// (0x0003702b) list_setting_number_pane_t5_ParamLimits

0x5f2d,	// (0x0003702b) list_setting_number_pane_t5

0x642c,	// (0x0003752a) list_double_heading_pane_cp2_ParamLimits

0x642c,	// (0x0003752a) list_double_heading_pane_cp2

0xbcf1,	// (0x0003cdef) list_double_heading_pane_g1_cp2_ParamLimits

0xbcf1,	// (0x0003cdef) list_double_heading_pane_g1_cp2

0xbcfd,	// (0x0003cdfb) list_double_heading_pane_g2_cp2_ParamLimits

0xbcfd,	// (0x0003cdfb) list_double_heading_pane_g2_cp2

0xbd11,	// (0x0003ce0f) list_double_heading_pane_t1_cp2_ParamLimits

0xbd11,	// (0x0003ce0f) list_double_heading_pane_t1_cp2

0xbd27,	// (0x0003ce25) list_double_heading_pane_t2_cp2_ParamLimits

0xbd27,	// (0x0003ce25) list_double_heading_pane_t2_cp2

0xe4cd,	// (0x0003f5cb) aid_value_unit2

0x5683,	// (0x00036781) popup_preview_fixed_window

0xf0c5,	// (0x000401c3) bg_popup_preview_window_pane_cp02

0xbd39,	// (0x0003ce37) list_preview_fixed_pane

0xbd7f,	// (0x0003ce7d) list_empty_pane_fp_ParamLimits

0xbd7f,	// (0x0003ce7d) list_empty_pane_fp

0xbd7f,	// (0x0003ce7d) list_single_cale_day_pane_fp_ParamLimits

0xbd7f,	// (0x0003ce7d) list_single_cale_day_pane_fp

0xbd7f,	// (0x0003ce7d) list_single_graphic_heading_pane_fp_ParamLimits

0xbd7f,	// (0x0003ce7d) list_single_graphic_heading_pane_fp

0xbd7f,	// (0x0003ce7d) list_single_graphic_pane_fp_ParamLimits

0xbd7f,	// (0x0003ce7d) list_single_graphic_pane_fp

0xbd7f,	// (0x0003ce7d) list_single_heading_pane_fp_ParamLimits

0xbd7f,	// (0x0003ce7d) list_single_heading_pane_fp

0xbd7f,	// (0x0003ce7d) list_single_pane_fp_ParamLimits

0xbd7f,	// (0x0003ce7d) list_single_pane_fp

0xbd98,	// (0x0003ce96) list_single_pane_fp_g1_ParamLimits

0xbd98,	// (0x0003ce96) list_single_pane_fp_g1

0x426e,	// (0x0003536c) list_single_pane_fp_g2_ParamLimits

0x426e,	// (0x0003536c) list_single_pane_fp_g2

0x427a,	// (0x00035378) list_single_pane_fp_g3_ParamLimits

0x427a,	// (0x00035378) list_single_pane_fp_g3

0xbda4,	// (0x0003cea2) list_single_pane_fp_g4_ParamLimits

0xbda4,	// (0x0003cea2) list_single_pane_fp_g4

0x0003,

0xfb73,	// (0x00040c71) list_single_pane_fp_g_ParamLimits

0xfb73,	// (0x00040c71) list_single_pane_fp_g

0x428e,	// (0x0003538c) list_single_pane_fp_t1_ParamLimits

0x428e,	// (0x0003538c) list_single_pane_fp_t1

0x42a5,	// (0x000353a3) list_single_graphic_pane_fp_g1_ParamLimits

0x42a5,	// (0x000353a3) list_single_graphic_pane_fp_g1

0xbd98,	// (0x0003ce96) list_single_graphic_pane_fp_g2_ParamLimits

0xbd98,	// (0x0003ce96) list_single_graphic_pane_fp_g2

0x426e,	// (0x0003536c) list_single_graphic_pane_fp_g3_ParamLimits

0x426e,	// (0x0003536c) list_single_graphic_pane_fp_g3

0x427a,	// (0x00035378) list_single_graphic_pane_fp_g4_ParamLimits

0x427a,	// (0x00035378) list_single_graphic_pane_fp_g4

0xbda4,	// (0x0003cea2) list_single_graphic_pane_fp_g5_ParamLimits

0xbda4,	// (0x0003cea2) list_single_graphic_pane_fp_g5

0x0004,

0xfb7c,	// (0x00040c7a) list_single_graphic_pane_fp_g_ParamLimits

0xfb7c,	// (0x00040c7a) list_single_graphic_pane_fp_g

0x42b1,	// (0x000353af) list_single_graphic_pane_fp_t1_ParamLimits

0x42b1,	// (0x000353af) list_single_graphic_pane_fp_t1

0x42a5,	// (0x000353a3) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x42a5,	// (0x000353a3) list_single_graphic_heading_pane_fp_g1

0xbd98,	// (0x0003ce96) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbd98,	// (0x0003ce96) list_single_graphic_heading_pane_fp_g2

0x426e,	// (0x0003536c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x426e,	// (0x0003536c) list_single_graphic_heading_pane_fp_g3

0x427a,	// (0x00035378) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x427a,	// (0x00035378) list_single_graphic_heading_pane_fp_g4

0xbda4,	// (0x0003cea2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbda4,	// (0x0003cea2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7c,	// (0x00040c7a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x00040c7a) list_single_graphic_heading_pane_fp_g

0x42c7,	// (0x000353c5) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x42c7,	// (0x000353c5) list_single_graphic_heading_pane_fp_t1

0x42dd,	// (0x000353db) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x42dd,	// (0x000353db) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb87,	// (0x00040c85) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb87,	// (0x00040c85) list_single_graphic_heading_pane_fp_t

0x42ef,	// (0x000353ed) list_single_cale_day_pane_fp_g1_ParamLimits

0x42ef,	// (0x000353ed) list_single_cale_day_pane_fp_g1

0xbdb0,	// (0x0003ceae) list_single_cale_day_pane_fp_g2_ParamLimits

0xbdb0,	// (0x0003ceae) list_single_cale_day_pane_fp_g2

0x4327,	// (0x00035425) list_single_cale_day_pane_fp_g3_ParamLimits

0x4327,	// (0x00035425) list_single_cale_day_pane_fp_g3

0x434f,	// (0x0003544d) list_single_cale_day_pane_fp_g4_ParamLimits

0x434f,	// (0x0003544d) list_single_cale_day_pane_fp_g4

0x4373,	// (0x00035471) list_single_cale_day_pane_fp_g5_ParamLimits

0x4373,	// (0x00035471) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8c,	// (0x00040c8a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8c,	// (0x00040c8a) list_single_cale_day_pane_fp_g

0x4397,	// (0x00035495) list_single_cale_day_pane_fp_t1_ParamLimits

0x4397,	// (0x00035495) list_single_cale_day_pane_fp_t1

0x43bd,	// (0x000354bb) list_single_cale_day_pane_fp_t2_ParamLimits

0x43bd,	// (0x000354bb) list_single_cale_day_pane_fp_t2

0x43d6,	// (0x000354d4) list_single_cale_day_pane_fp_t3_ParamLimits

0x43d6,	// (0x000354d4) list_single_cale_day_pane_fp_t3

0x0002,

0xfb97,	// (0x00040c95) list_single_cale_day_pane_fp_t_ParamLimits

0xfb97,	// (0x00040c95) list_single_cale_day_pane_fp_t

0xbd98,	// (0x0003ce96) list_empty_pane_fp_g1_ParamLimits

0xbd98,	// (0x0003ce96) list_empty_pane_fp_g1

0x43ef,	// (0x000354ed) list_empty_pane_fp_t1

0x43fd,	// (0x000354fb) list_empty_pane_fp_t2

0x0001,

0xfb9e,	// (0x00040c9c) list_empty_pane_fp_t

0xbd98,	// (0x0003ce96) list_single_heading_pane_fp_g1_ParamLimits

0xbd98,	// (0x0003ce96) list_single_heading_pane_fp_g1

0x426e,	// (0x0003536c) list_single_heading_pane_fp_g2_ParamLimits

0x426e,	// (0x0003536c) list_single_heading_pane_fp_g2

0x427a,	// (0x00035378) list_single_heading_pane_fp_g3_ParamLimits

0x427a,	// (0x00035378) list_single_heading_pane_fp_g3

0x0002,

0xfba3,	// (0x00040ca1) list_single_heading_pane_fp_g_ParamLimits

0xfba3,	// (0x00040ca1) list_single_heading_pane_fp_g

0x440b,	// (0x00035509) list_single_heading_pane_fp_t1_ParamLimits

0x440b,	// (0x00035509) list_single_heading_pane_fp_t1

0x441d,	// (0x0003551b) list_single_heading_pane_fp_t2_ParamLimits

0x441d,	// (0x0003551b) list_single_heading_pane_fp_t2

0x0001,

0xfbaa,	// (0x00040ca8) list_single_heading_pane_fp_t_ParamLimits

0xfbaa,	// (0x00040ca8) list_single_heading_pane_fp_t

0x1f7b,	// (0x00033079) aid_size_cell_fast

0xf09a,	// (0x00040198) soft_indicator_pane_cp1_t1

0x1fb8,	// (0x000330b6) cell_app_pane_cp2_ParamLimits

0x1fb8,	// (0x000330b6) cell_app_pane_cp2

0x7576,	// (0x00038674) fep_hwr_candidate_drop_down_list_pane

0x7764,	// (0x00038862) fep_hwr_candidate_pane_g3_ParamLimits

0x7764,	// (0x00038862) fep_hwr_candidate_pane_g3

0x1baa,	// (0x00032ca8) fep_hwr_candidate_pane_g4_ParamLimits

0x1baa,	// (0x00032ca8) fep_hwr_candidate_pane_g4

0x0002,

0xfb19,	// (0x00040c17) fep_hwr_candidate_pane_g_ParamLimits

0xfb19,	// (0x00040c17) fep_hwr_candidate_pane_g

0xb866,	// (0x0003c964) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb866,	// (0x0003c964) fep_vkb_candidate_drop_down_list_pane

0xbc8e,	// (0x0003cd8c) fep_vkb_candidate_pane_g3

0xbc96,	// (0x0003cd94) fep_vkb_candidate_pane_g4

0x0002,

0xfb46,	// (0x00040c44) fep_vkb_candidate_pane_g

0x77cf,	// (0x000388cd) cell_hwr_candidate_pane_g1_ParamLimits

0x77dd,	// (0x000388db) cell_hwr_candidate_pane_g3_ParamLimits

0x77dd,	// (0x000388db) cell_hwr_candidate_pane_g3

0xc565,	// (0x0003d663) cell_hwr_candidate_pane_g4_ParamLimits

0xc565,	// (0x0003d663) cell_hwr_candidate_pane_g4

0x0002,

0xfb65,	// (0x00040c63) cell_hwr_candidate_pane_g_ParamLimits

0xfb65,	// (0x00040c63) cell_hwr_candidate_pane_g

0xbcad,	// (0x0003cdab) cell_vkb_candidate_pane_g3_ParamLimits

0xbcad,	// (0x0003cdab) cell_vkb_candidate_pane_g3

0xbcc8,	// (0x0003cdc6) cell_vkb_candidate_pane_g4_ParamLimits

0xbcc8,	// (0x0003cdc6) cell_vkb_candidate_pane_g4

0xbdbc,	// (0x0003ceba) cell_app_pane_cp2_g1_ParamLimits

0xbdbc,	// (0x0003ceba) cell_app_pane_cp2_g1

0xbdda,	// (0x0003ced8) cell_app_pane_cp2_g2_ParamLimits

0xbdda,	// (0x0003ced8) cell_app_pane_cp2_g2

0x0001,

0xfbaf,	// (0x00040cad) cell_app_pane_cp2_g_ParamLimits

0xfbaf,	// (0x00040cad) cell_app_pane_cp2_g

0xbde6,	// (0x0003cee4) cell_app_pane_cp2_t1_ParamLimits

0xbde6,	// (0x0003cee4) cell_app_pane_cp2_t1

0x1e15,	// (0x00032f13) grid_highlight_pane_cp1_ParamLimits

0x1e15,	// (0x00032f13) grid_highlight_pane_cp1

0x781c,	// (0x0003891a) cell_hwr_candidate_pane_cp1_ParamLimits

0x781c,	// (0x0003891a) cell_hwr_candidate_pane_cp1

0x77cf,	// (0x000388cd) fep_hwr_candidate_drop_down_list_pane_g1

0x7840,	// (0x0003893e) fep_hwr_candidate_drop_down_list_pane_g2

0x784d,	// (0x0003894b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb4,	// (0x00040cb2) fep_hwr_candidate_drop_down_list_pane_g

0x785a,	// (0x00038958) fep_hwr_candidate_drop_down_list_scroll_pane

0x7863,	// (0x00038961) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7863,	// (0x00038961) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7870,	// (0x0003896e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7870,	// (0x0003896e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x787d,	// (0x0003897b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x787d,	// (0x0003897b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x788a,	// (0x00038988) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x788a,	// (0x00038988) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x78a5,	// (0x000389a3) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x78a5,	// (0x000389a3) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x78c0,	// (0x000389be) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x78c0,	// (0x000389be) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x78db,	// (0x000389d9) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x78db,	// (0x000389d9) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x78f6,	// (0x000389f4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x78f6,	// (0x000389f4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbb,	// (0x00040cb9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbb,	// (0x00040cb9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbdf8,	// (0x0003cef6) cell_vkb_candidate_pane_cp1_ParamLimits

0xbdf8,	// (0x0003cef6) cell_vkb_candidate_pane_cp1

0xb96c,	// (0x0003ca6a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb96c,	// (0x0003ca6a) fep_vkb_candidate_drop_down_list_pane_g1

0xbe1e,	// (0x0003cf1c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbe1e,	// (0x0003cf1c) fep_vkb_candidate_drop_down_list_pane_g2

0xbe2b,	// (0x0003cf29) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbe2b,	// (0x0003cf29) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcc,	// (0x00040cca) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcc,	// (0x00040cca) fep_vkb_candidate_drop_down_list_pane_g

0xbe38,	// (0x0003cf36) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbe38,	// (0x0003cf36) fep_vkb_candidate_drop_down_list_scroll_pane

0xbe45,	// (0x0003cf43) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbe45,	// (0x0003cf43) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbe52,	// (0x0003cf50) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbe52,	// (0x0003cf50) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbe5e,	// (0x0003cf5c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbe5e,	// (0x0003cf5c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbe6a,	// (0x0003cf68) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbe6a,	// (0x0003cf68) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbe8b,	// (0x0003cf89) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbe8b,	// (0x0003cf89) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbeac,	// (0x0003cfaa) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbeac,	// (0x0003cfaa) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbecd,	// (0x0003cfcb) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbecd,	// (0x0003cfcb) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbeee,	// (0x0003cfec) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbeee,	// (0x0003cfec) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd3,	// (0x00040cd1) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd3,	// (0x00040cd1) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x57a3,	// (0x000368a1) title_pane_g1_ParamLimits

0x57b0,	// (0x000368ae) title_pane_g2_ParamLimits

0xf54e,	// (0x0004064c) title_pane_g_ParamLimits

0x22ef,	// (0x000333ed) aid_call2_pane

0x22e7,	// (0x000333e5) aid_call_pane

0x22f7,	// (0x000333f5) popup_clock_analogue_window_g1

0x22f7,	// (0x000333f5) popup_clock_analogue_window_g2

0x640d,	// (0x0003750b) popup_clock_analogue_window_g3

0x6416,	// (0x00037514) popup_clock_analogue_window_g4

0xe4df,	// (0x0003f5dd) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x000407f1) popup_clock_analogue_window_g

0x641e,	// (0x0003751c) popup_clock_analogue_window_t1

0x645f,	// (0x0003755d) clock_digital_number_pane_ParamLimits

0x645f,	// (0x0003755d) clock_digital_number_pane

0x646b,	// (0x00037569) clock_digital_number_pane_cp02_ParamLimits

0x646b,	// (0x00037569) clock_digital_number_pane_cp02

0x6477,	// (0x00037575) clock_digital_number_pane_cp03_ParamLimits

0x6477,	// (0x00037575) clock_digital_number_pane_cp03

0x6483,	// (0x00037581) clock_digital_number_pane_cp04_ParamLimits

0x6483,	// (0x00037581) clock_digital_number_pane_cp04

0x648f,	// (0x0003758d) clock_digital_separator_pane_ParamLimits

0x648f,	// (0x0003758d) clock_digital_separator_pane

0x649b,	// (0x00037599) popup_clock_digital_window_t1_ParamLimits

0x649b,	// (0x00037599) popup_clock_digital_window_t1

0xe4df,	// (0x0003f5dd) clock_digital_number_pane_g1

0xe4df,	// (0x0003f5dd) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x000407fc) clock_digital_number_pane_g

0xe4df,	// (0x0003f5dd) clock_digital_separator_pane_g1

0xe4df,	// (0x0003f5dd) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x000407fc) clock_digital_separator_pane_g

0x8ba3,	// (0x00039ca1) aid_fill_nsta_ParamLimits

0x8cf3,	// (0x00039df1) indicator_nsta_pane_ParamLimits

0x8e84,	// (0x00039f82) popup_clock_analogue_window

0x8e84,	// (0x00039f82) popup_clock_digital_window

0xef84,	// (0x00040082) grid_indicator_nsta_pane_ParamLimits

0xb124,	// (0x0003c222) clock_nsta_pane_t2

0x0001,

0xfa99,	// (0x00040b97) clock_nsta_pane_t

0x6376,	// (0x00037474) aid_size_max_handle

0x6380,	// (0x0003747e) aid_size_min_handle

0x6936,	// (0x00037a34) editor_scroll_pane

0xbf09,	// (0x0003d007) ex_editor_pane

0x1f41,	// (0x0003303f) scroll_pane_cp13

0xf546,	// (0x00040644) scroll_pane_cp14

0x2326,	// (0x00033424) scroll_pane_cp36

0x6442,	// (0x00037540) list_single_graphic_hl_pane_cp2_ParamLimits

0x6442,	// (0x00037540) list_single_graphic_hl_pane_cp2

0x740a,	// (0x00038508) list_single_graphic_hl_pane_ParamLimits

0x740a,	// (0x00038508) list_single_graphic_hl_pane

0x4433,	// (0x00035531) aid_size_min_hl_cp1

0xbf11,	// (0x0003d00f) list_highlight_pane_cp34_ParamLimits

0xbf11,	// (0x0003d00f) list_highlight_pane_cp34

0xbf22,	// (0x0003d020) list_single_graphic_hl_pane_g1_ParamLimits

0xbf22,	// (0x0003d020) list_single_graphic_hl_pane_g1

0x7911,	// (0x00038a0f) list_single_graphic_hl_pane_g2_ParamLimits

0x7911,	// (0x00038a0f) list_single_graphic_hl_pane_g2

0x7911,	// (0x00038a0f) list_single_graphic_hl_pane_g3_ParamLimits

0x7911,	// (0x00038a0f) list_single_graphic_hl_pane_g3

0x3c2f,	// (0x00034d2d) list_single_graphic_hl_pane_g4_ParamLimits

0x3c2f,	// (0x00034d2d) list_single_graphic_hl_pane_g4

0x791d,	// (0x00038a1b) list_single_graphic_hl_pane_g5_ParamLimits

0x791d,	// (0x00038a1b) list_single_graphic_hl_pane_g5

0x0004,

0xfbe4,	// (0x00040ce2) list_single_graphic_hl_pane_g_ParamLimits

0xfbe4,	// (0x00040ce2) list_single_graphic_hl_pane_g

0x7931,	// (0x00038a2f) list_single_graphic_hl_pane_t1_ParamLimits

0x7931,	// (0x00038a2f) list_single_graphic_hl_pane_t1

0xbf2f,	// (0x0003d02d) aid_size_min_hl_cp2

0xbf38,	// (0x0003d036) list_highlight_pane_cp34_cp2_ParamLimits

0xbf38,	// (0x0003d036) list_highlight_pane_cp34_cp2

0xbf22,	// (0x0003d020) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbf22,	// (0x0003d020) list_single_graphic_hl_pane_g1_cp2

0xbf45,	// (0x0003d043) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbf45,	// (0x0003d043) list_single_graphic_hl_pane_g2_cp2

0xbf51,	// (0x0003d04f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbf51,	// (0x0003d04f) list_single_graphic_hl_pane_g3_cp2

0x16b8,	// (0x000327b6) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x16b8,	// (0x000327b6) list_single_graphic_hl_pane_g4_cp2

0xbf5f,	// (0x0003d05d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbf5f,	// (0x0003d05d) list_single_graphic_hl_pane_g5_cp2

0x6cf8,	// (0x00037df6) control_pane_g4_ParamLimits

0x6cf8,	// (0x00037df6) control_pane_g4

0x6ea7,	// (0x00037fa5) bg_popup_sub_pane_cp10_ParamLimits

0xb6fb,	// (0x0003c7f9) list_choice_list_pane_ParamLimits

0xb70a,	// (0x0003c808) scroll_pane_cp23

0xf0c5,	// (0x000401c3) bg_popup_preview_window_pane_cp02_ParamLimits

0xbd39,	// (0x0003ce37) list_preview_fixed_pane_ParamLimits

0xbd4f,	// (0x0003ce4d) list_preview_fixed_pane_cp_ParamLimits

0xbd4f,	// (0x0003ce4d) list_preview_fixed_pane_cp

0xbd5b,	// (0x0003ce59) popup_preview_fixed_window_g1_ParamLimits

0xbd5b,	// (0x0003ce59) popup_preview_fixed_window_g1

0xbd67,	// (0x0003ce65) popup_preview_fixed_window_g2_ParamLimits

0xbd67,	// (0x0003ce65) popup_preview_fixed_window_g2

0x0002,

0xfb6c,	// (0x00040c6a) popup_preview_fixed_window_g_ParamLimits

0xfb6c,	// (0x00040c6a) popup_preview_fixed_window_g

0x6265,	// (0x00037363) aid_navi_side_left_pane_ParamLimits

0x627a,	// (0x00037378) aid_navi_side_right_pane_ParamLimits

0x6292,	// (0x00037390) navi_icon_pane_stacon_ParamLimits

0x62a6,	// (0x000373a4) navi_navi_pane_stacon_ParamLimits

0x6292,	// (0x00037390) navi_text_pane_stacon_ParamLimits

0xe4d5,	// (0x0003f5d3) main_text_info_pane

0xbf89,	// (0x0003d087) listscroll_text_info_pane

0xbf91,	// (0x0003d08f) list_text_info_pane_ParamLimits

0xbf91,	// (0x0003d08f) list_text_info_pane

0xbfa0,	// (0x0003d09e) scroll_pane_cp24_ParamLimits

0xbfa0,	// (0x0003d09e) scroll_pane_cp24

0xbfbe,	// (0x0003d0bc) list_text_info_pane_t1_ParamLimits

0xbfbe,	// (0x0003d0bc) list_text_info_pane_t1

0x6ef1,	// (0x00037fef) popup_fast_swap2_window_ParamLimits

0x6ef1,	// (0x00037fef) popup_fast_swap2_window

0xbfe3,	// (0x0003d0e1) aid_size_cell_fast2

0xe4d5,	// (0x0003f5d3) bg_popup_window_pane_cp17

0x94e1,	// (0x0003a5df) heading_pane_cp2

0xf2cb,	// (0x000403c9) listscroll_fast2_pane

0xbfed,	// (0x0003d0eb) grid_fast2_pane

0xbff7,	// (0x0003d0f5) listscroll_fast2_pane_g1

0xc001,	// (0x0003d0ff) listscroll_fast2_pane_g2

0x0001,

0xfbef,	// (0x00040ced) listscroll_fast2_pane_g

0x1f41,	// (0x0003303f) scroll_pane_cp26

0xc00b,	// (0x0003d109) cell_fast2_pane_ParamLimits

0xc00b,	// (0x0003d109) cell_fast2_pane

0xc022,	// (0x0003d120) cell_fast2_pane_g1

0xc02b,	// (0x0003d129) cell_fast2_pane_g2

0xc034,	// (0x0003d132) cell_fast2_pane_g3

0x0002,

0xfbf4,	// (0x00040cf2) cell_fast2_pane_g

0xf30d,	// (0x0004040b) grid_highlight_pane_cp9

0xf322,	// (0x00040420) main_eswt_pane_ParamLimits

0xf322,	// (0x00040420) main_eswt_pane

0xbfb5,	// (0x0003d0b3) list_single_text_info_pane

0xc03c,	// (0x0003d13a) eswt_ctrl_button_pane

0xc03c,	// (0x0003d13a) eswt_ctrl_canvas_pane

0xc044,	// (0x0003d142) eswt_ctrl_combo_pane

0xc03c,	// (0x0003d13a) eswt_ctrl_default_pane

0xc03c,	// (0x0003d13a) eswt_ctrl_label_pane

0xc04c,	// (0x0003d14a) eswt_ctrl_wait_pane

0xc054,	// (0x0003d152) eswt_shell_pane

0xe4d5,	// (0x0003f5d3) listscroll_eswt_app_pane

0xc074,	// (0x0003d172) popup_eswt_tasktip_window_ParamLimits

0xc074,	// (0x0003d172) popup_eswt_tasktip_window

0x9121,	// (0x0003a21f) bg_popup_window_pane_cp18

0xc085,	// (0x0003d183) eswt_control_pane_g1_ParamLimits

0xc085,	// (0x0003d183) eswt_control_pane_g1

0xc092,	// (0x0003d190) eswt_control_pane_g2_ParamLimits

0xc092,	// (0x0003d190) eswt_control_pane_g2

0xc09f,	// (0x0003d19d) eswt_control_pane_g3_ParamLimits

0xc09f,	// (0x0003d19d) eswt_control_pane_g3

0xc0ac,	// (0x0003d1aa) eswt_control_pane_g4_ParamLimits

0xc0ac,	// (0x0003d1aa) eswt_control_pane_g4

0x0003,

0xfbfb,	// (0x00040cf9) eswt_control_pane_g_ParamLimits

0xfbfb,	// (0x00040cf9) eswt_control_pane_g

0x1e15,	// (0x00032f13) bg_button_pane_ParamLimits

0x1e15,	// (0x00032f13) bg_button_pane

0xf322,	// (0x00040420) common_borders_pane_copy2_ParamLimits

0xf322,	// (0x00040420) common_borders_pane_copy2

0xc0b9,	// (0x0003d1b7) control_button_pane_g1_ParamLimits

0xc0b9,	// (0x0003d1b7) control_button_pane_g1

0xc0c5,	// (0x0003d1c3) control_button_pane_g2_ParamLimits

0xc0c5,	// (0x0003d1c3) control_button_pane_g2

0xc0d1,	// (0x0003d1cf) control_button_pane_g3_ParamLimits

0xc0d1,	// (0x0003d1cf) control_button_pane_g3

0x0002,

0xfc04,	// (0x00040d02) control_button_pane_g_ParamLimits

0xfc04,	// (0x00040d02) control_button_pane_g

0xc0e5,	// (0x0003d1e3) control_button_pane_t1

0xc0f3,	// (0x0003d1f1) control_button_pane_t2

0x0001,

0xfc0b,	// (0x00040d09) control_button_pane_t

0x90ad,	// (0x0003a1ab) bg_button_pane_g1

0x90bd,	// (0x0003a1bb) bg_button_pane_g2

0x90b5,	// (0x0003a1b3) bg_button_pane_g3

0x90cd,	// (0x0003a1cb) bg_button_pane_g4

0x90c5,	// (0x0003a1c3) bg_button_pane_g5

0x90d5,	// (0x0003a1d3) bg_button_pane_g6

0x90dd,	// (0x0003a1db) bg_button_pane_g7

0x90ed,	// (0x0003a1eb) bg_button_pane_g8

0x90e5,	// (0x0003a1e3) bg_button_pane_g9

0x0008,

0xf861,	// (0x0004095f) bg_button_pane_g

0xb6b6,	// (0x0003c7b4) common_borders_pane_ParamLimits

0xb6b6,	// (0x0003c7b4) common_borders_pane

0xc085,	// (0x0003d183) eswt_control_pane_g1_copy1_ParamLimits

0xc085,	// (0x0003d183) eswt_control_pane_g1_copy1

0xc092,	// (0x0003d190) eswt_control_pane_g2_copy1_ParamLimits

0xc092,	// (0x0003d190) eswt_control_pane_g2_copy1

0xc09f,	// (0x0003d19d) eswt_control_pane_g3_copy1_ParamLimits

0xc09f,	// (0x0003d19d) eswt_control_pane_g3_copy1

0xc0ac,	// (0x0003d1aa) eswt_control_pane_g4_copy1_ParamLimits

0xc0ac,	// (0x0003d1aa) eswt_control_pane_g4_copy1

0xb6f1,	// (0x0003c7ef) bg_eswt_ctrl_canvas_pane_g1

0xb6b6,	// (0x0003c7b4) common_borders_pane_cp2_ParamLimits

0xb6b6,	// (0x0003c7b4) common_borders_pane_cp2

0xb6b6,	// (0x0003c7b4) common_borders_pane_cp3_ParamLimits

0xb6b6,	// (0x0003c7b4) common_borders_pane_cp3

0xc101,	// (0x0003d1ff) separator_horizontal_pane

0xc109,	// (0x0003d207) separator_vertical_pane

0xc085,	// (0x0003d183) eswt_control_pane_g1_copy2_ParamLimits

0xc085,	// (0x0003d183) eswt_control_pane_g1_copy2

0xc092,	// (0x0003d190) eswt_control_pane_g2_copy2_ParamLimits

0xc092,	// (0x0003d190) eswt_control_pane_g2_copy2

0xc09f,	// (0x0003d19d) eswt_control_pane_g3_copy2_ParamLimits

0xc09f,	// (0x0003d19d) eswt_control_pane_g3_copy2

0xc0ac,	// (0x0003d1aa) eswt_control_pane_g4_copy2_ParamLimits

0xc0ac,	// (0x0003d1aa) eswt_control_pane_g4_copy2

0xe4d5,	// (0x0003f5d3) common_borders_pane_cp4

0xc112,	// (0x0003d210) separator_horizontal_pane_g1

0xc11b,	// (0x0003d219) separator_horizontal_pane_g2

0xc124,	// (0x0003d222) separator_horizontal_pane_g3

0x0002,

0xfc10,	// (0x00040d0e) separator_horizontal_pane_g

0xc085,	// (0x0003d183) eswt_control_pane_g1_copy3_ParamLimits

0xc085,	// (0x0003d183) eswt_control_pane_g1_copy3

0xc092,	// (0x0003d190) eswt_control_pane_g2_copy3_ParamLimits

0xc092,	// (0x0003d190) eswt_control_pane_g2_copy3

0xc09f,	// (0x0003d19d) eswt_control_pane_g3_copy3_ParamLimits

0xc09f,	// (0x0003d19d) eswt_control_pane_g3_copy3

0xc0ac,	// (0x0003d1aa) eswt_control_pane_g4_copy3_ParamLimits

0xc0ac,	// (0x0003d1aa) eswt_control_pane_g4_copy3

0xe4d5,	// (0x0003f5d3) common_borders_pane_cp5

0xc12d,	// (0x0003d22b) separator_vertical_pane_g1

0xc136,	// (0x0003d234) separator_vertical_pane_g2

0xc13f,	// (0x0003d23d) separator_vertical_pane_g3

0x0002,

0xfc17,	// (0x00040d15) separator_vertical_pane_g

0xc085,	// (0x0003d183) eswt_control_pane_g1_copy4_ParamLimits

0xc085,	// (0x0003d183) eswt_control_pane_g1_copy4

0xc092,	// (0x0003d190) eswt_control_pane_g2_copy4_ParamLimits

0xc092,	// (0x0003d190) eswt_control_pane_g2_copy4

0xc09f,	// (0x0003d19d) eswt_control_pane_g3_copy4_ParamLimits

0xc09f,	// (0x0003d19d) eswt_control_pane_g3_copy4

0xc0ac,	// (0x0003d1aa) eswt_control_pane_g4_copy4_ParamLimits

0xc0ac,	// (0x0003d1aa) eswt_control_pane_g4_copy4

0xc148,	// (0x0003d246) eswt_ctrl_combo_button_pane

0xc150,	// (0x0003d24e) eswt_ctrl_input_pane

0xc158,	// (0x0003d256) popup_choice_list_window_cp70

0xc160,	// (0x0003d25e) eswt_ctrl_input_pane_t1

0xe4d5,	// (0x0003f5d3) input_focus_pane_cp70

0xb6b6,	// (0x0003c7b4) bg_button_pane_cp70_ParamLimits

0xb6b6,	// (0x0003c7b4) bg_button_pane_cp70

0xc16e,	// (0x0003d26c) eswt_ctrl_combo_button_pane_g1

0xc176,	// (0x0003d274) wait_bar_pane_cp70

0x9121,	// (0x0003a21f) bg_popup_window_pane_cp70_ParamLimits

0x9121,	// (0x0003a21f) bg_popup_window_pane_cp70

0xc17e,	// (0x0003d27c) popup_eswt_tasktip_window_t1

0xc194,	// (0x0003d292) wait_bar_pane_cp71_ParamLimits

0xc194,	// (0x0003d292) wait_bar_pane_cp71

0xc1a0,	// (0x0003d29e) grid_eswt_app_pane

0x218f,	// (0x0003328d) scroll_pane_cp70

0xc1a9,	// (0x0003d2a7) cell_eswt_app_pane_ParamLimits

0xc1a9,	// (0x0003d2a7) cell_eswt_app_pane

0xc1db,	// (0x0003d2d9) cell_eswt_app_pane_g1_ParamLimits

0xc1db,	// (0x0003d2d9) cell_eswt_app_pane_g1

0xc20a,	// (0x0003d308) cell_eswt_app_pane_g2_ParamLimits

0xc20a,	// (0x0003d308) cell_eswt_app_pane_g2

0x0001,

0xfc1e,	// (0x00040d1c) cell_eswt_app_pane_g_ParamLimits

0xfc1e,	// (0x00040d1c) cell_eswt_app_pane_g

0xc233,	// (0x0003d331) cell_eswt_app_pane_t1_ParamLimits

0xc233,	// (0x0003d331) cell_eswt_app_pane_t1

0xc265,	// (0x0003d363) grid_highlight_pane_cp70_ParamLimits

0xc265,	// (0x0003d363) grid_highlight_pane_cp70

0x265f,	// (0x0003375d) set_content_pane_g1

0x6c80,	// (0x00037d7e) status_small_volume_pane

0x7947,	// (0x00038a45) status_small_volume_pane_g1

0x794f,	// (0x00038a4d) volume_small2_pane

0x7958,	// (0x00038a56) volume_small2_pane_g1

0x7961,	// (0x00038a5f) volume_small2_pane_g2

0x796a,	// (0x00038a68) volume_small2_pane_g3

0x7973,	// (0x00038a71) volume_small2_pane_g4

0x797c,	// (0x00038a7a) volume_small2_pane_g5

0x7985,	// (0x00038a83) volume_small2_pane_g6

0x798e,	// (0x00038a8c) volume_small2_pane_g7

0x7997,	// (0x00038a95) volume_small2_pane_g8

0x79a0,	// (0x00038a9e) volume_small2_pane_g9

0x79a9,	// (0x00038aa7) volume_small2_pane_g10

0x0009,

0xfc23,	// (0x00040d21) volume_small2_pane_g

0xbac0,	// (0x0003cbbe) fep_vkb_top_text_pane_g1_ParamLimits

0xbadb,	// (0x0003cbd9) fep_vkb_top_text_pane_t1_ParamLimits

0xbd73,	// (0x0003ce71) popup_preview_fixed_window_g3_ParamLimits

0xbd73,	// (0x0003ce71) popup_preview_fixed_window_g3

0x8ac7,	// (0x00039bc5) popup_toolbar_trans_pane

0xa465,	// (0x0003b563) aid_height_set_list_ParamLimits

0xa476,	// (0x0003b574) aid_size_parent_ParamLimits

0x6ea7,	// (0x00037fa5) list_highlight_pane_cp2_ParamLimits

0x265f,	// (0x0003375d) set_content_pane_g1_ParamLimits

0xa6cb,	// (0x0003b7c9) list_single_image_pane_ParamLimits

0xa6cb,	// (0x0003b7c9) list_single_image_pane

0xc271,	// (0x0003d36f) aid_size_cell_image_ParamLimits

0xc271,	// (0x0003d36f) aid_size_cell_image

0xc27e,	// (0x0003d37c) grid_single_image_pane_ParamLimits

0xc27e,	// (0x0003d37c) grid_single_image_pane

0x1e23,	// (0x00032f21) list_single_image_pane_g1_ParamLimits

0x1e23,	// (0x00032f21) list_single_image_pane_g1

0x1e2f,	// (0x00032f2d) list_single_image_pane_g2_ParamLimits

0x1e2f,	// (0x00032f2d) list_single_image_pane_g2

0x0001,

0xfc38,	// (0x00040d36) list_single_image_pane_g_ParamLimits

0xfc38,	// (0x00040d36) list_single_image_pane_g

0xc28c,	// (0x0003d38a) list_single_image_pane_t1_ParamLimits

0xc28c,	// (0x0003d38a) list_single_image_pane_t1

0xc2a2,	// (0x0003d3a0) cell_image_list_pane_ParamLimits

0xc2a2,	// (0x0003d3a0) cell_image_list_pane

0xc2b8,	// (0x0003d3b6) cell_image_list_pane_g1

0xc2c1,	// (0x0003d3bf) cell_image_list_pane_g2

0x0001,

0xfc3d,	// (0x00040d3b) cell_image_list_pane_g

0xc2ca,	// (0x0003d3c8) aid_size_cell_tb_trans_pane

0x1e15,	// (0x00032f13) bg_tb_trans_pane

0xc2dc,	// (0x0003d3da) grid_tb_trans_pane

0x90ad,	// (0x0003a1ab) bg_tb_trans_pane_g1

0x90bd,	// (0x0003a1bb) bg_tb_trans_pane_g2

0x90b5,	// (0x0003a1b3) bg_tb_trans_pane_g3

0x90cd,	// (0x0003a1cb) bg_tb_trans_pane_g4

0x90c5,	// (0x0003a1c3) bg_tb_trans_pane_g5

0x90ed,	// (0x0003a1eb) bg_tb_trans_pane_g6

0x90e5,	// (0x0003a1e3) bg_tb_trans_pane_g7

0x90d5,	// (0x0003a1d3) bg_tb_trans_pane_g8

0x90dd,	// (0x0003a1db) bg_tb_trans_pane_g9

0x0008,

0xfc42,	// (0x00040d40) bg_tb_trans_pane_g

0xc2f0,	// (0x0003d3ee) cell_toolbar_trans_pane_ParamLimits

0xc2f0,	// (0x0003d3ee) cell_toolbar_trans_pane

0xb6f1,	// (0x0003c7ef) cell_toolbar_trans_pane_g1

0xb315,	// (0x0003c413) list_form2_midp_pane_t1

0xb323,	// (0x0003c421) list_form2_midp_pane_t2

0x0001,

0xfadf,	// (0x00040bdd) list_form2_midp_pane_t

0xb331,	// (0x0003c42f) scroll_pane_cp51_ParamLimits

0xb4f8,	// (0x0003c5f6) form2_midp_wait_pane_g1

0xb501,	// (0x0003c5ff) form2_midp_wait_pane_g2

0xb50a,	// (0x0003c608) form2_midp_wait_pane_g3

0x0002,

0xfaf4,	// (0x00040bf2) form2_midp_wait_pane_g

0xef84,	// (0x00040082) list_highlight_pane_cp21_ParamLimits

0xb54e,	// (0x0003c64c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb55d,	// (0x0003c65b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa684,	// (0x0003b782) list_single_2graphic_im_pane_ParamLimits

0xa684,	// (0x0003b782) list_single_2graphic_im_pane

0xc316,	// (0x0003d414) list_single_2graphic_im_pane_g1_ParamLimits

0xc316,	// (0x0003d414) list_single_2graphic_im_pane_g1

0xc327,	// (0x0003d425) list_single_2graphic_im_pane_g2_ParamLimits

0xc327,	// (0x0003d425) list_single_2graphic_im_pane_g2

0xc333,	// (0x0003d431) list_single_2graphic_im_pane_g3_ParamLimits

0xc333,	// (0x0003d431) list_single_2graphic_im_pane_g3

0x0003,

0xfc55,	// (0x00040d53) list_single_2graphic_im_pane_g_ParamLimits

0xfc55,	// (0x00040d53) list_single_2graphic_im_pane_g

0xc353,	// (0x0003d451) list_single_2graphic_im_pane_t1_ParamLimits

0xc353,	// (0x0003d451) list_single_2graphic_im_pane_t1

0xbd7f,	// (0x0003ce7d) list_single_graphic_2heading_pane_fp_ParamLimits

0xbd7f,	// (0x0003ce7d) list_single_graphic_2heading_pane_fp

0x42a5,	// (0x000353a3) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x42a5,	// (0x000353a3) list_single_graphic_2heading_pane_fp_g1

0xbd98,	// (0x0003ce96) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbd98,	// (0x0003ce96) list_single_graphic_2heading_pane_fp_g2

0x426e,	// (0x0003536c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x426e,	// (0x0003536c) list_single_graphic_2heading_pane_fp_g3

0x427a,	// (0x00035378) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x427a,	// (0x00035378) list_single_graphic_2heading_pane_fp_g4

0xbda4,	// (0x0003cea2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbda4,	// (0x0003cea2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7c,	// (0x00040c7a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x00040c7a) list_single_graphic_2heading_pane_fp_g

0x4448,	// (0x00035546) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4448,	// (0x00035546) list_single_graphic_2heading_pane_fp_t1

0x42dd,	// (0x000353db) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x42dd,	// (0x000353db) list_single_graphic_2heading_pane_fp_t2

0x46b4,	// (0x000357b2) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x46b4,	// (0x000357b2) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5e,	// (0x00040d5c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5e,	// (0x00040d5c) list_single_graphic_2heading_pane_fp_t

0xb782,	// (0x0003c880) fep_hwr_write_pane_g5_ParamLimits

0xb782,	// (0x0003c880) fep_hwr_write_pane_g5

0xb78e,	// (0x0003c88c) fep_hwr_write_pane_g6_ParamLimits

0xb78e,	// (0x0003c88c) fep_hwr_write_pane_g6

0xc054,	// (0x0003d152) eswt_shell_pane_ParamLimits

0x9121,	// (0x0003a21f) bg_popup_window_pane_cp18_ParamLimits

0xa3bc,	// (0x0003b4ba) heading_pane_cp70

0xc17e,	// (0x0003d27c) popup_eswt_tasktip_window_t1_ParamLimits

0x8bfa,	// (0x00039cf8) aid_touch_tab_arrow_left

0x8c09,	// (0x00039d07) aid_touch_tab_arrow_right

0xe4f3,	// (0x0003f5f1) title_pane_g3_ParamLimits

0xe4f3,	// (0x0003f5f1) title_pane_g3

0x1dd4,	// (0x00032ed2) set_value_pane_g1

0x8ac7,	// (0x00039bc5) popup_toolbar_trans_pane_ParamLimits

0xc2ca,	// (0x0003d3c8) aid_size_cell_tb_trans_pane_ParamLimits

0x1e15,	// (0x00032f13) bg_tb_trans_pane_ParamLimits

0xc2dc,	// (0x0003d3da) grid_tb_trans_pane_ParamLimits

0xf0c5,	// (0x000401c3) cont_note_pane_ParamLimits

0xf0c5,	// (0x000401c3) cont_note_pane

0xf322,	// (0x00040420) cont_snote2_single_text_pane_ParamLimits

0xf322,	// (0x00040420) cont_snote2_single_text_pane

0xf322,	// (0x00040420) cont_snote2_single_graphic_pane_ParamLimits

0xf322,	// (0x00040420) cont_snote2_single_graphic_pane

0x96fd,	// (0x0003a7fb) cont_note_wait_pane_ParamLimits

0x96fd,	// (0x0003a7fb) cont_note_wait_pane

0x96fd,	// (0x0003a7fb) cont_note_image_pane_ParamLimits

0x96fd,	// (0x0003a7fb) cont_note_image_pane

0xc384,	// (0x0003d482) popup_note2_window_g1_ParamLimits

0xc384,	// (0x0003d482) popup_note2_window_g1

0xc3b5,	// (0x0003d4b3) popup_note2_window_t1_ParamLimits

0xc3b5,	// (0x0003d4b3) popup_note2_window_t1

0xc3fa,	// (0x0003d4f8) popup_note2_window_t2_ParamLimits

0xc3fa,	// (0x0003d4f8) popup_note2_window_t2

0xc43f,	// (0x0003d53d) popup_note2_window_t3_ParamLimits

0xc43f,	// (0x0003d53d) popup_note2_window_t3

0xc484,	// (0x0003d582) popup_note2_window_t4_ParamLimits

0xc484,	// (0x0003d582) popup_note2_window_t4

0xf149,	// (0x00040247) popup_note2_window_t5_ParamLimits

0xf149,	// (0x00040247) popup_note2_window_t5

0x0004,

0xfc6a,	// (0x00040d68) popup_note2_window_t_ParamLimits

0xfc6a,	// (0x00040d68) popup_note2_window_t

0xc4b3,	// (0x0003d5b1) popup_note2_image_window_g1_ParamLimits

0xc4b3,	// (0x0003d5b1) popup_note2_image_window_g1

0xc4bf,	// (0x0003d5bd) popup_note2_image_window_g2_ParamLimits

0xc4bf,	// (0x0003d5bd) popup_note2_image_window_g2

0x0001,

0xfc75,	// (0x00040d73) popup_note2_image_window_g_ParamLimits

0xfc75,	// (0x00040d73) popup_note2_image_window_g

0xc4d1,	// (0x0003d5cf) popup_note2_image_window_t1_ParamLimits

0xc4d1,	// (0x0003d5cf) popup_note2_image_window_t1

0xc4e9,	// (0x0003d5e7) popup_note2_image_window_t2_ParamLimits

0xc4e9,	// (0x0003d5e7) popup_note2_image_window_t2

0xc501,	// (0x0003d5ff) popup_note2_image_window_t3_ParamLimits

0xc501,	// (0x0003d5ff) popup_note2_image_window_t3

0x0002,

0xfc7a,	// (0x00040d78) popup_note2_image_window_t_ParamLimits

0xfc7a,	// (0x00040d78) popup_note2_image_window_t

0x970b,	// (0x0003a809) popup_note2_wait_window_g1_ParamLimits

0x970b,	// (0x0003a809) popup_note2_wait_window_g1

0xc51d,	// (0x0003d61b) popup_note2_wait_window_g2_ParamLimits

0xc51d,	// (0x0003d61b) popup_note2_wait_window_g2

0x9723,	// (0x0003a821) popup_note2_wait_window_g3_ParamLimits

0x9723,	// (0x0003a821) popup_note2_wait_window_g3

0x0002,

0xfc81,	// (0x00040d7f) popup_note2_wait_window_g_ParamLimits

0xfc81,	// (0x00040d7f) popup_note2_wait_window_g

0xc529,	// (0x0003d627) popup_note2_wait_window_t1_ParamLimits

0xc529,	// (0x0003d627) popup_note2_wait_window_t1

0xc547,	// (0x0003d645) popup_note2_wait_window_t2_ParamLimits

0xc547,	// (0x0003d645) popup_note2_wait_window_t2

0xc586,	// (0x0003d684) popup_note2_wait_window_t3_ParamLimits

0xc586,	// (0x0003d684) popup_note2_wait_window_t3

0xc598,	// (0x0003d696) popup_note2_wait_window_t4_ParamLimits

0xc598,	// (0x0003d696) popup_note2_wait_window_t4

0x0003,

0xfc88,	// (0x00040d86) popup_note2_wait_window_t_ParamLimits

0xfc88,	// (0x00040d86) popup_note2_wait_window_t

0xc5aa,	// (0x0003d6a8) wait_bar2_pane_ParamLimits

0xc5aa,	// (0x0003d6a8) wait_bar2_pane

0xc5c2,	// (0x0003d6c0) popup_snote2_single_text_window_g1_ParamLimits

0xc5c2,	// (0x0003d6c0) popup_snote2_single_text_window_g1

0xc5ea,	// (0x0003d6e8) popup_snote2_single_text_window_t1_ParamLimits

0xc5ea,	// (0x0003d6e8) popup_snote2_single_text_window_t1

0xc636,	// (0x0003d734) popup_snote2_single_text_window_t2_ParamLimits

0xc636,	// (0x0003d734) popup_snote2_single_text_window_t2

0xc682,	// (0x0003d780) popup_snote2_single_text_window_t3_ParamLimits

0xc682,	// (0x0003d780) popup_snote2_single_text_window_t3

0xc6c3,	// (0x0003d7c1) popup_snote2_single_text_window_t4_ParamLimits

0xc6c3,	// (0x0003d7c1) popup_snote2_single_text_window_t4

0xc6f9,	// (0x0003d7f7) popup_snote2_single_text_window_t5_ParamLimits

0xc6f9,	// (0x0003d7f7) popup_snote2_single_text_window_t5

0x0004,

0xfc91,	// (0x00040d8f) popup_snote2_single_text_window_t_ParamLimits

0xfc91,	// (0x00040d8f) popup_snote2_single_text_window_t

0xc724,	// (0x0003d822) popup_snote2_single_graphic_window_g1_ParamLimits

0xc724,	// (0x0003d822) popup_snote2_single_graphic_window_g1

0xc74c,	// (0x0003d84a) popup_snote2_single_graphic_window_g2_ParamLimits

0xc74c,	// (0x0003d84a) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9c,	// (0x00040d9a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9c,	// (0x00040d9a) popup_snote2_single_graphic_window_g

0xc774,	// (0x0003d872) popup_snote2_single_graphic_window_t1_ParamLimits

0xc774,	// (0x0003d872) popup_snote2_single_graphic_window_t1

0xc7c0,	// (0x0003d8be) popup_snote2_single_graphic_window_t2_ParamLimits

0xc7c0,	// (0x0003d8be) popup_snote2_single_graphic_window_t2

0xc682,	// (0x0003d780) popup_snote2_single_graphic_window_t3_ParamLimits

0xc682,	// (0x0003d780) popup_snote2_single_graphic_window_t3

0xc6c3,	// (0x0003d7c1) popup_snote2_single_graphic_window_t4_ParamLimits

0xc6c3,	// (0x0003d7c1) popup_snote2_single_graphic_window_t4

0xc6f9,	// (0x0003d7f7) popup_snote2_single_graphic_window_t5_ParamLimits

0xc6f9,	// (0x0003d7f7) popup_snote2_single_graphic_window_t5

0x0004,

0xfca1,	// (0x00040d9f) popup_snote2_single_graphic_window_t_ParamLimits

0xfca1,	// (0x00040d9f) popup_snote2_single_graphic_window_t

0xb1e1,	// (0x0003c2df) clock_nsta_pane_cp2_t1

0xb1e1,	// (0x0003c2df) clock_nsta_pane_cp2_t2

0x0001,

0xfab5,	// (0x00040bb3) clock_nsta_pane_cp2_t

0x3d2b,	// (0x00034e29) form_field_data_wide_pane_g1_ParamLimits

0x1e23,	// (0x00032f21) form_field_data_wide_pane_g2_ParamLimits

0x1e23,	// (0x00032f21) form_field_data_wide_pane_g2

0x1e2f,	// (0x00032f2d) form_field_data_wide_pane_g3_ParamLimits

0x1e2f,	// (0x00032f2d) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00040774) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00040774) form_field_data_wide_pane_g

0xb0c0,	// (0x0003c1be) grid_touch_3_pane_ParamLimits

0xb0c0,	// (0x0003c1be) grid_touch_3_pane

0xc80c,	// (0x0003d90a) cell_touch_3_pane_ParamLimits

0xc80c,	// (0x0003d90a) cell_touch_3_pane

0xb6f1,	// (0x0003c7ef) cell_touch_3_pane_g1

0xb6f1,	// (0x0003c7ef) cell_touch_3_pane_g2

0x0001,

0xfb3a,	// (0x00040c38) cell_touch_3_pane_g

0xf17b,	// (0x00040279) cont_query_data_pane

0xf183,	// (0x00040281) cont_query_data_pane_cp1

0xc83f,	// (0x0003d93d) button_value_adjust_pane_cp7

0xc847,	// (0x0003d945) query_popup_pane_cp3

0x2357,	// (0x00033455) bg_popup_sub_pane_cp22_ParamLimits

0x651c,	// (0x0003761a) navi_navi_volume_pane_cp2

0x6537,	// (0x00037635) popup_side_volume_key_window_g2

0x6546,	// (0x00037644) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0004080a) popup_side_volume_key_window_g

0x6563,	// (0x00037661) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00040811) popup_side_volume_key_window_t

0x2562,	// (0x00033660) popup_side_volume_key_window_ParamLimits

0x5ca1,	// (0x00036d9f) list_double_graphic_pane_g4_ParamLimits

0x5ca1,	// (0x00036d9f) list_double_graphic_pane_g4

0xa6b3,	// (0x0003b7b1) list_single_2heading_msg_pane_ParamLimits

0xa6b3,	// (0x0003b7b1) list_single_2heading_msg_pane

0x79b2,	// (0x00038ab0) list_single_2heading_msg_pane_g1_ParamLimits

0x79b2,	// (0x00038ab0) list_single_2heading_msg_pane_g1

0x443c,	// (0x0003553a) list_single_2heading_msg_pane_g2_ParamLimits

0x443c,	// (0x0003553a) list_single_2heading_msg_pane_g2

0x79be,	// (0x00038abc) list_single_2heading_msg_pane_g3_ParamLimits

0x79be,	// (0x00038abc) list_single_2heading_msg_pane_g3

0x79ca,	// (0x00038ac8) list_single_2heading_msg_pane_g4_ParamLimits

0x79ca,	// (0x00038ac8) list_single_2heading_msg_pane_g4

0x0003,

0xfcac,	// (0x00040daa) list_single_2heading_msg_pane_g_ParamLimits

0xfcac,	// (0x00040daa) list_single_2heading_msg_pane_g

0x79e2,	// (0x00038ae0) list_single_2heading_msg_pane_t1_ParamLimits

0x79e2,	// (0x00038ae0) list_single_2heading_msg_pane_t1

0x7a0a,	// (0x00038b08) list_single_2heading_msg_pane_t2_ParamLimits

0x7a0a,	// (0x00038b08) list_single_2heading_msg_pane_t2

0x7a3e,	// (0x00038b3c) list_single_2heading_msg_pane_t3_ParamLimits

0x7a3e,	// (0x00038b3c) list_single_2heading_msg_pane_t3

0x46d4,	// (0x000357d2) list_single_2heading_msg_pane_t4_ParamLimits

0x46d4,	// (0x000357d2) list_single_2heading_msg_pane_t4

0x0003,

0xfcb5,	// (0x00040db3) list_single_2heading_msg_pane_t_ParamLimits

0xfcb5,	// (0x00040db3) list_single_2heading_msg_pane_t

0xe4ff,	// (0x0003f5fd) title_pane_g4_ParamLimits

0xe4ff,	// (0x0003f5fd) title_pane_g4

0x61b5,	// (0x000372b3) title_pane_stacon_g3_ParamLimits

0x61b5,	// (0x000372b3) title_pane_stacon_g3

0xc347,	// (0x0003d445) list_single_2graphic_im_pane_g4_ParamLimits

0xc347,	// (0x0003d445) list_single_2graphic_im_pane_g4

0xa16d,	// (0x0003b26b) popup_side_volume_key_window_cp

0xa9db,	// (0x0003bad9) main_idle_act2_pane_t1

0x7005,	// (0x00038103) toolbar_button_pane_g10

0x5b16,	// (0x00036c14) popup_toolbar_window_cp1

0xb1d2,	// (0x0003c2d0) clock_nsta_pane_cp_t1

0xb1d2,	// (0x0003c2d0) clock_nsta_pane_cp_t2

0x0001,

0xfab0,	// (0x00040bae) clock_nsta_pane_cp_t

0x651c,	// (0x0003761a) navi_navi_volume_pane_cp2_ParamLimits

0x652b,	// (0x00037629) popup_side_volume_key_window_g1_ParamLimits

0x6537,	// (0x00037635) popup_side_volume_key_window_g2_ParamLimits

0x6546,	// (0x00037644) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0004080a) popup_side_volume_key_window_g_ParamLimits

0x7562,	// (0x00038660) fep_hwr_aid_pane

0x760b,	// (0x00038709) bg_fep_hwr_top_pane_g4_ParamLimits

0xb752,	// (0x0003c850) fep_hwr_top_pane_g1_ParamLimits

0xb764,	// (0x0003c862) fep_hwr_top_pane_g2_ParamLimits

0x762b,	// (0x00038729) fep_hwr_top_pane_g3_ParamLimits

0xfb05,	// (0x00040c03) fep_hwr_top_pane_g_ParamLimits

0x7640,	// (0x0003873e) fep_hwr_top_text_pane_ParamLimits

0x9f22,	// (0x0003b020) aid_touch_tab_arrow_arrow_2

0x9f2b,	// (0x0003b029) aid_touch_tab_arrow_left_2

0x7576,	// (0x00038674) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x75ad,	// (0x000386ab) fep_hwr_prediction_pane

0xb8ba,	// (0x0003c9b8) fep_vkb_prediction_pane

0xb9c0,	// (0x0003cabe) fep_vkb_side_pane_g3_ParamLimits

0xb9c0,	// (0x0003cabe) fep_vkb_side_pane_g3

0x77cf,	// (0x000388cd) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7840,	// (0x0003893e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x784d,	// (0x0003894b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb4,	// (0x00040cb2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7a77,	// (0x00038b75) fep_hwr_prediction_pane_g1

0x7a81,	// (0x00038b7f) fep_hwr_prediction_pane_g2

0x7a89,	// (0x00038b87) fep_hwr_prediction_pane_g3

0x7a91,	// (0x00038b8f) fep_hwr_prediction_pane_g4

0x0003,

0xfcbe,	// (0x00040dbc) fep_hwr_prediction_pane_g

0xc86e,	// (0x0003d96c) fep_vkb_prediction_pane_g1

0xc878,	// (0x0003d976) fep_vkb_prediction_pane_g2

0xc880,	// (0x0003d97e) fep_vkb_prediction_pane_g3

0xc888,	// (0x0003d986) fep_vkb_prediction_pane_g4

0x0003,

0xfcc7,	// (0x00040dc5) fep_vkb_prediction_pane_g

0x7359,	// (0x00038457) slider_set_pane_g3

0x736d,	// (0x0003846b) slider_set_pane_g4

0x7385,	// (0x00038483) slider_set_pane_g5

0x7359,	// (0x00038457) slider_set_pane_g6

0x739b,	// (0x00038499) slider_set_pane_g7

0xa5fb,	// (0x0003b6f9) slider_form_pane_g3

0xa604,	// (0x0003b702) slider_form_pane_g4

0xa60c,	// (0x0003b70a) slider_form_pane_g5

0xa5fb,	// (0x0003b6f9) slider_form_pane_g6

0xa614,	// (0x0003b712) slider_form_pane_g7

0xac92,	// (0x0003bd90) slider_set_pane_vc_g3

0xac9b,	// (0x0003bd99) slider_set_pane_vc_g4

0xaca4,	// (0x0003bda2) slider_set_pane_vc_g5

0xac92,	// (0x0003bd90) slider_set_pane_vc_g6

0xacad,	// (0x0003bdab) slider_set_pane_vc_g7

0xae85,	// (0x0003bf83) slider_form_pane_vc_g1

0xae8e,	// (0x0003bf8c) slider_form_pane_vc_g2

0xae97,	// (0x0003bf95) slider_form_pane_vc_g3

0xae85,	// (0x0003bf83) slider_form_pane_vc_g4

0xaea0,	// (0x0003bf9e) slider_form_pane_vc_g5

0x0004,

0xfa82,	// (0x00040b80) slider_form_pane_vc_g

0xe4d5,	// (0x0003f5d3) main_idle_act3_pane

0xc890,	// (0x0003d98e) ai3_links_pane

0xc899,	// (0x0003d997) popup_ai3_data_window_ParamLimits

0xc899,	// (0x0003d997) popup_ai3_data_window

0xe4d5,	// (0x0003f5d3) grid_ai3_links_pane

0xc8b7,	// (0x0003d9b5) cell_ai3_links_pane_ParamLimits

0xc8b7,	// (0x0003d9b5) cell_ai3_links_pane

0xc8d1,	// (0x0003d9cf) bg_popup_sub_pane_cp11

0xc8de,	// (0x0003d9dc) cell_ai3_links_pane_g1

0xe4d5,	// (0x0003f5d3) bg_popup_sub_pane_cp12

0xc903,	// (0x0003da01) heading_ai3_data_pane

0xc90b,	// (0x0003da09) list_ai3_gene_pane

0xc917,	// (0x0003da15) popup_ai3_data_window_g1

0xc91f,	// (0x0003da1d) heading_ai3_data_pane_g1

0xc927,	// (0x0003da25) heading_ai3_data_pane_t1

0xc935,	// (0x0003da33) list_double_ai3_gene_pane_ParamLimits

0xc935,	// (0x0003da33) list_double_ai3_gene_pane

0xc942,	// (0x0003da40) list_single_ai3_gene_pane_ParamLimits

0xc942,	// (0x0003da40) list_single_ai3_gene_pane

0xb6b6,	// (0x0003c7b4) list_highlight_pane_cp7_ParamLimits

0xb6b6,	// (0x0003c7b4) list_highlight_pane_cp7

0xc94f,	// (0x0003da4d) list_single_a13_gene_pane_t1_ParamLimits

0xc94f,	// (0x0003da4d) list_single_a13_gene_pane_t1

0xc966,	// (0x0003da64) list_single_ai3_gene_pane_g1

0xc96f,	// (0x0003da6d) list_single_ai3_gene_pane_g2

0x0001,

0xfcd0,	// (0x00040dce) list_single_ai3_gene_pane_g

0xc977,	// (0x0003da75) list_double_ai3_gene_pane_g1_ParamLimits

0xc977,	// (0x0003da75) list_double_ai3_gene_pane_g1

0xc983,	// (0x0003da81) list_double_ai3_gene_pane_t1_ParamLimits

0xc983,	// (0x0003da81) list_double_ai3_gene_pane_t1

0xc99f,	// (0x0003da9d) list_double_ai3_gene_pane_t2_ParamLimits

0xc99f,	// (0x0003da9d) list_double_ai3_gene_pane_t2

0xc9b4,	// (0x0003dab2) list_double_ai3_gene_pane_t3_ParamLimits

0xc9b4,	// (0x0003dab2) list_double_ai3_gene_pane_t3

0x0002,

0xfcd5,	// (0x00040dd3) list_double_ai3_gene_pane_t_ParamLimits

0xfcd5,	// (0x00040dd3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x46ca,	// (0x000357c8) aid_size_min_col_2

0xc858,	// (0x0003d956) aid_size_min_msg_ParamLimits

0xc858,	// (0x0003d956) aid_size_min_msg

0xbacc,	// (0x0003cbca) fep_vkb_top_text_pane_g2_ParamLimits

0xbacc,	// (0x0003cbca) fep_vkb_top_text_pane_g2

0x0001,

0xfb35,	// (0x00040c33) fep_vkb_top_text_pane_g_ParamLimits

0xfb35,	// (0x00040c33) fep_vkb_top_text_pane_g

0xe4d5,	// (0x0003f5d3) main_hc_apps_shell_pane

0xc9d1,	// (0x0003dacf) grid_hc_apps_pane_ParamLimits

0xc9d1,	// (0x0003dacf) grid_hc_apps_pane

0xc9e0,	// (0x0003dade) list_hc_apps_pane

0xc9e8,	// (0x0003dae6) scroll_pane_cp37_ParamLimits

0xc9e8,	// (0x0003dae6) scroll_pane_cp37

0xc9f4,	// (0x0003daf2) cell_hc_apps_pane_ParamLimits

0xc9f4,	// (0x0003daf2) cell_hc_apps_pane

0xcaac,	// (0x0003dbaa) cell_hc_apps_pane_g1_ParamLimits

0xcaac,	// (0x0003dbaa) cell_hc_apps_pane_g1

0xcadd,	// (0x0003dbdb) cell_hc_apps_pane_g2_ParamLimits

0xcadd,	// (0x0003dbdb) cell_hc_apps_pane_g2

0xcaf9,	// (0x0003dbf7) cell_hc_apps_pane_g3_ParamLimits

0xcaf9,	// (0x0003dbf7) cell_hc_apps_pane_g3

0x0002,

0xfcdc,	// (0x00040dda) cell_hc_apps_pane_g_ParamLimits

0xfcdc,	// (0x00040dda) cell_hc_apps_pane_g

0xcb1b,	// (0x0003dc19) cell_hc_apps_pane_t1_ParamLimits

0xcb1b,	// (0x0003dc19) cell_hc_apps_pane_t1

0xf0c5,	// (0x000401c3) grid_highlight_pane_cp10_ParamLimits

0xf0c5,	// (0x000401c3) grid_highlight_pane_cp10

0xcb5b,	// (0x0003dc59) list_single_hc_apps_pane_ParamLimits

0xcb5b,	// (0x0003dc59) list_single_hc_apps_pane

0xcb9a,	// (0x0003dc98) list_single_hc_apps_pane_g1

0x7a99,	// (0x00038b97) list_single_hc_apps_pane_g2

0x0001,

0xfce3,	// (0x00040de1) list_single_hc_apps_pane_g

0x7ab2,	// (0x00038bb0) list_single_hc_apps_pane_g2_copy1

0x7ace,	// (0x00038bcc) list_single_hc_apps_pane_t1

0xef84,	// (0x00040082) bg_set_opt_pane_cp_ParamLimits

0x5867,	// (0x00036965) setting_slider_pane_t1_ParamLimits

0x5880,	// (0x0003697e) setting_slider_pane_t2_ParamLimits

0x589a,	// (0x00036998) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004065c) setting_slider_pane_t_ParamLimits

0x58b2,	// (0x000369b0) slider_set_pane_ParamLimits

0x6d0c,	// (0x00037e0a) control_pane_g5_ParamLimits

0x6d0c,	// (0x00037e0a) control_pane_g5

0xa428,	// (0x0003b526) slider_set_pane_g1_ParamLimits

0x734d,	// (0x0003844b) slider_set_pane_g2_ParamLimits

0x7359,	// (0x00038457) slider_set_pane_g3_ParamLimits

0x736d,	// (0x0003846b) slider_set_pane_g4_ParamLimits

0x7385,	// (0x00038483) slider_set_pane_g5_ParamLimits

0x7359,	// (0x00038457) slider_set_pane_g6_ParamLimits

0x739b,	// (0x00038499) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00040a5d) slider_set_pane_g_ParamLimits

0x260a,	// (0x00033708) navi_icon_text_pane_ParamLimits

0x8bb9,	// (0x00039cb7) aid_fill_nsta_2_ParamLimits

0x8bfa,	// (0x00039cf8) aid_touch_tab_arrow_left_ParamLimits

0x8c09,	// (0x00039d07) aid_touch_tab_arrow_right_ParamLimits

0x8c76,	// (0x00039d74) clock_nsta_pane_ParamLimits

0x9f04,	// (0x0003b002) navi_icon_pane_g1_ParamLimits

0x9f10,	// (0x0003b00e) navi_text_pane_t1_ParamLimits

0xb2ef,	// (0x0003c3ed) navi_icon_text_pane_g1_ParamLimits

0xb2fb,	// (0x0003c3f9) navi_icon_text_pane_t1_ParamLimits

0xcb9a,	// (0x0003dc98) list_single_hc_apps_pane_g1_ParamLimits

0x7a99,	// (0x00038b97) list_single_hc_apps_pane_g2_ParamLimits

0xfce3,	// (0x00040de1) list_single_hc_apps_pane_g_ParamLimits

0x7ab2,	// (0x00038bb0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7ace,	// (0x00038bcc) list_single_hc_apps_pane_t1_ParamLimits

0x56af,	// (0x000367ad) popup_toolbar2_fixed_window_ParamLimits

0x56af,	// (0x000367ad) popup_toolbar2_fixed_window

0x8abd,	// (0x00039bbb) popup_toolbar2_float_window

0xe4d5,	// (0x0003f5d3) bg_popup_sub_pane_cp27

0xcbb3,	// (0x0003dcb1) grid_toolbar2_float_pane

0xe4d5,	// (0x0003f5d3) bg_popup_sub_pane_cp26

0xcbb3,	// (0x0003dcb1) grid_toolbar2_fixed_pane

0xcbbb,	// (0x0003dcb9) cell_toolbar2_fixed_pane_ParamLimits

0xcbbb,	// (0x0003dcb9) cell_toolbar2_fixed_pane

0xcbcb,	// (0x0003dcc9) cell_toolbar2_fixed_pane_g1

0xcbd4,	// (0x0003dcd2) toolbar2_fixed_button_pane

0x90ad,	// (0x0003a1ab) toolbar2_fixed_button_pane_g1

0x90bd,	// (0x0003a1bb) toolbar2_fixed_button_pane_g2

0x90b5,	// (0x0003a1b3) toolbar2_fixed_button_pane_g3

0x90cd,	// (0x0003a1cb) toolbar2_fixed_button_pane_g4

0x90c5,	// (0x0003a1c3) toolbar2_fixed_button_pane_g5

0x90d5,	// (0x0003a1d3) toolbar2_fixed_button_pane_g6

0x90dd,	// (0x0003a1db) toolbar2_fixed_button_pane_g7

0x90ed,	// (0x0003a1eb) toolbar2_fixed_button_pane_g8

0x90e5,	// (0x0003a1e3) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0004095f) toolbar2_fixed_button_pane_g

0xcbdc,	// (0x0003dcda) cell_toolbar2_float_pane_ParamLimits

0xcbdc,	// (0x0003dcda) cell_toolbar2_float_pane

0xcbed,	// (0x0003dceb) cell_toolbar2_float_pane_g1

0xcbd4,	// (0x0003dcd2) toolbar2_fixed_button_pane_cp

0xb828,	// (0x0003c926) fep_vkb_accented_list_pane_ParamLimits

0xb828,	// (0x0003c926) fep_vkb_accented_list_pane

0x77af,	// (0x000388ad) bg_popup_fep_shadow_pane_g9

0x6936,	// (0x00037a34) bg_popup_fep_shadow_pane_cp3

0x1f28,	// (0x00033026) list_accented_list_pane

0xcbf6,	// (0x0003dcf4) list_single_accented_list_pane_ParamLimits

0xcbf6,	// (0x0003dcf4) list_single_accented_list_pane

0x6936,	// (0x00037a34) list_highlight_pane_cp10

0xcc07,	// (0x0003dd05) list_single_accented_list_pane_t1

0x8a03,	// (0x00039b01) popup_slider_window_ParamLimits

0x8a03,	// (0x00039b01) popup_slider_window

0xc84f,	// (0x0003d94d) aid_indentation_list_msg

0xccd3,	// (0x0003ddd1) bg_popup_window_pane_cp19

0xcd41,	// (0x0003de3f) popup_slider_window_g1

0xcd5d,	// (0x0003de5b) popup_slider_window_g2

0xcd79,	// (0x0003de77) popup_slider_window_g3

0x0005,

0xfce8,	// (0x00040de6) popup_slider_window_g

0xcdd5,	// (0x0003ded3) popup_slider_window_t1

0xce49,	// (0x0003df47) small_volume_slider_vertical_pane

0xb6f1,	// (0x0003c7ef) small_volume_slider_vertical_pane_g1

0xb6f1,	// (0x0003c7ef) small_volume_slider_vertical_pane_g2

0xce65,	// (0x0003df63) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfa,	// (0x00040df8) small_volume_slider_vertical_pane_g

0x545d,	// (0x0003655b) area_side_right_pane_ParamLimits

0x545d,	// (0x0003655b) area_side_right_pane

0x7afc,	// (0x00038bfa) aid_size_side_button_ParamLimits

0x7afc,	// (0x00038bfa) aid_size_side_button

0x7b10,	// (0x00038c0e) grid_sctrl_middle_pane_ParamLimits

0x7b10,	// (0x00038c0e) grid_sctrl_middle_pane

0x7b30,	// (0x00038c2e) sctrl_sk_bottom_pane

0x7b41,	// (0x00038c3f) sctrl_sk_top_pane

0x7b53,	// (0x00038c51) aid_touch_sctrl_top

0x7b60,	// (0x00038c5e) bg_sctrl_sk_pane_ParamLimits

0x7b60,	// (0x00038c5e) bg_sctrl_sk_pane

0x7b6e,	// (0x00038c6c) sctrl_sk_top_pane_g1

0x7b7b,	// (0x00038c79) sctrl_sk_top_pane_t1

0x7b53,	// (0x00038c51) aid_touch_sctrl_bottom

0x7b60,	// (0x00038c5e) bg_sctrl_sk_pane_cp_ParamLimits

0x7b60,	// (0x00038c5e) bg_sctrl_sk_pane_cp

0x7b96,	// (0x00038c94) sctrl_sk_bottom_pane_g1

0x7b7b,	// (0x00038c79) sctrl_sk_bottom_pane_t1

0x7b9f,	// (0x00038c9d) cell_sctrl_middle_pane_ParamLimits

0x7b9f,	// (0x00038c9d) cell_sctrl_middle_pane

0x7bbc,	// (0x00038cba) aid_touch_sctrl_middle_ParamLimits

0x7bbc,	// (0x00038cba) aid_touch_sctrl_middle

0x7bce,	// (0x00038ccc) bg_sctrl_middle_pane_ParamLimits

0x7bce,	// (0x00038ccc) bg_sctrl_middle_pane

0x77cf,	// (0x000388cd) cell_sctrl_middle_pane_g1_ParamLimits

0x77cf,	// (0x000388cd) cell_sctrl_middle_pane_g1

0x7bdc,	// (0x00038cda) cell_sctrl_middle_pane_g2_ParamLimits

0x7bdc,	// (0x00038cda) cell_sctrl_middle_pane_g2

0x0001,

0xfd06,	// (0x00040e04) cell_sctrl_middle_pane_g_ParamLimits

0xfd06,	// (0x00040e04) cell_sctrl_middle_pane_g

0x90ad,	// (0x0003a1ab) bg_sctrl_middle_pane_g1

0x90b5,	// (0x0003a1b3) bg_sctrl_middle_pane_g2

0x90bd,	// (0x0003a1bb) bg_sctrl_middle_pane_g3

0x90c5,	// (0x0003a1c3) bg_sctrl_middle_pane_g4

0x90cd,	// (0x0003a1cb) bg_sctrl_middle_pane_g5

0x90d5,	// (0x0003a1d3) bg_sctrl_middle_pane_g6

0x90dd,	// (0x0003a1db) bg_sctrl_middle_pane_g7

0x90e5,	// (0x0003a1e3) bg_sctrl_middle_pane_g8

0x0007,

0xfd0b,	// (0x00040e09) bg_sctrl_middle_pane_g

0x90ed,	// (0x0003a1eb) bg_sctrl_middle_pane_g8_copy1

0x90ad,	// (0x0003a1ab) bg_sctrl_sk_pane_g1

0x90bd,	// (0x0003a1bb) bg_sctrl_sk_pane_g2

0x90b5,	// (0x0003a1b3) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0004095f) bg_sctrl_sk_pane_g

0xf4e0,	// (0x000405de) aid_size_touch_scroll_bar

0x90cd,	// (0x0003a1cb) bg_sctrl_sk_pane_g4

0x90c5,	// (0x0003a1c3) bg_sctrl_sk_pane_g5

0x90d5,	// (0x0003a1d3) bg_sctrl_sk_pane_g6

0x90dd,	// (0x0003a1db) bg_sctrl_sk_pane_g7

0x90ed,	// (0x0003a1eb) bg_sctrl_sk_pane_g8

0x90e5,	// (0x0003a1e3) bg_sctrl_sk_pane_g9

0x6f55,	// (0x00038053) popup_fep_china_hwr2_fs_candidate_window

0x6f5f,	// (0x0003805d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6f5f,	// (0x0003805d) popup_fep_china_hwr2_fs_control_window

0x77cf,	// (0x000388cd) sctrl_sk_top_pane_g2

0x0001,

0xfd01,	// (0x00040dff) sctrl_sk_top_pane_g

0xce6e,	// (0x0003df6c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xce6e,	// (0x0003df6c) aid_fep_china_hwr2_fs_cell

0xce81,	// (0x0003df7f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xce81,	// (0x0003df7f) bg_popup_fep_shadow_pane_cp4

0xce9a,	// (0x0003df98) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xce9a,	// (0x0003df98) bg_popup_fep_shadow_pane_cp5

0xceac,	// (0x0003dfaa) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xceac,	// (0x0003dfaa) popup_fep_china_hwr2_fs_control_bar_grid

0xcebc,	// (0x0003dfba) popup_fep_china_hwr2_fs_control_funtion_grid

0xcec4,	// (0x0003dfc2) aid_fep_china_hwr2_fs_candi_cell

0xe4d5,	// (0x0003f5d3) bg_popup_fep_shadow_pane_cp6

0xcece,	// (0x0003dfcc) popup_fep_china_hwr2_fs_candidate_grid

0xced8,	// (0x0003dfd6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xced8,	// (0x0003dfd6) cell_fep_china_hwr2_fs_funtion_grid

0xb6f1,	// (0x0003c7ef) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcef0,	// (0x0003dfee) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcef0,	// (0x0003dfee) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcefe,	// (0x0003dffc) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcefe,	// (0x0003dffc) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1c,	// (0x00040e1a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1c,	// (0x00040e1a) cell_fep_china_hwr2_fs_funtion_grid_g

0xcf14,	// (0x0003e012) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcf14,	// (0x0003e012) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcf29,	// (0x0003e027) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcf29,	// (0x0003e027) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd21,	// (0x00040e1f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd21,	// (0x00040e1f) cell_fep_china_hwr2_fs_funtion_grid_t

0xcf45,	// (0x0003e043) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcf4d,	// (0x0003e04b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcf55,	// (0x0003e053) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd26,	// (0x00040e24) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcf5d,	// (0x0003e05b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcf5d,	// (0x0003e05b) cell_fep_china_hwr2_fs_candidate_grid

0xcf7c,	// (0x0003e07a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcf84,	// (0x0003e082) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb6f1,	// (0x0003c7ef) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb6f1,	// (0x0003c7ef) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3a,	// (0x00040c38) cell_fep_china_hwr2_fs_candidate_grid_g

0xcf8c,	// (0x0003e08a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8c89,	// (0x00039d87) clock_nsta_pane_cp_24_ParamLimits

0x8c89,	// (0x00039d87) clock_nsta_pane_cp_24

0x8d09,	// (0x00039e07) indicator_nsta_pane_cp_24_ParamLimits

0x8d09,	// (0x00039e07) indicator_nsta_pane_cp_24

0x9d80,	// (0x0003ae7e) heading_pane_g1

0x0001,

0xf8c6,	// (0x000409c4) heading_pane_g

0xa822,	// (0x0003b920) grid_sct_catagory_button_pane

0xa854,	// (0x0003b952) scroll_pane_cp5_ParamLimits

0xb33d,	// (0x0003c43b) button_value_adjust_pane_cp5_ParamLimits

0xb33d,	// (0x0003c43b) button_value_adjust_pane_cp5

0xb422,	// (0x0003c520) form2_midp_time_pane_ParamLimits

0xcf9a,	// (0x0003e098) cell_sct_catagory_button_pane_ParamLimits

0xcf9a,	// (0x0003e098) cell_sct_catagory_button_pane

0xb6b6,	// (0x0003c7b4) bg_button_pane_cp01_ParamLimits

0xb6b6,	// (0x0003c7b4) bg_button_pane_cp01

0xb6f1,	// (0x0003c7ef) cell_sct_catagory_button_pane_g1

0x8a44,	// (0x00039b42) popup_tb_extension_window

0xcfac,	// (0x0003e0aa) aid_size_cell_ext_ParamLimits

0xcfac,	// (0x0003e0aa) aid_size_cell_ext

0xf0c5,	// (0x000401c3) bg_tb_trans_pane_cp1_ParamLimits

0xf0c5,	// (0x000401c3) bg_tb_trans_pane_cp1

0xcfcc,	// (0x0003e0ca) grid_tb_ext_pane_ParamLimits

0xcfcc,	// (0x0003e0ca) grid_tb_ext_pane

0xcffc,	// (0x0003e0fa) cell_tb_ext_pane_ParamLimits

0xcffc,	// (0x0003e0fa) cell_tb_ext_pane

0xd013,	// (0x0003e111) cell_tb_ext_pane_g1_ParamLimits

0xd013,	// (0x0003e111) cell_tb_ext_pane_g1

0xd030,	// (0x0003e12e) cell_tb_ext_pane_t1

0xf0c5,	// (0x000401c3) list_highlight_pane_cp11_ParamLimits

0xf0c5,	// (0x000401c3) list_highlight_pane_cp11

0x56ce,	// (0x000367cc) popup_uni_indicator_window_ParamLimits

0x56ce,	// (0x000367cc) popup_uni_indicator_window

0x1e15,	// (0x00032f13) bg_popup_sub_pane_cp14

0xd04b,	// (0x0003e149) list_uniindi_pane

0xd057,	// (0x0003e155) uniindi_top_pane

0xf0c5,	// (0x000401c3) bg_uniindi_top_pane

0xd078,	// (0x0003e176) uniindi_top_pane_g1

0xd08e,	// (0x0003e18c) uniindi_top_pane_g2

0x0003,

0xfd2d,	// (0x00040e2b) uniindi_top_pane_g

0xd0b8,	// (0x0003e1b6) uniindi_top_pane_t1

0xd0e4,	// (0x0003e1e2) list_single_uniindi_pane_ParamLimits

0xd0e4,	// (0x0003e1e2) list_single_uniindi_pane

0xb6f1,	// (0x0003c7ef) bg_uniindi_top_pane_g1

0xd0f6,	// (0x0003e1f4) list_single_uniindi_pane_g1

0xd109,	// (0x0003e207) list_single_uniindi_pane_t1

0x553a,	// (0x00036638) control_bg_pane

0xd12e,	// (0x0003e22c) bg_sctrl_sk_pane_cp1

0xd137,	// (0x0003e235) bg_sctrl_sk_pane_cp2

0xd140,	// (0x0003e23e) control_bg_pane_g1

0xd149,	// (0x0003e247) control_bg_pane_g2

0x0001,

0xfd36,	// (0x00040e34) control_bg_pane_g

0xb164,	// (0x0003c262) cell_indicator_nsta_pane_g1_ParamLimits

0xb172,	// (0x0003c270) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9e,	// (0x00040b9c) cell_indicator_nsta_pane_g_ParamLimits

0x425b,	// (0x00035359) form2_midp_time_pane_t1_ParamLimits

0xf322,	// (0x00040420) main_idle_act4_pane_ParamLimits

0xf322,	// (0x00040420) main_idle_act4_pane

0x8a44,	// (0x00039b42) popup_tb_extension_window_ParamLimits

0xcfee,	// (0x0003e0ec) tb_ext_find_pane_ParamLimits

0xcfee,	// (0x0003e0ec) tb_ext_find_pane

0xd152,	// (0x0003e250) ai_gene_pane_1_cp1

0x6a73,	// (0x00037b71) ai_gene_pane_2_cp1

0xd15a,	// (0x0003e258) list_single_idle_plugin_calendar_pane

0xd163,	// (0x0003e261) list_single_idle_plugin_notification_pane

0xd16c,	// (0x0003e26a) list_single_idle_plugin_player_pane

0xd175,	// (0x0003e273) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd175,	// (0x0003e273) list_single_idle_plugin_shortcut_pane

0xd197,	// (0x0003e295) main_idle_act4_pane_t1

0xd1a9,	// (0x0003e2a7) main_idle_act4_pane_t2

0x0001,

0xfd3b,	// (0x00040e39) main_idle_act4_pane_t

0xd1bb,	// (0x0003e2b9) middle_sk_idle_act4_pane_ParamLimits

0xd1bb,	// (0x0003e2b9) middle_sk_idle_act4_pane

0xd1d1,	// (0x0003e2cf) popup_clock_digital_analogue_window_cp2

0xd1eb,	// (0x0003e2e9) shortcut_wheel_idle_act4_pane_ParamLimits

0xd1eb,	// (0x0003e2e9) shortcut_wheel_idle_act4_pane

0xb6f1,	// (0x0003c7ef) shortcut_wheel_idle_act4_pane_g1

0xb6f1,	// (0x0003c7ef) shortcut_wheel_idle_act4_pane_g2

0xb6f1,	// (0x0003c7ef) shortcut_wheel_idle_act4_pane_g3

0xb6f1,	// (0x0003c7ef) shortcut_wheel_idle_act4_pane_g4

0xb6f1,	// (0x0003c7ef) shortcut_wheel_idle_act4_pane_g5

0xd1ff,	// (0x0003e2fd) shortcut_wheel_idle_act4_pane_g6

0xd207,	// (0x0003e305) shortcut_wheel_idle_act4_pane_g7

0xd20f,	// (0x0003e30d) shortcut_wheel_idle_act4_pane_g8

0xd217,	// (0x0003e315) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd40,	// (0x00040e3e) shortcut_wheel_idle_act4_pane_g

0xb96c,	// (0x0003ca6a) middle_sk_idle_act4_pane_g1_ParamLimits

0xb96c,	// (0x0003ca6a) middle_sk_idle_act4_pane_g1

0xd27b,	// (0x0003e379) middle_sk_idle_act4_pane_g2_ParamLimits

0xd27b,	// (0x0003e379) middle_sk_idle_act4_pane_g2

0x0001,

0xfd63,	// (0x00040e61) middle_sk_idle_act4_pane_g_ParamLimits

0xfd63,	// (0x00040e61) middle_sk_idle_act4_pane_g

0xd287,	// (0x0003e385) middle_sk_idle_act4_pane_t1_ParamLimits

0xd287,	// (0x0003e385) middle_sk_idle_act4_pane_t1

0xd2a4,	// (0x0003e3a2) grid_ai_shortcut_pane_ParamLimits

0xd2a4,	// (0x0003e3a2) grid_ai_shortcut_pane

0xd2bd,	// (0x0003e3bb) list_highlight_pane_cp16_ParamLimits

0xd2bd,	// (0x0003e3bb) list_highlight_pane_cp16

0xd2ca,	// (0x0003e3c8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd2ca,	// (0x0003e3c8) list_single_idle_plugin_shortcut_pane_g1

0xd2d6,	// (0x0003e3d4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd2d6,	// (0x0003e3d4) list_single_idle_plugin_shortcut_pane_g2

0xd2f0,	// (0x0003e3ee) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd2f0,	// (0x0003e3ee) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd68,	// (0x00040e66) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd68,	// (0x00040e66) list_single_idle_plugin_shortcut_pane_g

0xd303,	// (0x0003e401) cell_ai_shortcut_pane_ParamLimits

0xd303,	// (0x0003e401) cell_ai_shortcut_pane

0xd326,	// (0x0003e424) cell_ai_shortcut_pane_g1_ParamLimits

0xd326,	// (0x0003e424) cell_ai_shortcut_pane_g1

0xd152,	// (0x0003e250) ai_gene_pane_1_cp2

0xd348,	// (0x0003e446) ai_gene_pane_2_cp2

0xd350,	// (0x0003e44e) list_highlight_pane_cp15

0xd359,	// (0x0003e457) list_single_idle_plugin_calendar_pane_g1

0xd350,	// (0x0003e44e) list_highlight_pane_cp17

0xd361,	// (0x0003e45f) list_single_idle_plugin_calendar_pane_g1_copy1

0xd369,	// (0x0003e467) list_single_idle_plugin_player_pane_g1

0xaa89,	// (0x0003bb87) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6f,	// (0x00040e6d) list_single_idle_plugin_player_pane_g

0xd371,	// (0x0003e46f) list_single_idle_plugin_player_pane_t1

0xd37f,	// (0x0003e47d) list_single_idle_plugin_player_pane_t2

0xd38d,	// (0x0003e48b) list_single_idle_plugin_player_pane_t3

0xd39b,	// (0x0003e499) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd74,	// (0x00040e72) list_single_idle_plugin_player_pane_t

0xd3a9,	// (0x0003e4a7) wait_bar_pane_cp15

0xd3b1,	// (0x0003e4af) grid_ai_notification_pane

0xaa89,	// (0x0003bb87) list_single_idle_plugin_notification_pane_g1

0xd3ba,	// (0x0003e4b8) cell_ai_notification_pane_ParamLimits

0xd3ba,	// (0x0003e4b8) cell_ai_notification_pane

0xd3c7,	// (0x0003e4c5) cell_ai_notification_pane_g1

0xd3cf,	// (0x0003e4cd) cell_ai_notification_pane_t1

0xd3dd,	// (0x0003e4db) tb_ext_find_button_pane

0xd3e5,	// (0x0003e4e3) tb_ext_find_pane_g1

0xd3ed,	// (0x0003e4eb) tb_ext_find_pane_t1

0x22f7,	// (0x000333f5) tb_ext_find_button_pane_g1

0xd3fb,	// (0x0003e4f9) tb_ext_find_button_pane_g2

0x0001,

0xfd7d,	// (0x00040e7b) tb_ext_find_button_pane_g

0xd197,	// (0x0003e295) main_idle_act4_pane_t1_ParamLimits

0xd1a9,	// (0x0003e2a7) main_idle_act4_pane_t2_ParamLimits

0xfd3b,	// (0x00040e39) main_idle_act4_pane_t_ParamLimits

0xd1d1,	// (0x0003e2cf) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd1df,	// (0x0003e2dd) sat_plugin_idle_act4_pane_ParamLimits

0xd1df,	// (0x0003e2dd) sat_plugin_idle_act4_pane

0xd404,	// (0x0003e502) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd404,	// (0x0003e502) sat_plugin_idle_act4_pane_t1

0xd417,	// (0x0003e515) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd417,	// (0x0003e515) sat_plugin_idle_act4_pane_t2

0xd42a,	// (0x0003e528) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd42a,	// (0x0003e528) sat_plugin_idle_act4_pane_t3

0xd43d,	// (0x0003e53b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd43d,	// (0x0003e53b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd82,	// (0x00040e80) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd82,	// (0x00040e80) sat_plugin_idle_act4_pane_t

0x55ff,	// (0x000366fd) popup_battery_window_ParamLimits

0x55ff,	// (0x000366fd) popup_battery_window

0xf0c5,	// (0x000401c3) bg_popup_sub_pane_cp25_ParamLimits

0xf0c5,	// (0x000401c3) bg_popup_sub_pane_cp25

0xd450,	// (0x0003e54e) popup_battery_window_g1_ParamLimits

0xd450,	// (0x0003e54e) popup_battery_window_g1

0xd45c,	// (0x0003e55a) popup_battery_window_t1_ParamLimits

0xd45c,	// (0x0003e55a) popup_battery_window_t1

0xd46e,	// (0x0003e56c) popup_battery_window_t2_ParamLimits

0xd46e,	// (0x0003e56c) popup_battery_window_t2

0x0001,

0xfd8b,	// (0x00040e89) popup_battery_window_t_ParamLimits

0xfd8b,	// (0x00040e89) popup_battery_window_t

0x693e,	// (0x00037a3c) midp_canvas_pane_ParamLimits

0x69b5,	// (0x00037ab3) midp_keypad_pane_ParamLimits

0x69b5,	// (0x00037ab3) midp_keypad_pane

0x6ea7,	// (0x00037fa5) main_midp_pane_ParamLimits

0xb1f0,	// (0x0003c2ee) signal_pane_g2_cp_ParamLimits

0xd48b,	// (0x0003e589) aid_size_cell_midp_keypad_ParamLimits

0xd48b,	// (0x0003e589) aid_size_cell_midp_keypad

0xd4a5,	// (0x0003e5a3) midp_keyp_game_grid_pane_ParamLimits

0xd4a5,	// (0x0003e5a3) midp_keyp_game_grid_pane

0xd4c5,	// (0x0003e5c3) midp_keyp_rocker_pane_ParamLimits

0xd4c5,	// (0x0003e5c3) midp_keyp_rocker_pane

0xd4f0,	// (0x0003e5ee) midp_keyp_sk_left_pane_ParamLimits

0xd4f0,	// (0x0003e5ee) midp_keyp_sk_left_pane

0xd54a,	// (0x0003e648) midp_keyp_sk_right_pane_ParamLimits

0xd54a,	// (0x0003e648) midp_keyp_sk_right_pane

0xe4d5,	// (0x0003f5d3) bg_button_pane_cp03

0xd5a4,	// (0x0003e6a2) midp_keyp_sk_left_pane_g1

0xe4d5,	// (0x0003f5d3) bg_button_pane_cp04

0xd5a4,	// (0x0003e6a2) midp_keyp_sk_right_pane_g1

0xb6f1,	// (0x0003c7ef) midp_keyp_rocker_pane_g1

0xd5ad,	// (0x0003e6ab) keyp_game_cell_pane_ParamLimits

0xd5ad,	// (0x0003e6ab) keyp_game_cell_pane

0xe4d5,	// (0x0003f5d3) bg_button_pane_cp02

0xd5c0,	// (0x0003e6be) keyp_game_cell_pane_g1

0x5649,	// (0x00036747) popup_fep_vkb2_window_ParamLimits

0x5649,	// (0x00036747) popup_fep_vkb2_window

0x7bfa,	// (0x00038cf8) aid_size_cell_vkb2_ParamLimits

0x7bfa,	// (0x00038cf8) aid_size_cell_vkb2

0x7c4e,	// (0x00038d4c) popup_fep_vkb2_window_g1_ParamLimits

0x7c4e,	// (0x00038d4c) popup_fep_vkb2_window_g1

0x7c96,	// (0x00038d94) vkb2_area_bottom_pane_ParamLimits

0x7c96,	// (0x00038d94) vkb2_area_bottom_pane

0x7cea,	// (0x00038de8) vkb2_area_keypad_pane_ParamLimits

0x7cea,	// (0x00038de8) vkb2_area_keypad_pane

0x7d30,	// (0x00038e2e) vkb2_area_top_pane_ParamLimits

0x7d30,	// (0x00038e2e) vkb2_area_top_pane

0x7daa,	// (0x00038ea8) vkb2_top_entry_pane_ParamLimits

0x7daa,	// (0x00038ea8) vkb2_top_entry_pane

0x7dd4,	// (0x00038ed2) vkb2_top_grid_left_pane_ParamLimits

0x7dd4,	// (0x00038ed2) vkb2_top_grid_left_pane

0x7df2,	// (0x00038ef0) vkb2_top_grid_right_pane_ParamLimits

0x7df2,	// (0x00038ef0) vkb2_top_grid_right_pane

0x7e10,	// (0x00038f0e) vkb2_cell_keypad_pane_ParamLimits

0x7e10,	// (0x00038f0e) vkb2_cell_keypad_pane

0x7ee1,	// (0x00038fdf) vkb2_area_bottom_grid_pane_ParamLimits

0x7ee1,	// (0x00038fdf) vkb2_area_bottom_grid_pane

0x7f07,	// (0x00039005) vkb2_area_bottom_pane_g1_ParamLimits

0x7f07,	// (0x00039005) vkb2_area_bottom_pane_g1

0x7f2b,	// (0x00039029) vkb2_area_bottom_pane_g2_ParamLimits

0x7f2b,	// (0x00039029) vkb2_area_bottom_pane_g2

0x7f59,	// (0x00039057) vkb2_area_bottom_pane_g3_ParamLimits

0x7f59,	// (0x00039057) vkb2_area_bottom_pane_g3

0x0002,

0xfd90,	// (0x00040e8e) vkb2_area_bottom_pane_g_ParamLimits

0xfd90,	// (0x00040e8e) vkb2_area_bottom_pane_g

0x7fba,	// (0x000390b8) vkb2_top_cell_left_pane_ParamLimits

0x7fba,	// (0x000390b8) vkb2_top_cell_left_pane

0xd5d1,	// (0x0003e6cf) vkb2_top_entry_pane_g1_ParamLimits

0xd5d1,	// (0x0003e6cf) vkb2_top_entry_pane_g1

0xd5df,	// (0x0003e6dd) vkb2_top_entry_pane_t1_ParamLimits

0xd5df,	// (0x0003e6dd) vkb2_top_entry_pane_t1

0xd611,	// (0x0003e70f) vkb2_top_entry_pane_t2_ParamLimits

0xd611,	// (0x0003e70f) vkb2_top_entry_pane_t2

0xd643,	// (0x0003e741) vkb2_top_entry_pane_t3_ParamLimits

0xd643,	// (0x0003e741) vkb2_top_entry_pane_t3

0x0002,

0xfd97,	// (0x00040e95) vkb2_top_entry_pane_t_ParamLimits

0xfd97,	// (0x00040e95) vkb2_top_entry_pane_t

0x8007,	// (0x00039105) vkb2_top_grid_right_pane_g1_ParamLimits

0x8007,	// (0x00039105) vkb2_top_grid_right_pane_g1

0x801d,	// (0x0003911b) vkb2_top_grid_right_pane_g2_ParamLimits

0x801d,	// (0x0003911b) vkb2_top_grid_right_pane_g2

0x8035,	// (0x00039133) vkb2_top_grid_right_pane_g3_ParamLimits

0x8035,	// (0x00039133) vkb2_top_grid_right_pane_g3

0x804d,	// (0x0003914b) vkb2_top_grid_right_pane_g4_ParamLimits

0x804d,	// (0x0003914b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9e,	// (0x00040e9c) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9e,	// (0x00040e9c) vkb2_top_grid_right_pane_g

0x8063,	// (0x00039161) vkb2_top_cell_left_pane_g1

0x807a,	// (0x00039178) vkb2_cell_keypad_pane_g1_ParamLimits

0x807a,	// (0x00039178) vkb2_cell_keypad_pane_g1

0xd667,	// (0x0003e765) vkb2_cell_keypad_pane_t1_ParamLimits

0xd667,	// (0x0003e765) vkb2_cell_keypad_pane_t1

0x8088,	// (0x00039186) vkb2_cell_bottom_grid_pane_ParamLimits

0x8088,	// (0x00039186) vkb2_cell_bottom_grid_pane

0x80c1,	// (0x000391bf) vkb2_cell_bottom_grid_pane_g1

0xd21f,	// (0x0003e31d) aid_call2_pane_cp02

0xd227,	// (0x0003e325) aid_call_pane_cp02

0xd22f,	// (0x0003e32d) clock_digital_number_pane_cp10

0xd237,	// (0x0003e335) clock_digital_number_pane_cp11

0xd23f,	// (0x0003e33d) clock_digital_number_pane_cp12

0xd247,	// (0x0003e345) clock_digital_number_pane_cp13

0xd24f,	// (0x0003e34d) clock_digital_separator_pane_cp10

0x22f7,	// (0x000333f5) popup_clock_digital_analogue_window_cp2_g1

0x22f7,	// (0x000333f5) popup_clock_digital_analogue_window_cp2_g2

0xd257,	// (0x0003e355) popup_clock_digital_analogue_window_cp2_g3

0x22f7,	// (0x000333f5) popup_clock_digital_analogue_window_cp2_g4

0xd257,	// (0x0003e355) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd53,	// (0x00040e51) popup_clock_digital_analogue_window_cp2_g

0xd25f,	// (0x0003e35d) popup_clock_digital_analogue_window_cp2_t1

0xd26d,	// (0x0003e36b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5e,	// (0x00040e5c) popup_clock_digital_analogue_window_cp2_t

0xb6f1,	// (0x0003c7ef) clock_digital_number_pane_cp10_g1

0xb6f1,	// (0x0003c7ef) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3a,	// (0x00040c38) clock_digital_number_pane_cp10_g

0xb6f1,	// (0x0003c7ef) clock_digital_separator_pane_cp10_g1

0xb6f1,	// (0x0003c7ef) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3a,	// (0x00040c38) clock_digital_separator_pane_cp10_g

0xd09a,	// (0x0003e198) uniindi_top_pane_g3

0xd0ab,	// (0x0003e1a9) uniindi_top_pane_g4

0x7e9b,	// (0x00038f99) vkb2_row_keypad_pane_ParamLimits

0x7e9b,	// (0x00038f99) vkb2_row_keypad_pane

0x80dd,	// (0x000391db) vkb2_cell_t_keypad_pane_ParamLimits

0x80dd,	// (0x000391db) vkb2_cell_t_keypad_pane

0x80ed,	// (0x000391eb) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x80ed,	// (0x000391eb) vkb2_cell_t_keypad_pane_cp08

0x8102,	// (0x00039200) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8102,	// (0x00039200) vkb2_cell_t_keypad_pane_cp09

0x8116,	// (0x00039214) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8116,	// (0x00039214) vkb2_cell_t_keypad_pane_cp01

0x8127,	// (0x00039225) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8127,	// (0x00039225) vkb2_cell_t_keypad_pane_cp02

0x8138,	// (0x00039236) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8138,	// (0x00039236) vkb2_cell_t_keypad_pane_cp03

0x8149,	// (0x00039247) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8149,	// (0x00039247) vkb2_cell_t_keypad_pane_cp04

0x815a,	// (0x00039258) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x815a,	// (0x00039258) vkb2_cell_t_keypad_pane_cp05

0x816b,	// (0x00039269) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x816b,	// (0x00039269) vkb2_cell_t_keypad_pane_cp06

0x817e,	// (0x0003927c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x817e,	// (0x0003927c) vkb2_cell_t_keypad_pane_cp07

0x8193,	// (0x00039291) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8193,	// (0x00039291) vkb2_cell_t_keypad_pane_cp10

0x77cf,	// (0x000388cd) vkb2_cell_t_keypad_pane_g1

0xd67e,	// (0x0003e77c) vkb2_cell_t_keypad_pane_t1

0x553a,	// (0x00036638) popup_grid_graphic2_window

0xd690,	// (0x0003e78e) aid_size_cell_graphic2_ParamLimits

0xd690,	// (0x0003e78e) aid_size_cell_graphic2

0xd6c8,	// (0x0003e7c6) bg_popup_window_pane_cp21_ParamLimits

0xd6c8,	// (0x0003e7c6) bg_popup_window_pane_cp21

0xd6d6,	// (0x0003e7d4) graphic2_pages_pane_ParamLimits

0xd6d6,	// (0x0003e7d4) graphic2_pages_pane

0xd71c,	// (0x0003e81a) grid_graphic2_control_pane_ParamLimits

0xd71c,	// (0x0003e81a) grid_graphic2_control_pane

0xd75a,	// (0x0003e858) grid_graphic2_pane_ParamLimits

0xd75a,	// (0x0003e858) grid_graphic2_pane

0xd7d0,	// (0x0003e8ce) cell_graphic2_pane

0xe4d5,	// (0x0003f5d3) main_comp_mode_pane

0xc90b,	// (0x0003da09) list_ai3_gene_pane_ParamLimits

0xccd3,	// (0x0003ddd1) bg_popup_window_pane_cp19_ParamLimits

0xccdf,	// (0x0003dddd) bg_touch_area_indi_pane_ParamLimits

0xccdf,	// (0x0003dddd) bg_touch_area_indi_pane

0xccf5,	// (0x0003ddf3) bg_touch_area_indi_pane_cp01_ParamLimits

0xccf5,	// (0x0003ddf3) bg_touch_area_indi_pane_cp01

0xcd0d,	// (0x0003de0b) bg_touch_area_indi_pane_cp02_ParamLimits

0xcd0d,	// (0x0003de0b) bg_touch_area_indi_pane_cp02

0xcd27,	// (0x0003de25) bg_touch_area_indi_pane_cp03_ParamLimits

0xcd27,	// (0x0003de25) bg_touch_area_indi_pane_cp03

0xcd41,	// (0x0003de3f) popup_slider_window_g1_ParamLimits

0xcd5d,	// (0x0003de5b) popup_slider_window_g2_ParamLimits

0xcd79,	// (0x0003de77) popup_slider_window_g3_ParamLimits

0xfce8,	// (0x00040de6) popup_slider_window_g_ParamLimits

0xcdd5,	// (0x0003ded3) popup_slider_window_t1_ParamLimits

0xce49,	// (0x0003df47) small_volume_slider_vertical_pane_ParamLimits

0xd7d0,	// (0x0003e8ce) cell_graphic2_pane_ParamLimits

0xd822,	// (0x0003e920) bg_button_pane_cp10_ParamLimits

0xd822,	// (0x0003e920) bg_button_pane_cp10

0xd837,	// (0x0003e935) bg_button_pane_cp11_ParamLimits

0xd837,	// (0x0003e935) bg_button_pane_cp11

0xd84c,	// (0x0003e94a) graphic2_pages_pane_g1_ParamLimits

0xd84c,	// (0x0003e94a) graphic2_pages_pane_g1

0xd867,	// (0x0003e965) graphic2_pages_pane_g2_ParamLimits

0xd867,	// (0x0003e965) graphic2_pages_pane_g2

0x0001,

0xfdac,	// (0x00040eaa) graphic2_pages_pane_g_ParamLimits

0xfdac,	// (0x00040eaa) graphic2_pages_pane_g

0xd87f,	// (0x0003e97d) graphic2_pages_pane_t1_ParamLimits

0xd87f,	// (0x0003e97d) graphic2_pages_pane_t1

0xd895,	// (0x0003e993) cell_graphic2_control_pane_ParamLimits

0xd895,	// (0x0003e993) cell_graphic2_control_pane

0xd8b8,	// (0x0003e9b6) cell_graphic2_pane_g1_ParamLimits

0xd8b8,	// (0x0003e9b6) cell_graphic2_pane_g1

0xd8c5,	// (0x0003e9c3) cell_graphic2_pane_g2_ParamLimits

0xd8c5,	// (0x0003e9c3) cell_graphic2_pane_g2

0xd8d2,	// (0x0003e9d0) cell_graphic2_pane_g3_ParamLimits

0xd8d2,	// (0x0003e9d0) cell_graphic2_pane_g3

0xd8df,	// (0x0003e9dd) cell_graphic2_pane_g4_ParamLimits

0xd8df,	// (0x0003e9dd) cell_graphic2_pane_g4

0xd8ec,	// (0x0003e9ea) cell_graphic2_pane_g5_ParamLimits

0xd8ec,	// (0x0003e9ea) cell_graphic2_pane_g5

0x0004,

0xfdb1,	// (0x00040eaf) cell_graphic2_pane_g_ParamLimits

0xfdb1,	// (0x00040eaf) cell_graphic2_pane_g

0xd907,	// (0x0003ea05) cell_graphic2_pane_t1_ParamLimits

0xd907,	// (0x0003ea05) cell_graphic2_pane_t1

0x9121,	// (0x0003a21f) grid_highlight_pane_cp11_ParamLimits

0x9121,	// (0x0003a21f) grid_highlight_pane_cp11

0xf0c5,	// (0x000401c3) bg_button_pane_cp05

0xd930,	// (0x0003ea2e) cell_graphic2_control_pane_g1

0xb6f1,	// (0x0003c7ef) bg_touch_area_indi_pane_g1

0xd958,	// (0x0003ea56) aid_cmod_rocker_key_size

0xd962,	// (0x0003ea60) aid_cmode_itu_key_size

0xd96c,	// (0x0003ea6a) main_cmode_video_pane

0xd976,	// (0x0003ea74) main_comp_mode_itu_pane

0xd982,	// (0x0003ea80) main_comp_mode_rocker_pane

0xd98e,	// (0x0003ea8c) cell_cmode_rocker_pane_ParamLimits

0xd98e,	// (0x0003ea8c) cell_cmode_rocker_pane

0xd9a2,	// (0x0003eaa0) cell_cmode_itu_pane_ParamLimits

0xd9a2,	// (0x0003eaa0) cell_cmode_itu_pane

0x1e15,	// (0x00032f13) bg_button_pane_cp06_ParamLimits

0x1e15,	// (0x00032f13) bg_button_pane_cp06

0xb96c,	// (0x0003ca6a) cell_cmode_rocker_pane_g1_ParamLimits

0xb96c,	// (0x0003ca6a) cell_cmode_rocker_pane_g1

0xcef0,	// (0x0003dfee) cell_cmode_rocker_pane_g2_ParamLimits

0xcef0,	// (0x0003dfee) cell_cmode_rocker_pane_g2

0x0001,

0xfdc1,	// (0x00040ebf) cell_cmode_rocker_pane_g_ParamLimits

0xfdc1,	// (0x00040ebf) cell_cmode_rocker_pane_g

0xe4d5,	// (0x0003f5d3) bg_button_pane_cp07

0xd9b9,	// (0x0003eab7) cell_cmode_itu_pane_g1

0xd9c2,	// (0x0003eac0) cell_cmode_itu_pane_t1

0xd9d0,	// (0x0003eace) cell_cmode_itu_pane_t2

0x0001,

0xfdc6,	// (0x00040ec4) cell_cmode_itu_pane_t

0xd11e,	// (0x0003e21c) aid_touch_ctrl_left

0xd126,	// (0x0003e224) aid_touch_ctrl_right

0xe4d5,	// (0x0003f5d3) compa_mode_pane

0xd9de,	// (0x0003eadc) aid_cmod_rocker_key_size_cp

0xd9e8,	// (0x0003eae6) aid_cmode_itu_key_size_cp

0xd9f2,	// (0x0003eaf0) compa_mode_pane_g1

0xd9fa,	// (0x0003eaf8) compa_mode_pane_g2

0xda02,	// (0x0003eb00) compa_mode_pane_g3

0x0002,

0xfdcb,	// (0x00040ec9) compa_mode_pane_g

0xda0a,	// (0x0003eb08) main_comp_mode_itu_pane_cp

0xda12,	// (0x0003eb10) main_comp_mode_rocker_pane_cp

0xda1a,	// (0x0003eb18) cell_cmode_itu_pane_cp_ParamLimits

0xda1a,	// (0x0003eb18) cell_cmode_itu_pane_cp

0xda2f,	// (0x0003eb2d) cell_cmode_rocker_pane_cp_ParamLimits

0xda2f,	// (0x0003eb2d) cell_cmode_rocker_pane_cp

0x1e15,	// (0x00032f13) bg_button_pane_cp06_cp_ParamLimits

0x1e15,	// (0x00032f13) bg_button_pane_cp06_cp

0xb96c,	// (0x0003ca6a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb96c,	// (0x0003ca6a) cell_cmode_rocker_pane_g1_cp

0xb6f1,	// (0x0003c7ef) cell_cmode_rocker_pane_g2_cp

0xe4d5,	// (0x0003f5d3) bg_button_pane_cp07_cp

0xda41,	// (0x0003eb3f) cell_cmode_itu_pane_g1_cp

0xda4a,	// (0x0003eb48) cell_cmode_itu_pane_t1_cp

0xda4a,	// (0x0003eb48) cell_cmode_itu_pane_t2_cp

0xa5ea,	// (0x0003b6e8) settings_code_pane_cp2

0xef84,	// (0x00040082) bg_popup_window_pane_cp3_ParamLimits

0xf2b3,	// (0x000403b1) heading_pane_cp3_ParamLimits

0xf2bf,	// (0x000403bd) listscroll_popup_graphic_pane_ParamLimits

0x7562,	// (0x00038660) fep_hwr_aid_pane_ParamLimits

0x7b53,	// (0x00038c51) aid_touch_sctrl_top_ParamLimits

0x7b6e,	// (0x00038c6c) sctrl_sk_top_pane_g1_ParamLimits

0x77cf,	// (0x000388cd) sctrl_sk_top_pane_g2_ParamLimits

0xfd01,	// (0x00040dff) sctrl_sk_top_pane_g_ParamLimits

0x7b7b,	// (0x00038c79) sctrl_sk_top_pane_t1_ParamLimits

0x7b53,	// (0x00038c51) aid_touch_sctrl_bottom_ParamLimits

0x7b7b,	// (0x00038c79) sctrl_sk_bottom_pane_t1_ParamLimits

0xd064,	// (0x0003e162) aid_area_touch_clock

0x7d72,	// (0x00038e70) aid_vkb2_area_top_pane_cell_ParamLimits

0x7d72,	// (0x00038e70) aid_vkb2_area_top_pane_cell

0x7ebd,	// (0x00038fbb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7ebd,	// (0x00038fbb) aid_vkb2_area_bottom_pane_cell

0xd5c9,	// (0x0003e6c7) popup_char_count_window

0xda58,	// (0x0003eb56) popup_char_count_window_g1

0xda61,	// (0x0003eb5f) popup_char_count_window_g2

0xda6a,	// (0x0003eb68) popup_char_count_window_g3

0x0002,

0xfdd2,	// (0x00040ed0) popup_char_count_window_g

0xda73,	// (0x0003eb71) popup_char_count_window_t1

0x7c2c,	// (0x00038d2a) popup_fep_char_preview_window_ParamLimits

0x7c2c,	// (0x00038d2a) popup_fep_char_preview_window

0x7d90,	// (0x00038e8e) vkb2_top_candi_pane_ParamLimits

0x7d90,	// (0x00038e8e) vkb2_top_candi_pane

0xda81,	// (0x0003eb7f) cell_vkb2_top_candi_pane_ParamLimits

0xda81,	// (0x0003eb7f) cell_vkb2_top_candi_pane

0x81a8,	// (0x000392a6) bg_popup_fep_char_preview_window_ParamLimits

0x81a8,	// (0x000392a6) bg_popup_fep_char_preview_window

0x81b6,	// (0x000392b4) popup_fep_char_preview_window_t1_ParamLimits

0x81b6,	// (0x000392b4) popup_fep_char_preview_window_t1

0xdad2,	// (0x0003ebd0) bg_popup_fep_char_preview_window_g1

0xdada,	// (0x0003ebd8) bg_popup_fep_char_preview_window_g2

0xdae2,	// (0x0003ebe0) bg_popup_fep_char_preview_window_g3

0xdaea,	// (0x0003ebe8) bg_popup_fep_char_preview_window_g4

0xdaf2,	// (0x0003ebf0) bg_popup_fep_char_preview_window_g5

0x81f0,	// (0x000392ee) bg_popup_fep_char_preview_window_g6

0xdafa,	// (0x0003ebf8) bg_popup_fep_char_preview_window_g7

0xdb02,	// (0x0003ec00) bg_popup_fep_char_preview_window_g8

0xdb0a,	// (0x0003ec08) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd9,	// (0x00040ed7) bg_popup_fep_char_preview_window_g

0x77cf,	// (0x000388cd) cell_vkb2_top_candi_pane_g1_ParamLimits

0x77cf,	// (0x000388cd) cell_vkb2_top_candi_pane_g1

0x77dd,	// (0x000388db) cell_vkb2_top_candi_pane_g2_ParamLimits

0x77dd,	// (0x000388db) cell_vkb2_top_candi_pane_g2

0xc565,	// (0x0003d663) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc565,	// (0x0003d663) cell_vkb2_top_candi_pane_g3

0x81f8,	// (0x000392f6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x81f8,	// (0x000392f6) cell_vkb2_top_candi_pane_g4

0xbe8b,	// (0x0003cf89) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbe8b,	// (0x0003cf89) cell_vkb2_top_candi_pane_g5

0x8219,	// (0x00039317) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8219,	// (0x00039317) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdec,	// (0x00040eea) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdec,	// (0x00040eea) cell_vkb2_top_candi_pane_g

0x8227,	// (0x00039325) cell_vkb2_top_candi_pane_t1

0x7339,	// (0x00038437) aid_size_touch_slider_mark_ParamLimits

0x7339,	// (0x00038437) aid_size_touch_slider_mark

0xd70c,	// (0x0003e80a) grid_graphic2_catg_pane_ParamLimits

0xd70c,	// (0x0003e80a) grid_graphic2_catg_pane

0xd7aa,	// (0x0003e8a8) popup_grid_graphic2_window_t1_ParamLimits

0xd7aa,	// (0x0003e8a8) popup_grid_graphic2_window_t1

0xd7bc,	// (0x0003e8ba) popup_grid_graphic2_window_t2_ParamLimits

0xd7bc,	// (0x0003e8ba) popup_grid_graphic2_window_t2

0x0001,

0xfda7,	// (0x00040ea5) popup_grid_graphic2_window_t_ParamLimits

0xfda7,	// (0x00040ea5) popup_grid_graphic2_window_t

0xf0c5,	// (0x000401c3) bg_button_pane_cp05_ParamLimits

0xd930,	// (0x0003ea2e) cell_graphic2_control_pane_g1_ParamLimits

0xdb12,	// (0x0003ec10) cell_graphic2_catg_pane_ParamLimits

0xdb12,	// (0x0003ec10) cell_graphic2_catg_pane

0xe4d5,	// (0x0003f5d3) bg_button_pane_cp12

0xdb24,	// (0x0003ec22) cell_graphic2_catg_pane_g1

0xd030,	// (0x0003e12e) cell_tb_ext_pane_t1_ParamLimits

0x7fda,	// (0x000390d8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7fda,	// (0x000390d8) vkb2_top_cell_right_narrow_pane

0x7ff2,	// (0x000390f0) vkb2_top_cell_right_wide_pane_ParamLimits

0x7ff2,	// (0x000390f0) vkb2_top_cell_right_wide_pane

0x7554,	// (0x00038652) bg_vkb2_func_pane_ParamLimits

0x7554,	// (0x00038652) bg_vkb2_func_pane

0x8063,	// (0x00039161) vkb2_top_cell_left_pane_g1_ParamLimits

0x7554,	// (0x00038652) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7554,	// (0x00038652) bg_vkb2_fuc_pane_cp03

0x80c1,	// (0x000391bf) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x90b5,	// (0x0003a1b3) bg_vkb2_func_pane_g1

0x90bd,	// (0x0003a1bb) bg_vkb2_func_pane_g2

0x90cd,	// (0x0003a1cb) bg_vkb2_func_pane_g3

0x90c5,	// (0x0003a1c3) bg_vkb2_func_pane_g4

0x90d5,	// (0x0003a1d3) bg_vkb2_func_pane_g5

0x90dd,	// (0x0003a1db) bg_vkb2_func_pane_g6

0x90e5,	// (0x0003a1e3) bg_vkb2_func_pane_g7

0x90ed,	// (0x0003a1eb) bg_vkb2_func_pane_g8

0x90ad,	// (0x0003a1ab) bg_vkb2_func_pane_g9

0x0008,

0xfdf9,	// (0x00040ef7) bg_vkb2_func_pane_g

0x7554,	// (0x00038652) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7554,	// (0x00038652) bg_vkb2_fuc_pane_cp01

0x8063,	// (0x00039161) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8063,	// (0x00039161) vkb2_top_cell_right_wide_pane_g1

0x7554,	// (0x00038652) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7554,	// (0x00038652) bg_vkb2_fuc_pane_cp02

0x80c1,	// (0x000391bf) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x80c1,	// (0x000391bf) vkb2_top_cell_right_narrow_pane_g1

0xcc51,	// (0x0003dd4f) aid_touch_area_decrease_ParamLimits

0xcc51,	// (0x0003dd4f) aid_touch_area_decrease

0xcc75,	// (0x0003dd73) aid_touch_area_increase_ParamLimits

0xcc75,	// (0x0003dd73) aid_touch_area_increase

0xcc81,	// (0x0003dd7f) aid_touch_area_mute_ParamLimits

0xcc81,	// (0x0003dd7f) aid_touch_area_mute

0xcca5,	// (0x0003dda3) aid_touch_area_slider_ParamLimits

0xcca5,	// (0x0003dda3) aid_touch_area_slider

0xcd95,	// (0x0003de93) popup_slider_window_g4_ParamLimits

0xcd95,	// (0x0003de93) popup_slider_window_g4

0xcda1,	// (0x0003de9f) popup_slider_window_g5_ParamLimits

0xcda1,	// (0x0003de9f) popup_slider_window_g5

0xcdc3,	// (0x0003dec1) popup_slider_window_g6_ParamLimits

0xcdc3,	// (0x0003dec1) popup_slider_window_g6

0xce03,	// (0x0003df01) popup_slider_window_t2_ParamLimits

0xce03,	// (0x0003df01) popup_slider_window_t2

0x0001,

0xfcf5,	// (0x00040df3) popup_slider_window_t_ParamLimits

0xfcf5,	// (0x00040df3) popup_slider_window_t

0xce1b,	// (0x0003df19) slider_pane_ParamLimits

0xce1b,	// (0x0003df19) slider_pane

0xdb2d,	// (0x0003ec2b) slider_pane_g1_ParamLimits

0xdb2d,	// (0x0003ec2b) slider_pane_g1

0xdb41,	// (0x0003ec3f) slider_pane_g2_ParamLimits

0xdb41,	// (0x0003ec3f) slider_pane_g2

0xdb57,	// (0x0003ec55) slider_pane_g3_ParamLimits

0xdb57,	// (0x0003ec55) slider_pane_g3

0x0003,

0xfe0c,	// (0x00040f0a) slider_pane_g_ParamLimits

0xfe0c,	// (0x00040f0a) slider_pane_g

0x8aa6,	// (0x00039ba4) popup_tb_float_extension_window_ParamLimits

0x8aa6,	// (0x00039ba4) popup_tb_float_extension_window

0xdb83,	// (0x0003ec81) aid_size_cell_tb_float_ext

0xe4d5,	// (0x0003f5d3) bg_popup_sub_window_cp28

0xdb8f,	// (0x0003ec8d) grid_tb_float_ext_pane

0xdb9b,	// (0x0003ec99) cell_tb_float_ext_pane_ParamLimits

0xdb9b,	// (0x0003ec99) cell_tb_float_ext_pane

0xdbb7,	// (0x0003ecb5) cell_tb_float_ext_pane_g1

0xdbc0,	// (0x0003ecbe) grid_highlight_pane_cp12

0x76a9,	// (0x000387a7) cell_last_hwr_side_pane_ParamLimits

0x76a9,	// (0x000387a7) cell_last_hwr_side_pane

0xb6f1,	// (0x0003c7ef) cell_last_hwr_side_pane_g1

0xdbc9,	// (0x0003ecc7) cell_last_hwr_side_pane_g2

0x0001,

0xfe15,	// (0x00040f13) cell_last_hwr_side_pane_g

0x7f89,	// (0x00039087) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7f89,	// (0x00039087) vkb2_area_bottom_space_btn_pane

0x77cf,	// (0x000388cd) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd67e,	// (0x0003e77c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8227,	// (0x00039325) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8245,	// (0x00039343) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8245,	// (0x00039343) vkb2_area_bottom_space_btn_pane_g1

0x827f,	// (0x0003937d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x827f,	// (0x0003937d) vkb2_area_bottom_space_btn_pane_g2

0x82b5,	// (0x000393b3) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x82b5,	// (0x000393b3) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1a,	// (0x00040f18) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1a,	// (0x00040f18) vkb2_area_bottom_space_btn_pane_g

0x7619,	// (0x00038717) cel_fep_hwr_func_pane_ParamLimits

0x7619,	// (0x00038717) cel_fep_hwr_func_pane

0x7655,	// (0x00038753) cell_hwr_side_button_pane_ParamLimits

0x7655,	// (0x00038753) cell_hwr_side_button_pane

0xd064,	// (0x0003e162) aid_area_touch_clock_ParamLimits

0xf0c5,	// (0x000401c3) bg_uniindi_top_pane_ParamLimits

0xd078,	// (0x0003e176) uniindi_top_pane_g1_ParamLimits

0xd08e,	// (0x0003e18c) uniindi_top_pane_g2_ParamLimits

0xd09a,	// (0x0003e198) uniindi_top_pane_g3_ParamLimits

0xd0ab,	// (0x0003e1a9) uniindi_top_pane_g4_ParamLimits

0xfd2d,	// (0x00040e2b) uniindi_top_pane_g_ParamLimits

0xd0b8,	// (0x0003e1b6) uniindi_top_pane_t1_ParamLimits

0xf0c5,	// (0x000401c3) bg_vkb2_func_pane_cp01_ParamLimits

0xf0c5,	// (0x000401c3) bg_vkb2_func_pane_cp01

0xdbd2,	// (0x0003ecd0) cel_fep_hwr_func_pane_g1_ParamLimits

0xdbd2,	// (0x0003ecd0) cel_fep_hwr_func_pane_g1

0xf0c5,	// (0x000401c3) bg_vkb2_func_pane_cp02_ParamLimits

0xf0c5,	// (0x000401c3) bg_vkb2_func_pane_cp02

0xdbd2,	// (0x0003ecd0) cell_hwr_side_button_pane_g1_ParamLimits

0xdbd2,	// (0x0003ecd0) cell_hwr_side_button_pane_g1

0x8f2e,	// (0x0003a02c) status_pane_g4_ParamLimits

0x8f2e,	// (0x0003a02c) status_pane_g4

0x8f48,	// (0x0003a046) status_pane_t1

0xb490,	// (0x0003c58e) form2_midp_gauge_slider_cont_pane

0xb498,	// (0x0003c596) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb4aa,	// (0x0003c5a8) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb4bc,	// (0x0003c5ba) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaed,	// (0x00040beb) form2_midp_gauge_slider_pane_t_ParamLimits

0xb4ce,	// (0x0003c5cc) form2_midp_slider_pane_ParamLimits

0x7bec,	// (0x00038cea) aid_size_cell_func_vkb2_ParamLimits

0x7bec,	// (0x00038cea) aid_size_cell_func_vkb2

0xdb6f,	// (0x0003ec6d) slider_pane_g4_ParamLimits

0xdb6f,	// (0x0003ec6d) slider_pane_g4

0x82ff,	// (0x000393fd) form2_midp_gauge_slider_pane_t2_cp01

0x830d,	// (0x0003940b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x830d,	// (0x0003940b) form2_midp_gauge_slider_pane_t3_cp01

0x832a,	// (0x00039428) form2_midp_slider_pane_cp01

0xe4d5,	// (0x0003f5d3) navi_smil_pane

0xdc0b,	// (0x0003ed09) navi_smil_pane_g1

0xdc13,	// (0x0003ed11) navi_smil_pane_t1

0xdbe0,	// (0x0003ecde) form2_midp_slider_pane_g1

0xdbe9,	// (0x0003ece7) form2_midp_slider_pane_g2

0xdbf1,	// (0x0003ecef) form2_midp_slider_pane_g3

0xdbe0,	// (0x0003ecde) form2_midp_slider_pane_g4

0xdbf9,	// (0x0003ecf7) form2_midp_slider_pane_g5

0x0004,

0xfe23,	// (0x00040f21) form2_midp_slider_pane_g

0x82ef,	// (0x000393ed) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x82ef,	// (0x000393ed) vkb2_area_bottom_space_btn_pane_g4

0x8d45,	// (0x00039e43) lc0_navi_pane_ParamLimits

0x8d45,	// (0x00039e43) lc0_navi_pane

0x8dc1,	// (0x00039ebf) lc0_stat_indi_pane_ParamLimits

0x8dc1,	// (0x00039ebf) lc0_stat_indi_pane

0x8dd8,	// (0x00039ed6) ls0_title_pane_ParamLimits

0x8dd8,	// (0x00039ed6) ls0_title_pane

0x1e15,	// (0x00032f13) bg_popup_sub_pane_cp14_ParamLimits

0xd04b,	// (0x0003e149) list_uniindi_pane_ParamLimits

0xd057,	// (0x0003e155) uniindi_top_pane_ParamLimits

0xd0f6,	// (0x0003e1f4) list_single_uniindi_pane_g1_ParamLimits

0xd109,	// (0x0003e207) list_single_uniindi_pane_t1_ParamLimits

0x8333,	// (0x00039431) lc0_stat_clock_pane_ParamLimits

0x8333,	// (0x00039431) lc0_stat_clock_pane

0xdc21,	// (0x0003ed1f) lc0_stat_indi_pane_g1_ParamLimits

0xdc21,	// (0x0003ed1f) lc0_stat_indi_pane_g1

0xdc2e,	// (0x0003ed2c) lc0_stat_indi_pane_g2_ParamLimits

0xdc2e,	// (0x0003ed2c) lc0_stat_indi_pane_g2

0x0001,

0xfe2e,	// (0x00040f2c) lc0_stat_indi_pane_g_ParamLimits

0xfe2e,	// (0x00040f2c) lc0_stat_indi_pane_g

0x8340,	// (0x0003943e) lc0_uni_indicator_pane_ParamLimits

0x8340,	// (0x0003943e) lc0_uni_indicator_pane

0xdc3b,	// (0x0003ed39) ls0_title_pane_g1_ParamLimits

0xdc3b,	// (0x0003ed39) ls0_title_pane_g1

0xdc4f,	// (0x0003ed4d) ls0_title_pane_t1_ParamLimits

0xdc4f,	// (0x0003ed4d) ls0_title_pane_t1

0x834d,	// (0x0003944b) lc0_uni_indicator_pane_g1_ParamLimits

0x834d,	// (0x0003944b) lc0_uni_indicator_pane_g1

0xdc85,	// (0x0003ed83) lc0_stat_clock_pane_t1

0xe4d5,	// (0x0003f5d3) main_ai5_pane

0xdc93,	// (0x0003ed91) ai5_sk_pane_ParamLimits

0xdc93,	// (0x0003ed91) ai5_sk_pane

0xdca0,	// (0x0003ed9e) cell_ai5_widget_pane_ParamLimits

0xdca0,	// (0x0003ed9e) cell_ai5_widget_pane

0xe23c,	// (0x0003f33a) aid_size_cell_widget_grid

0xe24a,	// (0x0003f348) bg_ai5_widget_pane_ParamLimits

0xe24a,	// (0x0003f348) bg_ai5_widget_pane

0xe2be,	// (0x0003f3bc) cell_ai5_widget_pane_g2

0xe2ce,	// (0x0003f3cc) cell_ai5_widget_pane_g3

0xe2e5,	// (0x0003f3e3) cell_ai5_widget_pane_g4

0xe2f1,	// (0x0003f3ef) cell_ai5_widget_pane_g5

0xe2fd,	// (0x0003f3fb) cell_ai5_widget_pane_g6

0xe309,	// (0x0003f407) cell_ai5_widget_pane_g7

0xe351,	// (0x0003f44f) cell_ai5_widget_pane_t1_ParamLimits

0xe351,	// (0x0003f44f) cell_ai5_widget_pane_t1

0xe36e,	// (0x0003f46c) cell_ai5_widget_pane_t2_ParamLimits

0xe36e,	// (0x0003f46c) cell_ai5_widget_pane_t2

0xe386,	// (0x0003f484) cell_ai5_widget_pane_t3_ParamLimits

0xe386,	// (0x0003f484) cell_ai5_widget_pane_t3

0xe39e,	// (0x0003f49c) cell_ai5_widget_pane_t4_ParamLimits

0xe39e,	// (0x0003f49c) cell_ai5_widget_pane_t4

0xe3bb,	// (0x0003f4b9) cell_ai5_widget_pane_t5_ParamLimits

0xe3bb,	// (0x0003f4b9) cell_ai5_widget_pane_t5

0xe3da,	// (0x0003f4d8) cell_ai5_widget_pane_t6_ParamLimits

0xe3da,	// (0x0003f4d8) cell_ai5_widget_pane_t6

0xe3ec,	// (0x0003f4ea) cell_ai5_widget_pane_t7_ParamLimits

0xe3ec,	// (0x0003f4ea) cell_ai5_widget_pane_t7

0xe405,	// (0x0003f503) cell_ai5_widget_pane_t8_ParamLimits

0xe405,	// (0x0003f503) cell_ai5_widget_pane_t8

0x0009,

0xfe48,	// (0x00040f46) cell_ai5_widget_pane_t_ParamLimits

0xfe48,	// (0x00040f46) cell_ai5_widget_pane_t

0xe459,	// (0x0003f557) grid_ai5_widget_pane

0x1e15,	// (0x00032f13) highlight_cell_ai5_widget_pane_ParamLimits

0x1e15,	// (0x00032f13) highlight_cell_ai5_widget_pane

0xe467,	// (0x0003f565) ai5_sk_left_pane

0xe471,	// (0x0003f56f) ai5_sk_middle_pane

0xe47b,	// (0x0003f579) ai5_sk_right_pane

0xe485,	// (0x0003f583) bg_ai5_widget_pane_g1_ParamLimits

0xe485,	// (0x0003f583) bg_ai5_widget_pane_g1

0xe491,	// (0x0003f58f) bg_ai5_widget_pane_g2_ParamLimits

0xe491,	// (0x0003f58f) bg_ai5_widget_pane_g2

0xe49d,	// (0x0003f59b) bg_ai5_widget_pane_g3_ParamLimits

0xe49d,	// (0x0003f59b) bg_ai5_widget_pane_g3

0xe4a9,	// (0x0003f5a7) bg_ai5_widget_pane_g4_ParamLimits

0xe4a9,	// (0x0003f5a7) bg_ai5_widget_pane_g4

0xe4b5,	// (0x0003f5b3) bg_ai5_widget_pane_g5_ParamLimits

0xe4b5,	// (0x0003f5b3) bg_ai5_widget_pane_g5

0xe4c1,	// (0x0003f5bf) bg_ai5_widget_pane_g6_ParamLimits

0xe4c1,	// (0x0003f5bf) bg_ai5_widget_pane_g6

0xe50b,	// (0x0003f609) bg_ai5_widget_pane_g7_ParamLimits

0xe50b,	// (0x0003f609) bg_ai5_widget_pane_g7

0xe517,	// (0x0003f615) bg_ai5_widget_pane_g8_ParamLimits

0xe517,	// (0x0003f615) bg_ai5_widget_pane_g8

0xe523,	// (0x0003f621) bg_ai5_widget_pane_g9_ParamLimits

0xe523,	// (0x0003f621) bg_ai5_widget_pane_g9

0x0008,

0xfe5d,	// (0x00040f5b) bg_ai5_widget_pane_g_ParamLimits

0xfe5d,	// (0x00040f5b) bg_ai5_widget_pane_g

0xe55b,	// (0x0003f659) cell_shortcut_ai5_widget_pane_ParamLimits

0xe55b,	// (0x0003f659) cell_shortcut_ai5_widget_pane

0x6936,	// (0x00037a34) bg_cell_shortcut_ai5_widget_pane

0xe56e,	// (0x0003f66c) cell_grid_ai5_widget_pane_g1

0x6936,	// (0x00037a34) highlight_cell_shortcut_ai5_widget_pane

0x90b5,	// (0x0003a1b3) ai5_sk_left_pane_g1

0xe577,	// (0x0003f675) ai5_sk_left_pane_g2

0xe57f,	// (0x0003f67d) ai5_sk_left_pane_g3

0xe587,	// (0x0003f685) ai5_sk_left_pane_g4

0x0003,

0xfe70,	// (0x00040f6e) ai5_sk_left_pane_g

0xe58f,	// (0x0003f68d) ai5_sk_left_pane_t1

0x90bd,	// (0x0003a1bb) ai5_sk_right_pane_g1

0xe59d,	// (0x0003f69b) ai5_sk_right_pane_g2

0xe5a5,	// (0x0003f6a3) ai5_sk_right_pane_g3

0xe5ad,	// (0x0003f6ab) ai5_sk_right_pane_g4

0x0003,

0xfe79,	// (0x00040f77) ai5_sk_right_pane_g

0xe5b5,	// (0x0003f6b3) ai5_sk_right_pane_t1

0x90bd,	// (0x0003a1bb) ai5_sk_middle_pane_g1

0x90b5,	// (0x0003a1b3) ai5_sk_middle_pane_g2

0x90d5,	// (0x0003a1d3) ai5_sk_middle_pane_g3

0xe5a5,	// (0x0003f6a3) ai5_sk_middle_pane_g4

0xe57f,	// (0x0003f67d) ai5_sk_middle_pane_g5

0xe5c3,	// (0x0003f6c1) ai5_sk_middle_pane_g6

0xe5cb,	// (0x0003f6c9) ai5_sk_middle_pane_g7

0x0006,

0xfe82,	// (0x00040f80) ai5_sk_middle_pane_g

0x8bc7,	// (0x00039cc5) aid_touch_area_size_lc0_ParamLimits

0x8bc7,	// (0x00039cc5) aid_touch_area_size_lc0

0x77fe,	// (0x000388fc) cell_hwr_candidate_pane_t1_ParamLimits

0x8be5,	// (0x00039ce3) aid_touch_navi_pane

0x8ed8,	// (0x00039fd6) status_dt_navi_pane_ParamLimits

0x8ed8,	// (0x00039fd6) status_dt_navi_pane

0x8ee5,	// (0x00039fe3) status_dt_sta_pane_ParamLimits

0x8ee5,	// (0x00039fe3) status_dt_sta_pane

0xe5d3,	// (0x0003f6d1) dt_sta_controll_pane

0xe5e0,	// (0x0003f6de) dt_sta_indi_pane

0xe5f1,	// (0x0003f6ef) dt_sta_title_pane

0xf0c5,	// (0x000401c3) bg_dt_sta_indi_pane_ParamLimits

0xf0c5,	// (0x000401c3) bg_dt_sta_indi_pane

0xe604,	// (0x0003f702) dt_sta_battery_pane

0xe60c,	// (0x0003f70a) dt_sta_indi_pane_g1

0xe615,	// (0x0003f713) dt_sta_indi_pane_g2

0xe61e,	// (0x0003f71c) dt_sta_indi_pane_g3

0x0002,

0xfe91,	// (0x00040f8f) dt_sta_indi_pane_g

0xe627,	// (0x0003f725) dt_sta_signal_pane

0x1e15,	// (0x00032f13) bg_dt_sta_title_pane_ParamLimits

0x1e15,	// (0x00032f13) bg_dt_sta_title_pane

0xe630,	// (0x0003f72e) dt_sta_title_pane_g1

0xe638,	// (0x0003f736) dt_sta_title_pane_t1_ParamLimits

0xe638,	// (0x0003f736) dt_sta_title_pane_t1

0xe4d5,	// (0x0003f5d3) bg_dt_sta_control_pane

0xe64d,	// (0x0003f74b) dt_sta_controll_pane_g1

0xe656,	// (0x0003f754) bg_dt_sta_title_pane_g1

0xe65f,	// (0x0003f75d) bg_dt_sta_title_pane_g2

0xe668,	// (0x0003f766) bg_dt_sta_title_pane_g3

0x0002,

0xfe98,	// (0x00040f96) bg_dt_sta_title_pane_g

0xb6f1,	// (0x0003c7ef) bg_dt_sta_indi_pane_g1

0xe671,	// (0x0003f76f) dt_sta_signal_pane_g1

0xe679,	// (0x0003f777) dt_sta_signal_pane_g2

0x0001,

0xfe9f,	// (0x00040f9d) dt_sta_signal_pane_g

0xe681,	// (0x0003f77f) dt_sta_battery_pane_g1

0xe68a,	// (0x0003f788) dt_sta_battery_pane_t1

0xb6f1,	// (0x0003c7ef) bg_dt_sta_control_pane_g1

0x2379,	// (0x00033477) fep_china_uni_eep_pane

0x2381,	// (0x0003347f) fep_china_uni_entry_pane_ParamLimits

0x2391,	// (0x0003348f) popup_fep_china_uni_window_g1_ParamLimits

0x23a1,	// (0x0003349f) popup_fep_china_uni_window_g2_ParamLimits

0x23a1,	// (0x0003349f) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00040816) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00040816) popup_fep_china_uni_window_g

0xe699,	// (0x0003f797) fep_china_uni_eep_pane_g1

0xe6a1,	// (0x0003f79f) fep_china_uni_eep_pane_t1

0xdc02,	// (0x0003ed00) aid_touch_area_size_smil_player

0x8d3d,	// (0x00039e3b) lc0_clock_pane

0x8f3c,	// (0x0003a03a) status_pane_g5_ParamLimits

0x8f3c,	// (0x0003a03a) status_pane_g5

0x872b,	// (0x00039829) popup_keymap_window

0x8efa,	// (0x00039ff8) status_icon_pane

0xe2ce,	// (0x0003f3cc) cell_ai5_widget_pane_g3_ParamLimits

0xe2e5,	// (0x0003f3e3) cell_ai5_widget_pane_g4_ParamLimits

0xe2f1,	// (0x0003f3ef) cell_ai5_widget_pane_g5_ParamLimits

0xe315,	// (0x0003f413) cell_ai5_widget_pane_g8_ParamLimits

0xe315,	// (0x0003f413) cell_ai5_widget_pane_g8

0xe329,	// (0x0003f427) cell_ai5_widget_pane_g9_ParamLimits

0xe329,	// (0x0003f427) cell_ai5_widget_pane_g9

0xe33d,	// (0x0003f43b) cell_ai5_widget_pane_g10_ParamLimits

0xe33d,	// (0x0003f43b) cell_ai5_widget_pane_g10

0xe6b0,	// (0x0003f7ae) status_icon_pane_g1

0xe4d5,	// (0x0003f5d3) bg_popup_sub_pane_cp13

0xe6b8,	// (0x0003f7b6) popup_keymap_window_t1

0x6d1b,	// (0x00037e19) control_pane_g6_ParamLimits

0x6d1b,	// (0x00037e19) control_pane_g6

0x6d28,	// (0x00037e26) control_pane_g7_ParamLimits

0x6d28,	// (0x00037e26) control_pane_g7

0x6d35,	// (0x00037e33) control_pane_g8_ParamLimits

0x6d35,	// (0x00037e33) control_pane_g8

0xe5d3,	// (0x0003f6d1) dt_sta_controll_pane_ParamLimits

0xe5e0,	// (0x0003f6de) dt_sta_indi_pane_ParamLimits

0xe5f1,	// (0x0003f6ef) dt_sta_title_pane_ParamLimits

0xf4e9,	// (0x000405e7) aid_size_touch_scroll_bar_cale

0x5617,	// (0x00036715) popup_discreet_window_ParamLimits

0x5617,	// (0x00036715) popup_discreet_window

0x56a5,	// (0x000367a3) popup_sk_window

0x96fd,	// (0x0003a7fb) bg_popup_sub_pane_cp28_ParamLimits

0x96fd,	// (0x0003a7fb) bg_popup_sub_pane_cp28

0xe6c6,	// (0x0003f7c4) popup_discreet_window_g1_ParamLimits

0xe6c6,	// (0x0003f7c4) popup_discreet_window_g1

0xe6e6,	// (0x0003f7e4) popup_discreet_window_t1_ParamLimits

0xe6e6,	// (0x0003f7e4) popup_discreet_window_t1

0xe704,	// (0x0003f802) popup_discreet_window_t2_ParamLimits

0xe704,	// (0x0003f802) popup_discreet_window_t2

0x0002,

0xfea4,	// (0x00040fa2) popup_discreet_window_t_ParamLimits

0xfea4,	// (0x00040fa2) popup_discreet_window_t

0x8360,	// (0x0003945e) popup_sk_window_g1

0x836a,	// (0x00039468) popup_sk_window_g2

0x0001,

0xfeab,	// (0x00040fa9) popup_sk_window_g

0x8374,	// (0x00039472) popup_sk_window_t1

0x8384,	// (0x00039482) popup_sk_window_t1_copy1

0xe2be,	// (0x0003f3bc) cell_ai5_widget_pane_g2_ParamLimits

0xe417,	// (0x0003f515) cell_ai5_widget_pane_t9_ParamLimits

0xe417,	// (0x0003f515) cell_ai5_widget_pane_t9

0xe4d5,	// (0x0003f5d3) main_fep_fshwr2_pane

0x8392,	// (0x00039490) aid_fshwr2_btn_pane

0x839e,	// (0x0003949c) aid_fshwr2_syb_pane

0x83aa,	// (0x000394a8) aid_fshwr2_txt_pane

0x83b6,	// (0x000394b4) fshwr2_func_candi_pane

0x83c9,	// (0x000394c7) fshwr2_hwr_syb_pane

0x83d7,	// (0x000394d5) fshwr2_icf_pane

0x553a,	// (0x00036638) fshwr2_icf_bg_pane

0x8406,	// (0x00039504) fshwr2_icf_pane_t1_ParamLimits

0x8406,	// (0x00039504) fshwr2_icf_pane_t1

0x22f7,	// (0x000333f5) fshwr2_func_candi_pane_g1

0xe756,	// (0x0003f854) fshwr2_func_candi_row_pane_ParamLimits

0xe756,	// (0x0003f854) fshwr2_func_candi_row_pane

0x841e,	// (0x0003951c) cell_fshwr2_syb_pane_ParamLimits

0x841e,	// (0x0003951c) cell_fshwr2_syb_pane

0x77cf,	// (0x000388cd) fshwr2_hwr_syb_pane_g1_ParamLimits

0x77cf,	// (0x000388cd) fshwr2_hwr_syb_pane_g1

0x553a,	// (0x00036638) bg_popup_call_pane_cp01

0x8434,	// (0x00039532) fshwr2_func_candi_cell_pane_ParamLimits

0x8434,	// (0x00039532) fshwr2_func_candi_cell_pane

0xe766,	// (0x0003f864) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe766,	// (0x0003f864) fshwr2_func_candi_cell_bg_pane

0x8468,	// (0x00039566) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8468,	// (0x00039566) fshwr2_func_candi_cell_pane_g1

0x8488,	// (0x00039586) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8488,	// (0x00039586) fshwr2_func_candi_cell_pane_t1

0x553a,	// (0x00036638) bg_button_pane_cp08

0xe772,	// (0x0003f870) cell_fshwr2_syb_bg_pane

0x849b,	// (0x00039599) cell_fshwr2_syb_bg_pane_g1

0x84a3,	// (0x000395a1) cell_fshwr2_syb_bg_pane_t1

0x1e15,	// (0x00032f13) main_tmo_pane

0xa221,	// (0x0003b31f) uni_indicator_pane_g1_ParamLimits

0xa237,	// (0x0003b335) uni_indicator_pane_g2_ParamLimits

0xa24d,	// (0x0003b34b) uni_indicator_pane_g3_ParamLimits

0xa262,	// (0x0003b360) uni_indicator_pane_g4_ParamLimits

0xa262,	// (0x0003b360) uni_indicator_pane_g4

0xa276,	// (0x0003b374) uni_indicator_pane_g5_ParamLimits

0xa276,	// (0x0003b374) uni_indicator_pane_g5

0xa276,	// (0x0003b374) uni_indicator_pane_g6_ParamLimits

0xa276,	// (0x0003b374) uni_indicator_pane_g6

0xf91c,	// (0x00040a1a) uni_indicator_pane_g_ParamLimits

0xcc21,	// (0x0003dd1f) popup_tmo_note_window_ParamLimits

0xcc21,	// (0x0003dd1f) popup_tmo_note_window

0x7bce,	// (0x00038ccc) fshwr2_bg_pane

0x8479,	// (0x00039577) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8479,	// (0x00039577) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb0,	// (0x00040fae) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb0,	// (0x00040fae) fshwr2_func_candi_cell_pane_g

0x77b7,	// (0x000388b5) bg_popup_window_pane_cp01

0x84b2,	// (0x000395b0) bg_popup_window_pane_g1_cp01

0xe77a,	// (0x0003f878) bg_popup_window_pane_cp22_ParamLimits

0xe77a,	// (0x0003f878) bg_popup_window_pane_cp22

0xe788,	// (0x0003f886) listscroll_tmo_link_pane_ParamLimits

0xe788,	// (0x0003f886) listscroll_tmo_link_pane

0xe7c8,	// (0x0003f8c6) popup_tmo_note_window_g1_ParamLimits

0xe7c8,	// (0x0003f8c6) popup_tmo_note_window_g1

0xe7d5,	// (0x0003f8d3) tmo_note_info_pane_ParamLimits

0xe7d5,	// (0x0003f8d3) tmo_note_info_pane

0xe7ef,	// (0x0003f8ed) list_tmo_note_info_pane_g1_ParamLimits

0xe7ef,	// (0x0003f8ed) list_tmo_note_info_pane_g1

0xe806,	// (0x0003f904) list_tmo_note_info_pane_g2_ParamLimits

0xe806,	// (0x0003f904) list_tmo_note_info_pane_g2

0x0001,

0xfeb5,	// (0x00040fb3) list_tmo_note_info_pane_g_ParamLimits

0xfeb5,	// (0x00040fb3) list_tmo_note_info_pane_g

0xe822,	// (0x0003f920) list_tmo_note_info_text_pane_ParamLimits

0xe822,	// (0x0003f920) list_tmo_note_info_text_pane

0xe8a7,	// (0x0003f9a5) list_tmo_link_pane

0xe8b4,	// (0x0003f9b2) scroll_pane_cp20

0xe8c1,	// (0x0003f9bf) list_single_tmo_link_pane_ParamLimits

0xe8c1,	// (0x0003f9bf) list_single_tmo_link_pane

0xe8d1,	// (0x0003f9cf) list_single_tmo_link_pane_t1

0xe8df,	// (0x0003f9dd) list_tmo_note_info_text_pane_t1_ParamLimits

0xe8df,	// (0x0003f9dd) list_tmo_note_info_text_pane_t1

0x60d0,	// (0x000371ce) aid_size_touch_scroll_bar_cp01_ParamLimits

0x60d0,	// (0x000371ce) aid_size_touch_scroll_bar_cp01

0x5ffa,	// (0x000370f8) aid_size_touch_slider_marker

0x568d,	// (0x0003678b) popup_settings_window_ParamLimits

0x568d,	// (0x0003678b) popup_settings_window

0x3dbf,	// (0x00034ebd) popup_candi_list_indi_window

0x8be5,	// (0x00039ce3) aid_touch_navi_pane_ParamLimits

0x7b27,	// (0x00038c25) rs_clock_indi_pane

0x7b30,	// (0x00038c2e) sctrl_sk_bottom_pane_ParamLimits

0x7b41,	// (0x00038c3f) sctrl_sk_top_pane_ParamLimits

0x7c46,	// (0x00038d44) popup_fep_tooltip_window

0xe23c,	// (0x0003f33a) aid_size_cell_widget_grid_ParamLimits

0xe2a9,	// (0x0003f3a7) cell_ai5_widget_pane_g1_ParamLimits

0xe2a9,	// (0x0003f3a7) cell_ai5_widget_pane_g1

0xe2fd,	// (0x0003f3fb) cell_ai5_widget_pane_g6_ParamLimits

0xe309,	// (0x0003f407) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe33,	// (0x00040f31) cell_ai5_widget_pane_g_ParamLimits

0xfe33,	// (0x00040f31) cell_ai5_widget_pane_g

0xe43b,	// (0x0003f539) cell_ai5_widget_pane_t10_ParamLimits

0xe43b,	// (0x0003f539) cell_ai5_widget_pane_t10

0xe459,	// (0x0003f557) grid_ai5_widget_pane_ParamLimits

0xe52f,	// (0x0003f62d) cell_contacts_ai5_widget_pane_ParamLimits

0xe52f,	// (0x0003f62d) cell_contacts_ai5_widget_pane

0xe719,	// (0x0003f817) popup_discreet_window_t3_ParamLimits

0xe719,	// (0x0003f817) popup_discreet_window_t3

0x83ee,	// (0x000394ec) popup_fshwr2_char_preview_window_ParamLimits

0x83ee,	// (0x000394ec) popup_fshwr2_char_preview_window

0xe840,	// (0x0003f93e) tmo_note_info_pane_t1

0xe855,	// (0x0003f953) tmo_note_info_pane_t2

0xe86e,	// (0x0003f96c) tmo_note_info_pane_t3

0xe883,	// (0x0003f981) tmo_note_info_pane_t4

0xe895,	// (0x0003f993) tmo_note_info_pane_t5

0x0004,

0xfeba,	// (0x00040fb8) tmo_note_info_pane_t

0xe8a7,	// (0x0003f9a5) list_tmo_link_pane_ParamLimits

0xe8b4,	// (0x0003f9b2) scroll_pane_cp20_ParamLimits

0x553a,	// (0x00036638) bg_popup_fep_char_preview_window_cp01

0xe8f8,	// (0x0003f9f6) popup_fshwr2_char_preview_window_t1

0xe906,	// (0x0003fa04) popup_candi_list_indi_window_g1

0xe90f,	// (0x0003fa0d) bg_cell_contacts_ai5_widget_pane

0xe91b,	// (0x0003fa19) cell_contacts_ai5_widget_pane_g1

0xe930,	// (0x0003fa2e) cell_contacts_ai5_widget_pane_g2

0xe93c,	// (0x0003fa3a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec5,	// (0x00040fc3) cell_contacts_ai5_widget_pane_g

0xe948,	// (0x0003fa46) cell_contacts_ai5_widget_pane_t1

0x1e15,	// (0x00032f13) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe9bf,	// (0x0003fabd) settings_container_pane

0x6936,	// (0x00037a34) listscroll_set_pane_copy1

0xae12,	// (0x0003bf10) scroll_pane_cp121_copy1

0xe9cb,	// (0x0003fac9) set_content_pane_copy1

0xe9d3,	// (0x0003fad1) aid_height_set_list_copy1_ParamLimits

0xe9d3,	// (0x0003fad1) aid_height_set_list_copy1

0xa476,	// (0x0003b574) aid_size_parent_copy1_ParamLimits

0xa476,	// (0x0003b574) aid_size_parent_copy1

0xe9df,	// (0x0003fadd) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe9df,	// (0x0003fadd) button_value_adjust_pane_cp6_copy1

0x6ea7,	// (0x00037fa5) list_highlight_pane_cp2_copy1_ParamLimits

0x6ea7,	// (0x00037fa5) list_highlight_pane_cp2_copy1

0xe9f3,	// (0x0003faf1) list_set_pane_copy1_ParamLimits

0xe9f3,	// (0x0003faf1) list_set_pane_copy1

0xe95a,	// (0x0003fa58) main_pane_set_t1_copy1_ParamLimits

0xe95a,	// (0x0003fa58) main_pane_set_t1_copy1

0xe994,	// (0x0003fa92) main_pane_set_t2_copy1_ParamLimits

0xe994,	// (0x0003fa92) main_pane_set_t2_copy1

0xeaba,	// (0x0003fbb8) main_pane_set_t3_copy1

0xeac8,	// (0x0003fbc6) main_pane_set_t4_copy1

0xe9b3,	// (0x0003fab1) set_content_pane_g1_copy1_ParamLimits

0xe9b3,	// (0x0003fab1) set_content_pane_g1_copy1

0xead6,	// (0x0003fbd4) setting_code_pane_copy1

0xeade,	// (0x0003fbdc) setting_slider_graphic_pane_copy1

0xeade,	// (0x0003fbdc) setting_slider_pane_copy1

0xeade,	// (0x0003fbdc) setting_text_pane_copy1

0xeade,	// (0x0003fbdc) setting_volume_pane_copy1

0xead6,	// (0x0003fbd4) settings_code_pane_cp2_copy1

0xeae6,	// (0x0003fbe4) settings_code_pane_cp_copy1_ParamLimits

0xeae6,	// (0x0003fbe4) settings_code_pane_cp_copy1

0x84bb,	// (0x000395b9) volume_set_pane_copy1

0xeafa,	// (0x0003fbf8) volume_set_pane_g10_copy1

0xeb06,	// (0x0003fc04) volume_set_pane_g1_copy1

0xeb10,	// (0x0003fc0e) volume_set_pane_g2_copy1

0xeb1a,	// (0x0003fc18) volume_set_pane_g3_copy1

0xeb24,	// (0x0003fc22) volume_set_pane_g4_copy1

0xeb2e,	// (0x0003fc2c) volume_set_pane_g5_copy1

0xeb38,	// (0x0003fc36) volume_set_pane_g6_copy1

0xeb42,	// (0x0003fc40) volume_set_pane_g7_copy1

0xeb4c,	// (0x0003fc4a) volume_set_pane_g8_copy1

0xeb56,	// (0x0003fc54) volume_set_pane_g9_copy1

0xef84,	// (0x00040082) bg_set_opt_pane_cp_copy1_ParamLimits

0xef84,	// (0x00040082) bg_set_opt_pane_cp_copy1

0x84c7,	// (0x000395c5) setting_slider_pane_t1_copy1_ParamLimits

0x84c7,	// (0x000395c5) setting_slider_pane_t1_copy1

0x84e5,	// (0x000395e3) setting_slider_pane_t2_copy1_ParamLimits

0x84e5,	// (0x000395e3) setting_slider_pane_t2_copy1

0x84ff,	// (0x000395fd) setting_slider_pane_t3_copy1_ParamLimits

0x84ff,	// (0x000395fd) setting_slider_pane_t3_copy1

0x8517,	// (0x00039615) slider_set_pane_copy1_ParamLimits

0x8517,	// (0x00039615) slider_set_pane_copy1

0x1e70,	// (0x00032f6e) set_opt_bg_pane_g1_copy2

0x1e78,	// (0x00032f76) set_opt_bg_pane_g2_copy2

0xeb60,	// (0x0003fc5e) set_opt_bg_pane_g3_copy2

0x1e88,	// (0x00032f86) set_opt_bg_pane_g4_copy2

0x1e90,	// (0x00032f8e) set_opt_bg_pane_g5_copy2

0x1e98,	// (0x00032f96) set_opt_bg_pane_g6_copy2

0xeb6a,	// (0x0003fc68) set_opt_bg_pane_g7_copy2

0xeb74,	// (0x0003fc72) set_opt_bg_pane_g8_copy2

0xeb7e,	// (0x0003fc7c) set_opt_bg_pane_g9_copy2

0x852d,	// (0x0003962b) aid_size_touch_slider_mark_copy1_ParamLimits

0x852d,	// (0x0003962b) aid_size_touch_slider_mark_copy1

0xeb88,	// (0x0003fc86) slider_set_pane_g1_copy1

0x8541,	// (0x0003963f) slider_set_pane_g2_copy1

0x7359,	// (0x00038457) slider_set_pane_g3_copy1_ParamLimits

0x7359,	// (0x00038457) slider_set_pane_g3_copy1

0x736d,	// (0x0003846b) slider_set_pane_g4_copy1_ParamLimits

0x736d,	// (0x0003846b) slider_set_pane_g4_copy1

0x7385,	// (0x00038483) slider_set_pane_g5_copy1_ParamLimits

0x7385,	// (0x00038483) slider_set_pane_g5_copy1

0x7359,	// (0x00038457) slider_set_pane_g6_copy1_ParamLimits

0x7359,	// (0x00038457) slider_set_pane_g6_copy1

0x8549,	// (0x00039647) slider_set_pane_g7_copy1_ParamLimits

0x8549,	// (0x00039647) slider_set_pane_g7_copy1

0xe4e9,	// (0x0003f5e7) bg_set_opt_pane_cp2_copy1

0xeb91,	// (0x0003fc8f) setting_slider_graphic_pane_g1_copy1

0xeb9a,	// (0x0003fc98) setting_slider_graphic_pane_t1_copy1

0xebaa,	// (0x0003fca8) setting_slider_graphic_pane_t2_copy1

0xebba,	// (0x0003fcb8) slider_set_pane_cp_copy1

0xebca,	// (0x0003fcc8) input_focus_pane_cp1_copy1

0xebd3,	// (0x0003fcd1) list_set_text_pane_copy1

0xebdb,	// (0x0003fcd9) setting_text_pane_g1_copy1

0x46f9,	// (0x000357f7) set_text_pane_t1_copy1

0xebca,	// (0x0003fcc8) input_focus_pane_cp2_copy1

0xebdb,	// (0x0003fcd9) setting_code_pane_g1_copy1

0xebe4,	// (0x0003fce2) setting_code_pane_t1_copy1

0xebf2,	// (0x0003fcf0) list_set_graphic_pane_copy1

0xe4e9,	// (0x0003f5e7) bg_set_opt_pane_cp4_copy1

0x67ac,	// (0x000378aa) list_set_graphic_pane_g1_copy1_ParamLimits

0x67ac,	// (0x000378aa) list_set_graphic_pane_g1_copy1

0xec04,	// (0x0003fd02) list_set_graphic_pane_g2_copy1

0x67c4,	// (0x000378c2) list_set_graphic_pane_t1_copy1_ParamLimits

0x67c4,	// (0x000378c2) list_set_graphic_pane_t1_copy1

0xb6f1,	// (0x0003c7ef) rs_clock_indi_pane_g1

0xec0c,	// (0x0003fd0a) rs_clock_indi_pane_t1

0xec1a,	// (0x0003fd18) rs_indi_pane

0xec22,	// (0x0003fd20) rs_indi_pane_g1

0xec2b,	// (0x0003fd29) rs_indi_pane_g2

0xec34,	// (0x0003fd32) rs_indi_pane_g3

0x0002,

0xfecc,	// (0x00040fca) rs_indi_pane_g

0x6936,	// (0x00037a34) bg_popup_preview_window_pane_cp03

0xec3d,	// (0x0003fd3b) popup_fep_tooltip_window_t1

0xc3a8,	// (0x0003d4a6) popup_note2_window_g2_ParamLimits

0xc3a8,	// (0x0003d4a6) popup_note2_window_g2

0x0001,

0xfc65,	// (0x00040d63) popup_note2_window_g_ParamLimits

0xfc65,	// (0x00040d63) popup_note2_window_g

0xc8d1,	// (0x0003d9cf) bg_popup_sub_pane_cp11_ParamLimits

0xc8de,	// (0x0003d9dc) cell_ai3_links_pane_g1_ParamLimits

0xc8f5,	// (0x0003d9f3) cell_ai3_links_pane_t1

0x46f9,	// (0x000357f7) set_text_pane_t1_copy1_ParamLimits

0x6843,	// (0x00037941) cell_graphic_popup_pane_cp2_ParamLimits

0x6843,	// (0x00037941) cell_graphic_popup_pane_cp2

0xec4b,	// (0x0003fd49) cell_graphic_popup_pane_g1_cp2

0xf2fc,	// (0x000403fa) cell_graphic_popup_pane_g2_cp2

0xec53,	// (0x0003fd51) cell_graphic_popup_pane_g3_cp2

0xec5b,	// (0x0003fd59) cell_graphic_popup_pane_t2_cp2

0xf30d,	// (0x0004040b) grid_highlight_pane_cp3_cp2

0x2119,	// (0x00033217) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1e15,	// (0x00032f13) main_tmo_pane_ParamLimits

0xcc15,	// (0x0003dd13) popup_tmo_big_image_note_window

0xe298,	// (0x0003f396) cell_ai5_widget_list_pane

0xe2a0,	// (0x0003f39e) cell_ai5_widget_lrg_icon_pane

0xe840,	// (0x0003f93e) tmo_note_info_pane_t1_ParamLimits

0xe855,	// (0x0003f953) tmo_note_info_pane_t2_ParamLimits

0xe86e,	// (0x0003f96c) tmo_note_info_pane_t3_ParamLimits

0xe883,	// (0x0003f981) tmo_note_info_pane_t4_ParamLimits

0xe895,	// (0x0003f993) tmo_note_info_pane_t5_ParamLimits

0xfeba,	// (0x00040fb8) tmo_note_info_pane_t_ParamLimits

0xe9bf,	// (0x0003fabd) settings_container_pane_ParamLimits

0xebc2,	// (0x0003fcc0) indicator_popup_pane_cp5

0xebc2,	// (0x0003fcc0) indicator_popup_pane_cp6

0xebf2,	// (0x0003fcf0) list_set_graphic_pane_copy1_ParamLimits

0xe4d5,	// (0x0003f5d3) bg_popup_window_pane_cp23

0xec69,	// (0x0003fd67) popup_tmo_big_image_note_window_g1

0xec75,	// (0x0003fd73) popup_tmo_big_image_note_window_t1

0xec85,	// (0x0003fd83) popup_tmo_big_image_note_window_t2

0xec95,	// (0x0003fd93) popup_tmo_big_image_note_window_t3

0x0002,

0xfed3,	// (0x00040fd1) popup_tmo_big_image_note_window_t

0xb6f1,	// (0x0003c7ef) cell_ai5_widget_lrg_icon_pane_g1

0xeca5,	// (0x0003fda3) cell_ai5_widget_lrg_icon_pane_t1

0xecb3,	// (0x0003fdb1) cell_ai5_widget_list_row_pane_ParamLimits

0xecb3,	// (0x0003fdb1) cell_ai5_widget_list_row_pane

0xeccb,	// (0x0003fdc9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeccb,	// (0x0003fdc9) cell_ai5_widget_list_row_pane_g1

0xecd8,	// (0x0003fdd6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xecd8,	// (0x0003fdd6) cell_ai5_widget_list_row_pane_t1

0xed03,	// (0x0003fe01) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xed03,	// (0x0003fe01) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeda,	// (0x00040fd8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeda,	// (0x00040fd8) cell_ai5_widget_list_row_pane_t

0x553a,	// (0x00036638) main_fep_vtchi_ss_pane

0xed47,	// (0x0003fe45) popup_fep_char_pre_window

0xed4f,	// (0x0003fe4d) popup_fep_ituss_window

0xed70,	// (0x0003fe6e) popup_fep_vkbss_window

0xed91,	// (0x0003fe8f) grid_vkbss_keypad_pane_ParamLimits

0xed91,	// (0x0003fe8f) grid_vkbss_keypad_pane

0xeda1,	// (0x0003fe9f) ituss_keypad_pane

0x856b,	// (0x00039669) aid_vkbss_key_offset_ParamLimits

0x856b,	// (0x00039669) aid_vkbss_key_offset

0x8577,	// (0x00039675) cell_vkbss_key_pane_ParamLimits

0x8577,	// (0x00039675) cell_vkbss_key_pane

0xedb0,	// (0x0003feae) bg_cell_vkbss_key_g1_ParamLimits

0xedb0,	// (0x0003feae) bg_cell_vkbss_key_g1

0xedbc,	// (0x0003feba) cell_vkbss_key_3p_pane_ParamLimits

0xedbc,	// (0x0003feba) cell_vkbss_key_3p_pane

0xedd6,	// (0x0003fed4) cell_vkbss_key_g1_ParamLimits

0xedd6,	// (0x0003fed4) cell_vkbss_key_g1

0xedf0,	// (0x0003feee) cell_vkbss_key_t1_ParamLimits

0xedf0,	// (0x0003feee) cell_vkbss_key_t1

0x858d,	// (0x0003968b) cell_ituss_key_pane_ParamLimits

0x858d,	// (0x0003968b) cell_ituss_key_pane

0xee1b,	// (0x0003ff19) bg_cell_ituss_key_g1_ParamLimits

0xee1b,	// (0x0003ff19) bg_cell_ituss_key_g1

0xee27,	// (0x0003ff25) cell_ituss_key_pane_g1_ParamLimits

0xee27,	// (0x0003ff25) cell_ituss_key_pane_g1

0x859e,	// (0x0003969c) cell_ituss_key_pane_g2_ParamLimits

0x859e,	// (0x0003969c) cell_ituss_key_pane_g2

0x0002,

0xfee1,	// (0x00040fdf) cell_ituss_key_pane_g_ParamLimits

0xfee1,	// (0x00040fdf) cell_ituss_key_pane_g

0x85ca,	// (0x000396c8) cell_ituss_key_t1_ParamLimits

0x85ca,	// (0x000396c8) cell_ituss_key_t1

0x8604,	// (0x00039702) cell_ituss_key_t2_ParamLimits

0x8604,	// (0x00039702) cell_ituss_key_t2

0x8635,	// (0x00039733) cell_ituss_key_t3_ParamLimits

0x8635,	// (0x00039733) cell_ituss_key_t3

0x8604,	// (0x00039702) cell_ituss_key_t4_ParamLimits

0x8604,	// (0x00039702) cell_ituss_key_t4

0x0004,

0xfee8,	// (0x00040fe6) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x00040fe6) cell_ituss_key_t

0xee4d,	// (0x0003ff4b) cell_vkbss_key_3p_pane_g1

0xee55,	// (0x0003ff53) cell_vkbss_key_3p_pane_g2

0xee5d,	// (0x0003ff5b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x00040ff1) cell_vkbss_key_3p_pane_g

0x553a,	// (0x00036638) bg_popup_fep_char_preview_window_cp02

0x8678,	// (0x00039776) popup_fep_char_pre_window_t1

0xe232,	// (0x0003f330) main_ai5_sk_pane

0xe90f,	// (0x0003fa0d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe91b,	// (0x0003fa19) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe930,	// (0x0003fa2e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe93c,	// (0x0003fa3a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec5,	// (0x00040fc3) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe948,	// (0x0003fa46) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1e15,	// (0x00032f13) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xee65,	// (0x0003ff63) main_ai5_sk_pane_g1

0x9535,	// (0x0003a633) popup_query_code_window_g1

0xed65,	// (0x0003fe63) popup_fep_vkb_icf_pane

0xed7b,	// (0x0003fe79) popup_fep_vtchi_icf_pane

0xee6e,	// (0x0003ff6c) bg_icf_pane

0xee7a,	// (0x0003ff78) list_vkb_icf_pane

0xee86,	// (0x0003ff84) bg_icf_pane_cp01

0xee99,	// (0x0003ff97) vtchi_icf_list_pane

0xeeaa,	// (0x0003ffa8) list_vkb_icf_pane_t1_ParamLimits

0xeeaa,	// (0x0003ffa8) list_vkb_icf_pane_t1

0xeec0,	// (0x0003ffbe) vtchi_icf_list_pane_t1_ParamLimits

0xeec0,	// (0x0003ffbe) vtchi_icf_list_pane_t1

0xed4f,	// (0x0003fe4d) popup_fep_ituss_window_ParamLimits

0xed7b,	// (0x0003fe79) popup_fep_vtchi_icf_pane_ParamLimits

0xeda1,	// (0x0003fe9f) ituss_keypad_pane_ParamLimits

0x855f,	// (0x0003965d) ituss_sks_pane

0xee6e,	// (0x0003ff6c) bg_icf_pane_ParamLimits

0xed2b,	// (0x0003fe29) icf_edit_indi_pane_ParamLimits

0xed2b,	// (0x0003fe29) icf_edit_indi_pane

0xee7a,	// (0x0003ff78) list_vkb_icf_pane_ParamLimits

0xee86,	// (0x0003ff84) bg_icf_pane_cp01_ParamLimits

0xed3a,	// (0x0003fe38) icf_edit_indi_pane_cp01_ParamLimits

0xed3a,	// (0x0003fe38) icf_edit_indi_pane_cp01

0xeea1,	// (0x0003ff9f) vtchi_query_pane

0xb96c,	// (0x0003ca6a) icf_edit_indi_pane_g1_ParamLimits

0xb96c,	// (0x0003ca6a) icf_edit_indi_pane_g1

0xef2f,	// (0x0004002d) icf_edit_indi_pane_g2_ParamLimits

0xef2f,	// (0x0004002d) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x00041009) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x00041009) icf_edit_indi_pane_g

0xef3e,	// (0x0004003c) icf_edit_indi_pane_t1

0xeed8,	// (0x0003ffd6) bg_input_focus_pane_cp042

0xf4e0,	// (0x000405de) vtchi_button_pane

0xeee1,	// (0x0003ffdf) vtchi_query_pane_t1

0xeeef,	// (0x0003ffed) vtchi_query_pane_t2

0xeefd,	// (0x0003fffb) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x00040ff8) vtchi_query_pane_t

0x553a,	// (0x00036638) bg_button_pane_cp13

0xef0b,	// (0x00040009) vtchi_button_pane_g1

0x8687,	// (0x00039785) ituss_sks_pane_g1

0x8692,	// (0x00039790) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x00040fff) ituss_sks_pane_g

0xef13,	// (0x00040011) ituss_sks_pane_t1

0xef21,	// (0x0004001f) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x00041004) ituss_sks_pane_t

0xb1a1,	// (0x0003c29f) indicator_nsta_pane_cp_g1

0xb1aa,	// (0x0003c2a8) indicator_nsta_pane_cp_g2

0xb1b2,	// (0x0003c2b0) indicator_nsta_pane_cp_g3

0xb1ba,	// (0x0003c2b8) indicator_nsta_pane_cp_g4

0xb1c2,	// (0x0003c2c0) indicator_nsta_pane_cp_g5

0xb1ca,	// (0x0003c2c8) indicator_nsta_pane_cp_g6

0x0005,

0xfaa3,	// (0x00040ba1) indicator_nsta_pane_cp_g

0xd91d,	// (0x0003ea1b) cell_graphic2_pane_t2_ParamLimits

0xd91d,	// (0x0003ea1b) cell_graphic2_pane_t2

0x0001,

0xfdbc,	// (0x00040eba) cell_graphic2_pane_t_ParamLimits

0xfdbc,	// (0x00040eba) cell_graphic2_pane_t

0xd94a,	// (0x0003ea48) cell_graphic2_control_pane_t1

0x64f6,	// (0x000375f4) signal_pane_g3_ParamLimits

0x64f6,	// (0x000375f4) signal_pane_g3

0x6508,	// (0x00037606) signal_pane_g4_ParamLimits

0x6508,	// (0x00037606) signal_pane_g4

0xed15,	// (0x0003fe13) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xed15,	// (0x0003fe13) cell_ai5_widget_list_row_pane_t3

0xee3b,	// (0x0003ff39) cell_ituss_key_pane_t1_ParamLimits

0xee3b,	// (0x0003ff39) cell_ituss_key_pane_t1

0x91b2,	// (0x0003a2b0) form_field_data_wide_pane_vc_t2_ParamLimits

0x91b2,	// (0x0003a2b0) form_field_data_wide_pane_vc_t2

0x91c6,	// (0x0003a2c4) form_field_data_wide_pane_vc_t3_ParamLimits

0x91c6,	// (0x0003a2c4) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00040902) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00040902) form_field_data_wide_pane_vc_t

0xae52,	// (0x0003bf50) form_field_slider_wide_pane_vc_t3_ParamLimits

0xae52,	// (0x0003bf50) form_field_slider_wide_pane_vc_t3

0xaf28,	// (0x0003c026) form_field_popup_wide_pane_vc_t2_ParamLimits

0xaf28,	// (0x0003c026) form_field_popup_wide_pane_vc_t2

0xaf3f,	// (0x0003c03d) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaf3f,	// (0x0003c03d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa92,	// (0x00040b90) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x00040b90) form_field_popup_wide_pane_vc_t

0x8392,	// (0x00039490) aid_fshwr2_btn_pane_ParamLimits

0x839e,	// (0x0003949c) aid_fshwr2_syb_pane_ParamLimits

0x83aa,	// (0x000394a8) aid_fshwr2_txt_pane_ParamLimits

0x7bce,	// (0x00038ccc) fshwr2_bg_pane_ParamLimits

0x83b6,	// (0x000394b4) fshwr2_func_candi_pane_ParamLimits

0x83c9,	// (0x000394c7) fshwr2_hwr_syb_pane_ParamLimits

0x83d7,	// (0x000394d5) fshwr2_icf_pane_ParamLimits

0x41c2,	// (0x000352c0) list_double_graphic_pane_vc_g4_ParamLimits

0x41c2,	// (0x000352c0) list_double_graphic_pane_vc_g4

0x85be,	// (0x000396bc) cell_ituss_key_pane_g3_ParamLimits

0x85be,	// (0x000396bc) cell_ituss_key_pane_g3

0x8666,	// (0x00039764) cell_ituss_key_t5_ParamLimits

0x8666,	// (0x00039764) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
