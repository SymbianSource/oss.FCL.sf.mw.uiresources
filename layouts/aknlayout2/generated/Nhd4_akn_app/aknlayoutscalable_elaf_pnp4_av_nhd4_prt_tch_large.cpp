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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002db64 };

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
0x93f6,	// (0x00036f5a) Screen

0x9402,	// (0x00036f66) application_window_ParamLimits

0x9402,	// (0x00036f66) application_window

0x4279,	// (0x00031ddd) screen_g1

0x945e,	// (0x00036fc2) area_bottom_pane_ParamLimits

0x945e,	// (0x00036fc2) area_bottom_pane

0x951e,	// (0x00037082) area_top_pane_ParamLimits

0x951e,	// (0x00037082) area_top_pane

0x95b2,	// (0x00037116) main_pane_ParamLimits

0x95b2,	// (0x00037116) main_pane

0x4283,	// (0x00031de7) misc_graphics

0xbbbf,	// (0x00039723) battery_pane_ParamLimits

0xbbbf,	// (0x00039723) battery_pane

0x615e,	// (0x00033cc2) bg_status_flat_pane_g8

0x6166,	// (0x00033cca) bg_status_flat_pane_g9

0x5893,	// (0x000333f7) context_pane_ParamLimits

0x5893,	// (0x000333f7) context_pane

0xbcf3,	// (0x00039857) navi_pane_ParamLimits

0xbcf3,	// (0x00039857) navi_pane

0xbd5f,	// (0x000398c3) signal_pane_ParamLimits

0xbd5f,	// (0x000398c3) signal_pane

0x0008,

0xf88f,	// (0x0003d3f3) bg_status_flat_pane_g

0xbdc4,	// (0x00039928) status_pane_g1_ParamLimits

0xbdc4,	// (0x00039928) status_pane_g1

0xbdd8,	// (0x0003993c) status_pane_g2_ParamLimits

0xbdd8,	// (0x0003993c) status_pane_g2

0x58f8,	// (0x0003345c) status_pane_g3_ParamLimits

0x58f8,	// (0x0003345c) status_pane_g3

0x0004,

0xf7bd,	// (0x0003d321) status_pane_g_ParamLimits

0xf7bd,	// (0x0003d321) status_pane_g

0xbde4,	// (0x00039948) title_pane_ParamLimits

0xbde4,	// (0x00039948) title_pane

0xbe21,	// (0x00039985) uni_indicator_pane_ParamLimits

0xbe21,	// (0x00039985) uni_indicator_pane

0x56be,	// (0x00033222) bg_list_pane_ParamLimits

0x56be,	// (0x00033222) bg_list_pane

0xa4ad,	// (0x00038011) find_pane

0xb6d7,	// (0x0003923b) listscroll_app_pane_ParamLimits

0xb6d7,	// (0x0003923b) listscroll_app_pane

0x56de,	// (0x00033242) listscroll_form_pane

0xa4b5,	// (0x00038019) listscroll_gen_pane_ParamLimits

0xa4b5,	// (0x00038019) listscroll_gen_pane

0x56de,	// (0x00033242) listscroll_set_pane

0x9c4b,	// (0x000377af) main_idle_act_pane

0x54a4,	// (0x00033008) main_idle_trad_pane

0x54a4,	// (0x00033008) main_list_empty_pane

0x4bb4,	// (0x00032718) main_midp_pane

0x56f8,	// (0x0003325c) main_pane_g1_ParamLimits

0x56f8,	// (0x0003325c) main_pane_g1

0xb6e3,	// (0x00039247) popup_ai_message_window_ParamLimits

0xb6e3,	// (0x00039247) popup_ai_message_window

0xb761,	// (0x000392c5) popup_fep_china_uni_window_ParamLimits

0xb761,	// (0x000392c5) popup_fep_china_uni_window

0x572a,	// (0x0003328e) popup_fep_japan_candidate_window_ParamLimits

0x572a,	// (0x0003328e) popup_fep_japan_candidate_window

0x5748,	// (0x000332ac) popup_fep_japan_predictive_window_ParamLimits

0x5748,	// (0x000332ac) popup_fep_japan_predictive_window

0xb7bb,	// (0x0003931f) popup_find_window

0xb7c8,	// (0x0003932c) popup_grid_graphic_window_ParamLimits

0xb7c8,	// (0x0003932c) popup_grid_graphic_window

0x5778,	// (0x000332dc) popup_large_graphic_colour_window

0xb7ee,	// (0x00039352) popup_menu_window_ParamLimits

0xb7ee,	// (0x00039352) popup_menu_window

0xb9a8,	// (0x0003950c) popup_note_image_window

0xb994,	// (0x000394f8) popup_note_wait_window_ParamLimits

0xb994,	// (0x000394f8) popup_note_wait_window

0xb994,	// (0x000394f8) popup_note_window_ParamLimits

0xb994,	// (0x000394f8) popup_note_window

0xb9fe,	// (0x00039562) popup_query_code_window_ParamLimits

0xb9fe,	// (0x00039562) popup_query_code_window

0x579e,	// (0x00033302) popup_query_data_code_window_ParamLimits

0x579e,	// (0x00033302) popup_query_data_code_window

0xba12,	// (0x00039576) popup_query_data_window_ParamLimits

0xba12,	// (0x00039576) popup_query_data_window

0xba2a,	// (0x0003958e) popup_query_sat_info_window_ParamLimits

0xba2a,	// (0x0003958e) popup_query_sat_info_window

0xba63,	// (0x000395c7) popup_snote_single_graphic_window_ParamLimits

0xba63,	// (0x000395c7) popup_snote_single_graphic_window

0xba63,	// (0x000395c7) popup_snote_single_text_window_ParamLimits

0xba63,	// (0x000395c7) popup_snote_single_text_window

0x57b5,	// (0x00033319) popup_sub_window_general

0x57fb,	// (0x0003335f) popup_window_general_ParamLimits

0x57fb,	// (0x0003335f) popup_window_general

0x5810,	// (0x00033374) power_save_pane

0xa333,	// (0x00037e97) control_pane_g1_ParamLimits

0xa333,	// (0x00037e97) control_pane_g1

0xa35c,	// (0x00037ec0) control_pane_g2_ParamLimits

0xa35c,	// (0x00037ec0) control_pane_g2

0x5698,	// (0x000331fc) control_pane_g3_ParamLimits

0x5698,	// (0x000331fc) control_pane_g3

0x0007,

0xf7a5,	// (0x0003d309) control_pane_g_ParamLimits

0xf7a5,	// (0x0003d309) control_pane_g

0xa3c8,	// (0x00037f2c) control_pane_t1_ParamLimits

0xa3c8,	// (0x00037f2c) control_pane_t1

0xa41a,	// (0x00037f7e) control_pane_t2_ParamLimits

0xa41a,	// (0x00037f7e) control_pane_t2

0x0002,

0xf7b6,	// (0x0003d31a) control_pane_t_ParamLimits

0xf7b6,	// (0x0003d31a) control_pane_t

0x55b9,	// (0x0003311d) navi_navi_volume_pane_cp1

0x55c2,	// (0x00033126) status_small_icon_pane

0x55ca,	// (0x0003312e) status_small_pane_g1_ParamLimits

0x55ca,	// (0x0003312e) status_small_pane_g1

0x55fe,	// (0x00033162) status_small_pane_g2_ParamLimits

0x55fe,	// (0x00033162) status_small_pane_g2

0x560a,	// (0x0003316e) status_small_pane_g3_ParamLimits

0x560a,	// (0x0003316e) status_small_pane_g3

0x5616,	// (0x0003317a) status_small_pane_g4_ParamLimits

0x5616,	// (0x0003317a) status_small_pane_g4

0x5622,	// (0x00033186) status_small_pane_g5_ParamLimits

0x5622,	// (0x00033186) status_small_pane_g5

0x5631,	// (0x00033195) status_small_pane_g6_ParamLimits

0x5631,	// (0x00033195) status_small_pane_g6

0x0007,

0xf794,	// (0x0003d2f8) status_small_pane_g_ParamLimits

0xf794,	// (0x0003d2f8) status_small_pane_g

0x5661,	// (0x000331c5) status_small_pane_t1

0x5684,	// (0x000331e8) status_small_wait_pane_ParamLimits

0x5684,	// (0x000331e8) status_small_wait_pane

0x9f59,	// (0x00037abd) aid_levels_signal_ParamLimits

0x9f59,	// (0x00037abd) aid_levels_signal

0x9f6b,	// (0x00037acf) signal_pane_g1_ParamLimits

0x9f6b,	// (0x00037acf) signal_pane_g1

0x9f80,	// (0x00037ae4) signal_pane_g2_ParamLimits

0x9f80,	// (0x00037ae4) signal_pane_g2

0x0001,

0xf729,	// (0x0003d28d) signal_pane_g_ParamLimits

0xf729,	// (0x0003d28d) signal_pane_g

0x4fe8,	// (0x00032b4c) context_pane_g1

0x97e3,	// (0x00037347) title_pane_g1

0x980d,	// (0x00037371) title_pane_t1

0x4299,	// (0x00031dfd) title_pane_t2

0x42bf,	// (0x00031e23) title_pane_t3

0x0002,

0xf573,	// (0x0003d0d7) title_pane_t

0xbe39,	// (0x0003999d) aid_levels_battery_ParamLimits

0xbe39,	// (0x0003999d) aid_levels_battery

0xbe4d,	// (0x000399b1) battery_pane_g1_ParamLimits

0xbe4d,	// (0x000399b1) battery_pane_g1

0xbe63,	// (0x000399c7) battery_pane_g2_ParamLimits

0xbe63,	// (0x000399c7) battery_pane_g2

0x0001,

0xf7c8,	// (0x0003d32c) battery_pane_g_ParamLimits

0xf7c8,	// (0x0003d32c) battery_pane_g

0xc0f5,	// (0x00039c59) uni_indicator_pane_g1

0xc10a,	// (0x00039c6e) uni_indicator_pane_g2

0xc120,	// (0x00039c84) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0003d49b) uni_indicator_pane_g

0x5314,	// (0x00032e78) navi_icon_pane_ParamLimits

0x5314,	// (0x00032e78) navi_icon_pane

0x525b,	// (0x00032dbf) navi_midp_pane

0x5330,	// (0x00032e94) navi_navi_pane

0x533a,	// (0x00032e9e) navi_text_pane_ParamLimits

0x533a,	// (0x00032e9e) navi_text_pane

0x4279,	// (0x00031ddd) status_small_wait_pane_g1

0x46d1,	// (0x00032235) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0003d496) status_small_wait_pane_g

0xc09a,	// (0x00039bfe) navi_navi_icon_text_pane

0xc0a2,	// (0x00039c06) navi_navi_pane_g1_ParamLimits

0xc0a2,	// (0x00039c06) navi_navi_pane_g1

0xc0b4,	// (0x00039c18) navi_navi_pane_g2_ParamLimits

0xc0b4,	// (0x00039c18) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0003d464) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0003d464) navi_navi_pane_g

0x66f3,	// (0x00034257) navi_navi_tabs_pane

0xc0c6,	// (0x00039c2a) navi_navi_text_pane

0xc09a,	// (0x00039bfe) navi_navi_volume_pane

0xc085,	// (0x00039be9) navi_text_pane_t1

0xc076,	// (0x00039bda) navi_icon_pane_g1

0x6634,	// (0x00034198) navi_navi_text_pane_t1

0xa750,	// (0x000382b4) navi_navi_volume_pane_g1

0xa758,	// (0x000382bc) volume_small_pane

0xbfe8,	// (0x00039b4c) navi_navi_icon_text_pane_g1

0xbff0,	// (0x00039b54) navi_navi_icon_text_pane_t1

0x5330,	// (0x00032e94) navi_tabs_2_long_pane

0x5330,	// (0x00032e94) navi_tabs_2_pane

0x5330,	// (0x00032e94) navi_tabs_3_long_pane

0x5330,	// (0x00032e94) navi_tabs_3_pane

0x5330,	// (0x00032e94) navi_tabs_4_pane

0xa730,	// (0x00038294) tabs_2_active_pane_ParamLimits

0xa730,	// (0x00038294) tabs_2_active_pane

0xa740,	// (0x000382a4) tabs_2_passive_pane_ParamLimits

0xa740,	// (0x000382a4) tabs_2_passive_pane

0xa6fe,	// (0x00038262) tabs_3_active_pane_ParamLimits

0xa6fe,	// (0x00038262) tabs_3_active_pane

0xa70e,	// (0x00038272) tabs_3_passive_pane_ParamLimits

0xa70e,	// (0x00038272) tabs_3_passive_pane

0xa71f,	// (0x00038283) tabs_3_passive_pane_cp_ParamLimits

0xa71f,	// (0x00038283) tabs_3_passive_pane_cp

0xa6ba,	// (0x0003821e) tabs_4_active_pane_ParamLimits

0xa6ba,	// (0x0003821e) tabs_4_active_pane

0xa6cb,	// (0x0003822f) tabs_4_passive_pane_ParamLimits

0xa6cb,	// (0x0003822f) tabs_4_passive_pane

0xa6dc,	// (0x00038240) tabs_4_passive_pane_cp_ParamLimits

0xa6dc,	// (0x00038240) tabs_4_passive_pane_cp

0xa6ed,	// (0x00038251) tabs_4_passive_pane_cp2_ParamLimits

0xa6ed,	// (0x00038251) tabs_4_passive_pane_cp2

0xa696,	// (0x000381fa) tabs_2_long_active_pane_ParamLimits

0xa696,	// (0x000381fa) tabs_2_long_active_pane

0xa6a8,	// (0x0003820c) tabs_2_long_passive_pane_ParamLimits

0xa6a8,	// (0x0003820c) tabs_2_long_passive_pane

0xa651,	// (0x000381b5) tabs_3_long_active_pane_ParamLimits

0xa651,	// (0x000381b5) tabs_3_long_active_pane

0xa66a,	// (0x000381ce) tabs_3_long_passive_pane_ParamLimits

0xa66a,	// (0x000381ce) tabs_3_long_passive_pane

0xa67d,	// (0x000381e1) tabs_3_long_passive_pane_cp_ParamLimits

0xa67d,	// (0x000381e1) tabs_3_long_passive_pane_cp

0xa5f7,	// (0x0003815b) volume_small_pane_g1

0xa600,	// (0x00038164) volume_small_pane_g2

0xa609,	// (0x0003816d) volume_small_pane_g3

0xa612,	// (0x00038176) volume_small_pane_g4

0xa61b,	// (0x0003817f) volume_small_pane_g5

0xa624,	// (0x00038188) volume_small_pane_g6

0xa62d,	// (0x00038191) volume_small_pane_g7

0xa636,	// (0x0003819a) volume_small_pane_g8

0xa63f,	// (0x000381a3) volume_small_pane_g9

0xa648,	// (0x000381ac) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0003d430) volume_small_pane_g

0x42df,	// (0x00031e43) bg_active_tab_pane_cp2_ParamLimits

0x42df,	// (0x00031e43) bg_active_tab_pane_cp2

0x9875,	// (0x000373d9) tabs_3_active_pane_g1

0x987d,	// (0x000373e1) tabs_3_active_pane_t1

0x42df,	// (0x00031e43) bg_passive_tab_pane_cp2_ParamLimits

0x42df,	// (0x00031e43) bg_passive_tab_pane_cp2

0x9875,	// (0x000373d9) tabs_3_passive_pane_g1

0x987d,	// (0x000373e1) tabs_3_passive_pane_t1

0x42df,	// (0x00031e43) bg_active_tab_pane_cp3_ParamLimits

0x42df,	// (0x00031e43) bg_active_tab_pane_cp3

0x988f,	// (0x000373f3) tabs_4_active_pane_g1

0x9897,	// (0x000373fb) tabs_4_active_pane_t1

0x42df,	// (0x00031e43) bg_passive_tab_pane_cp3_ParamLimits

0x42df,	// (0x00031e43) bg_passive_tab_pane_cp3

0x988f,	// (0x000373f3) tabs_4_1_passive_pane_g1

0x9897,	// (0x000373fb) tabs_4_1_passive_pane_t1

0x4bb4,	// (0x00032718) list_highlight_pane_cp2

0xc198,	// (0x00039cfc) list_set_pane_ParamLimits

0xc198,	// (0x00039cfc) list_set_pane

0xc23a,	// (0x00039d9e) main_pane_set_t1_ParamLimits

0xc23a,	// (0x00039d9e) main_pane_set_t1

0xc25a,	// (0x00039dbe) main_pane_set_t2_ParamLimits

0xc25a,	// (0x00039dbe) main_pane_set_t2

0xc26e,	// (0x00039dd2) main_pane_set_t3_ParamLimits

0xc26e,	// (0x00039dd2) main_pane_set_t3

0xc280,	// (0x00039de4) main_pane_set_t4_ParamLimits

0xc280,	// (0x00039de4) main_pane_set_t4

0x0003,

0xf99c,	// (0x0003d500) main_pane_set_t_ParamLimits

0xf99c,	// (0x0003d500) main_pane_set_t

0xc292,	// (0x00039df6) setting_code_pane

0xc29c,	// (0x00039e00) setting_slider_graphic_pane

0xc29c,	// (0x00039e00) setting_slider_pane

0xc29c,	// (0x00039e00) setting_text_pane

0xc29c,	// (0x00039e00) setting_volume_pane

0x98a9,	// (0x0003740d) volume_set_pane

0x42df,	// (0x00031e43) bg_set_opt_pane_cp

0x98b1,	// (0x00037415) setting_slider_pane_t1

0x98ca,	// (0x0003742e) setting_slider_pane_t2

0x98e3,	// (0x00037447) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0003d0de) setting_slider_pane_t

0x98fa,	// (0x0003745e) slider_set_pane

0x4283,	// (0x00031de7) bg_set_opt_pane_cp2

0x42ed,	// (0x00031e51) setting_slider_graphic_pane_g1

0x9910,	// (0x00037474) setting_slider_graphic_pane_t1

0x991f,	// (0x00037483) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0003d0e5) setting_slider_graphic_pane_t

0x992e,	// (0x00037492) slider_set_pane_cp

0x4283,	// (0x00031de7) input_focus_pane_cp1

0x6b48,	// (0x000346ac) list_set_text_pane

0x4279,	// (0x00031ddd) setting_text_pane_g1

0x4283,	// (0x00031de7) input_focus_pane_cp2

0x4279,	// (0x00031ddd) setting_code_pane_g1

0x42f6,	// (0x00031e5a) setting_code_pane_t1

0x85d2,	// (0x00036136) set_text_pane_t1_ParamLimits

0x85d2,	// (0x00036136) set_text_pane_t1

0x4ac4,	// (0x00032628) set_opt_bg_pane_g1

0x4acc,	// (0x00032630) set_opt_bg_pane_g2

0x6b28,	// (0x0003468c) set_opt_bg_pane_g3

0x4adc,	// (0x00032640) set_opt_bg_pane_g4

0x4ae4,	// (0x00032648) set_opt_bg_pane_g5

0x4aec,	// (0x00032650) set_opt_bg_pane_g6

0x6b30,	// (0x00034694) set_opt_bg_pane_g7

0x6b38,	// (0x0003469c) set_opt_bg_pane_g8

0x6b40,	// (0x000346a4) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0003d4ed) set_opt_bg_pane_g

0x6b1b,	// (0x0003467f) slider_set_pane_g1

0xa7c5,	// (0x00038329) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0003d4de) slider_set_pane_g

0xa761,	// (0x000382c5) volume_set_pane_g1

0xa769,	// (0x000382cd) volume_set_pane_g2

0xa771,	// (0x000382d5) volume_set_pane_g3

0xa779,	// (0x000382dd) volume_set_pane_g4

0xa781,	// (0x000382e5) volume_set_pane_g5

0xa789,	// (0x000382ed) volume_set_pane_g6

0xa791,	// (0x000382f5) volume_set_pane_g7

0xa799,	// (0x000382fd) volume_set_pane_g8

0xa7a1,	// (0x00038305) volume_set_pane_g9

0xa7a9,	// (0x0003830d) volume_set_pane_g10

0x0009,

0xf952,	// (0x0003d4b6) volume_set_pane_g

0x9936,	// (0x0003749a) indicator_pane_ParamLimits

0x9936,	// (0x0003749a) indicator_pane

0x9942,	// (0x000374a6) main_idle_pane_g2_ParamLimits

0x9942,	// (0x000374a6) main_idle_pane_g2

0x996a,	// (0x000374ce) main_pane_idle_g1_ParamLimits

0x996a,	// (0x000374ce) main_pane_idle_g1

0x4304,	// (0x00031e68) popup_clock_digital_analogue_window_ParamLimits

0x4304,	// (0x00031e68) popup_clock_digital_analogue_window

0x9977,	// (0x000374db) soft_indicator_pane_ParamLimits

0x9977,	// (0x000374db) soft_indicator_pane

0x9983,	// (0x000374e7) wallpaper_pane_ParamLimits

0x9983,	// (0x000374e7) wallpaper_pane

0x4279,	// (0x00031ddd) wallpaper_pane_g1

0x998f,	// (0x000374f3) indicator_pane_g1_ParamLimits

0x998f,	// (0x000374f3) indicator_pane_g1

0x6c8f,	// (0x000347f3) navi_navi_icon_text_pane_srt_g1

0x4332,	// (0x00031e96) soft_indicator_pane_t1

0x434c,	// (0x00031eb0) aid_ps_area_pane

0x999b,	// (0x000374ff) aid_ps_clock_pane

0x435d,	// (0x00031ec1) aid_ps_indicator_pane

0x4369,	// (0x00031ecd) indicator_ps_pane_ParamLimits

0x4369,	// (0x00031ecd) indicator_ps_pane

0x4378,	// (0x00031edc) power_save_pane_g1_ParamLimits

0x4378,	// (0x00031edc) power_save_pane_g1

0x4384,	// (0x00031ee8) power_save_pane_g2_ParamLimits

0x4384,	// (0x00031ee8) power_save_pane_g2

0x9412,	// (0x00036f76) aid_navinavi_width_pane

0x434c,	// (0x00031eb0) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0003d0ea) power_save_pane_g_ParamLimits

0xf586,	// (0x0003d0ea) power_save_pane_g

0x4392,	// (0x00031ef6) power_save_pane_t1_ParamLimits

0x4392,	// (0x00031ef6) power_save_pane_t1

0x999b,	// (0x000374ff) aid_ps_clock_pane_ParamLimits

0x435d,	// (0x00031ec1) aid_ps_indicator_pane_ParamLimits

0x43a4,	// (0x00031f08) power_save_pane_t4_ParamLimits

0x43a4,	// (0x00031f08) power_save_pane_t4

0x0001,

0xf58b,	// (0x0003d0ef) power_save_pane_t_ParamLimits

0xf58b,	// (0x0003d0ef) power_save_pane_t

0x43ce,	// (0x00031f32) power_save_t3_ParamLimits

0x43ce,	// (0x00031f32) power_save_t3

0x43b9,	// (0x00031f1d) power_save_t2_ParamLimits

0x43b9,	// (0x00031f1d) power_save_t2

0x43e3,	// (0x00031f47) indicator_ps_pane_g1

0x99a9,	// (0x0003750d) ai_gene_pane_ParamLimits

0x99a9,	// (0x0003750d) ai_gene_pane

0x99b5,	// (0x00037519) ai_links_pane_ParamLimits

0x99b5,	// (0x00037519) ai_links_pane

0x99c1,	// (0x00037525) indicator_pane_cp1_ParamLimits

0x99c1,	// (0x00037525) indicator_pane_cp1

0x99cd,	// (0x00037531) main_pane_idle_g1_cp_ParamLimits

0x99cd,	// (0x00037531) main_pane_idle_g1_cp

0x43ec,	// (0x00031f50) popup_ai_links_title_window

0x99d9,	// (0x0003753d) soft_indicator_pane_cp1_ParamLimits

0x99d9,	// (0x0003753d) soft_indicator_pane_cp1

0x6963,	// (0x000344c7) ai_links_pane_g1

0x696c,	// (0x000344d0) grid_ai_links_pane

0xc0ea,	// (0x00039c4e) ai_gene_pane_1

0x6951,	// (0x000344b5) ai_gene_pane_2

0x695a,	// (0x000344be) list_highlight_pane_cp4

0xc0ce,	// (0x00039c32) cell_ai_link_pane_ParamLimits

0xc0ce,	// (0x00039c32) cell_ai_link_pane

0x6949,	// (0x000344ad) cell_ai_link_pane_g1

0x46d1,	// (0x00032235) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0003d491) cell_ai_link_pane_g

0x4283,	// (0x00031de7) grid_highlight_cp2

0x4283,	// (0x00031de7) bg_popup_sub_pane_cp1

0x4403,	// (0x00031f67) popup_ai_links_title_window_t1

0x6897,	// (0x000343fb) ai_gene_pane_1_g1_ParamLimits

0x6897,	// (0x000343fb) ai_gene_pane_1_g1

0x68a3,	// (0x00034407) ai_gene_pane_1_g2_ParamLimits

0x68a3,	// (0x00034407) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0003d487) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0003d487) ai_gene_pane_1_g

0x68b0,	// (0x00034414) ai_gene_pane_1_t1_ParamLimits

0x68b0,	// (0x00034414) ai_gene_pane_1_t1

0x68e4,	// (0x00034448) grid_ai_soft_ind_pane

0x6882,	// (0x000343e6) ai_gene_pane_2_t1_ParamLimits

0x6882,	// (0x000343e6) ai_gene_pane_2_t1

0x99e5,	// (0x00037549) main_pane_empty_t1_ParamLimits

0x99e5,	// (0x00037549) main_pane_empty_t1

0x99fd,	// (0x00037561) main_pane_empty_t2_ParamLimits

0x99fd,	// (0x00037561) main_pane_empty_t2

0x9a12,	// (0x00037576) main_pane_empty_t3_ParamLimits

0x9a12,	// (0x00037576) main_pane_empty_t3

0x9a24,	// (0x00037588) main_pane_empty_t4_ParamLimits

0x9a24,	// (0x00037588) main_pane_empty_t4

0x9a36,	// (0x0003759a) main_pane_empty_t5_ParamLimits

0x9a36,	// (0x0003759a) main_pane_empty_t5

0x0004,

0xf590,	// (0x0003d0f4) main_pane_empty_t_ParamLimits

0xf590,	// (0x0003d0f4) main_pane_empty_t

0x4b15,	// (0x00032679) bg_popup_window_pane_ParamLimits

0x4b15,	// (0x00032679) bg_popup_window_pane

0x6642,	// (0x000341a6) find_popup_pane_cp2_ParamLimits

0x6642,	// (0x000341a6) find_popup_pane_cp2

0x664e,	// (0x000341b2) heading_pane_ParamLimits

0x664e,	// (0x000341b2) heading_pane

0x4283,	// (0x00031de7) bg_popup_sub_pane

0xc00a,	// (0x00039b6e) bg_popup_window_pane_g1_ParamLimits

0xc00a,	// (0x00039b6e) bg_popup_window_pane_g1

0xc016,	// (0x00039b7a) bg_popup_window_pane_g2_ParamLimits

0xc016,	// (0x00039b7a) bg_popup_window_pane_g2

0xc022,	// (0x00039b86) bg_popup_window_pane_g3_ParamLimits

0xc022,	// (0x00039b86) bg_popup_window_pane_g3

0xc02e,	// (0x00039b92) bg_popup_window_pane_g4_ParamLimits

0xc02e,	// (0x00039b92) bg_popup_window_pane_g4

0xc03a,	// (0x00039b9e) bg_popup_window_pane_g5_ParamLimits

0xc03a,	// (0x00039b9e) bg_popup_window_pane_g5

0xc046,	// (0x00039baa) bg_popup_window_pane_g6_ParamLimits

0xc046,	// (0x00039baa) bg_popup_window_pane_g6

0xc052,	// (0x00039bb6) bg_popup_window_pane_g7_ParamLimits

0xc052,	// (0x00039bb6) bg_popup_window_pane_g7

0xc05e,	// (0x00039bc2) bg_popup_window_pane_g8_ParamLimits

0xc05e,	// (0x00039bc2) bg_popup_window_pane_g8

0xc06a,	// (0x00039bce) bg_popup_window_pane_g9_ParamLimits

0xc06a,	// (0x00039bce) bg_popup_window_pane_g9

0x6628,	// (0x0003418c) bg_popup_window_pane_g10_ParamLimits

0x6628,	// (0x0003418c) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0003d44f) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0003d44f) bg_popup_window_pane_g

0x65df,	// (0x00034143) bg_popup_heading_pane_ParamLimits

0x65df,	// (0x00034143) bg_popup_heading_pane

0xa903,	// (0x00038467) tabs_4_passive_pane_cp_srt_ParamLimits

0xa903,	// (0x00038467) tabs_4_passive_pane_cp_srt

0xa915,	// (0x00038479) tabs_4_passive_pane_srt_ParamLimits

0x65f3,	// (0x00034157) heading_pane_g2

0xa915,	// (0x00038479) tabs_4_passive_pane_srt

0x4bb4,	// (0x00032718) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4bb4,	// (0x00032718) bg_passive_tab_pane_cp3_srt

0x65fb,	// (0x0003415f) heading_pane_t1_ParamLimits

0x65fb,	// (0x0003415f) heading_pane_t1

0x6612,	// (0x00034176) heading_pane_t2_ParamLimits

0x6612,	// (0x00034176) heading_pane_t2

0x0001,

0xf8e6,	// (0x0003d44a) heading_pane_t_ParamLimits

0xf8e6,	// (0x0003d44a) heading_pane_t

0x6126,	// (0x00033c8a) bg_popup_heading_pane_g1

0x61c9,	// (0x00033d2d) bg_popup_heading_pane_g2

0x61d3,	// (0x00033d37) bg_popup_heading_pane_g3

0x61dd,	// (0x00033d41) bg_popup_heading_pane_g4

0x61e7,	// (0x00033d4b) bg_popup_heading_pane_g5

0x61f1,	// (0x00033d55) bg_popup_heading_pane_g6

0x61f9,	// (0x00033d5d) bg_popup_heading_pane_g7

0x6201,	// (0x00033d65) bg_popup_heading_pane_g8

0x620b,	// (0x00033d6f) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0003d406) bg_popup_heading_pane_g

0x59ec,	// (0x00033550) bg_popup_sub_pane_g1

0x59fc,	// (0x00033560) bg_popup_sub_pane_g2

0x59f4,	// (0x00033558) bg_popup_sub_pane_g3

0x5a0c,	// (0x00033570) bg_popup_sub_pane_g4

0x5a04,	// (0x00033568) bg_popup_sub_pane_g5

0x5a14,	// (0x00033578) bg_popup_sub_pane_g6

0x5a1c,	// (0x00033580) bg_popup_sub_pane_g7

0x5a2c,	// (0x00033590) bg_popup_sub_pane_g8

0x5a24,	// (0x00033588) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x0003d3e0) bg_popup_sub_pane_g

0x42d1,	// (0x00031e35) bg_popup_window_pane_cp5_ParamLimits

0x42d1,	// (0x00031e35) bg_popup_window_pane_cp5

0x4420,	// (0x00031f84) popup_note_window_g1_ParamLimits

0x4420,	// (0x00031f84) popup_note_window_g1

0x442c,	// (0x00031f90) popup_note_window_t1_ParamLimits

0x442c,	// (0x00031f90) popup_note_window_t1

0x443e,	// (0x00031fa2) popup_note_window_t2_ParamLimits

0x443e,	// (0x00031fa2) popup_note_window_t2

0x4587,	// (0x000320eb) popup_note_window_t3_ParamLimits

0x4587,	// (0x000320eb) popup_note_window_t3

0x4599,	// (0x000320fd) popup_note_window_t4_ParamLimits

0x4599,	// (0x000320fd) popup_note_window_t4

0x45c1,	// (0x00032125) popup_note_window_t5_ParamLimits

0x45c1,	// (0x00032125) popup_note_window_t5

0x0004,

0xf59b,	// (0x0003d0ff) popup_note_window_t_ParamLimits

0xf59b,	// (0x0003d0ff) popup_note_window_t

0x45e5,	// (0x00032149) bg_popup_window_pane_cp6_ParamLimits

0x45e5,	// (0x00032149) bg_popup_window_pane_cp6

0x609a,	// (0x00033bfe) popup_note_image_window_g1_ParamLimits

0x609a,	// (0x00033bfe) popup_note_image_window_g1

0x60a6,	// (0x00033c0a) popup_note_image_window_g2_ParamLimits

0x60a6,	// (0x00033c0a) popup_note_image_window_g2

0x0001,

0xf870,	// (0x0003d3d4) popup_note_image_window_g_ParamLimits

0xf870,	// (0x0003d3d4) popup_note_image_window_g

0x60bf,	// (0x00033c23) popup_note_image_window_t1_ParamLimits

0x60bf,	// (0x00033c23) popup_note_image_window_t1

0x60d8,	// (0x00033c3c) popup_note_image_window_t2_ParamLimits

0x60d8,	// (0x00033c3c) popup_note_image_window_t2

0x60f1,	// (0x00033c55) popup_note_image_window_t3_ParamLimits

0x60f1,	// (0x00033c55) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0003d3d9) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0003d3d9) popup_note_image_window_t

0x5f77,	// (0x00033adb) bg_popup_window_pane_cp7_ParamLimits

0x5f77,	// (0x00033adb) bg_popup_window_pane_cp7

0x5fa7,	// (0x00033b0b) popup_note_wait_window_g1_ParamLimits

0x5fa7,	// (0x00033b0b) popup_note_wait_window_g1

0x5fb3,	// (0x00033b17) popup_note_wait_window_g2_ParamLimits

0x5fb3,	// (0x00033b17) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x0003d3c2) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x0003d3c2) popup_note_wait_window_g

0x5fcb,	// (0x00033b2f) popup_note_wait_window_t1_ParamLimits

0x5fcb,	// (0x00033b2f) popup_note_wait_window_t1

0x5ff2,	// (0x00033b56) popup_note_wait_window_t2_ParamLimits

0x5ff2,	// (0x00033b56) popup_note_wait_window_t2

0x600f,	// (0x00033b73) popup_note_wait_window_t3_ParamLimits

0x600f,	// (0x00033b73) popup_note_wait_window_t3

0x6022,	// (0x00033b86) popup_note_wait_window_t4_ParamLimits

0x6022,	// (0x00033b86) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0003d3c9) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0003d3c9) popup_note_wait_window_t

0x6047,	// (0x00033bab) wait_bar_pane_ParamLimits

0x6047,	// (0x00033bab) wait_bar_pane

0x4283,	// (0x00031de7) wait_anim_pane

0x4283,	// (0x00031de7) wait_border_pane

0x4279,	// (0x00031ddd) wait_anim_pane_g1

0x4279,	// (0x00031ddd) wait_anim_pane_g2

0x0001,

0xf724,	// (0x0003d288) wait_anim_pane_g

0x5f1b,	// (0x00033a7f) wait_border_pane_g1

0x5f26,	// (0x00033a8a) wait_border_pane_g2

0x5f2f,	// (0x00033a93) wait_border_pane_g3

0x0002,

0xf857,	// (0x0003d3bb) wait_border_pane_g

0x5d8b,	// (0x000338ef) bg_popup_window_pane_cp16_ParamLimits

0x5d8b,	// (0x000338ef) bg_popup_window_pane_cp16

0x5e8b,	// (0x000339ef) indicator_popup_pane_cp4_ParamLimits

0x5e8b,	// (0x000339ef) indicator_popup_pane_cp4

0x5e9f,	// (0x00033a03) popup_query_data_window_t1_ParamLimits

0x5e9f,	// (0x00033a03) popup_query_data_window_t1

0x5eb1,	// (0x00033a15) popup_query_data_window_t2_ParamLimits

0x5eb1,	// (0x00033a15) popup_query_data_window_t2

0x5eca,	// (0x00033a2e) popup_query_data_window_t3_ParamLimits

0x5eca,	// (0x00033a2e) popup_query_data_window_t3

0x0002,

0xf850,	// (0x0003d3b4) popup_query_data_window_t_ParamLimits

0xf850,	// (0x0003d3b4) popup_query_data_window_t

0x5ee4,	// (0x00033a48) query_popup_data_pane_ParamLimits

0x5ee4,	// (0x00033a48) query_popup_data_pane

0x5ef8,	// (0x00033a5c) query_popup_data_pane_cp1_ParamLimits

0x5ef8,	// (0x00033a5c) query_popup_data_pane_cp1

0x5d8b,	// (0x000338ef) bg_popup_window_pane_cp10_ParamLimits

0x5d8b,	// (0x000338ef) bg_popup_window_pane_cp10

0x5dbd,	// (0x00033921) indicator_popup_pane_ParamLimits

0x5dbd,	// (0x00033921) indicator_popup_pane

0x5ddf,	// (0x00033943) popup_query_code_window_t1_ParamLimits

0x5ddf,	// (0x00033943) popup_query_code_window_t1

0x5df9,	// (0x0003395d) popup_query_code_window_t2_ParamLimits

0x5df9,	// (0x0003395d) popup_query_code_window_t2

0x5e42,	// (0x000339a6) popup_query_code_window_t3_ParamLimits

0x5e42,	// (0x000339a6) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0003d3ad) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0003d3ad) popup_query_code_window_t

0x5e71,	// (0x000339d5) query_popup_pane_ParamLimits

0x5e71,	// (0x000339d5) query_popup_pane

0x45e5,	// (0x00032149) bg_popup_window_pane_cp15_ParamLimits

0x45e5,	// (0x00032149) bg_popup_window_pane_cp15

0x4603,	// (0x00032167) indicator_popup_pane_cp1_ParamLimits

0x4603,	// (0x00032167) indicator_popup_pane_cp1

0x4616,	// (0x0003217a) indicator_popup_pane_cp2_ParamLimits

0x4616,	// (0x0003217a) indicator_popup_pane_cp2

0x4629,	// (0x0003218d) popup_query_data_code_window_g1_ParamLimits

0x4629,	// (0x0003218d) popup_query_data_code_window_g1

0x463c,	// (0x000321a0) popup_query_data_code_window_t1_ParamLimits

0x463c,	// (0x000321a0) popup_query_data_code_window_t1

0x464e,	// (0x000321b2) popup_query_data_code_window_t2_ParamLimits

0x464e,	// (0x000321b2) popup_query_data_code_window_t2

0x4660,	// (0x000321c4) popup_query_data_code_window_t3_ParamLimits

0x4660,	// (0x000321c4) popup_query_data_code_window_t3

0x4676,	// (0x000321da) popup_query_data_code_window_t4_ParamLimits

0x4676,	// (0x000321da) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0003d10a) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0003d10a) popup_query_data_code_window_t

0x52d0,	// (0x00032e34) list_single_midp_graphic_pane_g3

0x468e,	// (0x000321f2) query_popup_data_pane_cp2_ParamLimits

0x46a1,	// (0x00032205) query_popup_pane_cp2_ParamLimits

0x46a1,	// (0x00032205) query_popup_pane_cp2

0x4283,	// (0x00031de7) bg_popup_window_pane_cp11

0x5d83,	// (0x000338e7) heading_pane_cp5

0x472f,	// (0x00032293) listscroll_popup_info_pane

0x4283,	// (0x00031de7) input_focus_pane_cp3

0x46b4,	// (0x00032218) query_popup_pane_t1

0x46c2,	// (0x00032226) list_popup_info_pane_ParamLimits

0x46c2,	// (0x00032226) list_popup_info_pane

0x46d1,	// (0x00032235) listscroll_popup_info_pane_g1

0x46d9,	// (0x0003223d) scroll_pane_cp7

0x46e3,	// (0x00032247) popup_info_list_pane_t1_ParamLimits

0x46e3,	// (0x00032247) popup_info_list_pane_t1

0x46fd,	// (0x00032261) popup_info_list_pane_t2_ParamLimits

0x46fd,	// (0x00032261) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0003d113) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0003d113) popup_info_list_pane_t

0x4283,	// (0x00031de7) bg_popup_window_pane_cp12

0x6ca9,	// (0x0003480d) find_popup_pane

0x42df,	// (0x00031e43) bg_popup_window_pane_cp3

0x4717,	// (0x0003227b) heading_pane_cp3

0x4723,	// (0x00032287) listscroll_popup_graphic_pane

0x4283,	// (0x00031de7) bg_popup_window_pane_cp4

0x9a9a,	// (0x000375fe) heading_pane_cp4

0x472f,	// (0x00032293) listscroll_popup_colour_pane

0x4737,	// (0x0003229b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x4737,	// (0x0003229b) cell_large_graphic_colour_none_popup_pane

0x9aa4,	// (0x00037608) grid_large_graphic_colour_popup_pane_ParamLimits

0x9aa4,	// (0x00037608) grid_large_graphic_colour_popup_pane

0x474b,	// (0x000322af) listscroll_popup_colour_pane_g1_ParamLimits

0x474b,	// (0x000322af) listscroll_popup_colour_pane_g1

0x4762,	// (0x000322c6) listscroll_popup_colour_pane_g2_ParamLimits

0x4762,	// (0x000322c6) listscroll_popup_colour_pane_g2

0x4779,	// (0x000322dd) listscroll_popup_colour_pane_g3_ParamLimits

0x4779,	// (0x000322dd) listscroll_popup_colour_pane_g3

0x9ac8,	// (0x0003762c) listscroll_popup_colour_pane_g4_ParamLimits

0x9ac8,	// (0x0003762c) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0003d118) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0003d118) listscroll_popup_colour_pane_g

0x4789,	// (0x000322ed) scroll_pane_cp6_ParamLimits

0x4789,	// (0x000322ed) scroll_pane_cp6

0x9ad7,	// (0x0003763b) cell_large_graphic_colour_popup_pane_ParamLimits

0x9ad7,	// (0x0003763b) cell_large_graphic_colour_popup_pane

0x479b,	// (0x000322ff) cell_large_graphic_colour_none_popup_pane_t1

0x4283,	// (0x00031de7) grid_highlight_pane_cp5

0x47aa,	// (0x0003230e) cell_large_graphic_colour_popup_pane_g1

0x47b2,	// (0x00032316) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0003d121) cell_large_graphic_colour_popup_pane_g

0x47ba,	// (0x0003231e) cell_large_graphic_colour_popup_pane_g2_copy1

0x47c3,	// (0x00032327) grid_highlight_pane_cp4

0x47cb,	// (0x0003232f) bg_popup_window_pane_cp8_ParamLimits

0x47cb,	// (0x0003232f) bg_popup_window_pane_cp8

0x47e6,	// (0x0003234a) popup_snote_single_text_window_g1_ParamLimits

0x47e6,	// (0x0003234a) popup_snote_single_text_window_g1

0x47f8,	// (0x0003235c) popup_snote_single_text_window_t1_ParamLimits

0x47f8,	// (0x0003235c) popup_snote_single_text_window_t1

0x480b,	// (0x0003236f) popup_snote_single_text_window_t2_ParamLimits

0x480b,	// (0x0003236f) popup_snote_single_text_window_t2

0x481e,	// (0x00032382) popup_snote_single_text_window_t3_ParamLimits

0x481e,	// (0x00032382) popup_snote_single_text_window_t3

0x4857,	// (0x000323bb) popup_snote_single_text_window_t4_ParamLimits

0x4857,	// (0x000323bb) popup_snote_single_text_window_t4

0x488b,	// (0x000323ef) popup_snote_single_text_window_t5_ParamLimits

0x488b,	// (0x000323ef) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0003d126) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0003d126) popup_snote_single_text_window_t

0x48ba,	// (0x0003241e) bg_popup_window_pane_cp9_ParamLimits

0x48ba,	// (0x0003241e) bg_popup_window_pane_cp9

0x47e6,	// (0x0003234a) popup_snote_single_graphic_window_g1_ParamLimits

0x47e6,	// (0x0003234a) popup_snote_single_graphic_window_g1

0x48c8,	// (0x0003242c) popup_snote_single_graphic_window_g2_ParamLimits

0x48c8,	// (0x0003242c) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0003d131) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0003d131) popup_snote_single_graphic_window_g

0x48d4,	// (0x00032438) popup_snote_single_graphic_window_t1_ParamLimits

0x48d4,	// (0x00032438) popup_snote_single_graphic_window_t1

0x48e7,	// (0x0003244b) popup_snote_single_graphic_window_t2_ParamLimits

0x48e7,	// (0x0003244b) popup_snote_single_graphic_window_t2

0x48fa,	// (0x0003245e) popup_snote_single_graphic_window_t3_ParamLimits

0x48fa,	// (0x0003245e) popup_snote_single_graphic_window_t3

0x4933,	// (0x00032497) popup_snote_single_graphic_window_t4_ParamLimits

0x4933,	// (0x00032497) popup_snote_single_graphic_window_t4

0x4967,	// (0x000324cb) popup_snote_single_graphic_window_t5_ParamLimits

0x4967,	// (0x000324cb) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0003d136) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0003d136) popup_snote_single_graphic_window_t

0x6c2d,	// (0x00034791) grid_graphic_popup_pane_ParamLimits

0x6c2d,	// (0x00034791) grid_graphic_popup_pane

0x6c59,	// (0x000347bd) listscroll_popup_graphic_pane_g1_ParamLimits

0x6c59,	// (0x000347bd) listscroll_popup_graphic_pane_g1

0xc368,	// (0x00039ecc) listscroll_popup_graphic_pane_g2_ParamLimits

0xc368,	// (0x00039ecc) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0003d52a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0003d52a) listscroll_popup_graphic_pane_g

0x6b0f,	// (0x00034673) scroll_pane_cp5

0xc329,	// (0x00039e8d) cell_graphic_popup_pane_ParamLimits

0xc329,	// (0x00039e8d) cell_graphic_popup_pane

0x6bf8,	// (0x0003475c) cell_graphic_popup_pane_g1

0x6c00,	// (0x00034764) cell_graphic_popup_pane_g2

0x47ba,	// (0x0003231e) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0003d523) cell_graphic_popup_pane_g

0x6c09,	// (0x0003476d) cell_graphic_popup_pane_t2

0x47c3,	// (0x00032327) grid_highlight_pane_cp3

0x49a8,	// (0x0003250c) list_gen_pane_ParamLimits

0x49a8,	// (0x0003250c) list_gen_pane

0x49d0,	// (0x00032534) scroll_pane

0xc2dc,	// (0x00039e40) bg_list_pane_g1_ParamLimits

0xc2dc,	// (0x00039e40) bg_list_pane_g1

0x6ba7,	// (0x0003470b) bg_list_pane_g2_ParamLimits

0x6ba7,	// (0x0003470b) bg_list_pane_g2

0x6bba,	// (0x0003471e) bg_list_pane_g3_ParamLimits

0x6bba,	// (0x0003471e) bg_list_pane_g3

0x6bcc,	// (0x00034730) bg_list_pane_g4_ParamLimits

0x6bcc,	// (0x00034730) bg_list_pane_g4

0xc2f7,	// (0x00039e5b) bg_list_pane_g5_ParamLimits

0xc2f7,	// (0x00039e5b) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0003d518) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0003d518) bg_list_pane_g

0xa829,	// (0x0003838d) list_double2_graphic_large_graphic_pane_ParamLimits

0xa829,	// (0x0003838d) list_double2_graphic_large_graphic_pane

0xa829,	// (0x0003838d) list_double2_graphic_pane_ParamLimits

0xa829,	// (0x0003838d) list_double2_graphic_pane

0xa829,	// (0x0003838d) list_double2_large_graphic_pane_ParamLimits

0xa829,	// (0x0003838d) list_double2_large_graphic_pane

0xa829,	// (0x0003838d) list_double2_pane_ParamLimits

0xa829,	// (0x0003838d) list_double2_pane

0xa829,	// (0x0003838d) list_double_graphic_heading_pane_ParamLimits

0xa829,	// (0x0003838d) list_double_graphic_heading_pane

0xa829,	// (0x0003838d) list_double_graphic_pane_ParamLimits

0xa829,	// (0x0003838d) list_double_graphic_pane

0xa829,	// (0x0003838d) list_double_heading_pane_ParamLimits

0xa829,	// (0x0003838d) list_double_heading_pane

0xa829,	// (0x0003838d) list_double_large_graphic_pane_ParamLimits

0xa829,	// (0x0003838d) list_double_large_graphic_pane

0xa829,	// (0x0003838d) list_double_number_pane_ParamLimits

0xa829,	// (0x0003838d) list_double_number_pane

0xa829,	// (0x0003838d) list_double_pane_ParamLimits

0xa829,	// (0x0003838d) list_double_pane

0xa829,	// (0x0003838d) list_double_time_pane_ParamLimits

0xa829,	// (0x0003838d) list_double_time_pane

0xa829,	// (0x0003838d) list_setting_number_pane_ParamLimits

0xa829,	// (0x0003838d) list_setting_number_pane

0xa829,	// (0x0003838d) list_setting_pane_ParamLimits

0xa829,	// (0x0003838d) list_setting_pane

0xa86d,	// (0x000383d1) list_single_2graphic_pane_ParamLimits

0xa86d,	// (0x000383d1) list_single_2graphic_pane

0xa86d,	// (0x000383d1) list_single_graphic_heading_pane_ParamLimits

0xa86d,	// (0x000383d1) list_single_graphic_heading_pane

0xa86d,	// (0x000383d1) list_single_graphic_pane_ParamLimits

0xa86d,	// (0x000383d1) list_single_graphic_pane

0xa86d,	// (0x000383d1) list_single_heading_pane_ParamLimits

0xa86d,	// (0x000383d1) list_single_heading_pane

0xa8b9,	// (0x0003841d) list_single_large_graphic_pane_ParamLimits

0xa8b9,	// (0x0003841d) list_single_large_graphic_pane

0xa86d,	// (0x000383d1) list_single_number_heading_pane_ParamLimits

0xa86d,	// (0x000383d1) list_single_number_heading_pane

0xa86d,	// (0x000383d1) list_single_number_pane_ParamLimits

0xa86d,	// (0x000383d1) list_single_number_pane

0xa86d,	// (0x000383d1) list_single_pane_ParamLimits

0xa86d,	// (0x000383d1) list_single_pane

0x4283,	// (0x00031de7) list_highlight_pane_cp1

0x5415,	// (0x00032f79) list_single_pane_g1_ParamLimits

0x5415,	// (0x00032f79) list_single_pane_g1

0x85f7,	// (0x0003615b) list_single_pane_g2_ParamLimits

0x85f7,	// (0x0003615b) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0003d152) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0003d152) list_single_pane_g

0x8e90,	// (0x000369f4) list_single_pane_t1_ParamLimits

0x8e90,	// (0x000369f4) list_single_pane_t1

0x5415,	// (0x00032f79) list_single_number_pane_g1_ParamLimits

0x5415,	// (0x00032f79) list_single_number_pane_g1

0x85f7,	// (0x0003615b) list_single_number_pane_g2_ParamLimits

0x85f7,	// (0x0003615b) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0003d152) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0003d152) list_single_number_pane_g

0x8e38,	// (0x0003699c) list_single_number_pane_t1_ParamLimits

0x8e38,	// (0x0003699c) list_single_number_pane_t1

0x8e4e,	// (0x000369b2) list_single_number_pane_t2_ParamLimits

0x8e4e,	// (0x000369b2) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0003d4d9) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0003d4d9) list_single_number_pane_t

0x85eb,	// (0x0003614f) list_single_graphic_pane_g1_ParamLimits

0x85eb,	// (0x0003614f) list_single_graphic_pane_g1

0x5415,	// (0x00032f79) list_single_graphic_pane_g2_ParamLimits

0x5415,	// (0x00032f79) list_single_graphic_pane_g2

0x85f7,	// (0x0003615b) list_single_graphic_pane_g3_ParamLimits

0x85f7,	// (0x0003615b) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0003d141) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0003d141) list_single_graphic_pane_g

0x8603,	// (0x00036167) list_single_graphic_pane_t1_ParamLimits

0x8603,	// (0x00036167) list_single_graphic_pane_t1

0x8619,	// (0x0003617d) list_single_heading_pane_g1_ParamLimits

0x8619,	// (0x0003617d) list_single_heading_pane_g1

0x85f7,	// (0x0003615b) list_single_heading_pane_g2_ParamLimits

0x85f7,	// (0x0003615b) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0003d148) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003d148) list_single_heading_pane_g

0x862c,	// (0x00036190) list_single_heading_pane_t1_ParamLimits

0x862c,	// (0x00036190) list_single_heading_pane_t1

0x9b00,	// (0x00037664) list_single_heading_pane_t2_ParamLimits

0x9b00,	// (0x00037664) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0003d14d) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0003d14d) list_single_heading_pane_t

0x5415,	// (0x00032f79) list_single_number_heading_pane_g1_ParamLimits

0x5415,	// (0x00032f79) list_single_number_heading_pane_g1

0x85f7,	// (0x0003615b) list_single_number_heading_pane_g2_ParamLimits

0x85f7,	// (0x0003615b) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0003d152) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0003d152) list_single_number_heading_pane_g

0x8642,	// (0x000361a6) list_single_number_heading_pane_t1_ParamLimits

0x8642,	// (0x000361a6) list_single_number_heading_pane_t1

0x8658,	// (0x000361bc) list_single_number_heading_pane_t2_ParamLimits

0x8658,	// (0x000361bc) list_single_number_heading_pane_t2

0x866a,	// (0x000361ce) list_single_number_heading_pane_t3_ParamLimits

0x866a,	// (0x000361ce) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0003d157) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0003d157) list_single_number_heading_pane_t

0x867c,	// (0x000361e0) list_single_graphic_heading_pane_g1_ParamLimits

0x867c,	// (0x000361e0) list_single_graphic_heading_pane_g1

0x8692,	// (0x000361f6) list_single_graphic_heading_pane_g4_ParamLimits

0x8692,	// (0x000361f6) list_single_graphic_heading_pane_g4

0x85f7,	// (0x0003615b) list_single_graphic_heading_pane_g5_ParamLimits

0x85f7,	// (0x0003615b) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0003d15e) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0003d15e) list_single_graphic_heading_pane_g

0x8642,	// (0x000361a6) list_single_graphic_heading_pane_t1_ParamLimits

0x8642,	// (0x000361a6) list_single_graphic_heading_pane_t1

0x86a3,	// (0x00036207) list_single_graphic_heading_pane_t2_ParamLimits

0x86a3,	// (0x00036207) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0003d165) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0003d165) list_single_graphic_heading_pane_t

0x9b12,	// (0x00037676) list_single_large_graphic_pane_g1_ParamLimits

0x9b12,	// (0x00037676) list_single_large_graphic_pane_g1

0x9b1e,	// (0x00037682) list_single_large_graphic_pane_g2_ParamLimits

0x9b1e,	// (0x00037682) list_single_large_graphic_pane_g2

0x9b2a,	// (0x0003768e) list_single_large_graphic_pane_g3_ParamLimits

0x9b2a,	// (0x0003768e) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0003d16a) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0003d16a) list_single_large_graphic_pane_g

0x5f26,	// (0x00033a8a) wait_border_pane_g2_copy1

0x9b36,	// (0x0003769a) list_single_large_graphic_pane_g4_cp2

0x86bb,	// (0x0003621f) list_single_large_graphic_pane_t1_ParamLimits

0x86bb,	// (0x0003621f) list_single_large_graphic_pane_t1

0x9b3e,	// (0x000376a2) list_double_pane_g1_ParamLimits

0x9b3e,	// (0x000376a2) list_double_pane_g1

0x9b4a,	// (0x000376ae) list_double_pane_g2_ParamLimits

0x9b4a,	// (0x000376ae) list_double_pane_g2

0x0001,

0xf60d,	// (0x0003d171) list_double_pane_g_ParamLimits

0xf60d,	// (0x0003d171) list_double_pane_g

0x86d1,	// (0x00036235) list_double_pane_t1_ParamLimits

0x86d1,	// (0x00036235) list_double_pane_t1

0x86e7,	// (0x0003624b) list_double_pane_t2_ParamLimits

0x86e7,	// (0x0003624b) list_double_pane_t2

0x0001,

0xf612,	// (0x0003d176) list_double_pane_t_ParamLimits

0xf612,	// (0x0003d176) list_double_pane_t

0x86f9,	// (0x0003625d) list_double2_pane_g1_ParamLimits

0x86f9,	// (0x0003625d) list_double2_pane_g1

0x870a,	// (0x0003626e) list_double2_pane_g2_ParamLimits

0x870a,	// (0x0003626e) list_double2_pane_g2

0x0001,

0xf617,	// (0x0003d17b) list_double2_pane_g_ParamLimits

0xf617,	// (0x0003d17b) list_double2_pane_g

0x8716,	// (0x0003627a) list_double2_pane_t1_ParamLimits

0x8716,	// (0x0003627a) list_double2_pane_t1

0x872c,	// (0x00036290) list_double2_pane_t2_ParamLimits

0x872c,	// (0x00036290) list_double2_pane_t2

0x0001,

0xf61c,	// (0x0003d180) list_double2_pane_t_ParamLimits

0xf61c,	// (0x0003d180) list_double2_pane_t

0x9b3e,	// (0x000376a2) list_double_number_pane_g1_ParamLimits

0x9b3e,	// (0x000376a2) list_double_number_pane_g1

0x9b4a,	// (0x000376ae) list_double_number_pane_g2_ParamLimits

0x9b4a,	// (0x000376ae) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x0003d171) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x0003d171) list_double_number_pane_g

0x873e,	// (0x000362a2) list_double_number_pane_t1_ParamLimits

0x873e,	// (0x000362a2) list_double_number_pane_t1

0x8750,	// (0x000362b4) list_double_number_pane_t2_ParamLimits

0x8750,	// (0x000362b4) list_double_number_pane_t2

0x8766,	// (0x000362ca) list_double_number_pane_t3_ParamLimits

0x8766,	// (0x000362ca) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0003d185) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0003d185) list_double_number_pane_t

0x8778,	// (0x000362dc) list_double_graphic_pane_g1_ParamLimits

0x8778,	// (0x000362dc) list_double_graphic_pane_g1

0x9b56,	// (0x000376ba) list_double_graphic_pane_g2_ParamLimits

0x9b56,	// (0x000376ba) list_double_graphic_pane_g2

0x9b65,	// (0x000376c9) list_double_graphic_pane_g3_ParamLimits

0x9b65,	// (0x000376c9) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x0003d18c) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x0003d18c) list_double_graphic_pane_g

0x8790,	// (0x000362f4) list_double_graphic_pane_t1_ParamLimits

0x8790,	// (0x000362f4) list_double_graphic_pane_t1

0x87a6,	// (0x0003630a) list_double_graphic_pane_t2_ParamLimits

0x87a6,	// (0x0003630a) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x0003d195) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x0003d195) list_double_graphic_pane_t

0x87b8,	// (0x0003631c) list_double2_graphic_pane_g1_ParamLimits

0x87b8,	// (0x0003631c) list_double2_graphic_pane_g1

0x9b71,	// (0x000376d5) list_double2_graphic_pane_g2_ParamLimits

0x9b71,	// (0x000376d5) list_double2_graphic_pane_g2

0x9b7d,	// (0x000376e1) list_double2_graphic_pane_g3_ParamLimits

0x9b7d,	// (0x000376e1) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x0003d19a) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x0003d19a) list_double2_graphic_pane_g

0x87c4,	// (0x00036328) list_double2_graphic_pane_t1_ParamLimits

0x87c4,	// (0x00036328) list_double2_graphic_pane_t1

0x87da,	// (0x0003633e) list_double2_graphic_pane_t2_ParamLimits

0x87da,	// (0x0003633e) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x0003d1a1) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x0003d1a1) list_double2_graphic_pane_t

0x87ec,	// (0x00036350) list_double_large_graphic_pane_g1_ParamLimits

0x87ec,	// (0x00036350) list_double_large_graphic_pane_g1

0x8817,	// (0x0003637b) list_double_large_graphic_pane_g2_ParamLimits

0x8817,	// (0x0003637b) list_double_large_graphic_pane_g2

0x9b4a,	// (0x000376ae) list_double_large_graphic_pane_g3_ParamLimits

0x9b4a,	// (0x000376ae) list_double_large_graphic_pane_g3

0x882d,	// (0x00036391) list_double_large_graphic_pane_g4_ParamLimits

0x882d,	// (0x00036391) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x0003d1a6) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x0003d1a6) list_double_large_graphic_pane_g

0x8840,	// (0x000363a4) list_double_large_graphic_pane_t1_ParamLimits

0x8840,	// (0x000363a4) list_double_large_graphic_pane_t1

0x8859,	// (0x000363bd) list_double_large_graphic_pane_t2_ParamLimits

0x8859,	// (0x000363bd) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x0003d1b1) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x0003d1b1) list_double_large_graphic_pane_t

0x9b9e,	// (0x00037702) list_double2_large_graphic_pane_g1_ParamLimits

0x9b9e,	// (0x00037702) list_double2_large_graphic_pane_g1

0x9baa,	// (0x0003770e) list_double2_large_graphic_pane_g2_ParamLimits

0x9baa,	// (0x0003770e) list_double2_large_graphic_pane_g2

0x9b7d,	// (0x000376e1) list_double2_large_graphic_pane_g3_ParamLimits

0x9b7d,	// (0x000376e1) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x0003d1b6) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x0003d1b6) list_double2_large_graphic_pane_g

0x886b,	// (0x000363cf) list_double2_large_graphic_pane_t1_ParamLimits

0x886b,	// (0x000363cf) list_double2_large_graphic_pane_t1

0x8881,	// (0x000363e5) list_double2_large_graphic_pane_t2_ParamLimits

0x8881,	// (0x000363e5) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x0003d1bd) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x0003d1bd) list_double2_large_graphic_pane_t

0x8893,	// (0x000363f7) list_double_heading_pane_g1_ParamLimits

0x8893,	// (0x000363f7) list_double_heading_pane_g1

0x9bbb,	// (0x0003771f) list_double_heading_pane_g2_ParamLimits

0x9bbb,	// (0x0003771f) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x0003d1c2) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x0003d1c2) list_double_heading_pane_g

0x88a4,	// (0x00036408) list_double_heading_pane_t1_ParamLimits

0x88a4,	// (0x00036408) list_double_heading_pane_t1

0x872c,	// (0x00036290) list_double_heading_pane_t2_ParamLimits

0x872c,	// (0x00036290) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0003d1c7) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0003d1c7) list_double_heading_pane_t

0x88ba,	// (0x0003641e) list_double_graphic_heading_pane_g1_ParamLimits

0x88ba,	// (0x0003641e) list_double_graphic_heading_pane_g1

0x8893,	// (0x000363f7) list_double_graphic_heading_pane_g2_ParamLimits

0x8893,	// (0x000363f7) list_double_graphic_heading_pane_g2

0x9bbb,	// (0x0003771f) list_double_graphic_heading_pane_g3_ParamLimits

0x9bbb,	// (0x0003771f) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x0003d1cc) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x0003d1cc) list_double_graphic_heading_pane_g

0x88c6,	// (0x0003642a) list_double_graphic_heading_pane_t1_ParamLimits

0x88c6,	// (0x0003642a) list_double_graphic_heading_pane_t1

0x87da,	// (0x0003633e) list_double_graphic_heading_pane_t2_ParamLimits

0x87da,	// (0x0003633e) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x0003d1d3) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x0003d1d3) list_double_graphic_heading_pane_t

0x88dc,	// (0x00036440) list_double_time_pane_g1_ParamLimits

0x88dc,	// (0x00036440) list_double_time_pane_g1

0x88ed,	// (0x00036451) list_double_time_pane_g2_ParamLimits

0x88ed,	// (0x00036451) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0003d1d8) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0003d1d8) list_double_time_pane_g

0x88f9,	// (0x0003645d) list_double_time_pane_t1_ParamLimits

0x88f9,	// (0x0003645d) list_double_time_pane_t1

0x890f,	// (0x00036473) list_double_time_pane_t2_ParamLimits

0x890f,	// (0x00036473) list_double_time_pane_t2

0x8921,	// (0x00036485) list_double_time_pane_t3_ParamLimits

0x8921,	// (0x00036485) list_double_time_pane_t3

0x8933,	// (0x00036497) list_double_time_pane_t4_ParamLimits

0x8933,	// (0x00036497) list_double_time_pane_t4

0x0003,

0xf679,	// (0x0003d1dd) list_double_time_pane_t_ParamLimits

0xf679,	// (0x0003d1dd) list_double_time_pane_t

0x8945,	// (0x000364a9) list_setting_pane_g1_ParamLimits

0x8945,	// (0x000364a9) list_setting_pane_g1

0x8951,	// (0x000364b5) list_setting_pane_g2_ParamLimits

0x8951,	// (0x000364b5) list_setting_pane_g2

0x0001,

0xf682,	// (0x0003d1e6) list_setting_pane_g_ParamLimits

0xf682,	// (0x0003d1e6) list_setting_pane_g

0x895d,	// (0x000364c1) list_setting_pane_t1_ParamLimits

0x895d,	// (0x000364c1) list_setting_pane_t1

0x8977,	// (0x000364db) list_setting_pane_t2_ParamLimits

0x8977,	// (0x000364db) list_setting_pane_t2

0x0002,

0xf687,	// (0x0003d1eb) list_setting_pane_t_ParamLimits

0xf687,	// (0x0003d1eb) list_setting_pane_t

0x89b4,	// (0x00036518) set_value_pane_cp_ParamLimits

0x89b4,	// (0x00036518) set_value_pane_cp

0x89c0,	// (0x00036524) list_setting_number_pane_g1_ParamLimits

0x89c0,	// (0x00036524) list_setting_number_pane_g1

0x89cc,	// (0x00036530) list_setting_number_pane_g2_ParamLimits

0x89cc,	// (0x00036530) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x0003d1f2) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x0003d1f2) list_setting_number_pane_g

0x89d8,	// (0x0003653c) list_setting_number_pane_t1_ParamLimits

0x89d8,	// (0x0003653c) list_setting_number_pane_t1

0x89f1,	// (0x00036555) list_setting_number_pane_t2_ParamLimits

0x89f1,	// (0x00036555) list_setting_number_pane_t2

0x8a0b,	// (0x0003656f) list_setting_number_pane_t3_ParamLimits

0x8a0b,	// (0x0003656f) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x0003d1f7) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x0003d1f7) list_setting_number_pane_t

0x89b4,	// (0x00036518) set_value_pane_ParamLimits

0x89b4,	// (0x00036518) set_value_pane

0x4a04,	// (0x00032568) bg_set_opt_pane_ParamLimits

0x4a04,	// (0x00032568) bg_set_opt_pane

0x8a4e,	// (0x000365b2) set_value_pane_t1

0x4a25,	// (0x00032589) slider_set_pane_cp3

0x4a2e,	// (0x00032592) volume_small_pane_cp

0x4a37,	// (0x0003259b) list_form_gen_pane

0x4a40,	// (0x000325a4) scroll_pane_cp8

0x8a64,	// (0x000365c8) form_field_data_pane_ParamLimits

0x8a64,	// (0x000365c8) form_field_data_pane

0x8a84,	// (0x000365e8) form_field_data_wide_pane_ParamLimits

0x8a84,	// (0x000365e8) form_field_data_wide_pane

0x8aa5,	// (0x00036609) form_field_popup_pane_ParamLimits

0x8aa5,	// (0x00036609) form_field_popup_pane

0x8ac3,	// (0x00036627) form_field_popup_wide_pane_ParamLimits

0x8ac3,	// (0x00036627) form_field_popup_wide_pane

0x8ae0,	// (0x00036644) form_field_slider_pane_ParamLimits

0x8ae0,	// (0x00036644) form_field_slider_pane

0x8af3,	// (0x00036657) form_field_slider_wide_pane_ParamLimits

0x8af3,	// (0x00036657) form_field_slider_wide_pane

0x4a51,	// (0x000325b5) data_form_pane

0x8b10,	// (0x00036674) form_field_data_pane_t1

0x4a5d,	// (0x000325c1) input_focus_pane

0x4a6b,	// (0x000325cf) data_form_wide_pane

0x8b36,	// (0x0003669a) form_field_data_wide_pane_t1

0x47d8,	// (0x0003233c) input_focus_pane_cp6

0x8b58,	// (0x000366bc) form_field_popup_pane_t1

0x4a5d,	// (0x000325c1) input_focus_pane_cp7

0x4a97,	// (0x000325fb) list_form_pane

0x8b7a,	// (0x000366de) form_field_popup_wide_pane_t1

0x4a5d,	// (0x000325c1) input_focus_pane_cp8

0x4aa3,	// (0x00032607) list_form_wide_pane

0x8b97,	// (0x000366fb) form_field_slider_pane_t1_ParamLimits

0x8b97,	// (0x000366fb) form_field_slider_pane_t1

0x8baf,	// (0x00036713) form_field_slider_pane_t2_ParamLimits

0x8baf,	// (0x00036713) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x0003d207) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x0003d207) form_field_slider_pane_t

0x42d1,	// (0x00031e35) input_focus_pane_cp9_ParamLimits

0x42d1,	// (0x00031e35) input_focus_pane_cp9

0x8bc4,	// (0x00036728) slider_cont_pane_ParamLimits

0x8bc4,	// (0x00036728) slider_cont_pane

0x4ab2,	// (0x00032616) form_field_slider_wide_pane_t1_ParamLimits

0x4ab2,	// (0x00032616) form_field_slider_wide_pane_t1

0x8bd8,	// (0x0003673c) form_field_slider_wide_pane_t2_ParamLimits

0x8bd8,	// (0x0003673c) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x0003d20c) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x0003d20c) form_field_slider_wide_pane_t

0x42d1,	// (0x00031e35) input_focus_pane_cp10_ParamLimits

0x42d1,	// (0x00031e35) input_focus_pane_cp10

0x8bea,	// (0x0003674e) slider_cont_pane_cp1_ParamLimits

0x8bea,	// (0x0003674e) slider_cont_pane_cp1

0x8bfe,	// (0x00036762) slider_form_pane_cp

0x4ac4,	// (0x00032628) input_focus_pane_g1

0x4acc,	// (0x00032630) input_focus_pane_g2

0x4ad4,	// (0x00032638) input_focus_pane_g3

0x4adc,	// (0x00032640) input_focus_pane_g4

0x4ae4,	// (0x00032648) input_focus_pane_g5

0x4aec,	// (0x00032650) input_focus_pane_g6

0x4af4,	// (0x00032658) input_focus_pane_g7

0x4afc,	// (0x00032660) input_focus_pane_g8

0x4b04,	// (0x00032668) input_focus_pane_g9

0x4279,	// (0x00031ddd) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x0003d211) input_focus_pane_g

0x5f2f,	// (0x00033a93) wait_border_pane_g3_copy1

0x8c06,	// (0x0003676a) data_form_pane_t1

0x4279,	// (0x00031ddd) wait_anim_pane_g1_copy1

0x8e60,	// (0x000369c4) data_form_wide_pane_t1

0x8c21,	// (0x00036785) list_form_graphic_pane_cp_ParamLimits

0x8c21,	// (0x00036785) list_form_graphic_pane_cp

0x6b50,	// (0x000346b4) slider_form_pane_g1

0x6b59,	// (0x000346bd) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0003d509) slider_form_pane_g

0x8c38,	// (0x0003679c) list_form_graphic_pane_ParamLimits

0x8c38,	// (0x0003679c) list_form_graphic_pane

0x8c52,	// (0x000367b6) list_form_graphic_pane_g1

0x8c5a,	// (0x000367be) list_form_graphic_pane_t1_ParamLimits

0x8c5a,	// (0x000367be) list_form_graphic_pane_t1

0x42df,	// (0x00031e43) list_highlight_pane_cp5_ParamLimits

0x42df,	// (0x00031e43) list_highlight_pane_cp5

0x8c6f,	// (0x000367d3) find_pane_g1

0x4b0c,	// (0x00032670) input_find_pane

0x8c78,	// (0x000367dc) input_find_pane_g1_ParamLimits

0x8c78,	// (0x000367dc) input_find_pane_g1

0x8c84,	// (0x000367e8) input_find_pane_t1_ParamLimits

0x8c84,	// (0x000367e8) input_find_pane_t1

0x8c99,	// (0x000367fd) input_find_pane_t2_ParamLimits

0x8c99,	// (0x000367fd) input_find_pane_t2

0x0001,

0xf6c2,	// (0x0003d226) input_find_pane_t_ParamLimits

0xf6c2,	// (0x0003d226) input_find_pane_t

0x4b15,	// (0x00032679) input_focus_pane_cp5_ParamLimits

0x4b15,	// (0x00032679) input_focus_pane_cp5

0x9bd3,	// (0x00037737) bg_popup_window_pane_cp2_ParamLimits

0x9bd3,	// (0x00037737) bg_popup_window_pane_cp2

0x9be0,	// (0x00037744) listscroll_menu_pane_ParamLimits

0x9be0,	// (0x00037744) listscroll_menu_pane

0x9bec,	// (0x00037750) popup_submenu_window_ParamLimits

0x9bec,	// (0x00037750) popup_submenu_window

0x4b23,	// (0x00032687) find_popup_pane_g1

0x4b2b,	// (0x0003268f) input_popup_find_pane_cp

0x4b15,	// (0x00032679) input_focus_pane_cp4_ParamLimits

0x4b15,	// (0x00032679) input_focus_pane_cp4

0x4b35,	// (0x00032699) input_popup_find_pane_t1_ParamLimits

0x4b35,	// (0x00032699) input_popup_find_pane_t1

0x4283,	// (0x00031de7) bg_popup_sub_pane_cp

0x4b63,	// (0x000326c7) listscroll_popup_sub_pane

0x4b6b,	// (0x000326cf) list_submenu_pane_ParamLimits

0x4b6b,	// (0x000326cf) list_submenu_pane

0x4b7c,	// (0x000326e0) scroll_pane_cp4

0x4b84,	// (0x000326e8) list_single_popup_submenu_pane_ParamLimits

0x4b84,	// (0x000326e8) list_single_popup_submenu_pane

0x4b97,	// (0x000326fb) list_single_popup_submenu_pane_g1

0x4b9f,	// (0x00032703) list_single_popup_submenu_pane_t1_ParamLimits

0x4b9f,	// (0x00032703) list_single_popup_submenu_pane_t1

0x42df,	// (0x00031e43) bg_active_tab_pane_cp1_ParamLimits

0x42df,	// (0x00031e43) bg_active_tab_pane_cp1

0x9c1e,	// (0x00037782) tabs_2_active_pane_g1

0x9c26,	// (0x0003778a) tabs_2_active_pane_t1

0x42df,	// (0x00031e43) bg_passive_tab_pane_cp1_ParamLimits

0x42df,	// (0x00031e43) bg_passive_tab_pane_cp1

0x9c1e,	// (0x00037782) tabs_2_passive_pane_g1

0x9c26,	// (0x0003778a) tabs_2_passive_pane_t1

0x582d,	// (0x00033391) bg_active_tab_pane_cp4

0x9c38,	// (0x0003779c) tabs_2_long_active_pane_t1

0x9c4b,	// (0x000377af) bg_passive_tab_pane_cp4

0xa51e,	// (0x00038082) list_single_midp_graphic_pane_g4_ParamLimits

0x582d,	// (0x00033391) bg_active_tab_pane_cp5

0x9c57,	// (0x000377bb) tabs_3_long_active_pane_t1

0x9c4b,	// (0x000377af) bg_passive_tab_pane_cp5

0xa51e,	// (0x00038082) list_single_midp_graphic_pane_g4

0x42df,	// (0x00031e43) bg_popup_window_pane_cp13_ParamLimits

0x42df,	// (0x00031e43) bg_popup_window_pane_cp13

0x4bc9,	// (0x0003272d) listscroll_popup_fast_pane_ParamLimits

0x4bc9,	// (0x0003272d) listscroll_popup_fast_pane

0x4bd8,	// (0x0003273c) grid_popup_fast_pane_ParamLimits

0x4bd8,	// (0x0003273c) grid_popup_fast_pane

0x4bea,	// (0x0003274e) scroll_pane_cp9_ParamLimits

0x4bea,	// (0x0003274e) scroll_pane_cp9

0xc936,	// (0x0003a49a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc936,	// (0x0003a49a) list_single_graphic_hl_pane_t1_cp2

0x4c0e,	// (0x00032772) input_focus_pane_cp20_ParamLimits

0x4c0e,	// (0x00032772) input_focus_pane_cp20

0x4c1c,	// (0x00032780) query_popup_data_pane_t1_ParamLimits

0x4c1c,	// (0x00032780) query_popup_data_pane_t1

0x4c2f,	// (0x00032793) query_popup_data_pane_t2_ParamLimits

0x4c2f,	// (0x00032793) query_popup_data_pane_t2

0x4c75,	// (0x000327d9) query_popup_data_pane_t3_ParamLimits

0x4c75,	// (0x000327d9) query_popup_data_pane_t3

0x4cb6,	// (0x0003281a) query_popup_data_pane_t4_ParamLimits

0x4cb6,	// (0x0003281a) query_popup_data_pane_t4

0x4cf2,	// (0x00032856) query_popup_data_pane_t5_ParamLimits

0x4cf2,	// (0x00032856) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x0003d22b) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x0003d22b) query_popup_data_pane_t

0x4ac4,	// (0x00032628) bg_set_opt_pane_g1

0x4acc,	// (0x00032630) bg_set_opt_pane_g2

0x4ad4,	// (0x00032638) bg_set_opt_pane_g3

0x4adc,	// (0x00032640) bg_set_opt_pane_g4

0x4ae4,	// (0x00032648) bg_set_opt_pane_g5

0x4aec,	// (0x00032650) bg_set_opt_pane_g6

0x4af4,	// (0x00032658) bg_set_opt_pane_g7

0x4afc,	// (0x00032660) bg_set_opt_pane_g8

0x4b04,	// (0x00032668) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x0003d236) bg_set_opt_pane_g

0xa05a,	// (0x00037bbe) control_top_pane_stacon_ParamLimits

0xa05a,	// (0x00037bbe) control_top_pane_stacon

0xa0ad,	// (0x00037c11) signal_pane_stacon_ParamLimits

0xa0ad,	// (0x00037c11) signal_pane_stacon

0x5156,	// (0x00032cba) stacon_top_pane_g1_ParamLimits

0x5156,	// (0x00032cba) stacon_top_pane_g1

0xa0d2,	// (0x00037c36) title_pane_stacon_ParamLimits

0xa0d2,	// (0x00037c36) title_pane_stacon

0xa0fc,	// (0x00037c60) uni_indicator_pane_stacon_ParamLimits

0xa0fc,	// (0x00037c60) uni_indicator_pane_stacon

0xa111,	// (0x00037c75) battery_pane_stacon_ParamLimits

0xa111,	// (0x00037c75) battery_pane_stacon

0xa155,	// (0x00037cb9) control_bottom_pane_stacon_ParamLimits

0xa155,	// (0x00037cb9) control_bottom_pane_stacon

0xa178,	// (0x00037cdc) navi_pane_stacon_ParamLimits

0xa178,	// (0x00037cdc) navi_pane_stacon

0x5178,	// (0x00032cdc) stacon_bottom_pane_g1_ParamLimits

0x5178,	// (0x00032cdc) stacon_bottom_pane_g1

0x9c69,	// (0x000377cd) aid_levels_signal_lsc_ParamLimits

0x9c69,	// (0x000377cd) aid_levels_signal_lsc

0x9c80,	// (0x000377e4) signal_pane_stacon_g1_ParamLimits

0x9c80,	// (0x000377e4) signal_pane_stacon_g1

0x9c94,	// (0x000377f8) signal_pane_stacon_g2_ParamLimits

0x9c94,	// (0x000377f8) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x0003d249) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0003d249) signal_pane_stacon_g

0x9cc9,	// (0x0003782d) title_pane_stacon_t1_ParamLimits

0x9cc9,	// (0x0003782d) title_pane_stacon_t1

0x4d4a,	// (0x000328ae) uni_indicator_pane_stacon_g1

0x4d54,	// (0x000328b8) uni_indicator_pane_stacon_g2

0x4d36,	// (0x0003289a) uni_indicator_pane_stacon_g3

0x4d40,	// (0x000328a4) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0003d255) uni_indicator_pane_stacon_g

0x9cee,	// (0x00037852) control_top_pane_stacon_g1

0x9cf6,	// (0x0003785a) control_top_pane_stacon_t1_ParamLimits

0x9cf6,	// (0x0003785a) control_top_pane_stacon_t1

0x9d2d,	// (0x00037891) aid_levels_battery_lsc_ParamLimits

0x9d2d,	// (0x00037891) aid_levels_battery_lsc

0x9d45,	// (0x000378a9) battery_pane_stacon_g1_ParamLimits

0x9d45,	// (0x000378a9) battery_pane_stacon_g1

0x9d58,	// (0x000378bc) battery_pane_stacon_g2_ParamLimits

0x9d58,	// (0x000378bc) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x0003d25e) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x0003d25e) battery_pane_stacon_g

0x9d96,	// (0x000378fa) navi_icon_pane_stacon

0x9daa,	// (0x0003790e) navi_navi_pane_stacon

0x9d96,	// (0x000378fa) navi_text_pane_stacon

0x9cee,	// (0x00037852) control_bottom_pane_stacon_g1

0x9dbe,	// (0x00037922) control_bottom_pane_stacon_t1_ParamLimits

0x9dbe,	// (0x00037922) control_bottom_pane_stacon_t1

0x9df5,	// (0x00037959) grid_app_pane_ParamLimits

0x9df5,	// (0x00037959) grid_app_pane

0x9e17,	// (0x0003797b) scroll_pane_cp15_ParamLimits

0x9e17,	// (0x0003797b) scroll_pane_cp15

0x9e2c,	// (0x00037990) cell_app_pane_ParamLimits

0x9e2c,	// (0x00037990) cell_app_pane

0x9e56,	// (0x000379ba) cell_app_pane_g1_ParamLimits

0x9e56,	// (0x000379ba) cell_app_pane_g1

0x4d78,	// (0x000328dc) cell_app_pane_g2_ParamLimits

0x4d78,	// (0x000328dc) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x0003d263) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x0003d263) cell_app_pane_g

0x4d84,	// (0x000328e8) cell_app_pane_t1_ParamLimits

0x4d84,	// (0x000328e8) cell_app_pane_t1

0x4d9b,	// (0x000328ff) grid_highlight_pane_ParamLimits

0x4d9b,	// (0x000328ff) grid_highlight_pane

0x4ac4,	// (0x00032628) cell_highlight_pane_g1

0x4acc,	// (0x00032630) cell_highlight_pane_g2

0x4ad4,	// (0x00032638) cell_highlight_pane_g3

0x4adc,	// (0x00032640) cell_highlight_pane_g4

0x4ae4,	// (0x00032648) cell_highlight_pane_g5

0x4aec,	// (0x00032650) cell_highlight_pane_g6

0x4af4,	// (0x00032658) cell_highlight_pane_g7

0x4afc,	// (0x00032660) cell_highlight_pane_g8

0x4b04,	// (0x00032668) cell_highlight_pane_g9

0x4279,	// (0x00031ddd) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x0003d211) cell_highlight_pane_g

0x4dac,	// (0x00032910) bg_scroll_pane

0x9e8d,	// (0x000379f1) scroll_handle_pane

0x4df3,	// (0x00032957) scroll_bg_pane_g1

0x4e08,	// (0x0003296c) scroll_bg_pane_g2

0x4e20,	// (0x00032984) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x0003d268) scroll_bg_pane_g

0x4e35,	// (0x00032999) scroll_handle_focus_pane_ParamLimits

0x4e35,	// (0x00032999) scroll_handle_focus_pane

0x4df3,	// (0x00032957) scroll_handle_pane_g1

0x4e42,	// (0x000329a6) scroll_handle_pane_g2

0x4e20,	// (0x00032984) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x0003d26f) scroll_handle_pane_g

0x4b15,	// (0x00032679) bg_popup_sub_pane_cp21_ParamLimits

0x4b15,	// (0x00032679) bg_popup_sub_pane_cp21

0x4e56,	// (0x000329ba) popup_fep_japan_predictive_window_t1_ParamLimits

0x4e56,	// (0x000329ba) popup_fep_japan_predictive_window_t1

0x4e6d,	// (0x000329d1) popup_fep_japan_predictive_window_t2_ParamLimits

0x4e6d,	// (0x000329d1) popup_fep_japan_predictive_window_t2

0x4ea0,	// (0x00032a04) popup_fep_japan_predictive_window_t3_ParamLimits

0x4ea0,	// (0x00032a04) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x0003d276) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x0003d276) popup_fep_japan_predictive_window_t

0x4283,	// (0x00031de7) bg_popup_sub_pane_cp23

0x4ed7,	// (0x00032a3b) listscroll_japin_cand_pane

0x4edf,	// (0x00032a43) popup_fep_japan_candidate_window_t1

0x4eed,	// (0x00032a51) candidate_pane_ParamLimits

0x4eed,	// (0x00032a51) candidate_pane

0x4eff,	// (0x00032a63) scroll_pane_cp30

0x4f07,	// (0x00032a6b) list_single_popup_jap_candidate_pane_ParamLimits

0x4f07,	// (0x00032a6b) list_single_popup_jap_candidate_pane

0x4283,	// (0x00031de7) list_highlight_pane_cp30

0x4f1b,	// (0x00032a7f) list_single_popup_jap_candidate_pane_t1

0x4f2a,	// (0x00032a8e) level_1_signal

0x4f37,	// (0x00032a9b) level_2_signal

0x4f44,	// (0x00032aa8) level_3_signal

0x4f51,	// (0x00032ab5) level_4_signal

0x4f5e,	// (0x00032ac2) level_5_signal

0x4f6b,	// (0x00032acf) level_6_signal

0x4f78,	// (0x00032adc) level_7_signal

0x4f2a,	// (0x00032a8e) level_1_battery

0x4f37,	// (0x00032a9b) level_2_battery

0x4f44,	// (0x00032aa8) level_3_battery

0x4f51,	// (0x00032ab5) level_4_battery

0x4f5e,	// (0x00032ac2) level_5_battery

0x4f6b,	// (0x00032acf) level_6_battery

0x4f78,	// (0x00032adc) level_7_battery

0x4f9d,	// (0x00032b01) list_menu_pane_ParamLimits

0x4f9d,	// (0x00032b01) list_menu_pane

0x4fae,	// (0x00032b12) scroll_pane_cp25_ParamLimits

0x4fae,	// (0x00032b12) scroll_pane_cp25

0x4fc7,	// (0x00032b2b) list_double2_graphic_pane_cp2_ParamLimits

0x4fc7,	// (0x00032b2b) list_double2_graphic_pane_cp2

0x4fc7,	// (0x00032b2b) list_double2_large_graphic_pane_cp2_ParamLimits

0x4fc7,	// (0x00032b2b) list_double2_large_graphic_pane_cp2

0x4fc7,	// (0x00032b2b) list_double2_pane_cp2_ParamLimits

0x4fc7,	// (0x00032b2b) list_double2_pane_cp2

0x4fc7,	// (0x00032b2b) list_double_graphic_pane_cp2_ParamLimits

0x4fc7,	// (0x00032b2b) list_double_graphic_pane_cp2

0x4fc7,	// (0x00032b2b) list_double_large_graphic_pane_cp2_ParamLimits

0x4fc7,	// (0x00032b2b) list_double_large_graphic_pane_cp2

0x4fc7,	// (0x00032b2b) list_double_number_pane_cp2_ParamLimits

0x4fc7,	// (0x00032b2b) list_double_number_pane_cp2

0x4fc7,	// (0x00032b2b) list_double_pane_cp2_ParamLimits

0x4fc7,	// (0x00032b2b) list_double_pane_cp2

0x9ee7,	// (0x00037a4b) list_single_2graphic_pane_cp2_ParamLimits

0x9ee7,	// (0x00037a4b) list_single_2graphic_pane_cp2

0x9ee7,	// (0x00037a4b) list_single_graphic_heading_pane_cp2_ParamLimits

0x9ee7,	// (0x00037a4b) list_single_graphic_heading_pane_cp2

0x9ee7,	// (0x00037a4b) list_single_graphic_pane_cp2_ParamLimits

0x9ee7,	// (0x00037a4b) list_single_graphic_pane_cp2

0x9ee7,	// (0x00037a4b) list_single_heading_pane_cp2_ParamLimits

0x9ee7,	// (0x00037a4b) list_single_heading_pane_cp2

0x4fd7,	// (0x00032b3b) list_single_large_graphic_pane_cp2_ParamLimits

0x4fd7,	// (0x00032b3b) list_single_large_graphic_pane_cp2

0x9ee7,	// (0x00037a4b) list_single_number_heading_pane_cp2_ParamLimits

0x9ee7,	// (0x00037a4b) list_single_number_heading_pane_cp2

0x9ee7,	// (0x00037a4b) list_single_number_pane_cp2_ParamLimits

0x9ee7,	// (0x00037a4b) list_single_number_pane_cp2

0x9ee7,	// (0x00037a4b) list_single_pane_cp2_ParamLimits

0x9ee7,	// (0x00037a4b) list_single_pane_cp2

0x4ff1,	// (0x00032b55) bg_popup_sub_pane_cp22

0x9fa4,	// (0x00037b08) popup_side_volume_key_window_g1

0x9fce,	// (0x00037b32) popup_side_volume_key_window_t1

0x9fea,	// (0x00037b4e) volume_small_pane_cp1

0x42d1,	// (0x00031e35) bg_popup_sub_pane_cp24_ParamLimits

0x42d1,	// (0x00031e35) bg_popup_sub_pane_cp24

0x5007,	// (0x00032b6b) fep_china_uni_candidate_pane_ParamLimits

0x5007,	// (0x00032b6b) fep_china_uni_candidate_pane

0x501b,	// (0x00032b7f) fep_china_uni_entry_pane

0x502b,	// (0x00032b8f) popup_fep_china_uni_window_g1

0x5047,	// (0x00032bab) fep_china_uni_entry_pane_g1

0x504f,	// (0x00032bb3) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0003d2a3) fep_china_uni_entry_pane_g

0x5057,	// (0x00032bbb) fep_entry_item_pane

0x5061,	// (0x00032bc5) fep_candidate_item_pane

0x5069,	// (0x00032bcd) fep_china_uni_candidate_pane_g1

0x5071,	// (0x00032bd5) fep_china_uni_candidate_pane_g2

0x5079,	// (0x00032bdd) fep_china_uni_candidate_pane_g3

0x5081,	// (0x00032be5) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0003d2a8) fep_china_uni_candidate_pane_g

0x4279,	// (0x00031ddd) fep_entry_item_pane_g1

0x5089,	// (0x00032bed) fep_entry_item_pane_t1_ParamLimits

0x5089,	// (0x00032bed) fep_entry_item_pane_t1

0x509f,	// (0x00032c03) fep_candidate_item_pane_t1_ParamLimits

0x509f,	// (0x00032c03) fep_candidate_item_pane_t1

0x50b4,	// (0x00032c18) fep_candidate_item_pane_t2_ParamLimits

0x50b4,	// (0x00032c18) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0003d2b1) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0003d2b1) fep_candidate_item_pane_t

0x42df,	// (0x00031e43) list_highlight_pane_cp31_ParamLimits

0x42df,	// (0x00031e43) list_highlight_pane_cp31

0x50c6,	// (0x00032c2a) level_1_signal_lsc

0x50cf,	// (0x00032c33) level_2_signal_lsc

0x50d8,	// (0x00032c3c) level_3_signal_lsc

0x50e1,	// (0x00032c45) level_4_signal_lsc

0x50ea,	// (0x00032c4e) level_5_signal_lsc

0x50f3,	// (0x00032c57) level_6_signal_lsc

0x50fc,	// (0x00032c60) level_7_signal_lsc

0x50fc,	// (0x00032c60) level_1_battery_lsc

0x5105,	// (0x00032c69) level_2_battery_lsc

0x510e,	// (0x00032c72) level_3_battery_lsc

0x5117,	// (0x00032c7b) level_4_battery_lsc

0x5120,	// (0x00032c84) level_5_battery_lsc

0x5129,	// (0x00032c8d) level_6_battery_lsc

0x50c6,	// (0x00032c2a) level_7_battery_lsc

0x5132,	// (0x00032c96) scroll_handle_focus_pane_g1

0x513b,	// (0x00032c9f) scroll_handle_focus_pane_g2

0x5144,	// (0x00032ca8) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0003d2b6) scroll_handle_focus_pane_g

0x8cae,	// (0x00036812) list_single_2graphic_pane_g1_ParamLimits

0x8cae,	// (0x00036812) list_single_2graphic_pane_g1

0x8692,	// (0x000361f6) list_single_2graphic_pane_g2_ParamLimits

0x8692,	// (0x000361f6) list_single_2graphic_pane_g2

0x85f7,	// (0x0003615b) list_single_2graphic_pane_g3_ParamLimits

0x85f7,	// (0x0003615b) list_single_2graphic_pane_g3

0x8cba,	// (0x0003681e) list_single_2graphic_pane_g4_ParamLimits

0x8cba,	// (0x0003681e) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0003d2bd) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0003d2bd) list_single_2graphic_pane_g

0x8ccb,	// (0x0003682f) list_single_2graphic_pane_t1_ParamLimits

0x8ccb,	// (0x0003682f) list_single_2graphic_pane_t1

0x9ff2,	// (0x00037b56) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9ff2,	// (0x00037b56) list_double2_graphic_large_graphic_pane_g1

0x9baa,	// (0x0003770e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9baa,	// (0x0003770e) list_double2_graphic_large_graphic_pane_g2

0x9b7d,	// (0x000376e1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9b7d,	// (0x000376e1) list_double2_graphic_large_graphic_pane_g3

0xa002,	// (0x00037b66) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa002,	// (0x00037b66) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0003d2c6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0003d2c6) list_double2_graphic_large_graphic_pane_g

0x8cf9,	// (0x0003685d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8cf9,	// (0x0003685d) list_double2_graphic_large_graphic_pane_t1

0x8d0f,	// (0x00036873) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8d0f,	// (0x00036873) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0003d2cf) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0003d2cf) list_double2_graphic_large_graphic_pane_t

0x5225,	// (0x00032d89) popup_fast_swap_window_ParamLimits

0x5225,	// (0x00032d89) popup_fast_swap_window

0x5241,	// (0x00032da5) popup_side_volume_key_window

0x525b,	// (0x00032dbf) stacon_top_pane

0x5265,	// (0x00032dc9) status_pane_ParamLimits

0x5265,	// (0x00032dc9) status_pane

0x525b,	// (0x00032dbf) status_small_pane

0x4283,	// (0x00031de7) control_pane

0x4283,	// (0x00031de7) stacon_bottom_pane

0x4a40,	// (0x000325a4) scroll_pane_cp121

0x4a37,	// (0x0003259b) set_content_pane

0xa00e,	// (0x00037b72) bg_active_tab_pane_g1_cp1

0x514d,	// (0x00032cb1) bg_active_tab_pane_g2_cp1

0xa017,	// (0x00037b7b) bg_active_tab_pane_g3_cp1

0xa00e,	// (0x00037b72) bg_passive_tab_pane_g1_cp1

0x514d,	// (0x00032cb1) bg_passive_tab_pane_g2_cp1

0xa017,	// (0x00037b7b) bg_passive_tab_pane_g3_cp1

0xa020,	// (0x00037b84) bg_active_tab_pane_g1_cp2

0x514d,	// (0x00032cb1) bg_active_tab_pane_g2_cp2

0xa029,	// (0x00037b8d) bg_active_tab_pane_g3_cp2

0xa020,	// (0x00037b84) bg_passive_tab_pane_g1_cp2

0x514d,	// (0x00032cb1) bg_passive_tab_pane_g2_cp2

0xa029,	// (0x00037b8d) bg_passive_tab_pane_g3_cp2

0xa032,	// (0x00037b96) bg_active_tab_pane_g1_cp3

0x514d,	// (0x00032cb1) bg_active_tab_pane_g2_cp3

0xa03b,	// (0x00037b9f) bg_active_tab_pane_g3_cp3

0xa032,	// (0x00037b96) bg_passive_tab_pane_g1_cp3

0x514d,	// (0x00032cb1) bg_passive_tab_pane_g2_cp3

0xa03b,	// (0x00037b9f) bg_passive_tab_pane_g3_cp3

0xa044,	// (0x00037ba8) bg_active_tab_pane_g1_cp4

0x514d,	// (0x00032cb1) bg_active_tab_pane_g2_cp4

0xa04f,	// (0x00037bb3) bg_active_tab_pane_g3_cp4

0xa044,	// (0x00037ba8) bg_passive_tab_pane_g1_cp4

0x514d,	// (0x00032cb1) bg_passive_tab_pane_g2_cp4

0xa04f,	// (0x00037bb3) bg_passive_tab_pane_g3_cp4

0x519d,	// (0x00032d01) bg_active_tab_pane_g1_cp5

0x514d,	// (0x00032cb1) bg_active_tab_pane_g2_cp5

0x5194,	// (0x00032cf8) bg_active_tab_pane_g3_cp5

0x519d,	// (0x00032d01) bg_passive_tab_pane_g1_cp5

0x514d,	// (0x00032cb1) bg_passive_tab_pane_g2_cp5

0x5194,	// (0x00032cf8) bg_passive_tab_pane_g3_cp5

0xa19b,	// (0x00037cff) list_set_graphic_pane_ParamLimits

0xa19b,	// (0x00037cff) list_set_graphic_pane

0x4283,	// (0x00031de7) bg_set_opt_pane_cp4

0x51a6,	// (0x00032d0a) list_set_graphic_pane_g1_ParamLimits

0x51a6,	// (0x00032d0a) list_set_graphic_pane_g1

0x51b2,	// (0x00032d16) list_set_graphic_pane_g2_ParamLimits

0x51b2,	// (0x00032d16) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0003d2d4) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0003d2d4) list_set_graphic_pane_g

0x0009,

0xfae8,	// (0x0003d64c) volume_small_pane_cp_g

0x51d6,	// (0x00032d3a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x51d6,	// (0x00032d3a) list_double2_large_graphic_pane_g1_cp2

0x51e4,	// (0x00032d48) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x51e4,	// (0x00032d48) list_double2_large_graphic_pane_g2_cp2

0x51f5,	// (0x00032d59) list_double2_large_graphic_pane_g3_cp2

0x51fd,	// (0x00032d61) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x51fd,	// (0x00032d61) list_double2_large_graphic_pane_t1_cp2

0x5213,	// (0x00032d77) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5213,	// (0x00032d77) list_double2_large_graphic_pane_t2_cp2

0x68f4,	// (0x00034458) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x68f4,	// (0x00034458) list_double_large_graphic_pane_g1_cp2

0x6907,	// (0x0003446b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6907,	// (0x0003446b) list_double_large_graphic_pane_g2_cp2

0x5383,	// (0x00032ee7) list_double_large_graphic_pane_g3_cp2

0x6918,	// (0x0003447c) list_double_large_graphic_pane_g4_cp

0x6920,	// (0x00034484) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6920,	// (0x00034484) list_double_large_graphic_pane_t1_cp2

0x6937,	// (0x0003449b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6937,	// (0x0003449b) list_double_large_graphic_pane_t2_cp2

0x5273,	// (0x00032dd7) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5273,	// (0x00032dd7) list_double2_graphic_pane_g1_cp2

0x5281,	// (0x00032de5) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5281,	// (0x00032de5) list_double2_graphic_pane_g2_cp2

0x5292,	// (0x00032df6) list_double2_graphic_pane_g3_cp2

0x529c,	// (0x00032e00) list_double2_graphic_pane_t1_cp2_ParamLimits

0x529c,	// (0x00032e00) list_double2_graphic_pane_t1_cp2

0x52b2,	// (0x00032e16) list_double2_graphic_pane_t2_cp2_ParamLimits

0x52b2,	// (0x00032e16) list_double2_graphic_pane_t2_cp2

0x52c4,	// (0x00032e28) list_single_number_heading_pane_g1_cp2_ParamLimits

0x52c4,	// (0x00032e28) list_single_number_heading_pane_g1_cp2

0x52d0,	// (0x00032e34) list_single_number_heading_pane_g2_cp2

0x52d8,	// (0x00032e3c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x52d8,	// (0x00032e3c) list_single_number_heading_pane_t1_cp2

0x52ee,	// (0x00032e52) list_single_number_heading_pane_t2_cp2_ParamLimits

0x52ee,	// (0x00032e52) list_single_number_heading_pane_t2_cp2

0x5302,	// (0x00032e66) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5302,	// (0x00032e66) list_single_number_heading_pane_t3_cp2

0x52c4,	// (0x00032e28) list_single_heading_pane_g1_cp2_ParamLimits

0x52c4,	// (0x00032e28) list_single_heading_pane_g1_cp2

0x52d0,	// (0x00032e34) list_single_heading_pane_g2_cp2

0x52d8,	// (0x00032e3c) list_single_heading_pane_t1_cp2_ParamLimits

0x52d8,	// (0x00032e3c) list_single_heading_pane_t1_cp2

0x66fc,	// (0x00034260) list_single_heading_pane_t2_cp2_ParamLimits

0x66fc,	// (0x00034260) list_single_heading_pane_t2_cp2

0x6696,	// (0x000341fa) list_double_graphic_pane_g1_cp2_ParamLimits

0x6696,	// (0x000341fa) list_double_graphic_pane_g1_cp2

0x66a2,	// (0x00034206) list_double_graphic_pane_g2_cp2_ParamLimits

0x66a2,	// (0x00034206) list_double_graphic_pane_g2_cp2

0x66b1,	// (0x00034215) list_double_graphic_pane_g3_cp2

0x66b9,	// (0x0003421d) list_double_graphic_pane_t1_cp2_ParamLimits

0x66b9,	// (0x0003421d) list_double_graphic_pane_t1_cp2

0x66cf,	// (0x00034233) list_double_graphic_pane_t2_cp2_ParamLimits

0x66cf,	// (0x00034233) list_double_graphic_pane_t2_cp2

0x5377,	// (0x00032edb) list_double_number_pane_g1_cp2_ParamLimits

0x5377,	// (0x00032edb) list_double_number_pane_g1_cp2

0x5383,	// (0x00032ee7) list_double_number_pane_g2_cp2

0x665a,	// (0x000341be) list_double_number_pane_t1_cp2_ParamLimits

0x665a,	// (0x000341be) list_double_number_pane_t1_cp2

0x666e,	// (0x000341d2) list_double_number_pane_t2_cp2_ParamLimits

0x666e,	// (0x000341d2) list_double_number_pane_t2_cp2

0x6684,	// (0x000341e8) list_double_number_pane_t3_cp2_ParamLimits

0x6684,	// (0x000341e8) list_double_number_pane_t3_cp2

0x65d1,	// (0x00034135) list_single_graphic_pane_g1_cp2_ParamLimits

0x65d1,	// (0x00034135) list_single_graphic_pane_g1_cp2

0x53db,	// (0x00032f3f) list_single_graphic_pane_g2_cp2_ParamLimits

0x53db,	// (0x00032f3f) list_single_graphic_pane_g2_cp2

0x53e7,	// (0x00032f4b) list_single_graphic_pane_g3_cp2

0x65a7,	// (0x0003410b) list_single_graphic_pane_t1_cp2_ParamLimits

0x65a7,	// (0x0003410b) list_single_graphic_pane_t1_cp2

0x53db,	// (0x00032f3f) list_single_number_pane_g1_cp2_ParamLimits

0x53db,	// (0x00032f3f) list_single_number_pane_g1_cp2

0x53e7,	// (0x00032f4b) list_single_number_pane_g2_cp2

0x65a7,	// (0x0003410b) list_single_number_pane_t1_cp2_ParamLimits

0x65a7,	// (0x0003410b) list_single_number_pane_t1_cp2

0x65bd,	// (0x00034121) list_single_number_pane_t2_cp2_ParamLimits

0x65bd,	// (0x00034121) list_single_number_pane_t2_cp2

0x51e4,	// (0x00032d48) list_double2_pane_g1_cp2_ParamLimits

0x51e4,	// (0x00032d48) list_double2_pane_g1_cp2

0x51f5,	// (0x00032d59) list_double2_pane_g2_cp2

0x534f,	// (0x00032eb3) list_double2_pane_t1_cp2_ParamLimits

0x534f,	// (0x00032eb3) list_double2_pane_t1_cp2

0x5365,	// (0x00032ec9) list_double2_pane_t2_cp2_ParamLimits

0x5365,	// (0x00032ec9) list_double2_pane_t2_cp2

0x5377,	// (0x00032edb) list_double_pane_g1_cp2_ParamLimits

0x5377,	// (0x00032edb) list_double_pane_g1_cp2

0x5383,	// (0x00032ee7) list_double_pane_g2_cp2

0x538b,	// (0x00032eef) list_double_pane_t1_cp2_ParamLimits

0x538b,	// (0x00032eef) list_double_pane_t1_cp2

0x53a1,	// (0x00032f05) list_double_pane_t2_cp2_ParamLimits

0x53a1,	// (0x00032f05) list_double_pane_t2_cp2

0x53cb,	// (0x00032f2f) list_single_pane_cp2_g3

0x53db,	// (0x00032f3f) list_single_pane_g1_cp2_ParamLimits

0x53db,	// (0x00032f3f) list_single_pane_g1_cp2

0x53e7,	// (0x00032f4b) list_single_pane_g2_cp2

0x53ef,	// (0x00032f53) list_single_pane_t1_cp2_ParamLimits

0x53ef,	// (0x00032f53) list_single_pane_t1_cp2

0x5407,	// (0x00032f6b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5407,	// (0x00032f6b) list_single_large_graphic_pane_g1_cp2

0x5415,	// (0x00032f79) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5415,	// (0x00032f79) list_single_large_graphic_pane_g2_cp2

0x5421,	// (0x00032f85) list_single_large_graphic_pane_g3_cp2

0x5429,	// (0x00032f8d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5429,	// (0x00032f8d) list_single_large_graphic_pane_g4_cp1

0x5443,	// (0x00032fa7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5443,	// (0x00032fa7) list_single_large_graphic_pane_t1_cp2

0x6571,	// (0x000340d5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6571,	// (0x000340d5) list_single_graphic_heading_pane_g1_cp2

0x653e,	// (0x000340a2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x653e,	// (0x000340a2) list_single_graphic_heading_pane_g4_cp2

0x53e7,	// (0x00032f4b) list_single_graphic_heading_pane_g5_cp2

0x657d,	// (0x000340e1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x657d,	// (0x000340e1) list_single_graphic_heading_pane_t1_cp2

0x6593,	// (0x000340f7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6593,	// (0x000340f7) list_single_graphic_heading_pane_t2_cp2

0x6532,	// (0x00034096) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6532,	// (0x00034096) list_single_2graphic_pane_g1_cp2

0x653e,	// (0x000340a2) list_single_2graphic_pane_g2_cp2_ParamLimits

0x653e,	// (0x000340a2) list_single_2graphic_pane_g2_cp2

0x53e7,	// (0x00032f4b) list_single_2graphic_pane_g3_cp2

0x654f,	// (0x000340b3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x654f,	// (0x000340b3) list_single_2graphic_pane_g4_cp2

0x655b,	// (0x000340bf) list_single_2graphic_pane_t1_cp2_ParamLimits

0x655b,	// (0x000340bf) list_single_2graphic_pane_t1_cp2

0x4279,	// (0x00031ddd) list_highlight_pane_g10_cp1

0x6126,	// (0x00033c8a) list_highlight_pane_g1_cp1

0x612e,	// (0x00033c92) list_highlight_pane_g2_cp1

0x6136,	// (0x00033c9a) list_highlight_pane_g3_cp1

0x613e,	// (0x00033ca2) list_highlight_pane_g4_cp1

0x6146,	// (0x00033caa) list_highlight_pane_g5_cp1

0x614e,	// (0x00033cb2) list_highlight_pane_g6_cp1

0x6156,	// (0x00033cba) list_highlight_pane_g7_cp1

0x615e,	// (0x00033cc2) list_highlight_pane_g8_cp1

0x6166,	// (0x00033cca) list_highlight_pane_g9_cp1

0xbfae,	// (0x00039b12) form_field_slider_pane_t3

0xbfbc,	// (0x00039b20) form_field_slider_pane_t4

0x605a,	// (0x00033bbe) slider_form_pane_ParamLimits

0x605a,	// (0x00033bbe) slider_form_pane

0x4283,	// (0x00031de7) control_abbreviations

0x4283,	// (0x00031de7) control_conventions

0x4283,	// (0x00031de7) control_definitions

0x4283,	// (0x00031de7) format_table_attribute

0x6748,	// (0x000342ac) bg_popup_preview_window_pane_g9

0x4283,	// (0x00031de7) format_table_data2

0x4283,	// (0x00031de7) format_table_data3

0x4283,	// (0x00031de7) format_table_data_example

0x0008,

0x4283,	// (0x00031de7) intro_purpose

0xf905,	// (0x0003d469) bg_popup_preview_window_pane_g

0x4283,	// (0x00031de7) texts_category

0x4283,	// (0x00031de7) texts_graphics

0x5459,	// (0x00032fbd) text_digital

0x5468,	// (0x00032fcc) text_primary

0x5477,	// (0x00032fdb) text_primary_small

0x5486,	// (0x00032fea) text_secondary

0x5495,	// (0x00032ff9) text_title

0x6be7,	// (0x0003474b) bg_passive_tab_pane_g1_cp3_srt

0x514d,	// (0x00032cb1) bg_passive_tab_pane_g2_cp3_srt

0x6bde,	// (0x00034742) bg_passive_tab_pane_g3_cp3_srt

0x42df,	// (0x00031e43) bg_active_tab_pane_cp3_srt_ParamLimits

0x42df,	// (0x00031e43) bg_active_tab_pane_cp3_srt

0x6bf0,	// (0x00034754) tabs_4_active_pane_srt_g1

0xc317,	// (0x00039e7b) tabs_4_active_pane_srt_t1_ParamLimits

0xc317,	// (0x00039e7b) tabs_4_active_pane_srt_t1

0x6be7,	// (0x0003474b) bg_active_tab_pane_g1_cp3_copy1

0x514d,	// (0x00032cb1) bg_active_tab_pane_g2_cp3_copy1

0x6bde,	// (0x00034742) bg_active_tab_pane_g3_cp3_copy1

0x42df,	// (0x00031e43) tabs_2_long_active_pane_srt_ParamLimits

0x42df,	// (0x00031e43) tabs_2_long_active_pane_srt

0x42df,	// (0x00031e43) tabs_2_long_passive_pane_srt_ParamLimits

0x42df,	// (0x00031e43) tabs_2_long_passive_pane_srt

0x9c4b,	// (0x000377af) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9c4b,	// (0x000377af) bg_passive_tab_pane_cp4_srt

0x6b06,	// (0x0003466a) bg_passive_tab_pane_g1_cp4_srt

0x514d,	// (0x00032cb1) bg_passive_tab_pane_g2_cp4_srt

0x6afd,	// (0x00034661) bg_passive_tab_pane_g3_cp4_srt

0x582d,	// (0x00033391) bg_active_tab_pane_cp4_srt_ParamLimits

0x582d,	// (0x00033391) bg_active_tab_pane_cp4_srt

0xc15e,	// (0x00039cc2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc15e,	// (0x00039cc2) tabs_2_long_active_pane_srt_t1

0x6b06,	// (0x0003466a) bg_active_tab_pane_g1_cp4_srt

0x514d,	// (0x00032cb1) bg_active_tab_pane_g2_cp4_srt

0x6afd,	// (0x00034661) bg_active_tab_pane_g3_cp4_srt

0x42d1,	// (0x00031e35) tabs_3_long_active_pane_srt_ParamLimits

0x42d1,	// (0x00031e35) tabs_3_long_active_pane_srt

0x42d1,	// (0x00031e35) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x42d1,	// (0x00031e35) tabs_3_long_passive_pane_cp_srt

0x42d1,	// (0x00031e35) tabs_3_long_passive_pane_srt_ParamLimits

0x42d1,	// (0x00031e35) tabs_3_long_passive_pane_srt

0x9c4b,	// (0x000377af) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9c4b,	// (0x000377af) bg_passive_tab_pane_cp5_srt

0x519d,	// (0x00032d01) bg_passive_tab_pane_g1_cp5_srt

0x514d,	// (0x00032cb1) bg_passive_tab_pane_g2_cp5_srt

0x5194,	// (0x00032cf8) bg_passive_tab_pane_g3_cp5_srt

0x582d,	// (0x00033391) bg_active_tab_pane_cp5_srt_ParamLimits

0x582d,	// (0x00033391) bg_active_tab_pane_cp5_srt

0xc14c,	// (0x00039cb0) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc14c,	// (0x00039cb0) tabs_3_long_active_pane_srt_t1

0x519d,	// (0x00032d01) bg_active_tab_pane_g1_cp5_srt

0x514d,	// (0x00032cb1) bg_active_tab_pane_g2_cp5_srt

0x5194,	// (0x00032cf8) bg_active_tab_pane_g3_cp5_srt

0x6aef,	// (0x00034653) navi_text_pane_srt_t1

0x6ae7,	// (0x0003464b) navi_icon_pane_srt_g1

0x5593,	// (0x000330f7) midp_editing_number_pane_srt

0x54a4,	// (0x00033008) midp_ticker_pane_srt

0x559b,	// (0x000330ff) midp_ticker_pane_srt_g1

0x55a3,	// (0x00033107) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0003d2f3) midp_ticker_pane_srt_g

0x55ab,	// (0x0003310f) midp_ticker_pane_srt_t1

0x6ad8,	// (0x0003463c) midp_editing_number_pane_t1_copy1

0xa1b9,	// (0x00037d1d) listscroll_midp_pane

0xa1b9,	// (0x00037d1d) midp_form_pane

0x54ac,	// (0x00033010) midp_info_popup_window_ParamLimits

0x54ac,	// (0x00033010) midp_info_popup_window

0x4b15,	// (0x00032679) bg_popup_sub_pane_cp50_ParamLimits

0x4b15,	// (0x00032679) bg_popup_sub_pane_cp50

0x5d77,	// (0x000338db) listscroll_midp_info_pane_ParamLimits

0x5d77,	// (0x000338db) listscroll_midp_info_pane

0x5d5f,	// (0x000338c3) listscroll_form_midp_pane_ParamLimits

0x5d5f,	// (0x000338c3) listscroll_form_midp_pane

0x5d6b,	// (0x000338cf) scroll_bar_cp050

0xbf96,	// (0x00039afa) list_midp_pane

0x74b2,	// (0x00035016) signal_pane_g2_cp

0x5c91,	// (0x000337f5) listscroll_midp_info_pane_t1_ParamLimits

0x5c91,	// (0x000337f5) listscroll_midp_info_pane_t1

0x5ca9,	// (0x0003380d) listscroll_midp_info_pane_t2_ParamLimits

0x5ca9,	// (0x0003380d) listscroll_midp_info_pane_t2

0x5ce7,	// (0x0003384b) listscroll_midp_info_pane_t3_ParamLimits

0x5ce7,	// (0x0003384b) listscroll_midp_info_pane_t3

0x5d21,	// (0x00033885) listscroll_midp_info_pane_t4_ParamLimits

0x5d21,	// (0x00033885) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x0003d3a4) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x0003d3a4) listscroll_midp_info_pane_t

0x4b7c,	// (0x000326e0) scroll_pane_cp21

0x5c35,	// (0x00033799) form_midp_field_choice_group_pane

0x5c3e,	// (0x000337a2) form_midp_field_text_pane

0x5c77,	// (0x000337db) form_midp_field_time_pane

0x5c7f,	// (0x000337e3) form_midp_gauge_slider_pane

0x5c88,	// (0x000337ec) form_midp_gauge_wait_pane

0x4283,	// (0x00031de7) form_midp_image_pane

0x8e00,	// (0x00036964) list_single_midp_pane_ParamLimits

0x8e00,	// (0x00036964) list_single_midp_pane

0xbf57,	// (0x00039abb) form_midp_field_text_pane_t1

0x5adc,	// (0x00033640) input_focus_pane_cp050

0x5c24,	// (0x00033788) list_midp_form_text_pane

0x5bf3,	// (0x00033757) form_midp_field_choice_group_pane_t1

0x5c01,	// (0x00033765) input_focus_pane_cp051

0x5c15,	// (0x00033779) list_midp_choice_pane

0x4283,	// (0x00031de7) status_idle_pane

0x5bd7,	// (0x0003373b) form_midp_field_time_pane_t1

0x4279,	// (0x00031ddd) wait_anim_pane_g2_copy1

0x5be5,	// (0x00033749) form_midp_field_time_pane_t2

0x0001,

0x5505,	// (0x00033069) aid_navinavi_width_2_pane

0xf83b,	// (0x0003d39f) form_midp_field_time_pane_t

0x4283,	// (0x00031de7) input_focus_pane_cp052

0x4283,	// (0x00031de7) bg_input_focus_pane_cp040

0x5bb3,	// (0x00033717) form_midp_gauge_slider_pane_t1

0x5bc1,	// (0x00033725) form_midp_gauge_slider_pane_t2

0xbf3b,	// (0x00039a9f) form_midp_gauge_slider_pane_t3

0xbf49,	// (0x00039aad) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x0003d396) form_midp_gauge_slider_pane_t

0x5bcf,	// (0x00033733) form_midp_slider_pane

0x42df,	// (0x00031e43) bg_input_focus_pane_cp041_ParamLimits

0x42df,	// (0x00031e43) bg_input_focus_pane_cp041

0x5b80,	// (0x000336e4) form_midp_gauge_wait_pane_t1_ParamLimits

0x5b80,	// (0x000336e4) form_midp_gauge_wait_pane_t1

0x5b92,	// (0x000336f6) form_midp_gauge_wait_pane_t2_ParamLimits

0x5b92,	// (0x000336f6) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x0003d391) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x0003d391) form_midp_gauge_wait_pane_t

0x5ba4,	// (0x00033708) form_midp_wait_pane_ParamLimits

0x5ba4,	// (0x00033708) form_midp_wait_pane

0x5b4a,	// (0x000336ae) form_midp_image_pane_g1

0x5b53,	// (0x000336b7) form_midp_image_pane_t1

0x5b62,	// (0x000336c6) form_midp_image_pane_t2

0x5b71,	// (0x000336d5) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0003d38a) form_midp_image_pane_t

0x5b41,	// (0x000336a5) list_single_midp_pane_g1

0x8df1,	// (0x00036955) list_single_midp_pane_t1

0xbf0b,	// (0x00039a6f) list_midp_form_item_pane_ParamLimits

0xbf0b,	// (0x00039a6f) list_midp_form_item_pane

0x54bf,	// (0x00033023) list_midp_form_item_pane_t1

0x54ce,	// (0x00033032) midp_ticker_pane_g1

0x54da,	// (0x0003303e) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0003d2d9) midp_ticker_pane_g

0xa26e,	// (0x00037dd2) midp_ticker_pane_t1

0xc2cd,	// (0x00039e31) midp_editing_number_pane_t1

0x6b72,	// (0x000346d6) midp_editing_number_pane

0x6b81,	// (0x000346e5) midp_ticker_pane

0x6ac8,	// (0x0003462c) ai_message_heading_pane

0x4283,	// (0x00031de7) bg_popup_window_pane_cp14

0x6ad0,	// (0x00034634) listscroll_ai_message_pane

0x6a52,	// (0x000345b6) ai_message_heading_pane_g1_ParamLimits

0x6a52,	// (0x000345b6) ai_message_heading_pane_g1

0x6a5e,	// (0x000345c2) ai_message_heading_pane_g2_ParamLimits

0x6a5e,	// (0x000345c2) ai_message_heading_pane_g2

0x6a6a,	// (0x000345ce) ai_message_heading_pane_g3_ParamLimits

0x6a6a,	// (0x000345ce) ai_message_heading_pane_g3

0x6a76,	// (0x000345da) ai_message_heading_pane_g4_ParamLimits

0x6a76,	// (0x000345da) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0003d4cb) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0003d4cb) ai_message_heading_pane_g

0x6a82,	// (0x000345e6) ai_message_heading_pane_t1_ParamLimits

0x6a82,	// (0x000345e6) ai_message_heading_pane_t1

0x6a9c,	// (0x00034600) ai_message_heading_pane_t2_ParamLimits

0x6a9c,	// (0x00034600) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0003d4d4) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0003d4d4) ai_message_heading_pane_t

0x6aae,	// (0x00034612) bg_popup_heading_pane_cp1_ParamLimits

0x6aae,	// (0x00034612) bg_popup_heading_pane_cp1

0x6a40,	// (0x000345a4) list_ai_message_pane_ParamLimits

0x6a40,	// (0x000345a4) list_ai_message_pane

0x4b7c,	// (0x000326e0) scroll_pane_cp10

0x69dc,	// (0x00034540) list_ai_message_pane_g1

0x69e4,	// (0x00034548) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0003d4a8) list_ai_message_pane_g

0x69ec,	// (0x00034550) list_ai_message_pane_t1_ParamLimits

0x69ec,	// (0x00034550) list_ai_message_pane_t1

0x6a01,	// (0x00034565) list_ai_message_pane_t2_ParamLimits

0x6a01,	// (0x00034565) list_ai_message_pane_t2

0x6a16,	// (0x0003457a) list_ai_message_pane_t3_ParamLimits

0x6a16,	// (0x0003457a) list_ai_message_pane_t3

0x6a2b,	// (0x0003458f) list_ai_message_pane_t4_ParamLimits

0x6a2b,	// (0x0003458f) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0003d4ad) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0003d4ad) list_ai_message_pane_t

0xc136,	// (0x00039c9a) cell_ai_soft_ind_pane_ParamLimits

0xc136,	// (0x00039c9a) cell_ai_soft_ind_pane

0x54e6,	// (0x0003304a) cell_ai_soft_ind_pane_g1_ParamLimits

0x54e6,	// (0x0003304a) cell_ai_soft_ind_pane_g1

0x4283,	// (0x00031de7) grid_highlight_cp1

0x54f3,	// (0x00033057) text_secondary_cp56_ParamLimits

0x54f3,	// (0x00033057) text_secondary_cp56

0x69b1,	// (0x00034515) example_general_pane_ParamLimits

0x69b1,	// (0x00034515) example_general_pane

0x69bd,	// (0x00034521) example_parent_pane_g1_ParamLimits

0x69bd,	// (0x00034521) example_parent_pane_g1

0x69c9,	// (0x0003452d) example_parent_pane_t1_ParamLimits

0x69c9,	// (0x0003452d) example_parent_pane_t1

0xb9b6,	// (0x0003951a) popup_preview_text_window_ParamLimits

0xb9b6,	// (0x0003951a) popup_preview_text_window

0x53d3,	// (0x00032f37) list_single_pane_cp2_g4

0x45e5,	// (0x00032149) bg_popup_preview_window_pane_ParamLimits

0x45e5,	// (0x00032149) bg_popup_preview_window_pane

0x6750,	// (0x000342b4) popup_preview_text_window_t1_ParamLimits

0x6750,	// (0x000342b4) popup_preview_text_window_t1

0x676e,	// (0x000342d2) popup_preview_text_window_t2_ParamLimits

0x676e,	// (0x000342d2) popup_preview_text_window_t2

0x67b7,	// (0x0003431b) popup_preview_text_window_t3_ParamLimits

0x67b7,	// (0x0003431b) popup_preview_text_window_t3

0x67fc,	// (0x00034360) popup_preview_text_window_t4_ParamLimits

0x67fc,	// (0x00034360) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0003d47c) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0003d47c) popup_preview_text_window_t

0x687a,	// (0x000343de) scroll_pane_cp11

0x59ec,	// (0x00033550) bg_popup_preview_window_pane_g1

0x6710,	// (0x00034274) bg_popup_preview_window_pane_g2

0x6718,	// (0x0003427c) bg_popup_preview_window_pane_g3

0x6720,	// (0x00034284) bg_popup_preview_window_pane_g4

0x6728,	// (0x0003428c) bg_popup_preview_window_pane_g5

0x6730,	// (0x00034294) bg_popup_preview_window_pane_g6

0x6738,	// (0x0003429c) bg_popup_preview_window_pane_g7

0x6740,	// (0x000342a4) bg_popup_preview_window_pane_g8

0x941e,	// (0x00036f82) aid_popup_width_pane

0xb994,	// (0x000394f8) popup_midp_note_alarm_window_ParamLimits

0xb994,	// (0x000394f8) popup_midp_note_alarm_window

0x4a51,	// (0x000325b5) data_form_pane_ParamLimits

0x8b06,	// (0x0003666a) form_field_data_pane_g1

0x8b10,	// (0x00036674) form_field_data_pane_t1_ParamLimits

0x4a5d,	// (0x000325c1) input_focus_pane_ParamLimits

0x4a6b,	// (0x000325cf) data_form_wide_pane_ParamLimits

0x8b2a,	// (0x0003668e) form_field_data_wide_pane_g1

0x8b36,	// (0x0003669a) form_field_data_wide_pane_t1_ParamLimits

0x47d8,	// (0x0003233c) input_focus_pane_cp6_ParamLimits

0x9c10,	// (0x00037774) input_popup_find_pane_g1_ParamLimits

0x9c10,	// (0x00037774) input_popup_find_pane_g1

0x9d69,	// (0x000378cd) aid_navi_side_left_pane

0x9d7e,	// (0x000378e2) aid_navi_side_right_pane

0x6215,	// (0x00033d79) bg_popup_window_pane_cp30_ParamLimits

0x6215,	// (0x00033d79) bg_popup_window_pane_cp30

0x628f,	// (0x00033df3) popup_midp_note_alarm_window_g1_ParamLimits

0x628f,	// (0x00033df3) popup_midp_note_alarm_window_g1

0x62bf,	// (0x00033e23) popup_midp_note_alarm_window_t1_ParamLimits

0x62bf,	// (0x00033e23) popup_midp_note_alarm_window_t1

0x6360,	// (0x00033ec4) popup_midp_note_alarm_window_t2_ParamLimits

0x6360,	// (0x00033ec4) popup_midp_note_alarm_window_t2

0x640e,	// (0x00033f72) popup_midp_note_alarm_window_t3_ParamLimits

0x640e,	// (0x00033f72) popup_midp_note_alarm_window_t3

0x6436,	// (0x00033f9a) popup_midp_note_alarm_window_t4_ParamLimits

0x6436,	// (0x00033f9a) popup_midp_note_alarm_window_t4

0x6456,	// (0x00033fba) popup_midp_note_alarm_window_t5_ParamLimits

0x6456,	// (0x00033fba) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0003d419) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0003d419) popup_midp_note_alarm_window_t

0x6502,	// (0x00034066) wait_bar_pane_cp1_ParamLimits

0x6502,	// (0x00034066) wait_bar_pane_cp1

0x4283,	// (0x00031de7) wait_anim_pane_copy1

0x4283,	// (0x00031de7) wait_border_pane_copy1

0x5f1b,	// (0x00033a7f) wait_border_pane_g1_copy1

0x8b50,	// (0x000366b4) form_field_popup_pane_g1

0x8b58,	// (0x000366bc) form_field_popup_pane_t1_ParamLimits

0x4a5d,	// (0x000325c1) input_focus_pane_cp7_ParamLimits

0x4a97,	// (0x000325fb) list_form_pane_ParamLimits

0x8b72,	// (0x000366d6) form_field_popup_wide_pane_g1

0x8b7a,	// (0x000366de) form_field_popup_wide_pane_t1_ParamLimits

0x4a5d,	// (0x000325c1) input_focus_pane_cp8_ParamLimits

0x4aa3,	// (0x00032607) list_form_wide_pane_ParamLimits

0x6c17,	// (0x0003477b) aid_size_cell_graphic_pane

0x8c06,	// (0x0003676a) data_form_pane_t1_ParamLimits

0x8e60,	// (0x000369c4) data_form_wide_pane_t1_ParamLimits

0xbc00,	// (0x00039764) bg_status_flat_pane

0x980d,	// (0x00037371) title_pane_t1_ParamLimits

0x4299,	// (0x00031dfd) title_pane_t2_ParamLimits

0x42bf,	// (0x00031e23) title_pane_t3_ParamLimits

0xf573,	// (0x0003d0d7) title_pane_t_ParamLimits

0x4f2a,	// (0x00032a8e) level_1_signal_ParamLimits

0x4f37,	// (0x00032a9b) level_2_signal_ParamLimits

0x4f44,	// (0x00032aa8) level_3_signal_ParamLimits

0x4f51,	// (0x00032ab5) level_4_signal_ParamLimits

0x4f5e,	// (0x00032ac2) level_5_signal_ParamLimits

0x4f6b,	// (0x00032acf) level_6_signal_ParamLimits

0x4f78,	// (0x00032adc) level_7_signal_ParamLimits

0x4f2a,	// (0x00032a8e) level_1_battery_ParamLimits

0x4f37,	// (0x00032a9b) level_2_battery_ParamLimits

0x4f44,	// (0x00032aa8) level_3_battery_ParamLimits

0x4f51,	// (0x00032ab5) level_4_battery_ParamLimits

0x4f5e,	// (0x00032ac2) level_5_battery_ParamLimits

0x4f6b,	// (0x00032acf) level_6_battery_ParamLimits

0x4f78,	// (0x00032adc) level_7_battery_ParamLimits

0x6126,	// (0x00033c8a) bg_status_flat_pane_g1

0x612e,	// (0x00033c92) bg_status_flat_pane_g2

0x6136,	// (0x00033c9a) bg_status_flat_pane_g3

0x613e,	// (0x00033ca2) bg_status_flat_pane_g4

0x6146,	// (0x00033caa) bg_status_flat_pane_g5

0x614e,	// (0x00033cb2) bg_status_flat_pane_g6

0x6156,	// (0x00033cba) bg_status_flat_pane_g7

0x987d,	// (0x000373e1) tabs_3_active_pane_t1_ParamLimits

0x987d,	// (0x000373e1) tabs_3_passive_pane_t1_ParamLimits

0x9897,	// (0x000373fb) tabs_4_active_pane_t1_ParamLimits

0x9897,	// (0x000373fb) tabs_4_1_passive_pane_t1_ParamLimits

0x9c26,	// (0x0003778a) tabs_2_active_pane_t1_ParamLimits

0x9c26,	// (0x0003778a) tabs_2_passive_pane_t1_ParamLimits

0x582d,	// (0x00033391) bg_active_tab_pane_cp4_ParamLimits

0x9c38,	// (0x0003779c) tabs_2_long_active_pane_t1_ParamLimits

0x9c4b,	// (0x000377af) bg_passive_tab_pane_cp4_ParamLimits

0xa544,	// (0x000380a8) list_single_midp_graphic_pane_t1_ParamLimits

0x582d,	// (0x00033391) bg_active_tab_pane_cp5_ParamLimits

0x9c57,	// (0x000377bb) tabs_3_long_active_pane_t1_ParamLimits

0x9c4b,	// (0x000377af) bg_passive_tab_pane_cp5_ParamLimits

0xa544,	// (0x000380a8) list_single_midp_graphic_pane_t1

0xbc00,	// (0x00039764) bg_status_flat_pane_ParamLimits

0x58bf,	// (0x00033423) indicator_pane_cp2_ParamLimits

0x58bf,	// (0x00033423) indicator_pane_cp2

0xbd43,	// (0x000398a7) navi_pane_srt_ParamLimits

0xbd43,	// (0x000398a7) navi_pane_srt

0x58e7,	// (0x0003344b) popup_clock_digital_analogue_window_cp1

0x4323,	// (0x00031e87) indicator_pane_t1

0x54a4,	// (0x00033008) copy_highlight_pane

0x54a4,	// (0x00033008) cursor_graphics_pane

0x54a4,	// (0x00033008) graphic_within_text_pane

0x54a4,	// (0x00033008) link_highlight_pane

0x683d,	// (0x000343a1) popup_preview_text_window_t5_ParamLimits

0x683d,	// (0x000343a1) popup_preview_text_window_t5

0x550d,	// (0x00033071) cursor_digital_pane

0x550d,	// (0x00033071) cursor_primary_pane

0x551e,	// (0x00033082) cursor_primary_small_pane

0x5526,	// (0x0003308a) cursor_secondary_pane

0x552e,	// (0x00033092) cursor_title_pane

0x550d,	// (0x00033071) link_highlight_digital_pane

0x5515,	// (0x00033079) link_highlight_primary_pane

0x551e,	// (0x00033082) link_highlight_primary_small_pane

0x5526,	// (0x0003308a) link_highlight_secondary_pane

0x552e,	// (0x00033092) link_highlight_title_pane

0x550d,	// (0x00033071) copy_highlight_digital_pane

0x550d,	// (0x00033071) copy_highlight_primary_pane

0x551e,	// (0x00033082) copy_highlight_primary_small_pane

0x5526,	// (0x0003308a) copy_highlight_secondary_pane

0x552e,	// (0x00033092) copy_highlight_title_pane

0x5526,	// (0x0003308a) graphic_text_digital_pane

0x61b8,	// (0x00033d1c) graphic_text_primary_pane

0x61c1,	// (0x00033d25) graphic_text_primary_small_pane

0x551e,	// (0x00033082) graphic_text_secondary_pane

0x550d,	// (0x00033071) graphic_text_title_pane

0xa280,	// (0x00037de4) cursor_primary_pane_g1

0x61aa,	// (0x00033d0e) cursor_text_primary_t1

0xbfde,	// (0x00039b42) cursor_primary_small_pane_g1

0x619c,	// (0x00033d00) cursor_text_primary_small_t1

0xbfd4,	// (0x00039b38) cursor_primary_small_pane_g1_copy1

0x617c,	// (0x00033ce0) cursor_text_primary_small_t1_copy1

0x616e,	// (0x00033cd2) cursor_text_title_t1

0xbfca,	// (0x00039b2e) cursor_title_pane_g1

0xa280,	// (0x00037de4) cursor_digital_pane_g1

0x5536,	// (0x0003309a) cursor_text_digital_t1

0x610f,	// (0x00033c73) link_highlight_primary_pane_g1

0x6117,	// (0x00033c7b) link_highlight_primary_pane_t1

0x5544,	// (0x000330a8) link_highlight_primary_small_pane_g1

0x554c,	// (0x000330b0) link_highlight_primary_small_pane_t1

0x5544,	// (0x000330a8) link_highlight_secondary_pane_g1

0x555b,	// (0x000330bf) link_highlight_secondary_pane_t1

0x6083,	// (0x00033be7) link_highlight_title_pane_g1

0x608b,	// (0x00033bef) link_highlight_title_pane_t1

0x606c,	// (0x00033bd0) link_highlight_digital_pane_g1

0x6074,	// (0x00033bd8) link_highlight_digital_pane_t1

0x5f60,	// (0x00033ac4) copy_highlight_primary_pane_g1

0x5f68,	// (0x00033acc) copy_highlight_primary_pane_t1

0x5f3a,	// (0x00033a9e) copy_highlight_primary_small_pane_g1

0x5f51,	// (0x00033ab5) copy_highlight_primary_small_pane_t1

0x556a,	// (0x000330ce) copy_highlight_secondary_pane_g1

0x5572,	// (0x000330d6) copy_highlight_secondary_pane_t1

0x5f3a,	// (0x00033a9e) copy_highlight_title_pane_g1

0x5f42,	// (0x00033aa6) copy_highlight_title_pane_t1

0x5f60,	// (0x00033ac4) copy_highlight_digital_pane_g1

0x6da1,	// (0x00034905) copy_highlight_digital_pane_t1

0x6cf5,	// (0x00034859) graphic_text_primary_pane_g1

0x6d85,	// (0x000348e9) graphic_text_primary_pane_t1

0x6d93,	// (0x000348f7) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0003d548) graphic_text_primary_pane_t

0x6d61,	// (0x000348c5) graphic_text_primary_small_pane_g1

0x6d69,	// (0x000348cd) graphic_text_primary_small_pane_t1

0x6d77,	// (0x000348db) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0003d543) graphic_text_primary_small_pane_t

0x6d3d,	// (0x000348a1) graphic_text_secondary_pane_g1

0x6d45,	// (0x000348a9) graphic_text_secondary_pane_t1

0x6d53,	// (0x000348b7) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0003d53e) graphic_text_secondary_pane_t

0x6d19,	// (0x0003487d) graphic_text_title_pane_g1

0x6d21,	// (0x00034885) graphic_text_title_pane_t1

0x6d2f,	// (0x00034893) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0003d539) graphic_text_title_pane_t

0x6cf5,	// (0x00034859) graphic_text_digital_pane_g1

0x6cfd,	// (0x00034861) graphic_text_digital_pane_t1

0x6d0b,	// (0x0003486f) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0003d534) graphic_text_digital_pane_t

0x42df,	// (0x00031e43) navi_icon_pane_srt_ParamLimits

0x42df,	// (0x00031e43) navi_icon_pane_srt

0x4283,	// (0x00031de7) navi_midp_pane_srt

0x4283,	// (0x00031de7) navi_navi_pane_srt

0x42df,	// (0x00031e43) navi_text_pane_srt_ParamLimits

0x42df,	// (0x00031e43) navi_text_pane_srt

0x6cc0,	// (0x00034824) navi_navi_icon_text_pane_srt

0x6cda,	// (0x0003483e) navi_navi_pane_srt_g1_ParamLimits

0x6cda,	// (0x0003483e) navi_navi_pane_srt_g1

0x6cc8,	// (0x0003482c) navi_navi_pane_srt_g2_ParamLimits

0x6cc8,	// (0x0003482c) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0003d52f) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0003d52f) navi_navi_pane_srt_g

0x6cec,	// (0x00034850) navi_navi_tabs_pane_srt

0x6cc0,	// (0x00034824) navi_navi_text_pane_srt

0x6cc0,	// (0x00034824) navi_navi_volume_pane_srt

0x6cb1,	// (0x00034815) navi_navi_text_pane_srt_t1

0xa97a,	// (0x000384de) navi_navi_volume_pane_srt_g1

0xa982,	// (0x000384e6) volume_small_pane_srt_ParamLimits

0xa982,	// (0x000384e6) volume_small_pane_srt

0xa28a,	// (0x00037dee) volume_small_pane_srt_g1_ParamLimits

0xa28a,	// (0x00037dee) volume_small_pane_srt_g1

0xa29a,	// (0x00037dfe) volume_small_pane_srt_g2_ParamLimits

0xa29a,	// (0x00037dfe) volume_small_pane_srt_g2

0xa2ab,	// (0x00037e0f) volume_small_pane_srt_g3_ParamLimits

0xa2ab,	// (0x00037e0f) volume_small_pane_srt_g3

0xa2bc,	// (0x00037e20) volume_small_pane_srt_g4_ParamLimits

0xa2bc,	// (0x00037e20) volume_small_pane_srt_g4

0xa2cd,	// (0x00037e31) volume_small_pane_srt_g5_ParamLimits

0xa2cd,	// (0x00037e31) volume_small_pane_srt_g5

0xa2de,	// (0x00037e42) volume_small_pane_srt_g6_ParamLimits

0xa2de,	// (0x00037e42) volume_small_pane_srt_g6

0xa2ef,	// (0x00037e53) volume_small_pane_srt_g7_ParamLimits

0xa2ef,	// (0x00037e53) volume_small_pane_srt_g7

0xa300,	// (0x00037e64) volume_small_pane_srt_g8_ParamLimits

0xa300,	// (0x00037e64) volume_small_pane_srt_g8

0xa311,	// (0x00037e75) volume_small_pane_srt_g9_ParamLimits

0xa311,	// (0x00037e75) volume_small_pane_srt_g9

0xa322,	// (0x00037e86) volume_small_pane_srt_g10_ParamLimits

0xa322,	// (0x00037e86) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0003d2de) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0003d2de) volume_small_pane_srt_g

0x468e,	// (0x000321f2) query_popup_data_pane_cp2

0x6c97,	// (0x000347fb) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6c97,	// (0x000347fb) navi_navi_icon_text_pane_srt_t1

0x61b8,	// (0x00033d1c) navi_tabs_2_long_pane_srt

0x61b8,	// (0x00033d1c) navi_tabs_2_pane_srt

0x61b8,	// (0x00033d1c) navi_tabs_3_long_pane_srt

0x61b8,	// (0x00033d1c) navi_tabs_3_pane_srt

0x61b8,	// (0x00033d1c) navi_tabs_4_pane_srt

0xa95a,	// (0x000384be) tabs_2_active_pane_srt_ParamLimits

0xa95a,	// (0x000384be) tabs_2_active_pane_srt

0xa96a,	// (0x000384ce) tabs_2_passive_pane_srt_ParamLimits

0xa96a,	// (0x000384ce) tabs_2_passive_pane_srt

0x4bb4,	// (0x00032718) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4bb4,	// (0x00032718) bg_passive_tab_pane_cp1_srt

0x6c7e,	// (0x000347e2) bg_passive_tab_pane_g1_cp1_srt

0x514d,	// (0x00032cb1) bg_passive_tab_pane_g2_cp1_srt

0x6c75,	// (0x000347d9) bg_passive_tab_pane_g3_cp1_srt

0x42df,	// (0x00031e43) bg_active_tab_pane_cp1_srt_ParamLimits

0x42df,	// (0x00031e43) bg_active_tab_pane_cp1_srt

0x6c87,	// (0x000347eb) tabs_2_active_pane_srt_g1

0xc38e,	// (0x00039ef2) tabs_2_active_pane_srt_t1_ParamLimits

0xc38e,	// (0x00039ef2) tabs_2_active_pane_srt_t1

0x6c7e,	// (0x000347e2) bg_active_tab_pane_g1_cp1_srt

0x514d,	// (0x00032cb1) bg_active_tab_pane_g2_cp1_srt

0x6c75,	// (0x000347d9) bg_active_tab_pane_g3_cp1_srt

0xa927,	// (0x0003848b) tabs_3_active_pane_srt_ParamLimits

0xa927,	// (0x0003848b) tabs_3_active_pane_srt

0xa938,	// (0x0003849c) tabs_3_passive_pane_cp_srt_ParamLimits

0xa938,	// (0x0003849c) tabs_3_passive_pane_cp_srt

0xa949,	// (0x000384ad) tabs_3_passive_pane_srt_ParamLimits

0xa949,	// (0x000384ad) tabs_3_passive_pane_srt

0x4bb4,	// (0x00032718) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4bb4,	// (0x00032718) bg_passive_tab_pane_cp2_srt

0x558a,	// (0x000330ee) bg_passive_tab_pane_g1_cp2_srt

0x514d,	// (0x00032cb1) bg_passive_tab_pane_g2_cp2_srt

0x5581,	// (0x000330e5) bg_passive_tab_pane_g3_cp2_srt

0x42df,	// (0x00031e43) bg_active_tab_pane_cp2_srt_ParamLimits

0x42df,	// (0x00031e43) bg_active_tab_pane_cp2_srt

0x6c6d,	// (0x000347d1) tabs_3_active_pane_srt_g1

0xc37c,	// (0x00039ee0) tabs_3_active_pane_srt_t1_ParamLimits

0xc37c,	// (0x00039ee0) tabs_3_active_pane_srt_t1

0x558a,	// (0x000330ee) bg_active_tab_pane_g1_cp2_srt

0x514d,	// (0x00032cb1) bg_active_tab_pane_g2_cp2_srt

0x5581,	// (0x000330e5) bg_active_tab_pane_g3_cp2_srt

0xa8df,	// (0x00038443) tabs_4_active_pane_srt_ParamLimits

0xa8df,	// (0x00038443) tabs_4_active_pane_srt

0xa8f1,	// (0x00038455) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa8f1,	// (0x00038455) tabs_4_passive_pane_cp2_srt

0x56ae,	// (0x00033212) aid_size_cell_toolbar

0x9c4b,	// (0x000377af) main_idle_act_pane_ParamLimits

0x5778,	// (0x000332dc) popup_large_graphic_colour_window_ParamLimits

0xbb08,	// (0x0003966c) popup_toolbar_window_ParamLimits

0xbb08,	// (0x0003966c) popup_toolbar_window

0x6b94,	// (0x000346f8) list_single_graphic_2heading_pane_ParamLimits

0x6b94,	// (0x000346f8) list_single_graphic_2heading_pane

0x4d5e,	// (0x000328c2) aid_size_cell_apps_grid_lsc_pane

0x4d70,	// (0x000328d4) aid_size_cell_apps_grid_prt_pane

0x4bb4,	// (0x00032718) bg_wml_button_pane_cp1_ParamLimits

0x4bb4,	// (0x00032718) bg_wml_button_pane_cp1

0xbf57,	// (0x00039abb) form_midp_field_text_pane_t1_ParamLimits

0x5adc,	// (0x00033640) input_focus_pane_cp050_ParamLimits

0x5c24,	// (0x00033788) list_midp_form_text_pane_ParamLimits

0x5c01,	// (0x00033765) input_focus_pane_cp051_ParamLimits

0x5c15,	// (0x00033779) list_midp_choice_pane_ParamLimits

0xbea5,	// (0x00039a09) list_single_2graphic_pane_cp3_ParamLimits

0xbea5,	// (0x00039a09) list_single_2graphic_pane_cp3

0xbed1,	// (0x00039a35) list_single_midp_graphic_pane_ParamLimits

0xbed1,	// (0x00039a35) list_single_midp_graphic_pane

0x8d39,	// (0x0003689d) list_single_graphic_2heading_pane_g1_ParamLimits

0x8d39,	// (0x0003689d) list_single_graphic_2heading_pane_g1

0x8d45,	// (0x000368a9) list_single_graphic_2heading_pane_g4_ParamLimits

0x8d45,	// (0x000368a9) list_single_graphic_2heading_pane_g4

0x8d51,	// (0x000368b5) list_single_graphic_2heading_pane_g5_ParamLimits

0x8d51,	// (0x000368b5) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0003d331) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0003d331) list_single_graphic_2heading_pane_g

0x8d5d,	// (0x000368c1) list_single_graphic_2heading_pane_t1_ParamLimits

0x8d5d,	// (0x000368c1) list_single_graphic_2heading_pane_t1

0x8d71,	// (0x000368d5) list_single_graphic_2heading_pane_t2_ParamLimits

0x8d71,	// (0x000368d5) list_single_graphic_2heading_pane_t2

0x8d8d,	// (0x000368f1) list_single_graphic_2heading_pane_t3_ParamLimits

0x8d8d,	// (0x000368f1) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0003d338) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0003d338) list_single_graphic_2heading_pane_t

0x592a,	// (0x0003348e) bg_popup_sub_pane_cp2

0x5954,	// (0x000334b8) grid_toobar_pane

0xa4c9,	// (0x0003802d) cell_toolbar_pane_ParamLimits

0xa4c9,	// (0x0003802d) cell_toolbar_pane

0x5990,	// (0x000334f4) cell_toolbar_pane_g1_ParamLimits

0x5990,	// (0x000334f4) cell_toolbar_pane_g1

0x59a4,	// (0x00033508) cell_toolbar_pane_g2_ParamLimits

0x59a4,	// (0x00033508) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0003d346) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0003d346) cell_toolbar_pane_g

0x59c6,	// (0x0003352a) grid_highlight_pane_cp2_ParamLimits

0x59c6,	// (0x0003352a) grid_highlight_pane_cp2

0x59e0,	// (0x00033544) toolbar_button_pane

0x59ec,	// (0x00033550) toolbar_button_pane_g1

0x59fc,	// (0x00033560) toolbar_button_pane_g2

0x59f4,	// (0x00033558) toolbar_button_pane_g3

0x5a0c,	// (0x00033570) toolbar_button_pane_g4

0x5a04,	// (0x00033568) toolbar_button_pane_g5

0x5a14,	// (0x00033578) toolbar_button_pane_g6

0x5a1c,	// (0x00033580) toolbar_button_pane_g7

0x5a2c,	// (0x00033590) toolbar_button_pane_g8

0x5a24,	// (0x00033588) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0003d34b) toolbar_button_pane_g

0xa501,	// (0x00038065) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa501,	// (0x00038065) list_single_2graphic_pane_g1_cp3

0xa50d,	// (0x00038071) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa50d,	// (0x00038071) list_single_2graphic_pane_g2_cp3

0x52d0,	// (0x00032e34) list_single_2graphic_pane_g3_cp3

0xa51e,	// (0x00038082) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa51e,	// (0x00038082) list_single_2graphic_pane_g4_cp3

0xa52a,	// (0x0003808e) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa52a,	// (0x0003808e) list_single_2graphic_pane_t1_cp3

0x52c4,	// (0x00032e28) list_single_midp_graphic_pane_g2_ParamLimits

0x52c4,	// (0x00032e28) list_single_midp_graphic_pane_g2

0x8d21,	// (0x00036885) aid_zoom_text_primary

0x8d29,	// (0x0003688d) aid_zoom_text_secondary

0x563e,	// (0x000331a2) status_small_pane_g7_ParamLimits

0x563e,	// (0x000331a2) status_small_pane_g7

0x5661,	// (0x000331c5) status_small_pane_t1_ParamLimits

0x97f0,	// (0x00037354) title_pane_g2

0x0003,

0xf56a,	// (0x0003d0ce) title_pane_g

0x9a4a,	// (0x000375ae) aid_size_cell_colour_1_pane_ParamLimits

0x9a4a,	// (0x000375ae) aid_size_cell_colour_1_pane

0x9a5e,	// (0x000375c2) aid_size_cell_colour_2_pane_ParamLimits

0x9a5e,	// (0x000375c2) aid_size_cell_colour_2_pane

0x9a72,	// (0x000375d6) aid_size_cell_colour_3_pane_ParamLimits

0x9a72,	// (0x000375d6) aid_size_cell_colour_3_pane

0x9a86,	// (0x000375ea) aid_size_cell_colour_4_pane_ParamLimits

0x9a86,	// (0x000375ea) aid_size_cell_colour_4_pane

0x9ca5,	// (0x00037809) title_pane_stacon_g1_ParamLimits

0x9ca5,	// (0x00037809) title_pane_stacon_g1

0x5fbf,	// (0x00033b23) popup_note_wait_window_g3_ParamLimits

0x5fbf,	// (0x00033b23) popup_note_wait_window_g3

0x6035,	// (0x00033b99) popup_note_wait_window_t5_ParamLimits

0x6035,	// (0x00033b99) popup_note_wait_window_t5

0x4283,	// (0x00031de7) main_feb_china_hwr_fs_writing_pane

0xb731,	// (0x00039295) popup_feb_china_hwr_fs_window_ParamLimits

0xb731,	// (0x00039295) popup_feb_china_hwr_fs_window

0xa55a,	// (0x000380be) aid_size_cell_hwr_fs_ParamLimits

0xa55a,	// (0x000380be) aid_size_cell_hwr_fs

0x5adc,	// (0x00033640) bg_popup_sub_pane_cp3_ParamLimits

0x5adc,	// (0x00033640) bg_popup_sub_pane_cp3

0xa56f,	// (0x000380d3) grid_hwr_fs_pane_ParamLimits

0xa56f,	// (0x000380d3) grid_hwr_fs_pane

0xa587,	// (0x000380eb) linegrid_hwr_fs_pane_ParamLimits

0xa587,	// (0x000380eb) linegrid_hwr_fs_pane

0xa597,	// (0x000380fb) cell_hwr_fs_pane_ParamLimits

0xa597,	// (0x000380fb) cell_hwr_fs_pane

0x5ae8,	// (0x0003364c) linegrid_hwr_fs_pane_g1_ParamLimits

0x5ae8,	// (0x0003364c) linegrid_hwr_fs_pane_g1

0xbe79,	// (0x000399dd) linegrid_hwr_fs_pane_g2_ParamLimits

0xbe79,	// (0x000399dd) linegrid_hwr_fs_pane_g2

0x5af4,	// (0x00033658) linegrid_hwr_fs_pane_g3_ParamLimits

0x5af4,	// (0x00033658) linegrid_hwr_fs_pane_g3

0xa5b9,	// (0x0003811d) linegrid_hwr_fs_pane_g4_ParamLimits

0xa5b9,	// (0x0003811d) linegrid_hwr_fs_pane_g4

0xa5d3,	// (0x00038137) linegrid_hwr_fs_pane_g5_ParamLimits

0xa5d3,	// (0x00038137) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x0003d376) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x0003d376) linegrid_hwr_fs_pane_g

0x5b00,	// (0x00033664) cell_hwr_fs_pane_g1_ParamLimits

0x5b00,	// (0x00033664) cell_hwr_fs_pane_g1

0x58f8,	// (0x0003345c) cell_hwr_fs_pane_g2_ParamLimits

0x58f8,	// (0x0003345c) cell_hwr_fs_pane_g2

0xbe8b,	// (0x000399ef) cell_hwr_fs_pane_g3_ParamLimits

0xbe8b,	// (0x000399ef) cell_hwr_fs_pane_g3

0xbe98,	// (0x000399fc) cell_hwr_fs_pane_g4_ParamLimits

0xbe98,	// (0x000399fc) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x0003d381) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x0003d381) cell_hwr_fs_pane_g

0xa5e9,	// (0x0003814d) cell_hwr_fs_pane_t1

0x4283,	// (0x00031de7) grid_highlight_pane_cp6

0x4283,	// (0x00031de7) main_idle_act2_pane

0x4b63,	// (0x000326c7) aid_inside_area_popup_secondary

0xbffe,	// (0x00039b62) aid_inside_area_window_primary_ParamLimits

0xbffe,	// (0x00039b62) aid_inside_area_window_primary

0x6db0,	// (0x00034914) ai2_news_ticker_pane

0x6db8,	// (0x0003491c) aid_size_cell_ai1_link_ParamLimits

0x6db8,	// (0x0003491c) aid_size_cell_ai1_link

0x6dd2,	// (0x00034936) popup_ai2_data_window_ParamLimits

0x6dd2,	// (0x00034936) popup_ai2_data_window

0x6de6,	// (0x0003494a) popup_ai2_link_window_ParamLimits

0x6de6,	// (0x0003494a) popup_ai2_link_window

0x5adc,	// (0x00033640) bg_popup_sub_pane_cp4_ParamLimits

0x5adc,	// (0x00033640) bg_popup_sub_pane_cp4

0x6dfa,	// (0x0003495e) grid_ai2_link_pane_ParamLimits

0x6dfa,	// (0x0003495e) grid_ai2_link_pane

0x6e11,	// (0x00034975) popup_ai2_link_window_g1_ParamLimits

0x6e11,	// (0x00034975) popup_ai2_link_window_g1

0x6e1d,	// (0x00034981) popup_ai2_link_window_g2_ParamLimits

0x6e1d,	// (0x00034981) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0003d54d) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0003d54d) popup_ai2_link_window_g

0x6e2c,	// (0x00034990) ai2_mp_button_pane

0x6e34,	// (0x00034998) ai2_mp_volume_pane

0x5c01,	// (0x00033765) bg_popup_sub_pane_cp5_ParamLimits

0x5c01,	// (0x00033765) bg_popup_sub_pane_cp5

0x6e3c,	// (0x000349a0) heading_ai2_gene_pane_ParamLimits

0x6e3c,	// (0x000349a0) heading_ai2_gene_pane

0x6e48,	// (0x000349ac) list_ai2_gene_pane_ParamLimits

0x6e48,	// (0x000349ac) list_ai2_gene_pane

0x6e90,	// (0x000349f4) cell_ai2_link_pane_ParamLimits

0x6e90,	// (0x000349f4) cell_ai2_link_pane

0x6ea6,	// (0x00034a0a) cell_ai2_link_pane_g1

0x4283,	// (0x00031de7) grid_highlight_pane_cp7

0xa997,	// (0x000384fb) ai2_mp_volume_pane_g1

0x6f7f,	// (0x00034ae3) ai2_mp_volume_pane_g2

0x6eec,	// (0x00034a50) list_ai2_gene_pane_t1

0x6f77,	// (0x00034adb) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0003d566) ai2_mp_volume_pane_g

0xa99f,	// (0x00038503) volume_small_pane_cp3

0x6f87,	// (0x00034aeb) aid_size_cell_ai2_button

0x6f8f,	// (0x00034af3) grid_ai2_button_pane

0x6f98,	// (0x00034afc) cell_ai2_button_pane_ParamLimits

0x6f98,	// (0x00034afc) cell_ai2_button_pane

0x4279,	// (0x00031ddd) cell_ai2_button_pane_g1

0x4283,	// (0x00031de7) grid_highlight_pane_cp8

0x6f37,	// (0x00034a9b) ai2_gene_pane_t1_ParamLimits

0x6f37,	// (0x00034a9b) ai2_gene_pane_t1

0xb6cd,	// (0x00039231) aid_height_parent_landscape

0xc171,	// (0x00039cd5) aid_height_set_list

0x618a,	// (0x00033cee) aid_size_parent

0x6c17,	// (0x0003477b) aid_size_cell_graphic_pane_ParamLimits

0x6e58,	// (0x000349bc) popup_ai2_data_window_g1_ParamLimits

0x6e58,	// (0x000349bc) popup_ai2_data_window_g1

0x6e64,	// (0x000349c8) ai2_news_ticker_pane_g1

0x6e6c,	// (0x000349d0) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0003d552) ai2_news_ticker_pane_g

0x6e74,	// (0x000349d8) ai2_news_ticker_pane_t1

0x6e82,	// (0x000349e6) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0003d557) ai2_news_ticker_pane_t

0x6eaf,	// (0x00034a13) heading_ai2_gene_pane_g1

0x6eb7,	// (0x00034a1b) heading_ai2_gene_pane_t1_ParamLimits

0x6eb7,	// (0x00034a1b) heading_ai2_gene_pane_t1

0x6ecc,	// (0x00034a30) list_highlight_pane_cp6

0x6ed4,	// (0x00034a38) ai2_gene_pane_ParamLimits

0x6ed4,	// (0x00034a38) ai2_gene_pane

0x6efa,	// (0x00034a5e) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0003d55c) list_ai2_gene_pane_t

0x6f08,	// (0x00034a6c) list_highlight_pane_cp8_ParamLimits

0x6f08,	// (0x00034a6c) list_highlight_pane_cp8

0x6f19,	// (0x00034a7d) ai2_gene_pane_g1_ParamLimits

0x6f19,	// (0x00034a7d) ai2_gene_pane_g1

0x6f2b,	// (0x00034a8f) ai2_gene_pane_g2_ParamLimits

0x6f2b,	// (0x00034a8f) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0003d561) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0003d561) ai2_gene_pane_g

0x49f3,	// (0x00032557) scroll_pane_cp12

0xa46c,	// (0x00037fd0) control_pane_t3_ParamLimits

0xa46c,	// (0x00037fd0) control_pane_t3

0x5652,	// (0x000331b6) status_small_pane_g8_ParamLimits

0x5652,	// (0x000331b6) status_small_pane_g8

0xb7bb,	// (0x0003931f) popup_find_window_ParamLimits

0xb9a8,	// (0x0003950c) popup_note_image_window_ParamLimits

0x8da5,	// (0x00036909) list_double2_graphic_pane_vc_g1_ParamLimits

0x8da5,	// (0x00036909) list_double2_graphic_pane_vc_g1

0x9b1e,	// (0x00037682) list_double2_graphic_pane_vc_g2_ParamLimits

0x9b1e,	// (0x00037682) list_double2_graphic_pane_vc_g2

0x9b2a,	// (0x0003768e) list_double2_graphic_pane_vc_g3_ParamLimits

0x9b2a,	// (0x0003768e) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0003d33f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0003d33f) list_double2_graphic_pane_vc_g

0x8db1,	// (0x00036915) list_double2_graphic_pane_vc_t1_ParamLimits

0x8db1,	// (0x00036915) list_double2_graphic_pane_vc_t1

0x9b1e,	// (0x00037682) list_single_heading_pane_vc_g1_ParamLimits

0x9b1e,	// (0x00037682) list_single_heading_pane_vc_g1

0x9b2a,	// (0x0003768e) list_single_heading_pane_vc_g2_ParamLimits

0x9b2a,	// (0x0003768e) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d360) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d360) list_single_heading_pane_vc_g

0x8dc7,	// (0x0003692b) list_single_heading_pane_vc_t1_ParamLimits

0x8dc7,	// (0x0003692b) list_single_heading_pane_vc_t1

0x8ddd,	// (0x00036941) list_single_heading_pane_vc_t2_ParamLimits

0x8ddd,	// (0x00036941) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x0003d365) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x0003d365) list_single_heading_pane_vc_t

0x5a34,	// (0x00033598) list_setting_number_pane_vc_g1_ParamLimits

0x5a34,	// (0x00033598) list_setting_number_pane_vc_g1

0x5a40,	// (0x000335a4) list_setting_number_pane_vc_g2_ParamLimits

0x5a40,	// (0x000335a4) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0003d36a) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0003d36a) list_setting_number_pane_vc_g

0x5a4c,	// (0x000335b0) list_setting_number_pane_vc_t1_ParamLimits

0x5a4c,	// (0x000335b0) list_setting_number_pane_vc_t1

0x5a60,	// (0x000335c4) list_setting_number_pane_vc_t2_ParamLimits

0x5a60,	// (0x000335c4) list_setting_number_pane_vc_t2

0x5a7c,	// (0x000335e0) list_setting_number_pane_vc_t3_ParamLimits

0x5a7c,	// (0x000335e0) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x0003d36f) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x0003d36f) list_setting_number_pane_vc_t

0x5aa4,	// (0x00033608) set_value_pane_vc_ParamLimits

0x5aa4,	// (0x00033608) set_value_pane_vc

0x6b94,	// (0x000346f8) list_double2_graphic_pane_vc_ParamLimits

0x6b94,	// (0x000346f8) list_double2_graphic_pane_vc

0x6b94,	// (0x000346f8) list_double2_large_graphic_pane_vc_ParamLimits

0x6b94,	// (0x000346f8) list_double2_large_graphic_pane_vc

0x6b94,	// (0x000346f8) list_double2_pane_vc_ParamLimits

0x6b94,	// (0x000346f8) list_double2_pane_vc

0x6b94,	// (0x000346f8) list_double_graphic_heading_pane_vc_ParamLimits

0x6b94,	// (0x000346f8) list_double_graphic_heading_pane_vc

0x6b94,	// (0x000346f8) list_double_graphic_pane_vc_ParamLimits

0x6b94,	// (0x000346f8) list_double_graphic_pane_vc

0x6b94,	// (0x000346f8) list_double_heading_pane_vc_ParamLimits

0x6b94,	// (0x000346f8) list_double_heading_pane_vc

0x6b94,	// (0x000346f8) list_double_large_graphic_pane_vc_ParamLimits

0x6b94,	// (0x000346f8) list_double_large_graphic_pane_vc

0x6b94,	// (0x000346f8) list_double_number_pane_vc_ParamLimits

0x6b94,	// (0x000346f8) list_double_number_pane_vc

0x6b94,	// (0x000346f8) list_double_pane_vc_ParamLimits

0x6b94,	// (0x000346f8) list_double_pane_vc

0x6b94,	// (0x000346f8) list_double_time_pane_vc_ParamLimits

0x6b94,	// (0x000346f8) list_double_time_pane_vc

0x6b94,	// (0x000346f8) list_setting_number_pane_vc_ParamLimits

0x6b94,	// (0x000346f8) list_setting_number_pane_vc

0x6b94,	// (0x000346f8) list_setting_pane_vc_ParamLimits

0x6b94,	// (0x000346f8) list_setting_pane_vc

0x6b94,	// (0x000346f8) list_single_graphic_heading_pane_vc_ParamLimits

0x6b94,	// (0x000346f8) list_single_graphic_heading_pane_vc

0x6b94,	// (0x000346f8) list_single_heading_pane_vc_ParamLimits

0x6b94,	// (0x000346f8) list_single_heading_pane_vc

0xa848,	// (0x000383ac) list_single_number_heading_pane_vc_ParamLimits

0xa848,	// (0x000383ac) list_single_number_heading_pane_vc

0x8da5,	// (0x00036909) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8da5,	// (0x00036909) list_double_graphic_heading_pane_vc_g1

0x9b1e,	// (0x00037682) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9b1e,	// (0x00037682) list_double_graphic_heading_pane_vc_g2

0x9b2a,	// (0x0003768e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9b2a,	// (0x0003768e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x0003d33f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0003d33f) list_double_graphic_heading_pane_vc_g

0x8ee4,	// (0x00036a48) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x8ee4,	// (0x00036a48) list_double_graphic_heading_pane_vc_t1

0x8dc7,	// (0x0003692b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x8dc7,	// (0x0003692b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa09,	// (0x0003d56d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0003d56d) list_double_graphic_heading_pane_vc_t

0x5a34,	// (0x00033598) list_setting_pane_vc_g1_ParamLimits

0x5a34,	// (0x00033598) list_setting_pane_vc_g1

0x5a40,	// (0x000335a4) list_setting_pane_vc_g2_ParamLimits

0x5a40,	// (0x000335a4) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0003d36a) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0003d36a) list_setting_pane_vc_g

0x718e,	// (0x00034cf2) list_setting_pane_vc_t1_ParamLimits

0x718e,	// (0x00034cf2) list_setting_pane_vc_t1

0x71a2,	// (0x00034d06) list_setting_pane_vc_t2_ParamLimits

0x71a2,	// (0x00034d06) list_setting_pane_vc_t2

0x0001,

0xfa4c,	// (0x0003d5b0) list_setting_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003d5b0) list_setting_pane_vc_t

0x5aa4,	// (0x00033608) set_value_pane_cp_vc_ParamLimits

0x5aa4,	// (0x00033608) set_value_pane_cp_vc

0x9b1e,	// (0x00037682) list_single_number_heading_pane_vc_g1_ParamLimits

0x9b1e,	// (0x00037682) list_single_number_heading_pane_vc_g1

0x9b2a,	// (0x0003768e) list_single_number_heading_pane_vc_g2_ParamLimits

0x9b2a,	// (0x0003768e) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d360) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d360) list_single_number_heading_pane_vc_g

0x8dc7,	// (0x0003692b) list_single_number_heading_pane_vc_t1_ParamLimits

0x8dc7,	// (0x0003692b) list_single_number_heading_pane_vc_t1

0x8ef8,	// (0x00036a5c) list_single_number_heading_pane_vc_t2_ParamLimits

0x8ef8,	// (0x00036a5c) list_single_number_heading_pane_vc_t2

0x8f0c,	// (0x00036a70) list_single_number_heading_pane_vc_t3_ParamLimits

0x8f0c,	// (0x00036a70) list_single_number_heading_pane_vc_t3

0x0002,

0xfa51,	// (0x0003d5b5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa51,	// (0x0003d5b5) list_single_number_heading_pane_vc_t

0x8da5,	// (0x00036909) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8da5,	// (0x00036909) list_single_graphic_heading_pane_vc_g1

0x9b1e,	// (0x00037682) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9b1e,	// (0x00037682) list_single_graphic_heading_pane_vc_g4

0x9b2a,	// (0x0003768e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9b2a,	// (0x0003768e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0003d33f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0003d33f) list_single_graphic_heading_pane_vc_g

0x8dc7,	// (0x0003692b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8dc7,	// (0x0003692b) list_single_graphic_heading_pane_vc_t1

0x8f1e,	// (0x00036a82) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x8f1e,	// (0x00036a82) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa58,	// (0x0003d5bc) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa58,	// (0x0003d5bc) list_single_graphic_heading_pane_vc_t

0x9b1e,	// (0x00037682) list_double2_pane_vc_g1_ParamLimits

0x9b1e,	// (0x00037682) list_double2_pane_vc_g1

0x9b2a,	// (0x0003768e) list_double2_pane_vc_g2_ParamLimits

0x9b2a,	// (0x0003768e) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d360) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d360) list_double2_pane_vc_g

0x8f32,	// (0x00036a96) list_double2_pane_vc_t1_ParamLimits

0x8f32,	// (0x00036a96) list_double2_pane_vc_t1

0xa9f9,	// (0x0003855d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xa9f9,	// (0x0003855d) list_double2_large_graphic_pane_vc_g1

0x9b1e,	// (0x00037682) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x9b1e,	// (0x00037682) list_double2_large_graphic_pane_vc_g2

0x9b2a,	// (0x0003768e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9b2a,	// (0x0003768e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa5d,	// (0x0003d5c1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa5d,	// (0x0003d5c1) list_double2_large_graphic_pane_vc_g

0x8f48,	// (0x00036aac) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x8f48,	// (0x00036aac) list_double2_large_graphic_pane_vc_t1

0xaa05,	// (0x00038569) list_double_time_pane_vc_g1_ParamLimits

0xaa05,	// (0x00038569) list_double_time_pane_vc_g1

0xaa11,	// (0x00038575) list_double_time_pane_vc_g2_ParamLimits

0xaa11,	// (0x00038575) list_double_time_pane_vc_g2

0x0001,

0xfa64,	// (0x0003d5c8) list_double_time_pane_vc_g_ParamLimits

0xfa64,	// (0x0003d5c8) list_double_time_pane_vc_g

0x8f5e,	// (0x00036ac2) list_double_time_pane_vc_t1_ParamLimits

0x8f5e,	// (0x00036ac2) list_double_time_pane_vc_t1

0x8f77,	// (0x00036adb) list_double_time_pane_vc_t2_ParamLimits

0x8f77,	// (0x00036adb) list_double_time_pane_vc_t2

0x8fb7,	// (0x00036b1b) list_double_time_pane_vc_t3_ParamLimits

0x8fb7,	// (0x00036b1b) list_double_time_pane_vc_t3

0x8fcf,	// (0x00036b33) list_double_time_pane_vc_t4_ParamLimits

0x8fcf,	// (0x00036b33) list_double_time_pane_vc_t4

0x0003,

0xfa69,	// (0x0003d5cd) list_double_time_pane_vc_t_ParamLimits

0xfa69,	// (0x0003d5cd) list_double_time_pane_vc_t

0x9b1e,	// (0x00037682) list_double_pane_vc_g1_ParamLimits

0x9b1e,	// (0x00037682) list_double_pane_vc_g1

0x9b2a,	// (0x0003768e) list_double_pane_vc_g2_ParamLimits

0x9b2a,	// (0x0003768e) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d360) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d360) list_double_pane_vc_g

0x8fe3,	// (0x00036b47) list_double_pane_vc_t1_ParamLimits

0x8fe3,	// (0x00036b47) list_double_pane_vc_t1

0x8ff5,	// (0x00036b59) list_double_pane_vc_t2_ParamLimits

0x8ff5,	// (0x00036b59) list_double_pane_vc_t2

0x0001,

0xfa72,	// (0x0003d5d6) list_double_pane_vc_t_ParamLimits

0xfa72,	// (0x0003d5d6) list_double_pane_vc_t

0x9b1e,	// (0x00037682) list_double_number_pane_vc_g1_ParamLimits

0x9b1e,	// (0x00037682) list_double_number_pane_vc_g1

0x9b2a,	// (0x0003768e) list_double_number_pane_vc_g2_ParamLimits

0x9b2a,	// (0x0003768e) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d360) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d360) list_double_number_pane_vc_g

0x900d,	// (0x00036b71) list_double_number_pane_vc_t1_ParamLimits

0x900d,	// (0x00036b71) list_double_number_pane_vc_t1

0x9021,	// (0x00036b85) list_double_number_pane_vc_t2_ParamLimits

0x9021,	// (0x00036b85) list_double_number_pane_vc_t2

0x8ff5,	// (0x00036b59) list_double_number_pane_vc_t3_ParamLimits

0x8ff5,	// (0x00036b59) list_double_number_pane_vc_t3

0x0002,

0xfa77,	// (0x0003d5db) list_double_number_pane_vc_t_ParamLimits

0xfa77,	// (0x0003d5db) list_double_number_pane_vc_t

0xaa1d,	// (0x00038581) list_double_large_graphic_pane_vc_g1_ParamLimits

0xaa1d,	// (0x00038581) list_double_large_graphic_pane_vc_g1

0xaa29,	// (0x0003858d) list_double_large_graphic_pane_vc_g2_ParamLimits

0xaa29,	// (0x0003858d) list_double_large_graphic_pane_vc_g2

0x9b2a,	// (0x0003768e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9b2a,	// (0x0003768e) list_double_large_graphic_pane_vc_g3

0x9033,	// (0x00036b97) list_double_large_graphic_pane_vc_g4_ParamLimits

0x9033,	// (0x00036b97) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa7e,	// (0x0003d5e2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0003d5e2) list_double_large_graphic_pane_vc_g

0x903f,	// (0x00036ba3) list_double_large_graphic_pane_vc_t1_ParamLimits

0x903f,	// (0x00036ba3) list_double_large_graphic_pane_vc_t1

0x9051,	// (0x00036bb5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x9051,	// (0x00036bb5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa87,	// (0x0003d5eb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa87,	// (0x0003d5eb) list_double_large_graphic_pane_vc_t

0x9b1e,	// (0x00037682) list_double_heading_pane_vc_g1_ParamLimits

0x9b1e,	// (0x00037682) list_double_heading_pane_vc_g1

0x9b2a,	// (0x0003768e) list_double_heading_pane_vc_g2_ParamLimits

0x9b2a,	// (0x0003768e) list_double_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d360) list_double_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d360) list_double_heading_pane_vc_g

0x906a,	// (0x00036bce) list_double_heading_pane_vc_t1_ParamLimits

0x906a,	// (0x00036bce) list_double_heading_pane_vc_t1

0x8dc7,	// (0x0003692b) list_double_heading_pane_vc_t2_ParamLimits

0x8dc7,	// (0x0003692b) list_double_heading_pane_vc_t2

0x0001,

0xfa8c,	// (0x0003d5f0) list_double_heading_pane_vc_t_ParamLimits

0xfa8c,	// (0x0003d5f0) list_double_heading_pane_vc_t

0x8da5,	// (0x00036909) list_double_graphic_pane_vc_g1_ParamLimits

0x8da5,	// (0x00036909) list_double_graphic_pane_vc_g1

0xaa38,	// (0x0003859c) list_double_graphic_pane_vc_g2_ParamLimits

0xaa38,	// (0x0003859c) list_double_graphic_pane_vc_g2

0xaa47,	// (0x000385ab) list_double_graphic_pane_vc_g3_ParamLimits

0xaa47,	// (0x000385ab) list_double_graphic_pane_vc_g3

0x0002,

0xfa91,	// (0x0003d5f5) list_double_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x0003d5f5) list_double_graphic_pane_vc_g

0x907e,	// (0x00036be2) list_double_graphic_pane_vc_t1_ParamLimits

0x907e,	// (0x00036be2) list_double_graphic_pane_vc_t1

0x8ff5,	// (0x00036b59) list_double_graphic_pane_vc_t2_ParamLimits

0x8ff5,	// (0x00036b59) list_double_graphic_pane_vc_t2

0x0001,

0xfa98,	// (0x0003d5fc) list_double_graphic_pane_vc_t_ParamLimits

0xfa98,	// (0x0003d5fc) list_double_graphic_pane_vc_t

0x942a,	// (0x00036f8e) aid_size_cell_fastswap

0x9432,	// (0x00036f96) aid_size_cell_touch_ParamLimits

0x9432,	// (0x00036f96) aid_size_cell_touch

0x968d,	// (0x000371f1) popup_fast_swap_wide_window_ParamLimits

0x968d,	// (0x000371f1) popup_fast_swap_wide_window

0x9783,	// (0x000372e7) touch_pane_ParamLimits

0x9783,	// (0x000372e7) touch_pane

0x4a49,	// (0x000325ad) button_value_adjust_pane_cp2

0x8a5c,	// (0x000365c0) button_value_adjust_pane_cp4

0x8a7c,	// (0x000365e0) form_field_data_pane_cp2

0x8a9b,	// (0x000365ff) form_field_data_wide_pane_cp2

0x4dac,	// (0x00032910) bg_scroll_pane_ParamLimits

0x9e8d,	// (0x000379f1) scroll_handle_pane_ParamLimits

0x9ea1,	// (0x00037a05) scroll_sc2_down_pane_ParamLimits

0x9ea1,	// (0x00037a05) scroll_sc2_down_pane

0x4ddd,	// (0x00032941) scroll_sc2_up_pane_ParamLimits

0x4ddd,	// (0x00032941) scroll_sc2_up_pane

0xc4d6,	// (0x0003a03a) grid_wheel_folder_pane_g1_ParamLimits

0xc4d6,	// (0x0003a03a) grid_wheel_folder_pane_g1

0xa133,	// (0x00037c97) clock_nsta_pane_cp2_ParamLimits

0xa133,	// (0x00037c97) clock_nsta_pane_cp2

0xa1b9,	// (0x00037d1d) listscroll_midp_pane_ParamLimits

0xa1c5,	// (0x00037d29) midp_canvas_pane

0x56a6,	// (0x0003320a) nsta_clock_indic_pane

0x56de,	// (0x00033242) listscroll_form_pane_vc

0x56e6,	// (0x0003324a) listscroll_set_pane_vc_ParamLimits

0x56e6,	// (0x0003324a) listscroll_set_pane_vc

0xbc1c,	// (0x00039780) clock_nsta_pane

0xbc29,	// (0x0003978d) indicator_nsta_pane

0x592a,	// (0x0003348e) bg_popup_sub_pane_cp2_ParamLimits

0x593e,	// (0x000334a2) find_pane_cp2_ParamLimits

0x593e,	// (0x000334a2) find_pane_cp2

0x5954,	// (0x000334b8) grid_toobar_pane_ParamLimits

0x5ab0,	// (0x00033614) list_form_gen_pane_vc_ParamLimits

0x5ab0,	// (0x00033614) list_form_gen_pane_vc

0x5ac6,	// (0x0003362a) scroll_pane_cp8_vc_ParamLimits

0x5ac6,	// (0x0003362a) scroll_pane_cp8_vc

0x5b16,	// (0x0003367a) data_form_wide_pane_vc_ParamLimits

0x5b16,	// (0x0003367a) data_form_wide_pane_vc

0x5b22,	// (0x00033686) form_field_data_wide_pane_vc_g1

0x5b2a,	// (0x0003368e) form_field_data_wide_pane_vc_t1_ParamLimits

0x5b2a,	// (0x0003368e) form_field_data_wide_pane_vc_t1

0x4a5d,	// (0x000325c1) input_focus_pane_cp6_vc_ParamLimits

0x4a5d,	// (0x000325c1) input_focus_pane_cp6_vc

0xbf96,	// (0x00039afa) list_midp_pane_ParamLimits

0xbfa2,	// (0x00039b06) scroll_pane_cp16_ParamLimits

0xbfa2,	// (0x00039b06) scroll_pane_cp16

0x5d99,	// (0x000338fd) button_value_adjust_pane_ParamLimits

0x5d99,	// (0x000338fd) button_value_adjust_pane

0xc182,	// (0x00039ce6) button_value_adjust_pane_cp6_ParamLimits

0xc182,	// (0x00039ce6) button_value_adjust_pane_cp6

0xc2a4,	// (0x00039e08) settings_code_pane_cp_ParamLimits

0xc2a4,	// (0x00039e08) settings_code_pane_cp

0x4279,	// (0x00031ddd) cell_touch_pane_g1

0x4279,	// (0x00031ddd) cell_touch_pane_g2

0x0001,

0xf724,	// (0x0003d288) cell_touch_pane_g

0xc3a0,	// (0x00039f04) cell_touch_pane_cp_ParamLimits

0xc3a0,	// (0x00039f04) cell_touch_pane_cp

0xc3b0,	// (0x00039f14) cell_touch_pane_ParamLimits

0xc3b0,	// (0x00039f14) cell_touch_pane

0x4279,	// (0x00031ddd) scroll_sc2_down_pane_g1

0x4279,	// (0x00031ddd) scroll_sc2_up_pane_g1

0x4283,	// (0x00031de7) bg_set_opt_pane_cp4_vc

0x6faa,	// (0x00034b0e) list_set_graphic_pane_vc_g1_ParamLimits

0x6faa,	// (0x00034b0e) list_set_graphic_pane_vc_g1

0x6fb6,	// (0x00034b1a) list_set_graphic_pane_vc_g2_ParamLimits

0x6fb6,	// (0x00034b1a) list_set_graphic_pane_vc_g2

0x0001,

0xfa0e,	// (0x0003d572) list_set_graphic_pane_vc_g_ParamLimits

0xfa0e,	// (0x0003d572) list_set_graphic_pane_vc_g

0x6fc2,	// (0x00034b26) text_primary_small_cp13_vc_ParamLimits

0x6fc2,	// (0x00034b26) text_primary_small_cp13_vc

0x6fda,	// (0x00034b3e) list_set_graphic_pane_vc_ParamLimits

0x6fda,	// (0x00034b3e) list_set_graphic_pane_vc

0x4283,	// (0x00031de7) input_focus_pane_cp2_vc

0x4279,	// (0x00031ddd) setting_code_pane_vc_g1

0x6fee,	// (0x00034b52) setting_code_pane_vc_t1

0x6ffc,	// (0x00034b60) set_text_pane_vc_t1_ParamLimits

0x6ffc,	// (0x00034b60) set_text_pane_vc_t1

0x4283,	// (0x00031de7) input_focus_pane_cp1_vc

0x701b,	// (0x00034b7f) list_set_text_pane_vc

0x4279,	// (0x00031ddd) setting_text_pane_vc_g1

0x4283,	// (0x00031de7) bg_set_opt_pane_cp2_vc

0x7025,	// (0x00034b89) setting_slider_graphic_pane_vc_g1

0x702d,	// (0x00034b91) setting_slider_graphic_pane_vc_t1

0x703b,	// (0x00034b9f) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa13,	// (0x0003d577) setting_slider_graphic_pane_vc_t

0x7049,	// (0x00034bad) slider_set_pane_cp_vc

0x7051,	// (0x00034bb5) slider_set_pane_vc_g1

0x705a,	// (0x00034bbe) slider_set_pane_vc_g2

0x0006,

0xfa18,	// (0x0003d57c) slider_set_pane_vc_g

0x4ac4,	// (0x00032628) set_opt_bg_pane_g1_copy1

0x4acc,	// (0x00032630) set_opt_bg_pane_g2_copy1

0x7086,	// (0x00034bea) set_opt_bg_pane_g3_copy1

0x4adc,	// (0x00032640) set_opt_bg_pane_g4_copy1

0x4ae4,	// (0x00032648) set_opt_bg_pane_g5_copy1

0x4aec,	// (0x00032650) set_opt_bg_pane_g6_copy1

0x708e,	// (0x00034bf2) set_opt_bg_pane_g7_copy1

0x7098,	// (0x00034bfc) set_opt_bg_pane_g8_copy1

0x70a0,	// (0x00034c04) set_opt_bg_pane_g9_copy1

0x4283,	// (0x00031de7) bg_set_opt_pane_cp_vc

0x70a8,	// (0x00034c0c) setting_slider_pane_vc_t1

0x702d,	// (0x00034b91) setting_slider_pane_vc_t2

0x703b,	// (0x00034b9f) setting_slider_pane_vc_t3

0x0002,

0xfa27,	// (0x0003d58b) setting_slider_pane_vc_t

0x7049,	// (0x00034bad) slider_set_pane_vc

0xa5f7,	// (0x0003815b) volume_set_pane_vc_g1

0xa9a8,	// (0x0003850c) volume_set_pane_vc_g2

0xa9b1,	// (0x00038515) volume_set_pane_vc_g3

0xa9ba,	// (0x0003851e) volume_set_pane_vc_g4

0xa9c3,	// (0x00038527) volume_set_pane_vc_g5

0xa9cc,	// (0x00038530) volume_set_pane_vc_g6

0xa9d5,	// (0x00038539) volume_set_pane_vc_g7

0xa9de,	// (0x00038542) volume_set_pane_vc_g8

0xa9e7,	// (0x0003854b) volume_set_pane_vc_g9

0xa9f0,	// (0x00038554) volume_set_pane_vc_g10

0x0009,

0xfa2e,	// (0x0003d592) volume_set_pane_vc_g

0x70b7,	// (0x00034c1b) volume_set_pane_vc

0x70bf,	// (0x00034c23) button_value_adjust_pane_cp1_vc

0x70c9,	// (0x00034c2d) list_highlight_pane_cp2_vc

0x70d2,	// (0x00034c36) list_set_pane_vc_ParamLimits

0x70d2,	// (0x00034c36) list_set_pane_vc

0x7124,	// (0x00034c88) main_pane_set_vc_t1_ParamLimits

0x7124,	// (0x00034c88) main_pane_set_vc_t1

0x7139,	// (0x00034c9d) main_pane_set_vc_t2_ParamLimits

0x7139,	// (0x00034c9d) main_pane_set_vc_t2

0x714b,	// (0x00034caf) main_pane_set_vc_t3_ParamLimits

0x714b,	// (0x00034caf) main_pane_set_vc_t3

0x715d,	// (0x00034cc1) main_pane_set_vc_t4_ParamLimits

0x715d,	// (0x00034cc1) main_pane_set_vc_t4

0x0003,

0xfa43,	// (0x0003d5a7) main_pane_set_vc_t_ParamLimits

0xfa43,	// (0x0003d5a7) main_pane_set_vc_t

0x716f,	// (0x00034cd3) setting_code_pane_vc_ParamLimits

0x716f,	// (0x00034cd3) setting_code_pane_vc

0x717e,	// (0x00034ce2) setting_slider_graphic_pane_vc

0x717e,	// (0x00034ce2) setting_slider_pane_vc

0x717e,	// (0x00034ce2) setting_text_pane_vc

0x717e,	// (0x00034ce2) setting_volume_pane_vc

0x7186,	// (0x00034cea) scroll_pane_cp121_vc

0x4a37,	// (0x0003259b) set_content_pane_vc

0x71c4,	// (0x00034d28) button_value_adjust_pane_g1

0x71cd,	// (0x00034d31) button_value_adjust_pane_g2

0x0001,

0xfa9d,	// (0x0003d601) button_value_adjust_pane_g

0x71d6,	// (0x00034d3a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x71d6,	// (0x00034d3a) form_field_slider_wide_pane_vc_t1

0x71ea,	// (0x00034d4e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x71ea,	// (0x00034d4e) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa2,	// (0x0003d606) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x0003d606) form_field_slider_wide_pane_vc_t

0x42d1,	// (0x00031e35) input_focus_pane_cp10_vc_ParamLimits

0x42d1,	// (0x00031e35) input_focus_pane_cp10_vc

0x71fc,	// (0x00034d60) slider_cont_pane_cp1_vc_ParamLimits

0x71fc,	// (0x00034d60) slider_cont_pane_cp1_vc

0x7051,	// (0x00034bb5) slider_form_pane_g1_cp2

0x705a,	// (0x00034bbe) slider_form_pane_g2_cp2

0x7215,	// (0x00034d79) form_field_slider_pane_vc_t3

0x7223,	// (0x00034d87) form_field_slider_pane_vc_t4

0x7231,	// (0x00034d95) slider_form_pane_vc_ParamLimits

0x7231,	// (0x00034d95) slider_form_pane_vc

0x723e,	// (0x00034da2) form_field_slider_pane_vc_t1_ParamLimits

0x723e,	// (0x00034da2) form_field_slider_pane_vc_t1

0x71ea,	// (0x00034d4e) form_field_slider_pane_vc_t2_ParamLimits

0x71ea,	// (0x00034d4e) form_field_slider_pane_vc_t2

0x0001,

0xfab2,	// (0x0003d616) form_field_slider_pane_vc_t_ParamLimits

0xfab2,	// (0x0003d616) form_field_slider_pane_vc_t

0x42d1,	// (0x00031e35) input_focus_pane_cp9_vc_ParamLimits

0x42d1,	// (0x00031e35) input_focus_pane_cp9_vc

0x725a,	// (0x00034dbe) slider_cont_pane_vc_ParamLimits

0x725a,	// (0x00034dbe) slider_cont_pane_vc

0x726c,	// (0x00034dd0) list_form_graphic_pane_cp_vc_ParamLimits

0x726c,	// (0x00034dd0) list_form_graphic_pane_cp_vc

0x5b22,	// (0x00033686) form_field_popup_wide_pane_vc_g1

0x7281,	// (0x00034de5) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7281,	// (0x00034de5) form_field_popup_wide_pane_vc_t1

0x4a5d,	// (0x000325c1) input_focus_pane_cp8_vc_ParamLimits

0x4a5d,	// (0x000325c1) input_focus_pane_cp8_vc

0x7298,	// (0x00034dfc) list_form_wide_pane_vc_ParamLimits

0x7298,	// (0x00034dfc) list_form_wide_pane_vc

0x72a4,	// (0x00034e08) list_form_graphic_pane_vc_g1

0x72ac,	// (0x00034e10) list_form_graphic_pane_vc_t1_ParamLimits

0x72ac,	// (0x00034e10) list_form_graphic_pane_vc_t1

0x42df,	// (0x00031e43) list_highlight_pane_cp5_vc_ParamLimits

0x42df,	// (0x00031e43) list_highlight_pane_cp5_vc

0x72c8,	// (0x00034e2c) list_form_graphic_pane_vc_ParamLimits

0x72c8,	// (0x00034e2c) list_form_graphic_pane_vc

0x5b22,	// (0x00033686) form_field_popup_pane_vc_g1

0x72de,	// (0x00034e42) form_field_popup_pane_vc_t1_ParamLimits

0x72de,	// (0x00034e42) form_field_popup_pane_vc_t1

0x4a5d,	// (0x000325c1) input_focus_pane_cp7_vc_ParamLimits

0x4a5d,	// (0x000325c1) input_focus_pane_cp7_vc

0x72f5,	// (0x00034e59) list_form_pane_vc_ParamLimits

0x72f5,	// (0x00034e59) list_form_pane_vc

0x7301,	// (0x00034e65) data_form_pane_vc_t1_ParamLimits

0x7301,	// (0x00034e65) data_form_pane_vc_t1

0x4ac4,	// (0x00032628) input_focus_pane_vc_g1

0x4acc,	// (0x00032630) input_focus_pane_vc_g2

0x4ad4,	// (0x00032638) input_focus_pane_vc_g3

0x4adc,	// (0x00032640) input_focus_pane_vc_g4

0x4ae4,	// (0x00032648) input_focus_pane_vc_g5

0x4aec,	// (0x00032650) input_focus_pane_vc_g6

0x4af4,	// (0x00032658) input_focus_pane_vc_g7

0x4afc,	// (0x00032660) input_focus_pane_vc_g8

0x4b04,	// (0x00032668) input_focus_pane_vc_g9

0x4279,	// (0x00031ddd) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x0003d211) input_focus_pane_vc_g

0x5b16,	// (0x0003367a) data_form_pane_vc_ParamLimits

0x5b16,	// (0x0003367a) data_form_pane_vc

0x5b22,	// (0x00033686) form_field_data_pane_vc_g1

0x731c,	// (0x00034e80) form_field_data_pane_vc_t1_ParamLimits

0x731c,	// (0x00034e80) form_field_data_pane_vc_t1

0x4a5d,	// (0x000325c1) input_focus_pane_vc_ParamLimits

0x4a5d,	// (0x000325c1) input_focus_pane_vc

0x7336,	// (0x00034e9a) button_value_adjust_pane_cp3_vc

0x733e,	// (0x00034ea2) button_value_adjust_pane_cp5_vc

0x7346,	// (0x00034eaa) form_field_data_pane_vc_ParamLimits

0x7346,	// (0x00034eaa) form_field_data_pane_vc

0x735d,	// (0x00034ec1) form_field_data_pane_vc_cp2

0x7365,	// (0x00034ec9) form_field_data_wide_pane_vc_ParamLimits

0x7365,	// (0x00034ec9) form_field_data_wide_pane_vc

0x737b,	// (0x00034edf) form_field_data_wide_pane_vc_cp2

0x7383,	// (0x00034ee7) form_field_popup_pane_vc_ParamLimits

0x7383,	// (0x00034ee7) form_field_popup_pane_vc

0x739a,	// (0x00034efe) form_field_popup_wide_pane_vc_ParamLimits

0x739a,	// (0x00034efe) form_field_popup_wide_pane_vc

0x73b0,	// (0x00034f14) form_field_slider_pane_vc_ParamLimits

0x73b0,	// (0x00034f14) form_field_slider_pane_vc

0x73c3,	// (0x00034f27) form_field_slider_wide_pane_vc_ParamLimits

0x73c3,	// (0x00034f27) form_field_slider_wide_pane_vc

0xc3c2,	// (0x00039f26) grid_touch_1_pane_ParamLimits

0xc3c2,	// (0x00039f26) grid_touch_1_pane

0xc3ce,	// (0x00039f32) grid_touch_2_pane_ParamLimits

0xc3ce,	// (0x00039f32) grid_touch_2_pane

0x5698,	// (0x000331fc) touch_pane_g1_ParamLimits

0x5698,	// (0x000331fc) touch_pane_g1

0x73e4,	// (0x00034f48) cell_app_pane_cp_wide_ParamLimits

0x73e4,	// (0x00034f48) cell_app_pane_cp_wide

0x73f5,	// (0x00034f59) grid_popup_fast_wide_pane_ParamLimits

0x73f5,	// (0x00034f59) grid_popup_fast_wide_pane

0x7409,	// (0x00034f6d) scroll_pane_cp19_ParamLimits

0x7409,	// (0x00034f6d) scroll_pane_cp19

0x4283,	// (0x00031de7) bg_popup_window_pane_cp20

0x741d,	// (0x00034f81) listscroll_popup_fast_wide_pane

0x42df,	// (0x00031e43) grid_indicator_nsta_pane

0x7425,	// (0x00034f89) clock_nsta_pane_g1

0x742e,	// (0x00034f92) clock_nsta_pane_t1

0xc3e6,	// (0x00039f4a) cell_indicator_nsta_pane_ParamLimits

0xc3e6,	// (0x00039f4a) cell_indicator_nsta_pane

0x73d6,	// (0x00034f3a) cell_indicator_nsta_pane_g1

0xc41e,	// (0x00039f82) cell_indicator_nsta_pane_g2

0x0001,

0xfabc,	// (0x0003d620) cell_indicator_nsta_pane_g

0x744a,	// (0x00034fae) clock_nsta_pane_cp

0x7452,	// (0x00034fb6) indicator_nsta_pane_cp

0x745b,	// (0x00034fbf) nsta_clock_indic_pane_g1

0x431b,	// (0x00031e7f) grid_indicator_pane

0x4ecf,	// (0x00032a33) scroll_pane_cp29

0xa082,	// (0x00037be6) indicator_nsta_pane_cp2_ParamLimits

0xa082,	// (0x00037be6) indicator_nsta_pane_cp2

0x42df,	// (0x00031e43) main_apps_wheel_pane

0x5c3e,	// (0x000337a2) form_midp_field_text_pane_ParamLimits

0x5d6b,	// (0x000338cf) scroll_bar_cp050_ParamLimits

0x74c4,	// (0x00035028) cell_indicator_pane_ParamLimits

0x74c4,	// (0x00035028) cell_indicator_pane

0x74e1,	// (0x00035045) cell_indicator_pane_g1

0xc434,	// (0x00039f98) grid_wheel_folder_pane_ParamLimits

0xc434,	// (0x00039f98) grid_wheel_folder_pane

0xc44a,	// (0x00039fae) list_wheel_apps_pane_ParamLimits

0xc44a,	// (0x00039fae) list_wheel_apps_pane

0xc45b,	// (0x00039fbf) main_apps_wheel_pane_g1_ParamLimits

0xc45b,	// (0x00039fbf) main_apps_wheel_pane_g1

0xc46f,	// (0x00039fd3) main_apps_wheel_pane_g2_ParamLimits

0xc46f,	// (0x00039fd3) main_apps_wheel_pane_g2

0x0001,

0xfad8,	// (0x0003d63c) main_apps_wheel_pane_g_ParamLimits

0xfad8,	// (0x0003d63c) main_apps_wheel_pane_g

0xc487,	// (0x00039feb) main_apps_wheel_pane_t1_ParamLimits

0xc487,	// (0x00039feb) main_apps_wheel_pane_t1

0xc4aa,	// (0x0003a00e) list_wheel_apps_pane_g1

0xc4b2,	// (0x0003a016) list_wheel_apps_pane_g2

0xc4ba,	// (0x0003a01e) list_wheel_apps_pane_g3

0xc4c2,	// (0x0003a026) list_wheel_apps_pane_g4

0xc4cc,	// (0x0003a030) list_wheel_apps_pane_g5

0x0004,

0xfadd,	// (0x0003d641) list_wheel_apps_pane_g

0x5322,	// (0x00032e86) navi_icon_text_pane

0xbb60,	// (0x000396c4) aid_fill_nsta

0xc4ef,	// (0x0003a053) navi_icon_text_pane_g1

0xc4fe,	// (0x0003a062) navi_icon_text_pane_t1

0x51be,	// (0x00032d22) list_set_graphic_pane_t1_ParamLimits

0x51be,	// (0x00032d22) list_set_graphic_pane_t1

0x6485,	// (0x00033fe9) popup_midp_note_alarm_window_t6_ParamLimits

0x6485,	// (0x00033fe9) popup_midp_note_alarm_window_t6

0x6497,	// (0x00033ffb) popup_midp_note_alarm_window_t7_ParamLimits

0x6497,	// (0x00033ffb) popup_midp_note_alarm_window_t7

0x64a9,	// (0x0003400d) popup_midp_note_alarm_window_t8_ParamLimits

0x64a9,	// (0x0003400d) popup_midp_note_alarm_window_t8

0x64bb,	// (0x0003401f) popup_midp_note_alarm_window_t9_ParamLimits

0x64bb,	// (0x0003401f) popup_midp_note_alarm_window_t9

0x64cd,	// (0x00034031) popup_midp_note_alarm_window_t10_ParamLimits

0x64cd,	// (0x00034031) popup_midp_note_alarm_window_t10

0x64df,	// (0x00034043) popup_midp_note_alarm_window_t11_ParamLimits

0x64df,	// (0x00034043) popup_midp_note_alarm_window_t11

0x64f1,	// (0x00034055) scroll_pane_cp17_ParamLimits

0x64f1,	// (0x00034055) scroll_pane_cp17

0xa5f7,	// (0x0003815b) volume_small_pane_cp_g1

0xaa53,	// (0x000385b7) volume_small_pane_cp_g2

0xaa5c,	// (0x000385c0) volume_small_pane_cp_g3

0xaa65,	// (0x000385c9) volume_small_pane_cp_g4

0xaa6e,	// (0x000385d2) volume_small_pane_cp_g5

0xaa77,	// (0x000385db) volume_small_pane_cp_g6

0xaa80,	// (0x000385e4) volume_small_pane_cp_g7

0xaa89,	// (0x000385ed) volume_small_pane_cp_g8

0xaa92,	// (0x000385f6) volume_small_pane_cp_g9

0xaa9b,	// (0x000385ff) volume_small_pane_cp_g10

0x54ce,	// (0x00033032) midp_ticker_pane_g1_ParamLimits

0x54da,	// (0x0003303e) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0003d2d9) midp_ticker_pane_g_ParamLimits

0xa26e,	// (0x00037dd2) midp_ticker_pane_t1_ParamLimits

0xbb76,	// (0x000396da) aid_fill_nsta_2

0x5d57,	// (0x000338bb) list_form2_midp_pane

0x6b72,	// (0x000346d6) midp_editing_number_pane_ParamLimits

0x6b81,	// (0x000346e5) midp_ticker_pane_ParamLimits

0x74eb,	// (0x0003504f) form2_midp_field_pane

0x74f3,	// (0x00035057) scroll_pane_cp51

0x7513,	// (0x00035077) form2_midp_button_pane_ParamLimits

0x7513,	// (0x00035077) form2_midp_button_pane

0x7525,	// (0x00035089) form2_midp_content_pane_ParamLimits

0x7525,	// (0x00035089) form2_midp_content_pane

0x753f,	// (0x000350a3) form2_midp_field_choice_group_pane

0x7547,	// (0x000350ab) form2_midp_field_pane_g1

0x754f,	// (0x000350b3) form2_midp_field_pane_g2

0x7557,	// (0x000350bb) form2_midp_field_pane_g3

0x755f,	// (0x000350c3) form2_midp_field_pane_g4

0x0003,

0xfb02,	// (0x0003d666) form2_midp_field_pane_g

0x7567,	// (0x000350cb) form2_midp_gauge_slider_pane

0x756f,	// (0x000350d3) form2_midp_gauge_wait_pane

0x7577,	// (0x000350db) form2_midp_image_pane_ParamLimits

0x7577,	// (0x000350db) form2_midp_image_pane

0x7592,	// (0x000350f6) form2_midp_label_pane_ParamLimits

0x7592,	// (0x000350f6) form2_midp_label_pane

0xc52f,	// (0x0003a093) form2_midp_label_pane_cp_ParamLimits

0xc52f,	// (0x0003a093) form2_midp_label_pane_cp

0x75ab,	// (0x0003510f) form2_midp_string_pane_ParamLimits

0x75ab,	// (0x0003510f) form2_midp_string_pane

0x9090,	// (0x00036bf4) form2_midp_text_pane_ParamLimits

0x9090,	// (0x00036bf4) form2_midp_text_pane

0x75bd,	// (0x00035121) form2_midp_time_pane

0x75cd,	// (0x00035131) input_focus_pane_cp51_ParamLimits

0x75cd,	// (0x00035131) input_focus_pane_cp51

0x75e5,	// (0x00035149) form2_midp_label_pane_t1_ParamLimits

0x75e5,	// (0x00035149) form2_midp_label_pane_t1

0x90ab,	// (0x00036c0f) form2_mdip_text_pane_t1_ParamLimits

0x90ab,	// (0x00036c0f) form2_mdip_text_pane_t1

0x90c7,	// (0x00036c2b) form2_midp_time_pane_t1

0x762d,	// (0x00035191) form2_midp_gauge_slider_pane_t1

0xc550,	// (0x0003a0b4) form2_midp_gauge_slider_pane_t2

0xc562,	// (0x0003a0c6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0b,	// (0x0003d66f) form2_midp_gauge_slider_pane_t

0x763f,	// (0x000351a3) form2_midp_slider_pane

0x764b,	// (0x000351af) form2_midp_gauge_wait_pane_t1

0x7659,	// (0x000351bd) form2_midp_wait_pane_ParamLimits

0x7659,	// (0x000351bd) form2_midp_wait_pane

0xc574,	// (0x0003a0d8) list_single_2graphic_pane_cp4_ParamLimits

0xc574,	// (0x0003a0d8) list_single_2graphic_pane_cp4

0xbed1,	// (0x00039a35) list_single_midp_graphic_pane_cp_ParamLimits

0xbed1,	// (0x00039a35) list_single_midp_graphic_pane_cp

0x4283,	// (0x00031de7) list_highlight_pane_cp20

0x7684,	// (0x000351e8) list_single_2graphic_pane_g1_cp4

0x6eaf,	// (0x00034a13) list_single_2graphic_pane_g2_cp4

0x768c,	// (0x000351f0) list_single_2graphic_pane_t1_cp4

0x42df,	// (0x00031e43) list_highlight_pane_cp21

0x769b,	// (0x000351ff) list_single_midp_graphic_pane_g4_cp

0x76aa,	// (0x0003520e) list_single_midp_graphic_pane_t1_cp

0xc5a3,	// (0x0003a107) form2_mdip_string_pane_t1_ParamLimits

0xc5a3,	// (0x0003a107) form2_mdip_string_pane_t1

0x4283,	// (0x00031de7) bg_wml_button_pane_cp2

0x4279,	// (0x00031ddd) form2_midp_image_pane_g1

0x9b89,	// (0x000376ed) list_double_large_graphic_pane_g5_ParamLimits

0x9b89,	// (0x000376ed) list_double_large_graphic_pane_g5

0xa1b9,	// (0x00037d1d) midp_form_pane_ParamLimits

0x42df,	// (0x00031e43) main_apps_wheel_pane_ParamLimits

0xb9ce,	// (0x00039532) popup_preview_window_ParamLimits

0xb9ce,	// (0x00039532) popup_preview_window

0x57bd,	// (0x00033321) popup_touch_info_window_ParamLimits

0x57bd,	// (0x00033321) popup_touch_info_window

0x57db,	// (0x0003333f) popup_touch_menu_window_ParamLimits

0x57db,	// (0x0003333f) popup_touch_menu_window

0x426f,	// (0x00031dd3) bg_popup_sub_pane_cp6

0x76bf,	// (0x00035223) list_touch_menu_pane

0x76c7,	// (0x0003522b) list_single_touch_menu_pane_ParamLimits

0x76c7,	// (0x0003522b) list_single_touch_menu_pane

0x76dc,	// (0x00035240) list_single_touch_menu_pane_t1

0x42df,	// (0x00031e43) bg_popup_sub_pane_cp7_ParamLimits

0x42df,	// (0x00031e43) bg_popup_sub_pane_cp7

0x76ea,	// (0x0003524e) heading_sub_pane

0x76f2,	// (0x00035256) list_touch_info_pane_ParamLimits

0x76f2,	// (0x00035256) list_touch_info_pane

0x7701,	// (0x00035265) list_single_touch_info_pane_ParamLimits

0x7701,	// (0x00035265) list_single_touch_info_pane

0x7713,	// (0x00035277) list_single_touch_info_pane_t1

0x7721,	// (0x00035285) list_single_touch_info_pane_t2

0x0001,

0xfb19,	// (0x0003d67d) list_single_touch_info_pane_t

0x54a4,	// (0x00033008) bg_popup_heading_pane_cp

0x772f,	// (0x00035293) heading_sub_pane_t1

0x5adc,	// (0x00033640) bg_popup_preview_window_pane_cp_ParamLimits

0x5adc,	// (0x00033640) bg_popup_preview_window_pane_cp

0x76ea,	// (0x0003524e) heading_preview_pane

0x76f2,	// (0x00035256) list_preview_pane_ParamLimits

0x76f2,	// (0x00035256) list_preview_pane

0x773d,	// (0x000352a1) popup_preview_window_g1

0x7701,	// (0x00035265) list_single_preview_pane_ParamLimits

0x7701,	// (0x00035265) list_single_preview_pane

0x7745,	// (0x000352a9) list_single_preview_pane_g1

0x774d,	// (0x000352b1) list_single_preview_pane_t1

0x7713,	// (0x00035277) list_single_preview_pane_t2

0x0001,

0xfb1e,	// (0x0003d682) list_single_preview_pane_t

0x775b,	// (0x000352bf) bg_popup_heading_pane_cp2_ParamLimits

0x775b,	// (0x000352bf) bg_popup_heading_pane_cp2

0x7771,	// (0x000352d5) heading_preview_pane_g1

0x7779,	// (0x000352dd) heading_preview_pane_t1_ParamLimits

0x7779,	// (0x000352dd) heading_preview_pane_t1

0x4332,	// (0x00031e96) soft_indicator_pane_t1_ParamLimits

0x49d0,	// (0x00032534) scroll_pane_ParamLimits

0x4dd4,	// (0x00032938) scroll_sc2_left_pane

0x4dcb,	// (0x0003292f) scroll_sc2_right_pane

0x4df3,	// (0x00032957) scroll_bg_pane_g1_ParamLimits

0x4e08,	// (0x0003296c) scroll_bg_pane_g2_ParamLimits

0x4e20,	// (0x00032984) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x0003d268) scroll_bg_pane_g_ParamLimits

0x4df3,	// (0x00032957) scroll_handle_pane_g1_ParamLimits

0x4e42,	// (0x000329a6) scroll_handle_pane_g2_ParamLimits

0x4e20,	// (0x00032984) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x0003d26f) scroll_handle_pane_g_ParamLimits

0x5706,	// (0x0003326a) popup_choice_list_window_ParamLimits

0x5706,	// (0x0003326a) popup_choice_list_window

0x5936,	// (0x0003349a) choice_list_pane

0x59b8,	// (0x0003351c) cell_toolbar_pane_t1

0x59e0,	// (0x00033544) toolbar_button_pane_ParamLimits

0x68cf,	// (0x00034433) ai_gene_pane_1_t2_ParamLimits

0x68cf,	// (0x00034433) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0003d48c) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0003d48c) ai_gene_pane_1_t

0x7796,	// (0x000352fa) scroll_sc2_left_pane_g1

0x7796,	// (0x000352fa) scroll_sc2_right_pane_g1

0x4bb4,	// (0x00032718) bg_popup_sub_pane_cp10

0x77a0,	// (0x00035304) list_choice_list_pane

0x77b7,	// (0x0003531b) list_single_choice_list_pane_ParamLimits

0x77b7,	// (0x0003531b) list_single_choice_list_pane

0x77cb,	// (0x0003532f) list_single_choice_list_pane_g1

0x77d3,	// (0x00035337) list_single_choice_list_pane_t1_ParamLimits

0x77d3,	// (0x00035337) list_single_choice_list_pane_t1

0x77e8,	// (0x0003534c) choice_list_pane_g1

0x77f0,	// (0x00035354) choice_list_pane_t1

0x426f,	// (0x00031dd3) input_focus_pane_cp11

0x4d29,	// (0x0003288d) title_pane_stacon_g2_ParamLimits

0x4d29,	// (0x0003288d) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x0003d24e) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x0003d24e) title_pane_stacon_g

0x54a4,	// (0x00033008) cursor_press_pane

0xb773,	// (0x000392d7) popup_fep_hwr_window_ParamLimits

0xb773,	// (0x000392d7) popup_fep_hwr_window

0x575a,	// (0x000332be) popup_fep_vkb_window_ParamLimits

0x575a,	// (0x000332be) popup_fep_vkb_window

0x77fe,	// (0x00035362) cursor_press_pane_g1

0x0002,

0xfb47,	// (0x0003d6ab) fep_vkb_side_pane_g_ParamLimits

0xaacf,	// (0x00038633) fep_hwr_candidate_pane_ParamLimits

0xaacf,	// (0x00038633) fep_hwr_candidate_pane

0xaaf9,	// (0x0003865d) fep_hwr_side_pane_ParamLimits

0xaaf9,	// (0x0003865d) fep_hwr_side_pane

0xab19,	// (0x0003867d) fep_hwr_top_pane_ParamLimits

0xab19,	// (0x0003867d) fep_hwr_top_pane

0xab31,	// (0x00038695) fep_hwr_write_pane_ParamLimits

0xab31,	// (0x00038695) fep_hwr_write_pane

0xfb47,	// (0x0003d6ab) fep_vkb_side_pane_g

0x7818,	// (0x0003537c) fep_hwr_top_pane_g1

0x7806,	// (0x0003536a) fep_hwr_top_pane_g2

0xab5d,	// (0x000386c1) fep_hwr_top_pane_g3

0x0002,

0xfb23,	// (0x0003d687) fep_hwr_top_pane_g

0xab72,	// (0x000386d6) fep_hwr_top_text_pane

0x4f95,	// (0x00032af9) fep_hwr_top_text_pane_g1

0x784e,	// (0x000353b2) fep_hwr_top_text_pane_t1

0xac68,	// (0x000387cc) fep_hwr_candidate_pane_g1

0x7a5b,	// (0x000355bf) fep_vkb_keypad_pane_g3_ParamLimits

0x7a5b,	// (0x000355bf) fep_vkb_keypad_pane_g3

0x7a83,	// (0x000355e7) fep_vkb_keypad_pane_g4_ParamLimits

0x7a83,	// (0x000355e7) fep_vkb_keypad_pane_g4

0x7b00,	// (0x00035664) fep_vkb_bottom_pane_g2_ParamLimits

0x7b00,	// (0x00035664) fep_vkb_bottom_pane_g2

0x0001,

0xfb4e,	// (0x0003d6b2) fep_vkb_bottom_pane_g_ParamLimits

0xfb4e,	// (0x0003d6b2) fep_vkb_bottom_pane_g

0x7796,	// (0x000352fa) cell_vkb_side_pane_g2

0x0001,

0xfb58,	// (0x0003d6bc) cell_vkb_side_pane_g

0x7b44,	// (0x000356a8) cell_vkb_side_pane_t1

0x7b52,	// (0x000356b6) cell_vkb_side_pane_t1_copy1

0x7796,	// (0x000352fa) bg_fep_vkb_candidate_pane_g2

0x7c2e,	// (0x00035792) cell_vkb_candidate_pane_ParamLimits

0x785c,	// (0x000353c0) aid_size_cell_vkb_ParamLimits

0x785c,	// (0x000353c0) aid_size_cell_vkb

0x7c2e,	// (0x00035792) cell_vkb_candidate_pane

0xac82,	// (0x000387e6) bg_popup_fep_shadow_pane_g1

0x78d8,	// (0x0003543c) fep_vkb_bottom_pane_ParamLimits

0x78d8,	// (0x0003543c) fep_vkb_bottom_pane

0x7915,	// (0x00035479) fep_vkb_candidate_pane_ParamLimits

0x7915,	// (0x00035479) fep_vkb_candidate_pane

0x7931,	// (0x00035495) fep_vkb_keypad_pane_ParamLimits

0x7931,	// (0x00035495) fep_vkb_keypad_pane

0x7977,	// (0x000354db) fep_vkb_side_pane_ParamLimits

0x7977,	// (0x000354db) fep_vkb_side_pane

0x79b3,	// (0x00035517) fep_vkb_top_pane_ParamLimits

0x79b3,	// (0x00035517) fep_vkb_top_pane

0x79ef,	// (0x00035553) fep_vkb_top_pane_g1_ParamLimits

0x79ef,	// (0x00035553) fep_vkb_top_pane_g1

0x79fe,	// (0x00035562) fep_vkb_top_pane_g2_ParamLimits

0x79fe,	// (0x00035562) fep_vkb_top_pane_g2

0x7a0d,	// (0x00035571) fep_vkb_top_pane_g3_ParamLimits

0x7a0d,	// (0x00035571) fep_vkb_top_pane_g3

0x0003,

0xfb3e,	// (0x0003d6a2) fep_vkb_top_pane_g_ParamLimits

0xfb3e,	// (0x0003d6a2) fep_vkb_top_pane_g

0x7a2b,	// (0x0003558f) fep_vkb_top_text_pane_ParamLimits

0x7a2b,	// (0x0003558f) fep_vkb_top_text_pane

0xc6ef,	// (0x0003a253) fep_vkb_side_pane_g1_ParamLimits

0xc6ef,	// (0x0003a253) fep_vkb_side_pane_g1

0x7a4a,	// (0x000355ae) grid_vkb_side_pane_ParamLimits

0x7a4a,	// (0x000355ae) grid_vkb_side_pane

0xac8a,	// (0x000387ee) bg_popup_fep_shadow_pane_g2

0xac93,	// (0x000387f7) bg_popup_fep_shadow_pane_g3

0xac9b,	// (0x000387ff) bg_popup_fep_shadow_pane_g4

0xaca4,	// (0x00038808) bg_popup_fep_shadow_pane_g5

0xacae,	// (0x00038812) bg_popup_fep_shadow_pane_g6

0xacb6,	// (0x0003881a) bg_popup_fep_shadow_pane_g7

0x4ae4,	// (0x00032648) bg_popup_fep_shadow_pane_g8

0x7aaf,	// (0x00035613) grid_vkb_keypad_number_pane_ParamLimits

0x7aaf,	// (0x00035613) grid_vkb_keypad_number_pane

0x7abf,	// (0x00035623) grid_vkb_keypad_pane_ParamLimits

0x7abf,	// (0x00035623) grid_vkb_keypad_pane

0x7ae5,	// (0x00035649) fep_vkb_bottom_pane_g1_ParamLimits

0x7ae5,	// (0x00035649) fep_vkb_bottom_pane_g1

0x7b0e,	// (0x00035672) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7b0e,	// (0x00035672) grid_vkb_keypad_bottom_left_pane

0x7b23,	// (0x00035687) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7b23,	// (0x00035687) grid_vkb_keypad_bottom_right_pane

0x7b38,	// (0x0003569c) fep_vkb_top_text_pane_g1

0xc739,	// (0x0003a29d) fep_vkb_top_text_pane_t1

0xc74e,	// (0x0003a2b2) cell_vkb_side_pane_ParamLimits

0xc74e,	// (0x0003a2b2) cell_vkb_side_pane

0x7796,	// (0x000352fa) cell_vkb_side_pane_g1

0x7b60,	// (0x000356c4) cell_vkb_keypad_pane_ParamLimits

0x7b60,	// (0x000356c4) cell_vkb_keypad_pane

0x7bdb,	// (0x0003573f) cell_vkb_keypad_pane_g1

0x0008,

0xfb6b,	// (0x0003d6cf) bg_popup_fep_shadow_pane_g

0x7796,	// (0x000352fa) cell_hwr_side_pane_g1

0x7796,	// (0x000352fa) cell_hwr_side_pane_g2

0x7be5,	// (0x00035749) cell_vkb_keypad_pane_t1

0xc771,	// (0x0003a2d5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc771,	// (0x0003a2d5) cell_vkb_keypad_bottom_left_pane

0xc78e,	// (0x0003a2f2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc78e,	// (0x0003a2f2) cell_vkb_keypad_bottom_right_pane

0x7796,	// (0x000352fa) cell_vkb_keypad_bottom_left_pane_g1

0x7796,	// (0x000352fa) cell_vkb_keypad_bottom_right_pane_g1

0x7bf3,	// (0x00035757) cell_vkb_keypad_number_pane_ParamLimits

0x7bf3,	// (0x00035757) cell_vkb_keypad_number_pane

0x7c12,	// (0x00035776) cell_vkb_keypad_number_pane_g1

0x7c1c,	// (0x00035780) cell_vkb_keypad_number_pane_g2

0x7c25,	// (0x00035789) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5d,	// (0x0003d6c1) cell_vkb_keypad_number_pane_g

0x7be5,	// (0x00035749) cell_vkb_keypad_number_pane_t1

0x7c4b,	// (0x000357af) fep_vkb_candidate_pane_g1

0x0001,

0xfb58,	// (0x0003d6bc) cell_hwr_side_pane_g

0x7c64,	// (0x000357c8) cell_hwr_side_pane_t1

0xacc8,	// (0x0003882c) cell_hwr_side_pane_t1_copy1

0x7a1d,	// (0x00035581) cell_hwr_candidate_pane_g1

0xacd6,	// (0x0003883a) cell_hwr_candidate_pane_t1

0x7796,	// (0x000352fa) cell_vkb_candidate_pane_g2

0x7ca8,	// (0x0003580c) cell_vkb_candidate_pane_t1

0x7aa1,	// (0x00035605) bg_popup_fep_shadow_pane_ParamLimits

0x7aa1,	// (0x00035605) bg_popup_fep_shadow_pane

0x1083,	// (0x0002ebe7) bg_fep_hwr_top_pane_g4

0x782a,	// (0x0003538e) bg_hwr_side_pane_g1_ParamLimits

0x782a,	// (0x0003538e) bg_hwr_side_pane_g1

0xabae,	// (0x00038712) cell_hwr_side_pane_ParamLimits

0xabae,	// (0x00038712) cell_hwr_side_pane

0xabe9,	// (0x0003874d) fep_hwr_write_pane_g1_ParamLimits

0xabe9,	// (0x0003874d) fep_hwr_write_pane_g1

0xabf6,	// (0x0003875a) fep_hwr_write_pane_g2_ParamLimits

0xabf6,	// (0x0003875a) fep_hwr_write_pane_g2

0xac03,	// (0x00038767) fep_hwr_write_pane_g3_ParamLimits

0xac03,	// (0x00038767) fep_hwr_write_pane_g3

0xac11,	// (0x00038775) fep_hwr_write_pane_g4_ParamLimits

0xac11,	// (0x00038775) fep_hwr_write_pane_g4

0x0005,

0xfb2a,	// (0x0003d68e) fep_hwr_write_pane_g_ParamLimits

0xfb2a,	// (0x0003d68e) fep_hwr_write_pane_g

0x1083,	// (0x0002ebe7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1083,	// (0x0002ebe7) bg_fep_hwr_candidate_pane_g2

0xac26,	// (0x0003878a) cell_hwr_candidate_pane_ParamLimits

0xac26,	// (0x0003878a) cell_hwr_candidate_pane

0xac68,	// (0x000387cc) fep_hwr_candidate_pane_g1_ParamLimits

0x788a,	// (0x000353ee) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x788a,	// (0x000353ee) bg_popup_fep_shadow_pane_cp2

0x7a1d,	// (0x00035581) fep_vkb_top_pane_g4_ParamLimits

0x7a1d,	// (0x00035581) fep_vkb_top_pane_g4

0x7a3c,	// (0x000355a0) fep_vkb_side_pane_g2_ParamLimits

0x7a3c,	// (0x000355a0) fep_vkb_side_pane_g2

0x8989,	// (0x000364ed) list_setting_pane_t4_ParamLimits

0x8989,	// (0x000364ed) list_setting_pane_t4

0x8a23,	// (0x00036587) list_setting_number_pane_t5_ParamLimits

0x8a23,	// (0x00036587) list_setting_number_pane_t5

0x9ed5,	// (0x00037a39) list_double_heading_pane_cp2_ParamLimits

0x9ed5,	// (0x00037a39) list_double_heading_pane_cp2

0x4a77,	// (0x000325db) list_double_heading_pane_g1_cp2_ParamLimits

0x4a77,	// (0x000325db) list_double_heading_pane_g1_cp2

0x4a83,	// (0x000325e7) list_double_heading_pane_g2_cp2_ParamLimits

0x4a83,	// (0x000325e7) list_double_heading_pane_g2_cp2

0x7cb6,	// (0x0003581a) list_double_heading_pane_t1_cp2_ParamLimits

0x7cb6,	// (0x0003581a) list_double_heading_pane_t1_cp2

0x7ccc,	// (0x00035830) list_double_heading_pane_t2_cp2_ParamLimits

0x7ccc,	// (0x00035830) list_double_heading_pane_t2_cp2

0x4267,	// (0x00031dcb) aid_value_unit2

0x96d9,	// (0x0003723d) popup_preview_fixed_window

0x4412,	// (0x00031f76) bg_popup_preview_window_pane_cp02

0x7cde,	// (0x00035842) list_preview_fixed_pane

0x7d24,	// (0x00035888) list_empty_pane_fp_ParamLimits

0x7d24,	// (0x00035888) list_empty_pane_fp

0x7d24,	// (0x00035888) list_single_cale_day_pane_fp_ParamLimits

0x7d24,	// (0x00035888) list_single_cale_day_pane_fp

0x7d24,	// (0x00035888) list_single_graphic_heading_pane_fp_ParamLimits

0x7d24,	// (0x00035888) list_single_graphic_heading_pane_fp

0x7d24,	// (0x00035888) list_single_graphic_pane_fp_ParamLimits

0x7d24,	// (0x00035888) list_single_graphic_pane_fp

0x7d24,	// (0x00035888) list_single_heading_pane_fp_ParamLimits

0x7d24,	// (0x00035888) list_single_heading_pane_fp

0x7d24,	// (0x00035888) list_single_pane_fp_ParamLimits

0x7d24,	// (0x00035888) list_single_pane_fp

0x7d3b,	// (0x0003589f) list_single_pane_fp_g1_ParamLimits

0x7d3b,	// (0x0003589f) list_single_pane_fp_g1

0x9b71,	// (0x000376d5) list_single_pane_fp_g2_ParamLimits

0x9b71,	// (0x000376d5) list_single_pane_fp_g2

0x90da,	// (0x00036c3e) list_single_pane_fp_g3_ParamLimits

0x90da,	// (0x00036c3e) list_single_pane_fp_g3

0x7d47,	// (0x000358ab) list_single_pane_fp_g4_ParamLimits

0x7d47,	// (0x000358ab) list_single_pane_fp_g4

0x0003,

0xfb8c,	// (0x0003d6f0) list_single_pane_fp_g_ParamLimits

0xfb8c,	// (0x0003d6f0) list_single_pane_fp_g

0x90ee,	// (0x00036c52) list_single_pane_fp_t1_ParamLimits

0x90ee,	// (0x00036c52) list_single_pane_fp_t1

0x9105,	// (0x00036c69) list_single_graphic_pane_fp_g1_ParamLimits

0x9105,	// (0x00036c69) list_single_graphic_pane_fp_g1

0x7d3b,	// (0x0003589f) list_single_graphic_pane_fp_g2_ParamLimits

0x7d3b,	// (0x0003589f) list_single_graphic_pane_fp_g2

0x9b71,	// (0x000376d5) list_single_graphic_pane_fp_g3_ParamLimits

0x9b71,	// (0x000376d5) list_single_graphic_pane_fp_g3

0x90da,	// (0x00036c3e) list_single_graphic_pane_fp_g4_ParamLimits

0x90da,	// (0x00036c3e) list_single_graphic_pane_fp_g4

0x7d47,	// (0x000358ab) list_single_graphic_pane_fp_g5_ParamLimits

0x7d47,	// (0x000358ab) list_single_graphic_pane_fp_g5

0x0004,

0xfb95,	// (0x0003d6f9) list_single_graphic_pane_fp_g_ParamLimits

0xfb95,	// (0x0003d6f9) list_single_graphic_pane_fp_g

0x9111,	// (0x00036c75) list_single_graphic_pane_fp_t1_ParamLimits

0x9111,	// (0x00036c75) list_single_graphic_pane_fp_t1

0x9105,	// (0x00036c69) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9105,	// (0x00036c69) list_single_graphic_heading_pane_fp_g1

0x7d3b,	// (0x0003589f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7d3b,	// (0x0003589f) list_single_graphic_heading_pane_fp_g2

0x9b71,	// (0x000376d5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x9b71,	// (0x000376d5) list_single_graphic_heading_pane_fp_g3

0x90da,	// (0x00036c3e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x90da,	// (0x00036c3e) list_single_graphic_heading_pane_fp_g4

0x7d47,	// (0x000358ab) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7d47,	// (0x000358ab) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb95,	// (0x0003d6f9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003d6f9) list_single_graphic_heading_pane_fp_g

0x9127,	// (0x00036c8b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x9127,	// (0x00036c8b) list_single_graphic_heading_pane_fp_t1

0x913d,	// (0x00036ca1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x913d,	// (0x00036ca1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba0,	// (0x0003d704) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba0,	// (0x0003d704) list_single_graphic_heading_pane_fp_t

0x914f,	// (0x00036cb3) list_single_cale_day_pane_fp_g1_ParamLimits

0x914f,	// (0x00036cb3) list_single_cale_day_pane_fp_g1

0x7d53,	// (0x000358b7) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d53,	// (0x000358b7) list_single_cale_day_pane_fp_g2

0x9187,	// (0x00036ceb) list_single_cale_day_pane_fp_g3_ParamLimits

0x9187,	// (0x00036ceb) list_single_cale_day_pane_fp_g3

0x91af,	// (0x00036d13) list_single_cale_day_pane_fp_g4_ParamLimits

0x91af,	// (0x00036d13) list_single_cale_day_pane_fp_g4

0x91d3,	// (0x00036d37) list_single_cale_day_pane_fp_g5_ParamLimits

0x91d3,	// (0x00036d37) list_single_cale_day_pane_fp_g5

0x0004,

0xfba5,	// (0x0003d709) list_single_cale_day_pane_fp_g_ParamLimits

0xfba5,	// (0x0003d709) list_single_cale_day_pane_fp_g

0x91f7,	// (0x00036d5b) list_single_cale_day_pane_fp_t1_ParamLimits

0x91f7,	// (0x00036d5b) list_single_cale_day_pane_fp_t1

0x921d,	// (0x00036d81) list_single_cale_day_pane_fp_t2_ParamLimits

0x921d,	// (0x00036d81) list_single_cale_day_pane_fp_t2

0x9236,	// (0x00036d9a) list_single_cale_day_pane_fp_t3_ParamLimits

0x9236,	// (0x00036d9a) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb0,	// (0x0003d714) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb0,	// (0x0003d714) list_single_cale_day_pane_fp_t

0x7d3b,	// (0x0003589f) list_empty_pane_fp_g1_ParamLimits

0x7d3b,	// (0x0003589f) list_empty_pane_fp_g1

0x924f,	// (0x00036db3) list_empty_pane_fp_t1

0x925d,	// (0x00036dc1) list_empty_pane_fp_t2

0x0001,

0xfbb7,	// (0x0003d71b) list_empty_pane_fp_t

0x7d3b,	// (0x0003589f) list_single_heading_pane_fp_g1_ParamLimits

0x7d3b,	// (0x0003589f) list_single_heading_pane_fp_g1

0x9b71,	// (0x000376d5) list_single_heading_pane_fp_g2_ParamLimits

0x9b71,	// (0x000376d5) list_single_heading_pane_fp_g2

0x90da,	// (0x00036c3e) list_single_heading_pane_fp_g3_ParamLimits

0x90da,	// (0x00036c3e) list_single_heading_pane_fp_g3

0x0002,

0xfbbc,	// (0x0003d720) list_single_heading_pane_fp_g_ParamLimits

0xfbbc,	// (0x0003d720) list_single_heading_pane_fp_g

0x926b,	// (0x00036dcf) list_single_heading_pane_fp_t1_ParamLimits

0x926b,	// (0x00036dcf) list_single_heading_pane_fp_t1

0x927d,	// (0x00036de1) list_single_heading_pane_fp_t2_ParamLimits

0x927d,	// (0x00036de1) list_single_heading_pane_fp_t2

0x0001,

0xfbc3,	// (0x0003d727) list_single_heading_pane_fp_t_ParamLimits

0xfbc3,	// (0x0003d727) list_single_heading_pane_fp_t

0x4bc0,	// (0x00032724) aid_size_cell_fast

0x43f5,	// (0x00031f59) soft_indicator_pane_cp1_t1

0x4bfd,	// (0x00032761) cell_app_pane_cp2_ParamLimits

0x4bfd,	// (0x00032761) cell_app_pane_cp2

0xaab8,	// (0x0003861c) fep_hwr_candidate_drop_down_list_pane

0x13da,	// (0x0002ef3e) fep_hwr_candidate_pane_g3_ParamLimits

0x13da,	// (0x0002ef3e) fep_hwr_candidate_pane_g3

0x13e7,	// (0x0002ef4b) fep_hwr_candidate_pane_g4_ParamLimits

0x13e7,	// (0x0002ef4b) fep_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x0003d69b) fep_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x0003d69b) fep_hwr_candidate_pane_g

0x7904,	// (0x00035468) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7904,	// (0x00035468) fep_vkb_candidate_drop_down_list_pane

0x7c53,	// (0x000357b7) fep_vkb_candidate_pane_g3

0x7c5b,	// (0x000357bf) fep_vkb_candidate_pane_g4

0x0002,

0xfb64,	// (0x0003d6c8) fep_vkb_candidate_pane_g

0x7a1d,	// (0x00035581) cell_hwr_candidate_pane_g1_ParamLimits

0x7d5f,	// (0x000358c3) cell_hwr_candidate_pane_g3_ParamLimits

0x7d5f,	// (0x000358c3) cell_hwr_candidate_pane_g3

0x7d80,	// (0x000358e4) cell_hwr_candidate_pane_g4_ParamLimits

0x7d80,	// (0x000358e4) cell_hwr_candidate_pane_g4

0x0002,

0xfb7e,	// (0x0003d6e2) cell_hwr_candidate_pane_g_ParamLimits

0xfb7e,	// (0x0003d6e2) cell_hwr_candidate_pane_g

0x7c72,	// (0x000357d6) cell_vkb_candidate_pane_g3_ParamLimits

0x7c72,	// (0x000357d6) cell_vkb_candidate_pane_g3

0x7c8d,	// (0x000357f1) cell_vkb_candidate_pane_g4_ParamLimits

0x7c8d,	// (0x000357f1) cell_vkb_candidate_pane_g4

0xc7c7,	// (0x0003a32b) cell_app_pane_cp2_g1_ParamLimits

0xc7c7,	// (0x0003a32b) cell_app_pane_cp2_g1

0xc7e5,	// (0x0003a349) cell_app_pane_cp2_g2_ParamLimits

0xc7e5,	// (0x0003a349) cell_app_pane_cp2_g2

0x0001,

0xfbc8,	// (0x0003d72c) cell_app_pane_cp2_g_ParamLimits

0xfbc8,	// (0x0003d72c) cell_app_pane_cp2_g

0xc7f1,	// (0x0003a355) cell_app_pane_cp2_t1_ParamLimits

0xc7f1,	// (0x0003a355) cell_app_pane_cp2_t1

0x4a5d,	// (0x000325c1) grid_highlight_pane_cp1_ParamLimits

0x4a5d,	// (0x000325c1) grid_highlight_pane_cp1

0xacf4,	// (0x00038858) cell_hwr_candidate_pane_cp1_ParamLimits

0xacf4,	// (0x00038858) cell_hwr_candidate_pane_cp1

0x7a1d,	// (0x00035581) fep_hwr_candidate_drop_down_list_pane_g1

0xc803,	// (0x0003a367) fep_hwr_candidate_drop_down_list_pane_g2

0xc810,	// (0x0003a374) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x0003d731) fep_hwr_candidate_drop_down_list_pane_g

0xad13,	// (0x00038877) fep_hwr_candidate_drop_down_list_scroll_pane

0xad1c,	// (0x00038880) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xad1c,	// (0x00038880) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xad29,	// (0x0003888d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xad29,	// (0x0003888d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xad36,	// (0x0003889a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xad36,	// (0x0003889a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c72,	// (0x000357d6) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c72,	// (0x000357d6) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c8d,	// (0x000357f1) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c8d,	// (0x000357f1) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xad43,	// (0x000388a7) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xad43,	// (0x000388a7) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xad5e,	// (0x000388c2) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xad5e,	// (0x000388c2) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xc81d,	// (0x0003a381) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc81d,	// (0x0003a381) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd4,	// (0x0003d738) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd4,	// (0x0003d738) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc838,	// (0x0003a39c) cell_vkb_candidate_pane_cp1_ParamLimits

0xc838,	// (0x0003a39c) cell_vkb_candidate_pane_cp1

0x7a1d,	// (0x00035581) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7a1d,	// (0x00035581) fep_vkb_candidate_drop_down_list_pane_g1

0xc803,	// (0x0003a367) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc803,	// (0x0003a367) fep_vkb_candidate_drop_down_list_pane_g2

0xc810,	// (0x0003a374) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc810,	// (0x0003a374) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x0003d731) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcd,	// (0x0003d731) fep_vkb_candidate_drop_down_list_pane_g

0xc858,	// (0x0003a3bc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc858,	// (0x0003a3bc) fep_vkb_candidate_drop_down_list_scroll_pane

0xc865,	// (0x0003a3c9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc865,	// (0x0003a3c9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc872,	// (0x0003a3d6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc872,	// (0x0003a3d6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc87e,	// (0x0003a3e2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc87e,	// (0x0003a3e2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7d5f,	// (0x000358c3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d5f,	// (0x000358c3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7d80,	// (0x000358e4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7d80,	// (0x000358e4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc88a,	// (0x0003a3ee) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc88a,	// (0x0003a3ee) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8ab,	// (0x0003a40f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8ab,	// (0x0003a40f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc81d,	// (0x0003a381) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc81d,	// (0x0003a381) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0003d749) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0003d749) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x97e3,	// (0x00037347) title_pane_g1_ParamLimits

0x97f0,	// (0x00037354) title_pane_g2_ParamLimits

0xf56a,	// (0x0003d0ce) title_pane_g_ParamLimits

0x4f8d,	// (0x00032af1) aid_call2_pane

0x4f85,	// (0x00032ae9) aid_call_pane

0x4f95,	// (0x00032af9) popup_clock_analogue_window_g1

0x4f95,	// (0x00032af9) popup_clock_analogue_window_g2

0x9eb6,	// (0x00037a1a) popup_clock_analogue_window_g3

0x9ebf,	// (0x00037a23) popup_clock_analogue_window_g4

0x4279,	// (0x00031ddd) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x0003d27d) popup_clock_analogue_window_g

0x9ec7,	// (0x00037a2b) popup_clock_analogue_window_t1

0x9efe,	// (0x00037a62) clock_digital_number_pane_ParamLimits

0x9efe,	// (0x00037a62) clock_digital_number_pane

0x9f0a,	// (0x00037a6e) clock_digital_number_pane_cp02_ParamLimits

0x9f0a,	// (0x00037a6e) clock_digital_number_pane_cp02

0x9f16,	// (0x00037a7a) clock_digital_number_pane_cp03_ParamLimits

0x9f16,	// (0x00037a7a) clock_digital_number_pane_cp03

0x9f22,	// (0x00037a86) clock_digital_number_pane_cp04_ParamLimits

0x9f22,	// (0x00037a86) clock_digital_number_pane_cp04

0x9f2e,	// (0x00037a92) clock_digital_separator_pane_ParamLimits

0x9f2e,	// (0x00037a92) clock_digital_separator_pane

0x9f3a,	// (0x00037a9e) popup_clock_digital_window_t1_ParamLimits

0x9f3a,	// (0x00037a9e) popup_clock_digital_window_t1

0x4279,	// (0x00031ddd) clock_digital_number_pane_g1

0x4279,	// (0x00031ddd) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x0003d288) clock_digital_number_pane_g

0x4279,	// (0x00031ddd) clock_digital_separator_pane_g1

0x4279,	// (0x00031ddd) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x0003d288) clock_digital_separator_pane_g

0xbb60,	// (0x000396c4) aid_fill_nsta_ParamLimits

0xbc29,	// (0x0003978d) indicator_nsta_pane_ParamLimits

0x58df,	// (0x00033443) popup_clock_analogue_window

0x58df,	// (0x00033443) popup_clock_digital_window

0x42df,	// (0x00031e43) grid_indicator_nsta_pane_ParamLimits

0x743c,	// (0x00034fa0) clock_nsta_pane_t2

0x0001,

0xfab7,	// (0x0003d61b) clock_nsta_pane_t

0x9e7a,	// (0x000379de) aid_size_max_handle

0x9e84,	// (0x000379e8) aid_size_min_handle

0x54a4,	// (0x00033008) editor_scroll_pane

0xc8cc,	// (0x0003a430) ex_editor_pane

0x4b7c,	// (0x000326e0) scroll_pane_cp13

0x49fc,	// (0x00032560) scroll_pane_cp14

0x4fbf,	// (0x00032b23) scroll_pane_cp36

0x9ee7,	// (0x00037a4b) list_single_graphic_hl_pane_cp2_ParamLimits

0x9ee7,	// (0x00037a4b) list_single_graphic_hl_pane_cp2

0x8ea6,	// (0x00036a0a) list_single_graphic_hl_pane_ParamLimits

0x8ea6,	// (0x00036a0a) list_single_graphic_hl_pane

0x9293,	// (0x00036df7) aid_size_min_hl_cp1

0xc8d4,	// (0x0003a438) list_highlight_pane_cp34_ParamLimits

0xc8d4,	// (0x0003a438) list_highlight_pane_cp34

0xc8e5,	// (0x0003a449) list_single_graphic_hl_pane_g1_ParamLimits

0xc8e5,	// (0x0003a449) list_single_graphic_hl_pane_g1

0x929c,	// (0x00036e00) list_single_graphic_hl_pane_g2_ParamLimits

0x929c,	// (0x00036e00) list_single_graphic_hl_pane_g2

0x929c,	// (0x00036e00) list_single_graphic_hl_pane_g3_ParamLimits

0x929c,	// (0x00036e00) list_single_graphic_hl_pane_g3

0x5415,	// (0x00032f79) list_single_graphic_hl_pane_g4_ParamLimits

0x5415,	// (0x00032f79) list_single_graphic_hl_pane_g4

0x92a8,	// (0x00036e0c) list_single_graphic_hl_pane_g5_ParamLimits

0x92a8,	// (0x00036e0c) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0003d75a) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0003d75a) list_single_graphic_hl_pane_g

0x8603,	// (0x00036167) list_single_graphic_hl_pane_t1_ParamLimits

0x8603,	// (0x00036167) list_single_graphic_hl_pane_t1

0xc8f2,	// (0x0003a456) aid_size_min_hl_cp2

0xc8fb,	// (0x0003a45f) list_highlight_pane_cp34_cp2_ParamLimits

0xc8fb,	// (0x0003a45f) list_highlight_pane_cp34_cp2

0xc8e5,	// (0x0003a449) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8e5,	// (0x0003a449) list_single_graphic_hl_pane_g1_cp2

0xc908,	// (0x0003a46c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc908,	// (0x0003a46c) list_single_graphic_hl_pane_g2_cp2

0xc914,	// (0x0003a478) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc914,	// (0x0003a478) list_single_graphic_hl_pane_g3_cp2

0x53db,	// (0x00032f3f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x53db,	// (0x00032f3f) list_single_graphic_hl_pane_g4_cp2

0xc922,	// (0x0003a486) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc922,	// (0x0003a486) list_single_graphic_hl_pane_g5_cp2

0xa37f,	// (0x00037ee3) control_pane_g4_ParamLimits

0xa37f,	// (0x00037ee3) control_pane_g4

0x4bb4,	// (0x00032718) bg_popup_sub_pane_cp10_ParamLimits

0x77a0,	// (0x00035304) list_choice_list_pane_ParamLimits

0x77af,	// (0x00035313) scroll_pane_cp23

0x4412,	// (0x00031f76) bg_popup_preview_window_pane_cp02_ParamLimits

0x7cde,	// (0x00035842) list_preview_fixed_pane_ParamLimits

0x7cf4,	// (0x00035858) list_preview_fixed_pane_cp_ParamLimits

0x7cf4,	// (0x00035858) list_preview_fixed_pane_cp

0x7d00,	// (0x00035864) popup_preview_fixed_window_g1_ParamLimits

0x7d00,	// (0x00035864) popup_preview_fixed_window_g1

0x7d0c,	// (0x00035870) popup_preview_fixed_window_g2_ParamLimits

0x7d0c,	// (0x00035870) popup_preview_fixed_window_g2

0x0002,

0xfb85,	// (0x0003d6e9) popup_preview_fixed_window_g_ParamLimits

0xfb85,	// (0x0003d6e9) popup_preview_fixed_window_g

0x9d69,	// (0x000378cd) aid_navi_side_left_pane_ParamLimits

0x9d7e,	// (0x000378e2) aid_navi_side_right_pane_ParamLimits

0x9d96,	// (0x000378fa) navi_icon_pane_stacon_ParamLimits

0x9daa,	// (0x0003790e) navi_navi_pane_stacon_ParamLimits

0x9d96,	// (0x000378fa) navi_text_pane_stacon_ParamLimits

0x426f,	// (0x00031dd3) main_text_info_pane

0xc94c,	// (0x0003a4b0) listscroll_text_info_pane

0xc954,	// (0x0003a4b8) list_text_info_pane_ParamLimits

0xc954,	// (0x0003a4b8) list_text_info_pane

0xc963,	// (0x0003a4c7) scroll_pane_cp24_ParamLimits

0xc963,	// (0x0003a4c7) scroll_pane_cp24

0xc981,	// (0x0003a4e5) list_text_info_pane_t1_ParamLimits

0xc981,	// (0x0003a4e5) list_text_info_pane_t1

0xb6f1,	// (0x00039255) popup_fast_swap2_window_ParamLimits

0xb6f1,	// (0x00039255) popup_fast_swap2_window

0xc9ba,	// (0x0003a51e) aid_size_cell_fast2

0x426f,	// (0x00031dd3) bg_popup_window_pane_cp17

0x5d83,	// (0x000338e7) heading_pane_cp2

0x472f,	// (0x00032293) listscroll_fast2_pane

0xc9c4,	// (0x0003a528) grid_fast2_pane

0xc9ce,	// (0x0003a532) listscroll_fast2_pane_g1

0xc9d6,	// (0x0003a53a) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0003d765) listscroll_fast2_pane_g

0x4b7c,	// (0x000326e0) scroll_pane_cp26

0xc9e0,	// (0x0003a544) cell_fast2_pane_ParamLimits

0xc9e0,	// (0x0003a544) cell_fast2_pane

0xc9f5,	// (0x0003a559) cell_fast2_pane_g1

0xc9fe,	// (0x0003a562) cell_fast2_pane_g2

0xca07,	// (0x0003a56b) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0003d76a) cell_fast2_pane_g

0x47c3,	// (0x00032327) grid_highlight_pane_cp9

0x47d8,	// (0x0003233c) main_eswt_pane_ParamLimits

0x47d8,	// (0x0003233c) main_eswt_pane

0xc978,	// (0x0003a4dc) list_single_text_info_pane

0xca0f,	// (0x0003a573) eswt_ctrl_button_pane

0xca0f,	// (0x0003a573) eswt_ctrl_canvas_pane

0xca17,	// (0x0003a57b) eswt_ctrl_combo_pane

0xca0f,	// (0x0003a573) eswt_ctrl_default_pane

0xca0f,	// (0x0003a573) eswt_ctrl_label_pane

0xca1f,	// (0x0003a583) eswt_ctrl_wait_pane

0xca27,	// (0x0003a58b) eswt_shell_pane

0x426f,	// (0x00031dd3) listscroll_eswt_app_pane

0xca47,	// (0x0003a5ab) popup_eswt_tasktip_window_ParamLimits

0xca47,	// (0x0003a5ab) popup_eswt_tasktip_window

0x5adc,	// (0x00033640) bg_popup_window_pane_cp18

0xca58,	// (0x0003a5bc) eswt_control_pane_g1_ParamLimits

0xca58,	// (0x0003a5bc) eswt_control_pane_g1

0xca65,	// (0x0003a5c9) eswt_control_pane_g2_ParamLimits

0xca65,	// (0x0003a5c9) eswt_control_pane_g2

0xca72,	// (0x0003a5d6) eswt_control_pane_g3_ParamLimits

0xca72,	// (0x0003a5d6) eswt_control_pane_g3

0xca7f,	// (0x0003a5e3) eswt_control_pane_g4_ParamLimits

0xca7f,	// (0x0003a5e3) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0003d771) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0003d771) eswt_control_pane_g

0x4a5d,	// (0x000325c1) bg_button_pane_ParamLimits

0x4a5d,	// (0x000325c1) bg_button_pane

0x47d8,	// (0x0003233c) common_borders_pane_copy2_ParamLimits

0x47d8,	// (0x0003233c) common_borders_pane_copy2

0xca8c,	// (0x0003a5f0) control_button_pane_g1_ParamLimits

0xca8c,	// (0x0003a5f0) control_button_pane_g1

0xca98,	// (0x0003a5fc) control_button_pane_g2_ParamLimits

0xca98,	// (0x0003a5fc) control_button_pane_g2

0xcaa4,	// (0x0003a608) control_button_pane_g3_ParamLimits

0xcaa4,	// (0x0003a608) control_button_pane_g3

0x0002,

0xfc16,	// (0x0003d77a) control_button_pane_g_ParamLimits

0xfc16,	// (0x0003d77a) control_button_pane_g

0xcab8,	// (0x0003a61c) control_button_pane_t1

0xcac6,	// (0x0003a62a) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0003d781) control_button_pane_t

0x59ec,	// (0x00033550) bg_button_pane_g1

0x59fc,	// (0x00033560) bg_button_pane_g2

0x59f4,	// (0x00033558) bg_button_pane_g3

0x5a0c,	// (0x00033570) bg_button_pane_g4

0x5a04,	// (0x00033568) bg_button_pane_g5

0x5a14,	// (0x00033578) bg_button_pane_g6

0x5a1c,	// (0x00033580) bg_button_pane_g7

0x5a2c,	// (0x00033590) bg_button_pane_g8

0x5a24,	// (0x00033588) bg_button_pane_g9

0x0008,

0xf87c,	// (0x0003d3e0) bg_button_pane_g

0x775b,	// (0x000352bf) common_borders_pane_ParamLimits

0x775b,	// (0x000352bf) common_borders_pane

0xca58,	// (0x0003a5bc) eswt_control_pane_g1_copy1_ParamLimits

0xca58,	// (0x0003a5bc) eswt_control_pane_g1_copy1

0xca65,	// (0x0003a5c9) eswt_control_pane_g2_copy1_ParamLimits

0xca65,	// (0x0003a5c9) eswt_control_pane_g2_copy1

0xca72,	// (0x0003a5d6) eswt_control_pane_g3_copy1_ParamLimits

0xca72,	// (0x0003a5d6) eswt_control_pane_g3_copy1

0xca7f,	// (0x0003a5e3) eswt_control_pane_g4_copy1_ParamLimits

0xca7f,	// (0x0003a5e3) eswt_control_pane_g4_copy1

0x7796,	// (0x000352fa) bg_eswt_ctrl_canvas_pane_g1

0x775b,	// (0x000352bf) common_borders_pane_cp2_ParamLimits

0x775b,	// (0x000352bf) common_borders_pane_cp2

0x775b,	// (0x000352bf) common_borders_pane_cp3_ParamLimits

0x775b,	// (0x000352bf) common_borders_pane_cp3

0xcad4,	// (0x0003a638) separator_horizontal_pane

0xcadc,	// (0x0003a640) separator_vertical_pane

0xca58,	// (0x0003a5bc) eswt_control_pane_g1_copy2_ParamLimits

0xca58,	// (0x0003a5bc) eswt_control_pane_g1_copy2

0xca65,	// (0x0003a5c9) eswt_control_pane_g2_copy2_ParamLimits

0xca65,	// (0x0003a5c9) eswt_control_pane_g2_copy2

0xca72,	// (0x0003a5d6) eswt_control_pane_g3_copy2_ParamLimits

0xca72,	// (0x0003a5d6) eswt_control_pane_g3_copy2

0xca7f,	// (0x0003a5e3) eswt_control_pane_g4_copy2_ParamLimits

0xca7f,	// (0x0003a5e3) eswt_control_pane_g4_copy2

0x426f,	// (0x00031dd3) common_borders_pane_cp4

0xcae5,	// (0x0003a649) separator_horizontal_pane_g1

0xcaee,	// (0x0003a652) separator_horizontal_pane_g2

0xcaf7,	// (0x0003a65b) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0003d786) separator_horizontal_pane_g

0xca58,	// (0x0003a5bc) eswt_control_pane_g1_copy3_ParamLimits

0xca58,	// (0x0003a5bc) eswt_control_pane_g1_copy3

0xca65,	// (0x0003a5c9) eswt_control_pane_g2_copy3_ParamLimits

0xca65,	// (0x0003a5c9) eswt_control_pane_g2_copy3

0xca72,	// (0x0003a5d6) eswt_control_pane_g3_copy3_ParamLimits

0xca72,	// (0x0003a5d6) eswt_control_pane_g3_copy3

0xca7f,	// (0x0003a5e3) eswt_control_pane_g4_copy3_ParamLimits

0xca7f,	// (0x0003a5e3) eswt_control_pane_g4_copy3

0x426f,	// (0x00031dd3) common_borders_pane_cp5

0xcb00,	// (0x0003a664) separator_vertical_pane_g1

0xcb09,	// (0x0003a66d) separator_vertical_pane_g2

0xcb12,	// (0x0003a676) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0003d78d) separator_vertical_pane_g

0xca58,	// (0x0003a5bc) eswt_control_pane_g1_copy4_ParamLimits

0xca58,	// (0x0003a5bc) eswt_control_pane_g1_copy4

0xca65,	// (0x0003a5c9) eswt_control_pane_g2_copy4_ParamLimits

0xca65,	// (0x0003a5c9) eswt_control_pane_g2_copy4

0xca72,	// (0x0003a5d6) eswt_control_pane_g3_copy4_ParamLimits

0xca72,	// (0x0003a5d6) eswt_control_pane_g3_copy4

0xca7f,	// (0x0003a5e3) eswt_control_pane_g4_copy4_ParamLimits

0xca7f,	// (0x0003a5e3) eswt_control_pane_g4_copy4

0xcb1b,	// (0x0003a67f) eswt_ctrl_combo_button_pane

0xcb23,	// (0x0003a687) eswt_ctrl_input_pane

0xcb2b,	// (0x0003a68f) popup_choice_list_window_cp70

0xcb33,	// (0x0003a697) eswt_ctrl_input_pane_t1

0x426f,	// (0x00031dd3) input_focus_pane_cp70

0x775b,	// (0x000352bf) bg_button_pane_cp70_ParamLimits

0x775b,	// (0x000352bf) bg_button_pane_cp70

0xcb41,	// (0x0003a6a5) eswt_ctrl_combo_button_pane_g1

0xcb49,	// (0x0003a6ad) wait_bar_pane_cp70

0x5adc,	// (0x00033640) bg_popup_window_pane_cp70_ParamLimits

0x5adc,	// (0x00033640) bg_popup_window_pane_cp70

0xcb51,	// (0x0003a6b5) popup_eswt_tasktip_window_t1

0xcb67,	// (0x0003a6cb) wait_bar_pane_cp71_ParamLimits

0xcb67,	// (0x0003a6cb) wait_bar_pane_cp71

0xcb73,	// (0x0003a6d7) grid_eswt_app_pane

0x4dcb,	// (0x0003292f) scroll_pane_cp70

0xcb7c,	// (0x0003a6e0) cell_eswt_app_pane_ParamLimits

0xcb7c,	// (0x0003a6e0) cell_eswt_app_pane

0xcbb0,	// (0x0003a714) cell_eswt_app_pane_g1_ParamLimits

0xcbb0,	// (0x0003a714) cell_eswt_app_pane_g1

0xcbdf,	// (0x0003a743) cell_eswt_app_pane_g2_ParamLimits

0xcbdf,	// (0x0003a743) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0003d794) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0003d794) cell_eswt_app_pane_g

0xcc08,	// (0x0003a76c) cell_eswt_app_pane_t1_ParamLimits

0xcc08,	// (0x0003a76c) cell_eswt_app_pane_t1

0xcc3a,	// (0x0003a79e) grid_highlight_pane_cp70_ParamLimits

0xcc3a,	// (0x0003a79e) grid_highlight_pane_cp70

0x5377,	// (0x00032edb) set_content_pane_g1

0x567b,	// (0x000331df) status_small_volume_pane

0xad79,	// (0x000388dd) status_small_volume_pane_g1

0xad81,	// (0x000388e5) volume_small2_pane

0xad8a,	// (0x000388ee) volume_small2_pane_g1

0xad93,	// (0x000388f7) volume_small2_pane_g2

0xad9c,	// (0x00038900) volume_small2_pane_g3

0xada5,	// (0x00038909) volume_small2_pane_g4

0xadae,	// (0x00038912) volume_small2_pane_g5

0xadb7,	// (0x0003891b) volume_small2_pane_g6

0xadc0,	// (0x00038924) volume_small2_pane_g7

0xadc9,	// (0x0003892d) volume_small2_pane_g8

0xadd2,	// (0x00038936) volume_small2_pane_g9

0xaddb,	// (0x0003893f) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0003d799) volume_small2_pane_g

0x7b38,	// (0x0003569c) fep_vkb_top_text_pane_g1_ParamLimits

0xc739,	// (0x0003a29d) fep_vkb_top_text_pane_t1_ParamLimits

0x7d18,	// (0x0003587c) popup_preview_fixed_window_g3_ParamLimits

0x7d18,	// (0x0003587c) popup_preview_fixed_window_g3

0xbaf3,	// (0x00039657) popup_toolbar_trans_pane

0xc171,	// (0x00039cd5) aid_height_set_list_ParamLimits

0x618a,	// (0x00033cee) aid_size_parent_ParamLimits

0x4bb4,	// (0x00032718) list_highlight_pane_cp2_ParamLimits

0x5377,	// (0x00032edb) set_content_pane_g1_ParamLimits

0x8ec8,	// (0x00036a2c) list_single_image_pane_ParamLimits

0x8ec8,	// (0x00036a2c) list_single_image_pane

0xcc46,	// (0x0003a7aa) aid_size_cell_image_ParamLimits

0xcc46,	// (0x0003a7aa) aid_size_cell_image

0xcc53,	// (0x0003a7b7) grid_single_image_pane_ParamLimits

0xcc53,	// (0x0003a7b7) grid_single_image_pane

0x4a77,	// (0x000325db) list_single_image_pane_g1_ParamLimits

0x4a77,	// (0x000325db) list_single_image_pane_g1

0x4a83,	// (0x000325e7) list_single_image_pane_g2_ParamLimits

0x4a83,	// (0x000325e7) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0003d7ae) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0003d7ae) list_single_image_pane_g

0xcc5f,	// (0x0003a7c3) list_single_image_pane_t1_ParamLimits

0xcc5f,	// (0x0003a7c3) list_single_image_pane_t1

0xcc75,	// (0x0003a7d9) cell_image_list_pane_ParamLimits

0xcc75,	// (0x0003a7d9) cell_image_list_pane

0xcc89,	// (0x0003a7ed) cell_image_list_pane_g1

0xcc92,	// (0x0003a7f6) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0003d7b3) cell_image_list_pane_g

0xcc9b,	// (0x0003a7ff) aid_size_cell_tb_trans_pane

0x4a5d,	// (0x000325c1) bg_tb_trans_pane

0xccad,	// (0x0003a811) grid_tb_trans_pane

0x59ec,	// (0x00033550) bg_tb_trans_pane_g1

0x59fc,	// (0x00033560) bg_tb_trans_pane_g2

0x59f4,	// (0x00033558) bg_tb_trans_pane_g3

0x5a0c,	// (0x00033570) bg_tb_trans_pane_g4

0x5a04,	// (0x00033568) bg_tb_trans_pane_g5

0x5a2c,	// (0x00033590) bg_tb_trans_pane_g6

0x5a24,	// (0x00033588) bg_tb_trans_pane_g7

0x5a14,	// (0x00033578) bg_tb_trans_pane_g8

0x5a1c,	// (0x00033580) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0003d7b8) bg_tb_trans_pane_g

0xccc1,	// (0x0003a825) cell_toolbar_trans_pane_ParamLimits

0xccc1,	// (0x0003a825) cell_toolbar_trans_pane

0x7796,	// (0x000352fa) cell_toolbar_trans_pane_g1

0xc513,	// (0x0003a077) list_form2_midp_pane_t1

0xc521,	// (0x0003a085) list_form2_midp_pane_t2

0x0001,

0xfafd,	// (0x0003d661) list_form2_midp_pane_t

0x74f3,	// (0x00035057) scroll_pane_cp51_ParamLimits

0x7669,	// (0x000351cd) form2_midp_wait_pane_g1

0x7672,	// (0x000351d6) form2_midp_wait_pane_g2

0x767b,	// (0x000351df) form2_midp_wait_pane_g3

0x0002,

0xfb12,	// (0x0003d676) form2_midp_wait_pane_g

0x42df,	// (0x00031e43) list_highlight_pane_cp21_ParamLimits

0x769b,	// (0x000351ff) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x76aa,	// (0x0003520e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa848,	// (0x000383ac) list_single_2graphic_im_pane_ParamLimits

0xa848,	// (0x000383ac) list_single_2graphic_im_pane

0xcce7,	// (0x0003a84b) list_single_2graphic_im_pane_g1_ParamLimits

0xcce7,	// (0x0003a84b) list_single_2graphic_im_pane_g1

0xccf8,	// (0x0003a85c) list_single_2graphic_im_pane_g2_ParamLimits

0xccf8,	// (0x0003a85c) list_single_2graphic_im_pane_g2

0xcd04,	// (0x0003a868) list_single_2graphic_im_pane_g3_ParamLimits

0xcd04,	// (0x0003a868) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0003d7cb) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0003d7cb) list_single_2graphic_im_pane_g

0xcd24,	// (0x0003a888) list_single_2graphic_im_pane_t1_ParamLimits

0xcd24,	// (0x0003a888) list_single_2graphic_im_pane_t1

0x7d24,	// (0x00035888) list_single_graphic_2heading_pane_fp_ParamLimits

0x7d24,	// (0x00035888) list_single_graphic_2heading_pane_fp

0x9105,	// (0x00036c69) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9105,	// (0x00036c69) list_single_graphic_2heading_pane_fp_g1

0x7d3b,	// (0x0003589f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7d3b,	// (0x0003589f) list_single_graphic_2heading_pane_fp_g2

0x9b71,	// (0x000376d5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x9b71,	// (0x000376d5) list_single_graphic_2heading_pane_fp_g3

0x90da,	// (0x00036c3e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x90da,	// (0x00036c3e) list_single_graphic_2heading_pane_fp_g4

0x7d47,	// (0x000358ab) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7d47,	// (0x000358ab) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb95,	// (0x0003d6f9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003d6f9) list_single_graphic_2heading_pane_fp_g

0x92bc,	// (0x00036e20) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x92bc,	// (0x00036e20) list_single_graphic_2heading_pane_fp_t1

0x913d,	// (0x00036ca1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x913d,	// (0x00036ca1) list_single_graphic_2heading_pane_fp_t2

0x92d2,	// (0x00036e36) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x92d2,	// (0x00036e36) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0003d7d4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0003d7d4) list_single_graphic_2heading_pane_fp_t

0x7836,	// (0x0003539a) fep_hwr_write_pane_g5_ParamLimits

0x7836,	// (0x0003539a) fep_hwr_write_pane_g5

0x7842,	// (0x000353a6) fep_hwr_write_pane_g6_ParamLimits

0x7842,	// (0x000353a6) fep_hwr_write_pane_g6

0xca27,	// (0x0003a58b) eswt_shell_pane_ParamLimits

0x5adc,	// (0x00033640) bg_popup_window_pane_cp18_ParamLimits

0x6ac8,	// (0x0003462c) heading_pane_cp70

0xcb51,	// (0x0003a6b5) popup_eswt_tasktip_window_t1_ParamLimits

0xbba0,	// (0x00039704) aid_touch_tab_arrow_left

0xbbaf,	// (0x00039713) aid_touch_tab_arrow_right

0x9801,	// (0x00037365) title_pane_g3_ParamLimits

0x9801,	// (0x00037365) title_pane_g3

0x4a1c,	// (0x00032580) set_value_pane_g1

0xbaf3,	// (0x00039657) popup_toolbar_trans_pane_ParamLimits

0xcc9b,	// (0x0003a7ff) aid_size_cell_tb_trans_pane_ParamLimits

0x4a5d,	// (0x000325c1) bg_tb_trans_pane_ParamLimits

0xccad,	// (0x0003a811) grid_tb_trans_pane_ParamLimits

0x4412,	// (0x00031f76) cont_note_pane_ParamLimits

0x4412,	// (0x00031f76) cont_note_pane

0x47d8,	// (0x0003233c) cont_snote2_single_text_pane_ParamLimits

0x47d8,	// (0x0003233c) cont_snote2_single_text_pane

0x47d8,	// (0x0003233c) cont_snote2_single_graphic_pane_ParamLimits

0x47d8,	// (0x0003233c) cont_snote2_single_graphic_pane

0x5f99,	// (0x00033afd) cont_note_wait_pane_ParamLimits

0x5f99,	// (0x00033afd) cont_note_wait_pane

0x5f99,	// (0x00033afd) cont_note_image_pane_ParamLimits

0x5f99,	// (0x00033afd) cont_note_image_pane

0xcd55,	// (0x0003a8b9) popup_note2_window_g1_ParamLimits

0xcd55,	// (0x0003a8b9) popup_note2_window_g1

0xcd86,	// (0x0003a8ea) popup_note2_window_t1_ParamLimits

0xcd86,	// (0x0003a8ea) popup_note2_window_t1

0xcdcb,	// (0x0003a92f) popup_note2_window_t2_ParamLimits

0xcdcb,	// (0x0003a92f) popup_note2_window_t2

0xce10,	// (0x0003a974) popup_note2_window_t3_ParamLimits

0xce10,	// (0x0003a974) popup_note2_window_t3

0xce55,	// (0x0003a9b9) popup_note2_window_t4_ParamLimits

0xce55,	// (0x0003a9b9) popup_note2_window_t4

0x45c1,	// (0x00032125) popup_note2_window_t5_ParamLimits

0x45c1,	// (0x00032125) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0003d7e0) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0003d7e0) popup_note2_window_t

0xce84,	// (0x0003a9e8) popup_note2_image_window_g1_ParamLimits

0xce84,	// (0x0003a9e8) popup_note2_image_window_g1

0xce90,	// (0x0003a9f4) popup_note2_image_window_g2_ParamLimits

0xce90,	// (0x0003a9f4) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0003d7eb) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0003d7eb) popup_note2_image_window_g

0xcea2,	// (0x0003aa06) popup_note2_image_window_t1_ParamLimits

0xcea2,	// (0x0003aa06) popup_note2_image_window_t1

0xceba,	// (0x0003aa1e) popup_note2_image_window_t2_ParamLimits

0xceba,	// (0x0003aa1e) popup_note2_image_window_t2

0xced2,	// (0x0003aa36) popup_note2_image_window_t3_ParamLimits

0xced2,	// (0x0003aa36) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0003d7f0) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0003d7f0) popup_note2_image_window_t

0x5fa7,	// (0x00033b0b) popup_note2_wait_window_g1_ParamLimits

0x5fa7,	// (0x00033b0b) popup_note2_wait_window_g1

0x5fb3,	// (0x00033b17) popup_note2_wait_window_g2_ParamLimits

0x5fb3,	// (0x00033b17) popup_note2_wait_window_g2

0x5fbf,	// (0x00033b23) popup_note2_wait_window_g3_ParamLimits

0x5fbf,	// (0x00033b23) popup_note2_wait_window_g3

0x0002,

0xf85e,	// (0x0003d3c2) popup_note2_wait_window_g_ParamLimits

0xf85e,	// (0x0003d3c2) popup_note2_wait_window_g

0xceee,	// (0x0003aa52) popup_note2_wait_window_t1_ParamLimits

0xceee,	// (0x0003aa52) popup_note2_wait_window_t1

0xcf0c,	// (0x0003aa70) popup_note2_wait_window_t2_ParamLimits

0xcf0c,	// (0x0003aa70) popup_note2_wait_window_t2

0xcf2a,	// (0x0003aa8e) popup_note2_wait_window_t3_ParamLimits

0xcf2a,	// (0x0003aa8e) popup_note2_wait_window_t3

0xcf3c,	// (0x0003aaa0) popup_note2_wait_window_t4_ParamLimits

0xcf3c,	// (0x0003aaa0) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0003d7f7) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0003d7f7) popup_note2_wait_window_t

0xcf4e,	// (0x0003aab2) wait_bar2_pane_ParamLimits

0xcf4e,	// (0x0003aab2) wait_bar2_pane

0xcf66,	// (0x0003aaca) popup_snote2_single_text_window_g1_ParamLimits

0xcf66,	// (0x0003aaca) popup_snote2_single_text_window_g1

0xcf8e,	// (0x0003aaf2) popup_snote2_single_text_window_t1_ParamLimits

0xcf8e,	// (0x0003aaf2) popup_snote2_single_text_window_t1

0xcfda,	// (0x0003ab3e) popup_snote2_single_text_window_t2_ParamLimits

0xcfda,	// (0x0003ab3e) popup_snote2_single_text_window_t2

0xd026,	// (0x0003ab8a) popup_snote2_single_text_window_t3_ParamLimits

0xd026,	// (0x0003ab8a) popup_snote2_single_text_window_t3

0xd067,	// (0x0003abcb) popup_snote2_single_text_window_t4_ParamLimits

0xd067,	// (0x0003abcb) popup_snote2_single_text_window_t4

0xd09d,	// (0x0003ac01) popup_snote2_single_text_window_t5_ParamLimits

0xd09d,	// (0x0003ac01) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0003d800) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0003d800) popup_snote2_single_text_window_t

0xd0c8,	// (0x0003ac2c) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0c8,	// (0x0003ac2c) popup_snote2_single_graphic_window_g1

0xd0f0,	// (0x0003ac54) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0f0,	// (0x0003ac54) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0003d80b) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0003d80b) popup_snote2_single_graphic_window_g

0xd118,	// (0x0003ac7c) popup_snote2_single_graphic_window_t1_ParamLimits

0xd118,	// (0x0003ac7c) popup_snote2_single_graphic_window_t1

0xd164,	// (0x0003acc8) popup_snote2_single_graphic_window_t2_ParamLimits

0xd164,	// (0x0003acc8) popup_snote2_single_graphic_window_t2

0xd026,	// (0x0003ab8a) popup_snote2_single_graphic_window_t3_ParamLimits

0xd026,	// (0x0003ab8a) popup_snote2_single_graphic_window_t3

0xd067,	// (0x0003abcb) popup_snote2_single_graphic_window_t4_ParamLimits

0xd067,	// (0x0003abcb) popup_snote2_single_graphic_window_t4

0xd09d,	// (0x0003ac01) popup_snote2_single_graphic_window_t5_ParamLimits

0xd09d,	// (0x0003ac01) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0003d810) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0003d810) popup_snote2_single_graphic_window_t

0x74a3,	// (0x00035007) clock_nsta_pane_cp2_t1

0x74a3,	// (0x00035007) clock_nsta_pane_cp2_t2

0x0001,

0xfad3,	// (0x0003d637) clock_nsta_pane_cp2_t

0x8b2a,	// (0x0003668e) form_field_data_wide_pane_g1_ParamLimits

0x4a77,	// (0x000325db) form_field_data_wide_pane_g2_ParamLimits

0x4a77,	// (0x000325db) form_field_data_wide_pane_g2

0x4a83,	// (0x000325e7) form_field_data_wide_pane_g3_ParamLimits

0x4a83,	// (0x000325e7) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x0003d200) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x0003d200) form_field_data_wide_pane_g

0xc3da,	// (0x00039f3e) grid_touch_3_pane_ParamLimits

0xc3da,	// (0x00039f3e) grid_touch_3_pane

0xd1b0,	// (0x0003ad14) cell_touch_3_pane_ParamLimits

0xd1b0,	// (0x0003ad14) cell_touch_3_pane

0x7796,	// (0x000352fa) cell_touch_3_pane_g1

0x7796,	// (0x000352fa) cell_touch_3_pane_g2

0x0001,

0xfb58,	// (0x0003d6bc) cell_touch_3_pane_g

0x45f3,	// (0x00032157) cont_query_data_pane

0x45fb,	// (0x0003215f) cont_query_data_pane_cp1

0xd1df,	// (0x0003ad43) button_value_adjust_pane_cp7

0xd1e7,	// (0x0003ad4b) query_popup_pane_cp3

0x4ff1,	// (0x00032b55) bg_popup_sub_pane_cp22_ParamLimits

0x9f95,	// (0x00037af9) navi_navi_volume_pane_cp2

0x9fb0,	// (0x00037b14) popup_side_volume_key_window_g2

0x9fbf,	// (0x00037b23) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0003d292) popup_side_volume_key_window_g

0x9fdc,	// (0x00037b40) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0003d299) popup_side_volume_key_window_t

0x5241,	// (0x00032da5) popup_side_volume_key_window_ParamLimits

0x8784,	// (0x000362e8) list_double_graphic_pane_g4_ParamLimits

0x8784,	// (0x000362e8) list_double_graphic_pane_g4

0xa893,	// (0x000383f7) list_single_2heading_msg_pane_ParamLimits

0xa893,	// (0x000383f7) list_single_2heading_msg_pane

0xade4,	// (0x00038948) list_single_2heading_msg_pane_g1_ParamLimits

0xade4,	// (0x00038948) list_single_2heading_msg_pane_g1

0xadf0,	// (0x00038954) list_single_2heading_msg_pane_g2_ParamLimits

0xadf0,	// (0x00038954) list_single_2heading_msg_pane_g2

0xadfc,	// (0x00038960) list_single_2heading_msg_pane_g3_ParamLimits

0xadfc,	// (0x00038960) list_single_2heading_msg_pane_g3

0xae08,	// (0x0003896c) list_single_2heading_msg_pane_g4_ParamLimits

0xae08,	// (0x0003896c) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0003d81b) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0003d81b) list_single_2heading_msg_pane_g

0x92f2,	// (0x00036e56) list_single_2heading_msg_pane_t1_ParamLimits

0x92f2,	// (0x00036e56) list_single_2heading_msg_pane_t1

0x931a,	// (0x00036e7e) list_single_2heading_msg_pane_t2_ParamLimits

0x931a,	// (0x00036e7e) list_single_2heading_msg_pane_t2

0x934e,	// (0x00036eb2) list_single_2heading_msg_pane_t3_ParamLimits

0x934e,	// (0x00036eb2) list_single_2heading_msg_pane_t3

0x9387,	// (0x00036eeb) list_single_2heading_msg_pane_t4_ParamLimits

0x9387,	// (0x00036eeb) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0003d824) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0003d824) list_single_2heading_msg_pane_t

0x428d,	// (0x00031df1) title_pane_g4_ParamLimits

0x428d,	// (0x00031df1) title_pane_g4

0x9cb9,	// (0x0003781d) title_pane_stacon_g3_ParamLimits

0x9cb9,	// (0x0003781d) title_pane_stacon_g3

0xcd18,	// (0x0003a87c) list_single_2graphic_im_pane_g4_ParamLimits

0xcd18,	// (0x0003a87c) list_single_2graphic_im_pane_g4

0x68ec,	// (0x00034450) popup_side_volume_key_window_cp

0x6dc4,	// (0x00034928) main_idle_act2_pane_t1

0xa4f9,	// (0x0003805d) toolbar_button_pane_g10

0x9af6,	// (0x0003765a) popup_toolbar_window_cp1

0x7494,	// (0x00034ff8) clock_nsta_pane_cp_t1

0x7494,	// (0x00034ff8) clock_nsta_pane_cp_t2

0x0001,

0xface,	// (0x0003d632) clock_nsta_pane_cp_t

0x9f95,	// (0x00037af9) navi_navi_volume_pane_cp2_ParamLimits

0x9fa4,	// (0x00037b08) popup_side_volume_key_window_g1_ParamLimits

0x9fb0,	// (0x00037b14) popup_side_volume_key_window_g2_ParamLimits

0x9fbf,	// (0x00037b23) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0003d292) popup_side_volume_key_window_g_ParamLimits

0xaaa4,	// (0x00038608) fep_hwr_aid_pane

0x1083,	// (0x0002ebe7) bg_fep_hwr_top_pane_g4_ParamLimits

0x7818,	// (0x0003537c) fep_hwr_top_pane_g1_ParamLimits

0x7806,	// (0x0003536a) fep_hwr_top_pane_g2_ParamLimits

0xab5d,	// (0x000386c1) fep_hwr_top_pane_g3_ParamLimits

0xfb23,	// (0x0003d687) fep_hwr_top_pane_g_ParamLimits

0xab72,	// (0x000386d6) fep_hwr_top_text_pane_ParamLimits

0x66ea,	// (0x0003424e) aid_touch_tab_arrow_arrow_2

0x66e1,	// (0x00034245) aid_touch_tab_arrow_left_2

0xaab8,	// (0x0003861c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xaaef,	// (0x00038653) fep_hwr_prediction_pane

0x796d,	// (0x000354d1) fep_vkb_prediction_pane

0xc716,	// (0x0003a27a) fep_vkb_side_pane_g3_ParamLimits

0xc716,	// (0x0003a27a) fep_vkb_side_pane_g3

0x7a1d,	// (0x00035581) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc803,	// (0x0003a367) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc810,	// (0x0003a374) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcd,	// (0x0003d731) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd20c,	// (0x0003ad70) fep_hwr_prediction_pane_g1

0xae20,	// (0x00038984) fep_hwr_prediction_pane_g2

0xae28,	// (0x0003898c) fep_hwr_prediction_pane_g3

0xae30,	// (0x00038994) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0003d82d) fep_hwr_prediction_pane_g

0xd20c,	// (0x0003ad70) fep_vkb_prediction_pane_g1

0xd216,	// (0x0003ad7a) fep_vkb_prediction_pane_g2

0xd21e,	// (0x0003ad82) fep_vkb_prediction_pane_g3

0xd226,	// (0x0003ad8a) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0003d836) fep_vkb_prediction_pane_g

0xa7d1,	// (0x00038335) slider_set_pane_g3

0xa7e5,	// (0x00038349) slider_set_pane_g4

0xa7fd,	// (0x00038361) slider_set_pane_g5

0xa7d1,	// (0x00038335) slider_set_pane_g6

0xa813,	// (0x00038377) slider_set_pane_g7

0x6b59,	// (0x000346bd) slider_form_pane_g3

0x6b62,	// (0x000346c6) slider_form_pane_g4

0x6b6a,	// (0x000346ce) slider_form_pane_g5

0x6b59,	// (0x000346bd) slider_form_pane_g6

0xc2c4,	// (0x00039e28) slider_form_pane_g7

0x7062,	// (0x00034bc6) slider_set_pane_vc_g3

0x706b,	// (0x00034bcf) slider_set_pane_vc_g4

0x7074,	// (0x00034bd8) slider_set_pane_vc_g5

0x7062,	// (0x00034bc6) slider_set_pane_vc_g6

0x707d,	// (0x00034be1) slider_set_pane_vc_g7

0x7062,	// (0x00034bc6) slider_form_pane_vc_g1

0x706b,	// (0x00034bcf) slider_form_pane_vc_g2

0x7074,	// (0x00034bd8) slider_form_pane_vc_g3

0x7062,	// (0x00034bc6) slider_form_pane_vc_g4

0x720c,	// (0x00034d70) slider_form_pane_vc_g5

0x0004,

0xfaa7,	// (0x0003d60b) slider_form_pane_vc_g

0x426f,	// (0x00031dd3) main_idle_act3_pane

0xd22e,	// (0x0003ad92) ai3_links_pane

0xd237,	// (0x0003ad9b) popup_ai3_data_window_ParamLimits

0xd237,	// (0x0003ad9b) popup_ai3_data_window

0x426f,	// (0x00031dd3) grid_ai3_links_pane

0xd24f,	// (0x0003adb3) cell_ai3_links_pane_ParamLimits

0xd24f,	// (0x0003adb3) cell_ai3_links_pane

0xd267,	// (0x0003adcb) bg_popup_sub_pane_cp11

0xd274,	// (0x0003add8) cell_ai3_links_pane_g1

0x426f,	// (0x00031dd3) bg_popup_sub_pane_cp12

0xd299,	// (0x0003adfd) heading_ai3_data_pane

0xd2a1,	// (0x0003ae05) list_ai3_gene_pane

0xd2ad,	// (0x0003ae11) popup_ai3_data_window_g1

0xd2b5,	// (0x0003ae19) heading_ai3_data_pane_g1

0xd2bd,	// (0x0003ae21) heading_ai3_data_pane_t1

0xd2cb,	// (0x0003ae2f) list_double_ai3_gene_pane_ParamLimits

0xd2cb,	// (0x0003ae2f) list_double_ai3_gene_pane

0xd2d8,	// (0x0003ae3c) list_single_ai3_gene_pane_ParamLimits

0xd2d8,	// (0x0003ae3c) list_single_ai3_gene_pane

0x775b,	// (0x000352bf) list_highlight_pane_cp7_ParamLimits

0x775b,	// (0x000352bf) list_highlight_pane_cp7

0xd2e5,	// (0x0003ae49) list_single_a13_gene_pane_t1_ParamLimits

0xd2e5,	// (0x0003ae49) list_single_a13_gene_pane_t1

0xd2fc,	// (0x0003ae60) list_single_ai3_gene_pane_g1

0xd305,	// (0x0003ae69) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0003d83f) list_single_ai3_gene_pane_g

0xd30d,	// (0x0003ae71) list_double_ai3_gene_pane_g1_ParamLimits

0xd30d,	// (0x0003ae71) list_double_ai3_gene_pane_g1

0xd319,	// (0x0003ae7d) list_double_ai3_gene_pane_t1_ParamLimits

0xd319,	// (0x0003ae7d) list_double_ai3_gene_pane_t1

0xd335,	// (0x0003ae99) list_double_ai3_gene_pane_t2_ParamLimits

0xd335,	// (0x0003ae99) list_double_ai3_gene_pane_t2

0xd34a,	// (0x0003aeae) list_double_ai3_gene_pane_t3_ParamLimits

0xd34a,	// (0x0003aeae) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0003d844) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0003d844) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x92e8,	// (0x00036e4c) aid_size_min_col_2

0xd1f8,	// (0x0003ad5c) aid_size_min_msg_ParamLimits

0xd1f8,	// (0x0003ad5c) aid_size_min_msg

0xc72a,	// (0x0003a28e) fep_vkb_top_text_pane_g2_ParamLimits

0xc72a,	// (0x0003a28e) fep_vkb_top_text_pane_g2

0x0001,

0xfb53,	// (0x0003d6b7) fep_vkb_top_text_pane_g_ParamLimits

0xfb53,	// (0x0003d6b7) fep_vkb_top_text_pane_g

0x426f,	// (0x00031dd3) main_hc_apps_shell_pane

0xd367,	// (0x0003aecb) grid_hc_apps_pane_ParamLimits

0xd367,	// (0x0003aecb) grid_hc_apps_pane

0xd376,	// (0x0003aeda) list_hc_apps_pane

0xd37e,	// (0x0003aee2) scroll_pane_cp37_ParamLimits

0xd37e,	// (0x0003aee2) scroll_pane_cp37

0xd38a,	// (0x0003aeee) cell_hc_apps_pane_ParamLimits

0xd38a,	// (0x0003aeee) cell_hc_apps_pane

0xd43a,	// (0x0003af9e) cell_hc_apps_pane_g1_ParamLimits

0xd43a,	// (0x0003af9e) cell_hc_apps_pane_g1

0xd46b,	// (0x0003afcf) cell_hc_apps_pane_g2_ParamLimits

0xd46b,	// (0x0003afcf) cell_hc_apps_pane_g2

0xd487,	// (0x0003afeb) cell_hc_apps_pane_g3_ParamLimits

0xd487,	// (0x0003afeb) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0003d84b) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0003d84b) cell_hc_apps_pane_g

0xd4a9,	// (0x0003b00d) cell_hc_apps_pane_t1_ParamLimits

0xd4a9,	// (0x0003b00d) cell_hc_apps_pane_t1

0x4412,	// (0x00031f76) grid_highlight_pane_cp10_ParamLimits

0x4412,	// (0x00031f76) grid_highlight_pane_cp10

0xd4e9,	// (0x0003b04d) list_single_hc_apps_pane_ParamLimits

0xd4e9,	// (0x0003b04d) list_single_hc_apps_pane

0xd55c,	// (0x0003b0c0) list_single_hc_apps_pane_g1

0xae38,	// (0x0003899c) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0003d852) list_single_hc_apps_pane_g

0xae51,	// (0x000389b5) list_single_hc_apps_pane_g2_copy1

0x93ac,	// (0x00036f10) list_single_hc_apps_pane_t1

0x42df,	// (0x00031e43) bg_set_opt_pane_cp_ParamLimits

0x98b1,	// (0x00037415) setting_slider_pane_t1_ParamLimits

0x98ca,	// (0x0003742e) setting_slider_pane_t2_ParamLimits

0x98e3,	// (0x00037447) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0003d0de) setting_slider_pane_t_ParamLimits

0x98fa,	// (0x0003745e) slider_set_pane_ParamLimits

0xa394,	// (0x00037ef8) control_pane_g5_ParamLimits

0xa394,	// (0x00037ef8) control_pane_g5

0x6b1b,	// (0x0003467f) slider_set_pane_g1_ParamLimits

0xa7c5,	// (0x00038329) slider_set_pane_g2_ParamLimits

0xa7d1,	// (0x00038335) slider_set_pane_g3_ParamLimits

0xa7e5,	// (0x00038349) slider_set_pane_g4_ParamLimits

0xa7fd,	// (0x00038361) slider_set_pane_g5_ParamLimits

0xa7d1,	// (0x00038335) slider_set_pane_g6_ParamLimits

0xa813,	// (0x00038377) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0003d4de) slider_set_pane_g_ParamLimits

0x5322,	// (0x00032e86) navi_icon_text_pane_ParamLimits

0xbb76,	// (0x000396da) aid_fill_nsta_2_ParamLimits

0xbba0,	// (0x00039704) aid_touch_tab_arrow_left_ParamLimits

0xbbaf,	// (0x00039713) aid_touch_tab_arrow_right_ParamLimits

0xbc1c,	// (0x00039780) clock_nsta_pane_ParamLimits

0xc076,	// (0x00039bda) navi_icon_pane_g1_ParamLimits

0xc085,	// (0x00039be9) navi_text_pane_t1_ParamLimits

0xc4ef,	// (0x0003a053) navi_icon_text_pane_g1_ParamLimits

0xc4fe,	// (0x0003a062) navi_icon_text_pane_t1_ParamLimits

0xd55c,	// (0x0003b0c0) list_single_hc_apps_pane_g1_ParamLimits

0xae38,	// (0x0003899c) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0003d852) list_single_hc_apps_pane_g_ParamLimits

0xae51,	// (0x000389b5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x93ac,	// (0x00036f10) list_single_hc_apps_pane_t1_ParamLimits

0x9705,	// (0x00037269) popup_toolbar2_fixed_window_ParamLimits

0x9705,	// (0x00037269) popup_toolbar2_fixed_window

0xbae9,	// (0x0003964d) popup_toolbar2_float_window

0x426f,	// (0x00031dd3) bg_popup_sub_pane_cp27

0xd575,	// (0x0003b0d9) grid_toolbar2_float_pane

0x426f,	// (0x00031dd3) bg_popup_sub_pane_cp26

0xd575,	// (0x0003b0d9) grid_toolbar2_fixed_pane

0xd57d,	// (0x0003b0e1) cell_toolbar2_fixed_pane_ParamLimits

0xd57d,	// (0x0003b0e1) cell_toolbar2_fixed_pane

0xd58e,	// (0x0003b0f2) cell_toolbar2_fixed_pane_g1

0xd597,	// (0x0003b0fb) toolbar2_fixed_button_pane

0x59ec,	// (0x00033550) toolbar2_fixed_button_pane_g1

0x59fc,	// (0x00033560) toolbar2_fixed_button_pane_g2

0x59f4,	// (0x00033558) toolbar2_fixed_button_pane_g3

0x5a0c,	// (0x00033570) toolbar2_fixed_button_pane_g4

0x5a04,	// (0x00033568) toolbar2_fixed_button_pane_g5

0x5a14,	// (0x00033578) toolbar2_fixed_button_pane_g6

0x5a1c,	// (0x00033580) toolbar2_fixed_button_pane_g7

0x5a2c,	// (0x00033590) toolbar2_fixed_button_pane_g8

0x5a24,	// (0x00033588) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x0003d3e0) toolbar2_fixed_button_pane_g

0xd59f,	// (0x0003b103) cell_toolbar2_float_pane_ParamLimits

0xd59f,	// (0x0003b103) cell_toolbar2_float_pane

0xd5b0,	// (0x0003b114) cell_toolbar2_float_pane_g1

0xd597,	// (0x0003b0fb) toolbar2_fixed_button_pane_cp

0xc6dd,	// (0x0003a241) fep_vkb_accented_list_pane_ParamLimits

0xc6dd,	// (0x0003a241) fep_vkb_accented_list_pane

0xacc0,	// (0x00038824) bg_popup_fep_shadow_pane_g9

0x54a4,	// (0x00033008) bg_popup_fep_shadow_pane_cp3

0x4b63,	// (0x000326c7) list_accented_list_pane

0xd5b9,	// (0x0003b11d) list_single_accented_list_pane_ParamLimits

0xd5b9,	// (0x0003b11d) list_single_accented_list_pane

0x54a4,	// (0x00033008) list_highlight_pane_cp10

0xd5ca,	// (0x0003b12e) list_single_accented_list_pane_t1

0xba41,	// (0x000395a5) popup_slider_window_ParamLimits

0xba41,	// (0x000395a5) popup_slider_window

0xd1ef,	// (0x0003ad53) aid_indentation_list_msg

0xd684,	// (0x0003b1e8) bg_popup_window_pane_cp19

0xd6ee,	// (0x0003b252) popup_slider_window_g1

0xd70a,	// (0x0003b26e) popup_slider_window_g2

0xd726,	// (0x0003b28a) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0003d857) popup_slider_window_g

0xd782,	// (0x0003b2e6) popup_slider_window_t1

0xd7f6,	// (0x0003b35a) small_volume_slider_vertical_pane

0x7796,	// (0x000352fa) small_volume_slider_vertical_pane_g1

0x7796,	// (0x000352fa) small_volume_slider_vertical_pane_g2

0xd812,	// (0x0003b376) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0003d869) small_volume_slider_vertical_pane_g

0x94d5,	// (0x00037039) area_side_right_pane_ParamLimits

0x94d5,	// (0x00037039) area_side_right_pane

0xae6d,	// (0x000389d1) aid_size_side_button_ParamLimits

0xae6d,	// (0x000389d1) aid_size_side_button

0xae81,	// (0x000389e5) grid_sctrl_middle_pane_ParamLimits

0xae81,	// (0x000389e5) grid_sctrl_middle_pane

0xaea1,	// (0x00038a05) sctrl_sk_bottom_pane

0xaeb2,	// (0x00038a16) sctrl_sk_top_pane

0xaec4,	// (0x00038a28) aid_touch_sctrl_top

0x4412,	// (0x00031f76) bg_sctrl_sk_pane_ParamLimits

0x4412,	// (0x00031f76) bg_sctrl_sk_pane

0xaed1,	// (0x00038a35) sctrl_sk_top_pane_g1

0xaede,	// (0x00038a42) sctrl_sk_top_pane_t1

0xaec4,	// (0x00038a28) aid_touch_sctrl_bottom

0x4412,	// (0x00031f76) bg_sctrl_sk_pane_cp_ParamLimits

0x4412,	// (0x00031f76) bg_sctrl_sk_pane_cp

0xaef9,	// (0x00038a5d) sctrl_sk_bottom_pane_g1

0xaede,	// (0x00038a42) sctrl_sk_bottom_pane_t1

0xaf02,	// (0x00038a66) cell_sctrl_middle_pane_ParamLimits

0xaf02,	// (0x00038a66) cell_sctrl_middle_pane

0xaf1d,	// (0x00038a81) aid_touch_sctrl_middle_ParamLimits

0xaf1d,	// (0x00038a81) aid_touch_sctrl_middle

0x4a5d,	// (0x000325c1) bg_sctrl_middle_pane_ParamLimits

0x4a5d,	// (0x000325c1) bg_sctrl_middle_pane

0x7a1d,	// (0x00035581) cell_sctrl_middle_pane_g1_ParamLimits

0x7a1d,	// (0x00035581) cell_sctrl_middle_pane_g1

0xaf2f,	// (0x00038a93) cell_sctrl_middle_pane_g2_ParamLimits

0xaf2f,	// (0x00038a93) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0003d875) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0003d875) cell_sctrl_middle_pane_g

0x59ec,	// (0x00033550) bg_sctrl_middle_pane_g1

0x59fc,	// (0x00033560) bg_sctrl_middle_pane_g2

0x59f4,	// (0x00033558) bg_sctrl_middle_pane_g3

0x5a0c,	// (0x00033570) bg_sctrl_middle_pane_g4

0x5a04,	// (0x00033568) bg_sctrl_middle_pane_g5

0x5a14,	// (0x00033578) bg_sctrl_middle_pane_g6

0x5a1c,	// (0x00033580) bg_sctrl_middle_pane_g7

0x5a2c,	// (0x00033590) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0003d87a) bg_sctrl_middle_pane_g

0x5a24,	// (0x00033588) bg_sctrl_middle_pane_g8_copy1

0x59ec,	// (0x00033550) bg_sctrl_sk_pane_g1

0x59fc,	// (0x00033560) bg_sctrl_sk_pane_g2

0x59f4,	// (0x00033558) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x0003d3e0) bg_sctrl_sk_pane_g

0x4996,	// (0x000324fa) aid_size_touch_scroll_bar

0x5a0c,	// (0x00033570) bg_sctrl_sk_pane_g4

0x5a04,	// (0x00033568) bg_sctrl_sk_pane_g5

0x5a14,	// (0x00033578) bg_sctrl_sk_pane_g6

0x5a1c,	// (0x00033580) bg_sctrl_sk_pane_g7

0x5a2c,	// (0x00033590) bg_sctrl_sk_pane_g8

0x5a24,	// (0x00033588) bg_sctrl_sk_pane_g9

0x5720,	// (0x00033284) popup_fep_china_hwr2_fs_candidate_window

0xb74f,	// (0x000392b3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb74f,	// (0x000392b3) popup_fep_china_hwr2_fs_control_window

0x7a1d,	// (0x00035581) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0003d870) sctrl_sk_top_pane_g

0xd81b,	// (0x0003b37f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd81b,	// (0x0003b37f) aid_fep_china_hwr2_fs_cell

0xd82d,	// (0x0003b391) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd82d,	// (0x0003b391) bg_popup_fep_shadow_pane_cp4

0xd844,	// (0x0003b3a8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd844,	// (0x0003b3a8) bg_popup_fep_shadow_pane_cp5

0xd856,	// (0x0003b3ba) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd856,	// (0x0003b3ba) popup_fep_china_hwr2_fs_control_bar_grid

0xd866,	// (0x0003b3ca) popup_fep_china_hwr2_fs_control_funtion_grid

0xd86e,	// (0x0003b3d2) aid_fep_china_hwr2_fs_candi_cell

0x426f,	// (0x00031dd3) bg_popup_fep_shadow_pane_cp6

0xd878,	// (0x0003b3dc) popup_fep_china_hwr2_fs_candidate_grid

0xd882,	// (0x0003b3e6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd882,	// (0x0003b3e6) cell_fep_china_hwr2_fs_funtion_grid

0x7796,	// (0x000352fa) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd89a,	// (0x0003b3fe) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd89a,	// (0x0003b3fe) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8a8,	// (0x0003b40c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8a8,	// (0x0003b40c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0003d88b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0003d88b) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8be,	// (0x0003b422) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8be,	// (0x0003b422) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8d3,	// (0x0003b437) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8d3,	// (0x0003b437) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0003d890) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0003d890) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8ef,	// (0x0003b453) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8f7,	// (0x0003b45b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8ff,	// (0x0003b463) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0003d895) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd907,	// (0x0003b46b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd907,	// (0x0003b46b) cell_fep_china_hwr2_fs_candidate_grid

0xd920,	// (0x0003b484) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd928,	// (0x0003b48c) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7796,	// (0x000352fa) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7796,	// (0x000352fa) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb58,	// (0x0003d6bc) cell_fep_china_hwr2_fs_candidate_grid_g

0xd930,	// (0x0003b494) cell_fep_china_hwr2_fs_candidate_grid_t1

0x583b,	// (0x0003339f) clock_nsta_pane_cp_24_ParamLimits

0x583b,	// (0x0003339f) clock_nsta_pane_cp_24

0x58a3,	// (0x00033407) indicator_nsta_pane_cp_24_ParamLimits

0x58a3,	// (0x00033407) indicator_nsta_pane_cp_24

0x65eb,	// (0x0003414f) heading_pane_g1

0x0001,

0xf8e1,	// (0x0003d445) heading_pane_g

0x6c4f,	// (0x000347b3) grid_sct_catagory_button_pane

0x6b0f,	// (0x00034673) scroll_pane_cp5_ParamLimits

0x74ff,	// (0x00035063) button_value_adjust_pane_cp5_ParamLimits

0x74ff,	// (0x00035063) button_value_adjust_pane_cp5

0x75bd,	// (0x00035121) form2_midp_time_pane_ParamLimits

0xd93e,	// (0x0003b4a2) cell_sct_catagory_button_pane_ParamLimits

0xd93e,	// (0x0003b4a2) cell_sct_catagory_button_pane

0x775b,	// (0x000352bf) bg_button_pane_cp01_ParamLimits

0x775b,	// (0x000352bf) bg_button_pane_cp01

0x7796,	// (0x000352fa) cell_sct_catagory_button_pane_g1

0xba78,	// (0x000395dc) popup_tb_extension_window

0xd950,	// (0x0003b4b4) aid_size_cell_ext_ParamLimits

0xd950,	// (0x0003b4b4) aid_size_cell_ext

0x4412,	// (0x00031f76) bg_tb_trans_pane_cp1_ParamLimits

0x4412,	// (0x00031f76) bg_tb_trans_pane_cp1

0xd970,	// (0x0003b4d4) grid_tb_ext_pane_ParamLimits

0xd970,	// (0x0003b4d4) grid_tb_ext_pane

0xd9a2,	// (0x0003b506) cell_tb_ext_pane_ParamLimits

0xd9a2,	// (0x0003b506) cell_tb_ext_pane

0xd9b9,	// (0x0003b51d) cell_tb_ext_pane_g1_ParamLimits

0xd9b9,	// (0x0003b51d) cell_tb_ext_pane_g1

0xd9d6,	// (0x0003b53a) cell_tb_ext_pane_t1

0x4412,	// (0x00031f76) list_highlight_pane_cp11_ParamLimits

0x4412,	// (0x00031f76) list_highlight_pane_cp11

0x9724,	// (0x00037288) popup_uni_indicator_window_ParamLimits

0x9724,	// (0x00037288) popup_uni_indicator_window

0x4a5d,	// (0x000325c1) bg_popup_sub_pane_cp14

0xd9f1,	// (0x0003b555) list_uniindi_pane

0xd9fd,	// (0x0003b561) uniindi_top_pane

0x4412,	// (0x00031f76) bg_uniindi_top_pane

0xda1c,	// (0x0003b580) uniindi_top_pane_g1

0xda32,	// (0x0003b596) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0003d89c) uniindi_top_pane_g

0xda5c,	// (0x0003b5c0) uniindi_top_pane_t1

0xda86,	// (0x0003b5ea) list_single_uniindi_pane_ParamLimits

0xda86,	// (0x0003b5ea) list_single_uniindi_pane

0x7796,	// (0x000352fa) bg_uniindi_top_pane_g1

0xda98,	// (0x0003b5fc) list_single_uniindi_pane_g1

0xdaab,	// (0x0003b60f) list_single_uniindi_pane_t1

0x426f,	// (0x00031dd3) control_bg_pane

0xdad0,	// (0x0003b634) bg_sctrl_sk_pane_cp1

0xdad9,	// (0x0003b63d) bg_sctrl_sk_pane_cp2

0xdae2,	// (0x0003b646) control_bg_pane_g1

0xdaeb,	// (0x0003b64f) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0003d8a5) control_bg_pane_g

0x73d6,	// (0x00034f3a) cell_indicator_nsta_pane_g1_ParamLimits

0xc41e,	// (0x00039f82) cell_indicator_nsta_pane_g2_ParamLimits

0xfabc,	// (0x0003d620) cell_indicator_nsta_pane_g_ParamLimits

0x90c7,	// (0x00036c2b) form2_midp_time_pane_t1_ParamLimits

0x47d8,	// (0x0003233c) main_idle_act4_pane_ParamLimits

0x47d8,	// (0x0003233c) main_idle_act4_pane

0xba78,	// (0x000395dc) popup_tb_extension_window_ParamLimits

0xd992,	// (0x0003b4f6) tb_ext_find_pane_ParamLimits

0xd992,	// (0x0003b4f6) tb_ext_find_pane

0xdaf4,	// (0x0003b658) ai_gene_pane_1_cp1

0x5526,	// (0x0003308a) ai_gene_pane_2_cp1

0xdafc,	// (0x0003b660) list_single_idle_plugin_calendar_pane

0xdb05,	// (0x0003b669) list_single_idle_plugin_notification_pane

0xdb0e,	// (0x0003b672) list_single_idle_plugin_player_pane

0xdb17,	// (0x0003b67b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb17,	// (0x0003b67b) list_single_idle_plugin_shortcut_pane

0xdb39,	// (0x0003b69d) main_idle_act4_pane_t1

0xdb4b,	// (0x0003b6af) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0003d8aa) main_idle_act4_pane_t

0xdb5d,	// (0x0003b6c1) middle_sk_idle_act4_pane_ParamLimits

0xdb5d,	// (0x0003b6c1) middle_sk_idle_act4_pane

0xdb73,	// (0x0003b6d7) popup_clock_digital_analogue_window_cp2

0xdb8d,	// (0x0003b6f1) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb8d,	// (0x0003b6f1) shortcut_wheel_idle_act4_pane

0x7796,	// (0x000352fa) shortcut_wheel_idle_act4_pane_g1

0x7796,	// (0x000352fa) shortcut_wheel_idle_act4_pane_g2

0x7796,	// (0x000352fa) shortcut_wheel_idle_act4_pane_g3

0x7796,	// (0x000352fa) shortcut_wheel_idle_act4_pane_g4

0x7796,	// (0x000352fa) shortcut_wheel_idle_act4_pane_g5

0xdba1,	// (0x0003b705) shortcut_wheel_idle_act4_pane_g6

0xdba9,	// (0x0003b70d) shortcut_wheel_idle_act4_pane_g7

0xdbb1,	// (0x0003b715) shortcut_wheel_idle_act4_pane_g8

0xdbb9,	// (0x0003b71d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0003d8af) shortcut_wheel_idle_act4_pane_g

0x7a1d,	// (0x00035581) middle_sk_idle_act4_pane_g1_ParamLimits

0x7a1d,	// (0x00035581) middle_sk_idle_act4_pane_g1

0xdc1d,	// (0x0003b781) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc1d,	// (0x0003b781) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0003d8d2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0003d8d2) middle_sk_idle_act4_pane_g

0xdc29,	// (0x0003b78d) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc29,	// (0x0003b78d) middle_sk_idle_act4_pane_t1

0xdc46,	// (0x0003b7aa) grid_ai_shortcut_pane_ParamLimits

0xdc46,	// (0x0003b7aa) grid_ai_shortcut_pane

0xdc5f,	// (0x0003b7c3) list_highlight_pane_cp16_ParamLimits

0xdc5f,	// (0x0003b7c3) list_highlight_pane_cp16

0xdc6c,	// (0x0003b7d0) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc6c,	// (0x0003b7d0) list_single_idle_plugin_shortcut_pane_g1

0xdc78,	// (0x0003b7dc) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc78,	// (0x0003b7dc) list_single_idle_plugin_shortcut_pane_g2

0xdc90,	// (0x0003b7f4) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc90,	// (0x0003b7f4) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0003d8d7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0003d8d7) list_single_idle_plugin_shortcut_pane_g

0xdca3,	// (0x0003b807) cell_ai_shortcut_pane_ParamLimits

0xdca3,	// (0x0003b807) cell_ai_shortcut_pane

0xdcc4,	// (0x0003b828) cell_ai_shortcut_pane_g1_ParamLimits

0xdcc4,	// (0x0003b828) cell_ai_shortcut_pane_g1

0xdaf4,	// (0x0003b658) ai_gene_pane_1_cp2

0xdce6,	// (0x0003b84a) ai_gene_pane_2_cp2

0xdcee,	// (0x0003b852) list_highlight_pane_cp15

0xdcf7,	// (0x0003b85b) list_single_idle_plugin_calendar_pane_g1

0xdcee,	// (0x0003b852) list_highlight_pane_cp17

0xdcff,	// (0x0003b863) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd07,	// (0x0003b86b) list_single_idle_plugin_player_pane_g1

0x6e64,	// (0x000349c8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0003d8de) list_single_idle_plugin_player_pane_g

0xdd0f,	// (0x0003b873) list_single_idle_plugin_player_pane_t1

0xdd1d,	// (0x0003b881) list_single_idle_plugin_player_pane_t2

0xdd2b,	// (0x0003b88f) list_single_idle_plugin_player_pane_t3

0xdd39,	// (0x0003b89d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0003d8e3) list_single_idle_plugin_player_pane_t

0xdd47,	// (0x0003b8ab) wait_bar_pane_cp15

0xdd4f,	// (0x0003b8b3) grid_ai_notification_pane

0x6e64,	// (0x000349c8) list_single_idle_plugin_notification_pane_g1

0xdd58,	// (0x0003b8bc) cell_ai_notification_pane_ParamLimits

0xdd58,	// (0x0003b8bc) cell_ai_notification_pane

0xdd65,	// (0x0003b8c9) cell_ai_notification_pane_g1

0xdd6d,	// (0x0003b8d1) cell_ai_notification_pane_t1

0xdd7b,	// (0x0003b8df) tb_ext_find_button_pane

0xdd83,	// (0x0003b8e7) tb_ext_find_pane_g1

0xdd8b,	// (0x0003b8ef) tb_ext_find_pane_t1

0x4f95,	// (0x00032af9) tb_ext_find_button_pane_g1

0xdd99,	// (0x0003b8fd) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0003d8ec) tb_ext_find_button_pane_g

0xdb39,	// (0x0003b69d) main_idle_act4_pane_t1_ParamLimits

0xdb4b,	// (0x0003b6af) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0003d8aa) main_idle_act4_pane_t_ParamLimits

0xdb73,	// (0x0003b6d7) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb81,	// (0x0003b6e5) sat_plugin_idle_act4_pane_ParamLimits

0xdb81,	// (0x0003b6e5) sat_plugin_idle_act4_pane

0xdda2,	// (0x0003b906) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdda2,	// (0x0003b906) sat_plugin_idle_act4_pane_t1

0xddb5,	// (0x0003b919) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddb5,	// (0x0003b919) sat_plugin_idle_act4_pane_t2

0xddc8,	// (0x0003b92c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddc8,	// (0x0003b92c) sat_plugin_idle_act4_pane_t3

0xdddb,	// (0x0003b93f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdddb,	// (0x0003b93f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0003d8f1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0003d8f1) sat_plugin_idle_act4_pane_t

0x966d,	// (0x000371d1) popup_battery_window_ParamLimits

0x966d,	// (0x000371d1) popup_battery_window

0x4412,	// (0x00031f76) bg_popup_sub_pane_cp25_ParamLimits

0x4412,	// (0x00031f76) bg_popup_sub_pane_cp25

0xddee,	// (0x0003b952) popup_battery_window_g1_ParamLimits

0xddee,	// (0x0003b952) popup_battery_window_g1

0xddfa,	// (0x0003b95e) popup_battery_window_t1_ParamLimits

0xddfa,	// (0x0003b95e) popup_battery_window_t1

0xde0c,	// (0x0003b970) popup_battery_window_t2_ParamLimits

0xde0c,	// (0x0003b970) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0003d8fa) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0003d8fa) popup_battery_window_t

0xa1c5,	// (0x00037d29) midp_canvas_pane_ParamLimits

0xa229,	// (0x00037d8d) midp_keypad_pane_ParamLimits

0xa229,	// (0x00037d8d) midp_keypad_pane

0x4bb4,	// (0x00032718) main_midp_pane_ParamLimits

0x74b2,	// (0x00035016) signal_pane_g2_cp_ParamLimits

0xde29,	// (0x0003b98d) aid_size_cell_midp_keypad_ParamLimits

0xde29,	// (0x0003b98d) aid_size_cell_midp_keypad

0xde43,	// (0x0003b9a7) midp_keyp_game_grid_pane_ParamLimits

0xde43,	// (0x0003b9a7) midp_keyp_game_grid_pane

0xde63,	// (0x0003b9c7) midp_keyp_rocker_pane_ParamLimits

0xde63,	// (0x0003b9c7) midp_keyp_rocker_pane

0xde9c,	// (0x0003ba00) midp_keyp_sk_left_pane_ParamLimits

0xde9c,	// (0x0003ba00) midp_keyp_sk_left_pane

0xdef6,	// (0x0003ba5a) midp_keyp_sk_right_pane_ParamLimits

0xdef6,	// (0x0003ba5a) midp_keyp_sk_right_pane

0x426f,	// (0x00031dd3) bg_button_pane_cp03

0xdf50,	// (0x0003bab4) midp_keyp_sk_left_pane_g1

0x426f,	// (0x00031dd3) bg_button_pane_cp04

0xdf50,	// (0x0003bab4) midp_keyp_sk_right_pane_g1

0x7796,	// (0x000352fa) midp_keyp_rocker_pane_g1

0xdf59,	// (0x0003babd) keyp_game_cell_pane_ParamLimits

0xdf59,	// (0x0003babd) keyp_game_cell_pane

0x426f,	// (0x00031dd3) bg_button_pane_cp02

0xdf6c,	// (0x0003bad0) keyp_game_cell_pane_g1

0x96a3,	// (0x00037207) popup_fep_vkb2_window_ParamLimits

0x96a3,	// (0x00037207) popup_fep_vkb2_window

0xaf51,	// (0x00038ab5) aid_size_cell_vkb2_ParamLimits

0xaf51,	// (0x00038ab5) aid_size_cell_vkb2

0xafa5,	// (0x00038b09) popup_fep_vkb2_window_g1_ParamLimits

0xafa5,	// (0x00038b09) popup_fep_vkb2_window_g1

0xafe5,	// (0x00038b49) vkb2_area_bottom_pane_ParamLimits

0xafe5,	// (0x00038b49) vkb2_area_bottom_pane

0xb031,	// (0x00038b95) vkb2_area_keypad_pane_ParamLimits

0xb031,	// (0x00038b95) vkb2_area_keypad_pane

0xb073,	// (0x00038bd7) vkb2_area_top_pane_ParamLimits

0xb073,	// (0x00038bd7) vkb2_area_top_pane

0xb0ed,	// (0x00038c51) vkb2_top_entry_pane_ParamLimits

0xb0ed,	// (0x00038c51) vkb2_top_entry_pane

0xb117,	// (0x00038c7b) vkb2_top_grid_left_pane_ParamLimits

0xb117,	// (0x00038c7b) vkb2_top_grid_left_pane

0xb135,	// (0x00038c99) vkb2_top_grid_right_pane_ParamLimits

0xb135,	// (0x00038c99) vkb2_top_grid_right_pane

0xb153,	// (0x00038cb7) vkb2_cell_keypad_pane_ParamLimits

0xb153,	// (0x00038cb7) vkb2_cell_keypad_pane

0xb224,	// (0x00038d88) vkb2_area_bottom_grid_pane_ParamLimits

0xb224,	// (0x00038d88) vkb2_area_bottom_grid_pane

0xb24a,	// (0x00038dae) vkb2_area_bottom_pane_g1_ParamLimits

0xb24a,	// (0x00038dae) vkb2_area_bottom_pane_g1

0xb26e,	// (0x00038dd2) vkb2_area_bottom_pane_g2_ParamLimits

0xb26e,	// (0x00038dd2) vkb2_area_bottom_pane_g2

0xb29c,	// (0x00038e00) vkb2_area_bottom_pane_g3_ParamLimits

0xb29c,	// (0x00038e00) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0003d8ff) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0003d8ff) vkb2_area_bottom_pane_g

0xb2fd,	// (0x00038e61) vkb2_top_cell_left_pane_ParamLimits

0xb2fd,	// (0x00038e61) vkb2_top_cell_left_pane

0xdf7d,	// (0x0003bae1) vkb2_top_entry_pane_g1_ParamLimits

0xdf7d,	// (0x0003bae1) vkb2_top_entry_pane_g1

0xdfac,	// (0x0003bb10) vkb2_top_entry_pane_t1_ParamLimits

0xdfac,	// (0x0003bb10) vkb2_top_entry_pane_t1

0xdfde,	// (0x0003bb42) vkb2_top_entry_pane_t2_ParamLimits

0xdfde,	// (0x0003bb42) vkb2_top_entry_pane_t2

0xe010,	// (0x0003bb74) vkb2_top_entry_pane_t3_ParamLimits

0xe010,	// (0x0003bb74) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0003d906) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0003d906) vkb2_top_entry_pane_t

0xb34a,	// (0x00038eae) vkb2_top_grid_right_pane_g1_ParamLimits

0xb34a,	// (0x00038eae) vkb2_top_grid_right_pane_g1

0xb360,	// (0x00038ec4) vkb2_top_grid_right_pane_g2_ParamLimits

0xb360,	// (0x00038ec4) vkb2_top_grid_right_pane_g2

0xb378,	// (0x00038edc) vkb2_top_grid_right_pane_g3_ParamLimits

0xb378,	// (0x00038edc) vkb2_top_grid_right_pane_g3

0xb390,	// (0x00038ef4) vkb2_top_grid_right_pane_g4_ParamLimits

0xb390,	// (0x00038ef4) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0003d90d) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0003d90d) vkb2_top_grid_right_pane_g

0xb3a6,	// (0x00038f0a) vkb2_top_cell_left_pane_g1

0xb3bd,	// (0x00038f21) vkb2_cell_keypad_pane_g1_ParamLimits

0xb3bd,	// (0x00038f21) vkb2_cell_keypad_pane_g1

0xe034,	// (0x0003bb98) vkb2_cell_keypad_pane_t1_ParamLimits

0xe034,	// (0x0003bb98) vkb2_cell_keypad_pane_t1

0xb3cb,	// (0x00038f2f) vkb2_cell_bottom_grid_pane_ParamLimits

0xb3cb,	// (0x00038f2f) vkb2_cell_bottom_grid_pane

0xb404,	// (0x00038f68) vkb2_cell_bottom_grid_pane_g1

0xdbc1,	// (0x0003b725) aid_call2_pane_cp02

0xdbc9,	// (0x0003b72d) aid_call_pane_cp02

0xdbd1,	// (0x0003b735) clock_digital_number_pane_cp10

0xdbd9,	// (0x0003b73d) clock_digital_number_pane_cp11

0xdbe1,	// (0x0003b745) clock_digital_number_pane_cp12

0xdbe9,	// (0x0003b74d) clock_digital_number_pane_cp13

0xdbf1,	// (0x0003b755) clock_digital_separator_pane_cp10

0x4f95,	// (0x00032af9) popup_clock_digital_analogue_window_cp2_g1

0x4f95,	// (0x00032af9) popup_clock_digital_analogue_window_cp2_g2

0xdbf9,	// (0x0003b75d) popup_clock_digital_analogue_window_cp2_g3

0x4f95,	// (0x00032af9) popup_clock_digital_analogue_window_cp2_g4

0xdbf9,	// (0x0003b75d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0003d8c2) popup_clock_digital_analogue_window_cp2_g

0xdc01,	// (0x0003b765) popup_clock_digital_analogue_window_cp2_t1

0xdc0f,	// (0x0003b773) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0003d8cd) popup_clock_digital_analogue_window_cp2_t

0x7796,	// (0x000352fa) clock_digital_number_pane_cp10_g1

0x7796,	// (0x000352fa) clock_digital_number_pane_cp10_g2

0x0001,

0xfb58,	// (0x0003d6bc) clock_digital_number_pane_cp10_g

0x7796,	// (0x000352fa) clock_digital_separator_pane_cp10_g1

0x7796,	// (0x000352fa) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb58,	// (0x0003d6bc) clock_digital_separator_pane_cp10_g

0xda3e,	// (0x0003b5a2) uniindi_top_pane_g3

0xda4f,	// (0x0003b5b3) uniindi_top_pane_g4

0xb1de,	// (0x00038d42) vkb2_row_keypad_pane_ParamLimits

0xb1de,	// (0x00038d42) vkb2_row_keypad_pane

0xb424,	// (0x00038f88) vkb2_cell_t_keypad_pane_ParamLimits

0xb424,	// (0x00038f88) vkb2_cell_t_keypad_pane

0xb434,	// (0x00038f98) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xb434,	// (0x00038f98) vkb2_cell_t_keypad_pane_cp08

0xb447,	// (0x00038fab) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xb447,	// (0x00038fab) vkb2_cell_t_keypad_pane_cp09

0xb45b,	// (0x00038fbf) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xb45b,	// (0x00038fbf) vkb2_cell_t_keypad_pane_cp01

0xb46c,	// (0x00038fd0) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xb46c,	// (0x00038fd0) vkb2_cell_t_keypad_pane_cp02

0xb47d,	// (0x00038fe1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xb47d,	// (0x00038fe1) vkb2_cell_t_keypad_pane_cp03

0xb48e,	// (0x00038ff2) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xb48e,	// (0x00038ff2) vkb2_cell_t_keypad_pane_cp04

0xb49f,	// (0x00039003) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xb49f,	// (0x00039003) vkb2_cell_t_keypad_pane_cp05

0xb4b0,	// (0x00039014) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xb4b0,	// (0x00039014) vkb2_cell_t_keypad_pane_cp06

0xb4c1,	// (0x00039025) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xb4c1,	// (0x00039025) vkb2_cell_t_keypad_pane_cp07

0xb4d2,	// (0x00039036) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xb4d2,	// (0x00039036) vkb2_cell_t_keypad_pane_cp10

0x7a1d,	// (0x00035581) vkb2_cell_t_keypad_pane_g1

0xe04b,	// (0x0003bbaf) vkb2_cell_t_keypad_pane_t1

0x426f,	// (0x00031dd3) popup_grid_graphic2_window

0xede5,	// (0x0003c949) aid_size_cell_graphic2_ParamLimits

0xede5,	// (0x0003c949) aid_size_cell_graphic2

0x7aa1,	// (0x00035605) bg_popup_window_pane_cp21_ParamLimits

0x7aa1,	// (0x00035605) bg_popup_window_pane_cp21

0xee11,	// (0x0003c975) graphic2_pages_pane_ParamLimits

0xee11,	// (0x0003c975) graphic2_pages_pane

0xee57,	// (0x0003c9bb) grid_graphic2_control_pane_ParamLimits

0xee57,	// (0x0003c9bb) grid_graphic2_control_pane

0xee85,	// (0x0003c9e9) grid_graphic2_pane_ParamLimits

0xee85,	// (0x0003c9e9) grid_graphic2_pane

0xeee5,	// (0x0003ca49) cell_graphic2_pane

0x426f,	// (0x00031dd3) main_comp_mode_pane

0xd2a1,	// (0x0003ae05) list_ai3_gene_pane_ParamLimits

0xd684,	// (0x0003b1e8) bg_popup_window_pane_cp19_ParamLimits

0xd690,	// (0x0003b1f4) bg_touch_area_indi_pane_ParamLimits

0xd690,	// (0x0003b1f4) bg_touch_area_indi_pane

0xd6a6,	// (0x0003b20a) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6a6,	// (0x0003b20a) bg_touch_area_indi_pane_cp01

0xd6bc,	// (0x0003b220) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6bc,	// (0x0003b220) bg_touch_area_indi_pane_cp02

0xd6d4,	// (0x0003b238) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6d4,	// (0x0003b238) bg_touch_area_indi_pane_cp03

0xd6ee,	// (0x0003b252) popup_slider_window_g1_ParamLimits

0xd70a,	// (0x0003b26e) popup_slider_window_g2_ParamLimits

0xd726,	// (0x0003b28a) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0003d857) popup_slider_window_g_ParamLimits

0xd782,	// (0x0003b2e6) popup_slider_window_t1_ParamLimits

0xd7f6,	// (0x0003b35a) small_volume_slider_vertical_pane_ParamLimits

0xeee5,	// (0x0003ca49) cell_graphic2_pane_ParamLimits

0xef34,	// (0x0003ca98) bg_button_pane_cp10_ParamLimits

0xef34,	// (0x0003ca98) bg_button_pane_cp10

0xef47,	// (0x0003caab) bg_button_pane_cp11_ParamLimits

0xef47,	// (0x0003caab) bg_button_pane_cp11

0xef5a,	// (0x0003cabe) graphic2_pages_pane_g1_ParamLimits

0xef5a,	// (0x0003cabe) graphic2_pages_pane_g1

0xef75,	// (0x0003cad9) graphic2_pages_pane_g2_ParamLimits

0xef75,	// (0x0003cad9) graphic2_pages_pane_g2

0x0001,

0x06d7,	// (0x0002e23b) graphic2_pages_pane_g_ParamLimits

0x06d7,	// (0x0002e23b) graphic2_pages_pane_g

0xef8d,	// (0x0003caf1) graphic2_pages_pane_t1_ParamLimits

0xef8d,	// (0x0003caf1) graphic2_pages_pane_t1

0xefa3,	// (0x0003cb07) cell_graphic2_control_pane_ParamLimits

0xefa3,	// (0x0003cb07) cell_graphic2_control_pane

0xefbd,	// (0x0003cb21) cell_graphic2_pane_g1_ParamLimits

0xefbd,	// (0x0003cb21) cell_graphic2_pane_g1

0xefca,	// (0x0003cb2e) cell_graphic2_pane_g2_ParamLimits

0xefca,	// (0x0003cb2e) cell_graphic2_pane_g2

0xefd7,	// (0x0003cb3b) cell_graphic2_pane_g3_ParamLimits

0xefd7,	// (0x0003cb3b) cell_graphic2_pane_g3

0xefe4,	// (0x0003cb48) cell_graphic2_pane_g4_ParamLimits

0xefe4,	// (0x0003cb48) cell_graphic2_pane_g4

0xeff1,	// (0x0003cb55) cell_graphic2_pane_g5_ParamLimits

0xeff1,	// (0x0003cb55) cell_graphic2_pane_g5

0x0004,

0x06dc,	// (0x0002e240) cell_graphic2_pane_g_ParamLimits

0x06dc,	// (0x0002e240) cell_graphic2_pane_g

0xf00c,	// (0x0003cb70) cell_graphic2_pane_t1_ParamLimits

0xf00c,	// (0x0003cb70) cell_graphic2_pane_t1

0x5adc,	// (0x00033640) grid_highlight_pane_cp11_ParamLimits

0x5adc,	// (0x00033640) grid_highlight_pane_cp11

0x4a5d,	// (0x000325c1) bg_button_pane_cp05

0xf035,	// (0x0003cb99) cell_graphic2_control_pane_g1

0x7796,	// (0x000352fa) bg_touch_area_indi_pane_g1

0xe05d,	// (0x0003bbc1) aid_cmod_rocker_key_size

0xe067,	// (0x0003bbcb) aid_cmode_itu_key_size

0xe071,	// (0x0003bbd5) main_cmode_video_pane

0xe07b,	// (0x0003bbdf) main_comp_mode_itu_pane

0xe087,	// (0x0003bbeb) main_comp_mode_rocker_pane

0xe093,	// (0x0003bbf7) cell_cmode_rocker_pane_ParamLimits

0xe093,	// (0x0003bbf7) cell_cmode_rocker_pane

0xe0a5,	// (0x0003bc09) cell_cmode_itu_pane_ParamLimits

0xe0a5,	// (0x0003bc09) cell_cmode_itu_pane

0x4a5d,	// (0x000325c1) bg_button_pane_cp06_ParamLimits

0x4a5d,	// (0x000325c1) bg_button_pane_cp06

0x7a1d,	// (0x00035581) cell_cmode_rocker_pane_g1_ParamLimits

0x7a1d,	// (0x00035581) cell_cmode_rocker_pane_g1

0xd89a,	// (0x0003b3fe) cell_cmode_rocker_pane_g2_ParamLimits

0xd89a,	// (0x0003b3fe) cell_cmode_rocker_pane_g2

0x0001,

0xfdb2,	// (0x0003d916) cell_cmode_rocker_pane_g_ParamLimits

0xfdb2,	// (0x0003d916) cell_cmode_rocker_pane_g

0x426f,	// (0x00031dd3) bg_button_pane_cp07

0xe0ba,	// (0x0003bc1e) cell_cmode_itu_pane_g1

0xe0c3,	// (0x0003bc27) cell_cmode_itu_pane_t1

0xe0d1,	// (0x0003bc35) cell_cmode_itu_pane_t2

0x0001,

0xfdb7,	// (0x0003d91b) cell_cmode_itu_pane_t

0xdac0,	// (0x0003b624) aid_touch_ctrl_left

0xdac8,	// (0x0003b62c) aid_touch_ctrl_right

0x426f,	// (0x00031dd3) compa_mode_pane

0xf042,	// (0x0003cba6) aid_cmod_rocker_key_size_cp

0xf04c,	// (0x0003cbb0) aid_cmode_itu_key_size_cp

0xe0df,	// (0x0003bc43) compa_mode_pane_g1

0xe0e7,	// (0x0003bc4b) compa_mode_pane_g2

0xe0ef,	// (0x0003bc53) compa_mode_pane_g3

0x0002,

0xfdbc,	// (0x0003d920) compa_mode_pane_g

0xf056,	// (0x0003cbba) main_comp_mode_itu_pane_cp

0xf05e,	// (0x0003cbc2) main_comp_mode_rocker_pane_cp

0xf066,	// (0x0003cbca) cell_cmode_itu_pane_cp_ParamLimits

0xf066,	// (0x0003cbca) cell_cmode_itu_pane_cp

0xf07b,	// (0x0003cbdf) cell_cmode_rocker_pane_cp_ParamLimits

0xf07b,	// (0x0003cbdf) cell_cmode_rocker_pane_cp

0x4a5d,	// (0x000325c1) bg_button_pane_cp06_cp_ParamLimits

0x4a5d,	// (0x000325c1) bg_button_pane_cp06_cp

0x7a1d,	// (0x00035581) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7a1d,	// (0x00035581) cell_cmode_rocker_pane_g1_cp

0x7796,	// (0x000352fa) cell_cmode_rocker_pane_g2_cp

0x426f,	// (0x00031dd3) bg_button_pane_cp07_cp

0xf08d,	// (0x0003cbf1) cell_cmode_itu_pane_g1_cp

0xf096,	// (0x0003cbfa) cell_cmode_itu_pane_t1_cp

0xf096,	// (0x0003cbfa) cell_cmode_itu_pane_t2_cp

0xc2ba,	// (0x00039e1e) settings_code_pane_cp2

0x42df,	// (0x00031e43) bg_popup_window_pane_cp3_ParamLimits

0x4717,	// (0x0003227b) heading_pane_cp3_ParamLimits

0x4723,	// (0x00032287) listscroll_popup_graphic_pane_ParamLimits

0xaaa4,	// (0x00038608) fep_hwr_aid_pane_ParamLimits

0xaec4,	// (0x00038a28) aid_touch_sctrl_top_ParamLimits

0xaed1,	// (0x00038a35) sctrl_sk_top_pane_g1_ParamLimits

0x7a1d,	// (0x00035581) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0003d870) sctrl_sk_top_pane_g_ParamLimits

0xaede,	// (0x00038a42) sctrl_sk_top_pane_t1_ParamLimits

0xaec4,	// (0x00038a28) aid_touch_sctrl_bottom_ParamLimits

0xaede,	// (0x00038a42) sctrl_sk_bottom_pane_t1_ParamLimits

0xda0a,	// (0x0003b56e) aid_area_touch_clock

0xb0b5,	// (0x00038c19) aid_vkb2_area_top_pane_cell_ParamLimits

0xb0b5,	// (0x00038c19) aid_vkb2_area_top_pane_cell

0xb200,	// (0x00038d64) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb200,	// (0x00038d64) aid_vkb2_area_bottom_pane_cell

0xdf75,	// (0x0003bad9) popup_char_count_window

0xe0f7,	// (0x0003bc5b) popup_char_count_window_g1

0xe100,	// (0x0003bc64) popup_char_count_window_g2

0xe109,	// (0x0003bc6d) popup_char_count_window_g3

0x0002,

0xfdc3,	// (0x0003d927) popup_char_count_window_g

0xe112,	// (0x0003bc76) popup_char_count_window_t1

0xaf83,	// (0x00038ae7) popup_fep_char_preview_window_ParamLimits

0xaf83,	// (0x00038ae7) popup_fep_char_preview_window

0xb0d3,	// (0x00038c37) vkb2_top_candi_pane_ParamLimits

0xb0d3,	// (0x00038c37) vkb2_top_candi_pane

0xf0a4,	// (0x0003cc08) cell_vkb2_top_candi_pane_ParamLimits

0xf0a4,	// (0x0003cc08) cell_vkb2_top_candi_pane

0x5f99,	// (0x00033afd) bg_popup_fep_char_preview_window_ParamLimits

0x5f99,	// (0x00033afd) bg_popup_fep_char_preview_window

0xb4e7,	// (0x0003904b) popup_fep_char_preview_window_t1_ParamLimits

0xb4e7,	// (0x0003904b) popup_fep_char_preview_window_t1

0xe120,	// (0x0003bc84) bg_popup_fep_char_preview_window_g1

0xe128,	// (0x0003bc8c) bg_popup_fep_char_preview_window_g2

0xe130,	// (0x0003bc94) bg_popup_fep_char_preview_window_g3

0xe138,	// (0x0003bc9c) bg_popup_fep_char_preview_window_g4

0xe140,	// (0x0003bca4) bg_popup_fep_char_preview_window_g5

0xb521,	// (0x00039085) bg_popup_fep_char_preview_window_g6

0xe148,	// (0x0003bcac) bg_popup_fep_char_preview_window_g7

0xe150,	// (0x0003bcb4) bg_popup_fep_char_preview_window_g8

0xe158,	// (0x0003bcbc) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdca,	// (0x0003d92e) bg_popup_fep_char_preview_window_g

0x7a1d,	// (0x00035581) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7a1d,	// (0x00035581) cell_vkb2_top_candi_pane_g1

0x7d5f,	// (0x000358c3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7d5f,	// (0x000358c3) cell_vkb2_top_candi_pane_g2

0x7d80,	// (0x000358e4) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7d80,	// (0x000358e4) cell_vkb2_top_candi_pane_g3

0xb529,	// (0x0003908d) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb529,	// (0x0003908d) cell_vkb2_top_candi_pane_g4

0xdf8b,	// (0x0003baef) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdf8b,	// (0x0003baef) cell_vkb2_top_candi_pane_g5

0xd89a,	// (0x0003b3fe) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd89a,	// (0x0003b3fe) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddd,	// (0x0003d941) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddd,	// (0x0003d941) cell_vkb2_top_candi_pane_g

0xb54a,	// (0x000390ae) cell_vkb2_top_candi_pane_t1

0xa7b1,	// (0x00038315) aid_size_touch_slider_mark_ParamLimits

0xa7b1,	// (0x00038315) aid_size_touch_slider_mark

0xee47,	// (0x0003c9ab) grid_graphic2_catg_pane_ParamLimits

0xee47,	// (0x0003c9ab) grid_graphic2_catg_pane

0xeec1,	// (0x0003ca25) popup_grid_graphic2_window_t1_ParamLimits

0xeec1,	// (0x0003ca25) popup_grid_graphic2_window_t1

0xeed3,	// (0x0003ca37) popup_grid_graphic2_window_t2_ParamLimits

0xeed3,	// (0x0003ca37) popup_grid_graphic2_window_t2

0x0001,

0x06d2,	// (0x0002e236) popup_grid_graphic2_window_t_ParamLimits

0x06d2,	// (0x0002e236) popup_grid_graphic2_window_t

0x4a5d,	// (0x000325c1) bg_button_pane_cp05_ParamLimits

0xf035,	// (0x0003cb99) cell_graphic2_control_pane_g1_ParamLimits

0xf0f1,	// (0x0003cc55) cell_graphic2_catg_pane_ParamLimits

0xf0f1,	// (0x0003cc55) cell_graphic2_catg_pane

0x426f,	// (0x00031dd3) bg_button_pane_cp12

0xf103,	// (0x0003cc67) cell_graphic2_catg_pane_g1

0xd9d6,	// (0x0003b53a) cell_tb_ext_pane_t1_ParamLimits

0xb31d,	// (0x00038e81) vkb2_top_cell_right_narrow_pane_ParamLimits

0xb31d,	// (0x00038e81) vkb2_top_cell_right_narrow_pane

0xb335,	// (0x00038e99) vkb2_top_cell_right_wide_pane_ParamLimits

0xb335,	// (0x00038e99) vkb2_top_cell_right_wide_pane

0x7aa1,	// (0x00035605) bg_vkb2_func_pane_ParamLimits

0x7aa1,	// (0x00035605) bg_vkb2_func_pane

0xb3a6,	// (0x00038f0a) vkb2_top_cell_left_pane_g1_ParamLimits

0x7aa1,	// (0x00035605) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7aa1,	// (0x00035605) bg_vkb2_fuc_pane_cp03

0xb404,	// (0x00038f68) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x59fc,	// (0x00033560) bg_vkb2_func_pane_g1

0x59f4,	// (0x00033558) bg_vkb2_func_pane_g2

0x5a04,	// (0x00033568) bg_vkb2_func_pane_g3

0x5a0c,	// (0x00033570) bg_vkb2_func_pane_g4

0x5a14,	// (0x00033578) bg_vkb2_func_pane_g5

0x5a1c,	// (0x00033580) bg_vkb2_func_pane_g6

0x5a2c,	// (0x00033590) bg_vkb2_func_pane_g7

0x5a24,	// (0x00033588) bg_vkb2_func_pane_g8

0x59ec,	// (0x00033550) bg_vkb2_func_pane_g9

0x0008,

0xfdea,	// (0x0003d94e) bg_vkb2_func_pane_g

0x7aa1,	// (0x00035605) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7aa1,	// (0x00035605) bg_vkb2_fuc_pane_cp01

0xb3a6,	// (0x00038f0a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xb3a6,	// (0x00038f0a) vkb2_top_cell_right_wide_pane_g1

0x7aa1,	// (0x00035605) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7aa1,	// (0x00035605) bg_vkb2_fuc_pane_cp02

0xb404,	// (0x00038f68) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xb404,	// (0x00038f68) vkb2_top_cell_right_narrow_pane_g1

0xd602,	// (0x0003b166) aid_touch_area_decrease_ParamLimits

0xd602,	// (0x0003b166) aid_touch_area_decrease

0xd626,	// (0x0003b18a) aid_touch_area_increase_ParamLimits

0xd626,	// (0x0003b18a) aid_touch_area_increase

0xd632,	// (0x0003b196) aid_touch_area_mute_ParamLimits

0xd632,	// (0x0003b196) aid_touch_area_mute

0xd656,	// (0x0003b1ba) aid_touch_area_slider_ParamLimits

0xd656,	// (0x0003b1ba) aid_touch_area_slider

0xd742,	// (0x0003b2a6) popup_slider_window_g4_ParamLimits

0xd742,	// (0x0003b2a6) popup_slider_window_g4

0xd74e,	// (0x0003b2b2) popup_slider_window_g5_ParamLimits

0xd74e,	// (0x0003b2b2) popup_slider_window_g5

0xd770,	// (0x0003b2d4) popup_slider_window_g6_ParamLimits

0xd770,	// (0x0003b2d4) popup_slider_window_g6

0xd7b0,	// (0x0003b314) popup_slider_window_t2_ParamLimits

0xd7b0,	// (0x0003b314) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0003d864) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0003d864) popup_slider_window_t

0xd7c8,	// (0x0003b32c) slider_pane_ParamLimits

0xd7c8,	// (0x0003b32c) slider_pane

0xe160,	// (0x0003bcc4) slider_pane_g1_ParamLimits

0xe160,	// (0x0003bcc4) slider_pane_g1

0xe174,	// (0x0003bcd8) slider_pane_g2_ParamLimits

0xe174,	// (0x0003bcd8) slider_pane_g2

0xe18a,	// (0x0003bcee) slider_pane_g3_ParamLimits

0xe18a,	// (0x0003bcee) slider_pane_g3

0x0003,

0xfdfd,	// (0x0003d961) slider_pane_g_ParamLimits

0xfdfd,	// (0x0003d961) slider_pane_g

0xbad4,	// (0x00039638) popup_tb_float_extension_window_ParamLimits

0xbad4,	// (0x00039638) popup_tb_float_extension_window

0xe1b6,	// (0x0003bd1a) aid_size_cell_tb_float_ext

0x426f,	// (0x00031dd3) bg_popup_sub_window_cp28

0xe1c2,	// (0x0003bd26) grid_tb_float_ext_pane

0xe1cc,	// (0x0003bd30) cell_tb_float_ext_pane_ParamLimits

0xe1cc,	// (0x0003bd30) cell_tb_float_ext_pane

0xe1e6,	// (0x0003bd4a) cell_tb_float_ext_pane_g1

0xe1ef,	// (0x0003bd53) grid_highlight_pane_cp12

0xabd7,	// (0x0003873b) cell_last_hwr_side_pane_ParamLimits

0xabd7,	// (0x0003873b) cell_last_hwr_side_pane

0x7796,	// (0x000352fa) cell_last_hwr_side_pane_g1

0xe1f8,	// (0x0003bd5c) cell_last_hwr_side_pane_g2

0x0001,

0xfe06,	// (0x0003d96a) cell_last_hwr_side_pane_g

0xb2cc,	// (0x00038e30) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb2cc,	// (0x00038e30) vkb2_area_bottom_space_btn_pane

0x7a1d,	// (0x00035581) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe04b,	// (0x0003bbaf) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb54a,	// (0x000390ae) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb569,	// (0x000390cd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb569,	// (0x000390cd) vkb2_area_bottom_space_btn_pane_g1

0xb5a3,	// (0x00039107) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb5a3,	// (0x00039107) vkb2_area_bottom_space_btn_pane_g2

0xb5d9,	// (0x0003913d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb5d9,	// (0x0003913d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0b,	// (0x0003d96f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0b,	// (0x0003d96f) vkb2_area_bottom_space_btn_pane_g

0xab4b,	// (0x000386af) cel_fep_hwr_func_pane_ParamLimits

0xab4b,	// (0x000386af) cel_fep_hwr_func_pane

0xab87,	// (0x000386eb) cell_hwr_side_button_pane_ParamLimits

0xab87,	// (0x000386eb) cell_hwr_side_button_pane

0xda0a,	// (0x0003b56e) aid_area_touch_clock_ParamLimits

0x4412,	// (0x00031f76) bg_uniindi_top_pane_ParamLimits

0xda1c,	// (0x0003b580) uniindi_top_pane_g1_ParamLimits

0xda32,	// (0x0003b596) uniindi_top_pane_g2_ParamLimits

0xda3e,	// (0x0003b5a2) uniindi_top_pane_g3_ParamLimits

0xda4f,	// (0x0003b5b3) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0003d89c) uniindi_top_pane_g_ParamLimits

0xda5c,	// (0x0003b5c0) uniindi_top_pane_t1_ParamLimits

0x4412,	// (0x00031f76) bg_vkb2_func_pane_cp01_ParamLimits

0x4412,	// (0x00031f76) bg_vkb2_func_pane_cp01

0xe201,	// (0x0003bd65) cel_fep_hwr_func_pane_g1_ParamLimits

0xe201,	// (0x0003bd65) cel_fep_hwr_func_pane_g1

0x4412,	// (0x00031f76) bg_vkb2_func_pane_cp02_ParamLimits

0x4412,	// (0x00031f76) bg_vkb2_func_pane_cp02

0xe201,	// (0x0003bd65) cell_hwr_side_button_pane_g1_ParamLimits

0xe201,	// (0x0003bd65) cell_hwr_side_button_pane_g1

0x5904,	// (0x00033468) status_pane_g4_ParamLimits

0x5904,	// (0x00033468) status_pane_g4

0x591c,	// (0x00033480) status_pane_t1

0x7625,	// (0x00035189) form2_midp_gauge_slider_cont_pane

0x762d,	// (0x00035191) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc550,	// (0x0003a0b4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc562,	// (0x0003a0c6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0b,	// (0x0003d66f) form2_midp_gauge_slider_pane_t_ParamLimits

0x763f,	// (0x000351a3) form2_midp_slider_pane_ParamLimits

0xaf43,	// (0x00038aa7) aid_size_cell_func_vkb2_ParamLimits

0xaf43,	// (0x00038aa7) aid_size_cell_func_vkb2

0xe1a2,	// (0x0003bd06) slider_pane_g4_ParamLimits

0xe1a2,	// (0x0003bd06) slider_pane_g4

0xb623,	// (0x00039187) form2_midp_gauge_slider_pane_t2_cp01

0xb631,	// (0x00039195) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb631,	// (0x00039195) form2_midp_gauge_slider_pane_t3_cp01

0xb64e,	// (0x000391b2) form2_midp_slider_pane_cp01

0x426f,	// (0x00031dd3) navi_smil_pane

0xe231,	// (0x0003bd95) navi_smil_pane_g1

0xe239,	// (0x0003bd9d) navi_smil_pane_t1

0xe20f,	// (0x0003bd73) form2_midp_slider_pane_g1

0xe218,	// (0x0003bd7c) form2_midp_slider_pane_g2

0xe220,	// (0x0003bd84) form2_midp_slider_pane_g3

0xe20f,	// (0x0003bd73) form2_midp_slider_pane_g4

0xf10c,	// (0x0003cc70) form2_midp_slider_pane_g5

0x0004,

0xfe14,	// (0x0003d978) form2_midp_slider_pane_g

0xb613,	// (0x00039177) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb613,	// (0x00039177) vkb2_area_bottom_space_btn_pane_g4

0xbc3f,	// (0x000397a3) lc0_navi_pane_ParamLimits

0xbc3f,	// (0x000397a3) lc0_navi_pane

0xbcb5,	// (0x00039819) lc0_stat_indi_pane_ParamLimits

0xbcb5,	// (0x00039819) lc0_stat_indi_pane

0xbccc,	// (0x00039830) ls0_title_pane_ParamLimits

0xbccc,	// (0x00039830) ls0_title_pane

0x4a5d,	// (0x000325c1) bg_popup_sub_pane_cp14_ParamLimits

0xd9f1,	// (0x0003b555) list_uniindi_pane_ParamLimits

0xd9fd,	// (0x0003b561) uniindi_top_pane_ParamLimits

0xda98,	// (0x0003b5fc) list_single_uniindi_pane_g1_ParamLimits

0xdaab,	// (0x0003b60f) list_single_uniindi_pane_t1_ParamLimits

0xb657,	// (0x000391bb) lc0_stat_clock_pane_ParamLimits

0xb657,	// (0x000391bb) lc0_stat_clock_pane

0xf115,	// (0x0003cc79) lc0_stat_indi_pane_g1_ParamLimits

0xf115,	// (0x0003cc79) lc0_stat_indi_pane_g1

0xf122,	// (0x0003cc86) lc0_stat_indi_pane_g2_ParamLimits

0xf122,	// (0x0003cc86) lc0_stat_indi_pane_g2

0x0001,

0x0759,	// (0x0002e2bd) lc0_stat_indi_pane_g_ParamLimits

0x0759,	// (0x0002e2bd) lc0_stat_indi_pane_g

0xb664,	// (0x000391c8) lc0_uni_indicator_pane_ParamLimits

0xb664,	// (0x000391c8) lc0_uni_indicator_pane

0xf12f,	// (0x0003cc93) ls0_title_pane_g1_ParamLimits

0xf12f,	// (0x0003cc93) ls0_title_pane_g1

0xf143,	// (0x0003cca7) ls0_title_pane_t1_ParamLimits

0xf143,	// (0x0003cca7) ls0_title_pane_t1

0xb671,	// (0x000391d5) lc0_uni_indicator_pane_g1_ParamLimits

0xb671,	// (0x000391d5) lc0_uni_indicator_pane_g1

0xe247,	// (0x0003bdab) lc0_stat_clock_pane_t1

0x426f,	// (0x00031dd3) main_ai5_pane

0xe255,	// (0x0003bdb9) ai5_sk_pane_ParamLimits

0xe255,	// (0x0003bdb9) ai5_sk_pane

0xf179,	// (0x0003ccdd) cell_ai5_widget_pane_ParamLimits

0xf179,	// (0x0003ccdd) cell_ai5_widget_pane

0xe262,	// (0x0003bdc6) aid_size_cell_widget_grid

0xe276,	// (0x0003bdda) bg_ai5_widget_pane_ParamLimits

0xe276,	// (0x0003bdda) bg_ai5_widget_pane

0xf223,	// (0x0003cd87) cell_ai5_widget_pane_g2

0xf233,	// (0x0003cd97) cell_ai5_widget_pane_g3

0xf252,	// (0x0003cdb6) cell_ai5_widget_pane_g4

0xf25e,	// (0x0003cdc2) cell_ai5_widget_pane_g5

0xf26a,	// (0x0003cdce) cell_ai5_widget_pane_g6

0xf276,	// (0x0003cdda) cell_ai5_widget_pane_g7

0xf2be,	// (0x0003ce22) cell_ai5_widget_pane_t1_ParamLimits

0xf2be,	// (0x0003ce22) cell_ai5_widget_pane_t1

0xf2db,	// (0x0003ce3f) cell_ai5_widget_pane_t2_ParamLimits

0xf2db,	// (0x0003ce3f) cell_ai5_widget_pane_t2

0xf2f3,	// (0x0003ce57) cell_ai5_widget_pane_t3_ParamLimits

0xf2f3,	// (0x0003ce57) cell_ai5_widget_pane_t3

0xf30b,	// (0x0003ce6f) cell_ai5_widget_pane_t4_ParamLimits

0xf30b,	// (0x0003ce6f) cell_ai5_widget_pane_t4

0xf325,	// (0x0003ce89) cell_ai5_widget_pane_t5_ParamLimits

0xf325,	// (0x0003ce89) cell_ai5_widget_pane_t5

0xe282,	// (0x0003bde6) cell_ai5_widget_pane_t6_ParamLimits

0xe282,	// (0x0003bde6) cell_ai5_widget_pane_t6

0xe294,	// (0x0003bdf8) cell_ai5_widget_pane_t7_ParamLimits

0xe294,	// (0x0003bdf8) cell_ai5_widget_pane_t7

0xf344,	// (0x0003cea8) cell_ai5_widget_pane_t8_ParamLimits

0xf344,	// (0x0003cea8) cell_ai5_widget_pane_t8

0x0009,

0xfe1f,	// (0x0003d983) cell_ai5_widget_pane_t_ParamLimits

0xfe1f,	// (0x0003d983) cell_ai5_widget_pane_t

0xf390,	// (0x0003cef4) grid_ai5_widget_pane

0x4a5d,	// (0x000325c1) highlight_cell_ai5_widget_pane_ParamLimits

0x4a5d,	// (0x000325c1) highlight_cell_ai5_widget_pane

0xf3a6,	// (0x0003cf0a) ai5_sk_left_pane

0xf3b0,	// (0x0003cf14) ai5_sk_middle_pane

0xf3ba,	// (0x0003cf1e) ai5_sk_right_pane

0xe2ad,	// (0x0003be11) bg_ai5_widget_pane_g1_ParamLimits

0xe2ad,	// (0x0003be11) bg_ai5_widget_pane_g1

0xe2b9,	// (0x0003be1d) bg_ai5_widget_pane_g2_ParamLimits

0xe2b9,	// (0x0003be1d) bg_ai5_widget_pane_g2

0xe2c5,	// (0x0003be29) bg_ai5_widget_pane_g3_ParamLimits

0xe2c5,	// (0x0003be29) bg_ai5_widget_pane_g3

0xe2d1,	// (0x0003be35) bg_ai5_widget_pane_g4_ParamLimits

0xe2d1,	// (0x0003be35) bg_ai5_widget_pane_g4

0xe2dd,	// (0x0003be41) bg_ai5_widget_pane_g5_ParamLimits

0xe2dd,	// (0x0003be41) bg_ai5_widget_pane_g5

0xe2e9,	// (0x0003be4d) bg_ai5_widget_pane_g6_ParamLimits

0xe2e9,	// (0x0003be4d) bg_ai5_widget_pane_g6

0xe2f5,	// (0x0003be59) bg_ai5_widget_pane_g7_ParamLimits

0xe2f5,	// (0x0003be59) bg_ai5_widget_pane_g7

0xe301,	// (0x0003be65) bg_ai5_widget_pane_g8_ParamLimits

0xe301,	// (0x0003be65) bg_ai5_widget_pane_g8

0xe30d,	// (0x0003be71) bg_ai5_widget_pane_g9_ParamLimits

0xe30d,	// (0x0003be71) bg_ai5_widget_pane_g9

0x0008,

0xfe34,	// (0x0003d998) bg_ai5_widget_pane_g_ParamLimits

0xfe34,	// (0x0003d998) bg_ai5_widget_pane_g

0xe340,	// (0x0003bea4) cell_shortcut_ai5_widget_pane_ParamLimits

0xe340,	// (0x0003bea4) cell_shortcut_ai5_widget_pane

0x431b,	// (0x00031e7f) bg_cell_shortcut_ai5_widget_pane

0xe351,	// (0x0003beb5) cell_grid_ai5_widget_pane_g1

0xe35a,	// (0x0003bebe) highlight_cell_shortcut_ai5_widget_pane

0x59f4,	// (0x00033558) ai5_sk_left_pane_g1

0xe362,	// (0x0003bec6) ai5_sk_left_pane_g2

0xe36a,	// (0x0003bece) ai5_sk_left_pane_g3

0xe372,	// (0x0003bed6) ai5_sk_left_pane_g4

0x0003,

0xfe47,	// (0x0003d9ab) ai5_sk_left_pane_g

0xe37a,	// (0x0003bede) ai5_sk_left_pane_t1

0x59fc,	// (0x00033560) ai5_sk_right_pane_g1

0xe388,	// (0x0003beec) ai5_sk_right_pane_g2

0xe390,	// (0x0003bef4) ai5_sk_right_pane_g3

0xe398,	// (0x0003befc) ai5_sk_right_pane_g4

0x0003,

0xfe50,	// (0x0003d9b4) ai5_sk_right_pane_g

0xe3a0,	// (0x0003bf04) ai5_sk_right_pane_t1

0x59fc,	// (0x00033560) ai5_sk_middle_pane_g1

0x59f4,	// (0x00033558) ai5_sk_middle_pane_g2

0x5a14,	// (0x00033578) ai5_sk_middle_pane_g3

0xe390,	// (0x0003bef4) ai5_sk_middle_pane_g4

0xe36a,	// (0x0003bece) ai5_sk_middle_pane_g5

0xe3ae,	// (0x0003bf12) ai5_sk_middle_pane_g6

0xf3c4,	// (0x0003cf28) ai5_sk_middle_pane_g7

0x0006,

0xfe59,	// (0x0003d9bd) ai5_sk_middle_pane_g

0xbb84,	// (0x000396e8) aid_touch_area_size_lc0_ParamLimits

0xbb84,	// (0x000396e8) aid_touch_area_size_lc0

0xacd6,	// (0x0003883a) cell_hwr_candidate_pane_t1_ParamLimits

0x5818,	// (0x0003337c) aid_touch_navi_pane

0xbda2,	// (0x00039906) status_dt_navi_pane_ParamLimits

0xbda2,	// (0x00039906) status_dt_navi_pane

0xbdaf,	// (0x00039913) status_dt_sta_pane_ParamLimits

0xbdaf,	// (0x00039913) status_dt_sta_pane

0xf3cc,	// (0x0003cf30) dt_sta_controll_pane

0xf3d9,	// (0x0003cf3d) dt_sta_indi_pane

0xf3ea,	// (0x0003cf4e) dt_sta_title_pane

0x4412,	// (0x00031f76) bg_dt_sta_indi_pane_ParamLimits

0x4412,	// (0x00031f76) bg_dt_sta_indi_pane

0xf3fd,	// (0x0003cf61) dt_sta_battery_pane

0xf405,	// (0x0003cf69) dt_sta_indi_pane_g1

0xe3b6,	// (0x0003bf1a) dt_sta_indi_pane_g2

0xe3bf,	// (0x0003bf23) dt_sta_indi_pane_g3

0x0002,

0xfe68,	// (0x0003d9cc) dt_sta_indi_pane_g

0xe3c8,	// (0x0003bf2c) dt_sta_signal_pane

0x4a5d,	// (0x000325c1) bg_dt_sta_title_pane_ParamLimits

0x4a5d,	// (0x000325c1) bg_dt_sta_title_pane

0x66b1,	// (0x00034215) dt_sta_title_pane_g1

0xf40e,	// (0x0003cf72) dt_sta_title_pane_t1_ParamLimits

0xf40e,	// (0x0003cf72) dt_sta_title_pane_t1

0x426f,	// (0x00031dd3) bg_dt_sta_control_pane

0xf423,	// (0x0003cf87) dt_sta_controll_pane_g1

0xe3d1,	// (0x0003bf35) bg_dt_sta_title_pane_g1

0xe3da,	// (0x0003bf3e) bg_dt_sta_title_pane_g2

0xe3e3,	// (0x0003bf47) bg_dt_sta_title_pane_g3

0x0002,

0xfe6f,	// (0x0003d9d3) bg_dt_sta_title_pane_g

0x7796,	// (0x000352fa) bg_dt_sta_indi_pane_g1

0xe3ec,	// (0x0003bf50) dt_sta_signal_pane_g1

0xe3f4,	// (0x0003bf58) dt_sta_signal_pane_g2

0x0001,

0xfe76,	// (0x0003d9da) dt_sta_signal_pane_g

0xe3fc,	// (0x0003bf60) dt_sta_battery_pane_g1

0xe405,	// (0x0003bf69) dt_sta_battery_pane_t1

0x7796,	// (0x000352fa) bg_dt_sta_control_pane_g1

0x5013,	// (0x00032b77) fep_china_uni_eep_pane

0x501b,	// (0x00032b7f) fep_china_uni_entry_pane_ParamLimits

0x502b,	// (0x00032b8f) popup_fep_china_uni_window_g1_ParamLimits

0x503b,	// (0x00032b9f) popup_fep_china_uni_window_g2_ParamLimits

0x503b,	// (0x00032b9f) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0003d29e) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0003d29e) popup_fep_china_uni_window_g

0xe414,	// (0x0003bf78) fep_china_uni_eep_pane_g1

0xe41c,	// (0x0003bf80) fep_china_uni_eep_pane_t1

0xe228,	// (0x0003bd8c) aid_touch_area_size_smil_player

0x58d7,	// (0x0003343b) lc0_clock_pane

0x5910,	// (0x00033474) status_pane_g5_ParamLimits

0x5910,	// (0x00033474) status_pane_g5

0xb7e6,	// (0x0003934a) popup_keymap_window

0x58f0,	// (0x00033454) status_icon_pane

0xf233,	// (0x0003cd97) cell_ai5_widget_pane_g3_ParamLimits

0xf252,	// (0x0003cdb6) cell_ai5_widget_pane_g4_ParamLimits

0xf25e,	// (0x0003cdc2) cell_ai5_widget_pane_g5_ParamLimits

0xf282,	// (0x0003cde6) cell_ai5_widget_pane_g8_ParamLimits

0xf282,	// (0x0003cde6) cell_ai5_widget_pane_g8

0xf296,	// (0x0003cdfa) cell_ai5_widget_pane_g9_ParamLimits

0xf296,	// (0x0003cdfa) cell_ai5_widget_pane_g9

0xf2aa,	// (0x0003ce0e) cell_ai5_widget_pane_g10_ParamLimits

0xf2aa,	// (0x0003ce0e) cell_ai5_widget_pane_g10

0xe42b,	// (0x0003bf8f) status_icon_pane_g1

0x426f,	// (0x00031dd3) bg_popup_sub_pane_cp13

0xe433,	// (0x0003bf97) popup_keymap_window_t1

0xa3a1,	// (0x00037f05) control_pane_g6_ParamLimits

0xa3a1,	// (0x00037f05) control_pane_g6

0xa3ae,	// (0x00037f12) control_pane_g7_ParamLimits

0xa3ae,	// (0x00037f12) control_pane_g7

0xa3bb,	// (0x00037f1f) control_pane_g8_ParamLimits

0xa3bb,	// (0x00037f1f) control_pane_g8

0xf3cc,	// (0x0003cf30) dt_sta_controll_pane_ParamLimits

0xf3d9,	// (0x0003cf3d) dt_sta_indi_pane_ParamLimits

0xf3ea,	// (0x0003cf4e) dt_sta_title_pane_ParamLimits

0x499f,	// (0x00032503) aid_size_touch_scroll_bar_cale

0x9681,	// (0x000371e5) popup_discreet_window_ParamLimits

0x9681,	// (0x000371e5) popup_discreet_window

0x96fb,	// (0x0003725f) popup_sk_window

0x5f99,	// (0x00033afd) bg_popup_sub_pane_cp28_ParamLimits

0x5f99,	// (0x00033afd) bg_popup_sub_pane_cp28

0xe441,	// (0x0003bfa5) popup_discreet_window_g1_ParamLimits

0xe441,	// (0x0003bfa5) popup_discreet_window_g1

0xe461,	// (0x0003bfc5) popup_discreet_window_t1_ParamLimits

0xe461,	// (0x0003bfc5) popup_discreet_window_t1

0xe47f,	// (0x0003bfe3) popup_discreet_window_t2_ParamLimits

0xe47f,	// (0x0003bfe3) popup_discreet_window_t2

0x0002,

0xfe7b,	// (0x0003d9df) popup_discreet_window_t_ParamLimits

0xfe7b,	// (0x0003d9df) popup_discreet_window_t

0xb687,	// (0x000391eb) popup_sk_window_g1

0xb691,	// (0x000391f5) popup_sk_window_g2

0x0001,

0xfe82,	// (0x0003d9e6) popup_sk_window_g

0xe4d1,	// (0x0003c035) popup_sk_window_t1

0xe4df,	// (0x0003c043) popup_sk_window_t1_copy1

0xf223,	// (0x0003cd87) cell_ai5_widget_pane_g2_ParamLimits

0xf356,	// (0x0003ceba) cell_ai5_widget_pane_t9_ParamLimits

0xf356,	// (0x0003ceba) cell_ai5_widget_pane_t9

0x426f,	// (0x00031dd3) main_fep_fshwr2_pane

0xf42c,	// (0x0003cf90) aid_fshwr2_btn_pane

0xf434,	// (0x0003cf98) aid_fshwr2_syb_pane

0xf43c,	// (0x0003cfa0) aid_fshwr2_txt_pane

0xf444,	// (0x0003cfa8) fshwr2_func_candi_pane

0xf450,	// (0x0003cfb4) fshwr2_hwr_syb_pane

0xf45c,	// (0x0003cfc0) fshwr2_icf_pane

0x426f,	// (0x00031dd3) fshwr2_icf_bg_pane

0xf466,	// (0x0003cfca) fshwr2_icf_pane_t1_ParamLimits

0xf466,	// (0x0003cfca) fshwr2_icf_pane_t1

0x7796,	// (0x000352fa) fshwr2_func_candi_pane_g1

0xe501,	// (0x0003c065) fshwr2_func_candi_row_pane_ParamLimits

0xe501,	// (0x0003c065) fshwr2_func_candi_row_pane

0xf47d,	// (0x0003cfe1) cell_fshwr2_syb_pane_ParamLimits

0xf47d,	// (0x0003cfe1) cell_fshwr2_syb_pane

0x7a1d,	// (0x00035581) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7a1d,	// (0x00035581) fshwr2_hwr_syb_pane_g1

0x426f,	// (0x00031dd3) bg_popup_call_pane_cp01

0xe512,	// (0x0003c076) fshwr2_func_candi_cell_pane_ParamLimits

0xe512,	// (0x0003c076) fshwr2_func_candi_cell_pane

0xe543,	// (0x0003c0a7) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe543,	// (0x0003c0a7) fshwr2_func_candi_cell_bg_pane

0xe55d,	// (0x0003c0c1) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe55d,	// (0x0003c0c1) fshwr2_func_candi_cell_pane_g1

0xe57d,	// (0x0003c0e1) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe57d,	// (0x0003c0e1) fshwr2_func_candi_cell_pane_t1

0x426f,	// (0x00031dd3) bg_button_pane_cp08

0x54a4,	// (0x00033008) cell_fshwr2_syb_bg_pane

0xf499,	// (0x0003cffd) cell_fshwr2_syb_bg_pane_g1

0xe590,	// (0x0003c0f4) cell_fshwr2_syb_bg_pane_t1

0x4a5d,	// (0x000325c1) main_tmo_pane

0xc0f5,	// (0x00039c59) uni_indicator_pane_g1_ParamLimits

0xc10a,	// (0x00039c6e) uni_indicator_pane_g2_ParamLimits

0xc120,	// (0x00039c84) uni_indicator_pane_g3_ParamLimits

0x6975,	// (0x000344d9) uni_indicator_pane_g4_ParamLimits

0x6975,	// (0x000344d9) uni_indicator_pane_g4

0x6989,	// (0x000344ed) uni_indicator_pane_g5_ParamLimits

0x6989,	// (0x000344ed) uni_indicator_pane_g5

0x699d,	// (0x00034501) uni_indicator_pane_g6_ParamLimits

0x699d,	// (0x00034501) uni_indicator_pane_g6

0xf937,	// (0x0003d49b) uni_indicator_pane_g_ParamLimits

0xd5e4,	// (0x0003b148) popup_tmo_note_window_ParamLimits

0xd5e4,	// (0x0003b148) popup_tmo_note_window

0x426f,	// (0x00031dd3) fshwr2_bg_pane

0xe56e,	// (0x0003c0d2) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe56e,	// (0x0003c0d2) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe87,	// (0x0003d9eb) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe87,	// (0x0003d9eb) fshwr2_func_candi_cell_pane_g

0x7796,	// (0x000352fa) bg_popup_window_pane_cp01

0xe59f,	// (0x0003c103) bg_popup_window_pane_g1_cp01

0xe5a8,	// (0x0003c10c) bg_popup_window_pane_cp22_ParamLimits

0xe5a8,	// (0x0003c10c) bg_popup_window_pane_cp22

0xe5b6,	// (0x0003c11a) listscroll_tmo_link_pane_ParamLimits

0xe5b6,	// (0x0003c11a) listscroll_tmo_link_pane

0xe5f6,	// (0x0003c15a) popup_tmo_note_window_g1_ParamLimits

0xe5f6,	// (0x0003c15a) popup_tmo_note_window_g1

0xe603,	// (0x0003c167) tmo_note_info_pane_ParamLimits

0xe603,	// (0x0003c167) tmo_note_info_pane

0xf4a1,	// (0x0003d005) list_tmo_note_info_pane_g1_ParamLimits

0xf4a1,	// (0x0003d005) list_tmo_note_info_pane_g1

0xe61d,	// (0x0003c181) list_tmo_note_info_pane_g2_ParamLimits

0xe61d,	// (0x0003c181) list_tmo_note_info_pane_g2

0x0001,

0xfe8c,	// (0x0003d9f0) list_tmo_note_info_pane_g_ParamLimits

0xfe8c,	// (0x0003d9f0) list_tmo_note_info_pane_g

0xe639,	// (0x0003c19d) list_tmo_note_info_text_pane_ParamLimits

0xe639,	// (0x0003c19d) list_tmo_note_info_text_pane

0xe67b,	// (0x0003c1df) list_tmo_link_pane

0xe688,	// (0x0003c1ec) scroll_pane_cp20

0xe695,	// (0x0003c1f9) list_single_tmo_link_pane_ParamLimits

0xe695,	// (0x0003c1f9) list_single_tmo_link_pane

0xe6a5,	// (0x0003c209) list_single_tmo_link_pane_t1

0xe6b3,	// (0x0003c217) list_tmo_note_info_text_pane_t1_ParamLimits

0xe6b3,	// (0x0003c217) list_tmo_note_info_text_pane_t1

0x9bc7,	// (0x0003772b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9bc7,	// (0x0003772b) aid_size_touch_scroll_bar_cp01

0x8b8f,	// (0x000366f3) aid_size_touch_slider_marker

0x96e3,	// (0x00037247) popup_settings_window_ParamLimits

0x96e3,	// (0x00037247) popup_settings_window

0x8d31,	// (0x00036895) popup_candi_list_indi_window

0x5818,	// (0x0003337c) aid_touch_navi_pane_ParamLimits

0xae98,	// (0x000389fc) rs_clock_indi_pane

0xaea1,	// (0x00038a05) sctrl_sk_bottom_pane_ParamLimits

0xaeb2,	// (0x00038a16) sctrl_sk_top_pane_ParamLimits

0xaf9d,	// (0x00038b01) popup_fep_tooltip_window

0xe262,	// (0x0003bdc6) aid_size_cell_widget_grid_ParamLimits

0xf217,	// (0x0003cd7b) cell_ai5_widget_pane_g1_ParamLimits

0xf217,	// (0x0003cd7b) cell_ai5_widget_pane_g1

0xf26a,	// (0x0003cdce) cell_ai5_widget_pane_g6_ParamLimits

0xf276,	// (0x0003cdda) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x075e,	// (0x0002e2c2) cell_ai5_widget_pane_g_ParamLimits

0x075e,	// (0x0002e2c2) cell_ai5_widget_pane_g

0xf37a,	// (0x0003cede) cell_ai5_widget_pane_t10_ParamLimits

0xf37a,	// (0x0003cede) cell_ai5_widget_pane_t10

0xf390,	// (0x0003cef4) grid_ai5_widget_pane_ParamLimits

0xe319,	// (0x0003be7d) cell_contacts_ai5_widget_pane_ParamLimits

0xe319,	// (0x0003be7d) cell_contacts_ai5_widget_pane

0xe494,	// (0x0003bff8) popup_discreet_window_t3_ParamLimits

0xe494,	// (0x0003bff8) popup_discreet_window_t3

0xe4ed,	// (0x0003c051) popup_fshwr2_char_preview_window_ParamLimits

0xe4ed,	// (0x0003c051) popup_fshwr2_char_preview_window

0xf4b8,	// (0x0003d01c) tmo_note_info_pane_t1

0xf4cd,	// (0x0003d031) tmo_note_info_pane_t2

0xf4e6,	// (0x0003d04a) tmo_note_info_pane_t3

0xe657,	// (0x0003c1bb) tmo_note_info_pane_t4

0xe669,	// (0x0003c1cd) tmo_note_info_pane_t5

0x0004,

0xfe91,	// (0x0003d9f5) tmo_note_info_pane_t

0xe67b,	// (0x0003c1df) list_tmo_link_pane_ParamLimits

0xe688,	// (0x0003c1ec) scroll_pane_cp20_ParamLimits

0x426f,	// (0x00031dd3) bg_popup_fep_char_preview_window_cp01

0xe6cc,	// (0x0003c230) popup_fshwr2_char_preview_window_t1

0xe6da,	// (0x0003c23e) popup_candi_list_indi_window_g1

0xe6e3,	// (0x0003c247) bg_cell_contacts_ai5_widget_pane

0xe6ef,	// (0x0003c253) cell_contacts_ai5_widget_pane_g1

0xe703,	// (0x0003c267) cell_contacts_ai5_widget_pane_g2

0xe712,	// (0x0003c276) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9c,	// (0x0003da00) cell_contacts_ai5_widget_pane_g

0xe725,	// (0x0003c289) cell_contacts_ai5_widget_pane_t1

0x4a5d,	// (0x000325c1) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe79f,	// (0x0003c303) settings_container_pane

0x54a4,	// (0x00033008) listscroll_set_pane_copy1

0x7186,	// (0x00034cea) scroll_pane_cp121_copy1

0xe7ab,	// (0x0003c30f) set_content_pane_copy1

0xe7b3,	// (0x0003c317) aid_height_set_list_copy1_ParamLimits

0xe7b3,	// (0x0003c317) aid_height_set_list_copy1

0x618a,	// (0x00033cee) aid_size_parent_copy1_ParamLimits

0x618a,	// (0x00033cee) aid_size_parent_copy1

0xe7bf,	// (0x0003c323) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe7bf,	// (0x0003c323) button_value_adjust_pane_cp6_copy1

0x4bb4,	// (0x00032718) list_highlight_pane_cp2_copy1_ParamLimits

0x4bb4,	// (0x00032718) list_highlight_pane_cp2_copy1

0xe7d3,	// (0x0003c337) list_set_pane_copy1_ParamLimits

0xe7d3,	// (0x0003c337) list_set_pane_copy1

0xe73a,	// (0x0003c29e) main_pane_set_t1_copy1_ParamLimits

0xe73a,	// (0x0003c29e) main_pane_set_t1_copy1

0xe774,	// (0x0003c2d8) main_pane_set_t2_copy1_ParamLimits

0xe774,	// (0x0003c2d8) main_pane_set_t2_copy1

0xe880,	// (0x0003c3e4) main_pane_set_t3_copy1

0xe88e,	// (0x0003c3f2) main_pane_set_t4_copy1

0xe793,	// (0x0003c2f7) set_content_pane_g1_copy1_ParamLimits

0xe793,	// (0x0003c2f7) set_content_pane_g1_copy1

0xe89c,	// (0x0003c400) setting_code_pane_copy1

0xe8a6,	// (0x0003c40a) setting_slider_graphic_pane_copy1

0xe8a6,	// (0x0003c40a) setting_slider_pane_copy1

0xe8a6,	// (0x0003c40a) setting_text_pane_copy1

0xe8b0,	// (0x0003c414) setting_volume_pane_copy1

0xe8b9,	// (0x0003c41d) settings_code_pane_cp2_copy1

0xe8c1,	// (0x0003c425) settings_code_pane_cp_copy1_ParamLimits

0xe8c1,	// (0x0003c425) settings_code_pane_cp_copy1

0xe8d5,	// (0x0003c439) volume_set_pane_copy1

0xe8dd,	// (0x0003c441) volume_set_pane_g10_copy1

0xe8e5,	// (0x0003c449) volume_set_pane_g1_copy1

0xe8ed,	// (0x0003c451) volume_set_pane_g2_copy1

0xe8f5,	// (0x0003c459) volume_set_pane_g3_copy1

0xe8fd,	// (0x0003c461) volume_set_pane_g4_copy1

0xe905,	// (0x0003c469) volume_set_pane_g5_copy1

0xe90d,	// (0x0003c471) volume_set_pane_g6_copy1

0xe915,	// (0x0003c479) volume_set_pane_g7_copy1

0xe91d,	// (0x0003c481) volume_set_pane_g8_copy1

0xe925,	// (0x0003c489) volume_set_pane_g9_copy1

0x42df,	// (0x00031e43) bg_set_opt_pane_cp_copy1_ParamLimits

0x42df,	// (0x00031e43) bg_set_opt_pane_cp_copy1

0xe92d,	// (0x0003c491) setting_slider_pane_t1_copy1_ParamLimits

0xe92d,	// (0x0003c491) setting_slider_pane_t1_copy1

0xe94b,	// (0x0003c4af) setting_slider_pane_t2_copy1_ParamLimits

0xe94b,	// (0x0003c4af) setting_slider_pane_t2_copy1

0xe965,	// (0x0003c4c9) setting_slider_pane_t3_copy1_ParamLimits

0xe965,	// (0x0003c4c9) setting_slider_pane_t3_copy1

0xe97d,	// (0x0003c4e1) slider_set_pane_copy1_ParamLimits

0xe97d,	// (0x0003c4e1) slider_set_pane_copy1

0x4ac4,	// (0x00032628) set_opt_bg_pane_g1_copy2

0x4acc,	// (0x00032630) set_opt_bg_pane_g2_copy2

0xe993,	// (0x0003c4f7) set_opt_bg_pane_g3_copy2

0x4adc,	// (0x00032640) set_opt_bg_pane_g4_copy2

0x4ae4,	// (0x00032648) set_opt_bg_pane_g5_copy2

0x4aec,	// (0x00032650) set_opt_bg_pane_g6_copy2

0xe99d,	// (0x0003c501) set_opt_bg_pane_g7_copy2

0xe9a5,	// (0x0003c509) set_opt_bg_pane_g8_copy2

0xe9af,	// (0x0003c513) set_opt_bg_pane_g9_copy2

0xb69b,	// (0x000391ff) aid_size_touch_slider_mark_copy1_ParamLimits

0xb69b,	// (0x000391ff) aid_size_touch_slider_mark_copy1

0xe9b9,	// (0x0003c51d) slider_set_pane_g1_copy1

0xb6af,	// (0x00039213) slider_set_pane_g2_copy1

0xa7d1,	// (0x00038335) slider_set_pane_g3_copy1_ParamLimits

0xa7d1,	// (0x00038335) slider_set_pane_g3_copy1

0xa7e5,	// (0x00038349) slider_set_pane_g4_copy1_ParamLimits

0xa7e5,	// (0x00038349) slider_set_pane_g4_copy1

0xa7fd,	// (0x00038361) slider_set_pane_g5_copy1_ParamLimits

0xa7fd,	// (0x00038361) slider_set_pane_g5_copy1

0xa7d1,	// (0x00038335) slider_set_pane_g6_copy1_ParamLimits

0xa7d1,	// (0x00038335) slider_set_pane_g6_copy1

0xb6b7,	// (0x0003921b) slider_set_pane_g7_copy1_ParamLimits

0xb6b7,	// (0x0003921b) slider_set_pane_g7_copy1

0x4283,	// (0x00031de7) bg_set_opt_pane_cp2_copy1

0xe9c2,	// (0x0003c526) setting_slider_graphic_pane_g1_copy1

0xe9cb,	// (0x0003c52f) setting_slider_graphic_pane_t1_copy1

0xe9db,	// (0x0003c53f) setting_slider_graphic_pane_t2_copy1

0xe9eb,	// (0x0003c54f) slider_set_pane_cp_copy1

0xe9fb,	// (0x0003c55f) input_focus_pane_cp1_copy1

0xea04,	// (0x0003c568) list_set_text_pane_copy1

0xea0c,	// (0x0003c570) setting_text_pane_g1_copy1

0x93da,	// (0x00036f3e) set_text_pane_t1_copy1

0xe9fb,	// (0x0003c55f) input_focus_pane_cp2_copy1

0xea0c,	// (0x0003c570) setting_code_pane_g1_copy1

0xea15,	// (0x0003c579) setting_code_pane_t1_copy1

0xea23,	// (0x0003c587) list_set_graphic_pane_copy1

0x4283,	// (0x00031de7) bg_set_opt_pane_cp4_copy1

0x51a6,	// (0x00032d0a) list_set_graphic_pane_g1_copy1_ParamLimits

0x51a6,	// (0x00032d0a) list_set_graphic_pane_g1_copy1

0xea37,	// (0x0003c59b) list_set_graphic_pane_g2_copy1

0x51be,	// (0x00032d22) list_set_graphic_pane_t1_copy1_ParamLimits

0x51be,	// (0x00032d22) list_set_graphic_pane_t1_copy1

0x7796,	// (0x000352fa) rs_clock_indi_pane_g1

0xea3f,	// (0x0003c5a3) rs_clock_indi_pane_t1

0xea4d,	// (0x0003c5b1) rs_indi_pane

0xea55,	// (0x0003c5b9) rs_indi_pane_g1

0xea5e,	// (0x0003c5c2) rs_indi_pane_g2

0xea67,	// (0x0003c5cb) rs_indi_pane_g3

0x0002,

0xfea3,	// (0x0003da07) rs_indi_pane_g

0x54a4,	// (0x00033008) bg_popup_preview_window_pane_cp03

0xea70,	// (0x0003c5d4) popup_fep_tooltip_window_t1

0xcd79,	// (0x0003a8dd) popup_note2_window_g2_ParamLimits

0xcd79,	// (0x0003a8dd) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0003d7db) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0003d7db) popup_note2_window_g

0xd267,	// (0x0003adcb) bg_popup_sub_pane_cp11_ParamLimits

0xd274,	// (0x0003add8) cell_ai3_links_pane_g1_ParamLimits

0xd28b,	// (0x0003adef) cell_ai3_links_pane_t1

0x93da,	// (0x00036f3e) set_text_pane_t1_copy1_ParamLimits

0x53b3,	// (0x00032f17) cell_graphic_popup_pane_cp2_ParamLimits

0x53b3,	// (0x00032f17) cell_graphic_popup_pane_cp2

0xea7e,	// (0x0003c5e2) cell_graphic_popup_pane_g1_cp2

0x47b2,	// (0x00032316) cell_graphic_popup_pane_g2_cp2

0xea86,	// (0x0003c5ea) cell_graphic_popup_pane_g3_cp2

0xea8e,	// (0x0003c5f2) cell_graphic_popup_pane_t2_cp2

0x47c3,	// (0x00032327) grid_highlight_pane_cp3_cp2

0x4d5e,	// (0x000328c2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4a5d,	// (0x000325c1) main_tmo_pane_ParamLimits

0xd5d8,	// (0x0003b13c) popup_tmo_big_image_note_window

0xf207,	// (0x0003cd6b) cell_ai5_widget_list_pane

0xf20f,	// (0x0003cd73) cell_ai5_widget_lrg_icon_pane

0xf4b8,	// (0x0003d01c) tmo_note_info_pane_t1_ParamLimits

0xf4cd,	// (0x0003d031) tmo_note_info_pane_t2_ParamLimits

0xf4e6,	// (0x0003d04a) tmo_note_info_pane_t3_ParamLimits

0xe657,	// (0x0003c1bb) tmo_note_info_pane_t4_ParamLimits

0xe669,	// (0x0003c1cd) tmo_note_info_pane_t5_ParamLimits

0xfe91,	// (0x0003d9f5) tmo_note_info_pane_t_ParamLimits

0xe79f,	// (0x0003c303) settings_container_pane_ParamLimits

0xe9f3,	// (0x0003c557) indicator_popup_pane_cp5

0xe9f3,	// (0x0003c557) indicator_popup_pane_cp6

0xea23,	// (0x0003c587) list_set_graphic_pane_copy1_ParamLimits

0x426f,	// (0x00031dd3) bg_popup_window_pane_cp23

0xea9c,	// (0x0003c600) popup_tmo_big_image_note_window_g1

0xeaa7,	// (0x0003c60b) popup_tmo_big_image_note_window_t1

0xeab7,	// (0x0003c61b) popup_tmo_big_image_note_window_t2

0xeac7,	// (0x0003c62b) popup_tmo_big_image_note_window_t3

0x0002,

0xfeaa,	// (0x0003da0e) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0003d05f) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0003d067) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0003d075) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0003d075) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0003d08e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0003d08e) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0003d09b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0003d09b) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0003d0b3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0003d0b3) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeb1,	// (0x0003da15) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb1,	// (0x0003da15) cell_ai5_widget_list_row_pane_t

0x426f,	// (0x00031dd3) main_fep_vtchi_ss_pane

0xead7,	// (0x0003c63b) popup_fep_char_pre_window

0xeadf,	// (0x0003c643) popup_fep_ituss_window

0xeb00,	// (0x0003c664) popup_fep_vkbss_window

0xeb1f,	// (0x0003c683) grid_vkbss_keypad_pane_ParamLimits

0xeb1f,	// (0x0003c683) grid_vkbss_keypad_pane

0xeb2f,	// (0x0003c693) ituss_keypad_pane

0xeb47,	// (0x0003c6ab) aid_vkbss_key_offset_ParamLimits

0xeb47,	// (0x0003c6ab) aid_vkbss_key_offset

0xeb53,	// (0x0003c6b7) cell_vkbss_key_pane_ParamLimits

0xeb53,	// (0x0003c6b7) cell_vkbss_key_pane

0xeb69,	// (0x0003c6cd) bg_cell_vkbss_key_g1_ParamLimits

0xeb69,	// (0x0003c6cd) bg_cell_vkbss_key_g1

0xeb75,	// (0x0003c6d9) cell_vkbss_key_3p_pane_ParamLimits

0xeb75,	// (0x0003c6d9) cell_vkbss_key_3p_pane

0xeb8f,	// (0x0003c6f3) cell_vkbss_key_g1_ParamLimits

0xeb8f,	// (0x0003c6f3) cell_vkbss_key_g1

0xeba9,	// (0x0003c70d) cell_vkbss_key_t1_ParamLimits

0xeba9,	// (0x0003c70d) cell_vkbss_key_t1

0xebd4,	// (0x0003c738) cell_ituss_key_pane_ParamLimits

0xebd4,	// (0x0003c738) cell_ituss_key_pane

0xebe4,	// (0x0003c748) bg_cell_ituss_key_g1_ParamLimits

0xebe4,	// (0x0003c748) bg_cell_ituss_key_g1

0xebf0,	// (0x0003c754) cell_ituss_key_pane_g1_ParamLimits

0xebf0,	// (0x0003c754) cell_ituss_key_pane_g1

0xebfc,	// (0x0003c760) cell_ituss_key_pane_g2_ParamLimits

0xebfc,	// (0x0003c760) cell_ituss_key_pane_g2

0x0001,

0xfeb6,	// (0x0003da1a) cell_ituss_key_pane_g_ParamLimits

0xfeb6,	// (0x0003da1a) cell_ituss_key_pane_g

0xec15,	// (0x0003c779) cell_ituss_key_t1_ParamLimits

0xec15,	// (0x0003c779) cell_ituss_key_t1

0xec43,	// (0x0003c7a7) cell_ituss_key_t2_ParamLimits

0xec43,	// (0x0003c7a7) cell_ituss_key_t2

0xec74,	// (0x0003c7d8) cell_ituss_key_t3_ParamLimits

0xec74,	// (0x0003c7d8) cell_ituss_key_t3

0xeca5,	// (0x0003c809) cell_ituss_key_t4_ParamLimits

0xeca5,	// (0x0003c809) cell_ituss_key_t4

0x0003,

0xfebb,	// (0x0003da1f) cell_ituss_key_t_ParamLimits

0xfebb,	// (0x0003da1f) cell_ituss_key_t

0xecd6,	// (0x0003c83a) cell_vkbss_key_3p_pane_g1

0xecde,	// (0x0003c842) cell_vkbss_key_3p_pane_g2

0xece6,	// (0x0003c84a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec4,	// (0x0003da28) cell_vkbss_key_3p_pane_g

0x426f,	// (0x00031dd3) bg_popup_fep_char_preview_window_cp02

0xecee,	// (0x0003c852) popup_fep_char_pre_window_t1

0xf1fd,	// (0x0003cd61) main_ai5_sk_pane

0xe6e3,	// (0x0003c247) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe6ef,	// (0x0003c253) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe703,	// (0x0003c267) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe712,	// (0x0003c276) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9c,	// (0x0003da00) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe725,	// (0x0003c289) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4a5d,	// (0x000325c1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0003d0c5) main_ai5_sk_pane_g1

0x5dd7,	// (0x0003393b) popup_query_code_window_g1

0xeaf5,	// (0x0003c659) popup_fep_vkb_icf_pane

0xeb09,	// (0x0003c66d) popup_fep_vtchi_icf_pane

0x4a5d,	// (0x000325c1) bg_icf_pane

0xed0c,	// (0x0003c870) list_vkb_icf_pane

0x4a5d,	// (0x000325c1) bg_icf_pane_cp01

0xd597,	// (0x0003b0fb) vtchi_icf_list_pane

0xed2c,	// (0x0003c890) list_vkb_icf_pane_t1_ParamLimits

0xed2c,	// (0x0003c890) list_vkb_icf_pane_t1

0xed46,	// (0x0003c8aa) vtchi_icf_list_pane_t1_ParamLimits

0xed46,	// (0x0003c8aa) vtchi_icf_list_pane_t1

0xeadf,	// (0x0003c643) popup_fep_ituss_window_ParamLimits

0xeb09,	// (0x0003c66d) popup_fep_vtchi_icf_pane_ParamLimits

0xeb2f,	// (0x0003c693) ituss_keypad_pane_ParamLimits

0xeb3e,	// (0x0003c6a2) ituss_sks_pane

0x4a5d,	// (0x000325c1) bg_icf_pane_ParamLimits

0xecfd,	// (0x0003c861) icf_edit_indi_pane_ParamLimits

0xecfd,	// (0x0003c861) icf_edit_indi_pane

0xed0c,	// (0x0003c870) list_vkb_icf_pane_ParamLimits

0x4a5d,	// (0x000325c1) bg_icf_pane_cp01_ParamLimits

0xed18,	// (0x0003c87c) icf_edit_indi_pane_cp01_ParamLimits

0xed18,	// (0x0003c87c) icf_edit_indi_pane_cp01

0xed24,	// (0x0003c888) vtchi_query_pane

0x7a1d,	// (0x00035581) icf_edit_indi_pane_g1_ParamLimits

0x7a1d,	// (0x00035581) icf_edit_indi_pane_g1

0xed6b,	// (0x0003c8cf) icf_edit_indi_pane_g2_ParamLimits

0xed6b,	// (0x0003c8cf) icf_edit_indi_pane_g2

0x0001,

0xfecb,	// (0x0003da2f) icf_edit_indi_pane_g_ParamLimits

0xfecb,	// (0x0003da2f) icf_edit_indi_pane_g

0xed77,	// (0x0003c8db) icf_edit_indi_pane_t1

0xed85,	// (0x0003c8e9) bg_input_focus_pane_cp042

0x4996,	// (0x000324fa) vtchi_button_pane

0xed8e,	// (0x0003c8f2) vtchi_query_pane_t1

0xed9c,	// (0x0003c900) vtchi_query_pane_t2

0xedaa,	// (0x0003c90e) vtchi_query_pane_t3

0x0002,

0xfed0,	// (0x0003da34) vtchi_query_pane_t

0x426f,	// (0x00031dd3) bg_button_pane_cp13

0xedb8,	// (0x0003c91c) vtchi_button_pane_g1

0xdae2,	// (0x0003b646) ituss_sks_pane_g1

0xedc0,	// (0x0003c924) ituss_sks_pane_g2

0x0001,

0xfed7,	// (0x0003da3b) ituss_sks_pane_g

0xedc9,	// (0x0003c92d) ituss_sks_pane_t1

0xedd7,	// (0x0003c93b) ituss_sks_pane_t2

0x0001,

0xfedc,	// (0x0003da40) ituss_sks_pane_t

0x7463,	// (0x00034fc7) indicator_nsta_pane_cp_g1

0x746c,	// (0x00034fd0) indicator_nsta_pane_cp_g2

0x7474,	// (0x00034fd8) indicator_nsta_pane_cp_g3

0x747c,	// (0x00034fe0) indicator_nsta_pane_cp_g4

0x7484,	// (0x00034fe8) indicator_nsta_pane_cp_g5

0x748c,	// (0x00034ff0) indicator_nsta_pane_cp_g6

0x0005,

0xfac1,	// (0x0003d625) indicator_nsta_pane_cp_g

0xf022,	// (0x0003cb86) cell_graphic2_pane_t2_ParamLimits

0xf022,	// (0x0003cb86) cell_graphic2_pane_t2

0x0001,

0x06e7,	// (0x0002e24b) cell_graphic2_pane_t_ParamLimits

0x06e7,	// (0x0002e24b) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
