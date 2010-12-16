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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00034dc3 };

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
0x554b,	// (0x0003a30e) Screen

0x5557,	// (0x0003a31a) application_window

0x55b3,	// (0x0003a376) area_bottom_pane_ParamLimits

0x55b3,	// (0x0003a376) area_bottom_pane

0x560b,	// (0x0003a3ce) area_top_pane_ParamLimits

0x560b,	// (0x0003a3ce) area_top_pane

0x566f,	// (0x0003a432) call_video_uplink_pane_ParamLimits

0x566f,	// (0x0003a432) call_video_uplink_pane

0x56ae,	// (0x0003a471) main_pane_ParamLimits

0x56ae,	// (0x0003a471) main_pane

0x31e5,	// (0x00037fa8) context_pane

0x8277,	// (0x0003d03a) navi_pane

0x829d,	// (0x0003d060) popup_cale_events_window_ParamLimits

0x829d,	// (0x0003d060) popup_cale_events_window

0x31f8,	// (0x00037fbb) popup_mup_playback_window

0x82b5,	// (0x0003d078) signal_pane

0x1359,	// (0x0003611c) main_browser_pane

0x1561,	// (0x00036324) main_burst_pane

0x8107,	// (0x0003ceca) main_calc_pane

0x31d9,	// (0x00037f9c) main_cale_day_pane

0x5b18,	// (0x0003a8db) main_cale_month_pane

0x31d9,	// (0x00037f9c) main_cale_week_pane

0x1561,	// (0x00036324) main_call_pane

0x0fd9,	// (0x00035d9c) main_call_poc_pane

0x1561,	// (0x00036324) main_camera_pane

0x1561,	// (0x00036324) main_chi_dic_pane

0x1cca,	// (0x00036a8d) main_clock_pane

0x0fd9,	// (0x00035d9c) main_fmradio_pane

0x1561,	// (0x00036324) main_graph_messa_pane

0x0fd9,	// (0x00035d9c) main_help_pane

0x1359,	// (0x0003611c) main_im_pane

0x1242,	// (0x00036005) main_image_pane_ParamLimits

0x1242,	// (0x00036005) main_image_pane

0x0fd9,	// (0x00035d9c) main_location2_pane

0x1561,	// (0x00036324) main_location_pane

0x1242,	// (0x00036005) main_messa_pane

0x0fd9,	// (0x00035d9c) main_mp2_pane

0x1561,	// (0x00036324) main_mp_pane

0x0fd9,	// (0x00035d9c) main_msg_pane

0x0fd9,	// (0x00035d9c) main_mup_eq_pane

0x0fd9,	// (0x00035d9c) main_mup_pane

0x1359,	// (0x0003611c) main_notes_pane

0x0fd9,	// (0x00035d9c) main_pec_pane

0x0fd9,	// (0x00035d9c) main_phob_pane

0x0fd9,	// (0x00035d9c) main_pinb_pane

0x0fd9,	// (0x00035d9c) main_postcard_pane

0x0fd9,	// (0x00035d9c) main_qdial_pane

0x1561,	// (0x00036324) main_skin_pane

0x0fd9,	// (0x00035d9c) main_smil2_pane

0x1561,	// (0x00036324) main_smil_pane

0x1561,	// (0x00036324) main_video_pane

0x1561,	// (0x00036324) main_video_tele_pane

0x1242,	// (0x00036005) main_viewer_pane_ParamLimits

0x1242,	// (0x00036005) main_viewer_pane

0x1561,	// (0x00036324) main_vorec_pane

0x8145,	// (0x0003cf08) popup_blid_sat_info_window_ParamLimits

0x8145,	// (0x0003cf08) popup_blid_sat_info_window

0x8165,	// (0x0003cf28) popup_dyc_status_message_window_ParamLimits

0x8165,	// (0x0003cf28) popup_dyc_status_message_window

0x8173,	// (0x0003cf36) popup_grid_large_graphic_window_ParamLimits

0x8173,	// (0x0003cf36) popup_grid_large_graphic_window

0x8202,	// (0x0003cfc5) popup_loc_request_window_ParamLimits

0x8202,	// (0x0003cfc5) popup_loc_request_window

0x824f,	// (0x0003d012) popup_wml_address_window_ParamLimits

0x824f,	// (0x0003d012) popup_wml_address_window

0x7fdf,	// (0x0003cda2) call_muted_g1

0x7ccc,	// (0x0003ca8f) popup_call_audio_conf_window_ParamLimits

0x7ccc,	// (0x0003ca8f) popup_call_audio_conf_window

0x7fef,	// (0x0003cdb2) popup_call_audio_first_window_ParamLimits

0x7fef,	// (0x0003cdb2) popup_call_audio_first_window

0x802f,	// (0x0003cdf2) popup_call_audio_in_window_ParamLimits

0x802f,	// (0x0003cdf2) popup_call_audio_in_window

0x8053,	// (0x0003ce16) popup_call_audio_out_window_ParamLimits

0x8053,	// (0x0003ce16) popup_call_audio_out_window

0x8075,	// (0x0003ce38) popup_call_audio_second_window_ParamLimits

0x8075,	// (0x0003ce38) popup_call_audio_second_window

0x80a5,	// (0x0003ce68) popup_call_audio_wait_window_ParamLimits

0x80a5,	// (0x0003ce68) popup_call_audio_wait_window

0x80c6,	// (0x0003ce89) popup_number_entry_window_ParamLimits

0x80c6,	// (0x0003ce89) popup_number_entry_window

0x0bc6,	// (0x00035989) bg_popup_call_pane_cp05_ParamLimits

0x0bc6,	// (0x00035989) bg_popup_call_pane_cp05

0x0be6,	// (0x000359a9) popup_number_entry_window_t1

0x0bf9,	// (0x000359bc) popup_number_entry_window_t2

0x0c0b,	// (0x000359ce) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x00043de0) popup_number_entry_window_t

0x0c1d,	// (0x000359e0) text_title_cp2

0x0c30,	// (0x000359f3) bg_popup_call_pane_cp_ParamLimits

0x0c30,	// (0x000359f3) bg_popup_call_pane_cp

0x0c3e,	// (0x00035a01) call_thumbnail_pane

0x0c46,	// (0x00035a09) popup_call_audio_in_window_g1_ParamLimits

0x0c46,	// (0x00035a09) popup_call_audio_in_window_g1

0x0c52,	// (0x00035a15) popup_call_audio_in_window_g2_ParamLimits

0x0c52,	// (0x00035a15) popup_call_audio_in_window_g2

0x0c5e,	// (0x00035a21) popup_call_audio_in_window_g3_ParamLimits

0x0c5e,	// (0x00035a21) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x00043de9) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x00043de9) popup_call_audio_in_window_g

0x0c6a,	// (0x00035a2d) popup_call_audio_in_window_t1_ParamLimits

0x0c6a,	// (0x00035a2d) popup_call_audio_in_window_t1

0x0c86,	// (0x00035a49) popup_call_audio_in_window_t2_ParamLimits

0x0c86,	// (0x00035a49) popup_call_audio_in_window_t2

0x0ca2,	// (0x00035a65) popup_call_audio_in_window_t3_ParamLimits

0x0ca2,	// (0x00035a65) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x00043df0) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x00043df0) popup_call_audio_in_window_t

0x0c30,	// (0x000359f3) bg_popup_call_pane_cp01_ParamLimits

0x0c30,	// (0x000359f3) bg_popup_call_pane_cp01

0x0c3e,	// (0x00035a01) call_thumbnail_pane_cp02

0x0cb5,	// (0x00035a78) call_type_pane_cp022

0x0cbd,	// (0x00035a80) popup_call_audio_out_window_g1_ParamLimits

0x0cbd,	// (0x00035a80) popup_call_audio_out_window_g1

0x0ccf,	// (0x00035a92) popup_call_audio_out_window_g2_ParamLimits

0x0ccf,	// (0x00035a92) popup_call_audio_out_window_g2

0x0cdb,	// (0x00035a9e) popup_call_audio_out_window_g3_ParamLimits

0x0cdb,	// (0x00035a9e) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x00043df7) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x00043df7) popup_call_audio_out_window_g

0x0ced,	// (0x00035ab0) popup_call_audio_out_window_t1_ParamLimits

0x0ced,	// (0x00035ab0) popup_call_audio_out_window_t1

0x0d05,	// (0x00035ac8) popup_call_audio_out_window_t2_ParamLimits

0x0d05,	// (0x00035ac8) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x00043dfe) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x00043dfe) popup_call_audio_out_window_t

0x0d1a,	// (0x00035add) bg_popup_call_pane_ParamLimits

0x0d1a,	// (0x00035add) bg_popup_call_pane

0x5815,	// (0x0003a5d8) call_thumbnail_pane_cp_ParamLimits

0x5815,	// (0x0003a5d8) call_thumbnail_pane_cp

0x0d9e,	// (0x00035b61) call_type_pane_cp01_ParamLimits

0x0d9e,	// (0x00035b61) call_type_pane_cp01

0x0de2,	// (0x00035ba5) popup_call_audio_first_window_g1_ParamLimits

0x0de2,	// (0x00035ba5) popup_call_audio_first_window_g1

0x0e2e,	// (0x00035bf1) popup_call_audio_first_window_g2_ParamLimits

0x0e2e,	// (0x00035bf1) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x00043e03) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x00043e03) popup_call_audio_first_window_g

0x0e72,	// (0x00035c35) popup_call_audio_first_window_t1_ParamLimits

0x0e72,	// (0x00035c35) popup_call_audio_first_window_t1

0x0f1e,	// (0x00035ce1) popup_call_audio_first_window_t4_ParamLimits

0x0f1e,	// (0x00035ce1) popup_call_audio_first_window_t4

0x0faa,	// (0x00035d6d) popup_call_audio_first_window_t5_ParamLimits

0x0faa,	// (0x00035d6d) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x00043e08) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x00043e08) popup_call_audio_first_window_t

0x0fd9,	// (0x00035d9c) bg_popup_call_pane_cp02

0x0ff1,	// (0x00035db4) call_type_pane_cp023

0x0ff9,	// (0x00035dbc) popup_call_audio_wait_window_g1

0x1001,	// (0x00035dc4) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00043e0f) popup_call_audio_wait_window_g

0x1009,	// (0x00035dcc) popup_call_audio_wait_window_t3

0x1017,	// (0x00035dda) bg_popup_call_pane_cp03_ParamLimits

0x1017,	// (0x00035dda) bg_popup_call_pane_cp03

0x1077,	// (0x00035e3a) call_thumbnail_pane_cp011_ParamLimits

0x1077,	// (0x00035e3a) call_thumbnail_pane_cp011

0x1083,	// (0x00035e46) call_type_pane_cp034_ParamLimits

0x1083,	// (0x00035e46) call_type_pane_cp034

0x10bf,	// (0x00035e82) popup_call_audio_second_window_g1_ParamLimits

0x10bf,	// (0x00035e82) popup_call_audio_second_window_g1

0x10fb,	// (0x00035ebe) popup_call_audio_second_window_g2_ParamLimits

0x10fb,	// (0x00035ebe) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x00043e14) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x00043e14) popup_call_audio_second_window_g

0x1137,	// (0x00035efa) popup_call_audio_second_window_t1_ParamLimits

0x1137,	// (0x00035efa) popup_call_audio_second_window_t1

0x11b8,	// (0x00035f7b) popup_call_audio_second_window_t2_ParamLimits

0x11b8,	// (0x00035f7b) popup_call_audio_second_window_t2

0x11ee,	// (0x00035fb1) popup_call_audio_second_window_t3_ParamLimits

0x11ee,	// (0x00035fb1) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x00043e19) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x00043e19) popup_call_audio_second_window_t

0x0fd9,	// (0x00035d9c) bg_popup_call_pane_cp04

0x1224,	// (0x00035fe7) list_conf_pane

0x122c,	// (0x00035fef) popup_call_audio_conf_window_t1

0x123a,	// (0x00035ffd) call_thumbnail_pane_g1

0x1242,	// (0x00036005) bg_pinb_pane_ParamLimits

0x1242,	// (0x00036005) bg_pinb_pane

0x1250,	// (0x00036013) find_pinb_pane

0x1242,	// (0x00036005) listscroll_pinb_pane_ParamLimits

0x1242,	// (0x00036005) listscroll_pinb_pane

0x125a,	// (0x0003601d) pinb_bg_pane_g1

0x125a,	// (0x0003601d) pinb_bg_pane_g2

0x125a,	// (0x0003601d) pinb_bg_pane_g3

0x125a,	// (0x0003601d) pinb_bg_pane_g4

0x125a,	// (0x0003601d) pinb_bg_pane_g5

0x125a,	// (0x0003601d) pinb_bg_pane_g6

0x125a,	// (0x0003601d) pinb_bg_pane_g7

0x125a,	// (0x0003601d) pinb_bg_pane_g8

0x125a,	// (0x0003601d) pinb_bg_pane_g9

0x125a,	// (0x0003601d) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00043e20) pinb_bg_pane_g

0x0bbc,	// (0x0003597f) grid_pinb_pane

0x0bbc,	// (0x0003597f) list_pinb_pane

0x0fe3,	// (0x00035da6) scroll_pane_cp01_ParamLimits

0x0fe3,	// (0x00035da6) scroll_pane_cp01

0x1264,	// (0x00036027) find_pinb_pane_g1_ParamLimits

0x1264,	// (0x00036027) find_pinb_pane_g1

0x127c,	// (0x0003603f) find_pinb_pane_t1

0x128e,	// (0x00036051) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00043e3a) find_pinb_pane_t

0x12a3,	// (0x00036066) input_focus_pane_cp01_ParamLimits

0x12a3,	// (0x00036066) input_focus_pane_cp01

0x12af,	// (0x00036072) cell_pinb_pane_ParamLimits

0x12af,	// (0x00036072) cell_pinb_pane

0x12bd,	// (0x00036080) cell_pinb_pane_g1_ParamLimits

0x12bd,	// (0x00036080) cell_pinb_pane_g1

0x12cb,	// (0x0003608e) cell_pinb_pane_g2_ParamLimits

0x12cb,	// (0x0003608e) cell_pinb_pane_g2

0x12cb,	// (0x0003608e) cell_pinb_pane_g3_ParamLimits

0x12cb,	// (0x0003608e) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00043e3f) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00043e3f) cell_pinb_pane_g

0x0fd9,	// (0x00035d9c) grid_highlight_pane_cp01

0x12af,	// (0x00036072) list_pinb_item_pane_ParamLimits

0x12af,	// (0x00036072) list_pinb_item_pane

0x0bbc,	// (0x0003597f) list_highlight_pane_cp02

0x12d9,	// (0x0003609c) list_pinb_item_pane_g1_ParamLimits

0x12d9,	// (0x0003609c) list_pinb_item_pane_g1

0x12cb,	// (0x0003608e) list_pinb_item_pane_g2_ParamLimits

0x12cb,	// (0x0003608e) list_pinb_item_pane_g2

0x12bd,	// (0x00036080) list_pinb_item_pane_g3_ParamLimits

0x12bd,	// (0x00036080) list_pinb_item_pane_g3

0x12cb,	// (0x0003608e) list_pinb_item_pane_g4_ParamLimits

0x12cb,	// (0x0003608e) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00043e46) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00043e46) list_pinb_item_pane_g

0x12e7,	// (0x000360aa) list_pinb_item_pane_t1_ParamLimits

0x12e7,	// (0x000360aa) list_pinb_item_pane_t1

0x5853,	// (0x0003a616) calc_display_pane

0x5871,	// (0x0003a634) calc_paper_pane

0x588d,	// (0x0003a650) grid_calc_pane

0x0bbc,	// (0x0003597f) bg_list_pane_cp01

0x12fb,	// (0x000360be) clock_g1

0x12fb,	// (0x000360be) clock_g2

0x0001,

0xf08c,	// (0x00043e4f) clock_g

0x1305,	// (0x000360c8) clock_t1_ParamLimits

0x1305,	// (0x000360c8) clock_t1

0x1319,	// (0x000360dc) clock_t2_ParamLimits

0x1319,	// (0x000360dc) clock_t2

0x1319,	// (0x000360dc) clock_t3_ParamLimits

0x1319,	// (0x000360dc) clock_t3

0x1319,	// (0x000360dc) clock_t4_ParamLimits

0x1319,	// (0x000360dc) clock_t4

0x1305,	// (0x000360c8) clock_t5_ParamLimits

0x1305,	// (0x000360c8) clock_t5

0x1319,	// (0x000360dc) clock_t6_ParamLimits

0x1319,	// (0x000360dc) clock_t6

0x1319,	// (0x000360dc) clock_t7_ParamLimits

0x1319,	// (0x000360dc) clock_t7

0x1319,	// (0x000360dc) clock_t8_ParamLimits

0x1319,	// (0x000360dc) clock_t8

0x1319,	// (0x000360dc) clock_t9_ParamLimits

0x1319,	// (0x000360dc) clock_t9

0x0008,

0xf091,	// (0x00043e54) clock_t_ParamLimits

0xf091,	// (0x00043e54) clock_t

0x0bbc,	// (0x0003597f) popup_clock_analogue_window_cp02

0x0bbc,	// (0x0003597f) popup_clock_digital_window_cp01

0x0fd9,	// (0x00035d9c) listscroll_help_pane

0x0fd9,	// (0x00035d9c) phob_pre_status_pane

0x132d,	// (0x000360f0) grid_qdial_pane

0x1242,	// (0x00036005) listscroll_mce_pane

0x1242,	// (0x00036005) bg_notes_pane

0x1337,	// (0x000360fa) list_notes_pane

0x58b9,	// (0x0003a67c) scroll_pane_cp06

0x1345,	// (0x00036108) bg_calc_paper_pane

0x58c8,	// (0x0003a68b) list_calc_pane

0x1359,	// (0x0003611c) bg_calc_display_pane

0x58e2,	// (0x0003a6a5) calc_display_pane_t1

0x58f7,	// (0x0003a6ba) calc_display_pane_t2

0x590c,	// (0x0003a6cf) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00043e67) calc_display_pane_t

0x591e,	// (0x0003a6e1) cell_calc_pane_ParamLimits

0x591e,	// (0x0003a6e1) cell_calc_pane

0x1365,	// (0x00036128) bg_calc_paper_pane_g1

0x137d,	// (0x00036140) bg_calc_paper_pane_g2

0x1371,	// (0x00036134) bg_calc_paper_pane_g3

0x1395,	// (0x00036158) bg_calc_paper_pane_g4

0x1389,	// (0x0003614c) bg_calc_paper_pane_g5

0x594b,	// (0x0003a70e) bg_calc_paper_pane_g6

0x595c,	// (0x0003a71f) bg_calc_paper_pane_g7

0x596d,	// (0x0003a730) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x00043e6e) bg_calc_paper_pane_g

0x597e,	// (0x0003a741) calc_bg_paper_pane_g9

0x598f,	// (0x0003a752) list_calc_item_pane_ParamLimits

0x598f,	// (0x0003a752) list_calc_item_pane

0x13a1,	// (0x00036164) list_calc_item_pane_g1

0x59bc,	// (0x0003a77f) list_calc_item_pane_t1_ParamLimits

0x59bc,	// (0x0003a77f) list_calc_item_pane_t1

0x59ce,	// (0x0003a791) list_calc_item_pane_t2_ParamLimits

0x59ce,	// (0x0003a791) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x00043e7f) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x00043e7f) list_calc_item_pane_t

0x125a,	// (0x0003601d) cell_calc_pane_g1

0x13ae,	// (0x00036171) grid_highlight_pane_cp02

0x59fe,	// (0x0003a7c1) bg_calc_display_pane_g1

0x5a07,	// (0x0003a7ca) bg_calc_display_pane_g2

0x5a11,	// (0x0003a7d4) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x00043e89) bg_calc_display_pane_g

0x5a1a,	// (0x0003a7dd) cell_qdial_pane_ParamLimits

0x5a1a,	// (0x0003a7dd) cell_qdial_pane

0x5a2e,	// (0x0003a7f1) cell_qdial_pane_g1_ParamLimits

0x5a2e,	// (0x0003a7f1) cell_qdial_pane_g1

0x5a3b,	// (0x0003a7fe) cell_qdial_pane_g2_ParamLimits

0x5a3b,	// (0x0003a7fe) cell_qdial_pane_g2

0x13d0,	// (0x00036193) cell_qdial_pane_g3_ParamLimits

0x13d0,	// (0x00036193) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x00043e90) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x00043e90) cell_qdial_pane_g

0x5a58,	// (0x0003a81b) cell_qdial_pane_t1_ParamLimits

0x5a58,	// (0x0003a81b) cell_qdial_pane_t1

0x5a70,	// (0x0003a833) cell_qdial_pane_t2_ParamLimits

0x5a70,	// (0x0003a833) cell_qdial_pane_t2

0x5a83,	// (0x0003a846) cell_qdial_pane_t3_ParamLimits

0x5a83,	// (0x0003a846) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x00043e99) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x00043e99) cell_qdial_pane_t

0x0fd9,	// (0x00035d9c) grid_highlight_pane_cp04

0x13dc,	// (0x0003619f) thumbnail_qdial_pane_ParamLimits

0x13dc,	// (0x0003619f) thumbnail_qdial_pane

0x1441,	// (0x00036204) list_help_pane

0x144a,	// (0x0003620d) scroll_pane_cp02

0x5a96,	// (0x0003a859) help_list_pane_t1_ParamLimits

0x5a96,	// (0x0003a859) help_list_pane_t1

0x145b,	// (0x0003621e) bg_notes_pane_g2

0x1453,	// (0x00036216) bg_notes_pane_g3

0x1463,	// (0x00036226) notes_bg_pane_g1

0x1473,	// (0x00036236) notes_bg_pane_g4

0x146b,	// (0x0003622e) notes_bg_pane_g5

0x147b,	// (0x0003623e) notes_bg_pane_g6

0x1483,	// (0x00036246) notes_bg_pane_g7

0x1493,	// (0x00036256) notes_bg_pane_g8

0x148b,	// (0x0003624e) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x00043eb7) notes_bg_pane_g

0x5ad0,	// (0x0003a893) list_notes_text_pane_ParamLimits

0x5ad0,	// (0x0003a893) list_notes_text_pane

0x149b,	// (0x0003625e) list_notes_text_pane_g1

0x4b62,	// (0x00039925) list_notes_text_pane_t1

0x5b18,	// (0x0003a8db) listscroll_cale_week_pane

0x5b3d,	// (0x0003a900) bg_cale_heading_pane

0x14c3,	// (0x00036286) bg_cale_pane_cp01

0x5b5f,	// (0x0003a922) cale_week_corner_pane

0x5b79,	// (0x0003a93c) cale_week_day_heading_pane

0x5b9b,	// (0x0003a95e) cale_week_scroll_pane_g1

0x5bb8,	// (0x0003a97b) cale_week_scroll_pane_g2

0x5bcb,	// (0x0003a98e) cale_week_scroll_pane_g3

0x5bde,	// (0x0003a9a1) cale_week_scroll_pane_g4

0x5bf1,	// (0x0003a9b4) cale_week_scroll_pane_g5

0x5c04,	// (0x0003a9c7) cale_week_scroll_pane_g6

0x5c17,	// (0x0003a9da) cale_week_scroll_pane_g7

0x5c2c,	// (0x0003a9ef) cale_week_scroll_pane_g8

0x5c41,	// (0x0003aa04) cale_week_scroll_pane_g9

0x5c54,	// (0x0003aa17) cale_week_scroll_pane_g10

0x5c67,	// (0x0003aa2a) cale_week_scroll_pane_g11

0x5c7a,	// (0x0003aa3d) cale_week_scroll_pane_g12

0x5c91,	// (0x0003aa54) cale_week_scroll_pane_g13

0x5cac,	// (0x0003aa6f) cale_week_scroll_pane_g14

0x5cc7,	// (0x0003aa8a) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00043ec6) cale_week_scroll_pane_g

0x5cf7,	// (0x0003aaba) cale_week_time_pane

0x5d0c,	// (0x0003aacf) grid_cale_week_pane

0x14f2,	// (0x000362b5) scroll_pane_cp08

0x5d2b,	// (0x0003aaee) cell_cale_week_pane_ParamLimits

0x5d2b,	// (0x0003aaee) cell_cale_week_pane

0x5d8d,	// (0x0003ab50) cale_week_day_heading_pane_t1

0x5da8,	// (0x0003ab6b) cale_week_day_heading_pane_t2

0x5dc3,	// (0x0003ab86) cale_week_day_heading_pane_t3

0x5dde,	// (0x0003aba1) cale_week_day_heading_pane_t4

0x5df9,	// (0x0003abbc) cale_week_day_heading_pane_t5

0x5e14,	// (0x0003abd7) cale_week_day_heading_pane_t6

0x5e2f,	// (0x0003abf2) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00043ee7) cale_week_day_heading_pane_t

0x150f,	// (0x000362d2) bg_cale_side_pane

0x5e4a,	// (0x0003ac0d) cale_week_time_pane_t1

0x5e64,	// (0x0003ac27) cale_week_time_pane_t2

0x5e7e,	// (0x0003ac41) cale_week_time_pane_t3

0x5e98,	// (0x0003ac5b) cale_week_time_pane_t4

0x5eb2,	// (0x0003ac75) cale_week_time_pane_t5

0x5ecc,	// (0x0003ac8f) cale_week_time_pane_t6

0x5eec,	// (0x0003acaf) cale_week_time_pane_t7

0x5f0e,	// (0x0003acd1) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x00043ef6) cale_week_time_pane_t

0x5f32,	// (0x0003acf5) cell_cale_week_pane_g2

0x5f56,	// (0x0003ad19) cell_cale_week_pane_g3_ParamLimits

0x5f56,	// (0x0003ad19) cell_cale_week_pane_g3

0x151d,	// (0x000362e0) grid_highlight_pane_cp07

0x1525,	// (0x000362e8) listscroll_gms_pane

0x152f,	// (0x000362f2) grid_gms_pane

0x1538,	// (0x000362fb) listscroll_gms_pane_g1

0x1540,	// (0x00036303) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x00043f07) listscroll_gms_pane_g

0x5f6e,	// (0x0003ad31) scroll_pane_cp010

0x5f79,	// (0x0003ad3c) cell_gms_pane_ParamLimits

0x5f79,	// (0x0003ad3c) cell_gms_pane

0x5f89,	// (0x0003ad4c) cell_gms_pane_g1

0x1548,	// (0x0003630b) cell_gms_pane_g2

0x149b,	// (0x0003625e) cell_gms_pane_g3

0x1550,	// (0x00036313) cell_gms_pane_g4

0x0003,

0xf149,	// (0x00043f0c) cell_gms_pane_g

0x1559,	// (0x0003631c) grid_highlight_pane_cp09

0x7f63,	// (0x0003cd26) phob_pre_status_pane_g1

0x7f6b,	// (0x0003cd2e) phob_pre_status_pane_g2

0x7f73,	// (0x0003cd36) phob_pre_status_pane_g3

0x7f7b,	// (0x0003cd3e) phob_pre_status_pane_g4

0x0004,

0xf502,	// (0x000442c5) phob_pre_status_pane_g

0x7f8b,	// (0x0003cd4e) phob_pre_status_pane_t1

0x7f9b,	// (0x0003cd5e) phob_pre_status_pane_t2

0x7fab,	// (0x0003cd6e) phob_pre_status_pane_t3

0x0002,

0xf50d,	// (0x000442d0) phob_pre_status_pane_t

0x1561,	// (0x00036324) bg_list_pane_cp05

0x5f99,	// (0x0003ad5c) grid_vorec_pane

0x5fa3,	// (0x0003ad66) vorec_t1

0x5fb1,	// (0x0003ad74) vorec_t2

0x5fbf,	// (0x0003ad82) vorec_t3

0x5fcd,	// (0x0003ad90) vorec_t4

0xc6e6,	// (0x000414a9) vorec_t5

0xc6f4,	// (0x000414b7) vorec_t6

0x0004,

0xf152,	// (0x00043f15) vorec_t

0xc702,	// (0x000414c5) wait_bar_pane_cp01

0x5fe9,	// (0x0003adac) cell_vorec_pane_ParamLimits

0x5fe9,	// (0x0003adac) cell_vorec_pane

0x5ffc,	// (0x0003adbf) cell_vorec_pane_g1

0x0fd9,	// (0x00035d9c) grid_highlight_pane_cp05

0x12af,	// (0x00036072) cams_zoom_pane

0x12af,	// (0x00036072) image_vga_pane

0x12cb,	// (0x0003608e) main_camera_pane_g1

0x12cb,	// (0x0003608e) main_camera_pane_g2

0x12cb,	// (0x0003608e) main_camera_pane_g3

0x12cb,	// (0x0003608e) main_camera_pane_g4

0x12cb,	// (0x0003608e) main_camera_pane_g5

0x12cb,	// (0x0003608e) main_camera_pane_g6

0x12cb,	// (0x0003608e) main_camera_pane_g7

0x0007,

0xf15d,	// (0x00043f20) main_camera_pane_g

0x1319,	// (0x000360dc) main_camera_pane_t1

0x1319,	// (0x000360dc) main_camera_pane_t2

0x0001,

0xf16e,	// (0x00043f31) main_camera_pane_t

0x6006,	// (0x0003adc9) cams_zoom_pane_cp_ParamLimits

0x6006,	// (0x0003adc9) cams_zoom_pane_cp

0x6034,	// (0x0003adf7) image_cif_pane_ParamLimits

0x6034,	// (0x0003adf7) image_cif_pane

0x0bbc,	// (0x0003597f) image_subqcif_pane

0x6042,	// (0x0003ae05) main_video_pane_g1_ParamLimits

0x6042,	// (0x0003ae05) main_video_pane_g1

0x606a,	// (0x0003ae2d) main_video_pane_g2_ParamLimits

0x606a,	// (0x0003ae2d) main_video_pane_g2

0x609d,	// (0x0003ae60) main_video_pane_g3_ParamLimits

0x609d,	// (0x0003ae60) main_video_pane_g3

0x609d,	// (0x0003ae60) main_video_pane_g4_ParamLimits

0x609d,	// (0x0003ae60) main_video_pane_g4

0x60cb,	// (0x0003ae8e) main_video_pane_g5_ParamLimits

0x60cb,	// (0x0003ae8e) main_video_pane_g5

0x1569,	// (0x0003632c) main_video_pane_g6_ParamLimits

0x1569,	// (0x0003632c) main_video_pane_g6

0x0006,

0xf173,	// (0x00043f36) main_video_pane_g_ParamLimits

0xf173,	// (0x00043f36) main_video_pane_g

0x60e7,	// (0x0003aeaa) main_video_pane_t1_ParamLimits

0x60e7,	// (0x0003aeaa) main_video_pane_t1

0x12fb,	// (0x000360be) cams_zoom_pane_g1

0x12fb,	// (0x000360be) cams_zoom_pane_g2

0x12fb,	// (0x000360be) cams_zoom_pane_g3

0x12fb,	// (0x000360be) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x00043f45) cams_zoom_pane_g

0x12af,	// (0x00036072) grid_cams_pane

0x12af,	// (0x00036072) linegrid_cams_pane

0x6121,	// (0x0003aee4) cell_cams_pane_ParamLimits

0x6121,	// (0x0003aee4) cell_cams_pane

0x0bbc,	// (0x0003597f) cams_burst_image_pane

0x12fb,	// (0x000360be) cell_cams_pane_g1

0x0bbc,	// (0x0003597f) grid_highlight_pane_cp03

0x125a,	// (0x0003601d) mp_bg_pane_g1

0x0bbc,	// (0x0003597f) bg_list_pane_cp03

0x0bbc,	// (0x0003597f) bg_mp_pane

0x0bbc,	// (0x0003597f) grid_mp_pane

0x12fb,	// (0x000360be) media_player_g1

0x1a5f,	// (0x00036822) media_player_t1

0x1a5f,	// (0x00036822) media_player_t2

0x1a5f,	// (0x00036822) media_player_t3

0x1a5f,	// (0x00036822) media_player_t4

0x1a5f,	// (0x00036822) media_player_t5

0x1a5f,	// (0x00036822) media_player_t6

0x1a5f,	// (0x00036822) media_player_t7

0x0006,

0xf4ec,	// (0x000442af) media_player_t

0x0bbc,	// (0x0003597f) wait_bar_pane_cp02

0xf4d1,	// (0x00044294) main_usb_pane_t

0x1cca,	// (0x00036a8d) cell_mp_pane

0x125a,	// (0x0003601d) cell_mp_pane_g1

0x0fd9,	// (0x00035d9c) grid_highlight_pane_cp06

0x1583,	// (0x00036346) grid_skin_colour_pane

0x158b,	// (0x0003634e) list_highlight_pane_cp03

0x6136,	// (0x0003aef9) skin_g1

0x1593,	// (0x00036356) skin_t1

0x15a2,	// (0x00036365) skin_t2

0x0001,

0xf1b0,	// (0x00043f73) skin_t

0x6140,	// (0x0003af03) cell_skin_colour_pane_ParamLimits

0x6140,	// (0x0003af03) cell_skin_colour_pane

0x15b0,	// (0x00036373) cell_skin_colour_pane_g1

0x61c4,	// (0x0003af87) call_video_g1_ParamLimits

0x61c4,	// (0x0003af87) call_video_g1

0x61d4,	// (0x0003af97) call_video_g2_ParamLimits

0x61d4,	// (0x0003af97) call_video_g2

0x0001,

0xf1b5,	// (0x00043f78) call_video_g_ParamLimits

0xf1b5,	// (0x00043f78) call_video_g

0x622e,	// (0x0003aff1) call_video_uplink_pane_cp1_ParamLimits

0x622e,	// (0x0003aff1) call_video_uplink_pane_cp1

0x15c2,	// (0x00036385) call_video_uplink_pane_cp2

0x62fa,	// (0x0003b0bd) video_down_crop_pane_ParamLimits

0x62fa,	// (0x0003b0bd) video_down_crop_pane

0x63ec,	// (0x0003b1af) video_down_pane_ParamLimits

0x63ec,	// (0x0003b1af) video_down_pane

0x15ca,	// (0x0003638d) video_down_subqcif_pane_ParamLimits

0x15ca,	// (0x0003638d) video_down_subqcif_pane

0x15e2,	// (0x000363a5) video_down_subqcif_pane_cp_ParamLimits

0x15e2,	// (0x000363a5) video_down_subqcif_pane_cp

0x1608,	// (0x000363cb) im_reading_pane_ParamLimits

0x1608,	// (0x000363cb) im_reading_pane

0x650c,	// (0x0003b2cf) im_writing_pane_ParamLimits

0x650c,	// (0x0003b2cf) im_writing_pane

0x652a,	// (0x0003b2ed) im_reading_pane_t1

0x1622,	// (0x000363e5) list_im_pane

0x1633,	// (0x000363f6) scroll_pane_cp07

0x6582,	// (0x0003b345) im_writing_pane_t1_ParamLimits

0x6582,	// (0x0003b345) im_writing_pane_t1

0x164c,	// (0x0003640f) im_writing_pane_t2_ParamLimits

0x164c,	// (0x0003640f) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x00043f82) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x00043f82) im_writing_pane_t

0x0fd9,	// (0x00035d9c) input_focus_pane_cp04

0x0fd9,	// (0x00035d9c) input_focus_pane_cp05

0x6594,	// (0x0003b357) list_im_single_pane_ParamLimits

0x6594,	// (0x0003b357) list_im_single_pane

0x65bb,	// (0x0003b37e) list_single_im_pane_t1

0x1561,	// (0x00036324) blid_accuracy_pane

0x1561,	// (0x00036324) blid_compass_pane

0x3191,	// (0x00037f54) main_location_t1

0x3191,	// (0x00037f54) main_location_t2

0x3191,	// (0x00037f54) main_location_t3

0x0002,

0xf4fb,	// (0x000442be) main_location_t

0x0fd9,	// (0x00035d9c) aid_levels_location

0x125a,	// (0x0003601d) blid_accuracy_pane_g1

0x125a,	// (0x0003601d) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x00043fd6) blid_accuracy_pane_g

0x1694,	// (0x00036457) wml_content_pane

0x16d2,	// (0x00036495) wml_button_pane_ParamLimits

0x16d2,	// (0x00036495) wml_button_pane

0x65ca,	// (0x0003b38d) wml_list_single_large_pane_ParamLimits

0x65ca,	// (0x0003b38d) wml_list_single_large_pane

0x65f5,	// (0x0003b3b8) wml_list_single_medium_pane_ParamLimits

0x65f5,	// (0x0003b3b8) wml_list_single_medium_pane

0x6627,	// (0x0003b3ea) wml_list_single_small_pane_ParamLimits

0x6627,	// (0x0003b3ea) wml_list_single_small_pane

0x16e6,	// (0x000364a9) wml_selection_box_pane_ParamLimits

0x16e6,	// (0x000364a9) wml_selection_box_pane

0x16f9,	// (0x000364bc) wml_list_single_pane_t1

0x1708,	// (0x000364cb) wml_list_single_medium_pane_t1

0x1717,	// (0x000364da) wml_list_single_large_pane_t1

0x1726,	// (0x000364e9) input_focus_pane_cp02_ParamLimits

0x1726,	// (0x000364e9) input_focus_pane_cp02

0x1739,	// (0x000364fc) wml_selection_box_pane_g1

0x1742,	// (0x00036505) wml_selection_box_pane_t1_ParamLimits

0x1742,	// (0x00036505) wml_selection_box_pane_t1

0x1242,	// (0x00036005) bg_wml_button_pane_ParamLimits

0x1242,	// (0x00036005) bg_wml_button_pane

0x175a,	// (0x0003651d) wml_button_pane_g1

0x1762,	// (0x00036525) wml_button_pane_t1

0x175a,	// (0x0003651d) wml_button_bg_pane_g1

0x1772,	// (0x00036535) wml_button_bg_pane_g2

0x177a,	// (0x0003653d) wml_button_bg_pane_g3

0x1782,	// (0x00036545) wml_button_bg_pane_g4

0x178a,	// (0x0003654d) wml_button_bg_pane_g5

0x1792,	// (0x00036555) wml_button_bg_pane_g6

0x179a,	// (0x0003655d) wml_button_bg_pane_g7

0x17a2,	// (0x00036565) wml_button_bg_pane_g8

0x17aa,	// (0x0003656d) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x00043f87) wml_button_bg_pane_g

0x6664,	// (0x0003b427) bg_list_pane_cp02

0x17b2,	// (0x00036575) mce_header_pane_ParamLimits

0x17b2,	// (0x00036575) mce_header_pane

0x17c8,	// (0x0003658b) mce_icon_pane

0x17c8,	// (0x0003658b) mce_image_pane

0x17d1,	// (0x00036594) mce_text_pane_ParamLimits

0x17d1,	// (0x00036594) mce_text_pane

0x666e,	// (0x0003b431) scroll_pane_cp03

0x16ca,	// (0x0003648d) scroll_pane_cp04

0x17e4,	// (0x000365a7) scroll_pane_cp05_ParamLimits

0x17e4,	// (0x000365a7) scroll_pane_cp05

0x6678,	// (0x0003b43b) mce_header_field_pane_ParamLimits

0x6678,	// (0x0003b43b) mce_header_field_pane

0x6698,	// (0x0003b45b) mce_header_field_pane_2_ParamLimits

0x6698,	// (0x0003b45b) mce_header_field_pane_2

0x66ae,	// (0x0003b471) mce_header_field_pane_3

0x66b6,	// (0x0003b479) list_single_mce_message_pane_ParamLimits

0x66b6,	// (0x0003b479) list_single_mce_message_pane

0x66e4,	// (0x0003b4a7) list_single_mce_smart_pane_ParamLimits

0x66e4,	// (0x0003b4a7) list_single_mce_smart_pane

0x17f0,	// (0x000365b3) input_focus_pane_cp03

0x17f9,	// (0x000365bc) list_header_data_pane

0x671d,	// (0x0003b4e0) mce_header_field_pane_t1

0x672b,	// (0x0003b4ee) list_single_mce_header_pane_ParamLimits

0x672b,	// (0x0003b4ee) list_single_mce_header_pane

0x1801,	// (0x000365c4) list_single_mce_header_pane_t1

0x1810,	// (0x000365d3) list_single_mce_message_pane_g1

0x1818,	// (0x000365db) list_single_mce_message_pane_t1

0x6781,	// (0x0003b544) bg_cale_heading_pane_cp01_ParamLimits

0x6781,	// (0x0003b544) bg_cale_heading_pane_cp01

0x1826,	// (0x000365e9) bg_cale_pane_cp02_ParamLimits

0x1826,	// (0x000365e9) bg_cale_pane_cp02

0x67cf,	// (0x0003b592) cale_month_corner_pane

0x67ee,	// (0x0003b5b1) cale_month_day_heading_pane_ParamLimits

0x67ee,	// (0x0003b5b1) cale_month_day_heading_pane

0x6854,	// (0x0003b617) cale_month_pane_g1_ParamLimits

0x6854,	// (0x0003b617) cale_month_pane_g1

0x6897,	// (0x0003b65a) cale_month_pane_g2_ParamLimits

0x6897,	// (0x0003b65a) cale_month_pane_g2

0x68d1,	// (0x0003b694) cale_month_pane_g3_ParamLimits

0x68d1,	// (0x0003b694) cale_month_pane_g3

0x6921,	// (0x0003b6e4) cale_month_pane_g4_ParamLimits

0x6921,	// (0x0003b6e4) cale_month_pane_g4

0x6971,	// (0x0003b734) cale_month_pane_g5_ParamLimits

0x6971,	// (0x0003b734) cale_month_pane_g5

0x69c1,	// (0x0003b784) cale_month_pane_g6_ParamLimits

0x69c1,	// (0x0003b784) cale_month_pane_g6

0x6a11,	// (0x0003b7d4) cale_month_pane_g7_ParamLimits

0x6a11,	// (0x0003b7d4) cale_month_pane_g7

0x6a79,	// (0x0003b83c) cale_month_pane_g8_ParamLimits

0x6a79,	// (0x0003b83c) cale_month_pane_g8

0x6ae1,	// (0x0003b8a4) cale_month_pane_g9_ParamLimits

0x6ae1,	// (0x0003b8a4) cale_month_pane_g9

0x6b3f,	// (0x0003b902) cale_month_pane_g10_ParamLimits

0x6b3f,	// (0x0003b902) cale_month_pane_g10

0x6b9d,	// (0x0003b960) cale_month_pane_g11_ParamLimits

0x6b9d,	// (0x0003b960) cale_month_pane_g11

0x6bf1,	// (0x0003b9b4) cale_month_pane_g12_ParamLimits

0x6bf1,	// (0x0003b9b4) cale_month_pane_g12

0x6c47,	// (0x0003ba0a) cale_month_pane_g13_ParamLimits

0x6c47,	// (0x0003ba0a) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x00043f9a) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x00043f9a) cale_month_pane_g

0x6c9d,	// (0x0003ba60) cale_month_week_pane

0x6cc1,	// (0x0003ba84) grid_cale_month_pane_ParamLimits

0x6cc1,	// (0x0003ba84) grid_cale_month_pane

0x6d1e,	// (0x0003bae1) cale_month_day_heading_pane_t1

0x6da4,	// (0x0003bb67) cale_month_day_heading_pane_t2

0x6e1d,	// (0x0003bbe0) cale_month_day_heading_pane_t3

0x6e96,	// (0x0003bc59) cale_month_day_heading_pane_t4

0x6f0f,	// (0x0003bcd2) cale_month_day_heading_pane_t5

0x6f88,	// (0x0003bd4b) cale_month_day_heading_pane_t6

0x7001,	// (0x0003bdc4) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x00043fb5) cale_month_day_heading_pane_t

0x150f,	// (0x000362d2) bg_cale_side_pane_cp01

0x7092,	// (0x0003be55) cale_month_week_pane_t1

0x70ab,	// (0x0003be6e) cale_month_week_pane_t2

0x70c4,	// (0x0003be87) cale_month_week_pane_t3

0x70dd,	// (0x0003bea0) cale_month_week_pane_t4

0x70f8,	// (0x0003bebb) cale_month_week_pane_t5

0x7119,	// (0x0003bedc) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x00043fc4) cale_month_week_pane_t

0x713a,	// (0x0003befd) cell_cale_month_pane_ParamLimits

0x713a,	// (0x0003befd) cell_cale_month_pane

0x7260,	// (0x0003c023) cell_cale_month_pane_g1

0x726c,	// (0x0003c02f) cell_cale_month_pane_t1_ParamLimits

0x726c,	// (0x0003c02f) cell_cale_month_pane_t1

0x151d,	// (0x000362e0) grid_highlight_pane_cp08

0x125a,	// (0x0003601d) main_smil_g1

0x7298,	// (0x0003c05b) smil_status_pane

0x186e,	// (0x00036631) smil_text_pane

0x1493,	// (0x00036256) bg_popup_call3_rect_pane_g8

0x148b,	// (0x0003624e) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x00043fdb) bg_popup_call3_rect_pane_g

0x326d,	// (0x00038030) smil_status_volume_pane_g1

0x1878,	// (0x0003663b) smil_status_pane_t1

0x82fe,	// (0x0003d0c1) volume_smil_pane

0x188f,	// (0x00036652) list_smil_text_pane

0x72ab,	// (0x0003c06e) scroll_pane_cp011

0x72b6,	// (0x0003c079) smil_text_list_pane_t1_ParamLimits

0x72b6,	// (0x0003c079) smil_text_list_pane_t1

0x7343,	// (0x0003c106) aid_volume_smil_ParamLimits

0x7343,	// (0x0003c106) aid_volume_smil

0x125a,	// (0x0003601d) smil_volume_pane_g1

0x125a,	// (0x0003601d) smil_volume_pane_g2

0x0001,

0xf213,	// (0x00043fd6) smil_volume_pane_g

0x5b18,	// (0x0003a8db) listscroll_cale_day_pane

0x1899,	// (0x0003665c) bg_cale_pane

0x18b1,	// (0x00036674) list_cale_pane

0x18d4,	// (0x00036697) scroll_pane_cp09

0x1463,	// (0x00036226) cale_bg_pane_g1

0x145b,	// (0x0003621e) cale_bg_pane_g2

0x1453,	// (0x00036216) cale_bg_pane_g3

0x1473,	// (0x00036236) cale_bg_pane_g4

0x146b,	// (0x0003622e) cale_bg_pane_g5

0x147b,	// (0x0003623e) cale_bg_pane_g6

0x1483,	// (0x00036246) cale_bg_pane_g7

0x1493,	// (0x00036256) cale_bg_pane_g8

0x148b,	// (0x0003624e) cale_bg_pane_g9

0x0008,

0xf218,	// (0x00043fdb) cale_bg_pane_g

0x736d,	// (0x0003c130) list_cale_time_pane_ParamLimits

0x736d,	// (0x0003c130) list_cale_time_pane

0x18e5,	// (0x000366a8) list_cale_time_pane_g1_ParamLimits

0x18e5,	// (0x000366a8) list_cale_time_pane_g1

0x18f1,	// (0x000366b4) list_cale_time_pane_g2_ParamLimits

0x18f1,	// (0x000366b4) list_cale_time_pane_g2

0x7395,	// (0x0003c158) list_cale_time_pane_g3_ParamLimits

0x7395,	// (0x0003c158) list_cale_time_pane_g3

0x73a3,	// (0x0003c166) list_cale_time_pane_g4_ParamLimits

0x73a3,	// (0x0003c166) list_cale_time_pane_g4

0x73b1,	// (0x0003c174) list_cale_time_pane_g5_ParamLimits

0x73b1,	// (0x0003c174) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x00043fee) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x00043fee) list_cale_time_pane_g

0x190b,	// (0x000366ce) list_cale_time_pane_t1_ParamLimits

0x190b,	// (0x000366ce) list_cale_time_pane_t1

0x1933,	// (0x000366f6) list_cale_time_pane_t2_ParamLimits

0x1933,	// (0x000366f6) list_cale_time_pane_t2

0x766c,	// (0x0003c42f) aid_blid_cardinal_pane

0x76ae,	// (0x0003c471) compass_pane_t4

0x195b,	// (0x0003671e) list_cale_time_pane_t4_ParamLimits

0x195b,	// (0x0003671e) list_cale_time_pane_t4

0x76bc,	// (0x0003c47f) compass_pane_t5

0x76cc,	// (0x0003c48f) compass_pane_t6

0x76da,	// (0x0003c49d) compass_pane_t7

0x1de4,	// (0x00036ba7) navi_pane_cc_t1

0x1fc1,	// (0x00036d84) aid_phob_thumbnail_center_pane

0x7aa9,	// (0x0003c86c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x00043ffb) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x00043ffb) list_cale_time_pane_t

0x0c30,	// (0x000359f3) bg_popup_window_pane_cp02_ParamLimits

0x0c30,	// (0x000359f3) bg_popup_window_pane_cp02

0x1983,	// (0x00036746) heading_pane_cp01_ParamLimits

0x1983,	// (0x00036746) heading_pane_cp01

0x198f,	// (0x00036752) loc_req_pane_ParamLimits

0x198f,	// (0x00036752) loc_req_pane

0x19a1,	// (0x00036764) loc_type_pane_ParamLimits

0x19a1,	// (0x00036764) loc_type_pane

0x19b3,	// (0x00036776) loc_type_pane_t1_ParamLimits

0x19b3,	// (0x00036776) loc_type_pane_t1

0x19c5,	// (0x00036788) loc_type_pane_t2_ParamLimits

0x19c5,	// (0x00036788) loc_type_pane_t2

0x19d7,	// (0x0003679a) loc_type_pane_t3_ParamLimits

0x19d7,	// (0x0003679a) loc_type_pane_t3

0x0002,

0xf23f,	// (0x00044002) loc_type_pane_t_ParamLimits

0xf23f,	// (0x00044002) loc_type_pane_t

0x19e9,	// (0x000367ac) list_loc_req_pane

0x19f3,	// (0x000367b6) scroll_pane_cp012

0x4b70,	// (0x00039933) list_single_loc_request_popup_menu_pane_ParamLimits

0x4b70,	// (0x00039933) list_single_loc_request_popup_menu_pane

0x19fe,	// (0x000367c1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x19fe,	// (0x000367c1) list_single_loc_request_popup_menu_pane_g1

0x1a0a,	// (0x000367cd) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1a0a,	// (0x000367cd) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x00044009) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x00044009) list_single_loc_request_popup_menu_pane_g

0x1a16,	// (0x000367d9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1a16,	// (0x000367d9) list_single_loc_request_popup_menu_pane_t1

0x73bf,	// (0x0003c182) bg_popup_window_pane_cp03_ParamLimits

0x73bf,	// (0x0003c182) bg_popup_window_pane_cp03

0x73cd,	// (0x0003c190) heading_loc_req_pane_ParamLimits

0x73cd,	// (0x0003c190) heading_loc_req_pane

0x73d9,	// (0x0003c19c) popup_dyc_status_message_window_g1_ParamLimits

0x73d9,	// (0x0003c19c) popup_dyc_status_message_window_g1

0x73e5,	// (0x0003c1a8) popup_dyc_status_message_window_t1_ParamLimits

0x73e5,	// (0x0003c1a8) popup_dyc_status_message_window_t1

0x73f7,	// (0x0003c1ba) popup_dyc_status_message_window_t2_ParamLimits

0x73f7,	// (0x0003c1ba) popup_dyc_status_message_window_t2

0x7409,	// (0x0003c1cc) popup_dyc_status_message_window_t3_ParamLimits

0x7409,	// (0x0003c1cc) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x0004400e) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x0004400e) popup_dyc_status_message_window_t

0x0fd9,	// (0x00035d9c) bg_heading_pane_cp01

0x1a38,	// (0x000367fb) heading_loc_req_pane_g1

0x1a40,	// (0x00036803) heading_loc_req_pane_g2

0x1a48,	// (0x0003680b) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x00044015) heading_loc_req_pane_g

0x1a50,	// (0x00036813) heading_loc_req_pane_t1

0x1a6f,	// (0x00036832) bg_popup_sub_pane_cp01_ParamLimits

0x1a6f,	// (0x00036832) bg_popup_sub_pane_cp01

0x1a7d,	// (0x00036840) popup_cale_events_window_g1_ParamLimits

0x1a7d,	// (0x00036840) popup_cale_events_window_g1

0x1a9d,	// (0x00036860) popup_cale_events_window_g2_ParamLimits

0x1a9d,	// (0x00036860) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x00044037) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x00044037) popup_cale_events_window_g

0x1abd,	// (0x00036880) popup_cale_events_window_t1_ParamLimits

0x1abd,	// (0x00036880) popup_cale_events_window_t1

0x1acf,	// (0x00036892) popup_cale_events_window_t2_ParamLimits

0x1acf,	// (0x00036892) popup_cale_events_window_t2

0x1b0d,	// (0x000368d0) popup_cale_events_window_t3_ParamLimits

0x1b0d,	// (0x000368d0) popup_cale_events_window_t3

0x1b47,	// (0x0003690a) popup_cale_events_window_t4_ParamLimits

0x1b47,	// (0x0003690a) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x0004403c) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x0004403c) popup_cale_events_window_t

0x7433,	// (0x0003c1f6) call_type_pane

0x28dc,	// (0x0003769f) popup_call_status_window_g1

0x743f,	// (0x0003c202) popup_call_status_window_g2

0x744b,	// (0x0003c20e) popup_call_status_window_g3

0x0002,

0xf282,	// (0x00044045) popup_call_status_window_g

0x1b7d,	// (0x00036940) call_type_pane_g1

0x1b86,	// (0x00036949) call_type_pane_g2

0x0001,

0xf289,	// (0x0004404c) call_type_pane_g

0x0fd9,	// (0x00035d9c) bg_popup_sub_pane_cp02

0x1b8f,	// (0x00036952) listscroll_popup_wml_pane

0x1b97,	// (0x0003695a) list_wml_pane

0x1ba1,	// (0x00036964) scroll_pane_cp013

0x1bac,	// (0x0003696f) list_single_graphic_popup_wml_pane_ParamLimits

0x1bac,	// (0x0003696f) list_single_graphic_popup_wml_pane

0x125a,	// (0x0003601d) list_single_graphic_popup_wml_pane_g1

0x1bc0,	// (0x00036983) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x00044051) list_single_graphic_popup_wml_pane_g

0x1bc8,	// (0x0003698b) list_single_graphic_popup_wml_pane_t1

0x1bd6,	// (0x00036999) aid_call_pane

0x123a,	// (0x00035ffd) popup_clock_analogue_window_g1

0x123a,	// (0x00035ffd) popup_clock_analogue_window_g2

0x7457,	// (0x0003c21a) popup_clock_analogue_window_g3

0x7457,	// (0x0003c21a) popup_clock_analogue_window_g4

0x125a,	// (0x0003601d) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x00044056) popup_clock_analogue_window_g

0x745f,	// (0x0003c222) popup_clock_analogue_window_t1

0x746d,	// (0x0003c230) clock_digital_number_pane_ParamLimits

0x746d,	// (0x0003c230) clock_digital_number_pane

0x7479,	// (0x0003c23c) clock_digital_number_pane_cp02_ParamLimits

0x7479,	// (0x0003c23c) clock_digital_number_pane_cp02

0x7485,	// (0x0003c248) clock_digital_number_pane_cp03_ParamLimits

0x7485,	// (0x0003c248) clock_digital_number_pane_cp03

0x7491,	// (0x0003c254) clock_digital_number_pane_cp04_ParamLimits

0x7491,	// (0x0003c254) clock_digital_number_pane_cp04

0x749d,	// (0x0003c260) clock_digital_separator_pane_ParamLimits

0x749d,	// (0x0003c260) clock_digital_separator_pane

0x74a9,	// (0x0003c26c) popup_clock_digital_window_t1

0x125a,	// (0x0003601d) clock_digital_number_pane_g1

0x125a,	// (0x0003601d) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x00043fd6) clock_digital_number_pane_g

0x125a,	// (0x0003601d) clock_digital_separator_pane_g1

0x125a,	// (0x0003601d) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x00043fd6) clock_digital_separator_pane_g

0x0fd9,	// (0x00035d9c) bg_popup_window_pane_cp04

0x1be6,	// (0x000369a9) heading_pane_cp03

0x1561,	// (0x00036324) listscroll_popup_gms_pane

0x0fd9,	// (0x00035d9c) grid_large_graphic_popup_pane

0x1bee,	// (0x000369b1) listscroll_popup_gms_pane_g1

0x1bf7,	// (0x000369ba) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x00044061) listscroll_popup_gms_pane_g

0x1c00,	// (0x000369c3) scroll_pane_cp014

0x12af,	// (0x00036072) cell_large_graphic_popup_pane_ParamLimits

0x12af,	// (0x00036072) cell_large_graphic_popup_pane

0x12bd,	// (0x00036080) cell_large_graphic_popup_pane_g1_ParamLimits

0x12bd,	// (0x00036080) cell_large_graphic_popup_pane_g1

0x1c09,	// (0x000369cc) cell_large_graphic_popup_pane_g2_ParamLimits

0x1c09,	// (0x000369cc) cell_large_graphic_popup_pane_g2

0x1c17,	// (0x000369da) cell_large_graphic_popup_pane_g3_ParamLimits

0x1c17,	// (0x000369da) cell_large_graphic_popup_pane_g3

0x1c25,	// (0x000369e8) cell_large_graphic_popup_pane_g4_ParamLimits

0x1c25,	// (0x000369e8) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x00044066) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x00044066) cell_large_graphic_popup_pane_g

0x0fd9,	// (0x00035d9c) grid_highlight_pane_cp010

0x125a,	// (0x0003601d) bg_popup_call_pane_g1

0x1c36,	// (0x000369f9) list_single_graphic_popup_conf_pane_ParamLimits

0x1c36,	// (0x000369f9) list_single_graphic_popup_conf_pane

0x1c49,	// (0x00036a0c) list_highlight_pane_cp01

0x1c52,	// (0x00036a15) list_single_graphic_popup_conf_pane_g1

0x1c5a,	// (0x00036a1d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x0004406f) list_single_graphic_popup_conf_pane_g

0x1c62,	// (0x00036a25) list_single_graphic_popup_conf_pane_t1

0x1c70,	// (0x00036a33) linegrid_cams_pane_g1

0x74c6,	// (0x0003c289) linegrid_cams_pane_g2

0x149b,	// (0x0003625e) linegrid_cams_pane_g3

0x1c79,	// (0x00036a3c) linegrid_cams_pane_g4

0x74cf,	// (0x0003c292) linegrid_cams_pane_g5

0x74d8,	// (0x0003c29b) linegrid_cams_pane_g6

0x1550,	// (0x00036313) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x00044074) linegrid_cams_pane_g

0x1c82,	// (0x00036a45) popup_clock_analogue_window

0x1c82,	// (0x00036a45) popup_clock_digital_window

0x0fd9,	// (0x00035d9c) popup_phob_thumbnail_window

0x125a,	// (0x0003601d) call_video_uplink_pane_g1

0x1c8b,	// (0x00036a4e) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x00044083) call_video_uplink_pane_g

0x1c93,	// (0x00036a56) video_uplink_pane

0x1c9b,	// (0x00036a5e) mce_image_pane_g1

0x74e1,	// (0x0003c2a4) mce_image_pane_g2

0x74e9,	// (0x0003c2ac) mce_image_pane_g3

0x74f1,	// (0x0003c2b4) mce_image_pane_g4

0x74f9,	// (0x0003c2bc) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x00044088) mce_image_pane_g

0x1ca5,	// (0x00036a68) control_top_pane_stacon_cp01_ParamLimits

0x1ca5,	// (0x00036a68) control_top_pane_stacon_cp01

0x1cb9,	// (0x00036a7c) uni_indicator_pane_stacon_cp01_ParamLimits

0x1cb9,	// (0x00036a7c) uni_indicator_pane_stacon_cp01

0x1cca,	// (0x00036a8d) bg_popup_sub_pane_cp03

0x7501,	// (0x0003c2c4) chi_dic_find_pane

0x7509,	// (0x0003c2cc) listscroll_chi_dic_pane

0x7512,	// (0x0003c2d5) main_pane_chidic_g1

0x7525,	// (0x0003c2e8) chi_dic_find_pane_t1

0x1cd4,	// (0x00036a97) find_chidic_pane

0x1cdd,	// (0x00036aa0) chi_dic_list_pane_ParamLimits

0x1cdd,	// (0x00036aa0) chi_dic_list_pane

0x1cee,	// (0x00036ab1) scroll_pane_cp020

0x7533,	// (0x0003c2f6) find_chidic_pane_t1

0x0fd9,	// (0x00035d9c) input_focus_pane_cp06

0x7542,	// (0x0003c305) list_chi_dic_pane_ParamLimits

0x7542,	// (0x0003c305) list_chi_dic_pane

0x755f,	// (0x0003c322) list_chi_dic_pane_t1_ParamLimits

0x755f,	// (0x0003c322) list_chi_dic_pane_t1

0x0fd9,	// (0x00035d9c) list_highlight_pane_cp020

0x1cf6,	// (0x00036ab9) bg_cale_heading_pane_g1

0x7572,	// (0x0003c335) bg_cale_heading_pane_g2

0x757a,	// (0x0003c33d) bg_cale_heading_pane_g3

0x7582,	// (0x0003c345) bg_cale_heading_pane_g4

0x758c,	// (0x0003c34f) bg_cale_heading_pane_g5

0x7596,	// (0x0003c359) bg_cale_heading_pane_g6

0x759e,	// (0x0003c361) bg_cale_heading_pane_g7

0x75a6,	// (0x0003c369) bg_cale_heading_pane_g8

0x75b0,	// (0x0003c373) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x00044093) bg_cale_heading_pane_g

0x1cf6,	// (0x00036ab9) bg_cale_side_pane_g1

0x75ba,	// (0x0003c37d) bg_cale_side_pane_g2

0x75c4,	// (0x0003c387) bg_cale_side_pane_g3

0x75ce,	// (0x0003c391) bg_cale_side_pane_g4

0x75d8,	// (0x0003c39b) bg_cale_side_pane_g5

0x75e2,	// (0x0003c3a5) bg_cale_side_pane_g6

0x75ec,	// (0x0003c3af) bg_cale_side_pane_g7

0x75f6,	// (0x0003c3b9) bg_cale_side_pane_g8

0x75fe,	// (0x0003c3c1) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x000440a6) bg_cale_side_pane_g

0x7606,	// (0x0003c3c9) popup_call_status_window_ParamLimits

0x7606,	// (0x0003c3c9) popup_call_status_window

0x1cfe,	// (0x00036ac1) stacon_top_pane

0x1d06,	// (0x00036ac9) status_pane_ParamLimits

0x1d06,	// (0x00036ac9) status_pane

0x1d1b,	// (0x00036ade) status_small_pane

0x1d23,	// (0x00036ae6) control_pane

0x0fd9,	// (0x00035d9c) stacon_bottom_pane

0x1d2b,	// (0x00036aee) list_single_mce_smart_pane_t1_ParamLimits

0x1d2b,	// (0x00036aee) list_single_mce_smart_pane_t1

0x1d3e,	// (0x00036b01) list_single_mce_smart_pane_t2_ParamLimits

0x1d3e,	// (0x00036b01) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x000440b9) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x000440b9) list_single_mce_smart_pane_t

0x7612,	// (0x0003c3d5) compass_pane

0x761e,	// (0x0003c3e1) main_location2_pane_t1

0x7632,	// (0x0003c3f5) main_location2_pane_t2

0x7646,	// (0x0003c409) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x000440be) main_location2_pane_t

0x1d5d,	// (0x00036b20) compass_pane_g1_ParamLimits

0x1d5d,	// (0x00036b20) compass_pane_g1

0x7690,	// (0x0003c453) compass_pane_t1

0x769f,	// (0x0003c462) compass_pane_t2

0x0005,

0xf304,	// (0x000440c7) compass_pane_t

0x76ea,	// (0x0003c4ad) text_secondary_cp61

0x1ddb,	// (0x00036b9e) navi_pane_cams_g5

0x1e57,	// (0x00036c1a) navi_pane_im_t1

0x1e65,	// (0x00036c28) navi_pane_mp_g1_ParamLimits

0x1e65,	// (0x00036c28) navi_pane_mp_g1

0x1e79,	// (0x00036c3c) navi_pane_mp_g2_ParamLimits

0x1e79,	// (0x00036c3c) navi_pane_mp_g2

0x1e85,	// (0x00036c48) navi_pane_mp_g3_ParamLimits

0x1e85,	// (0x00036c48) navi_pane_mp_g3

0x0002,

0xf318,	// (0x000440db) navi_pane_mp_g_ParamLimits

0xf318,	// (0x000440db) navi_pane_mp_g

0x1e91,	// (0x00036c54) navi_pane_mp_t1

0x1e9f,	// (0x00036c62) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x000440e2) navi_pane_mp_t

0x1f0a,	// (0x00036ccd) navi_pane_vt_g1

0x1e91,	// (0x00036c54) navi_pane_vt_t1

0x1f12,	// (0x00036cd5) navi_slider_pane

0x1561,	// (0x00036324) zooming_pane

0x1f22,	// (0x00036ce5) navi_slider_pane_g1

0x7725,	// (0x0003c4e8) navi_slider_pane_g2

0x0006,

0xf326,	// (0x000440e9) navi_slider_pane_g

0x1f46,	// (0x00036d09) aid_levels_zoom

0x1f4e,	// (0x00036d11) zooming_pane_g1

0x1f56,	// (0x00036d19) zooming_pane_g2

0x1f56,	// (0x00036d19) zooming_pane_g3

0x0002,

0xf335,	// (0x000440f8) zooming_pane_g

0x1f5e,	// (0x00036d21) level_10_zoom

0x1f67,	// (0x00036d2a) level_11_zoom

0x1f70,	// (0x00036d33) level_1_zoom

0x1f79,	// (0x00036d3c) level_2_zoom

0x1f82,	// (0x00036d45) level_3_zoom

0x1f8b,	// (0x00036d4e) level_4_zoom

0x1f94,	// (0x00036d57) level_5_zoom

0x1f9d,	// (0x00036d60) level_6_zoom

0x1fa6,	// (0x00036d69) level_7_zoom

0x1faf,	// (0x00036d72) level_8_zoom

0x1fb8,	// (0x00036d7b) level_9_zoom

0x1fc9,	// (0x00036d8c) popup_phob_thumbnail_window_g1

0x1fd1,	// (0x00036d94) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x000440ff) popup_phob_thumbnail_window_g

0x7fbb,	// (0x0003cd7e) level_1_location

0x7fc3,	// (0x0003cd86) level_2_location

0x7fcb,	// (0x0003cd8e) level_3_location

0x7fd5,	// (0x0003cd98) level_4_location

0x1561,	// (0x00036324) level_5_location

0x7737,	// (0x0003c4fa) mce_icon_pane_g1

0x773f,	// (0x0003c502) mce_icon_pane_g2

0x0001,

0xf341,	// (0x00044104) mce_icon_pane_g

0x7747,	// (0x0003c50a) main_mup_pane_g1_ParamLimits

0x7747,	// (0x0003c50a) main_mup_pane_g1

0x12d9,	// (0x0003609c) main_mup_pane_g2_ParamLimits

0x12d9,	// (0x0003609c) main_mup_pane_g2

0x12d9,	// (0x0003609c) main_mup_pane_g3_ParamLimits

0x12d9,	// (0x0003609c) main_mup_pane_g3

0x12d9,	// (0x0003609c) main_mup_pane_g4_ParamLimits

0x12d9,	// (0x0003609c) main_mup_pane_g4

0x12d9,	// (0x0003609c) main_mup_pane_g5_ParamLimits

0x12d9,	// (0x0003609c) main_mup_pane_g5

0x12d9,	// (0x0003609c) main_mup_pane_g6_ParamLimits

0x12d9,	// (0x0003609c) main_mup_pane_g6

0x12d9,	// (0x0003609c) main_mup_pane_g7_ParamLimits

0x12d9,	// (0x0003609c) main_mup_pane_g7

0x12d9,	// (0x0003609c) main_mup_pane_g8_ParamLimits

0x12d9,	// (0x0003609c) main_mup_pane_g8

0x12d9,	// (0x0003609c) main_mup_pane_g9_ParamLimits

0x12d9,	// (0x0003609c) main_mup_pane_g9

0x12d9,	// (0x0003609c) main_mup_pane_g10_ParamLimits

0x12d9,	// (0x0003609c) main_mup_pane_g10

0x12d9,	// (0x0003609c) main_mup_pane_g11_ParamLimits

0x12d9,	// (0x0003609c) main_mup_pane_g11

0x12cb,	// (0x0003608e) main_mup_pane_g12_ParamLimits

0x12cb,	// (0x0003608e) main_mup_pane_g12

0x12d9,	// (0x0003609c) main_mup_pane_g13_ParamLimits

0x12d9,	// (0x0003609c) main_mup_pane_g13

0x000c,

0xf346,	// (0x00044109) main_mup_pane_g_ParamLimits

0xf346,	// (0x00044109) main_mup_pane_g

0x12e7,	// (0x000360aa) main_mup_pane_t1_ParamLimits

0x12e7,	// (0x000360aa) main_mup_pane_t1

0x12e7,	// (0x000360aa) main_mup_pane_t2_ParamLimits

0x12e7,	// (0x000360aa) main_mup_pane_t2

0x12e7,	// (0x000360aa) main_mup_pane_t3_ParamLimits

0x12e7,	// (0x000360aa) main_mup_pane_t3

0x1319,	// (0x000360dc) main_mup_pane_t4_ParamLimits

0x1319,	// (0x000360dc) main_mup_pane_t4

0x1319,	// (0x000360dc) main_mup_pane_t5_ParamLimits

0x1319,	// (0x000360dc) main_mup_pane_t5

0x1305,	// (0x000360c8) main_mup_pane_t6_ParamLimits

0x1305,	// (0x000360c8) main_mup_pane_t6

0x0005,

0xf361,	// (0x00044124) main_mup_pane_t_ParamLimits

0xf361,	// (0x00044124) main_mup_pane_t

0x0fe3,	// (0x00035da6) mup_progress_pane_ParamLimits

0x0fe3,	// (0x00035da6) mup_progress_pane

0x32ca,	// (0x0003808d) mup_visualizer_pane_ParamLimits

0x32ca,	// (0x0003808d) mup_visualizer_pane

0x32ca,	// (0x0003808d) mup_volume_pane_ParamLimits

0x32ca,	// (0x0003808d) mup_volume_pane

0x12cb,	// (0x0003608e) mup_visualizer_pane_g1_ParamLimits

0x12cb,	// (0x0003608e) mup_visualizer_pane_g1

0x1fe7,	// (0x00036daa) mup_visualizer_pane_g2_ParamLimits

0x1fe7,	// (0x00036daa) mup_visualizer_pane_g2

0x12bd,	// (0x00036080) mup_visualizer_pane_g3_ParamLimits

0x12bd,	// (0x00036080) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x00044131) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x00044131) mup_visualizer_pane_g

0x12fb,	// (0x000360be) mup_volume_pane_g1

0x12fb,	// (0x000360be) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00043e4f) mup_volume_pane_g

0x12fb,	// (0x000360be) mup_progress_pane_g1

0x12fb,	// (0x000360be) mup_progress_pane_g2

0x12fb,	// (0x000360be) mup_progress_pane_g3

0x0002,

0xf375,	// (0x00044138) mup_progress_pane_g

0x0fd9,	// (0x00035d9c) bg_popup_window_pane_cp05

0x1ff5,	// (0x00036db8) heading_pane_cp02_ParamLimits

0x1ff5,	// (0x00036db8) heading_pane_cp02

0x200f,	// (0x00036dd2) list_popup_blid_pane

0x2017,	// (0x00036dda) list_blid_sat_info_pane_ParamLimits

0x2017,	// (0x00036dda) list_blid_sat_info_pane

0x202a,	// (0x00036ded) list_blid_sat_info_pane_g1

0x2032,	// (0x00036df5) list_blid_sat_info_pane_t1

0x7842,	// (0x0003c605) mup_equalizer_pane_ParamLimits

0x7842,	// (0x0003c605) mup_equalizer_pane

0x7863,	// (0x0003c626) mup_equalizer_pane_cp1_ParamLimits

0x7863,	// (0x0003c626) mup_equalizer_pane_cp1

0x7884,	// (0x0003c647) mup_equalizer_pane_cp2_ParamLimits

0x7884,	// (0x0003c647) mup_equalizer_pane_cp2

0x78a5,	// (0x0003c668) mup_equalizer_pane_cp3_ParamLimits

0x78a5,	// (0x0003c668) mup_equalizer_pane_cp3

0x78c6,	// (0x0003c689) mup_equalizer_pane_cp4_ParamLimits

0x78c6,	// (0x0003c689) mup_equalizer_pane_cp4

0x78e7,	// (0x0003c6aa) mup_equalizer_pane_cp5

0x78fd,	// (0x0003c6c0) mup_equalizer_pane_cp6

0x7915,	// (0x0003c6d8) mup_equalizer_pane_cp7

0x30f1,	// (0x00037eb4) bg_popup_call_poc_act_pane_g9

0x30f9,	// (0x00037ebc) bg_popup_call_poc_act_pane_g10

0x3101,	// (0x00037ec4) bg_popup_call_poc_act_pane_g11

0x000a,

0x1242,	// (0x00036005) mup_scale_pane

0x125a,	// (0x0003601d) mup_scale_pane_g1

0x2040,	// (0x00036e03) mup_scale_pane_g2

0x0006,

0xf391,	// (0x00044154) mup_scale_pane_g

0x2064,	// (0x00036e27) msg_data_pane

0x206c,	// (0x00036e2f) scroll_pane_cp017

0x4b89,	// (0x0003994c) bg_list_pane_cp04_ParamLimits

0x4b89,	// (0x0003994c) bg_list_pane_cp04

0x2074,	// (0x00036e37) msg_data_pane_g1

0x793f,	// (0x0003c702) msg_data_pane_g2

0x7947,	// (0x0003c70a) msg_data_pane_g3

0x794f,	// (0x0003c712) msg_data_pane_g4

0x7957,	// (0x0003c71a) msg_data_pane_g5

0x795f,	// (0x0003c722) msg_data_pane_g6

0x7967,	// (0x0003c72a) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x00044163) msg_data_pane_g

0x4ba9,	// (0x0003996c) msg_text_pane_ParamLimits

0x4ba9,	// (0x0003996c) msg_text_pane

0x796f,	// (0x0003c732) qrid_highlight_pane_cp011_ParamLimits

0x796f,	// (0x0003c732) qrid_highlight_pane_cp011

0x0fd9,	// (0x00035d9c) msg_body_pane

0x1242,	// (0x00036005) msg_header_pane

0x4c15,	// (0x000399d8) input_focus_pane_cp07

0x798b,	// (0x0003c74e) msg_header_pane_t1_ParamLimits

0x798b,	// (0x0003c74e) msg_header_pane_t1

0x4c36,	// (0x000399f9) msg_header_pane_t2_ParamLimits

0x4c36,	// (0x000399f9) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x00044177) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x00044177) msg_header_pane_t

0x20b1,	// (0x00036e74) msg_body_pane_g1

0x4c56,	// (0x00039a19) msg_body_pane_t1_ParamLimits

0x4c56,	// (0x00039a19) msg_body_pane_t1

0x4c87,	// (0x00039a4a) msg_body_pane_t2_ParamLimits

0x4c87,	// (0x00039a4a) msg_body_pane_t2

0x4c99,	// (0x00039a5c) msg_body_pane_t3_ParamLimits

0x4c99,	// (0x00039a5c) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x0004417c) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x0004417c) msg_body_pane_t

0x79f9,	// (0x0003c7bc) main_viewer_pane_g1_ParamLimits

0x79f9,	// (0x0003c7bc) main_viewer_pane_g1

0x7a05,	// (0x0003c7c8) main_viewer_pane_g2_ParamLimits

0x7a05,	// (0x0003c7c8) main_viewer_pane_g2

0x7a11,	// (0x0003c7d4) main_viewer_pane_g3_ParamLimits

0x7a11,	// (0x0003c7d4) main_viewer_pane_g3

0x7a22,	// (0x0003c7e5) main_viewer_pane_g4_ParamLimits

0x7a22,	// (0x0003c7e5) main_viewer_pane_g4

0x7a33,	// (0x0003c7f6) main_viewer_pane_g5_ParamLimits

0x7a33,	// (0x0003c7f6) main_viewer_pane_g5

0x7a33,	// (0x0003c7f6) main_viewer_pane_g7_ParamLimits

0x7a33,	// (0x0003c7f6) main_viewer_pane_g7

0x7a45,	// (0x0003c808) main_viewer_pane_g8_ParamLimits

0x7a45,	// (0x0003c808) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x0004418c) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x0004418c) main_viewer_pane_g

0x20b9,	// (0x00036e7c) viewer_content_pane_ParamLimits

0x20b9,	// (0x00036e7c) viewer_content_pane

0x7a7d,	// (0x0003c840) main_postcard_pane_g1_ParamLimits

0x7a7d,	// (0x0003c840) main_postcard_pane_g1

0x7a8b,	// (0x0003c84e) main_postcard_pane_g2_ParamLimits

0x7a8b,	// (0x0003c84e) main_postcard_pane_g2

0x7a99,	// (0x0003c85c) main_postcard_pane_g3_ParamLimits

0x7a99,	// (0x0003c85c) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x0004419d) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x0004419d) main_postcard_pane_g

0x7aa9,	// (0x0003c86c) main_postcard_pane_g4

0x325a,	// (0x0003801d) smil_status_volume_pane_g2

0x7ad5,	// (0x0003c898) postcard_pane_ParamLimits

0x7ad5,	// (0x0003c898) postcard_pane

0x28dc,	// (0x0003769f) postcard_pane_g1_ParamLimits

0x28dc,	// (0x0003769f) postcard_pane_g1

0x7b07,	// (0x0003c8ca) postcard_pane_g2_ParamLimits

0x7b07,	// (0x0003c8ca) postcard_pane_g2

0x7b13,	// (0x0003c8d6) postcard_pane_g3_ParamLimits

0x7b13,	// (0x0003c8d6) postcard_pane_g3

0x20f7,	// (0x00036eba) postcard_pane_g4_ParamLimits

0x20f7,	// (0x00036eba) postcard_pane_g4

0x7b1f,	// (0x0003c8e2) postcard_pane_g5_ParamLimits

0x7b1f,	// (0x0003c8e2) postcard_pane_g5

0x7b2b,	// (0x0003c8ee) postcard_pane_g6_ParamLimits

0x7b2b,	// (0x0003c8ee) postcard_pane_g6

0x20e9,	// (0x00036eac) postcard_pane_g7_ParamLimits

0x20e9,	// (0x00036eac) postcard_pane_g7

0x0006,

0xf3e7,	// (0x000441aa) postcard_pane_g_ParamLimits

0xf3e7,	// (0x000441aa) postcard_pane_g

0x7b37,	// (0x0003c8fa) main_mp2_pane_g1_ParamLimits

0x7b37,	// (0x0003c8fa) main_mp2_pane_g1

0x7b43,	// (0x0003c906) main_mp2_pane_g2_ParamLimits

0x7b43,	// (0x0003c906) main_mp2_pane_g2

0x7b4f,	// (0x0003c912) main_mp2_pane_g3_ParamLimits

0x7b4f,	// (0x0003c912) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x000441b9) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x000441b9) main_mp2_pane_g

0x7b5b,	// (0x0003c91e) main_mp2_pane_t1_ParamLimits

0x7b5b,	// (0x0003c91e) main_mp2_pane_t1

0x7b72,	// (0x0003c935) main_mp2_pane_t2_ParamLimits

0x7b72,	// (0x0003c935) main_mp2_pane_t2

0x7b84,	// (0x0003c947) main_mp2_pane_t3_ParamLimits

0x7b84,	// (0x0003c947) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x000441c0) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x000441c0) main_mp2_pane_t

0x0fe3,	// (0x00035da6) pec_content_pane_ParamLimits

0x0fe3,	// (0x00035da6) pec_content_pane

0x0bbc,	// (0x0003597f) scroll_pane_cp015

0x20db,	// (0x00036e9e) pec_attribute_pane_ParamLimits

0x20db,	// (0x00036e9e) pec_attribute_pane

0x12bd,	// (0x00036080) pec_content_pane_g1_ParamLimits

0x12bd,	// (0x00036080) pec_content_pane_g1

0x2105,	// (0x00036ec8) pec_content_pane_t1_ParamLimits

0x2105,	// (0x00036ec8) pec_content_pane_t1

0x2119,	// (0x00036edc) pec_content_pane_t2_ParamLimits

0x2119,	// (0x00036edc) pec_content_pane_t2

0x0001,

0xf404,	// (0x000441c7) pec_content_pane_t_ParamLimits

0xf404,	// (0x000441c7) pec_content_pane_t

0x12af,	// (0x00036072) list_single_graphic_pane_cp01_ParamLimits

0x12af,	// (0x00036072) list_single_graphic_pane_cp01

0x1242,	// (0x00036005) bg_popup_sub_pane_cp04

0x212d,	// (0x00036ef0) popup_mup_playback_window_g1

0x2139,	// (0x00036efc) popup_mup_playback_window_t1

0x214e,	// (0x00036f11) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x000441cc) popup_mup_playback_window_t

0x2185,	// (0x00036f48) main_image_pane_g1_ParamLimits

0x2185,	// (0x00036f48) main_image_pane_g1

0x21c8,	// (0x00036f8b) scroll_pane_cp018_ParamLimits

0x21c8,	// (0x00036f8b) scroll_pane_cp018

0x21e0,	// (0x00036fa3) scroll_pane_cp016_ParamLimits

0x21e0,	// (0x00036fa3) scroll_pane_cp016

0x7c07,	// (0x0003c9ca) smil2_image_pane_ParamLimits

0x7c07,	// (0x0003c9ca) smil2_image_pane

0x7c37,	// (0x0003c9fa) smil2_root_pane_ParamLimits

0x7c37,	// (0x0003c9fa) smil2_root_pane

0x7c63,	// (0x0003ca26) smil2_text_pane_ParamLimits

0x7c63,	// (0x0003ca26) smil2_text_pane

0x0bbc,	// (0x0003597f) bg_list_pane_cp06

0x0bbc,	// (0x0003597f) grid_radio_pane

0x0fd9,	// (0x00035d9c) bg_popup_window_pane_cp06

0x1a5f,	// (0x00036822) main_fmradio_pane_t1

0x1be6,	// (0x000369a9) heading_pane_cp04

0x1a5f,	// (0x00036822) main_fmradio_pane_t2

0x3149,	// (0x00037f0c) popup_cale_lunar_info_window_g1

0x1a5f,	// (0x00036822) main_fmradio_pane_t3

0x3151,	// (0x00037f14) popup_cale_lunar_info_window_g2

0x1a5f,	// (0x00036822) main_fmradio_pane_t4

0x0001,

0x1a5f,	// (0x00036822) main_fmradio_pane_t5

0x0004,

0xf4de,	// (0x000442a1) popup_cale_lunar_info_window_g

0xf269,	// (0x0004402c) main_fmradio_pane_t

0x0bbc,	// (0x0003597f) wait_bar_pane_cp03

0x12af,	// (0x00036072) cell_fmradio_pane_ParamLimits

0x12af,	// (0x00036072) cell_fmradio_pane

0x12bd,	// (0x00036080) cell_fmradio_pane_g1_ParamLimits

0x12bd,	// (0x00036080) cell_fmradio_pane_g1

0x0bbc,	// (0x0003597f) grid_highlight_pane_cp011

0x2214,	// (0x00036fd7) poc_content_pane_ParamLimits

0x2214,	// (0x00036fd7) poc_content_pane

0x2226,	// (0x00036fe9) scroll_pane_cp019

0x7ca3,	// (0x0003ca66) popup_call_poc_act_window_ParamLimits

0x7ca3,	// (0x0003ca66) popup_call_poc_act_window

0x7cb0,	// (0x0003ca73) popup_call_poc_inact_window_ParamLimits

0x7cb0,	// (0x0003ca73) popup_call_poc_inact_window

0xf4a2,	// (0x00044265) bg_popup_call_poc_act_pane_g

0x3109,	// (0x00037ecc) bg_popup_call_poc_inact_pane_g1

0x3111,	// (0x00037ed4) bg_popup_call_poc_inact_pane_g2

0x222e,	// (0x00036ff1) popup_call_poc_act_window_g2

0x3119,	// (0x00037edc) bg_popup_call_poc_inact_pane_g3

0x3099,	// (0x00037e5c) bg_popup_call_poc_inact_pane_g4

0x3121,	// (0x00037ee4) bg_popup_call_poc_inact_pane_g5

0x2236,	// (0x00036ff9) popup_call_poc_act_window_t1_ParamLimits

0x2236,	// (0x00036ff9) popup_call_poc_act_window_t1

0x225e,	// (0x00037021) popup_call_poc_act_window_t2_ParamLimits

0x225e,	// (0x00037021) popup_call_poc_act_window_t2

0x2286,	// (0x00037049) popup_call_poc_act_window_t3_ParamLimits

0x2286,	// (0x00037049) popup_call_poc_act_window_t3

0x22ae,	// (0x00037071) popup_call_poc_act_window_t4_ParamLimits

0x22ae,	// (0x00037071) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x000441e1) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x000441e1) popup_call_poc_act_window_t

0x3129,	// (0x00037eec) bg_popup_call_poc_inact_pane_g6

0x3131,	// (0x00037ef4) bg_popup_call_poc_inact_pane_g7

0x3139,	// (0x00037efc) bg_popup_call_poc_inact_pane_g8

0x22c0,	// (0x00037083) popup_call_poc_inact_window_g2

0x3141,	// (0x00037f04) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4b9,	// (0x0004427c) bg_popup_call_poc_inact_pane_g

0x22c8,	// (0x0003708b) popup_call_poc_inact_window_t1_ParamLimits

0x22c8,	// (0x0003708b) popup_call_poc_inact_window_t1

0x22dd,	// (0x000370a0) popup_call_poc_inact_window_t2_ParamLimits

0x22dd,	// (0x000370a0) popup_call_poc_inact_window_t2

0x22f2,	// (0x000370b5) popup_call_poc_inact_window_t3_ParamLimits

0x22f2,	// (0x000370b5) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x000441ea) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x000441ea) popup_call_poc_inact_window_t

0x31e5,	// (0x00037fa8) context_pane_ParamLimits

0x82b5,	// (0x0003d078) signal_pane_ParamLimits

0x1561,	// (0x00036324) main_call2_pane

0x8228,	// (0x0003cfeb) popup_phob_thumbnail2_window_ParamLimits

0x8228,	// (0x0003cfeb) popup_phob_thumbnail2_window

0x79a7,	// (0x0003c76a) aid_hotspot_pointer_arrow_pane

0x79af,	// (0x0003c772) aid_hotspot_pointer_hand_pane

0x7f83,	// (0x0003cd46) phob_pre_status_pane_g5

0x12af,	// (0x00036072) cams_zoom_pane_ParamLimits

0x12af,	// (0x00036072) image_vga_pane_ParamLimits

0x12cb,	// (0x0003608e) main_camera_pane_g1_ParamLimits

0x12cb,	// (0x0003608e) main_camera_pane_g2_ParamLimits

0x12cb,	// (0x0003608e) main_camera_pane_g3_ParamLimits

0x12cb,	// (0x0003608e) main_camera_pane_g4_ParamLimits

0x12cb,	// (0x0003608e) main_camera_pane_g5_ParamLimits

0x12cb,	// (0x0003608e) main_camera_pane_g6_ParamLimits

0x12cb,	// (0x0003608e) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x00043f20) main_camera_pane_g_ParamLimits

0x1319,	// (0x000360dc) main_camera_pane_t1_ParamLimits

0x1319,	// (0x000360dc) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x00043f31) main_camera_pane_t_ParamLimits

0x1242,	// (0x00036005) bg_popup_preview_window_pane_cp01_ParamLimits

0x1242,	// (0x00036005) bg_popup_preview_window_pane_cp01

0x2307,	// (0x000370ca) popup_phob_thumbnail2_window_g1_ParamLimits

0x2307,	// (0x000370ca) popup_phob_thumbnail2_window_g1

0x0fd9,	// (0x00035d9c) call2_cli_visual_pane

0x7ccc,	// (0x0003ca8f) popup_call2_audio_conf_window_ParamLimits

0x7ccc,	// (0x0003ca8f) popup_call2_audio_conf_window

0x7ce1,	// (0x0003caa4) popup_call2_audio_first_window_ParamLimits

0x7ce1,	// (0x0003caa4) popup_call2_audio_first_window

0x7d7f,	// (0x0003cb42) popup_call2_audio_in_window_ParamLimits

0x7d7f,	// (0x0003cb42) popup_call2_audio_in_window

0x7dc1,	// (0x0003cb84) popup_call2_audio_out_window_ParamLimits

0x7dc1,	// (0x0003cb84) popup_call2_audio_out_window

0x7e23,	// (0x0003cbe6) popup_call2_audio_second_window_ParamLimits

0x7e23,	// (0x0003cbe6) popup_call2_audio_second_window

0x7e81,	// (0x0003cc44) popup_call2_audio_wait_window_ParamLimits

0x7e81,	// (0x0003cc44) popup_call2_audio_wait_window

0x0fd9,	// (0x00035d9c) bg_popup_call2_act_pane_cp03

0x1224,	// (0x00035fe7) list_conf_pane_cp

0x2313,	// (0x000370d6) popup_call2_audio_conf_window_t1

0x2321,	// (0x000370e4) list_single_graphic_popup_conf2_pane_ParamLimits

0x2321,	// (0x000370e4) list_single_graphic_popup_conf2_pane

0x1c49,	// (0x00036a0c) list_highlight_pane_cp04

0x2334,	// (0x000370f7) list_single_graphic_popup_conf2_pane_g1

0x1c5a,	// (0x00036a1d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x000441f1) list_single_graphic_popup_conf2_pane_g

0x233e,	// (0x00037101) list_single_graphic_popup_conf2_pane_t1

0x234c,	// (0x0003710f) bg_popup_call2_act_pane_cp01_ParamLimits

0x234c,	// (0x0003710f) bg_popup_call2_act_pane_cp01

0x23d6,	// (0x00037199) call_type_pane_cp05_ParamLimits

0x23d6,	// (0x00037199) call_type_pane_cp05

0x242a,	// (0x000371ed) popup_call2_audio_second_window_g1_ParamLimits

0x242a,	// (0x000371ed) popup_call2_audio_second_window_g1

0x247e,	// (0x00037241) popup_call2_audio_second_window_g2_ParamLimits

0x247e,	// (0x00037241) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x000441f6) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x000441f6) popup_call2_audio_second_window_g

0x24e3,	// (0x000372a6) popup_call2_audio_second_window_t1_ParamLimits

0x24e3,	// (0x000372a6) popup_call2_audio_second_window_t1

0x259e,	// (0x00037361) popup_call2_audio_second_window_t2_ParamLimits

0x259e,	// (0x00037361) popup_call2_audio_second_window_t2

0x25f1,	// (0x000373b4) popup_call2_audio_second_window_t3_ParamLimits

0x25f1,	// (0x000373b4) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x000441fd) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x000441fd) popup_call2_audio_second_window_t

0x0fd9,	// (0x00035d9c) bg_popup_call2_in_pane_cp02

0x0ff1,	// (0x00035db4) call_type_pane_cp04

0x7ec0,	// (0x0003cc83) popup_call2_audio_wait_window_g1

0x7ec8,	// (0x0003cc8b) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x00044206) popup_call2_audio_wait_window_g

0x1009,	// (0x00035dcc) popup_call2_audio_wait_window_t3

0x26e4,	// (0x000374a7) bg_popup_call2_act_pane_ParamLimits

0x26e4,	// (0x000374a7) bg_popup_call2_act_pane

0x27a4,	// (0x00037567) call_type_pane_cp03_ParamLimits

0x27a4,	// (0x00037567) call_type_pane_cp03

0x2808,	// (0x000375cb) popup_call2_audio_first_window_g1_ParamLimits

0x2808,	// (0x000375cb) popup_call2_audio_first_window_g1

0x2878,	// (0x0003763b) popup_call2_audio_first_window_g2_ParamLimits

0x2878,	// (0x0003763b) popup_call2_audio_first_window_g2

0x28dc,	// (0x0003769f) popup_call2_audio_first_window_g3_ParamLimits

0x28dc,	// (0x0003769f) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x0004420b) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x0004420b) popup_call2_audio_first_window_g

0x2964,	// (0x00037727) popup_call2_audio_first_window_t1_ParamLimits

0x2964,	// (0x00037727) popup_call2_audio_first_window_t1

0x2a67,	// (0x0003782a) popup_call2_audio_first_window_t4_ParamLimits

0x2a67,	// (0x0003782a) popup_call2_audio_first_window_t4

0x2b4a,	// (0x0003790d) popup_call2_audio_first_window_t5_ParamLimits

0x2b4a,	// (0x0003790d) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x00044216) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x00044216) popup_call2_audio_first_window_t

0x123a,	// (0x00035ffd) bg_popup_call2_act_pane_g1

0x3159,	// (0x00037f1c) popup_cale_lunar_info_window_t1

0x3167,	// (0x00037f2a) popup_cale_lunar_info_window_t2

0x3175,	// (0x00037f38) popup_cale_lunar_info_window_t3

0x0fd9,	// (0x00035d9c) bg_popup_call2_bubble_pane

0x2c4b,	// (0x00037a0e) bg_popup_call2_in_pane_cp01_ParamLimits

0x2c4b,	// (0x00037a0e) bg_popup_call2_in_pane_cp01

0x0cb5,	// (0x00035a78) call_type_pane_cp02

0x7ed0,	// (0x0003cc93) popup_call2_audio_out_window_g1_ParamLimits

0x7ed0,	// (0x0003cc93) popup_call2_audio_out_window_g1

0x2c93,	// (0x00037a56) popup_call2_audio_out_window_g2_ParamLimits

0x2c93,	// (0x00037a56) popup_call2_audio_out_window_g2

0x7efc,	// (0x0003ccbf) popup_call2_audio_out_window_g3_ParamLimits

0x7efc,	// (0x0003ccbf) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x0004421f) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x0004421f) popup_call2_audio_out_window_g

0x2cca,	// (0x00037a8d) popup_call2_audio_out_window_t1_ParamLimits

0x2cca,	// (0x00037a8d) popup_call2_audio_out_window_t1

0x2d29,	// (0x00037aec) popup_call2_audio_out_window_t2_ParamLimits

0x2d29,	// (0x00037aec) popup_call2_audio_out_window_t2

0x2d7d,	// (0x00037b40) popup_call2_audio_out_window_t3_ParamLimits

0x2d7d,	// (0x00037b40) popup_call2_audio_out_window_t3

0x2d93,	// (0x00037b56) popup_call2_audio_out_window_t4_ParamLimits

0x2d93,	// (0x00037b56) popup_call2_audio_out_window_t4

0x2da9,	// (0x00037b6c) popup_call2_audio_out_window_t5_ParamLimits

0x2da9,	// (0x00037b6c) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x00044228) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x00044228) popup_call2_audio_out_window_t

0x2e0d,	// (0x00037bd0) bg_popup_call2_in_pane_ParamLimits

0x2e0d,	// (0x00037bd0) bg_popup_call2_in_pane

0x2e69,	// (0x00037c2c) popup_call2_audio_in_window_g1_ParamLimits

0x2e69,	// (0x00037c2c) popup_call2_audio_in_window_g1

0x2ea1,	// (0x00037c64) popup_call2_audio_in_window_g2_ParamLimits

0x2ea1,	// (0x00037c64) popup_call2_audio_in_window_g2

0x2ed9,	// (0x00037c9c) popup_call2_audio_in_window_g3_ParamLimits

0x2ed9,	// (0x00037c9c) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x00044235) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x00044235) popup_call2_audio_in_window_g

0x2f31,	// (0x00037cf4) popup_call2_audio_in_window_t1_ParamLimits

0x2f31,	// (0x00037cf4) popup_call2_audio_in_window_t1

0x2fb1,	// (0x00037d74) popup_call2_audio_in_window_t2_ParamLimits

0x2fb1,	// (0x00037d74) popup_call2_audio_in_window_t2

0x3031,	// (0x00037df4) popup_call2_audio_in_window_t3_ParamLimits

0x3031,	// (0x00037df4) popup_call2_audio_in_window_t3

0x304b,	// (0x00037e0e) popup_call2_audio_in_window_t4_ParamLimits

0x304b,	// (0x00037e0e) popup_call2_audio_in_window_t4

0x305d,	// (0x00037e20) popup_call2_audio_in_window_t5_ParamLimits

0x305d,	// (0x00037e20) popup_call2_audio_in_window_t5

0x306f,	// (0x00037e32) popup_call2_audio_in_window_t6_ParamLimits

0x306f,	// (0x00037e32) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x0004423e) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x0004423e) popup_call2_audio_in_window_t

0x123a,	// (0x00035ffd) bg_popup_call2_in_pane_g1

0x3183,	// (0x00037f46) popup_cale_lunar_info_window_t4

0x0003,

0xf4e3,	// (0x000442a6) popup_cale_lunar_info_window_t

0x1242,	// (0x00036005) bg_popup_call2_rect_pane_ParamLimits

0x1242,	// (0x00036005) bg_popup_call2_rect_pane

0x0fd9,	// (0x00035d9c) call2_cli_visual_graphic_pane

0x0fd9,	// (0x00035d9c) call2_cli_visual_text_pane

0x82f1,	// (0x0003d0b4) smil_status_volume_pane_g3

0x0002,

0x125a,	// (0x0003601d) call2_cli_visual_graphic_pane_g1

0x125a,	// (0x0003601d) call2_cli_visual_graphic_pane_g2

0x125a,	// (0x0003601d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x0004424b) call2_cli_visual_graphic_pane_g

0x1463,	// (0x00036226) bg_popup_call2_rect_pane_g1

0x145b,	// (0x0003621e) bg_popup_call2_rect_pane_g2

0x1453,	// (0x00036216) bg_popup_call2_rect_pane_g3

0x1473,	// (0x00036236) bg_popup_call2_rect_pane_g4

0x146b,	// (0x0003622e) bg_popup_call2_rect_pane_g5

0x147b,	// (0x0003623e) bg_popup_call2_rect_pane_g6

0x1483,	// (0x00036246) bg_popup_call2_rect_pane_g7

0x1493,	// (0x00036256) bg_popup_call2_rect_pane_g8

0x148b,	// (0x0003624e) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x00043fdb) bg_popup_call2_rect_pane_g

0x3081,	// (0x00037e44) bg_popup_call2_bubble_pane_g1

0x3089,	// (0x00037e4c) bg_popup_call2_bubble_pane_g2

0x3091,	// (0x00037e54) bg_popup_call2_bubble_pane_g3

0x3099,	// (0x00037e5c) bg_popup_call2_bubble_pane_g4

0x30a1,	// (0x00037e64) bg_popup_call2_bubble_pane_g5

0x30a9,	// (0x00037e6c) bg_popup_call2_bubble_pane_g6

0x30b1,	// (0x00037e74) bg_popup_call2_bubble_pane_g7

0x30b9,	// (0x00037e7c) bg_popup_call2_bubble_pane_g8

0x30c1,	// (0x00037e84) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x00044252) bg_popup_call2_bubble_pane_g

0x5b28,	// (0x0003a8eb) aid_cale_week_size_cell_pane

0x1242,	// (0x00036005) aid_cams_cif_uncrop_pane_ParamLimits

0x1242,	// (0x00036005) aid_cams_cif_uncrop_pane

0x12af,	// (0x00036072) aid_cams_size_cell_ParamLimits

0x12af,	// (0x00036072) aid_cams_size_cell

0x12af,	// (0x00036072) grid_cams_pane_ParamLimits

0x12af,	// (0x00036072) linegrid_cams_pane_ParamLimits

0x61ec,	// (0x0003afaf) call_video_pane_t1

0x620d,	// (0x0003afd0) call_video_pane_t2

0x0001,

0xf1ba,	// (0x00043f7d) call_video_pane_t

0x675b,	// (0x0003b51e) aid_cale_month_size_cell_pane_ParamLimits

0x675b,	// (0x0003b51e) aid_cale_month_size_cell_pane

0xf527,	// (0x000442ea) smil_status_volume_pane_g

0x82fe,	// (0x0003d0c1) volume_smil_pane_ParamLimits

0x556b,	// (0x0003a32e) aid_popup2_width_pane

0x5a4b,	// (0x0003a80e) cell_qdial_pane_g4_ParamLimits

0x5a4b,	// (0x0003a80e) cell_qdial_pane_g4

0x766c,	// (0x0003c42f) aid_blid_cardinal_pane_ParamLimits

0x767c,	// (0x0003c43f) aid_blid_destination_pane_ParamLimits

0x767c,	// (0x0003c43f) aid_blid_destination_pane

0x1242,	// (0x00036005) bg_popup_call_poc_act_pane_ParamLimits

0x1242,	// (0x00036005) bg_popup_call_poc_act_pane

0x1242,	// (0x00036005) bg_popup_call_poc_inact_pane_ParamLimits

0x1242,	// (0x00036005) bg_popup_call_poc_inact_pane

0x30c9,	// (0x00037e8c) bg_popup_call_poc_act_pane_g1

0x30d1,	// (0x00037e94) bg_popup_call_poc_act_pane_g2

0x30d9,	// (0x00037e9c) bg_popup_call_poc_act_pane_g3

0x3099,	// (0x00037e5c) bg_popup_call_poc_act_pane_g4

0x30a1,	// (0x00037e64) bg_popup_call_poc_act_pane_g5

0x30e1,	// (0x00037ea4) bg_popup_call_poc_act_pane_g6

0x30b1,	// (0x00037e74) bg_popup_call_poc_act_pane_g7

0x30e9,	// (0x00037eac) bg_popup_call_poc_act_pane_g8

0x0fd9,	// (0x00035d9c) main_usb_pane

0x815b,	// (0x0003cf1e) popup_cale_lunar_info_window

0x652a,	// (0x0003b2ed) im_reading_pane_t1_ParamLimits

0x1622,	// (0x000363e5) list_im_pane_ParamLimits

0x1633,	// (0x000363f6) scroll_pane_cp07_ParamLimits

0x0fd9,	// (0x00035d9c) grid_highlight_pane_cp012

0x1242,	// (0x00036005) mup_scale_pane_ParamLimits

0x12cb,	// (0x0003608e) main_usb_pane_g1_ParamLimits

0x12cb,	// (0x0003608e) main_usb_pane_g1

0x12cb,	// (0x0003608e) main_usb_pane_g2_ParamLimits

0x12cb,	// (0x0003608e) main_usb_pane_g2

0x0001,

0xf4cc,	// (0x0004428f) main_usb_pane_g_ParamLimits

0xf4cc,	// (0x0004428f) main_usb_pane_g

0x1319,	// (0x000360dc) main_usb_pane_t1_ParamLimits

0x1319,	// (0x000360dc) main_usb_pane_t1

0x1319,	// (0x000360dc) main_usb_pane_t2_ParamLimits

0x1319,	// (0x000360dc) main_usb_pane_t2

0x1319,	// (0x000360dc) main_usb_pane_t3_ParamLimits

0x1319,	// (0x000360dc) main_usb_pane_t3

0x1319,	// (0x000360dc) main_usb_pane_t4_ParamLimits

0x1319,	// (0x000360dc) main_usb_pane_t4

0x1319,	// (0x000360dc) main_usb_pane_t5_ParamLimits

0x1319,	// (0x000360dc) main_usb_pane_t5

0x1319,	// (0x000360dc) main_usb_pane_t6_ParamLimits

0x1319,	// (0x000360dc) main_usb_pane_t6

0x0005,

0xf4d1,	// (0x00044294) main_usb_pane_t_ParamLimits

0x7612,	// (0x0003c3d5) aid_text_placing

0x761e,	// (0x0003c3e1) main_location2_pane_t1_ParamLimits

0x7632,	// (0x0003c3f5) main_location2_pane_t2_ParamLimits

0x7646,	// (0x0003c409) main_location2_pane_t3_ParamLimits

0x765a,	// (0x0003c41d) main_location2_pane_t4_ParamLimits

0x765a,	// (0x0003c41d) main_location2_pane_t4

0xf2fb,	// (0x000440be) main_location2_pane_t_ParamLimits

0x1270,	// (0x00036033) find_pinb_pane_g2_ParamLimits

0x1270,	// (0x00036033) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00043e35) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00043e35) find_pinb_pane_g

0x127c,	// (0x0003603f) find_pinb_pane_t1_ParamLimits

0x128e,	// (0x00036051) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00043e3a) find_pinb_pane_t_ParamLimits

0x0fd9,	// (0x00035d9c) main_call3_pane

0x6d1e,	// (0x0003bae1) cale_month_day_heading_pane_t1_ParamLimits

0x6da4,	// (0x0003bb67) cale_month_day_heading_pane_t2_ParamLimits

0x6e1d,	// (0x0003bbe0) cale_month_day_heading_pane_t3_ParamLimits

0x6e96,	// (0x0003bc59) cale_month_day_heading_pane_t4_ParamLimits

0x6f0f,	// (0x0003bcd2) cale_month_day_heading_pane_t5_ParamLimits

0x6f88,	// (0x0003bd4b) cale_month_day_heading_pane_t6_ParamLimits

0x7001,	// (0x0003bdc4) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x00043fb5) cale_month_day_heading_pane_t_ParamLimits

0x1886,	// (0x00036649) smil_status_volume_pane

0x7aef,	// (0x0003c8b2) postcard_address_pane_ParamLimits

0x7aef,	// (0x0003c8b2) postcard_address_pane

0x7afb,	// (0x0003c8be) postcard_message_pane_ParamLimits

0x7afb,	// (0x0003c8be) postcard_message_pane

0x7f28,	// (0x0003cceb) call2_cli_visual_pane_t1_ParamLimits

0x7f28,	// (0x0003cceb) call2_cli_visual_pane_t1

0x3298,	// (0x0003805b) postcard_message_pane_t1_ParamLimits

0x3298,	// (0x0003805b) postcard_message_pane_t1

0x3280,	// (0x00038043) postcard_address_pane_t1_ParamLimits

0x3280,	// (0x00038043) postcard_address_pane_t1

0x842f,	// (0x0003d1f2) popup_call3_audio_in_window_ParamLimits

0x842f,	// (0x0003d1f2) popup_call3_audio_in_window

0x8313,	// (0x0003d0d6) bg_popup_call3_in_pane_ParamLimits

0x8313,	// (0x0003d0d6) bg_popup_call3_in_pane

0x8375,	// (0x0003d138) popup_call3_audio_in_window_g1_ParamLimits

0x8375,	// (0x0003d138) popup_call3_audio_in_window_g1

0x838d,	// (0x0003d150) popup_call3_audio_in_window_g2_ParamLimits

0x838d,	// (0x0003d150) popup_call3_audio_in_window_g2

0x83a5,	// (0x0003d168) popup_call3_audio_in_window_g3_ParamLimits

0x83a5,	// (0x0003d168) popup_call3_audio_in_window_g3

0x0003,

0xf52e,	// (0x000442f1) popup_call3_audio_in_window_g_ParamLimits

0xf52e,	// (0x000442f1) popup_call3_audio_in_window_g

0x83cd,	// (0x0003d190) popup_call3_audio_in_window_t1_ParamLimits

0x83cd,	// (0x0003d190) popup_call3_audio_in_window_t1

0x83f5,	// (0x0003d1b8) popup_call3_audio_in_window_t2_ParamLimits

0x83f5,	// (0x0003d1b8) popup_call3_audio_in_window_t2

0x841d,	// (0x0003d1e0) popup_call3_audio_in_window_t3_ParamLimits

0x841d,	// (0x0003d1e0) popup_call3_audio_in_window_t3

0x0002,

0xf537,	// (0x000442fa) popup_call3_audio_in_window_t_ParamLimits

0xf537,	// (0x000442fa) popup_call3_audio_in_window_t

0x1561,	// (0x00036324) bg_popup_call3_rect_pane

0x1463,	// (0x00036226) bg_popup_call3_rect_pane_g1

0x145b,	// (0x0003621e) bg_popup_call3_rect_pane_g2

0x1453,	// (0x00036216) bg_popup_call3_rect_pane_g3

0x1473,	// (0x00036236) bg_popup_call3_rect_pane_g4

0x146b,	// (0x0003622e) bg_popup_call3_rect_pane_g5

0x147b,	// (0x0003623e) bg_popup_call3_rect_pane_g6

0x1483,	// (0x00036246) bg_popup_call3_rect_pane_g7

0x0bbc,	// (0x0003597f) mup_visualizer_osc_pane

0x0bbc,	// (0x0003597f) mup_visualizer_spec_pane

0x8333,	// (0x0003d0f6) call3_video_qcif_pane_ParamLimits

0x8333,	// (0x0003d0f6) call3_video_qcif_pane

0x8345,	// (0x0003d108) call3_video_qcif_uncrop_pane_ParamLimits

0x8345,	// (0x0003d108) call3_video_qcif_uncrop_pane

0x8353,	// (0x0003d116) call3_video_subqcif_pane_ParamLimits

0x8353,	// (0x0003d116) call3_video_subqcif_pane

0x8365,	// (0x0003d128) call3_video_subqcif_uncrop_pane_ParamLimits

0x8365,	// (0x0003d128) call3_video_subqcif_uncrop_pane

0x83bd,	// (0x0003d180) popup_call3_audio_in_window_g4_ParamLimits

0x83bd,	// (0x0003d180) popup_call3_audio_in_window_g4

0x0bbc,	// (0x0003597f) mup_spec_half_pane

0x0bbc,	// (0x0003597f) mup_spec_half_pane_cp

0x0bbc,	// (0x0003597f) mup_osc_middle_pane

0x12fb,	// (0x000360be) mup_visualizer_osc_pane_g1

0x3233,	// (0x00037ff6) mup_spec_bar_pane_ParamLimits

0x3233,	// (0x00037ff6) mup_spec_bar_pane

0x12fb,	// (0x000360be) mup_spec_bar_pane_g1

0x12fb,	// (0x000360be) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00043e4f) mup_spec_bar_pane_g

0x5b28,	// (0x0003a8eb) aid_cale_week_size_cell_pane_ParamLimits

0x5b3d,	// (0x0003a900) bg_cale_heading_pane_ParamLimits

0x14c3,	// (0x00036286) bg_cale_pane_cp01_ParamLimits

0x5b5f,	// (0x0003a922) cale_week_corner_pane_ParamLimits

0x5b79,	// (0x0003a93c) cale_week_day_heading_pane_ParamLimits

0x5b9b,	// (0x0003a95e) cale_week_scroll_pane_g1_ParamLimits

0x5bb8,	// (0x0003a97b) cale_week_scroll_pane_g2_ParamLimits

0x5bcb,	// (0x0003a98e) cale_week_scroll_pane_g3_ParamLimits

0x5bde,	// (0x0003a9a1) cale_week_scroll_pane_g4_ParamLimits

0x5bf1,	// (0x0003a9b4) cale_week_scroll_pane_g5_ParamLimits

0x5c04,	// (0x0003a9c7) cale_week_scroll_pane_g6_ParamLimits

0x5c17,	// (0x0003a9da) cale_week_scroll_pane_g7_ParamLimits

0x5c2c,	// (0x0003a9ef) cale_week_scroll_pane_g8_ParamLimits

0x5c41,	// (0x0003aa04) cale_week_scroll_pane_g9_ParamLimits

0x5c54,	// (0x0003aa17) cale_week_scroll_pane_g10_ParamLimits

0x5c67,	// (0x0003aa2a) cale_week_scroll_pane_g11_ParamLimits

0x5c7a,	// (0x0003aa3d) cale_week_scroll_pane_g12_ParamLimits

0x5c91,	// (0x0003aa54) cale_week_scroll_pane_g13_ParamLimits

0x5cac,	// (0x0003aa6f) cale_week_scroll_pane_g14_ParamLimits

0x5cc7,	// (0x0003aa8a) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00043ec6) cale_week_scroll_pane_g_ParamLimits

0x5cf7,	// (0x0003aaba) cale_week_time_pane_ParamLimits

0x5d0c,	// (0x0003aacf) grid_cale_week_pane_ParamLimits

0x14e0,	// (0x000362a3) listscroll_cale_week_pane_t1

0x14f2,	// (0x000362b5) scroll_pane_cp08_ParamLimits

0x67cf,	// (0x0003b592) cale_month_corner_pane_ParamLimits

0x185c,	// (0x0003661f) cale_month_pane_t1

0x6c9d,	// (0x0003ba60) cale_month_week_pane_ParamLimits

0x28dc,	// (0x0003769f) popup_call_status_window_g1_ParamLimits

0x743f,	// (0x0003c202) popup_call_status_window_g2_ParamLimits

0x744b,	// (0x0003c20e) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x00044045) popup_call_status_window_g_ParamLimits

0x1bde,	// (0x000369a1) aid_call2_pane

0x4c2a,	// (0x000399ed) msg_header_pane_g1

0x7aef,	// (0x0003c8b2) postcard_address2_pane_ParamLimits

0x7aef,	// (0x0003c8b2) postcard_address2_pane

0x7afb,	// (0x0003c8be) postcard_message2_pane_ParamLimits

0x7afb,	// (0x0003c8be) postcard_message2_pane

0x82c3,	// (0x0003d086) message2_row_pane_ParamLimits

0x82c3,	// (0x0003d086) message2_row_pane

0x82de,	// (0x0003d0a1) address2_row_pane_ParamLimits

0x82de,	// (0x0003d0a1) address2_row_pane

0x3200,	// (0x00037fc3) postcard_message2_row_pane_g1

0x3208,	// (0x00037fcb) postcard_message2_row_pane_t1

0x3200,	// (0x00037fc3) address2_row_pane_g1

0x3208,	// (0x00037fcb) address2_row_pane_t1

0x5f91,	// (0x0003ad54) aid_size_cell_vorec

0x0fd9,	// (0x00035d9c) main_rss_pane

0x3216,	// (0x00037fd9) rss_list_single_pane_ParamLimits

0x3216,	// (0x00037fd9) rss_list_single_pane

0x3224,	// (0x00037fe7) rss_list_single_pane_t1

0x3224,	// (0x00037fe7) rss_list_single_pane_t2

0x0001,

0xf522,	// (0x000442e5) rss_list_single_pane_t

0x0fd9,	// (0x00035d9c) main_camera2_pane

0x0fd9,	// (0x00035d9c) main_video2_pane

0x12af,	// (0x00036072) cams_zoom_pane_cp2_ParamLimits

0x12af,	// (0x00036072) cams_zoom_pane_cp2

0x12af,	// (0x00036072) image2_vga_pane_ParamLimits

0x12af,	// (0x00036072) image2_vga_pane

0x12cb,	// (0x0003608e) main_camera2_pane_g1_ParamLimits

0x12cb,	// (0x0003608e) main_camera2_pane_g1

0x12cb,	// (0x0003608e) main_camera2_pane_g2_ParamLimits

0x12cb,	// (0x0003608e) main_camera2_pane_g2

0x12cb,	// (0x0003608e) main_camera2_pane_g3_ParamLimits

0x12cb,	// (0x0003608e) main_camera2_pane_g3

0x12cb,	// (0x0003608e) main_camera2_pane_g4_ParamLimits

0x12cb,	// (0x0003608e) main_camera2_pane_g4

0x12cb,	// (0x0003608e) main_camera2_pane_g5_ParamLimits

0x12cb,	// (0x0003608e) main_camera2_pane_g5

0x12cb,	// (0x0003608e) main_camera2_pane_g6_ParamLimits

0x12cb,	// (0x0003608e) main_camera2_pane_g6

0x12cb,	// (0x0003608e) main_camera2_pane_g7_ParamLimits

0x12cb,	// (0x0003608e) main_camera2_pane_g7

0x12cb,	// (0x0003608e) main_camera2_pane_g8_ParamLimits

0x12cb,	// (0x0003608e) main_camera2_pane_g8

0x0008,

0xf53e,	// (0x00044301) main_camera2_pane_g_ParamLimits

0xf53e,	// (0x00044301) main_camera2_pane_g

0x1319,	// (0x000360dc) main_camera2_pane_t1_ParamLimits

0x1319,	// (0x000360dc) main_camera2_pane_t1

0x1319,	// (0x000360dc) main_camera2_pane_t2_ParamLimits

0x1319,	// (0x000360dc) main_camera2_pane_t2

0x1319,	// (0x000360dc) main_camera2_pane_t3_ParamLimits

0x1319,	// (0x000360dc) main_camera2_pane_t3

0x1319,	// (0x000360dc) main_camera2_pane_t4_ParamLimits

0x1319,	// (0x000360dc) main_camera2_pane_t4

0x0006,

0xf551,	// (0x00044314) main_camera2_pane_t_ParamLimits

0xf551,	// (0x00044314) main_camera2_pane_t

0x20db,	// (0x00036e9e) cams_zoom_pane_cp4_ParamLimits

0x20db,	// (0x00036e9e) cams_zoom_pane_cp4

0x0fe3,	// (0x00035da6) image2_cif_pane_ParamLimits

0x0fe3,	// (0x00035da6) image2_cif_pane

0x12af,	// (0x00036072) image2_subqcif_pane_ParamLimits

0x12af,	// (0x00036072) image2_subqcif_pane

0x1fd9,	// (0x00036d9c) main_video2_pane_g1_ParamLimits

0x1fd9,	// (0x00036d9c) main_video2_pane_g1

0x1fd9,	// (0x00036d9c) main_video2_pane_g2_ParamLimits

0x1fd9,	// (0x00036d9c) main_video2_pane_g2

0x1fd9,	// (0x00036d9c) main_video2_pane_g3_ParamLimits

0x1fd9,	// (0x00036d9c) main_video2_pane_g3

0x1fd9,	// (0x00036d9c) main_video2_pane_g4_ParamLimits

0x1fd9,	// (0x00036d9c) main_video2_pane_g4

0x1fd9,	// (0x00036d9c) main_video2_pane_g5_ParamLimits

0x1fd9,	// (0x00036d9c) main_video2_pane_g5

0x1fd9,	// (0x00036d9c) main_video2_pane_g6_ParamLimits

0x1fd9,	// (0x00036d9c) main_video2_pane_g6

0x0005,

0xf560,	// (0x00044323) main_video2_pane_g_ParamLimits

0xf560,	// (0x00044323) main_video2_pane_g

0x20c7,	// (0x00036e8a) main_video2_pane_t1_ParamLimits

0x20c7,	// (0x00036e8a) main_video2_pane_t1

0x20c7,	// (0x00036e8a) main_video2_pane_t2_ParamLimits

0x20c7,	// (0x00036e8a) main_video2_pane_t2

0x20c7,	// (0x00036e8a) main_video2_pane_t3_ParamLimits

0x20c7,	// (0x00036e8a) main_video2_pane_t3

0x0002,

0xf56d,	// (0x00044330) main_video2_pane_t_ParamLimits

0xf56d,	// (0x00044330) main_video2_pane_t

0x7fe7,	// (0x0003cdaa) call_muted_g2

0x0001,

0xf514,	// (0x000442d7) call_muted_g

0x0fd9,	// (0x00035d9c) main_mup2_pane

0x12d9,	// (0x0003609c) main_mup2_pane_g1_ParamLimits

0x12d9,	// (0x0003609c) main_mup2_pane_g1

0x12d9,	// (0x0003609c) main_mup2_pane_g2_ParamLimits

0x12d9,	// (0x0003609c) main_mup2_pane_g2

0x12fb,	// (0x000360be) main_mup_pane_g13_cp1

0x0bbc,	// (0x0003597f) mup_volume_pane_cp1

0x12d9,	// (0x0003609c) main_mup2_pane_g4_ParamLimits

0x12d9,	// (0x0003609c) main_mup2_pane_g4

0x12d9,	// (0x0003609c) main_mup2_pane_g5_ParamLimits

0x12d9,	// (0x0003609c) main_mup2_pane_g5

0x12d9,	// (0x0003609c) main_mup2_pane_g6_ParamLimits

0x12d9,	// (0x0003609c) main_mup2_pane_g6

0x12d9,	// (0x0003609c) main_mup2_pane_g7_ParamLimits

0x12d9,	// (0x0003609c) main_mup2_pane_g7

0x0006,

0xf574,	// (0x00044337) main_mup2_pane_g_ParamLimits

0xf574,	// (0x00044337) main_mup2_pane_g

0x12e7,	// (0x000360aa) main_mup2_pane_t1_ParamLimits

0x12e7,	// (0x000360aa) main_mup2_pane_t1

0x12e7,	// (0x000360aa) main_mup2_pane_t2_ParamLimits

0x12e7,	// (0x000360aa) main_mup2_pane_t2

0x12e7,	// (0x000360aa) main_mup2_pane_t3_ParamLimits

0x12e7,	// (0x000360aa) main_mup2_pane_t3

0x12e7,	// (0x000360aa) main_mup2_pane_t4_ParamLimits

0x12e7,	// (0x000360aa) main_mup2_pane_t4

0x12e7,	// (0x000360aa) main_mup2_pane_t5_ParamLimits

0x12e7,	// (0x000360aa) main_mup2_pane_t5

0x12e7,	// (0x000360aa) main_mup2_pane_t6_ParamLimits

0x12e7,	// (0x000360aa) main_mup2_pane_t6

0x0005,

0xf583,	// (0x00044346) main_mup2_pane_t_ParamLimits

0xf583,	// (0x00044346) main_mup2_pane_t

0x32ca,	// (0x0003808d) mup2_visualizer_pane_ParamLimits

0x32ca,	// (0x0003808d) mup2_visualizer_pane

0x32ca,	// (0x0003808d) mup_progress_pane_cp_ParamLimits

0x32ca,	// (0x0003808d) mup_progress_pane_cp

0x32b4,	// (0x00038077) mup_volume_pane_cp_ParamLimits

0x32b4,	// (0x00038077) mup_volume_pane_cp

0x12bd,	// (0x00036080) mup2_visualizer_pane_g1_ParamLimits

0x12bd,	// (0x00036080) mup2_visualizer_pane_g1

0x12cb,	// (0x0003608e) mup2_visualizer_pane_g2_ParamLimits

0x12cb,	// (0x0003608e) mup2_visualizer_pane_g2

0x12cb,	// (0x0003608e) mup2_visualizer_pane_g3_ParamLimits

0x12cb,	// (0x0003608e) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00043e3f) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00043e3f) mup2_visualizer_pane_g

0x0bbc,	// (0x0003597f) aid_size_cell_fmradio

0x80fd,	// (0x0003cec0) aid_height_parent_landcape

0x16b1,	// (0x00036474) wml_content_pane_cp

0x16b9,	// (0x0003647c) wml_tabs_pane

0x16c2,	// (0x00036485) popup_wml_miniature_window

0x16ca,	// (0x0003648d) scroll_pane_cp021

0x16de,	// (0x000364a1) wml_content_pane_comp8

0x0fd9,	// (0x00035d9c) bg_popup_sub_pane_cp05

0x32d8,	// (0x0003809b) popup_wml_miniature_window_g1

0x32e0,	// (0x000380a3) wml_miniature_view_pane

0x844c,	// (0x0003d20f) aid_size_wml_view

0x8454,	// (0x0003d217) wml_miniature_view_pane_g1

0x845d,	// (0x0003d220) wml_miniature_view_pane_g2

0x8466,	// (0x0003d229) wml_miniature_view_pane_g3

0x846e,	// (0x0003d231) wml_miniature_view_pane_g4

0x8476,	// (0x0003d239) wml_miniature_view_pane_g5

0x847e,	// (0x0003d241) wml_miniature_view_pane_g6

0x8486,	// (0x0003d249) wml_miniature_view_pane_g7

0x848e,	// (0x0003d251) wml_miniature_view_pane_g8

0x0007,

0xf590,	// (0x00044353) wml_miniature_view_pane_g

0x32e8,	// (0x000380ab) background_graphic_ParamLimits

0x32e8,	// (0x000380ab) background_graphic

0x32f4,	// (0x000380b7) wml_tabs_2_pane

0x32fd,	// (0x000380c0) wml_tabs_3_pane_ParamLimits

0x32fd,	// (0x000380c0) wml_tabs_3_pane

0x330f,	// (0x000380d2) wml_tabs_4_pane_ParamLimits

0x330f,	// (0x000380d2) wml_tabs_4_pane

0x3325,	// (0x000380e8) wml_tabs_5_pane_ParamLimits

0x3325,	// (0x000380e8) wml_tabs_5_pane

0x333f,	// (0x00038102) wml_tabs_pane_g2_ParamLimits

0x333f,	// (0x00038102) wml_tabs_pane_g2

0x3354,	// (0x00038117) wml_tabs_pane_g3_ParamLimits

0x3354,	// (0x00038117) wml_tabs_pane_g3

0x3369,	// (0x0003812c) wml_tabs_2_active_pane_ParamLimits

0x3369,	// (0x0003812c) wml_tabs_2_active_pane

0x3369,	// (0x0003812c) wml_tabs_2_passive_pane_ParamLimits

0x3369,	// (0x0003812c) wml_tabs_2_passive_pane

0x8496,	// (0x0003d259) wml_tabs_3_active_pane_cp_ParamLimits

0x8496,	// (0x0003d259) wml_tabs_3_active_pane_cp

0x84a7,	// (0x0003d26a) wml_tabs_3_passive_pane_ParamLimits

0x84a7,	// (0x0003d26a) wml_tabs_3_passive_pane

0x84b8,	// (0x0003d27b) wml_tabs_3_passive_pane_cp_ParamLimits

0x84b8,	// (0x0003d27b) wml_tabs_3_passive_pane_cp

0x84c9,	// (0x0003d28c) tabs_4_active_pane

0x84d1,	// (0x0003d294) tabs_4_passive_pane

0x84d9,	// (0x0003d29c) tabs_4_passive_pane_cp

0x84e1,	// (0x0003d2a4) tabs_4_passive_pane_cp2

0x7f5b,	// (0x0003cd1e) aid_height_text

0x32ca,	// (0x0003808d) mup_volume_cont_pane_ParamLimits

0x32ca,	// (0x0003808d) mup_volume_cont_pane

0x0bbc,	// (0x0003597f) aid_size_cell_pinb

0x0bbc,	// (0x0003597f) aid_size_list_pinb

0x32ca,	// (0x0003808d) mup2_volume_cont_pane_ParamLimits

0x32ca,	// (0x0003808d) mup2_volume_cont_pane

0x84e9,	// (0x0003d2ac) mup2_volume_cont_pane_g1_ParamLimits

0x84e9,	// (0x0003d2ac) mup2_volume_cont_pane_g1

0x5577,	// (0x0003a33a) aid_size_cell_touch_ParamLimits

0x5577,	// (0x0003a33a) aid_size_cell_touch

0x5782,	// (0x0003a545) touch_pane_ParamLimits

0x5782,	// (0x0003a545) touch_pane

0x0bbc,	// (0x0003597f) main_rss2_pane

0x3380,	// (0x00038143) listscroll_rss2_pane

0x3389,	// (0x0003814c) rss2_navigation_pane

0x3391,	// (0x00038154) list_rss2_pane

0x1cee,	// (0x00036ab1) scroll_pane_cp22

0x3399,	// (0x0003815c) rss2_navigation_pane_g1

0x33a2,	// (0x00038165) rss2_navigation_pane_g2

0x33aa,	// (0x0003816d) rss2_navigation_pane_g3

0x0002,

0xf5a1,	// (0x00044364) rss2_navigation_pane_g

0x33b2,	// (0x00038175) rss2_navigation_pane_t1

0x84ff,	// (0x0003d2c2) rss2_list_single_pane_ParamLimits

0x84ff,	// (0x0003d2c2) rss2_list_single_pane

0x33c0,	// (0x00038183) rss2_list_single_pane_t2

0x33ce,	// (0x00038191) rss2_list_single_pane_t3_ParamLimits

0x33ce,	// (0x00038191) rss2_list_single_pane_t3

0x33eb,	// (0x000381ae) rss2_list_single_pane_t4

0x72a3,	// (0x0003c066) smil_status_pane_g1

0x0fe3,	// (0x00035da6) main_image2_pane_ParamLimits

0x0fe3,	// (0x00035da6) main_image2_pane

0x12cb,	// (0x0003608e) main_camera2_pane_g9_ParamLimits

0x12cb,	// (0x0003608e) main_camera2_pane_g9

0x1319,	// (0x000360dc) main_camera2_pane_t5_ParamLimits

0x1319,	// (0x000360dc) main_camera2_pane_t5

0x3705,	// (0x000384c8) main_camera2_pane_t6_ParamLimits

0x3705,	// (0x000384c8) main_camera2_pane_t6

0x8533,	// (0x0003d2f6) main_image2_pane_g1_ParamLimits

0x8533,	// (0x0003d2f6) main_image2_pane_g1

0x7c8d,	// (0x0003ca50) smil2_video_pane_ParamLimits

0x7c8d,	// (0x0003ca50) smil2_video_pane

0x4abe,	// (0x00039881) aid_zoom_text_primary_cp

0x572b,	// (0x0003a4ee) popup_preview_fixed_window

0x161a,	// (0x000363dd) im_reading_pane_g1

0x843e,	// (0x0003d201) cams2_bc_adjust_pane_cp_ParamLimits

0x843e,	// (0x0003d201) cams2_bc_adjust_pane_cp

0x12af,	// (0x00036072) cams2_bc_adjust_pane_ParamLimits

0x12af,	// (0x00036072) cams2_bc_adjust_pane

0x12fb,	// (0x000360be) cams2_bc_adjust_pane_g1

0x0bbc,	// (0x0003597f) cams2_slider_pane

0x12fb,	// (0x000360be) cams2_slider_pane_g1

0x12fb,	// (0x000360be) cams2_slider_pane_g2

0x0006,

0xf5a8,	// (0x0004436b) cams2_slider_pane_g

0x5853,	// (0x0003a616) calc_display_pane_ParamLimits

0x5871,	// (0x0003a634) calc_paper_pane_ParamLimits

0x588d,	// (0x0003a650) grid_calc_pane_ParamLimits

0x74a9,	// (0x0003c26c) popup_clock_digital_window_t1_ParamLimits

0x21b1,	// (0x00036f74) main_image_pane_t1

0x5839,	// (0x0003a5fc) aid_size_cell_calc_ParamLimits

0x5839,	// (0x0003a5fc) aid_size_cell_calc

0x8137,	// (0x0003cefa) popup_blid_sat_info2_window_ParamLimits

0x8137,	// (0x0003cefa) popup_blid_sat_info2_window

0x33f9,	// (0x000381bc) aid_size_cell_blid

0x32ca,	// (0x0003808d) bg_popup_window_pane_cp07

0x3416,	// (0x000381d9) grid_popup_blid_pane

0x3420,	// (0x000381e3) heading_pane_cp05_ParamLimits

0x3420,	// (0x000381e3) heading_pane_cp05

0x34ea,	// (0x000382ad) cell_popup_blid_pane_ParamLimits

0x34ea,	// (0x000382ad) cell_popup_blid_pane

0x350e,	// (0x000382d1) cell_popup_blid_pane_g1

0x3516,	// (0x000382d9) cell_popup_blid_pane_t1

0x32ca,	// (0x0003808d) mup2_indicator_pane_ParamLimits

0x32ca,	// (0x0003808d) mup2_indicator_pane

0x0bbc,	// (0x0003597f) mup2_visualizer_osc_pane

0x32b4,	// (0x00038077) mup2_visualizer_spec_pane_ParamLimits

0x32b4,	// (0x00038077) mup2_visualizer_spec_pane

0x0bbc,	// (0x0003597f) mup2_spec_half_pane

0x0bbc,	// (0x0003597f) mup2_spec_half_pane_cp

0x3524,	// (0x000382e7) mup2_spec_bar_pane_ParamLimits

0x3524,	// (0x000382e7) mup2_spec_bar_pane

0x12fb,	// (0x000360be) mup2_spec_bar_pane_g1

0x3543,	// (0x00038306) mup2_spec_bar_pane_g2

0x0001,

0xf5ce,	// (0x00044391) mup2_spec_bar_pane_g

0x0bbc,	// (0x0003597f) mup2_osc_middle_pane

0x12fb,	// (0x000360be) mup2_visualizer_osc_pane_g1

0x0be6,	// (0x000359a9) popup_number_entry_window_t1_ParamLimits

0x0bf9,	// (0x000359bc) popup_number_entry_window_t2_ParamLimits

0x0c0b,	// (0x000359ce) popup_number_entry_window_t3_ParamLimits

0x57d9,	// (0x0003a59c) popup_number_entry_window_t5_ParamLimits

0x57d9,	// (0x0003a59c) popup_number_entry_window_t5

0xf01d,	// (0x00043de0) popup_number_entry_window_t_ParamLimits

0x0c1d,	// (0x000359e0) text_title_cp2_ParamLimits

0x79b7,	// (0x0003c77a) aid_hotspot_pointer_text2_pane

0x7a51,	// (0x0003c814) main_viewer_pane_g9_ParamLimits

0x7a51,	// (0x0003c814) main_viewer_pane_g9

0x185c,	// (0x0003661f) cale_month_pane_t1_ParamLimits

0x1899,	// (0x0003665c) bg_cale_pane_ParamLimits

0x18b1,	// (0x00036674) list_cale_pane_ParamLimits

0x18c2,	// (0x00036685) listscroll_cale_day_pane_t1

0x18d4,	// (0x00036697) scroll_pane_cp09_ParamLimits

0x775a,	// (0x0003c51d) main_mup_eq_pane_t1_ParamLimits

0x775a,	// (0x0003c51d) main_mup_eq_pane_t1

0x7774,	// (0x0003c537) main_mup_eq_pane_t2_ParamLimits

0x7774,	// (0x0003c537) main_mup_eq_pane_t2

0x778c,	// (0x0003c54f) main_mup_eq_pane_t3_ParamLimits

0x778c,	// (0x0003c54f) main_mup_eq_pane_t3

0x77a4,	// (0x0003c567) main_mup_eq_pane_t4_ParamLimits

0x77a4,	// (0x0003c567) main_mup_eq_pane_t4

0x77bc,	// (0x0003c57f) main_mup_eq_pane_t5_ParamLimits

0x77bc,	// (0x0003c57f) main_mup_eq_pane_t5

0x77d4,	// (0x0003c597) main_mup_eq_pane_t6_ParamLimits

0x77d4,	// (0x0003c597) main_mup_eq_pane_t6

0x77e8,	// (0x0003c5ab) main_mup_eq_pane_t7_ParamLimits

0x77e8,	// (0x0003c5ab) main_mup_eq_pane_t7

0x77fc,	// (0x0003c5bf) main_mup_eq_pane_t8_ParamLimits

0x77fc,	// (0x0003c5bf) main_mup_eq_pane_t8

0x7812,	// (0x0003c5d5) main_mup_eq_pane_t9_ParamLimits

0x7812,	// (0x0003c5d5) main_mup_eq_pane_t9

0x782a,	// (0x0003c5ed) main_mup_eq_pane_t10_ParamLimits

0x782a,	// (0x0003c5ed) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x0004413f) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x0004413f) main_mup_eq_pane_t

0x78e7,	// (0x0003c6aa) mup_equalizer_pane_cp5_ParamLimits

0x78fd,	// (0x0003c6c0) mup_equalizer_pane_cp6_ParamLimits

0x7915,	// (0x0003c6d8) mup_equalizer_pane_cp7_ParamLimits

0x0bbc,	// (0x0003597f) main_gallery_pane

0x3252,	// (0x00038015) smil2_volume_pane

0x326d,	// (0x00038030) smil_status_volume_pane_g1_ParamLimits

0x325a,	// (0x0003801d) smil_status_volume_pane_g2_ParamLimits

0x82f1,	// (0x0003d0b4) smil_status_volume_pane_g3_ParamLimits

0xf527,	// (0x000442ea) smil_status_volume_pane_g_ParamLimits

0x32ca,	// (0x0003808d) bg_popup_window_pane_cp07_ParamLimits

0x3401,	// (0x000381c4) blid_firmament_pane

0x12af,	// (0x00036072) aid_size_cell_gallery_ParamLimits

0x12af,	// (0x00036072) aid_size_cell_gallery

0x12af,	// (0x00036072) grid_gallery_pane_ParamLimits

0x12af,	// (0x00036072) grid_gallery_pane

0x20db,	// (0x00036e9e) cell_gallery_pane_ParamLimits

0x20db,	// (0x00036e9e) cell_gallery_pane

0x0fe3,	// (0x00035da6) bg_cell_gallery_focus_pane_ParamLimits

0x0fe3,	// (0x00035da6) bg_cell_gallery_focus_pane

0x12bd,	// (0x00036080) cell_gallery_pane_g1_ParamLimits

0x12bd,	// (0x00036080) cell_gallery_pane_g1

0x12bd,	// (0x00036080) cell_gallery_pane_g2_ParamLimits

0x12bd,	// (0x00036080) cell_gallery_pane_g2

0x12bd,	// (0x00036080) cell_gallery_pane_g3_ParamLimits

0x12bd,	// (0x00036080) cell_gallery_pane_g3

0x12cb,	// (0x0003608e) cell_gallery_pane_g4_ParamLimits

0x12cb,	// (0x0003608e) cell_gallery_pane_g4

0x0003,

0xf5d3,	// (0x00044396) cell_gallery_pane_g_ParamLimits

0xf5d3,	// (0x00044396) cell_gallery_pane_g

0x354d,	// (0x00038310) bg_cell_gallery_focus_pane_g1

0x3555,	// (0x00038318) bg_cell_gallery_focus_pane_g2

0x355d,	// (0x00038320) bg_cell_gallery_focus_pane_g3

0x3565,	// (0x00038328) bg_cell_gallery_focus_pane_g4

0x356d,	// (0x00038330) bg_cell_gallery_focus_pane_g5

0x3575,	// (0x00038338) bg_cell_gallery_focus_pane_g6

0x357d,	// (0x00038340) bg_cell_gallery_focus_pane_g7

0x3585,	// (0x00038348) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5dc,	// (0x0004439f) bg_cell_gallery_focus_pane_g

0x358d,	// (0x00038350) aid_firma_cardinal

0x35a1,	// (0x00038364) blid_firmament_pane_t1

0x35b8,	// (0x0003837b) blid_firmament_pane_t2

0x35cf,	// (0x00038392) blid_firmament_pane_t3

0x35e6,	// (0x000383a9) blid_firmament_pane_t4

0x0003,

0xf5ed,	// (0x000443b0) blid_firmament_pane_t

0x35fd,	// (0x000383c0) blid_sat_info_pane

0x12fb,	// (0x000360be) blid_sat_info_pane_g1

0x12fb,	// (0x000360be) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00043e4f) blid_sat_info_pane_g

0x360d,	// (0x000383d0) blid_sat_info_pane_t1

0x361b,	// (0x000383de) smil2_volume_content_pane

0x3624,	// (0x000383e7) smil2_volume_pane_g1

0x1428,	// (0x000361eb) smil2_volume_content_pane_g1

0x362c,	// (0x000383ef) smil2_volume_content_pane_g2

0x3635,	// (0x000383f8) smil2_volume_content_pane_g3

0x363e,	// (0x00038401) smil2_volume_content_pane_g4

0x3647,	// (0x0003840a) smil2_volume_content_pane_g5

0x3650,	// (0x00038413) smil2_volume_content_pane_g6

0x3659,	// (0x0003841c) smil2_volume_content_pane_g7

0x3662,	// (0x00038425) smil2_volume_content_pane_g8

0x366b,	// (0x0003842e) smil2_volume_content_pane_g9

0x3674,	// (0x00038437) smil2_volume_content_pane_g10

0x0009,

0xf5f6,	// (0x000443b9) smil2_volume_content_pane_g

0x5d8d,	// (0x0003ab50) cale_week_day_heading_pane_t1_ParamLimits

0x5da8,	// (0x0003ab6b) cale_week_day_heading_pane_t2_ParamLimits

0x5dc3,	// (0x0003ab86) cale_week_day_heading_pane_t3_ParamLimits

0x5dde,	// (0x0003aba1) cale_week_day_heading_pane_t4_ParamLimits

0x5df9,	// (0x0003abbc) cale_week_day_heading_pane_t5_ParamLimits

0x5e14,	// (0x0003abd7) cale_week_day_heading_pane_t6_ParamLimits

0x5e2f,	// (0x0003abf2) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00043ee7) cale_week_day_heading_pane_t_ParamLimits

0x150f,	// (0x000362d2) bg_cale_side_pane_ParamLimits

0x5e4a,	// (0x0003ac0d) cale_week_time_pane_t1_ParamLimits

0x5e64,	// (0x0003ac27) cale_week_time_pane_t2_ParamLimits

0x5e7e,	// (0x0003ac41) cale_week_time_pane_t3_ParamLimits

0x5e98,	// (0x0003ac5b) cale_week_time_pane_t4_ParamLimits

0x5eb2,	// (0x0003ac75) cale_week_time_pane_t5_ParamLimits

0x5ecc,	// (0x0003ac8f) cale_week_time_pane_t6_ParamLimits

0x5eec,	// (0x0003acaf) cale_week_time_pane_t7_ParamLimits

0x5f0e,	// (0x0003acd1) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x00043ef6) cale_week_time_pane_t_ParamLimits

0x5f32,	// (0x0003acf5) cell_cale_week_pane_g2_ParamLimits

0x150f,	// (0x000362d2) bg_cale_side_pane_cp01_ParamLimits

0x7092,	// (0x0003be55) cale_month_week_pane_t1_ParamLimits

0x70ab,	// (0x0003be6e) cale_month_week_pane_t2_ParamLimits

0x70c4,	// (0x0003be87) cale_month_week_pane_t3_ParamLimits

0x70dd,	// (0x0003bea0) cale_month_week_pane_t4_ParamLimits

0x70f8,	// (0x0003bebb) cale_month_week_pane_t5_ParamLimits

0x7119,	// (0x0003bedc) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x00043fc4) cale_month_week_pane_t_ParamLimits

0x7260,	// (0x0003c023) cell_cale_month_pane_g1_ParamLimits

0x0bbc,	// (0x0003597f) main_cale_event_viewer_pane

0x0bbc,	// (0x0003597f) listscroll_cale_event_viewer_pane

0x367d,	// (0x00038440) list_cale_ev_pane

0x3685,	// (0x00038448) scroll_pane_cp023

0x3691,	// (0x00038454) field_cale_ev_pane_ParamLimits

0x3691,	// (0x00038454) field_cale_ev_pane

0x36af,	// (0x00038472) field_cale_ev_content_pane_ParamLimits

0x36af,	// (0x00038472) field_cale_ev_content_pane

0x36bb,	// (0x0003847e) field_cale_ev_pane_g1_ParamLimits

0x36bb,	// (0x0003847e) field_cale_ev_pane_g1

0x36c7,	// (0x0003848a) field_cale_ev_pane_g2_ParamLimits

0x36c7,	// (0x0003848a) field_cale_ev_pane_g2

0x36df,	// (0x000384a2) field_cale_ev_pane_g3_ParamLimits

0x36df,	// (0x000384a2) field_cale_ev_pane_g3

0x0002,

0xf60b,	// (0x000443ce) field_cale_ev_pane_g_ParamLimits

0xf60b,	// (0x000443ce) field_cale_ev_pane_g

0x3719,	// (0x000384dc) field_cale_ev_pane_t1_ParamLimits

0x3719,	// (0x000384dc) field_cale_ev_pane_t1

0x3730,	// (0x000384f3) field_cale_ev_content_pane_t1_ParamLimits

0x3730,	// (0x000384f3) field_cale_ev_content_pane_t1

0x207c,	// (0x00036e3f) bg_button_pane_cp01

0x5b18,	// (0x0003a8db) listscroll_cale_week_pane_ParamLimits

0x1853,	// (0x00036616) popup_toolbar_window_cp01

0x14e0,	// (0x000362a3) listscroll_cale_week_pane_t1_ParamLimits

0x5b18,	// (0x0003a8db) listscroll_cale_day_pane_ParamLimits

0x1853,	// (0x00036616) popup_toolbar_window_cp02

0x18c2,	// (0x00036685) listscroll_cale_day_pane_t1_ParamLimits

0x5b18,	// (0x0003a8db) main_cale_month_pane_ParamLimits

0x823a,	// (0x0003cffd) popup_toolbar_window_cp03_ParamLimits

0x823a,	// (0x0003cffd) popup_toolbar_window_cp03

0x7ba3,	// (0x0003c966) main_image_pane_g2_ParamLimits

0x7ba3,	// (0x0003c966) main_image_pane_g2

0x7baf,	// (0x0003c972) main_image_pane_g3_ParamLimits

0x7baf,	// (0x0003c972) main_image_pane_g3

0x0002,

0xf40e,	// (0x000441d1) main_image_pane_g_ParamLimits

0xf40e,	// (0x000441d1) main_image_pane_g

0x21b1,	// (0x00036f74) main_image_pane_t1_ParamLimits

0x7bbb,	// (0x0003c97e) main_image_pane_t2_ParamLimits

0x7bbb,	// (0x0003c97e) main_image_pane_t2

0x7bcd,	// (0x0003c990) main_image_pane_t3_ParamLimits

0x7bcd,	// (0x0003c990) main_image_pane_t3

0x7bdf,	// (0x0003c9a2) main_image_pane_t4_ParamLimits

0x7bdf,	// (0x0003c9a2) main_image_pane_t4

0x0003,

0xf415,	// (0x000441d8) main_image_pane_t_ParamLimits

0xf415,	// (0x000441d8) main_image_pane_t

0x7bf1,	// (0x0003c9b4) popup_image_details_window_cp01

0x7bfb,	// (0x0003c9be) popup_toobar_trans_pane_cp01_ParamLimits

0x7bfb,	// (0x0003c9be) popup_toobar_trans_pane_cp01

0x818a,	// (0x0003cf4d) popup_image_details_window_ParamLimits

0x818a,	// (0x0003cf4d) popup_image_details_window

0x8198,	// (0x0003cf5b) popup_image_focus_window

0x12af,	// (0x00036072) camera2_autofocus_pane_ParamLimits

0x12af,	// (0x00036072) camera2_autofocus_pane

0x0bbc,	// (0x0003597f) bg_popup_sub_pane_cp06

0x374e,	// (0x00038511) popup_image_focus_window_g1

0x3756,	// (0x00038519) popup_image_focus_window_g2

0x375e,	// (0x00038521) popup_image_focus_window_g3

0x3766,	// (0x00038529) popup_image_focus_window_g4

0x0003,

0xf612,	// (0x000443d5) popup_image_focus_window_g

0x376e,	// (0x00038531) popup_image_focus_window_t1

0x377c,	// (0x0003853f) popup_image_focus_window_t2

0x378c,	// (0x0003854f) popup_image_focus_window_t3

0x0002,

0xf61b,	// (0x000443de) popup_image_focus_window_t

0x12bd,	// (0x00036080) camera2_autofocus_pane_g1

0x0fe3,	// (0x00035da6) bg_tb_trans_pane_cp01

0x379a,	// (0x0003855d) popup_image_details_window_g1

0x37ad,	// (0x00038570) popup_image_details_window_g2

0x0002,

0xf62d,	// (0x000443f0) popup_image_details_window_g

0x37d6,	// (0x00038599) popup_image_details_window_t1

0x37e8,	// (0x000385ab) popup_image_details_window_t2

0x3801,	// (0x000385c4) popup_image_details_window_t3

0x3815,	// (0x000385d8) popup_image_details_window_t4

0x3830,	// (0x000385f3) popup_image_details_window_t5

0x0004,

0xf634,	// (0x000443f7) popup_image_details_window_t

0x1345,	// (0x00036108) bg_calc_paper_pane_ParamLimits

0x0bbc,	// (0x0003597f) grid_highlight_pane_cp013

0x58c8,	// (0x0003a68b) list_calc_pane_ParamLimits

0x58da,	// (0x0003a69d) scroll_pane_cp024

0x1359,	// (0x0003611c) bg_calc_display_pane_ParamLimits

0x58e2,	// (0x0003a6a5) calc_display_pane_t1_ParamLimits

0x58f7,	// (0x0003a6ba) calc_display_pane_t2_ParamLimits

0x590c,	// (0x0003a6cf) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00043e67) calc_display_pane_t_ParamLimits

0x59e6,	// (0x0003a7a9) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x00043e84) cell_calc_pane_g

0x59ef,	// (0x0003a7b2) cell_calc_pane_t1

0x13ae,	// (0x00036171) grid_highlight_pane_cp02_ParamLimits

0x13c4,	// (0x00036187) toolbar_button_pane_cp01_ParamLimits

0x13c4,	// (0x00036187) toolbar_button_pane_cp01

0x21f6,	// (0x00036fb9) temp_image_control_pane_ParamLimits

0x21f6,	// (0x00036fb9) temp_image_control_pane

0x0fe3,	// (0x00035da6) main_mp3_pane

0x384a,	// (0x0003860d) temp_image_control_pane_g1_ParamLimits

0x384a,	// (0x0003860d) temp_image_control_pane_g1

0x3858,	// (0x0003861b) temp_image_control_pane_g2_ParamLimits

0x3858,	// (0x0003861b) temp_image_control_pane_g2

0x386a,	// (0x0003862d) temp_image_control_pane_g3_ParamLimits

0x386a,	// (0x0003862d) temp_image_control_pane_g3

0x853f,	// (0x0003d302) temp_image_control_pane_g4_ParamLimits

0x853f,	// (0x0003d302) temp_image_control_pane_g4

0x0003,

0xf63f,	// (0x00044402) temp_image_control_pane_g_ParamLimits

0xf63f,	// (0x00044402) temp_image_control_pane_g

0x384a,	// (0x0003860d) main_mp3_pane_g1

0x8550,	// (0x0003d313) main_mp3_pane_g2

0x0007,

0xf648,	// (0x0004440b) main_mp3_pane_g

0x389f,	// (0x00038662) main_mp3_pane_t1

0x12cb,	// (0x0003608e) main_camera_pane_g8_ParamLimits

0x12cb,	// (0x0003608e) main_camera_pane_g8

0x60d9,	// (0x0003ae9c) main_video_pane_g7_ParamLimits

0x60d9,	// (0x0003ae9c) main_video_pane_g7

0x1319,	// (0x000360dc) main_camera2_pane_t7_ParamLimits

0x1319,	// (0x000360dc) main_camera2_pane_t7

0x1671,	// (0x00036434) scroll_pane_cp025_ParamLimits

0x1671,	// (0x00036434) scroll_pane_cp025

0x1685,	// (0x00036448) scroll_pane_cp026_ParamLimits

0x1685,	// (0x00036448) scroll_pane_cp026

0x1694,	// (0x00036457) wml_content_pane_ParamLimits

0x0bbc,	// (0x0003597f) main_touch_calib_pane

0x85f4,	// (0x0003d3b7) main_touch_calib_pane_g1

0x8600,	// (0x0003d3c3) main_touch_calib_pane_g2

0x860c,	// (0x0003d3cf) main_touch_calib_pane_g3

0x8618,	// (0x0003d3db) main_touch_calib_pane_g4

0x0003,

0xf666,	// (0x00044429) main_touch_calib_pane_g

0x8624,	// (0x0003d3e7) main_touch_calib_pane_t1

0x863d,	// (0x0003d400) main_touch_calib_pane_t2

0x0004,

0xf66f,	// (0x00044432) main_touch_calib_pane_t

0x1dbd,	// (0x00036b80) mup_progress_pane_cp02

0x1df2,	// (0x00036bb5) navi_pane_g1

0x1ead,	// (0x00036c70) navi_pane_mp_t3

0x0fe3,	// (0x00035da6) main_mp3_pane_ParamLimits

0x8277,	// (0x0003d03a) navi_pane_ParamLimits

0x384a,	// (0x0003860d) main_mp3_pane_g1_ParamLimits

0x8550,	// (0x0003d313) main_mp3_pane_g2_ParamLimits

0x855c,	// (0x0003d31f) main_mp3_pane_g3_ParamLimits

0x855c,	// (0x0003d31f) main_mp3_pane_g3

0x8568,	// (0x0003d32b) main_mp3_pane_g4_ParamLimits

0x8568,	// (0x0003d32b) main_mp3_pane_g4

0x12bd,	// (0x00036080) main_mp3_pane_g5_ParamLimits

0x12bd,	// (0x00036080) main_mp3_pane_g5

0x387a,	// (0x0003863d) main_mp3_pane_g6_ParamLimits

0x387a,	// (0x0003863d) main_mp3_pane_g6

0x3887,	// (0x0003864a) main_mp3_pane_g7_ParamLimits

0x3887,	// (0x0003864a) main_mp3_pane_g7

0x3893,	// (0x00038656) main_mp3_pane_g8_ParamLimits

0x3893,	// (0x00038656) main_mp3_pane_g8

0xf648,	// (0x0004440b) main_mp3_pane_g_ParamLimits

0x8574,	// (0x0003d337) main_mp3_pane_t2

0x8584,	// (0x0003d347) main_mp3_pane_t3

0x38ad,	// (0x00038670) main_mp3_pane_t4

0x38bb,	// (0x0003867e) main_mp3_pane_t5

0x0005,

0xf659,	// (0x0004441c) main_mp3_pane_t

0x38c9,	// (0x0003868c) mup_progress_pane_cp01

0x55ab,	// (0x0003a36e) aid_zoom_text_secondary2

0x367d,	// (0x00038440) list_cale_ev2_pane

0x3685,	// (0x00038448) scroll_pane_cp023_ParamLimits

0x8698,	// (0x0003d45b) field_cale_ev2_pane_ParamLimits

0x8698,	// (0x0003d45b) field_cale_ev2_pane

0x4cab,	// (0x00039a6e) field_cale_ev2_pane_g1_ParamLimits

0x4cab,	// (0x00039a6e) field_cale_ev2_pane_g1

0x4cb7,	// (0x00039a7a) field_cale_ev2_pane_g2_ParamLimits

0x4cb7,	// (0x00039a7a) field_cale_ev2_pane_g2

0x4ccf,	// (0x00039a92) field_cale_ev2_pane_g3_ParamLimits

0x4ccf,	// (0x00039a92) field_cale_ev2_pane_g3

0x0003,

0xf67a,	// (0x0004443d) field_cale_ev2_pane_g_ParamLimits

0xf67a,	// (0x0004443d) field_cale_ev2_pane_g

0x4cf3,	// (0x00039ab6) field_cale_ev2_pane_t1_ParamLimits

0x4cf3,	// (0x00039ab6) field_cale_ev2_pane_t1

0x4d0a,	// (0x00039acd) field_cale_ev2_pane_t2_ParamLimits

0x4d0a,	// (0x00039acd) field_cale_ev2_pane_t2

0x0001,

0xf683,	// (0x00044446) field_cale_ev2_pane_t_ParamLimits

0xf683,	// (0x00044446) field_cale_ev2_pane_t

0x7ab9,	// (0x0003c87c) main_postcard_pane_g5_ParamLimits

0x7ab9,	// (0x0003c87c) main_postcard_pane_g5

0x7ac7,	// (0x0003c88a) main_postcard_pane_g6_ParamLimits

0x7ac7,	// (0x0003c88a) main_postcard_pane_g6

0x12af,	// (0x00036072) camera2_autofocus_pane_cp_ParamLimits

0x12af,	// (0x00036072) camera2_autofocus_pane_cp

0x0fe3,	// (0x00035da6) main_mup3_pane

0x8701,	// (0x0003d4c4) main_mup3_pane_g1_ParamLimits

0x8701,	// (0x0003d4c4) main_mup3_pane_g1

0x8750,	// (0x0003d513) main_mup3_pane_g2_ParamLimits

0x8750,	// (0x0003d513) main_mup3_pane_g2

0x87b3,	// (0x0003d576) main_mup3_pane_g3_ParamLimits

0x87b3,	// (0x0003d576) main_mup3_pane_g3

0x8812,	// (0x0003d5d5) main_mup3_pane_g4_ParamLimits

0x8812,	// (0x0003d5d5) main_mup3_pane_g4

0x8871,	// (0x0003d634) main_mup3_pane_g5_ParamLimits

0x8871,	// (0x0003d634) main_mup3_pane_g5

0x88d0,	// (0x0003d693) main_mup3_pane_g6_ParamLimits

0x88d0,	// (0x0003d693) main_mup3_pane_g6

0x12cb,	// (0x0003608e) main_mup3_pane_g7_ParamLimits

0x12cb,	// (0x0003608e) main_mup3_pane_g7

0x0007,

0xf693,	// (0x00044456) main_mup3_pane_g_ParamLimits

0xf693,	// (0x00044456) main_mup3_pane_g

0x8940,	// (0x0003d703) main_mup3_pane_t1_ParamLimits

0x8940,	// (0x0003d703) main_mup3_pane_t1

0x8a21,	// (0x0003d7e4) main_mup3_pane_t2_ParamLimits

0x8a21,	// (0x0003d7e4) main_mup3_pane_t2

0x8b02,	// (0x0003d8c5) main_mup3_pane_t4_ParamLimits

0x8b02,	// (0x0003d8c5) main_mup3_pane_t4

0x8b14,	// (0x0003d8d7) main_mup3_pane_t5_ParamLimits

0x8b14,	// (0x0003d8d7) main_mup3_pane_t5

0x8bda,	// (0x0003d99d) main_mup3_pane_t6_ParamLimits

0x8bda,	// (0x0003d99d) main_mup3_pane_t6

0x0005,

0xf6a4,	// (0x00044467) main_mup3_pane_t_ParamLimits

0xf6a4,	// (0x00044467) main_mup3_pane_t

0x8c77,	// (0x0003da3a) mup3_progress_pane_ParamLimits

0x8c77,	// (0x0003da3a) mup3_progress_pane

0xd42b,	// (0x000421ee) popup_mup3_control_window_ParamLimits

0xd42b,	// (0x000421ee) popup_mup3_control_window

0x3945,	// (0x00038708) popup_mup3_text_window

0x8cda,	// (0x0003da9d) mup3_progress_pane_t1

0x8cf9,	// (0x0003dabc) mup3_progress_pane_t2

0x394d,	// (0x00038710) mup3_progress_pane_t3

0x0002,

0xf6b1,	// (0x00044474) mup3_progress_pane_t

0x396a,	// (0x0003872d) mup_progress_pane_cp03

0x397a,	// (0x0003873d) bg_tb_trans_pane_cp04

0x397a,	// (0x0003873d) mup3_volume_pane

0x3982,	// (0x00038745) popup_mup3_control_window_g1

0x3982,	// (0x00038745) mup3_volume_pane_g1

0x3982,	// (0x00038745) mup3_volume_pane_g2

0x3982,	// (0x00038745) mup3_volume_pane_g3

0x0002,

0xf6b8,	// (0x0004447b) mup3_volume_pane_g

0x0bbc,	// (0x0003597f) bg_tb_trans_pane_cp03

0x398a,	// (0x0003874d) popup_mup3_text_window_g1

0x3992,	// (0x00038755) popup_mup3_text_window_t1

0x13a1,	// (0x00036164) list_calc_item_pane_g1_ParamLimits

0x3377,	// (0x0003813a) mup_volume_pane_cp_g1

0x8656,	// (0x0003d419) main_touch_calib_pane_t3

0x866c,	// (0x0003d42f) main_touch_calib_pane_t4

0x8682,	// (0x0003d445) main_touch_calib_pane_t5

0x5563,	// (0x0003a326) aid_cell_size_toolbar2

0x556b,	// (0x0003a32e) aid_popup3_width_pane

0x4ab6,	// (0x00039879) aid_zoom_text_msg_primary

0x5fdb,	// (0x0003ad9e) vorec_t7

0x1365,	// (0x00036128) bg_calc_paper_pane_g1_ParamLimits

0x137d,	// (0x00036140) bg_calc_paper_pane_g2_ParamLimits

0x1371,	// (0x00036134) bg_calc_paper_pane_g3_ParamLimits

0x1395,	// (0x00036158) bg_calc_paper_pane_g4_ParamLimits

0x1389,	// (0x0003614c) bg_calc_paper_pane_g5_ParamLimits

0x594b,	// (0x0003a70e) bg_calc_paper_pane_g6_ParamLimits

0x595c,	// (0x0003a71f) bg_calc_paper_pane_g7_ParamLimits

0x596d,	// (0x0003a730) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x00043e6e) bg_calc_paper_pane_g_ParamLimits

0x597e,	// (0x0003a741) calc_bg_paper_pane_g9_ParamLimits

0x12af,	// (0x00036072) image_qvga_pane_ParamLimits

0x12af,	// (0x00036072) image_qvga_pane

0x1242,	// (0x00036005) bg_popup_sub_pane_cp04_ParamLimits

0x212d,	// (0x00036ef0) popup_mup_playback_window_g1_ParamLimits

0x2139,	// (0x00036efc) popup_mup_playback_window_t1_ParamLimits

0x214e,	// (0x00036f11) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x000441cc) popup_mup_playback_window_t_ParamLimits

0x12bd,	// (0x00036080) main_mup2_pane_g3_ParamLimits

0x12bd,	// (0x00036080) main_mup2_pane_g3

0x629a,	// (0x0003b05d) popup_toolbar_window_cp04

0x24d2,	// (0x00037295) popup_call2_audio_second_window_g3_ParamLimits

0x24d2,	// (0x00037295) popup_call2_audio_second_window_g3

0x28ea,	// (0x000376ad) popup_call2_audio_first_window_g4_ParamLimits

0x28ea,	// (0x000376ad) popup_call2_audio_first_window_g4

0x2f11,	// (0x00037cd4) popup_call2_audio_in_window_g4_ParamLimits

0x2f11,	// (0x00037cd4) popup_call2_audio_in_window_g4

0x7b96,	// (0x0003c959) aid_area_sk_bg_cut_ParamLimits

0x7b96,	// (0x0003c959) aid_area_sk_bg_cut

0x2163,	// (0x00036f26) aid_area_sk_bg_cut_2_ParamLimits

0x2163,	// (0x00036f26) aid_area_sk_bg_cut_2

0x0bbc,	// (0x0003597f) aid_placing_details_win

0x0bbc,	// (0x0003597f) aid_placing_details_win_2

0x12bd,	// (0x00036080) camera2_autofocus_pane_g1_ParamLimits

0x571c,	// (0x0003a4df) popup_fixed_preview_cale_window_ParamLimits

0x571c,	// (0x0003a4df) popup_fixed_preview_cale_window

0x1f3d,	// (0x00036d00) navi_slider_pane_g3

0x1f34,	// (0x00036cf7) navi_slider_pane_g4

0x1f2b,	// (0x00036cee) navi_slider_pane_g5

0x1f3d,	// (0x00036d00) navi_slider_pane_g6

0x772e,	// (0x0003c4f1) navi_slider_pane_g7

0x2049,	// (0x00036e0c) mup_scale_pane_g3

0x2052,	// (0x00036e15) mup_scale_pane_g4

0x205b,	// (0x00036e1e) mup_scale_pane_g5

0x792d,	// (0x0003c6f0) mup_scale_pane_g6

0x7936,	// (0x0003c6f9) mup_scale_pane_g7

0x12fb,	// (0x000360be) cams2_slider_pane_g3

0x12fb,	// (0x000360be) cams2_slider_pane_g4

0x12fb,	// (0x000360be) cams2_slider_pane_g5

0x12fb,	// (0x000360be) cams2_slider_pane_g6

0x12fb,	// (0x000360be) cams2_slider_pane_g7

0x12fb,	// (0x000360be) camera2_autofocus_pane_cp_g1

0x31d9,	// (0x00037f9c) bg_popup_preview_window_pane_cp02_ParamLimits

0x31d9,	// (0x00037f9c) bg_popup_preview_window_pane_cp02

0x39a0,	// (0x00038763) list_fp_cale_pane_ParamLimits

0x39a0,	// (0x00038763) list_fp_cale_pane

0x39ac,	// (0x0003876f) popup_fixed_preview_cale_window_t1_ParamLimits

0x39ac,	// (0x0003876f) popup_fixed_preview_cale_window_t1

0x8d18,	// (0x0003dadb) popup_fixed_preview_cale_window_t2_ParamLimits

0x8d18,	// (0x0003dadb) popup_fixed_preview_cale_window_t2

0x8d2d,	// (0x0003daf0) popup_fixed_preview_cale_window_t3_ParamLimits

0x8d2d,	// (0x0003daf0) popup_fixed_preview_cale_window_t3

0x0002,

0xf6bf,	// (0x00044482) popup_fixed_preview_cale_window_t_ParamLimits

0xf6bf,	// (0x00044482) popup_fixed_preview_cale_window_t

0x8d42,	// (0x0003db05) list_single_fp_cale_pane_ParamLimits

0x8d42,	// (0x0003db05) list_single_fp_cale_pane

0x39ca,	// (0x0003878d) list_single_fp_cale_pane_g1_ParamLimits

0x39ca,	// (0x0003878d) list_single_fp_cale_pane_g1

0x39d6,	// (0x00038799) list_single_fp_cale_pane_g2_ParamLimits

0x39d6,	// (0x00038799) list_single_fp_cale_pane_g2

0x0002,

0xf6c6,	// (0x00044489) list_single_fp_cale_pane_g_ParamLimits

0xf6c6,	// (0x00044489) list_single_fp_cale_pane_g

0x39ef,	// (0x000387b2) list_single_fp_cale_pane_t1_ParamLimits

0x39ef,	// (0x000387b2) list_single_fp_cale_pane_t1

0x3a01,	// (0x000387c4) list_single_fp_cale_pane_t2_ParamLimits

0x3a01,	// (0x000387c4) list_single_fp_cale_pane_t2

0x0001,

0xf6cd,	// (0x00044490) list_single_fp_cale_pane_t_ParamLimits

0xf6cd,	// (0x00044490) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0bbc,	// (0x0003597f) main_dialer_pane

0x0bbc,	// (0x0003597f) aid_cell_size_keypad

0x0bbc,	// (0x0003597f) dialer_ne_pane

0x0bbc,	// (0x0003597f) grid_dialer_command_1_pane

0x0bbc,	// (0x0003597f) grid_dialer_command_2_pane

0x0bbc,	// (0x0003597f) grid_dialer_keypad_pane

0x32ca,	// (0x0003808d) bg_popup_call_pane_cp06_ParamLimits

0x32ca,	// (0x0003808d) bg_popup_call_pane_cp06

0x32ca,	// (0x0003808d) dialer_ne_clear_pane_ParamLimits

0x32ca,	// (0x0003808d) dialer_ne_clear_pane

0x12fb,	// (0x000360be) dialer_ne_pane_g1

0x1319,	// (0x000360dc) dialer_ne_pane_t1_ParamLimits

0x1319,	// (0x000360dc) dialer_ne_pane_t1

0x3c52,	// (0x00038a15) dialer_ne_pane_t2_ParamLimits

0x3c52,	// (0x00038a15) dialer_ne_pane_t2

0x8d55,	// (0x0003db18) dialer_ne_pane_t3_ParamLimits

0x8d55,	// (0x0003db18) dialer_ne_pane_t3

0x0002,

0xf6d2,	// (0x00044495) dialer_ne_pane_t_ParamLimits

0xf6d2,	// (0x00044495) dialer_ne_pane_t

0x8d55,	// (0x0003db18) dialer_ne_pane_t3_copy1_ParamLimits

0x8d55,	// (0x0003db18) dialer_ne_pane_t3_copy1

0x3a34,	// (0x000387f7) cell_dialer_keypad_pane_ParamLimits

0x3a34,	// (0x000387f7) cell_dialer_keypad_pane

0x0fe3,	// (0x00035da6) cell_dialer_command_1_pane_ParamLimits

0x0fe3,	// (0x00035da6) cell_dialer_command_1_pane

0x3a4b,	// (0x0003880e) cell_dialer_command_2_pane_ParamLimits

0x3a4b,	// (0x0003880e) cell_dialer_command_2_pane

0x0fe3,	// (0x00035da6) bg_button_pane_cp02_ParamLimits

0x0fe3,	// (0x00035da6) bg_button_pane_cp02

0x12bd,	// (0x00036080) cell_dialer_keypad_pane_g1_ParamLimits

0x12bd,	// (0x00036080) cell_dialer_keypad_pane_g1

0x0fe3,	// (0x00035da6) bg_button_pane_cp03_ParamLimits

0x0fe3,	// (0x00035da6) bg_button_pane_cp03

0x12bd,	// (0x00036080) cell_dialer_command_1_pane_g1_ParamLimits

0x12bd,	// (0x00036080) cell_dialer_command_1_pane_g1

0x0bbc,	// (0x0003597f) bg_button_pane_cp04

0x12fb,	// (0x000360be) cell_dialer_command_2_pane_g1

0x0bbc,	// (0x0003597f) bg_button_pane_cp06

0x12fb,	// (0x000360be) dialer_ne_clear_pane_g1

0x1dfe,	// (0x00036bc1) navi_pane_g2

0x1e2c,	// (0x00036bef) navi_pane_g3

0x0002,

0xf311,	// (0x000440d4) navi_pane_g

0x1ebb,	// (0x00036c7e) navi_pane_mv_g2

0x1ee2,	// (0x00036ca5) navi_pane_mv_g5

0x76f9,	// (0x0003c4bc) navi_pane_mv_t1

0x1359,	// (0x0003611c) main_clock2_pane

0x12af,	// (0x00036072) main_clock2_list_pane_ParamLimits

0x12af,	// (0x00036072) main_clock2_list_pane

0x8dcb,	// (0x0003db8e) main_clock2_pane_t1_ParamLimits

0x8dcb,	// (0x0003db8e) main_clock2_pane_t1

0x8df9,	// (0x0003dbbc) main_clock2_pane_t2_ParamLimits

0x8df9,	// (0x0003dbbc) main_clock2_pane_t2

0x0004,

0xf6de,	// (0x000444a1) main_clock2_pane_t_ParamLimits

0xf6de,	// (0x000444a1) main_clock2_pane_t

0x8e5e,	// (0x0003dc21) popup_clock_analogue_window_cp03_ParamLimits

0x8e5e,	// (0x0003dc21) popup_clock_analogue_window_cp03

0x8e7c,	// (0x0003dc3f) popup_clock_digital_window_cp02_ParamLimits

0x8e7c,	// (0x0003dc3f) popup_clock_digital_window_cp02

0x8ef1,	// (0x0003dcb4) main_clock2_list_single_pane_ParamLimits

0x8ef1,	// (0x0003dcb4) main_clock2_list_single_pane

0x1561,	// (0x00036324) list_highlight_pane_cp05

0x3a8e,	// (0x00038851) main_clock2_list_single_pane_t1

0x629a,	// (0x0003b05d) popup_toolbar_window_cp04_ParamLimits

0x12cb,	// (0x0003608e) camera2_autofocus_pane_g2_ParamLimits

0x12cb,	// (0x0003608e) camera2_autofocus_pane_g2

0x12cb,	// (0x0003608e) camera2_autofocus_pane_g3_ParamLimits

0x12cb,	// (0x0003608e) camera2_autofocus_pane_g3

0x12cb,	// (0x0003608e) camera2_autofocus_pane_g4_ParamLimits

0x12cb,	// (0x0003608e) camera2_autofocus_pane_g4

0x12cb,	// (0x0003608e) camera2_autofocus_pane_g5_ParamLimits

0x12cb,	// (0x0003608e) camera2_autofocus_pane_g5

0x0004,

0xf622,	// (0x000443e5) camera2_autofocus_pane_g_ParamLimits

0xf622,	// (0x000443e5) camera2_autofocus_pane_g

0x86c2,	// (0x0003d485) camera2_autofocus_pane_cp_g2

0x86ca,	// (0x0003d48d) camera2_autofocus_pane_cp_g3

0x86d2,	// (0x0003d495) camera2_autofocus_pane_cp_g4

0x86da,	// (0x0003d49d) camera2_autofocus_pane_cp_g5

0x0004,

0xf688,	// (0x0004444b) camera2_autofocus_pane_cp_g

0x0bbc,	// (0x0003597f) popup_dialer_spcha_window

0x0bbc,	// (0x0003597f) bg_popup_sub_pane_cp07

0x0bbc,	// (0x0003597f) list_spcha_pane

0x3a9c,	// (0x0003885f) list_single_spcha_pane_ParamLimits

0x3a9c,	// (0x0003885f) list_single_spcha_pane

0x0bbc,	// (0x0003597f) list_highlight_pane_cp06

0x1a5f,	// (0x00036822) list_single_spcha_pane_t1

0x2cbb,	// (0x00037a7e) popup_call2_audio_out_window_g4_ParamLimits

0x2cbb,	// (0x00037a7e) popup_call2_audio_out_window_g4

0x0bbc,	// (0x0003597f) main_imed2_pane

0x81a0,	// (0x0003cf63) popup_imed_adjust2_window

0x81b3,	// (0x0003cf76) popup_imed_trans_window_ParamLimits

0x81b3,	// (0x0003cf76) popup_imed_trans_window

0x344c,	// (0x0003820f) popup_blid_sat_info2_window_t1

0x345a,	// (0x0003821d) popup_blid_sat_info2_window_t2

0x000a,

0xf5b7,	// (0x0004437a) popup_blid_sat_info2_window_t

0x8fa6,	// (0x0003dd69) aid_size_cell_colour_35

0x8fc0,	// (0x0003dd83) aid_size_cell_colour_112

0x8fd7,	// (0x0003dd9a) aid_size_cell_effect

0x0fe3,	// (0x00035da6) bg_tb_trans_pane_cp02

0x1a2c,	// (0x000367ef) heading_imed_pane

0x8ff1,	// (0x0003ddb4) listscroll_imed_pane

0x3aae,	// (0x00038871) heading_imed_pane_g1

0x3ab6,	// (0x00038879) heading_imed_pane_t1

0x3ac4,	// (0x00038887) grid_imed_colour_35_pane_ParamLimits

0x3ac4,	// (0x00038887) grid_imed_colour_35_pane

0x8ffd,	// (0x0003ddc0) grid_imed_effect_pane

0x3adc,	// (0x0003889f) list_imed_aspect_pane

0x900d,	// (0x0003ddd0) scroll_pane_cp027_ParamLimits

0x900d,	// (0x0003ddd0) scroll_pane_cp027

0x9019,	// (0x0003dddc) cell_imed_effect_pane_ParamLimits

0x9019,	// (0x0003dddc) cell_imed_effect_pane

0x3ae4,	// (0x000388a7) cell_imed_colour_pane_ParamLimits

0x3ae4,	// (0x000388a7) cell_imed_colour_pane

0x3b26,	// (0x000388e9) cell_imed_colour_pane_g1_ParamLimits

0x3b26,	// (0x000388e9) cell_imed_colour_pane_g1

0x3b37,	// (0x000388fa) hgihlgiht_grid_pane_cp016_ParamLimits

0x3b37,	// (0x000388fa) hgihlgiht_grid_pane_cp016

0x9031,	// (0x0003ddf4) cell_imed_effect_pane_g1

0x9039,	// (0x0003ddfc) grid_highlight_pane_cp017

0x3b48,	// (0x0003890b) list_imed_single_pane_ParamLimits

0x3b48,	// (0x0003890b) list_imed_single_pane

0x0bbc,	// (0x0003597f) list_highlight_pane_cp07

0x3b5d,	// (0x00038920) list_imed_aspect_pane_comp1_t1

0x20db,	// (0x00036e9e) bg_tb_trans_pane_cp05

0x3b7f,	// (0x00038942) popup_imed_adjust2_window_g1

0x3ba6,	// (0x00038969) popup_imed_adjust2_window_t1

0x3bbe,	// (0x00038981) slider_imed_adjust_pane

0x3bd2,	// (0x00038995) slider_imed_adjust_pane_g1

0x3be2,	// (0x000389a5) slider_imed_adjust_pane_g2

0x3bf2,	// (0x000389b5) slider_imed_adjust_pane_g3

0x3c03,	// (0x000389c6) slider_imed_adjust_pane_g4

0x0003,

0xf6fb,	// (0x000444be) slider_imed_adjust_pane_g

0x9042,	// (0x0003de05) aid_size_cell_clipart2

0x904e,	// (0x0003de11) grid_imed_clipart_pane

0x206c,	// (0x00036e2f) scroll_pane_cp031

0x9058,	// (0x0003de1b) cell_imed_clipart_pane_ParamLimits

0x9058,	// (0x0003de1b) cell_imed_clipart_pane

0x907b,	// (0x0003de3e) cell_imed_clipart_pane_g1

0x0bbc,	// (0x0003597f) grid_highlight_pane_cp014

0x8dad,	// (0x0003db70) main_clock2_pane_g1_ParamLimits

0x8dad,	// (0x0003db70) main_clock2_pane_g1

0x8e98,	// (0x0003dc5b) aid_call2_pane_cp10

0x8eaa,	// (0x0003dc6d) aid_call_pane_cp10

0x1d5d,	// (0x00036b20) popup_clock_analogue_window_cp10_g1

0x1d5d,	// (0x00036b20) popup_clock_analogue_window_cp10_g2

0x8ebc,	// (0x0003dc7f) popup_clock_analogue_window_cp10_g3

0x8ebc,	// (0x0003dc7f) popup_clock_analogue_window_cp10_g4

0x1d5d,	// (0x00036b20) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6e9,	// (0x000444ac) popup_clock_analogue_window_cp10_g

0x8ed2,	// (0x0003dc95) popup_clock_analogue_window_cp10_t1

0x8f03,	// (0x0003dcc6) clock_digital_number_pane_cp10_ParamLimits

0x8f03,	// (0x0003dcc6) clock_digital_number_pane_cp10

0x8f1d,	// (0x0003dce0) clock_digital_number_pane_cp11_ParamLimits

0x8f1d,	// (0x0003dce0) clock_digital_number_pane_cp11

0x8f37,	// (0x0003dcfa) clock_digital_number_pane_cp12_ParamLimits

0x8f37,	// (0x0003dcfa) clock_digital_number_pane_cp12

0x8f51,	// (0x0003dd14) clock_digital_number_pane_cp13_ParamLimits

0x8f51,	// (0x0003dd14) clock_digital_number_pane_cp13

0x8f6b,	// (0x0003dd2e) clock_digital_separator_pane_cp10_ParamLimits

0x8f6b,	// (0x0003dd2e) clock_digital_separator_pane_cp10

0x8f85,	// (0x0003dd48) popup_clock_digital_window_cp02_t1_ParamLimits

0x8f85,	// (0x0003dd48) popup_clock_digital_window_cp02_t1

0x123a,	// (0x00035ffd) clock_digital_number_pane_cp10_g1

0x123a,	// (0x00035ffd) clock_digital_number_pane_cp10_g2

0x0001,

0xf704,	// (0x000444c7) clock_digital_number_pane_cp10_g

0x123a,	// (0x00035ffd) clock_digital_separator_pane_cp10_g1

0x123a,	// (0x00035ffd) clock_digital_separator_pane_g2_cp10

0x1eea,	// (0x00036cad) navi_pane_vded_g4

0x1ef3,	// (0x00036cb6) navi_pane_vded_g5

0x1efc,	// (0x00036cbf) navi_pane_vded_t1

0x0bbc,	// (0x0003597f) main_vded_pane

0x9084,	// (0x0003de47) main_vded_pane_g1

0x9090,	// (0x0003de53) main_vded_pane_g2

0x909a,	// (0x0003de5d) main_vded_pane_g3

0x0002,

0xf709,	// (0x000444cc) main_vded_pane_g

0x90a4,	// (0x0003de67) main_vded_pane_t1

0x90b2,	// (0x0003de75) main_vded_pane_t2

0x0001,

0xf710,	// (0x000444d3) main_vded_pane_t

0x90c0,	// (0x0003de83) vded_slider_pane

0x90ca,	// (0x0003de8d) vded_video_pane

0x3c14,	// (0x000389d7) vded_video_pane_g1

0x90d4,	// (0x0003de97) vded_video_pane_g2

0x12fb,	// (0x000360be) vded_video_pane_g3

0x0002,

0xf715,	// (0x000444d8) vded_video_pane_g

0x3c1e,	// (0x000389e1) vded_slider_pane_g1

0x3377,	// (0x0003813a) vded_slider_pane_g2

0x3c27,	// (0x000389ea) vded_slider_pane_g3

0x3c30,	// (0x000389f3) vded_slider_pane_g4

0x3c39,	// (0x000389fc) vded_slider_pane_g5

0x0004,

0xf71c,	// (0x000444df) vded_slider_pane_g

0xd42b,	// (0x000421ee) mup3_rocker_pane_ParamLimits

0xd42b,	// (0x000421ee) mup3_rocker_pane

0x3982,	// (0x00038745) mup3_control_keys_pane_g1

0x3c42,	// (0x00038a05) mup3_control_keys_pane_g2

0x3982,	// (0x00038745) mup3_control_keys_pane_g3

0x3c4a,	// (0x00038a0d) mup3_control_keys_pane_g4

0x0003,

0xf727,	// (0x000444ea) mup3_control_keys_pane_g

0x5744,	// (0x0003a507) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5744,	// (0x0003a507) popup_toolbar2_fixed_window_cp01

0xd42b,	// (0x000421ee) popup_toolbar2_fixed_window_cp02_ParamLimits

0xd42b,	// (0x000421ee) popup_toolbar2_fixed_window_cp02

0x2644,	// (0x00037407) popup_call2_audio_second_window_t4_ParamLimits

0x2644,	// (0x00037407) popup_call2_audio_second_window_t4

0x2b80,	// (0x00037943) popup_call2_audio_first_window_t6_ParamLimits

0x2b80,	// (0x00037943) popup_call2_audio_first_window_t6

0x2dbe,	// (0x00037b81) popup_call2_audio_out_window_t6_ParamLimits

0x2dbe,	// (0x00037b81) popup_call2_audio_out_window_t6

0x0bbc,	// (0x0003597f) main_vitu_pane

0x12af,	// (0x00036072) aid_size_cell_itu_ParamLimits

0x12af,	// (0x00036072) aid_size_cell_itu

0x12af,	// (0x00036072) bg_popup_window_pane_cp08_ParamLimits

0x12af,	// (0x00036072) bg_popup_window_pane_cp08

0x12af,	// (0x00036072) field_vitu_entry_pane_ParamLimits

0x12af,	// (0x00036072) field_vitu_entry_pane

0x12af,	// (0x00036072) grid_vitu_function_pane_ParamLimits

0x12af,	// (0x00036072) grid_vitu_function_pane

0x12af,	// (0x00036072) grid_vitu_itu_pane_ParamLimits

0x12af,	// (0x00036072) grid_vitu_itu_pane

0x12af,	// (0x00036072) cell_vitu_itu_pane_ParamLimits

0x12af,	// (0x00036072) cell_vitu_itu_pane

0x12af,	// (0x00036072) cell_vitu_function_pane_ParamLimits

0x12af,	// (0x00036072) cell_vitu_function_pane

0x0fe3,	// (0x00035da6) bg_popup_sub_pane_cp08_ParamLimits

0x0fe3,	// (0x00035da6) bg_popup_sub_pane_cp08

0x1305,	// (0x000360c8) field_vitu_entry_pane_t1_ParamLimits

0x1305,	// (0x000360c8) field_vitu_entry_pane_t1

0x3c52,	// (0x00038a15) field_vitu_entry_pane_t2_ParamLimits

0x3c52,	// (0x00038a15) field_vitu_entry_pane_t2

0x0001,

0xf730,	// (0x000444f3) field_vitu_entry_pane_t_ParamLimits

0xf730,	// (0x000444f3) field_vitu_entry_pane_t

0x32ca,	// (0x0003808d) bg_button_pane_cp05_ParamLimits

0x32ca,	// (0x0003808d) bg_button_pane_cp05

0x3c6f,	// (0x00038a32) cell_vitu_itu_pane_g1

0x20c7,	// (0x00036e8a) cell_vitu_itu_pane_t1_ParamLimits

0x20c7,	// (0x00036e8a) cell_vitu_itu_pane_t1

0x20c7,	// (0x00036e8a) cell_vitu_itu_pane_t2_ParamLimits

0x20c7,	// (0x00036e8a) cell_vitu_itu_pane_t2

0x0002,

0xf735,	// (0x000444f8) cell_vitu_itu_pane_t_ParamLimits

0xf735,	// (0x000444f8) cell_vitu_itu_pane_t

0x0bbc,	// (0x0003597f) bg_button_pane_cp07

0x12fb,	// (0x000360be) cell_vitu_function_pane_g1

0x58b1,	// (0x0003a674) main_calc_pane_g1

0x559f,	// (0x0003a362) aid_visual_content_pane

0x0bbc,	// (0x0003597f) main_vradio_pane

0x12cb,	// (0x0003608e) main_vradio_pane_g1_ParamLimits

0x12cb,	// (0x0003608e) main_vradio_pane_g1

0x12cb,	// (0x0003608e) main_vradio_pane_g2_ParamLimits

0x12cb,	// (0x0003608e) main_vradio_pane_g2

0x0001,

0xf4cc,	// (0x0004428f) main_vradio_pane_g_ParamLimits

0xf4cc,	// (0x0004428f) main_vradio_pane_g

0x1319,	// (0x000360dc) main_vradio_pane_t1_ParamLimits

0x1319,	// (0x000360dc) main_vradio_pane_t1

0x1319,	// (0x000360dc) main_vradio_pane_t2_ParamLimits

0x1319,	// (0x000360dc) main_vradio_pane_t2

0x1319,	// (0x000360dc) main_vradio_pane_t3_ParamLimits

0x1319,	// (0x000360dc) main_vradio_pane_t3

0x0002,

0xf73c,	// (0x000444ff) main_vradio_pane_t_ParamLimits

0xf73c,	// (0x000444ff) main_vradio_pane_t

0x12af,	// (0x00036072) vradio_rocker_control_pane_ParamLimits

0x12af,	// (0x00036072) vradio_rocker_control_pane

0x12af,	// (0x00036072) vradio_station_info_pane_ParamLimits

0x12af,	// (0x00036072) vradio_station_info_pane

0x0fe3,	// (0x00035da6) vradio_frequency_info_pane_ParamLimits

0x0fe3,	// (0x00035da6) vradio_frequency_info_pane

0x12fb,	// (0x000360be) vradio_station_info_pane_g1

0x20c7,	// (0x00036e8a) vradio_station_info_pane_t1_ParamLimits

0x20c7,	// (0x00036e8a) vradio_station_info_pane_t1

0x1319,	// (0x000360dc) vradio_station_info_pane_t2_ParamLimits

0x1319,	// (0x000360dc) vradio_station_info_pane_t2

0x0001,

0xf743,	// (0x00044506) vradio_station_info_pane_t_ParamLimits

0xf743,	// (0x00044506) vradio_station_info_pane_t

0x0bbc,	// (0x0003597f) vradio_tuning_pane

0x90dd,	// (0x0003dea0) vradio_rocker_control_pane_g1

0x3c8b,	// (0x00038a4e) vradio_rocker_control_pane_g2

0x90e5,	// (0x0003dea8) vradio_rocker_control_pane_g3

0x90ed,	// (0x0003deb0) vradio_rocker_control_pane_g4

0x90f5,	// (0x0003deb8) vradio_rocker_control_pane_g5

0x0004,

0xf748,	// (0x0004450b) vradio_rocker_control_pane_g

0x12fb,	// (0x000360be) vradio_frequency_info_pane_g1

0x1305,	// (0x000360c8) vradio_frequency_info_pane_t1_ParamLimits

0x1305,	// (0x000360c8) vradio_frequency_info_pane_t1

0x90fd,	// (0x0003dec0) vradio_tuning_pane_g1

0x910a,	// (0x0003decd) vradio_tuning_pane_t1

0x55e8,	// (0x0003a3ab) area_side_right_pane_ParamLimits

0x55e8,	// (0x0003a3ab) area_side_right_pane

0x31a0,	// (0x00037f63) status_small_pane_g1

0x31a8,	// (0x00037f6b) status_small_pane_g2

0x31b1,	// (0x00037f74) status_small_pane_g3

0x31ba,	// (0x00037f7d) status_small_pane_g4

0x0003,

0xf519,	// (0x000442dc) status_small_pane_g

0x31c3,	// (0x00037f86) status_small_pane_t1

0x0bbc,	// (0x0003597f) main_video3_pane

0x0bbc,	// (0x0003597f) cams_zoom_vslider_pane

0x3c93,	// (0x00038a56) image3_wide_pane_ParamLimits

0x3c93,	// (0x00038a56) image3_wide_pane

0x0bbc,	// (0x0003597f) image3_wide_small_pane

0x3cad,	// (0x00038a70) main_video3_pane_g1_ParamLimits

0x3cad,	// (0x00038a70) main_video3_pane_g1

0x3cad,	// (0x00038a70) main_video3_pane_g2_ParamLimits

0x3cad,	// (0x00038a70) main_video3_pane_g2

0x0001,

0xf753,	// (0x00044516) main_video3_pane_g_ParamLimits

0xf753,	// (0x00044516) main_video3_pane_g

0x3ccb,	// (0x00038a8e) main_video3_pane_t1_ParamLimits

0x3ccb,	// (0x00038a8e) main_video3_pane_t1

0x3ccb,	// (0x00038a8e) main_video3_pane_t2_ParamLimits

0x3ccb,	// (0x00038a8e) main_video3_pane_t2

0x3ccb,	// (0x00038a8e) main_video3_pane_t3_ParamLimits

0x3ccb,	// (0x00038a8e) main_video3_pane_t3

0x0002,

0xf758,	// (0x0004451b) main_video3_pane_t_ParamLimits

0xf758,	// (0x0004451b) main_video3_pane_t

0x12fb,	// (0x000360be) cams_zoom_vslider_pane_g1

0x12fb,	// (0x000360be) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00043e4f) cams_zoom_vslider_pane_g

0x0bbc,	// (0x0003597f) small_slider_vertical_pane

0x12fb,	// (0x000360be) small_slider_vertical_pane_g1

0x12fb,	// (0x000360be) small_slider_vertical_pane_g2

0x3cf2,	// (0x00038ab5) small_slider_vertical_pane_g3

0x0002,

0xf75f,	// (0x00044522) small_slider_vertical_pane_g

0x0bbc,	// (0x0003597f) main_hwr_training_pane

0x3cfb,	// (0x00038abe) hwr_training_instruct_pane_ParamLimits

0x3cfb,	// (0x00038abe) hwr_training_instruct_pane

0x9119,	// (0x0003dedc) hwr_training_navi_pane_ParamLimits

0x9119,	// (0x0003dedc) hwr_training_navi_pane

0x9133,	// (0x0003def6) hwr_training_write_pane_ParamLimits

0x9133,	// (0x0003def6) hwr_training_write_pane

0x0bbc,	// (0x0003597f) bg_frame_shadow_pane

0x3d32,	// (0x00038af5) hwr_training_write_pane_g1

0x3d3a,	// (0x00038afd) hwr_training_write_pane_g2

0x3d42,	// (0x00038b05) hwr_training_write_pane_g3

0x3d4a,	// (0x00038b0d) hwr_training_write_pane_g4

0x3d52,	// (0x00038b15) hwr_training_write_pane_g5

0x3d5a,	// (0x00038b1d) hwr_training_write_pane_g6

0x3d62,	// (0x00038b25) hwr_training_write_pane_g7

0x0006,

0xf766,	// (0x00044529) hwr_training_write_pane_g

0x916b,	// (0x0003df2e) hwr_training_navi_pane_g1_ParamLimits

0x916b,	// (0x0003df2e) hwr_training_navi_pane_g1

0x917d,	// (0x0003df40) hwr_training_navi_pane_g2_ParamLimits

0x917d,	// (0x0003df40) hwr_training_navi_pane_g2

0x918f,	// (0x0003df52) hwr_training_navi_pane_g3_ParamLimits

0x918f,	// (0x0003df52) hwr_training_navi_pane_g3

0x919f,	// (0x0003df62) hwr_training_navi_pane_g4_ParamLimits

0x919f,	// (0x0003df62) hwr_training_navi_pane_g4

0x0004,

0xf775,	// (0x00044538) hwr_training_navi_pane_g_ParamLimits

0xf775,	// (0x00044538) hwr_training_navi_pane_g

0x91b9,	// (0x0003df7c) hwr_training_navi_pane_t1

0x91c7,	// (0x0003df8a) list_single_hwr_training_instruct_pane_ParamLimits

0x91c7,	// (0x0003df8a) list_single_hwr_training_instruct_pane

0x3d6a,	// (0x00038b2d) list_single_hwr_training_instruct_pane_t1

0x354d,	// (0x00038310) bg_frame_shadow_pane_g1

0x3d79,	// (0x00038b3c) bg_frame_shadow_pane_g2

0x3d81,	// (0x00038b44) bg_frame_shadow_pane_g3

0x3d89,	// (0x00038b4c) bg_frame_shadow_pane_g4

0x3d91,	// (0x00038b54) bg_frame_shadow_pane_g5

0x3d99,	// (0x00038b5c) bg_frame_shadow_pane_g6

0x3da1,	// (0x00038b64) bg_frame_shadow_pane_g7

0x1408,	// (0x000361cb) bg_frame_shadow_pane_g8

0x0007,

0xf780,	// (0x00044543) bg_frame_shadow_pane_g

0x0bbc,	// (0x0003597f) main_video_tele_dialer_pane

0x91f0,	// (0x0003dfb3) aid_size_cell_video_keypad_ParamLimits

0x91f0,	// (0x0003dfb3) aid_size_cell_video_keypad

0x9200,	// (0x0003dfc3) grid_video_dialer_keypad_pane_ParamLimits

0x9200,	// (0x0003dfc3) grid_video_dialer_keypad_pane

0x9234,	// (0x0003dff7) video_down_pane_cp_ParamLimits

0x9234,	// (0x0003dff7) video_down_pane_cp

0x925e,	// (0x0003e021) cell_video_dialer_keypad_pane_ParamLimits

0x925e,	// (0x0003e021) cell_video_dialer_keypad_pane

0x3da9,	// (0x00038b6c) bg_button_pane_cp08_ParamLimits

0x3da9,	// (0x00038b6c) bg_button_pane_cp08

0x9273,	// (0x0003e036) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9273,	// (0x0003e036) cell_video_dialer_keypad_pane_g1

0xd42b,	// (0x000421ee) mup3_rocker2_pane_ParamLimits

0xd42b,	// (0x000421ee) mup3_rocker2_pane

0x12fb,	// (0x000360be) mup3_rocker2_pane_g1

0x8114,	// (0x0003ced7) main_dialer2_pane

0x0bbc,	// (0x0003597f) main_mp4_pane

0x92cb,	// (0x0003e08e) main_mp4_pane_g1_ParamLimits

0x92cb,	// (0x0003e08e) main_mp4_pane_g1

0x92ed,	// (0x0003e0b0) main_mp4_pane_g2_ParamLimits

0x92ed,	// (0x0003e0b0) main_mp4_pane_g2

0x930b,	// (0x0003e0ce) main_mp4_pane_g3_ParamLimits

0x930b,	// (0x0003e0ce) main_mp4_pane_g3

0x9344,	// (0x0003e107) main_mp4_pane_g4_ParamLimits

0x9344,	// (0x0003e107) main_mp4_pane_g4

0x936c,	// (0x0003e12f) main_mp4_pane_g5_ParamLimits

0x936c,	// (0x0003e12f) main_mp4_pane_g5

0x0007,

0xf7a0,	// (0x00044563) main_mp4_pane_g_ParamLimits

0xf7a0,	// (0x00044563) main_mp4_pane_g

0x93d4,	// (0x0003e197) main_mp4_pane_t1_ParamLimits

0x93d4,	// (0x0003e197) main_mp4_pane_t1

0x9436,	// (0x0003e1f9) main_mp4_pane_t2_ParamLimits

0x9436,	// (0x0003e1f9) main_mp4_pane_t2

0x949a,	// (0x0003e25d) main_mp4_pane_t3_ParamLimits

0x949a,	// (0x0003e25d) main_mp4_pane_t3

0x94f8,	// (0x0003e2bb) main_mp4_pane_t4_ParamLimits

0x94f8,	// (0x0003e2bb) main_mp4_pane_t4

0x0003,

0xf7b1,	// (0x00044574) main_mp4_pane_t_ParamLimits

0xf7b1,	// (0x00044574) main_mp4_pane_t

0x9556,	// (0x0003e319) mp4_progress_pane_ParamLimits

0x9556,	// (0x0003e319) mp4_progress_pane

0xd437,	// (0x000421fa) mp4_rocker_pane_ParamLimits

0xd437,	// (0x000421fa) mp4_rocker_pane

0xd44b,	// (0x0004220e) mp4_progress_pane_t1

0xd46a,	// (0x0004222d) mp4_progress_pane_t2

0x0001,

0xf7ba,	// (0x0004457d) mp4_progress_pane_t

0xd489,	// (0x0004224c) mup_progress_pane_cp04

0x12fb,	// (0x000360be) mp4_rocker_pane_g1

0x12af,	// (0x00036072) aid_cell_size_keypad2_ParamLimits

0x12af,	// (0x00036072) aid_cell_size_keypad2

0x12af,	// (0x00036072) dialer2_ne_pane_ParamLimits

0x12af,	// (0x00036072) dialer2_ne_pane

0x12af,	// (0x00036072) grid_dialer2_keypad_pane_ParamLimits

0x12af,	// (0x00036072) grid_dialer2_keypad_pane

0x36f7,	// (0x000384ba) bg_popup_call_pane_cp07_ParamLimits

0x36f7,	// (0x000384ba) bg_popup_call_pane_cp07

0x9592,	// (0x0003e355) dialer2_ne_pane_t1_ParamLimits

0x9592,	// (0x0003e355) dialer2_ne_pane_t1

0x3a34,	// (0x000387f7) cell_dialer2_keypad_pane_ParamLimits

0x3a34,	// (0x000387f7) cell_dialer2_keypad_pane

0x32ca,	// (0x0003808d) bg_button_pane_pane_cp04_ParamLimits

0x32ca,	// (0x0003808d) bg_button_pane_pane_cp04

0x12bd,	// (0x00036080) cell_dialer2_keypad_pane_g1_ParamLimits

0x12bd,	// (0x00036080) cell_dialer2_keypad_pane_g1

0x615c,	// (0x0003af1f) aid_placing_vt_set_content_ParamLimits

0x615c,	// (0x0003af1f) aid_placing_vt_set_content

0x6188,	// (0x0003af4b) aid_placing_vt_set_title_ParamLimits

0x6188,	// (0x0003af4b) aid_placing_vt_set_title

0x0bbc,	// (0x0003597f) main_image3_pane

0x95eb,	// (0x0003e3ae) area_side_right_pane_cp01_ParamLimits

0x95eb,	// (0x0003e3ae) area_side_right_pane_cp01

0x12d9,	// (0x0003609c) main_image3_pane_g1_ParamLimits

0x12d9,	// (0x0003609c) main_image3_pane_g1

0x9618,	// (0x0003e3db) main_image3_pane_g2_ParamLimits

0x9618,	// (0x0003e3db) main_image3_pane_g2

0x9631,	// (0x0003e3f4) main_image3_pane_g3_ParamLimits

0x9631,	// (0x0003e3f4) main_image3_pane_g3

0x964a,	// (0x0003e40d) main_image3_pane_g4_ParamLimits

0x964a,	// (0x0003e40d) main_image3_pane_g4

0x0003,

0xf7c9,	// (0x0004458c) main_image3_pane_g_ParamLimits

0xf7c9,	// (0x0004458c) main_image3_pane_g

0x9663,	// (0x0003e426) main_image3_pane_t1_ParamLimits

0x9663,	// (0x0003e426) main_image3_pane_t1

0x9688,	// (0x0003e44b) main_image3_pane_t2_ParamLimits

0x9688,	// (0x0003e44b) main_image3_pane_t2

0x96a7,	// (0x0003e46a) main_image3_pane_t3_ParamLimits

0x96a7,	// (0x0003e46a) main_image3_pane_t3

0x0003,

0xf7d2,	// (0x00044595) main_image3_pane_t_ParamLimits

0xf7d2,	// (0x00044595) main_image3_pane_t

0x12af,	// (0x00036072) grid_sctrl_middle_pane_cp01_ParamLimits

0x12af,	// (0x00036072) grid_sctrl_middle_pane_cp01

0x9708,	// (0x0003e4cb) cell_sctrl_middle_pane_cp01_ParamLimits

0x9708,	// (0x0003e4cb) cell_sctrl_middle_pane_cp01

0x9719,	// (0x0003e4dc) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9719,	// (0x0003e4dc) cell_sctrl_middle_pane_cp01_g1

0x0bbc,	// (0x0003597f) main_call4_pane

0x9726,	// (0x0003e4e9) aid_size_button_call4_ParamLimits

0x9726,	// (0x0003e4e9) aid_size_button_call4

0x975c,	// (0x0003e51f) call4_windows_pane_ParamLimits

0x975c,	// (0x0003e51f) call4_windows_pane

0x9771,	// (0x0003e534) grid_call4_button_pane_ParamLimits

0x9771,	// (0x0003e534) grid_call4_button_pane

0x979f,	// (0x0003e562) call4_windows_conf_pane

0x97b4,	// (0x0003e577) popup_call4_audio_first_window_ParamLimits

0x97b4,	// (0x0003e577) popup_call4_audio_first_window

0x9804,	// (0x0003e5c7) popup_call4_audio_second_window_ParamLimits

0x9804,	// (0x0003e5c7) popup_call4_audio_second_window

0x981d,	// (0x0003e5e0) popup_call4_audio_wait_window_ParamLimits

0x981d,	// (0x0003e5e0) popup_call4_audio_wait_window

0x982b,	// (0x0003e5ee) cell_call4_button_pane_ParamLimits

0x982b,	// (0x0003e5ee) cell_call4_button_pane

0x984e,	// (0x0003e611) bg_button_pane_cp09_ParamLimits

0x984e,	// (0x0003e611) bg_button_pane_cp09

0x985a,	// (0x0003e61d) cell_call4_button_pane_g1_ParamLimits

0x985a,	// (0x0003e61d) cell_call4_button_pane_g1

0x9867,	// (0x0003e62a) cell_call4_button_pane_t1_ParamLimits

0x9867,	// (0x0003e62a) cell_call4_button_pane_t1

0xd4d2,	// (0x00042295) popup_call4_audio_conf_window_ParamLimits

0xd4d2,	// (0x00042295) popup_call4_audio_conf_window

0x8cda,	// (0x0003da9d) mup3_progress_pane_t1_ParamLimits

0x8cf9,	// (0x0003dabc) mup3_progress_pane_t2_ParamLimits

0x394d,	// (0x00038710) mup3_progress_pane_t3_ParamLimits

0xf6b1,	// (0x00044474) mup3_progress_pane_t_ParamLimits

0x396a,	// (0x0003872d) mup_progress_pane_cp03_ParamLimits

0x3982,	// (0x00038745) mup3_control_keys_pane_g4_copy1

0xd437,	// (0x000421fa) mp4_rocker2_pane_ParamLimits

0xd437,	// (0x000421fa) mp4_rocker2_pane

0x3982,	// (0x00038745) mp4_rocker2_pane_g1

0x3982,	// (0x00038745) mp4_rocker2_pane_g2

0x3982,	// (0x00038745) mp4_rocker2_pane_g3

0x3982,	// (0x00038745) mp4_rocker2_pane_g4

0x3982,	// (0x00038745) mp4_rocker2_pane_g5

0x0004,

0xf7db,	// (0x0004459e) mp4_rocker2_pane_g

0x0bbc,	// (0x0003597f) main_camera4_pane

0x0bbc,	// (0x0003597f) main_video4_pane

0x9210,	// (0x0003dfd3) main_video_tele_dialer_pane_t1_ParamLimits

0x9210,	// (0x0003dfd3) main_video_tele_dialer_pane_t1

0x9222,	// (0x0003dfe5) main_video_tele_dialer_pane_t2_ParamLimits

0x9222,	// (0x0003dfe5) main_video_tele_dialer_pane_t2

0x0001,

0xf791,	// (0x00044554) main_video_tele_dialer_pane_t_ParamLimits

0xf791,	// (0x00044554) main_video_tele_dialer_pane_t

0x98c3,	// (0x0003e686) cam4_autofocus_pane_ParamLimits

0x98c3,	// (0x0003e686) cam4_autofocus_pane

0x98dd,	// (0x0003e6a0) cam4_image_uncrop_pane_ParamLimits

0x98dd,	// (0x0003e6a0) cam4_image_uncrop_pane

0x98f4,	// (0x0003e6b7) cam4_indicators_pane_ParamLimits

0x98f4,	// (0x0003e6b7) cam4_indicators_pane

0x9910,	// (0x0003e6d3) main_camera4_pane_g1_ParamLimits

0x9910,	// (0x0003e6d3) main_camera4_pane_g1

0x991c,	// (0x0003e6df) main_camera4_pane_g2_ParamLimits

0x991c,	// (0x0003e6df) main_camera4_pane_g2

0x991c,	// (0x0003e6df) main_camera4_pane_g3_ParamLimits

0x991c,	// (0x0003e6df) main_camera4_pane_g3

0x9928,	// (0x0003e6eb) main_camera4_pane_g4_ParamLimits

0x9928,	// (0x0003e6eb) main_camera4_pane_g4

0x9934,	// (0x0003e6f7) main_camera4_pane_g5_ParamLimits

0x9934,	// (0x0003e6f7) main_camera4_pane_g5

0x0005,

0xf7e6,	// (0x000445a9) main_camera4_pane_g_ParamLimits

0xf7e6,	// (0x000445a9) main_camera4_pane_g

0x994e,	// (0x0003e711) main_camera4_pane_t1_ParamLimits

0x994e,	// (0x0003e711) main_camera4_pane_t1

0x12bd,	// (0x00036080) bg_tb_trans_pane_cp06

0x999e,	// (0x0003e761) cam4_indicators_pane_g1

0x99af,	// (0x0003e772) cam4_indicators_pane_g2

0x0002,

0xf801,	// (0x000445c4) cam4_indicators_pane_g

0x99c7,	// (0x0003e78a) cam4_indicators_pane_t1

0x99f1,	// (0x0003e7b4) main_video4_pane_g1_ParamLimits

0x99f1,	// (0x0003e7b4) main_video4_pane_g1

0x99fd,	// (0x0003e7c0) main_video4_pane_g2_ParamLimits

0x99fd,	// (0x0003e7c0) main_video4_pane_g2

0x9a09,	// (0x0003e7cc) main_video4_pane_g3_ParamLimits

0x9a09,	// (0x0003e7cc) main_video4_pane_g3

0x9a15,	// (0x0003e7d8) main_video4_pane_g4_ParamLimits

0x9a15,	// (0x0003e7d8) main_video4_pane_g4

0x0004,

0xf808,	// (0x000445cb) main_video4_pane_g_ParamLimits

0xf808,	// (0x000445cb) main_video4_pane_g

0x9a35,	// (0x0003e7f8) vid4_indicators_pane_ParamLimits

0x9a35,	// (0x0003e7f8) vid4_indicators_pane

0x9a54,	// (0x0003e817) video4_image_uncrop_cif_pane_ParamLimits

0x9a54,	// (0x0003e817) video4_image_uncrop_cif_pane

0x9a63,	// (0x0003e826) video4_image_uncrop_nhd_pane_ParamLimits

0x9a63,	// (0x0003e826) video4_image_uncrop_nhd_pane

0x98dd,	// (0x0003e6a0) video4_image_uncrop_vga_pane_ParamLimits

0x98dd,	// (0x0003e6a0) video4_image_uncrop_vga_pane

0x0fe3,	// (0x00035da6) bg_tb_trans_pane_cp07

0x9a78,	// (0x0003e83b) vid4_indicators_pane_g1

0x9a8c,	// (0x0003e84f) vid4_indicators_pane_g2

0x9aa0,	// (0x0003e863) vid4_indicators_pane_g3

0x0004,

0xf813,	// (0x000445d6) vid4_indicators_pane_g

0x9acd,	// (0x0003e890) vid4_indicators_pane_t1

0x9ae4,	// (0x0003e8a7) cam4_autofocus_pane_g1

0x9aec,	// (0x0003e8af) cam4_autofocus_pane_g2

0x9af4,	// (0x0003e8b7) cam4_autofocus_pane_g3

0x0002,

0xf81e,	// (0x000445e1) cam4_autofocus_pane_g

0x9afc,	// (0x0003e8bf) cam4_autofocus_pane_g3_copy1

0x9242,	// (0x0003e005) video_down_pane_cp_t1

0x9250,	// (0x0003e013) video_down_pane_cp_t2

0x0001,

0xf796,	// (0x00044559) video_down_pane_cp_t

0x12af,	// (0x00036072) popup_vitu2_window_ParamLimits

0x12af,	// (0x00036072) popup_vitu2_window

0x9b04,	// (0x0003e8c7) aid_size_cell2_itu2_ParamLimits

0x9b04,	// (0x0003e8c7) aid_size_cell2_itu2

0x9b26,	// (0x0003e8e9) aid_size_cell_itu2_ParamLimits

0x9b26,	// (0x0003e8e9) aid_size_cell_itu2

0x36f7,	// (0x000384ba) bg_popup_window_pane_cp09_ParamLimits

0x36f7,	// (0x000384ba) bg_popup_window_pane_cp09

0x9b6a,	// (0x0003e92d) field_vitu2_entry_pane_ParamLimits

0x9b6a,	// (0x0003e92d) field_vitu2_entry_pane

0x9b8a,	// (0x0003e94d) grid_vitu2_function_pane_ParamLimits

0x9b8a,	// (0x0003e94d) grid_vitu2_function_pane

0x9bca,	// (0x0003e98d) grid_vitu2_itu_pane_ParamLimits

0x9bca,	// (0x0003e98d) grid_vitu2_itu_pane

0x9c3e,	// (0x0003ea01) cell_vitu2_itu_pane_ParamLimits

0x9c3e,	// (0x0003ea01) cell_vitu2_itu_pane

0x9c57,	// (0x0003ea1a) cell_vitu2_function_pane_ParamLimits

0x9c57,	// (0x0003ea1a) cell_vitu2_function_pane

0xd4e6,	// (0x000422a9) bg_popup_call_pane_cp08_ParamLimits

0xd4e6,	// (0x000422a9) bg_popup_call_pane_cp08

0xd4fd,	// (0x000422c0) field_vitu2_entry_pane_g1

0xd509,	// (0x000422cc) field_vitu2_entry_pane_g2

0x0002,

0xf825,	// (0x000445e8) field_vitu2_entry_pane_g

0x9c98,	// (0x0003ea5b) field_vitu2_entry_pane_t1_ParamLimits

0x9c98,	// (0x0003ea5b) field_vitu2_entry_pane_t1

0xd515,	// (0x000422d8) field_vitu2_entry_pane_t2_ParamLimits

0xd515,	// (0x000422d8) field_vitu2_entry_pane_t2

0x0001,

0xf82c,	// (0x000445ef) field_vitu2_entry_pane_t_ParamLimits

0xf82c,	// (0x000445ef) field_vitu2_entry_pane_t

0x843e,	// (0x0003d201) bg_button_pane_cp010_ParamLimits

0x843e,	// (0x0003d201) bg_button_pane_cp010

0x9cd3,	// (0x0003ea96) cell_vitu2_itu_pane_g1

0x9cf9,	// (0x0003eabc) cell_vitu2_itu_pane_t1_ParamLimits

0x9cf9,	// (0x0003eabc) cell_vitu2_itu_pane_t1

0x9d45,	// (0x0003eb08) cell_vitu2_itu_pane_t2_ParamLimits

0x9d45,	// (0x0003eb08) cell_vitu2_itu_pane_t2

0x0002,

0xf836,	// (0x000445f9) cell_vitu2_itu_pane_t_ParamLimits

0xf836,	// (0x000445f9) cell_vitu2_itu_pane_t

0x0fe3,	// (0x00035da6) bg_button_pane_cp011

0x9e0d,	// (0x0003ebd0) cell_vitu2_function_pane_g1

0x0bbc,	// (0x0003597f) main_myfav_hc_pane

0x96e9,	// (0x0003e4ac) popup_image3_note_pane_ParamLimits

0x96e9,	// (0x0003e4ac) popup_image3_note_pane

0x96f7,	// (0x0003e4ba) popup_image3_tool_bar_pane_ParamLimits

0x96f7,	// (0x0003e4ba) popup_image3_tool_bar_pane

0x9dbb,	// (0x0003eb7e) cell_vitu2_itu_pane_t3_ParamLimits

0x9dbb,	// (0x0003eb7e) cell_vitu2_itu_pane_t3

0x0bbc,	// (0x0003597f) bg_popup_trans_pane

0xd53a,	// (0x000422fd) grid_image3_tool_bar_pane

0xd544,	// (0x00042307) bg_popup_trans_pane_g1

0x177a,	// (0x0003653d) bg_popup_trans_pane_g2

0xd54c,	// (0x0004230f) bg_popup_trans_pane_g3

0xd554,	// (0x00042317) bg_popup_trans_pane_g4

0xd55c,	// (0x0004231f) bg_popup_trans_pane_g5

0xd564,	// (0x00042327) bg_popup_trans_pane_g6

0xd56c,	// (0x0004232f) bg_popup_trans_pane_g7

0xd574,	// (0x00042337) bg_popup_trans_pane_g8

0x175a,	// (0x0003651d) bg_popup_trans_pane_g9

0x0008,

0xf83d,	// (0x00044600) bg_popup_trans_pane_g

0xd57c,	// (0x0004233f) cell_image3_tool_bar_pane_ParamLimits

0xd57c,	// (0x0004233f) cell_image3_tool_bar_pane

0x12fb,	// (0x000360be) cell_image3_tool_bar_pane_g1

0x0bbc,	// (0x0003597f) bg_popup_trans_pane_cp1

0xd590,	// (0x00042353) popup_image3_note_pane_t1

0xd59e,	// (0x00042361) popup_image3_note_pane_t2

0xd5ac,	// (0x0004236f) popup_image3_note_pane_t3

0x0002,

0xf850,	// (0x00044613) popup_image3_note_pane_t

0xd5ba,	// (0x0004237d) popup_image3_note_pane_t3_copy1

0x9e21,	// (0x0003ebe4) bg_myfav_hc_instruction_pane_ParamLimits

0x9e21,	// (0x0003ebe4) bg_myfav_hc_instruction_pane

0x9e39,	// (0x0003ebfc) cell_myfav_contact_pane_ParamLimits

0x9e39,	// (0x0003ebfc) cell_myfav_contact_pane

0x9e53,	// (0x0003ec16) cell_myfav_contact_pane_cp1_ParamLimits

0x9e53,	// (0x0003ec16) cell_myfav_contact_pane_cp1

0x9e6b,	// (0x0003ec2e) cell_myfav_contact_pane_cp2_ParamLimits

0x9e6b,	// (0x0003ec2e) cell_myfav_contact_pane_cp2

0x9e83,	// (0x0003ec46) cell_myfav_contact_pane_cp3_ParamLimits

0x9e83,	// (0x0003ec46) cell_myfav_contact_pane_cp3

0x9e9a,	// (0x0003ec5d) cell_myfav_contact_pane_cp4_ParamLimits

0x9e9a,	// (0x0003ec5d) cell_myfav_contact_pane_cp4

0x9eb0,	// (0x0003ec73) cell_myfav_contact_pane_cp5_ParamLimits

0x9eb0,	// (0x0003ec73) cell_myfav_contact_pane_cp5

0x9ec4,	// (0x0003ec87) cell_myfav_contact_pane_cp6_ParamLimits

0x9ec4,	// (0x0003ec87) cell_myfav_contact_pane_cp6

0x9ed8,	// (0x0003ec9b) cell_myfav_contact_pane_cp7_ParamLimits

0x9ed8,	// (0x0003ec9b) cell_myfav_contact_pane_cp7

0xd5c8,	// (0x0004238b) listscroll_gen_pane_cp05

0x9ef0,	// (0x0003ecb3) main_myfav_hc_pane_g1_ParamLimits

0x9ef0,	// (0x0003ecb3) main_myfav_hc_pane_g1

0x9f06,	// (0x0003ecc9) main_myfav_hc_pane_g2_ParamLimits

0x9f06,	// (0x0003ecc9) main_myfav_hc_pane_g2

0x0002,

0xf857,	// (0x0004461a) main_myfav_hc_pane_g_ParamLimits

0xf857,	// (0x0004461a) main_myfav_hc_pane_g

0x9f36,	// (0x0003ecf9) main_myfav_hc_pane_t1_ParamLimits

0x9f36,	// (0x0003ecf9) main_myfav_hc_pane_t1

0xd5d1,	// (0x00042394) main_myfav_hc_pane_t2_ParamLimits

0xd5d1,	// (0x00042394) main_myfav_hc_pane_t2

0xd5e3,	// (0x000423a6) main_myfav_hc_pane_t3_ParamLimits

0xd5e3,	// (0x000423a6) main_myfav_hc_pane_t3

0x9f4d,	// (0x0003ed10) main_myfav_hc_pane_t4_ParamLimits

0x9f4d,	// (0x0003ed10) main_myfav_hc_pane_t4

0x0004,

0xf85e,	// (0x00044621) main_myfav_hc_pane_t_ParamLimits

0xf85e,	// (0x00044621) main_myfav_hc_pane_t

0x12fb,	// (0x000360be) bg_myfav_hc_instruction_pane_g1

0xd5f5,	// (0x000423b8) cell_myfav_contact_pane_g1_ParamLimits

0xd5f5,	// (0x000423b8) cell_myfav_contact_pane_g1

0xd5f5,	// (0x000423b8) cell_myfav_contact_pane_g2_ParamLimits

0xd5f5,	// (0x000423b8) cell_myfav_contact_pane_g2

0xd601,	// (0x000423c4) cell_myfav_contact_pane_g3_ParamLimits

0xd601,	// (0x000423c4) cell_myfav_contact_pane_g3

0x12cb,	// (0x0003608e) cell_myfav_contact_pane_g4_ParamLimits

0x12cb,	// (0x0003608e) cell_myfav_contact_pane_g4

0xd60e,	// (0x000423d1) cell_myfav_contact_pane_g5_ParamLimits

0xd60e,	// (0x000423d1) cell_myfav_contact_pane_g5

0x0004,

0xf869,	// (0x0004462c) cell_myfav_contact_pane_g_ParamLimits

0xf869,	// (0x0004462c) cell_myfav_contact_pane_g

0x9f1e,	// (0x0003ece1) main_myfav_hc_pane_g3_ParamLimits

0x9f1e,	// (0x0003ece1) main_myfav_hc_pane_g3

0x4ac6,	// (0x00039889) popup_adpt_find_window

0x9f77,	// (0x0003ed3a) afind_page_pane_ParamLimits

0x9f77,	// (0x0003ed3a) afind_page_pane

0x9f84,	// (0x0003ed47) aid_size_cell_afind_ParamLimits

0x9f84,	// (0x0003ed47) aid_size_cell_afind

0x9f9e,	// (0x0003ed61) bg_popup_sub_pane_cp09_ParamLimits

0x9f9e,	// (0x0003ed61) bg_popup_sub_pane_cp09

0x9faf,	// (0x0003ed72) find_pane_cp01_ParamLimits

0x9faf,	// (0x0003ed72) find_pane_cp01

0xd61a,	// (0x000423dd) grid_afind_control_pane_ParamLimits

0xd61a,	// (0x000423dd) grid_afind_control_pane

0x9fc2,	// (0x0003ed85) grid_afind_pane_ParamLimits

0x9fc2,	// (0x0003ed85) grid_afind_pane

0x9fde,	// (0x0003eda1) cell_afind_pane_ParamLimits

0x9fde,	// (0x0003eda1) cell_afind_pane

0x12fb,	// (0x000360be) afind_page_pane_g1

0xa026,	// (0x0003ede9) afind_page_pane_g2

0xa02e,	// (0x0003edf1) afind_page_pane_g3

0x0002,

0xf874,	// (0x00044637) afind_page_pane_g

0xa036,	// (0x0003edf9) afind_page_pane_t1

0xd640,	// (0x00042403) cell_afind_grid_control_pane_ParamLimits

0xd640,	// (0x00042403) cell_afind_grid_control_pane

0xd64f,	// (0x00042412) bg_button_pane_cp69_ParamLimits

0xd64f,	// (0x00042412) bg_button_pane_cp69

0xa044,	// (0x0003ee07) cell_afind_pane_g1_ParamLimits

0xa044,	// (0x0003ee07) cell_afind_pane_g1

0xa051,	// (0x0003ee14) cell_afind_pane_t1_ParamLimits

0xa051,	// (0x0003ee14) cell_afind_pane_t1

0xd65b,	// (0x0004241e) bg_button_pane_cp72

0xd663,	// (0x00042426) cell_afind_grid_control_pane_g1

0x7cbd,	// (0x0003ca80) aid_image_placing_area_ParamLimits

0x7cbd,	// (0x0003ca80) aid_image_placing_area

0x12bd,	// (0x00036080) field_vitu_entry_pane_g1_ParamLimits

0x12bd,	// (0x00036080) field_vitu_entry_pane_g1

0x12bd,	// (0x00036080) field_vitu_entry_pane_g2_ParamLimits

0x12bd,	// (0x00036080) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x00043f5c) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x00043f5c) field_vitu_entry_pane_g

0x3c6f,	// (0x00038a32) cell_vitu_itu_pane_g1_ParamLimits

0x3c52,	// (0x00038a15) cell_vitu_itu_pane_t3_ParamLimits

0x3c52,	// (0x00038a15) cell_vitu_itu_pane_t3

0xd44b,	// (0x0004220e) mp4_progress_pane_t1_ParamLimits

0xd46a,	// (0x0004222d) mp4_progress_pane_t2_ParamLimits

0xf7ba,	// (0x0004457d) mp4_progress_pane_t_ParamLimits

0xd489,	// (0x0004224c) mup_progress_pane_cp04_ParamLimits

0x9f61,	// (0x0003ed24) main_myfav_hc_pane_t5_ParamLimits

0x9f61,	// (0x0003ed24) main_myfav_hc_pane_t5

0x55ab,	// (0x0003a36e) aid_zoom_text_primary

0x4ac6,	// (0x00039889) popup_adpt_find_window_ParamLimits

0x0fe3,	// (0x00035da6) main_cam_set_pane

0x9902,	// (0x0003e6c5) cam4_zoom_pane_ParamLimits

0x9902,	// (0x0003e6c5) cam4_zoom_pane

0xa063,	// (0x0003ee26) main_cam_set_pane_g1_ParamLimits

0xa063,	// (0x0003ee26) main_cam_set_pane_g1

0xa071,	// (0x0003ee34) main_cam_set_pane_g2_ParamLimits

0xa071,	// (0x0003ee34) main_cam_set_pane_g2

0x0001,

0xf87b,	// (0x0004463e) main_cam_set_pane_g_ParamLimits

0xf87b,	// (0x0004463e) main_cam_set_pane_g

0xa07d,	// (0x0003ee40) main_cam_set_pane_t1_ParamLimits

0xa07d,	// (0x0003ee40) main_cam_set_pane_t1

0xa099,	// (0x0003ee5c) main_cset_listscroll_pane_ParamLimits

0xa099,	// (0x0003ee5c) main_cset_listscroll_pane

0xa0cb,	// (0x0003ee8e) main_cset_slider_pane_ParamLimits

0xa0cb,	// (0x0003ee8e) main_cset_slider_pane

0xd674,	// (0x00042437) main_cset_list_pane_ParamLimits

0xd674,	// (0x00042437) main_cset_list_pane

0xd684,	// (0x00042447) scroll_pane_cp028

0xa0ea,	// (0x0003eead) aid_area_touch_slider

0xa106,	// (0x0003eec9) cset_slider_pane

0xa129,	// (0x0003eeec) main_cset_slider_pane_g1

0xa13e,	// (0x0003ef01) main_cset_slider_pane_g2

0x0011,

0xf880,	// (0x00044643) main_cset_slider_pane_g

0xd6bd,	// (0x00042480) main_cset_slider_pane_t1

0xa204,	// (0x0003efc7) main_cset_slider_pane_t2

0xa21e,	// (0x0003efe1) main_cset_slider_pane_t3

0xa238,	// (0x0003effb) main_cset_slider_pane_t4

0xa256,	// (0x0003f019) main_cset_slider_pane_t5

0xa274,	// (0x0003f037) main_cset_slider_pane_t6

0xa28b,	// (0x0003f04e) main_cset_slider_pane_t7

0x000e,

0xf8a5,	// (0x00044668) main_cset_slider_pane_t

0xa399,	// (0x0003f15c) cset_list_set_pane_ParamLimits

0xa399,	// (0x0003f15c) cset_list_set_pane

0xd757,	// (0x0004251a) aid_position_infowindow_above

0xd75f,	// (0x00042522) aid_position_infowindow_below

0x4d1f,	// (0x00039ae2) cset_list_set_pane_g1_ParamLimits

0x4d1f,	// (0x00039ae2) cset_list_set_pane_g1

0x4d2b,	// (0x00039aee) cset_list_set_pane_g3_ParamLimits

0x4d2b,	// (0x00039aee) cset_list_set_pane_g3

0x0001,

0xf8c4,	// (0x00044687) cset_list_set_pane_g_ParamLimits

0xf8c4,	// (0x00044687) cset_list_set_pane_g

0x4d3a,	// (0x00039afd) cset_list_set_pane_t1_ParamLimits

0x4d3a,	// (0x00039afd) cset_list_set_pane_t1

0x0fe3,	// (0x00035da6) list_highlight_pane_cp021_ParamLimits

0x0fe3,	// (0x00035da6) list_highlight_pane_cp021

0x2049,	// (0x00036e0c) cset_slider_pane_g1

0x205b,	// (0x00036e1e) cset_slider_pane_g2

0x2052,	// (0x00036e15) cset_slider_pane_g3

0x0002,

0xf8c9,	// (0x0004468c) cset_slider_pane_g

0xa3b2,	// (0x0003f175) aid_area_touch_cam4_zoom

0xa3ba,	// (0x0003f17d) cam4_zoom_cont_pane

0xa3c2,	// (0x0003f185) cam4_zoom_pane_g1

0xa3ca,	// (0x0003f18d) cam4_zoom_pane_g2

0xa3d2,	// (0x0003f195) cam4_zoom_pane_g3

0x0002,

0xf8d0,	// (0x00044693) cam4_zoom_pane_g

0xd767,	// (0x0004252a) cam4_zoom_cont_pane_g1

0xd770,	// (0x00042533) cam4_zoom_cont_pane_g2

0xd779,	// (0x0004253c) cam4_zoom_cont_pane_g3

0x0002,

0xf8d7,	// (0x0004469a) cam4_zoom_cont_pane_g

0x9740,	// (0x0003e503) call4_image_pane_ParamLimits

0x9740,	// (0x0003e503) call4_image_pane

0x979f,	// (0x0003e562) call4_windows_conf_pane_ParamLimits

0x97e2,	// (0x0003e5a5) popup_call4_audio_in_window_ParamLimits

0x97e2,	// (0x0003e5a5) popup_call4_audio_in_window

0x0bbc,	// (0x0003597f) bg_popup_call2_act_pane_cp02

0xd4ca,	// (0x0004228d) call4_list_conf_pane

0x12fb,	// (0x000360be) call4_image_pane_g1

0x12fb,	// (0x000360be) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00043e4f) call4_image_pane_g

0xd782,	// (0x00042545) list_single_graphic_popup_conf4_pane_ParamLimits

0xd782,	// (0x00042545) list_single_graphic_popup_conf4_pane

0x0bbc,	// (0x0003597f) list_highlight_pane_cp022

0xd795,	// (0x00042558) list_single_graphic_popup_conf4_pane_g1

0x1c5a,	// (0x00036a1d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8de,	// (0x000446a1) list_single_graphic_popup_conf4_pane_g

0xd79d,	// (0x00042560) list_single_graphic_popup_conf4_pane_t1

0x62ec,	// (0x0003b0af) popup_vtel_slider_window_ParamLimits

0x62ec,	// (0x0003b0af) popup_vtel_slider_window

0xd49c,	// (0x0004225f) dialer2_ne_pane_t2_ParamLimits

0xd49c,	// (0x0004225f) dialer2_ne_pane_t2

0x0001,

0xf7bf,	// (0x00044582) dialer2_ne_pane_t_ParamLimits

0xf7bf,	// (0x00044582) dialer2_ne_pane_t

0x0fe3,	// (0x00035da6) bg_popup_sub_pane_cp010_ParamLimits

0x0fe3,	// (0x00035da6) bg_popup_sub_pane_cp010

0xa3da,	// (0x0003f19d) popup_vtel_slider_window_g1_ParamLimits

0xa3da,	// (0x0003f19d) popup_vtel_slider_window_g1

0xa3e6,	// (0x0003f1a9) popup_vtel_slider_window_g2_ParamLimits

0xa3e6,	// (0x0003f1a9) popup_vtel_slider_window_g2

0x0003,

0xf8e3,	// (0x000446a6) popup_vtel_slider_window_g_ParamLimits

0xf8e3,	// (0x000446a6) popup_vtel_slider_window_g

0xa42e,	// (0x0003f1f1) vtel_slider_pane_ParamLimits

0xa42e,	// (0x0003f1f1) vtel_slider_pane

0xa43d,	// (0x0003f200) vtel_slider_pane_g1_ParamLimits

0xa43d,	// (0x0003f200) vtel_slider_pane_g1

0xa44a,	// (0x0003f20d) vtel_slider_pane_g2_ParamLimits

0xa44a,	// (0x0003f20d) vtel_slider_pane_g2

0xa457,	// (0x0003f21a) vtel_slider_pane_g3_ParamLimits

0xa457,	// (0x0003f21a) vtel_slider_pane_g3

0xa43d,	// (0x0003f200) vtel_slider_pane_g4_ParamLimits

0xa43d,	// (0x0003f200) vtel_slider_pane_g4

0xa464,	// (0x0003f227) vtel_slider_pane_g5_ParamLimits

0xa464,	// (0x0003f227) vtel_slider_pane_g5

0x0004,

0xf8ec,	// (0x000446af) vtel_slider_pane_g_ParamLimits

0xf8ec,	// (0x000446af) vtel_slider_pane_g

0x0fe3,	// (0x00035da6) main_gallery2_pane

0x9b4c,	// (0x0003e90f) aid_size_row_itut2_dropdow_list_ParamLimits

0x9b4c,	// (0x0003e90f) aid_size_row_itut2_dropdow_list

0x9ba8,	// (0x0003e96b) grid_vitu2_function_top_pane_ParamLimits

0x9ba8,	// (0x0003e96b) grid_vitu2_function_top_pane

0x9bfc,	// (0x0003e9bf) popup_vitu2_dropdown_list_window_ParamLimits

0x9bfc,	// (0x0003e9bf) popup_vitu2_dropdown_list_window

0x9c1e,	// (0x0003e9e1) popup_vitu2_match_list_window

0xa471,	// (0x0003f234) cell_vitu2_function_top_pane_ParamLimits

0xa471,	// (0x0003f234) cell_vitu2_function_top_pane

0xa48b,	// (0x0003f24e) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa48b,	// (0x0003f24e) cell_vitu2_function_top_pane_cp01

0xa4a7,	// (0x0003f26a) cell_vitu2_function_top_wide_pane_ParamLimits

0xa4a7,	// (0x0003f26a) cell_vitu2_function_top_wide_pane

0x0fe3,	// (0x00035da6) bg_button_pane_cp012

0xa4c5,	// (0x0003f288) cell_vitu2_function_top_pane_g1

0xa4d9,	// (0x0003f29c) bg_button_pane_cp013_ParamLimits

0xa4d9,	// (0x0003f29c) bg_button_pane_cp013

0xa4f5,	// (0x0003f2b8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa4f5,	// (0x0003f2b8) cell_vitu2_function_top_wide_pane_g1

0x12af,	// (0x00036072) bg_popup_sub_pane_cp20

0xa50d,	// (0x0003f2d0) list_vitu2_match_list_pane

0xd544,	// (0x00042307) bg_popup_sub_pane_cp20_g1

0xd54c,	// (0x0004230f) bg_popup_sub_pane_cp20_g2

0x177a,	// (0x0003653d) bg_popup_sub_pane_cp20_g3

0xd554,	// (0x00042317) bg_popup_sub_pane_cp20_g4

0x175a,	// (0x0003651d) bg_popup_sub_pane_cp20_g5

0xd7b3,	// (0x00042576) bg_popup_sub_pane_cp20_g6

0xd564,	// (0x00042327) bg_popup_sub_pane_cp20_g7

0xd56c,	// (0x0004232f) bg_popup_sub_pane_cp20_g8

0xd574,	// (0x00042337) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8f7,	// (0x000446ba) bg_popup_sub_pane_cp20_g

0xa525,	// (0x0003f2e8) list_vitu2_match_list_item_pane_ParamLimits

0xa525,	// (0x0003f2e8) list_vitu2_match_list_item_pane

0xa537,	// (0x0003f2fa) list_vitu2_match_list_item_pane_t1

0x0bbc,	// (0x0003597f) bg_popup_sub_pane_cp21

0x1561,	// (0x00036324) grid_vitu2_dropdown_list_pane

0xa545,	// (0x0003f308) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa545,	// (0x0003f308) cell_vitu2_dropdown_list_char_pane

0xa567,	// (0x0003f32a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa567,	// (0x0003f32a) cell_vitu2_dropdown_list_ctrl_pane

0xd7bb,	// (0x0004257e) cell_vitu2_dropdown_list_char_pane_g1

0xd7c4,	// (0x00042587) cell_vitu2_dropdown_list_char_pane_g2

0xd7cd,	// (0x00042590) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf90a,	// (0x000446cd) cell_vitu2_dropdown_list_char_pane_g

0xa58f,	// (0x0003f352) cell_vitu2_dropdown_list_char_pane_t1

0xa59d,	// (0x0003f360) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa59d,	// (0x0003f360) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa5ad,	// (0x0003f370) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa5ad,	// (0x0003f370) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa5be,	// (0x0003f381) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa5be,	// (0x0003f381) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa5ce,	// (0x0003f391) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa5ce,	// (0x0003f391) cell_vitu2_dropdown_list_ctrl_pane_g4

0x12bd,	// (0x00036080) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x12bd,	// (0x00036080) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf911,	// (0x000446d4) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf911,	// (0x000446d4) cell_vitu2_dropdown_list_ctrl_pane_g

0xa5e7,	// (0x0003f3aa) aid_size_cell_gallery2_ParamLimits

0xa5e7,	// (0x0003f3aa) aid_size_cell_gallery2

0xa601,	// (0x0003f3c4) grid_gallery2_pane_ParamLimits

0xa601,	// (0x0003f3c4) grid_gallery2_pane

0xa618,	// (0x0003f3db) scroll_pane_cp029_ParamLimits

0xa618,	// (0x0003f3db) scroll_pane_cp029

0xa628,	// (0x0003f3eb) cell_gallery2_pane_ParamLimits

0xa628,	// (0x0003f3eb) cell_gallery2_pane

0x15b0,	// (0x00036373) cell_gallery2_pane_g2

0xa67d,	// (0x0003f440) cell_gallery2_pane_g3

0xd7d6,	// (0x00042599) cell_gallery2_pane_g4

0xd7de,	// (0x000425a1) cell_gallery2_pane_g5

0x1561,	// (0x00036324) grid_highlight_pane_cp10

0x9c1e,	// (0x0003e9e1) popup_vitu2_match_list_window_ParamLimits

0x9c30,	// (0x0003e9f3) popup_vitu2_query_window_ParamLimits

0x9c30,	// (0x0003e9f3) popup_vitu2_query_window

0x0bbc,	// (0x0003597f) bg_vitu2_candi_button_pane

0xd7bb,	// (0x0004257e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd7c4,	// (0x00042587) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd7cd,	// (0x00042590) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xa685,	// (0x0003f448) bg_button_pane_cp015

0xa69a,	// (0x0003f45d) bg_button_pane_cp016

0xa6a6,	// (0x0003f469) bg_button_pane_cp017

0x20db,	// (0x00036e9e) bg_popup_sub_pane_cp22

0xd7e6,	// (0x000425a9) popup_vitu2_query_window_g1

0xa6e6,	// (0x0003f4a9) popup_vitu2_query_window_g2

0x0002,

0xf91c,	// (0x000446df) popup_vitu2_query_window_g

0xa70a,	// (0x0003f4cd) popup_vitu2_query_window_t1_ParamLimits

0xa70a,	// (0x0003f4cd) popup_vitu2_query_window_t1

0xa73d,	// (0x0003f500) popup_vitu2_query_window_t2_ParamLimits

0xa73d,	// (0x0003f500) popup_vitu2_query_window_t2

0xa74f,	// (0x0003f512) popup_vitu2_query_window_t3_ParamLimits

0xa74f,	// (0x0003f512) popup_vitu2_query_window_t3

0xa777,	// (0x0003f53a) popup_vitu2_query_window_t4_ParamLimits

0xa777,	// (0x0003f53a) popup_vitu2_query_window_t4

0xa78b,	// (0x0003f54e) popup_vitu2_query_window_t5_ParamLimits

0xa78b,	// (0x0003f54e) popup_vitu2_query_window_t5

0x0006,

0xf923,	// (0x000446e6) popup_vitu2_query_window_t_ParamLimits

0xf923,	// (0x000446e6) popup_vitu2_query_window_t

0xd66c,	// (0x0004242f) main_cset_text_pane

0xa0ea,	// (0x0003eead) aid_area_touch_slider_ParamLimits

0xa106,	// (0x0003eec9) cset_slider_pane_ParamLimits

0xa129,	// (0x0003eeec) main_cset_slider_pane_g1_ParamLimits

0xa13e,	// (0x0003ef01) main_cset_slider_pane_g2_ParamLimits

0xd68d,	// (0x00042450) main_cset_slider_pane_g3_ParamLimits

0xd68d,	// (0x00042450) main_cset_slider_pane_g3

0xa153,	// (0x0003ef16) main_cset_slider_pane_g4_ParamLimits

0xa153,	// (0x0003ef16) main_cset_slider_pane_g4

0xa162,	// (0x0003ef25) main_cset_slider_pane_g5_ParamLimits

0xa162,	// (0x0003ef25) main_cset_slider_pane_g5

0xa170,	// (0x0003ef33) main_cset_slider_pane_g6_ParamLimits

0xa170,	// (0x0003ef33) main_cset_slider_pane_g6

0xf880,	// (0x00044643) main_cset_slider_pane_g_ParamLimits

0xd6bd,	// (0x00042480) main_cset_slider_pane_t1_ParamLimits

0xa204,	// (0x0003efc7) main_cset_slider_pane_t2_ParamLimits

0xa21e,	// (0x0003efe1) main_cset_slider_pane_t3_ParamLimits

0xa238,	// (0x0003effb) main_cset_slider_pane_t4_ParamLimits

0xa256,	// (0x0003f019) main_cset_slider_pane_t5_ParamLimits

0xa274,	// (0x0003f037) main_cset_slider_pane_t6_ParamLimits

0xa28b,	// (0x0003f04e) main_cset_slider_pane_t7_ParamLimits

0xa2b9,	// (0x0003f07c) main_cset_slider_pane_t8_ParamLimits

0xa2b9,	// (0x0003f07c) main_cset_slider_pane_t8

0xa2e1,	// (0x0003f0a4) main_cset_slider_pane_t9_ParamLimits

0xa2e1,	// (0x0003f0a4) main_cset_slider_pane_t9

0xa309,	// (0x0003f0cc) main_cset_slider_pane_t10_ParamLimits

0xa309,	// (0x0003f0cc) main_cset_slider_pane_t10

0xa331,	// (0x0003f0f4) main_cset_slider_pane_t11_ParamLimits

0xa331,	// (0x0003f0f4) main_cset_slider_pane_t11

0xa35b,	// (0x0003f11e) main_cset_slider_pane_t12_ParamLimits

0xa35b,	// (0x0003f11e) main_cset_slider_pane_t12

0xa37a,	// (0x0003f13d) main_cset_slider_pane_t13_ParamLimits

0xa37a,	// (0x0003f13d) main_cset_slider_pane_t13

0xf8a5,	// (0x00044668) main_cset_slider_pane_t_ParamLimits

0x0bbc,	// (0x0003597f) bg_popup_sub_pane_cp011

0xd7f2,	// (0x000425b5) main_cset_text_pane_g1

0xd7fa,	// (0x000425bd) main_cset_text_pane_t1

0xd808,	// (0x000425cb) main_cset_text_pane_t2

0xd816,	// (0x000425d9) main_cset_text_pane_t3

0xd824,	// (0x000425e7) main_cset_text_pane_t4

0xd832,	// (0x000425f5) main_cset_text_pane_t5

0xd840,	// (0x00042603) main_cset_text_pane_t6

0xd84e,	// (0x00042611) main_cset_text_pane_t7

0x0006,

0xf932,	// (0x000446f5) main_cset_text_pane_t

0x0bbc,	// (0x0003597f) main_cam4_burst_pane

0x0bbc,	// (0x0003597f) main_cam5_pane

0xd62e,	// (0x000423f1) bg_button_pane_cp019

0xd637,	// (0x000423fa) bg_button_pane_cp020

0xd699,	// (0x0004245c) main_cset_slider_pane_g7_ParamLimits

0xd699,	// (0x0004245c) main_cset_slider_pane_g7

0xd6a5,	// (0x00042468) main_cset_slider_pane_g8_ParamLimits

0xd6a5,	// (0x00042468) main_cset_slider_pane_g8

0xa184,	// (0x0003ef47) main_cset_slider_pane_g9_ParamLimits

0xa184,	// (0x0003ef47) main_cset_slider_pane_g9

0xa190,	// (0x0003ef53) main_cset_slider_pane_g10_ParamLimits

0xa190,	// (0x0003ef53) main_cset_slider_pane_g10

0xa19c,	// (0x0003ef5f) main_cset_slider_pane_g11_ParamLimits

0xa19c,	// (0x0003ef5f) main_cset_slider_pane_g11

0xa1a8,	// (0x0003ef6b) main_cset_slider_pane_g12_ParamLimits

0xa1a8,	// (0x0003ef6b) main_cset_slider_pane_g12

0xa1b4,	// (0x0003ef77) main_cset_slider_pane_g13_ParamLimits

0xa1b4,	// (0x0003ef77) main_cset_slider_pane_g13

0xa1c2,	// (0x0003ef85) main_cset_slider_pane_g14_ParamLimits

0xa1c2,	// (0x0003ef85) main_cset_slider_pane_g14

0xa1d0,	// (0x0003ef93) main_cset_slider_pane_g15_ParamLimits

0xa1d0,	// (0x0003ef93) main_cset_slider_pane_g15

0xd6e5,	// (0x000424a8) main_cset_slider_pane_t14_ParamLimits

0xd6e5,	// (0x000424a8) main_cset_slider_pane_t14

0xd71e,	// (0x000424e1) main_cset_slider_pane_t15_ParamLimits

0xd71e,	// (0x000424e1) main_cset_slider_pane_t15

0xa7f5,	// (0x0003f5b8) aid_cam4_burst_size_cell_ParamLimits

0xa7f5,	// (0x0003f5b8) aid_cam4_burst_size_cell

0xa811,	// (0x0003f5d4) grid_cam4_burst_pane_ParamLimits

0xa811,	// (0x0003f5d4) grid_cam4_burst_pane

0xa841,	// (0x0003f604) linegrid_cam4_burst_pane_ParamLimits

0xa841,	// (0x0003f604) linegrid_cam4_burst_pane

0xa861,	// (0x0003f624) scroll_pane_cp30_ParamLimits

0xa861,	// (0x0003f624) scroll_pane_cp30

0xa86d,	// (0x0003f630) cell_cam4_burst_pane_ParamLimits

0xa86d,	// (0x0003f630) cell_cam4_burst_pane

0xd85c,	// (0x0004261f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd85c,	// (0x0004261f) linegrid_cam4_burst_pane_g1

0xa8a9,	// (0x0003f66c) linegrid_cam4_burst_pane_g2_ParamLimits

0xa8a9,	// (0x0003f66c) linegrid_cam4_burst_pane_g2

0xd869,	// (0x0004262c) linegrid_cam4_burst_pane_g3_ParamLimits

0xd869,	// (0x0004262c) linegrid_cam4_burst_pane_g3

0x0002,

0xf941,	// (0x00044704) linegrid_cam4_burst_pane_g_ParamLimits

0xf941,	// (0x00044704) linegrid_cam4_burst_pane_g

0xa8ba,	// (0x0003f67d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa8ba,	// (0x0003f67d) linegrid_cam4_burst_pane_g3_copy1

0xd876,	// (0x00042639) linegrid_cam4_burst_pane_g4_ParamLimits

0xd876,	// (0x00042639) linegrid_cam4_burst_pane_g4

0xa8d4,	// (0x0003f697) linegrid_cam4_burst_pane_g5_ParamLimits

0xa8d4,	// (0x0003f697) linegrid_cam4_burst_pane_g5

0xa8e5,	// (0x0003f6a8) linegrid_cam4_burst_pane_g6_ParamLimits

0xa8e5,	// (0x0003f6a8) linegrid_cam4_burst_pane_g6

0xd883,	// (0x00042646) linegrid_cam4_burst_pane_g7_ParamLimits

0xd883,	// (0x00042646) linegrid_cam4_burst_pane_g7

0xa8f6,	// (0x0003f6b9) cell_cam4_burst_pane_g1

0xd89c,	// (0x0004265f) main_cam5_pane_t1_ParamLimits

0xd89c,	// (0x0004265f) main_cam5_pane_t1

0xd8ae,	// (0x00042671) main_cam5_pane_t2_ParamLimits

0xd8ae,	// (0x00042671) main_cam5_pane_t2

0xd8c0,	// (0x00042683) main_cam5_pane_t3_ParamLimits

0xd8c0,	// (0x00042683) main_cam5_pane_t3

0xd8d2,	// (0x00042695) main_cam5_pane_t4_ParamLimits

0xd8d2,	// (0x00042695) main_cam5_pane_t4

0xd8ea,	// (0x000426ad) main_cam5_pane_t5_ParamLimits

0xd8ea,	// (0x000426ad) main_cam5_pane_t5

0xd8fe,	// (0x000426c1) main_cam5_pane_t6_ParamLimits

0xd8fe,	// (0x000426c1) main_cam5_pane_t6

0xd912,	// (0x000426d5) main_cam5_pane_t7_ParamLimits

0xd912,	// (0x000426d5) main_cam5_pane_t7

0xd924,	// (0x000426e7) main_cam5_pane_t8_ParamLimits

0xd924,	// (0x000426e7) main_cam5_pane_t8

0xd940,	// (0x00042703) main_cam5_pane_t9_ParamLimits

0xd940,	// (0x00042703) main_cam5_pane_t9

0xd952,	// (0x00042715) main_cam5_pane_t10_ParamLimits

0xd952,	// (0x00042715) main_cam5_pane_t10

0xd964,	// (0x00042727) main_cam5_pane_t11_ParamLimits

0xd964,	// (0x00042727) main_cam5_pane_t11

0xd976,	// (0x00042739) main_cam5_pane_t12_ParamLimits

0xd976,	// (0x00042739) main_cam5_pane_t12

0xd98b,	// (0x0004274e) main_cam5_pane_t13_ParamLimits

0xd98b,	// (0x0004274e) main_cam5_pane_t13

0x000c,

0xf94d,	// (0x00044710) main_cam5_pane_t_ParamLimits

0xf94d,	// (0x00044710) main_cam5_pane_t

0x5735,	// (0x0003a4f8) popup_scut_keymap_window_ParamLimits

0x5735,	// (0x0003a4f8) popup_scut_keymap_window

0xa909,	// (0x0003f6cc) aid_size_cell_brow_shortcut

0x1561,	// (0x00036324) bg_popup_window_pane_cp010

0xa915,	// (0x0003f6d8) grid_scut_pane

0xa921,	// (0x0003f6e4) cell_scut_pane_ParamLimits

0xa921,	// (0x0003f6e4) cell_scut_pane

0xa938,	// (0x0003f6fb) cell_scut_pane_g1

0xd9a8,	// (0x0004276b) cell_scut_pane_t1

0xd9b7,	// (0x0004277a) cell_scut_pane_t2

0xa941,	// (0x0003f704) cell_scut_pane_t3

0x0002,

0xf968,	// (0x0004472b) cell_scut_pane_t

0x88dc,	// (0x0003d69f) main_mup3_pane_g8_ParamLimits

0x88dc,	// (0x0003d69f) main_mup3_pane_g8

0x9b5c,	// (0x0003e91f) area_vitu2_query_pane_ParamLimits

0x9b5c,	// (0x0003e91f) area_vitu2_query_pane

0xa6b2,	// (0x0003f475) input_focus_pane_cp08

0xd9c6,	// (0x00042789) area_vitu2_query_pane_g1

0xa94f,	// (0x0003f712) area_vitu2_query_pane_g2

0x0001,

0xf96f,	// (0x00044732) area_vitu2_query_pane_g

0xa960,	// (0x0003f723) area_vitu2_query_pane_t1_ParamLimits

0xa960,	// (0x0003f723) area_vitu2_query_pane_t1

0xa974,	// (0x0003f737) area_vitu2_query_pane_t2_ParamLimits

0xa974,	// (0x0003f737) area_vitu2_query_pane_t2

0xa988,	// (0x0003f74b) area_vitu2_query_pane_t3_ParamLimits

0xa988,	// (0x0003f74b) area_vitu2_query_pane_t3

0xd9d2,	// (0x00042795) area_vitu2_query_pane_t4_ParamLimits

0xd9d2,	// (0x00042795) area_vitu2_query_pane_t4

0xd9fa,	// (0x000427bd) area_vitu2_query_pane_t5_ParamLimits

0xd9fa,	// (0x000427bd) area_vitu2_query_pane_t5

0xda22,	// (0x000427e5) area_vitu2_query_pane_t6_ParamLimits

0xda22,	// (0x000427e5) area_vitu2_query_pane_t6

0x0006,

0xf974,	// (0x00044737) area_vitu2_query_pane_t_ParamLimits

0xf974,	// (0x00044737) area_vitu2_query_pane_t

0xa69a,	// (0x0003f45d) bg_button_pane_cp018

0xa9b0,	// (0x0003f773) bg_button_pane_cp021

0xa9bc,	// (0x0003f77f) bg_button_pane_cp022

0xa9df,	// (0x0003f7a2) input_focus_pane_cp09

0x1d69,	// (0x00036b2c) aid_size_touch_mv_arrow_left

0x1d94,	// (0x00036b57) aid_size_touch_mv_arrow_right

0xa1e8,	// (0x0003efab) main_cset_slider_pane_g16_ParamLimits

0xa1e8,	// (0x0003efab) main_cset_slider_pane_g16

0xa1f6,	// (0x0003efb9) main_cset_slider_pane_g17_ParamLimits

0xa1f6,	// (0x0003efb9) main_cset_slider_pane_g17

0xa8f6,	// (0x0003f6b9) cell_cam4_burst_pane_g1_ParamLimits

0x0bbc,	// (0x0003597f) compa_mode_pane

0xa3f2,	// (0x0003f1b5) popup_vtel_slider_window_g3_ParamLimits

0xa3f2,	// (0x0003f1b5) popup_vtel_slider_window_g3

0xa406,	// (0x0003f1c9) popup_vtel_slider_window_g4_ParamLimits

0xa406,	// (0x0003f1c9) popup_vtel_slider_window_g4

0xa41a,	// (0x0003f1dd) popup_vtel_slider_window_t1_ParamLimits

0xa41a,	// (0x0003f1dd) popup_vtel_slider_window_t1

0x0bbc,	// (0x0003597f) main_cl_pane

0x81a0,	// (0x0003cf63) popup_imed_adjust2_window_ParamLimits

0x20db,	// (0x00036e9e) bg_tb_trans_pane_cp05_ParamLimits

0x3b7f,	// (0x00038942) popup_imed_adjust2_window_g1_ParamLimits

0x3b8e,	// (0x00038951) popup_imed_adjust2_window_g2_ParamLimits

0x3b8e,	// (0x00038951) popup_imed_adjust2_window_g2

0x3b9a,	// (0x0003895d) popup_imed_adjust2_window_g3_ParamLimits

0x3b9a,	// (0x0003895d) popup_imed_adjust2_window_g3

0x0002,

0xf6f4,	// (0x000444b7) popup_imed_adjust2_window_g_ParamLimits

0xf6f4,	// (0x000444b7) popup_imed_adjust2_window_g

0x3ba6,	// (0x00038969) popup_imed_adjust2_window_t1_ParamLimits

0x3bbe,	// (0x00038981) slider_imed_adjust_pane_ParamLimits

0x3bd2,	// (0x00038995) slider_imed_adjust_pane_g1_ParamLimits

0x3be2,	// (0x000389a5) slider_imed_adjust_pane_g2_ParamLimits

0x3bf2,	// (0x000389b5) slider_imed_adjust_pane_g3_ParamLimits

0x3c03,	// (0x000389c6) slider_imed_adjust_pane_g4_ParamLimits

0xf6fb,	// (0x000444be) slider_imed_adjust_pane_g_ParamLimits

0x98ab,	// (0x0003e66e) aid_touch_area_cam4_ParamLimits

0x98ab,	// (0x0003e66e) aid_touch_area_cam4

0x98bb,	// (0x0003e67e) battery_pane_cp01

0x9942,	// (0x0003e705) main_camera4_pane_g6_ParamLimits

0x9942,	// (0x0003e705) main_camera4_pane_g6

0x9960,	// (0x0003e723) main_camera4_pane_t2_ParamLimits

0x9960,	// (0x0003e723) main_camera4_pane_t2

0x0001,

0xf7f3,	// (0x000445b6) main_camera4_pane_t_ParamLimits

0xf7f3,	// (0x000445b6) main_camera4_pane_t

0x99e1,	// (0x0003e7a4) aid_touch_area_vid4_ParamLimits

0x99e1,	// (0x0003e7a4) aid_touch_area_vid4

0x9a21,	// (0x0003e7e4) main_video4_pane_g5_ParamLimits

0x9a21,	// (0x0003e7e4) main_video4_pane_g5

0x9a45,	// (0x0003e808) vid4_progress_pane_ParamLimits

0x9a45,	// (0x0003e808) vid4_progress_pane

0xd6b1,	// (0x00042474) main_cset_slider_pane_g18_ParamLimits

0xd6b1,	// (0x00042474) main_cset_slider_pane_g18

0xd890,	// (0x00042653) cell_cam4_burst_pane_g2_ParamLimits

0xd890,	// (0x00042653) cell_cam4_burst_pane_g2

0x0001,

0xf948,	// (0x0004470b) cell_cam4_burst_pane_g_ParamLimits

0xf948,	// (0x0004470b) cell_cam4_burst_pane_g

0xa9ef,	// (0x0003f7b2) bg_cl_pane_ParamLimits

0xa9ef,	// (0x0003f7b2) bg_cl_pane

0xa9fb,	// (0x0003f7be) cl_header_pane_ParamLimits

0xa9fb,	// (0x0003f7be) cl_header_pane

0xaa07,	// (0x0003f7ca) cl_listscroll_pane_ParamLimits

0xaa07,	// (0x0003f7ca) cl_listscroll_pane

0xda6e,	// (0x00042831) bg_cl_pane_g1

0xda76,	// (0x00042839) bg_cl_pane_g2

0xda7e,	// (0x00042841) bg_cl_pane_g3

0xda86,	// (0x00042849) bg_cl_pane_g4

0xda8e,	// (0x00042851) bg_cl_pane_g5

0xda96,	// (0x00042859) bg_cl_pane_g6

0xda9e,	// (0x00042861) bg_cl_pane_g7

0xdaa6,	// (0x00042869) bg_cl_pane_g8

0xdaae,	// (0x00042871) bg_cl_pane_g9

0x0008,

0xf983,	// (0x00044746) bg_cl_pane_g

0xaa13,	// (0x0003f7d6) aid_height_cl_leading_ParamLimits

0xaa13,	// (0x0003f7d6) aid_height_cl_leading

0xaa1f,	// (0x0003f7e2) aid_height_cl_text_ParamLimits

0xaa1f,	// (0x0003f7e2) aid_height_cl_text

0x12af,	// (0x00036072) bg_cl_header_pane_ParamLimits

0x12af,	// (0x00036072) bg_cl_header_pane

0xaa37,	// (0x0003f7fa) cl_header_pane_g1_ParamLimits

0xaa37,	// (0x0003f7fa) cl_header_pane_g1

0xaa44,	// (0x0003f807) cl_header_pane_t1_ParamLimits

0xaa44,	// (0x0003f807) cl_header_pane_t1

0xdab6,	// (0x00042879) cl_list_pane

0xd684,	// (0x00042447) hc_scroll_pane_cp01

0x175a,	// (0x0003651d) bg_cl_header_pane_g1

0xd544,	// (0x00042307) bg_cl_header_pane_g2

0x177a,	// (0x0003653d) bg_cl_header_pane_g3

0xd554,	// (0x00042317) bg_cl_header_pane_g4

0xd54c,	// (0x0004230f) bg_cl_header_pane_g5

0xd7b3,	// (0x00042576) bg_cl_header_pane_g6

0xd56c,	// (0x0004232f) bg_cl_header_pane_g7

0xd574,	// (0x00042337) bg_cl_header_pane_g8

0xd564,	// (0x00042327) bg_cl_header_pane_g9

0x0008,

0xf996,	// (0x00044759) bg_cl_header_pane_g

0xaa56,	// (0x0003f819) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xaa56,	// (0x0003f819) hc_cl_list_double_graphic_heading_pane

0xaa6a,	// (0x0003f82d) hc_cl_list_single_graphic_pane_ParamLimits

0xaa6a,	// (0x0003f82d) hc_cl_list_single_graphic_pane

0xaa84,	// (0x0003f847) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xaa84,	// (0x0003f847) hc_cl_list_single_graphic_pane_g1

0xaa90,	// (0x0003f853) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xaa90,	// (0x0003f853) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0004476c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0004476c) hc_cl_list_single_graphic_pane_g

0xaaa4,	// (0x0003f867) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xaaa4,	// (0x0003f867) hc_cl_list_single_graphic_pane_t1

0xaa84,	// (0x0003f847) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xaa84,	// (0x0003f847) hc_cl_list_double_graphic_heading_pane_g1

0xaab9,	// (0x0003f87c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xaab9,	// (0x0003f87c) hc_cl_list_double_graphic_heading_pane_g2

0xaacd,	// (0x0003f890) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xaacd,	// (0x0003f890) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9ae,	// (0x00044771) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9ae,	// (0x00044771) hc_cl_list_double_graphic_heading_pane_g

0xaae1,	// (0x0003f8a4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xaae1,	// (0x0003f8a4) hc_cl_list_double_graphic_heading_pane_t1

0xaaf6,	// (0x0003f8b9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xaaf6,	// (0x0003f8b9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9b5,	// (0x00044778) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9b5,	// (0x00044778) hc_cl_list_double_graphic_heading_pane_t

0xab13,	// (0x0003f8d6) vid4_progress_pane_g1

0xab23,	// (0x0003f8e6) vid4_progress_pane_g2

0xab33,	// (0x0003f8f6) vid4_progress_pane_g3

0xab45,	// (0x0003f908) vid4_progress_pane_g4

0x0004,

0xf9ba,	// (0x0004477d) vid4_progress_pane_g

0xab5d,	// (0x0003f920) vid4_progress_pane_t1

0xab73,	// (0x0003f936) vid4_progress_pane_t2

0x0002,

0xf9c5,	// (0x00044788) vid4_progress_pane_t

0xab9e,	// (0x0003f961) wait_bar_pane_cp07

0x3401,	// (0x000381c4) blid_firmament_pane_ParamLimits

0x3444,	// (0x00038207) popup_blid_sat_info2_window_g1

0x3468,	// (0x0003822b) popup_blid_sat_info2_window_t3

0x3476,	// (0x00038239) popup_blid_sat_info2_window_t4

0x3484,	// (0x00038247) popup_blid_sat_info2_window_t5

0x3492,	// (0x00038255) popup_blid_sat_info2_window_t6

0x34a2,	// (0x00038265) popup_blid_sat_info2_window_t7

0x34b0,	// (0x00038273) popup_blid_sat_info2_window_t8

0x34be,	// (0x00038281) popup_blid_sat_info2_window_t9

0x34cc,	// (0x0003828f) popup_blid_sat_info2_window_t10

0x358d,	// (0x00038350) aid_firma_cardinal_ParamLimits

0x35a1,	// (0x00038364) blid_firmament_pane_t1_ParamLimits

0x35b8,	// (0x0003837b) blid_firmament_pane_t2_ParamLimits

0x35cf,	// (0x00038392) blid_firmament_pane_t3_ParamLimits

0x35e6,	// (0x000383a9) blid_firmament_pane_t4_ParamLimits

0xf5ed,	// (0x000443b0) blid_firmament_pane_t_ParamLimits

0x35fd,	// (0x000383c0) blid_sat_info_pane_ParamLimits

0x0fe3,	// (0x00035da6) main_cam_set_pane_ParamLimits

0x8fa6,	// (0x0003dd69) aid_size_cell_colour_35_ParamLimits

0x8fc0,	// (0x0003dd83) aid_size_cell_colour_112_ParamLimits

0x8fd7,	// (0x0003dd9a) aid_size_cell_effect_ParamLimits

0x0fe3,	// (0x00035da6) bg_tb_trans_pane_cp02_ParamLimits

0x1a2c,	// (0x000367ef) heading_imed_pane_ParamLimits

0x8ff1,	// (0x0003ddb4) listscroll_imed_pane_ParamLimits

0x28fc,	// (0x000376bf) popup_call2_audio_first_window_g5_ParamLimits

0x28fc,	// (0x000376bf) popup_call2_audio_first_window_g5

0x95b9,	// (0x0003e37c) aid_size_touch_image3_arrow_left_ParamLimits

0x95b9,	// (0x0003e37c) aid_size_touch_image3_arrow_left

0x95cf,	// (0x0003e392) aid_size_touch_image3_arrow_right_ParamLimits

0x95cf,	// (0x0003e392) aid_size_touch_image3_arrow_right

0xab88,	// (0x0003f94b) vid4_progress_pane_t3

0x914b,	// (0x0003df0e) main_hwr_training_symbol_option_pane_ParamLimits

0x914b,	// (0x0003df0e) main_hwr_training_symbol_option_pane

0x3d1d,	// (0x00038ae0) popup_hwr_training_preview_window_ParamLimits

0x3d1d,	// (0x00038ae0) popup_hwr_training_preview_window

0x91ac,	// (0x0003df6f) hwr_training_navi_pane_g5_ParamLimits

0x91ac,	// (0x0003df6f) hwr_training_navi_pane_g5

0xd532,	// (0x000422f5) popup_char_count_window

0x12af,	// (0x00036072) bg_popup_sub_pane_cp20_ParamLimits

0xa50d,	// (0x0003f2d0) list_vitu2_match_list_pane_ParamLimits

0xa519,	// (0x0003f2dc) vitu2_page_scroll_pane_ParamLimits

0xa519,	// (0x0003f2dc) vitu2_page_scroll_pane

0xdac8,	// (0x0004288b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdac8,	// (0x0004288b) list_single_hwr_training_symbol_option_pane

0xdadb,	// (0x0004289e) list_single_hwr_training_symbol_option_pane_g1

0xdae3,	// (0x000428a6) list_single_hwr_training_symbol_option_pane_t1

0xdaf1,	// (0x000428b4) bg_button_pane_cp023

0xdafa,	// (0x000428bd) bg_button_pane_cp024

0xdb2d,	// (0x000428f0) vitu2_page_scroll_pane_g1

0xdb35,	// (0x000428f8) vitu2_page_scroll_pane_g2

0x0001,

0xf9cc,	// (0x0004478f) vitu2_page_scroll_pane_g

0xdb3d,	// (0x00042900) vitu2_page_scroll_pane_t1

0x1428,	// (0x000361eb) popup_char_count_window_g1

0xdb4c,	// (0x0004290f) popup_char_count_window_g2

0xdb55,	// (0x00042918) popup_char_count_window_g3

0x0002,

0xf9d1,	// (0x00044794) popup_char_count_window_g

0xdb5e,	// (0x00042921) popup_char_count_window_t1

0x0bbc,	// (0x0003597f) main_vded2_pane

0x3b6b,	// (0x0003892e) aid_size_cell_imed_line

0x3b75,	// (0x00038938) grid_imed_line_width_pane

0x9ab1,	// (0x0003e874) vid4_indicators_pane_g4

0xdb6c,	// (0x0004292f) cell_imed_line_width_pane_ParamLimits

0xdb6c,	// (0x0004292f) cell_imed_line_width_pane

0xdb80,	// (0x00042943) cell_imed_line_width_pane_g1

0xdb89,	// (0x0004294c) cell_imed_line_width_pane_g2

0x0001,

0xf9d8,	// (0x0004479b) cell_imed_line_width_pane_g

0xabaf,	// (0x0003f972) main_vded2_pane_g1_ParamLimits

0xabaf,	// (0x0003f972) main_vded2_pane_g1

0xabbc,	// (0x0003f97f) main_vded2_pane_g2_ParamLimits

0xabbc,	// (0x0003f97f) main_vded2_pane_g2

0x0001,

0xf9dd,	// (0x000447a0) main_vded2_pane_g_ParamLimits

0xf9dd,	// (0x000447a0) main_vded2_pane_g

0xabca,	// (0x0003f98d) vded2_slider_pane_ParamLimits

0xabca,	// (0x0003f98d) vded2_slider_pane

0xabd7,	// (0x0003f99a) aid_size_touch_vded2_end

0xabe1,	// (0x0003f9a4) aid_size_touch_vded2_playhead

0xdb91,	// (0x00042954) aid_size_touch_vded2_start

0xdb99,	// (0x0004295c) vded2_slider_bg_pane

0xdba2,	// (0x00042965) vded2_slider_pane_g1

0xdbab,	// (0x0004296e) vded2_slider_pane_g2

0xabe9,	// (0x0003f9ac) vded2_slider_pane_g3

0x0002,

0xf9e2,	// (0x000447a5) vded2_slider_pane_g

0xdbb3,	// (0x00042976) vded2_slider_bg_pane_g1

0xdbbc,	// (0x0004297f) vded2_slider_bg_pane_g2

0xdbc5,	// (0x00042988) vded2_slider_bg_pane_g3

0x0002,

0xf9e9,	// (0x000447ac) vded2_slider_bg_pane_g

0x7a5d,	// (0x0003c820) aid_postcard_touch_down_pane_ParamLimits

0x7a5d,	// (0x0003c820) aid_postcard_touch_down_pane

0x7a6d,	// (0x0003c830) aid_postcard_touch_up_pane_ParamLimits

0x7a6d,	// (0x0003c830) aid_postcard_touch_up_pane

0x0bbc,	// (0x0003597f) main_blid2_pane

0x812f,	// (0x0003cef2) popup_blid2_search_window

0x0bbc,	// (0x0003597f) blid2_gps_pane

0x0bbc,	// (0x0003597f) blid2_navig_pane

0x0bbc,	// (0x0003597f) blid2_search_pane

0x0bbc,	// (0x0003597f) blid2_tripm_pane

0xabf2,	// (0x0003f9b5) blid2_search_pane_g1_ParamLimits

0xabf2,	// (0x0003f9b5) blid2_search_pane_g1

0xac02,	// (0x0003f9c5) blid2_search_pane_t1_ParamLimits

0xac02,	// (0x0003f9c5) blid2_search_pane_t1

0xac14,	// (0x0003f9d7) aid_size_cell_blid2_gps_ParamLimits

0xac14,	// (0x0003f9d7) aid_size_cell_blid2_gps

0xac24,	// (0x0003f9e7) blid2_gps_pane_g1_ParamLimits

0xac24,	// (0x0003f9e7) blid2_gps_pane_g1

0xac30,	// (0x0003f9f3) grid_blid2_satellite_pane_ParamLimits

0xac30,	// (0x0003f9f3) grid_blid2_satellite_pane

0xac40,	// (0x0003fa03) blid2_navig_pane_g1_ParamLimits

0xac40,	// (0x0003fa03) blid2_navig_pane_g1

0xac4c,	// (0x0003fa0f) blid2_navig_pane_t1_ParamLimits

0xac4c,	// (0x0003fa0f) blid2_navig_pane_t1

0xac5e,	// (0x0003fa21) blid2_navig_pane_t2_ParamLimits

0xac5e,	// (0x0003fa21) blid2_navig_pane_t2

0x0001,

0xf9f0,	// (0x000447b3) blid2_navig_pane_t_ParamLimits

0xf9f0,	// (0x000447b3) blid2_navig_pane_t

0xac70,	// (0x0003fa33) blid2_navig_ring_pane_ParamLimits

0xac70,	// (0x0003fa33) blid2_navig_ring_pane

0xac80,	// (0x0003fa43) blid2_speed_pane_ParamLimits

0xac80,	// (0x0003fa43) blid2_speed_pane

0xac8c,	// (0x0003fa4f) blid2_tripm_pane_g1_ParamLimits

0xac8c,	// (0x0003fa4f) blid2_tripm_pane_g1

0xac9c,	// (0x0003fa5f) blid2_tripm_pane_g2_ParamLimits

0xac9c,	// (0x0003fa5f) blid2_tripm_pane_g2

0xaca8,	// (0x0003fa6b) blid2_tripm_pane_g3_ParamLimits

0xaca8,	// (0x0003fa6b) blid2_tripm_pane_g3

0xacb4,	// (0x0003fa77) blid2_tripm_pane_g4_ParamLimits

0xacb4,	// (0x0003fa77) blid2_tripm_pane_g4

0xacc0,	// (0x0003fa83) blid2_tripm_pane_g5_ParamLimits

0xacc0,	// (0x0003fa83) blid2_tripm_pane_g5

0x0005,

0xf9f5,	// (0x000447b8) blid2_tripm_pane_g_ParamLimits

0xf9f5,	// (0x000447b8) blid2_tripm_pane_g

0xacdc,	// (0x0003fa9f) blid2_tripm_pane_t1_ParamLimits

0xacdc,	// (0x0003fa9f) blid2_tripm_pane_t1

0xacf0,	// (0x0003fab3) blid2_tripm_pane_t2_ParamLimits

0xacf0,	// (0x0003fab3) blid2_tripm_pane_t2

0xad02,	// (0x0003fac5) blid2_tripm_pane_t3_ParamLimits

0xad02,	// (0x0003fac5) blid2_tripm_pane_t3

0x0003,

0xfa02,	// (0x000447c5) blid2_tripm_pane_t_ParamLimits

0xfa02,	// (0x000447c5) blid2_tripm_pane_t

0xad34,	// (0x0003faf7) cell_blid2_satellite_pane_ParamLimits

0xad34,	// (0x0003faf7) cell_blid2_satellite_pane

0xad4e,	// (0x0003fb11) cell_blid2_satellite_pane_g1

0xdbce,	// (0x00042991) cell_blid2_satellite_pane_t1

0x12fb,	// (0x000360be) blid2_speed_pane_g1

0xdbdc,	// (0x0004299f) blid2_speed_pane_t1

0xdbea,	// (0x000429ad) blid2_speed_pane_t2

0x0001,

0xfa0b,	// (0x000447ce) blid2_speed_pane_t

0x12fb,	// (0x000360be) blid2_navig_ring_pane_g1

0xad57,	// (0x0003fb1a) blid2_navig_ring_pane_g2

0xad5f,	// (0x0003fb22) blid2_navig_ring_pane_g3

0xad67,	// (0x0003fb2a) blid2_navig_ring_pane_g4

0xad6f,	// (0x0003fb32) blid2_navig_ring_pane_g5

0x0004,

0xfa10,	// (0x000447d3) blid2_navig_ring_pane_g

0x0bbc,	// (0x0003597f) bg_popup_window_pane_cp011

0xdbf8,	// (0x000429bb) popup_blid2_search_window_g1

0xdc00,	// (0x000429c3) popup_blid2_search_window_t1

0xdc0e,	// (0x000429d1) popup_blid2_search_window_t2

0x0001,

0xfa1b,	// (0x000447de) popup_blid2_search_window_t

0x1669,	// (0x0003642c) main_browser_pane_g1

0x1359,	// (0x0003611c) main_browser_pane_ParamLimits

0x0fe3,	// (0x00035da6) bg_button_pane_cp011_ParamLimits

0x9e0d,	// (0x0003ebd0) cell_vitu2_function_pane_g1_ParamLimits

0x20db,	// (0x00036e9e) bg_popup_sub_pane_cp22_ParamLimits

0xa6b2,	// (0x0003f475) input_focus_pane_cp08_ParamLimits

0xa6cd,	// (0x0003f490) popup_vitu2_query_button_pane_ParamLimits

0xa6cd,	// (0x0003f490) popup_vitu2_query_button_pane

0xa6dc,	// (0x0003f49f) popup_vitu2_query_input_button_pane

0xd7e6,	// (0x000425a9) popup_vitu2_query_window_g1_ParamLimits

0xa6e6,	// (0x0003f4a9) popup_vitu2_query_window_g2_ParamLimits

0xf91c,	// (0x000446df) popup_vitu2_query_window_g_ParamLimits

0x0bbc,	// (0x0003597f) bg_button_pane_cp026

0xad77,	// (0x0003fb3a) popup_vitu2_query_input_button_pane_g1

0x0bbc,	// (0x0003597f) bg_button_pane_cp025

0xdc1c,	// (0x000429df) popup_vitu2_query_button_pane_t1

0x8594,	// (0x0003d357) main_mp3_pane_t6

0x85a4,	// (0x0003d367) popup_slider_window_cp01

0x9996,	// (0x0003e759) cam4_battery_pane

0x9a70,	// (0x0003e833) cam4_battery_pane_cp02

0xab0b,	// (0x0003f8ce) cam4_battery_pane_cp01

0xab0b,	// (0x0003f8ce) cam4_battery_pane_cp03

0x12fb,	// (0x000360be) cam4_battery_pane_g1

0xdc2a,	// (0x000429ed) cam4_battery_pane_g2

0x0001,

0xfa20,	// (0x000447e3) cam4_battery_pane_g

0x34da,	// (0x0003829d) popup_blid_sat_info2_window_t11

0x1d69,	// (0x00036b2c) aid_size_touch_mv_arrow_left_ParamLimits

0x1d94,	// (0x00036b57) aid_size_touch_mv_arrow_right_ParamLimits

0x1df2,	// (0x00036bb5) navi_pane_g1_ParamLimits

0x1dfe,	// (0x00036bc1) navi_pane_g2_ParamLimits

0x1e2c,	// (0x00036bef) navi_pane_g3_ParamLimits

0xf311,	// (0x000440d4) navi_pane_g_ParamLimits

0x76f9,	// (0x0003c4bc) navi_pane_mv_t1_ParamLimits

0x8ffd,	// (0x0003ddc0) grid_imed_effect_pane_ParamLimits

0x61ac,	// (0x0003af6f) aid_placing_vt_slider_lsc

0x15b8,	// (0x0003637b) aid_placing_vt_slider_prt

0x0fe3,	// (0x00035da6) bg_tb_trans_pane_cp01_ParamLimits

0x379a,	// (0x0003855d) popup_image_details_window_g1_ParamLimits

0x37ad,	// (0x00038570) popup_image_details_window_g2_ParamLimits

0x37c2,	// (0x00038585) popup_image_details_window_g3_ParamLimits

0x37c2,	// (0x00038585) popup_image_details_window_g3

0xf62d,	// (0x000443f0) popup_image_details_window_g_ParamLimits

0x37d6,	// (0x00038599) popup_image_details_window_t1_ParamLimits

0x37e8,	// (0x000385ab) popup_image_details_window_t2_ParamLimits

0x3801,	// (0x000385c4) popup_image_details_window_t3_ParamLimits

0x3815,	// (0x000385d8) popup_image_details_window_t4_ParamLimits

0x3830,	// (0x000385f3) popup_image_details_window_t5_ParamLimits

0xf634,	// (0x000443f7) popup_image_details_window_t_ParamLimits

0xaa2b,	// (0x0003f7ee) cl_header_name_pane_ParamLimits

0xaa2b,	// (0x0003f7ee) cl_header_name_pane

0xad7f,	// (0x0003fb42) cl_header_name_pane_t1_ParamLimits

0xad7f,	// (0x0003fb42) cl_header_name_pane_t1

0xad96,	// (0x0003fb59) cl_header_name_pane_t2_ParamLimits

0xad96,	// (0x0003fb59) cl_header_name_pane_t2

0xadc0,	// (0x0003fb83) cl_header_name_pane_t3_ParamLimits

0xadc0,	// (0x0003fb83) cl_header_name_pane_t3

0x0002,

0xfa25,	// (0x000447e8) cl_header_name_pane_t_ParamLimits

0xfa25,	// (0x000447e8) cl_header_name_pane_t

0x1ebb,	// (0x00036c7e) navi_pane_mv_g2_ParamLimits

0xd4fd,	// (0x000422c0) field_vitu2_entry_pane_g1_ParamLimits

0xd509,	// (0x000422cc) field_vitu2_entry_pane_g2_ParamLimits

0x1fd9,	// (0x00036d9c) field_vitu2_entry_pane_g3_ParamLimits

0x1fd9,	// (0x00036d9c) field_vitu2_entry_pane_g3

0xf825,	// (0x000445e8) field_vitu2_entry_pane_g_ParamLimits

0x9cd3,	// (0x0003ea96) cell_vitu2_itu_pane_g1_ParamLimits

0x9ceb,	// (0x0003eaae) cell_vitu2_itu_pane_g2_ParamLimits

0x9ceb,	// (0x0003eaae) cell_vitu2_itu_pane_g2

0x0001,

0xf831,	// (0x000445f4) cell_vitu2_itu_pane_g_ParamLimits

0xf831,	// (0x000445f4) cell_vitu2_itu_pane_g

0x0fe3,	// (0x00035da6) bg_vkb2_func_pane_cp05_ParamLimits

0x0fe3,	// (0x00035da6) bg_vkb2_func_pane_cp05

0x0fe3,	// (0x00035da6) bg_vkb2_func_pane_cp03

0x0fe3,	// (0x00035da6) bg_vkb2_func_pane_cp04

0x0fe3,	// (0x00035da6) bg_vkb2_func_pane_cp10_ParamLimits

0x0fe3,	// (0x00035da6) bg_vkb2_func_pane_cp10

0xa9cd,	// (0x0003f790) bg_vkb2_func_pane_cp08

0xa69a,	// (0x0003f45d) bg_vkb2_func_pane_cp06

0xa9b0,	// (0x0003f773) bg_vkb2_func_pane_cp07

0xdb03,	// (0x000428c6) bg_vkb2_func_pane_cp11_ParamLimits

0xdb03,	// (0x000428c6) bg_vkb2_func_pane_cp11

0xdb18,	// (0x000428db) bg_vkb2_func_pane_cp12_ParamLimits

0xdb18,	// (0x000428db) bg_vkb2_func_pane_cp12

0x0bbc,	// (0x0003597f) bg_vkb2_func_pane_cp09

0xd544,	// (0x00042307) bg_vkb2_func_pane_g1

0x177a,	// (0x0003653d) bg_vkb2_func_pane_g2

0xd54c,	// (0x0004230f) bg_vkb2_func_pane_g3

0xd554,	// (0x00042317) bg_vkb2_func_pane_g4

0xd7b3,	// (0x00042576) bg_vkb2_func_pane_g5

0xd56c,	// (0x0004232f) bg_vkb2_func_pane_g6

0xd574,	// (0x00042337) bg_vkb2_func_pane_g7

0xd564,	// (0x00042327) bg_vkb2_func_pane_g8

0x175a,	// (0x0003651d) bg_vkb2_func_pane_g9

0x0008,

0xfa2c,	// (0x000447ef) bg_vkb2_func_pane_g

0xacce,	// (0x0003fa91) blid2_tripm_pane_g6_ParamLimits

0xacce,	// (0x0003fa91) blid2_tripm_pane_g6

0xd443,	// (0x00042206) mp4_progress_pane_g1

0xad28,	// (0x0003faeb) blid2_tripm_values_pane_ParamLimits

0xad28,	// (0x0003faeb) blid2_tripm_values_pane

0xade5,	// (0x0003fba8) blid2_tripm_values_pane_t1

0xadf3,	// (0x0003fbb6) blid2_tripm_values_pane_t2

0xae01,	// (0x0003fbc4) blid2_tripm_values_pane_t3

0xae0f,	// (0x0003fbd2) blid2_tripm_values_pane_t4

0xae1d,	// (0x0003fbe0) blid2_tripm_values_pane_t5

0xae2b,	// (0x0003fbee) blid2_tripm_values_pane_t6

0xae39,	// (0x0003fbfc) blid2_tripm_values_pane_t7

0xae47,	// (0x0003fc0a) blid2_tripm_values_pane_t8

0xae55,	// (0x0003fc18) blid2_tripm_values_pane_t9

0x0008,

0xfa3f,	// (0x00044802) blid2_tripm_values_pane_t

0x61ec,	// (0x0003afaf) call_video_pane_t1_ParamLimits

0x620d,	// (0x0003afd0) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x00043f7d) call_video_pane_t_ParamLimits

0x4c2a,	// (0x000399ed) msg_header_pane_g1_ParamLimits

0x20a5,	// (0x00036e68) msg_header_pane_g2_ParamLimits

0x20a5,	// (0x00036e68) msg_header_pane_g2

0x0001,

0xf3af,	// (0x00044172) msg_header_pane_g_ParamLimits

0xf3af,	// (0x00044172) msg_header_pane_g

0x1359,	// (0x0003611c) main_clock2_pane_ParamLimits

0x8d77,	// (0x0003db3a) grid_clock2_toolbar_pane_ParamLimits

0x8d77,	// (0x0003db3a) grid_clock2_toolbar_pane

0x8d77,	// (0x0003db3a) listscroll_clock2_pane_ParamLimits

0x8d77,	// (0x0003db3a) listscroll_clock2_pane

0x8e27,	// (0x0003dbea) main_clock2_pane_t3_ParamLimits

0x8e27,	// (0x0003dbea) main_clock2_pane_t3

0x8e39,	// (0x0003dbfc) main_clock2_pane_t4_ParamLimits

0x8e39,	// (0x0003dbfc) main_clock2_pane_t4

0xdc34,	// (0x000429f7) cell_clock2_toolbar_pane

0xdc3c,	// (0x000429ff) cell_clock2_toolbar_pane_cp01

0xdc3c,	// (0x000429ff) cell_clock2_toolbar_pane_cp02

0xdc44,	// (0x00042a07) cell_clock2_toolbar_pane_cp03

0xdc4c,	// (0x00042a0f) list_clock2_pane

0x1cee,	// (0x00036ab1) scroll_pane_cp10

0xdc54,	// (0x00042a17) list_single_clock2_pane_ParamLimits

0xdc54,	// (0x00042a17) list_single_clock2_pane

0x1561,	// (0x00036324) list_highlight_pane_cp08

0xdc61,	// (0x00042a24) list_single_clock2_pane_t1

0xdc6f,	// (0x00042a32) list_single_clock2_pane_t2

0x0001,

0xfa52,	// (0x00044815) list_single_clock2_pane_t

0x0bbc,	// (0x0003597f) bg_button_pane_cp10

0xdc7d,	// (0x00042a40) cell_clock2_toolbar_pane_g1

0x79bf,	// (0x0003c782) aid_main_viewer_pane_g1_ParamLimits

0x79bf,	// (0x0003c782) aid_main_viewer_pane_g1

0x79cb,	// (0x0003c78e) aid_main_viewer_pane_g2_ParamLimits

0x79cb,	// (0x0003c78e) aid_main_viewer_pane_g2

0x79d7,	// (0x0003c79a) aid_main_viewer_pane_g3_ParamLimits

0x79d7,	// (0x0003c79a) aid_main_viewer_pane_g3

0x79e8,	// (0x0003c7ab) aid_main_viewer_pane_g4_ParamLimits

0x79e8,	// (0x0003c7ab) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x00044183) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x00044183) aid_main_viewer_pane_g

0x8107,	// (0x0003ceca) main_calc_pane_ParamLimits

0x8114,	// (0x0003ced7) main_dialer2_pane_ParamLimits

0x0bbc,	// (0x0003597f) main_cam6_pane

0x0bbc,	// (0x0003597f) main_vid6_pane

0x8d83,	// (0x0003db46) listscroll_gen_pane_cp06_ParamLimits

0x8d83,	// (0x0003db46) listscroll_gen_pane_cp06

0x8e4b,	// (0x0003dc0e) main_clock2_pane_t5_ParamLimits

0x8e4b,	// (0x0003dc0e) main_clock2_pane_t5

0x8e98,	// (0x0003dc5b) aid_call2_pane_cp10_ParamLimits

0x8eaa,	// (0x0003dc6d) aid_call_pane_cp10_ParamLimits

0x1d5d,	// (0x00036b20) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1d5d,	// (0x00036b20) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8ebc,	// (0x0003dc7f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8ebc,	// (0x0003dc7f) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1d5d,	// (0x00036b20) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6e9,	// (0x000444ac) popup_clock_analogue_window_cp10_g_ParamLimits

0x8ed2,	// (0x0003dc95) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd4ae,	// (0x00042271) cell_dialer2_keypad_pane_g2_ParamLimits

0xd4ae,	// (0x00042271) cell_dialer2_keypad_pane_g2

0x0001,

0xf7c4,	// (0x00044587) cell_dialer2_keypad_pane_g_ParamLimits

0xf7c4,	// (0x00044587) cell_dialer2_keypad_pane_g

0x1305,	// (0x000360c8) cell_dialer2_keypad_pane_t1

0xa0d7,	// (0x0003ee9a) main_cset_text2_pane_ParamLimits

0xa0d7,	// (0x0003ee9a) main_cset_text2_pane

0xd9c6,	// (0x00042789) area_vitu2_query_pane_g1_ParamLimits

0xa94f,	// (0x0003f712) area_vitu2_query_pane_g2_ParamLimits

0xf96f,	// (0x00044732) area_vitu2_query_pane_g_ParamLimits

0xda4a,	// (0x0004280d) area_vitu2_query_pane_t7_ParamLimits

0xda4a,	// (0x0004280d) area_vitu2_query_pane_t7

0xa69a,	// (0x0003f45d) bg_button_pane_cp018_ParamLimits

0xa9b0,	// (0x0003f773) bg_button_pane_cp021_ParamLimits

0xa9bc,	// (0x0003f77f) bg_button_pane_cp022_ParamLimits

0xa9cd,	// (0x0003f790) bg_vkb2_func_pane_cp08_ParamLimits

0xa69a,	// (0x0003f45d) bg_vkb2_func_pane_cp06_ParamLimits

0xa9b0,	// (0x0003f773) bg_vkb2_func_pane_cp07_ParamLimits

0xa9df,	// (0x0003f7a2) input_focus_pane_cp09_ParamLimits

0xae63,	// (0x0003fc26) cam6_autofocus_pane_ParamLimits

0xae63,	// (0x0003fc26) cam6_autofocus_pane

0xae7f,	// (0x0003fc42) cam6_image_uncrop_pane_ParamLimits

0xae7f,	// (0x0003fc42) cam6_image_uncrop_pane

0xaeb8,	// (0x0003fc7b) cam6_indi_pane_ParamLimits

0xaeb8,	// (0x0003fc7b) cam6_indi_pane

0xaed2,	// (0x0003fc95) cam6_mode_pane_ParamLimits

0xaed2,	// (0x0003fc95) cam6_mode_pane

0xaee6,	// (0x0003fca9) cam6_timer_pane_ParamLimits

0xaee6,	// (0x0003fca9) cam6_timer_pane

0xaefa,	// (0x0003fcbd) cam6_zoom_pane_ParamLimits

0xaefa,	// (0x0003fcbd) cam6_zoom_pane

0xaf15,	// (0x0003fcd8) cam6_mode_pane_g1_ParamLimits

0xaf15,	// (0x0003fcd8) cam6_mode_pane_g1

0xaf21,	// (0x0003fce4) cam6_mode_pane_g2_ParamLimits

0xaf21,	// (0x0003fce4) cam6_mode_pane_g2

0xaf2d,	// (0x0003fcf0) cam6_mode_pane_g3_ParamLimits

0xaf2d,	// (0x0003fcf0) cam6_mode_pane_g3

0xaf39,	// (0x0003fcfc) cam6_mode_pane_g4_ParamLimits

0xaf39,	// (0x0003fcfc) cam6_mode_pane_g4

0x0003,

0xfa57,	// (0x0004481a) cam6_mode_pane_g_ParamLimits

0xfa57,	// (0x0004481a) cam6_mode_pane_g

0x36f7,	// (0x000384ba) bg_tb_trans_pane_cp08_ParamLimits

0x36f7,	// (0x000384ba) bg_tb_trans_pane_cp08

0xdc85,	// (0x00042a48) cam6_battery_pane_ParamLimits

0xdc85,	// (0x00042a48) cam6_battery_pane

0xdc9b,	// (0x00042a5e) cam6_indi_pane_g1_ParamLimits

0xdc9b,	// (0x00042a5e) cam6_indi_pane_g1

0xdcad,	// (0x00042a70) cam6_indi_pane_g2_ParamLimits

0xdcad,	// (0x00042a70) cam6_indi_pane_g2

0xdcbf,	// (0x00042a82) cam6_indi_pane_g3_ParamLimits

0xdcbf,	// (0x00042a82) cam6_indi_pane_g3

0x0002,

0xfa60,	// (0x00044823) cam6_indi_pane_g_ParamLimits

0xfa60,	// (0x00044823) cam6_indi_pane_g

0xdcd1,	// (0x00042a94) cam6_indi_pane_t1_ParamLimits

0xdcd1,	// (0x00042a94) cam6_indi_pane_t1

0x9ae4,	// (0x0003e8a7) cam6_autofocus_pane_g1

0x9aec,	// (0x0003e8af) cam6_autofocus_pane_g2

0x9af4,	// (0x0003e8b7) cam6_autofocus_pane_g3

0x9afc,	// (0x0003e8bf) cam6_autofocus_pane_g4

0x0003,

0xfa67,	// (0x0004482a) cam6_autofocus_pane_g

0xdcf7,	// (0x00042aba) cam6_timer_pane_g1

0xdcff,	// (0x00042ac2) cam6_timer_pane_t1

0xdd0d,	// (0x00042ad0) cam6_zoom_cont_pane

0xdd15,	// (0x00042ad8) cam6_zoom_pane_g1

0xdd1e,	// (0x00042ae1) cam6_zoom_pane_g2

0xaf45,	// (0x0003fd08) cam6_zoom_pane_g3

0x0002,

0xfa70,	// (0x00044833) cam6_zoom_pane_g

0x12fb,	// (0x000360be) cam6_battery_pane_g1

0x12fb,	// (0x000360be) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00043e4f) cam6_battery_pane_g

0xdd15,	// (0x00042ad8) cam6_zoom_cont_pane_g1

0xdd1e,	// (0x00042ae1) cam6_zoom_cont_pane_g2

0xdd27,	// (0x00042aea) cam6_zoom_cont_pane_g3

0x0002,

0xfa77,	// (0x0004483a) cam6_zoom_cont_pane_g

0xaf63,	// (0x0003fd26) cam6_mode_pane_cp_ParamLimits

0xaf63,	// (0x0003fd26) cam6_mode_pane_cp

0xaf77,	// (0x0003fd3a) cam6_zoom_pane_cp_ParamLimits

0xaf77,	// (0x0003fd3a) cam6_zoom_pane_cp

0xaf8f,	// (0x0003fd52) vid6_image_uncrop_cif_pane_ParamLimits

0xaf8f,	// (0x0003fd52) vid6_image_uncrop_cif_pane

0xafbb,	// (0x0003fd7e) vid6_image_uncrop_nhd_pane_ParamLimits

0xafbb,	// (0x0003fd7e) vid6_image_uncrop_nhd_pane

0xafd8,	// (0x0003fd9b) vid6_image_uncrop_vga_pane_ParamLimits

0xafd8,	// (0x0003fd9b) vid6_image_uncrop_vga_pane

0xaff7,	// (0x0003fdba) vid6_image_uncrop_wvga_pane_ParamLimits

0xaff7,	// (0x0003fdba) vid6_image_uncrop_wvga_pane

0xb014,	// (0x0003fdd7) vid6_indi_pane_ParamLimits

0xb014,	// (0x0003fdd7) vid6_indi_pane

0x36f7,	// (0x000384ba) bg_tb_trans_pane_cp09_ParamLimits

0x36f7,	// (0x000384ba) bg_tb_trans_pane_cp09

0xdd3f,	// (0x00042b02) cam6_battery_pane_cp_ParamLimits

0xdd3f,	// (0x00042b02) cam6_battery_pane_cp

0xdd4b,	// (0x00042b0e) vid6_indi_pane_g1_ParamLimits

0xdd4b,	// (0x00042b0e) vid6_indi_pane_g1

0xdd5d,	// (0x00042b20) vid6_indi_pane_g2_ParamLimits

0xdd5d,	// (0x00042b20) vid6_indi_pane_g2

0xdd6f,	// (0x00042b32) vid6_indi_pane_g3_ParamLimits

0xdd6f,	// (0x00042b32) vid6_indi_pane_g3

0xdd84,	// (0x00042b47) vid6_indi_pane_g4_ParamLimits

0xdd84,	// (0x00042b47) vid6_indi_pane_g4

0xdd99,	// (0x00042b5c) vid6_indi_pane_g5_ParamLimits

0xdd99,	// (0x00042b5c) vid6_indi_pane_g5

0x0004,

0xfa7e,	// (0x00044841) vid6_indi_pane_g_ParamLimits

0xfa7e,	// (0x00044841) vid6_indi_pane_g

0xddb3,	// (0x00042b76) vid6_indi_pane_t1_ParamLimits

0xddb3,	// (0x00042b76) vid6_indi_pane_t1

0xddc9,	// (0x00042b8c) vid6_indi_pane_t2_ParamLimits

0xddc9,	// (0x00042b8c) vid6_indi_pane_t2

0xddf1,	// (0x00042bb4) vid6_indi_pane_t3_ParamLimits

0xddf1,	// (0x00042bb4) vid6_indi_pane_t3

0xde19,	// (0x00042bdc) vid6_indi_pane_t4_ParamLimits

0xde19,	// (0x00042bdc) vid6_indi_pane_t4

0x0003,

0xfa89,	// (0x0004484c) vid6_indi_pane_t_ParamLimits

0xfa89,	// (0x0004484c) vid6_indi_pane_t

0xde3d,	// (0x00042c00) wait_bar_pane_cp08

0xb037,	// (0x0003fdfa) main_cset_text2_pane_t1_ParamLimits

0xb037,	// (0x0003fdfa) main_cset_text2_pane_t1

0xaf4e,	// (0x0003fd11) listscroll_gen_pane_cp06_t1_ParamLimits

0xaf4e,	// (0x0003fd11) listscroll_gen_pane_cp06_t1

0x0bbc,	// (0x0003597f) main_cam6_set_pane

0x12bd,	// (0x00036080) bg_tb_trans_pane_cp06_ParamLimits

0x999e,	// (0x0003e761) cam4_indicators_pane_g1_ParamLimits

0x99af,	// (0x0003e772) cam4_indicators_pane_g2_ParamLimits

0xf801,	// (0x000445c4) cam4_indicators_pane_g_ParamLimits

0x99c7,	// (0x0003e78a) cam4_indicators_pane_t1_ParamLimits

0x0fe3,	// (0x00035da6) bg_tb_trans_pane_cp07_ParamLimits

0x9a78,	// (0x0003e83b) vid4_indicators_pane_g1_ParamLimits

0x9a8c,	// (0x0003e84f) vid4_indicators_pane_g2_ParamLimits

0x9aa0,	// (0x0003e863) vid4_indicators_pane_g3_ParamLimits

0x9ab1,	// (0x0003e874) vid4_indicators_pane_g4_ParamLimits

0xf813,	// (0x000445d6) vid4_indicators_pane_g_ParamLimits

0x9acd,	// (0x0003e890) vid4_indicators_pane_t1_ParamLimits

0xab13,	// (0x0003f8d6) vid4_progress_pane_g1_ParamLimits

0xab23,	// (0x0003f8e6) vid4_progress_pane_g2_ParamLimits

0xab33,	// (0x0003f8f6) vid4_progress_pane_g3_ParamLimits

0xab45,	// (0x0003f908) vid4_progress_pane_g4_ParamLimits

0xf9ba,	// (0x0004477d) vid4_progress_pane_g_ParamLimits

0xab5d,	// (0x0003f920) vid4_progress_pane_t1_ParamLimits

0xab73,	// (0x0003f936) vid4_progress_pane_t2_ParamLimits

0xab88,	// (0x0003f94b) vid4_progress_pane_t3_ParamLimits

0xf9c5,	// (0x00044788) vid4_progress_pane_t_ParamLimits

0xab9e,	// (0x0003f961) wait_bar_pane_cp07_ParamLimits

0xb06e,	// (0x0003fe31) main_cam6_set_pane_g2_ParamLimits

0xb06e,	// (0x0003fe31) main_cam6_set_pane_g2

0xb07a,	// (0x0003fe3d) main_cset6_listscroll_pane_ParamLimits

0xb07a,	// (0x0003fe3d) main_cset6_listscroll_pane

0xb0a5,	// (0x0003fe68) main_cset6_slider_pane_ParamLimits

0xb0a5,	// (0x0003fe68) main_cset6_slider_pane

0xb0b1,	// (0x0003fe74) main_cset6_text2_pane_ParamLimits

0xb0b1,	// (0x0003fe74) main_cset6_text2_pane

0xde4c,	// (0x00042c0f) main_cset6_text_pane

0xde54,	// (0x00042c17) main_cset_list_pane_copy1_ParamLimits

0xde54,	// (0x00042c17) main_cset_list_pane_copy1

0xde64,	// (0x00042c27) scroll_pane_cp028_copy1

0xb0c4,	// (0x0003fe87) cset_list_set_pane_copy1

0xb0da,	// (0x0003fe9d) aid_position_infowindow_above_copy1

0xb0e2,	// (0x0003fea5) aid_position_infowindow_below_copy1

0x4d7c,	// (0x00039b3f) cset_list_set_pane_g1_copy1

0x4d2b,	// (0x00039aee) cset_list_set_pane_g3_copy1_ParamLimits

0x4d2b,	// (0x00039aee) cset_list_set_pane_g3_copy1

0x4d3a,	// (0x00039afd) cset_list_set_pane_t1_copy1_ParamLimits

0x4d3a,	// (0x00039afd) cset_list_set_pane_t1_copy1

0x0fe3,	// (0x00035da6) list_highlight_pane_cp021_copy1_ParamLimits

0x0fe3,	// (0x00035da6) list_highlight_pane_cp021_copy1

0xde6d,	// (0x00042c30) cset6_slider_pane_ParamLimits

0xde6d,	// (0x00042c30) cset6_slider_pane

0xde99,	// (0x00042c5c) main_cset6_slider_pane_g1_ParamLimits

0xde99,	// (0x00042c5c) main_cset6_slider_pane_g1

0xb0ea,	// (0x0003fead) main_cset6_slider_pane_g2_ParamLimits

0xb0ea,	// (0x0003fead) main_cset6_slider_pane_g2

0xdec1,	// (0x00042c84) main_cset6_slider_pane_g3_ParamLimits

0xdec1,	// (0x00042c84) main_cset6_slider_pane_g3

0xb112,	// (0x0003fed5) main_cset6_slider_pane_g4_ParamLimits

0xb112,	// (0x0003fed5) main_cset6_slider_pane_g4

0xb11e,	// (0x0003fee1) main_cset6_slider_pane_g5_ParamLimits

0xb11e,	// (0x0003fee1) main_cset6_slider_pane_g5

0xd699,	// (0x0004245c) main_cset6_slider_pane_g7_ParamLimits

0xd699,	// (0x0004245c) main_cset6_slider_pane_g7

0xd6a5,	// (0x00042468) main_cset6_slider_pane_g8_ParamLimits

0xd6a5,	// (0x00042468) main_cset6_slider_pane_g8

0xb12c,	// (0x0003feef) main_cset6_slider_pane_g9_ParamLimits

0xb12c,	// (0x0003feef) main_cset6_slider_pane_g9

0xb138,	// (0x0003fefb) main_cset6_slider_pane_g10_ParamLimits

0xb138,	// (0x0003fefb) main_cset6_slider_pane_g10

0xb144,	// (0x0003ff07) main_cset6_slider_pane_g11_ParamLimits

0xb144,	// (0x0003ff07) main_cset6_slider_pane_g11

0xb150,	// (0x0003ff13) main_cset6_slider_pane_g12_ParamLimits

0xb150,	// (0x0003ff13) main_cset6_slider_pane_g12

0xdecd,	// (0x00042c90) main_cset6_slider_pane_g13_ParamLimits

0xdecd,	// (0x00042c90) main_cset6_slider_pane_g13

0xded9,	// (0x00042c9c) main_cset6_slider_pane_g14_ParamLimits

0xded9,	// (0x00042c9c) main_cset6_slider_pane_g14

0xb15c,	// (0x0003ff1f) main_cset6_slider_pane_g15_ParamLimits

0xb15c,	// (0x0003ff1f) main_cset6_slider_pane_g15

0xb174,	// (0x0003ff37) main_cset6_slider_pane_g16_ParamLimits

0xb174,	// (0x0003ff37) main_cset6_slider_pane_g16

0xb182,	// (0x0003ff45) main_cset6_slider_pane_g17_ParamLimits

0xb182,	// (0x0003ff45) main_cset6_slider_pane_g17

0x0011,

0xfa92,	// (0x00044855) main_cset6_slider_pane_g_ParamLimits

0xfa92,	// (0x00044855) main_cset6_slider_pane_g

0xdef1,	// (0x00042cb4) main_cset6_slider_pane_t1_ParamLimits

0xdef1,	// (0x00042cb4) main_cset6_slider_pane_t1

0xb19c,	// (0x0003ff5f) main_cset6_slider_pane_t2_ParamLimits

0xb19c,	// (0x0003ff5f) main_cset6_slider_pane_t2

0xb1c7,	// (0x0003ff8a) main_cset6_slider_pane_t3_ParamLimits

0xb1c7,	// (0x0003ff8a) main_cset6_slider_pane_t3

0xb1f2,	// (0x0003ffb5) main_cset6_slider_pane_t4_ParamLimits

0xb1f2,	// (0x0003ffb5) main_cset6_slider_pane_t4

0xb21d,	// (0x0003ffe0) main_cset6_slider_pane_t5_ParamLimits

0xb21d,	// (0x0003ffe0) main_cset6_slider_pane_t5

0xdf32,	// (0x00042cf5) main_cset6_slider_pane_t7_ParamLimits

0xdf32,	// (0x00042cf5) main_cset6_slider_pane_t7

0xb24a,	// (0x0004000d) main_cset6_slider_pane_t8_ParamLimits

0xb24a,	// (0x0004000d) main_cset6_slider_pane_t8

0xb26e,	// (0x00040031) main_cset6_slider_pane_t9_ParamLimits

0xb26e,	// (0x00040031) main_cset6_slider_pane_t9

0xb292,	// (0x00040055) main_cset6_slider_pane_t10_ParamLimits

0xb292,	// (0x00040055) main_cset6_slider_pane_t10

0xb2b6,	// (0x00040079) main_cset6_slider_pane_t11_ParamLimits

0xb2b6,	// (0x00040079) main_cset6_slider_pane_t11

0xdf68,	// (0x00042d2b) main_cset6_slider_pane_t14_ParamLimits

0xdf68,	// (0x00042d2b) main_cset6_slider_pane_t14

0xdfa1,	// (0x00042d64) main_cset6_slider_pane_t15_ParamLimits

0xdfa1,	// (0x00042d64) main_cset6_slider_pane_t15

0x000b,

0xfab7,	// (0x0004487a) main_cset6_slider_pane_t_ParamLimits

0xfab7,	// (0x0004487a) main_cset6_slider_pane_t

0xd767,	// (0x0004252a) cset_slider_pane_g1_copy1

0xd770,	// (0x00042533) cset_slider_pane_g2_copy1

0xd779,	// (0x0004253c) cset_slider_pane_g3_copy1

0x0bbc,	// (0x0003597f) bg_popup_sub_pane_cp011_copy1

0xdfe3,	// (0x00042da6) main_cset_text_pane_g1_copy1

0xd7fa,	// (0x000425bd) main_cset_text_pane_t1_copy1

0xd808,	// (0x000425cb) main_cset_text_pane_t2_copy1

0xd816,	// (0x000425d9) main_cset_text_pane_t3_copy1

0xd824,	// (0x000425e7) main_cset_text_pane_t4_copy1

0xd832,	// (0x000425f5) main_cset_text_pane_t5_copy1

0xdfeb,	// (0x00042dae) main_cset_text_pane_t6_copy1

0xdff9,	// (0x00042dbc) main_cset_text_pane_t7_copy1

0xb2dc,	// (0x0004009f) main_cset_text2_pane_t1_copy1

0x0fe3,	// (0x00035da6) main_ncimui_pane

0x8165,	// (0x0003cf28) popup_query_ncimui_window_ParamLimits

0x8165,	// (0x0003cf28) popup_query_ncimui_window

0x4ce7,	// (0x00039aaa) field_cale_ev2_pane_g4_ParamLimits

0x4ce7,	// (0x00039aaa) field_cale_ev2_pane_g4

0x9287,	// (0x0003e04a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9287,	// (0x0003e04a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf79b,	// (0x0004455e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf79b,	// (0x0004455e) cell_video_dialer_keypad_pane_g

0x929f,	// (0x0003e062) cell_video_dialer_keypad_pane_t1

0x0bbc,	// (0x0003597f) bg_popup_window_pane_cp012

0x1be6,	// (0x000369a9) heading_pane_cp06

0xe031,	// (0x00042df4) ncim_query_content_pane

0x0bbc,	// (0x0003597f) bg_popup_heading_pane_cp01

0xe039,	// (0x00042dfc) ncim_heading_pane_t1

0xe047,	// (0x00042e0a) ncim_indicator_popup_pane

0xe059,	// (0x00042e1c) ncim_query_button_pane

0xe06d,	// (0x00042e30) ncim_query_content_pane_t1

0xe07f,	// (0x00042e42) ncim_query_content_pane_t2

0x0005,

0xfafb,	// (0x000448be) ncim_query_content_pane_t

0xe0b9,	// (0x00042e7c) ncim_query_list_pane

0xe0cb,	// (0x00042e8e) ncim_query_popup_pane

0xe047,	// (0x00042e0a) ncim_indicator_popup_pane_ParamLimits

0xb430,	// (0x000401f3) ncim_query_content_pane_g1_ParamLimits

0xb430,	// (0x000401f3) ncim_query_content_pane_g1

0xe06d,	// (0x00042e30) ncim_query_content_pane_t1_ParamLimits

0xe07f,	// (0x00042e42) ncim_query_content_pane_t2_ParamLimits

0xb43c,	// (0x000401ff) ncim_query_content_pane_t3_ParamLimits

0xb43c,	// (0x000401ff) ncim_query_content_pane_t3

0xb459,	// (0x0004021c) ncim_query_content_pane_t4_ParamLimits

0xb459,	// (0x0004021c) ncim_query_content_pane_t4

0xb476,	// (0x00040239) ncim_query_content_pane_t5_ParamLimits

0xb476,	// (0x00040239) ncim_query_content_pane_t5

0xe091,	// (0x00042e54) ncim_query_content_pane_t6_ParamLimits

0xe091,	// (0x00042e54) ncim_query_content_pane_t6

0xfafb,	// (0x000448be) ncim_query_content_pane_t_ParamLimits

0xe0b9,	// (0x00042e7c) ncim_query_list_pane_ParamLimits

0xe0cb,	// (0x00042e8e) ncim_query_popup_pane_ParamLimits

0xe0df,	// (0x00042ea2) wait_bar_pane_cp04

0x0bbc,	// (0x0003597f) input_focus_pane_cp011

0xe0e7,	// (0x00042eaa) ncim_query_popup_pane_t1

0xe0f5,	// (0x00042eb8) ncim_list_query_list_pane_ParamLimits

0xe0f5,	// (0x00042eb8) ncim_list_query_list_pane

0x0bbc,	// (0x0003597f) bg_button_pane_cp027

0xe102,	// (0x00042ec5) ncim_query_button_pane_g1

0x0bbc,	// (0x0003597f) list_highlight_pane_cp012

0xe10c,	// (0x00042ecf) ncim_list_query_list_pane_g1

0xe114,	// (0x00042ed7) ncim_list_query_list_pane_t1

0x99bb,	// (0x0003e77e) cam4_indicators_pane_g3_ParamLimits

0x99bb,	// (0x0003e77e) cam4_indicators_pane_g3

0x9abd,	// (0x0003e880) vid4_indicators_pane_g5_ParamLimits

0x9abd,	// (0x0003e880) vid4_indicators_pane_g5

0xab51,	// (0x0003f914) vid4_progress_pane_g5_ParamLimits

0xab51,	// (0x0003f914) vid4_progress_pane_g5

0xb31c,	// (0x000400df) main_ncimui_pane_g1

0xb384,	// (0x00040147) ncimui_group_query_pane_ParamLimits

0xb384,	// (0x00040147) ncimui_group_query_pane

0xb3cc,	// (0x0004018f) ncimui_list_pane_ParamLimits

0xb3cc,	// (0x0004018f) ncimui_list_pane

0xb3f3,	// (0x000401b6) ncimui_text_pane_ParamLimits

0xb3f3,	// (0x000401b6) ncimui_text_pane

0xb493,	// (0x00040256) ncimui_text_pane_t1_ParamLimits

0xb493,	// (0x00040256) ncimui_text_pane_t1

0xe122,	// (0x00042ee5) ncimui_list_single_graphic_pane_ParamLimits

0xe122,	// (0x00042ee5) ncimui_list_single_graphic_pane

0xb4b2,	// (0x00040275) ncimui_query_pane_ParamLimits

0xb4b2,	// (0x00040275) ncimui_query_pane

0x0bbc,	// (0x0003597f) list_highlight_pane_cp013

0xe132,	// (0x00042ef5) ncim_list_query_list_pane_t1_copy1

0xe140,	// (0x00042f03) ncim_list_single_graphic_pane_g1

0xb4c5,	// (0x00040288) ncim_query_button_pane_cp01

0xb4d1,	// (0x00040294) ncim_query_entry_pane_ParamLimits

0xb4d1,	// (0x00040294) ncim_query_entry_pane

0xb4e4,	// (0x000402a7) ncimui_query_pane_g1

0xb4f0,	// (0x000402b3) ncimui_query_pane_t1_ParamLimits

0xb4f0,	// (0x000402b3) ncimui_query_pane_t1

0x0fe3,	// (0x00035da6) input_focus_pane_cp012

0xe148,	// (0x00042f0b) ncim_query_entry_pane_t1

0x1359,	// (0x0003611c) main_im_pane_ParamLimits

0x0fe3,	// (0x00035da6) main_mobtv_pane_ParamLimits

0x0fe3,	// (0x00035da6) main_mobtv_pane

0xb190,	// (0x0003ff53) main_cset6_slider_pane_g18_ParamLimits

0xb190,	// (0x0003ff53) main_cset6_slider_pane_g18

0xdee5,	// (0x00042ca8) main_cset6_slider_pane_g19_ParamLimits

0xdee5,	// (0x00042ca8) main_cset6_slider_pane_g19

0x1fd9,	// (0x00036d9c) bg_main_mobtv_pane_ParamLimits

0x1fd9,	// (0x00036d9c) bg_main_mobtv_pane

0xb509,	// (0x000402cc) main_mobtv_info_pane

0xb514,	// (0x000402d7) main_mobtv_loading_pane_ParamLimits

0xb514,	// (0x000402d7) main_mobtv_loading_pane

0xe15a,	// (0x00042f1d) main_mobtv_pg_channel_list_pane

0xe164,	// (0x00042f27) main_mobtv_pg_hdr_pane

0xb521,	// (0x000402e4) main_mobtv_programe_curr_pane_ParamLimits

0xb521,	// (0x000402e4) main_mobtv_programe_curr_pane

0xb52e,	// (0x000402f1) main_mobtv_programe_next_pane_ParamLimits

0xb52e,	// (0x000402f1) main_mobtv_programe_next_pane

0xe16d,	// (0x00042f30) popup_mobtv_noti_window

0x12fb,	// (0x000360be) main_tv_pg_hdr_pane_g1

0xe175,	// (0x00042f38) main_tv_pg_hdr_pane_g2

0xe17d,	// (0x00042f40) main_tv_pg_hdr_pane_g3

0xe185,	// (0x00042f48) main_tv_pg_hdr_pane_g4

0xe18d,	// (0x00042f50) main_tv_pg_hdr_pane_g5

0xe197,	// (0x00042f5a) main_tv_pg_hdr_pane_g6

0xe1a1,	// (0x00042f64) main_tv_pg_hdr_pane_g7

0xe1ab,	// (0x00042f6e) main_tv_pg_hdr_pane_g8

0xe1b5,	// (0x00042f78) main_tv_pg_hdr_pane_g9

0xe1bf,	// (0x00042f82) main_tv_pg_hdr_pane_g10

0xe1c9,	// (0x00042f8c) main_tv_pg_hdr_pane_g11

0x000a,

0xfb08,	// (0x000448cb) main_tv_pg_hdr_pane_g

0xe1d3,	// (0x00042f96) main_tv_pg_hdr_pane_t1

0xe1e1,	// (0x00042fa4) main_tv_pg_hdr_pane_t2

0xe1ef,	// (0x00042fb2) main_tv_pg_hdr_pane_t3

0xe1ff,	// (0x00042fc2) main_tv_pg_hdr_pane_t4

0xe20f,	// (0x00042fd2) main_tv_pg_hdr_pane_t5

0x0004,

0xfb1f,	// (0x000448e2) main_tv_pg_hdr_pane_t

0xe21f,	// (0x00042fe2) single_mobtv_pg_channel_pane_ParamLimits

0xe21f,	// (0x00042fe2) single_mobtv_pg_channel_pane

0xe231,	// (0x00042ff4) single_mobtv_pg_channel_table_pane

0x1886,	// (0x00036649) single_mobtv_pg_channel_thumb_pane

0xe23a,	// (0x00042ffd) single_tv_pg_channel_pane_g1

0xe243,	// (0x00043006) single_tv_pg_channel_pane_g2

0x0001,

0xfb2a,	// (0x000448ed) single_tv_pg_channel_pane_g

0x12bd,	// (0x00036080) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x12bd,	// (0x00036080) bg_single_mobtv_pg_channel_thumb_pane

0xe24c,	// (0x0004300f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe24c,	// (0x0004300f) single_mobtv_pg_channel_thumb_pane_g1

0xe25a,	// (0x0004301d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe25a,	// (0x0004301d) single_mobtv_pg_channel_thumb_pane_g2

0xe266,	// (0x00043029) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe266,	// (0x00043029) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb2f,	// (0x000448f2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb2f,	// (0x000448f2) single_mobtv_pg_channel_thumb_pane_g

0xe272,	// (0x00043035) single_mobtv_pg_channel_thumb_pane_t1

0xe280,	// (0x00043043) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb36,	// (0x000448f9) single_mobtv_pg_channel_thumb_pane_t

0x12fb,	// (0x000360be) bg_single_mobtv_pg_channel_table_pane_g1

0x12fb,	// (0x000360be) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00043e4f) bg_single_mobtv_pg_channel_table_pane_g

0xe28e,	// (0x00043051) single_mobtv_pg_channel_table_pane_t1

0xe29c,	// (0x0004305f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb3b,	// (0x000448fe) single_mobtv_pg_channel_table_pane_t

0xb543,	// (0x00040306) main_mobtv_info_pane_g1_ParamLimits

0xb543,	// (0x00040306) main_mobtv_info_pane_g1

0xb55f,	// (0x00040322) main_mobtv_info_pane_t1_ParamLimits

0xb55f,	// (0x00040322) main_mobtv_info_pane_t1

0xb5d7,	// (0x0004039a) main_mobtv_info_pane_t2_ParamLimits

0xb5d7,	// (0x0004039a) main_mobtv_info_pane_t2

0x0002,

0xfb45,	// (0x00044908) main_mobtv_info_pane_t_ParamLimits

0xfb45,	// (0x00044908) main_mobtv_info_pane_t

0xb666,	// (0x00040429) wait_bar_pane_cp05

0xb678,	// (0x0004043b) main_mobtv_loading_pane_g1_ParamLimits

0xb678,	// (0x0004043b) main_mobtv_loading_pane_g1

0xb686,	// (0x00040449) main_mobtv_loading_pane_g2_ParamLimits

0xb686,	// (0x00040449) main_mobtv_loading_pane_g2

0xb692,	// (0x00040455) main_mobtv_loading_pane_g3_ParamLimits

0xb692,	// (0x00040455) main_mobtv_loading_pane_g3

0x0002,

0xfb4c,	// (0x0004490f) main_mobtv_loading_pane_g_ParamLimits

0xfb4c,	// (0x0004490f) main_mobtv_loading_pane_g

0xe2aa,	// (0x0004306d) main_mobtv_loading_pane_t1_ParamLimits

0xe2aa,	// (0x0004306d) main_mobtv_loading_pane_t1

0xe2c2,	// (0x00043085) main_mobtv_loading_pane_t2_ParamLimits

0xe2c2,	// (0x00043085) main_mobtv_loading_pane_t2

0x0001,

0xfb53,	// (0x00044916) main_mobtv_loading_pane_t_ParamLimits

0xfb53,	// (0x00044916) main_mobtv_loading_pane_t

0xb6a0,	// (0x00040463) wait_bar_pane_cp06_ParamLimits

0xb6a0,	// (0x00040463) wait_bar_pane_cp06

0xe2e6,	// (0x000430a9) main_mobtv_programe_curr_pane_t1

0xe2f4,	// (0x000430b7) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb58,	// (0x0004491b) main_mobtv_programe_curr_pane_t

0xe302,	// (0x000430c5) main_mobtv_programe_next_pane_t1

0xe310,	// (0x000430d3) main_mobtv_programe_next_pane_t2

0xe31e,	// (0x000430e1) main_mobtv_programe_next_pane_t3

0x0002,

0xfb5d,	// (0x00044920) main_mobtv_programe_next_pane_t

0x0bbc,	// (0x0003597f) bg_popup_mobtv_noti_window_pane

0xe32c,	// (0x000430ef) popup_mobtv_noti_window_g1

0xe334,	// (0x000430f7) popup_mobtv_noti_window_t1

0xe342,	// (0x00043105) popup_mobtv_noti_window_t2

0x0001,

0xfb64,	// (0x00044927) popup_mobtv_noti_window_t

0x12fb,	// (0x000360be) bg_popup_mobtv_noti_window_pane_g1

0x0bbc,	// (0x0003597f) sc_clock_pane

0x0bbc,	// (0x0003597f) main_fs_bigclock_pane

0xad16,	// (0x0003fad9) blid2_tripm_pane_t4_ParamLimits

0xad16,	// (0x0003fad9) blid2_tripm_pane_t4

0x12cb,	// (0x0003608e) sc_clock_pane_g1_ParamLimits

0x12cb,	// (0x0003608e) sc_clock_pane_g1

0x1319,	// (0x000360dc) sc_clock_pane_t1_ParamLimits

0x1319,	// (0x000360dc) sc_clock_pane_t1

0x1319,	// (0x000360dc) sc_clock_pane_t2_ParamLimits

0x1319,	// (0x000360dc) sc_clock_pane_t2

0x1319,	// (0x000360dc) sc_clock_pane_t3_ParamLimits

0x1319,	// (0x000360dc) sc_clock_pane_t3

0x0004,

0xfb69,	// (0x0004492c) sc_clock_pane_t_ParamLimits

0xfb69,	// (0x0004492c) sc_clock_pane_t

0xbd94,	// (0x00040b57) main_fs_bigclock_indicator_pane_ParamLimits

0xbd94,	// (0x00040b57) main_fs_bigclock_indicator_pane

0xb6e7,	// (0x000404aa) main_fs_bigclock_pane_g1_ParamLimits

0xb6e7,	// (0x000404aa) main_fs_bigclock_pane_g1

0xbda0,	// (0x00040b63) main_fs_bigclock_pane_t1_ParamLimits

0xbda0,	// (0x00040b63) main_fs_bigclock_pane_t1

0xbdb2,	// (0x00040b75) main_fs_bigclock_pane_t2_ParamLimits

0xbdb2,	// (0x00040b75) main_fs_bigclock_pane_t2

0xbdc6,	// (0x00040b89) main_fs_bigclock_pane_t3_ParamLimits

0xbdc6,	// (0x00040b89) main_fs_bigclock_pane_t3

0x0002,

0xfcec,	// (0x00044aaf) main_fs_bigclock_pane_t_ParamLimits

0xfcec,	// (0x00044aaf) main_fs_bigclock_pane_t

0xeb8d,	// (0x00043950) main_fs_bigclock_indicator_pane_g1

0xe061,	// (0x00042e24) ncim_query_content_pane_g2_ParamLimits

0xe061,	// (0x00042e24) ncim_query_content_pane_g2

0x0001,

0xfaf6,	// (0x000448b9) ncim_query_content_pane_g_ParamLimits

0xfaf6,	// (0x000448b9) ncim_query_content_pane_g

0x1319,	// (0x000360dc) sc_clock_pane_t4_ParamLimits

0x1319,	// (0x000360dc) sc_clock_pane_t4

0x0fe3,	// (0x00035da6) main_radioblah_pane

0x9879,	// (0x0003e63c) cell_call4_button_pane_t1_copy1_ParamLimits

0x9879,	// (0x0003e63c) cell_call4_button_pane_t1_copy1

0xb336,	// (0x000400f9) main_ncimui_pane_t1_ParamLimits

0xb336,	// (0x000400f9) main_ncimui_pane_t1

0xb350,	// (0x00040113) main_ncimui_pane_t2_ParamLimits

0xb350,	// (0x00040113) main_ncimui_pane_t2

0x0002,

0xfaef,	// (0x000448b2) main_ncimui_pane_t_ParamLimits

0xfaef,	// (0x000448b2) main_ncimui_pane_t

0x20db,	// (0x00036e9e) main_radioblah_anim_pane_ParamLimits

0x20db,	// (0x00036e9e) main_radioblah_anim_pane

0x20db,	// (0x00036e9e) main_radioblah_info_pane_ParamLimits

0x20db,	// (0x00036e9e) main_radioblah_info_pane

0x20c7,	// (0x00036e8a) main_radioblah_pane_t1_ParamLimits

0x20c7,	// (0x00036e8a) main_radioblah_pane_t1

0x20c7,	// (0x00036e8a) main_radioblah_pane_t2_ParamLimits

0x20c7,	// (0x00036e8a) main_radioblah_pane_t2

0x0003,

0xfb8a,	// (0x0004494d) main_radioblah_pane_t_ParamLimits

0xfb8a,	// (0x0004494d) main_radioblah_pane_t

0x12af,	// (0x00036072) main_radioblah_rocker_ctrl_pane_ParamLimits

0x12af,	// (0x00036072) main_radioblah_rocker_ctrl_pane

0x3705,	// (0x000384c8) main_radioblah_info_pane_t1_ParamLimits

0x3705,	// (0x000384c8) main_radioblah_info_pane_t1

0xe4b8,	// (0x0004327b) main_radioblah_info_pane_t2_ParamLimits

0xe4b8,	// (0x0004327b) main_radioblah_info_pane_t2

0x0003,

0xfb93,	// (0x00044956) main_radioblah_info_pane_t_ParamLimits

0xfb93,	// (0x00044956) main_radioblah_info_pane_t

0x12fb,	// (0x000360be) main_radioblah_rocker_ctrl_pane_g1

0x12fb,	// (0x000360be) main_radioblah_rocker_ctrl_pane_g2

0x12fb,	// (0x000360be) main_radioblah_rocker_ctrl_pane_g3

0x12fb,	// (0x000360be) main_radioblah_rocker_ctrl_pane_g4

0x12fb,	// (0x000360be) main_radioblah_rocker_ctrl_pane_g5

0x12fb,	// (0x000360be) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb9c,	// (0x0004495f) main_radioblah_rocker_ctrl_pane_g

0xb2dc,	// (0x0004009f) main_cset_text2_pane_t1_copy1_ParamLimits

0x98ec,	// (0x0003e6af) cam4_image_uncrop_qvga_pane

0x9a2d,	// (0x0003e7f0) vid4_image_uncrop_qcif_pane

0xaeaa,	// (0x0003fc6d) cam6_image_uncrop_qvga_pane_ParamLimits

0xaeaa,	// (0x0003fc6d) cam6_image_uncrop_qvga_pane

0xdd2f,	// (0x00042af2) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd2f,	// (0x00042af2) vid6_image_uncrop_qcif_pane

0x0bbc,	// (0x0003597f) bg_popup_preview_window_pane_cp03

0xe007,	// (0x00042dca) list_cset_text2_pane

0xe00f,	// (0x00042dd2) main_cset6_text2_pane_g1

0xe017,	// (0x00042dda) main_cset6_text2_pane_t1

0xb72b,	// (0x000404ee) list_cset_text2_pane_t1_ParamLimits

0xb72b,	// (0x000404ee) list_cset_text2_pane_t1

0x0fe3,	// (0x00035da6) main_radioblah_pane_ParamLimits

0xb652,	// (0x00040415) main_mobtv_info_pane_t3_ParamLimits

0xb652,	// (0x00040415) main_mobtv_info_pane_t3

0x1fd9,	// (0x00036d9c) main_radioblah_pane_g1

0xe488,	// (0x0004324b) main_radioblah_info_pane_g1

0x1319,	// (0x000360dc) main_radioblah_info_pane_t3_ParamLimits

0x1319,	// (0x000360dc) main_radioblah_info_pane_t3

0x723a,	// (0x0003bffd) highlight_cell_cale_month_pane_ParamLimits

0x723a,	// (0x0003bffd) highlight_cell_cale_month_pane

0x0bbc,	// (0x0003597f) main_phob_fisheye_pane

0x39be,	// (0x00038781) scroll_pane_cp0031_ParamLimits

0x39be,	// (0x00038781) scroll_pane_cp0031

0xde3d,	// (0x00042c00) wait_bar_pane_cp08_ParamLimits

0xb0c4,	// (0x0003fe87) cset_list_set_pane_copy1_ParamLimits

0xe507,	// (0x000432ca) highlight_cell_cale_month_pane_g1

0xb74c,	// (0x0004050f) highlight_cell_cale_month_pane_t1

0xdab6,	// (0x00042879) list_gen_pane_cp01

0xd684,	// (0x00042447) scroll_pane_01

0xb75a,	// (0x0004051d) list_single_double_fisheye_pane

0xb763,	// (0x00040526) list_double_fisheye_pane_g1_ParamLimits

0xb763,	// (0x00040526) list_double_fisheye_pane_g1

0xb76f,	// (0x00040532) list_double_fisheye_pane_g2_ParamLimits

0xb76f,	// (0x00040532) list_double_fisheye_pane_g2

0xb783,	// (0x00040546) list_double_fisheye_pane_g3_ParamLimits

0xb783,	// (0x00040546) list_double_fisheye_pane_g3

0x0004,

0xfba9,	// (0x0004496c) list_double_fisheye_pane_g_ParamLimits

0xfba9,	// (0x0004496c) list_double_fisheye_pane_g

0xb7ac,	// (0x0004056f) list_double_fisheye_pane_t1_ParamLimits

0xb7ac,	// (0x0004056f) list_double_fisheye_pane_t1

0xb7c7,	// (0x0004058a) list_double_fisheye_pane_t2_ParamLimits

0xb7c7,	// (0x0004058a) list_double_fisheye_pane_t2

0x0001,

0xfbb4,	// (0x00044977) list_double_fisheye_pane_t_ParamLimits

0xfbb4,	// (0x00044977) list_double_fisheye_pane_t

0x0bbc,	// (0x0003597f) main_call5_pane

0x12af,	// (0x00036072) sc_swipe_pane_ParamLimits

0x12af,	// (0x00036072) sc_swipe_pane

0xb7f5,	// (0x000405b8) call5_image_pane_ParamLimits

0xb7f5,	// (0x000405b8) call5_image_pane

0xb805,	// (0x000405c8) call5_swipe_1_pane_ParamLimits

0xb805,	// (0x000405c8) call5_swipe_1_pane

0xb811,	// (0x000405d4) call5_swipe_2_pane_ParamLimits

0xb811,	// (0x000405d4) call5_swipe_2_pane

0xb82b,	// (0x000405ee) popup_call5_audio_first_window_ParamLimits

0xb82b,	// (0x000405ee) popup_call5_audio_first_window

0x12bd,	// (0x00036080) call5_swipe_1_pane_g1_ParamLimits

0x12bd,	// (0x00036080) call5_swipe_1_pane_g1

0xe50f,	// (0x000432d2) call5_swipe_1_pane_g2_ParamLimits

0xe50f,	// (0x000432d2) call5_swipe_1_pane_g2

0x0001,

0xfbb9,	// (0x0004497c) call5_swipe_1_pane_g_ParamLimits

0xfbb9,	// (0x0004497c) call5_swipe_1_pane_g

0xe51b,	// (0x000432de) call5_swipe_1_pane_t1_ParamLimits

0xe51b,	// (0x000432de) call5_swipe_1_pane_t1

0x12bd,	// (0x00036080) call5_swipe_2_pane_g1_ParamLimits

0x12bd,	// (0x00036080) call5_swipe_2_pane_g1

0xe530,	// (0x000432f3) call5_swipe_2_pane_g2_ParamLimits

0xe530,	// (0x000432f3) call5_swipe_2_pane_g2

0x0001,

0xfbbe,	// (0x00044981) call5_swipe_2_pane_g_ParamLimits

0xfbbe,	// (0x00044981) call5_swipe_2_pane_g

0xe53c,	// (0x000432ff) call5_swipe_2_pane_t1_ParamLimits

0xe53c,	// (0x000432ff) call5_swipe_2_pane_t1

0x12bd,	// (0x00036080) sc_swipe_pane_g1_ParamLimits

0x12bd,	// (0x00036080) sc_swipe_pane_g1

0x12cb,	// (0x0003608e) sc_swipe_pane_g2_ParamLimits

0x12cb,	// (0x0003608e) sc_swipe_pane_g2

0x0001,

0xfbc3,	// (0x00044986) sc_swipe_pane_g_ParamLimits

0xfbc3,	// (0x00044986) sc_swipe_pane_g

0x1305,	// (0x000360c8) sc_swipe_pane_t1_ParamLimits

0x1305,	// (0x000360c8) sc_swipe_pane_t1

0x0bbc,	// (0x0003597f) main_cmail_launcher_pane

0xb839,	// (0x000405fc) aid_size_cell_cmail_l_ParamLimits

0xb839,	// (0x000405fc) aid_size_cell_cmail_l

0xb847,	// (0x0004060a) grid_cmail_l_pane_ParamLimits

0xb847,	// (0x0004060a) grid_cmail_l_pane

0xb857,	// (0x0004061a) cell_cmail_l_pane_ParamLimits

0xb857,	// (0x0004061a) cell_cmail_l_pane

0xe551,	// (0x00043314) cell_cmail_l_pane_g1_ParamLimits

0xe551,	// (0x00043314) cell_cmail_l_pane_g1

0xe55d,	// (0x00043320) cell_cmail_l_pane_t1_ParamLimits

0xe55d,	// (0x00043320) cell_cmail_l_pane_t1

0xe573,	// (0x00043336) cell_cmail_l_pane_t2_ParamLimits

0xe573,	// (0x00043336) cell_cmail_l_pane_t2

0x0001,

0xfbc8,	// (0x0004498b) cell_cmail_l_pane_t_ParamLimits

0xfbc8,	// (0x0004498b) cell_cmail_l_pane_t

0x0fe3,	// (0x00035da6) grid_highlight_pane_cp018_ParamLimits

0x0fe3,	// (0x00035da6) grid_highlight_pane_cp018

0x5683,	// (0x0003a446) main2_pane_ParamLimits

0x5683,	// (0x0003a446) main2_pane

0x13e8,	// (0x000361ab) popup_sp_fs_action_menu_bg_pane_g1

0x13f0,	// (0x000361b3) popup_sp_fs_action_menu_bg_pane_g2

0x13f8,	// (0x000361bb) popup_sp_fs_action_menu_bg_pane_g3

0x1400,	// (0x000361c3) popup_sp_fs_action_menu_bg_pane_g4

0x1408,	// (0x000361cb) popup_sp_fs_action_menu_bg_pane_g5

0x1410,	// (0x000361d3) popup_sp_fs_action_menu_bg_pane_g6

0x1418,	// (0x000361db) popup_sp_fs_action_menu_bg_pane_g7

0x1420,	// (0x000361e3) popup_sp_fs_action_menu_bg_pane_g8

0x1431,	// (0x000361f4) popup_sp_fs_action_menu_bg_pane_g9

0x1439,	// (0x000361fc) popup_sp_fs_action_menu_bg_pane_g10

0x1439,	// (0x000361fc) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x00043ea0) popup_sp_fs_action_menu_bg_pane_g

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g3_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g3_g1

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g3_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g3_g2

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g3_g3_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x00043f4e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x00043f4e) list_medium_line_x2_t3_g3_g

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g3_t1

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g3_t2

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x00043f55) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x00043f55) list_medium_line_x2_t3_g3_t

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g2_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g2_g1

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g2_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x00043f5c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x00043f5c) list_medium_line_x2_t3_g2_g

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g2_t1

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g2_t2

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x00043f55) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x00043f55) list_medium_line_x2_t3_g2_t

0x12bd,	// (0x00036080) list_medium_line_x2_t4_g4_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t4_g4_g1

0x12bd,	// (0x00036080) list_medium_line_x2_t4_g4_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t4_g4_g2

0x12bd,	// (0x00036080) list_medium_line_x2_t4_g4_g3_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t4_g4_g3

0x12bd,	// (0x00036080) list_medium_line_x2_t4_g4_g4_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x00043f61) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x00043f61) list_medium_line_x2_t4_g4_g

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g4_t1

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g4_t2

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g4_t3

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x00043f6a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x00043f6a) list_medium_line_x2_t4_g4_t

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g4_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g4_g1

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g4_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g4_g2

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g4_g3_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g4_g3

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g4_g4_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x00043f61) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x00043f61) list_medium_line_x2_t2_g4_g

0x1305,	// (0x000360c8) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t2_g4_t1

0x1305,	// (0x000360c8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x00043fd1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x00043fd1) list_medium_line_x2_t2_g4_t

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g3_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g3_g1

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g3_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g3_g2

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g3_g3_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x00043f4e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x00043f4e) list_medium_line_x2_t2_g3_g

0x1305,	// (0x000360c8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t2_g3_t1

0x1305,	// (0x000360c8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x00043fd1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x00043fd1) list_medium_line_x2_t2_g3_t

0x741b,	// (0x0003c1de) main_sp_fs_list_pane_ParamLimits

0x741b,	// (0x0003c1de) main_sp_fs_list_pane

0x7427,	// (0x0003c1ea) sp_fs_scroll_pane_ParamLimits

0x7427,	// (0x0003c1ea) sp_fs_scroll_pane

0x1a5f,	// (0x00036822) list_medium_line_x2_t3_t1

0x1a5f,	// (0x00036822) list_medium_line_x2_t3_t2

0x1a5f,	// (0x00036822) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x0004401c) list_medium_line_x2_t3_t

0x1a5f,	// (0x00036822) list_medium_line_x3_t4_t1

0x1a5f,	// (0x00036822) list_medium_line_x3_t4_t2

0x1a5f,	// (0x00036822) list_medium_line_x3_t4_t3

0x1a5f,	// (0x00036822) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x00044023) list_medium_line_x3_t4_t

0x1a5f,	// (0x00036822) list_medium_line_x4_t5_t1

0x1a5f,	// (0x00036822) list_medium_line_x4_t5_t2

0x1a5f,	// (0x00036822) list_medium_line_x4_t5_t3

0x1a5f,	// (0x00036822) list_medium_line_x4_t5_t4

0x1a5f,	// (0x00036822) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x0004402c) list_medium_line_x4_t5_t

0x12bd,	// (0x00036080) list_medium_line_t4_g4_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t4_g4_g1

0x12bd,	// (0x00036080) list_medium_line_t4_g4_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t4_g4_g2

0x12bd,	// (0x00036080) list_medium_line_t4_g4_g3_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t4_g4_g3

0x12bd,	// (0x00036080) list_medium_line_t4_g4_g4_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x00043f61) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x00043f61) list_medium_line_t4_g4_g

0x1305,	// (0x000360c8) list_medium_line_t4_g4_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t4_g4_t1

0x1305,	// (0x000360c8) list_medium_line_t4_g4_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t4_g4_t2

0x1305,	// (0x000360c8) list_medium_line_t4_g4_t3_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t4_g4_t3

0x1305,	// (0x000360c8) list_medium_line_t4_g4_t4_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x00043f6a) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x00043f6a) list_medium_line_t4_g4_t

0x751a,	// (0x0003c2dd) chi_dic_find_pane_g1

0x8122,	// (0x0003cee5) main_tport_pane

0x1a5f,	// (0x00036822) list_medium_line_plain_t1

0x12bd,	// (0x00036080) list_medium_line_t2_g2_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t2_g2_g1

0x12bd,	// (0x00036080) list_medium_line_t2_g2_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x00043f5c) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x00043f5c) list_medium_line_t2_g2_g

0x1305,	// (0x000360c8) list_medium_line_t2_g2_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t2_g2_t1

0x1305,	// (0x000360c8) list_medium_line_t2_g2_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x00043fd1) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x00043fd1) list_medium_line_t2_g2_t

0x4d4f,	// (0x00039b12) aid_sp_fs_list_icon_a_sm

0x4d57,	// (0x00039b1a) aid_sp_fs_list_icon_d

0x4d5f,	// (0x00039b22) aid_sp_fs_text_primary

0xdabf,	// (0x00042882) aid_sp_fs_text_secondary

0x0bbc,	// (0x0003597f) list_medium_line

0x0bbc,	// (0x0003597f) list_medium_line_g2

0x0bbc,	// (0x0003597f) list_medium_line_g3

0x0bbc,	// (0x0003597f) list_medium_line_plain

0x0bbc,	// (0x0003597f) list_medium_line_plain_t2

0x0bbc,	// (0x0003597f) list_medium_line_plain_t3

0x0bbc,	// (0x0003597f) list_medium_line_right_icon

0x0bbc,	// (0x0003597f) list_medium_line_right_iconx2

0x0bbc,	// (0x0003597f) list_medium_line_t2

0x0bbc,	// (0x0003597f) list_medium_line_t2_g2

0x0bbc,	// (0x0003597f) list_medium_line_t2_g3

0x0bbc,	// (0x0003597f) list_medium_line_t2_right_icon

0x0bbc,	// (0x0003597f) list_medium_line_t2_right_iconx2

0x0bbc,	// (0x0003597f) list_medium_line_t3

0x0bbc,	// (0x0003597f) list_medium_line_t3_g2

0x0bbc,	// (0x0003597f) list_medium_line_t3_g3

0x0bbc,	// (0x0003597f) list_medium_line_t3_right_iconx2

0x0bbc,	// (0x0003597f) list_medium_line_t4_g4

0x0bbc,	// (0x0003597f) list_medium_line_x2

0x0bbc,	// (0x0003597f) list_medium_line_x2_t2_g2

0x0bbc,	// (0x0003597f) list_medium_line_x2_t2_g3

0x0bbc,	// (0x0003597f) list_medium_line_x2_t2_g4

0x0bbc,	// (0x0003597f) list_medium_line_x2_t3

0x0bbc,	// (0x0003597f) list_medium_line_x2_t3_g2

0x0bbc,	// (0x0003597f) list_medium_line_x2_t3_g3

0x0bbc,	// (0x0003597f) list_medium_line_x2_t3_g4

0x0bbc,	// (0x0003597f) list_medium_line_x2_t4_g2

0x0bbc,	// (0x0003597f) list_medium_line_x2_t4_g4

0x0bbc,	// (0x0003597f) list_medium_line_x3

0x0bbc,	// (0x0003597f) list_medium_line_x3_t4

0x0bbc,	// (0x0003597f) list_medium_line_x3_t4_g4

0x0bbc,	// (0x0003597f) list_medium_line_x4_t4

0x0bbc,	// (0x0003597f) list_medium_line_x4_t4_g7

0x0bbc,	// (0x0003597f) list_medium_line_x4_t5

0x4d68,	// (0x00039b2b) list_single_fs_dyc_pane_ParamLimits

0x4d68,	// (0x00039b2b) list_single_fs_dyc_pane

0x12bd,	// (0x00036080) list_medium_line_x4_t4_g7_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x4_t4_g7_g1

0x12bd,	// (0x00036080) list_medium_line_x4_t4_g7_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x4_t4_g7_g2

0x12bd,	// (0x00036080) list_medium_line_x4_t4_g7_g3_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x4_t4_g7_g3

0x12bd,	// (0x00036080) list_medium_line_x4_t4_g7_g4_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x4_t4_g7_g4

0x12bd,	// (0x00036080) list_medium_line_x4_t4_g7_g5_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x4_t4_g7_g5

0x12bd,	// (0x00036080) list_medium_line_x4_t4_g7_g6_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x4_t4_g7_g6

0x12cb,	// (0x0003608e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x12cb,	// (0x0003608e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfad0,	// (0x00044893) list_medium_line_x4_t4_g7_g_ParamLimits

0xfad0,	// (0x00044893) list_medium_line_x4_t4_g7_g

0x1305,	// (0x000360c8) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x4_t4_g7_t1

0x1305,	// (0x000360c8) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x4_t4_g7_t2

0x1305,	// (0x000360c8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x4_t4_g7_t3

0x1319,	// (0x000360dc) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1319,	// (0x000360dc) list_medium_line_x4_t4_g7_t4

0x1319,	// (0x000360dc) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1319,	// (0x000360dc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfadf,	// (0x000448a2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfadf,	// (0x000448a2) list_medium_line_x4_t4_g7_t

0x4d84,	// (0x00039b47) list_single_dyc_row_pane_ParamLimits

0x4d84,	// (0x00039b47) list_single_dyc_row_pane

0xb7e9,	// (0x000405ac) call5_gesture_pane_ParamLimits

0xb7e9,	// (0x000405ac) call5_gesture_pane

0xb81d,	// (0x000405e0) call5_windows_pane_ParamLimits

0xb81d,	// (0x000405e0) call5_windows_pane

0xb870,	// (0x00040633) call5_swipe_1_pane_cp_ParamLimits

0xb870,	// (0x00040633) call5_swipe_1_pane_cp

0xb87c,	// (0x0004063f) call5_swipe_2_pane_cp_ParamLimits

0xb87c,	// (0x0004063f) call5_swipe_2_pane_cp

0x1561,	// (0x00036324) call5_image_pane_cp

0xb888,	// (0x0004064b) popup_call5_audio_first_window_cp_ParamLimits

0xb888,	// (0x0004064b) popup_call5_audio_first_window_cp

0xe590,	// (0x00043353) call5_swipe_1_pane_g1_cp_ParamLimits

0xe590,	// (0x00043353) call5_swipe_1_pane_g1_cp

0xe59d,	// (0x00043360) call5_swipe_1_pane_g2_cp

0xe5a5,	// (0x00043368) call5_swipe_1_pane_t1_cp_ParamLimits

0xe5a5,	// (0x00043368) call5_swipe_1_pane_t1_cp

0xe590,	// (0x00043353) call5_swipe_2_pane_g1_cp_ParamLimits

0xe590,	// (0x00043353) call5_swipe_2_pane_g1_cp

0xe5ba,	// (0x0004337d) call5_swipe_2_pane_g2_cp

0xe5c2,	// (0x00043385) call5_swipe_2_pane_t1_cp_ParamLimits

0xe5c2,	// (0x00043385) call5_swipe_2_pane_t1_cp

0x0fe3,	// (0x00035da6) main_sp_fs_email_pane

0xe5d7,	// (0x0004339a) main_sp_fs_listscroll_pane_te

0x4da1,	// (0x00039b64) popup_sp_fs_action_menu_pane_ParamLimits

0x4da1,	// (0x00039b64) popup_sp_fs_action_menu_pane

0x12fb,	// (0x000360be) bg_sp_fs_ctrlbar_pane_g1

0xe5e0,	// (0x000433a3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe5e9,	// (0x000433ac) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x31ba,	// (0x00037f7d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x12fb,	// (0x000360be) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbcd,	// (0x00044990) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x32ca,	// (0x0003808d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x32ca,	// (0x0003808d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe5f2,	// (0x000433b5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe5f2,	// (0x000433b5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe5fe,	// (0x000433c1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe5fe,	// (0x000433c1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbd6,	// (0x00044999) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbd6,	// (0x00044999) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe60a,	// (0x000433cd) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe60a,	// (0x000433cd) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x12fb,	// (0x000360be) list_medium_line_t2_right_icon_g1

0x1a5f,	// (0x00036822) list_medium_line_t2_right_icon_t1

0x1a5f,	// (0x00036822) list_medium_line_t2_right_icon_t2

0x0001,

0xfbdb,	// (0x0004499e) list_medium_line_t2_right_icon_t

0x20db,	// (0x00036e9e) bg_sp_fs_ctrlbar_pane_ParamLimits

0x20db,	// (0x00036e9e) bg_sp_fs_ctrlbar_pane

0xb8d9,	// (0x0004069c) main_sp_fs_ctrlbar_button_pane_cp01

0xb8e1,	// (0x000406a4) main_sp_fs_ctrlbar_ddmenu_pane

0xe65c,	// (0x0004341f) main_sp_fs_ctrlbar_pane_g1

0xe668,	// (0x0004342b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbe0,	// (0x000449a3) main_sp_fs_ctrlbar_pane_g

0xb91d,	// (0x000406e0) main_sp_fs_ctrlbar_pane_t1

0xb958,	// (0x0004071b) main_sp_fs_ctrlbar_pane

0xb96e,	// (0x00040731) main_sp_fs_listscroll_pane_te_cp01

0x4de3,	// (0x00039ba6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x4de3,	// (0x00039ba6) popup_sp_fs_action_menu_pane_cp01

0x0fe3,	// (0x00035da6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0fe3,	// (0x00035da6) bg_sp_fs_highlight_list_pane_cp01

0x4e03,	// (0x00039bc6) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4e03,	// (0x00039bc6) sp_fs_action_menu_list_gene_pane_g1

0xe68f,	// (0x00043452) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe68f,	// (0x00043452) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbee,	// (0x000449b1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbee,	// (0x000449b1) sp_fs_action_menu_list_gene_pane_g

0x4e12,	// (0x00039bd5) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4e12,	// (0x00039bd5) sp_fs_action_menu_list_gene_pane_t1

0x4e2a,	// (0x00039bed) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4e2a,	// (0x00039bed) sp_fs_action_menu_list_gene_pane

0xe69c,	// (0x0004345f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe69c,	// (0x0004345f) popup_sp_fs_action_menu_bg_pane

0x4e49,	// (0x00039c0c) sp_fs_action_menu_list_pane_ParamLimits

0x4e49,	// (0x00039c0c) sp_fs_action_menu_list_pane

0xe6aa,	// (0x0004346d) sp_fs_scroll_pane_cp01_ParamLimits

0xe6aa,	// (0x0004346d) sp_fs_scroll_pane_cp01

0x1a5f,	// (0x00036822) list_medium_line_plain_t2_t1

0x1a5f,	// (0x00036822) list_medium_line_plain_t2_t2

0x0001,

0xfbdb,	// (0x0004499e) list_medium_line_plain_t2_t

0x1a5f,	// (0x00036822) list_medium_line_plain_t3_t1

0x1a5f,	// (0x00036822) list_medium_line_plain_t3_t2

0x1a5f,	// (0x00036822) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x0004401c) list_medium_line_plain_t3_t

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g2_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g2_g1

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g2_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x00043f5c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x00043f5c) list_medium_line_x2_t2_g2_g

0x1305,	// (0x000360c8) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t2_g2_t1

0x1305,	// (0x000360c8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x00043fd1) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x00043fd1) list_medium_line_x2_t2_g2_t

0x12bd,	// (0x00036080) list_medium_line_x2_t4_g2_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t4_g2_g1

0x12bd,	// (0x00036080) list_medium_line_x2_t4_g2_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x00043f5c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x00043f5c) list_medium_line_x2_t4_g2_g

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g2_t1

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g2_t2

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g2_t3

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x00043f6a) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x00043f6a) list_medium_line_x2_t4_g2_t

0x12fb,	// (0x000360be) list_medium_line_t3_right_iconx2_g1

0x12fb,	// (0x000360be) list_medium_line_t3_right_iconx2_g2

0x12fb,	// (0x000360be) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x00044138) list_medium_line_t3_right_iconx2_g

0x1a5f,	// (0x00036822) list_medium_line_t3_right_iconx2_t1

0x1a5f,	// (0x00036822) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbdb,	// (0x0004499e) list_medium_line_t3_right_iconx2_t

0x12bd,	// (0x00036080) list_medium_line_x3_t4_g4_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x3_t4_g4_g1

0x12bd,	// (0x00036080) list_medium_line_x3_t4_g4_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x3_t4_g4_g2

0x12bd,	// (0x00036080) list_medium_line_x3_t4_g4_g3_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x3_t4_g4_g3

0x12bd,	// (0x00036080) list_medium_line_x3_t4_g4_g4_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x00043f61) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x00043f61) list_medium_line_x3_t4_g4_g

0x1305,	// (0x000360c8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x3_t4_g4_t1

0x1305,	// (0x000360c8) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x3_t4_g4_t2

0x1305,	// (0x000360c8) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x3_t4_g4_t3

0x1305,	// (0x000360c8) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x00043f6a) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x00043f6a) list_medium_line_x3_t4_g4_t

0x4e69,	// (0x00039c2c) list_single_dyc_row_text_pane_t1_ParamLimits

0x4e69,	// (0x00039c2c) list_single_dyc_row_text_pane_t1

0x4ea0,	// (0x00039c63) list_single_dyc_row_text_pane_t2_ParamLimits

0x4ea0,	// (0x00039c63) list_single_dyc_row_text_pane_t2

0x4f16,	// (0x00039cd9) list_single_dyc_row_text_pane_t3_ParamLimits

0x4f16,	// (0x00039cd9) list_single_dyc_row_text_pane_t3

0x0005,

0xfbf3,	// (0x000449b6) list_single_dyc_row_text_pane_t_ParamLimits

0xfbf3,	// (0x000449b6) list_single_dyc_row_text_pane_t

0x4fe7,	// (0x00039daa) list_single_dyc_row_pane_g1_ParamLimits

0x4fe7,	// (0x00039daa) list_single_dyc_row_pane_g1

0x4ff3,	// (0x00039db6) list_single_dyc_row_pane_g2_ParamLimits

0x4ff3,	// (0x00039db6) list_single_dyc_row_pane_g2

0x4fff,	// (0x00039dc2) list_single_dyc_row_pane_g3_ParamLimits

0x4fff,	// (0x00039dc2) list_single_dyc_row_pane_g3

0x5012,	// (0x00039dd5) list_single_dyc_row_pane_g4_ParamLimits

0x5012,	// (0x00039dd5) list_single_dyc_row_pane_g4

0x0006,

0xfc00,	// (0x000449c3) list_single_dyc_row_pane_g_ParamLimits

0xfc00,	// (0x000449c3) list_single_dyc_row_pane_g

0x5064,	// (0x00039e27) list_single_dyc_row_text_pane_ParamLimits

0x5064,	// (0x00039e27) list_single_dyc_row_text_pane

0x0bbc,	// (0x0003597f) bg_sp_fs_scroll_pane

0xe6d0,	// (0x00043493) thumb_sp_fs_scroll_pane

0x12bd,	// (0x00036080) list_medium_line_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_g1

0x1305,	// (0x000360c8) list_medium_line_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t1

0x12bd,	// (0x00036080) list_medium_line_x2_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_g1

0x12bd,	// (0x00036080) list_medium_line_x2_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x00043f5c) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x00043f5c) list_medium_line_x2_g

0x1305,	// (0x000360c8) list_medium_line_x2_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t1

0x12bd,	// (0x00036080) list_medium_line_x3_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x3_g1

0xe6d9,	// (0x0004349c) list_medium_line_x3_g2_ParamLimits

0xe6d9,	// (0x0004349c) list_medium_line_x3_g2

0x0001,

0xfc0f,	// (0x000449d2) list_medium_line_x3_g_ParamLimits

0xfc0f,	// (0x000449d2) list_medium_line_x3_g

0xe6e7,	// (0x000434aa) list_medium_line_x3_t1_ParamLimits

0xe6e7,	// (0x000434aa) list_medium_line_x3_t1

0xe6fb,	// (0x000434be) thumb_sp_fs_scroll_pane_g1

0xe704,	// (0x000434c7) thumb_sp_fs_scroll_pane_g2

0xe70d,	// (0x000434d0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc14,	// (0x000449d7) thumb_sp_fs_scroll_pane_g

0xe6fb,	// (0x000434be) bg_sp_fs_scroll_pane_g1

0xe704,	// (0x000434c7) bg_sp_fs_scroll_pane_g2

0xe70d,	// (0x000434d0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc14,	// (0x000449d7) bg_sp_fs_scroll_pane_g

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g4_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g4_g1

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g4_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g4_g2

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g4_g3_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g4_g3

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g4_g4_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x00043f61) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x00043f61) list_medium_line_x2_t3_g4_g

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g4_t1

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g4_t2

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x00043f55) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x00043f55) list_medium_line_x2_t3_g4_t

0x12bd,	// (0x00036080) list_medium_line_g2_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_g2_g1

0x12bd,	// (0x00036080) list_medium_line_g2_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x00043f5c) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x00043f5c) list_medium_line_g2_g

0x1305,	// (0x000360c8) list_medium_line_g2_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_g2_t1

0x12bd,	// (0x00036080) list_medium_line_t3_g2_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t3_g2_g1

0x12bd,	// (0x00036080) list_medium_line_t3_g2_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x00043f5c) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x00043f5c) list_medium_line_t3_g2_g

0x1305,	// (0x000360c8) list_medium_line_t3_g2_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t3_g2_t1

0x1305,	// (0x000360c8) list_medium_line_t3_g2_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t3_g2_t2

0x1305,	// (0x000360c8) list_medium_line_t3_g2_t3_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x00043f55) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x00043f55) list_medium_line_t3_g2_t

0x12fb,	// (0x000360be) list_medium_line_right_icon_g1

0x1a5f,	// (0x00036822) list_medium_line_right_icon_t1

0x12bd,	// (0x00036080) list_medium_line_t2_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t2_g1

0x1305,	// (0x000360c8) list_medium_line_t2_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t2_t1

0x1305,	// (0x000360c8) list_medium_line_t2_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x00043fd1) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x00043fd1) list_medium_line_t2_t

0x12bd,	// (0x00036080) list_medium_line_t3_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t3_g1

0x1305,	// (0x000360c8) list_medium_line_t3_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t3_t1

0x1305,	// (0x000360c8) list_medium_line_t3_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t3_t2

0x1305,	// (0x000360c8) list_medium_line_t3_t3_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x00043f55) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x00043f55) list_medium_line_t3_t

0x12bd,	// (0x00036080) list_medium_line_g3_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_g3_g1

0x12bd,	// (0x00036080) list_medium_line_g3_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_g3_g2

0x12bd,	// (0x00036080) list_medium_line_g3_g3_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x00043f4e) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x00043f4e) list_medium_line_g3_g

0x1305,	// (0x000360c8) list_medium_line_g3_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_g3_t1

0x12bd,	// (0x00036080) list_medium_line_t2_g3_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t2_g3_g1

0x12bd,	// (0x00036080) list_medium_line_t2_g3_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t2_g3_g2

0x12bd,	// (0x00036080) list_medium_line_t2_g3_g3_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x00043f4e) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x00043f4e) list_medium_line_t2_g3_g

0x1305,	// (0x000360c8) list_medium_line_t2_g3_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t2_g3_t1

0x1305,	// (0x000360c8) list_medium_line_t2_g3_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x00043fd1) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x00043fd1) list_medium_line_t2_g3_t

0x12bd,	// (0x00036080) list_medium_line_t3_g3_g1_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t3_g3_g1

0x12bd,	// (0x00036080) list_medium_line_t3_g3_g2_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t3_g3_g2

0x12bd,	// (0x00036080) list_medium_line_t3_g3_g3_ParamLimits

0x12bd,	// (0x00036080) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x00043f4e) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x00043f4e) list_medium_line_t3_g3_g

0x1305,	// (0x000360c8) list_medium_line_t3_g3_t1_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t3_g3_t1

0x1305,	// (0x000360c8) list_medium_line_t3_g3_t2_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t3_g3_t2

0x1305,	// (0x000360c8) list_medium_line_t3_g3_t3_ParamLimits

0x1305,	// (0x000360c8) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x00043f55) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x00043f55) list_medium_line_t3_g3_t

0x12fb,	// (0x000360be) list_medium_line_right_iconx2_g1

0x12fb,	// (0x000360be) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00043e4f) list_medium_line_right_iconx2_g

0x1a5f,	// (0x00036822) list_medium_line_right_iconx2_t1

0x12fb,	// (0x000360be) list_medium_line_t2_right_iconx2_g1

0x12fb,	// (0x000360be) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00043e4f) list_medium_line_t2_right_iconx2_g

0x1a5f,	// (0x00036822) list_medium_line_t2_right_iconx2_t1

0x1a5f,	// (0x00036822) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbdb,	// (0x0004499e) list_medium_line_t2_right_iconx2_t

0x1a5f,	// (0x00036822) list_medium_line_x4_t4_t1

0x1a5f,	// (0x00036822) list_medium_line_x4_t4_t2

0x1a5f,	// (0x00036822) list_medium_line_x4_t4_t3

0x1a5f,	// (0x00036822) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x00044023) list_medium_line_x4_t4_t

0xb9b3,	// (0x00040776) tport_appsw_pane_ParamLimits

0xb9b3,	// (0x00040776) tport_appsw_pane

0xb9c1,	// (0x00040784) tport_contact_pane_ParamLimits

0xb9c1,	// (0x00040784) tport_contact_pane

0xb9d1,	// (0x00040794) tport_listscroll_pane_ParamLimits

0xb9d1,	// (0x00040794) tport_listscroll_pane

0xb9e1,	// (0x000407a4) cell_tport_appsw_pane_ParamLimits

0xb9e1,	// (0x000407a4) cell_tport_appsw_pane

0x12cb,	// (0x0003608e) tport_appsw_pane_g1_ParamLimits

0x12cb,	// (0x0003608e) tport_appsw_pane_g1

0xe716,	// (0x000434d9) tport_contact_pane_g1

0xe71f,	// (0x000434e2) tport_contact_pane_t1

0xe72d,	// (0x000434f0) tport_contact_pane_t2

0x0001,

0xfc1b,	// (0x000449de) tport_contact_pane_t

0xe73b,	// (0x000434fe) list_tport_pane

0xe744,	// (0x00043507) scroll_pane_cp_030

0xba14,	// (0x000407d7) cell_tport_appsw_pane_g1

0xba24,	// (0x000407e7) cell_tport_appsw_pane_t1

0xba32,	// (0x000407f5) grid_highlight_pane_cp019

0xba3a,	// (0x000407fd) list_tport_double_graphic_pane_ParamLimits

0xba3a,	// (0x000407fd) list_tport_double_graphic_pane

0x0fe3,	// (0x00035da6) list_highlight_pane_cp023_ParamLimits

0x0fe3,	// (0x00035da6) list_highlight_pane_cp023

0xba4b,	// (0x0004080e) list_tport_double_graphic_pane_g1_ParamLimits

0xba4b,	// (0x0004080e) list_tport_double_graphic_pane_g1

0xba58,	// (0x0004081b) list_tport_double_graphic_pane_t1_ParamLimits

0xba58,	// (0x0004081b) list_tport_double_graphic_pane_t1

0xba6d,	// (0x00040830) list_tport_double_graphic_pane_t2_ParamLimits

0xba6d,	// (0x00040830) list_tport_double_graphic_pane_t2

0x0001,

0xfc27,	// (0x000449ea) list_tport_double_graphic_pane_t_ParamLimits

0xfc27,	// (0x000449ea) list_tport_double_graphic_pane_t

0x0bbc,	// (0x0003597f) main_cale_note_pane

0x9c7e,	// (0x0003ea41) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9c7e,	// (0x0003ea41) cell_vitu2_function_top_wide_pane_cp01

0xb666,	// (0x00040429) wait_bar_pane_cp05_ParamLimits

0x0fe3,	// (0x00035da6) listscroll_cmail_pane

0xe755,	// (0x00043518) list_cmail_pane

0xba7f,	// (0x00040842) list_cmail_body_pane

0xbaa7,	// (0x0004086a) list_single_cmail_header_caption_pane

0xbad6,	// (0x00040899) list_single_cmail_header_detail_pane_ParamLimits

0xbad6,	// (0x00040899) list_single_cmail_header_detail_pane

0xe778,	// (0x0004353b) list_single_cmail_header_caption_pane_t1

0x5089,	// (0x00039e4c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5089,	// (0x00039e4c) list_single_cmail_header_detail_pane_g1

0x509f,	// (0x00039e62) list_single_cmail_header_detail_pane_g2_ParamLimits

0x509f,	// (0x00039e62) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc2c,	// (0x000449ef) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc2c,	// (0x000449ef) list_single_cmail_header_detail_pane_g

0x50ab,	// (0x00039e6e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x50ab,	// (0x00039e6e) list_single_cmail_header_detail_pane_t1

0x510b,	// (0x00039ece) list_single_cmail_header_editor_pane_bg_ParamLimits

0x510b,	// (0x00039ece) list_single_cmail_header_editor_pane_bg

0xe243,	// (0x00043006) list_cmail_body_pane_g1

0xe79c,	// (0x0004355f) list_cmail_body_pane_t1

0xd544,	// (0x00042307) list_single_cmail_header_editor_pane_bg_g1

0x177a,	// (0x0003653d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd554,	// (0x00042317) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd54c,	// (0x0004230f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd7b3,	// (0x00042576) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd574,	// (0x00042337) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd564,	// (0x00042327) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd56c,	// (0x0004232f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x175a,	// (0x0003651d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xbb13,	// (0x000408d6) calenote_gesture_pane_ParamLimits

0xbb13,	// (0x000408d6) calenote_gesture_pane

0xbb2d,	// (0x000408f0) calenote_window_pane_ParamLimits

0xbb2d,	// (0x000408f0) calenote_window_pane

0xe7aa,	// (0x0004356d) popup_note_window_cp01

0xbb45,	// (0x00040908) calenote_swipe_1_pane_ParamLimits

0xbb45,	// (0x00040908) calenote_swipe_1_pane

0xb87c,	// (0x0004063f) calenote_swipe_2_pane_ParamLimits

0xb87c,	// (0x0004063f) calenote_swipe_2_pane

0xe590,	// (0x00043353) calenote_swipe_1_pane_g1_ParamLimits

0xe590,	// (0x00043353) calenote_swipe_1_pane_g1

0xe7bc,	// (0x0004357f) calenote_swipe_1_pane_g2_ParamLimits

0xe7bc,	// (0x0004357f) calenote_swipe_1_pane_g2

0x0001,

0xfc38,	// (0x000449fb) calenote_swipe_1_pane_g_ParamLimits

0xfc38,	// (0x000449fb) calenote_swipe_1_pane_g

0xe7c8,	// (0x0004358b) calenote_swipe_1_pane_t1_ParamLimits

0xe7c8,	// (0x0004358b) calenote_swipe_1_pane_t1

0xe590,	// (0x00043353) calenote_swipe_2_pane_g1_ParamLimits

0xe590,	// (0x00043353) calenote_swipe_2_pane_g1

0xe7e7,	// (0x000435aa) calenote_swipe_2_pane_g2_ParamLimits

0xe7e7,	// (0x000435aa) calenote_swipe_2_pane_g2

0x0001,

0xfc3d,	// (0x00044a00) calenote_swipe_2_pane_g_ParamLimits

0xfc3d,	// (0x00044a00) calenote_swipe_2_pane_g

0xe7f3,	// (0x000435b6) calenote_swipe_2_pane_t1_ParamLimits

0xe7f3,	// (0x000435b6) calenote_swipe_2_pane_t1

0x0bbc,	// (0x0003597f) main_mup_navstr_pane

0x8bec,	// (0x0003d9af) main_mup3_pane_t7_ParamLimits

0x8bec,	// (0x0003d9af) main_mup3_pane_t7

0x9394,	// (0x0003e157) main_mp4_pane_g6_ParamLimits

0x9394,	// (0x0003e157) main_mp4_pane_g6

0x96d7,	// (0x0003e49a) main_image3_pane_t4_ParamLimits

0x96d7,	// (0x0003e49a) main_image3_pane_t4

0xbb58,	// (0x0004091b) popup_navstr_preview_pane_ParamLimits

0xbb58,	// (0x0004091b) popup_navstr_preview_pane

0xbb64,	// (0x00040927) scroll_navstr_pane_ParamLimits

0xbb64,	// (0x00040927) scroll_navstr_pane

0x0bbc,	// (0x0003597f) bg_popup_preview_window_pane_cp04

0xe81a,	// (0x000435dd) popup_navstr_preview_pane_t1

0xbb70,	// (0x00040933) scroll_navstr_pane_g1_ParamLimits

0xbb70,	// (0x00040933) scroll_navstr_pane_g1

0xbb7d,	// (0x00040940) scroll_navstr_pane_t1_ParamLimits

0xbb7d,	// (0x00040940) scroll_navstr_pane_t1

0xe7b3,	// (0x00043576) bg_button_pane_cp014

0xe7b3,	// (0x00043576) bg_button_pane_cp030

0xb78f,	// (0x00040552) list_double_fisheye_pane_g4_ParamLimits

0xb78f,	// (0x00040552) list_double_fisheye_pane_g4

0xb79b,	// (0x0004055e) list_double_fisheye_pane_g5_ParamLimits

0xb79b,	// (0x0004055e) list_double_fisheye_pane_g5

0xe76c,	// (0x0004352f) sp_fs_scroll_pane_cp03

0xe65c,	// (0x0004341f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe668,	// (0x0004342b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbe0,	// (0x000449a3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb91d,	// (0x000406e0) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe764,	// (0x00043527) sp_fs_scroll_pane_cp02

0x14b2,	// (0x00036275) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x14b2,	// (0x00036275) popup_sp_fs_calendar_preview_list_single_pane

0x0bbc,	// (0x0003597f) main_cam6_pano_pane

0x0fe3,	// (0x00035da6) main_mup3_pane_ParamLimits

0x0bbc,	// (0x0003597f) main_phacti_pane

0xb53b,	// (0x000402fe) bg_button_pane_cp11

0xb553,	// (0x00040316) main_mobtv_info_pane_g2_ParamLimits

0xb553,	// (0x00040316) main_mobtv_info_pane_g2

0x0001,

0xfb40,	// (0x00044903) main_mobtv_info_pane_g_ParamLimits

0xfb40,	// (0x00044903) main_mobtv_info_pane_g

0x1319,	// (0x000360dc) sc_clock_pane_t5_ParamLimits

0x1319,	// (0x000360dc) sc_clock_pane_t5

0x1fd9,	// (0x00036d9c) main_radioblah_pane_g1_ParamLimits

0x20c7,	// (0x00036e8a) main_radioblah_pane_t3_ParamLimits

0x20c7,	// (0x00036e8a) main_radioblah_pane_t3

0x20c7,	// (0x00036e8a) main_radioblah_pane_t4_ParamLimits

0x20c7,	// (0x00036e8a) main_radioblah_pane_t4

0x12af,	// (0x00036072) main_radioblah_text_pane_ParamLimits

0x12af,	// (0x00036072) main_radioblah_text_pane

0xe488,	// (0x0004324b) main_radioblah_info_pane_g1_ParamLimits

0xe4cc,	// (0x0004328f) main_radioblah_info_pane_t4_ParamLimits

0xe4cc,	// (0x0004328f) main_radioblah_info_pane_t4

0x0fe3,	// (0x00035da6) main_sp_fs_calendar_pane

0xbb8f,	// (0x00040952) main_phacti_pane_g1

0xbb97,	// (0x0004095a) phacti_note_pane_ParamLimits

0xbb97,	// (0x0004095a) phacti_note_pane

0xe831,	// (0x000435f4) phacti_term_pane_ParamLimits

0xe831,	// (0x000435f4) phacti_term_pane

0xe846,	// (0x00043609) phacti_note_pane_t1_ParamLimits

0xe846,	// (0x00043609) phacti_note_pane_t1

0x5122,	// (0x00039ee5) phacti_term_pane_g1

0x512a,	// (0x00039eed) phacti_term_pane_t1_ParamLimits

0x512a,	// (0x00039eed) phacti_term_pane_t1

0xe85d,	// (0x00043620) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe865,	// (0x00043628) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc47,	// (0x00044a0a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe86d,	// (0x00043630) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe86d,	// (0x00043630) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe883,	// (0x00043646) aid_popup_sp_fs_bg_corner_pane

0x12fb,	// (0x000360be) popup_sp_fs_calendar_preview_bg_pane_g1

0x0bbc,	// (0x0003597f) popup_sp_fs_calendar_preview_bg_pane

0xe88b,	// (0x0004364e) popup_sp_fs_calendar_preview_list_pane

0xe893,	// (0x00043656) bg_main_sp_fs_cale_pane_ParamLimits

0xe893,	// (0x00043656) bg_main_sp_fs_cale_pane

0xe8ab,	// (0x0004366e) listscroll_cale_mrui_pane_ParamLimits

0xe8ab,	// (0x0004366e) listscroll_cale_mrui_pane

0x397a,	// (0x0003873d) listscroll_sp_fs_schedule_track_pane

0x515d,	// (0x00039f20) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x515d,	// (0x00039f20) main_sp_fs_ctrlbar_pane_cp01

0x397a,	// (0x0003873d) main_sp_fs_ribbon_pane

0x5173,	// (0x00039f36) popup_sp_fs_cale_preview_window

0xd42b,	// (0x000421ee) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd42b,	// (0x000421ee) list_single_sp_fs_schedule_track_pane

0xd42b,	// (0x000421ee) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd42b,	// (0x000421ee) bg_sp_fs_highlight_list_pane_cp03

0x88d0,	// (0x0003d693) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x88d0,	// (0x0003d693) list_single_sp_fs_schedule_track_pane_g1

0x88d0,	// (0x0003d693) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x88d0,	// (0x0003d693) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc4c,	// (0x00044a0f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc4c,	// (0x00044a0f) list_single_sp_fs_schedule_track_pane_g

0xbbad,	// (0x00040970) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xbbad,	// (0x00040970) list_single_sp_fs_schedule_track_pane_t1

0xd437,	// (0x000421fa) sp_fs_schedule_track_pane_ParamLimits

0xd437,	// (0x000421fa) sp_fs_schedule_track_pane

0x3982,	// (0x00038745) sp_fs_schedule_track_pane_g1

0x3982,	// (0x00038745) sp_fs_schedule_track_pane_g2

0x3982,	// (0x00038745) sp_fs_schedule_track_pane_g3

0x3982,	// (0x00038745) sp_fs_schedule_track_pane_g4

0x3982,	// (0x00038745) sp_fs_schedule_track_pane_g5

0x0004,

0xf7db,	// (0x0004459e) sp_fs_schedule_track_pane_g

0x3982,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g1

0x3982,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g2

0x3982,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g3

0x3982,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g4

0x3982,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g5

0x3982,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g6

0x3982,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g7

0x3982,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g8

0x3982,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc51,	// (0x00044a14) bg_sp_fs_schedule_viewer_highlight_g

0x397a,	// (0x0003873d) bg_main_sp_fs_ribbon_pane

0x3982,	// (0x00038745) main_sp_fs_ribbon_pane_g1

0xe8c3,	// (0x00043686) main_sp_fs_ribbon_pane_t1

0xe8c3,	// (0x00043686) main_sp_fs_ribbon_pane_t2

0xe8c3,	// (0x00043686) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc64,	// (0x00044a27) main_sp_fs_ribbon_pane_t

0x397a,	// (0x0003873d) main_sp_fs_ribbon_scheduler_pane

0x3982,	// (0x00038745) bg_main_sp_fs_ribbon_pane_g1

0x3982,	// (0x00038745) bg_main_sp_fs_ribbon_pane_g2

0x3982,	// (0x00038745) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6b8,	// (0x0004447b) bg_main_sp_fs_ribbon_pane_g

0x3982,	// (0x00038745) main_sp_fs_ribbon_scheduler_pane_g1

0x3982,	// (0x00038745) main_sp_fs_ribbon_scheduler_pane_g2

0x3982,	// (0x00038745) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6b8,	// (0x0004447b) main_sp_fs_ribbon_scheduler_pane_g

0xe8d1,	// (0x00043694) list_cale_mrui_pane

0xbbbf,	// (0x00040982) sp_fs_scroll_pane_cp07_ParamLimits

0xbbbf,	// (0x00040982) sp_fs_scroll_pane_cp07

0xd42b,	// (0x000421ee) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd42b,	// (0x000421ee) bg_sp_fs_schedule_viewer_highlight

0x397a,	// (0x0003873d) list_single_sp_fs_schedule_track_pane_cp01

0x397a,	// (0x0003873d) list_sp_fs_schedule_track_pane

0xe8de,	// (0x000436a1) sp_fs_scroll_pane_cp06_ParamLimits

0xe8de,	// (0x000436a1) sp_fs_scroll_pane_cp06

0x12fb,	// (0x000360be) bgmain_sp_fs_calendar_pane_g1

0x5185,	// (0x00039f48) list_single_cale_mrui_pane_ParamLimits

0x5185,	// (0x00039f48) list_single_cale_mrui_pane

0x51b3,	// (0x00039f76) list_single_cale_mrui_row_pane_ParamLimits

0x51b3,	// (0x00039f76) list_single_cale_mrui_row_pane

0x51c0,	// (0x00039f83) list_single_cale_mrui_row_pane_g1_ParamLimits

0x51c0,	// (0x00039f83) list_single_cale_mrui_row_pane_g1

0x51f8,	// (0x00039fbb) list_single_cale_mrui_row_pane_t1_ParamLimits

0x51f8,	// (0x00039fbb) list_single_cale_mrui_row_pane_t1

0x520a,	// (0x00039fcd) list_single_cale_mrui_row_pane_t2_ParamLimits

0x520a,	// (0x00039fcd) list_single_cale_mrui_row_pane_t2

0x5270,	// (0x0003a033) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5270,	// (0x0003a033) list_single_cale_mrui_row_pane_t3

0x529f,	// (0x0003a062) list_single_cale_mrui_row_pane_t4_ParamLimits

0x529f,	// (0x0003a062) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc72,	// (0x00044a35) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc72,	// (0x00044a35) list_single_cale_mrui_row_pane_t

0x52ce,	// (0x0003a091) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x52ce,	// (0x0003a091) list_single_cmail_header_editor_pane_bg_cp01

0x52f6,	// (0x0003a0b9) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x52f6,	// (0x0003a0b9) list_single_cmail_header_editor_pane_bg_cp02

0xe8ff,	// (0x000436c2) main_radioblah_text_pane_t1_ParamLimits

0xe8ff,	// (0x000436c2) main_radioblah_text_pane_t1

0xe919,	// (0x000436dc) cam6_indi_pane_cp01

0xe921,	// (0x000436e4) cam6_mode_pane_cp01

0xe929,	// (0x000436ec) cam6_pano_pane

0xe932,	// (0x000436f5) cam6_zoom_pane_cp01

0xe93a,	// (0x000436fd) cam6_pano_image_pane

0xe945,	// (0x00043708) cam6_pano_pane_g1

0xe243,	// (0x00043006) cam6_pano_pane_g2

0xe94e,	// (0x00043711) cam6_pano_pane_g3

0xe957,	// (0x0004371a) cam6_pano_pane_g4

0x3c14,	// (0x000389d7) cam6_pano_pane_g5

0xe960,	// (0x00043723) cam6_pano_pane_g6

0xe96a,	// (0x0004372d) cam6_pano_pane_g7

0xe972,	// (0x00043735) cam6_pano_pane_g8

0xe97b,	// (0x0004373e) cam6_pano_pane_g9

0x0008,

0xfc7b,	// (0x00044a3e) cam6_pano_pane_g

0x0bbc,	// (0x0003597f) main_browser_tag_pane

0xe812,	// (0x000435d5) grid_navstr_albumart_pane

0xe986,	// (0x00043749) cell_navstr_albumart_pane_ParamLimits

0xe986,	// (0x00043749) cell_navstr_albumart_pane

0xe9a6,	// (0x00043769) cell_navstr_albumart_pane_g1

0xe9ae,	// (0x00043771) cell_navstr_albumart_pane_g2

0xe9b6,	// (0x00043779) cell_navstr_albumart_pane_g3

0xe9be,	// (0x00043781) cell_navstr_albumart_pane_g4

0x0003,

0xfc8e,	// (0x00044a51) cell_navstr_albumart_pane_g

0xbbdb,	// (0x0004099e) bt_list_pane_ParamLimits

0xbbdb,	// (0x0004099e) bt_list_pane

0xbbfc,	// (0x000409bf) bt_list_pane_t1

0xbc0b,	// (0x000409ce) bt_list_pane_t2

0x0001,

0xfc97,	// (0x00044a5a) bt_list_pane_t

0x0bbc,	// (0x0003597f) main_cale_prevew_pane

0xbc1a,	// (0x000409dd) popup_cale_preview_window_ParamLimits

0xbc1a,	// (0x000409dd) popup_cale_preview_window

0x0fe3,	// (0x00035da6) bg_popup_preview_window_pane_cp05_ParamLimits

0x0fe3,	// (0x00035da6) bg_popup_preview_window_pane_cp05

0xe9c6,	// (0x00043789) list_cale_preview_pane_ParamLimits

0xe9c6,	// (0x00043789) list_cale_preview_pane

0xbc33,	// (0x000409f6) list_double_cale_preview_pane_ParamLimits

0xbc33,	// (0x000409f6) list_double_cale_preview_pane

0xbc45,	// (0x00040a08) list_single_cale_preview_pane_ParamLimits

0xbc45,	// (0x00040a08) list_single_cale_preview_pane

0xbc59,	// (0x00040a1c) list_single_cale_preview_pane_g1

0xbc61,	// (0x00040a24) list_single_cale_preview_pane_t1_ParamLimits

0xbc61,	// (0x00040a24) list_single_cale_preview_pane_t1

0xbc76,	// (0x00040a39) list_double_cale_preview_pane_g1

0xbc7e,	// (0x00040a41) list_double_cale_preview_pane_t1_ParamLimits

0xbc7e,	// (0x00040a41) list_double_cale_preview_pane_t1

0xbc93,	// (0x00040a56) list_double_cale_preview_pane_t2_ParamLimits

0xbc93,	// (0x00040a56) list_double_cale_preview_pane_t2

0x0001,

0xfc9c,	// (0x00044a5f) list_double_cale_preview_pane_t_ParamLimits

0xfc9c,	// (0x00044a5f) list_double_cale_preview_pane_t

0x0bbc,	// (0x0003597f) main_ezdial_pane

0x0fe3,	// (0x00035da6) main_sp_fs_email_pane_ParamLimits

0xb896,	// (0x00040659) cmail_ddmenu_btn01_pane_ParamLimits

0xb896,	// (0x00040659) cmail_ddmenu_btn01_pane

0xb8ab,	// (0x0004066e) cmail_ddmenu_btn02_pane_ParamLimits

0xb8ab,	// (0x0004066e) cmail_ddmenu_btn02_pane

0xb8c3,	// (0x00040686) cmail_ddmenu_btn03_pane_ParamLimits

0xb8c3,	// (0x00040686) cmail_ddmenu_btn03_pane

0xb958,	// (0x0004071b) main_sp_fs_ctrlbar_pane_ParamLimits

0xb96e,	// (0x00040731) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xba7f,	// (0x00040842) list_cmail_body_pane_ParamLimits

0xe786,	// (0x00043549) bg_button_pane_cp12

0xe78f,	// (0x00043552) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe78f,	// (0x00043552) list_single_cmail_header_detail_pane_g3

0x50e7,	// (0x00039eaa) list_single_cmail_header_detail_pane_t2_ParamLimits

0x50e7,	// (0x00039eaa) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc33,	// (0x000449f6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc33,	// (0x000449f6) list_single_cmail_header_detail_pane_t

0x513f,	// (0x00039f02) phacti_term_pane_t2_ParamLimits

0x513f,	// (0x00039f02) phacti_term_pane_t2

0x0001,

0xfc42,	// (0x00044a05) phacti_term_pane_t_ParamLimits

0xfc42,	// (0x00044a05) phacti_term_pane_t

0xe9d2,	// (0x00043795) aid_size_list_single_double

0xbcab,	// (0x00040a6e) popup_ezdial_listscroll_window

0xe9de,	// (0x000437a1) popup_number_entry_window_cp01

0x1561,	// (0x00036324) bg_popup_call_pane_cp09

0xe9eb,	// (0x000437ae) ezdial_list_pane

0xe9f3,	// (0x000437b6) scroll_pane_cp23

0x32ca,	// (0x0003808d) bg_button_pane_cp028_ParamLimits

0x32ca,	// (0x0003808d) bg_button_pane_cp028

0xbcc4,	// (0x00040a87) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xbcc4,	// (0x00040a87) cmail_ddmenu_btn01_pane_g1

0xbcd4,	// (0x00040a97) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xbcd4,	// (0x00040a97) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfca1,	// (0x00044a64) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfca1,	// (0x00044a64) cmail_ddmenu_btn01_pane_g

0xe9fb,	// (0x000437be) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9fb,	// (0x000437be) cmail_ddmenu_btn01_pane_t1

0x20db,	// (0x00036e9e) bg_button_pane_cp029_ParamLimits

0x20db,	// (0x00036e9e) bg_button_pane_cp029

0xbcd4,	// (0x00040a97) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xbcd4,	// (0x00040a97) cmail_ddmenu_btn02_pane_g1

0xbcec,	// (0x00040aaf) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xbcec,	// (0x00040aaf) cmail_ddmenu_btn02_pane_t1

0x12af,	// (0x00036072) bg_button_pane_cp031_ParamLimits

0x12af,	// (0x00036072) bg_button_pane_cp031

0xbcd4,	// (0x00040a97) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xbcd4,	// (0x00040a97) cmail_ddmenu_btn03_pane_g1

0xbcec,	// (0x00040aaf) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xbcec,	// (0x00040aaf) cmail_ddmenu_btn03_pane_t1

0x1305,	// (0x000360c8) cell_dialer2_keypad_pane_t1_ParamLimits

0x3c52,	// (0x00038a15) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x3c52,	// (0x00038a15) cell_dialer2_keypad_pane_t1_copy1

0xb37c,	// (0x0004013f) ncimui_group_button_pane

0x0fe3,	// (0x00035da6) main_sp_fs_calendar_pane_ParamLimits

0xbaa7,	// (0x0004086a) list_single_cmail_header_caption_pane_ParamLimits

0x5154,	// (0x00039f17) aid_recal_txt_sm_pane

0x0bbc,	// (0x0003597f) mian_recal_day_pane

0x5173,	// (0x00039f36) popup_sp_fs_cale_preview_window_ParamLimits

0xea10,	// (0x000437d3) list_recal_day_pane

0x532d,	// (0x0003a0f0) list_single_recal_day_pane_ParamLimits

0x532d,	// (0x0003a0f0) list_single_recal_day_pane

0xea37,	// (0x000437fa) list_single_recal_day_pane_g1_ParamLimits

0xea37,	// (0x000437fa) list_single_recal_day_pane_g1

0x533f,	// (0x0003a102) list_single_recal_day_pane_g2_ParamLimits

0x533f,	// (0x0003a102) list_single_recal_day_pane_g2

0x534b,	// (0x0003a10e) list_single_recal_day_pane_g3_ParamLimits

0x534b,	// (0x0003a10e) list_single_recal_day_pane_g3

0x5357,	// (0x0003a11a) list_single_recal_day_pane_g4_ParamLimits

0x5357,	// (0x0003a11a) list_single_recal_day_pane_g4

0x5365,	// (0x0003a128) list_single_recal_day_pane_g5_ParamLimits

0x5365,	// (0x0003a128) list_single_recal_day_pane_g5

0x537b,	// (0x0003a13e) list_single_recal_day_pane_g6_ParamLimits

0x537b,	// (0x0003a13e) list_single_recal_day_pane_g6

0x0004,

0xfcb0,	// (0x00044a73) list_single_recal_day_pane_g_ParamLimits

0xfcb0,	// (0x00044a73) list_single_recal_day_pane_g

0x538f,	// (0x0003a152) list_single_recal_day_pane_t1

0x53a1,	// (0x0003a164) list_single_recal_day_pane_t2

0x0001,

0xfcbb,	// (0x00044a7e) list_single_recal_day_pane_t

0xbd10,	// (0x00040ad3) ncimui_query_button_pane_ParamLimits

0xbd10,	// (0x00040ad3) ncimui_query_button_pane

0xbd20,	// (0x00040ae3) ncimui_query_button_pane_t1_ParamLimits

0xbd20,	// (0x00040ae3) ncimui_query_button_pane_t1

0xea43,	// (0x00043806) ncimui_query_button_pane_t2_ParamLimits

0xea43,	// (0x00043806) ncimui_query_button_pane_t2

0x0001,

0xfcc0,	// (0x00044a83) ncimui_query_button_pane_t_ParamLimits

0xfcc0,	// (0x00044a83) ncimui_query_button_pane_t

0xbd33,	// (0x00040af6) query_button_pane_ParamLimits

0xbd33,	// (0x00040af6) query_button_pane

0x0bbc,	// (0x0003597f) bg_button_pane_cp0028

0xea56,	// (0x00043819) query_button_pane_t1

0x8122,	// (0x0003cee5) main_tport_pane_ParamLimits

0xb989,	// (0x0004074c) bg_popup_window_pane_cp01_ParamLimits

0xb989,	// (0x0004074c) bg_popup_window_pane_cp01

0xb997,	// (0x0004075a) heading_pane_cp08_ParamLimits

0xb997,	// (0x0004075a) heading_pane_cp08

0xb9a5,	// (0x00040768) heading_pane_cp07_ParamLimits

0xb9a5,	// (0x00040768) heading_pane_cp07

0xba14,	// (0x000407d7) cell_tport_appsw_pane_g2

0x0002,

0xfc20,	// (0x000449e3) cell_tport_appsw_pane_g

0x4ba1,	// (0x00039964) input_candi_list_open_g1

0x18fe,	// (0x000366c1) list_cale_time_pane_g6_ParamLimits

0x18fe,	// (0x000366c1) list_cale_time_pane_g6

0x85ae,	// (0x0003d371) aid_size_touch_calib_1_ParamLimits

0x85ae,	// (0x0003d371) aid_size_touch_calib_1

0x85ba,	// (0x0003d37d) aid_size_touch_calib_2_ParamLimits

0x85ba,	// (0x0003d37d) aid_size_touch_calib_2

0x85c8,	// (0x0003d38b) aid_size_touch_calib_3_ParamLimits

0x85c8,	// (0x0003d38b) aid_size_touch_calib_3

0x85d8,	// (0x0003d39b) aid_size_touch_calib_4_ParamLimits

0x85d8,	// (0x0003d39b) aid_size_touch_calib_4

0x85e6,	// (0x0003d3a9) main_touch_calib_button_group_pane_ParamLimits

0x85e6,	// (0x0003d3a9) main_touch_calib_button_group_pane

0x85f4,	// (0x0003d3b7) main_touch_calib_pane_g1_ParamLimits

0x8600,	// (0x0003d3c3) main_touch_calib_pane_g2_ParamLimits

0x860c,	// (0x0003d3cf) main_touch_calib_pane_g3_ParamLimits

0x8618,	// (0x0003d3db) main_touch_calib_pane_g4_ParamLimits

0xf666,	// (0x00044429) main_touch_calib_pane_g_ParamLimits

0x8624,	// (0x0003d3e7) main_touch_calib_pane_t1_ParamLimits

0x863d,	// (0x0003d400) main_touch_calib_pane_t2_ParamLimits

0x8656,	// (0x0003d419) main_touch_calib_pane_t3_ParamLimits

0x866c,	// (0x0003d42f) main_touch_calib_pane_t4_ParamLimits

0x8682,	// (0x0003d445) main_touch_calib_pane_t5_ParamLimits

0xf66f,	// (0x00044432) main_touch_calib_pane_t_ParamLimits

0x39e2,	// (0x000387a5) list_single_fp_cale_pane_g3_ParamLimits

0x39e2,	// (0x000387a5) list_single_fp_cale_pane_g3

0x0fe3,	// (0x00035da6) bg_button_pane_cp012_ParamLimits

0x0fe3,	// (0x00035da6) bg_vkb2_func_pane_cp03_ParamLimits

0xa4c5,	// (0x0003f288) cell_vitu2_function_top_pane_g1_ParamLimits

0x0fe3,	// (0x00035da6) bg_vkb2_func_pane_cp04_ParamLimits

0xb304,	// (0x000400c7) main_ncimui_button_group_pane_ParamLimits

0xb304,	// (0x000400c7) main_ncimui_button_group_pane

0xb36a,	// (0x0004012d) main_ncimui_pane_t3_ParamLimits

0xb36a,	// (0x0004012d) main_ncimui_pane_t3

0xe828,	// (0x000435eb) phacti_button_group_pane

0xe9d2,	// (0x00043795) aid_size_list_single_double_ParamLimits

0xbcab,	// (0x00040a6e) popup_ezdial_listscroll_window_ParamLimits

0xe9de,	// (0x000437a1) popup_number_entry_window_cp01_ParamLimits

0xbd40,	// (0x00040b03) phacti_button_pane_ParamLimits

0xbd40,	// (0x00040b03) phacti_button_pane

0x0bbc,	// (0x0003597f) bg_button_pane_cp14

0xea64,	// (0x00043827) phacti_button_pane_t1

0xbd51,	// (0x00040b14) main_touch_calib_button_pane_ParamLimits

0xbd51,	// (0x00040b14) main_touch_calib_button_pane

0x1359,	// (0x0003611c) bg_button_pane_cp18_ParamLimits

0x1359,	// (0x0003611c) bg_button_pane_cp18

0xea72,	// (0x00043835) main_touch_calib_button_pane_t1_ParamLimits

0xea72,	// (0x00043835) main_touch_calib_button_pane_t1

0xea88,	// (0x0004384b) main_touch_calib_button_pane_t2_ParamLimits

0xea88,	// (0x0004384b) main_touch_calib_button_pane_t2

0x0001,

0xfcc5,	// (0x00044a88) main_touch_calib_button_pane_t_ParamLimits

0xfcc5,	// (0x00044a88) main_touch_calib_button_pane_t

0x0bbc,	// (0x0003597f) cell_ncimui_button_pane

0x0bbc,	// (0x0003597f) bg_button_pane_cp032

0xeaa6,	// (0x00043869) cell_ncimui_button_pane_t1

0x95f8,	// (0x0003e3bb) image3_infobar_pane_ParamLimits

0x95f8,	// (0x0003e3bb) image3_infobar_pane

0xb6ac,	// (0x0004046f) fs_bigclock_status_pane_ParamLimits

0xb6ac,	// (0x0004046f) fs_bigclock_status_pane

0xb6b9,	// (0x0004047c) main_fs_bigclock_clock_pane_ParamLimits

0xb6b9,	// (0x0004047c) main_fs_bigclock_clock_pane

0xb6cd,	// (0x00040490) main_fs_bigclock_indi_pane_ParamLimits

0xb6cd,	// (0x00040490) main_fs_bigclock_indi_pane

0xb6f5,	// (0x000404b8) main_fs_bigclock_swipe_pane_ParamLimits

0xb6f5,	// (0x000404b8) main_fs_bigclock_swipe_pane

0x0bbc,	// (0x0003597f) main_fs_clock_dumped_data

0xe350,	// (0x00043113) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe350,	// (0x00043113) list_single_fs_bigclock_indicator_pane_g1

0xe36c,	// (0x0004312f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe36c,	// (0x0004312f) list_single_fs_bigclock_indicator_pane_g2

0xe386,	// (0x00043149) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe386,	// (0x00043149) list_single_fs_bigclock_indicator_pane_g3

0xe3a0,	// (0x00043163) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3a0,	// (0x00043163) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb74,	// (0x00044937) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb74,	// (0x00044937) list_single_fs_bigclock_indicator_pane_g

0xe3cb,	// (0x0004318e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe3cb,	// (0x0004318e) list_single_fs_bigclock_indicator_pane_t1

0xe3f3,	// (0x000431b6) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe3f3,	// (0x000431b6) list_single_fs_bigclock_indicator_pane_t2

0xe41b,	// (0x000431de) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe41b,	// (0x000431de) list_single_fs_bigclock_indicator_pane_t3

0xe443,	// (0x00043206) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe443,	// (0x00043206) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb7f,	// (0x00044942) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb7f,	// (0x00044942) list_single_fs_bigclock_indicator_pane_t

0xeab4,	// (0x00043877) image3_infobar_fav_pane_ParamLimits

0xeab4,	// (0x00043877) image3_infobar_fav_pane

0xeac4,	// (0x00043887) image3_infobar_loc_pane_ParamLimits

0xeac4,	// (0x00043887) image3_infobar_loc_pane

0xead8,	// (0x0004389b) image3_infobar_time_pane_ParamLimits

0xead8,	// (0x0004389b) image3_infobar_time_pane

0x12fb,	// (0x000360be) image3_infobar_time_pane_g1

0xeae8,	// (0x000438ab) image3_infobar_time_pane_t1

0x12fb,	// (0x000360be) image3_infobar_loc_pane_g1

0xeaf6,	// (0x000438b9) image3_infobar_loc_pane_g2

0x0001,

0xfcca,	// (0x00044a8d) image3_infobar_loc_pane_g

0xeafe,	// (0x000438c1) image3_infobar_loc_pane_t1

0x12fb,	// (0x000360be) image3_infobar_fav_pane_g1

0xeb0c,	// (0x000438cf) image3_infobar_fav_pane_g2

0x0001,

0xfccf,	// (0x00044a92) image3_infobar_fav_pane_g

0xeb14,	// (0x000438d7) fs_bigclock_status_battery_pane

0xeb1d,	// (0x000438e0) fs_bigclock_status_signal_pane

0xeb26,	// (0x000438e9) fs_bigclock_status_title_pane

0xeb2f,	// (0x000438f2) fs_bigclock_status_signal_pane_g1

0xeb38,	// (0x000438fb) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcd4,	// (0x00044a97) fs_bigclock_status_signal_pane_g

0xeb40,	// (0x00043903) fs_bigclock_status_battery_pane_g1

0xeb49,	// (0x0004390c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcd9,	// (0x00044a9c) fs_bigclock_status_battery_pane_g

0xeb51,	// (0x00043914) fs_bigclock_status_title_pane_t1

0xbd61,	// (0x00040b24) main_fs_bigclock_clock_pane_g1

0xbd61,	// (0x00040b24) main_fs_bigclock_clock_pane_g2

0xbd61,	// (0x00040b24) main_fs_bigclock_clock_pane_g3

0xbd61,	// (0x00040b24) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcde,	// (0x00044aa1) main_fs_bigclock_clock_pane_g

0xbd6d,	// (0x00040b30) main_fs_bigclock_clock_pane_t1

0xbd81,	// (0x00040b44) main_fs_bigclock_clock_pane_t2

0x0001,

0xfce7,	// (0x00044aaa) main_fs_bigclock_clock_pane_t

0xeb5f,	// (0x00043922) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeb5f,	// (0x00043922) list_single_fs_bigclock_indicator_pane

0xeb70,	// (0x00043933) list_single_fs_bigclock_pane_ParamLimits

0xeb70,	// (0x00043933) list_single_fs_bigclock_pane

0xeb96,	// (0x00043959) main_fs_bigclock_indicator_pane_t1

0xeba5,	// (0x00043968) list_single_fs_bigclock_pane_g1

0xebad,	// (0x00043970) list_single_fs_bigclock_pane_t1

0x12fb,	// (0x000360be) main_fs_bigclock_swipe_pane_g1

0xebf0,	// (0x000439b3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcf8,	// (0x00044abb) main_fs_bigclock_swipe_pane_g

0xebf8,	// (0x000439bb) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xebf8,	// (0x000439bb) main_fs_bigclock_swipe_pane_t1

0x7433,	// (0x0003c1f6) call_type_pane_ParamLimits

0x0bbc,	// (0x0003597f) main_btmg_pane

0x51ec,	// (0x00039faf) list_single_cale_mrui_row_pane_g2_ParamLimits

0x51ec,	// (0x00039faf) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc6b,	// (0x00044a2e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc6b,	// (0x00044a2e) list_single_cale_mrui_row_pane_g

0x531c,	// (0x0003a0df) list_recal_vselct_arw_lo_pane

0xea2f,	// (0x000437f2) list_recal_vselct_arw_up_pane

0x5324,	// (0x0003a0e7) list_recal_vselct_pane

0xbdd8,	// (0x00040b9b) btmg_button_pane

0xbde4,	// (0x00040ba7) main_btmg_pane_g1

0x0bbc,	// (0x0003597f) bg_button_pane_cp044

0xec15,	// (0x000439d8) btmg_button_pane_t1

0x31d1,	// (0x00037f94) aid_listscroll_gen

0x0fe3,	// (0x00035da6) main_cntbar_detail_pane

0xe74d,	// (0x00043510) list_cmail_folder_pane

0xe76c,	// (0x0004352f) sp_fs_scroll_pane_cp03_ParamLimits

0xbaa7,	// (0x0004086a) list_single_fs_dyc_pane_cp01_ParamLimits

0xbaa7,	// (0x0004086a) list_single_fs_dyc_pane_cp01

0xec23,	// (0x000439e6) aid_size_cmail_indent

0x53b3,	// (0x0003a176) list_single_dyc_row_pane_cp01

0xbe0c,	// (0x00040bcf) cntbar_detail_list_pane_ParamLimits

0xbe0c,	// (0x00040bcf) cntbar_detail_list_pane

0xbe46,	// (0x00040c09) main_cntbar_detail_cont_pane_ParamLimits

0xbe46,	// (0x00040c09) main_cntbar_detail_cont_pane

0x7427,	// (0x0003c1ea) scroll_pane_cp032_ParamLimits

0x7427,	// (0x0003c1ea) scroll_pane_cp032

0xbe52,	// (0x00040c15) cntbar_detail_list_event_pane_ParamLimits

0xbe52,	// (0x00040c15) cntbar_detail_list_event_pane

0xbe18,	// (0x00040bdb) cntbar_detail_list_shct_pane

0x17c8,	// (0x0003658b) aid_list_gen

0xec2c,	// (0x000439ef) aid_scroll

0xec35,	// (0x000439f8) aid_size_touch_scroll_bar

0xec3e,	// (0x00043a01) aid_list_double

0x53bc,	// (0x0003a17f) aid_list_single

0xbe66,	// (0x00040c29) aid_list_single_lg

0x53c5,	// (0x0003a188) aid_list_z_g_a_sm

0x53cd,	// (0x0003a190) aid_list_z_g_d

0x53d5,	// (0x0003a198) aid_txt_z_prm

0x53e3,	// (0x0003a1a6) aid_txt_z_prm_cp01

0x53f1,	// (0x0003a1b4) aid_txt_z_sec

0xbe6f,	// (0x00040c32) main_cntbar_detail_cont_pane_g1_ParamLimits

0xbe6f,	// (0x00040c32) main_cntbar_detail_cont_pane_g1

0xbe7c,	// (0x00040c3f) main_cntbar_detail_cont_pane_g2_ParamLimits

0xbe7c,	// (0x00040c3f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcfd,	// (0x00044ac0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcfd,	// (0x00044ac0) main_cntbar_detail_cont_pane_g

0xec47,	// (0x00043a0a) main_cntbar_detail_cont_pane_t1

0xec55,	// (0x00043a18) main_cntbar_detail_cont_pane_t2

0xec63,	// (0x00043a26) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd02,	// (0x00044ac5) main_cntbar_detail_cont_pane_t

0xbe88,	// (0x00040c4b) cell_cntbar_detail_list_shct_pane_ParamLimits

0xbe88,	// (0x00040c4b) cell_cntbar_detail_list_shct_pane

0xec71,	// (0x00043a34) cntbar_detail_list_shct_pane_g1

0xec7a,	// (0x00043a3d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd09,	// (0x00044acc) cntbar_detail_list_shct_pane_g

0xbe9c,	// (0x00040c5f) cntbar_detail_list_event_pane_g1_ParamLimits

0xbe9c,	// (0x00040c5f) cntbar_detail_list_event_pane_g1

0xbea8,	// (0x00040c6b) cntbar_detail_list_event_pane_g2_ParamLimits

0xbea8,	// (0x00040c6b) cntbar_detail_list_event_pane_g2

0x0005,

0xfd0e,	// (0x00044ad1) cntbar_detail_list_event_pane_g_ParamLimits

0xfd0e,	// (0x00044ad1) cntbar_detail_list_event_pane_g

0xbf14,	// (0x00040cd7) cntbar_detail_list_event_pane_t1_ParamLimits

0xbf14,	// (0x00040cd7) cntbar_detail_list_event_pane_t1

0xbf29,	// (0x00040cec) cntbar_detail_list_event_pane_t2_ParamLimits

0xbf29,	// (0x00040cec) cntbar_detail_list_event_pane_t2

0x0002,

0xfd1b,	// (0x00044ade) cntbar_detail_list_event_pane_t_ParamLimits

0xfd1b,	// (0x00044ade) cntbar_detail_list_event_pane_t

0x12fb,	// (0x000360be) cell_cntbar_detail_list_shct_pane_g1

0x1eda,	// (0x00036c9d) navi_pane_mv_g3

0x0fe3,	// (0x00035da6) main_cntbar_detail_pane_ParamLimits

0x0bbc,	// (0x0003597f) main_notif_wgt_pane

0x92c3,	// (0x0003e086) aid_tch_main_mp4_pane_g4

0x958a,	// (0x0003e34d) popup_slider_window_cp02

0x5312,	// (0x0003a0d5) list_recal_day_event_pane

0xbdec,	// (0x00040baf) cntbar_detail_btn_pane_ParamLimits

0xbdec,	// (0x00040baf) cntbar_detail_btn_pane

0xbdfc,	// (0x00040bbf) cntbar_detail_btn_pane_cp01_ParamLimits

0xbdfc,	// (0x00040bbf) cntbar_detail_btn_pane_cp01

0xbe18,	// (0x00040bdb) cntbar_detail_list_shct_pane_ParamLimits

0xbe24,	// (0x00040be7) cntbar_detail_pane_g1_ParamLimits

0xbe24,	// (0x00040be7) cntbar_detail_pane_g1

0xbe30,	// (0x00040bf3) cntbar_detail_pane_t1_ParamLimits

0xbe30,	// (0x00040bf3) cntbar_detail_pane_t1

0xbeb4,	// (0x00040c77) cntbar_detail_list_event_pane_g3_ParamLimits

0xbeb4,	// (0x00040c77) cntbar_detail_list_event_pane_g3

0xbecc,	// (0x00040c8f) cntbar_detail_list_event_pane_g4_ParamLimits

0xbecc,	// (0x00040c8f) cntbar_detail_list_event_pane_g4

0xbee4,	// (0x00040ca7) cntbar_detail_list_event_pane_g5_ParamLimits

0xbee4,	// (0x00040ca7) cntbar_detail_list_event_pane_g5

0xbefc,	// (0x00040cbf) cntbar_detail_list_event_pane_g6_ParamLimits

0xbefc,	// (0x00040cbf) cntbar_detail_list_event_pane_g6

0xbf3e,	// (0x00040d01) cntbar_detail_list_event_pane_t3_ParamLimits

0xbf3e,	// (0x00040d01) cntbar_detail_list_event_pane_t3

0xbf50,	// (0x00040d13) popup_notif_wgt_window_ParamLimits

0xbf50,	// (0x00040d13) popup_notif_wgt_window

0xbf60,	// (0x00040d23) popup_submenu_window_cp01_ParamLimits

0xbf60,	// (0x00040d23) popup_submenu_window_cp01

0x1561,	// (0x00036324) bg_popup_window_pane_cp10

0xec83,	// (0x00043a46) listscroll_notif_wgt_pane

0xec95,	// (0x00043a58) list_notif_wgt_window

0xec9e,	// (0x00043a61) scroll_pane_cp033

0xbf6e,	// (0x00040d31) list_notif_wgt_row_pane_ParamLimits

0xbf6e,	// (0x00040d31) list_notif_wgt_row_pane

0xeca7,	// (0x00043a6a) aid_size_list_notif_wgt_del

0xecb4,	// (0x00043a77) list_notif_wgt_row_pane_g1

0xecc0,	// (0x00043a83) list_notif_wgt_row_pane_g2

0xeccf,	// (0x00043a92) list_notif_wgt_row_pane_g3

0x0002,

0xfd22,	// (0x00044ae5) list_notif_wgt_row_pane_g

0xecdc,	// (0x00043a9f) list_notif_wgt_row_pane_t1

0xecf2,	// (0x00043ab5) list_notif_wgt_row_pane_t2

0xed04,	// (0x00043ac7) list_notif_wgt_row_pane_t3

0x0002,

0xfd29,	// (0x00044aec) list_notif_wgt_row_pane_t

0xd7bb,	// (0x0004257e) list_recal_day_event_pane_g1

0xed16,	// (0x00043ad9) list_recal_day_event_pane_t1

0x0bbc,	// (0x0003597f) bg_button_pane_cp045

0xbf80,	// (0x00040d43) cntbar_detail_btn_pane_t1

0x20db,	// (0x00036e9e) main_callh_pane_ParamLimits

0x20db,	// (0x00036e9e) main_callh_pane

0x0bbc,	// (0x0003597f) main_coverflow0_pane

0x0bbc,	// (0x0003597f) main_wgtman_pane

0xb70d,	// (0x000404d0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb70d,	// (0x000404d0) main_fs_bigclock_unlock_btn_pane

0xba0c,	// (0x000407cf) bg_button_pane_cp16

0xba1c,	// (0x000407df) cell_tport_appsw_pane_g3

0xbf8e,	// (0x00040d51) cf0_flow_pane_ParamLimits

0xbf8e,	// (0x00040d51) cf0_flow_pane

0xed25,	// (0x00043ae8) listscroll_cf0_pane

0xed30,	// (0x00043af3) main_cf0_pane_g1

0xbf9d,	// (0x00040d60) main_cf0_pane_t1_ParamLimits

0xbf9d,	// (0x00040d60) main_cf0_pane_t1

0xbfb1,	// (0x00040d74) main_cf0_pane_t2_ParamLimits

0xbfb1,	// (0x00040d74) main_cf0_pane_t2

0x0001,

0xfd35,	// (0x00044af8) main_cf0_pane_t_ParamLimits

0xfd35,	// (0x00044af8) main_cf0_pane_t

0xed42,	// (0x00043b05) scroll_pane_cp11

0xbfc5,	// (0x00040d88) cf0_flow_pane_g1

0xbfcd,	// (0x00040d90) cf0_flow_pane_g2

0x0001,

0xfd3a,	// (0x00044afd) cf0_flow_pane_g

0xbfd5,	// (0x00040d98) cf0_flow_pane_t1

0x0bbc,	// (0x0003597f) main_call6_pane

0x0bbc,	// (0x0003597f) main_calllock_pane

0xbfe3,	// (0x00040da6) call6_btn_grp_pane_ParamLimits

0xbfe3,	// (0x00040da6) call6_btn_grp_pane

0xbff2,	// (0x00040db5) call6_pane_g1_ParamLimits

0xbff2,	// (0x00040db5) call6_pane_g1

0xc002,	// (0x00040dc5) popup_call6_1st_window_ParamLimits

0xc002,	// (0x00040dc5) popup_call6_1st_window

0xc010,	// (0x00040dd3) popup_call6_2nd_window_ParamLimits

0xc010,	// (0x00040dd3) popup_call6_2nd_window

0xc01e,	// (0x00040de1) cell_call6_btn_pane_ParamLimits

0xc01e,	// (0x00040de1) cell_call6_btn_pane

0x1561,	// (0x00036324) bg_popup_call2_in_pane_cp03

0xed92,	// (0x00043b55) popup_call6_1st_window_g1

0xed9a,	// (0x00043b5d) popup_call6_1st_window_g2

0xeda2,	// (0x00043b65) popup_call6_1st_window_g3

0x0002,

0xfd3f,	// (0x00044b02) popup_call6_1st_window_g

0xedaa,	// (0x00043b6d) popup_call6_1st_window_t1

0xedb9,	// (0x00043b7c) popup_call6_1st_window_t2

0xedc7,	// (0x00043b8a) popup_call6_1st_window_t3

0x0002,

0xfd46,	// (0x00044b09) popup_call6_1st_window_t

0x1561,	// (0x00036324) bg_popup_call2_in_pane_cp04

0xedd5,	// (0x00043b98) popup_call6_2nd_window_g1

0xeddd,	// (0x00043ba0) popup_call6_2nd_window_g2

0xede5,	// (0x00043ba8) popup_call6_2nd_window_g3

0x0002,

0xfd4d,	// (0x00044b10) popup_call6_2nd_window_g

0xeded,	// (0x00043bb0) popup_call6_2nd_window_t1

0x0bbc,	// (0x0003597f) bg_button_pane_cp15

0xedfc,	// (0x00043bbf) cell_call6_btn_pane_g1

0xf00e,	// (0x00043dd1) cell_call6_btn_pane_t1

0xc02d,	// (0x00040df0) listscroll_wgtman_pane_ParamLimits

0xc02d,	// (0x00040df0) listscroll_wgtman_pane

0xc049,	// (0x00040e0c) wgtman_btn_pane_ParamLimits

0xc049,	// (0x00040e0c) wgtman_btn_pane

0x1cee,	// (0x00036ab1) aid_scroll_copy1

0xee05,	// (0x00043bc8) list_wgtman_pane

0xc07e,	// (0x00040e41) wgtman_btn_pane_g1_ParamLimits

0xc07e,	// (0x00040e41) wgtman_btn_pane_g1

0xc0a6,	// (0x00040e69) wgtman_btn_pane_t1_ParamLimits

0xc0a6,	// (0x00040e69) wgtman_btn_pane_t1

0xee0f,	// (0x00043bd2) wgtman_btn_pane_t2_ParamLimits

0xee0f,	// (0x00043bd2) wgtman_btn_pane_t2

0x0001,

0xfd54,	// (0x00044b17) wgtman_btn_pane_t_ParamLimits

0xfd54,	// (0x00044b17) wgtman_btn_pane_t

0xc0dd,	// (0x00040ea0) listrow_wgtman_pane_ParamLimits

0xc0dd,	// (0x00040ea0) listrow_wgtman_pane

0xc0f9,	// (0x00040ebc) listrow_wgtman_pane_g1

0xc106,	// (0x00040ec9) listrow_wgtman_pane_g2

0x0001,

0xfd59,	// (0x00044b1c) listrow_wgtman_pane_g

0x53ff,	// (0x0003a1c2) listrow_wgtman_pane_t1

0x5417,	// (0x0003a1da) listrow_wgtman_pane_t2

0x0001,

0xfd5e,	// (0x00044b21) listrow_wgtman_pane_t

0x543d,	// (0x0003a200) wait_bar_pane_cp09

0xee26,	// (0x00043be9) main_calllock_btn_pane

0xee30,	// (0x00043bf3) main_calllock_pane_g1

0x0bbc,	// (0x0003597f) bg_button_pane_cp17

0xedfc,	// (0x00043bbf) main_calllock_btn_pane_g1

0xee38,	// (0x00043bfb) main_calllock_btn_pane_t1

0x0bbc,	// (0x0003597f) main_dialer3_pane

0x0bbc,	// (0x0003597f) main_fmrd2_pane

0x12fb,	// (0x000360be) main_fs_bigclock_unlock_btn_pane_g1

0xc12c,	// (0x00040eef) main_fs_bigclock_unlock_btn_pane_t1

0xc13a,	// (0x00040efd) area_fmrd2_info_pane_ParamLimits

0xc13a,	// (0x00040efd) area_fmrd2_info_pane

0xc148,	// (0x00040f0b) area_fmrd2_visual_pane_ParamLimits

0xc148,	// (0x00040f0b) area_fmrd2_visual_pane

0xc156,	// (0x00040f19) fmrd2_indi_pane_ParamLimits

0xc156,	// (0x00040f19) fmrd2_indi_pane

0xc163,	// (0x00040f26) area_fmrd2_visual_pane_g1

0xc16b,	// (0x00040f2e) area_fmrd2_visual_pane_t1

0xc17b,	// (0x00040f3e) area_fmrd2_visual_pane_t2

0xc18b,	// (0x00040f4e) area_fmrd2_visual_pane_t3

0x0002,

0xfd68,	// (0x00044b2b) area_fmrd2_visual_pane_t

0xc19b,	// (0x00040f5e) area_fmrd2_info_pane_g1

0xc1a3,	// (0x00040f66) area_fmrd2_info_pane_t1

0xc1b3,	// (0x00040f76) area_fmrd2_info_pane_t2

0xc1c3,	// (0x00040f86) area_fmrd2_info_pane_t3

0xc1d3,	// (0x00040f96) area_fmrd2_info_pane_t4

0x0003,

0xfd6f,	// (0x00044b32) area_fmrd2_info_pane_t

0xc1e1,	// (0x00040fa4) fmrd2_indi_pane_t1

0xc1f1,	// (0x00040fb4) fmrd2_indi_pane_t2

0xc201,	// (0x00040fc4) fmrd2_indi_pane_t3

0x0002,

0xfd78,	// (0x00044b3b) fmrd2_indi_pane_t

0xe3af,	// (0x00043172) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3af,	// (0x00043172) list_single_fs_bigclock_indicator_pane_g5

0xe460,	// (0x00043223) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe460,	// (0x00043223) list_single_fs_bigclock_indicator_pane_t5

0xd437,	// (0x000421fa) aid_cell_bcale_month_pane_ParamLimits

0xd437,	// (0x000421fa) aid_cell_bcale_month_pane

0xd437,	// (0x000421fa) bcale_month_pane_ParamLimits

0xd437,	// (0x000421fa) bcale_month_pane

0xd42b,	// (0x000421ee) bcale_preview_pane_ParamLimits

0xd42b,	// (0x000421ee) bcale_preview_pane

0xebad,	// (0x00043970) list_single_fs_bigclock_pane_t1_ParamLimits

0xebcc,	// (0x0004398f) list_single_fs_bigclock_pane_t2_ParamLimits

0xebcc,	// (0x0004398f) list_single_fs_bigclock_pane_t2

0x0001,

0xfcf3,	// (0x00044ab6) list_single_fs_bigclock_pane_t_ParamLimits

0xfcf3,	// (0x00044ab6) list_single_fs_bigclock_pane_t

0xc124,	// (0x00040ee7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd63,	// (0x00044b26) main_fs_bigclock_unlock_btn_pane_g

0xc20f,	// (0x00040fd2) aid_dia3_key_size_ParamLimits

0xc20f,	// (0x00040fd2) aid_dia3_key_size

0xc21b,	// (0x00040fde) aid_dia3_listrow_size_ParamLimits

0xc21b,	// (0x00040fde) aid_dia3_listrow_size

0xc22b,	// (0x00040fee) dia3_keypad_fun_pane_ParamLimits

0xc22b,	// (0x00040fee) dia3_keypad_fun_pane

0xc23d,	// (0x00041000) dia3_keypad_num_pane_ParamLimits

0xc23d,	// (0x00041000) dia3_keypad_num_pane

0xc24f,	// (0x00041012) dia3_listscroll_pane_ParamLimits

0xc24f,	// (0x00041012) dia3_listscroll_pane

0xc25d,	// (0x00041020) dia3_numentry_pane_ParamLimits

0xc25d,	// (0x00041020) dia3_numentry_pane

0xee47,	// (0x00043c0a) dia3_list_pane

0xee52,	// (0x00043c15) scroll_pane_cp12

0x0bbc,	// (0x0003597f) bg_dia3_numentry_pane

0xc26b,	// (0x0004102e) dia3_numentry_pane_t1

0xc27a,	// (0x0004103d) cell_dia3_key_num_pane

0xc282,	// (0x00041045) cell_dia3_key0_fun_pane_ParamLimits

0xc282,	// (0x00041045) cell_dia3_key0_fun_pane

0xc28f,	// (0x00041052) cell_dia3_key1_fun_pane_ParamLimits

0xc28f,	// (0x00041052) cell_dia3_key1_fun_pane

0xc29c,	// (0x0004105f) dia3_listrow_pane

0xe102,	// (0x00042ec5) bg_dia3_numentry_pane_g1

0x0bbc,	// (0x0003597f) bg_button_pane_cp21

0xee5d,	// (0x00043c20) cell_dia3_key_num_pane_t1

0xee6b,	// (0x00043c2e) cell_dia3_key_num_pane_t2

0xee7a,	// (0x00043c3d) cell_dia3_key_num_pane_t3

0xee89,	// (0x00043c4c) cell_dia3_key_num_pane_t4

0x0003,

0xfd7f,	// (0x00044b42) cell_dia3_key_num_pane_t

0x0bbc,	// (0x0003597f) bg_button_pane_cp19

0xc2a9,	// (0x0004106c) cell_dia3_key0_fun_pane_g1

0x0bbc,	// (0x0003597f) bg_button_pane_cp20

0xc2b1,	// (0x00041074) cell_dia3_key1_fun_pane_g1

0xed4d,	// (0x00043b10) area_left_week_number_pane

0xed4d,	// (0x00043b10) area_top_day_name_pane

0xed4d,	// (0x00043b10) frame_month_view_pane

0xed4d,	// (0x00043b10) grid_month_view_pane

0xed4d,	// (0x00043b10) cell_top_day_name_pane_ParamLimits

0xed4d,	// (0x00043b10) cell_top_day_name_pane

0xed4d,	// (0x00043b10) cell_area_left_week_number_pane_ParamLimits

0xed4d,	// (0x00043b10) cell_area_left_week_number_pane

0xed4d,	// (0x00043b10) cell_month_view_pane_ParamLimits

0xed4d,	// (0x00043b10) cell_month_view_pane

0xed59,	// (0x00043b1c) frm_month_g1

0xed59,	// (0x00043b1c) frm_month_g2

0xed59,	// (0x00043b1c) frm_month_g3

0xed59,	// (0x00043b1c) frm_month_g4

0xed59,	// (0x00043b1c) frm_month_g5

0xed59,	// (0x00043b1c) frm_month_g6

0xed59,	// (0x00043b1c) frm_month_g7

0xed59,	// (0x00043b1c) frm_month_g8

0xed59,	// (0x00043b1c) frm_month_g9

0xed59,	// (0x00043b1c) frm_month_g10

0xed59,	// (0x00043b1c) frm_month_g11

0xed59,	// (0x00043b1c) frm_month_g12

0xed59,	// (0x00043b1c) frm_month_g13

0xed59,	// (0x00043b1c) frm_month_g14

0xed59,	// (0x00043b1c) frm_month_g15

0xed59,	// (0x00043b1c) frm_month_g16

0x000f,

0xfd88,	// (0x00044b4b) frm_month_g

0xee98,	// (0x00043c5b) cell_top_day_name_pane_t1

0xed59,	// (0x00043b1c) cell_area_left_week_number_pane_g1

0xee98,	// (0x00043c5b) cell_area_left_week_number_pane_t1

0xed59,	// (0x00043b1c) cell_month_view_pane_g1

0xee98,	// (0x00043c5b) cell_month_view_pane_t1

0x0bbc,	// (0x0003597f) main_fps_pane

0xe624,	// (0x000433e7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe624,	// (0x000433e7) cmail_ddmenu_btn02_pane_cp1

0xe640,	// (0x00043403) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe640,	// (0x00043403) cmail_ddmenu_btn02_pane_cp2

0xbce0,	// (0x00040aa3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xbce0,	// (0x00040aa3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfca6,	// (0x00044a69) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfca6,	// (0x00044a69) cmail_ddmenu_btn02_pane_g

0xbcfe,	// (0x00040ac1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xbcfe,	// (0x00040ac1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcab,	// (0x00044a6e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcab,	// (0x00044a6e) cmail_ddmenu_btn02_pane_t

0xc2b9,	// (0x0004107c) fps_text_pane_ParamLimits

0xc2b9,	// (0x0004107c) fps_text_pane

0xc2c6,	// (0x00041089) main_fps_pane_g1_ParamLimits

0xc2c6,	// (0x00041089) main_fps_pane_g1

0xc2d4,	// (0x00041097) wait_bar_pane_cp010_ParamLimits

0xc2d4,	// (0x00041097) wait_bar_pane_cp010

0xc2e0,	// (0x000410a3) fps_text_pane_t1_ParamLimits

0xc2e0,	// (0x000410a3) fps_text_pane_t1

0x9972,	// (0x0003e735) cam4_image_uncrop_pane_g1

0x997b,	// (0x0003e73e) cam4_image_uncrop_pane_g2

0x9984,	// (0x0003e747) cam4_image_uncrop_pane_g3

0x998d,	// (0x0003e750) cam4_image_uncrop_pane_g4

0x0003,

0xf7f8,	// (0x000445bb) cam4_image_uncrop_pane_g

0xc29c,	// (0x0004105f) dia3_listrow_pane_ParamLimits

0x0bbc,	// (0x0003597f) main_phob2_pane

0xb9ee,	// (0x000407b1) cell_tport_appsw_pane_cp02_ParamLimits

0xb9ee,	// (0x000407b1) cell_tport_appsw_pane_cp02

0xb9fd,	// (0x000407c0) cell_tport_appsw_pane_cp03_ParamLimits

0xb9fd,	// (0x000407c0) cell_tport_appsw_pane_cp03

0x0bbc,	// (0x0003597f) phob2_contact_card_pane

0x0bbc,	// (0x0003597f) phob2_listscroll_pane

0xeeaa,	// (0x00043c6d) phob2_list_pane

0xe9f3,	// (0x000437b6) scroll_pane_cp034

0xc2f9,	// (0x000410bc) phob2_cc_data_pane_ParamLimits

0xc2f9,	// (0x000410bc) phob2_cc_data_pane

0xc313,	// (0x000410d6) phob2_cc_listscroll_pane_ParamLimits

0xc313,	// (0x000410d6) phob2_cc_listscroll_pane

0xc0dd,	// (0x00040ea0) list_double_large_graphic_phob2_pane_ParamLimits

0xc0dd,	// (0x00040ea0) list_double_large_graphic_phob2_pane

0xc32d,	// (0x000410f0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc32d,	// (0x000410f0) list_double_large_graphic_phob2_pane_g1

0x544f,	// (0x0003a212) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x544f,	// (0x0003a212) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfda9,	// (0x00044b6c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfda9,	// (0x00044b6c) list_double_large_graphic_phob2_pane_g

0x5475,	// (0x0003a238) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x5475,	// (0x0003a238) list_double_large_graphic_phob2_pane_t1

0x548a,	// (0x0003a24d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x548a,	// (0x0003a24d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdb2,	// (0x00044b75) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdb2,	// (0x00044b75) list_double_large_graphic_phob2_pane_t

0x12af,	// (0x00036072) list_highlight_pane_cp024

0xeeb2,	// (0x00043c75) phob2_cc_button_pane

0xc33a,	// (0x000410fd) phob2_cc_data_pane_g1_ParamLimits

0xc33a,	// (0x000410fd) phob2_cc_data_pane_g1

0xc349,	// (0x0004110c) phob2_cc_data_pane_g2_ParamLimits

0xc349,	// (0x0004110c) phob2_cc_data_pane_g2

0x0001,

0xfdb7,	// (0x00044b7a) phob2_cc_data_pane_g_ParamLimits

0xfdb7,	// (0x00044b7a) phob2_cc_data_pane_g

0xc358,	// (0x0004111b) phob2_cc_data_pane_t1_ParamLimits

0xc358,	// (0x0004111b) phob2_cc_data_pane_t1

0xc36d,	// (0x00041130) phob2_cc_data_pane_t2_ParamLimits

0xc36d,	// (0x00041130) phob2_cc_data_pane_t2

0xc382,	// (0x00041145) phob2_cc_data_pane_t3_ParamLimits

0xc382,	// (0x00041145) phob2_cc_data_pane_t3

0x0002,

0xfdbc,	// (0x00044b7f) phob2_cc_data_pane_t_ParamLimits

0xfdbc,	// (0x00044b7f) phob2_cc_data_pane_t

0xeeba,	// (0x00043c7d) phob2_cc_list_pane_ParamLimits

0xeeba,	// (0x00043c7d) phob2_cc_list_pane

0xe025,	// (0x00042de8) scroll_pane_cp035_ParamLimits

0xe025,	// (0x00042de8) scroll_pane_cp035

0x0fe3,	// (0x00035da6) bg_button_pane_cp033

0xeec6,	// (0x00043c89) phob2_cc_button_pane_g1

0xeed2,	// (0x00043c95) phob2_cc_button_pane_t1

0xeee7,	// (0x00043caa) phob2_cc_button_pane_t2

0x0001,

0xfdc3,	// (0x00044b86) phob2_cc_button_pane_t

0xc397,	// (0x0004115a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc397,	// (0x0004115a) list_double_large_graphic_phob2_cc_pane

0xc40b,	// (0x000411ce) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc40b,	// (0x000411ce) list_double_large_graphic_phob2_cc_pane_g1

0x549f,	// (0x0003a262) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x549f,	// (0x0003a262) list_double_large_graphic_phob2_cc_pane_g2

0x54ab,	// (0x0003a26e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x54ab,	// (0x0003a26e) list_double_large_graphic_phob2_cc_pane_g3

0x54b7,	// (0x0003a27a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x54b7,	// (0x0003a27a) list_double_large_graphic_phob2_cc_pane_g4

0x54c3,	// (0x0003a286) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x54c3,	// (0x0003a286) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdc8,	// (0x00044b8b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdc8,	// (0x00044b8b) list_double_large_graphic_phob2_cc_pane_g

0x54cf,	// (0x0003a292) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x54cf,	// (0x0003a292) list_double_large_graphic_phob2_cc_pane_t1

0x54f8,	// (0x0003a2bb) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x54f8,	// (0x0003a2bb) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdd3,	// (0x00044b96) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdd3,	// (0x00044b96) list_double_large_graphic_phob2_cc_pane_t

0xeef9,	// (0x00043cbc) list_highlight_pane_cp025_ParamLimits

0xeef9,	// (0x00043cbc) list_highlight_pane_cp025

0x0fe3,	// (0x00035da6) bg_button_pane_cp033_ParamLimits

0xeec6,	// (0x00043c89) phob2_cc_button_pane_g1_ParamLimits

0xeed2,	// (0x00043c95) phob2_cc_button_pane_t1_ParamLimits

0xeee7,	// (0x00043caa) phob2_cc_button_pane_t2_ParamLimits

0xfdc3,	// (0x00044b86) phob2_cc_button_pane_t_ParamLimits

0x5776,	// (0x0003a539) popup_wgtman_window

0xd684,	// (0x00042447) scroll_pane_cp038

0xc066,	// (0x00040e29) wgtman_btn_pane_cp_01_ParamLimits

0xc066,	// (0x00040e29) wgtman_btn_pane_cp_01

0xef07,	// (0x00043cca) wgtman_content_pane

0xef10,	// (0x00043cd3) wgtman_heading_pane

0x0bbc,	// (0x0003597f) bg_heading_pane_cp02

0xef19,	// (0x00043cdc) wgtman_heading_pane_g1

0xef21,	// (0x00043ce4) wgtman_heading_pane_t1

0xef2f,	// (0x00043cf2) scroll_pane_cp036

0xef37,	// (0x00043cfa) wgtman_list_pane

0xed65,	// (0x00043b28) wgtman_list_pane_t1_ParamLimits

0xed65,	// (0x00043b28) wgtman_list_pane_t1

0x98d1,	// (0x0003e694) cam4_grid_pane

0xa685,	// (0x0003f448) bg_button_pane_cp015_ParamLimits

0xa69a,	// (0x0003f45d) bg_button_pane_cp016_ParamLimits

0xa6a6,	// (0x0003f469) bg_button_pane_cp017_ParamLimits

0xa6fe,	// (0x0003f4c1) popup_vitu2_query_window_g3_ParamLimits

0xa6fe,	// (0x0003f4c1) popup_vitu2_query_window_g3

0xa79f,	// (0x0003f562) popup_vitu2_query_window_t6_ParamLimits

0xa79f,	// (0x0003f562) popup_vitu2_query_window_t6

0xa7ca,	// (0x0003f58d) popup_vitu2_query_window_t7_ParamLimits

0xa7ca,	// (0x0003f58d) popup_vitu2_query_window_t7

0xed80,	// (0x00043b43) cam4_grid_pane_g1

0xed89,	// (0x00043b4c) cam4_grid_pane_g2

0xef3f,	// (0x00043d02) cam4_grid_pane_g3

0xef48,	// (0x00043d0b) cam4_grid_pane_g4

0x0003,

0xfdd8,	// (0x00044b9b) cam4_grid_pane_g

0x61ac,	// (0x0003af6f) aid_placing_vt_slider_lsc_ParamLimits

0x64ec,	// (0x0003b2af) vidtel_button_pane_ParamLimits

0x64ec,	// (0x0003b2af) vidtel_button_pane

0x0bbc,	// (0x0003597f) bg_button_pane_cp034

0xef53,	// (0x00043d16) vidtel_button_pane_g1

0xef5b,	// (0x00043d1e) vidtel_button_pane_t1

0xd7ab,	// (0x0004256e) aid_size_vtel_slider_touch

0xe025,	// (0x00042de8) scroll_pane_cp039

0xb4c5,	// (0x00040288) ncim_query_button_pane_cp01_ParamLimits

0xb4e4,	// (0x000402a7) ncimui_query_pane_g1_ParamLimits

0x0fe3,	// (0x00035da6) input_focus_pane_cp012_ParamLimits

0xe148,	// (0x00042f0b) ncim_query_entry_pane_t1_ParamLimits

0xe025,	// (0x00042de8) scroll_pane_cp039_ParamLimits

0x1dc5,	// (0x00036b88) navi_pane_bcale_mc_g1

0x1dcd,	// (0x00036b90) navi_pane_bcale_mc_t1

0xe674,	// (0x00043437) main_sp_fs_email_pane_g1

0xe680,	// (0x00043443) main_sp_fs_email_pane_g2

0x0001,

0xfbe9,	// (0x000449ac) main_sp_fs_email_pane_g

0xe8f2,	// (0x000436b5) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8f2,	// (0x000436b5) list_single_cale_mrui_row_pane_g3

0x5371,	// (0x0003a134) list_single_recal_day_pane_g5_event_pane

0x5387,	// (0x0003a14a) list_single_recal_day_pane_g7

0xef71,	// (0x00043d34) list_recal_day_event_pane_cp01

0xef7a,	// (0x00043d3d) list_recal_vselct_arw_lo_pane_cp01

0xef82,	// (0x00043d45) list_recal_vselct_arw_up_pane_cp01

0xef8a,	// (0x00043d4d) list_recal_vselct_pane_cp01

0xd7bb,	// (0x0004257e) list_recal_day_event_pane_cp01_g1

0x5521,	// (0x0003a2e4) list_recal_day_event_pane_cp01_t1

0x538f,	// (0x0003a152) list_single_recal_day_pane_t1_ParamLimits

0x53a1,	// (0x0003a164) list_single_recal_day_pane_t2_ParamLimits

0xfcbb,	// (0x00044a7e) list_single_recal_day_pane_t_ParamLimits

0x1242,	// (0x00036005) bg_notes_pane_ParamLimits

0x1337,	// (0x000360fa) list_notes_pane_ParamLimits

0x58b9,	// (0x0003a67c) scroll_pane_cp06_ParamLimits

0x1359,	// (0x0003611c) main_notes_pane_ParamLimits

0x0fe3,	// (0x00035da6) main_welc_pane

0xc44a,	// (0x0004120d) main_welc_body_pane_ParamLimits

0xc44a,	// (0x0004120d) main_welc_body_pane

0xc463,	// (0x00041226) main_welc_opti_pane_ParamLimits

0xc463,	// (0x00041226) main_welc_opti_pane

0xc4b8,	// (0x0004127b) main_welc_pane_t1_ParamLimits

0xc4b8,	// (0x0004127b) main_welc_pane_t1

0xc664,	// (0x00041427) main_welc_body_row_pane_ParamLimits

0xc664,	// (0x00041427) main_welc_body_row_pane

0x12af,	// (0x00036072) main_welc_opti_row_pane_ParamLimits

0x12af,	// (0x00036072) main_welc_opti_row_pane

0xef9c,	// (0x00043d5f) main_welc_opti_row_pane_g1

0xc68d,	// (0x00041450) main_welc_opti_row_pane_t1

0xefa4,	// (0x00043d67) main_welc_body_row_pane_t1

0xec8d,	// (0x00043a50) popup_notif_wgt_heading_pane

0xeca7,	// (0x00043a6a) aid_size_list_notif_wgt_del_ParamLimits

0xecb4,	// (0x00043a77) list_notif_wgt_row_pane_g1_ParamLimits

0xecc0,	// (0x00043a83) list_notif_wgt_row_pane_g2_ParamLimits

0xeccf,	// (0x00043a92) list_notif_wgt_row_pane_g3_ParamLimits

0xfd22,	// (0x00044ae5) list_notif_wgt_row_pane_g_ParamLimits

0xecdc,	// (0x00043a9f) list_notif_wgt_row_pane_t1_ParamLimits

0xecf2,	// (0x00043ab5) list_notif_wgt_row_pane_t2_ParamLimits

0xed04,	// (0x00043ac7) list_notif_wgt_row_pane_t3_ParamLimits

0xfd29,	// (0x00044aec) list_notif_wgt_row_pane_t_ParamLimits

0xc0f9,	// (0x00040ebc) listrow_wgtman_pane_g1_ParamLimits

0xc106,	// (0x00040ec9) listrow_wgtman_pane_g2_ParamLimits

0xfd59,	// (0x00044b1c) listrow_wgtman_pane_g_ParamLimits

0x53ff,	// (0x0003a1c2) listrow_wgtman_pane_t1_ParamLimits

0x5417,	// (0x0003a1da) listrow_wgtman_pane_t2_ParamLimits

0xfd5e,	// (0x00044b21) listrow_wgtman_pane_t_ParamLimits

0x543d,	// (0x0003a200) wait_bar_pane_cp09_ParamLimits

0x0bbc,	// (0x0003597f) bg_popup_heading_pane_cp02

0xefb3,	// (0x00043d76) popup_notif_wgt_heading_pane_g1

0xefbb,	// (0x00043d7e) popup_notif_wgt_heading_pane_t1

0x0bbc,	// (0x0003597f) main_vids_pane

0x0bbc,	// (0x0003597f) vids_listscroll_pane

0xc69c,	// (0x0004145f) scroll_pane_cp040

0x0bbc,	// (0x0003597f) vids_list_pane

0xc6a7,	// (0x0004146a) vids_list_double_pane_ParamLimits

0xc6a7,	// (0x0004146a) vids_list_double_pane

0xc6bf,	// (0x00041482) vids_list_double_pane_g1

0xc6c8,	// (0x0004148b) vids_list_double_pane_t1

0xc6d8,	// (0x0004149b) vids_list_double_pane_t2

0x0001,

0xfdf7,	// (0x00044bba) vids_list_double_pane_t

0x0fe3,	// (0x00035da6) main_ncimui_pane_ParamLimits

0xb31c,	// (0x000400df) main_ncimui_pane_g1_ParamLimits

0xb328,	// (0x000400eb) main_ncimui_pane_g2_ParamLimits

0xb328,	// (0x000400eb) main_ncimui_pane_g2

0x0001,

0xfaea,	// (0x000448ad) main_ncimui_pane_g_ParamLimits

0xfaea,	// (0x000448ad) main_ncimui_pane_g

0xc47c,	// (0x0004123f) main_welc_pane_g1_ParamLimits

0xc47c,	// (0x0004123f) main_welc_pane_g1

0xc488,	// (0x0004124b) main_welc_pane_g2_ParamLimits

0xc488,	// (0x0004124b) main_welc_pane_g2

0x0003,

0xfde1,	// (0x00044ba4) main_welc_pane_g_ParamLimits

0xfde1,	// (0x00044ba4) main_welc_pane_g

0x1242,	// (0x00036005) listscroll_mce_pane_ParamLimits

0x1f1a,	// (0x00036cdd) wait_bar_pane_cp10

0x31d9,	// (0x00037f9c) main_cale_day_pane_ParamLimits

0x31d9,	// (0x00037f9c) main_cale_week_pane_ParamLimits

0x1242,	// (0x00036005) main_messa_pane_ParamLimits

0x8da1,	// (0x0003db64) main_clock2_btn_pane_ParamLimits

0x8da1,	// (0x0003db64) main_clock2_btn_pane

0x3a5c,	// (0x0003881f) main_clock2_btn_pane_cp01_ParamLimits

0x3a5c,	// (0x0003881f) main_clock2_btn_pane_cp01

0xe8d1,	// (0x00043694) list_cale_mrui_pane_ParamLimits

0xed3a,	// (0x00043afd) main_cf0_pane_g2

0x0001,

0xfd30,	// (0x00044af3) main_cf0_pane_g

0xed4d,	// (0x00043b10) area_left_week_number_pane_ParamLimits

0xed4d,	// (0x00043b10) area_top_day_name_pane_ParamLimits

0xed4d,	// (0x00043b10) frame_month_view_pane_ParamLimits

0xed4d,	// (0x00043b10) grid_month_view_pane_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g1_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g2_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g3_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g4_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g5_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g6_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g7_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g8_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g9_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g10_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g11_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g12_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g13_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g14_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g15_ParamLimits

0xed59,	// (0x00043b1c) frm_month_g16_ParamLimits

0xfd88,	// (0x00044b4b) frm_month_g_ParamLimits

0xee98,	// (0x00043c5b) cell_top_day_name_pane_t1_ParamLimits

0xed59,	// (0x00043b1c) cell_area_left_week_number_pane_g1_ParamLimits

0xee98,	// (0x00043c5b) cell_area_left_week_number_pane_t1_ParamLimits

0xed59,	// (0x00043b1c) cell_month_view_pane_g1_ParamLimits

0xee98,	// (0x00043c5b) cell_month_view_pane_t1_ParamLimits

0x123a,	// (0x00035ffd) main_clock2_btn_pane_g1

0xefc9,	// (0x00043d8c) main_clock2_btn_pane_t1

0x0fe3,	// (0x00035da6) listscroll_cmail_pane_ParamLimits

0xe674,	// (0x00043437) main_sp_fs_email_pane_g1_ParamLimits

0xe680,	// (0x00043443) main_sp_fs_email_pane_g2_ParamLimits

0xfbe9,	// (0x000449ac) main_sp_fs_email_pane_g_ParamLimits

0xea10,	// (0x000437d3) list_recal_day_pane_ParamLimits

0xea21,	// (0x000437e4) mian_recal_day_pane_t1

0x4f28,	// (0x00039ceb) list_single_dyc_row_text_pane_t4_ParamLimits

0x4f28,	// (0x00039ceb) list_single_dyc_row_text_pane_t4

0x4f5f,	// (0x00039d22) list_single_dyc_row_text_pane_t5_ParamLimits

0x4f5f,	// (0x00039d22) list_single_dyc_row_text_pane_t5

0x4fd5,	// (0x00039d98) list_single_dyc_row_text_pane_t6_ParamLimits

0x4fd5,	// (0x00039d98) list_single_dyc_row_text_pane_t6

0x7365,	// (0x0003c128) aid_mgn_list_cale_time_pane

0x0fe3,	// (0x00035da6) main_gallery2_pane_ParamLimits

0x3a72,	// (0x00038835) main_clock2_pane_cp01_t1

0x3a80,	// (0x00038843) main_clock2_pane_cp01_t3

0x0001,

0xf6d9,	// (0x0004449c) main_clock2_pane_cp01_t

0x5ce2,	// (0x0003aaa5) cale_week_scroll_pane_g16_ParamLimits

0x5ce2,	// (0x0003aaa5) cale_week_scroll_pane_g16

0x1561,	// (0x00036324) vorec_slider_pane

0xef5b,	// (0x00043d1e) vidtel_button_pane_t1_ParamLimits

0xbd61,	// (0x00040b24) main_fs_bigclock_clock_pane_g1_ParamLimits

0xbd61,	// (0x00040b24) main_fs_bigclock_clock_pane_g2_ParamLimits

0xbd61,	// (0x00040b24) main_fs_bigclock_clock_pane_g3_ParamLimits

0xbd61,	// (0x00040b24) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcde,	// (0x00044aa1) main_fs_bigclock_clock_pane_g_ParamLimits

0xbd6d,	// (0x00040b30) main_fs_bigclock_clock_pane_t1_ParamLimits

0xbd81,	// (0x00040b44) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfce7,	// (0x00044aaa) main_fs_bigclock_clock_pane_t_ParamLimits

0x86e2,	// (0x0003d4a5) main_mup3_lyrics_pane_ParamLimits

0x86e2,	// (0x0003d4a5) main_mup3_lyrics_pane

0xc70b,	// (0x000414ce) main_mup3_lyrics_pane_t1_ParamLimits

0xc70b,	// (0x000414ce) main_mup3_lyrics_pane_t1

0x92ad,	// (0x0003e070) aid_main_mp4_pane_t1_area

0x92b7,	// (0x0003e07a) aid_main_mp4_pane_t2_area

0x93bc,	// (0x0003e17f) main_mp4_pane_g7_ParamLimits

0x93bc,	// (0x0003e17f) main_mp4_pane_g7

0x93c8,	// (0x0003e18b) main_mp4_pane_g8_ParamLimits

0x93c8,	// (0x0003e18b) main_mp4_pane_g8

0x9793,	// (0x0003e556) aid_call6_pane_g1_size

0xc3dd,	// (0x000411a0) list_double_large_graphic_phob2_other_pane_ParamLimits

0xc3dd,	// (0x000411a0) list_double_large_graphic_phob2_other_pane

0x1463,	// (0x00036226) list_double_large_graphic_phob2_other_pane_g1

0x0bbc,	// (0x0003597f) list_highlight_pane_cp026

0x0fe3,	// (0x00035da6) main_welc_pane_ParamLimits

0xb8eb,	// (0x000406ae) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb8eb,	// (0x000406ae) main_sp_fs_ctrlbar_pane_g3

0xb903,	// (0x000406c6) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb903,	// (0x000406c6) main_sp_fs_ctrlbar_pane_g4

0xb935,	// (0x000406f8) toolbar2_fixed_button_pane_cp01

0xb940,	// (0x00040703) toolbar2_fixed_button_pane_cp02

0xb94b,	// (0x0004070e) toolbar2_fixed_button_pane_cp03

0xc42e,	// (0x000411f1) list_welc_entry_pane_ParamLimits

0xc42e,	// (0x000411f1) list_welc_entry_pane

0xc496,	// (0x00041259) main_welc_pane_g3_ParamLimits

0xc496,	// (0x00041259) main_welc_pane_g3

0xc4d2,	// (0x00041295) main_welc_pane_t2_ParamLimits

0xc4d2,	// (0x00041295) main_welc_pane_t2

0xc4e6,	// (0x000412a9) main_welc_pane_t3_ParamLimits

0xc4e6,	// (0x000412a9) main_welc_pane_t3

0x0005,

0xfdea,	// (0x00044bad) main_welc_pane_t_ParamLimits

0xfdea,	// (0x00044bad) main_welc_pane_t

0xc5ec,	// (0x000413af) welc_button_pane_ParamLimits

0xc5ec,	// (0x000413af) welc_button_pane

0xc656,	// (0x00041419) welc_service_logo_pane_ParamLimits

0xc656,	// (0x00041419) welc_service_logo_pane

0xc741,	// (0x00041504) list_single_welc_entry_pane_ParamLimits

0xc741,	// (0x00041504) list_single_welc_entry_pane

0xc752,	// (0x00041515) list_single_welc_entry_pane_g1

0xc75a,	// (0x0004151d) list_single_welc_entry_pane_t1

0xc768,	// (0x0004152b) list_single_welc_entry_pane_t2

0x0001,

0xfdfc,	// (0x00044bbf) list_single_welc_entry_pane_t

0x0bbc,	// (0x0003597f) bg_button_pane_cp035

0xc776,	// (0x00041539) welc_button_pane_t1

0xefd7,	// (0x00043d9a) welc_service_logo_pane_g1

0xefe0,	// (0x00043da3) welc_service_logo_pane_g2

0x0001,

0xfe01,	// (0x00044bc4) welc_service_logo_pane_g

0x0bbc,	// (0x0003597f) main_int_radio_pane

0xdfda,	// (0x00042d9d) list_single_fs_dyc_pane_g1

0x545b,	// (0x0003a21e) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x545b,	// (0x0003a21e) list_double_large_graphic_phob2_pane_g3

0x5467,	// (0x0003a22a) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x5467,	// (0x0003a22a) list_double_large_graphic_phob2_pane_g4

0xc784,	// (0x00041547) main_int_radio1_pane_ParamLimits

0xc784,	// (0x00041547) main_int_radio1_pane

0xefe9,	// (0x00043dac) find_pane_cp02

0xc796,	// (0x00041559) input_focus_pane_cp12_ParamLimits

0xc796,	// (0x00041559) input_focus_pane_cp12

0xc7a2,	// (0x00041565) input_focus_pane_cp13_ParamLimits

0xc7a2,	// (0x00041565) input_focus_pane_cp13

0xc7ba,	// (0x0004157d) input_focus_pane_cp14_ParamLimits

0xc7ba,	// (0x0004157d) input_focus_pane_cp14

0xeff2,	// (0x00043db5) int_radio1_listscroll_pane

0xc7d2,	// (0x00041595) main_int_radio1_pane_g1_ParamLimits

0xc7d2,	// (0x00041595) main_int_radio1_pane_g1

0xc7e2,	// (0x000415a5) main_int_radio1_pane_t1_ParamLimits

0xc7e2,	// (0x000415a5) main_int_radio1_pane_t1

0xc7f6,	// (0x000415b9) main_int_radio1_pane_t2_ParamLimits

0xc7f6,	// (0x000415b9) main_int_radio1_pane_t2

0xc80a,	// (0x000415cd) main_int_radio1_pane_t3_ParamLimits

0xc80a,	// (0x000415cd) main_int_radio1_pane_t3

0xc81e,	// (0x000415e1) main_int_radio1_pane_t4_ParamLimits

0xc81e,	// (0x000415e1) main_int_radio1_pane_t4

0xeffc,	// (0x00043dbf) main_int_radio1_pane_t5_ParamLimits

0xeffc,	// (0x00043dbf) main_int_radio1_pane_t5

0xc835,	// (0x000415f8) main_int_radio1_pane_t6_ParamLimits

0xc835,	// (0x000415f8) main_int_radio1_pane_t6

0xc847,	// (0x0004160a) main_int_radio1_pane_t7_ParamLimits

0xc847,	// (0x0004160a) main_int_radio1_pane_t7

0xc859,	// (0x0004161c) main_int_radio1_pane_t8_ParamLimits

0xc859,	// (0x0004161c) main_int_radio1_pane_t8

0xc86d,	// (0x00041630) main_int_radio1_pane_t9_ParamLimits

0xc86d,	// (0x00041630) main_int_radio1_pane_t9

0xc87f,	// (0x00041642) main_int_radio1_pane_t10_ParamLimits

0xc87f,	// (0x00041642) main_int_radio1_pane_t10

0xc8b0,	// (0x00041673) main_int_radio1_pane_t11_ParamLimits

0xc8b0,	// (0x00041673) main_int_radio1_pane_t11

0xc8e1,	// (0x000416a4) main_int_radio1_pane_t12_ParamLimits

0xc8e1,	// (0x000416a4) main_int_radio1_pane_t12

0x000b,

0xfe06,	// (0x00044bc9) main_int_radio1_pane_t_ParamLimits

0xfe06,	// (0x00044bc9) main_int_radio1_pane_t

0x060a,	// (0x000353cd) int_radio_list_pane

0xe9f3,	// (0x000437b6) scroll_pane_cp037

0x0612,	// (0x000353d5) list_double_large_graphic_int_radio_pane_ParamLimits

0x0612,	// (0x000353d5) list_double_large_graphic_int_radio_pane

0x062b,	// (0x000353ee) list_double_large_graphic_int_radio_pane_g1

0x552f,	// (0x0003a2f2) list_double_large_graphic_int_radio_pane_t1

0x553d,	// (0x0003a300) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe1f,	// (0x00044be2) list_double_large_graphic_int_radio_pane_t

0x0bbc,	// (0x0003597f) list_highlight_pane_cp027

0xef94,	// (0x00043d57) main_button_pane_4

0xc4a2,	// (0x00041265) main_welc_pane_g4_ParamLimits

0xc4a2,	// (0x00041265) main_welc_pane_g4

0xc4f8,	// (0x000412bb) main_welc_pane_t4_ParamLimits

0xc4f8,	// (0x000412bb) main_welc_pane_t4

0xc50c,	// (0x000412cf) main_welc_pane_t5_ParamLimits

0xc50c,	// (0x000412cf) main_welc_pane_t5

0xc544,	// (0x00041307) main_welc_pane_t6_ParamLimits

0xc544,	// (0x00041307) main_welc_pane_t6

0xc5fa,	// (0x000413bd) welc_button_pane_2_ParamLimits

0xc5fa,	// (0x000413bd) welc_button_pane_2

0xc618,	// (0x000413db) welc_button_pane_3_ParamLimits

0xc618,	// (0x000413db) welc_button_pane_3

0xef94,	// (0x00043d57) welc_button_pane_4

0xc638,	// (0x000413fb) welc_button_pane_5_ParamLimits

0xc638,	// (0x000413fb) welc_button_pane_5

0x559f,	// (0x0003a362) main_popup_welc_pane

0x0668,	// (0x0003542b) main_welc_sk_g3

0x0672,	// (0x00035435) main_welc_sk_g4

0x067c,	// (0x0003543f) main_welc_sk_t3

0x068c,	// (0x0003544f) main_welc_sk_t4

0x069c,	// (0x0003545f) popup_welc_pane_t4

0x06aa,	// (0x0003546d) popup_welc_pane_t5

0x06b8,	// (0x0003547b) popup_welc_pane_t6

0x0bbc,	// (0x0003597f) main_acti_pane

0x0bbc,	// (0x0003597f) main_sso_pane

0xc8f8,	// (0x000416bb) sso_body_pane_ParamLimits

0xc8f8,	// (0x000416bb) sso_body_pane

0xc912,	// (0x000416d5) sso_logo_pane_ParamLimits

0xc912,	// (0x000416d5) sso_logo_pane

0xc943,	// (0x00041706) sso_sk_pane_ParamLimits

0xc943,	// (0x00041706) sso_sk_pane

0x06f6,	// (0x000354b9) main_sso_logo_pane_g1

0xc950,	// (0x00041713) sso_sk_pane_t1_ParamLimits

0xc950,	// (0x00041713) sso_sk_pane_t1

0xc964,	// (0x00041727) sso_sk_pane_t2_ParamLimits

0xc964,	// (0x00041727) sso_sk_pane_t2

0x0001,

0xfe24,	// (0x00044be7) sso_sk_pane_t_ParamLimits

0xfe24,	// (0x00044be7) sso_sk_pane_t

0x06ff,	// (0x000354c2) aid_sso_gap

0x0708,	// (0x000354cb) aid_sso_txt1

0x0712,	// (0x000354d5) aid_sso_txt2

0x071c,	// (0x000354df) aid_sso_txt3

0x0002,

0xfe29,	// (0x00044bec) aid_sso_txt

0x0726,	// (0x000354e9) aid_sso_widget

0xc9c1,	// (0x00041784) sso_btn_pane_ParamLimits

0xc9c1,	// (0x00041784) sso_btn_pane

0xca47,	// (0x0004180a) sso_option_pane_ParamLimits

0xca47,	// (0x0004180a) sso_option_pane

0xcaf1,	// (0x000418b4) sso_query_pane_ParamLimits

0xcaf1,	// (0x000418b4) sso_query_pane

0xcb41,	// (0x00041904) sso_query_pane_cp01_ParamLimits

0xcb41,	// (0x00041904) sso_query_pane_cp01

0xcb91,	// (0x00041954) sso_t_hdr_pane_ParamLimits

0xcb91,	// (0x00041954) sso_t_hdr_pane

0xcbb5,	// (0x00041978) sso_t_nml_pane_ParamLimits

0xcbb5,	// (0x00041978) sso_t_nml_pane

0xcc05,	// (0x000419c8) sso_t_sub_pane

0xc91f,	// (0x000416e2) sso_popup_window_ParamLimits

0xc91f,	// (0x000416e2) sso_popup_window

0xc976,	// (0x00041739) sso_apps_pane_ParamLimits

0xc976,	// (0x00041739) sso_apps_pane

0xc999,	// (0x0004175c) sso_body_pane_g1

0xc9a1,	// (0x00041764) sso_body_pane_t1

0xc9b1,	// (0x00041774) sso_body_pane_t2

0x0001,

0xfe30,	// (0x00044bf3) sso_body_pane_t

0xca07,	// (0x000417ca) sso_btn_pane_cp01_ParamLimits

0xca07,	// (0x000417ca) sso_btn_pane_cp01

0xcac3,	// (0x00041886) sso_prog_pane_ParamLimits

0xcac3,	// (0x00041886) sso_prog_pane

0xcc2a,	// (0x000419ed) sso_t_hdr_pane_t1_ParamLimits

0xcc2a,	// (0x000419ed) sso_t_hdr_pane_t1

0x0730,	// (0x000354f3) input_focus_pane_cp10_ParamLimits

0x0730,	// (0x000354f3) input_focus_pane_cp10

0x0744,	// (0x00035507) sso_query_pane_t1_ParamLimits

0x0744,	// (0x00035507) sso_query_pane_t1

0x0757,	// (0x0003551a) sso_query_pane_t2_ParamLimits

0x0757,	// (0x0003551a) sso_query_pane_t2

0x0770,	// (0x00035533) sso_query_pane_t3_ParamLimits

0x0770,	// (0x00035533) sso_query_pane_t3

0x079a,	// (0x0003555d) sso_query_pane_t4_ParamLimits

0x079a,	// (0x0003555d) sso_query_pane_t4

0x0003,

0xfe35,	// (0x00044bf8) sso_query_pane_t_ParamLimits

0xfe35,	// (0x00044bf8) sso_query_pane_t

0x07be,	// (0x00035581) bg_button_pane_cp22

0x0650,	// (0x00035413) sso_btn_pane_t1

0xcc43,	// (0x00041a06) sso_t_nml_pane_t1_ParamLimits

0xcc43,	// (0x00041a06) sso_t_nml_pane_t1

0x07c7,	// (0x0003558a) sso_option_row_pane_ParamLimits

0x07c7,	// (0x0003558a) sso_option_row_pane

0x07d4,	// (0x00035597) sso_t_sub_pane_t1_ParamLimits

0x07d4,	// (0x00035597) sso_t_sub_pane_t1

0x0fe3,	// (0x00035da6) bg_popup_window_pane_cp11_ParamLimits

0x0fe3,	// (0x00035da6) bg_popup_window_pane_cp11

0x07f1,	// (0x000355b4) popup_sk_window_cp01_ParamLimits

0x07f1,	// (0x000355b4) popup_sk_window_cp01

0x07fe,	// (0x000355c1) sso_popup_body_pane_ParamLimits

0x07fe,	// (0x000355c1) sso_popup_body_pane

0x080b,	// (0x000355ce) scroll_pane_cp21_ParamLimits

0x080b,	// (0x000355ce) scroll_pane_cp21

0x0818,	// (0x000355db) sso_popup_body_t_pane_ParamLimits

0x0818,	// (0x000355db) sso_popup_body_t_pane

0x0825,	// (0x000355e8) sso_popup_body_t_hdr_pane_ParamLimits

0x0825,	// (0x000355e8) sso_popup_body_t_hdr_pane

0xcc60,	// (0x00041a23) sso_popup_body_t_nml_pane_ParamLimits

0xcc60,	// (0x00041a23) sso_popup_body_t_nml_pane

0xcc7e,	// (0x00041a41) sso_popup_body_t_sub_pane_ParamLimits

0xcc7e,	// (0x00041a41) sso_popup_body_t_sub_pane

0x0837,	// (0x000355fa) sso_popup_body_t_hdr_pane_t1

0xcca1,	// (0x00041a64) sso_popup_body_t_nml_pane_t1_ParamLimits

0xcca1,	// (0x00041a64) sso_popup_body_t_nml_pane_t1

0x0847,	// (0x0003560a) sso_popup_body_t_sub_pane_t1_ParamLimits

0x0847,	// (0x0003560a) sso_popup_body_t_sub_pane_t1

0x12fb,	// (0x000360be) sso_prog_pane_g1

0xcce8,	// (0x00041aab) sso_apps_pane_comp1_ParamLimits

0xcce8,	// (0x00041aab) sso_apps_pane_comp1

0x086c,	// (0x0003562f) sso_apps_pane_comp1_g1

0x0874,	// (0x00035637) sso_apps_pane_comp1_t1

0x0890,	// (0x00035653) sso_option_row_pane_g1

0x08a8,	// (0x0003566b) sso_option_row_pane_t1

0xe755,	// (0x00043518) list_cmail_pane_ParamLimits

0x0bbc,	// (0x0003597f) main_call7_pane

0xc41c,	// (0x000411df) bg_welc_area_ParamLimits

0xc41c,	// (0x000411df) bg_welc_area

0xc57a,	// (0x0004133d) sso_t_hdr_pane_a_t1_ParamLimits

0xc57a,	// (0x0004133d) sso_t_hdr_pane_a_t1

0xc58e,	// (0x00041351) sso_t_nml_pane_a_t1_ParamLimits

0xc58e,	// (0x00041351) sso_t_nml_pane_a_t1

0xc5b8,	// (0x0004137b) sso_t_sub_pane_a_t1_ParamLimits

0xc5b8,	// (0x0004137b) sso_t_sub_pane_a_t1

0xc648,	// (0x0004140b) welc_button_pane_cp01_ParamLimits

0xc648,	// (0x0004140b) welc_button_pane_cp01

0x0650,	// (0x00035413) sso_btn_pane_t1_copy1

0x065f,	// (0x00035422) welc_button_pane_2_comp1

0x06c6,	// (0x00035489) sso_t_hdr_pane_p_t1

0x06d6,	// (0x00035499) sso_t_nml_pane_p_t1

0x06e6,	// (0x000354a9) sso_t_sub_pane_p_t1

0x0bbc,	// (0x0003597f) main_att_pane

0x0bbc,	// (0x0003597f) main_vod_pane

0xcc05,	// (0x000419c8) sso_t_sub_pane_ParamLimits

0x0882,	// (0x00035645) input_focus_pane_cp10_t1

0x08a8,	// (0x0003566b) sso_option_row_pane_t1_ParamLimits

0xcd02,	// (0x00041ac5) main_att_body_pane_ParamLimits

0xcd02,	// (0x00041ac5) main_att_body_pane

0xcd16,	// (0x00041ad9) att_btn_emg_pane_ParamLimits

0xcd16,	// (0x00041ad9) att_btn_emg_pane

0xcd2e,	// (0x00041af1) att_btn_pane_ParamLimits

0xcd2e,	// (0x00041af1) att_btn_pane

0xcd94,	// (0x00041b57) att_btn_pane_cp01_ParamLimits

0xcd94,	// (0x00041b57) att_btn_pane_cp01

0xcdc6,	// (0x00041b89) att_li_srv_pane_ParamLimits

0xcdc6,	// (0x00041b89) att_li_srv_pane

0xcdd8,	// (0x00041b9b) att_opt_pane_ParamLimits

0xcdd8,	// (0x00041b9b) att_opt_pane

0xce1c,	// (0x00041bdf) att_query_pane_ParamLimits

0xce1c,	// (0x00041bdf) att_query_pane

0xce8c,	// (0x00041c4f) att_query_pane_cp01_ParamLimits

0xce8c,	// (0x00041c4f) att_query_pane_cp01

0xced0,	// (0x00041c93) att_t_hdr_pane_ParamLimits

0xced0,	// (0x00041c93) att_t_hdr_pane

0xcf36,	// (0x00041cf9) att_t_nml_pane_ParamLimits

0xcf36,	// (0x00041cf9) att_t_nml_pane

0xcf9e,	// (0x00041d61) att_t_nml_pane_cp01_ParamLimits

0xcf9e,	// (0x00041d61) att_t_nml_pane_cp01

0xcfc2,	// (0x00041d85) att_t_nmlb_pane_ParamLimits

0xcfc2,	// (0x00041d85) att_t_nmlb_pane

0xd026,	// (0x00041de9) att_term_pane_ParamLimits

0xd026,	// (0x00041de9) att_term_pane

0xd068,	// (0x00041e2b) main_att_body_pane_g1_ParamLimits

0xd068,	// (0x00041e2b) main_att_body_pane_g1

0x08c4,	// (0x00035687) att_t_hdr_pane_t1_ParamLimits

0x08c4,	// (0x00035687) att_t_hdr_pane_t1

0x08dd,	// (0x000356a0) att_t_nml_pane_t1_ParamLimits

0x08dd,	// (0x000356a0) att_t_nml_pane_t1

0x0902,	// (0x000356c5) att_btn_pane_t1

0x07be,	// (0x00035581) bg_button_pane_cp23

0xd092,	// (0x00041e55) att_li_srv_row_pane_ParamLimits

0xd092,	// (0x00041e55) att_li_srv_row_pane

0x0911,	// (0x000356d4) att_t_nmlb_pane_t1_ParamLimits

0x0911,	// (0x000356d4) att_t_nmlb_pane_t1

0x092d,	// (0x000356f0) att_query_pane_t1

0x093c,	// (0x000356ff) att_query_pane_t2

0x094b,	// (0x0003570e) att_query_pane_t3

0x0002,

0xfe43,	// (0x00044c06) att_query_pane_t

0x095a,	// (0x0003571d) input_focus_pane_cp11

0x0963,	// (0x00035726) att_term_pane_t1_ParamLimits

0x0963,	// (0x00035726) att_term_pane_t1

0x0bbc,	// (0x0003597f) att_opt_row_pane

0x0980,	// (0x00035743) att_opt_row_pane_g1

0x0988,	// (0x0003574b) att_opt_row_pane_t1_ParamLimits

0x0988,	// (0x0003574b) att_opt_row_pane_t1

0xd0a2,	// (0x00041e65) att_li_srv_row_pane_g1

0xd0aa,	// (0x00041e6d) att_li_srv_row_pane_t1_ParamLimits

0xd0aa,	// (0x00041e6d) att_li_srv_row_pane_t1

0xd0aa,	// (0x00041e6d) att_li_srv_row_pane_t2_ParamLimits

0xd0aa,	// (0x00041e6d) att_li_srv_row_pane_t2

0x0001,

0xfe4a,	// (0x00044c0d) att_li_srv_row_pane_t_ParamLimits

0xfe4a,	// (0x00044c0d) att_li_srv_row_pane_t

0x09a1,	// (0x00035764) att_btn_close_pane_g1

0x0bbc,	// (0x0003597f) bg_button_pane_cp24

0x8114,	// (0x0003ced7) main_vod_body_pane_ParamLimits

0x8114,	// (0x0003ced7) main_vod_body_pane

0xd0bf,	// (0x00041e82) main_vod_body_pane_g1_ParamLimits

0xd0bf,	// (0x00041e82) main_vod_body_pane_g1

0xd0ef,	// (0x00041eb2) scroll_pane_cp24_ParamLimits

0xd0ef,	// (0x00041eb2) scroll_pane_cp24

0xd137,	// (0x00041efa) vod_btn_pane_ParamLimits

0xd137,	// (0x00041efa) vod_btn_pane

0xd175,	// (0x00041f38) vod_det_pane_ParamLimits

0xd175,	// (0x00041f38) vod_det_pane

0xd19f,	// (0x00041f62) vod_logo_g1_ParamLimits

0xd19f,	// (0x00041f62) vod_logo_g1

0xd1d9,	// (0x00041f9c) vod_opt_pane_ParamLimits

0xd1d9,	// (0x00041f9c) vod_opt_pane

0xd209,	// (0x00041fcc) vod_opt_pane_cp01_ParamLimits

0xd209,	// (0x00041fcc) vod_opt_pane_cp01

0xd231,	// (0x00041ff4) vod_query_pane_ParamLimits

0xd231,	// (0x00041ff4) vod_query_pane

0xd259,	// (0x0004201c) vod_query_pane_cp01_ParamLimits

0xd259,	// (0x0004201c) vod_query_pane_cp01

0xd265,	// (0x00042028) vod_t_nml_pane_ParamLimits

0xd265,	// (0x00042028) vod_t_nml_pane

0xd307,	// (0x000420ca) vod_t_nml_pane_cp01_ParamLimits

0xd307,	// (0x000420ca) vod_t_nml_pane_cp01

0xd33f,	// (0x00042102) vod_t_sub_pane_ParamLimits

0xd33f,	// (0x00042102) vod_t_sub_pane

0xd36b,	// (0x0004212e) vod_t_sub_pane_cp01_ParamLimits

0xd36b,	// (0x0004212e) vod_t_sub_pane_cp01

0x095a,	// (0x0003571d) vod_query_field_pane

0x09a9,	// (0x0003576c) vod_query_pane_t1

0x09b8,	// (0x0003577b) bg_button_pane_cp25

0x0650,	// (0x00035413) sso_btn_pane_t1_copy2

0xd393,	// (0x00042156) vod_t_nml_pane_t1_ParamLimits

0xd393,	// (0x00042156) vod_t_nml_pane_t1

0x09c1,	// (0x00035784) vod_opt_row_pane_ParamLimits

0x09c1,	// (0x00035784) vod_opt_row_pane

0x09d3,	// (0x00035796) vod_t_sub_pane_t1_ParamLimits

0x09d3,	// (0x00035796) vod_t_sub_pane_t1

0x09ec,	// (0x000357af) vod_det_cell_pane_ParamLimits

0x09ec,	// (0x000357af) vod_det_cell_pane

0x0bbc,	// (0x0003597f) input_focus_pane_cp15

0x09fd,	// (0x000357c0) vod_query_field_pane_t1

0x0a0b,	// (0x000357ce) vod_opt_row_pane_g1_ParamLimits

0x0a0b,	// (0x000357ce) vod_opt_row_pane_g1

0x0a17,	// (0x000357da) vod_opt_row_pane_t1_ParamLimits

0x0a17,	// (0x000357da) vod_opt_row_pane_t1

0x0a37,	// (0x000357fa) vod_det_cell_field_pane

0x0a40,	// (0x00035803) vod_det_cell_pane_g1

0x0a48,	// (0x0003580b) vod_det_cell_pane_t1

0x0bbc,	// (0x0003597f) input_focus_pane_cp16

0x0a57,	// (0x0003581a) vod_det_cell_field_pane_t1

0xbfe3,	// (0x00040da6) call7_btn_grp_pane_ParamLimits

0xbfe3,	// (0x00040da6) call7_btn_grp_pane

0xd3c8,	// (0x0004218b) call7_bubble_pane_ParamLimits

0xd3c8,	// (0x0004218b) call7_bubble_pane

0xc01e,	// (0x00040de1) cell_call7_btn_pane_ParamLimits

0xc01e,	// (0x00040de1) cell_call7_btn_pane

0xd3d6,	// (0x00042199) call7_pane_g1_ParamLimits

0xd3d6,	// (0x00042199) call7_pane_g1

0xd3e5,	// (0x000421a8) call7_windows_conf_pane_ParamLimits

0xd3e5,	// (0x000421a8) call7_windows_conf_pane

0xd401,	// (0x000421c4) popup_call7_1st_window_ParamLimits

0xd401,	// (0x000421c4) popup_call7_1st_window

0xd40f,	// (0x000421d2) popup_call7_2nd_window_ParamLimits

0xd40f,	// (0x000421d2) popup_call7_2nd_window

0xd41d,	// (0x000421e0) popup_call7_3rd_window_ParamLimits

0xd41d,	// (0x000421e0) popup_call7_3rd_window

0x0bbc,	// (0x0003597f) bg_button_pane_cp26

0xedfc,	// (0x00043bbf) cell_call7_btn_pane_g1

0xf00e,	// (0x00043dd1) cell_call7_btn_pane_t1

0x0bbc,	// (0x0003597f) bg_popup_window_pane_cp12

0x0a65,	// (0x00035828) popup_call7_1st_window_g1

0x0a6d,	// (0x00035830) popup_call7_1st_window_g2

0x0a75,	// (0x00035838) popup_call7_1st_window_g3

0x0002,

0xfe4f,	// (0x00044c12) popup_call7_1st_window_g

0x0a7d,	// (0x00035840) popup_call7_1st_window_t1

0x0a8c,	// (0x0003584f) popup_call7_1st_window_t2

0x0a9a,	// (0x0003585d) popup_call7_1st_window_t3

0x0002,

0xfe56,	// (0x00044c19) popup_call7_1st_window_t

0x0bbc,	// (0x0003597f) bg_popup_window_pane_cp13

0x0aa8,	// (0x0003586b) popup_call7_2nd_window_g1

0x0ab0,	// (0x00035873) popup_call7_2nd_window_g2

0x0ab8,	// (0x0003587b) popup_call7_2nd_window_g3

0x0002,

0xfe5d,	// (0x00044c20) popup_call7_2nd_window_g

0x0ac0,	// (0x00035883) popup_call7_2nd_window_t1

0x0bbc,	// (0x0003597f) bg_popup_window_pane_cp14

0x0acf,	// (0x00035892) call7_list_conf_pane

0x0ad7,	// (0x0003589a) call7_list_conf_row_pane_ParamLimits

0x0ad7,	// (0x0003589a) call7_list_conf_row_pane

0x0aea,	// (0x000358ad) call7_list_conf_row_pane_g1

0x0af2,	// (0x000358b5) call7_list_conf_row_pane_g2

0x0001,

0xfe64,	// (0x00044c27) call7_list_conf_row_pane_g

0x0afa,	// (0x000358bd) call7_list_conf_row_pane_t1

0x0bbc,	// (0x0003597f) list_highlight_pane_cp22

0xca95,	// (0x00041858) sso_option_pane_cp01_ParamLimits

0xca95,	// (0x00041858) sso_option_pane_cp01

0x1242,	// (0x00036005) msg_header_pane_ParamLimits

0x207c,	// (0x00036e3f) bg_button_pane_cp01_ParamLimits

0x4c15,	// (0x000399d8) input_focus_pane_cp07_ParamLimits

0xb97f,	// (0x00040742) popup_email_progress_window

0x12fb,	// (0x000360be) popup_email_progress_window_g1

0x0b08,	// (0x000358cb) popup_email_progress_window_g2

0x0001,

0xfe69,	// (0x00044c2c) popup_email_progress_window_g

0x0b10,	// (0x000358d3) popup_email_progress_window_t1

0x0bbc,	// (0x0003597f) cmail_conv_pane

0x5028,	// (0x00039deb) list_single_dyc_row_pane_g5_ParamLimits

0x5028,	// (0x00039deb) list_single_dyc_row_pane_g5

0x5034,	// (0x00039df7) list_single_dyc_row_pane_g6_ParamLimits

0x5034,	// (0x00039df7) list_single_dyc_row_pane_g6

0x504c,	// (0x00039e0f) list_single_dyc_row_pane_g7_ParamLimits

0x504c,	// (0x00039e0f) list_single_dyc_row_pane_g7

0xc43e,	// (0x00041201) main_button_pane_5_ParamLimits

0xc43e,	// (0x00041201) main_button_pane_5

0xc906,	// (0x000416c9) sso_emg_call_btn_pane_ParamLimits

0xc906,	// (0x000416c9) sso_emg_call_btn_pane

0xcc1a,	// (0x000419dd) sso_t_sub_pane_cp01_ParamLimits

0xcc1a,	// (0x000419dd) sso_t_sub_pane_cp01

0x0890,	// (0x00035653) sso_option_row_pane_g1_ParamLimits

0x089c,	// (0x0003565f) sso_option_row_pane_g2_ParamLimits

0x089c,	// (0x0003565f) sso_option_row_pane_g2

0x0001,

0xfe3e,	// (0x00044c01) sso_option_row_pane_g_ParamLimits

0xfe3e,	// (0x00044c01) sso_option_row_pane_g

0xcdac,	// (0x00041b6f) att_btn_pane_cp02_ParamLimits

0xcdac,	// (0x00041b6f) att_btn_pane_cp02

0x0b1e,	// (0x000358e1) cmail_conv_hdr_pane

0x0b27,	// (0x000358ea) list_cmail_conv_pane

0x0b31,	// (0x000358f4) scroll_pane_cp31

0x0b39,	// (0x000358fc) cmail_conv_hdr_pane_t1

0x0b47,	// (0x0003590a) cmail_conv_hdr_pane_t2

0x0001,

0xfe6e,	// (0x00044c31) cmail_conv_hdr_pane_t

0x0b55,	// (0x00035918) bubble_cmail_conv_pane_ParamLimits

0x0b55,	// (0x00035918) bubble_cmail_conv_pane

0xe883,	// (0x00043646) aid_size_colorization_pane

0x1561,	// (0x00036324) bg_bubble_cmail_conv_pane

0x0b6d,	// (0x00035930) body_bubble_cmail_conv_pane

0x1a38,	// (0x000367fb) bubble_cmail_conv_pane_g1

0x0b75,	// (0x00035938) bubble_cmail_conv_pane_g2

0x0b7d,	// (0x00035940) bubble_cmail_conv_pane_g3

0x0002,

0xfe73,	// (0x00044c36) bubble_cmail_conv_pane_g

0x0b85,	// (0x00035948) bubble_cmail_conv_pane_t1

0xe6fb,	// (0x000434be) bg_bubble_cmail_conv_pane_g1

0xe704,	// (0x000434c7) bg_bubble_cmail_conv_pane_g2

0xe70d,	// (0x000434d0) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfc14,	// (0x000449d7) bg_bubble_cmail_conv_pane_g

0x0b93,	// (0x00035956) body_bubble_cmail_conv_pane_t1_ParamLimits

0x0b93,	// (0x00035956) body_bubble_cmail_conv_pane_t1

0x0baa,	// (0x0003596d) body_bubble_cmail_conv_pane_t2_ParamLimits

0x0baa,	// (0x0003596d) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe7a,	// (0x00044c3d) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe7a,	// (0x00044c3d) body_bubble_cmail_conv_pane_t

0x12af,	// (0x00036072) list_highlight_pane_cp024_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
