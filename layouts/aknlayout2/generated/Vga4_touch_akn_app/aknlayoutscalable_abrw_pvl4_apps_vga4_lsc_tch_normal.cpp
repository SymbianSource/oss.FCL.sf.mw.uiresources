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

// This customisation implements the interface defined in AknLayoutScalable_Apps.cdl

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0002ae7b };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknWindowComponentLayout WindowLineCRV(TInt aCol, TInt aRow, TInt aVariety) { return AknLayoutScalableDecode::WindowLineCRV(&KImplData, aCol, aRow, aVariety); }
TAknWindowComponentLayout WindowLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::WindowLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknTextComponentLayout TextLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknTextComponentLayout TextLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::WindowLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineCVR(TInt aCol, TInt aVariety, TInt aRow) { return AknLayoutScalableDecode::WindowLineCVR(&KImplData, aCol, aVariety, aRow); }
TAknWindowComponentLayout WindowLineRCV(TInt aRow, TInt aCol, TInt aVariety) { return AknLayoutScalableDecode::WindowLineRCV(&KImplData, aRow, aCol, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknTextComponentLayout TextTableLVRC(TInt aLineIndex, TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextTableLVRC(&KImplData, aLineIndex, aVariety, aRow, aCol); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize] =
	{
0x1827,	// (0x0002c6a2) Screen

0x1833,	// (0x0002c6ae) application_window

0x183f,	// (0x0002c6ba) area_bottom_pane_ParamLimits

0x183f,	// (0x0002c6ba) area_bottom_pane

0x02f1,	// (0x0002b16c) area_top_pane_ParamLimits

0x02f1,	// (0x0002b16c) area_top_pane

0xb5d4,	// (0x0003644f) call_video_uplink_pane_ParamLimits

0xb5d4,	// (0x0003644f) call_video_uplink_pane

0x037f,	// (0x0002b1fa) main_pane_ParamLimits

0x037f,	// (0x0002b1fa) main_pane

0xe4dd,	// (0x00039358) context_pane

0x42ac,	// (0x0002f127) navi_pane

0x42e3,	// (0x0002f15e) popup_cale_events_window_ParamLimits

0x42e3,	// (0x0002f15e) popup_cale_events_window

0xe4f0,	// (0x0003936b) popup_mup_playback_window

0x42fb,	// (0x0002f176) signal_pane

0xc76d,	// (0x000375e8) main_browser_pane

0xc961,	// (0x000377dc) main_burst_pane

0x07ab,	// (0x0002b626) main_calc_pane

0xe4d1,	// (0x0003934c) main_cale_day_pane

0x0645,	// (0x0002b4c0) main_cale_month_pane

0xe4d1,	// (0x0003934c) main_cale_week_pane

0xc961,	// (0x000377dc) main_call_pane

0xc3ed,	// (0x00037268) main_call_poc_pane

0xc961,	// (0x000377dc) main_camera_pane

0xc961,	// (0x000377dc) main_chi_dic_pane

0xd0f2,	// (0x00037f6d) main_clock_pane

0xc3ed,	// (0x00037268) main_fmradio_pane

0xc961,	// (0x000377dc) main_graph_messa_pane

0xc3ed,	// (0x00037268) main_help_pane

0xc76d,	// (0x000375e8) main_im_pane

0xc648,	// (0x000374c3) main_image_pane_ParamLimits

0xc648,	// (0x000374c3) main_image_pane

0xc3ed,	// (0x00037268) main_location2_pane

0xc961,	// (0x000377dc) main_location_pane

0xc648,	// (0x000374c3) main_messa_pane

0xc3ed,	// (0x00037268) main_mp2_pane

0xc961,	// (0x000377dc) main_mp_pane

0xc3ed,	// (0x00037268) main_msg_pane

0xc3ed,	// (0x00037268) main_mup_eq_pane

0xc3ed,	// (0x00037268) main_mup_pane

0xc76d,	// (0x000375e8) main_notes_pane

0xc3ed,	// (0x00037268) main_pec_pane

0xc3ed,	// (0x00037268) main_phob_pane

0xc3ed,	// (0x00037268) main_pinb_pane

0xc3ed,	// (0x00037268) main_postcard_pane

0xc3ed,	// (0x00037268) main_qdial_pane

0xc961,	// (0x000377dc) main_skin_pane

0xc3ed,	// (0x00037268) main_smil2_pane

0xc961,	// (0x000377dc) main_smil_pane

0xc961,	// (0x000377dc) main_video_pane

0xc961,	// (0x000377dc) main_video_tele_pane

0xc648,	// (0x000374c3) main_viewer_pane_ParamLimits

0xc648,	// (0x000374c3) main_viewer_pane

0xc961,	// (0x000377dc) main_vorec_pane

0x0801,	// (0x0002b67c) popup_blid_sat_info_window_ParamLimits

0x0801,	// (0x0002b67c) popup_blid_sat_info_window

0x0865,	// (0x0002b6e0) popup_dyc_status_message_window_ParamLimits

0x0865,	// (0x0002b6e0) popup_dyc_status_message_window

0x087f,	// (0x0002b6fa) popup_grid_large_graphic_window_ParamLimits

0x087f,	// (0x0002b6fa) popup_grid_large_graphic_window

0x0941,	// (0x0002b7bc) popup_loc_request_window_ParamLimits

0x0941,	// (0x0002b7bc) popup_loc_request_window

0x0a67,	// (0x0002b8e2) popup_wml_address_window_ParamLimits

0x0a67,	// (0x0002b8e2) popup_wml_address_window

0x40f4,	// (0x0002ef6f) call_muted_g1

0x3dcd,	// (0x0002ec48) popup_call_audio_conf_window_ParamLimits

0x3dcd,	// (0x0002ec48) popup_call_audio_conf_window

0x4104,	// (0x0002ef7f) popup_call_audio_first_window_ParamLimits

0x4104,	// (0x0002ef7f) popup_call_audio_first_window

0x417a,	// (0x0002eff5) popup_call_audio_in_window_ParamLimits

0x417a,	// (0x0002eff5) popup_call_audio_in_window

0x41b6,	// (0x0002f031) popup_call_audio_out_window_ParamLimits

0x41b6,	// (0x0002f031) popup_call_audio_out_window

0x41f0,	// (0x0002f06b) popup_call_audio_second_window_ParamLimits

0x41f0,	// (0x0002f06b) popup_call_audio_second_window

0x4246,	// (0x0002f0c1) popup_call_audio_wait_window_ParamLimits

0x4246,	// (0x0002f0c1) popup_call_audio_wait_window

0x427b,	// (0x0002f0f6) popup_number_entry_window_ParamLimits

0x427b,	// (0x0002f0f6) popup_number_entry_window

0xb60a,	// (0x00036485) bg_popup_call_pane_cp05_ParamLimits

0xb60a,	// (0x00036485) bg_popup_call_pane_cp05

0xb62a,	// (0x000364a5) popup_number_entry_window_t1

0xb63d,	// (0x000364b8) popup_number_entry_window_t2

0xb64f,	// (0x000364ca) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x00039e98) popup_number_entry_window_t

0xb696,	// (0x00036511) text_title_cp2

0xb6a9,	// (0x00036524) bg_popup_call_pane_cp_ParamLimits

0xb6a9,	// (0x00036524) bg_popup_call_pane_cp

0xb6b7,	// (0x00036532) call_thumbnail_pane

0xb6bf,	// (0x0003653a) popup_call_audio_in_window_g1_ParamLimits

0xb6bf,	// (0x0003653a) popup_call_audio_in_window_g1

0xb6cb,	// (0x00036546) popup_call_audio_in_window_g2_ParamLimits

0xb6cb,	// (0x00036546) popup_call_audio_in_window_g2

0xb6d7,	// (0x00036552) popup_call_audio_in_window_g3_ParamLimits

0xb6d7,	// (0x00036552) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x00039ea1) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x00039ea1) popup_call_audio_in_window_g

0xb6e3,	// (0x0003655e) popup_call_audio_in_window_t1_ParamLimits

0xb6e3,	// (0x0003655e) popup_call_audio_in_window_t1

0xb6ff,	// (0x0003657a) popup_call_audio_in_window_t2_ParamLimits

0xb6ff,	// (0x0003657a) popup_call_audio_in_window_t2

0xb71b,	// (0x00036596) popup_call_audio_in_window_t3_ParamLimits

0xb71b,	// (0x00036596) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x00039ea8) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x00039ea8) popup_call_audio_in_window_t

0xb6a9,	// (0x00036524) bg_popup_call_pane_cp01_ParamLimits

0xb6a9,	// (0x00036524) bg_popup_call_pane_cp01

0xb6b7,	// (0x00036532) call_thumbnail_pane_cp02

0xb72e,	// (0x000365a9) call_type_pane_cp022

0xb736,	// (0x000365b1) popup_call_audio_out_window_g1_ParamLimits

0xb736,	// (0x000365b1) popup_call_audio_out_window_g1

0xb748,	// (0x000365c3) popup_call_audio_out_window_g2_ParamLimits

0xb748,	// (0x000365c3) popup_call_audio_out_window_g2

0xb754,	// (0x000365cf) popup_call_audio_out_window_g3_ParamLimits

0xb754,	// (0x000365cf) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x00039eaf) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x00039eaf) popup_call_audio_out_window_g

0xb766,	// (0x000365e1) popup_call_audio_out_window_t1_ParamLimits

0xb766,	// (0x000365e1) popup_call_audio_out_window_t1

0xc119,	// (0x00036f94) popup_call_audio_out_window_t2_ParamLimits

0xc119,	// (0x00036f94) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x00039eb6) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x00039eb6) popup_call_audio_out_window_t

0xc12e,	// (0x00036fa9) bg_popup_call_pane_ParamLimits

0xc12e,	// (0x00036fa9) bg_popup_call_pane

0x1884,	// (0x0002c6ff) call_thumbnail_pane_cp_ParamLimits

0x1884,	// (0x0002c6ff) call_thumbnail_pane_cp

0xc1b2,	// (0x0003702d) call_type_pane_cp01_ParamLimits

0xc1b2,	// (0x0003702d) call_type_pane_cp01

0xc1f6,	// (0x00037071) popup_call_audio_first_window_g1_ParamLimits

0xc1f6,	// (0x00037071) popup_call_audio_first_window_g1

0xc242,	// (0x000370bd) popup_call_audio_first_window_g2_ParamLimits

0xc242,	// (0x000370bd) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x00039ebb) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x00039ebb) popup_call_audio_first_window_g

0xc286,	// (0x00037101) popup_call_audio_first_window_t1_ParamLimits

0xc286,	// (0x00037101) popup_call_audio_first_window_t1

0xc332,	// (0x000371ad) popup_call_audio_first_window_t4_ParamLimits

0xc332,	// (0x000371ad) popup_call_audio_first_window_t4

0xc3be,	// (0x00037239) popup_call_audio_first_window_t5_ParamLimits

0xc3be,	// (0x00037239) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x00039ec0) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x00039ec0) popup_call_audio_first_window_t

0xc3ed,	// (0x00037268) bg_popup_call_pane_cp02

0xc3f7,	// (0x00037272) call_type_pane_cp023

0xc3ff,	// (0x0003727a) popup_call_audio_wait_window_g1

0xc407,	// (0x00037282) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00039ec7) popup_call_audio_wait_window_g

0xc40f,	// (0x0003728a) popup_call_audio_wait_window_t3

0xc41d,	// (0x00037298) bg_popup_call_pane_cp03_ParamLimits

0xc41d,	// (0x00037298) bg_popup_call_pane_cp03

0xc47d,	// (0x000372f8) call_thumbnail_pane_cp011_ParamLimits

0xc47d,	// (0x000372f8) call_thumbnail_pane_cp011

0xc489,	// (0x00037304) call_type_pane_cp034_ParamLimits

0xc489,	// (0x00037304) call_type_pane_cp034

0xc4c5,	// (0x00037340) popup_call_audio_second_window_g1_ParamLimits

0xc4c5,	// (0x00037340) popup_call_audio_second_window_g1

0xc501,	// (0x0003737c) popup_call_audio_second_window_g2_ParamLimits

0xc501,	// (0x0003737c) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x00039ecc) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x00039ecc) popup_call_audio_second_window_g

0xc53d,	// (0x000373b8) popup_call_audio_second_window_t1_ParamLimits

0xc53d,	// (0x000373b8) popup_call_audio_second_window_t1

0xc5be,	// (0x00037439) popup_call_audio_second_window_t2_ParamLimits

0xc5be,	// (0x00037439) popup_call_audio_second_window_t2

0xc5f4,	// (0x0003746f) popup_call_audio_second_window_t3_ParamLimits

0xc5f4,	// (0x0003746f) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x00039ed1) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x00039ed1) popup_call_audio_second_window_t

0xc3ed,	// (0x00037268) bg_popup_call_pane_cp04

0xc62a,	// (0x000374a5) list_conf_pane

0xc632,	// (0x000374ad) popup_call_audio_conf_window_t1

0xc640,	// (0x000374bb) call_thumbnail_pane_g1

0xc648,	// (0x000374c3) bg_pinb_pane_ParamLimits

0xc648,	// (0x000374c3) bg_pinb_pane

0xc656,	// (0x000374d1) find_pinb_pane

0xc648,	// (0x000374c3) listscroll_pinb_pane_ParamLimits

0xc648,	// (0x000374c3) listscroll_pinb_pane

0xc660,	// (0x000374db) pinb_bg_pane_g1

0xc660,	// (0x000374db) pinb_bg_pane_g2

0xc660,	// (0x000374db) pinb_bg_pane_g3

0xc660,	// (0x000374db) pinb_bg_pane_g4

0xc660,	// (0x000374db) pinb_bg_pane_g5

0xc660,	// (0x000374db) pinb_bg_pane_g6

0xc660,	// (0x000374db) pinb_bg_pane_g7

0xc660,	// (0x000374db) pinb_bg_pane_g8

0xc660,	// (0x000374db) pinb_bg_pane_g9

0xc660,	// (0x000374db) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00039ed8) pinb_bg_pane_g

0xb57d,	// (0x000363f8) grid_pinb_pane

0xb57d,	// (0x000363f8) list_pinb_pane

0xc66a,	// (0x000374e5) scroll_pane_cp01_ParamLimits

0xc66a,	// (0x000374e5) scroll_pane_cp01

0xc678,	// (0x000374f3) find_pinb_pane_g1_ParamLimits

0xc678,	// (0x000374f3) find_pinb_pane_g1

0xc690,	// (0x0003750b) find_pinb_pane_t1

0xc6a2,	// (0x0003751d) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00039ef2) find_pinb_pane_t

0xc6b7,	// (0x00037532) input_focus_pane_cp01_ParamLimits

0xc6b7,	// (0x00037532) input_focus_pane_cp01

0xc6c3,	// (0x0003753e) cell_pinb_pane_ParamLimits

0xc6c3,	// (0x0003753e) cell_pinb_pane

0xc6d1,	// (0x0003754c) cell_pinb_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) cell_pinb_pane_g1

0xc6df,	// (0x0003755a) cell_pinb_pane_g2_ParamLimits

0xc6df,	// (0x0003755a) cell_pinb_pane_g2

0xc6df,	// (0x0003755a) cell_pinb_pane_g3_ParamLimits

0xc6df,	// (0x0003755a) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00039ef7) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00039ef7) cell_pinb_pane_g

0xc3ed,	// (0x00037268) grid_highlight_pane_cp01

0xc6c3,	// (0x0003753e) list_pinb_item_pane_ParamLimits

0xc6c3,	// (0x0003753e) list_pinb_item_pane

0xb57d,	// (0x000363f8) list_highlight_pane_cp02

0xc6ed,	// (0x00037568) list_pinb_item_pane_g1_ParamLimits

0xc6ed,	// (0x00037568) list_pinb_item_pane_g1

0xc6df,	// (0x0003755a) list_pinb_item_pane_g2_ParamLimits

0xc6df,	// (0x0003755a) list_pinb_item_pane_g2

0xc6d1,	// (0x0003754c) list_pinb_item_pane_g3_ParamLimits

0xc6d1,	// (0x0003754c) list_pinb_item_pane_g3

0xc6df,	// (0x0003755a) list_pinb_item_pane_g4_ParamLimits

0xc6df,	// (0x0003755a) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00039efe) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00039efe) list_pinb_item_pane_g

0xc6fb,	// (0x00037576) list_pinb_item_pane_t1_ParamLimits

0xc6fb,	// (0x00037576) list_pinb_item_pane_t1

0x051a,	// (0x0002b395) calc_display_pane

0x053f,	// (0x0002b3ba) calc_paper_pane

0x0562,	// (0x0002b3dd) grid_calc_pane

0xb57d,	// (0x000363f8) bg_list_pane_cp01

0xc70f,	// (0x0003758a) clock_g1

0xc70f,	// (0x0003758a) clock_g2

0x0001,

0xf08c,	// (0x00039f07) clock_g

0xc719,	// (0x00037594) clock_t1_ParamLimits

0xc719,	// (0x00037594) clock_t1

0xc72d,	// (0x000375a8) clock_t2_ParamLimits

0xc72d,	// (0x000375a8) clock_t2

0xc72d,	// (0x000375a8) clock_t3_ParamLimits

0xc72d,	// (0x000375a8) clock_t3

0xc72d,	// (0x000375a8) clock_t4_ParamLimits

0xc72d,	// (0x000375a8) clock_t4

0xc719,	// (0x00037594) clock_t5_ParamLimits

0xc719,	// (0x00037594) clock_t5

0xc72d,	// (0x000375a8) clock_t6_ParamLimits

0xc72d,	// (0x000375a8) clock_t6

0xc72d,	// (0x000375a8) clock_t7_ParamLimits

0xc72d,	// (0x000375a8) clock_t7

0xc72d,	// (0x000375a8) clock_t8_ParamLimits

0xc72d,	// (0x000375a8) clock_t8

0xc72d,	// (0x000375a8) clock_t9_ParamLimits

0xc72d,	// (0x000375a8) clock_t9

0x0008,

0xf091,	// (0x00039f0c) clock_t_ParamLimits

0xf091,	// (0x00039f0c) clock_t

0xb57d,	// (0x000363f8) popup_clock_analogue_window_cp02

0xb57d,	// (0x000363f8) popup_clock_digital_window_cp01

0xc3ed,	// (0x00037268) listscroll_help_pane

0xc3ed,	// (0x00037268) phob_pre_status_pane

0xc741,	// (0x000375bc) grid_qdial_pane

0xc648,	// (0x000374c3) listscroll_mce_pane

0xc648,	// (0x000374c3) bg_notes_pane

0xc74b,	// (0x000375c6) list_notes_pane

0x18a8,	// (0x0002c723) scroll_pane_cp06

0xc759,	// (0x000375d4) bg_calc_paper_pane

0xb786,	// (0x00036601) list_calc_pane

0xc76d,	// (0x000375e8) bg_calc_display_pane

0x0590,	// (0x0002b40b) calc_display_pane_t1

0x05a5,	// (0x0002b420) calc_display_pane_t2

0xb7a0,	// (0x0003661b) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00039f1f) calc_display_pane_t

0x05ba,	// (0x0002b435) cell_calc_pane_ParamLimits

0x05ba,	// (0x0002b435) cell_calc_pane

0xc779,	// (0x000375f4) bg_calc_paper_pane_g1

0xc785,	// (0x00037600) bg_calc_paper_pane_g2

0xc791,	// (0x0003760c) bg_calc_paper_pane_g3

0xc79d,	// (0x00037618) bg_calc_paper_pane_g4

0xc7a9,	// (0x00037624) bg_calc_paper_pane_g5

0x18bc,	// (0x0002c737) bg_calc_paper_pane_g6

0x18cf,	// (0x0002c74a) bg_calc_paper_pane_g7

0x18e2,	// (0x0002c75d) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x00039f26) bg_calc_paper_pane_g

0x18f5,	// (0x0002c770) calc_bg_paper_pane_g9

0x1908,	// (0x0002c783) list_calc_item_pane_ParamLimits

0x1908,	// (0x0002c783) list_calc_item_pane

0xc7b5,	// (0x00037630) list_calc_item_pane_g1

0xb7b2,	// (0x0003662d) list_calc_item_pane_t1_ParamLimits

0xb7b2,	// (0x0003662d) list_calc_item_pane_t1

0x05f5,	// (0x0002b470) list_calc_item_pane_t2_ParamLimits

0x05f5,	// (0x0002b470) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x00039f37) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x00039f37) list_calc_item_pane_t

0xc660,	// (0x000374db) cell_calc_pane_g1

0xc7c2,	// (0x0003763d) grid_highlight_pane_cp02

0x1920,	// (0x0002c79b) bg_calc_display_pane_g1

0x0627,	// (0x0002b4a2) bg_calc_display_pane_g2

0xc7e4,	// (0x0003765f) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x00039f41) bg_calc_display_pane_g

0x0631,	// (0x0002b4ac) cell_qdial_pane_ParamLimits

0x0631,	// (0x0002b4ac) cell_qdial_pane

0x1929,	// (0x0002c7a4) cell_qdial_pane_g1_ParamLimits

0x1929,	// (0x0002c7a4) cell_qdial_pane_g1

0x193f,	// (0x0002c7ba) cell_qdial_pane_g2_ParamLimits

0x193f,	// (0x0002c7ba) cell_qdial_pane_g2

0xc7ed,	// (0x00037668) cell_qdial_pane_g3_ParamLimits

0xc7ed,	// (0x00037668) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x00039f48) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x00039f48) cell_qdial_pane_g

0x1966,	// (0x0002c7e1) cell_qdial_pane_t1_ParamLimits

0x1966,	// (0x0002c7e1) cell_qdial_pane_t1

0x197e,	// (0x0002c7f9) cell_qdial_pane_t2_ParamLimits

0x197e,	// (0x0002c7f9) cell_qdial_pane_t2

0x1991,	// (0x0002c80c) cell_qdial_pane_t3_ParamLimits

0x1991,	// (0x0002c80c) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x00039f51) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x00039f51) cell_qdial_pane_t

0xc3ed,	// (0x00037268) grid_highlight_pane_cp04

0xc7f9,	// (0x00037674) thumbnail_qdial_pane_ParamLimits

0xc7f9,	// (0x00037674) thumbnail_qdial_pane

0xc855,	// (0x000376d0) list_help_pane

0xc85e,	// (0x000376d9) scroll_pane_cp02

0x19a4,	// (0x0002c81f) help_list_pane_t1_ParamLimits

0x19a4,	// (0x0002c81f) help_list_pane_t1

0xc867,	// (0x000376e2) bg_notes_pane_g2

0xc86f,	// (0x000376ea) bg_notes_pane_g3

0xc877,	// (0x000376f2) notes_bg_pane_g1

0xc87f,	// (0x000376fa) notes_bg_pane_g4

0xc887,	// (0x00037702) notes_bg_pane_g5

0xc88f,	// (0x0003770a) notes_bg_pane_g6

0xc897,	// (0x00037712) notes_bg_pane_g7

0xc89f,	// (0x0003771a) notes_bg_pane_g8

0xc8a7,	// (0x00037722) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x00039f6f) notes_bg_pane_g

0x19c8,	// (0x0002c843) list_notes_text_pane_ParamLimits

0x19c8,	// (0x0002c843) list_notes_text_pane

0xc8af,	// (0x0003772a) list_notes_text_pane_g1

0xc8b8,	// (0x00037733) list_notes_text_pane_t1

0x0645,	// (0x0002b4c0) listscroll_cale_week_pane

0x19fc,	// (0x0002c877) bg_cale_heading_pane

0x1a20,	// (0x0002c89b) bg_cale_pane_cp01

0x1a3d,	// (0x0002c8b8) cale_week_corner_pane

0x1a5c,	// (0x0002c8d7) cale_week_day_heading_pane

0x1a85,	// (0x0002c900) cale_week_scroll_pane_g1

0x1aa4,	// (0x0002c91f) cale_week_scroll_pane_g2

0x1abc,	// (0x0002c937) cale_week_scroll_pane_g3

0x1ad4,	// (0x0002c94f) cale_week_scroll_pane_g4

0x1aec,	// (0x0002c967) cale_week_scroll_pane_g5

0x1b0c,	// (0x0002c987) cale_week_scroll_pane_g6

0x1b2c,	// (0x0002c9a7) cale_week_scroll_pane_g7

0x1b4c,	// (0x0002c9c7) cale_week_scroll_pane_g8

0x1b70,	// (0x0002c9eb) cale_week_scroll_pane_g9

0x1b88,	// (0x0002ca03) cale_week_scroll_pane_g10

0x1ba0,	// (0x0002ca1b) cale_week_scroll_pane_g11

0x1bb8,	// (0x0002ca33) cale_week_scroll_pane_g12

0x1bd8,	// (0x0002ca53) cale_week_scroll_pane_g13

0x1bfc,	// (0x0002ca77) cale_week_scroll_pane_g14

0x1c20,	// (0x0002ca9b) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00039f7e) cale_week_scroll_pane_g

0x1c68,	// (0x0002cae3) cale_week_time_pane

0x1c8c,	// (0x0002cb07) grid_cale_week_pane

0xc8e9,	// (0x00037764) scroll_pane_cp08

0x1cba,	// (0x0002cb35) cell_cale_week_pane_ParamLimits

0x1cba,	// (0x0002cb35) cell_cale_week_pane

0x1d52,	// (0x0002cbcd) cale_week_day_heading_pane_t1

0x1d7c,	// (0x0002cbf7) cale_week_day_heading_pane_t2

0x1dab,	// (0x0002cc26) cale_week_day_heading_pane_t3

0x1dda,	// (0x0002cc55) cale_week_day_heading_pane_t4

0x1e09,	// (0x0002cc84) cale_week_day_heading_pane_t5

0x1e3c,	// (0x0002ccb7) cale_week_day_heading_pane_t6

0x1e73,	// (0x0002ccee) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00039f9f) cale_week_day_heading_pane_t

0xc906,	// (0x00037781) bg_cale_side_pane

0x0657,	// (0x0002b4d2) cale_week_time_pane_t1

0x0671,	// (0x0002b4ec) cale_week_time_pane_t2

0x068b,	// (0x0002b506) cale_week_time_pane_t3

0x06a5,	// (0x0002b520) cale_week_time_pane_t4

0x06bf,	// (0x0002b53a) cale_week_time_pane_t5

0x06d9,	// (0x0002b554) cale_week_time_pane_t6

0x06f7,	// (0x0002b572) cale_week_time_pane_t7

0x0719,	// (0x0002b594) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x00039fae) cale_week_time_pane_t

0x1e9d,	// (0x0002cd18) cell_cale_week_pane_g2

0x1ec1,	// (0x0002cd3c) cell_cale_week_pane_g3_ParamLimits

0x1ec1,	// (0x0002cd3c) cell_cale_week_pane_g3

0xc914,	// (0x0003778f) grid_highlight_pane_cp07

0xc91c,	// (0x00037797) listscroll_gms_pane

0xc926,	// (0x000377a1) grid_gms_pane

0xc92f,	// (0x000377aa) listscroll_gms_pane_g1

0xc937,	// (0x000377b2) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x00039fbf) listscroll_gms_pane_g

0x1ed9,	// (0x0002cd54) scroll_pane_cp010

0x1ee4,	// (0x0002cd5f) cell_gms_pane_ParamLimits

0x1ee4,	// (0x0002cd5f) cell_gms_pane

0x1efb,	// (0x0002cd76) cell_gms_pane_g1

0xc93f,	// (0x000377ba) cell_gms_pane_g2

0xc947,	// (0x000377c2) cell_gms_pane_g3

0xc950,	// (0x000377cb) cell_gms_pane_g4

0x0003,

0xf149,	// (0x00039fc4) cell_gms_pane_g

0xc959,	// (0x000377d4) grid_highlight_pane_cp09

0x4078,	// (0x0002eef3) phob_pre_status_pane_g1

0x4080,	// (0x0002eefb) phob_pre_status_pane_g2

0x4088,	// (0x0002ef03) phob_pre_status_pane_g3

0x4090,	// (0x0002ef0b) phob_pre_status_pane_g4

0x0004,

0xf4e5,	// (0x0003a360) phob_pre_status_pane_g

0x40a0,	// (0x0002ef1b) phob_pre_status_pane_t1

0x40b0,	// (0x0002ef2b) phob_pre_status_pane_t2

0x40c0,	// (0x0002ef3b) phob_pre_status_pane_t3

0x0002,

0xf4f0,	// (0x0003a36b) phob_pre_status_pane_t

0xc961,	// (0x000377dc) bg_list_pane_cp05

0x1f0b,	// (0x0002cd86) grid_vorec_pane

0x1f15,	// (0x0002cd90) vorec_t1

0x1f23,	// (0x0002cd9e) vorec_t2

0x1f31,	// (0x0002cdac) vorec_t3

0x1f3f,	// (0x0002cdba) vorec_t4

0xbefb,	// (0x00036d76) vorec_t5

0x180f,	// (0x0002c68a) vorec_t6

0x0004,

0xf152,	// (0x00039fcd) vorec_t

0x181d,	// (0x0002c698) wait_bar_pane_cp01

0x1f5b,	// (0x0002cdd6) cell_vorec_pane_ParamLimits

0x1f5b,	// (0x0002cdd6) cell_vorec_pane

0xb7cd,	// (0x00036648) cell_vorec_pane_g1

0xc3ed,	// (0x00037268) grid_highlight_pane_cp05

0xc66a,	// (0x000374e5) cams_zoom_pane

0xc66a,	// (0x000374e5) image_vga_pane

0xc6d1,	// (0x0003754c) main_camera_pane_g1

0xc6d1,	// (0x0003754c) main_camera_pane_g2

0xc6d1,	// (0x0003754c) main_camera_pane_g3

0xc6d1,	// (0x0003754c) main_camera_pane_g4

0xc6d1,	// (0x0003754c) main_camera_pane_g5

0xc6d1,	// (0x0003754c) main_camera_pane_g6

0xc6d1,	// (0x0003754c) main_camera_pane_g7

0x0007,

0xf15d,	// (0x00039fd8) main_camera_pane_g

0xc719,	// (0x00037594) main_camera_pane_t1

0xc719,	// (0x00037594) main_camera_pane_t2

0x0001,

0xf16e,	// (0x00039fe9) main_camera_pane_t

0x1f84,	// (0x0002cdff) cams_zoom_pane_cp_ParamLimits

0x1f84,	// (0x0002cdff) cams_zoom_pane_cp

0x1fb8,	// (0x0002ce33) image_cif_pane_ParamLimits

0x1fb8,	// (0x0002ce33) image_cif_pane

0xb57d,	// (0x000363f8) image_subqcif_pane

0x1fca,	// (0x0002ce45) main_video_pane_g1_ParamLimits

0x1fca,	// (0x0002ce45) main_video_pane_g1

0x1ff8,	// (0x0002ce73) main_video_pane_g2_ParamLimits

0x1ff8,	// (0x0002ce73) main_video_pane_g2

0x2032,	// (0x0002cead) main_video_pane_g3_ParamLimits

0x2032,	// (0x0002cead) main_video_pane_g3

0x2032,	// (0x0002cead) main_video_pane_g4_ParamLimits

0x2032,	// (0x0002cead) main_video_pane_g4

0x2066,	// (0x0002cee1) main_video_pane_g5_ParamLimits

0x2066,	// (0x0002cee1) main_video_pane_g5

0xc969,	// (0x000377e4) main_video_pane_g6_ParamLimits

0xc969,	// (0x000377e4) main_video_pane_g6

0x0006,

0xf173,	// (0x00039fee) main_video_pane_g_ParamLimits

0xf173,	// (0x00039fee) main_video_pane_g

0x2082,	// (0x0002cefd) main_video_pane_t1_ParamLimits

0x2082,	// (0x0002cefd) main_video_pane_t1

0xc70f,	// (0x0003758a) cams_zoom_pane_g1

0xc70f,	// (0x0003758a) cams_zoom_pane_g2

0xc70f,	// (0x0003758a) cams_zoom_pane_g3

0xc70f,	// (0x0003758a) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x00039ffd) cams_zoom_pane_g

0xc66a,	// (0x000374e5) grid_cams_pane

0xc66a,	// (0x000374e5) linegrid_cams_pane

0x20c6,	// (0x0002cf41) cell_cams_pane_ParamLimits

0x20c6,	// (0x0002cf41) cell_cams_pane

0xb57d,	// (0x000363f8) cams_burst_image_pane

0xc70f,	// (0x0003758a) cell_cams_pane_g1

0xb57d,	// (0x000363f8) grid_highlight_pane_cp03

0xc660,	// (0x000374db) mp_bg_pane_g1

0xb57d,	// (0x000363f8) bg_list_pane_cp03

0xb57d,	// (0x000363f8) bg_mp_pane

0xb57d,	// (0x000363f8) grid_mp_pane

0xc70f,	// (0x0003758a) media_player_g1

0xce88,	// (0x00037d03) media_player_t1

0xce88,	// (0x00037d03) media_player_t2

0xce88,	// (0x00037d03) media_player_t3

0xce88,	// (0x00037d03) media_player_t4

0xce88,	// (0x00037d03) media_player_t5

0xce88,	// (0x00037d03) media_player_t6

0xce88,	// (0x00037d03) media_player_t7

0x0006,

0xf4cf,	// (0x0003a34a) media_player_t

0xb57d,	// (0x000363f8) wait_bar_pane_cp02

0xf4b4,	// (0x0003a32f) main_usb_pane_t

0xd0f2,	// (0x00037f6d) cell_mp_pane

0xc660,	// (0x000374db) cell_mp_pane_g1

0xc3ed,	// (0x00037268) grid_highlight_pane_cp06

0xc983,	// (0x000377fe) grid_skin_colour_pane

0xc98b,	// (0x00037806) list_highlight_pane_cp03

0x20db,	// (0x0002cf56) skin_g1

0xc993,	// (0x0003780e) skin_t1

0xc9a2,	// (0x0003781d) skin_t2

0x0001,

0xf1b0,	// (0x0003a02b) skin_t

0x20e3,	// (0x0002cf5e) cell_skin_colour_pane_ParamLimits

0x20e3,	// (0x0002cf5e) cell_skin_colour_pane

0xc9b0,	// (0x0003782b) cell_skin_colour_pane_g1

0x2155,	// (0x0002cfd0) call_video_g1_ParamLimits

0x2155,	// (0x0002cfd0) call_video_g1

0x2171,	// (0x0002cfec) call_video_g2_ParamLimits

0x2171,	// (0x0002cfec) call_video_g2

0x0001,

0xf1b5,	// (0x0003a030) call_video_g_ParamLimits

0xf1b5,	// (0x0003a030) call_video_g

0x21b9,	// (0x0002d034) call_video_uplink_pane_cp1_ParamLimits

0x21b9,	// (0x0002d034) call_video_uplink_pane_cp1

0xc9c2,	// (0x0003783d) call_video_uplink_pane_cp2

0x2249,	// (0x0002d0c4) video_down_crop_pane_ParamLimits

0x2249,	// (0x0002d0c4) video_down_crop_pane

0x2331,	// (0x0002d1ac) video_down_pane_ParamLimits

0x2331,	// (0x0002d1ac) video_down_pane

0xc9ca,	// (0x00037845) video_down_subqcif_pane_ParamLimits

0xc9ca,	// (0x00037845) video_down_subqcif_pane

0xc9e4,	// (0x0003785f) video_down_subqcif_pane_cp_ParamLimits

0xc9e4,	// (0x0003785f) video_down_subqcif_pane_cp

0xca0a,	// (0x00037885) im_reading_pane_ParamLimits

0xca0a,	// (0x00037885) im_reading_pane

0x243c,	// (0x0002d2b7) im_writing_pane_ParamLimits

0x243c,	// (0x0002d2b7) im_writing_pane

0x245a,	// (0x0002d2d5) im_reading_pane_t1

0xca24,	// (0x0003789f) list_im_pane

0xca35,	// (0x000378b0) scroll_pane_cp07

0x2499,	// (0x0002d314) im_writing_pane_t1_ParamLimits

0x2499,	// (0x0002d314) im_writing_pane_t1

0xca4e,	// (0x000378c9) im_writing_pane_t2_ParamLimits

0xca4e,	// (0x000378c9) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x0003a03a) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x0003a03a) im_writing_pane_t

0xc3ed,	// (0x00037268) input_focus_pane_cp04

0xc3ed,	// (0x00037268) input_focus_pane_cp05

0x24ae,	// (0x0002d329) list_im_single_pane_ParamLimits

0x24ae,	// (0x0002d329) list_im_single_pane

0xca6b,	// (0x000378e6) list_single_im_pane_t1

0xc961,	// (0x000377dc) blid_accuracy_pane

0xc961,	// (0x000377dc) blid_compass_pane

0xe489,	// (0x00039304) main_location_t1

0xe489,	// (0x00039304) main_location_t2

0xe489,	// (0x00039304) main_location_t3

0x0002,

0xf4de,	// (0x0003a359) main_location_t

0xc3ed,	// (0x00037268) aid_levels_location

0xc660,	// (0x000374db) blid_accuracy_pane_g1

0xc660,	// (0x000374db) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x0003a089) blid_accuracy_pane_g

0xcaa5,	// (0x00037920) wml_content_pane

0xcae3,	// (0x0003795e) wml_button_pane_ParamLimits

0xcae3,	// (0x0003795e) wml_button_pane

0x24c4,	// (0x0002d33f) wml_list_single_large_pane_ParamLimits

0x24c4,	// (0x0002d33f) wml_list_single_large_pane

0x24dd,	// (0x0002d358) wml_list_single_medium_pane_ParamLimits

0x24dd,	// (0x0002d358) wml_list_single_medium_pane

0x24f7,	// (0x0002d372) wml_list_single_small_pane_ParamLimits

0x24f7,	// (0x0002d372) wml_list_single_small_pane

0xcaf7,	// (0x00037972) wml_selection_box_pane_ParamLimits

0xcaf7,	// (0x00037972) wml_selection_box_pane

0xcb0a,	// (0x00037985) wml_list_single_pane_t1

0xcb19,	// (0x00037994) wml_list_single_medium_pane_t1

0xcb28,	// (0x000379a3) wml_list_single_large_pane_t1

0xcb37,	// (0x000379b2) input_focus_pane_cp02_ParamLimits

0xcb37,	// (0x000379b2) input_focus_pane_cp02

0xcb4a,	// (0x000379c5) wml_selection_box_pane_g1

0xcb53,	// (0x000379ce) wml_selection_box_pane_t1_ParamLimits

0xcb53,	// (0x000379ce) wml_selection_box_pane_t1

0xc648,	// (0x000374c3) bg_wml_button_pane_ParamLimits

0xc648,	// (0x000374c3) bg_wml_button_pane

0xcb6b,	// (0x000379e6) wml_button_pane_g1

0xcb73,	// (0x000379ee) wml_button_pane_t1

0xcb6b,	// (0x000379e6) wml_button_bg_pane_g1

0xcb83,	// (0x000379fe) wml_button_bg_pane_g2

0xcb8b,	// (0x00037a06) wml_button_bg_pane_g3

0xcb93,	// (0x00037a0e) wml_button_bg_pane_g4

0xcb9b,	// (0x00037a16) wml_button_bg_pane_g5

0xcba3,	// (0x00037a1e) wml_button_bg_pane_g6

0xcbab,	// (0x00037a26) wml_button_bg_pane_g7

0xcbb3,	// (0x00037a2e) wml_button_bg_pane_g8

0xcbbb,	// (0x00037a36) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x0003a03f) wml_button_bg_pane_g

0x2513,	// (0x0002d38e) bg_list_pane_cp02

0xcbc3,	// (0x00037a3e) mce_header_pane_ParamLimits

0xcbc3,	// (0x00037a3e) mce_header_pane

0xcbd9,	// (0x00037a54) mce_icon_pane

0xcbd9,	// (0x00037a54) mce_image_pane

0xcbe2,	// (0x00037a5d) mce_text_pane_ParamLimits

0xcbe2,	// (0x00037a5d) mce_text_pane

0x251d,	// (0x0002d398) scroll_pane_cp03

0xcadb,	// (0x00037956) scroll_pane_cp04

0xcbf5,	// (0x00037a70) scroll_pane_cp05_ParamLimits

0xcbf5,	// (0x00037a70) scroll_pane_cp05

0x2527,	// (0x0002d3a2) mce_header_field_pane_ParamLimits

0x2527,	// (0x0002d3a2) mce_header_field_pane

0x2540,	// (0x0002d3bb) mce_header_field_pane_2_ParamLimits

0x2540,	// (0x0002d3bb) mce_header_field_pane_2

0x2556,	// (0x0002d3d1) mce_header_field_pane_3

0x255e,	// (0x0002d3d9) list_single_mce_message_pane_ParamLimits

0x255e,	// (0x0002d3d9) list_single_mce_message_pane

0x257a,	// (0x0002d3f5) list_single_mce_smart_pane_ParamLimits

0x257a,	// (0x0002d3f5) list_single_mce_smart_pane

0xcc01,	// (0x00037a7c) input_focus_pane_cp03

0xcc0a,	// (0x00037a85) list_header_data_pane

0x25a1,	// (0x0002d41c) mce_header_field_pane_t1

0x25b1,	// (0x0002d42c) list_single_mce_header_pane_ParamLimits

0x25b1,	// (0x0002d42c) list_single_mce_header_pane

0xcc12,	// (0x00037a8d) list_single_mce_header_pane_t1

0xcc21,	// (0x00037a9c) list_single_mce_message_pane_g1

0xcc29,	// (0x00037aa4) list_single_mce_message_pane_t1

0x25eb,	// (0x0002d466) bg_cale_heading_pane_cp01_ParamLimits

0x25eb,	// (0x0002d466) bg_cale_heading_pane_cp01

0xcc37,	// (0x00037ab2) bg_cale_pane_cp02_ParamLimits

0xcc37,	// (0x00037ab2) bg_cale_pane_cp02

0x263d,	// (0x0002d4b8) cale_month_corner_pane

0x265c,	// (0x0002d4d7) cale_month_day_heading_pane_ParamLimits

0x265c,	// (0x0002d4d7) cale_month_day_heading_pane

0x26c6,	// (0x0002d541) cale_month_pane_g1_ParamLimits

0x26c6,	// (0x0002d541) cale_month_pane_g1

0x270d,	// (0x0002d588) cale_month_pane_g2_ParamLimits

0x270d,	// (0x0002d588) cale_month_pane_g2

0x2749,	// (0x0002d5c4) cale_month_pane_g3_ParamLimits

0x2749,	// (0x0002d5c4) cale_month_pane_g3

0x279d,	// (0x0002d618) cale_month_pane_g4_ParamLimits

0x279d,	// (0x0002d618) cale_month_pane_g4

0x27f1,	// (0x0002d66c) cale_month_pane_g5_ParamLimits

0x27f1,	// (0x0002d66c) cale_month_pane_g5

0x284d,	// (0x0002d6c8) cale_month_pane_g6_ParamLimits

0x284d,	// (0x0002d6c8) cale_month_pane_g6

0x28b1,	// (0x0002d72c) cale_month_pane_g7_ParamLimits

0x28b1,	// (0x0002d72c) cale_month_pane_g7

0x2919,	// (0x0002d794) cale_month_pane_g8_ParamLimits

0x2919,	// (0x0002d794) cale_month_pane_g8

0x2985,	// (0x0002d800) cale_month_pane_g9_ParamLimits

0x2985,	// (0x0002d800) cale_month_pane_g9

0x29e9,	// (0x0002d864) cale_month_pane_g10_ParamLimits

0x29e9,	// (0x0002d864) cale_month_pane_g10

0x2a3b,	// (0x0002d8b6) cale_month_pane_g11_ParamLimits

0x2a3b,	// (0x0002d8b6) cale_month_pane_g11

0x2a8d,	// (0x0002d908) cale_month_pane_g12_ParamLimits

0x2a8d,	// (0x0002d908) cale_month_pane_g12

0x2ae5,	// (0x0002d960) cale_month_pane_g13_ParamLimits

0x2ae5,	// (0x0002d960) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x0003a052) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x0003a052) cale_month_pane_g

0x2b3d,	// (0x0002d9b8) cale_month_week_pane

0x2b61,	// (0x0002d9dc) grid_cale_month_pane_ParamLimits

0x2b61,	// (0x0002d9dc) grid_cale_month_pane

0x2bc2,	// (0x0002da3d) cale_month_day_heading_pane_t1

0x2c48,	// (0x0002dac3) cale_month_day_heading_pane_t2

0x2cc1,	// (0x0002db3c) cale_month_day_heading_pane_t3

0x2d3a,	// (0x0002dbb5) cale_month_day_heading_pane_t4

0x2dbb,	// (0x0002dc36) cale_month_day_heading_pane_t5

0x2e44,	// (0x0002dcbf) cale_month_day_heading_pane_t6

0x2ecd,	// (0x0002dd48) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x0003a06d) cale_month_day_heading_pane_t

0xc906,	// (0x00037781) bg_cale_side_pane_cp01

0x2f5e,	// (0x0002ddd9) cale_month_week_pane_t1

0x2f77,	// (0x0002ddf2) cale_month_week_pane_t2

0x2f90,	// (0x0002de0b) cale_month_week_pane_t3

0x2fa9,	// (0x0002de24) cale_month_week_pane_t4

0x2fc2,	// (0x0002de3d) cale_month_week_pane_t5

0x2fdb,	// (0x0002de56) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x0003a07c) cale_month_week_pane_t

0x3000,	// (0x0002de7b) cell_cale_month_pane_ParamLimits

0x3000,	// (0x0002de7b) cell_cale_month_pane

0xb7d7,	// (0x00036652) cell_cale_month_pane_g1

0x073d,	// (0x0002b5b8) cell_cale_month_pane_t1_ParamLimits

0x073d,	// (0x0002b5b8) cell_cale_month_pane_t1

0xc914,	// (0x0003778f) grid_highlight_pane_cp08

0xc660,	// (0x000374db) main_smil_g1

0x3136,	// (0x0002dfb1) smil_status_pane

0xcc76,	// (0x00037af1) smil_text_pane

0xc8a7,	// (0x00037722) bg_popup_call3_rect_pane_g8

0xc89f,	// (0x0003771a) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x0003a08e) bg_popup_call3_rect_pane_g

0xe552,	// (0x000393cd) smil_status_volume_pane_g1

0xcc80,	// (0x00037afb) smil_status_pane_t1

0xb92d,	// (0x000367a8) volume_smil_pane

0xcc97,	// (0x00037b12) list_smil_text_pane

0x314b,	// (0x0002dfc6) scroll_pane_cp011

0x3156,	// (0x0002dfd1) smil_text_list_pane_t1_ParamLimits

0x3156,	// (0x0002dfd1) smil_text_list_pane_t1

0xb7e3,	// (0x0003665e) aid_volume_smil_ParamLimits

0xb7e3,	// (0x0003665e) aid_volume_smil

0xc660,	// (0x000374db) smil_volume_pane_g1

0xc660,	// (0x000374db) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x0003a089) smil_volume_pane_g

0x31a2,	// (0x0002e01d) listscroll_cale_day_pane

0xccaa,	// (0x00037b25) bg_cale_pane

0xccc2,	// (0x00037b3d) list_cale_pane

0xcce5,	// (0x00037b60) scroll_pane_cp09

0xc877,	// (0x000376f2) cale_bg_pane_g1

0xc86f,	// (0x000376ea) cale_bg_pane_g2

0xc867,	// (0x000376e2) cale_bg_pane_g3

0xc887,	// (0x00037702) cale_bg_pane_g4

0xc87f,	// (0x000376fa) cale_bg_pane_g5

0xc88f,	// (0x0003770a) cale_bg_pane_g6

0xc897,	// (0x00037712) cale_bg_pane_g7

0xc8a7,	// (0x00037722) cale_bg_pane_g8

0xc89f,	// (0x0003771a) cale_bg_pane_g9

0x0008,

0xf213,	// (0x0003a08e) cale_bg_pane_g

0xccf6,	// (0x00037b71) list_cale_time_pane_ParamLimits

0xccf6,	// (0x00037b71) list_cale_time_pane

0xcd0d,	// (0x00037b88) list_cale_time_pane_g1_ParamLimits

0xcd0d,	// (0x00037b88) list_cale_time_pane_g1

0xcd19,	// (0x00037b94) list_cale_time_pane_g2_ParamLimits

0xcd19,	// (0x00037b94) list_cale_time_pane_g2

0x31bc,	// (0x0002e037) list_cale_time_pane_g3_ParamLimits

0x31bc,	// (0x0002e037) list_cale_time_pane_g3

0x31ca,	// (0x0002e045) list_cale_time_pane_g4_ParamLimits

0x31ca,	// (0x0002e045) list_cale_time_pane_g4

0x31d8,	// (0x0002e053) list_cale_time_pane_g5_ParamLimits

0x31d8,	// (0x0002e053) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x0003a0a1) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x0003a0a1) list_cale_time_pane_g

0xcd33,	// (0x00037bae) list_cale_time_pane_t1_ParamLimits

0xcd33,	// (0x00037bae) list_cale_time_pane_t1

0xcd5b,	// (0x00037bd6) list_cale_time_pane_t2_ParamLimits

0xcd5b,	// (0x00037bd6) list_cale_time_pane_t2

0x3496,	// (0x0002e311) aid_blid_cardinal_pane

0x34d4,	// (0x0002e34f) compass_pane_t4

0xcd83,	// (0x00037bfe) list_cale_time_pane_t4_ParamLimits

0xcd83,	// (0x00037bfe) list_cale_time_pane_t4

0x34e2,	// (0x0002e35d) compass_pane_t5

0x34f2,	// (0x0002e36d) compass_pane_t6

0x3500,	// (0x0002e37b) compass_pane_t7

0xd1a2,	// (0x0003801d) navi_pane_cc_t1

0xd2ef,	// (0x0003816a) aid_phob_thumbnail_center_pane

0x3a86,	// (0x0002e901) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x0003a0ae) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x0003a0ae) list_cale_time_pane_t

0xb6a9,	// (0x00036524) bg_popup_window_pane_cp02_ParamLimits

0xb6a9,	// (0x00036524) bg_popup_window_pane_cp02

0xcdab,	// (0x00037c26) heading_pane_cp01_ParamLimits

0xcdab,	// (0x00037c26) heading_pane_cp01

0xcdb7,	// (0x00037c32) loc_req_pane_ParamLimits

0xcdb7,	// (0x00037c32) loc_req_pane

0xcdc9,	// (0x00037c44) loc_type_pane_ParamLimits

0xcdc9,	// (0x00037c44) loc_type_pane

0xcddb,	// (0x00037c56) loc_type_pane_t1_ParamLimits

0xcddb,	// (0x00037c56) loc_type_pane_t1

0xcded,	// (0x00037c68) loc_type_pane_t2_ParamLimits

0xcded,	// (0x00037c68) loc_type_pane_t2

0xcdff,	// (0x00037c7a) loc_type_pane_t3_ParamLimits

0xcdff,	// (0x00037c7a) loc_type_pane_t3

0x0002,

0xf23a,	// (0x0003a0b5) loc_type_pane_t_ParamLimits

0xf23a,	// (0x0003a0b5) loc_type_pane_t

0xce11,	// (0x00037c8c) list_loc_req_pane

0xce1b,	// (0x00037c96) scroll_pane_cp012

0x31e6,	// (0x0002e061) list_single_loc_request_popup_menu_pane_ParamLimits

0x31e6,	// (0x0002e061) list_single_loc_request_popup_menu_pane

0xce26,	// (0x00037ca1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xce26,	// (0x00037ca1) list_single_loc_request_popup_menu_pane_g1

0xce32,	// (0x00037cad) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xce32,	// (0x00037cad) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x0003a0bc) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x0003a0bc) list_single_loc_request_popup_menu_pane_g

0xce3e,	// (0x00037cb9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xce3e,	// (0x00037cb9) list_single_loc_request_popup_menu_pane_t1

0xc648,	// (0x000374c3) bg_popup_window_pane_cp03_ParamLimits

0xc648,	// (0x000374c3) bg_popup_window_pane_cp03

0xce54,	// (0x00037ccf) heading_loc_req_pane_ParamLimits

0xce54,	// (0x00037ccf) heading_loc_req_pane

0x31f3,	// (0x0002e06e) popup_dyc_status_message_window_g1_ParamLimits

0x31f3,	// (0x0002e06e) popup_dyc_status_message_window_g1

0x3207,	// (0x0002e082) popup_dyc_status_message_window_t1_ParamLimits

0x3207,	// (0x0002e082) popup_dyc_status_message_window_t1

0x321c,	// (0x0002e097) popup_dyc_status_message_window_t2_ParamLimits

0x321c,	// (0x0002e097) popup_dyc_status_message_window_t2

0x3231,	// (0x0002e0ac) popup_dyc_status_message_window_t3_ParamLimits

0x3231,	// (0x0002e0ac) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x0003a0c1) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x0003a0c1) popup_dyc_status_message_window_t

0xc3ed,	// (0x00037268) bg_heading_pane_cp01

0xce60,	// (0x00037cdb) heading_loc_req_pane_g1

0xce68,	// (0x00037ce3) heading_loc_req_pane_g2

0xce70,	// (0x00037ceb) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x0003a0c8) heading_loc_req_pane_g

0xce78,	// (0x00037cf3) heading_loc_req_pane_t1

0xce98,	// (0x00037d13) bg_popup_sub_pane_cp01_ParamLimits

0xce98,	// (0x00037d13) bg_popup_sub_pane_cp01

0xcea6,	// (0x00037d21) popup_cale_events_window_g1_ParamLimits

0xcea6,	// (0x00037d21) popup_cale_events_window_g1

0xcec6,	// (0x00037d41) popup_cale_events_window_g2_ParamLimits

0xcec6,	// (0x00037d41) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x0003a0ea) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x0003a0ea) popup_cale_events_window_g

0xcee6,	// (0x00037d61) popup_cale_events_window_t1_ParamLimits

0xcee6,	// (0x00037d61) popup_cale_events_window_t1

0xcef8,	// (0x00037d73) popup_cale_events_window_t2_ParamLimits

0xcef8,	// (0x00037d73) popup_cale_events_window_t2

0xcf36,	// (0x00037db1) popup_cale_events_window_t3_ParamLimits

0xcf36,	// (0x00037db1) popup_cale_events_window_t3

0xcf70,	// (0x00037deb) popup_cale_events_window_t4_ParamLimits

0xcf70,	// (0x00037deb) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x0003a0ef) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x0003a0ef) popup_cale_events_window_t

0x3265,	// (0x0002e0e0) call_type_pane

0x3275,	// (0x0002e0f0) popup_call_status_window_g1

0x3289,	// (0x0002e104) popup_call_status_window_g2

0x329d,	// (0x0002e118) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x0003a0f8) popup_call_status_window_g

0xcfa6,	// (0x00037e21) call_type_pane_g1

0xcfaf,	// (0x00037e2a) call_type_pane_g2

0x0001,

0xf284,	// (0x0003a0ff) call_type_pane_g

0xc3ed,	// (0x00037268) bg_popup_sub_pane_cp02

0xcfb8,	// (0x00037e33) listscroll_popup_wml_pane

0xcfc0,	// (0x00037e3b) list_wml_pane

0xcfca,	// (0x00037e45) scroll_pane_cp013

0xcfd5,	// (0x00037e50) list_single_graphic_popup_wml_pane_ParamLimits

0xcfd5,	// (0x00037e50) list_single_graphic_popup_wml_pane

0xc660,	// (0x000374db) list_single_graphic_popup_wml_pane_g1

0xcfe9,	// (0x00037e64) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x0003a104) list_single_graphic_popup_wml_pane_g

0xcff1,	// (0x00037e6c) list_single_graphic_popup_wml_pane_t1

0xd007,	// (0x00037e82) aid_call_pane

0xc640,	// (0x000374bb) popup_clock_analogue_window_g1

0xc640,	// (0x000374bb) popup_clock_analogue_window_g2

0xb805,	// (0x00036680) popup_clock_analogue_window_g3

0xb805,	// (0x00036680) popup_clock_analogue_window_g4

0xc660,	// (0x000374db) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x0003a109) popup_clock_analogue_window_g

0xb80d,	// (0x00036688) popup_clock_analogue_window_t1

0xb81b,	// (0x00036696) clock_digital_number_pane_ParamLimits

0xb81b,	// (0x00036696) clock_digital_number_pane

0xb827,	// (0x000366a2) clock_digital_number_pane_cp02_ParamLimits

0xb827,	// (0x000366a2) clock_digital_number_pane_cp02

0xb833,	// (0x000366ae) clock_digital_number_pane_cp03_ParamLimits

0xb833,	// (0x000366ae) clock_digital_number_pane_cp03

0xb83f,	// (0x000366ba) clock_digital_number_pane_cp04_ParamLimits

0xb83f,	// (0x000366ba) clock_digital_number_pane_cp04

0xb84b,	// (0x000366c6) clock_digital_separator_pane_ParamLimits

0xb84b,	// (0x000366c6) clock_digital_separator_pane

0xb857,	// (0x000366d2) popup_clock_digital_window_t1

0xc660,	// (0x000374db) clock_digital_number_pane_g1

0xc660,	// (0x000374db) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x0003a089) clock_digital_number_pane_g

0xc660,	// (0x000374db) clock_digital_separator_pane_g1

0xc660,	// (0x000374db) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x0003a089) clock_digital_separator_pane_g

0xc3ed,	// (0x00037268) bg_popup_window_pane_cp04

0xd00f,	// (0x00037e8a) heading_pane_cp03

0xc961,	// (0x000377dc) listscroll_popup_gms_pane

0xc3ed,	// (0x00037268) grid_large_graphic_popup_pane

0xd017,	// (0x00037e92) listscroll_popup_gms_pane_g1

0xd020,	// (0x00037e9b) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x0003a114) listscroll_popup_gms_pane_g

0xd029,	// (0x00037ea4) scroll_pane_cp014

0xc6c3,	// (0x0003753e) cell_large_graphic_popup_pane_ParamLimits

0xc6c3,	// (0x0003753e) cell_large_graphic_popup_pane

0xc6d1,	// (0x0003754c) cell_large_graphic_popup_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) cell_large_graphic_popup_pane_g1

0xd032,	// (0x00037ead) cell_large_graphic_popup_pane_g2_ParamLimits

0xd032,	// (0x00037ead) cell_large_graphic_popup_pane_g2

0xd040,	// (0x00037ebb) cell_large_graphic_popup_pane_g3_ParamLimits

0xd040,	// (0x00037ebb) cell_large_graphic_popup_pane_g3

0xd04e,	// (0x00037ec9) cell_large_graphic_popup_pane_g4_ParamLimits

0xd04e,	// (0x00037ec9) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x0003a119) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x0003a119) cell_large_graphic_popup_pane_g

0xc3ed,	// (0x00037268) grid_highlight_pane_cp010

0xc660,	// (0x000374db) bg_popup_call_pane_g1

0xd05f,	// (0x00037eda) list_single_graphic_popup_conf_pane_ParamLimits

0xd05f,	// (0x00037eda) list_single_graphic_popup_conf_pane

0xd071,	// (0x00037eec) list_highlight_pane_cp01

0xd07a,	// (0x00037ef5) list_single_graphic_popup_conf_pane_g1

0xd082,	// (0x00037efd) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x0003a122) list_single_graphic_popup_conf_pane_g

0xd08a,	// (0x00037f05) list_single_graphic_popup_conf_pane_t1

0xd098,	// (0x00037f13) linegrid_cams_pane_g1

0x32ad,	// (0x0002e128) linegrid_cams_pane_g2

0xc947,	// (0x000377c2) linegrid_cams_pane_g3

0xd0a1,	// (0x00037f1c) linegrid_cams_pane_g4

0x32b6,	// (0x0002e131) linegrid_cams_pane_g5

0x32bf,	// (0x0002e13a) linegrid_cams_pane_g6

0xc950,	// (0x000377cb) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x0003a127) linegrid_cams_pane_g

0xd0aa,	// (0x00037f25) popup_clock_analogue_window

0xd0aa,	// (0x00037f25) popup_clock_digital_window

0xc3ed,	// (0x00037268) popup_phob_thumbnail_window

0xc660,	// (0x000374db) call_video_uplink_pane_g1

0xd0b3,	// (0x00037f2e) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x0003a136) call_video_uplink_pane_g

0xd0bb,	// (0x00037f36) video_uplink_pane

0xd0c3,	// (0x00037f3e) mce_image_pane_g1

0x32ca,	// (0x0002e145) mce_image_pane_g2

0x32d4,	// (0x0002e14f) mce_image_pane_g3

0x32de,	// (0x0002e159) mce_image_pane_g4

0x32e6,	// (0x0002e161) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x0003a13b) mce_image_pane_g

0xd0cd,	// (0x00037f48) control_top_pane_stacon_cp01_ParamLimits

0xd0cd,	// (0x00037f48) control_top_pane_stacon_cp01

0xd0e1,	// (0x00037f5c) uni_indicator_pane_stacon_cp01_ParamLimits

0xd0e1,	// (0x00037f5c) uni_indicator_pane_stacon_cp01

0xd0f2,	// (0x00037f6d) bg_popup_sub_pane_cp03

0x32ee,	// (0x0002e169) chi_dic_find_pane

0x32f6,	// (0x0002e171) listscroll_chi_dic_pane

0x32ff,	// (0x0002e17a) main_pane_chidic_g1

0x3312,	// (0x0002e18d) chi_dic_find_pane_t1

0xd0fc,	// (0x00037f77) find_chidic_pane

0xd105,	// (0x00037f80) chi_dic_list_pane_ParamLimits

0xd105,	// (0x00037f80) chi_dic_list_pane

0xd116,	// (0x00037f91) scroll_pane_cp020

0x3320,	// (0x0002e19b) find_chidic_pane_t1

0xc3ed,	// (0x00037268) input_focus_pane_cp06

0x332f,	// (0x0002e1aa) list_chi_dic_pane_ParamLimits

0x332f,	// (0x0002e1aa) list_chi_dic_pane

0x3341,	// (0x0002e1bc) list_chi_dic_pane_t1_ParamLimits

0x3341,	// (0x0002e1bc) list_chi_dic_pane_t1

0xc3ed,	// (0x00037268) list_highlight_pane_cp020

0xd11e,	// (0x00037f99) bg_cale_heading_pane_g1

0x3354,	// (0x0002e1cf) bg_cale_heading_pane_g2

0x335c,	// (0x0002e1d7) bg_cale_heading_pane_g3

0x3364,	// (0x0002e1df) bg_cale_heading_pane_g4

0x336e,	// (0x0002e1e9) bg_cale_heading_pane_g5

0x3378,	// (0x0002e1f3) bg_cale_heading_pane_g6

0x3380,	// (0x0002e1fb) bg_cale_heading_pane_g7

0x3388,	// (0x0002e203) bg_cale_heading_pane_g8

0x3392,	// (0x0002e20d) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x0003a146) bg_cale_heading_pane_g

0xd11e,	// (0x00037f99) bg_cale_side_pane_g1

0x339c,	// (0x0002e217) bg_cale_side_pane_g2

0x33a6,	// (0x0002e221) bg_cale_side_pane_g3

0x33b0,	// (0x0002e22b) bg_cale_side_pane_g4

0x33ba,	// (0x0002e235) bg_cale_side_pane_g5

0x33c4,	// (0x0002e23f) bg_cale_side_pane_g6

0x33ce,	// (0x0002e249) bg_cale_side_pane_g7

0x33d8,	// (0x0002e253) bg_cale_side_pane_g8

0x33e0,	// (0x0002e25b) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x0003a159) bg_cale_side_pane_g

0x33e8,	// (0x0002e263) popup_call_status_window_ParamLimits

0x33e8,	// (0x0002e263) popup_call_status_window

0xd126,	// (0x00037fa1) stacon_top_pane

0xd12e,	// (0x00037fa9) status_pane_ParamLimits

0xd12e,	// (0x00037fa9) status_pane

0xd143,	// (0x00037fbe) status_small_pane

0xd14b,	// (0x00037fc6) control_pane

0xc3ed,	// (0x00037268) stacon_bottom_pane

0xd153,	// (0x00037fce) list_single_mce_smart_pane_t1_ParamLimits

0xd153,	// (0x00037fce) list_single_mce_smart_pane_t1

0xd166,	// (0x00037fe1) list_single_mce_smart_pane_t2_ParamLimits

0xd166,	// (0x00037fe1) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x0003a16c) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x0003a16c) list_single_mce_smart_pane_t

0x3435,	// (0x0002e2b0) compass_pane

0x3440,	// (0x0002e2bb) main_location2_pane_t1

0x3456,	// (0x0002e2d1) main_location2_pane_t2

0x346c,	// (0x0002e2e7) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x0003a171) main_location2_pane_t

0xd185,	// (0x00038000) compass_pane_g1_ParamLimits

0xd185,	// (0x00038000) compass_pane_g1

0x34b6,	// (0x0002e331) compass_pane_t1

0x34c5,	// (0x0002e340) compass_pane_t2

0x0005,

0xf2ff,	// (0x0003a17a) compass_pane_t

0x3510,	// (0x0002e38b) text_secondary_cp61

0xd199,	// (0x00038014) navi_pane_cams_g5

0xd1bc,	// (0x00038037) navi_pane_im_t1

0xd1ca,	// (0x00038045) navi_pane_mp_g1_ParamLimits

0xd1ca,	// (0x00038045) navi_pane_mp_g1

0xd1de,	// (0x00038059) navi_pane_mp_g2_ParamLimits

0xd1de,	// (0x00038059) navi_pane_mp_g2

0xd1ea,	// (0x00038065) navi_pane_mp_g3_ParamLimits

0xd1ea,	// (0x00038065) navi_pane_mp_g3

0x0002,

0xf313,	// (0x0003a18e) navi_pane_mp_g_ParamLimits

0xf313,	// (0x0003a18e) navi_pane_mp_g

0xd1f6,	// (0x00038071) navi_pane_mp_t1

0xd204,	// (0x0003807f) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x0003a195) navi_pane_mp_t

0xd240,	// (0x000380bb) navi_pane_vt_g1

0xd1f6,	// (0x00038071) navi_pane_vt_t1

0xd248,	// (0x000380c3) navi_slider_pane

0xc961,	// (0x000377dc) zooming_pane

0xd250,	// (0x000380cb) navi_slider_pane_g1

0xb874,	// (0x000366ef) navi_slider_pane_g2

0x0006,

0xf321,	// (0x0003a19c) navi_slider_pane_g

0xd274,	// (0x000380ef) aid_levels_zoom

0xd27c,	// (0x000380f7) zooming_pane_g1

0xd284,	// (0x000380ff) zooming_pane_g2

0xd284,	// (0x000380ff) zooming_pane_g3

0x0002,

0xf330,	// (0x0003a1ab) zooming_pane_g

0xd28c,	// (0x00038107) level_10_zoom

0xd295,	// (0x00038110) level_11_zoom

0xd29e,	// (0x00038119) level_1_zoom

0xd2a7,	// (0x00038122) level_2_zoom

0xd2b0,	// (0x0003812b) level_3_zoom

0xd2b9,	// (0x00038134) level_4_zoom

0xd2c2,	// (0x0003813d) level_5_zoom

0xd2cb,	// (0x00038146) level_6_zoom

0xd2d4,	// (0x0003814f) level_7_zoom

0xd2dd,	// (0x00038158) level_8_zoom

0xd2e6,	// (0x00038161) level_9_zoom

0xd2f7,	// (0x00038172) popup_phob_thumbnail_window_g1

0xd2ff,	// (0x0003817a) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x0003a1b2) popup_phob_thumbnail_window_g

0x40d0,	// (0x0002ef4b) level_1_location

0x40d8,	// (0x0002ef53) level_2_location

0x40e0,	// (0x0002ef5b) level_3_location

0x40ea,	// (0x0002ef65) level_4_location

0xc961,	// (0x000377dc) level_5_location

0x3659,	// (0x0002e4d4) mce_icon_pane_g1

0x3663,	// (0x0002e4de) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x0003a1b7) mce_icon_pane_g

0xd307,	// (0x00038182) main_mup_pane_g1_ParamLimits

0xd307,	// (0x00038182) main_mup_pane_g1

0xd307,	// (0x00038182) main_mup_pane_g2_ParamLimits

0xd307,	// (0x00038182) main_mup_pane_g2

0xd307,	// (0x00038182) main_mup_pane_g3_ParamLimits

0xd307,	// (0x00038182) main_mup_pane_g3

0xd307,	// (0x00038182) main_mup_pane_g4_ParamLimits

0xd307,	// (0x00038182) main_mup_pane_g4

0xd307,	// (0x00038182) main_mup_pane_g5_ParamLimits

0xd307,	// (0x00038182) main_mup_pane_g5

0xd307,	// (0x00038182) main_mup_pane_g6_ParamLimits

0xd307,	// (0x00038182) main_mup_pane_g6

0xd307,	// (0x00038182) main_mup_pane_g7_ParamLimits

0xd307,	// (0x00038182) main_mup_pane_g7

0xd307,	// (0x00038182) main_mup_pane_g8_ParamLimits

0xd307,	// (0x00038182) main_mup_pane_g8

0xd307,	// (0x00038182) main_mup_pane_g9_ParamLimits

0xd307,	// (0x00038182) main_mup_pane_g9

0xd307,	// (0x00038182) main_mup_pane_g10_ParamLimits

0xd307,	// (0x00038182) main_mup_pane_g10

0xd307,	// (0x00038182) main_mup_pane_g11_ParamLimits

0xd307,	// (0x00038182) main_mup_pane_g11

0xc6d1,	// (0x0003754c) main_mup_pane_g12_ParamLimits

0xc6d1,	// (0x0003754c) main_mup_pane_g12

0xd307,	// (0x00038182) main_mup_pane_g13_ParamLimits

0xd307,	// (0x00038182) main_mup_pane_g13

0x000c,

0xf341,	// (0x0003a1bc) main_mup_pane_g_ParamLimits

0xf341,	// (0x0003a1bc) main_mup_pane_g

0xd315,	// (0x00038190) main_mup_pane_t1_ParamLimits

0xd315,	// (0x00038190) main_mup_pane_t1

0xd315,	// (0x00038190) main_mup_pane_t2_ParamLimits

0xd315,	// (0x00038190) main_mup_pane_t2

0xd315,	// (0x00038190) main_mup_pane_t3_ParamLimits

0xd315,	// (0x00038190) main_mup_pane_t3

0xc719,	// (0x00037594) main_mup_pane_t4_ParamLimits

0xc719,	// (0x00037594) main_mup_pane_t4

0xc719,	// (0x00037594) main_mup_pane_t5_ParamLimits

0xc719,	// (0x00037594) main_mup_pane_t5

0xc72d,	// (0x000375a8) main_mup_pane_t6_ParamLimits

0xc72d,	// (0x000375a8) main_mup_pane_t6

0x0005,

0xf35c,	// (0x0003a1d7) main_mup_pane_t_ParamLimits

0xf35c,	// (0x0003a1d7) main_mup_pane_t

0xc6c3,	// (0x0003753e) mup_progress_pane_ParamLimits

0xc6c3,	// (0x0003753e) mup_progress_pane

0xd329,	// (0x000381a4) mup_visualizer_pane_ParamLimits

0xd329,	// (0x000381a4) mup_visualizer_pane

0xd329,	// (0x000381a4) mup_volume_pane_ParamLimits

0xd329,	// (0x000381a4) mup_volume_pane

0xc6df,	// (0x0003755a) mup_visualizer_pane_g1_ParamLimits

0xc6df,	// (0x0003755a) mup_visualizer_pane_g1

0xd337,	// (0x000381b2) mup_visualizer_pane_g2_ParamLimits

0xd337,	// (0x000381b2) mup_visualizer_pane_g2

0xc6d1,	// (0x0003754c) mup_visualizer_pane_g3_ParamLimits

0xc6d1,	// (0x0003754c) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x0003a1e4) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x0003a1e4) mup_visualizer_pane_g

0xc70f,	// (0x0003758a) mup_volume_pane_g1

0xc70f,	// (0x0003758a) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00039f07) mup_volume_pane_g

0xc70f,	// (0x0003758a) mup_progress_pane_g1

0xc70f,	// (0x0003758a) mup_progress_pane_g2

0xc70f,	// (0x0003758a) mup_progress_pane_g3

0x0002,

0xf370,	// (0x0003a1eb) mup_progress_pane_g

0xc3ed,	// (0x00037268) bg_popup_window_pane_cp05

0xd345,	// (0x000381c0) heading_pane_cp02_ParamLimits

0xd345,	// (0x000381c0) heading_pane_cp02

0xd361,	// (0x000381dc) list_popup_blid_pane

0xd369,	// (0x000381e4) list_blid_sat_info_pane_ParamLimits

0xd369,	// (0x000381e4) list_blid_sat_info_pane

0xd37c,	// (0x000381f7) list_blid_sat_info_pane_g1

0xd384,	// (0x000381ff) list_blid_sat_info_pane_t1

0x3777,	// (0x0002e5f2) mup_equalizer_pane_ParamLimits

0x3777,	// (0x0002e5f2) mup_equalizer_pane

0x3798,	// (0x0002e613) mup_equalizer_pane_cp1_ParamLimits

0x3798,	// (0x0002e613) mup_equalizer_pane_cp1

0x37b9,	// (0x0002e634) mup_equalizer_pane_cp2_ParamLimits

0x37b9,	// (0x0002e634) mup_equalizer_pane_cp2

0x37de,	// (0x0002e659) mup_equalizer_pane_cp3_ParamLimits

0x37de,	// (0x0002e659) mup_equalizer_pane_cp3

0x3807,	// (0x0002e682) mup_equalizer_pane_cp4_ParamLimits

0x3807,	// (0x0002e682) mup_equalizer_pane_cp4

0x3830,	// (0x0002e6ab) mup_equalizer_pane_cp5

0x3848,	// (0x0002e6c3) mup_equalizer_pane_cp6

0x3860,	// (0x0002e6db) mup_equalizer_pane_cp7

0xe427,	// (0x000392a2) bg_popup_call_poc_act_pane_g9

0xe42f,	// (0x000392aa) bg_popup_call_poc_act_pane_g10

0xe437,	// (0x000392b2) bg_popup_call_poc_act_pane_g11

0x000a,

0xc648,	// (0x000374c3) mup_scale_pane

0xc660,	// (0x000374db) mup_scale_pane_g1

0xd392,	// (0x0003820d) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x0003a207) mup_scale_pane_g

0xd3b6,	// (0x00038231) msg_data_pane

0xd3be,	// (0x00038239) scroll_pane_cp017

0x388a,	// (0x0002e705) bg_list_pane_cp04_ParamLimits

0x388a,	// (0x0002e705) bg_list_pane_cp04

0xd3c6,	// (0x00038241) msg_data_pane_g1

0x38b2,	// (0x0002e72d) msg_data_pane_g2

0x38bc,	// (0x0002e737) msg_data_pane_g3

0x38c6,	// (0x0002e741) msg_data_pane_g4

0x38ce,	// (0x0002e749) msg_data_pane_g5

0x38d6,	// (0x0002e751) msg_data_pane_g6

0x38de,	// (0x0002e759) msg_data_pane_g7

0x0006,

0xf39b,	// (0x0003a216) msg_data_pane_g

0x38e6,	// (0x0002e761) msg_text_pane_ParamLimits

0x38e6,	// (0x0002e761) msg_text_pane

0x3923,	// (0x0002e79e) qrid_highlight_pane_cp011_ParamLimits

0x3923,	// (0x0002e79e) qrid_highlight_pane_cp011

0xc3ed,	// (0x00037268) msg_body_pane

0xc648,	// (0x000374c3) msg_header_pane

0xd3e2,	// (0x0003825d) input_focus_pane_cp07

0x3947,	// (0x0002e7c2) msg_header_pane_t1_ParamLimits

0x3947,	// (0x0002e7c2) msg_header_pane_t1

0x3963,	// (0x0002e7de) msg_header_pane_t2_ParamLimits

0x3963,	// (0x0002e7de) msg_header_pane_t2

0x0001,

0xf3af,	// (0x0003a22a) msg_header_pane_t_ParamLimits

0xf3af,	// (0x0003a22a) msg_header_pane_t

0xd403,	// (0x0003827e) msg_body_pane_g1

0x3983,	// (0x0002e7fe) msg_body_pane_t1_ParamLimits

0x3983,	// (0x0002e7fe) msg_body_pane_t1

0x39b4,	// (0x0002e82f) msg_body_pane_t2_ParamLimits

0x39b4,	// (0x0002e82f) msg_body_pane_t2

0x39c6,	// (0x0002e841) msg_body_pane_t3_ParamLimits

0x39c6,	// (0x0002e841) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x0003a22f) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x0003a22f) msg_body_pane_t

0x0785,	// (0x0002b600) main_viewer_pane_g1_ParamLimits

0x0785,	// (0x0002b600) main_viewer_pane_g1

0x0793,	// (0x0002b60e) main_viewer_pane_g2_ParamLimits

0x0793,	// (0x0002b60e) main_viewer_pane_g2

0x39f6,	// (0x0002e871) main_viewer_pane_g3_ParamLimits

0x39f6,	// (0x0002e871) main_viewer_pane_g3

0x3a05,	// (0x0002e880) main_viewer_pane_g4_ParamLimits

0x3a05,	// (0x0002e880) main_viewer_pane_g4

0xb89e,	// (0x00036719) main_viewer_pane_g5_ParamLimits

0xb89e,	// (0x00036719) main_viewer_pane_g5

0xb89e,	// (0x00036719) main_viewer_pane_g7_ParamLimits

0xb89e,	// (0x00036719) main_viewer_pane_g7

0xb8b0,	// (0x0003672b) main_viewer_pane_g8_ParamLimits

0xb8b0,	// (0x0003672b) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x0003a23f) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x0003a23f) main_viewer_pane_g

0xd40b,	// (0x00038286) viewer_content_pane_ParamLimits

0xd40b,	// (0x00038286) viewer_content_pane

0x3a43,	// (0x0002e8be) main_postcard_pane_g1_ParamLimits

0x3a43,	// (0x0002e8be) main_postcard_pane_g1

0x3a59,	// (0x0002e8d4) main_postcard_pane_g2_ParamLimits

0x3a59,	// (0x0002e8d4) main_postcard_pane_g2

0x3a6f,	// (0x0002e8ea) main_postcard_pane_g3_ParamLimits

0x3a6f,	// (0x0002e8ea) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x0003a250) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x0003a250) main_postcard_pane_g

0x3a86,	// (0x0002e901) main_postcard_pane_g4

0xe565,	// (0x000393e0) smil_status_volume_pane_g2

0x3ac9,	// (0x0002e944) postcard_pane_ParamLimits

0x3ac9,	// (0x0002e944) postcard_pane

0xd419,	// (0x00038294) postcard_pane_g1_ParamLimits

0xd419,	// (0x00038294) postcard_pane_g1

0x3b19,	// (0x0002e994) postcard_pane_g2_ParamLimits

0x3b19,	// (0x0002e994) postcard_pane_g2

0x3b25,	// (0x0002e9a0) postcard_pane_g3_ParamLimits

0x3b25,	// (0x0002e9a0) postcard_pane_g3

0xd427,	// (0x000382a2) postcard_pane_g4_ParamLimits

0xd427,	// (0x000382a2) postcard_pane_g4

0x3b31,	// (0x0002e9ac) postcard_pane_g5_ParamLimits

0x3b31,	// (0x0002e9ac) postcard_pane_g5

0x3b46,	// (0x0002e9c1) postcard_pane_g6_ParamLimits

0x3b46,	// (0x0002e9c1) postcard_pane_g6

0xd419,	// (0x00038294) postcard_pane_g7_ParamLimits

0xd419,	// (0x00038294) postcard_pane_g7

0x0006,

0xf3e2,	// (0x0003a25d) postcard_pane_g_ParamLimits

0xf3e2,	// (0x0003a25d) postcard_pane_g

0x3b5e,	// (0x0002e9d9) main_mp2_pane_g1_ParamLimits

0x3b5e,	// (0x0002e9d9) main_mp2_pane_g1

0x3b6c,	// (0x0002e9e7) main_mp2_pane_g2_ParamLimits

0x3b6c,	// (0x0002e9e7) main_mp2_pane_g2

0x3b78,	// (0x0002e9f3) main_mp2_pane_g3_ParamLimits

0x3b78,	// (0x0002e9f3) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x0003a26c) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x0003a26c) main_mp2_pane_g

0x3b84,	// (0x0002e9ff) main_mp2_pane_t1_ParamLimits

0x3b84,	// (0x0002e9ff) main_mp2_pane_t1

0x3b9b,	// (0x0002ea16) main_mp2_pane_t2_ParamLimits

0x3b9b,	// (0x0002ea16) main_mp2_pane_t2

0x3bad,	// (0x0002ea28) main_mp2_pane_t3_ParamLimits

0x3bad,	// (0x0002ea28) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x0003a273) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x0003a273) main_mp2_pane_t

0xc66a,	// (0x000374e5) pec_content_pane_ParamLimits

0xc66a,	// (0x000374e5) pec_content_pane

0xb57d,	// (0x000363f8) scroll_pane_cp015

0xd329,	// (0x000381a4) pec_attribute_pane_ParamLimits

0xd329,	// (0x000381a4) pec_attribute_pane

0xc6d1,	// (0x0003754c) pec_content_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) pec_content_pane_g1

0xd435,	// (0x000382b0) pec_content_pane_t1_ParamLimits

0xd435,	// (0x000382b0) pec_content_pane_t1

0xd449,	// (0x000382c4) pec_content_pane_t2_ParamLimits

0xd449,	// (0x000382c4) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x0003a27a) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x0003a27a) pec_content_pane_t

0xc6c3,	// (0x0003753e) list_single_graphic_pane_cp01_ParamLimits

0xc6c3,	// (0x0003753e) list_single_graphic_pane_cp01

0xc648,	// (0x000374c3) bg_popup_sub_pane_cp04

0xd45d,	// (0x000382d8) popup_mup_playback_window_g1

0xd469,	// (0x000382e4) popup_mup_playback_window_t1

0xd47e,	// (0x000382f9) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x0003a27f) popup_mup_playback_window_t

0xd4b5,	// (0x00038330) main_image_pane_g1_ParamLimits

0xd4b5,	// (0x00038330) main_image_pane_g1

0xd4f8,	// (0x00038373) scroll_pane_cp018_ParamLimits

0xd4f8,	// (0x00038373) scroll_pane_cp018

0xd510,	// (0x0003838b) scroll_pane_cp016_ParamLimits

0xd510,	// (0x0003838b) scroll_pane_cp016

0x3c77,	// (0x0002eaf2) smil2_image_pane_ParamLimits

0x3c77,	// (0x0002eaf2) smil2_image_pane

0x3cad,	// (0x0002eb28) smil2_root_pane_ParamLimits

0x3cad,	// (0x0002eb28) smil2_root_pane

0x3ce5,	// (0x0002eb60) smil2_text_pane_ParamLimits

0x3ce5,	// (0x0002eb60) smil2_text_pane

0xb57d,	// (0x000363f8) bg_list_pane_cp06

0xb57d,	// (0x000363f8) grid_radio_pane

0xc3ed,	// (0x00037268) bg_popup_window_pane_cp06

0xce88,	// (0x00037d03) main_fmradio_pane_t1

0xd00f,	// (0x00037e8a) heading_pane_cp04

0xce88,	// (0x00037d03) main_fmradio_pane_t2

0xe43f,	// (0x000392ba) popup_cale_lunar_info_window_g1

0xce88,	// (0x00037d03) main_fmradio_pane_t3

0xe447,	// (0x000392c2) popup_cale_lunar_info_window_g2

0xce88,	// (0x00037d03) main_fmradio_pane_t4

0x0001,

0xce88,	// (0x00037d03) main_fmradio_pane_t5

0x0004,

0xf4c1,	// (0x0003a33c) popup_cale_lunar_info_window_g

0xf264,	// (0x0003a0df) main_fmradio_pane_t

0xb57d,	// (0x000363f8) wait_bar_pane_cp03

0xc6c3,	// (0x0003753e) cell_fmradio_pane_ParamLimits

0xc6c3,	// (0x0003753e) cell_fmradio_pane

0xc6d1,	// (0x0003754c) cell_fmradio_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) cell_fmradio_pane_g1

0xb57d,	// (0x000363f8) grid_highlight_pane_cp011

0xd544,	// (0x000383bf) poc_content_pane_ParamLimits

0xd544,	// (0x000383bf) poc_content_pane

0xd556,	// (0x000383d1) scroll_pane_cp019

0x3d75,	// (0x0002ebf0) popup_call_poc_act_window_ParamLimits

0x3d75,	// (0x0002ebf0) popup_call_poc_act_window

0x3d99,	// (0x0002ec14) popup_call_poc_inact_window_ParamLimits

0x3d99,	// (0x0002ec14) popup_call_poc_inact_window

0xf49d,	// (0x0003a318) bg_popup_call_poc_act_pane_g

0xe3b7,	// (0x00039232) bg_popup_call_poc_inact_pane_g1

0xe3bf,	// (0x0003923a) bg_popup_call_poc_inact_pane_g2

0xd55e,	// (0x000383d9) popup_call_poc_act_window_g2

0xe3c7,	// (0x00039242) bg_popup_call_poc_inact_pane_g3

0xe3cf,	// (0x0003924a) bg_popup_call_poc_inact_pane_g4

0xe3d7,	// (0x00039252) bg_popup_call_poc_inact_pane_g5

0xd566,	// (0x000383e1) popup_call_poc_act_window_t1_ParamLimits

0xd566,	// (0x000383e1) popup_call_poc_act_window_t1

0xd58e,	// (0x00038409) popup_call_poc_act_window_t2_ParamLimits

0xd58e,	// (0x00038409) popup_call_poc_act_window_t2

0xd5b6,	// (0x00038431) popup_call_poc_act_window_t3_ParamLimits

0xd5b6,	// (0x00038431) popup_call_poc_act_window_t3

0xd5de,	// (0x00038459) popup_call_poc_act_window_t4_ParamLimits

0xd5de,	// (0x00038459) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x0003a294) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x0003a294) popup_call_poc_act_window_t

0xe3df,	// (0x0003925a) bg_popup_call_poc_inact_pane_g6

0xe3e7,	// (0x00039262) bg_popup_call_poc_inact_pane_g7

0xe3ef,	// (0x0003926a) bg_popup_call_poc_inact_pane_g8

0xd5f0,	// (0x0003846b) popup_call_poc_inact_window_g2

0xe3f7,	// (0x00039272) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48a,	// (0x0003a305) bg_popup_call_poc_inact_pane_g

0xd5f8,	// (0x00038473) popup_call_poc_inact_window_t1_ParamLimits

0xd5f8,	// (0x00038473) popup_call_poc_inact_window_t1

0xd60d,	// (0x00038488) popup_call_poc_inact_window_t2_ParamLimits

0xd60d,	// (0x00038488) popup_call_poc_inact_window_t2

0xd622,	// (0x0003849d) popup_call_poc_inact_window_t3_ParamLimits

0xd622,	// (0x0003849d) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x0003a29d) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x0003a29d) popup_call_poc_inact_window_t

0xe4dd,	// (0x00039358) context_pane_ParamLimits

0x42fb,	// (0x0002f176) signal_pane_ParamLimits

0xc961,	// (0x000377dc) main_call2_pane

0xb8f9,	// (0x00036774) popup_phob_thumbnail2_window_ParamLimits

0xb8f9,	// (0x00036774) popup_phob_thumbnail2_window

0xb886,	// (0x00036701) aid_hotspot_pointer_arrow_pane

0xb88e,	// (0x00036709) aid_hotspot_pointer_hand_pane

0x4098,	// (0x0002ef13) phob_pre_status_pane_g5

0xc66a,	// (0x000374e5) cams_zoom_pane_ParamLimits

0xc66a,	// (0x000374e5) image_vga_pane_ParamLimits

0xc6d1,	// (0x0003754c) main_camera_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) main_camera_pane_g2_ParamLimits

0xc6d1,	// (0x0003754c) main_camera_pane_g3_ParamLimits

0xc6d1,	// (0x0003754c) main_camera_pane_g4_ParamLimits

0xc6d1,	// (0x0003754c) main_camera_pane_g5_ParamLimits

0xc6d1,	// (0x0003754c) main_camera_pane_g6_ParamLimits

0xc6d1,	// (0x0003754c) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x00039fd8) main_camera_pane_g_ParamLimits

0xc719,	// (0x00037594) main_camera_pane_t1_ParamLimits

0xc719,	// (0x00037594) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x00039fe9) main_camera_pane_t_ParamLimits

0xc648,	// (0x000374c3) bg_popup_preview_window_pane_cp01_ParamLimits

0xc648,	// (0x000374c3) bg_popup_preview_window_pane_cp01

0xd637,	// (0x000384b2) popup_phob_thumbnail2_window_g1_ParamLimits

0xd637,	// (0x000384b2) popup_phob_thumbnail2_window_g1

0xc3ed,	// (0x00037268) call2_cli_visual_pane

0x3dcd,	// (0x0002ec48) popup_call2_audio_conf_window_ParamLimits

0x3dcd,	// (0x0002ec48) popup_call2_audio_conf_window

0x3df5,	// (0x0002ec70) popup_call2_audio_first_window_ParamLimits

0x3df5,	// (0x0002ec70) popup_call2_audio_first_window

0x3e8b,	// (0x0002ed06) popup_call2_audio_in_window_ParamLimits

0x3e8b,	// (0x0002ed06) popup_call2_audio_in_window

0x3ed7,	// (0x0002ed52) popup_call2_audio_out_window_ParamLimits

0x3ed7,	// (0x0002ed52) popup_call2_audio_out_window

0x3f49,	// (0x0002edc4) popup_call2_audio_second_window_ParamLimits

0x3f49,	// (0x0002edc4) popup_call2_audio_second_window

0x3faf,	// (0x0002ee2a) popup_call2_audio_wait_window_ParamLimits

0x3faf,	// (0x0002ee2a) popup_call2_audio_wait_window

0xc3ed,	// (0x00037268) bg_popup_call2_act_pane_cp03

0xc62a,	// (0x000374a5) list_conf_pane_cp

0xd643,	// (0x000384be) popup_call2_audio_conf_window_t1

0xd651,	// (0x000384cc) list_single_graphic_popup_conf2_pane_ParamLimits

0xd651,	// (0x000384cc) list_single_graphic_popup_conf2_pane

0xd071,	// (0x00037eec) list_highlight_pane_cp04

0xd664,	// (0x000384df) list_single_graphic_popup_conf2_pane_g1

0xd082,	// (0x00037efd) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x0003a2a4) list_single_graphic_popup_conf2_pane_g

0xd66e,	// (0x000384e9) list_single_graphic_popup_conf2_pane_t1

0xd67c,	// (0x000384f7) bg_popup_call2_act_pane_cp01_ParamLimits

0xd67c,	// (0x000384f7) bg_popup_call2_act_pane_cp01

0xd706,	// (0x00038581) call_type_pane_cp05_ParamLimits

0xd706,	// (0x00038581) call_type_pane_cp05

0xd75a,	// (0x000385d5) popup_call2_audio_second_window_g1_ParamLimits

0xd75a,	// (0x000385d5) popup_call2_audio_second_window_g1

0xd7ae,	// (0x00038629) popup_call2_audio_second_window_g2_ParamLimits

0xd7ae,	// (0x00038629) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x0003a2a9) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x0003a2a9) popup_call2_audio_second_window_g

0xd813,	// (0x0003868e) popup_call2_audio_second_window_t1_ParamLimits

0xd813,	// (0x0003868e) popup_call2_audio_second_window_t1

0xd8ce,	// (0x00038749) popup_call2_audio_second_window_t2_ParamLimits

0xd8ce,	// (0x00038749) popup_call2_audio_second_window_t2

0xd921,	// (0x0003879c) popup_call2_audio_second_window_t3_ParamLimits

0xd921,	// (0x0003879c) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x0003a2b0) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x0003a2b0) popup_call2_audio_second_window_t

0xc3ed,	// (0x00037268) bg_popup_call2_in_pane_cp02

0xc3f7,	// (0x00037272) call_type_pane_cp04

0x3fe9,	// (0x0002ee64) popup_call2_audio_wait_window_g1

0x3ff1,	// (0x0002ee6c) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x0003a2b9) popup_call2_audio_wait_window_g

0xc40f,	// (0x0003728a) popup_call2_audio_wait_window_t3

0xda14,	// (0x0003888f) bg_popup_call2_act_pane_ParamLimits

0xda14,	// (0x0003888f) bg_popup_call2_act_pane

0xdad4,	// (0x0003894f) call_type_pane_cp03_ParamLimits

0xdad4,	// (0x0003894f) call_type_pane_cp03

0xdb38,	// (0x000389b3) popup_call2_audio_first_window_g1_ParamLimits

0xdb38,	// (0x000389b3) popup_call2_audio_first_window_g1

0xdba8,	// (0x00038a23) popup_call2_audio_first_window_g2_ParamLimits

0xdba8,	// (0x00038a23) popup_call2_audio_first_window_g2

0xdc0c,	// (0x00038a87) popup_call2_audio_first_window_g3_ParamLimits

0xdc0c,	// (0x00038a87) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x0003a2be) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x0003a2be) popup_call2_audio_first_window_g

0xdc94,	// (0x00038b0f) popup_call2_audio_first_window_t1_ParamLimits

0xdc94,	// (0x00038b0f) popup_call2_audio_first_window_t1

0xdd97,	// (0x00038c12) popup_call2_audio_first_window_t4_ParamLimits

0xdd97,	// (0x00038c12) popup_call2_audio_first_window_t4

0xde7a,	// (0x00038cf5) popup_call2_audio_first_window_t5_ParamLimits

0xde7a,	// (0x00038cf5) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x0003a2c9) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x0003a2c9) popup_call2_audio_first_window_t

0xc640,	// (0x000374bb) bg_popup_call2_act_pane_g1

0xe451,	// (0x000392cc) popup_cale_lunar_info_window_t1

0xe45f,	// (0x000392da) popup_cale_lunar_info_window_t2

0xe46d,	// (0x000392e8) popup_cale_lunar_info_window_t3

0xc3ed,	// (0x00037268) bg_popup_call2_bubble_pane

0xdf7b,	// (0x00038df6) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf7b,	// (0x00038df6) bg_popup_call2_in_pane_cp01

0xb72e,	// (0x000365a9) call_type_pane_cp02

0x3ff9,	// (0x0002ee74) popup_call2_audio_out_window_g1_ParamLimits

0x3ff9,	// (0x0002ee74) popup_call2_audio_out_window_g1

0xdfc3,	// (0x00038e3e) popup_call2_audio_out_window_g2_ParamLimits

0xdfc3,	// (0x00038e3e) popup_call2_audio_out_window_g2

0x4025,	// (0x0002eea0) popup_call2_audio_out_window_g3_ParamLimits

0x4025,	// (0x0002eea0) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x0003a2d2) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x0003a2d2) popup_call2_audio_out_window_g

0xdffa,	// (0x00038e75) popup_call2_audio_out_window_t1_ParamLimits

0xdffa,	// (0x00038e75) popup_call2_audio_out_window_t1

0xe059,	// (0x00038ed4) popup_call2_audio_out_window_t2_ParamLimits

0xe059,	// (0x00038ed4) popup_call2_audio_out_window_t2

0xe0ad,	// (0x00038f28) popup_call2_audio_out_window_t3_ParamLimits

0xe0ad,	// (0x00038f28) popup_call2_audio_out_window_t3

0xe0c3,	// (0x00038f3e) popup_call2_audio_out_window_t4_ParamLimits

0xe0c3,	// (0x00038f3e) popup_call2_audio_out_window_t4

0xe0d9,	// (0x00038f54) popup_call2_audio_out_window_t5_ParamLimits

0xe0d9,	// (0x00038f54) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x0003a2db) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x0003a2db) popup_call2_audio_out_window_t

0xe13d,	// (0x00038fb8) bg_popup_call2_in_pane_ParamLimits

0xe13d,	// (0x00038fb8) bg_popup_call2_in_pane

0xe199,	// (0x00039014) popup_call2_audio_in_window_g1_ParamLimits

0xe199,	// (0x00039014) popup_call2_audio_in_window_g1

0xe1d1,	// (0x0003904c) popup_call2_audio_in_window_g2_ParamLimits

0xe1d1,	// (0x0003904c) popup_call2_audio_in_window_g2

0xe209,	// (0x00039084) popup_call2_audio_in_window_g3_ParamLimits

0xe209,	// (0x00039084) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x0003a2e8) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x0003a2e8) popup_call2_audio_in_window_g

0xe261,	// (0x000390dc) popup_call2_audio_in_window_t1_ParamLimits

0xe261,	// (0x000390dc) popup_call2_audio_in_window_t1

0xe2e1,	// (0x0003915c) popup_call2_audio_in_window_t2_ParamLimits

0xe2e1,	// (0x0003915c) popup_call2_audio_in_window_t2

0xe361,	// (0x000391dc) popup_call2_audio_in_window_t3_ParamLimits

0xe361,	// (0x000391dc) popup_call2_audio_in_window_t3

0xe37b,	// (0x000391f6) popup_call2_audio_in_window_t4_ParamLimits

0xe37b,	// (0x000391f6) popup_call2_audio_in_window_t4

0xe38d,	// (0x00039208) popup_call2_audio_in_window_t5_ParamLimits

0xe38d,	// (0x00039208) popup_call2_audio_in_window_t5

0xe3a2,	// (0x0003921d) popup_call2_audio_in_window_t6_ParamLimits

0xe3a2,	// (0x0003921d) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x0003a2f1) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x0003a2f1) popup_call2_audio_in_window_t

0xc640,	// (0x000374bb) bg_popup_call2_in_pane_g1

0xe47b,	// (0x000392f6) popup_cale_lunar_info_window_t4

0x0003,

0xf4c6,	// (0x0003a341) popup_cale_lunar_info_window_t

0xc648,	// (0x000374c3) bg_popup_call2_rect_pane_ParamLimits

0xc648,	// (0x000374c3) bg_popup_call2_rect_pane

0xc3ed,	// (0x00037268) call2_cli_visual_graphic_pane

0xc3ed,	// (0x00037268) call2_cli_visual_text_pane

0xb920,	// (0x0003679b) smil_status_volume_pane_g3

0x0002,

0xc660,	// (0x000374db) call2_cli_visual_graphic_pane_g1

0xc660,	// (0x000374db) call2_cli_visual_graphic_pane_g2

0xc660,	// (0x000374db) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x0003a2fe) call2_cli_visual_graphic_pane_g

0xc877,	// (0x000376f2) bg_popup_call2_rect_pane_g1

0xc86f,	// (0x000376ea) bg_popup_call2_rect_pane_g2

0xc867,	// (0x000376e2) bg_popup_call2_rect_pane_g3

0xc887,	// (0x00037702) bg_popup_call2_rect_pane_g4

0xc87f,	// (0x000376fa) bg_popup_call2_rect_pane_g5

0xc88f,	// (0x0003770a) bg_popup_call2_rect_pane_g6

0xc897,	// (0x00037712) bg_popup_call2_rect_pane_g7

0xc8a7,	// (0x00037722) bg_popup_call2_rect_pane_g8

0xc89f,	// (0x0003771a) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x0003a08e) bg_popup_call2_rect_pane_g

0xe3b7,	// (0x00039232) bg_popup_call2_bubble_pane_g1

0xe3bf,	// (0x0003923a) bg_popup_call2_bubble_pane_g2

0xe3c7,	// (0x00039242) bg_popup_call2_bubble_pane_g3

0xe3cf,	// (0x0003924a) bg_popup_call2_bubble_pane_g4

0xe3d7,	// (0x00039252) bg_popup_call2_bubble_pane_g5

0xe3df,	// (0x0003925a) bg_popup_call2_bubble_pane_g6

0xe3e7,	// (0x00039262) bg_popup_call2_bubble_pane_g7

0xe3ef,	// (0x0003926a) bg_popup_call2_bubble_pane_g8

0xe3f7,	// (0x00039272) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x0003a305) bg_popup_call2_bubble_pane_g

0x19e2,	// (0x0002c85d) aid_cale_week_size_cell_pane

0x1f70,	// (0x0002cdeb) aid_cams_cif_uncrop_pane_ParamLimits

0x1f70,	// (0x0002cdeb) aid_cams_cif_uncrop_pane

0xc66a,	// (0x000374e5) aid_cams_size_cell_ParamLimits

0xc66a,	// (0x000374e5) aid_cams_size_cell

0xc66a,	// (0x000374e5) grid_cams_pane_ParamLimits

0xc66a,	// (0x000374e5) linegrid_cams_pane_ParamLimits

0x2185,	// (0x0002d000) call_video_pane_t1

0x219f,	// (0x0002d01a) call_video_pane_t2

0x0001,

0xf1ba,	// (0x0003a035) call_video_pane_t

0x25c5,	// (0x0002d440) aid_cale_month_size_cell_pane_ParamLimits

0x25c5,	// (0x0002d440) aid_cale_month_size_cell_pane

0xf50a,	// (0x0003a385) smil_status_volume_pane_g

0xb92d,	// (0x000367a8) volume_smil_pane_ParamLimits

0xb58f,	// (0x0003640a) aid_popup2_width_pane

0x1950,	// (0x0002c7cb) cell_qdial_pane_g4_ParamLimits

0x1950,	// (0x0002c7cb) cell_qdial_pane_g4

0x3496,	// (0x0002e311) aid_blid_cardinal_pane_ParamLimits

0x34a2,	// (0x0002e31d) aid_blid_destination_pane_ParamLimits

0x34a2,	// (0x0002e31d) aid_blid_destination_pane

0xc648,	// (0x000374c3) bg_popup_call_poc_act_pane_ParamLimits

0xc648,	// (0x000374c3) bg_popup_call_poc_act_pane

0xc648,	// (0x000374c3) bg_popup_call_poc_inact_pane_ParamLimits

0xc648,	// (0x000374c3) bg_popup_call_poc_inact_pane

0xe3ff,	// (0x0003927a) bg_popup_call_poc_act_pane_g1

0xe407,	// (0x00039282) bg_popup_call_poc_act_pane_g2

0xe40f,	// (0x0003928a) bg_popup_call_poc_act_pane_g3

0xe3cf,	// (0x0003924a) bg_popup_call_poc_act_pane_g4

0xe3d7,	// (0x00039252) bg_popup_call_poc_act_pane_g5

0xe417,	// (0x00039292) bg_popup_call_poc_act_pane_g6

0xe3e7,	// (0x00039262) bg_popup_call_poc_act_pane_g7

0xe41f,	// (0x0003929a) bg_popup_call_poc_act_pane_g8

0xc3ed,	// (0x00037268) main_usb_pane

0xb8d0,	// (0x0003674b) popup_cale_lunar_info_window

0x245a,	// (0x0002d2d5) im_reading_pane_t1_ParamLimits

0xca24,	// (0x0003789f) list_im_pane_ParamLimits

0xca35,	// (0x000378b0) scroll_pane_cp07_ParamLimits

0xc3ed,	// (0x00037268) grid_highlight_pane_cp012

0xc648,	// (0x000374c3) mup_scale_pane_ParamLimits

0xc6d1,	// (0x0003754c) main_usb_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) main_usb_pane_g1

0xc6d1,	// (0x0003754c) main_usb_pane_g2_ParamLimits

0xc6d1,	// (0x0003754c) main_usb_pane_g2

0x0001,

0xf199,	// (0x0003a014) main_usb_pane_g_ParamLimits

0xf199,	// (0x0003a014) main_usb_pane_g

0xc719,	// (0x00037594) main_usb_pane_t1_ParamLimits

0xc719,	// (0x00037594) main_usb_pane_t1

0xc719,	// (0x00037594) main_usb_pane_t2_ParamLimits

0xc719,	// (0x00037594) main_usb_pane_t2

0xc719,	// (0x00037594) main_usb_pane_t3_ParamLimits

0xc719,	// (0x00037594) main_usb_pane_t3

0xc719,	// (0x00037594) main_usb_pane_t4_ParamLimits

0xc719,	// (0x00037594) main_usb_pane_t4

0xc719,	// (0x00037594) main_usb_pane_t5_ParamLimits

0xc719,	// (0x00037594) main_usb_pane_t5

0xc719,	// (0x00037594) main_usb_pane_t6_ParamLimits

0xc719,	// (0x00037594) main_usb_pane_t6

0x0005,

0xf4b4,	// (0x0003a32f) main_usb_pane_t_ParamLimits

0x3435,	// (0x0002e2b0) aid_text_placing

0x3440,	// (0x0002e2bb) main_location2_pane_t1_ParamLimits

0x3456,	// (0x0002e2d1) main_location2_pane_t2_ParamLimits

0x346c,	// (0x0002e2e7) main_location2_pane_t3_ParamLimits

0x3482,	// (0x0002e2fd) main_location2_pane_t4_ParamLimits

0x3482,	// (0x0002e2fd) main_location2_pane_t4

0xf2f6,	// (0x0003a171) main_location2_pane_t_ParamLimits

0xc684,	// (0x000374ff) find_pinb_pane_g2_ParamLimits

0xc684,	// (0x000374ff) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00039eed) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00039eed) find_pinb_pane_g

0xc690,	// (0x0003750b) find_pinb_pane_t1_ParamLimits

0xc6a2,	// (0x0003751d) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00039ef2) find_pinb_pane_t_ParamLimits

0xc3ed,	// (0x00037268) main_call3_pane

0x2bc2,	// (0x0002da3d) cale_month_day_heading_pane_t1_ParamLimits

0x2c48,	// (0x0002dac3) cale_month_day_heading_pane_t2_ParamLimits

0x2cc1,	// (0x0002db3c) cale_month_day_heading_pane_t3_ParamLimits

0x2d3a,	// (0x0002dbb5) cale_month_day_heading_pane_t4_ParamLimits

0x2dbb,	// (0x0002dc36) cale_month_day_heading_pane_t5_ParamLimits

0x2e44,	// (0x0002dcbf) cale_month_day_heading_pane_t6_ParamLimits

0x2ecd,	// (0x0002dd48) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x0003a06d) cale_month_day_heading_pane_t_ParamLimits

0xcc8e,	// (0x00037b09) smil_status_volume_pane

0x3aed,	// (0x0002e968) postcard_address_pane_ParamLimits

0x3aed,	// (0x0002e968) postcard_address_pane

0x3b03,	// (0x0002e97e) postcard_message_pane_ParamLimits

0x3b03,	// (0x0002e97e) postcard_message_pane

0x4051,	// (0x0002eecc) call2_cli_visual_pane_t1_ParamLimits

0x4051,	// (0x0002eecc) call2_cli_visual_pane_t1

0xe590,	// (0x0003940b) postcard_message_pane_t1_ParamLimits

0xe590,	// (0x0003940b) postcard_message_pane_t1

0xe578,	// (0x000393f3) postcard_address_pane_t1_ParamLimits

0xe578,	// (0x000393f3) postcard_address_pane_t1

0x44b7,	// (0x0002f332) popup_call3_audio_in_window_ParamLimits

0x44b7,	// (0x0002f332) popup_call3_audio_in_window

0x433c,	// (0x0002f1b7) bg_popup_call3_in_pane_ParamLimits

0x433c,	// (0x0002f1b7) bg_popup_call3_in_pane

0x43b8,	// (0x0002f233) popup_call3_audio_in_window_g1_ParamLimits

0x43b8,	// (0x0002f233) popup_call3_audio_in_window_g1

0x43d8,	// (0x0002f253) popup_call3_audio_in_window_g2_ParamLimits

0x43d8,	// (0x0002f253) popup_call3_audio_in_window_g2

0x43f8,	// (0x0002f273) popup_call3_audio_in_window_g3_ParamLimits

0x43f8,	// (0x0002f273) popup_call3_audio_in_window_g3

0x0003,

0xf511,	// (0x0003a38c) popup_call3_audio_in_window_g_ParamLimits

0xf511,	// (0x0003a38c) popup_call3_audio_in_window_g

0x4429,	// (0x0002f2a4) popup_call3_audio_in_window_t1_ParamLimits

0x4429,	// (0x0002f2a4) popup_call3_audio_in_window_t1

0x4467,	// (0x0002f2e2) popup_call3_audio_in_window_t2_ParamLimits

0x4467,	// (0x0002f2e2) popup_call3_audio_in_window_t2

0x44a5,	// (0x0002f320) popup_call3_audio_in_window_t3_ParamLimits

0x44a5,	// (0x0002f320) popup_call3_audio_in_window_t3

0x0002,

0xf51a,	// (0x0003a395) popup_call3_audio_in_window_t_ParamLimits

0xf51a,	// (0x0003a395) popup_call3_audio_in_window_t

0xc961,	// (0x000377dc) bg_popup_call3_rect_pane

0xc877,	// (0x000376f2) bg_popup_call3_rect_pane_g1

0xc86f,	// (0x000376ea) bg_popup_call3_rect_pane_g2

0xc867,	// (0x000376e2) bg_popup_call3_rect_pane_g3

0xc887,	// (0x00037702) bg_popup_call3_rect_pane_g4

0xc87f,	// (0x000376fa) bg_popup_call3_rect_pane_g5

0xc88f,	// (0x0003770a) bg_popup_call3_rect_pane_g6

0xc897,	// (0x00037712) bg_popup_call3_rect_pane_g7

0xb57d,	// (0x000363f8) mup_visualizer_osc_pane

0xb57d,	// (0x000363f8) mup_visualizer_spec_pane

0x436c,	// (0x0002f1e7) call3_video_qcif_pane_ParamLimits

0x436c,	// (0x0002f1e7) call3_video_qcif_pane

0x437f,	// (0x0002f1fa) call3_video_qcif_uncrop_pane_ParamLimits

0x437f,	// (0x0002f1fa) call3_video_qcif_uncrop_pane

0x438f,	// (0x0002f20a) call3_video_subqcif_pane_ParamLimits

0x438f,	// (0x0002f20a) call3_video_subqcif_pane

0x43a5,	// (0x0002f220) call3_video_subqcif_uncrop_pane_ParamLimits

0x43a5,	// (0x0002f220) call3_video_subqcif_uncrop_pane

0x4418,	// (0x0002f293) popup_call3_audio_in_window_g4_ParamLimits

0x4418,	// (0x0002f293) popup_call3_audio_in_window_g4

0xb57d,	// (0x000363f8) mup_spec_half_pane

0xb57d,	// (0x000363f8) mup_spec_half_pane_cp

0xb57d,	// (0x000363f8) mup_osc_middle_pane

0xc70f,	// (0x0003758a) mup_visualizer_osc_pane_g1

0xe52b,	// (0x000393a6) mup_spec_bar_pane_ParamLimits

0xe52b,	// (0x000393a6) mup_spec_bar_pane

0xc70f,	// (0x0003758a) mup_spec_bar_pane_g1

0xc70f,	// (0x0003758a) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00039f07) mup_spec_bar_pane_g

0x19e2,	// (0x0002c85d) aid_cale_week_size_cell_pane_ParamLimits

0x19fc,	// (0x0002c877) bg_cale_heading_pane_ParamLimits

0x1a20,	// (0x0002c89b) bg_cale_pane_cp01_ParamLimits

0x1a3d,	// (0x0002c8b8) cale_week_corner_pane_ParamLimits

0x1a5c,	// (0x0002c8d7) cale_week_day_heading_pane_ParamLimits

0x1a85,	// (0x0002c900) cale_week_scroll_pane_g1_ParamLimits

0x1aa4,	// (0x0002c91f) cale_week_scroll_pane_g2_ParamLimits

0x1abc,	// (0x0002c937) cale_week_scroll_pane_g3_ParamLimits

0x1ad4,	// (0x0002c94f) cale_week_scroll_pane_g4_ParamLimits

0x1aec,	// (0x0002c967) cale_week_scroll_pane_g5_ParamLimits

0x1b0c,	// (0x0002c987) cale_week_scroll_pane_g6_ParamLimits

0x1b2c,	// (0x0002c9a7) cale_week_scroll_pane_g7_ParamLimits

0x1b4c,	// (0x0002c9c7) cale_week_scroll_pane_g8_ParamLimits

0x1b70,	// (0x0002c9eb) cale_week_scroll_pane_g9_ParamLimits

0x1b88,	// (0x0002ca03) cale_week_scroll_pane_g10_ParamLimits

0x1ba0,	// (0x0002ca1b) cale_week_scroll_pane_g11_ParamLimits

0x1bb8,	// (0x0002ca33) cale_week_scroll_pane_g12_ParamLimits

0x1bd8,	// (0x0002ca53) cale_week_scroll_pane_g13_ParamLimits

0x1bfc,	// (0x0002ca77) cale_week_scroll_pane_g14_ParamLimits

0x1c20,	// (0x0002ca9b) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00039f7e) cale_week_scroll_pane_g_ParamLimits

0x1c68,	// (0x0002cae3) cale_week_time_pane_ParamLimits

0x1c8c,	// (0x0002cb07) grid_cale_week_pane_ParamLimits

0xc8d7,	// (0x00037752) listscroll_cale_week_pane_t1

0xc8e9,	// (0x00037764) scroll_pane_cp08_ParamLimits

0x263d,	// (0x0002d4b8) cale_month_corner_pane_ParamLimits

0xcc64,	// (0x00037adf) cale_month_pane_t1

0x2b3d,	// (0x0002d9b8) cale_month_week_pane_ParamLimits

0x3275,	// (0x0002e0f0) popup_call_status_window_g1_ParamLimits

0x3289,	// (0x0002e104) popup_call_status_window_g2_ParamLimits

0x329d,	// (0x0002e118) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x0003a0f8) popup_call_status_window_g_ParamLimits

0xcfff,	// (0x00037e7a) aid_call2_pane

0x3939,	// (0x0002e7b4) msg_header_pane_g1

0x3aed,	// (0x0002e968) postcard_address2_pane_ParamLimits

0x3aed,	// (0x0002e968) postcard_address2_pane

0x3b03,	// (0x0002e97e) postcard_message2_pane_ParamLimits

0x3b03,	// (0x0002e97e) postcard_message2_pane

0x4309,	// (0x0002f184) message2_row_pane_ParamLimits

0x4309,	// (0x0002f184) message2_row_pane

0x4329,	// (0x0002f1a4) address2_row_pane_ParamLimits

0x4329,	// (0x0002f1a4) address2_row_pane

0xe4f8,	// (0x00039373) postcard_message2_row_pane_g1

0xe500,	// (0x0003937b) postcard_message2_row_pane_t1

0xe4f8,	// (0x00039373) address2_row_pane_g1

0xe500,	// (0x0003937b) address2_row_pane_t1

0x1f03,	// (0x0002cd7e) aid_size_cell_vorec

0xc3ed,	// (0x00037268) main_rss_pane

0xe50e,	// (0x00039389) rss_list_single_pane_ParamLimits

0xe50e,	// (0x00039389) rss_list_single_pane

0xe51c,	// (0x00039397) rss_list_single_pane_t1

0xe51c,	// (0x00039397) rss_list_single_pane_t2

0x0001,

0xf505,	// (0x0003a380) rss_list_single_pane_t

0xc3ed,	// (0x00037268) main_camera2_pane

0xc3ed,	// (0x00037268) main_video2_pane

0xb942,	// (0x000367bd) cams_zoom_pane_cp2_ParamLimits

0xb942,	// (0x000367bd) cams_zoom_pane_cp2

0xb942,	// (0x000367bd) image2_vga_pane_ParamLimits

0xb942,	// (0x000367bd) image2_vga_pane

0xb950,	// (0x000367cb) main_camera2_pane_g1_ParamLimits

0xb950,	// (0x000367cb) main_camera2_pane_g1

0xb950,	// (0x000367cb) main_camera2_pane_g2_ParamLimits

0xb950,	// (0x000367cb) main_camera2_pane_g2

0xb950,	// (0x000367cb) main_camera2_pane_g3_ParamLimits

0xb950,	// (0x000367cb) main_camera2_pane_g3

0xb950,	// (0x000367cb) main_camera2_pane_g4_ParamLimits

0xb950,	// (0x000367cb) main_camera2_pane_g4

0xb950,	// (0x000367cb) main_camera2_pane_g5_ParamLimits

0xb950,	// (0x000367cb) main_camera2_pane_g5

0xb950,	// (0x000367cb) main_camera2_pane_g6_ParamLimits

0xb950,	// (0x000367cb) main_camera2_pane_g6

0xb950,	// (0x000367cb) main_camera2_pane_g7_ParamLimits

0xb950,	// (0x000367cb) main_camera2_pane_g7

0xb950,	// (0x000367cb) main_camera2_pane_g8_ParamLimits

0xb950,	// (0x000367cb) main_camera2_pane_g8

0x0008,

0xf521,	// (0x0003a39c) main_camera2_pane_g_ParamLimits

0xf521,	// (0x0003a39c) main_camera2_pane_g

0x0aa1,	// (0x0002b91c) main_camera2_pane_t1_ParamLimits

0x0aa1,	// (0x0002b91c) main_camera2_pane_t1

0x0aa1,	// (0x0002b91c) main_camera2_pane_t2_ParamLimits

0x0aa1,	// (0x0002b91c) main_camera2_pane_t2

0x0aa1,	// (0x0002b91c) main_camera2_pane_t3_ParamLimits

0x0aa1,	// (0x0002b91c) main_camera2_pane_t3

0x0aa1,	// (0x0002b91c) main_camera2_pane_t4_ParamLimits

0x0aa1,	// (0x0002b91c) main_camera2_pane_t4

0x0006,

0xf534,	// (0x0003a3af) main_camera2_pane_t_ParamLimits

0xf534,	// (0x0003a3af) main_camera2_pane_t

0xb994,	// (0x0003680f) cams_zoom_pane_cp4_ParamLimits

0xb994,	// (0x0003680f) cams_zoom_pane_cp4

0x0ab5,	// (0x0002b930) image2_cif_pane_ParamLimits

0x0ab5,	// (0x0002b930) image2_cif_pane

0xb5f2,	// (0x0003646d) image2_subqcif_pane_ParamLimits

0xb5f2,	// (0x0003646d) image2_subqcif_pane

0x0ac3,	// (0x0002b93e) main_video2_pane_g1_ParamLimits

0x0ac3,	// (0x0002b93e) main_video2_pane_g1

0x0ac3,	// (0x0002b93e) main_video2_pane_g2_ParamLimits

0x0ac3,	// (0x0002b93e) main_video2_pane_g2

0x0ac3,	// (0x0002b93e) main_video2_pane_g3_ParamLimits

0x0ac3,	// (0x0002b93e) main_video2_pane_g3

0x0ac3,	// (0x0002b93e) main_video2_pane_g4_ParamLimits

0x0ac3,	// (0x0002b93e) main_video2_pane_g4

0x0ac3,	// (0x0002b93e) main_video2_pane_g5_ParamLimits

0x0ac3,	// (0x0002b93e) main_video2_pane_g5

0x0ac3,	// (0x0002b93e) main_video2_pane_g6_ParamLimits

0x0ac3,	// (0x0002b93e) main_video2_pane_g6

0x0005,

0xf543,	// (0x0003a3be) main_video2_pane_g_ParamLimits

0xf543,	// (0x0003a3be) main_video2_pane_g

0x0ad1,	// (0x0002b94c) main_video2_pane_t1_ParamLimits

0x0ad1,	// (0x0002b94c) main_video2_pane_t1

0x0ad1,	// (0x0002b94c) main_video2_pane_t2_ParamLimits

0x0ad1,	// (0x0002b94c) main_video2_pane_t2

0x0ad1,	// (0x0002b94c) main_video2_pane_t3_ParamLimits

0x0ad1,	// (0x0002b94c) main_video2_pane_t3

0x0002,

0xf550,	// (0x0003a3cb) main_video2_pane_t_ParamLimits

0xf550,	// (0x0003a3cb) main_video2_pane_t

0x40fc,	// (0x0002ef77) call_muted_g2

0x0001,

0xf4f7,	// (0x0003a372) call_muted_g

0xc3ed,	// (0x00037268) main_mup2_pane

0xd307,	// (0x00038182) main_mup2_pane_g1_ParamLimits

0xd307,	// (0x00038182) main_mup2_pane_g1

0xd307,	// (0x00038182) main_mup2_pane_g2_ParamLimits

0xd307,	// (0x00038182) main_mup2_pane_g2

0x4578,	// (0x0002f3f3) main_mup_pane_g13_cp1

0xb600,	// (0x0003647b) mup_volume_pane_cp1

0xd307,	// (0x00038182) main_mup2_pane_g4_ParamLimits

0xd307,	// (0x00038182) main_mup2_pane_g4

0xd307,	// (0x00038182) main_mup2_pane_g5_ParamLimits

0xd307,	// (0x00038182) main_mup2_pane_g5

0xd307,	// (0x00038182) main_mup2_pane_g6_ParamLimits

0xd307,	// (0x00038182) main_mup2_pane_g6

0xd307,	// (0x00038182) main_mup2_pane_g7_ParamLimits

0xd307,	// (0x00038182) main_mup2_pane_g7

0x0006,

0xf557,	// (0x0003a3d2) main_mup2_pane_g_ParamLimits

0xf557,	// (0x0003a3d2) main_mup2_pane_g

0xd315,	// (0x00038190) main_mup2_pane_t1_ParamLimits

0xd315,	// (0x00038190) main_mup2_pane_t1

0xd315,	// (0x00038190) main_mup2_pane_t2_ParamLimits

0xd315,	// (0x00038190) main_mup2_pane_t2

0xd315,	// (0x00038190) main_mup2_pane_t3_ParamLimits

0xd315,	// (0x00038190) main_mup2_pane_t3

0xd315,	// (0x00038190) main_mup2_pane_t4_ParamLimits

0xd315,	// (0x00038190) main_mup2_pane_t4

0xd315,	// (0x00038190) main_mup2_pane_t5_ParamLimits

0xd315,	// (0x00038190) main_mup2_pane_t5

0xd315,	// (0x00038190) main_mup2_pane_t6_ParamLimits

0xd315,	// (0x00038190) main_mup2_pane_t6

0x0005,

0xf566,	// (0x0003a3e1) main_mup2_pane_t_ParamLimits

0xf566,	// (0x0003a3e1) main_mup2_pane_t

0xd329,	// (0x000381a4) mup2_visualizer_pane_ParamLimits

0xd329,	// (0x000381a4) mup2_visualizer_pane

0xd329,	// (0x000381a4) mup_progress_pane_cp_ParamLimits

0xd329,	// (0x000381a4) mup_progress_pane_cp

0xb9b8,	// (0x00036833) mup_volume_pane_cp_ParamLimits

0xb9b8,	// (0x00036833) mup_volume_pane_cp

0xc6d1,	// (0x0003754c) mup2_visualizer_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) mup2_visualizer_pane_g1

0xc6df,	// (0x0003755a) mup2_visualizer_pane_g2_ParamLimits

0xc6df,	// (0x0003755a) mup2_visualizer_pane_g2

0xc6df,	// (0x0003755a) mup2_visualizer_pane_g3_ParamLimits

0xc6df,	// (0x0003755a) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00039ef7) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00039ef7) mup2_visualizer_pane_g

0xb57d,	// (0x000363f8) aid_size_cell_fmradio

0x07a1,	// (0x0002b61c) aid_height_parent_landcape

0xcac2,	// (0x0003793d) wml_content_pane_cp

0xcaca,	// (0x00037945) wml_tabs_pane

0xcad3,	// (0x0003794e) popup_wml_miniature_window

0xcadb,	// (0x00037956) scroll_pane_cp021

0xcaef,	// (0x0003796a) wml_content_pane_comp8

0xc3ed,	// (0x00037268) bg_popup_sub_pane_cp05

0xe5c2,	// (0x0003943d) popup_wml_miniature_window_g1

0xe5ca,	// (0x00039445) wml_miniature_view_pane

0x44cb,	// (0x0002f346) aid_size_wml_view

0x44d3,	// (0x0002f34e) wml_miniature_view_pane_g1

0x44dc,	// (0x0002f357) wml_miniature_view_pane_g2

0x44e5,	// (0x0002f360) wml_miniature_view_pane_g3

0x44ed,	// (0x0002f368) wml_miniature_view_pane_g4

0x44f5,	// (0x0002f370) wml_miniature_view_pane_g5

0x44fd,	// (0x0002f378) wml_miniature_view_pane_g6

0x4505,	// (0x0002f380) wml_miniature_view_pane_g7

0x450d,	// (0x0002f388) wml_miniature_view_pane_g8

0x0007,

0xf573,	// (0x0003a3ee) wml_miniature_view_pane_g

0xe5d2,	// (0x0003944d) background_graphic_ParamLimits

0xe5d2,	// (0x0003944d) background_graphic

0xe5de,	// (0x00039459) wml_tabs_2_pane

0xe5e7,	// (0x00039462) wml_tabs_3_pane_ParamLimits

0xe5e7,	// (0x00039462) wml_tabs_3_pane

0xe5f9,	// (0x00039474) wml_tabs_4_pane_ParamLimits

0xe5f9,	// (0x00039474) wml_tabs_4_pane

0xe60f,	// (0x0003948a) wml_tabs_5_pane_ParamLimits

0xe60f,	// (0x0003948a) wml_tabs_5_pane

0xe629,	// (0x000394a4) wml_tabs_pane_g2_ParamLimits

0xe629,	// (0x000394a4) wml_tabs_pane_g2

0xe63e,	// (0x000394b9) wml_tabs_pane_g3_ParamLimits

0xe63e,	// (0x000394b9) wml_tabs_pane_g3

0xe653,	// (0x000394ce) wml_tabs_2_active_pane_ParamLimits

0xe653,	// (0x000394ce) wml_tabs_2_active_pane

0xe653,	// (0x000394ce) wml_tabs_2_passive_pane_ParamLimits

0xe653,	// (0x000394ce) wml_tabs_2_passive_pane

0x4515,	// (0x0002f390) wml_tabs_3_active_pane_cp_ParamLimits

0x4515,	// (0x0002f390) wml_tabs_3_active_pane_cp

0x452a,	// (0x0002f3a5) wml_tabs_3_passive_pane_ParamLimits

0x452a,	// (0x0002f3a5) wml_tabs_3_passive_pane

0x453d,	// (0x0002f3b8) wml_tabs_3_passive_pane_cp_ParamLimits

0x453d,	// (0x0002f3b8) wml_tabs_3_passive_pane_cp

0x4554,	// (0x0002f3cf) tabs_4_active_pane

0x455c,	// (0x0002f3d7) tabs_4_passive_pane

0x4566,	// (0x0002f3e1) tabs_4_passive_pane_cp

0x456e,	// (0x0002f3e9) tabs_4_passive_pane_cp2

0x4070,	// (0x0002eeeb) aid_height_text

0xd329,	// (0x000381a4) mup_volume_cont_pane_ParamLimits

0xd329,	// (0x000381a4) mup_volume_cont_pane

0xb57d,	// (0x000363f8) aid_size_cell_pinb

0xb57d,	// (0x000363f8) aid_size_list_pinb

0xd329,	// (0x000381a4) mup2_volume_cont_pane_ParamLimits

0xd329,	// (0x000381a4) mup2_volume_cont_pane

0xb9a2,	// (0x0003681d) mup2_volume_cont_pane_g1_ParamLimits

0xb9a2,	// (0x0003681d) mup2_volume_cont_pane_g1

0x02c1,	// (0x0002b13c) aid_size_cell_touch_ParamLimits

0x02c1,	// (0x0002b13c) aid_size_cell_touch

0x04a8,	// (0x0002b323) touch_pane_ParamLimits

0x04a8,	// (0x0002b323) touch_pane

0xb600,	// (0x0003647b) main_rss2_pane

0xe66a,	// (0x000394e5) listscroll_rss2_pane

0xe673,	// (0x000394ee) rss2_navigation_pane

0xe67b,	// (0x000394f6) list_rss2_pane

0xd116,	// (0x00037f91) scroll_pane_cp22

0xe683,	// (0x000394fe) rss2_navigation_pane_g1

0xe68c,	// (0x00039507) rss2_navigation_pane_g2

0xe694,	// (0x0003950f) rss2_navigation_pane_g3

0x0002,

0xf584,	// (0x0003a3ff) rss2_navigation_pane_g

0xe69c,	// (0x00039517) rss2_navigation_pane_t1

0x4582,	// (0x0002f3fd) rss2_list_single_pane_ParamLimits

0x4582,	// (0x0002f3fd) rss2_list_single_pane

0xe6aa,	// (0x00039525) rss2_list_single_pane_t2

0xe6b8,	// (0x00039533) rss2_list_single_pane_t3_ParamLimits

0xe6b8,	// (0x00039533) rss2_list_single_pane_t3

0xe6d5,	// (0x00039550) rss2_list_single_pane_t4

0x3141,	// (0x0002dfbc) smil_status_pane_g1

0xb5f2,	// (0x0003646d) main_image2_pane_ParamLimits

0xb5f2,	// (0x0003646d) main_image2_pane

0xb950,	// (0x000367cb) main_camera2_pane_g9_ParamLimits

0xb950,	// (0x000367cb) main_camera2_pane_g9

0x0aa1,	// (0x0002b91c) main_camera2_pane_t5_ParamLimits

0x0aa1,	// (0x0002b91c) main_camera2_pane_t5

0xb95e,	// (0x000367d9) main_camera2_pane_t6_ParamLimits

0xb95e,	// (0x000367d9) main_camera2_pane_t6

0x4599,	// (0x0002f414) main_image2_pane_g1_ParamLimits

0x4599,	// (0x0002f414) main_image2_pane_g1

0x3d1f,	// (0x0002eb9a) smil2_video_pane_ParamLimits

0x3d1f,	// (0x0002eb9a) smil2_video_pane

0xb59b,	// (0x00036416) aid_zoom_text_primary_cp

0xb5e8,	// (0x00036463) popup_preview_fixed_window

0xca1c,	// (0x00037897) im_reading_pane_g1

0x0a93,	// (0x0002b90e) cams2_bc_adjust_pane_cp_ParamLimits

0x0a93,	// (0x0002b90e) cams2_bc_adjust_pane_cp

0xb986,	// (0x00036801) cams2_bc_adjust_pane_ParamLimits

0xb986,	// (0x00036801) cams2_bc_adjust_pane

0x4578,	// (0x0002f3f3) cams2_bc_adjust_pane_g1

0xb600,	// (0x0003647b) cams2_slider_pane

0x4578,	// (0x0002f3f3) cams2_slider_pane_g1

0x4578,	// (0x0002f3f3) cams2_slider_pane_g2

0x0006,

0xf58b,	// (0x0003a406) cams2_slider_pane_g

0x051a,	// (0x0002b395) calc_display_pane_ParamLimits

0x053f,	// (0x0002b3ba) calc_paper_pane_ParamLimits

0x0562,	// (0x0002b3dd) grid_calc_pane_ParamLimits

0xb857,	// (0x000366d2) popup_clock_digital_window_t1_ParamLimits

0xd4e1,	// (0x0003835c) main_image_pane_t1

0x04fa,	// (0x0002b375) aid_size_cell_calc_ParamLimits

0x04fa,	// (0x0002b375) aid_size_cell_calc

0x07e7,	// (0x0002b662) popup_blid_sat_info2_window_ParamLimits

0x07e7,	// (0x0002b662) popup_blid_sat_info2_window

0xe6e3,	// (0x0003955e) aid_size_cell_blid

0xe6eb,	// (0x00039566) bg_popup_window_pane_cp07

0xe70e,	// (0x00039589) grid_popup_blid_pane

0xe718,	// (0x00039593) heading_pane_cp05_ParamLimits

0xe718,	// (0x00039593) heading_pane_cp05

0xe7e2,	// (0x0003965d) cell_popup_blid_pane_ParamLimits

0xe7e2,	// (0x0003965d) cell_popup_blid_pane

0xe80c,	// (0x00039687) cell_popup_blid_pane_g1

0xe814,	// (0x0003968f) cell_popup_blid_pane_t1

0xd329,	// (0x000381a4) mup2_indicator_pane_ParamLimits

0xd329,	// (0x000381a4) mup2_indicator_pane

0xb57d,	// (0x000363f8) mup2_visualizer_osc_pane

0xe5ac,	// (0x00039427) mup2_visualizer_spec_pane_ParamLimits

0xe5ac,	// (0x00039427) mup2_visualizer_spec_pane

0xb57d,	// (0x000363f8) mup2_spec_half_pane

0xb57d,	// (0x000363f8) mup2_spec_half_pane_cp

0xe822,	// (0x0003969d) mup2_spec_bar_pane_ParamLimits

0xe822,	// (0x0003969d) mup2_spec_bar_pane

0xc70f,	// (0x0003758a) mup2_spec_bar_pane_g1

0xe841,	// (0x000396bc) mup2_spec_bar_pane_g2

0x0001,

0xf5b1,	// (0x0003a42c) mup2_spec_bar_pane_g

0xb57d,	// (0x000363f8) mup2_osc_middle_pane

0xc70f,	// (0x0003758a) mup2_visualizer_osc_pane_g1

0xb62a,	// (0x000364a5) popup_number_entry_window_t1_ParamLimits

0xb63d,	// (0x000364b8) popup_number_entry_window_t2_ParamLimits

0xb64f,	// (0x000364ca) popup_number_entry_window_t3_ParamLimits

0xb661,	// (0x000364dc) popup_number_entry_window_t5_ParamLimits

0xb661,	// (0x000364dc) popup_number_entry_window_t5

0xf01d,	// (0x00039e98) popup_number_entry_window_t_ParamLimits

0xb696,	// (0x00036511) text_title_cp2_ParamLimits

0xb896,	// (0x00036711) aid_hotspot_pointer_text2_pane

0xb8bc,	// (0x00036737) main_viewer_pane_g9_ParamLimits

0xb8bc,	// (0x00036737) main_viewer_pane_g9

0xcc64,	// (0x00037adf) cale_month_pane_t1_ParamLimits

0xccaa,	// (0x00037b25) bg_cale_pane_ParamLimits

0xccc2,	// (0x00037b3d) list_cale_pane_ParamLimits

0xccd3,	// (0x00037b4e) listscroll_cale_day_pane_t1

0xcce5,	// (0x00037b60) scroll_pane_cp09_ParamLimits

0x366b,	// (0x0002e4e6) main_mup_eq_pane_t1_ParamLimits

0x366b,	// (0x0002e4e6) main_mup_eq_pane_t1

0x3687,	// (0x0002e502) main_mup_eq_pane_t2_ParamLimits

0x3687,	// (0x0002e502) main_mup_eq_pane_t2

0x36a3,	// (0x0002e51e) main_mup_eq_pane_t3_ParamLimits

0x36a3,	// (0x0002e51e) main_mup_eq_pane_t3

0x36c1,	// (0x0002e53c) main_mup_eq_pane_t4_ParamLimits

0x36c1,	// (0x0002e53c) main_mup_eq_pane_t4

0x36df,	// (0x0002e55a) main_mup_eq_pane_t5_ParamLimits

0x36df,	// (0x0002e55a) main_mup_eq_pane_t5

0x36fd,	// (0x0002e578) main_mup_eq_pane_t6_ParamLimits

0x36fd,	// (0x0002e578) main_mup_eq_pane_t6

0x3713,	// (0x0002e58e) main_mup_eq_pane_t7_ParamLimits

0x3713,	// (0x0002e58e) main_mup_eq_pane_t7

0x3729,	// (0x0002e5a4) main_mup_eq_pane_t8_ParamLimits

0x3729,	// (0x0002e5a4) main_mup_eq_pane_t8

0x373f,	// (0x0002e5ba) main_mup_eq_pane_t9_ParamLimits

0x373f,	// (0x0002e5ba) main_mup_eq_pane_t9

0x375b,	// (0x0002e5d6) main_mup_eq_pane_t10_ParamLimits

0x375b,	// (0x0002e5d6) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x0003a1f2) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x0003a1f2) main_mup_eq_pane_t

0x3830,	// (0x0002e6ab) mup_equalizer_pane_cp5_ParamLimits

0x3848,	// (0x0002e6c3) mup_equalizer_pane_cp6_ParamLimits

0x3860,	// (0x0002e6db) mup_equalizer_pane_cp7_ParamLimits

0xb600,	// (0x0003647b) main_gallery_pane

0xe54a,	// (0x000393c5) smil2_volume_pane

0xe552,	// (0x000393cd) smil_status_volume_pane_g1_ParamLimits

0xe565,	// (0x000393e0) smil_status_volume_pane_g2_ParamLimits

0xb920,	// (0x0003679b) smil_status_volume_pane_g3_ParamLimits

0xf50a,	// (0x0003a385) smil_status_volume_pane_g_ParamLimits

0xe6eb,	// (0x00039566) bg_popup_window_pane_cp07_ParamLimits

0xe6f9,	// (0x00039574) blid_firmament_pane

0xc66a,	// (0x000374e5) aid_size_cell_gallery_ParamLimits

0xc66a,	// (0x000374e5) aid_size_cell_gallery

0xc66a,	// (0x000374e5) grid_gallery_pane_ParamLimits

0xc66a,	// (0x000374e5) grid_gallery_pane

0xe6eb,	// (0x00039566) cell_gallery_pane_ParamLimits

0xe6eb,	// (0x00039566) cell_gallery_pane

0xc66a,	// (0x000374e5) bg_cell_gallery_focus_pane_ParamLimits

0xc66a,	// (0x000374e5) bg_cell_gallery_focus_pane

0xc6d1,	// (0x0003754c) cell_gallery_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) cell_gallery_pane_g1

0xc6d1,	// (0x0003754c) cell_gallery_pane_g2_ParamLimits

0xc6d1,	// (0x0003754c) cell_gallery_pane_g2

0xc6d1,	// (0x0003754c) cell_gallery_pane_g3_ParamLimits

0xc6d1,	// (0x0003754c) cell_gallery_pane_g3

0xc6df,	// (0x0003755a) cell_gallery_pane_g4_ParamLimits

0xc6df,	// (0x0003755a) cell_gallery_pane_g4

0x0003,

0xf5b6,	// (0x0003a431) cell_gallery_pane_g_ParamLimits

0xf5b6,	// (0x0003a431) cell_gallery_pane_g

0xe84b,	// (0x000396c6) bg_cell_gallery_focus_pane_g1

0xe853,	// (0x000396ce) bg_cell_gallery_focus_pane_g2

0xe85b,	// (0x000396d6) bg_cell_gallery_focus_pane_g3

0xe863,	// (0x000396de) bg_cell_gallery_focus_pane_g4

0xe86b,	// (0x000396e6) bg_cell_gallery_focus_pane_g5

0xe873,	// (0x000396ee) bg_cell_gallery_focus_pane_g6

0xe87b,	// (0x000396f6) bg_cell_gallery_focus_pane_g7

0xe883,	// (0x000396fe) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5bf,	// (0x0003a43a) bg_cell_gallery_focus_pane_g

0xe88b,	// (0x00039706) aid_firma_cardinal

0xe89f,	// (0x0003971a) blid_firmament_pane_t1

0xe8b6,	// (0x00039731) blid_firmament_pane_t2

0xe8cd,	// (0x00039748) blid_firmament_pane_t3

0xe8e4,	// (0x0003975f) blid_firmament_pane_t4

0x0003,

0xf5d0,	// (0x0003a44b) blid_firmament_pane_t

0xe8fb,	// (0x00039776) blid_sat_info_pane

0xc70f,	// (0x0003758a) blid_sat_info_pane_g1

0xc70f,	// (0x0003758a) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00039f07) blid_sat_info_pane_g

0xe90b,	// (0x00039786) blid_sat_info_pane_t1

0xe919,	// (0x00039794) smil2_volume_content_pane

0xe922,	// (0x0003979d) smil2_volume_pane_g1

0xc7e4,	// (0x0003765f) smil2_volume_content_pane_g1

0xe92a,	// (0x000397a5) smil2_volume_content_pane_g2

0xe933,	// (0x000397ae) smil2_volume_content_pane_g3

0xe93c,	// (0x000397b7) smil2_volume_content_pane_g4

0xe945,	// (0x000397c0) smil2_volume_content_pane_g5

0xe94e,	// (0x000397c9) smil2_volume_content_pane_g6

0xe957,	// (0x000397d2) smil2_volume_content_pane_g7

0xe960,	// (0x000397db) smil2_volume_content_pane_g8

0xe969,	// (0x000397e4) smil2_volume_content_pane_g9

0xe972,	// (0x000397ed) smil2_volume_content_pane_g10

0x0009,

0xf5d9,	// (0x0003a454) smil2_volume_content_pane_g

0x1d52,	// (0x0002cbcd) cale_week_day_heading_pane_t1_ParamLimits

0x1d7c,	// (0x0002cbf7) cale_week_day_heading_pane_t2_ParamLimits

0x1dab,	// (0x0002cc26) cale_week_day_heading_pane_t3_ParamLimits

0x1dda,	// (0x0002cc55) cale_week_day_heading_pane_t4_ParamLimits

0x1e09,	// (0x0002cc84) cale_week_day_heading_pane_t5_ParamLimits

0x1e3c,	// (0x0002ccb7) cale_week_day_heading_pane_t6_ParamLimits

0x1e73,	// (0x0002ccee) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00039f9f) cale_week_day_heading_pane_t_ParamLimits

0xc906,	// (0x00037781) bg_cale_side_pane_ParamLimits

0x0657,	// (0x0002b4d2) cale_week_time_pane_t1_ParamLimits

0x0671,	// (0x0002b4ec) cale_week_time_pane_t2_ParamLimits

0x068b,	// (0x0002b506) cale_week_time_pane_t3_ParamLimits

0x06a5,	// (0x0002b520) cale_week_time_pane_t4_ParamLimits

0x06bf,	// (0x0002b53a) cale_week_time_pane_t5_ParamLimits

0x06d9,	// (0x0002b554) cale_week_time_pane_t6_ParamLimits

0x06f7,	// (0x0002b572) cale_week_time_pane_t7_ParamLimits

0x0719,	// (0x0002b594) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x00039fae) cale_week_time_pane_t_ParamLimits

0x1e9d,	// (0x0002cd18) cell_cale_week_pane_g2_ParamLimits

0xc906,	// (0x00037781) bg_cale_side_pane_cp01_ParamLimits

0x2f5e,	// (0x0002ddd9) cale_month_week_pane_t1_ParamLimits

0x2f77,	// (0x0002ddf2) cale_month_week_pane_t2_ParamLimits

0x2f90,	// (0x0002de0b) cale_month_week_pane_t3_ParamLimits

0x2fa9,	// (0x0002de24) cale_month_week_pane_t4_ParamLimits

0x2fc2,	// (0x0002de3d) cale_month_week_pane_t5_ParamLimits

0x2fdb,	// (0x0002de56) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x0003a07c) cale_month_week_pane_t_ParamLimits

0xb7d7,	// (0x00036652) cell_cale_month_pane_g1_ParamLimits

0xb600,	// (0x0003647b) main_cale_event_viewer_pane

0xb57d,	// (0x000363f8) listscroll_cale_event_viewer_pane

0xe97b,	// (0x000397f6) list_cale_ev_pane

0xe983,	// (0x000397fe) scroll_pane_cp023

0x45af,	// (0x0002f42a) field_cale_ev_pane_ParamLimits

0x45af,	// (0x0002f42a) field_cale_ev_pane

0xe98f,	// (0x0003980a) field_cale_ev_content_pane_ParamLimits

0xe98f,	// (0x0003980a) field_cale_ev_content_pane

0xe99b,	// (0x00039816) field_cale_ev_pane_g1_ParamLimits

0xe99b,	// (0x00039816) field_cale_ev_pane_g1

0xe9a7,	// (0x00039822) field_cale_ev_pane_g2_ParamLimits

0xe9a7,	// (0x00039822) field_cale_ev_pane_g2

0xe9bf,	// (0x0003983a) field_cale_ev_pane_g3_ParamLimits

0xe9bf,	// (0x0003983a) field_cale_ev_pane_g3

0x0002,

0xf5ee,	// (0x0003a469) field_cale_ev_pane_g_ParamLimits

0xf5ee,	// (0x0003a469) field_cale_ev_pane_g

0xe9d7,	// (0x00039852) field_cale_ev_pane_t1_ParamLimits

0xe9d7,	// (0x00039852) field_cale_ev_pane_t1

0x45d3,	// (0x0002f44e) field_cale_ev_content_pane_t1_ParamLimits

0x45d3,	// (0x0002f44e) field_cale_ev_content_pane_t1

0xd3ce,	// (0x00038249) bg_button_pane_cp01

0x0645,	// (0x0002b4c0) listscroll_cale_week_pane_ParamLimits

0xb7c4,	// (0x0003663f) popup_toolbar_window_cp01

0xc8d7,	// (0x00037752) listscroll_cale_week_pane_t1_ParamLimits

0x31a2,	// (0x0002e01d) listscroll_cale_day_pane_ParamLimits

0xcca1,	// (0x00037b1c) popup_toolbar_window_cp02

0xccd3,	// (0x00037b4e) listscroll_cale_day_pane_t1_ParamLimits

0x0645,	// (0x0002b4c0) main_cale_month_pane_ParamLimits

0xb90b,	// (0x00036786) popup_toolbar_window_cp03_ParamLimits

0xb90b,	// (0x00036786) popup_toolbar_window_cp03

0x3bdd,	// (0x0002ea58) main_image_pane_g2_ParamLimits

0x3bdd,	// (0x0002ea58) main_image_pane_g2

0x3bee,	// (0x0002ea69) main_image_pane_g3_ParamLimits

0x3bee,	// (0x0002ea69) main_image_pane_g3

0x0002,

0xf409,	// (0x0003a284) main_image_pane_g_ParamLimits

0xf409,	// (0x0003a284) main_image_pane_g

0xd4e1,	// (0x0003835c) main_image_pane_t1_ParamLimits

0x3bff,	// (0x0002ea7a) main_image_pane_t2_ParamLimits

0x3bff,	// (0x0002ea7a) main_image_pane_t2

0x3c11,	// (0x0002ea8c) main_image_pane_t3_ParamLimits

0x3c11,	// (0x0002ea8c) main_image_pane_t3

0x3c39,	// (0x0002eab4) main_image_pane_t4_ParamLimits

0x3c39,	// (0x0002eab4) main_image_pane_t4

0x0003,

0xf410,	// (0x0003a28b) main_image_pane_t_ParamLimits

0xf410,	// (0x0003a28b) main_image_pane_t

0x3c59,	// (0x0002ead4) popup_image_details_window_cp01

0x3c63,	// (0x0002eade) popup_toobar_trans_pane_cp01_ParamLimits

0x3c63,	// (0x0002eade) popup_toobar_trans_pane_cp01

0x08da,	// (0x0002b755) popup_image_details_window_ParamLimits

0x08da,	// (0x0002b755) popup_image_details_window

0xb8dc,	// (0x00036757) popup_image_focus_window

0xb942,	// (0x000367bd) camera2_autofocus_pane_ParamLimits

0xb942,	// (0x000367bd) camera2_autofocus_pane

0xb57d,	// (0x000363f8) bg_popup_sub_pane_cp06

0xe9ee,	// (0x00039869) popup_image_focus_window_g1

0xe9f6,	// (0x00039871) popup_image_focus_window_g2

0xe9fe,	// (0x00039879) popup_image_focus_window_g3

0xea06,	// (0x00039881) popup_image_focus_window_g4

0x0003,

0xf5f5,	// (0x0003a470) popup_image_focus_window_g

0xea0e,	// (0x00039889) popup_image_focus_window_t1

0xea1c,	// (0x00039897) popup_image_focus_window_t2

0xea2c,	// (0x000398a7) popup_image_focus_window_t3

0x0002,

0xf5fe,	// (0x0003a479) popup_image_focus_window_t

0xc6d1,	// (0x0003754c) camera2_autofocus_pane_g1

0xc66a,	// (0x000374e5) bg_tb_trans_pane_cp01

0xea3a,	// (0x000398b5) popup_image_details_window_g1

0xea4d,	// (0x000398c8) popup_image_details_window_g2

0x0002,

0xf610,	// (0x0003a48b) popup_image_details_window_g

0xea76,	// (0x000398f1) popup_image_details_window_t1

0xea88,	// (0x00039903) popup_image_details_window_t2

0xeaa1,	// (0x0003991c) popup_image_details_window_t3

0xeab5,	// (0x00039930) popup_image_details_window_t4

0xead0,	// (0x0003994b) popup_image_details_window_t5

0x0004,

0xf617,	// (0x0003a492) popup_image_details_window_t

0xc759,	// (0x000375d4) bg_calc_paper_pane_ParamLimits

0xb600,	// (0x0003647b) grid_highlight_pane_cp013

0xb786,	// (0x00036601) list_calc_pane_ParamLimits

0xb798,	// (0x00036613) scroll_pane_cp024

0xc76d,	// (0x000375e8) bg_calc_display_pane_ParamLimits

0x0590,	// (0x0002b40b) calc_display_pane_t1_ParamLimits

0x05a5,	// (0x0002b420) calc_display_pane_t2_ParamLimits

0xb7a0,	// (0x0003661b) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00039f1f) calc_display_pane_t_ParamLimits

0x060f,	// (0x0002b48a) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x00039f3c) cell_calc_pane_g

0x0618,	// (0x0002b493) cell_calc_pane_t1

0xc7c2,	// (0x0003763d) grid_highlight_pane_cp02_ParamLimits

0xc7d8,	// (0x00037653) toolbar_button_pane_cp01_ParamLimits

0xc7d8,	// (0x00037653) toolbar_button_pane_cp01

0xd526,	// (0x000383a1) temp_image_control_pane_ParamLimits

0xd526,	// (0x000383a1) temp_image_control_pane

0xb5f2,	// (0x0003646d) main_mp3_pane

0xeaea,	// (0x00039965) temp_image_control_pane_g1_ParamLimits

0xeaea,	// (0x00039965) temp_image_control_pane_g1

0xeaf8,	// (0x00039973) temp_image_control_pane_g2_ParamLimits

0xeaf8,	// (0x00039973) temp_image_control_pane_g2

0xeb0a,	// (0x00039985) temp_image_control_pane_g3_ParamLimits

0xeb0a,	// (0x00039985) temp_image_control_pane_g3

0x45f4,	// (0x0002f46f) temp_image_control_pane_g4_ParamLimits

0x45f4,	// (0x0002f46f) temp_image_control_pane_g4

0x0003,

0xf622,	// (0x0003a49d) temp_image_control_pane_g_ParamLimits

0xf622,	// (0x0003a49d) temp_image_control_pane_g

0xeaea,	// (0x00039965) main_mp3_pane_g1

0x4607,	// (0x0002f482) main_mp3_pane_g2

0x0007,

0xf62b,	// (0x0003a4a6) main_mp3_pane_g

0xeb3f,	// (0x000399ba) main_mp3_pane_t1

0xc6df,	// (0x0003755a) main_camera_pane_g8_ParamLimits

0xc6df,	// (0x0003755a) main_camera_pane_g8

0x2074,	// (0x0002ceef) main_video_pane_g7_ParamLimits

0x2074,	// (0x0002ceef) main_video_pane_g7

0xb972,	// (0x000367ed) main_camera2_pane_t7_ParamLimits

0xb972,	// (0x000367ed) main_camera2_pane_t7

0xca82,	// (0x000378fd) scroll_pane_cp025_ParamLimits

0xca82,	// (0x000378fd) scroll_pane_cp025

0xca96,	// (0x00037911) scroll_pane_cp026_ParamLimits

0xca96,	// (0x00037911) scroll_pane_cp026

0xcaa5,	// (0x00037920) wml_content_pane_ParamLimits

0xb600,	// (0x0003647b) main_touch_calib_pane

0x46d9,	// (0x0002f554) main_touch_calib_pane_g1

0x46eb,	// (0x0002f566) main_touch_calib_pane_g2

0x46fd,	// (0x0002f578) main_touch_calib_pane_g3

0x470f,	// (0x0002f58a) main_touch_calib_pane_g4

0x0003,

0xf649,	// (0x0003a4c4) main_touch_calib_pane_g

0x4721,	// (0x0002f59c) main_touch_calib_pane_t1

0x473b,	// (0x0002f5b6) main_touch_calib_pane_t2

0x0004,

0xf652,	// (0x0003a4cd) main_touch_calib_pane_t

0xd191,	// (0x0003800c) mup_progress_pane_cp02

0xd1b0,	// (0x0003802b) navi_pane_g1

0xd212,	// (0x0003808d) navi_pane_mp_t3

0xb5f2,	// (0x0003646d) main_mp3_pane_ParamLimits

0x42ac,	// (0x0002f127) navi_pane_ParamLimits

0xeaea,	// (0x00039965) main_mp3_pane_g1_ParamLimits

0x4607,	// (0x0002f482) main_mp3_pane_g2_ParamLimits

0x4613,	// (0x0002f48e) main_mp3_pane_g3_ParamLimits

0x4613,	// (0x0002f48e) main_mp3_pane_g3

0x4621,	// (0x0002f49c) main_mp3_pane_g4_ParamLimits

0x4621,	// (0x0002f49c) main_mp3_pane_g4

0xc6d1,	// (0x0003754c) main_mp3_pane_g5_ParamLimits

0xc6d1,	// (0x0003754c) main_mp3_pane_g5

0xeb1a,	// (0x00039995) main_mp3_pane_g6_ParamLimits

0xeb1a,	// (0x00039995) main_mp3_pane_g6

0xeb27,	// (0x000399a2) main_mp3_pane_g7_ParamLimits

0xeb27,	// (0x000399a2) main_mp3_pane_g7

0xeb33,	// (0x000399ae) main_mp3_pane_g8_ParamLimits

0xeb33,	// (0x000399ae) main_mp3_pane_g8

0xf62b,	// (0x0003a4a6) main_mp3_pane_g_ParamLimits

0x462d,	// (0x0002f4a8) main_mp3_pane_t2

0x463b,	// (0x0002f4b6) main_mp3_pane_t3

0xeb4d,	// (0x000399c8) main_mp3_pane_t4

0xeb5b,	// (0x000399d6) main_mp3_pane_t5

0x0005,

0xf63c,	// (0x0003a4b7) main_mp3_pane_t

0xeb69,	// (0x000399e4) mup_progress_pane_cp01

0xb59b,	// (0x00036416) aid_zoom_text_secondary2

0xe97b,	// (0x000397f6) list_cale_ev2_pane

0xe983,	// (0x000397fe) scroll_pane_cp023_ParamLimits

0x4795,	// (0x0002f610) field_cale_ev2_pane_ParamLimits

0x4795,	// (0x0002f610) field_cale_ev2_pane

0x47b9,	// (0x0002f634) field_cale_ev2_pane_g1_ParamLimits

0x47b9,	// (0x0002f634) field_cale_ev2_pane_g1

0x47c5,	// (0x0002f640) field_cale_ev2_pane_g2_ParamLimits

0x47c5,	// (0x0002f640) field_cale_ev2_pane_g2

0x47dd,	// (0x0002f658) field_cale_ev2_pane_g3_ParamLimits

0x47dd,	// (0x0002f658) field_cale_ev2_pane_g3

0x0003,

0xf65d,	// (0x0003a4d8) field_cale_ev2_pane_g_ParamLimits

0xf65d,	// (0x0003a4d8) field_cale_ev2_pane_g

0x47f5,	// (0x0002f670) field_cale_ev2_pane_t1_ParamLimits

0x47f5,	// (0x0002f670) field_cale_ev2_pane_t1

0x480c,	// (0x0002f687) field_cale_ev2_pane_t2_ParamLimits

0x480c,	// (0x0002f687) field_cale_ev2_pane_t2

0x0001,

0xf666,	// (0x0003a4e1) field_cale_ev2_pane_t_ParamLimits

0xf666,	// (0x0003a4e1) field_cale_ev2_pane_t

0x3a9d,	// (0x0002e918) main_postcard_pane_g5_ParamLimits

0x3a9d,	// (0x0002e918) main_postcard_pane_g5

0x3ab3,	// (0x0002e92e) main_postcard_pane_g6_ParamLimits

0x3ab3,	// (0x0002e92e) main_postcard_pane_g6

0xc66a,	// (0x000374e5) camera2_autofocus_pane_cp_ParamLimits

0xc66a,	// (0x000374e5) camera2_autofocus_pane_cp

0xb5f2,	// (0x0003646d) main_mup3_pane

0x486b,	// (0x0002f6e6) main_mup3_pane_g1_ParamLimits

0x486b,	// (0x0002f6e6) main_mup3_pane_g1

0x48bd,	// (0x0002f738) main_mup3_pane_g2_ParamLimits

0x48bd,	// (0x0002f738) main_mup3_pane_g2

0x491d,	// (0x0002f798) main_mup3_pane_g3_ParamLimits

0x491d,	// (0x0002f798) main_mup3_pane_g3

0x4985,	// (0x0002f800) main_mup3_pane_g4_ParamLimits

0x4985,	// (0x0002f800) main_mup3_pane_g4

0x49ed,	// (0x0002f868) main_mup3_pane_g5_ParamLimits

0x49ed,	// (0x0002f868) main_mup3_pane_g5

0x4a55,	// (0x0002f8d0) main_mup3_pane_g6_ParamLimits

0x4a55,	// (0x0002f8d0) main_mup3_pane_g6

0xc6df,	// (0x0003755a) main_mup3_pane_g7_ParamLimits

0xc6df,	// (0x0003755a) main_mup3_pane_g7

0x0007,

0xf676,	// (0x0003a4f1) main_mup3_pane_g_ParamLimits

0xf676,	// (0x0003a4f1) main_mup3_pane_g

0x4ad2,	// (0x0002f94d) main_mup3_pane_t1_ParamLimits

0x4ad2,	// (0x0002f94d) main_mup3_pane_t1

0x4bb8,	// (0x0002fa33) main_mup3_pane_t2_ParamLimits

0x4bb8,	// (0x0002fa33) main_mup3_pane_t2

0x4ca2,	// (0x0002fb1d) main_mup3_pane_t4_ParamLimits

0x4ca2,	// (0x0002fb1d) main_mup3_pane_t4

0x4cb4,	// (0x0002fb2f) main_mup3_pane_t5_ParamLimits

0x4cb4,	// (0x0002fb2f) main_mup3_pane_t5

0x4d8e,	// (0x0002fc09) main_mup3_pane_t6_ParamLimits

0x4d8e,	// (0x0002fc09) main_mup3_pane_t6

0x0005,

0xf687,	// (0x0003a502) main_mup3_pane_t_ParamLimits

0xf687,	// (0x0003a502) main_mup3_pane_t

0x4e36,	// (0x0002fcb1) mup3_progress_pane_ParamLimits

0x4e36,	// (0x0002fcb1) mup3_progress_pane

0x4eaa,	// (0x0002fd25) popup_mup3_control_window_ParamLimits

0x4eaa,	// (0x0002fd25) popup_mup3_control_window

0xeb7d,	// (0x000399f8) popup_mup3_text_window

0x4ec2,	// (0x0002fd3d) mup3_progress_pane_t1

0x4ed9,	// (0x0002fd54) mup3_progress_pane_t2

0xeb85,	// (0x00039a00) mup3_progress_pane_t3

0x0002,

0xf694,	// (0x0003a50f) mup3_progress_pane_t

0xeb9c,	// (0x00039a17) mup_progress_pane_cp03

0xebad,	// (0x00039a28) bg_tb_trans_pane_cp04

0xebad,	// (0x00039a28) mup3_volume_pane

0xebb5,	// (0x00039a30) popup_mup3_control_window_g1

0xebb5,	// (0x00039a30) mup3_volume_pane_g1

0xebb5,	// (0x00039a30) mup3_volume_pane_g2

0xebb5,	// (0x00039a30) mup3_volume_pane_g3

0x0002,

0xf69b,	// (0x0003a516) mup3_volume_pane_g

0xb57d,	// (0x000363f8) bg_tb_trans_pane_cp03

0xebbd,	// (0x00039a38) popup_mup3_text_window_g1

0xebc5,	// (0x00039a40) popup_mup3_text_window_t1

0xc7b5,	// (0x00037630) list_calc_item_pane_g1_ParamLimits

0xe661,	// (0x000394dc) mup_volume_pane_cp_g1

0x4755,	// (0x0002f5d0) main_touch_calib_pane_t3

0x4769,	// (0x0002f5e4) main_touch_calib_pane_t4

0x477f,	// (0x0002f5fa) main_touch_calib_pane_t5

0xb587,	// (0x00036402) aid_cell_size_toolbar2

0xb58f,	// (0x0003640a) aid_popup3_width_pane

0xb59b,	// (0x00036416) aid_zoom_text_msg_primary

0x1f4d,	// (0x0002cdc8) vorec_t7

0xc779,	// (0x000375f4) bg_calc_paper_pane_g1_ParamLimits

0xc785,	// (0x00037600) bg_calc_paper_pane_g2_ParamLimits

0xc791,	// (0x0003760c) bg_calc_paper_pane_g3_ParamLimits

0xc79d,	// (0x00037618) bg_calc_paper_pane_g4_ParamLimits

0xc7a9,	// (0x00037624) bg_calc_paper_pane_g5_ParamLimits

0x18bc,	// (0x0002c737) bg_calc_paper_pane_g6_ParamLimits

0x18cf,	// (0x0002c74a) bg_calc_paper_pane_g7_ParamLimits

0x18e2,	// (0x0002c75d) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x00039f26) bg_calc_paper_pane_g_ParamLimits

0x18f5,	// (0x0002c770) calc_bg_paper_pane_g9_ParamLimits

0xc66a,	// (0x000374e5) image_qvga_pane_ParamLimits

0xc66a,	// (0x000374e5) image_qvga_pane

0xc648,	// (0x000374c3) bg_popup_sub_pane_cp04_ParamLimits

0xd45d,	// (0x000382d8) popup_mup_playback_window_g1_ParamLimits

0xd469,	// (0x000382e4) popup_mup_playback_window_t1_ParamLimits

0xd47e,	// (0x000382f9) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x0003a27f) popup_mup_playback_window_t_ParamLimits

0xc6df,	// (0x0003755a) main_mup2_pane_g3_ParamLimits

0xc6df,	// (0x0003755a) main_mup2_pane_g3

0x220d,	// (0x0002d088) popup_toolbar_window_cp04

0xd802,	// (0x0003867d) popup_call2_audio_second_window_g3_ParamLimits

0xd802,	// (0x0003867d) popup_call2_audio_second_window_g3

0xdc1a,	// (0x00038a95) popup_call2_audio_first_window_g4_ParamLimits

0xdc1a,	// (0x00038a95) popup_call2_audio_first_window_g4

0xe241,	// (0x000390bc) popup_call2_audio_in_window_g4_ParamLimits

0xe241,	// (0x000390bc) popup_call2_audio_in_window_g4

0x3bbf,	// (0x0002ea3a) aid_area_sk_bg_cut_ParamLimits

0x3bbf,	// (0x0002ea3a) aid_area_sk_bg_cut

0xd493,	// (0x0003830e) aid_area_sk_bg_cut_2_ParamLimits

0xd493,	// (0x0003830e) aid_area_sk_bg_cut_2

0xb57d,	// (0x000363f8) aid_placing_details_win

0xb57d,	// (0x000363f8) aid_placing_details_win_2

0xc6d1,	// (0x0003754c) camera2_autofocus_pane_g1_ParamLimits

0x044d,	// (0x0002b2c8) popup_fixed_preview_cale_window_ParamLimits

0x044d,	// (0x0002b2c8) popup_fixed_preview_cale_window

0xd259,	// (0x000380d4) navi_slider_pane_g3

0xd262,	// (0x000380dd) navi_slider_pane_g4

0xd26b,	// (0x000380e6) navi_slider_pane_g5

0xd259,	// (0x000380d4) navi_slider_pane_g6

0xb87d,	// (0x000366f8) navi_slider_pane_g7

0xd39b,	// (0x00038216) mup_scale_pane_g3

0xd3a4,	// (0x0003821f) mup_scale_pane_g4

0xd3ad,	// (0x00038228) mup_scale_pane_g5

0x3878,	// (0x0002e6f3) mup_scale_pane_g6

0x3881,	// (0x0002e6fc) mup_scale_pane_g7

0x4578,	// (0x0002f3f3) cams2_slider_pane_g3

0x4578,	// (0x0002f3f3) cams2_slider_pane_g4

0x4578,	// (0x0002f3f3) cams2_slider_pane_g5

0x4578,	// (0x0002f3f3) cams2_slider_pane_g6

0x4578,	// (0x0002f3f3) cams2_slider_pane_g7

0xc70f,	// (0x0003758a) camera2_autofocus_pane_cp_g1

0xe4d1,	// (0x0003934c) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4d1,	// (0x0003934c) bg_popup_preview_window_pane_cp02

0xebd3,	// (0x00039a4e) list_fp_cale_pane_ParamLimits

0xebd3,	// (0x00039a4e) list_fp_cale_pane

0xebdf,	// (0x00039a5a) popup_fixed_preview_cale_window_t1_ParamLimits

0xebdf,	// (0x00039a5a) popup_fixed_preview_cale_window_t1

0x4ef0,	// (0x0002fd6b) popup_fixed_preview_cale_window_t2_ParamLimits

0x4ef0,	// (0x0002fd6b) popup_fixed_preview_cale_window_t2

0x4f05,	// (0x0002fd80) popup_fixed_preview_cale_window_t3_ParamLimits

0x4f05,	// (0x0002fd80) popup_fixed_preview_cale_window_t3

0x0002,

0xf6a2,	// (0x0003a51d) popup_fixed_preview_cale_window_t_ParamLimits

0xf6a2,	// (0x0003a51d) popup_fixed_preview_cale_window_t

0x4f1c,	// (0x0002fd97) list_single_fp_cale_pane_ParamLimits

0x4f1c,	// (0x0002fd97) list_single_fp_cale_pane

0xebfd,	// (0x00039a78) list_single_fp_cale_pane_g1_ParamLimits

0xebfd,	// (0x00039a78) list_single_fp_cale_pane_g1

0xec09,	// (0x00039a84) list_single_fp_cale_pane_g2_ParamLimits

0xec09,	// (0x00039a84) list_single_fp_cale_pane_g2

0x0002,

0xf6a9,	// (0x0003a524) list_single_fp_cale_pane_g_ParamLimits

0xf6a9,	// (0x0003a524) list_single_fp_cale_pane_g

0xec22,	// (0x00039a9d) list_single_fp_cale_pane_t1_ParamLimits

0xec22,	// (0x00039a9d) list_single_fp_cale_pane_t1

0xec34,	// (0x00039aaf) list_single_fp_cale_pane_t2_ParamLimits

0xec34,	// (0x00039aaf) list_single_fp_cale_pane_t2

0x0001,

0xf6b0,	// (0x0003a52b) list_single_fp_cale_pane_t_ParamLimits

0xf6b0,	// (0x0003a52b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb600,	// (0x0003647b) main_dialer_pane

0xb57d,	// (0x000363f8) aid_cell_size_keypad

0xb57d,	// (0x000363f8) dialer_ne_pane

0xb57d,	// (0x000363f8) grid_dialer_command_1_pane

0xb57d,	// (0x000363f8) grid_dialer_command_2_pane

0xb57d,	// (0x000363f8) grid_dialer_keypad_pane

0x4f31,	// (0x0002fdac) bg_popup_call_pane_cp06_ParamLimits

0x4f31,	// (0x0002fdac) bg_popup_call_pane_cp06

0x4f31,	// (0x0002fdac) dialer_ne_clear_pane_ParamLimits

0x4f31,	// (0x0002fdac) dialer_ne_clear_pane

0xc70f,	// (0x0003758a) dialer_ne_pane_g1

0xc72d,	// (0x000375a8) dialer_ne_pane_t1_ParamLimits

0xc72d,	// (0x000375a8) dialer_ne_pane_t1

0x4f3f,	// (0x0002fdba) dialer_ne_pane_t2_ParamLimits

0x4f3f,	// (0x0002fdba) dialer_ne_pane_t2

0x4f67,	// (0x0002fde2) dialer_ne_pane_t3_ParamLimits

0x4f67,	// (0x0002fde2) dialer_ne_pane_t3

0x0002,

0xf6b5,	// (0x0003a530) dialer_ne_pane_t_ParamLimits

0xf6b5,	// (0x0003a530) dialer_ne_pane_t

0x4f67,	// (0x0002fde2) dialer_ne_pane_t3_copy1_ParamLimits

0x4f67,	// (0x0002fde2) dialer_ne_pane_t3_copy1

0xec67,	// (0x00039ae2) cell_dialer_keypad_pane_ParamLimits

0xec67,	// (0x00039ae2) cell_dialer_keypad_pane

0xc66a,	// (0x000374e5) cell_dialer_command_1_pane_ParamLimits

0xc66a,	// (0x000374e5) cell_dialer_command_1_pane

0xec7e,	// (0x00039af9) cell_dialer_command_2_pane_ParamLimits

0xec7e,	// (0x00039af9) cell_dialer_command_2_pane

0xc66a,	// (0x000374e5) bg_button_pane_cp02_ParamLimits

0xc66a,	// (0x000374e5) bg_button_pane_cp02

0xc6d1,	// (0x0003754c) cell_dialer_keypad_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) cell_dialer_keypad_pane_g1

0xc66a,	// (0x000374e5) bg_button_pane_cp03_ParamLimits

0xc66a,	// (0x000374e5) bg_button_pane_cp03

0xc6d1,	// (0x0003754c) cell_dialer_command_1_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) cell_dialer_command_1_pane_g1

0xb57d,	// (0x000363f8) bg_button_pane_cp04

0xc70f,	// (0x0003758a) cell_dialer_command_2_pane_g1

0xb57d,	// (0x000363f8) bg_button_pane_cp06

0xc70f,	// (0x0003758a) dialer_ne_clear_pane_g1

0x3587,	// (0x0002e402) navi_pane_g2

0x35b5,	// (0x0002e430) navi_pane_g3

0x0002,

0xf30c,	// (0x0003a187) navi_pane_g

0x35e0,	// (0x0002e45b) navi_pane_mv_g2

0x3607,	// (0x0002e482) navi_pane_mv_g5

0x360f,	// (0x0002e48a) navi_pane_mv_t1

0xc76d,	// (0x000375e8) main_clock2_pane

0xc66a,	// (0x000374e5) main_clock2_list_pane_ParamLimits

0xc66a,	// (0x000374e5) main_clock2_list_pane

0x4ffa,	// (0x0002fe75) main_clock2_pane_t1_ParamLimits

0x4ffa,	// (0x0002fe75) main_clock2_pane_t1

0x5035,	// (0x0002feb0) main_clock2_pane_t2_ParamLimits

0x5035,	// (0x0002feb0) main_clock2_pane_t2

0x0004,

0xf6c1,	// (0x0003a53c) main_clock2_pane_t_ParamLimits

0xf6c1,	// (0x0003a53c) main_clock2_pane_t

0x50cb,	// (0x0002ff46) popup_clock_analogue_window_cp03_ParamLimits

0x50cb,	// (0x0002ff46) popup_clock_analogue_window_cp03

0x50f0,	// (0x0002ff6b) popup_clock_digital_window_cp02_ParamLimits

0x50f0,	// (0x0002ff6b) popup_clock_digital_window_cp02

0x5134,	// (0x0002ffaf) main_clock2_list_single_pane_ParamLimits

0x5134,	// (0x0002ffaf) main_clock2_list_single_pane

0xc961,	// (0x000377dc) list_highlight_pane_cp05

0xecbf,	// (0x00039b3a) main_clock2_list_single_pane_t1

0x220d,	// (0x0002d088) popup_toolbar_window_cp04_ParamLimits

0xc6df,	// (0x0003755a) camera2_autofocus_pane_g2_ParamLimits

0xc6df,	// (0x0003755a) camera2_autofocus_pane_g2

0xc6df,	// (0x0003755a) camera2_autofocus_pane_g3_ParamLimits

0xc6df,	// (0x0003755a) camera2_autofocus_pane_g3

0xc6df,	// (0x0003755a) camera2_autofocus_pane_g4_ParamLimits

0xc6df,	// (0x0003755a) camera2_autofocus_pane_g4

0xc6df,	// (0x0003755a) camera2_autofocus_pane_g5_ParamLimits

0xc6df,	// (0x0003755a) camera2_autofocus_pane_g5

0x0004,

0xf605,	// (0x0003a480) camera2_autofocus_pane_g_ParamLimits

0xf605,	// (0x0003a480) camera2_autofocus_pane_g

0x4821,	// (0x0002f69c) camera2_autofocus_pane_cp_g2

0x4829,	// (0x0002f6a4) camera2_autofocus_pane_cp_g3

0x4831,	// (0x0002f6ac) camera2_autofocus_pane_cp_g4

0x4839,	// (0x0002f6b4) camera2_autofocus_pane_cp_g5

0x0004,

0xf66b,	// (0x0003a4e6) camera2_autofocus_pane_cp_g

0xb57d,	// (0x000363f8) popup_dialer_spcha_window

0xb57d,	// (0x000363f8) bg_popup_sub_pane_cp07

0xb57d,	// (0x000363f8) list_spcha_pane

0xeccd,	// (0x00039b48) list_single_spcha_pane_ParamLimits

0xeccd,	// (0x00039b48) list_single_spcha_pane

0xb57d,	// (0x000363f8) list_highlight_pane_cp06

0xce88,	// (0x00037d03) list_single_spcha_pane_t1

0xdfeb,	// (0x00038e66) popup_call2_audio_out_window_g4_ParamLimits

0xdfeb,	// (0x00038e66) popup_call2_audio_out_window_g4

0xb600,	// (0x0003647b) main_imed2_pane

0xb8e6,	// (0x00036761) popup_imed_adjust2_window

0x08f2,	// (0x0002b76d) popup_imed_trans_window_ParamLimits

0x08f2,	// (0x0002b76d) popup_imed_trans_window

0xe744,	// (0x000395bf) popup_blid_sat_info2_window_t1

0xe752,	// (0x000395cd) popup_blid_sat_info2_window_t2

0x000a,

0xf59a,	// (0x0003a415) popup_blid_sat_info2_window_t

0x5146,	// (0x0002ffc1) aid_size_cell_colour_35

0x5166,	// (0x0002ffe1) aid_size_cell_colour_112

0x5186,	// (0x00030001) aid_size_cell_effect

0xd329,	// (0x000381a4) bg_tb_trans_pane_cp02

0x51a6,	// (0x00030021) heading_imed_pane

0x51b2,	// (0x0003002d) listscroll_imed_pane

0xecdf,	// (0x00039b5a) heading_imed_pane_g1

0xece7,	// (0x00039b62) heading_imed_pane_t1

0xecf5,	// (0x00039b70) grid_imed_colour_35_pane_ParamLimits

0xecf5,	// (0x00039b70) grid_imed_colour_35_pane

0x51be,	// (0x00030039) grid_imed_effect_pane

0xed11,	// (0x00039b8c) list_imed_aspect_pane

0x51d5,	// (0x00030050) scroll_pane_cp027_ParamLimits

0x51d5,	// (0x00030050) scroll_pane_cp027

0x51e6,	// (0x00030061) cell_imed_effect_pane_ParamLimits

0x51e6,	// (0x00030061) cell_imed_effect_pane

0xed19,	// (0x00039b94) cell_imed_colour_pane_ParamLimits

0xed19,	// (0x00039b94) cell_imed_colour_pane

0xed63,	// (0x00039bde) cell_imed_colour_pane_g1_ParamLimits

0xed63,	// (0x00039bde) cell_imed_colour_pane_g1

0xed74,	// (0x00039bef) hgihlgiht_grid_pane_cp016_ParamLimits

0xed74,	// (0x00039bef) hgihlgiht_grid_pane_cp016

0x5211,	// (0x0003008c) cell_imed_effect_pane_g1

0x5219,	// (0x00030094) grid_highlight_pane_cp017

0xed85,	// (0x00039c00) list_imed_single_pane_ParamLimits

0xed85,	// (0x00039c00) list_imed_single_pane

0xb57d,	// (0x000363f8) list_highlight_pane_cp07

0xed99,	// (0x00039c14) list_imed_aspect_pane_comp1_t1

0xd329,	// (0x000381a4) bg_tb_trans_pane_cp05

0xedbb,	// (0x00039c36) popup_imed_adjust2_window_g1

0xede2,	// (0x00039c5d) popup_imed_adjust2_window_t1

0xedfa,	// (0x00039c75) slider_imed_adjust_pane

0xee0e,	// (0x00039c89) slider_imed_adjust_pane_g1

0xee1e,	// (0x00039c99) slider_imed_adjust_pane_g2

0xee2e,	// (0x00039ca9) slider_imed_adjust_pane_g3

0xee3f,	// (0x00039cba) slider_imed_adjust_pane_g4

0x0003,

0xf6de,	// (0x0003a559) slider_imed_adjust_pane_g

0x5222,	// (0x0003009d) aid_size_cell_clipart2

0xee50,	// (0x00039ccb) grid_imed_clipart_pane

0xd3be,	// (0x00038239) scroll_pane_cp031

0x522e,	// (0x000300a9) cell_imed_clipart_pane_ParamLimits

0x522e,	// (0x000300a9) cell_imed_clipart_pane

0x524b,	// (0x000300c6) cell_imed_clipart_pane_g1

0xb57d,	// (0x000363f8) grid_highlight_pane_cp014

0x4fd6,	// (0x0002fe51) main_clock2_pane_g1_ParamLimits

0x4fd6,	// (0x0002fe51) main_clock2_pane_g1

0x5110,	// (0x0002ff8b) aid_call2_pane_cp10

0x5122,	// (0x0002ff9d) aid_call_pane_cp10

0xd185,	// (0x00038000) popup_clock_analogue_window_cp10_g1

0xd185,	// (0x00038000) popup_clock_analogue_window_cp10_g2

0x0ae5,	// (0x0002b960) popup_clock_analogue_window_cp10_g3

0x0ae5,	// (0x0002b960) popup_clock_analogue_window_cp10_g4

0xd185,	// (0x00038000) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6cc,	// (0x0003a547) popup_clock_analogue_window_cp10_g

0x0afb,	// (0x0002b976) popup_clock_analogue_window_cp10_t1

0x0b1a,	// (0x0002b995) clock_digital_number_pane_cp10_ParamLimits

0x0b1a,	// (0x0002b995) clock_digital_number_pane_cp10

0x0b34,	// (0x0002b9af) clock_digital_number_pane_cp11_ParamLimits

0x0b34,	// (0x0002b9af) clock_digital_number_pane_cp11

0x0b4e,	// (0x0002b9c9) clock_digital_number_pane_cp12_ParamLimits

0x0b4e,	// (0x0002b9c9) clock_digital_number_pane_cp12

0x0b6a,	// (0x0002b9e5) clock_digital_number_pane_cp13_ParamLimits

0x0b6a,	// (0x0002b9e5) clock_digital_number_pane_cp13

0x0b86,	// (0x0002ba01) clock_digital_separator_pane_cp10_ParamLimits

0x0b86,	// (0x0002ba01) clock_digital_separator_pane_cp10

0x0ba2,	// (0x0002ba1d) popup_clock_digital_window_cp02_t1_ParamLimits

0x0ba2,	// (0x0002ba1d) popup_clock_digital_window_cp02_t1

0xc640,	// (0x000374bb) clock_digital_number_pane_cp10_g1

0xc640,	// (0x000374bb) clock_digital_number_pane_cp10_g2

0x0001,

0xf6e7,	// (0x0003a562) clock_digital_number_pane_cp10_g

0xc640,	// (0x000374bb) clock_digital_separator_pane_cp10_g1

0xc640,	// (0x000374bb) clock_digital_separator_pane_g2_cp10

0xd220,	// (0x0003809b) navi_pane_vded_g4

0xd229,	// (0x000380a4) navi_pane_vded_g5

0xd232,	// (0x000380ad) navi_pane_vded_t1

0xb600,	// (0x0003647b) main_vded_pane

0x5254,	// (0x000300cf) main_vded_pane_g1

0x5260,	// (0x000300db) main_vded_pane_g2

0x526c,	// (0x000300e7) main_vded_pane_g3

0x0002,

0xf6ec,	// (0x0003a567) main_vded_pane_g

0x5278,	// (0x000300f3) main_vded_pane_t1

0x5286,	// (0x00030101) main_vded_pane_t2

0x0001,

0xf6f3,	// (0x0003a56e) main_vded_pane_t

0x5294,	// (0x0003010f) vded_slider_pane

0x529e,	// (0x00030119) vded_video_pane

0xee5a,	// (0x00039cd5) vded_video_pane_g1

0x52aa,	// (0x00030125) vded_video_pane_g2

0xc70f,	// (0x0003758a) vded_video_pane_g3

0x0002,

0xf6f8,	// (0x0003a573) vded_video_pane_g

0xee64,	// (0x00039cdf) vded_slider_pane_g1

0xe661,	// (0x000394dc) vded_slider_pane_g2

0xee6d,	// (0x00039ce8) vded_slider_pane_g3

0xee76,	// (0x00039cf1) vded_slider_pane_g4

0xee7f,	// (0x00039cfa) vded_slider_pane_g5

0x0004,

0xf6ff,	// (0x0003a57a) vded_slider_pane_g

0x4e9e,	// (0x0002fd19) mup3_rocker_pane_ParamLimits

0x4e9e,	// (0x0002fd19) mup3_rocker_pane

0xebb5,	// (0x00039a30) mup3_control_keys_pane_g1

0xee88,	// (0x00039d03) mup3_control_keys_pane_g2

0xebb5,	// (0x00039a30) mup3_control_keys_pane_g3

0xee90,	// (0x00039d0b) mup3_control_keys_pane_g4

0x0003,

0xf70a,	// (0x0003a585) mup3_control_keys_pane_g

0x0484,	// (0x0002b2ff) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0484,	// (0x0002b2ff) popup_toolbar2_fixed_window_cp01

0x4e9e,	// (0x0002fd19) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4e9e,	// (0x0002fd19) popup_toolbar2_fixed_window_cp02

0xd974,	// (0x000387ef) popup_call2_audio_second_window_t4_ParamLimits

0xd974,	// (0x000387ef) popup_call2_audio_second_window_t4

0xdeb0,	// (0x00038d2b) popup_call2_audio_first_window_t6_ParamLimits

0xdeb0,	// (0x00038d2b) popup_call2_audio_first_window_t6

0xe0ee,	// (0x00038f69) popup_call2_audio_out_window_t6_ParamLimits

0xe0ee,	// (0x00038f69) popup_call2_audio_out_window_t6

0xb600,	// (0x0003647b) main_vitu_pane

0xc66a,	// (0x000374e5) aid_size_cell_itu_ParamLimits

0xc66a,	// (0x000374e5) aid_size_cell_itu

0xc66a,	// (0x000374e5) bg_popup_window_pane_cp08_ParamLimits

0xc66a,	// (0x000374e5) bg_popup_window_pane_cp08

0xc66a,	// (0x000374e5) field_vitu_entry_pane_ParamLimits

0xc66a,	// (0x000374e5) field_vitu_entry_pane

0xc66a,	// (0x000374e5) grid_vitu_function_pane_ParamLimits

0xc66a,	// (0x000374e5) grid_vitu_function_pane

0xc66a,	// (0x000374e5) grid_vitu_itu_pane_ParamLimits

0xc66a,	// (0x000374e5) grid_vitu_itu_pane

0xc66a,	// (0x000374e5) cell_vitu_itu_pane_ParamLimits

0xc66a,	// (0x000374e5) cell_vitu_itu_pane

0xc66a,	// (0x000374e5) cell_vitu_function_pane_ParamLimits

0xc66a,	// (0x000374e5) cell_vitu_function_pane

0xc66a,	// (0x000374e5) bg_popup_sub_pane_cp08_ParamLimits

0xc66a,	// (0x000374e5) bg_popup_sub_pane_cp08

0xc719,	// (0x00037594) field_vitu_entry_pane_t1_ParamLimits

0xc719,	// (0x00037594) field_vitu_entry_pane_t1

0xee98,	// (0x00039d13) field_vitu_entry_pane_t2_ParamLimits

0xee98,	// (0x00039d13) field_vitu_entry_pane_t2

0x0001,

0xf713,	// (0x0003a58e) field_vitu_entry_pane_t_ParamLimits

0xf713,	// (0x0003a58e) field_vitu_entry_pane_t

0xe6eb,	// (0x00039566) bg_button_pane_cp05_ParamLimits

0xe6eb,	// (0x00039566) bg_button_pane_cp05

0xeeb5,	// (0x00039d30) cell_vitu_itu_pane_g1

0xd315,	// (0x00038190) cell_vitu_itu_pane_t1_ParamLimits

0xd315,	// (0x00038190) cell_vitu_itu_pane_t1

0xd315,	// (0x00038190) cell_vitu_itu_pane_t2_ParamLimits

0xd315,	// (0x00038190) cell_vitu_itu_pane_t2

0x0002,

0xf718,	// (0x0003a593) cell_vitu_itu_pane_t_ParamLimits

0xf718,	// (0x0003a593) cell_vitu_itu_pane_t

0xb57d,	// (0x000363f8) bg_button_pane_cp07

0xc70f,	// (0x0003758a) cell_vitu_function_pane_g1

0xb77e,	// (0x000365f9) main_calc_pane_g1

0x02e5,	// (0x0002b160) aid_visual_content_pane

0xb600,	// (0x0003647b) main_vradio_pane

0xc6d1,	// (0x0003754c) main_vradio_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) main_vradio_pane_g1

0xc6df,	// (0x0003755a) main_vradio_pane_g2_ParamLimits

0xc6df,	// (0x0003755a) main_vradio_pane_g2

0x0001,

0xf71f,	// (0x0003a59a) main_vradio_pane_g_ParamLimits

0xf71f,	// (0x0003a59a) main_vradio_pane_g

0xc719,	// (0x00037594) main_vradio_pane_t1_ParamLimits

0xc719,	// (0x00037594) main_vradio_pane_t1

0xc719,	// (0x00037594) main_vradio_pane_t2_ParamLimits

0xc719,	// (0x00037594) main_vradio_pane_t2

0xc72d,	// (0x000375a8) main_vradio_pane_t3_ParamLimits

0xc72d,	// (0x000375a8) main_vradio_pane_t3

0x0002,

0xf724,	// (0x0003a59f) main_vradio_pane_t_ParamLimits

0xf724,	// (0x0003a59f) main_vradio_pane_t

0xc66a,	// (0x000374e5) vradio_rocker_control_pane_ParamLimits

0xc66a,	// (0x000374e5) vradio_rocker_control_pane

0xc66a,	// (0x000374e5) vradio_station_info_pane_ParamLimits

0xc66a,	// (0x000374e5) vradio_station_info_pane

0xc66a,	// (0x000374e5) vradio_frequency_info_pane_ParamLimits

0xc66a,	// (0x000374e5) vradio_frequency_info_pane

0xc70f,	// (0x0003758a) vradio_station_info_pane_g1

0xd315,	// (0x00038190) vradio_station_info_pane_t1_ParamLimits

0xd315,	// (0x00038190) vradio_station_info_pane_t1

0xc72d,	// (0x000375a8) vradio_station_info_pane_t2_ParamLimits

0xc72d,	// (0x000375a8) vradio_station_info_pane_t2

0x0001,

0xf72b,	// (0x0003a5a6) vradio_station_info_pane_t_ParamLimits

0xf72b,	// (0x0003a5a6) vradio_station_info_pane_t

0xb57d,	// (0x000363f8) vradio_tuning_pane

0x52b3,	// (0x0003012e) vradio_rocker_control_pane_g1

0xeed1,	// (0x00039d4c) vradio_rocker_control_pane_g2

0x52bd,	// (0x00030138) vradio_rocker_control_pane_g3

0x52c7,	// (0x00030142) vradio_rocker_control_pane_g4

0x52d1,	// (0x0003014c) vradio_rocker_control_pane_g5

0x0004,

0xf730,	// (0x0003a5ab) vradio_rocker_control_pane_g

0xc70f,	// (0x0003758a) vradio_frequency_info_pane_g1

0xc719,	// (0x00037594) vradio_frequency_info_pane_t1_ParamLimits

0xc719,	// (0x00037594) vradio_frequency_info_pane_t1

0x52db,	// (0x00030156) vradio_tuning_pane_g1

0x52e6,	// (0x00030161) vradio_tuning_pane_t1

0xb5ab,	// (0x00036426) area_side_right_pane_ParamLimits

0xb5ab,	// (0x00036426) area_side_right_pane

0xe498,	// (0x00039313) status_small_pane_g1

0xe4a0,	// (0x0003931b) status_small_pane_g2

0xe4a9,	// (0x00039324) status_small_pane_g3

0xe4b2,	// (0x0003932d) status_small_pane_g4

0x0003,

0xf4fc,	// (0x0003a377) status_small_pane_g

0xe4bb,	// (0x00039336) status_small_pane_t1

0xb600,	// (0x0003647b) main_video3_pane

0xb57d,	// (0x000363f8) cams_zoom_vslider_pane

0xeed9,	// (0x00039d54) image3_wide_pane_ParamLimits

0xeed9,	// (0x00039d54) image3_wide_pane

0xb57d,	// (0x000363f8) image3_wide_small_pane

0xeef3,	// (0x00039d6e) main_video3_pane_g1_ParamLimits

0xeef3,	// (0x00039d6e) main_video3_pane_g1

0xeef3,	// (0x00039d6e) main_video3_pane_g2_ParamLimits

0xeef3,	// (0x00039d6e) main_video3_pane_g2

0x0001,

0xf73b,	// (0x0003a5b6) main_video3_pane_g_ParamLimits

0xf73b,	// (0x0003a5b6) main_video3_pane_g

0xef11,	// (0x00039d8c) main_video3_pane_t1_ParamLimits

0xef11,	// (0x00039d8c) main_video3_pane_t1

0xef11,	// (0x00039d8c) main_video3_pane_t2_ParamLimits

0xef11,	// (0x00039d8c) main_video3_pane_t2

0xef11,	// (0x00039d8c) main_video3_pane_t3_ParamLimits

0xef11,	// (0x00039d8c) main_video3_pane_t3

0x0002,

0xf740,	// (0x0003a5bb) main_video3_pane_t_ParamLimits

0xf740,	// (0x0003a5bb) main_video3_pane_t

0xc70f,	// (0x0003758a) cams_zoom_vslider_pane_g1

0xc70f,	// (0x0003758a) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00039f07) cams_zoom_vslider_pane_g

0xb57d,	// (0x000363f8) small_slider_vertical_pane

0xc70f,	// (0x0003758a) small_slider_vertical_pane_g1

0xc70f,	// (0x0003758a) small_slider_vertical_pane_g2

0xef38,	// (0x00039db3) small_slider_vertical_pane_g3

0x0002,

0xf747,	// (0x0003a5c2) small_slider_vertical_pane_g

0xb600,	// (0x0003647b) main_hwr_training_pane

0xef41,	// (0x00039dbc) hwr_training_instruct_pane_ParamLimits

0xef41,	// (0x00039dbc) hwr_training_instruct_pane

0x52f5,	// (0x00030170) hwr_training_navi_pane_ParamLimits

0x52f5,	// (0x00030170) hwr_training_navi_pane

0x5314,	// (0x0003018f) hwr_training_write_pane_ParamLimits

0x5314,	// (0x0003018f) hwr_training_write_pane

0xb57d,	// (0x000363f8) bg_frame_shadow_pane

0xef78,	// (0x00039df3) hwr_training_write_pane_g1

0xef80,	// (0x00039dfb) hwr_training_write_pane_g2

0xef88,	// (0x00039e03) hwr_training_write_pane_g3

0xef90,	// (0x00039e0b) hwr_training_write_pane_g4

0xef98,	// (0x00039e13) hwr_training_write_pane_g5

0xefa0,	// (0x00039e1b) hwr_training_write_pane_g6

0xefa8,	// (0x00039e23) hwr_training_write_pane_g7

0x0006,

0xf74e,	// (0x0003a5c9) hwr_training_write_pane_g

0xb9ce,	// (0x00036849) hwr_training_navi_pane_g1_ParamLimits

0xb9ce,	// (0x00036849) hwr_training_navi_pane_g1

0xb9e0,	// (0x0003685b) hwr_training_navi_pane_g2_ParamLimits

0xb9e0,	// (0x0003685b) hwr_training_navi_pane_g2

0xb9f2,	// (0x0003686d) hwr_training_navi_pane_g3_ParamLimits

0xb9f2,	// (0x0003686d) hwr_training_navi_pane_g3

0xba02,	// (0x0003687d) hwr_training_navi_pane_g4_ParamLimits

0xba02,	// (0x0003687d) hwr_training_navi_pane_g4

0x0004,

0xf75d,	// (0x0003a5d8) hwr_training_navi_pane_g_ParamLimits

0xf75d,	// (0x0003a5d8) hwr_training_navi_pane_g

0xba0f,	// (0x0003688a) hwr_training_navi_pane_t1

0x534f,	// (0x000301ca) list_single_hwr_training_instruct_pane_ParamLimits

0x534f,	// (0x000301ca) list_single_hwr_training_instruct_pane

0xefb0,	// (0x00039e2b) list_single_hwr_training_instruct_pane_t1

0xe84b,	// (0x000396c6) bg_frame_shadow_pane_g1

0xefbf,	// (0x00039e3a) bg_frame_shadow_pane_g2

0xefc7,	// (0x00039e42) bg_frame_shadow_pane_g3

0xefcf,	// (0x00039e4a) bg_frame_shadow_pane_g4

0xefd7,	// (0x00039e52) bg_frame_shadow_pane_g5

0xefdf,	// (0x00039e5a) bg_frame_shadow_pane_g6

0xf009,	// (0x00039e84) bg_frame_shadow_pane_g7

0xc825,	// (0x000376a0) bg_frame_shadow_pane_g8

0x0007,

0xf768,	// (0x0003a5e3) bg_frame_shadow_pane_g

0xb600,	// (0x0003647b) main_video_tele_dialer_pane

0x0bd0,	// (0x0002ba4b) aid_size_cell_video_keypad_ParamLimits

0x0bd0,	// (0x0002ba4b) aid_size_cell_video_keypad

0x0bea,	// (0x0002ba65) grid_video_dialer_keypad_pane_ParamLimits

0x0bea,	// (0x0002ba65) grid_video_dialer_keypad_pane

0x0c36,	// (0x0002bab1) video_down_pane_cp_ParamLimits

0x0c36,	// (0x0002bab1) video_down_pane_cp

0x0c4c,	// (0x0002bac7) cell_video_dialer_keypad_pane_ParamLimits

0x0c4c,	// (0x0002bac7) cell_video_dialer_keypad_pane

0xf011,	// (0x00039e8c) bg_button_pane_cp08_ParamLimits

0xf011,	// (0x00039e8c) bg_button_pane_cp08

0x5387,	// (0x00030202) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5387,	// (0x00030202) cell_video_dialer_keypad_pane_g1

0x4e9e,	// (0x0002fd19) mup3_rocker2_pane_ParamLimits

0x4e9e,	// (0x0002fd19) mup3_rocker2_pane

0xc70f,	// (0x0003758a) mup3_rocker2_pane_g1

0x07bf,	// (0x0002b63a) main_dialer2_pane

0xb600,	// (0x0003647b) main_mp4_pane

0xba3b,	// (0x000368b6) main_mp4_pane_g1_ParamLimits

0xba3b,	// (0x000368b6) main_mp4_pane_g1

0xba3b,	// (0x000368b6) main_mp4_pane_g2_ParamLimits

0xba3b,	// (0x000368b6) main_mp4_pane_g2

0x0c72,	// (0x0002baed) main_mp4_pane_g3_ParamLimits

0x0c72,	// (0x0002baed) main_mp4_pane_g3

0xba59,	// (0x000368d4) main_mp4_pane_g4_ParamLimits

0xba59,	// (0x000368d4) main_mp4_pane_g4

0xba81,	// (0x000368fc) main_mp4_pane_g5_ParamLimits

0xba81,	// (0x000368fc) main_mp4_pane_g5

0x0007,

0xf788,	// (0x0003a603) main_mp4_pane_g_ParamLimits

0xf788,	// (0x0003a603) main_mp4_pane_g

0xbae9,	// (0x00036964) main_mp4_pane_t1_ParamLimits

0xbae9,	// (0x00036964) main_mp4_pane_t1

0xbb4b,	// (0x000369c6) main_mp4_pane_t2_ParamLimits

0xbb4b,	// (0x000369c6) main_mp4_pane_t2

0xbbaf,	// (0x00036a2a) main_mp4_pane_t3_ParamLimits

0xbbaf,	// (0x00036a2a) main_mp4_pane_t3

0xbc0d,	// (0x00036a88) main_mp4_pane_t4_ParamLimits

0xbc0d,	// (0x00036a88) main_mp4_pane_t4

0x0003,

0xf799,	// (0x0003a614) main_mp4_pane_t_ParamLimits

0xf799,	// (0x0003a614) main_mp4_pane_t

0xbc6b,	// (0x00036ae6) mp4_progress_pane_ParamLimits

0xbc6b,	// (0x00036ae6) mp4_progress_pane

0xbc9f,	// (0x00036b1a) mp4_rocker_pane_ParamLimits

0xbc9f,	// (0x00036b1a) mp4_rocker_pane

0x53ca,	// (0x00030245) mp4_progress_pane_t1

0x53e8,	// (0x00030263) mp4_progress_pane_t2

0x0001,

0xf7a2,	// (0x0003a61d) mp4_progress_pane_t

0x5407,	// (0x00030282) mup_progress_pane_cp04

0x4578,	// (0x0002f3f3) mp4_rocker_pane_g1

0xb5f2,	// (0x0003646d) aid_cell_size_keypad2_ParamLimits

0xb5f2,	// (0x0003646d) aid_cell_size_keypad2

0xb5f2,	// (0x0003646d) dialer2_ne_pane_ParamLimits

0xb5f2,	// (0x0003646d) dialer2_ne_pane

0xb5f2,	// (0x0003646d) grid_dialer2_keypad_pane_ParamLimits

0xb5f2,	// (0x0003646d) grid_dialer2_keypad_pane

0xe6eb,	// (0x00039566) bg_popup_call_pane_cp07_ParamLimits

0xe6eb,	// (0x00039566) bg_popup_call_pane_cp07

0x541a,	// (0x00030295) dialer2_ne_pane_t1_ParamLimits

0x541a,	// (0x00030295) dialer2_ne_pane_t1

0x0ca4,	// (0x0002bb1f) cell_dialer2_keypad_pane_ParamLimits

0x0ca4,	// (0x0002bb1f) cell_dialer2_keypad_pane

0xe6eb,	// (0x00039566) bg_button_pane_pane_cp04_ParamLimits

0xe6eb,	// (0x00039566) bg_button_pane_pane_cp04

0xc6d1,	// (0x0003754c) cell_dialer2_keypad_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) cell_dialer2_keypad_pane_g1

0x2103,	// (0x0002cf7e) aid_placing_vt_set_content_ParamLimits

0x2103,	// (0x0002cf7e) aid_placing_vt_set_content

0x2127,	// (0x0002cfa2) aid_placing_vt_set_title_ParamLimits

0x2127,	// (0x0002cfa2) aid_placing_vt_set_title

0xb600,	// (0x0003647b) main_image3_pane

0x0d19,	// (0x0002bb94) area_side_right_pane_cp01_ParamLimits

0x0d19,	// (0x0002bb94) area_side_right_pane_cp01

0x0d32,	// (0x0002bbad) main_image3_pane_g1_ParamLimits

0x0d32,	// (0x0002bbad) main_image3_pane_g1

0x0d40,	// (0x0002bbbb) main_image3_pane_g2_ParamLimits

0x0d40,	// (0x0002bbbb) main_image3_pane_g2

0x0d68,	// (0x0002bbe3) main_image3_pane_g3_ParamLimits

0x0d68,	// (0x0002bbe3) main_image3_pane_g3

0x0d92,	// (0x0002bc0d) main_image3_pane_g4_ParamLimits

0x0d92,	// (0x0002bc0d) main_image3_pane_g4

0x0003,

0xf7b1,	// (0x0003a62c) main_image3_pane_g_ParamLimits

0xf7b1,	// (0x0003a62c) main_image3_pane_g

0x0dbc,	// (0x0002bc37) main_image3_pane_t1_ParamLimits

0x0dbc,	// (0x0002bc37) main_image3_pane_t1

0x0e14,	// (0x0002bc8f) main_image3_pane_t2_ParamLimits

0x0e14,	// (0x0002bc8f) main_image3_pane_t2

0x0e66,	// (0x0002bce1) main_image3_pane_t3_ParamLimits

0x0e66,	// (0x0002bce1) main_image3_pane_t3

0x0003,

0xf7ba,	// (0x0003a635) main_image3_pane_t_ParamLimits

0xf7ba,	// (0x0003a635) main_image3_pane_t

0xc66a,	// (0x000374e5) grid_sctrl_middle_pane_cp01_ParamLimits

0xc66a,	// (0x000374e5) grid_sctrl_middle_pane_cp01

0x5488,	// (0x00030303) cell_sctrl_middle_pane_cp01_ParamLimits

0x5488,	// (0x00030303) cell_sctrl_middle_pane_cp01

0x54a5,	// (0x00030320) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x54a5,	// (0x00030320) cell_sctrl_middle_pane_cp01_g1

0xb600,	// (0x0003647b) main_call4_pane

0x0eee,	// (0x0002bd69) aid_size_button_call4_ParamLimits

0x0eee,	// (0x0002bd69) aid_size_button_call4

0x0f21,	// (0x0002bd9c) call4_windows_pane_ParamLimits

0x0f21,	// (0x0002bd9c) call4_windows_pane

0x0f40,	// (0x0002bdbb) grid_call4_button_pane_ParamLimits

0x0f40,	// (0x0002bdbb) grid_call4_button_pane

0x0f77,	// (0x0002bdf2) call4_windows_conf_pane

0x0f90,	// (0x0002be0b) popup_call4_audio_first_window_ParamLimits

0x0f90,	// (0x0002be0b) popup_call4_audio_first_window

0x0fe0,	// (0x0002be5b) popup_call4_audio_second_window_ParamLimits

0x0fe0,	// (0x0002be5b) popup_call4_audio_second_window

0x0ff9,	// (0x0002be74) popup_call4_audio_wait_window_ParamLimits

0x0ff9,	// (0x0002be74) popup_call4_audio_wait_window

0x1007,	// (0x0002be82) cell_call4_button_pane_ParamLimits

0x1007,	// (0x0002be82) cell_call4_button_pane

0x54ba,	// (0x00030335) bg_button_pane_cp09_ParamLimits

0x54ba,	// (0x00030335) bg_button_pane_cp09

0x102e,	// (0x0002bea9) cell_call4_button_pane_g1_ParamLimits

0x102e,	// (0x0002bea9) cell_call4_button_pane_g1

0x1054,	// (0x0002becf) cell_call4_button_pane_t1_ParamLimits

0x1054,	// (0x0002becf) cell_call4_button_pane_t1

0x54ce,	// (0x00030349) popup_call4_audio_conf_window_ParamLimits

0x54ce,	// (0x00030349) popup_call4_audio_conf_window

0x4ec2,	// (0x0002fd3d) mup3_progress_pane_t1_ParamLimits

0x4ed9,	// (0x0002fd54) mup3_progress_pane_t2_ParamLimits

0xeb85,	// (0x00039a00) mup3_progress_pane_t3_ParamLimits

0xf694,	// (0x0003a50f) mup3_progress_pane_t_ParamLimits

0xeb9c,	// (0x00039a17) mup_progress_pane_cp03_ParamLimits

0xebb5,	// (0x00039a30) mup3_control_keys_pane_g4_copy1

0xbc9f,	// (0x00036b1a) mp4_rocker2_pane_ParamLimits

0xbc9f,	// (0x00036b1a) mp4_rocker2_pane

0xee88,	// (0x00039d03) mp4_rocker2_pane_g1

0xee88,	// (0x00039d03) mp4_rocker2_pane_g2

0xee88,	// (0x00039d03) mp4_rocker2_pane_g3

0xee88,	// (0x00039d03) mp4_rocker2_pane_g4

0xee88,	// (0x00039d03) mp4_rocker2_pane_g5

0x0004,

0xf7c3,	// (0x0003a63e) mp4_rocker2_pane_g

0xb600,	// (0x0003647b) main_camera4_pane

0xb600,	// (0x0003647b) main_video4_pane

0x0c04,	// (0x0002ba7f) main_video_tele_dialer_pane_t1_ParamLimits

0x0c04,	// (0x0002ba7f) main_video_tele_dialer_pane_t1

0x0c1d,	// (0x0002ba98) main_video_tele_dialer_pane_t2_ParamLimits

0x0c1d,	// (0x0002ba98) main_video_tele_dialer_pane_t2

0x0001,

0xf779,	// (0x0003a5f4) main_video_tele_dialer_pane_t_ParamLimits

0xf779,	// (0x0003a5f4) main_video_tele_dialer_pane_t

0x1092,	// (0x0002bf0d) cam4_autofocus_pane_ParamLimits

0x1092,	// (0x0002bf0d) cam4_autofocus_pane

0x10a8,	// (0x0002bf23) cam4_image_uncrop_pane_ParamLimits

0x10a8,	// (0x0002bf23) cam4_image_uncrop_pane

0x10c1,	// (0x0002bf3c) cam4_indicators_pane_ParamLimits

0x10c1,	// (0x0002bf3c) cam4_indicators_pane

0x10f1,	// (0x0002bf6c) main_camera4_pane_g1_ParamLimits

0x10f1,	// (0x0002bf6c) main_camera4_pane_g1

0x1103,	// (0x0002bf7e) main_camera4_pane_g2_ParamLimits

0x1103,	// (0x0002bf7e) main_camera4_pane_g2

0x1116,	// (0x0002bf91) main_camera4_pane_g3_ParamLimits

0x1116,	// (0x0002bf91) main_camera4_pane_g3

0x1129,	// (0x0002bfa4) main_camera4_pane_g4_ParamLimits

0x1129,	// (0x0002bfa4) main_camera4_pane_g4

0x113c,	// (0x0002bfb7) main_camera4_pane_g5_ParamLimits

0x113c,	// (0x0002bfb7) main_camera4_pane_g5

0x0005,

0xf7ce,	// (0x0003a649) main_camera4_pane_g_ParamLimits

0xf7ce,	// (0x0003a649) main_camera4_pane_g

0x1160,	// (0x0002bfdb) main_camera4_pane_t1_ParamLimits

0x1160,	// (0x0002bfdb) main_camera4_pane_t1

0x5510,	// (0x0003038b) bg_tb_trans_pane_cp06

0xbd41,	// (0x00036bbc) cam4_indicators_pane_g1

0xbd52,	// (0x00036bcd) cam4_indicators_pane_g2

0x0002,

0xf7e9,	// (0x0003a664) cam4_indicators_pane_g

0xbd6a,	// (0x00036be5) cam4_indicators_pane_t1

0x11b0,	// (0x0002c02b) main_video4_pane_g1_ParamLimits

0x11b0,	// (0x0002c02b) main_video4_pane_g1

0x11bf,	// (0x0002c03a) main_video4_pane_g2_ParamLimits

0x11bf,	// (0x0002c03a) main_video4_pane_g2

0x11cf,	// (0x0002c04a) main_video4_pane_g3_ParamLimits

0x11cf,	// (0x0002c04a) main_video4_pane_g3

0x11df,	// (0x0002c05a) main_video4_pane_g4_ParamLimits

0x11df,	// (0x0002c05a) main_video4_pane_g4

0x0004,

0xf7f0,	// (0x0003a66b) main_video4_pane_g_ParamLimits

0xf7f0,	// (0x0003a66b) main_video4_pane_g

0x11ff,	// (0x0002c07a) vid4_indicators_pane_ParamLimits

0x11ff,	// (0x0002c07a) vid4_indicators_pane

0x1229,	// (0x0002c0a4) video4_image_uncrop_cif_pane_ParamLimits

0x1229,	// (0x0002c0a4) video4_image_uncrop_cif_pane

0x1243,	// (0x0002c0be) video4_image_uncrop_nhd_pane_ParamLimits

0x1243,	// (0x0002c0be) video4_image_uncrop_nhd_pane

0x10a8,	// (0x0002bf23) video4_image_uncrop_vga_pane_ParamLimits

0x10a8,	// (0x0002bf23) video4_image_uncrop_vga_pane

0xb5f2,	// (0x0003646d) bg_tb_trans_pane_cp07

0xbd98,	// (0x00036c13) vid4_indicators_pane_g1

0xbdae,	// (0x00036c29) vid4_indicators_pane_g2

0xbdc2,	// (0x00036c3d) vid4_indicators_pane_g3

0x0004,

0xf7fb,	// (0x0003a676) vid4_indicators_pane_g

0xbdf3,	// (0x00036c6e) vid4_indicators_pane_t1

0x551e,	// (0x00030399) cam4_autofocus_pane_g1

0x5526,	// (0x000303a1) cam4_autofocus_pane_g2

0x552e,	// (0x000303a9) cam4_autofocus_pane_g3

0x0002,

0xf806,	// (0x0003a681) cam4_autofocus_pane_g

0x5536,	// (0x000303b1) cam4_autofocus_pane_g3_copy1

0x536b,	// (0x000301e6) video_down_pane_cp_t1

0x5379,	// (0x000301f4) video_down_pane_cp_t2

0x0001,

0xf77e,	// (0x0003a5f9) video_down_pane_cp_t

0xb5f2,	// (0x0003646d) popup_vitu2_window_ParamLimits

0xb5f2,	// (0x0003646d) popup_vitu2_window

0x125a,	// (0x0002c0d5) aid_size_cell2_itu2_ParamLimits

0x125a,	// (0x0002c0d5) aid_size_cell2_itu2

0x1280,	// (0x0002c0fb) aid_size_cell_itu2_ParamLimits

0x1280,	// (0x0002c0fb) aid_size_cell_itu2

0x12de,	// (0x0002c159) bg_popup_window_pane_cp09_ParamLimits

0x12de,	// (0x0002c159) bg_popup_window_pane_cp09

0x12ec,	// (0x0002c167) field_vitu2_entry_pane_ParamLimits

0x12ec,	// (0x0002c167) field_vitu2_entry_pane

0x1314,	// (0x0002c18f) grid_vitu2_function_pane_ParamLimits

0x1314,	// (0x0002c18f) grid_vitu2_function_pane

0x1365,	// (0x0002c1e0) grid_vitu2_itu_pane_ParamLimits

0x1365,	// (0x0002c1e0) grid_vitu2_itu_pane

0x13f5,	// (0x0002c270) cell_vitu2_itu_pane_ParamLimits

0x13f5,	// (0x0002c270) cell_vitu2_itu_pane

0x1423,	// (0x0002c29e) cell_vitu2_function_pane_ParamLimits

0x1423,	// (0x0002c29e) cell_vitu2_function_pane

0x553e,	// (0x000303b9) bg_popup_call_pane_cp08_ParamLimits

0x553e,	// (0x000303b9) bg_popup_call_pane_cp08

0x5555,	// (0x000303d0) field_vitu2_entry_pane_g1

0x5561,	// (0x000303dc) field_vitu2_entry_pane_g2

0x0002,

0xf80d,	// (0x0003a688) field_vitu2_entry_pane_g

0x556d,	// (0x000303e8) field_vitu2_entry_pane_t1_ParamLimits

0x556d,	// (0x000303e8) field_vitu2_entry_pane_t1

0x559c,	// (0x00030417) field_vitu2_entry_pane_t2_ParamLimits

0x559c,	// (0x00030417) field_vitu2_entry_pane_t2

0x0001,

0xf814,	// (0x0003a68f) field_vitu2_entry_pane_t_ParamLimits

0xf814,	// (0x0003a68f) field_vitu2_entry_pane_t

0x1467,	// (0x0002c2e2) bg_button_pane_cp010_ParamLimits

0x1467,	// (0x0002c2e2) bg_button_pane_cp010

0x1475,	// (0x0002c2f0) cell_vitu2_itu_pane_g1

0x149b,	// (0x0002c316) cell_vitu2_itu_pane_t1_ParamLimits

0x149b,	// (0x0002c316) cell_vitu2_itu_pane_t1

0x14f9,	// (0x0002c374) cell_vitu2_itu_pane_t2_ParamLimits

0x14f9,	// (0x0002c374) cell_vitu2_itu_pane_t2

0x0002,

0xf81e,	// (0x0003a699) cell_vitu2_itu_pane_t_ParamLimits

0xf81e,	// (0x0003a699) cell_vitu2_itu_pane_t

0xb5f2,	// (0x0003646d) bg_button_pane_cp011

0x15e5,	// (0x0002c460) cell_vitu2_function_pane_g1

0xb600,	// (0x0003647b) main_myfav_hc_pane

0x0eb6,	// (0x0002bd31) popup_image3_note_pane_ParamLimits

0x0eb6,	// (0x0002bd31) popup_image3_note_pane

0x0ed2,	// (0x0002bd4d) popup_image3_tool_bar_pane_ParamLimits

0x0ed2,	// (0x0002bd4d) popup_image3_tool_bar_pane

0x1587,	// (0x0002c402) cell_vitu2_itu_pane_t3_ParamLimits

0x1587,	// (0x0002c402) cell_vitu2_itu_pane_t3

0xb57d,	// (0x000363f8) bg_popup_trans_pane

0x55c1,	// (0x0003043c) grid_image3_tool_bar_pane

0x55cb,	// (0x00030446) bg_popup_trans_pane_g1

0xcb8b,	// (0x00037a06) bg_popup_trans_pane_g2

0x55d3,	// (0x0003044e) bg_popup_trans_pane_g3

0x55db,	// (0x00030456) bg_popup_trans_pane_g4

0x55e3,	// (0x0003045e) bg_popup_trans_pane_g5

0x55eb,	// (0x00030466) bg_popup_trans_pane_g6

0x55f3,	// (0x0003046e) bg_popup_trans_pane_g7

0x55fb,	// (0x00030476) bg_popup_trans_pane_g8

0xcb6b,	// (0x000379e6) bg_popup_trans_pane_g9

0x0008,

0xf825,	// (0x0003a6a0) bg_popup_trans_pane_g

0x5603,	// (0x0003047e) cell_image3_tool_bar_pane_ParamLimits

0x5603,	// (0x0003047e) cell_image3_tool_bar_pane

0xc70f,	// (0x0003758a) cell_image3_tool_bar_pane_g1

0xb57d,	// (0x000363f8) bg_popup_trans_pane_cp1

0x5619,	// (0x00030494) popup_image3_note_pane_t1

0x5627,	// (0x000304a2) popup_image3_note_pane_t2

0x5635,	// (0x000304b0) popup_image3_note_pane_t3

0x0002,

0xf838,	// (0x0003a6b3) popup_image3_note_pane_t

0x5645,	// (0x000304c0) popup_image3_note_pane_t3_copy1

0x5653,	// (0x000304ce) bg_myfav_hc_instruction_pane_ParamLimits

0x5653,	// (0x000304ce) bg_myfav_hc_instruction_pane

0x566b,	// (0x000304e6) cell_myfav_contact_pane_ParamLimits

0x566b,	// (0x000304e6) cell_myfav_contact_pane

0x5687,	// (0x00030502) cell_myfav_contact_pane_cp1_ParamLimits

0x5687,	// (0x00030502) cell_myfav_contact_pane_cp1

0x569f,	// (0x0003051a) cell_myfav_contact_pane_cp2_ParamLimits

0x569f,	// (0x0003051a) cell_myfav_contact_pane_cp2

0x56b7,	// (0x00030532) cell_myfav_contact_pane_cp3_ParamLimits

0x56b7,	// (0x00030532) cell_myfav_contact_pane_cp3

0x56ce,	// (0x00030549) cell_myfav_contact_pane_cp4_ParamLimits

0x56ce,	// (0x00030549) cell_myfav_contact_pane_cp4

0x56e6,	// (0x00030561) cell_myfav_contact_pane_cp5_ParamLimits

0x56e6,	// (0x00030561) cell_myfav_contact_pane_cp5

0x56fa,	// (0x00030575) cell_myfav_contact_pane_cp6_ParamLimits

0x56fa,	// (0x00030575) cell_myfav_contact_pane_cp6

0x5710,	// (0x0003058b) cell_myfav_contact_pane_cp7_ParamLimits

0x5710,	// (0x0003058b) cell_myfav_contact_pane_cp7

0x5728,	// (0x000305a3) listscroll_gen_pane_cp05

0x5731,	// (0x000305ac) main_myfav_hc_pane_g1_ParamLimits

0x5731,	// (0x000305ac) main_myfav_hc_pane_g1

0x574b,	// (0x000305c6) main_myfav_hc_pane_g2_ParamLimits

0x574b,	// (0x000305c6) main_myfav_hc_pane_g2

0x0002,

0xf83f,	// (0x0003a6ba) main_myfav_hc_pane_g_ParamLimits

0xf83f,	// (0x0003a6ba) main_myfav_hc_pane_g

0x577f,	// (0x000305fa) main_myfav_hc_pane_t1_ParamLimits

0x577f,	// (0x000305fa) main_myfav_hc_pane_t1

0x5796,	// (0x00030611) main_myfav_hc_pane_t2_ParamLimits

0x5796,	// (0x00030611) main_myfav_hc_pane_t2

0x57a8,	// (0x00030623) main_myfav_hc_pane_t3_ParamLimits

0x57a8,	// (0x00030623) main_myfav_hc_pane_t3

0x57ba,	// (0x00030635) main_myfav_hc_pane_t4_ParamLimits

0x57ba,	// (0x00030635) main_myfav_hc_pane_t4

0x0004,

0xf846,	// (0x0003a6c1) main_myfav_hc_pane_t_ParamLimits

0xf846,	// (0x0003a6c1) main_myfav_hc_pane_t

0xc70f,	// (0x0003758a) bg_myfav_hc_instruction_pane_g1

0x57e4,	// (0x0003065f) cell_myfav_contact_pane_g1_ParamLimits

0x57e4,	// (0x0003065f) cell_myfav_contact_pane_g1

0x57e4,	// (0x0003065f) cell_myfav_contact_pane_g2_ParamLimits

0x57e4,	// (0x0003065f) cell_myfav_contact_pane_g2

0x57f0,	// (0x0003066b) cell_myfav_contact_pane_g3_ParamLimits

0x57f0,	// (0x0003066b) cell_myfav_contact_pane_g3

0xc6df,	// (0x0003755a) cell_myfav_contact_pane_g4_ParamLimits

0xc6df,	// (0x0003755a) cell_myfav_contact_pane_g4

0x57fd,	// (0x00030678) cell_myfav_contact_pane_g5_ParamLimits

0x57fd,	// (0x00030678) cell_myfav_contact_pane_g5

0x0004,

0xf851,	// (0x0003a6cc) cell_myfav_contact_pane_g_ParamLimits

0xf851,	// (0x0003a6cc) cell_myfav_contact_pane_g

0x5765,	// (0x000305e0) main_myfav_hc_pane_g3_ParamLimits

0x5765,	// (0x000305e0) main_myfav_hc_pane_g3

0x03e7,	// (0x0002b262) popup_adpt_find_window

0x5809,	// (0x00030684) afind_page_pane_ParamLimits

0x5809,	// (0x00030684) afind_page_pane

0x581f,	// (0x0003069a) aid_size_cell_afind_ParamLimits

0x581f,	// (0x0003069a) aid_size_cell_afind

0x583d,	// (0x000306b8) bg_popup_sub_pane_cp09_ParamLimits

0x583d,	// (0x000306b8) bg_popup_sub_pane_cp09

0x584f,	// (0x000306ca) find_pane_cp01_ParamLimits

0x584f,	// (0x000306ca) find_pane_cp01

0x5863,	// (0x000306de) grid_afind_control_pane_ParamLimits

0x5863,	// (0x000306de) grid_afind_control_pane

0x5877,	// (0x000306f2) grid_afind_pane_ParamLimits

0x5877,	// (0x000306f2) grid_afind_pane

0x5899,	// (0x00030714) cell_afind_pane_ParamLimits

0x5899,	// (0x00030714) cell_afind_pane

0xc70f,	// (0x0003758a) afind_page_pane_g1

0x5902,	// (0x0003077d) afind_page_pane_g2

0x590a,	// (0x00030785) afind_page_pane_g3

0x0002,

0xf85c,	// (0x0003a6d7) afind_page_pane_g

0x5912,	// (0x0003078d) afind_page_pane_t1

0x5932,	// (0x000307ad) cell_afind_grid_control_pane_ParamLimits

0x5932,	// (0x000307ad) cell_afind_grid_control_pane

0x5941,	// (0x000307bc) bg_button_pane_cp69_ParamLimits

0x5941,	// (0x000307bc) bg_button_pane_cp69

0x594d,	// (0x000307c8) cell_afind_pane_g1_ParamLimits

0x594d,	// (0x000307c8) cell_afind_pane_g1

0x595a,	// (0x000307d5) cell_afind_pane_t1_ParamLimits

0x595a,	// (0x000307d5) cell_afind_pane_t1

0x596c,	// (0x000307e7) bg_button_pane_cp72

0x5974,	// (0x000307ef) cell_afind_grid_control_pane_g1

0x3db2,	// (0x0002ec2d) aid_image_placing_area_ParamLimits

0x3db2,	// (0x0002ec2d) aid_image_placing_area

0xc6d1,	// (0x0003754c) field_vitu_entry_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) field_vitu_entry_pane_g1

0xc6d1,	// (0x0003754c) field_vitu_entry_pane_g2_ParamLimits

0xc6d1,	// (0x0003754c) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0003a014) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0003a014) field_vitu_entry_pane_g

0xeeb5,	// (0x00039d30) cell_vitu_itu_pane_g1_ParamLimits

0xee98,	// (0x00039d13) cell_vitu_itu_pane_t3_ParamLimits

0xee98,	// (0x00039d13) cell_vitu_itu_pane_t3

0x53ca,	// (0x00030245) mp4_progress_pane_t1_ParamLimits

0x53e8,	// (0x00030263) mp4_progress_pane_t2_ParamLimits

0xf7a2,	// (0x0003a61d) mp4_progress_pane_t_ParamLimits

0x5407,	// (0x00030282) mup_progress_pane_cp04_ParamLimits

0x57ce,	// (0x00030649) main_myfav_hc_pane_t5_ParamLimits

0x57ce,	// (0x00030649) main_myfav_hc_pane_t5

0xb5a3,	// (0x0003641e) aid_zoom_text_primary

0x03e7,	// (0x0002b262) popup_adpt_find_window_ParamLimits

0xb5f2,	// (0x0003646d) main_cam_set_pane

0x10da,	// (0x0002bf55) cam4_zoom_pane_ParamLimits

0x10da,	// (0x0002bf55) cam4_zoom_pane

0x597d,	// (0x000307f8) main_cam_set_pane_g1_ParamLimits

0x597d,	// (0x000307f8) main_cam_set_pane_g1

0x598b,	// (0x00030806) main_cam_set_pane_g2_ParamLimits

0x598b,	// (0x00030806) main_cam_set_pane_g2

0x0001,

0xf863,	// (0x0003a6de) main_cam_set_pane_g_ParamLimits

0xf863,	// (0x0003a6de) main_cam_set_pane_g

0x59ac,	// (0x00030827) main_cam_set_pane_t1_ParamLimits

0x59ac,	// (0x00030827) main_cam_set_pane_t1

0x59c7,	// (0x00030842) main_cset_listscroll_pane_ParamLimits

0x59c7,	// (0x00030842) main_cset_listscroll_pane

0x59ef,	// (0x0003086a) main_cset_slider_pane_ParamLimits

0x59ef,	// (0x0003086a) main_cset_slider_pane

0x5a21,	// (0x0003089c) main_cset_list_pane_ParamLimits

0x5a21,	// (0x0003089c) main_cset_list_pane

0x5a31,	// (0x000308ac) scroll_pane_cp028

0x5a3a,	// (0x000308b5) aid_area_touch_slider

0x5a56,	// (0x000308d1) cset_slider_pane

0x5a79,	// (0x000308f4) main_cset_slider_pane_g1

0x5a8e,	// (0x00030909) main_cset_slider_pane_g2

0x0011,

0xf868,	// (0x0003a6e3) main_cset_slider_pane_g

0x5b80,	// (0x000309fb) main_cset_slider_pane_t1

0x5ba8,	// (0x00030a23) main_cset_slider_pane_t2

0x5bc2,	// (0x00030a3d) main_cset_slider_pane_t3

0x5bdc,	// (0x00030a57) main_cset_slider_pane_t4

0x5bf6,	// (0x00030a71) main_cset_slider_pane_t5

0x5c14,	// (0x00030a8f) main_cset_slider_pane_t6

0x5c29,	// (0x00030aa4) main_cset_slider_pane_t7

0x000e,

0xf88d,	// (0x0003a708) main_cset_slider_pane_t

0x5da7,	// (0x00030c22) cset_list_set_pane_ParamLimits

0x5da7,	// (0x00030c22) cset_list_set_pane

0x5dbb,	// (0x00030c36) aid_position_infowindow_above

0x5dc3,	// (0x00030c3e) aid_position_infowindow_below

0x5dcb,	// (0x00030c46) cset_list_set_pane_g1_ParamLimits

0x5dcb,	// (0x00030c46) cset_list_set_pane_g1

0x5dd7,	// (0x00030c52) cset_list_set_pane_g3_ParamLimits

0x5dd7,	// (0x00030c52) cset_list_set_pane_g3

0x0001,

0xf8ac,	// (0x0003a727) cset_list_set_pane_g_ParamLimits

0xf8ac,	// (0x0003a727) cset_list_set_pane_g

0x5de6,	// (0x00030c61) cset_list_set_pane_t1_ParamLimits

0x5de6,	// (0x00030c61) cset_list_set_pane_t1

0xc66a,	// (0x000374e5) list_highlight_pane_cp021_ParamLimits

0xc66a,	// (0x000374e5) list_highlight_pane_cp021

0xd39b,	// (0x00038216) cset_slider_pane_g1

0xd3ad,	// (0x00038228) cset_slider_pane_g2

0xd3a4,	// (0x0003821f) cset_slider_pane_g3

0x0002,

0xf8b1,	// (0x0003a72c) cset_slider_pane_g

0xd029,	// (0x00037ea4) aid_area_touch_cam4_zoom

0x15f9,	// (0x0002c474) cam4_zoom_cont_pane

0x1601,	// (0x0002c47c) cam4_zoom_pane_g1

0x1609,	// (0x0002c484) cam4_zoom_pane_g2

0x1611,	// (0x0002c48c) cam4_zoom_pane_g3

0x0002,

0xf8b8,	// (0x0003a733) cam4_zoom_pane_g

0xbe0a,	// (0x00036c85) cam4_zoom_cont_pane_g1

0xbe13,	// (0x00036c8e) cam4_zoom_cont_pane_g2

0xbe1c,	// (0x00036c97) cam4_zoom_cont_pane_g3

0x0002,

0xf8bf,	// (0x0003a73a) cam4_zoom_cont_pane_g

0x0f0c,	// (0x0002bd87) call4_image_pane_ParamLimits

0x0f0c,	// (0x0002bd87) call4_image_pane

0x0f77,	// (0x0002bdf2) call4_windows_conf_pane_ParamLimits

0x0fbe,	// (0x0002be39) popup_call4_audio_in_window_ParamLimits

0x0fbe,	// (0x0002be39) popup_call4_audio_in_window

0xb57d,	// (0x000363f8) bg_popup_call2_act_pane_cp02

0x54c6,	// (0x00030341) call4_list_conf_pane

0xc70f,	// (0x0003758a) call4_image_pane_g1

0xc70f,	// (0x0003758a) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00039f07) call4_image_pane_g

0x5dfb,	// (0x00030c76) list_single_graphic_popup_conf4_pane_ParamLimits

0x5dfb,	// (0x00030c76) list_single_graphic_popup_conf4_pane

0xb57d,	// (0x000363f8) list_highlight_pane_cp022

0x5e10,	// (0x00030c8b) list_single_graphic_popup_conf4_pane_g1

0xd082,	// (0x00037efd) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8c6,	// (0x0003a741) list_single_graphic_popup_conf4_pane_g

0x5e18,	// (0x00030c93) list_single_graphic_popup_conf4_pane_t1

0x222f,	// (0x0002d0aa) popup_vtel_slider_window_ParamLimits

0x222f,	// (0x0002d0aa) popup_vtel_slider_window

0x545a,	// (0x000302d5) dialer2_ne_pane_t2_ParamLimits

0x545a,	// (0x000302d5) dialer2_ne_pane_t2

0x0001,

0xf7a7,	// (0x0003a622) dialer2_ne_pane_t_ParamLimits

0xf7a7,	// (0x0003a622) dialer2_ne_pane_t

0xe6eb,	// (0x00039566) bg_popup_sub_pane_cp010_ParamLimits

0xe6eb,	// (0x00039566) bg_popup_sub_pane_cp010

0x5e2e,	// (0x00030ca9) popup_vtel_slider_window_g1_ParamLimits

0x5e2e,	// (0x00030ca9) popup_vtel_slider_window_g1

0x5e41,	// (0x00030cbc) popup_vtel_slider_window_g2_ParamLimits

0x5e41,	// (0x00030cbc) popup_vtel_slider_window_g2

0x0003,

0xf8cb,	// (0x0003a746) popup_vtel_slider_window_g_ParamLimits

0xf8cb,	// (0x0003a746) popup_vtel_slider_window_g

0x5e97,	// (0x00030d12) vtel_slider_pane_ParamLimits

0x5e97,	// (0x00030d12) vtel_slider_pane

0x5eb9,	// (0x00030d34) vtel_slider_pane_g1_ParamLimits

0x5eb9,	// (0x00030d34) vtel_slider_pane_g1

0x5ecd,	// (0x00030d48) vtel_slider_pane_g2_ParamLimits

0x5ecd,	// (0x00030d48) vtel_slider_pane_g2

0x5ee5,	// (0x00030d60) vtel_slider_pane_g3_ParamLimits

0x5ee5,	// (0x00030d60) vtel_slider_pane_g3

0x5eb9,	// (0x00030d34) vtel_slider_pane_g4_ParamLimits

0x5eb9,	// (0x00030d34) vtel_slider_pane_g4

0x5efb,	// (0x00030d76) vtel_slider_pane_g5_ParamLimits

0x5efb,	// (0x00030d76) vtel_slider_pane_g5

0x0004,

0xf8d4,	// (0x0003a74f) vtel_slider_pane_g_ParamLimits

0xf8d4,	// (0x0003a74f) vtel_slider_pane_g

0xb5f2,	// (0x0003646d) main_gallery2_pane

0x12ac,	// (0x0002c127) aid_size_row_itut2_dropdow_list_ParamLimits

0x12ac,	// (0x0002c127) aid_size_row_itut2_dropdow_list

0x133c,	// (0x0002c1b7) grid_vitu2_function_top_pane_ParamLimits

0x133c,	// (0x0002c1b7) grid_vitu2_function_top_pane

0x13a0,	// (0x0002c21b) popup_vitu2_dropdown_list_window_ParamLimits

0x13a0,	// (0x0002c21b) popup_vitu2_dropdown_list_window

0x13c7,	// (0x0002c242) popup_vitu2_match_list_window

0x1619,	// (0x0002c494) cell_vitu2_function_top_pane_ParamLimits

0x1619,	// (0x0002c494) cell_vitu2_function_top_pane

0x1633,	// (0x0002c4ae) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1633,	// (0x0002c4ae) cell_vitu2_function_top_pane_cp01

0x164f,	// (0x0002c4ca) cell_vitu2_function_top_wide_pane_ParamLimits

0x164f,	// (0x0002c4ca) cell_vitu2_function_top_wide_pane

0xb5f2,	// (0x0003646d) bg_button_pane_cp012

0x166d,	// (0x0002c4e8) cell_vitu2_function_top_pane_g1

0xbe25,	// (0x00036ca0) bg_button_pane_cp013_ParamLimits

0xbe25,	// (0x00036ca0) bg_button_pane_cp013

0x5f11,	// (0x00030d8c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5f11,	// (0x00030d8c) cell_vitu2_function_top_wide_pane_g1

0xb5f2,	// (0x0003646d) bg_popup_sub_pane_cp20

0x1681,	// (0x0002c4fc) list_vitu2_match_list_pane

0x55cb,	// (0x00030446) bg_popup_sub_pane_cp20_g1

0x55d3,	// (0x0003044e) bg_popup_sub_pane_cp20_g2

0xcb8b,	// (0x00037a06) bg_popup_sub_pane_cp20_g3

0x55db,	// (0x00030456) bg_popup_sub_pane_cp20_g4

0xcb6b,	// (0x000379e6) bg_popup_sub_pane_cp20_g5

0x5f29,	// (0x00030da4) bg_popup_sub_pane_cp20_g6

0x55eb,	// (0x00030466) bg_popup_sub_pane_cp20_g7

0x55f3,	// (0x0003046e) bg_popup_sub_pane_cp20_g8

0x55fb,	// (0x00030476) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8df,	// (0x0003a75a) bg_popup_sub_pane_cp20_g

0xbe41,	// (0x00036cbc) list_vitu2_match_list_item_pane_ParamLimits

0xbe41,	// (0x00036cbc) list_vitu2_match_list_item_pane

0xbe53,	// (0x00036cce) list_vitu2_match_list_item_pane_t1

0xb600,	// (0x0003647b) bg_popup_sub_pane_cp21

0xc961,	// (0x000377dc) grid_vitu2_dropdown_list_pane

0x1699,	// (0x0002c514) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1699,	// (0x0002c514) cell_vitu2_dropdown_list_char_pane

0x16bb,	// (0x0002c536) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x16bb,	// (0x0002c536) cell_vitu2_dropdown_list_ctrl_pane

0x5f31,	// (0x00030dac) cell_vitu2_dropdown_list_char_pane_g1

0x5f3a,	// (0x00030db5) cell_vitu2_dropdown_list_char_pane_g2

0x5f43,	// (0x00030dbe) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f2,	// (0x0003a76d) cell_vitu2_dropdown_list_char_pane_g

0x16e5,	// (0x0002c560) cell_vitu2_dropdown_list_char_pane_t1

0x5f4c,	// (0x00030dc7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5f4c,	// (0x00030dc7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5f5c,	// (0x00030dd7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5f5c,	// (0x00030dd7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5f6d,	// (0x00030de8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5f6d,	// (0x00030de8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x16f3,	// (0x0002c56e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x16f3,	// (0x0002c56e) cell_vitu2_dropdown_list_ctrl_pane_g4

0x5510,	// (0x0003038b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x5510,	// (0x0003038b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8f9,	// (0x0003a774) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8f9,	// (0x0003a774) cell_vitu2_dropdown_list_ctrl_pane_g

0x5f7d,	// (0x00030df8) aid_size_cell_gallery2_ParamLimits

0x5f7d,	// (0x00030df8) aid_size_cell_gallery2

0x5f9b,	// (0x00030e16) grid_gallery2_pane_ParamLimits

0x5f9b,	// (0x00030e16) grid_gallery2_pane

0x5fb5,	// (0x00030e30) scroll_pane_cp029_ParamLimits

0x5fb5,	// (0x00030e30) scroll_pane_cp029

0x5fc6,	// (0x00030e41) cell_gallery2_pane_ParamLimits

0x5fc6,	// (0x00030e41) cell_gallery2_pane

0x602a,	// (0x00030ea5) cell_gallery2_pane_g2

0x6032,	// (0x00030ead) cell_gallery2_pane_g3

0x603a,	// (0x00030eb5) cell_gallery2_pane_g4

0x6042,	// (0x00030ebd) cell_gallery2_pane_g5

0xc961,	// (0x000377dc) grid_highlight_pane_cp10

0x13c7,	// (0x0002c242) popup_vitu2_match_list_window_ParamLimits

0x13de,	// (0x0002c259) popup_vitu2_query_window_ParamLimits

0x13de,	// (0x0002c259) popup_vitu2_query_window

0xb600,	// (0x0003647b) bg_vitu2_candi_button_pane

0x5f31,	// (0x00030dac) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x5f3a,	// (0x00030db5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x5f43,	// (0x00030dbe) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x604a,	// (0x00030ec5) bg_button_pane_cp015

0x6061,	// (0x00030edc) bg_button_pane_cp016

0x606d,	// (0x00030ee8) bg_button_pane_cp017

0xd329,	// (0x000381a4) bg_popup_sub_pane_cp22

0x60ae,	// (0x00030f29) popup_vitu2_query_window_g1

0x60ba,	// (0x00030f35) popup_vitu2_query_window_g2

0x0002,

0xf904,	// (0x0003a77f) popup_vitu2_query_window_g

0x60e0,	// (0x00030f5b) popup_vitu2_query_window_t1_ParamLimits

0x60e0,	// (0x00030f5b) popup_vitu2_query_window_t1

0x6115,	// (0x00030f90) popup_vitu2_query_window_t2_ParamLimits

0x6115,	// (0x00030f90) popup_vitu2_query_window_t2

0x6127,	// (0x00030fa2) popup_vitu2_query_window_t3_ParamLimits

0x6127,	// (0x00030fa2) popup_vitu2_query_window_t3

0x614f,	// (0x00030fca) popup_vitu2_query_window_t4_ParamLimits

0x614f,	// (0x00030fca) popup_vitu2_query_window_t4

0x6163,	// (0x00030fde) popup_vitu2_query_window_t5_ParamLimits

0x6163,	// (0x00030fde) popup_vitu2_query_window_t5

0x0006,

0xf90b,	// (0x0003a786) popup_vitu2_query_window_t_ParamLimits

0xf90b,	// (0x0003a786) popup_vitu2_query_window_t

0x5a19,	// (0x00030894) main_cset_text_pane

0x5a3a,	// (0x000308b5) aid_area_touch_slider_ParamLimits

0x5a56,	// (0x000308d1) cset_slider_pane_ParamLimits

0x5a79,	// (0x000308f4) main_cset_slider_pane_g1_ParamLimits

0x5a8e,	// (0x00030909) main_cset_slider_pane_g2_ParamLimits

0x5aa3,	// (0x0003091e) main_cset_slider_pane_g3_ParamLimits

0x5aa3,	// (0x0003091e) main_cset_slider_pane_g3

0x5aaf,	// (0x0003092a) main_cset_slider_pane_g4_ParamLimits

0x5aaf,	// (0x0003092a) main_cset_slider_pane_g4

0x5abe,	// (0x00030939) main_cset_slider_pane_g5_ParamLimits

0x5abe,	// (0x00030939) main_cset_slider_pane_g5

0x5acc,	// (0x00030947) main_cset_slider_pane_g6_ParamLimits

0x5acc,	// (0x00030947) main_cset_slider_pane_g6

0xf868,	// (0x0003a6e3) main_cset_slider_pane_g_ParamLimits

0x5b80,	// (0x000309fb) main_cset_slider_pane_t1_ParamLimits

0x5ba8,	// (0x00030a23) main_cset_slider_pane_t2_ParamLimits

0x5bc2,	// (0x00030a3d) main_cset_slider_pane_t3_ParamLimits

0x5bdc,	// (0x00030a57) main_cset_slider_pane_t4_ParamLimits

0x5bf6,	// (0x00030a71) main_cset_slider_pane_t5_ParamLimits

0x5c14,	// (0x00030a8f) main_cset_slider_pane_t6_ParamLimits

0x5c29,	// (0x00030aa4) main_cset_slider_pane_t7_ParamLimits

0x5c57,	// (0x00030ad2) main_cset_slider_pane_t8_ParamLimits

0x5c57,	// (0x00030ad2) main_cset_slider_pane_t8

0x5c7f,	// (0x00030afa) main_cset_slider_pane_t9_ParamLimits

0x5c7f,	// (0x00030afa) main_cset_slider_pane_t9

0x5ca7,	// (0x00030b22) main_cset_slider_pane_t10_ParamLimits

0x5ca7,	// (0x00030b22) main_cset_slider_pane_t10

0x5ccf,	// (0x00030b4a) main_cset_slider_pane_t11_ParamLimits

0x5ccf,	// (0x00030b4a) main_cset_slider_pane_t11

0x5cf9,	// (0x00030b74) main_cset_slider_pane_t12_ParamLimits

0x5cf9,	// (0x00030b74) main_cset_slider_pane_t12

0x5d16,	// (0x00030b91) main_cset_slider_pane_t13_ParamLimits

0x5d16,	// (0x00030b91) main_cset_slider_pane_t13

0xf88d,	// (0x0003a708) main_cset_slider_pane_t_ParamLimits

0xb57d,	// (0x000363f8) bg_popup_sub_pane_cp011

0x61cd,	// (0x00031048) main_cset_text_pane_g1

0x61d5,	// (0x00031050) main_cset_text_pane_t1

0x61e3,	// (0x0003105e) main_cset_text_pane_t2

0x61f1,	// (0x0003106c) main_cset_text_pane_t3

0x61ff,	// (0x0003107a) main_cset_text_pane_t4

0x620d,	// (0x00031088) main_cset_text_pane_t5

0x621b,	// (0x00031096) main_cset_text_pane_t6

0x6229,	// (0x000310a4) main_cset_text_pane_t7

0x0006,

0xf91a,	// (0x0003a795) main_cset_text_pane_t

0xb600,	// (0x0003647b) main_cam4_burst_pane

0xb600,	// (0x0003647b) main_cam5_pane

0x5920,	// (0x0003079b) bg_button_pane_cp019

0x5929,	// (0x000307a4) bg_button_pane_cp020

0x5ae0,	// (0x0003095b) main_cset_slider_pane_g7_ParamLimits

0x5ae0,	// (0x0003095b) main_cset_slider_pane_g7

0x5aec,	// (0x00030967) main_cset_slider_pane_g8_ParamLimits

0x5aec,	// (0x00030967) main_cset_slider_pane_g8

0x5af8,	// (0x00030973) main_cset_slider_pane_g9_ParamLimits

0x5af8,	// (0x00030973) main_cset_slider_pane_g9

0x5b04,	// (0x0003097f) main_cset_slider_pane_g10_ParamLimits

0x5b04,	// (0x0003097f) main_cset_slider_pane_g10

0x5b10,	// (0x0003098b) main_cset_slider_pane_g11_ParamLimits

0x5b10,	// (0x0003098b) main_cset_slider_pane_g11

0x5b1c,	// (0x00030997) main_cset_slider_pane_g12_ParamLimits

0x5b1c,	// (0x00030997) main_cset_slider_pane_g12

0x5b28,	// (0x000309a3) main_cset_slider_pane_g13_ParamLimits

0x5b28,	// (0x000309a3) main_cset_slider_pane_g13

0x5b34,	// (0x000309af) main_cset_slider_pane_g14_ParamLimits

0x5b34,	// (0x000309af) main_cset_slider_pane_g14

0x5b40,	// (0x000309bb) main_cset_slider_pane_g15_ParamLimits

0x5b40,	// (0x000309bb) main_cset_slider_pane_g15

0x5d35,	// (0x00030bb0) main_cset_slider_pane_t14_ParamLimits

0x5d35,	// (0x00030bb0) main_cset_slider_pane_t14

0x5d6e,	// (0x00030be9) main_cset_slider_pane_t15_ParamLimits

0x5d6e,	// (0x00030be9) main_cset_slider_pane_t15

0x6237,	// (0x000310b2) aid_cam4_burst_size_cell_ParamLimits

0x6237,	// (0x000310b2) aid_cam4_burst_size_cell

0x6257,	// (0x000310d2) grid_cam4_burst_pane_ParamLimits

0x6257,	// (0x000310d2) grid_cam4_burst_pane

0x6291,	// (0x0003110c) linegrid_cam4_burst_pane_ParamLimits

0x6291,	// (0x0003110c) linegrid_cam4_burst_pane

0x62b3,	// (0x0003112e) scroll_pane_cp30_ParamLimits

0x62b3,	// (0x0003112e) scroll_pane_cp30

0x62bf,	// (0x0003113a) cell_cam4_burst_pane_ParamLimits

0x62bf,	// (0x0003113a) cell_cam4_burst_pane

0x6314,	// (0x0003118f) linegrid_cam4_burst_pane_g1_ParamLimits

0x6314,	// (0x0003118f) linegrid_cam4_burst_pane_g1

0x6321,	// (0x0003119c) linegrid_cam4_burst_pane_g2_ParamLimits

0x6321,	// (0x0003119c) linegrid_cam4_burst_pane_g2

0x6332,	// (0x000311ad) linegrid_cam4_burst_pane_g3_ParamLimits

0x6332,	// (0x000311ad) linegrid_cam4_burst_pane_g3

0x0002,

0xf929,	// (0x0003a7a4) linegrid_cam4_burst_pane_g_ParamLimits

0xf929,	// (0x0003a7a4) linegrid_cam4_burst_pane_g

0x633f,	// (0x000311ba) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x633f,	// (0x000311ba) linegrid_cam4_burst_pane_g3_copy1

0x635d,	// (0x000311d8) linegrid_cam4_burst_pane_g4_ParamLimits

0x635d,	// (0x000311d8) linegrid_cam4_burst_pane_g4

0x636a,	// (0x000311e5) linegrid_cam4_burst_pane_g5_ParamLimits

0x636a,	// (0x000311e5) linegrid_cam4_burst_pane_g5

0x637b,	// (0x000311f6) linegrid_cam4_burst_pane_g6_ParamLimits

0x637b,	// (0x000311f6) linegrid_cam4_burst_pane_g6

0x6392,	// (0x0003120d) linegrid_cam4_burst_pane_g7_ParamLimits

0x6392,	// (0x0003120d) linegrid_cam4_burst_pane_g7

0x639f,	// (0x0003121a) cell_cam4_burst_pane_g1

0x63be,	// (0x00031239) main_cam5_pane_t1_ParamLimits

0x63be,	// (0x00031239) main_cam5_pane_t1

0x63d0,	// (0x0003124b) main_cam5_pane_t2_ParamLimits

0x63d0,	// (0x0003124b) main_cam5_pane_t2

0x63e2,	// (0x0003125d) main_cam5_pane_t3_ParamLimits

0x63e2,	// (0x0003125d) main_cam5_pane_t3

0x63f4,	// (0x0003126f) main_cam5_pane_t4_ParamLimits

0x63f4,	// (0x0003126f) main_cam5_pane_t4

0x640c,	// (0x00031287) main_cam5_pane_t5_ParamLimits

0x640c,	// (0x00031287) main_cam5_pane_t5

0x6420,	// (0x0003129b) main_cam5_pane_t6_ParamLimits

0x6420,	// (0x0003129b) main_cam5_pane_t6

0x6434,	// (0x000312af) main_cam5_pane_t7_ParamLimits

0x6434,	// (0x000312af) main_cam5_pane_t7

0x6446,	// (0x000312c1) main_cam5_pane_t8_ParamLimits

0x6446,	// (0x000312c1) main_cam5_pane_t8

0x6464,	// (0x000312df) main_cam5_pane_t9_ParamLimits

0x6464,	// (0x000312df) main_cam5_pane_t9

0x6476,	// (0x000312f1) main_cam5_pane_t10_ParamLimits

0x6476,	// (0x000312f1) main_cam5_pane_t10

0x6488,	// (0x00031303) main_cam5_pane_t11_ParamLimits

0x6488,	// (0x00031303) main_cam5_pane_t11

0x649c,	// (0x00031317) main_cam5_pane_t12_ParamLimits

0x649c,	// (0x00031317) main_cam5_pane_t12

0x64b3,	// (0x0003132e) main_cam5_pane_t13_ParamLimits

0x64b3,	// (0x0003132e) main_cam5_pane_t13

0x000c,

0xf935,	// (0x0003a7b0) main_cam5_pane_t_ParamLimits

0xf935,	// (0x0003a7b0) main_cam5_pane_t

0x0468,	// (0x0002b2e3) popup_scut_keymap_window_ParamLimits

0x0468,	// (0x0002b2e3) popup_scut_keymap_window

0x64d6,	// (0x00031351) aid_size_cell_brow_shortcut

0xc961,	// (0x000377dc) bg_popup_window_pane_cp010

0x64e2,	// (0x0003135d) grid_scut_pane

0x64ee,	// (0x00031369) cell_scut_pane_ParamLimits

0x64ee,	// (0x00031369) cell_scut_pane

0x6507,	// (0x00031382) cell_scut_pane_g1

0x6510,	// (0x0003138b) cell_scut_pane_t1

0x651f,	// (0x0003139a) cell_scut_pane_t2

0x652e,	// (0x000313a9) cell_scut_pane_t3

0x0002,

0xf950,	// (0x0003a7cb) cell_scut_pane_t

0x4a61,	// (0x0002f8dc) main_mup3_pane_g8_ParamLimits

0x4a61,	// (0x0002f8dc) main_mup3_pane_g8

0x12c6,	// (0x0002c141) area_vitu2_query_pane_ParamLimits

0x12c6,	// (0x0002c141) area_vitu2_query_pane

0x6079,	// (0x00030ef4) input_focus_pane_cp08

0x653c,	// (0x000313b7) area_vitu2_query_pane_g1

0x6548,	// (0x000313c3) area_vitu2_query_pane_g2

0x0001,

0xf957,	// (0x0003a7d2) area_vitu2_query_pane_g

0x655d,	// (0x000313d8) area_vitu2_query_pane_t1_ParamLimits

0x655d,	// (0x000313d8) area_vitu2_query_pane_t1

0x6571,	// (0x000313ec) area_vitu2_query_pane_t2_ParamLimits

0x6571,	// (0x000313ec) area_vitu2_query_pane_t2

0x6585,	// (0x00031400) area_vitu2_query_pane_t3_ParamLimits

0x6585,	// (0x00031400) area_vitu2_query_pane_t3

0x65b1,	// (0x0003142c) area_vitu2_query_pane_t4_ParamLimits

0x65b1,	// (0x0003142c) area_vitu2_query_pane_t4

0x65d9,	// (0x00031454) area_vitu2_query_pane_t5_ParamLimits

0x65d9,	// (0x00031454) area_vitu2_query_pane_t5

0x6601,	// (0x0003147c) area_vitu2_query_pane_t6_ParamLimits

0x6601,	// (0x0003147c) area_vitu2_query_pane_t6

0x0006,

0xf95c,	// (0x0003a7d7) area_vitu2_query_pane_t_ParamLimits

0xf95c,	// (0x0003a7d7) area_vitu2_query_pane_t

0x664d,	// (0x000314c8) bg_button_pane_cp018

0x6659,	// (0x000314d4) bg_button_pane_cp021

0x6665,	// (0x000314e0) bg_button_pane_cp022

0x6690,	// (0x0003150b) input_focus_pane_cp09

0x351f,	// (0x0002e39a) aid_size_touch_mv_arrow_left

0x3548,	// (0x0002e3c3) aid_size_touch_mv_arrow_right

0x5b58,	// (0x000309d3) main_cset_slider_pane_g16_ParamLimits

0x5b58,	// (0x000309d3) main_cset_slider_pane_g16

0x5b66,	// (0x000309e1) main_cset_slider_pane_g17_ParamLimits

0x5b66,	// (0x000309e1) main_cset_slider_pane_g17

0x639f,	// (0x0003121a) cell_cam4_burst_pane_g1_ParamLimits

0xb57d,	// (0x000363f8) compa_mode_pane

0x5e51,	// (0x00030ccc) popup_vtel_slider_window_g3_ParamLimits

0x5e51,	// (0x00030ccc) popup_vtel_slider_window_g3

0x5e68,	// (0x00030ce3) popup_vtel_slider_window_g4_ParamLimits

0x5e68,	// (0x00030ce3) popup_vtel_slider_window_g4

0x5e7f,	// (0x00030cfa) popup_vtel_slider_window_t1_ParamLimits

0x5e7f,	// (0x00030cfa) popup_vtel_slider_window_t1

0xb600,	// (0x0003647b) main_cl_pane

0xb8e6,	// (0x00036761) popup_imed_adjust2_window_ParamLimits

0xd329,	// (0x000381a4) bg_tb_trans_pane_cp05_ParamLimits

0xedbb,	// (0x00039c36) popup_imed_adjust2_window_g1_ParamLimits

0xedca,	// (0x00039c45) popup_imed_adjust2_window_g2_ParamLimits

0xedca,	// (0x00039c45) popup_imed_adjust2_window_g2

0xedd6,	// (0x00039c51) popup_imed_adjust2_window_g3_ParamLimits

0xedd6,	// (0x00039c51) popup_imed_adjust2_window_g3

0x0002,

0xf6d7,	// (0x0003a552) popup_imed_adjust2_window_g_ParamLimits

0xf6d7,	// (0x0003a552) popup_imed_adjust2_window_g

0xede2,	// (0x00039c5d) popup_imed_adjust2_window_t1_ParamLimits

0xedfa,	// (0x00039c75) slider_imed_adjust_pane_ParamLimits

0xee0e,	// (0x00039c89) slider_imed_adjust_pane_g1_ParamLimits

0xee1e,	// (0x00039c99) slider_imed_adjust_pane_g2_ParamLimits

0xee2e,	// (0x00039ca9) slider_imed_adjust_pane_g3_ParamLimits

0xee3f,	// (0x00039cba) slider_imed_adjust_pane_g4_ParamLimits

0xf6de,	// (0x0003a559) slider_imed_adjust_pane_g_ParamLimits

0x107a,	// (0x0002bef5) aid_touch_area_cam4_ParamLimits

0x107a,	// (0x0002bef5) aid_touch_area_cam4

0xbd1b,	// (0x00036b96) battery_pane_cp01

0x114d,	// (0x0002bfc8) main_camera4_pane_g6_ParamLimits

0x114d,	// (0x0002bfc8) main_camera4_pane_g6

0x1177,	// (0x0002bff2) main_camera4_pane_t2_ParamLimits

0x1177,	// (0x0002bff2) main_camera4_pane_t2

0x0001,

0xf7db,	// (0x0003a656) main_camera4_pane_t_ParamLimits

0xf7db,	// (0x0003a656) main_camera4_pane_t

0x1198,	// (0x0002c013) aid_touch_area_vid4_ParamLimits

0x1198,	// (0x0002c013) aid_touch_area_vid4

0x11ef,	// (0x0002c06a) main_video4_pane_g5_ParamLimits

0x11ef,	// (0x0002c06a) main_video4_pane_g5

0x1215,	// (0x0002c090) vid4_progress_pane_ParamLimits

0x1215,	// (0x0002c090) vid4_progress_pane

0x5b74,	// (0x000309ef) main_cset_slider_pane_g18_ParamLimits

0x5b74,	// (0x000309ef) main_cset_slider_pane_g18

0x63b2,	// (0x0003122d) cell_cam4_burst_pane_g2_ParamLimits

0x63b2,	// (0x0003122d) cell_cam4_burst_pane_g2

0x0001,

0xf930,	// (0x0003a7ab) cell_cam4_burst_pane_g_ParamLimits

0xf930,	// (0x0003a7ab) cell_cam4_burst_pane_g

0xc76d,	// (0x000375e8) bg_cl_pane_ParamLimits

0xc76d,	// (0x000375e8) bg_cl_pane

0x66a1,	// (0x0003151c) cl_header_pane_ParamLimits

0x66a1,	// (0x0003151c) cl_header_pane

0x66b5,	// (0x00031530) cl_listscroll_pane_ParamLimits

0x66b5,	// (0x00031530) cl_listscroll_pane

0x66c5,	// (0x00031540) bg_cl_pane_g1

0x66cd,	// (0x00031548) bg_cl_pane_g2

0x66d5,	// (0x00031550) bg_cl_pane_g3

0x66dd,	// (0x00031558) bg_cl_pane_g4

0x66e5,	// (0x00031560) bg_cl_pane_g5

0x66ed,	// (0x00031568) bg_cl_pane_g6

0x66f5,	// (0x00031570) bg_cl_pane_g7

0x66fd,	// (0x00031578) bg_cl_pane_g8

0x6705,	// (0x00031580) bg_cl_pane_g9

0x0008,

0xf96b,	// (0x0003a7e6) bg_cl_pane_g

0x670d,	// (0x00031588) aid_height_cl_leading_ParamLimits

0x670d,	// (0x00031588) aid_height_cl_leading

0x6719,	// (0x00031594) aid_height_cl_text_ParamLimits

0x6719,	// (0x00031594) aid_height_cl_text

0xc66a,	// (0x000374e5) bg_cl_header_pane_ParamLimits

0xc66a,	// (0x000374e5) bg_cl_header_pane

0x6738,	// (0x000315b3) cl_header_pane_g1_ParamLimits

0x6738,	// (0x000315b3) cl_header_pane_g1

0x674e,	// (0x000315c9) cl_header_pane_t1_ParamLimits

0x674e,	// (0x000315c9) cl_header_pane_t1

0x6767,	// (0x000315e2) cl_list_pane

0x5a31,	// (0x000308ac) hc_scroll_pane_cp01

0xcb6b,	// (0x000379e6) bg_cl_header_pane_g1

0x55cb,	// (0x00030446) bg_cl_header_pane_g2

0xcb8b,	// (0x00037a06) bg_cl_header_pane_g3

0x55db,	// (0x00030456) bg_cl_header_pane_g4

0x55d3,	// (0x0003044e) bg_cl_header_pane_g5

0x5f29,	// (0x00030da4) bg_cl_header_pane_g6

0x55f3,	// (0x0003046e) bg_cl_header_pane_g7

0x55fb,	// (0x00030476) bg_cl_header_pane_g8

0x55eb,	// (0x00030466) bg_cl_header_pane_g9

0x0008,

0xf97e,	// (0x0003a7f9) bg_cl_header_pane_g

0x6770,	// (0x000315eb) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6770,	// (0x000315eb) hc_cl_list_double_graphic_heading_pane

0x6783,	// (0x000315fe) hc_cl_list_single_graphic_pane_ParamLimits

0x6783,	// (0x000315fe) hc_cl_list_single_graphic_pane

0x679b,	// (0x00031616) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x679b,	// (0x00031616) hc_cl_list_single_graphic_pane_g1

0x67a7,	// (0x00031622) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x67a7,	// (0x00031622) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf991,	// (0x0003a80c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf991,	// (0x0003a80c) hc_cl_list_single_graphic_pane_g

0x67bb,	// (0x00031636) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x67bb,	// (0x00031636) hc_cl_list_single_graphic_pane_t1

0x679b,	// (0x00031616) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x679b,	// (0x00031616) hc_cl_list_double_graphic_heading_pane_g1

0x67d0,	// (0x0003164b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x67d0,	// (0x0003164b) hc_cl_list_double_graphic_heading_pane_g2

0x67e4,	// (0x0003165f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x67e4,	// (0x0003165f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf996,	// (0x0003a811) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf996,	// (0x0003a811) hc_cl_list_double_graphic_heading_pane_g

0x67f8,	// (0x00031673) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x67f8,	// (0x00031673) hc_cl_list_double_graphic_heading_pane_t1

0x680d,	// (0x00031688) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x680d,	// (0x00031688) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf99d,	// (0x0003a818) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf99d,	// (0x0003a818) hc_cl_list_double_graphic_heading_pane_t

0xbe69,	// (0x00036ce4) vid4_progress_pane_g1

0xbe79,	// (0x00036cf4) vid4_progress_pane_g2

0x170f,	// (0x0002c58a) vid4_progress_pane_g3

0xbe89,	// (0x00036d04) vid4_progress_pane_g4

0x0004,

0xf9a2,	// (0x0003a81d) vid4_progress_pane_g

0x1721,	// (0x0002c59c) vid4_progress_pane_t1

0xbea7,	// (0x00036d22) vid4_progress_pane_t2

0x0002,

0xf9ad,	// (0x0003a828) vid4_progress_pane_t

0x173b,	// (0x0002c5b6) wait_bar_pane_cp07

0xe6f9,	// (0x00039574) blid_firmament_pane_ParamLimits

0xe73c,	// (0x000395b7) popup_blid_sat_info2_window_g1

0xe760,	// (0x000395db) popup_blid_sat_info2_window_t3

0xe76e,	// (0x000395e9) popup_blid_sat_info2_window_t4

0xe77c,	// (0x000395f7) popup_blid_sat_info2_window_t5

0xe78a,	// (0x00039605) popup_blid_sat_info2_window_t6

0xe79a,	// (0x00039615) popup_blid_sat_info2_window_t7

0xe7a8,	// (0x00039623) popup_blid_sat_info2_window_t8

0xe7b6,	// (0x00039631) popup_blid_sat_info2_window_t9

0xe7c4,	// (0x0003963f) popup_blid_sat_info2_window_t10

0xe88b,	// (0x00039706) aid_firma_cardinal_ParamLimits

0xe89f,	// (0x0003971a) blid_firmament_pane_t1_ParamLimits

0xe8b6,	// (0x00039731) blid_firmament_pane_t2_ParamLimits

0xe8cd,	// (0x00039748) blid_firmament_pane_t3_ParamLimits

0xe8e4,	// (0x0003975f) blid_firmament_pane_t4_ParamLimits

0xf5d0,	// (0x0003a44b) blid_firmament_pane_t_ParamLimits

0xe8fb,	// (0x00039776) blid_sat_info_pane_ParamLimits

0xb5f2,	// (0x0003646d) main_cam_set_pane_ParamLimits

0x5146,	// (0x0002ffc1) aid_size_cell_colour_35_ParamLimits

0x5166,	// (0x0002ffe1) aid_size_cell_colour_112_ParamLimits

0x5186,	// (0x00030001) aid_size_cell_effect_ParamLimits

0xd329,	// (0x000381a4) bg_tb_trans_pane_cp02_ParamLimits

0x51a6,	// (0x00030021) heading_imed_pane_ParamLimits

0x51b2,	// (0x0003002d) listscroll_imed_pane_ParamLimits

0xdc2c,	// (0x00038aa7) popup_call2_audio_first_window_g5_ParamLimits

0xdc2c,	// (0x00038aa7) popup_call2_audio_first_window_g5

0x0cbb,	// (0x0002bb36) aid_size_touch_image3_arrow_left_ParamLimits

0x0cbb,	// (0x0002bb36) aid_size_touch_image3_arrow_left

0x0ce7,	// (0x0002bb62) aid_size_touch_image3_arrow_right_ParamLimits

0x0ce7,	// (0x0002bb62) aid_size_touch_image3_arrow_right

0xbec0,	// (0x00036d3b) vid4_progress_pane_t3

0x532f,	// (0x000301aa) main_hwr_training_symbol_option_pane_ParamLimits

0x532f,	// (0x000301aa) main_hwr_training_symbol_option_pane

0xef63,	// (0x00039dde) popup_hwr_training_preview_window_ParamLimits

0xef63,	// (0x00039dde) popup_hwr_training_preview_window

0x0bc3,	// (0x0002ba3e) hwr_training_navi_pane_g5_ParamLimits

0x0bc3,	// (0x0002ba3e) hwr_training_navi_pane_g5

0x55b9,	// (0x00030434) popup_char_count_window

0xb5f2,	// (0x0003646d) bg_popup_sub_pane_cp20_ParamLimits

0x1681,	// (0x0002c4fc) list_vitu2_match_list_pane_ParamLimits

0x168d,	// (0x0002c508) vitu2_page_scroll_pane_ParamLimits

0x168d,	// (0x0002c508) vitu2_page_scroll_pane

0x6858,	// (0x000316d3) list_single_hwr_training_symbol_option_pane_ParamLimits

0x6858,	// (0x000316d3) list_single_hwr_training_symbol_option_pane

0x686b,	// (0x000316e6) list_single_hwr_training_symbol_option_pane_g1

0x6873,	// (0x000316ee) list_single_hwr_training_symbol_option_pane_t1

0x6881,	// (0x000316fc) bg_button_pane_cp023

0x688a,	// (0x00031705) bg_button_pane_cp024

0x68bd,	// (0x00031738) vitu2_page_scroll_pane_g1

0x68c5,	// (0x00031740) vitu2_page_scroll_pane_g2

0x0001,

0xf9b4,	// (0x0003a82f) vitu2_page_scroll_pane_g

0x68cd,	// (0x00031748) vitu2_page_scroll_pane_t1

0x68dc,	// (0x00031757) popup_char_count_window_g1

0x68e5,	// (0x00031760) popup_char_count_window_g2

0x68ee,	// (0x00031769) popup_char_count_window_g3

0x0002,

0xf9b9,	// (0x0003a834) popup_char_count_window_g

0x68f7,	// (0x00031772) popup_char_count_window_t1

0xb600,	// (0x0003647b) main_vded2_pane

0xeda7,	// (0x00039c22) aid_size_cell_imed_line

0xedb1,	// (0x00039c2c) grid_imed_line_width_pane

0xbdd5,	// (0x00036c50) vid4_indicators_pane_g4

0x6905,	// (0x00031780) cell_imed_line_width_pane_ParamLimits

0x6905,	// (0x00031780) cell_imed_line_width_pane

0x691b,	// (0x00031796) cell_imed_line_width_pane_g1

0x6924,	// (0x0003179f) cell_imed_line_width_pane_g2

0x0001,

0xf9c0,	// (0x0003a83b) cell_imed_line_width_pane_g

0x692c,	// (0x000317a7) main_vded2_pane_g1_ParamLimits

0x692c,	// (0x000317a7) main_vded2_pane_g1

0x6947,	// (0x000317c2) main_vded2_pane_g2_ParamLimits

0x6947,	// (0x000317c2) main_vded2_pane_g2

0x0001,

0xf9c5,	// (0x0003a840) main_vded2_pane_g_ParamLimits

0xf9c5,	// (0x0003a840) main_vded2_pane_g

0x6959,	// (0x000317d4) vded2_slider_pane_ParamLimits

0x6959,	// (0x000317d4) vded2_slider_pane

0x6969,	// (0x000317e4) aid_size_touch_vded2_end

0x6973,	// (0x000317ee) aid_size_touch_vded2_playhead

0x697d,	// (0x000317f8) aid_size_touch_vded2_start

0x6985,	// (0x00031800) vded2_slider_bg_pane

0x698e,	// (0x00031809) vded2_slider_pane_g1

0x6997,	// (0x00031812) vded2_slider_pane_g2

0x699f,	// (0x0003181a) vded2_slider_pane_g3

0x0002,

0xf9ca,	// (0x0003a845) vded2_slider_pane_g

0x69aa,	// (0x00031825) vded2_slider_bg_pane_g1

0x69b3,	// (0x0003182e) vded2_slider_bg_pane_g2

0x69bc,	// (0x00031837) vded2_slider_bg_pane_g3

0x0002,

0xf9d1,	// (0x0003a84c) vded2_slider_bg_pane_g

0x3a14,	// (0x0002e88f) aid_postcard_touch_down_pane_ParamLimits

0x3a14,	// (0x0002e88f) aid_postcard_touch_down_pane

0x3a2c,	// (0x0002e8a7) aid_postcard_touch_up_pane_ParamLimits

0x3a2c,	// (0x0002e8a7) aid_postcard_touch_up_pane

0xb600,	// (0x0003647b) main_blid2_pane

0xb8c8,	// (0x00036743) popup_blid2_search_window

0xb57d,	// (0x000363f8) blid2_gps_pane

0xb57d,	// (0x000363f8) blid2_navig_pane

0xb57d,	// (0x000363f8) blid2_search_pane

0xb57d,	// (0x000363f8) blid2_tripm_pane

0x69c5,	// (0x00031840) blid2_search_pane_g1_ParamLimits

0x69c5,	// (0x00031840) blid2_search_pane_g1

0x69d8,	// (0x00031853) blid2_search_pane_t1_ParamLimits

0x69d8,	// (0x00031853) blid2_search_pane_t1

0x69ea,	// (0x00031865) aid_size_cell_blid2_gps_ParamLimits

0x69ea,	// (0x00031865) aid_size_cell_blid2_gps

0x6a02,	// (0x0003187d) blid2_gps_pane_g1_ParamLimits

0x6a02,	// (0x0003187d) blid2_gps_pane_g1

0x6a16,	// (0x00031891) grid_blid2_satellite_pane_ParamLimits

0x6a16,	// (0x00031891) grid_blid2_satellite_pane

0x6a2e,	// (0x000318a9) blid2_navig_pane_g1_ParamLimits

0x6a2e,	// (0x000318a9) blid2_navig_pane_g1

0x6a3a,	// (0x000318b5) blid2_navig_pane_t1_ParamLimits

0x6a3a,	// (0x000318b5) blid2_navig_pane_t1

0x6a55,	// (0x000318d0) blid2_navig_pane_t2_ParamLimits

0x6a55,	// (0x000318d0) blid2_navig_pane_t2

0x0001,

0xf9d8,	// (0x0003a853) blid2_navig_pane_t_ParamLimits

0xf9d8,	// (0x0003a853) blid2_navig_pane_t

0x6a70,	// (0x000318eb) blid2_navig_ring_pane_ParamLimits

0x6a70,	// (0x000318eb) blid2_navig_ring_pane

0x6a8b,	// (0x00031906) blid2_speed_pane_ParamLimits

0x6a8b,	// (0x00031906) blid2_speed_pane

0x6a97,	// (0x00031912) blid2_tripm_pane_g1_ParamLimits

0x6a97,	// (0x00031912) blid2_tripm_pane_g1

0x6ab2,	// (0x0003192d) blid2_tripm_pane_g2_ParamLimits

0x6ab2,	// (0x0003192d) blid2_tripm_pane_g2

0x6ac5,	// (0x00031940) blid2_tripm_pane_g3_ParamLimits

0x6ac5,	// (0x00031940) blid2_tripm_pane_g3

0x6ad6,	// (0x00031951) blid2_tripm_pane_g4_ParamLimits

0x6ad6,	// (0x00031951) blid2_tripm_pane_g4

0x6ae7,	// (0x00031962) blid2_tripm_pane_g5_ParamLimits

0x6ae7,	// (0x00031962) blid2_tripm_pane_g5

0x0005,

0xf9dd,	// (0x0003a858) blid2_tripm_pane_g_ParamLimits

0xf9dd,	// (0x0003a858) blid2_tripm_pane_g

0x6b0d,	// (0x00031988) blid2_tripm_pane_t1_ParamLimits

0x6b0d,	// (0x00031988) blid2_tripm_pane_t1

0x6b26,	// (0x000319a1) blid2_tripm_pane_t2_ParamLimits

0x6b26,	// (0x000319a1) blid2_tripm_pane_t2

0x6b3f,	// (0x000319ba) blid2_tripm_pane_t3_ParamLimits

0x6b3f,	// (0x000319ba) blid2_tripm_pane_t3

0x0003,

0xf9ea,	// (0x0003a865) blid2_tripm_pane_t_ParamLimits

0xf9ea,	// (0x0003a865) blid2_tripm_pane_t

0x6b86,	// (0x00031a01) cell_blid2_satellite_pane_ParamLimits

0x6b86,	// (0x00031a01) cell_blid2_satellite_pane

0x6ba2,	// (0x00031a1d) cell_blid2_satellite_pane_g1

0x6bab,	// (0x00031a26) cell_blid2_satellite_pane_t1

0xc70f,	// (0x0003758a) blid2_speed_pane_g1

0x6bb9,	// (0x00031a34) blid2_speed_pane_t1

0x6bc7,	// (0x00031a42) blid2_speed_pane_t2

0x0001,

0xf9f3,	// (0x0003a86e) blid2_speed_pane_t

0xc70f,	// (0x0003758a) blid2_navig_ring_pane_g1

0x6bd5,	// (0x00031a50) blid2_navig_ring_pane_g2

0x6bdd,	// (0x00031a58) blid2_navig_ring_pane_g3

0x6be5,	// (0x00031a60) blid2_navig_ring_pane_g4

0x6bed,	// (0x00031a68) blid2_navig_ring_pane_g5

0x0004,

0xf9f8,	// (0x0003a873) blid2_navig_ring_pane_g

0xb57d,	// (0x000363f8) bg_popup_window_pane_cp011

0x6bf5,	// (0x00031a70) popup_blid2_search_window_g1

0x6bfd,	// (0x00031a78) popup_blid2_search_window_t1

0x6c0b,	// (0x00031a86) popup_blid2_search_window_t2

0x0001,

0xfa03,	// (0x0003a87e) popup_blid2_search_window_t

0xca7a,	// (0x000378f5) main_browser_pane_g1

0xc76d,	// (0x000375e8) main_browser_pane_ParamLimits

0xb5f2,	// (0x0003646d) bg_button_pane_cp011_ParamLimits

0x15e5,	// (0x0002c460) cell_vitu2_function_pane_g1_ParamLimits

0xd329,	// (0x000381a4) bg_popup_sub_pane_cp22_ParamLimits

0x6079,	// (0x00030ef4) input_focus_pane_cp08_ParamLimits

0x6095,	// (0x00030f10) popup_vitu2_query_button_pane_ParamLimits

0x6095,	// (0x00030f10) popup_vitu2_query_button_pane

0x60a4,	// (0x00030f1f) popup_vitu2_query_input_button_pane

0x60ae,	// (0x00030f29) popup_vitu2_query_window_g1_ParamLimits

0x60ba,	// (0x00030f35) popup_vitu2_query_window_g2_ParamLimits

0xf904,	// (0x0003a77f) popup_vitu2_query_window_g_ParamLimits

0xb57d,	// (0x000363f8) bg_button_pane_cp026

0x6c19,	// (0x00031a94) popup_vitu2_query_input_button_pane_g1

0xb57d,	// (0x000363f8) bg_button_pane_cp025

0x6c21,	// (0x00031a9c) popup_vitu2_query_button_pane_t1

0x4649,	// (0x0002f4c4) main_mp3_pane_t6

0x4657,	// (0x0002f4d2) popup_slider_window_cp01

0xbd39,	// (0x00036bb4) cam4_battery_pane

0xbd8e,	// (0x00036c09) cam4_battery_pane_cp02

0xbe61,	// (0x00036cdc) cam4_battery_pane_cp01

0xbe61,	// (0x00036cdc) cam4_battery_pane_cp03

0x4578,	// (0x0002f3f3) cam4_battery_pane_g1

0xc70f,	// (0x0003758a) cam4_battery_pane_g2

0x0001,

0xfa08,	// (0x0003a883) cam4_battery_pane_g

0xe7d2,	// (0x0003964d) popup_blid_sat_info2_window_t11

0x351f,	// (0x0002e39a) aid_size_touch_mv_arrow_left_ParamLimits

0x3548,	// (0x0002e3c3) aid_size_touch_mv_arrow_right_ParamLimits

0xd1b0,	// (0x0003802b) navi_pane_g1_ParamLimits

0x3587,	// (0x0002e402) navi_pane_g2_ParamLimits

0x35b5,	// (0x0002e430) navi_pane_g3_ParamLimits

0xf30c,	// (0x0003a187) navi_pane_g_ParamLimits

0x360f,	// (0x0002e48a) navi_pane_mv_t1_ParamLimits

0x51be,	// (0x00030039) grid_imed_effect_pane_ParamLimits

0x2146,	// (0x0002cfc1) aid_placing_vt_slider_lsc

0xc9b8,	// (0x00037833) aid_placing_vt_slider_prt

0xc66a,	// (0x000374e5) bg_tb_trans_pane_cp01_ParamLimits

0xea3a,	// (0x000398b5) popup_image_details_window_g1_ParamLimits

0xea4d,	// (0x000398c8) popup_image_details_window_g2_ParamLimits

0xea62,	// (0x000398dd) popup_image_details_window_g3_ParamLimits

0xea62,	// (0x000398dd) popup_image_details_window_g3

0xf610,	// (0x0003a48b) popup_image_details_window_g_ParamLimits

0xea76,	// (0x000398f1) popup_image_details_window_t1_ParamLimits

0xea88,	// (0x00039903) popup_image_details_window_t2_ParamLimits

0xeaa1,	// (0x0003991c) popup_image_details_window_t3_ParamLimits

0xeab5,	// (0x00039930) popup_image_details_window_t4_ParamLimits

0xead0,	// (0x0003994b) popup_image_details_window_t5_ParamLimits

0xf617,	// (0x0003a492) popup_image_details_window_t_ParamLimits

0x6725,	// (0x000315a0) cl_header_name_pane_ParamLimits

0x6725,	// (0x000315a0) cl_header_name_pane

0x6c2f,	// (0x00031aaa) cl_header_name_pane_t1_ParamLimits

0x6c2f,	// (0x00031aaa) cl_header_name_pane_t1

0x6c50,	// (0x00031acb) cl_header_name_pane_t2_ParamLimits

0x6c50,	// (0x00031acb) cl_header_name_pane_t2

0x6c92,	// (0x00031b0d) cl_header_name_pane_t3_ParamLimits

0x6c92,	// (0x00031b0d) cl_header_name_pane_t3

0x0002,

0xfa0d,	// (0x0003a888) cl_header_name_pane_t_ParamLimits

0xfa0d,	// (0x0003a888) cl_header_name_pane_t

0x35e0,	// (0x0002e45b) navi_pane_mv_g2_ParamLimits

0x5555,	// (0x000303d0) field_vitu2_entry_pane_g1_ParamLimits

0x5561,	// (0x000303dc) field_vitu2_entry_pane_g2_ParamLimits

0xd307,	// (0x00038182) field_vitu2_entry_pane_g3_ParamLimits

0xd307,	// (0x00038182) field_vitu2_entry_pane_g3

0xf80d,	// (0x0003a688) field_vitu2_entry_pane_g_ParamLimits

0x1475,	// (0x0002c2f0) cell_vitu2_itu_pane_g1_ParamLimits

0x148d,	// (0x0002c308) cell_vitu2_itu_pane_g2_ParamLimits

0x148d,	// (0x0002c308) cell_vitu2_itu_pane_g2

0x0001,

0xf819,	// (0x0003a694) cell_vitu2_itu_pane_g_ParamLimits

0xf819,	// (0x0003a694) cell_vitu2_itu_pane_g

0xb5f2,	// (0x0003646d) bg_vkb2_func_pane_cp05_ParamLimits

0xb5f2,	// (0x0003646d) bg_vkb2_func_pane_cp05

0xb5f2,	// (0x0003646d) bg_vkb2_func_pane_cp03

0xb5f2,	// (0x0003646d) bg_vkb2_func_pane_cp04

0xb5f2,	// (0x0003646d) bg_vkb2_func_pane_cp10_ParamLimits

0xb5f2,	// (0x0003646d) bg_vkb2_func_pane_cp10

0x667a,	// (0x000314f5) bg_vkb2_func_pane_cp08

0x664d,	// (0x000314c8) bg_vkb2_func_pane_cp06

0x6659,	// (0x000314d4) bg_vkb2_func_pane_cp07

0x6893,	// (0x0003170e) bg_vkb2_func_pane_cp11_ParamLimits

0x6893,	// (0x0003170e) bg_vkb2_func_pane_cp11

0x68a8,	// (0x00031723) bg_vkb2_func_pane_cp12_ParamLimits

0x68a8,	// (0x00031723) bg_vkb2_func_pane_cp12

0xb57d,	// (0x000363f8) bg_vkb2_func_pane_cp09

0x55cb,	// (0x00030446) bg_vkb2_func_pane_g1

0xcb8b,	// (0x00037a06) bg_vkb2_func_pane_g2

0x55d3,	// (0x0003044e) bg_vkb2_func_pane_g3

0x55db,	// (0x00030456) bg_vkb2_func_pane_g4

0x5f29,	// (0x00030da4) bg_vkb2_func_pane_g5

0x55f3,	// (0x0003046e) bg_vkb2_func_pane_g6

0x55fb,	// (0x00030476) bg_vkb2_func_pane_g7

0x55eb,	// (0x00030466) bg_vkb2_func_pane_g8

0xcb6b,	// (0x000379e6) bg_vkb2_func_pane_g9

0x0008,

0xfa14,	// (0x0003a88f) bg_vkb2_func_pane_g

0x6afb,	// (0x00031976) blid2_tripm_pane_g6_ParamLimits

0x6afb,	// (0x00031976) blid2_tripm_pane_g6

0x53c2,	// (0x0003023d) mp4_progress_pane_g1

0x6b72,	// (0x000319ed) blid2_tripm_values_pane_ParamLimits

0x6b72,	// (0x000319ed) blid2_tripm_values_pane

0x6cc3,	// (0x00031b3e) blid2_tripm_values_pane_t1

0x6cd1,	// (0x00031b4c) blid2_tripm_values_pane_t2

0x6cdf,	// (0x00031b5a) blid2_tripm_values_pane_t3

0x6ced,	// (0x00031b68) blid2_tripm_values_pane_t4

0x6cfb,	// (0x00031b76) blid2_tripm_values_pane_t5

0x6d09,	// (0x00031b84) blid2_tripm_values_pane_t6

0x6d17,	// (0x00031b92) blid2_tripm_values_pane_t7

0x6d25,	// (0x00031ba0) blid2_tripm_values_pane_t8

0x6d33,	// (0x00031bae) blid2_tripm_values_pane_t9

0x0008,

0xfa27,	// (0x0003a8a2) blid2_tripm_values_pane_t

0x2185,	// (0x0002d000) call_video_pane_t1_ParamLimits

0x219f,	// (0x0002d01a) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x0003a035) call_video_pane_t_ParamLimits

0x3939,	// (0x0002e7b4) msg_header_pane_g1_ParamLimits

0xd3f7,	// (0x00038272) msg_header_pane_g2_ParamLimits

0xd3f7,	// (0x00038272) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x0003a225) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x0003a225) msg_header_pane_g

0xc76d,	// (0x000375e8) main_clock2_pane_ParamLimits

0x4f94,	// (0x0002fe0f) grid_clock2_toolbar_pane_ParamLimits

0x4f94,	// (0x0002fe0f) grid_clock2_toolbar_pane

0x4f94,	// (0x0002fe0f) listscroll_clock2_pane_ParamLimits

0x4f94,	// (0x0002fe0f) listscroll_clock2_pane

0x5070,	// (0x0002feeb) main_clock2_pane_t3_ParamLimits

0x5070,	// (0x0002feeb) main_clock2_pane_t3

0x5091,	// (0x0002ff0c) main_clock2_pane_t4_ParamLimits

0x5091,	// (0x0002ff0c) main_clock2_pane_t4

0x6d41,	// (0x00031bbc) cell_clock2_toolbar_pane

0x6d49,	// (0x00031bc4) cell_clock2_toolbar_pane_cp01

0x6d49,	// (0x00031bc4) cell_clock2_toolbar_pane_cp02

0x6d51,	// (0x00031bcc) cell_clock2_toolbar_pane_cp03

0x6d59,	// (0x00031bd4) list_clock2_pane

0xd116,	// (0x00037f91) scroll_pane_cp10

0x6d61,	// (0x00031bdc) list_single_clock2_pane_ParamLimits

0x6d61,	// (0x00031bdc) list_single_clock2_pane

0xc961,	// (0x000377dc) list_highlight_pane_cp08

0x6d6e,	// (0x00031be9) list_single_clock2_pane_t1

0x6d7c,	// (0x00031bf7) list_single_clock2_pane_t2

0x0001,

0xfa3a,	// (0x0003a8b5) list_single_clock2_pane_t

0xb57d,	// (0x000363f8) bg_button_pane_cp10

0x6d8a,	// (0x00031c05) cell_clock2_toolbar_pane_g1

0x0769,	// (0x0002b5e4) aid_main_viewer_pane_g1_ParamLimits

0x0769,	// (0x0002b5e4) aid_main_viewer_pane_g1

0x0777,	// (0x0002b5f2) aid_main_viewer_pane_g2_ParamLimits

0x0777,	// (0x0002b5f2) aid_main_viewer_pane_g2

0x39d8,	// (0x0002e853) aid_main_viewer_pane_g3_ParamLimits

0x39d8,	// (0x0002e853) aid_main_viewer_pane_g3

0x39e7,	// (0x0002e862) aid_main_viewer_pane_g4_ParamLimits

0x39e7,	// (0x0002e862) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x0003a236) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x0003a236) aid_main_viewer_pane_g

0x07ab,	// (0x0002b626) main_calc_pane_ParamLimits

0x07bf,	// (0x0002b63a) main_dialer2_pane_ParamLimits

0xb600,	// (0x0003647b) main_cam6_pane

0xb600,	// (0x0003647b) main_vid6_pane

0x4fa0,	// (0x0002fe1b) listscroll_gen_pane_cp06_ParamLimits

0x4fa0,	// (0x0002fe1b) listscroll_gen_pane_cp06

0x50b2,	// (0x0002ff2d) main_clock2_pane_t5_ParamLimits

0x50b2,	// (0x0002ff2d) main_clock2_pane_t5

0x5110,	// (0x0002ff8b) aid_call2_pane_cp10_ParamLimits

0x5122,	// (0x0002ff9d) aid_call_pane_cp10_ParamLimits

0xd185,	// (0x00038000) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd185,	// (0x00038000) popup_clock_analogue_window_cp10_g2_ParamLimits

0x0ae5,	// (0x0002b960) popup_clock_analogue_window_cp10_g3_ParamLimits

0x0ae5,	// (0x0002b960) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd185,	// (0x00038000) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6cc,	// (0x0003a547) popup_clock_analogue_window_cp10_g_ParamLimits

0x0afb,	// (0x0002b976) popup_clock_analogue_window_cp10_t1_ParamLimits

0x546c,	// (0x000302e7) cell_dialer2_keypad_pane_g2_ParamLimits

0x546c,	// (0x000302e7) cell_dialer2_keypad_pane_g2

0x0001,

0xf7ac,	// (0x0003a627) cell_dialer2_keypad_pane_g_ParamLimits

0xf7ac,	// (0x0003a627) cell_dialer2_keypad_pane_g

0xc719,	// (0x00037594) cell_dialer2_keypad_pane_t1

0x5a0b,	// (0x00030886) main_cset_text2_pane_ParamLimits

0x5a0b,	// (0x00030886) main_cset_text2_pane

0x653c,	// (0x000313b7) area_vitu2_query_pane_g1_ParamLimits

0x6548,	// (0x000313c3) area_vitu2_query_pane_g2_ParamLimits

0xf957,	// (0x0003a7d2) area_vitu2_query_pane_g_ParamLimits

0x6629,	// (0x000314a4) area_vitu2_query_pane_t7_ParamLimits

0x6629,	// (0x000314a4) area_vitu2_query_pane_t7

0x664d,	// (0x000314c8) bg_button_pane_cp018_ParamLimits

0x6659,	// (0x000314d4) bg_button_pane_cp021_ParamLimits

0x6665,	// (0x000314e0) bg_button_pane_cp022_ParamLimits

0x667a,	// (0x000314f5) bg_vkb2_func_pane_cp08_ParamLimits

0x664d,	// (0x000314c8) bg_vkb2_func_pane_cp06_ParamLimits

0x6659,	// (0x000314d4) bg_vkb2_func_pane_cp07_ParamLimits

0x6690,	// (0x0003150b) input_focus_pane_cp09_ParamLimits

0xbed5,	// (0x00036d50) cam6_autofocus_pane_ParamLimits

0xbed5,	// (0x00036d50) cam6_autofocus_pane

0x174e,	// (0x0002c5c9) cam6_image_uncrop_pane_ParamLimits

0x174e,	// (0x0002c5c9) cam6_image_uncrop_pane

0x175e,	// (0x0002c5d9) cam6_indi_pane_ParamLimits

0x175e,	// (0x0002c5d9) cam6_indi_pane

0x1774,	// (0x0002c5ef) cam6_mode_pane_ParamLimits

0x1774,	// (0x0002c5ef) cam6_mode_pane

0x1786,	// (0x0002c601) cam6_timer_pane_ParamLimits

0x1786,	// (0x0002c601) cam6_timer_pane

0x1792,	// (0x0002c60d) cam6_zoom_pane_ParamLimits

0x1792,	// (0x0002c60d) cam6_zoom_pane

0x6d92,	// (0x00031c0d) cam6_mode_pane_g1_ParamLimits

0x6d92,	// (0x00031c0d) cam6_mode_pane_g1

0x6da2,	// (0x00031c1d) cam6_mode_pane_g2_ParamLimits

0x6da2,	// (0x00031c1d) cam6_mode_pane_g2

0x6db2,	// (0x00031c2d) cam6_mode_pane_g3_ParamLimits

0x6db2,	// (0x00031c2d) cam6_mode_pane_g3

0x6dc2,	// (0x00031c3d) cam6_mode_pane_g4_ParamLimits

0x6dc2,	// (0x00031c3d) cam6_mode_pane_g4

0x0003,

0xfa3f,	// (0x0003a8ba) cam6_mode_pane_g_ParamLimits

0xfa3f,	// (0x0003a8ba) cam6_mode_pane_g

0xefe7,	// (0x00039e62) bg_tb_trans_pane_cp08_ParamLimits

0xefe7,	// (0x00039e62) bg_tb_trans_pane_cp08

0x6dd2,	// (0x00031c4d) cam6_battery_pane_ParamLimits

0x6dd2,	// (0x00031c4d) cam6_battery_pane

0x6de8,	// (0x00031c63) cam6_indi_pane_g1_ParamLimits

0x6de8,	// (0x00031c63) cam6_indi_pane_g1

0x6dfa,	// (0x00031c75) cam6_indi_pane_g2_ParamLimits

0x6dfa,	// (0x00031c75) cam6_indi_pane_g2

0x6e0c,	// (0x00031c87) cam6_indi_pane_g3_ParamLimits

0x6e0c,	// (0x00031c87) cam6_indi_pane_g3

0x0002,

0xfa48,	// (0x0003a8c3) cam6_indi_pane_g_ParamLimits

0xfa48,	// (0x0003a8c3) cam6_indi_pane_g

0x6e1e,	// (0x00031c99) cam6_indi_pane_t1_ParamLimits

0x6e1e,	// (0x00031c99) cam6_indi_pane_t1

0x5526,	// (0x000303a1) cam6_autofocus_pane_g1

0x551e,	// (0x00030399) cam6_autofocus_pane_g2

0x5536,	// (0x000303b1) cam6_autofocus_pane_g3

0x552e,	// (0x000303a9) cam6_autofocus_pane_g4

0x0003,

0xfa4f,	// (0x0003a8ca) cam6_autofocus_pane_g

0x6e44,	// (0x00031cbf) cam6_timer_pane_g1

0x6e4c,	// (0x00031cc7) cam6_timer_pane_t1

0x6e5a,	// (0x00031cd5) cam6_zoom_cont_pane

0x6e62,	// (0x00031cdd) cam6_zoom_pane_g1

0x6e6b,	// (0x00031ce6) cam6_zoom_pane_g2

0x6e74,	// (0x00031cef) cam6_zoom_pane_g3

0x0002,

0xfa58,	// (0x0003a8d3) cam6_zoom_pane_g

0xc70f,	// (0x0003758a) cam6_battery_pane_g1

0xc70f,	// (0x0003758a) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00039f07) cam6_battery_pane_g

0x6e62,	// (0x00031cdd) cam6_zoom_cont_pane_g1

0x6e6b,	// (0x00031ce6) cam6_zoom_cont_pane_g2

0x6e7d,	// (0x00031cf8) cam6_zoom_cont_pane_g3

0x0002,

0xfa5f,	// (0x0003a8da) cam6_zoom_cont_pane_g

0x6e9a,	// (0x00031d15) cam6_mode_pane_cp_ParamLimits

0x6e9a,	// (0x00031d15) cam6_mode_pane_cp

0x6eac,	// (0x00031d27) cam6_zoom_pane_cp_ParamLimits

0x6eac,	// (0x00031d27) cam6_zoom_pane_cp

0x6eba,	// (0x00031d35) vid6_image_uncrop_cif_pane_ParamLimits

0x6eba,	// (0x00031d35) vid6_image_uncrop_cif_pane

0x6eca,	// (0x00031d45) vid6_image_uncrop_nhd_pane_ParamLimits

0x6eca,	// (0x00031d45) vid6_image_uncrop_nhd_pane

0x6ee9,	// (0x00031d64) vid6_image_uncrop_vga_pane_ParamLimits

0x6ee9,	// (0x00031d64) vid6_image_uncrop_vga_pane

0x6ef8,	// (0x00031d73) vid6_image_uncrop_wvga_pane_ParamLimits

0x6ef8,	// (0x00031d73) vid6_image_uncrop_wvga_pane

0x6f07,	// (0x00031d82) vid6_indi_pane_ParamLimits

0x6f07,	// (0x00031d82) vid6_indi_pane

0xefe7,	// (0x00039e62) bg_tb_trans_pane_cp09_ParamLimits

0xefe7,	// (0x00039e62) bg_tb_trans_pane_cp09

0x6f1f,	// (0x00031d9a) cam6_battery_pane_cp_ParamLimits

0x6f1f,	// (0x00031d9a) cam6_battery_pane_cp

0x6f2b,	// (0x00031da6) vid6_indi_pane_g1_ParamLimits

0x6f2b,	// (0x00031da6) vid6_indi_pane_g1

0x6f3d,	// (0x00031db8) vid6_indi_pane_g2_ParamLimits

0x6f3d,	// (0x00031db8) vid6_indi_pane_g2

0x6f4f,	// (0x00031dca) vid6_indi_pane_g3_ParamLimits

0x6f4f,	// (0x00031dca) vid6_indi_pane_g3

0x6f66,	// (0x00031de1) vid6_indi_pane_g4_ParamLimits

0x6f66,	// (0x00031de1) vid6_indi_pane_g4

0x6f7d,	// (0x00031df8) vid6_indi_pane_g5_ParamLimits

0x6f7d,	// (0x00031df8) vid6_indi_pane_g5

0x0004,

0xfa66,	// (0x0003a8e1) vid6_indi_pane_g_ParamLimits

0xfa66,	// (0x0003a8e1) vid6_indi_pane_g

0x6f97,	// (0x00031e12) vid6_indi_pane_t1_ParamLimits

0x6f97,	// (0x00031e12) vid6_indi_pane_t1

0x6fad,	// (0x00031e28) vid6_indi_pane_t2_ParamLimits

0x6fad,	// (0x00031e28) vid6_indi_pane_t2

0x6fd5,	// (0x00031e50) vid6_indi_pane_t3_ParamLimits

0x6fd5,	// (0x00031e50) vid6_indi_pane_t3

0x6ffd,	// (0x00031e78) vid6_indi_pane_t4_ParamLimits

0x6ffd,	// (0x00031e78) vid6_indi_pane_t4

0x0003,

0xfa71,	// (0x0003a8ec) vid6_indi_pane_t_ParamLimits

0xfa71,	// (0x0003a8ec) vid6_indi_pane_t

0x7021,	// (0x00031e9c) wait_bar_pane_cp08

0x7030,	// (0x00031eab) main_cset_text2_pane_t1_ParamLimits

0x7030,	// (0x00031eab) main_cset_text2_pane_t1

0x6e85,	// (0x00031d00) listscroll_gen_pane_cp06_t1_ParamLimits

0x6e85,	// (0x00031d00) listscroll_gen_pane_cp06_t1

0xb600,	// (0x0003647b) main_cam6_set_pane

0x5510,	// (0x0003038b) bg_tb_trans_pane_cp06_ParamLimits

0xbd41,	// (0x00036bbc) cam4_indicators_pane_g1_ParamLimits

0xbd52,	// (0x00036bcd) cam4_indicators_pane_g2_ParamLimits

0xf7e9,	// (0x0003a664) cam4_indicators_pane_g_ParamLimits

0xbd6a,	// (0x00036be5) cam4_indicators_pane_t1_ParamLimits

0xb5f2,	// (0x0003646d) bg_tb_trans_pane_cp07_ParamLimits

0xbd98,	// (0x00036c13) vid4_indicators_pane_g1_ParamLimits

0xbdae,	// (0x00036c29) vid4_indicators_pane_g2_ParamLimits

0xbdc2,	// (0x00036c3d) vid4_indicators_pane_g3_ParamLimits

0xbdd5,	// (0x00036c50) vid4_indicators_pane_g4_ParamLimits

0xf7fb,	// (0x0003a676) vid4_indicators_pane_g_ParamLimits

0xbdf3,	// (0x00036c6e) vid4_indicators_pane_t1_ParamLimits

0xbe69,	// (0x00036ce4) vid4_progress_pane_g1_ParamLimits

0xbe79,	// (0x00036cf4) vid4_progress_pane_g2_ParamLimits

0x170f,	// (0x0002c58a) vid4_progress_pane_g3_ParamLimits

0xbe89,	// (0x00036d04) vid4_progress_pane_g4_ParamLimits

0xf9a2,	// (0x0003a81d) vid4_progress_pane_g_ParamLimits

0x1721,	// (0x0002c59c) vid4_progress_pane_t1_ParamLimits

0xbea7,	// (0x00036d22) vid4_progress_pane_t2_ParamLimits

0xbec0,	// (0x00036d3b) vid4_progress_pane_t3_ParamLimits

0xf9ad,	// (0x0003a828) vid4_progress_pane_t_ParamLimits

0x173b,	// (0x0002c5b6) wait_bar_pane_cp07_ParamLimits

0x7051,	// (0x00031ecc) main_cam6_set_pane_g2_ParamLimits

0x7051,	// (0x00031ecc) main_cam6_set_pane_g2

0x7077,	// (0x00031ef2) main_cset6_listscroll_pane_ParamLimits

0x7077,	// (0x00031ef2) main_cset6_listscroll_pane

0x7095,	// (0x00031f10) main_cset6_slider_pane_ParamLimits

0x7095,	// (0x00031f10) main_cset6_slider_pane

0x70ab,	// (0x00031f26) main_cset6_text2_pane_ParamLimits

0x70ab,	// (0x00031f26) main_cset6_text2_pane

0x70b9,	// (0x00031f34) main_cset6_text_pane

0x70c1,	// (0x00031f3c) main_cset_list_pane_copy1_ParamLimits

0x70c1,	// (0x00031f3c) main_cset_list_pane_copy1

0x70d1,	// (0x00031f4c) scroll_pane_cp028_copy1

0x70da,	// (0x00031f55) cset_list_set_pane_copy1

0x70ee,	// (0x00031f69) aid_position_infowindow_above_copy1

0x70f6,	// (0x00031f71) aid_position_infowindow_below_copy1

0x70fe,	// (0x00031f79) cset_list_set_pane_g1_copy1

0x7106,	// (0x00031f81) cset_list_set_pane_g3_copy1_ParamLimits

0x7106,	// (0x00031f81) cset_list_set_pane_g3_copy1

0x7115,	// (0x00031f90) cset_list_set_pane_t1_copy1_ParamLimits

0x7115,	// (0x00031f90) cset_list_set_pane_t1_copy1

0xc66a,	// (0x000374e5) list_highlight_pane_cp021_copy1_ParamLimits

0xc66a,	// (0x000374e5) list_highlight_pane_cp021_copy1

0x712a,	// (0x00031fa5) cset6_slider_pane_ParamLimits

0x712a,	// (0x00031fa5) cset6_slider_pane

0x7156,	// (0x00031fd1) main_cset6_slider_pane_g1_ParamLimits

0x7156,	// (0x00031fd1) main_cset6_slider_pane_g1

0x717e,	// (0x00031ff9) main_cset6_slider_pane_g2_ParamLimits

0x717e,	// (0x00031ff9) main_cset6_slider_pane_g2

0x71a6,	// (0x00032021) main_cset6_slider_pane_g3_ParamLimits

0x71a6,	// (0x00032021) main_cset6_slider_pane_g3

0x71b2,	// (0x0003202d) main_cset6_slider_pane_g4_ParamLimits

0x71b2,	// (0x0003202d) main_cset6_slider_pane_g4

0x71be,	// (0x00032039) main_cset6_slider_pane_g5_ParamLimits

0x71be,	// (0x00032039) main_cset6_slider_pane_g5

0x5ae0,	// (0x0003095b) main_cset6_slider_pane_g7_ParamLimits

0x5ae0,	// (0x0003095b) main_cset6_slider_pane_g7

0x5aec,	// (0x00030967) main_cset6_slider_pane_g8_ParamLimits

0x5aec,	// (0x00030967) main_cset6_slider_pane_g8

0x5af8,	// (0x00030973) main_cset6_slider_pane_g9_ParamLimits

0x5af8,	// (0x00030973) main_cset6_slider_pane_g9

0x5b04,	// (0x0003097f) main_cset6_slider_pane_g10_ParamLimits

0x5b04,	// (0x0003097f) main_cset6_slider_pane_g10

0x5b10,	// (0x0003098b) main_cset6_slider_pane_g11_ParamLimits

0x5b10,	// (0x0003098b) main_cset6_slider_pane_g11

0x5b1c,	// (0x00030997) main_cset6_slider_pane_g12_ParamLimits

0x5b1c,	// (0x00030997) main_cset6_slider_pane_g12

0x5b28,	// (0x000309a3) main_cset6_slider_pane_g13_ParamLimits

0x5b28,	// (0x000309a3) main_cset6_slider_pane_g13

0x5b34,	// (0x000309af) main_cset6_slider_pane_g14_ParamLimits

0x5b34,	// (0x000309af) main_cset6_slider_pane_g14

0x71cc,	// (0x00032047) main_cset6_slider_pane_g15_ParamLimits

0x71cc,	// (0x00032047) main_cset6_slider_pane_g15

0x5b58,	// (0x000309d3) main_cset6_slider_pane_g16_ParamLimits

0x5b58,	// (0x000309d3) main_cset6_slider_pane_g16

0x5b66,	// (0x000309e1) main_cset6_slider_pane_g17_ParamLimits

0x5b66,	// (0x000309e1) main_cset6_slider_pane_g17

0x0011,

0xfa7a,	// (0x0003a8f5) main_cset6_slider_pane_g_ParamLimits

0xfa7a,	// (0x0003a8f5) main_cset6_slider_pane_g

0x71fc,	// (0x00032077) main_cset6_slider_pane_t1_ParamLimits

0x71fc,	// (0x00032077) main_cset6_slider_pane_t1

0x723d,	// (0x000320b8) main_cset6_slider_pane_t2_ParamLimits

0x723d,	// (0x000320b8) main_cset6_slider_pane_t2

0x7268,	// (0x000320e3) main_cset6_slider_pane_t3_ParamLimits

0x7268,	// (0x000320e3) main_cset6_slider_pane_t3

0x7293,	// (0x0003210e) main_cset6_slider_pane_t4_ParamLimits

0x7293,	// (0x0003210e) main_cset6_slider_pane_t4

0x72be,	// (0x00032139) main_cset6_slider_pane_t5_ParamLimits

0x72be,	// (0x00032139) main_cset6_slider_pane_t5

0x72eb,	// (0x00032166) main_cset6_slider_pane_t7_ParamLimits

0x72eb,	// (0x00032166) main_cset6_slider_pane_t7

0x7321,	// (0x0003219c) main_cset6_slider_pane_t8_ParamLimits

0x7321,	// (0x0003219c) main_cset6_slider_pane_t8

0x7345,	// (0x000321c0) main_cset6_slider_pane_t9_ParamLimits

0x7345,	// (0x000321c0) main_cset6_slider_pane_t9

0x7369,	// (0x000321e4) main_cset6_slider_pane_t10_ParamLimits

0x7369,	// (0x000321e4) main_cset6_slider_pane_t10

0x738d,	// (0x00032208) main_cset6_slider_pane_t11_ParamLimits

0x738d,	// (0x00032208) main_cset6_slider_pane_t11

0x73b3,	// (0x0003222e) main_cset6_slider_pane_t14_ParamLimits

0x73b3,	// (0x0003222e) main_cset6_slider_pane_t14

0x73ec,	// (0x00032267) main_cset6_slider_pane_t15_ParamLimits

0x73ec,	// (0x00032267) main_cset6_slider_pane_t15

0x000b,

0xfa9f,	// (0x0003a91a) main_cset6_slider_pane_t_ParamLimits

0xfa9f,	// (0x0003a91a) main_cset6_slider_pane_t

0x7425,	// (0x000322a0) cset_slider_pane_g1_copy1

0x742e,	// (0x000322a9) cset_slider_pane_g2_copy1

0x7437,	// (0x000322b2) cset_slider_pane_g3_copy1

0xb57d,	// (0x000363f8) bg_popup_sub_pane_cp011_copy1

0x7466,	// (0x000322e1) main_cset_text_pane_g1_copy1

0x61d5,	// (0x00031050) main_cset_text_pane_t1_copy1

0x61e3,	// (0x0003105e) main_cset_text_pane_t2_copy1

0x61f1,	// (0x0003106c) main_cset_text_pane_t3_copy1

0x61ff,	// (0x0003107a) main_cset_text_pane_t4_copy1

0x620d,	// (0x00031088) main_cset_text_pane_t5_copy1

0x746e,	// (0x000322e9) main_cset_text_pane_t6_copy1

0x747c,	// (0x000322f7) main_cset_text_pane_t7_copy1

0x7030,	// (0x00031eab) main_cset_text2_pane_t1_copy1

0xb5f2,	// (0x0003646d) main_ncimui_pane

0x0a4d,	// (0x0002b8c8) popup_query_ncimui_window_ParamLimits

0x0a4d,	// (0x0002b8c8) popup_query_ncimui_window

0xeb71,	// (0x000399ec) field_cale_ev2_pane_g4_ParamLimits

0xeb71,	// (0x000399ec) field_cale_ev2_pane_g4

0x539c,	// (0x00030217) cell_video_dialer_keypad_pane_g2_ParamLimits

0x539c,	// (0x00030217) cell_video_dialer_keypad_pane_g2

0x0001,

0xf783,	// (0x0003a5fe) cell_video_dialer_keypad_pane_g_ParamLimits

0xf783,	// (0x0003a5fe) cell_video_dialer_keypad_pane_g

0x53b4,	// (0x0003022f) cell_video_dialer_keypad_pane_t1

0xb57d,	// (0x000363f8) bg_popup_window_pane_cp012

0xd00f,	// (0x00037e8a) heading_pane_cp06

0x75d1,	// (0x0003244c) ncim_query_content_pane

0xb57d,	// (0x000363f8) bg_popup_heading_pane_cp01

0x75d9,	// (0x00032454) ncim_heading_pane_t1

0x75e7,	// (0x00032462) ncim_indicator_popup_pane

0x75f9,	// (0x00032474) ncim_query_button_pane

0x761b,	// (0x00032496) ncim_query_content_pane_t1

0x762d,	// (0x000324a8) ncim_query_content_pane_t2

0x0005,

0xfae3,	// (0x0003a95e) ncim_query_content_pane_t

0x76df,	// (0x0003255a) ncim_query_list_pane

0x76f1,	// (0x0003256c) ncim_query_popup_pane

0x75e7,	// (0x00032462) ncim_indicator_popup_pane_ParamLimits

0x7601,	// (0x0003247c) ncim_query_content_pane_g1_ParamLimits

0x7601,	// (0x0003247c) ncim_query_content_pane_g1

0x761b,	// (0x00032496) ncim_query_content_pane_t1_ParamLimits

0x762d,	// (0x000324a8) ncim_query_content_pane_t2_ParamLimits

0x763f,	// (0x000324ba) ncim_query_content_pane_t3_ParamLimits

0x763f,	// (0x000324ba) ncim_query_content_pane_t3

0x7667,	// (0x000324e2) ncim_query_content_pane_t4_ParamLimits

0x7667,	// (0x000324e2) ncim_query_content_pane_t4

0x768f,	// (0x0003250a) ncim_query_content_pane_t5_ParamLimits

0x768f,	// (0x0003250a) ncim_query_content_pane_t5

0x76b7,	// (0x00032532) ncim_query_content_pane_t6_ParamLimits

0x76b7,	// (0x00032532) ncim_query_content_pane_t6

0xfae3,	// (0x0003a95e) ncim_query_content_pane_t_ParamLimits

0x76df,	// (0x0003255a) ncim_query_list_pane_ParamLimits

0x76f1,	// (0x0003256c) ncim_query_popup_pane_ParamLimits

0x7705,	// (0x00032580) wait_bar_pane_cp04

0xb57d,	// (0x000363f8) input_focus_pane_cp011

0x770d,	// (0x00032588) ncim_query_popup_pane_t1

0x771b,	// (0x00032596) ncim_list_query_list_pane_ParamLimits

0x771b,	// (0x00032596) ncim_list_query_list_pane

0xb57d,	// (0x000363f8) bg_button_pane_cp027

0x772e,	// (0x000325a9) ncim_query_button_pane_g1

0xb57d,	// (0x000363f8) list_highlight_pane_cp012

0x7738,	// (0x000325b3) ncim_list_query_list_pane_g1

0x7740,	// (0x000325bb) ncim_list_query_list_pane_t1

0xbd5e,	// (0x00036bd9) cam4_indicators_pane_g3_ParamLimits

0xbd5e,	// (0x00036bd9) cam4_indicators_pane_g3

0xbde1,	// (0x00036c5c) vid4_indicators_pane_g5_ParamLimits

0xbde1,	// (0x00036c5c) vid4_indicators_pane_g5

0xbe98,	// (0x00036d13) vid4_progress_pane_g5_ParamLimits

0xbe98,	// (0x00036d13) vid4_progress_pane_g5

0x74bc,	// (0x00032337) main_ncimui_pane_g1

0x7525,	// (0x000323a0) ncimui_group_query_pane_ParamLimits

0x7525,	// (0x000323a0) ncimui_group_query_pane

0x756d,	// (0x000323e8) ncimui_list_pane_ParamLimits

0x756d,	// (0x000323e8) ncimui_list_pane

0x7594,	// (0x0003240f) ncimui_text_pane_ParamLimits

0x7594,	// (0x0003240f) ncimui_text_pane

0x774e,	// (0x000325c9) ncimui_text_pane_t1_ParamLimits

0x774e,	// (0x000325c9) ncimui_text_pane_t1

0x776c,	// (0x000325e7) ncimui_list_single_graphic_pane_ParamLimits

0x776c,	// (0x000325e7) ncimui_list_single_graphic_pane

0x777c,	// (0x000325f7) ncimui_query_pane_ParamLimits

0x777c,	// (0x000325f7) ncimui_query_pane

0xb57d,	// (0x000363f8) list_highlight_pane_cp013

0x778f,	// (0x0003260a) ncim_list_query_list_pane_t1_copy1

0x7738,	// (0x000325b3) ncim_list_single_graphic_pane_g1

0x779d,	// (0x00032618) ncim_query_button_pane_cp01

0x77a9,	// (0x00032624) ncim_query_entry_pane_ParamLimits

0x77a9,	// (0x00032624) ncim_query_entry_pane

0x77bc,	// (0x00032637) ncimui_query_pane_g1

0x77c8,	// (0x00032643) ncimui_query_pane_t1_ParamLimits

0x77c8,	// (0x00032643) ncimui_query_pane_t1

0xc66a,	// (0x000374e5) input_focus_pane_cp012

0x77e1,	// (0x0003265c) ncim_query_entry_pane_t1

0xc76d,	// (0x000375e8) main_im_pane_ParamLimits

0xb5f2,	// (0x0003646d) main_mobtv_pane_ParamLimits

0xb5f2,	// (0x0003646d) main_mobtv_pane

0x71e4,	// (0x0003205f) main_cset6_slider_pane_g18_ParamLimits

0x71e4,	// (0x0003205f) main_cset6_slider_pane_g18

0x71f0,	// (0x0003206b) main_cset6_slider_pane_g19_ParamLimits

0x71f0,	// (0x0003206b) main_cset6_slider_pane_g19

0xc6ed,	// (0x00037568) bg_main_mobtv_pane_ParamLimits

0xc6ed,	// (0x00037568) bg_main_mobtv_pane

0x77f3,	// (0x0003266e) main_mobtv_info_pane

0x77fe,	// (0x00032679) main_mobtv_loading_pane_ParamLimits

0x77fe,	// (0x00032679) main_mobtv_loading_pane

0x780b,	// (0x00032686) main_mobtv_pg_channel_list_pane

0x7815,	// (0x00032690) main_mobtv_pg_hdr_pane

0x781e,	// (0x00032699) main_mobtv_programe_curr_pane_ParamLimits

0x781e,	// (0x00032699) main_mobtv_programe_curr_pane

0x782b,	// (0x000326a6) main_mobtv_programe_next_pane_ParamLimits

0x782b,	// (0x000326a6) main_mobtv_programe_next_pane

0x7838,	// (0x000326b3) popup_mobtv_noti_window

0xc70f,	// (0x0003758a) main_tv_pg_hdr_pane_g1

0x7842,	// (0x000326bd) main_tv_pg_hdr_pane_g2

0x784a,	// (0x000326c5) main_tv_pg_hdr_pane_g3

0x7852,	// (0x000326cd) main_tv_pg_hdr_pane_g4

0x785a,	// (0x000326d5) main_tv_pg_hdr_pane_g5

0x7864,	// (0x000326df) main_tv_pg_hdr_pane_g6

0x786e,	// (0x000326e9) main_tv_pg_hdr_pane_g7

0x7878,	// (0x000326f3) main_tv_pg_hdr_pane_g8

0x7882,	// (0x000326fd) main_tv_pg_hdr_pane_g9

0x788c,	// (0x00032707) main_tv_pg_hdr_pane_g10

0x7896,	// (0x00032711) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf0,	// (0x0003a96b) main_tv_pg_hdr_pane_g

0x78a0,	// (0x0003271b) main_tv_pg_hdr_pane_t1

0x78ae,	// (0x00032729) main_tv_pg_hdr_pane_t2

0x78bc,	// (0x00032737) main_tv_pg_hdr_pane_t3

0x78cc,	// (0x00032747) main_tv_pg_hdr_pane_t4

0x78dc,	// (0x00032757) main_tv_pg_hdr_pane_t5

0x0004,

0xfb07,	// (0x0003a982) main_tv_pg_hdr_pane_t

0x78ec,	// (0x00032767) single_mobtv_pg_channel_pane_ParamLimits

0x78ec,	// (0x00032767) single_mobtv_pg_channel_pane

0x78fe,	// (0x00032779) single_mobtv_pg_channel_table_pane

0x7907,	// (0x00032782) single_mobtv_pg_channel_thumb_pane

0x7910,	// (0x0003278b) single_tv_pg_channel_pane_g1

0x7919,	// (0x00032794) single_tv_pg_channel_pane_g2

0x0001,

0xfb12,	// (0x0003a98d) single_tv_pg_channel_pane_g

0xc6d1,	// (0x0003754c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc6d1,	// (0x0003754c) bg_single_mobtv_pg_channel_thumb_pane

0x7922,	// (0x0003279d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x7922,	// (0x0003279d) single_mobtv_pg_channel_thumb_pane_g1

0x7930,	// (0x000327ab) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x7930,	// (0x000327ab) single_mobtv_pg_channel_thumb_pane_g2

0x793c,	// (0x000327b7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x793c,	// (0x000327b7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb17,	// (0x0003a992) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb17,	// (0x0003a992) single_mobtv_pg_channel_thumb_pane_g

0x7948,	// (0x000327c3) single_mobtv_pg_channel_thumb_pane_t1

0x7956,	// (0x000327d1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb1e,	// (0x0003a999) single_mobtv_pg_channel_thumb_pane_t

0xc70f,	// (0x0003758a) bg_single_mobtv_pg_channel_table_pane_g1

0xc70f,	// (0x0003758a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00039f07) bg_single_mobtv_pg_channel_table_pane_g

0x7964,	// (0x000327df) single_mobtv_pg_channel_table_pane_t1

0x7972,	// (0x000327ed) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb23,	// (0x0003a99e) single_mobtv_pg_channel_table_pane_t

0x7988,	// (0x00032803) main_mobtv_info_pane_g1_ParamLimits

0x7988,	// (0x00032803) main_mobtv_info_pane_g1

0x79a6,	// (0x00032821) main_mobtv_info_pane_t1_ParamLimits

0x79a6,	// (0x00032821) main_mobtv_info_pane_t1

0x7a1e,	// (0x00032899) main_mobtv_info_pane_t2_ParamLimits

0x7a1e,	// (0x00032899) main_mobtv_info_pane_t2

0x0002,

0xfb2d,	// (0x0003a9a8) main_mobtv_info_pane_t_ParamLimits

0xfb2d,	// (0x0003a9a8) main_mobtv_info_pane_t

0x7aaf,	// (0x0003292a) wait_bar_pane_cp05

0x7ac1,	// (0x0003293c) main_mobtv_loading_pane_g1_ParamLimits

0x7ac1,	// (0x0003293c) main_mobtv_loading_pane_g1

0x7ad2,	// (0x0003294d) main_mobtv_loading_pane_g2_ParamLimits

0x7ad2,	// (0x0003294d) main_mobtv_loading_pane_g2

0x7ade,	// (0x00032959) main_mobtv_loading_pane_g3_ParamLimits

0x7ade,	// (0x00032959) main_mobtv_loading_pane_g3

0x0002,

0xfb34,	// (0x0003a9af) main_mobtv_loading_pane_g_ParamLimits

0xfb34,	// (0x0003a9af) main_mobtv_loading_pane_g

0x7af1,	// (0x0003296c) main_mobtv_loading_pane_t1_ParamLimits

0x7af1,	// (0x0003296c) main_mobtv_loading_pane_t1

0x7b09,	// (0x00032984) main_mobtv_loading_pane_t2_ParamLimits

0x7b09,	// (0x00032984) main_mobtv_loading_pane_t2

0x0001,

0xfb3b,	// (0x0003a9b6) main_mobtv_loading_pane_t_ParamLimits

0xfb3b,	// (0x0003a9b6) main_mobtv_loading_pane_t

0x7b2d,	// (0x000329a8) wait_bar_pane_cp06_ParamLimits

0x7b2d,	// (0x000329a8) wait_bar_pane_cp06

0x7b3c,	// (0x000329b7) main_mobtv_programe_curr_pane_t1

0x7b4a,	// (0x000329c5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb40,	// (0x0003a9bb) main_mobtv_programe_curr_pane_t

0x7b58,	// (0x000329d3) main_mobtv_programe_next_pane_t1

0x7b66,	// (0x000329e1) main_mobtv_programe_next_pane_t2

0x7b74,	// (0x000329ef) main_mobtv_programe_next_pane_t3

0x0002,

0xfb45,	// (0x0003a9c0) main_mobtv_programe_next_pane_t

0xb57d,	// (0x000363f8) bg_popup_mobtv_noti_window_pane

0x7b82,	// (0x000329fd) popup_mobtv_noti_window_g1

0x7b8a,	// (0x00032a05) popup_mobtv_noti_window_t1

0x7b98,	// (0x00032a13) popup_mobtv_noti_window_t2

0x0001,

0xfb4c,	// (0x0003a9c7) popup_mobtv_noti_window_t

0xc70f,	// (0x0003758a) bg_popup_mobtv_noti_window_pane_g1

0xb600,	// (0x0003647b) sc_clock_pane

0xb600,	// (0x0003647b) main_fs_bigclock_pane

0x6b5c,	// (0x000319d7) blid2_tripm_pane_t4_ParamLimits

0x6b5c,	// (0x000319d7) blid2_tripm_pane_t4

0xc6d1,	// (0x0003754c) sc_clock_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) sc_clock_pane_g1

0xc719,	// (0x00037594) sc_clock_pane_t1_ParamLimits

0xc719,	// (0x00037594) sc_clock_pane_t1

0xc719,	// (0x00037594) sc_clock_pane_t2_ParamLimits

0xc719,	// (0x00037594) sc_clock_pane_t2

0xc719,	// (0x00037594) sc_clock_pane_t3_ParamLimits

0xc719,	// (0x00037594) sc_clock_pane_t3

0x0004,

0xfb51,	// (0x0003a9cc) sc_clock_pane_t_ParamLimits

0xfb51,	// (0x0003a9cc) sc_clock_pane_t

0x926f,	// (0x000340ea) main_fs_bigclock_indicator_pane_ParamLimits

0x926f,	// (0x000340ea) main_fs_bigclock_indicator_pane

0x7c17,	// (0x00032a92) main_fs_bigclock_pane_g1_ParamLimits

0x7c17,	// (0x00032a92) main_fs_bigclock_pane_g1

0x927b,	// (0x000340f6) main_fs_bigclock_pane_t1_ParamLimits

0x927b,	// (0x000340f6) main_fs_bigclock_pane_t1

0x928d,	// (0x00034108) main_fs_bigclock_pane_t2_ParamLimits

0x928d,	// (0x00034108) main_fs_bigclock_pane_t2

0x92a1,	// (0x0003411c) main_fs_bigclock_pane_t3_ParamLimits

0x92a1,	// (0x0003411c) main_fs_bigclock_pane_t3

0x0002,

0xfcda,	// (0x0003ab55) main_fs_bigclock_pane_t_ParamLimits

0xfcda,	// (0x0003ab55) main_fs_bigclock_pane_t

0x92b3,	// (0x0003412e) main_fs_bigclock_indicator_pane_g1

0x760d,	// (0x00032488) ncim_query_content_pane_g2_ParamLimits

0x760d,	// (0x00032488) ncim_query_content_pane_g2

0x0001,

0xfade,	// (0x0003a959) ncim_query_content_pane_g_ParamLimits

0xfade,	// (0x0003a959) ncim_query_content_pane_g

0xc719,	// (0x00037594) sc_clock_pane_t4_ParamLimits

0xc719,	// (0x00037594) sc_clock_pane_t4

0xb5f2,	// (0x0003646d) main_radioblah_pane

0xbce9,	// (0x00036b64) cell_call4_button_pane_t1_copy1_ParamLimits

0xbce9,	// (0x00036b64) cell_call4_button_pane_t1_copy1

0x74d4,	// (0x0003234f) main_ncimui_pane_t1_ParamLimits

0x74d4,	// (0x0003234f) main_ncimui_pane_t1

0x74ee,	// (0x00032369) main_ncimui_pane_t2_ParamLimits

0x74ee,	// (0x00032369) main_ncimui_pane_t2

0x0002,

0xfad7,	// (0x0003a952) main_ncimui_pane_t_ParamLimits

0xfad7,	// (0x0003a952) main_ncimui_pane_t

0xd329,	// (0x000381a4) main_radioblah_anim_pane_ParamLimits

0xd329,	// (0x000381a4) main_radioblah_anim_pane

0xd329,	// (0x000381a4) main_radioblah_info_pane_ParamLimits

0xd329,	// (0x000381a4) main_radioblah_info_pane

0xd315,	// (0x00038190) main_radioblah_pane_t1_ParamLimits

0xd315,	// (0x00038190) main_radioblah_pane_t1

0xd315,	// (0x00038190) main_radioblah_pane_t2_ParamLimits

0xd315,	// (0x00038190) main_radioblah_pane_t2

0x0003,

0xfb72,	// (0x0003a9ed) main_radioblah_pane_t_ParamLimits

0xfb72,	// (0x0003a9ed) main_radioblah_pane_t

0xc66a,	// (0x000374e5) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc66a,	// (0x000374e5) main_radioblah_rocker_ctrl_pane

0xeff5,	// (0x00039e70) main_radioblah_info_pane_t1_ParamLimits

0xeff5,	// (0x00039e70) main_radioblah_info_pane_t1

0x7dde,	// (0x00032c59) main_radioblah_info_pane_t2_ParamLimits

0x7dde,	// (0x00032c59) main_radioblah_info_pane_t2

0x0003,

0xfb7b,	// (0x0003a9f6) main_radioblah_info_pane_t_ParamLimits

0xfb7b,	// (0x0003a9f6) main_radioblah_info_pane_t

0xc70f,	// (0x0003758a) main_radioblah_rocker_ctrl_pane_g1

0xc70f,	// (0x0003758a) main_radioblah_rocker_ctrl_pane_g2

0xc70f,	// (0x0003758a) main_radioblah_rocker_ctrl_pane_g3

0xc70f,	// (0x0003758a) main_radioblah_rocker_ctrl_pane_g4

0xc70f,	// (0x0003758a) main_radioblah_rocker_ctrl_pane_g5

0xc70f,	// (0x0003758a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb84,	// (0x0003a9ff) main_radioblah_rocker_ctrl_pane_g

0x7030,	// (0x00031eab) main_cset_text2_pane_t1_copy1_ParamLimits

0xbd2f,	// (0x00036baa) cam4_image_uncrop_qvga_pane

0xbd84,	// (0x00036bff) vid4_image_uncrop_qcif_pane

0xbed5,	// (0x00036d50) cam6_image_uncrop_qvga_pane_ParamLimits

0xbed5,	// (0x00036d50) cam6_image_uncrop_qvga_pane

0x6ed9,	// (0x00031d54) vid6_image_uncrop_qcif_pane_ParamLimits

0x6ed9,	// (0x00031d54) vid6_image_uncrop_qcif_pane

0xb57d,	// (0x000363f8) bg_popup_preview_window_pane_cp03

0x748a,	// (0x00032305) list_cset_text2_pane

0x7492,	// (0x0003230d) main_cset6_text2_pane_g1

0x749a,	// (0x00032315) main_cset6_text2_pane_t1

0x7e2d,	// (0x00032ca8) list_cset_text2_pane_t1_ParamLimits

0x7e2d,	// (0x00032ca8) list_cset_text2_pane_t1

0xb5f2,	// (0x0003646d) main_radioblah_pane_ParamLimits

0x7a9b,	// (0x00032916) main_mobtv_info_pane_t3_ParamLimits

0x7a9b,	// (0x00032916) main_mobtv_info_pane_t3

0xd307,	// (0x00038182) main_radioblah_pane_g1

0x7dae,	// (0x00032c29) main_radioblah_info_pane_g1

0xc72d,	// (0x000375a8) main_radioblah_info_pane_t3_ParamLimits

0xc72d,	// (0x000375a8) main_radioblah_info_pane_t3

0x3110,	// (0x0002df8b) highlight_cell_cale_month_pane_ParamLimits

0x3110,	// (0x0002df8b) highlight_cell_cale_month_pane

0xb600,	// (0x0003647b) main_phob_fisheye_pane

0xebf1,	// (0x00039a6c) scroll_pane_cp0031_ParamLimits

0xebf1,	// (0x00039a6c) scroll_pane_cp0031

0x7021,	// (0x00031e9c) wait_bar_pane_cp08_ParamLimits

0x70da,	// (0x00031f55) cset_list_set_pane_copy1_ParamLimits

0x7e47,	// (0x00032cc2) highlight_cell_cale_month_pane_g1

0x7e4f,	// (0x00032cca) highlight_cell_cale_month_pane_t1

0x6767,	// (0x000315e2) list_gen_pane_cp01

0x5a31,	// (0x000308ac) scroll_pane_01

0x7e5d,	// (0x00032cd8) list_single_double_fisheye_pane

0x7e66,	// (0x00032ce1) list_double_fisheye_pane_g1_ParamLimits

0x7e66,	// (0x00032ce1) list_double_fisheye_pane_g1

0x7e72,	// (0x00032ced) list_double_fisheye_pane_g2_ParamLimits

0x7e72,	// (0x00032ced) list_double_fisheye_pane_g2

0x7e86,	// (0x00032d01) list_double_fisheye_pane_g3_ParamLimits

0x7e86,	// (0x00032d01) list_double_fisheye_pane_g3

0x0004,

0xfb91,	// (0x0003aa0c) list_double_fisheye_pane_g_ParamLimits

0xfb91,	// (0x0003aa0c) list_double_fisheye_pane_g

0x7eaf,	// (0x00032d2a) list_double_fisheye_pane_t1_ParamLimits

0x7eaf,	// (0x00032d2a) list_double_fisheye_pane_t1

0x7eca,	// (0x00032d45) list_double_fisheye_pane_t2_ParamLimits

0x7eca,	// (0x00032d45) list_double_fisheye_pane_t2

0x0001,

0xfb9c,	// (0x0003aa17) list_double_fisheye_pane_t_ParamLimits

0xfb9c,	// (0x0003aa17) list_double_fisheye_pane_t

0xb600,	// (0x0003647b) main_call5_pane

0xc66a,	// (0x000374e5) sc_swipe_pane_ParamLimits

0xc66a,	// (0x000374e5) sc_swipe_pane

0x7eff,	// (0x00032d7a) call5_image_pane_ParamLimits

0x7eff,	// (0x00032d7a) call5_image_pane

0x7f1c,	// (0x00032d97) call5_swipe_1_pane_ParamLimits

0x7f1c,	// (0x00032d97) call5_swipe_1_pane

0x7f2f,	// (0x00032daa) call5_swipe_2_pane_ParamLimits

0x7f2f,	// (0x00032daa) call5_swipe_2_pane

0x7f5a,	// (0x00032dd5) popup_call5_audio_first_window_ParamLimits

0x7f5a,	// (0x00032dd5) popup_call5_audio_first_window

0xc6d1,	// (0x0003754c) call5_swipe_1_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) call5_swipe_1_pane_g1

0x7f6f,	// (0x00032dea) call5_swipe_1_pane_g2_ParamLimits

0x7f6f,	// (0x00032dea) call5_swipe_1_pane_g2

0x0001,

0xfba1,	// (0x0003aa1c) call5_swipe_1_pane_g_ParamLimits

0xfba1,	// (0x0003aa1c) call5_swipe_1_pane_g

0x7f7b,	// (0x00032df6) call5_swipe_1_pane_t1_ParamLimits

0x7f7b,	// (0x00032df6) call5_swipe_1_pane_t1

0xc6d1,	// (0x0003754c) call5_swipe_2_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) call5_swipe_2_pane_g1

0x7f90,	// (0x00032e0b) call5_swipe_2_pane_g2_ParamLimits

0x7f90,	// (0x00032e0b) call5_swipe_2_pane_g2

0x0001,

0xfba6,	// (0x0003aa21) call5_swipe_2_pane_g_ParamLimits

0xfba6,	// (0x0003aa21) call5_swipe_2_pane_g

0x7f9c,	// (0x00032e17) call5_swipe_2_pane_t1_ParamLimits

0x7f9c,	// (0x00032e17) call5_swipe_2_pane_t1

0xc6d1,	// (0x0003754c) sc_swipe_pane_g1_ParamLimits

0xc6d1,	// (0x0003754c) sc_swipe_pane_g1

0xc6df,	// (0x0003755a) sc_swipe_pane_g2_ParamLimits

0xc6df,	// (0x0003755a) sc_swipe_pane_g2

0x0001,

0xf71f,	// (0x0003a59a) sc_swipe_pane_g_ParamLimits

0xf71f,	// (0x0003a59a) sc_swipe_pane_g

0xc719,	// (0x00037594) sc_swipe_pane_t1_ParamLimits

0xc719,	// (0x00037594) sc_swipe_pane_t1

0xb600,	// (0x0003647b) main_cmail_launcher_pane

0x7fb1,	// (0x00032e2c) aid_size_cell_cmail_l_ParamLimits

0x7fb1,	// (0x00032e2c) aid_size_cell_cmail_l

0x7fc6,	// (0x00032e41) grid_cmail_l_pane_ParamLimits

0x7fc6,	// (0x00032e41) grid_cmail_l_pane

0x7fe0,	// (0x00032e5b) cell_cmail_l_pane_ParamLimits

0x7fe0,	// (0x00032e5b) cell_cmail_l_pane

0x8001,	// (0x00032e7c) cell_cmail_l_pane_g1_ParamLimits

0x8001,	// (0x00032e7c) cell_cmail_l_pane_g1

0x800d,	// (0x00032e88) cell_cmail_l_pane_t1_ParamLimits

0x800d,	// (0x00032e88) cell_cmail_l_pane_t1

0x8023,	// (0x00032e9e) cell_cmail_l_pane_t2_ParamLimits

0x8023,	// (0x00032e9e) cell_cmail_l_pane_t2

0x0001,

0xfbab,	// (0x0003aa26) cell_cmail_l_pane_t_ParamLimits

0xfbab,	// (0x0003aa26) cell_cmail_l_pane_t

0xc66a,	// (0x000374e5) grid_highlight_pane_cp018_ParamLimits

0xc66a,	// (0x000374e5) grid_highlight_pane_cp018

0x034e,	// (0x0002b1c9) main2_pane_ParamLimits

0x034e,	// (0x0002b1c9) main2_pane

0xc805,	// (0x00037680) popup_sp_fs_action_menu_bg_pane_g1

0xc80d,	// (0x00037688) popup_sp_fs_action_menu_bg_pane_g2

0xc815,	// (0x00037690) popup_sp_fs_action_menu_bg_pane_g3

0xc81d,	// (0x00037698) popup_sp_fs_action_menu_bg_pane_g4

0xc825,	// (0x000376a0) popup_sp_fs_action_menu_bg_pane_g5

0xc82d,	// (0x000376a8) popup_sp_fs_action_menu_bg_pane_g6

0xc835,	// (0x000376b0) popup_sp_fs_action_menu_bg_pane_g7

0xc83d,	// (0x000376b8) popup_sp_fs_action_menu_bg_pane_g8

0xc845,	// (0x000376c0) popup_sp_fs_action_menu_bg_pane_g9

0xc84d,	// (0x000376c8) popup_sp_fs_action_menu_bg_pane_g10

0xc84d,	// (0x000376c8) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x00039f58) popup_sp_fs_action_menu_bg_pane_g

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g3_g1

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g3_g2

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x0003a006) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x0003a006) list_medium_line_x2_t3_g3_g

0xc719,	// (0x00037594) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t3_g3_t1

0xc719,	// (0x00037594) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t3_g3_t2

0xc719,	// (0x00037594) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x0003a00d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x0003a00d) list_medium_line_x2_t3_g3_t

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g2_g1

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0003a014) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0003a014) list_medium_line_x2_t3_g2_g

0xc719,	// (0x00037594) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t3_g2_t1

0xc719,	// (0x00037594) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t3_g2_t2

0xc719,	// (0x00037594) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x0003a00d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x0003a00d) list_medium_line_x2_t3_g2_t

0xc6d1,	// (0x0003754c) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t4_g4_g1

0xc6d1,	// (0x0003754c) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t4_g4_g2

0xc6d1,	// (0x0003754c) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t4_g4_g3

0xc6d1,	// (0x0003754c) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x0003a019) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x0003a019) list_medium_line_x2_t4_g4_g

0xc719,	// (0x00037594) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t4_g4_t1

0xc719,	// (0x00037594) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t4_g4_t2

0xc719,	// (0x00037594) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t4_g4_t3

0xc719,	// (0x00037594) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x0003a022) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x0003a022) list_medium_line_x2_t4_g4_t

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g4_g1

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g4_g2

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g4_g3

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x0003a019) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x0003a019) list_medium_line_x2_t2_g4_g

0xc719,	// (0x00037594) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t2_g4_t1

0xc719,	// (0x00037594) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x00039fe9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x00039fe9) list_medium_line_x2_t2_g4_t

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g3_g1

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g3_g2

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x0003a006) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x0003a006) list_medium_line_x2_t2_g3_g

0xc719,	// (0x00037594) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t2_g3_t1

0xc719,	// (0x00037594) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x00039fe9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x00039fe9) list_medium_line_x2_t2_g3_t

0x324d,	// (0x0002e0c8) main_sp_fs_list_pane_ParamLimits

0x324d,	// (0x0002e0c8) main_sp_fs_list_pane

0x3259,	// (0x0002e0d4) sp_fs_scroll_pane_ParamLimits

0x3259,	// (0x0002e0d4) sp_fs_scroll_pane

0xce88,	// (0x00037d03) list_medium_line_x2_t3_t1

0xce88,	// (0x00037d03) list_medium_line_x2_t3_t2

0xce88,	// (0x00037d03) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x0003a0cf) list_medium_line_x2_t3_t

0xce88,	// (0x00037d03) list_medium_line_x3_t4_t1

0xce88,	// (0x00037d03) list_medium_line_x3_t4_t2

0xce88,	// (0x00037d03) list_medium_line_x3_t4_t3

0xce88,	// (0x00037d03) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x0003a0d6) list_medium_line_x3_t4_t

0xce88,	// (0x00037d03) list_medium_line_x4_t5_t1

0xce88,	// (0x00037d03) list_medium_line_x4_t5_t2

0xce88,	// (0x00037d03) list_medium_line_x4_t5_t3

0xce88,	// (0x00037d03) list_medium_line_x4_t5_t4

0xce88,	// (0x00037d03) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x0003a0df) list_medium_line_x4_t5_t

0xc6d1,	// (0x0003754c) list_medium_line_t4_g4_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t4_g4_g1

0xc6d1,	// (0x0003754c) list_medium_line_t4_g4_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t4_g4_g2

0xc6d1,	// (0x0003754c) list_medium_line_t4_g4_g3_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t4_g4_g3

0xc6d1,	// (0x0003754c) list_medium_line_t4_g4_g4_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x0003a019) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x0003a019) list_medium_line_t4_g4_g

0xc719,	// (0x00037594) list_medium_line_t4_g4_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t4_g4_t1

0xc719,	// (0x00037594) list_medium_line_t4_g4_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t4_g4_t2

0xc719,	// (0x00037594) list_medium_line_t4_g4_t3_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t4_g4_t3

0xc719,	// (0x00037594) list_medium_line_t4_g4_t4_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x0003a022) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x0003a022) list_medium_line_t4_g4_t

0x3307,	// (0x0002e182) chi_dic_find_pane_g1

0x07d3,	// (0x0002b64e) main_tport_pane

0xce88,	// (0x00037d03) list_medium_line_plain_t1

0xc6d1,	// (0x0003754c) list_medium_line_t2_g2_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t2_g2_g1

0xc6d1,	// (0x0003754c) list_medium_line_t2_g2_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0003a014) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0003a014) list_medium_line_t2_g2_g

0xc719,	// (0x00037594) list_medium_line_t2_g2_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t2_g2_t1

0xc719,	// (0x00037594) list_medium_line_t2_g2_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x00039fe9) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x00039fe9) list_medium_line_t2_g2_t

0x6822,	// (0x0003169d) aid_sp_fs_list_icon_a_sm

0x682a,	// (0x000316a5) aid_sp_fs_list_icon_d

0x6832,	// (0x000316ad) aid_sp_fs_text_primary

0x683b,	// (0x000316b6) aid_sp_fs_text_secondary

0xb57d,	// (0x000363f8) list_medium_line

0xb57d,	// (0x000363f8) list_medium_line_g2

0xb57d,	// (0x000363f8) list_medium_line_g3

0xb57d,	// (0x000363f8) list_medium_line_plain

0xb57d,	// (0x000363f8) list_medium_line_plain_t2

0xb57d,	// (0x000363f8) list_medium_line_plain_t3

0xb57d,	// (0x000363f8) list_medium_line_right_icon

0xb57d,	// (0x000363f8) list_medium_line_right_iconx2

0xb57d,	// (0x000363f8) list_medium_line_t2

0xb57d,	// (0x000363f8) list_medium_line_t2_g2

0xb57d,	// (0x000363f8) list_medium_line_t2_g3

0xb57d,	// (0x000363f8) list_medium_line_t2_right_icon

0xb57d,	// (0x000363f8) list_medium_line_t2_right_iconx2

0xb57d,	// (0x000363f8) list_medium_line_t3

0xb57d,	// (0x000363f8) list_medium_line_t3_g2

0xb57d,	// (0x000363f8) list_medium_line_t3_g3

0xb57d,	// (0x000363f8) list_medium_line_t3_right_iconx2

0xb57d,	// (0x000363f8) list_medium_line_t4_g4

0xb57d,	// (0x000363f8) list_medium_line_x2

0xb57d,	// (0x000363f8) list_medium_line_x2_t2_g2

0xb57d,	// (0x000363f8) list_medium_line_x2_t2_g3

0xb57d,	// (0x000363f8) list_medium_line_x2_t2_g4

0xb57d,	// (0x000363f8) list_medium_line_x2_t3

0xb57d,	// (0x000363f8) list_medium_line_x2_t3_g2

0xb57d,	// (0x000363f8) list_medium_line_x2_t3_g3

0xb57d,	// (0x000363f8) list_medium_line_x2_t3_g4

0xb57d,	// (0x000363f8) list_medium_line_x2_t4_g2

0xb57d,	// (0x000363f8) list_medium_line_x2_t4_g4

0xb57d,	// (0x000363f8) list_medium_line_x3

0xb57d,	// (0x000363f8) list_medium_line_x3_t4

0xb57d,	// (0x000363f8) list_medium_line_x3_t4_g4

0xb57d,	// (0x000363f8) list_medium_line_x4_t4

0xb57d,	// (0x000363f8) list_medium_line_x4_t4_g7

0xb57d,	// (0x000363f8) list_medium_line_x4_t5

0x6844,	// (0x000316bf) list_single_fs_dyc_pane_ParamLimits

0x6844,	// (0x000316bf) list_single_fs_dyc_pane

0xc6d1,	// (0x0003754c) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x4_t4_g7_g1

0xc6d1,	// (0x0003754c) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x4_t4_g7_g2

0xc6d1,	// (0x0003754c) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x4_t4_g7_g3

0xc6d1,	// (0x0003754c) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x4_t4_g7_g4

0xc6d1,	// (0x0003754c) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x4_t4_g7_g5

0xc6d1,	// (0x0003754c) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x4_t4_g7_g6

0xc6df,	// (0x0003755a) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc6df,	// (0x0003755a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfab8,	// (0x0003a933) list_medium_line_x4_t4_g7_g_ParamLimits

0xfab8,	// (0x0003a933) list_medium_line_x4_t4_g7_g

0xc719,	// (0x00037594) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x4_t4_g7_t1

0xc719,	// (0x00037594) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x4_t4_g7_t2

0xc719,	// (0x00037594) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x4_t4_g7_t3

0xc72d,	// (0x000375a8) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc72d,	// (0x000375a8) list_medium_line_x4_t4_g7_t4

0xc72d,	// (0x000375a8) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc72d,	// (0x000375a8) list_medium_line_x4_t4_g7_t5

0x0004,

0xfac7,	// (0x0003a942) list_medium_line_x4_t4_g7_t_ParamLimits

0xfac7,	// (0x0003a942) list_medium_line_x4_t4_g7_t

0x7440,	// (0x000322bb) list_single_dyc_row_pane_ParamLimits

0x7440,	// (0x000322bb) list_single_dyc_row_pane

0x7eec,	// (0x00032d67) call5_gesture_pane_ParamLimits

0x7eec,	// (0x00032d67) call5_gesture_pane

0x7f42,	// (0x00032dbd) call5_windows_pane_ParamLimits

0x7f42,	// (0x00032dbd) call5_windows_pane

0x8040,	// (0x00032ebb) call5_swipe_1_pane_cp_ParamLimits

0x8040,	// (0x00032ebb) call5_swipe_1_pane_cp

0x804c,	// (0x00032ec7) call5_swipe_2_pane_cp_ParamLimits

0x804c,	// (0x00032ec7) call5_swipe_2_pane_cp

0xc961,	// (0x000377dc) call5_image_pane_cp

0x8058,	// (0x00032ed3) popup_call5_audio_first_window_cp_ParamLimits

0x8058,	// (0x00032ed3) popup_call5_audio_first_window_cp

0x8066,	// (0x00032ee1) call5_swipe_1_pane_g1_cp_ParamLimits

0x8066,	// (0x00032ee1) call5_swipe_1_pane_g1_cp

0x8073,	// (0x00032eee) call5_swipe_1_pane_g2_cp

0x807b,	// (0x00032ef6) call5_swipe_1_pane_t1_cp_ParamLimits

0x807b,	// (0x00032ef6) call5_swipe_1_pane_t1_cp

0x8066,	// (0x00032ee1) call5_swipe_2_pane_g1_cp_ParamLimits

0x8066,	// (0x00032ee1) call5_swipe_2_pane_g1_cp

0x8090,	// (0x00032f0b) call5_swipe_2_pane_g2_cp

0x8098,	// (0x00032f13) call5_swipe_2_pane_t1_cp_ParamLimits

0x8098,	// (0x00032f13) call5_swipe_2_pane_t1_cp

0xc66a,	// (0x000374e5) main_sp_fs_email_pane

0x80ad,	// (0x00032f28) main_sp_fs_listscroll_pane_te

0x80b6,	// (0x00032f31) popup_sp_fs_action_menu_pane_ParamLimits

0x80b6,	// (0x00032f31) popup_sp_fs_action_menu_pane

0xc70f,	// (0x0003758a) bg_sp_fs_ctrlbar_pane_g1

0x80fc,	// (0x00032f77) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x8105,	// (0x00032f80) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x810e,	// (0x00032f89) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc70f,	// (0x0003758a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbb0,	// (0x0003aa2b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe6eb,	// (0x00039566) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe6eb,	// (0x00039566) bg_sp_fs_ctrlbar_ddmenu_pane

0x8117,	// (0x00032f92) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x8117,	// (0x00032f92) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x8123,	// (0x00032f9e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x8123,	// (0x00032f9e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbb9,	// (0x0003aa34) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbb9,	// (0x0003aa34) main_sp_fs_ctrlbar_ddmenu_pane_g

0x812f,	// (0x00032faa) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x812f,	// (0x00032faa) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc70f,	// (0x0003758a) list_medium_line_t2_right_icon_g1

0xce88,	// (0x00037d03) list_medium_line_t2_right_icon_t1

0xce88,	// (0x00037d03) list_medium_line_t2_right_icon_t2

0x0001,

0xfbbe,	// (0x0003aa39) list_medium_line_t2_right_icon_t

0xd329,	// (0x000381a4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd329,	// (0x000381a4) bg_sp_fs_ctrlbar_pane

0x81d0,	// (0x0003304b) main_sp_fs_ctrlbar_button_pane_cp01

0x81da,	// (0x00033055) main_sp_fs_ctrlbar_ddmenu_pane

0x81e4,	// (0x0003305f) main_sp_fs_ctrlbar_pane_g1

0x81f0,	// (0x0003306b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbc3,	// (0x0003aa3e) main_sp_fs_ctrlbar_pane_g

0x8230,	// (0x000330ab) main_sp_fs_ctrlbar_pane_t1

0x826f,	// (0x000330ea) main_sp_fs_ctrlbar_pane

0x82ae,	// (0x00033129) main_sp_fs_listscroll_pane_te_cp01

0x82da,	// (0x00033155) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x82da,	// (0x00033155) popup_sp_fs_action_menu_pane_cp01

0xc66a,	// (0x000374e5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc66a,	// (0x000374e5) bg_sp_fs_highlight_list_pane_cp01

0x82ff,	// (0x0003317a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x82ff,	// (0x0003317a) sp_fs_action_menu_list_gene_pane_g1

0x830e,	// (0x00033189) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x830e,	// (0x00033189) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbd1,	// (0x0003aa4c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbd1,	// (0x0003aa4c) sp_fs_action_menu_list_gene_pane_g

0x831b,	// (0x00033196) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x831b,	// (0x00033196) sp_fs_action_menu_list_gene_pane_t1

0x8333,	// (0x000331ae) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8333,	// (0x000331ae) sp_fs_action_menu_list_gene_pane

0x8356,	// (0x000331d1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x8356,	// (0x000331d1) popup_sp_fs_action_menu_bg_pane

0x8364,	// (0x000331df) sp_fs_action_menu_list_pane_ParamLimits

0x8364,	// (0x000331df) sp_fs_action_menu_list_pane

0x8388,	// (0x00033203) sp_fs_scroll_pane_cp01_ParamLimits

0x8388,	// (0x00033203) sp_fs_scroll_pane_cp01

0xce88,	// (0x00037d03) list_medium_line_plain_t2_t1

0xce88,	// (0x00037d03) list_medium_line_plain_t2_t2

0x0001,

0xfbbe,	// (0x0003aa39) list_medium_line_plain_t2_t

0xce88,	// (0x00037d03) list_medium_line_plain_t3_t1

0xce88,	// (0x00037d03) list_medium_line_plain_t3_t2

0xce88,	// (0x00037d03) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x0003a0cf) list_medium_line_plain_t3_t

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g2_g1

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0003a014) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0003a014) list_medium_line_x2_t2_g2_g

0xc719,	// (0x00037594) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t2_g2_t1

0xc719,	// (0x00037594) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x00039fe9) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x00039fe9) list_medium_line_x2_t2_g2_t

0xc6d1,	// (0x0003754c) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t4_g2_g1

0xc6d1,	// (0x0003754c) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0003a014) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0003a014) list_medium_line_x2_t4_g2_g

0xc719,	// (0x00037594) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t4_g2_t1

0xc719,	// (0x00037594) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t4_g2_t2

0xc719,	// (0x00037594) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t4_g2_t3

0xc719,	// (0x00037594) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x0003a022) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x0003a022) list_medium_line_x2_t4_g2_t

0xc70f,	// (0x0003758a) list_medium_line_t3_right_iconx2_g1

0xc70f,	// (0x0003758a) list_medium_line_t3_right_iconx2_g2

0xc70f,	// (0x0003758a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x0003a1eb) list_medium_line_t3_right_iconx2_g

0xce88,	// (0x00037d03) list_medium_line_t3_right_iconx2_t1

0xce88,	// (0x00037d03) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbbe,	// (0x0003aa39) list_medium_line_t3_right_iconx2_t

0xc6d1,	// (0x0003754c) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x3_t4_g4_g1

0xc6d1,	// (0x0003754c) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x3_t4_g4_g2

0xc6d1,	// (0x0003754c) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x3_t4_g4_g3

0xc6d1,	// (0x0003754c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x0003a019) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x0003a019) list_medium_line_x3_t4_g4_g

0xc719,	// (0x00037594) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x3_t4_g4_t1

0xc719,	// (0x00037594) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x3_t4_g4_t2

0xc719,	// (0x00037594) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x3_t4_g4_t3

0xc719,	// (0x00037594) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x0003a022) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x0003a022) list_medium_line_x3_t4_g4_t

0x83ae,	// (0x00033229) list_single_dyc_row_text_pane_t1_ParamLimits

0x83ae,	// (0x00033229) list_single_dyc_row_text_pane_t1

0x83f7,	// (0x00033272) list_single_dyc_row_text_pane_t2_ParamLimits

0x83f7,	// (0x00033272) list_single_dyc_row_text_pane_t2

0x846d,	// (0x000332e8) list_single_dyc_row_text_pane_t3_ParamLimits

0x846d,	// (0x000332e8) list_single_dyc_row_text_pane_t3

0x0005,

0xfbd6,	// (0x0003aa51) list_single_dyc_row_text_pane_t_ParamLimits

0xfbd6,	// (0x0003aa51) list_single_dyc_row_text_pane_t

0x8550,	// (0x000333cb) list_single_dyc_row_pane_g1_ParamLimits

0x8550,	// (0x000333cb) list_single_dyc_row_pane_g1

0x855c,	// (0x000333d7) list_single_dyc_row_pane_g2_ParamLimits

0x855c,	// (0x000333d7) list_single_dyc_row_pane_g2

0x8568,	// (0x000333e3) list_single_dyc_row_pane_g3_ParamLimits

0x8568,	// (0x000333e3) list_single_dyc_row_pane_g3

0x857b,	// (0x000333f6) list_single_dyc_row_pane_g4_ParamLimits

0x857b,	// (0x000333f6) list_single_dyc_row_pane_g4

0x0006,

0xfbe3,	// (0x0003aa5e) list_single_dyc_row_pane_g_ParamLimits

0xfbe3,	// (0x0003aa5e) list_single_dyc_row_pane_g

0x85cd,	// (0x00033448) list_single_dyc_row_text_pane_ParamLimits

0x85cd,	// (0x00033448) list_single_dyc_row_text_pane

0xb57d,	// (0x000363f8) bg_sp_fs_scroll_pane

0x85f2,	// (0x0003346d) thumb_sp_fs_scroll_pane

0xc6d1,	// (0x0003754c) list_medium_line_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_g1

0xc719,	// (0x00037594) list_medium_line_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t1

0xc6d1,	// (0x0003754c) list_medium_line_x2_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_g1

0xc6d1,	// (0x0003754c) list_medium_line_x2_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0003a014) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0003a014) list_medium_line_x2_g

0xc719,	// (0x00037594) list_medium_line_x2_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t1

0xc6d1,	// (0x0003754c) list_medium_line_x3_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x3_g1

0x5510,	// (0x0003038b) list_medium_line_x3_g2_ParamLimits

0x5510,	// (0x0003038b) list_medium_line_x3_g2

0x0001,

0xfbf2,	// (0x0003aa6d) list_medium_line_x3_g_ParamLimits

0xfbf2,	// (0x0003aa6d) list_medium_line_x3_g

0x85fb,	// (0x00033476) list_medium_line_x3_t1_ParamLimits

0x85fb,	// (0x00033476) list_medium_line_x3_t1

0x860f,	// (0x0003348a) thumb_sp_fs_scroll_pane_g1

0x8618,	// (0x00033493) thumb_sp_fs_scroll_pane_g2

0x8621,	// (0x0003349c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x0003aa72) thumb_sp_fs_scroll_pane_g

0x860f,	// (0x0003348a) bg_sp_fs_scroll_pane_g1

0x8618,	// (0x00033493) bg_sp_fs_scroll_pane_g2

0x8621,	// (0x0003349c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x0003aa72) bg_sp_fs_scroll_pane_g

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g4_g1

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g4_g2

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g4_g3

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x0003a019) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x0003a019) list_medium_line_x2_t3_g4_g

0xc719,	// (0x00037594) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t3_g4_t1

0xc719,	// (0x00037594) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t3_g4_t2

0xc719,	// (0x00037594) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc719,	// (0x00037594) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x0003a00d) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x0003a00d) list_medium_line_x2_t3_g4_t

0xc6d1,	// (0x0003754c) list_medium_line_g2_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_g2_g1

0xc6d1,	// (0x0003754c) list_medium_line_g2_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0003a014) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0003a014) list_medium_line_g2_g

0xc719,	// (0x00037594) list_medium_line_g2_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_g2_t1

0xc6d1,	// (0x0003754c) list_medium_line_t3_g2_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t3_g2_g1

0xc6d1,	// (0x0003754c) list_medium_line_t3_g2_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0003a014) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0003a014) list_medium_line_t3_g2_g

0xc719,	// (0x00037594) list_medium_line_t3_g2_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t3_g2_t1

0xc719,	// (0x00037594) list_medium_line_t3_g2_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t3_g2_t2

0xc719,	// (0x00037594) list_medium_line_t3_g2_t3_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x0003a00d) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x0003a00d) list_medium_line_t3_g2_t

0xc70f,	// (0x0003758a) list_medium_line_right_icon_g1

0xce88,	// (0x00037d03) list_medium_line_right_icon_t1

0xc6d1,	// (0x0003754c) list_medium_line_t2_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t2_g1

0xc719,	// (0x00037594) list_medium_line_t2_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t2_t1

0xc719,	// (0x00037594) list_medium_line_t2_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x00039fe9) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x00039fe9) list_medium_line_t2_t

0xc6d1,	// (0x0003754c) list_medium_line_t3_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t3_g1

0xc719,	// (0x00037594) list_medium_line_t3_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t3_t1

0xc719,	// (0x00037594) list_medium_line_t3_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t3_t2

0xc719,	// (0x00037594) list_medium_line_t3_t3_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x0003a00d) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x0003a00d) list_medium_line_t3_t

0xc6d1,	// (0x0003754c) list_medium_line_g3_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_g3_g1

0xc6d1,	// (0x0003754c) list_medium_line_g3_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_g3_g2

0xc6d1,	// (0x0003754c) list_medium_line_g3_g3_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x0003a006) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x0003a006) list_medium_line_g3_g

0xc719,	// (0x00037594) list_medium_line_g3_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_g3_t1

0xc6d1,	// (0x0003754c) list_medium_line_t2_g3_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t2_g3_g1

0xc6d1,	// (0x0003754c) list_medium_line_t2_g3_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t2_g3_g2

0xc6d1,	// (0x0003754c) list_medium_line_t2_g3_g3_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x0003a006) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x0003a006) list_medium_line_t2_g3_g

0xc719,	// (0x00037594) list_medium_line_t2_g3_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t2_g3_t1

0xc719,	// (0x00037594) list_medium_line_t2_g3_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x00039fe9) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x00039fe9) list_medium_line_t2_g3_t

0xc6d1,	// (0x0003754c) list_medium_line_t3_g3_g1_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t3_g3_g1

0xc6d1,	// (0x0003754c) list_medium_line_t3_g3_g2_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t3_g3_g2

0xc6d1,	// (0x0003754c) list_medium_line_t3_g3_g3_ParamLimits

0xc6d1,	// (0x0003754c) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x0003a006) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x0003a006) list_medium_line_t3_g3_g

0xc719,	// (0x00037594) list_medium_line_t3_g3_t1_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t3_g3_t1

0xc719,	// (0x00037594) list_medium_line_t3_g3_t2_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t3_g3_t2

0xc719,	// (0x00037594) list_medium_line_t3_g3_t3_ParamLimits

0xc719,	// (0x00037594) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x0003a00d) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x0003a00d) list_medium_line_t3_g3_t

0xc70f,	// (0x0003758a) list_medium_line_right_iconx2_g1

0xc70f,	// (0x0003758a) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00039f07) list_medium_line_right_iconx2_g

0xce88,	// (0x00037d03) list_medium_line_right_iconx2_t1

0xc70f,	// (0x0003758a) list_medium_line_t2_right_iconx2_g1

0xc70f,	// (0x0003758a) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00039f07) list_medium_line_t2_right_iconx2_g

0xce88,	// (0x00037d03) list_medium_line_t2_right_iconx2_t1

0xce88,	// (0x00037d03) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbbe,	// (0x0003aa39) list_medium_line_t2_right_iconx2_t

0xce88,	// (0x00037d03) list_medium_line_x4_t4_t1

0xce88,	// (0x00037d03) list_medium_line_x4_t4_t2

0xce88,	// (0x00037d03) list_medium_line_x4_t4_t3

0xce88,	// (0x00037d03) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x0003a0d6) list_medium_line_x4_t4_t

0x866e,	// (0x000334e9) tport_appsw_pane_ParamLimits

0x866e,	// (0x000334e9) tport_appsw_pane

0x8686,	// (0x00033501) tport_contact_pane_ParamLimits

0x8686,	// (0x00033501) tport_contact_pane

0x86a1,	// (0x0003351c) tport_listscroll_pane_ParamLimits

0x86a1,	// (0x0003351c) tport_listscroll_pane

0x86b9,	// (0x00033534) cell_tport_appsw_pane_ParamLimits

0x86b9,	// (0x00033534) cell_tport_appsw_pane

0xd307,	// (0x00038182) tport_appsw_pane_g1_ParamLimits

0xd307,	// (0x00038182) tport_appsw_pane_g1

0x8703,	// (0x0003357e) tport_contact_pane_g1

0x870c,	// (0x00033587) tport_contact_pane_t1

0x871a,	// (0x00033595) tport_contact_pane_t2

0x0001,

0xfbfe,	// (0x0003aa79) tport_contact_pane_t

0x8728,	// (0x000335a3) list_tport_pane

0x8731,	// (0x000335ac) scroll_pane_cp_030

0x8742,	// (0x000335bd) cell_tport_appsw_pane_g1

0x8752,	// (0x000335cd) cell_tport_appsw_pane_t1

0x8760,	// (0x000335db) grid_highlight_pane_cp019

0x8768,	// (0x000335e3) list_tport_double_graphic_pane_ParamLimits

0x8768,	// (0x000335e3) list_tport_double_graphic_pane

0xc66a,	// (0x000374e5) list_highlight_pane_cp023_ParamLimits

0xc66a,	// (0x000374e5) list_highlight_pane_cp023

0x8775,	// (0x000335f0) list_tport_double_graphic_pane_g1_ParamLimits

0x8775,	// (0x000335f0) list_tport_double_graphic_pane_g1

0x8782,	// (0x000335fd) list_tport_double_graphic_pane_t1_ParamLimits

0x8782,	// (0x000335fd) list_tport_double_graphic_pane_t1

0x8797,	// (0x00033612) list_tport_double_graphic_pane_t2_ParamLimits

0x8797,	// (0x00033612) list_tport_double_graphic_pane_t2

0x0001,

0xfc0a,	// (0x0003aa85) list_tport_double_graphic_pane_t_ParamLimits

0xfc0a,	// (0x0003aa85) list_tport_double_graphic_pane_t

0xb57d,	// (0x000363f8) main_cale_note_pane

0x144c,	// (0x0002c2c7) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x144c,	// (0x0002c2c7) cell_vitu2_function_top_wide_pane_cp01

0x7aaf,	// (0x0003292a) wait_bar_pane_cp05_ParamLimits

0xc66a,	// (0x000374e5) listscroll_cmail_pane

0x87b1,	// (0x0003362c) list_cmail_pane

0x87c8,	// (0x00033643) list_cmail_body_pane

0x87df,	// (0x0003365a) list_single_cmail_header_caption_pane

0x87f9,	// (0x00033674) list_single_cmail_header_detail_pane_ParamLimits

0x87f9,	// (0x00033674) list_single_cmail_header_detail_pane

0x882c,	// (0x000336a7) list_single_cmail_header_caption_pane_t1

0x8843,	// (0x000336be) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8843,	// (0x000336be) list_single_cmail_header_detail_pane_g1

0x885b,	// (0x000336d6) list_single_cmail_header_detail_pane_g2_ParamLimits

0x885b,	// (0x000336d6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc0f,	// (0x0003aa8a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc0f,	// (0x0003aa8a) list_single_cmail_header_detail_pane_g

0x8874,	// (0x000336ef) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8874,	// (0x000336ef) list_single_cmail_header_detail_pane_t1

0x88d4,	// (0x0003374f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x88d4,	// (0x0003374f) list_single_cmail_header_editor_pane_bg

0x7919,	// (0x00032794) list_cmail_body_pane_g1

0x88eb,	// (0x00033766) list_cmail_body_pane_t1

0x55cb,	// (0x00030446) list_single_cmail_header_editor_pane_bg_g1

0xcb8b,	// (0x00037a06) list_single_cmail_header_editor_pane_bg_g1_copy1

0x55db,	// (0x00030456) list_single_cmail_header_editor_pane_bg_g1_copy2

0x55d3,	// (0x0003044e) list_single_cmail_header_editor_pane_bg_g1_copy3

0x5f29,	// (0x00030da4) list_single_cmail_header_editor_pane_bg_g1_copy4

0x55fb,	// (0x00030476) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x55eb,	// (0x00030466) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x55f3,	// (0x0003046e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xcb6b,	// (0x000379e6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x88f9,	// (0x00033774) calenote_gesture_pane_ParamLimits

0x88f9,	// (0x00033774) calenote_gesture_pane

0x8919,	// (0x00033794) calenote_window_pane_ParamLimits

0x8919,	// (0x00033794) calenote_window_pane

0x8935,	// (0x000337b0) popup_note_window_cp01

0x893e,	// (0x000337b9) calenote_swipe_1_pane_ParamLimits

0x893e,	// (0x000337b9) calenote_swipe_1_pane

0x804c,	// (0x00032ec7) calenote_swipe_2_pane_ParamLimits

0x804c,	// (0x00032ec7) calenote_swipe_2_pane

0x8066,	// (0x00032ee1) calenote_swipe_1_pane_g1_ParamLimits

0x8066,	// (0x00032ee1) calenote_swipe_1_pane_g1

0x895c,	// (0x000337d7) calenote_swipe_1_pane_g2_ParamLimits

0x895c,	// (0x000337d7) calenote_swipe_1_pane_g2

0x0001,

0xfc1b,	// (0x0003aa96) calenote_swipe_1_pane_g_ParamLimits

0xfc1b,	// (0x0003aa96) calenote_swipe_1_pane_g

0x8968,	// (0x000337e3) calenote_swipe_1_pane_t1_ParamLimits

0x8968,	// (0x000337e3) calenote_swipe_1_pane_t1

0x8066,	// (0x00032ee1) calenote_swipe_2_pane_g1_ParamLimits

0x8066,	// (0x00032ee1) calenote_swipe_2_pane_g1

0x8987,	// (0x00033802) calenote_swipe_2_pane_g2_ParamLimits

0x8987,	// (0x00033802) calenote_swipe_2_pane_g2

0x0001,

0xfc20,	// (0x0003aa9b) calenote_swipe_2_pane_g_ParamLimits

0xfc20,	// (0x0003aa9b) calenote_swipe_2_pane_g

0x8993,	// (0x0003380e) calenote_swipe_2_pane_t1_ParamLimits

0x8993,	// (0x0003380e) calenote_swipe_2_pane_t1

0xb57d,	// (0x000363f8) main_mup_navstr_pane

0x4da0,	// (0x0002fc1b) main_mup3_pane_t7_ParamLimits

0x4da0,	// (0x0002fc1b) main_mup3_pane_t7

0xbaa9,	// (0x00036924) main_mp4_pane_g6_ParamLimits

0xbaa9,	// (0x00036924) main_mp4_pane_g6

0xbcd7,	// (0x00036b52) main_image3_pane_t4_ParamLimits

0xbcd7,	// (0x00036b52) main_image3_pane_t4

0x89ba,	// (0x00033835) popup_navstr_preview_pane_ParamLimits

0x89ba,	// (0x00033835) popup_navstr_preview_pane

0x89ca,	// (0x00033845) scroll_navstr_pane_ParamLimits

0x89ca,	// (0x00033845) scroll_navstr_pane

0xb57d,	// (0x000363f8) bg_popup_preview_window_pane_cp04

0x89de,	// (0x00033859) popup_navstr_preview_pane_t1

0x89ec,	// (0x00033867) scroll_navstr_pane_g1_ParamLimits

0x89ec,	// (0x00033867) scroll_navstr_pane_g1

0x8a00,	// (0x0003387b) scroll_navstr_pane_t1_ParamLimits

0x8a00,	// (0x0003387b) scroll_navstr_pane_t1

0x8953,	// (0x000337ce) bg_button_pane_cp014

0x8953,	// (0x000337ce) bg_button_pane_cp030

0x7e92,	// (0x00032d0d) list_double_fisheye_pane_g4_ParamLimits

0x7e92,	// (0x00032d0d) list_double_fisheye_pane_g4

0x7e9e,	// (0x00032d19) list_double_fisheye_pane_g5_ParamLimits

0x7e9e,	// (0x00032d19) list_double_fisheye_pane_g5

0x3259,	// (0x0002e0d4) sp_fs_scroll_pane_cp03

0x81e4,	// (0x0003305f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x81f0,	// (0x0003306b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbc3,	// (0x0003aa3e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8230,	// (0x000330ab) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x87c0,	// (0x0003363b) sp_fs_scroll_pane_cp02

0xc8c6,	// (0x00037741) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc8c6,	// (0x00037741) popup_sp_fs_calendar_preview_list_single_pane

0xb57d,	// (0x000363f8) main_cam6_pano_pane

0xb5f2,	// (0x0003646d) main_mup3_pane_ParamLimits

0xb57d,	// (0x000363f8) main_phacti_pane

0x7980,	// (0x000327fb) bg_button_pane_cp11

0x799a,	// (0x00032815) main_mobtv_info_pane_g2_ParamLimits

0x799a,	// (0x00032815) main_mobtv_info_pane_g2

0x0001,

0xfb28,	// (0x0003a9a3) main_mobtv_info_pane_g_ParamLimits

0xfb28,	// (0x0003a9a3) main_mobtv_info_pane_g

0xc719,	// (0x00037594) sc_clock_pane_t5_ParamLimits

0xc719,	// (0x00037594) sc_clock_pane_t5

0xd307,	// (0x00038182) main_radioblah_pane_g1_ParamLimits

0xd315,	// (0x00038190) main_radioblah_pane_t3_ParamLimits

0xd315,	// (0x00038190) main_radioblah_pane_t3

0xd315,	// (0x00038190) main_radioblah_pane_t4_ParamLimits

0xd315,	// (0x00038190) main_radioblah_pane_t4

0xc66a,	// (0x000374e5) main_radioblah_text_pane_ParamLimits

0xc66a,	// (0x000374e5) main_radioblah_text_pane

0x7dae,	// (0x00032c29) main_radioblah_info_pane_g1_ParamLimits

0x7df2,	// (0x00032c6d) main_radioblah_info_pane_t4_ParamLimits

0x7df2,	// (0x00032c6d) main_radioblah_info_pane_t4

0xc66a,	// (0x000374e5) main_sp_fs_calendar_pane

0x8a17,	// (0x00033892) main_phacti_pane_g1

0x8a28,	// (0x000338a3) phacti_note_pane_ParamLimits

0x8a28,	// (0x000338a3) phacti_note_pane

0x8a3c,	// (0x000338b7) phacti_term_pane_ParamLimits

0x8a3c,	// (0x000338b7) phacti_term_pane

0x8a51,	// (0x000338cc) phacti_note_pane_t1_ParamLimits

0x8a51,	// (0x000338cc) phacti_note_pane_t1

0x8a68,	// (0x000338e3) phacti_term_pane_g1

0x8a70,	// (0x000338eb) phacti_term_pane_t1_ParamLimits

0x8a70,	// (0x000338eb) phacti_term_pane_t1

0x8a9a,	// (0x00033915) popup_sp_fs_calendar_preview_list_single_pane_g1

0x8aa2,	// (0x0003391d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc2a,	// (0x0003aaa5) popup_sp_fs_calendar_preview_list_single_pane_g

0x8aaa,	// (0x00033925) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x8aaa,	// (0x00033925) popup_sp_fs_calendar_preview_list_single_pane_t1

0x8ac0,	// (0x0003393b) aid_popup_sp_fs_bg_corner_pane

0xc70f,	// (0x0003758a) popup_sp_fs_calendar_preview_bg_pane_g1

0xb57d,	// (0x000363f8) popup_sp_fs_calendar_preview_bg_pane

0x8ac8,	// (0x00033943) popup_sp_fs_calendar_preview_list_pane

0x8ae5,	// (0x00033960) bg_main_sp_fs_cale_pane_ParamLimits

0x8ae5,	// (0x00033960) bg_main_sp_fs_cale_pane

0x8afd,	// (0x00033978) listscroll_cale_mrui_pane_ParamLimits

0x8afd,	// (0x00033978) listscroll_cale_mrui_pane

0xebad,	// (0x00039a28) listscroll_sp_fs_schedule_track_pane

0x8b15,	// (0x00033990) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8b15,	// (0x00033990) main_sp_fs_ctrlbar_pane_cp01

0xebad,	// (0x00039a28) main_sp_fs_ribbon_pane

0x8b2b,	// (0x000339a6) popup_sp_fs_cale_preview_window

0x8b3d,	// (0x000339b8) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8b3d,	// (0x000339b8) list_single_sp_fs_schedule_track_pane

0x4e9e,	// (0x0002fd19) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x4e9e,	// (0x0002fd19) bg_sp_fs_highlight_list_pane_cp03

0x4a55,	// (0x0002f8d0) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x4a55,	// (0x0002f8d0) list_single_sp_fs_schedule_track_pane_g1

0x4a55,	// (0x0002f8d0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x4a55,	// (0x0002f8d0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc2f,	// (0x0003aaaa) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc2f,	// (0x0003aaaa) list_single_sp_fs_schedule_track_pane_g

0x8b49,	// (0x000339c4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8b49,	// (0x000339c4) list_single_sp_fs_schedule_track_pane_t1

0x8b5b,	// (0x000339d6) sp_fs_schedule_track_pane_ParamLimits

0x8b5b,	// (0x000339d6) sp_fs_schedule_track_pane

0xebb5,	// (0x00039a30) sp_fs_schedule_track_pane_g1

0xebb5,	// (0x00039a30) sp_fs_schedule_track_pane_g2

0xebb5,	// (0x00039a30) sp_fs_schedule_track_pane_g3

0xebb5,	// (0x00039a30) sp_fs_schedule_track_pane_g4

0xebb5,	// (0x00039a30) sp_fs_schedule_track_pane_g5

0x0004,

0xfc34,	// (0x0003aaaf) sp_fs_schedule_track_pane_g

0xebb5,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g1

0xebb5,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g2

0xebb5,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g3

0xebb5,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g4

0xebb5,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g5

0xebb5,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g6

0xebb5,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g7

0xebb5,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g8

0xebb5,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc3f,	// (0x0003aaba) bg_sp_fs_schedule_viewer_highlight_g

0xebad,	// (0x00039a28) bg_main_sp_fs_ribbon_pane

0xebb5,	// (0x00039a30) main_sp_fs_ribbon_pane_g1

0x8b67,	// (0x000339e2) main_sp_fs_ribbon_pane_t1

0x8b67,	// (0x000339e2) main_sp_fs_ribbon_pane_t2

0x8b67,	// (0x000339e2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc52,	// (0x0003aacd) main_sp_fs_ribbon_pane_t

0xebad,	// (0x00039a28) main_sp_fs_ribbon_scheduler_pane

0xebb5,	// (0x00039a30) bg_main_sp_fs_ribbon_pane_g1

0xebb5,	// (0x00039a30) bg_main_sp_fs_ribbon_pane_g2

0xebb5,	// (0x00039a30) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf69b,	// (0x0003a516) bg_main_sp_fs_ribbon_pane_g

0xebb5,	// (0x00039a30) main_sp_fs_ribbon_scheduler_pane_g1

0xebb5,	// (0x00039a30) main_sp_fs_ribbon_scheduler_pane_g2

0xebb5,	// (0x00039a30) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf69b,	// (0x0003a516) main_sp_fs_ribbon_scheduler_pane_g

0x8b75,	// (0x000339f0) list_cale_mrui_pane

0x8b82,	// (0x000339fd) sp_fs_scroll_pane_cp07_ParamLimits

0x8b82,	// (0x000339fd) sp_fs_scroll_pane_cp07

0x4e9e,	// (0x0002fd19) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x4e9e,	// (0x0002fd19) bg_sp_fs_schedule_viewer_highlight

0xebad,	// (0x00039a28) list_single_sp_fs_schedule_track_pane_cp01

0xebad,	// (0x00039a28) list_sp_fs_schedule_track_pane

0x8b9e,	// (0x00033a19) sp_fs_scroll_pane_cp06_ParamLimits

0x8b9e,	// (0x00033a19) sp_fs_scroll_pane_cp06

0xc70f,	// (0x0003758a) bgmain_sp_fs_calendar_pane_g1

0x8bb2,	// (0x00033a2d) list_single_cale_mrui_pane_ParamLimits

0x8bb2,	// (0x00033a2d) list_single_cale_mrui_pane

0x8bd2,	// (0x00033a4d) list_single_cale_mrui_row_pane_ParamLimits

0x8bd2,	// (0x00033a4d) list_single_cale_mrui_row_pane

0x8bdf,	// (0x00033a5a) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8bdf,	// (0x00033a5a) list_single_cale_mrui_row_pane_g1

0x8c24,	// (0x00033a9f) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8c24,	// (0x00033a9f) list_single_cale_mrui_row_pane_t1

0x8c36,	// (0x00033ab1) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8c36,	// (0x00033ab1) list_single_cale_mrui_row_pane_t2

0x8c9c,	// (0x00033b17) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8c9c,	// (0x00033b17) list_single_cale_mrui_row_pane_t3

0x8ccb,	// (0x00033b46) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8ccb,	// (0x00033b46) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc60,	// (0x0003aadb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc60,	// (0x0003aadb) list_single_cale_mrui_row_pane_t

0x8cfc,	// (0x00033b77) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8cfc,	// (0x00033b77) list_single_cmail_header_editor_pane_bg_cp01

0x8d28,	// (0x00033ba3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8d28,	// (0x00033ba3) list_single_cmail_header_editor_pane_bg_cp02

0x8d46,	// (0x00033bc1) main_radioblah_text_pane_t1_ParamLimits

0x8d46,	// (0x00033bc1) main_radioblah_text_pane_t1

0x8d60,	// (0x00033bdb) cam6_indi_pane_cp01

0x8d68,	// (0x00033be3) cam6_mode_pane_cp01

0x8d70,	// (0x00033beb) cam6_pano_pane

0x8d79,	// (0x00033bf4) cam6_zoom_pane_cp01

0x8d83,	// (0x00033bfe) cam6_pano_image_pane

0x8d8c,	// (0x00033c07) cam6_pano_pane_g1

0x7919,	// (0x00032794) cam6_pano_pane_g2

0x8d95,	// (0x00033c10) cam6_pano_pane_g3

0x8d9e,	// (0x00033c19) cam6_pano_pane_g4

0xee5a,	// (0x00039cd5) cam6_pano_pane_g5

0x8da7,	// (0x00033c22) cam6_pano_pane_g6

0x8daf,	// (0x00033c2a) cam6_pano_pane_g7

0x8db7,	// (0x00033c32) cam6_pano_pane_g8

0x8dc0,	// (0x00033c3b) cam6_pano_pane_g9

0x0008,

0xfc69,	// (0x0003aae4) cam6_pano_pane_g

0xb57d,	// (0x000363f8) main_browser_tag_pane

0x89b2,	// (0x0003382d) grid_navstr_albumart_pane

0x8dcb,	// (0x00033c46) cell_navstr_albumart_pane_ParamLimits

0x8dcb,	// (0x00033c46) cell_navstr_albumart_pane

0x8de7,	// (0x00033c62) cell_navstr_albumart_pane_g1

0x8def,	// (0x00033c6a) cell_navstr_albumart_pane_g2

0x8df7,	// (0x00033c72) cell_navstr_albumart_pane_g3

0x8dff,	// (0x00033c7a) cell_navstr_albumart_pane_g4

0x0003,

0xfc7c,	// (0x0003aaf7) cell_navstr_albumart_pane_g

0x8e07,	// (0x00033c82) bt_list_pane_ParamLimits

0x8e07,	// (0x00033c82) bt_list_pane

0x8e1d,	// (0x00033c98) bt_list_pane_t1

0x8e2c,	// (0x00033ca7) bt_list_pane_t2

0x0001,

0xfc85,	// (0x0003ab00) bt_list_pane_t

0xb57d,	// (0x000363f8) main_cale_prevew_pane

0x8e3b,	// (0x00033cb6) popup_cale_preview_window_ParamLimits

0x8e3b,	// (0x00033cb6) popup_cale_preview_window

0xc66a,	// (0x000374e5) bg_popup_preview_window_pane_cp05_ParamLimits

0xc66a,	// (0x000374e5) bg_popup_preview_window_pane_cp05

0x8e58,	// (0x00033cd3) list_cale_preview_pane_ParamLimits

0x8e58,	// (0x00033cd3) list_cale_preview_pane

0x8e64,	// (0x00033cdf) list_double_cale_preview_pane_ParamLimits

0x8e64,	// (0x00033cdf) list_double_cale_preview_pane

0x8e78,	// (0x00033cf3) list_single_cale_preview_pane_ParamLimits

0x8e78,	// (0x00033cf3) list_single_cale_preview_pane

0x8e90,	// (0x00033d0b) list_single_cale_preview_pane_g1

0x8e98,	// (0x00033d13) list_single_cale_preview_pane_t1_ParamLimits

0x8e98,	// (0x00033d13) list_single_cale_preview_pane_t1

0x8ead,	// (0x00033d28) list_double_cale_preview_pane_g1

0x8eb5,	// (0x00033d30) list_double_cale_preview_pane_t1_ParamLimits

0x8eb5,	// (0x00033d30) list_double_cale_preview_pane_t1

0x8eca,	// (0x00033d45) list_double_cale_preview_pane_t2_ParamLimits

0x8eca,	// (0x00033d45) list_double_cale_preview_pane_t2

0x0001,

0xfc8a,	// (0x0003ab05) list_double_cale_preview_pane_t_ParamLimits

0xfc8a,	// (0x0003ab05) list_double_cale_preview_pane_t

0xb57d,	// (0x000363f8) main_ezdial_pane

0xc66a,	// (0x000374e5) main_sp_fs_email_pane_ParamLimits

0x8149,	// (0x00032fc4) cmail_ddmenu_btn01_pane_ParamLimits

0x8149,	// (0x00032fc4) cmail_ddmenu_btn01_pane

0x815c,	// (0x00032fd7) cmail_ddmenu_btn02_pane_ParamLimits

0x815c,	// (0x00032fd7) cmail_ddmenu_btn02_pane

0x81b9,	// (0x00033034) cmail_ddmenu_btn03_pane_ParamLimits

0x81b9,	// (0x00033034) cmail_ddmenu_btn03_pane

0x826f,	// (0x000330ea) main_sp_fs_ctrlbar_pane_ParamLimits

0x82ae,	// (0x00033129) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x87c8,	// (0x00033643) list_cmail_body_pane_ParamLimits

0x883a,	// (0x000336b5) bg_button_pane_cp12

0x8867,	// (0x000336e2) list_single_cmail_header_detail_pane_g3_ParamLimits

0x8867,	// (0x000336e2) list_single_cmail_header_detail_pane_g3

0x88b0,	// (0x0003372b) list_single_cmail_header_detail_pane_t2_ParamLimits

0x88b0,	// (0x0003372b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc16,	// (0x0003aa91) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc16,	// (0x0003aa91) list_single_cmail_header_detail_pane_t

0x8a85,	// (0x00033900) phacti_term_pane_t2_ParamLimits

0x8a85,	// (0x00033900) phacti_term_pane_t2

0x0001,

0xfc25,	// (0x0003aaa0) phacti_term_pane_t_ParamLimits

0xfc25,	// (0x0003aaa0) phacti_term_pane_t

0x8ee2,	// (0x00033d5d) aid_size_list_single_double

0x8eee,	// (0x00033d69) popup_ezdial_listscroll_window

0x8f0a,	// (0x00033d85) popup_number_entry_window_cp01

0xc961,	// (0x000377dc) bg_popup_call_pane_cp09

0x8f17,	// (0x00033d92) ezdial_list_pane

0x8f1f,	// (0x00033d9a) scroll_pane_cp23

0xd329,	// (0x000381a4) bg_button_pane_cp028_ParamLimits

0xd329,	// (0x000381a4) bg_button_pane_cp028

0x8f27,	// (0x00033da2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f27,	// (0x00033da2) cmail_ddmenu_btn01_pane_g1

0x8f36,	// (0x00033db1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f36,	// (0x00033db1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc8f,	// (0x0003ab0a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc8f,	// (0x0003ab0a) cmail_ddmenu_btn01_pane_g

0x8f4c,	// (0x00033dc7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x8f4c,	// (0x00033dc7) cmail_ddmenu_btn01_pane_t1

0xd329,	// (0x000381a4) bg_button_pane_cp029_ParamLimits

0xd329,	// (0x000381a4) bg_button_pane_cp029

0x8f62,	// (0x00033ddd) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8f62,	// (0x00033ddd) cmail_ddmenu_btn02_pane_g1

0x8f7d,	// (0x00033df8) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8f7d,	// (0x00033df8) cmail_ddmenu_btn02_pane_t1

0xc66a,	// (0x000374e5) bg_button_pane_cp031_ParamLimits

0xc66a,	// (0x000374e5) bg_button_pane_cp031

0x8f62,	// (0x00033ddd) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8f62,	// (0x00033ddd) cmail_ddmenu_btn03_pane_g1

0x8f7d,	// (0x00033df8) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8f7d,	// (0x00033df8) cmail_ddmenu_btn03_pane_t1

0xc719,	// (0x00037594) cell_dialer2_keypad_pane_t1_ParamLimits

0xee98,	// (0x00039d13) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xee98,	// (0x00039d13) cell_dialer2_keypad_pane_t1_copy1

0x751d,	// (0x00032398) ncimui_group_button_pane

0xc66a,	// (0x000374e5) main_sp_fs_calendar_pane_ParamLimits

0x87df,	// (0x0003365a) list_single_cmail_header_caption_pane_ParamLimits

0x8adc,	// (0x00033957) aid_recal_txt_sm_pane

0xb57d,	// (0x000363f8) mian_recal_day_pane

0x8b2b,	// (0x000339a6) popup_sp_fs_cale_preview_window_ParamLimits

0x8fa4,	// (0x00033e1f) list_recal_day_pane

0x8fe7,	// (0x00033e62) list_single_recal_day_pane_ParamLimits

0x8fe7,	// (0x00033e62) list_single_recal_day_pane

0x8ff9,	// (0x00033e74) list_single_recal_day_pane_g1_ParamLimits

0x8ff9,	// (0x00033e74) list_single_recal_day_pane_g1

0x9005,	// (0x00033e80) list_single_recal_day_pane_g2_ParamLimits

0x9005,	// (0x00033e80) list_single_recal_day_pane_g2

0x9011,	// (0x00033e8c) list_single_recal_day_pane_g3_ParamLimits

0x9011,	// (0x00033e8c) list_single_recal_day_pane_g3

0x901d,	// (0x00033e98) list_single_recal_day_pane_g4_ParamLimits

0x901d,	// (0x00033e98) list_single_recal_day_pane_g4

0x902b,	// (0x00033ea6) list_single_recal_day_pane_g5_ParamLimits

0x902b,	// (0x00033ea6) list_single_recal_day_pane_g5

0x9041,	// (0x00033ebc) list_single_recal_day_pane_g6_ParamLimits

0x9041,	// (0x00033ebc) list_single_recal_day_pane_g6

0x0004,

0xfc9e,	// (0x0003ab19) list_single_recal_day_pane_g_ParamLimits

0xfc9e,	// (0x0003ab19) list_single_recal_day_pane_g

0x9055,	// (0x00033ed0) list_single_recal_day_pane_t1

0x9067,	// (0x00033ee2) list_single_recal_day_pane_t2

0x0001,

0xfca9,	// (0x0003ab24) list_single_recal_day_pane_t

0x9079,	// (0x00033ef4) ncimui_query_button_pane_ParamLimits

0x9079,	// (0x00033ef4) ncimui_query_button_pane

0x9089,	// (0x00033f04) ncimui_query_button_pane_t1_ParamLimits

0x9089,	// (0x00033f04) ncimui_query_button_pane_t1

0x909c,	// (0x00033f17) ncimui_query_button_pane_t2_ParamLimits

0x909c,	// (0x00033f17) ncimui_query_button_pane_t2

0x0001,

0xfcae,	// (0x0003ab29) ncimui_query_button_pane_t_ParamLimits

0xfcae,	// (0x0003ab29) ncimui_query_button_pane_t

0x90af,	// (0x00033f2a) query_button_pane_ParamLimits

0x90af,	// (0x00033f2a) query_button_pane

0xb57d,	// (0x000363f8) bg_button_pane_cp0028

0x90c2,	// (0x00033f3d) query_button_pane_t1

0x07d3,	// (0x0002b64e) main_tport_pane_ParamLimits

0x862a,	// (0x000334a5) bg_popup_window_pane_cp01_ParamLimits

0x862a,	// (0x000334a5) bg_popup_window_pane_cp01

0x8643,	// (0x000334be) heading_pane_cp08_ParamLimits

0x8643,	// (0x000334be) heading_pane_cp08

0x8659,	// (0x000334d4) heading_pane_cp07_ParamLimits

0x8659,	// (0x000334d4) heading_pane_cp07

0x8742,	// (0x000335bd) cell_tport_appsw_pane_g2

0x0002,

0xfc03,	// (0x0003aa7e) cell_tport_appsw_pane_g

0x38aa,	// (0x0002e725) input_candi_list_open_g1

0xcd26,	// (0x00037ba1) list_cale_time_pane_g6_ParamLimits

0xcd26,	// (0x00037ba1) list_cale_time_pane_g6

0x4661,	// (0x0002f4dc) aid_size_touch_calib_1_ParamLimits

0x4661,	// (0x0002f4dc) aid_size_touch_calib_1

0x4673,	// (0x0002f4ee) aid_size_touch_calib_2_ParamLimits

0x4673,	// (0x0002f4ee) aid_size_touch_calib_2

0x468b,	// (0x0002f506) aid_size_touch_calib_3_ParamLimits

0x468b,	// (0x0002f506) aid_size_touch_calib_3

0x46a9,	// (0x0002f524) aid_size_touch_calib_4_ParamLimits

0x46a9,	// (0x0002f524) aid_size_touch_calib_4

0x46c1,	// (0x0002f53c) main_touch_calib_button_group_pane_ParamLimits

0x46c1,	// (0x0002f53c) main_touch_calib_button_group_pane

0x46d9,	// (0x0002f554) main_touch_calib_pane_g1_ParamLimits

0x46eb,	// (0x0002f566) main_touch_calib_pane_g2_ParamLimits

0x46fd,	// (0x0002f578) main_touch_calib_pane_g3_ParamLimits

0x470f,	// (0x0002f58a) main_touch_calib_pane_g4_ParamLimits

0xf649,	// (0x0003a4c4) main_touch_calib_pane_g_ParamLimits

0x4721,	// (0x0002f59c) main_touch_calib_pane_t1_ParamLimits

0x473b,	// (0x0002f5b6) main_touch_calib_pane_t2_ParamLimits

0x4755,	// (0x0002f5d0) main_touch_calib_pane_t3_ParamLimits

0x4769,	// (0x0002f5e4) main_touch_calib_pane_t4_ParamLimits

0x477f,	// (0x0002f5fa) main_touch_calib_pane_t5_ParamLimits

0xf652,	// (0x0003a4cd) main_touch_calib_pane_t_ParamLimits

0xec15,	// (0x00039a90) list_single_fp_cale_pane_g3_ParamLimits

0xec15,	// (0x00039a90) list_single_fp_cale_pane_g3

0xb5f2,	// (0x0003646d) bg_button_pane_cp012_ParamLimits

0xb5f2,	// (0x0003646d) bg_vkb2_func_pane_cp03_ParamLimits

0x166d,	// (0x0002c4e8) cell_vitu2_function_top_pane_g1_ParamLimits

0xb5f2,	// (0x0003646d) bg_vkb2_func_pane_cp04_ParamLimits

0x74a8,	// (0x00032323) main_ncimui_button_group_pane_ParamLimits

0x74a8,	// (0x00032323) main_ncimui_button_group_pane

0x7508,	// (0x00032383) main_ncimui_pane_t3_ParamLimits

0x7508,	// (0x00032383) main_ncimui_pane_t3

0x8a1f,	// (0x0003389a) phacti_button_group_pane

0x8ee2,	// (0x00033d5d) aid_size_list_single_double_ParamLimits

0x8eee,	// (0x00033d69) popup_ezdial_listscroll_window_ParamLimits

0x8f0a,	// (0x00033d85) popup_number_entry_window_cp01_ParamLimits

0x90d0,	// (0x00033f4b) phacti_button_pane_ParamLimits

0x90d0,	// (0x00033f4b) phacti_button_pane

0xb57d,	// (0x000363f8) bg_button_pane_cp14

0x90e1,	// (0x00033f5c) phacti_button_pane_t1

0x90ef,	// (0x00033f6a) main_touch_calib_button_pane_ParamLimits

0x90ef,	// (0x00033f6a) main_touch_calib_button_pane

0xc76d,	// (0x000375e8) bg_button_pane_cp18_ParamLimits

0xc76d,	// (0x000375e8) bg_button_pane_cp18

0x9104,	// (0x00033f7f) main_touch_calib_button_pane_t1_ParamLimits

0x9104,	// (0x00033f7f) main_touch_calib_button_pane_t1

0x911a,	// (0x00033f95) main_touch_calib_button_pane_t2_ParamLimits

0x911a,	// (0x00033f95) main_touch_calib_button_pane_t2

0x0001,

0xfcb3,	// (0x0003ab2e) main_touch_calib_button_pane_t_ParamLimits

0xfcb3,	// (0x0003ab2e) main_touch_calib_button_pane_t

0xb57d,	// (0x000363f8) cell_ncimui_button_pane

0xb57d,	// (0x000363f8) bg_button_pane_cp032

0x9138,	// (0x00033fb3) cell_ncimui_button_pane_t1

0xbcb5,	// (0x00036b30) image3_infobar_pane_ParamLimits

0xbcb5,	// (0x00036b30) image3_infobar_pane

0x7ba6,	// (0x00032a21) fs_bigclock_status_pane_ParamLimits

0x7ba6,	// (0x00032a21) fs_bigclock_status_pane

0x7bb3,	// (0x00032a2e) main_fs_bigclock_clock_pane_ParamLimits

0x7bb3,	// (0x00032a2e) main_fs_bigclock_clock_pane

0x7be5,	// (0x00032a60) main_fs_bigclock_indi_pane_ParamLimits

0x7be5,	// (0x00032a60) main_fs_bigclock_indi_pane

0x7c25,	// (0x00032aa0) main_fs_bigclock_swipe_pane_ParamLimits

0x7c25,	// (0x00032aa0) main_fs_bigclock_swipe_pane

0xb57d,	// (0x000363f8) main_fs_clock_dumped_data

0x7c71,	// (0x00032aec) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7c71,	// (0x00032aec) list_single_fs_bigclock_indicator_pane_g1

0x7c8a,	// (0x00032b05) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7c8a,	// (0x00032b05) list_single_fs_bigclock_indicator_pane_g2

0x7ca4,	// (0x00032b1f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7ca4,	// (0x00032b1f) list_single_fs_bigclock_indicator_pane_g3

0x7cbe,	// (0x00032b39) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7cbe,	// (0x00032b39) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb5c,	// (0x0003a9d7) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb5c,	// (0x0003a9d7) list_single_fs_bigclock_indicator_pane_g

0x7ced,	// (0x00032b68) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7ced,	// (0x00032b68) list_single_fs_bigclock_indicator_pane_t1

0x7d15,	// (0x00032b90) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7d15,	// (0x00032b90) list_single_fs_bigclock_indicator_pane_t2

0x7d3d,	// (0x00032bb8) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7d3d,	// (0x00032bb8) list_single_fs_bigclock_indicator_pane_t3

0x7d65,	// (0x00032be0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7d65,	// (0x00032be0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb67,	// (0x0003a9e2) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb67,	// (0x0003a9e2) list_single_fs_bigclock_indicator_pane_t

0x9146,	// (0x00033fc1) image3_infobar_fav_pane_ParamLimits

0x9146,	// (0x00033fc1) image3_infobar_fav_pane

0x9156,	// (0x00033fd1) image3_infobar_loc_pane_ParamLimits

0x9156,	// (0x00033fd1) image3_infobar_loc_pane

0x916c,	// (0x00033fe7) image3_infobar_time_pane_ParamLimits

0x916c,	// (0x00033fe7) image3_infobar_time_pane

0xc70f,	// (0x0003758a) image3_infobar_time_pane_g1

0x917c,	// (0x00033ff7) image3_infobar_time_pane_t1

0xc70f,	// (0x0003758a) image3_infobar_loc_pane_g1

0x918a,	// (0x00034005) image3_infobar_loc_pane_g2

0x0001,

0xfcb8,	// (0x0003ab33) image3_infobar_loc_pane_g

0x9192,	// (0x0003400d) image3_infobar_loc_pane_t1

0xc70f,	// (0x0003758a) image3_infobar_fav_pane_g1

0x91a0,	// (0x0003401b) image3_infobar_fav_pane_g2

0x0001,

0xfcbd,	// (0x0003ab38) image3_infobar_fav_pane_g

0x91a8,	// (0x00034023) fs_bigclock_status_battery_pane

0x91b1,	// (0x0003402c) fs_bigclock_status_signal_pane

0x91ba,	// (0x00034035) fs_bigclock_status_title_pane

0x91c3,	// (0x0003403e) fs_bigclock_status_signal_pane_g1

0x91cc,	// (0x00034047) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcc2,	// (0x0003ab3d) fs_bigclock_status_signal_pane_g

0x91d4,	// (0x0003404f) fs_bigclock_status_battery_pane_g1

0x91dd,	// (0x00034058) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcc7,	// (0x0003ab42) fs_bigclock_status_battery_pane_g

0x91e5,	// (0x00034060) fs_bigclock_status_title_pane_t1

0x91f3,	// (0x0003406e) main_fs_bigclock_clock_pane_g1

0x91f3,	// (0x0003406e) main_fs_bigclock_clock_pane_g2

0x91f3,	// (0x0003406e) main_fs_bigclock_clock_pane_g3

0x91f3,	// (0x0003406e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfccc,	// (0x0003ab47) main_fs_bigclock_clock_pane_g

0x920b,	// (0x00034086) main_fs_bigclock_clock_pane_t1

0x9223,	// (0x0003409e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcd5,	// (0x0003ab50) main_fs_bigclock_clock_pane_t

0x9241,	// (0x000340bc) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9241,	// (0x000340bc) list_single_fs_bigclock_indicator_pane

0x9252,	// (0x000340cd) list_single_fs_bigclock_pane_ParamLimits

0x9252,	// (0x000340cd) list_single_fs_bigclock_pane

0x92bc,	// (0x00034137) main_fs_bigclock_indicator_pane_t1

0x92cb,	// (0x00034146) list_single_fs_bigclock_pane_g1

0x92d3,	// (0x0003414e) list_single_fs_bigclock_pane_t1

0xc70f,	// (0x0003758a) main_fs_bigclock_swipe_pane_g1

0x9316,	// (0x00034191) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfce6,	// (0x0003ab61) main_fs_bigclock_swipe_pane_g

0x931e,	// (0x00034199) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x931e,	// (0x00034199) main_fs_bigclock_swipe_pane_t1

0x3265,	// (0x0002e0e0) call_type_pane_ParamLimits

0xb57d,	// (0x000363f8) main_btmg_pane

0x8c0b,	// (0x00033a86) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8c0b,	// (0x00033a86) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc59,	// (0x0003aad4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc59,	// (0x0003aad4) list_single_cale_mrui_row_pane_g

0x8fcd,	// (0x00033e48) list_recal_vselct_arw_lo_pane

0x8fd5,	// (0x00033e50) list_recal_vselct_arw_up_pane

0x8fdd,	// (0x00033e58) list_recal_vselct_pane

0x933b,	// (0x000341b6) btmg_button_pane

0x9345,	// (0x000341c0) main_btmg_pane_g1

0xb57d,	// (0x000363f8) bg_button_pane_cp044

0x934f,	// (0x000341ca) btmg_button_pane_t1

0xe4c9,	// (0x00039344) aid_listscroll_gen

0xc66a,	// (0x000374e5) main_cntbar_detail_pane

0x87a9,	// (0x00033624) list_cmail_folder_pane

0x3259,	// (0x0002e0d4) sp_fs_scroll_pane_cp03_ParamLimits

0x935d,	// (0x000341d8) list_single_fs_dyc_pane_cp01_ParamLimits

0x935d,	// (0x000341d8) list_single_fs_dyc_pane_cp01

0x9377,	// (0x000341f2) aid_size_cmail_indent

0x9380,	// (0x000341fb) list_single_dyc_row_pane_cp01

0x93bd,	// (0x00034238) cntbar_detail_list_pane_ParamLimits

0x93bd,	// (0x00034238) cntbar_detail_list_pane

0x940f,	// (0x0003428a) main_cntbar_detail_cont_pane_ParamLimits

0x940f,	// (0x0003428a) main_cntbar_detail_cont_pane

0x3259,	// (0x0002e0d4) scroll_pane_cp032_ParamLimits

0x3259,	// (0x0002e0d4) scroll_pane_cp032

0x9423,	// (0x0003429e) cntbar_detail_list_event_pane_ParamLimits

0x9423,	// (0x0003429e) cntbar_detail_list_event_pane

0x93cf,	// (0x0003424a) cntbar_detail_list_shct_pane

0xcbd9,	// (0x00037a54) aid_list_gen

0x9433,	// (0x000342ae) aid_scroll

0x943c,	// (0x000342b7) aid_size_touch_scroll_bar

0x7e5d,	// (0x00032cd8) aid_list_double

0x9445,	// (0x000342c0) aid_list_single

0x9445,	// (0x000342c0) aid_list_single_lg

0x944e,	// (0x000342c9) aid_list_z_g_a_sm

0x9456,	// (0x000342d1) aid_list_z_g_d

0x945e,	// (0x000342d9) aid_txt_z_prm

0x946c,	// (0x000342e7) aid_txt_z_prm_cp01

0x947a,	// (0x000342f5) aid_txt_z_sec

0x9488,	// (0x00034303) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9488,	// (0x00034303) main_cntbar_detail_cont_pane_g1

0x949c,	// (0x00034317) main_cntbar_detail_cont_pane_g2_ParamLimits

0x949c,	// (0x00034317) main_cntbar_detail_cont_pane_g2

0x0001,

0xfceb,	// (0x0003ab66) main_cntbar_detail_cont_pane_g_ParamLimits

0xfceb,	// (0x0003ab66) main_cntbar_detail_cont_pane_g

0x94ac,	// (0x00034327) main_cntbar_detail_cont_pane_t1

0x94ba,	// (0x00034335) main_cntbar_detail_cont_pane_t2

0x94c8,	// (0x00034343) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcf0,	// (0x0003ab6b) main_cntbar_detail_cont_pane_t

0x94d6,	// (0x00034351) cell_cntbar_detail_list_shct_pane_ParamLimits

0x94d6,	// (0x00034351) cell_cntbar_detail_list_shct_pane

0x94e8,	// (0x00034363) cntbar_detail_list_shct_pane_g1

0x94f1,	// (0x0003436c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcf7,	// (0x0003ab72) cntbar_detail_list_shct_pane_g

0x94fa,	// (0x00034375) cntbar_detail_list_event_pane_g1_ParamLimits

0x94fa,	// (0x00034375) cntbar_detail_list_event_pane_g1

0x9506,	// (0x00034381) cntbar_detail_list_event_pane_g2_ParamLimits

0x9506,	// (0x00034381) cntbar_detail_list_event_pane_g2

0x0005,

0xfcfc,	// (0x0003ab77) cntbar_detail_list_event_pane_g_ParamLimits

0xfcfc,	// (0x0003ab77) cntbar_detail_list_event_pane_g

0x9574,	// (0x000343ef) cntbar_detail_list_event_pane_t1_ParamLimits

0x9574,	// (0x000343ef) cntbar_detail_list_event_pane_t1

0x9589,	// (0x00034404) cntbar_detail_list_event_pane_t2_ParamLimits

0x9589,	// (0x00034404) cntbar_detail_list_event_pane_t2

0x0002,

0xfd09,	// (0x0003ab84) cntbar_detail_list_event_pane_t_ParamLimits

0xfd09,	// (0x0003ab84) cntbar_detail_list_event_pane_t

0xc70f,	// (0x0003758a) cell_cntbar_detail_list_shct_pane_g1

0x35ff,	// (0x0002e47a) navi_pane_mv_g3

0xc66a,	// (0x000374e5) main_cntbar_detail_pane_ParamLimits

0xb57d,	// (0x000363f8) main_notif_wgt_pane

0xba33,	// (0x000368ae) aid_tch_main_mp4_pane_g4

0xbcab,	// (0x00036b26) popup_slider_window_cp02

0x8fc3,	// (0x00033e3e) list_recal_day_event_pane

0x9389,	// (0x00034204) cntbar_detail_btn_pane_ParamLimits

0x9389,	// (0x00034204) cntbar_detail_btn_pane

0x93a2,	// (0x0003421d) cntbar_detail_btn_pane_cp01_ParamLimits

0x93a2,	// (0x0003421d) cntbar_detail_btn_pane_cp01

0x93cf,	// (0x0003424a) cntbar_detail_list_shct_pane_ParamLimits

0x93df,	// (0x0003425a) cntbar_detail_pane_g1_ParamLimits

0x93df,	// (0x0003425a) cntbar_detail_pane_g1

0x93f3,	// (0x0003426e) cntbar_detail_pane_t1_ParamLimits

0x93f3,	// (0x0003426e) cntbar_detail_pane_t1

0x9512,	// (0x0003438d) cntbar_detail_list_event_pane_g3_ParamLimits

0x9512,	// (0x0003438d) cntbar_detail_list_event_pane_g3

0x952a,	// (0x000343a5) cntbar_detail_list_event_pane_g4_ParamLimits

0x952a,	// (0x000343a5) cntbar_detail_list_event_pane_g4

0x9542,	// (0x000343bd) cntbar_detail_list_event_pane_g5_ParamLimits

0x9542,	// (0x000343bd) cntbar_detail_list_event_pane_g5

0x955a,	// (0x000343d5) cntbar_detail_list_event_pane_g6_ParamLimits

0x955a,	// (0x000343d5) cntbar_detail_list_event_pane_g6

0x959e,	// (0x00034419) cntbar_detail_list_event_pane_t3_ParamLimits

0x959e,	// (0x00034419) cntbar_detail_list_event_pane_t3

0x95b0,	// (0x0003442b) popup_notif_wgt_window_ParamLimits

0x95b0,	// (0x0003442b) popup_notif_wgt_window

0x95c9,	// (0x00034444) popup_submenu_window_cp01_ParamLimits

0x95c9,	// (0x00034444) popup_submenu_window_cp01

0xc961,	// (0x000377dc) bg_popup_window_pane_cp10

0x95dd,	// (0x00034458) listscroll_notif_wgt_pane

0x95ef,	// (0x0003446a) list_notif_wgt_window

0x95f8,	// (0x00034473) scroll_pane_cp033

0x9601,	// (0x0003447c) list_notif_wgt_row_pane_ParamLimits

0x9601,	// (0x0003447c) list_notif_wgt_row_pane

0x9611,	// (0x0003448c) aid_size_list_notif_wgt_del

0x961e,	// (0x00034499) list_notif_wgt_row_pane_g1

0x962a,	// (0x000344a5) list_notif_wgt_row_pane_g2

0x9639,	// (0x000344b4) list_notif_wgt_row_pane_g3

0x0002,

0xfd10,	// (0x0003ab8b) list_notif_wgt_row_pane_g

0x9646,	// (0x000344c1) list_notif_wgt_row_pane_t1

0x965c,	// (0x000344d7) list_notif_wgt_row_pane_t2

0x966e,	// (0x000344e9) list_notif_wgt_row_pane_t3

0x0002,

0xfd17,	// (0x0003ab92) list_notif_wgt_row_pane_t

0x5f43,	// (0x00030dbe) list_recal_day_event_pane_g1

0x9680,	// (0x000344fb) list_recal_day_event_pane_t1

0xb57d,	// (0x000363f8) bg_button_pane_cp045

0x968f,	// (0x0003450a) cntbar_detail_btn_pane_t1

0xd329,	// (0x000381a4) main_callh_pane_ParamLimits

0xd329,	// (0x000381a4) main_callh_pane

0xb57d,	// (0x000363f8) main_coverflow0_pane

0xb57d,	// (0x000363f8) main_wgtman_pane

0x7c46,	// (0x00032ac1) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7c46,	// (0x00032ac1) main_fs_bigclock_unlock_btn_pane

0x873a,	// (0x000335b5) bg_button_pane_cp16

0x874a,	// (0x000335c5) cell_tport_appsw_pane_g3

0x969d,	// (0x00034518) cf0_flow_pane_ParamLimits

0x969d,	// (0x00034518) cf0_flow_pane

0x96b2,	// (0x0003452d) listscroll_cf0_pane

0x96bd,	// (0x00034538) main_cf0_pane_g1

0x96cf,	// (0x0003454a) main_cf0_pane_t1_ParamLimits

0x96cf,	// (0x0003454a) main_cf0_pane_t1

0x96e6,	// (0x00034561) main_cf0_pane_t2_ParamLimits

0x96e6,	// (0x00034561) main_cf0_pane_t2

0x0001,

0xfd23,	// (0x0003ab9e) main_cf0_pane_t_ParamLimits

0xfd23,	// (0x0003ab9e) main_cf0_pane_t

0x96fd,	// (0x00034578) scroll_pane_cp11

0x9708,	// (0x00034583) cf0_flow_pane_g1

0x9714,	// (0x0003458f) cf0_flow_pane_g2

0x0001,

0xfd28,	// (0x0003aba3) cf0_flow_pane_g

0x9720,	// (0x0003459b) cf0_flow_pane_t1

0xb57d,	// (0x000363f8) main_call6_pane

0xb57d,	// (0x000363f8) main_calllock_pane

0x17a0,	// (0x0002c61b) call6_btn_grp_pane_ParamLimits

0x17a0,	// (0x0002c61b) call6_btn_grp_pane

0x17ba,	// (0x0002c635) call6_pane_g1_ParamLimits

0x17ba,	// (0x0002c635) call6_pane_g1

0x17d3,	// (0x0002c64e) popup_call6_1st_window_ParamLimits

0x17d3,	// (0x0002c64e) popup_call6_1st_window

0x17e7,	// (0x0002c662) popup_call6_2nd_window_ParamLimits

0x17e7,	// (0x0002c662) popup_call6_2nd_window

0x17fb,	// (0x0002c676) cell_call6_btn_pane_ParamLimits

0x17fb,	// (0x0002c676) cell_call6_btn_pane

0xc961,	// (0x000377dc) bg_popup_call2_in_pane_cp03

0x9732,	// (0x000345ad) popup_call6_1st_window_g1

0x973a,	// (0x000345b5) popup_call6_1st_window_g2

0x9742,	// (0x000345bd) popup_call6_1st_window_g3

0x0002,

0xfd2d,	// (0x0003aba8) popup_call6_1st_window_g

0x974a,	// (0x000345c5) popup_call6_1st_window_t1

0x9759,	// (0x000345d4) popup_call6_1st_window_t2

0x9769,	// (0x000345e4) popup_call6_1st_window_t3

0x0002,

0xfd34,	// (0x0003abaf) popup_call6_1st_window_t

0xc961,	// (0x000377dc) bg_popup_call2_in_pane_cp04

0x9779,	// (0x000345f4) popup_call6_2nd_window_g1

0x9781,	// (0x000345fc) popup_call6_2nd_window_g2

0x9789,	// (0x00034604) popup_call6_2nd_window_g3

0x0002,

0xfd3b,	// (0x0003abb6) popup_call6_2nd_window_g

0x9791,	// (0x0003460c) popup_call6_2nd_window_t1

0xb600,	// (0x0003647b) bg_button_pane_cp15

0xbee3,	// (0x00036d5e) cell_call6_btn_pane_g1

0xbeec,	// (0x00036d67) cell_call6_btn_pane_t1

0x97a0,	// (0x0003461b) listscroll_wgtman_pane_ParamLimits

0x97a0,	// (0x0003461b) listscroll_wgtman_pane

0x97c1,	// (0x0003463c) wgtman_btn_pane_ParamLimits

0x97c1,	// (0x0003463c) wgtman_btn_pane

0xd116,	// (0x00037f91) aid_scroll_copy1

0x9804,	// (0x0003467f) list_wgtman_pane

0x980e,	// (0x00034689) wgtman_btn_pane_g1_ParamLimits

0x980e,	// (0x00034689) wgtman_btn_pane_g1

0x983a,	// (0x000346b5) wgtman_btn_pane_t1_ParamLimits

0x983a,	// (0x000346b5) wgtman_btn_pane_t1

0x9877,	// (0x000346f2) wgtman_btn_pane_t2_ParamLimits

0x9877,	// (0x000346f2) wgtman_btn_pane_t2

0x0001,

0xfd42,	// (0x0003abbd) wgtman_btn_pane_t_ParamLimits

0xfd42,	// (0x0003abbd) wgtman_btn_pane_t

0x988e,	// (0x00034709) listrow_wgtman_pane_ParamLimits

0x988e,	// (0x00034709) listrow_wgtman_pane

0x98a2,	// (0x0003471d) listrow_wgtman_pane_g1

0x98af,	// (0x0003472a) listrow_wgtman_pane_g2

0x0001,

0xfd47,	// (0x0003abc2) listrow_wgtman_pane_g

0x98cd,	// (0x00034748) listrow_wgtman_pane_t1

0x98e5,	// (0x00034760) listrow_wgtman_pane_t2

0x0001,

0xfd4c,	// (0x0003abc7) listrow_wgtman_pane_t

0x990b,	// (0x00034786) wait_bar_pane_cp09

0x991d,	// (0x00034798) main_calllock_btn_pane

0x9927,	// (0x000347a2) main_calllock_pane_g1

0xb57d,	// (0x000363f8) bg_button_pane_cp17

0x9933,	// (0x000347ae) main_calllock_btn_pane_g1

0x993c,	// (0x000347b7) main_calllock_btn_pane_t1

0xb57d,	// (0x000363f8) main_dialer3_pane

0xb57d,	// (0x000363f8) main_fmrd2_pane

0xc70f,	// (0x0003758a) main_fs_bigclock_unlock_btn_pane_g1

0x9953,	// (0x000347ce) main_fs_bigclock_unlock_btn_pane_t1

0x9961,	// (0x000347dc) area_fmrd2_info_pane_ParamLimits

0x9961,	// (0x000347dc) area_fmrd2_info_pane

0x9972,	// (0x000347ed) area_fmrd2_visual_pane_ParamLimits

0x9972,	// (0x000347ed) area_fmrd2_visual_pane

0x9980,	// (0x000347fb) fmrd2_indi_pane_ParamLimits

0x9980,	// (0x000347fb) fmrd2_indi_pane

0x998d,	// (0x00034808) area_fmrd2_visual_pane_g1

0x9995,	// (0x00034810) area_fmrd2_visual_pane_t1

0x99a5,	// (0x00034820) area_fmrd2_visual_pane_t2

0x99b5,	// (0x00034830) area_fmrd2_visual_pane_t3

0x0002,

0xfd56,	// (0x0003abd1) area_fmrd2_visual_pane_t

0x99c5,	// (0x00034840) area_fmrd2_info_pane_g1

0x99cd,	// (0x00034848) area_fmrd2_info_pane_t1

0x99dd,	// (0x00034858) area_fmrd2_info_pane_t2

0x99ed,	// (0x00034868) area_fmrd2_info_pane_t3

0x99fd,	// (0x00034878) area_fmrd2_info_pane_t4

0x0003,

0xfd5d,	// (0x0003abd8) area_fmrd2_info_pane_t

0x9a0d,	// (0x00034888) fmrd2_indi_pane_t1

0x9a1d,	// (0x00034898) fmrd2_indi_pane_t2

0x9a2d,	// (0x000348a8) fmrd2_indi_pane_t3

0x0002,

0xfd66,	// (0x0003abe1) fmrd2_indi_pane_t

0x7ccf,	// (0x00032b4a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7ccf,	// (0x00032b4a) list_single_fs_bigclock_indicator_pane_g5

0x7d84,	// (0x00032bff) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7d84,	// (0x00032bff) list_single_fs_bigclock_indicator_pane_t5

0x8ad0,	// (0x0003394b) aid_cell_bcale_month_pane_ParamLimits

0x8ad0,	// (0x0003394b) aid_cell_bcale_month_pane

0x8ad0,	// (0x0003394b) bcale_month_pane_ParamLimits

0x8ad0,	// (0x0003394b) bcale_month_pane

0x4e9e,	// (0x0002fd19) bcale_preview_pane_ParamLimits

0x4e9e,	// (0x0002fd19) bcale_preview_pane

0x92d3,	// (0x0003414e) list_single_fs_bigclock_pane_t1_ParamLimits

0x92f2,	// (0x0003416d) list_single_fs_bigclock_pane_t2_ParamLimits

0x92f2,	// (0x0003416d) list_single_fs_bigclock_pane_t2

0x0001,

0xfce1,	// (0x0003ab5c) list_single_fs_bigclock_pane_t_ParamLimits

0xfce1,	// (0x0003ab5c) list_single_fs_bigclock_pane_t

0x994b,	// (0x000347c6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd51,	// (0x0003abcc) main_fs_bigclock_unlock_btn_pane_g

0x9a3d,	// (0x000348b8) aid_dia3_key_size_ParamLimits

0x9a3d,	// (0x000348b8) aid_dia3_key_size

0x9a51,	// (0x000348cc) aid_dia3_listrow_size_ParamLimits

0x9a51,	// (0x000348cc) aid_dia3_listrow_size

0x9a6b,	// (0x000348e6) dia3_keypad_fun_pane_ParamLimits

0x9a6b,	// (0x000348e6) dia3_keypad_fun_pane

0x9a85,	// (0x00034900) dia3_keypad_num_pane_ParamLimits

0x9a85,	// (0x00034900) dia3_keypad_num_pane

0x9a9f,	// (0x0003491a) dia3_listscroll_pane_ParamLimits

0x9a9f,	// (0x0003491a) dia3_listscroll_pane

0x9ab5,	// (0x00034930) dia3_numentry_pane_ParamLimits

0x9ab5,	// (0x00034930) dia3_numentry_pane

0x9acf,	// (0x0003494a) dia3_list_pane

0x9ad9,	// (0x00034954) scroll_pane_cp12

0xb57d,	// (0x000363f8) bg_dia3_numentry_pane

0x9ae4,	// (0x0003495f) dia3_numentry_pane_t1

0xebad,	// (0x00039a28) cell_dia3_key_num_pane

0x9af3,	// (0x0003496e) cell_dia3_key0_fun_pane_ParamLimits

0x9af3,	// (0x0003496e) cell_dia3_key0_fun_pane

0x9b07,	// (0x00034982) cell_dia3_key1_fun_pane_ParamLimits

0x9b07,	// (0x00034982) cell_dia3_key1_fun_pane

0x9b1c,	// (0x00034997) dia3_listrow_pane

0x772e,	// (0x000325a9) bg_dia3_numentry_pane_g1

0xb57d,	// (0x000363f8) bg_button_pane_cp21

0x9b2e,	// (0x000349a9) cell_dia3_key_num_pane_t1

0x9b3c,	// (0x000349b7) cell_dia3_key_num_pane_t2

0x9b3c,	// (0x000349b7) cell_dia3_key_num_pane_t3

0x9b3c,	// (0x000349b7) cell_dia3_key_num_pane_t4

0x0003,

0xfd6d,	// (0x0003abe8) cell_dia3_key_num_pane_t

0xb57d,	// (0x000363f8) bg_button_pane_cp19

0x9b4b,	// (0x000349c6) cell_dia3_key0_fun_pane_g1

0xb57d,	// (0x000363f8) bg_button_pane_cp20

0x9b53,	// (0x000349ce) cell_dia3_key1_fun_pane_g1

0x4e9e,	// (0x0002fd19) area_left_week_number_pane

0x4e9e,	// (0x0002fd19) area_top_day_name_pane

0x4e9e,	// (0x0002fd19) frame_month_view_pane

0x4e9e,	// (0x0002fd19) grid_month_view_pane

0x4e9e,	// (0x0002fd19) cell_top_day_name_pane_ParamLimits

0x4e9e,	// (0x0002fd19) cell_top_day_name_pane

0x4e9e,	// (0x0002fd19) cell_area_left_week_number_pane_ParamLimits

0x4e9e,	// (0x0002fd19) cell_area_left_week_number_pane

0x4e9e,	// (0x0002fd19) cell_month_view_pane_ParamLimits

0x4e9e,	// (0x0002fd19) cell_month_view_pane

0x4a55,	// (0x0002f8d0) frm_month_g1

0x4a55,	// (0x0002f8d0) frm_month_g2

0x4a55,	// (0x0002f8d0) frm_month_g3

0x4a55,	// (0x0002f8d0) frm_month_g4

0x4a55,	// (0x0002f8d0) frm_month_g5

0x4a55,	// (0x0002f8d0) frm_month_g6

0x4a55,	// (0x0002f8d0) frm_month_g7

0x4a55,	// (0x0002f8d0) frm_month_g8

0x4a55,	// (0x0002f8d0) frm_month_g9

0x4a55,	// (0x0002f8d0) frm_month_g10

0x4a55,	// (0x0002f8d0) frm_month_g11

0x4a55,	// (0x0002f8d0) frm_month_g12

0x4a55,	// (0x0002f8d0) frm_month_g13

0x4a55,	// (0x0002f8d0) frm_month_g14

0x4a55,	// (0x0002f8d0) frm_month_g15

0x4a55,	// (0x0002f8d0) frm_month_g16

0x000f,

0xfd76,	// (0x0003abf1) frm_month_g

0x9b5b,	// (0x000349d6) cell_top_day_name_pane_t1

0x4a55,	// (0x0002f8d0) cell_area_left_week_number_pane_g1

0x9b5b,	// (0x000349d6) cell_area_left_week_number_pane_t1

0x4a55,	// (0x0002f8d0) cell_month_view_pane_g1

0x9b5b,	// (0x000349d6) cell_month_view_pane_t1

0xb57d,	// (0x000363f8) main_fps_pane

0x817f,	// (0x00032ffa) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x817f,	// (0x00032ffa) cmail_ddmenu_btn02_pane_cp1

0x819b,	// (0x00033016) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x819b,	// (0x00033016) cmail_ddmenu_btn02_pane_cp2

0x8f71,	// (0x00033dec) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8f71,	// (0x00033dec) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc94,	// (0x0003ab0f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc94,	// (0x0003ab0f) cmail_ddmenu_btn02_pane_g

0x8f92,	// (0x00033e0d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8f92,	// (0x00033e0d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc99,	// (0x0003ab14) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc99,	// (0x0003ab14) cmail_ddmenu_btn02_pane_t

0x9b6d,	// (0x000349e8) fps_text_pane_ParamLimits

0x9b6d,	// (0x000349e8) fps_text_pane

0x9b84,	// (0x000349ff) main_fps_pane_g1_ParamLimits

0x9b84,	// (0x000349ff) main_fps_pane_g1

0x9b9c,	// (0x00034a17) wait_bar_pane_cp010_ParamLimits

0x9b9c,	// (0x00034a17) wait_bar_pane_cp010

0x9baf,	// (0x00034a2a) fps_text_pane_t1_ParamLimits

0x9baf,	// (0x00034a2a) fps_text_pane_t1

0x54e8,	// (0x00030363) cam4_image_uncrop_pane_g1

0x54f1,	// (0x0003036c) cam4_image_uncrop_pane_g2

0x54fc,	// (0x00030377) cam4_image_uncrop_pane_g3

0x5505,	// (0x00030380) cam4_image_uncrop_pane_g4

0x0003,

0xf7e0,	// (0x0003a65b) cam4_image_uncrop_pane_g

0x9b1c,	// (0x00034997) dia3_listrow_pane_ParamLimits

0xb57d,	// (0x000363f8) main_phob2_pane

0x86d2,	// (0x0003354d) cell_tport_appsw_pane_cp02_ParamLimits

0x86d2,	// (0x0003354d) cell_tport_appsw_pane_cp02

0x86e6,	// (0x00033561) cell_tport_appsw_pane_cp03_ParamLimits

0x86e6,	// (0x00033561) cell_tport_appsw_pane_cp03

0xb57d,	// (0x000363f8) phob2_contact_card_pane

0xb57d,	// (0x000363f8) phob2_listscroll_pane

0x9bc7,	// (0x00034a42) phob2_list_pane

0x9bcf,	// (0x00034a4a) scroll_pane_cp034

0x9bd7,	// (0x00034a52) phob2_cc_data_pane_ParamLimits

0x9bd7,	// (0x00034a52) phob2_cc_data_pane

0x9bf0,	// (0x00034a6b) phob2_cc_listscroll_pane_ParamLimits

0x9bf0,	// (0x00034a6b) phob2_cc_listscroll_pane

0x9c11,	// (0x00034a8c) list_double_large_graphic_phob2_pane_ParamLimits

0x9c11,	// (0x00034a8c) list_double_large_graphic_phob2_pane

0x9c32,	// (0x00034aad) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9c32,	// (0x00034aad) list_double_large_graphic_phob2_pane_g1

0x9c44,	// (0x00034abf) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9c44,	// (0x00034abf) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd97,	// (0x0003ac12) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd97,	// (0x0003ac12) list_double_large_graphic_phob2_pane_g

0x9c78,	// (0x00034af3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9c78,	// (0x00034af3) list_double_large_graphic_phob2_pane_t1

0x9c9c,	// (0x00034b17) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9c9c,	// (0x00034b17) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfda0,	// (0x0003ac1b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfda0,	// (0x0003ac1b) list_double_large_graphic_phob2_pane_t

0xc66a,	// (0x000374e5) list_highlight_pane_cp024

0x9cbd,	// (0x00034b38) phob2_cc_button_pane

0x9cc9,	// (0x00034b44) phob2_cc_data_pane_g1_ParamLimits

0x9cc9,	// (0x00034b44) phob2_cc_data_pane_g1

0x9ce1,	// (0x00034b5c) phob2_cc_data_pane_g2_ParamLimits

0x9ce1,	// (0x00034b5c) phob2_cc_data_pane_g2

0x0001,

0xfda5,	// (0x0003ac20) phob2_cc_data_pane_g_ParamLimits

0xfda5,	// (0x0003ac20) phob2_cc_data_pane_g

0x9cf9,	// (0x00034b74) phob2_cc_data_pane_t1_ParamLimits

0x9cf9,	// (0x00034b74) phob2_cc_data_pane_t1

0x9d27,	// (0x00034ba2) phob2_cc_data_pane_t2_ParamLimits

0x9d27,	// (0x00034ba2) phob2_cc_data_pane_t2

0x9d59,	// (0x00034bd4) phob2_cc_data_pane_t3_ParamLimits

0x9d59,	// (0x00034bd4) phob2_cc_data_pane_t3

0x0002,

0xfdaa,	// (0x0003ac25) phob2_cc_data_pane_t_ParamLimits

0xfdaa,	// (0x0003ac25) phob2_cc_data_pane_t

0x9d89,	// (0x00034c04) phob2_cc_list_pane_ParamLimits

0x9d89,	// (0x00034c04) phob2_cc_list_pane

0x62b3,	// (0x0003112e) scroll_pane_cp035_ParamLimits

0x62b3,	// (0x0003112e) scroll_pane_cp035

0xc66a,	// (0x000374e5) bg_button_pane_cp033

0x9d95,	// (0x00034c10) phob2_cc_button_pane_g1

0x9da1,	// (0x00034c1c) phob2_cc_button_pane_t1

0x9db6,	// (0x00034c31) phob2_cc_button_pane_t2

0x0001,

0xfdb1,	// (0x0003ac2c) phob2_cc_button_pane_t

0x9dc8,	// (0x00034c43) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9dc8,	// (0x00034c43) list_double_large_graphic_phob2_cc_pane

0x9dff,	// (0x00034c7a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9dff,	// (0x00034c7a) list_double_large_graphic_phob2_cc_pane_g1

0x9e0b,	// (0x00034c86) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9e0b,	// (0x00034c86) list_double_large_graphic_phob2_cc_pane_g2

0x9e17,	// (0x00034c92) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9e17,	// (0x00034c92) list_double_large_graphic_phob2_cc_pane_g3

0x9e23,	// (0x00034c9e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9e23,	// (0x00034c9e) list_double_large_graphic_phob2_cc_pane_g4

0x9e2f,	// (0x00034caa) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9e2f,	// (0x00034caa) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdb6,	// (0x0003ac31) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdb6,	// (0x0003ac31) list_double_large_graphic_phob2_cc_pane_g

0x9e3b,	// (0x00034cb6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9e3b,	// (0x00034cb6) list_double_large_graphic_phob2_cc_pane_t1

0x9e64,	// (0x00034cdf) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9e64,	// (0x00034cdf) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdc1,	// (0x0003ac3c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdc1,	// (0x0003ac3c) list_double_large_graphic_phob2_cc_pane_t

0x9e8d,	// (0x00034d08) list_highlight_pane_cp025_ParamLimits

0x9e8d,	// (0x00034d08) list_highlight_pane_cp025

0xc66a,	// (0x000374e5) bg_button_pane_cp033_ParamLimits

0x9d95,	// (0x00034c10) phob2_cc_button_pane_g1_ParamLimits

0x9da1,	// (0x00034c1c) phob2_cc_button_pane_t1_ParamLimits

0x9db6,	// (0x00034c31) phob2_cc_button_pane_t2_ParamLimits

0xfdb1,	// (0x0003ac2c) phob2_cc_button_pane_t_ParamLimits

0x1878,	// (0x0002c6f3) popup_wgtman_window

0x5a31,	// (0x000308ac) scroll_pane_cp038

0x97e6,	// (0x00034661) wgtman_btn_pane_cp_01_ParamLimits

0x97e6,	// (0x00034661) wgtman_btn_pane_cp_01

0x9e9b,	// (0x00034d16) wgtman_content_pane

0x9ea4,	// (0x00034d1f) wgtman_heading_pane

0xb57d,	// (0x000363f8) bg_heading_pane_cp02

0x9ead,	// (0x00034d28) wgtman_heading_pane_g1

0x9eb5,	// (0x00034d30) wgtman_heading_pane_t1

0x9ec3,	// (0x00034d3e) scroll_pane_cp036

0x9ecb,	// (0x00034d46) wgtman_list_pane

0x7e2d,	// (0x00032ca8) wgtman_list_pane_t1_ParamLimits

0x7e2d,	// (0x00032ca8) wgtman_list_pane_t1

0xbd23,	// (0x00036b9e) cam4_grid_pane

0x604a,	// (0x00030ec5) bg_button_pane_cp015_ParamLimits

0x6061,	// (0x00030edc) bg_button_pane_cp016_ParamLimits

0x606d,	// (0x00030ee8) bg_button_pane_cp017_ParamLimits

0x60d4,	// (0x00030f4f) popup_vitu2_query_window_g3_ParamLimits

0x60d4,	// (0x00030f4f) popup_vitu2_query_window_g3

0x6177,	// (0x00030ff2) popup_vitu2_query_window_t6_ParamLimits

0x6177,	// (0x00030ff2) popup_vitu2_query_window_t6

0x61a2,	// (0x0003101d) popup_vitu2_query_window_t7_ParamLimits

0x61a2,	// (0x0003101d) popup_vitu2_query_window_t7

0x54e8,	// (0x00030363) cam4_grid_pane_g1

0x54f1,	// (0x0003036c) cam4_grid_pane_g2

0x9ed3,	// (0x00034d4e) cam4_grid_pane_g3

0x9edc,	// (0x00034d57) cam4_grid_pane_g4

0x0003,

0xfdc6,	// (0x0003ac41) cam4_grid_pane_g

0x2146,	// (0x0002cfc1) aid_placing_vt_slider_lsc_ParamLimits

0x2423,	// (0x0002d29e) vidtel_button_pane_ParamLimits

0x2423,	// (0x0002d29e) vidtel_button_pane

0xb57d,	// (0x000363f8) bg_button_pane_cp034

0x9ee7,	// (0x00034d62) vidtel_button_pane_g1

0x9eef,	// (0x00034d6a) vidtel_button_pane_t1

0x5e26,	// (0x00030ca1) aid_size_vtel_slider_touch

0x62b3,	// (0x0003112e) scroll_pane_cp039

0x779d,	// (0x00032618) ncim_query_button_pane_cp01_ParamLimits

0x77bc,	// (0x00032637) ncimui_query_pane_g1_ParamLimits

0xc66a,	// (0x000374e5) input_focus_pane_cp012_ParamLimits

0x77e1,	// (0x0003265c) ncim_query_entry_pane_t1_ParamLimits

0x62b3,	// (0x0003112e) scroll_pane_cp039_ParamLimits

0x3571,	// (0x0002e3ec) navi_pane_bcale_mc_g1

0x3579,	// (0x0002e3f4) navi_pane_bcale_mc_t1

0x8293,	// (0x0003310e) main_sp_fs_email_pane_g1

0x829f,	// (0x0003311a) main_sp_fs_email_pane_g2

0x0001,

0xfbcc,	// (0x0003aa47) main_sp_fs_email_pane_g

0x8c17,	// (0x00033a92) list_single_cale_mrui_row_pane_g3_ParamLimits

0x8c17,	// (0x00033a92) list_single_cale_mrui_row_pane_g3

0x9037,	// (0x00033eb2) list_single_recal_day_pane_g5_event_pane

0x904d,	// (0x00033ec8) list_single_recal_day_pane_g7

0x9f05,	// (0x00034d80) list_recal_day_event_pane_cp01

0x9f0e,	// (0x00034d89) list_recal_vselct_arw_lo_pane_cp01

0x9f16,	// (0x00034d91) list_recal_vselct_arw_up_pane_cp01

0x9f1e,	// (0x00034d99) list_recal_vselct_pane_cp01

0x5f43,	// (0x00030dbe) list_recal_day_event_pane_cp01_g1

0x9f28,	// (0x00034da3) list_recal_day_event_pane_cp01_t1

0x9055,	// (0x00033ed0) list_single_recal_day_pane_t1_ParamLimits

0x9067,	// (0x00033ee2) list_single_recal_day_pane_t2_ParamLimits

0xfca9,	// (0x0003ab24) list_single_recal_day_pane_t_ParamLimits

0xc648,	// (0x000374c3) bg_notes_pane_ParamLimits

0xc74b,	// (0x000375c6) list_notes_pane_ParamLimits

0x18a8,	// (0x0002c723) scroll_pane_cp06_ParamLimits

0xc76d,	// (0x000375e8) main_notes_pane_ParamLimits

0xc66a,	// (0x000374e5) main_welc_pane

0x9f86,	// (0x00034e01) main_welc_body_pane_ParamLimits

0x9f86,	// (0x00034e01) main_welc_body_pane

0x9fa5,	// (0x00034e20) main_welc_opti_pane_ParamLimits

0x9fa5,	// (0x00034e20) main_welc_opti_pane

0xa01a,	// (0x00034e95) main_welc_pane_t1_ParamLimits

0xa01a,	// (0x00034e95) main_welc_pane_t1

0xa25d,	// (0x000350d8) main_welc_body_row_pane_ParamLimits

0xa25d,	// (0x000350d8) main_welc_body_row_pane

0xc6c3,	// (0x0003753e) main_welc_opti_row_pane_ParamLimits

0xc6c3,	// (0x0003753e) main_welc_opti_row_pane

0xa271,	// (0x000350ec) main_welc_opti_row_pane_g1

0xa279,	// (0x000350f4) main_welc_opti_row_pane_t1

0xa288,	// (0x00035103) main_welc_body_row_pane_t1

0x95e7,	// (0x00034462) popup_notif_wgt_heading_pane

0x9611,	// (0x0003448c) aid_size_list_notif_wgt_del_ParamLimits

0x961e,	// (0x00034499) list_notif_wgt_row_pane_g1_ParamLimits

0x962a,	// (0x000344a5) list_notif_wgt_row_pane_g2_ParamLimits

0x9639,	// (0x000344b4) list_notif_wgt_row_pane_g3_ParamLimits

0xfd10,	// (0x0003ab8b) list_notif_wgt_row_pane_g_ParamLimits

0x9646,	// (0x000344c1) list_notif_wgt_row_pane_t1_ParamLimits

0x965c,	// (0x000344d7) list_notif_wgt_row_pane_t2_ParamLimits

0x966e,	// (0x000344e9) list_notif_wgt_row_pane_t3_ParamLimits

0xfd17,	// (0x0003ab92) list_notif_wgt_row_pane_t_ParamLimits

0x98a2,	// (0x0003471d) listrow_wgtman_pane_g1_ParamLimits

0x98af,	// (0x0003472a) listrow_wgtman_pane_g2_ParamLimits

0xfd47,	// (0x0003abc2) listrow_wgtman_pane_g_ParamLimits

0x98cd,	// (0x00034748) listrow_wgtman_pane_t1_ParamLimits

0x98e5,	// (0x00034760) listrow_wgtman_pane_t2_ParamLimits

0xfd4c,	// (0x0003abc7) listrow_wgtman_pane_t_ParamLimits

0x990b,	// (0x00034786) wait_bar_pane_cp09_ParamLimits

0xb57d,	// (0x000363f8) bg_popup_heading_pane_cp02

0xa297,	// (0x00035112) popup_notif_wgt_heading_pane_g1

0xa29f,	// (0x0003511a) popup_notif_wgt_heading_pane_t1

0xb57d,	// (0x000363f8) main_vids_pane

0xb57d,	// (0x000363f8) vids_listscroll_pane

0xa2ad,	// (0x00035128) scroll_pane_cp040

0xb57d,	// (0x000363f8) vids_list_pane

0xa2b8,	// (0x00035133) vids_list_double_pane_ParamLimits

0xa2b8,	// (0x00035133) vids_list_double_pane

0xa2cb,	// (0x00035146) vids_list_double_pane_g1

0xa2d4,	// (0x0003514f) vids_list_double_pane_t1

0xa2e4,	// (0x0003515f) vids_list_double_pane_t2

0x0001,

0xfde5,	// (0x0003ac60) vids_list_double_pane_t

0xb5f2,	// (0x0003646d) main_ncimui_pane_ParamLimits

0x74bc,	// (0x00032337) main_ncimui_pane_g1_ParamLimits

0x74c8,	// (0x00032343) main_ncimui_pane_g2_ParamLimits

0x74c8,	// (0x00032343) main_ncimui_pane_g2

0x0001,

0xfad2,	// (0x0003a94d) main_ncimui_pane_g_ParamLimits

0xfad2,	// (0x0003a94d) main_ncimui_pane_g

0x9fc4,	// (0x00034e3f) main_welc_pane_g1_ParamLimits

0x9fc4,	// (0x00034e3f) main_welc_pane_g1

0x9fd9,	// (0x00034e54) main_welc_pane_g2_ParamLimits

0x9fd9,	// (0x00034e54) main_welc_pane_g2

0x0003,

0xfdcf,	// (0x0003ac4a) main_welc_pane_g_ParamLimits

0xfdcf,	// (0x0003ac4a) main_welc_pane_g

0xc648,	// (0x000374c3) listscroll_mce_pane_ParamLimits

0x3651,	// (0x0002e4cc) wait_bar_pane_cp10

0xe4d1,	// (0x0003934c) main_cale_day_pane_ParamLimits

0xe4d1,	// (0x0003934c) main_cale_week_pane_ParamLimits

0xc648,	// (0x000374c3) main_messa_pane_ParamLimits

0x4fc4,	// (0x0002fe3f) main_clock2_btn_pane_ParamLimits

0x4fc4,	// (0x0002fe3f) main_clock2_btn_pane

0xec8f,	// (0x00039b0a) main_clock2_btn_pane_cp01_ParamLimits

0xec8f,	// (0x00039b0a) main_clock2_btn_pane_cp01

0x8b75,	// (0x000339f0) list_cale_mrui_pane_ParamLimits

0x96c7,	// (0x00034542) main_cf0_pane_g2

0x0001,

0xfd1e,	// (0x0003ab99) main_cf0_pane_g

0x4e9e,	// (0x0002fd19) area_left_week_number_pane_ParamLimits

0x4e9e,	// (0x0002fd19) area_top_day_name_pane_ParamLimits

0x4e9e,	// (0x0002fd19) frame_month_view_pane_ParamLimits

0x4e9e,	// (0x0002fd19) grid_month_view_pane_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g1_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g2_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g3_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g4_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g5_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g6_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g7_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g8_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g9_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g10_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g11_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g12_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g13_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g14_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g15_ParamLimits

0x4a55,	// (0x0002f8d0) frm_month_g16_ParamLimits

0xfd76,	// (0x0003abf1) frm_month_g_ParamLimits

0x9b5b,	// (0x000349d6) cell_top_day_name_pane_t1_ParamLimits

0x4a55,	// (0x0002f8d0) cell_area_left_week_number_pane_g1_ParamLimits

0x9b5b,	// (0x000349d6) cell_area_left_week_number_pane_t1_ParamLimits

0x4a55,	// (0x0002f8d0) cell_month_view_pane_g1_ParamLimits

0x9b5b,	// (0x000349d6) cell_month_view_pane_t1_ParamLimits

0xc640,	// (0x000374bb) main_clock2_btn_pane_g1

0xa2f4,	// (0x0003516f) main_clock2_btn_pane_t1

0xc66a,	// (0x000374e5) listscroll_cmail_pane_ParamLimits

0x8293,	// (0x0003310e) main_sp_fs_email_pane_g1_ParamLimits

0x829f,	// (0x0003311a) main_sp_fs_email_pane_g2_ParamLimits

0xfbcc,	// (0x0003aa47) main_sp_fs_email_pane_g_ParamLimits

0x8fa4,	// (0x00033e1f) list_recal_day_pane_ParamLimits

0x8fb5,	// (0x00033e30) mian_recal_day_pane_t1

0x847f,	// (0x000332fa) list_single_dyc_row_text_pane_t4_ParamLimits

0x847f,	// (0x000332fa) list_single_dyc_row_text_pane_t4

0x84c8,	// (0x00033343) list_single_dyc_row_text_pane_t5_ParamLimits

0x84c8,	// (0x00033343) list_single_dyc_row_text_pane_t5

0x853e,	// (0x000333b9) list_single_dyc_row_text_pane_t6_ParamLimits

0x853e,	// (0x000333b9) list_single_dyc_row_text_pane_t6

0x31b4,	// (0x0002e02f) aid_mgn_list_cale_time_pane

0xb5f2,	// (0x0003646d) main_gallery2_pane_ParamLimits

0xeca3,	// (0x00039b1e) main_clock2_pane_cp01_t1

0xecb1,	// (0x00039b2c) main_clock2_pane_cp01_t3

0x0001,

0xf6bc,	// (0x0003a537) main_clock2_pane_cp01_t

0x1c44,	// (0x0002cabf) cale_week_scroll_pane_g16_ParamLimits

0x1c44,	// (0x0002cabf) cale_week_scroll_pane_g16

0xc961,	// (0x000377dc) vorec_slider_pane

0x9eef,	// (0x00034d6a) vidtel_button_pane_t1_ParamLimits

0x91f3,	// (0x0003406e) main_fs_bigclock_clock_pane_g1_ParamLimits

0x91f3,	// (0x0003406e) main_fs_bigclock_clock_pane_g2_ParamLimits

0x91f3,	// (0x0003406e) main_fs_bigclock_clock_pane_g3_ParamLimits

0x91f3,	// (0x0003406e) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfccc,	// (0x0003ab47) main_fs_bigclock_clock_pane_g_ParamLimits

0x920b,	// (0x00034086) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9223,	// (0x0003409e) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcd5,	// (0x0003ab50) main_fs_bigclock_clock_pane_t_ParamLimits

0x4841,	// (0x0002f6bc) main_mup3_lyrics_pane_ParamLimits

0x4841,	// (0x0002f6bc) main_mup3_lyrics_pane

0xa302,	// (0x0003517d) main_mup3_lyrics_pane_t1_ParamLimits

0xa302,	// (0x0003517d) main_mup3_lyrics_pane_t1

0xba1d,	// (0x00036898) aid_main_mp4_pane_t1_area

0xba27,	// (0x000368a2) aid_main_mp4_pane_t2_area

0xbad1,	// (0x0003694c) main_mp4_pane_g7_ParamLimits

0xbad1,	// (0x0003694c) main_mp4_pane_g7

0xbadd,	// (0x00036958) main_mp4_pane_g8_ParamLimits

0xbadd,	// (0x00036958) main_mp4_pane_g8

0x0f6b,	// (0x0002bde6) aid_call6_pane_g1_size

0x9de7,	// (0x00034c62) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9de7,	// (0x00034c62) list_double_large_graphic_phob2_other_pane

0xc877,	// (0x000376f2) list_double_large_graphic_phob2_other_pane_g1

0xb57d,	// (0x000363f8) list_highlight_pane_cp026

0xc66a,	// (0x000374e5) main_welc_pane_ParamLimits

0x81fc,	// (0x00033077) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x81fc,	// (0x00033077) main_sp_fs_ctrlbar_pane_g3

0x8216,	// (0x00033091) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8216,	// (0x00033091) main_sp_fs_ctrlbar_pane_g4

0x824a,	// (0x000330c5) toolbar2_fixed_button_pane_cp01

0x8255,	// (0x000330d0) toolbar2_fixed_button_pane_cp02

0x8262,	// (0x000330dd) toolbar2_fixed_button_pane_cp03

0x9f58,	// (0x00034dd3) list_welc_entry_pane_ParamLimits

0x9f58,	// (0x00034dd3) list_welc_entry_pane

0x9fee,	// (0x00034e69) main_welc_pane_g3_ParamLimits

0x9fee,	// (0x00034e69) main_welc_pane_g3

0xa03c,	// (0x00034eb7) main_welc_pane_t2_ParamLimits

0xa03c,	// (0x00034eb7) main_welc_pane_t2

0xa05f,	// (0x00034eda) main_welc_pane_t3_ParamLimits

0xa05f,	// (0x00034eda) main_welc_pane_t3

0x0005,

0xfdd8,	// (0x0003ac53) main_welc_pane_t_ParamLimits

0xfdd8,	// (0x0003ac53) main_welc_pane_t

0xa1ac,	// (0x00035027) welc_button_pane_ParamLimits

0xa1ac,	// (0x00035027) welc_button_pane

0xa245,	// (0x000350c0) welc_service_logo_pane_ParamLimits

0xa245,	// (0x000350c0) welc_service_logo_pane

0xa31d,	// (0x00035198) list_single_welc_entry_pane_ParamLimits

0xa31d,	// (0x00035198) list_single_welc_entry_pane

0xa32e,	// (0x000351a9) list_single_welc_entry_pane_g1

0xa336,	// (0x000351b1) list_single_welc_entry_pane_t1

0xa344,	// (0x000351bf) list_single_welc_entry_pane_t2

0x0001,

0xfdea,	// (0x0003ac65) list_single_welc_entry_pane_t

0xb57d,	// (0x000363f8) bg_button_pane_cp035

0xa352,	// (0x000351cd) welc_button_pane_t1

0xa360,	// (0x000351db) welc_service_logo_pane_g1

0xa369,	// (0x000351e4) welc_service_logo_pane_g2

0x0001,

0xfdef,	// (0x0003ac6a) welc_service_logo_pane_g

0xb600,	// (0x0003647b) main_int_radio_pane

0x745d,	// (0x000322d8) list_single_fs_dyc_pane_g1

0x9c53,	// (0x00034ace) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x9c53,	// (0x00034ace) list_double_large_graphic_phob2_pane_g3

0x9c65,	// (0x00034ae0) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9c65,	// (0x00034ae0) list_double_large_graphic_phob2_pane_g4

0xa372,	// (0x000351ed) main_int_radio1_pane_ParamLimits

0xa372,	// (0x000351ed) main_int_radio1_pane

0xa38f,	// (0x0003520a) find_pane_cp02

0xa398,	// (0x00035213) input_focus_pane_cp12_ParamLimits

0xa398,	// (0x00035213) input_focus_pane_cp12

0xa3a8,	// (0x00035223) input_focus_pane_cp13_ParamLimits

0xa3a8,	// (0x00035223) input_focus_pane_cp13

0xa3bc,	// (0x00035237) input_focus_pane_cp14_ParamLimits

0xa3bc,	// (0x00035237) input_focus_pane_cp14

0xa3d0,	// (0x0003524b) int_radio1_listscroll_pane

0xa3da,	// (0x00035255) main_int_radio1_pane_g1_ParamLimits

0xa3da,	// (0x00035255) main_int_radio1_pane_g1

0xa3f0,	// (0x0003526b) main_int_radio1_pane_t1_ParamLimits

0xa3f0,	// (0x0003526b) main_int_radio1_pane_t1

0xa409,	// (0x00035284) main_int_radio1_pane_t2_ParamLimits

0xa409,	// (0x00035284) main_int_radio1_pane_t2

0xa424,	// (0x0003529f) main_int_radio1_pane_t3_ParamLimits

0xa424,	// (0x0003529f) main_int_radio1_pane_t3

0xa43f,	// (0x000352ba) main_int_radio1_pane_t4_ParamLimits

0xa43f,	// (0x000352ba) main_int_radio1_pane_t4

0xa451,	// (0x000352cc) main_int_radio1_pane_t5_ParamLimits

0xa451,	// (0x000352cc) main_int_radio1_pane_t5

0xa463,	// (0x000352de) main_int_radio1_pane_t6_ParamLimits

0xa463,	// (0x000352de) main_int_radio1_pane_t6

0xa478,	// (0x000352f3) main_int_radio1_pane_t7_ParamLimits

0xa478,	// (0x000352f3) main_int_radio1_pane_t7

0xa48d,	// (0x00035308) main_int_radio1_pane_t8_ParamLimits

0xa48d,	// (0x00035308) main_int_radio1_pane_t8

0xa4aa,	// (0x00035325) main_int_radio1_pane_t9_ParamLimits

0xa4aa,	// (0x00035325) main_int_radio1_pane_t9

0xa4bc,	// (0x00035337) main_int_radio1_pane_t10_ParamLimits

0xa4bc,	// (0x00035337) main_int_radio1_pane_t10

0xa4e2,	// (0x0003535d) main_int_radio1_pane_t11_ParamLimits

0xa4e2,	// (0x0003535d) main_int_radio1_pane_t11

0xa508,	// (0x00035383) main_int_radio1_pane_t12_ParamLimits

0xa508,	// (0x00035383) main_int_radio1_pane_t12

0x000b,

0xfdf4,	// (0x0003ac6f) main_int_radio1_pane_t_ParamLimits

0xfdf4,	// (0x0003ac6f) main_int_radio1_pane_t

0x9bc7,	// (0x00034a42) int_radio_list_pane

0x9bcf,	// (0x00034a4a) scroll_pane_cp037

0xa51a,	// (0x00035395) list_double_large_graphic_int_radio_pane_ParamLimits

0xa51a,	// (0x00035395) list_double_large_graphic_int_radio_pane

0xa52e,	// (0x000353a9) list_double_large_graphic_int_radio_pane_g1

0xa537,	// (0x000353b2) list_double_large_graphic_int_radio_pane_t1

0xa545,	// (0x000353c0) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe0d,	// (0x0003ac88) list_double_large_graphic_int_radio_pane_t

0xb57d,	// (0x000363f8) list_highlight_pane_cp027

0x9f72,	// (0x00034ded) main_button_pane_4

0xa002,	// (0x00034e7d) main_welc_pane_g4_ParamLimits

0xa002,	// (0x00034e7d) main_welc_pane_g4

0xa082,	// (0x00034efd) main_welc_pane_t4_ParamLimits

0xa082,	// (0x00034efd) main_welc_pane_t4

0xa0a5,	// (0x00034f20) main_welc_pane_t5_ParamLimits

0xa0a5,	// (0x00034f20) main_welc_pane_t5

0xa0e4,	// (0x00034f5f) main_welc_pane_t6_ParamLimits

0xa0e4,	// (0x00034f5f) main_welc_pane_t6

0xa1c0,	// (0x0003503b) welc_button_pane_2_ParamLimits

0xa1c0,	// (0x0003503b) welc_button_pane_2

0xa1e7,	// (0x00035062) welc_button_pane_3_ParamLimits

0xa1e7,	// (0x00035062) welc_button_pane_3

0x9f72,	// (0x00034ded) welc_button_pane_4

0xa211,	// (0x0003508c) welc_button_pane_5_ParamLimits

0xa211,	// (0x0003508c) welc_button_pane_5

0x02e5,	// (0x0002b160) main_popup_welc_pane

0xa56b,	// (0x000353e6) main_welc_sk_g3

0xa575,	// (0x000353f0) main_welc_sk_g4

0xa57f,	// (0x000353fa) main_welc_sk_t3

0xa58f,	// (0x0003540a) main_welc_sk_t4

0xa59f,	// (0x0003541a) popup_welc_pane_t4

0xa5ad,	// (0x00035428) popup_welc_pane_t5

0xa5bb,	// (0x00035436) popup_welc_pane_t6

0xb600,	// (0x0003647b) main_acti_pane

0xb57d,	// (0x000363f8) main_sso_pane

0xa5fd,	// (0x00035478) sso_body_pane_ParamLimits

0xa5fd,	// (0x00035478) sso_body_pane

0xa620,	// (0x0003549b) sso_logo_pane_ParamLimits

0xa620,	// (0x0003549b) sso_logo_pane

0xa65e,	// (0x000354d9) sso_sk_pane_ParamLimits

0xa65e,	// (0x000354d9) sso_sk_pane

0xa670,	// (0x000354eb) main_sso_logo_pane_g1

0xa679,	// (0x000354f4) sso_sk_pane_t1_ParamLimits

0xa679,	// (0x000354f4) sso_sk_pane_t1

0xa693,	// (0x0003550e) sso_sk_pane_t2_ParamLimits

0xa693,	// (0x0003550e) sso_sk_pane_t2

0x0001,

0xfe12,	// (0x0003ac8d) sso_sk_pane_t_ParamLimits

0xfe12,	// (0x0003ac8d) sso_sk_pane_t

0xa6a9,	// (0x00035524) aid_sso_gap

0xa6b2,	// (0x0003552d) aid_sso_txt1

0xa6bc,	// (0x00035537) aid_sso_txt2

0xa6c6,	// (0x00035541) aid_sso_txt3

0x0002,

0xfe17,	// (0x0003ac92) aid_sso_txt

0xa6d0,	// (0x0003554b) aid_sso_widget

0xa72e,	// (0x000355a9) sso_btn_pane_ParamLimits

0xa72e,	// (0x000355a9) sso_btn_pane

0xa7c2,	// (0x0003563d) sso_option_pane_ParamLimits

0xa7c2,	// (0x0003563d) sso_option_pane

0xa876,	// (0x000356f1) sso_query_pane_ParamLimits

0xa876,	// (0x000356f1) sso_query_pane

0xa8cc,	// (0x00035747) sso_query_pane_cp01_ParamLimits

0xa8cc,	// (0x00035747) sso_query_pane_cp01

0xa92a,	// (0x000357a5) sso_t_hdr_pane_ParamLimits

0xa92a,	// (0x000357a5) sso_t_hdr_pane

0xa954,	// (0x000357cf) sso_t_nml_pane_ParamLimits

0xa954,	// (0x000357cf) sso_t_nml_pane

0xa9aa,	// (0x00035825) sso_t_sub_pane

0xa632,	// (0x000354ad) sso_popup_window_ParamLimits

0xa632,	// (0x000354ad) sso_popup_window

0xa6da,	// (0x00035555) sso_apps_pane_ParamLimits

0xa6da,	// (0x00035555) sso_apps_pane

0xa704,	// (0x0003557f) sso_body_pane_g1

0xa70e,	// (0x00035589) sso_body_pane_t1

0xa71e,	// (0x00035599) sso_body_pane_t2

0x0001,

0xfe1e,	// (0x0003ac99) sso_body_pane_t

0xa77a,	// (0x000355f5) sso_btn_pane_cp01_ParamLimits

0xa77a,	// (0x000355f5) sso_btn_pane_cp01

0xa84a,	// (0x000356c5) sso_prog_pane_ParamLimits

0xa84a,	// (0x000356c5) sso_prog_pane

0xa9db,	// (0x00035856) sso_t_hdr_pane_t1_ParamLimits

0xa9db,	// (0x00035856) sso_t_hdr_pane_t1

0xa9ee,	// (0x00035869) input_focus_pane_cp10_ParamLimits

0xa9ee,	// (0x00035869) input_focus_pane_cp10

0xaa02,	// (0x0003587d) sso_query_pane_t1_ParamLimits

0xaa02,	// (0x0003587d) sso_query_pane_t1

0xaa15,	// (0x00035890) sso_query_pane_t2_ParamLimits

0xaa15,	// (0x00035890) sso_query_pane_t2

0xaa2f,	// (0x000358aa) sso_query_pane_t3_ParamLimits

0xaa2f,	// (0x000358aa) sso_query_pane_t3

0xaa59,	// (0x000358d4) sso_query_pane_t4_ParamLimits

0xaa59,	// (0x000358d4) sso_query_pane_t4

0x0003,

0xfe23,	// (0x0003ac9e) sso_query_pane_t_ParamLimits

0xfe23,	// (0x0003ac9e) sso_query_pane_t

0xaa7d,	// (0x000358f8) bg_button_pane_cp22

0xaa86,	// (0x00035901) sso_btn_pane_t1

0xaa95,	// (0x00035910) sso_t_nml_pane_t1_ParamLimits

0xaa95,	// (0x00035910) sso_t_nml_pane_t1

0xaab0,	// (0x0003592b) sso_option_row_pane_ParamLimits

0xaab0,	// (0x0003592b) sso_option_row_pane

0xaabd,	// (0x00035938) sso_t_sub_pane_t1_ParamLimits

0xaabd,	// (0x00035938) sso_t_sub_pane_t1

0xc66a,	// (0x000374e5) bg_popup_window_pane_cp11_ParamLimits

0xc66a,	// (0x000374e5) bg_popup_window_pane_cp11

0xaada,	// (0x00035955) popup_sk_window_cp01_ParamLimits

0xaada,	// (0x00035955) popup_sk_window_cp01

0xaae7,	// (0x00035962) sso_popup_body_pane_ParamLimits

0xaae7,	// (0x00035962) sso_popup_body_pane

0xaaf4,	// (0x0003596f) scroll_pane_cp21_ParamLimits

0xaaf4,	// (0x0003596f) scroll_pane_cp21

0xab01,	// (0x0003597c) sso_popup_body_t_pane_ParamLimits

0xab01,	// (0x0003597c) sso_popup_body_t_pane

0xab0e,	// (0x00035989) sso_popup_body_t_hdr_pane_ParamLimits

0xab0e,	// (0x00035989) sso_popup_body_t_hdr_pane

0xab20,	// (0x0003599b) sso_popup_body_t_nml_pane_ParamLimits

0xab20,	// (0x0003599b) sso_popup_body_t_nml_pane

0xab47,	// (0x000359c2) sso_popup_body_t_sub_pane_ParamLimits

0xab47,	// (0x000359c2) sso_popup_body_t_sub_pane

0xab6a,	// (0x000359e5) sso_popup_body_t_hdr_pane_t1

0xab7a,	// (0x000359f5) sso_popup_body_t_nml_pane_t1_ParamLimits

0xab7a,	// (0x000359f5) sso_popup_body_t_nml_pane_t1

0xabb2,	// (0x00035a2d) sso_popup_body_t_sub_pane_t1_ParamLimits

0xabb2,	// (0x00035a2d) sso_popup_body_t_sub_pane_t1

0xc70f,	// (0x0003758a) sso_prog_pane_g1

0xabd7,	// (0x00035a52) sso_apps_pane_comp1_ParamLimits

0xabd7,	// (0x00035a52) sso_apps_pane_comp1

0xabf1,	// (0x00035a6c) sso_apps_pane_comp1_g1

0xabf9,	// (0x00035a74) sso_apps_pane_comp1_t1

0xac15,	// (0x00035a90) sso_option_row_pane_g1

0xac2d,	// (0x00035aa8) sso_option_row_pane_t1

0x87b1,	// (0x0003362c) list_cmail_pane_ParamLimits

0xb57d,	// (0x000363f8) main_call7_pane

0x9f36,	// (0x00034db1) bg_welc_area_ParamLimits

0x9f36,	// (0x00034db1) bg_welc_area

0xa127,	// (0x00034fa2) sso_t_hdr_pane_a_t1_ParamLimits

0xa127,	// (0x00034fa2) sso_t_hdr_pane_a_t1

0xa142,	// (0x00034fbd) sso_t_nml_pane_a_t1_ParamLimits

0xa142,	// (0x00034fbd) sso_t_nml_pane_a_t1

0xa171,	// (0x00034fec) sso_t_sub_pane_a_t1_ParamLimits

0xa171,	// (0x00034fec) sso_t_sub_pane_a_t1

0xa22c,	// (0x000350a7) welc_button_pane_cp01_ParamLimits

0xa22c,	// (0x000350a7) welc_button_pane_cp01

0xa553,	// (0x000353ce) sso_btn_pane_t1_copy1

0xa562,	// (0x000353dd) welc_button_pane_2_comp1

0xa5cb,	// (0x00035446) sso_t_hdr_pane_p_t1

0xa5db,	// (0x00035456) sso_t_nml_pane_p_t1

0xa5eb,	// (0x00035466) sso_t_sub_pane_p_t1

0xb57d,	// (0x000363f8) main_att_pane

0xb57d,	// (0x000363f8) main_vod_pane

0xa9aa,	// (0x00035825) sso_t_sub_pane_ParamLimits

0xac07,	// (0x00035a82) input_focus_pane_cp10_t1

0xac2d,	// (0x00035aa8) sso_option_row_pane_t1_ParamLimits

0xac49,	// (0x00035ac4) main_att_body_pane_ParamLimits

0xac49,	// (0x00035ac4) main_att_body_pane

0xac5f,	// (0x00035ada) att_btn_emg_pane_ParamLimits

0xac5f,	// (0x00035ada) att_btn_emg_pane

0xac7e,	// (0x00035af9) att_btn_pane_ParamLimits

0xac7e,	// (0x00035af9) att_btn_pane

0xacf1,	// (0x00035b6c) att_btn_pane_cp01_ParamLimits

0xacf1,	// (0x00035b6c) att_btn_pane_cp01

0xad2f,	// (0x00035baa) att_li_srv_pane_ParamLimits

0xad2f,	// (0x00035baa) att_li_srv_pane

0xad4c,	// (0x00035bc7) att_opt_pane_ParamLimits

0xad4c,	// (0x00035bc7) att_opt_pane

0xad96,	// (0x00035c11) att_query_pane_ParamLimits

0xad96,	// (0x00035c11) att_query_pane

0xae0f,	// (0x00035c8a) att_query_pane_cp01_ParamLimits

0xae0f,	// (0x00035c8a) att_query_pane_cp01

0xae5b,	// (0x00035cd6) att_t_hdr_pane_ParamLimits

0xae5b,	// (0x00035cd6) att_t_hdr_pane

0xaecb,	// (0x00035d46) att_t_nml_pane_ParamLimits

0xaecb,	// (0x00035d46) att_t_nml_pane

0xaf49,	// (0x00035dc4) att_t_nml_pane_cp01_ParamLimits

0xaf49,	// (0x00035dc4) att_t_nml_pane_cp01

0xaf77,	// (0x00035df2) att_t_nmlb_pane_ParamLimits

0xaf77,	// (0x00035df2) att_t_nmlb_pane

0xafe6,	// (0x00035e61) att_term_pane_ParamLimits

0xafe6,	// (0x00035e61) att_term_pane

0xb036,	// (0x00035eb1) main_att_body_pane_g1_ParamLimits

0xb036,	// (0x00035eb1) main_att_body_pane_g1

0xb062,	// (0x00035edd) att_t_hdr_pane_t1_ParamLimits

0xb062,	// (0x00035edd) att_t_hdr_pane_t1

0xb075,	// (0x00035ef0) att_t_nml_pane_t1_ParamLimits

0xb075,	// (0x00035ef0) att_t_nml_pane_t1

0xaa86,	// (0x00035901) att_btn_pane_t1

0xaa7d,	// (0x000358f8) bg_button_pane_cp23

0xb09a,	// (0x00035f15) att_li_srv_row_pane_ParamLimits

0xb09a,	// (0x00035f15) att_li_srv_row_pane

0xb0aa,	// (0x00035f25) att_t_nmlb_pane_t1_ParamLimits

0xb0aa,	// (0x00035f25) att_t_nmlb_pane_t1

0xb0c6,	// (0x00035f41) att_query_pane_t1

0xb0d5,	// (0x00035f50) att_query_pane_t2

0xb0e4,	// (0x00035f5f) att_query_pane_t3

0x0002,

0xfe31,	// (0x0003acac) att_query_pane_t

0xb0f3,	// (0x00035f6e) input_focus_pane_cp11

0xb0fc,	// (0x00035f77) att_term_pane_t1_ParamLimits

0xb0fc,	// (0x00035f77) att_term_pane_t1

0xb57d,	// (0x000363f8) att_opt_row_pane

0xb119,	// (0x00035f94) att_opt_row_pane_g1

0xb121,	// (0x00035f9c) att_opt_row_pane_t1_ParamLimits

0xb121,	// (0x00035f9c) att_opt_row_pane_t1

0xb13a,	// (0x00035fb5) att_li_srv_row_pane_g1

0xb142,	// (0x00035fbd) att_li_srv_row_pane_t1_ParamLimits

0xb142,	// (0x00035fbd) att_li_srv_row_pane_t1

0xb142,	// (0x00035fbd) att_li_srv_row_pane_t2_ParamLimits

0xb142,	// (0x00035fbd) att_li_srv_row_pane_t2

0x0001,

0xfe38,	// (0x0003acb3) att_li_srv_row_pane_t_ParamLimits

0xfe38,	// (0x0003acb3) att_li_srv_row_pane_t

0xb157,	// (0x00035fd2) att_btn_close_pane_g1

0xb57d,	// (0x000363f8) bg_button_pane_cp24

0xb15f,	// (0x00035fda) main_vod_body_pane_ParamLimits

0xb15f,	// (0x00035fda) main_vod_body_pane

0xb173,	// (0x00035fee) main_vod_body_pane_g1_ParamLimits

0xb173,	// (0x00035fee) main_vod_body_pane_g1

0xb1a7,	// (0x00036022) scroll_pane_cp24_ParamLimits

0xb1a7,	// (0x00036022) scroll_pane_cp24

0xb1f5,	// (0x00036070) vod_btn_pane_ParamLimits

0xb1f5,	// (0x00036070) vod_btn_pane

0xb23b,	// (0x000360b6) vod_det_pane_ParamLimits

0xb23b,	// (0x000360b6) vod_det_pane

0xb26f,	// (0x000360ea) vod_logo_g1_ParamLimits

0xb26f,	// (0x000360ea) vod_logo_g1

0xb2ad,	// (0x00036128) vod_opt_pane_ParamLimits

0xb2ad,	// (0x00036128) vod_opt_pane

0xb2e0,	// (0x0003615b) vod_opt_pane_cp01_ParamLimits

0xb2e0,	// (0x0003615b) vod_opt_pane_cp01

0xb30c,	// (0x00036187) vod_query_pane_ParamLimits

0xb30c,	// (0x00036187) vod_query_pane

0xb337,	// (0x000361b2) vod_query_pane_cp01_ParamLimits

0xb337,	// (0x000361b2) vod_query_pane_cp01

0xb343,	// (0x000361be) vod_t_nml_pane_ParamLimits

0xb343,	// (0x000361be) vod_t_nml_pane

0xb3f4,	// (0x0003626f) vod_t_nml_pane_cp01_ParamLimits

0xb3f4,	// (0x0003626f) vod_t_nml_pane_cp01

0xb430,	// (0x000362ab) vod_t_sub_pane_ParamLimits

0xb430,	// (0x000362ab) vod_t_sub_pane

0xb461,	// (0x000362dc) vod_t_sub_pane_cp01_ParamLimits

0xb461,	// (0x000362dc) vod_t_sub_pane_cp01

0xb0f3,	// (0x00035f6e) vod_query_field_pane

0xb48d,	// (0x00036308) vod_query_pane_t1

0xb49c,	// (0x00036317) bg_button_pane_cp25

0xaa86,	// (0x00035901) sso_btn_pane_t1_copy2

0xb4a5,	// (0x00036320) vod_t_nml_pane_t1_ParamLimits

0xb4a5,	// (0x00036320) vod_t_nml_pane_t1

0xbf09,	// (0x00036d84) vod_opt_row_pane_ParamLimits

0xbf09,	// (0x00036d84) vod_opt_row_pane

0xbf1b,	// (0x00036d96) vod_t_sub_pane_t1_ParamLimits

0xbf1b,	// (0x00036d96) vod_t_sub_pane_t1

0xbf34,	// (0x00036daf) vod_det_cell_pane_ParamLimits

0xbf34,	// (0x00036daf) vod_det_cell_pane

0xb57d,	// (0x000363f8) input_focus_pane_cp15

0xbf45,	// (0x00036dc0) vod_query_field_pane_t1

0xbf53,	// (0x00036dce) vod_opt_row_pane_g1_ParamLimits

0xbf53,	// (0x00036dce) vod_opt_row_pane_g1

0xbf5f,	// (0x00036dda) vod_opt_row_pane_t1_ParamLimits

0xbf5f,	// (0x00036dda) vod_opt_row_pane_t1

0xbf81,	// (0x00036dfc) vod_det_cell_field_pane

0xbf8a,	// (0x00036e05) vod_det_cell_pane_g1

0xbf92,	// (0x00036e0d) vod_det_cell_pane_t1

0xb57d,	// (0x000363f8) input_focus_pane_cp16

0xbfa1,	// (0x00036e1c) vod_det_cell_field_pane_t1

0xb4da,	// (0x00036355) call7_btn_grp_pane_ParamLimits

0xb4da,	// (0x00036355) call7_btn_grp_pane

0xc66a,	// (0x000374e5) call7_bubble_pane_ParamLimits

0xc66a,	// (0x000374e5) call7_bubble_pane

0xb4f4,	// (0x0003636f) cell_call7_btn_pane_ParamLimits

0xb4f4,	// (0x0003636f) cell_call7_btn_pane

0xb508,	// (0x00036383) call7_pane_g1_ParamLimits

0xb508,	// (0x00036383) call7_pane_g1

0xb51a,	// (0x00036395) call7_windows_conf_pane_ParamLimits

0xb51a,	// (0x00036395) call7_windows_conf_pane

0xb538,	// (0x000363b3) popup_call7_1st_window_ParamLimits

0xb538,	// (0x000363b3) popup_call7_1st_window

0xb54a,	// (0x000363c5) popup_call7_2nd_window_ParamLimits

0xb54a,	// (0x000363c5) popup_call7_2nd_window

0xb55c,	// (0x000363d7) popup_call7_3rd_window_ParamLimits

0xb55c,	// (0x000363d7) popup_call7_3rd_window

0xb57d,	// (0x000363f8) bg_button_pane_cp26

0x9933,	// (0x000347ae) cell_call7_btn_pane_g1

0xb56e,	// (0x000363e9) cell_call7_btn_pane_t1

0xb57d,	// (0x000363f8) bg_popup_window_pane_cp12

0xbfaf,	// (0x00036e2a) popup_call7_1st_window_g1

0xbfb7,	// (0x00036e32) popup_call7_1st_window_g2

0xbfbf,	// (0x00036e3a) popup_call7_1st_window_g3

0x0002,

0xfe3d,	// (0x0003acb8) popup_call7_1st_window_g

0xbfc7,	// (0x00036e42) popup_call7_1st_window_t1

0xbfd6,	// (0x00036e51) popup_call7_1st_window_t2

0xbfe6,	// (0x00036e61) popup_call7_1st_window_t3

0x0002,

0xfe44,	// (0x0003acbf) popup_call7_1st_window_t

0xb57d,	// (0x000363f8) bg_popup_window_pane_cp13

0xbff6,	// (0x00036e71) popup_call7_2nd_window_g1

0xbffe,	// (0x00036e79) popup_call7_2nd_window_g2

0xc006,	// (0x00036e81) popup_call7_2nd_window_g3

0x0002,

0xfe4b,	// (0x0003acc6) popup_call7_2nd_window_g

0xc00e,	// (0x00036e89) popup_call7_2nd_window_t1

0xb57d,	// (0x000363f8) bg_popup_window_pane_cp14

0xc01d,	// (0x00036e98) call7_list_conf_pane

0xc025,	// (0x00036ea0) call7_list_conf_row_pane_ParamLimits

0xc025,	// (0x00036ea0) call7_list_conf_row_pane

0xc038,	// (0x00036eb3) call7_list_conf_row_pane_g1

0xc040,	// (0x00036ebb) call7_list_conf_row_pane_g2

0x0001,

0xfe52,	// (0x0003accd) call7_list_conf_row_pane_g

0xc048,	// (0x00036ec3) call7_list_conf_row_pane_t1

0xb57d,	// (0x000363f8) list_highlight_pane_cp22

0xa816,	// (0x00035691) sso_option_pane_cp01_ParamLimits

0xa816,	// (0x00035691) sso_option_pane_cp01

0xc648,	// (0x000374c3) msg_header_pane_ParamLimits

0xd3ce,	// (0x00038249) bg_button_pane_cp01_ParamLimits

0xd3e2,	// (0x0003825d) input_focus_pane_cp07_ParamLimits

0x82ce,	// (0x00033149) popup_email_progress_window

0xc70f,	// (0x0003758a) popup_email_progress_window_g1

0xc056,	// (0x00036ed1) popup_email_progress_window_g2

0x0001,

0xfe57,	// (0x0003acd2) popup_email_progress_window_g

0xc05e,	// (0x00036ed9) popup_email_progress_window_t1

0xb57d,	// (0x000363f8) cmail_conv_pane

0x8591,	// (0x0003340c) list_single_dyc_row_pane_g5_ParamLimits

0x8591,	// (0x0003340c) list_single_dyc_row_pane_g5

0x859d,	// (0x00033418) list_single_dyc_row_pane_g6_ParamLimits

0x859d,	// (0x00033418) list_single_dyc_row_pane_g6

0x85b5,	// (0x00033430) list_single_dyc_row_pane_g7_ParamLimits

0x85b5,	// (0x00033430) list_single_dyc_row_pane_g7

0x9f7a,	// (0x00034df5) main_button_pane_5_ParamLimits

0x9f7a,	// (0x00034df5) main_button_pane_5

0xa614,	// (0x0003548f) sso_emg_call_btn_pane_ParamLimits

0xa614,	// (0x0003548f) sso_emg_call_btn_pane

0xa9bf,	// (0x0003583a) sso_t_sub_pane_cp01_ParamLimits

0xa9bf,	// (0x0003583a) sso_t_sub_pane_cp01

0xac15,	// (0x00035a90) sso_option_row_pane_g1_ParamLimits

0xac21,	// (0x00035a9c) sso_option_row_pane_g2_ParamLimits

0xac21,	// (0x00035a9c) sso_option_row_pane_g2

0x0001,

0xfe2c,	// (0x0003aca7) sso_option_row_pane_g_ParamLimits

0xfe2c,	// (0x0003aca7) sso_option_row_pane_g

0xad0d,	// (0x00035b88) att_btn_pane_cp02_ParamLimits

0xad0d,	// (0x00035b88) att_btn_pane_cp02

0xc06c,	// (0x00036ee7) cmail_conv_hdr_pane

0xc075,	// (0x00036ef0) list_cmail_conv_pane

0xc07f,	// (0x00036efa) scroll_pane_cp31

0xc087,	// (0x00036f02) cmail_conv_hdr_pane_t1

0xc095,	// (0x00036f10) cmail_conv_hdr_pane_t2

0x0001,

0xfe5c,	// (0x0003acd7) cmail_conv_hdr_pane_t

0xc0a3,	// (0x00036f1e) bubble_cmail_conv_pane_ParamLimits

0xc0a3,	// (0x00036f1e) bubble_cmail_conv_pane

0x8ac0,	// (0x0003393b) aid_size_colorization_pane

0xc961,	// (0x000377dc) bg_bubble_cmail_conv_pane

0xc0bf,	// (0x00036f3a) body_bubble_cmail_conv_pane

0xce60,	// (0x00037cdb) bubble_cmail_conv_pane_g1

0xce68,	// (0x00037ce3) bubble_cmail_conv_pane_g2

0xce70,	// (0x00037ceb) bubble_cmail_conv_pane_g3

0x0002,

0xf24d,	// (0x0003a0c8) bubble_cmail_conv_pane_g

0xc0c7,	// (0x00036f42) bubble_cmail_conv_pane_t1

0xc0d5,	// (0x00036f50) bg_bubble_cmail_conv_pane_g1

0xc0de,	// (0x00036f59) bg_bubble_cmail_conv_pane_g2

0xc0e7,	// (0x00036f62) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe61,	// (0x0003acdc) bg_bubble_cmail_conv_pane_g

0xc0f0,	// (0x00036f6b) body_bubble_cmail_conv_pane_t1_ParamLimits

0xc0f0,	// (0x00036f6b) body_bubble_cmail_conv_pane_t1

0xc107,	// (0x00036f82) body_bubble_cmail_conv_pane_t2_ParamLimits

0xc107,	// (0x00036f82) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe68,	// (0x0003ace3) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe68,	// (0x0003ace3) body_bubble_cmail_conv_pane_t

0xc66a,	// (0x000374e5) list_highlight_pane_cp024_ParamLimits
};


const AknLayoutScalable_Apps::SCdlImpl KCdlImpl = 
	{
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
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
	&WindowLineRVC,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineCRV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVRC,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineRVC,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineRVC,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&TextLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowTableLVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&WindowLineRVC,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineCRV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsTableLV,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
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
	&TextLineVCR,
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
	&WindowLineVRC,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&ParameterLimitsV,
	&TextLineVRC,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsTableLV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&ParameterLimitsV,
	&WindowLineRCV,
	&ParameterLimitsV,
	&WindowLineRCV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineRCV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
