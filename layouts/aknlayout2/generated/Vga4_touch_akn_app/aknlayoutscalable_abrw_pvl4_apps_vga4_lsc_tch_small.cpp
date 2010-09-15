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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0006d16a };

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
0xfde5,	// (0x0006cf4f) Screen

0xfdf1,	// (0x0006cf5b) application_window

0xfe59,	// (0x0006cfc3) area_bottom_pane_ParamLimits

0xfe59,	// (0x0006cfc3) area_bottom_pane

0xfebb,	// (0x0006d025) area_top_pane_ParamLimits

0xfebb,	// (0x0006d025) area_top_pane

0x93bc,	// (0x00076526) call_video_uplink_pane_ParamLimits

0x93bc,	// (0x00076526) call_video_uplink_pane

0xff49,	// (0x0006d0b3) main_pane_ParamLimits

0xff49,	// (0x0006d0b3) main_pane

0xc616,	// (0x00079780) context_pane

0x3127,	// (0x00070291) navi_pane

0x315e,	// (0x000702c8) popup_cale_events_window_ParamLimits

0x315e,	// (0x000702c8) popup_cale_events_window

0xc629,	// (0x00079793) popup_mup_playback_window

0x3176,	// (0x000702e0) signal_pane

0xa4ac,	// (0x00077616) main_browser_pane

0xa653,	// (0x000777bd) main_burst_pane

0x2e2f,	// (0x0006ff99) main_calc_pane

0xc60a,	// (0x00079774) main_cale_day_pane

0x2e43,	// (0x0006ffad) main_cale_month_pane

0xc60a,	// (0x00079774) main_cale_week_pane

0xa653,	// (0x000777bd) main_call_pane

0x983a,	// (0x000769a4) main_call_poc_pane

0xa653,	// (0x000777bd) main_camera_pane

0xa653,	// (0x000777bd) main_chi_dic_pane

0xae52,	// (0x00077fbc) main_clock_pane

0x983a,	// (0x000769a4) main_fmradio_pane

0xa653,	// (0x000777bd) main_graph_messa_pane

0x983a,	// (0x000769a4) main_help_pane

0xa4ac,	// (0x00077616) main_im_pane

0xa3bf,	// (0x00077529) main_image_pane_ParamLimits

0xa3bf,	// (0x00077529) main_image_pane

0x983a,	// (0x000769a4) main_location2_pane

0xa653,	// (0x000777bd) main_location_pane

0xa3bf,	// (0x00077529) main_messa_pane

0x983a,	// (0x000769a4) main_mp2_pane

0xa653,	// (0x000777bd) main_mp_pane

0x983a,	// (0x000769a4) main_msg_pane

0x983a,	// (0x000769a4) main_mup_eq_pane

0x983a,	// (0x000769a4) main_mup_pane

0xa4ac,	// (0x00077616) main_notes_pane

0x983a,	// (0x000769a4) main_pec_pane

0x983a,	// (0x000769a4) main_phob_pane

0x983a,	// (0x000769a4) main_pinb_pane

0x983a,	// (0x000769a4) main_postcard_pane

0x983a,	// (0x000769a4) main_qdial_pane

0xa653,	// (0x000777bd) main_skin_pane

0x983a,	// (0x000769a4) main_smil2_pane

0xa653,	// (0x000777bd) main_smil_pane

0xa653,	// (0x000777bd) main_video_pane

0xa653,	// (0x000777bd) main_video_tele_pane

0xa3bf,	// (0x00077529) main_viewer_pane_ParamLimits

0xa3bf,	// (0x00077529) main_viewer_pane

0xa653,	// (0x000777bd) main_vorec_pane

0x2e95,	// (0x0006ffff) popup_blid_sat_info_window_ParamLimits

0x2e95,	// (0x0006ffff) popup_blid_sat_info_window

0x2ef9,	// (0x00070063) popup_dyc_status_message_window_ParamLimits

0x2ef9,	// (0x00070063) popup_dyc_status_message_window

0x2f13,	// (0x0007007d) popup_grid_large_graphic_window_ParamLimits

0x2f13,	// (0x0007007d) popup_grid_large_graphic_window

0x2fd5,	// (0x0007013f) popup_loc_request_window_ParamLimits

0x2fd5,	// (0x0007013f) popup_loc_request_window

0x30fb,	// (0x00070265) popup_wml_address_window_ParamLimits

0x30fb,	// (0x00070265) popup_wml_address_window

0x2c6d,	// (0x0006fdd7) call_muted_g1

0x28bb,	// (0x0006fa25) popup_call_audio_conf_window_ParamLimits

0x28bb,	// (0x0006fa25) popup_call_audio_conf_window

0x2c7d,	// (0x0006fde7) popup_call_audio_first_window_ParamLimits

0x2c7d,	// (0x0006fde7) popup_call_audio_first_window

0x2cf3,	// (0x0006fe5d) popup_call_audio_in_window_ParamLimits

0x2cf3,	// (0x0006fe5d) popup_call_audio_in_window

0x2d2f,	// (0x0006fe99) popup_call_audio_out_window_ParamLimits

0x2d2f,	// (0x0006fe99) popup_call_audio_out_window

0x2d69,	// (0x0006fed3) popup_call_audio_second_window_ParamLimits

0x2d69,	// (0x0006fed3) popup_call_audio_second_window

0x2dbf,	// (0x0006ff29) popup_call_audio_wait_window_ParamLimits

0x2dbf,	// (0x0006ff29) popup_call_audio_wait_window

0x2df4,	// (0x0006ff5e) popup_number_entry_window_ParamLimits

0x2df4,	// (0x0006ff5e) popup_number_entry_window

0x93f2,	// (0x0007655c) bg_popup_call_pane_cp05_ParamLimits

0x93f2,	// (0x0007655c) bg_popup_call_pane_cp05

0x9412,	// (0x0007657c) popup_number_entry_window_t1

0x9425,	// (0x0007658f) popup_number_entry_window_t2

0x9437,	// (0x000765a1) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0007c1af) popup_number_entry_window_t

0x947e,	// (0x000765e8) text_title_cp2

0x9491,	// (0x000765fb) bg_popup_call_pane_cp_ParamLimits

0x9491,	// (0x000765fb) bg_popup_call_pane_cp

0x949f,	// (0x00076609) call_thumbnail_pane

0x94a7,	// (0x00076611) popup_call_audio_in_window_g1_ParamLimits

0x94a7,	// (0x00076611) popup_call_audio_in_window_g1

0x94b3,	// (0x0007661d) popup_call_audio_in_window_g2_ParamLimits

0x94b3,	// (0x0007661d) popup_call_audio_in_window_g2

0x94bf,	// (0x00076629) popup_call_audio_in_window_g3_ParamLimits

0x94bf,	// (0x00076629) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0007c1b8) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0007c1b8) popup_call_audio_in_window_g

0x94cb,	// (0x00076635) popup_call_audio_in_window_t1_ParamLimits

0x94cb,	// (0x00076635) popup_call_audio_in_window_t1

0x94e7,	// (0x00076651) popup_call_audio_in_window_t2_ParamLimits

0x94e7,	// (0x00076651) popup_call_audio_in_window_t2

0x9503,	// (0x0007666d) popup_call_audio_in_window_t3_ParamLimits

0x9503,	// (0x0007666d) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0007c1bf) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0007c1bf) popup_call_audio_in_window_t

0x9491,	// (0x000765fb) bg_popup_call_pane_cp01_ParamLimits

0x9491,	// (0x000765fb) bg_popup_call_pane_cp01

0x949f,	// (0x00076609) call_thumbnail_pane_cp02

0x9516,	// (0x00076680) call_type_pane_cp022

0x951e,	// (0x00076688) popup_call_audio_out_window_g1_ParamLimits

0x951e,	// (0x00076688) popup_call_audio_out_window_g1

0x9530,	// (0x0007669a) popup_call_audio_out_window_g2_ParamLimits

0x9530,	// (0x0007669a) popup_call_audio_out_window_g2

0x953c,	// (0x000766a6) popup_call_audio_out_window_g3_ParamLimits

0x953c,	// (0x000766a6) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0007c1c6) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0007c1c6) popup_call_audio_out_window_g

0x954e,	// (0x000766b8) popup_call_audio_out_window_t1_ParamLimits

0x954e,	// (0x000766b8) popup_call_audio_out_window_t1

0x9566,	// (0x000766d0) popup_call_audio_out_window_t2_ParamLimits

0x9566,	// (0x000766d0) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0007c1cd) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0007c1cd) popup_call_audio_out_window_t

0x957b,	// (0x000766e5) bg_popup_call_pane_ParamLimits

0x957b,	// (0x000766e5) bg_popup_call_pane

0x0068,	// (0x0006d1d2) call_thumbnail_pane_cp_ParamLimits

0x0068,	// (0x0006d1d2) call_thumbnail_pane_cp

0x95ff,	// (0x00076769) call_type_pane_cp01_ParamLimits

0x95ff,	// (0x00076769) call_type_pane_cp01

0x9643,	// (0x000767ad) popup_call_audio_first_window_g1_ParamLimits

0x9643,	// (0x000767ad) popup_call_audio_first_window_g1

0x968f,	// (0x000767f9) popup_call_audio_first_window_g2_ParamLimits

0x968f,	// (0x000767f9) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0007c1d2) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0007c1d2) popup_call_audio_first_window_g

0x96d3,	// (0x0007683d) popup_call_audio_first_window_t1_ParamLimits

0x96d3,	// (0x0007683d) popup_call_audio_first_window_t1

0x977f,	// (0x000768e9) popup_call_audio_first_window_t4_ParamLimits

0x977f,	// (0x000768e9) popup_call_audio_first_window_t4

0x980b,	// (0x00076975) popup_call_audio_first_window_t5_ParamLimits

0x980b,	// (0x00076975) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0007c1d7) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0007c1d7) popup_call_audio_first_window_t

0x983a,	// (0x000769a4) bg_popup_call_pane_cp02

0x9844,	// (0x000769ae) call_type_pane_cp023

0x984c,	// (0x000769b6) popup_call_audio_wait_window_g1

0x9854,	// (0x000769be) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0007c1de) popup_call_audio_wait_window_g

0x985c,	// (0x000769c6) popup_call_audio_wait_window_t3

0x986a,	// (0x000769d4) bg_popup_call_pane_cp03_ParamLimits

0x986a,	// (0x000769d4) bg_popup_call_pane_cp03

0x98ca,	// (0x00076a34) call_thumbnail_pane_cp011_ParamLimits

0x98ca,	// (0x00076a34) call_thumbnail_pane_cp011

0x98d6,	// (0x00076a40) call_type_pane_cp034_ParamLimits

0x98d6,	// (0x00076a40) call_type_pane_cp034

0x9912,	// (0x00076a7c) popup_call_audio_second_window_g1_ParamLimits

0x9912,	// (0x00076a7c) popup_call_audio_second_window_g1

0x994e,	// (0x00076ab8) popup_call_audio_second_window_g2_ParamLimits

0x994e,	// (0x00076ab8) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0007c1e3) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0007c1e3) popup_call_audio_second_window_g

0x998a,	// (0x00076af4) popup_call_audio_second_window_t1_ParamLimits

0x998a,	// (0x00076af4) popup_call_audio_second_window_t1

0x9a0b,	// (0x00076b75) popup_call_audio_second_window_t2_ParamLimits

0x9a0b,	// (0x00076b75) popup_call_audio_second_window_t2

0xa36b,	// (0x000774d5) popup_call_audio_second_window_t3_ParamLimits

0xa36b,	// (0x000774d5) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0007c1e8) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0007c1e8) popup_call_audio_second_window_t

0x983a,	// (0x000769a4) bg_popup_call_pane_cp04

0xa3a1,	// (0x0007750b) list_conf_pane

0xa3a9,	// (0x00077513) popup_call_audio_conf_window_t1

0xa3b7,	// (0x00077521) call_thumbnail_pane_g1

0xa3bf,	// (0x00077529) bg_pinb_pane_ParamLimits

0xa3bf,	// (0x00077529) bg_pinb_pane

0xa3cd,	// (0x00077537) find_pinb_pane

0xa3bf,	// (0x00077529) listscroll_pinb_pane_ParamLimits

0xa3bf,	// (0x00077529) listscroll_pinb_pane

0xa3d7,	// (0x00077541) pinb_bg_pane_g1

0xa3d7,	// (0x00077541) pinb_bg_pane_g2

0xa3d7,	// (0x00077541) pinb_bg_pane_g3

0xa3d7,	// (0x00077541) pinb_bg_pane_g4

0xa3d7,	// (0x00077541) pinb_bg_pane_g5

0xa3d7,	// (0x00077541) pinb_bg_pane_g6

0xa3d7,	// (0x00077541) pinb_bg_pane_g7

0xa3d7,	// (0x00077541) pinb_bg_pane_g8

0xa3d7,	// (0x00077541) pinb_bg_pane_g9

0xa3d7,	// (0x00077541) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0007c1ef) pinb_bg_pane_g

0x93b2,	// (0x0007651c) grid_pinb_pane

0x93b2,	// (0x0007651c) list_pinb_pane

0x9a41,	// (0x00076bab) scroll_pane_cp01_ParamLimits

0x9a41,	// (0x00076bab) scroll_pane_cp01

0xa3e1,	// (0x0007754b) find_pinb_pane_g1_ParamLimits

0xa3e1,	// (0x0007754b) find_pinb_pane_g1

0xa3f9,	// (0x00077563) find_pinb_pane_t1

0xa40b,	// (0x00077575) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0007c209) find_pinb_pane_t

0xa420,	// (0x0007758a) input_focus_pane_cp01_ParamLimits

0xa420,	// (0x0007758a) input_focus_pane_cp01

0xa42c,	// (0x00077596) cell_pinb_pane_ParamLimits

0xa42c,	// (0x00077596) cell_pinb_pane

0xa43a,	// (0x000775a4) cell_pinb_pane_g1_ParamLimits

0xa43a,	// (0x000775a4) cell_pinb_pane_g1

0xa448,	// (0x000775b2) cell_pinb_pane_g2_ParamLimits

0xa448,	// (0x000775b2) cell_pinb_pane_g2

0xa448,	// (0x000775b2) cell_pinb_pane_g3_ParamLimits

0xa448,	// (0x000775b2) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0007c20e) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0007c20e) cell_pinb_pane_g

0x983a,	// (0x000769a4) grid_highlight_pane_cp01

0xa42c,	// (0x00077596) list_pinb_item_pane_ParamLimits

0xa42c,	// (0x00077596) list_pinb_item_pane

0x93b2,	// (0x0007651c) list_highlight_pane_cp02

0xa456,	// (0x000775c0) list_pinb_item_pane_g1_ParamLimits

0xa456,	// (0x000775c0) list_pinb_item_pane_g1

0xa448,	// (0x000775b2) list_pinb_item_pane_g2_ParamLimits

0xa448,	// (0x000775b2) list_pinb_item_pane_g2

0xa43a,	// (0x000775a4) list_pinb_item_pane_g3_ParamLimits

0xa43a,	// (0x000775a4) list_pinb_item_pane_g3

0xa448,	// (0x000775b2) list_pinb_item_pane_g4_ParamLimits

0xa448,	// (0x000775b2) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0007c215) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0007c215) list_pinb_item_pane_g

0xa464,	// (0x000775ce) list_pinb_item_pane_t1_ParamLimits

0xa464,	// (0x000775ce) list_pinb_item_pane_t1

0x00ac,	// (0x0006d216) calc_display_pane

0x00d1,	// (0x0006d23b) calc_paper_pane

0x00f4,	// (0x0006d25e) grid_calc_pane

0x983a,	// (0x000769a4) bg_list_pane_cp01

0x0122,	// (0x0006d28c) clock_g1

0x012a,	// (0x0006d294) clock_g2

0x0001,

0xf0b4,	// (0x0007c21e) clock_g

0x0132,	// (0x0006d29c) clock_t1_ParamLimits

0x0132,	// (0x0006d29c) clock_t1

0x0147,	// (0x0006d2b1) clock_t2_ParamLimits

0x0147,	// (0x0006d2b1) clock_t2

0x0159,	// (0x0006d2c3) clock_t3_ParamLimits

0x0159,	// (0x0006d2c3) clock_t3

0x016b,	// (0x0006d2d5) clock_t4_ParamLimits

0x016b,	// (0x0006d2d5) clock_t4

0x017d,	// (0x0006d2e7) clock_t5_ParamLimits

0x017d,	// (0x0006d2e7) clock_t5

0x0192,	// (0x0006d2fc) clock_t6_ParamLimits

0x0192,	// (0x0006d2fc) clock_t6

0x01a4,	// (0x0006d30e) clock_t7_ParamLimits

0x01a4,	// (0x0006d30e) clock_t7

0x01b6,	// (0x0006d320) clock_t8_ParamLimits

0x01b6,	// (0x0006d320) clock_t8

0x01ca,	// (0x0006d334) clock_t9_ParamLimits

0x01ca,	// (0x0006d334) clock_t9

0x0008,

0xf0b9,	// (0x0007c223) clock_t_ParamLimits

0xf0b9,	// (0x0007c223) clock_t

0xa478,	// (0x000775e2) popup_clock_analogue_window_cp02

0xa478,	// (0x000775e2) popup_clock_digital_window_cp01

0x983a,	// (0x000769a4) listscroll_help_pane

0x983a,	// (0x000769a4) phob_pre_status_pane

0xa480,	// (0x000775ea) grid_qdial_pane

0xa3bf,	// (0x00077529) listscroll_mce_pane

0xa3bf,	// (0x00077529) bg_notes_pane

0xa48a,	// (0x000775f4) list_notes_pane

0x01e0,	// (0x0006d34a) scroll_pane_cp06

0xa498,	// (0x00077602) bg_calc_paper_pane

0x9a57,	// (0x00076bc1) list_calc_pane

0xa4ac,	// (0x00077616) bg_calc_display_pane

0x01f4,	// (0x0006d35e) calc_display_pane_t1

0x0209,	// (0x0006d373) calc_display_pane_t2

0x9a71,	// (0x00076bdb) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0007c236) calc_display_pane_t

0x021e,	// (0x0006d388) cell_calc_pane_ParamLimits

0x021e,	// (0x0006d388) cell_calc_pane

0xa4b8,	// (0x00077622) bg_calc_paper_pane_g1

0xa4c4,	// (0x0007762e) bg_calc_paper_pane_g2

0xa4d0,	// (0x0007763a) bg_calc_paper_pane_g3

0xa4dc,	// (0x00077646) bg_calc_paper_pane_g4

0xa4e8,	// (0x00077652) bg_calc_paper_pane_g5

0x0259,	// (0x0006d3c3) bg_calc_paper_pane_g6

0x026c,	// (0x0006d3d6) bg_calc_paper_pane_g7

0x027f,	// (0x0006d3e9) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0007c23d) bg_calc_paper_pane_g

0x0292,	// (0x0006d3fc) calc_bg_paper_pane_g9

0x02a5,	// (0x0006d40f) list_calc_item_pane_ParamLimits

0x02a5,	// (0x0006d40f) list_calc_item_pane

0xa4f4,	// (0x0007765e) list_calc_item_pane_g1

0x9a83,	// (0x00076bed) list_calc_item_pane_t1_ParamLimits

0x9a83,	// (0x00076bed) list_calc_item_pane_t1

0x02bd,	// (0x0006d427) list_calc_item_pane_t2_ParamLimits

0x02bd,	// (0x0006d427) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0007c24e) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0007c24e) list_calc_item_pane_t

0xa3d7,	// (0x00077541) cell_calc_pane_g1

0xa501,	// (0x0007766b) grid_highlight_pane_cp02

0x02ef,	// (0x0006d459) bg_calc_display_pane_g1

0x02f8,	// (0x0006d462) bg_calc_display_pane_g2

0xa523,	// (0x0007768d) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0007c258) bg_calc_display_pane_g

0x0302,	// (0x0006d46c) cell_qdial_pane_ParamLimits

0x0302,	// (0x0006d46c) cell_qdial_pane

0x0316,	// (0x0006d480) cell_qdial_pane_g1_ParamLimits

0x0316,	// (0x0006d480) cell_qdial_pane_g1

0x032c,	// (0x0006d496) cell_qdial_pane_g2_ParamLimits

0x032c,	// (0x0006d496) cell_qdial_pane_g2

0xa52c,	// (0x00077696) cell_qdial_pane_g3_ParamLimits

0xa52c,	// (0x00077696) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0007c25f) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0007c25f) cell_qdial_pane_g

0x0353,	// (0x0006d4bd) cell_qdial_pane_t1_ParamLimits

0x0353,	// (0x0006d4bd) cell_qdial_pane_t1

0x036b,	// (0x0006d4d5) cell_qdial_pane_t2_ParamLimits

0x036b,	// (0x0006d4d5) cell_qdial_pane_t2

0x037e,	// (0x0006d4e8) cell_qdial_pane_t3_ParamLimits

0x037e,	// (0x0006d4e8) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0007c268) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0007c268) cell_qdial_pane_t

0x983a,	// (0x000769a4) grid_highlight_pane_cp04

0xa538,	// (0x000776a2) thumbnail_qdial_pane_ParamLimits

0xa538,	// (0x000776a2) thumbnail_qdial_pane

0xa594,	// (0x000776fe) list_help_pane

0xa59d,	// (0x00077707) scroll_pane_cp02

0x0391,	// (0x0006d4fb) help_list_pane_t1_ParamLimits

0x0391,	// (0x0006d4fb) help_list_pane_t1

0x9a95,	// (0x00076bff) bg_notes_pane_g2

0x9a9d,	// (0x00076c07) bg_notes_pane_g3

0x9aa5,	// (0x00076c0f) notes_bg_pane_g1

0x9aad,	// (0x00076c17) notes_bg_pane_g4

0x9ab5,	// (0x00076c1f) notes_bg_pane_g5

0x9abd,	// (0x00076c27) notes_bg_pane_g6

0x9ac5,	// (0x00076c2f) notes_bg_pane_g7

0x9acd,	// (0x00076c37) notes_bg_pane_g8

0x9ad5,	// (0x00076c3f) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0007c286) notes_bg_pane_g

0x03b5,	// (0x0006d51f) list_notes_text_pane_ParamLimits

0x03b5,	// (0x0006d51f) list_notes_text_pane

0xa5a6,	// (0x00077710) list_notes_text_pane_g1

0x9add,	// (0x00076c47) list_notes_text_pane_t1

0x03cc,	// (0x0006d536) listscroll_cale_week_pane

0x03f6,	// (0x0006d560) bg_cale_heading_pane

0x041a,	// (0x0006d584) bg_cale_pane_cp01

0x0437,	// (0x0006d5a1) cale_week_corner_pane

0x0456,	// (0x0006d5c0) cale_week_day_heading_pane

0x047f,	// (0x0006d5e9) cale_week_scroll_pane_g1

0x049e,	// (0x0006d608) cale_week_scroll_pane_g2

0x04b6,	// (0x0006d620) cale_week_scroll_pane_g3

0x04ce,	// (0x0006d638) cale_week_scroll_pane_g4

0x04e6,	// (0x0006d650) cale_week_scroll_pane_g5

0x0506,	// (0x0006d670) cale_week_scroll_pane_g6

0x0526,	// (0x0006d690) cale_week_scroll_pane_g7

0x054a,	// (0x0006d6b4) cale_week_scroll_pane_g8

0x056e,	// (0x0006d6d8) cale_week_scroll_pane_g9

0x0586,	// (0x0006d6f0) cale_week_scroll_pane_g10

0x059e,	// (0x0006d708) cale_week_scroll_pane_g11

0x05b6,	// (0x0006d720) cale_week_scroll_pane_g12

0x05da,	// (0x0006d744) cale_week_scroll_pane_g13

0x05da,	// (0x0006d744) cale_week_scroll_pane_g14

0x05da,	// (0x0006d744) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0007c295) cale_week_scroll_pane_g

0x0622,	// (0x0006d78c) cale_week_time_pane

0x0646,	// (0x0006d7b0) grid_cale_week_pane

0xa5db,	// (0x00077745) scroll_pane_cp08

0x0678,	// (0x0006d7e2) cell_cale_week_pane_ParamLimits

0x0678,	// (0x0006d7e2) cell_cale_week_pane

0x0714,	// (0x0006d87e) cale_week_day_heading_pane_t1

0x073e,	// (0x0006d8a8) cale_week_day_heading_pane_t2

0x076d,	// (0x0006d8d7) cale_week_day_heading_pane_t3

0x079c,	// (0x0006d906) cale_week_day_heading_pane_t4

0x07cb,	// (0x0006d935) cale_week_day_heading_pane_t5

0x07fe,	// (0x0006d968) cale_week_day_heading_pane_t6

0x0835,	// (0x0006d99f) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0007c2b6) cale_week_day_heading_pane_t

0xa5f8,	// (0x00077762) bg_cale_side_pane

0x085f,	// (0x0006d9c9) cale_week_time_pane_t1

0x0879,	// (0x0006d9e3) cale_week_time_pane_t2

0x0893,	// (0x0006d9fd) cale_week_time_pane_t3

0x08ad,	// (0x0006da17) cale_week_time_pane_t4

0x08c7,	// (0x0006da31) cale_week_time_pane_t5

0x08e1,	// (0x0006da4b) cale_week_time_pane_t6

0x0901,	// (0x0006da6b) cale_week_time_pane_t7

0x0927,	// (0x0006da91) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0007c2c5) cale_week_time_pane_t

0x094d,	// (0x0006dab7) cell_cale_week_pane_g2

0x0971,	// (0x0006dadb) cell_cale_week_pane_g3_ParamLimits

0x0971,	// (0x0006dadb) cell_cale_week_pane_g3

0xa606,	// (0x00077770) grid_highlight_pane_cp07

0xa60e,	// (0x00077778) listscroll_gms_pane

0xa618,	// (0x00077782) grid_gms_pane

0xa621,	// (0x0007778b) listscroll_gms_pane_g1

0xa629,	// (0x00077793) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0007c2d6) listscroll_gms_pane_g

0x0989,	// (0x0006daf3) scroll_pane_cp010

0x0994,	// (0x0006dafe) cell_gms_pane_ParamLimits

0x0994,	// (0x0006dafe) cell_gms_pane

0x09ab,	// (0x0006db15) cell_gms_pane_g1

0xa631,	// (0x0007779b) cell_gms_pane_g2

0xa639,	// (0x000777a3) cell_gms_pane_g3

0xa642,	// (0x000777ac) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0007c2db) cell_gms_pane_g

0xa64b,	// (0x000777b5) grid_highlight_pane_cp09

0x2bf1,	// (0x0006fd5b) phob_pre_status_pane_g1

0x2bf9,	// (0x0006fd63) phob_pre_status_pane_g2

0x2c01,	// (0x0006fd6b) phob_pre_status_pane_g3

0x2c09,	// (0x0006fd73) phob_pre_status_pane_g4

0x0004,

0xf535,	// (0x0007c69f) phob_pre_status_pane_g

0x2c19,	// (0x0006fd83) phob_pre_status_pane_t1

0x2c29,	// (0x0006fd93) phob_pre_status_pane_t2

0x2c39,	// (0x0006fda3) phob_pre_status_pane_t3

0x0002,

0xf540,	// (0x0007c6aa) phob_pre_status_pane_t

0xa653,	// (0x000777bd) bg_list_pane_cp05

0x09bb,	// (0x0006db25) grid_vorec_pane

0x09c5,	// (0x0006db2f) vorec_t1

0x09d3,	// (0x0006db3d) vorec_t2

0x09e1,	// (0x0006db4b) vorec_t3

0x09ef,	// (0x0006db59) vorec_t4

0xa35d,	// (0x000774c7) vorec_t5

0x8695,	// (0x000757ff) vorec_t6

0x0004,

0xf17a,	// (0x0007c2e4) vorec_t

0x86a3,	// (0x0007580d) wait_bar_pane_cp01

0x0a0b,	// (0x0006db75) cell_vorec_pane_ParamLimits

0x0a0b,	// (0x0006db75) cell_vorec_pane

0x9aeb,	// (0x00076c55) cell_vorec_pane_g1

0x983a,	// (0x000769a4) grid_highlight_pane_cp05

0x9a41,	// (0x00076bab) cams_zoom_pane

0x9a41,	// (0x00076bab) image_vga_pane

0xa43a,	// (0x000775a4) main_camera_pane_g1

0xa43a,	// (0x000775a4) main_camera_pane_g2

0xa43a,	// (0x000775a4) main_camera_pane_g3

0xa43a,	// (0x000775a4) main_camera_pane_g4

0xa43a,	// (0x000775a4) main_camera_pane_g5

0xa43a,	// (0x000775a4) main_camera_pane_g6

0xa43a,	// (0x000775a4) main_camera_pane_g7

0x0007,

0xf185,	// (0x0007c2ef) main_camera_pane_g

0xa65b,	// (0x000777c5) main_camera_pane_t1

0xa65b,	// (0x000777c5) main_camera_pane_t2

0x0001,

0xf196,	// (0x0007c300) main_camera_pane_t

0x0a34,	// (0x0006db9e) cams_zoom_pane_cp_ParamLimits

0x0a34,	// (0x0006db9e) cams_zoom_pane_cp

0x0a68,	// (0x0006dbd2) image_cif_pane_ParamLimits

0x0a68,	// (0x0006dbd2) image_cif_pane

0x93b2,	// (0x0007651c) image_subqcif_pane

0x0a7a,	// (0x0006dbe4) main_video_pane_g1_ParamLimits

0x0a7a,	// (0x0006dbe4) main_video_pane_g1

0x0aa8,	// (0x0006dc12) main_video_pane_g2_ParamLimits

0x0aa8,	// (0x0006dc12) main_video_pane_g2

0x0ae2,	// (0x0006dc4c) main_video_pane_g3_ParamLimits

0x0ae2,	// (0x0006dc4c) main_video_pane_g3

0x0ae2,	// (0x0006dc4c) main_video_pane_g4_ParamLimits

0x0ae2,	// (0x0006dc4c) main_video_pane_g4

0x0b16,	// (0x0006dc80) main_video_pane_g5_ParamLimits

0x0b16,	// (0x0006dc80) main_video_pane_g5

0xa66f,	// (0x000777d9) main_video_pane_g6_ParamLimits

0xa66f,	// (0x000777d9) main_video_pane_g6

0x0006,

0xf19b,	// (0x0007c305) main_video_pane_g_ParamLimits

0xf19b,	// (0x0007c305) main_video_pane_g

0x0b32,	// (0x0006dc9c) main_video_pane_t1_ParamLimits

0x0b32,	// (0x0006dc9c) main_video_pane_t1

0xa689,	// (0x000777f3) cams_zoom_pane_g1

0xa689,	// (0x000777f3) cams_zoom_pane_g2

0xa689,	// (0x000777f3) cams_zoom_pane_g3

0xa689,	// (0x000777f3) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0007c314) cams_zoom_pane_g

0x0b8a,	// (0x0006dcf4) grid_cams_pane

0x0ba4,	// (0x0006dd0e) linegrid_cams_pane

0x0bb6,	// (0x0006dd20) cell_cams_pane_ParamLimits

0x0bb6,	// (0x0006dd20) cell_cams_pane

0xa693,	// (0x000777fd) cams_burst_image_pane

0xa69b,	// (0x00077805) cell_cams_pane_g1

0x983a,	// (0x000769a4) grid_highlight_pane_cp03

0xa3d7,	// (0x00077541) mp_bg_pane_g1

0x93b2,	// (0x0007651c) bg_list_pane_cp03

0x93b2,	// (0x0007651c) bg_mp_pane

0x93b2,	// (0x0007651c) grid_mp_pane

0xa689,	// (0x000777f3) media_player_g1

0xabe7,	// (0x00077d51) media_player_t1

0xabe7,	// (0x00077d51) media_player_t2

0xabe7,	// (0x00077d51) media_player_t3

0xabe7,	// (0x00077d51) media_player_t4

0xabe7,	// (0x00077d51) media_player_t5

0xabe7,	// (0x00077d51) media_player_t6

0xabe7,	// (0x00077d51) media_player_t7

0x0006,

0xf51f,	// (0x0007c689) media_player_t

0x93b2,	// (0x0007651c) wait_bar_pane_cp02

0xf504,	// (0x0007c66e) main_usb_pane_t

0xae52,	// (0x00077fbc) cell_mp_pane

0xa3d7,	// (0x00077541) cell_mp_pane_g1

0x983a,	// (0x000769a4) grid_highlight_pane_cp06

0xa6a3,	// (0x0007780d) grid_skin_colour_pane

0xa6ab,	// (0x00077815) list_highlight_pane_cp03

0x0bd8,	// (0x0006dd42) skin_g1

0xa6b3,	// (0x0007781d) skin_t1

0xa6c2,	// (0x0007782c) skin_t2

0x0001,

0xf1d8,	// (0x0007c342) skin_t

0x0be0,	// (0x0006dd4a) cell_skin_colour_pane_ParamLimits

0x0be0,	// (0x0006dd4a) cell_skin_colour_pane

0xa6d0,	// (0x0007783a) cell_skin_colour_pane_g1

0x0c53,	// (0x0006ddbd) call_video_g1_ParamLimits

0x0c53,	// (0x0006ddbd) call_video_g1

0x0c6f,	// (0x0006ddd9) call_video_g2_ParamLimits

0x0c6f,	// (0x0006ddd9) call_video_g2

0x0001,

0xf1dd,	// (0x0007c347) call_video_g_ParamLimits

0xf1dd,	// (0x0007c347) call_video_g

0x0cb4,	// (0x0006de1e) call_video_uplink_pane_cp1_ParamLimits

0x0cb4,	// (0x0006de1e) call_video_uplink_pane_cp1

0xa6e2,	// (0x0007784c) call_video_uplink_pane_cp2

0x0d55,	// (0x0006debf) video_down_crop_pane_ParamLimits

0x0d55,	// (0x0006debf) video_down_crop_pane

0x0e3e,	// (0x0006dfa8) video_down_pane_ParamLimits

0x0e3e,	// (0x0006dfa8) video_down_pane

0xa6ea,	// (0x00077854) video_down_subqcif_pane_ParamLimits

0xa6ea,	// (0x00077854) video_down_subqcif_pane

0xa704,	// (0x0007786e) video_down_subqcif_pane_cp_ParamLimits

0xa704,	// (0x0007786e) video_down_subqcif_pane_cp

0xa72c,	// (0x00077896) im_reading_pane_ParamLimits

0xa72c,	// (0x00077896) im_reading_pane

0x0f49,	// (0x0006e0b3) im_writing_pane_ParamLimits

0x0f49,	// (0x0006e0b3) im_writing_pane

0x0f67,	// (0x0006e0d1) im_reading_pane_t1

0xa746,	// (0x000778b0) list_im_pane

0xa757,	// (0x000778c1) scroll_pane_cp07

0x0fa6,	// (0x0006e110) im_writing_pane_t1_ParamLimits

0x0fa6,	// (0x0006e110) im_writing_pane_t1

0xa770,	// (0x000778da) im_writing_pane_t2_ParamLimits

0xa770,	// (0x000778da) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0007c351) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0007c351) im_writing_pane_t

0x983a,	// (0x000769a4) input_focus_pane_cp04

0x983a,	// (0x000769a4) input_focus_pane_cp05

0x0fbb,	// (0x0006e125) list_im_single_pane_ParamLimits

0x0fbb,	// (0x0006e125) list_im_single_pane

0xa78d,	// (0x000778f7) list_single_im_pane_t1

0xa653,	// (0x000777bd) blid_accuracy_pane

0xa653,	// (0x000777bd) blid_compass_pane

0xc5c2,	// (0x0007972c) main_location_t1

0xc5c2,	// (0x0007972c) main_location_t2

0xc5c2,	// (0x0007972c) main_location_t3

0x0002,

0xf52e,	// (0x0007c698) main_location_t

0x983a,	// (0x000769a4) aid_levels_location

0xa3d7,	// (0x00077541) blid_accuracy_pane_g1

0xa3d7,	// (0x00077541) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x0007c3a0) blid_accuracy_pane_g

0xa7c7,	// (0x00077931) wml_content_pane

0xa805,	// (0x0007796f) wml_button_pane_ParamLimits

0xa805,	// (0x0007796f) wml_button_pane

0x0fd1,	// (0x0006e13b) wml_list_single_large_pane_ParamLimits

0x0fd1,	// (0x0006e13b) wml_list_single_large_pane

0x0fea,	// (0x0006e154) wml_list_single_medium_pane_ParamLimits

0x0fea,	// (0x0006e154) wml_list_single_medium_pane

0x1004,	// (0x0006e16e) wml_list_single_small_pane_ParamLimits

0x1004,	// (0x0006e16e) wml_list_single_small_pane

0xa819,	// (0x00077983) wml_selection_box_pane_ParamLimits

0xa819,	// (0x00077983) wml_selection_box_pane

0xa82c,	// (0x00077996) wml_list_single_pane_t1

0xa83b,	// (0x000779a5) wml_list_single_medium_pane_t1

0xa84a,	// (0x000779b4) wml_list_single_large_pane_t1

0xa859,	// (0x000779c3) input_focus_pane_cp02_ParamLimits

0xa859,	// (0x000779c3) input_focus_pane_cp02

0xa86c,	// (0x000779d6) wml_selection_box_pane_g1

0xa875,	// (0x000779df) wml_selection_box_pane_t1_ParamLimits

0xa875,	// (0x000779df) wml_selection_box_pane_t1

0xa3bf,	// (0x00077529) bg_wml_button_pane_ParamLimits

0xa3bf,	// (0x00077529) bg_wml_button_pane

0xa88d,	// (0x000779f7) wml_button_pane_g1

0xa895,	// (0x000779ff) wml_button_pane_t1

0xa88d,	// (0x000779f7) wml_button_bg_pane_g1

0xa8a5,	// (0x00077a0f) wml_button_bg_pane_g2

0xa8ad,	// (0x00077a17) wml_button_bg_pane_g3

0xa8b5,	// (0x00077a1f) wml_button_bg_pane_g4

0xa8bd,	// (0x00077a27) wml_button_bg_pane_g5

0xa8c5,	// (0x00077a2f) wml_button_bg_pane_g6

0xa8cd,	// (0x00077a37) wml_button_bg_pane_g7

0xa8d5,	// (0x00077a3f) wml_button_bg_pane_g8

0xa8dd,	// (0x00077a47) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0007c356) wml_button_bg_pane_g

0x1020,	// (0x0006e18a) bg_list_pane_cp02

0xa8e5,	// (0x00077a4f) mce_header_pane_ParamLimits

0xa8e5,	// (0x00077a4f) mce_header_pane

0xa8fb,	// (0x00077a65) mce_icon_pane

0xa8fb,	// (0x00077a65) mce_image_pane

0xa904,	// (0x00077a6e) mce_text_pane_ParamLimits

0xa904,	// (0x00077a6e) mce_text_pane

0x102a,	// (0x0006e194) scroll_pane_cp03

0xa7fd,	// (0x00077967) scroll_pane_cp04

0xa917,	// (0x00077a81) scroll_pane_cp05_ParamLimits

0xa917,	// (0x00077a81) scroll_pane_cp05

0x1034,	// (0x0006e19e) mce_header_field_pane_ParamLimits

0x1034,	// (0x0006e19e) mce_header_field_pane

0x104d,	// (0x0006e1b7) mce_header_field_pane_2_ParamLimits

0x104d,	// (0x0006e1b7) mce_header_field_pane_2

0x1063,	// (0x0006e1cd) mce_header_field_pane_3

0x106b,	// (0x0006e1d5) list_single_mce_message_pane_ParamLimits

0x106b,	// (0x0006e1d5) list_single_mce_message_pane

0x1087,	// (0x0006e1f1) list_single_mce_smart_pane_ParamLimits

0x1087,	// (0x0006e1f1) list_single_mce_smart_pane

0xa923,	// (0x00077a8d) input_focus_pane_cp03

0xa92c,	// (0x00077a96) list_header_data_pane

0x10ae,	// (0x0006e218) mce_header_field_pane_t1

0x10be,	// (0x0006e228) list_single_mce_header_pane_ParamLimits

0x10be,	// (0x0006e228) list_single_mce_header_pane

0xa934,	// (0x00077a9e) list_single_mce_header_pane_t1

0xa943,	// (0x00077aad) list_single_mce_message_pane_g1

0xa94b,	// (0x00077ab5) list_single_mce_message_pane_t1

0x10f8,	// (0x0006e262) bg_cale_heading_pane_cp01_ParamLimits

0x10f8,	// (0x0006e262) bg_cale_heading_pane_cp01

0xa959,	// (0x00077ac3) bg_cale_pane_cp02_ParamLimits

0xa959,	// (0x00077ac3) bg_cale_pane_cp02

0x114a,	// (0x0006e2b4) cale_month_corner_pane

0x1169,	// (0x0006e2d3) cale_month_day_heading_pane_ParamLimits

0x1169,	// (0x0006e2d3) cale_month_day_heading_pane

0x11d3,	// (0x0006e33d) cale_month_pane_g1_ParamLimits

0x11d3,	// (0x0006e33d) cale_month_pane_g1

0x121a,	// (0x0006e384) cale_month_pane_g2_ParamLimits

0x121a,	// (0x0006e384) cale_month_pane_g2

0x1256,	// (0x0006e3c0) cale_month_pane_g3_ParamLimits

0x1256,	// (0x0006e3c0) cale_month_pane_g3

0x12aa,	// (0x0006e414) cale_month_pane_g4_ParamLimits

0x12aa,	// (0x0006e414) cale_month_pane_g4

0x12fe,	// (0x0006e468) cale_month_pane_g5_ParamLimits

0x12fe,	// (0x0006e468) cale_month_pane_g5

0x135a,	// (0x0006e4c4) cale_month_pane_g6_ParamLimits

0x135a,	// (0x0006e4c4) cale_month_pane_g6

0x13c2,	// (0x0006e52c) cale_month_pane_g7_ParamLimits

0x13c2,	// (0x0006e52c) cale_month_pane_g7

0x142e,	// (0x0006e598) cale_month_pane_g8_ParamLimits

0x142e,	// (0x0006e598) cale_month_pane_g8

0x149a,	// (0x0006e604) cale_month_pane_g9_ParamLimits

0x149a,	// (0x0006e604) cale_month_pane_g9

0x14fe,	// (0x0006e668) cale_month_pane_g10_ParamLimits

0x14fe,	// (0x0006e668) cale_month_pane_g10

0x1550,	// (0x0006e6ba) cale_month_pane_g11_ParamLimits

0x1550,	// (0x0006e6ba) cale_month_pane_g11

0x15a2,	// (0x0006e70c) cale_month_pane_g12_ParamLimits

0x15a2,	// (0x0006e70c) cale_month_pane_g12

0x15fa,	// (0x0006e764) cale_month_pane_g13_ParamLimits

0x15fa,	// (0x0006e764) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0007c369) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0007c369) cale_month_pane_g

0x1652,	// (0x0006e7bc) cale_month_week_pane

0x1676,	// (0x0006e7e0) grid_cale_month_pane_ParamLimits

0x1676,	// (0x0006e7e0) grid_cale_month_pane

0x16d7,	// (0x0006e841) cale_month_day_heading_pane_t1

0x175d,	// (0x0006e8c7) cale_month_day_heading_pane_t2

0x17d6,	// (0x0006e940) cale_month_day_heading_pane_t3

0x184f,	// (0x0006e9b9) cale_month_day_heading_pane_t4

0x18d0,	// (0x0006ea3a) cale_month_day_heading_pane_t5

0x1959,	// (0x0006eac3) cale_month_day_heading_pane_t6

0x19ea,	// (0x0006eb54) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0007c384) cale_month_day_heading_pane_t

0xa5f8,	// (0x00077762) bg_cale_side_pane_cp01

0x1a7b,	// (0x0006ebe5) cale_month_week_pane_t1

0x1a94,	// (0x0006ebfe) cale_month_week_pane_t2

0x1aad,	// (0x0006ec17) cale_month_week_pane_t3

0x1ac6,	// (0x0006ec30) cale_month_week_pane_t4

0x1adf,	// (0x0006ec49) cale_month_week_pane_t5

0x1af8,	// (0x0006ec62) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0007c393) cale_month_week_pane_t

0x1b1d,	// (0x0006ec87) cell_cale_month_pane_ParamLimits

0x1b1d,	// (0x0006ec87) cell_cale_month_pane

0x9af5,	// (0x00076c5f) cell_cale_month_pane_g1

0x1c5b,	// (0x0006edc5) cell_cale_month_pane_t1_ParamLimits

0x1c5b,	// (0x0006edc5) cell_cale_month_pane_t1

0xa606,	// (0x00077770) grid_highlight_pane_cp08

0xa3d7,	// (0x00077541) main_smil_g1

0x1c87,	// (0x0006edf1) smil_status_pane

0xa998,	// (0x00077b02) smil_text_pane

0xc4d8,	// (0x00079642) bg_popup_call3_rect_pane_g8

0xc4e0,	// (0x0007964a) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x0007c62c) bg_popup_call3_rect_pane_g

0xc68b,	// (0x000797f5) smil_status_volume_pane_g1

0xa9a2,	// (0x00077b0c) smil_status_pane_t1

0x9cbf,	// (0x00076e29) volume_smil_pane

0xa9b9,	// (0x00077b23) list_smil_text_pane

0x1c9c,	// (0x0006ee06) scroll_pane_cp011

0x1ca7,	// (0x0006ee11) smil_text_list_pane_t1_ParamLimits

0x1ca7,	// (0x0006ee11) smil_text_list_pane_t1

0x9b01,	// (0x00076c6b) aid_volume_smil_ParamLimits

0x9b01,	// (0x00076c6b) aid_volume_smil

0xa3d7,	// (0x00077541) smil_volume_pane_g1

0xa3d7,	// (0x00077541) smil_volume_pane_g2

0x0001,

0xf236,	// (0x0007c3a0) smil_volume_pane_g

0x03cc,	// (0x0006d536) listscroll_cale_day_pane

0xa9c3,	// (0x00077b2d) bg_cale_pane

0xa9db,	// (0x00077b45) list_cale_pane

0xa9fe,	// (0x00077b68) scroll_pane_cp09

0xaa0f,	// (0x00077b79) cale_bg_pane_g1

0xaa17,	// (0x00077b81) cale_bg_pane_g2

0xaa1f,	// (0x00077b89) cale_bg_pane_g3

0xaa27,	// (0x00077b91) cale_bg_pane_g4

0xaa2f,	// (0x00077b99) cale_bg_pane_g5

0xaa37,	// (0x00077ba1) cale_bg_pane_g6

0xaa3f,	// (0x00077ba9) cale_bg_pane_g7

0xaa47,	// (0x00077bb1) cale_bg_pane_g8

0xaa4f,	// (0x00077bb9) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0007c3a5) cale_bg_pane_g

0xaa57,	// (0x00077bc1) list_cale_time_pane_ParamLimits

0xaa57,	// (0x00077bc1) list_cale_time_pane

0xaa6e,	// (0x00077bd8) list_cale_time_pane_g1_ParamLimits

0xaa6e,	// (0x00077bd8) list_cale_time_pane_g1

0xaa7a,	// (0x00077be4) list_cale_time_pane_g2_ParamLimits

0xaa7a,	// (0x00077be4) list_cale_time_pane_g2

0x1cfb,	// (0x0006ee65) list_cale_time_pane_g3_ParamLimits

0x1cfb,	// (0x0006ee65) list_cale_time_pane_g3

0x1d09,	// (0x0006ee73) list_cale_time_pane_g4_ParamLimits

0x1d09,	// (0x0006ee73) list_cale_time_pane_g4

0x1d17,	// (0x0006ee81) list_cale_time_pane_g5_ParamLimits

0x1d17,	// (0x0006ee81) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0007c3b8) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0007c3b8) list_cale_time_pane_g

0xaa94,	// (0x00077bfe) list_cale_time_pane_t1_ParamLimits

0xaa94,	// (0x00077bfe) list_cale_time_pane_t1

0xaabc,	// (0x00077c26) list_cale_time_pane_t2_ParamLimits

0xaabc,	// (0x00077c26) list_cale_time_pane_t2

0x1fc9,	// (0x0006f133) aid_blid_cardinal_pane

0x2007,	// (0x0006f171) compass_pane_t4

0xaae4,	// (0x00077c4e) list_cale_time_pane_t4_ParamLimits

0xaae4,	// (0x00077c4e) list_cale_time_pane_t4

0x2015,	// (0x0006f17f) compass_pane_t5

0x2025,	// (0x0006f18f) compass_pane_t6

0x2033,	// (0x0006f19d) compass_pane_t7

0xaf02,	// (0x0007806c) navi_pane_cc_t1

0xb356,	// (0x000784c0) aid_phob_thumbnail_center_pane

0x254e,	// (0x0006f6b8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0007c3c5) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0007c3c5) list_cale_time_pane_t

0x9491,	// (0x000765fb) bg_popup_window_pane_cp02_ParamLimits

0x9491,	// (0x000765fb) bg_popup_window_pane_cp02

0xab0c,	// (0x00077c76) heading_pane_cp01_ParamLimits

0xab0c,	// (0x00077c76) heading_pane_cp01

0xab18,	// (0x00077c82) loc_req_pane_ParamLimits

0xab18,	// (0x00077c82) loc_req_pane

0xab28,	// (0x00077c92) loc_type_pane_ParamLimits

0xab28,	// (0x00077c92) loc_type_pane

0xab3a,	// (0x00077ca4) loc_type_pane_t1_ParamLimits

0xab3a,	// (0x00077ca4) loc_type_pane_t1

0xab4c,	// (0x00077cb6) loc_type_pane_t2_ParamLimits

0xab4c,	// (0x00077cb6) loc_type_pane_t2

0xab5e,	// (0x00077cc8) loc_type_pane_t3_ParamLimits

0xab5e,	// (0x00077cc8) loc_type_pane_t3

0x0002,

0xf262,	// (0x0007c3cc) loc_type_pane_t_ParamLimits

0xf262,	// (0x0007c3cc) loc_type_pane_t

0xab70,	// (0x00077cda) list_loc_req_pane

0xab7a,	// (0x00077ce4) scroll_pane_cp012

0x1d25,	// (0x0006ee8f) list_single_loc_request_popup_menu_pane_ParamLimits

0x1d25,	// (0x0006ee8f) list_single_loc_request_popup_menu_pane

0xab85,	// (0x00077cef) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xab85,	// (0x00077cef) list_single_loc_request_popup_menu_pane_g1

0xab91,	// (0x00077cfb) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xab91,	// (0x00077cfb) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0007c3d3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0007c3d3) list_single_loc_request_popup_menu_pane_g

0xab9d,	// (0x00077d07) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xab9d,	// (0x00077d07) list_single_loc_request_popup_menu_pane_t1

0xa3bf,	// (0x00077529) bg_popup_window_pane_cp03_ParamLimits

0xa3bf,	// (0x00077529) bg_popup_window_pane_cp03

0xabb3,	// (0x00077d1d) heading_loc_req_pane_ParamLimits

0xabb3,	// (0x00077d1d) heading_loc_req_pane

0x1d32,	// (0x0006ee9c) popup_dyc_status_message_window_g1_ParamLimits

0x1d32,	// (0x0006ee9c) popup_dyc_status_message_window_g1

0x1d46,	// (0x0006eeb0) popup_dyc_status_message_window_t1_ParamLimits

0x1d46,	// (0x0006eeb0) popup_dyc_status_message_window_t1

0x1d5b,	// (0x0006eec5) popup_dyc_status_message_window_t2_ParamLimits

0x1d5b,	// (0x0006eec5) popup_dyc_status_message_window_t2

0x1d70,	// (0x0006eeda) popup_dyc_status_message_window_t3_ParamLimits

0x1d70,	// (0x0006eeda) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0007c3d8) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0007c3d8) popup_dyc_status_message_window_t

0x983a,	// (0x000769a4) bg_heading_pane_cp01

0xabbf,	// (0x00077d29) heading_loc_req_pane_g1

0xabc7,	// (0x00077d31) heading_loc_req_pane_g2

0xabcf,	// (0x00077d39) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x0007c3df) heading_loc_req_pane_g

0xabd7,	// (0x00077d41) heading_loc_req_pane_t1

0xabf7,	// (0x00077d61) bg_popup_sub_pane_cp01_ParamLimits

0xabf7,	// (0x00077d61) bg_popup_sub_pane_cp01

0xac05,	// (0x00077d6f) popup_cale_events_window_g1_ParamLimits

0xac05,	// (0x00077d6f) popup_cale_events_window_g1

0xac25,	// (0x00077d8f) popup_cale_events_window_g2_ParamLimits

0xac25,	// (0x00077d8f) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x0007c401) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x0007c401) popup_cale_events_window_g

0xac45,	// (0x00077daf) popup_cale_events_window_t1_ParamLimits

0xac45,	// (0x00077daf) popup_cale_events_window_t1

0xac57,	// (0x00077dc1) popup_cale_events_window_t2_ParamLimits

0xac57,	// (0x00077dc1) popup_cale_events_window_t2

0xac95,	// (0x00077dff) popup_cale_events_window_t3_ParamLimits

0xac95,	// (0x00077dff) popup_cale_events_window_t3

0xaccf,	// (0x00077e39) popup_cale_events_window_t4_ParamLimits

0xaccf,	// (0x00077e39) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0007c406) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0007c406) popup_cale_events_window_t

0x1d98,	// (0x0006ef02) call_type_pane

0x1da8,	// (0x0006ef12) popup_call_status_window_g1

0x1dbc,	// (0x0006ef26) popup_call_status_window_g2

0x1dd0,	// (0x0006ef3a) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x0007c40f) popup_call_status_window_g

0xad05,	// (0x00077e6f) call_type_pane_g1

0xad0e,	// (0x00077e78) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0007c416) call_type_pane_g

0x983a,	// (0x000769a4) bg_popup_sub_pane_cp02

0xad17,	// (0x00077e81) listscroll_popup_wml_pane

0xad1f,	// (0x00077e89) list_wml_pane

0xad29,	// (0x00077e93) scroll_pane_cp013

0xad34,	// (0x00077e9e) list_single_graphic_popup_wml_pane_ParamLimits

0xad34,	// (0x00077e9e) list_single_graphic_popup_wml_pane

0xa3d7,	// (0x00077541) list_single_graphic_popup_wml_pane_g1

0xad48,	// (0x00077eb2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0007c41b) list_single_graphic_popup_wml_pane_g

0xad50,	// (0x00077eba) list_single_graphic_popup_wml_pane_t1

0xad66,	// (0x00077ed0) aid_call_pane

0xa3b7,	// (0x00077521) popup_clock_analogue_window_g1

0xa3b7,	// (0x00077521) popup_clock_analogue_window_g2

0x9b23,	// (0x00076c8d) popup_clock_analogue_window_g3

0x9b23,	// (0x00076c8d) popup_clock_analogue_window_g4

0xa3d7,	// (0x00077541) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x0007c420) popup_clock_analogue_window_g

0x9b2b,	// (0x00076c95) popup_clock_analogue_window_t1

0x9b39,	// (0x00076ca3) clock_digital_number_pane_ParamLimits

0x9b39,	// (0x00076ca3) clock_digital_number_pane

0x9b45,	// (0x00076caf) clock_digital_number_pane_cp02_ParamLimits

0x9b45,	// (0x00076caf) clock_digital_number_pane_cp02

0x9b51,	// (0x00076cbb) clock_digital_number_pane_cp03_ParamLimits

0x9b51,	// (0x00076cbb) clock_digital_number_pane_cp03

0x9b5d,	// (0x00076cc7) clock_digital_number_pane_cp04_ParamLimits

0x9b5d,	// (0x00076cc7) clock_digital_number_pane_cp04

0x9b69,	// (0x00076cd3) clock_digital_separator_pane_ParamLimits

0x9b69,	// (0x00076cd3) clock_digital_separator_pane

0x9b75,	// (0x00076cdf) popup_clock_digital_window_t1

0xa3d7,	// (0x00077541) clock_digital_number_pane_g1

0xa3d7,	// (0x00077541) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x0007c3a0) clock_digital_number_pane_g

0xa3d7,	// (0x00077541) clock_digital_separator_pane_g1

0xa3d7,	// (0x00077541) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x0007c3a0) clock_digital_separator_pane_g

0x983a,	// (0x000769a4) bg_popup_window_pane_cp04

0xad6e,	// (0x00077ed8) heading_pane_cp03

0xa653,	// (0x000777bd) listscroll_popup_gms_pane

0x983a,	// (0x000769a4) grid_large_graphic_popup_pane

0xad77,	// (0x00077ee1) listscroll_popup_gms_pane_g1

0xad80,	// (0x00077eea) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0007c42b) listscroll_popup_gms_pane_g

0xad89,	// (0x00077ef3) scroll_pane_cp014

0xa42c,	// (0x00077596) cell_large_graphic_popup_pane_ParamLimits

0xa42c,	// (0x00077596) cell_large_graphic_popup_pane

0xa43a,	// (0x000775a4) cell_large_graphic_popup_pane_g1_ParamLimits

0xa43a,	// (0x000775a4) cell_large_graphic_popup_pane_g1

0xad92,	// (0x00077efc) cell_large_graphic_popup_pane_g2_ParamLimits

0xad92,	// (0x00077efc) cell_large_graphic_popup_pane_g2

0xada0,	// (0x00077f0a) cell_large_graphic_popup_pane_g3_ParamLimits

0xada0,	// (0x00077f0a) cell_large_graphic_popup_pane_g3

0xadae,	// (0x00077f18) cell_large_graphic_popup_pane_g4_ParamLimits

0xadae,	// (0x00077f18) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x0007c430) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x0007c430) cell_large_graphic_popup_pane_g

0x983a,	// (0x000769a4) grid_highlight_pane_cp010

0xa3d7,	// (0x00077541) bg_popup_call_pane_g1

0xadbf,	// (0x00077f29) list_single_graphic_popup_conf_pane_ParamLimits

0xadbf,	// (0x00077f29) list_single_graphic_popup_conf_pane

0xadd1,	// (0x00077f3b) list_highlight_pane_cp01

0xadda,	// (0x00077f44) list_single_graphic_popup_conf_pane_g1

0xade2,	// (0x00077f4c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x0007c439) list_single_graphic_popup_conf_pane_g

0xadea,	// (0x00077f54) list_single_graphic_popup_conf_pane_t1

0xadf8,	// (0x00077f62) linegrid_cams_pane_g1

0x1de0,	// (0x0006ef4a) linegrid_cams_pane_g2

0xa639,	// (0x000777a3) linegrid_cams_pane_g3

0xae01,	// (0x00077f6b) linegrid_cams_pane_g4

0x1de9,	// (0x0006ef53) linegrid_cams_pane_g5

0x1df2,	// (0x0006ef5c) linegrid_cams_pane_g6

0xa642,	// (0x000777ac) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0007c43e) linegrid_cams_pane_g

0xae0a,	// (0x00077f74) popup_clock_analogue_window

0xae0a,	// (0x00077f74) popup_clock_digital_window

0x983a,	// (0x000769a4) popup_phob_thumbnail_window

0xa3d7,	// (0x00077541) call_video_uplink_pane_g1

0xae13,	// (0x00077f7d) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0007c44d) call_video_uplink_pane_g

0xae1b,	// (0x00077f85) video_uplink_pane

0xae23,	// (0x00077f8d) mce_image_pane_g1

0x1dfd,	// (0x0006ef67) mce_image_pane_g2

0x1e07,	// (0x0006ef71) mce_image_pane_g3

0x1e11,	// (0x0006ef7b) mce_image_pane_g4

0x1e19,	// (0x0006ef83) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0007c452) mce_image_pane_g

0xae2d,	// (0x00077f97) control_top_pane_stacon_cp01_ParamLimits

0xae2d,	// (0x00077f97) control_top_pane_stacon_cp01

0xae41,	// (0x00077fab) uni_indicator_pane_stacon_cp01_ParamLimits

0xae41,	// (0x00077fab) uni_indicator_pane_stacon_cp01

0xae52,	// (0x00077fbc) bg_popup_sub_pane_cp03

0x1e21,	// (0x0006ef8b) chi_dic_find_pane

0x1e29,	// (0x0006ef93) listscroll_chi_dic_pane

0x1e32,	// (0x0006ef9c) main_pane_chidic_g1

0x1e45,	// (0x0006efaf) chi_dic_find_pane_t1

0xae5c,	// (0x00077fc6) find_chidic_pane

0xae65,	// (0x00077fcf) chi_dic_list_pane_ParamLimits

0xae65,	// (0x00077fcf) chi_dic_list_pane

0xae76,	// (0x00077fe0) scroll_pane_cp020

0x1e53,	// (0x0006efbd) find_chidic_pane_t1

0x983a,	// (0x000769a4) input_focus_pane_cp06

0x1e62,	// (0x0006efcc) list_chi_dic_pane_ParamLimits

0x1e62,	// (0x0006efcc) list_chi_dic_pane

0x1e74,	// (0x0006efde) list_chi_dic_pane_t1_ParamLimits

0x1e74,	// (0x0006efde) list_chi_dic_pane_t1

0x983a,	// (0x000769a4) list_highlight_pane_cp020

0xae7e,	// (0x00077fe8) bg_cale_heading_pane_g1

0x1e87,	// (0x0006eff1) bg_cale_heading_pane_g2

0x1e8f,	// (0x0006eff9) bg_cale_heading_pane_g3

0x1e97,	// (0x0006f001) bg_cale_heading_pane_g4

0x1ea1,	// (0x0006f00b) bg_cale_heading_pane_g5

0x1eab,	// (0x0006f015) bg_cale_heading_pane_g6

0x1eb3,	// (0x0006f01d) bg_cale_heading_pane_g7

0x1ebb,	// (0x0006f025) bg_cale_heading_pane_g8

0x1ec5,	// (0x0006f02f) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0007c45d) bg_cale_heading_pane_g

0xae7e,	// (0x00077fe8) bg_cale_side_pane_g1

0x1ecf,	// (0x0006f039) bg_cale_side_pane_g2

0x1ed9,	// (0x0006f043) bg_cale_side_pane_g3

0x1ee3,	// (0x0006f04d) bg_cale_side_pane_g4

0x1eed,	// (0x0006f057) bg_cale_side_pane_g5

0x1ef7,	// (0x0006f061) bg_cale_side_pane_g6

0x1f01,	// (0x0006f06b) bg_cale_side_pane_g7

0x1f0b,	// (0x0006f075) bg_cale_side_pane_g8

0x1f13,	// (0x0006f07d) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x0007c470) bg_cale_side_pane_g

0x1f1b,	// (0x0006f085) popup_call_status_window_ParamLimits

0x1f1b,	// (0x0006f085) popup_call_status_window

0xae86,	// (0x00077ff0) stacon_top_pane

0xae8e,	// (0x00077ff8) status_pane_ParamLimits

0xae8e,	// (0x00077ff8) status_pane

0xaea3,	// (0x0007800d) status_small_pane

0xaeab,	// (0x00078015) control_pane

0x983a,	// (0x000769a4) stacon_bottom_pane

0xaeb3,	// (0x0007801d) list_single_mce_smart_pane_t1_ParamLimits

0xaeb3,	// (0x0007801d) list_single_mce_smart_pane_t1

0xaec6,	// (0x00078030) list_single_mce_smart_pane_t2_ParamLimits

0xaec6,	// (0x00078030) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x0007c483) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x0007c483) list_single_mce_smart_pane_t

0x1f68,	// (0x0006f0d2) compass_pane

0x1f73,	// (0x0006f0dd) main_location2_pane_t1

0x1f89,	// (0x0006f0f3) main_location2_pane_t2

0x1f9f,	// (0x0006f109) main_location2_pane_t3

0x0003,

0xf31e,	// (0x0007c488) main_location2_pane_t

0xaee5,	// (0x0007804f) compass_pane_g1_ParamLimits

0xaee5,	// (0x0007804f) compass_pane_g1

0x1fe9,	// (0x0006f153) compass_pane_t1

0x1ff8,	// (0x0006f162) compass_pane_t2

0x0005,

0xf327,	// (0x0007c491) compass_pane_t

0x2043,	// (0x0006f1ad) text_secondary_cp61

0xaef9,	// (0x00078063) navi_pane_cams_g5

0xaf1c,	// (0x00078086) navi_pane_im_t1

0xaf2a,	// (0x00078094) navi_pane_mp_g1_ParamLimits

0xaf2a,	// (0x00078094) navi_pane_mp_g1

0xaf3e,	// (0x000780a8) navi_pane_mp_g2_ParamLimits

0xaf3e,	// (0x000780a8) navi_pane_mp_g2

0xaf4a,	// (0x000780b4) navi_pane_mp_g3_ParamLimits

0xaf4a,	// (0x000780b4) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x0007c4a5) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x0007c4a5) navi_pane_mp_g

0xaf56,	// (0x000780c0) navi_pane_mp_t1

0xaf64,	// (0x000780ce) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0007c4ac) navi_pane_mp_t

0xafa0,	// (0x0007810a) navi_pane_vt_g1

0xaf56,	// (0x000780c0) navi_pane_vt_t1

0xafa8,	// (0x00078112) navi_slider_pane

0xa653,	// (0x000777bd) zooming_pane

0xafb0,	// (0x0007811a) navi_slider_pane_g1

0x9b92,	// (0x00076cfc) navi_slider_pane_g2

0x0006,

0xf349,	// (0x0007c4b3) navi_slider_pane_g

0xafd4,	// (0x0007813e) aid_levels_zoom

0xafdc,	// (0x00078146) zooming_pane_g1

0xafe4,	// (0x0007814e) zooming_pane_g2

0xafe4,	// (0x0007814e) zooming_pane_g3

0x0002,

0xf358,	// (0x0007c4c2) zooming_pane_g

0xafec,	// (0x00078156) level_10_zoom

0xaff5,	// (0x0007815f) level_11_zoom

0xaffe,	// (0x00078168) level_1_zoom

0xb007,	// (0x00078171) level_2_zoom

0xb317,	// (0x00078481) level_3_zoom

0xb320,	// (0x0007848a) level_4_zoom

0xb329,	// (0x00078493) level_5_zoom

0xb332,	// (0x0007849c) level_6_zoom

0xb33b,	// (0x000784a5) level_7_zoom

0xb344,	// (0x000784ae) level_8_zoom

0xb34d,	// (0x000784b7) level_9_zoom

0xb35e,	// (0x000784c8) popup_phob_thumbnail_window_g1

0xb366,	// (0x000784d0) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0007c4c9) popup_phob_thumbnail_window_g

0x2c49,	// (0x0006fdb3) level_1_location

0x2c51,	// (0x0006fdbb) level_2_location

0x2c59,	// (0x0006fdc3) level_3_location

0x2c63,	// (0x0006fdcd) level_4_location

0xa653,	// (0x000777bd) level_5_location

0x218c,	// (0x0006f2f6) mce_icon_pane_g1

0x2196,	// (0x0006f300) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0007c4ce) mce_icon_pane_g

0xb36e,	// (0x000784d8) main_mup_pane_g1_ParamLimits

0xb36e,	// (0x000784d8) main_mup_pane_g1

0xb36e,	// (0x000784d8) main_mup_pane_g2_ParamLimits

0xb36e,	// (0x000784d8) main_mup_pane_g2

0xb36e,	// (0x000784d8) main_mup_pane_g3_ParamLimits

0xb36e,	// (0x000784d8) main_mup_pane_g3

0xb36e,	// (0x000784d8) main_mup_pane_g4_ParamLimits

0xb36e,	// (0x000784d8) main_mup_pane_g4

0xb36e,	// (0x000784d8) main_mup_pane_g5_ParamLimits

0xb36e,	// (0x000784d8) main_mup_pane_g5

0xb36e,	// (0x000784d8) main_mup_pane_g6_ParamLimits

0xb36e,	// (0x000784d8) main_mup_pane_g6

0xb36e,	// (0x000784d8) main_mup_pane_g7_ParamLimits

0xb36e,	// (0x000784d8) main_mup_pane_g7

0xb36e,	// (0x000784d8) main_mup_pane_g8_ParamLimits

0xb36e,	// (0x000784d8) main_mup_pane_g8

0xb36e,	// (0x000784d8) main_mup_pane_g9_ParamLimits

0xb36e,	// (0x000784d8) main_mup_pane_g9

0xb36e,	// (0x000784d8) main_mup_pane_g10_ParamLimits

0xb36e,	// (0x000784d8) main_mup_pane_g10

0xb36e,	// (0x000784d8) main_mup_pane_g11_ParamLimits

0xb36e,	// (0x000784d8) main_mup_pane_g11

0xa43a,	// (0x000775a4) main_mup_pane_g12_ParamLimits

0xa43a,	// (0x000775a4) main_mup_pane_g12

0xb36e,	// (0x000784d8) main_mup_pane_g13_ParamLimits

0xb36e,	// (0x000784d8) main_mup_pane_g13

0x000c,

0xf369,	// (0x0007c4d3) main_mup_pane_g_ParamLimits

0xf369,	// (0x0007c4d3) main_mup_pane_g

0xb37c,	// (0x000784e6) main_mup_pane_t1_ParamLimits

0xb37c,	// (0x000784e6) main_mup_pane_t1

0xb37c,	// (0x000784e6) main_mup_pane_t2_ParamLimits

0xb37c,	// (0x000784e6) main_mup_pane_t2

0xb37c,	// (0x000784e6) main_mup_pane_t3_ParamLimits

0xb37c,	// (0x000784e6) main_mup_pane_t3

0xa65b,	// (0x000777c5) main_mup_pane_t4_ParamLimits

0xa65b,	// (0x000777c5) main_mup_pane_t4

0xa65b,	// (0x000777c5) main_mup_pane_t5_ParamLimits

0xa65b,	// (0x000777c5) main_mup_pane_t5

0xb010,	// (0x0007817a) main_mup_pane_t6_ParamLimits

0xb010,	// (0x0007817a) main_mup_pane_t6

0x0005,

0xf384,	// (0x0007c4ee) main_mup_pane_t_ParamLimits

0xf384,	// (0x0007c4ee) main_mup_pane_t

0xa42c,	// (0x00077596) mup_progress_pane_ParamLimits

0xa42c,	// (0x00077596) mup_progress_pane

0xb390,	// (0x000784fa) mup_visualizer_pane_ParamLimits

0xb390,	// (0x000784fa) mup_visualizer_pane

0xb390,	// (0x000784fa) mup_volume_pane_ParamLimits

0xb390,	// (0x000784fa) mup_volume_pane

0xa448,	// (0x000775b2) mup_visualizer_pane_g1_ParamLimits

0xa448,	// (0x000775b2) mup_visualizer_pane_g1

0xb39e,	// (0x00078508) mup_visualizer_pane_g2_ParamLimits

0xb39e,	// (0x00078508) mup_visualizer_pane_g2

0xa43a,	// (0x000775a4) mup_visualizer_pane_g3_ParamLimits

0xa43a,	// (0x000775a4) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0007c4fb) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0007c4fb) mup_visualizer_pane_g

0xa689,	// (0x000777f3) mup_volume_pane_g1

0xa689,	// (0x000777f3) mup_volume_pane_g2

0x0001,

0xf398,	// (0x0007c502) mup_volume_pane_g

0xa689,	// (0x000777f3) mup_progress_pane_g1

0xa689,	// (0x000777f3) mup_progress_pane_g2

0xa689,	// (0x000777f3) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x0007c507) mup_progress_pane_g

0x983a,	// (0x000769a4) bg_popup_window_pane_cp05

0xb3ac,	// (0x00078516) heading_pane_cp02_ParamLimits

0xb3ac,	// (0x00078516) heading_pane_cp02

0xb3c8,	// (0x00078532) list_popup_blid_pane

0xb3d0,	// (0x0007853a) list_blid_sat_info_pane_ParamLimits

0xb3d0,	// (0x0007853a) list_blid_sat_info_pane

0xb3e3,	// (0x0007854d) list_blid_sat_info_pane_g1

0xb3eb,	// (0x00078555) list_blid_sat_info_pane_t1

0x22aa,	// (0x0006f414) mup_equalizer_pane_ParamLimits

0x22aa,	// (0x0006f414) mup_equalizer_pane

0x22cb,	// (0x0006f435) mup_equalizer_pane_cp1_ParamLimits

0x22cb,	// (0x0006f435) mup_equalizer_pane_cp1

0x22ec,	// (0x0006f456) mup_equalizer_pane_cp2_ParamLimits

0x22ec,	// (0x0006f456) mup_equalizer_pane_cp2

0x2311,	// (0x0006f47b) mup_equalizer_pane_cp3_ParamLimits

0x2311,	// (0x0006f47b) mup_equalizer_pane_cp3

0x233a,	// (0x0006f4a4) mup_equalizer_pane_cp4_ParamLimits

0x233a,	// (0x0006f4a4) mup_equalizer_pane_cp4

0x2363,	// (0x0006f4cd) mup_equalizer_pane_cp5

0x237b,	// (0x0006f4e5) mup_equalizer_pane_cp6

0x2393,	// (0x0006f4fd) mup_equalizer_pane_cp7

0xc558,	// (0x000796c2) bg_popup_call_poc_act_pane_g9

0xc560,	// (0x000796ca) bg_popup_call_poc_act_pane_g10

0xc568,	// (0x000796d2) bg_popup_call_poc_act_pane_g11

0x000a,

0xa3bf,	// (0x00077529) mup_scale_pane

0xa3d7,	// (0x00077541) mup_scale_pane_g1

0xb3f9,	// (0x00078563) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x0007c523) mup_scale_pane_g

0xb41d,	// (0x00078587) msg_data_pane

0xb425,	// (0x0007858f) scroll_pane_cp017

0x23bd,	// (0x0006f527) bg_list_pane_cp04_ParamLimits

0x23bd,	// (0x0006f527) bg_list_pane_cp04

0xb42d,	// (0x00078597) msg_data_pane_g1

0x23db,	// (0x0006f545) msg_data_pane_g2

0x23e5,	// (0x0006f54f) msg_data_pane_g3

0x23ef,	// (0x0006f559) msg_data_pane_g4

0x23f7,	// (0x0006f561) msg_data_pane_g5

0x23ff,	// (0x0006f569) msg_data_pane_g6

0x2407,	// (0x0006f571) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x0007c532) msg_data_pane_g

0x240f,	// (0x0006f579) msg_text_pane_ParamLimits

0x240f,	// (0x0006f579) msg_text_pane

0x2444,	// (0x0006f5ae) qrid_highlight_pane_cp011_ParamLimits

0x2444,	// (0x0006f5ae) qrid_highlight_pane_cp011

0x983a,	// (0x000769a4) msg_body_pane

0x983a,	// (0x000769a4) msg_header_pane

0xb43e,	// (0x000785a8) input_focus_pane_cp07

0xb024,	// (0x0007818e) msg_header_pane_t1_ParamLimits

0xb024,	// (0x0007818e) msg_header_pane_t1

0x9bac,	// (0x00076d16) msg_header_pane_t2_ParamLimits

0x9bac,	// (0x00076d16) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x0007c546) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x0007c546) msg_header_pane_t

0xb453,	// (0x000785bd) msg_body_pane_g1

0x9bc3,	// (0x00076d2d) msg_body_pane_t1_ParamLimits

0x9bc3,	// (0x00076d2d) msg_body_pane_t1

0x9bf4,	// (0x00076d5e) msg_body_pane_t2_ParamLimits

0x9bf4,	// (0x00076d5e) msg_body_pane_t2

0x9c06,	// (0x00076d70) msg_body_pane_t3_ParamLimits

0x9c06,	// (0x00076d70) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x0007c54b) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x0007c54b) msg_body_pane_t

0x24a2,	// (0x0006f60c) main_viewer_pane_g1_ParamLimits

0x24a2,	// (0x0006f60c) main_viewer_pane_g1

0x24b0,	// (0x0006f61a) main_viewer_pane_g2_ParamLimits

0x24b0,	// (0x0006f61a) main_viewer_pane_g2

0x24be,	// (0x0006f628) main_viewer_pane_g3_ParamLimits

0x24be,	// (0x0006f628) main_viewer_pane_g3

0x24cd,	// (0x0006f637) main_viewer_pane_g4_ParamLimits

0x24cd,	// (0x0006f637) main_viewer_pane_g4

0x9c30,	// (0x00076d9a) main_viewer_pane_g5_ParamLimits

0x9c30,	// (0x00076d9a) main_viewer_pane_g5

0x9c30,	// (0x00076d9a) main_viewer_pane_g7_ParamLimits

0x9c30,	// (0x00076d9a) main_viewer_pane_g7

0x9c42,	// (0x00076dac) main_viewer_pane_g8_ParamLimits

0x9c42,	// (0x00076dac) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x0007c55b) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x0007c55b) main_viewer_pane_g

0xb45b,	// (0x000785c5) viewer_content_pane_ParamLimits

0xb45b,	// (0x000785c5) viewer_content_pane

0x250b,	// (0x0006f675) main_postcard_pane_g1_ParamLimits

0x250b,	// (0x0006f675) main_postcard_pane_g1

0x2521,	// (0x0006f68b) main_postcard_pane_g2_ParamLimits

0x2521,	// (0x0006f68b) main_postcard_pane_g2

0x2537,	// (0x0006f6a1) main_postcard_pane_g3_ParamLimits

0x2537,	// (0x0006f6a1) main_postcard_pane_g3

0x0005,

0xf402,	// (0x0007c56c) main_postcard_pane_g_ParamLimits

0xf402,	// (0x0007c56c) main_postcard_pane_g

0x254e,	// (0x0006f6b8) main_postcard_pane_g4

0xc69e,	// (0x00079808) smil_status_volume_pane_g2

0x2591,	// (0x0006f6fb) postcard_pane_ParamLimits

0x2591,	// (0x0006f6fb) postcard_pane

0xb469,	// (0x000785d3) postcard_pane_g1_ParamLimits

0xb469,	// (0x000785d3) postcard_pane_g1

0x25e1,	// (0x0006f74b) postcard_pane_g2_ParamLimits

0x25e1,	// (0x0006f74b) postcard_pane_g2

0x25ed,	// (0x0006f757) postcard_pane_g3_ParamLimits

0x25ed,	// (0x0006f757) postcard_pane_g3

0xb477,	// (0x000785e1) postcard_pane_g4_ParamLimits

0xb477,	// (0x000785e1) postcard_pane_g4

0x25f9,	// (0x0006f763) postcard_pane_g5_ParamLimits

0x25f9,	// (0x0006f763) postcard_pane_g5

0x260e,	// (0x0006f778) postcard_pane_g6_ParamLimits

0x260e,	// (0x0006f778) postcard_pane_g6

0xb469,	// (0x000785d3) postcard_pane_g7_ParamLimits

0xb469,	// (0x000785d3) postcard_pane_g7

0x0006,

0xf40f,	// (0x0007c579) postcard_pane_g_ParamLimits

0xf40f,	// (0x0007c579) postcard_pane_g

0x2626,	// (0x0006f790) main_mp2_pane_g1_ParamLimits

0x2626,	// (0x0006f790) main_mp2_pane_g1

0x2634,	// (0x0006f79e) main_mp2_pane_g2_ParamLimits

0x2634,	// (0x0006f79e) main_mp2_pane_g2

0x2640,	// (0x0006f7aa) main_mp2_pane_g3_ParamLimits

0x2640,	// (0x0006f7aa) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x0007c588) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x0007c588) main_mp2_pane_g

0x264c,	// (0x0006f7b6) main_mp2_pane_t1_ParamLimits

0x264c,	// (0x0006f7b6) main_mp2_pane_t1

0x2663,	// (0x0006f7cd) main_mp2_pane_t2_ParamLimits

0x2663,	// (0x0006f7cd) main_mp2_pane_t2

0x2675,	// (0x0006f7df) main_mp2_pane_t3_ParamLimits

0x2675,	// (0x0006f7df) main_mp2_pane_t3

0x0002,

0xf425,	// (0x0007c58f) main_mp2_pane_t_ParamLimits

0xf425,	// (0x0007c58f) main_mp2_pane_t

0xb485,	// (0x000785ef) pec_content_pane_ParamLimits

0xb485,	// (0x000785ef) pec_content_pane

0xa7fd,	// (0x00077967) scroll_pane_cp015

0xb497,	// (0x00078601) pec_attribute_pane_ParamLimits

0xb497,	// (0x00078601) pec_attribute_pane

0x2687,	// (0x0006f7f1) pec_content_pane_g1_ParamLimits

0x2687,	// (0x0006f7f1) pec_content_pane_g1

0xb4a7,	// (0x00078611) pec_content_pane_t1_ParamLimits

0xb4a7,	// (0x00078611) pec_content_pane_t1

0xb4b9,	// (0x00078623) pec_content_pane_t2_ParamLimits

0xb4b9,	// (0x00078623) pec_content_pane_t2

0x0001,

0xf42c,	// (0x0007c596) pec_content_pane_t_ParamLimits

0xf42c,	// (0x0007c596) pec_content_pane_t

0x2693,	// (0x0006f7fd) list_single_graphic_pane_cp01_ParamLimits

0x2693,	// (0x0006f7fd) list_single_graphic_pane_cp01

0xa3bf,	// (0x00077529) bg_popup_sub_pane_cp04

0xb4cb,	// (0x00078635) popup_mup_playback_window_g1

0xb4d7,	// (0x00078641) popup_mup_playback_window_t1

0xb4ec,	// (0x00078656) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x0007c59b) popup_mup_playback_window_t

0xb523,	// (0x0007868d) main_image_pane_g1_ParamLimits

0xb523,	// (0x0007868d) main_image_pane_g1

0xb566,	// (0x000786d0) scroll_pane_cp018_ParamLimits

0xb566,	// (0x000786d0) scroll_pane_cp018

0xb57e,	// (0x000786e8) scroll_pane_cp016_ParamLimits

0xb57e,	// (0x000786e8) scroll_pane_cp016

0x2765,	// (0x0006f8cf) smil2_image_pane_ParamLimits

0x2765,	// (0x0006f8cf) smil2_image_pane

0x279b,	// (0x0006f905) smil2_root_pane_ParamLimits

0x279b,	// (0x0006f905) smil2_root_pane

0x27d3,	// (0x0006f93d) smil2_text_pane_ParamLimits

0x27d3,	// (0x0006f93d) smil2_text_pane

0x983a,	// (0x000769a4) bg_list_pane_cp06

0xb5ba,	// (0x00078724) grid_radio_pane

0x983a,	// (0x000769a4) bg_popup_window_pane_cp06

0xb5c4,	// (0x0007872e) main_fmradio_pane_t1

0xc570,	// (0x000796da) heading_pane_cp04

0xb5d2,	// (0x0007873c) main_fmradio_pane_t2

0xc578,	// (0x000796e2) popup_cale_lunar_info_window_g1

0xb5e0,	// (0x0007874a) main_fmradio_pane_t3

0xc580,	// (0x000796ea) popup_cale_lunar_info_window_g2

0xb5f0,	// (0x0007875a) main_fmradio_pane_t4

0x0001,

0xb5fe,	// (0x00078768) main_fmradio_pane_t5

0x0004,

0xf511,	// (0x0007c67b) popup_cale_lunar_info_window_g

0xf446,	// (0x0007c5b0) main_fmradio_pane_t

0xb60c,	// (0x00078776) wait_bar_pane_cp03

0xb614,	// (0x0007877e) cell_fmradio_pane_ParamLimits

0xb614,	// (0x0007877e) cell_fmradio_pane

0xb469,	// (0x000785d3) cell_fmradio_pane_g1_ParamLimits

0xb469,	// (0x000785d3) cell_fmradio_pane_g1

0x983a,	// (0x000769a4) grid_highlight_pane_cp011

0xb629,	// (0x00078793) poc_content_pane_ParamLimits

0xb629,	// (0x00078793) poc_content_pane

0xb63b,	// (0x000787a5) scroll_pane_cp019

0x2863,	// (0x0006f9cd) popup_call_poc_act_window_ParamLimits

0x2863,	// (0x0006f9cd) popup_call_poc_act_window

0x2887,	// (0x0006f9f1) popup_call_poc_inact_window_ParamLimits

0x2887,	// (0x0006f9f1) popup_call_poc_inact_window

0xf4e8,	// (0x0007c652) bg_popup_call_poc_act_pane_g

0xc4e8,	// (0x00079652) bg_popup_call_poc_inact_pane_g1

0xc4f0,	// (0x0007965a) bg_popup_call_poc_inact_pane_g2

0xb643,	// (0x000787ad) popup_call_poc_act_window_g2

0xc4f8,	// (0x00079662) bg_popup_call_poc_inact_pane_g3

0xc500,	// (0x0007966a) bg_popup_call_poc_inact_pane_g4

0xc508,	// (0x00079672) bg_popup_call_poc_inact_pane_g5

0xb64b,	// (0x000787b5) popup_call_poc_act_window_t1_ParamLimits

0xb64b,	// (0x000787b5) popup_call_poc_act_window_t1

0xb673,	// (0x000787dd) popup_call_poc_act_window_t2_ParamLimits

0xb673,	// (0x000787dd) popup_call_poc_act_window_t2

0xb69b,	// (0x00078805) popup_call_poc_act_window_t3_ParamLimits

0xb69b,	// (0x00078805) popup_call_poc_act_window_t3

0xb6c3,	// (0x0007882d) popup_call_poc_act_window_t4_ParamLimits

0xb6c3,	// (0x0007882d) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x0007c5bb) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x0007c5bb) popup_call_poc_act_window_t

0xc510,	// (0x0007967a) bg_popup_call_poc_inact_pane_g6

0xc518,	// (0x00079682) bg_popup_call_poc_inact_pane_g7

0xc520,	// (0x0007968a) bg_popup_call_poc_inact_pane_g8

0xb6d5,	// (0x0007883f) popup_call_poc_inact_window_g2

0xc528,	// (0x00079692) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4d5,	// (0x0007c63f) bg_popup_call_poc_inact_pane_g

0xb6dd,	// (0x00078847) popup_call_poc_inact_window_t1_ParamLimits

0xb6dd,	// (0x00078847) popup_call_poc_inact_window_t1

0xb6f2,	// (0x0007885c) popup_call_poc_inact_window_t2_ParamLimits

0xb6f2,	// (0x0007885c) popup_call_poc_inact_window_t2

0xb707,	// (0x00078871) popup_call_poc_inact_window_t3_ParamLimits

0xb707,	// (0x00078871) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x0007c5c4) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x0007c5c4) popup_call_poc_inact_window_t

0xc616,	// (0x00079780) context_pane_ParamLimits

0x3176,	// (0x000702e0) signal_pane_ParamLimits

0xa653,	// (0x000777bd) main_call2_pane

0x9c8b,	// (0x00076df5) popup_phob_thumbnail2_window_ParamLimits

0x9c8b,	// (0x00076df5) popup_phob_thumbnail2_window

0x9c18,	// (0x00076d82) aid_hotspot_pointer_arrow_pane

0x9c20,	// (0x00076d8a) aid_hotspot_pointer_hand_pane

0x2c11,	// (0x0006fd7b) phob_pre_status_pane_g5

0x9a41,	// (0x00076bab) cams_zoom_pane_ParamLimits

0x9a41,	// (0x00076bab) image_vga_pane_ParamLimits

0xa43a,	// (0x000775a4) main_camera_pane_g1_ParamLimits

0xa43a,	// (0x000775a4) main_camera_pane_g2_ParamLimits

0xa43a,	// (0x000775a4) main_camera_pane_g3_ParamLimits

0xa43a,	// (0x000775a4) main_camera_pane_g4_ParamLimits

0xa43a,	// (0x000775a4) main_camera_pane_g5_ParamLimits

0xa43a,	// (0x000775a4) main_camera_pane_g6_ParamLimits

0xa43a,	// (0x000775a4) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0007c2ef) main_camera_pane_g_ParamLimits

0xa65b,	// (0x000777c5) main_camera_pane_t1_ParamLimits

0xa65b,	// (0x000777c5) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0007c300) main_camera_pane_t_ParamLimits

0xa3bf,	// (0x00077529) bg_popup_preview_window_pane_cp01_ParamLimits

0xa3bf,	// (0x00077529) bg_popup_preview_window_pane_cp01

0xb71c,	// (0x00078886) popup_phob_thumbnail2_window_g1_ParamLimits

0xb71c,	// (0x00078886) popup_phob_thumbnail2_window_g1

0x983a,	// (0x000769a4) call2_cli_visual_pane

0x28bb,	// (0x0006fa25) popup_call2_audio_conf_window_ParamLimits

0x28bb,	// (0x0006fa25) popup_call2_audio_conf_window

0x28e3,	// (0x0006fa4d) popup_call2_audio_first_window_ParamLimits

0x28e3,	// (0x0006fa4d) popup_call2_audio_first_window

0x2979,	// (0x0006fae3) popup_call2_audio_in_window_ParamLimits

0x2979,	// (0x0006fae3) popup_call2_audio_in_window

0x29c5,	// (0x0006fb2f) popup_call2_audio_out_window_ParamLimits

0x29c5,	// (0x0006fb2f) popup_call2_audio_out_window

0x2a37,	// (0x0006fba1) popup_call2_audio_second_window_ParamLimits

0x2a37,	// (0x0006fba1) popup_call2_audio_second_window

0x2a9d,	// (0x0006fc07) popup_call2_audio_wait_window_ParamLimits

0x2a9d,	// (0x0006fc07) popup_call2_audio_wait_window

0x983a,	// (0x000769a4) bg_popup_call2_act_pane_cp03

0xa3a1,	// (0x0007750b) list_conf_pane_cp

0xb728,	// (0x00078892) popup_call2_audio_conf_window_t1

0xb736,	// (0x000788a0) list_single_graphic_popup_conf2_pane_ParamLimits

0xb736,	// (0x000788a0) list_single_graphic_popup_conf2_pane

0xadd1,	// (0x00077f3b) list_highlight_pane_cp04

0xb749,	// (0x000788b3) list_single_graphic_popup_conf2_pane_g1

0xade2,	// (0x00077f4c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x0007c5cb) list_single_graphic_popup_conf2_pane_g

0xb753,	// (0x000788bd) list_single_graphic_popup_conf2_pane_t1

0xb761,	// (0x000788cb) bg_popup_call2_act_pane_cp01_ParamLimits

0xb761,	// (0x000788cb) bg_popup_call2_act_pane_cp01

0xb7eb,	// (0x00078955) call_type_pane_cp05_ParamLimits

0xb7eb,	// (0x00078955) call_type_pane_cp05

0xb83f,	// (0x000789a9) popup_call2_audio_second_window_g1_ParamLimits

0xb83f,	// (0x000789a9) popup_call2_audio_second_window_g1

0xb893,	// (0x000789fd) popup_call2_audio_second_window_g2_ParamLimits

0xb893,	// (0x000789fd) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x0007c5d0) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x0007c5d0) popup_call2_audio_second_window_g

0xb8f8,	// (0x00078a62) popup_call2_audio_second_window_t1_ParamLimits

0xb8f8,	// (0x00078a62) popup_call2_audio_second_window_t1

0xb9b3,	// (0x00078b1d) popup_call2_audio_second_window_t2_ParamLimits

0xb9b3,	// (0x00078b1d) popup_call2_audio_second_window_t2

0xba06,	// (0x00078b70) popup_call2_audio_second_window_t3_ParamLimits

0xba06,	// (0x00078b70) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x0007c5d7) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x0007c5d7) popup_call2_audio_second_window_t

0x983a,	// (0x000769a4) bg_popup_call2_in_pane_cp02

0x9844,	// (0x000769ae) call_type_pane_cp04

0x2ad7,	// (0x0006fc41) popup_call2_audio_wait_window_g1

0x2adf,	// (0x0006fc49) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x0007c5e0) popup_call2_audio_wait_window_g

0x985c,	// (0x000769c6) popup_call2_audio_wait_window_t3

0xbaf9,	// (0x00078c63) bg_popup_call2_act_pane_ParamLimits

0xbaf9,	// (0x00078c63) bg_popup_call2_act_pane

0xbbb9,	// (0x00078d23) call_type_pane_cp03_ParamLimits

0xbbb9,	// (0x00078d23) call_type_pane_cp03

0xbc1d,	// (0x00078d87) popup_call2_audio_first_window_g1_ParamLimits

0xbc1d,	// (0x00078d87) popup_call2_audio_first_window_g1

0xbc8d,	// (0x00078df7) popup_call2_audio_first_window_g2_ParamLimits

0xbc8d,	// (0x00078df7) popup_call2_audio_first_window_g2

0xbcf1,	// (0x00078e5b) popup_call2_audio_first_window_g3_ParamLimits

0xbcf1,	// (0x00078e5b) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x0007c5e5) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x0007c5e5) popup_call2_audio_first_window_g

0xbd79,	// (0x00078ee3) popup_call2_audio_first_window_t1_ParamLimits

0xbd79,	// (0x00078ee3) popup_call2_audio_first_window_t1

0xbe7c,	// (0x00078fe6) popup_call2_audio_first_window_t4_ParamLimits

0xbe7c,	// (0x00078fe6) popup_call2_audio_first_window_t4

0xbf5f,	// (0x000790c9) popup_call2_audio_first_window_t5_ParamLimits

0xbf5f,	// (0x000790c9) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x0007c5f0) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x0007c5f0) popup_call2_audio_first_window_t

0xa3b7,	// (0x00077521) bg_popup_call2_act_pane_g1

0xc58a,	// (0x000796f4) popup_cale_lunar_info_window_t1

0xc598,	// (0x00079702) popup_cale_lunar_info_window_t2

0xc5a6,	// (0x00079710) popup_cale_lunar_info_window_t3

0x983a,	// (0x000769a4) bg_popup_call2_bubble_pane

0xc060,	// (0x000791ca) bg_popup_call2_in_pane_cp01_ParamLimits

0xc060,	// (0x000791ca) bg_popup_call2_in_pane_cp01

0x9516,	// (0x00076680) call_type_pane_cp02

0x2ae7,	// (0x0006fc51) popup_call2_audio_out_window_g1_ParamLimits

0x2ae7,	// (0x0006fc51) popup_call2_audio_out_window_g1

0xc0a8,	// (0x00079212) popup_call2_audio_out_window_g2_ParamLimits

0xc0a8,	// (0x00079212) popup_call2_audio_out_window_g2

0x2b13,	// (0x0006fc7d) popup_call2_audio_out_window_g3_ParamLimits

0x2b13,	// (0x0006fc7d) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x0007c5f9) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x0007c5f9) popup_call2_audio_out_window_g

0xc0df,	// (0x00079249) popup_call2_audio_out_window_t1_ParamLimits

0xc0df,	// (0x00079249) popup_call2_audio_out_window_t1

0xc13e,	// (0x000792a8) popup_call2_audio_out_window_t2_ParamLimits

0xc13e,	// (0x000792a8) popup_call2_audio_out_window_t2

0xc192,	// (0x000792fc) popup_call2_audio_out_window_t3_ParamLimits

0xc192,	// (0x000792fc) popup_call2_audio_out_window_t3

0xc1a8,	// (0x00079312) popup_call2_audio_out_window_t4_ParamLimits

0xc1a8,	// (0x00079312) popup_call2_audio_out_window_t4

0xc1be,	// (0x00079328) popup_call2_audio_out_window_t5_ParamLimits

0xc1be,	// (0x00079328) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x0007c602) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x0007c602) popup_call2_audio_out_window_t

0xc222,	// (0x0007938c) bg_popup_call2_in_pane_ParamLimits

0xc222,	// (0x0007938c) bg_popup_call2_in_pane

0xc27e,	// (0x000793e8) popup_call2_audio_in_window_g1_ParamLimits

0xc27e,	// (0x000793e8) popup_call2_audio_in_window_g1

0xc2b6,	// (0x00079420) popup_call2_audio_in_window_g2_ParamLimits

0xc2b6,	// (0x00079420) popup_call2_audio_in_window_g2

0xc2fa,	// (0x00079464) popup_call2_audio_in_window_g3_ParamLimits

0xc2fa,	// (0x00079464) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x0007c60f) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x0007c60f) popup_call2_audio_in_window_g

0xc352,	// (0x000794bc) popup_call2_audio_in_window_t1_ParamLimits

0xc352,	// (0x000794bc) popup_call2_audio_in_window_t1

0xc3d2,	// (0x0007953c) popup_call2_audio_in_window_t2_ParamLimits

0xc3d2,	// (0x0007953c) popup_call2_audio_in_window_t2

0xc452,	// (0x000795bc) popup_call2_audio_in_window_t3_ParamLimits

0xc452,	// (0x000795bc) popup_call2_audio_in_window_t3

0xc46c,	// (0x000795d6) popup_call2_audio_in_window_t4_ParamLimits

0xc46c,	// (0x000795d6) popup_call2_audio_in_window_t4

0xc47e,	// (0x000795e8) popup_call2_audio_in_window_t5_ParamLimits

0xc47e,	// (0x000795e8) popup_call2_audio_in_window_t5

0xc493,	// (0x000795fd) popup_call2_audio_in_window_t6_ParamLimits

0xc493,	// (0x000795fd) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x0007c618) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x0007c618) popup_call2_audio_in_window_t

0xa3b7,	// (0x00077521) bg_popup_call2_in_pane_g1

0xc5b4,	// (0x0007971e) popup_cale_lunar_info_window_t4

0x0003,

0xf516,	// (0x0007c680) popup_cale_lunar_info_window_t

0xa3bf,	// (0x00077529) bg_popup_call2_rect_pane_ParamLimits

0xa3bf,	// (0x00077529) bg_popup_call2_rect_pane

0x983a,	// (0x000769a4) call2_cli_visual_graphic_pane

0x983a,	// (0x000769a4) call2_cli_visual_text_pane

0x9cb2,	// (0x00076e1c) smil_status_volume_pane_g3

0x0002,

0xa3d7,	// (0x00077541) call2_cli_visual_graphic_pane_g1

0xa3d7,	// (0x00077541) call2_cli_visual_graphic_pane_g2

0xa3d7,	// (0x00077541) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x0007c625) call2_cli_visual_graphic_pane_g

0xc4a8,	// (0x00079612) bg_popup_call2_rect_pane_g1

0xa58c,	// (0x000776f6) bg_popup_call2_rect_pane_g2

0xc4b0,	// (0x0007961a) bg_popup_call2_rect_pane_g3

0xc4b8,	// (0x00079622) bg_popup_call2_rect_pane_g4

0xc4c0,	// (0x0007962a) bg_popup_call2_rect_pane_g5

0xc4c8,	// (0x00079632) bg_popup_call2_rect_pane_g6

0xc4d0,	// (0x0007963a) bg_popup_call2_rect_pane_g7

0xc4d8,	// (0x00079642) bg_popup_call2_rect_pane_g8

0xc4e0,	// (0x0007964a) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x0007c62c) bg_popup_call2_rect_pane_g

0xc4e8,	// (0x00079652) bg_popup_call2_bubble_pane_g1

0xc4f0,	// (0x0007965a) bg_popup_call2_bubble_pane_g2

0xc4f8,	// (0x00079662) bg_popup_call2_bubble_pane_g3

0xc500,	// (0x0007966a) bg_popup_call2_bubble_pane_g4

0xc508,	// (0x00079672) bg_popup_call2_bubble_pane_g5

0xc510,	// (0x0007967a) bg_popup_call2_bubble_pane_g6

0xc518,	// (0x00079682) bg_popup_call2_bubble_pane_g7

0xc520,	// (0x0007968a) bg_popup_call2_bubble_pane_g8

0xc528,	// (0x00079692) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x0007c63f) bg_popup_call2_bubble_pane_g

0x03dc,	// (0x0006d546) aid_cale_week_size_cell_pane

0x0a20,	// (0x0006db8a) aid_cams_cif_uncrop_pane_ParamLimits

0x0a20,	// (0x0006db8a) aid_cams_cif_uncrop_pane

0x0b76,	// (0x0006dce0) aid_cams_size_cell_ParamLimits

0x0b76,	// (0x0006dce0) aid_cams_size_cell

0x0b8a,	// (0x0006dcf4) grid_cams_pane_ParamLimits

0x0ba4,	// (0x0006dd0e) linegrid_cams_pane_ParamLimits

0x0c80,	// (0x0006ddea) call_video_pane_t1

0x0c9a,	// (0x0006de04) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0007c34c) call_video_pane_t

0x10d2,	// (0x0006e23c) aid_cale_month_size_cell_pane_ParamLimits

0x10d2,	// (0x0006e23c) aid_cale_month_size_cell_pane

0xf55a,	// (0x0007c6c4) smil_status_volume_pane_g

0x9cbf,	// (0x00076e29) volume_smil_pane_ParamLimits

0xfe05,	// (0x0006cf6f) aid_popup2_width_pane

0x033d,	// (0x0006d4a7) cell_qdial_pane_g4_ParamLimits

0x033d,	// (0x0006d4a7) cell_qdial_pane_g4

0x1fc9,	// (0x0006f133) aid_blid_cardinal_pane_ParamLimits

0x1fd5,	// (0x0006f13f) aid_blid_destination_pane_ParamLimits

0x1fd5,	// (0x0006f13f) aid_blid_destination_pane

0xa3bf,	// (0x00077529) bg_popup_call_poc_act_pane_ParamLimits

0xa3bf,	// (0x00077529) bg_popup_call_poc_act_pane

0xa3bf,	// (0x00077529) bg_popup_call_poc_inact_pane_ParamLimits

0xa3bf,	// (0x00077529) bg_popup_call_poc_inact_pane

0xc530,	// (0x0007969a) bg_popup_call_poc_act_pane_g1

0xc538,	// (0x000796a2) bg_popup_call_poc_act_pane_g2

0xc540,	// (0x000796aa) bg_popup_call_poc_act_pane_g3

0xc500,	// (0x0007966a) bg_popup_call_poc_act_pane_g4

0xc508,	// (0x00079672) bg_popup_call_poc_act_pane_g5

0xc548,	// (0x000796b2) bg_popup_call_poc_act_pane_g6

0xc518,	// (0x00079682) bg_popup_call_poc_act_pane_g7

0xc550,	// (0x000796ba) bg_popup_call_poc_act_pane_g8

0x983a,	// (0x000769a4) main_usb_pane

0x9c62,	// (0x00076dcc) popup_cale_lunar_info_window

0x0f67,	// (0x0006e0d1) im_reading_pane_t1_ParamLimits

0xa746,	// (0x000778b0) list_im_pane_ParamLimits

0xa757,	// (0x000778c1) scroll_pane_cp07_ParamLimits

0x983a,	// (0x000769a4) grid_highlight_pane_cp012

0xa3bf,	// (0x00077529) mup_scale_pane_ParamLimits

0xb469,	// (0x000785d3) main_usb_pane_g1_ParamLimits

0xb469,	// (0x000785d3) main_usb_pane_g1

0x2b66,	// (0x0006fcd0) main_usb_pane_g2_ParamLimits

0x2b66,	// (0x0006fcd0) main_usb_pane_g2

0x0001,

0xf4ff,	// (0x0007c669) main_usb_pane_g_ParamLimits

0xf4ff,	// (0x0007c669) main_usb_pane_g

0x2b7c,	// (0x0006fce6) main_usb_pane_t1_ParamLimits

0x2b7c,	// (0x0006fce6) main_usb_pane_t1

0x2b8e,	// (0x0006fcf8) main_usb_pane_t2_ParamLimits

0x2b8e,	// (0x0006fcf8) main_usb_pane_t2

0x2ba0,	// (0x0006fd0a) main_usb_pane_t3_ParamLimits

0x2ba0,	// (0x0006fd0a) main_usb_pane_t3

0x2bb2,	// (0x0006fd1c) main_usb_pane_t4_ParamLimits

0x2bb2,	// (0x0006fd1c) main_usb_pane_t4

0x2bc7,	// (0x0006fd31) main_usb_pane_t5_ParamLimits

0x2bc7,	// (0x0006fd31) main_usb_pane_t5

0x2bdc,	// (0x0006fd46) main_usb_pane_t6_ParamLimits

0x2bdc,	// (0x0006fd46) main_usb_pane_t6

0x0005,

0xf504,	// (0x0007c66e) main_usb_pane_t_ParamLimits

0x1f68,	// (0x0006f0d2) aid_text_placing

0x1f73,	// (0x0006f0dd) main_location2_pane_t1_ParamLimits

0x1f89,	// (0x0006f0f3) main_location2_pane_t2_ParamLimits

0x1f9f,	// (0x0006f109) main_location2_pane_t3_ParamLimits

0x1fb5,	// (0x0006f11f) main_location2_pane_t4_ParamLimits

0x1fb5,	// (0x0006f11f) main_location2_pane_t4

0xf31e,	// (0x0007c488) main_location2_pane_t_ParamLimits

0xa3ed,	// (0x00077557) find_pinb_pane_g2_ParamLimits

0xa3ed,	// (0x00077557) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0007c204) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0007c204) find_pinb_pane_g

0xa3f9,	// (0x00077563) find_pinb_pane_t1_ParamLimits

0xa40b,	// (0x00077575) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0007c209) find_pinb_pane_t_ParamLimits

0x983a,	// (0x000769a4) main_call3_pane

0x16d7,	// (0x0006e841) cale_month_day_heading_pane_t1_ParamLimits

0x175d,	// (0x0006e8c7) cale_month_day_heading_pane_t2_ParamLimits

0x17d6,	// (0x0006e940) cale_month_day_heading_pane_t3_ParamLimits

0x184f,	// (0x0006e9b9) cale_month_day_heading_pane_t4_ParamLimits

0x18d0,	// (0x0006ea3a) cale_month_day_heading_pane_t5_ParamLimits

0x1959,	// (0x0006eac3) cale_month_day_heading_pane_t6_ParamLimits

0x19ea,	// (0x0006eb54) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0007c384) cale_month_day_heading_pane_t_ParamLimits

0xa9b0,	// (0x00077b1a) smil_status_volume_pane

0x25b5,	// (0x0006f71f) postcard_address_pane_ParamLimits

0x25b5,	// (0x0006f71f) postcard_address_pane

0x25cb,	// (0x0006f735) postcard_message_pane_ParamLimits

0x25cb,	// (0x0006f735) postcard_message_pane

0x2b3f,	// (0x0006fca9) call2_cli_visual_pane_t1_ParamLimits

0x2b3f,	// (0x0006fca9) call2_cli_visual_pane_t1

0xc6c9,	// (0x00079833) postcard_message_pane_t1_ParamLimits

0xc6c9,	// (0x00079833) postcard_message_pane_t1

0xc6b1,	// (0x0007981b) postcard_address_pane_t1_ParamLimits

0xc6b1,	// (0x0007981b) postcard_address_pane_t1

0x3332,	// (0x0007049c) popup_call3_audio_in_window_ParamLimits

0x3332,	// (0x0007049c) popup_call3_audio_in_window

0x31b7,	// (0x00070321) bg_popup_call3_in_pane_ParamLimits

0x31b7,	// (0x00070321) bg_popup_call3_in_pane

0x3233,	// (0x0007039d) popup_call3_audio_in_window_g1_ParamLimits

0x3233,	// (0x0007039d) popup_call3_audio_in_window_g1

0x3253,	// (0x000703bd) popup_call3_audio_in_window_g2_ParamLimits

0x3253,	// (0x000703bd) popup_call3_audio_in_window_g2

0x3273,	// (0x000703dd) popup_call3_audio_in_window_g3_ParamLimits

0x3273,	// (0x000703dd) popup_call3_audio_in_window_g3

0x0003,

0xf561,	// (0x0007c6cb) popup_call3_audio_in_window_g_ParamLimits

0xf561,	// (0x0007c6cb) popup_call3_audio_in_window_g

0x32a4,	// (0x0007040e) popup_call3_audio_in_window_t1_ParamLimits

0x32a4,	// (0x0007040e) popup_call3_audio_in_window_t1

0x32e2,	// (0x0007044c) popup_call3_audio_in_window_t2_ParamLimits

0x32e2,	// (0x0007044c) popup_call3_audio_in_window_t2

0x3320,	// (0x0007048a) popup_call3_audio_in_window_t3_ParamLimits

0x3320,	// (0x0007048a) popup_call3_audio_in_window_t3

0x0002,

0xf56a,	// (0x0007c6d4) popup_call3_audio_in_window_t_ParamLimits

0xf56a,	// (0x0007c6d4) popup_call3_audio_in_window_t

0xa653,	// (0x000777bd) bg_popup_call3_rect_pane

0xc4a8,	// (0x00079612) bg_popup_call3_rect_pane_g1

0xa58c,	// (0x000776f6) bg_popup_call3_rect_pane_g2

0xc4b0,	// (0x0007961a) bg_popup_call3_rect_pane_g3

0xc4b8,	// (0x00079622) bg_popup_call3_rect_pane_g4

0xc4c0,	// (0x0007962a) bg_popup_call3_rect_pane_g5

0xc4c8,	// (0x00079632) bg_popup_call3_rect_pane_g6

0xc4d0,	// (0x0007963a) bg_popup_call3_rect_pane_g7

0x93b2,	// (0x0007651c) mup_visualizer_osc_pane

0x93b2,	// (0x0007651c) mup_visualizer_spec_pane

0x31e7,	// (0x00070351) call3_video_qcif_pane_ParamLimits

0x31e7,	// (0x00070351) call3_video_qcif_pane

0x31fa,	// (0x00070364) call3_video_qcif_uncrop_pane_ParamLimits

0x31fa,	// (0x00070364) call3_video_qcif_uncrop_pane

0x320a,	// (0x00070374) call3_video_subqcif_pane_ParamLimits

0x320a,	// (0x00070374) call3_video_subqcif_pane

0x3220,	// (0x0007038a) call3_video_subqcif_uncrop_pane_ParamLimits

0x3220,	// (0x0007038a) call3_video_subqcif_uncrop_pane

0x3293,	// (0x000703fd) popup_call3_audio_in_window_g4_ParamLimits

0x3293,	// (0x000703fd) popup_call3_audio_in_window_g4

0x93b2,	// (0x0007651c) mup_spec_half_pane

0x93b2,	// (0x0007651c) mup_spec_half_pane_cp

0x93b2,	// (0x0007651c) mup_osc_middle_pane

0xa689,	// (0x000777f3) mup_visualizer_osc_pane_g1

0xc664,	// (0x000797ce) mup_spec_bar_pane_ParamLimits

0xc664,	// (0x000797ce) mup_spec_bar_pane

0xa689,	// (0x000777f3) mup_spec_bar_pane_g1

0xa689,	// (0x000777f3) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x0007c502) mup_spec_bar_pane_g

0x03dc,	// (0x0006d546) aid_cale_week_size_cell_pane_ParamLimits

0x03f6,	// (0x0006d560) bg_cale_heading_pane_ParamLimits

0x041a,	// (0x0006d584) bg_cale_pane_cp01_ParamLimits

0x0437,	// (0x0006d5a1) cale_week_corner_pane_ParamLimits

0x0456,	// (0x0006d5c0) cale_week_day_heading_pane_ParamLimits

0x047f,	// (0x0006d5e9) cale_week_scroll_pane_g1_ParamLimits

0x049e,	// (0x0006d608) cale_week_scroll_pane_g2_ParamLimits

0x04b6,	// (0x0006d620) cale_week_scroll_pane_g3_ParamLimits

0x04ce,	// (0x0006d638) cale_week_scroll_pane_g4_ParamLimits

0x04e6,	// (0x0006d650) cale_week_scroll_pane_g5_ParamLimits

0x0506,	// (0x0006d670) cale_week_scroll_pane_g6_ParamLimits

0x0526,	// (0x0006d690) cale_week_scroll_pane_g7_ParamLimits

0x054a,	// (0x0006d6b4) cale_week_scroll_pane_g8_ParamLimits

0x056e,	// (0x0006d6d8) cale_week_scroll_pane_g9_ParamLimits

0x0586,	// (0x0006d6f0) cale_week_scroll_pane_g10_ParamLimits

0x059e,	// (0x0006d708) cale_week_scroll_pane_g11_ParamLimits

0x05b6,	// (0x0006d720) cale_week_scroll_pane_g12_ParamLimits

0x05da,	// (0x0006d744) cale_week_scroll_pane_g13_ParamLimits

0x05da,	// (0x0006d744) cale_week_scroll_pane_g14_ParamLimits

0x05da,	// (0x0006d744) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0007c295) cale_week_scroll_pane_g_ParamLimits

0x0622,	// (0x0006d78c) cale_week_time_pane_ParamLimits

0x0646,	// (0x0006d7b0) grid_cale_week_pane_ParamLimits

0xa5c9,	// (0x00077733) listscroll_cale_week_pane_t1

0xa5db,	// (0x00077745) scroll_pane_cp08_ParamLimits

0x114a,	// (0x0006e2b4) cale_month_corner_pane_ParamLimits

0xa986,	// (0x00077af0) cale_month_pane_t1

0x1652,	// (0x0006e7bc) cale_month_week_pane_ParamLimits

0x1da8,	// (0x0006ef12) popup_call_status_window_g1_ParamLimits

0x1dbc,	// (0x0006ef26) popup_call_status_window_g2_ParamLimits

0x1dd0,	// (0x0006ef3a) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x0007c40f) popup_call_status_window_g_ParamLimits

0xad5e,	// (0x00077ec8) aid_call2_pane

0x245a,	// (0x0006f5c4) msg_header_pane_g1

0x25b5,	// (0x0006f71f) postcard_address2_pane_ParamLimits

0x25b5,	// (0x0006f71f) postcard_address2_pane

0x25cb,	// (0x0006f735) postcard_message2_pane_ParamLimits

0x25cb,	// (0x0006f735) postcard_message2_pane

0x3184,	// (0x000702ee) message2_row_pane_ParamLimits

0x3184,	// (0x000702ee) message2_row_pane

0x31a4,	// (0x0007030e) address2_row_pane_ParamLimits

0x31a4,	// (0x0007030e) address2_row_pane

0xc631,	// (0x0007979b) postcard_message2_row_pane_g1

0xc639,	// (0x000797a3) postcard_message2_row_pane_t1

0xc631,	// (0x0007979b) address2_row_pane_g1

0xc639,	// (0x000797a3) address2_row_pane_t1

0x09b3,	// (0x0006db1d) aid_size_cell_vorec

0x983a,	// (0x000769a4) main_rss_pane

0xc647,	// (0x000797b1) rss_list_single_pane_ParamLimits

0xc647,	// (0x000797b1) rss_list_single_pane

0xc655,	// (0x000797bf) rss_list_single_pane_t1

0xc655,	// (0x000797bf) rss_list_single_pane_t2

0x0001,

0xf555,	// (0x0007c6bf) rss_list_single_pane_t

0x983a,	// (0x000769a4) main_camera2_pane

0x983a,	// (0x000769a4) main_video2_pane

0x9cd4,	// (0x00076e3e) cams_zoom_pane_cp2_ParamLimits

0x9cd4,	// (0x00076e3e) cams_zoom_pane_cp2

0x9cd4,	// (0x00076e3e) image2_vga_pane_ParamLimits

0x9cd4,	// (0x00076e3e) image2_vga_pane

0x9ce2,	// (0x00076e4c) main_camera2_pane_g1_ParamLimits

0x9ce2,	// (0x00076e4c) main_camera2_pane_g1

0x9ce2,	// (0x00076e4c) main_camera2_pane_g2_ParamLimits

0x9ce2,	// (0x00076e4c) main_camera2_pane_g2

0x9ce2,	// (0x00076e4c) main_camera2_pane_g3_ParamLimits

0x9ce2,	// (0x00076e4c) main_camera2_pane_g3

0x9ce2,	// (0x00076e4c) main_camera2_pane_g4_ParamLimits

0x9ce2,	// (0x00076e4c) main_camera2_pane_g4

0x9ce2,	// (0x00076e4c) main_camera2_pane_g5_ParamLimits

0x9ce2,	// (0x00076e4c) main_camera2_pane_g5

0x9ce2,	// (0x00076e4c) main_camera2_pane_g6_ParamLimits

0x9ce2,	// (0x00076e4c) main_camera2_pane_g6

0x9ce2,	// (0x00076e4c) main_camera2_pane_g7_ParamLimits

0x9ce2,	// (0x00076e4c) main_camera2_pane_g7

0x9ce2,	// (0x00076e4c) main_camera2_pane_g8_ParamLimits

0x9ce2,	// (0x00076e4c) main_camera2_pane_g8

0x0008,

0xf571,	// (0x0007c6db) main_camera2_pane_g_ParamLimits

0xf571,	// (0x0007c6db) main_camera2_pane_g

0x3354,	// (0x000704be) main_camera2_pane_t1_ParamLimits

0x3354,	// (0x000704be) main_camera2_pane_t1

0x3354,	// (0x000704be) main_camera2_pane_t2_ParamLimits

0x3354,	// (0x000704be) main_camera2_pane_t2

0x3354,	// (0x000704be) main_camera2_pane_t3_ParamLimits

0x3354,	// (0x000704be) main_camera2_pane_t3

0x3354,	// (0x000704be) main_camera2_pane_t4_ParamLimits

0x3354,	// (0x000704be) main_camera2_pane_t4

0x0006,

0xf584,	// (0x0007c6ee) main_camera2_pane_t_ParamLimits

0xf584,	// (0x0007c6ee) main_camera2_pane_t

0x9d26,	// (0x00076e90) cams_zoom_pane_cp4_ParamLimits

0x9d26,	// (0x00076e90) cams_zoom_pane_cp4

0x3368,	// (0x000704d2) image2_cif_pane_ParamLimits

0x3368,	// (0x000704d2) image2_cif_pane

0x93da,	// (0x00076544) image2_subqcif_pane_ParamLimits

0x93da,	// (0x00076544) image2_subqcif_pane

0x3376,	// (0x000704e0) main_video2_pane_g1_ParamLimits

0x3376,	// (0x000704e0) main_video2_pane_g1

0x3376,	// (0x000704e0) main_video2_pane_g2_ParamLimits

0x3376,	// (0x000704e0) main_video2_pane_g2

0x3376,	// (0x000704e0) main_video2_pane_g3_ParamLimits

0x3376,	// (0x000704e0) main_video2_pane_g3

0x3376,	// (0x000704e0) main_video2_pane_g4_ParamLimits

0x3376,	// (0x000704e0) main_video2_pane_g4

0x3376,	// (0x000704e0) main_video2_pane_g5_ParamLimits

0x3376,	// (0x000704e0) main_video2_pane_g5

0x3376,	// (0x000704e0) main_video2_pane_g6_ParamLimits

0x3376,	// (0x000704e0) main_video2_pane_g6

0x0005,

0xf593,	// (0x0007c6fd) main_video2_pane_g_ParamLimits

0xf593,	// (0x0007c6fd) main_video2_pane_g

0x3384,	// (0x000704ee) main_video2_pane_t1_ParamLimits

0x3384,	// (0x000704ee) main_video2_pane_t1

0x3384,	// (0x000704ee) main_video2_pane_t2_ParamLimits

0x3384,	// (0x000704ee) main_video2_pane_t2

0x3384,	// (0x000704ee) main_video2_pane_t3_ParamLimits

0x3384,	// (0x000704ee) main_video2_pane_t3

0x0002,

0xf5a0,	// (0x0007c70a) main_video2_pane_t_ParamLimits

0xf5a0,	// (0x0007c70a) main_video2_pane_t

0x2c75,	// (0x0006fddf) call_muted_g2

0x0001,

0xf547,	// (0x0007c6b1) call_muted_g

0x983a,	// (0x000769a4) main_mup2_pane

0xb36e,	// (0x000784d8) main_mup2_pane_g1_ParamLimits

0xb36e,	// (0x000784d8) main_mup2_pane_g1

0xb36e,	// (0x000784d8) main_mup2_pane_g2_ParamLimits

0xb36e,	// (0x000784d8) main_mup2_pane_g2

0xd2a2,	// (0x0007a40c) main_mup_pane_g13_cp1

0x93e8,	// (0x00076552) mup_volume_pane_cp1

0xb36e,	// (0x000784d8) main_mup2_pane_g4_ParamLimits

0xb36e,	// (0x000784d8) main_mup2_pane_g4

0xb36e,	// (0x000784d8) main_mup2_pane_g5_ParamLimits

0xb36e,	// (0x000784d8) main_mup2_pane_g5

0xb36e,	// (0x000784d8) main_mup2_pane_g6_ParamLimits

0xb36e,	// (0x000784d8) main_mup2_pane_g6

0xb36e,	// (0x000784d8) main_mup2_pane_g7_ParamLimits

0xb36e,	// (0x000784d8) main_mup2_pane_g7

0x0006,

0xf5a7,	// (0x0007c711) main_mup2_pane_g_ParamLimits

0xf5a7,	// (0x0007c711) main_mup2_pane_g

0xb37c,	// (0x000784e6) main_mup2_pane_t1_ParamLimits

0xb37c,	// (0x000784e6) main_mup2_pane_t1

0xb37c,	// (0x000784e6) main_mup2_pane_t2_ParamLimits

0xb37c,	// (0x000784e6) main_mup2_pane_t2

0xb37c,	// (0x000784e6) main_mup2_pane_t3_ParamLimits

0xb37c,	// (0x000784e6) main_mup2_pane_t3

0xb37c,	// (0x000784e6) main_mup2_pane_t4_ParamLimits

0xb37c,	// (0x000784e6) main_mup2_pane_t4

0xb37c,	// (0x000784e6) main_mup2_pane_t5_ParamLimits

0xb37c,	// (0x000784e6) main_mup2_pane_t5

0xb37c,	// (0x000784e6) main_mup2_pane_t6_ParamLimits

0xb37c,	// (0x000784e6) main_mup2_pane_t6

0x0005,

0xf5b6,	// (0x0007c720) main_mup2_pane_t_ParamLimits

0xf5b6,	// (0x0007c720) main_mup2_pane_t

0xb390,	// (0x000784fa) mup2_visualizer_pane_ParamLimits

0xb390,	// (0x000784fa) mup2_visualizer_pane

0xb390,	// (0x000784fa) mup_progress_pane_cp_ParamLimits

0xb390,	// (0x000784fa) mup_progress_pane_cp

0x9d4a,	// (0x00076eb4) mup_volume_pane_cp_ParamLimits

0x9d4a,	// (0x00076eb4) mup_volume_pane_cp

0xa43a,	// (0x000775a4) mup2_visualizer_pane_g1_ParamLimits

0xa43a,	// (0x000775a4) mup2_visualizer_pane_g1

0xa448,	// (0x000775b2) mup2_visualizer_pane_g2_ParamLimits

0xa448,	// (0x000775b2) mup2_visualizer_pane_g2

0xa448,	// (0x000775b2) mup2_visualizer_pane_g3_ParamLimits

0xa448,	// (0x000775b2) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0007c20e) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0007c20e) mup2_visualizer_pane_g

0xb5b2,	// (0x0007871c) aid_size_cell_fmradio

0x2e25,	// (0x0006ff8f) aid_height_parent_landcape

0xa7e4,	// (0x0007794e) wml_content_pane_cp

0xa7ec,	// (0x00077956) wml_tabs_pane

0xa7f5,	// (0x0007795f) popup_wml_miniature_window

0xa7fd,	// (0x00077967) scroll_pane_cp021

0xa811,	// (0x0007797b) wml_content_pane_comp8

0x983a,	// (0x000769a4) bg_popup_sub_pane_cp05

0xc6fb,	// (0x00079865) popup_wml_miniature_window_g1

0xc703,	// (0x0007986d) wml_miniature_view_pane

0x3398,	// (0x00070502) aid_size_wml_view

0x33a0,	// (0x0007050a) wml_miniature_view_pane_g1

0x33a9,	// (0x00070513) wml_miniature_view_pane_g2

0x33b2,	// (0x0007051c) wml_miniature_view_pane_g3

0x33ba,	// (0x00070524) wml_miniature_view_pane_g4

0x33c2,	// (0x0007052c) wml_miniature_view_pane_g5

0x33ca,	// (0x00070534) wml_miniature_view_pane_g6

0x33d2,	// (0x0007053c) wml_miniature_view_pane_g7

0x33da,	// (0x00070544) wml_miniature_view_pane_g8

0x0007,

0xf5c3,	// (0x0007c72d) wml_miniature_view_pane_g

0xc70b,	// (0x00079875) background_graphic_ParamLimits

0xc70b,	// (0x00079875) background_graphic

0xc717,	// (0x00079881) wml_tabs_2_pane

0xc720,	// (0x0007988a) wml_tabs_3_pane_ParamLimits

0xc720,	// (0x0007988a) wml_tabs_3_pane

0xc732,	// (0x0007989c) wml_tabs_4_pane_ParamLimits

0xc732,	// (0x0007989c) wml_tabs_4_pane

0xc748,	// (0x000798b2) wml_tabs_5_pane_ParamLimits

0xc748,	// (0x000798b2) wml_tabs_5_pane

0xc762,	// (0x000798cc) wml_tabs_pane_g2_ParamLimits

0xc762,	// (0x000798cc) wml_tabs_pane_g2

0xc777,	// (0x000798e1) wml_tabs_pane_g3_ParamLimits

0xc777,	// (0x000798e1) wml_tabs_pane_g3

0xc78c,	// (0x000798f6) wml_tabs_2_active_pane_ParamLimits

0xc78c,	// (0x000798f6) wml_tabs_2_active_pane

0xc78c,	// (0x000798f6) wml_tabs_2_passive_pane_ParamLimits

0xc78c,	// (0x000798f6) wml_tabs_2_passive_pane

0x33e2,	// (0x0007054c) wml_tabs_3_active_pane_cp_ParamLimits

0x33e2,	// (0x0007054c) wml_tabs_3_active_pane_cp

0x33f7,	// (0x00070561) wml_tabs_3_passive_pane_ParamLimits

0x33f7,	// (0x00070561) wml_tabs_3_passive_pane

0x340a,	// (0x00070574) wml_tabs_3_passive_pane_cp_ParamLimits

0x340a,	// (0x00070574) wml_tabs_3_passive_pane_cp

0x3421,	// (0x0007058b) tabs_4_active_pane

0x3429,	// (0x00070593) tabs_4_passive_pane

0x3433,	// (0x0007059d) tabs_4_passive_pane_cp

0x343b,	// (0x000705a5) tabs_4_passive_pane_cp2

0x2b5e,	// (0x0006fcc8) aid_height_text

0xb390,	// (0x000784fa) mup_volume_cont_pane_ParamLimits

0xb390,	// (0x000784fa) mup_volume_cont_pane

0x93b2,	// (0x0007651c) aid_size_cell_pinb

0x93b2,	// (0x0007651c) aid_size_list_pinb

0xb390,	// (0x000784fa) mup2_volume_cont_pane_ParamLimits

0xb390,	// (0x000784fa) mup2_volume_cont_pane

0x9d34,	// (0x00076e9e) mup2_volume_cont_pane_g1_ParamLimits

0x9d34,	// (0x00076e9e) mup2_volume_cont_pane_g1

0xfe11,	// (0x0006cf7b) aid_size_cell_touch_ParamLimits

0xfe11,	// (0x0006cf7b) aid_size_cell_touch

0x0016,	// (0x0006d180) touch_pane_ParamLimits

0x0016,	// (0x0006d180) touch_pane

0x93e8,	// (0x00076552) main_rss2_pane

0xc7a3,	// (0x0007990d) listscroll_rss2_pane

0xc7ac,	// (0x00079916) rss2_navigation_pane

0xc7b4,	// (0x0007991e) list_rss2_pane

0xae76,	// (0x00077fe0) scroll_pane_cp22

0xc7bc,	// (0x00079926) rss2_navigation_pane_g1

0xc7c5,	// (0x0007992f) rss2_navigation_pane_g2

0xc7cd,	// (0x00079937) rss2_navigation_pane_g3

0x0002,

0xf5d4,	// (0x0007c73e) rss2_navigation_pane_g

0xc7d5,	// (0x0007993f) rss2_navigation_pane_t1

0x3445,	// (0x000705af) rss2_list_single_pane_ParamLimits

0x3445,	// (0x000705af) rss2_list_single_pane

0xc7e3,	// (0x0007994d) rss2_list_single_pane_t2

0xc7f1,	// (0x0007995b) rss2_list_single_pane_t3_ParamLimits

0xc7f1,	// (0x0007995b) rss2_list_single_pane_t3

0xc80e,	// (0x00079978) rss2_list_single_pane_t4

0x1c92,	// (0x0006edfc) smil_status_pane_g1

0x93da,	// (0x00076544) main_image2_pane_ParamLimits

0x93da,	// (0x00076544) main_image2_pane

0x9ce2,	// (0x00076e4c) main_camera2_pane_g9_ParamLimits

0x9ce2,	// (0x00076e4c) main_camera2_pane_g9

0x3354,	// (0x000704be) main_camera2_pane_t5_ParamLimits

0x3354,	// (0x000704be) main_camera2_pane_t5

0x9cf0,	// (0x00076e5a) main_camera2_pane_t6_ParamLimits

0x9cf0,	// (0x00076e5a) main_camera2_pane_t6

0x345c,	// (0x000705c6) main_image2_pane_g1_ParamLimits

0x345c,	// (0x000705c6) main_image2_pane_g1

0x280d,	// (0x0006f977) smil2_video_pane_ParamLimits

0x280d,	// (0x0006f977) smil2_video_pane

0xfe51,	// (0x0006cfbb) aid_zoom_text_primary_cp

0x93d0,	// (0x0007653a) popup_preview_fixed_window

0xa73e,	// (0x000778a8) im_reading_pane_g1

0x3346,	// (0x000704b0) cams2_bc_adjust_pane_cp_ParamLimits

0x3346,	// (0x000704b0) cams2_bc_adjust_pane_cp

0x9d18,	// (0x00076e82) cams2_bc_adjust_pane_ParamLimits

0x9d18,	// (0x00076e82) cams2_bc_adjust_pane

0xd2a2,	// (0x0007a40c) cams2_bc_adjust_pane_g1

0x93e8,	// (0x00076552) cams2_slider_pane

0xd2a2,	// (0x0007a40c) cams2_slider_pane_g1

0xd2a2,	// (0x0007a40c) cams2_slider_pane_g2

0x0006,

0xf5db,	// (0x0007c745) cams2_slider_pane_g

0x00ac,	// (0x0006d216) calc_display_pane_ParamLimits

0x00d1,	// (0x0006d23b) calc_paper_pane_ParamLimits

0x00f4,	// (0x0006d25e) grid_calc_pane_ParamLimits

0x9b75,	// (0x00076cdf) popup_clock_digital_window_t1_ParamLimits

0xb54f,	// (0x000786b9) main_image_pane_t1

0x008c,	// (0x0006d1f6) aid_size_cell_calc_ParamLimits

0x008c,	// (0x0006d1f6) aid_size_cell_calc

0x2e7b,	// (0x0006ffe5) popup_blid_sat_info2_window_ParamLimits

0x2e7b,	// (0x0006ffe5) popup_blid_sat_info2_window

0xc81c,	// (0x00079986) aid_size_cell_blid

0xc824,	// (0x0007998e) bg_popup_window_pane_cp07

0xc847,	// (0x000799b1) grid_popup_blid_pane

0xc851,	// (0x000799bb) heading_pane_cp05_ParamLimits

0xc851,	// (0x000799bb) heading_pane_cp05

0xc91b,	// (0x00079a85) cell_popup_blid_pane_ParamLimits

0xc91b,	// (0x00079a85) cell_popup_blid_pane

0xc945,	// (0x00079aaf) cell_popup_blid_pane_g1

0xc94d,	// (0x00079ab7) cell_popup_blid_pane_t1

0xb390,	// (0x000784fa) mup2_indicator_pane_ParamLimits

0xb390,	// (0x000784fa) mup2_indicator_pane

0x93b2,	// (0x0007651c) mup2_visualizer_osc_pane

0xc6e5,	// (0x0007984f) mup2_visualizer_spec_pane_ParamLimits

0xc6e5,	// (0x0007984f) mup2_visualizer_spec_pane

0x93b2,	// (0x0007651c) mup2_spec_half_pane

0x93b2,	// (0x0007651c) mup2_spec_half_pane_cp

0xc95b,	// (0x00079ac5) mup2_spec_bar_pane_ParamLimits

0xc95b,	// (0x00079ac5) mup2_spec_bar_pane

0xa689,	// (0x000777f3) mup2_spec_bar_pane_g1

0xc97a,	// (0x00079ae4) mup2_spec_bar_pane_g2

0x0001,

0xf601,	// (0x0007c76b) mup2_spec_bar_pane_g

0x93b2,	// (0x0007651c) mup2_osc_middle_pane

0xa689,	// (0x000777f3) mup2_visualizer_osc_pane_g1

0x9412,	// (0x0007657c) popup_number_entry_window_t1_ParamLimits

0x9425,	// (0x0007658f) popup_number_entry_window_t2_ParamLimits

0x9437,	// (0x000765a1) popup_number_entry_window_t3_ParamLimits

0x9449,	// (0x000765b3) popup_number_entry_window_t5_ParamLimits

0x9449,	// (0x000765b3) popup_number_entry_window_t5

0xf045,	// (0x0007c1af) popup_number_entry_window_t_ParamLimits

0x947e,	// (0x000765e8) text_title_cp2_ParamLimits

0x9c28,	// (0x00076d92) aid_hotspot_pointer_text2_pane

0x9c4e,	// (0x00076db8) main_viewer_pane_g9_ParamLimits

0x9c4e,	// (0x00076db8) main_viewer_pane_g9

0xa986,	// (0x00077af0) cale_month_pane_t1_ParamLimits

0xa9c3,	// (0x00077b2d) bg_cale_pane_ParamLimits

0xa9db,	// (0x00077b45) list_cale_pane_ParamLimits

0xa9ec,	// (0x00077b56) listscroll_cale_day_pane_t1

0xa9fe,	// (0x00077b68) scroll_pane_cp09_ParamLimits

0x219e,	// (0x0006f308) main_mup_eq_pane_t1_ParamLimits

0x219e,	// (0x0006f308) main_mup_eq_pane_t1

0x21ba,	// (0x0006f324) main_mup_eq_pane_t2_ParamLimits

0x21ba,	// (0x0006f324) main_mup_eq_pane_t2

0x21d6,	// (0x0006f340) main_mup_eq_pane_t3_ParamLimits

0x21d6,	// (0x0006f340) main_mup_eq_pane_t3

0x21f4,	// (0x0006f35e) main_mup_eq_pane_t4_ParamLimits

0x21f4,	// (0x0006f35e) main_mup_eq_pane_t4

0x2212,	// (0x0006f37c) main_mup_eq_pane_t5_ParamLimits

0x2212,	// (0x0006f37c) main_mup_eq_pane_t5

0x2230,	// (0x0006f39a) main_mup_eq_pane_t6_ParamLimits

0x2230,	// (0x0006f39a) main_mup_eq_pane_t6

0x2246,	// (0x0006f3b0) main_mup_eq_pane_t7_ParamLimits

0x2246,	// (0x0006f3b0) main_mup_eq_pane_t7

0x225c,	// (0x0006f3c6) main_mup_eq_pane_t8_ParamLimits

0x225c,	// (0x0006f3c6) main_mup_eq_pane_t8

0x2272,	// (0x0006f3dc) main_mup_eq_pane_t9_ParamLimits

0x2272,	// (0x0006f3dc) main_mup_eq_pane_t9

0x228e,	// (0x0006f3f8) main_mup_eq_pane_t10_ParamLimits

0x228e,	// (0x0006f3f8) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x0007c50e) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x0007c50e) main_mup_eq_pane_t

0x2363,	// (0x0006f4cd) mup_equalizer_pane_cp5_ParamLimits

0x237b,	// (0x0006f4e5) mup_equalizer_pane_cp6_ParamLimits

0x2393,	// (0x0006f4fd) mup_equalizer_pane_cp7_ParamLimits

0x93e8,	// (0x00076552) main_gallery_pane

0xc683,	// (0x000797ed) smil2_volume_pane

0xc68b,	// (0x000797f5) smil_status_volume_pane_g1_ParamLimits

0xc69e,	// (0x00079808) smil_status_volume_pane_g2_ParamLimits

0x9cb2,	// (0x00076e1c) smil_status_volume_pane_g3_ParamLimits

0xf55a,	// (0x0007c6c4) smil_status_volume_pane_g_ParamLimits

0xc824,	// (0x0007998e) bg_popup_window_pane_cp07_ParamLimits

0xc832,	// (0x0007999c) blid_firmament_pane

0x9a41,	// (0x00076bab) aid_size_cell_gallery_ParamLimits

0x9a41,	// (0x00076bab) aid_size_cell_gallery

0x9a41,	// (0x00076bab) grid_gallery_pane_ParamLimits

0x9a41,	// (0x00076bab) grid_gallery_pane

0xc824,	// (0x0007998e) cell_gallery_pane_ParamLimits

0xc824,	// (0x0007998e) cell_gallery_pane

0x9a41,	// (0x00076bab) bg_cell_gallery_focus_pane_ParamLimits

0x9a41,	// (0x00076bab) bg_cell_gallery_focus_pane

0xa43a,	// (0x000775a4) cell_gallery_pane_g1_ParamLimits

0xa43a,	// (0x000775a4) cell_gallery_pane_g1

0xa43a,	// (0x000775a4) cell_gallery_pane_g2_ParamLimits

0xa43a,	// (0x000775a4) cell_gallery_pane_g2

0xa43a,	// (0x000775a4) cell_gallery_pane_g3_ParamLimits

0xa43a,	// (0x000775a4) cell_gallery_pane_g3

0xa448,	// (0x000775b2) cell_gallery_pane_g4_ParamLimits

0xa448,	// (0x000775b2) cell_gallery_pane_g4

0x0003,

0xf606,	// (0x0007c770) cell_gallery_pane_g_ParamLimits

0xf606,	// (0x0007c770) cell_gallery_pane_g

0xc984,	// (0x00079aee) bg_cell_gallery_focus_pane_g1

0xc98c,	// (0x00079af6) bg_cell_gallery_focus_pane_g2

0xc994,	// (0x00079afe) bg_cell_gallery_focus_pane_g3

0xc99c,	// (0x00079b06) bg_cell_gallery_focus_pane_g4

0xc9a4,	// (0x00079b0e) bg_cell_gallery_focus_pane_g5

0xc9ac,	// (0x00079b16) bg_cell_gallery_focus_pane_g6

0xc9b4,	// (0x00079b1e) bg_cell_gallery_focus_pane_g7

0xc9bc,	// (0x00079b26) bg_cell_gallery_focus_pane_g8

0x0007,

0xf60f,	// (0x0007c779) bg_cell_gallery_focus_pane_g

0xc9c4,	// (0x00079b2e) aid_firma_cardinal

0xc9d8,	// (0x00079b42) blid_firmament_pane_t1

0xc9ef,	// (0x00079b59) blid_firmament_pane_t2

0xca06,	// (0x00079b70) blid_firmament_pane_t3

0xca1d,	// (0x00079b87) blid_firmament_pane_t4

0x0003,

0xf620,	// (0x0007c78a) blid_firmament_pane_t

0xca34,	// (0x00079b9e) blid_sat_info_pane

0xa689,	// (0x000777f3) blid_sat_info_pane_g1

0xa689,	// (0x000777f3) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x0007c502) blid_sat_info_pane_g

0xca44,	// (0x00079bae) blid_sat_info_pane_t1

0xca52,	// (0x00079bbc) smil2_volume_content_pane

0xca5b,	// (0x00079bc5) smil2_volume_pane_g1

0xa523,	// (0x0007768d) smil2_volume_content_pane_g1

0xca63,	// (0x00079bcd) smil2_volume_content_pane_g2

0xca6c,	// (0x00079bd6) smil2_volume_content_pane_g3

0xca75,	// (0x00079bdf) smil2_volume_content_pane_g4

0xca7e,	// (0x00079be8) smil2_volume_content_pane_g5

0xca87,	// (0x00079bf1) smil2_volume_content_pane_g6

0xca90,	// (0x00079bfa) smil2_volume_content_pane_g7

0xca99,	// (0x00079c03) smil2_volume_content_pane_g8

0xcaa2,	// (0x00079c0c) smil2_volume_content_pane_g9

0xcaab,	// (0x00079c15) smil2_volume_content_pane_g10

0x0009,

0xf629,	// (0x0007c793) smil2_volume_content_pane_g

0x0714,	// (0x0006d87e) cale_week_day_heading_pane_t1_ParamLimits

0x073e,	// (0x0006d8a8) cale_week_day_heading_pane_t2_ParamLimits

0x076d,	// (0x0006d8d7) cale_week_day_heading_pane_t3_ParamLimits

0x079c,	// (0x0006d906) cale_week_day_heading_pane_t4_ParamLimits

0x07cb,	// (0x0006d935) cale_week_day_heading_pane_t5_ParamLimits

0x07fe,	// (0x0006d968) cale_week_day_heading_pane_t6_ParamLimits

0x0835,	// (0x0006d99f) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0007c2b6) cale_week_day_heading_pane_t_ParamLimits

0xa5f8,	// (0x00077762) bg_cale_side_pane_ParamLimits

0x085f,	// (0x0006d9c9) cale_week_time_pane_t1_ParamLimits

0x0879,	// (0x0006d9e3) cale_week_time_pane_t2_ParamLimits

0x0893,	// (0x0006d9fd) cale_week_time_pane_t3_ParamLimits

0x08ad,	// (0x0006da17) cale_week_time_pane_t4_ParamLimits

0x08c7,	// (0x0006da31) cale_week_time_pane_t5_ParamLimits

0x08e1,	// (0x0006da4b) cale_week_time_pane_t6_ParamLimits

0x0901,	// (0x0006da6b) cale_week_time_pane_t7_ParamLimits

0x0927,	// (0x0006da91) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0007c2c5) cale_week_time_pane_t_ParamLimits

0x094d,	// (0x0006dab7) cell_cale_week_pane_g2_ParamLimits

0xa5f8,	// (0x00077762) bg_cale_side_pane_cp01_ParamLimits

0x1a7b,	// (0x0006ebe5) cale_month_week_pane_t1_ParamLimits

0x1a94,	// (0x0006ebfe) cale_month_week_pane_t2_ParamLimits

0x1aad,	// (0x0006ec17) cale_month_week_pane_t3_ParamLimits

0x1ac6,	// (0x0006ec30) cale_month_week_pane_t4_ParamLimits

0x1adf,	// (0x0006ec49) cale_month_week_pane_t5_ParamLimits

0x1af8,	// (0x0006ec62) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0007c393) cale_month_week_pane_t_ParamLimits

0x9af5,	// (0x00076c5f) cell_cale_month_pane_g1_ParamLimits

0x93e8,	// (0x00076552) main_cale_event_viewer_pane

0x93b2,	// (0x0007651c) listscroll_cale_event_viewer_pane

0xcab4,	// (0x00079c1e) list_cale_ev_pane

0xcabc,	// (0x00079c26) scroll_pane_cp023

0x3472,	// (0x000705dc) field_cale_ev_pane_ParamLimits

0x3472,	// (0x000705dc) field_cale_ev_pane

0xcac8,	// (0x00079c32) field_cale_ev_content_pane_ParamLimits

0xcac8,	// (0x00079c32) field_cale_ev_content_pane

0xcad4,	// (0x00079c3e) field_cale_ev_pane_g1_ParamLimits

0xcad4,	// (0x00079c3e) field_cale_ev_pane_g1

0xcae0,	// (0x00079c4a) field_cale_ev_pane_g2_ParamLimits

0xcae0,	// (0x00079c4a) field_cale_ev_pane_g2

0xcaf8,	// (0x00079c62) field_cale_ev_pane_g3_ParamLimits

0xcaf8,	// (0x00079c62) field_cale_ev_pane_g3

0x0002,

0xf63e,	// (0x0007c7a8) field_cale_ev_pane_g_ParamLimits

0xf63e,	// (0x0007c7a8) field_cale_ev_pane_g

0xcb10,	// (0x00079c7a) field_cale_ev_pane_t1_ParamLimits

0xcb10,	// (0x00079c7a) field_cale_ev_pane_t1

0x3496,	// (0x00070600) field_cale_ev_content_pane_t1_ParamLimits

0x3496,	// (0x00070600) field_cale_ev_content_pane_t1

0xb435,	// (0x0007859f) bg_button_pane_cp01

0x03cc,	// (0x0006d536) listscroll_cale_week_pane_ParamLimits

0xa5c0,	// (0x0007772a) popup_toolbar_window_cp01

0xa5c9,	// (0x00077733) listscroll_cale_week_pane_t1_ParamLimits

0x03cc,	// (0x0006d536) listscroll_cale_day_pane_ParamLimits

0xa5c0,	// (0x0007772a) popup_toolbar_window_cp02

0xa9ec,	// (0x00077b56) listscroll_cale_day_pane_t1_ParamLimits

0x2e43,	// (0x0006ffad) main_cale_month_pane_ParamLimits

0x9c9d,	// (0x00076e07) popup_toolbar_window_cp03_ParamLimits

0x9c9d,	// (0x00076e07) popup_toolbar_window_cp03

0x26cb,	// (0x0006f835) main_image_pane_g2_ParamLimits

0x26cb,	// (0x0006f835) main_image_pane_g2

0x26dc,	// (0x0006f846) main_image_pane_g3_ParamLimits

0x26dc,	// (0x0006f846) main_image_pane_g3

0x0002,

0xf436,	// (0x0007c5a0) main_image_pane_g_ParamLimits

0xf436,	// (0x0007c5a0) main_image_pane_g

0xb54f,	// (0x000786b9) main_image_pane_t1_ParamLimits

0x26ed,	// (0x0006f857) main_image_pane_t2_ParamLimits

0x26ed,	// (0x0006f857) main_image_pane_t2

0x26ff,	// (0x0006f869) main_image_pane_t3_ParamLimits

0x26ff,	// (0x0006f869) main_image_pane_t3

0x2727,	// (0x0006f891) main_image_pane_t4_ParamLimits

0x2727,	// (0x0006f891) main_image_pane_t4

0x0003,

0xf43d,	// (0x0007c5a7) main_image_pane_t_ParamLimits

0xf43d,	// (0x0007c5a7) main_image_pane_t

0x2747,	// (0x0006f8b1) popup_image_details_window_cp01

0x2751,	// (0x0006f8bb) popup_toobar_trans_pane_cp01_ParamLimits

0x2751,	// (0x0006f8bb) popup_toobar_trans_pane_cp01

0x2f6e,	// (0x000700d8) popup_image_details_window_ParamLimits

0x2f6e,	// (0x000700d8) popup_image_details_window

0x9c6e,	// (0x00076dd8) popup_image_focus_window

0x9cd4,	// (0x00076e3e) camera2_autofocus_pane_ParamLimits

0x9cd4,	// (0x00076e3e) camera2_autofocus_pane

0x93b2,	// (0x0007651c) bg_popup_sub_pane_cp06

0xcb27,	// (0x00079c91) popup_image_focus_window_g1

0xcb2f,	// (0x00079c99) popup_image_focus_window_g2

0xcb37,	// (0x00079ca1) popup_image_focus_window_g3

0xcb3f,	// (0x00079ca9) popup_image_focus_window_g4

0x0003,

0xf645,	// (0x0007c7af) popup_image_focus_window_g

0xcb47,	// (0x00079cb1) popup_image_focus_window_t1

0xcb55,	// (0x00079cbf) popup_image_focus_window_t2

0xcb65,	// (0x00079ccf) popup_image_focus_window_t3

0x0002,

0xf64e,	// (0x0007c7b8) popup_image_focus_window_t

0xa43a,	// (0x000775a4) camera2_autofocus_pane_g1

0x9a41,	// (0x00076bab) bg_tb_trans_pane_cp01

0xcb73,	// (0x00079cdd) popup_image_details_window_g1

0xcb86,	// (0x00079cf0) popup_image_details_window_g2

0x0002,

0xf660,	// (0x0007c7ca) popup_image_details_window_g

0xcbaf,	// (0x00079d19) popup_image_details_window_t1

0xcbc1,	// (0x00079d2b) popup_image_details_window_t2

0xcbda,	// (0x00079d44) popup_image_details_window_t3

0xcbee,	// (0x00079d58) popup_image_details_window_t4

0xcc09,	// (0x00079d73) popup_image_details_window_t5

0x0004,

0xf667,	// (0x0007c7d1) popup_image_details_window_t

0xa498,	// (0x00077602) bg_calc_paper_pane_ParamLimits

0x93e8,	// (0x00076552) grid_highlight_pane_cp013

0x9a57,	// (0x00076bc1) list_calc_pane_ParamLimits

0x9a69,	// (0x00076bd3) scroll_pane_cp024

0xa4ac,	// (0x00077616) bg_calc_display_pane_ParamLimits

0x01f4,	// (0x0006d35e) calc_display_pane_t1_ParamLimits

0x0209,	// (0x0006d373) calc_display_pane_t2_ParamLimits

0x9a71,	// (0x00076bdb) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0007c236) calc_display_pane_t_ParamLimits

0x02d7,	// (0x0006d441) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0007c253) cell_calc_pane_g

0x02e0,	// (0x0006d44a) cell_calc_pane_t1

0xa501,	// (0x0007766b) grid_highlight_pane_cp02_ParamLimits

0xa517,	// (0x00077681) toolbar_button_pane_cp01_ParamLimits

0xa517,	// (0x00077681) toolbar_button_pane_cp01

0xb594,	// (0x000786fe) temp_image_control_pane_ParamLimits

0xb594,	// (0x000786fe) temp_image_control_pane

0x93da,	// (0x00076544) main_mp3_pane

0xcc23,	// (0x00079d8d) temp_image_control_pane_g1_ParamLimits

0xcc23,	// (0x00079d8d) temp_image_control_pane_g1

0xcc31,	// (0x00079d9b) temp_image_control_pane_g2_ParamLimits

0xcc31,	// (0x00079d9b) temp_image_control_pane_g2

0xcc43,	// (0x00079dad) temp_image_control_pane_g3_ParamLimits

0xcc43,	// (0x00079dad) temp_image_control_pane_g3

0x34b7,	// (0x00070621) temp_image_control_pane_g4_ParamLimits

0x34b7,	// (0x00070621) temp_image_control_pane_g4

0x0003,

0xf672,	// (0x0007c7dc) temp_image_control_pane_g_ParamLimits

0xf672,	// (0x0007c7dc) temp_image_control_pane_g

0xcc23,	// (0x00079d8d) main_mp3_pane_g1

0x34ca,	// (0x00070634) main_mp3_pane_g2

0x0007,

0xf67b,	// (0x0007c7e5) main_mp3_pane_g

0xcc78,	// (0x00079de2) main_mp3_pane_t1

0xa448,	// (0x000775b2) main_camera_pane_g8_ParamLimits

0xa448,	// (0x000775b2) main_camera_pane_g8

0x0b24,	// (0x0006dc8e) main_video_pane_g7_ParamLimits

0x0b24,	// (0x0006dc8e) main_video_pane_g7

0x9d04,	// (0x00076e6e) main_camera2_pane_t7_ParamLimits

0x9d04,	// (0x00076e6e) main_camera2_pane_t7

0xa7a4,	// (0x0007790e) scroll_pane_cp025_ParamLimits

0xa7a4,	// (0x0007790e) scroll_pane_cp025

0xa7b8,	// (0x00077922) scroll_pane_cp026_ParamLimits

0xa7b8,	// (0x00077922) scroll_pane_cp026

0xa7c7,	// (0x00077931) wml_content_pane_ParamLimits

0x93e8,	// (0x00076552) main_touch_calib_pane

0x359c,	// (0x00070706) main_touch_calib_pane_g1

0x35ae,	// (0x00070718) main_touch_calib_pane_g2

0x35c0,	// (0x0007072a) main_touch_calib_pane_g3

0x35d2,	// (0x0007073c) main_touch_calib_pane_g4

0x0003,

0xf699,	// (0x0007c803) main_touch_calib_pane_g

0x35e4,	// (0x0007074e) main_touch_calib_pane_t1

0x35fe,	// (0x00070768) main_touch_calib_pane_t2

0x0004,

0xf6a2,	// (0x0007c80c) main_touch_calib_pane_t

0xaef1,	// (0x0007805b) mup_progress_pane_cp02

0xaf10,	// (0x0007807a) navi_pane_g1

0xaf72,	// (0x000780dc) navi_pane_mp_t3

0x93da,	// (0x00076544) main_mp3_pane_ParamLimits

0x3127,	// (0x00070291) navi_pane_ParamLimits

0xcc23,	// (0x00079d8d) main_mp3_pane_g1_ParamLimits

0x34ca,	// (0x00070634) main_mp3_pane_g2_ParamLimits

0x34d6,	// (0x00070640) main_mp3_pane_g3_ParamLimits

0x34d6,	// (0x00070640) main_mp3_pane_g3

0x34e4,	// (0x0007064e) main_mp3_pane_g4_ParamLimits

0x34e4,	// (0x0007064e) main_mp3_pane_g4

0xa43a,	// (0x000775a4) main_mp3_pane_g5_ParamLimits

0xa43a,	// (0x000775a4) main_mp3_pane_g5

0xcc53,	// (0x00079dbd) main_mp3_pane_g6_ParamLimits

0xcc53,	// (0x00079dbd) main_mp3_pane_g6

0xcc60,	// (0x00079dca) main_mp3_pane_g7_ParamLimits

0xcc60,	// (0x00079dca) main_mp3_pane_g7

0xcc6c,	// (0x00079dd6) main_mp3_pane_g8_ParamLimits

0xcc6c,	// (0x00079dd6) main_mp3_pane_g8

0xf67b,	// (0x0007c7e5) main_mp3_pane_g_ParamLimits

0x34f0,	// (0x0007065a) main_mp3_pane_t2

0x34fe,	// (0x00070668) main_mp3_pane_t3

0xcc86,	// (0x00079df0) main_mp3_pane_t4

0xcc94,	// (0x00079dfe) main_mp3_pane_t5

0x0005,

0xf68c,	// (0x0007c7f6) main_mp3_pane_t

0xcca2,	// (0x00079e0c) mup_progress_pane_cp01

0xf031,	// (0x0007c19b) aid_zoom_text_secondary2

0xcab4,	// (0x00079c1e) list_cale_ev2_pane

0xcabc,	// (0x00079c26) scroll_pane_cp023_ParamLimits

0x3658,	// (0x000707c2) field_cale_ev2_pane_ParamLimits

0x3658,	// (0x000707c2) field_cale_ev2_pane

0x367c,	// (0x000707e6) field_cale_ev2_pane_g1_ParamLimits

0x367c,	// (0x000707e6) field_cale_ev2_pane_g1

0x3688,	// (0x000707f2) field_cale_ev2_pane_g2_ParamLimits

0x3688,	// (0x000707f2) field_cale_ev2_pane_g2

0x36a0,	// (0x0007080a) field_cale_ev2_pane_g3_ParamLimits

0x36a0,	// (0x0007080a) field_cale_ev2_pane_g3

0x0003,

0xf6ad,	// (0x0007c817) field_cale_ev2_pane_g_ParamLimits

0xf6ad,	// (0x0007c817) field_cale_ev2_pane_g

0x36b8,	// (0x00070822) field_cale_ev2_pane_t1_ParamLimits

0x36b8,	// (0x00070822) field_cale_ev2_pane_t1

0x36cf,	// (0x00070839) field_cale_ev2_pane_t2_ParamLimits

0x36cf,	// (0x00070839) field_cale_ev2_pane_t2

0x0001,

0xf6b6,	// (0x0007c820) field_cale_ev2_pane_t_ParamLimits

0xf6b6,	// (0x0007c820) field_cale_ev2_pane_t

0x2565,	// (0x0006f6cf) main_postcard_pane_g5_ParamLimits

0x2565,	// (0x0006f6cf) main_postcard_pane_g5

0x257b,	// (0x0006f6e5) main_postcard_pane_g6_ParamLimits

0x257b,	// (0x0006f6e5) main_postcard_pane_g6

0x9a41,	// (0x00076bab) camera2_autofocus_pane_cp_ParamLimits

0x9a41,	// (0x00076bab) camera2_autofocus_pane_cp

0x93da,	// (0x00076544) main_mup3_pane

0x372e,	// (0x00070898) main_mup3_pane_g1_ParamLimits

0x372e,	// (0x00070898) main_mup3_pane_g1

0x3750,	// (0x000708ba) main_mup3_pane_g2_ParamLimits

0x3750,	// (0x000708ba) main_mup3_pane_g2

0x37cb,	// (0x00070935) main_mup3_pane_g3_ParamLimits

0x37cb,	// (0x00070935) main_mup3_pane_g3

0x3835,	// (0x0007099f) main_mup3_pane_g4_ParamLimits

0x3835,	// (0x0007099f) main_mup3_pane_g4

0x389f,	// (0x00070a09) main_mup3_pane_g5_ParamLimits

0x389f,	// (0x00070a09) main_mup3_pane_g5

0x3909,	// (0x00070a73) main_mup3_pane_g6_ParamLimits

0x3909,	// (0x00070a73) main_mup3_pane_g6

0xa448,	// (0x000775b2) main_mup3_pane_g7_ParamLimits

0xa448,	// (0x000775b2) main_mup3_pane_g7

0x0007,

0xf6c6,	// (0x0007c830) main_mup3_pane_g_ParamLimits

0xf6c6,	// (0x0007c830) main_mup3_pane_g

0x398d,	// (0x00070af7) main_mup3_pane_t1_ParamLimits

0x398d,	// (0x00070af7) main_mup3_pane_t1

0x39f7,	// (0x00070b61) main_mup3_pane_t2_ParamLimits

0x39f7,	// (0x00070b61) main_mup3_pane_t2

0x3acd,	// (0x00070c37) main_mup3_pane_t4_ParamLimits

0x3acd,	// (0x00070c37) main_mup3_pane_t4

0x3b2b,	// (0x00070c95) main_mup3_pane_t5_ParamLimits

0x3b2b,	// (0x00070c95) main_mup3_pane_t5

0x3bf3,	// (0x00070d5d) main_mup3_pane_t6_ParamLimits

0x3bf3,	// (0x00070d5d) main_mup3_pane_t6

0x0005,

0xf6d7,	// (0x0007c841) main_mup3_pane_t_ParamLimits

0xf6d7,	// (0x0007c841) main_mup3_pane_t

0x3cab,	// (0x00070e15) mup3_progress_pane_ParamLimits

0x3cab,	// (0x00070e15) mup3_progress_pane

0x3d43,	// (0x00070ead) popup_mup3_control_window_ParamLimits

0x3d43,	// (0x00070ead) popup_mup3_control_window

0xccaa,	// (0x00079e14) popup_mup3_text_window

0x3d79,	// (0x00070ee3) mup3_progress_pane_t1

0x3d98,	// (0x00070f02) mup3_progress_pane_t2

0xccb2,	// (0x00079e1c) mup3_progress_pane_t3

0x0002,

0xf6e4,	// (0x0007c84e) mup3_progress_pane_t

0xcccf,	// (0x00079e39) mup_progress_pane_cp03

0x93b2,	// (0x0007651c) bg_tb_trans_pane_cp04

0x3db7,	// (0x00070f21) mup3_volume_pane

0x3dbf,	// (0x00070f29) popup_mup3_control_window_g1

0x3dc8,	// (0x00070f32) mup3_volume_pane_g1

0x3dd1,	// (0x00070f3b) mup3_volume_pane_g2

0x3dda,	// (0x00070f44) mup3_volume_pane_g3

0x0002,

0xf6eb,	// (0x0007c855) mup3_volume_pane_g

0x93b2,	// (0x0007651c) bg_tb_trans_pane_cp03

0xccdf,	// (0x00079e49) popup_mup3_text_window_g1

0xcce7,	// (0x00079e51) popup_mup3_text_window_t1

0xa4f4,	// (0x0007765e) list_calc_item_pane_g1_ParamLimits

0xc79a,	// (0x00079904) mup_volume_pane_cp_g1

0x3618,	// (0x00070782) main_touch_calib_pane_t3

0x362c,	// (0x00070796) main_touch_calib_pane_t4

0x3642,	// (0x000707ac) main_touch_calib_pane_t5

0xfdfd,	// (0x0006cf67) aid_cell_size_toolbar2

0xf025,	// (0x0007c18f) aid_popup3_width_pane

0xfe41,	// (0x0006cfab) aid_zoom_text_msg_primary

0x09fd,	// (0x0006db67) vorec_t7

0xa4b8,	// (0x00077622) bg_calc_paper_pane_g1_ParamLimits

0xa4c4,	// (0x0007762e) bg_calc_paper_pane_g2_ParamLimits

0xa4d0,	// (0x0007763a) bg_calc_paper_pane_g3_ParamLimits

0xa4dc,	// (0x00077646) bg_calc_paper_pane_g4_ParamLimits

0xa4e8,	// (0x00077652) bg_calc_paper_pane_g5_ParamLimits

0x0259,	// (0x0006d3c3) bg_calc_paper_pane_g6_ParamLimits

0x026c,	// (0x0006d3d6) bg_calc_paper_pane_g7_ParamLimits

0x027f,	// (0x0006d3e9) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0007c23d) bg_calc_paper_pane_g_ParamLimits

0x0292,	// (0x0006d3fc) calc_bg_paper_pane_g9_ParamLimits

0x9a41,	// (0x00076bab) image_qvga_pane_ParamLimits

0x9a41,	// (0x00076bab) image_qvga_pane

0xa3bf,	// (0x00077529) bg_popup_sub_pane_cp04_ParamLimits

0xb4cb,	// (0x00078635) popup_mup_playback_window_g1_ParamLimits

0xb4d7,	// (0x00078641) popup_mup_playback_window_t1_ParamLimits

0xb4ec,	// (0x00078656) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x0007c59b) popup_mup_playback_window_t_ParamLimits

0xa448,	// (0x000775b2) main_mup2_pane_g3_ParamLimits

0xa448,	// (0x000775b2) main_mup2_pane_g3

0x0d19,	// (0x0006de83) popup_toolbar_window_cp04

0xb8e7,	// (0x00078a51) popup_call2_audio_second_window_g3_ParamLimits

0xb8e7,	// (0x00078a51) popup_call2_audio_second_window_g3

0xbcff,	// (0x00078e69) popup_call2_audio_first_window_g4_ParamLimits

0xbcff,	// (0x00078e69) popup_call2_audio_first_window_g4

0xc332,	// (0x0007949c) popup_call2_audio_in_window_g4_ParamLimits

0xc332,	// (0x0007949c) popup_call2_audio_in_window_g4

0x26ad,	// (0x0006f817) aid_area_sk_bg_cut_ParamLimits

0x26ad,	// (0x0006f817) aid_area_sk_bg_cut

0xb501,	// (0x0007866b) aid_area_sk_bg_cut_2_ParamLimits

0xb501,	// (0x0007866b) aid_area_sk_bg_cut_2

0x93b2,	// (0x0007651c) aid_placing_details_win

0x93b2,	// (0x0007651c) aid_placing_details_win_2

0xa43a,	// (0x000775a4) camera2_autofocus_pane_g1_ParamLimits

0xffb1,	// (0x0006d11b) popup_fixed_preview_cale_window_ParamLimits

0xffb1,	// (0x0006d11b) popup_fixed_preview_cale_window

0xafb9,	// (0x00078123) navi_slider_pane_g3

0xafc2,	// (0x0007812c) navi_slider_pane_g4

0xafcb,	// (0x00078135) navi_slider_pane_g5

0xafb9,	// (0x00078123) navi_slider_pane_g6

0x9b9b,	// (0x00076d05) navi_slider_pane_g7

0xb402,	// (0x0007856c) mup_scale_pane_g3

0xb40b,	// (0x00078575) mup_scale_pane_g4

0xb414,	// (0x0007857e) mup_scale_pane_g5

0x23ab,	// (0x0006f515) mup_scale_pane_g6

0x23b4,	// (0x0006f51e) mup_scale_pane_g7

0xd2a2,	// (0x0007a40c) cams2_slider_pane_g3

0xd2a2,	// (0x0007a40c) cams2_slider_pane_g4

0xd2a2,	// (0x0007a40c) cams2_slider_pane_g5

0xd2a2,	// (0x0007a40c) cams2_slider_pane_g6

0xd2a2,	// (0x0007a40c) cams2_slider_pane_g7

0xa689,	// (0x000777f3) camera2_autofocus_pane_cp_g1

0xc60a,	// (0x00079774) bg_popup_preview_window_pane_cp02_ParamLimits

0xc60a,	// (0x00079774) bg_popup_preview_window_pane_cp02

0xccf5,	// (0x00079e5f) list_fp_cale_pane_ParamLimits

0xccf5,	// (0x00079e5f) list_fp_cale_pane

0xcd01,	// (0x00079e6b) popup_fixed_preview_cale_window_t1_ParamLimits

0xcd01,	// (0x00079e6b) popup_fixed_preview_cale_window_t1

0x3de3,	// (0x00070f4d) popup_fixed_preview_cale_window_t2_ParamLimits

0x3de3,	// (0x00070f4d) popup_fixed_preview_cale_window_t2

0x3df8,	// (0x00070f62) popup_fixed_preview_cale_window_t3_ParamLimits

0x3df8,	// (0x00070f62) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f2,	// (0x0007c85c) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f2,	// (0x0007c85c) popup_fixed_preview_cale_window_t

0x3e0f,	// (0x00070f79) list_single_fp_cale_pane_ParamLimits

0x3e0f,	// (0x00070f79) list_single_fp_cale_pane

0xcd1f,	// (0x00079e89) list_single_fp_cale_pane_g1_ParamLimits

0xcd1f,	// (0x00079e89) list_single_fp_cale_pane_g1

0xcd2b,	// (0x00079e95) list_single_fp_cale_pane_g2_ParamLimits

0xcd2b,	// (0x00079e95) list_single_fp_cale_pane_g2

0x0002,

0xf6f9,	// (0x0007c863) list_single_fp_cale_pane_g_ParamLimits

0xf6f9,	// (0x0007c863) list_single_fp_cale_pane_g

0xcd44,	// (0x00079eae) list_single_fp_cale_pane_t1_ParamLimits

0xcd44,	// (0x00079eae) list_single_fp_cale_pane_t1

0xcd56,	// (0x00079ec0) list_single_fp_cale_pane_t2_ParamLimits

0xcd56,	// (0x00079ec0) list_single_fp_cale_pane_t2

0x0001,

0xf700,	// (0x0007c86a) list_single_fp_cale_pane_t_ParamLimits

0xf700,	// (0x0007c86a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x93e8,	// (0x00076552) main_dialer_pane

0x93b2,	// (0x0007651c) aid_cell_size_keypad

0x93b2,	// (0x0007651c) dialer_ne_pane

0x93b2,	// (0x0007651c) grid_dialer_command_1_pane

0x93b2,	// (0x0007651c) grid_dialer_command_2_pane

0x93b2,	// (0x0007651c) grid_dialer_keypad_pane

0x3e24,	// (0x00070f8e) bg_popup_call_pane_cp06_ParamLimits

0x3e24,	// (0x00070f8e) bg_popup_call_pane_cp06

0x3e24,	// (0x00070f8e) dialer_ne_clear_pane_ParamLimits

0x3e24,	// (0x00070f8e) dialer_ne_clear_pane

0xa689,	// (0x000777f3) dialer_ne_pane_g1

0xb010,	// (0x0007817a) dialer_ne_pane_t1_ParamLimits

0xb010,	// (0x0007817a) dialer_ne_pane_t1

0x3e32,	// (0x00070f9c) dialer_ne_pane_t2_ParamLimits

0x3e32,	// (0x00070f9c) dialer_ne_pane_t2

0x3e5a,	// (0x00070fc4) dialer_ne_pane_t3_ParamLimits

0x3e5a,	// (0x00070fc4) dialer_ne_pane_t3

0x0002,

0xf705,	// (0x0007c86f) dialer_ne_pane_t_ParamLimits

0xf705,	// (0x0007c86f) dialer_ne_pane_t

0x3e5a,	// (0x00070fc4) dialer_ne_pane_t3_copy1_ParamLimits

0x3e5a,	// (0x00070fc4) dialer_ne_pane_t3_copy1

0xcd89,	// (0x00079ef3) cell_dialer_keypad_pane_ParamLimits

0xcd89,	// (0x00079ef3) cell_dialer_keypad_pane

0x9a41,	// (0x00076bab) cell_dialer_command_1_pane_ParamLimits

0x9a41,	// (0x00076bab) cell_dialer_command_1_pane

0xcda0,	// (0x00079f0a) cell_dialer_command_2_pane_ParamLimits

0xcda0,	// (0x00079f0a) cell_dialer_command_2_pane

0x9a41,	// (0x00076bab) bg_button_pane_cp02_ParamLimits

0x9a41,	// (0x00076bab) bg_button_pane_cp02

0xa43a,	// (0x000775a4) cell_dialer_keypad_pane_g1_ParamLimits

0xa43a,	// (0x000775a4) cell_dialer_keypad_pane_g1

0x9a41,	// (0x00076bab) bg_button_pane_cp03_ParamLimits

0x9a41,	// (0x00076bab) bg_button_pane_cp03

0xa43a,	// (0x000775a4) cell_dialer_command_1_pane_g1_ParamLimits

0xa43a,	// (0x000775a4) cell_dialer_command_1_pane_g1

0x93b2,	// (0x0007651c) bg_button_pane_cp04

0xa689,	// (0x000777f3) cell_dialer_command_2_pane_g1

0x93b2,	// (0x0007651c) bg_button_pane_cp06

0xa689,	// (0x000777f3) dialer_ne_clear_pane_g1

0x20ba,	// (0x0006f224) navi_pane_g2

0x20e8,	// (0x0006f252) navi_pane_g3

0x0002,

0xf334,	// (0x0007c49e) navi_pane_g

0x2113,	// (0x0006f27d) navi_pane_mv_g2

0x213a,	// (0x0006f2a4) navi_pane_mv_g5

0x2142,	// (0x0006f2ac) navi_pane_mv_t1

0xa4ac,	// (0x00077616) main_clock2_pane

0x9a41,	// (0x00076bab) main_clock2_list_pane_ParamLimits

0x9a41,	// (0x00076bab) main_clock2_list_pane

0x3eeb,	// (0x00071055) main_clock2_pane_t1_ParamLimits

0x3eeb,	// (0x00071055) main_clock2_pane_t1

0x3f26,	// (0x00071090) main_clock2_pane_t2_ParamLimits

0x3f26,	// (0x00071090) main_clock2_pane_t2

0x0004,

0xf711,	// (0x0007c87b) main_clock2_pane_t_ParamLimits

0xf711,	// (0x0007c87b) main_clock2_pane_t

0x3fc5,	// (0x0007112f) popup_clock_analogue_window_cp03_ParamLimits

0x3fc5,	// (0x0007112f) popup_clock_analogue_window_cp03

0x3fea,	// (0x00071154) popup_clock_digital_window_cp02_ParamLimits

0x3fea,	// (0x00071154) popup_clock_digital_window_cp02

0x4063,	// (0x000711cd) main_clock2_list_single_pane_ParamLimits

0x4063,	// (0x000711cd) main_clock2_list_single_pane

0xa653,	// (0x000777bd) list_highlight_pane_cp05

0xcde1,	// (0x00079f4b) main_clock2_list_single_pane_t1

0x0d19,	// (0x0006de83) popup_toolbar_window_cp04_ParamLimits

0xa448,	// (0x000775b2) camera2_autofocus_pane_g2_ParamLimits

0xa448,	// (0x000775b2) camera2_autofocus_pane_g2

0xa448,	// (0x000775b2) camera2_autofocus_pane_g3_ParamLimits

0xa448,	// (0x000775b2) camera2_autofocus_pane_g3

0xa448,	// (0x000775b2) camera2_autofocus_pane_g4_ParamLimits

0xa448,	// (0x000775b2) camera2_autofocus_pane_g4

0xa448,	// (0x000775b2) camera2_autofocus_pane_g5_ParamLimits

0xa448,	// (0x000775b2) camera2_autofocus_pane_g5

0x0004,

0xf655,	// (0x0007c7bf) camera2_autofocus_pane_g_ParamLimits

0xf655,	// (0x0007c7bf) camera2_autofocus_pane_g

0x36e4,	// (0x0007084e) camera2_autofocus_pane_cp_g2

0x36ec,	// (0x00070856) camera2_autofocus_pane_cp_g3

0x36f4,	// (0x0007085e) camera2_autofocus_pane_cp_g4

0x36fc,	// (0x00070866) camera2_autofocus_pane_cp_g5

0x0004,

0xf6bb,	// (0x0007c825) camera2_autofocus_pane_cp_g

0x93b2,	// (0x0007651c) popup_dialer_spcha_window

0x93b2,	// (0x0007651c) bg_popup_sub_pane_cp07

0x93b2,	// (0x0007651c) list_spcha_pane

0xcdef,	// (0x00079f59) list_single_spcha_pane_ParamLimits

0xcdef,	// (0x00079f59) list_single_spcha_pane

0x93b2,	// (0x0007651c) list_highlight_pane_cp06

0xabe7,	// (0x00077d51) list_single_spcha_pane_t1

0xc0d0,	// (0x0007923a) popup_call2_audio_out_window_g4_ParamLimits

0xc0d0,	// (0x0007923a) popup_call2_audio_out_window_g4

0x93e8,	// (0x00076552) main_imed2_pane

0x9c78,	// (0x00076de2) popup_imed_adjust2_window

0x2f86,	// (0x000700f0) popup_imed_trans_window_ParamLimits

0x2f86,	// (0x000700f0) popup_imed_trans_window

0xc87d,	// (0x000799e7) popup_blid_sat_info2_window_t1

0xc88b,	// (0x000799f5) popup_blid_sat_info2_window_t2

0x000a,

0xf5ea,	// (0x0007c754) popup_blid_sat_info2_window_t

0x411e,	// (0x00071288) aid_size_cell_colour_35

0x413e,	// (0x000712a8) aid_size_cell_colour_112

0x415e,	// (0x000712c8) aid_size_cell_effect

0xb390,	// (0x000784fa) bg_tb_trans_pane_cp02

0xab0c,	// (0x00077c76) heading_imed_pane

0x417e,	// (0x000712e8) listscroll_imed_pane

0xce01,	// (0x00079f6b) heading_imed_pane_g1

0xce09,	// (0x00079f73) heading_imed_pane_t1

0xce17,	// (0x00079f81) grid_imed_colour_35_pane_ParamLimits

0xce17,	// (0x00079f81) grid_imed_colour_35_pane

0x418a,	// (0x000712f4) grid_imed_effect_pane

0xce33,	// (0x00079f9d) list_imed_aspect_pane

0x41a1,	// (0x0007130b) scroll_pane_cp027_ParamLimits

0x41a1,	// (0x0007130b) scroll_pane_cp027

0x41b2,	// (0x0007131c) cell_imed_effect_pane_ParamLimits

0x41b2,	// (0x0007131c) cell_imed_effect_pane

0xce3b,	// (0x00079fa5) cell_imed_colour_pane_ParamLimits

0xce3b,	// (0x00079fa5) cell_imed_colour_pane

0xce85,	// (0x00079fef) cell_imed_colour_pane_g1_ParamLimits

0xce85,	// (0x00079fef) cell_imed_colour_pane_g1

0xce96,	// (0x0007a000) hgihlgiht_grid_pane_cp016_ParamLimits

0xce96,	// (0x0007a000) hgihlgiht_grid_pane_cp016

0x41dd,	// (0x00071347) cell_imed_effect_pane_g1

0x41e5,	// (0x0007134f) grid_highlight_pane_cp017

0xcea7,	// (0x0007a011) list_imed_single_pane_ParamLimits

0xcea7,	// (0x0007a011) list_imed_single_pane

0x93b2,	// (0x0007651c) list_highlight_pane_cp07

0xcebb,	// (0x0007a025) list_imed_aspect_pane_comp1_t1

0xb390,	// (0x000784fa) bg_tb_trans_pane_cp05

0xcedd,	// (0x0007a047) popup_imed_adjust2_window_g1

0xcf04,	// (0x0007a06e) popup_imed_adjust2_window_t1

0xcf1c,	// (0x0007a086) slider_imed_adjust_pane

0xcf30,	// (0x0007a09a) slider_imed_adjust_pane_g1

0xcf40,	// (0x0007a0aa) slider_imed_adjust_pane_g2

0xcf50,	// (0x0007a0ba) slider_imed_adjust_pane_g3

0xcf61,	// (0x0007a0cb) slider_imed_adjust_pane_g4

0x0003,

0xf72e,	// (0x0007c898) slider_imed_adjust_pane_g

0x41ee,	// (0x00071358) aid_size_cell_clipart2

0xcf72,	// (0x0007a0dc) grid_imed_clipart_pane

0xcf7c,	// (0x0007a0e6) scroll_pane_cp031

0x41fa,	// (0x00071364) cell_imed_clipart_pane_ParamLimits

0x41fa,	// (0x00071364) cell_imed_clipart_pane

0x4217,	// (0x00071381) cell_imed_clipart_pane_g1

0x93b2,	// (0x0007651c) grid_highlight_pane_cp014

0x3ec9,	// (0x00071033) main_clock2_pane_g1_ParamLimits

0x3ec9,	// (0x00071033) main_clock2_pane_g1

0x400a,	// (0x00071174) aid_call2_pane_cp10

0x401c,	// (0x00071186) aid_call_pane_cp10

0xaee5,	// (0x0007804f) popup_clock_analogue_window_cp10_g1

0xaee5,	// (0x0007804f) popup_clock_analogue_window_cp10_g2

0x402e,	// (0x00071198) popup_clock_analogue_window_cp10_g3

0x402e,	// (0x00071198) popup_clock_analogue_window_cp10_g4

0xaee5,	// (0x0007804f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71c,	// (0x0007c886) popup_clock_analogue_window_cp10_g

0x4044,	// (0x000711ae) popup_clock_analogue_window_cp10_t1

0x4075,	// (0x000711df) clock_digital_number_pane_cp10_ParamLimits

0x4075,	// (0x000711df) clock_digital_number_pane_cp10

0x408f,	// (0x000711f9) clock_digital_number_pane_cp11_ParamLimits

0x408f,	// (0x000711f9) clock_digital_number_pane_cp11

0x40a9,	// (0x00071213) clock_digital_number_pane_cp12_ParamLimits

0x40a9,	// (0x00071213) clock_digital_number_pane_cp12

0x40c5,	// (0x0007122f) clock_digital_number_pane_cp13_ParamLimits

0x40c5,	// (0x0007122f) clock_digital_number_pane_cp13

0x40e1,	// (0x0007124b) clock_digital_separator_pane_cp10_ParamLimits

0x40e1,	// (0x0007124b) clock_digital_separator_pane_cp10

0x40fd,	// (0x00071267) popup_clock_digital_window_cp02_t1_ParamLimits

0x40fd,	// (0x00071267) popup_clock_digital_window_cp02_t1

0xa3b7,	// (0x00077521) clock_digital_number_pane_cp10_g1

0xa3b7,	// (0x00077521) clock_digital_number_pane_cp10_g2

0x0001,

0xf737,	// (0x0007c8a1) clock_digital_number_pane_cp10_g

0xa3b7,	// (0x00077521) clock_digital_separator_pane_cp10_g1

0xa3b7,	// (0x00077521) clock_digital_separator_pane_g2_cp10

0xaf80,	// (0x000780ea) navi_pane_vded_g4

0xaf89,	// (0x000780f3) navi_pane_vded_g5

0xaf92,	// (0x000780fc) navi_pane_vded_t1

0x93e8,	// (0x00076552) main_vded_pane

0x4220,	// (0x0007138a) main_vded_pane_g1

0x422c,	// (0x00071396) main_vded_pane_g2

0x4238,	// (0x000713a2) main_vded_pane_g3

0x0002,

0xf73c,	// (0x0007c8a6) main_vded_pane_g

0x4244,	// (0x000713ae) main_vded_pane_t1

0x4252,	// (0x000713bc) main_vded_pane_t2

0x0001,

0xf743,	// (0x0007c8ad) main_vded_pane_t

0x4260,	// (0x000713ca) vded_slider_pane

0x426a,	// (0x000713d4) vded_video_pane

0xcf84,	// (0x0007a0ee) vded_video_pane_g1

0x4276,	// (0x000713e0) vded_video_pane_g2

0xa689,	// (0x000777f3) vded_video_pane_g3

0x0002,

0xf748,	// (0x0007c8b2) vded_video_pane_g

0xcf8e,	// (0x0007a0f8) vded_slider_pane_g1

0xc79a,	// (0x00079904) vded_slider_pane_g2

0xcf97,	// (0x0007a101) vded_slider_pane_g3

0xcfa0,	// (0x0007a10a) vded_slider_pane_g4

0xcfa9,	// (0x0007a113) vded_slider_pane_g5

0x0004,

0xf74f,	// (0x0007c8b9) vded_slider_pane_g

0x3d2d,	// (0x00070e97) mup3_rocker_pane_ParamLimits

0x3d2d,	// (0x00070e97) mup3_rocker_pane

0x427f,	// (0x000713e9) mup3_control_keys_pane_g1

0x4287,	// (0x000713f1) mup3_control_keys_pane_g2

0x428f,	// (0x000713f9) mup3_control_keys_pane_g3

0x4297,	// (0x00071401) mup3_control_keys_pane_g4

0x0003,

0xf75a,	// (0x0007c8c4) mup3_control_keys_pane_g

0xffe6,	// (0x0006d150) popup_toolbar2_fixed_window_cp01_ParamLimits

0xffe6,	// (0x0006d150) popup_toolbar2_fixed_window_cp01

0x3d63,	// (0x00070ecd) popup_toolbar2_fixed_window_cp02_ParamLimits

0x3d63,	// (0x00070ecd) popup_toolbar2_fixed_window_cp02

0xba59,	// (0x00078bc3) popup_call2_audio_second_window_t4_ParamLimits

0xba59,	// (0x00078bc3) popup_call2_audio_second_window_t4

0xbf95,	// (0x000790ff) popup_call2_audio_first_window_t6_ParamLimits

0xbf95,	// (0x000790ff) popup_call2_audio_first_window_t6

0xc1d3,	// (0x0007933d) popup_call2_audio_out_window_t6_ParamLimits

0xc1d3,	// (0x0007933d) popup_call2_audio_out_window_t6

0x93e8,	// (0x00076552) main_vitu_pane

0x9a41,	// (0x00076bab) aid_size_cell_itu_ParamLimits

0x9a41,	// (0x00076bab) aid_size_cell_itu

0x9a41,	// (0x00076bab) bg_popup_window_pane_cp08_ParamLimits

0x9a41,	// (0x00076bab) bg_popup_window_pane_cp08

0x9a41,	// (0x00076bab) field_vitu_entry_pane_ParamLimits

0x9a41,	// (0x00076bab) field_vitu_entry_pane

0x9a41,	// (0x00076bab) grid_vitu_function_pane_ParamLimits

0x9a41,	// (0x00076bab) grid_vitu_function_pane

0x9a41,	// (0x00076bab) grid_vitu_itu_pane_ParamLimits

0x9a41,	// (0x00076bab) grid_vitu_itu_pane

0x9a41,	// (0x00076bab) cell_vitu_itu_pane_ParamLimits

0x9a41,	// (0x00076bab) cell_vitu_itu_pane

0x9a41,	// (0x00076bab) cell_vitu_function_pane_ParamLimits

0x9a41,	// (0x00076bab) cell_vitu_function_pane

0x9a41,	// (0x00076bab) bg_popup_sub_pane_cp08_ParamLimits

0x9a41,	// (0x00076bab) bg_popup_sub_pane_cp08

0xa65b,	// (0x000777c5) field_vitu_entry_pane_t1_ParamLimits

0xa65b,	// (0x000777c5) field_vitu_entry_pane_t1

0xcfb2,	// (0x0007a11c) field_vitu_entry_pane_t2_ParamLimits

0xcfb2,	// (0x0007a11c) field_vitu_entry_pane_t2

0x0001,

0xf763,	// (0x0007c8cd) field_vitu_entry_pane_t_ParamLimits

0xf763,	// (0x0007c8cd) field_vitu_entry_pane_t

0xc824,	// (0x0007998e) bg_button_pane_cp05_ParamLimits

0xc824,	// (0x0007998e) bg_button_pane_cp05

0xcfcf,	// (0x0007a139) cell_vitu_itu_pane_g1

0xb37c,	// (0x000784e6) cell_vitu_itu_pane_t1_ParamLimits

0xb37c,	// (0x000784e6) cell_vitu_itu_pane_t1

0xb37c,	// (0x000784e6) cell_vitu_itu_pane_t2_ParamLimits

0xb37c,	// (0x000784e6) cell_vitu_itu_pane_t2

0x0002,

0xf768,	// (0x0007c8d2) cell_vitu_itu_pane_t_ParamLimits

0xf768,	// (0x0007c8d2) cell_vitu_itu_pane_t

0x93b2,	// (0x0007651c) bg_button_pane_cp07

0xa689,	// (0x000777f3) cell_vitu_function_pane_g1

0x9a4f,	// (0x00076bb9) main_calc_pane_g1

0xfe35,	// (0x0006cf9f) aid_visual_content_pane

0x93e8,	// (0x00076552) main_vradio_pane

0xa43a,	// (0x000775a4) main_vradio_pane_g1_ParamLimits

0xa43a,	// (0x000775a4) main_vradio_pane_g1

0xa448,	// (0x000775b2) main_vradio_pane_g2_ParamLimits

0xa448,	// (0x000775b2) main_vradio_pane_g2

0x0001,

0xf76f,	// (0x0007c8d9) main_vradio_pane_g_ParamLimits

0xf76f,	// (0x0007c8d9) main_vradio_pane_g

0xa65b,	// (0x000777c5) main_vradio_pane_t1_ParamLimits

0xa65b,	// (0x000777c5) main_vradio_pane_t1

0xa65b,	// (0x000777c5) main_vradio_pane_t2_ParamLimits

0xa65b,	// (0x000777c5) main_vradio_pane_t2

0xb010,	// (0x0007817a) main_vradio_pane_t3_ParamLimits

0xb010,	// (0x0007817a) main_vradio_pane_t3

0x0002,

0xf774,	// (0x0007c8de) main_vradio_pane_t_ParamLimits

0xf774,	// (0x0007c8de) main_vradio_pane_t

0x9a41,	// (0x00076bab) vradio_rocker_control_pane_ParamLimits

0x9a41,	// (0x00076bab) vradio_rocker_control_pane

0x9a41,	// (0x00076bab) vradio_station_info_pane_ParamLimits

0x9a41,	// (0x00076bab) vradio_station_info_pane

0x9a41,	// (0x00076bab) vradio_frequency_info_pane_ParamLimits

0x9a41,	// (0x00076bab) vradio_frequency_info_pane

0xa689,	// (0x000777f3) vradio_station_info_pane_g1

0xb37c,	// (0x000784e6) vradio_station_info_pane_t1_ParamLimits

0xb37c,	// (0x000784e6) vradio_station_info_pane_t1

0xb010,	// (0x0007817a) vradio_station_info_pane_t2_ParamLimits

0xb010,	// (0x0007817a) vradio_station_info_pane_t2

0x0001,

0xf77b,	// (0x0007c8e5) vradio_station_info_pane_t_ParamLimits

0xf77b,	// (0x0007c8e5) vradio_station_info_pane_t

0x93b2,	// (0x0007651c) vradio_tuning_pane

0x42a7,	// (0x00071411) vradio_rocker_control_pane_g1

0xcfeb,	// (0x0007a155) vradio_rocker_control_pane_g2

0x42b1,	// (0x0007141b) vradio_rocker_control_pane_g3

0x42bb,	// (0x00071425) vradio_rocker_control_pane_g4

0x42c5,	// (0x0007142f) vradio_rocker_control_pane_g5

0x0004,

0xf780,	// (0x0007c8ea) vradio_rocker_control_pane_g

0xa689,	// (0x000777f3) vradio_frequency_info_pane_g1

0xa65b,	// (0x000777c5) vradio_frequency_info_pane_t1_ParamLimits

0xa65b,	// (0x000777c5) vradio_frequency_info_pane_t1

0x42cf,	// (0x00071439) vradio_tuning_pane_g1

0x42da,	// (0x00071444) vradio_tuning_pane_t1

0xfe92,	// (0x0006cffc) area_side_right_pane_ParamLimits

0xfe92,	// (0x0006cffc) area_side_right_pane

0xc5d1,	// (0x0007973b) status_small_pane_g1

0xc5d9,	// (0x00079743) status_small_pane_g2

0xc5e2,	// (0x0007974c) status_small_pane_g3

0xc5eb,	// (0x00079755) status_small_pane_g4

0x0003,

0xf54c,	// (0x0007c6b6) status_small_pane_g

0xc5f4,	// (0x0007975e) status_small_pane_t1

0x93e8,	// (0x00076552) main_video3_pane

0xcff3,	// (0x0007a15d) cams_zoom_vslider_pane

0xcffb,	// (0x0007a165) image3_wide_pane_ParamLimits

0xcffb,	// (0x0007a165) image3_wide_pane

0xd015,	// (0x0007a17f) image3_wide_small_pane

0xd021,	// (0x0007a18b) main_video3_pane_g1_ParamLimits

0xd021,	// (0x0007a18b) main_video3_pane_g1

0xd03d,	// (0x0007a1a7) main_video3_pane_g2_ParamLimits

0xd03d,	// (0x0007a1a7) main_video3_pane_g2

0x0001,

0xf78b,	// (0x0007c8f5) main_video3_pane_g_ParamLimits

0xf78b,	// (0x0007c8f5) main_video3_pane_g

0xd059,	// (0x0007a1c3) main_video3_pane_t1_ParamLimits

0xd059,	// (0x0007a1c3) main_video3_pane_t1

0xd084,	// (0x0007a1ee) main_video3_pane_t2_ParamLimits

0xd084,	// (0x0007a1ee) main_video3_pane_t2

0xd0b1,	// (0x0007a21b) main_video3_pane_t3_ParamLimits

0xd0b1,	// (0x0007a21b) main_video3_pane_t3

0x0002,

0xf790,	// (0x0007c8fa) main_video3_pane_t_ParamLimits

0xf790,	// (0x0007c8fa) main_video3_pane_t

0xd0de,	// (0x0007a248) cams_zoom_vslider_pane_g1

0xd0e7,	// (0x0007a251) cams_zoom_vslider_pane_g2

0x0001,

0xf797,	// (0x0007c901) cams_zoom_vslider_pane_g

0xd0ef,	// (0x0007a259) small_slider_vertical_pane

0xa689,	// (0x000777f3) small_slider_vertical_pane_g1

0xa689,	// (0x000777f3) small_slider_vertical_pane_g2

0xd0f7,	// (0x0007a261) small_slider_vertical_pane_g3

0x0002,

0xf79c,	// (0x0007c906) small_slider_vertical_pane_g

0x93e8,	// (0x00076552) main_hwr_training_pane

0xd100,	// (0x0007a26a) hwr_training_instruct_pane_ParamLimits

0xd100,	// (0x0007a26a) hwr_training_instruct_pane

0x42e9,	// (0x00071453) hwr_training_navi_pane_ParamLimits

0x42e9,	// (0x00071453) hwr_training_navi_pane

0x4308,	// (0x00071472) hwr_training_write_pane_ParamLimits

0x4308,	// (0x00071472) hwr_training_write_pane

0x93b2,	// (0x0007651c) bg_frame_shadow_pane

0xd137,	// (0x0007a2a1) hwr_training_write_pane_g1

0xd13f,	// (0x0007a2a9) hwr_training_write_pane_g2

0xd147,	// (0x0007a2b1) hwr_training_write_pane_g3

0xd14f,	// (0x0007a2b9) hwr_training_write_pane_g4

0xd157,	// (0x0007a2c1) hwr_training_write_pane_g5

0xd15f,	// (0x0007a2c9) hwr_training_write_pane_g6

0xd167,	// (0x0007a2d1) hwr_training_write_pane_g7

0x0006,

0xf7a3,	// (0x0007c90d) hwr_training_write_pane_g

0x9d6c,	// (0x00076ed6) hwr_training_navi_pane_g1_ParamLimits

0x9d6c,	// (0x00076ed6) hwr_training_navi_pane_g1

0x9d7e,	// (0x00076ee8) hwr_training_navi_pane_g2_ParamLimits

0x9d7e,	// (0x00076ee8) hwr_training_navi_pane_g2

0x9d90,	// (0x00076efa) hwr_training_navi_pane_g3_ParamLimits

0x9d90,	// (0x00076efa) hwr_training_navi_pane_g3

0x9da0,	// (0x00076f0a) hwr_training_navi_pane_g4_ParamLimits

0x9da0,	// (0x00076f0a) hwr_training_navi_pane_g4

0x0004,

0xf7b2,	// (0x0007c91c) hwr_training_navi_pane_g_ParamLimits

0xf7b2,	// (0x0007c91c) hwr_training_navi_pane_g

0x9dad,	// (0x00076f17) hwr_training_navi_pane_t1

0x4350,	// (0x000714ba) list_single_hwr_training_instruct_pane_ParamLimits

0x4350,	// (0x000714ba) list_single_hwr_training_instruct_pane

0xd16f,	// (0x0007a2d9) list_single_hwr_training_instruct_pane_t1

0xc984,	// (0x00079aee) bg_frame_shadow_pane_g1

0xd17e,	// (0x0007a2e8) bg_frame_shadow_pane_g2

0xd186,	// (0x0007a2f0) bg_frame_shadow_pane_g3

0xd18e,	// (0x0007a2f8) bg_frame_shadow_pane_g4

0xd196,	// (0x0007a300) bg_frame_shadow_pane_g5

0xd19e,	// (0x0007a308) bg_frame_shadow_pane_g6

0xd1a6,	// (0x0007a310) bg_frame_shadow_pane_g7

0xa564,	// (0x000776ce) bg_frame_shadow_pane_g8

0x0007,

0xf7bd,	// (0x0007c927) bg_frame_shadow_pane_g

0x93e8,	// (0x00076552) main_video_tele_dialer_pane

0x436c,	// (0x000714d6) aid_size_cell_video_keypad_ParamLimits

0x436c,	// (0x000714d6) aid_size_cell_video_keypad

0x4386,	// (0x000714f0) grid_video_dialer_keypad_pane_ParamLimits

0x4386,	// (0x000714f0) grid_video_dialer_keypad_pane

0x43d2,	// (0x0007153c) video_down_pane_cp_ParamLimits

0x43d2,	// (0x0007153c) video_down_pane_cp

0x4404,	// (0x0007156e) cell_video_dialer_keypad_pane_ParamLimits

0x4404,	// (0x0007156e) cell_video_dialer_keypad_pane

0xd1ae,	// (0x0007a318) bg_button_pane_cp08_ParamLimits

0xd1ae,	// (0x0007a318) bg_button_pane_cp08

0x442a,	// (0x00071594) cell_video_dialer_keypad_pane_g1_ParamLimits

0x442a,	// (0x00071594) cell_video_dialer_keypad_pane_g1

0x3d17,	// (0x00070e81) mup3_rocker2_pane_ParamLimits

0x3d17,	// (0x00070e81) mup3_rocker2_pane

0xa689,	// (0x000777f3) mup3_rocker2_pane_g1

0x2e53,	// (0x0006ffbd) main_dialer2_pane

0x93e8,	// (0x00076552) main_mp4_pane

0x9dd9,	// (0x00076f43) main_mp4_pane_g1_ParamLimits

0x9dd9,	// (0x00076f43) main_mp4_pane_g1

0x9dd9,	// (0x00076f43) main_mp4_pane_g2_ParamLimits

0x9dd9,	// (0x00076f43) main_mp4_pane_g2

0x4465,	// (0x000715cf) main_mp4_pane_g3_ParamLimits

0x4465,	// (0x000715cf) main_mp4_pane_g3

0x9de7,	// (0x00076f51) main_mp4_pane_g4_ParamLimits

0x9de7,	// (0x00076f51) main_mp4_pane_g4

0x9e15,	// (0x00076f7f) main_mp4_pane_g5_ParamLimits

0x9e15,	// (0x00076f7f) main_mp4_pane_g5

0x0007,

0xf7dd,	// (0x0007c947) main_mp4_pane_g_ParamLimits

0xf7dd,	// (0x0007c947) main_mp4_pane_g

0x9e89,	// (0x00076ff3) main_mp4_pane_t1_ParamLimits

0x9e89,	// (0x00076ff3) main_mp4_pane_t1

0x9ee5,	// (0x0007704f) main_mp4_pane_t2_ParamLimits

0x9ee5,	// (0x0007704f) main_mp4_pane_t2

0xd1ba,	// (0x0007a324) main_mp4_pane_t3_ParamLimits

0xd1ba,	// (0x0007a324) main_mp4_pane_t3

0x9f37,	// (0x000770a1) main_mp4_pane_t4_ParamLimits

0x9f37,	// (0x000770a1) main_mp4_pane_t4

0x0003,

0xf7ee,	// (0x0007c958) main_mp4_pane_t_ParamLimits

0xf7ee,	// (0x0007c958) main_mp4_pane_t

0x9f77,	// (0x000770e1) mp4_progress_pane_ParamLimits

0x9f77,	// (0x000770e1) mp4_progress_pane

0x9fc1,	// (0x0007712b) mp4_rocker_pane_ParamLimits

0x9fc1,	// (0x0007712b) mp4_rocker_pane

0xd1e8,	// (0x0007a352) mp4_progress_pane_t1

0xd201,	// (0x0007a36b) mp4_progress_pane_t2

0x0001,

0xf7f7,	// (0x0007c961) mp4_progress_pane_t

0xd21a,	// (0x0007a384) mup_progress_pane_cp04

0xd2a2,	// (0x0007a40c) mp4_rocker_pane_g1

0x44af,	// (0x00071619) aid_cell_size_keypad2_ParamLimits

0x44af,	// (0x00071619) aid_cell_size_keypad2

0x44c5,	// (0x0007162f) dialer2_ne_pane_ParamLimits

0x44c5,	// (0x0007162f) dialer2_ne_pane

0x44dd,	// (0x00071647) grid_dialer2_keypad_pane_ParamLimits

0x44dd,	// (0x00071647) grid_dialer2_keypad_pane

0xc824,	// (0x0007998e) bg_popup_call_pane_cp07_ParamLimits

0xc824,	// (0x0007998e) bg_popup_call_pane_cp07

0x44f9,	// (0x00071663) dialer2_ne_pane_t1_ParamLimits

0x44f9,	// (0x00071663) dialer2_ne_pane_t1

0x4539,	// (0x000716a3) cell_dialer2_keypad_pane_ParamLimits

0x4539,	// (0x000716a3) cell_dialer2_keypad_pane

0xd23f,	// (0x0007a3a9) bg_button_pane_pane_cp04_ParamLimits

0xd23f,	// (0x0007a3a9) bg_button_pane_pane_cp04

0x455f,	// (0x000716c9) cell_dialer2_keypad_pane_g1_ParamLimits

0x455f,	// (0x000716c9) cell_dialer2_keypad_pane_g1

0x0c00,	// (0x0006dd6a) aid_placing_vt_set_content_ParamLimits

0x0c00,	// (0x0006dd6a) aid_placing_vt_set_content

0x0c24,	// (0x0006dd8e) aid_placing_vt_set_title_ParamLimits

0x0c24,	// (0x0006dd8e) aid_placing_vt_set_title

0x93e8,	// (0x00076552) main_image3_pane

0x4625,	// (0x0007178f) area_side_right_pane_cp01_ParamLimits

0x4625,	// (0x0007178f) area_side_right_pane_cp01

0x9dd9,	// (0x00076f43) main_image3_pane_g1_ParamLimits

0x9dd9,	// (0x00076f43) main_image3_pane_g1

0x463e,	// (0x000717a8) main_image3_pane_g2_ParamLimits

0x463e,	// (0x000717a8) main_image3_pane_g2

0x4666,	// (0x000717d0) main_image3_pane_g3_ParamLimits

0x4666,	// (0x000717d0) main_image3_pane_g3

0x4690,	// (0x000717fa) main_image3_pane_g4_ParamLimits

0x4690,	// (0x000717fa) main_image3_pane_g4

0x0003,

0xf806,	// (0x0007c970) main_image3_pane_g_ParamLimits

0xf806,	// (0x0007c970) main_image3_pane_g

0x46ba,	// (0x00071824) main_image3_pane_t1_ParamLimits

0x46ba,	// (0x00071824) main_image3_pane_t1

0x4712,	// (0x0007187c) main_image3_pane_t2_ParamLimits

0x4712,	// (0x0007187c) main_image3_pane_t2

0x4764,	// (0x000718ce) main_image3_pane_t3_ParamLimits

0x4764,	// (0x000718ce) main_image3_pane_t3

0x0003,

0xf80f,	// (0x0007c979) main_image3_pane_t_ParamLimits

0xf80f,	// (0x0007c979) main_image3_pane_t

0x9a41,	// (0x00076bab) grid_sctrl_middle_pane_cp01_ParamLimits

0x9a41,	// (0x00076bab) grid_sctrl_middle_pane_cp01

0x47ec,	// (0x00071956) cell_sctrl_middle_pane_cp01_ParamLimits

0x47ec,	// (0x00071956) cell_sctrl_middle_pane_cp01

0x4809,	// (0x00071973) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4809,	// (0x00071973) cell_sctrl_middle_pane_cp01_g1

0x93e8,	// (0x00076552) main_call4_pane

0x481e,	// (0x00071988) aid_size_button_call4_ParamLimits

0x481e,	// (0x00071988) aid_size_button_call4

0x4851,	// (0x000719bb) call4_windows_pane_ParamLimits

0x4851,	// (0x000719bb) call4_windows_pane

0x4870,	// (0x000719da) grid_call4_button_pane_ParamLimits

0x4870,	// (0x000719da) grid_call4_button_pane

0x48a7,	// (0x00071a11) call4_windows_conf_pane

0x48c0,	// (0x00071a2a) popup_call4_audio_first_window_ParamLimits

0x48c0,	// (0x00071a2a) popup_call4_audio_first_window

0x4910,	// (0x00071a7a) popup_call4_audio_second_window_ParamLimits

0x4910,	// (0x00071a7a) popup_call4_audio_second_window

0x4929,	// (0x00071a93) popup_call4_audio_wait_window_ParamLimits

0x4929,	// (0x00071a93) popup_call4_audio_wait_window

0x4937,	// (0x00071aa1) cell_call4_button_pane_ParamLimits

0x4937,	// (0x00071aa1) cell_call4_button_pane

0x495e,	// (0x00071ac8) bg_button_pane_cp09_ParamLimits

0x495e,	// (0x00071ac8) bg_button_pane_cp09

0x496a,	// (0x00071ad4) cell_call4_button_pane_g1_ParamLimits

0x496a,	// (0x00071ad4) cell_call4_button_pane_g1

0x4990,	// (0x00071afa) cell_call4_button_pane_t1_ParamLimits

0x4990,	// (0x00071afa) cell_call4_button_pane_t1

0xd253,	// (0x0007a3bd) popup_call4_audio_conf_window_ParamLimits

0xd253,	// (0x0007a3bd) popup_call4_audio_conf_window

0x3d79,	// (0x00070ee3) mup3_progress_pane_t1_ParamLimits

0x3d98,	// (0x00070f02) mup3_progress_pane_t2_ParamLimits

0xccb2,	// (0x00079e1c) mup3_progress_pane_t3_ParamLimits

0xf6e4,	// (0x0007c84e) mup3_progress_pane_t_ParamLimits

0xcccf,	// (0x00079e39) mup_progress_pane_cp03_ParamLimits

0x429f,	// (0x00071409) mup3_control_keys_pane_g4_copy1

0x9fa5,	// (0x0007710f) mp4_rocker2_pane_ParamLimits

0x9fa5,	// (0x0007710f) mp4_rocker2_pane

0xd26d,	// (0x0007a3d7) mp4_rocker2_pane_g1

0xd275,	// (0x0007a3df) mp4_rocker2_pane_g2

0xa049,	// (0x000771b3) mp4_rocker2_pane_g3

0xa051,	// (0x000771bb) mp4_rocker2_pane_g4

0xa059,	// (0x000771c3) mp4_rocker2_pane_g5

0x0004,

0xf818,	// (0x0007c982) mp4_rocker2_pane_g

0x93e8,	// (0x00076552) main_camera4_pane

0x93e8,	// (0x00076552) main_video4_pane

0x43a0,	// (0x0007150a) main_video_tele_dialer_pane_t1_ParamLimits

0x43a0,	// (0x0007150a) main_video_tele_dialer_pane_t1

0x43b9,	// (0x00071523) main_video_tele_dialer_pane_t2_ParamLimits

0x43b9,	// (0x00071523) main_video_tele_dialer_pane_t2

0x0001,

0xf7ce,	// (0x0007c938) main_video_tele_dialer_pane_t_ParamLimits

0xf7ce,	// (0x0007c938) main_video_tele_dialer_pane_t

0x49ce,	// (0x00071b38) cam4_autofocus_pane_ParamLimits

0x49ce,	// (0x00071b38) cam4_autofocus_pane

0x49e4,	// (0x00071b4e) cam4_image_uncrop_pane_ParamLimits

0x49e4,	// (0x00071b4e) cam4_image_uncrop_pane

0x49fd,	// (0x00071b67) cam4_indicators_pane_ParamLimits

0x49fd,	// (0x00071b67) cam4_indicators_pane

0x4a2d,	// (0x00071b97) main_camera4_pane_g1_ParamLimits

0x4a2d,	// (0x00071b97) main_camera4_pane_g1

0x4a3f,	// (0x00071ba9) main_camera4_pane_g2_ParamLimits

0x4a3f,	// (0x00071ba9) main_camera4_pane_g2

0x4a52,	// (0x00071bbc) main_camera4_pane_g3_ParamLimits

0x4a52,	// (0x00071bbc) main_camera4_pane_g3

0x4a65,	// (0x00071bcf) main_camera4_pane_g4_ParamLimits

0x4a65,	// (0x00071bcf) main_camera4_pane_g4

0x4a78,	// (0x00071be2) main_camera4_pane_g5_ParamLimits

0x4a78,	// (0x00071be2) main_camera4_pane_g5

0x0005,

0xf823,	// (0x0007c98d) main_camera4_pane_g_ParamLimits

0xf823,	// (0x0007c98d) main_camera4_pane_g

0x4a9c,	// (0x00071c06) main_camera4_pane_t1_ParamLimits

0x4a9c,	// (0x00071c06) main_camera4_pane_t1

0xd2c0,	// (0x0007a42a) bg_tb_trans_pane_cp06

0xa087,	// (0x000771f1) cam4_indicators_pane_g1

0xa098,	// (0x00077202) cam4_indicators_pane_g2

0x0002,

0xf83e,	// (0x0007c9a8) cam4_indicators_pane_g

0xa0b0,	// (0x0007721a) cam4_indicators_pane_t1

0x4b00,	// (0x00071c6a) main_video4_pane_g1_ParamLimits

0x4b00,	// (0x00071c6a) main_video4_pane_g1

0x4b0f,	// (0x00071c79) main_video4_pane_g2_ParamLimits

0x4b0f,	// (0x00071c79) main_video4_pane_g2

0x4b1f,	// (0x00071c89) main_video4_pane_g3_ParamLimits

0x4b1f,	// (0x00071c89) main_video4_pane_g3

0x4b2f,	// (0x00071c99) main_video4_pane_g4_ParamLimits

0x4b2f,	// (0x00071c99) main_video4_pane_g4

0x0004,

0xf845,	// (0x0007c9af) main_video4_pane_g_ParamLimits

0xf845,	// (0x0007c9af) main_video4_pane_g

0x4b4f,	// (0x00071cb9) vid4_indicators_pane_ParamLimits

0x4b4f,	// (0x00071cb9) vid4_indicators_pane

0x4b79,	// (0x00071ce3) video4_image_uncrop_cif_pane_ParamLimits

0x4b79,	// (0x00071ce3) video4_image_uncrop_cif_pane

0x4b93,	// (0x00071cfd) video4_image_uncrop_nhd_pane_ParamLimits

0x4b93,	// (0x00071cfd) video4_image_uncrop_nhd_pane

0x49e4,	// (0x00071b4e) video4_image_uncrop_vga_pane_ParamLimits

0x49e4,	// (0x00071b4e) video4_image_uncrop_vga_pane

0x93da,	// (0x00076544) bg_tb_trans_pane_cp07

0xa0de,	// (0x00077248) vid4_indicators_pane_g1

0xa0f4,	// (0x0007725e) vid4_indicators_pane_g2

0xa108,	// (0x00077272) vid4_indicators_pane_g3

0x0004,

0xf850,	// (0x0007c9ba) vid4_indicators_pane_g

0xa139,	// (0x000772a3) vid4_indicators_pane_t1

0x4baa,	// (0x00071d14) cam4_autofocus_pane_g1

0x4bb2,	// (0x00071d1c) cam4_autofocus_pane_g2

0x4bba,	// (0x00071d24) cam4_autofocus_pane_g3

0x0002,

0xf85b,	// (0x0007c9c5) cam4_autofocus_pane_g

0x4bc2,	// (0x00071d2c) cam4_autofocus_pane_g3_copy1

0x43e8,	// (0x00071552) video_down_pane_cp_t1

0x43f6,	// (0x00071560) video_down_pane_cp_t2

0x0001,

0xf7d3,	// (0x0007c93d) video_down_pane_cp_t

0x93da,	// (0x00076544) popup_vitu2_window_ParamLimits

0x93da,	// (0x00076544) popup_vitu2_window

0x4bca,	// (0x00071d34) aid_size_cell2_itu2_ParamLimits

0x4bca,	// (0x00071d34) aid_size_cell2_itu2

0x4bf0,	// (0x00071d5a) aid_size_cell_itu2_ParamLimits

0x4bf0,	// (0x00071d5a) aid_size_cell_itu2

0x4c4e,	// (0x00071db8) bg_popup_window_pane_cp09_ParamLimits

0x4c4e,	// (0x00071db8) bg_popup_window_pane_cp09

0x4c5c,	// (0x00071dc6) field_vitu2_entry_pane_ParamLimits

0x4c5c,	// (0x00071dc6) field_vitu2_entry_pane

0x4c84,	// (0x00071dee) grid_vitu2_function_pane_ParamLimits

0x4c84,	// (0x00071dee) grid_vitu2_function_pane

0x4cd5,	// (0x00071e3f) grid_vitu2_itu_pane_ParamLimits

0x4cd5,	// (0x00071e3f) grid_vitu2_itu_pane

0x4d65,	// (0x00071ecf) cell_vitu2_itu_pane_ParamLimits

0x4d65,	// (0x00071ecf) cell_vitu2_itu_pane

0x4d93,	// (0x00071efd) cell_vitu2_function_pane_ParamLimits

0x4d93,	// (0x00071efd) cell_vitu2_function_pane

0xd27d,	// (0x0007a3e7) bg_popup_call_pane_cp08_ParamLimits

0xd27d,	// (0x0007a3e7) bg_popup_call_pane_cp08

0xd2ce,	// (0x0007a438) field_vitu2_entry_pane_g1

0xd2da,	// (0x0007a444) field_vitu2_entry_pane_g2

0x0002,

0xf862,	// (0x0007c9cc) field_vitu2_entry_pane_g

0x4dd7,	// (0x00071f41) field_vitu2_entry_pane_t1_ParamLimits

0x4dd7,	// (0x00071f41) field_vitu2_entry_pane_t1

0xa150,	// (0x000772ba) field_vitu2_entry_pane_t2_ParamLimits

0xa150,	// (0x000772ba) field_vitu2_entry_pane_t2

0x0001,

0xf869,	// (0x0007c9d3) field_vitu2_entry_pane_t_ParamLimits

0xf869,	// (0x0007c9d3) field_vitu2_entry_pane_t

0x4e07,	// (0x00071f71) bg_button_pane_cp010_ParamLimits

0x4e07,	// (0x00071f71) bg_button_pane_cp010

0x4e15,	// (0x00071f7f) cell_vitu2_itu_pane_g1

0x4e3b,	// (0x00071fa5) cell_vitu2_itu_pane_t1_ParamLimits

0x4e3b,	// (0x00071fa5) cell_vitu2_itu_pane_t1

0xfcf9,	// (0x0006ce63) cell_vitu2_itu_pane_t2_ParamLimits

0xfcf9,	// (0x0006ce63) cell_vitu2_itu_pane_t2

0x0002,

0xf873,	// (0x0007c9dd) cell_vitu2_itu_pane_t_ParamLimits

0xf873,	// (0x0007c9dd) cell_vitu2_itu_pane_t

0x93da,	// (0x00076544) bg_button_pane_cp011

0x4e99,	// (0x00072003) cell_vitu2_function_pane_g1

0x93e8,	// (0x00076552) main_myfav_hc_pane

0x47b4,	// (0x0007191e) popup_image3_note_pane_ParamLimits

0x47b4,	// (0x0007191e) popup_image3_note_pane

0x47d0,	// (0x0007193a) popup_image3_tool_bar_pane_ParamLimits

0x47d0,	// (0x0007193a) popup_image3_tool_bar_pane

0xfd87,	// (0x0006cef1) cell_vitu2_itu_pane_t3_ParamLimits

0xfd87,	// (0x0006cef1) cell_vitu2_itu_pane_t3

0x93b2,	// (0x0007651c) bg_popup_trans_pane

0xd2ee,	// (0x0007a458) grid_image3_tool_bar_pane

0xd2f8,	// (0x0007a462) bg_popup_trans_pane_g1

0xa8ad,	// (0x00077a17) bg_popup_trans_pane_g2

0xd300,	// (0x0007a46a) bg_popup_trans_pane_g3

0xd308,	// (0x0007a472) bg_popup_trans_pane_g4

0xd310,	// (0x0007a47a) bg_popup_trans_pane_g5

0xd318,	// (0x0007a482) bg_popup_trans_pane_g6

0xd320,	// (0x0007a48a) bg_popup_trans_pane_g7

0xd328,	// (0x0007a492) bg_popup_trans_pane_g8

0xa88d,	// (0x000779f7) bg_popup_trans_pane_g9

0x0008,

0xf87a,	// (0x0007c9e4) bg_popup_trans_pane_g

0xd330,	// (0x0007a49a) cell_image3_tool_bar_pane_ParamLimits

0xd330,	// (0x0007a49a) cell_image3_tool_bar_pane

0xa689,	// (0x000777f3) cell_image3_tool_bar_pane_g1

0x93b2,	// (0x0007651c) bg_popup_trans_pane_cp1

0xd346,	// (0x0007a4b0) popup_image3_note_pane_t1

0xd354,	// (0x0007a4be) popup_image3_note_pane_t2

0xd362,	// (0x0007a4cc) popup_image3_note_pane_t3

0x0002,

0xf88d,	// (0x0007c9f7) popup_image3_note_pane_t

0xd372,	// (0x0007a4dc) popup_image3_note_pane_t3_copy1

0x4ead,	// (0x00072017) bg_myfav_hc_instruction_pane_ParamLimits

0x4ead,	// (0x00072017) bg_myfav_hc_instruction_pane

0x4ec5,	// (0x0007202f) cell_myfav_contact_pane_ParamLimits

0x4ec5,	// (0x0007202f) cell_myfav_contact_pane

0x4ee1,	// (0x0007204b) cell_myfav_contact_pane_cp1_ParamLimits

0x4ee1,	// (0x0007204b) cell_myfav_contact_pane_cp1

0x4ef9,	// (0x00072063) cell_myfav_contact_pane_cp2_ParamLimits

0x4ef9,	// (0x00072063) cell_myfav_contact_pane_cp2

0x4f11,	// (0x0007207b) cell_myfav_contact_pane_cp3_ParamLimits

0x4f11,	// (0x0007207b) cell_myfav_contact_pane_cp3

0x4f28,	// (0x00072092) cell_myfav_contact_pane_cp4_ParamLimits

0x4f28,	// (0x00072092) cell_myfav_contact_pane_cp4

0x4f40,	// (0x000720aa) cell_myfav_contact_pane_cp5_ParamLimits

0x4f40,	// (0x000720aa) cell_myfav_contact_pane_cp5

0x4f54,	// (0x000720be) cell_myfav_contact_pane_cp6_ParamLimits

0x4f54,	// (0x000720be) cell_myfav_contact_pane_cp6

0x4f6a,	// (0x000720d4) cell_myfav_contact_pane_cp7_ParamLimits

0x4f6a,	// (0x000720d4) cell_myfav_contact_pane_cp7

0xd380,	// (0x0007a4ea) listscroll_gen_pane_cp05

0x4f82,	// (0x000720ec) main_myfav_hc_pane_g1_ParamLimits

0x4f82,	// (0x000720ec) main_myfav_hc_pane_g1

0x4f9c,	// (0x00072106) main_myfav_hc_pane_g2_ParamLimits

0x4f9c,	// (0x00072106) main_myfav_hc_pane_g2

0x0002,

0xf894,	// (0x0007c9fe) main_myfav_hc_pane_g_ParamLimits

0xf894,	// (0x0007c9fe) main_myfav_hc_pane_g

0x4fd0,	// (0x0007213a) main_myfav_hc_pane_t1_ParamLimits

0x4fd0,	// (0x0007213a) main_myfav_hc_pane_t1

0xd389,	// (0x0007a4f3) main_myfav_hc_pane_t2_ParamLimits

0xd389,	// (0x0007a4f3) main_myfav_hc_pane_t2

0xd39b,	// (0x0007a505) main_myfav_hc_pane_t3_ParamLimits

0xd39b,	// (0x0007a505) main_myfav_hc_pane_t3

0x4fe7,	// (0x00072151) main_myfav_hc_pane_t4_ParamLimits

0x4fe7,	// (0x00072151) main_myfav_hc_pane_t4

0x0004,

0xf89b,	// (0x0007ca05) main_myfav_hc_pane_t_ParamLimits

0xf89b,	// (0x0007ca05) main_myfav_hc_pane_t

0xa689,	// (0x000777f3) bg_myfav_hc_instruction_pane_g1

0xd3ad,	// (0x0007a517) cell_myfav_contact_pane_g1_ParamLimits

0xd3ad,	// (0x0007a517) cell_myfav_contact_pane_g1

0xd3ad,	// (0x0007a517) cell_myfav_contact_pane_g2_ParamLimits

0xd3ad,	// (0x0007a517) cell_myfav_contact_pane_g2

0xd3b9,	// (0x0007a523) cell_myfav_contact_pane_g3_ParamLimits

0xd3b9,	// (0x0007a523) cell_myfav_contact_pane_g3

0xa448,	// (0x000775b2) cell_myfav_contact_pane_g4_ParamLimits

0xa448,	// (0x000775b2) cell_myfav_contact_pane_g4

0xd3c6,	// (0x0007a530) cell_myfav_contact_pane_g5_ParamLimits

0xd3c6,	// (0x0007a530) cell_myfav_contact_pane_g5

0x0004,

0xf8a6,	// (0x0007ca10) cell_myfav_contact_pane_g_ParamLimits

0xf8a6,	// (0x0007ca10) cell_myfav_contact_pane_g

0x4fb6,	// (0x00072120) main_myfav_hc_pane_g3_ParamLimits

0x4fb6,	// (0x00072120) main_myfav_hc_pane_g3

0xfc93,	// (0x0006cdfd) popup_adpt_find_window

0x5011,	// (0x0007217b) afind_page_pane_ParamLimits

0x5011,	// (0x0007217b) afind_page_pane

0x5027,	// (0x00072191) aid_size_cell_afind_ParamLimits

0x5027,	// (0x00072191) aid_size_cell_afind

0x5045,	// (0x000721af) bg_popup_sub_pane_cp09_ParamLimits

0x5045,	// (0x000721af) bg_popup_sub_pane_cp09

0x5057,	// (0x000721c1) find_pane_cp01_ParamLimits

0x5057,	// (0x000721c1) find_pane_cp01

0xd3d2,	// (0x0007a53c) grid_afind_control_pane_ParamLimits

0xd3d2,	// (0x0007a53c) grid_afind_control_pane

0x506b,	// (0x000721d5) grid_afind_pane_ParamLimits

0x506b,	// (0x000721d5) grid_afind_pane

0x508d,	// (0x000721f7) cell_afind_pane_ParamLimits

0x508d,	// (0x000721f7) cell_afind_pane

0xa689,	// (0x000777f3) afind_page_pane_g1

0x50f6,	// (0x00072260) afind_page_pane_g2

0x50fe,	// (0x00072268) afind_page_pane_g3

0x0002,

0xf8b1,	// (0x0007ca1b) afind_page_pane_g

0x5106,	// (0x00072270) afind_page_pane_t1

0xd3f8,	// (0x0007a562) cell_afind_grid_control_pane_ParamLimits

0xd3f8,	// (0x0007a562) cell_afind_grid_control_pane

0xd23f,	// (0x0007a3a9) bg_button_pane_cp69_ParamLimits

0xd23f,	// (0x0007a3a9) bg_button_pane_cp69

0x5114,	// (0x0007227e) cell_afind_pane_g1_ParamLimits

0x5114,	// (0x0007227e) cell_afind_pane_g1

0x5121,	// (0x0007228b) cell_afind_pane_t1_ParamLimits

0x5121,	// (0x0007228b) cell_afind_pane_t1

0xa693,	// (0x000777fd) bg_button_pane_cp72

0xd407,	// (0x0007a571) cell_afind_grid_control_pane_g1

0x28a0,	// (0x0006fa0a) aid_image_placing_area_ParamLimits

0x28a0,	// (0x0006fa0a) aid_image_placing_area

0xa43a,	// (0x000775a4) field_vitu_entry_pane_g1_ParamLimits

0xa43a,	// (0x000775a4) field_vitu_entry_pane_g1

0xa43a,	// (0x000775a4) field_vitu_entry_pane_g2_ParamLimits

0xa43a,	// (0x000775a4) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0007c32b) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0007c32b) field_vitu_entry_pane_g

0xcfcf,	// (0x0007a139) cell_vitu_itu_pane_g1_ParamLimits

0xcfb2,	// (0x0007a11c) cell_vitu_itu_pane_t3_ParamLimits

0xcfb2,	// (0x0007a11c) cell_vitu_itu_pane_t3

0xd1e8,	// (0x0007a352) mp4_progress_pane_t1_ParamLimits

0xd201,	// (0x0007a36b) mp4_progress_pane_t2_ParamLimits

0xf7f7,	// (0x0007c961) mp4_progress_pane_t_ParamLimits

0xd21a,	// (0x0007a384) mup_progress_pane_cp04_ParamLimits

0x4ffb,	// (0x00072165) main_myfav_hc_pane_t5_ParamLimits

0x4ffb,	// (0x00072165) main_myfav_hc_pane_t5

0xfe49,	// (0x0006cfb3) aid_zoom_text_primary

0xfc93,	// (0x0006cdfd) popup_adpt_find_window_ParamLimits

0x93da,	// (0x00076544) main_cam_set_pane

0x4a16,	// (0x00071b80) cam4_zoom_pane_ParamLimits

0x4a16,	// (0x00071b80) cam4_zoom_pane

0x5133,	// (0x0007229d) main_cam_set_pane_g1_ParamLimits

0x5133,	// (0x0007229d) main_cam_set_pane_g1

0x5141,	// (0x000722ab) main_cam_set_pane_g2_ParamLimits

0x5141,	// (0x000722ab) main_cam_set_pane_g2

0x0001,

0xf8b8,	// (0x0007ca22) main_cam_set_pane_g_ParamLimits

0xf8b8,	// (0x0007ca22) main_cam_set_pane_g

0x5162,	// (0x000722cc) main_cam_set_pane_t1_ParamLimits

0x5162,	// (0x000722cc) main_cam_set_pane_t1

0x517d,	// (0x000722e7) main_cset_listscroll_pane_ParamLimits

0x517d,	// (0x000722e7) main_cset_listscroll_pane

0x51a5,	// (0x0007230f) main_cset_slider_pane_ParamLimits

0x51a5,	// (0x0007230f) main_cset_slider_pane

0xd418,	// (0x0007a582) main_cset_list_pane_ParamLimits

0xd418,	// (0x0007a582) main_cset_list_pane

0xd428,	// (0x0007a592) scroll_pane_cp028

0x51cf,	// (0x00072339) aid_area_touch_slider

0x51eb,	// (0x00072355) cset_slider_pane

0x520e,	// (0x00072378) main_cset_slider_pane_g1

0x5223,	// (0x0007238d) main_cset_slider_pane_g2

0x0011,

0xf8bd,	// (0x0007ca27) main_cset_slider_pane_g

0xd461,	// (0x0007a5cb) main_cset_slider_pane_t1

0x52e5,	// (0x0007244f) main_cset_slider_pane_t2

0x52ff,	// (0x00072469) main_cset_slider_pane_t3

0x5319,	// (0x00072483) main_cset_slider_pane_t4

0x5333,	// (0x0007249d) main_cset_slider_pane_t5

0x5351,	// (0x000724bb) main_cset_slider_pane_t6

0x5366,	// (0x000724d0) main_cset_slider_pane_t7

0x000e,

0xf8e2,	// (0x0007ca4c) main_cset_slider_pane_t

0x5472,	// (0x000725dc) cset_list_set_pane_ParamLimits

0x5472,	// (0x000725dc) cset_list_set_pane

0xd4fb,	// (0x0007a665) aid_position_infowindow_above

0xd503,	// (0x0007a66d) aid_position_infowindow_below

0x5486,	// (0x000725f0) cset_list_set_pane_g1_ParamLimits

0x5486,	// (0x000725f0) cset_list_set_pane_g1

0x5492,	// (0x000725fc) cset_list_set_pane_g3_ParamLimits

0x5492,	// (0x000725fc) cset_list_set_pane_g3

0x0001,

0xf901,	// (0x0007ca6b) cset_list_set_pane_g_ParamLimits

0xf901,	// (0x0007ca6b) cset_list_set_pane_g

0x54a1,	// (0x0007260b) cset_list_set_pane_t1_ParamLimits

0x54a1,	// (0x0007260b) cset_list_set_pane_t1

0x9a41,	// (0x00076bab) list_highlight_pane_cp021_ParamLimits

0x9a41,	// (0x00076bab) list_highlight_pane_cp021

0xb402,	// (0x0007856c) cset_slider_pane_g1

0xb414,	// (0x0007857e) cset_slider_pane_g2

0xb40b,	// (0x00078575) cset_slider_pane_g3

0x0002,

0xf906,	// (0x0007ca70) cset_slider_pane_g

0xad89,	// (0x00077ef3) aid_area_touch_cam4_zoom

0x54b6,	// (0x00072620) cam4_zoom_cont_pane

0x54be,	// (0x00072628) cam4_zoom_pane_g1

0x54c6,	// (0x00072630) cam4_zoom_pane_g2

0x54ce,	// (0x00072638) cam4_zoom_pane_g3

0x0002,

0xf90d,	// (0x0007ca77) cam4_zoom_pane_g

0xa16d,	// (0x000772d7) cam4_zoom_cont_pane_g1

0xa176,	// (0x000772e0) cam4_zoom_cont_pane_g2

0xa17f,	// (0x000772e9) cam4_zoom_cont_pane_g3

0x0002,

0xf914,	// (0x0007ca7e) cam4_zoom_cont_pane_g

0x483c,	// (0x000719a6) call4_image_pane_ParamLimits

0x483c,	// (0x000719a6) call4_image_pane

0x48a7,	// (0x00071a11) call4_windows_conf_pane_ParamLimits

0x48ee,	// (0x00071a58) popup_call4_audio_in_window_ParamLimits

0x48ee,	// (0x00071a58) popup_call4_audio_in_window

0x93b2,	// (0x0007651c) bg_popup_call2_act_pane_cp02

0xd24b,	// (0x0007a3b5) call4_list_conf_pane

0xa689,	// (0x000777f3) call4_image_pane_g1

0xa689,	// (0x000777f3) call4_image_pane_g2

0x0001,

0xf398,	// (0x0007c502) call4_image_pane_g

0xd50b,	// (0x0007a675) list_single_graphic_popup_conf4_pane_ParamLimits

0xd50b,	// (0x0007a675) list_single_graphic_popup_conf4_pane

0x93b2,	// (0x0007651c) list_highlight_pane_cp022

0xd520,	// (0x0007a68a) list_single_graphic_popup_conf4_pane_g1

0xade2,	// (0x00077f4c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf91b,	// (0x0007ca85) list_single_graphic_popup_conf4_pane_g

0xd528,	// (0x0007a692) list_single_graphic_popup_conf4_pane_t1

0x0d3b,	// (0x0006dea5) popup_vtel_slider_window_ParamLimits

0x0d3b,	// (0x0006dea5) popup_vtel_slider_window

0xd22d,	// (0x0007a397) dialer2_ne_pane_t2_ParamLimits

0xd22d,	// (0x0007a397) dialer2_ne_pane_t2

0x0001,

0xf7fc,	// (0x0007c966) dialer2_ne_pane_t_ParamLimits

0xf7fc,	// (0x0007c966) dialer2_ne_pane_t

0xc824,	// (0x0007998e) bg_popup_sub_pane_cp010_ParamLimits

0xc824,	// (0x0007998e) bg_popup_sub_pane_cp010

0x54d6,	// (0x00072640) popup_vtel_slider_window_g1_ParamLimits

0x54d6,	// (0x00072640) popup_vtel_slider_window_g1

0x54e9,	// (0x00072653) popup_vtel_slider_window_g2_ParamLimits

0x54e9,	// (0x00072653) popup_vtel_slider_window_g2

0x0003,

0xf920,	// (0x0007ca8a) popup_vtel_slider_window_g_ParamLimits

0xf920,	// (0x0007ca8a) popup_vtel_slider_window_g

0x553f,	// (0x000726a9) vtel_slider_pane_ParamLimits

0x553f,	// (0x000726a9) vtel_slider_pane

0x5561,	// (0x000726cb) vtel_slider_pane_g1_ParamLimits

0x5561,	// (0x000726cb) vtel_slider_pane_g1

0x5575,	// (0x000726df) vtel_slider_pane_g2_ParamLimits

0x5575,	// (0x000726df) vtel_slider_pane_g2

0x558d,	// (0x000726f7) vtel_slider_pane_g3_ParamLimits

0x558d,	// (0x000726f7) vtel_slider_pane_g3

0x5561,	// (0x000726cb) vtel_slider_pane_g4_ParamLimits

0x5561,	// (0x000726cb) vtel_slider_pane_g4

0x55a3,	// (0x0007270d) vtel_slider_pane_g5_ParamLimits

0x55a3,	// (0x0007270d) vtel_slider_pane_g5

0x0004,

0xf929,	// (0x0007ca93) vtel_slider_pane_g_ParamLimits

0xf929,	// (0x0007ca93) vtel_slider_pane_g

0x93da,	// (0x00076544) main_gallery2_pane

0x4c1c,	// (0x00071d86) aid_size_row_itut2_dropdow_list_ParamLimits

0x4c1c,	// (0x00071d86) aid_size_row_itut2_dropdow_list

0x4cac,	// (0x00071e16) grid_vitu2_function_top_pane_ParamLimits

0x4cac,	// (0x00071e16) grid_vitu2_function_top_pane

0x4d10,	// (0x00071e7a) popup_vitu2_dropdown_list_window_ParamLimits

0x4d10,	// (0x00071e7a) popup_vitu2_dropdown_list_window

0x4d37,	// (0x00071ea1) popup_vitu2_match_list_window

0x55b9,	// (0x00072723) cell_vitu2_function_top_pane_ParamLimits

0x55b9,	// (0x00072723) cell_vitu2_function_top_pane

0x55d3,	// (0x0007273d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x55d3,	// (0x0007273d) cell_vitu2_function_top_pane_cp01

0x55ef,	// (0x00072759) cell_vitu2_function_top_wide_pane_ParamLimits

0x55ef,	// (0x00072759) cell_vitu2_function_top_wide_pane

0x93da,	// (0x00076544) bg_button_pane_cp012

0x560d,	// (0x00072777) cell_vitu2_function_top_pane_g1

0xa188,	// (0x000772f2) bg_button_pane_cp013_ParamLimits

0xa188,	// (0x000772f2) bg_button_pane_cp013

0x5621,	// (0x0007278b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5621,	// (0x0007278b) cell_vitu2_function_top_wide_pane_g1

0x93da,	// (0x00076544) bg_popup_sub_pane_cp20

0x5639,	// (0x000727a3) list_vitu2_match_list_pane

0xd2f8,	// (0x0007a462) bg_popup_sub_pane_cp20_g1

0xd300,	// (0x0007a46a) bg_popup_sub_pane_cp20_g2

0xa8ad,	// (0x00077a17) bg_popup_sub_pane_cp20_g3

0xd308,	// (0x0007a472) bg_popup_sub_pane_cp20_g4

0xa88d,	// (0x000779f7) bg_popup_sub_pane_cp20_g5

0xd53e,	// (0x0007a6a8) bg_popup_sub_pane_cp20_g6

0xd318,	// (0x0007a482) bg_popup_sub_pane_cp20_g7

0xd320,	// (0x0007a48a) bg_popup_sub_pane_cp20_g8

0xd328,	// (0x0007a492) bg_popup_sub_pane_cp20_g9

0x0008,

0xf934,	// (0x0007ca9e) bg_popup_sub_pane_cp20_g

0xa1a4,	// (0x0007730e) list_vitu2_match_list_item_pane_ParamLimits

0xa1a4,	// (0x0007730e) list_vitu2_match_list_item_pane

0xa1b6,	// (0x00077320) list_vitu2_match_list_item_pane_t1

0x93e8,	// (0x00076552) bg_popup_sub_pane_cp21

0xa653,	// (0x000777bd) grid_vitu2_dropdown_list_pane

0x5651,	// (0x000727bb) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5651,	// (0x000727bb) cell_vitu2_dropdown_list_char_pane

0x5673,	// (0x000727dd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5673,	// (0x000727dd) cell_vitu2_dropdown_list_ctrl_pane

0xd546,	// (0x0007a6b0) cell_vitu2_dropdown_list_char_pane_g1

0xd54f,	// (0x0007a6b9) cell_vitu2_dropdown_list_char_pane_g2

0xd558,	// (0x0007a6c2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf947,	// (0x0007cab1) cell_vitu2_dropdown_list_char_pane_g

0x569d,	// (0x00072807) cell_vitu2_dropdown_list_char_pane_t1

0x56ab,	// (0x00072815) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x56ab,	// (0x00072815) cell_vitu2_dropdown_list_ctrl_pane_g1

0x56bb,	// (0x00072825) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x56bb,	// (0x00072825) cell_vitu2_dropdown_list_ctrl_pane_g2

0x56cc,	// (0x00072836) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x56cc,	// (0x00072836) cell_vitu2_dropdown_list_ctrl_pane_g3

0x56dc,	// (0x00072846) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x56dc,	// (0x00072846) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd2c0,	// (0x0007a42a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd2c0,	// (0x0007a42a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94e,	// (0x0007cab8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94e,	// (0x0007cab8) cell_vitu2_dropdown_list_ctrl_pane_g

0x56f8,	// (0x00072862) aid_size_cell_gallery2_ParamLimits

0x56f8,	// (0x00072862) aid_size_cell_gallery2

0x5716,	// (0x00072880) grid_gallery2_pane_ParamLimits

0x5716,	// (0x00072880) grid_gallery2_pane

0x5730,	// (0x0007289a) scroll_pane_cp029_ParamLimits

0x5730,	// (0x0007289a) scroll_pane_cp029

0x5741,	// (0x000728ab) cell_gallery2_pane_ParamLimits

0x5741,	// (0x000728ab) cell_gallery2_pane

0xd561,	// (0x0007a6cb) cell_gallery2_pane_g2

0x57a5,	// (0x0007290f) cell_gallery2_pane_g3

0xd569,	// (0x0007a6d3) cell_gallery2_pane_g4

0xd571,	// (0x0007a6db) cell_gallery2_pane_g5

0xa653,	// (0x000777bd) grid_highlight_pane_cp10

0x4d37,	// (0x00071ea1) popup_vitu2_match_list_window_ParamLimits

0x4d4e,	// (0x00071eb8) popup_vitu2_query_window_ParamLimits

0x4d4e,	// (0x00071eb8) popup_vitu2_query_window

0x93e8,	// (0x00076552) bg_vitu2_candi_button_pane

0xd546,	// (0x0007a6b0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd54f,	// (0x0007a6b9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd558,	// (0x0007a6c2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x57ad,	// (0x00072917) bg_button_pane_cp015

0x57c4,	// (0x0007292e) bg_button_pane_cp016

0x57d0,	// (0x0007293a) bg_button_pane_cp017

0xb390,	// (0x000784fa) bg_popup_sub_pane_cp22

0xd579,	// (0x0007a6e3) popup_vitu2_query_window_g1

0x5811,	// (0x0007297b) popup_vitu2_query_window_g2

0x0002,

0xf959,	// (0x0007cac3) popup_vitu2_query_window_g

0x5837,	// (0x000729a1) popup_vitu2_query_window_t1_ParamLimits

0x5837,	// (0x000729a1) popup_vitu2_query_window_t1

0x586c,	// (0x000729d6) popup_vitu2_query_window_t2_ParamLimits

0x586c,	// (0x000729d6) popup_vitu2_query_window_t2

0x587e,	// (0x000729e8) popup_vitu2_query_window_t3_ParamLimits

0x587e,	// (0x000729e8) popup_vitu2_query_window_t3

0x58a6,	// (0x00072a10) popup_vitu2_query_window_t4_ParamLimits

0x58a6,	// (0x00072a10) popup_vitu2_query_window_t4

0x58ba,	// (0x00072a24) popup_vitu2_query_window_t5_ParamLimits

0x58ba,	// (0x00072a24) popup_vitu2_query_window_t5

0x0006,

0xf960,	// (0x0007caca) popup_vitu2_query_window_t_ParamLimits

0xf960,	// (0x0007caca) popup_vitu2_query_window_t

0xd410,	// (0x0007a57a) main_cset_text_pane

0x51cf,	// (0x00072339) aid_area_touch_slider_ParamLimits

0x51eb,	// (0x00072355) cset_slider_pane_ParamLimits

0x520e,	// (0x00072378) main_cset_slider_pane_g1_ParamLimits

0x5223,	// (0x0007238d) main_cset_slider_pane_g2_ParamLimits

0xd431,	// (0x0007a59b) main_cset_slider_pane_g3_ParamLimits

0xd431,	// (0x0007a59b) main_cset_slider_pane_g3

0x5238,	// (0x000723a2) main_cset_slider_pane_g4_ParamLimits

0x5238,	// (0x000723a2) main_cset_slider_pane_g4

0x5247,	// (0x000723b1) main_cset_slider_pane_g5_ParamLimits

0x5247,	// (0x000723b1) main_cset_slider_pane_g5

0x5255,	// (0x000723bf) main_cset_slider_pane_g6_ParamLimits

0x5255,	// (0x000723bf) main_cset_slider_pane_g6

0xf8bd,	// (0x0007ca27) main_cset_slider_pane_g_ParamLimits

0xd461,	// (0x0007a5cb) main_cset_slider_pane_t1_ParamLimits

0x52e5,	// (0x0007244f) main_cset_slider_pane_t2_ParamLimits

0x52ff,	// (0x00072469) main_cset_slider_pane_t3_ParamLimits

0x5319,	// (0x00072483) main_cset_slider_pane_t4_ParamLimits

0x5333,	// (0x0007249d) main_cset_slider_pane_t5_ParamLimits

0x5351,	// (0x000724bb) main_cset_slider_pane_t6_ParamLimits

0x5366,	// (0x000724d0) main_cset_slider_pane_t7_ParamLimits

0x5394,	// (0x000724fe) main_cset_slider_pane_t8_ParamLimits

0x5394,	// (0x000724fe) main_cset_slider_pane_t8

0x53bc,	// (0x00072526) main_cset_slider_pane_t9_ParamLimits

0x53bc,	// (0x00072526) main_cset_slider_pane_t9

0x53e4,	// (0x0007254e) main_cset_slider_pane_t10_ParamLimits

0x53e4,	// (0x0007254e) main_cset_slider_pane_t10

0x540c,	// (0x00072576) main_cset_slider_pane_t11_ParamLimits

0x540c,	// (0x00072576) main_cset_slider_pane_t11

0x5436,	// (0x000725a0) main_cset_slider_pane_t12_ParamLimits

0x5436,	// (0x000725a0) main_cset_slider_pane_t12

0x5453,	// (0x000725bd) main_cset_slider_pane_t13_ParamLimits

0x5453,	// (0x000725bd) main_cset_slider_pane_t13

0xf8e2,	// (0x0007ca4c) main_cset_slider_pane_t_ParamLimits

0x93b2,	// (0x0007651c) bg_popup_sub_pane_cp011

0xd585,	// (0x0007a6ef) main_cset_text_pane_g1

0xd58d,	// (0x0007a6f7) main_cset_text_pane_t1

0xd59b,	// (0x0007a705) main_cset_text_pane_t2

0xd5a9,	// (0x0007a713) main_cset_text_pane_t3

0xd5b7,	// (0x0007a721) main_cset_text_pane_t4

0xd5c5,	// (0x0007a72f) main_cset_text_pane_t5

0xd5d3,	// (0x0007a73d) main_cset_text_pane_t6

0xd5e1,	// (0x0007a74b) main_cset_text_pane_t7

0x0006,

0xf96f,	// (0x0007cad9) main_cset_text_pane_t

0x93e8,	// (0x00076552) main_cam4_burst_pane

0x93e8,	// (0x00076552) main_cam5_pane

0xd3e6,	// (0x0007a550) bg_button_pane_cp019

0xd3ef,	// (0x0007a559) bg_button_pane_cp020

0xd43d,	// (0x0007a5a7) main_cset_slider_pane_g7_ParamLimits

0xd43d,	// (0x0007a5a7) main_cset_slider_pane_g7

0xd449,	// (0x0007a5b3) main_cset_slider_pane_g8_ParamLimits

0xd449,	// (0x0007a5b3) main_cset_slider_pane_g8

0x5269,	// (0x000723d3) main_cset_slider_pane_g9_ParamLimits

0x5269,	// (0x000723d3) main_cset_slider_pane_g9

0x5275,	// (0x000723df) main_cset_slider_pane_g10_ParamLimits

0x5275,	// (0x000723df) main_cset_slider_pane_g10

0x5281,	// (0x000723eb) main_cset_slider_pane_g11_ParamLimits

0x5281,	// (0x000723eb) main_cset_slider_pane_g11

0x528d,	// (0x000723f7) main_cset_slider_pane_g12_ParamLimits

0x528d,	// (0x000723f7) main_cset_slider_pane_g12

0x5299,	// (0x00072403) main_cset_slider_pane_g13_ParamLimits

0x5299,	// (0x00072403) main_cset_slider_pane_g13

0x52a5,	// (0x0007240f) main_cset_slider_pane_g14_ParamLimits

0x52a5,	// (0x0007240f) main_cset_slider_pane_g14

0x52b1,	// (0x0007241b) main_cset_slider_pane_g15_ParamLimits

0x52b1,	// (0x0007241b) main_cset_slider_pane_g15

0xd489,	// (0x0007a5f3) main_cset_slider_pane_t14_ParamLimits

0xd489,	// (0x0007a5f3) main_cset_slider_pane_t14

0xd4c2,	// (0x0007a62c) main_cset_slider_pane_t15_ParamLimits

0xd4c2,	// (0x0007a62c) main_cset_slider_pane_t15

0x5924,	// (0x00072a8e) aid_cam4_burst_size_cell_ParamLimits

0x5924,	// (0x00072a8e) aid_cam4_burst_size_cell

0x5944,	// (0x00072aae) grid_cam4_burst_pane_ParamLimits

0x5944,	// (0x00072aae) grid_cam4_burst_pane

0x597e,	// (0x00072ae8) linegrid_cam4_burst_pane_ParamLimits

0x597e,	// (0x00072ae8) linegrid_cam4_burst_pane

0xd5ef,	// (0x0007a759) scroll_pane_cp30_ParamLimits

0xd5ef,	// (0x0007a759) scroll_pane_cp30

0x59a0,	// (0x00072b0a) cell_cam4_burst_pane_ParamLimits

0x59a0,	// (0x00072b0a) cell_cam4_burst_pane

0xd5fb,	// (0x0007a765) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5fb,	// (0x0007a765) linegrid_cam4_burst_pane_g1

0x59f5,	// (0x00072b5f) linegrid_cam4_burst_pane_g2_ParamLimits

0x59f5,	// (0x00072b5f) linegrid_cam4_burst_pane_g2

0xd608,	// (0x0007a772) linegrid_cam4_burst_pane_g3_ParamLimits

0xd608,	// (0x0007a772) linegrid_cam4_burst_pane_g3

0x0002,

0xf97e,	// (0x0007cae8) linegrid_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x0007cae8) linegrid_cam4_burst_pane_g

0x5a06,	// (0x00072b70) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5a06,	// (0x00072b70) linegrid_cam4_burst_pane_g3_copy1

0xd615,	// (0x0007a77f) linegrid_cam4_burst_pane_g4_ParamLimits

0xd615,	// (0x0007a77f) linegrid_cam4_burst_pane_g4

0x5a24,	// (0x00072b8e) linegrid_cam4_burst_pane_g5_ParamLimits

0x5a24,	// (0x00072b8e) linegrid_cam4_burst_pane_g5

0x5a35,	// (0x00072b9f) linegrid_cam4_burst_pane_g6_ParamLimits

0x5a35,	// (0x00072b9f) linegrid_cam4_burst_pane_g6

0xd622,	// (0x0007a78c) linegrid_cam4_burst_pane_g7_ParamLimits

0xd622,	// (0x0007a78c) linegrid_cam4_burst_pane_g7

0x5a4c,	// (0x00072bb6) cell_cam4_burst_pane_g1

0xd63b,	// (0x0007a7a5) main_cam5_pane_t1_ParamLimits

0xd63b,	// (0x0007a7a5) main_cam5_pane_t1

0xd64d,	// (0x0007a7b7) main_cam5_pane_t2_ParamLimits

0xd64d,	// (0x0007a7b7) main_cam5_pane_t2

0xd65f,	// (0x0007a7c9) main_cam5_pane_t3_ParamLimits

0xd65f,	// (0x0007a7c9) main_cam5_pane_t3

0xd671,	// (0x0007a7db) main_cam5_pane_t4_ParamLimits

0xd671,	// (0x0007a7db) main_cam5_pane_t4

0xd689,	// (0x0007a7f3) main_cam5_pane_t5_ParamLimits

0xd689,	// (0x0007a7f3) main_cam5_pane_t5

0xd69d,	// (0x0007a807) main_cam5_pane_t6_ParamLimits

0xd69d,	// (0x0007a807) main_cam5_pane_t6

0xd6b1,	// (0x0007a81b) main_cam5_pane_t7_ParamLimits

0xd6b1,	// (0x0007a81b) main_cam5_pane_t7

0xd6c3,	// (0x0007a82d) main_cam5_pane_t8_ParamLimits

0xd6c3,	// (0x0007a82d) main_cam5_pane_t8

0xd6e1,	// (0x0007a84b) main_cam5_pane_t9_ParamLimits

0xd6e1,	// (0x0007a84b) main_cam5_pane_t9

0xd6f3,	// (0x0007a85d) main_cam5_pane_t10_ParamLimits

0xd6f3,	// (0x0007a85d) main_cam5_pane_t10

0xd705,	// (0x0007a86f) main_cam5_pane_t11_ParamLimits

0xd705,	// (0x0007a86f) main_cam5_pane_t11

0xd719,	// (0x0007a883) main_cam5_pane_t12_ParamLimits

0xd719,	// (0x0007a883) main_cam5_pane_t12

0xd730,	// (0x0007a89a) main_cam5_pane_t13_ParamLimits

0xd730,	// (0x0007a89a) main_cam5_pane_t13

0x000c,

0xf98a,	// (0x0007caf4) main_cam5_pane_t_ParamLimits

0xf98a,	// (0x0007caf4) main_cam5_pane_t

0xffca,	// (0x0006d134) popup_scut_keymap_window_ParamLimits

0xffca,	// (0x0006d134) popup_scut_keymap_window

0x5a5f,	// (0x00072bc9) aid_size_cell_brow_shortcut

0xa653,	// (0x000777bd) bg_popup_window_pane_cp010

0x5a6b,	// (0x00072bd5) grid_scut_pane

0x5a77,	// (0x00072be1) cell_scut_pane_ParamLimits

0x5a77,	// (0x00072be1) cell_scut_pane

0x5a90,	// (0x00072bfa) cell_scut_pane_g1

0xd753,	// (0x0007a8bd) cell_scut_pane_t1

0xd762,	// (0x0007a8cc) cell_scut_pane_t2

0x5a99,	// (0x00072c03) cell_scut_pane_t3

0x0002,

0xf9a5,	// (0x0007cb0f) cell_scut_pane_t

0x391c,	// (0x00070a86) main_mup3_pane_g8_ParamLimits

0x391c,	// (0x00070a86) main_mup3_pane_g8

0x4c36,	// (0x00071da0) area_vitu2_query_pane_ParamLimits

0x4c36,	// (0x00071da0) area_vitu2_query_pane

0x57dc,	// (0x00072946) input_focus_pane_cp08

0xd771,	// (0x0007a8db) area_vitu2_query_pane_g1

0x5aa7,	// (0x00072c11) area_vitu2_query_pane_g2

0x0001,

0xf9ac,	// (0x0007cb16) area_vitu2_query_pane_g

0x5abc,	// (0x00072c26) area_vitu2_query_pane_t1_ParamLimits

0x5abc,	// (0x00072c26) area_vitu2_query_pane_t1

0x5ad0,	// (0x00072c3a) area_vitu2_query_pane_t2_ParamLimits

0x5ad0,	// (0x00072c3a) area_vitu2_query_pane_t2

0x5ae4,	// (0x00072c4e) area_vitu2_query_pane_t3_ParamLimits

0x5ae4,	// (0x00072c4e) area_vitu2_query_pane_t3

0xa1c4,	// (0x0007732e) area_vitu2_query_pane_t4_ParamLimits

0xa1c4,	// (0x0007732e) area_vitu2_query_pane_t4

0xa1ec,	// (0x00077356) area_vitu2_query_pane_t5_ParamLimits

0xa1ec,	// (0x00077356) area_vitu2_query_pane_t5

0xa214,	// (0x0007737e) area_vitu2_query_pane_t6_ParamLimits

0xa214,	// (0x0007737e) area_vitu2_query_pane_t6

0x0006,

0xf9b1,	// (0x0007cb1b) area_vitu2_query_pane_t_ParamLimits

0xf9b1,	// (0x0007cb1b) area_vitu2_query_pane_t

0x5b10,	// (0x00072c7a) bg_button_pane_cp018

0x5b1c,	// (0x00072c86) bg_button_pane_cp021

0x5b28,	// (0x00072c92) bg_button_pane_cp022

0x5b4f,	// (0x00072cb9) input_focus_pane_cp09

0x2052,	// (0x0006f1bc) aid_size_touch_mv_arrow_left

0x207b,	// (0x0006f1e5) aid_size_touch_mv_arrow_right

0x52c9,	// (0x00072433) main_cset_slider_pane_g16_ParamLimits

0x52c9,	// (0x00072433) main_cset_slider_pane_g16

0x52d7,	// (0x00072441) main_cset_slider_pane_g17_ParamLimits

0x52d7,	// (0x00072441) main_cset_slider_pane_g17

0x5a4c,	// (0x00072bb6) cell_cam4_burst_pane_g1_ParamLimits

0x93b2,	// (0x0007651c) compa_mode_pane

0x54f9,	// (0x00072663) popup_vtel_slider_window_g3_ParamLimits

0x54f9,	// (0x00072663) popup_vtel_slider_window_g3

0x5510,	// (0x0007267a) popup_vtel_slider_window_g4_ParamLimits

0x5510,	// (0x0007267a) popup_vtel_slider_window_g4

0x5527,	// (0x00072691) popup_vtel_slider_window_t1_ParamLimits

0x5527,	// (0x00072691) popup_vtel_slider_window_t1

0x93e8,	// (0x00076552) main_cl_pane

0x9c78,	// (0x00076de2) popup_imed_adjust2_window_ParamLimits

0xb390,	// (0x000784fa) bg_tb_trans_pane_cp05_ParamLimits

0xcedd,	// (0x0007a047) popup_imed_adjust2_window_g1_ParamLimits

0xceec,	// (0x0007a056) popup_imed_adjust2_window_g2_ParamLimits

0xceec,	// (0x0007a056) popup_imed_adjust2_window_g2

0xcef8,	// (0x0007a062) popup_imed_adjust2_window_g3_ParamLimits

0xcef8,	// (0x0007a062) popup_imed_adjust2_window_g3

0x0002,

0xf727,	// (0x0007c891) popup_imed_adjust2_window_g_ParamLimits

0xf727,	// (0x0007c891) popup_imed_adjust2_window_g

0xcf04,	// (0x0007a06e) popup_imed_adjust2_window_t1_ParamLimits

0xcf1c,	// (0x0007a086) slider_imed_adjust_pane_ParamLimits

0xcf30,	// (0x0007a09a) slider_imed_adjust_pane_g1_ParamLimits

0xcf40,	// (0x0007a0aa) slider_imed_adjust_pane_g2_ParamLimits

0xcf50,	// (0x0007a0ba) slider_imed_adjust_pane_g3_ParamLimits

0xcf61,	// (0x0007a0cb) slider_imed_adjust_pane_g4_ParamLimits

0xf72e,	// (0x0007c898) slider_imed_adjust_pane_g_ParamLimits

0x49b6,	// (0x00071b20) aid_touch_area_cam4_ParamLimits

0x49b6,	// (0x00071b20) aid_touch_area_cam4

0xa061,	// (0x000771cb) battery_pane_cp01

0x4a89,	// (0x00071bf3) main_camera4_pane_g6_ParamLimits

0x4a89,	// (0x00071bf3) main_camera4_pane_g6

0x4ab3,	// (0x00071c1d) main_camera4_pane_t2_ParamLimits

0x4ab3,	// (0x00071c1d) main_camera4_pane_t2

0x0001,

0xf830,	// (0x0007c99a) main_camera4_pane_t_ParamLimits

0xf830,	// (0x0007c99a) main_camera4_pane_t

0x4ae8,	// (0x00071c52) aid_touch_area_vid4_ParamLimits

0x4ae8,	// (0x00071c52) aid_touch_area_vid4

0x4b3f,	// (0x00071ca9) main_video4_pane_g5_ParamLimits

0x4b3f,	// (0x00071ca9) main_video4_pane_g5

0x4b65,	// (0x00071ccf) vid4_progress_pane_ParamLimits

0x4b65,	// (0x00071ccf) vid4_progress_pane

0xd455,	// (0x0007a5bf) main_cset_slider_pane_g18_ParamLimits

0xd455,	// (0x0007a5bf) main_cset_slider_pane_g18

0xd62f,	// (0x0007a799) cell_cam4_burst_pane_g2_ParamLimits

0xd62f,	// (0x0007a799) cell_cam4_burst_pane_g2

0x0001,

0xf985,	// (0x0007caef) cell_cam4_burst_pane_g_ParamLimits

0xf985,	// (0x0007caef) cell_cam4_burst_pane_g

0xa4ac,	// (0x00077616) bg_cl_pane_ParamLimits

0xa4ac,	// (0x00077616) bg_cl_pane

0x5b60,	// (0x00072cca) cl_header_pane_ParamLimits

0x5b60,	// (0x00072cca) cl_header_pane

0x5b74,	// (0x00072cde) cl_listscroll_pane_ParamLimits

0x5b74,	// (0x00072cde) cl_listscroll_pane

0xd77d,	// (0x0007a8e7) bg_cl_pane_g1

0xd785,	// (0x0007a8ef) bg_cl_pane_g2

0xd78d,	// (0x0007a8f7) bg_cl_pane_g3

0xd795,	// (0x0007a8ff) bg_cl_pane_g4

0xd79d,	// (0x0007a907) bg_cl_pane_g5

0xd7a5,	// (0x0007a90f) bg_cl_pane_g6

0xd7ad,	// (0x0007a917) bg_cl_pane_g7

0xd7b5,	// (0x0007a91f) bg_cl_pane_g8

0xd7bd,	// (0x0007a927) bg_cl_pane_g9

0x0008,

0xf9c0,	// (0x0007cb2a) bg_cl_pane_g

0x5b84,	// (0x00072cee) aid_height_cl_leading_ParamLimits

0x5b84,	// (0x00072cee) aid_height_cl_leading

0x5b90,	// (0x00072cfa) aid_height_cl_text_ParamLimits

0x5b90,	// (0x00072cfa) aid_height_cl_text

0x9a41,	// (0x00076bab) bg_cl_header_pane_ParamLimits

0x9a41,	// (0x00076bab) bg_cl_header_pane

0x5baf,	// (0x00072d19) cl_header_pane_g1_ParamLimits

0x5baf,	// (0x00072d19) cl_header_pane_g1

0x5bc5,	// (0x00072d2f) cl_header_pane_t1_ParamLimits

0x5bc5,	// (0x00072d2f) cl_header_pane_t1

0xd7c5,	// (0x0007a92f) cl_list_pane

0xd428,	// (0x0007a592) hc_scroll_pane_cp01

0xa88d,	// (0x000779f7) bg_cl_header_pane_g1

0xd2f8,	// (0x0007a462) bg_cl_header_pane_g2

0xa8ad,	// (0x00077a17) bg_cl_header_pane_g3

0xd308,	// (0x0007a472) bg_cl_header_pane_g4

0xd300,	// (0x0007a46a) bg_cl_header_pane_g5

0xd53e,	// (0x0007a6a8) bg_cl_header_pane_g6

0xd320,	// (0x0007a48a) bg_cl_header_pane_g7

0xd328,	// (0x0007a492) bg_cl_header_pane_g8

0xd318,	// (0x0007a482) bg_cl_header_pane_g9

0x0008,

0xf9d3,	// (0x0007cb3d) bg_cl_header_pane_g

0x5bde,	// (0x00072d48) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5bde,	// (0x00072d48) hc_cl_list_double_graphic_heading_pane

0x5bf1,	// (0x00072d5b) hc_cl_list_single_graphic_pane_ParamLimits

0x5bf1,	// (0x00072d5b) hc_cl_list_single_graphic_pane

0x5c09,	// (0x00072d73) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5c09,	// (0x00072d73) hc_cl_list_single_graphic_pane_g1

0x5c15,	// (0x00072d7f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5c15,	// (0x00072d7f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e6,	// (0x0007cb50) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e6,	// (0x0007cb50) hc_cl_list_single_graphic_pane_g

0x5c29,	// (0x00072d93) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5c29,	// (0x00072d93) hc_cl_list_single_graphic_pane_t1

0x5c09,	// (0x00072d73) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5c09,	// (0x00072d73) hc_cl_list_double_graphic_heading_pane_g1

0x5c3e,	// (0x00072da8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5c3e,	// (0x00072da8) hc_cl_list_double_graphic_heading_pane_g2

0x5c52,	// (0x00072dbc) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5c52,	// (0x00072dbc) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9eb,	// (0x0007cb55) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9eb,	// (0x0007cb55) hc_cl_list_double_graphic_heading_pane_g

0x5c66,	// (0x00072dd0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5c66,	// (0x00072dd0) hc_cl_list_double_graphic_heading_pane_t1

0x5c7b,	// (0x00072de5) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5c7b,	// (0x00072de5) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f2,	// (0x0007cb5c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f2,	// (0x0007cb5c) hc_cl_list_double_graphic_heading_pane_t

0xa268,	// (0x000773d2) vid4_progress_pane_g1

0xa278,	// (0x000773e2) vid4_progress_pane_g2

0x5c90,	// (0x00072dfa) vid4_progress_pane_g3

0xa288,	// (0x000773f2) vid4_progress_pane_g4

0x0004,

0xf9f7,	// (0x0007cb61) vid4_progress_pane_g

0x5ca2,	// (0x00072e0c) vid4_progress_pane_t1

0xa2a6,	// (0x00077410) vid4_progress_pane_t2

0x0002,

0xfa02,	// (0x0007cb6c) vid4_progress_pane_t

0x5cbc,	// (0x00072e26) wait_bar_pane_cp07

0xc832,	// (0x0007999c) blid_firmament_pane_ParamLimits

0xc875,	// (0x000799df) popup_blid_sat_info2_window_g1

0xc899,	// (0x00079a03) popup_blid_sat_info2_window_t3

0xc8a7,	// (0x00079a11) popup_blid_sat_info2_window_t4

0xc8b5,	// (0x00079a1f) popup_blid_sat_info2_window_t5

0xc8c3,	// (0x00079a2d) popup_blid_sat_info2_window_t6

0xc8d3,	// (0x00079a3d) popup_blid_sat_info2_window_t7

0xc8e1,	// (0x00079a4b) popup_blid_sat_info2_window_t8

0xc8ef,	// (0x00079a59) popup_blid_sat_info2_window_t9

0xc8fd,	// (0x00079a67) popup_blid_sat_info2_window_t10

0xc9c4,	// (0x00079b2e) aid_firma_cardinal_ParamLimits

0xc9d8,	// (0x00079b42) blid_firmament_pane_t1_ParamLimits

0xc9ef,	// (0x00079b59) blid_firmament_pane_t2_ParamLimits

0xca06,	// (0x00079b70) blid_firmament_pane_t3_ParamLimits

0xca1d,	// (0x00079b87) blid_firmament_pane_t4_ParamLimits

0xf620,	// (0x0007c78a) blid_firmament_pane_t_ParamLimits

0xca34,	// (0x00079b9e) blid_sat_info_pane_ParamLimits

0x93da,	// (0x00076544) main_cam_set_pane_ParamLimits

0x411e,	// (0x00071288) aid_size_cell_colour_35_ParamLimits

0x413e,	// (0x000712a8) aid_size_cell_colour_112_ParamLimits

0x415e,	// (0x000712c8) aid_size_cell_effect_ParamLimits

0xb390,	// (0x000784fa) bg_tb_trans_pane_cp02_ParamLimits

0xab0c,	// (0x00077c76) heading_imed_pane_ParamLimits

0x417e,	// (0x000712e8) listscroll_imed_pane_ParamLimits

0xbd11,	// (0x00078e7b) popup_call2_audio_first_window_g5_ParamLimits

0xbd11,	// (0x00078e7b) popup_call2_audio_first_window_g5

0x45c7,	// (0x00071731) aid_size_touch_image3_arrow_left_ParamLimits

0x45c7,	// (0x00071731) aid_size_touch_image3_arrow_left

0x45f3,	// (0x0007175d) aid_size_touch_image3_arrow_right_ParamLimits

0x45f3,	// (0x0007175d) aid_size_touch_image3_arrow_right

0xa2bf,	// (0x00077429) vid4_progress_pane_t3

0x4323,	// (0x0007148d) main_hwr_training_symbol_option_pane_ParamLimits

0x4323,	// (0x0007148d) main_hwr_training_symbol_option_pane

0xd122,	// (0x0007a28c) popup_hwr_training_preview_window_ParamLimits

0xd122,	// (0x0007a28c) popup_hwr_training_preview_window

0x4343,	// (0x000714ad) hwr_training_navi_pane_g5_ParamLimits

0x4343,	// (0x000714ad) hwr_training_navi_pane_g5

0xd2e6,	// (0x0007a450) popup_char_count_window

0x93da,	// (0x00076544) bg_popup_sub_pane_cp20_ParamLimits

0x5639,	// (0x000727a3) list_vitu2_match_list_pane_ParamLimits

0x5645,	// (0x000727af) vitu2_page_scroll_pane_ParamLimits

0x5645,	// (0x000727af) vitu2_page_scroll_pane

0xd7d7,	// (0x0007a941) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7d7,	// (0x0007a941) list_single_hwr_training_symbol_option_pane

0xd7ea,	// (0x0007a954) list_single_hwr_training_symbol_option_pane_g1

0xd7f2,	// (0x0007a95c) list_single_hwr_training_symbol_option_pane_t1

0xd800,	// (0x0007a96a) bg_button_pane_cp023

0xd809,	// (0x0007a973) bg_button_pane_cp024

0xd83c,	// (0x0007a9a6) vitu2_page_scroll_pane_g1

0xd844,	// (0x0007a9ae) vitu2_page_scroll_pane_g2

0x0001,

0xfa09,	// (0x0007cb73) vitu2_page_scroll_pane_g

0xd84c,	// (0x0007a9b6) vitu2_page_scroll_pane_t1

0xd85b,	// (0x0007a9c5) popup_char_count_window_g1

0xd864,	// (0x0007a9ce) popup_char_count_window_g2

0xd86d,	// (0x0007a9d7) popup_char_count_window_g3

0x0002,

0xfa0e,	// (0x0007cb78) popup_char_count_window_g

0xd876,	// (0x0007a9e0) popup_char_count_window_t1

0x93e8,	// (0x00076552) main_vded2_pane

0xcec9,	// (0x0007a033) aid_size_cell_imed_line

0xced3,	// (0x0007a03d) grid_imed_line_width_pane

0xa11b,	// (0x00077285) vid4_indicators_pane_g4

0xd884,	// (0x0007a9ee) cell_imed_line_width_pane_ParamLimits

0xd884,	// (0x0007a9ee) cell_imed_line_width_pane

0xd89a,	// (0x0007aa04) cell_imed_line_width_pane_g1

0xd8a3,	// (0x0007aa0d) cell_imed_line_width_pane_g2

0x0001,

0xfa15,	// (0x0007cb7f) cell_imed_line_width_pane_g

0x5ce3,	// (0x00072e4d) main_vded2_pane_g1_ParamLimits

0x5ce3,	// (0x00072e4d) main_vded2_pane_g1

0x5cfe,	// (0x00072e68) main_vded2_pane_g2_ParamLimits

0x5cfe,	// (0x00072e68) main_vded2_pane_g2

0x0001,

0xfa1a,	// (0x0007cb84) main_vded2_pane_g_ParamLimits

0xfa1a,	// (0x0007cb84) main_vded2_pane_g

0x5d10,	// (0x00072e7a) vded2_slider_pane_ParamLimits

0x5d10,	// (0x00072e7a) vded2_slider_pane

0x5d20,	// (0x00072e8a) aid_size_touch_vded2_end

0x5d2a,	// (0x00072e94) aid_size_touch_vded2_playhead

0xd8ab,	// (0x0007aa15) aid_size_touch_vded2_start

0xd8b3,	// (0x0007aa1d) vded2_slider_bg_pane

0xd8bc,	// (0x0007aa26) vded2_slider_pane_g1

0xd8c5,	// (0x0007aa2f) vded2_slider_pane_g2

0x5d34,	// (0x00072e9e) vded2_slider_pane_g3

0x0002,

0xfa1f,	// (0x0007cb89) vded2_slider_pane_g

0xd8cd,	// (0x0007aa37) vded2_slider_bg_pane_g1

0xd8d6,	// (0x0007aa40) vded2_slider_bg_pane_g2

0xd8df,	// (0x0007aa49) vded2_slider_bg_pane_g3

0x0002,

0xfa26,	// (0x0007cb90) vded2_slider_bg_pane_g

0x24dc,	// (0x0006f646) aid_postcard_touch_down_pane_ParamLimits

0x24dc,	// (0x0006f646) aid_postcard_touch_down_pane

0x24f4,	// (0x0006f65e) aid_postcard_touch_up_pane_ParamLimits

0x24f4,	// (0x0006f65e) aid_postcard_touch_up_pane

0x93e8,	// (0x00076552) main_blid2_pane

0x9c5a,	// (0x00076dc4) popup_blid2_search_window

0x93b2,	// (0x0007651c) blid2_gps_pane

0x93b2,	// (0x0007651c) blid2_navig_pane

0x93b2,	// (0x0007651c) blid2_search_pane

0x93b2,	// (0x0007651c) blid2_tripm_pane

0x5d3f,	// (0x00072ea9) blid2_search_pane_g1_ParamLimits

0x5d3f,	// (0x00072ea9) blid2_search_pane_g1

0x5d52,	// (0x00072ebc) blid2_search_pane_t1_ParamLimits

0x5d52,	// (0x00072ebc) blid2_search_pane_t1

0x5d64,	// (0x00072ece) aid_size_cell_blid2_gps_ParamLimits

0x5d64,	// (0x00072ece) aid_size_cell_blid2_gps

0x5d7c,	// (0x00072ee6) blid2_gps_pane_g1_ParamLimits

0x5d7c,	// (0x00072ee6) blid2_gps_pane_g1

0x5d90,	// (0x00072efa) grid_blid2_satellite_pane_ParamLimits

0x5d90,	// (0x00072efa) grid_blid2_satellite_pane

0x5da8,	// (0x00072f12) blid2_navig_pane_g1_ParamLimits

0x5da8,	// (0x00072f12) blid2_navig_pane_g1

0x5db4,	// (0x00072f1e) blid2_navig_pane_t1_ParamLimits

0x5db4,	// (0x00072f1e) blid2_navig_pane_t1

0x5dcf,	// (0x00072f39) blid2_navig_pane_t2_ParamLimits

0x5dcf,	// (0x00072f39) blid2_navig_pane_t2

0x0001,

0xfa2d,	// (0x0007cb97) blid2_navig_pane_t_ParamLimits

0xfa2d,	// (0x0007cb97) blid2_navig_pane_t

0x5dea,	// (0x00072f54) blid2_navig_ring_pane_ParamLimits

0x5dea,	// (0x00072f54) blid2_navig_ring_pane

0x5e05,	// (0x00072f6f) blid2_speed_pane_ParamLimits

0x5e05,	// (0x00072f6f) blid2_speed_pane

0x5e11,	// (0x00072f7b) blid2_tripm_pane_g1_ParamLimits

0x5e11,	// (0x00072f7b) blid2_tripm_pane_g1

0x5e2c,	// (0x00072f96) blid2_tripm_pane_g2_ParamLimits

0x5e2c,	// (0x00072f96) blid2_tripm_pane_g2

0x5e3f,	// (0x00072fa9) blid2_tripm_pane_g3_ParamLimits

0x5e3f,	// (0x00072fa9) blid2_tripm_pane_g3

0x5e50,	// (0x00072fba) blid2_tripm_pane_g4_ParamLimits

0x5e50,	// (0x00072fba) blid2_tripm_pane_g4

0x5e61,	// (0x00072fcb) blid2_tripm_pane_g5_ParamLimits

0x5e61,	// (0x00072fcb) blid2_tripm_pane_g5

0x0005,

0xfa32,	// (0x0007cb9c) blid2_tripm_pane_g_ParamLimits

0xfa32,	// (0x0007cb9c) blid2_tripm_pane_g

0x5e87,	// (0x00072ff1) blid2_tripm_pane_t1_ParamLimits

0x5e87,	// (0x00072ff1) blid2_tripm_pane_t1

0x5ea0,	// (0x0007300a) blid2_tripm_pane_t2_ParamLimits

0x5ea0,	// (0x0007300a) blid2_tripm_pane_t2

0x5eb9,	// (0x00073023) blid2_tripm_pane_t3_ParamLimits

0x5eb9,	// (0x00073023) blid2_tripm_pane_t3

0x0003,

0xfa3f,	// (0x0007cba9) blid2_tripm_pane_t_ParamLimits

0xfa3f,	// (0x0007cba9) blid2_tripm_pane_t

0x5f00,	// (0x0007306a) cell_blid2_satellite_pane_ParamLimits

0x5f00,	// (0x0007306a) cell_blid2_satellite_pane

0x5f1c,	// (0x00073086) cell_blid2_satellite_pane_g1

0xd8e8,	// (0x0007aa52) cell_blid2_satellite_pane_t1

0xa689,	// (0x000777f3) blid2_speed_pane_g1

0xd8f6,	// (0x0007aa60) blid2_speed_pane_t1

0xd904,	// (0x0007aa6e) blid2_speed_pane_t2

0x0001,

0xfa48,	// (0x0007cbb2) blid2_speed_pane_t

0xa689,	// (0x000777f3) blid2_navig_ring_pane_g1

0x5f25,	// (0x0007308f) blid2_navig_ring_pane_g2

0x5f2d,	// (0x00073097) blid2_navig_ring_pane_g3

0x5f35,	// (0x0007309f) blid2_navig_ring_pane_g4

0x5f3d,	// (0x000730a7) blid2_navig_ring_pane_g5

0x0004,

0xfa4d,	// (0x0007cbb7) blid2_navig_ring_pane_g

0x93b2,	// (0x0007651c) bg_popup_window_pane_cp011

0xd912,	// (0x0007aa7c) popup_blid2_search_window_g1

0xd91a,	// (0x0007aa84) popup_blid2_search_window_t1

0xd928,	// (0x0007aa92) popup_blid2_search_window_t2

0x0001,

0xfa58,	// (0x0007cbc2) popup_blid2_search_window_t

0xa79c,	// (0x00077906) main_browser_pane_g1

0xa4ac,	// (0x00077616) main_browser_pane_ParamLimits

0x93da,	// (0x00076544) bg_button_pane_cp011_ParamLimits

0x4e99,	// (0x00072003) cell_vitu2_function_pane_g1_ParamLimits

0xb390,	// (0x000784fa) bg_popup_sub_pane_cp22_ParamLimits

0x57dc,	// (0x00072946) input_focus_pane_cp08_ParamLimits

0x57f8,	// (0x00072962) popup_vitu2_query_button_pane_ParamLimits

0x57f8,	// (0x00072962) popup_vitu2_query_button_pane

0x5807,	// (0x00072971) popup_vitu2_query_input_button_pane

0xd579,	// (0x0007a6e3) popup_vitu2_query_window_g1_ParamLimits

0x5811,	// (0x0007297b) popup_vitu2_query_window_g2_ParamLimits

0xf959,	// (0x0007cac3) popup_vitu2_query_window_g_ParamLimits

0x93b2,	// (0x0007651c) bg_button_pane_cp026

0x5f45,	// (0x000730af) popup_vitu2_query_input_button_pane_g1

0x93b2,	// (0x0007651c) bg_button_pane_cp025

0xd936,	// (0x0007aaa0) popup_vitu2_query_button_pane_t1

0x350c,	// (0x00070676) main_mp3_pane_t6

0x351a,	// (0x00070684) popup_slider_window_cp01

0xa07f,	// (0x000771e9) cam4_battery_pane

0xa0d4,	// (0x0007723e) cam4_battery_pane_cp02

0xa260,	// (0x000773ca) cam4_battery_pane_cp01

0xa260,	// (0x000773ca) cam4_battery_pane_cp03

0xd2a2,	// (0x0007a40c) cam4_battery_pane_g1

0xa689,	// (0x000777f3) cam4_battery_pane_g2

0x0001,

0xfa5d,	// (0x0007cbc7) cam4_battery_pane_g

0xc90b,	// (0x00079a75) popup_blid_sat_info2_window_t11

0x2052,	// (0x0006f1bc) aid_size_touch_mv_arrow_left_ParamLimits

0x207b,	// (0x0006f1e5) aid_size_touch_mv_arrow_right_ParamLimits

0xaf10,	// (0x0007807a) navi_pane_g1_ParamLimits

0x20ba,	// (0x0006f224) navi_pane_g2_ParamLimits

0x20e8,	// (0x0006f252) navi_pane_g3_ParamLimits

0xf334,	// (0x0007c49e) navi_pane_g_ParamLimits

0x2142,	// (0x0006f2ac) navi_pane_mv_t1_ParamLimits

0x418a,	// (0x000712f4) grid_imed_effect_pane_ParamLimits

0x0c43,	// (0x0006ddad) aid_placing_vt_slider_lsc

0xa6d8,	// (0x00077842) aid_placing_vt_slider_prt

0x9a41,	// (0x00076bab) bg_tb_trans_pane_cp01_ParamLimits

0xcb73,	// (0x00079cdd) popup_image_details_window_g1_ParamLimits

0xcb86,	// (0x00079cf0) popup_image_details_window_g2_ParamLimits

0xcb9b,	// (0x00079d05) popup_image_details_window_g3_ParamLimits

0xcb9b,	// (0x00079d05) popup_image_details_window_g3

0xf660,	// (0x0007c7ca) popup_image_details_window_g_ParamLimits

0xcbaf,	// (0x00079d19) popup_image_details_window_t1_ParamLimits

0xcbc1,	// (0x00079d2b) popup_image_details_window_t2_ParamLimits

0xcbda,	// (0x00079d44) popup_image_details_window_t3_ParamLimits

0xcbee,	// (0x00079d58) popup_image_details_window_t4_ParamLimits

0xcc09,	// (0x00079d73) popup_image_details_window_t5_ParamLimits

0xf667,	// (0x0007c7d1) popup_image_details_window_t_ParamLimits

0x5b9c,	// (0x00072d06) cl_header_name_pane_ParamLimits

0x5b9c,	// (0x00072d06) cl_header_name_pane

0x5f4d,	// (0x000730b7) cl_header_name_pane_t1_ParamLimits

0x5f4d,	// (0x000730b7) cl_header_name_pane_t1

0x5f6e,	// (0x000730d8) cl_header_name_pane_t2_ParamLimits

0x5f6e,	// (0x000730d8) cl_header_name_pane_t2

0x5fb0,	// (0x0007311a) cl_header_name_pane_t3_ParamLimits

0x5fb0,	// (0x0007311a) cl_header_name_pane_t3

0x0002,

0xfa62,	// (0x0007cbcc) cl_header_name_pane_t_ParamLimits

0xfa62,	// (0x0007cbcc) cl_header_name_pane_t

0x2113,	// (0x0006f27d) navi_pane_mv_g2_ParamLimits

0xd2ce,	// (0x0007a438) field_vitu2_entry_pane_g1_ParamLimits

0xd2da,	// (0x0007a444) field_vitu2_entry_pane_g2_ParamLimits

0xb36e,	// (0x000784d8) field_vitu2_entry_pane_g3_ParamLimits

0xb36e,	// (0x000784d8) field_vitu2_entry_pane_g3

0xf862,	// (0x0007c9cc) field_vitu2_entry_pane_g_ParamLimits

0x4e15,	// (0x00071f7f) cell_vitu2_itu_pane_g1_ParamLimits

0x4e2d,	// (0x00071f97) cell_vitu2_itu_pane_g2_ParamLimits

0x4e2d,	// (0x00071f97) cell_vitu2_itu_pane_g2

0x0001,

0xf86e,	// (0x0007c9d8) cell_vitu2_itu_pane_g_ParamLimits

0xf86e,	// (0x0007c9d8) cell_vitu2_itu_pane_g

0x93da,	// (0x00076544) bg_vkb2_func_pane_cp05_ParamLimits

0x93da,	// (0x00076544) bg_vkb2_func_pane_cp05

0x93da,	// (0x00076544) bg_vkb2_func_pane_cp03

0x93da,	// (0x00076544) bg_vkb2_func_pane_cp04

0x93da,	// (0x00076544) bg_vkb2_func_pane_cp10_ParamLimits

0x93da,	// (0x00076544) bg_vkb2_func_pane_cp10

0x5b3b,	// (0x00072ca5) bg_vkb2_func_pane_cp08

0x5b10,	// (0x00072c7a) bg_vkb2_func_pane_cp06

0x5b1c,	// (0x00072c86) bg_vkb2_func_pane_cp07

0xd812,	// (0x0007a97c) bg_vkb2_func_pane_cp11_ParamLimits

0xd812,	// (0x0007a97c) bg_vkb2_func_pane_cp11

0xd827,	// (0x0007a991) bg_vkb2_func_pane_cp12_ParamLimits

0xd827,	// (0x0007a991) bg_vkb2_func_pane_cp12

0x93b2,	// (0x0007651c) bg_vkb2_func_pane_cp09

0xd2f8,	// (0x0007a462) bg_vkb2_func_pane_g1

0xa8ad,	// (0x00077a17) bg_vkb2_func_pane_g2

0xd300,	// (0x0007a46a) bg_vkb2_func_pane_g3

0xd308,	// (0x0007a472) bg_vkb2_func_pane_g4

0xd53e,	// (0x0007a6a8) bg_vkb2_func_pane_g5

0xd320,	// (0x0007a48a) bg_vkb2_func_pane_g6

0xd328,	// (0x0007a492) bg_vkb2_func_pane_g7

0xd318,	// (0x0007a482) bg_vkb2_func_pane_g8

0xa88d,	// (0x000779f7) bg_vkb2_func_pane_g9

0x0008,

0xfa69,	// (0x0007cbd3) bg_vkb2_func_pane_g

0x5e75,	// (0x00072fdf) blid2_tripm_pane_g6_ParamLimits

0x5e75,	// (0x00072fdf) blid2_tripm_pane_g6

0xd1e0,	// (0x0007a34a) mp4_progress_pane_g1

0x5eec,	// (0x00073056) blid2_tripm_values_pane_ParamLimits

0x5eec,	// (0x00073056) blid2_tripm_values_pane

0x5fe1,	// (0x0007314b) blid2_tripm_values_pane_t1

0x5fef,	// (0x00073159) blid2_tripm_values_pane_t2

0xd944,	// (0x0007aaae) blid2_tripm_values_pane_t3

0x5ffd,	// (0x00073167) blid2_tripm_values_pane_t4

0x600b,	// (0x00073175) blid2_tripm_values_pane_t5

0x6019,	// (0x00073183) blid2_tripm_values_pane_t6

0xd952,	// (0x0007aabc) blid2_tripm_values_pane_t7

0x6027,	// (0x00073191) blid2_tripm_values_pane_t8

0x6035,	// (0x0007319f) blid2_tripm_values_pane_t9

0x0008,

0xfa7c,	// (0x0007cbe6) blid2_tripm_values_pane_t

0x0c80,	// (0x0006ddea) call_video_pane_t1_ParamLimits

0x0c9a,	// (0x0006de04) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0007c34c) call_video_pane_t_ParamLimits

0x245a,	// (0x0006f5c4) msg_header_pane_g1_ParamLimits

0xb447,	// (0x000785b1) msg_header_pane_g2_ParamLimits

0xb447,	// (0x000785b1) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x0007c541) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x0007c541) msg_header_pane_g

0xa4ac,	// (0x00077616) main_clock2_pane_ParamLimits

0x3e87,	// (0x00070ff1) grid_clock2_toolbar_pane_ParamLimits

0x3e87,	// (0x00070ff1) grid_clock2_toolbar_pane

0x3e87,	// (0x00070ff1) listscroll_clock2_pane_ParamLimits

0x3e87,	// (0x00070ff1) listscroll_clock2_pane

0x3f66,	// (0x000710d0) main_clock2_pane_t3_ParamLimits

0x3f66,	// (0x000710d0) main_clock2_pane_t3

0x3f89,	// (0x000710f3) main_clock2_pane_t4_ParamLimits

0x3f89,	// (0x000710f3) main_clock2_pane_t4

0xd960,	// (0x0007aaca) cell_clock2_toolbar_pane

0xd968,	// (0x0007aad2) cell_clock2_toolbar_pane_cp01

0xd968,	// (0x0007aad2) cell_clock2_toolbar_pane_cp02

0xd970,	// (0x0007aada) cell_clock2_toolbar_pane_cp03

0xd978,	// (0x0007aae2) list_clock2_pane

0xae76,	// (0x00077fe0) scroll_pane_cp10

0xd980,	// (0x0007aaea) list_single_clock2_pane_ParamLimits

0xd980,	// (0x0007aaea) list_single_clock2_pane

0xa653,	// (0x000777bd) list_highlight_pane_cp08

0xd98d,	// (0x0007aaf7) list_single_clock2_pane_t1

0xd99b,	// (0x0007ab05) list_single_clock2_pane_t2

0x0001,

0xfa8f,	// (0x0007cbf9) list_single_clock2_pane_t

0x93b2,	// (0x0007651c) bg_button_pane_cp10

0xd9a9,	// (0x0007ab13) cell_clock2_toolbar_pane_g1

0x2468,	// (0x0006f5d2) aid_main_viewer_pane_g1_ParamLimits

0x2468,	// (0x0006f5d2) aid_main_viewer_pane_g1

0x2476,	// (0x0006f5e0) aid_main_viewer_pane_g2_ParamLimits

0x2476,	// (0x0006f5e0) aid_main_viewer_pane_g2

0x2484,	// (0x0006f5ee) aid_main_viewer_pane_g3_ParamLimits

0x2484,	// (0x0006f5ee) aid_main_viewer_pane_g3

0x2493,	// (0x0006f5fd) aid_main_viewer_pane_g4_ParamLimits

0x2493,	// (0x0006f5fd) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x0007c552) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x0007c552) aid_main_viewer_pane_g

0x2e2f,	// (0x0006ff99) main_calc_pane_ParamLimits

0x2e53,	// (0x0006ffbd) main_dialer2_pane_ParamLimits

0x93e8,	// (0x00076552) main_cam6_pane

0x93e8,	// (0x00076552) main_vid6_pane

0x3e93,	// (0x00070ffd) listscroll_gen_pane_cp06_ParamLimits

0x3e93,	// (0x00070ffd) listscroll_gen_pane_cp06

0x3fac,	// (0x00071116) main_clock2_pane_t5_ParamLimits

0x3fac,	// (0x00071116) main_clock2_pane_t5

0x400a,	// (0x00071174) aid_call2_pane_cp10_ParamLimits

0x401c,	// (0x00071186) aid_call_pane_cp10_ParamLimits

0xaee5,	// (0x0007804f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xaee5,	// (0x0007804f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x402e,	// (0x00071198) popup_clock_analogue_window_cp10_g3_ParamLimits

0x402e,	// (0x00071198) popup_clock_analogue_window_cp10_g4_ParamLimits

0xaee5,	// (0x0007804f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71c,	// (0x0007c886) popup_clock_analogue_window_cp10_g_ParamLimits

0x4044,	// (0x000711ae) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4574,	// (0x000716de) cell_dialer2_keypad_pane_g2_ParamLimits

0x4574,	// (0x000716de) cell_dialer2_keypad_pane_g2

0x0001,

0xf801,	// (0x0007c96b) cell_dialer2_keypad_pane_g_ParamLimits

0xf801,	// (0x0007c96b) cell_dialer2_keypad_pane_g

0x4590,	// (0x000716fa) cell_dialer2_keypad_pane_t1

0x51c1,	// (0x0007232b) main_cset_text2_pane_ParamLimits

0x51c1,	// (0x0007232b) main_cset_text2_pane

0xd771,	// (0x0007a8db) area_vitu2_query_pane_g1_ParamLimits

0x5aa7,	// (0x00072c11) area_vitu2_query_pane_g2_ParamLimits

0xf9ac,	// (0x0007cb16) area_vitu2_query_pane_g_ParamLimits

0xa23c,	// (0x000773a6) area_vitu2_query_pane_t7_ParamLimits

0xa23c,	// (0x000773a6) area_vitu2_query_pane_t7

0x5b10,	// (0x00072c7a) bg_button_pane_cp018_ParamLimits

0x5b1c,	// (0x00072c86) bg_button_pane_cp021_ParamLimits

0x5b28,	// (0x00072c92) bg_button_pane_cp022_ParamLimits

0x5b3b,	// (0x00072ca5) bg_vkb2_func_pane_cp08_ParamLimits

0x5b10,	// (0x00072c7a) bg_vkb2_func_pane_cp06_ParamLimits

0x5b1c,	// (0x00072c86) bg_vkb2_func_pane_cp07_ParamLimits

0x5b4f,	// (0x00072cb9) input_focus_pane_cp09_ParamLimits

0xa2ed,	// (0x00077457) cam6_autofocus_pane_ParamLimits

0xa2ed,	// (0x00077457) cam6_autofocus_pane

0x6043,	// (0x000731ad) cam6_image_uncrop_pane_ParamLimits

0x6043,	// (0x000731ad) cam6_image_uncrop_pane

0x6053,	// (0x000731bd) cam6_indi_pane_ParamLimits

0x6053,	// (0x000731bd) cam6_indi_pane

0x6069,	// (0x000731d3) cam6_mode_pane_ParamLimits

0x6069,	// (0x000731d3) cam6_mode_pane

0x607b,	// (0x000731e5) cam6_timer_pane_ParamLimits

0x607b,	// (0x000731e5) cam6_timer_pane

0x6087,	// (0x000731f1) cam6_zoom_pane_ParamLimits

0x6087,	// (0x000731f1) cam6_zoom_pane

0x6095,	// (0x000731ff) cam6_mode_pane_g1_ParamLimits

0x6095,	// (0x000731ff) cam6_mode_pane_g1

0x60a5,	// (0x0007320f) cam6_mode_pane_g2_ParamLimits

0x60a5,	// (0x0007320f) cam6_mode_pane_g2

0x60b5,	// (0x0007321f) cam6_mode_pane_g3_ParamLimits

0x60b5,	// (0x0007321f) cam6_mode_pane_g3

0x60c5,	// (0x0007322f) cam6_mode_pane_g4_ParamLimits

0x60c5,	// (0x0007322f) cam6_mode_pane_g4

0x0003,

0xfa94,	// (0x0007cbfe) cam6_mode_pane_g_ParamLimits

0xfa94,	// (0x0007cbfe) cam6_mode_pane_g

0xd294,	// (0x0007a3fe) bg_tb_trans_pane_cp08_ParamLimits

0xd294,	// (0x0007a3fe) bg_tb_trans_pane_cp08

0xd9b1,	// (0x0007ab1b) cam6_battery_pane_ParamLimits

0xd9b1,	// (0x0007ab1b) cam6_battery_pane

0xd9c7,	// (0x0007ab31) cam6_indi_pane_g1_ParamLimits

0xd9c7,	// (0x0007ab31) cam6_indi_pane_g1

0xd9d9,	// (0x0007ab43) cam6_indi_pane_g2_ParamLimits

0xd9d9,	// (0x0007ab43) cam6_indi_pane_g2

0xd9eb,	// (0x0007ab55) cam6_indi_pane_g3_ParamLimits

0xd9eb,	// (0x0007ab55) cam6_indi_pane_g3

0x0002,

0xfa9d,	// (0x0007cc07) cam6_indi_pane_g_ParamLimits

0xfa9d,	// (0x0007cc07) cam6_indi_pane_g

0xd9fd,	// (0x0007ab67) cam6_indi_pane_t1_ParamLimits

0xd9fd,	// (0x0007ab67) cam6_indi_pane_t1

0x4bb2,	// (0x00071d1c) cam6_autofocus_pane_g1

0x4baa,	// (0x00071d14) cam6_autofocus_pane_g2

0x4bc2,	// (0x00071d2c) cam6_autofocus_pane_g3

0x4bba,	// (0x00071d24) cam6_autofocus_pane_g4

0x0003,

0xfaa4,	// (0x0007cc0e) cam6_autofocus_pane_g

0xda23,	// (0x0007ab8d) cam6_timer_pane_g1

0xda2b,	// (0x0007ab95) cam6_timer_pane_t1

0xda39,	// (0x0007aba3) cam6_zoom_cont_pane

0xda41,	// (0x0007abab) cam6_zoom_pane_g1

0xda4a,	// (0x0007abb4) cam6_zoom_pane_g2

0x60d5,	// (0x0007323f) cam6_zoom_pane_g3

0x0002,

0xfaad,	// (0x0007cc17) cam6_zoom_pane_g

0xa689,	// (0x000777f3) cam6_battery_pane_g1

0xa689,	// (0x000777f3) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x0007c502) cam6_battery_pane_g

0xda41,	// (0x0007abab) cam6_zoom_cont_pane_g1

0xda4a,	// (0x0007abb4) cam6_zoom_cont_pane_g2

0xda53,	// (0x0007abbd) cam6_zoom_cont_pane_g3

0x0002,

0xfab4,	// (0x0007cc1e) cam6_zoom_cont_pane_g

0x60f3,	// (0x0007325d) cam6_mode_pane_cp_ParamLimits

0x60f3,	// (0x0007325d) cam6_mode_pane_cp

0x6105,	// (0x0007326f) cam6_zoom_pane_cp_ParamLimits

0x6105,	// (0x0007326f) cam6_zoom_pane_cp

0x6113,	// (0x0007327d) vid6_image_uncrop_cif_pane_ParamLimits

0x6113,	// (0x0007327d) vid6_image_uncrop_cif_pane

0x6123,	// (0x0007328d) vid6_image_uncrop_nhd_pane_ParamLimits

0x6123,	// (0x0007328d) vid6_image_uncrop_nhd_pane

0x6132,	// (0x0007329c) vid6_image_uncrop_vga_pane_ParamLimits

0x6132,	// (0x0007329c) vid6_image_uncrop_vga_pane

0x6141,	// (0x000732ab) vid6_image_uncrop_wvga_pane_ParamLimits

0x6141,	// (0x000732ab) vid6_image_uncrop_wvga_pane

0x6150,	// (0x000732ba) vid6_indi_pane_ParamLimits

0x6150,	// (0x000732ba) vid6_indi_pane

0xd294,	// (0x0007a3fe) bg_tb_trans_pane_cp09_ParamLimits

0xd294,	// (0x0007a3fe) bg_tb_trans_pane_cp09

0xda6b,	// (0x0007abd5) cam6_battery_pane_cp_ParamLimits

0xda6b,	// (0x0007abd5) cam6_battery_pane_cp

0xda77,	// (0x0007abe1) vid6_indi_pane_g1_ParamLimits

0xda77,	// (0x0007abe1) vid6_indi_pane_g1

0xda89,	// (0x0007abf3) vid6_indi_pane_g2_ParamLimits

0xda89,	// (0x0007abf3) vid6_indi_pane_g2

0xda9b,	// (0x0007ac05) vid6_indi_pane_g3_ParamLimits

0xda9b,	// (0x0007ac05) vid6_indi_pane_g3

0xdab2,	// (0x0007ac1c) vid6_indi_pane_g4_ParamLimits

0xdab2,	// (0x0007ac1c) vid6_indi_pane_g4

0xdac9,	// (0x0007ac33) vid6_indi_pane_g5_ParamLimits

0xdac9,	// (0x0007ac33) vid6_indi_pane_g5

0x0004,

0xfabb,	// (0x0007cc25) vid6_indi_pane_g_ParamLimits

0xfabb,	// (0x0007cc25) vid6_indi_pane_g

0xdae3,	// (0x0007ac4d) vid6_indi_pane_t1_ParamLimits

0xdae3,	// (0x0007ac4d) vid6_indi_pane_t1

0xdaf9,	// (0x0007ac63) vid6_indi_pane_t2_ParamLimits

0xdaf9,	// (0x0007ac63) vid6_indi_pane_t2

0xdb21,	// (0x0007ac8b) vid6_indi_pane_t3_ParamLimits

0xdb21,	// (0x0007ac8b) vid6_indi_pane_t3

0xdb49,	// (0x0007acb3) vid6_indi_pane_t4_ParamLimits

0xdb49,	// (0x0007acb3) vid6_indi_pane_t4

0x0003,

0xfac6,	// (0x0007cc30) vid6_indi_pane_t_ParamLimits

0xfac6,	// (0x0007cc30) vid6_indi_pane_t

0xdb6d,	// (0x0007acd7) wait_bar_pane_cp08

0x6168,	// (0x000732d2) main_cset_text2_pane_t1_ParamLimits

0x6168,	// (0x000732d2) main_cset_text2_pane_t1

0x60de,	// (0x00073248) listscroll_gen_pane_cp06_t1_ParamLimits

0x60de,	// (0x00073248) listscroll_gen_pane_cp06_t1

0x93e8,	// (0x00076552) main_cam6_set_pane

0xd2c0,	// (0x0007a42a) bg_tb_trans_pane_cp06_ParamLimits

0xa087,	// (0x000771f1) cam4_indicators_pane_g1_ParamLimits

0xa098,	// (0x00077202) cam4_indicators_pane_g2_ParamLimits

0xf83e,	// (0x0007c9a8) cam4_indicators_pane_g_ParamLimits

0xa0b0,	// (0x0007721a) cam4_indicators_pane_t1_ParamLimits

0x93da,	// (0x00076544) bg_tb_trans_pane_cp07_ParamLimits

0xa0de,	// (0x00077248) vid4_indicators_pane_g1_ParamLimits

0xa0f4,	// (0x0007725e) vid4_indicators_pane_g2_ParamLimits

0xa108,	// (0x00077272) vid4_indicators_pane_g3_ParamLimits

0xa11b,	// (0x00077285) vid4_indicators_pane_g4_ParamLimits

0xf850,	// (0x0007c9ba) vid4_indicators_pane_g_ParamLimits

0xa139,	// (0x000772a3) vid4_indicators_pane_t1_ParamLimits

0xa268,	// (0x000773d2) vid4_progress_pane_g1_ParamLimits

0xa278,	// (0x000773e2) vid4_progress_pane_g2_ParamLimits

0x5c90,	// (0x00072dfa) vid4_progress_pane_g3_ParamLimits

0xa288,	// (0x000773f2) vid4_progress_pane_g4_ParamLimits

0xf9f7,	// (0x0007cb61) vid4_progress_pane_g_ParamLimits

0x5ca2,	// (0x00072e0c) vid4_progress_pane_t1_ParamLimits

0xa2a6,	// (0x00077410) vid4_progress_pane_t2_ParamLimits

0xa2bf,	// (0x00077429) vid4_progress_pane_t3_ParamLimits

0xfa02,	// (0x0007cb6c) vid4_progress_pane_t_ParamLimits

0x5cbc,	// (0x00072e26) wait_bar_pane_cp07_ParamLimits

0x6189,	// (0x000732f3) main_cam6_set_pane_g2_ParamLimits

0x6189,	// (0x000732f3) main_cam6_set_pane_g2

0x61af,	// (0x00073319) main_cset6_listscroll_pane_ParamLimits

0x61af,	// (0x00073319) main_cset6_listscroll_pane

0x61cd,	// (0x00073337) main_cset6_slider_pane_ParamLimits

0x61cd,	// (0x00073337) main_cset6_slider_pane

0x61e3,	// (0x0007334d) main_cset6_text2_pane_ParamLimits

0x61e3,	// (0x0007334d) main_cset6_text2_pane

0xdb7c,	// (0x0007ace6) main_cset6_text_pane

0xdb84,	// (0x0007acee) main_cset_list_pane_copy1_ParamLimits

0xdb84,	// (0x0007acee) main_cset_list_pane_copy1

0xdb94,	// (0x0007acfe) scroll_pane_cp028_copy1

0x61f1,	// (0x0007335b) cset_list_set_pane_copy1

0x6205,	// (0x0007336f) aid_position_infowindow_above_copy1

0x620d,	// (0x00073377) aid_position_infowindow_below_copy1

0x6215,	// (0x0007337f) cset_list_set_pane_g1_copy1

0x621d,	// (0x00073387) cset_list_set_pane_g3_copy1_ParamLimits

0x621d,	// (0x00073387) cset_list_set_pane_g3_copy1

0x622c,	// (0x00073396) cset_list_set_pane_t1_copy1_ParamLimits

0x622c,	// (0x00073396) cset_list_set_pane_t1_copy1

0x9a41,	// (0x00076bab) list_highlight_pane_cp021_copy1_ParamLimits

0x9a41,	// (0x00076bab) list_highlight_pane_cp021_copy1

0xdb9d,	// (0x0007ad07) cset6_slider_pane_ParamLimits

0xdb9d,	// (0x0007ad07) cset6_slider_pane

0xdbc9,	// (0x0007ad33) main_cset6_slider_pane_g1_ParamLimits

0xdbc9,	// (0x0007ad33) main_cset6_slider_pane_g1

0x6241,	// (0x000733ab) main_cset6_slider_pane_g2_ParamLimits

0x6241,	// (0x000733ab) main_cset6_slider_pane_g2

0xdbf1,	// (0x0007ad5b) main_cset6_slider_pane_g3_ParamLimits

0xdbf1,	// (0x0007ad5b) main_cset6_slider_pane_g3

0x6269,	// (0x000733d3) main_cset6_slider_pane_g4_ParamLimits

0x6269,	// (0x000733d3) main_cset6_slider_pane_g4

0x6275,	// (0x000733df) main_cset6_slider_pane_g5_ParamLimits

0x6275,	// (0x000733df) main_cset6_slider_pane_g5

0xd43d,	// (0x0007a5a7) main_cset6_slider_pane_g7_ParamLimits

0xd43d,	// (0x0007a5a7) main_cset6_slider_pane_g7

0xd449,	// (0x0007a5b3) main_cset6_slider_pane_g8_ParamLimits

0xd449,	// (0x0007a5b3) main_cset6_slider_pane_g8

0x5269,	// (0x000723d3) main_cset6_slider_pane_g9_ParamLimits

0x5269,	// (0x000723d3) main_cset6_slider_pane_g9

0x5275,	// (0x000723df) main_cset6_slider_pane_g10_ParamLimits

0x5275,	// (0x000723df) main_cset6_slider_pane_g10

0x5281,	// (0x000723eb) main_cset6_slider_pane_g11_ParamLimits

0x5281,	// (0x000723eb) main_cset6_slider_pane_g11

0x528d,	// (0x000723f7) main_cset6_slider_pane_g12_ParamLimits

0x528d,	// (0x000723f7) main_cset6_slider_pane_g12

0x5299,	// (0x00072403) main_cset6_slider_pane_g13_ParamLimits

0x5299,	// (0x00072403) main_cset6_slider_pane_g13

0x52a5,	// (0x0007240f) main_cset6_slider_pane_g14_ParamLimits

0x52a5,	// (0x0007240f) main_cset6_slider_pane_g14

0x6283,	// (0x000733ed) main_cset6_slider_pane_g15_ParamLimits

0x6283,	// (0x000733ed) main_cset6_slider_pane_g15

0x52c9,	// (0x00072433) main_cset6_slider_pane_g16_ParamLimits

0x52c9,	// (0x00072433) main_cset6_slider_pane_g16

0x52d7,	// (0x00072441) main_cset6_slider_pane_g17_ParamLimits

0x52d7,	// (0x00072441) main_cset6_slider_pane_g17

0x0011,

0xfacf,	// (0x0007cc39) main_cset6_slider_pane_g_ParamLimits

0xfacf,	// (0x0007cc39) main_cset6_slider_pane_g

0xdbfd,	// (0x0007ad67) main_cset6_slider_pane_t1_ParamLimits

0xdbfd,	// (0x0007ad67) main_cset6_slider_pane_t1

0x62b3,	// (0x0007341d) main_cset6_slider_pane_t2_ParamLimits

0x62b3,	// (0x0007341d) main_cset6_slider_pane_t2

0x62de,	// (0x00073448) main_cset6_slider_pane_t3_ParamLimits

0x62de,	// (0x00073448) main_cset6_slider_pane_t3

0x6309,	// (0x00073473) main_cset6_slider_pane_t4_ParamLimits

0x6309,	// (0x00073473) main_cset6_slider_pane_t4

0x6334,	// (0x0007349e) main_cset6_slider_pane_t5_ParamLimits

0x6334,	// (0x0007349e) main_cset6_slider_pane_t5

0xdc3e,	// (0x0007ada8) main_cset6_slider_pane_t7_ParamLimits

0xdc3e,	// (0x0007ada8) main_cset6_slider_pane_t7

0x6361,	// (0x000734cb) main_cset6_slider_pane_t8_ParamLimits

0x6361,	// (0x000734cb) main_cset6_slider_pane_t8

0x6385,	// (0x000734ef) main_cset6_slider_pane_t9_ParamLimits

0x6385,	// (0x000734ef) main_cset6_slider_pane_t9

0x63a9,	// (0x00073513) main_cset6_slider_pane_t10_ParamLimits

0x63a9,	// (0x00073513) main_cset6_slider_pane_t10

0x63cd,	// (0x00073537) main_cset6_slider_pane_t11_ParamLimits

0x63cd,	// (0x00073537) main_cset6_slider_pane_t11

0xdc74,	// (0x0007adde) main_cset6_slider_pane_t14_ParamLimits

0xdc74,	// (0x0007adde) main_cset6_slider_pane_t14

0xdcad,	// (0x0007ae17) main_cset6_slider_pane_t15_ParamLimits

0xdcad,	// (0x0007ae17) main_cset6_slider_pane_t15

0x000b,

0xfaf4,	// (0x0007cc5e) main_cset6_slider_pane_t_ParamLimits

0xfaf4,	// (0x0007cc5e) main_cset6_slider_pane_t

0xdce6,	// (0x0007ae50) cset_slider_pane_g1_copy1

0xdcef,	// (0x0007ae59) cset_slider_pane_g2_copy1

0xdcf8,	// (0x0007ae62) cset_slider_pane_g3_copy1

0x93b2,	// (0x0007651c) bg_popup_sub_pane_cp011_copy1

0xdd0a,	// (0x0007ae74) main_cset_text_pane_g1_copy1

0xd58d,	// (0x0007a6f7) main_cset_text_pane_t1_copy1

0xd59b,	// (0x0007a705) main_cset_text_pane_t2_copy1

0xd5a9,	// (0x0007a713) main_cset_text_pane_t3_copy1

0xd5b7,	// (0x0007a721) main_cset_text_pane_t4_copy1

0xd5c5,	// (0x0007a72f) main_cset_text_pane_t5_copy1

0xdd12,	// (0x0007ae7c) main_cset_text_pane_t6_copy1

0xdd20,	// (0x0007ae8a) main_cset_text_pane_t7_copy1

0x6168,	// (0x000732d2) main_cset_text2_pane_t1_copy1

0x93da,	// (0x00076544) main_ncimui_pane

0x30e1,	// (0x0007024b) popup_query_ncimui_window_ParamLimits

0x30e1,	// (0x0007024b) popup_query_ncimui_window

0x9d60,	// (0x00076eca) field_cale_ev2_pane_g4_ParamLimits

0x9d60,	// (0x00076eca) field_cale_ev2_pane_g4

0x443f,	// (0x000715a9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x443f,	// (0x000715a9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d8,	// (0x0007c942) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d8,	// (0x0007c942) cell_video_dialer_keypad_pane_g

0x4457,	// (0x000715c1) cell_video_dialer_keypad_pane_t1

0x93b2,	// (0x0007651c) bg_popup_window_pane_cp012

0xc570,	// (0x000796da) heading_pane_cp06

0xdd4c,	// (0x0007aeb6) ncim_query_content_pane

0x93b2,	// (0x0007651c) bg_popup_heading_pane_cp01

0xdd54,	// (0x0007aebe) ncim_heading_pane_t1

0xdd62,	// (0x0007aecc) ncim_indicator_popup_pane

0xdd74,	// (0x0007aede) ncim_query_button_pane

0xdd8a,	// (0x0007aef4) ncim_query_content_pane_t1

0xdd9c,	// (0x0007af06) ncim_query_content_pane_t2

0x0005,

0xfb38,	// (0x0007cca2) ncim_query_content_pane_t

0xddd6,	// (0x0007af40) ncim_query_list_pane

0xdde8,	// (0x0007af52) ncim_query_popup_pane

0xdd62,	// (0x0007aecc) ncim_indicator_popup_pane_ParamLimits

0x6539,	// (0x000736a3) ncim_query_content_pane_g1_ParamLimits

0x6539,	// (0x000736a3) ncim_query_content_pane_g1

0xdd8a,	// (0x0007aef4) ncim_query_content_pane_t1_ParamLimits

0xdd9c,	// (0x0007af06) ncim_query_content_pane_t2_ParamLimits

0x6545,	// (0x000736af) ncim_query_content_pane_t3_ParamLimits

0x6545,	// (0x000736af) ncim_query_content_pane_t3

0x656d,	// (0x000736d7) ncim_query_content_pane_t4_ParamLimits

0x656d,	// (0x000736d7) ncim_query_content_pane_t4

0x6595,	// (0x000736ff) ncim_query_content_pane_t5_ParamLimits

0x6595,	// (0x000736ff) ncim_query_content_pane_t5

0xddae,	// (0x0007af18) ncim_query_content_pane_t6_ParamLimits

0xddae,	// (0x0007af18) ncim_query_content_pane_t6

0xfb38,	// (0x0007cca2) ncim_query_content_pane_t_ParamLimits

0xddd6,	// (0x0007af40) ncim_query_list_pane_ParamLimits

0xdde8,	// (0x0007af52) ncim_query_popup_pane_ParamLimits

0xddfc,	// (0x0007af66) wait_bar_pane_cp04

0x93b2,	// (0x0007651c) input_focus_pane_cp011

0xde04,	// (0x0007af6e) ncim_query_popup_pane_t1

0xde12,	// (0x0007af7c) ncim_list_query_list_pane_ParamLimits

0xde12,	// (0x0007af7c) ncim_list_query_list_pane

0x93b2,	// (0x0007651c) bg_button_pane_cp027

0xde25,	// (0x0007af8f) ncim_query_button_pane_g1

0x93b2,	// (0x0007651c) list_highlight_pane_cp012

0xde2f,	// (0x0007af99) ncim_list_query_list_pane_g1

0xde37,	// (0x0007afa1) ncim_list_query_list_pane_t1

0xa0a4,	// (0x0007720e) cam4_indicators_pane_g3_ParamLimits

0xa0a4,	// (0x0007720e) cam4_indicators_pane_g3

0xa127,	// (0x00077291) vid4_indicators_pane_g5_ParamLimits

0xa127,	// (0x00077291) vid4_indicators_pane_g5

0xa297,	// (0x00077401) vid4_progress_pane_g5_ParamLimits

0xa297,	// (0x00077401) vid4_progress_pane_g5

0x6424,	// (0x0007358e) main_ncimui_pane_g1

0x648d,	// (0x000735f7) ncimui_group_query_pane_ParamLimits

0x648d,	// (0x000735f7) ncimui_group_query_pane

0x64d5,	// (0x0007363f) ncimui_list_pane_ParamLimits

0x64d5,	// (0x0007363f) ncimui_list_pane

0x64fc,	// (0x00073666) ncimui_text_pane_ParamLimits

0x64fc,	// (0x00073666) ncimui_text_pane

0x65bd,	// (0x00073727) ncimui_text_pane_t1_ParamLimits

0x65bd,	// (0x00073727) ncimui_text_pane_t1

0xde45,	// (0x0007afaf) ncimui_list_single_graphic_pane_ParamLimits

0xde45,	// (0x0007afaf) ncimui_list_single_graphic_pane

0x65db,	// (0x00073745) ncimui_query_pane_ParamLimits

0x65db,	// (0x00073745) ncimui_query_pane

0x93b2,	// (0x0007651c) list_highlight_pane_cp013

0xde55,	// (0x0007afbf) ncim_list_query_list_pane_t1_copy1

0xde2f,	// (0x0007af99) ncim_list_single_graphic_pane_g1

0x65ee,	// (0x00073758) ncim_query_button_pane_cp01

0x65fa,	// (0x00073764) ncim_query_entry_pane_ParamLimits

0x65fa,	// (0x00073764) ncim_query_entry_pane

0x660d,	// (0x00073777) ncimui_query_pane_g1

0x6619,	// (0x00073783) ncimui_query_pane_t1_ParamLimits

0x6619,	// (0x00073783) ncimui_query_pane_t1

0x9a41,	// (0x00076bab) input_focus_pane_cp012

0xde63,	// (0x0007afcd) ncim_query_entry_pane_t1

0xa4ac,	// (0x00077616) main_im_pane_ParamLimits

0x93da,	// (0x00076544) main_mobtv_pane_ParamLimits

0x93da,	// (0x00076544) main_mobtv_pane

0x629b,	// (0x00073405) main_cset6_slider_pane_g18_ParamLimits

0x629b,	// (0x00073405) main_cset6_slider_pane_g18

0x62a7,	// (0x00073411) main_cset6_slider_pane_g19_ParamLimits

0x62a7,	// (0x00073411) main_cset6_slider_pane_g19

0xa456,	// (0x000775c0) bg_main_mobtv_pane_ParamLimits

0xa456,	// (0x000775c0) bg_main_mobtv_pane

0x6632,	// (0x0007379c) main_mobtv_info_pane

0x663d,	// (0x000737a7) main_mobtv_loading_pane_ParamLimits

0x663d,	// (0x000737a7) main_mobtv_loading_pane

0xde75,	// (0x0007afdf) main_mobtv_pg_channel_list_pane

0xde7f,	// (0x0007afe9) main_mobtv_pg_hdr_pane

0x664a,	// (0x000737b4) main_mobtv_programe_curr_pane_ParamLimits

0x664a,	// (0x000737b4) main_mobtv_programe_curr_pane

0x6657,	// (0x000737c1) main_mobtv_programe_next_pane_ParamLimits

0x6657,	// (0x000737c1) main_mobtv_programe_next_pane

0xde88,	// (0x0007aff2) popup_mobtv_noti_window

0xa689,	// (0x000777f3) main_tv_pg_hdr_pane_g1

0xde92,	// (0x0007affc) main_tv_pg_hdr_pane_g2

0xde9a,	// (0x0007b004) main_tv_pg_hdr_pane_g3

0xdea2,	// (0x0007b00c) main_tv_pg_hdr_pane_g4

0xdeaa,	// (0x0007b014) main_tv_pg_hdr_pane_g5

0xdeb4,	// (0x0007b01e) main_tv_pg_hdr_pane_g6

0xdebe,	// (0x0007b028) main_tv_pg_hdr_pane_g7

0xdec8,	// (0x0007b032) main_tv_pg_hdr_pane_g8

0xded2,	// (0x0007b03c) main_tv_pg_hdr_pane_g9

0xdedc,	// (0x0007b046) main_tv_pg_hdr_pane_g10

0xdee6,	// (0x0007b050) main_tv_pg_hdr_pane_g11

0x000a,

0xfb45,	// (0x0007ccaf) main_tv_pg_hdr_pane_g

0xdef0,	// (0x0007b05a) main_tv_pg_hdr_pane_t1

0xdefe,	// (0x0007b068) main_tv_pg_hdr_pane_t2

0xdf0c,	// (0x0007b076) main_tv_pg_hdr_pane_t3

0xdf1c,	// (0x0007b086) main_tv_pg_hdr_pane_t4

0xdf2c,	// (0x0007b096) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5c,	// (0x0007ccc6) main_tv_pg_hdr_pane_t

0xdf3c,	// (0x0007b0a6) single_mobtv_pg_channel_pane_ParamLimits

0xdf3c,	// (0x0007b0a6) single_mobtv_pg_channel_pane

0xdf4e,	// (0x0007b0b8) single_mobtv_pg_channel_table_pane

0xdf57,	// (0x0007b0c1) single_mobtv_pg_channel_thumb_pane

0xdf60,	// (0x0007b0ca) single_tv_pg_channel_pane_g1

0xdf69,	// (0x0007b0d3) single_tv_pg_channel_pane_g2

0x0001,

0xfb67,	// (0x0007ccd1) single_tv_pg_channel_pane_g

0xa43a,	// (0x000775a4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa43a,	// (0x000775a4) bg_single_mobtv_pg_channel_thumb_pane

0xdf72,	// (0x0007b0dc) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf72,	// (0x0007b0dc) single_mobtv_pg_channel_thumb_pane_g1

0xdf80,	// (0x0007b0ea) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf80,	// (0x0007b0ea) single_mobtv_pg_channel_thumb_pane_g2

0xdf8c,	// (0x0007b0f6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf8c,	// (0x0007b0f6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6c,	// (0x0007ccd6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6c,	// (0x0007ccd6) single_mobtv_pg_channel_thumb_pane_g

0xdf98,	// (0x0007b102) single_mobtv_pg_channel_thumb_pane_t1

0xdfa6,	// (0x0007b110) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb73,	// (0x0007ccdd) single_mobtv_pg_channel_thumb_pane_t

0xa689,	// (0x000777f3) bg_single_mobtv_pg_channel_table_pane_g1

0xa689,	// (0x000777f3) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x0007c502) bg_single_mobtv_pg_channel_table_pane_g

0xdfb4,	// (0x0007b11e) single_mobtv_pg_channel_table_pane_t1

0xdfc2,	// (0x0007b12c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb78,	// (0x0007cce2) single_mobtv_pg_channel_table_pane_t

0x666c,	// (0x000737d6) main_mobtv_info_pane_g1_ParamLimits

0x666c,	// (0x000737d6) main_mobtv_info_pane_g1

0x668a,	// (0x000737f4) main_mobtv_info_pane_t1_ParamLimits

0x668a,	// (0x000737f4) main_mobtv_info_pane_t1

0x6702,	// (0x0007386c) main_mobtv_info_pane_t2_ParamLimits

0x6702,	// (0x0007386c) main_mobtv_info_pane_t2

0x0002,

0xfb82,	// (0x0007ccec) main_mobtv_info_pane_t_ParamLimits

0xfb82,	// (0x0007ccec) main_mobtv_info_pane_t

0x6793,	// (0x000738fd) wait_bar_pane_cp05

0x67a5,	// (0x0007390f) main_mobtv_loading_pane_g1_ParamLimits

0x67a5,	// (0x0007390f) main_mobtv_loading_pane_g1

0x67b6,	// (0x00073920) main_mobtv_loading_pane_g2_ParamLimits

0x67b6,	// (0x00073920) main_mobtv_loading_pane_g2

0x67c2,	// (0x0007392c) main_mobtv_loading_pane_g3_ParamLimits

0x67c2,	// (0x0007392c) main_mobtv_loading_pane_g3

0x0002,

0xfb89,	// (0x0007ccf3) main_mobtv_loading_pane_g_ParamLimits

0xfb89,	// (0x0007ccf3) main_mobtv_loading_pane_g

0xdfd0,	// (0x0007b13a) main_mobtv_loading_pane_t1_ParamLimits

0xdfd0,	// (0x0007b13a) main_mobtv_loading_pane_t1

0xdfe8,	// (0x0007b152) main_mobtv_loading_pane_t2_ParamLimits

0xdfe8,	// (0x0007b152) main_mobtv_loading_pane_t2

0x0001,

0xfb90,	// (0x0007ccfa) main_mobtv_loading_pane_t_ParamLimits

0xfb90,	// (0x0007ccfa) main_mobtv_loading_pane_t

0x67d5,	// (0x0007393f) wait_bar_pane_cp06_ParamLimits

0x67d5,	// (0x0007393f) wait_bar_pane_cp06

0xe00c,	// (0x0007b176) main_mobtv_programe_curr_pane_t1

0xe01a,	// (0x0007b184) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb95,	// (0x0007ccff) main_mobtv_programe_curr_pane_t

0xe028,	// (0x0007b192) main_mobtv_programe_next_pane_t1

0xe036,	// (0x0007b1a0) main_mobtv_programe_next_pane_t2

0xe044,	// (0x0007b1ae) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9a,	// (0x0007cd04) main_mobtv_programe_next_pane_t

0x93b2,	// (0x0007651c) bg_popup_mobtv_noti_window_pane

0xe052,	// (0x0007b1bc) popup_mobtv_noti_window_g1

0xe05a,	// (0x0007b1c4) popup_mobtv_noti_window_t1

0xe068,	// (0x0007b1d2) popup_mobtv_noti_window_t2

0x0001,

0xfba1,	// (0x0007cd0b) popup_mobtv_noti_window_t

0xa689,	// (0x000777f3) bg_popup_mobtv_noti_window_pane_g1

0x93e8,	// (0x00076552) sc_clock_pane

0x93e8,	// (0x00076552) main_fs_bigclock_pane

0x5ed6,	// (0x00073040) blid2_tripm_pane_t4_ParamLimits

0x5ed6,	// (0x00073040) blid2_tripm_pane_t4

0x67e4,	// (0x0007394e) sc_clock_pane_g1_ParamLimits

0x67e4,	// (0x0007394e) sc_clock_pane_g1

0x67f6,	// (0x00073960) sc_clock_pane_t1_ParamLimits

0x67f6,	// (0x00073960) sc_clock_pane_t1

0x681a,	// (0x00073984) sc_clock_pane_t2_ParamLimits

0x681a,	// (0x00073984) sc_clock_pane_t2

0x6832,	// (0x0007399c) sc_clock_pane_t3_ParamLimits

0x6832,	// (0x0007399c) sc_clock_pane_t3

0x0004,

0xfba6,	// (0x0007cd10) sc_clock_pane_t_ParamLimits

0xfba6,	// (0x0007cd10) sc_clock_pane_t

0x77c4,	// (0x0007492e) main_fs_bigclock_indicator_pane_ParamLimits

0x77c4,	// (0x0007492e) main_fs_bigclock_indicator_pane

0x68f8,	// (0x00073a62) main_fs_bigclock_pane_g1_ParamLimits

0x68f8,	// (0x00073a62) main_fs_bigclock_pane_g1

0x77d0,	// (0x0007493a) main_fs_bigclock_pane_t1_ParamLimits

0x77d0,	// (0x0007493a) main_fs_bigclock_pane_t1

0x77e2,	// (0x0007494c) main_fs_bigclock_pane_t2_ParamLimits

0x77e2,	// (0x0007494c) main_fs_bigclock_pane_t2

0x77f6,	// (0x00074960) main_fs_bigclock_pane_t3_ParamLimits

0x77f6,	// (0x00074960) main_fs_bigclock_pane_t3

0x0002,

0xfd37,	// (0x0007cea1) main_fs_bigclock_pane_t_ParamLimits

0xfd37,	// (0x0007cea1) main_fs_bigclock_pane_t

0xe759,	// (0x0007b8c3) main_fs_bigclock_indicator_pane_g1

0xdd7c,	// (0x0007aee6) ncim_query_content_pane_g2_ParamLimits

0xdd7c,	// (0x0007aee6) ncim_query_content_pane_g2

0x0001,

0xfb33,	// (0x0007cc9d) ncim_query_content_pane_g_ParamLimits

0xfb33,	// (0x0007cc9d) ncim_query_content_pane_g

0x6849,	// (0x000739b3) sc_clock_pane_t4_ParamLimits

0x6849,	// (0x000739b3) sc_clock_pane_t4

0x93da,	// (0x00076544) main_radioblah_pane

0xa017,	// (0x00077181) cell_call4_button_pane_t1_copy1_ParamLimits

0xa017,	// (0x00077181) cell_call4_button_pane_t1_copy1

0x643c,	// (0x000735a6) main_ncimui_pane_t1_ParamLimits

0x643c,	// (0x000735a6) main_ncimui_pane_t1

0x6456,	// (0x000735c0) main_ncimui_pane_t2_ParamLimits

0x6456,	// (0x000735c0) main_ncimui_pane_t2

0x0002,

0xfb2c,	// (0x0007cc96) main_ncimui_pane_t_ParamLimits

0xfb2c,	// (0x0007cc96) main_ncimui_pane_t

0xe076,	// (0x0007b1e0) main_radioblah_anim_pane_ParamLimits

0xe076,	// (0x0007b1e0) main_radioblah_anim_pane

0xe087,	// (0x0007b1f1) main_radioblah_info_pane_ParamLimits

0xe087,	// (0x0007b1f1) main_radioblah_info_pane

0xe09b,	// (0x0007b205) main_radioblah_pane_t1_ParamLimits

0xe09b,	// (0x0007b205) main_radioblah_pane_t1

0xe0b7,	// (0x0007b221) main_radioblah_pane_t2_ParamLimits

0xe0b7,	// (0x0007b221) main_radioblah_pane_t2

0x0003,

0xfbc7,	// (0x0007cd31) main_radioblah_pane_t_ParamLimits

0xfbc7,	// (0x0007cd31) main_radioblah_pane_t

0x6aa1,	// (0x00073c0b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x6aa1,	// (0x00073c0b) main_radioblah_rocker_ctrl_pane

0xe0ff,	// (0x0007b269) main_radioblah_info_pane_t1_ParamLimits

0xe0ff,	// (0x0007b269) main_radioblah_info_pane_t1

0x6af9,	// (0x00073c63) main_radioblah_info_pane_t2_ParamLimits

0x6af9,	// (0x00073c63) main_radioblah_info_pane_t2

0x0003,

0xfbd0,	// (0x0007cd3a) main_radioblah_info_pane_t_ParamLimits

0xfbd0,	// (0x0007cd3a) main_radioblah_info_pane_t

0xa689,	// (0x000777f3) main_radioblah_rocker_ctrl_pane_g1

0x6ba9,	// (0x00073d13) main_radioblah_rocker_ctrl_pane_g2

0x6bb1,	// (0x00073d1b) main_radioblah_rocker_ctrl_pane_g3

0x6bb9,	// (0x00073d23) main_radioblah_rocker_ctrl_pane_g4

0x6bc1,	// (0x00073d2b) main_radioblah_rocker_ctrl_pane_g5

0x6bc9,	// (0x00073d33) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd9,	// (0x0007cd43) main_radioblah_rocker_ctrl_pane_g

0x6168,	// (0x000732d2) main_cset_text2_pane_t1_copy1_ParamLimits

0xa075,	// (0x000771df) cam4_image_uncrop_qvga_pane

0xa0ca,	// (0x00077234) vid4_image_uncrop_qcif_pane

0xa2ed,	// (0x00077457) cam6_image_uncrop_qvga_pane_ParamLimits

0xa2ed,	// (0x00077457) cam6_image_uncrop_qvga_pane

0xda5b,	// (0x0007abc5) vid6_image_uncrop_qcif_pane_ParamLimits

0xda5b,	// (0x0007abc5) vid6_image_uncrop_qcif_pane

0x93b2,	// (0x0007651c) bg_popup_preview_window_pane_cp03

0xdd2e,	// (0x0007ae98) list_cset_text2_pane

0xdd36,	// (0x0007aea0) main_cset6_text2_pane_g1

0xdd3e,	// (0x0007aea8) main_cset6_text2_pane_t1

0xe266,	// (0x0007b3d0) list_cset_text2_pane_t1_ParamLimits

0xe266,	// (0x0007b3d0) list_cset_text2_pane_t1

0x93da,	// (0x00076544) main_radioblah_pane_ParamLimits

0x677f,	// (0x000738e9) main_mobtv_info_pane_t3_ParamLimits

0x677f,	// (0x000738e9) main_mobtv_info_pane_t3

0x6a8f,	// (0x00073bf9) main_radioblah_pane_g1

0x6ac9,	// (0x00073c33) main_radioblah_info_pane_g1

0x6b4e,	// (0x00073cb8) main_radioblah_info_pane_t3_ParamLimits

0x6b4e,	// (0x00073cb8) main_radioblah_info_pane_t3

0x1c35,	// (0x0006ed9f) highlight_cell_cale_month_pane_ParamLimits

0x1c35,	// (0x0006ed9f) highlight_cell_cale_month_pane

0x93e8,	// (0x00076552) main_phob_fisheye_pane

0xcd13,	// (0x00079e7d) scroll_pane_cp0031_ParamLimits

0xcd13,	// (0x00079e7d) scroll_pane_cp0031

0xdb6d,	// (0x0007acd7) wait_bar_pane_cp08_ParamLimits

0x61f1,	// (0x0007335b) cset_list_set_pane_copy1_ParamLimits

0xe139,	// (0x0007b2a3) highlight_cell_cale_month_pane_g1

0x6bd1,	// (0x00073d3b) highlight_cell_cale_month_pane_t1

0xd7c5,	// (0x0007a92f) list_gen_pane_cp01

0xd428,	// (0x0007a592) scroll_pane_01

0x6bdf,	// (0x00073d49) list_single_double_fisheye_pane

0x6be8,	// (0x00073d52) list_double_fisheye_pane_g1_ParamLimits

0x6be8,	// (0x00073d52) list_double_fisheye_pane_g1

0x6bf4,	// (0x00073d5e) list_double_fisheye_pane_g2_ParamLimits

0x6bf4,	// (0x00073d5e) list_double_fisheye_pane_g2

0x6c08,	// (0x00073d72) list_double_fisheye_pane_g3_ParamLimits

0x6c08,	// (0x00073d72) list_double_fisheye_pane_g3

0x0004,

0xfbe6,	// (0x0007cd50) list_double_fisheye_pane_g_ParamLimits

0xfbe6,	// (0x0007cd50) list_double_fisheye_pane_g

0x6c31,	// (0x00073d9b) list_double_fisheye_pane_t1_ParamLimits

0x6c31,	// (0x00073d9b) list_double_fisheye_pane_t1

0x6c4c,	// (0x00073db6) list_double_fisheye_pane_t2_ParamLimits

0x6c4c,	// (0x00073db6) list_double_fisheye_pane_t2

0x0001,

0xfbf1,	// (0x0007cd5b) list_double_fisheye_pane_t_ParamLimits

0xfbf1,	// (0x0007cd5b) list_double_fisheye_pane_t

0x93e8,	// (0x00076552) main_call5_pane

0x6874,	// (0x000739de) sc_swipe_pane_ParamLimits

0x6874,	// (0x000739de) sc_swipe_pane

0x6c81,	// (0x00073deb) call5_image_pane_ParamLimits

0x6c81,	// (0x00073deb) call5_image_pane

0x6c9e,	// (0x00073e08) call5_swipe_1_pane_ParamLimits

0x6c9e,	// (0x00073e08) call5_swipe_1_pane

0x6cb1,	// (0x00073e1b) call5_swipe_2_pane_ParamLimits

0x6cb1,	// (0x00073e1b) call5_swipe_2_pane

0x6cdc,	// (0x00073e46) popup_call5_audio_first_window_ParamLimits

0x6cdc,	// (0x00073e46) popup_call5_audio_first_window

0xa43a,	// (0x000775a4) call5_swipe_1_pane_g1_ParamLimits

0xa43a,	// (0x000775a4) call5_swipe_1_pane_g1

0xe141,	// (0x0007b2ab) call5_swipe_1_pane_g2_ParamLimits

0xe141,	// (0x0007b2ab) call5_swipe_1_pane_g2

0x0001,

0xfbf6,	// (0x0007cd60) call5_swipe_1_pane_g_ParamLimits

0xfbf6,	// (0x0007cd60) call5_swipe_1_pane_g

0xe14d,	// (0x0007b2b7) call5_swipe_1_pane_t1_ParamLimits

0xe14d,	// (0x0007b2b7) call5_swipe_1_pane_t1

0xa43a,	// (0x000775a4) call5_swipe_2_pane_g1_ParamLimits

0xa43a,	// (0x000775a4) call5_swipe_2_pane_g1

0xe162,	// (0x0007b2cc) call5_swipe_2_pane_g2_ParamLimits

0xe162,	// (0x0007b2cc) call5_swipe_2_pane_g2

0x0001,

0xfbfb,	// (0x0007cd65) call5_swipe_2_pane_g_ParamLimits

0xfbfb,	// (0x0007cd65) call5_swipe_2_pane_g

0xe16e,	// (0x0007b2d8) call5_swipe_2_pane_t1_ParamLimits

0xe16e,	// (0x0007b2d8) call5_swipe_2_pane_t1

0xe183,	// (0x0007b2ed) sc_swipe_pane_g1_ParamLimits

0xe183,	// (0x0007b2ed) sc_swipe_pane_g1

0xe190,	// (0x0007b2fa) sc_swipe_pane_g2_ParamLimits

0xe190,	// (0x0007b2fa) sc_swipe_pane_g2

0x0001,

0xfc00,	// (0x0007cd6a) sc_swipe_pane_g_ParamLimits

0xfc00,	// (0x0007cd6a) sc_swipe_pane_g

0xe19c,	// (0x0007b306) sc_swipe_pane_t1_ParamLimits

0xe19c,	// (0x0007b306) sc_swipe_pane_t1

0x93e8,	// (0x00076552) main_cmail_launcher_pane

0x6cf1,	// (0x00073e5b) aid_size_cell_cmail_l_ParamLimits

0x6cf1,	// (0x00073e5b) aid_size_cell_cmail_l

0x6d06,	// (0x00073e70) grid_cmail_l_pane_ParamLimits

0x6d06,	// (0x00073e70) grid_cmail_l_pane

0x6d20,	// (0x00073e8a) cell_cmail_l_pane_ParamLimits

0x6d20,	// (0x00073e8a) cell_cmail_l_pane

0x6d41,	// (0x00073eab) cell_cmail_l_pane_g1_ParamLimits

0x6d41,	// (0x00073eab) cell_cmail_l_pane_g1

0x6d4d,	// (0x00073eb7) cell_cmail_l_pane_t1_ParamLimits

0x6d4d,	// (0x00073eb7) cell_cmail_l_pane_t1

0x6d63,	// (0x00073ecd) cell_cmail_l_pane_t2_ParamLimits

0x6d63,	// (0x00073ecd) cell_cmail_l_pane_t2

0x0001,

0xfc05,	// (0x0007cd6f) cell_cmail_l_pane_t_ParamLimits

0xfc05,	// (0x0007cd6f) cell_cmail_l_pane_t

0x9a41,	// (0x00076bab) grid_highlight_pane_cp018_ParamLimits

0x9a41,	// (0x00076bab) grid_highlight_pane_cp018

0xff18,	// (0x0006d082) main2_pane_ParamLimits

0xff18,	// (0x0006d082) main2_pane

0xa544,	// (0x000776ae) popup_sp_fs_action_menu_bg_pane_g1

0xa54c,	// (0x000776b6) popup_sp_fs_action_menu_bg_pane_g2

0xa554,	// (0x000776be) popup_sp_fs_action_menu_bg_pane_g3

0xa55c,	// (0x000776c6) popup_sp_fs_action_menu_bg_pane_g4

0xa564,	// (0x000776ce) popup_sp_fs_action_menu_bg_pane_g5

0xa56c,	// (0x000776d6) popup_sp_fs_action_menu_bg_pane_g6

0xa574,	// (0x000776de) popup_sp_fs_action_menu_bg_pane_g7

0xa57c,	// (0x000776e6) popup_sp_fs_action_menu_bg_pane_g8

0xa584,	// (0x000776ee) popup_sp_fs_action_menu_bg_pane_g9

0xa58c,	// (0x000776f6) popup_sp_fs_action_menu_bg_pane_g10

0xa58c,	// (0x000776f6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0007c26f) popup_sp_fs_action_menu_bg_pane_g

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g3_g1

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g3_g2

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0007c31d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0007c31d) list_medium_line_x2_t3_g3_g

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g3_t1

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g3_t2

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0007c324) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0007c324) list_medium_line_x2_t3_g3_t

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g2_g1

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0007c32b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0007c32b) list_medium_line_x2_t3_g2_g

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g2_t1

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g2_t2

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0007c324) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0007c324) list_medium_line_x2_t3_g2_t

0xa43a,	// (0x000775a4) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t4_g4_g1

0xa43a,	// (0x000775a4) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t4_g4_g2

0xa43a,	// (0x000775a4) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t4_g4_g3

0xa43a,	// (0x000775a4) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0007c330) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0007c330) list_medium_line_x2_t4_g4_g

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g4_t1

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g4_t2

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g4_t3

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0007c339) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0007c339) list_medium_line_x2_t4_g4_t

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g4_g1

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g4_g2

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g4_g3

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0007c330) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0007c330) list_medium_line_x2_t2_g4_g

0xa65b,	// (0x000777c5) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t2_g4_t1

0xa65b,	// (0x000777c5) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x0007c300) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x0007c300) list_medium_line_x2_t2_g4_t

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g3_g1

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g3_g2

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0007c31d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0007c31d) list_medium_line_x2_t2_g3_g

0xa65b,	// (0x000777c5) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t2_g3_t1

0xa65b,	// (0x000777c5) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x0007c300) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x0007c300) list_medium_line_x2_t2_g3_t

0x1d8c,	// (0x0006eef6) main_sp_fs_list_pane_ParamLimits

0x1d8c,	// (0x0006eef6) main_sp_fs_list_pane

0xc2ee,	// (0x00079458) sp_fs_scroll_pane_ParamLimits

0xc2ee,	// (0x00079458) sp_fs_scroll_pane

0xabe7,	// (0x00077d51) list_medium_line_x2_t3_t1

0xabe7,	// (0x00077d51) list_medium_line_x2_t3_t2

0xabe7,	// (0x00077d51) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0007c3e6) list_medium_line_x2_t3_t

0xabe7,	// (0x00077d51) list_medium_line_x3_t4_t1

0xabe7,	// (0x00077d51) list_medium_line_x3_t4_t2

0xabe7,	// (0x00077d51) list_medium_line_x3_t4_t3

0xabe7,	// (0x00077d51) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x0007c3ed) list_medium_line_x3_t4_t

0xabe7,	// (0x00077d51) list_medium_line_x4_t5_t1

0xabe7,	// (0x00077d51) list_medium_line_x4_t5_t2

0xabe7,	// (0x00077d51) list_medium_line_x4_t5_t3

0xabe7,	// (0x00077d51) list_medium_line_x4_t5_t4

0xabe7,	// (0x00077d51) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0007c3f6) list_medium_line_x4_t5_t

0xa43a,	// (0x000775a4) list_medium_line_t4_g4_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t4_g4_g1

0xa43a,	// (0x000775a4) list_medium_line_t4_g4_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t4_g4_g2

0xa43a,	// (0x000775a4) list_medium_line_t4_g4_g3_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t4_g4_g3

0xa43a,	// (0x000775a4) list_medium_line_t4_g4_g4_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0007c330) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0007c330) list_medium_line_t4_g4_g

0xa65b,	// (0x000777c5) list_medium_line_t4_g4_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t4_g4_t1

0xa65b,	// (0x000777c5) list_medium_line_t4_g4_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t4_g4_t2

0xa65b,	// (0x000777c5) list_medium_line_t4_g4_t3_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t4_g4_t3

0xa65b,	// (0x000777c5) list_medium_line_t4_g4_t4_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0007c339) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0007c339) list_medium_line_t4_g4_t

0x1e3a,	// (0x0006efa4) chi_dic_find_pane_g1

0x2e67,	// (0x0006ffd1) main_tport_pane

0xabe7,	// (0x00077d51) list_medium_line_plain_t1

0xa43a,	// (0x000775a4) list_medium_line_t2_g2_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t2_g2_g1

0xa43a,	// (0x000775a4) list_medium_line_t2_g2_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0007c32b) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0007c32b) list_medium_line_t2_g2_g

0xa65b,	// (0x000777c5) list_medium_line_t2_g2_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t2_g2_t1

0xa65b,	// (0x000777c5) list_medium_line_t2_g2_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x0007c300) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x0007c300) list_medium_line_t2_g2_t

0xa2d4,	// (0x0007743e) aid_sp_fs_list_icon_a_sm

0xa2dc,	// (0x00077446) aid_sp_fs_list_icon_d

0xa2e4,	// (0x0007744e) aid_sp_fs_text_primary

0xd7ce,	// (0x0007a938) aid_sp_fs_text_secondary

0x93b2,	// (0x0007651c) list_medium_line

0x93b2,	// (0x0007651c) list_medium_line_g2

0x93b2,	// (0x0007651c) list_medium_line_g3

0x93b2,	// (0x0007651c) list_medium_line_plain

0x93b2,	// (0x0007651c) list_medium_line_plain_t2

0x93b2,	// (0x0007651c) list_medium_line_plain_t3

0x93b2,	// (0x0007651c) list_medium_line_right_icon

0x93b2,	// (0x0007651c) list_medium_line_right_iconx2

0x93b2,	// (0x0007651c) list_medium_line_t2

0x93b2,	// (0x0007651c) list_medium_line_t2_g2

0x93b2,	// (0x0007651c) list_medium_line_t2_g3

0x93b2,	// (0x0007651c) list_medium_line_t2_right_icon

0x93b2,	// (0x0007651c) list_medium_line_t2_right_iconx2

0x93b2,	// (0x0007651c) list_medium_line_t3

0x93b2,	// (0x0007651c) list_medium_line_t3_g2

0x93b2,	// (0x0007651c) list_medium_line_t3_g3

0x93b2,	// (0x0007651c) list_medium_line_t3_right_iconx2

0x93b2,	// (0x0007651c) list_medium_line_t4_g4

0x93b2,	// (0x0007651c) list_medium_line_x2

0x93b2,	// (0x0007651c) list_medium_line_x2_t2_g2

0x93b2,	// (0x0007651c) list_medium_line_x2_t2_g3

0x93b2,	// (0x0007651c) list_medium_line_x2_t2_g4

0x93b2,	// (0x0007651c) list_medium_line_x2_t3

0x93b2,	// (0x0007651c) list_medium_line_x2_t3_g2

0x93b2,	// (0x0007651c) list_medium_line_x2_t3_g3

0x93b2,	// (0x0007651c) list_medium_line_x2_t3_g4

0x93b2,	// (0x0007651c) list_medium_line_x2_t4_g2

0x93b2,	// (0x0007651c) list_medium_line_x2_t4_g4

0x93b2,	// (0x0007651c) list_medium_line_x3

0x93b2,	// (0x0007651c) list_medium_line_x3_t4

0x93b2,	// (0x0007651c) list_medium_line_x3_t4_g4

0x93b2,	// (0x0007651c) list_medium_line_x4_t4

0x93b2,	// (0x0007651c) list_medium_line_x4_t4_g7

0x93b2,	// (0x0007651c) list_medium_line_x4_t5

0x5ccf,	// (0x00072e39) list_single_fs_dyc_pane_ParamLimits

0x5ccf,	// (0x00072e39) list_single_fs_dyc_pane

0xa43a,	// (0x000775a4) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x4_t4_g7_g1

0xa43a,	// (0x000775a4) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x4_t4_g7_g2

0xa43a,	// (0x000775a4) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x4_t4_g7_g3

0xa43a,	// (0x000775a4) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x4_t4_g7_g4

0xa43a,	// (0x000775a4) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x4_t4_g7_g5

0xa43a,	// (0x000775a4) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x4_t4_g7_g6

0xa448,	// (0x000775b2) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa448,	// (0x000775b2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0d,	// (0x0007cc77) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0d,	// (0x0007cc77) list_medium_line_x4_t4_g7_g

0xa65b,	// (0x000777c5) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x4_t4_g7_t1

0xa65b,	// (0x000777c5) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x4_t4_g7_t2

0xa65b,	// (0x000777c5) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x4_t4_g7_t3

0xb010,	// (0x0007817a) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb010,	// (0x0007817a) list_medium_line_x4_t4_g7_t4

0xb010,	// (0x0007817a) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb010,	// (0x0007817a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1c,	// (0x0007cc86) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1c,	// (0x0007cc86) list_medium_line_x4_t4_g7_t

0x63f3,	// (0x0007355d) list_single_dyc_row_pane_ParamLimits

0x63f3,	// (0x0007355d) list_single_dyc_row_pane

0x6c6e,	// (0x00073dd8) call5_gesture_pane_ParamLimits

0x6c6e,	// (0x00073dd8) call5_gesture_pane

0x6cc4,	// (0x00073e2e) call5_windows_pane_ParamLimits

0x6cc4,	// (0x00073e2e) call5_windows_pane

0x6d80,	// (0x00073eea) call5_swipe_1_pane_cp_ParamLimits

0x6d80,	// (0x00073eea) call5_swipe_1_pane_cp

0x6d8c,	// (0x00073ef6) call5_swipe_2_pane_cp_ParamLimits

0x6d8c,	// (0x00073ef6) call5_swipe_2_pane_cp

0xa653,	// (0x000777bd) call5_image_pane_cp

0x6d98,	// (0x00073f02) popup_call5_audio_first_window_cp_ParamLimits

0x6d98,	// (0x00073f02) popup_call5_audio_first_window_cp

0xe183,	// (0x0007b2ed) call5_swipe_1_pane_g1_cp_ParamLimits

0xe183,	// (0x0007b2ed) call5_swipe_1_pane_g1_cp

0xe1b1,	// (0x0007b31b) call5_swipe_1_pane_g2_cp

0xe19c,	// (0x0007b306) call5_swipe_1_pane_t1_cp_ParamLimits

0xe19c,	// (0x0007b306) call5_swipe_1_pane_t1_cp

0xe183,	// (0x0007b2ed) call5_swipe_2_pane_g1_cp_ParamLimits

0xe183,	// (0x0007b2ed) call5_swipe_2_pane_g1_cp

0xe1b9,	// (0x0007b323) call5_swipe_2_pane_g2_cp

0xe1c1,	// (0x0007b32b) call5_swipe_2_pane_t1_cp_ParamLimits

0xe1c1,	// (0x0007b32b) call5_swipe_2_pane_t1_cp

0x9a41,	// (0x00076bab) main_sp_fs_email_pane

0xe1d6,	// (0x0007b340) main_sp_fs_listscroll_pane_te

0x6da6,	// (0x00073f10) popup_sp_fs_action_menu_pane_ParamLimits

0x6da6,	// (0x00073f10) popup_sp_fs_action_menu_pane

0xa689,	// (0x000777f3) bg_sp_fs_ctrlbar_pane_g1

0xe1df,	// (0x0007b349) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe1e8,	// (0x0007b352) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe1f1,	// (0x0007b35b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa689,	// (0x000777f3) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0a,	// (0x0007cd74) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc824,	// (0x0007998e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc824,	// (0x0007998e) bg_sp_fs_ctrlbar_ddmenu_pane

0xe1fa,	// (0x0007b364) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe1fa,	// (0x0007b364) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe206,	// (0x0007b370) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe206,	// (0x0007b370) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc13,	// (0x0007cd7d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc13,	// (0x0007cd7d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe212,	// (0x0007b37c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe212,	// (0x0007b37c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa689,	// (0x000777f3) list_medium_line_t2_right_icon_g1

0xabe7,	// (0x00077d51) list_medium_line_t2_right_icon_t1

0xabe7,	// (0x00077d51) list_medium_line_t2_right_icon_t2

0x0001,

0xfc18,	// (0x0007cd82) list_medium_line_t2_right_icon_t

0xb390,	// (0x000784fa) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb390,	// (0x000784fa) bg_sp_fs_ctrlbar_pane

0x6e39,	// (0x00073fa3) main_sp_fs_ctrlbar_button_pane_cp01

0x6e43,	// (0x00073fad) main_sp_fs_ctrlbar_ddmenu_pane

0xe280,	// (0x0007b3ea) main_sp_fs_ctrlbar_pane_g1

0xe28c,	// (0x0007b3f6) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc1d,	// (0x0007cd87) main_sp_fs_ctrlbar_pane_g

0x6e81,	// (0x00073feb) main_sp_fs_ctrlbar_pane_t1

0x6ec0,	// (0x0007402a) main_sp_fs_ctrlbar_pane

0x6ee4,	// (0x0007404e) main_sp_fs_listscroll_pane_te_cp01

0x6f04,	// (0x0007406e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6f04,	// (0x0007406e) popup_sp_fs_action_menu_pane_cp01

0x9a41,	// (0x00076bab) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9a41,	// (0x00076bab) bg_sp_fs_highlight_list_pane_cp01

0xa2fb,	// (0x00077465) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa2fb,	// (0x00077465) sp_fs_action_menu_list_gene_pane_g1

0xe2b3,	// (0x0007b41d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe2b3,	// (0x0007b41d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc2b,	// (0x0007cd95) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc2b,	// (0x0007cd95) sp_fs_action_menu_list_gene_pane_g

0xa30a,	// (0x00077474) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa30a,	// (0x00077474) sp_fs_action_menu_list_gene_pane_t1

0xa322,	// (0x0007748c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa322,	// (0x0007748c) sp_fs_action_menu_list_gene_pane

0xe2c0,	// (0x0007b42a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe2c0,	// (0x0007b42a) popup_sp_fs_action_menu_bg_pane

0xb03a,	// (0x000781a4) sp_fs_action_menu_list_pane_ParamLimits

0xb03a,	// (0x000781a4) sp_fs_action_menu_list_pane

0xb05e,	// (0x000781c8) sp_fs_scroll_pane_cp01_ParamLimits

0xb05e,	// (0x000781c8) sp_fs_scroll_pane_cp01

0xabe7,	// (0x00077d51) list_medium_line_plain_t2_t1

0xabe7,	// (0x00077d51) list_medium_line_plain_t2_t2

0x0001,

0xfc18,	// (0x0007cd82) list_medium_line_plain_t2_t

0xabe7,	// (0x00077d51) list_medium_line_plain_t3_t1

0xabe7,	// (0x00077d51) list_medium_line_plain_t3_t2

0xabe7,	// (0x00077d51) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0007c3e6) list_medium_line_plain_t3_t

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g2_g1

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0007c32b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0007c32b) list_medium_line_x2_t2_g2_g

0xa65b,	// (0x000777c5) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t2_g2_t1

0xa65b,	// (0x000777c5) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x0007c300) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x0007c300) list_medium_line_x2_t2_g2_t

0xa43a,	// (0x000775a4) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t4_g2_g1

0xa43a,	// (0x000775a4) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0007c32b) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0007c32b) list_medium_line_x2_t4_g2_g

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g2_t1

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g2_t2

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g2_t3

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0007c339) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0007c339) list_medium_line_x2_t4_g2_t

0xa689,	// (0x000777f3) list_medium_line_t3_right_iconx2_g1

0xa689,	// (0x000777f3) list_medium_line_t3_right_iconx2_g2

0xa689,	// (0x000777f3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x0007c507) list_medium_line_t3_right_iconx2_g

0xabe7,	// (0x00077d51) list_medium_line_t3_right_iconx2_t1

0xabe7,	// (0x00077d51) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc18,	// (0x0007cd82) list_medium_line_t3_right_iconx2_t

0xa43a,	// (0x000775a4) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x3_t4_g4_g1

0xa43a,	// (0x000775a4) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x3_t4_g4_g2

0xa43a,	// (0x000775a4) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x3_t4_g4_g3

0xa43a,	// (0x000775a4) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0007c330) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0007c330) list_medium_line_x3_t4_g4_g

0xa65b,	// (0x000777c5) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x3_t4_g4_t1

0xa65b,	// (0x000777c5) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x3_t4_g4_t2

0xa65b,	// (0x000777c5) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x3_t4_g4_t3

0xa65b,	// (0x000777c5) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0007c339) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0007c339) list_medium_line_x3_t4_g4_t

0x6f29,	// (0x00074093) list_single_dyc_row_text_pane_t1_ParamLimits

0x6f29,	// (0x00074093) list_single_dyc_row_text_pane_t1

0x6f72,	// (0x000740dc) list_single_dyc_row_text_pane_t2_ParamLimits

0x6f72,	// (0x000740dc) list_single_dyc_row_text_pane_t2

0xb084,	// (0x000781ee) list_single_dyc_row_text_pane_t3_ParamLimits

0xb084,	// (0x000781ee) list_single_dyc_row_text_pane_t3

0x0005,

0xfc30,	// (0x0007cd9a) list_single_dyc_row_text_pane_t_ParamLimits

0xfc30,	// (0x0007cd9a) list_single_dyc_row_text_pane_t

0xb0a8,	// (0x00078212) list_single_dyc_row_pane_g1_ParamLimits

0xb0a8,	// (0x00078212) list_single_dyc_row_pane_g1

0xb0b4,	// (0x0007821e) list_single_dyc_row_pane_g2_ParamLimits

0xb0b4,	// (0x0007821e) list_single_dyc_row_pane_g2

0xb0c0,	// (0x0007822a) list_single_dyc_row_pane_g3_ParamLimits

0xb0c0,	// (0x0007822a) list_single_dyc_row_pane_g3

0xb0cc,	// (0x00078236) list_single_dyc_row_pane_g4_ParamLimits

0xb0cc,	// (0x00078236) list_single_dyc_row_pane_g4

0x0003,

0xfc3d,	// (0x0007cda7) list_single_dyc_row_pane_g_ParamLimits

0xfc3d,	// (0x0007cda7) list_single_dyc_row_pane_g

0xb0d8,	// (0x00078242) list_single_dyc_row_text_pane_ParamLimits

0xb0d8,	// (0x00078242) list_single_dyc_row_text_pane

0x93b2,	// (0x0007651c) bg_sp_fs_scroll_pane

0xe2ce,	// (0x0007b438) thumb_sp_fs_scroll_pane

0xa43a,	// (0x000775a4) list_medium_line_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_g1

0xa65b,	// (0x000777c5) list_medium_line_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t1

0xa43a,	// (0x000775a4) list_medium_line_x2_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_g1

0xa43a,	// (0x000775a4) list_medium_line_x2_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0007c32b) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0007c32b) list_medium_line_x2_g

0xa65b,	// (0x000777c5) list_medium_line_x2_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t1

0xa43a,	// (0x000775a4) list_medium_line_x3_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x3_g1

0xd2c0,	// (0x0007a42a) list_medium_line_x3_g2_ParamLimits

0xd2c0,	// (0x0007a42a) list_medium_line_x3_g2

0x0001,

0xfc46,	// (0x0007cdb0) list_medium_line_x3_g_ParamLimits

0xfc46,	// (0x0007cdb0) list_medium_line_x3_g

0xe2d7,	// (0x0007b441) list_medium_line_x3_t1_ParamLimits

0xe2d7,	// (0x0007b441) list_medium_line_x3_t1

0xe2eb,	// (0x0007b455) thumb_sp_fs_scroll_pane_g1

0xe2f4,	// (0x0007b45e) thumb_sp_fs_scroll_pane_g2

0xe2fd,	// (0x0007b467) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0007cdb5) thumb_sp_fs_scroll_pane_g

0xe2eb,	// (0x0007b455) bg_sp_fs_scroll_pane_g1

0xe2f4,	// (0x0007b45e) bg_sp_fs_scroll_pane_g2

0xe2fd,	// (0x0007b467) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0007cdb5) bg_sp_fs_scroll_pane_g

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g4_g1

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g4_g2

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g4_g3

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0007c330) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0007c330) list_medium_line_x2_t3_g4_g

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g4_t1

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g4_t2

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0007c324) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0007c324) list_medium_line_x2_t3_g4_t

0xa43a,	// (0x000775a4) list_medium_line_g2_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_g2_g1

0xa43a,	// (0x000775a4) list_medium_line_g2_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0007c32b) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0007c32b) list_medium_line_g2_g

0xa65b,	// (0x000777c5) list_medium_line_g2_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_g2_t1

0xa43a,	// (0x000775a4) list_medium_line_t3_g2_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t3_g2_g1

0xa43a,	// (0x000775a4) list_medium_line_t3_g2_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0007c32b) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0007c32b) list_medium_line_t3_g2_g

0xa65b,	// (0x000777c5) list_medium_line_t3_g2_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t3_g2_t1

0xa65b,	// (0x000777c5) list_medium_line_t3_g2_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t3_g2_t2

0xa65b,	// (0x000777c5) list_medium_line_t3_g2_t3_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0007c324) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0007c324) list_medium_line_t3_g2_t

0xa689,	// (0x000777f3) list_medium_line_right_icon_g1

0xabe7,	// (0x00077d51) list_medium_line_right_icon_t1

0xa43a,	// (0x000775a4) list_medium_line_t2_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t2_g1

0xa65b,	// (0x000777c5) list_medium_line_t2_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t2_t1

0xa65b,	// (0x000777c5) list_medium_line_t2_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x0007c300) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x0007c300) list_medium_line_t2_t

0xa43a,	// (0x000775a4) list_medium_line_t3_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t3_g1

0xa65b,	// (0x000777c5) list_medium_line_t3_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t3_t1

0xa65b,	// (0x000777c5) list_medium_line_t3_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t3_t2

0xa65b,	// (0x000777c5) list_medium_line_t3_t3_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0007c324) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0007c324) list_medium_line_t3_t

0xa43a,	// (0x000775a4) list_medium_line_g3_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_g3_g1

0xa43a,	// (0x000775a4) list_medium_line_g3_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_g3_g2

0xa43a,	// (0x000775a4) list_medium_line_g3_g3_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0007c31d) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0007c31d) list_medium_line_g3_g

0xa65b,	// (0x000777c5) list_medium_line_g3_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_g3_t1

0xa43a,	// (0x000775a4) list_medium_line_t2_g3_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t2_g3_g1

0xa43a,	// (0x000775a4) list_medium_line_t2_g3_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t2_g3_g2

0xa43a,	// (0x000775a4) list_medium_line_t2_g3_g3_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0007c31d) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0007c31d) list_medium_line_t2_g3_g

0xa65b,	// (0x000777c5) list_medium_line_t2_g3_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t2_g3_t1

0xa65b,	// (0x000777c5) list_medium_line_t2_g3_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x0007c300) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x0007c300) list_medium_line_t2_g3_t

0xa43a,	// (0x000775a4) list_medium_line_t3_g3_g1_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t3_g3_g1

0xa43a,	// (0x000775a4) list_medium_line_t3_g3_g2_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t3_g3_g2

0xa43a,	// (0x000775a4) list_medium_line_t3_g3_g3_ParamLimits

0xa43a,	// (0x000775a4) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0007c31d) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0007c31d) list_medium_line_t3_g3_g

0xa65b,	// (0x000777c5) list_medium_line_t3_g3_t1_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t3_g3_t1

0xa65b,	// (0x000777c5) list_medium_line_t3_g3_t2_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t3_g3_t2

0xa65b,	// (0x000777c5) list_medium_line_t3_g3_t3_ParamLimits

0xa65b,	// (0x000777c5) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0007c324) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0007c324) list_medium_line_t3_g3_t

0xa689,	// (0x000777f3) list_medium_line_right_iconx2_g1

0xa689,	// (0x000777f3) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x0007c502) list_medium_line_right_iconx2_g

0xabe7,	// (0x00077d51) list_medium_line_right_iconx2_t1

0xa689,	// (0x000777f3) list_medium_line_t2_right_iconx2_g1

0xa689,	// (0x000777f3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x0007c502) list_medium_line_t2_right_iconx2_g

0xabe7,	// (0x00077d51) list_medium_line_t2_right_iconx2_t1

0xabe7,	// (0x00077d51) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc18,	// (0x0007cd82) list_medium_line_t2_right_iconx2_t

0xabe7,	// (0x00077d51) list_medium_line_x4_t4_t1

0xabe7,	// (0x00077d51) list_medium_line_x4_t4_t2

0xabe7,	// (0x00077d51) list_medium_line_x4_t4_t3

0xabe7,	// (0x00077d51) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x0007c3ed) list_medium_line_x4_t4_t

0x70eb,	// (0x00074255) tport_appsw_pane_ParamLimits

0x70eb,	// (0x00074255) tport_appsw_pane

0x7103,	// (0x0007426d) tport_contact_pane_ParamLimits

0x7103,	// (0x0007426d) tport_contact_pane

0x711e,	// (0x00074288) tport_listscroll_pane_ParamLimits

0x711e,	// (0x00074288) tport_listscroll_pane

0x7136,	// (0x000742a0) cell_tport_appsw_pane_ParamLimits

0x7136,	// (0x000742a0) cell_tport_appsw_pane

0xb36e,	// (0x000784d8) tport_appsw_pane_g1_ParamLimits

0xb36e,	// (0x000784d8) tport_appsw_pane_g1

0x7180,	// (0x000742ea) tport_contact_pane_g1

0x7189,	// (0x000742f3) tport_contact_pane_t1

0x7197,	// (0x00074301) tport_contact_pane_t2

0x0001,

0xfc52,	// (0x0007cdbc) tport_contact_pane_t

0xe306,	// (0x0007b470) list_tport_pane

0xe30f,	// (0x0007b479) scroll_pane_cp_030

0x71ad,	// (0x00074317) cell_tport_appsw_pane_g1

0x71bd,	// (0x00074327) cell_tport_appsw_pane_t1

0x71cb,	// (0x00074335) grid_highlight_pane_cp019

0x71d3,	// (0x0007433d) list_tport_double_graphic_pane_ParamLimits

0x71d3,	// (0x0007433d) list_tport_double_graphic_pane

0x9a41,	// (0x00076bab) list_highlight_pane_cp023_ParamLimits

0x9a41,	// (0x00076bab) list_highlight_pane_cp023

0x71e0,	// (0x0007434a) list_tport_double_graphic_pane_g1_ParamLimits

0x71e0,	// (0x0007434a) list_tport_double_graphic_pane_g1

0x71ed,	// (0x00074357) list_tport_double_graphic_pane_t1_ParamLimits

0x71ed,	// (0x00074357) list_tport_double_graphic_pane_t1

0x7202,	// (0x0007436c) list_tport_double_graphic_pane_t2_ParamLimits

0x7202,	// (0x0007436c) list_tport_double_graphic_pane_t2

0x0001,

0xfc5e,	// (0x0007cdc8) list_tport_double_graphic_pane_t_ParamLimits

0xfc5e,	// (0x0007cdc8) list_tport_double_graphic_pane_t

0x93b2,	// (0x0007651c) main_cale_note_pane

0x4dbc,	// (0x00071f26) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4dbc,	// (0x00071f26) cell_vitu2_function_top_wide_pane_cp01

0x6793,	// (0x000738fd) wait_bar_pane_cp05_ParamLimits

0x9a41,	// (0x00076bab) listscroll_cmail_pane

0xe320,	// (0x0007b48a) list_cmail_pane

0x7214,	// (0x0007437e) list_cmail_body_pane

0x722b,	// (0x00074395) list_single_cmail_header_caption_pane

0x7245,	// (0x000743af) list_single_cmail_header_detail_pane_ParamLimits

0x7245,	// (0x000743af) list_single_cmail_header_detail_pane

0xe337,	// (0x0007b4a1) list_single_cmail_header_caption_pane_t1

0x7278,	// (0x000743e2) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7278,	// (0x000743e2) list_single_cmail_header_detail_pane_g1

0xb0f7,	// (0x00078261) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb0f7,	// (0x00078261) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc63,	// (0x0007cdcd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc63,	// (0x0007cdcd) list_single_cmail_header_detail_pane_g

0x7290,	// (0x000743fa) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7290,	// (0x000743fa) list_single_cmail_header_detail_pane_t1

0x72cc,	// (0x00074436) list_single_cmail_header_editor_pane_bg_ParamLimits

0x72cc,	// (0x00074436) list_single_cmail_header_editor_pane_bg

0xdf69,	// (0x0007b0d3) list_cmail_body_pane_g1

0xe35b,	// (0x0007b4c5) list_cmail_body_pane_t1

0xd2f8,	// (0x0007a462) list_single_cmail_header_editor_pane_bg_g1

0xa8ad,	// (0x00077a17) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd308,	// (0x0007a472) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd300,	// (0x0007a46a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd53e,	// (0x0007a6a8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd328,	// (0x0007a492) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd318,	// (0x0007a482) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd320,	// (0x0007a48a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa88d,	// (0x000779f7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x72df,	// (0x00074449) calenote_gesture_pane_ParamLimits

0x72df,	// (0x00074449) calenote_gesture_pane

0x72ff,	// (0x00074469) calenote_window_pane_ParamLimits

0x72ff,	// (0x00074469) calenote_window_pane

0xe369,	// (0x0007b4d3) popup_note_window_cp01

0x731b,	// (0x00074485) calenote_swipe_1_pane_ParamLimits

0x731b,	// (0x00074485) calenote_swipe_1_pane

0x6d8c,	// (0x00073ef6) calenote_swipe_2_pane_ParamLimits

0x6d8c,	// (0x00073ef6) calenote_swipe_2_pane

0xe183,	// (0x0007b2ed) calenote_swipe_1_pane_g1_ParamLimits

0xe183,	// (0x0007b2ed) calenote_swipe_1_pane_g1

0xe190,	// (0x0007b2fa) calenote_swipe_1_pane_g2_ParamLimits

0xe190,	// (0x0007b2fa) calenote_swipe_1_pane_g2

0x0001,

0xfc00,	// (0x0007cd6a) calenote_swipe_1_pane_g_ParamLimits

0xfc00,	// (0x0007cd6a) calenote_swipe_1_pane_g

0xe37b,	// (0x0007b4e5) calenote_swipe_1_pane_t1_ParamLimits

0xe37b,	// (0x0007b4e5) calenote_swipe_1_pane_t1

0xe183,	// (0x0007b2ed) calenote_swipe_2_pane_g1_ParamLimits

0xe183,	// (0x0007b2ed) calenote_swipe_2_pane_g1

0xe39a,	// (0x0007b504) calenote_swipe_2_pane_g2_ParamLimits

0xe39a,	// (0x0007b504) calenote_swipe_2_pane_g2

0x0001,

0xfc6f,	// (0x0007cdd9) calenote_swipe_2_pane_g_ParamLimits

0xfc6f,	// (0x0007cdd9) calenote_swipe_2_pane_g

0xe3a6,	// (0x0007b510) calenote_swipe_2_pane_t1_ParamLimits

0xe3a6,	// (0x0007b510) calenote_swipe_2_pane_t1

0x93b2,	// (0x0007651c) main_mup_navstr_pane

0x3c05,	// (0x00070d6f) main_mup3_pane_t7_ParamLimits

0x3c05,	// (0x00070d6f) main_mup3_pane_t7

0x9e43,	// (0x00076fad) main_mp4_pane_g6_ParamLimits

0x9e43,	// (0x00076fad) main_mp4_pane_g6

0xa005,	// (0x0007716f) main_image3_pane_t4_ParamLimits

0xa005,	// (0x0007716f) main_image3_pane_t4

0x7330,	// (0x0007449a) popup_navstr_preview_pane_ParamLimits

0x7330,	// (0x0007449a) popup_navstr_preview_pane

0x7340,	// (0x000744aa) scroll_navstr_pane_ParamLimits

0x7340,	// (0x000744aa) scroll_navstr_pane

0x93b2,	// (0x0007651c) bg_popup_preview_window_pane_cp04

0xe3cd,	// (0x0007b537) popup_navstr_preview_pane_t1

0x7354,	// (0x000744be) scroll_navstr_pane_g1_ParamLimits

0x7354,	// (0x000744be) scroll_navstr_pane_g1

0x7368,	// (0x000744d2) scroll_navstr_pane_t1_ParamLimits

0x7368,	// (0x000744d2) scroll_navstr_pane_t1

0xe372,	// (0x0007b4dc) bg_button_pane_cp014

0xe372,	// (0x0007b4dc) bg_button_pane_cp030

0x6c14,	// (0x00073d7e) list_double_fisheye_pane_g4_ParamLimits

0x6c14,	// (0x00073d7e) list_double_fisheye_pane_g4

0x6c20,	// (0x00073d8a) list_double_fisheye_pane_g5_ParamLimits

0x6c20,	// (0x00073d8a) list_double_fisheye_pane_g5

0xc2ee,	// (0x00079458) sp_fs_scroll_pane_cp03

0xe280,	// (0x0007b3ea) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe28c,	// (0x0007b3f6) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1d,	// (0x0007cd87) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x6e81,	// (0x00073feb) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe32f,	// (0x0007b499) sp_fs_scroll_pane_cp02

0xa5af,	// (0x00077719) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa5af,	// (0x00077719) popup_sp_fs_calendar_preview_list_single_pane

0x93b2,	// (0x0007651c) main_cam6_pano_pane

0x93da,	// (0x00076544) main_mup3_pane_ParamLimits

0x93b2,	// (0x0007651c) main_phacti_pane

0x6664,	// (0x000737ce) bg_button_pane_cp11

0x667e,	// (0x000737e8) main_mobtv_info_pane_g2_ParamLimits

0x667e,	// (0x000737e8) main_mobtv_info_pane_g2

0x0001,

0xfb7d,	// (0x0007cce7) main_mobtv_info_pane_g_ParamLimits

0xfb7d,	// (0x0007cce7) main_mobtv_info_pane_g

0x685b,	// (0x000739c5) sc_clock_pane_t5_ParamLimits

0x685b,	// (0x000739c5) sc_clock_pane_t5

0x6a8f,	// (0x00073bf9) main_radioblah_pane_g1_ParamLimits

0xe0cf,	// (0x0007b239) main_radioblah_pane_t3_ParamLimits

0xe0cf,	// (0x0007b239) main_radioblah_pane_t3

0xe0e7,	// (0x0007b251) main_radioblah_pane_t4_ParamLimits

0xe0e7,	// (0x0007b251) main_radioblah_pane_t4

0x6ab7,	// (0x00073c21) main_radioblah_text_pane_ParamLimits

0x6ab7,	// (0x00073c21) main_radioblah_text_pane

0x6ac9,	// (0x00073c33) main_radioblah_info_pane_g1_ParamLimits

0x6b62,	// (0x00073ccc) main_radioblah_info_pane_t4_ParamLimits

0x6b62,	// (0x00073ccc) main_radioblah_info_pane_t4

0x9a41,	// (0x00076bab) main_sp_fs_calendar_pane

0x737f,	// (0x000744e9) main_phacti_pane_g1

0x7387,	// (0x000744f1) phacti_note_pane_ParamLimits

0x7387,	// (0x000744f1) phacti_note_pane

0xe3e4,	// (0x0007b54e) phacti_term_pane_ParamLimits

0xe3e4,	// (0x0007b54e) phacti_term_pane

0xe3f9,	// (0x0007b563) phacti_note_pane_t1_ParamLimits

0xe3f9,	// (0x0007b563) phacti_note_pane_t1

0xb127,	// (0x00078291) phacti_term_pane_g1

0xb12f,	// (0x00078299) phacti_term_pane_t1_ParamLimits

0xb12f,	// (0x00078299) phacti_term_pane_t1

0xe410,	// (0x0007b57a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe418,	// (0x0007b582) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc79,	// (0x0007cde3) popup_sp_fs_calendar_preview_list_single_pane_g

0xe420,	// (0x0007b58a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe420,	// (0x0007b58a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe436,	// (0x0007b5a0) aid_popup_sp_fs_bg_corner_pane

0xa689,	// (0x000777f3) popup_sp_fs_calendar_preview_bg_pane_g1

0x93b2,	// (0x0007651c) popup_sp_fs_calendar_preview_bg_pane

0xe43e,	// (0x0007b5a8) popup_sp_fs_calendar_preview_list_pane

0xb390,	// (0x000784fa) bg_main_sp_fs_cale_pane_ParamLimits

0xb390,	// (0x000784fa) bg_main_sp_fs_cale_pane

0xb162,	// (0x000782cc) listscroll_cale_mrui_pane_ParamLimits

0xb162,	// (0x000782cc) listscroll_cale_mrui_pane

0xb177,	// (0x000782e1) listscroll_sp_fs_schedule_track_pane

0xb180,	// (0x000782ea) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xb180,	// (0x000782ea) main_sp_fs_ctrlbar_pane_cp01

0xe446,	// (0x0007b5b0) main_sp_fs_ribbon_pane

0xb193,	// (0x000782fd) popup_sp_fs_cale_preview_window

0x73fc,	// (0x00074566) list_single_sp_fs_schedule_track_pane_ParamLimits

0x73fc,	// (0x00074566) list_single_sp_fs_schedule_track_pane

0x9a41,	// (0x00076bab) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9a41,	// (0x00076bab) bg_sp_fs_highlight_list_pane_cp03

0x740f,	// (0x00074579) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x740f,	// (0x00074579) list_single_sp_fs_schedule_track_pane_g1

0x741b,	// (0x00074585) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x741b,	// (0x00074585) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7e,	// (0x0007cde8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7e,	// (0x0007cde8) list_single_sp_fs_schedule_track_pane_g

0x7427,	// (0x00074591) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7427,	// (0x00074591) list_single_sp_fs_schedule_track_pane_t1

0x7449,	// (0x000745b3) sp_fs_schedule_track_pane_ParamLimits

0x7449,	// (0x000745b3) sp_fs_schedule_track_pane

0xe44e,	// (0x0007b5b8) sp_fs_schedule_track_pane_g1

0xe456,	// (0x0007b5c0) sp_fs_schedule_track_pane_g2

0xe45e,	// (0x0007b5c8) sp_fs_schedule_track_pane_g3

0xe466,	// (0x0007b5d0) sp_fs_schedule_track_pane_g4

0xe46e,	// (0x0007b5d8) sp_fs_schedule_track_pane_g5

0x0004,

0xfc83,	// (0x0007cded) sp_fs_schedule_track_pane_g

0xd2f8,	// (0x0007a462) bg_sp_fs_schedule_viewer_highlight_g1

0xa8ad,	// (0x00077a17) bg_sp_fs_schedule_viewer_highlight_g2

0xd300,	// (0x0007a46a) bg_sp_fs_schedule_viewer_highlight_g3

0xd308,	// (0x0007a472) bg_sp_fs_schedule_viewer_highlight_g4

0xd53e,	// (0x0007a6a8) bg_sp_fs_schedule_viewer_highlight_g5

0xd318,	// (0x0007a482) bg_sp_fs_schedule_viewer_highlight_g6

0xd320,	// (0x0007a48a) bg_sp_fs_schedule_viewer_highlight_g7

0xd328,	// (0x0007a492) bg_sp_fs_schedule_viewer_highlight_g8

0xa88d,	// (0x000779f7) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8e,	// (0x0007cdf8) bg_sp_fs_schedule_viewer_highlight_g

0x93b2,	// (0x0007651c) bg_main_sp_fs_ribbon_pane

0x745e,	// (0x000745c8) main_sp_fs_ribbon_pane_g1

0xe476,	// (0x0007b5e0) main_sp_fs_ribbon_pane_t1

0x7467,	// (0x000745d1) main_sp_fs_ribbon_pane_t2

0xe485,	// (0x0007b5ef) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca1,	// (0x0007ce0b) main_sp_fs_ribbon_pane_t

0xe494,	// (0x0007b5fe) main_sp_fs_ribbon_scheduler_pane

0xe49c,	// (0x0007b606) bg_main_sp_fs_ribbon_pane_g1

0xe4a5,	// (0x0007b60f) bg_main_sp_fs_ribbon_pane_g2

0xe4ae,	// (0x0007b618) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca8,	// (0x0007ce12) bg_main_sp_fs_ribbon_pane_g

0xe4b6,	// (0x0007b620) main_sp_fs_ribbon_scheduler_pane_g1

0xe4bf,	// (0x0007b629) main_sp_fs_ribbon_scheduler_pane_g2

0xe4c8,	// (0x0007b632) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcaf,	// (0x0007ce19) main_sp_fs_ribbon_scheduler_pane_g

0xe4d1,	// (0x0007b63b) list_cale_mrui_pane

0x7476,	// (0x000745e0) sp_fs_scroll_pane_cp07_ParamLimits

0x7476,	// (0x000745e0) sp_fs_scroll_pane_cp07

0x7492,	// (0x000745fc) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7492,	// (0x000745fc) bg_sp_fs_schedule_viewer_highlight

0xe4de,	// (0x0007b648) list_single_sp_fs_schedule_track_pane_cp01

0xe4e6,	// (0x0007b650) list_sp_fs_schedule_track_pane

0xe4ee,	// (0x0007b658) sp_fs_scroll_pane_cp06_ParamLimits

0xe4ee,	// (0x0007b658) sp_fs_scroll_pane_cp06

0xa689,	// (0x000777f3) bgmain_sp_fs_calendar_pane_g1

0x74a4,	// (0x0007460e) list_single_cale_mrui_pane_ParamLimits

0x74a4,	// (0x0007460e) list_single_cale_mrui_pane

0xb1a5,	// (0x0007830f) list_single_cale_mrui_row_pane_ParamLimits

0xb1a5,	// (0x0007830f) list_single_cale_mrui_row_pane

0xb1b2,	// (0x0007831c) list_single_cale_mrui_row_pane_g1_ParamLimits

0xb1b2,	// (0x0007831c) list_single_cale_mrui_row_pane_g1

0xb1ea,	// (0x00078354) list_single_cale_mrui_row_pane_t1_ParamLimits

0xb1ea,	// (0x00078354) list_single_cale_mrui_row_pane_t1

0x74c7,	// (0x00074631) list_single_cale_mrui_row_pane_t2_ParamLimits

0x74c7,	// (0x00074631) list_single_cale_mrui_row_pane_t2

0xb1fc,	// (0x00078366) list_single_cale_mrui_row_pane_t3_ParamLimits

0xb1fc,	// (0x00078366) list_single_cale_mrui_row_pane_t3

0xb22b,	// (0x00078395) list_single_cale_mrui_row_pane_t4_ParamLimits

0xb22b,	// (0x00078395) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbd,	// (0x0007ce27) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbd,	// (0x0007ce27) list_single_cale_mrui_row_pane_t

0x752d,	// (0x00074697) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x752d,	// (0x00074697) list_single_cmail_header_editor_pane_bg_cp01

0x7559,	// (0x000746c3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7559,	// (0x000746c3) list_single_cmail_header_editor_pane_bg_cp02

0x7577,	// (0x000746e1) main_radioblah_text_pane_t1_ParamLimits

0x7577,	// (0x000746e1) main_radioblah_text_pane_t1

0xe50d,	// (0x0007b677) cam6_indi_pane_cp01

0xe515,	// (0x0007b67f) cam6_mode_pane_cp01

0xe51d,	// (0x0007b687) cam6_pano_pane

0xe526,	// (0x0007b690) cam6_zoom_pane_cp01

0xe530,	// (0x0007b69a) cam6_pano_image_pane

0xe539,	// (0x0007b6a3) cam6_pano_pane_g1

0xdf69,	// (0x0007b0d3) cam6_pano_pane_g2

0xe542,	// (0x0007b6ac) cam6_pano_pane_g3

0xe54b,	// (0x0007b6b5) cam6_pano_pane_g4

0xcf84,	// (0x0007a0ee) cam6_pano_pane_g5

0xe554,	// (0x0007b6be) cam6_pano_pane_g6

0xe55c,	// (0x0007b6c6) cam6_pano_pane_g7

0xe564,	// (0x0007b6ce) cam6_pano_pane_g8

0xe56d,	// (0x0007b6d7) cam6_pano_pane_g9

0x0008,

0xfcc6,	// (0x0007ce30) cam6_pano_pane_g

0x93b2,	// (0x0007651c) main_browser_tag_pane

0xe3c5,	// (0x0007b52f) grid_navstr_albumart_pane

0xe578,	// (0x0007b6e2) cell_navstr_albumart_pane_ParamLimits

0xe578,	// (0x0007b6e2) cell_navstr_albumart_pane

0xe594,	// (0x0007b6fe) cell_navstr_albumart_pane_g1

0xc4b0,	// (0x0007961a) cell_navstr_albumart_pane_g2

0xc4c0,	// (0x0007962a) cell_navstr_albumart_pane_g3

0xc4b8,	// (0x00079622) cell_navstr_albumart_pane_g4

0x0003,

0xfcd9,	// (0x0007ce43) cell_navstr_albumart_pane_g

0x7592,	// (0x000746fc) bt_list_pane_ParamLimits

0x7592,	// (0x000746fc) bt_list_pane

0x75a8,	// (0x00074712) bt_list_pane_t1

0x75b7,	// (0x00074721) bt_list_pane_t2

0x0001,

0xfce2,	// (0x0007ce4c) bt_list_pane_t

0x93b2,	// (0x0007651c) main_cale_prevew_pane

0x75c6,	// (0x00074730) popup_cale_preview_window_ParamLimits

0x75c6,	// (0x00074730) popup_cale_preview_window

0x9a41,	// (0x00076bab) bg_popup_preview_window_pane_cp05_ParamLimits

0x9a41,	// (0x00076bab) bg_popup_preview_window_pane_cp05

0xe59c,	// (0x0007b706) list_cale_preview_pane_ParamLimits

0xe59c,	// (0x0007b706) list_cale_preview_pane

0x75e3,	// (0x0007474d) list_double_cale_preview_pane_ParamLimits

0x75e3,	// (0x0007474d) list_double_cale_preview_pane

0x75f7,	// (0x00074761) list_single_cale_preview_pane_ParamLimits

0x75f7,	// (0x00074761) list_single_cale_preview_pane

0x760f,	// (0x00074779) list_single_cale_preview_pane_g1

0x7617,	// (0x00074781) list_single_cale_preview_pane_t1_ParamLimits

0x7617,	// (0x00074781) list_single_cale_preview_pane_t1

0x762c,	// (0x00074796) list_double_cale_preview_pane_g1

0x7634,	// (0x0007479e) list_double_cale_preview_pane_t1_ParamLimits

0x7634,	// (0x0007479e) list_double_cale_preview_pane_t1

0x7649,	// (0x000747b3) list_double_cale_preview_pane_t2_ParamLimits

0x7649,	// (0x000747b3) list_double_cale_preview_pane_t2

0x0001,

0xfce7,	// (0x0007ce51) list_double_cale_preview_pane_t_ParamLimits

0xfce7,	// (0x0007ce51) list_double_cale_preview_pane_t

0x93b2,	// (0x0007651c) main_ezdial_pane

0x9a41,	// (0x00076bab) main_sp_fs_email_pane_ParamLimits

0x6dec,	// (0x00073f56) cmail_ddmenu_btn01_pane_ParamLimits

0x6dec,	// (0x00073f56) cmail_ddmenu_btn01_pane

0x6dff,	// (0x00073f69) cmail_ddmenu_btn02_pane_ParamLimits

0x6dff,	// (0x00073f69) cmail_ddmenu_btn02_pane

0x6e22,	// (0x00073f8c) cmail_ddmenu_btn03_pane_ParamLimits

0x6e22,	// (0x00073f8c) cmail_ddmenu_btn03_pane

0x6ec0,	// (0x0007402a) main_sp_fs_ctrlbar_pane_ParamLimits

0x6ee4,	// (0x0007404e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7214,	// (0x0007437e) list_cmail_body_pane_ParamLimits

0xe345,	// (0x0007b4af) bg_button_pane_cp12

0xe34e,	// (0x0007b4b8) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe34e,	// (0x0007b4b8) list_single_cmail_header_detail_pane_g3

0xb103,	// (0x0007826d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xb103,	// (0x0007826d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6a,	// (0x0007cdd4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6a,	// (0x0007cdd4) list_single_cmail_header_detail_pane_t

0xb144,	// (0x000782ae) phacti_term_pane_t2_ParamLimits

0xb144,	// (0x000782ae) phacti_term_pane_t2

0x0001,

0xfc74,	// (0x0007cdde) phacti_term_pane_t_ParamLimits

0xfc74,	// (0x0007cdde) phacti_term_pane_t

0xe5a8,	// (0x0007b712) aid_size_list_single_double

0x7661,	// (0x000747cb) popup_ezdial_listscroll_window

0x767d,	// (0x000747e7) popup_number_entry_window_cp01

0xa653,	// (0x000777bd) bg_popup_call_pane_cp09

0xe5b4,	// (0x0007b71e) ezdial_list_pane

0xe5bc,	// (0x0007b726) scroll_pane_cp23

0xb390,	// (0x000784fa) bg_button_pane_cp028_ParamLimits

0xb390,	// (0x000784fa) bg_button_pane_cp028

0x768b,	// (0x000747f5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x768b,	// (0x000747f5) cmail_ddmenu_btn01_pane_g1

0x769a,	// (0x00074804) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x769a,	// (0x00074804) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcec,	// (0x0007ce56) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcec,	// (0x0007ce56) cmail_ddmenu_btn01_pane_g

0xe5c4,	// (0x0007b72e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5c4,	// (0x0007b72e) cmail_ddmenu_btn01_pane_t1

0xb390,	// (0x000784fa) bg_button_pane_cp029_ParamLimits

0xb390,	// (0x000784fa) bg_button_pane_cp029

0x76b0,	// (0x0007481a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x76b0,	// (0x0007481a) cmail_ddmenu_btn02_pane_g1

0x76cb,	// (0x00074835) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x76cb,	// (0x00074835) cmail_ddmenu_btn02_pane_t1

0x9a41,	// (0x00076bab) bg_button_pane_cp031_ParamLimits

0x9a41,	// (0x00076bab) bg_button_pane_cp031

0x76b0,	// (0x0007481a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x76b0,	// (0x0007481a) cmail_ddmenu_btn03_pane_g1

0x76cb,	// (0x00074835) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x76cb,	// (0x00074835) cmail_ddmenu_btn03_pane_t1

0x4590,	// (0x000716fa) cell_dialer2_keypad_pane_t1_ParamLimits

0x45aa,	// (0x00071714) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x45aa,	// (0x00071714) cell_dialer2_keypad_pane_t1_copy1

0x6485,	// (0x000735ef) ncimui_group_button_pane

0x9a41,	// (0x00076bab) main_sp_fs_calendar_pane_ParamLimits

0x722b,	// (0x00074395) list_single_cmail_header_caption_pane_ParamLimits

0xb159,	// (0x000782c3) aid_recal_txt_sm_pane

0x93b2,	// (0x0007651c) mian_recal_day_pane

0xb193,	// (0x000782fd) popup_sp_fs_cale_preview_window_ParamLimits

0xe5da,	// (0x0007b744) list_recal_day_pane

0xb276,	// (0x000783e0) list_single_recal_day_pane_ParamLimits

0xb276,	// (0x000783e0) list_single_recal_day_pane

0xe601,	// (0x0007b76b) list_single_recal_day_pane_g1_ParamLimits

0xe601,	// (0x0007b76b) list_single_recal_day_pane_g1

0xb288,	// (0x000783f2) list_single_recal_day_pane_g2_ParamLimits

0xb288,	// (0x000783f2) list_single_recal_day_pane_g2

0xb294,	// (0x000783fe) list_single_recal_day_pane_g3_ParamLimits

0xb294,	// (0x000783fe) list_single_recal_day_pane_g3

0x76f2,	// (0x0007485c) list_single_recal_day_pane_g4_ParamLimits

0x76f2,	// (0x0007485c) list_single_recal_day_pane_g4

0xb2a0,	// (0x0007840a) list_single_recal_day_pane_g5_ParamLimits

0xb2a0,	// (0x0007840a) list_single_recal_day_pane_g5

0xb2ac,	// (0x00078416) list_single_recal_day_pane_g6_ParamLimits

0xb2ac,	// (0x00078416) list_single_recal_day_pane_g6

0x0004,

0xfcfb,	// (0x0007ce65) list_single_recal_day_pane_g_ParamLimits

0xfcfb,	// (0x0007ce65) list_single_recal_day_pane_g

0xb2c0,	// (0x0007842a) list_single_recal_day_pane_t1

0xb2d2,	// (0x0007843c) list_single_recal_day_pane_t2

0x0001,

0xfd06,	// (0x0007ce70) list_single_recal_day_pane_t

0x770a,	// (0x00074874) ncimui_query_button_pane_ParamLimits

0x770a,	// (0x00074874) ncimui_query_button_pane

0x771a,	// (0x00074884) ncimui_query_button_pane_t1_ParamLimits

0x771a,	// (0x00074884) ncimui_query_button_pane_t1

0xe60d,	// (0x0007b777) ncimui_query_button_pane_t2_ParamLimits

0xe60d,	// (0x0007b777) ncimui_query_button_pane_t2

0x0001,

0xfd0b,	// (0x0007ce75) ncimui_query_button_pane_t_ParamLimits

0xfd0b,	// (0x0007ce75) ncimui_query_button_pane_t

0x772d,	// (0x00074897) query_button_pane_ParamLimits

0x772d,	// (0x00074897) query_button_pane

0x93b2,	// (0x0007651c) bg_button_pane_cp0028

0xe620,	// (0x0007b78a) query_button_pane_t1

0x2e67,	// (0x0006ffd1) main_tport_pane_ParamLimits

0x70a7,	// (0x00074211) bg_popup_window_pane_cp01_ParamLimits

0x70a7,	// (0x00074211) bg_popup_window_pane_cp01

0x70c0,	// (0x0007422a) heading_pane_cp08_ParamLimits

0x70c0,	// (0x0007422a) heading_pane_cp08

0x70d6,	// (0x00074240) heading_pane_cp07_ParamLimits

0x70d6,	// (0x00074240) heading_pane_cp07

0x71ad,	// (0x00074317) cell_tport_appsw_pane_g2

0x0002,

0xfc57,	// (0x0007cdc1) cell_tport_appsw_pane_g

0x9ba4,	// (0x00076d0e) input_candi_list_open_g1

0xaa87,	// (0x00077bf1) list_cale_time_pane_g6_ParamLimits

0xaa87,	// (0x00077bf1) list_cale_time_pane_g6

0x3524,	// (0x0007068e) aid_size_touch_calib_1_ParamLimits

0x3524,	// (0x0007068e) aid_size_touch_calib_1

0x3536,	// (0x000706a0) aid_size_touch_calib_2_ParamLimits

0x3536,	// (0x000706a0) aid_size_touch_calib_2

0x354e,	// (0x000706b8) aid_size_touch_calib_3_ParamLimits

0x354e,	// (0x000706b8) aid_size_touch_calib_3

0x356c,	// (0x000706d6) aid_size_touch_calib_4_ParamLimits

0x356c,	// (0x000706d6) aid_size_touch_calib_4

0x3584,	// (0x000706ee) main_touch_calib_button_group_pane_ParamLimits

0x3584,	// (0x000706ee) main_touch_calib_button_group_pane

0x359c,	// (0x00070706) main_touch_calib_pane_g1_ParamLimits

0x35ae,	// (0x00070718) main_touch_calib_pane_g2_ParamLimits

0x35c0,	// (0x0007072a) main_touch_calib_pane_g3_ParamLimits

0x35d2,	// (0x0007073c) main_touch_calib_pane_g4_ParamLimits

0xf699,	// (0x0007c803) main_touch_calib_pane_g_ParamLimits

0x35e4,	// (0x0007074e) main_touch_calib_pane_t1_ParamLimits

0x35fe,	// (0x00070768) main_touch_calib_pane_t2_ParamLimits

0x3618,	// (0x00070782) main_touch_calib_pane_t3_ParamLimits

0x362c,	// (0x00070796) main_touch_calib_pane_t4_ParamLimits

0x3642,	// (0x000707ac) main_touch_calib_pane_t5_ParamLimits

0xf6a2,	// (0x0007c80c) main_touch_calib_pane_t_ParamLimits

0xcd37,	// (0x00079ea1) list_single_fp_cale_pane_g3_ParamLimits

0xcd37,	// (0x00079ea1) list_single_fp_cale_pane_g3

0x93da,	// (0x00076544) bg_button_pane_cp012_ParamLimits

0x93da,	// (0x00076544) bg_vkb2_func_pane_cp03_ParamLimits

0x560d,	// (0x00072777) cell_vitu2_function_top_pane_g1_ParamLimits

0x93da,	// (0x00076544) bg_vkb2_func_pane_cp04_ParamLimits

0x6410,	// (0x0007357a) main_ncimui_button_group_pane_ParamLimits

0x6410,	// (0x0007357a) main_ncimui_button_group_pane

0x6470,	// (0x000735da) main_ncimui_pane_t3_ParamLimits

0x6470,	// (0x000735da) main_ncimui_pane_t3

0xe3db,	// (0x0007b545) phacti_button_group_pane

0xe5a8,	// (0x0007b712) aid_size_list_single_double_ParamLimits

0x7661,	// (0x000747cb) popup_ezdial_listscroll_window_ParamLimits

0x767d,	// (0x000747e7) popup_number_entry_window_cp01_ParamLimits

0x7740,	// (0x000748aa) phacti_button_pane_ParamLimits

0x7740,	// (0x000748aa) phacti_button_pane

0x93b2,	// (0x0007651c) bg_button_pane_cp14

0xe62e,	// (0x0007b798) phacti_button_pane_t1

0x7751,	// (0x000748bb) main_touch_calib_button_pane_ParamLimits

0x7751,	// (0x000748bb) main_touch_calib_button_pane

0xa4ac,	// (0x00077616) bg_button_pane_cp18_ParamLimits

0xa4ac,	// (0x00077616) bg_button_pane_cp18

0xe63c,	// (0x0007b7a6) main_touch_calib_button_pane_t1_ParamLimits

0xe63c,	// (0x0007b7a6) main_touch_calib_button_pane_t1

0xe652,	// (0x0007b7bc) main_touch_calib_button_pane_t2_ParamLimits

0xe652,	// (0x0007b7bc) main_touch_calib_button_pane_t2

0x0001,

0xfd10,	// (0x0007ce7a) main_touch_calib_button_pane_t_ParamLimits

0xfd10,	// (0x0007ce7a) main_touch_calib_button_pane_t

0x93b2,	// (0x0007651c) cell_ncimui_button_pane

0x93b2,	// (0x0007651c) bg_button_pane_cp032

0xe670,	// (0x0007b7da) cell_ncimui_button_pane_t1

0x9fe3,	// (0x0007714d) image3_infobar_pane_ParamLimits

0x9fe3,	// (0x0007714d) image3_infobar_pane

0x6887,	// (0x000739f1) fs_bigclock_status_pane_ParamLimits

0x6887,	// (0x000739f1) fs_bigclock_status_pane

0x6894,	// (0x000739fe) main_fs_bigclock_clock_pane_ParamLimits

0x6894,	// (0x000739fe) main_fs_bigclock_clock_pane

0x68c6,	// (0x00073a30) main_fs_bigclock_indi_pane_ParamLimits

0x68c6,	// (0x00073a30) main_fs_bigclock_indi_pane

0x6906,	// (0x00073a70) main_fs_bigclock_swipe_pane_ParamLimits

0x6906,	// (0x00073a70) main_fs_bigclock_swipe_pane

0x93b2,	// (0x0007651c) main_fs_clock_dumped_data

0x6952,	// (0x00073abc) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x6952,	// (0x00073abc) list_single_fs_bigclock_indicator_pane_g1

0x696b,	// (0x00073ad5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x696b,	// (0x00073ad5) list_single_fs_bigclock_indicator_pane_g2

0x6985,	// (0x00073aef) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x6985,	// (0x00073aef) list_single_fs_bigclock_indicator_pane_g3

0x699f,	// (0x00073b09) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x699f,	// (0x00073b09) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb1,	// (0x0007cd1b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb1,	// (0x0007cd1b) list_single_fs_bigclock_indicator_pane_g

0x69ce,	// (0x00073b38) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x69ce,	// (0x00073b38) list_single_fs_bigclock_indicator_pane_t1

0x69f6,	// (0x00073b60) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x69f6,	// (0x00073b60) list_single_fs_bigclock_indicator_pane_t2

0x6a1e,	// (0x00073b88) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x6a1e,	// (0x00073b88) list_single_fs_bigclock_indicator_pane_t3

0x6a46,	// (0x00073bb0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x6a46,	// (0x00073bb0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbbc,	// (0x0007cd26) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbbc,	// (0x0007cd26) list_single_fs_bigclock_indicator_pane_t

0xe67e,	// (0x0007b7e8) image3_infobar_fav_pane_ParamLimits

0xe67e,	// (0x0007b7e8) image3_infobar_fav_pane

0xe68e,	// (0x0007b7f8) image3_infobar_loc_pane_ParamLimits

0xe68e,	// (0x0007b7f8) image3_infobar_loc_pane

0xe6a4,	// (0x0007b80e) image3_infobar_time_pane_ParamLimits

0xe6a4,	// (0x0007b80e) image3_infobar_time_pane

0xa689,	// (0x000777f3) image3_infobar_time_pane_g1

0xe6b4,	// (0x0007b81e) image3_infobar_time_pane_t1

0xa689,	// (0x000777f3) image3_infobar_loc_pane_g1

0xe6c2,	// (0x0007b82c) image3_infobar_loc_pane_g2

0x0001,

0xfd15,	// (0x0007ce7f) image3_infobar_loc_pane_g

0xe6ca,	// (0x0007b834) image3_infobar_loc_pane_t1

0xa689,	// (0x000777f3) image3_infobar_fav_pane_g1

0xe6d8,	// (0x0007b842) image3_infobar_fav_pane_g2

0x0001,

0xfd1a,	// (0x0007ce84) image3_infobar_fav_pane_g

0xe6e0,	// (0x0007b84a) fs_bigclock_status_battery_pane

0xe6e9,	// (0x0007b853) fs_bigclock_status_signal_pane

0xe6f2,	// (0x0007b85c) fs_bigclock_status_title_pane

0xe6fb,	// (0x0007b865) fs_bigclock_status_signal_pane_g1

0xe704,	// (0x0007b86e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1f,	// (0x0007ce89) fs_bigclock_status_signal_pane_g

0xe70c,	// (0x0007b876) fs_bigclock_status_battery_pane_g1

0xe715,	// (0x0007b87f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd24,	// (0x0007ce8e) fs_bigclock_status_battery_pane_g

0xe71d,	// (0x0007b887) fs_bigclock_status_title_pane_t1

0x7766,	// (0x000748d0) main_fs_bigclock_clock_pane_g1

0x7766,	// (0x000748d0) main_fs_bigclock_clock_pane_g2

0x7779,	// (0x000748e3) main_fs_bigclock_clock_pane_g3

0x7779,	// (0x000748e3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd29,	// (0x0007ce93) main_fs_bigclock_clock_pane_g

0x7790,	// (0x000748fa) main_fs_bigclock_clock_pane_t1

0x77a6,	// (0x00074910) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd32,	// (0x0007ce9c) main_fs_bigclock_clock_pane_t

0xe72b,	// (0x0007b895) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe72b,	// (0x0007b895) list_single_fs_bigclock_indicator_pane

0xe73c,	// (0x0007b8a6) list_single_fs_bigclock_pane_ParamLimits

0xe73c,	// (0x0007b8a6) list_single_fs_bigclock_pane

0xe762,	// (0x0007b8cc) main_fs_bigclock_indicator_pane_t1

0xe771,	// (0x0007b8db) list_single_fs_bigclock_pane_g1

0xe779,	// (0x0007b8e3) list_single_fs_bigclock_pane_t1

0xa689,	// (0x000777f3) main_fs_bigclock_swipe_pane_g1

0xe7bc,	// (0x0007b926) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd43,	// (0x0007cead) main_fs_bigclock_swipe_pane_g

0xe7c4,	// (0x0007b92e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe7c4,	// (0x0007b92e) main_fs_bigclock_swipe_pane_t1

0x1d98,	// (0x0006ef02) call_type_pane_ParamLimits

0x93b2,	// (0x0007651c) main_btmg_pane

0xb1de,	// (0x00078348) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb1de,	// (0x00078348) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb6,	// (0x0007ce20) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb6,	// (0x0007ce20) list_single_cale_mrui_row_pane_g

0xb264,	// (0x000783ce) list_recal_vselct_arw_lo_pane

0xe5f9,	// (0x0007b763) list_recal_vselct_arw_up_pane

0xb26c,	// (0x000783d6) list_recal_vselct_pane

0x7808,	// (0x00074972) btmg_button_pane

0x7812,	// (0x0007497c) main_btmg_pane_g1

0x93b2,	// (0x0007651c) bg_button_pane_cp044

0xe7e1,	// (0x0007b94b) btmg_button_pane_t1

0xc602,	// (0x0007976c) aid_listscroll_gen

0x9a41,	// (0x00076bab) main_cntbar_detail_pane

0xe318,	// (0x0007b482) list_cmail_folder_pane

0xc2ee,	// (0x00079458) sp_fs_scroll_pane_cp03_ParamLimits

0x781c,	// (0x00074986) list_single_fs_dyc_pane_cp01_ParamLimits

0x781c,	// (0x00074986) list_single_fs_dyc_pane_cp01

0xe7ef,	// (0x0007b959) aid_size_cmail_indent

0xb2e4,	// (0x0007844e) list_single_dyc_row_pane_cp01

0x786b,	// (0x000749d5) cntbar_detail_list_pane_ParamLimits

0x786b,	// (0x000749d5) cntbar_detail_list_pane

0x78bd,	// (0x00074a27) main_cntbar_detail_cont_pane_ParamLimits

0x78bd,	// (0x00074a27) main_cntbar_detail_cont_pane

0xc2ee,	// (0x00079458) scroll_pane_cp032_ParamLimits

0xc2ee,	// (0x00079458) scroll_pane_cp032

0x78d1,	// (0x00074a3b) cntbar_detail_list_event_pane_ParamLimits

0x78d1,	// (0x00074a3b) cntbar_detail_list_event_pane

0x787d,	// (0x000749e7) cntbar_detail_list_shct_pane

0xa8fb,	// (0x00077a65) aid_list_gen

0xe7f8,	// (0x0007b962) aid_scroll

0xe801,	// (0x0007b96b) aid_size_touch_scroll_bar

0x78e1,	// (0x00074a4b) aid_list_double

0x78ea,	// (0x00074a54) aid_list_single

0x78e1,	// (0x00074a4b) aid_list_single_lg

0x78f3,	// (0x00074a5d) aid_list_z_g_a_sm

0x78fb,	// (0x00074a65) aid_list_z_g_d

0x7903,	// (0x00074a6d) aid_txt_z_prm

0x7911,	// (0x00074a7b) aid_txt_z_prm_cp01

0x791f,	// (0x00074a89) aid_txt_z_sec

0x792d,	// (0x00074a97) main_cntbar_detail_cont_pane_g1_ParamLimits

0x792d,	// (0x00074a97) main_cntbar_detail_cont_pane_g1

0x7941,	// (0x00074aab) main_cntbar_detail_cont_pane_g2_ParamLimits

0x7941,	// (0x00074aab) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd48,	// (0x0007ceb2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd48,	// (0x0007ceb2) main_cntbar_detail_cont_pane_g

0xe80a,	// (0x0007b974) main_cntbar_detail_cont_pane_t1

0xe818,	// (0x0007b982) main_cntbar_detail_cont_pane_t2

0xe826,	// (0x0007b990) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4d,	// (0x0007ceb7) main_cntbar_detail_cont_pane_t

0x7951,	// (0x00074abb) cell_cntbar_detail_list_shct_pane_ParamLimits

0x7951,	// (0x00074abb) cell_cntbar_detail_list_shct_pane

0xe834,	// (0x0007b99e) cntbar_detail_list_shct_pane_g1

0xe83d,	// (0x0007b9a7) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd54,	// (0x0007cebe) cntbar_detail_list_shct_pane_g

0x7963,	// (0x00074acd) cntbar_detail_list_event_pane_g1_ParamLimits

0x7963,	// (0x00074acd) cntbar_detail_list_event_pane_g1

0x796f,	// (0x00074ad9) cntbar_detail_list_event_pane_g2_ParamLimits

0x796f,	// (0x00074ad9) cntbar_detail_list_event_pane_g2

0x0005,

0xfd59,	// (0x0007cec3) cntbar_detail_list_event_pane_g_ParamLimits

0xfd59,	// (0x0007cec3) cntbar_detail_list_event_pane_g

0x79dd,	// (0x00074b47) cntbar_detail_list_event_pane_t1_ParamLimits

0x79dd,	// (0x00074b47) cntbar_detail_list_event_pane_t1

0x79f2,	// (0x00074b5c) cntbar_detail_list_event_pane_t2_ParamLimits

0x79f2,	// (0x00074b5c) cntbar_detail_list_event_pane_t2

0x0002,

0xfd66,	// (0x0007ced0) cntbar_detail_list_event_pane_t_ParamLimits

0xfd66,	// (0x0007ced0) cntbar_detail_list_event_pane_t

0xa689,	// (0x000777f3) cell_cntbar_detail_list_shct_pane_g1

0x2132,	// (0x0006f29c) navi_pane_mv_g3

0x9a41,	// (0x00076bab) main_cntbar_detail_pane_ParamLimits

0x93b2,	// (0x0007651c) main_notif_wgt_pane

0x9dd1,	// (0x00076f3b) aid_tch_main_mp4_pane_g4

0x9fd9,	// (0x00077143) popup_slider_window_cp02

0xb25a,	// (0x000783c4) list_recal_day_event_pane

0x7837,	// (0x000749a1) cntbar_detail_btn_pane_ParamLimits

0x7837,	// (0x000749a1) cntbar_detail_btn_pane

0x7850,	// (0x000749ba) cntbar_detail_btn_pane_cp01_ParamLimits

0x7850,	// (0x000749ba) cntbar_detail_btn_pane_cp01

0x787d,	// (0x000749e7) cntbar_detail_list_shct_pane_ParamLimits

0x788d,	// (0x000749f7) cntbar_detail_pane_g1_ParamLimits

0x788d,	// (0x000749f7) cntbar_detail_pane_g1

0x78a1,	// (0x00074a0b) cntbar_detail_pane_t1_ParamLimits

0x78a1,	// (0x00074a0b) cntbar_detail_pane_t1

0x797b,	// (0x00074ae5) cntbar_detail_list_event_pane_g3_ParamLimits

0x797b,	// (0x00074ae5) cntbar_detail_list_event_pane_g3

0x7993,	// (0x00074afd) cntbar_detail_list_event_pane_g4_ParamLimits

0x7993,	// (0x00074afd) cntbar_detail_list_event_pane_g4

0x79ab,	// (0x00074b15) cntbar_detail_list_event_pane_g5_ParamLimits

0x79ab,	// (0x00074b15) cntbar_detail_list_event_pane_g5

0x79c3,	// (0x00074b2d) cntbar_detail_list_event_pane_g6_ParamLimits

0x79c3,	// (0x00074b2d) cntbar_detail_list_event_pane_g6

0x7a07,	// (0x00074b71) cntbar_detail_list_event_pane_t3_ParamLimits

0x7a07,	// (0x00074b71) cntbar_detail_list_event_pane_t3

0x7a19,	// (0x00074b83) popup_notif_wgt_window_ParamLimits

0x7a19,	// (0x00074b83) popup_notif_wgt_window

0x7a32,	// (0x00074b9c) popup_submenu_window_cp01_ParamLimits

0x7a32,	// (0x00074b9c) popup_submenu_window_cp01

0xa653,	// (0x000777bd) bg_popup_window_pane_cp10

0xe846,	// (0x0007b9b0) listscroll_notif_wgt_pane

0xe858,	// (0x0007b9c2) list_notif_wgt_window

0xe861,	// (0x0007b9cb) scroll_pane_cp033

0x7a46,	// (0x00074bb0) list_notif_wgt_row_pane_ParamLimits

0x7a46,	// (0x00074bb0) list_notif_wgt_row_pane

0xe86a,	// (0x0007b9d4) aid_size_list_notif_wgt_del

0xe877,	// (0x0007b9e1) list_notif_wgt_row_pane_g1

0xe883,	// (0x0007b9ed) list_notif_wgt_row_pane_g2

0xe892,	// (0x0007b9fc) list_notif_wgt_row_pane_g3

0x0002,

0xfd6d,	// (0x0007ced7) list_notif_wgt_row_pane_g

0xe89f,	// (0x0007ba09) list_notif_wgt_row_pane_t1

0xe8b5,	// (0x0007ba1f) list_notif_wgt_row_pane_t2

0xe8c7,	// (0x0007ba31) list_notif_wgt_row_pane_t3

0x0002,

0xfd74,	// (0x0007cede) list_notif_wgt_row_pane_t

0xd558,	// (0x0007a6c2) list_recal_day_event_pane_g1

0xe8d9,	// (0x0007ba43) list_recal_day_event_pane_t1

0x93b2,	// (0x0007651c) bg_button_pane_cp045

0x7a56,	// (0x00074bc0) cntbar_detail_btn_pane_t1

0xb390,	// (0x000784fa) main_callh_pane_ParamLimits

0xb390,	// (0x000784fa) main_callh_pane

0x93b2,	// (0x0007651c) main_coverflow0_pane

0x93b2,	// (0x0007651c) main_wgtman_pane

0x6927,	// (0x00073a91) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6927,	// (0x00073a91) main_fs_bigclock_unlock_btn_pane

0x71a5,	// (0x0007430f) bg_button_pane_cp16

0x71b5,	// (0x0007431f) cell_tport_appsw_pane_g3

0x7a64,	// (0x00074bce) cf0_flow_pane_ParamLimits

0x7a64,	// (0x00074bce) cf0_flow_pane

0xe8e8,	// (0x0007ba52) listscroll_cf0_pane

0xe8f3,	// (0x0007ba5d) main_cf0_pane_g1

0x7a79,	// (0x00074be3) main_cf0_pane_t1_ParamLimits

0x7a79,	// (0x00074be3) main_cf0_pane_t1

0x7a90,	// (0x00074bfa) main_cf0_pane_t2_ParamLimits

0x7a90,	// (0x00074bfa) main_cf0_pane_t2

0x0001,

0xfd80,	// (0x0007ceea) main_cf0_pane_t_ParamLimits

0xfd80,	// (0x0007ceea) main_cf0_pane_t

0xe905,	// (0x0007ba6f) scroll_pane_cp11

0x7aa7,	// (0x00074c11) cf0_flow_pane_g1

0x7ab3,	// (0x00074c1d) cf0_flow_pane_g2

0x0001,

0xfd85,	// (0x0007ceef) cf0_flow_pane_g

0x7abf,	// (0x00074c29) cf0_flow_pane_t1

0x93b2,	// (0x0007651c) main_call6_pane

0x93b2,	// (0x0007651c) main_calllock_pane

0x7ad1,	// (0x00074c3b) call6_btn_grp_pane_ParamLimits

0x7ad1,	// (0x00074c3b) call6_btn_grp_pane

0x7aeb,	// (0x00074c55) call6_pane_g1_ParamLimits

0x7aeb,	// (0x00074c55) call6_pane_g1

0x7b04,	// (0x00074c6e) popup_call6_1st_window_ParamLimits

0x7b04,	// (0x00074c6e) popup_call6_1st_window

0x7b18,	// (0x00074c82) popup_call6_2nd_window_ParamLimits

0x7b18,	// (0x00074c82) popup_call6_2nd_window

0x7b2c,	// (0x00074c96) cell_call6_btn_pane_ParamLimits

0x7b2c,	// (0x00074c96) cell_call6_btn_pane

0xa653,	// (0x000777bd) bg_popup_call2_in_pane_cp03

0xe910,	// (0x0007ba7a) popup_call6_1st_window_g1

0xe918,	// (0x0007ba82) popup_call6_1st_window_g2

0xe920,	// (0x0007ba8a) popup_call6_1st_window_g3

0x0002,

0xfd8a,	// (0x0007cef4) popup_call6_1st_window_g

0xe928,	// (0x0007ba92) popup_call6_1st_window_t1

0xe937,	// (0x0007baa1) popup_call6_1st_window_t2

0xe947,	// (0x0007bab1) popup_call6_1st_window_t3

0x0002,

0xfd91,	// (0x0007cefb) popup_call6_1st_window_t

0xa653,	// (0x000777bd) bg_popup_call2_in_pane_cp04

0xe957,	// (0x0007bac1) popup_call6_2nd_window_g1

0xe95f,	// (0x0007bac9) popup_call6_2nd_window_g2

0xe967,	// (0x0007bad1) popup_call6_2nd_window_g3

0x0002,

0xfd98,	// (0x0007cf02) popup_call6_2nd_window_g

0xe96f,	// (0x0007bad9) popup_call6_2nd_window_t1

0x93e8,	// (0x00076552) bg_button_pane_cp15

0xa345,	// (0x000774af) cell_call6_btn_pane_g1

0xa34e,	// (0x000774b8) cell_call6_btn_pane_t1

0x7b40,	// (0x00074caa) listscroll_wgtman_pane_ParamLimits

0x7b40,	// (0x00074caa) listscroll_wgtman_pane

0x7b61,	// (0x00074ccb) wgtman_btn_pane_ParamLimits

0x7b61,	// (0x00074ccb) wgtman_btn_pane

0xae76,	// (0x00077fe0) aid_scroll_copy1

0xe97e,	// (0x0007bae8) list_wgtman_pane

0x7ba4,	// (0x00074d0e) wgtman_btn_pane_g1_ParamLimits

0x7ba4,	// (0x00074d0e) wgtman_btn_pane_g1

0x7bd0,	// (0x00074d3a) wgtman_btn_pane_t1_ParamLimits

0x7bd0,	// (0x00074d3a) wgtman_btn_pane_t1

0xe988,	// (0x0007baf2) wgtman_btn_pane_t2_ParamLimits

0xe988,	// (0x0007baf2) wgtman_btn_pane_t2

0x0001,

0xfd9f,	// (0x0007cf09) wgtman_btn_pane_t_ParamLimits

0xfd9f,	// (0x0007cf09) wgtman_btn_pane_t

0x7c0d,	// (0x00074d77) listrow_wgtman_pane_ParamLimits

0x7c0d,	// (0x00074d77) listrow_wgtman_pane

0x7c21,	// (0x00074d8b) listrow_wgtman_pane_g1

0x7c2e,	// (0x00074d98) listrow_wgtman_pane_g2

0x0001,

0xfda4,	// (0x0007cf0e) listrow_wgtman_pane_g

0x7c4c,	// (0x00074db6) listrow_wgtman_pane_t1

0x7c64,	// (0x00074dce) listrow_wgtman_pane_t2

0x0001,

0xfda9,	// (0x0007cf13) listrow_wgtman_pane_t

0x7c8a,	// (0x00074df4) wait_bar_pane_cp09

0xe99f,	// (0x0007bb09) main_calllock_btn_pane

0xe9a9,	// (0x0007bb13) main_calllock_pane_g1

0x93b2,	// (0x0007651c) bg_button_pane_cp17

0xe9b5,	// (0x0007bb1f) main_calllock_btn_pane_g1

0xe9be,	// (0x0007bb28) main_calllock_btn_pane_t1

0x93b2,	// (0x0007651c) main_dialer3_pane

0x93b2,	// (0x0007651c) main_fmrd2_pane

0xa689,	// (0x000777f3) main_fs_bigclock_unlock_btn_pane_g1

0x7ca4,	// (0x00074e0e) main_fs_bigclock_unlock_btn_pane_t1

0x7cb2,	// (0x00074e1c) area_fmrd2_info_pane_ParamLimits

0x7cb2,	// (0x00074e1c) area_fmrd2_info_pane

0x7cc3,	// (0x00074e2d) area_fmrd2_visual_pane_ParamLimits

0x7cc3,	// (0x00074e2d) area_fmrd2_visual_pane

0x7cd1,	// (0x00074e3b) fmrd2_indi_pane_ParamLimits

0x7cd1,	// (0x00074e3b) fmrd2_indi_pane

0x7cde,	// (0x00074e48) area_fmrd2_visual_pane_g1

0x7ce6,	// (0x00074e50) area_fmrd2_visual_pane_t1

0x7cf6,	// (0x00074e60) area_fmrd2_visual_pane_t2

0x7d06,	// (0x00074e70) area_fmrd2_visual_pane_t3

0x0002,

0xfdb3,	// (0x0007cf1d) area_fmrd2_visual_pane_t

0x7d16,	// (0x00074e80) area_fmrd2_info_pane_g1

0x7d1e,	// (0x00074e88) area_fmrd2_info_pane_t1

0x7d2e,	// (0x00074e98) area_fmrd2_info_pane_t2

0x7d3e,	// (0x00074ea8) area_fmrd2_info_pane_t3

0x7d4e,	// (0x00074eb8) area_fmrd2_info_pane_t4

0x0003,

0xfdba,	// (0x0007cf24) area_fmrd2_info_pane_t

0x7d5e,	// (0x00074ec8) fmrd2_indi_pane_t1

0x7d6e,	// (0x00074ed8) fmrd2_indi_pane_t2

0x7d7e,	// (0x00074ee8) fmrd2_indi_pane_t3

0x0002,

0xfdc3,	// (0x0007cf2d) fmrd2_indi_pane_t

0x69b0,	// (0x00073b1a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x69b0,	// (0x00073b1a) list_single_fs_bigclock_indicator_pane_g5

0x6a65,	// (0x00073bcf) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x6a65,	// (0x00073bcf) list_single_fs_bigclock_indicator_pane_t5

0x739b,	// (0x00074505) aid_cell_bcale_month_pane_ParamLimits

0x739b,	// (0x00074505) aid_cell_bcale_month_pane

0x73b9,	// (0x00074523) bcale_month_pane_ParamLimits

0x73b9,	// (0x00074523) bcale_month_pane

0x73dd,	// (0x00074547) bcale_preview_pane_ParamLimits

0x73dd,	// (0x00074547) bcale_preview_pane

0xe779,	// (0x0007b8e3) list_single_fs_bigclock_pane_t1_ParamLimits

0xe798,	// (0x0007b902) list_single_fs_bigclock_pane_t2_ParamLimits

0xe798,	// (0x0007b902) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3e,	// (0x0007cea8) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3e,	// (0x0007cea8) list_single_fs_bigclock_pane_t

0x7c9c,	// (0x00074e06) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdae,	// (0x0007cf18) main_fs_bigclock_unlock_btn_pane_g

0x7d8e,	// (0x00074ef8) aid_dia3_key_size_ParamLimits

0x7d8e,	// (0x00074ef8) aid_dia3_key_size

0x7da2,	// (0x00074f0c) aid_dia3_listrow_size_ParamLimits

0x7da2,	// (0x00074f0c) aid_dia3_listrow_size

0x7dbc,	// (0x00074f26) dia3_keypad_fun_pane_ParamLimits

0x7dbc,	// (0x00074f26) dia3_keypad_fun_pane

0x7dd6,	// (0x00074f40) dia3_keypad_num_pane_ParamLimits

0x7dd6,	// (0x00074f40) dia3_keypad_num_pane

0x7df0,	// (0x00074f5a) dia3_listscroll_pane_ParamLimits

0x7df0,	// (0x00074f5a) dia3_listscroll_pane

0x7e06,	// (0x00074f70) dia3_numentry_pane_ParamLimits

0x7e06,	// (0x00074f70) dia3_numentry_pane

0xe9cd,	// (0x0007bb37) dia3_list_pane

0x7e20,	// (0x00074f8a) scroll_pane_cp12

0x93b2,	// (0x0007651c) bg_dia3_numentry_pane

0x7e2b,	// (0x00074f95) dia3_numentry_pane_t1

0x7e3a,	// (0x00074fa4) cell_dia3_key_num_pane

0x7e42,	// (0x00074fac) cell_dia3_key0_fun_pane_ParamLimits

0x7e42,	// (0x00074fac) cell_dia3_key0_fun_pane

0x7e56,	// (0x00074fc0) cell_dia3_key1_fun_pane_ParamLimits

0x7e56,	// (0x00074fc0) cell_dia3_key1_fun_pane

0x7e6b,	// (0x00074fd5) dia3_listrow_pane

0xde25,	// (0x0007af8f) bg_dia3_numentry_pane_g1

0x93b2,	// (0x0007651c) bg_button_pane_cp21

0x7e7d,	// (0x00074fe7) cell_dia3_key_num_pane_t1

0x7e8b,	// (0x00074ff5) cell_dia3_key_num_pane_t2

0x7e8b,	// (0x00074ff5) cell_dia3_key_num_pane_t3

0x7e8b,	// (0x00074ff5) cell_dia3_key_num_pane_t4

0x0003,

0xfdca,	// (0x0007cf34) cell_dia3_key_num_pane_t

0x93b2,	// (0x0007651c) bg_button_pane_cp19

0x7e9a,	// (0x00075004) cell_dia3_key0_fun_pane_g1

0x93b2,	// (0x0007651c) bg_button_pane_cp20

0x7ea2,	// (0x0007500c) cell_dia3_key1_fun_pane_g1

0x7eaa,	// (0x00075014) area_left_week_number_pane

0x7eb8,	// (0x00075022) area_top_day_name_pane

0x7ecb,	// (0x00075035) frame_month_view_pane

0xe9d8,	// (0x0007bb42) grid_month_view_pane

0x7ee0,	// (0x0007504a) cell_top_day_name_pane_ParamLimits

0x7ee0,	// (0x0007504a) cell_top_day_name_pane

0x7f0f,	// (0x00075079) cell_area_left_week_number_pane_ParamLimits

0x7f0f,	// (0x00075079) cell_area_left_week_number_pane

0x7f25,	// (0x0007508f) cell_month_view_pane_ParamLimits

0x7f25,	// (0x0007508f) cell_month_view_pane

0xe9e6,	// (0x0007bb50) frm_month_g1

0x7f56,	// (0x000750c0) frm_month_g2

0x7f69,	// (0x000750d3) frm_month_g3

0x7f7c,	// (0x000750e6) frm_month_g4

0x7f8f,	// (0x000750f9) frm_month_g5

0x7fa2,	// (0x0007510c) frm_month_g6

0x7fb7,	// (0x00075121) frm_month_g7

0xe9f3,	// (0x0007bb5d) frm_month_g8

0x7fcc,	// (0x00075136) frm_month_g9

0x7fdc,	// (0x00075146) frm_month_g10

0x7fec,	// (0x00075156) frm_month_g11

0x7ffc,	// (0x00075166) frm_month_g12

0x800e,	// (0x00075178) frm_month_g13

0x8022,	// (0x0007518c) frm_month_g14

0x8036,	// (0x000751a0) frm_month_g15

0x804a,	// (0x000751b4) frm_month_g16

0x000f,

0xfdd3,	// (0x0007cf3d) frm_month_g

0xea00,	// (0x0007bb6a) cell_top_day_name_pane_t1

0x805e,	// (0x000751c8) cell_area_left_week_number_pane_g1

0x806a,	// (0x000751d4) cell_area_left_week_number_pane_t1

0xa43a,	// (0x000775a4) cell_month_view_pane_g1

0x807d,	// (0x000751e7) cell_month_view_pane_t1

0x93b2,	// (0x0007651c) main_fps_pane

0xe22c,	// (0x0007b396) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe22c,	// (0x0007b396) cmail_ddmenu_btn02_pane_cp1

0xe248,	// (0x0007b3b2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe248,	// (0x0007b3b2) cmail_ddmenu_btn02_pane_cp2

0x76bf,	// (0x00074829) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x76bf,	// (0x00074829) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf1,	// (0x0007ce5b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf1,	// (0x0007ce5b) cmail_ddmenu_btn02_pane_g

0x76e0,	// (0x0007484a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x76e0,	// (0x0007484a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf6,	// (0x0007ce60) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf6,	// (0x0007ce60) cmail_ddmenu_btn02_pane_t

0x8090,	// (0x000751fa) fps_text_pane_ParamLimits

0x8090,	// (0x000751fa) fps_text_pane

0x80a7,	// (0x00075211) main_fps_pane_g1_ParamLimits

0x80a7,	// (0x00075211) main_fps_pane_g1

0x80bf,	// (0x00075229) wait_bar_pane_cp010_ParamLimits

0x80bf,	// (0x00075229) wait_bar_pane_cp010

0x80d2,	// (0x0007523c) fps_text_pane_t1_ParamLimits

0x80d2,	// (0x0007523c) fps_text_pane_t1

0xd2ac,	// (0x0007a416) cam4_image_uncrop_pane_g1

0xd2b5,	// (0x0007a41f) cam4_image_uncrop_pane_g2

0x4ad4,	// (0x00071c3e) cam4_image_uncrop_pane_g3

0x4add,	// (0x00071c47) cam4_image_uncrop_pane_g4

0x0003,

0xf835,	// (0x0007c99f) cam4_image_uncrop_pane_g

0x7e6b,	// (0x00074fd5) dia3_listrow_pane_ParamLimits

0x93b2,	// (0x0007651c) main_phob2_pane

0x714f,	// (0x000742b9) cell_tport_appsw_pane_cp02_ParamLimits

0x714f,	// (0x000742b9) cell_tport_appsw_pane_cp02

0x7163,	// (0x000742cd) cell_tport_appsw_pane_cp03_ParamLimits

0x7163,	// (0x000742cd) cell_tport_appsw_pane_cp03

0x93b2,	// (0x0007651c) phob2_contact_card_pane

0x93b2,	// (0x0007651c) phob2_listscroll_pane

0xea13,	// (0x0007bb7d) phob2_list_pane

0xea1b,	// (0x0007bb85) scroll_pane_cp034

0x80ea,	// (0x00075254) phob2_cc_data_pane_ParamLimits

0x80ea,	// (0x00075254) phob2_cc_data_pane

0x8103,	// (0x0007526d) phob2_cc_listscroll_pane_ParamLimits

0x8103,	// (0x0007526d) phob2_cc_listscroll_pane

0x8124,	// (0x0007528e) list_double_large_graphic_phob2_pane_ParamLimits

0x8124,	// (0x0007528e) list_double_large_graphic_phob2_pane

0x8138,	// (0x000752a2) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8138,	// (0x000752a2) list_double_large_graphic_phob2_pane_g1

0x8145,	// (0x000752af) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8145,	// (0x000752af) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf4,	// (0x0007cf5e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf4,	// (0x0007cf5e) list_double_large_graphic_phob2_pane_g

0x816b,	// (0x000752d5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x816b,	// (0x000752d5) list_double_large_graphic_phob2_pane_t1

0x8180,	// (0x000752ea) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8180,	// (0x000752ea) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfd,	// (0x0007cf67) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfd,	// (0x0007cf67) list_double_large_graphic_phob2_pane_t

0x93b2,	// (0x0007651c) list_highlight_pane_cp024

0x8195,	// (0x000752ff) phob2_cc_button_pane

0x81a1,	// (0x0007530b) phob2_cc_data_pane_g1_ParamLimits

0x81a1,	// (0x0007530b) phob2_cc_data_pane_g1

0x81b7,	// (0x00075321) phob2_cc_data_pane_g2_ParamLimits

0x81b7,	// (0x00075321) phob2_cc_data_pane_g2

0x0001,

0xfe02,	// (0x0007cf6c) phob2_cc_data_pane_g_ParamLimits

0xfe02,	// (0x0007cf6c) phob2_cc_data_pane_g

0x81cf,	// (0x00075339) phob2_cc_data_pane_t1_ParamLimits

0x81cf,	// (0x00075339) phob2_cc_data_pane_t1

0x81ff,	// (0x00075369) phob2_cc_data_pane_t2_ParamLimits

0x81ff,	// (0x00075369) phob2_cc_data_pane_t2

0x822f,	// (0x00075399) phob2_cc_data_pane_t3_ParamLimits

0x822f,	// (0x00075399) phob2_cc_data_pane_t3

0x0002,

0xfe07,	// (0x0007cf71) phob2_cc_data_pane_t_ParamLimits

0xfe07,	// (0x0007cf71) phob2_cc_data_pane_t

0xea23,	// (0x0007bb8d) phob2_cc_list_pane_ParamLimits

0xea23,	// (0x0007bb8d) phob2_cc_list_pane

0xd5ef,	// (0x0007a759) scroll_pane_cp035_ParamLimits

0xd5ef,	// (0x0007a759) scroll_pane_cp035

0x9a41,	// (0x00076bab) bg_button_pane_cp033

0x825f,	// (0x000753c9) phob2_cc_button_pane_g1

0x826b,	// (0x000753d5) phob2_cc_button_pane_t1

0x8280,	// (0x000753ea) phob2_cc_button_pane_t2

0x0001,

0xfe0e,	// (0x0007cf78) phob2_cc_button_pane_t

0x8292,	// (0x000753fc) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8292,	// (0x000753fc) list_double_large_graphic_phob2_cc_pane

0x82c9,	// (0x00075433) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x82c9,	// (0x00075433) list_double_large_graphic_phob2_cc_pane_g1

0x82d5,	// (0x0007543f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x82d5,	// (0x0007543f) list_double_large_graphic_phob2_cc_pane_g2

0x82e1,	// (0x0007544b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x82e1,	// (0x0007544b) list_double_large_graphic_phob2_cc_pane_g3

0x82ed,	// (0x00075457) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x82ed,	// (0x00075457) list_double_large_graphic_phob2_cc_pane_g4

0x82f9,	// (0x00075463) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x82f9,	// (0x00075463) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe13,	// (0x0007cf7d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe13,	// (0x0007cf7d) list_double_large_graphic_phob2_cc_pane_g

0x8305,	// (0x0007546f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8305,	// (0x0007546f) list_double_large_graphic_phob2_cc_pane_t1

0x832e,	// (0x00075498) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x832e,	// (0x00075498) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1e,	// (0x0007cf88) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1e,	// (0x0007cf88) list_double_large_graphic_phob2_cc_pane_t

0xea2f,	// (0x0007bb99) list_highlight_pane_cp025_ParamLimits

0xea2f,	// (0x0007bb99) list_highlight_pane_cp025

0x9a41,	// (0x00076bab) bg_button_pane_cp033_ParamLimits

0x825f,	// (0x000753c9) phob2_cc_button_pane_g1_ParamLimits

0x826b,	// (0x000753d5) phob2_cc_button_pane_t1_ParamLimits

0x8280,	// (0x000753ea) phob2_cc_button_pane_t2_ParamLimits

0xfe0e,	// (0x0007cf78) phob2_cc_button_pane_t_ParamLimits

0x000a,	// (0x0006d174) popup_wgtman_window

0xd428,	// (0x0007a592) scroll_pane_cp038

0x7b86,	// (0x00074cf0) wgtman_btn_pane_cp_01_ParamLimits

0x7b86,	// (0x00074cf0) wgtman_btn_pane_cp_01

0xea3d,	// (0x0007bba7) wgtman_content_pane

0xea46,	// (0x0007bbb0) wgtman_heading_pane

0x93b2,	// (0x0007651c) bg_heading_pane_cp02

0xea4f,	// (0x0007bbb9) wgtman_heading_pane_g1

0xea57,	// (0x0007bbc1) wgtman_heading_pane_t1

0xea65,	// (0x0007bbcf) scroll_pane_cp036

0xea6d,	// (0x0007bbd7) wgtman_list_pane

0xe266,	// (0x0007b3d0) wgtman_list_pane_t1_ParamLimits

0xe266,	// (0x0007b3d0) wgtman_list_pane_t1

0xa069,	// (0x000771d3) cam4_grid_pane

0x57ad,	// (0x00072917) bg_button_pane_cp015_ParamLimits

0x57c4,	// (0x0007292e) bg_button_pane_cp016_ParamLimits

0x57d0,	// (0x0007293a) bg_button_pane_cp017_ParamLimits

0x582b,	// (0x00072995) popup_vitu2_query_window_g3_ParamLimits

0x582b,	// (0x00072995) popup_vitu2_query_window_g3

0x58ce,	// (0x00072a38) popup_vitu2_query_window_t6_ParamLimits

0x58ce,	// (0x00072a38) popup_vitu2_query_window_t6

0x58f9,	// (0x00072a63) popup_vitu2_query_window_t7_ParamLimits

0x58f9,	// (0x00072a63) popup_vitu2_query_window_t7

0xd2ac,	// (0x0007a416) cam4_grid_pane_g1

0xd2b5,	// (0x0007a41f) cam4_grid_pane_g2

0xea75,	// (0x0007bbdf) cam4_grid_pane_g3

0xea7e,	// (0x0007bbe8) cam4_grid_pane_g4

0x0003,

0xfe23,	// (0x0007cf8d) cam4_grid_pane_g

0x0c43,	// (0x0006ddad) aid_placing_vt_slider_lsc_ParamLimits

0x0f30,	// (0x0006e09a) vidtel_button_pane_ParamLimits

0x0f30,	// (0x0006e09a) vidtel_button_pane

0x93b2,	// (0x0007651c) bg_button_pane_cp034

0xea89,	// (0x0007bbf3) vidtel_button_pane_g1

0xea91,	// (0x0007bbfb) vidtel_button_pane_t1

0xd536,	// (0x0007a6a0) aid_size_vtel_slider_touch

0xd5ef,	// (0x0007a759) scroll_pane_cp039

0x65ee,	// (0x00073758) ncim_query_button_pane_cp01_ParamLimits

0x660d,	// (0x00073777) ncimui_query_pane_g1_ParamLimits

0x9a41,	// (0x00076bab) input_focus_pane_cp012_ParamLimits

0xde63,	// (0x0007afcd) ncim_query_entry_pane_t1_ParamLimits

0xd5ef,	// (0x0007a759) scroll_pane_cp039_ParamLimits

0x20a4,	// (0x0006f20e) navi_pane_bcale_mc_g1

0x20ac,	// (0x0006f216) navi_pane_bcale_mc_t1

0xe298,	// (0x0007b402) main_sp_fs_email_pane_g1

0xe2a4,	// (0x0007b40e) main_sp_fs_email_pane_g2

0x0001,

0xfc26,	// (0x0007cd90) main_sp_fs_email_pane_g

0xe500,	// (0x0007b66a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe500,	// (0x0007b66a) list_single_cale_mrui_row_pane_g3

0x7700,	// (0x0007486a) list_single_recal_day_pane_g5_event_pane

0xb2b8,	// (0x00078422) list_single_recal_day_pane_g7

0xeaa7,	// (0x0007bc11) list_recal_day_event_pane_cp01

0xeab0,	// (0x0007bc1a) list_recal_vselct_arw_lo_pane_cp01

0xeab8,	// (0x0007bc22) list_recal_vselct_arw_up_pane_cp01

0xeac0,	// (0x0007bc2a) list_recal_vselct_pane_cp01

0xd558,	// (0x0007a6c2) list_recal_day_event_pane_cp01_g1

0xb2ed,	// (0x00078457) list_recal_day_event_pane_cp01_t1

0xb2c0,	// (0x0007842a) list_single_recal_day_pane_t1_ParamLimits

0xb2d2,	// (0x0007843c) list_single_recal_day_pane_t2_ParamLimits

0xfd06,	// (0x0007ce70) list_single_recal_day_pane_t_ParamLimits

0xa3bf,	// (0x00077529) bg_notes_pane_ParamLimits

0xa48a,	// (0x000775f4) list_notes_pane_ParamLimits

0x01e0,	// (0x0006d34a) scroll_pane_cp06_ParamLimits

0xa4ac,	// (0x00077616) main_notes_pane_ParamLimits

0x9a41,	// (0x00076bab) main_welc_pane

0x8384,	// (0x000754ee) main_welc_body_pane_ParamLimits

0x8384,	// (0x000754ee) main_welc_body_pane

0x83a3,	// (0x0007550d) main_welc_opti_pane_ParamLimits

0x83a3,	// (0x0007550d) main_welc_opti_pane

0x8423,	// (0x0007558d) main_welc_pane_t1_ParamLimits

0x8423,	// (0x0007558d) main_welc_pane_t1

0x862b,	// (0x00075795) main_welc_body_row_pane_ParamLimits

0x862b,	// (0x00075795) main_welc_body_row_pane

0xa42c,	// (0x00077596) main_welc_opti_row_pane_ParamLimits

0xa42c,	// (0x00077596) main_welc_opti_row_pane

0xeada,	// (0x0007bc44) main_welc_opti_row_pane_g1

0x863f,	// (0x000757a9) main_welc_opti_row_pane_t1

0xeae2,	// (0x0007bc4c) main_welc_body_row_pane_t1

0xe850,	// (0x0007b9ba) popup_notif_wgt_heading_pane

0xe86a,	// (0x0007b9d4) aid_size_list_notif_wgt_del_ParamLimits

0xe877,	// (0x0007b9e1) list_notif_wgt_row_pane_g1_ParamLimits

0xe883,	// (0x0007b9ed) list_notif_wgt_row_pane_g2_ParamLimits

0xe892,	// (0x0007b9fc) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6d,	// (0x0007ced7) list_notif_wgt_row_pane_g_ParamLimits

0xe89f,	// (0x0007ba09) list_notif_wgt_row_pane_t1_ParamLimits

0xe8b5,	// (0x0007ba1f) list_notif_wgt_row_pane_t2_ParamLimits

0xe8c7,	// (0x0007ba31) list_notif_wgt_row_pane_t3_ParamLimits

0xfd74,	// (0x0007cede) list_notif_wgt_row_pane_t_ParamLimits

0x7c21,	// (0x00074d8b) listrow_wgtman_pane_g1_ParamLimits

0x7c2e,	// (0x00074d98) listrow_wgtman_pane_g2_ParamLimits

0xfda4,	// (0x0007cf0e) listrow_wgtman_pane_g_ParamLimits

0x7c4c,	// (0x00074db6) listrow_wgtman_pane_t1_ParamLimits

0x7c64,	// (0x00074dce) listrow_wgtman_pane_t2_ParamLimits

0xfda9,	// (0x0007cf13) listrow_wgtman_pane_t_ParamLimits

0x7c8a,	// (0x00074df4) wait_bar_pane_cp09_ParamLimits

0x93b2,	// (0x0007651c) bg_popup_heading_pane_cp02

0xeaf1,	// (0x0007bc5b) popup_notif_wgt_heading_pane_g1

0xeaf9,	// (0x0007bc63) popup_notif_wgt_heading_pane_t1

0x93b2,	// (0x0007651c) main_vids_pane

0x93b2,	// (0x0007651c) vids_listscroll_pane

0x864e,	// (0x000757b8) scroll_pane_cp040

0x93b2,	// (0x0007651c) vids_list_pane

0x8659,	// (0x000757c3) vids_list_double_pane_ParamLimits

0x8659,	// (0x000757c3) vids_list_double_pane

0x866c,	// (0x000757d6) vids_list_double_pane_g1

0x8675,	// (0x000757df) vids_list_double_pane_t1

0x8685,	// (0x000757ef) vids_list_double_pane_t2

0x0001,

0xfe42,	// (0x0007cfac) vids_list_double_pane_t

0x93da,	// (0x00076544) main_ncimui_pane_ParamLimits

0x6424,	// (0x0007358e) main_ncimui_pane_g1_ParamLimits

0x6430,	// (0x0007359a) main_ncimui_pane_g2_ParamLimits

0x6430,	// (0x0007359a) main_ncimui_pane_g2

0x0001,

0xfb27,	// (0x0007cc91) main_ncimui_pane_g_ParamLimits

0xfb27,	// (0x0007cc91) main_ncimui_pane_g

0x83c2,	// (0x0007552c) main_welc_pane_g1_ParamLimits

0x83c2,	// (0x0007552c) main_welc_pane_g1

0x83d7,	// (0x00075541) main_welc_pane_g2_ParamLimits

0x83d7,	// (0x00075541) main_welc_pane_g2

0x0003,

0xfe2c,	// (0x0007cf96) main_welc_pane_g_ParamLimits

0xfe2c,	// (0x0007cf96) main_welc_pane_g

0xa3bf,	// (0x00077529) listscroll_mce_pane_ParamLimits

0x2184,	// (0x0006f2ee) wait_bar_pane_cp10

0xc60a,	// (0x00079774) main_cale_day_pane_ParamLimits

0xc60a,	// (0x00079774) main_cale_week_pane_ParamLimits

0xa3bf,	// (0x00077529) main_messa_pane_ParamLimits

0x3eb7,	// (0x00071021) main_clock2_btn_pane_ParamLimits

0x3eb7,	// (0x00071021) main_clock2_btn_pane

0xcdb1,	// (0x00079f1b) main_clock2_btn_pane_cp01_ParamLimits

0xcdb1,	// (0x00079f1b) main_clock2_btn_pane_cp01

0xe4d1,	// (0x0007b63b) list_cale_mrui_pane_ParamLimits

0xe8fd,	// (0x0007ba67) main_cf0_pane_g2

0x0001,

0xfd7b,	// (0x0007cee5) main_cf0_pane_g

0x7eaa,	// (0x00075014) area_left_week_number_pane_ParamLimits

0x7eb8,	// (0x00075022) area_top_day_name_pane_ParamLimits

0x7ecb,	// (0x00075035) frame_month_view_pane_ParamLimits

0xe9d8,	// (0x0007bb42) grid_month_view_pane_ParamLimits

0xe9e6,	// (0x0007bb50) frm_month_g1_ParamLimits

0x7f56,	// (0x000750c0) frm_month_g2_ParamLimits

0x7f69,	// (0x000750d3) frm_month_g3_ParamLimits

0x7f7c,	// (0x000750e6) frm_month_g4_ParamLimits

0x7f8f,	// (0x000750f9) frm_month_g5_ParamLimits

0x7fa2,	// (0x0007510c) frm_month_g6_ParamLimits

0x7fb7,	// (0x00075121) frm_month_g7_ParamLimits

0xe9f3,	// (0x0007bb5d) frm_month_g8_ParamLimits

0x7fcc,	// (0x00075136) frm_month_g9_ParamLimits

0x7fdc,	// (0x00075146) frm_month_g10_ParamLimits

0x7fec,	// (0x00075156) frm_month_g11_ParamLimits

0x7ffc,	// (0x00075166) frm_month_g12_ParamLimits

0x800e,	// (0x00075178) frm_month_g13_ParamLimits

0x8022,	// (0x0007518c) frm_month_g14_ParamLimits

0x8036,	// (0x000751a0) frm_month_g15_ParamLimits

0x804a,	// (0x000751b4) frm_month_g16_ParamLimits

0xfdd3,	// (0x0007cf3d) frm_month_g_ParamLimits

0xea00,	// (0x0007bb6a) cell_top_day_name_pane_t1_ParamLimits

0x805e,	// (0x000751c8) cell_area_left_week_number_pane_g1_ParamLimits

0x806a,	// (0x000751d4) cell_area_left_week_number_pane_t1_ParamLimits

0xa43a,	// (0x000775a4) cell_month_view_pane_g1_ParamLimits

0x807d,	// (0x000751e7) cell_month_view_pane_t1_ParamLimits

0xa3b7,	// (0x00077521) main_clock2_btn_pane_g1

0xeb07,	// (0x0007bc71) main_clock2_btn_pane_t1

0x9a41,	// (0x00076bab) listscroll_cmail_pane_ParamLimits

0xe298,	// (0x0007b402) main_sp_fs_email_pane_g1_ParamLimits

0xe2a4,	// (0x0007b40e) main_sp_fs_email_pane_g2_ParamLimits

0xfc26,	// (0x0007cd90) main_sp_fs_email_pane_g_ParamLimits

0xe5da,	// (0x0007b744) list_recal_day_pane_ParamLimits

0xe5eb,	// (0x0007b755) mian_recal_day_pane_t1

0x6fe8,	// (0x00074152) list_single_dyc_row_text_pane_t4_ParamLimits

0x6fe8,	// (0x00074152) list_single_dyc_row_text_pane_t4

0x7031,	// (0x0007419b) list_single_dyc_row_text_pane_t5_ParamLimits

0x7031,	// (0x0007419b) list_single_dyc_row_text_pane_t5

0xb096,	// (0x00078200) list_single_dyc_row_text_pane_t6_ParamLimits

0xb096,	// (0x00078200) list_single_dyc_row_text_pane_t6

0x1cf3,	// (0x0006ee5d) aid_mgn_list_cale_time_pane

0x93da,	// (0x00076544) main_gallery2_pane_ParamLimits

0xcdc5,	// (0x00079f2f) main_clock2_pane_cp01_t1

0xcdd3,	// (0x00079f3d) main_clock2_pane_cp01_t3

0x0001,

0xf70c,	// (0x0007c876) main_clock2_pane_cp01_t

0x05fe,	// (0x0006d768) cale_week_scroll_pane_g16_ParamLimits

0x05fe,	// (0x0006d768) cale_week_scroll_pane_g16

0xa653,	// (0x000777bd) vorec_slider_pane

0xea91,	// (0x0007bbfb) vidtel_button_pane_t1_ParamLimits

0x7766,	// (0x000748d0) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7766,	// (0x000748d0) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7779,	// (0x000748e3) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7779,	// (0x000748e3) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd29,	// (0x0007ce93) main_fs_bigclock_clock_pane_g_ParamLimits

0x7790,	// (0x000748fa) main_fs_bigclock_clock_pane_t1_ParamLimits

0x77a6,	// (0x00074910) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd32,	// (0x0007ce9c) main_fs_bigclock_clock_pane_t_ParamLimits

0x3704,	// (0x0007086e) main_mup3_lyrics_pane_ParamLimits

0x3704,	// (0x0007086e) main_mup3_lyrics_pane

0x86ad,	// (0x00075817) main_mup3_lyrics_pane_t1_ParamLimits

0x86ad,	// (0x00075817) main_mup3_lyrics_pane_t1

0x9dbb,	// (0x00076f25) aid_main_mp4_pane_t1_area

0x9dc5,	// (0x00076f2f) aid_main_mp4_pane_t2_area

0x9e71,	// (0x00076fdb) main_mp4_pane_g7_ParamLimits

0x9e71,	// (0x00076fdb) main_mp4_pane_g7

0x9e7d,	// (0x00076fe7) main_mp4_pane_g8_ParamLimits

0x9e7d,	// (0x00076fe7) main_mp4_pane_g8

0x489b,	// (0x00071a05) aid_call6_pane_g1_size

0x82b1,	// (0x0007541b) list_double_large_graphic_phob2_other_pane_ParamLimits

0x82b1,	// (0x0007541b) list_double_large_graphic_phob2_other_pane

0xaa0f,	// (0x00077b79) list_double_large_graphic_phob2_other_pane_g1

0x93b2,	// (0x0007651c) list_highlight_pane_cp026

0x9a41,	// (0x00076bab) main_welc_pane_ParamLimits

0x6e4d,	// (0x00073fb7) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x6e4d,	// (0x00073fb7) main_sp_fs_ctrlbar_pane_g3

0x6e67,	// (0x00073fd1) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x6e67,	// (0x00073fd1) main_sp_fs_ctrlbar_pane_g4

0x6e9b,	// (0x00074005) toolbar2_fixed_button_pane_cp01

0x6ea6,	// (0x00074010) toolbar2_fixed_button_pane_cp02

0x6eb3,	// (0x0007401d) toolbar2_fixed_button_pane_cp03

0x836a,	// (0x000754d4) list_welc_entry_pane_ParamLimits

0x836a,	// (0x000754d4) list_welc_entry_pane

0x83ec,	// (0x00075556) main_welc_pane_g3_ParamLimits

0x83ec,	// (0x00075556) main_welc_pane_g3

0x8445,	// (0x000755af) main_welc_pane_t2_ParamLimits

0x8445,	// (0x000755af) main_welc_pane_t2

0x8460,	// (0x000755ca) main_welc_pane_t3_ParamLimits

0x8460,	// (0x000755ca) main_welc_pane_t3

0x0005,

0xfe35,	// (0x0007cf9f) main_welc_pane_t_ParamLimits

0xfe35,	// (0x0007cf9f) main_welc_pane_t

0x859a,	// (0x00075704) welc_button_pane_ParamLimits

0x859a,	// (0x00075704) welc_button_pane

0x8618,	// (0x00075782) welc_service_logo_pane_ParamLimits

0x8618,	// (0x00075782) welc_service_logo_pane

0x86c8,	// (0x00075832) list_single_welc_entry_pane_ParamLimits

0x86c8,	// (0x00075832) list_single_welc_entry_pane

0x86db,	// (0x00075845) list_single_welc_entry_pane_g1

0x86e5,	// (0x0007584f) list_single_welc_entry_pane_t1

0x86f3,	// (0x0007585d) list_single_welc_entry_pane_t2

0x0001,

0xfe47,	// (0x0007cfb1) list_single_welc_entry_pane_t

0x93b2,	// (0x0007651c) bg_button_pane_cp035

0x8701,	// (0x0007586b) welc_button_pane_t1

0xeb15,	// (0x0007bc7f) welc_service_logo_pane_g1

0xeb1e,	// (0x0007bc88) welc_service_logo_pane_g2

0x0001,

0xfe4c,	// (0x0007cfb6) welc_service_logo_pane_g

0x93e8,	// (0x00076552) main_int_radio_pane

0xdd01,	// (0x0007ae6b) list_single_fs_dyc_pane_g1

0x8151,	// (0x000752bb) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8151,	// (0x000752bb) list_double_large_graphic_phob2_pane_g3

0x815d,	// (0x000752c7) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x815d,	// (0x000752c7) list_double_large_graphic_phob2_pane_g4

0x870f,	// (0x00075879) main_int_radio1_pane_ParamLimits

0x870f,	// (0x00075879) main_int_radio1_pane

0xeb27,	// (0x0007bc91) find_pane_cp02

0x872c,	// (0x00075896) input_focus_pane_cp12_ParamLimits

0x872c,	// (0x00075896) input_focus_pane_cp12

0x873c,	// (0x000758a6) input_focus_pane_cp13_ParamLimits

0x873c,	// (0x000758a6) input_focus_pane_cp13

0x8750,	// (0x000758ba) input_focus_pane_cp14_ParamLimits

0x8750,	// (0x000758ba) input_focus_pane_cp14

0xeb30,	// (0x0007bc9a) int_radio1_listscroll_pane

0x8764,	// (0x000758ce) main_int_radio1_pane_g1_ParamLimits

0x8764,	// (0x000758ce) main_int_radio1_pane_g1

0x877a,	// (0x000758e4) main_int_radio1_pane_t1_ParamLimits

0x877a,	// (0x000758e4) main_int_radio1_pane_t1

0x8793,	// (0x000758fd) main_int_radio1_pane_t2_ParamLimits

0x8793,	// (0x000758fd) main_int_radio1_pane_t2

0x87ae,	// (0x00075918) main_int_radio1_pane_t3_ParamLimits

0x87ae,	// (0x00075918) main_int_radio1_pane_t3

0x87c9,	// (0x00075933) main_int_radio1_pane_t4_ParamLimits

0x87c9,	// (0x00075933) main_int_radio1_pane_t4

0xeb3a,	// (0x0007bca4) main_int_radio1_pane_t5_ParamLimits

0xeb3a,	// (0x0007bca4) main_int_radio1_pane_t5

0x87db,	// (0x00075945) main_int_radio1_pane_t6_ParamLimits

0x87db,	// (0x00075945) main_int_radio1_pane_t6

0x87f0,	// (0x0007595a) main_int_radio1_pane_t7_ParamLimits

0x87f0,	// (0x0007595a) main_int_radio1_pane_t7

0x8805,	// (0x0007596f) main_int_radio1_pane_t8_ParamLimits

0x8805,	// (0x0007596f) main_int_radio1_pane_t8

0x8822,	// (0x0007598c) main_int_radio1_pane_t9_ParamLimits

0x8822,	// (0x0007598c) main_int_radio1_pane_t9

0x8834,	// (0x0007599e) main_int_radio1_pane_t10_ParamLimits

0x8834,	// (0x0007599e) main_int_radio1_pane_t10

0x885a,	// (0x000759c4) main_int_radio1_pane_t11_ParamLimits

0x885a,	// (0x000759c4) main_int_radio1_pane_t11

0x8880,	// (0x000759ea) main_int_radio1_pane_t12_ParamLimits

0x8880,	// (0x000759ea) main_int_radio1_pane_t12

0x000b,

0xfe51,	// (0x0007cfbb) main_int_radio1_pane_t_ParamLimits

0xfe51,	// (0x0007cfbb) main_int_radio1_pane_t

0xea13,	// (0x0007bb7d) int_radio_list_pane

0xea1b,	// (0x0007bb85) scroll_pane_cp037

0xeb4c,	// (0x0007bcb6) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb4c,	// (0x0007bcb6) list_double_large_graphic_int_radio_pane

0xeb60,	// (0x0007bcca) list_double_large_graphic_int_radio_pane_g1

0xb2fb,	// (0x00078465) list_double_large_graphic_int_radio_pane_t1

0xb309,	// (0x00078473) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6a,	// (0x0007cfd4) list_double_large_graphic_int_radio_pane_t

0x93b2,	// (0x0007651c) list_highlight_pane_cp027

0xeaca,	// (0x0007bc34) main_button_pane_4

0x83ff,	// (0x00075569) main_welc_pane_g4_ParamLimits

0x83ff,	// (0x00075569) main_welc_pane_g4

0x847b,	// (0x000755e5) main_welc_pane_t4_ParamLimits

0x847b,	// (0x000755e5) main_welc_pane_t4

0x8492,	// (0x000755fc) main_welc_pane_t5_ParamLimits

0x8492,	// (0x000755fc) main_welc_pane_t5

0x84d3,	// (0x0007563d) main_welc_pane_t6_ParamLimits

0x84d3,	// (0x0007563d) main_welc_pane_t6

0x85af,	// (0x00075719) welc_button_pane_2_ParamLimits

0x85af,	// (0x00075719) welc_button_pane_2

0x85cd,	// (0x00075737) welc_button_pane_3_ParamLimits

0x85cd,	// (0x00075737) welc_button_pane_3

0xead2,	// (0x0007bc3c) welc_button_pane_4

0x85ee,	// (0x00075758) welc_button_pane_5_ParamLimits

0x85ee,	// (0x00075758) welc_button_pane_5

0xf039,	// (0x0007c1a3) main_popup_welc_pane

0xeb78,	// (0x0007bce2) main_welc_sk_g3

0xeb82,	// (0x0007bcec) main_welc_sk_g4

0xeb8c,	// (0x0007bcf6) main_welc_sk_t3

0xeb9c,	// (0x0007bd06) main_welc_sk_t4

0xebac,	// (0x0007bd16) popup_welc_pane_t4

0xebba,	// (0x0007bd24) popup_welc_pane_t5

0xebc8,	// (0x0007bd32) popup_welc_pane_t6

0x93e8,	// (0x00076552) main_acti_pane

0x93b2,	// (0x0007651c) main_sso_pane

0x8892,	// (0x000759fc) sso_body_pane_ParamLimits

0x8892,	// (0x000759fc) sso_body_pane

0x88a7,	// (0x00075a11) sso_logo_pane_ParamLimits

0x88a7,	// (0x00075a11) sso_logo_pane

0x88d7,	// (0x00075a41) sso_sk_pane_ParamLimits

0x88d7,	// (0x00075a41) sso_sk_pane

0xa689,	// (0x000777f3) main_sso_logo_pane_g1

0x88e9,	// (0x00075a53) sso_sk_pane_t1_ParamLimits

0x88e9,	// (0x00075a53) sso_sk_pane_t1

0x8903,	// (0x00075a6d) sso_sk_pane_t2_ParamLimits

0x8903,	// (0x00075a6d) sso_sk_pane_t2

0x0001,

0xfe6f,	// (0x0007cfd9) sso_sk_pane_t_ParamLimits

0xfe6f,	// (0x0007cfd9) sso_sk_pane_t

0xec0a,	// (0x0007bd74) aid_sso_gap

0xec13,	// (0x0007bd7d) aid_sso_txt1

0xec1d,	// (0x0007bd87) aid_sso_txt2

0xec27,	// (0x0007bd91) aid_sso_txt3

0x0002,

0xfe74,	// (0x0007cfde) aid_sso_txt

0xec31,	// (0x0007bd9b) aid_sso_widget

0x896d,	// (0x00075ad7) sso_btn_pane_ParamLimits

0x896d,	// (0x00075ad7) sso_btn_pane

0x89f5,	// (0x00075b5f) sso_option_pane_ParamLimits

0x89f5,	// (0x00075b5f) sso_option_pane

0x8a77,	// (0x00075be1) sso_query_pane_ParamLimits

0x8a77,	// (0x00075be1) sso_query_pane

0x8acd,	// (0x00075c37) sso_query_pane_cp01_ParamLimits

0x8acd,	// (0x00075c37) sso_query_pane_cp01

0x8b2d,	// (0x00075c97) sso_t_hdr_pane_ParamLimits

0x8b2d,	// (0x00075c97) sso_t_hdr_pane

0x8b57,	// (0x00075cc1) sso_t_nml_pane_ParamLimits

0x8b57,	// (0x00075cc1) sso_t_nml_pane

0xec3b,	// (0x0007bda5) sso_t_sub_pane

0x88b4,	// (0x00075a1e) sso_popup_window_ParamLimits

0x88b4,	// (0x00075a1e) sso_popup_window

0x8919,	// (0x00075a83) sso_apps_pane_ParamLimits

0x8919,	// (0x00075a83) sso_apps_pane

0x8943,	// (0x00075aad) sso_body_pane_g1

0x894d,	// (0x00075ab7) sso_body_pane_t1

0x895d,	// (0x00075ac7) sso_body_pane_t2

0x0001,

0xfe7b,	// (0x0007cfe5) sso_body_pane_t

0x89bf,	// (0x00075b29) sso_btn_pane_cp01_ParamLimits

0x89bf,	// (0x00075b29) sso_btn_pane_cp01

0x8a4b,	// (0x00075bb5) sso_prog_pane_ParamLimits

0x8a4b,	// (0x00075bb5) sso_prog_pane

0x8bad,	// (0x00075d17) sso_t_hdr_pane_t1_ParamLimits

0x8bad,	// (0x00075d17) sso_t_hdr_pane_t1

0xec50,	// (0x0007bdba) input_focus_pane_cp10_ParamLimits

0xec50,	// (0x0007bdba) input_focus_pane_cp10

0xec6a,	// (0x0007bdd4) sso_query_pane_t1_ParamLimits

0xec6a,	// (0x0007bdd4) sso_query_pane_t1

0xec7d,	// (0x0007bde7) sso_query_pane_t2_ParamLimits

0xec7d,	// (0x0007bde7) sso_query_pane_t2

0xec97,	// (0x0007be01) sso_query_pane_t3_ParamLimits

0xec97,	// (0x0007be01) sso_query_pane_t3

0xecc1,	// (0x0007be2b) sso_query_pane_t4_ParamLimits

0xecc1,	// (0x0007be2b) sso_query_pane_t4

0x0003,

0xfe80,	// (0x0007cfea) sso_query_pane_t_ParamLimits

0xfe80,	// (0x0007cfea) sso_query_pane_t

0x93b2,	// (0x0007651c) bg_button_pane_cp22

0xeb69,	// (0x0007bcd3) sso_btn_pane_t1

0x8bc0,	// (0x00075d2a) sso_t_nml_pane_t1_ParamLimits

0x8bc0,	// (0x00075d2a) sso_t_nml_pane_t1

0x8bdb,	// (0x00075d45) sso_option_row_pane_ParamLimits

0x8bdb,	// (0x00075d45) sso_option_row_pane

0xece5,	// (0x0007be4f) sso_t_sub_pane_t1_ParamLimits

0xece5,	// (0x0007be4f) sso_t_sub_pane_t1

0x9a41,	// (0x00076bab) bg_popup_window_pane_cp11_ParamLimits

0x9a41,	// (0x00076bab) bg_popup_window_pane_cp11

0xed02,	// (0x0007be6c) popup_sk_window_cp01_ParamLimits

0xed02,	// (0x0007be6c) popup_sk_window_cp01

0xed0f,	// (0x0007be79) sso_popup_body_pane_ParamLimits

0xed0f,	// (0x0007be79) sso_popup_body_pane

0xed1c,	// (0x0007be86) scroll_pane_cp21_ParamLimits

0xed1c,	// (0x0007be86) scroll_pane_cp21

0xed29,	// (0x0007be93) sso_popup_body_t_pane_ParamLimits

0xed29,	// (0x0007be93) sso_popup_body_t_pane

0xed36,	// (0x0007bea0) sso_popup_body_t_hdr_pane_ParamLimits

0xed36,	// (0x0007bea0) sso_popup_body_t_hdr_pane

0xed49,	// (0x0007beb3) sso_popup_body_t_nml_pane_ParamLimits

0xed49,	// (0x0007beb3) sso_popup_body_t_nml_pane

0xed67,	// (0x0007bed1) sso_popup_body_t_sub_pane_ParamLimits

0xed67,	// (0x0007bed1) sso_popup_body_t_sub_pane

0xed8a,	// (0x0007bef4) sso_popup_body_t_hdr_pane_t1

0x8bee,	// (0x00075d58) sso_popup_body_t_nml_pane_t1_ParamLimits

0x8bee,	// (0x00075d58) sso_popup_body_t_nml_pane_t1

0xed9a,	// (0x0007bf04) sso_popup_body_t_sub_pane_t1_ParamLimits

0xed9a,	// (0x0007bf04) sso_popup_body_t_sub_pane_t1

0xa689,	// (0x000777f3) sso_prog_pane_g1

0x8c29,	// (0x00075d93) sso_apps_pane_comp1_ParamLimits

0x8c29,	// (0x00075d93) sso_apps_pane_comp1

0xedbf,	// (0x0007bf29) sso_apps_pane_comp1_g1

0xedc7,	// (0x0007bf31) sso_apps_pane_comp1_t1

0xede3,	// (0x0007bf4d) sso_option_row_pane_g1

0xedeb,	// (0x0007bf55) sso_option_row_pane_t1

0x8357,	// (0x000754c1) bg_welc_area_ParamLimits

0x8357,	// (0x000754c1) bg_welc_area

0x8511,	// (0x0007567b) sso_t_hdr_pane_a_t1_ParamLimits

0x8511,	// (0x0007567b) sso_t_hdr_pane_a_t1

0x852c,	// (0x00075696) sso_t_nml_pane_a_t1_ParamLimits

0x852c,	// (0x00075696) sso_t_nml_pane_a_t1

0x855f,	// (0x000756c9) sso_t_sub_pane_a_t1_ParamLimits

0x855f,	// (0x000756c9) sso_t_sub_pane_a_t1

0xeb69,	// (0x0007bcd3) sso_btn_pane_t1_copy1

0x93b2,	// (0x0007651c) welc_button_pane_2_comp1

0xebd8,	// (0x0007bd42) sso_t_hdr_pane_p_t1

0xebe8,	// (0x0007bd52) sso_t_nml_pane_p_t1

0xebf8,	// (0x0007bd62) sso_t_sub_pane_p_t1

0xe320,	// (0x0007b48a) list_cmail_pane_ParamLimits

0x8606,	// (0x00075770) welc_button_pane_cp01_ParamLimits

0x8606,	// (0x00075770) welc_button_pane_cp01

0x93b2,	// (0x0007651c) main_att_pane

0xedd5,	// (0x0007bf3f) input_focus_pane_cp10_t1

0xedeb,	// (0x0007bf55) sso_option_row_pane_t1_ParamLimits

0x8c43,	// (0x00075dad) main_att_body_pane_ParamLimits

0x8c43,	// (0x00075dad) main_att_body_pane

0x8c78,	// (0x00075de2) att_btn_pane_ParamLimits

0x8c78,	// (0x00075de2) att_btn_pane

0x8c9f,	// (0x00075e09) att_btn_pane_cp01_ParamLimits

0x8c9f,	// (0x00075e09) att_btn_pane_cp01

0x8cbf,	// (0x00075e29) att_li_srv_pane_ParamLimits

0x8cbf,	// (0x00075e29) att_li_srv_pane

0x8cdc,	// (0x00075e46) att_opt_pane_ParamLimits

0x8cdc,	// (0x00075e46) att_opt_pane

0x8d2a,	// (0x00075e94) att_query_pane_ParamLimits

0x8d2a,	// (0x00075e94) att_query_pane

0x8d76,	// (0x00075ee0) att_query_pane_cp01_ParamLimits

0x8d76,	// (0x00075ee0) att_query_pane_cp01

0x8dc2,	// (0x00075f2c) att_t_hdr_pane_ParamLimits

0x8dc2,	// (0x00075f2c) att_t_hdr_pane

0x8e26,	// (0x00075f90) att_t_nml_pane_ParamLimits

0x8e26,	// (0x00075f90) att_t_nml_pane

0x8e73,	// (0x00075fdd) att_t_nml_pane_cp01_ParamLimits

0x8e73,	// (0x00075fdd) att_t_nml_pane_cp01

0x8ea1,	// (0x0007600b) att_t_nmlb_pane_ParamLimits

0x8ea1,	// (0x0007600b) att_t_nmlb_pane

0x8ebe,	// (0x00076028) att_term_pane_ParamLimits

0x8ebe,	// (0x00076028) att_term_pane

0x8f0e,	// (0x00076078) main_att_body_pane_g1_ParamLimits

0x8f0e,	// (0x00076078) main_att_body_pane_g1

0xee01,	// (0x0007bf6b) att_t_hdr_pane_t1_ParamLimits

0xee01,	// (0x0007bf6b) att_t_hdr_pane_t1

0xee1a,	// (0x0007bf84) att_t_nml_pane_t1_ParamLimits

0xee1a,	// (0x0007bf84) att_t_nml_pane_t1

0xee3f,	// (0x0007bfa9) att_btn_pane_t1

0x93b2,	// (0x0007651c) bg_button_pane_cp23

0x8f45,	// (0x000760af) att_li_srv_row_pane_ParamLimits

0x8f45,	// (0x000760af) att_li_srv_row_pane

0xee4f,	// (0x0007bfb9) att_t_nmlb_pane_t1_ParamLimits

0xee4f,	// (0x0007bfb9) att_t_nmlb_pane_t1

0xee68,	// (0x0007bfd2) att_query_pane_t1

0xee77,	// (0x0007bfe1) att_query_pane_t2

0xee86,	// (0x0007bff0) att_query_pane_t3

0x0002,

0xfe89,	// (0x0007cff3) att_query_pane_t

0xee95,	// (0x0007bfff) input_focus_pane_cp11

0xee9e,	// (0x0007c008) att_term_pane_t1_ParamLimits

0xee9e,	// (0x0007c008) att_term_pane_t1

0x93b2,	// (0x0007651c) att_opt_row_pane

0xeebb,	// (0x0007c025) att_opt_row_pane_g1

0xeec3,	// (0x0007c02d) att_opt_row_pane_t1_ParamLimits

0xeec3,	// (0x0007c02d) att_opt_row_pane_t1

0x8f55,	// (0x000760bf) att_li_srv_row_pane_g1

0x8f5d,	// (0x000760c7) att_li_srv_row_pane_t1

0x8f72,	// (0x000760dc) att_li_srv_row_pane_t2

0x0001,

0xfe90,	// (0x0007cffa) att_li_srv_row_pane_t

0x93b2,	// (0x0007651c) main_call7_pane

0x93b2,	// (0x0007651c) main_vod_pane

0xec3b,	// (0x0007bda5) sso_t_sub_pane_ParamLimits

0x8c59,	// (0x00075dc3) att_btn_emg_pane_ParamLimits

0x8c59,	// (0x00075dc3) att_btn_emg_pane

0x8f5d,	// (0x000760c7) att_li_srv_row_pane_t1_ParamLimits

0x8f72,	// (0x000760dc) att_li_srv_row_pane_t2_ParamLimits

0xfe90,	// (0x0007cffa) att_li_srv_row_pane_t_ParamLimits

0xeedc,	// (0x0007c046) att_btn_close_pane_g1

0x93b2,	// (0x0007651c) bg_button_pane_cp24

0x8f87,	// (0x000760f1) main_vod_body_pane_ParamLimits

0x8f87,	// (0x000760f1) main_vod_body_pane

0x8f9b,	// (0x00076105) main_vod_body_pane_g1_ParamLimits

0x8f9b,	// (0x00076105) main_vod_body_pane_g1

0x8fcf,	// (0x00076139) scroll_pane_cp24_ParamLimits

0x8fcf,	// (0x00076139) scroll_pane_cp24

0x901d,	// (0x00076187) vod_btn_pane_ParamLimits

0x901d,	// (0x00076187) vod_btn_pane

0x9061,	// (0x000761cb) vod_det_pane_ParamLimits

0x9061,	// (0x000761cb) vod_det_pane

0x9093,	// (0x000761fd) vod_logo_g1_ParamLimits

0x9093,	// (0x000761fd) vod_logo_g1

0x90d1,	// (0x0007623b) vod_opt_pane_ParamLimits

0x90d1,	// (0x0007623b) vod_opt_pane

0x9104,	// (0x0007626e) vod_opt_pane_cp01_ParamLimits

0x9104,	// (0x0007626e) vod_opt_pane_cp01

0x9130,	// (0x0007629a) vod_query_pane_ParamLimits

0x9130,	// (0x0007629a) vod_query_pane

0x915d,	// (0x000762c7) vod_query_pane_cp01_ParamLimits

0x915d,	// (0x000762c7) vod_query_pane_cp01

0x9169,	// (0x000762d3) vod_t_nml_pane_ParamLimits

0x9169,	// (0x000762d3) vod_t_nml_pane

0x921e,	// (0x00076388) vod_t_nml_pane_cp01_ParamLimits

0x921e,	// (0x00076388) vod_t_nml_pane_cp01

0x925a,	// (0x000763c4) vod_t_sub_pane_ParamLimits

0x925a,	// (0x000763c4) vod_t_sub_pane

0x928f,	// (0x000763f9) vod_t_sub_pane_cp01_ParamLimits

0x928f,	// (0x000763f9) vod_t_sub_pane_cp01

0xee95,	// (0x0007bfff) vod_query_field_pane

0xee68,	// (0x0007bfd2) vod_query_pane_t1

0x93b2,	// (0x0007651c) bg_button_pane_cp25

0xeee4,	// (0x0007c04e) sso_btn_pane_t1_copy2

0x92bb,	// (0x00076425) vod_t_nml_pane_t1_ParamLimits

0x92bb,	// (0x00076425) vod_t_nml_pane_t1

0xeef4,	// (0x0007c05e) vod_opt_row_pane_ParamLimits

0xeef4,	// (0x0007c05e) vod_opt_row_pane

0xef06,	// (0x0007c070) vod_t_sub_pane_t1_ParamLimits

0xef06,	// (0x0007c070) vod_t_sub_pane_t1

0x92f2,	// (0x0007645c) vod_det_cell_pane_ParamLimits

0x92f2,	// (0x0007645c) vod_det_cell_pane

0x93b2,	// (0x0007651c) input_focus_pane_cp15

0xef1f,	// (0x0007c089) vod_query_field_pane_t1

0xef2d,	// (0x0007c097) vod_opt_row_pane_g1_ParamLimits

0xef2d,	// (0x0007c097) vod_opt_row_pane_g1

0xef39,	// (0x0007c0a3) vod_opt_row_pane_t1_ParamLimits

0xef39,	// (0x0007c0a3) vod_opt_row_pane_t1

0xef5e,	// (0x0007c0c8) vod_det_cell_field_pane

0xef67,	// (0x0007c0d1) vod_det_cell_pane_g1

0xee68,	// (0x0007bfd2) vod_det_cell_pane_t1

0x93b2,	// (0x0007651c) input_focus_pane_cp16

0xef1f,	// (0x0007c089) vod_det_cell_field_pane_t1

0x9306,	// (0x00076470) call7_btn_grp_pane_ParamLimits

0x9306,	// (0x00076470) call7_btn_grp_pane

0x9320,	// (0x0007648a) call7_bubble_pane_ParamLimits

0x9320,	// (0x0007648a) call7_bubble_pane

0x9338,	// (0x000764a2) cell_call7_btn_pane_ParamLimits

0x9338,	// (0x000764a2) cell_call7_btn_pane

0x934c,	// (0x000764b6) call7_pane_g1_ParamLimits

0x934c,	// (0x000764b6) call7_pane_g1

0x935e,	// (0x000764c8) call7_windows_conf_pane_ParamLimits

0x935e,	// (0x000764c8) call7_windows_conf_pane

0x937c,	// (0x000764e6) popup_call7_1st_window_ParamLimits

0x937c,	// (0x000764e6) popup_call7_1st_window

0x938e,	// (0x000764f8) popup_call7_2nd_window_ParamLimits

0x938e,	// (0x000764f8) popup_call7_2nd_window

0x93a0,	// (0x0007650a) popup_call7_3rd_window_ParamLimits

0x93a0,	// (0x0007650a) popup_call7_3rd_window

0x93b2,	// (0x0007651c) bg_button_pane_cp26

0xe9b5,	// (0x0007bb1f) cell_call7_btn_pane_g1

0xef6f,	// (0x0007c0d9) cell_call7_btn_pane_t1

0x93b2,	// (0x0007651c) bg_popup_window_pane_cp12

0xef7e,	// (0x0007c0e8) popup_call7_1st_window_g1

0xef86,	// (0x0007c0f0) popup_call7_1st_window_g2

0xef8e,	// (0x0007c0f8) popup_call7_1st_window_g3

0x0002,

0xfe95,	// (0x0007cfff) popup_call7_1st_window_g

0xef96,	// (0x0007c100) popup_call7_1st_window_t1

0xefa5,	// (0x0007c10f) popup_call7_1st_window_t2

0xefb5,	// (0x0007c11f) popup_call7_1st_window_t3

0x0002,

0xfe9c,	// (0x0007d006) popup_call7_1st_window_t

0x93b2,	// (0x0007651c) bg_popup_window_pane_cp13

0xefc5,	// (0x0007c12f) popup_call7_2nd_window_g1

0xefcd,	// (0x0007c137) popup_call7_2nd_window_g2

0xefd5,	// (0x0007c13f) popup_call7_2nd_window_g3

0x0002,

0xfea3,	// (0x0007d00d) popup_call7_2nd_window_g

0xefdd,	// (0x0007c147) popup_call7_2nd_window_t1

0x93b2,	// (0x0007651c) bg_popup_window_pane_cp14

0xefec,	// (0x0007c156) call7_list_conf_pane

0xeff4,	// (0x0007c15e) call7_list_conf_row_pane_ParamLimits

0xeff4,	// (0x0007c15e) call7_list_conf_row_pane

0xf007,	// (0x0007c171) call7_list_conf_row_pane_g1

0xf00f,	// (0x0007c179) call7_list_conf_row_pane_g2

0x0001,

0xfeaa,	// (0x0007d014) call7_list_conf_row_pane_g

0xf017,	// (0x0007c181) call7_list_conf_row_pane_t1

0x93b2,	// (0x0007651c) list_highlight_pane_cp22
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
